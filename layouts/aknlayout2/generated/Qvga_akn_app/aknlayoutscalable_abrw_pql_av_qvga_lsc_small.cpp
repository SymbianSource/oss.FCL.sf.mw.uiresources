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

#include "aknlayoutscalable_abrw_pql_av_qvga_lsc_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt[]; }

namespace AknLayoutScalable_Abrw_pql_av_qvga_lsc_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt + 0x00021ffe };

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
0xcd00,	// (0x0002ecfe) Screen

0xcd0a,	// (0x0002ed08) application_window_ParamLimits

0xcd0a,	// (0x0002ed08) application_window

0x07f9,	// (0x000227f7) screen_g1

0xcd18,	// (0x0002ed16) area_bottom_pane_ParamLimits

0xcd18,	// (0x0002ed16) area_bottom_pane

0x0803,	// (0x00022801) area_top_pane_ParamLimits

0x0803,	// (0x00022801) area_top_pane

0x56df,	// (0x000276dd) main_pane_ParamLimits

0x56df,	// (0x000276dd) main_pane

0x087b,	// (0x00022879) misc_graphics

0xdd4f,	// (0x0002fd4d) battery_pane_ParamLimits

0xdd4f,	// (0x0002fd4d) battery_pane

0x2342,	// (0x00024340) bg_status_flat_pane_g8

0x234a,	// (0x00024348) bg_status_flat_pane_g9

0x1a5b,	// (0x00023a59) context_pane_ParamLimits

0x1a5b,	// (0x00023a59) context_pane

0xdea9,	// (0x0002fea7) navi_pane_ParamLimits

0xdea9,	// (0x0002fea7) navi_pane

0xdf1e,	// (0x0002ff1c) signal_pane_ParamLimits

0xdf1e,	// (0x0002ff1c) signal_pane

0x0008,

0xf86d,	// (0x0003186b) bg_status_flat_pane_g

0xdfaa,	// (0x0002ffa8) status_pane_g1_ParamLimits

0xdfaa,	// (0x0002ffa8) status_pane_g1

0xdfb6,	// (0x0002ffb4) status_pane_g2_ParamLimits

0xdfb6,	// (0x0002ffb4) status_pane_g2

0x1ac1,	// (0x00023abf) status_pane_g3_ParamLimits

0x1ac1,	// (0x00023abf) status_pane_g3

0x0004,

0xf7a0,	// (0x0003179e) status_pane_g_ParamLimits

0xf7a0,	// (0x0003179e) status_pane_g

0xdfc2,	// (0x0002ffc0) title_pane_ParamLimits

0xdfc2,	// (0x0002ffc0) title_pane

0xe01d,	// (0x0003001b) uni_indicator_pane_ParamLimits

0xe01d,	// (0x0003001b) uni_indicator_pane

0x19b2,	// (0x000239b0) bg_list_pane_ParamLimits

0x19b2,	// (0x000239b0) bg_list_pane

0xd761,	// (0x0002f75f) find_pane

0xbf7b,	// (0x0002df79) listscroll_app_pane_ParamLimits

0xbf7b,	// (0x0002df79) listscroll_app_pane

0x19d2,	// (0x000239d0) listscroll_form_pane

0xd769,	// (0x0002f767) listscroll_gen_pane_ParamLimits

0xd769,	// (0x0002f767) listscroll_gen_pane

0x6538,	// (0x00028536) listscroll_set_pane

0xbf8b,	// (0x0002df89) main_idle_act_pane

0x181d,	// (0x0002381b) main_idle_trad_pane

0x181d,	// (0x0002381b) main_list_empty_pane

0x0fff,	// (0x00022ffd) main_midp_pane

0x19ec,	// (0x000239ea) main_pane_g1_ParamLimits

0x19ec,	// (0x000239ea) main_pane_g1

0xbf9e,	// (0x0002df9c) popup_ai_message_window_ParamLimits

0xbf9e,	// (0x0002df9c) popup_ai_message_window

0xc022,	// (0x0002e020) popup_fep_china_uni_window_ParamLimits

0xc022,	// (0x0002e020) popup_fep_china_uni_window

0x6622,	// (0x00028620) popup_fep_japan_candidate_window_ParamLimits

0x6622,	// (0x00028620) popup_fep_japan_candidate_window

0x6640,	// (0x0002863e) popup_fep_japan_predictive_window_ParamLimits

0x6640,	// (0x0002863e) popup_fep_japan_predictive_window

0xc060,	// (0x0002e05e) popup_find_window

0xc079,	// (0x0002e077) popup_grid_graphic_window_ParamLimits

0xc079,	// (0x0002e077) popup_grid_graphic_window

0x6697,	// (0x00028695) popup_large_graphic_colour_window

0xc0f5,	// (0x0002e0f3) popup_menu_window_ParamLimits

0xc0f5,	// (0x0002e0f3) popup_menu_window

0xc253,	// (0x0002e251) popup_note_image_window

0xc21b,	// (0x0002e219) popup_note_wait_window_ParamLimits

0xc21b,	// (0x0002e219) popup_note_wait_window

0xc269,	// (0x0002e267) popup_note_window_ParamLimits

0xc269,	// (0x0002e267) popup_note_window

0xc2fd,	// (0x0002e2fb) popup_query_code_window_ParamLimits

0xc2fd,	// (0x0002e2fb) popup_query_code_window

0x6854,	// (0x00028852) popup_query_data_code_window_ParamLimits

0x6854,	// (0x00028852) popup_query_data_code_window

0xc335,	// (0x0002e333) popup_query_data_window_ParamLimits

0xc335,	// (0x0002e333) popup_query_data_window

0xc3a9,	// (0x0002e3a7) popup_query_sat_info_window_ParamLimits

0xc3a9,	// (0x0002e3a7) popup_query_sat_info_window

0xc436,	// (0x0002e434) popup_snote_single_graphic_window_ParamLimits

0xc436,	// (0x0002e434) popup_snote_single_graphic_window

0xc436,	// (0x0002e434) popup_snote_single_text_window_ParamLimits

0xc436,	// (0x0002e434) popup_snote_single_text_window

0x68c3,	// (0x000288c1) popup_sub_window_general

0x69c7,	// (0x000289c5) popup_window_general_ParamLimits

0x69c7,	// (0x000289c5) popup_window_general

0x19fa,	// (0x000239f8) power_save_pane

0xbe4c,	// (0x0002de4a) control_pane_g1_ParamLimits

0xbe4c,	// (0x0002de4a) control_pane_g1

0x63c2,	// (0x000283c0) control_pane_g2_ParamLimits

0x63c2,	// (0x000283c0) control_pane_g2

0x19a4,	// (0x000239a2) control_pane_g3_ParamLimits

0x19a4,	// (0x000239a2) control_pane_g3

0x0007,

0xf788,	// (0x00031786) control_pane_g_ParamLimits

0xf788,	// (0x00031786) control_pane_g

0xbe81,	// (0x0002de7f) control_pane_t1_ParamLimits

0xbe81,	// (0x0002de7f) control_pane_t1

0xbedd,	// (0x0002dedb) control_pane_t2_ParamLimits

0xbedd,	// (0x0002dedb) control_pane_t2

0x0002,

0xf799,	// (0x00031797) control_pane_t_ParamLimits

0xf799,	// (0x00031797) control_pane_t

0x194c,	// (0x0002394a) navi_navi_volume_pane_cp1

0x1954,	// (0x00023952) status_small_icon_pane

0x195c,	// (0x0002395a) status_small_pane_g1_ParamLimits

0x195c,	// (0x0002395a) status_small_pane_g1

0xdc38,	// (0x0002fc36) status_small_pane_g2_ParamLimits

0xdc38,	// (0x0002fc36) status_small_pane_g2

0xdc44,	// (0x0002fc42) status_small_pane_g3_ParamLimits

0xdc44,	// (0x0002fc42) status_small_pane_g3

0xdc50,	// (0x0002fc4e) status_small_pane_g4_ParamLimits

0xdc50,	// (0x0002fc4e) status_small_pane_g4

0xdc5c,	// (0x0002fc5a) status_small_pane_g5_ParamLimits

0xdc5c,	// (0x0002fc5a) status_small_pane_g5

0x1990,	// (0x0002398e) status_small_pane_g6_ParamLimits

0x1990,	// (0x0002398e) status_small_pane_g6

0x0007,

0xf777,	// (0x00031775) status_small_pane_g_ParamLimits

0xf777,	// (0x00031775) status_small_pane_g

0xdc8b,	// (0x0002fc89) status_small_pane_t1

0xdca5,	// (0x0002fca3) status_small_wait_pane_ParamLimits

0xdca5,	// (0x0002fca3) status_small_wait_pane

0xdaca,	// (0x0002fac8) aid_levels_signal_ParamLimits

0xdaca,	// (0x0002fac8) aid_levels_signal

0xdade,	// (0x0002fadc) signal_pane_g1_ParamLimits

0xdade,	// (0x0002fadc) signal_pane_g1

0xdaf8,	// (0x0002faf6) signal_pane_g2_ParamLimits

0xdaf8,	// (0x0002faf6) signal_pane_g2

0x0003,

0xf708,	// (0x00031706) signal_pane_g_ParamLimits

0xf708,	// (0x00031706) signal_pane_g

0x13c2,	// (0x000233c0) context_pane_g1

0xcd81,	// (0x0002ed7f) title_pane_g1

0xcdc3,	// (0x0002edc1) title_pane_t1

0x0891,	// (0x0002288f) title_pane_t2

0x08b7,	// (0x000228b5) title_pane_t3

0x0002,

0xf557,	// (0x00031555) title_pane_t

0xe043,	// (0x00030041) aid_levels_battery_ParamLimits

0xe043,	// (0x00030041) aid_levels_battery

0xe05b,	// (0x00030059) battery_pane_g1_ParamLimits

0xe05b,	// (0x00030059) battery_pane_g1

0xe076,	// (0x00030074) battery_pane_g2_ParamLimits

0xe076,	// (0x00030074) battery_pane_g2

0x0001,

0xf7ab,	// (0x000317a9) battery_pane_g_ParamLimits

0xf7ab,	// (0x000317a9) battery_pane_g

0xe21c,	// (0x0003021a) uni_indicator_pane_g1

0xe232,	// (0x00030230) uni_indicator_pane_g2

0xe248,	// (0x00030246) uni_indicator_pane_g3

0x0005,

0xf915,	// (0x00031913) uni_indicator_pane_g

0x0f25,	// (0x00022f23) navi_icon_pane_ParamLimits

0x0f25,	// (0x00022f23) navi_icon_pane

0x087b,	// (0x00022879) navi_midp_pane

0x087b,	// (0x00022879) navi_navi_pane

0x0f25,	// (0x00022f23) navi_text_pane_ParamLimits

0x0f25,	// (0x00022f23) navi_text_pane

0x07f9,	// (0x000227f7) status_small_wait_pane_g1

0x0bcc,	// (0x00022bca) status_small_wait_pane_g2

0x0001,

0xf910,	// (0x0003190e) status_small_wait_pane_g

0xe1c2,	// (0x000301c0) navi_navi_icon_text_pane

0xe1ca,	// (0x000301c8) navi_navi_pane_g1_ParamLimits

0xe1ca,	// (0x000301c8) navi_navi_pane_g1

0xe1dc,	// (0x000301da) navi_navi_pane_g2_ParamLimits

0xe1dc,	// (0x000301da) navi_navi_pane_g2

0x0001,

0xf8de,	// (0x000318dc) navi_navi_pane_g_ParamLimits

0xf8de,	// (0x000318dc) navi_navi_pane_g

0xe1ee,	// (0x000301ec) navi_navi_tabs_pane

0xe1c2,	// (0x000301c0) navi_navi_text_pane

0xe1c2,	// (0x000301c0) navi_navi_volume_pane

0x2888,	// (0x00024886) navi_text_pane_t1

0x287c,	// (0x0002487a) navi_icon_pane_g1

0x27d0,	// (0x000247ce) navi_navi_text_pane_t1

0x705c,	// (0x0002905a) navi_navi_volume_pane_g1

0xc684,	// (0x0002e682) volume_small_pane

0xe11e,	// (0x0003011c) navi_navi_icon_text_pane_g1

0xe126,	// (0x00030124) navi_navi_icon_text_pane_t1

0x238a,	// (0x00024388) navi_tabs_2_long_pane

0x238a,	// (0x00024388) navi_tabs_2_pane

0x238a,	// (0x00024388) navi_tabs_3_long_pane

0x238a,	// (0x00024388) navi_tabs_3_pane

0x238a,	// (0x00024388) navi_tabs_4_pane

0xc664,	// (0x0002e662) tabs_2_active_pane_ParamLimits

0xc664,	// (0x0002e662) tabs_2_active_pane

0xc674,	// (0x0002e672) tabs_2_passive_pane_ParamLimits

0xc674,	// (0x0002e672) tabs_2_passive_pane

0xc632,	// (0x0002e630) tabs_3_active_pane_ParamLimits

0xc632,	// (0x0002e630) tabs_3_active_pane

0xc642,	// (0x0002e640) tabs_3_passive_pane_ParamLimits

0xc642,	// (0x0002e640) tabs_3_passive_pane

0xc653,	// (0x0002e651) tabs_3_passive_pane_cp_ParamLimits

0xc653,	// (0x0002e651) tabs_3_passive_pane_cp

0xc5ee,	// (0x0002e5ec) tabs_4_active_pane_ParamLimits

0xc5ee,	// (0x0002e5ec) tabs_4_active_pane

0xc5ff,	// (0x0002e5fd) tabs_4_passive_pane_ParamLimits

0xc5ff,	// (0x0002e5fd) tabs_4_passive_pane

0xc610,	// (0x0002e60e) tabs_4_passive_pane_cp_ParamLimits

0xc610,	// (0x0002e60e) tabs_4_passive_pane_cp

0xc621,	// (0x0002e61f) tabs_4_passive_pane_cp2_ParamLimits

0xc621,	// (0x0002e61f) tabs_4_passive_pane_cp2

0xc5ce,	// (0x0002e5cc) tabs_2_long_active_pane_ParamLimits

0xc5ce,	// (0x0002e5cc) tabs_2_long_active_pane

0xc5de,	// (0x0002e5dc) tabs_2_long_passive_pane_ParamLimits

0xc5de,	// (0x0002e5dc) tabs_2_long_passive_pane

0xc597,	// (0x0002e595) tabs_3_long_active_pane_ParamLimits

0xc597,	// (0x0002e595) tabs_3_long_active_pane

0xc5aa,	// (0x0002e5a8) tabs_3_long_passive_pane_ParamLimits

0xc5aa,	// (0x0002e5a8) tabs_3_long_passive_pane

0xc5bb,	// (0x0002e5b9) tabs_3_long_passive_pane_cp_ParamLimits

0xc5bb,	// (0x0002e5b9) tabs_3_long_passive_pane_cp

0x6e89,	// (0x00028e87) volume_small_pane_g1

0x6e92,	// (0x00028e90) volume_small_pane_g2

0x6e9b,	// (0x00028e99) volume_small_pane_g3

0x6ea4,	// (0x00028ea2) volume_small_pane_g4

0x6ead,	// (0x00028eab) volume_small_pane_g5

0x6eb6,	// (0x00028eb4) volume_small_pane_g6

0x6ebf,	// (0x00028ebd) volume_small_pane_g7

0x6ec8,	// (0x00028ec6) volume_small_pane_g8

0x6ed1,	// (0x00028ecf) volume_small_pane_g9

0x6eda,	// (0x00028ed8) volume_small_pane_g10

0x0009,

0xf8aa,	// (0x000318a8) volume_small_pane_g

0x08c9,	// (0x000228c7) bg_active_tab_pane_cp2_ParamLimits

0x08c9,	// (0x000228c7) bg_active_tab_pane_cp2

0x08d7,	// (0x000228d5) tabs_3_active_pane_g1

0xce50,	// (0x0002ee4e) tabs_3_active_pane_t1

0x08c9,	// (0x000228c7) bg_passive_tab_pane_cp2_ParamLimits

0x08c9,	// (0x000228c7) bg_passive_tab_pane_cp2

0x08d7,	// (0x000228d5) tabs_3_passive_pane_g1

0xce50,	// (0x0002ee4e) tabs_3_passive_pane_t1

0x08c9,	// (0x000228c7) bg_active_tab_pane_cp3_ParamLimits

0x08c9,	// (0x000228c7) bg_active_tab_pane_cp3

0x2d83,	// (0x00024d81) tabs_4_active_pane_g1

0xce66,	// (0x0002ee64) tabs_4_active_pane_t1

0x08c9,	// (0x000228c7) bg_passive_tab_pane_cp3_ParamLimits

0x08c9,	// (0x000228c7) bg_passive_tab_pane_cp3

0x2d83,	// (0x00024d81) tabs_4_1_passive_pane_g1

0xce66,	// (0x0002ee64) tabs_4_1_passive_pane_t1

0x0fff,	// (0x00022ffd) list_highlight_pane_cp2

0xe29d,	// (0x0003029b) list_set_pane_ParamLimits

0xe29d,	// (0x0003029b) list_set_pane

0xe32b,	// (0x00030329) main_pane_set_t1_ParamLimits

0xe32b,	// (0x00030329) main_pane_set_t1

0xe34b,	// (0x00030349) main_pane_set_t2_ParamLimits

0xe34b,	// (0x00030349) main_pane_set_t2

0xe35f,	// (0x0003035d) main_pane_set_t3_ParamLimits

0xe35f,	// (0x0003035d) main_pane_set_t3

0xe371,	// (0x0003036f) main_pane_set_t4_ParamLimits

0xe371,	// (0x0003036f) main_pane_set_t4

0x0003,

0xf97a,	// (0x00031978) main_pane_set_t_ParamLimits

0xf97a,	// (0x00031978) main_pane_set_t

0xe383,	// (0x00030381) setting_code_pane

0xe38b,	// (0x00030389) setting_slider_graphic_pane

0xe38b,	// (0x00030389) setting_slider_pane

0xe38b,	// (0x00030389) setting_text_pane

0xe38b,	// (0x00030389) setting_volume_pane

0xbde5,	// (0x0002dde3) volume_set_pane

0x08df,	// (0x000228dd) bg_set_opt_pane_cp

0x59a4,	// (0x000279a2) setting_slider_pane_t1

0xbded,	// (0x0002ddeb) setting_slider_pane_t2

0xbe06,	// (0x0002de04) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0003155c) setting_slider_pane_t

0x59ea,	// (0x000279e8) slider_set_pane

0x087b,	// (0x00022879) bg_set_opt_pane_cp2

0x08ed,	// (0x000228eb) setting_slider_graphic_pane_g1

0xbe1d,	// (0x0002de1b) setting_slider_graphic_pane_t1

0xbe2c,	// (0x0002de2a) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x00031563) setting_slider_graphic_pane_t

0xbe3b,	// (0x0002de39) slider_set_pane_cp

0x087b,	// (0x00022879) input_focus_pane_cp1

0x2cc4,	// (0x00024cc2) list_set_text_pane

0x07f9,	// (0x000227f7) setting_text_pane_g1

0x087b,	// (0x00022879) input_focus_pane_cp2

0x07f9,	// (0x000227f7) setting_code_pane_g1

0x08f6,	// (0x000228f4) setting_code_pane_t1

0xce7c,	// (0x0002ee7a) set_text_pane_t1_ParamLimits

0xce7c,	// (0x0002ee7a) set_text_pane_t1

0x0ed4,	// (0x00022ed2) set_opt_bg_pane_g1

0x0edc,	// (0x00022eda) set_opt_bg_pane_g2

0xe25d,	// (0x0003025b) set_opt_bg_pane_g3

0x0eec,	// (0x00022eea) set_opt_bg_pane_g4

0x0ef4,	// (0x00022ef2) set_opt_bg_pane_g5

0x0efc,	// (0x00022efa) set_opt_bg_pane_g6

0xe265,	// (0x00030263) set_opt_bg_pane_g7

0xe26d,	// (0x0003026b) set_opt_bg_pane_g8

0xe275,	// (0x00030273) set_opt_bg_pane_g9

0x0008,

0xf967,	// (0x00031965) set_opt_bg_pane_g

0x2cb7,	// (0x00024cb5) slider_set_pane_g1

0x7137,	// (0x00029135) slider_set_pane_g2

0x0006,

0xf958,	// (0x00031956) slider_set_pane_g

0xc68d,	// (0x0002e68b) volume_set_pane_g1

0xc695,	// (0x0002e693) volume_set_pane_g2

0xc69d,	// (0x0002e69b) volume_set_pane_g3

0xc6a5,	// (0x0002e6a3) volume_set_pane_g4

0xc6ad,	// (0x0002e6ab) volume_set_pane_g5

0xc6b5,	// (0x0002e6b3) volume_set_pane_g6

0xc6bd,	// (0x0002e6bb) volume_set_pane_g7

0xc6c5,	// (0x0002e6c3) volume_set_pane_g8

0xc6cd,	// (0x0002e6cb) volume_set_pane_g9

0xc6d5,	// (0x0002e6d3) volume_set_pane_g10

0x0009,

0xf930,	// (0x0003192e) volume_set_pane_g

0xce96,	// (0x0002ee94) indicator_pane_ParamLimits

0xce96,	// (0x0002ee94) indicator_pane

0xcebe,	// (0x0002eebc) main_idle_pane_g2_ParamLimits

0xcebe,	// (0x0002eebc) main_idle_pane_g2

0xceee,	// (0x0002eeec) main_pane_idle_g1_ParamLimits

0xceee,	// (0x0002eeec) main_pane_idle_g1

0x0904,	// (0x00022902) popup_clock_digital_analogue_window_ParamLimits

0x0904,	// (0x00022902) popup_clock_digital_analogue_window

0xcf13,	// (0x0002ef11) soft_indicator_pane_ParamLimits

0xcf13,	// (0x0002ef11) soft_indicator_pane

0xcf2d,	// (0x0002ef2b) wallpaper_pane_ParamLimits

0xcf2d,	// (0x0002ef2b) wallpaper_pane

0x07f9,	// (0x000227f7) wallpaper_pane_g1

0xcf3f,	// (0x0002ef3d) indicator_pane_g1_ParamLimits

0xcf3f,	// (0x0002ef3d) indicator_pane_g1

0x2e3f,	// (0x00024e3d) navi_navi_icon_text_pane_srt_g1

0x0932,	// (0x00022930) soft_indicator_pane_t1

0x094c,	// (0x0002294a) aid_ps_area_pane

0xcf58,	// (0x0002ef56) aid_ps_clock_pane

0x095d,	// (0x0002295b) aid_ps_indicator_pane

0x0969,	// (0x00022967) indicator_ps_pane_ParamLimits

0x0969,	// (0x00022967) indicator_ps_pane

0x0978,	// (0x00022976) power_save_pane_g1_ParamLimits

0x0978,	// (0x00022976) power_save_pane_g1

0x0984,	// (0x00022982) power_save_pane_g2_ParamLimits

0x0984,	// (0x00022982) power_save_pane_g2

0x55ec,	// (0x000275ea) aid_navinavi_width_pane

0x094c,	// (0x0002294a) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x00031568) power_save_pane_g_ParamLimits

0xf56a,	// (0x00031568) power_save_pane_g

0x0992,	// (0x00022990) power_save_pane_t1_ParamLimits

0x0992,	// (0x00022990) power_save_pane_t1

0xcf58,	// (0x0002ef56) aid_ps_clock_pane_ParamLimits

0x095d,	// (0x0002295b) aid_ps_indicator_pane_ParamLimits

0x09a4,	// (0x000229a2) power_save_pane_t4_ParamLimits

0x09a4,	// (0x000229a2) power_save_pane_t4

0x0001,

0xf56f,	// (0x0003156d) power_save_pane_t_ParamLimits

0xf56f,	// (0x0003156d) power_save_pane_t

0x09ce,	// (0x000229cc) power_save_t3_ParamLimits

0x09ce,	// (0x000229cc) power_save_t3

0x09b9,	// (0x000229b7) power_save_t2_ParamLimits

0x09b9,	// (0x000229b7) power_save_t2

0x09e3,	// (0x000229e1) indicator_ps_pane_g1

0xcf64,	// (0x0002ef62) ai_gene_pane_ParamLimits

0xcf64,	// (0x0002ef62) ai_gene_pane

0xcf7b,	// (0x0002ef79) ai_links_pane_ParamLimits

0xcf7b,	// (0x0002ef79) ai_links_pane

0xcf8d,	// (0x0002ef8b) indicator_pane_cp1_ParamLimits

0xcf8d,	// (0x0002ef8b) indicator_pane_cp1

0xcf9c,	// (0x0002ef9a) main_pane_idle_g1_cp_ParamLimits

0xcf9c,	// (0x0002ef9a) main_pane_idle_g1_cp

0x09ec,	// (0x000229ea) popup_ai_links_title_window

0xcfb4,	// (0x0002efb2) soft_indicator_pane_cp1_ParamLimits

0xcfb4,	// (0x0002efb2) soft_indicator_pane_cp1

0x2b0d,	// (0x00024b0b) ai_links_pane_g1

0x2b16,	// (0x00024b14) grid_ai_links_pane

0xe213,	// (0x00030211) ai_gene_pane_1

0x2afb,	// (0x00024af9) ai_gene_pane_2

0x2b04,	// (0x00024b02) list_highlight_pane_cp4

0xe1f7,	// (0x000301f5) cell_ai_link_pane_ParamLimits

0xe1f7,	// (0x000301f5) cell_ai_link_pane

0x2af3,	// (0x00024af1) cell_ai_link_pane_g1

0x0bcc,	// (0x00022bca) cell_ai_link_pane_g2

0x0001,

0xf90b,	// (0x00031909) cell_ai_link_pane_g

0x087b,	// (0x00022879) grid_highlight_cp2

0x087b,	// (0x00022879) bg_popup_sub_pane_cp1

0x0a03,	// (0x00022a01) popup_ai_links_title_window_t1

0x2a45,	// (0x00024a43) ai_gene_pane_1_g1_ParamLimits

0x2a45,	// (0x00024a43) ai_gene_pane_1_g1

0x2a51,	// (0x00024a4f) ai_gene_pane_1_g2_ParamLimits

0x2a51,	// (0x00024a4f) ai_gene_pane_1_g2

0x0001,

0xf901,	// (0x000318ff) ai_gene_pane_1_g_ParamLimits

0xf901,	// (0x000318ff) ai_gene_pane_1_g

0x2a5e,	// (0x00024a5c) ai_gene_pane_1_t1_ParamLimits

0x2a5e,	// (0x00024a5c) ai_gene_pane_1_t1

0x2a92,	// (0x00024a90) grid_ai_soft_ind_pane

0x2a30,	// (0x00024a2e) ai_gene_pane_2_t1_ParamLimits

0x2a30,	// (0x00024a2e) ai_gene_pane_2_t1

0xcfc8,	// (0x0002efc6) main_pane_empty_t1_ParamLimits

0xcfc8,	// (0x0002efc6) main_pane_empty_t1

0xcfe5,	// (0x0002efe3) main_pane_empty_t2_ParamLimits

0xcfe5,	// (0x0002efe3) main_pane_empty_t2

0xcffd,	// (0x0002effb) main_pane_empty_t3_ParamLimits

0xcffd,	// (0x0002effb) main_pane_empty_t3

0xd010,	// (0x0002f00e) main_pane_empty_t4_ParamLimits

0xd010,	// (0x0002f00e) main_pane_empty_t4

0xd023,	// (0x0002f021) main_pane_empty_t5_ParamLimits

0xd023,	// (0x0002f021) main_pane_empty_t5

0x0004,

0xf574,	// (0x00031572) main_pane_empty_t_ParamLimits

0xf574,	// (0x00031572) main_pane_empty_t

0x0f25,	// (0x00022f23) bg_popup_window_pane_ParamLimits

0x0f25,	// (0x00022f23) bg_popup_window_pane

0x27df,	// (0x000247dd) find_popup_pane_cp2_ParamLimits

0x27df,	// (0x000247dd) find_popup_pane_cp2

0x27eb,	// (0x000247e9) heading_pane_ParamLimits

0x27eb,	// (0x000247e9) heading_pane

0x087b,	// (0x00022879) bg_popup_sub_pane

0xe143,	// (0x00030141) bg_popup_window_pane_g1_ParamLimits

0xe143,	// (0x00030141) bg_popup_window_pane_g1

0xe152,	// (0x00030150) bg_popup_window_pane_g2_ParamLimits

0xe152,	// (0x00030150) bg_popup_window_pane_g2

0xe15e,	// (0x0003015c) bg_popup_window_pane_g3_ParamLimits

0xe15e,	// (0x0003015c) bg_popup_window_pane_g3

0xe16a,	// (0x00030168) bg_popup_window_pane_g4_ParamLimits

0xe16a,	// (0x00030168) bg_popup_window_pane_g4

0xe179,	// (0x00030177) bg_popup_window_pane_g5_ParamLimits

0xe179,	// (0x00030177) bg_popup_window_pane_g5

0xe189,	// (0x00030187) bg_popup_window_pane_g6_ParamLimits

0xe189,	// (0x00030187) bg_popup_window_pane_g6

0xe195,	// (0x00030193) bg_popup_window_pane_g7_ParamLimits

0xe195,	// (0x00030193) bg_popup_window_pane_g7

0xe1a4,	// (0x000301a2) bg_popup_window_pane_g8_ParamLimits

0xe1a4,	// (0x000301a2) bg_popup_window_pane_g8

0xe1b3,	// (0x000301b1) bg_popup_window_pane_g9_ParamLimits

0xe1b3,	// (0x000301b1) bg_popup_window_pane_g9

0x27c4,	// (0x000247c2) bg_popup_window_pane_g10_ParamLimits

0x27c4,	// (0x000247c2) bg_popup_window_pane_g10

0x0009,

0xf8c9,	// (0x000318c7) bg_popup_window_pane_g_ParamLimits

0xf8c9,	// (0x000318c7) bg_popup_window_pane_g

0x277b,	// (0x00024779) bg_popup_heading_pane_ParamLimits

0x277b,	// (0x00024779) bg_popup_heading_pane

0x7429,	// (0x00029427) tabs_4_passive_pane_cp_srt_ParamLimits

0x7429,	// (0x00029427) tabs_4_passive_pane_cp_srt

0x743b,	// (0x00029439) tabs_4_passive_pane_srt_ParamLimits

0x278f,	// (0x0002478d) heading_pane_g2

0x743b,	// (0x00029439) tabs_4_passive_pane_srt

0x1c1d,	// (0x00023c1b) bg_passive_tab_pane_cp3_srt_ParamLimits

0x1c1d,	// (0x00023c1b) bg_passive_tab_pane_cp3_srt

0x2797,	// (0x00024795) heading_pane_t1_ParamLimits

0x2797,	// (0x00024795) heading_pane_t1

0x27ae,	// (0x000247ac) heading_pane_t2_ParamLimits

0x27ae,	// (0x000247ac) heading_pane_t2

0x0001,

0xf8c4,	// (0x000318c2) heading_pane_t_ParamLimits

0xf8c4,	// (0x000318c2) heading_pane_t

0x230a,	// (0x00024308) bg_popup_heading_pane_g1

0x239b,	// (0x00024399) bg_popup_heading_pane_g2

0x23a3,	// (0x000243a1) bg_popup_heading_pane_g3

0x23ab,	// (0x000243a9) bg_popup_heading_pane_g4

0x23b3,	// (0x000243b1) bg_popup_heading_pane_g5

0x23bb,	// (0x000243b9) bg_popup_heading_pane_g6

0x23c3,	// (0x000243c1) bg_popup_heading_pane_g7

0x23cb,	// (0x000243c9) bg_popup_heading_pane_g8

0x23d3,	// (0x000243d1) bg_popup_heading_pane_g9

0x0008,

0xf880,	// (0x0003187e) bg_popup_heading_pane_g

0x1ba9,	// (0x00023ba7) bg_popup_sub_pane_g1

0x1bb1,	// (0x00023baf) bg_popup_sub_pane_g2

0x1bb9,	// (0x00023bb7) bg_popup_sub_pane_g3

0x1bc1,	// (0x00023bbf) bg_popup_sub_pane_g4

0x1bc9,	// (0x00023bc7) bg_popup_sub_pane_g5

0x1bd1,	// (0x00023bcf) bg_popup_sub_pane_g6

0x1bd9,	// (0x00023bd7) bg_popup_sub_pane_g7

0x1be1,	// (0x00023bdf) bg_popup_sub_pane_g8

0x1be9,	// (0x00023be7) bg_popup_sub_pane_g9

0x0008,

0xf85a,	// (0x00031858) bg_popup_sub_pane_g

0x08c9,	// (0x000228c7) bg_popup_window_pane_cp5_ParamLimits

0x08c9,	// (0x000228c7) bg_popup_window_pane_cp5

0x0a20,	// (0x00022a1e) popup_note_window_g1_ParamLimits

0x0a20,	// (0x00022a1e) popup_note_window_g1

0x0a2c,	// (0x00022a2a) popup_note_window_t1_ParamLimits

0x0a2c,	// (0x00022a2a) popup_note_window_t1

0x0a42,	// (0x00022a40) popup_note_window_t2_ParamLimits

0x0a42,	// (0x00022a40) popup_note_window_t2

0x0a58,	// (0x00022a56) popup_note_window_t3_ParamLimits

0x0a58,	// (0x00022a56) popup_note_window_t3

0x0a6e,	// (0x00022a6c) popup_note_window_t4_ParamLimits

0x0a6e,	// (0x00022a6c) popup_note_window_t4

0x0a96,	// (0x00022a94) popup_note_window_t5_ParamLimits

0x0a96,	// (0x00022a94) popup_note_window_t5

0x0004,

0xf57f,	// (0x0003157d) popup_note_window_t_ParamLimits

0xf57f,	// (0x0003157d) popup_note_window_t

0x0ae0,	// (0x00022ade) bg_popup_window_pane_cp6_ParamLimits

0x0ae0,	// (0x00022ade) bg_popup_window_pane_cp6

0x2286,	// (0x00024284) popup_note_image_window_g1_ParamLimits

0x2286,	// (0x00024284) popup_note_image_window_g1

0x2292,	// (0x00024290) popup_note_image_window_g2_ParamLimits

0x2292,	// (0x00024290) popup_note_image_window_g2

0x0001,

0xf84e,	// (0x0003184c) popup_note_image_window_g_ParamLimits

0xf84e,	// (0x0003184c) popup_note_image_window_g

0x22ab,	// (0x000242a9) popup_note_image_window_t1_ParamLimits

0x22ab,	// (0x000242a9) popup_note_image_window_t1

0x22c4,	// (0x000242c2) popup_note_image_window_t2_ParamLimits

0x22c4,	// (0x000242c2) popup_note_image_window_t2

0x22dd,	// (0x000242db) popup_note_image_window_t3_ParamLimits

0x22dd,	// (0x000242db) popup_note_image_window_t3

0x0002,

0xf853,	// (0x00031851) popup_note_image_window_t_ParamLimits

0xf853,	// (0x00031851) popup_note_image_window_t

0x2171,	// (0x0002416f) bg_popup_window_pane_cp7_ParamLimits

0x2171,	// (0x0002416f) bg_popup_window_pane_cp7

0x21a1,	// (0x0002419f) popup_note_wait_window_g1_ParamLimits

0x21a1,	// (0x0002419f) popup_note_wait_window_g1

0x21ad,	// (0x000241ab) popup_note_wait_window_g2_ParamLimits

0x21ad,	// (0x000241ab) popup_note_wait_window_g2

0x0002,

0xf83c,	// (0x0003183a) popup_note_wait_window_g_ParamLimits

0xf83c,	// (0x0003183a) popup_note_wait_window_g

0x21c5,	// (0x000241c3) popup_note_wait_window_t1_ParamLimits

0x21c5,	// (0x000241c3) popup_note_wait_window_t1

0x21ec,	// (0x000241ea) popup_note_wait_window_t2_ParamLimits

0x21ec,	// (0x000241ea) popup_note_wait_window_t2

0x2209,	// (0x00024207) popup_note_wait_window_t3_ParamLimits

0x2209,	// (0x00024207) popup_note_wait_window_t3

0x221c,	// (0x0002421a) popup_note_wait_window_t4_ParamLimits

0x221c,	// (0x0002421a) popup_note_wait_window_t4

0x0004,

0xf843,	// (0x00031841) popup_note_wait_window_t_ParamLimits

0xf843,	// (0x00031841) popup_note_wait_window_t

0x2241,	// (0x0002423f) wait_bar_pane_ParamLimits

0x2241,	// (0x0002423f) wait_bar_pane

0x087b,	// (0x00022879) wait_anim_pane

0x087b,	// (0x00022879) wait_border_pane

0x07f9,	// (0x000227f7) wait_anim_pane_g1

0x07f9,	// (0x000227f7) wait_anim_pane_g2

0x0001,

0xf703,	// (0x00031701) wait_anim_pane_g

0x2121,	// (0x0002411f) wait_border_pane_g1

0x212a,	// (0x00024128) wait_border_pane_g2

0x2133,	// (0x00024131) wait_border_pane_g3

0x0002,

0xf835,	// (0x00031833) wait_border_pane_g

0x1f91,	// (0x00023f8f) bg_popup_window_pane_cp16_ParamLimits

0x1f91,	// (0x00023f8f) bg_popup_window_pane_cp16

0x2091,	// (0x0002408f) indicator_popup_pane_cp4_ParamLimits

0x2091,	// (0x0002408f) indicator_popup_pane_cp4

0x20a5,	// (0x000240a3) popup_query_data_window_t1_ParamLimits

0x20a5,	// (0x000240a3) popup_query_data_window_t1

0x20b7,	// (0x000240b5) popup_query_data_window_t2_ParamLimits

0x20b7,	// (0x000240b5) popup_query_data_window_t2

0x20d0,	// (0x000240ce) popup_query_data_window_t3_ParamLimits

0x20d0,	// (0x000240ce) popup_query_data_window_t3

0x0002,

0xf82e,	// (0x0003182c) popup_query_data_window_t_ParamLimits

0xf82e,	// (0x0003182c) popup_query_data_window_t

0x20ea,	// (0x000240e8) query_popup_data_pane_ParamLimits

0x20ea,	// (0x000240e8) query_popup_data_pane

0x20fe,	// (0x000240fc) query_popup_data_pane_cp1_ParamLimits

0x20fe,	// (0x000240fc) query_popup_data_pane_cp1

0x1f91,	// (0x00023f8f) bg_popup_window_pane_cp10_ParamLimits

0x1f91,	// (0x00023f8f) bg_popup_window_pane_cp10

0x1fc3,	// (0x00023fc1) indicator_popup_pane_ParamLimits

0x1fc3,	// (0x00023fc1) indicator_popup_pane

0x1fe5,	// (0x00023fe3) popup_query_code_window_t1_ParamLimits

0x1fe5,	// (0x00023fe3) popup_query_code_window_t1

0x1fff,	// (0x00023ffd) popup_query_code_window_t2_ParamLimits

0x1fff,	// (0x00023ffd) popup_query_code_window_t2

0x2048,	// (0x00024046) popup_query_code_window_t3_ParamLimits

0x2048,	// (0x00024046) popup_query_code_window_t3

0x0002,

0xf827,	// (0x00031825) popup_query_code_window_t_ParamLimits

0xf827,	// (0x00031825) popup_query_code_window_t

0x2077,	// (0x00024075) query_popup_pane_ParamLimits

0x2077,	// (0x00024075) query_popup_pane

0x0ae0,	// (0x00022ade) bg_popup_window_pane_cp15_ParamLimits

0x0ae0,	// (0x00022ade) bg_popup_window_pane_cp15

0x0afe,	// (0x00022afc) indicator_popup_pane_cp1_ParamLimits

0x0afe,	// (0x00022afc) indicator_popup_pane_cp1

0x0b11,	// (0x00022b0f) indicator_popup_pane_cp2_ParamLimits

0x0b11,	// (0x00022b0f) indicator_popup_pane_cp2

0x0b24,	// (0x00022b22) popup_query_data_code_window_g1_ParamLimits

0x0b24,	// (0x00022b22) popup_query_data_code_window_g1

0x0b37,	// (0x00022b35) popup_query_data_code_window_t1_ParamLimits

0x0b37,	// (0x00022b35) popup_query_data_code_window_t1

0x0b49,	// (0x00022b47) popup_query_data_code_window_t2_ParamLimits

0x0b49,	// (0x00022b47) popup_query_data_code_window_t2

0x0b5b,	// (0x00022b59) popup_query_data_code_window_t3_ParamLimits

0x0b5b,	// (0x00022b59) popup_query_data_code_window_t3

0x0b71,	// (0x00022b6f) popup_query_data_code_window_t4_ParamLimits

0x0b71,	// (0x00022b6f) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x00031588) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x00031588) popup_query_data_code_window_t

0x6d10,	// (0x00028d0e) list_single_midp_graphic_pane_g3

0x0b89,	// (0x00022b87) query_popup_data_pane_cp2_ParamLimits

0x0b9c,	// (0x00022b9a) query_popup_pane_cp2_ParamLimits

0x0b9c,	// (0x00022b9a) query_popup_pane_cp2

0x087b,	// (0x00022879) bg_popup_window_pane_cp11

0x1f7d,	// (0x00023f7b) heading_pane_cp5

0x0c28,	// (0x00022c26) listscroll_popup_info_pane

0x087b,	// (0x00022879) input_focus_pane_cp3

0x0baf,	// (0x00022bad) query_popup_pane_t1

0x0bbd,	// (0x00022bbb) list_popup_info_pane_ParamLimits

0x0bbd,	// (0x00022bbb) list_popup_info_pane

0x0bcc,	// (0x00022bca) listscroll_popup_info_pane_g1

0x0bd4,	// (0x00022bd2) scroll_pane_cp7

0x0bdc,	// (0x00022bda) popup_info_list_pane_t1_ParamLimits

0x0bdc,	// (0x00022bda) popup_info_list_pane_t1

0x0bf6,	// (0x00022bf4) popup_info_list_pane_t2_ParamLimits

0x0bf6,	// (0x00022bf4) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x00031591) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x00031591) popup_info_list_pane_t

0x087b,	// (0x00022879) bg_popup_window_pane_cp12

0x2e59,	// (0x00024e57) find_popup_pane

0x08df,	// (0x000228dd) bg_popup_window_pane_cp3

0x0c10,	// (0x00022c0e) heading_pane_cp3

0x0c1c,	// (0x00022c1a) listscroll_popup_graphic_pane

0x087b,	// (0x00022879) bg_popup_window_pane_cp4

0xd086,	// (0x0002f084) heading_pane_cp4

0x0c28,	// (0x00022c26) listscroll_popup_colour_pane

0x0c30,	// (0x00022c2e) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x0c30,	// (0x00022c2e) cell_large_graphic_colour_none_popup_pane

0xd08e,	// (0x0002f08c) grid_large_graphic_colour_popup_pane_ParamLimits

0xd08e,	// (0x0002f08c) grid_large_graphic_colour_popup_pane

0xd0aa,	// (0x0002f0a8) listscroll_popup_colour_pane_g1_ParamLimits

0xd0aa,	// (0x0002f0a8) listscroll_popup_colour_pane_g1

0xd0c1,	// (0x0002f0bf) listscroll_popup_colour_pane_g2_ParamLimits

0xd0c1,	// (0x0002f0bf) listscroll_popup_colour_pane_g2

0x0c40,	// (0x00022c3e) listscroll_popup_colour_pane_g3_ParamLimits

0x0c40,	// (0x00022c3e) listscroll_popup_colour_pane_g3

0xd0d5,	// (0x0002f0d3) listscroll_popup_colour_pane_g4_ParamLimits

0xd0d5,	// (0x0002f0d3) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x00031596) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x00031596) listscroll_popup_colour_pane_g

0x0c50,	// (0x00022c4e) scroll_pane_cp6_ParamLimits

0x0c50,	// (0x00022c4e) scroll_pane_cp6

0xd0e4,	// (0x0002f0e2) cell_large_graphic_colour_popup_pane_ParamLimits

0xd0e4,	// (0x0002f0e2) cell_large_graphic_colour_popup_pane

0x0c62,	// (0x00022c60) cell_large_graphic_colour_none_popup_pane_t1

0x087b,	// (0x00022879) grid_highlight_pane_cp5

0x0c71,	// (0x00022c6f) cell_large_graphic_colour_popup_pane_g1

0x0c79,	// (0x00022c77) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0003159f) cell_large_graphic_colour_popup_pane_g

0x0c81,	// (0x00022c7f) cell_large_graphic_colour_popup_pane_g2_copy1

0x0c8a,	// (0x00022c88) grid_highlight_pane_cp4

0x0c92,	// (0x00022c90) bg_popup_window_pane_cp8_ParamLimits

0x0c92,	// (0x00022c90) bg_popup_window_pane_cp8

0x0cad,	// (0x00022cab) popup_snote_single_text_window_g1_ParamLimits

0x0cad,	// (0x00022cab) popup_snote_single_text_window_g1

0x0cbf,	// (0x00022cbd) popup_snote_single_text_window_t1_ParamLimits

0x0cbf,	// (0x00022cbd) popup_snote_single_text_window_t1

0x0cd2,	// (0x00022cd0) popup_snote_single_text_window_t2_ParamLimits

0x0cd2,	// (0x00022cd0) popup_snote_single_text_window_t2

0x0ce5,	// (0x00022ce3) popup_snote_single_text_window_t3_ParamLimits

0x0ce5,	// (0x00022ce3) popup_snote_single_text_window_t3

0x0d1e,	// (0x00022d1c) popup_snote_single_text_window_t4_ParamLimits

0x0d1e,	// (0x00022d1c) popup_snote_single_text_window_t4

0x0d52,	// (0x00022d50) popup_snote_single_text_window_t5_ParamLimits

0x0d52,	// (0x00022d50) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x000315a4) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x000315a4) popup_snote_single_text_window_t

0x0d81,	// (0x00022d7f) bg_popup_window_pane_cp9_ParamLimits

0x0d81,	// (0x00022d7f) bg_popup_window_pane_cp9

0x0cad,	// (0x00022cab) popup_snote_single_graphic_window_g1_ParamLimits

0x0cad,	// (0x00022cab) popup_snote_single_graphic_window_g1

0x0d8f,	// (0x00022d8d) popup_snote_single_graphic_window_g2_ParamLimits

0x0d8f,	// (0x00022d8d) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x000315af) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x000315af) popup_snote_single_graphic_window_g

0x0d9b,	// (0x00022d99) popup_snote_single_graphic_window_t1_ParamLimits

0x0d9b,	// (0x00022d99) popup_snote_single_graphic_window_t1

0x0dae,	// (0x00022dac) popup_snote_single_graphic_window_t2_ParamLimits

0x0dae,	// (0x00022dac) popup_snote_single_graphic_window_t2

0x0ce5,	// (0x00022ce3) popup_snote_single_graphic_window_t3_ParamLimits

0x0ce5,	// (0x00022ce3) popup_snote_single_graphic_window_t3

0x0d1e,	// (0x00022d1c) popup_snote_single_graphic_window_t4_ParamLimits

0x0d1e,	// (0x00022d1c) popup_snote_single_graphic_window_t4

0x0d52,	// (0x00022d50) popup_snote_single_graphic_window_t5_ParamLimits

0x0d52,	// (0x00022d50) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x000315b4) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x000315b4) popup_snote_single_graphic_window_t

0xe486,	// (0x00030484) grid_graphic_popup_pane_ParamLimits

0xe486,	// (0x00030484) grid_graphic_popup_pane

0xe4a9,	// (0x000304a7) listscroll_popup_graphic_pane_g1_ParamLimits

0xe4a9,	// (0x000304a7) listscroll_popup_graphic_pane_g1

0xe4bd,	// (0x000304bb) listscroll_popup_graphic_pane_g2_ParamLimits

0xe4bd,	// (0x000304bb) listscroll_popup_graphic_pane_g2

0x0001,

0xf9a4,	// (0x000319a2) listscroll_popup_graphic_pane_g_ParamLimits

0xf9a4,	// (0x000319a2) listscroll_popup_graphic_pane_g

0x2dad,	// (0x00024dab) scroll_pane_cp5

0xe441,	// (0x0003043f) cell_graphic_popup_pane_ParamLimits

0xe441,	// (0x0003043f) cell_graphic_popup_pane

0x2e02,	// (0x00024e00) cell_graphic_popup_pane_g1

0x2e0a,	// (0x00024e08) cell_graphic_popup_pane_g2

0x0c81,	// (0x00022c7f) cell_graphic_popup_pane_g3

0x0002,

0xf99d,	// (0x0003199b) cell_graphic_popup_pane_g

0x2e13,	// (0x00024e11) cell_graphic_popup_pane_t2

0x0c8a,	// (0x00022c88) grid_highlight_pane_cp3

0x0dd3,	// (0x00022dd1) list_gen_pane_ParamLimits

0x0dd3,	// (0x00022dd1) list_gen_pane

0x0dfc,	// (0x00022dfa) scroll_pane

0xe414,	// (0x00030412) bg_list_pane_g1_ParamLimits

0xe414,	// (0x00030412) bg_list_pane_g1

0x2db9,	// (0x00024db7) bg_list_pane_g2_ParamLimits

0x2db9,	// (0x00024db7) bg_list_pane_g2

0x2dcc,	// (0x00024dca) bg_list_pane_g3_ParamLimits

0x2dcc,	// (0x00024dca) bg_list_pane_g3

0x2dde,	// (0x00024ddc) bg_list_pane_g4_ParamLimits

0x2dde,	// (0x00024ddc) bg_list_pane_g4

0xe42f,	// (0x0003042d) bg_list_pane_g5_ParamLimits

0xe42f,	// (0x0003042d) bg_list_pane_g5

0x0004,

0xf992,	// (0x00031990) bg_list_pane_g_ParamLimits

0xf992,	// (0x00031990) bg_list_pane_g

0xe3b8,	// (0x000303b6) list_double2_graphic_large_graphic_pane_ParamLimits

0xe3b8,	// (0x000303b6) list_double2_graphic_large_graphic_pane

0xe3b8,	// (0x000303b6) list_double2_graphic_pane_ParamLimits

0xe3b8,	// (0x000303b6) list_double2_graphic_pane

0xe3b8,	// (0x000303b6) list_double2_large_graphic_pane_ParamLimits

0xe3b8,	// (0x000303b6) list_double2_large_graphic_pane

0xe3ca,	// (0x000303c8) list_double2_pane_ParamLimits

0xe3ca,	// (0x000303c8) list_double2_pane

0xe3b8,	// (0x000303b6) list_double_graphic_heading_pane_ParamLimits

0xe3b8,	// (0x000303b6) list_double_graphic_heading_pane

0xe3b8,	// (0x000303b6) list_double_graphic_pane_ParamLimits

0xe3b8,	// (0x000303b6) list_double_graphic_pane

0xe3b8,	// (0x000303b6) list_double_heading_pane_ParamLimits

0xe3b8,	// (0x000303b6) list_double_heading_pane

0xe3b8,	// (0x000303b6) list_double_large_graphic_pane_ParamLimits

0xe3b8,	// (0x000303b6) list_double_large_graphic_pane

0xe3b8,	// (0x000303b6) list_double_number_pane_ParamLimits

0xe3b8,	// (0x000303b6) list_double_number_pane

0xe3b8,	// (0x000303b6) list_double_pane_ParamLimits

0xe3b8,	// (0x000303b6) list_double_pane

0xe3b8,	// (0x000303b6) list_double_time_pane_ParamLimits

0xe3b8,	// (0x000303b6) list_double_time_pane

0xe3b8,	// (0x000303b6) list_setting_number_pane_ParamLimits

0xe3b8,	// (0x000303b6) list_setting_number_pane

0xe3b8,	// (0x000303b6) list_setting_pane_ParamLimits

0xe3b8,	// (0x000303b6) list_setting_pane

0xd7d1,	// (0x0002f7cf) list_single_2graphic_pane_ParamLimits

0xd7d1,	// (0x0002f7cf) list_single_2graphic_pane

0xd7d1,	// (0x0002f7cf) list_single_graphic_heading_pane_ParamLimits

0xd7d1,	// (0x0002f7cf) list_single_graphic_heading_pane

0xd7d1,	// (0x0002f7cf) list_single_graphic_pane_ParamLimits

0xd7d1,	// (0x0002f7cf) list_single_graphic_pane

0xd7d1,	// (0x0002f7cf) list_single_heading_pane_ParamLimits

0xd7d1,	// (0x0002f7cf) list_single_heading_pane

0xe3b8,	// (0x000303b6) list_single_large_graphic_pane_ParamLimits

0xe3b8,	// (0x000303b6) list_single_large_graphic_pane

0xd7d1,	// (0x0002f7cf) list_single_number_heading_pane_ParamLimits

0xd7d1,	// (0x0002f7cf) list_single_number_heading_pane

0xd7d1,	// (0x0002f7cf) list_single_number_pane_ParamLimits

0xd7d1,	// (0x0002f7cf) list_single_number_pane

0xd7d1,	// (0x0002f7cf) list_single_pane_ParamLimits

0xd7d1,	// (0x0002f7cf) list_single_pane

0x087b,	// (0x00022879) list_highlight_pane_cp1

0x983b,	// (0x0002b839) list_single_pane_g1_ParamLimits

0x983b,	// (0x0002b839) list_single_pane_g1

0x9847,	// (0x0002b845) list_single_pane_g2_ParamLimits

0x9847,	// (0x0002b845) list_single_pane_g2

0x0001,

0xf5c8,	// (0x000315c6) list_single_pane_g_ParamLimits

0xf5c8,	// (0x000315c6) list_single_pane_g

0x9a78,	// (0x0002ba76) list_single_pane_t1_ParamLimits

0x9a78,	// (0x0002ba76) list_single_pane_t1

0x983b,	// (0x0002b839) list_single_number_pane_g1_ParamLimits

0x983b,	// (0x0002b839) list_single_number_pane_g1

0x9847,	// (0x0002b845) list_single_number_pane_g2_ParamLimits

0x9847,	// (0x0002b845) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x000315c6) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x000315c6) list_single_number_pane_g

0x9853,	// (0x0002b851) list_single_number_pane_t1_ParamLimits

0x9853,	// (0x0002b851) list_single_number_pane_t1

0xd794,	// (0x0002f792) list_single_number_pane_t2_ParamLimits

0xd794,	// (0x0002f792) list_single_number_pane_t2

0x0001,

0xf953,	// (0x00031951) list_single_number_pane_t_ParamLimits

0xf953,	// (0x00031951) list_single_number_pane_t

0x9118,	// (0x0002b116) list_single_graphic_pane_g1_ParamLimits

0x9118,	// (0x0002b116) list_single_graphic_pane_g1

0x983b,	// (0x0002b839) list_single_graphic_pane_g2_ParamLimits

0x983b,	// (0x0002b839) list_single_graphic_pane_g2

0x9847,	// (0x0002b845) list_single_graphic_pane_g3_ParamLimits

0x9847,	// (0x0002b845) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x000315bf) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x000315bf) list_single_graphic_pane_g

0x9853,	// (0x0002b851) list_single_graphic_pane_t1_ParamLimits

0x9853,	// (0x0002b851) list_single_graphic_pane_t1

0x983b,	// (0x0002b839) list_single_heading_pane_g1_ParamLimits

0x983b,	// (0x0002b839) list_single_heading_pane_g1

0x9847,	// (0x0002b845) list_single_heading_pane_g2_ParamLimits

0x9847,	// (0x0002b845) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x000315c6) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x000315c6) list_single_heading_pane_g

0xd10b,	// (0x0002f109) list_single_heading_pane_t1_ParamLimits

0xd10b,	// (0x0002f109) list_single_heading_pane_t1

0xd121,	// (0x0002f11f) list_single_heading_pane_t2_ParamLimits

0xd121,	// (0x0002f11f) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x000315cb) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x000315cb) list_single_heading_pane_t

0x983b,	// (0x0002b839) list_single_number_heading_pane_g1_ParamLimits

0x983b,	// (0x0002b839) list_single_number_heading_pane_g1

0x9847,	// (0x0002b845) list_single_number_heading_pane_g2_ParamLimits

0x9847,	// (0x0002b845) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x000315c6) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x000315c6) list_single_number_heading_pane_g

0xd10b,	// (0x0002f109) list_single_number_heading_pane_t1_ParamLimits

0xd10b,	// (0x0002f109) list_single_number_heading_pane_t1

0xd133,	// (0x0002f131) list_single_number_heading_pane_t2_ParamLimits

0xd133,	// (0x0002f131) list_single_number_heading_pane_t2

0x9a54,	// (0x0002ba52) list_single_number_heading_pane_t3_ParamLimits

0x9a54,	// (0x0002ba52) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x000315d0) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x000315d0) list_single_number_heading_pane_t

0x9118,	// (0x0002b116) list_single_graphic_heading_pane_g1_ParamLimits

0x9118,	// (0x0002b116) list_single_graphic_heading_pane_g1

0xd145,	// (0x0002f143) list_single_graphic_heading_pane_g4_ParamLimits

0xd145,	// (0x0002f143) list_single_graphic_heading_pane_g4

0x9847,	// (0x0002b845) list_single_graphic_heading_pane_g5_ParamLimits

0x9847,	// (0x0002b845) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x000315d7) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x000315d7) list_single_graphic_heading_pane_g

0xd10b,	// (0x0002f109) list_single_graphic_heading_pane_t1_ParamLimits

0xd10b,	// (0x0002f109) list_single_graphic_heading_pane_t1

0xd156,	// (0x0002f154) list_single_graphic_heading_pane_t2_ParamLimits

0xd156,	// (0x0002f154) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x000315de) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x000315de) list_single_graphic_heading_pane_t

0x9a8e,	// (0x0002ba8c) list_single_large_graphic_pane_g1_ParamLimits

0x9a8e,	// (0x0002ba8c) list_single_large_graphic_pane_g1

0x9a9a,	// (0x0002ba98) list_single_large_graphic_pane_g2_ParamLimits

0x9a9a,	// (0x0002ba98) list_single_large_graphic_pane_g2

0x9aa6,	// (0x0002baa4) list_single_large_graphic_pane_g3_ParamLimits

0x9aa6,	// (0x0002baa4) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x000315e3) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x000315e3) list_single_large_graphic_pane_g

0x212a,	// (0x00024128) wait_border_pane_g2_copy1

0xd168,	// (0x0002f166) list_single_large_graphic_pane_g4_cp2

0x9ab2,	// (0x0002bab0) list_single_large_graphic_pane_t1_ParamLimits

0x9ab2,	// (0x0002bab0) list_single_large_graphic_pane_t1

0x9124,	// (0x0002b122) list_double_pane_g1_ParamLimits

0x9124,	// (0x0002b122) list_double_pane_g1

0x9130,	// (0x0002b12e) list_double_pane_g2_ParamLimits

0x9130,	// (0x0002b12e) list_double_pane_g2

0x0001,

0xf5ec,	// (0x000315ea) list_double_pane_g_ParamLimits

0xf5ec,	// (0x000315ea) list_double_pane_g

0x9961,	// (0x0002b95f) list_double_pane_t1_ParamLimits

0x9961,	// (0x0002b95f) list_double_pane_t1

0xd170,	// (0x0002f16e) list_double_pane_t2_ParamLimits

0xd170,	// (0x0002f16e) list_double_pane_t2

0x0001,

0xf5f1,	// (0x000315ef) list_double_pane_t_ParamLimits

0xf5f1,	// (0x000315ef) list_double_pane_t

0xd182,	// (0x0002f180) list_double2_pane_g1_ParamLimits

0xd182,	// (0x0002f180) list_double2_pane_g1

0x9303,	// (0x0002b301) list_double2_pane_g2_ParamLimits

0x9303,	// (0x0002b301) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x000315f4) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x000315f4) list_double2_pane_g

0xd193,	// (0x0002f191) list_double2_pane_t1_ParamLimits

0xd193,	// (0x0002f191) list_double2_pane_t1

0xd1a9,	// (0x0002f1a7) list_double2_pane_t2_ParamLimits

0xd1a9,	// (0x0002f1a7) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x000315f9) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x000315f9) list_double2_pane_t

0x9124,	// (0x0002b122) list_double_number_pane_g1_ParamLimits

0x9124,	// (0x0002b122) list_double_number_pane_g1

0x9130,	// (0x0002b12e) list_double_number_pane_g2_ParamLimits

0x9130,	// (0x0002b12e) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x000315ea) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x000315ea) list_double_number_pane_g

0xd1bb,	// (0x0002f1b9) list_double_number_pane_t1_ParamLimits

0xd1bb,	// (0x0002f1b9) list_double_number_pane_t1

0x913c,	// (0x0002b13a) list_double_number_pane_t2_ParamLimits

0x913c,	// (0x0002b13a) list_double_number_pane_t2

0xd1cd,	// (0x0002f1cb) list_double_number_pane_t3_ParamLimits

0xd1cd,	// (0x0002f1cb) list_double_number_pane_t3

0x0002,

0xf600,	// (0x000315fe) list_double_number_pane_t_ParamLimits

0xf600,	// (0x000315fe) list_double_number_pane_t

0x9118,	// (0x0002b116) list_double_graphic_pane_g1_ParamLimits

0x9118,	// (0x0002b116) list_double_graphic_pane_g1

0xd1df,	// (0x0002f1dd) list_double_graphic_pane_g2_ParamLimits

0xd1df,	// (0x0002f1dd) list_double_graphic_pane_g2

0xd1ee,	// (0x0002f1ec) list_double_graphic_pane_g3_ParamLimits

0xd1ee,	// (0x0002f1ec) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x00031605) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x00031605) list_double_graphic_pane_g

0xd206,	// (0x0002f204) list_double_graphic_pane_t1_ParamLimits

0xd206,	// (0x0002f204) list_double_graphic_pane_t1

0xd21c,	// (0x0002f21a) list_double_graphic_pane_t2_ParamLimits

0xd21c,	// (0x0002f21a) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x0003160e) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x0003160e) list_double_graphic_pane_t

0xd22e,	// (0x0002f22c) list_double2_graphic_pane_g1_ParamLimits

0xd22e,	// (0x0002f22c) list_double2_graphic_pane_g1

0x9124,	// (0x0002b122) list_double2_graphic_pane_g2_ParamLimits

0x9124,	// (0x0002b122) list_double2_graphic_pane_g2

0x9130,	// (0x0002b12e) list_double2_graphic_pane_g3_ParamLimits

0x9130,	// (0x0002b12e) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x00031613) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x00031613) list_double2_graphic_pane_g

0xd23a,	// (0x0002f238) list_double2_graphic_pane_t1_ParamLimits

0xd23a,	// (0x0002f238) list_double2_graphic_pane_t1

0xd250,	// (0x0002f24e) list_double2_graphic_pane_t2_ParamLimits

0xd250,	// (0x0002f24e) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x0003161a) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x0003161a) list_double2_graphic_pane_t

0xd262,	// (0x0002f260) list_double_large_graphic_pane_g1_ParamLimits

0xd262,	// (0x0002f260) list_double_large_graphic_pane_g1

0xd28b,	// (0x0002f289) list_double_large_graphic_pane_g2_ParamLimits

0xd28b,	// (0x0002f289) list_double_large_graphic_pane_g2

0x9130,	// (0x0002b12e) list_double_large_graphic_pane_g3_ParamLimits

0x9130,	// (0x0002b12e) list_double_large_graphic_pane_g3

0xd29c,	// (0x0002f29a) list_double_large_graphic_pane_g4_ParamLimits

0xd29c,	// (0x0002f29a) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x0003161f) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x0003161f) list_double_large_graphic_pane_g

0xd2ad,	// (0x0002f2ab) list_double_large_graphic_pane_t1_ParamLimits

0xd2ad,	// (0x0002f2ab) list_double_large_graphic_pane_t1

0xd2c6,	// (0x0002f2c4) list_double_large_graphic_pane_t2_ParamLimits

0xd2c6,	// (0x0002f2c4) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x0003162a) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x0003162a) list_double_large_graphic_pane_t

0xd2d8,	// (0x0002f2d6) list_double2_large_graphic_pane_g1_ParamLimits

0xd2d8,	// (0x0002f2d6) list_double2_large_graphic_pane_g1

0xd2e4,	// (0x0002f2e2) list_double2_large_graphic_pane_g2_ParamLimits

0xd2e4,	// (0x0002f2e2) list_double2_large_graphic_pane_g2

0xd2f5,	// (0x0002f2f3) list_double2_large_graphic_pane_g3_ParamLimits

0xd2f5,	// (0x0002f2f3) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x0003162f) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x0003162f) list_double2_large_graphic_pane_g

0xd301,	// (0x0002f2ff) list_double2_large_graphic_pane_t1_ParamLimits

0xd301,	// (0x0002f2ff) list_double2_large_graphic_pane_t1

0xd317,	// (0x0002f315) list_double2_large_graphic_pane_t2_ParamLimits

0xd317,	// (0x0002f315) list_double2_large_graphic_pane_t2

0x0001,

0xf638,	// (0x00031636) list_double2_large_graphic_pane_t_ParamLimits

0xf638,	// (0x00031636) list_double2_large_graphic_pane_t

0xd329,	// (0x0002f327) list_double_heading_pane_g1_ParamLimits

0xd329,	// (0x0002f327) list_double_heading_pane_g1

0xd33a,	// (0x0002f338) list_double_heading_pane_g2_ParamLimits

0xd33a,	// (0x0002f338) list_double_heading_pane_g2

0x0001,

0xf63d,	// (0x0003163b) list_double_heading_pane_g_ParamLimits

0xf63d,	// (0x0003163b) list_double_heading_pane_g

0xd346,	// (0x0002f344) list_double_heading_pane_t1_ParamLimits

0xd346,	// (0x0002f344) list_double_heading_pane_t1

0xd35c,	// (0x0002f35a) list_double_heading_pane_t2_ParamLimits

0xd35c,	// (0x0002f35a) list_double_heading_pane_t2

0x0001,

0xf642,	// (0x00031640) list_double_heading_pane_t_ParamLimits

0xf642,	// (0x00031640) list_double_heading_pane_t

0xd36e,	// (0x0002f36c) list_double_graphic_heading_pane_g1_ParamLimits

0xd36e,	// (0x0002f36c) list_double_graphic_heading_pane_g1

0xd329,	// (0x0002f327) list_double_graphic_heading_pane_g2_ParamLimits

0xd329,	// (0x0002f327) list_double_graphic_heading_pane_g2

0xd33a,	// (0x0002f338) list_double_graphic_heading_pane_g3_ParamLimits

0xd33a,	// (0x0002f338) list_double_graphic_heading_pane_g3

0x0002,

0xf647,	// (0x00031645) list_double_graphic_heading_pane_g_ParamLimits

0xf647,	// (0x00031645) list_double_graphic_heading_pane_g

0xd37a,	// (0x0002f378) list_double_graphic_heading_pane_t1_ParamLimits

0xd37a,	// (0x0002f378) list_double_graphic_heading_pane_t1

0xd250,	// (0x0002f24e) list_double_graphic_heading_pane_t2_ParamLimits

0xd250,	// (0x0002f24e) list_double_graphic_heading_pane_t2

0x0001,

0xf64e,	// (0x0003164c) list_double_graphic_heading_pane_t_ParamLimits

0xf64e,	// (0x0003164c) list_double_graphic_heading_pane_t

0xd28b,	// (0x0002f289) list_double_time_pane_g1_ParamLimits

0xd28b,	// (0x0002f289) list_double_time_pane_g1

0x9130,	// (0x0002b12e) list_double_time_pane_g2_ParamLimits

0x9130,	// (0x0002b12e) list_double_time_pane_g2

0x0001,

0xf653,	// (0x00031651) list_double_time_pane_g_ParamLimits

0xf653,	// (0x00031651) list_double_time_pane_g

0x9152,	// (0x0002b150) list_double_time_pane_t1_ParamLimits

0x9152,	// (0x0002b150) list_double_time_pane_t1

0xd390,	// (0x0002f38e) list_double_time_pane_t2_ParamLimits

0xd390,	// (0x0002f38e) list_double_time_pane_t2

0xd3a2,	// (0x0002f3a0) list_double_time_pane_t3_ParamLimits

0xd3a2,	// (0x0002f3a0) list_double_time_pane_t3

0xd3b4,	// (0x0002f3b2) list_double_time_pane_t4_ParamLimits

0xd3b4,	// (0x0002f3b2) list_double_time_pane_t4

0x0003,

0xf658,	// (0x00031656) list_double_time_pane_t_ParamLimits

0xf658,	// (0x00031656) list_double_time_pane_t

0xd3c6,	// (0x0002f3c4) list_setting_pane_g1_ParamLimits

0xd3c6,	// (0x0002f3c4) list_setting_pane_g1

0xd33a,	// (0x0002f338) list_setting_pane_g2_ParamLimits

0xd33a,	// (0x0002f338) list_setting_pane_g2

0x0001,

0xf661,	// (0x0003165f) list_setting_pane_g_ParamLimits

0xf661,	// (0x0003165f) list_setting_pane_g

0xd3d2,	// (0x0002f3d0) list_setting_pane_t1_ParamLimits

0xd3d2,	// (0x0002f3d0) list_setting_pane_t1

0xd3e9,	// (0x0002f3e7) list_setting_pane_t2_ParamLimits

0xd3e9,	// (0x0002f3e7) list_setting_pane_t2

0x0002,

0xf666,	// (0x00031664) list_setting_pane_t_ParamLimits

0xf666,	// (0x00031664) list_setting_pane_t

0xd426,	// (0x0002f424) set_value_pane_cp_ParamLimits

0xd426,	// (0x0002f424) set_value_pane_cp

0xd432,	// (0x0002f430) list_setting_number_pane_g1_ParamLimits

0xd432,	// (0x0002f430) list_setting_number_pane_g1

0xd43e,	// (0x0002f43c) list_setting_number_pane_g2_ParamLimits

0xd43e,	// (0x0002f43c) list_setting_number_pane_g2

0x0001,

0xf66d,	// (0x0003166b) list_setting_number_pane_g_ParamLimits

0xf66d,	// (0x0003166b) list_setting_number_pane_g

0xd44a,	// (0x0002f448) list_setting_number_pane_t1_ParamLimits

0xd44a,	// (0x0002f448) list_setting_number_pane_t1

0xd45e,	// (0x0002f45c) list_setting_number_pane_t2_ParamLimits

0xd45e,	// (0x0002f45c) list_setting_number_pane_t2

0xd475,	// (0x0002f473) list_setting_number_pane_t3_ParamLimits

0xd475,	// (0x0002f473) list_setting_number_pane_t3

0x0003,

0xf672,	// (0x00031670) list_setting_number_pane_t_ParamLimits

0xf672,	// (0x00031670) list_setting_number_pane_t

0xd426,	// (0x0002f424) set_value_pane_ParamLimits

0xd426,	// (0x0002f424) set_value_pane

0x0e31,	// (0x00022e2f) bg_set_opt_pane_ParamLimits

0x0e31,	// (0x00022e2f) bg_set_opt_pane

0x9576,	// (0x0002b574) set_value_pane_t1

0x0e52,	// (0x00022e50) slider_set_pane_cp3

0x0e5b,	// (0x00022e59) volume_small_pane_cp

0x0e64,	// (0x00022e62) list_form_gen_pane

0x0e20,	// (0x00022e1e) scroll_pane_cp8

0xd4b8,	// (0x0002f4b6) form_field_data_pane_ParamLimits

0xd4b8,	// (0x0002f4b6) form_field_data_pane

0xd4cf,	// (0x0002f4cd) form_field_data_wide_pane_ParamLimits

0xd4cf,	// (0x0002f4cd) form_field_data_wide_pane

0xd4ef,	// (0x0002f4ed) form_field_popup_pane_ParamLimits

0xd4ef,	// (0x0002f4ed) form_field_popup_pane

0xd507,	// (0x0002f505) form_field_popup_wide_pane_ParamLimits

0xd507,	// (0x0002f505) form_field_popup_wide_pane

0x95fa,	// (0x0002b5f8) form_field_slider_pane_ParamLimits

0x95fa,	// (0x0002b5f8) form_field_slider_pane

0x960d,	// (0x0002b60b) form_field_slider_wide_pane_ParamLimits

0x960d,	// (0x0002b60b) form_field_slider_wide_pane

0x0e6d,	// (0x00022e6b) data_form_pane

0xd528,	// (0x0002f526) form_field_data_pane_t1

0x0e79,	// (0x00022e77) input_focus_pane

0x0e87,	// (0x00022e85) data_form_wide_pane

0x9634,	// (0x0002b632) form_field_data_wide_pane_t1

0x0c9f,	// (0x00022c9d) input_focus_pane_cp6

0xd540,	// (0x0002f53e) form_field_popup_pane_t1

0x0e79,	// (0x00022e77) input_focus_pane_cp7

0x0e6d,	// (0x00022e6b) list_form_pane

0x9676,	// (0x0002b674) form_field_popup_wide_pane_t1

0x0e79,	// (0x00022e77) input_focus_pane_cp8

0x0eb3,	// (0x00022eb1) list_form_wide_pane

0xd560,	// (0x0002f55e) form_field_slider_pane_t1_ParamLimits

0xd560,	// (0x0002f55e) form_field_slider_pane_t1

0xd576,	// (0x0002f574) form_field_slider_pane_t2_ParamLimits

0xd576,	// (0x0002f574) form_field_slider_pane_t2

0x0001,

0xf682,	// (0x00031680) form_field_slider_pane_t_ParamLimits

0xf682,	// (0x00031680) form_field_slider_pane_t

0x08c9,	// (0x000228c7) input_focus_pane_cp9_ParamLimits

0x08c9,	// (0x000228c7) input_focus_pane_cp9

0xd58b,	// (0x0002f589) slider_cont_pane_ParamLimits

0xd58b,	// (0x0002f589) slider_cont_pane

0x0ec2,	// (0x00022ec0) form_field_slider_wide_pane_t1_ParamLimits

0x0ec2,	// (0x00022ec0) form_field_slider_wide_pane_t1

0x96cb,	// (0x0002b6c9) form_field_slider_wide_pane_t2_ParamLimits

0x96cb,	// (0x0002b6c9) form_field_slider_wide_pane_t2

0x0001,

0xf687,	// (0x00031685) form_field_slider_wide_pane_t_ParamLimits

0xf687,	// (0x00031685) form_field_slider_wide_pane_t

0x08c9,	// (0x000228c7) input_focus_pane_cp10_ParamLimits

0x08c9,	// (0x000228c7) input_focus_pane_cp10

0xd59f,	// (0x0002f59d) slider_cont_pane_cp1_ParamLimits

0xd59f,	// (0x0002f59d) slider_cont_pane_cp1

0xd5b5,	// (0x0002f5b3) slider_form_pane_cp

0x0ed4,	// (0x00022ed2) input_focus_pane_g1

0x0edc,	// (0x00022eda) input_focus_pane_g2

0x0ee4,	// (0x00022ee2) input_focus_pane_g3

0x0eec,	// (0x00022eea) input_focus_pane_g4

0x0ef4,	// (0x00022ef2) input_focus_pane_g5

0x0efc,	// (0x00022efa) input_focus_pane_g6

0x0f04,	// (0x00022f02) input_focus_pane_g7

0x0f0c,	// (0x00022f0a) input_focus_pane_g8

0x0f14,	// (0x00022f12) input_focus_pane_g9

0x07f9,	// (0x000227f7) input_focus_pane_g10

0x0009,

0xf68c,	// (0x0003168a) input_focus_pane_g

0x2133,	// (0x00024131) wait_border_pane_g3_copy1

0xd5bd,	// (0x0002f5bb) data_form_pane_t1

0x07f9,	// (0x000227f7) wait_anim_pane_g1_copy1

0xd7a6,	// (0x0002f7a4) data_form_wide_pane_t1

0xd5d6,	// (0x0002f5d4) list_form_graphic_pane_cp_ParamLimits

0xd5d6,	// (0x0002f5d4) list_form_graphic_pane_cp

0x2cde,	// (0x00024cdc) slider_form_pane_g1

0x2ce7,	// (0x00024ce5) slider_form_pane_g2

0x0006,

0xf983,	// (0x00031981) slider_form_pane_g

0xd5ea,	// (0x0002f5e8) list_form_graphic_pane_ParamLimits

0xd5ea,	// (0x0002f5e8) list_form_graphic_pane

0x972b,	// (0x0002b729) list_form_graphic_pane_g1

0x9733,	// (0x0002b731) list_form_graphic_pane_t1_ParamLimits

0x9733,	// (0x0002b731) list_form_graphic_pane_t1

0x08df,	// (0x000228dd) list_highlight_pane_cp5_ParamLimits

0x08df,	// (0x000228dd) list_highlight_pane_cp5

0xd5ff,	// (0x0002f5fd) find_pane_g1

0x0f1c,	// (0x00022f1a) input_find_pane

0xd60a,	// (0x0002f608) input_find_pane_g1_ParamLimits

0xd60a,	// (0x0002f608) input_find_pane_g1

0x975d,	// (0x0002b75b) input_find_pane_t1_ParamLimits

0x975d,	// (0x0002b75b) input_find_pane_t1

0x9772,	// (0x0002b770) input_find_pane_t2_ParamLimits

0x9772,	// (0x0002b770) input_find_pane_t2

0x0001,

0xf6a1,	// (0x0003169f) input_find_pane_t_ParamLimits

0xf6a1,	// (0x0003169f) input_find_pane_t

0x0f25,	// (0x00022f23) input_focus_pane_cp5_ParamLimits

0x0f25,	// (0x00022f23) input_focus_pane_cp5

0x08c9,	// (0x000228c7) bg_popup_window_pane_cp2_ParamLimits

0x08c9,	// (0x000228c7) bg_popup_window_pane_cp2

0x0f3f,	// (0x00022f3d) listscroll_menu_pane_ParamLimits

0x0f3f,	// (0x00022f3d) listscroll_menu_pane

0x0f4b,	// (0x00022f49) popup_submenu_window_ParamLimits

0x0f4b,	// (0x00022f49) popup_submenu_window

0x0f6f,	// (0x00022f6d) find_popup_pane_g1

0x0f77,	// (0x00022f75) input_popup_find_pane_cp

0x0f25,	// (0x00022f23) input_focus_pane_cp4_ParamLimits

0x0f25,	// (0x00022f23) input_focus_pane_cp4

0x0f81,	// (0x00022f7f) input_popup_find_pane_t1_ParamLimits

0x0f81,	// (0x00022f7f) input_popup_find_pane_t1

0x087b,	// (0x00022879) bg_popup_sub_pane_cp

0x0faf,	// (0x00022fad) listscroll_popup_sub_pane

0x0fb7,	// (0x00022fb5) list_submenu_pane_ParamLimits

0x0fb7,	// (0x00022fb5) list_submenu_pane

0x0fc8,	// (0x00022fc6) scroll_pane_cp4

0x0fd0,	// (0x00022fce) list_single_popup_submenu_pane_ParamLimits

0x0fd0,	// (0x00022fce) list_single_popup_submenu_pane

0x0fe2,	// (0x00022fe0) list_single_popup_submenu_pane_g1

0x0fea,	// (0x00022fe8) list_single_popup_submenu_pane_t1_ParamLimits

0x0fea,	// (0x00022fe8) list_single_popup_submenu_pane_t1

0x08c9,	// (0x000228c7) bg_active_tab_pane_cp1_ParamLimits

0x08c9,	// (0x000228c7) bg_active_tab_pane_cp1

0x2d93,	// (0x00024d91) tabs_2_active_pane_g1

0xd622,	// (0x0002f620) tabs_2_active_pane_t1

0x08c9,	// (0x000228c7) bg_passive_tab_pane_cp1_ParamLimits

0x08c9,	// (0x000228c7) bg_passive_tab_pane_cp1

0x2d93,	// (0x00024d91) tabs_2_passive_pane_g1

0xd622,	// (0x0002f620) tabs_2_passive_pane_t1

0x08df,	// (0x000228dd) bg_active_tab_pane_cp4

0xd638,	// (0x0002f636) tabs_2_long_active_pane_t1

0x0fff,	// (0x00022ffd) bg_passive_tab_pane_cp4

0x6d18,	// (0x00028d16) list_single_midp_graphic_pane_g4_ParamLimits

0x08df,	// (0x000228dd) bg_active_tab_pane_cp5

0xd64f,	// (0x0002f64d) tabs_3_long_active_pane_t1

0x0fff,	// (0x00022ffd) bg_passive_tab_pane_cp5

0x6d18,	// (0x00028d16) list_single_midp_graphic_pane_g4

0x08df,	// (0x000228dd) bg_popup_window_pane_cp13_ParamLimits

0x08df,	// (0x000228dd) bg_popup_window_pane_cp13

0x1014,	// (0x00023012) listscroll_popup_fast_pane_ParamLimits

0x1014,	// (0x00023012) listscroll_popup_fast_pane

0x1023,	// (0x00023021) grid_popup_fast_pane_ParamLimits

0x1023,	// (0x00023021) grid_popup_fast_pane

0x1035,	// (0x00023033) scroll_pane_cp9_ParamLimits

0x1035,	// (0x00023033) scroll_pane_cp9

0x402a,	// (0x00026028) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x402a,	// (0x00026028) list_single_graphic_hl_pane_t1_cp2

0x1059,	// (0x00023057) input_focus_pane_cp20_ParamLimits

0x1059,	// (0x00023057) input_focus_pane_cp20

0x1067,	// (0x00023065) query_popup_data_pane_t1_ParamLimits

0x1067,	// (0x00023065) query_popup_data_pane_t1

0x107a,	// (0x00023078) query_popup_data_pane_t2_ParamLimits

0x107a,	// (0x00023078) query_popup_data_pane_t2

0x10c0,	// (0x000230be) query_popup_data_pane_t3_ParamLimits

0x10c0,	// (0x000230be) query_popup_data_pane_t3

0x1101,	// (0x000230ff) query_popup_data_pane_t4_ParamLimits

0x1101,	// (0x000230ff) query_popup_data_pane_t4

0x113d,	// (0x0002313b) query_popup_data_pane_t5_ParamLimits

0x113d,	// (0x0002313b) query_popup_data_pane_t5

0x0004,

0xf6a6,	// (0x000316a4) query_popup_data_pane_t_ParamLimits

0xf6a6,	// (0x000316a4) query_popup_data_pane_t

0x0ed4,	// (0x00022ed2) bg_set_opt_pane_g1

0x0edc,	// (0x00022eda) bg_set_opt_pane_g2

0x0ee4,	// (0x00022ee2) bg_set_opt_pane_g3

0x0eec,	// (0x00022eea) bg_set_opt_pane_g4

0x0ef4,	// (0x00022ef2) bg_set_opt_pane_g5

0x0efc,	// (0x00022efa) bg_set_opt_pane_g6

0x0f04,	// (0x00022f02) bg_set_opt_pane_g7

0x0f0c,	// (0x00022f0a) bg_set_opt_pane_g8

0x0f14,	// (0x00022f12) bg_set_opt_pane_g9

0x0008,

0xf6b1,	// (0x000316af) bg_set_opt_pane_g

0x607c,	// (0x0002807a) control_top_pane_stacon_ParamLimits

0x607c,	// (0x0002807a) control_top_pane_stacon

0x60cf,	// (0x000280cd) signal_pane_stacon_ParamLimits

0x60cf,	// (0x000280cd) signal_pane_stacon

0x1530,	// (0x0002352e) stacon_top_pane_g1_ParamLimits

0x1530,	// (0x0002352e) stacon_top_pane_g1

0x60f4,	// (0x000280f2) title_pane_stacon_ParamLimits

0x60f4,	// (0x000280f2) title_pane_stacon

0x6116,	// (0x00028114) uni_indicator_pane_stacon_ParamLimits

0x6116,	// (0x00028114) uni_indicator_pane_stacon

0x612b,	// (0x00028129) battery_pane_stacon_ParamLimits

0x612b,	// (0x00028129) battery_pane_stacon

0x616b,	// (0x00028169) control_bottom_pane_stacon_ParamLimits

0x616b,	// (0x00028169) control_bottom_pane_stacon

0x618a,	// (0x00028188) navi_pane_stacon_ParamLimits

0x618a,	// (0x00028188) navi_pane_stacon

0x1552,	// (0x00023550) stacon_bottom_pane_g1_ParamLimits

0x1552,	// (0x00023550) stacon_bottom_pane_g1

0x1174,	// (0x00023172) aid_levels_signal_lsc_ParamLimits

0x1174,	// (0x00023172) aid_levels_signal_lsc

0x5c81,	// (0x00027c7f) signal_pane_stacon_g1_ParamLimits

0x5c81,	// (0x00027c7f) signal_pane_stacon_g1

0x5c8d,	// (0x00027c8b) signal_pane_stacon_g2_ParamLimits

0x5c8d,	// (0x00027c8b) signal_pane_stacon_g2

0x0001,

0xf6c4,	// (0x000316c2) signal_pane_stacon_g_ParamLimits

0xf6c4,	// (0x000316c2) signal_pane_stacon_g

0x5cc1,	// (0x00027cbf) title_pane_stacon_t1_ParamLimits

0x5cc1,	// (0x00027cbf) title_pane_stacon_t1

0x11a2,	// (0x000231a0) uni_indicator_pane_stacon_g1

0x11ac,	// (0x000231aa) uni_indicator_pane_stacon_g2

0x118e,	// (0x0002318c) uni_indicator_pane_stacon_g3

0x1198,	// (0x00023196) uni_indicator_pane_stacon_g4

0x0003,

0xf6d0,	// (0x000316ce) uni_indicator_pane_stacon_g

0x5ce6,	// (0x00027ce4) control_top_pane_stacon_g1

0x5cee,	// (0x00027cec) control_top_pane_stacon_t1_ParamLimits

0x5cee,	// (0x00027cec) control_top_pane_stacon_t1

0x11b6,	// (0x000231b4) aid_levels_battery_lsc_ParamLimits

0x11b6,	// (0x000231b4) aid_levels_battery_lsc

0x5d1f,	// (0x00027d1d) battery_pane_stacon_g1_ParamLimits

0x5d1f,	// (0x00027d1d) battery_pane_stacon_g1

0x5d2b,	// (0x00027d29) battery_pane_stacon_g2_ParamLimits

0x5d2b,	// (0x00027d29) battery_pane_stacon_g2

0x0001,

0xf6d9,	// (0x000316d7) battery_pane_stacon_g_ParamLimits

0xf6d9,	// (0x000316d7) battery_pane_stacon_g

0x5d5a,	// (0x00027d58) navi_icon_pane_stacon

0x5d6a,	// (0x00027d68) navi_navi_pane_stacon

0x5d5a,	// (0x00027d58) navi_text_pane_stacon

0x5ce6,	// (0x00027ce4) control_bottom_pane_stacon_g1

0x5d7a,	// (0x00027d78) control_bottom_pane_stacon_t1_ParamLimits

0x5d7a,	// (0x00027d78) control_bottom_pane_stacon_t1

0xd665,	// (0x0002f663) grid_app_pane_ParamLimits

0xd665,	// (0x0002f663) grid_app_pane

0xd693,	// (0x0002f691) scroll_pane_cp15_ParamLimits

0xd693,	// (0x0002f691) scroll_pane_cp15

0xd6a6,	// (0x0002f6a4) cell_app_pane_ParamLimits

0xd6a6,	// (0x0002f6a4) cell_app_pane

0xd9cf,	// (0x0002f9cd) cell_app_pane_g1_ParamLimits

0xd9cf,	// (0x0002f9cd) cell_app_pane_g1

0x11de,	// (0x000231dc) cell_app_pane_g2_ParamLimits

0x11de,	// (0x000231dc) cell_app_pane_g2

0x0001,

0xf6de,	// (0x000316dc) cell_app_pane_g_ParamLimits

0xf6de,	// (0x000316dc) cell_app_pane_g

0xd9f3,	// (0x0002f9f1) cell_app_pane_t1_ParamLimits

0xd9f3,	// (0x0002f9f1) cell_app_pane_t1

0x11ea,	// (0x000231e8) grid_highlight_pane_ParamLimits

0x11ea,	// (0x000231e8) grid_highlight_pane

0x0ed4,	// (0x00022ed2) cell_highlight_pane_g1

0x0edc,	// (0x00022eda) cell_highlight_pane_g2

0x0ee4,	// (0x00022ee2) cell_highlight_pane_g3

0x0eec,	// (0x00022eea) cell_highlight_pane_g4

0x0ef4,	// (0x00022ef2) cell_highlight_pane_g5

0x0efc,	// (0x00022efa) cell_highlight_pane_g6

0x0f04,	// (0x00022f02) cell_highlight_pane_g7

0x0f0c,	// (0x00022f0a) cell_highlight_pane_g8

0x0f14,	// (0x00022f12) cell_highlight_pane_g9

0x07f9,	// (0x000227f7) cell_highlight_pane_g10

0x0009,

0xf68c,	// (0x0003168a) cell_highlight_pane_g

0x11fb,	// (0x000231f9) bg_scroll_pane

0x5e4a,	// (0x00027e48) scroll_handle_pane

0x1242,	// (0x00023240) scroll_bg_pane_g1

0x1257,	// (0x00023255) scroll_bg_pane_g2

0x126f,	// (0x0002326d) scroll_bg_pane_g3

0x0002,

0xf6e3,	// (0x000316e1) scroll_bg_pane_g

0x1284,	// (0x00023282) scroll_handle_focus_pane_ParamLimits

0x1284,	// (0x00023282) scroll_handle_focus_pane

0x1242,	// (0x00023240) scroll_handle_pane_g1

0x1291,	// (0x0002328f) scroll_handle_pane_g2

0x126f,	// (0x0002326d) scroll_handle_pane_g3

0x0002,

0xf6ea,	// (0x000316e8) scroll_handle_pane_g

0x0f25,	// (0x00022f23) bg_popup_sub_pane_cp21_ParamLimits

0x0f25,	// (0x00022f23) bg_popup_sub_pane_cp21

0x12a5,	// (0x000232a3) popup_fep_japan_predictive_window_t1_ParamLimits

0x12a5,	// (0x000232a3) popup_fep_japan_predictive_window_t1

0x12bc,	// (0x000232ba) popup_fep_japan_predictive_window_t2_ParamLimits

0x12bc,	// (0x000232ba) popup_fep_japan_predictive_window_t2

0x12ef,	// (0x000232ed) popup_fep_japan_predictive_window_t3_ParamLimits

0x12ef,	// (0x000232ed) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f1,	// (0x000316ef) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f1,	// (0x000316ef) popup_fep_japan_predictive_window_t

0x087b,	// (0x00022879) bg_popup_sub_pane_cp23

0x1326,	// (0x00023324) listscroll_japin_cand_pane

0x132e,	// (0x0002332c) popup_fep_japan_candidate_window_t1

0x133c,	// (0x0002333a) candidate_pane_ParamLimits

0x133c,	// (0x0002333a) candidate_pane

0x134f,	// (0x0002334d) scroll_pane_cp30

0x1357,	// (0x00023355) list_single_popup_jap_candidate_pane_ParamLimits

0x1357,	// (0x00023355) list_single_popup_jap_candidate_pane

0x087b,	// (0x00022879) list_highlight_pane_cp30

0x136c,	// (0x0002336a) list_single_popup_jap_candidate_pane_t1

0xda0a,	// (0x0002fa08) level_1_signal

0xda1c,	// (0x0002fa1a) level_2_signal

0xda2f,	// (0x0002fa2d) level_3_signal

0xda42,	// (0x0002fa40) level_4_signal

0xda55,	// (0x0002fa53) level_5_signal

0xda68,	// (0x0002fa66) level_6_signal

0xda7b,	// (0x0002fa79) level_7_signal

0xda0a,	// (0x0002fa08) level_1_battery

0xda1c,	// (0x0002fa1a) level_2_battery

0xda2f,	// (0x0002fa2d) level_3_battery

0xda42,	// (0x0002fa40) level_4_battery

0xda55,	// (0x0002fa53) level_5_battery

0xda68,	// (0x0002fa66) level_6_battery

0xda7b,	// (0x0002fa79) level_7_battery

0x1393,	// (0x00023391) list_menu_pane_ParamLimits

0x1393,	// (0x00023391) list_menu_pane

0x13a9,	// (0x000233a7) scroll_pane_cp25_ParamLimits

0x13a9,	// (0x000233a7) scroll_pane_cp25

0xda8e,	// (0x0002fa8c) list_double2_graphic_pane_cp2_ParamLimits

0xda8e,	// (0x0002fa8c) list_double2_graphic_pane_cp2

0xda8e,	// (0x0002fa8c) list_double2_large_graphic_pane_cp2_ParamLimits

0xda8e,	// (0x0002fa8c) list_double2_large_graphic_pane_cp2

0xda8e,	// (0x0002fa8c) list_double2_pane_cp2_ParamLimits

0xda8e,	// (0x0002fa8c) list_double2_pane_cp2

0xda8e,	// (0x0002fa8c) list_double_graphic_pane_cp2_ParamLimits

0xda8e,	// (0x0002fa8c) list_double_graphic_pane_cp2

0xda8e,	// (0x0002fa8c) list_double_large_graphic_pane_cp2_ParamLimits

0xda8e,	// (0x0002fa8c) list_double_large_graphic_pane_cp2

0xda8e,	// (0x0002fa8c) list_double_number_pane_cp2_ParamLimits

0xda8e,	// (0x0002fa8c) list_double_number_pane_cp2

0xda8e,	// (0x0002fa8c) list_double_pane_cp2_ParamLimits

0xda8e,	// (0x0002fa8c) list_double_pane_cp2

0xdaa9,	// (0x0002faa7) list_single_2graphic_pane_cp2_ParamLimits

0xdaa9,	// (0x0002faa7) list_single_2graphic_pane_cp2

0xdaa9,	// (0x0002faa7) list_single_graphic_heading_pane_cp2_ParamLimits

0xdaa9,	// (0x0002faa7) list_single_graphic_heading_pane_cp2

0xdaa9,	// (0x0002faa7) list_single_graphic_pane_cp2_ParamLimits

0xdaa9,	// (0x0002faa7) list_single_graphic_pane_cp2

0xdaa9,	// (0x0002faa7) list_single_heading_pane_cp2_ParamLimits

0xdaa9,	// (0x0002faa7) list_single_heading_pane_cp2

0xdaba,	// (0x0002fab8) list_single_large_graphic_pane_cp2_ParamLimits

0xdaba,	// (0x0002fab8) list_single_large_graphic_pane_cp2

0xdaa9,	// (0x0002faa7) list_single_number_heading_pane_cp2_ParamLimits

0xdaa9,	// (0x0002faa7) list_single_number_heading_pane_cp2

0xdaa9,	// (0x0002faa7) list_single_number_pane_cp2_ParamLimits

0xdaa9,	// (0x0002faa7) list_single_number_pane_cp2

0xdaa9,	// (0x0002faa7) list_single_pane_cp2_ParamLimits

0xdaa9,	// (0x0002faa7) list_single_pane_cp2

0x13cb,	// (0x000233c9) bg_popup_sub_pane_cp22

0x5fec,	// (0x00027fea) popup_side_volume_key_window_g1

0x6010,	// (0x0002800e) popup_side_volume_key_window_t1

0x602c,	// (0x0002802a) volume_small_pane_cp1

0x08c9,	// (0x000228c7) bg_popup_sub_pane_cp24_ParamLimits

0x08c9,	// (0x000228c7) bg_popup_sub_pane_cp24

0x13e1,	// (0x000233df) fep_china_uni_candidate_pane_ParamLimits

0x13e1,	// (0x000233df) fep_china_uni_candidate_pane

0x13f5,	// (0x000233f3) fep_china_uni_entry_pane

0x1405,	// (0x00023403) popup_fep_china_uni_window_g1

0x1421,	// (0x0002341f) fep_china_uni_entry_pane_g1

0x1429,	// (0x00023427) fep_china_uni_entry_pane_g2

0x0001,

0xf722,	// (0x00031720) fep_china_uni_entry_pane_g

0x1431,	// (0x0002342f) fep_entry_item_pane

0x143b,	// (0x00023439) fep_candidate_item_pane

0x1443,	// (0x00023441) fep_china_uni_candidate_pane_g1

0x144b,	// (0x00023449) fep_china_uni_candidate_pane_g2

0x1453,	// (0x00023451) fep_china_uni_candidate_pane_g3

0x145b,	// (0x00023459) fep_china_uni_candidate_pane_g4

0x0003,

0xf727,	// (0x00031725) fep_china_uni_candidate_pane_g

0x07f9,	// (0x000227f7) fep_entry_item_pane_g1

0x1463,	// (0x00023461) fep_entry_item_pane_t1_ParamLimits

0x1463,	// (0x00023461) fep_entry_item_pane_t1

0x1479,	// (0x00023477) fep_candidate_item_pane_t1_ParamLimits

0x1479,	// (0x00023477) fep_candidate_item_pane_t1

0x148e,	// (0x0002348c) fep_candidate_item_pane_t2_ParamLimits

0x148e,	// (0x0002348c) fep_candidate_item_pane_t2

0x0001,

0xf730,	// (0x0003172e) fep_candidate_item_pane_t_ParamLimits

0xf730,	// (0x0003172e) fep_candidate_item_pane_t

0x08df,	// (0x000228dd) list_highlight_pane_cp31_ParamLimits

0x08df,	// (0x000228dd) list_highlight_pane_cp31

0x14a0,	// (0x0002349e) level_1_signal_lsc

0x14a9,	// (0x000234a7) level_2_signal_lsc

0x14b2,	// (0x000234b0) level_3_signal_lsc

0x14bb,	// (0x000234b9) level_4_signal_lsc

0x14c4,	// (0x000234c2) level_5_signal_lsc

0x14cd,	// (0x000234cb) level_6_signal_lsc

0x14d6,	// (0x000234d4) level_7_signal_lsc

0x14d6,	// (0x000234d4) level_1_battery_lsc

0x14df,	// (0x000234dd) level_2_battery_lsc

0x14e8,	// (0x000234e6) level_3_battery_lsc

0x14f1,	// (0x000234ef) level_4_battery_lsc

0x14fa,	// (0x000234f8) level_5_battery_lsc

0x1503,	// (0x00023501) level_6_battery_lsc

0x14a0,	// (0x0002349e) level_7_battery_lsc

0x150c,	// (0x0002350a) scroll_handle_focus_pane_g1

0x1515,	// (0x00023513) scroll_handle_focus_pane_g2

0x151e,	// (0x0002351c) scroll_handle_focus_pane_g3

0x0002,

0xf735,	// (0x00031733) scroll_handle_focus_pane_g

0x9787,	// (0x0002b785) list_single_2graphic_pane_g1_ParamLimits

0x9787,	// (0x0002b785) list_single_2graphic_pane_g1

0xd145,	// (0x0002f143) list_single_2graphic_pane_g2_ParamLimits

0xd145,	// (0x0002f143) list_single_2graphic_pane_g2

0x9847,	// (0x0002b845) list_single_2graphic_pane_g3_ParamLimits

0x9847,	// (0x0002b845) list_single_2graphic_pane_g3

0xd6e3,	// (0x0002f6e1) list_single_2graphic_pane_g4_ParamLimits

0xd6e3,	// (0x0002f6e1) list_single_2graphic_pane_g4

0x0003,

0xf73c,	// (0x0003173a) list_single_2graphic_pane_g_ParamLimits

0xf73c,	// (0x0003173a) list_single_2graphic_pane_g

0xd6ef,	// (0x0002f6ed) list_single_2graphic_pane_t1_ParamLimits

0xd6ef,	// (0x0002f6ed) list_single_2graphic_pane_t1

0xd71d,	// (0x0002f71b) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xd71d,	// (0x0002f71b) list_double2_graphic_large_graphic_pane_g1

0xd2e4,	// (0x0002f2e2) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xd2e4,	// (0x0002f2e2) list_double2_graphic_large_graphic_pane_g2

0xd2f5,	// (0x0002f2f3) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xd2f5,	// (0x0002f2f3) list_double2_graphic_large_graphic_pane_g3

0xd72d,	// (0x0002f72b) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xd72d,	// (0x0002f72b) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf745,	// (0x00031743) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf745,	// (0x00031743) list_double2_graphic_large_graphic_pane_g

0xd739,	// (0x0002f737) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xd739,	// (0x0002f737) list_double2_graphic_large_graphic_pane_t1

0xd74f,	// (0x0002f74d) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xd74f,	// (0x0002f74d) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf74e,	// (0x0003174c) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf74e,	// (0x0003174c) list_double2_graphic_large_graphic_pane_t

0x15f9,	// (0x000235f7) popup_fast_swap_window_ParamLimits

0x15f9,	// (0x000235f7) popup_fast_swap_window

0x1615,	// (0x00023613) popup_side_volume_key_window

0x162f,	// (0x0002362d) stacon_top_pane

0x1639,	// (0x00023637) status_pane_ParamLimits

0x1639,	// (0x00023637) status_pane

0xdb89,	// (0x0002fb87) status_small_pane

0x087b,	// (0x00022879) control_pane

0x087b,	// (0x00022879) stacon_bottom_pane

0x0e20,	// (0x00022e1e) scroll_pane_cp121

0x0e64,	// (0x00022e62) set_content_pane

0x2da4,	// (0x00024da2) bg_active_tab_pane_g1_cp1

0x1527,	// (0x00023525) bg_active_tab_pane_g2_cp1

0x2d9b,	// (0x00024d99) bg_active_tab_pane_g3_cp1

0x2da4,	// (0x00024da2) bg_passive_tab_pane_g1_cp1

0x1527,	// (0x00023525) bg_passive_tab_pane_g2_cp1

0x2d9b,	// (0x00024d99) bg_passive_tab_pane_g3_cp1

0xdb3f,	// (0x0002fb3d) bg_active_tab_pane_g1_cp2

0x1527,	// (0x00023525) bg_active_tab_pane_g2_cp2

0xdb48,	// (0x0002fb46) bg_active_tab_pane_g3_cp2

0xdb3f,	// (0x0002fb3d) bg_passive_tab_pane_g1_cp2

0x1527,	// (0x00023525) bg_passive_tab_pane_g2_cp2

0xdb48,	// (0x0002fb46) bg_passive_tab_pane_g3_cp2

0xdb51,	// (0x0002fb4f) bg_active_tab_pane_g1_cp3

0x1527,	// (0x00023525) bg_active_tab_pane_g2_cp3

0xdb5a,	// (0x0002fb58) bg_active_tab_pane_g3_cp3

0xdb51,	// (0x0002fb4f) bg_passive_tab_pane_g1_cp3

0x1527,	// (0x00023525) bg_passive_tab_pane_g2_cp3

0xdb5a,	// (0x0002fb58) bg_passive_tab_pane_g3_cp3

0xdb63,	// (0x0002fb61) bg_active_tab_pane_g1_cp4

0x1527,	// (0x00023525) bg_active_tab_pane_g2_cp4

0xdb6c,	// (0x0002fb6a) bg_active_tab_pane_g3_cp4

0xdb63,	// (0x0002fb61) bg_passive_tab_pane_g1_cp4

0x1527,	// (0x00023525) bg_passive_tab_pane_g2_cp4

0xdb6c,	// (0x0002fb6a) bg_passive_tab_pane_g3_cp4

0x1577,	// (0x00023575) bg_active_tab_pane_g1_cp5

0x1527,	// (0x00023525) bg_active_tab_pane_g2_cp5

0x156e,	// (0x0002356c) bg_active_tab_pane_g3_cp5

0x1577,	// (0x00023575) bg_passive_tab_pane_g1_cp5

0x1527,	// (0x00023525) bg_passive_tab_pane_g2_cp5

0x156e,	// (0x0002356c) bg_passive_tab_pane_g3_cp5

0xdb75,	// (0x0002fb73) list_set_graphic_pane_ParamLimits

0xdb75,	// (0x0002fb73) list_set_graphic_pane

0x087b,	// (0x00022879) bg_set_opt_pane_cp4

0x1580,	// (0x0002357e) list_set_graphic_pane_g1_ParamLimits

0x1580,	// (0x0002357e) list_set_graphic_pane_g1

0x158c,	// (0x0002358a) list_set_graphic_pane_g2_ParamLimits

0x158c,	// (0x0002358a) list_set_graphic_pane_g2

0x0001,

0xf753,	// (0x00031751) list_set_graphic_pane_g_ParamLimits

0xf753,	// (0x00031751) list_set_graphic_pane_g

0x0009,

0xfad1,	// (0x00031acf) volume_small_pane_cp_g

0x15ae,	// (0x000235ac) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x15ae,	// (0x000235ac) list_double2_large_graphic_pane_g1_cp2

0x15ba,	// (0x000235b8) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x15ba,	// (0x000235b8) list_double2_large_graphic_pane_g2_cp2

0x15c9,	// (0x000235c7) list_double2_large_graphic_pane_g3_cp2

0x15d1,	// (0x000235cf) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x15d1,	// (0x000235cf) list_double2_large_graphic_pane_t1_cp2

0x15e7,	// (0x000235e5) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x15e7,	// (0x000235e5) list_double2_large_graphic_pane_t2_cp2

0x2aa2,	// (0x00024aa0) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x2aa2,	// (0x00024aa0) list_double_large_graphic_pane_g1_cp2

0x2ab3,	// (0x00024ab1) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x2ab3,	// (0x00024ab1) list_double_large_graphic_pane_g2_cp2

0x1714,	// (0x00023712) list_double_large_graphic_pane_g3_cp2

0x2ac2,	// (0x00024ac0) list_double_large_graphic_pane_g4_cp

0x2aca,	// (0x00024ac8) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x2aca,	// (0x00024ac8) list_double_large_graphic_pane_t1_cp2

0x2ae1,	// (0x00024adf) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x2ae1,	// (0x00024adf) list_double_large_graphic_pane_t2_cp2

0x1647,	// (0x00023645) list_double2_graphic_pane_g1_cp2_ParamLimits

0x1647,	// (0x00023645) list_double2_graphic_pane_g1_cp2

0x1653,	// (0x00023651) list_double2_graphic_pane_g2_cp2_ParamLimits

0x1653,	// (0x00023651) list_double2_graphic_pane_g2_cp2

0x1662,	// (0x00023660) list_double2_graphic_pane_g3_cp2

0x166a,	// (0x00023668) list_double2_graphic_pane_t1_cp2_ParamLimits

0x166a,	// (0x00023668) list_double2_graphic_pane_t1_cp2

0x1680,	// (0x0002367e) list_double2_graphic_pane_t2_cp2_ParamLimits

0x1680,	// (0x0002367e) list_double2_graphic_pane_t2_cp2

0x1692,	// (0x00023690) list_single_number_heading_pane_g1_cp2_ParamLimits

0x1692,	// (0x00023690) list_single_number_heading_pane_g1_cp2

0x169e,	// (0x0002369c) list_single_number_heading_pane_g2_cp2

0x16a6,	// (0x000236a4) list_single_number_heading_pane_t1_cp2_ParamLimits

0x16a6,	// (0x000236a4) list_single_number_heading_pane_t1_cp2

0x16bc,	// (0x000236ba) list_single_number_heading_pane_t2_cp2_ParamLimits

0x16bc,	// (0x000236ba) list_single_number_heading_pane_t2_cp2

0x16ce,	// (0x000236cc) list_single_number_heading_pane_t3_cp2_ParamLimits

0x16ce,	// (0x000236cc) list_single_number_heading_pane_t3_cp2

0x1692,	// (0x00023690) list_single_heading_pane_g1_cp2_ParamLimits

0x1692,	// (0x00023690) list_single_heading_pane_g1_cp2

0x169e,	// (0x0002369c) list_single_heading_pane_g2_cp2

0x16a6,	// (0x000236a4) list_single_heading_pane_t1_cp2_ParamLimits

0x16a6,	// (0x000236a4) list_single_heading_pane_t1_cp2

0x28ac,	// (0x000248aa) list_single_heading_pane_t2_cp2_ParamLimits

0x28ac,	// (0x000248aa) list_single_heading_pane_t2_cp2

0x2831,	// (0x0002482f) list_double_graphic_pane_g1_cp2_ParamLimits

0x2831,	// (0x0002482f) list_double_graphic_pane_g1_cp2

0x283d,	// (0x0002483b) list_double_graphic_pane_g2_cp2_ParamLimits

0x283d,	// (0x0002483b) list_double_graphic_pane_g2_cp2

0x284c,	// (0x0002484a) list_double_graphic_pane_g3_cp2

0x2854,	// (0x00024852) list_double_graphic_pane_t1_cp2_ParamLimits

0x2854,	// (0x00024852) list_double_graphic_pane_t1_cp2

0x286a,	// (0x00024868) list_double_graphic_pane_t2_cp2_ParamLimits

0x286a,	// (0x00024868) list_double_graphic_pane_t2_cp2

0x1708,	// (0x00023706) list_double_number_pane_g1_cp2_ParamLimits

0x1708,	// (0x00023706) list_double_number_pane_g1_cp2

0x1714,	// (0x00023712) list_double_number_pane_g2_cp2

0x27f7,	// (0x000247f5) list_double_number_pane_t1_cp2_ParamLimits

0x27f7,	// (0x000247f5) list_double_number_pane_t1_cp2

0x2809,	// (0x00024807) list_double_number_pane_t2_cp2_ParamLimits

0x2809,	// (0x00024807) list_double_number_pane_t2_cp2

0x281f,	// (0x0002481d) list_double_number_pane_t3_cp2_ParamLimits

0x281f,	// (0x0002481d) list_double_number_pane_t3_cp2

0x276f,	// (0x0002476d) list_single_graphic_pane_g1_cp2_ParamLimits

0x276f,	// (0x0002476d) list_single_graphic_pane_g1_cp2

0x1692,	// (0x00023690) list_single_graphic_pane_g2_cp2_ParamLimits

0x1692,	// (0x00023690) list_single_graphic_pane_g2_cp2

0x169e,	// (0x0002369c) list_single_graphic_pane_g3_cp2

0x2747,	// (0x00024745) list_single_graphic_pane_t1_cp2_ParamLimits

0x2747,	// (0x00024745) list_single_graphic_pane_t1_cp2

0x1692,	// (0x00023690) list_single_number_pane_g1_cp2_ParamLimits

0x1692,	// (0x00023690) list_single_number_pane_g1_cp2

0x169e,	// (0x0002369c) list_single_number_pane_g2_cp2

0x2747,	// (0x00024745) list_single_number_pane_t1_cp2_ParamLimits

0x2747,	// (0x00024745) list_single_number_pane_t1_cp2

0x275d,	// (0x0002475b) list_single_number_pane_t2_cp2_ParamLimits

0x275d,	// (0x0002475b) list_single_number_pane_t2_cp2

0x15ba,	// (0x000235b8) list_double2_pane_g1_cp2_ParamLimits

0x15ba,	// (0x000235b8) list_double2_pane_g1_cp2

0x15c9,	// (0x000235c7) list_double2_pane_g2_cp2

0x16e0,	// (0x000236de) list_double2_pane_t1_cp2_ParamLimits

0x16e0,	// (0x000236de) list_double2_pane_t1_cp2

0x16f6,	// (0x000236f4) list_double2_pane_t2_cp2_ParamLimits

0x16f6,	// (0x000236f4) list_double2_pane_t2_cp2

0x1708,	// (0x00023706) list_double_pane_g1_cp2_ParamLimits

0x1708,	// (0x00023706) list_double_pane_g1_cp2

0x1714,	// (0x00023712) list_double_pane_g2_cp2

0x171c,	// (0x0002371a) list_double_pane_t1_cp2_ParamLimits

0x171c,	// (0x0002371a) list_double_pane_t1_cp2

0x1732,	// (0x00023730) list_double_pane_t2_cp2_ParamLimits

0x1732,	// (0x00023730) list_double_pane_t2_cp2

0x175a,	// (0x00023758) list_single_pane_cp2_g3

0x1692,	// (0x00023690) list_single_pane_g1_cp2_ParamLimits

0x1692,	// (0x00023690) list_single_pane_g1_cp2

0x169e,	// (0x0002369c) list_single_pane_g2_cp2

0x176a,	// (0x00023768) list_single_pane_t1_cp2_ParamLimits

0x176a,	// (0x00023768) list_single_pane_t1_cp2

0x1782,	// (0x00023780) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x1782,	// (0x00023780) list_single_large_graphic_pane_g1_cp2

0x178e,	// (0x0002378c) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x178e,	// (0x0002378c) list_single_large_graphic_pane_g2_cp2

0x179a,	// (0x00023798) list_single_large_graphic_pane_g3_cp2

0x17a2,	// (0x000237a0) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x17a2,	// (0x000237a0) list_single_large_graphic_pane_g4_cp1

0x17bc,	// (0x000237ba) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x17bc,	// (0x000237ba) list_single_large_graphic_pane_t1_cp2

0x2729,	// (0x00024727) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x2729,	// (0x00024727) list_single_graphic_heading_pane_g1_cp2

0x2704,	// (0x00024702) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x2704,	// (0x00024702) list_single_graphic_heading_pane_g4_cp2

0x169e,	// (0x0002369c) list_single_graphic_heading_pane_g5_cp2

0x16a6,	// (0x000236a4) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x16a6,	// (0x000236a4) list_single_graphic_heading_pane_t1_cp2

0x2735,	// (0x00024733) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x2735,	// (0x00024733) list_single_graphic_heading_pane_t2_cp2

0x26f8,	// (0x000246f6) list_single_2graphic_pane_g1_cp2_ParamLimits

0x26f8,	// (0x000246f6) list_single_2graphic_pane_g1_cp2

0x2704,	// (0x00024702) list_single_2graphic_pane_g2_cp2_ParamLimits

0x2704,	// (0x00024702) list_single_2graphic_pane_g2_cp2

0x169e,	// (0x0002369c) list_single_2graphic_pane_g3_cp2

0x1c81,	// (0x00023c7f) list_single_2graphic_pane_g4_cp2_ParamLimits

0x1c81,	// (0x00023c7f) list_single_2graphic_pane_g4_cp2

0x2713,	// (0x00024711) list_single_2graphic_pane_t1_cp2_ParamLimits

0x2713,	// (0x00024711) list_single_2graphic_pane_t1_cp2

0x07f9,	// (0x000227f7) list_highlight_pane_g10_cp1

0x230a,	// (0x00024308) list_highlight_pane_g1_cp1

0x2312,	// (0x00024310) list_highlight_pane_g2_cp1

0x231a,	// (0x00024318) list_highlight_pane_g3_cp1

0x2322,	// (0x00024320) list_highlight_pane_g4_cp1

0x232a,	// (0x00024328) list_highlight_pane_g5_cp1

0x2332,	// (0x00024330) list_highlight_pane_g6_cp1

0x233a,	// (0x00024338) list_highlight_pane_g7_cp1

0x2342,	// (0x00024340) list_highlight_pane_g8_cp1

0x234a,	// (0x00024348) list_highlight_pane_g9_cp1

0xe0e4,	// (0x000300e2) form_field_slider_pane_t3

0xe0f2,	// (0x000300f0) form_field_slider_pane_t4

0x2254,	// (0x00024252) slider_form_pane_ParamLimits

0x2254,	// (0x00024252) slider_form_pane

0x087b,	// (0x00022879) control_abbreviations

0x087b,	// (0x00022879) control_conventions

0x087b,	// (0x00022879) control_definitions

0x087b,	// (0x00022879) format_table_attribute

0x28f6,	// (0x000248f4) bg_popup_preview_window_pane_g9

0x087b,	// (0x00022879) format_table_data2

0x087b,	// (0x00022879) format_table_data3

0x087b,	// (0x00022879) format_table_data_example

0x0008,

0x087b,	// (0x00022879) intro_purpose

0xf8e3,	// (0x000318e1) bg_popup_preview_window_pane_g

0x087b,	// (0x00022879) texts_category

0x087b,	// (0x00022879) texts_graphics

0x17d2,	// (0x000237d0) text_digital

0x17e1,	// (0x000237df) text_primary

0x17f0,	// (0x000237ee) text_primary_small

0x17ff,	// (0x000237fd) text_secondary

0x180e,	// (0x0002380c) text_title

0x2df9,	// (0x00024df7) bg_passive_tab_pane_g1_cp3_srt

0x1527,	// (0x00023525) bg_passive_tab_pane_g2_cp3_srt

0x2df0,	// (0x00024dee) bg_passive_tab_pane_g3_cp3_srt

0x08c9,	// (0x000228c7) bg_active_tab_pane_cp3_srt_ParamLimits

0x08c9,	// (0x000228c7) bg_active_tab_pane_cp3_srt

0x2d83,	// (0x00024d81) tabs_4_active_pane_srt_g1

0xce66,	// (0x0002ee64) tabs_4_active_pane_srt_t1_ParamLimits

0xce66,	// (0x0002ee64) tabs_4_active_pane_srt_t1

0x2df9,	// (0x00024df7) bg_active_tab_pane_g1_cp3_copy1

0x1527,	// (0x00023525) bg_active_tab_pane_g2_cp3_copy1

0x2df0,	// (0x00024dee) bg_active_tab_pane_g3_cp3_copy1

0x08df,	// (0x000228dd) tabs_2_long_active_pane_srt_ParamLimits

0x08df,	// (0x000228dd) tabs_2_long_active_pane_srt

0x08df,	// (0x000228dd) tabs_2_long_passive_pane_srt_ParamLimits

0x08df,	// (0x000228dd) tabs_2_long_passive_pane_srt

0x0fff,	// (0x00022ffd) bg_passive_tab_pane_cp4_srt_ParamLimits

0x0fff,	// (0x00022ffd) bg_passive_tab_pane_cp4_srt

0x2cae,	// (0x00024cac) bg_passive_tab_pane_g1_cp4_srt

0x1527,	// (0x00023525) bg_passive_tab_pane_g2_cp4_srt

0x2ca5,	// (0x00024ca3) bg_passive_tab_pane_g3_cp4_srt

0x08df,	// (0x000228dd) bg_active_tab_pane_cp4_srt_ParamLimits

0x08df,	// (0x000228dd) bg_active_tab_pane_cp4_srt

0xd638,	// (0x0002f636) tabs_2_long_active_pane_srt_t1_ParamLimits

0xd638,	// (0x0002f636) tabs_2_long_active_pane_srt_t1

0x2cae,	// (0x00024cac) bg_active_tab_pane_g1_cp4_srt

0x1527,	// (0x00023525) bg_active_tab_pane_g2_cp4_srt

0x2ca5,	// (0x00024ca3) bg_active_tab_pane_g3_cp4_srt

0x08c9,	// (0x000228c7) tabs_3_long_active_pane_srt_ParamLimits

0x08c9,	// (0x000228c7) tabs_3_long_active_pane_srt

0x08c9,	// (0x000228c7) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x08c9,	// (0x000228c7) tabs_3_long_passive_pane_cp_srt

0x08c9,	// (0x000228c7) tabs_3_long_passive_pane_srt_ParamLimits

0x08c9,	// (0x000228c7) tabs_3_long_passive_pane_srt

0x0fff,	// (0x00022ffd) bg_passive_tab_pane_cp5_srt_ParamLimits

0x0fff,	// (0x00022ffd) bg_passive_tab_pane_cp5_srt

0x1577,	// (0x00023575) bg_passive_tab_pane_g1_cp5_srt

0x1527,	// (0x00023525) bg_passive_tab_pane_g2_cp5_srt

0x156e,	// (0x0002356c) bg_passive_tab_pane_g3_cp5_srt

0x08df,	// (0x000228dd) bg_active_tab_pane_cp5_srt_ParamLimits

0x08df,	// (0x000228dd) bg_active_tab_pane_cp5_srt

0xd64f,	// (0x0002f64d) tabs_3_long_active_pane_srt_t1_ParamLimits

0xd64f,	// (0x0002f64d) tabs_3_long_active_pane_srt_t1

0x1577,	// (0x00023575) bg_active_tab_pane_g1_cp5_srt

0x1527,	// (0x00023525) bg_active_tab_pane_g2_cp5_srt

0x156e,	// (0x0002356c) bg_active_tab_pane_g3_cp5_srt

0x2c97,	// (0x00024c95) navi_text_pane_srt_t1

0x2c8f,	// (0x00024c8d) navi_icon_pane_srt_g1

0x1926,	// (0x00023924) midp_editing_number_pane_srt

0x181d,	// (0x0002381b) midp_ticker_pane_srt

0x192e,	// (0x0002392c) midp_ticker_pane_srt_g1

0x1936,	// (0x00023934) midp_ticker_pane_srt_g2

0x0001,

0xf772,	// (0x00031770) midp_ticker_pane_srt_g

0x193e,	// (0x0002393c) midp_ticker_pane_srt_t1

0x2c80,	// (0x00024c7e) midp_editing_number_pane_t1_copy1

0xdb92,	// (0x0002fb90) listscroll_midp_pane

0xdb92,	// (0x0002fb90) midp_form_pane

0x1825,	// (0x00023823) midp_info_popup_window_ParamLimits

0x1825,	// (0x00023823) midp_info_popup_window

0x0f25,	// (0x00022f23) bg_popup_sub_pane_cp50_ParamLimits

0x0f25,	// (0x00022f23) bg_popup_sub_pane_cp50

0x1f71,	// (0x00023f6f) listscroll_midp_info_pane_ParamLimits

0x1f71,	// (0x00023f6f) listscroll_midp_info_pane

0x1f59,	// (0x00023f57) listscroll_form_midp_pane_ParamLimits

0x1f59,	// (0x00023f57) listscroll_form_midp_pane

0x1f65,	// (0x00023f63) scroll_bar_cp050

0xe0d8,	// (0x000300d6) list_midp_pane

0x35d2,	// (0x000255d0) signal_pane_g2_cp

0x1e8b,	// (0x00023e89) listscroll_midp_info_pane_t1_ParamLimits

0x1e8b,	// (0x00023e89) listscroll_midp_info_pane_t1

0x1ea3,	// (0x00023ea1) listscroll_midp_info_pane_t2_ParamLimits

0x1ea3,	// (0x00023ea1) listscroll_midp_info_pane_t2

0x1ee1,	// (0x00023edf) listscroll_midp_info_pane_t3_ParamLimits

0x1ee1,	// (0x00023edf) listscroll_midp_info_pane_t3

0x1f1b,	// (0x00023f19) listscroll_midp_info_pane_t4_ParamLimits

0x1f1b,	// (0x00023f19) listscroll_midp_info_pane_t4

0x0003,

0xf81e,	// (0x0003181c) listscroll_midp_info_pane_t_ParamLimits

0xf81e,	// (0x0003181c) listscroll_midp_info_pane_t

0x0fc8,	// (0x00022fc6) scroll_pane_cp21

0x1e2f,	// (0x00023e2d) form_midp_field_choice_group_pane

0x1e38,	// (0x00023e36) form_midp_field_text_pane

0x1e71,	// (0x00023e6f) form_midp_field_time_pane

0x1e79,	// (0x00023e77) form_midp_gauge_slider_pane

0x1e82,	// (0x00023e80) form_midp_gauge_wait_pane

0x087b,	// (0x00022879) form_midp_image_pane

0xd77e,	// (0x0002f77c) list_single_midp_pane_ParamLimits

0xd77e,	// (0x0002f77c) list_single_midp_pane

0x1dfd,	// (0x00023dfb) form_midp_field_text_pane_t1

0x1c1d,	// (0x00023c1b) input_focus_pane_cp050

0x1e1e,	// (0x00023e1c) list_midp_form_text_pane

0x1dcc,	// (0x00023dca) form_midp_field_choice_group_pane_t1

0x1dda,	// (0x00023dd8) input_focus_pane_cp051

0x1dee,	// (0x00023dec) list_midp_choice_pane

0x087b,	// (0x00022879) status_idle_pane

0x1db0,	// (0x00023dae) form_midp_field_time_pane_t1

0x07f9,	// (0x000227f7) wait_anim_pane_g2_copy1

0x1dbe,	// (0x00023dbc) form_midp_field_time_pane_t2

0x0001,

0x1890,	// (0x0002388e) aid_navinavi_width_2_pane

0xf819,	// (0x00031817) form_midp_field_time_pane_t

0x087b,	// (0x00022879) input_focus_pane_cp052

0x087b,	// (0x00022879) bg_input_focus_pane_cp040

0x1d8c,	// (0x00023d8a) form_midp_gauge_slider_pane_t1

0x1d9a,	// (0x00023d98) form_midp_gauge_slider_pane_t2

0xe0bc,	// (0x000300ba) form_midp_gauge_slider_pane_t3

0xe0ca,	// (0x000300c8) form_midp_gauge_slider_pane_t4

0x0003,

0xf810,	// (0x0003180e) form_midp_gauge_slider_pane_t

0x1da8,	// (0x00023da6) form_midp_slider_pane

0x08df,	// (0x000228dd) bg_input_focus_pane_cp041_ParamLimits

0x08df,	// (0x000228dd) bg_input_focus_pane_cp041

0x1d5c,	// (0x00023d5a) form_midp_gauge_wait_pane_t1_ParamLimits

0x1d5c,	// (0x00023d5a) form_midp_gauge_wait_pane_t1

0x1d6e,	// (0x00023d6c) form_midp_gauge_wait_pane_t2_ParamLimits

0x1d6e,	// (0x00023d6c) form_midp_gauge_wait_pane_t2

0x0001,

0xf80b,	// (0x00031809) form_midp_gauge_wait_pane_t_ParamLimits

0xf80b,	// (0x00031809) form_midp_gauge_wait_pane_t

0x1d80,	// (0x00023d7e) form_midp_wait_pane_ParamLimits

0x1d80,	// (0x00023d7e) form_midp_wait_pane

0x1d26,	// (0x00023d24) form_midp_image_pane_g1

0x1d2f,	// (0x00023d2d) form_midp_image_pane_t1

0x1d3e,	// (0x00023d3c) form_midp_image_pane_t2

0x1d4d,	// (0x00023d4b) form_midp_image_pane_t3

0x0002,

0xf804,	// (0x00031802) form_midp_image_pane_t

0x1d1d,	// (0x00023d1b) list_single_midp_pane_g1

0x98fd,	// (0x0002b8fb) list_single_midp_pane_t1

0x1d09,	// (0x00023d07) list_midp_form_item_pane_ParamLimits

0x1d09,	// (0x00023d07) list_midp_form_item_pane

0x1838,	// (0x00023836) list_midp_form_item_pane_t1

0x1847,	// (0x00023845) midp_ticker_pane_g1

0x1853,	// (0x00023851) midp_ticker_pane_g2

0x0001,

0xf758,	// (0x00031756) midp_ticker_pane_g

0x185f,	// (0x0002385d) midp_ticker_pane_t1

0x2c80,	// (0x00024c7e) midp_editing_number_pane_t1

0x2d08,	// (0x00024d06) midp_editing_number_pane

0x2d14,	// (0x00024d12) midp_ticker_pane

0x2c70,	// (0x00024c6e) ai_message_heading_pane

0x087b,	// (0x00022879) bg_popup_window_pane_cp14

0x2c78,	// (0x00024c76) listscroll_ai_message_pane

0x2bfa,	// (0x00024bf8) ai_message_heading_pane_g1_ParamLimits

0x2bfa,	// (0x00024bf8) ai_message_heading_pane_g1

0x2c06,	// (0x00024c04) ai_message_heading_pane_g2_ParamLimits

0x2c06,	// (0x00024c04) ai_message_heading_pane_g2

0x2c12,	// (0x00024c10) ai_message_heading_pane_g3_ParamLimits

0x2c12,	// (0x00024c10) ai_message_heading_pane_g3

0x2c1e,	// (0x00024c1c) ai_message_heading_pane_g4_ParamLimits

0x2c1e,	// (0x00024c1c) ai_message_heading_pane_g4

0x0003,

0xf945,	// (0x00031943) ai_message_heading_pane_g_ParamLimits

0xf945,	// (0x00031943) ai_message_heading_pane_g

0x2c2a,	// (0x00024c28) ai_message_heading_pane_t1_ParamLimits

0x2c2a,	// (0x00024c28) ai_message_heading_pane_t1

0x2c44,	// (0x00024c42) ai_message_heading_pane_t2_ParamLimits

0x2c44,	// (0x00024c42) ai_message_heading_pane_t2

0x0001,

0xf94e,	// (0x0003194c) ai_message_heading_pane_t_ParamLimits

0xf94e,	// (0x0003194c) ai_message_heading_pane_t

0x2c56,	// (0x00024c54) bg_popup_heading_pane_cp1_ParamLimits

0x2c56,	// (0x00024c54) bg_popup_heading_pane_cp1

0x2be8,	// (0x00024be6) list_ai_message_pane_ParamLimits

0x2be8,	// (0x00024be6) list_ai_message_pane

0x0fc8,	// (0x00022fc6) scroll_pane_cp10

0x2b84,	// (0x00024b82) list_ai_message_pane_g1

0x2b8c,	// (0x00024b8a) list_ai_message_pane_g2

0x0001,

0xf922,	// (0x00031920) list_ai_message_pane_g

0x2b94,	// (0x00024b92) list_ai_message_pane_t1_ParamLimits

0x2b94,	// (0x00024b92) list_ai_message_pane_t1

0x2ba9,	// (0x00024ba7) list_ai_message_pane_t2_ParamLimits

0x2ba9,	// (0x00024ba7) list_ai_message_pane_t2

0x2bbe,	// (0x00024bbc) list_ai_message_pane_t3_ParamLimits

0x2bbe,	// (0x00024bbc) list_ai_message_pane_t3

0x2bd3,	// (0x00024bd1) list_ai_message_pane_t4_ParamLimits

0x2bd3,	// (0x00024bd1) list_ai_message_pane_t4

0x0003,

0xf927,	// (0x00031925) list_ai_message_pane_t_ParamLimits

0xf927,	// (0x00031925) list_ai_message_pane_t

0x2b72,	// (0x00024b70) cell_ai_soft_ind_pane_ParamLimits

0x2b72,	// (0x00024b70) cell_ai_soft_ind_pane

0x1871,	// (0x0002386f) cell_ai_soft_ind_pane_g1_ParamLimits

0x1871,	// (0x0002386f) cell_ai_soft_ind_pane_g1

0x087b,	// (0x00022879) grid_highlight_cp1

0x187e,	// (0x0002387c) text_secondary_cp56_ParamLimits

0x187e,	// (0x0002387c) text_secondary_cp56

0x2b47,	// (0x00024b45) example_general_pane_ParamLimits

0x2b47,	// (0x00024b45) example_general_pane

0x2b53,	// (0x00024b51) example_parent_pane_g1_ParamLimits

0x2b53,	// (0x00024b51) example_parent_pane_g1

0x2b5f,	// (0x00024b5d) example_parent_pane_t1_ParamLimits

0x2b5f,	// (0x00024b5d) example_parent_pane_t1

0xc299,	// (0x0002e297) popup_preview_text_window_ParamLimits

0xc299,	// (0x0002e297) popup_preview_text_window

0x1762,	// (0x00023760) list_single_pane_cp2_g4

0x0ae0,	// (0x00022ade) bg_popup_preview_window_pane_ParamLimits

0x0ae0,	// (0x00022ade) bg_popup_preview_window_pane

0x28fe,	// (0x000248fc) popup_preview_text_window_t1_ParamLimits

0x28fe,	// (0x000248fc) popup_preview_text_window_t1

0x291c,	// (0x0002491a) popup_preview_text_window_t2_ParamLimits

0x291c,	// (0x0002491a) popup_preview_text_window_t2

0x2965,	// (0x00024963) popup_preview_text_window_t3_ParamLimits

0x2965,	// (0x00024963) popup_preview_text_window_t3

0x29aa,	// (0x000249a8) popup_preview_text_window_t4_ParamLimits

0x29aa,	// (0x000249a8) popup_preview_text_window_t4

0x0004,

0xf8f6,	// (0x000318f4) popup_preview_text_window_t_ParamLimits

0xf8f6,	// (0x000318f4) popup_preview_text_window_t

0x2a28,	// (0x00024a26) scroll_pane_cp11

0x1ba9,	// (0x00023ba7) bg_popup_preview_window_pane_g1

0x28be,	// (0x000248bc) bg_popup_preview_window_pane_g2

0x28c6,	// (0x000248c4) bg_popup_preview_window_pane_g3

0x28ce,	// (0x000248cc) bg_popup_preview_window_pane_g4

0x28d6,	// (0x000248d4) bg_popup_preview_window_pane_g5

0x28de,	// (0x000248dc) bg_popup_preview_window_pane_g6

0x28e6,	// (0x000248e4) bg_popup_preview_window_pane_g7

0x28ee,	// (0x000248ec) bg_popup_preview_window_pane_g8

0x55f4,	// (0x000275f2) aid_popup_width_pane

0xc21b,	// (0x0002e219) popup_midp_note_alarm_window_ParamLimits

0xc21b,	// (0x0002e219) popup_midp_note_alarm_window

0x0e6d,	// (0x00022e6b) data_form_pane_ParamLimits

0xd51e,	// (0x0002f51c) form_field_data_pane_g1

0xd528,	// (0x0002f526) form_field_data_pane_t1_ParamLimits

0x0e79,	// (0x00022e77) input_focus_pane_ParamLimits

0x0e87,	// (0x00022e85) data_form_wide_pane_ParamLimits

0x9628,	// (0x0002b626) form_field_data_wide_pane_g1

0x9634,	// (0x0002b632) form_field_data_wide_pane_t1_ParamLimits

0x0c9f,	// (0x00022c9d) input_focus_pane_cp6_ParamLimits

0xd616,	// (0x0002f614) input_popup_find_pane_g1_ParamLimits

0xd616,	// (0x0002f614) input_popup_find_pane_g1

0x5d3b,	// (0x00027d39) aid_navi_side_left_pane

0x5d4b,	// (0x00027d49) aid_navi_side_right_pane

0x23db,	// (0x000243d9) bg_popup_window_pane_cp30_ParamLimits

0x23db,	// (0x000243d9) bg_popup_window_pane_cp30

0x2455,	// (0x00024453) popup_midp_note_alarm_window_g1_ParamLimits

0x2455,	// (0x00024453) popup_midp_note_alarm_window_g1

0x2485,	// (0x00024483) popup_midp_note_alarm_window_t1_ParamLimits

0x2485,	// (0x00024483) popup_midp_note_alarm_window_t1

0x2526,	// (0x00024524) popup_midp_note_alarm_window_t2_ParamLimits

0x2526,	// (0x00024524) popup_midp_note_alarm_window_t2

0x25d4,	// (0x000245d2) popup_midp_note_alarm_window_t3_ParamLimits

0x25d4,	// (0x000245d2) popup_midp_note_alarm_window_t3

0x25fc,	// (0x000245fa) popup_midp_note_alarm_window_t4_ParamLimits

0x25fc,	// (0x000245fa) popup_midp_note_alarm_window_t4

0x261c,	// (0x0002461a) popup_midp_note_alarm_window_t5_ParamLimits

0x261c,	// (0x0002461a) popup_midp_note_alarm_window_t5

0x000a,

0xf893,	// (0x00031891) popup_midp_note_alarm_window_t_ParamLimits

0xf893,	// (0x00031891) popup_midp_note_alarm_window_t

0x26c8,	// (0x000246c6) wait_bar_pane_cp1_ParamLimits

0x26c8,	// (0x000246c6) wait_bar_pane_cp1

0x087b,	// (0x00022879) wait_anim_pane_copy1

0x087b,	// (0x00022879) wait_border_pane_copy1

0x2121,	// (0x0002411f) wait_border_pane_g1_copy1

0x964e,	// (0x0002b64c) form_field_popup_pane_g1

0xd540,	// (0x0002f53e) form_field_popup_pane_t1_ParamLimits

0x0e79,	// (0x00022e77) input_focus_pane_cp7_ParamLimits

0x0e6d,	// (0x00022e6b) list_form_pane_ParamLimits

0x966e,	// (0x0002b66c) form_field_popup_wide_pane_g1

0x9676,	// (0x0002b674) form_field_popup_wide_pane_t1_ParamLimits

0x0e79,	// (0x00022e77) input_focus_pane_cp8_ParamLimits

0x0eb3,	// (0x00022eb1) list_form_wide_pane_ParamLimits

0x2e21,	// (0x00024e1f) aid_size_cell_graphic_pane

0xd5bd,	// (0x0002f5bb) data_form_pane_t1_ParamLimits

0xd7a6,	// (0x0002f7a4) data_form_wide_pane_t1_ParamLimits

0xddac,	// (0x0002fdaa) bg_status_flat_pane

0xcdc3,	// (0x0002edc1) title_pane_t1_ParamLimits

0x0891,	// (0x0002288f) title_pane_t2_ParamLimits

0x08b7,	// (0x000228b5) title_pane_t3_ParamLimits

0xf557,	// (0x00031555) title_pane_t_ParamLimits

0xda0a,	// (0x0002fa08) level_1_signal_ParamLimits

0xda1c,	// (0x0002fa1a) level_2_signal_ParamLimits

0xda2f,	// (0x0002fa2d) level_3_signal_ParamLimits

0xda42,	// (0x0002fa40) level_4_signal_ParamLimits

0xda55,	// (0x0002fa53) level_5_signal_ParamLimits

0xda68,	// (0x0002fa66) level_6_signal_ParamLimits

0xda7b,	// (0x0002fa79) level_7_signal_ParamLimits

0xda0a,	// (0x0002fa08) level_1_battery_ParamLimits

0xda1c,	// (0x0002fa1a) level_2_battery_ParamLimits

0xda2f,	// (0x0002fa2d) level_3_battery_ParamLimits

0xda42,	// (0x0002fa40) level_4_battery_ParamLimits

0xda55,	// (0x0002fa53) level_5_battery_ParamLimits

0xda68,	// (0x0002fa66) level_6_battery_ParamLimits

0xda7b,	// (0x0002fa79) level_7_battery_ParamLimits

0x230a,	// (0x00024308) bg_status_flat_pane_g1

0x2312,	// (0x00024310) bg_status_flat_pane_g2

0x231a,	// (0x00024318) bg_status_flat_pane_g3

0x2322,	// (0x00024320) bg_status_flat_pane_g4

0x232a,	// (0x00024328) bg_status_flat_pane_g5

0x2332,	// (0x00024330) bg_status_flat_pane_g6

0x233a,	// (0x00024338) bg_status_flat_pane_g7

0xce50,	// (0x0002ee4e) tabs_3_active_pane_t1_ParamLimits

0xce50,	// (0x0002ee4e) tabs_3_passive_pane_t1_ParamLimits

0xce66,	// (0x0002ee64) tabs_4_active_pane_t1_ParamLimits

0xce66,	// (0x0002ee64) tabs_4_1_passive_pane_t1_ParamLimits

0xd622,	// (0x0002f620) tabs_2_active_pane_t1_ParamLimits

0xd622,	// (0x0002f620) tabs_2_passive_pane_t1_ParamLimits

0x08df,	// (0x000228dd) bg_active_tab_pane_cp4_ParamLimits

0xd638,	// (0x0002f636) tabs_2_long_active_pane_t1_ParamLimits

0x0fff,	// (0x00022ffd) bg_passive_tab_pane_cp4_ParamLimits

0x6d4a,	// (0x00028d48) list_single_midp_graphic_pane_t1_ParamLimits

0x08df,	// (0x000228dd) bg_active_tab_pane_cp5_ParamLimits

0xd64f,	// (0x0002f64d) tabs_3_long_active_pane_t1_ParamLimits

0x0fff,	// (0x00022ffd) bg_passive_tab_pane_cp5_ParamLimits

0x6d4a,	// (0x00028d48) list_single_midp_graphic_pane_t1

0xddac,	// (0x0002fdaa) bg_status_flat_pane_ParamLimits

0x1a88,	// (0x00023a86) indicator_pane_cp2_ParamLimits

0x1a88,	// (0x00023a86) indicator_pane_cp2

0xdf12,	// (0x0002ff10) navi_pane_srt_ParamLimits

0xdf12,	// (0x0002ff10) navi_pane_srt

0x1ab0,	// (0x00023aae) popup_clock_digital_analogue_window_cp1

0x0923,	// (0x00022921) indicator_pane_t1

0x181d,	// (0x0002381b) copy_highlight_pane

0x181d,	// (0x0002381b) cursor_graphics_pane

0x181d,	// (0x0002381b) graphic_within_text_pane

0x181d,	// (0x0002381b) link_highlight_pane

0x29eb,	// (0x000249e9) popup_preview_text_window_t5_ParamLimits

0x29eb,	// (0x000249e9) popup_preview_text_window_t5

0x1898,	// (0x00023896) cursor_digital_pane

0x1898,	// (0x00023896) cursor_primary_pane

0x18a9,	// (0x000238a7) cursor_primary_small_pane

0x18b1,	// (0x000238af) cursor_secondary_pane

0x18b9,	// (0x000238b7) cursor_title_pane

0x1898,	// (0x00023896) link_highlight_digital_pane

0x18a0,	// (0x0002389e) link_highlight_primary_pane

0x18a9,	// (0x000238a7) link_highlight_primary_small_pane

0x18b1,	// (0x000238af) link_highlight_secondary_pane

0x18b9,	// (0x000238b7) link_highlight_title_pane

0x1898,	// (0x00023896) copy_highlight_digital_pane

0x1898,	// (0x00023896) copy_highlight_primary_pane

0x18a9,	// (0x000238a7) copy_highlight_primary_small_pane

0x18b1,	// (0x000238af) copy_highlight_secondary_pane

0x18b9,	// (0x000238b7) copy_highlight_title_pane

0x18b1,	// (0x000238af) graphic_text_digital_pane

0x238a,	// (0x00024388) graphic_text_primary_pane

0x2393,	// (0x00024391) graphic_text_primary_small_pane

0x18a9,	// (0x000238a7) graphic_text_secondary_pane

0x1898,	// (0x00023896) graphic_text_title_pane

0xdc2e,	// (0x0002fc2c) cursor_primary_pane_g1

0x237c,	// (0x0002437a) cursor_text_primary_t1

0xe114,	// (0x00030112) cursor_primary_small_pane_g1

0x236e,	// (0x0002436c) cursor_text_primary_small_t1

0xe10a,	// (0x00030108) cursor_primary_small_pane_g1_copy1

0x2360,	// (0x0002435e) cursor_text_primary_small_t1_copy1

0x2352,	// (0x00024350) cursor_text_title_t1

0xe100,	// (0x000300fe) cursor_title_pane_g1

0xdc2e,	// (0x0002fc2c) cursor_digital_pane_g1

0x18c1,	// (0x000238bf) cursor_text_digital_t1

0x18cf,	// (0x000238cd) link_highlight_primary_pane_g1

0x22fb,	// (0x000242f9) link_highlight_primary_pane_t1

0x18cf,	// (0x000238cd) link_highlight_primary_small_pane_g1

0x18d7,	// (0x000238d5) link_highlight_primary_small_pane_t1

0x18e6,	// (0x000238e4) link_highlight_secondary_pane_g1

0x18ee,	// (0x000238ec) link_highlight_secondary_pane_t1

0x2260,	// (0x0002425e) link_highlight_title_pane_g1

0x2277,	// (0x00024275) link_highlight_title_pane_t1

0x2260,	// (0x0002425e) link_highlight_digital_pane_g1

0x2268,	// (0x00024266) link_highlight_digital_pane_t1

0x213c,	// (0x0002413a) copy_highlight_primary_pane_g1

0x2162,	// (0x00024160) copy_highlight_primary_pane_t1

0x213c,	// (0x0002413a) copy_highlight_primary_small_pane_g1

0x2153,	// (0x00024151) copy_highlight_primary_small_pane_t1

0x18fd,	// (0x000238fb) copy_highlight_secondary_pane_g1

0x1905,	// (0x00023903) copy_highlight_secondary_pane_t1

0x213c,	// (0x0002413a) copy_highlight_title_pane_g1

0x2144,	// (0x00024142) copy_highlight_title_pane_t1

0x213c,	// (0x0002413a) copy_highlight_digital_pane_g1

0x2f1c,	// (0x00024f1a) copy_highlight_digital_pane_t1

0x2e70,	// (0x00024e6e) graphic_text_primary_pane_g1

0x2f00,	// (0x00024efe) graphic_text_primary_pane_t1

0x2f0e,	// (0x00024f0c) graphic_text_primary_pane_t2

0x0001,

0xf9c2,	// (0x000319c0) graphic_text_primary_pane_t

0x2edc,	// (0x00024eda) graphic_text_primary_small_pane_g1

0x2ee4,	// (0x00024ee2) graphic_text_primary_small_pane_t1

0x2ef2,	// (0x00024ef0) graphic_text_primary_small_pane_t2

0x0001,

0xf9bd,	// (0x000319bb) graphic_text_primary_small_pane_t

0x2eb8,	// (0x00024eb6) graphic_text_secondary_pane_g1

0x2ec0,	// (0x00024ebe) graphic_text_secondary_pane_t1

0x2ece,	// (0x00024ecc) graphic_text_secondary_pane_t2

0x0001,

0xf9b8,	// (0x000319b6) graphic_text_secondary_pane_t

0x2e94,	// (0x00024e92) graphic_text_title_pane_g1

0x2e9c,	// (0x00024e9a) graphic_text_title_pane_t1

0x2eaa,	// (0x00024ea8) graphic_text_title_pane_t2

0x0001,

0xf9b3,	// (0x000319b1) graphic_text_title_pane_t

0x2e70,	// (0x00024e6e) graphic_text_digital_pane_g1

0x2e78,	// (0x00024e76) graphic_text_digital_pane_t1

0x2e86,	// (0x00024e84) graphic_text_digital_pane_t2

0x0001,

0xf9ae,	// (0x000319ac) graphic_text_digital_pane_t

0x08df,	// (0x000228dd) navi_icon_pane_srt_ParamLimits

0x08df,	// (0x000228dd) navi_icon_pane_srt

0x087b,	// (0x00022879) navi_midp_pane_srt

0x087b,	// (0x00022879) navi_navi_pane_srt

0x08df,	// (0x000228dd) navi_text_pane_srt_ParamLimits

0x08df,	// (0x000228dd) navi_text_pane_srt

0x2d38,	// (0x00024d36) navi_navi_icon_text_pane_srt

0x2d52,	// (0x00024d50) navi_navi_pane_srt_g1_ParamLimits

0x2d52,	// (0x00024d50) navi_navi_pane_srt_g1

0x2d40,	// (0x00024d3e) navi_navi_pane_srt_g2_ParamLimits

0x2d40,	// (0x00024d3e) navi_navi_pane_srt_g2

0x0001,

0xf9a9,	// (0x000319a7) navi_navi_pane_srt_g_ParamLimits

0xf9a9,	// (0x000319a7) navi_navi_pane_srt_g

0x2d64,	// (0x00024d62) navi_navi_tabs_pane_srt

0x2d38,	// (0x00024d36) navi_navi_text_pane_srt

0x2d38,	// (0x00024d36) navi_navi_volume_pane_srt

0x2e61,	// (0x00024e5f) navi_navi_text_pane_srt_t1

0x74a0,	// (0x0002949e) navi_navi_volume_pane_srt_g1

0x74a8,	// (0x000294a6) volume_small_pane_srt_ParamLimits

0x74a8,	// (0x000294a6) volume_small_pane_srt

0x6277,	// (0x00028275) volume_small_pane_srt_g1_ParamLimits

0x6277,	// (0x00028275) volume_small_pane_srt_g1

0x6287,	// (0x00028285) volume_small_pane_srt_g2_ParamLimits

0x6287,	// (0x00028285) volume_small_pane_srt_g2

0x6298,	// (0x00028296) volume_small_pane_srt_g3_ParamLimits

0x6298,	// (0x00028296) volume_small_pane_srt_g3

0x62a9,	// (0x000282a7) volume_small_pane_srt_g4_ParamLimits

0x62a9,	// (0x000282a7) volume_small_pane_srt_g4

0x62ba,	// (0x000282b8) volume_small_pane_srt_g5_ParamLimits

0x62ba,	// (0x000282b8) volume_small_pane_srt_g5

0x62cb,	// (0x000282c9) volume_small_pane_srt_g6_ParamLimits

0x62cb,	// (0x000282c9) volume_small_pane_srt_g6

0x62dc,	// (0x000282da) volume_small_pane_srt_g7_ParamLimits

0x62dc,	// (0x000282da) volume_small_pane_srt_g7

0x62ed,	// (0x000282eb) volume_small_pane_srt_g8_ParamLimits

0x62ed,	// (0x000282eb) volume_small_pane_srt_g8

0x62fe,	// (0x000282fc) volume_small_pane_srt_g9_ParamLimits

0x62fe,	// (0x000282fc) volume_small_pane_srt_g9

0x630f,	// (0x0002830d) volume_small_pane_srt_g10_ParamLimits

0x630f,	// (0x0002830d) volume_small_pane_srt_g10

0x0009,

0xf75d,	// (0x0003175b) volume_small_pane_srt_g_ParamLimits

0xf75d,	// (0x0003175b) volume_small_pane_srt_g

0x0b89,	// (0x00022b87) query_popup_data_pane_cp2

0x2e47,	// (0x00024e45) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x2e47,	// (0x00024e45) navi_navi_icon_text_pane_srt_t1

0x238a,	// (0x00024388) navi_tabs_2_long_pane_srt

0x238a,	// (0x00024388) navi_tabs_2_pane_srt

0x238a,	// (0x00024388) navi_tabs_3_long_pane_srt

0x238a,	// (0x00024388) navi_tabs_3_pane_srt

0x238a,	// (0x00024388) navi_tabs_4_pane_srt

0x7480,	// (0x0002947e) tabs_2_active_pane_srt_ParamLimits

0x7480,	// (0x0002947e) tabs_2_active_pane_srt

0x7490,	// (0x0002948e) tabs_2_passive_pane_srt_ParamLimits

0x7490,	// (0x0002948e) tabs_2_passive_pane_srt

0x1c1d,	// (0x00023c1b) bg_passive_tab_pane_cp1_srt_ParamLimits

0x1c1d,	// (0x00023c1b) bg_passive_tab_pane_cp1_srt

0x2da4,	// (0x00024da2) bg_passive_tab_pane_g1_cp1_srt

0x1527,	// (0x00023525) bg_passive_tab_pane_g2_cp1_srt

0x2d9b,	// (0x00024d99) bg_passive_tab_pane_g3_cp1_srt

0x08c9,	// (0x000228c7) bg_active_tab_pane_cp1_srt_ParamLimits

0x08c9,	// (0x000228c7) bg_active_tab_pane_cp1_srt

0x2d93,	// (0x00024d91) tabs_2_active_pane_srt_g1

0xd622,	// (0x0002f620) tabs_2_active_pane_srt_t1_ParamLimits

0xd622,	// (0x0002f620) tabs_2_active_pane_srt_t1

0x2da4,	// (0x00024da2) bg_active_tab_pane_g1_cp1_srt

0x1527,	// (0x00023525) bg_active_tab_pane_g2_cp1_srt

0x2d9b,	// (0x00024d99) bg_active_tab_pane_g3_cp1_srt

0x744d,	// (0x0002944b) tabs_3_active_pane_srt_ParamLimits

0x744d,	// (0x0002944b) tabs_3_active_pane_srt

0x745e,	// (0x0002945c) tabs_3_passive_pane_cp_srt_ParamLimits

0x745e,	// (0x0002945c) tabs_3_passive_pane_cp_srt

0x746f,	// (0x0002946d) tabs_3_passive_pane_srt_ParamLimits

0x746f,	// (0x0002946d) tabs_3_passive_pane_srt

0x1c1d,	// (0x00023c1b) bg_passive_tab_pane_cp2_srt_ParamLimits

0x1c1d,	// (0x00023c1b) bg_passive_tab_pane_cp2_srt

0x191d,	// (0x0002391b) bg_passive_tab_pane_g1_cp2_srt

0x1527,	// (0x00023525) bg_passive_tab_pane_g2_cp2_srt

0x1914,	// (0x00023912) bg_passive_tab_pane_g3_cp2_srt

0x08c9,	// (0x000228c7) bg_active_tab_pane_cp2_srt_ParamLimits

0x08c9,	// (0x000228c7) bg_active_tab_pane_cp2_srt

0x2e37,	// (0x00024e35) tabs_3_active_pane_srt_g1

0xce50,	// (0x0002ee4e) tabs_3_active_pane_srt_t1_ParamLimits

0xce50,	// (0x0002ee4e) tabs_3_active_pane_srt_t1

0x191d,	// (0x0002391b) bg_active_tab_pane_g1_cp2_srt

0x1527,	// (0x00023525) bg_active_tab_pane_g2_cp2_srt

0x1914,	// (0x00023912) bg_active_tab_pane_g3_cp2_srt

0x7405,	// (0x00029403) tabs_4_active_pane_srt_ParamLimits

0x7405,	// (0x00029403) tabs_4_active_pane_srt

0x7417,	// (0x00029415) tabs_4_passive_pane_cp2_srt_ParamLimits

0x7417,	// (0x00029415) tabs_4_passive_pane_cp2_srt

0x651c,	// (0x0002851a) aid_size_cell_toolbar

0xbf8b,	// (0x0002df89) main_idle_act_pane_ParamLimits

0x6697,	// (0x00028695) popup_large_graphic_colour_window_ParamLimits

0xc4e9,	// (0x0002e4e7) popup_toolbar_window_ParamLimits

0xc4e9,	// (0x0002e4e7) popup_toolbar_window

0x9977,	// (0x0002b975) list_single_graphic_2heading_pane_ParamLimits

0x9977,	// (0x0002b975) list_single_graphic_2heading_pane

0x11c4,	// (0x000231c2) aid_size_cell_apps_grid_lsc_pane

0x11d6,	// (0x000231d4) aid_size_cell_apps_grid_prt_pane

0x0fff,	// (0x00022ffd) bg_wml_button_pane_cp1_ParamLimits

0x0fff,	// (0x00022ffd) bg_wml_button_pane_cp1

0x1dfd,	// (0x00023dfb) form_midp_field_text_pane_t1_ParamLimits

0x1c1d,	// (0x00023c1b) input_focus_pane_cp050_ParamLimits

0x1e1e,	// (0x00023e1c) list_midp_form_text_pane_ParamLimits

0x1dda,	// (0x00023dd8) input_focus_pane_cp051_ParamLimits

0x1dee,	// (0x00023dec) list_midp_choice_pane_ParamLimits

0x1cd7,	// (0x00023cd5) list_single_2graphic_pane_cp3_ParamLimits

0x1cd7,	// (0x00023cd5) list_single_2graphic_pane_cp3

0x1cea,	// (0x00023ce8) list_single_midp_graphic_pane_ParamLimits

0x1cea,	// (0x00023ce8) list_single_midp_graphic_pane

0x556a,	// (0x00027568) list_single_graphic_2heading_pane_g1_ParamLimits

0x556a,	// (0x00027568) list_single_graphic_2heading_pane_g1

0x5576,	// (0x00027574) list_single_graphic_2heading_pane_g4_ParamLimits

0x5576,	// (0x00027574) list_single_graphic_2heading_pane_g4

0x5582,	// (0x00027580) list_single_graphic_2heading_pane_g5_ParamLimits

0x5582,	// (0x00027580) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b0,	// (0x000317ae) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b0,	// (0x000317ae) list_single_graphic_2heading_pane_g

0x558e,	// (0x0002758c) list_single_graphic_2heading_pane_t1_ParamLimits

0x558e,	// (0x0002758c) list_single_graphic_2heading_pane_t1

0x55a2,	// (0x000275a0) list_single_graphic_2heading_pane_t2_ParamLimits

0x55a2,	// (0x000275a0) list_single_graphic_2heading_pane_t2

0x55bc,	// (0x000275ba) list_single_graphic_2heading_pane_t3_ParamLimits

0x55bc,	// (0x000275ba) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b7,	// (0x000317b5) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b7,	// (0x000317b5) list_single_graphic_2heading_pane_t

0x1af3,	// (0x00023af1) bg_popup_sub_pane_cp2

0x1b19,	// (0x00023b17) grid_toobar_pane

0x6cc6,	// (0x00028cc4) cell_toolbar_pane_ParamLimits

0x6cc6,	// (0x00028cc4) cell_toolbar_pane

0x1b4f,	// (0x00023b4d) cell_toolbar_pane_g1_ParamLimits

0x1b4f,	// (0x00023b4d) cell_toolbar_pane_g1

0x1b61,	// (0x00023b5f) cell_toolbar_pane_g2_ParamLimits

0x1b61,	// (0x00023b5f) cell_toolbar_pane_g2

0x0001,

0xf7be,	// (0x000317bc) cell_toolbar_pane_g_ParamLimits

0xf7be,	// (0x000317bc) cell_toolbar_pane_g

0x1b83,	// (0x00023b81) grid_highlight_pane_cp2_ParamLimits

0x1b83,	// (0x00023b81) grid_highlight_pane_cp2

0x1b9d,	// (0x00023b9b) toolbar_button_pane

0x1ba9,	// (0x00023ba7) toolbar_button_pane_g1

0x1bb9,	// (0x00023bb7) toolbar_button_pane_g2

0x1bb1,	// (0x00023baf) toolbar_button_pane_g3

0x1bc9,	// (0x00023bc7) toolbar_button_pane_g4

0x1bc1,	// (0x00023bbf) toolbar_button_pane_g5

0x1bd1,	// (0x00023bcf) toolbar_button_pane_g6

0x1bd9,	// (0x00023bd7) toolbar_button_pane_g7

0x1be9,	// (0x00023be7) toolbar_button_pane_g8

0x1be1,	// (0x00023bdf) toolbar_button_pane_g9

0x0009,

0xf7c3,	// (0x000317c1) toolbar_button_pane_g

0x6cf5,	// (0x00028cf3) list_single_2graphic_pane_g1_cp3_ParamLimits

0x6cf5,	// (0x00028cf3) list_single_2graphic_pane_g1_cp3

0xc52b,	// (0x0002e529) list_single_2graphic_pane_g2_cp3_ParamLimits

0xc52b,	// (0x0002e529) list_single_2graphic_pane_g2_cp3

0x6d10,	// (0x00028d0e) list_single_2graphic_pane_g3_cp3

0x6d18,	// (0x00028d16) list_single_2graphic_pane_g4_cp3_ParamLimits

0x6d18,	// (0x00028d16) list_single_2graphic_pane_g4_cp3

0x6d24,	// (0x00028d22) list_single_2graphic_pane_t1_cp3_ParamLimits

0x6d24,	// (0x00028d22) list_single_2graphic_pane_t1_cp3

0x6d3e,	// (0x00028d3c) list_single_midp_graphic_pane_g2_ParamLimits

0x6d3e,	// (0x00028d3c) list_single_midp_graphic_pane_g2

0x6524,	// (0x00028522) aid_zoom_text_primary

0x5562,	// (0x00027560) aid_zoom_text_secondary

0xdc68,	// (0x0002fc66) status_small_pane_g7_ParamLimits

0xdc68,	// (0x0002fc66) status_small_pane_g7

0xdc8b,	// (0x0002fc89) status_small_pane_t1_ParamLimits

0xcd98,	// (0x0002ed96) title_pane_g2

0x0003,

0xf54e,	// (0x0003154c) title_pane_g

0xd036,	// (0x0002f034) aid_size_cell_colour_1_pane_ParamLimits

0xd036,	// (0x0002f034) aid_size_cell_colour_1_pane

0xd04a,	// (0x0002f048) aid_size_cell_colour_2_pane_ParamLimits

0xd04a,	// (0x0002f048) aid_size_cell_colour_2_pane

0xd05e,	// (0x0002f05c) aid_size_cell_colour_3_pane_ParamLimits

0xd05e,	// (0x0002f05c) aid_size_cell_colour_3_pane

0xd072,	// (0x0002f070) aid_size_cell_colour_4_pane_ParamLimits

0xd072,	// (0x0002f070) aid_size_cell_colour_4_pane

0x5c9d,	// (0x00027c9b) title_pane_stacon_g1_ParamLimits

0x5c9d,	// (0x00027c9b) title_pane_stacon_g1

0x21b9,	// (0x000241b7) popup_note_wait_window_g3_ParamLimits

0x21b9,	// (0x000241b7) popup_note_wait_window_g3

0x222f,	// (0x0002422d) popup_note_wait_window_t5_ParamLimits

0x222f,	// (0x0002422d) popup_note_wait_window_t5

0x087b,	// (0x00022879) main_feb_china_hwr_fs_writing_pane

0xbfec,	// (0x0002dfea) popup_feb_china_hwr_fs_window_ParamLimits

0xbfec,	// (0x0002dfea) popup_feb_china_hwr_fs_window

0xc53c,	// (0x0002e53a) aid_size_cell_hwr_fs_ParamLimits

0xc53c,	// (0x0002e53a) aid_size_cell_hwr_fs

0x1c1d,	// (0x00023c1b) bg_popup_sub_pane_cp3_ParamLimits

0x1c1d,	// (0x00023c1b) bg_popup_sub_pane_cp3

0xc551,	// (0x0002e54f) grid_hwr_fs_pane_ParamLimits

0xc551,	// (0x0002e54f) grid_hwr_fs_pane

0x6d89,	// (0x00028d87) linegrid_hwr_fs_pane_ParamLimits

0x6d89,	// (0x00028d87) linegrid_hwr_fs_pane

0xc569,	// (0x0002e567) cell_hwr_fs_pane_ParamLimits

0xc569,	// (0x0002e567) cell_hwr_fs_pane

0x1c29,	// (0x00023c27) linegrid_hwr_fs_pane_g1_ParamLimits

0x1c29,	// (0x00023c27) linegrid_hwr_fs_pane_g1

0xe090,	// (0x0003008e) linegrid_hwr_fs_pane_g2_ParamLimits

0xe090,	// (0x0003008e) linegrid_hwr_fs_pane_g2

0x1c35,	// (0x00023c33) linegrid_hwr_fs_pane_g3_ParamLimits

0x1c35,	// (0x00023c33) linegrid_hwr_fs_pane_g3

0x6dc9,	// (0x00028dc7) linegrid_hwr_fs_pane_g4_ParamLimits

0x6dc9,	// (0x00028dc7) linegrid_hwr_fs_pane_g4

0x6de3,	// (0x00028de1) linegrid_hwr_fs_pane_g5_ParamLimits

0x6de3,	// (0x00028de1) linegrid_hwr_fs_pane_g5

0x0004,

0xf7e9,	// (0x000317e7) linegrid_hwr_fs_pane_g_ParamLimits

0xf7e9,	// (0x000317e7) linegrid_hwr_fs_pane_g

0x1c41,	// (0x00023c3f) cell_hwr_fs_pane_g1_ParamLimits

0x1c41,	// (0x00023c3f) cell_hwr_fs_pane_g1

0x1ac1,	// (0x00023abf) cell_hwr_fs_pane_g2_ParamLimits

0x1ac1,	// (0x00023abf) cell_hwr_fs_pane_g2

0xe0a2,	// (0x000300a0) cell_hwr_fs_pane_g3_ParamLimits

0xe0a2,	// (0x000300a0) cell_hwr_fs_pane_g3

0xe0af,	// (0x000300ad) cell_hwr_fs_pane_g4_ParamLimits

0xe0af,	// (0x000300ad) cell_hwr_fs_pane_g4

0x0003,

0xf7f4,	// (0x000317f2) cell_hwr_fs_pane_g_ParamLimits

0xf7f4,	// (0x000317f2) cell_hwr_fs_pane_g

0xc589,	// (0x0002e587) cell_hwr_fs_pane_t1

0x087b,	// (0x00022879) grid_highlight_pane_cp6

0x087b,	// (0x00022879) main_idle_act2_pane

0x0faf,	// (0x00022fad) aid_inside_area_popup_secondary

0xe134,	// (0x00030132) aid_inside_area_window_primary_ParamLimits

0xe134,	// (0x00030132) aid_inside_area_window_primary

0x2f2b,	// (0x00024f29) ai2_news_ticker_pane

0x2f33,	// (0x00024f31) aid_size_cell_ai1_link_ParamLimits

0x2f33,	// (0x00024f31) aid_size_cell_ai1_link

0xe4d1,	// (0x000304cf) popup_ai2_data_window_ParamLimits

0xe4d1,	// (0x000304cf) popup_ai2_data_window

0x2f4d,	// (0x00024f4b) popup_ai2_link_window_ParamLimits

0x2f4d,	// (0x00024f4b) popup_ai2_link_window

0x1c1d,	// (0x00023c1b) bg_popup_sub_pane_cp4_ParamLimits

0x1c1d,	// (0x00023c1b) bg_popup_sub_pane_cp4

0x2f61,	// (0x00024f5f) grid_ai2_link_pane_ParamLimits

0x2f61,	// (0x00024f5f) grid_ai2_link_pane

0x2f78,	// (0x00024f76) popup_ai2_link_window_g1_ParamLimits

0x2f78,	// (0x00024f76) popup_ai2_link_window_g1

0x2f84,	// (0x00024f82) popup_ai2_link_window_g2_ParamLimits

0x2f84,	// (0x00024f82) popup_ai2_link_window_g2

0x0001,

0xf9c7,	// (0x000319c5) popup_ai2_link_window_g_ParamLimits

0xf9c7,	// (0x000319c5) popup_ai2_link_window_g

0x2f93,	// (0x00024f91) ai2_mp_button_pane

0x2f9b,	// (0x00024f99) ai2_mp_volume_pane

0x1dda,	// (0x00023dd8) bg_popup_sub_pane_cp5_ParamLimits

0x1dda,	// (0x00023dd8) bg_popup_sub_pane_cp5

0x2fa3,	// (0x00024fa1) heading_ai2_gene_pane_ParamLimits

0x2fa3,	// (0x00024fa1) heading_ai2_gene_pane

0x2faf,	// (0x00024fad) list_ai2_gene_pane_ParamLimits

0x2faf,	// (0x00024fad) list_ai2_gene_pane

0x2ff7,	// (0x00024ff5) cell_ai2_link_pane_ParamLimits

0x2ff7,	// (0x00024ff5) cell_ai2_link_pane

0x300d,	// (0x0002500b) cell_ai2_link_pane_g1

0x087b,	// (0x00022879) grid_highlight_pane_cp7

0x7504,	// (0x00029502) ai2_mp_volume_pane_g1

0x30aa,	// (0x000250a8) ai2_mp_volume_pane_g2

0xe4fb,	// (0x000304f9) list_ai2_gene_pane_t1

0x30a2,	// (0x000250a0) ai2_mp_volume_pane_g3

0x0002,

0xf9e0,	// (0x000319de) ai2_mp_volume_pane_g

0x750c,	// (0x0002950a) volume_small_pane_cp3

0x30b2,	// (0x000250b0) aid_size_cell_ai2_button

0x30ba,	// (0x000250b8) grid_ai2_button_pane

0x30c3,	// (0x000250c1) cell_ai2_button_pane_ParamLimits

0x30c3,	// (0x000250c1) cell_ai2_button_pane

0x07f9,	// (0x000227f7) cell_ai2_button_pane_g1

0x087b,	// (0x00022879) grid_highlight_pane_cp8

0x3062,	// (0x00025060) ai2_gene_pane_t1_ParamLimits

0x3062,	// (0x00025060) ai2_gene_pane_t1

0xbf73,	// (0x0002df71) aid_height_parent_landscape

0xe27d,	// (0x0003027b) aid_height_set_list

0x2ccc,	// (0x00024cca) aid_size_parent

0x2e21,	// (0x00024e1f) aid_size_cell_graphic_pane_ParamLimits

0x2fbf,	// (0x00024fbd) popup_ai2_data_window_g1_ParamLimits

0x2fbf,	// (0x00024fbd) popup_ai2_data_window_g1

0x2fcb,	// (0x00024fc9) ai2_news_ticker_pane_g1

0x2fd3,	// (0x00024fd1) ai2_news_ticker_pane_g2

0x0001,

0xf9cc,	// (0x000319ca) ai2_news_ticker_pane_g

0x2fdb,	// (0x00024fd9) ai2_news_ticker_pane_t1

0x2fe9,	// (0x00024fe7) ai2_news_ticker_pane_t2

0x0001,

0xf9d1,	// (0x000319cf) ai2_news_ticker_pane_t

0x2e02,	// (0x00024e00) heading_ai2_gene_pane_g1

0x3016,	// (0x00025014) heading_ai2_gene_pane_t1_ParamLimits

0x3016,	// (0x00025014) heading_ai2_gene_pane_t1

0x302b,	// (0x00025029) list_highlight_pane_cp6

0xe4e5,	// (0x000304e3) ai2_gene_pane_ParamLimits

0xe4e5,	// (0x000304e3) ai2_gene_pane

0xe509,	// (0x00030507) list_ai2_gene_pane_t2

0x0001,

0xf9d6,	// (0x000319d4) list_ai2_gene_pane_t

0x3033,	// (0x00025031) list_highlight_pane_cp8_ParamLimits

0x3033,	// (0x00025031) list_highlight_pane_cp8

0x3044,	// (0x00025042) ai2_gene_pane_g1_ParamLimits

0x3044,	// (0x00025042) ai2_gene_pane_g1

0x3056,	// (0x00025054) ai2_gene_pane_g2_ParamLimits

0x3056,	// (0x00025054) ai2_gene_pane_g2

0x0001,

0xf9db,	// (0x000319d9) ai2_gene_pane_g_ParamLimits

0xf9db,	// (0x000319d9) ai2_gene_pane_g

0x0e20,	// (0x00022e1e) scroll_pane_cp12

0xbf32,	// (0x0002df30) control_pane_t3_ParamLimits

0xbf32,	// (0x0002df30) control_pane_t3

0xdc7c,	// (0x0002fc7a) status_small_pane_g8_ParamLimits

0xdc7c,	// (0x0002fc7a) status_small_pane_g8

0xc060,	// (0x0002e05e) popup_find_window_ParamLimits

0xc253,	// (0x0002e251) popup_note_image_window_ParamLimits

0x9118,	// (0x0002b116) list_double2_graphic_pane_vc_g1_ParamLimits

0x9118,	// (0x0002b116) list_double2_graphic_pane_vc_g1

0x983b,	// (0x0002b839) list_double2_graphic_pane_vc_g2_ParamLimits

0x983b,	// (0x0002b839) list_double2_graphic_pane_vc_g2

0x9847,	// (0x0002b845) list_double2_graphic_pane_vc_g3_ParamLimits

0x9847,	// (0x0002b845) list_double2_graphic_pane_vc_g3

0x0002,

0xf5c1,	// (0x000315bf) list_double2_graphic_pane_vc_g_ParamLimits

0xf5c1,	// (0x000315bf) list_double2_graphic_pane_vc_g

0x9853,	// (0x0002b851) list_double2_graphic_pane_vc_t1_ParamLimits

0x9853,	// (0x0002b851) list_double2_graphic_pane_vc_t1

0x983b,	// (0x0002b839) list_single_heading_pane_vc_g1_ParamLimits

0x983b,	// (0x0002b839) list_single_heading_pane_vc_g1

0x9847,	// (0x0002b845) list_single_heading_pane_vc_g2_ParamLimits

0x9847,	// (0x0002b845) list_single_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x000315c6) list_single_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x000315c6) list_single_heading_pane_vc_g

0x9869,	// (0x0002b867) list_single_heading_pane_vc_t1_ParamLimits

0x9869,	// (0x0002b867) list_single_heading_pane_vc_t1

0x987f,	// (0x0002b87d) list_single_heading_pane_vc_t2_ParamLimits

0x987f,	// (0x0002b87d) list_single_heading_pane_vc_t2

0x0001,

0xf7d8,	// (0x000317d6) list_single_heading_pane_vc_t_ParamLimits

0xf7d8,	// (0x000317d6) list_single_heading_pane_vc_t

0x9891,	// (0x0002b88f) list_setting_number_pane_vc_g1_ParamLimits

0x9891,	// (0x0002b88f) list_setting_number_pane_vc_g1

0x989d,	// (0x0002b89b) list_setting_number_pane_vc_g2_ParamLimits

0x989d,	// (0x0002b89b) list_setting_number_pane_vc_g2

0x0001,

0xf7dd,	// (0x000317db) list_setting_number_pane_vc_g_ParamLimits

0xf7dd,	// (0x000317db) list_setting_number_pane_vc_g

0x98a9,	// (0x0002b8a7) list_setting_number_pane_vc_t1_ParamLimits

0x98a9,	// (0x0002b8a7) list_setting_number_pane_vc_t1

0x98bd,	// (0x0002b8bb) list_setting_number_pane_vc_t2_ParamLimits

0x98bd,	// (0x0002b8bb) list_setting_number_pane_vc_t2

0x98d9,	// (0x0002b8d7) list_setting_number_pane_vc_t3_ParamLimits

0x98d9,	// (0x0002b8d7) list_setting_number_pane_vc_t3

0x0002,

0xf7e2,	// (0x000317e0) list_setting_number_pane_vc_t_ParamLimits

0xf7e2,	// (0x000317e0) list_setting_number_pane_vc_t

0x98f1,	// (0x0002b8ef) set_value_pane_vc_ParamLimits

0x98f1,	// (0x0002b8ef) set_value_pane_vc

0x9977,	// (0x0002b975) list_double2_graphic_pane_vc_ParamLimits

0x9977,	// (0x0002b975) list_double2_graphic_pane_vc

0x2d27,	// (0x00024d25) list_double2_large_graphic_pane_vc_ParamLimits

0x2d27,	// (0x00024d25) list_double2_large_graphic_pane_vc

0x9977,	// (0x0002b975) list_double2_pane_vc_ParamLimits

0x9977,	// (0x0002b975) list_double2_pane_vc

0x9977,	// (0x0002b975) list_double_graphic_heading_pane_vc_ParamLimits

0x9977,	// (0x0002b975) list_double_graphic_heading_pane_vc

0x9977,	// (0x0002b975) list_double_graphic_pane_vc_ParamLimits

0x9977,	// (0x0002b975) list_double_graphic_pane_vc

0x9977,	// (0x0002b975) list_double_heading_pane_vc_ParamLimits

0x9977,	// (0x0002b975) list_double_heading_pane_vc

0x998b,	// (0x0002b989) list_double_large_graphic_pane_vc_ParamLimits

0x998b,	// (0x0002b989) list_double_large_graphic_pane_vc

0x9977,	// (0x0002b975) list_double_number_pane_vc_ParamLimits

0x9977,	// (0x0002b975) list_double_number_pane_vc

0x9977,	// (0x0002b975) list_double_pane_vc_ParamLimits

0x9977,	// (0x0002b975) list_double_pane_vc

0x9977,	// (0x0002b975) list_double_time_pane_vc_ParamLimits

0x9977,	// (0x0002b975) list_double_time_pane_vc

0x9977,	// (0x0002b975) list_setting_number_pane_vc_ParamLimits

0x9977,	// (0x0002b975) list_setting_number_pane_vc

0x9977,	// (0x0002b975) list_setting_pane_vc_ParamLimits

0x9977,	// (0x0002b975) list_setting_pane_vc

0x9977,	// (0x0002b975) list_single_graphic_heading_pane_vc_ParamLimits

0x9977,	// (0x0002b975) list_single_graphic_heading_pane_vc

0x9977,	// (0x0002b975) list_single_heading_pane_vc_ParamLimits

0x9977,	// (0x0002b975) list_single_heading_pane_vc

0x9977,	// (0x0002b975) list_single_number_heading_pane_vc_ParamLimits

0x9977,	// (0x0002b975) list_single_number_heading_pane_vc

0x99e0,	// (0x0002b9de) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x99e0,	// (0x0002b9de) list_double_graphic_heading_pane_vc_g1

0x983b,	// (0x0002b839) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x983b,	// (0x0002b839) list_double_graphic_heading_pane_vc_g2

0x9847,	// (0x0002b845) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x9847,	// (0x0002b845) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9e7,	// (0x000319e5) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9e7,	// (0x000319e5) list_double_graphic_heading_pane_vc_g

0x99ec,	// (0x0002b9ea) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x99ec,	// (0x0002b9ea) list_double_graphic_heading_pane_vc_t1

0x9a02,	// (0x0002ba00) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x9a02,	// (0x0002ba00) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9ee,	// (0x000319ec) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9ee,	// (0x000319ec) list_double_graphic_heading_pane_vc_t

0x9891,	// (0x0002b88f) list_setting_pane_vc_g1_ParamLimits

0x9891,	// (0x0002b88f) list_setting_pane_vc_g1

0x989d,	// (0x0002b89b) list_setting_pane_vc_g2_ParamLimits

0x989d,	// (0x0002b89b) list_setting_pane_vc_g2

0x0001,

0xf7dd,	// (0x000317db) list_setting_pane_vc_g_ParamLimits

0xf7dd,	// (0x000317db) list_setting_pane_vc_g

0x9a1a,	// (0x0002ba18) list_setting_pane_vc_t1_ParamLimits

0x9a1a,	// (0x0002ba18) list_setting_pane_vc_t1

0x9a2e,	// (0x0002ba2c) list_setting_pane_vc_t2_ParamLimits

0x9a2e,	// (0x0002ba2c) list_setting_pane_vc_t2

0x0001,

0xfa31,	// (0x00031a2f) list_setting_pane_vc_t_ParamLimits

0xfa31,	// (0x00031a2f) list_setting_pane_vc_t

0x98f1,	// (0x0002b8ef) set_value_pane_cp_vc_ParamLimits

0x98f1,	// (0x0002b8ef) set_value_pane_cp_vc

0x983b,	// (0x0002b839) list_single_number_heading_pane_vc_g1_ParamLimits

0x983b,	// (0x0002b839) list_single_number_heading_pane_vc_g1

0x9847,	// (0x0002b845) list_single_number_heading_pane_vc_g2_ParamLimits

0x9847,	// (0x0002b845) list_single_number_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x000315c6) list_single_number_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x000315c6) list_single_number_heading_pane_vc_g

0x9869,	// (0x0002b867) list_single_number_heading_pane_vc_t1_ParamLimits

0x9869,	// (0x0002b867) list_single_number_heading_pane_vc_t1

0x9a42,	// (0x0002ba40) list_single_number_heading_pane_vc_t2_ParamLimits

0x9a42,	// (0x0002ba40) list_single_number_heading_pane_vc_t2

0x9a54,	// (0x0002ba52) list_single_number_heading_pane_vc_t3_ParamLimits

0x9a54,	// (0x0002ba52) list_single_number_heading_pane_vc_t3

0x0002,

0xfa36,	// (0x00031a34) list_single_number_heading_pane_vc_t_ParamLimits

0xfa36,	// (0x00031a34) list_single_number_heading_pane_vc_t

0x9118,	// (0x0002b116) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x9118,	// (0x0002b116) list_single_graphic_heading_pane_vc_g1

0x983b,	// (0x0002b839) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x983b,	// (0x0002b839) list_single_graphic_heading_pane_vc_g4

0x9847,	// (0x0002b845) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x9847,	// (0x0002b845) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf5c1,	// (0x000315bf) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf5c1,	// (0x000315bf) list_single_graphic_heading_pane_vc_g

0x9869,	// (0x0002b867) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x9869,	// (0x0002b867) list_single_graphic_heading_pane_vc_t1

0x9a66,	// (0x0002ba64) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x9a66,	// (0x0002ba64) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa3d,	// (0x00031a3b) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa3d,	// (0x00031a3b) list_single_graphic_heading_pane_vc_t

0x983b,	// (0x0002b839) list_double2_pane_vc_g1_ParamLimits

0x983b,	// (0x0002b839) list_double2_pane_vc_g1

0x9847,	// (0x0002b845) list_double2_pane_vc_g2_ParamLimits

0x9847,	// (0x0002b845) list_double2_pane_vc_g2

0x0001,

0xf5c8,	// (0x000315c6) list_double2_pane_vc_g_ParamLimits

0xf5c8,	// (0x000315c6) list_double2_pane_vc_g

0x9a78,	// (0x0002ba76) list_double2_pane_vc_t1_ParamLimits

0x9a78,	// (0x0002ba76) list_double2_pane_vc_t1

0x9a8e,	// (0x0002ba8c) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x9a8e,	// (0x0002ba8c) list_double2_large_graphic_pane_vc_g1

0x9a9a,	// (0x0002ba98) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x9a9a,	// (0x0002ba98) list_double2_large_graphic_pane_vc_g2

0x9aa6,	// (0x0002baa4) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x9aa6,	// (0x0002baa4) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5e5,	// (0x000315e3) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5e5,	// (0x000315e3) list_double2_large_graphic_pane_vc_g

0x9ab2,	// (0x0002bab0) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x9ab2,	// (0x0002bab0) list_double2_large_graphic_pane_vc_t1

0x9ac8,	// (0x0002bac6) list_double_time_pane_vc_g1_ParamLimits

0x9ac8,	// (0x0002bac6) list_double_time_pane_vc_g1

0x9ad4,	// (0x0002bad2) list_double_time_pane_vc_g2_ParamLimits

0x9ad4,	// (0x0002bad2) list_double_time_pane_vc_g2

0x0001,

0xfa42,	// (0x00031a40) list_double_time_pane_vc_g_ParamLimits

0xfa42,	// (0x00031a40) list_double_time_pane_vc_g

0x9ae0,	// (0x0002bade) list_double_time_pane_vc_t1_ParamLimits

0x9ae0,	// (0x0002bade) list_double_time_pane_vc_t1

0x9afe,	// (0x0002bafc) list_double_time_pane_vc_t2_ParamLimits

0x9afe,	// (0x0002bafc) list_double_time_pane_vc_t2

0x9b42,	// (0x0002bb40) list_double_time_pane_vc_t3_ParamLimits

0x9b42,	// (0x0002bb40) list_double_time_pane_vc_t3

0x9b54,	// (0x0002bb52) list_double_time_pane_vc_t4_ParamLimits

0x9b54,	// (0x0002bb52) list_double_time_pane_vc_t4

0x0003,

0xfa47,	// (0x00031a45) list_double_time_pane_vc_t_ParamLimits

0xfa47,	// (0x00031a45) list_double_time_pane_vc_t

0x983b,	// (0x0002b839) list_double_pane_vc_g1_ParamLimits

0x983b,	// (0x0002b839) list_double_pane_vc_g1

0x9847,	// (0x0002b845) list_double_pane_vc_g2_ParamLimits

0x9847,	// (0x0002b845) list_double_pane_vc_g2

0x0001,

0xf5c8,	// (0x000315c6) list_double_pane_vc_g_ParamLimits

0xf5c8,	// (0x000315c6) list_double_pane_vc_g

0x9b66,	// (0x0002bb64) list_double_pane_vc_t1_ParamLimits

0x9b66,	// (0x0002bb64) list_double_pane_vc_t1

0x9b78,	// (0x0002bb76) list_double_pane_vc_t2_ParamLimits

0x9b78,	// (0x0002bb76) list_double_pane_vc_t2

0x0001,

0xfa50,	// (0x00031a4e) list_double_pane_vc_t_ParamLimits

0xfa50,	// (0x00031a4e) list_double_pane_vc_t

0x983b,	// (0x0002b839) list_double_number_pane_vc_g1_ParamLimits

0x983b,	// (0x0002b839) list_double_number_pane_vc_g1

0x9847,	// (0x0002b845) list_double_number_pane_vc_g2_ParamLimits

0x9847,	// (0x0002b845) list_double_number_pane_vc_g2

0x0001,

0xf5c8,	// (0x000315c6) list_double_number_pane_vc_g_ParamLimits

0xf5c8,	// (0x000315c6) list_double_number_pane_vc_g

0x9b8e,	// (0x0002bb8c) list_double_number_pane_vc_t1_ParamLimits

0x9b8e,	// (0x0002bb8c) list_double_number_pane_vc_t1

0x9ba2,	// (0x0002bba0) list_double_number_pane_vc_t2_ParamLimits

0x9ba2,	// (0x0002bba0) list_double_number_pane_vc_t2

0x9bb4,	// (0x0002bbb2) list_double_number_pane_vc_t3_ParamLimits

0x9bb4,	// (0x0002bbb2) list_double_number_pane_vc_t3

0x0002,

0xfa55,	// (0x00031a53) list_double_number_pane_vc_t_ParamLimits

0xfa55,	// (0x00031a53) list_double_number_pane_vc_t

0x9bca,	// (0x0002bbc8) list_double_large_graphic_pane_vc_g1_ParamLimits

0x9bca,	// (0x0002bbc8) list_double_large_graphic_pane_vc_g1

0x9bd6,	// (0x0002bbd4) list_double_large_graphic_pane_vc_g2_ParamLimits

0x9bd6,	// (0x0002bbd4) list_double_large_graphic_pane_vc_g2

0x9be7,	// (0x0002bbe5) list_double_large_graphic_pane_vc_g3_ParamLimits

0x9be7,	// (0x0002bbe5) list_double_large_graphic_pane_vc_g3

0x9bf3,	// (0x0002bbf1) list_double_large_graphic_pane_vc_g4_ParamLimits

0x9bf3,	// (0x0002bbf1) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa5c,	// (0x00031a5a) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa5c,	// (0x00031a5a) list_double_large_graphic_pane_vc_g

0x9bff,	// (0x0002bbfd) list_double_large_graphic_pane_vc_t1_ParamLimits

0x9bff,	// (0x0002bbfd) list_double_large_graphic_pane_vc_t1

0x9c11,	// (0x0002bc0f) list_double_large_graphic_pane_vc_t2_ParamLimits

0x9c11,	// (0x0002bc0f) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa65,	// (0x00031a63) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa65,	// (0x00031a63) list_double_large_graphic_pane_vc_t

0x983b,	// (0x0002b839) list_double_heading_pane_vc_g1_ParamLimits

0x983b,	// (0x0002b839) list_double_heading_pane_vc_g1

0x9847,	// (0x0002b845) list_double_heading_pane_vc_g2_ParamLimits

0x9847,	// (0x0002b845) list_double_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x000315c6) list_double_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x000315c6) list_double_heading_pane_vc_g

0x9c2b,	// (0x0002bc29) list_double_heading_pane_vc_t1_ParamLimits

0x9c2b,	// (0x0002bc29) list_double_heading_pane_vc_t1

0x9869,	// (0x0002b867) list_double_heading_pane_vc_t2_ParamLimits

0x9869,	// (0x0002b867) list_double_heading_pane_vc_t2

0x0001,

0xfa6a,	// (0x00031a68) list_double_heading_pane_vc_t_ParamLimits

0xfa6a,	// (0x00031a68) list_double_heading_pane_vc_t

0x9c3d,	// (0x0002bc3b) list_double_graphic_pane_vc_g1_ParamLimits

0x9c3d,	// (0x0002bc3b) list_double_graphic_pane_vc_g1

0x9c50,	// (0x0002bc4e) list_double_graphic_pane_vc_g2_ParamLimits

0x9c50,	// (0x0002bc4e) list_double_graphic_pane_vc_g2

0x983b,	// (0x0002b839) list_double_graphic_pane_vc_g3_ParamLimits

0x983b,	// (0x0002b839) list_double_graphic_pane_vc_g3

0x0003,

0xfa6f,	// (0x00031a6d) list_double_graphic_pane_vc_g_ParamLimits

0xfa6f,	// (0x00031a6d) list_double_graphic_pane_vc_g

0x9c6d,	// (0x0002bc6b) list_double_graphic_pane_vc_t1_ParamLimits

0x9c6d,	// (0x0002bc6b) list_double_graphic_pane_vc_t1

0x9c8b,	// (0x0002bc89) list_double_graphic_pane_vc_t2_ParamLimits

0x9c8b,	// (0x0002bc89) list_double_graphic_pane_vc_t2

0x0001,

0xfa78,	// (0x00031a76) list_double_graphic_pane_vc_t_ParamLimits

0xfa78,	// (0x00031a76) list_double_graphic_pane_vc_t

0x55fc,	// (0x000275fa) aid_size_cell_fastswap

0xbc97,	// (0x0002dc95) aid_size_cell_touch_ParamLimits

0xbc97,	// (0x0002dc95) aid_size_cell_touch

0x57b8,	// (0x000277b6) popup_fast_swap_wide_window_ParamLimits

0x57b8,	// (0x000277b6) popup_fast_swap_wide_window

0xbd8f,	// (0x0002dd8d) touch_pane_ParamLimits

0xbd8f,	// (0x0002dd8d) touch_pane

0x9584,	// (0x0002b582) button_value_adjust_pane_cp2

0x2d8b,	// (0x00024d89) button_value_adjust_pane_cp4

0x95a4,	// (0x0002b5a2) form_field_data_pane_cp2

0xd4e5,	// (0x0002f4e3) form_field_data_wide_pane_cp2

0x11fb,	// (0x000231f9) bg_scroll_pane_ParamLimits

0x5e4a,	// (0x00027e48) scroll_handle_pane_ParamLimits

0x5e5e,	// (0x00027e5c) scroll_sc2_down_pane_ParamLimits

0x5e5e,	// (0x00027e5c) scroll_sc2_down_pane

0x122c,	// (0x0002322a) scroll_sc2_up_pane_ParamLimits

0x122c,	// (0x0002322a) scroll_sc2_up_pane

0xe61f,	// (0x0003061d) grid_wheel_folder_pane_g1_ParamLimits

0xe61f,	// (0x0003061d) grid_wheel_folder_pane_g1

0x614d,	// (0x0002814b) clock_nsta_pane_cp2_ParamLimits

0x614d,	// (0x0002814b) clock_nsta_pane_cp2

0xdb92,	// (0x0002fb90) listscroll_midp_pane_ParamLimits

0xdba1,	// (0x0002fb9f) midp_canvas_pane

0x650a,	// (0x00028508) nsta_clock_indic_pane

0x19d2,	// (0x000239d0) listscroll_form_pane_vc

0x19da,	// (0x000239d8) listscroll_set_pane_vc_ParamLimits

0x19da,	// (0x000239d8) listscroll_set_pane_vc

0xddd4,	// (0x0002fdd2) clock_nsta_pane

0xddf7,	// (0x0002fdf5) indicator_nsta_pane

0x1af3,	// (0x00023af1) bg_popup_sub_pane_cp2_ParamLimits

0x1b07,	// (0x00023b05) find_pane_cp2_ParamLimits

0x1b07,	// (0x00023b05) find_pane_cp2

0x1b19,	// (0x00023b17) grid_toobar_pane_ParamLimits

0x1bf1,	// (0x00023bef) list_form_gen_pane_vc_ParamLimits

0x1bf1,	// (0x00023bef) list_form_gen_pane_vc

0x1c07,	// (0x00023c05) scroll_pane_cp8_vc_ParamLimits

0x1c07,	// (0x00023c05) scroll_pane_cp8_vc

0x1c8d,	// (0x00023c8b) data_form_wide_pane_vc_ParamLimits

0x1c8d,	// (0x00023c8b) data_form_wide_pane_vc

0x1c99,	// (0x00023c97) form_field_data_wide_pane_vc_g1

0x1ca1,	// (0x00023c9f) form_field_data_wide_pane_vc_t1_ParamLimits

0x1ca1,	// (0x00023c9f) form_field_data_wide_pane_vc_t1

0x0e79,	// (0x00022e77) input_focus_pane_cp6_vc_ParamLimits

0x0e79,	// (0x00022e77) input_focus_pane_cp6_vc

0xe0d8,	// (0x000300d6) list_midp_pane_ParamLimits

0x2dad,	// (0x00024dab) scroll_pane_cp16_ParamLimits

0x2dad,	// (0x00024dab) scroll_pane_cp16

0x1f9f,	// (0x00023f9d) button_value_adjust_pane_ParamLimits

0x1f9f,	// (0x00023f9d) button_value_adjust_pane

0xe289,	// (0x00030287) button_value_adjust_pane_cp6_ParamLimits

0xe289,	// (0x00030287) button_value_adjust_pane_cp6

0xe393,	// (0x00030391) settings_code_pane_cp_ParamLimits

0xe393,	// (0x00030391) settings_code_pane_cp

0x07f9,	// (0x000227f7) cell_touch_pane_g1

0x07f9,	// (0x000227f7) cell_touch_pane_g2

0x0001,

0xf703,	// (0x00031701) cell_touch_pane_g

0xe517,	// (0x00030515) cell_touch_pane_cp_ParamLimits

0xe517,	// (0x00030515) cell_touch_pane_cp

0xe533,	// (0x00030531) cell_touch_pane_ParamLimits

0xe533,	// (0x00030531) cell_touch_pane

0x07f9,	// (0x000227f7) scroll_sc2_down_pane_g1

0x07f9,	// (0x000227f7) scroll_sc2_up_pane_g1

0x087b,	// (0x00022879) bg_set_opt_pane_cp4_vc

0x30d5,	// (0x000250d3) list_set_graphic_pane_vc_g1_ParamLimits

0x30d5,	// (0x000250d3) list_set_graphic_pane_vc_g1

0x30e1,	// (0x000250df) list_set_graphic_pane_vc_g2_ParamLimits

0x30e1,	// (0x000250df) list_set_graphic_pane_vc_g2

0x0001,

0xf9f3,	// (0x000319f1) list_set_graphic_pane_vc_g_ParamLimits

0xf9f3,	// (0x000319f1) list_set_graphic_pane_vc_g

0x30ed,	// (0x000250eb) text_primary_small_cp13_vc_ParamLimits

0x30ed,	// (0x000250eb) text_primary_small_cp13_vc

0x3105,	// (0x00025103) list_set_graphic_pane_vc_ParamLimits

0x3105,	// (0x00025103) list_set_graphic_pane_vc

0x087b,	// (0x00022879) input_focus_pane_cp2_vc

0x07f9,	// (0x000227f7) setting_code_pane_vc_g1

0x3118,	// (0x00025116) setting_code_pane_vc_t1

0x3126,	// (0x00025124) set_text_pane_vc_t1_ParamLimits

0x3126,	// (0x00025124) set_text_pane_vc_t1

0x087b,	// (0x00022879) input_focus_pane_cp1_vc

0x3141,	// (0x0002513f) list_set_text_pane_vc

0x07f9,	// (0x000227f7) setting_text_pane_vc_g1

0x087b,	// (0x00022879) bg_set_opt_pane_cp2_vc

0x314b,	// (0x00025149) setting_slider_graphic_pane_vc_g1

0x3153,	// (0x00025151) setting_slider_graphic_pane_vc_t1

0x3161,	// (0x0002515f) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9f8,	// (0x000319f6) setting_slider_graphic_pane_vc_t

0x316f,	// (0x0002516d) slider_set_pane_cp_vc

0x3177,	// (0x00025175) slider_set_pane_vc_g1

0x3180,	// (0x0002517e) slider_set_pane_vc_g2

0x0006,

0xf9fd,	// (0x000319fb) slider_set_pane_vc_g

0x0ed4,	// (0x00022ed2) set_opt_bg_pane_g1_copy1

0x0edc,	// (0x00022eda) set_opt_bg_pane_g2_copy1

0x31ac,	// (0x000251aa) set_opt_bg_pane_g3_copy1

0x0eec,	// (0x00022eea) set_opt_bg_pane_g4_copy1

0x0ef4,	// (0x00022ef2) set_opt_bg_pane_g5_copy1

0x0efc,	// (0x00022efa) set_opt_bg_pane_g6_copy1

0x31b4,	// (0x000251b2) set_opt_bg_pane_g7_copy1

0x31bc,	// (0x000251ba) set_opt_bg_pane_g8_copy1

0x31c4,	// (0x000251c2) set_opt_bg_pane_g9_copy1

0x087b,	// (0x00022879) bg_set_opt_pane_cp_vc

0x31cc,	// (0x000251ca) setting_slider_pane_vc_t1

0x3153,	// (0x00025151) setting_slider_pane_vc_t2

0x3161,	// (0x0002515f) setting_slider_pane_vc_t3

0x0002,

0xfa0c,	// (0x00031a0a) setting_slider_pane_vc_t

0x316f,	// (0x0002516d) slider_set_pane_vc

0x6e89,	// (0x00028e87) volume_set_pane_vc_g1

0x7537,	// (0x00029535) volume_set_pane_vc_g2

0x7540,	// (0x0002953e) volume_set_pane_vc_g3

0x7549,	// (0x00029547) volume_set_pane_vc_g4

0x7552,	// (0x00029550) volume_set_pane_vc_g5

0x755b,	// (0x00029559) volume_set_pane_vc_g6

0x7564,	// (0x00029562) volume_set_pane_vc_g7

0x756d,	// (0x0002956b) volume_set_pane_vc_g8

0x7576,	// (0x00029574) volume_set_pane_vc_g9

0x757f,	// (0x0002957d) volume_set_pane_vc_g10

0x0009,

0xfa13,	// (0x00031a11) volume_set_pane_vc_g

0x31db,	// (0x000251d9) volume_set_pane_vc

0x31e3,	// (0x000251e1) button_value_adjust_pane_cp1_vc

0x31ed,	// (0x000251eb) list_highlight_pane_cp2_vc

0x31f6,	// (0x000251f4) list_set_pane_vc_ParamLimits

0x31f6,	// (0x000251f4) list_set_pane_vc

0x3248,	// (0x00025246) main_pane_set_vc_t1_ParamLimits

0x3248,	// (0x00025246) main_pane_set_vc_t1

0x325d,	// (0x0002525b) main_pane_set_vc_t2_ParamLimits

0x325d,	// (0x0002525b) main_pane_set_vc_t2

0x326f,	// (0x0002526d) main_pane_set_vc_t3_ParamLimits

0x326f,	// (0x0002526d) main_pane_set_vc_t3

0x3281,	// (0x0002527f) main_pane_set_vc_t4_ParamLimits

0x3281,	// (0x0002527f) main_pane_set_vc_t4

0x0003,

0xfa28,	// (0x00031a26) main_pane_set_vc_t_ParamLimits

0xfa28,	// (0x00031a26) main_pane_set_vc_t

0x3293,	// (0x00025291) setting_code_pane_vc_ParamLimits

0x3293,	// (0x00025291) setting_code_pane_vc

0x32a2,	// (0x000252a0) setting_slider_graphic_pane_vc

0x32a2,	// (0x000252a0) setting_slider_pane_vc

0x32a2,	// (0x000252a0) setting_text_pane_vc

0x32a2,	// (0x000252a0) setting_volume_pane_vc

0x32aa,	// (0x000252a8) scroll_pane_cp121_vc

0x0e64,	// (0x00022e62) set_content_pane_vc

0x32b2,	// (0x000252b0) button_value_adjust_pane_g1

0x32bb,	// (0x000252b9) button_value_adjust_pane_g2

0x0001,

0xfa7d,	// (0x00031a7b) button_value_adjust_pane_g

0x32c4,	// (0x000252c2) form_field_slider_wide_pane_vc_t1_ParamLimits

0x32c4,	// (0x000252c2) form_field_slider_wide_pane_vc_t1

0x32da,	// (0x000252d8) form_field_slider_wide_pane_vc_t2_ParamLimits

0x32da,	// (0x000252d8) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa82,	// (0x00031a80) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa82,	// (0x00031a80) form_field_slider_wide_pane_vc_t

0x08c9,	// (0x000228c7) input_focus_pane_cp10_vc_ParamLimits

0x08c9,	// (0x000228c7) input_focus_pane_cp10_vc

0x3305,	// (0x00025303) slider_cont_pane_cp1_vc_ParamLimits

0x3305,	// (0x00025303) slider_cont_pane_cp1_vc

0x3177,	// (0x00025175) slider_form_pane_g1_cp2

0x3180,	// (0x0002517e) slider_form_pane_g2_cp2

0x3320,	// (0x0002531e) form_field_slider_pane_vc_t3

0x332e,	// (0x0002532c) form_field_slider_pane_vc_t4

0x333c,	// (0x0002533a) slider_form_pane_vc_ParamLimits

0x333c,	// (0x0002533a) slider_form_pane_vc

0x3349,	// (0x00025347) form_field_slider_pane_vc_t1_ParamLimits

0x3349,	// (0x00025347) form_field_slider_pane_vc_t1

0x335f,	// (0x0002535d) form_field_slider_pane_vc_t2_ParamLimits

0x335f,	// (0x0002535d) form_field_slider_pane_vc_t2

0x0001,

0xfa94,	// (0x00031a92) form_field_slider_pane_vc_t_ParamLimits

0xfa94,	// (0x00031a92) form_field_slider_pane_vc_t

0x08c9,	// (0x000228c7) input_focus_pane_cp9_vc_ParamLimits

0x08c9,	// (0x000228c7) input_focus_pane_cp9_vc

0x3371,	// (0x0002536f) slider_cont_pane_vc_ParamLimits

0x3371,	// (0x0002536f) slider_cont_pane_vc

0x3383,	// (0x00025381) list_form_graphic_pane_cp_vc_ParamLimits

0x3383,	// (0x00025381) list_form_graphic_pane_cp_vc

0x1c99,	// (0x00023c97) form_field_popup_wide_pane_vc_g1

0x3398,	// (0x00025396) form_field_popup_wide_pane_vc_t1_ParamLimits

0x3398,	// (0x00025396) form_field_popup_wide_pane_vc_t1

0x0e79,	// (0x00022e77) input_focus_pane_cp8_vc_ParamLimits

0x0e79,	// (0x00022e77) input_focus_pane_cp8_vc

0x33d7,	// (0x000253d5) list_form_wide_pane_vc_ParamLimits

0x33d7,	// (0x000253d5) list_form_wide_pane_vc

0x33e3,	// (0x000253e1) list_form_graphic_pane_vc_g1

0x33eb,	// (0x000253e9) list_form_graphic_pane_vc_t1_ParamLimits

0x33eb,	// (0x000253e9) list_form_graphic_pane_vc_t1

0x08df,	// (0x000228dd) list_highlight_pane_cp5_vc_ParamLimits

0x08df,	// (0x000228dd) list_highlight_pane_cp5_vc

0x3407,	// (0x00025405) list_form_graphic_pane_vc_ParamLimits

0x3407,	// (0x00025405) list_form_graphic_pane_vc

0x1c99,	// (0x00023c97) form_field_popup_pane_vc_g1

0x341d,	// (0x0002541b) form_field_popup_pane_vc_t1_ParamLimits

0x341d,	// (0x0002541b) form_field_popup_pane_vc_t1

0x0e79,	// (0x00022e77) input_focus_pane_cp7_vc_ParamLimits

0x0e79,	// (0x00022e77) input_focus_pane_cp7_vc

0x3432,	// (0x00025430) list_form_pane_vc_ParamLimits

0x3432,	// (0x00025430) list_form_pane_vc

0x343e,	// (0x0002543c) data_form_pane_vc_t1_ParamLimits

0x343e,	// (0x0002543c) data_form_pane_vc_t1

0x0ed4,	// (0x00022ed2) input_focus_pane_vc_g1

0x0edc,	// (0x00022eda) input_focus_pane_vc_g2

0x0ee4,	// (0x00022ee2) input_focus_pane_vc_g3

0x0eec,	// (0x00022eea) input_focus_pane_vc_g4

0x0ef4,	// (0x00022ef2) input_focus_pane_vc_g5

0x0efc,	// (0x00022efa) input_focus_pane_vc_g6

0x0f04,	// (0x00022f02) input_focus_pane_vc_g7

0x0f0c,	// (0x00022f0a) input_focus_pane_vc_g8

0x0f14,	// (0x00022f12) input_focus_pane_vc_g9

0x07f9,	// (0x000227f7) input_focus_pane_vc_g10

0x0009,

0xf68c,	// (0x0003168a) input_focus_pane_vc_g

0x1c8d,	// (0x00023c8b) data_form_pane_vc_ParamLimits

0x1c8d,	// (0x00023c8b) data_form_pane_vc

0x1c99,	// (0x00023c97) form_field_data_pane_vc_g1

0x3459,	// (0x00025457) form_field_data_pane_vc_t1_ParamLimits

0x3459,	// (0x00025457) form_field_data_pane_vc_t1

0x0e79,	// (0x00022e77) input_focus_pane_vc_ParamLimits

0x0e79,	// (0x00022e77) input_focus_pane_vc

0x1c57,	// (0x00023c55) button_value_adjust_pane_cp3_vc

0x2d8b,	// (0x00024d89) button_value_adjust_pane_cp5_vc

0x346f,	// (0x0002546d) form_field_data_pane_vc_ParamLimits

0x346f,	// (0x0002546d) form_field_data_pane_vc

0x1c5f,	// (0x00023c5d) form_field_data_pane_vc_cp2

0x3486,	// (0x00025484) form_field_data_wide_pane_vc_ParamLimits

0x3486,	// (0x00025484) form_field_data_wide_pane_vc

0x349c,	// (0x0002549a) form_field_data_wide_pane_vc_cp2

0x34a4,	// (0x000254a2) form_field_popup_pane_vc_ParamLimits

0x34a4,	// (0x000254a2) form_field_popup_pane_vc

0x34bb,	// (0x000254b9) form_field_popup_wide_pane_vc_ParamLimits

0x34bb,	// (0x000254b9) form_field_popup_wide_pane_vc

0x34d1,	// (0x000254cf) form_field_slider_pane_vc_ParamLimits

0x34d1,	// (0x000254cf) form_field_slider_pane_vc

0x34e4,	// (0x000254e2) form_field_slider_wide_pane_vc_ParamLimits

0x34e4,	// (0x000254e2) form_field_slider_wide_pane_vc

0xe551,	// (0x0003054f) grid_touch_1_pane_ParamLimits

0xe551,	// (0x0003054f) grid_touch_1_pane

0xe565,	// (0x00030563) grid_touch_2_pane_ParamLimits

0xe565,	// (0x00030563) grid_touch_2_pane

0x34f7,	// (0x000254f5) touch_pane_g1_ParamLimits

0x34f7,	// (0x000254f5) touch_pane_g1

0x3505,	// (0x00025503) cell_app_pane_cp_wide_ParamLimits

0x3505,	// (0x00025503) cell_app_pane_cp_wide

0x3515,	// (0x00025513) grid_popup_fast_wide_pane_ParamLimits

0x3515,	// (0x00025513) grid_popup_fast_wide_pane

0x3529,	// (0x00025527) scroll_pane_cp19_ParamLimits

0x3529,	// (0x00025527) scroll_pane_cp19

0x087b,	// (0x00022879) bg_popup_window_pane_cp20

0x353d,	// (0x0002553b) listscroll_popup_fast_wide_pane

0x1c67,	// (0x00023c65) grid_indicator_nsta_pane

0x3545,	// (0x00025543) clock_nsta_pane_g1

0x354e,	// (0x0002554c) clock_nsta_pane_t1

0xe58f,	// (0x0003058d) cell_indicator_nsta_pane_ParamLimits

0xe58f,	// (0x0003058d) cell_indicator_nsta_pane

0x34f7,	// (0x000254f5) cell_indicator_nsta_pane_g1

0xe5a6,	// (0x000305a4) cell_indicator_nsta_pane_g2

0x0001,

0xfaa5,	// (0x00031aa3) cell_indicator_nsta_pane_g

0x356a,	// (0x00025568) clock_nsta_pane_cp

0x3572,	// (0x00025570) indicator_nsta_pane_cp

0x357b,	// (0x00025579) nsta_clock_indic_pane_g1

0x091b,	// (0x00022919) grid_indicator_pane

0x131e,	// (0x0002331c) scroll_pane_cp29

0x60a4,	// (0x000280a2) indicator_nsta_pane_cp2_ParamLimits

0x60a4,	// (0x000280a2) indicator_nsta_pane_cp2

0x08df,	// (0x000228dd) main_apps_wheel_pane

0x1e38,	// (0x00023e36) form_midp_field_text_pane_ParamLimits

0x1f65,	// (0x00023f63) scroll_bar_cp050_ParamLimits

0x35e4,	// (0x000255e2) cell_indicator_pane_ParamLimits

0x35e4,	// (0x000255e2) cell_indicator_pane

0x35fa,	// (0x000255f8) cell_indicator_pane_g1

0xe5b3,	// (0x000305b1) grid_wheel_folder_pane_ParamLimits

0xe5b3,	// (0x000305b1) grid_wheel_folder_pane

0xe5c1,	// (0x000305bf) list_wheel_apps_pane_ParamLimits

0xe5c1,	// (0x000305bf) list_wheel_apps_pane

0xe5cd,	// (0x000305cb) main_apps_wheel_pane_g1_ParamLimits

0xe5cd,	// (0x000305cb) main_apps_wheel_pane_g1

0xe5d9,	// (0x000305d7) main_apps_wheel_pane_g2_ParamLimits

0xe5d9,	// (0x000305d7) main_apps_wheel_pane_g2

0x0001,

0xfac1,	// (0x00031abf) main_apps_wheel_pane_g_ParamLimits

0xfac1,	// (0x00031abf) main_apps_wheel_pane_g

0xe5e5,	// (0x000305e3) main_apps_wheel_pane_t1_ParamLimits

0xe5e5,	// (0x000305e3) main_apps_wheel_pane_t1

0xe5f7,	// (0x000305f5) list_wheel_apps_pane_g1

0xe5ff,	// (0x000305fd) list_wheel_apps_pane_g2

0xe607,	// (0x00030605) list_wheel_apps_pane_g3

0xe60f,	// (0x0003060d) list_wheel_apps_pane_g4

0xe617,	// (0x00030615) list_wheel_apps_pane_g5

0x0004,

0xfac6,	// (0x00031ac4) list_wheel_apps_pane_g

0x08df,	// (0x000228dd) navi_icon_text_pane

0xdce0,	// (0x0002fcde) aid_fill_nsta

0x3604,	// (0x00025602) navi_icon_text_pane_g1

0x3610,	// (0x0002560e) navi_icon_text_pane_t1

0x1598,	// (0x00023596) list_set_graphic_pane_t1_ParamLimits

0x1598,	// (0x00023596) list_set_graphic_pane_t1

0x264b,	// (0x00024649) popup_midp_note_alarm_window_t6_ParamLimits

0x264b,	// (0x00024649) popup_midp_note_alarm_window_t6

0x265d,	// (0x0002465b) popup_midp_note_alarm_window_t7_ParamLimits

0x265d,	// (0x0002465b) popup_midp_note_alarm_window_t7

0x266f,	// (0x0002466d) popup_midp_note_alarm_window_t8_ParamLimits

0x266f,	// (0x0002466d) popup_midp_note_alarm_window_t8

0x2681,	// (0x0002467f) popup_midp_note_alarm_window_t9_ParamLimits

0x2681,	// (0x0002467f) popup_midp_note_alarm_window_t9

0x2693,	// (0x00024691) popup_midp_note_alarm_window_t10_ParamLimits

0x2693,	// (0x00024691) popup_midp_note_alarm_window_t10

0x26a5,	// (0x000246a3) popup_midp_note_alarm_window_t11_ParamLimits

0x26a5,	// (0x000246a3) popup_midp_note_alarm_window_t11

0x26b7,	// (0x000246b5) scroll_pane_cp17_ParamLimits

0x26b7,	// (0x000246b5) scroll_pane_cp17

0x6e89,	// (0x00028e87) volume_small_pane_cp_g1

0x7691,	// (0x0002968f) volume_small_pane_cp_g2

0x769a,	// (0x00029698) volume_small_pane_cp_g3

0x76a3,	// (0x000296a1) volume_small_pane_cp_g4

0x6eb6,	// (0x00028eb4) volume_small_pane_cp_g5

0x76ac,	// (0x000296aa) volume_small_pane_cp_g6

0x76b5,	// (0x000296b3) volume_small_pane_cp_g7

0x76be,	// (0x000296bc) volume_small_pane_cp_g8

0x76c7,	// (0x000296c5) volume_small_pane_cp_g9

0x76d0,	// (0x000296ce) volume_small_pane_cp_g10

0x1847,	// (0x00023845) midp_ticker_pane_g1_ParamLimits

0x1853,	// (0x00023851) midp_ticker_pane_g2_ParamLimits

0xf758,	// (0x00031756) midp_ticker_pane_g_ParamLimits

0x185f,	// (0x0002385d) midp_ticker_pane_t1_ParamLimits

0xdcf6,	// (0x0002fcf4) aid_fill_nsta_2

0x1f51,	// (0x00023f4f) list_form2_midp_pane

0x2d08,	// (0x00024d06) midp_editing_number_pane_ParamLimits

0x2d14,	// (0x00024d12) midp_ticker_pane_ParamLimits

0x3622,	// (0x00025620) form2_midp_field_pane

0x362a,	// (0x00025628) scroll_pane_cp51

0x364a,	// (0x00025648) form2_midp_button_pane_ParamLimits

0x364a,	// (0x00025648) form2_midp_button_pane

0x365c,	// (0x0002565a) form2_midp_content_pane_ParamLimits

0x365c,	// (0x0002565a) form2_midp_content_pane

0x3676,	// (0x00025674) form2_midp_field_choice_group_pane

0x367e,	// (0x0002567c) form2_midp_field_pane_g1

0x3686,	// (0x00025684) form2_midp_field_pane_g2

0x368e,	// (0x0002568c) form2_midp_field_pane_g3

0x3696,	// (0x00025694) form2_midp_field_pane_g4

0x0003,

0xfaeb,	// (0x00031ae9) form2_midp_field_pane_g

0x369e,	// (0x0002569c) form2_midp_gauge_slider_pane

0x36a6,	// (0x000256a4) form2_midp_gauge_wait_pane

0x36ae,	// (0x000256ac) form2_midp_image_pane_ParamLimits

0x36ae,	// (0x000256ac) form2_midp_image_pane

0x36c9,	// (0x000256c7) form2_midp_label_pane_ParamLimits

0x36c9,	// (0x000256c7) form2_midp_label_pane

0xe64c,	// (0x0003064a) form2_midp_label_pane_cp_ParamLimits

0xe64c,	// (0x0003064a) form2_midp_label_pane_cp

0x36e2,	// (0x000256e0) form2_midp_string_pane_ParamLimits

0x36e2,	// (0x000256e0) form2_midp_string_pane

0x9ca9,	// (0x0002bca7) form2_midp_text_pane_ParamLimits

0x9ca9,	// (0x0002bca7) form2_midp_text_pane

0x36f4,	// (0x000256f2) form2_midp_time_pane

0x3704,	// (0x00025702) input_focus_pane_cp51_ParamLimits

0x3704,	// (0x00025702) input_focus_pane_cp51

0x371c,	// (0x0002571a) form2_midp_label_pane_t1_ParamLimits

0x371c,	// (0x0002571a) form2_midp_label_pane_t1

0x9cc2,	// (0x0002bcc0) form2_mdip_text_pane_t1_ParamLimits

0x9cc2,	// (0x0002bcc0) form2_mdip_text_pane_t1

0x9cdd,	// (0x0002bcdb) form2_midp_time_pane_t1

0x3764,	// (0x00025762) form2_midp_gauge_slider_pane_t1

0xe66b,	// (0x00030669) form2_midp_gauge_slider_pane_t2

0xe67d,	// (0x0003067b) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf4,	// (0x00031af2) form2_midp_gauge_slider_pane_t

0x3776,	// (0x00025774) form2_midp_slider_pane

0x3782,	// (0x00025780) form2_midp_gauge_wait_pane_t1

0x3790,	// (0x0002578e) form2_midp_wait_pane_ParamLimits

0x3790,	// (0x0002578e) form2_midp_wait_pane

0x1cd7,	// (0x00023cd5) list_single_2graphic_pane_cp4_ParamLimits

0x1cd7,	// (0x00023cd5) list_single_2graphic_pane_cp4

0x37bb,	// (0x000257b9) list_single_midp_graphic_pane_cp_ParamLimits

0x37bb,	// (0x000257b9) list_single_midp_graphic_pane_cp

0x087b,	// (0x00022879) list_highlight_pane_cp20

0x37d9,	// (0x000257d7) list_single_2graphic_pane_g1_cp4

0x2e02,	// (0x00024e00) list_single_2graphic_pane_g2_cp4

0x37e1,	// (0x000257df) list_single_2graphic_pane_t1_cp4

0x08df,	// (0x000228dd) list_highlight_pane_cp21

0x37f0,	// (0x000257ee) list_single_midp_graphic_pane_g4_cp

0x37ff,	// (0x000257fd) list_single_midp_graphic_pane_t1_cp

0x3814,	// (0x00025812) form2_mdip_string_pane_t1_ParamLimits

0x3814,	// (0x00025812) form2_mdip_string_pane_t1

0x087b,	// (0x00022879) bg_wml_button_pane_cp2

0x07f9,	// (0x000227f7) form2_midp_image_pane_g1

0x935b,	// (0x0002b359) list_double_large_graphic_pane_g5_ParamLimits

0x935b,	// (0x0002b359) list_double_large_graphic_pane_g5

0xdb92,	// (0x0002fb90) midp_form_pane_ParamLimits

0x08df,	// (0x000228dd) main_apps_wheel_pane_ParamLimits

0xc2cd,	// (0x0002e2cb) popup_preview_window_ParamLimits

0xc2cd,	// (0x0002e2cb) popup_preview_window

0x698d,	// (0x0002898b) popup_touch_info_window_ParamLimits

0x698d,	// (0x0002898b) popup_touch_info_window

0x69ab,	// (0x000289a9) popup_touch_menu_window_ParamLimits

0x69ab,	// (0x000289a9) popup_touch_menu_window

0x07ef,	// (0x000227ed) bg_popup_sub_pane_cp6

0x387e,	// (0x0002587c) list_touch_menu_pane

0x3886,	// (0x00025884) list_single_touch_menu_pane_ParamLimits

0x3886,	// (0x00025884) list_single_touch_menu_pane

0x389d,	// (0x0002589b) list_single_touch_menu_pane_t1

0x08df,	// (0x000228dd) bg_popup_sub_pane_cp7_ParamLimits

0x08df,	// (0x000228dd) bg_popup_sub_pane_cp7

0x38ab,	// (0x000258a9) heading_sub_pane

0x38b3,	// (0x000258b1) list_touch_info_pane_ParamLimits

0x38b3,	// (0x000258b1) list_touch_info_pane

0x38c2,	// (0x000258c0) list_single_touch_info_pane_ParamLimits

0x38c2,	// (0x000258c0) list_single_touch_info_pane

0x38d3,	// (0x000258d1) list_single_touch_info_pane_t1

0x38e1,	// (0x000258df) list_single_touch_info_pane_t2

0x0001,

0xfb02,	// (0x00031b00) list_single_touch_info_pane_t

0x181d,	// (0x0002381b) bg_popup_heading_pane_cp

0x38ef,	// (0x000258ed) heading_sub_pane_t1

0x1c1d,	// (0x00023c1b) bg_popup_preview_window_pane_cp_ParamLimits

0x1c1d,	// (0x00023c1b) bg_popup_preview_window_pane_cp

0x38ab,	// (0x000258a9) heading_preview_pane

0x38b3,	// (0x000258b1) list_preview_pane_ParamLimits

0x38b3,	// (0x000258b1) list_preview_pane

0x38fd,	// (0x000258fb) popup_preview_window_g1

0x38c2,	// (0x000258c0) list_single_preview_pane_ParamLimits

0x38c2,	// (0x000258c0) list_single_preview_pane

0x3905,	// (0x00025903) list_single_preview_pane_g1

0x390d,	// (0x0002590b) list_single_preview_pane_t1

0x38d3,	// (0x000258d1) list_single_preview_pane_t2

0x0001,

0xfb07,	// (0x00031b05) list_single_preview_pane_t

0x391b,	// (0x00025919) bg_popup_heading_pane_cp2_ParamLimits

0x391b,	// (0x00025919) bg_popup_heading_pane_cp2

0x3931,	// (0x0002592f) heading_preview_pane_g1

0x3939,	// (0x00025937) heading_preview_pane_t1_ParamLimits

0x3939,	// (0x00025937) heading_preview_pane_t1

0x0932,	// (0x00022930) soft_indicator_pane_t1_ParamLimits

0x0dfc,	// (0x00022dfa) scroll_pane_ParamLimits

0x1223,	// (0x00023221) scroll_sc2_left_pane

0x121a,	// (0x00023218) scroll_sc2_right_pane

0x1242,	// (0x00023240) scroll_bg_pane_g1_ParamLimits

0x1257,	// (0x00023255) scroll_bg_pane_g2_ParamLimits

0x126f,	// (0x0002326d) scroll_bg_pane_g3_ParamLimits

0xf6e3,	// (0x000316e1) scroll_bg_pane_g_ParamLimits

0x1242,	// (0x00023240) scroll_handle_pane_g1_ParamLimits

0x1291,	// (0x0002328f) scroll_handle_pane_g2_ParamLimits

0x126f,	// (0x0002326d) scroll_handle_pane_g3_ParamLimits

0xf6ea,	// (0x000316e8) scroll_handle_pane_g_ParamLimits

0x655a,	// (0x00028558) popup_choice_list_window_ParamLimits

0x655a,	// (0x00028558) popup_choice_list_window

0x1aff,	// (0x00023afd) choice_list_pane

0x1b75,	// (0x00023b73) cell_toolbar_pane_t1

0x1b9d,	// (0x00023b9b) toolbar_button_pane_ParamLimits

0x2a7d,	// (0x00024a7b) ai_gene_pane_1_t2_ParamLimits

0x2a7d,	// (0x00024a7b) ai_gene_pane_1_t2

0x0001,

0xf906,	// (0x00031904) ai_gene_pane_1_t_ParamLimits

0xf906,	// (0x00031904) ai_gene_pane_1_t

0x3956,	// (0x00025954) scroll_sc2_left_pane_g1

0x3956,	// (0x00025954) scroll_sc2_right_pane_g1

0x0fff,	// (0x00022ffd) bg_popup_sub_pane_cp10

0x3960,	// (0x0002595e) list_choice_list_pane

0x3977,	// (0x00025975) list_single_choice_list_pane_ParamLimits

0x3977,	// (0x00025975) list_single_choice_list_pane

0x3989,	// (0x00025987) list_single_choice_list_pane_g1

0x0fea,	// (0x00022fe8) list_single_choice_list_pane_t1_ParamLimits

0x0fea,	// (0x00022fe8) list_single_choice_list_pane_t1

0x3991,	// (0x0002598f) choice_list_pane_g1

0x3999,	// (0x00025997) choice_list_pane_t1

0x07ef,	// (0x000227ed) input_focus_pane_cp11

0x1181,	// (0x0002317f) title_pane_stacon_g2_ParamLimits

0x1181,	// (0x0002317f) title_pane_stacon_g2

0x0002,

0xf6c9,	// (0x000316c7) title_pane_stacon_g_ParamLimits

0xf6c9,	// (0x000316c7) title_pane_stacon_g

0x181d,	// (0x0002381b) cursor_press_pane

0xc034,	// (0x0002e032) popup_fep_hwr_window_ParamLimits

0xc034,	// (0x0002e032) popup_fep_hwr_window

0x6652,	// (0x00028650) popup_fep_vkb_window_ParamLimits

0x6652,	// (0x00028650) popup_fep_vkb_window

0x39a7,	// (0x000259a5) cursor_press_pane_g1

0x0002,

0xfb30,	// (0x00031b2e) fep_vkb_side_pane_g_ParamLimits

0x776d,	// (0x0002976b) fep_hwr_candidate_pane_ParamLimits

0x776d,	// (0x0002976b) fep_hwr_candidate_pane

0x7795,	// (0x00029793) fep_hwr_side_pane_ParamLimits

0x7795,	// (0x00029793) fep_hwr_side_pane

0x77b5,	// (0x000297b3) fep_hwr_top_pane_ParamLimits

0x77b5,	// (0x000297b3) fep_hwr_top_pane

0x77cd,	// (0x000297cb) fep_hwr_write_pane_ParamLimits

0x77cd,	// (0x000297cb) fep_hwr_write_pane

0xfb30,	// (0x00031b2e) fep_vkb_side_pane_g

0x39c1,	// (0x000259bf) fep_hwr_top_pane_g1

0x39af,	// (0x000259ad) fep_hwr_top_pane_g2

0x7807,	// (0x00029805) fep_hwr_top_pane_g3

0x0002,

0xfb0c,	// (0x00031b0a) fep_hwr_top_pane_g

0x781c,	// (0x0002981a) fep_hwr_top_text_pane

0x138b,	// (0x00023389) fep_hwr_top_text_pane_g1

0x39f7,	// (0x000259f5) fep_hwr_top_text_pane_t1

0x790a,	// (0x00029908) fep_hwr_candidate_pane_g1

0x3bc0,	// (0x00025bbe) fep_vkb_keypad_pane_g3_ParamLimits

0x3bc0,	// (0x00025bbe) fep_vkb_keypad_pane_g3

0x3be2,	// (0x00025be0) fep_vkb_keypad_pane_g4_ParamLimits

0x3be2,	// (0x00025be0) fep_vkb_keypad_pane_g4

0x3c51,	// (0x00025c4f) fep_vkb_bottom_pane_g2_ParamLimits

0x3c51,	// (0x00025c4f) fep_vkb_bottom_pane_g2

0x0001,

0xfb37,	// (0x00031b35) fep_vkb_bottom_pane_g_ParamLimits

0xfb37,	// (0x00031b35) fep_vkb_bottom_pane_g

0x3956,	// (0x00025954) cell_vkb_side_pane_g2

0x0001,

0xfb41,	// (0x00031b3f) cell_vkb_side_pane_g

0x3c95,	// (0x00025c93) cell_vkb_side_pane_t1

0x3ca3,	// (0x00025ca1) cell_vkb_side_pane_t1_copy1

0x3956,	// (0x00025954) bg_fep_vkb_candidate_pane_g2

0x3d71,	// (0x00025d6f) cell_vkb_candidate_pane_ParamLimits

0x3a05,	// (0x00025a03) aid_size_cell_vkb_ParamLimits

0x3a05,	// (0x00025a03) aid_size_cell_vkb

0x3d71,	// (0x00025d6f) cell_vkb_candidate_pane

0x7a15,	// (0x00029a13) bg_popup_fep_shadow_pane_g1

0x3a6f,	// (0x00025a6d) fep_vkb_bottom_pane_ParamLimits

0x3a6f,	// (0x00025a6d) fep_vkb_bottom_pane

0x3aac,	// (0x00025aaa) fep_vkb_candidate_pane_ParamLimits

0x3aac,	// (0x00025aaa) fep_vkb_candidate_pane

0x3ac8,	// (0x00025ac6) fep_vkb_keypad_pane_ParamLimits

0x3ac8,	// (0x00025ac6) fep_vkb_keypad_pane

0x3afc,	// (0x00025afa) fep_vkb_side_pane_ParamLimits

0x3afc,	// (0x00025afa) fep_vkb_side_pane

0x3b28,	// (0x00025b26) fep_vkb_top_pane_ParamLimits

0x3b28,	// (0x00025b26) fep_vkb_top_pane

0x3b54,	// (0x00025b52) fep_vkb_top_pane_g1_ParamLimits

0x3b54,	// (0x00025b52) fep_vkb_top_pane_g1

0x3b63,	// (0x00025b61) fep_vkb_top_pane_g2_ParamLimits

0x3b63,	// (0x00025b61) fep_vkb_top_pane_g2

0x3b72,	// (0x00025b70) fep_vkb_top_pane_g3_ParamLimits

0x3b72,	// (0x00025b70) fep_vkb_top_pane_g3

0x0003,

0xfb27,	// (0x00031b25) fep_vkb_top_pane_g_ParamLimits

0xfb27,	// (0x00031b25) fep_vkb_top_pane_g

0x3b90,	// (0x00025b8e) fep_vkb_top_text_pane_ParamLimits

0x3b90,	// (0x00025b8e) fep_vkb_top_text_pane

0xe69f,	// (0x0003069d) fep_vkb_side_pane_g1_ParamLimits

0xe69f,	// (0x0003069d) fep_vkb_side_pane_g1

0x3baf,	// (0x00025bad) grid_vkb_side_pane_ParamLimits

0x3baf,	// (0x00025bad) grid_vkb_side_pane

0x7a1d,	// (0x00029a1b) bg_popup_fep_shadow_pane_g2

0x7a26,	// (0x00029a24) bg_popup_fep_shadow_pane_g3

0x7a2e,	// (0x00029a2c) bg_popup_fep_shadow_pane_g4

0x7a37,	// (0x00029a35) bg_popup_fep_shadow_pane_g5

0x7a3f,	// (0x00029a3d) bg_popup_fep_shadow_pane_g6

0x7a47,	// (0x00029a45) bg_popup_fep_shadow_pane_g7

0x0eec,	// (0x00022eea) bg_popup_fep_shadow_pane_g8

0x3c00,	// (0x00025bfe) grid_vkb_keypad_number_pane_ParamLimits

0x3c00,	// (0x00025bfe) grid_vkb_keypad_number_pane

0x3c10,	// (0x00025c0e) grid_vkb_keypad_pane_ParamLimits

0x3c10,	// (0x00025c0e) grid_vkb_keypad_pane

0x3c36,	// (0x00025c34) fep_vkb_bottom_pane_g1_ParamLimits

0x3c36,	// (0x00025c34) fep_vkb_bottom_pane_g1

0x3c5f,	// (0x00025c5d) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x3c5f,	// (0x00025c5d) grid_vkb_keypad_bottom_left_pane

0x3c74,	// (0x00025c72) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x3c74,	// (0x00025c72) grid_vkb_keypad_bottom_right_pane

0x3c89,	// (0x00025c87) fep_vkb_top_text_pane_g1

0xe6e6,	// (0x000306e4) fep_vkb_top_text_pane_t1

0xe6f8,	// (0x000306f6) cell_vkb_side_pane_ParamLimits

0xe6f8,	// (0x000306f6) cell_vkb_side_pane

0x3956,	// (0x00025954) cell_vkb_side_pane_g1

0x3cb1,	// (0x00025caf) cell_vkb_keypad_pane_ParamLimits

0x3cb1,	// (0x00025caf) cell_vkb_keypad_pane

0x3d1e,	// (0x00025d1c) cell_vkb_keypad_pane_g1

0x0008,

0xfb54,	// (0x00031b52) bg_popup_fep_shadow_pane_g

0x7a57,	// (0x00029a55) cell_hwr_side_pane_g1

0x7a57,	// (0x00029a55) cell_hwr_side_pane_g2

0x3d28,	// (0x00025d26) cell_vkb_keypad_pane_t1

0xe70e,	// (0x0003070c) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xe70e,	// (0x0003070c) cell_vkb_keypad_bottom_left_pane

0xe723,	// (0x00030721) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xe723,	// (0x00030721) cell_vkb_keypad_bottom_right_pane

0x3956,	// (0x00025954) cell_vkb_keypad_bottom_left_pane_g1

0x3956,	// (0x00025954) cell_vkb_keypad_bottom_right_pane_g1

0x3d36,	// (0x00025d34) cell_vkb_keypad_number_pane_ParamLimits

0x3d36,	// (0x00025d34) cell_vkb_keypad_number_pane

0x3d55,	// (0x00025d53) cell_vkb_keypad_number_pane_g1

0x3d5f,	// (0x00025d5d) cell_vkb_keypad_number_pane_g2

0x3d68,	// (0x00025d66) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb46,	// (0x00031b44) cell_vkb_keypad_number_pane_g

0x3d28,	// (0x00025d26) cell_vkb_keypad_number_pane_t1

0x3d8a,	// (0x00025d88) fep_vkb_candidate_pane_g1

0x0001,

0xfb67,	// (0x00031b65) cell_hwr_side_pane_g

0x3da3,	// (0x00025da1) cell_hwr_side_pane_t1

0x7a61,	// (0x00029a5f) cell_hwr_side_pane_t1_copy1

0x7a6f,	// (0x00029a6d) cell_hwr_candidate_pane_g1

0x7a9e,	// (0x00029a9c) cell_hwr_candidate_pane_t1

0x3956,	// (0x00025954) cell_vkb_candidate_pane_g2

0x3e29,	// (0x00025e27) cell_vkb_candidate_pane_t1

0x7738,	// (0x00029736) bg_popup_fep_shadow_pane_ParamLimits

0x7738,	// (0x00029736) bg_popup_fep_shadow_pane

0x77e7,	// (0x000297e5) bg_fep_hwr_top_pane_g4

0x39d3,	// (0x000259d1) bg_hwr_side_pane_g1_ParamLimits

0x39d3,	// (0x000259d1) bg_hwr_side_pane_g1

0xc70b,	// (0x0002e709) cell_hwr_side_pane_ParamLimits

0xc70b,	// (0x0002e709) cell_hwr_side_pane

0x7893,	// (0x00029891) fep_hwr_write_pane_g1_ParamLimits

0x7893,	// (0x00029891) fep_hwr_write_pane_g1

0x78a0,	// (0x0002989e) fep_hwr_write_pane_g2_ParamLimits

0x78a0,	// (0x0002989e) fep_hwr_write_pane_g2

0x78ad,	// (0x000298ab) fep_hwr_write_pane_g3_ParamLimits

0x78ad,	// (0x000298ab) fep_hwr_write_pane_g3

0xc72b,	// (0x0002e729) fep_hwr_write_pane_g4_ParamLimits

0xc72b,	// (0x0002e729) fep_hwr_write_pane_g4

0x0005,

0xfb13,	// (0x00031b11) fep_hwr_write_pane_g_ParamLimits

0xfb13,	// (0x00031b11) fep_hwr_write_pane_g

0x77e7,	// (0x000297e5) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x77e7,	// (0x000297e5) bg_fep_hwr_candidate_pane_g2

0x78d0,	// (0x000298ce) cell_hwr_candidate_pane_ParamLimits

0x78d0,	// (0x000298ce) cell_hwr_candidate_pane

0x790a,	// (0x00029908) fep_hwr_candidate_pane_g1_ParamLimits

0x3a33,	// (0x00025a31) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x3a33,	// (0x00025a31) bg_popup_fep_shadow_pane_cp2

0x3b82,	// (0x00025b80) fep_vkb_top_pane_g4_ParamLimits

0x3b82,	// (0x00025b80) fep_vkb_top_pane_g4

0x3ba1,	// (0x00025b9f) fep_vkb_side_pane_g2_ParamLimits

0x3ba1,	// (0x00025b9f) fep_vkb_side_pane_g2

0xd3fb,	// (0x0002f3f9) list_setting_pane_t4_ParamLimits

0xd3fb,	// (0x0002f3f9) list_setting_pane_t4

0xd48d,	// (0x0002f48b) list_setting_number_pane_t5_ParamLimits

0xd48d,	// (0x0002f48b) list_setting_number_pane_t5

0xda9d,	// (0x0002fa9b) list_double_heading_pane_cp2_ParamLimits

0xda9d,	// (0x0002fa9b) list_double_heading_pane_cp2

0x1692,	// (0x00023690) list_double_heading_pane_g1_cp2_ParamLimits

0x1692,	// (0x00023690) list_double_heading_pane_g1_cp2

0x3e37,	// (0x00025e35) list_double_heading_pane_g2_cp2_ParamLimits

0x3e37,	// (0x00025e35) list_double_heading_pane_g2_cp2

0x3e4b,	// (0x00025e49) list_double_heading_pane_t1_cp2_ParamLimits

0x3e4b,	// (0x00025e49) list_double_heading_pane_t1_cp2

0x3e61,	// (0x00025e5f) list_double_heading_pane_t2_cp2_ParamLimits

0x3e61,	// (0x00025e5f) list_double_heading_pane_t2_cp2

0x07e7,	// (0x000227e5) aid_value_unit2

0x57f4,	// (0x000277f2) popup_preview_fixed_window

0x0a12,	// (0x00022a10) bg_popup_preview_window_pane_cp02

0x3e73,	// (0x00025e71) list_preview_fixed_pane

0x3eb9,	// (0x00025eb7) list_empty_pane_fp_ParamLimits

0x3eb9,	// (0x00025eb7) list_empty_pane_fp

0x3eb9,	// (0x00025eb7) list_single_cale_day_pane_fp_ParamLimits

0x3eb9,	// (0x00025eb7) list_single_cale_day_pane_fp

0x3eb9,	// (0x00025eb7) list_single_graphic_heading_pane_fp_ParamLimits

0x3eb9,	// (0x00025eb7) list_single_graphic_heading_pane_fp

0x3eb9,	// (0x00025eb7) list_single_graphic_pane_fp_ParamLimits

0x3eb9,	// (0x00025eb7) list_single_graphic_pane_fp

0x3eb9,	// (0x00025eb7) list_single_heading_pane_fp_ParamLimits

0x3eb9,	// (0x00025eb7) list_single_heading_pane_fp

0x3eb9,	// (0x00025eb7) list_single_pane_fp_ParamLimits

0x3eb9,	// (0x00025eb7) list_single_pane_fp

0x3ecd,	// (0x00025ecb) list_single_pane_fp_g1_ParamLimits

0x3ecd,	// (0x00025ecb) list_single_pane_fp_g1

0x947c,	// (0x0002b47a) list_single_pane_fp_g2_ParamLimits

0x947c,	// (0x0002b47a) list_single_pane_fp_g2

0x9d11,	// (0x0002bd0f) list_single_pane_fp_g3_ParamLimits

0x9d11,	// (0x0002bd0f) list_single_pane_fp_g3

0x3ed9,	// (0x00025ed7) list_single_pane_fp_g4_ParamLimits

0x3ed9,	// (0x00025ed7) list_single_pane_fp_g4

0x0003,

0xfb7a,	// (0x00031b78) list_single_pane_fp_g_ParamLimits

0xfb7a,	// (0x00031b78) list_single_pane_fp_g

0x9d25,	// (0x0002bd23) list_single_pane_fp_t1_ParamLimits

0x9d25,	// (0x0002bd23) list_single_pane_fp_t1

0x9d3c,	// (0x0002bd3a) list_single_graphic_pane_fp_g1_ParamLimits

0x9d3c,	// (0x0002bd3a) list_single_graphic_pane_fp_g1

0x3ecd,	// (0x00025ecb) list_single_graphic_pane_fp_g2_ParamLimits

0x3ecd,	// (0x00025ecb) list_single_graphic_pane_fp_g2

0x947c,	// (0x0002b47a) list_single_graphic_pane_fp_g3_ParamLimits

0x947c,	// (0x0002b47a) list_single_graphic_pane_fp_g3

0x9d11,	// (0x0002bd0f) list_single_graphic_pane_fp_g4_ParamLimits

0x9d11,	// (0x0002bd0f) list_single_graphic_pane_fp_g4

0x3ed9,	// (0x00025ed7) list_single_graphic_pane_fp_g5_ParamLimits

0x3ed9,	// (0x00025ed7) list_single_graphic_pane_fp_g5

0x0004,

0xfb83,	// (0x00031b81) list_single_graphic_pane_fp_g_ParamLimits

0xfb83,	// (0x00031b81) list_single_graphic_pane_fp_g

0x9d48,	// (0x0002bd46) list_single_graphic_pane_fp_t1_ParamLimits

0x9d48,	// (0x0002bd46) list_single_graphic_pane_fp_t1

0x9d3c,	// (0x0002bd3a) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x9d3c,	// (0x0002bd3a) list_single_graphic_heading_pane_fp_g1

0x3ecd,	// (0x00025ecb) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x3ecd,	// (0x00025ecb) list_single_graphic_heading_pane_fp_g2

0x947c,	// (0x0002b47a) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x947c,	// (0x0002b47a) list_single_graphic_heading_pane_fp_g3

0x9d11,	// (0x0002bd0f) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x9d11,	// (0x0002bd0f) list_single_graphic_heading_pane_fp_g4

0x3ed9,	// (0x00025ed7) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x3ed9,	// (0x00025ed7) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb83,	// (0x00031b81) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb83,	// (0x00031b81) list_single_graphic_heading_pane_fp_g

0x9d5e,	// (0x0002bd5c) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x9d5e,	// (0x0002bd5c) list_single_graphic_heading_pane_fp_t1

0x9d74,	// (0x0002bd72) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x9d74,	// (0x0002bd72) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb8e,	// (0x00031b8c) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb8e,	// (0x00031b8c) list_single_graphic_heading_pane_fp_t

0x9d86,	// (0x0002bd84) list_single_cale_day_pane_fp_g1_ParamLimits

0x9d86,	// (0x0002bd84) list_single_cale_day_pane_fp_g1

0x3ee5,	// (0x00025ee3) list_single_cale_day_pane_fp_g2_ParamLimits

0x3ee5,	// (0x00025ee3) list_single_cale_day_pane_fp_g2

0x9dbe,	// (0x0002bdbc) list_single_cale_day_pane_fp_g3_ParamLimits

0x9dbe,	// (0x0002bdbc) list_single_cale_day_pane_fp_g3

0x9de6,	// (0x0002bde4) list_single_cale_day_pane_fp_g4_ParamLimits

0x9de6,	// (0x0002bde4) list_single_cale_day_pane_fp_g4

0x9e0a,	// (0x0002be08) list_single_cale_day_pane_fp_g5_ParamLimits

0x9e0a,	// (0x0002be08) list_single_cale_day_pane_fp_g5

0x0004,

0xfb93,	// (0x00031b91) list_single_cale_day_pane_fp_g_ParamLimits

0xfb93,	// (0x00031b91) list_single_cale_day_pane_fp_g

0x9e2e,	// (0x0002be2c) list_single_cale_day_pane_fp_t1_ParamLimits

0x9e2e,	// (0x0002be2c) list_single_cale_day_pane_fp_t1

0x9e54,	// (0x0002be52) list_single_cale_day_pane_fp_t2_ParamLimits

0x9e54,	// (0x0002be52) list_single_cale_day_pane_fp_t2

0x9e6d,	// (0x0002be6b) list_single_cale_day_pane_fp_t3_ParamLimits

0x9e6d,	// (0x0002be6b) list_single_cale_day_pane_fp_t3

0x0002,

0xfb9e,	// (0x00031b9c) list_single_cale_day_pane_fp_t_ParamLimits

0xfb9e,	// (0x00031b9c) list_single_cale_day_pane_fp_t

0x3ecd,	// (0x00025ecb) list_empty_pane_fp_g1_ParamLimits

0x3ecd,	// (0x00025ecb) list_empty_pane_fp_g1

0x9e86,	// (0x0002be84) list_empty_pane_fp_t1

0x9e94,	// (0x0002be92) list_empty_pane_fp_t2

0x0001,

0xfba5,	// (0x00031ba3) list_empty_pane_fp_t

0x3ecd,	// (0x00025ecb) list_single_heading_pane_fp_g1_ParamLimits

0x3ecd,	// (0x00025ecb) list_single_heading_pane_fp_g1

0x947c,	// (0x0002b47a) list_single_heading_pane_fp_g2_ParamLimits

0x947c,	// (0x0002b47a) list_single_heading_pane_fp_g2

0x9d11,	// (0x0002bd0f) list_single_heading_pane_fp_g3_ParamLimits

0x9d11,	// (0x0002bd0f) list_single_heading_pane_fp_g3

0x0002,

0xfbaa,	// (0x00031ba8) list_single_heading_pane_fp_g_ParamLimits

0xfbaa,	// (0x00031ba8) list_single_heading_pane_fp_g

0x9ea2,	// (0x0002bea0) list_single_heading_pane_fp_t1_ParamLimits

0x9ea2,	// (0x0002bea0) list_single_heading_pane_fp_t1

0x9eb4,	// (0x0002beb2) list_single_heading_pane_fp_t2_ParamLimits

0x9eb4,	// (0x0002beb2) list_single_heading_pane_fp_t2

0x0001,

0xfbb1,	// (0x00031baf) list_single_heading_pane_fp_t_ParamLimits

0xfbb1,	// (0x00031baf) list_single_heading_pane_fp_t

0x100b,	// (0x00023009) aid_size_cell_fast

0x09f5,	// (0x000229f3) soft_indicator_pane_cp1_t1

0x1048,	// (0x00023046) cell_app_pane_cp2_ParamLimits

0x1048,	// (0x00023046) cell_app_pane_cp2

0x775a,	// (0x00029758) fep_hwr_candidate_drop_down_list_pane

0x7924,	// (0x00029922) fep_hwr_candidate_pane_g3_ParamLimits

0x7924,	// (0x00029922) fep_hwr_candidate_pane_g3

0xf3f4,	// (0x000313f2) fep_hwr_candidate_pane_g4_ParamLimits

0xf3f4,	// (0x000313f2) fep_hwr_candidate_pane_g4

0x0002,

0xfb20,	// (0x00031b1e) fep_hwr_candidate_pane_g_ParamLimits

0xfb20,	// (0x00031b1e) fep_hwr_candidate_pane_g

0x3a9b,	// (0x00025a99) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x3a9b,	// (0x00025a99) fep_vkb_candidate_drop_down_list_pane

0x3d92,	// (0x00025d90) fep_vkb_candidate_pane_g3

0x3d9a,	// (0x00025d98) fep_vkb_candidate_pane_g4

0x0002,

0xfb4d,	// (0x00031b4b) fep_vkb_candidate_pane_g

0x7a6f,	// (0x00029a6d) cell_hwr_candidate_pane_g1_ParamLimits

0x7a7d,	// (0x00029a7b) cell_hwr_candidate_pane_g3_ParamLimits

0x7a7d,	// (0x00029a7b) cell_hwr_candidate_pane_g3

0x9cf0,	// (0x0002bcee) cell_hwr_candidate_pane_g4_ParamLimits

0x9cf0,	// (0x0002bcee) cell_hwr_candidate_pane_g4

0x0002,

0xfb6c,	// (0x00031b6a) cell_hwr_candidate_pane_g_ParamLimits

0xfb6c,	// (0x00031b6a) cell_hwr_candidate_pane_g

0x3df3,	// (0x00025df1) cell_vkb_candidate_pane_g3_ParamLimits

0x3df3,	// (0x00025df1) cell_vkb_candidate_pane_g3

0x3e0e,	// (0x00025e0c) cell_vkb_candidate_pane_g4_ParamLimits

0x3e0e,	// (0x00025e0c) cell_vkb_candidate_pane_g4

0x3ef1,	// (0x00025eef) cell_app_pane_cp2_g1_ParamLimits

0x3ef1,	// (0x00025eef) cell_app_pane_cp2_g1

0x3f0f,	// (0x00025f0d) cell_app_pane_cp2_g2_ParamLimits

0x3f0f,	// (0x00025f0d) cell_app_pane_cp2_g2

0x0001,

0xfbb6,	// (0x00031bb4) cell_app_pane_cp2_g_ParamLimits

0xfbb6,	// (0x00031bb4) cell_app_pane_cp2_g

0x3f1b,	// (0x00025f19) cell_app_pane_cp2_t1_ParamLimits

0x3f1b,	// (0x00025f19) cell_app_pane_cp2_t1

0x0e79,	// (0x00022e77) grid_highlight_pane_cp1_ParamLimits

0x0e79,	// (0x00022e77) grid_highlight_pane_cp1

0x7abb,	// (0x00029ab9) cell_hwr_candidate_pane_cp1_ParamLimits

0x7abb,	// (0x00029ab9) cell_hwr_candidate_pane_cp1

0x7a6f,	// (0x00029a6d) fep_hwr_candidate_drop_down_list_pane_g1

0x7ad9,	// (0x00029ad7) fep_hwr_candidate_drop_down_list_pane_g2

0x7ae6,	// (0x00029ae4) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbbb,	// (0x00031bb9) fep_hwr_candidate_drop_down_list_pane_g

0x7af3,	// (0x00029af1) fep_hwr_candidate_drop_down_list_scroll_pane

0x7afc,	// (0x00029afa) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7afc,	// (0x00029afa) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x7b09,	// (0x00029b07) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7b09,	// (0x00029b07) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x7b16,	// (0x00029b14) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7b16,	// (0x00029b14) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x7b23,	// (0x00029b21) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7b23,	// (0x00029b21) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x7b3e,	// (0x00029b3c) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7b3e,	// (0x00029b3c) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x7b59,	// (0x00029b57) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7b59,	// (0x00029b57) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x7b74,	// (0x00029b72) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7b74,	// (0x00029b72) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x7b8f,	// (0x00029b8d) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7b8f,	// (0x00029b8d) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc2,	// (0x00031bc0) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc2,	// (0x00031bc0) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xe73e,	// (0x0003073c) cell_vkb_candidate_pane_cp1_ParamLimits

0xe73e,	// (0x0003073c) cell_vkb_candidate_pane_cp1

0x3b82,	// (0x00025b80) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x3b82,	// (0x00025b80) fep_vkb_candidate_drop_down_list_pane_g1

0x3f2d,	// (0x00025f2b) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x3f2d,	// (0x00025f2b) fep_vkb_candidate_drop_down_list_pane_g2

0x3f3a,	// (0x00025f38) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x3f3a,	// (0x00025f38) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbd3,	// (0x00031bd1) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbd3,	// (0x00031bd1) fep_vkb_candidate_drop_down_list_pane_g

0x3f47,	// (0x00025f45) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x3f47,	// (0x00025f45) fep_vkb_candidate_drop_down_list_scroll_pane

0x3f54,	// (0x00025f52) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x3f54,	// (0x00025f52) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x3f61,	// (0x00025f5f) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x3f61,	// (0x00025f5f) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x3f6d,	// (0x00025f6b) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x3f6d,	// (0x00025f6b) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x3db1,	// (0x00025daf) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x3db1,	// (0x00025daf) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x3dd2,	// (0x00025dd0) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x3dd2,	// (0x00025dd0) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x3f79,	// (0x00025f77) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x3f79,	// (0x00025f77) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x3f9a,	// (0x00025f98) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x3f9a,	// (0x00025f98) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x3fbb,	// (0x00025fb9) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x3fbb,	// (0x00025fb9) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbda,	// (0x00031bd8) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbda,	// (0x00031bd8) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xcd81,	// (0x0002ed7f) title_pane_g1_ParamLimits

0xcd98,	// (0x0002ed96) title_pane_g2_ParamLimits

0xf54e,	// (0x0003154c) title_pane_g_ParamLimits

0x1383,	// (0x00023381) aid_call2_pane

0x137b,	// (0x00023379) aid_call_pane

0x138b,	// (0x00023389) popup_clock_analogue_window_g1

0x138b,	// (0x00023389) popup_clock_analogue_window_g2

0x5ece,	// (0x00027ecc) popup_clock_analogue_window_g3

0x5ed7,	// (0x00027ed5) popup_clock_analogue_window_g4

0x07f9,	// (0x000227f7) popup_clock_analogue_window_g5

0x0004,

0xf6f8,	// (0x000316f6) popup_clock_analogue_window_g

0x5edf,	// (0x00027edd) popup_clock_analogue_window_t1

0x5f23,	// (0x00027f21) clock_digital_number_pane_ParamLimits

0x5f23,	// (0x00027f21) clock_digital_number_pane

0x5f2f,	// (0x00027f2d) clock_digital_number_pane_cp02_ParamLimits

0x5f2f,	// (0x00027f2d) clock_digital_number_pane_cp02

0x5f3b,	// (0x00027f39) clock_digital_number_pane_cp03_ParamLimits

0x5f3b,	// (0x00027f39) clock_digital_number_pane_cp03

0x5f47,	// (0x00027f45) clock_digital_number_pane_cp04_ParamLimits

0x5f47,	// (0x00027f45) clock_digital_number_pane_cp04

0x5f53,	// (0x00027f51) clock_digital_separator_pane_ParamLimits

0x5f53,	// (0x00027f51) clock_digital_separator_pane

0x5f5f,	// (0x00027f5d) popup_clock_digital_window_t1_ParamLimits

0x5f5f,	// (0x00027f5d) popup_clock_digital_window_t1

0x07f9,	// (0x000227f7) clock_digital_number_pane_g1

0x07f9,	// (0x000227f7) clock_digital_number_pane_g2

0x0001,

0xf703,	// (0x00031701) clock_digital_number_pane_g

0x07f9,	// (0x000227f7) clock_digital_separator_pane_g1

0x07f9,	// (0x000227f7) clock_digital_separator_pane_g2

0x0001,

0xf703,	// (0x00031701) clock_digital_separator_pane_g

0xdce0,	// (0x0002fcde) aid_fill_nsta_ParamLimits

0xddf7,	// (0x0002fdf5) indicator_nsta_pane_ParamLimits

0x1aa8,	// (0x00023aa6) popup_clock_analogue_window

0x1aa8,	// (0x00023aa6) popup_clock_digital_window

0x1c67,	// (0x00023c65) grid_indicator_nsta_pane_ParamLimits

0x355c,	// (0x0002555a) clock_nsta_pane_t2

0x0001,

0xfaa0,	// (0x00031a9e) clock_nsta_pane_t

0x5e37,	// (0x00027e35) aid_size_max_handle

0xbe43,	// (0x0002de41) aid_size_min_handle

0x181d,	// (0x0002381b) editor_scroll_pane

0x3fd6,	// (0x00025fd4) ex_editor_pane

0x0fc8,	// (0x00022fc6) scroll_pane_cp13

0x0e29,	// (0x00022e27) scroll_pane_cp14

0x13ba,	// (0x000233b8) scroll_pane_cp36

0xdaa9,	// (0x0002faa7) list_single_graphic_hl_pane_cp2_ParamLimits

0xdaa9,	// (0x0002faa7) list_single_graphic_hl_pane_cp2

0xe3f0,	// (0x000303ee) list_single_graphic_hl_pane_ParamLimits

0xe3f0,	// (0x000303ee) list_single_graphic_hl_pane

0x9eca,	// (0x0002bec8) aid_size_min_hl_cp1

0x3fde,	// (0x00025fdc) list_highlight_pane_cp34_ParamLimits

0x3fde,	// (0x00025fdc) list_highlight_pane_cp34

0x3fef,	// (0x00025fed) list_single_graphic_hl_pane_g1_ParamLimits

0x3fef,	// (0x00025fed) list_single_graphic_hl_pane_g1

0xd7e6,	// (0x0002f7e4) list_single_graphic_hl_pane_g2_ParamLimits

0xd7e6,	// (0x0002f7e4) list_single_graphic_hl_pane_g2

0xd7e6,	// (0x0002f7e4) list_single_graphic_hl_pane_g3_ParamLimits

0xd7e6,	// (0x0002f7e4) list_single_graphic_hl_pane_g3

0xd7f2,	// (0x0002f7f0) list_single_graphic_hl_pane_g4_ParamLimits

0xd7f2,	// (0x0002f7f0) list_single_graphic_hl_pane_g4

0xd7fe,	// (0x0002f7fc) list_single_graphic_hl_pane_g5_ParamLimits

0xd7fe,	// (0x0002f7fc) list_single_graphic_hl_pane_g5

0x0004,

0xfbeb,	// (0x00031be9) list_single_graphic_hl_pane_g_ParamLimits

0xfbeb,	// (0x00031be9) list_single_graphic_hl_pane_g

0xd812,	// (0x0002f810) list_single_graphic_hl_pane_t1_ParamLimits

0xd812,	// (0x0002f810) list_single_graphic_hl_pane_t1

0x3ffc,	// (0x00025ffa) aid_size_min_hl_cp2

0x4005,	// (0x00026003) list_highlight_pane_cp34_cp2_ParamLimits

0x4005,	// (0x00026003) list_highlight_pane_cp34_cp2

0x3fef,	// (0x00025fed) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x3fef,	// (0x00025fed) list_single_graphic_hl_pane_g1_cp2

0x4012,	// (0x00026010) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x4012,	// (0x00026010) list_single_graphic_hl_pane_g2_cp2

0x401e,	// (0x0002601c) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x401e,	// (0x0002601c) list_single_graphic_hl_pane_g3_cp2

0x1692,	// (0x00023690) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x1692,	// (0x00023690) list_single_graphic_hl_pane_g4_cp2

0x3e37,	// (0x00025e35) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x3e37,	// (0x00025e35) list_single_graphic_hl_pane_g5_cp2

0xbe6d,	// (0x0002de6b) control_pane_g4_ParamLimits

0xbe6d,	// (0x0002de6b) control_pane_g4

0x0fff,	// (0x00022ffd) bg_popup_sub_pane_cp10_ParamLimits

0x3960,	// (0x0002595e) list_choice_list_pane_ParamLimits

0x396f,	// (0x0002596d) scroll_pane_cp23

0x0a12,	// (0x00022a10) bg_popup_preview_window_pane_cp02_ParamLimits

0x3e73,	// (0x00025e71) list_preview_fixed_pane_ParamLimits

0x3e89,	// (0x00025e87) list_preview_fixed_pane_cp_ParamLimits

0x3e89,	// (0x00025e87) list_preview_fixed_pane_cp

0x3e95,	// (0x00025e93) popup_preview_fixed_window_g1_ParamLimits

0x3e95,	// (0x00025e93) popup_preview_fixed_window_g1

0x3ea1,	// (0x00025e9f) popup_preview_fixed_window_g2_ParamLimits

0x3ea1,	// (0x00025e9f) popup_preview_fixed_window_g2

0x0002,

0xfb73,	// (0x00031b71) popup_preview_fixed_window_g_ParamLimits

0xfb73,	// (0x00031b71) popup_preview_fixed_window_g

0x5d3b,	// (0x00027d39) aid_navi_side_left_pane_ParamLimits

0x5d4b,	// (0x00027d49) aid_navi_side_right_pane_ParamLimits

0x5d5a,	// (0x00027d58) navi_icon_pane_stacon_ParamLimits

0x5d6a,	// (0x00027d68) navi_navi_pane_stacon_ParamLimits

0x5d5a,	// (0x00027d58) navi_text_pane_stacon_ParamLimits

0x56d5,	// (0x000276d3) main_text_info_pane

0x4040,	// (0x0002603e) listscroll_text_info_pane

0x4048,	// (0x00026046) list_text_info_pane_ParamLimits

0x4048,	// (0x00026046) list_text_info_pane

0x4057,	// (0x00026055) scroll_pane_cp24_ParamLimits

0x4057,	// (0x00026055) scroll_pane_cp24

0xe75e,	// (0x0003075c) list_text_info_pane_t1_ParamLimits

0xe75e,	// (0x0003075c) list_text_info_pane_t1

0xbfb4,	// (0x0002dfb2) popup_fast_swap2_window_ParamLimits

0xbfb4,	// (0x0002dfb2) popup_fast_swap2_window

0x4075,	// (0x00026073) aid_size_cell_fast2

0x07ef,	// (0x000227ed) bg_popup_window_pane_cp17

0x1f7d,	// (0x00023f7b) heading_pane_cp2

0x0c28,	// (0x00022c26) listscroll_fast2_pane

0x407f,	// (0x0002607d) grid_fast2_pane

0x4087,	// (0x00026085) listscroll_fast2_pane_g1

0x408f,	// (0x0002608d) listscroll_fast2_pane_g2

0x0001,

0xfbf6,	// (0x00031bf4) listscroll_fast2_pane_g

0x0fc8,	// (0x00022fc6) scroll_pane_cp26

0x4097,	// (0x00026095) cell_fast2_pane_ParamLimits

0x4097,	// (0x00026095) cell_fast2_pane

0x40ad,	// (0x000260ab) cell_fast2_pane_g1

0x40b6,	// (0x000260b4) cell_fast2_pane_g2

0x40bf,	// (0x000260bd) cell_fast2_pane_g3

0x0002,

0xfbfb,	// (0x00031bf9) cell_fast2_pane_g

0x0c8a,	// (0x00022c88) grid_highlight_pane_cp9

0x6540,	// (0x0002853e) main_eswt_pane_ParamLimits

0x6540,	// (0x0002853e) main_eswt_pane

0x406c,	// (0x0002606a) list_single_text_info_pane

0x40c7,	// (0x000260c5) eswt_ctrl_button_pane

0x40c7,	// (0x000260c5) eswt_ctrl_canvas_pane

0x40cf,	// (0x000260cd) eswt_ctrl_combo_pane

0x40c7,	// (0x000260c5) eswt_ctrl_default_pane

0x40c7,	// (0x000260c5) eswt_ctrl_label_pane

0x40d7,	// (0x000260d5) eswt_ctrl_wait_pane

0x40df,	// (0x000260dd) eswt_shell_pane

0x07ef,	// (0x000227ed) listscroll_eswt_app_pane

0x40fb,	// (0x000260f9) popup_eswt_tasktip_window_ParamLimits

0x40fb,	// (0x000260f9) popup_eswt_tasktip_window

0x1c1d,	// (0x00023c1b) bg_popup_window_pane_cp18

0x410c,	// (0x0002610a) eswt_control_pane_g1_ParamLimits

0x410c,	// (0x0002610a) eswt_control_pane_g1

0x4119,	// (0x00026117) eswt_control_pane_g2_ParamLimits

0x4119,	// (0x00026117) eswt_control_pane_g2

0x4126,	// (0x00026124) eswt_control_pane_g3_ParamLimits

0x4126,	// (0x00026124) eswt_control_pane_g3

0x4133,	// (0x00026131) eswt_control_pane_g4_ParamLimits

0x4133,	// (0x00026131) eswt_control_pane_g4

0x0003,

0xfc02,	// (0x00031c00) eswt_control_pane_g_ParamLimits

0xfc02,	// (0x00031c00) eswt_control_pane_g

0x0e79,	// (0x00022e77) bg_button_pane_ParamLimits

0x0e79,	// (0x00022e77) bg_button_pane

0x0c9f,	// (0x00022c9d) common_borders_pane_copy2_ParamLimits

0x0c9f,	// (0x00022c9d) common_borders_pane_copy2

0x4140,	// (0x0002613e) control_button_pane_g1_ParamLimits

0x4140,	// (0x0002613e) control_button_pane_g1

0x414c,	// (0x0002614a) control_button_pane_g2_ParamLimits

0x414c,	// (0x0002614a) control_button_pane_g2

0x4158,	// (0x00026156) control_button_pane_g3_ParamLimits

0x4158,	// (0x00026156) control_button_pane_g3

0x0002,

0xfc0b,	// (0x00031c09) control_button_pane_g_ParamLimits

0xfc0b,	// (0x00031c09) control_button_pane_g

0x416c,	// (0x0002616a) control_button_pane_t1

0x417a,	// (0x00026178) control_button_pane_t2

0x0001,

0xfc12,	// (0x00031c10) control_button_pane_t

0x1ba9,	// (0x00023ba7) bg_button_pane_g1

0x1bb1,	// (0x00023baf) bg_button_pane_g2

0x1bb9,	// (0x00023bb7) bg_button_pane_g3

0x1bc1,	// (0x00023bbf) bg_button_pane_g4

0x1bc9,	// (0x00023bc7) bg_button_pane_g5

0x1bd1,	// (0x00023bcf) bg_button_pane_g6

0x1bd9,	// (0x00023bd7) bg_button_pane_g7

0x1be1,	// (0x00023bdf) bg_button_pane_g8

0x1be9,	// (0x00023be7) bg_button_pane_g9

0x0008,

0xf85a,	// (0x00031858) bg_button_pane_g

0x391b,	// (0x00025919) common_borders_pane_ParamLimits

0x391b,	// (0x00025919) common_borders_pane

0x410c,	// (0x0002610a) eswt_control_pane_g1_copy1_ParamLimits

0x410c,	// (0x0002610a) eswt_control_pane_g1_copy1

0x4119,	// (0x00026117) eswt_control_pane_g2_copy1_ParamLimits

0x4119,	// (0x00026117) eswt_control_pane_g2_copy1

0x4126,	// (0x00026124) eswt_control_pane_g3_copy1_ParamLimits

0x4126,	// (0x00026124) eswt_control_pane_g3_copy1

0x4133,	// (0x00026131) eswt_control_pane_g4_copy1_ParamLimits

0x4133,	// (0x00026131) eswt_control_pane_g4_copy1

0x3956,	// (0x00025954) bg_eswt_ctrl_canvas_pane_g1

0x391b,	// (0x00025919) common_borders_pane_cp2_ParamLimits

0x391b,	// (0x00025919) common_borders_pane_cp2

0x391b,	// (0x00025919) common_borders_pane_cp3_ParamLimits

0x391b,	// (0x00025919) common_borders_pane_cp3

0x4188,	// (0x00026186) separator_horizontal_pane

0x121a,	// (0x00023218) separator_vertical_pane

0x410c,	// (0x0002610a) eswt_control_pane_g1_copy2_ParamLimits

0x410c,	// (0x0002610a) eswt_control_pane_g1_copy2

0x4119,	// (0x00026117) eswt_control_pane_g2_copy2_ParamLimits

0x4119,	// (0x00026117) eswt_control_pane_g2_copy2

0x4126,	// (0x00026124) eswt_control_pane_g3_copy2_ParamLimits

0x4126,	// (0x00026124) eswt_control_pane_g3_copy2

0x4133,	// (0x00026131) eswt_control_pane_g4_copy2_ParamLimits

0x4133,	// (0x00026131) eswt_control_pane_g4_copy2

0x07ef,	// (0x000227ed) common_borders_pane_cp4

0x4190,	// (0x0002618e) separator_horizontal_pane_g1

0x4199,	// (0x00026197) separator_horizontal_pane_g2

0x41a2,	// (0x000261a0) separator_horizontal_pane_g3

0x0002,

0xfc17,	// (0x00031c15) separator_horizontal_pane_g

0x410c,	// (0x0002610a) eswt_control_pane_g1_copy3_ParamLimits

0x410c,	// (0x0002610a) eswt_control_pane_g1_copy3

0x4119,	// (0x00026117) eswt_control_pane_g2_copy3_ParamLimits

0x4119,	// (0x00026117) eswt_control_pane_g2_copy3

0x4126,	// (0x00026124) eswt_control_pane_g3_copy3_ParamLimits

0x4126,	// (0x00026124) eswt_control_pane_g3_copy3

0x4133,	// (0x00026131) eswt_control_pane_g4_copy3_ParamLimits

0x4133,	// (0x00026131) eswt_control_pane_g4_copy3

0x07ef,	// (0x000227ed) common_borders_pane_cp5

0x41ab,	// (0x000261a9) separator_vertical_pane_g1

0x41b4,	// (0x000261b2) separator_vertical_pane_g2

0x41bd,	// (0x000261bb) separator_vertical_pane_g3

0x0002,

0xfc1e,	// (0x00031c1c) separator_vertical_pane_g

0x410c,	// (0x0002610a) eswt_control_pane_g1_copy4_ParamLimits

0x410c,	// (0x0002610a) eswt_control_pane_g1_copy4

0x4119,	// (0x00026117) eswt_control_pane_g2_copy4_ParamLimits

0x4119,	// (0x00026117) eswt_control_pane_g2_copy4

0x4126,	// (0x00026124) eswt_control_pane_g3_copy4_ParamLimits

0x4126,	// (0x00026124) eswt_control_pane_g3_copy4

0x4133,	// (0x00026131) eswt_control_pane_g4_copy4_ParamLimits

0x4133,	// (0x00026131) eswt_control_pane_g4_copy4

0xe779,	// (0x00030777) eswt_ctrl_combo_button_pane

0xe781,	// (0x0003077f) eswt_ctrl_input_pane

0xe789,	// (0x00030787) popup_choice_list_window_cp70

0xe791,	// (0x0003078f) eswt_ctrl_input_pane_t1

0x07ef,	// (0x000227ed) input_focus_pane_cp70

0x391b,	// (0x00025919) bg_button_pane_cp70_ParamLimits

0x391b,	// (0x00025919) bg_button_pane_cp70

0xe79f,	// (0x0003079d) eswt_ctrl_combo_button_pane_g1

0x41c6,	// (0x000261c4) wait_bar_pane_cp70

0x1c1d,	// (0x00023c1b) bg_popup_window_pane_cp70_ParamLimits

0x1c1d,	// (0x00023c1b) bg_popup_window_pane_cp70

0x41ce,	// (0x000261cc) popup_eswt_tasktip_window_t1

0x41e4,	// (0x000261e2) wait_bar_pane_cp71_ParamLimits

0x41e4,	// (0x000261e2) wait_bar_pane_cp71

0x41f0,	// (0x000261ee) grid_eswt_app_pane

0x1223,	// (0x00023221) scroll_pane_cp70

0xe7a7,	// (0x000307a5) cell_eswt_app_pane_ParamLimits

0xe7a7,	// (0x000307a5) cell_eswt_app_pane

0xe7cf,	// (0x000307cd) cell_eswt_app_pane_g1_ParamLimits

0xe7cf,	// (0x000307cd) cell_eswt_app_pane_g1

0xe7fe,	// (0x000307fc) cell_eswt_app_pane_g2_ParamLimits

0xe7fe,	// (0x000307fc) cell_eswt_app_pane_g2

0x0001,

0xfc25,	// (0x00031c23) cell_eswt_app_pane_g_ParamLimits

0xfc25,	// (0x00031c23) cell_eswt_app_pane_g

0xe827,	// (0x00030825) cell_eswt_app_pane_t1_ParamLimits

0xe827,	// (0x00030825) cell_eswt_app_pane_t1

0x41f9,	// (0x000261f7) grid_highlight_pane_cp70_ParamLimits

0x41f9,	// (0x000261f7) grid_highlight_pane_cp70

0x0e93,	// (0x00022e91) set_content_pane_g1

0x199c,	// (0x0002399a) status_small_volume_pane

0x7cca,	// (0x00029cc8) status_small_volume_pane_g1

0x7cd2,	// (0x00029cd0) volume_small2_pane

0x7cdb,	// (0x00029cd9) volume_small2_pane_g1

0x7ce4,	// (0x00029ce2) volume_small2_pane_g2

0x7ced,	// (0x00029ceb) volume_small2_pane_g3

0x7cf6,	// (0x00029cf4) volume_small2_pane_g4

0x7cff,	// (0x00029cfd) volume_small2_pane_g5

0x7d08,	// (0x00029d06) volume_small2_pane_g6

0x7d11,	// (0x00029d0f) volume_small2_pane_g7

0x7d1a,	// (0x00029d18) volume_small2_pane_g8

0x7d23,	// (0x00029d21) volume_small2_pane_g9

0x7d2c,	// (0x00029d2a) volume_small2_pane_g10

0x0009,

0xfc2a,	// (0x00031c28) volume_small2_pane_g

0x3c89,	// (0x00025c87) fep_vkb_top_text_pane_g1_ParamLimits

0xe6e6,	// (0x000306e4) fep_vkb_top_text_pane_t1_ParamLimits

0x3ead,	// (0x00025eab) popup_preview_fixed_window_g3_ParamLimits

0x3ead,	// (0x00025eab) popup_preview_fixed_window_g3

0xc4d4,	// (0x0002e4d2) popup_toolbar_trans_pane

0xe27d,	// (0x0003027b) aid_height_set_list_ParamLimits

0x2ccc,	// (0x00024cca) aid_size_parent_ParamLimits

0x0fff,	// (0x00022ffd) list_highlight_pane_cp2_ParamLimits

0x0e93,	// (0x00022e91) set_content_pane_g1_ParamLimits

0xe403,	// (0x00030401) list_single_image_pane_ParamLimits

0xe403,	// (0x00030401) list_single_image_pane

0xe859,	// (0x00030857) aid_size_cell_image_ParamLimits

0xe859,	// (0x00030857) aid_size_cell_image

0xe866,	// (0x00030864) grid_single_image_pane_ParamLimits

0xe866,	// (0x00030864) grid_single_image_pane

0x0e93,	// (0x00022e91) list_single_image_pane_g1_ParamLimits

0x0e93,	// (0x00022e91) list_single_image_pane_g1

0x0e9f,	// (0x00022e9d) list_single_image_pane_g2_ParamLimits

0x0e9f,	// (0x00022e9d) list_single_image_pane_g2

0x0001,

0xfc3f,	// (0x00031c3d) list_single_image_pane_g_ParamLimits

0xfc3f,	// (0x00031c3d) list_single_image_pane_g

0x2d6d,	// (0x00024d6b) list_single_image_pane_t1_ParamLimits

0x2d6d,	// (0x00024d6b) list_single_image_pane_t1

0xe872,	// (0x00030870) cell_image_list_pane_ParamLimits

0xe872,	// (0x00030870) cell_image_list_pane

0xe886,	// (0x00030884) cell_image_list_pane_g1

0xe88f,	// (0x0003088d) cell_image_list_pane_g2

0x0001,

0xfc44,	// (0x00031c42) cell_image_list_pane_g

0x4205,	// (0x00026203) aid_size_cell_tb_trans_pane

0x0e79,	// (0x00022e77) bg_tb_trans_pane

0x4217,	// (0x00026215) grid_tb_trans_pane

0x1ba9,	// (0x00023ba7) bg_tb_trans_pane_g1

0x1bb1,	// (0x00023baf) bg_tb_trans_pane_g2

0x1bb9,	// (0x00023bb7) bg_tb_trans_pane_g3

0x1bc1,	// (0x00023bbf) bg_tb_trans_pane_g4

0x1bc9,	// (0x00023bc7) bg_tb_trans_pane_g5

0x1be1,	// (0x00023bdf) bg_tb_trans_pane_g6

0x1be9,	// (0x00023be7) bg_tb_trans_pane_g7

0x1bd1,	// (0x00023bcf) bg_tb_trans_pane_g8

0x1bd9,	// (0x00023bd7) bg_tb_trans_pane_g9

0x0008,

0xfc49,	// (0x00031c47) bg_tb_trans_pane_g

0x422b,	// (0x00026229) cell_toolbar_trans_pane_ParamLimits

0x422b,	// (0x00026229) cell_toolbar_trans_pane

0x3956,	// (0x00025954) cell_toolbar_trans_pane_g1

0xe630,	// (0x0003062e) list_form2_midp_pane_t1

0xe63e,	// (0x0003063c) list_form2_midp_pane_t2

0x0001,

0xfae6,	// (0x00031ae4) list_form2_midp_pane_t

0x362a,	// (0x00025628) scroll_pane_cp51_ParamLimits

0x37a0,	// (0x0002579e) form2_midp_wait_pane_g1

0x37a9,	// (0x000257a7) form2_midp_wait_pane_g2

0x37b2,	// (0x000257b0) form2_midp_wait_pane_g3

0x0002,

0xfafb,	// (0x00031af9) form2_midp_wait_pane_g

0x08df,	// (0x000228dd) list_highlight_pane_cp21_ParamLimits

0x37f0,	// (0x000257ee) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x37ff,	// (0x000257fd) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x9977,	// (0x0002b975) list_single_2graphic_im_pane_ParamLimits

0x9977,	// (0x0002b975) list_single_2graphic_im_pane

0xe898,	// (0x00030896) list_single_2graphic_im_pane_g1_ParamLimits

0xe898,	// (0x00030896) list_single_2graphic_im_pane_g1

0xe8a9,	// (0x000308a7) list_single_2graphic_im_pane_g2_ParamLimits

0xe8a9,	// (0x000308a7) list_single_2graphic_im_pane_g2

0xe8b5,	// (0x000308b3) list_single_2graphic_im_pane_g3_ParamLimits

0xe8b5,	// (0x000308b3) list_single_2graphic_im_pane_g3

0x0003,

0xfc5c,	// (0x00031c5a) list_single_2graphic_im_pane_g_ParamLimits

0xfc5c,	// (0x00031c5a) list_single_2graphic_im_pane_g

0xe8c9,	// (0x000308c7) list_single_2graphic_im_pane_t1_ParamLimits

0xe8c9,	// (0x000308c7) list_single_2graphic_im_pane_t1

0x3eb9,	// (0x00025eb7) list_single_graphic_2heading_pane_fp_ParamLimits

0x3eb9,	// (0x00025eb7) list_single_graphic_2heading_pane_fp

0x9d3c,	// (0x0002bd3a) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x9d3c,	// (0x0002bd3a) list_single_graphic_2heading_pane_fp_g1

0x3ecd,	// (0x00025ecb) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x3ecd,	// (0x00025ecb) list_single_graphic_2heading_pane_fp_g2

0x947c,	// (0x0002b47a) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x947c,	// (0x0002b47a) list_single_graphic_2heading_pane_fp_g3

0x9d11,	// (0x0002bd0f) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x9d11,	// (0x0002bd0f) list_single_graphic_2heading_pane_fp_g4

0x3ed9,	// (0x00025ed7) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x3ed9,	// (0x00025ed7) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb83,	// (0x00031b81) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb83,	// (0x00031b81) list_single_graphic_2heading_pane_fp_g

0x9f09,	// (0x0002bf07) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x9f09,	// (0x0002bf07) list_single_graphic_2heading_pane_fp_t1

0x9d74,	// (0x0002bd72) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x9d74,	// (0x0002bd72) list_single_graphic_2heading_pane_fp_t2

0x9f1f,	// (0x0002bf1d) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x9f1f,	// (0x0002bf1d) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc65,	// (0x00031c63) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc65,	// (0x00031c63) list_single_graphic_2heading_pane_fp_t

0x39df,	// (0x000259dd) fep_hwr_write_pane_g5_ParamLimits

0x39df,	// (0x000259dd) fep_hwr_write_pane_g5

0x39eb,	// (0x000259e9) fep_hwr_write_pane_g6_ParamLimits

0x39eb,	// (0x000259e9) fep_hwr_write_pane_g6

0x40df,	// (0x000260dd) eswt_shell_pane_ParamLimits

0x1c1d,	// (0x00023c1b) bg_popup_window_pane_cp18_ParamLimits

0x2c70,	// (0x00024c6e) heading_pane_cp70

0x41ce,	// (0x000261cc) popup_eswt_tasktip_window_t1_ParamLimits

0xdd24,	// (0x0002fd22) aid_touch_tab_arrow_left

0xdd38,	// (0x0002fd36) aid_touch_tab_arrow_right

0xcdb7,	// (0x0002edb5) title_pane_g3_ParamLimits

0xcdb7,	// (0x0002edb5) title_pane_g3

0x0e49,	// (0x00022e47) set_value_pane_g1

0xc4d4,	// (0x0002e4d2) popup_toolbar_trans_pane_ParamLimits

0x4205,	// (0x00026203) aid_size_cell_tb_trans_pane_ParamLimits

0x0e79,	// (0x00022e77) bg_tb_trans_pane_ParamLimits

0x4217,	// (0x00026215) grid_tb_trans_pane_ParamLimits

0x0a12,	// (0x00022a10) cont_note_pane_ParamLimits

0x0a12,	// (0x00022a10) cont_note_pane

0x0c9f,	// (0x00022c9d) cont_snote2_single_text_pane_ParamLimits

0x0c9f,	// (0x00022c9d) cont_snote2_single_text_pane

0x0c9f,	// (0x00022c9d) cont_snote2_single_graphic_pane_ParamLimits

0x0c9f,	// (0x00022c9d) cont_snote2_single_graphic_pane

0x2193,	// (0x00024191) cont_note_wait_pane_ParamLimits

0x2193,	// (0x00024191) cont_note_wait_pane

0x2193,	// (0x00024191) cont_note_image_pane_ParamLimits

0x2193,	// (0x00024191) cont_note_image_pane

0x425d,	// (0x0002625b) popup_note2_window_g1_ParamLimits

0x425d,	// (0x0002625b) popup_note2_window_g1

0x428e,	// (0x0002628c) popup_note2_window_t1_ParamLimits

0x428e,	// (0x0002628c) popup_note2_window_t1

0x42d3,	// (0x000262d1) popup_note2_window_t2_ParamLimits

0x42d3,	// (0x000262d1) popup_note2_window_t2

0x4318,	// (0x00026316) popup_note2_window_t3_ParamLimits

0x4318,	// (0x00026316) popup_note2_window_t3

0x435d,	// (0x0002635b) popup_note2_window_t4_ParamLimits

0x435d,	// (0x0002635b) popup_note2_window_t4

0x0a96,	// (0x00022a94) popup_note2_window_t5_ParamLimits

0x0a96,	// (0x00022a94) popup_note2_window_t5

0x0004,

0xfc71,	// (0x00031c6f) popup_note2_window_t_ParamLimits

0xfc71,	// (0x00031c6f) popup_note2_window_t

0x438c,	// (0x0002638a) popup_note2_image_window_g1_ParamLimits

0x438c,	// (0x0002638a) popup_note2_image_window_g1

0x4398,	// (0x00026396) popup_note2_image_window_g2_ParamLimits

0x4398,	// (0x00026396) popup_note2_image_window_g2

0x0001,

0xfc7c,	// (0x00031c7a) popup_note2_image_window_g_ParamLimits

0xfc7c,	// (0x00031c7a) popup_note2_image_window_g

0x43aa,	// (0x000263a8) popup_note2_image_window_t1_ParamLimits

0x43aa,	// (0x000263a8) popup_note2_image_window_t1

0x43c2,	// (0x000263c0) popup_note2_image_window_t2_ParamLimits

0x43c2,	// (0x000263c0) popup_note2_image_window_t2

0x43da,	// (0x000263d8) popup_note2_image_window_t3_ParamLimits

0x43da,	// (0x000263d8) popup_note2_image_window_t3

0x0002,

0xfc81,	// (0x00031c7f) popup_note2_image_window_t_ParamLimits

0xfc81,	// (0x00031c7f) popup_note2_image_window_t

0x21a1,	// (0x0002419f) popup_note2_wait_window_g1_ParamLimits

0x21a1,	// (0x0002419f) popup_note2_wait_window_g1

0x21ad,	// (0x000241ab) popup_note2_wait_window_g2_ParamLimits

0x21ad,	// (0x000241ab) popup_note2_wait_window_g2

0x21b9,	// (0x000241b7) popup_note2_wait_window_g3_ParamLimits

0x21b9,	// (0x000241b7) popup_note2_wait_window_g3

0x0002,

0xf83c,	// (0x0003183a) popup_note2_wait_window_g_ParamLimits

0xf83c,	// (0x0003183a) popup_note2_wait_window_g

0x43f6,	// (0x000263f4) popup_note2_wait_window_t1_ParamLimits

0x43f6,	// (0x000263f4) popup_note2_wait_window_t1

0x4414,	// (0x00026412) popup_note2_wait_window_t2_ParamLimits

0x4414,	// (0x00026412) popup_note2_wait_window_t2

0x4432,	// (0x00026430) popup_note2_wait_window_t3_ParamLimits

0x4432,	// (0x00026430) popup_note2_wait_window_t3

0x4444,	// (0x00026442) popup_note2_wait_window_t4_ParamLimits

0x4444,	// (0x00026442) popup_note2_wait_window_t4

0x0003,

0xfc88,	// (0x00031c86) popup_note2_wait_window_t_ParamLimits

0xfc88,	// (0x00031c86) popup_note2_wait_window_t

0x4456,	// (0x00026454) wait_bar2_pane_ParamLimits

0x4456,	// (0x00026454) wait_bar2_pane

0x446e,	// (0x0002646c) popup_snote2_single_text_window_g1_ParamLimits

0x446e,	// (0x0002646c) popup_snote2_single_text_window_g1

0x4496,	// (0x00026494) popup_snote2_single_text_window_t1_ParamLimits

0x4496,	// (0x00026494) popup_snote2_single_text_window_t1

0x44e2,	// (0x000264e0) popup_snote2_single_text_window_t2_ParamLimits

0x44e2,	// (0x000264e0) popup_snote2_single_text_window_t2

0x452e,	// (0x0002652c) popup_snote2_single_text_window_t3_ParamLimits

0x452e,	// (0x0002652c) popup_snote2_single_text_window_t3

0x456f,	// (0x0002656d) popup_snote2_single_text_window_t4_ParamLimits

0x456f,	// (0x0002656d) popup_snote2_single_text_window_t4

0x45a5,	// (0x000265a3) popup_snote2_single_text_window_t5_ParamLimits

0x45a5,	// (0x000265a3) popup_snote2_single_text_window_t5

0x0004,

0xfc91,	// (0x00031c8f) popup_snote2_single_text_window_t_ParamLimits

0xfc91,	// (0x00031c8f) popup_snote2_single_text_window_t

0x45d0,	// (0x000265ce) popup_snote2_single_graphic_window_g1_ParamLimits

0x45d0,	// (0x000265ce) popup_snote2_single_graphic_window_g1

0x45f8,	// (0x000265f6) popup_snote2_single_graphic_window_g2_ParamLimits

0x45f8,	// (0x000265f6) popup_snote2_single_graphic_window_g2

0x0001,

0xfc9c,	// (0x00031c9a) popup_snote2_single_graphic_window_g_ParamLimits

0xfc9c,	// (0x00031c9a) popup_snote2_single_graphic_window_g

0x4620,	// (0x0002661e) popup_snote2_single_graphic_window_t1_ParamLimits

0x4620,	// (0x0002661e) popup_snote2_single_graphic_window_t1

0x466c,	// (0x0002666a) popup_snote2_single_graphic_window_t2_ParamLimits

0x466c,	// (0x0002666a) popup_snote2_single_graphic_window_t2

0x452e,	// (0x0002652c) popup_snote2_single_graphic_window_t3_ParamLimits

0x452e,	// (0x0002652c) popup_snote2_single_graphic_window_t3

0x456f,	// (0x0002656d) popup_snote2_single_graphic_window_t4_ParamLimits

0x456f,	// (0x0002656d) popup_snote2_single_graphic_window_t4

0x45a5,	// (0x000265a3) popup_snote2_single_graphic_window_t5_ParamLimits

0x45a5,	// (0x000265a3) popup_snote2_single_graphic_window_t5

0x0004,

0xfca1,	// (0x00031c9f) popup_snote2_single_graphic_window_t_ParamLimits

0xfca1,	// (0x00031c9f) popup_snote2_single_graphic_window_t

0x35c3,	// (0x000255c1) clock_nsta_pane_cp2_t1

0x35c3,	// (0x000255c1) clock_nsta_pane_cp2_t2

0x0001,

0xfabc,	// (0x00031aba) clock_nsta_pane_cp2_t

0x9628,	// (0x0002b626) form_field_data_wide_pane_g1_ParamLimits

0x0e93,	// (0x00022e91) form_field_data_wide_pane_g2_ParamLimits

0x0e93,	// (0x00022e91) form_field_data_wide_pane_g2

0x0e9f,	// (0x00022e9d) form_field_data_wide_pane_g3_ParamLimits

0x0e9f,	// (0x00022e9d) form_field_data_wide_pane_g3

0x0002,

0xf67b,	// (0x00031679) form_field_data_wide_pane_g_ParamLimits

0xf67b,	// (0x00031679) form_field_data_wide_pane_g

0xe579,	// (0x00030577) grid_touch_3_pane_ParamLimits

0xe579,	// (0x00030577) grid_touch_3_pane

0xe8fa,	// (0x000308f8) cell_touch_3_pane_ParamLimits

0xe8fa,	// (0x000308f8) cell_touch_3_pane

0x3956,	// (0x00025954) cell_touch_3_pane_g1

0x3956,	// (0x00025954) cell_touch_3_pane_g2

0x0001,

0xfb41,	// (0x00031b3f) cell_touch_3_pane_g

0x0aee,	// (0x00022aec) cont_query_data_pane

0x0af6,	// (0x00022af4) cont_query_data_pane_cp1

0x46b8,	// (0x000266b6) button_value_adjust_pane_cp7

0x46c0,	// (0x000266be) query_popup_pane_cp3

0x13cb,	// (0x000233c9) bg_popup_sub_pane_cp22_ParamLimits

0x5fe0,	// (0x00027fde) navi_navi_volume_pane_cp2

0x5ff8,	// (0x00027ff6) popup_side_volume_key_window_g2

0x6004,	// (0x00028002) popup_side_volume_key_window_g3

0x0002,

0xf711,	// (0x0003170f) popup_side_volume_key_window_g

0x601e,	// (0x0002801c) popup_side_volume_key_window_t2

0x0001,

0xf718,	// (0x00031716) popup_side_volume_key_window_t

0x1615,	// (0x00023613) popup_side_volume_key_window_ParamLimits

0xd1fa,	// (0x0002f1f8) list_double_graphic_pane_g4_ParamLimits

0xd1fa,	// (0x0002f1f8) list_double_graphic_pane_g4

0xe3db,	// (0x000303d9) list_single_2heading_msg_pane_ParamLimits

0xe3db,	// (0x000303d9) list_single_2heading_msg_pane

0xd828,	// (0x0002f826) list_single_2heading_msg_pane_g1_ParamLimits

0xd828,	// (0x0002f826) list_single_2heading_msg_pane_g1

0xd834,	// (0x0002f832) list_single_2heading_msg_pane_g2_ParamLimits

0xd834,	// (0x0002f832) list_single_2heading_msg_pane_g2

0xd847,	// (0x0002f845) list_single_2heading_msg_pane_g3_ParamLimits

0xd847,	// (0x0002f845) list_single_2heading_msg_pane_g3

0xd853,	// (0x0002f851) list_single_2heading_msg_pane_g4_ParamLimits

0xd853,	// (0x0002f851) list_single_2heading_msg_pane_g4

0x0003,

0xfcac,	// (0x00031caa) list_single_2heading_msg_pane_g_ParamLimits

0xfcac,	// (0x00031caa) list_single_2heading_msg_pane_g

0xd86b,	// (0x0002f869) list_single_2heading_msg_pane_t1_ParamLimits

0xd86b,	// (0x0002f869) list_single_2heading_msg_pane_t1

0xd893,	// (0x0002f891) list_single_2heading_msg_pane_t2_ParamLimits

0xd893,	// (0x0002f891) list_single_2heading_msg_pane_t2

0xd8fe,	// (0x0002f8fc) list_single_2heading_msg_pane_t3_ParamLimits

0xd8fe,	// (0x0002f8fc) list_single_2heading_msg_pane_t3

0xa002,	// (0x0002c000) list_single_2heading_msg_pane_t4_ParamLimits

0xa002,	// (0x0002c000) list_single_2heading_msg_pane_t4

0x0003,

0xfcb5,	// (0x00031cb3) list_single_2heading_msg_pane_t_ParamLimits

0xfcb5,	// (0x00031cb3) list_single_2heading_msg_pane_t

0x0885,	// (0x00022883) title_pane_g4_ParamLimits

0x0885,	// (0x00022883) title_pane_g4

0x5cb1,	// (0x00027caf) title_pane_stacon_g3_ParamLimits

0x5cb1,	// (0x00027caf) title_pane_stacon_g3

0x4251,	// (0x0002624f) list_single_2graphic_im_pane_g4_ParamLimits

0x4251,	// (0x0002624f) list_single_2graphic_im_pane_g4

0x2a9a,	// (0x00024a98) popup_side_volume_key_window_cp

0x2f3f,	// (0x00024f3d) main_idle_act2_pane_t1

0x6ced,	// (0x00028ceb) toolbar_button_pane_g10

0xd103,	// (0x0002f101) popup_toolbar_window_cp1

0x35b4,	// (0x000255b2) clock_nsta_pane_cp_t1

0x35b4,	// (0x000255b2) clock_nsta_pane_cp_t2

0x0001,

0xfab7,	// (0x00031ab5) clock_nsta_pane_cp_t

0x5fe0,	// (0x00027fde) navi_navi_volume_pane_cp2_ParamLimits

0x5fec,	// (0x00027fea) popup_side_volume_key_window_g1_ParamLimits

0x5ff8,	// (0x00027ff6) popup_side_volume_key_window_g2_ParamLimits

0x6004,	// (0x00028002) popup_side_volume_key_window_g3_ParamLimits

0xf711,	// (0x0003170f) popup_side_volume_key_window_g_ParamLimits

0x7746,	// (0x00029744) fep_hwr_aid_pane

0x77e7,	// (0x000297e5) bg_fep_hwr_top_pane_g4_ParamLimits

0x39c1,	// (0x000259bf) fep_hwr_top_pane_g1_ParamLimits

0x39af,	// (0x000259ad) fep_hwr_top_pane_g2_ParamLimits

0x7807,	// (0x00029805) fep_hwr_top_pane_g3_ParamLimits

0xfb0c,	// (0x00031b0a) fep_hwr_top_pane_g_ParamLimits

0x781c,	// (0x0002981a) fep_hwr_top_text_pane_ParamLimits

0x28a3,	// (0x000248a1) aid_touch_tab_arrow_arrow_2

0x289a,	// (0x00024898) aid_touch_tab_arrow_left_2

0x775a,	// (0x00029758) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x778d,	// (0x0002978b) fep_hwr_prediction_pane

0x3af4,	// (0x00025af2) fep_vkb_prediction_pane

0xe6c6,	// (0x000306c4) fep_vkb_side_pane_g3_ParamLimits

0xe6c6,	// (0x000306c4) fep_vkb_side_pane_g3

0x7a6f,	// (0x00029a6d) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x7ad9,	// (0x00029ad7) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x7ae6,	// (0x00029ae4) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbbb,	// (0x00031bb9) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x7e16,	// (0x00029e14) fep_hwr_prediction_pane_g1

0x7e20,	// (0x00029e1e) fep_hwr_prediction_pane_g2

0x7e28,	// (0x00029e26) fep_hwr_prediction_pane_g3

0x7e30,	// (0x00029e2e) fep_hwr_prediction_pane_g4

0x0003,

0xfcbe,	// (0x00031cbc) fep_hwr_prediction_pane_g

0x46d1,	// (0x000266cf) fep_vkb_prediction_pane_g1

0x46db,	// (0x000266d9) fep_vkb_prediction_pane_g2

0x46e3,	// (0x000266e1) fep_vkb_prediction_pane_g3

0x46eb,	// (0x000266e9) fep_vkb_prediction_pane_g4

0x0003,

0xfcc7,	// (0x00031cc5) fep_vkb_prediction_pane_g

0x7143,	// (0x00029141) slider_set_pane_g3

0x7157,	// (0x00029155) slider_set_pane_g4

0x716f,	// (0x0002916d) slider_set_pane_g5

0x7143,	// (0x00029141) slider_set_pane_g6

0xc6dd,	// (0x0002e6db) slider_set_pane_g7

0x2cef,	// (0x00024ced) slider_form_pane_g3

0x2cf8,	// (0x00024cf6) slider_form_pane_g4

0x2d00,	// (0x00024cfe) slider_form_pane_g5

0x2cef,	// (0x00024ced) slider_form_pane_g6

0xe3af,	// (0x000303ad) slider_form_pane_g7

0x3188,	// (0x00025186) slider_set_pane_vc_g3

0x3191,	// (0x0002518f) slider_set_pane_vc_g4

0x319a,	// (0x00025198) slider_set_pane_vc_g5

0x3188,	// (0x00025186) slider_set_pane_vc_g6

0x31a3,	// (0x000251a1) slider_set_pane_vc_g7

0x3188,	// (0x00025186) slider_form_pane_vc_g1

0x3191,	// (0x0002518f) slider_form_pane_vc_g2

0x319a,	// (0x00025198) slider_form_pane_vc_g3

0x3188,	// (0x00025186) slider_form_pane_vc_g4

0x3317,	// (0x00025315) slider_form_pane_vc_g5

0x0004,

0xfa89,	// (0x00031a87) slider_form_pane_vc_g

0x56d5,	// (0x000276d3) main_idle_act3_pane

0x46f3,	// (0x000266f1) ai3_links_pane

0xe941,	// (0x0003093f) popup_ai3_data_window_ParamLimits

0xe941,	// (0x0003093f) popup_ai3_data_window

0x07ef,	// (0x000227ed) grid_ai3_links_pane

0xe959,	// (0x00030957) cell_ai3_links_pane_ParamLimits

0xe959,	// (0x00030957) cell_ai3_links_pane

0x46fc,	// (0x000266fa) bg_popup_sub_pane_cp11

0x4709,	// (0x00026707) cell_ai3_links_pane_g1

0x07ef,	// (0x000227ed) bg_popup_sub_pane_cp12

0x472e,	// (0x0002672c) heading_ai3_data_pane

0x4736,	// (0x00026734) list_ai3_gene_pane

0x4742,	// (0x00026740) popup_ai3_data_window_g1

0x474a,	// (0x00026748) heading_ai3_data_pane_g1

0x4752,	// (0x00026750) heading_ai3_data_pane_t1

0x4760,	// (0x0002675e) list_double_ai3_gene_pane_ParamLimits

0x4760,	// (0x0002675e) list_double_ai3_gene_pane

0x476d,	// (0x0002676b) list_single_ai3_gene_pane_ParamLimits

0x476d,	// (0x0002676b) list_single_ai3_gene_pane

0x391b,	// (0x00025919) list_highlight_pane_cp7_ParamLimits

0x391b,	// (0x00025919) list_highlight_pane_cp7

0x477a,	// (0x00026778) list_single_a13_gene_pane_t1_ParamLimits

0x477a,	// (0x00026778) list_single_a13_gene_pane_t1

0x4791,	// (0x0002678f) list_single_ai3_gene_pane_g1

0x479a,	// (0x00026798) list_single_ai3_gene_pane_g2

0x0001,

0xfcd0,	// (0x00031cce) list_single_ai3_gene_pane_g

0x47a2,	// (0x000267a0) list_double_ai3_gene_pane_g1_ParamLimits

0x47a2,	// (0x000267a0) list_double_ai3_gene_pane_g1

0x47ae,	// (0x000267ac) list_double_ai3_gene_pane_t1_ParamLimits

0x47ae,	// (0x000267ac) list_double_ai3_gene_pane_t1

0x47ca,	// (0x000267c8) list_double_ai3_gene_pane_t2_ParamLimits

0x47ca,	// (0x000267c8) list_double_ai3_gene_pane_t2

0x47df,	// (0x000267dd) list_double_ai3_gene_pane_t3_ParamLimits

0x47df,	// (0x000267dd) list_double_ai3_gene_pane_t3

0x0002,

0xfcd5,	// (0x00031cd3) list_double_ai3_gene_pane_t_ParamLimits

0xfcd5,	// (0x00031cd3) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x9f35,	// (0x0002bf33) aid_size_min_col_2

0xe92d,	// (0x0003092b) aid_size_min_msg_ParamLimits

0xe92d,	// (0x0003092b) aid_size_min_msg

0xe6da,	// (0x000306d8) fep_vkb_top_text_pane_g2_ParamLimits

0xe6da,	// (0x000306d8) fep_vkb_top_text_pane_g2

0x0001,

0xfb3c,	// (0x00031b3a) fep_vkb_top_text_pane_g_ParamLimits

0xfb3c,	// (0x00031b3a) fep_vkb_top_text_pane_g

0x56d5,	// (0x000276d3) main_hc_apps_shell_pane

0x47fc,	// (0x000267fa) grid_hc_apps_pane_ParamLimits

0x47fc,	// (0x000267fa) grid_hc_apps_pane

0x480b,	// (0x00026809) list_hc_apps_pane

0x4813,	// (0x00026811) scroll_pane_cp37_ParamLimits

0x4813,	// (0x00026811) scroll_pane_cp37

0xe96f,	// (0x0003096d) cell_hc_apps_pane_ParamLimits

0xe96f,	// (0x0003096d) cell_hc_apps_pane

0xea09,	// (0x00030a07) cell_hc_apps_pane_g1_ParamLimits

0xea09,	// (0x00030a07) cell_hc_apps_pane_g1

0x481f,	// (0x0002681d) cell_hc_apps_pane_g2_ParamLimits

0x481f,	// (0x0002681d) cell_hc_apps_pane_g2

0x483b,	// (0x00026839) cell_hc_apps_pane_g3_ParamLimits

0x483b,	// (0x00026839) cell_hc_apps_pane_g3

0x0002,

0xfcdc,	// (0x00031cda) cell_hc_apps_pane_g_ParamLimits

0xfcdc,	// (0x00031cda) cell_hc_apps_pane_g

0xea36,	// (0x00030a34) cell_hc_apps_pane_t1_ParamLimits

0xea36,	// (0x00030a34) cell_hc_apps_pane_t1

0x0a12,	// (0x00022a10) grid_highlight_pane_cp10_ParamLimits

0x0a12,	// (0x00022a10) grid_highlight_pane_cp10

0xea74,	// (0x00030a72) list_single_hc_apps_pane_ParamLimits

0xea74,	// (0x00030a72) list_single_hc_apps_pane

0xeaa0,	// (0x00030a9e) list_single_hc_apps_pane_g1

0xd96c,	// (0x0002f96a) list_single_hc_apps_pane_g2

0x0001,

0xfce3,	// (0x00031ce1) list_single_hc_apps_pane_g

0xd985,	// (0x0002f983) list_single_hc_apps_pane_g2_copy1

0xd9a1,	// (0x0002f99f) list_single_hc_apps_pane_t1

0x08df,	// (0x000228dd) bg_set_opt_pane_cp_ParamLimits

0x59a4,	// (0x000279a2) setting_slider_pane_t1_ParamLimits

0xbded,	// (0x0002ddeb) setting_slider_pane_t2_ParamLimits

0xbe06,	// (0x0002de04) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0003155c) setting_slider_pane_t_ParamLimits

0x59ea,	// (0x000279e8) slider_set_pane_ParamLimits

0x63f7,	// (0x000283f5) control_pane_g5_ParamLimits

0x63f7,	// (0x000283f5) control_pane_g5

0x2cb7,	// (0x00024cb5) slider_set_pane_g1_ParamLimits

0x7137,	// (0x00029135) slider_set_pane_g2_ParamLimits

0x7143,	// (0x00029141) slider_set_pane_g3_ParamLimits

0x7157,	// (0x00029155) slider_set_pane_g4_ParamLimits

0x716f,	// (0x0002916d) slider_set_pane_g5_ParamLimits

0x7143,	// (0x00029141) slider_set_pane_g6_ParamLimits

0xc6dd,	// (0x0002e6db) slider_set_pane_g7_ParamLimits

0xf958,	// (0x00031956) slider_set_pane_g_ParamLimits

0x08df,	// (0x000228dd) navi_icon_text_pane_ParamLimits

0xdcf6,	// (0x0002fcf4) aid_fill_nsta_2_ParamLimits

0xdd24,	// (0x0002fd22) aid_touch_tab_arrow_left_ParamLimits

0xdd38,	// (0x0002fd36) aid_touch_tab_arrow_right_ParamLimits

0xddd4,	// (0x0002fdd2) clock_nsta_pane_ParamLimits

0x287c,	// (0x0002487a) navi_icon_pane_g1_ParamLimits

0x2888,	// (0x00024886) navi_text_pane_t1_ParamLimits

0x3604,	// (0x00025602) navi_icon_text_pane_g1_ParamLimits

0x3610,	// (0x0002560e) navi_icon_text_pane_t1_ParamLimits

0xeaa0,	// (0x00030a9e) list_single_hc_apps_pane_g1_ParamLimits

0xd96c,	// (0x0002f96a) list_single_hc_apps_pane_g2_ParamLimits

0xfce3,	// (0x00031ce1) list_single_hc_apps_pane_g_ParamLimits

0xd985,	// (0x0002f983) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xd9a1,	// (0x0002f99f) list_single_hc_apps_pane_t1_ParamLimits

0xbd33,	// (0x0002dd31) popup_toolbar2_fixed_window_ParamLimits

0xbd33,	// (0x0002dd31) popup_toolbar2_fixed_window

0xc4cc,	// (0x0002e4ca) popup_toolbar2_float_window

0x07ef,	// (0x000227ed) bg_popup_sub_pane_cp27

0x485d,	// (0x0002685b) grid_toolbar2_float_pane

0x07ef,	// (0x000227ed) bg_popup_sub_pane_cp26

0x485d,	// (0x0002685b) grid_toolbar2_fixed_pane

0xeab9,	// (0x00030ab7) cell_toolbar2_fixed_pane_ParamLimits

0xeab9,	// (0x00030ab7) cell_toolbar2_fixed_pane

0xead4,	// (0x00030ad2) cell_toolbar2_fixed_pane_g1

0x4865,	// (0x00026863) toolbar2_fixed_button_pane

0x1ba9,	// (0x00023ba7) toolbar2_fixed_button_pane_g1

0x1bb1,	// (0x00023baf) toolbar2_fixed_button_pane_g2

0x1bb9,	// (0x00023bb7) toolbar2_fixed_button_pane_g3

0x1bc1,	// (0x00023bbf) toolbar2_fixed_button_pane_g4

0x1bc9,	// (0x00023bc7) toolbar2_fixed_button_pane_g5

0x1bd1,	// (0x00023bcf) toolbar2_fixed_button_pane_g6

0x1bd9,	// (0x00023bd7) toolbar2_fixed_button_pane_g7

0x1be1,	// (0x00023bdf) toolbar2_fixed_button_pane_g8

0x1be9,	// (0x00023be7) toolbar2_fixed_button_pane_g9

0x0008,

0xf85a,	// (0x00031858) toolbar2_fixed_button_pane_g

0x486d,	// (0x0002686b) cell_toolbar2_float_pane_ParamLimits

0x486d,	// (0x0002686b) cell_toolbar2_float_pane

0x487e,	// (0x0002687c) cell_toolbar2_float_pane_g1

0x4865,	// (0x00026863) toolbar2_fixed_button_pane_cp

0xe68f,	// (0x0003068d) fep_vkb_accented_list_pane_ParamLimits

0xe68f,	// (0x0003068d) fep_vkb_accented_list_pane

0x7a4f,	// (0x00029a4d) bg_popup_fep_shadow_pane_g9

0x181d,	// (0x0002381b) bg_popup_fep_shadow_pane_cp3

0x0faf,	// (0x00022fad) list_accented_list_pane

0x4887,	// (0x00026885) list_single_accented_list_pane_ParamLimits

0x4887,	// (0x00026885) list_single_accented_list_pane

0x181d,	// (0x0002381b) list_highlight_pane_cp10

0x4898,	// (0x00026896) list_single_accented_list_pane_t1

0xc40e,	// (0x0002e40c) popup_slider_window_ParamLimits

0xc40e,	// (0x0002e40c) popup_slider_window

0x46c8,	// (0x000266c6) aid_indentation_list_msg

0xebb3,	// (0x00030bb1) bg_popup_window_pane_cp19

0x48fe,	// (0x000268fc) popup_slider_window_g1

0x491a,	// (0x00026918) popup_slider_window_g2

0x4936,	// (0x00026934) popup_slider_window_g3

0x0005,

0xfce8,	// (0x00031ce6) popup_slider_window_g

0x4952,	// (0x00026950) popup_slider_window_t1

0x4996,	// (0x00026994) small_volume_slider_vertical_pane

0x3956,	// (0x00025954) small_volume_slider_vertical_pane_g1

0x3956,	// (0x00025954) small_volume_slider_vertical_pane_g2

0x49b2,	// (0x000269b0) small_volume_slider_vertical_pane_g3

0x0002,

0xfcfa,	// (0x00031cf8) small_volume_slider_vertical_pane_g

0xbcb7,	// (0x0002dcb5) area_side_right_pane_ParamLimits

0xbcb7,	// (0x0002dcb5) area_side_right_pane

0xc740,	// (0x0002e73e) aid_size_side_button_ParamLimits

0xc740,	// (0x0002e73e) aid_size_side_button

0xc759,	// (0x0002e757) grid_sctrl_middle_pane_ParamLimits

0xc759,	// (0x0002e757) grid_sctrl_middle_pane

0x80fc,	// (0x0002a0fa) sctrl_sk_bottom_pane

0x810d,	// (0x0002a10b) sctrl_sk_top_pane

0x811f,	// (0x0002a11d) aid_touch_sctrl_top

0x812c,	// (0x0002a12a) bg_sctrl_sk_pane_ParamLimits

0x812c,	// (0x0002a12a) bg_sctrl_sk_pane

0x813a,	// (0x0002a138) sctrl_sk_top_pane_g1

0x8147,	// (0x0002a145) sctrl_sk_top_pane_t1

0x811f,	// (0x0002a11d) aid_touch_sctrl_bottom

0x812c,	// (0x0002a12a) bg_sctrl_sk_pane_cp_ParamLimits

0x812c,	// (0x0002a12a) bg_sctrl_sk_pane_cp

0x8162,	// (0x0002a160) sctrl_sk_bottom_pane_g1

0x8147,	// (0x0002a145) sctrl_sk_bottom_pane_t1

0xc76f,	// (0x0002e76d) cell_sctrl_middle_pane_ParamLimits

0xc76f,	// (0x0002e76d) cell_sctrl_middle_pane

0xc780,	// (0x0002e77e) aid_touch_sctrl_middle_ParamLimits

0xc780,	// (0x0002e77e) aid_touch_sctrl_middle

0xc78d,	// (0x0002e78b) bg_sctrl_middle_pane_ParamLimits

0xc78d,	// (0x0002e78b) bg_sctrl_middle_pane

0x8c9d,	// (0x0002ac9b) cell_sctrl_middle_pane_g1_ParamLimits

0x8c9d,	// (0x0002ac9b) cell_sctrl_middle_pane_g1

0xc79b,	// (0x0002e799) cell_sctrl_middle_pane_g2_ParamLimits

0xc79b,	// (0x0002e799) cell_sctrl_middle_pane_g2

0x0001,

0xfd06,	// (0x00031d04) cell_sctrl_middle_pane_g_ParamLimits

0xfd06,	// (0x00031d04) cell_sctrl_middle_pane_g

0x1ba9,	// (0x00023ba7) bg_sctrl_middle_pane_g1

0x1bb9,	// (0x00023bb7) bg_sctrl_middle_pane_g2

0x1bb1,	// (0x00023baf) bg_sctrl_middle_pane_g3

0x1bc9,	// (0x00023bc7) bg_sctrl_middle_pane_g4

0x1bc1,	// (0x00023bbf) bg_sctrl_middle_pane_g5

0x1bd1,	// (0x00023bcf) bg_sctrl_middle_pane_g6

0x1bd9,	// (0x00023bd7) bg_sctrl_middle_pane_g7

0x1be9,	// (0x00023be7) bg_sctrl_middle_pane_g8

0x0007,

0xfd0b,	// (0x00031d09) bg_sctrl_middle_pane_g

0x1be1,	// (0x00023bdf) bg_sctrl_middle_pane_g8_copy1

0x1ba9,	// (0x00023ba7) bg_sctrl_sk_pane_g1

0x1bb1,	// (0x00023baf) bg_sctrl_sk_pane_g2

0x1bb9,	// (0x00023bb7) bg_sctrl_sk_pane_g3

0x0008,

0xf85a,	// (0x00031858) bg_sctrl_sk_pane_g

0x0dc1,	// (0x00022dbf) aid_size_touch_scroll_bar

0x1bc1,	// (0x00023bbf) bg_sctrl_sk_pane_g4

0x1bc9,	// (0x00023bc7) bg_sctrl_sk_pane_g5

0x1bd1,	// (0x00023bcf) bg_sctrl_sk_pane_g6

0x1bd9,	// (0x00023bd7) bg_sctrl_sk_pane_g7

0x1be1,	// (0x00023bdf) bg_sctrl_sk_pane_g8

0x1be9,	// (0x00023be7) bg_sctrl_sk_pane_g9

0x65ca,	// (0x000285c8) popup_fep_china_hwr2_fs_candidate_window

0xc009,	// (0x0002e007) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xc009,	// (0x0002e007) popup_fep_china_hwr2_fs_control_window

0x7a6f,	// (0x00029a6d) sctrl_sk_top_pane_g2

0x0001,

0xfd01,	// (0x00031cff) sctrl_sk_top_pane_g

0xec6b,	// (0x00030c69) aid_fep_china_hwr2_fs_cell_ParamLimits

0xec6b,	// (0x00030c69) aid_fep_china_hwr2_fs_cell

0xec7f,	// (0x00030c7d) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xec7f,	// (0x00030c7d) bg_popup_fep_shadow_pane_cp4

0xec96,	// (0x00030c94) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xec96,	// (0x00030c94) bg_popup_fep_shadow_pane_cp5

0xeca8,	// (0x00030ca6) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xeca8,	// (0x00030ca6) popup_fep_china_hwr2_fs_control_bar_grid

0xecbc,	// (0x00030cba) popup_fep_china_hwr2_fs_control_funtion_grid

0x49c9,	// (0x000269c7) aid_fep_china_hwr2_fs_candi_cell

0x07ef,	// (0x000227ed) bg_popup_fep_shadow_pane_cp6

0x49d3,	// (0x000269d1) popup_fep_china_hwr2_fs_candidate_grid

0xecc4,	// (0x00030cc2) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xecc4,	// (0x00030cc2) cell_fep_china_hwr2_fs_funtion_grid

0x3956,	// (0x00025954) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x49bb,	// (0x000269b9) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x49bb,	// (0x000269b9) cell_fep_china_hwr2_fs_funtion_grid_g1

0x49db,	// (0x000269d9) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x49db,	// (0x000269d9) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd1c,	// (0x00031d1a) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd1c,	// (0x00031d1a) cell_fep_china_hwr2_fs_funtion_grid_g

0xecdc,	// (0x00030cda) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xecdc,	// (0x00030cda) cell_fep_china_hwr2_fs_funtion_grid_t1

0xecf1,	// (0x00030cef) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xecf1,	// (0x00030cef) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd21,	// (0x00031d1f) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd21,	// (0x00031d1f) cell_fep_china_hwr2_fs_funtion_grid_t

0x49f1,	// (0x000269ef) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x49f9,	// (0x000269f7) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x4a01,	// (0x000269ff) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd26,	// (0x00031d24) popup_fep_china_hwr2_fs_control_bar_grid_g

0x4a09,	// (0x00026a07) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x4a09,	// (0x00026a07) cell_fep_china_hwr2_fs_candidate_grid

0x4a22,	// (0x00026a20) popup_fep_china_hwr2_fs_candidate_grid_g20

0x4a2a,	// (0x00026a28) popup_fep_china_hwr2_fs_candidate_grid_g21

0x3956,	// (0x00025954) cell_fep_china_hwr2_fs_candidate_grid_g1

0x3956,	// (0x00025954) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb41,	// (0x00031b3f) cell_fep_china_hwr2_fs_candidate_grid_g

0x4a32,	// (0x00026a30) cell_fep_china_hwr2_fs_candidate_grid_t1

0x1a0e,	// (0x00023a0c) clock_nsta_pane_cp_24_ParamLimits

0x1a0e,	// (0x00023a0c) clock_nsta_pane_cp_24

0x1a6b,	// (0x00023a69) indicator_nsta_pane_cp_24_ParamLimits

0x1a6b,	// (0x00023a69) indicator_nsta_pane_cp_24

0x2787,	// (0x00024785) heading_pane_g1

0x0001,

0xf8bf,	// (0x000318bd) heading_pane_g

0xe4a1,	// (0x0003049f) grid_sct_catagory_button_pane

0x2dad,	// (0x00024dab) scroll_pane_cp5_ParamLimits

0x3636,	// (0x00025634) button_value_adjust_pane_cp5_ParamLimits

0x3636,	// (0x00025634) button_value_adjust_pane_cp5

0x36f4,	// (0x000256f2) form2_midp_time_pane_ParamLimits

0x4a40,	// (0x00026a3e) cell_sct_catagory_button_pane_ParamLimits

0x4a40,	// (0x00026a3e) cell_sct_catagory_button_pane

0x391b,	// (0x00025919) bg_button_pane_cp01_ParamLimits

0x391b,	// (0x00025919) bg_button_pane_cp01

0x3956,	// (0x00025954) cell_sct_catagory_button_pane_g1

0xc47d,	// (0x0002e47b) popup_tb_extension_window

0xed0d,	// (0x00030d0b) aid_size_cell_ext_ParamLimits

0xed0d,	// (0x00030d0b) aid_size_cell_ext

0x0c9f,	// (0x00022c9d) bg_tb_trans_pane_cp1_ParamLimits

0x0c9f,	// (0x00022c9d) bg_tb_trans_pane_cp1

0xed33,	// (0x00030d31) grid_tb_ext_pane_ParamLimits

0xed33,	// (0x00030d31) grid_tb_ext_pane

0xed69,	// (0x00030d67) cell_tb_ext_pane_ParamLimits

0xed69,	// (0x00030d67) cell_tb_ext_pane

0xed8d,	// (0x00030d8b) cell_tb_ext_pane_g1_ParamLimits

0xed8d,	// (0x00030d8b) cell_tb_ext_pane_g1

0x4a52,	// (0x00026a50) cell_tb_ext_pane_t1

0x0a12,	// (0x00022a10) list_highlight_pane_cp11_ParamLimits

0x0a12,	// (0x00022a10) list_highlight_pane_cp11

0xbd48,	// (0x0002dd46) popup_uni_indicator_window_ParamLimits

0xbd48,	// (0x0002dd46) popup_uni_indicator_window

0x0e79,	// (0x00022e77) bg_popup_sub_pane_cp14

0x4a6d,	// (0x00026a6b) list_uniindi_pane

0x4a79,	// (0x00026a77) uniindi_top_pane

0x0a12,	// (0x00022a10) bg_uniindi_top_pane

0x4a98,	// (0x00026a96) uniindi_top_pane_g1

0x4aae,	// (0x00026aac) uniindi_top_pane_g2

0x0003,

0xfd2d,	// (0x00031d2b) uniindi_top_pane_g

0x4ad8,	// (0x00026ad6) uniindi_top_pane_t1

0x4b02,	// (0x00026b00) list_single_uniindi_pane_ParamLimits

0x4b02,	// (0x00026b00) list_single_uniindi_pane

0x3956,	// (0x00025954) bg_uniindi_top_pane_g1

0x4b14,	// (0x00026b12) list_single_uniindi_pane_g1

0x4b27,	// (0x00026b25) list_single_uniindi_pane_t1

0x56d5,	// (0x000276d3) control_bg_pane

0x4b4c,	// (0x00026b4a) bg_sctrl_sk_pane_cp1

0x4b55,	// (0x00026b53) bg_sctrl_sk_pane_cp2

0x4b5e,	// (0x00026b5c) control_bg_pane_g1

0x4b67,	// (0x00026b65) control_bg_pane_g2

0x0001,

0xfd36,	// (0x00031d34) control_bg_pane_g

0x34f7,	// (0x000254f5) cell_indicator_nsta_pane_g1_ParamLimits

0xe5a6,	// (0x000305a4) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa5,	// (0x00031aa3) cell_indicator_nsta_pane_g_ParamLimits

0x9cdd,	// (0x0002bcdb) form2_midp_time_pane_t1_ParamLimits

0x7738,	// (0x00029736) main_idle_act4_pane_ParamLimits

0x7738,	// (0x00029736) main_idle_act4_pane

0xc47d,	// (0x0002e47b) popup_tb_extension_window_ParamLimits

0xed53,	// (0x00030d51) tb_ext_find_pane_ParamLimits

0xed53,	// (0x00030d51) tb_ext_find_pane

0x4b70,	// (0x00026b6e) ai_gene_pane_1_cp1

0x18b1,	// (0x000238af) ai_gene_pane_2_cp1

0x4b78,	// (0x00026b76) list_single_idle_plugin_calendar_pane

0x4b81,	// (0x00026b7f) list_single_idle_plugin_notification_pane

0x4b8a,	// (0x00026b88) list_single_idle_plugin_player_pane

0xedaa,	// (0x00030da8) list_single_idle_plugin_shortcut_pane_ParamLimits

0xedaa,	// (0x00030da8) list_single_idle_plugin_shortcut_pane

0xedd2,	// (0x00030dd0) main_idle_act4_pane_t1

0xede8,	// (0x00030de6) main_idle_act4_pane_t2

0x0001,

0xfd3b,	// (0x00031d39) main_idle_act4_pane_t

0xedfe,	// (0x00030dfc) middle_sk_idle_act4_pane_ParamLimits

0xedfe,	// (0x00030dfc) middle_sk_idle_act4_pane

0xee1a,	// (0x00030e18) popup_clock_digital_analogue_window_cp2

0xee40,	// (0x00030e3e) shortcut_wheel_idle_act4_pane_ParamLimits

0xee40,	// (0x00030e3e) shortcut_wheel_idle_act4_pane

0x3956,	// (0x00025954) shortcut_wheel_idle_act4_pane_g1

0x3956,	// (0x00025954) shortcut_wheel_idle_act4_pane_g2

0x3956,	// (0x00025954) shortcut_wheel_idle_act4_pane_g3

0x3956,	// (0x00025954) shortcut_wheel_idle_act4_pane_g4

0x3956,	// (0x00025954) shortcut_wheel_idle_act4_pane_g5

0x4b93,	// (0x00026b91) shortcut_wheel_idle_act4_pane_g6

0x4b9b,	// (0x00026b99) shortcut_wheel_idle_act4_pane_g7

0x4ba3,	// (0x00026ba1) shortcut_wheel_idle_act4_pane_g8

0x4bab,	// (0x00026ba9) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd40,	// (0x00031d3e) shortcut_wheel_idle_act4_pane_g

0xc7a8,	// (0x0002e7a6) middle_sk_idle_act4_pane_g1_ParamLimits

0xc7a8,	// (0x0002e7a6) middle_sk_idle_act4_pane_g1

0xeebb,	// (0x00030eb9) middle_sk_idle_act4_pane_g2_ParamLimits

0xeebb,	// (0x00030eb9) middle_sk_idle_act4_pane_g2

0x0001,

0xfd63,	// (0x00031d61) middle_sk_idle_act4_pane_g_ParamLimits

0xfd63,	// (0x00031d61) middle_sk_idle_act4_pane_g

0xeed3,	// (0x00030ed1) middle_sk_idle_act4_pane_t1_ParamLimits

0xeed3,	// (0x00030ed1) middle_sk_idle_act4_pane_t1

0xef02,	// (0x00030f00) grid_ai_shortcut_pane_ParamLimits

0xef02,	// (0x00030f00) grid_ai_shortcut_pane

0xef1f,	// (0x00030f1d) list_highlight_pane_cp16_ParamLimits

0xef1f,	// (0x00030f1d) list_highlight_pane_cp16

0xef2c,	// (0x00030f2a) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xef2c,	// (0x00030f2a) list_single_idle_plugin_shortcut_pane_g1

0xef38,	// (0x00030f36) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xef38,	// (0x00030f36) list_single_idle_plugin_shortcut_pane_g2

0xef54,	// (0x00030f52) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xef54,	// (0x00030f52) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd68,	// (0x00031d66) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd68,	// (0x00031d66) list_single_idle_plugin_shortcut_pane_g

0xef69,	// (0x00030f67) cell_ai_shortcut_pane_ParamLimits

0xef69,	// (0x00030f67) cell_ai_shortcut_pane

0xef7f,	// (0x00030f7d) cell_ai_shortcut_pane_g1_ParamLimits

0xef7f,	// (0x00030f7d) cell_ai_shortcut_pane_g1

0x4b70,	// (0x00026b6e) ai_gene_pane_1_cp2

0x847d,	// (0x0002a47b) ai_gene_pane_2_cp2

0x8485,	// (0x0002a483) list_highlight_pane_cp15

0x848e,	// (0x0002a48c) list_single_idle_plugin_calendar_pane_g1

0x8485,	// (0x0002a483) list_highlight_pane_cp17

0x8496,	// (0x0002a494) list_single_idle_plugin_calendar_pane_g1_copy1

0x849e,	// (0x0002a49c) list_single_idle_plugin_player_pane_g1

0x2fcb,	// (0x00024fc9) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd6f,	// (0x00031d6d) list_single_idle_plugin_player_pane_g

0x84a6,	// (0x0002a4a4) list_single_idle_plugin_player_pane_t1

0x84b4,	// (0x0002a4b2) list_single_idle_plugin_player_pane_t2

0x84c2,	// (0x0002a4c0) list_single_idle_plugin_player_pane_t3

0x84d0,	// (0x0002a4ce) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd74,	// (0x00031d72) list_single_idle_plugin_player_pane_t

0x84de,	// (0x0002a4dc) wait_bar_pane_cp15

0x84e6,	// (0x0002a4e4) grid_ai_notification_pane

0x2fcb,	// (0x00024fc9) list_single_idle_plugin_notification_pane_g1

0xefa1,	// (0x00030f9f) cell_ai_notification_pane_ParamLimits

0xefa1,	// (0x00030f9f) cell_ai_notification_pane

0x84fc,	// (0x0002a4fa) cell_ai_notification_pane_g1

0x8504,	// (0x0002a502) cell_ai_notification_pane_t1

0xefae,	// (0x00030fac) tb_ext_find_button_pane

0xefb6,	// (0x00030fb4) tb_ext_find_pane_g1

0xefbe,	// (0x00030fbc) tb_ext_find_pane_t1

0x138b,	// (0x00023389) tb_ext_find_button_pane_g1

0x8530,	// (0x0002a52e) tb_ext_find_button_pane_g2

0x0001,

0xfd7d,	// (0x00031d7b) tb_ext_find_button_pane_g

0xedd2,	// (0x00030dd0) main_idle_act4_pane_t1_ParamLimits

0xede8,	// (0x00030de6) main_idle_act4_pane_t2_ParamLimits

0xfd3b,	// (0x00031d39) main_idle_act4_pane_t_ParamLimits

0xee1a,	// (0x00030e18) popup_clock_digital_analogue_window_cp2_ParamLimits

0xee30,	// (0x00030e2e) sat_plugin_idle_act4_pane_ParamLimits

0xee30,	// (0x00030e2e) sat_plugin_idle_act4_pane

0xefcc,	// (0x00030fca) sat_plugin_idle_act4_pane_t1_ParamLimits

0xefcc,	// (0x00030fca) sat_plugin_idle_act4_pane_t1

0xefe4,	// (0x00030fe2) sat_plugin_idle_act4_pane_t2_ParamLimits

0xefe4,	// (0x00030fe2) sat_plugin_idle_act4_pane_t2

0xeffc,	// (0x00030ffa) sat_plugin_idle_act4_pane_t3_ParamLimits

0xeffc,	// (0x00030ffa) sat_plugin_idle_act4_pane_t3

0xf014,	// (0x00031012) sat_plugin_idle_act4_pane_t4_ParamLimits

0xf014,	// (0x00031012) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd82,	// (0x00031d80) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd82,	// (0x00031d80) sat_plugin_idle_act4_pane_t

0x5798,	// (0x00027796) popup_battery_window_ParamLimits

0x5798,	// (0x00027796) popup_battery_window

0x0a12,	// (0x00022a10) bg_popup_sub_pane_cp25_ParamLimits

0x0a12,	// (0x00022a10) bg_popup_sub_pane_cp25

0x8585,	// (0x0002a583) popup_battery_window_g1_ParamLimits

0x8585,	// (0x0002a583) popup_battery_window_g1

0x8591,	// (0x0002a58f) popup_battery_window_t1_ParamLimits

0x8591,	// (0x0002a58f) popup_battery_window_t1

0x85a3,	// (0x0002a5a1) popup_battery_window_t2_ParamLimits

0x85a3,	// (0x0002a5a1) popup_battery_window_t2

0x0001,

0xfd8b,	// (0x00031d89) popup_battery_window_t_ParamLimits

0xfd8b,	// (0x00031d89) popup_battery_window_t

0xdba1,	// (0x0002fb9f) midp_canvas_pane_ParamLimits

0xdbf6,	// (0x0002fbf4) midp_keypad_pane_ParamLimits

0xdbf6,	// (0x0002fbf4) midp_keypad_pane

0x0fff,	// (0x00022ffd) main_midp_pane_ParamLimits

0x35d2,	// (0x000255d0) signal_pane_g2_cp_ParamLimits

0xf02c,	// (0x0003102a) aid_size_cell_midp_keypad_ParamLimits

0xf02c,	// (0x0003102a) aid_size_cell_midp_keypad

0xf04a,	// (0x00031048) midp_keyp_game_grid_pane_ParamLimits

0xf04a,	// (0x00031048) midp_keyp_game_grid_pane

0xf069,	// (0x00031067) midp_keyp_rocker_pane_ParamLimits

0xf069,	// (0x00031067) midp_keyp_rocker_pane

0xf0aa,	// (0x000310a8) midp_keyp_sk_left_pane_ParamLimits

0xf0aa,	// (0x000310a8) midp_keyp_sk_left_pane

0xf0fc,	// (0x000310fa) midp_keyp_sk_right_pane_ParamLimits

0xf0fc,	// (0x000310fa) midp_keyp_sk_right_pane

0x07ef,	// (0x000227ed) bg_button_pane_cp03

0xf148,	// (0x00031146) midp_keyp_sk_left_pane_g1

0x07ef,	// (0x000227ed) bg_button_pane_cp04

0xf148,	// (0x00031146) midp_keyp_sk_right_pane_g1

0x3956,	// (0x00025954) midp_keyp_rocker_pane_g1

0xf151,	// (0x0003114f) keyp_game_cell_pane_ParamLimits

0xf151,	// (0x0003114f) keyp_game_cell_pane

0x07ef,	// (0x000227ed) bg_button_pane_cp02

0xf173,	// (0x00031171) keyp_game_cell_pane_g1

0xbcf9,	// (0x0002dcf7) popup_fep_vkb2_window_ParamLimits

0xbcf9,	// (0x0002dcf7) popup_fep_vkb2_window

0xc7b6,	// (0x0002e7b4) aid_size_cell_vkb2_ParamLimits

0xc7b6,	// (0x0002e7b4) aid_size_cell_vkb2

0xc7ec,	// (0x0002e7ea) popup_fep_vkb2_window_g1_ParamLimits

0xc7ec,	// (0x0002e7ea) popup_fep_vkb2_window_g1

0xc83c,	// (0x0002e83a) vkb2_area_bottom_pane_ParamLimits

0xc83c,	// (0x0002e83a) vkb2_area_bottom_pane

0xc87a,	// (0x0002e878) vkb2_area_keypad_pane_ParamLimits

0xc87a,	// (0x0002e878) vkb2_area_keypad_pane

0xc8b8,	// (0x0002e8b6) vkb2_area_top_pane_ParamLimits

0xc8b8,	// (0x0002e8b6) vkb2_area_top_pane

0xc934,	// (0x0002e932) vkb2_top_entry_pane_ParamLimits

0xc934,	// (0x0002e932) vkb2_top_entry_pane

0xc961,	// (0x0002e95f) vkb2_top_grid_left_pane_ParamLimits

0xc961,	// (0x0002e95f) vkb2_top_grid_left_pane

0xc981,	// (0x0002e97f) vkb2_top_grid_right_pane_ParamLimits

0xc981,	// (0x0002e97f) vkb2_top_grid_right_pane

0x88de,	// (0x0002a8dc) vkb2_cell_keypad_pane_ParamLimits

0x88de,	// (0x0002a8dc) vkb2_cell_keypad_pane

0xc9c7,	// (0x0002e9c5) vkb2_area_bottom_grid_pane_ParamLimits

0xc9c7,	// (0x0002e9c5) vkb2_area_bottom_grid_pane

0xc9ed,	// (0x0002e9eb) vkb2_area_bottom_pane_g1_ParamLimits

0xc9ed,	// (0x0002e9eb) vkb2_area_bottom_pane_g1

0xca13,	// (0x0002ea11) vkb2_area_bottom_pane_g2_ParamLimits

0xca13,	// (0x0002ea11) vkb2_area_bottom_pane_g2

0xca44,	// (0x0002ea42) vkb2_area_bottom_pane_g3_ParamLimits

0xca44,	// (0x0002ea42) vkb2_area_bottom_pane_g3

0x0002,

0xfd90,	// (0x00031d8e) vkb2_area_bottom_pane_g_ParamLimits

0xfd90,	// (0x00031d8e) vkb2_area_bottom_pane_g

0x8a56,	// (0x0002aa54) vkb2_top_cell_left_pane_ParamLimits

0x8a56,	// (0x0002aa54) vkb2_top_cell_left_pane

0xf17c,	// (0x0003117a) vkb2_top_entry_pane_g1_ParamLimits

0xf17c,	// (0x0003117a) vkb2_top_entry_pane_g1

0xf18a,	// (0x00031188) vkb2_top_entry_pane_t1_ParamLimits

0xf18a,	// (0x00031188) vkb2_top_entry_pane_t1

0xa092,	// (0x0002c090) vkb2_top_entry_pane_t2_ParamLimits

0xa092,	// (0x0002c090) vkb2_top_entry_pane_t2

0xa0c4,	// (0x0002c0c2) vkb2_top_entry_pane_t3_ParamLimits

0xa0c4,	// (0x0002c0c2) vkb2_top_entry_pane_t3

0x0002,

0xfd97,	// (0x00031d95) vkb2_top_entry_pane_t_ParamLimits

0xfd97,	// (0x00031d95) vkb2_top_entry_pane_t

0xca9a,	// (0x0002ea98) vkb2_top_grid_right_pane_g1_ParamLimits

0xca9a,	// (0x0002ea98) vkb2_top_grid_right_pane_g1

0x8ab9,	// (0x0002aab7) vkb2_top_grid_right_pane_g2_ParamLimits

0x8ab9,	// (0x0002aab7) vkb2_top_grid_right_pane_g2

0x8ad1,	// (0x0002aacf) vkb2_top_grid_right_pane_g3_ParamLimits

0x8ad1,	// (0x0002aacf) vkb2_top_grid_right_pane_g3

0xcab0,	// (0x0002eaae) vkb2_top_grid_right_pane_g4_ParamLimits

0xcab0,	// (0x0002eaae) vkb2_top_grid_right_pane_g4

0x0003,

0xfd9e,	// (0x00031d9c) vkb2_top_grid_right_pane_g_ParamLimits

0xfd9e,	// (0x00031d9c) vkb2_top_grid_right_pane_g

0x8aff,	// (0x0002aafd) vkb2_top_cell_left_pane_g1

0x8b16,	// (0x0002ab14) vkb2_cell_keypad_pane_g1_ParamLimits

0x8b16,	// (0x0002ab14) vkb2_cell_keypad_pane_g1

0xa0da,	// (0x0002c0d8) vkb2_cell_keypad_pane_t1_ParamLimits

0xa0da,	// (0x0002c0d8) vkb2_cell_keypad_pane_t1

0x8b24,	// (0x0002ab22) vkb2_cell_bottom_grid_pane_ParamLimits

0x8b24,	// (0x0002ab22) vkb2_cell_bottom_grid_pane

0x8b5d,	// (0x0002ab5b) vkb2_cell_bottom_grid_pane_g1

0xee5f,	// (0x00030e5d) aid_call2_pane_cp02

0xee67,	// (0x00030e65) aid_call_pane_cp02

0xee6f,	// (0x00030e6d) clock_digital_number_pane_cp10

0xee77,	// (0x00030e75) clock_digital_number_pane_cp11

0xee7f,	// (0x00030e7d) clock_digital_number_pane_cp12

0xee87,	// (0x00030e85) clock_digital_number_pane_cp13

0xee8f,	// (0x00030e8d) clock_digital_separator_pane_cp10

0x138b,	// (0x00023389) popup_clock_digital_analogue_window_cp2_g1

0x138b,	// (0x00023389) popup_clock_digital_analogue_window_cp2_g2

0xee97,	// (0x00030e95) popup_clock_digital_analogue_window_cp2_g3

0x138b,	// (0x00023389) popup_clock_digital_analogue_window_cp2_g4

0xee97,	// (0x00030e95) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd53,	// (0x00031d51) popup_clock_digital_analogue_window_cp2_g

0xee9f,	// (0x00030e9d) popup_clock_digital_analogue_window_cp2_t1

0xeead,	// (0x00030eab) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd5e,	// (0x00031d5c) popup_clock_digital_analogue_window_cp2_t

0x3956,	// (0x00025954) clock_digital_number_pane_cp10_g1

0x3956,	// (0x00025954) clock_digital_number_pane_cp10_g2

0x0001,

0xfb41,	// (0x00031b3f) clock_digital_number_pane_cp10_g

0x3956,	// (0x00025954) clock_digital_separator_pane_cp10_g1

0x3956,	// (0x00025954) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb41,	// (0x00031b3f) clock_digital_separator_pane_cp10_g

0x4aba,	// (0x00026ab8) uniindi_top_pane_g3

0x4acb,	// (0x00026ac9) uniindi_top_pane_g4

0x8949,	// (0x0002a947) vkb2_row_keypad_pane_ParamLimits

0x8949,	// (0x0002a947) vkb2_row_keypad_pane

0x8b79,	// (0x0002ab77) vkb2_cell_t_keypad_pane_ParamLimits

0x8b79,	// (0x0002ab77) vkb2_cell_t_keypad_pane

0x8b86,	// (0x0002ab84) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x8b86,	// (0x0002ab84) vkb2_cell_t_keypad_pane_cp08

0x8b96,	// (0x0002ab94) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x8b96,	// (0x0002ab94) vkb2_cell_t_keypad_pane_cp09

0x8ba7,	// (0x0002aba5) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x8ba7,	// (0x0002aba5) vkb2_cell_t_keypad_pane_cp01

0x8bb7,	// (0x0002abb5) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x8bb7,	// (0x0002abb5) vkb2_cell_t_keypad_pane_cp02

0x8bc7,	// (0x0002abc5) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x8bc7,	// (0x0002abc5) vkb2_cell_t_keypad_pane_cp03

0x8bd7,	// (0x0002abd5) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x8bd7,	// (0x0002abd5) vkb2_cell_t_keypad_pane_cp04

0x8be7,	// (0x0002abe5) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x8be7,	// (0x0002abe5) vkb2_cell_t_keypad_pane_cp05

0x8bf7,	// (0x0002abf5) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x8bf7,	// (0x0002abf5) vkb2_cell_t_keypad_pane_cp06

0x8c07,	// (0x0002ac05) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x8c07,	// (0x0002ac05) vkb2_cell_t_keypad_pane_cp07

0x8c17,	// (0x0002ac15) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x8c17,	// (0x0002ac15) vkb2_cell_t_keypad_pane_cp10

0x7a6f,	// (0x00029a6d) vkb2_cell_t_keypad_pane_g1

0xa0f1,	// (0x0002c0ef) vkb2_cell_t_keypad_pane_t1

0x56d5,	// (0x000276d3) popup_grid_graphic2_window

0xf1c3,	// (0x000311c1) aid_size_cell_graphic2_ParamLimits

0xf1c3,	// (0x000311c1) aid_size_cell_graphic2

0xf201,	// (0x000311ff) bg_popup_window_pane_cp21_ParamLimits

0xf201,	// (0x000311ff) bg_popup_window_pane_cp21

0xf20f,	// (0x0003120d) graphic2_pages_pane_ParamLimits

0xf20f,	// (0x0003120d) graphic2_pages_pane

0xf258,	// (0x00031256) grid_graphic2_control_pane_ParamLimits

0xf258,	// (0x00031256) grid_graphic2_control_pane

0xf296,	// (0x00031294) grid_graphic2_pane_ParamLimits

0xf296,	// (0x00031294) grid_graphic2_pane

0xf305,	// (0x00031303) cell_graphic2_pane

0x56d5,	// (0x000276d3) main_comp_mode_pane

0x4736,	// (0x00026734) list_ai3_gene_pane_ParamLimits

0xebb3,	// (0x00030bb1) bg_popup_window_pane_cp19_ParamLimits

0x48a6,	// (0x000268a4) bg_touch_area_indi_pane_ParamLimits

0x48a6,	// (0x000268a4) bg_touch_area_indi_pane

0x48bc,	// (0x000268ba) bg_touch_area_indi_pane_cp01_ParamLimits

0x48bc,	// (0x000268ba) bg_touch_area_indi_pane_cp01

0x48d2,	// (0x000268d0) bg_touch_area_indi_pane_cp02_ParamLimits

0x48d2,	// (0x000268d0) bg_touch_area_indi_pane_cp02

0x48e8,	// (0x000268e6) bg_touch_area_indi_pane_cp03_ParamLimits

0x48e8,	// (0x000268e6) bg_touch_area_indi_pane_cp03

0x48fe,	// (0x000268fc) popup_slider_window_g1_ParamLimits

0x491a,	// (0x00026918) popup_slider_window_g2_ParamLimits

0x4936,	// (0x00026934) popup_slider_window_g3_ParamLimits

0xfce8,	// (0x00031ce6) popup_slider_window_g_ParamLimits

0x4952,	// (0x00026950) popup_slider_window_t1_ParamLimits

0x4996,	// (0x00026994) small_volume_slider_vertical_pane_ParamLimits

0xf305,	// (0x00031303) cell_graphic2_pane_ParamLimits

0xf350,	// (0x0003134e) bg_button_pane_cp10_ParamLimits

0xf350,	// (0x0003134e) bg_button_pane_cp10

0xf361,	// (0x0003135f) bg_button_pane_cp11_ParamLimits

0xf361,	// (0x0003135f) bg_button_pane_cp11

0xf372,	// (0x00031370) graphic2_pages_pane_g1_ParamLimits

0xf372,	// (0x00031370) graphic2_pages_pane_g1

0xf38d,	// (0x0003138b) graphic2_pages_pane_g2_ParamLimits

0xf38d,	// (0x0003138b) graphic2_pages_pane_g2

0x0001,

0xfdac,	// (0x00031daa) graphic2_pages_pane_g_ParamLimits

0xfdac,	// (0x00031daa) graphic2_pages_pane_g

0xf3a5,	// (0x000313a3) graphic2_pages_pane_t1_ParamLimits

0xf3a5,	// (0x000313a3) graphic2_pages_pane_t1

0xf3bd,	// (0x000313bb) cell_graphic2_control_pane_ParamLimits

0xf3bd,	// (0x000313bb) cell_graphic2_control_pane

0xf3e7,	// (0x000313e5) cell_graphic2_pane_g1_ParamLimits

0xf3e7,	// (0x000313e5) cell_graphic2_pane_g1

0xcac6,	// (0x0002eac4) cell_graphic2_pane_g2_ParamLimits

0xcac6,	// (0x0002eac4) cell_graphic2_pane_g2

0xf3f4,	// (0x000313f2) cell_graphic2_pane_g3_ParamLimits

0xf3f4,	// (0x000313f2) cell_graphic2_pane_g3

0xcad3,	// (0x0002ead1) cell_graphic2_pane_g4_ParamLimits

0xcad3,	// (0x0002ead1) cell_graphic2_pane_g4

0xf401,	// (0x000313ff) cell_graphic2_pane_g5_ParamLimits

0xf401,	// (0x000313ff) cell_graphic2_pane_g5

0x0004,

0xfdb1,	// (0x00031daf) cell_graphic2_pane_g_ParamLimits

0xfdb1,	// (0x00031daf) cell_graphic2_pane_g

0xf421,	// (0x0003141f) cell_graphic2_pane_t1_ParamLimits

0xf421,	// (0x0003141f) cell_graphic2_pane_t1

0x277b,	// (0x00024779) grid_highlight_pane_cp11_ParamLimits

0x277b,	// (0x00024779) grid_highlight_pane_cp11

0x0a12,	// (0x00022a10) bg_button_pane_cp05

0xf456,	// (0x00031454) cell_graphic2_control_pane_g1

0x3956,	// (0x00025954) bg_touch_area_indi_pane_g1

0xa103,	// (0x0002c101) aid_cmod_rocker_key_size

0xa10d,	// (0x0002c10b) aid_cmode_itu_key_size

0xa117,	// (0x0002c115) main_cmode_video_pane

0xa11f,	// (0x0002c11d) main_comp_mode_itu_pane

0xa129,	// (0x0002c127) main_comp_mode_rocker_pane

0xa131,	// (0x0002c12f) cell_cmode_rocker_pane_ParamLimits

0xa131,	// (0x0002c12f) cell_cmode_rocker_pane

0xa143,	// (0x0002c141) cell_cmode_itu_pane_ParamLimits

0xa143,	// (0x0002c141) cell_cmode_itu_pane

0x0e79,	// (0x00022e77) bg_button_pane_cp06_ParamLimits

0x0e79,	// (0x00022e77) bg_button_pane_cp06

0x3b82,	// (0x00025b80) cell_cmode_rocker_pane_g1_ParamLimits

0x3b82,	// (0x00025b80) cell_cmode_rocker_pane_g1

0x49bb,	// (0x000269b9) cell_cmode_rocker_pane_g2_ParamLimits

0x49bb,	// (0x000269b9) cell_cmode_rocker_pane_g2

0x0001,

0xfdc1,	// (0x00031dbf) cell_cmode_rocker_pane_g_ParamLimits

0xfdc1,	// (0x00031dbf) cell_cmode_rocker_pane_g

0x07ef,	// (0x000227ed) bg_button_pane_cp07

0xa158,	// (0x0002c156) cell_cmode_itu_pane_g1

0xa161,	// (0x0002c15f) cell_cmode_itu_pane_t1

0xa16f,	// (0x0002c16d) cell_cmode_itu_pane_t2

0x0001,

0xfdc6,	// (0x00031dc4) cell_cmode_itu_pane_t

0x4b3c,	// (0x00026b3a) aid_touch_ctrl_left

0x4b44,	// (0x00026b42) aid_touch_ctrl_right

0x07ef,	// (0x000227ed) compa_mode_pane

0xf47e,	// (0x0003147c) aid_cmod_rocker_key_size_cp

0xf488,	// (0x00031486) aid_cmode_itu_key_size_cp

0xa17d,	// (0x0002c17b) compa_mode_pane_g1

0xa185,	// (0x0002c183) compa_mode_pane_g2

0xa18d,	// (0x0002c18b) compa_mode_pane_g3

0x0002,

0xfdcb,	// (0x00031dc9) compa_mode_pane_g

0xf492,	// (0x00031490) main_comp_mode_itu_pane_cp

0xf49c,	// (0x0003149a) main_comp_mode_rocker_pane_cp

0xf4a6,	// (0x000314a4) cell_cmode_itu_pane_cp_ParamLimits

0xf4a6,	// (0x000314a4) cell_cmode_itu_pane_cp

0xf4bb,	// (0x000314b9) cell_cmode_rocker_pane_cp_ParamLimits

0xf4bb,	// (0x000314b9) cell_cmode_rocker_pane_cp

0x0e79,	// (0x00022e77) bg_button_pane_cp06_cp_ParamLimits

0x0e79,	// (0x00022e77) bg_button_pane_cp06_cp

0x3b82,	// (0x00025b80) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x3b82,	// (0x00025b80) cell_cmode_rocker_pane_g1_cp

0x3956,	// (0x00025954) cell_cmode_rocker_pane_g2_cp

0x07ef,	// (0x000227ed) bg_button_pane_cp07_cp

0xf4cd,	// (0x000314cb) cell_cmode_itu_pane_g1_cp

0xf4d6,	// (0x000314d4) cell_cmode_itu_pane_t1_cp

0xf4e4,	// (0x000314e2) cell_cmode_itu_pane_t2_cp

0xe3a7,	// (0x000303a5) settings_code_pane_cp2

0x08df,	// (0x000228dd) bg_popup_window_pane_cp3_ParamLimits

0x0c10,	// (0x00022c0e) heading_pane_cp3_ParamLimits

0x0c1c,	// (0x00022c1a) listscroll_popup_graphic_pane_ParamLimits

0x7746,	// (0x00029744) fep_hwr_aid_pane_ParamLimits

0x811f,	// (0x0002a11d) aid_touch_sctrl_top_ParamLimits

0x813a,	// (0x0002a138) sctrl_sk_top_pane_g1_ParamLimits

0x7a6f,	// (0x00029a6d) sctrl_sk_top_pane_g2_ParamLimits

0xfd01,	// (0x00031cff) sctrl_sk_top_pane_g_ParamLimits

0x8147,	// (0x0002a145) sctrl_sk_top_pane_t1_ParamLimits

0x811f,	// (0x0002a11d) aid_touch_sctrl_bottom_ParamLimits

0x8147,	// (0x0002a145) sctrl_sk_bottom_pane_t1_ParamLimits

0x4a86,	// (0x00026a84) aid_area_touch_clock

0xc8f6,	// (0x0002e8f4) aid_vkb2_area_top_pane_cell_ParamLimits

0xc8f6,	// (0x0002e8f4) aid_vkb2_area_top_pane_cell

0xc9a1,	// (0x0002e99f) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xc9a1,	// (0x0002e99f) aid_vkb2_area_bottom_pane_cell

0xa08a,	// (0x0002c088) popup_char_count_window

0xa195,	// (0x0002c193) popup_char_count_window_g1

0xa19e,	// (0x0002c19c) popup_char_count_window_g2

0xa1a7,	// (0x0002c1a5) popup_char_count_window_g3

0x0002,

0xfdd2,	// (0x00031dd0) popup_char_count_window_g

0xa1b0,	// (0x0002c1ae) popup_char_count_window_t1

0x872e,	// (0x0002a72c) popup_fep_char_preview_window_ParamLimits

0x872e,	// (0x0002a72c) popup_fep_char_preview_window

0xc916,	// (0x0002e914) vkb2_top_candi_pane_ParamLimits

0xc916,	// (0x0002e914) vkb2_top_candi_pane

0xf4f2,	// (0x000314f0) cell_vkb2_top_candi_pane_ParamLimits

0xf4f2,	// (0x000314f0) cell_vkb2_top_candi_pane

0x8c2c,	// (0x0002ac2a) bg_popup_fep_char_preview_window_ParamLimits

0x8c2c,	// (0x0002ac2a) bg_popup_fep_char_preview_window

0x8c3a,	// (0x0002ac38) popup_fep_char_preview_window_t1_ParamLimits

0x8c3a,	// (0x0002ac38) popup_fep_char_preview_window_t1

0xa1be,	// (0x0002c1bc) bg_popup_fep_char_preview_window_g1

0xa1c6,	// (0x0002c1c4) bg_popup_fep_char_preview_window_g2

0xa1ce,	// (0x0002c1cc) bg_popup_fep_char_preview_window_g3

0xa1d6,	// (0x0002c1d4) bg_popup_fep_char_preview_window_g4

0xa1de,	// (0x0002c1dc) bg_popup_fep_char_preview_window_g5

0x8c74,	// (0x0002ac72) bg_popup_fep_char_preview_window_g6

0xa1e6,	// (0x0002c1e4) bg_popup_fep_char_preview_window_g7

0xa1ee,	// (0x0002c1ec) bg_popup_fep_char_preview_window_g8

0xa1f6,	// (0x0002c1f4) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdd9,	// (0x00031dd7) bg_popup_fep_char_preview_window_g

0x7a6f,	// (0x00029a6d) cell_vkb2_top_candi_pane_g1_ParamLimits

0x7a6f,	// (0x00029a6d) cell_vkb2_top_candi_pane_g1

0x7a7d,	// (0x00029a7b) cell_vkb2_top_candi_pane_g2_ParamLimits

0x7a7d,	// (0x00029a7b) cell_vkb2_top_candi_pane_g2

0x9cf0,	// (0x0002bcee) cell_vkb2_top_candi_pane_g3_ParamLimits

0x9cf0,	// (0x0002bcee) cell_vkb2_top_candi_pane_g3

0x8c7c,	// (0x0002ac7a) cell_vkb2_top_candi_pane_g4_ParamLimits

0x8c7c,	// (0x0002ac7a) cell_vkb2_top_candi_pane_g4

0x3dd2,	// (0x00025dd0) cell_vkb2_top_candi_pane_g5_ParamLimits

0x3dd2,	// (0x00025dd0) cell_vkb2_top_candi_pane_g5

0x8c9d,	// (0x0002ac9b) cell_vkb2_top_candi_pane_g6_ParamLimits

0x8c9d,	// (0x0002ac9b) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdec,	// (0x00031dea) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdec,	// (0x00031dea) cell_vkb2_top_candi_pane_g

0x8cab,	// (0x0002aca9) cell_vkb2_top_candi_pane_t1

0x7123,	// (0x00029121) aid_size_touch_slider_mark_ParamLimits

0x7123,	// (0x00029121) aid_size_touch_slider_mark

0xf243,	// (0x00031241) grid_graphic2_catg_pane_ParamLimits

0xf243,	// (0x00031241) grid_graphic2_catg_pane

0xf2da,	// (0x000312d8) popup_grid_graphic2_window_t1_ParamLimits

0xf2da,	// (0x000312d8) popup_grid_graphic2_window_t1

0xf2ef,	// (0x000312ed) popup_grid_graphic2_window_t2_ParamLimits

0xf2ef,	// (0x000312ed) popup_grid_graphic2_window_t2

0x0001,

0xfda7,	// (0x00031da5) popup_grid_graphic2_window_t_ParamLimits

0xfda7,	// (0x00031da5) popup_grid_graphic2_window_t

0x0a12,	// (0x00022a10) bg_button_pane_cp05_ParamLimits

0xf456,	// (0x00031454) cell_graphic2_control_pane_g1_ParamLimits

0x4b02,	// (0x00026b00) cell_graphic2_catg_pane_ParamLimits

0x4b02,	// (0x00026b00) cell_graphic2_catg_pane

0x07ef,	// (0x000227ed) bg_button_pane_cp12

0xf53c,	// (0x0003153a) cell_graphic2_catg_pane_g1

0x4a52,	// (0x00026a50) cell_tb_ext_pane_t1_ParamLimits

0x8a76,	// (0x0002aa74) vkb2_top_cell_right_narrow_pane_ParamLimits

0x8a76,	// (0x0002aa74) vkb2_top_cell_right_narrow_pane

0x8a8e,	// (0x0002aa8c) vkb2_top_cell_right_wide_pane_ParamLimits

0x8a8e,	// (0x0002aa8c) vkb2_top_cell_right_wide_pane

0x7738,	// (0x00029736) bg_vkb2_func_pane_ParamLimits

0x7738,	// (0x00029736) bg_vkb2_func_pane

0x8aff,	// (0x0002aafd) vkb2_top_cell_left_pane_g1_ParamLimits

0x7738,	// (0x00029736) bg_vkb2_fuc_pane_cp03_ParamLimits

0x7738,	// (0x00029736) bg_vkb2_fuc_pane_cp03

0x8b5d,	// (0x0002ab5b) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x1bb9,	// (0x00023bb7) bg_vkb2_func_pane_g1

0x1bb1,	// (0x00023baf) bg_vkb2_func_pane_g2

0x1bc1,	// (0x00023bbf) bg_vkb2_func_pane_g3

0x1bc9,	// (0x00023bc7) bg_vkb2_func_pane_g4

0x1bd1,	// (0x00023bcf) bg_vkb2_func_pane_g5

0x1bd9,	// (0x00023bd7) bg_vkb2_func_pane_g6

0x1be9,	// (0x00023be7) bg_vkb2_func_pane_g7

0x1be1,	// (0x00023bdf) bg_vkb2_func_pane_g8

0x1ba9,	// (0x00023ba7) bg_vkb2_func_pane_g9

0x0008,

0xfdf9,	// (0x00031df7) bg_vkb2_func_pane_g

0x7738,	// (0x00029736) bg_vkb2_fuc_pane_cp01_ParamLimits

0x7738,	// (0x00029736) bg_vkb2_fuc_pane_cp01

0x8aff,	// (0x0002aafd) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x8aff,	// (0x0002aafd) vkb2_top_cell_right_wide_pane_g1

0x7738,	// (0x00029736) bg_vkb2_fuc_pane_cp02_ParamLimits

0x7738,	// (0x00029736) bg_vkb2_fuc_pane_cp02

0x8b5d,	// (0x0002ab5b) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x8b5d,	// (0x0002ab5b) vkb2_top_cell_right_narrow_pane_g1

0xeb01,	// (0x00030aff) aid_touch_area_decrease_ParamLimits

0xeb01,	// (0x00030aff) aid_touch_area_decrease

0xeb2f,	// (0x00030b2d) aid_touch_area_increase_ParamLimits

0xeb2f,	// (0x00030b2d) aid_touch_area_increase

0xeb57,	// (0x00030b55) aid_touch_area_mute_ParamLimits

0xeb57,	// (0x00030b55) aid_touch_area_mute

0xeb7f,	// (0x00030b7d) aid_touch_area_slider_ParamLimits

0xeb7f,	// (0x00030b7d) aid_touch_area_slider

0xebbf,	// (0x00030bbd) popup_slider_window_g4_ParamLimits

0xebbf,	// (0x00030bbd) popup_slider_window_g4

0xebe7,	// (0x00030be5) popup_slider_window_g5_ParamLimits

0xebe7,	// (0x00030be5) popup_slider_window_g5

0xec1b,	// (0x00030c19) popup_slider_window_g6_ParamLimits

0xec1b,	// (0x00030c19) popup_slider_window_g6

0x497e,	// (0x0002697c) popup_slider_window_t2_ParamLimits

0x497e,	// (0x0002697c) popup_slider_window_t2

0x0001,

0xfcf5,	// (0x00031cf3) popup_slider_window_t_ParamLimits

0xfcf5,	// (0x00031cf3) popup_slider_window_t

0xec37,	// (0x00030c35) slider_pane_ParamLimits

0xec37,	// (0x00030c35) slider_pane

0xa1fe,	// (0x0002c1fc) slider_pane_g1_ParamLimits

0xa1fe,	// (0x0002c1fc) slider_pane_g1

0xa212,	// (0x0002c210) slider_pane_g2_ParamLimits

0xa212,	// (0x0002c210) slider_pane_g2

0xa228,	// (0x0002c226) slider_pane_g3_ParamLimits

0xa228,	// (0x0002c226) slider_pane_g3

0x0003,

0xfe0c,	// (0x00031e0a) slider_pane_g_ParamLimits

0xfe0c,	// (0x00031e0a) slider_pane_g

0xc4b9,	// (0x0002e4b7) popup_tb_float_extension_window_ParamLimits

0xc4b9,	// (0x0002e4b7) popup_tb_float_extension_window

0xa254,	// (0x0002c252) aid_size_cell_tb_float_ext

0x07ef,	// (0x000227ed) bg_popup_sub_window_cp28

0xa25f,	// (0x0002c25d) grid_tb_float_ext_pane

0xa267,	// (0x0002c265) cell_tb_float_ext_pane_ParamLimits

0xa267,	// (0x0002c265) cell_tb_float_ext_pane

0xa27f,	// (0x0002c27d) cell_tb_float_ext_pane_g1

0xa288,	// (0x0002c286) grid_highlight_pane_cp12

0xc71e,	// (0x0002e71c) cell_last_hwr_side_pane_ParamLimits

0xc71e,	// (0x0002e71c) cell_last_hwr_side_pane

0x3956,	// (0x00025954) cell_last_hwr_side_pane_g1

0xa291,	// (0x0002c28f) cell_last_hwr_side_pane_g2

0x0001,

0xfe15,	// (0x00031e13) cell_last_hwr_side_pane_g

0xca75,	// (0x0002ea73) vkb2_area_bottom_space_btn_pane_ParamLimits

0xca75,	// (0x0002ea73) vkb2_area_bottom_space_btn_pane

0x7a6f,	// (0x00029a6d) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xa0f1,	// (0x0002c0ef) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x8cab,	// (0x0002aca9) cell_vkb2_top_candi_pane_t1_ParamLimits

0x8cc1,	// (0x0002acbf) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x8cc1,	// (0x0002acbf) vkb2_area_bottom_space_btn_pane_g1

0x8cf7,	// (0x0002acf5) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x8cf7,	// (0x0002acf5) vkb2_area_bottom_space_btn_pane_g2

0x8d2d,	// (0x0002ad2b) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x8d2d,	// (0x0002ad2b) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe1a,	// (0x00031e18) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe1a,	// (0x00031e18) vkb2_area_bottom_space_btn_pane_g

0x77f5,	// (0x000297f3) cel_fep_hwr_func_pane_ParamLimits

0x77f5,	// (0x000297f3) cel_fep_hwr_func_pane

0xc6f3,	// (0x0002e6f1) cell_hwr_side_button_pane_ParamLimits

0xc6f3,	// (0x0002e6f1) cell_hwr_side_button_pane

0x4a86,	// (0x00026a84) aid_area_touch_clock_ParamLimits

0x0a12,	// (0x00022a10) bg_uniindi_top_pane_ParamLimits

0x4a98,	// (0x00026a96) uniindi_top_pane_g1_ParamLimits

0x4aae,	// (0x00026aac) uniindi_top_pane_g2_ParamLimits

0x4aba,	// (0x00026ab8) uniindi_top_pane_g3_ParamLimits

0x4acb,	// (0x00026ac9) uniindi_top_pane_g4_ParamLimits

0xfd2d,	// (0x00031d2b) uniindi_top_pane_g_ParamLimits

0x4ad8,	// (0x00026ad6) uniindi_top_pane_t1_ParamLimits

0x0a12,	// (0x00022a10) bg_vkb2_func_pane_cp01_ParamLimits

0x0a12,	// (0x00022a10) bg_vkb2_func_pane_cp01

0xa29a,	// (0x0002c298) cel_fep_hwr_func_pane_g1_ParamLimits

0xa29a,	// (0x0002c298) cel_fep_hwr_func_pane_g1

0x0a12,	// (0x00022a10) bg_vkb2_func_pane_cp02_ParamLimits

0x0a12,	// (0x00022a10) bg_vkb2_func_pane_cp02

0xa29a,	// (0x0002c298) cell_hwr_side_button_pane_g1_ParamLimits

0xa29a,	// (0x0002c298) cell_hwr_side_button_pane_g1

0x1acd,	// (0x00023acb) status_pane_g4_ParamLimits

0x1acd,	// (0x00023acb) status_pane_g4

0x1ae5,	// (0x00023ae3) status_pane_t1

0x375c,	// (0x0002575a) form2_midp_gauge_slider_cont_pane

0x3764,	// (0x00025762) form2_midp_gauge_slider_pane_t1_ParamLimits

0xe66b,	// (0x00030669) form2_midp_gauge_slider_pane_t2_ParamLimits

0xe67d,	// (0x0003067b) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf4,	// (0x00031af2) form2_midp_gauge_slider_pane_t_ParamLimits

0x3776,	// (0x00025774) form2_midp_slider_pane_ParamLimits

0x86ee,	// (0x0002a6ec) aid_size_cell_func_vkb2_ParamLimits

0x86ee,	// (0x0002a6ec) aid_size_cell_func_vkb2

0xa240,	// (0x0002c23e) slider_pane_g4_ParamLimits

0xa240,	// (0x0002c23e) slider_pane_g4

0xcae0,	// (0x0002eade) form2_midp_gauge_slider_pane_t2_cp01

0xcaee,	// (0x0002eaec) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xcaee,	// (0x0002eaec) form2_midp_gauge_slider_pane_t3_cp01

0x8d9e,	// (0x0002ad9c) form2_midp_slider_pane_cp01

0x07ef,	// (0x000227ed) navi_smil_pane

0xa2ca,	// (0x0002c2c8) navi_smil_pane_g1

0xa2d2,	// (0x0002c2d0) navi_smil_pane_t1

0xa2a8,	// (0x0002c2a6) form2_midp_slider_pane_g1

0xa2b1,	// (0x0002c2af) form2_midp_slider_pane_g2

0xa2b9,	// (0x0002c2b7) form2_midp_slider_pane_g3

0xa2a8,	// (0x0002c2a6) form2_midp_slider_pane_g4

0xf545,	// (0x00031543) form2_midp_slider_pane_g5

0x0004,

0xfe23,	// (0x00031e21) form2_midp_slider_pane_g

0x8d63,	// (0x0002ad61) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x8d63,	// (0x0002ad61) vkb2_area_bottom_space_btn_pane_g4

0xde10,	// (0x0002fe0e) lc0_navi_pane_ParamLimits

0xde10,	// (0x0002fe0e) lc0_navi_pane

0xde7a,	// (0x0002fe78) lc0_stat_indi_pane_ParamLimits

0xde7a,	// (0x0002fe78) lc0_stat_indi_pane

0xde8f,	// (0x0002fe8d) ls0_title_pane_ParamLimits

0xde8f,	// (0x0002fe8d) ls0_title_pane

0x0e79,	// (0x00022e77) bg_popup_sub_pane_cp14_ParamLimits

0x4a6d,	// (0x00026a6b) list_uniindi_pane_ParamLimits

0x4a79,	// (0x00026a77) uniindi_top_pane_ParamLimits

0x4b14,	// (0x00026b12) list_single_uniindi_pane_g1_ParamLimits

0x4b27,	// (0x00026b25) list_single_uniindi_pane_t1_ParamLimits

0xcb0b,	// (0x0002eb09) lc0_stat_clock_pane_ParamLimits

0xcb0b,	// (0x0002eb09) lc0_stat_clock_pane

0x0015,	// (0x00022013) lc0_stat_indi_pane_g1_ParamLimits

0x0015,	// (0x00022013) lc0_stat_indi_pane_g1

0x0008,	// (0x00022006) lc0_stat_indi_pane_g2_ParamLimits

0x0008,	// (0x00022006) lc0_stat_indi_pane_g2

0x0001,

0xfe2e,	// (0x00031e2c) lc0_stat_indi_pane_g_ParamLimits

0xfe2e,	// (0x00031e2c) lc0_stat_indi_pane_g

0xcb18,	// (0x0002eb16) lc0_uni_indicator_pane_ParamLimits

0xcb18,	// (0x0002eb16) lc0_uni_indicator_pane

0xa2e0,	// (0x0002c2de) ls0_title_pane_g1_ParamLimits

0xa2e0,	// (0x0002c2de) ls0_title_pane_g1

0x002f,	// (0x0002202d) ls0_title_pane_t1_ParamLimits

0x002f,	// (0x0002202d) ls0_title_pane_t1

0xcb25,	// (0x0002eb23) lc0_uni_indicator_pane_g1_ParamLimits

0xcb25,	// (0x0002eb23) lc0_uni_indicator_pane_g1

0xa2f4,	// (0x0002c2f2) lc0_stat_clock_pane_t1

0x56d5,	// (0x000276d3) main_ai5_pane

0xa302,	// (0x0002c300) ai5_sk_pane_ParamLimits

0xa302,	// (0x0002c300) ai5_sk_pane

0x0072,	// (0x00022070) cell_ai5_widget_pane_ParamLimits

0x0072,	// (0x00022070) cell_ai5_widget_pane

0xa30f,	// (0x0002c30d) aid_size_cell_widget_grid

0xa31c,	// (0x0002c31a) bg_ai5_widget_pane_ParamLimits

0xa31c,	// (0x0002c31a) bg_ai5_widget_pane

0x00ff,	// (0x000220fd) cell_ai5_widget_pane_g2

0x0113,	// (0x00022111) cell_ai5_widget_pane_g3

0x012d,	// (0x0002212b) cell_ai5_widget_pane_g4

0x013d,	// (0x0002213b) cell_ai5_widget_pane_g5

0x014d,	// (0x0002214b) cell_ai5_widget_pane_g6

0x0159,	// (0x00022157) cell_ai5_widget_pane_g7

0x01a1,	// (0x0002219f) cell_ai5_widget_pane_t1_ParamLimits

0x01a1,	// (0x0002219f) cell_ai5_widget_pane_t1

0x01be,	// (0x000221bc) cell_ai5_widget_pane_t2_ParamLimits

0x01be,	// (0x000221bc) cell_ai5_widget_pane_t2

0x01d6,	// (0x000221d4) cell_ai5_widget_pane_t3_ParamLimits

0x01d6,	// (0x000221d4) cell_ai5_widget_pane_t3

0x01ee,	// (0x000221ec) cell_ai5_widget_pane_t4_ParamLimits

0x01ee,	// (0x000221ec) cell_ai5_widget_pane_t4

0x0214,	// (0x00022212) cell_ai5_widget_pane_t5_ParamLimits

0x0214,	// (0x00022212) cell_ai5_widget_pane_t5

0xa354,	// (0x0002c352) cell_ai5_widget_pane_t6_ParamLimits

0xa354,	// (0x0002c352) cell_ai5_widget_pane_t6

0xa366,	// (0x0002c364) cell_ai5_widget_pane_t7_ParamLimits

0xa366,	// (0x0002c364) cell_ai5_widget_pane_t7

0x0233,	// (0x00022231) cell_ai5_widget_pane_t8_ParamLimits

0x0233,	// (0x00022231) cell_ai5_widget_pane_t8

0x0009,

0xfe48,	// (0x00031e46) cell_ai5_widget_pane_t_ParamLimits

0xfe48,	// (0x00031e46) cell_ai5_widget_pane_t

0x0292,	// (0x00022290) grid_ai5_widget_pane

0x0e79,	// (0x00022e77) highlight_cell_ai5_widget_pane_ParamLimits

0x0e79,	// (0x00022e77) highlight_cell_ai5_widget_pane

0x029e,	// (0x0002229c) ai5_sk_left_pane

0x02a8,	// (0x000222a6) ai5_sk_middle_pane

0x02b2,	// (0x000222b0) ai5_sk_right_pane

0xa37f,	// (0x0002c37d) bg_ai5_widget_pane_g1_ParamLimits

0xa37f,	// (0x0002c37d) bg_ai5_widget_pane_g1

0xa38b,	// (0x0002c389) bg_ai5_widget_pane_g2_ParamLimits

0xa38b,	// (0x0002c389) bg_ai5_widget_pane_g2

0xa397,	// (0x0002c395) bg_ai5_widget_pane_g3_ParamLimits

0xa397,	// (0x0002c395) bg_ai5_widget_pane_g3

0xa3a3,	// (0x0002c3a1) bg_ai5_widget_pane_g4_ParamLimits

0xa3a3,	// (0x0002c3a1) bg_ai5_widget_pane_g4

0xa3af,	// (0x0002c3ad) bg_ai5_widget_pane_g5_ParamLimits

0xa3af,	// (0x0002c3ad) bg_ai5_widget_pane_g5

0xa3bb,	// (0x0002c3b9) bg_ai5_widget_pane_g6_ParamLimits

0xa3bb,	// (0x0002c3b9) bg_ai5_widget_pane_g6

0xa3c7,	// (0x0002c3c5) bg_ai5_widget_pane_g7_ParamLimits

0xa3c7,	// (0x0002c3c5) bg_ai5_widget_pane_g7

0xa3d3,	// (0x0002c3d1) bg_ai5_widget_pane_g8_ParamLimits

0xa3d3,	// (0x0002c3d1) bg_ai5_widget_pane_g8

0xa3df,	// (0x0002c3dd) bg_ai5_widget_pane_g9_ParamLimits

0xa3df,	// (0x0002c3dd) bg_ai5_widget_pane_g9

0x0008,

0xfe5d,	// (0x00031e5b) bg_ai5_widget_pane_g_ParamLimits

0xfe5d,	// (0x00031e5b) bg_ai5_widget_pane_g

0xa40f,	// (0x0002c40d) cell_shortcut_ai5_widget_pane_ParamLimits

0xa40f,	// (0x0002c40d) cell_shortcut_ai5_widget_pane

0xa420,	// (0x0002c41e) bg_cell_shortcut_ai5_widget_pane

0x0bcc,	// (0x00022bca) cell_grid_ai5_widget_pane_g1

0x181d,	// (0x0002381b) highlight_cell_shortcut_ai5_widget_pane

0x1bb9,	// (0x00023bb7) ai5_sk_left_pane_g1

0xa428,	// (0x0002c426) ai5_sk_left_pane_g2

0xa430,	// (0x0002c42e) ai5_sk_left_pane_g3

0xa438,	// (0x0002c436) ai5_sk_left_pane_g4

0x0003,

0xfe70,	// (0x00031e6e) ai5_sk_left_pane_g

0xa440,	// (0x0002c43e) ai5_sk_left_pane_t1

0x1bb1,	// (0x00023baf) ai5_sk_right_pane_g1

0xa44e,	// (0x0002c44c) ai5_sk_right_pane_g2

0xa456,	// (0x0002c454) ai5_sk_right_pane_g3

0xa45e,	// (0x0002c45c) ai5_sk_right_pane_g4

0x0003,

0xfe79,	// (0x00031e77) ai5_sk_right_pane_g

0xa466,	// (0x0002c464) ai5_sk_right_pane_t1

0x1bb1,	// (0x00023baf) ai5_sk_middle_pane_g1

0x1bb9,	// (0x00023bb7) ai5_sk_middle_pane_g2

0x1bd1,	// (0x00023bcf) ai5_sk_middle_pane_g3

0xa456,	// (0x0002c454) ai5_sk_middle_pane_g4

0xa430,	// (0x0002c42e) ai5_sk_middle_pane_g5

0xa474,	// (0x0002c472) ai5_sk_middle_pane_g6

0x02bc,	// (0x000222ba) ai5_sk_middle_pane_g7

0x0006,

0xfe82,	// (0x00031e80) ai5_sk_middle_pane_g

0xdd0e,	// (0x0002fd0c) aid_touch_area_size_lc0_ParamLimits

0xdd0e,	// (0x0002fd0c) aid_touch_area_size_lc0

0x7a9e,	// (0x00029a9c) cell_hwr_candidate_pane_t1_ParamLimits

0x1a02,	// (0x00023a00) aid_touch_navi_pane

0xdf7b,	// (0x0002ff79) status_dt_navi_pane_ParamLimits

0xdf7b,	// (0x0002ff79) status_dt_navi_pane

0xdf93,	// (0x0002ff91) status_dt_sta_pane_ParamLimits

0xdf93,	// (0x0002ff91) status_dt_sta_pane

0x02c4,	// (0x000222c2) dt_sta_controll_pane

0x02d1,	// (0x000222cf) dt_sta_indi_pane

0x02de,	// (0x000222dc) dt_sta_title_pane

0x0a12,	// (0x00022a10) bg_dt_sta_indi_pane_ParamLimits

0x0a12,	// (0x00022a10) bg_dt_sta_indi_pane

0x02f0,	// (0x000222ee) dt_sta_battery_pane

0x02f8,	// (0x000222f6) dt_sta_indi_pane_g1

0x0301,	// (0x000222ff) dt_sta_indi_pane_g2

0x030a,	// (0x00022308) dt_sta_indi_pane_g3

0x0002,

0xfe91,	// (0x00031e8f) dt_sta_indi_pane_g

0x0313,	// (0x00022311) dt_sta_signal_pane

0x0e79,	// (0x00022e77) bg_dt_sta_title_pane_ParamLimits

0x0e79,	// (0x00022e77) bg_dt_sta_title_pane

0x031c,	// (0x0002231a) dt_sta_title_pane_g1

0x0324,	// (0x00022322) dt_sta_title_pane_t1_ParamLimits

0x0324,	// (0x00022322) dt_sta_title_pane_t1

0x07ef,	// (0x000227ed) bg_dt_sta_control_pane

0x0339,	// (0x00022337) dt_sta_controll_pane_g1

0x0342,	// (0x00022340) bg_dt_sta_title_pane_g1

0x034b,	// (0x00022349) bg_dt_sta_title_pane_g2

0x0354,	// (0x00022352) bg_dt_sta_title_pane_g3

0x0002,

0xfe98,	// (0x00031e96) bg_dt_sta_title_pane_g

0x3956,	// (0x00025954) bg_dt_sta_indi_pane_g1

0x035d,	// (0x0002235b) dt_sta_signal_pane_g1

0x0365,	// (0x00022363) dt_sta_signal_pane_g2

0x0001,

0xfe9f,	// (0x00031e9d) dt_sta_signal_pane_g

0xa47c,	// (0x0002c47a) dt_sta_battery_pane_g1

0xa485,	// (0x0002c483) dt_sta_battery_pane_t1

0x3956,	// (0x00025954) bg_dt_sta_control_pane_g1

0x13ed,	// (0x000233eb) fep_china_uni_eep_pane

0x13f5,	// (0x000233f3) fep_china_uni_entry_pane_ParamLimits

0x1405,	// (0x00023403) popup_fep_china_uni_window_g1_ParamLimits

0x1415,	// (0x00023413) popup_fep_china_uni_window_g2_ParamLimits

0x1415,	// (0x00023413) popup_fep_china_uni_window_g2

0x0001,

0xf71d,	// (0x0003171b) popup_fep_china_uni_window_g_ParamLimits

0xf71d,	// (0x0003171b) popup_fep_china_uni_window_g

0xa494,	// (0x0002c492) fep_china_uni_eep_pane_g1

0xa49c,	// (0x0002c49a) fep_china_uni_eep_pane_t1

0xa2c1,	// (0x0002c2bf) aid_touch_area_size_smil_player

0x1aa0,	// (0x00023a9e) lc0_clock_pane

0x1ad9,	// (0x00023ad7) status_pane_g5_ParamLimits

0x1ad9,	// (0x00023ad7) status_pane_g5

0xc0ed,	// (0x0002e0eb) popup_keymap_window

0x1ab9,	// (0x00023ab7) status_icon_pane

0x0113,	// (0x00022111) cell_ai5_widget_pane_g3_ParamLimits

0x012d,	// (0x0002212b) cell_ai5_widget_pane_g4_ParamLimits

0x013d,	// (0x0002213b) cell_ai5_widget_pane_g5_ParamLimits

0x0165,	// (0x00022163) cell_ai5_widget_pane_g8_ParamLimits

0x0165,	// (0x00022163) cell_ai5_widget_pane_g8

0x0179,	// (0x00022177) cell_ai5_widget_pane_g9_ParamLimits

0x0179,	// (0x00022177) cell_ai5_widget_pane_g9

0x018d,	// (0x0002218b) cell_ai5_widget_pane_g10_ParamLimits

0x018d,	// (0x0002218b) cell_ai5_widget_pane_g10

0xa4ab,	// (0x0002c4a9) status_icon_pane_g1

0x07ef,	// (0x000227ed) bg_popup_sub_pane_cp13

0xa4b3,	// (0x0002c4b1) popup_keymap_window_t1

0xdcb9,	// (0x0002fcb7) control_pane_g6_ParamLimits

0xdcb9,	// (0x0002fcb7) control_pane_g6

0xdcc6,	// (0x0002fcc4) control_pane_g7_ParamLimits

0xdcc6,	// (0x0002fcc4) control_pane_g7

0xdcd3,	// (0x0002fcd1) control_pane_g8_ParamLimits

0xdcd3,	// (0x0002fcd1) control_pane_g8

0x02c4,	// (0x000222c2) dt_sta_controll_pane_ParamLimits

0x02d1,	// (0x000222cf) dt_sta_indi_pane_ParamLimits

0x02de,	// (0x000222dc) dt_sta_title_pane_ParamLimits

0x0dca,	// (0x00022dc8) aid_size_touch_scroll_bar_cale

0x57ac,	// (0x000277aa) popup_discreet_window_ParamLimits

0x57ac,	// (0x000277aa) popup_discreet_window

0xbd2b,	// (0x0002dd29) popup_sk_window

0x2193,	// (0x00024191) bg_popup_sub_pane_cp28_ParamLimits

0x2193,	// (0x00024191) bg_popup_sub_pane_cp28

0xa4c1,	// (0x0002c4bf) popup_discreet_window_g1_ParamLimits

0xa4c1,	// (0x0002c4bf) popup_discreet_window_g1

0xa4e1,	// (0x0002c4df) popup_discreet_window_t1_ParamLimits

0xa4e1,	// (0x0002c4df) popup_discreet_window_t1

0xa4ff,	// (0x0002c4fd) popup_discreet_window_t2_ParamLimits

0xa4ff,	// (0x0002c4fd) popup_discreet_window_t2

0x0002,

0xfea4,	// (0x00031ea2) popup_discreet_window_t_ParamLimits

0xfea4,	// (0x00031ea2) popup_discreet_window_t

0x8dd3,	// (0x0002add1) popup_sk_window_g1

0x8ddc,	// (0x0002adda) popup_sk_window_g2

0x0001,

0xfeab,	// (0x00031ea9) popup_sk_window_g

0x8de5,	// (0x0002ade3) popup_sk_window_t1

0x8df3,	// (0x0002adf1) popup_sk_window_t1_copy1

0x00ff,	// (0x000220fd) cell_ai5_widget_pane_g2_ParamLimits

0x0245,	// (0x00022243) cell_ai5_widget_pane_t9_ParamLimits

0x0245,	// (0x00022243) cell_ai5_widget_pane_t9

0x07ef,	// (0x000227ed) main_fep_fshwr2_pane

0xcb3a,	// (0x0002eb38) aid_fshwr2_btn_pane

0xcb4e,	// (0x0002eb4c) aid_fshwr2_syb_pane

0xcb62,	// (0x0002eb60) aid_fshwr2_txt_pane

0xcb72,	// (0x0002eb70) fshwr2_func_candi_pane

0xcb8a,	// (0x0002eb88) fshwr2_hwr_syb_pane

0xcba2,	// (0x0002eba0) fshwr2_icf_pane

0x56d5,	// (0x000276d3) fshwr2_icf_bg_pane

0xcbcc,	// (0x0002ebca) fshwr2_icf_pane_t1_ParamLimits

0xcbcc,	// (0x0002ebca) fshwr2_icf_pane_t1

0x138b,	// (0x00023389) fshwr2_func_candi_pane_g1

0x0416,	// (0x00022414) fshwr2_func_candi_row_pane_ParamLimits

0x0416,	// (0x00022414) fshwr2_func_candi_row_pane

0xcbe3,	// (0x0002ebe1) cell_fshwr2_syb_pane_ParamLimits

0xcbe3,	// (0x0002ebe1) cell_fshwr2_syb_pane

0x8eb0,	// (0x0002aeae) fshwr2_hwr_syb_pane_g1_ParamLimits

0x8eb0,	// (0x0002aeae) fshwr2_hwr_syb_pane_g1

0x56d5,	// (0x000276d3) bg_popup_call_pane_cp01

0xcc05,	// (0x0002ec03) fshwr2_func_candi_cell_pane_ParamLimits

0xcc05,	// (0x0002ec03) fshwr2_func_candi_cell_pane

0x1f85,	// (0x00023f83) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x1f85,	// (0x00023f83) fshwr2_func_candi_cell_bg_pane

0xcc44,	// (0x0002ec42) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xcc44,	// (0x0002ec42) fshwr2_func_candi_cell_pane_g1

0xcc7b,	// (0x0002ec79) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xcc7b,	// (0x0002ec79) fshwr2_func_candi_cell_pane_t1

0x56d5,	// (0x000276d3) bg_button_pane_cp08

0x0fff,	// (0x00022ffd) cell_fshwr2_syb_bg_pane

0xcc96,	// (0x0002ec94) cell_fshwr2_syb_bg_pane_g1

0xcca6,	// (0x0002eca4) cell_fshwr2_syb_bg_pane_t1

0x0e79,	// (0x00022e77) main_tmo_pane

0xe21c,	// (0x0003021a) uni_indicator_pane_g1_ParamLimits

0xe232,	// (0x00030230) uni_indicator_pane_g2_ParamLimits

0xe248,	// (0x00030246) uni_indicator_pane_g3_ParamLimits

0x2b1f,	// (0x00024b1d) uni_indicator_pane_g4_ParamLimits

0x2b1f,	// (0x00024b1d) uni_indicator_pane_g4

0x2b33,	// (0x00024b31) uni_indicator_pane_g5_ParamLimits

0x2b33,	// (0x00024b31) uni_indicator_pane_g5

0x2b33,	// (0x00024b31) uni_indicator_pane_g6_ParamLimits

0x2b33,	// (0x00024b31) uni_indicator_pane_g6

0xf915,	// (0x00031913) uni_indicator_pane_g_ParamLimits

0xeae5,	// (0x00030ae3) popup_tmo_note_window_ParamLimits

0xeae5,	// (0x00030ae3) popup_tmo_note_window

0x8197,	// (0x0002a195) fshwr2_bg_pane

0xcc6c,	// (0x0002ec6a) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xcc6c,	// (0x0002ec6a) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeb0,	// (0x00031eae) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeb0,	// (0x00031eae) fshwr2_func_candi_cell_pane_g

0x7a57,	// (0x00029a55) bg_popup_window_pane_cp01

0x8f5a,	// (0x0002af58) bg_popup_window_pane_g1_cp01

0xa551,	// (0x0002c54f) bg_popup_window_pane_cp22_ParamLimits

0xa551,	// (0x0002c54f) bg_popup_window_pane_cp22

0xa55f,	// (0x0002c55d) listscroll_tmo_link_pane_ParamLimits

0xa55f,	// (0x0002c55d) listscroll_tmo_link_pane

0xa59f,	// (0x0002c59d) popup_tmo_note_window_g1_ParamLimits

0xa59f,	// (0x0002c59d) popup_tmo_note_window_g1

0xa5ac,	// (0x0002c5aa) tmo_note_info_pane_ParamLimits

0xa5ac,	// (0x0002c5aa) tmo_note_info_pane

0x0512,	// (0x00022510) list_tmo_note_info_pane_g1_ParamLimits

0x0512,	// (0x00022510) list_tmo_note_info_pane_g1

0xa5c6,	// (0x0002c5c4) list_tmo_note_info_pane_g2_ParamLimits

0xa5c6,	// (0x0002c5c4) list_tmo_note_info_pane_g2

0x0001,

0xfeb5,	// (0x00031eb3) list_tmo_note_info_pane_g_ParamLimits

0xfeb5,	// (0x00031eb3) list_tmo_note_info_pane_g

0xa5e2,	// (0x0002c5e0) list_tmo_note_info_text_pane_ParamLimits

0xa5e2,	// (0x0002c5e0) list_tmo_note_info_text_pane

0xa624,	// (0x0002c622) list_tmo_link_pane

0xa631,	// (0x0002c62f) scroll_pane_cp20

0xa63e,	// (0x0002c63c) list_single_tmo_link_pane_ParamLimits

0xa63e,	// (0x0002c63c) list_single_tmo_link_pane

0xa64e,	// (0x0002c64c) list_single_tmo_link_pane_t1

0xa65c,	// (0x0002c65a) list_tmo_note_info_text_pane_t1_ParamLimits

0xa65c,	// (0x0002c65a) list_tmo_note_info_text_pane_t1

0x0f33,	// (0x00022f31) aid_size_touch_scroll_bar_cp01_ParamLimits

0x0f33,	// (0x00022f31) aid_size_touch_scroll_bar_cp01

0xd558,	// (0x0002f556) aid_size_touch_slider_marker

0xbd1f,	// (0x0002dd1d) popup_settings_window_ParamLimits

0xbd1f,	// (0x0002dd1d) popup_settings_window

0x9833,	// (0x0002b831) popup_candi_list_indi_window

0x1a02,	// (0x00023a00) aid_touch_navi_pane_ParamLimits

0x80f3,	// (0x0002a0f1) rs_clock_indi_pane

0x80fc,	// (0x0002a0fa) sctrl_sk_bottom_pane_ParamLimits

0x810d,	// (0x0002a10b) sctrl_sk_top_pane_ParamLimits

0x8748,	// (0x0002a746) popup_fep_tooltip_window

0xa30f,	// (0x0002c30d) aid_size_cell_widget_grid_ParamLimits

0x00eb,	// (0x000220e9) cell_ai5_widget_pane_g1_ParamLimits

0x00eb,	// (0x000220e9) cell_ai5_widget_pane_g1

0x014d,	// (0x0002214b) cell_ai5_widget_pane_g6_ParamLimits

0x0159,	// (0x00022157) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe33,	// (0x00031e31) cell_ai5_widget_pane_g_ParamLimits

0xfe33,	// (0x00031e31) cell_ai5_widget_pane_g

0x0274,	// (0x00022272) cell_ai5_widget_pane_t10_ParamLimits

0x0274,	// (0x00022272) cell_ai5_widget_pane_t10

0x0292,	// (0x00022290) grid_ai5_widget_pane_ParamLimits

0xa3eb,	// (0x0002c3e9) cell_contacts_ai5_widget_pane_ParamLimits

0xa3eb,	// (0x0002c3e9) cell_contacts_ai5_widget_pane

0xa514,	// (0x0002c512) popup_discreet_window_t3_ParamLimits

0xa514,	// (0x0002c512) popup_discreet_window_t3

0xcbba,	// (0x0002ebb8) popup_fshwr2_char_preview_window_ParamLimits

0xcbba,	// (0x0002ebb8) popup_fshwr2_char_preview_window

0x0529,	// (0x00022527) tmo_note_info_pane_t1

0x053e,	// (0x0002253c) tmo_note_info_pane_t2

0x0553,	// (0x00022551) tmo_note_info_pane_t3

0xa600,	// (0x0002c5fe) tmo_note_info_pane_t4

0xa612,	// (0x0002c610) tmo_note_info_pane_t5

0x0004,

0xfeba,	// (0x00031eb8) tmo_note_info_pane_t

0xa624,	// (0x0002c622) list_tmo_link_pane_ParamLimits

0xa631,	// (0x0002c62f) scroll_pane_cp20_ParamLimits

0x56d5,	// (0x000276d3) bg_popup_fep_char_preview_window_cp01

0xa675,	// (0x0002c673) popup_fshwr2_char_preview_window_t1

0xa683,	// (0x0002c681) popup_candi_list_indi_window_g1

0xa68c,	// (0x0002c68a) bg_cell_contacts_ai5_widget_pane

0xa698,	// (0x0002c696) cell_contacts_ai5_widget_pane_g1

0xa6ad,	// (0x0002c6ab) cell_contacts_ai5_widget_pane_g2

0xa6b9,	// (0x0002c6b7) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfec5,	// (0x00031ec3) cell_contacts_ai5_widget_pane_g

0xa6c5,	// (0x0002c6c3) cell_contacts_ai5_widget_pane_t1

0x0e79,	// (0x00022e77) highlight_cell_shortcut_ai5_widget_pane_cp01

0x05cb,	// (0x000225c9) settings_container_pane

0x181d,	// (0x0002381b) listscroll_set_pane_copy1

0x32aa,	// (0x000252a8) scroll_pane_cp121_copy1

0xa6d7,	// (0x0002c6d5) set_content_pane_copy1

0xa6df,	// (0x0002c6dd) aid_height_set_list_copy1_ParamLimits

0xa6df,	// (0x0002c6dd) aid_height_set_list_copy1

0x2ccc,	// (0x00024cca) aid_size_parent_copy1_ParamLimits

0x2ccc,	// (0x00024cca) aid_size_parent_copy1

0xa6eb,	// (0x0002c6e9) button_value_adjust_pane_cp6_copy1_ParamLimits

0xa6eb,	// (0x0002c6e9) button_value_adjust_pane_cp6_copy1

0x0fff,	// (0x00022ffd) list_highlight_pane_cp2_copy1_ParamLimits

0x0fff,	// (0x00022ffd) list_highlight_pane_cp2_copy1

0x05d7,	// (0x000225d5) list_set_pane_copy1_ParamLimits

0x05d7,	// (0x000225d5) list_set_pane_copy1

0x0568,	// (0x00022566) main_pane_set_t1_copy1_ParamLimits

0x0568,	// (0x00022566) main_pane_set_t1_copy1

0x05a2,	// (0x000225a0) main_pane_set_t2_copy1_ParamLimits

0x05a2,	// (0x000225a0) main_pane_set_t2_copy1

0xa6ff,	// (0x0002c6fd) main_pane_set_t3_copy1

0xa70d,	// (0x0002c70b) main_pane_set_t4_copy1

0x05bf,	// (0x000225bd) set_content_pane_g1_copy1_ParamLimits

0x05bf,	// (0x000225bd) set_content_pane_g1_copy1

0xa71b,	// (0x0002c719) setting_code_pane_copy1

0xa723,	// (0x0002c721) setting_slider_graphic_pane_copy1

0xa723,	// (0x0002c721) setting_slider_pane_copy1

0xa723,	// (0x0002c721) setting_text_pane_copy1

0xa723,	// (0x0002c721) setting_volume_pane_copy1

0xa72b,	// (0x0002c729) settings_code_pane_cp2_copy1

0xa733,	// (0x0002c731) settings_code_pane_cp_copy1_ParamLimits

0xa733,	// (0x0002c731) settings_code_pane_cp_copy1

0xccbc,	// (0x0002ecba) volume_set_pane_copy1

0x066d,	// (0x0002266b) volume_set_pane_g10_copy1

0x0675,	// (0x00022673) volume_set_pane_g1_copy1

0x067d,	// (0x0002267b) volume_set_pane_g2_copy1

0x0685,	// (0x00022683) volume_set_pane_g3_copy1

0x068d,	// (0x0002268b) volume_set_pane_g4_copy1

0x0695,	// (0x00022693) volume_set_pane_g5_copy1

0x069d,	// (0x0002269b) volume_set_pane_g6_copy1

0x06a5,	// (0x000226a3) volume_set_pane_g7_copy1

0x06ad,	// (0x000226ab) volume_set_pane_g8_copy1

0x06b5,	// (0x000226b3) volume_set_pane_g9_copy1

0x08df,	// (0x000228dd) bg_set_opt_pane_cp_copy1_ParamLimits

0x08df,	// (0x000228dd) bg_set_opt_pane_cp_copy1

0x59a4,	// (0x000279a2) setting_slider_pane_t1_copy1_ParamLimits

0x59a4,	// (0x000279a2) setting_slider_pane_t1_copy1

0x8f6b,	// (0x0002af69) setting_slider_pane_t2_copy1_ParamLimits

0x8f6b,	// (0x0002af69) setting_slider_pane_t2_copy1

0x8f84,	// (0x0002af82) setting_slider_pane_t3_copy1_ParamLimits

0x8f84,	// (0x0002af82) setting_slider_pane_t3_copy1

0x59ea,	// (0x000279e8) slider_set_pane_copy1_ParamLimits

0x59ea,	// (0x000279e8) slider_set_pane_copy1

0x0ed4,	// (0x00022ed2) set_opt_bg_pane_g1_copy2

0x0edc,	// (0x00022eda) set_opt_bg_pane_g2_copy2

0xa747,	// (0x0002c745) set_opt_bg_pane_g3_copy2

0x0eec,	// (0x00022eea) set_opt_bg_pane_g4_copy2

0x0ef4,	// (0x00022ef2) set_opt_bg_pane_g5_copy2

0x0efc,	// (0x00022efa) set_opt_bg_pane_g6_copy2

0x06bd,	// (0x000226bb) set_opt_bg_pane_g7_copy2

0xa74f,	// (0x0002c74d) set_opt_bg_pane_g8_copy2

0xa757,	// (0x0002c755) set_opt_bg_pane_g9_copy2

0x7123,	// (0x00029121) aid_size_touch_slider_mark_copy1_ParamLimits

0x7123,	// (0x00029121) aid_size_touch_slider_mark_copy1

0x2cde,	// (0x00024cdc) slider_set_pane_g1_copy1

0x2d00,	// (0x00024cfe) slider_set_pane_g2_copy1

0x7143,	// (0x00029141) slider_set_pane_g3_copy1_ParamLimits

0x7143,	// (0x00029141) slider_set_pane_g3_copy1

0x7157,	// (0x00029155) slider_set_pane_g4_copy1_ParamLimits

0x7157,	// (0x00029155) slider_set_pane_g4_copy1

0x716f,	// (0x0002916d) slider_set_pane_g5_copy1_ParamLimits

0x716f,	// (0x0002916d) slider_set_pane_g5_copy1

0x7143,	// (0x00029141) slider_set_pane_g6_copy1_ParamLimits

0x7143,	// (0x00029141) slider_set_pane_g6_copy1

0xccc4,	// (0x0002ecc2) slider_set_pane_g7_copy1_ParamLimits

0xccc4,	// (0x0002ecc2) slider_set_pane_g7_copy1

0x087b,	// (0x00022879) bg_set_opt_pane_cp2_copy1

0x08ed,	// (0x000228eb) setting_slider_graphic_pane_g1_copy1

0xccda,	// (0x0002ecd8) setting_slider_graphic_pane_t1_copy1

0xcce9,	// (0x0002ece7) setting_slider_graphic_pane_t2_copy1

0xccf8,	// (0x0002ecf6) slider_set_pane_cp_copy1

0xa767,	// (0x0002c765) input_focus_pane_cp1_copy1

0xa770,	// (0x0002c76e) list_set_text_pane_copy1

0xa778,	// (0x0002c776) setting_text_pane_g1_copy1

0xa781,	// (0x0002c77f) set_text_pane_t1_copy1

0xa767,	// (0x0002c765) input_focus_pane_cp2_copy1

0xa778,	// (0x0002c776) setting_code_pane_g1_copy1

0xa79a,	// (0x0002c798) setting_code_pane_t1_copy1

0xdb75,	// (0x0002fb73) list_set_graphic_pane_copy1

0x087b,	// (0x00022879) bg_set_opt_pane_cp4_copy1

0xa7a8,	// (0x0002c7a6) list_set_graphic_pane_g1_copy1_ParamLimits

0xa7a8,	// (0x0002c7a6) list_set_graphic_pane_g1_copy1

0xa7b4,	// (0x0002c7b2) list_set_graphic_pane_g2_copy1

0x1598,	// (0x00023596) list_set_graphic_pane_t1_copy1_ParamLimits

0x1598,	// (0x00023596) list_set_graphic_pane_t1_copy1

0x3956,	// (0x00025954) rs_clock_indi_pane_g1

0xa7bc,	// (0x0002c7ba) rs_clock_indi_pane_t1

0xa7ca,	// (0x0002c7c8) rs_indi_pane

0xa7d2,	// (0x0002c7d0) rs_indi_pane_g1

0xa7db,	// (0x0002c7d9) rs_indi_pane_g2

0xa683,	// (0x0002c681) rs_indi_pane_g3

0x0002,

0xfecc,	// (0x00031eca) rs_indi_pane_g

0x181d,	// (0x0002381b) bg_popup_preview_window_pane_cp03

0xa7e4,	// (0x0002c7e2) popup_fep_tooltip_window_t1

0x4281,	// (0x0002627f) popup_note2_window_g2_ParamLimits

0x4281,	// (0x0002627f) popup_note2_window_g2

0x0001,

0xfc6c,	// (0x00031c6a) popup_note2_window_g_ParamLimits

0xfc6c,	// (0x00031c6a) popup_note2_window_g

0x46fc,	// (0x000266fa) bg_popup_sub_pane_cp11_ParamLimits

0x4709,	// (0x00026707) cell_ai3_links_pane_g1_ParamLimits

0x4720,	// (0x0002671e) cell_ai3_links_pane_t1

0xa781,	// (0x0002c77f) set_text_pane_t1_copy1_ParamLimits

0x1744,	// (0x00023742) cell_graphic_popup_pane_cp2_ParamLimits

0x1744,	// (0x00023742) cell_graphic_popup_pane_cp2

0xa7f2,	// (0x0002c7f0) cell_graphic_popup_pane_g1_cp2

0x0c79,	// (0x00022c77) cell_graphic_popup_pane_g2_cp2

0xa7fa,	// (0x0002c7f8) cell_graphic_popup_pane_g3_cp2

0xa802,	// (0x0002c800) cell_graphic_popup_pane_t2_cp2

0x0c8a,	// (0x00022c88) grid_highlight_pane_cp3_cp2

0x11c4,	// (0x000231c2) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x0e79,	// (0x00022e77) main_tmo_pane_ParamLimits

0xeadd,	// (0x00030adb) popup_tmo_big_image_note_window

0xa34c,	// (0x0002c34a) cell_ai5_widget_list_pane

0x00e2,	// (0x000220e0) cell_ai5_widget_lrg_icon_pane

0x0529,	// (0x00022527) tmo_note_info_pane_t1_ParamLimits

0x053e,	// (0x0002253c) tmo_note_info_pane_t2_ParamLimits

0x0553,	// (0x00022551) tmo_note_info_pane_t3_ParamLimits

0xa600,	// (0x0002c5fe) tmo_note_info_pane_t4_ParamLimits

0xa612,	// (0x0002c610) tmo_note_info_pane_t5_ParamLimits

0xfeba,	// (0x00031eb8) tmo_note_info_pane_t_ParamLimits

0x05cb,	// (0x000225c9) settings_container_pane_ParamLimits

0xa75f,	// (0x0002c75d) indicator_popup_pane_cp5

0xa75f,	// (0x0002c75d) indicator_popup_pane_cp6

0xdb75,	// (0x0002fb73) list_set_graphic_pane_copy1_ParamLimits

0x07ef,	// (0x000227ed) bg_popup_window_pane_cp23

0xa810,	// (0x0002c80e) popup_tmo_big_image_note_window_g1

0xa819,	// (0x0002c817) popup_tmo_big_image_note_window_t1

0xa827,	// (0x0002c825) popup_tmo_big_image_note_window_t2

0xa835,	// (0x0002c833) popup_tmo_big_image_note_window_t3

0x0002,

0xfed3,	// (0x00031ed1) popup_tmo_big_image_note_window_t

0x3956,	// (0x00025954) cell_ai5_widget_lrg_icon_pane_g1

0xa843,	// (0x0002c841) cell_ai5_widget_lrg_icon_pane_t1

0x0701,	// (0x000226ff) cell_ai5_widget_list_row_pane_ParamLimits

0x0701,	// (0x000226ff) cell_ai5_widget_list_row_pane

0x0718,	// (0x00022716) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x0718,	// (0x00022716) cell_ai5_widget_list_row_pane_g1

0x0725,	// (0x00022723) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x0725,	// (0x00022723) cell_ai5_widget_list_row_pane_t1

0x0756,	// (0x00022754) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x0756,	// (0x00022754) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfeda,	// (0x00031ed8) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeda,	// (0x00031ed8) cell_ai5_widget_list_row_pane_t

0x56d5,	// (0x000276d3) main_fep_vtchi_ss_pane

0xa871,	// (0x0002c86f) popup_fep_char_pre_window

0xa879,	// (0x0002c877) popup_fep_ituss_window

0x078d,	// (0x0002278b) popup_fep_vkbss_window

0xa8a1,	// (0x0002c89f) grid_vkbss_keypad_pane_ParamLimits

0xa8a1,	// (0x0002c89f) grid_vkbss_keypad_pane

0xa8b1,	// (0x0002c8af) ituss_keypad_pane

0x8fe1,	// (0x0002afdf) aid_vkbss_key_offset_ParamLimits

0x8fe1,	// (0x0002afdf) aid_vkbss_key_offset

0x8fed,	// (0x0002afeb) cell_vkbss_key_pane_ParamLimits

0x8fed,	// (0x0002afeb) cell_vkbss_key_pane

0x1c75,	// (0x00023c73) bg_cell_vkbss_key_g1_ParamLimits

0x1c75,	// (0x00023c73) bg_cell_vkbss_key_g1

0xa8c0,	// (0x0002c8be) cell_vkbss_key_3p_pane_ParamLimits

0xa8c0,	// (0x0002c8be) cell_vkbss_key_3p_pane

0xa8da,	// (0x0002c8d8) cell_vkbss_key_g1_ParamLimits

0xa8da,	// (0x0002c8d8) cell_vkbss_key_g1

0xa8f4,	// (0x0002c8f2) cell_vkbss_key_t1_ParamLimits

0xa8f4,	// (0x0002c8f2) cell_vkbss_key_t1

0x9003,	// (0x0002b001) cell_ituss_key_pane_ParamLimits

0x9003,	// (0x0002b001) cell_ituss_key_pane

0xa91f,	// (0x0002c91d) bg_cell_ituss_key_g1_ParamLimits

0xa91f,	// (0x0002c91d) bg_cell_ituss_key_g1

0xa92b,	// (0x0002c929) cell_ituss_key_pane_g1_ParamLimits

0xa92b,	// (0x0002c929) cell_ituss_key_pane_g1

0x9014,	// (0x0002b012) cell_ituss_key_pane_g2_ParamLimits

0x9014,	// (0x0002b012) cell_ituss_key_pane_g2

0x0002,

0xfee1,	// (0x00031edf) cell_ituss_key_pane_g_ParamLimits

0xfee1,	// (0x00031edf) cell_ituss_key_pane_g

0x9040,	// (0x0002b03e) cell_ituss_key_t1_ParamLimits

0x9040,	// (0x0002b03e) cell_ituss_key_t1

0x9076,	// (0x0002b074) cell_ituss_key_t2_ParamLimits

0x9076,	// (0x0002b074) cell_ituss_key_t2

0x90a7,	// (0x0002b0a5) cell_ituss_key_t3_ParamLimits

0x90a7,	// (0x0002b0a5) cell_ituss_key_t3

0x9076,	// (0x0002b074) cell_ituss_key_t4_ParamLimits

0x9076,	// (0x0002b074) cell_ituss_key_t4

0x0004,

0xfee8,	// (0x00031ee6) cell_ituss_key_t_ParamLimits

0xfee8,	// (0x00031ee6) cell_ituss_key_t

0xa951,	// (0x0002c94f) cell_vkbss_key_3p_pane_g1

0xa959,	// (0x0002c957) cell_vkbss_key_3p_pane_g2

0xa961,	// (0x0002c95f) cell_vkbss_key_3p_pane_g3

0x0002,

0xfef3,	// (0x00031ef1) cell_vkbss_key_3p_pane_g

0x181d,	// (0x0002381b) bg_popup_fep_char_preview_window_cp02

0xa969,	// (0x0002c967) popup_fep_char_pre_window_t1

0x00cf,	// (0x000220cd) main_ai5_sk_pane

0xa68c,	// (0x0002c68a) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xa698,	// (0x0002c696) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xa6ad,	// (0x0002c6ab) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa6b9,	// (0x0002c6b7) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfec5,	// (0x00031ec3) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa6c5,	// (0x0002c6c3) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x0e79,	// (0x00022e77) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0x079a,	// (0x00022798) main_ai5_sk_pane_g1

0x1fdd,	// (0x00023fdb) popup_query_code_window_g1

0x077e,	// (0x0002277c) popup_fep_vkb_icf_pane

0xa88b,	// (0x0002c889) popup_fep_vtchi_icf_pane

0xa977,	// (0x0002c975) bg_icf_pane

0xa983,	// (0x0002c981) list_vkb_icf_pane

0xa98f,	// (0x0002c98d) bg_icf_pane_cp01

0xa9a2,	// (0x0002c9a0) vtchi_icf_list_pane

0x07a3,	// (0x000227a1) list_vkb_icf_pane_t1_ParamLimits

0x07a3,	// (0x000227a1) list_vkb_icf_pane_t1

0xa9b2,	// (0x0002c9b0) vtchi_icf_list_pane_t1_ParamLimits

0xa9b2,	// (0x0002c9b0) vtchi_icf_list_pane_t1

0xa879,	// (0x0002c877) popup_fep_ituss_window_ParamLimits

0xa88b,	// (0x0002c889) popup_fep_vtchi_icf_pane_ParamLimits

0xa8b1,	// (0x0002c8af) ituss_keypad_pane_ParamLimits

0x8fd7,	// (0x0002afd5) ituss_sks_pane

0xa977,	// (0x0002c975) bg_icf_pane_ParamLimits

0xa851,	// (0x0002c84f) icf_edit_indi_pane_ParamLimits

0xa851,	// (0x0002c84f) icf_edit_indi_pane

0xa983,	// (0x0002c981) list_vkb_icf_pane_ParamLimits

0xa98f,	// (0x0002c98d) bg_icf_pane_cp01_ParamLimits

0xa864,	// (0x0002c862) icf_edit_indi_pane_cp01_ParamLimits

0xa864,	// (0x0002c862) icf_edit_indi_pane_cp01

0xa9aa,	// (0x0002c9a8) vtchi_query_pane

0xa29a,	// (0x0002c298) icf_edit_indi_pane_g1_ParamLimits

0xa29a,	// (0x0002c298) icf_edit_indi_pane_g1

0x07b9,	// (0x000227b7) icf_edit_indi_pane_g2_ParamLimits

0x07b9,	// (0x000227b7) icf_edit_indi_pane_g2

0x0001,

0xff0b,	// (0x00031f09) icf_edit_indi_pane_g_ParamLimits

0xff0b,	// (0x00031f09) icf_edit_indi_pane_g

0x07c9,	// (0x000227c7) icf_edit_indi_pane_t1

0xa9c9,	// (0x0002c9c7) bg_input_focus_pane_cp042

0xa9d2,	// (0x0002c9d0) vtchi_button_pane

0xa9db,	// (0x0002c9d9) vtchi_query_pane_t1

0xa9e9,	// (0x0002c9e7) vtchi_query_pane_t2

0xa9f7,	// (0x0002c9f5) vtchi_query_pane_t3

0x0002,

0xfefa,	// (0x00031ef8) vtchi_query_pane_t

0x56d5,	// (0x000276d3) bg_button_pane_cp13

0xaa05,	// (0x0002ca03) vtchi_button_pane_g1

0x90ea,	// (0x0002b0e8) ituss_sks_pane_g1

0x90f3,	// (0x0002b0f1) ituss_sks_pane_g2

0x0001,

0xff01,	// (0x00031eff) ituss_sks_pane_g

0xaa0d,	// (0x0002ca0b) ituss_sks_pane_t1

0xaa1b,	// (0x0002ca19) ituss_sks_pane_t2

0x0001,

0xff06,	// (0x00031f04) ituss_sks_pane_t

0x3583,	// (0x00025581) indicator_nsta_pane_cp_g1

0x358c,	// (0x0002558a) indicator_nsta_pane_cp_g2

0x3594,	// (0x00025592) indicator_nsta_pane_cp_g3

0x359c,	// (0x0002559a) indicator_nsta_pane_cp_g4

0x35a4,	// (0x000255a2) indicator_nsta_pane_cp_g5

0x35ac,	// (0x000255aa) indicator_nsta_pane_cp_g6

0x0005,

0xfaaa,	// (0x00031aa8) indicator_nsta_pane_cp_g

0xf438,	// (0x00031436) cell_graphic2_pane_t2_ParamLimits

0xf438,	// (0x00031436) cell_graphic2_pane_t2

0x0001,

0xfdbc,	// (0x00031dba) cell_graphic2_pane_t_ParamLimits

0xfdbc,	// (0x00031dba) cell_graphic2_pane_t

0xf470,	// (0x0003146e) cell_graphic2_control_pane_t1

0xdb13,	// (0x0002fb11) signal_pane_g3_ParamLimits

0xdb13,	// (0x0002fb11) signal_pane_g3

0xdb27,	// (0x0002fb25) signal_pane_g4_ParamLimits

0xdb27,	// (0x0002fb25) signal_pane_g4

0x0768,	// (0x00022766) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x0768,	// (0x00022766) cell_ai5_widget_list_row_pane_t3

0xa93f,	// (0x0002c93d) cell_ituss_key_pane_t1_ParamLimits

0xa93f,	// (0x0002c93d) cell_ituss_key_pane_t1

0x1cb3,	// (0x00023cb1) form_field_data_wide_pane_vc_t2_ParamLimits

0x1cb3,	// (0x00023cb1) form_field_data_wide_pane_vc_t2

0x1cc5,	// (0x00023cc3) form_field_data_wide_pane_vc_t3_ParamLimits

0x1cc5,	// (0x00023cc3) form_field_data_wide_pane_vc_t3

0x0002,

0xf7fd,	// (0x000317fb) form_field_data_wide_pane_vc_t_ParamLimits

0xf7fd,	// (0x000317fb) form_field_data_wide_pane_vc_t

0x32ef,	// (0x000252ed) form_field_slider_wide_pane_vc_t3_ParamLimits

0x32ef,	// (0x000252ed) form_field_slider_wide_pane_vc_t3

0x33ad,	// (0x000253ab) form_field_popup_wide_pane_vc_t2_ParamLimits

0x33ad,	// (0x000253ab) form_field_popup_wide_pane_vc_t2

0x33c2,	// (0x000253c0) form_field_popup_wide_pane_vc_t3_ParamLimits

0x33c2,	// (0x000253c0) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa99,	// (0x00031a97) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa99,	// (0x00031a97) form_field_popup_wide_pane_vc_t

0xcb3a,	// (0x0002eb38) aid_fshwr2_btn_pane_ParamLimits

0xcb4e,	// (0x0002eb4c) aid_fshwr2_syb_pane_ParamLimits

0xcb62,	// (0x0002eb60) aid_fshwr2_txt_pane_ParamLimits

0x8197,	// (0x0002a195) fshwr2_bg_pane_ParamLimits

0xcb72,	// (0x0002eb70) fshwr2_func_candi_pane_ParamLimits

0xcb8a,	// (0x0002eb88) fshwr2_hwr_syb_pane_ParamLimits

0xcba2,	// (0x0002eba0) fshwr2_icf_pane_ParamLimits

0x9c61,	// (0x0002bc5f) list_double_graphic_pane_vc_g4_ParamLimits

0x9c61,	// (0x0002bc5f) list_double_graphic_pane_vc_g4

0x9034,	// (0x0002b032) cell_ituss_key_pane_g3_ParamLimits

0x9034,	// (0x0002b032) cell_ituss_key_pane_g3

0x90d8,	// (0x0002b0d6) cell_ituss_key_t5_ParamLimits

0x90d8,	// (0x0002b0d6) cell_ituss_key_t5

0x078d,	// (0x0002278b) popup_fep_vkbss_window_ParamLimits

0x00d9,	// (0x000220d7) aid_cell_ai5_quarter

0x07c9,	// (0x000227c7) icf_edit_indi_pane_t1_ParamLimits

0x0aba,	// (0x00022ab8) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x0aba,	// (0x00022ab8) aid_tch_indicator_popup_pane_cp2

0x0acd,	// (0x00022acb) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x0acd,	// (0x00022acb) aid_tch_query_popup_data_pane_cp2

0x1f85,	// (0x00023f83) aid_tch_query_popup_pane_ParamLimits

0x1f85,	// (0x00023f83) aid_tch_query_popup_pane

0x1f85,	// (0x00023f83) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x1f85,	// (0x00023f83) aid_tch_query_popup_data_pane_cp1

0x0fff,	// (0x00022ffd) cell_fshwr2_syb_bg_pane_ParamLimits

0xcc96,	// (0x0002ec94) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0xcca6,	// (0x0002eca4) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0x077e,	// (0x0002277c) popup_fep_vkb_icf_pane_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Abrw_pql_av_qvga_lsc_Small

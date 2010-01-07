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

#include "aknlayoutscalable_abrw_phl_av_qhd_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_phl_av_qhd_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0004650c };

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
0x86e2,	// (0x0004ebee) Screen

0x86ee,	// (0x0004ebfa) application_window_ParamLimits

0x86ee,	// (0x0004ebfa) application_window

0xb6d2,	// (0x00051bde) screen_g1

0x788d,	// (0x0004dd99) area_bottom_pane_ParamLimits

0x788d,	// (0x0004dd99) area_bottom_pane

0x055d,	// (0x00046a69) area_top_pane_ParamLimits

0x055d,	// (0x00046a69) area_top_pane

0x05fb,	// (0x00046b07) main_pane_ParamLimits

0x05fb,	// (0x00046b07) main_pane

0xb6dc,	// (0x00051be8) misc_graphics

0x97d3,	// (0x0004fcdf) battery_pane_ParamLimits

0x97d3,	// (0x0004fcdf) battery_pane

0xd62c,	// (0x00053b38) bg_status_flat_pane_g8

0xd634,	// (0x00053b40) bg_status_flat_pane_g9

0xcd8d,	// (0x00053299) context_pane_ParamLimits

0xcd8d,	// (0x00053299) context_pane

0x993e,	// (0x0004fe4a) navi_pane_ParamLimits

0x993e,	// (0x0004fe4a) navi_pane

0x99b5,	// (0x0004fec1) signal_pane_ParamLimits

0x99b5,	// (0x0004fec1) signal_pane

0x0008,

0xf8a1,	// (0x00055dad) bg_status_flat_pane_g

0x9a45,	// (0x0004ff51) status_pane_g1_ParamLimits

0x9a45,	// (0x0004ff51) status_pane_g1

0x9a5b,	// (0x0004ff67) status_pane_g2_ParamLimits

0x9a5b,	// (0x0004ff67) status_pane_g2

0xcdf2,	// (0x000532fe) status_pane_g3_ParamLimits

0xcdf2,	// (0x000532fe) status_pane_g3

0x0004,

0xf7db,	// (0x00055ce7) status_pane_g_ParamLimits

0xf7db,	// (0x00055ce7) status_pane_g

0x9a67,	// (0x0004ff73) title_pane_ParamLimits

0x9a67,	// (0x0004ff73) title_pane

0x9ac8,	// (0x0004ffd4) uni_indicator_pane_ParamLimits

0x9ac8,	// (0x0004ffd4) uni_indicator_pane

0xcbbc,	// (0x000530c8) bg_list_pane_ParamLimits

0xcbbc,	// (0x000530c8) bg_list_pane

0x9095,	// (0x0004f5a1) find_pane

0x909d,	// (0x0004f5a9) listscroll_app_pane_ParamLimits

0x909d,	// (0x0004f5a9) listscroll_app_pane

0xcbdc,	// (0x000530e8) listscroll_form_pane

0x90a9,	// (0x0004f5b5) listscroll_gen_pane_ParamLimits

0x90a9,	// (0x0004f5b5) listscroll_gen_pane

0xcbdc,	// (0x000530e8) listscroll_set_pane

0xd664,	// (0x00053b70) main_idle_act_pane

0xc9a2,	// (0x00052eae) main_idle_trad_pane

0xc9a2,	// (0x00052eae) main_list_empty_pane

0xbf98,	// (0x000524a4) main_midp_pane

0xcbf6,	// (0x00053102) main_pane_g1_ParamLimits

0xcbf6,	// (0x00053102) main_pane_g1

0x90bd,	// (0x0004f5c9) popup_ai_message_window_ParamLimits

0x90bd,	// (0x0004f5c9) popup_ai_message_window

0x9168,	// (0x0004f674) popup_fep_china_uni_window_ParamLimits

0x9168,	// (0x0004f674) popup_fep_china_uni_window

0xcc28,	// (0x00053134) popup_fep_japan_candidate_window_ParamLimits

0xcc28,	// (0x00053134) popup_fep_japan_candidate_window

0xcc48,	// (0x00053154) popup_fep_japan_predictive_window_ParamLimits

0xcc48,	// (0x00053154) popup_fep_japan_predictive_window

0x91c4,	// (0x0004f6d0) popup_find_window

0x91e1,	// (0x0004f6ed) popup_grid_graphic_window_ParamLimits

0x91e1,	// (0x0004f6ed) popup_grid_graphic_window

0xcc78,	// (0x00053184) popup_large_graphic_colour_window

0x9279,	// (0x0004f785) popup_menu_window_ParamLimits

0x9279,	// (0x0004f785) popup_menu_window

0x9433,	// (0x0004f93f) popup_note_image_window

0x93f9,	// (0x0004f905) popup_note_wait_window_ParamLimits

0x93f9,	// (0x0004f905) popup_note_wait_window

0x944b,	// (0x0004f957) popup_note_window_ParamLimits

0x944b,	// (0x0004f957) popup_note_window

0x94f1,	// (0x0004f9fd) popup_query_code_window_ParamLimits

0x94f1,	// (0x0004f9fd) popup_query_code_window

0xcc9e,	// (0x000531aa) popup_query_data_code_window_ParamLimits

0xcc9e,	// (0x000531aa) popup_query_data_code_window

0x952b,	// (0x0004fa37) popup_query_data_window_ParamLimits

0x952b,	// (0x0004fa37) popup_query_data_window

0x95a1,	// (0x0004faad) popup_query_sat_info_window_ParamLimits

0x95a1,	// (0x0004faad) popup_query_sat_info_window

0x9638,	// (0x0004fb44) popup_snote_single_graphic_window_ParamLimits

0x9638,	// (0x0004fb44) popup_snote_single_graphic_window

0x9638,	// (0x0004fb44) popup_snote_single_text_window_ParamLimits

0x9638,	// (0x0004fb44) popup_snote_single_text_window

0xccbb,	// (0x000531c7) popup_sub_window_general

0xcd03,	// (0x0005320f) popup_window_general_ParamLimits

0xcd03,	// (0x0005320f) popup_window_general

0xcd18,	// (0x00053224) power_save_pane

0x7f5b,	// (0x0004e467) control_pane_g1_ParamLimits

0x7f5b,	// (0x0004e467) control_pane_g1

0x1301,	// (0x0004780d) control_pane_g2_ParamLimits

0x1301,	// (0x0004780d) control_pane_g2

0xcb9e,	// (0x000530aa) control_pane_g3_ParamLimits

0xcb9e,	// (0x000530aa) control_pane_g3

0x0007,

0xf7c3,	// (0x00055ccf) control_pane_g_ParamLimits

0xf7c3,	// (0x00055ccf) control_pane_g

0x7f9a,	// (0x0004e4a6) control_pane_t1_ParamLimits

0x7f9a,	// (0x0004e4a6) control_pane_t1

0x7ff8,	// (0x0004e504) control_pane_t2_ParamLimits

0x7ff8,	// (0x0004e504) control_pane_t2

0x0002,

0xf7d4,	// (0x00055ce0) control_pane_t_ParamLimits

0xf7d4,	// (0x00055ce0) control_pane_t

0xcabf,	// (0x00052fcb) navi_navi_volume_pane_cp1

0xcac8,	// (0x00052fd4) status_small_icon_pane

0xcad0,	// (0x00052fdc) status_small_pane_g1_ParamLimits

0xcad0,	// (0x00052fdc) status_small_pane_g1

0xcb04,	// (0x00053010) status_small_pane_g2_ParamLimits

0xcb04,	// (0x00053010) status_small_pane_g2

0xcb10,	// (0x0005301c) status_small_pane_g3_ParamLimits

0xcb10,	// (0x0005301c) status_small_pane_g3

0xcb1c,	// (0x00053028) status_small_pane_g4_ParamLimits

0xcb1c,	// (0x00053028) status_small_pane_g4

0xcb28,	// (0x00053034) status_small_pane_g5_ParamLimits

0xcb28,	// (0x00053034) status_small_pane_g5

0xcb37,	// (0x00053043) status_small_pane_g6_ParamLimits

0xcb37,	// (0x00053043) status_small_pane_g6

0x0007,

0xf7b2,	// (0x00055cbe) status_small_pane_g_ParamLimits

0xf7b2,	// (0x00055cbe) status_small_pane_g

0xcb67,	// (0x00053073) status_small_pane_t1

0xcb8a,	// (0x00053096) status_small_wait_pane_ParamLimits

0xcb8a,	// (0x00053096) status_small_wait_pane

0x8ed9,	// (0x0004f3e5) aid_levels_signal_ParamLimits

0x8ed9,	// (0x0004f3e5) aid_levels_signal

0x8ef1,	// (0x0004f3fd) signal_pane_g1_ParamLimits

0x8ef1,	// (0x0004f3fd) signal_pane_g1

0x8f0c,	// (0x0004f418) signal_pane_g2_ParamLimits

0x8f0c,	// (0x0004f418) signal_pane_g2

0x0001,

0xf747,	// (0x00055c53) signal_pane_g_ParamLimits

0xf747,	// (0x00055c53) signal_pane_g

0xc4ff,	// (0x00052a0b) context_pane_g1

0x86fe,	// (0x0004ec0a) title_pane_g1

0x8733,	// (0x0004ec3f) title_pane_t1

0xb6f2,	// (0x00051bfe) title_pane_t2

0xb718,	// (0x00051c24) title_pane_t3

0x0002,

0xf59b,	// (0x00055aa7) title_pane_t

0x9af0,	// (0x0004fffc) aid_levels_battery_ParamLimits

0x9af0,	// (0x0004fffc) aid_levels_battery

0x9b0c,	// (0x00050018) battery_pane_g1_ParamLimits

0x9b0c,	// (0x00050018) battery_pane_g1

0x9b29,	// (0x00050035) battery_pane_g2_ParamLimits

0x9b29,	// (0x00050035) battery_pane_g2

0x0001,

0xf7e6,	// (0x00055cf2) battery_pane_g_ParamLimits

0xf7e6,	// (0x00055cf2) battery_pane_g

0x9d2e,	// (0x0005023a) uni_indicator_pane_g1

0x9d43,	// (0x0005024f) uni_indicator_pane_g2

0x9d58,	// (0x00050264) uni_indicator_pane_g3

0x0005,

0xf949,	// (0x00055e55) uni_indicator_pane_g

0xc814,	// (0x00052d20) navi_icon_pane_ParamLimits

0xc814,	// (0x00052d20) navi_icon_pane

0xc75d,	// (0x00052c69) navi_midp_pane

0xc830,	// (0x00052d3c) navi_navi_pane

0xc83a,	// (0x00052d46) navi_text_pane_ParamLimits

0xc83a,	// (0x00052d46) navi_text_pane

0xb6d2,	// (0x00051bde) status_small_wait_pane_g1

0xb9ff,	// (0x00051f0b) status_small_wait_pane_g2

0x0001,

0xf944,	// (0x00055e50) status_small_wait_pane_g

0xdc17,	// (0x00054123) navi_navi_icon_text_pane

0xdc1f,	// (0x0005412b) navi_navi_pane_g1_ParamLimits

0xdc1f,	// (0x0005412b) navi_navi_pane_g1

0xdc31,	// (0x0005413d) navi_navi_pane_g2_ParamLimits

0xdc31,	// (0x0005413d) navi_navi_pane_g2

0x0001,

0xf912,	// (0x00055e1e) navi_navi_pane_g_ParamLimits

0xf912,	// (0x00055e1e) navi_navi_pane_g

0xdc43,	// (0x0005414f) navi_navi_tabs_pane

0xdc4c,	// (0x00054158) navi_navi_text_pane

0xdc17,	// (0x00054123) navi_navi_volume_pane

0x9cef,	// (0x000501fb) navi_text_pane_t1

0x9ce3,	// (0x000501ef) navi_icon_pane_g1

0xdb28,	// (0x00054034) navi_navi_text_pane_t1

0x8245,	// (0x0004e751) navi_navi_volume_pane_g1

0x824d,	// (0x0004e759) volume_small_pane

0x9c3f,	// (0x0005014b) navi_navi_icon_text_pane_g1

0x9c47,	// (0x00050153) navi_navi_icon_text_pane_t1

0xc830,	// (0x00052d3c) navi_tabs_2_long_pane

0xc830,	// (0x00052d3c) navi_tabs_2_pane

0xc830,	// (0x00052d3c) navi_tabs_3_long_pane

0xc830,	// (0x00052d3c) navi_tabs_3_pane

0xc830,	// (0x00052d3c) navi_tabs_4_pane

0x8225,	// (0x0004e731) tabs_2_active_pane_ParamLimits

0x8225,	// (0x0004e731) tabs_2_active_pane

0x8235,	// (0x0004e741) tabs_2_passive_pane_ParamLimits

0x8235,	// (0x0004e741) tabs_2_passive_pane

0x81f3,	// (0x0004e6ff) tabs_3_active_pane_ParamLimits

0x81f3,	// (0x0004e6ff) tabs_3_active_pane

0x8203,	// (0x0004e70f) tabs_3_passive_pane_ParamLimits

0x8203,	// (0x0004e70f) tabs_3_passive_pane

0x8214,	// (0x0004e720) tabs_3_passive_pane_cp_ParamLimits

0x8214,	// (0x0004e720) tabs_3_passive_pane_cp

0x81af,	// (0x0004e6bb) tabs_4_active_pane_ParamLimits

0x81af,	// (0x0004e6bb) tabs_4_active_pane

0x81c0,	// (0x0004e6cc) tabs_4_passive_pane_ParamLimits

0x81c0,	// (0x0004e6cc) tabs_4_passive_pane

0x81d1,	// (0x0004e6dd) tabs_4_passive_pane_cp_ParamLimits

0x81d1,	// (0x0004e6dd) tabs_4_passive_pane_cp

0x81e2,	// (0x0004e6ee) tabs_4_passive_pane_cp2_ParamLimits

0x81e2,	// (0x0004e6ee) tabs_4_passive_pane_cp2

0x818f,	// (0x0004e69b) tabs_2_long_active_pane_ParamLimits

0x818f,	// (0x0004e69b) tabs_2_long_active_pane

0x819f,	// (0x0004e6ab) tabs_2_long_passive_pane_ParamLimits

0x819f,	// (0x0004e6ab) tabs_2_long_passive_pane

0x815c,	// (0x0004e668) tabs_3_long_active_pane_ParamLimits

0x815c,	// (0x0004e668) tabs_3_long_active_pane

0x816d,	// (0x0004e679) tabs_3_long_passive_pane_ParamLimits

0x816d,	// (0x0004e679) tabs_3_long_passive_pane

0x817e,	// (0x0004e68a) tabs_3_long_passive_pane_cp_ParamLimits

0x817e,	// (0x0004e68a) tabs_3_long_passive_pane_cp

0x1571,	// (0x00047a7d) volume_small_pane_g1

0x810b,	// (0x0004e617) volume_small_pane_g2

0x8114,	// (0x0004e620) volume_small_pane_g3

0x811d,	// (0x0004e629) volume_small_pane_g4

0x8126,	// (0x0004e632) volume_small_pane_g5

0x812f,	// (0x0004e63b) volume_small_pane_g6

0x8138,	// (0x0004e644) volume_small_pane_g7

0x8141,	// (0x0004e64d) volume_small_pane_g8

0x814a,	// (0x0004e656) volume_small_pane_g9

0x8153,	// (0x0004e65f) volume_small_pane_g10

0x0009,

0xf8de,	// (0x00055dea) volume_small_pane_g

0xb72a,	// (0x00051c36) bg_active_tab_pane_cp2_ParamLimits

0xb72a,	// (0x00051c36) bg_active_tab_pane_cp2

0x87bf,	// (0x0004eccb) tabs_3_active_pane_g1

0x87c7,	// (0x0004ecd3) tabs_3_active_pane_t1

0xb72a,	// (0x00051c36) bg_passive_tab_pane_cp2_ParamLimits

0xb72a,	// (0x00051c36) bg_passive_tab_pane_cp2

0x87bf,	// (0x0004eccb) tabs_3_passive_pane_g1

0x87c7,	// (0x0004ecd3) tabs_3_passive_pane_t1

0xb72a,	// (0x00051c36) bg_active_tab_pane_cp3_ParamLimits

0xb72a,	// (0x00051c36) bg_active_tab_pane_cp3

0x87d9,	// (0x0004ece5) tabs_4_active_pane_g1

0x87e1,	// (0x0004eced) tabs_4_active_pane_t1

0xb72a,	// (0x00051c36) bg_passive_tab_pane_cp3_ParamLimits

0xb72a,	// (0x00051c36) bg_passive_tab_pane_cp3

0x87d9,	// (0x0004ece5) tabs_4_1_passive_pane_g1

0x87e1,	// (0x0004eced) tabs_4_1_passive_pane_t1

0xbf98,	// (0x000524a4) list_highlight_pane_cp2

0x9de1,	// (0x000502ed) list_set_pane_ParamLimits

0x9de1,	// (0x000502ed) list_set_pane

0x9e7b,	// (0x00050387) main_pane_set_t1_ParamLimits

0x9e7b,	// (0x00050387) main_pane_set_t1

0x9e9b,	// (0x000503a7) main_pane_set_t2_ParamLimits

0x9e9b,	// (0x000503a7) main_pane_set_t2

0x9eaf,	// (0x000503bb) main_pane_set_t3_ParamLimits

0x9eaf,	// (0x000503bb) main_pane_set_t3

0x9ec1,	// (0x000503cd) main_pane_set_t4_ParamLimits

0x9ec1,	// (0x000503cd) main_pane_set_t4

0x0003,

0xf9ae,	// (0x00055eba) main_pane_set_t_ParamLimits

0xf9ae,	// (0x00055eba) main_pane_set_t

0x9ed3,	// (0x000503df) setting_code_pane

0x9edd,	// (0x000503e9) setting_slider_graphic_pane

0x9edd,	// (0x000503e9) setting_slider_pane

0x9edd,	// (0x000503e9) setting_text_pane

0x9edd,	// (0x000503e9) setting_volume_pane

0x0840,	// (0x00046d4c) volume_set_pane

0xb738,	// (0x00051c44) bg_set_opt_pane_cp

0x0848,	// (0x00046d54) setting_slider_pane_t1

0x0861,	// (0x00046d6d) setting_slider_pane_t2

0x087b,	// (0x00046d87) setting_slider_pane_t3

0x0002,

0xf5a2,	// (0x00055aae) setting_slider_pane_t

0x0893,	// (0x00046d9f) slider_set_pane

0xb6dc,	// (0x00051be8) bg_set_opt_pane_cp2

0xb746,	// (0x00051c52) setting_slider_graphic_pane_g1

0x08a9,	// (0x00046db5) setting_slider_graphic_pane_t1

0x08b9,	// (0x00046dc5) setting_slider_graphic_pane_t2

0x0001,

0xf5a9,	// (0x00055ab5) setting_slider_graphic_pane_t

0x08c9,	// (0x00046dd5) slider_set_pane_cp

0xb6dc,	// (0x00051be8) input_focus_pane_cp1

0xe098,	// (0x000545a4) list_set_text_pane

0xb6d2,	// (0x00051bde) setting_text_pane_g1

0xb6dc,	// (0x00051be8) input_focus_pane_cp2

0xb6d2,	// (0x00051bde) setting_code_pane_g1

0xb74f,	// (0x00051c5b) setting_code_pane_t1

0x08d1,	// (0x00046ddd) set_text_pane_t1_ParamLimits

0x08d1,	// (0x00046ddd) set_text_pane_t1

0xbea7,	// (0x000523b3) set_opt_bg_pane_g1

0xbeaf,	// (0x000523bb) set_opt_bg_pane_g2

0xe072,	// (0x0005457e) set_opt_bg_pane_g3

0xbebf,	// (0x000523cb) set_opt_bg_pane_g4

0xbec7,	// (0x000523d3) set_opt_bg_pane_g5

0xbecf,	// (0x000523db) set_opt_bg_pane_g6

0xe07c,	// (0x00054588) set_opt_bg_pane_g7

0xe084,	// (0x00054590) set_opt_bg_pane_g8

0xe08e,	// (0x0005459a) set_opt_bg_pane_g9

0x0008,

0xf99b,	// (0x00055ea7) set_opt_bg_pane_g

0xe065,	// (0x00054571) slider_set_pane_g1

0x1739,	// (0x00047c45) slider_set_pane_g2

0x0006,

0xf98c,	// (0x00055e98) slider_set_pane_g

0x16d5,	// (0x00047be1) volume_set_pane_g1

0x16dd,	// (0x00047be9) volume_set_pane_g2

0x16e5,	// (0x00047bf1) volume_set_pane_g3

0x16ed,	// (0x00047bf9) volume_set_pane_g4

0x16f5,	// (0x00047c01) volume_set_pane_g5

0x16fd,	// (0x00047c09) volume_set_pane_g6

0x1705,	// (0x00047c11) volume_set_pane_g7

0x170d,	// (0x00047c19) volume_set_pane_g8

0x1715,	// (0x00047c21) volume_set_pane_g9

0x171d,	// (0x00047c29) volume_set_pane_g10

0x0009,

0xf964,	// (0x00055e70) volume_set_pane_g

0x87f3,	// (0x0004ecff) indicator_pane_ParamLimits

0x87f3,	// (0x0004ecff) indicator_pane

0x881b,	// (0x0004ed27) main_idle_pane_g2_ParamLimits

0x881b,	// (0x0004ed27) main_idle_pane_g2

0x8853,	// (0x0004ed5f) main_pane_idle_g1_ParamLimits

0x8853,	// (0x0004ed5f) main_pane_idle_g1

0xb75d,	// (0x00051c69) popup_clock_digital_analogue_window_ParamLimits

0xb75d,	// (0x00051c69) popup_clock_digital_analogue_window

0x887a,	// (0x0004ed86) soft_indicator_pane_ParamLimits

0x887a,	// (0x0004ed86) soft_indicator_pane

0x8894,	// (0x0004eda0) wallpaper_pane_ParamLimits

0x8894,	// (0x0004eda0) wallpaper_pane

0xb6d2,	// (0x00051bde) wallpaper_pane_g1

0x88a6,	// (0x0004edb2) indicator_pane_g1_ParamLimits

0x88a6,	// (0x0004edb2) indicator_pane_g1

0xe1da,	// (0x000546e6) navi_navi_icon_text_pane_srt_g1

0xb78b,	// (0x00051c97) soft_indicator_pane_t1

0xb7a5,	// (0x00051cb1) aid_ps_area_pane

0x88bc,	// (0x0004edc8) aid_ps_clock_pane

0xb7b6,	// (0x00051cc2) aid_ps_indicator_pane

0xb7c2,	// (0x00051cce) indicator_ps_pane_ParamLimits

0xb7c2,	// (0x00051cce) indicator_ps_pane

0xb7d1,	// (0x00051cdd) power_save_pane_g1_ParamLimits

0xb7d1,	// (0x00051cdd) power_save_pane_g1

0xb7dd,	// (0x00051ce9) power_save_pane_g2_ParamLimits

0xb7dd,	// (0x00051ce9) power_save_pane_g2

0x0451,	// (0x0004695d) aid_navinavi_width_pane

0xb7a5,	// (0x00051cb1) aid_ps_area_pane_ParamLimits

0x0001,

0xf5ae,	// (0x00055aba) power_save_pane_g_ParamLimits

0xf5ae,	// (0x00055aba) power_save_pane_g

0xb7eb,	// (0x00051cf7) power_save_pane_t1_ParamLimits

0xb7eb,	// (0x00051cf7) power_save_pane_t1

0x88bc,	// (0x0004edc8) aid_ps_clock_pane_ParamLimits

0xb7b6,	// (0x00051cc2) aid_ps_indicator_pane_ParamLimits

0xb7fd,	// (0x00051d09) power_save_pane_t4_ParamLimits

0xb7fd,	// (0x00051d09) power_save_pane_t4

0x0001,

0xf5b3,	// (0x00055abf) power_save_pane_t_ParamLimits

0xf5b3,	// (0x00055abf) power_save_pane_t

0xb827,	// (0x00051d33) power_save_t3_ParamLimits

0xb827,	// (0x00051d33) power_save_t3

0xb812,	// (0x00051d1e) power_save_t2_ParamLimits

0xb812,	// (0x00051d1e) power_save_t2

0xb83c,	// (0x00051d48) indicator_ps_pane_g1

0x88ca,	// (0x0004edd6) ai_gene_pane_ParamLimits

0x88ca,	// (0x0004edd6) ai_gene_pane

0x88e1,	// (0x0004eded) ai_links_pane_ParamLimits

0x88e1,	// (0x0004eded) ai_links_pane

0x88f9,	// (0x0004ee05) indicator_pane_cp1_ParamLimits

0x88f9,	// (0x0004ee05) indicator_pane_cp1

0x8908,	// (0x0004ee14) main_pane_idle_g1_cp_ParamLimits

0x8908,	// (0x0004ee14) main_pane_idle_g1_cp

0xb845,	// (0x00051d51) popup_ai_links_title_window

0x8920,	// (0x0004ee2c) soft_indicator_pane_cp1_ParamLimits

0x8920,	// (0x0004ee2c) soft_indicator_pane_cp1

0xdeb9,	// (0x000543c5) ai_links_pane_g1

0xdec2,	// (0x000543ce) grid_ai_links_pane

0x9d25,	// (0x00050231) ai_gene_pane_1

0xdea7,	// (0x000543b3) ai_gene_pane_2

0xdeb0,	// (0x000543bc) list_highlight_pane_cp4

0x9d01,	// (0x0005020d) cell_ai_link_pane_ParamLimits

0x9d01,	// (0x0005020d) cell_ai_link_pane

0xde9f,	// (0x000543ab) cell_ai_link_pane_g1

0xb9ff,	// (0x00051f0b) cell_ai_link_pane_g2

0x0001,

0xf93f,	// (0x00055e4b) cell_ai_link_pane_g

0xb6dc,	// (0x00051be8) grid_highlight_cp2

0xb6dc,	// (0x00051be8) bg_popup_sub_pane_cp1

0xb85c,	// (0x00051d68) popup_ai_links_title_window_t1

0xdded,	// (0x000542f9) ai_gene_pane_1_g1_ParamLimits

0xdded,	// (0x000542f9) ai_gene_pane_1_g1

0xddf9,	// (0x00054305) ai_gene_pane_1_g2_ParamLimits

0xddf9,	// (0x00054305) ai_gene_pane_1_g2

0x0001,

0xf935,	// (0x00055e41) ai_gene_pane_1_g_ParamLimits

0xf935,	// (0x00055e41) ai_gene_pane_1_g

0xde06,	// (0x00054312) ai_gene_pane_1_t1_ParamLimits

0xde06,	// (0x00054312) ai_gene_pane_1_t1

0xde3a,	// (0x00054346) grid_ai_soft_ind_pane

0xddd8,	// (0x000542e4) ai_gene_pane_2_t1_ParamLimits

0xddd8,	// (0x000542e4) ai_gene_pane_2_t1

0x8934,	// (0x0004ee40) main_pane_empty_t1_ParamLimits

0x8934,	// (0x0004ee40) main_pane_empty_t1

0x894c,	// (0x0004ee58) main_pane_empty_t2_ParamLimits

0x894c,	// (0x0004ee58) main_pane_empty_t2

0x8c22,	// (0x0004f12e) main_pane_empty_t3_ParamLimits

0x8c22,	// (0x0004f12e) main_pane_empty_t3

0x8c34,	// (0x0004f140) main_pane_empty_t4_ParamLimits

0x8c34,	// (0x0004f140) main_pane_empty_t4

0x8c46,	// (0x0004f152) main_pane_empty_t5_ParamLimits

0x8c46,	// (0x0004f152) main_pane_empty_t5

0x0004,

0xf5b8,	// (0x00055ac4) main_pane_empty_t_ParamLimits

0xf5b8,	// (0x00055ac4) main_pane_empty_t

0xbef8,	// (0x00052404) bg_popup_window_pane_ParamLimits

0xbef8,	// (0x00052404) bg_popup_window_pane

0xdb36,	// (0x00054042) find_popup_pane_cp2_ParamLimits

0xdb36,	// (0x00054042) find_popup_pane_cp2

0xdb42,	// (0x0005404e) heading_pane_ParamLimits

0xdb42,	// (0x0005404e) heading_pane

0xb6dc,	// (0x00051be8) bg_popup_sub_pane

0x9c64,	// (0x00050170) bg_popup_window_pane_g1_ParamLimits

0x9c64,	// (0x00050170) bg_popup_window_pane_g1

0x9c73,	// (0x0005017f) bg_popup_window_pane_g2_ParamLimits

0x9c73,	// (0x0005017f) bg_popup_window_pane_g2

0x9c7f,	// (0x0005018b) bg_popup_window_pane_g3_ParamLimits

0x9c7f,	// (0x0005018b) bg_popup_window_pane_g3

0x9c8b,	// (0x00050197) bg_popup_window_pane_g4_ParamLimits

0x9c8b,	// (0x00050197) bg_popup_window_pane_g4

0x9c9a,	// (0x000501a6) bg_popup_window_pane_g5_ParamLimits

0x9c9a,	// (0x000501a6) bg_popup_window_pane_g5

0x9caa,	// (0x000501b6) bg_popup_window_pane_g6_ParamLimits

0x9caa,	// (0x000501b6) bg_popup_window_pane_g6

0x9cb6,	// (0x000501c2) bg_popup_window_pane_g7_ParamLimits

0x9cb6,	// (0x000501c2) bg_popup_window_pane_g7

0x9cc5,	// (0x000501d1) bg_popup_window_pane_g8_ParamLimits

0x9cc5,	// (0x000501d1) bg_popup_window_pane_g8

0x9cd4,	// (0x000501e0) bg_popup_window_pane_g9_ParamLimits

0x9cd4,	// (0x000501e0) bg_popup_window_pane_g9

0xdb1c,	// (0x00054028) bg_popup_window_pane_g10_ParamLimits

0xdb1c,	// (0x00054028) bg_popup_window_pane_g10

0x0009,

0xf8fd,	// (0x00055e09) bg_popup_window_pane_g_ParamLimits

0xf8fd,	// (0x00055e09) bg_popup_window_pane_g

0xdad3,	// (0x00053fdf) bg_popup_heading_pane_ParamLimits

0xdad3,	// (0x00053fdf) bg_popup_heading_pane

0x17c1,	// (0x00047ccd) tabs_4_passive_pane_cp_srt_ParamLimits

0x17c1,	// (0x00047ccd) tabs_4_passive_pane_cp_srt

0x17d3,	// (0x00047cdf) tabs_4_passive_pane_srt_ParamLimits

0xdae7,	// (0x00053ff3) heading_pane_g2

0x17d3,	// (0x00047cdf) tabs_4_passive_pane_srt

0xcfd8,	// (0x000534e4) bg_passive_tab_pane_cp3_srt_ParamLimits

0xcfd8,	// (0x000534e4) bg_passive_tab_pane_cp3_srt

0xdaef,	// (0x00053ffb) heading_pane_t1_ParamLimits

0xdaef,	// (0x00053ffb) heading_pane_t1

0xdb06,	// (0x00054012) heading_pane_t2_ParamLimits

0xdb06,	// (0x00054012) heading_pane_t2

0x0001,

0xf8f8,	// (0x00055e04) heading_pane_t_ParamLimits

0xf8f8,	// (0x00055e04) heading_pane_t

0xd5f4,	// (0x00053b00) bg_popup_heading_pane_g1

0xd6af,	// (0x00053bbb) bg_popup_heading_pane_g2

0xd6b9,	// (0x00053bc5) bg_popup_heading_pane_g3

0xd6c3,	// (0x00053bcf) bg_popup_heading_pane_g4

0xd6cd,	// (0x00053bd9) bg_popup_heading_pane_g5

0xd6d7,	// (0x00053be3) bg_popup_heading_pane_g6

0xd6df,	// (0x00053beb) bg_popup_heading_pane_g7

0xd6e7,	// (0x00053bf3) bg_popup_heading_pane_g8

0xd6f1,	// (0x00053bfd) bg_popup_heading_pane_g9

0x0008,

0xf8b4,	// (0x00055dc0) bg_popup_heading_pane_g

0xcee8,	// (0x000533f4) bg_popup_sub_pane_g1

0xcef8,	// (0x00053404) bg_popup_sub_pane_g2

0xcef0,	// (0x000533fc) bg_popup_sub_pane_g3

0xcf08,	// (0x00053414) bg_popup_sub_pane_g4

0xcf00,	// (0x0005340c) bg_popup_sub_pane_g5

0xcf10,	// (0x0005341c) bg_popup_sub_pane_g6

0xcf18,	// (0x00053424) bg_popup_sub_pane_g7

0xcf28,	// (0x00053434) bg_popup_sub_pane_g8

0xcf20,	// (0x0005342c) bg_popup_sub_pane_g9

0x0008,

0xf88e,	// (0x00055d9a) bg_popup_sub_pane_g

0xb72a,	// (0x00051c36) bg_popup_window_pane_cp5_ParamLimits

0xb72a,	// (0x00051c36) bg_popup_window_pane_cp5

0xb879,	// (0x00051d85) popup_note_window_g1_ParamLimits

0xb879,	// (0x00051d85) popup_note_window_g1

0xb885,	// (0x00051d91) popup_note_window_t1_ParamLimits

0xb885,	// (0x00051d91) popup_note_window_t1

0xb89b,	// (0x00051da7) popup_note_window_t2_ParamLimits

0xb89b,	// (0x00051da7) popup_note_window_t2

0xb8b1,	// (0x00051dbd) popup_note_window_t3_ParamLimits

0xb8b1,	// (0x00051dbd) popup_note_window_t3

0xb8c7,	// (0x00051dd3) popup_note_window_t4_ParamLimits

0xb8c7,	// (0x00051dd3) popup_note_window_t4

0xb8ef,	// (0x00051dfb) popup_note_window_t5_ParamLimits

0xb8ef,	// (0x00051dfb) popup_note_window_t5

0x0004,

0xf5c3,	// (0x00055acf) popup_note_window_t_ParamLimits

0xf5c3,	// (0x00055acf) popup_note_window_t

0xb913,	// (0x00051e1f) bg_popup_window_pane_cp6_ParamLimits

0xb913,	// (0x00051e1f) bg_popup_window_pane_cp6

0xd570,	// (0x00053a7c) popup_note_image_window_g1_ParamLimits

0xd570,	// (0x00053a7c) popup_note_image_window_g1

0xd57c,	// (0x00053a88) popup_note_image_window_g2_ParamLimits

0xd57c,	// (0x00053a88) popup_note_image_window_g2

0x0001,

0xf882,	// (0x00055d8e) popup_note_image_window_g_ParamLimits

0xf882,	// (0x00055d8e) popup_note_image_window_g

0xd595,	// (0x00053aa1) popup_note_image_window_t1_ParamLimits

0xd595,	// (0x00053aa1) popup_note_image_window_t1

0xd5ae,	// (0x00053aba) popup_note_image_window_t2_ParamLimits

0xd5ae,	// (0x00053aba) popup_note_image_window_t2

0xd5c7,	// (0x00053ad3) popup_note_image_window_t3_ParamLimits

0xd5c7,	// (0x00053ad3) popup_note_image_window_t3

0x0002,

0xf887,	// (0x00055d93) popup_note_image_window_t_ParamLimits

0xf887,	// (0x00055d93) popup_note_image_window_t

0xd44d,	// (0x00053959) bg_popup_window_pane_cp7_ParamLimits

0xd44d,	// (0x00053959) bg_popup_window_pane_cp7

0xd47d,	// (0x00053989) popup_note_wait_window_g1_ParamLimits

0xd47d,	// (0x00053989) popup_note_wait_window_g1

0xd489,	// (0x00053995) popup_note_wait_window_g2_ParamLimits

0xd489,	// (0x00053995) popup_note_wait_window_g2

0x0002,

0xf870,	// (0x00055d7c) popup_note_wait_window_g_ParamLimits

0xf870,	// (0x00055d7c) popup_note_wait_window_g

0xd4a1,	// (0x000539ad) popup_note_wait_window_t1_ParamLimits

0xd4a1,	// (0x000539ad) popup_note_wait_window_t1

0xd4c8,	// (0x000539d4) popup_note_wait_window_t2_ParamLimits

0xd4c8,	// (0x000539d4) popup_note_wait_window_t2

0xd4e5,	// (0x000539f1) popup_note_wait_window_t3_ParamLimits

0xd4e5,	// (0x000539f1) popup_note_wait_window_t3

0xd4f8,	// (0x00053a04) popup_note_wait_window_t4_ParamLimits

0xd4f8,	// (0x00053a04) popup_note_wait_window_t4

0x0004,

0xf877,	// (0x00055d83) popup_note_wait_window_t_ParamLimits

0xf877,	// (0x00055d83) popup_note_wait_window_t

0xd51d,	// (0x00053a29) wait_bar_pane_ParamLimits

0xd51d,	// (0x00053a29) wait_bar_pane

0xb6dc,	// (0x00051be8) wait_anim_pane

0xb6dc,	// (0x00051be8) wait_border_pane

0xb6d2,	// (0x00051bde) wait_anim_pane_g1

0xb6d2,	// (0x00051bde) wait_anim_pane_g2

0x0001,

0xf742,	// (0x00055c4e) wait_anim_pane_g

0xd3f1,	// (0x000538fd) wait_border_pane_g1

0xd3fc,	// (0x00053908) wait_border_pane_g2

0xd405,	// (0x00053911) wait_border_pane_g3

0x0002,

0xf869,	// (0x00055d75) wait_border_pane_g

0xd34e,	// (0x0005385a) bg_popup_window_pane_cp16_ParamLimits

0xd34e,	// (0x0005385a) bg_popup_window_pane_cp16

0xd35c,	// (0x00053868) indicator_popup_pane_cp4_ParamLimits

0xd35c,	// (0x00053868) indicator_popup_pane_cp4

0xd370,	// (0x0005387c) popup_query_data_window_t1_ParamLimits

0xd370,	// (0x0005387c) popup_query_data_window_t1

0xd382,	// (0x0005388e) popup_query_data_window_t2_ParamLimits

0xd382,	// (0x0005388e) popup_query_data_window_t2

0xd39b,	// (0x000538a7) popup_query_data_window_t3_ParamLimits

0xd39b,	// (0x000538a7) popup_query_data_window_t3

0x0002,

0xf862,	// (0x00055d6e) popup_query_data_window_t_ParamLimits

0xf862,	// (0x00055d6e) popup_query_data_window_t

0xd3b5,	// (0x000538c1) query_popup_data_pane_ParamLimits

0xd3b5,	// (0x000538c1) query_popup_data_pane

0xd3c9,	// (0x000538d5) query_popup_data_pane_cp1_ParamLimits

0xd3c9,	// (0x000538d5) query_popup_data_pane_cp1

0xb913,	// (0x00051e1f) bg_popup_window_pane_cp10_ParamLimits

0xb913,	// (0x00051e1f) bg_popup_window_pane_cp10

0xd2b1,	// (0x000537bd) indicator_popup_pane_ParamLimits

0xd2b1,	// (0x000537bd) indicator_popup_pane

0xb96a,	// (0x00051e76) popup_query_code_window_t1_ParamLimits

0xb96a,	// (0x00051e76) popup_query_code_window_t1

0xd2c9,	// (0x000537d5) popup_query_code_window_t2_ParamLimits

0xd2c9,	// (0x000537d5) popup_query_code_window_t2

0xd307,	// (0x00053813) popup_query_code_window_t3_ParamLimits

0xd307,	// (0x00053813) popup_query_code_window_t3

0x0002,

0xf85b,	// (0x00055d67) popup_query_code_window_t_ParamLimits

0xf85b,	// (0x00055d67) popup_query_code_window_t

0xd336,	// (0x00053842) query_popup_pane_ParamLimits

0xd336,	// (0x00053842) query_popup_pane

0xb913,	// (0x00051e1f) bg_popup_window_pane_cp15_ParamLimits

0xb913,	// (0x00051e1f) bg_popup_window_pane_cp15

0xb931,	// (0x00051e3d) indicator_popup_pane_cp1_ParamLimits

0xb931,	// (0x00051e3d) indicator_popup_pane_cp1

0xb944,	// (0x00051e50) indicator_popup_pane_cp2_ParamLimits

0xb944,	// (0x00051e50) indicator_popup_pane_cp2

0xb957,	// (0x00051e63) popup_query_data_code_window_g1_ParamLimits

0xb957,	// (0x00051e63) popup_query_data_code_window_g1

0xb96a,	// (0x00051e76) popup_query_data_code_window_t1_ParamLimits

0xb96a,	// (0x00051e76) popup_query_data_code_window_t1

0xb97c,	// (0x00051e88) popup_query_data_code_window_t2_ParamLimits

0xb97c,	// (0x00051e88) popup_query_data_code_window_t2

0xb98e,	// (0x00051e9a) popup_query_data_code_window_t3_ParamLimits

0xb98e,	// (0x00051e9a) popup_query_data_code_window_t3

0xb9a4,	// (0x00051eb0) popup_query_data_code_window_t4_ParamLimits

0xb9a4,	// (0x00051eb0) popup_query_data_code_window_t4

0x0003,

0xf5ce,	// (0x00055ada) popup_query_data_code_window_t_ParamLimits

0xf5ce,	// (0x00055ada) popup_query_data_code_window_t

0x1482,	// (0x0004798e) list_single_midp_graphic_pane_g3

0xb9bc,	// (0x00051ec8) query_popup_data_pane_cp2_ParamLimits

0xb9cf,	// (0x00051edb) query_popup_pane_cp2_ParamLimits

0xb9cf,	// (0x00051edb) query_popup_pane_cp2

0xb6dc,	// (0x00051be8) bg_popup_window_pane_cp11

0xd285,	// (0x00053791) heading_pane_cp5

0xba5d,	// (0x00051f69) listscroll_popup_info_pane

0xb6dc,	// (0x00051be8) input_focus_pane_cp3

0xb9e2,	// (0x00051eee) query_popup_pane_t1

0xb9f0,	// (0x00051efc) list_popup_info_pane_ParamLimits

0xb9f0,	// (0x00051efc) list_popup_info_pane

0xb9ff,	// (0x00051f0b) listscroll_popup_info_pane_g1

0xba07,	// (0x00051f13) scroll_pane_cp7

0xba11,	// (0x00051f1d) popup_info_list_pane_t1_ParamLimits

0xba11,	// (0x00051f1d) popup_info_list_pane_t1

0xba2b,	// (0x00051f37) popup_info_list_pane_t2_ParamLimits

0xba2b,	// (0x00051f37) popup_info_list_pane_t2

0x0001,

0xf5d7,	// (0x00055ae3) popup_info_list_pane_t_ParamLimits

0xf5d7,	// (0x00055ae3) popup_info_list_pane_t

0xb6dc,	// (0x00051be8) bg_popup_window_pane_cp12

0xe1f4,	// (0x00054700) find_popup_pane

0xb738,	// (0x00051c44) bg_popup_window_pane_cp3

0xba45,	// (0x00051f51) heading_pane_cp3

0xba51,	// (0x00051f5d) listscroll_popup_graphic_pane

0xb6dc,	// (0x00051be8) bg_popup_window_pane_cp4

0x8ca8,	// (0x0004f1b4) heading_pane_cp4

0xba5d,	// (0x00051f69) listscroll_popup_colour_pane

0x8cb0,	// (0x0004f1bc) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x8cb0,	// (0x0004f1bc) cell_large_graphic_colour_none_popup_pane

0x8cc4,	// (0x0004f1d0) grid_large_graphic_colour_popup_pane_ParamLimits

0x8cc4,	// (0x0004f1d0) grid_large_graphic_colour_popup_pane

0x8ce8,	// (0x0004f1f4) listscroll_popup_colour_pane_g1_ParamLimits

0x8ce8,	// (0x0004f1f4) listscroll_popup_colour_pane_g1

0x8cff,	// (0x0004f20b) listscroll_popup_colour_pane_g2_ParamLimits

0x8cff,	// (0x0004f20b) listscroll_popup_colour_pane_g2

0x8d16,	// (0x0004f222) listscroll_popup_colour_pane_g3_ParamLimits

0x8d16,	// (0x0004f222) listscroll_popup_colour_pane_g3

0x8d26,	// (0x0004f232) listscroll_popup_colour_pane_g4_ParamLimits

0x8d26,	// (0x0004f232) listscroll_popup_colour_pane_g4

0x0003,

0xf5dc,	// (0x00055ae8) listscroll_popup_colour_pane_g_ParamLimits

0xf5dc,	// (0x00055ae8) listscroll_popup_colour_pane_g

0xba65,	// (0x00051f71) scroll_pane_cp6_ParamLimits

0xba65,	// (0x00051f71) scroll_pane_cp6

0x8d36,	// (0x0004f242) cell_large_graphic_colour_popup_pane_ParamLimits

0x8d36,	// (0x0004f242) cell_large_graphic_colour_popup_pane

0xba77,	// (0x00051f83) cell_large_graphic_colour_none_popup_pane_t1

0xb6dc,	// (0x00051be8) grid_highlight_pane_cp5

0xba86,	// (0x00051f92) cell_large_graphic_colour_popup_pane_g1

0xba8e,	// (0x00051f9a) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5e5,	// (0x00055af1) cell_large_graphic_colour_popup_pane_g

0xba96,	// (0x00051fa2) cell_large_graphic_colour_popup_pane_g2_copy1

0xba9f,	// (0x00051fab) grid_highlight_pane_cp4

0xbaa7,	// (0x00051fb3) bg_popup_window_pane_cp8_ParamLimits

0xbaa7,	// (0x00051fb3) bg_popup_window_pane_cp8

0xbac2,	// (0x00051fce) popup_snote_single_text_window_g1_ParamLimits

0xbac2,	// (0x00051fce) popup_snote_single_text_window_g1

0xbad4,	// (0x00051fe0) popup_snote_single_text_window_t1_ParamLimits

0xbad4,	// (0x00051fe0) popup_snote_single_text_window_t1

0xbae7,	// (0x00051ff3) popup_snote_single_text_window_t2_ParamLimits

0xbae7,	// (0x00051ff3) popup_snote_single_text_window_t2

0xbc01,	// (0x0005210d) popup_snote_single_text_window_t3_ParamLimits

0xbc01,	// (0x0005210d) popup_snote_single_text_window_t3

0xbc3a,	// (0x00052146) popup_snote_single_text_window_t4_ParamLimits

0xbc3a,	// (0x00052146) popup_snote_single_text_window_t4

0xbc6e,	// (0x0005217a) popup_snote_single_text_window_t5_ParamLimits

0xbc6e,	// (0x0005217a) popup_snote_single_text_window_t5

0x0004,

0xf5ea,	// (0x00055af6) popup_snote_single_text_window_t_ParamLimits

0xf5ea,	// (0x00055af6) popup_snote_single_text_window_t

0xbc9d,	// (0x000521a9) bg_popup_window_pane_cp9_ParamLimits

0xbc9d,	// (0x000521a9) bg_popup_window_pane_cp9

0xbac2,	// (0x00051fce) popup_snote_single_graphic_window_g1_ParamLimits

0xbac2,	// (0x00051fce) popup_snote_single_graphic_window_g1

0xbcab,	// (0x000521b7) popup_snote_single_graphic_window_g2_ParamLimits

0xbcab,	// (0x000521b7) popup_snote_single_graphic_window_g2

0x0001,

0xf5f5,	// (0x00055b01) popup_snote_single_graphic_window_g_ParamLimits

0xf5f5,	// (0x00055b01) popup_snote_single_graphic_window_g

0xbcb7,	// (0x000521c3) popup_snote_single_graphic_window_t1_ParamLimits

0xbcb7,	// (0x000521c3) popup_snote_single_graphic_window_t1

0xbcca,	// (0x000521d6) popup_snote_single_graphic_window_t2_ParamLimits

0xbcca,	// (0x000521d6) popup_snote_single_graphic_window_t2

0xbcdd,	// (0x000521e9) popup_snote_single_graphic_window_t3_ParamLimits

0xbcdd,	// (0x000521e9) popup_snote_single_graphic_window_t3

0xbd16,	// (0x00052222) popup_snote_single_graphic_window_t4_ParamLimits

0xbd16,	// (0x00052222) popup_snote_single_graphic_window_t4

0xbd4a,	// (0x00052256) popup_snote_single_graphic_window_t5_ParamLimits

0xbd4a,	// (0x00052256) popup_snote_single_graphic_window_t5

0x0004,

0xf5fa,	// (0x00055b06) popup_snote_single_graphic_window_t_ParamLimits

0xf5fa,	// (0x00055b06) popup_snote_single_graphic_window_t

0xe17c,	// (0x00054688) grid_graphic_popup_pane_ParamLimits

0xe17c,	// (0x00054688) grid_graphic_popup_pane

0xe1a4,	// (0x000546b0) listscroll_popup_graphic_pane_g1_ParamLimits

0xe1a4,	// (0x000546b0) listscroll_popup_graphic_pane_g1

0x9fe9,	// (0x000504f5) listscroll_popup_graphic_pane_g2_ParamLimits

0x9fe9,	// (0x000504f5) listscroll_popup_graphic_pane_g2

0x0001,

0xf9d8,	// (0x00055ee4) listscroll_popup_graphic_pane_g_ParamLimits

0xf9d8,	// (0x00055ee4) listscroll_popup_graphic_pane_g

0xd676,	// (0x00053b82) scroll_pane_cp5

0x9fad,	// (0x000504b9) cell_graphic_popup_pane_ParamLimits

0x9fad,	// (0x000504b9) cell_graphic_popup_pane

0xe147,	// (0x00054653) cell_graphic_popup_pane_g1

0xe14f,	// (0x0005465b) cell_graphic_popup_pane_g2

0xba96,	// (0x00051fa2) cell_graphic_popup_pane_g3

0x0002,

0xf9d1,	// (0x00055edd) cell_graphic_popup_pane_g

0xe158,	// (0x00054664) cell_graphic_popup_pane_t2

0xba9f,	// (0x00051fab) grid_highlight_pane_cp3

0xbd8b,	// (0x00052297) list_gen_pane_ParamLimits

0xbd8b,	// (0x00052297) list_gen_pane

0xbdb3,	// (0x000522bf) scroll_pane

0x9f68,	// (0x00050474) bg_list_pane_g1_ParamLimits

0x9f68,	// (0x00050474) bg_list_pane_g1

0xe0f6,	// (0x00054602) bg_list_pane_g2_ParamLimits

0xe0f6,	// (0x00054602) bg_list_pane_g2

0xe109,	// (0x00054615) bg_list_pane_g3_ParamLimits

0xe109,	// (0x00054615) bg_list_pane_g3

0xe11b,	// (0x00054627) bg_list_pane_g4_ParamLimits

0xe11b,	// (0x00054627) bg_list_pane_g4

0x9f83,	// (0x0005048f) bg_list_pane_g5_ParamLimits

0x9f83,	// (0x0005048f) bg_list_pane_g5

0x0004,

0xf9c6,	// (0x00055ed2) bg_list_pane_g_ParamLimits

0xf9c6,	// (0x00055ed2) bg_list_pane_g

0x8a40,	// (0x0004ef4c) list_double2_graphic_large_graphic_pane_ParamLimits

0x8a40,	// (0x0004ef4c) list_double2_graphic_large_graphic_pane

0x8a40,	// (0x0004ef4c) list_double2_graphic_pane_ParamLimits

0x8a40,	// (0x0004ef4c) list_double2_graphic_pane

0x8a40,	// (0x0004ef4c) list_double2_large_graphic_pane_ParamLimits

0x8a40,	// (0x0004ef4c) list_double2_large_graphic_pane

0x8a40,	// (0x0004ef4c) list_double2_pane_ParamLimits

0x8a40,	// (0x0004ef4c) list_double2_pane

0x8a40,	// (0x0004ef4c) list_double_graphic_heading_pane_ParamLimits

0x8a40,	// (0x0004ef4c) list_double_graphic_heading_pane

0x8a40,	// (0x0004ef4c) list_double_graphic_pane_ParamLimits

0x8a40,	// (0x0004ef4c) list_double_graphic_pane

0x8a40,	// (0x0004ef4c) list_double_heading_pane_ParamLimits

0x8a40,	// (0x0004ef4c) list_double_heading_pane

0x8a40,	// (0x0004ef4c) list_double_large_graphic_pane_ParamLimits

0x8a40,	// (0x0004ef4c) list_double_large_graphic_pane

0x8a40,	// (0x0004ef4c) list_double_number_pane_ParamLimits

0x8a40,	// (0x0004ef4c) list_double_number_pane

0x8a40,	// (0x0004ef4c) list_double_pane_ParamLimits

0x8a40,	// (0x0004ef4c) list_double_pane

0x8a40,	// (0x0004ef4c) list_double_time_pane_ParamLimits

0x8a40,	// (0x0004ef4c) list_double_time_pane

0x8a40,	// (0x0004ef4c) list_setting_number_pane_ParamLimits

0x8a40,	// (0x0004ef4c) list_setting_number_pane

0x8a40,	// (0x0004ef4c) list_setting_pane_ParamLimits

0x8a40,	// (0x0004ef4c) list_setting_pane

0x9f1f,	// (0x0005042b) list_single_2graphic_pane_ParamLimits

0x9f1f,	// (0x0005042b) list_single_2graphic_pane

0x9f1f,	// (0x0005042b) list_single_graphic_heading_pane_ParamLimits

0x9f1f,	// (0x0005042b) list_single_graphic_heading_pane

0x9f1f,	// (0x0005042b) list_single_graphic_pane_ParamLimits

0x9f1f,	// (0x0005042b) list_single_graphic_pane

0x9f1f,	// (0x0005042b) list_single_heading_pane_ParamLimits

0x9f1f,	// (0x0005042b) list_single_heading_pane

0x9f56,	// (0x00050462) list_single_large_graphic_pane_ParamLimits

0x9f56,	// (0x00050462) list_single_large_graphic_pane

0x9f1f,	// (0x0005042b) list_single_number_heading_pane_ParamLimits

0x9f1f,	// (0x0005042b) list_single_number_heading_pane

0x9f1f,	// (0x0005042b) list_single_number_pane_ParamLimits

0x9f1f,	// (0x0005042b) list_single_number_pane

0x9f1f,	// (0x0005042b) list_single_pane_ParamLimits

0x9f1f,	// (0x0005042b) list_single_pane

0xb6dc,	// (0x00051be8) list_highlight_pane_cp1

0xdbae,	// (0x000540ba) list_single_pane_g1_ParamLimits

0xdbae,	// (0x000540ba) list_single_pane_g1

0x328e,	// (0x0004979a) list_single_pane_g2_ParamLimits

0x328e,	// (0x0004979a) list_single_pane_g2

0x0001,

0xf616,	// (0x00055b22) list_single_pane_g_ParamLimits

0xf616,	// (0x00055b22) list_single_pane_g

0x3432,	// (0x0004993e) list_single_pane_t1_ParamLimits

0x3432,	// (0x0004993e) list_single_pane_t1

0xdbae,	// (0x000540ba) list_single_number_pane_g1_ParamLimits

0xdbae,	// (0x000540ba) list_single_number_pane_g1

0x328e,	// (0x0004979a) list_single_number_pane_g2_ParamLimits

0x328e,	// (0x0004979a) list_single_number_pane_g2

0x0001,

0xf616,	// (0x00055b22) list_single_number_pane_g_ParamLimits

0xf616,	// (0x00055b22) list_single_number_pane_g

0x329a,	// (0x000497a6) list_single_number_pane_t1_ParamLimits

0x329a,	// (0x000497a6) list_single_number_pane_t1

0x8a02,	// (0x0004ef0e) list_single_number_pane_t2_ParamLimits

0x8a02,	// (0x0004ef0e) list_single_number_pane_t2

0x0001,

0xf987,	// (0x00055e93) list_single_number_pane_t_ParamLimits

0xf987,	// (0x00055e93) list_single_number_pane_t

0x7a06,	// (0x0004df12) list_single_graphic_pane_g1_ParamLimits

0x7a06,	// (0x0004df12) list_single_graphic_pane_g1

0xdbae,	// (0x000540ba) list_single_graphic_pane_g2_ParamLimits

0xdbae,	// (0x000540ba) list_single_graphic_pane_g2

0x328e,	// (0x0004979a) list_single_graphic_pane_g3_ParamLimits

0x328e,	// (0x0004979a) list_single_graphic_pane_g3

0x0002,

0xf605,	// (0x00055b11) list_single_graphic_pane_g_ParamLimits

0xf605,	// (0x00055b11) list_single_graphic_pane_g

0x7a12,	// (0x0004df1e) list_single_graphic_pane_t1_ParamLimits

0x7a12,	// (0x0004df1e) list_single_graphic_pane_t1

0x7a28,	// (0x0004df34) list_single_heading_pane_g1_ParamLimits

0x7a28,	// (0x0004df34) list_single_heading_pane_g1

0x328e,	// (0x0004979a) list_single_heading_pane_g2_ParamLimits

0x328e,	// (0x0004979a) list_single_heading_pane_g2

0x0001,

0xf60c,	// (0x00055b18) list_single_heading_pane_g_ParamLimits

0xf60c,	// (0x00055b18) list_single_heading_pane_g

0x7a3b,	// (0x0004df47) list_single_heading_pane_t1_ParamLimits

0x7a3b,	// (0x0004df47) list_single_heading_pane_t1

0x8961,	// (0x0004ee6d) list_single_heading_pane_t2_ParamLimits

0x8961,	// (0x0004ee6d) list_single_heading_pane_t2

0x0001,

0xf611,	// (0x00055b1d) list_single_heading_pane_t_ParamLimits

0xf611,	// (0x00055b1d) list_single_heading_pane_t

0xdbae,	// (0x000540ba) list_single_number_heading_pane_g1_ParamLimits

0xdbae,	// (0x000540ba) list_single_number_heading_pane_g1

0x328e,	// (0x0004979a) list_single_number_heading_pane_g2_ParamLimits

0x328e,	// (0x0004979a) list_single_number_heading_pane_g2

0x0001,

0xf616,	// (0x00055b22) list_single_number_heading_pane_g_ParamLimits

0xf616,	// (0x00055b22) list_single_number_heading_pane_g

0x7a51,	// (0x0004df5d) list_single_number_heading_pane_t1_ParamLimits

0x7a51,	// (0x0004df5d) list_single_number_heading_pane_t1

0x7a67,	// (0x0004df73) list_single_number_heading_pane_t2_ParamLimits

0x7a67,	// (0x0004df73) list_single_number_heading_pane_t2

0x340c,	// (0x00049918) list_single_number_heading_pane_t3_ParamLimits

0x340c,	// (0x00049918) list_single_number_heading_pane_t3

0x0002,

0xf61b,	// (0x00055b27) list_single_number_heading_pane_t_ParamLimits

0xf61b,	// (0x00055b27) list_single_number_heading_pane_t

0x7a79,	// (0x0004df85) list_single_graphic_heading_pane_g1_ParamLimits

0x7a79,	// (0x0004df85) list_single_graphic_heading_pane_g1

0x8973,	// (0x0004ee7f) list_single_graphic_heading_pane_g4_ParamLimits

0x8973,	// (0x0004ee7f) list_single_graphic_heading_pane_g4

0x328e,	// (0x0004979a) list_single_graphic_heading_pane_g5_ParamLimits

0x328e,	// (0x0004979a) list_single_graphic_heading_pane_g5

0x0002,

0xf622,	// (0x00055b2e) list_single_graphic_heading_pane_g_ParamLimits

0xf622,	// (0x00055b2e) list_single_graphic_heading_pane_g

0x7a51,	// (0x0004df5d) list_single_graphic_heading_pane_t1_ParamLimits

0x7a51,	// (0x0004df5d) list_single_graphic_heading_pane_t1

0x7a8f,	// (0x0004df9b) list_single_graphic_heading_pane_t2_ParamLimits

0x7a8f,	// (0x0004df9b) list_single_graphic_heading_pane_t2

0x0001,

0xf629,	// (0x00055b35) list_single_graphic_heading_pane_t_ParamLimits

0xf629,	// (0x00055b35) list_single_graphic_heading_pane_t

0x3d38,	// (0x0004a244) list_single_large_graphic_pane_g1_ParamLimits

0x3d38,	// (0x0004a244) list_single_large_graphic_pane_g1

0x3d44,	// (0x0004a250) list_single_large_graphic_pane_g2_ParamLimits

0x3d44,	// (0x0004a250) list_single_large_graphic_pane_g2

0x3d50,	// (0x0004a25c) list_single_large_graphic_pane_g3_ParamLimits

0x3d50,	// (0x0004a25c) list_single_large_graphic_pane_g3

0x0002,

0xf62e,	// (0x00055b3a) list_single_large_graphic_pane_g_ParamLimits

0xf62e,	// (0x00055b3a) list_single_large_graphic_pane_g

0xd3fc,	// (0x00053908) wait_border_pane_g2_copy1

0x8984,	// (0x0004ee90) list_single_large_graphic_pane_g4_cp2

0x3448,	// (0x00049954) list_single_large_graphic_pane_t1_ParamLimits

0x3448,	// (0x00049954) list_single_large_graphic_pane_t1

0xdbae,	// (0x000540ba) list_double_pane_g1_ParamLimits

0xdbae,	// (0x000540ba) list_double_pane_g1

0x328e,	// (0x0004979a) list_double_pane_g2_ParamLimits

0x328e,	// (0x0004979a) list_double_pane_g2

0x0001,

0xf616,	// (0x00055b22) list_double_pane_g_ParamLimits

0xf616,	// (0x00055b22) list_double_pane_g

0x3432,	// (0x0004993e) list_double_pane_t1_ParamLimits

0x3432,	// (0x0004993e) list_double_pane_t1

0x7aa5,	// (0x0004dfb1) list_double_pane_t2_ParamLimits

0x7aa5,	// (0x0004dfb1) list_double_pane_t2

0x0001,

0xf635,	// (0x00055b41) list_double_pane_t_ParamLimits

0xf635,	// (0x00055b41) list_double_pane_t

0x7ab7,	// (0x0004dfc3) list_double2_pane_g1_ParamLimits

0x7ab7,	// (0x0004dfc3) list_double2_pane_g1

0x7ac8,	// (0x0004dfd4) list_double2_pane_g2_ParamLimits

0x7ac8,	// (0x0004dfd4) list_double2_pane_g2

0x0001,

0xf63a,	// (0x00055b46) list_double2_pane_g_ParamLimits

0xf63a,	// (0x00055b46) list_double2_pane_g

0x7ad4,	// (0x0004dfe0) list_double2_pane_t1_ParamLimits

0x7ad4,	// (0x0004dfe0) list_double2_pane_t1

0x7aea,	// (0x0004dff6) list_double2_pane_t2_ParamLimits

0x7aea,	// (0x0004dff6) list_double2_pane_t2

0x0001,

0xf63f,	// (0x00055b4b) list_double2_pane_t_ParamLimits

0xf63f,	// (0x00055b4b) list_double2_pane_t

0xdbae,	// (0x000540ba) list_double_number_pane_g1_ParamLimits

0xdbae,	// (0x000540ba) list_double_number_pane_g1

0x328e,	// (0x0004979a) list_double_number_pane_g2_ParamLimits

0x328e,	// (0x0004979a) list_double_number_pane_g2

0x0001,

0xf616,	// (0x00055b22) list_double_number_pane_g_ParamLimits

0xf616,	// (0x00055b22) list_double_number_pane_g

0x7afc,	// (0x0004e008) list_double_number_pane_t1_ParamLimits

0x7afc,	// (0x0004e008) list_double_number_pane_t1

0x329a,	// (0x000497a6) list_double_number_pane_t2_ParamLimits

0x329a,	// (0x000497a6) list_double_number_pane_t2

0x7b0e,	// (0x0004e01a) list_double_number_pane_t3_ParamLimits

0x7b0e,	// (0x0004e01a) list_double_number_pane_t3

0x0002,

0xf644,	// (0x00055b50) list_double_number_pane_t_ParamLimits

0xf644,	// (0x00055b50) list_double_number_pane_t

0x3282,	// (0x0004978e) list_double_graphic_pane_g1_ParamLimits

0x3282,	// (0x0004978e) list_double_graphic_pane_g1

0x3d8f,	// (0x0004a29b) list_double_graphic_pane_g2_ParamLimits

0x3d8f,	// (0x0004a29b) list_double_graphic_pane_g2

0x3d9e,	// (0x0004a2aa) list_double_graphic_pane_g3_ParamLimits

0x3d9e,	// (0x0004a2aa) list_double_graphic_pane_g3

0x0003,

0xf64b,	// (0x00055b57) list_double_graphic_pane_g_ParamLimits

0xf64b,	// (0x00055b57) list_double_graphic_pane_g

0x7a12,	// (0x0004df1e) list_double_graphic_pane_t1_ParamLimits

0x7a12,	// (0x0004df1e) list_double_graphic_pane_t1

0x7b2c,	// (0x0004e038) list_double_graphic_pane_t2_ParamLimits

0x7b2c,	// (0x0004e038) list_double_graphic_pane_t2

0x0001,

0xf654,	// (0x00055b60) list_double_graphic_pane_t_ParamLimits

0xf654,	// (0x00055b60) list_double_graphic_pane_t

0x3282,	// (0x0004978e) list_double2_graphic_pane_g1_ParamLimits

0x3282,	// (0x0004978e) list_double2_graphic_pane_g1

0xdbae,	// (0x000540ba) list_double2_graphic_pane_g2_ParamLimits

0xdbae,	// (0x000540ba) list_double2_graphic_pane_g2

0x328e,	// (0x0004979a) list_double2_graphic_pane_g3_ParamLimits

0x328e,	// (0x0004979a) list_double2_graphic_pane_g3

0x0002,

0xf659,	// (0x00055b65) list_double2_graphic_pane_g_ParamLimits

0xf659,	// (0x00055b65) list_double2_graphic_pane_g

0x329a,	// (0x000497a6) list_double2_graphic_pane_t1_ParamLimits

0x329a,	// (0x000497a6) list_double2_graphic_pane_t1

0x7b3e,	// (0x0004e04a) list_double2_graphic_pane_t2_ParamLimits

0x7b3e,	// (0x0004e04a) list_double2_graphic_pane_t2

0x0001,

0xf660,	// (0x00055b6c) list_double2_graphic_pane_t_ParamLimits

0xf660,	// (0x00055b6c) list_double2_graphic_pane_t

0x7b50,	// (0x0004e05c) list_double_large_graphic_pane_g1_ParamLimits

0x7b50,	// (0x0004e05c) list_double_large_graphic_pane_g1

0x7b76,	// (0x0004e082) list_double_large_graphic_pane_g2_ParamLimits

0x7b76,	// (0x0004e082) list_double_large_graphic_pane_g2

0x328e,	// (0x0004979a) list_double_large_graphic_pane_g3_ParamLimits

0x328e,	// (0x0004979a) list_double_large_graphic_pane_g3

0x7b8c,	// (0x0004e098) list_double_large_graphic_pane_g4_ParamLimits

0x7b8c,	// (0x0004e098) list_double_large_graphic_pane_g4

0x0004,

0xf665,	// (0x00055b71) list_double_large_graphic_pane_g_ParamLimits

0xf665,	// (0x00055b71) list_double_large_graphic_pane_g

0x7b9f,	// (0x0004e0ab) list_double_large_graphic_pane_t1_ParamLimits

0x7b9f,	// (0x0004e0ab) list_double_large_graphic_pane_t1

0x7bb8,	// (0x0004e0c4) list_double_large_graphic_pane_t2_ParamLimits

0x7bb8,	// (0x0004e0c4) list_double_large_graphic_pane_t2

0x0001,

0xf670,	// (0x00055b7c) list_double_large_graphic_pane_t_ParamLimits

0xf670,	// (0x00055b7c) list_double_large_graphic_pane_t

0x7bca,	// (0x0004e0d6) list_double2_large_graphic_pane_g1_ParamLimits

0x7bca,	// (0x0004e0d6) list_double2_large_graphic_pane_g1

0x8973,	// (0x0004ee7f) list_double2_large_graphic_pane_g2_ParamLimits

0x8973,	// (0x0004ee7f) list_double2_large_graphic_pane_g2

0x328e,	// (0x0004979a) list_double2_large_graphic_pane_g3_ParamLimits

0x328e,	// (0x0004979a) list_double2_large_graphic_pane_g3

0x0002,

0xf675,	// (0x00055b81) list_double2_large_graphic_pane_g_ParamLimits

0xf675,	// (0x00055b81) list_double2_large_graphic_pane_g

0x7a51,	// (0x0004df5d) list_double2_large_graphic_pane_t1_ParamLimits

0x7a51,	// (0x0004df5d) list_double2_large_graphic_pane_t1

0x7bd6,	// (0x0004e0e2) list_double2_large_graphic_pane_t2_ParamLimits

0x7bd6,	// (0x0004e0e2) list_double2_large_graphic_pane_t2

0x0001,

0xf67c,	// (0x00055b88) list_double2_large_graphic_pane_t_ParamLimits

0xf67c,	// (0x00055b88) list_double2_large_graphic_pane_t

0x7be8,	// (0x0004e0f4) list_double_heading_pane_g1_ParamLimits

0x7be8,	// (0x0004e0f4) list_double_heading_pane_g1

0x898c,	// (0x0004ee98) list_double_heading_pane_g2_ParamLimits

0x898c,	// (0x0004ee98) list_double_heading_pane_g2

0x0001,

0xf681,	// (0x00055b8d) list_double_heading_pane_g_ParamLimits

0xf681,	// (0x00055b8d) list_double_heading_pane_g

0x7bf9,	// (0x0004e105) list_double_heading_pane_t1_ParamLimits

0x7bf9,	// (0x0004e105) list_double_heading_pane_t1

0x7c0f,	// (0x0004e11b) list_double_heading_pane_t2_ParamLimits

0x7c0f,	// (0x0004e11b) list_double_heading_pane_t2

0x0001,

0xf686,	// (0x00055b92) list_double_heading_pane_t_ParamLimits

0xf686,	// (0x00055b92) list_double_heading_pane_t

0x0ab2,	// (0x00046fbe) list_double_graphic_heading_pane_g1_ParamLimits

0x0ab2,	// (0x00046fbe) list_double_graphic_heading_pane_g1

0x7be8,	// (0x0004e0f4) list_double_graphic_heading_pane_g2_ParamLimits

0x7be8,	// (0x0004e0f4) list_double_graphic_heading_pane_g2

0x898c,	// (0x0004ee98) list_double_graphic_heading_pane_g3_ParamLimits

0x898c,	// (0x0004ee98) list_double_graphic_heading_pane_g3

0x0002,

0xf68b,	// (0x00055b97) list_double_graphic_heading_pane_g_ParamLimits

0xf68b,	// (0x00055b97) list_double_graphic_heading_pane_g

0x7c21,	// (0x0004e12d) list_double_graphic_heading_pane_t1_ParamLimits

0x7c21,	// (0x0004e12d) list_double_graphic_heading_pane_t1

0x7c37,	// (0x0004e143) list_double_graphic_heading_pane_t2_ParamLimits

0x7c37,	// (0x0004e143) list_double_graphic_heading_pane_t2

0x0001,

0xf692,	// (0x00055b9e) list_double_graphic_heading_pane_t_ParamLimits

0xf692,	// (0x00055b9e) list_double_graphic_heading_pane_t

0x7ab7,	// (0x0004dfc3) list_double_time_pane_g1_ParamLimits

0x7ab7,	// (0x0004dfc3) list_double_time_pane_g1

0x7ac8,	// (0x0004dfd4) list_double_time_pane_g2_ParamLimits

0x7ac8,	// (0x0004dfd4) list_double_time_pane_g2

0x0001,

0xf63a,	// (0x00055b46) list_double_time_pane_g_ParamLimits

0xf63a,	// (0x00055b46) list_double_time_pane_g

0x7c49,	// (0x0004e155) list_double_time_pane_t1_ParamLimits

0x7c49,	// (0x0004e155) list_double_time_pane_t1

0x7c5f,	// (0x0004e16b) list_double_time_pane_t2_ParamLimits

0x7c5f,	// (0x0004e16b) list_double_time_pane_t2

0x7c71,	// (0x0004e17d) list_double_time_pane_t3_ParamLimits

0x7c71,	// (0x0004e17d) list_double_time_pane_t3

0x7c83,	// (0x0004e18f) list_double_time_pane_t4_ParamLimits

0x7c83,	// (0x0004e18f) list_double_time_pane_t4

0x0003,

0xf697,	// (0x00055ba3) list_double_time_pane_t_ParamLimits

0xf697,	// (0x00055ba3) list_double_time_pane_t

0x7c95,	// (0x0004e1a1) list_setting_pane_g1_ParamLimits

0x7c95,	// (0x0004e1a1) list_setting_pane_g1

0x0c2a,	// (0x00047136) list_setting_pane_g2_ParamLimits

0x0c2a,	// (0x00047136) list_setting_pane_g2

0x0001,

0xf6a0,	// (0x00055bac) list_setting_pane_g_ParamLimits

0xf6a0,	// (0x00055bac) list_setting_pane_g

0x7ca1,	// (0x0004e1ad) list_setting_pane_t1_ParamLimits

0x7ca1,	// (0x0004e1ad) list_setting_pane_t1

0x7cbb,	// (0x0004e1c7) list_setting_pane_t2_ParamLimits

0x7cbb,	// (0x0004e1c7) list_setting_pane_t2

0x0002,

0xf6a5,	// (0x00055bb1) list_setting_pane_t_ParamLimits

0xf6a5,	// (0x00055bb1) list_setting_pane_t

0x7cfa,	// (0x0004e206) set_value_pane_cp_ParamLimits

0x7cfa,	// (0x0004e206) set_value_pane_cp

0x7d06,	// (0x0004e212) list_setting_number_pane_g1_ParamLimits

0x7d06,	// (0x0004e212) list_setting_number_pane_g1

0x7d12,	// (0x0004e21e) list_setting_number_pane_g2_ParamLimits

0x7d12,	// (0x0004e21e) list_setting_number_pane_g2

0x0001,

0xf6ac,	// (0x00055bb8) list_setting_number_pane_g_ParamLimits

0xf6ac,	// (0x00055bb8) list_setting_number_pane_g

0x7d1e,	// (0x0004e22a) list_setting_number_pane_t1_ParamLimits

0x7d1e,	// (0x0004e22a) list_setting_number_pane_t1

0x7d37,	// (0x0004e243) list_setting_number_pane_t2_ParamLimits

0x7d37,	// (0x0004e243) list_setting_number_pane_t2

0x7d51,	// (0x0004e25d) list_setting_number_pane_t3_ParamLimits

0x7d51,	// (0x0004e25d) list_setting_number_pane_t3

0x0003,

0xf6b1,	// (0x00055bbd) list_setting_number_pane_t_ParamLimits

0xf6b1,	// (0x00055bbd) list_setting_number_pane_t

0x7cfa,	// (0x0004e206) set_value_pane_ParamLimits

0x7cfa,	// (0x0004e206) set_value_pane

0xbde7,	// (0x000522f3) bg_set_opt_pane_ParamLimits

0xbde7,	// (0x000522f3) bg_set_opt_pane

0x0d8d,	// (0x00047299) set_value_pane_t1

0xbe08,	// (0x00052314) slider_set_pane_cp3

0xbe11,	// (0x0005231d) volume_small_pane_cp

0xbe1a,	// (0x00052326) list_form_gen_pane

0xbe23,	// (0x0005232f) scroll_pane_cp8

0x7d94,	// (0x0004e2a0) form_field_data_pane_ParamLimits

0x7d94,	// (0x0004e2a0) form_field_data_pane

0x7dab,	// (0x0004e2b7) form_field_data_wide_pane_ParamLimits

0x7dab,	// (0x0004e2b7) form_field_data_wide_pane

0x7dcb,	// (0x0004e2d7) form_field_popup_pane_ParamLimits

0x7dcb,	// (0x0004e2d7) form_field_popup_pane

0x7de3,	// (0x0004e2ef) form_field_popup_wide_pane_ParamLimits

0x7de3,	// (0x0004e2ef) form_field_popup_wide_pane

0x0e29,	// (0x00047335) form_field_slider_pane_ParamLimits

0x0e29,	// (0x00047335) form_field_slider_pane

0x0e3c,	// (0x00047348) form_field_slider_wide_pane_ParamLimits

0x0e3c,	// (0x00047348) form_field_slider_wide_pane

0xbe34,	// (0x00052340) data_form_pane

0x7e04,	// (0x0004e310) form_field_data_pane_t1

0xbe40,	// (0x0005234c) input_focus_pane

0xbe4e,	// (0x0005235a) data_form_wide_pane

0x2934,	// (0x00048e40) form_field_data_wide_pane_t1

0xbab4,	// (0x00051fc0) input_focus_pane_cp6

0x7e1e,	// (0x0004e32a) form_field_popup_pane_t1

0xbe40,	// (0x0005234c) input_focus_pane_cp7

0xbe7a,	// (0x00052386) list_form_pane

0x2976,	// (0x00048e82) form_field_popup_wide_pane_t1

0xbe40,	// (0x0005234c) input_focus_pane_cp8

0xbe86,	// (0x00052392) list_form_wide_pane

0x7e40,	// (0x0004e34c) form_field_slider_pane_t1_ParamLimits

0x7e40,	// (0x0004e34c) form_field_slider_pane_t1

0x7e58,	// (0x0004e364) form_field_slider_pane_t2_ParamLimits

0x7e58,	// (0x0004e364) form_field_slider_pane_t2

0x0001,

0xf6c1,	// (0x00055bcd) form_field_slider_pane_t_ParamLimits

0xf6c1,	// (0x00055bcd) form_field_slider_pane_t

0xb72a,	// (0x00051c36) input_focus_pane_cp9_ParamLimits

0xb72a,	// (0x00051c36) input_focus_pane_cp9

0x7e6d,	// (0x0004e379) slider_cont_pane_ParamLimits

0x7e6d,	// (0x0004e379) slider_cont_pane

0xbe95,	// (0x000523a1) form_field_slider_wide_pane_t1_ParamLimits

0xbe95,	// (0x000523a1) form_field_slider_wide_pane_t1

0x29d2,	// (0x00048ede) form_field_slider_wide_pane_t2_ParamLimits

0x29d2,	// (0x00048ede) form_field_slider_wide_pane_t2

0x0001,

0xf6c6,	// (0x00055bd2) form_field_slider_wide_pane_t_ParamLimits

0xf6c6,	// (0x00055bd2) form_field_slider_wide_pane_t

0xb72a,	// (0x00051c36) input_focus_pane_cp10_ParamLimits

0xb72a,	// (0x00051c36) input_focus_pane_cp10

0x7e81,	// (0x0004e38d) slider_cont_pane_cp1_ParamLimits

0x7e81,	// (0x0004e38d) slider_cont_pane_cp1

0x7e95,	// (0x0004e3a1) slider_form_pane_cp

0xbea7,	// (0x000523b3) input_focus_pane_g1

0xbeaf,	// (0x000523bb) input_focus_pane_g2

0xbeb7,	// (0x000523c3) input_focus_pane_g3

0xbebf,	// (0x000523cb) input_focus_pane_g4

0xbec7,	// (0x000523d3) input_focus_pane_g5

0xbecf,	// (0x000523db) input_focus_pane_g6

0xbed7,	// (0x000523e3) input_focus_pane_g7

0xbedf,	// (0x000523eb) input_focus_pane_g8

0xbee7,	// (0x000523f3) input_focus_pane_g9

0xb6d2,	// (0x00051bde) input_focus_pane_g10

0x0009,

0xf6cb,	// (0x00055bd7) input_focus_pane_g

0xd405,	// (0x00053911) wait_border_pane_g3_copy1

0x7e9d,	// (0x0004e3a9) data_form_pane_t1

0xb6d2,	// (0x00051bde) wait_anim_pane_g1_copy1

0x8a14,	// (0x0004ef20) data_form_wide_pane_t1

0x7eb6,	// (0x0004e3c2) list_form_graphic_pane_cp_ParamLimits

0x7eb6,	// (0x0004e3c2) list_form_graphic_pane_cp

0xe0a0,	// (0x000545ac) slider_form_pane_g1

0xe0a9,	// (0x000545b5) slider_form_pane_g2

0x0006,

0xf9b7,	// (0x00055ec3) slider_form_pane_g

0x7ec7,	// (0x0004e3d3) list_form_graphic_pane_ParamLimits

0x7ec7,	// (0x0004e3d3) list_form_graphic_pane

0x2a50,	// (0x00048f5c) list_form_graphic_pane_g1

0x2a58,	// (0x00048f64) list_form_graphic_pane_t1_ParamLimits

0x2a58,	// (0x00048f64) list_form_graphic_pane_t1

0xb738,	// (0x00051c44) list_highlight_pane_cp5_ParamLimits

0xb738,	// (0x00051c44) list_highlight_pane_cp5

0x7ed9,	// (0x0004e3e5) find_pane_g1

0xbeef,	// (0x000523fb) input_find_pane

0x7ee2,	// (0x0004e3ee) input_find_pane_g1_ParamLimits

0x7ee2,	// (0x0004e3ee) input_find_pane_g1

0x7eee,	// (0x0004e3fa) input_find_pane_t1_ParamLimits

0x7eee,	// (0x0004e3fa) input_find_pane_t1

0x7f03,	// (0x0004e40f) input_find_pane_t2_ParamLimits

0x7f03,	// (0x0004e40f) input_find_pane_t2

0x0001,

0xf6e0,	// (0x00055bec) input_find_pane_t_ParamLimits

0xf6e0,	// (0x00055bec) input_find_pane_t

0xbef8,	// (0x00052404) input_focus_pane_cp5_ParamLimits

0xbef8,	// (0x00052404) input_focus_pane_cp5

0x8d6b,	// (0x0004f277) bg_popup_window_pane_cp2_ParamLimits

0x8d6b,	// (0x0004f277) bg_popup_window_pane_cp2

0x8d78,	// (0x0004f284) listscroll_menu_pane_ParamLimits

0x8d78,	// (0x0004f284) listscroll_menu_pane

0x8d84,	// (0x0004f290) popup_submenu_window_ParamLimits

0x8d84,	// (0x0004f290) popup_submenu_window

0xbf06,	// (0x00052412) find_popup_pane_g1

0xbf0e,	// (0x0005241a) input_popup_find_pane_cp

0xbef8,	// (0x00052404) input_focus_pane_cp4_ParamLimits

0xbef8,	// (0x00052404) input_focus_pane_cp4

0xbf18,	// (0x00052424) input_popup_find_pane_t1_ParamLimits

0xbf18,	// (0x00052424) input_popup_find_pane_t1

0xb6dc,	// (0x00051be8) bg_popup_sub_pane_cp

0xbf46,	// (0x00052452) listscroll_popup_sub_pane

0xbf4e,	// (0x0005245a) list_submenu_pane_ParamLimits

0xbf4e,	// (0x0005245a) list_submenu_pane

0xbf5f,	// (0x0005246b) scroll_pane_cp4

0xbf67,	// (0x00052473) list_single_popup_submenu_pane_ParamLimits

0xbf67,	// (0x00052473) list_single_popup_submenu_pane

0xbf7b,	// (0x00052487) list_single_popup_submenu_pane_g1

0xbf83,	// (0x0005248f) list_single_popup_submenu_pane_t1_ParamLimits

0xbf83,	// (0x0005248f) list_single_popup_submenu_pane_t1

0xb72a,	// (0x00051c36) bg_active_tab_pane_cp1_ParamLimits

0xb72a,	// (0x00051c36) bg_active_tab_pane_cp1

0x8dbc,	// (0x0004f2c8) tabs_2_active_pane_g1

0x8dc4,	// (0x0004f2d0) tabs_2_active_pane_t1

0xb72a,	// (0x00051c36) bg_passive_tab_pane_cp1_ParamLimits

0xb72a,	// (0x00051c36) bg_passive_tab_pane_cp1

0x8dbc,	// (0x0004f2c8) tabs_2_passive_pane_g1

0x8dc4,	// (0x0004f2d0) tabs_2_passive_pane_t1

0xb738,	// (0x00051c44) bg_active_tab_pane_cp4

0x8dd6,	// (0x0004f2e2) tabs_2_long_active_pane_t1

0xbf98,	// (0x000524a4) bg_passive_tab_pane_cp4

0x148a,	// (0x00047996) list_single_midp_graphic_pane_g4_ParamLimits

0xb738,	// (0x00051c44) bg_active_tab_pane_cp5

0x8de9,	// (0x0004f2f5) tabs_3_long_active_pane_t1

0xbf98,	// (0x000524a4) bg_passive_tab_pane_cp5

0x148a,	// (0x00047996) list_single_midp_graphic_pane_g4

0xb738,	// (0x00051c44) bg_popup_window_pane_cp13_ParamLimits

0xb738,	// (0x00051c44) bg_popup_window_pane_cp13

0xbfad,	// (0x000524b9) listscroll_popup_fast_pane_ParamLimits

0xbfad,	// (0x000524b9) listscroll_popup_fast_pane

0xbfbc,	// (0x000524c8) grid_popup_fast_pane_ParamLimits

0xbfbc,	// (0x000524c8) grid_popup_fast_pane

0xbfce,	// (0x000524da) scroll_pane_cp9_ParamLimits

0xbfce,	// (0x000524da) scroll_pane_cp9

0xf330,	// (0x0005583c) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xf330,	// (0x0005583c) list_single_graphic_hl_pane_t1_cp2

0xbff2,	// (0x000524fe) input_focus_pane_cp20_ParamLimits

0xbff2,	// (0x000524fe) input_focus_pane_cp20

0xc000,	// (0x0005250c) query_popup_data_pane_t1_ParamLimits

0xc000,	// (0x0005250c) query_popup_data_pane_t1

0xc147,	// (0x00052653) query_popup_data_pane_t2_ParamLimits

0xc147,	// (0x00052653) query_popup_data_pane_t2

0xc18d,	// (0x00052699) query_popup_data_pane_t3_ParamLimits

0xc18d,	// (0x00052699) query_popup_data_pane_t3

0xc1ce,	// (0x000526da) query_popup_data_pane_t4_ParamLimits

0xc1ce,	// (0x000526da) query_popup_data_pane_t4

0xc20a,	// (0x00052716) query_popup_data_pane_t5_ParamLimits

0xc20a,	// (0x00052716) query_popup_data_pane_t5

0x0004,

0xf6e5,	// (0x00055bf1) query_popup_data_pane_t_ParamLimits

0xf6e5,	// (0x00055bf1) query_popup_data_pane_t

0xbea7,	// (0x000523b3) bg_set_opt_pane_g1

0xbeaf,	// (0x000523bb) bg_set_opt_pane_g2

0xbeb7,	// (0x000523c3) bg_set_opt_pane_g3

0xbebf,	// (0x000523cb) bg_set_opt_pane_g4

0xbec7,	// (0x000523d3) bg_set_opt_pane_g5

0xbecf,	// (0x000523db) bg_set_opt_pane_g6

0xbed7,	// (0x000523e3) bg_set_opt_pane_g7

0xbedf,	// (0x000523eb) bg_set_opt_pane_g8

0xbee7,	// (0x000523f3) bg_set_opt_pane_g9

0x0008,

0xf6f0,	// (0x00055bfc) bg_set_opt_pane_g

0x10ee,	// (0x000475fa) control_top_pane_stacon_ParamLimits

0x10ee,	// (0x000475fa) control_top_pane_stacon

0x1141,	// (0x0004764d) signal_pane_stacon_ParamLimits

0x1141,	// (0x0004764d) signal_pane_stacon

0xc688,	// (0x00052b94) stacon_top_pane_g1_ParamLimits

0xc688,	// (0x00052b94) stacon_top_pane_g1

0x1166,	// (0x00047672) title_pane_stacon_ParamLimits

0x1166,	// (0x00047672) title_pane_stacon

0x1190,	// (0x0004769c) uni_indicator_pane_stacon_ParamLimits

0x1190,	// (0x0004769c) uni_indicator_pane_stacon

0x11a5,	// (0x000476b1) battery_pane_stacon_ParamLimits

0x11a5,	// (0x000476b1) battery_pane_stacon

0x11e9,	// (0x000476f5) control_bottom_pane_stacon_ParamLimits

0x11e9,	// (0x000476f5) control_bottom_pane_stacon

0x120c,	// (0x00047718) navi_pane_stacon_ParamLimits

0x120c,	// (0x00047718) navi_pane_stacon

0xc6aa,	// (0x00052bb6) stacon_bottom_pane_g1_ParamLimits

0xc6aa,	// (0x00052bb6) stacon_bottom_pane_g1

0x0e4f,	// (0x0004735b) aid_levels_signal_lsc_ParamLimits

0x0e4f,	// (0x0004735b) aid_levels_signal_lsc

0x0e66,	// (0x00047372) signal_pane_stacon_g1_ParamLimits

0x0e66,	// (0x00047372) signal_pane_stacon_g1

0x0e7a,	// (0x00047386) signal_pane_stacon_g2_ParamLimits

0x0e7a,	// (0x00047386) signal_pane_stacon_g2

0x0001,

0xf703,	// (0x00055c0f) signal_pane_stacon_g_ParamLimits

0xf703,	// (0x00055c0f) signal_pane_stacon_g

0x0eaf,	// (0x000473bb) title_pane_stacon_t1_ParamLimits

0x0eaf,	// (0x000473bb) title_pane_stacon_t1

0xc24e,	// (0x0005275a) uni_indicator_pane_stacon_g1

0xc258,	// (0x00052764) uni_indicator_pane_stacon_g2

0xc262,	// (0x0005276e) uni_indicator_pane_stacon_g3

0xc26c,	// (0x00052778) uni_indicator_pane_stacon_g4

0x0003,

0xf70f,	// (0x00055c1b) uni_indicator_pane_stacon_g

0x0ed4,	// (0x000473e0) control_top_pane_stacon_g1

0x0edc,	// (0x000473e8) control_top_pane_stacon_t1_ParamLimits

0x0edc,	// (0x000473e8) control_top_pane_stacon_t1

0x0f13,	// (0x0004741f) aid_levels_battery_lsc_ParamLimits

0x0f13,	// (0x0004741f) aid_levels_battery_lsc

0x0f2b,	// (0x00047437) battery_pane_stacon_g1_ParamLimits

0x0f2b,	// (0x00047437) battery_pane_stacon_g1

0x0f3e,	// (0x0004744a) battery_pane_stacon_g2_ParamLimits

0x0f3e,	// (0x0004744a) battery_pane_stacon_g2

0x0001,

0xf718,	// (0x00055c24) battery_pane_stacon_g_ParamLimits

0xf718,	// (0x00055c24) battery_pane_stacon_g

0x0f7c,	// (0x00047488) navi_icon_pane_stacon

0x0f90,	// (0x0004749c) navi_navi_pane_stacon

0x0f7c,	// (0x00047488) navi_text_pane_stacon

0x0ed4,	// (0x000473e0) control_bottom_pane_stacon_g1

0x0fa4,	// (0x000474b0) control_bottom_pane_stacon_t1_ParamLimits

0x0fa4,	// (0x000474b0) control_bottom_pane_stacon_t1

0x8dfb,	// (0x0004f307) grid_app_pane_ParamLimits

0x8dfb,	// (0x0004f307) grid_app_pane

0x8e33,	// (0x0004f33f) scroll_pane_cp15_ParamLimits

0x8e33,	// (0x0004f33f) scroll_pane_cp15

0x8e50,	// (0x0004f35c) cell_app_pane_ParamLimits

0x8e50,	// (0x0004f35c) cell_app_pane

0x8e95,	// (0x0004f3a1) cell_app_pane_g1_ParamLimits

0x8e95,	// (0x0004f3a1) cell_app_pane_g1

0xc290,	// (0x0005279c) cell_app_pane_g2_ParamLimits

0xc290,	// (0x0005279c) cell_app_pane_g2

0x0001,

0xf71d,	// (0x00055c29) cell_app_pane_g_ParamLimits

0xf71d,	// (0x00055c29) cell_app_pane_g

0xc29c,	// (0x000527a8) cell_app_pane_t1_ParamLimits

0xc29c,	// (0x000527a8) cell_app_pane_t1

0xc2ae,	// (0x000527ba) grid_highlight_pane_ParamLimits

0xc2ae,	// (0x000527ba) grid_highlight_pane

0xbea7,	// (0x000523b3) cell_highlight_pane_g1

0xbeaf,	// (0x000523bb) cell_highlight_pane_g2

0xbeb7,	// (0x000523c3) cell_highlight_pane_g3

0xbebf,	// (0x000523cb) cell_highlight_pane_g4

0xbec7,	// (0x000523d3) cell_highlight_pane_g5

0xbecf,	// (0x000523db) cell_highlight_pane_g6

0xbed7,	// (0x000523e3) cell_highlight_pane_g7

0xbedf,	// (0x000523eb) cell_highlight_pane_g8

0xbee7,	// (0x000523f3) cell_highlight_pane_g9

0xb6d2,	// (0x00051bde) cell_highlight_pane_g10

0x0009,

0xf6cb,	// (0x00055bd7) cell_highlight_pane_g

0xc2bf,	// (0x000527cb) bg_scroll_pane

0x0fee,	// (0x000474fa) scroll_handle_pane

0xc306,	// (0x00052812) scroll_bg_pane_g1

0xc31b,	// (0x00052827) scroll_bg_pane_g2

0xc333,	// (0x0005283f) scroll_bg_pane_g3

0x0002,

0xf722,	// (0x00055c2e) scroll_bg_pane_g

0xc348,	// (0x00052854) scroll_handle_focus_pane_ParamLimits

0xc348,	// (0x00052854) scroll_handle_focus_pane

0xc306,	// (0x00052812) scroll_handle_pane_g1

0xc355,	// (0x00052861) scroll_handle_pane_g2

0xc333,	// (0x0005283f) scroll_handle_pane_g3

0x0002,

0xf729,	// (0x00055c35) scroll_handle_pane_g

0xbef8,	// (0x00052404) bg_popup_sub_pane_cp21_ParamLimits

0xbef8,	// (0x00052404) bg_popup_sub_pane_cp21

0xc369,	// (0x00052875) popup_fep_japan_predictive_window_t1_ParamLimits

0xc369,	// (0x00052875) popup_fep_japan_predictive_window_t1

0xc383,	// (0x0005288f) popup_fep_japan_predictive_window_t2_ParamLimits

0xc383,	// (0x0005288f) popup_fep_japan_predictive_window_t2

0xc3b6,	// (0x000528c2) popup_fep_japan_predictive_window_t3_ParamLimits

0xc3b6,	// (0x000528c2) popup_fep_japan_predictive_window_t3

0x0002,

0xf730,	// (0x00055c3c) popup_fep_japan_predictive_window_t_ParamLimits

0xf730,	// (0x00055c3c) popup_fep_japan_predictive_window_t

0xb6dc,	// (0x00051be8) bg_popup_sub_pane_cp23

0xc3ed,	// (0x000528f9) listscroll_japin_cand_pane

0xc3f5,	// (0x00052901) popup_fep_japan_candidate_window_t1

0xc403,	// (0x0005290f) candidate_pane_ParamLimits

0xc403,	// (0x0005290f) candidate_pane

0xc415,	// (0x00052921) scroll_pane_cp30

0xc41d,	// (0x00052929) list_single_popup_jap_candidate_pane_ParamLimits

0xc41d,	// (0x00052929) list_single_popup_jap_candidate_pane

0xb6dc,	// (0x00051be8) list_highlight_pane_cp30

0xc432,	// (0x0005293e) list_single_popup_jap_candidate_pane_t1

0xc441,	// (0x0005294d) level_1_signal

0xc44e,	// (0x0005295a) level_2_signal

0xc45b,	// (0x00052967) level_3_signal

0xc468,	// (0x00052974) level_4_signal

0xc475,	// (0x00052981) level_5_signal

0xc482,	// (0x0005298e) level_6_signal

0xc48f,	// (0x0005299b) level_7_signal

0xc441,	// (0x0005294d) level_1_battery

0xc44e,	// (0x0005295a) level_2_battery

0xc45b,	// (0x00052967) level_3_battery

0xc468,	// (0x00052974) level_4_battery

0xc475,	// (0x00052981) level_5_battery

0xc482,	// (0x0005298e) level_6_battery

0xc48f,	// (0x0005299b) level_7_battery

0xc4b4,	// (0x000529c0) list_menu_pane_ParamLimits

0xc4b4,	// (0x000529c0) list_menu_pane

0xc4c5,	// (0x000529d1) scroll_pane_cp25_ParamLimits

0xc4c5,	// (0x000529d1) scroll_pane_cp25

0xc4de,	// (0x000529ea) list_double2_graphic_pane_cp2_ParamLimits

0xc4de,	// (0x000529ea) list_double2_graphic_pane_cp2

0xc4de,	// (0x000529ea) list_double2_large_graphic_pane_cp2_ParamLimits

0xc4de,	// (0x000529ea) list_double2_large_graphic_pane_cp2

0xc4de,	// (0x000529ea) list_double2_pane_cp2_ParamLimits

0xc4de,	// (0x000529ea) list_double2_pane_cp2

0xc4de,	// (0x000529ea) list_double_graphic_pane_cp2_ParamLimits

0xc4de,	// (0x000529ea) list_double_graphic_pane_cp2

0xc4de,	// (0x000529ea) list_double_large_graphic_pane_cp2_ParamLimits

0xc4de,	// (0x000529ea) list_double_large_graphic_pane_cp2

0xc4de,	// (0x000529ea) list_double_number_pane_cp2_ParamLimits

0xc4de,	// (0x000529ea) list_double_number_pane_cp2

0xc4de,	// (0x000529ea) list_double_pane_cp2_ParamLimits

0xc4de,	// (0x000529ea) list_double_pane_cp2

0x8ec8,	// (0x0004f3d4) list_single_2graphic_pane_cp2_ParamLimits

0x8ec8,	// (0x0004f3d4) list_single_2graphic_pane_cp2

0x8ec8,	// (0x0004f3d4) list_single_graphic_heading_pane_cp2_ParamLimits

0x8ec8,	// (0x0004f3d4) list_single_graphic_heading_pane_cp2

0x8ec8,	// (0x0004f3d4) list_single_graphic_pane_cp2_ParamLimits

0x8ec8,	// (0x0004f3d4) list_single_graphic_pane_cp2

0x8ec8,	// (0x0004f3d4) list_single_heading_pane_cp2_ParamLimits

0x8ec8,	// (0x0004f3d4) list_single_heading_pane_cp2

0xc4ee,	// (0x000529fa) list_single_large_graphic_pane_cp2_ParamLimits

0xc4ee,	// (0x000529fa) list_single_large_graphic_pane_cp2

0x8ec8,	// (0x0004f3d4) list_single_number_heading_pane_cp2_ParamLimits

0x8ec8,	// (0x0004f3d4) list_single_number_heading_pane_cp2

0x8ec8,	// (0x0004f3d4) list_single_number_pane_cp2_ParamLimits

0x8ec8,	// (0x0004f3d4) list_single_number_pane_cp2

0x8ec8,	// (0x0004f3d4) list_single_pane_cp2_ParamLimits

0x8ec8,	// (0x0004f3d4) list_single_pane_cp2

0xc508,	// (0x00052a14) bg_popup_sub_pane_cp22

0x10a0,	// (0x000475ac) popup_side_volume_key_window_g1

0x10ca,	// (0x000475d6) popup_side_volume_key_window_t1

0x10e6,	// (0x000475f2) volume_small_pane_cp1

0xb72a,	// (0x00051c36) bg_popup_sub_pane_cp24_ParamLimits

0xb72a,	// (0x00051c36) bg_popup_sub_pane_cp24

0xc51e,	// (0x00052a2a) fep_china_uni_candidate_pane_ParamLimits

0xc51e,	// (0x00052a2a) fep_china_uni_candidate_pane

0xc532,	// (0x00052a3e) fep_china_uni_entry_pane

0xc542,	// (0x00052a4e) popup_fep_china_uni_window_g1

0xc55e,	// (0x00052a6a) fep_china_uni_entry_pane_g1

0xc566,	// (0x00052a72) fep_china_uni_entry_pane_g2

0x0001,

0xf75d,	// (0x00055c69) fep_china_uni_entry_pane_g

0xc56e,	// (0x00052a7a) fep_entry_item_pane

0xc578,	// (0x00052a84) fep_candidate_item_pane

0xc580,	// (0x00052a8c) fep_china_uni_candidate_pane_g1

0xc588,	// (0x00052a94) fep_china_uni_candidate_pane_g2

0xc590,	// (0x00052a9c) fep_china_uni_candidate_pane_g3

0xc598,	// (0x00052aa4) fep_china_uni_candidate_pane_g4

0x0003,

0xf762,	// (0x00055c6e) fep_china_uni_candidate_pane_g

0xb6d2,	// (0x00051bde) fep_entry_item_pane_g1

0xc5a0,	// (0x00052aac) fep_entry_item_pane_t1_ParamLimits

0xc5a0,	// (0x00052aac) fep_entry_item_pane_t1

0xc5b6,	// (0x00052ac2) fep_candidate_item_pane_t1_ParamLimits

0xc5b6,	// (0x00052ac2) fep_candidate_item_pane_t1

0xc5cb,	// (0x00052ad7) fep_candidate_item_pane_t2_ParamLimits

0xc5cb,	// (0x00052ad7) fep_candidate_item_pane_t2

0x0001,

0xf76b,	// (0x00055c77) fep_candidate_item_pane_t_ParamLimits

0xf76b,	// (0x00055c77) fep_candidate_item_pane_t

0xb738,	// (0x00051c44) list_highlight_pane_cp31_ParamLimits

0xb738,	// (0x00051c44) list_highlight_pane_cp31

0xc5dd,	// (0x00052ae9) level_1_signal_lsc

0xc5e6,	// (0x00052af2) level_2_signal_lsc

0xc5ef,	// (0x00052afb) level_3_signal_lsc

0xc5f8,	// (0x00052b04) level_4_signal_lsc

0xc601,	// (0x00052b0d) level_5_signal_lsc

0xc60a,	// (0x00052b16) level_6_signal_lsc

0xc613,	// (0x00052b1f) level_7_signal_lsc

0xc613,	// (0x00052b1f) level_1_battery_lsc

0xc61c,	// (0x00052b28) level_2_battery_lsc

0xc625,	// (0x00052b31) level_3_battery_lsc

0xc62e,	// (0x00052b3a) level_4_battery_lsc

0xc637,	// (0x00052b43) level_5_battery_lsc

0xc640,	// (0x00052b4c) level_6_battery_lsc

0xc5dd,	// (0x00052ae9) level_7_battery_lsc

0xc649,	// (0x00052b55) scroll_handle_focus_pane_g1

0xc652,	// (0x00052b5e) scroll_handle_focus_pane_g2

0xc65b,	// (0x00052b67) scroll_handle_focus_pane_g3

0x0002,

0xf770,	// (0x00055c7c) scroll_handle_focus_pane_g

0x7f21,	// (0x0004e42d) list_single_2graphic_pane_g1_ParamLimits

0x7f21,	// (0x0004e42d) list_single_2graphic_pane_g1

0x8973,	// (0x0004ee7f) list_single_2graphic_pane_g2_ParamLimits

0x8973,	// (0x0004ee7f) list_single_2graphic_pane_g2

0x328e,	// (0x0004979a) list_single_2graphic_pane_g3_ParamLimits

0x328e,	// (0x0004979a) list_single_2graphic_pane_g3

0x8998,	// (0x0004eea4) list_single_2graphic_pane_g4_ParamLimits

0x8998,	// (0x0004eea4) list_single_2graphic_pane_g4

0x0003,

0xf777,	// (0x00055c83) list_single_2graphic_pane_g_ParamLimits

0xf777,	// (0x00055c83) list_single_2graphic_pane_g

0x7f2d,	// (0x0004e439) list_single_2graphic_pane_t1_ParamLimits

0x7f2d,	// (0x0004e439) list_single_2graphic_pane_t1

0x89a4,	// (0x0004eeb0) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x89a4,	// (0x0004eeb0) list_double2_graphic_large_graphic_pane_g1

0x8973,	// (0x0004ee7f) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x8973,	// (0x0004ee7f) list_double2_graphic_large_graphic_pane_g2

0x328e,	// (0x0004979a) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x328e,	// (0x0004979a) list_double2_graphic_large_graphic_pane_g3

0x89b6,	// (0x0004eec2) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x89b6,	// (0x0004eec2) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf780,	// (0x00055c8c) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf780,	// (0x00055c8c) list_double2_graphic_large_graphic_pane_g

0x89c2,	// (0x0004eece) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x89c2,	// (0x0004eece) list_double2_graphic_large_graphic_pane_t1

0x89d8,	// (0x0004eee4) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x89d8,	// (0x0004eee4) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf789,	// (0x00055c95) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf789,	// (0x00055c95) list_double2_graphic_large_graphic_pane_t

0xc725,	// (0x00052c31) popup_fast_swap_window_ParamLimits

0xc725,	// (0x00052c31) popup_fast_swap_window

0xc741,	// (0x00052c4d) popup_side_volume_key_window

0xc75d,	// (0x00052c69) stacon_top_pane

0xc767,	// (0x00052c73) status_pane_ParamLimits

0xc767,	// (0x00052c73) status_pane

0xc75d,	// (0x00052c69) status_small_pane

0xb6dc,	// (0x00051be8) control_pane

0xb6dc,	// (0x00051be8) stacon_bottom_pane

0xbe23,	// (0x0005232f) scroll_pane_cp121

0xbe1a,	// (0x00052326) set_content_pane

0xc664,	// (0x00052b70) bg_active_tab_pane_g1_cp1

0xc66d,	// (0x00052b79) bg_active_tab_pane_g2_cp1

0xc676,	// (0x00052b82) bg_active_tab_pane_g3_cp1

0xc664,	// (0x00052b70) bg_passive_tab_pane_g1_cp1

0xc66d,	// (0x00052b79) bg_passive_tab_pane_g2_cp1

0xc676,	// (0x00052b82) bg_passive_tab_pane_g3_cp1

0x8f28,	// (0x0004f434) bg_active_tab_pane_g1_cp2

0xc66d,	// (0x00052b79) bg_active_tab_pane_g2_cp2

0x8f31,	// (0x0004f43d) bg_active_tab_pane_g3_cp2

0x8f28,	// (0x0004f434) bg_passive_tab_pane_g1_cp2

0xc66d,	// (0x00052b79) bg_passive_tab_pane_g2_cp2

0x8f31,	// (0x0004f43d) bg_passive_tab_pane_g3_cp2

0x8f3a,	// (0x0004f446) bg_active_tab_pane_g1_cp3

0xc66d,	// (0x00052b79) bg_active_tab_pane_g2_cp3

0x8f43,	// (0x0004f44f) bg_active_tab_pane_g3_cp3

0x8f3a,	// (0x0004f446) bg_passive_tab_pane_g1_cp3

0xc66d,	// (0x00052b79) bg_passive_tab_pane_g2_cp3

0x8f43,	// (0x0004f44f) bg_passive_tab_pane_g3_cp3

0x8f4c,	// (0x0004f458) bg_active_tab_pane_g1_cp4

0xc66d,	// (0x00052b79) bg_active_tab_pane_g2_cp4

0x8f55,	// (0x0004f461) bg_active_tab_pane_g3_cp4

0x8f4c,	// (0x0004f458) bg_passive_tab_pane_g1_cp4

0xc66d,	// (0x00052b79) bg_passive_tab_pane_g2_cp4

0x8f55,	// (0x0004f461) bg_passive_tab_pane_g3_cp4

0xc6c6,	// (0x00052bd2) bg_active_tab_pane_g1_cp5

0xc66d,	// (0x00052b79) bg_active_tab_pane_g2_cp5

0xc6cf,	// (0x00052bdb) bg_active_tab_pane_g3_cp5

0xc6c6,	// (0x00052bd2) bg_passive_tab_pane_g1_cp5

0xc66d,	// (0x00052b79) bg_passive_tab_pane_g2_cp5

0xc6cf,	// (0x00052bdb) bg_passive_tab_pane_g3_cp5

0x8f5e,	// (0x0004f46a) list_set_graphic_pane_ParamLimits

0x8f5e,	// (0x0004f46a) list_set_graphic_pane

0xb6dc,	// (0x00051be8) bg_set_opt_pane_cp4

0x8f70,	// (0x0004f47c) list_set_graphic_pane_g1_ParamLimits

0x8f70,	// (0x0004f47c) list_set_graphic_pane_g1

0x8f7c,	// (0x0004f488) list_set_graphic_pane_g2_ParamLimits

0x8f7c,	// (0x0004f488) list_set_graphic_pane_g2

0x0001,

0xf78e,	// (0x00055c9a) list_set_graphic_pane_g_ParamLimits

0xf78e,	// (0x00055c9a) list_set_graphic_pane_g

0x0009,

0xfad1,	// (0x00055fdd) volume_small_pane_cp_g

0xc6d8,	// (0x00052be4) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xc6d8,	// (0x00052be4) list_double2_large_graphic_pane_g1_cp2

0xc6e4,	// (0x00052bf0) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xc6e4,	// (0x00052bf0) list_double2_large_graphic_pane_g2_cp2

0xc6f5,	// (0x00052c01) list_double2_large_graphic_pane_g3_cp2

0xc6fd,	// (0x00052c09) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xc6fd,	// (0x00052c09) list_double2_large_graphic_pane_t1_cp2

0xc713,	// (0x00052c1f) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xc713,	// (0x00052c1f) list_double2_large_graphic_pane_t2_cp2

0xde4c,	// (0x00054358) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xde4c,	// (0x00054358) list_double_large_graphic_pane_g1_cp2

0xde5d,	// (0x00054369) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xde5d,	// (0x00054369) list_double_large_graphic_pane_g2_cp2

0xc883,	// (0x00052d8f) list_double_large_graphic_pane_g3_cp2

0xde6e,	// (0x0005437a) list_double_large_graphic_pane_g4_cp

0xde76,	// (0x00054382) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xde76,	// (0x00054382) list_double_large_graphic_pane_t1_cp2

0xde8d,	// (0x00054399) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xde8d,	// (0x00054399) list_double_large_graphic_pane_t2_cp2

0xc775,	// (0x00052c81) list_double2_graphic_pane_g1_cp2_ParamLimits

0xc775,	// (0x00052c81) list_double2_graphic_pane_g1_cp2

0xc783,	// (0x00052c8f) list_double2_graphic_pane_g2_cp2_ParamLimits

0xc783,	// (0x00052c8f) list_double2_graphic_pane_g2_cp2

0xc794,	// (0x00052ca0) list_double2_graphic_pane_g3_cp2

0xc79e,	// (0x00052caa) list_double2_graphic_pane_t1_cp2_ParamLimits

0xc79e,	// (0x00052caa) list_double2_graphic_pane_t1_cp2

0xc7b4,	// (0x00052cc0) list_double2_graphic_pane_t2_cp2_ParamLimits

0xc7b4,	// (0x00052cc0) list_double2_graphic_pane_t2_cp2

0xc7c6,	// (0x00052cd2) list_single_number_heading_pane_g1_cp2_ParamLimits

0xc7c6,	// (0x00052cd2) list_single_number_heading_pane_g1_cp2

0xc7d2,	// (0x00052cde) list_single_number_heading_pane_g2_cp2

0xc7da,	// (0x00052ce6) list_single_number_heading_pane_t1_cp2_ParamLimits

0xc7da,	// (0x00052ce6) list_single_number_heading_pane_t1_cp2

0xc7f0,	// (0x00052cfc) list_single_number_heading_pane_t2_cp2_ParamLimits

0xc7f0,	// (0x00052cfc) list_single_number_heading_pane_t2_cp2

0xc802,	// (0x00052d0e) list_single_number_heading_pane_t3_cp2_ParamLimits

0xc802,	// (0x00052d0e) list_single_number_heading_pane_t3_cp2

0xc7c6,	// (0x00052cd2) list_single_heading_pane_g1_cp2_ParamLimits

0xc7c6,	// (0x00052cd2) list_single_heading_pane_g1_cp2

0xc7d2,	// (0x00052cde) list_single_heading_pane_g2_cp2

0xc7da,	// (0x00052ce6) list_single_heading_pane_t1_cp2_ParamLimits

0xc7da,	// (0x00052ce6) list_single_heading_pane_t1_cp2

0xdc54,	// (0x00054160) list_single_heading_pane_t2_cp2_ParamLimits

0xdc54,	// (0x00054160) list_single_heading_pane_t2_cp2

0xdbba,	// (0x000540c6) list_double_graphic_pane_g1_cp2_ParamLimits

0xdbba,	// (0x000540c6) list_double_graphic_pane_g1_cp2

0xdbc6,	// (0x000540d2) list_double_graphic_pane_g2_cp2_ParamLimits

0xdbc6,	// (0x000540d2) list_double_graphic_pane_g2_cp2

0xdbd5,	// (0x000540e1) list_double_graphic_pane_g3_cp2

0xdbdd,	// (0x000540e9) list_double_graphic_pane_t1_cp2_ParamLimits

0xdbdd,	// (0x000540e9) list_double_graphic_pane_t1_cp2

0xdbf3,	// (0x000540ff) list_double_graphic_pane_t2_cp2_ParamLimits

0xdbf3,	// (0x000540ff) list_double_graphic_pane_t2_cp2

0xc877,	// (0x00052d83) list_double_number_pane_g1_cp2_ParamLimits

0xc877,	// (0x00052d83) list_double_number_pane_g1_cp2

0xc883,	// (0x00052d8f) list_double_number_pane_g2_cp2

0xdb4e,	// (0x0005405a) list_double_number_pane_t1_cp2_ParamLimits

0xdb4e,	// (0x0005405a) list_double_number_pane_t1_cp2

0xdb62,	// (0x0005406e) list_double_number_pane_t2_cp2_ParamLimits

0xdb62,	// (0x0005406e) list_double_number_pane_t2_cp2

0xdb78,	// (0x00054084) list_double_number_pane_t3_cp2_ParamLimits

0xdb78,	// (0x00054084) list_double_number_pane_t3_cp2

0xdac5,	// (0x00053fd1) list_single_graphic_pane_g1_cp2_ParamLimits

0xdac5,	// (0x00053fd1) list_single_graphic_pane_g1_cp2

0xc8db,	// (0x00052de7) list_single_graphic_pane_g2_cp2_ParamLimits

0xc8db,	// (0x00052de7) list_single_graphic_pane_g2_cp2

0xc8e7,	// (0x00052df3) list_single_graphic_pane_g3_cp2

0xda9b,	// (0x00053fa7) list_single_graphic_pane_t1_cp2_ParamLimits

0xda9b,	// (0x00053fa7) list_single_graphic_pane_t1_cp2

0xc8db,	// (0x00052de7) list_single_number_pane_g1_cp2_ParamLimits

0xc8db,	// (0x00052de7) list_single_number_pane_g1_cp2

0xc8e7,	// (0x00052df3) list_single_number_pane_g2_cp2

0xda9b,	// (0x00053fa7) list_single_number_pane_t1_cp2_ParamLimits

0xda9b,	// (0x00053fa7) list_single_number_pane_t1_cp2

0xdab1,	// (0x00053fbd) list_single_number_pane_t2_cp2_ParamLimits

0xdab1,	// (0x00053fbd) list_single_number_pane_t2_cp2

0xc6e4,	// (0x00052bf0) list_double2_pane_g1_cp2_ParamLimits

0xc6e4,	// (0x00052bf0) list_double2_pane_g1_cp2

0xc6f5,	// (0x00052c01) list_double2_pane_g2_cp2

0xc84f,	// (0x00052d5b) list_double2_pane_t1_cp2_ParamLimits

0xc84f,	// (0x00052d5b) list_double2_pane_t1_cp2

0xc865,	// (0x00052d71) list_double2_pane_t2_cp2_ParamLimits

0xc865,	// (0x00052d71) list_double2_pane_t2_cp2

0xc877,	// (0x00052d83) list_double_pane_g1_cp2_ParamLimits

0xc877,	// (0x00052d83) list_double_pane_g1_cp2

0xc883,	// (0x00052d8f) list_double_pane_g2_cp2

0xc88b,	// (0x00052d97) list_double_pane_t1_cp2_ParamLimits

0xc88b,	// (0x00052d97) list_double_pane_t1_cp2

0xc8a1,	// (0x00052dad) list_double_pane_t2_cp2_ParamLimits

0xc8a1,	// (0x00052dad) list_double_pane_t2_cp2

0xc8cb,	// (0x00052dd7) list_single_pane_cp2_g3

0xc8db,	// (0x00052de7) list_single_pane_g1_cp2_ParamLimits

0xc8db,	// (0x00052de7) list_single_pane_g1_cp2

0xc8e7,	// (0x00052df3) list_single_pane_g2_cp2

0xc8ef,	// (0x00052dfb) list_single_pane_t1_cp2_ParamLimits

0xc8ef,	// (0x00052dfb) list_single_pane_t1_cp2

0xc907,	// (0x00052e13) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xc907,	// (0x00052e13) list_single_large_graphic_pane_g1_cp2

0xc913,	// (0x00052e1f) list_single_large_graphic_pane_g2_cp2_ParamLimits

0xc913,	// (0x00052e1f) list_single_large_graphic_pane_g2_cp2

0xc91f,	// (0x00052e2b) list_single_large_graphic_pane_g3_cp2

0xc927,	// (0x00052e33) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xc927,	// (0x00052e33) list_single_large_graphic_pane_g4_cp1

0xc941,	// (0x00052e4d) list_single_large_graphic_pane_t1_cp2_ParamLimits

0xc941,	// (0x00052e4d) list_single_large_graphic_pane_t1_cp2

0xda67,	// (0x00053f73) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xda67,	// (0x00053f73) list_single_graphic_heading_pane_g1_cp2

0xda34,	// (0x00053f40) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xda34,	// (0x00053f40) list_single_graphic_heading_pane_g4_cp2

0xc8e7,	// (0x00052df3) list_single_graphic_heading_pane_g5_cp2

0xda73,	// (0x00053f7f) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xda73,	// (0x00053f7f) list_single_graphic_heading_pane_t1_cp2

0xda89,	// (0x00053f95) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xda89,	// (0x00053f95) list_single_graphic_heading_pane_t2_cp2

0xda28,	// (0x00053f34) list_single_2graphic_pane_g1_cp2_ParamLimits

0xda28,	// (0x00053f34) list_single_2graphic_pane_g1_cp2

0xda34,	// (0x00053f40) list_single_2graphic_pane_g2_cp2_ParamLimits

0xda34,	// (0x00053f40) list_single_2graphic_pane_g2_cp2

0xc8e7,	// (0x00052df3) list_single_2graphic_pane_g3_cp2

0xda45,	// (0x00053f51) list_single_2graphic_pane_g4_cp2_ParamLimits

0xda45,	// (0x00053f51) list_single_2graphic_pane_g4_cp2

0xda51,	// (0x00053f5d) list_single_2graphic_pane_t1_cp2_ParamLimits

0xda51,	// (0x00053f5d) list_single_2graphic_pane_t1_cp2

0xb6d2,	// (0x00051bde) list_highlight_pane_g10_cp1

0xd5f4,	// (0x00053b00) list_highlight_pane_g1_cp1

0xd5fc,	// (0x00053b08) list_highlight_pane_g2_cp1

0xd604,	// (0x00053b10) list_highlight_pane_g3_cp1

0xd60c,	// (0x00053b18) list_highlight_pane_g4_cp1

0xd614,	// (0x00053b20) list_highlight_pane_g5_cp1

0xd61c,	// (0x00053b28) list_highlight_pane_g6_cp1

0xd624,	// (0x00053b30) list_highlight_pane_g7_cp1

0xd62c,	// (0x00053b38) list_highlight_pane_g8_cp1

0xd634,	// (0x00053b40) list_highlight_pane_g9_cp1

0x9c05,	// (0x00050111) form_field_slider_pane_t3

0x9c13,	// (0x0005011f) form_field_slider_pane_t4

0xd530,	// (0x00053a3c) slider_form_pane_ParamLimits

0xd530,	// (0x00053a3c) slider_form_pane

0xb6dc,	// (0x00051be8) control_abbreviations

0xb6dc,	// (0x00051be8) control_conventions

0xb6dc,	// (0x00051be8) control_definitions

0xb6dc,	// (0x00051be8) format_table_attribute

0xdc9e,	// (0x000541aa) bg_popup_preview_window_pane_g9

0xb6dc,	// (0x00051be8) format_table_data2

0xb6dc,	// (0x00051be8) format_table_data3

0xb6dc,	// (0x00051be8) format_table_data_example

0x0008,

0xb6dc,	// (0x00051be8) intro_purpose

0xf917,	// (0x00055e23) bg_popup_preview_window_pane_g

0xb6dc,	// (0x00051be8) texts_category

0xb6dc,	// (0x00051be8) texts_graphics

0xc957,	// (0x00052e63) text_digital

0xc966,	// (0x00052e72) text_primary

0xc975,	// (0x00052e81) text_primary_small

0xc984,	// (0x00052e90) text_secondary

0xc993,	// (0x00052e9f) text_title

0xe12d,	// (0x00054639) bg_passive_tab_pane_g1_cp3_srt

0xc66d,	// (0x00052b79) bg_passive_tab_pane_g2_cp3_srt

0xe136,	// (0x00054642) bg_passive_tab_pane_g3_cp3_srt

0xb72a,	// (0x00051c36) bg_active_tab_pane_cp3_srt_ParamLimits

0xb72a,	// (0x00051c36) bg_active_tab_pane_cp3_srt

0xe13f,	// (0x0005464b) tabs_4_active_pane_srt_g1

0x9f97,	// (0x000504a3) tabs_4_active_pane_srt_t1_ParamLimits

0x9f97,	// (0x000504a3) tabs_4_active_pane_srt_t1

0xe12d,	// (0x00054639) bg_active_tab_pane_g1_cp3_copy1

0xc66d,	// (0x00052b79) bg_active_tab_pane_g2_cp3_copy1

0xe136,	// (0x00054642) bg_active_tab_pane_g3_cp3_copy1

0xb738,	// (0x00051c44) tabs_2_long_active_pane_srt_ParamLimits

0xb738,	// (0x00051c44) tabs_2_long_active_pane_srt

0xb738,	// (0x00051c44) tabs_2_long_passive_pane_srt_ParamLimits

0xb738,	// (0x00051c44) tabs_2_long_passive_pane_srt

0xbf98,	// (0x000524a4) bg_passive_tab_pane_cp4_srt_ParamLimits

0xbf98,	// (0x000524a4) bg_passive_tab_pane_cp4_srt

0xe053,	// (0x0005455f) bg_passive_tab_pane_g1_cp4_srt

0xc66d,	// (0x00052b79) bg_passive_tab_pane_g2_cp4_srt

0xe05c,	// (0x00054568) bg_passive_tab_pane_g3_cp4_srt

0xb738,	// (0x00051c44) bg_active_tab_pane_cp4_srt_ParamLimits

0xb738,	// (0x00051c44) bg_active_tab_pane_cp4_srt

0x9da5,	// (0x000502b1) tabs_2_long_active_pane_srt_t1_ParamLimits

0x9da5,	// (0x000502b1) tabs_2_long_active_pane_srt_t1

0xe053,	// (0x0005455f) bg_active_tab_pane_g1_cp4_srt

0xc66d,	// (0x00052b79) bg_active_tab_pane_g2_cp4_srt

0xe05c,	// (0x00054568) bg_active_tab_pane_g3_cp4_srt

0xb72a,	// (0x00051c36) tabs_3_long_active_pane_srt_ParamLimits

0xb72a,	// (0x00051c36) tabs_3_long_active_pane_srt

0xb72a,	// (0x00051c36) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xb72a,	// (0x00051c36) tabs_3_long_passive_pane_cp_srt

0xb72a,	// (0x00051c36) tabs_3_long_passive_pane_srt_ParamLimits

0xb72a,	// (0x00051c36) tabs_3_long_passive_pane_srt

0xbf98,	// (0x000524a4) bg_passive_tab_pane_cp5_srt_ParamLimits

0xbf98,	// (0x000524a4) bg_passive_tab_pane_cp5_srt

0xc6c6,	// (0x00052bd2) bg_passive_tab_pane_g1_cp5_srt

0xc66d,	// (0x00052b79) bg_passive_tab_pane_g2_cp5_srt

0xc6cf,	// (0x00052bdb) bg_passive_tab_pane_g3_cp5_srt

0xb738,	// (0x00051c44) bg_active_tab_pane_cp5_srt_ParamLimits

0xb738,	// (0x00051c44) bg_active_tab_pane_cp5_srt

0x9d8f,	// (0x0005029b) tabs_3_long_active_pane_srt_t1_ParamLimits

0x9d8f,	// (0x0005029b) tabs_3_long_active_pane_srt_t1

0xc6c6,	// (0x00052bd2) bg_active_tab_pane_g1_cp5_srt

0xc66d,	// (0x00052b79) bg_active_tab_pane_g2_cp5_srt

0xc6cf,	// (0x00052bdb) bg_active_tab_pane_g3_cp5_srt

0xe045,	// (0x00054551) navi_text_pane_srt_t1

0xe03d,	// (0x00054549) navi_icon_pane_srt_g1

0xca99,	// (0x00052fa5) midp_editing_number_pane_srt

0xc9a2,	// (0x00052eae) midp_ticker_pane_srt

0xcaa1,	// (0x00052fad) midp_ticker_pane_srt_g1

0xcaa9,	// (0x00052fb5) midp_ticker_pane_srt_g2

0x0001,

0xf7ad,	// (0x00055cb9) midp_ticker_pane_srt_g

0xcab1,	// (0x00052fbd) midp_ticker_pane_srt_t1

0xe02e,	// (0x0005453a) midp_editing_number_pane_t1_copy1

0x8fa0,	// (0x0004f4ac) listscroll_midp_pane

0x8fa0,	// (0x0004f4ac) midp_form_pane

0xc9aa,	// (0x00052eb6) midp_info_popup_window_ParamLimits

0xc9aa,	// (0x00052eb6) midp_info_popup_window

0xbef8,	// (0x00052404) bg_popup_sub_pane_cp50_ParamLimits

0xbef8,	// (0x00052404) bg_popup_sub_pane_cp50

0xd279,	// (0x00053785) listscroll_midp_info_pane_ParamLimits

0xd279,	// (0x00053785) listscroll_midp_info_pane

0xd261,	// (0x0005376d) listscroll_form_midp_pane_ParamLimits

0xd261,	// (0x0005376d) listscroll_form_midp_pane

0xd26d,	// (0x00053779) scroll_bar_cp050

0x9bf9,	// (0x00050105) list_midp_pane

0xe9b1,	// (0x00054ebd) signal_pane_g2_cp

0xd193,	// (0x0005369f) listscroll_midp_info_pane_t1_ParamLimits

0xd193,	// (0x0005369f) listscroll_midp_info_pane_t1

0xd1ab,	// (0x000536b7) listscroll_midp_info_pane_t2_ParamLimits

0xd1ab,	// (0x000536b7) listscroll_midp_info_pane_t2

0xd1e9,	// (0x000536f5) listscroll_midp_info_pane_t3_ParamLimits

0xd1e9,	// (0x000536f5) listscroll_midp_info_pane_t3

0xd223,	// (0x0005372f) listscroll_midp_info_pane_t4_ParamLimits

0xd223,	// (0x0005372f) listscroll_midp_info_pane_t4

0x0003,

0xf852,	// (0x00055d5e) listscroll_midp_info_pane_t_ParamLimits

0xf852,	// (0x00055d5e) listscroll_midp_info_pane_t

0xbf5f,	// (0x0005246b) scroll_pane_cp21

0xd131,	// (0x0005363d) form_midp_field_choice_group_pane

0xd13a,	// (0x00053646) form_midp_field_text_pane

0xd179,	// (0x00053685) form_midp_field_time_pane

0xd181,	// (0x0005368d) form_midp_gauge_slider_pane

0xd18a,	// (0x00053696) form_midp_gauge_wait_pane

0xb6dc,	// (0x00051be8) form_midp_image_pane

0x89ea,	// (0x0004eef6) list_single_midp_pane_ParamLimits

0x89ea,	// (0x0004eef6) list_single_midp_pane

0x9bd7,	// (0x000500e3) form_midp_field_text_pane_t1

0xcfd8,	// (0x000534e4) input_focus_pane_cp050

0xd120,	// (0x0005362c) list_midp_form_text_pane

0xd0ef,	// (0x000535fb) form_midp_field_choice_group_pane_t1

0xd0fd,	// (0x00053609) input_focus_pane_cp051

0xd111,	// (0x0005361d) list_midp_choice_pane

0xb6dc,	// (0x00051be8) status_idle_pane

0xd0d3,	// (0x000535df) form_midp_field_time_pane_t1

0xb6d2,	// (0x00051bde) wait_anim_pane_g2_copy1

0xd0e1,	// (0x000535ed) form_midp_field_time_pane_t2

0x0001,

0xca03,	// (0x00052f0f) aid_navinavi_width_2_pane

0xf84d,	// (0x00055d59) form_midp_field_time_pane_t

0xb6dc,	// (0x00051be8) input_focus_pane_cp052

0xb6dc,	// (0x00051be8) bg_input_focus_pane_cp040

0xd0af,	// (0x000535bb) form_midp_gauge_slider_pane_t1

0xd0bd,	// (0x000535c9) form_midp_gauge_slider_pane_t2

0x9bbb,	// (0x000500c7) form_midp_gauge_slider_pane_t3

0x9bc9,	// (0x000500d5) form_midp_gauge_slider_pane_t4

0x0003,

0xf844,	// (0x00055d50) form_midp_gauge_slider_pane_t

0xd0cb,	// (0x000535d7) form_midp_slider_pane

0xb738,	// (0x00051c44) bg_input_focus_pane_cp041_ParamLimits

0xb738,	// (0x00051c44) bg_input_focus_pane_cp041

0xd07c,	// (0x00053588) form_midp_gauge_wait_pane_t1_ParamLimits

0xd07c,	// (0x00053588) form_midp_gauge_wait_pane_t1

0xd08e,	// (0x0005359a) form_midp_gauge_wait_pane_t2_ParamLimits

0xd08e,	// (0x0005359a) form_midp_gauge_wait_pane_t2

0x0001,

0xf83f,	// (0x00055d4b) form_midp_gauge_wait_pane_t_ParamLimits

0xf83f,	// (0x00055d4b) form_midp_gauge_wait_pane_t

0xd0a0,	// (0x000535ac) form_midp_wait_pane_ParamLimits

0xd0a0,	// (0x000535ac) form_midp_wait_pane

0xd046,	// (0x00053552) form_midp_image_pane_g1

0xd04f,	// (0x0005355b) form_midp_image_pane_t1

0xd05e,	// (0x0005356a) form_midp_image_pane_t2

0xd06d,	// (0x00053579) form_midp_image_pane_t3

0x0002,

0xf838,	// (0x00055d44) form_midp_image_pane_t

0xd03d,	// (0x00053549) list_single_midp_pane_g1

0x32da,	// (0x000497e6) list_single_midp_pane_t1

0x9ba6,	// (0x000500b2) list_midp_form_item_pane_ParamLimits

0x9ba6,	// (0x000500b2) list_midp_form_item_pane

0xc9bd,	// (0x00052ec9) list_midp_form_item_pane_t1

0xc9cc,	// (0x00052ed8) midp_ticker_pane_g1

0xc9d8,	// (0x00052ee4) midp_ticker_pane_g2

0x0001,

0xf793,	// (0x00055c9f) midp_ticker_pane_g

0x9048,	// (0x0004f554) midp_ticker_pane_t1

0x9f10,	// (0x0005041c) midp_editing_number_pane_t1

0xe0c2,	// (0x000545ce) midp_editing_number_pane

0xe0d1,	// (0x000545dd) midp_ticker_pane

0xe01e,	// (0x0005452a) ai_message_heading_pane

0xb6dc,	// (0x00051be8) bg_popup_window_pane_cp14

0xe026,	// (0x00054532) listscroll_ai_message_pane

0xdfa8,	// (0x000544b4) ai_message_heading_pane_g1_ParamLimits

0xdfa8,	// (0x000544b4) ai_message_heading_pane_g1

0xdfb4,	// (0x000544c0) ai_message_heading_pane_g2_ParamLimits

0xdfb4,	// (0x000544c0) ai_message_heading_pane_g2

0xdfc0,	// (0x000544cc) ai_message_heading_pane_g3_ParamLimits

0xdfc0,	// (0x000544cc) ai_message_heading_pane_g3

0xdfcc,	// (0x000544d8) ai_message_heading_pane_g4_ParamLimits

0xdfcc,	// (0x000544d8) ai_message_heading_pane_g4

0x0003,

0xf979,	// (0x00055e85) ai_message_heading_pane_g_ParamLimits

0xf979,	// (0x00055e85) ai_message_heading_pane_g

0xdfd8,	// (0x000544e4) ai_message_heading_pane_t1_ParamLimits

0xdfd8,	// (0x000544e4) ai_message_heading_pane_t1

0xdff2,	// (0x000544fe) ai_message_heading_pane_t2_ParamLimits

0xdff2,	// (0x000544fe) ai_message_heading_pane_t2

0x0001,

0xf982,	// (0x00055e8e) ai_message_heading_pane_t_ParamLimits

0xf982,	// (0x00055e8e) ai_message_heading_pane_t

0xe004,	// (0x00054510) bg_popup_heading_pane_cp1_ParamLimits

0xe004,	// (0x00054510) bg_popup_heading_pane_cp1

0xdf96,	// (0x000544a2) list_ai_message_pane_ParamLimits

0xdf96,	// (0x000544a2) list_ai_message_pane

0xbf5f,	// (0x0005246b) scroll_pane_cp10

0xdf32,	// (0x0005443e) list_ai_message_pane_g1

0xdf3a,	// (0x00054446) list_ai_message_pane_g2

0x0001,

0xf956,	// (0x00055e62) list_ai_message_pane_g

0xdf42,	// (0x0005444e) list_ai_message_pane_t1_ParamLimits

0xdf42,	// (0x0005444e) list_ai_message_pane_t1

0xdf57,	// (0x00054463) list_ai_message_pane_t2_ParamLimits

0xdf57,	// (0x00054463) list_ai_message_pane_t2

0xdf6c,	// (0x00054478) list_ai_message_pane_t3_ParamLimits

0xdf6c,	// (0x00054478) list_ai_message_pane_t3

0xdf81,	// (0x0005448d) list_ai_message_pane_t4_ParamLimits

0xdf81,	// (0x0005448d) list_ai_message_pane_t4

0x0003,

0xf95b,	// (0x00055e67) list_ai_message_pane_t_ParamLimits

0xf95b,	// (0x00055e67) list_ai_message_pane_t

0x9d6e,	// (0x0005027a) cell_ai_soft_ind_pane_ParamLimits

0x9d6e,	// (0x0005027a) cell_ai_soft_ind_pane

0xc9e4,	// (0x00052ef0) cell_ai_soft_ind_pane_g1_ParamLimits

0xc9e4,	// (0x00052ef0) cell_ai_soft_ind_pane_g1

0xb6dc,	// (0x00051be8) grid_highlight_cp1

0xc9f1,	// (0x00052efd) text_secondary_cp56_ParamLimits

0xc9f1,	// (0x00052efd) text_secondary_cp56

0xdf07,	// (0x00054413) example_general_pane_ParamLimits

0xdf07,	// (0x00054413) example_general_pane

0xdf13,	// (0x0005441f) example_parent_pane_g1_ParamLimits

0xdf13,	// (0x0005441f) example_parent_pane_g1

0xdf1f,	// (0x0005442b) example_parent_pane_t1_ParamLimits

0xdf1f,	// (0x0005442b) example_parent_pane_t1

0x947d,	// (0x0004f989) popup_preview_text_window_ParamLimits

0x947d,	// (0x0004f989) popup_preview_text_window

0xc8d3,	// (0x00052ddf) list_single_pane_cp2_g4

0xb913,	// (0x00051e1f) bg_popup_preview_window_pane_ParamLimits

0xb913,	// (0x00051e1f) bg_popup_preview_window_pane

0xdca6,	// (0x000541b2) popup_preview_text_window_t1_ParamLimits

0xdca6,	// (0x000541b2) popup_preview_text_window_t1

0xdcc4,	// (0x000541d0) popup_preview_text_window_t2_ParamLimits

0xdcc4,	// (0x000541d0) popup_preview_text_window_t2

0xdd0d,	// (0x00054219) popup_preview_text_window_t3_ParamLimits

0xdd0d,	// (0x00054219) popup_preview_text_window_t3

0xdd52,	// (0x0005425e) popup_preview_text_window_t4_ParamLimits

0xdd52,	// (0x0005425e) popup_preview_text_window_t4

0x0004,

0xf92a,	// (0x00055e36) popup_preview_text_window_t_ParamLimits

0xf92a,	// (0x00055e36) popup_preview_text_window_t

0xddd0,	// (0x000542dc) scroll_pane_cp11

0xcee8,	// (0x000533f4) bg_popup_preview_window_pane_g1

0xdc66,	// (0x00054172) bg_popup_preview_window_pane_g2

0xdc6e,	// (0x0005417a) bg_popup_preview_window_pane_g3

0xdc76,	// (0x00054182) bg_popup_preview_window_pane_g4

0xdc7e,	// (0x0005418a) bg_popup_preview_window_pane_g5

0xdc86,	// (0x00054192) bg_popup_preview_window_pane_g6

0xdc8e,	// (0x0005419a) bg_popup_preview_window_pane_g7

0xdc96,	// (0x000541a2) bg_popup_preview_window_pane_g8

0x045d,	// (0x00046969) aid_popup_width_pane

0x93f9,	// (0x0004f905) popup_midp_note_alarm_window_ParamLimits

0x93f9,	// (0x0004f905) popup_midp_note_alarm_window

0xbe34,	// (0x00052340) data_form_pane_ParamLimits

0x7dfa,	// (0x0004e306) form_field_data_pane_g1

0x7e04,	// (0x0004e310) form_field_data_pane_t1_ParamLimits

0xbe40,	// (0x0005234c) input_focus_pane_ParamLimits

0xbe4e,	// (0x0005235a) data_form_wide_pane_ParamLimits

0x2928,	// (0x00048e34) form_field_data_wide_pane_g1

0x2934,	// (0x00048e40) form_field_data_wide_pane_t1_ParamLimits

0xbab4,	// (0x00051fc0) input_focus_pane_cp6_ParamLimits

0x8dae,	// (0x0004f2ba) input_popup_find_pane_g1_ParamLimits

0x8dae,	// (0x0004f2ba) input_popup_find_pane_g1

0x0f4f,	// (0x0004745b) aid_navi_side_left_pane

0x0f64,	// (0x00047470) aid_navi_side_right_pane

0xd6fb,	// (0x00053c07) bg_popup_window_pane_cp30_ParamLimits

0xd6fb,	// (0x00053c07) bg_popup_window_pane_cp30

0xd775,	// (0x00053c81) popup_midp_note_alarm_window_g1_ParamLimits

0xd775,	// (0x00053c81) popup_midp_note_alarm_window_g1

0xd7a5,	// (0x00053cb1) popup_midp_note_alarm_window_t1_ParamLimits

0xd7a5,	// (0x00053cb1) popup_midp_note_alarm_window_t1

0xd846,	// (0x00053d52) popup_midp_note_alarm_window_t2_ParamLimits

0xd846,	// (0x00053d52) popup_midp_note_alarm_window_t2

0xd8f4,	// (0x00053e00) popup_midp_note_alarm_window_t3_ParamLimits

0xd8f4,	// (0x00053e00) popup_midp_note_alarm_window_t3

0xd926,	// (0x00053e32) popup_midp_note_alarm_window_t4_ParamLimits

0xd926,	// (0x00053e32) popup_midp_note_alarm_window_t4

0xd94c,	// (0x00053e58) popup_midp_note_alarm_window_t5_ParamLimits

0xd94c,	// (0x00053e58) popup_midp_note_alarm_window_t5

0x000a,

0xf8c7,	// (0x00055dd3) popup_midp_note_alarm_window_t_ParamLimits

0xf8c7,	// (0x00055dd3) popup_midp_note_alarm_window_t

0xd9f8,	// (0x00053f04) wait_bar_pane_cp1_ParamLimits

0xd9f8,	// (0x00053f04) wait_bar_pane_cp1

0xb6dc,	// (0x00051be8) wait_anim_pane_copy1

0xb6dc,	// (0x00051be8) wait_border_pane_copy1

0xd3f1,	// (0x000538fd) wait_border_pane_g1_copy1

0x294e,	// (0x00048e5a) form_field_popup_pane_g1

0x7e1e,	// (0x0004e32a) form_field_popup_pane_t1_ParamLimits

0xbe40,	// (0x0005234c) input_focus_pane_cp7_ParamLimits

0xbe7a,	// (0x00052386) list_form_pane_ParamLimits

0x296e,	// (0x00048e7a) form_field_popup_wide_pane_g1

0x2976,	// (0x00048e82) form_field_popup_wide_pane_t1_ParamLimits

0xbe40,	// (0x0005234c) input_focus_pane_cp8_ParamLimits

0xbe86,	// (0x00052392) list_form_wide_pane_ParamLimits

0xe166,	// (0x00054672) aid_size_cell_graphic_pane

0x7e9d,	// (0x0004e3a9) data_form_pane_t1_ParamLimits

0x8a14,	// (0x0004ef20) data_form_wide_pane_t1_ParamLimits

0x9832,	// (0x0004fd3e) bg_status_flat_pane

0x8733,	// (0x0004ec3f) title_pane_t1_ParamLimits

0xb6f2,	// (0x00051bfe) title_pane_t2_ParamLimits

0xb718,	// (0x00051c24) title_pane_t3_ParamLimits

0xf59b,	// (0x00055aa7) title_pane_t_ParamLimits

0xc441,	// (0x0005294d) level_1_signal_ParamLimits

0xc44e,	// (0x0005295a) level_2_signal_ParamLimits

0xc45b,	// (0x00052967) level_3_signal_ParamLimits

0xc468,	// (0x00052974) level_4_signal_ParamLimits

0xc475,	// (0x00052981) level_5_signal_ParamLimits

0xc482,	// (0x0005298e) level_6_signal_ParamLimits

0xc48f,	// (0x0005299b) level_7_signal_ParamLimits

0xc441,	// (0x0005294d) level_1_battery_ParamLimits

0xc44e,	// (0x0005295a) level_2_battery_ParamLimits

0xc45b,	// (0x00052967) level_3_battery_ParamLimits

0xc468,	// (0x00052974) level_4_battery_ParamLimits

0xc475,	// (0x00052981) level_5_battery_ParamLimits

0xc482,	// (0x0005298e) level_6_battery_ParamLimits

0xc48f,	// (0x0005299b) level_7_battery_ParamLimits

0xd5f4,	// (0x00053b00) bg_status_flat_pane_g1

0xd5fc,	// (0x00053b08) bg_status_flat_pane_g2

0xd604,	// (0x00053b10) bg_status_flat_pane_g3

0xd60c,	// (0x00053b18) bg_status_flat_pane_g4

0xd614,	// (0x00053b20) bg_status_flat_pane_g5

0xd61c,	// (0x00053b28) bg_status_flat_pane_g6

0xd624,	// (0x00053b30) bg_status_flat_pane_g7

0x87c7,	// (0x0004ecd3) tabs_3_active_pane_t1_ParamLimits

0x87c7,	// (0x0004ecd3) tabs_3_passive_pane_t1_ParamLimits

0x87e1,	// (0x0004eced) tabs_4_active_pane_t1_ParamLimits

0x87e1,	// (0x0004eced) tabs_4_1_passive_pane_t1_ParamLimits

0x8dc4,	// (0x0004f2d0) tabs_2_active_pane_t1_ParamLimits

0x8dc4,	// (0x0004f2d0) tabs_2_passive_pane_t1_ParamLimits

0xb738,	// (0x00051c44) bg_active_tab_pane_cp4_ParamLimits

0x8dd6,	// (0x0004f2e2) tabs_2_long_active_pane_t1_ParamLimits

0xbf98,	// (0x000524a4) bg_passive_tab_pane_cp4_ParamLimits

0x14be,	// (0x000479ca) list_single_midp_graphic_pane_t1_ParamLimits

0xb738,	// (0x00051c44) bg_active_tab_pane_cp5_ParamLimits

0x8de9,	// (0x0004f2f5) tabs_3_long_active_pane_t1_ParamLimits

0xbf98,	// (0x000524a4) bg_passive_tab_pane_cp5_ParamLimits

0x14be,	// (0x000479ca) list_single_midp_graphic_pane_t1

0x9832,	// (0x0004fd3e) bg_status_flat_pane_ParamLimits

0xcdb9,	// (0x000532c5) indicator_pane_cp2_ParamLimits

0xcdb9,	// (0x000532c5) indicator_pane_cp2

0x99a9,	// (0x0004feb5) navi_pane_srt_ParamLimits

0x99a9,	// (0x0004feb5) navi_pane_srt

0xcde1,	// (0x000532ed) popup_clock_digital_analogue_window_cp1

0xb77c,	// (0x00051c88) indicator_pane_t1

0xc9a2,	// (0x00052eae) copy_highlight_pane

0xc9a2,	// (0x00052eae) cursor_graphics_pane

0xc9a2,	// (0x00052eae) graphic_within_text_pane

0xc9a2,	// (0x00052eae) link_highlight_pane

0xdd93,	// (0x0005429f) popup_preview_text_window_t5_ParamLimits

0xdd93,	// (0x0005429f) popup_preview_text_window_t5

0xca0b,	// (0x00052f17) cursor_digital_pane

0xca0b,	// (0x00052f17) cursor_primary_pane

0xca1c,	// (0x00052f28) cursor_primary_small_pane

0xca24,	// (0x00052f30) cursor_secondary_pane

0xca2c,	// (0x00052f38) cursor_title_pane

0xca0b,	// (0x00052f17) link_highlight_digital_pane

0xca13,	// (0x00052f1f) link_highlight_primary_pane

0xca1c,	// (0x00052f28) link_highlight_primary_small_pane

0xca24,	// (0x00052f30) link_highlight_secondary_pane

0xca2c,	// (0x00052f38) link_highlight_title_pane

0xca0b,	// (0x00052f17) copy_highlight_digital_pane

0xca0b,	// (0x00052f17) copy_highlight_primary_pane

0xca1c,	// (0x00052f28) copy_highlight_primary_small_pane

0xca24,	// (0x00052f30) copy_highlight_secondary_pane

0xca2c,	// (0x00052f38) copy_highlight_title_pane

0xca24,	// (0x00052f30) graphic_text_digital_pane

0xd69e,	// (0x00053baa) graphic_text_primary_pane

0xd6a7,	// (0x00053bb3) graphic_text_primary_small_pane

0xca1c,	// (0x00052f28) graphic_text_secondary_pane

0xca0b,	// (0x00052f17) graphic_text_title_pane

0x905a,	// (0x0004f566) cursor_primary_pane_g1

0xd690,	// (0x00053b9c) cursor_text_primary_t1

0x9c35,	// (0x00050141) cursor_primary_small_pane_g1

0xd682,	// (0x00053b8e) cursor_text_primary_small_t1

0x9c2b,	// (0x00050137) cursor_primary_small_pane_g1_copy1

0xd64a,	// (0x00053b56) cursor_text_primary_small_t1_copy1

0xd63c,	// (0x00053b48) cursor_text_title_t1

0x9c21,	// (0x0005012d) cursor_title_pane_g1

0x905a,	// (0x0004f566) cursor_digital_pane_g1

0xca34,	// (0x00052f40) cursor_text_digital_t1

0xca59,	// (0x00052f65) link_highlight_primary_pane_g1

0xd5e5,	// (0x00053af1) link_highlight_primary_pane_t1

0xca42,	// (0x00052f4e) link_highlight_primary_small_pane_g1

0xca4a,	// (0x00052f56) link_highlight_primary_small_pane_t1

0xca59,	// (0x00052f65) link_highlight_secondary_pane_g1

0xca61,	// (0x00052f6d) link_highlight_secondary_pane_t1

0xd559,	// (0x00053a65) link_highlight_title_pane_g1

0xd561,	// (0x00053a6d) link_highlight_title_pane_t1

0xd542,	// (0x00053a4e) link_highlight_digital_pane_g1

0xd54a,	// (0x00053a56) link_highlight_digital_pane_t1

0xd436,	// (0x00053942) copy_highlight_primary_pane_g1

0xd43e,	// (0x0005394a) copy_highlight_primary_pane_t1

0xd410,	// (0x0005391c) copy_highlight_primary_small_pane_g1

0xd427,	// (0x00053933) copy_highlight_primary_small_pane_t1

0xca70,	// (0x00052f7c) copy_highlight_secondary_pane_g1

0xca78,	// (0x00052f84) copy_highlight_secondary_pane_t1

0xd410,	// (0x0005391c) copy_highlight_title_pane_g1

0xd418,	// (0x00053924) copy_highlight_title_pane_t1

0xd436,	// (0x00053942) copy_highlight_digital_pane_g1

0xe2ec,	// (0x000547f8) copy_highlight_digital_pane_t1

0xe240,	// (0x0005474c) graphic_text_primary_pane_g1

0xe2d0,	// (0x000547dc) graphic_text_primary_pane_t1

0xe2de,	// (0x000547ea) graphic_text_primary_pane_t2

0x0001,

0xf9f6,	// (0x00055f02) graphic_text_primary_pane_t

0xe2ac,	// (0x000547b8) graphic_text_primary_small_pane_g1

0xe2b4,	// (0x000547c0) graphic_text_primary_small_pane_t1

0xe2c2,	// (0x000547ce) graphic_text_primary_small_pane_t2

0x0001,

0xf9f1,	// (0x00055efd) graphic_text_primary_small_pane_t

0xe288,	// (0x00054794) graphic_text_secondary_pane_g1

0xe290,	// (0x0005479c) graphic_text_secondary_pane_t1

0xe29e,	// (0x000547aa) graphic_text_secondary_pane_t2

0x0001,

0xf9ec,	// (0x00055ef8) graphic_text_secondary_pane_t

0xe264,	// (0x00054770) graphic_text_title_pane_g1

0xe26c,	// (0x00054778) graphic_text_title_pane_t1

0xe27a,	// (0x00054786) graphic_text_title_pane_t2

0x0001,

0xf9e7,	// (0x00055ef3) graphic_text_title_pane_t

0xe240,	// (0x0005474c) graphic_text_digital_pane_g1

0xe248,	// (0x00054754) graphic_text_digital_pane_t1

0xe256,	// (0x00054762) graphic_text_digital_pane_t2

0x0001,

0xf9e2,	// (0x00055eee) graphic_text_digital_pane_t

0xb738,	// (0x00051c44) navi_icon_pane_srt_ParamLimits

0xb738,	// (0x00051c44) navi_icon_pane_srt

0xb6dc,	// (0x00051be8) navi_midp_pane_srt

0xb6dc,	// (0x00051be8) navi_navi_pane_srt

0xb738,	// (0x00051c44) navi_text_pane_srt_ParamLimits

0xb738,	// (0x00051c44) navi_text_pane_srt

0xe20b,	// (0x00054717) navi_navi_icon_text_pane_srt

0xe213,	// (0x0005471f) navi_navi_pane_srt_g1_ParamLimits

0xe213,	// (0x0005471f) navi_navi_pane_srt_g1

0xe225,	// (0x00054731) navi_navi_pane_srt_g2_ParamLimits

0xe225,	// (0x00054731) navi_navi_pane_srt_g2

0x0001,

0xf9dd,	// (0x00055ee9) navi_navi_pane_srt_g_ParamLimits

0xf9dd,	// (0x00055ee9) navi_navi_pane_srt_g

0xe237,	// (0x00054743) navi_navi_tabs_pane_srt

0xe20b,	// (0x00054717) navi_navi_text_pane_srt

0xe20b,	// (0x00054717) navi_navi_volume_pane_srt

0xe1fc,	// (0x00054708) navi_navi_text_pane_srt_t1

0x1838,	// (0x00047d44) navi_navi_volume_pane_srt_g1

0x1840,	// (0x00047d4c) volume_small_pane_srt_ParamLimits

0x1840,	// (0x00047d4c) volume_small_pane_srt

0x122f,	// (0x0004773b) volume_small_pane_srt_g1_ParamLimits

0x122f,	// (0x0004773b) volume_small_pane_srt_g1

0x123f,	// (0x0004774b) volume_small_pane_srt_g2_ParamLimits

0x123f,	// (0x0004774b) volume_small_pane_srt_g2

0x1250,	// (0x0004775c) volume_small_pane_srt_g3_ParamLimits

0x1250,	// (0x0004775c) volume_small_pane_srt_g3

0x1261,	// (0x0004776d) volume_small_pane_srt_g4_ParamLimits

0x1261,	// (0x0004776d) volume_small_pane_srt_g4

0x1272,	// (0x0004777e) volume_small_pane_srt_g5_ParamLimits

0x1272,	// (0x0004777e) volume_small_pane_srt_g5

0x1283,	// (0x0004778f) volume_small_pane_srt_g6_ParamLimits

0x1283,	// (0x0004778f) volume_small_pane_srt_g6

0x1294,	// (0x000477a0) volume_small_pane_srt_g7_ParamLimits

0x1294,	// (0x000477a0) volume_small_pane_srt_g7

0x12a5,	// (0x000477b1) volume_small_pane_srt_g8_ParamLimits

0x12a5,	// (0x000477b1) volume_small_pane_srt_g8

0x12b6,	// (0x000477c2) volume_small_pane_srt_g9_ParamLimits

0x12b6,	// (0x000477c2) volume_small_pane_srt_g9

0x12c7,	// (0x000477d3) volume_small_pane_srt_g10_ParamLimits

0x12c7,	// (0x000477d3) volume_small_pane_srt_g10

0x0009,

0xf798,	// (0x00055ca4) volume_small_pane_srt_g_ParamLimits

0xf798,	// (0x00055ca4) volume_small_pane_srt_g

0xb9bc,	// (0x00051ec8) query_popup_data_pane_cp2

0xe1e2,	// (0x000546ee) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xe1e2,	// (0x000546ee) navi_navi_icon_text_pane_srt_t1

0xd69e,	// (0x00053baa) navi_tabs_2_long_pane_srt

0xd69e,	// (0x00053baa) navi_tabs_2_pane_srt

0xd69e,	// (0x00053baa) navi_tabs_3_long_pane_srt

0xd69e,	// (0x00053baa) navi_tabs_3_pane_srt

0xd69e,	// (0x00053baa) navi_tabs_4_pane_srt

0x1818,	// (0x00047d24) tabs_2_active_pane_srt_ParamLimits

0x1818,	// (0x00047d24) tabs_2_active_pane_srt

0x1828,	// (0x00047d34) tabs_2_passive_pane_srt_ParamLimits

0x1828,	// (0x00047d34) tabs_2_passive_pane_srt

0xcfd8,	// (0x000534e4) bg_passive_tab_pane_cp1_srt_ParamLimits

0xcfd8,	// (0x000534e4) bg_passive_tab_pane_cp1_srt

0xe1c0,	// (0x000546cc) bg_passive_tab_pane_g1_cp1_srt

0xc66d,	// (0x00052b79) bg_passive_tab_pane_g2_cp1_srt

0xe1c9,	// (0x000546d5) bg_passive_tab_pane_g3_cp1_srt

0xb72a,	// (0x00051c36) bg_active_tab_pane_cp1_srt_ParamLimits

0xb72a,	// (0x00051c36) bg_active_tab_pane_cp1_srt

0xe1d2,	// (0x000546de) tabs_2_active_pane_srt_g1

0xa013,	// (0x0005051f) tabs_2_active_pane_srt_t1_ParamLimits

0xa013,	// (0x0005051f) tabs_2_active_pane_srt_t1

0xe1c0,	// (0x000546cc) bg_active_tab_pane_g1_cp1_srt

0xc66d,	// (0x00052b79) bg_active_tab_pane_g2_cp1_srt

0xe1c9,	// (0x000546d5) bg_active_tab_pane_g3_cp1_srt

0x17e5,	// (0x00047cf1) tabs_3_active_pane_srt_ParamLimits

0x17e5,	// (0x00047cf1) tabs_3_active_pane_srt

0x17f6,	// (0x00047d02) tabs_3_passive_pane_cp_srt_ParamLimits

0x17f6,	// (0x00047d02) tabs_3_passive_pane_cp_srt

0x1807,	// (0x00047d13) tabs_3_passive_pane_srt_ParamLimits

0x1807,	// (0x00047d13) tabs_3_passive_pane_srt

0xcfd8,	// (0x000534e4) bg_passive_tab_pane_cp2_srt_ParamLimits

0xcfd8,	// (0x000534e4) bg_passive_tab_pane_cp2_srt

0xca87,	// (0x00052f93) bg_passive_tab_pane_g1_cp2_srt

0xc66d,	// (0x00052b79) bg_passive_tab_pane_g2_cp2_srt

0xca90,	// (0x00052f9c) bg_passive_tab_pane_g3_cp2_srt

0xb72a,	// (0x00051c36) bg_active_tab_pane_cp2_srt_ParamLimits

0xb72a,	// (0x00051c36) bg_active_tab_pane_cp2_srt

0xe1b8,	// (0x000546c4) tabs_3_active_pane_srt_g1

0x9ffd,	// (0x00050509) tabs_3_active_pane_srt_t1_ParamLimits

0x9ffd,	// (0x00050509) tabs_3_active_pane_srt_t1

0xca87,	// (0x00052f93) bg_active_tab_pane_g1_cp2_srt

0xc66d,	// (0x00052b79) bg_active_tab_pane_g2_cp2_srt

0xca90,	// (0x00052f9c) bg_active_tab_pane_g3_cp2_srt

0x179d,	// (0x00047ca9) tabs_4_active_pane_srt_ParamLimits

0x179d,	// (0x00047ca9) tabs_4_active_pane_srt

0x17af,	// (0x00047cbb) tabs_4_passive_pane_cp2_srt_ParamLimits

0x17af,	// (0x00047cbb) tabs_4_passive_pane_cp2_srt

0xcbb4,	// (0x000530c0) aid_size_cell_toolbar

0xd664,	// (0x00053b70) main_idle_act_pane_ParamLimits

0xcc78,	// (0x00053184) popup_large_graphic_colour_window_ParamLimits

0x96fd,	// (0x0004fc09) popup_toolbar_window_ParamLimits

0x96fd,	// (0x0004fc09) popup_toolbar_window

0xe0e4,	// (0x000545f0) list_single_graphic_2heading_pane_ParamLimits

0xe0e4,	// (0x000545f0) list_single_graphic_2heading_pane

0xc276,	// (0x00052782) aid_size_cell_apps_grid_lsc_pane

0xc288,	// (0x00052794) aid_size_cell_apps_grid_prt_pane

0xbf98,	// (0x000524a4) bg_wml_button_pane_cp1_ParamLimits

0xbf98,	// (0x000524a4) bg_wml_button_pane_cp1

0x9bd7,	// (0x000500e3) form_midp_field_text_pane_t1_ParamLimits

0xcfd8,	// (0x000534e4) input_focus_pane_cp050_ParamLimits

0xd120,	// (0x0005362c) list_midp_form_text_pane_ParamLimits

0xd0fd,	// (0x00053609) input_focus_pane_cp051_ParamLimits

0xd111,	// (0x0005361d) list_midp_choice_pane_ParamLimits

0x9b72,	// (0x0005007e) list_single_2graphic_pane_cp3_ParamLimits

0x9b72,	// (0x0005007e) list_single_2graphic_pane_cp3

0x9b86,	// (0x00050092) list_single_midp_graphic_pane_ParamLimits

0x9b86,	// (0x00050092) list_single_midp_graphic_pane

0x03e5,	// (0x000468f1) list_single_graphic_2heading_pane_g1_ParamLimits

0x03e5,	// (0x000468f1) list_single_graphic_2heading_pane_g1

0x03f1,	// (0x000468fd) list_single_graphic_2heading_pane_g4_ParamLimits

0x03f1,	// (0x000468fd) list_single_graphic_2heading_pane_g4

0x03fd,	// (0x00046909) list_single_graphic_2heading_pane_g5_ParamLimits

0x03fd,	// (0x00046909) list_single_graphic_2heading_pane_g5

0x0002,

0xf7eb,	// (0x00055cf7) list_single_graphic_2heading_pane_g_ParamLimits

0xf7eb,	// (0x00055cf7) list_single_graphic_2heading_pane_g

0x0409,	// (0x00046915) list_single_graphic_2heading_pane_t1_ParamLimits

0x0409,	// (0x00046915) list_single_graphic_2heading_pane_t1

0x041d,	// (0x00046929) list_single_graphic_2heading_pane_t2_ParamLimits

0x041d,	// (0x00046929) list_single_graphic_2heading_pane_t2

0x0439,	// (0x00046945) list_single_graphic_2heading_pane_t3_ParamLimits

0x0439,	// (0x00046945) list_single_graphic_2heading_pane_t3

0x0002,

0xf7f2,	// (0x00055cfe) list_single_graphic_2heading_pane_t_ParamLimits

0xf7f2,	// (0x00055cfe) list_single_graphic_2heading_pane_t

0xce26,	// (0x00053332) bg_popup_sub_pane_cp2

0xce50,	// (0x0005335c) grid_toobar_pane

0x142d,	// (0x00047939) cell_toolbar_pane_ParamLimits

0x142d,	// (0x00047939) cell_toolbar_pane

0xce8c,	// (0x00053398) cell_toolbar_pane_g1_ParamLimits

0xce8c,	// (0x00053398) cell_toolbar_pane_g1

0xcea0,	// (0x000533ac) cell_toolbar_pane_g2_ParamLimits

0xcea0,	// (0x000533ac) cell_toolbar_pane_g2

0x0001,

0xf7f9,	// (0x00055d05) cell_toolbar_pane_g_ParamLimits

0xf7f9,	// (0x00055d05) cell_toolbar_pane_g

0xcec2,	// (0x000533ce) grid_highlight_pane_cp2_ParamLimits

0xcec2,	// (0x000533ce) grid_highlight_pane_cp2

0xcedc,	// (0x000533e8) toolbar_button_pane

0xcee8,	// (0x000533f4) toolbar_button_pane_g1

0xcef0,	// (0x000533fc) toolbar_button_pane_g2

0xcef8,	// (0x00053404) toolbar_button_pane_g3

0xcf00,	// (0x0005340c) toolbar_button_pane_g4

0xcf08,	// (0x00053414) toolbar_button_pane_g5

0xcf10,	// (0x0005341c) toolbar_button_pane_g6

0xcf18,	// (0x00053424) toolbar_button_pane_g7

0xcf20,	// (0x0005342c) toolbar_button_pane_g8

0xcf28,	// (0x00053434) toolbar_button_pane_g9

0x0009,

0xf7fe,	// (0x00055d0a) toolbar_button_pane_g

0x1465,	// (0x00047971) list_single_2graphic_pane_g1_cp3_ParamLimits

0x1465,	// (0x00047971) list_single_2graphic_pane_g1_cp3

0x8099,	// (0x0004e5a5) list_single_2graphic_pane_g2_cp3_ParamLimits

0x8099,	// (0x0004e5a5) list_single_2graphic_pane_g2_cp3

0x1482,	// (0x0004798e) list_single_2graphic_pane_g3_cp3

0x148a,	// (0x00047996) list_single_2graphic_pane_g4_cp3_ParamLimits

0x148a,	// (0x00047996) list_single_2graphic_pane_g4_cp3

0x1496,	// (0x000479a2) list_single_2graphic_pane_t1_cp3_ParamLimits

0x1496,	// (0x000479a2) list_single_2graphic_pane_t1_cp3

0x14b2,	// (0x000479be) list_single_midp_graphic_pane_g2_ParamLimits

0x14b2,	// (0x000479be) list_single_midp_graphic_pane_g2

0x2e4b,	// (0x00049357) aid_zoom_text_primary

0x2e53,	// (0x0004935f) aid_zoom_text_secondary

0xcb44,	// (0x00053050) status_small_pane_g7_ParamLimits

0xcb44,	// (0x00053050) status_small_pane_g7

0xcb67,	// (0x00053073) status_small_pane_t1_ParamLimits

0x870f,	// (0x0004ec1b) title_pane_g2

0x0003,

0xf592,	// (0x00055a9e) title_pane_g

0x8c58,	// (0x0004f164) aid_size_cell_colour_1_pane_ParamLimits

0x8c58,	// (0x0004f164) aid_size_cell_colour_1_pane

0x8c6c,	// (0x0004f178) aid_size_cell_colour_2_pane_ParamLimits

0x8c6c,	// (0x0004f178) aid_size_cell_colour_2_pane

0x8c80,	// (0x0004f18c) aid_size_cell_colour_3_pane_ParamLimits

0x8c80,	// (0x0004f18c) aid_size_cell_colour_3_pane

0x8c94,	// (0x0004f1a0) aid_size_cell_colour_4_pane_ParamLimits

0x8c94,	// (0x0004f1a0) aid_size_cell_colour_4_pane

0x0e8b,	// (0x00047397) title_pane_stacon_g1_ParamLimits

0x0e8b,	// (0x00047397) title_pane_stacon_g1

0xd495,	// (0x000539a1) popup_note_wait_window_g3_ParamLimits

0xd495,	// (0x000539a1) popup_note_wait_window_g3

0xd50b,	// (0x00053a17) popup_note_wait_window_t5_ParamLimits

0xd50b,	// (0x00053a17) popup_note_wait_window_t5

0xb6dc,	// (0x00051be8) main_feb_china_hwr_fs_writing_pane

0x9115,	// (0x0004f621) popup_feb_china_hwr_fs_window_ParamLimits

0x9115,	// (0x0004f621) popup_feb_china_hwr_fs_window

0x80aa,	// (0x0004e5b6) aid_size_cell_hwr_fs_ParamLimits

0x80aa,	// (0x0004e5b6) aid_size_cell_hwr_fs

0xcfd8,	// (0x000534e4) bg_popup_sub_pane_cp3_ParamLimits

0xcfd8,	// (0x000534e4) bg_popup_sub_pane_cp3

0x80bf,	// (0x0004e5cb) grid_hwr_fs_pane_ParamLimits

0x80bf,	// (0x0004e5cb) grid_hwr_fs_pane

0x1501,	// (0x00047a0d) linegrid_hwr_fs_pane_ParamLimits

0x1501,	// (0x00047a0d) linegrid_hwr_fs_pane

0x80d7,	// (0x0004e5e3) cell_hwr_fs_pane_ParamLimits

0x80d7,	// (0x0004e5e3) cell_hwr_fs_pane

0xcfe4,	// (0x000534f0) linegrid_hwr_fs_pane_g1_ParamLimits

0xcfe4,	// (0x000534f0) linegrid_hwr_fs_pane_g1

0x9b46,	// (0x00050052) linegrid_hwr_fs_pane_g2_ParamLimits

0x9b46,	// (0x00050052) linegrid_hwr_fs_pane_g2

0xcff0,	// (0x000534fc) linegrid_hwr_fs_pane_g3_ParamLimits

0xcff0,	// (0x000534fc) linegrid_hwr_fs_pane_g3

0x1533,	// (0x00047a3f) linegrid_hwr_fs_pane_g4_ParamLimits

0x1533,	// (0x00047a3f) linegrid_hwr_fs_pane_g4

0x154d,	// (0x00047a59) linegrid_hwr_fs_pane_g5_ParamLimits

0x154d,	// (0x00047a59) linegrid_hwr_fs_pane_g5

0x0004,

0xf824,	// (0x00055d30) linegrid_hwr_fs_pane_g_ParamLimits

0xf824,	// (0x00055d30) linegrid_hwr_fs_pane_g

0xcffc,	// (0x00053508) cell_hwr_fs_pane_g1_ParamLimits

0xcffc,	// (0x00053508) cell_hwr_fs_pane_g1

0xcdf2,	// (0x000532fe) cell_hwr_fs_pane_g2_ParamLimits

0xcdf2,	// (0x000532fe) cell_hwr_fs_pane_g2

0x9b58,	// (0x00050064) cell_hwr_fs_pane_g3_ParamLimits

0x9b58,	// (0x00050064) cell_hwr_fs_pane_g3

0x9b65,	// (0x00050071) cell_hwr_fs_pane_g4_ParamLimits

0x9b65,	// (0x00050071) cell_hwr_fs_pane_g4

0x0003,

0xf82f,	// (0x00055d3b) cell_hwr_fs_pane_g_ParamLimits

0xf82f,	// (0x00055d3b) cell_hwr_fs_pane_g

0x80fd,	// (0x0004e609) cell_hwr_fs_pane_t1

0xb6dc,	// (0x00051be8) grid_highlight_pane_cp6

0xb6dc,	// (0x00051be8) main_idle_act2_pane

0xbf46,	// (0x00052452) aid_inside_area_popup_secondary

0x9c55,	// (0x00050161) aid_inside_area_window_primary_ParamLimits

0x9c55,	// (0x00050161) aid_inside_area_window_primary

0xe2fb,	// (0x00054807) ai2_news_ticker_pane

0xe303,	// (0x0005480f) aid_size_cell_ai1_link_ParamLimits

0xe303,	// (0x0005480f) aid_size_cell_ai1_link

0xa029,	// (0x00050535) popup_ai2_data_window_ParamLimits

0xa029,	// (0x00050535) popup_ai2_data_window

0xe31d,	// (0x00054829) popup_ai2_link_window_ParamLimits

0xe31d,	// (0x00054829) popup_ai2_link_window

0xcfd8,	// (0x000534e4) bg_popup_sub_pane_cp4_ParamLimits

0xcfd8,	// (0x000534e4) bg_popup_sub_pane_cp4

0xe331,	// (0x0005483d) grid_ai2_link_pane_ParamLimits

0xe331,	// (0x0005483d) grid_ai2_link_pane

0xe348,	// (0x00054854) popup_ai2_link_window_g1_ParamLimits

0xe348,	// (0x00054854) popup_ai2_link_window_g1

0xe354,	// (0x00054860) popup_ai2_link_window_g2_ParamLimits

0xe354,	// (0x00054860) popup_ai2_link_window_g2

0x0001,

0xf9fb,	// (0x00055f07) popup_ai2_link_window_g_ParamLimits

0xf9fb,	// (0x00055f07) popup_ai2_link_window_g

0xe363,	// (0x0005486f) ai2_mp_button_pane

0xe36b,	// (0x00054877) ai2_mp_volume_pane

0xd0fd,	// (0x00053609) bg_popup_sub_pane_cp5_ParamLimits

0xd0fd,	// (0x00053609) bg_popup_sub_pane_cp5

0xe373,	// (0x0005487f) heading_ai2_gene_pane_ParamLimits

0xe373,	// (0x0005487f) heading_ai2_gene_pane

0xe37f,	// (0x0005488b) list_ai2_gene_pane_ParamLimits

0xe37f,	// (0x0005488b) list_ai2_gene_pane

0xe3c7,	// (0x000548d3) cell_ai2_link_pane_ParamLimits

0xe3c7,	// (0x000548d3) cell_ai2_link_pane

0xe3dd,	// (0x000548e9) cell_ai2_link_pane_g1

0xb6dc,	// (0x00051be8) grid_highlight_pane_cp7

0x1855,	// (0x00047d61) ai2_mp_volume_pane_g1

0xe47a,	// (0x00054986) ai2_mp_volume_pane_g2

0xa053,	// (0x0005055f) list_ai2_gene_pane_t1

0xe482,	// (0x0005498e) ai2_mp_volume_pane_g3

0x0002,

0xfa14,	// (0x00055f20) ai2_mp_volume_pane_g

0x185d,	// (0x00047d69) volume_small_pane_cp3

0xe48a,	// (0x00054996) aid_size_cell_ai2_button

0xe492,	// (0x0005499e) grid_ai2_button_pane

0xe49b,	// (0x000549a7) cell_ai2_button_pane_ParamLimits

0xe49b,	// (0x000549a7) cell_ai2_button_pane

0xb6d2,	// (0x00051bde) cell_ai2_button_pane_g1

0xb6dc,	// (0x00051be8) grid_highlight_pane_cp8

0xe43a,	// (0x00054946) ai2_gene_pane_t1_ParamLimits

0xe43a,	// (0x00054946) ai2_gene_pane_t1

0x908b,	// (0x0004f597) aid_height_parent_landscape

0x9dbc,	// (0x000502c8) aid_height_set_list

0xd664,	// (0x00053b70) aid_size_parent

0xe166,	// (0x00054672) aid_size_cell_graphic_pane_ParamLimits

0xe38f,	// (0x0005489b) popup_ai2_data_window_g1_ParamLimits

0xe38f,	// (0x0005489b) popup_ai2_data_window_g1

0xe39b,	// (0x000548a7) ai2_news_ticker_pane_g1

0xe3a3,	// (0x000548af) ai2_news_ticker_pane_g2

0x0001,

0xfa00,	// (0x00055f0c) ai2_news_ticker_pane_g

0xe3ab,	// (0x000548b7) ai2_news_ticker_pane_t1

0xe3b9,	// (0x000548c5) ai2_news_ticker_pane_t2

0x0001,

0xfa05,	// (0x00055f11) ai2_news_ticker_pane_t

0xe3e6,	// (0x000548f2) heading_ai2_gene_pane_g1

0xe3ee,	// (0x000548fa) heading_ai2_gene_pane_t1_ParamLimits

0xe3ee,	// (0x000548fa) heading_ai2_gene_pane_t1

0xe403,	// (0x0005490f) list_highlight_pane_cp6

0xa03d,	// (0x00050549) ai2_gene_pane_ParamLimits

0xa03d,	// (0x00050549) ai2_gene_pane

0xa061,	// (0x0005056d) list_ai2_gene_pane_t2

0x0001,

0xfa0a,	// (0x00055f16) list_ai2_gene_pane_t

0xe40b,	// (0x00054917) list_highlight_pane_cp8_ParamLimits

0xe40b,	// (0x00054917) list_highlight_pane_cp8

0xe41c,	// (0x00054928) ai2_gene_pane_g1_ParamLimits

0xe41c,	// (0x00054928) ai2_gene_pane_g1

0xe42e,	// (0x0005493a) ai2_gene_pane_g2_ParamLimits

0xe42e,	// (0x0005493a) ai2_gene_pane_g2

0x0001,

0xfa0f,	// (0x00055f1b) ai2_gene_pane_g_ParamLimits

0xfa0f,	// (0x00055f1b) ai2_gene_pane_g

0xbdd6,	// (0x000522e2) scroll_pane_cp12

0x8056,	// (0x0004e562) control_pane_t3_ParamLimits

0x8056,	// (0x0004e562) control_pane_t3

0xcb58,	// (0x00053064) status_small_pane_g8_ParamLimits

0xcb58,	// (0x00053064) status_small_pane_g8

0x91c4,	// (0x0004f6d0) popup_find_window_ParamLimits

0x9433,	// (0x0004f93f) popup_note_image_window_ParamLimits

0x3282,	// (0x0004978e) list_double2_graphic_pane_vc_g1_ParamLimits

0x3282,	// (0x0004978e) list_double2_graphic_pane_vc_g1

0xdbae,	// (0x000540ba) list_double2_graphic_pane_vc_g2_ParamLimits

0xdbae,	// (0x000540ba) list_double2_graphic_pane_vc_g2

0x328e,	// (0x0004979a) list_double2_graphic_pane_vc_g3_ParamLimits

0x328e,	// (0x0004979a) list_double2_graphic_pane_vc_g3

0x0002,

0xf659,	// (0x00055b65) list_double2_graphic_pane_vc_g_ParamLimits

0xf659,	// (0x00055b65) list_double2_graphic_pane_vc_g

0x329a,	// (0x000497a6) list_double2_graphic_pane_vc_t1_ParamLimits

0x329a,	// (0x000497a6) list_double2_graphic_pane_vc_t1

0xdbae,	// (0x000540ba) list_single_heading_pane_vc_g1_ParamLimits

0xdbae,	// (0x000540ba) list_single_heading_pane_vc_g1

0x328e,	// (0x0004979a) list_single_heading_pane_vc_g2_ParamLimits

0x328e,	// (0x0004979a) list_single_heading_pane_vc_g2

0x0001,

0xf616,	// (0x00055b22) list_single_heading_pane_vc_g_ParamLimits

0xf616,	// (0x00055b22) list_single_heading_pane_vc_g

0x32b0,	// (0x000497bc) list_single_heading_pane_vc_t1_ParamLimits

0x32b0,	// (0x000497bc) list_single_heading_pane_vc_t1

0x32c6,	// (0x000497d2) list_single_heading_pane_vc_t2_ParamLimits

0x32c6,	// (0x000497d2) list_single_heading_pane_vc_t2

0x0001,

0xf813,	// (0x00055d1f) list_single_heading_pane_vc_t_ParamLimits

0xf813,	// (0x00055d1f) list_single_heading_pane_vc_t

0xcf30,	// (0x0005343c) list_setting_number_pane_vc_g1_ParamLimits

0xcf30,	// (0x0005343c) list_setting_number_pane_vc_g1

0xcf3c,	// (0x00053448) list_setting_number_pane_vc_g2_ParamLimits

0xcf3c,	// (0x00053448) list_setting_number_pane_vc_g2

0x0001,

0xf818,	// (0x00055d24) list_setting_number_pane_vc_g_ParamLimits

0xf818,	// (0x00055d24) list_setting_number_pane_vc_g

0xcf48,	// (0x00053454) list_setting_number_pane_vc_t1_ParamLimits

0xcf48,	// (0x00053454) list_setting_number_pane_vc_t1

0xcf5c,	// (0x00053468) list_setting_number_pane_vc_t2_ParamLimits

0xcf5c,	// (0x00053468) list_setting_number_pane_vc_t2

0xcf78,	// (0x00053484) list_setting_number_pane_vc_t3_ParamLimits

0xcf78,	// (0x00053484) list_setting_number_pane_vc_t3

0x0002,

0xf81d,	// (0x00055d29) list_setting_number_pane_vc_t_ParamLimits

0xf81d,	// (0x00055d29) list_setting_number_pane_vc_t

0xcf9e,	// (0x000534aa) set_value_pane_vc_ParamLimits

0xcf9e,	// (0x000534aa) set_value_pane_vc

0xe0e4,	// (0x000545f0) list_double2_graphic_pane_vc_ParamLimits

0xe0e4,	// (0x000545f0) list_double2_graphic_pane_vc

0x339a,	// (0x000498a6) list_double2_large_graphic_pane_vc_ParamLimits

0x339a,	// (0x000498a6) list_double2_large_graphic_pane_vc

0xe0e4,	// (0x000545f0) list_double2_pane_vc_ParamLimits

0xe0e4,	// (0x000545f0) list_double2_pane_vc

0xe0e4,	// (0x000545f0) list_double_graphic_heading_pane_vc_ParamLimits

0xe0e4,	// (0x000545f0) list_double_graphic_heading_pane_vc

0xe0e4,	// (0x000545f0) list_double_graphic_pane_vc_ParamLimits

0xe0e4,	// (0x000545f0) list_double_graphic_pane_vc

0xe0e4,	// (0x000545f0) list_double_heading_pane_vc_ParamLimits

0xe0e4,	// (0x000545f0) list_double_heading_pane_vc

0x339a,	// (0x000498a6) list_double_large_graphic_pane_vc_ParamLimits

0x339a,	// (0x000498a6) list_double_large_graphic_pane_vc

0xe0e4,	// (0x000545f0) list_double_number_pane_vc_ParamLimits

0xe0e4,	// (0x000545f0) list_double_number_pane_vc

0xe0e4,	// (0x000545f0) list_double_pane_vc_ParamLimits

0xe0e4,	// (0x000545f0) list_double_pane_vc

0xe0e4,	// (0x000545f0) list_double_time_pane_vc_ParamLimits

0xe0e4,	// (0x000545f0) list_double_time_pane_vc

0xe0e4,	// (0x000545f0) list_setting_number_pane_vc_ParamLimits

0xe0e4,	// (0x000545f0) list_setting_number_pane_vc

0xe0e4,	// (0x000545f0) list_setting_pane_vc_ParamLimits

0xe0e4,	// (0x000545f0) list_setting_pane_vc

0xe0e4,	// (0x000545f0) list_single_graphic_heading_pane_vc_ParamLimits

0xe0e4,	// (0x000545f0) list_single_graphic_heading_pane_vc

0xe0e4,	// (0x000545f0) list_single_heading_pane_vc_ParamLimits

0xe0e4,	// (0x000545f0) list_single_heading_pane_vc

0xe0e4,	// (0x000545f0) list_single_number_heading_pane_vc_ParamLimits

0xe0e4,	// (0x000545f0) list_single_number_heading_pane_vc

0x3282,	// (0x0004978e) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x3282,	// (0x0004978e) list_double_graphic_heading_pane_vc_g1

0xdbae,	// (0x000540ba) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xdbae,	// (0x000540ba) list_double_graphic_heading_pane_vc_g2

0x328e,	// (0x0004979a) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x328e,	// (0x0004979a) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf659,	// (0x00055b65) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf659,	// (0x00055b65) list_double_graphic_heading_pane_vc_g

0x33e4,	// (0x000498f0) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x33e4,	// (0x000498f0) list_double_graphic_heading_pane_vc_t1

0x32b0,	// (0x000497bc) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x32b0,	// (0x000497bc) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa1b,	// (0x00055f27) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa1b,	// (0x00055f27) list_double_graphic_heading_pane_vc_t

0xcf30,	// (0x0005343c) list_setting_pane_vc_g1_ParamLimits

0xcf30,	// (0x0005343c) list_setting_pane_vc_g1

0xcf3c,	// (0x00053448) list_setting_pane_vc_g2_ParamLimits

0xcf3c,	// (0x00053448) list_setting_pane_vc_g2

0x0001,

0xf818,	// (0x00055d24) list_setting_pane_vc_g_ParamLimits

0xf818,	// (0x00055d24) list_setting_pane_vc_g

0xe6bf,	// (0x00054bcb) list_setting_pane_vc_t1_ParamLimits

0xe6bf,	// (0x00054bcb) list_setting_pane_vc_t1

0xe6d3,	// (0x00054bdf) list_setting_pane_vc_t2_ParamLimits

0xe6d3,	// (0x00054bdf) list_setting_pane_vc_t2

0x0001,

0xfa5e,	// (0x00055f6a) list_setting_pane_vc_t_ParamLimits

0xfa5e,	// (0x00055f6a) list_setting_pane_vc_t

0xcf9e,	// (0x000534aa) set_value_pane_cp_vc_ParamLimits

0xcf9e,	// (0x000534aa) set_value_pane_cp_vc

0xdbae,	// (0x000540ba) list_single_number_heading_pane_vc_g1_ParamLimits

0xdbae,	// (0x000540ba) list_single_number_heading_pane_vc_g1

0x328e,	// (0x0004979a) list_single_number_heading_pane_vc_g2_ParamLimits

0x328e,	// (0x0004979a) list_single_number_heading_pane_vc_g2

0x0001,

0xf616,	// (0x00055b22) list_single_number_heading_pane_vc_g_ParamLimits

0xf616,	// (0x00055b22) list_single_number_heading_pane_vc_g

0x32b0,	// (0x000497bc) list_single_number_heading_pane_vc_t1_ParamLimits

0x32b0,	// (0x000497bc) list_single_number_heading_pane_vc_t1

0x33f8,	// (0x00049904) list_single_number_heading_pane_vc_t2_ParamLimits

0x33f8,	// (0x00049904) list_single_number_heading_pane_vc_t2

0x340c,	// (0x00049918) list_single_number_heading_pane_vc_t3_ParamLimits

0x340c,	// (0x00049918) list_single_number_heading_pane_vc_t3

0x0002,

0xfa63,	// (0x00055f6f) list_single_number_heading_pane_vc_t_ParamLimits

0xfa63,	// (0x00055f6f) list_single_number_heading_pane_vc_t

0x3282,	// (0x0004978e) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x3282,	// (0x0004978e) list_single_graphic_heading_pane_vc_g1

0xdbae,	// (0x000540ba) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xdbae,	// (0x000540ba) list_single_graphic_heading_pane_vc_g4

0x328e,	// (0x0004979a) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x328e,	// (0x0004979a) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf659,	// (0x00055b65) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf659,	// (0x00055b65) list_single_graphic_heading_pane_vc_g

0x32b0,	// (0x000497bc) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x32b0,	// (0x000497bc) list_single_graphic_heading_pane_vc_t1

0x341e,	// (0x0004992a) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x341e,	// (0x0004992a) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa6a,	// (0x00055f76) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa6a,	// (0x00055f76) list_single_graphic_heading_pane_vc_t

0xdbae,	// (0x000540ba) list_double2_pane_vc_g1_ParamLimits

0xdbae,	// (0x000540ba) list_double2_pane_vc_g1

0x328e,	// (0x0004979a) list_double2_pane_vc_g2_ParamLimits

0x328e,	// (0x0004979a) list_double2_pane_vc_g2

0x0001,

0xf616,	// (0x00055b22) list_double2_pane_vc_g_ParamLimits

0xf616,	// (0x00055b22) list_double2_pane_vc_g

0x3432,	// (0x0004993e) list_double2_pane_vc_t1_ParamLimits

0x3432,	// (0x0004993e) list_double2_pane_vc_t1

0x3d38,	// (0x0004a244) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x3d38,	// (0x0004a244) list_double2_large_graphic_pane_vc_g1

0x3d44,	// (0x0004a250) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x3d44,	// (0x0004a250) list_double2_large_graphic_pane_vc_g2

0x3d50,	// (0x0004a25c) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x3d50,	// (0x0004a25c) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf62e,	// (0x00055b3a) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf62e,	// (0x00055b3a) list_double2_large_graphic_pane_vc_g

0x3448,	// (0x00049954) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x3448,	// (0x00049954) list_double2_large_graphic_pane_vc_t1

0x3d5c,	// (0x0004a268) list_double_time_pane_vc_g1_ParamLimits

0x3d5c,	// (0x0004a268) list_double_time_pane_vc_g1

0x3d68,	// (0x0004a274) list_double_time_pane_vc_g2_ParamLimits

0x3d68,	// (0x0004a274) list_double_time_pane_vc_g2

0x0001,

0xfa6f,	// (0x00055f7b) list_double_time_pane_vc_g_ParamLimits

0xfa6f,	// (0x00055f7b) list_double_time_pane_vc_g

0x345e,	// (0x0004996a) list_double_time_pane_vc_t1_ParamLimits

0x345e,	// (0x0004996a) list_double_time_pane_vc_t1

0x3477,	// (0x00049983) list_double_time_pane_vc_t2_ParamLimits

0x3477,	// (0x00049983) list_double_time_pane_vc_t2

0x34b7,	// (0x000499c3) list_double_time_pane_vc_t3_ParamLimits

0x34b7,	// (0x000499c3) list_double_time_pane_vc_t3

0x34cf,	// (0x000499db) list_double_time_pane_vc_t4_ParamLimits

0x34cf,	// (0x000499db) list_double_time_pane_vc_t4

0x0003,

0xfa74,	// (0x00055f80) list_double_time_pane_vc_t_ParamLimits

0xfa74,	// (0x00055f80) list_double_time_pane_vc_t

0xdbae,	// (0x000540ba) list_double_pane_vc_g1_ParamLimits

0xdbae,	// (0x000540ba) list_double_pane_vc_g1

0x328e,	// (0x0004979a) list_double_pane_vc_g2_ParamLimits

0x328e,	// (0x0004979a) list_double_pane_vc_g2

0x0001,

0xf616,	// (0x00055b22) list_double_pane_vc_g_ParamLimits

0xf616,	// (0x00055b22) list_double_pane_vc_g

0x34e3,	// (0x000499ef) list_double_pane_vc_t1_ParamLimits

0x34e3,	// (0x000499ef) list_double_pane_vc_t1

0x34f5,	// (0x00049a01) list_double_pane_vc_t2_ParamLimits

0x34f5,	// (0x00049a01) list_double_pane_vc_t2

0x0001,

0xfa7d,	// (0x00055f89) list_double_pane_vc_t_ParamLimits

0xfa7d,	// (0x00055f89) list_double_pane_vc_t

0xdbae,	// (0x000540ba) list_double_number_pane_vc_g1_ParamLimits

0xdbae,	// (0x000540ba) list_double_number_pane_vc_g1

0x328e,	// (0x0004979a) list_double_number_pane_vc_g2_ParamLimits

0x328e,	// (0x0004979a) list_double_number_pane_vc_g2

0x0001,

0xf616,	// (0x00055b22) list_double_number_pane_vc_g_ParamLimits

0xf616,	// (0x00055b22) list_double_number_pane_vc_g

0x350d,	// (0x00049a19) list_double_number_pane_vc_t1_ParamLimits

0x350d,	// (0x00049a19) list_double_number_pane_vc_t1

0x3521,	// (0x00049a2d) list_double_number_pane_vc_t2_ParamLimits

0x3521,	// (0x00049a2d) list_double_number_pane_vc_t2

0x34f5,	// (0x00049a01) list_double_number_pane_vc_t3_ParamLimits

0x34f5,	// (0x00049a01) list_double_number_pane_vc_t3

0x0002,

0xfa82,	// (0x00055f8e) list_double_number_pane_vc_t_ParamLimits

0xfa82,	// (0x00055f8e) list_double_number_pane_vc_t

0x3d74,	// (0x0004a280) list_double_large_graphic_pane_vc_g1_ParamLimits

0x3d74,	// (0x0004a280) list_double_large_graphic_pane_vc_g1

0x3d80,	// (0x0004a28c) list_double_large_graphic_pane_vc_g2_ParamLimits

0x3d80,	// (0x0004a28c) list_double_large_graphic_pane_vc_g2

0x3d50,	// (0x0004a25c) list_double_large_graphic_pane_vc_g3_ParamLimits

0x3d50,	// (0x0004a25c) list_double_large_graphic_pane_vc_g3

0x3533,	// (0x00049a3f) list_double_large_graphic_pane_vc_g4_ParamLimits

0x3533,	// (0x00049a3f) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa89,	// (0x00055f95) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa89,	// (0x00055f95) list_double_large_graphic_pane_vc_g

0x353f,	// (0x00049a4b) list_double_large_graphic_pane_vc_t1_ParamLimits

0x353f,	// (0x00049a4b) list_double_large_graphic_pane_vc_t1

0x3551,	// (0x00049a5d) list_double_large_graphic_pane_vc_t2_ParamLimits

0x3551,	// (0x00049a5d) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa92,	// (0x00055f9e) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa92,	// (0x00055f9e) list_double_large_graphic_pane_vc_t

0xdbae,	// (0x000540ba) list_double_heading_pane_vc_g1_ParamLimits

0xdbae,	// (0x000540ba) list_double_heading_pane_vc_g1

0x328e,	// (0x0004979a) list_double_heading_pane_vc_g2_ParamLimits

0x328e,	// (0x0004979a) list_double_heading_pane_vc_g2

0x0001,

0xf616,	// (0x00055b22) list_double_heading_pane_vc_g_ParamLimits

0xf616,	// (0x00055b22) list_double_heading_pane_vc_g

0x356a,	// (0x00049a76) list_double_heading_pane_vc_t1_ParamLimits

0x356a,	// (0x00049a76) list_double_heading_pane_vc_t1

0x32b0,	// (0x000497bc) list_double_heading_pane_vc_t2_ParamLimits

0x32b0,	// (0x000497bc) list_double_heading_pane_vc_t2

0x0001,

0xfa97,	// (0x00055fa3) list_double_heading_pane_vc_t_ParamLimits

0xfa97,	// (0x00055fa3) list_double_heading_pane_vc_t

0x3282,	// (0x0004978e) list_double_graphic_pane_vc_g1_ParamLimits

0x3282,	// (0x0004978e) list_double_graphic_pane_vc_g1

0x3d8f,	// (0x0004a29b) list_double_graphic_pane_vc_g2_ParamLimits

0x3d8f,	// (0x0004a29b) list_double_graphic_pane_vc_g2

0x3d9e,	// (0x0004a2aa) list_double_graphic_pane_vc_g3_ParamLimits

0x3d9e,	// (0x0004a2aa) list_double_graphic_pane_vc_g3

0x0002,

0xfa9c,	// (0x00055fa8) list_double_graphic_pane_vc_g_ParamLimits

0xfa9c,	// (0x00055fa8) list_double_graphic_pane_vc_g

0x357e,	// (0x00049a8a) list_double_graphic_pane_vc_t1_ParamLimits

0x357e,	// (0x00049a8a) list_double_graphic_pane_vc_t1

0x34f5,	// (0x00049a01) list_double_graphic_pane_vc_t2_ParamLimits

0x34f5,	// (0x00049a01) list_double_graphic_pane_vc_t2

0x0001,

0xfaa3,	// (0x00055faf) list_double_graphic_pane_vc_t_ParamLimits

0xfaa3,	// (0x00055faf) list_double_graphic_pane_vc_t

0x0469,	// (0x00046975) aid_size_cell_fastswap

0x7865,	// (0x0004dd71) aid_size_cell_touch_ParamLimits

0x7865,	// (0x0004dd71) aid_size_cell_touch

0x06d6,	// (0x00046be2) popup_fast_swap_wide_window_ParamLimits

0x06d6,	// (0x00046be2) popup_fast_swap_wide_window

0x79b0,	// (0x0004debc) touch_pane_ParamLimits

0x79b0,	// (0x0004debc) touch_pane

0xbe2c,	// (0x00052338) button_value_adjust_pane_cp2

0x0d9b,	// (0x000472a7) button_value_adjust_pane_cp4

0x0dbf,	// (0x000472cb) form_field_data_pane_cp2

0x7dc1,	// (0x0004e2cd) form_field_data_wide_pane_cp2

0xc2bf,	// (0x000527cb) bg_scroll_pane_ParamLimits

0x0fee,	// (0x000474fa) scroll_handle_pane_ParamLimits

0x1002,	// (0x0004750e) scroll_sc2_down_pane_ParamLimits

0x1002,	// (0x0004750e) scroll_sc2_down_pane

0xc2f0,	// (0x000527fc) scroll_sc2_up_pane_ParamLimits

0xc2f0,	// (0x000527fc) scroll_sc2_up_pane

0xa18c,	// (0x00050698) grid_wheel_folder_pane_g1_ParamLimits

0xa18c,	// (0x00050698) grid_wheel_folder_pane_g1

0x11c7,	// (0x000476d3) clock_nsta_pane_cp2_ParamLimits

0x11c7,	// (0x000476d3) clock_nsta_pane_cp2

0x8fa0,	// (0x0004f4ac) listscroll_midp_pane_ParamLimits

0x8fb1,	// (0x0004f4bd) midp_canvas_pane

0xcbac,	// (0x000530b8) nsta_clock_indic_pane

0xcbdc,	// (0x000530e8) listscroll_form_pane_vc

0xcbe4,	// (0x000530f0) listscroll_set_pane_vc_ParamLimits

0xcbe4,	// (0x000530f0) listscroll_set_pane_vc

0x985a,	// (0x0004fd66) clock_nsta_pane

0x9884,	// (0x0004fd90) indicator_nsta_pane

0xce26,	// (0x00053332) bg_popup_sub_pane_cp2_ParamLimits

0xce3a,	// (0x00053346) find_pane_cp2_ParamLimits

0xce3a,	// (0x00053346) find_pane_cp2

0xce50,	// (0x0005335c) grid_toobar_pane_ParamLimits

0xcfac,	// (0x000534b8) list_form_gen_pane_vc_ParamLimits

0xcfac,	// (0x000534b8) list_form_gen_pane_vc

0xcfc2,	// (0x000534ce) scroll_pane_cp8_vc_ParamLimits

0xcfc2,	// (0x000534ce) scroll_pane_cp8_vc

0xd012,	// (0x0005351e) data_form_wide_pane_vc_ParamLimits

0xd012,	// (0x0005351e) data_form_wide_pane_vc

0xd01e,	// (0x0005352a) form_field_data_wide_pane_vc_g1

0xd026,	// (0x00053532) form_field_data_wide_pane_vc_t1_ParamLimits

0xd026,	// (0x00053532) form_field_data_wide_pane_vc_t1

0xbe40,	// (0x0005234c) input_focus_pane_cp6_vc_ParamLimits

0xbe40,	// (0x0005234c) input_focus_pane_cp6_vc

0x9bf9,	// (0x00050105) list_midp_pane_ParamLimits

0xd676,	// (0x00053b82) scroll_pane_cp16_ParamLimits

0xd676,	// (0x00053b82) scroll_pane_cp16

0xd28d,	// (0x00053799) button_value_adjust_pane_ParamLimits

0xd28d,	// (0x00053799) button_value_adjust_pane

0x9dcd,	// (0x000502d9) button_value_adjust_pane_cp6_ParamLimits

0x9dcd,	// (0x000502d9) button_value_adjust_pane_cp6

0x9ee7,	// (0x000503f3) settings_code_pane_cp_ParamLimits

0x9ee7,	// (0x000503f3) settings_code_pane_cp

0xb6d2,	// (0x00051bde) cell_touch_pane_g1

0xb6d2,	// (0x00051bde) cell_touch_pane_g2

0x0001,

0xf742,	// (0x00055c4e) cell_touch_pane_g

0xa06f,	// (0x0005057b) cell_touch_pane_cp_ParamLimits

0xa06f,	// (0x0005057b) cell_touch_pane_cp

0xa08b,	// (0x00050597) cell_touch_pane_ParamLimits

0xa08b,	// (0x00050597) cell_touch_pane

0xb6d2,	// (0x00051bde) scroll_sc2_down_pane_g1

0xb6d2,	// (0x00051bde) scroll_sc2_up_pane_g1

0xb6dc,	// (0x00051be8) bg_set_opt_pane_cp4_vc

0xe4ad,	// (0x000549b9) list_set_graphic_pane_vc_g1_ParamLimits

0xe4ad,	// (0x000549b9) list_set_graphic_pane_vc_g1

0xe4b9,	// (0x000549c5) list_set_graphic_pane_vc_g2_ParamLimits

0xe4b9,	// (0x000549c5) list_set_graphic_pane_vc_g2

0x0001,

0xfa20,	// (0x00055f2c) list_set_graphic_pane_vc_g_ParamLimits

0xfa20,	// (0x00055f2c) list_set_graphic_pane_vc_g

0xe4c5,	// (0x000549d1) text_primary_small_cp13_vc_ParamLimits

0xe4c5,	// (0x000549d1) text_primary_small_cp13_vc

0xe4dd,	// (0x000549e9) list_set_graphic_pane_vc_ParamLimits

0xe4dd,	// (0x000549e9) list_set_graphic_pane_vc

0xb6dc,	// (0x00051be8) input_focus_pane_cp2_vc

0xb6d2,	// (0x00051bde) setting_code_pane_vc_g1

0xe4f1,	// (0x000549fd) setting_code_pane_vc_t1

0xe4ff,	// (0x00054a0b) set_text_pane_vc_t1_ParamLimits

0xe4ff,	// (0x00054a0b) set_text_pane_vc_t1

0xb6dc,	// (0x00051be8) input_focus_pane_cp1_vc

0xe51a,	// (0x00054a26) list_set_text_pane_vc

0xb6d2,	// (0x00051bde) setting_text_pane_vc_g1

0xb6dc,	// (0x00051be8) bg_set_opt_pane_cp2_vc

0xe524,	// (0x00054a30) setting_slider_graphic_pane_vc_g1

0xe52c,	// (0x00054a38) setting_slider_graphic_pane_vc_t1

0xe53a,	// (0x00054a46) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa25,	// (0x00055f31) setting_slider_graphic_pane_vc_t

0xe548,	// (0x00054a54) slider_set_pane_cp_vc

0xe550,	// (0x00054a5c) slider_set_pane_vc_g1

0xe559,	// (0x00054a65) slider_set_pane_vc_g2

0x0006,

0xfa2a,	// (0x00055f36) slider_set_pane_vc_g

0xbea7,	// (0x000523b3) set_opt_bg_pane_g1_copy1

0xbeaf,	// (0x000523bb) set_opt_bg_pane_g2_copy1

0xe585,	// (0x00054a91) set_opt_bg_pane_g3_copy1

0xbebf,	// (0x000523cb) set_opt_bg_pane_g4_copy1

0xbec7,	// (0x000523d3) set_opt_bg_pane_g5_copy1

0xbecf,	// (0x000523db) set_opt_bg_pane_g6_copy1

0xe58f,	// (0x00054a9b) set_opt_bg_pane_g7_copy1

0xe597,	// (0x00054aa3) set_opt_bg_pane_g8_copy1

0xe5a1,	// (0x00054aad) set_opt_bg_pane_g9_copy1

0xb6dc,	// (0x00051be8) bg_set_opt_pane_cp_vc

0xe5ab,	// (0x00054ab7) setting_slider_pane_vc_t1

0xe52c,	// (0x00054a38) setting_slider_pane_vc_t2

0xe53a,	// (0x00054a46) setting_slider_pane_vc_t3

0x0002,

0xfa39,	// (0x00055f45) setting_slider_pane_vc_t

0xe548,	// (0x00054a54) slider_set_pane_vc

0x1571,	// (0x00047a7d) volume_set_pane_vc_g1

0x157a,	// (0x00047a86) volume_set_pane_vc_g2

0x1583,	// (0x00047a8f) volume_set_pane_vc_g3

0x158c,	// (0x00047a98) volume_set_pane_vc_g4

0x1595,	// (0x00047aa1) volume_set_pane_vc_g5

0x159e,	// (0x00047aaa) volume_set_pane_vc_g6

0x15a7,	// (0x00047ab3) volume_set_pane_vc_g7

0x15b0,	// (0x00047abc) volume_set_pane_vc_g8

0x15b9,	// (0x00047ac5) volume_set_pane_vc_g9

0x15c2,	// (0x00047ace) volume_set_pane_vc_g10

0x0009,

0xfa40,	// (0x00055f4c) volume_set_pane_vc_g

0xe5ba,	// (0x00054ac6) volume_set_pane_vc

0xe5c2,	// (0x00054ace) button_value_adjust_pane_cp1_vc

0xe5cc,	// (0x00054ad8) list_highlight_pane_cp2_vc

0xe5d5,	// (0x00054ae1) list_set_pane_vc_ParamLimits

0xe5d5,	// (0x00054ae1) list_set_pane_vc

0xe64d,	// (0x00054b59) main_pane_set_vc_t1_ParamLimits

0xe64d,	// (0x00054b59) main_pane_set_vc_t1

0xe662,	// (0x00054b6e) main_pane_set_vc_t2_ParamLimits

0xe662,	// (0x00054b6e) main_pane_set_vc_t2

0xe674,	// (0x00054b80) main_pane_set_vc_t3_ParamLimits

0xe674,	// (0x00054b80) main_pane_set_vc_t3

0xe688,	// (0x00054b94) main_pane_set_vc_t4_ParamLimits

0xe688,	// (0x00054b94) main_pane_set_vc_t4

0x0003,

0xfa55,	// (0x00055f61) main_pane_set_vc_t_ParamLimits

0xfa55,	// (0x00055f61) main_pane_set_vc_t

0xe69c,	// (0x00054ba8) setting_code_pane_vc_ParamLimits

0xe69c,	// (0x00054ba8) setting_code_pane_vc

0xe6ad,	// (0x00054bb9) setting_slider_graphic_pane_vc

0xe6ad,	// (0x00054bb9) setting_slider_pane_vc

0xe6ad,	// (0x00054bb9) setting_text_pane_vc

0xe6ad,	// (0x00054bb9) setting_volume_pane_vc

0xe6b7,	// (0x00054bc3) scroll_pane_cp121_vc

0xbe1a,	// (0x00052326) set_content_pane_vc

0xe6f5,	// (0x00054c01) button_value_adjust_pane_g1

0xe6fe,	// (0x00054c0a) button_value_adjust_pane_g2

0x0001,

0xfaa8,	// (0x00055fb4) button_value_adjust_pane_g

0xe707,	// (0x00054c13) form_field_slider_wide_pane_vc_t1_ParamLimits

0xe707,	// (0x00054c13) form_field_slider_wide_pane_vc_t1

0xe71b,	// (0x00054c27) form_field_slider_wide_pane_vc_t2_ParamLimits

0xe71b,	// (0x00054c27) form_field_slider_wide_pane_vc_t2

0x0001,

0xfaad,	// (0x00055fb9) form_field_slider_wide_pane_vc_t_ParamLimits

0xfaad,	// (0x00055fb9) form_field_slider_wide_pane_vc_t

0xb72a,	// (0x00051c36) input_focus_pane_cp10_vc_ParamLimits

0xb72a,	// (0x00051c36) input_focus_pane_cp10_vc

0xe72d,	// (0x00054c39) slider_cont_pane_cp1_vc_ParamLimits

0xe72d,	// (0x00054c39) slider_cont_pane_cp1_vc

0xe550,	// (0x00054a5c) slider_form_pane_g1_cp2

0xe559,	// (0x00054a65) slider_form_pane_g2_cp2

0xe746,	// (0x00054c52) form_field_slider_pane_vc_t3

0xe754,	// (0x00054c60) form_field_slider_pane_vc_t4

0xe762,	// (0x00054c6e) slider_form_pane_vc_ParamLimits

0xe762,	// (0x00054c6e) slider_form_pane_vc

0xe76f,	// (0x00054c7b) form_field_slider_pane_vc_t1_ParamLimits

0xe76f,	// (0x00054c7b) form_field_slider_pane_vc_t1

0xe71b,	// (0x00054c27) form_field_slider_pane_vc_t2_ParamLimits

0xe71b,	// (0x00054c27) form_field_slider_pane_vc_t2

0x0001,

0xfabd,	// (0x00055fc9) form_field_slider_pane_vc_t_ParamLimits

0xfabd,	// (0x00055fc9) form_field_slider_pane_vc_t

0xb72a,	// (0x00051c36) input_focus_pane_cp9_vc_ParamLimits

0xb72a,	// (0x00051c36) input_focus_pane_cp9_vc

0xe78b,	// (0x00054c97) slider_cont_pane_vc_ParamLimits

0xe78b,	// (0x00054c97) slider_cont_pane_vc

0xe79d,	// (0x00054ca9) list_form_graphic_pane_cp_vc_ParamLimits

0xe79d,	// (0x00054ca9) list_form_graphic_pane_cp_vc

0xd01e,	// (0x0005352a) form_field_popup_wide_pane_vc_g1

0xe7b2,	// (0x00054cbe) form_field_popup_wide_pane_vc_t1_ParamLimits

0xe7b2,	// (0x00054cbe) form_field_popup_wide_pane_vc_t1

0xbe40,	// (0x0005234c) input_focus_pane_cp8_vc_ParamLimits

0xbe40,	// (0x0005234c) input_focus_pane_cp8_vc

0xe7c9,	// (0x00054cd5) list_form_wide_pane_vc_ParamLimits

0xe7c9,	// (0x00054cd5) list_form_wide_pane_vc

0xe7d5,	// (0x00054ce1) list_form_graphic_pane_vc_g1

0xe7dd,	// (0x00054ce9) list_form_graphic_pane_vc_t1_ParamLimits

0xe7dd,	// (0x00054ce9) list_form_graphic_pane_vc_t1

0xb738,	// (0x00051c44) list_highlight_pane_cp5_vc_ParamLimits

0xb738,	// (0x00051c44) list_highlight_pane_cp5_vc

0xe7f9,	// (0x00054d05) list_form_graphic_pane_vc_ParamLimits

0xe7f9,	// (0x00054d05) list_form_graphic_pane_vc

0xd01e,	// (0x0005352a) form_field_popup_pane_vc_g1

0xe80f,	// (0x00054d1b) form_field_popup_pane_vc_t1_ParamLimits

0xe80f,	// (0x00054d1b) form_field_popup_pane_vc_t1

0xbe40,	// (0x0005234c) input_focus_pane_cp7_vc_ParamLimits

0xbe40,	// (0x0005234c) input_focus_pane_cp7_vc

0xe826,	// (0x00054d32) list_form_pane_vc_ParamLimits

0xe826,	// (0x00054d32) list_form_pane_vc

0xe832,	// (0x00054d3e) data_form_pane_vc_t1_ParamLimits

0xe832,	// (0x00054d3e) data_form_pane_vc_t1

0xbea7,	// (0x000523b3) input_focus_pane_vc_g1

0xbeaf,	// (0x000523bb) input_focus_pane_vc_g2

0xbeb7,	// (0x000523c3) input_focus_pane_vc_g3

0xbebf,	// (0x000523cb) input_focus_pane_vc_g4

0xbec7,	// (0x000523d3) input_focus_pane_vc_g5

0xbecf,	// (0x000523db) input_focus_pane_vc_g6

0xbed7,	// (0x000523e3) input_focus_pane_vc_g7

0xbedf,	// (0x000523eb) input_focus_pane_vc_g8

0xbee7,	// (0x000523f3) input_focus_pane_vc_g9

0xb6d2,	// (0x00051bde) input_focus_pane_vc_g10

0x0009,

0xf6cb,	// (0x00055bd7) input_focus_pane_vc_g

0xd012,	// (0x0005351e) data_form_pane_vc_ParamLimits

0xd012,	// (0x0005351e) data_form_pane_vc

0xd01e,	// (0x0005352a) form_field_data_pane_vc_g1

0xe84d,	// (0x00054d59) form_field_data_pane_vc_t1_ParamLimits

0xe84d,	// (0x00054d59) form_field_data_pane_vc_t1

0xbe40,	// (0x0005234c) input_focus_pane_vc_ParamLimits

0xbe40,	// (0x0005234c) input_focus_pane_vc

0xe867,	// (0x00054d73) button_value_adjust_pane_cp3_vc

0xe86f,	// (0x00054d7b) button_value_adjust_pane_cp5_vc

0xe877,	// (0x00054d83) form_field_data_pane_vc_ParamLimits

0xe877,	// (0x00054d83) form_field_data_pane_vc

0xe88e,	// (0x00054d9a) form_field_data_pane_vc_cp2

0xe896,	// (0x00054da2) form_field_data_wide_pane_vc_ParamLimits

0xe896,	// (0x00054da2) form_field_data_wide_pane_vc

0xe8ac,	// (0x00054db8) form_field_data_wide_pane_vc_cp2

0xe8b4,	// (0x00054dc0) form_field_popup_pane_vc_ParamLimits

0xe8b4,	// (0x00054dc0) form_field_popup_pane_vc

0xe8cb,	// (0x00054dd7) form_field_popup_wide_pane_vc_ParamLimits

0xe8cb,	// (0x00054dd7) form_field_popup_wide_pane_vc

0xe8e1,	// (0x00054ded) form_field_slider_pane_vc_ParamLimits

0xe8e1,	// (0x00054ded) form_field_slider_pane_vc

0xe8f4,	// (0x00054e00) form_field_slider_wide_pane_vc_ParamLimits

0xe8f4,	// (0x00054e00) form_field_slider_wide_pane_vc

0xa0a9,	// (0x000505b5) grid_touch_1_pane_ParamLimits

0xa0a9,	// (0x000505b5) grid_touch_1_pane

0xa0bd,	// (0x000505c9) grid_touch_2_pane_ParamLimits

0xa0bd,	// (0x000505c9) grid_touch_2_pane

0xe907,	// (0x00054e13) touch_pane_g1_ParamLimits

0xe907,	// (0x00054e13) touch_pane_g1

0xe915,	// (0x00054e21) cell_app_pane_cp_wide_ParamLimits

0xe915,	// (0x00054e21) cell_app_pane_cp_wide

0xe926,	// (0x00054e32) grid_popup_fast_wide_pane_ParamLimits

0xe926,	// (0x00054e32) grid_popup_fast_wide_pane

0xe93a,	// (0x00054e46) scroll_pane_cp19_ParamLimits

0xe93a,	// (0x00054e46) scroll_pane_cp19

0xb6dc,	// (0x00051be8) bg_popup_window_pane_cp20

0xe94e,	// (0x00054e5a) listscroll_popup_fast_wide_pane

0xdb8a,	// (0x00054096) grid_indicator_nsta_pane

0xe956,	// (0x00054e62) clock_nsta_pane_g1

0xe95f,	// (0x00054e6b) clock_nsta_pane_t1

0xa0e7,	// (0x000505f3) cell_indicator_nsta_pane_ParamLimits

0xa0e7,	// (0x000505f3) cell_indicator_nsta_pane

0xe907,	// (0x00054e13) cell_indicator_nsta_pane_g1

0xa100,	// (0x0005060c) cell_indicator_nsta_pane_g2

0x0001,

0xfac7,	// (0x00055fd3) cell_indicator_nsta_pane_g

0xe97b,	// (0x00054e87) clock_nsta_pane_cp

0xe983,	// (0x00054e8f) indicator_nsta_pane_cp

0xe98b,	// (0x00054e97) nsta_clock_indic_pane_g1

0xb774,	// (0x00051c80) grid_indicator_pane

0xc3e5,	// (0x000528f1) scroll_pane_cp29

0x1116,	// (0x00047622) indicator_nsta_pane_cp2_ParamLimits

0x1116,	// (0x00047622) indicator_nsta_pane_cp2

0xb738,	// (0x00051c44) main_apps_wheel_pane

0xd13a,	// (0x00053646) form_midp_field_text_pane_ParamLimits

0xd26d,	// (0x00053779) scroll_bar_cp050_ParamLimits

0xe9c3,	// (0x00054ecf) cell_indicator_pane_ParamLimits

0xe9c3,	// (0x00054ecf) cell_indicator_pane

0xe9da,	// (0x00054ee6) cell_indicator_pane_g1

0xa116,	// (0x00050622) grid_wheel_folder_pane_ParamLimits

0xa116,	// (0x00050622) grid_wheel_folder_pane

0xa124,	// (0x00050630) list_wheel_apps_pane_ParamLimits

0xa124,	// (0x00050630) list_wheel_apps_pane

0xa132,	// (0x0005063e) main_apps_wheel_pane_g1_ParamLimits

0xa132,	// (0x0005063e) main_apps_wheel_pane_g1

0xa13e,	// (0x0005064a) main_apps_wheel_pane_g2_ParamLimits

0xa13e,	// (0x0005064a) main_apps_wheel_pane_g2

0x0001,

0x0008,	// (0x00046514) main_apps_wheel_pane_g_ParamLimits

0x0008,	// (0x00046514) main_apps_wheel_pane_g

0xa14c,	// (0x00050658) main_apps_wheel_pane_t1_ParamLimits

0xa14c,	// (0x00050658) main_apps_wheel_pane_t1

0xa160,	// (0x0005066c) list_wheel_apps_pane_g1

0xa168,	// (0x00050674) list_wheel_apps_pane_g2

0xa170,	// (0x0005067c) list_wheel_apps_pane_g3

0xa178,	// (0x00050684) list_wheel_apps_pane_g4

0xa182,	// (0x0005068e) list_wheel_apps_pane_g5

0x0004,

0x000d,	// (0x00046519) list_wheel_apps_pane_g

0xc822,	// (0x00052d2e) navi_icon_text_pane

0x9755,	// (0x0004fc61) aid_fill_nsta

0xa199,	// (0x000506a5) navi_icon_text_pane_g1

0xa1a5,	// (0x000506b1) navi_icon_text_pane_t1

0x8f88,	// (0x0004f494) list_set_graphic_pane_t1_ParamLimits

0x8f88,	// (0x0004f494) list_set_graphic_pane_t1

0xd97b,	// (0x00053e87) popup_midp_note_alarm_window_t6_ParamLimits

0xd97b,	// (0x00053e87) popup_midp_note_alarm_window_t6

0xd98d,	// (0x00053e99) popup_midp_note_alarm_window_t7_ParamLimits

0xd98d,	// (0x00053e99) popup_midp_note_alarm_window_t7

0xd99f,	// (0x00053eab) popup_midp_note_alarm_window_t8_ParamLimits

0xd99f,	// (0x00053eab) popup_midp_note_alarm_window_t8

0xd9b1,	// (0x00053ebd) popup_midp_note_alarm_window_t9_ParamLimits

0xd9b1,	// (0x00053ebd) popup_midp_note_alarm_window_t9

0xd9c3,	// (0x00053ecf) popup_midp_note_alarm_window_t10_ParamLimits

0xd9c3,	// (0x00053ecf) popup_midp_note_alarm_window_t10

0xd9d5,	// (0x00053ee1) popup_midp_note_alarm_window_t11_ParamLimits

0xd9d5,	// (0x00053ee1) popup_midp_note_alarm_window_t11

0xd9e7,	// (0x00053ef3) scroll_pane_cp17_ParamLimits

0xd9e7,	// (0x00053ef3) scroll_pane_cp17

0x1571,	// (0x00047a7d) volume_small_pane_cp_g1

0x1866,	// (0x00047d72) volume_small_pane_cp_g2

0x186f,	// (0x00047d7b) volume_small_pane_cp_g3

0x1878,	// (0x00047d84) volume_small_pane_cp_g4

0x1881,	// (0x00047d8d) volume_small_pane_cp_g5

0x188a,	// (0x00047d96) volume_small_pane_cp_g6

0x1893,	// (0x00047d9f) volume_small_pane_cp_g7

0x189c,	// (0x00047da8) volume_small_pane_cp_g8

0x18a5,	// (0x00047db1) volume_small_pane_cp_g9

0x18ae,	// (0x00047dba) volume_small_pane_cp_g10

0xc9cc,	// (0x00052ed8) midp_ticker_pane_g1_ParamLimits

0xc9d8,	// (0x00052ee4) midp_ticker_pane_g2_ParamLimits

0xf793,	// (0x00055c9f) midp_ticker_pane_g_ParamLimits

0x9048,	// (0x0004f554) midp_ticker_pane_t1_ParamLimits

0x9775,	// (0x0004fc81) aid_fill_nsta_2

0xd259,	// (0x00053765) list_form2_midp_pane

0xe0c2,	// (0x000545ce) midp_editing_number_pane_ParamLimits

0xe0d1,	// (0x000545dd) midp_ticker_pane_ParamLimits

0xe9e4,	// (0x00054ef0) form2_midp_field_pane

0xe9ec,	// (0x00054ef8) scroll_pane_cp51

0xea0c,	// (0x00054f18) form2_midp_button_pane_ParamLimits

0xea0c,	// (0x00054f18) form2_midp_button_pane

0xea1e,	// (0x00054f2a) form2_midp_content_pane_ParamLimits

0xea1e,	// (0x00054f2a) form2_midp_content_pane

0xea38,	// (0x00054f44) form2_midp_field_choice_group_pane

0xea40,	// (0x00054f4c) form2_midp_field_pane_g1

0xea48,	// (0x00054f54) form2_midp_field_pane_g2

0xea50,	// (0x00054f5c) form2_midp_field_pane_g3

0xea58,	// (0x00054f64) form2_midp_field_pane_g4

0x0003,

0x0032,	// (0x0004653e) form2_midp_field_pane_g

0xea60,	// (0x00054f6c) form2_midp_gauge_slider_pane

0xea68,	// (0x00054f74) form2_midp_gauge_wait_pane

0xea70,	// (0x00054f7c) form2_midp_image_pane_ParamLimits

0xea70,	// (0x00054f7c) form2_midp_image_pane

0xea8b,	// (0x00054f97) form2_midp_label_pane_ParamLimits

0xea8b,	// (0x00054f97) form2_midp_label_pane

0xa1d3,	// (0x000506df) form2_midp_label_pane_cp_ParamLimits

0xa1d3,	// (0x000506df) form2_midp_label_pane_cp

0xeaa4,	// (0x00054fb0) form2_midp_string_pane_ParamLimits

0xeaa4,	// (0x00054fb0) form2_midp_string_pane

0x8a62,	// (0x0004ef6e) form2_midp_text_pane_ParamLimits

0x8a62,	// (0x0004ef6e) form2_midp_text_pane

0xeab6,	// (0x00054fc2) form2_midp_time_pane

0xeac6,	// (0x00054fd2) input_focus_pane_cp51_ParamLimits

0xeac6,	// (0x00054fd2) input_focus_pane_cp51

0xeade,	// (0x00054fea) form2_midp_label_pane_t1_ParamLimits

0xeade,	// (0x00054fea) form2_midp_label_pane_t1

0x8a81,	// (0x0004ef8d) form2_mdip_text_pane_t1_ParamLimits

0x8a81,	// (0x0004ef8d) form2_mdip_text_pane_t1

0x35cd,	// (0x00049ad9) form2_midp_time_pane_t1

0xeb27,	// (0x00055033) form2_midp_gauge_slider_pane_t1

0xa1f4,	// (0x00050700) form2_midp_gauge_slider_pane_t2

0xa206,	// (0x00050712) form2_midp_gauge_slider_pane_t3

0x0002,

0x003b,	// (0x00046547) form2_midp_gauge_slider_pane_t

0xeb39,	// (0x00055045) form2_midp_slider_pane

0xeb45,	// (0x00055051) form2_midp_gauge_wait_pane_t1

0xeb53,	// (0x0005505f) form2_midp_wait_pane_ParamLimits

0xeb53,	// (0x0005505f) form2_midp_wait_pane

0xa218,	// (0x00050724) list_single_2graphic_pane_cp4_ParamLimits

0xa218,	// (0x00050724) list_single_2graphic_pane_cp4

0x9b86,	// (0x00050092) list_single_midp_graphic_pane_cp_ParamLimits

0x9b86,	// (0x00050092) list_single_midp_graphic_pane_cp

0xb6dc,	// (0x00051be8) list_highlight_pane_cp20

0xeb7e,	// (0x0005508a) list_single_2graphic_pane_g1_cp4

0xeb86,	// (0x00055092) list_single_2graphic_pane_g2_cp4

0xeb8e,	// (0x0005509a) list_single_2graphic_pane_t1_cp4

0xb738,	// (0x00051c44) list_highlight_pane_cp21

0xeb9d,	// (0x000550a9) list_single_midp_graphic_pane_g4_cp

0xebac,	// (0x000550b8) list_single_midp_graphic_pane_t1_cp

0xa22d,	// (0x00050739) form2_mdip_string_pane_t1_ParamLimits

0xa22d,	// (0x00050739) form2_mdip_string_pane_t1

0xb6dc,	// (0x00051be8) bg_wml_button_pane_cp2

0xb6d2,	// (0x00051bde) form2_midp_image_pane_g1

0x28f1,	// (0x00048dfd) list_double_large_graphic_pane_g5_ParamLimits

0x28f1,	// (0x00048dfd) list_double_large_graphic_pane_g5

0x8fa0,	// (0x0004f4ac) midp_form_pane_ParamLimits

0xb738,	// (0x00051c44) main_apps_wheel_pane_ParamLimits

0x94b1,	// (0x0004f9bd) popup_preview_window_ParamLimits

0x94b1,	// (0x0004f9bd) popup_preview_window

0xccc3,	// (0x000531cf) popup_touch_info_window_ParamLimits

0xccc3,	// (0x000531cf) popup_touch_info_window

0xcce1,	// (0x000531ed) popup_touch_menu_window_ParamLimits

0xcce1,	// (0x000531ed) popup_touch_menu_window

0xb6c8,	// (0x00051bd4) bg_popup_sub_pane_cp6

0xebc1,	// (0x000550cd) list_touch_menu_pane

0xebc9,	// (0x000550d5) list_single_touch_menu_pane_ParamLimits

0xebc9,	// (0x000550d5) list_single_touch_menu_pane

0xebe0,	// (0x000550ec) list_single_touch_menu_pane_t1

0xb738,	// (0x00051c44) bg_popup_sub_pane_cp7_ParamLimits

0xb738,	// (0x00051c44) bg_popup_sub_pane_cp7

0xebee,	// (0x000550fa) heading_sub_pane

0xebf6,	// (0x00055102) list_touch_info_pane_ParamLimits

0xebf6,	// (0x00055102) list_touch_info_pane

0xec05,	// (0x00055111) list_single_touch_info_pane_ParamLimits

0xec05,	// (0x00055111) list_single_touch_info_pane

0xec17,	// (0x00055123) list_single_touch_info_pane_t1

0xec25,	// (0x00055131) list_single_touch_info_pane_t2

0x0001,

0x0049,	// (0x00046555) list_single_touch_info_pane_t

0xc9a2,	// (0x00052eae) bg_popup_heading_pane_cp

0xec33,	// (0x0005513f) heading_sub_pane_t1

0xcfd8,	// (0x000534e4) bg_popup_preview_window_pane_cp_ParamLimits

0xcfd8,	// (0x000534e4) bg_popup_preview_window_pane_cp

0xebee,	// (0x000550fa) heading_preview_pane

0xebf6,	// (0x00055102) list_preview_pane_ParamLimits

0xebf6,	// (0x00055102) list_preview_pane

0xec41,	// (0x0005514d) popup_preview_window_g1

0xec05,	// (0x00055111) list_single_preview_pane_ParamLimits

0xec05,	// (0x00055111) list_single_preview_pane

0xec49,	// (0x00055155) list_single_preview_pane_g1

0xec51,	// (0x0005515d) list_single_preview_pane_t1

0xec17,	// (0x00055123) list_single_preview_pane_t2

0x0001,

0x004e,	// (0x0004655a) list_single_preview_pane_t

0xec5f,	// (0x0005516b) bg_popup_heading_pane_cp2_ParamLimits

0xec5f,	// (0x0005516b) bg_popup_heading_pane_cp2

0xec75,	// (0x00055181) heading_preview_pane_g1

0xec7d,	// (0x00055189) heading_preview_pane_t1_ParamLimits

0xec7d,	// (0x00055189) heading_preview_pane_t1

0xb78b,	// (0x00051c97) soft_indicator_pane_t1_ParamLimits

0xbdb3,	// (0x000522bf) scroll_pane_ParamLimits

0xc2de,	// (0x000527ea) scroll_sc2_left_pane

0xc2e7,	// (0x000527f3) scroll_sc2_right_pane

0xc306,	// (0x00052812) scroll_bg_pane_g1_ParamLimits

0xc31b,	// (0x00052827) scroll_bg_pane_g2_ParamLimits

0xc333,	// (0x0005283f) scroll_bg_pane_g3_ParamLimits

0xf722,	// (0x00055c2e) scroll_bg_pane_g_ParamLimits

0xc306,	// (0x00052812) scroll_handle_pane_g1_ParamLimits

0xc355,	// (0x00052861) scroll_handle_pane_g2_ParamLimits

0xc333,	// (0x0005283f) scroll_handle_pane_g3_ParamLimits

0xf729,	// (0x00055c35) scroll_handle_pane_g_ParamLimits

0xcc04,	// (0x00053110) popup_choice_list_window_ParamLimits

0xcc04,	// (0x00053110) popup_choice_list_window

0xce32,	// (0x0005333e) choice_list_pane

0xceb4,	// (0x000533c0) cell_toolbar_pane_t1

0xcedc,	// (0x000533e8) toolbar_button_pane_ParamLimits

0xde25,	// (0x00054331) ai_gene_pane_1_t2_ParamLimits

0xde25,	// (0x00054331) ai_gene_pane_1_t2

0x0001,

0xf93a,	// (0x00055e46) ai_gene_pane_1_t_ParamLimits

0xf93a,	// (0x00055e46) ai_gene_pane_1_t

0xec9a,	// (0x000551a6) scroll_sc2_left_pane_g1

0xec9a,	// (0x000551a6) scroll_sc2_right_pane_g1

0xbf98,	// (0x000524a4) bg_popup_sub_pane_cp10

0xeca4,	// (0x000551b0) list_choice_list_pane

0xecbb,	// (0x000551c7) list_single_choice_list_pane_ParamLimits

0xecbb,	// (0x000551c7) list_single_choice_list_pane

0xeccf,	// (0x000551db) list_single_choice_list_pane_g1

0xecd7,	// (0x000551e3) list_single_choice_list_pane_t1_ParamLimits

0xecd7,	// (0x000551e3) list_single_choice_list_pane_t1

0xecec,	// (0x000551f8) choice_list_pane_g1

0xecf4,	// (0x00055200) choice_list_pane_t1

0xb6c8,	// (0x00051bd4) input_focus_pane_cp11

0xc241,	// (0x0005274d) title_pane_stacon_g2_ParamLimits

0xc241,	// (0x0005274d) title_pane_stacon_g2

0x0002,

0xf708,	// (0x00055c14) title_pane_stacon_g_ParamLimits

0xf708,	// (0x00055c14) title_pane_stacon_g

0xc9a2,	// (0x00052eae) cursor_press_pane

0x917c,	// (0x0004f688) popup_fep_hwr_window_ParamLimits

0x917c,	// (0x0004f688) popup_fep_hwr_window

0xcc5a,	// (0x00053166) popup_fep_vkb_window_ParamLimits

0xcc5a,	// (0x00053166) popup_fep_vkb_window

0xed02,	// (0x0005520e) cursor_press_pane_g1

0x0002,

0x0077,	// (0x00046583) fep_vkb_side_pane_g_ParamLimits

0x18f0,	// (0x00047dfc) fep_hwr_candidate_pane_ParamLimits

0x18f0,	// (0x00047dfc) fep_hwr_candidate_pane

0x191a,	// (0x00047e26) fep_hwr_side_pane_ParamLimits

0x191a,	// (0x00047e26) fep_hwr_side_pane

0x193a,	// (0x00047e46) fep_hwr_top_pane_ParamLimits

0x193a,	// (0x00047e46) fep_hwr_top_pane

0x1952,	// (0x00047e5e) fep_hwr_write_pane_ParamLimits

0x1952,	// (0x00047e5e) fep_hwr_write_pane

0x0077,	// (0x00046583) fep_vkb_side_pane_g

0xed0a,	// (0x00055216) fep_hwr_top_pane_g1

0xed1c,	// (0x00055228) fep_hwr_top_pane_g2

0x198c,	// (0x00047e98) fep_hwr_top_pane_g3

0x0002,

0xfae6,	// (0x00055ff2) fep_hwr_top_pane_g

0x19a1,	// (0x00047ead) fep_hwr_top_text_pane

0xc4ac,	// (0x000529b8) fep_hwr_top_text_pane_g1

0xed52,	// (0x0005525e) fep_hwr_top_text_pane_t1

0x1a97,	// (0x00047fa3) fep_hwr_candidate_pane_g1

0xee7f,	// (0x0005538b) fep_vkb_keypad_pane_g3_ParamLimits

0xee7f,	// (0x0005538b) fep_vkb_keypad_pane_g3

0xeea7,	// (0x000553b3) fep_vkb_keypad_pane_g4_ParamLimits

0xeea7,	// (0x000553b3) fep_vkb_keypad_pane_g4

0xef16,	// (0x00055422) fep_vkb_bottom_pane_g2_ParamLimits

0xef16,	// (0x00055422) fep_vkb_bottom_pane_g2

0x0001,

0xfb01,	// (0x0005600d) fep_vkb_bottom_pane_g_ParamLimits

0xfb01,	// (0x0005600d) fep_vkb_bottom_pane_g

0xec9a,	// (0x000551a6) cell_vkb_side_pane_g2

0x0001,

0x0083,	// (0x0004658f) cell_vkb_side_pane_g

0xef5a,	// (0x00055466) cell_vkb_side_pane_t1

0xef68,	// (0x00055474) cell_vkb_side_pane_t1_copy1

0xec9a,	// (0x000551a6) bg_fep_vkb_candidate_pane_g2

0xf03e,	// (0x0005554a) cell_vkb_candidate_pane_ParamLimits

0xed60,	// (0x0005526c) aid_size_cell_vkb_ParamLimits

0xed60,	// (0x0005526c) aid_size_cell_vkb

0xf03e,	// (0x0005554a) cell_vkb_candidate_pane

0x1abe,	// (0x00047fca) bg_popup_fep_shadow_pane_g1

0xa2bb,	// (0x000507c7) fep_vkb_bottom_pane_ParamLimits

0xa2bb,	// (0x000507c7) fep_vkb_bottom_pane

0xeded,	// (0x000552f9) fep_vkb_candidate_pane_ParamLimits

0xeded,	// (0x000552f9) fep_vkb_candidate_pane

0xa2e0,	// (0x000507ec) fep_vkb_keypad_pane_ParamLimits

0xa2e0,	// (0x000507ec) fep_vkb_keypad_pane

0xa31c,	// (0x00050828) fep_vkb_side_pane_ParamLimits

0xa31c,	// (0x00050828) fep_vkb_side_pane

0xa358,	// (0x00050864) fep_vkb_top_pane_ParamLimits

0xa358,	// (0x00050864) fep_vkb_top_pane

0xee13,	// (0x0005531f) fep_vkb_top_pane_g1_ParamLimits

0xee13,	// (0x0005531f) fep_vkb_top_pane_g1

0xee22,	// (0x0005532e) fep_vkb_top_pane_g2_ParamLimits

0xee22,	// (0x0005532e) fep_vkb_top_pane_g2

0xee31,	// (0x0005533d) fep_vkb_top_pane_g3_ParamLimits

0xee31,	// (0x0005533d) fep_vkb_top_pane_g3

0x0003,

0x006e,	// (0x0004657a) fep_vkb_top_pane_g_ParamLimits

0x006e,	// (0x0004657a) fep_vkb_top_pane_g

0xee4f,	// (0x0005535b) fep_vkb_top_text_pane_ParamLimits

0xee4f,	// (0x0005535b) fep_vkb_top_text_pane

0xa394,	// (0x000508a0) fep_vkb_side_pane_g1_ParamLimits

0xa394,	// (0x000508a0) fep_vkb_side_pane_g1

0xee6e,	// (0x0005537a) grid_vkb_side_pane_ParamLimits

0xee6e,	// (0x0005537a) grid_vkb_side_pane

0x1ac6,	// (0x00047fd2) bg_popup_fep_shadow_pane_g2

0x1acf,	// (0x00047fdb) bg_popup_fep_shadow_pane_g3

0x1ad7,	// (0x00047fe3) bg_popup_fep_shadow_pane_g4

0x1ae0,	// (0x00047fec) bg_popup_fep_shadow_pane_g5

0x1aea,	// (0x00047ff6) bg_popup_fep_shadow_pane_g6

0x1af2,	// (0x00047ffe) bg_popup_fep_shadow_pane_g7

0xbebf,	// (0x000523cb) bg_popup_fep_shadow_pane_g8

0xeec5,	// (0x000553d1) grid_vkb_keypad_number_pane_ParamLimits

0xeec5,	// (0x000553d1) grid_vkb_keypad_number_pane

0xeed5,	// (0x000553e1) grid_vkb_keypad_pane_ParamLimits

0xeed5,	// (0x000553e1) grid_vkb_keypad_pane

0xeefb,	// (0x00055407) fep_vkb_bottom_pane_g1_ParamLimits

0xeefb,	// (0x00055407) fep_vkb_bottom_pane_g1

0xef24,	// (0x00055430) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xef24,	// (0x00055430) grid_vkb_keypad_bottom_left_pane

0xef39,	// (0x00055445) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xef39,	// (0x00055445) grid_vkb_keypad_bottom_right_pane

0xef4e,	// (0x0005545a) fep_vkb_top_text_pane_g1

0xa3db,	// (0x000508e7) fep_vkb_top_text_pane_t1

0xa3ed,	// (0x000508f9) cell_vkb_side_pane_ParamLimits

0xa3ed,	// (0x000508f9) cell_vkb_side_pane

0xec9a,	// (0x000551a6) cell_vkb_side_pane_g1

0xef76,	// (0x00055482) cell_vkb_keypad_pane_ParamLimits

0xef76,	// (0x00055482) cell_vkb_keypad_pane

0xefeb,	// (0x000554f7) cell_vkb_keypad_pane_g1

0x0008,

0xfb14,	// (0x00056020) bg_popup_fep_shadow_pane_g

0x1b04,	// (0x00048010) cell_hwr_side_pane_g1

0x1b04,	// (0x00048010) cell_hwr_side_pane_g2

0xeff5,	// (0x00055501) cell_vkb_keypad_pane_t1

0xa403,	// (0x0005090f) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xa403,	// (0x0005090f) cell_vkb_keypad_bottom_left_pane

0xa418,	// (0x00050924) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xa418,	// (0x00050924) cell_vkb_keypad_bottom_right_pane

0xec9a,	// (0x000551a6) cell_vkb_keypad_bottom_left_pane_g1

0xec9a,	// (0x000551a6) cell_vkb_keypad_bottom_right_pane_g1

0xf003,	// (0x0005550f) cell_vkb_keypad_number_pane_ParamLimits

0xf003,	// (0x0005550f) cell_vkb_keypad_number_pane

0xf022,	// (0x0005552e) cell_vkb_keypad_number_pane_g1

0xf02c,	// (0x00055538) cell_vkb_keypad_number_pane_g2

0xf035,	// (0x00055541) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb06,	// (0x00056012) cell_vkb_keypad_number_pane_g

0xeff5,	// (0x00055501) cell_vkb_keypad_number_pane_t1

0xf059,	// (0x00055565) fep_vkb_candidate_pane_g1

0x0001,

0xfb27,	// (0x00056033) cell_hwr_side_pane_g

0xf072,	// (0x0005557e) cell_hwr_side_pane_t1

0x1b0e,	// (0x0004801a) cell_hwr_side_pane_t1_copy1

0x1b1c,	// (0x00048028) cell_hwr_candidate_pane_g1

0x1b4b,	// (0x00048057) cell_hwr_candidate_pane_t1

0xec9a,	// (0x000551a6) cell_vkb_candidate_pane_g2

0xf0f8,	// (0x00055604) cell_vkb_candidate_pane_t1

0x18b7,	// (0x00047dc3) bg_popup_fep_shadow_pane_ParamLimits

0x18b7,	// (0x00047dc3) bg_popup_fep_shadow_pane

0x196c,	// (0x00047e78) bg_fep_hwr_top_pane_g4

0xed2e,	// (0x0005523a) bg_hwr_side_pane_g1_ParamLimits

0xed2e,	// (0x0005523a) bg_hwr_side_pane_g1

0x826e,	// (0x0004e77a) cell_hwr_side_pane_ParamLimits

0x826e,	// (0x0004e77a) cell_hwr_side_pane

0x1a18,	// (0x00047f24) fep_hwr_write_pane_g1_ParamLimits

0x1a18,	// (0x00047f24) fep_hwr_write_pane_g1

0x1a25,	// (0x00047f31) fep_hwr_write_pane_g2_ParamLimits

0x1a25,	// (0x00047f31) fep_hwr_write_pane_g2

0x1a32,	// (0x00047f3e) fep_hwr_write_pane_g3_ParamLimits

0x1a32,	// (0x00047f3e) fep_hwr_write_pane_g3

0x828e,	// (0x0004e79a) fep_hwr_write_pane_g4_ParamLimits

0x828e,	// (0x0004e79a) fep_hwr_write_pane_g4

0x0005,

0xfaed,	// (0x00055ff9) fep_hwr_write_pane_g_ParamLimits

0xfaed,	// (0x00055ff9) fep_hwr_write_pane_g

0x196c,	// (0x00047e78) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x196c,	// (0x00047e78) bg_fep_hwr_candidate_pane_g2

0x1a55,	// (0x00047f61) cell_hwr_candidate_pane_ParamLimits

0x1a55,	// (0x00047f61) cell_hwr_candidate_pane

0x1a97,	// (0x00047fa3) fep_hwr_candidate_pane_g1_ParamLimits

0xed8e,	// (0x0005529a) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xed8e,	// (0x0005529a) bg_popup_fep_shadow_pane_cp2

0xee41,	// (0x0005534d) fep_vkb_top_pane_g4_ParamLimits

0xee41,	// (0x0005534d) fep_vkb_top_pane_g4

0xee60,	// (0x0005536c) fep_vkb_side_pane_g2_ParamLimits

0xee60,	// (0x0005536c) fep_vkb_side_pane_g2

0x7ccf,	// (0x0004e1db) list_setting_pane_t4_ParamLimits

0x7ccf,	// (0x0004e1db) list_setting_pane_t4

0x7d69,	// (0x0004e275) list_setting_number_pane_t5_ParamLimits

0x7d69,	// (0x0004e275) list_setting_number_pane_t5

0x8eb9,	// (0x0004f3c5) list_double_heading_pane_cp2_ParamLimits

0x8eb9,	// (0x0004f3c5) list_double_heading_pane_cp2

0xbe5a,	// (0x00052366) list_double_heading_pane_g1_cp2_ParamLimits

0xbe5a,	// (0x00052366) list_double_heading_pane_g1_cp2

0xbe66,	// (0x00052372) list_double_heading_pane_g2_cp2_ParamLimits

0xbe66,	// (0x00052372) list_double_heading_pane_g2_cp2

0xf106,	// (0x00055612) list_double_heading_pane_t1_cp2_ParamLimits

0xf106,	// (0x00055612) list_double_heading_pane_t1_cp2

0xf11c,	// (0x00055628) list_double_heading_pane_t2_cp2_ParamLimits

0xf11c,	// (0x00055628) list_double_heading_pane_t2_cp2

0xb6c0,	// (0x00051bcc) aid_value_unit2

0x0730,	// (0x00046c3c) popup_preview_fixed_window

0xb86b,	// (0x00051d77) bg_popup_preview_window_pane_cp02

0xf12e,	// (0x0005563a) list_preview_fixed_pane

0xf174,	// (0x00055680) list_empty_pane_fp_ParamLimits

0xf174,	// (0x00055680) list_empty_pane_fp

0xf174,	// (0x00055680) list_single_cale_day_pane_fp_ParamLimits

0xf174,	// (0x00055680) list_single_cale_day_pane_fp

0xf174,	// (0x00055680) list_single_graphic_heading_pane_fp_ParamLimits

0xf174,	// (0x00055680) list_single_graphic_heading_pane_fp

0xf174,	// (0x00055680) list_single_graphic_pane_fp_ParamLimits

0xf174,	// (0x00055680) list_single_graphic_pane_fp

0xf174,	// (0x00055680) list_single_heading_pane_fp_ParamLimits

0xf174,	// (0x00055680) list_single_heading_pane_fp

0xf174,	// (0x00055680) list_single_pane_fp_ParamLimits

0xf174,	// (0x00055680) list_single_pane_fp

0xf189,	// (0x00055695) list_single_pane_fp_g1_ParamLimits

0xf189,	// (0x00055695) list_single_pane_fp_g1

0xd658,	// (0x00053b64) list_single_pane_fp_g2_ParamLimits

0xd658,	// (0x00053b64) list_single_pane_fp_g2

0xf195,	// (0x000556a1) list_single_pane_fp_g3_ParamLimits

0xf195,	// (0x000556a1) list_single_pane_fp_g3

0xf1a9,	// (0x000556b5) list_single_pane_fp_g4_ParamLimits

0xf1a9,	// (0x000556b5) list_single_pane_fp_g4

0x0003,

0xfb33,	// (0x0005603f) list_single_pane_fp_g_ParamLimits

0xfb33,	// (0x0005603f) list_single_pane_fp_g

0x35e0,	// (0x00049aec) list_single_pane_fp_t1_ParamLimits

0x35e0,	// (0x00049aec) list_single_pane_fp_t1

0x35f7,	// (0x00049b03) list_single_graphic_pane_fp_g1_ParamLimits

0x35f7,	// (0x00049b03) list_single_graphic_pane_fp_g1

0xf189,	// (0x00055695) list_single_graphic_pane_fp_g2_ParamLimits

0xf189,	// (0x00055695) list_single_graphic_pane_fp_g2

0xd658,	// (0x00053b64) list_single_graphic_pane_fp_g3_ParamLimits

0xd658,	// (0x00053b64) list_single_graphic_pane_fp_g3

0xf195,	// (0x000556a1) list_single_graphic_pane_fp_g4_ParamLimits

0xf195,	// (0x000556a1) list_single_graphic_pane_fp_g4

0xf1a9,	// (0x000556b5) list_single_graphic_pane_fp_g5_ParamLimits

0xf1a9,	// (0x000556b5) list_single_graphic_pane_fp_g5

0x0004,

0xfb3c,	// (0x00056048) list_single_graphic_pane_fp_g_ParamLimits

0xfb3c,	// (0x00056048) list_single_graphic_pane_fp_g

0x3603,	// (0x00049b0f) list_single_graphic_pane_fp_t1_ParamLimits

0x3603,	// (0x00049b0f) list_single_graphic_pane_fp_t1

0x35f7,	// (0x00049b03) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x35f7,	// (0x00049b03) list_single_graphic_heading_pane_fp_g1

0xf189,	// (0x00055695) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xf189,	// (0x00055695) list_single_graphic_heading_pane_fp_g2

0xd658,	// (0x00053b64) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xd658,	// (0x00053b64) list_single_graphic_heading_pane_fp_g3

0xf195,	// (0x000556a1) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xf195,	// (0x000556a1) list_single_graphic_heading_pane_fp_g4

0xf1a9,	// (0x000556b5) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xf1a9,	// (0x000556b5) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb3c,	// (0x00056048) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb3c,	// (0x00056048) list_single_graphic_heading_pane_fp_g

0x3619,	// (0x00049b25) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x3619,	// (0x00049b25) list_single_graphic_heading_pane_fp_t1

0x362f,	// (0x00049b3b) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x362f,	// (0x00049b3b) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb47,	// (0x00056053) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb47,	// (0x00056053) list_single_graphic_heading_pane_fp_t

0x3641,	// (0x00049b4d) list_single_cale_day_pane_fp_g1_ParamLimits

0x3641,	// (0x00049b4d) list_single_cale_day_pane_fp_g1

0xf1b5,	// (0x000556c1) list_single_cale_day_pane_fp_g2_ParamLimits

0xf1b5,	// (0x000556c1) list_single_cale_day_pane_fp_g2

0x3daa,	// (0x0004a2b6) list_single_cale_day_pane_fp_g3_ParamLimits

0x3daa,	// (0x0004a2b6) list_single_cale_day_pane_fp_g3

0x3dd2,	// (0x0004a2de) list_single_cale_day_pane_fp_g4_ParamLimits

0x3dd2,	// (0x0004a2de) list_single_cale_day_pane_fp_g4

0x3df6,	// (0x0004a302) list_single_cale_day_pane_fp_g5_ParamLimits

0x3df6,	// (0x0004a302) list_single_cale_day_pane_fp_g5

0x0004,

0xfb4c,	// (0x00056058) list_single_cale_day_pane_fp_g_ParamLimits

0xfb4c,	// (0x00056058) list_single_cale_day_pane_fp_g

0x3679,	// (0x00049b85) list_single_cale_day_pane_fp_t1_ParamLimits

0x3679,	// (0x00049b85) list_single_cale_day_pane_fp_t1

0x369f,	// (0x00049bab) list_single_cale_day_pane_fp_t2_ParamLimits

0x369f,	// (0x00049bab) list_single_cale_day_pane_fp_t2

0x36b8,	// (0x00049bc4) list_single_cale_day_pane_fp_t3_ParamLimits

0x36b8,	// (0x00049bc4) list_single_cale_day_pane_fp_t3

0x0002,

0xfb57,	// (0x00056063) list_single_cale_day_pane_fp_t_ParamLimits

0xfb57,	// (0x00056063) list_single_cale_day_pane_fp_t

0xf189,	// (0x00055695) list_empty_pane_fp_g1_ParamLimits

0xf189,	// (0x00055695) list_empty_pane_fp_g1

0x36d1,	// (0x00049bdd) list_empty_pane_fp_t1

0x36df,	// (0x00049beb) list_empty_pane_fp_t2

0x0001,

0xfb5e,	// (0x0005606a) list_empty_pane_fp_t

0xf189,	// (0x00055695) list_single_heading_pane_fp_g1_ParamLimits

0xf189,	// (0x00055695) list_single_heading_pane_fp_g1

0xd658,	// (0x00053b64) list_single_heading_pane_fp_g2_ParamLimits

0xd658,	// (0x00053b64) list_single_heading_pane_fp_g2

0xf195,	// (0x000556a1) list_single_heading_pane_fp_g3_ParamLimits

0xf195,	// (0x000556a1) list_single_heading_pane_fp_g3

0x0002,

0xfb63,	// (0x0005606f) list_single_heading_pane_fp_g_ParamLimits

0xfb63,	// (0x0005606f) list_single_heading_pane_fp_g

0x36ed,	// (0x00049bf9) list_single_heading_pane_fp_t1_ParamLimits

0x36ed,	// (0x00049bf9) list_single_heading_pane_fp_t1

0x36ff,	// (0x00049c0b) list_single_heading_pane_fp_t2_ParamLimits

0x36ff,	// (0x00049c0b) list_single_heading_pane_fp_t2

0x0001,

0xfb6a,	// (0x00056076) list_single_heading_pane_fp_t_ParamLimits

0xfb6a,	// (0x00056076) list_single_heading_pane_fp_t

0xbfa4,	// (0x000524b0) aid_size_cell_fast

0xb84e,	// (0x00051d5a) soft_indicator_pane_cp1_t1

0xbfe1,	// (0x000524ed) cell_app_pane_cp2_ParamLimits

0xbfe1,	// (0x000524ed) cell_app_pane_cp2

0x18d9,	// (0x00047de5) fep_hwr_candidate_drop_down_list_pane

0x1ab1,	// (0x00047fbd) fep_hwr_candidate_pane_g3_ParamLimits

0x1ab1,	// (0x00047fbd) fep_hwr_candidate_pane_g3

0xac2f,	// (0x0005113b) fep_hwr_candidate_pane_g4_ParamLimits

0xac2f,	// (0x0005113b) fep_hwr_candidate_pane_g4

0x0002,

0xfafa,	// (0x00056006) fep_hwr_candidate_pane_g_ParamLimits

0xfafa,	// (0x00056006) fep_hwr_candidate_pane_g

0xeddc,	// (0x000552e8) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xeddc,	// (0x000552e8) fep_vkb_candidate_drop_down_list_pane

0xf061,	// (0x0005556d) fep_vkb_candidate_pane_g3

0xf069,	// (0x00055575) fep_vkb_candidate_pane_g4

0x0002,

0xfb0d,	// (0x00056019) fep_vkb_candidate_pane_g

0x1b1c,	// (0x00048028) cell_hwr_candidate_pane_g1_ParamLimits

0x1b2a,	// (0x00048036) cell_hwr_candidate_pane_g3_ParamLimits

0x1b2a,	// (0x00048036) cell_hwr_candidate_pane_g3

0x5cfd,	// (0x0004c209) cell_hwr_candidate_pane_g4_ParamLimits

0x5cfd,	// (0x0004c209) cell_hwr_candidate_pane_g4

0x0002,

0xfb2c,	// (0x00056038) cell_hwr_candidate_pane_g_ParamLimits

0xfb2c,	// (0x00056038) cell_hwr_candidate_pane_g

0xf0c2,	// (0x000555ce) cell_vkb_candidate_pane_g3_ParamLimits

0xf0c2,	// (0x000555ce) cell_vkb_candidate_pane_g3

0xf0dd,	// (0x000555e9) cell_vkb_candidate_pane_g4_ParamLimits

0xf0dd,	// (0x000555e9) cell_vkb_candidate_pane_g4

0xf1c1,	// (0x000556cd) cell_app_pane_cp2_g1_ParamLimits

0xf1c1,	// (0x000556cd) cell_app_pane_cp2_g1

0xf1df,	// (0x000556eb) cell_app_pane_cp2_g2_ParamLimits

0xf1df,	// (0x000556eb) cell_app_pane_cp2_g2

0x0001,

0xfb6f,	// (0x0005607b) cell_app_pane_cp2_g_ParamLimits

0xfb6f,	// (0x0005607b) cell_app_pane_cp2_g

0xf1eb,	// (0x000556f7) cell_app_pane_cp2_t1_ParamLimits

0xf1eb,	// (0x000556f7) cell_app_pane_cp2_t1

0xbe40,	// (0x0005234c) grid_highlight_pane_cp1_ParamLimits

0xbe40,	// (0x0005234c) grid_highlight_pane_cp1

0x1b69,	// (0x00048075) cell_hwr_candidate_pane_cp1_ParamLimits

0x1b69,	// (0x00048075) cell_hwr_candidate_pane_cp1

0x1b1c,	// (0x00048028) fep_hwr_candidate_drop_down_list_pane_g1

0x1b88,	// (0x00048094) fep_hwr_candidate_drop_down_list_pane_g2

0x1b95,	// (0x000480a1) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb74,	// (0x00056080) fep_hwr_candidate_drop_down_list_pane_g

0x1ba2,	// (0x000480ae) fep_hwr_candidate_drop_down_list_scroll_pane

0x1bab,	// (0x000480b7) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x1bab,	// (0x000480b7) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x1bb8,	// (0x000480c4) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x1bb8,	// (0x000480c4) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x1bc5,	// (0x000480d1) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x1bc5,	// (0x000480d1) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x1bd2,	// (0x000480de) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x1bd2,	// (0x000480de) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x1bed,	// (0x000480f9) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x1bed,	// (0x000480f9) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x1c08,	// (0x00048114) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x1c08,	// (0x00048114) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x1c23,	// (0x0004812f) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x1c23,	// (0x0004812f) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x1c3e,	// (0x0004814a) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x1c3e,	// (0x0004814a) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb7b,	// (0x00056087) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb7b,	// (0x00056087) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xf1fd,	// (0x00055709) cell_vkb_candidate_pane_cp1_ParamLimits

0xf1fd,	// (0x00055709) cell_vkb_candidate_pane_cp1

0xee41,	// (0x0005534d) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xee41,	// (0x0005534d) fep_vkb_candidate_drop_down_list_pane_g1

0xf21d,	// (0x00055729) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xf21d,	// (0x00055729) fep_vkb_candidate_drop_down_list_pane_g2

0xf22a,	// (0x00055736) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xf22a,	// (0x00055736) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfb8c,	// (0x00056098) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfb8c,	// (0x00056098) fep_vkb_candidate_drop_down_list_pane_g

0xf237,	// (0x00055743) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xf237,	// (0x00055743) fep_vkb_candidate_drop_down_list_scroll_pane

0xf244,	// (0x00055750) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xf244,	// (0x00055750) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xf251,	// (0x0005575d) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xf251,	// (0x0005575d) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xf25d,	// (0x00055769) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xf25d,	// (0x00055769) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xf080,	// (0x0005558c) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xf080,	// (0x0005558c) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xf0a1,	// (0x000555ad) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xf0a1,	// (0x000555ad) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xf269,	// (0x00055775) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xf269,	// (0x00055775) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xf28a,	// (0x00055796) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xf28a,	// (0x00055796) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xf2ab,	// (0x000557b7) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xf2ab,	// (0x000557b7) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb93,	// (0x0005609f) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb93,	// (0x0005609f) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x86fe,	// (0x0004ec0a) title_pane_g1_ParamLimits

0x870f,	// (0x0004ec1b) title_pane_g2_ParamLimits

0xf592,	// (0x00055a9e) title_pane_g_ParamLimits

0xc49c,	// (0x000529a8) aid_call2_pane

0xc4a4,	// (0x000529b0) aid_call_pane

0xc4ac,	// (0x000529b8) popup_clock_analogue_window_g1

0xc4ac,	// (0x000529b8) popup_clock_analogue_window_g2

0x1017,	// (0x00047523) popup_clock_analogue_window_g3

0x1020,	// (0x0004752c) popup_clock_analogue_window_g4

0xb6d2,	// (0x00051bde) popup_clock_analogue_window_g5

0x0004,

0xf737,	// (0x00055c43) popup_clock_analogue_window_g

0x1028,	// (0x00047534) popup_clock_analogue_window_t1

0x1036,	// (0x00047542) clock_digital_number_pane_ParamLimits

0x1036,	// (0x00047542) clock_digital_number_pane

0x1042,	// (0x0004754e) clock_digital_number_pane_cp02_ParamLimits

0x1042,	// (0x0004754e) clock_digital_number_pane_cp02

0x104e,	// (0x0004755a) clock_digital_number_pane_cp03_ParamLimits

0x104e,	// (0x0004755a) clock_digital_number_pane_cp03

0x105a,	// (0x00047566) clock_digital_number_pane_cp04_ParamLimits

0x105a,	// (0x00047566) clock_digital_number_pane_cp04

0x1066,	// (0x00047572) clock_digital_separator_pane_ParamLimits

0x1066,	// (0x00047572) clock_digital_separator_pane

0x1072,	// (0x0004757e) popup_clock_digital_window_t1_ParamLimits

0x1072,	// (0x0004757e) popup_clock_digital_window_t1

0xb6d2,	// (0x00051bde) clock_digital_number_pane_g1

0xb6d2,	// (0x00051bde) clock_digital_number_pane_g2

0x0001,

0xf742,	// (0x00055c4e) clock_digital_number_pane_g

0xb6d2,	// (0x00051bde) clock_digital_separator_pane_g1

0xb6d2,	// (0x00051bde) clock_digital_separator_pane_g2

0x0001,

0xf742,	// (0x00055c4e) clock_digital_separator_pane_g

0x9755,	// (0x0004fc61) aid_fill_nsta_ParamLimits

0x9884,	// (0x0004fd90) indicator_nsta_pane_ParamLimits

0xcdd9,	// (0x000532e5) popup_clock_analogue_window

0xcdd9,	// (0x000532e5) popup_clock_digital_window

0xdb8a,	// (0x00054096) grid_indicator_nsta_pane_ParamLimits

0xe96d,	// (0x00054e79) clock_nsta_pane_t2

0x0001,

0xfac2,	// (0x00055fce) clock_nsta_pane_t

0x0fdb,	// (0x000474e7) aid_size_max_handle

0x7f18,	// (0x0004e424) aid_size_min_handle

0xc9a2,	// (0x00052eae) editor_scroll_pane

0xf2c6,	// (0x000557d2) ex_editor_pane

0xbf5f,	// (0x0005246b) scroll_pane_cp13

0xbddf,	// (0x000522eb) scroll_pane_cp14

0xc4d6,	// (0x000529e2) scroll_pane_cp36

0x8ec8,	// (0x0004f3d4) list_single_graphic_hl_pane_cp2_ParamLimits

0x8ec8,	// (0x0004f3d4) list_single_graphic_hl_pane_cp2

0x8a51,	// (0x0004ef5d) list_single_graphic_hl_pane_ParamLimits

0x8a51,	// (0x0004ef5d) list_single_graphic_hl_pane

0x3715,	// (0x00049c21) aid_size_min_hl_cp1

0xf2ce,	// (0x000557da) list_highlight_pane_cp34_ParamLimits

0xf2ce,	// (0x000557da) list_highlight_pane_cp34

0xf2df,	// (0x000557eb) list_single_graphic_hl_pane_g1_ParamLimits

0xf2df,	// (0x000557eb) list_single_graphic_hl_pane_g1

0x371e,	// (0x00049c2a) list_single_graphic_hl_pane_g2_ParamLimits

0x371e,	// (0x00049c2a) list_single_graphic_hl_pane_g2

0x371e,	// (0x00049c2a) list_single_graphic_hl_pane_g3_ParamLimits

0x371e,	// (0x00049c2a) list_single_graphic_hl_pane_g3

0xc913,	// (0x00052e1f) list_single_graphic_hl_pane_g4_ParamLimits

0xc913,	// (0x00052e1f) list_single_graphic_hl_pane_g4

0x3e1a,	// (0x0004a326) list_single_graphic_hl_pane_g5_ParamLimits

0x3e1a,	// (0x0004a326) list_single_graphic_hl_pane_g5

0x0004,

0xfba4,	// (0x000560b0) list_single_graphic_hl_pane_g_ParamLimits

0xfba4,	// (0x000560b0) list_single_graphic_hl_pane_g

0x372a,	// (0x00049c36) list_single_graphic_hl_pane_t1_ParamLimits

0x372a,	// (0x00049c36) list_single_graphic_hl_pane_t1

0xf2ec,	// (0x000557f8) aid_size_min_hl_cp2

0xf2f5,	// (0x00055801) list_highlight_pane_cp34_cp2_ParamLimits

0xf2f5,	// (0x00055801) list_highlight_pane_cp34_cp2

0xf2df,	// (0x000557eb) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xf2df,	// (0x000557eb) list_single_graphic_hl_pane_g1_cp2

0xf302,	// (0x0005580e) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xf302,	// (0x0005580e) list_single_graphic_hl_pane_g2_cp2

0xf30e,	// (0x0005581a) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xf30e,	// (0x0005581a) list_single_graphic_hl_pane_g3_cp2

0xdbae,	// (0x000540ba) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xdbae,	// (0x000540ba) list_single_graphic_hl_pane_g4_cp2

0xf31c,	// (0x00055828) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xf31c,	// (0x00055828) list_single_graphic_hl_pane_g5_cp2

0x7f84,	// (0x0004e490) control_pane_g4_ParamLimits

0x7f84,	// (0x0004e490) control_pane_g4

0xbf98,	// (0x000524a4) bg_popup_sub_pane_cp10_ParamLimits

0xeca4,	// (0x000551b0) list_choice_list_pane_ParamLimits

0xecb3,	// (0x000551bf) scroll_pane_cp23

0xb86b,	// (0x00051d77) bg_popup_preview_window_pane_cp02_ParamLimits

0xf12e,	// (0x0005563a) list_preview_fixed_pane_ParamLimits

0xf144,	// (0x00055650) list_preview_fixed_pane_cp_ParamLimits

0xf144,	// (0x00055650) list_preview_fixed_pane_cp

0xf150,	// (0x0005565c) popup_preview_fixed_window_g1_ParamLimits

0xf150,	// (0x0005565c) popup_preview_fixed_window_g1

0xf15c,	// (0x00055668) popup_preview_fixed_window_g2_ParamLimits

0xf15c,	// (0x00055668) popup_preview_fixed_window_g2

0x0002,

0x00a2,	// (0x000465ae) popup_preview_fixed_window_g_ParamLimits

0x00a2,	// (0x000465ae) popup_preview_fixed_window_g

0x0f4f,	// (0x0004745b) aid_navi_side_left_pane_ParamLimits

0x0f64,	// (0x00047470) aid_navi_side_right_pane_ParamLimits

0x0f7c,	// (0x00047488) navi_icon_pane_stacon_ParamLimits

0x0f90,	// (0x0004749c) navi_navi_pane_stacon_ParamLimits

0x0f7c,	// (0x00047488) navi_text_pane_stacon_ParamLimits

0xb6c8,	// (0x00051bd4) main_text_info_pane

0xf346,	// (0x00055852) listscroll_text_info_pane

0xf34e,	// (0x0005585a) list_text_info_pane_ParamLimits

0xf34e,	// (0x0005585a) list_text_info_pane

0xf35d,	// (0x00055869) scroll_pane_cp24_ParamLimits

0xf35d,	// (0x00055869) scroll_pane_cp24

0xa433,	// (0x0005093f) list_text_info_pane_t1_ParamLimits

0xa433,	// (0x0005093f) list_text_info_pane_t1

0x90d5,	// (0x0004f5e1) popup_fast_swap2_window_ParamLimits

0x90d5,	// (0x0004f5e1) popup_fast_swap2_window

0xf37b,	// (0x00055887) aid_size_cell_fast2

0xb6c8,	// (0x00051bd4) bg_popup_window_pane_cp17

0xd285,	// (0x00053791) heading_pane_cp2

0xba5d,	// (0x00051f69) listscroll_fast2_pane

0xf385,	// (0x00055891) grid_fast2_pane

0xf38f,	// (0x0005589b) listscroll_fast2_pane_g1

0xf397,	// (0x000558a3) listscroll_fast2_pane_g2

0x0001,

0xfbaf,	// (0x000560bb) listscroll_fast2_pane_g

0xbf5f,	// (0x0005246b) scroll_pane_cp26

0xf3a1,	// (0x000558ad) cell_fast2_pane_ParamLimits

0xf3a1,	// (0x000558ad) cell_fast2_pane

0xf3b6,	// (0x000558c2) cell_fast2_pane_g1

0xf3bf,	// (0x000558cb) cell_fast2_pane_g2

0xf3c8,	// (0x000558d4) cell_fast2_pane_g3

0x0002,

0xfbb4,	// (0x000560c0) cell_fast2_pane_g

0xba9f,	// (0x00051fab) grid_highlight_pane_cp9

0xbab4,	// (0x00051fc0) main_eswt_pane_ParamLimits

0xbab4,	// (0x00051fc0) main_eswt_pane

0xf372,	// (0x0005587e) list_single_text_info_pane

0xf3d0,	// (0x000558dc) eswt_ctrl_button_pane

0xf3d0,	// (0x000558dc) eswt_ctrl_canvas_pane

0xf3d8,	// (0x000558e4) eswt_ctrl_combo_pane

0xf3d0,	// (0x000558dc) eswt_ctrl_default_pane

0xf3d0,	// (0x000558dc) eswt_ctrl_label_pane

0xf3e0,	// (0x000558ec) eswt_ctrl_wait_pane

0xf3e8,	// (0x000558f4) eswt_shell_pane

0xb6c8,	// (0x00051bd4) listscroll_eswt_app_pane

0xf408,	// (0x00055914) popup_eswt_tasktip_window_ParamLimits

0xf408,	// (0x00055914) popup_eswt_tasktip_window

0xcfd8,	// (0x000534e4) bg_popup_window_pane_cp18

0xf419,	// (0x00055925) eswt_control_pane_g1_ParamLimits

0xf419,	// (0x00055925) eswt_control_pane_g1

0xf426,	// (0x00055932) eswt_control_pane_g2_ParamLimits

0xf426,	// (0x00055932) eswt_control_pane_g2

0xf433,	// (0x0005593f) eswt_control_pane_g3_ParamLimits

0xf433,	// (0x0005593f) eswt_control_pane_g3

0xf440,	// (0x0005594c) eswt_control_pane_g4_ParamLimits

0xf440,	// (0x0005594c) eswt_control_pane_g4

0x0003,

0xfbbb,	// (0x000560c7) eswt_control_pane_g_ParamLimits

0xfbbb,	// (0x000560c7) eswt_control_pane_g

0xbe40,	// (0x0005234c) bg_button_pane_ParamLimits

0xbe40,	// (0x0005234c) bg_button_pane

0xbab4,	// (0x00051fc0) common_borders_pane_copy2_ParamLimits

0xbab4,	// (0x00051fc0) common_borders_pane_copy2

0xf44d,	// (0x00055959) control_button_pane_g1_ParamLimits

0xf44d,	// (0x00055959) control_button_pane_g1

0xf459,	// (0x00055965) control_button_pane_g2_ParamLimits

0xf459,	// (0x00055965) control_button_pane_g2

0xf465,	// (0x00055971) control_button_pane_g3_ParamLimits

0xf465,	// (0x00055971) control_button_pane_g3

0x0002,

0x011e,	// (0x0004662a) control_button_pane_g_ParamLimits

0x011e,	// (0x0004662a) control_button_pane_g

0xf479,	// (0x00055985) control_button_pane_t1

0xf487,	// (0x00055993) control_button_pane_t2

0x0001,

0x0125,	// (0x00046631) control_button_pane_t

0xcee8,	// (0x000533f4) bg_button_pane_g1

0xcef8,	// (0x00053404) bg_button_pane_g2

0xcef0,	// (0x000533fc) bg_button_pane_g3

0xcf08,	// (0x00053414) bg_button_pane_g4

0xcf00,	// (0x0005340c) bg_button_pane_g5

0xcf10,	// (0x0005341c) bg_button_pane_g6

0xcf18,	// (0x00053424) bg_button_pane_g7

0xcf28,	// (0x00053434) bg_button_pane_g8

0xcf20,	// (0x0005342c) bg_button_pane_g9

0x0008,

0xf88e,	// (0x00055d9a) bg_button_pane_g

0xec5f,	// (0x0005516b) common_borders_pane_ParamLimits

0xec5f,	// (0x0005516b) common_borders_pane

0xf419,	// (0x00055925) eswt_control_pane_g1_copy1_ParamLimits

0xf419,	// (0x00055925) eswt_control_pane_g1_copy1

0xf426,	// (0x00055932) eswt_control_pane_g2_copy1_ParamLimits

0xf426,	// (0x00055932) eswt_control_pane_g2_copy1

0xf433,	// (0x0005593f) eswt_control_pane_g3_copy1_ParamLimits

0xf433,	// (0x0005593f) eswt_control_pane_g3_copy1

0xf440,	// (0x0005594c) eswt_control_pane_g4_copy1_ParamLimits

0xf440,	// (0x0005594c) eswt_control_pane_g4_copy1

0xec9a,	// (0x000551a6) bg_eswt_ctrl_canvas_pane_g1

0xec5f,	// (0x0005516b) common_borders_pane_cp2_ParamLimits

0xec5f,	// (0x0005516b) common_borders_pane_cp2

0xec5f,	// (0x0005516b) common_borders_pane_cp3_ParamLimits

0xec5f,	// (0x0005516b) common_borders_pane_cp3

0xf495,	// (0x000559a1) separator_horizontal_pane

0xf49d,	// (0x000559a9) separator_vertical_pane

0xf419,	// (0x00055925) eswt_control_pane_g1_copy2_ParamLimits

0xf419,	// (0x00055925) eswt_control_pane_g1_copy2

0xf426,	// (0x00055932) eswt_control_pane_g2_copy2_ParamLimits

0xf426,	// (0x00055932) eswt_control_pane_g2_copy2

0xf433,	// (0x0005593f) eswt_control_pane_g3_copy2_ParamLimits

0xf433,	// (0x0005593f) eswt_control_pane_g3_copy2

0xf440,	// (0x0005594c) eswt_control_pane_g4_copy2_ParamLimits

0xf440,	// (0x0005594c) eswt_control_pane_g4_copy2

0xb6c8,	// (0x00051bd4) common_borders_pane_cp4

0xf4a6,	// (0x000559b2) separator_horizontal_pane_g1

0xf4af,	// (0x000559bb) separator_horizontal_pane_g2

0xf4b8,	// (0x000559c4) separator_horizontal_pane_g3

0x0002,

0x012a,	// (0x00046636) separator_horizontal_pane_g

0xf419,	// (0x00055925) eswt_control_pane_g1_copy3_ParamLimits

0xf419,	// (0x00055925) eswt_control_pane_g1_copy3

0xf426,	// (0x00055932) eswt_control_pane_g2_copy3_ParamLimits

0xf426,	// (0x00055932) eswt_control_pane_g2_copy3

0xf433,	// (0x0005593f) eswt_control_pane_g3_copy3_ParamLimits

0xf433,	// (0x0005593f) eswt_control_pane_g3_copy3

0xf440,	// (0x0005594c) eswt_control_pane_g4_copy3_ParamLimits

0xf440,	// (0x0005594c) eswt_control_pane_g4_copy3

0xb6c8,	// (0x00051bd4) common_borders_pane_cp5

0xf4c1,	// (0x000559cd) separator_vertical_pane_g1

0xf4ca,	// (0x000559d6) separator_vertical_pane_g2

0xf4d3,	// (0x000559df) separator_vertical_pane_g3

0x0002,

0x0131,	// (0x0004663d) separator_vertical_pane_g

0xf419,	// (0x00055925) eswt_control_pane_g1_copy4_ParamLimits

0xf419,	// (0x00055925) eswt_control_pane_g1_copy4

0xf426,	// (0x00055932) eswt_control_pane_g2_copy4_ParamLimits

0xf426,	// (0x00055932) eswt_control_pane_g2_copy4

0xf433,	// (0x0005593f) eswt_control_pane_g3_copy4_ParamLimits

0xf433,	// (0x0005593f) eswt_control_pane_g3_copy4

0xf440,	// (0x0005594c) eswt_control_pane_g4_copy4_ParamLimits

0xf440,	// (0x0005594c) eswt_control_pane_g4_copy4

0xa44e,	// (0x0005095a) eswt_ctrl_combo_button_pane

0xa456,	// (0x00050962) eswt_ctrl_input_pane

0xa45e,	// (0x0005096a) popup_choice_list_window_cp70

0xa466,	// (0x00050972) eswt_ctrl_input_pane_t1

0xb6c8,	// (0x00051bd4) input_focus_pane_cp70

0xec5f,	// (0x0005516b) bg_button_pane_cp70_ParamLimits

0xec5f,	// (0x0005516b) bg_button_pane_cp70

0xa474,	// (0x00050980) eswt_ctrl_combo_button_pane_g1

0xf4dc,	// (0x000559e8) wait_bar_pane_cp70

0xcfd8,	// (0x000534e4) bg_popup_window_pane_cp70_ParamLimits

0xcfd8,	// (0x000534e4) bg_popup_window_pane_cp70

0xf4e4,	// (0x000559f0) popup_eswt_tasktip_window_t1

0xf4fa,	// (0x00055a06) wait_bar_pane_cp71_ParamLimits

0xf4fa,	// (0x00055a06) wait_bar_pane_cp71

0xf506,	// (0x00055a12) grid_eswt_app_pane

0xc2de,	// (0x000527ea) scroll_pane_cp70

0xa47c,	// (0x00050988) cell_eswt_app_pane_ParamLimits

0xa47c,	// (0x00050988) cell_eswt_app_pane

0xa4a6,	// (0x000509b2) cell_eswt_app_pane_g1_ParamLimits

0xa4a6,	// (0x000509b2) cell_eswt_app_pane_g1

0xa4d5,	// (0x000509e1) cell_eswt_app_pane_g2_ParamLimits

0xa4d5,	// (0x000509e1) cell_eswt_app_pane_g2

0x0001,

0x0138,	// (0x00046644) cell_eswt_app_pane_g_ParamLimits

0x0138,	// (0x00046644) cell_eswt_app_pane_g

0xa4fe,	// (0x00050a0a) cell_eswt_app_pane_t1_ParamLimits

0xa4fe,	// (0x00050a0a) cell_eswt_app_pane_t1

0xf50f,	// (0x00055a1b) grid_highlight_pane_cp70_ParamLimits

0xf50f,	// (0x00055a1b) grid_highlight_pane_cp70

0xc877,	// (0x00052d83) set_content_pane_g1

0xcb81,	// (0x0005308d) status_small_volume_pane

0x1c59,	// (0x00048165) status_small_volume_pane_g1

0x1c61,	// (0x0004816d) volume_small2_pane

0x1c6a,	// (0x00048176) volume_small2_pane_g1

0x1c73,	// (0x0004817f) volume_small2_pane_g2

0x1c7c,	// (0x00048188) volume_small2_pane_g3

0x1c85,	// (0x00048191) volume_small2_pane_g4

0x1c8e,	// (0x0004819a) volume_small2_pane_g5

0x1c97,	// (0x000481a3) volume_small2_pane_g6

0x1ca0,	// (0x000481ac) volume_small2_pane_g7

0x1ca9,	// (0x000481b5) volume_small2_pane_g8

0x1cb2,	// (0x000481be) volume_small2_pane_g9

0x1cbb,	// (0x000481c7) volume_small2_pane_g10

0x0009,

0xfbc4,	// (0x000560d0) volume_small2_pane_g

0xef4e,	// (0x0005545a) fep_vkb_top_text_pane_g1_ParamLimits

0xa3db,	// (0x000508e7) fep_vkb_top_text_pane_t1_ParamLimits

0xf168,	// (0x00055674) popup_preview_fixed_window_g3_ParamLimits

0xf168,	// (0x00055674) popup_preview_fixed_window_g3

0x96e8,	// (0x0004fbf4) popup_toolbar_trans_pane

0x9dbc,	// (0x000502c8) aid_height_set_list_ParamLimits

0xd664,	// (0x00053b70) aid_size_parent_ParamLimits

0xbf98,	// (0x000524a4) list_highlight_pane_cp2_ParamLimits

0xc877,	// (0x00052d83) set_content_pane_g1_ParamLimits

0x9f45,	// (0x00050451) list_single_image_pane_ParamLimits

0x9f45,	// (0x00050451) list_single_image_pane

0xf51b,	// (0x00055a27) aid_size_cell_image_ParamLimits

0xf51b,	// (0x00055a27) aid_size_cell_image

0xa530,	// (0x00050a3c) grid_single_image_pane_ParamLimits

0xa530,	// (0x00050a3c) grid_single_image_pane

0xd658,	// (0x00053b64) list_single_image_pane_g1_ParamLimits

0xd658,	// (0x00053b64) list_single_image_pane_g1

0xf195,	// (0x000556a1) list_single_image_pane_g2_ParamLimits

0xf195,	// (0x000556a1) list_single_image_pane_g2

0x0001,

0xfbd9,	// (0x000560e5) list_single_image_pane_g_ParamLimits

0xfbd9,	// (0x000560e5) list_single_image_pane_g

0xdb98,	// (0x000540a4) list_single_image_pane_t1_ParamLimits

0xdb98,	// (0x000540a4) list_single_image_pane_t1

0xa53e,	// (0x00050a4a) cell_image_list_pane_ParamLimits

0xa53e,	// (0x00050a4a) cell_image_list_pane

0xf528,	// (0x00055a34) cell_image_list_pane_g1

0xf531,	// (0x00055a3d) cell_image_list_pane_g2

0x0001,

0x0157,	// (0x00046663) cell_image_list_pane_g

0xf53a,	// (0x00055a46) aid_size_cell_tb_trans_pane

0xbe40,	// (0x0005234c) bg_tb_trans_pane

0xf54c,	// (0x00055a58) grid_tb_trans_pane

0xcee8,	// (0x000533f4) bg_tb_trans_pane_g1

0xcef8,	// (0x00053404) bg_tb_trans_pane_g2

0xcef0,	// (0x000533fc) bg_tb_trans_pane_g3

0xcf08,	// (0x00053414) bg_tb_trans_pane_g4

0xcf00,	// (0x0005340c) bg_tb_trans_pane_g5

0xcf28,	// (0x00053434) bg_tb_trans_pane_g6

0xcf20,	// (0x0005342c) bg_tb_trans_pane_g7

0xcf10,	// (0x0005341c) bg_tb_trans_pane_g8

0xcf18,	// (0x00053424) bg_tb_trans_pane_g9

0x0008,

0xfbde,	// (0x000560ea) bg_tb_trans_pane_g

0xf560,	// (0x00055a6c) cell_toolbar_trans_pane_ParamLimits

0xf560,	// (0x00055a6c) cell_toolbar_trans_pane

0xec9a,	// (0x000551a6) cell_toolbar_trans_pane_g1

0xa1b7,	// (0x000506c3) list_form2_midp_pane_t1

0xa1c5,	// (0x000506d1) list_form2_midp_pane_t2

0x0001,

0x002d,	// (0x00046539) list_form2_midp_pane_t

0xe9ec,	// (0x00054ef8) scroll_pane_cp51_ParamLimits

0xeb63,	// (0x0005506f) form2_midp_wait_pane_g1

0xeb6c,	// (0x00055078) form2_midp_wait_pane_g2

0xeb75,	// (0x00055081) form2_midp_wait_pane_g3

0x0002,

0x0042,	// (0x0004654e) form2_midp_wait_pane_g

0xb738,	// (0x00051c44) list_highlight_pane_cp21_ParamLimits

0xeb9d,	// (0x000550a9) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xebac,	// (0x000550b8) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xe0e4,	// (0x000545f0) list_single_2graphic_im_pane_ParamLimits

0xe0e4,	// (0x000545f0) list_single_2graphic_im_pane

0xa554,	// (0x00050a60) list_single_2graphic_im_pane_g1_ParamLimits

0xa554,	// (0x00050a60) list_single_2graphic_im_pane_g1

0xa565,	// (0x00050a71) list_single_2graphic_im_pane_g2_ParamLimits

0xa565,	// (0x00050a71) list_single_2graphic_im_pane_g2

0xa571,	// (0x00050a7d) list_single_2graphic_im_pane_g3_ParamLimits

0xa571,	// (0x00050a7d) list_single_2graphic_im_pane_g3

0x0003,

0x016f,	// (0x0004667b) list_single_2graphic_im_pane_g_ParamLimits

0x016f,	// (0x0004667b) list_single_2graphic_im_pane_g

0xa585,	// (0x00050a91) list_single_2graphic_im_pane_t1_ParamLimits

0xa585,	// (0x00050a91) list_single_2graphic_im_pane_t1

0xf174,	// (0x00055680) list_single_graphic_2heading_pane_fp_ParamLimits

0xf174,	// (0x00055680) list_single_graphic_2heading_pane_fp

0x35f7,	// (0x00049b03) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x35f7,	// (0x00049b03) list_single_graphic_2heading_pane_fp_g1

0xf189,	// (0x00055695) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xf189,	// (0x00055695) list_single_graphic_2heading_pane_fp_g2

0xd658,	// (0x00053b64) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xd658,	// (0x00053b64) list_single_graphic_2heading_pane_fp_g3

0xf195,	// (0x000556a1) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xf195,	// (0x000556a1) list_single_graphic_2heading_pane_fp_g4

0xf1a9,	// (0x000556b5) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xf1a9,	// (0x000556b5) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb3c,	// (0x00056048) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb3c,	// (0x00056048) list_single_graphic_2heading_pane_fp_g

0x3740,	// (0x00049c4c) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x3740,	// (0x00049c4c) list_single_graphic_2heading_pane_fp_t1

0x362f,	// (0x00049b3b) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x362f,	// (0x00049b3b) list_single_graphic_2heading_pane_fp_t2

0x3756,	// (0x00049c62) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x3756,	// (0x00049c62) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfbf1,	// (0x000560fd) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfbf1,	// (0x000560fd) list_single_graphic_2heading_pane_fp_t

0xed3a,	// (0x00055246) fep_hwr_write_pane_g5_ParamLimits

0xed3a,	// (0x00055246) fep_hwr_write_pane_g5

0xed46,	// (0x00055252) fep_hwr_write_pane_g6_ParamLimits

0xed46,	// (0x00055252) fep_hwr_write_pane_g6

0xf3e8,	// (0x000558f4) eswt_shell_pane_ParamLimits

0xcfd8,	// (0x000534e4) bg_popup_window_pane_cp18_ParamLimits

0xe01e,	// (0x0005452a) heading_pane_cp70

0xf4e4,	// (0x000559f0) popup_eswt_tasktip_window_t1_ParamLimits

0x97a9,	// (0x0004fcb5) aid_touch_tab_arrow_left

0x97bf,	// (0x0004fccb) aid_touch_tab_arrow_right

0x8727,	// (0x0004ec33) title_pane_g3_ParamLimits

0x8727,	// (0x0004ec33) title_pane_g3

0xbdff,	// (0x0005230b) set_value_pane_g1

0x96e8,	// (0x0004fbf4) popup_toolbar_trans_pane_ParamLimits

0xf53a,	// (0x00055a46) aid_size_cell_tb_trans_pane_ParamLimits

0xbe40,	// (0x0005234c) bg_tb_trans_pane_ParamLimits

0xf54c,	// (0x00055a58) grid_tb_trans_pane_ParamLimits

0xb86b,	// (0x00051d77) cont_note_pane_ParamLimits

0xb86b,	// (0x00051d77) cont_note_pane

0xbab4,	// (0x00051fc0) cont_snote2_single_text_pane_ParamLimits

0xbab4,	// (0x00051fc0) cont_snote2_single_text_pane

0xbab4,	// (0x00051fc0) cont_snote2_single_graphic_pane_ParamLimits

0xbab4,	// (0x00051fc0) cont_snote2_single_graphic_pane

0xd46f,	// (0x0005397b) cont_note_wait_pane_ParamLimits

0xd46f,	// (0x0005397b) cont_note_wait_pane

0xd46f,	// (0x0005397b) cont_note_image_pane_ParamLimits

0xd46f,	// (0x0005397b) cont_note_image_pane

0x4982,	// (0x0004ae8e) popup_note2_window_g1_ParamLimits

0x4982,	// (0x0004ae8e) popup_note2_window_g1

0x49b3,	// (0x0004aebf) popup_note2_window_t1_ParamLimits

0x49b3,	// (0x0004aebf) popup_note2_window_t1

0x49f8,	// (0x0004af04) popup_note2_window_t2_ParamLimits

0x49f8,	// (0x0004af04) popup_note2_window_t2

0x4a3d,	// (0x0004af49) popup_note2_window_t3_ParamLimits

0x4a3d,	// (0x0004af49) popup_note2_window_t3

0x4a82,	// (0x0004af8e) popup_note2_window_t4_ParamLimits

0x4a82,	// (0x0004af8e) popup_note2_window_t4

0xb8ef,	// (0x00051dfb) popup_note2_window_t5_ParamLimits

0xb8ef,	// (0x00051dfb) popup_note2_window_t5

0x0004,

0xfbfd,	// (0x00056109) popup_note2_window_t_ParamLimits

0xfbfd,	// (0x00056109) popup_note2_window_t

0x4ab1,	// (0x0004afbd) popup_note2_image_window_g1_ParamLimits

0x4ab1,	// (0x0004afbd) popup_note2_image_window_g1

0x4abd,	// (0x0004afc9) popup_note2_image_window_g2_ParamLimits

0x4abd,	// (0x0004afc9) popup_note2_image_window_g2

0x0001,

0xfc08,	// (0x00056114) popup_note2_image_window_g_ParamLimits

0xfc08,	// (0x00056114) popup_note2_image_window_g

0x4acf,	// (0x0004afdb) popup_note2_image_window_t1_ParamLimits

0x4acf,	// (0x0004afdb) popup_note2_image_window_t1

0x4ae7,	// (0x0004aff3) popup_note2_image_window_t2_ParamLimits

0x4ae7,	// (0x0004aff3) popup_note2_image_window_t2

0x4aff,	// (0x0004b00b) popup_note2_image_window_t3_ParamLimits

0x4aff,	// (0x0004b00b) popup_note2_image_window_t3

0x0002,

0xfc0d,	// (0x00056119) popup_note2_image_window_t_ParamLimits

0xfc0d,	// (0x00056119) popup_note2_image_window_t

0xd47d,	// (0x00053989) popup_note2_wait_window_g1_ParamLimits

0xd47d,	// (0x00053989) popup_note2_wait_window_g1

0x4b1b,	// (0x0004b027) popup_note2_wait_window_g2_ParamLimits

0x4b1b,	// (0x0004b027) popup_note2_wait_window_g2

0xd495,	// (0x000539a1) popup_note2_wait_window_g3_ParamLimits

0xd495,	// (0x000539a1) popup_note2_wait_window_g3

0x0002,

0xfc14,	// (0x00056120) popup_note2_wait_window_g_ParamLimits

0xfc14,	// (0x00056120) popup_note2_wait_window_g

0x4b27,	// (0x0004b033) popup_note2_wait_window_t1_ParamLimits

0x4b27,	// (0x0004b033) popup_note2_wait_window_t1

0x4b45,	// (0x0004b051) popup_note2_wait_window_t2_ParamLimits

0x4b45,	// (0x0004b051) popup_note2_wait_window_t2

0x4b63,	// (0x0004b06f) popup_note2_wait_window_t3_ParamLimits

0x4b63,	// (0x0004b06f) popup_note2_wait_window_t3

0x4b75,	// (0x0004b081) popup_note2_wait_window_t4_ParamLimits

0x4b75,	// (0x0004b081) popup_note2_wait_window_t4

0x0003,

0xfc1b,	// (0x00056127) popup_note2_wait_window_t_ParamLimits

0xfc1b,	// (0x00056127) popup_note2_wait_window_t

0x4b87,	// (0x0004b093) wait_bar2_pane_ParamLimits

0x4b87,	// (0x0004b093) wait_bar2_pane

0x4b9f,	// (0x0004b0ab) popup_snote2_single_text_window_g1_ParamLimits

0x4b9f,	// (0x0004b0ab) popup_snote2_single_text_window_g1

0x4bc7,	// (0x0004b0d3) popup_snote2_single_text_window_t1_ParamLimits

0x4bc7,	// (0x0004b0d3) popup_snote2_single_text_window_t1

0x4c13,	// (0x0004b11f) popup_snote2_single_text_window_t2_ParamLimits

0x4c13,	// (0x0004b11f) popup_snote2_single_text_window_t2

0x4c5f,	// (0x0004b16b) popup_snote2_single_text_window_t3_ParamLimits

0x4c5f,	// (0x0004b16b) popup_snote2_single_text_window_t3

0x4ca0,	// (0x0004b1ac) popup_snote2_single_text_window_t4_ParamLimits

0x4ca0,	// (0x0004b1ac) popup_snote2_single_text_window_t4

0x4cd6,	// (0x0004b1e2) popup_snote2_single_text_window_t5_ParamLimits

0x4cd6,	// (0x0004b1e2) popup_snote2_single_text_window_t5

0x0004,

0xfc24,	// (0x00056130) popup_snote2_single_text_window_t_ParamLimits

0xfc24,	// (0x00056130) popup_snote2_single_text_window_t

0x4d01,	// (0x0004b20d) popup_snote2_single_graphic_window_g1_ParamLimits

0x4d01,	// (0x0004b20d) popup_snote2_single_graphic_window_g1

0x4d29,	// (0x0004b235) popup_snote2_single_graphic_window_g2_ParamLimits

0x4d29,	// (0x0004b235) popup_snote2_single_graphic_window_g2

0x0001,

0xfc2f,	// (0x0005613b) popup_snote2_single_graphic_window_g_ParamLimits

0xfc2f,	// (0x0005613b) popup_snote2_single_graphic_window_g

0x4d51,	// (0x0004b25d) popup_snote2_single_graphic_window_t1_ParamLimits

0x4d51,	// (0x0004b25d) popup_snote2_single_graphic_window_t1

0x4d9d,	// (0x0004b2a9) popup_snote2_single_graphic_window_t2_ParamLimits

0x4d9d,	// (0x0004b2a9) popup_snote2_single_graphic_window_t2

0x4c5f,	// (0x0004b16b) popup_snote2_single_graphic_window_t3_ParamLimits

0x4c5f,	// (0x0004b16b) popup_snote2_single_graphic_window_t3

0x4ca0,	// (0x0004b1ac) popup_snote2_single_graphic_window_t4_ParamLimits

0x4ca0,	// (0x0004b1ac) popup_snote2_single_graphic_window_t4

0x4cd6,	// (0x0004b1e2) popup_snote2_single_graphic_window_t5_ParamLimits

0x4cd6,	// (0x0004b1e2) popup_snote2_single_graphic_window_t5

0x0004,

0xfc34,	// (0x00056140) popup_snote2_single_graphic_window_t_ParamLimits

0xfc34,	// (0x00056140) popup_snote2_single_graphic_window_t

0xe9a2,	// (0x00054eae) clock_nsta_pane_cp2_t1

0xe9a2,	// (0x00054eae) clock_nsta_pane_cp2_t2

0x0001,

0x0003,	// (0x0004650f) clock_nsta_pane_cp2_t

0x2928,	// (0x00048e34) form_field_data_wide_pane_g1_ParamLimits

0xbe5a,	// (0x00052366) form_field_data_wide_pane_g2_ParamLimits

0xbe5a,	// (0x00052366) form_field_data_wide_pane_g2

0xbe66,	// (0x00052372) form_field_data_wide_pane_g3_ParamLimits

0xbe66,	// (0x00052372) form_field_data_wide_pane_g3

0x0002,

0xf6ba,	// (0x00055bc6) form_field_data_wide_pane_g_ParamLimits

0xf6ba,	// (0x00055bc6) form_field_data_wide_pane_g

0xa0d1,	// (0x000505dd) grid_touch_3_pane_ParamLimits

0xa0d1,	// (0x000505dd) grid_touch_3_pane

0xa5b6,	// (0x00050ac2) cell_touch_3_pane_ParamLimits

0xa5b6,	// (0x00050ac2) cell_touch_3_pane

0xec9a,	// (0x000551a6) cell_touch_3_pane_g1

0xec9a,	// (0x000551a6) cell_touch_3_pane_g2

0x0001,

0x0083,	// (0x0004658f) cell_touch_3_pane_g

0xb921,	// (0x00051e2d) cont_query_data_pane

0xb929,	// (0x00051e35) cont_query_data_pane_cp1

0x4e17,	// (0x0004b323) button_value_adjust_pane_cp7

0x4e1f,	// (0x0004b32b) query_popup_pane_cp3

0xc508,	// (0x00052a14) bg_popup_sub_pane_cp22_ParamLimits

0x1091,	// (0x0004759d) navi_navi_volume_pane_cp2

0x10ac,	// (0x000475b8) popup_side_volume_key_window_g2

0x10bb,	// (0x000475c7) popup_side_volume_key_window_g3

0x0002,

0xf74c,	// (0x00055c58) popup_side_volume_key_window_g

0x10d8,	// (0x000475e4) popup_side_volume_key_window_t2

0x0001,

0xf753,	// (0x00055c5f) popup_side_volume_key_window_t

0xc741,	// (0x00052c4d) popup_side_volume_key_window_ParamLimits

0x7b20,	// (0x0004e02c) list_double_graphic_pane_g4_ParamLimits

0x7b20,	// (0x0004e02c) list_double_graphic_pane_g4

0x9f32,	// (0x0005043e) list_single_2heading_msg_pane_ParamLimits

0x9f32,	// (0x0005043e) list_single_2heading_msg_pane

0x8a9b,	// (0x0004efa7) list_single_2heading_msg_pane_g1_ParamLimits

0x8a9b,	// (0x0004efa7) list_single_2heading_msg_pane_g1

0x8aa7,	// (0x0004efb3) list_single_2heading_msg_pane_g2_ParamLimits

0x8aa7,	// (0x0004efb3) list_single_2heading_msg_pane_g2

0x8aba,	// (0x0004efc6) list_single_2heading_msg_pane_g3_ParamLimits

0x8aba,	// (0x0004efc6) list_single_2heading_msg_pane_g3

0x8ac6,	// (0x0004efd2) list_single_2heading_msg_pane_g4_ParamLimits

0x8ac6,	// (0x0004efd2) list_single_2heading_msg_pane_g4

0x0003,

0xfc3f,	// (0x0005614b) list_single_2heading_msg_pane_g_ParamLimits

0xfc3f,	// (0x0005614b) list_single_2heading_msg_pane_g

0x8ade,	// (0x0004efea) list_single_2heading_msg_pane_t1_ParamLimits

0x8ade,	// (0x0004efea) list_single_2heading_msg_pane_t1

0x8b06,	// (0x0004f012) list_single_2heading_msg_pane_t2_ParamLimits

0x8b06,	// (0x0004f012) list_single_2heading_msg_pane_t2

0x8b71,	// (0x0004f07d) list_single_2heading_msg_pane_t3_ParamLimits

0x8b71,	// (0x0004f07d) list_single_2heading_msg_pane_t3

0x380b,	// (0x00049d17) list_single_2heading_msg_pane_t4_ParamLimits

0x380b,	// (0x00049d17) list_single_2heading_msg_pane_t4

0x0003,

0xfc48,	// (0x00056154) list_single_2heading_msg_pane_t_ParamLimits

0xfc48,	// (0x00056154) list_single_2heading_msg_pane_t

0xb6e6,	// (0x00051bf2) title_pane_g4_ParamLimits

0xb6e6,	// (0x00051bf2) title_pane_g4

0x0e9f,	// (0x000473ab) title_pane_stacon_g3_ParamLimits

0x0e9f,	// (0x000473ab) title_pane_stacon_g3

0xf586,	// (0x00055a92) list_single_2graphic_im_pane_g4_ParamLimits

0xf586,	// (0x00055a92) list_single_2graphic_im_pane_g4

0xde42,	// (0x0005434e) popup_side_volume_key_window_cp

0xe30f,	// (0x0005481b) main_idle_act2_pane_t1

0x145d,	// (0x00047969) toolbar_button_pane_g10

0x8d55,	// (0x0004f261) popup_toolbar_window_cp1

0xe993,	// (0x00054e9f) clock_nsta_pane_cp_t1

0xe993,	// (0x00054e9f) clock_nsta_pane_cp_t2

0x0001,

0xfacc,	// (0x00055fd8) clock_nsta_pane_cp_t

0x1091,	// (0x0004759d) navi_navi_volume_pane_cp2_ParamLimits

0x10a0,	// (0x000475ac) popup_side_volume_key_window_g1_ParamLimits

0x10ac,	// (0x000475b8) popup_side_volume_key_window_g2_ParamLimits

0x10bb,	// (0x000475c7) popup_side_volume_key_window_g3_ParamLimits

0xf74c,	// (0x00055c58) popup_side_volume_key_window_g_ParamLimits

0x18c5,	// (0x00047dd1) fep_hwr_aid_pane

0x196c,	// (0x00047e78) bg_fep_hwr_top_pane_g4_ParamLimits

0xed0a,	// (0x00055216) fep_hwr_top_pane_g1_ParamLimits

0xed1c,	// (0x00055228) fep_hwr_top_pane_g2_ParamLimits

0x198c,	// (0x00047e98) fep_hwr_top_pane_g3_ParamLimits

0xfae6,	// (0x00055ff2) fep_hwr_top_pane_g_ParamLimits

0x19a1,	// (0x00047ead) fep_hwr_top_text_pane_ParamLimits

0xdc05,	// (0x00054111) aid_touch_tab_arrow_arrow_2

0xdc0e,	// (0x0005411a) aid_touch_tab_arrow_left_2

0x18d9,	// (0x00047de5) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x1910,	// (0x00047e1c) fep_hwr_prediction_pane

0xee09,	// (0x00055315) fep_vkb_prediction_pane

0xa3bb,	// (0x000508c7) fep_vkb_side_pane_g3_ParamLimits

0xa3bb,	// (0x000508c7) fep_vkb_side_pane_g3

0x1b1c,	// (0x00048028) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x1b88,	// (0x00048094) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x1b95,	// (0x000480a1) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb74,	// (0x00056080) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x1cc4,	// (0x000481d0) fep_hwr_prediction_pane_g1

0x1cce,	// (0x000481da) fep_hwr_prediction_pane_g2

0x1cd6,	// (0x000481e2) fep_hwr_prediction_pane_g3

0x1cde,	// (0x000481ea) fep_hwr_prediction_pane_g4

0x0003,

0xfc51,	// (0x0005615d) fep_hwr_prediction_pane_g

0x4e44,	// (0x0004b350) fep_vkb_prediction_pane_g1

0x4e4e,	// (0x0004b35a) fep_vkb_prediction_pane_g2

0x4e56,	// (0x0004b362) fep_vkb_prediction_pane_g3

0x4e5e,	// (0x0004b36a) fep_vkb_prediction_pane_g4

0x0003,

0xfc5a,	// (0x00056166) fep_vkb_prediction_pane_g

0x1745,	// (0x00047c51) slider_set_pane_g3

0x1759,	// (0x00047c65) slider_set_pane_g4

0x1771,	// (0x00047c7d) slider_set_pane_g5

0x1745,	// (0x00047c51) slider_set_pane_g6

0x1787,	// (0x00047c93) slider_set_pane_g7

0xe0a9,	// (0x000545b5) slider_form_pane_g3

0xe0b2,	// (0x000545be) slider_form_pane_g4

0xe0ba,	// (0x000545c6) slider_form_pane_g5

0xe0a9,	// (0x000545b5) slider_form_pane_g6

0x9f07,	// (0x00050413) slider_form_pane_g7

0xe561,	// (0x00054a6d) slider_set_pane_vc_g3

0xe56a,	// (0x00054a76) slider_set_pane_vc_g4

0xe573,	// (0x00054a7f) slider_set_pane_vc_g5

0xe561,	// (0x00054a6d) slider_set_pane_vc_g6

0xe57c,	// (0x00054a88) slider_set_pane_vc_g7

0xe561,	// (0x00054a6d) slider_form_pane_vc_g1

0xe56a,	// (0x00054a76) slider_form_pane_vc_g2

0xe573,	// (0x00054a7f) slider_form_pane_vc_g3

0xe561,	// (0x00054a6d) slider_form_pane_vc_g4

0xe73d,	// (0x00054c49) slider_form_pane_vc_g5

0x0004,

0xfab2,	// (0x00055fbe) slider_form_pane_vc_g

0xb6c8,	// (0x00051bd4) main_idle_act3_pane

0x4e66,	// (0x0004b372) ai3_links_pane

0xa5ff,	// (0x00050b0b) popup_ai3_data_window_ParamLimits

0xa5ff,	// (0x00050b0b) popup_ai3_data_window

0xb6c8,	// (0x00051bd4) grid_ai3_links_pane

0xa619,	// (0x00050b25) cell_ai3_links_pane_ParamLimits

0xa619,	// (0x00050b25) cell_ai3_links_pane

0x4ea1,	// (0x0004b3ad) bg_popup_sub_pane_cp11

0x4eae,	// (0x0004b3ba) cell_ai3_links_pane_g1

0xb6c8,	// (0x00051bd4) bg_popup_sub_pane_cp12

0x4ed3,	// (0x0004b3df) heading_ai3_data_pane

0x4edb,	// (0x0004b3e7) list_ai3_gene_pane

0x4ee7,	// (0x0004b3f3) popup_ai3_data_window_g1

0x4eef,	// (0x0004b3fb) heading_ai3_data_pane_g1

0x4ef7,	// (0x0004b403) heading_ai3_data_pane_t1

0x4f05,	// (0x0004b411) list_double_ai3_gene_pane_ParamLimits

0x4f05,	// (0x0004b411) list_double_ai3_gene_pane

0x4f12,	// (0x0004b41e) list_single_ai3_gene_pane_ParamLimits

0x4f12,	// (0x0004b41e) list_single_ai3_gene_pane

0xec5f,	// (0x0005516b) list_highlight_pane_cp7_ParamLimits

0xec5f,	// (0x0005516b) list_highlight_pane_cp7

0x4f1f,	// (0x0004b42b) list_single_a13_gene_pane_t1_ParamLimits

0x4f1f,	// (0x0004b42b) list_single_a13_gene_pane_t1

0x4f36,	// (0x0004b442) list_single_ai3_gene_pane_g1

0x4f3f,	// (0x0004b44b) list_single_ai3_gene_pane_g2

0x0001,

0xfc63,	// (0x0005616f) list_single_ai3_gene_pane_g

0x4f47,	// (0x0004b453) list_double_ai3_gene_pane_g1_ParamLimits

0x4f47,	// (0x0004b453) list_double_ai3_gene_pane_g1

0x4f53,	// (0x0004b45f) list_double_ai3_gene_pane_t1_ParamLimits

0x4f53,	// (0x0004b45f) list_double_ai3_gene_pane_t1

0x4f6f,	// (0x0004b47b) list_double_ai3_gene_pane_t2_ParamLimits

0x4f6f,	// (0x0004b47b) list_double_ai3_gene_pane_t2

0x4f85,	// (0x0004b491) list_double_ai3_gene_pane_t3_ParamLimits

0x4f85,	// (0x0004b491) list_double_ai3_gene_pane_t3

0x0002,

0xfc68,	// (0x00056174) list_double_ai3_gene_pane_t_ParamLimits

0xfc68,	// (0x00056174) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x376c,	// (0x00049c78) aid_size_min_col_2

0xa5e9,	// (0x00050af5) aid_size_min_msg_ParamLimits

0xa5e9,	// (0x00050af5) aid_size_min_msg

0xa3cf,	// (0x000508db) fep_vkb_top_text_pane_g2_ParamLimits

0xa3cf,	// (0x000508db) fep_vkb_top_text_pane_g2

0x0001,

0x007e,	// (0x0004658a) fep_vkb_top_text_pane_g_ParamLimits

0x007e,	// (0x0004658a) fep_vkb_top_text_pane_g

0xb6c8,	// (0x00051bd4) main_hc_apps_shell_pane

0x4fa2,	// (0x0004b4ae) grid_hc_apps_pane_ParamLimits

0x4fa2,	// (0x0004b4ae) grid_hc_apps_pane

0x4fb1,	// (0x0004b4bd) list_hc_apps_pane

0x4fb9,	// (0x0004b4c5) scroll_pane_cp37_ParamLimits

0x4fb9,	// (0x0004b4c5) scroll_pane_cp37

0xa633,	// (0x00050b3f) cell_hc_apps_pane_ParamLimits

0xa633,	// (0x00050b3f) cell_hc_apps_pane

0xa6f1,	// (0x00050bfd) cell_hc_apps_pane_g1_ParamLimits

0xa6f1,	// (0x00050bfd) cell_hc_apps_pane_g1

0x50a4,	// (0x0004b5b0) cell_hc_apps_pane_g2_ParamLimits

0x50a4,	// (0x0004b5b0) cell_hc_apps_pane_g2

0x50c0,	// (0x0004b5cc) cell_hc_apps_pane_g3_ParamLimits

0x50c0,	// (0x0004b5cc) cell_hc_apps_pane_g3

0x0002,

0xfc6f,	// (0x0005617b) cell_hc_apps_pane_g_ParamLimits

0xfc6f,	// (0x0005617b) cell_hc_apps_pane_g

0xa71e,	// (0x00050c2a) cell_hc_apps_pane_t1_ParamLimits

0xa71e,	// (0x00050c2a) cell_hc_apps_pane_t1

0xb86b,	// (0x00051d77) grid_highlight_pane_cp10_ParamLimits

0xb86b,	// (0x00051d77) grid_highlight_pane_cp10

0xa75c,	// (0x00050c68) list_single_hc_apps_pane_ParamLimits

0xa75c,	// (0x00050c68) list_single_hc_apps_pane

0xa789,	// (0x00050c95) list_single_hc_apps_pane_g1

0x8bdf,	// (0x0004f0eb) list_single_hc_apps_pane_g2

0x0001,

0xfc76,	// (0x00056182) list_single_hc_apps_pane_g

0x8bf8,	// (0x0004f104) list_single_hc_apps_pane_g2_copy1

0x3830,	// (0x00049d3c) list_single_hc_apps_pane_t1

0xb738,	// (0x00051c44) bg_set_opt_pane_cp_ParamLimits

0x0848,	// (0x00046d54) setting_slider_pane_t1_ParamLimits

0x0861,	// (0x00046d6d) setting_slider_pane_t2_ParamLimits

0x087b,	// (0x00046d87) setting_slider_pane_t3_ParamLimits

0xf5a2,	// (0x00055aae) setting_slider_pane_t_ParamLimits

0x0893,	// (0x00046d9f) slider_set_pane_ParamLimits

0x1339,	// (0x00047845) control_pane_g5_ParamLimits

0x1339,	// (0x00047845) control_pane_g5

0xe065,	// (0x00054571) slider_set_pane_g1_ParamLimits

0x1739,	// (0x00047c45) slider_set_pane_g2_ParamLimits

0x1745,	// (0x00047c51) slider_set_pane_g3_ParamLimits

0x1759,	// (0x00047c65) slider_set_pane_g4_ParamLimits

0x1771,	// (0x00047c7d) slider_set_pane_g5_ParamLimits

0x1745,	// (0x00047c51) slider_set_pane_g6_ParamLimits

0x1787,	// (0x00047c93) slider_set_pane_g7_ParamLimits

0xf98c,	// (0x00055e98) slider_set_pane_g_ParamLimits

0xc822,	// (0x00052d2e) navi_icon_text_pane_ParamLimits

0x9775,	// (0x0004fc81) aid_fill_nsta_2_ParamLimits

0x97a9,	// (0x0004fcb5) aid_touch_tab_arrow_left_ParamLimits

0x97bf,	// (0x0004fccb) aid_touch_tab_arrow_right_ParamLimits

0x985a,	// (0x0004fd66) clock_nsta_pane_ParamLimits

0x9ce3,	// (0x000501ef) navi_icon_pane_g1_ParamLimits

0x9cef,	// (0x000501fb) navi_text_pane_t1_ParamLimits

0xa199,	// (0x000506a5) navi_icon_text_pane_g1_ParamLimits

0xa1a5,	// (0x000506b1) navi_icon_text_pane_t1_ParamLimits

0xa789,	// (0x00050c95) list_single_hc_apps_pane_g1_ParamLimits

0x8bdf,	// (0x0004f0eb) list_single_hc_apps_pane_g2_ParamLimits

0xfc76,	// (0x00056182) list_single_hc_apps_pane_g_ParamLimits

0x8bf8,	// (0x0004f104) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x3830,	// (0x00049d3c) list_single_hc_apps_pane_t1_ParamLimits

0x799b,	// (0x0004dea7) popup_toolbar2_fixed_window_ParamLimits

0x799b,	// (0x0004dea7) popup_toolbar2_fixed_window

0x96de,	// (0x0004fbea) popup_toolbar2_float_window

0xb6c8,	// (0x00051bd4) bg_popup_sub_pane_cp27

0x5197,	// (0x0004b6a3) grid_toolbar2_float_pane

0xb6c8,	// (0x00051bd4) bg_popup_sub_pane_cp26

0x5197,	// (0x0004b6a3) grid_toolbar2_fixed_pane

0xa7a2,	// (0x00050cae) cell_toolbar2_fixed_pane_ParamLimits

0xa7a2,	// (0x00050cae) cell_toolbar2_fixed_pane

0xa7bd,	// (0x00050cc9) cell_toolbar2_fixed_pane_g1

0x51b8,	// (0x0004b6c4) toolbar2_fixed_button_pane

0xcee8,	// (0x000533f4) toolbar2_fixed_button_pane_g1

0xcef8,	// (0x00053404) toolbar2_fixed_button_pane_g2

0xcef0,	// (0x000533fc) toolbar2_fixed_button_pane_g3

0xcf08,	// (0x00053414) toolbar2_fixed_button_pane_g4

0xcf00,	// (0x0005340c) toolbar2_fixed_button_pane_g5

0xcf10,	// (0x0005341c) toolbar2_fixed_button_pane_g6

0xcf18,	// (0x00053424) toolbar2_fixed_button_pane_g7

0xcf28,	// (0x00053434) toolbar2_fixed_button_pane_g8

0xcf20,	// (0x0005342c) toolbar2_fixed_button_pane_g9

0x0008,

0xf88e,	// (0x00055d9a) toolbar2_fixed_button_pane_g

0x51c0,	// (0x0004b6cc) cell_toolbar2_float_pane_ParamLimits

0x51c0,	// (0x0004b6cc) cell_toolbar2_float_pane

0x51d1,	// (0x0004b6dd) cell_toolbar2_float_pane_g1

0x51b8,	// (0x0004b6c4) toolbar2_fixed_button_pane_cp

0xa2a9,	// (0x000507b5) fep_vkb_accented_list_pane_ParamLimits

0xa2a9,	// (0x000507b5) fep_vkb_accented_list_pane

0x1afc,	// (0x00048008) bg_popup_fep_shadow_pane_g9

0xc9a2,	// (0x00052eae) bg_popup_fep_shadow_pane_cp3

0xbf46,	// (0x00052452) list_accented_list_pane

0x51da,	// (0x0004b6e6) list_single_accented_list_pane_ParamLimits

0x51da,	// (0x0004b6e6) list_single_accented_list_pane

0xc9a2,	// (0x00052eae) list_highlight_pane_cp10

0x51eb,	// (0x0004b6f7) list_single_accented_list_pane_t1

0x9608,	// (0x0004fb14) popup_slider_window_ParamLimits

0x9608,	// (0x0004fb14) popup_slider_window

0x4e27,	// (0x0004b333) aid_indentation_list_msg

0xa8b6,	// (0x00050dc2) bg_popup_window_pane_cp19

0x530f,	// (0x0004b81b) popup_slider_window_g1

0x532b,	// (0x0004b837) popup_slider_window_g2

0x5347,	// (0x0004b853) popup_slider_window_g3

0x0005,

0xfc7b,	// (0x00056187) popup_slider_window_g

0x53a3,	// (0x0004b8af) popup_slider_window_t1

0x5417,	// (0x0004b923) small_volume_slider_vertical_pane

0xec9a,	// (0x000551a6) small_volume_slider_vertical_pane_g1

0xec9a,	// (0x000551a6) small_volume_slider_vertical_pane_g2

0x5433,	// (0x0004b93f) small_volume_slider_vertical_pane_g3

0x0002,

0xfc8d,	// (0x00056199) small_volume_slider_vertical_pane_g

0x7909,	// (0x0004de15) area_side_right_pane_ParamLimits

0x7909,	// (0x0004de15) area_side_right_pane

0x82a3,	// (0x0004e7af) aid_size_side_button_ParamLimits

0x82a3,	// (0x0004e7af) aid_size_side_button

0x82bc,	// (0x0004e7c8) grid_sctrl_middle_pane_ParamLimits

0x82bc,	// (0x0004e7c8) grid_sctrl_middle_pane

0x1d1a,	// (0x00048226) sctrl_sk_bottom_pane

0x1d2b,	// (0x00048237) sctrl_sk_top_pane

0x1d3d,	// (0x00048249) aid_touch_sctrl_top

0x1d4a,	// (0x00048256) bg_sctrl_sk_pane_ParamLimits

0x1d4a,	// (0x00048256) bg_sctrl_sk_pane

0x1d58,	// (0x00048264) sctrl_sk_top_pane_g1

0x1d65,	// (0x00048271) sctrl_sk_top_pane_t1

0x1d3d,	// (0x00048249) aid_touch_sctrl_bottom

0x1d4a,	// (0x00048256) bg_sctrl_sk_pane_cp_ParamLimits

0x1d4a,	// (0x00048256) bg_sctrl_sk_pane_cp

0x1d80,	// (0x0004828c) sctrl_sk_bottom_pane_g1

0x1d65,	// (0x00048271) sctrl_sk_bottom_pane_t1

0x82d6,	// (0x0004e7e2) cell_sctrl_middle_pane_ParamLimits

0x82d6,	// (0x0004e7e2) cell_sctrl_middle_pane

0x82e7,	// (0x0004e7f3) aid_touch_sctrl_middle_ParamLimits

0x82e7,	// (0x0004e7f3) aid_touch_sctrl_middle

0x82f4,	// (0x0004e800) bg_sctrl_middle_pane_ParamLimits

0x82f4,	// (0x0004e800) bg_sctrl_middle_pane

0x23f0,	// (0x000488fc) cell_sctrl_middle_pane_g1_ParamLimits

0x23f0,	// (0x000488fc) cell_sctrl_middle_pane_g1

0x8302,	// (0x0004e80e) cell_sctrl_middle_pane_g2_ParamLimits

0x8302,	// (0x0004e80e) cell_sctrl_middle_pane_g2

0x0001,

0xfc99,	// (0x000561a5) cell_sctrl_middle_pane_g_ParamLimits

0xfc99,	// (0x000561a5) cell_sctrl_middle_pane_g

0xcee8,	// (0x000533f4) bg_sctrl_middle_pane_g1

0xcef0,	// (0x000533fc) bg_sctrl_middle_pane_g2

0xcef8,	// (0x00053404) bg_sctrl_middle_pane_g3

0xcf00,	// (0x0005340c) bg_sctrl_middle_pane_g4

0xcf08,	// (0x00053414) bg_sctrl_middle_pane_g5

0xcf10,	// (0x0005341c) bg_sctrl_middle_pane_g6

0xcf18,	// (0x00053424) bg_sctrl_middle_pane_g7

0xcf20,	// (0x0005342c) bg_sctrl_middle_pane_g8

0x0007,

0xfc9e,	// (0x000561aa) bg_sctrl_middle_pane_g

0xcf28,	// (0x00053434) bg_sctrl_middle_pane_g8_copy1

0xcee8,	// (0x000533f4) bg_sctrl_sk_pane_g1

0xcef8,	// (0x00053404) bg_sctrl_sk_pane_g2

0xcef0,	// (0x000533fc) bg_sctrl_sk_pane_g3

0x0008,

0xf88e,	// (0x00055d9a) bg_sctrl_sk_pane_g

0xbd79,	// (0x00052285) aid_size_touch_scroll_bar

0xcf08,	// (0x00053414) bg_sctrl_sk_pane_g4

0xcf00,	// (0x0005340c) bg_sctrl_sk_pane_g5

0xcf10,	// (0x0005341c) bg_sctrl_sk_pane_g6

0xcf18,	// (0x00053424) bg_sctrl_sk_pane_g7

0xcf28,	// (0x00053434) bg_sctrl_sk_pane_g8

0xcf20,	// (0x0005342c) bg_sctrl_sk_pane_g9

0xcc1e,	// (0x0005312a) popup_fep_china_hwr2_fs_candidate_window

0x9132,	// (0x0004f63e) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x9132,	// (0x0004f63e) popup_fep_china_hwr2_fs_control_window

0x1b1c,	// (0x00048028) sctrl_sk_top_pane_g2

0x0001,

0xfc94,	// (0x000561a0) sctrl_sk_top_pane_g

0xa96e,	// (0x00050e7a) aid_fep_china_hwr2_fs_cell_ParamLimits

0xa96e,	// (0x00050e7a) aid_fep_china_hwr2_fs_cell

0xa982,	// (0x00050e8e) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xa982,	// (0x00050e8e) bg_popup_fep_shadow_pane_cp4

0xa999,	// (0x00050ea5) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xa999,	// (0x00050ea5) bg_popup_fep_shadow_pane_cp5

0xa9ab,	// (0x00050eb7) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xa9ab,	// (0x00050eb7) popup_fep_china_hwr2_fs_control_bar_grid

0xa9bf,	// (0x00050ecb) popup_fep_china_hwr2_fs_control_funtion_grid

0x548f,	// (0x0004b99b) aid_fep_china_hwr2_fs_candi_cell

0xb6c8,	// (0x00051bd4) bg_popup_fep_shadow_pane_cp6

0x5499,	// (0x0004b9a5) popup_fep_china_hwr2_fs_candidate_grid

0xa9c7,	// (0x00050ed3) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xa9c7,	// (0x00050ed3) cell_fep_china_hwr2_fs_funtion_grid

0xec9a,	// (0x000551a6) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x54bb,	// (0x0004b9c7) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x54bb,	// (0x0004b9c7) cell_fep_china_hwr2_fs_funtion_grid_g1

0x54c9,	// (0x0004b9d5) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x54c9,	// (0x0004b9d5) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfcaf,	// (0x000561bb) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfcaf,	// (0x000561bb) cell_fep_china_hwr2_fs_funtion_grid_g

0xa9df,	// (0x00050eeb) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xa9df,	// (0x00050eeb) cell_fep_china_hwr2_fs_funtion_grid_t1

0xa9f4,	// (0x00050f00) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xa9f4,	// (0x00050f00) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0x022a,	// (0x00046736) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0x022a,	// (0x00046736) cell_fep_china_hwr2_fs_funtion_grid_t

0x5510,	// (0x0004ba1c) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x5518,	// (0x0004ba24) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x5520,	// (0x0004ba2c) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfcb4,	// (0x000561c0) popup_fep_china_hwr2_fs_control_bar_grid_g

0x5528,	// (0x0004ba34) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x5528,	// (0x0004ba34) cell_fep_china_hwr2_fs_candidate_grid

0x5541,	// (0x0004ba4d) popup_fep_china_hwr2_fs_candidate_grid_g20

0x5549,	// (0x0004ba55) popup_fep_china_hwr2_fs_candidate_grid_g21

0xec9a,	// (0x000551a6) cell_fep_china_hwr2_fs_candidate_grid_g1

0xec9a,	// (0x000551a6) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0x0083,	// (0x0004658f) cell_fep_china_hwr2_fs_candidate_grid_g

0x5551,	// (0x0004ba5d) cell_fep_china_hwr2_fs_candidate_grid_t1

0xcd35,	// (0x00053241) clock_nsta_pane_cp_24_ParamLimits

0xcd35,	// (0x00053241) clock_nsta_pane_cp_24

0xcd9d,	// (0x000532a9) indicator_nsta_pane_cp_24_ParamLimits

0xcd9d,	// (0x000532a9) indicator_nsta_pane_cp_24

0xdadf,	// (0x00053feb) heading_pane_g1

0x0001,

0xf8f3,	// (0x00055dff) heading_pane_g

0xe19c,	// (0x000546a8) grid_sct_catagory_button_pane

0xd676,	// (0x00053b82) scroll_pane_cp5_ParamLimits

0xe9f8,	// (0x00054f04) button_value_adjust_pane_cp5_ParamLimits

0xe9f8,	// (0x00054f04) button_value_adjust_pane_cp5

0xeab6,	// (0x00054fc2) form2_midp_time_pane_ParamLimits

0x555f,	// (0x0004ba6b) cell_sct_catagory_button_pane_ParamLimits

0x555f,	// (0x0004ba6b) cell_sct_catagory_button_pane

0xec5f,	// (0x0005516b) bg_button_pane_cp01_ParamLimits

0xec5f,	// (0x0005516b) bg_button_pane_cp01

0xec9a,	// (0x000551a6) cell_sct_catagory_button_pane_g1

0x9681,	// (0x0004fb8d) popup_tb_extension_window

0xaa10,	// (0x00050f1c) aid_size_cell_ext_ParamLimits

0xaa10,	// (0x00050f1c) aid_size_cell_ext

0xbab4,	// (0x00051fc0) bg_tb_trans_pane_cp1_ParamLimits

0xbab4,	// (0x00051fc0) bg_tb_trans_pane_cp1

0xaa36,	// (0x00050f42) grid_tb_ext_pane_ParamLimits

0xaa36,	// (0x00050f42) grid_tb_ext_pane

0xaa71,	// (0x00050f7d) cell_tb_ext_pane_ParamLimits

0xaa71,	// (0x00050f7d) cell_tb_ext_pane

0xaa99,	// (0x00050fa5) cell_tb_ext_pane_g1_ParamLimits

0xaa99,	// (0x00050fa5) cell_tb_ext_pane_g1

0x55f3,	// (0x0004baff) cell_tb_ext_pane_t1

0xb86b,	// (0x00051d77) list_highlight_pane_cp11_ParamLimits

0xb86b,	// (0x00051d77) list_highlight_pane_cp11

0x077b,	// (0x00046c87) popup_uni_indicator_window_ParamLimits

0x077b,	// (0x00046c87) popup_uni_indicator_window

0xbe40,	// (0x0005234c) bg_popup_sub_pane_cp14

0x560e,	// (0x0004bb1a) list_uniindi_pane

0x561a,	// (0x0004bb26) uniindi_top_pane

0xb86b,	// (0x00051d77) bg_uniindi_top_pane

0x5639,	// (0x0004bb45) uniindi_top_pane_g1

0x564f,	// (0x0004bb5b) uniindi_top_pane_g2

0x0003,

0xfcbb,	// (0x000561c7) uniindi_top_pane_g

0x5679,	// (0x0004bb85) uniindi_top_pane_t1

0x56a3,	// (0x0004bbaf) list_single_uniindi_pane_ParamLimits

0x56a3,	// (0x0004bbaf) list_single_uniindi_pane

0xec9a,	// (0x000551a6) bg_uniindi_top_pane_g1

0x56b6,	// (0x0004bbc2) list_single_uniindi_pane_g1

0x56c9,	// (0x0004bbd5) list_single_uniindi_pane_t1

0x05f1,	// (0x00046afd) control_bg_pane

0x56ee,	// (0x0004bbfa) bg_sctrl_sk_pane_cp1

0x56f7,	// (0x0004bc03) bg_sctrl_sk_pane_cp2

0x5700,	// (0x0004bc0c) control_bg_pane_g1

0x5709,	// (0x0004bc15) control_bg_pane_g2

0x0001,

0xfcc4,	// (0x000561d0) control_bg_pane_g

0xe907,	// (0x00054e13) cell_indicator_nsta_pane_g1_ParamLimits

0xa100,	// (0x0005060c) cell_indicator_nsta_pane_g2_ParamLimits

0xfac7,	// (0x00055fd3) cell_indicator_nsta_pane_g_ParamLimits

0x35cd,	// (0x00049ad9) form2_midp_time_pane_t1_ParamLimits

0xe63f,	// (0x00054b4b) main_idle_act4_pane_ParamLimits

0xe63f,	// (0x00054b4b) main_idle_act4_pane

0x9681,	// (0x0004fb8d) popup_tb_extension_window_ParamLimits

0xaa58,	// (0x00050f64) tb_ext_find_pane_ParamLimits

0xaa58,	// (0x00050f64) tb_ext_find_pane

0x5712,	// (0x0004bc1e) ai_gene_pane_1_cp1

0xca24,	// (0x00052f30) ai_gene_pane_2_cp1

0x571a,	// (0x0004bc26) list_single_idle_plugin_calendar_pane

0x5723,	// (0x0004bc2f) list_single_idle_plugin_notification_pane

0x572c,	// (0x0004bc38) list_single_idle_plugin_player_pane

0xaab6,	// (0x00050fc2) list_single_idle_plugin_shortcut_pane_ParamLimits

0xaab6,	// (0x00050fc2) list_single_idle_plugin_shortcut_pane

0xaade,	// (0x00050fea) main_idle_act4_pane_t1

0xaaf4,	// (0x00051000) main_idle_act4_pane_t2

0x0001,

0x0244,	// (0x00046750) main_idle_act4_pane_t

0xab0a,	// (0x00051016) middle_sk_idle_act4_pane_ParamLimits

0xab0a,	// (0x00051016) middle_sk_idle_act4_pane

0xab26,	// (0x00051032) popup_clock_digital_analogue_window_cp2

0xab4e,	// (0x0005105a) shortcut_wheel_idle_act4_pane_ParamLimits

0xab4e,	// (0x0005105a) shortcut_wheel_idle_act4_pane

0xec9a,	// (0x000551a6) shortcut_wheel_idle_act4_pane_g1

0xec9a,	// (0x000551a6) shortcut_wheel_idle_act4_pane_g2

0xec9a,	// (0x000551a6) shortcut_wheel_idle_act4_pane_g3

0xec9a,	// (0x000551a6) shortcut_wheel_idle_act4_pane_g4

0xec9a,	// (0x000551a6) shortcut_wheel_idle_act4_pane_g5

0x57bf,	// (0x0004bccb) shortcut_wheel_idle_act4_pane_g6

0x57c7,	// (0x0004bcd3) shortcut_wheel_idle_act4_pane_g7

0x57cf,	// (0x0004bcdb) shortcut_wheel_idle_act4_pane_g8

0x57d7,	// (0x0004bce3) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfcc9,	// (0x000561d5) shortcut_wheel_idle_act4_pane_g

0x8c14,	// (0x0004f120) middle_sk_idle_act4_pane_g1_ParamLimits

0x8c14,	// (0x0004f120) middle_sk_idle_act4_pane_g1

0xabcb,	// (0x000510d7) middle_sk_idle_act4_pane_g2_ParamLimits

0xabcb,	// (0x000510d7) middle_sk_idle_act4_pane_g2

0x0001,

0xfce7,	// (0x000561f3) middle_sk_idle_act4_pane_g_ParamLimits

0xfce7,	// (0x000561f3) middle_sk_idle_act4_pane_g

0xabe3,	// (0x000510ef) middle_sk_idle_act4_pane_t1_ParamLimits

0xabe3,	// (0x000510ef) middle_sk_idle_act4_pane_t1

0xac12,	// (0x0005111e) grid_ai_shortcut_pane_ParamLimits

0xac12,	// (0x0005111e) grid_ai_shortcut_pane

0xac3c,	// (0x00051148) list_highlight_pane_cp16_ParamLimits

0xac3c,	// (0x00051148) list_highlight_pane_cp16

0xac49,	// (0x00051155) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xac49,	// (0x00051155) list_single_idle_plugin_shortcut_pane_g1

0xac55,	// (0x00051161) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xac55,	// (0x00051161) list_single_idle_plugin_shortcut_pane_g2

0xac71,	// (0x0005117d) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xac71,	// (0x0005117d) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfcec,	// (0x000561f8) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfcec,	// (0x000561f8) list_single_idle_plugin_shortcut_pane_g

0xac86,	// (0x00051192) cell_ai_shortcut_pane_ParamLimits

0xac86,	// (0x00051192) cell_ai_shortcut_pane

0xac9c,	// (0x000511a8) cell_ai_shortcut_pane_g1_ParamLimits

0xac9c,	// (0x000511a8) cell_ai_shortcut_pane_g1

0x5712,	// (0x0004bc1e) ai_gene_pane_1_cp2

0x5907,	// (0x0004be13) ai_gene_pane_2_cp2

0x590f,	// (0x0004be1b) list_highlight_pane_cp15

0x5918,	// (0x0004be24) list_single_idle_plugin_calendar_pane_g1

0x590f,	// (0x0004be1b) list_highlight_pane_cp17

0x5920,	// (0x0004be2c) list_single_idle_plugin_calendar_pane_g1_copy1

0x5928,	// (0x0004be34) list_single_idle_plugin_player_pane_g1

0xe39b,	// (0x000548a7) list_single_idle_plugin_player_pane_g2

0x0001,

0xfcf3,	// (0x000561ff) list_single_idle_plugin_player_pane_g

0x5930,	// (0x0004be3c) list_single_idle_plugin_player_pane_t1

0x593e,	// (0x0004be4a) list_single_idle_plugin_player_pane_t2

0x594c,	// (0x0004be58) list_single_idle_plugin_player_pane_t3

0x595a,	// (0x0004be66) list_single_idle_plugin_player_pane_t4

0x0003,

0xfcf8,	// (0x00056204) list_single_idle_plugin_player_pane_t

0x5968,	// (0x0004be74) wait_bar_pane_cp15

0x5970,	// (0x0004be7c) grid_ai_notification_pane

0xe39b,	// (0x000548a7) list_single_idle_plugin_notification_pane_g1

0xacbe,	// (0x000511ca) cell_ai_notification_pane_ParamLimits

0xacbe,	// (0x000511ca) cell_ai_notification_pane

0x5986,	// (0x0004be92) cell_ai_notification_pane_g1

0x598e,	// (0x0004be9a) cell_ai_notification_pane_t1

0xaccb,	// (0x000511d7) tb_ext_find_button_pane

0xacd3,	// (0x000511df) tb_ext_find_pane_g1

0xacdb,	// (0x000511e7) tb_ext_find_pane_t1

0xc4ac,	// (0x000529b8) tb_ext_find_button_pane_g1

0x59ba,	// (0x0004bec6) tb_ext_find_button_pane_g2

0x0001,

0xfd01,	// (0x0005620d) tb_ext_find_button_pane_g

0xaade,	// (0x00050fea) main_idle_act4_pane_t1_ParamLimits

0xaaf4,	// (0x00051000) main_idle_act4_pane_t2_ParamLimits

0x0244,	// (0x00046750) main_idle_act4_pane_t_ParamLimits

0xab26,	// (0x00051032) popup_clock_digital_analogue_window_cp2_ParamLimits

0xab3e,	// (0x0005104a) sat_plugin_idle_act4_pane_ParamLimits

0xab3e,	// (0x0005104a) sat_plugin_idle_act4_pane

0xace9,	// (0x000511f5) sat_plugin_idle_act4_pane_t1_ParamLimits

0xace9,	// (0x000511f5) sat_plugin_idle_act4_pane_t1

0xad01,	// (0x0005120d) sat_plugin_idle_act4_pane_t2_ParamLimits

0xad01,	// (0x0005120d) sat_plugin_idle_act4_pane_t2

0xad19,	// (0x00051225) sat_plugin_idle_act4_pane_t3_ParamLimits

0xad19,	// (0x00051225) sat_plugin_idle_act4_pane_t3

0xad31,	// (0x0005123d) sat_plugin_idle_act4_pane_t4_ParamLimits

0xad31,	// (0x0005123d) sat_plugin_idle_act4_pane_t4

0x0003,

0x028b,	// (0x00046797) sat_plugin_idle_act4_pane_t_ParamLimits

0x028b,	// (0x00046797) sat_plugin_idle_act4_pane_t

0x06b6,	// (0x00046bc2) popup_battery_window_ParamLimits

0x06b6,	// (0x00046bc2) popup_battery_window

0xb86b,	// (0x00051d77) bg_popup_sub_pane_cp25_ParamLimits

0xb86b,	// (0x00051d77) bg_popup_sub_pane_cp25

0x5a0f,	// (0x0004bf1b) popup_battery_window_g1_ParamLimits

0x5a0f,	// (0x0004bf1b) popup_battery_window_g1

0x5a1b,	// (0x0004bf27) popup_battery_window_t1_ParamLimits

0x5a1b,	// (0x0004bf27) popup_battery_window_t1

0x5a2d,	// (0x0004bf39) popup_battery_window_t2_ParamLimits

0x5a2d,	// (0x0004bf39) popup_battery_window_t2

0x0001,

0xfd06,	// (0x00056212) popup_battery_window_t_ParamLimits

0xfd06,	// (0x00056212) popup_battery_window_t

0x8fb1,	// (0x0004f4bd) midp_canvas_pane_ParamLimits

0x900c,	// (0x0004f518) midp_keypad_pane_ParamLimits

0x900c,	// (0x0004f518) midp_keypad_pane

0xbf98,	// (0x000524a4) main_midp_pane_ParamLimits

0xe9b1,	// (0x00054ebd) signal_pane_g2_cp_ParamLimits

0xad49,	// (0x00051255) aid_size_cell_midp_keypad_ParamLimits

0xad49,	// (0x00051255) aid_size_cell_midp_keypad

0xad67,	// (0x00051273) midp_keyp_game_grid_pane_ParamLimits

0xad67,	// (0x00051273) midp_keyp_game_grid_pane

0xad8e,	// (0x0005129a) midp_keyp_rocker_pane_ParamLimits

0xad8e,	// (0x0005129a) midp_keyp_rocker_pane

0xade7,	// (0x000512f3) midp_keyp_sk_left_pane_ParamLimits

0xade7,	// (0x000512f3) midp_keyp_sk_left_pane

0xae3b,	// (0x00051347) midp_keyp_sk_right_pane_ParamLimits

0xae3b,	// (0x00051347) midp_keyp_sk_right_pane

0xb6c8,	// (0x00051bd4) bg_button_pane_cp03

0xae8f,	// (0x0005139b) midp_keyp_sk_left_pane_g1

0xb6c8,	// (0x00051bd4) bg_button_pane_cp04

0xae8f,	// (0x0005139b) midp_keyp_sk_right_pane_g1

0xec9a,	// (0x000551a6) midp_keyp_rocker_pane_g1

0xae98,	// (0x000513a4) keyp_game_cell_pane_ParamLimits

0xae98,	// (0x000513a4) keyp_game_cell_pane

0xb6c8,	// (0x00051bd4) bg_button_pane_cp02

0xaebc,	// (0x000513c8) keyp_game_cell_pane_g1

0x794b,	// (0x0004de57) popup_fep_vkb2_window_ParamLimits

0x794b,	// (0x0004de57) popup_fep_vkb2_window

0x830e,	// (0x0004e81a) aid_size_cell_vkb2_ParamLimits

0x830e,	// (0x0004e81a) aid_size_cell_vkb2

0x8344,	// (0x0004e850) popup_fep_vkb2_window_g1_ParamLimits

0x8344,	// (0x0004e850) popup_fep_vkb2_window_g1

0x8394,	// (0x0004e8a0) vkb2_area_bottom_pane_ParamLimits

0x8394,	// (0x0004e8a0) vkb2_area_bottom_pane

0x83e8,	// (0x0004e8f4) vkb2_area_keypad_pane_ParamLimits

0x83e8,	// (0x0004e8f4) vkb2_area_keypad_pane

0x8430,	// (0x0004e93c) vkb2_area_top_pane_ParamLimits

0x8430,	// (0x0004e93c) vkb2_area_top_pane

0x84b6,	// (0x0004e9c2) vkb2_top_entry_pane_ParamLimits

0x84b6,	// (0x0004e9c2) vkb2_top_entry_pane

0x84e3,	// (0x0004e9ef) vkb2_top_grid_left_pane_ParamLimits

0x84e3,	// (0x0004e9ef) vkb2_top_grid_left_pane

0x8503,	// (0x0004ea0f) vkb2_top_grid_right_pane_ParamLimits

0x8503,	// (0x0004ea0f) vkb2_top_grid_right_pane

0x1fef,	// (0x000484fb) vkb2_cell_keypad_pane_ParamLimits

0x1fef,	// (0x000484fb) vkb2_cell_keypad_pane

0x8549,	// (0x0004ea55) vkb2_area_bottom_grid_pane_ParamLimits

0x8549,	// (0x0004ea55) vkb2_area_bottom_grid_pane

0x8573,	// (0x0004ea7f) vkb2_area_bottom_pane_g1_ParamLimits

0x8573,	// (0x0004ea7f) vkb2_area_bottom_pane_g1

0x8599,	// (0x0004eaa5) vkb2_area_bottom_pane_g2_ParamLimits

0x8599,	// (0x0004eaa5) vkb2_area_bottom_pane_g2

0x85ca,	// (0x0004ead6) vkb2_area_bottom_pane_g3_ParamLimits

0x85ca,	// (0x0004ead6) vkb2_area_bottom_pane_g3

0x0002,

0xfd0b,	// (0x00056217) vkb2_area_bottom_pane_g_ParamLimits

0xfd0b,	// (0x00056217) vkb2_area_bottom_pane_g

0x2199,	// (0x000486a5) vkb2_top_cell_left_pane_ParamLimits

0x2199,	// (0x000486a5) vkb2_top_cell_left_pane

0xaec5,	// (0x000513d1) vkb2_top_entry_pane_g1_ParamLimits

0xaec5,	// (0x000513d1) vkb2_top_entry_pane_g1

0xaed3,	// (0x000513df) vkb2_top_entry_pane_t1_ParamLimits

0xaed3,	// (0x000513df) vkb2_top_entry_pane_t1

0x5bde,	// (0x0004c0ea) vkb2_top_entry_pane_t2_ParamLimits

0x5bde,	// (0x0004c0ea) vkb2_top_entry_pane_t2

0x5c10,	// (0x0004c11c) vkb2_top_entry_pane_t3_ParamLimits

0x5c10,	// (0x0004c11c) vkb2_top_entry_pane_t3

0x0002,

0xfd12,	// (0x0005621e) vkb2_top_entry_pane_t_ParamLimits

0xfd12,	// (0x0005621e) vkb2_top_entry_pane_t

0x8634,	// (0x0004eb40) vkb2_top_grid_right_pane_g1_ParamLimits

0x8634,	// (0x0004eb40) vkb2_top_grid_right_pane_g1

0x21fc,	// (0x00048708) vkb2_top_grid_right_pane_g2_ParamLimits

0x21fc,	// (0x00048708) vkb2_top_grid_right_pane_g2

0x2214,	// (0x00048720) vkb2_top_grid_right_pane_g3_ParamLimits

0x2214,	// (0x00048720) vkb2_top_grid_right_pane_g3

0x864a,	// (0x0004eb56) vkb2_top_grid_right_pane_g4_ParamLimits

0x864a,	// (0x0004eb56) vkb2_top_grid_right_pane_g4

0x0003,

0xfd19,	// (0x00056225) vkb2_top_grid_right_pane_g_ParamLimits

0xfd19,	// (0x00056225) vkb2_top_grid_right_pane_g

0x2242,	// (0x0004874e) vkb2_top_cell_left_pane_g1

0x2259,	// (0x00048765) vkb2_cell_keypad_pane_g1_ParamLimits

0x2259,	// (0x00048765) vkb2_cell_keypad_pane_g1

0x5c34,	// (0x0004c140) vkb2_cell_keypad_pane_t1_ParamLimits

0x5c34,	// (0x0004c140) vkb2_cell_keypad_pane_t1

0x2267,	// (0x00048773) vkb2_cell_bottom_grid_pane_ParamLimits

0x2267,	// (0x00048773) vkb2_cell_bottom_grid_pane

0x22a0,	// (0x000487ac) vkb2_cell_bottom_grid_pane_g1

0xab6f,	// (0x0005107b) aid_call2_pane_cp02

0xab77,	// (0x00051083) aid_call_pane_cp02

0xab7f,	// (0x0005108b) clock_digital_number_pane_cp10

0xab87,	// (0x00051093) clock_digital_number_pane_cp11

0xab8f,	// (0x0005109b) clock_digital_number_pane_cp12

0xab97,	// (0x000510a3) clock_digital_number_pane_cp13

0xab9f,	// (0x000510ab) clock_digital_separator_pane_cp10

0xc4ac,	// (0x000529b8) popup_clock_digital_analogue_window_cp2_g1

0xc4ac,	// (0x000529b8) popup_clock_digital_analogue_window_cp2_g2

0xaba7,	// (0x000510b3) popup_clock_digital_analogue_window_cp2_g3

0xc4ac,	// (0x000529b8) popup_clock_digital_analogue_window_cp2_g4

0xaba7,	// (0x000510b3) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfcdc,	// (0x000561e8) popup_clock_digital_analogue_window_cp2_g

0xabaf,	// (0x000510bb) popup_clock_digital_analogue_window_cp2_t1

0xabbd,	// (0x000510c9) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0x0267,	// (0x00046773) popup_clock_digital_analogue_window_cp2_t

0xec9a,	// (0x000551a6) clock_digital_number_pane_cp10_g1

0xec9a,	// (0x000551a6) clock_digital_number_pane_cp10_g2

0x0001,

0x0083,	// (0x0004658f) clock_digital_number_pane_cp10_g

0xec9a,	// (0x000551a6) clock_digital_separator_pane_cp10_g1

0xec9a,	// (0x000551a6) clock_digital_separator_pane_cp10_g2

0x0001,

0x0083,	// (0x0004658f) clock_digital_separator_pane_cp10_g

0x565b,	// (0x0004bb67) uniindi_top_pane_g3

0x566c,	// (0x0004bb78) uniindi_top_pane_g4

0x207a,	// (0x00048586) vkb2_row_keypad_pane_ParamLimits

0x207a,	// (0x00048586) vkb2_row_keypad_pane

0x22bc,	// (0x000487c8) vkb2_cell_t_keypad_pane_ParamLimits

0x22bc,	// (0x000487c8) vkb2_cell_t_keypad_pane

0x22cc,	// (0x000487d8) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x22cc,	// (0x000487d8) vkb2_cell_t_keypad_pane_cp08

0x22df,	// (0x000487eb) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x22df,	// (0x000487eb) vkb2_cell_t_keypad_pane_cp09

0x22f3,	// (0x000487ff) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x22f3,	// (0x000487ff) vkb2_cell_t_keypad_pane_cp01

0x2304,	// (0x00048810) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x2304,	// (0x00048810) vkb2_cell_t_keypad_pane_cp02

0x2315,	// (0x00048821) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x2315,	// (0x00048821) vkb2_cell_t_keypad_pane_cp03

0x2326,	// (0x00048832) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x2326,	// (0x00048832) vkb2_cell_t_keypad_pane_cp04

0x2337,	// (0x00048843) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x2337,	// (0x00048843) vkb2_cell_t_keypad_pane_cp05

0x2348,	// (0x00048854) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x2348,	// (0x00048854) vkb2_cell_t_keypad_pane_cp06

0x2359,	// (0x00048865) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x2359,	// (0x00048865) vkb2_cell_t_keypad_pane_cp07

0x236a,	// (0x00048876) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x236a,	// (0x00048876) vkb2_cell_t_keypad_pane_cp10

0x1b1c,	// (0x00048028) vkb2_cell_t_keypad_pane_g1

0x5c4b,	// (0x0004c157) vkb2_cell_t_keypad_pane_t1

0x05f1,	// (0x00046afd) popup_grid_graphic2_window

0xaf0c,	// (0x00051418) aid_size_cell_graphic2_ParamLimits

0xaf0c,	// (0x00051418) aid_size_cell_graphic2

0xd46f,	// (0x0005397b) bg_popup_window_pane_cp21_ParamLimits

0xd46f,	// (0x0005397b) bg_popup_window_pane_cp21

0xaf3e,	// (0x0005144a) graphic2_pages_pane_ParamLimits

0xaf3e,	// (0x0005144a) graphic2_pages_pane

0xaf94,	// (0x000514a0) grid_graphic2_control_pane_ParamLimits

0xaf94,	// (0x000514a0) grid_graphic2_control_pane

0xafc8,	// (0x000514d4) grid_graphic2_pane_ParamLimits

0xafc8,	// (0x000514d4) grid_graphic2_pane

0xb03b,	// (0x00051547) cell_graphic2_pane

0xb6c8,	// (0x00051bd4) main_comp_mode_pane

0x4edb,	// (0x0004b3e7) list_ai3_gene_pane_ParamLimits

0xa8b6,	// (0x00050dc2) bg_popup_window_pane_cp19_ParamLimits

0x52b1,	// (0x0004b7bd) bg_touch_area_indi_pane_ParamLimits

0x52b1,	// (0x0004b7bd) bg_touch_area_indi_pane

0x52c7,	// (0x0004b7d3) bg_touch_area_indi_pane_cp01_ParamLimits

0x52c7,	// (0x0004b7d3) bg_touch_area_indi_pane_cp01

0x52dd,	// (0x0004b7e9) bg_touch_area_indi_pane_cp02_ParamLimits

0x52dd,	// (0x0004b7e9) bg_touch_area_indi_pane_cp02

0x52f5,	// (0x0004b801) bg_touch_area_indi_pane_cp03_ParamLimits

0x52f5,	// (0x0004b801) bg_touch_area_indi_pane_cp03

0x530f,	// (0x0004b81b) popup_slider_window_g1_ParamLimits

0x532b,	// (0x0004b837) popup_slider_window_g2_ParamLimits

0x5347,	// (0x0004b853) popup_slider_window_g3_ParamLimits

0xfc7b,	// (0x00056187) popup_slider_window_g_ParamLimits

0x53a3,	// (0x0004b8af) popup_slider_window_t1_ParamLimits

0x5417,	// (0x0004b923) small_volume_slider_vertical_pane_ParamLimits

0xb03b,	// (0x00051547) cell_graphic2_pane_ParamLimits

0xb096,	// (0x000515a2) bg_button_pane_cp10_ParamLimits

0xb096,	// (0x000515a2) bg_button_pane_cp10

0xb0a9,	// (0x000515b5) bg_button_pane_cp11_ParamLimits

0xb0a9,	// (0x000515b5) bg_button_pane_cp11

0xb0bc,	// (0x000515c8) graphic2_pages_pane_g1_ParamLimits

0xb0bc,	// (0x000515c8) graphic2_pages_pane_g1

0xb0d7,	// (0x000515e3) graphic2_pages_pane_g2_ParamLimits

0xb0d7,	// (0x000515e3) graphic2_pages_pane_g2

0x0001,

0x02b5,	// (0x000467c1) graphic2_pages_pane_g_ParamLimits

0x02b5,	// (0x000467c1) graphic2_pages_pane_g

0xb0ef,	// (0x000515fb) graphic2_pages_pane_t1_ParamLimits

0xb0ef,	// (0x000515fb) graphic2_pages_pane_t1

0xb107,	// (0x00051613) cell_graphic2_control_pane_ParamLimits

0xb107,	// (0x00051613) cell_graphic2_control_pane

0xb121,	// (0x0005162d) cell_graphic2_pane_g1_ParamLimits

0xb121,	// (0x0005162d) cell_graphic2_pane_g1

0x914e,	// (0x0004f65a) cell_graphic2_pane_g2_ParamLimits

0x914e,	// (0x0004f65a) cell_graphic2_pane_g2

0xac2f,	// (0x0005113b) cell_graphic2_pane_g3_ParamLimits

0xac2f,	// (0x0005113b) cell_graphic2_pane_g3

0x915b,	// (0x0004f667) cell_graphic2_pane_g4_ParamLimits

0x915b,	// (0x0004f667) cell_graphic2_pane_g4

0xb12e,	// (0x0005163a) cell_graphic2_pane_g5_ParamLimits

0xb12e,	// (0x0005163a) cell_graphic2_pane_g5

0x0004,

0xfd22,	// (0x0005622e) cell_graphic2_pane_g_ParamLimits

0xfd22,	// (0x0005622e) cell_graphic2_pane_g

0xb14e,	// (0x0005165a) cell_graphic2_pane_t1_ParamLimits

0xb14e,	// (0x0005165a) cell_graphic2_pane_t1

0xdad3,	// (0x00053fdf) grid_highlight_pane_cp11_ParamLimits

0xdad3,	// (0x00053fdf) grid_highlight_pane_cp11

0xbe40,	// (0x0005234c) bg_button_pane_cp05

0xb165,	// (0x00051671) cell_graphic2_control_pane_g1

0xec9a,	// (0x000551a6) bg_touch_area_indi_pane_g1

0x5eca,	// (0x0004c3d6) aid_cmod_rocker_key_size

0x5ed4,	// (0x0004c3e0) aid_cmode_itu_key_size

0x5ede,	// (0x0004c3ea) main_cmode_video_pane

0x5ee8,	// (0x0004c3f4) main_comp_mode_itu_pane

0x5ef4,	// (0x0004c400) main_comp_mode_rocker_pane

0x5f00,	// (0x0004c40c) cell_cmode_rocker_pane_ParamLimits

0x5f00,	// (0x0004c40c) cell_cmode_rocker_pane

0x5f12,	// (0x0004c41e) cell_cmode_itu_pane_ParamLimits

0x5f12,	// (0x0004c41e) cell_cmode_itu_pane

0xbe40,	// (0x0005234c) bg_button_pane_cp06_ParamLimits

0xbe40,	// (0x0005234c) bg_button_pane_cp06

0xee41,	// (0x0005534d) cell_cmode_rocker_pane_g1_ParamLimits

0xee41,	// (0x0005534d) cell_cmode_rocker_pane_g1

0x54bb,	// (0x0004b9c7) cell_cmode_rocker_pane_g2_ParamLimits

0x54bb,	// (0x0004b9c7) cell_cmode_rocker_pane_g2

0x0001,

0xfd2d,	// (0x00056239) cell_cmode_rocker_pane_g_ParamLimits

0xfd2d,	// (0x00056239) cell_cmode_rocker_pane_g

0xb6c8,	// (0x00051bd4) bg_button_pane_cp07

0x5f27,	// (0x0004c433) cell_cmode_itu_pane_g1

0x5f30,	// (0x0004c43c) cell_cmode_itu_pane_t1

0x5f3e,	// (0x0004c44a) cell_cmode_itu_pane_t2

0x0001,

0xfd32,	// (0x0005623e) cell_cmode_itu_pane_t

0x56de,	// (0x0004bbea) aid_touch_ctrl_left

0x56e6,	// (0x0004bbf2) aid_touch_ctrl_right

0xb6c8,	// (0x00051bd4) compa_mode_pane

0xb172,	// (0x0005167e) aid_cmod_rocker_key_size_cp

0xb17c,	// (0x00051688) aid_cmode_itu_key_size_cp

0x5f60,	// (0x0004c46c) compa_mode_pane_g1

0x5f68,	// (0x0004c474) compa_mode_pane_g2

0x5f70,	// (0x0004c47c) compa_mode_pane_g3

0x0002,

0xfd37,	// (0x00056243) compa_mode_pane_g

0xb186,	// (0x00051692) main_comp_mode_itu_pane_cp

0xb18e,	// (0x0005169a) main_comp_mode_rocker_pane_cp

0xb196,	// (0x000516a2) cell_cmode_itu_pane_cp_ParamLimits

0xb196,	// (0x000516a2) cell_cmode_itu_pane_cp

0xb1ab,	// (0x000516b7) cell_cmode_rocker_pane_cp_ParamLimits

0xb1ab,	// (0x000516b7) cell_cmode_rocker_pane_cp

0xbe40,	// (0x0005234c) bg_button_pane_cp06_cp_ParamLimits

0xbe40,	// (0x0005234c) bg_button_pane_cp06_cp

0xee41,	// (0x0005534d) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xee41,	// (0x0005534d) cell_cmode_rocker_pane_g1_cp

0xec9a,	// (0x000551a6) cell_cmode_rocker_pane_g2_cp

0xb6c8,	// (0x00051bd4) bg_button_pane_cp07_cp

0xb1bd,	// (0x000516c9) cell_cmode_itu_pane_g1_cp

0xb1c6,	// (0x000516d2) cell_cmode_itu_pane_t1_cp

0xb1c6,	// (0x000516d2) cell_cmode_itu_pane_t2_cp

0x9efd,	// (0x00050409) settings_code_pane_cp2

0xb738,	// (0x00051c44) bg_popup_window_pane_cp3_ParamLimits

0xba45,	// (0x00051f51) heading_pane_cp3_ParamLimits

0xba51,	// (0x00051f5d) listscroll_popup_graphic_pane_ParamLimits

0x18c5,	// (0x00047dd1) fep_hwr_aid_pane_ParamLimits

0x1d3d,	// (0x00048249) aid_touch_sctrl_top_ParamLimits

0x1d58,	// (0x00048264) sctrl_sk_top_pane_g1_ParamLimits

0x1b1c,	// (0x00048028) sctrl_sk_top_pane_g2_ParamLimits

0xfc94,	// (0x000561a0) sctrl_sk_top_pane_g_ParamLimits

0x1d65,	// (0x00048271) sctrl_sk_top_pane_t1_ParamLimits

0x1d3d,	// (0x00048249) aid_touch_sctrl_bottom_ParamLimits

0x1d65,	// (0x00048271) sctrl_sk_bottom_pane_t1_ParamLimits

0x5627,	// (0x0004bb33) aid_area_touch_clock

0x8478,	// (0x0004e984) aid_vkb2_area_top_pane_cell_ParamLimits

0x8478,	// (0x0004e984) aid_vkb2_area_top_pane_cell

0x8523,	// (0x0004ea2f) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x8523,	// (0x0004ea2f) aid_vkb2_area_bottom_pane_cell

0x5b96,	// (0x0004c0a2) popup_char_count_window

0x5fbd,	// (0x0004c4c9) popup_char_count_window_g1

0x5fc6,	// (0x0004c4d2) popup_char_count_window_g2

0x5fcf,	// (0x0004c4db) popup_char_count_window_g3

0x0002,

0xfd3e,	// (0x0005624a) popup_char_count_window_g

0x5fd8,	// (0x0004c4e4) popup_char_count_window_t1

0x1e17,	// (0x00048323) popup_fep_char_preview_window_ParamLimits

0x1e17,	// (0x00048323) popup_fep_char_preview_window

0x8498,	// (0x0004e9a4) vkb2_top_candi_pane_ParamLimits

0x8498,	// (0x0004e9a4) vkb2_top_candi_pane

0xb1d4,	// (0x000516e0) cell_vkb2_top_candi_pane_ParamLimits

0xb1d4,	// (0x000516e0) cell_vkb2_top_candi_pane

0x237f,	// (0x0004888b) bg_popup_fep_char_preview_window_ParamLimits

0x237f,	// (0x0004888b) bg_popup_fep_char_preview_window

0x238d,	// (0x00048899) popup_fep_char_preview_window_t1_ParamLimits

0x238d,	// (0x00048899) popup_fep_char_preview_window_t1

0x6033,	// (0x0004c53f) bg_popup_fep_char_preview_window_g1

0x603b,	// (0x0004c547) bg_popup_fep_char_preview_window_g2

0x6043,	// (0x0004c54f) bg_popup_fep_char_preview_window_g3

0x604b,	// (0x0004c557) bg_popup_fep_char_preview_window_g4

0x6053,	// (0x0004c55f) bg_popup_fep_char_preview_window_g5

0x23c7,	// (0x000488d3) bg_popup_fep_char_preview_window_g6

0x605b,	// (0x0004c567) bg_popup_fep_char_preview_window_g7

0x6063,	// (0x0004c56f) bg_popup_fep_char_preview_window_g8

0x606b,	// (0x0004c577) bg_popup_fep_char_preview_window_g9

0x0008,

0xfd45,	// (0x00056251) bg_popup_fep_char_preview_window_g

0x1b1c,	// (0x00048028) cell_vkb2_top_candi_pane_g1_ParamLimits

0x1b1c,	// (0x00048028) cell_vkb2_top_candi_pane_g1

0x1b2a,	// (0x00048036) cell_vkb2_top_candi_pane_g2_ParamLimits

0x1b2a,	// (0x00048036) cell_vkb2_top_candi_pane_g2

0x5cfd,	// (0x0004c209) cell_vkb2_top_candi_pane_g3_ParamLimits

0x5cfd,	// (0x0004c209) cell_vkb2_top_candi_pane_g3

0x23cf,	// (0x000488db) cell_vkb2_top_candi_pane_g4_ParamLimits

0x23cf,	// (0x000488db) cell_vkb2_top_candi_pane_g4

0xf0a1,	// (0x000555ad) cell_vkb2_top_candi_pane_g5_ParamLimits

0xf0a1,	// (0x000555ad) cell_vkb2_top_candi_pane_g5

0x23f0,	// (0x000488fc) cell_vkb2_top_candi_pane_g6_ParamLimits

0x23f0,	// (0x000488fc) cell_vkb2_top_candi_pane_g6

0x0005,

0xfd58,	// (0x00056264) cell_vkb2_top_candi_pane_g_ParamLimits

0xfd58,	// (0x00056264) cell_vkb2_top_candi_pane_g

0x23fe,	// (0x0004890a) cell_vkb2_top_candi_pane_t1

0x1725,	// (0x00047c31) aid_size_touch_slider_mark_ParamLimits

0x1725,	// (0x00047c31) aid_size_touch_slider_mark

0xaf7a,	// (0x00051486) grid_graphic2_catg_pane_ParamLimits

0xaf7a,	// (0x00051486) grid_graphic2_catg_pane

0xb00e,	// (0x0005151a) popup_grid_graphic2_window_t1_ParamLimits

0xb00e,	// (0x0005151a) popup_grid_graphic2_window_t1

0xb024,	// (0x00051530) popup_grid_graphic2_window_t2_ParamLimits

0xb024,	// (0x00051530) popup_grid_graphic2_window_t2

0x0001,

0x02b0,	// (0x000467bc) popup_grid_graphic2_window_t_ParamLimits

0x02b0,	// (0x000467bc) popup_grid_graphic2_window_t

0xbe40,	// (0x0005234c) bg_button_pane_cp05_ParamLimits

0xb165,	// (0x00051671) cell_graphic2_control_pane_g1_ParamLimits

0xb23a,	// (0x00051746) cell_graphic2_catg_pane_ParamLimits

0xb23a,	// (0x00051746) cell_graphic2_catg_pane

0xb6c8,	// (0x00051bd4) bg_button_pane_cp12

0xb24c,	// (0x00051758) cell_graphic2_catg_pane_g1

0x55f3,	// (0x0004baff) cell_tb_ext_pane_t1_ParamLimits

0x21b9,	// (0x000486c5) vkb2_top_cell_right_narrow_pane_ParamLimits

0x21b9,	// (0x000486c5) vkb2_top_cell_right_narrow_pane

0x21d1,	// (0x000486dd) vkb2_top_cell_right_wide_pane_ParamLimits

0x21d1,	// (0x000486dd) vkb2_top_cell_right_wide_pane

0x18b7,	// (0x00047dc3) bg_vkb2_func_pane_ParamLimits

0x18b7,	// (0x00047dc3) bg_vkb2_func_pane

0x2242,	// (0x0004874e) vkb2_top_cell_left_pane_g1_ParamLimits

0x18b7,	// (0x00047dc3) bg_vkb2_fuc_pane_cp03_ParamLimits

0x18b7,	// (0x00047dc3) bg_vkb2_fuc_pane_cp03

0x22a0,	// (0x000487ac) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0xcef0,	// (0x000533fc) bg_vkb2_func_pane_g1

0xcef8,	// (0x00053404) bg_vkb2_func_pane_g2

0xcf08,	// (0x00053414) bg_vkb2_func_pane_g3

0xcf00,	// (0x0005340c) bg_vkb2_func_pane_g4

0xcf10,	// (0x0005341c) bg_vkb2_func_pane_g5

0xcf18,	// (0x00053424) bg_vkb2_func_pane_g6

0xcf20,	// (0x0005342c) bg_vkb2_func_pane_g7

0xcf28,	// (0x00053434) bg_vkb2_func_pane_g8

0xcee8,	// (0x000533f4) bg_vkb2_func_pane_g9

0x0008,

0xfd65,	// (0x00056271) bg_vkb2_func_pane_g

0x18b7,	// (0x00047dc3) bg_vkb2_fuc_pane_cp01_ParamLimits

0x18b7,	// (0x00047dc3) bg_vkb2_fuc_pane_cp01

0x2242,	// (0x0004874e) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x2242,	// (0x0004874e) vkb2_top_cell_right_wide_pane_g1

0x18b7,	// (0x00047dc3) bg_vkb2_fuc_pane_cp02_ParamLimits

0x18b7,	// (0x00047dc3) bg_vkb2_fuc_pane_cp02

0x22a0,	// (0x000487ac) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x22a0,	// (0x000487ac) vkb2_top_cell_right_narrow_pane_g1

0xa7f6,	// (0x00050d02) aid_touch_area_decrease_ParamLimits

0xa7f6,	// (0x00050d02) aid_touch_area_decrease

0xa82a,	// (0x00050d36) aid_touch_area_increase_ParamLimits

0xa82a,	// (0x00050d36) aid_touch_area_increase

0xa852,	// (0x00050d5e) aid_touch_area_mute_ParamLimits

0xa852,	// (0x00050d5e) aid_touch_area_mute

0xa882,	// (0x00050d8e) aid_touch_area_slider_ParamLimits

0xa882,	// (0x00050d8e) aid_touch_area_slider

0xa8c2,	// (0x00050dce) popup_slider_window_g4_ParamLimits

0xa8c2,	// (0x00050dce) popup_slider_window_g4

0xa8ea,	// (0x00050df6) popup_slider_window_g5_ParamLimits

0xa8ea,	// (0x00050df6) popup_slider_window_g5

0xa91e,	// (0x00050e2a) popup_slider_window_g6_ParamLimits

0xa91e,	// (0x00050e2a) popup_slider_window_g6

0x53d1,	// (0x0004b8dd) popup_slider_window_t2_ParamLimits

0x53d1,	// (0x0004b8dd) popup_slider_window_t2

0x0001,

0xfc88,	// (0x00056194) popup_slider_window_t_ParamLimits

0xfc88,	// (0x00056194) popup_slider_window_t

0xa93a,	// (0x00050e46) slider_pane_ParamLimits

0xa93a,	// (0x00050e46) slider_pane

0x608e,	// (0x0004c59a) slider_pane_g1_ParamLimits

0x608e,	// (0x0004c59a) slider_pane_g1

0x60a2,	// (0x0004c5ae) slider_pane_g2_ParamLimits

0x60a2,	// (0x0004c5ae) slider_pane_g2

0x60b8,	// (0x0004c5c4) slider_pane_g3_ParamLimits

0x60b8,	// (0x0004c5c4) slider_pane_g3

0x0003,

0xfd78,	// (0x00056284) slider_pane_g_ParamLimits

0xfd78,	// (0x00056284) slider_pane_g

0x96c9,	// (0x0004fbd5) popup_tb_float_extension_window_ParamLimits

0x96c9,	// (0x0004fbd5) popup_tb_float_extension_window

0x60e4,	// (0x0004c5f0) aid_size_cell_tb_float_ext

0xb6c8,	// (0x00051bd4) bg_popup_sub_window_cp28

0x60f0,	// (0x0004c5fc) grid_tb_float_ext_pane

0x60fa,	// (0x0004c606) cell_tb_float_ext_pane_ParamLimits

0x60fa,	// (0x0004c606) cell_tb_float_ext_pane

0x6114,	// (0x0004c620) cell_tb_float_ext_pane_g1

0x611d,	// (0x0004c629) grid_highlight_pane_cp12

0x8281,	// (0x0004e78d) cell_last_hwr_side_pane_ParamLimits

0x8281,	// (0x0004e78d) cell_last_hwr_side_pane

0xec9a,	// (0x000551a6) cell_last_hwr_side_pane_g1

0x6126,	// (0x0004c632) cell_last_hwr_side_pane_g2

0x0001,

0xfd81,	// (0x0005628d) cell_last_hwr_side_pane_g

0x85ff,	// (0x0004eb0b) vkb2_area_bottom_space_btn_pane_ParamLimits

0x85ff,	// (0x0004eb0b) vkb2_area_bottom_space_btn_pane

0x1b1c,	// (0x00048028) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x5c4b,	// (0x0004c157) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x23fe,	// (0x0004890a) cell_vkb2_top_candi_pane_t1_ParamLimits

0x241d,	// (0x00048929) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x241d,	// (0x00048929) vkb2_area_bottom_space_btn_pane_g1

0x2457,	// (0x00048963) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x2457,	// (0x00048963) vkb2_area_bottom_space_btn_pane_g2

0x248d,	// (0x00048999) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x248d,	// (0x00048999) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfd86,	// (0x00056292) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfd86,	// (0x00056292) vkb2_area_bottom_space_btn_pane_g

0x197a,	// (0x00047e86) cel_fep_hwr_func_pane_ParamLimits

0x197a,	// (0x00047e86) cel_fep_hwr_func_pane

0x8256,	// (0x0004e762) cell_hwr_side_button_pane_ParamLimits

0x8256,	// (0x0004e762) cell_hwr_side_button_pane

0x5627,	// (0x0004bb33) aid_area_touch_clock_ParamLimits

0xb86b,	// (0x00051d77) bg_uniindi_top_pane_ParamLimits

0x5639,	// (0x0004bb45) uniindi_top_pane_g1_ParamLimits

0x564f,	// (0x0004bb5b) uniindi_top_pane_g2_ParamLimits

0x565b,	// (0x0004bb67) uniindi_top_pane_g3_ParamLimits

0x566c,	// (0x0004bb78) uniindi_top_pane_g4_ParamLimits

0xfcbb,	// (0x000561c7) uniindi_top_pane_g_ParamLimits

0x5679,	// (0x0004bb85) uniindi_top_pane_t1_ParamLimits

0xb86b,	// (0x00051d77) bg_vkb2_func_pane_cp01_ParamLimits

0xb86b,	// (0x00051d77) bg_vkb2_func_pane_cp01

0x612f,	// (0x0004c63b) cel_fep_hwr_func_pane_g1_ParamLimits

0x612f,	// (0x0004c63b) cel_fep_hwr_func_pane_g1

0xb86b,	// (0x00051d77) bg_vkb2_func_pane_cp02_ParamLimits

0xb86b,	// (0x00051d77) bg_vkb2_func_pane_cp02

0x612f,	// (0x0004c63b) cell_hwr_side_button_pane_g1_ParamLimits

0x612f,	// (0x0004c63b) cell_hwr_side_button_pane_g1

0xcdfe,	// (0x0005330a) status_pane_g4_ParamLimits

0xcdfe,	// (0x0005330a) status_pane_g4

0xce18,	// (0x00053324) status_pane_t1

0xeb1f,	// (0x0005502b) form2_midp_gauge_slider_cont_pane

0xeb27,	// (0x00055033) form2_midp_gauge_slider_pane_t1_ParamLimits

0xa1f4,	// (0x00050700) form2_midp_gauge_slider_pane_t2_ParamLimits

0xa206,	// (0x00050712) form2_midp_gauge_slider_pane_t3_ParamLimits

0x003b,	// (0x00046547) form2_midp_gauge_slider_pane_t_ParamLimits

0xeb39,	// (0x00055045) form2_midp_slider_pane_ParamLimits

0x1dd7,	// (0x000482e3) aid_size_cell_func_vkb2_ParamLimits

0x1dd7,	// (0x000482e3) aid_size_cell_func_vkb2

0x60d0,	// (0x0004c5dc) slider_pane_g4_ParamLimits

0x60d0,	// (0x0004c5dc) slider_pane_g4

0x8660,	// (0x0004eb6c) form2_midp_gauge_slider_pane_t2_cp01

0x866e,	// (0x0004eb7a) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x866e,	// (0x0004eb7a) form2_midp_gauge_slider_pane_t3_cp01

0x2502,	// (0x00048a0e) form2_midp_slider_pane_cp01

0xb6c8,	// (0x00051bd4) navi_smil_pane

0x615f,	// (0x0004c66b) navi_smil_pane_g1

0x6167,	// (0x0004c673) navi_smil_pane_t1

0x613d,	// (0x0004c649) form2_midp_slider_pane_g1

0x6146,	// (0x0004c652) form2_midp_slider_pane_g2

0x614e,	// (0x0004c65a) form2_midp_slider_pane_g3

0x613d,	// (0x0004c649) form2_midp_slider_pane_g4

0xb255,	// (0x00051761) form2_midp_slider_pane_g5

0x0004,

0xfd8f,	// (0x0005629b) form2_midp_slider_pane_g

0x24c7,	// (0x000489d3) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x24c7,	// (0x000489d3) vkb2_area_bottom_space_btn_pane_g4

0x98a5,	// (0x0004fdb1) lc0_navi_pane_ParamLimits

0x98a5,	// (0x0004fdb1) lc0_navi_pane

0x990f,	// (0x0004fe1b) lc0_stat_indi_pane_ParamLimits

0x990f,	// (0x0004fe1b) lc0_stat_indi_pane

0x9924,	// (0x0004fe30) ls0_title_pane_ParamLimits

0x9924,	// (0x0004fe30) ls0_title_pane

0xbe40,	// (0x0005234c) bg_popup_sub_pane_cp14_ParamLimits

0x560e,	// (0x0004bb1a) list_uniindi_pane_ParamLimits

0x561a,	// (0x0004bb26) uniindi_top_pane_ParamLimits

0x56b6,	// (0x0004bbc2) list_single_uniindi_pane_g1_ParamLimits

0x56c9,	// (0x0004bbd5) list_single_uniindi_pane_t1_ParamLimits

0x868b,	// (0x0004eb97) lc0_stat_clock_pane_ParamLimits

0x868b,	// (0x0004eb97) lc0_stat_clock_pane

0xb25e,	// (0x0005176a) lc0_stat_indi_pane_g1_ParamLimits

0xb25e,	// (0x0005176a) lc0_stat_indi_pane_g1

0xb26b,	// (0x00051777) lc0_stat_indi_pane_g2_ParamLimits

0xb26b,	// (0x00051777) lc0_stat_indi_pane_g2

0x0001,

0x031f,	// (0x0004682b) lc0_stat_indi_pane_g_ParamLimits

0x031f,	// (0x0004682b) lc0_stat_indi_pane_g

0x8698,	// (0x0004eba4) lc0_uni_indicator_pane_ParamLimits

0x8698,	// (0x0004eba4) lc0_uni_indicator_pane

0x6175,	// (0x0004c681) ls0_title_pane_g1_ParamLimits

0x6175,	// (0x0004c681) ls0_title_pane_g1

0xb278,	// (0x00051784) ls0_title_pane_t1_ParamLimits

0xb278,	// (0x00051784) ls0_title_pane_t1

0x86a5,	// (0x0004ebb1) lc0_uni_indicator_pane_g1_ParamLimits

0x86a5,	// (0x0004ebb1) lc0_uni_indicator_pane_g1

0x6189,	// (0x0004c695) lc0_stat_clock_pane_t1

0xb6c8,	// (0x00051bd4) main_ai5_pane

0x6197,	// (0x0004c6a3) ai5_sk_pane_ParamLimits

0x6197,	// (0x0004c6a3) ai5_sk_pane

0xb2a6,	// (0x000517b2) cell_ai5_widget_pane_ParamLimits

0xb2a6,	// (0x000517b2) cell_ai5_widget_pane

0x61a4,	// (0x0004c6b0) aid_size_cell_widget_grid

0x61b8,	// (0x0004c6c4) bg_ai5_widget_pane_ParamLimits

0x61b8,	// (0x0004c6c4) bg_ai5_widget_pane

0xb32f,	// (0x0005183b) cell_ai5_widget_pane_g2

0xb33f,	// (0x0005184b) cell_ai5_widget_pane_g3

0xb353,	// (0x0005185f) cell_ai5_widget_pane_g4

0xb35f,	// (0x0005186b) cell_ai5_widget_pane_g5

0xb36b,	// (0x00051877) cell_ai5_widget_pane_g6

0xb377,	// (0x00051883) cell_ai5_widget_pane_g7

0xb3bf,	// (0x000518cb) cell_ai5_widget_pane_t1_ParamLimits

0xb3bf,	// (0x000518cb) cell_ai5_widget_pane_t1

0xb3dc,	// (0x000518e8) cell_ai5_widget_pane_t2_ParamLimits

0xb3dc,	// (0x000518e8) cell_ai5_widget_pane_t2

0xb3f4,	// (0x00051900) cell_ai5_widget_pane_t3_ParamLimits

0xb3f4,	// (0x00051900) cell_ai5_widget_pane_t3

0xb40c,	// (0x00051918) cell_ai5_widget_pane_t4_ParamLimits

0xb40c,	// (0x00051918) cell_ai5_widget_pane_t4

0xb426,	// (0x00051932) cell_ai5_widget_pane_t5_ParamLimits

0xb426,	// (0x00051932) cell_ai5_widget_pane_t5

0x61c4,	// (0x0004c6d0) cell_ai5_widget_pane_t6_ParamLimits

0x61c4,	// (0x0004c6d0) cell_ai5_widget_pane_t6

0x61d6,	// (0x0004c6e2) cell_ai5_widget_pane_t7_ParamLimits

0x61d6,	// (0x0004c6e2) cell_ai5_widget_pane_t7

0xb445,	// (0x00051951) cell_ai5_widget_pane_t8_ParamLimits

0xb445,	// (0x00051951) cell_ai5_widget_pane_t8

0x0009,

0xfd9a,	// (0x000562a6) cell_ai5_widget_pane_t_ParamLimits

0xfd9a,	// (0x000562a6) cell_ai5_widget_pane_t

0xb48d,	// (0x00051999) grid_ai5_widget_pane

0xbe40,	// (0x0005234c) highlight_cell_ai5_widget_pane_ParamLimits

0xbe40,	// (0x0005234c) highlight_cell_ai5_widget_pane

0xb4a5,	// (0x000519b1) ai5_sk_left_pane

0xb4af,	// (0x000519bb) ai5_sk_middle_pane

0xb4b9,	// (0x000519c5) ai5_sk_right_pane

0x61ef,	// (0x0004c6fb) bg_ai5_widget_pane_g1_ParamLimits

0x61ef,	// (0x0004c6fb) bg_ai5_widget_pane_g1

0x61fb,	// (0x0004c707) bg_ai5_widget_pane_g2_ParamLimits

0x61fb,	// (0x0004c707) bg_ai5_widget_pane_g2

0x6207,	// (0x0004c713) bg_ai5_widget_pane_g3_ParamLimits

0x6207,	// (0x0004c713) bg_ai5_widget_pane_g3

0x6213,	// (0x0004c71f) bg_ai5_widget_pane_g4_ParamLimits

0x6213,	// (0x0004c71f) bg_ai5_widget_pane_g4

0x621f,	// (0x0004c72b) bg_ai5_widget_pane_g5_ParamLimits

0x621f,	// (0x0004c72b) bg_ai5_widget_pane_g5

0x622b,	// (0x0004c737) bg_ai5_widget_pane_g6_ParamLimits

0x622b,	// (0x0004c737) bg_ai5_widget_pane_g6

0x6237,	// (0x0004c743) bg_ai5_widget_pane_g7_ParamLimits

0x6237,	// (0x0004c743) bg_ai5_widget_pane_g7

0x6243,	// (0x0004c74f) bg_ai5_widget_pane_g8_ParamLimits

0x6243,	// (0x0004c74f) bg_ai5_widget_pane_g8

0x624f,	// (0x0004c75b) bg_ai5_widget_pane_g9_ParamLimits

0x624f,	// (0x0004c75b) bg_ai5_widget_pane_g9

0x0008,

0xfdaf,	// (0x000562bb) bg_ai5_widget_pane_g_ParamLimits

0xfdaf,	// (0x000562bb) bg_ai5_widget_pane_g

0x6282,	// (0x0004c78e) cell_shortcut_ai5_widget_pane_ParamLimits

0x6282,	// (0x0004c78e) cell_shortcut_ai5_widget_pane

0xb774,	// (0x00051c80) bg_cell_shortcut_ai5_widget_pane

0x6293,	// (0x0004c79f) cell_grid_ai5_widget_pane_g1

0x629c,	// (0x0004c7a8) highlight_cell_shortcut_ai5_widget_pane

0xcef0,	// (0x000533fc) ai5_sk_left_pane_g1

0x62a4,	// (0x0004c7b0) ai5_sk_left_pane_g2

0x62ac,	// (0x0004c7b8) ai5_sk_left_pane_g3

0x62b4,	// (0x0004c7c0) ai5_sk_left_pane_g4

0x0003,

0xfdc2,	// (0x000562ce) ai5_sk_left_pane_g

0x62bc,	// (0x0004c7c8) ai5_sk_left_pane_t1

0xcef8,	// (0x00053404) ai5_sk_right_pane_g1

0x62ca,	// (0x0004c7d6) ai5_sk_right_pane_g2

0x62d2,	// (0x0004c7de) ai5_sk_right_pane_g3

0x62da,	// (0x0004c7e6) ai5_sk_right_pane_g4

0x0003,

0xfdcb,	// (0x000562d7) ai5_sk_right_pane_g

0x62e2,	// (0x0004c7ee) ai5_sk_right_pane_t1

0xcef8,	// (0x00053404) ai5_sk_middle_pane_g1

0xcef0,	// (0x000533fc) ai5_sk_middle_pane_g2

0xcf10,	// (0x0005341c) ai5_sk_middle_pane_g3

0x62d2,	// (0x0004c7de) ai5_sk_middle_pane_g4

0x62ac,	// (0x0004c7b8) ai5_sk_middle_pane_g5

0x62f0,	// (0x0004c7fc) ai5_sk_middle_pane_g6

0xb4c3,	// (0x000519cf) ai5_sk_middle_pane_g7

0x0006,

0xfdd4,	// (0x000562e0) ai5_sk_middle_pane_g

0x9791,	// (0x0004fc9d) aid_touch_area_size_lc0_ParamLimits

0x9791,	// (0x0004fc9d) aid_touch_area_size_lc0

0x1b4b,	// (0x00048057) cell_hwr_candidate_pane_t1_ParamLimits

0xcd20,	// (0x0005322c) aid_touch_navi_pane

0x9a16,	// (0x0004ff22) status_dt_navi_pane_ParamLimits

0x9a16,	// (0x0004ff22) status_dt_navi_pane

0x9a2e,	// (0x0004ff3a) status_dt_sta_pane_ParamLimits

0x9a2e,	// (0x0004ff3a) status_dt_sta_pane

0xb4cb,	// (0x000519d7) dt_sta_controll_pane

0xb4d8,	// (0x000519e4) dt_sta_indi_pane

0xb4e5,	// (0x000519f1) dt_sta_title_pane

0xb86b,	// (0x00051d77) bg_dt_sta_indi_pane_ParamLimits

0xb86b,	// (0x00051d77) bg_dt_sta_indi_pane

0x62f8,	// (0x0004c804) dt_sta_battery_pane

0xb4f7,	// (0x00051a03) dt_sta_indi_pane_g1

0xb500,	// (0x00051a0c) dt_sta_indi_pane_g2

0xb509,	// (0x00051a15) dt_sta_indi_pane_g3

0x0002,

0x0382,	// (0x0004688e) dt_sta_indi_pane_g

0xb512,	// (0x00051a1e) dt_sta_signal_pane

0xbe40,	// (0x0005234c) bg_dt_sta_title_pane_ParamLimits

0xbe40,	// (0x0005234c) bg_dt_sta_title_pane

0xdbd5,	// (0x000540e1) dt_sta_title_pane_g1

0xb51b,	// (0x00051a27) dt_sta_title_pane_t1_ParamLimits

0xb51b,	// (0x00051a27) dt_sta_title_pane_t1

0xb6c8,	// (0x00051bd4) bg_dt_sta_control_pane

0xb530,	// (0x00051a3c) dt_sta_controll_pane_g1

0xb539,	// (0x00051a45) bg_dt_sta_title_pane_g1

0xb542,	// (0x00051a4e) bg_dt_sta_title_pane_g2

0xb54b,	// (0x00051a57) bg_dt_sta_title_pane_g3

0x0002,

0x0389,	// (0x00046895) bg_dt_sta_title_pane_g

0xec9a,	// (0x000551a6) bg_dt_sta_indi_pane_g1

0x6300,	// (0x0004c80c) dt_sta_signal_pane_g1

0x6311,	// (0x0004c81d) dt_sta_signal_pane_g2

0x0001,

0xfde3,	// (0x000562ef) dt_sta_signal_pane_g

0x6319,	// (0x0004c825) dt_sta_battery_pane_g1

0x6322,	// (0x0004c82e) dt_sta_battery_pane_t1

0xec9a,	// (0x000551a6) bg_dt_sta_control_pane_g1

0xc52a,	// (0x00052a36) fep_china_uni_eep_pane

0xc532,	// (0x00052a3e) fep_china_uni_entry_pane_ParamLimits

0xc542,	// (0x00052a4e) popup_fep_china_uni_window_g1_ParamLimits

0xc552,	// (0x00052a5e) popup_fep_china_uni_window_g2_ParamLimits

0xc552,	// (0x00052a5e) popup_fep_china_uni_window_g2

0x0001,

0xf758,	// (0x00055c64) popup_fep_china_uni_window_g_ParamLimits

0xf758,	// (0x00055c64) popup_fep_china_uni_window_g

0x6331,	// (0x0004c83d) fep_china_uni_eep_pane_g1

0x6339,	// (0x0004c845) fep_china_uni_eep_pane_t1

0x6156,	// (0x0004c662) aid_touch_area_size_smil_player

0xcdd1,	// (0x000532dd) lc0_clock_pane

0xce0c,	// (0x00053318) status_pane_g5_ParamLimits

0xce0c,	// (0x00053318) status_pane_g5

0x926f,	// (0x0004f77b) popup_keymap_window

0xcdea,	// (0x000532f6) status_icon_pane

0xb33f,	// (0x0005184b) cell_ai5_widget_pane_g3_ParamLimits

0xb353,	// (0x0005185f) cell_ai5_widget_pane_g4_ParamLimits

0xb35f,	// (0x0005186b) cell_ai5_widget_pane_g5_ParamLimits

0xb383,	// (0x0005188f) cell_ai5_widget_pane_g8_ParamLimits

0xb383,	// (0x0005188f) cell_ai5_widget_pane_g8

0xb397,	// (0x000518a3) cell_ai5_widget_pane_g9_ParamLimits

0xb397,	// (0x000518a3) cell_ai5_widget_pane_g9

0xb3ab,	// (0x000518b7) cell_ai5_widget_pane_g10_ParamLimits

0xb3ab,	// (0x000518b7) cell_ai5_widget_pane_g10

0x6348,	// (0x0004c854) status_icon_pane_g1

0xb6c8,	// (0x00051bd4) bg_popup_sub_pane_cp13

0x6350,	// (0x0004c85c) popup_keymap_window_t1

0x9064,	// (0x0004f570) control_pane_g6_ParamLimits

0x9064,	// (0x0004f570) control_pane_g6

0x9071,	// (0x0004f57d) control_pane_g7_ParamLimits

0x9071,	// (0x0004f57d) control_pane_g7

0x907e,	// (0x0004f58a) control_pane_g8_ParamLimits

0x907e,	// (0x0004f58a) control_pane_g8

0xb4cb,	// (0x000519d7) dt_sta_controll_pane_ParamLimits

0xb4d8,	// (0x000519e4) dt_sta_indi_pane_ParamLimits

0xb4e5,	// (0x000519f1) dt_sta_title_pane_ParamLimits

0xbd82,	// (0x0005228e) aid_size_touch_scroll_bar_cale

0x06ca,	// (0x00046bd6) popup_discreet_window_ParamLimits

0x06ca,	// (0x00046bd6) popup_discreet_window

0x7991,	// (0x0004de9d) popup_sk_window

0xd46f,	// (0x0005397b) bg_popup_sub_pane_cp28_ParamLimits

0xd46f,	// (0x0005397b) bg_popup_sub_pane_cp28

0x635e,	// (0x0004c86a) popup_discreet_window_g1_ParamLimits

0x635e,	// (0x0004c86a) popup_discreet_window_g1

0x637e,	// (0x0004c88a) popup_discreet_window_t1_ParamLimits

0x637e,	// (0x0004c88a) popup_discreet_window_t1

0x639c,	// (0x0004c8a8) popup_discreet_window_t2_ParamLimits

0x639c,	// (0x0004c8a8) popup_discreet_window_t2

0x0002,

0xfde8,	// (0x000562f4) popup_discreet_window_t_ParamLimits

0xfde8,	// (0x000562f4) popup_discreet_window_t

0x2539,	// (0x00048a45) popup_sk_window_g1

0x2543,	// (0x00048a4f) popup_sk_window_g2

0x0001,

0xfdef,	// (0x000562fb) popup_sk_window_g

0x63ee,	// (0x0004c8fa) popup_sk_window_t1

0x63fc,	// (0x0004c908) popup_sk_window_t1_copy1

0xb32f,	// (0x0005183b) cell_ai5_widget_pane_g2_ParamLimits

0xb457,	// (0x00051963) cell_ai5_widget_pane_t9_ParamLimits

0xb457,	// (0x00051963) cell_ai5_widget_pane_t9

0xb6c8,	// (0x00051bd4) main_fep_fshwr2_pane

0xb554,	// (0x00051a60) aid_fshwr2_btn_pane

0xb55c,	// (0x00051a68) aid_fshwr2_syb_pane

0xb564,	// (0x00051a70) aid_fshwr2_txt_pane

0xb56c,	// (0x00051a78) fshwr2_func_candi_pane

0xb576,	// (0x00051a82) fshwr2_hwr_syb_pane

0xb584,	// (0x00051a90) fshwr2_icf_pane

0xb6c8,	// (0x00051bd4) fshwr2_icf_bg_pane

0xb58e,	// (0x00051a9a) fshwr2_icf_pane_t1_ParamLimits

0xb58e,	// (0x00051a9a) fshwr2_icf_pane_t1

0xec9a,	// (0x000551a6) fshwr2_func_candi_pane_g1

0x641e,	// (0x0004c92a) fshwr2_func_candi_row_pane_ParamLimits

0x641e,	// (0x0004c92a) fshwr2_func_candi_row_pane

0xb5a6,	// (0x00051ab2) cell_fshwr2_syb_pane_ParamLimits

0xb5a6,	// (0x00051ab2) cell_fshwr2_syb_pane

0xee41,	// (0x0005534d) fshwr2_hwr_syb_pane_g1_ParamLimits

0xee41,	// (0x0005534d) fshwr2_hwr_syb_pane_g1

0xb6c8,	// (0x00051bd4) bg_popup_call_pane_cp01

0x642f,	// (0x0004c93b) fshwr2_func_candi_cell_pane_ParamLimits

0x642f,	// (0x0004c93b) fshwr2_func_candi_cell_pane

0x6460,	// (0x0004c96c) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x6460,	// (0x0004c96c) fshwr2_func_candi_cell_bg_pane

0x647a,	// (0x0004c986) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x647a,	// (0x0004c986) fshwr2_func_candi_cell_pane_g1

0x64a2,	// (0x0004c9ae) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x64a2,	// (0x0004c9ae) fshwr2_func_candi_cell_pane_t1

0xb6c8,	// (0x00051bd4) bg_button_pane_cp08

0xc9a2,	// (0x00052eae) cell_fshwr2_syb_bg_pane

0xb5c0,	// (0x00051acc) cell_fshwr2_syb_bg_pane_g1

0xb5c8,	// (0x00051ad4) cell_fshwr2_syb_bg_pane_t1

0xbe40,	// (0x0005234c) main_tmo_pane

0x9d2e,	// (0x0005023a) uni_indicator_pane_g1_ParamLimits

0x9d43,	// (0x0005024f) uni_indicator_pane_g2_ParamLimits

0x9d58,	// (0x00050264) uni_indicator_pane_g3_ParamLimits

0xdecb,	// (0x000543d7) uni_indicator_pane_g4_ParamLimits

0xdecb,	// (0x000543d7) uni_indicator_pane_g4

0xdedf,	// (0x000543eb) uni_indicator_pane_g5_ParamLimits

0xdedf,	// (0x000543eb) uni_indicator_pane_g5

0xdef3,	// (0x000543ff) uni_indicator_pane_g6_ParamLimits

0xdef3,	// (0x000543ff) uni_indicator_pane_g6

0xf949,	// (0x00055e55) uni_indicator_pane_g_ParamLimits

0xa7d2,	// (0x00050cde) popup_tmo_note_window_ParamLimits

0xa7d2,	// (0x00050cde) popup_tmo_note_window

0xb6c8,	// (0x00051bd4) fshwr2_bg_pane

0x6493,	// (0x0004c99f) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x6493,	// (0x0004c99f) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfdf4,	// (0x00056300) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfdf4,	// (0x00056300) fshwr2_func_candi_cell_pane_g

0xec9a,	// (0x000551a6) bg_popup_window_pane_cp01

0x64b5,	// (0x0004c9c1) bg_popup_window_pane_g1_cp01

0x64be,	// (0x0004c9ca) bg_popup_window_pane_cp22_ParamLimits

0x64be,	// (0x0004c9ca) bg_popup_window_pane_cp22

0x64cc,	// (0x0004c9d8) listscroll_tmo_link_pane_ParamLimits

0x64cc,	// (0x0004c9d8) listscroll_tmo_link_pane

0x650c,	// (0x0004ca18) popup_tmo_note_window_g1_ParamLimits

0x650c,	// (0x0004ca18) popup_tmo_note_window_g1

0x6519,	// (0x0004ca25) tmo_note_info_pane_ParamLimits

0x6519,	// (0x0004ca25) tmo_note_info_pane

0xb5d7,	// (0x00051ae3) list_tmo_note_info_pane_g1_ParamLimits

0xb5d7,	// (0x00051ae3) list_tmo_note_info_pane_g1

0x6533,	// (0x0004ca3f) list_tmo_note_info_pane_g2_ParamLimits

0x6533,	// (0x0004ca3f) list_tmo_note_info_pane_g2

0x0001,

0xfdf9,	// (0x00056305) list_tmo_note_info_pane_g_ParamLimits

0xfdf9,	// (0x00056305) list_tmo_note_info_pane_g

0x654f,	// (0x0004ca5b) list_tmo_note_info_text_pane_ParamLimits

0x654f,	// (0x0004ca5b) list_tmo_note_info_text_pane

0x6591,	// (0x0004ca9d) list_tmo_link_pane

0x659e,	// (0x0004caaa) scroll_pane_cp20

0x65ab,	// (0x0004cab7) list_single_tmo_link_pane_ParamLimits

0x65ab,	// (0x0004cab7) list_single_tmo_link_pane

0x65bb,	// (0x0004cac7) list_single_tmo_link_pane_t1

0x65c9,	// (0x0004cad5) list_tmo_note_info_text_pane_t1_ParamLimits

0x65c9,	// (0x0004cad5) list_tmo_note_info_text_pane_t1

0x8d5f,	// (0x0004f26b) aid_size_touch_scroll_bar_cp01_ParamLimits

0x8d5f,	// (0x0004f26b) aid_size_touch_scroll_bar_cp01

0x7e38,	// (0x0004e344) aid_size_touch_slider_marker

0x7981,	// (0x0004de8d) popup_settings_window_ParamLimits

0x7981,	// (0x0004de8d) popup_settings_window

0x2e91,	// (0x0004939d) popup_candi_list_indi_window

0xcd20,	// (0x0005322c) aid_touch_navi_pane_ParamLimits

0x1d11,	// (0x0004821d) rs_clock_indi_pane

0x1d1a,	// (0x00048226) sctrl_sk_bottom_pane_ParamLimits

0x1d2b,	// (0x00048237) sctrl_sk_top_pane_ParamLimits

0x1e31,	// (0x0004833d) popup_fep_tooltip_window

0x61a4,	// (0x0004c6b0) aid_size_cell_widget_grid_ParamLimits

0xb323,	// (0x0005182f) cell_ai5_widget_pane_g1_ParamLimits

0xb323,	// (0x0005182f) cell_ai5_widget_pane_g1

0xb36b,	// (0x00051877) cell_ai5_widget_pane_g6_ParamLimits

0xb377,	// (0x00051883) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0x0324,	// (0x00046830) cell_ai5_widget_pane_g_ParamLimits

0x0324,	// (0x00046830) cell_ai5_widget_pane_g

0xb47b,	// (0x00051987) cell_ai5_widget_pane_t10_ParamLimits

0xb47b,	// (0x00051987) cell_ai5_widget_pane_t10

0xb48d,	// (0x00051999) grid_ai5_widget_pane_ParamLimits

0x625b,	// (0x0004c767) cell_contacts_ai5_widget_pane_ParamLimits

0x625b,	// (0x0004c767) cell_contacts_ai5_widget_pane

0x63b1,	// (0x0004c8bd) popup_discreet_window_t3_ParamLimits

0x63b1,	// (0x0004c8bd) popup_discreet_window_t3

0x640a,	// (0x0004c916) popup_fshwr2_char_preview_window_ParamLimits

0x640a,	// (0x0004c916) popup_fshwr2_char_preview_window

0xb5ee,	// (0x00051afa) tmo_note_info_pane_t1

0xb603,	// (0x00051b0f) tmo_note_info_pane_t2

0xb61a,	// (0x00051b26) tmo_note_info_pane_t3

0x656d,	// (0x0004ca79) tmo_note_info_pane_t4

0x657f,	// (0x0004ca8b) tmo_note_info_pane_t5

0x0004,

0xfdfe,	// (0x0005630a) tmo_note_info_pane_t

0x6591,	// (0x0004ca9d) list_tmo_link_pane_ParamLimits

0x659e,	// (0x0004caaa) scroll_pane_cp20_ParamLimits

0xb6c8,	// (0x00051bd4) bg_popup_fep_char_preview_window_cp01

0x65e2,	// (0x0004caee) popup_fshwr2_char_preview_window_t1

0x65f0,	// (0x0004cafc) popup_candi_list_indi_window_g1

0x65f9,	// (0x0004cb05) bg_cell_contacts_ai5_widget_pane

0x6605,	// (0x0004cb11) cell_contacts_ai5_widget_pane_g1

0x6619,	// (0x0004cb25) cell_contacts_ai5_widget_pane_g2

0x6628,	// (0x0004cb34) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfe09,	// (0x00056315) cell_contacts_ai5_widget_pane_g

0x663b,	// (0x0004cb47) cell_contacts_ai5_widget_pane_t1

0xbe40,	// (0x0005234c) highlight_cell_shortcut_ai5_widget_pane_cp01

0xb694,	// (0x00051ba0) settings_container_pane

0xc9a2,	// (0x00052eae) listscroll_set_pane_copy1

0xe6b7,	// (0x00054bc3) scroll_pane_cp121_copy1

0x6650,	// (0x0004cb5c) set_content_pane_copy1

0xb6a0,	// (0x00051bac) aid_height_set_list_copy1_ParamLimits

0xb6a0,	// (0x00051bac) aid_height_set_list_copy1

0xd664,	// (0x00053b70) aid_size_parent_copy1_ParamLimits

0xd664,	// (0x00053b70) aid_size_parent_copy1

0xb6ac,	// (0x00051bb8) button_value_adjust_pane_cp6_copy1_ParamLimits

0xb6ac,	// (0x00051bb8) button_value_adjust_pane_cp6_copy1

0xbf98,	// (0x000524a4) list_highlight_pane_cp2_copy1_ParamLimits

0xbf98,	// (0x000524a4) list_highlight_pane_cp2_copy1

0xbafa,	// (0x00052006) list_set_pane_copy1_ParamLimits

0xbafa,	// (0x00052006) list_set_pane_copy1

0xb62f,	// (0x00051b3b) main_pane_set_t1_copy1_ParamLimits

0xb62f,	// (0x00051b3b) main_pane_set_t1_copy1

0xb669,	// (0x00051b75) main_pane_set_t2_copy1_ParamLimits

0xb669,	// (0x00051b75) main_pane_set_t2_copy1

0xbba7,	// (0x000520b3) main_pane_set_t3_copy1

0xbbb5,	// (0x000520c1) main_pane_set_t4_copy1

0xb688,	// (0x00051b94) set_content_pane_g1_copy1_ParamLimits

0xb688,	// (0x00051b94) set_content_pane_g1_copy1

0xbbc3,	// (0x000520cf) setting_code_pane_copy1

0x6658,	// (0x0004cb64) setting_slider_graphic_pane_copy1

0x6658,	// (0x0004cb64) setting_slider_pane_copy1

0x6662,	// (0x0004cb6e) setting_text_pane_copy1

0x666c,	// (0x0004cb78) setting_volume_pane_copy1

0xbbcd,	// (0x000520d9) settings_code_pane_cp2_copy1

0xbbd5,	// (0x000520e1) settings_code_pane_cp_copy1_ParamLimits

0xbbd5,	// (0x000520e1) settings_code_pane_cp_copy1

0xbbe9,	// (0x000520f5) volume_set_pane_copy1

0xbbf1,	// (0x000520fd) volume_set_pane_g10_copy1

0xbbf9,	// (0x00052105) volume_set_pane_g1_copy1

0xc013,	// (0x0005251f) volume_set_pane_g2_copy1

0xc01b,	// (0x00052527) volume_set_pane_g3_copy1

0xc023,	// (0x0005252f) volume_set_pane_g4_copy1

0xc02b,	// (0x00052537) volume_set_pane_g5_copy1

0xc033,	// (0x0005253f) volume_set_pane_g6_copy1

0xc03b,	// (0x00052547) volume_set_pane_g7_copy1

0xc043,	// (0x0005254f) volume_set_pane_g8_copy1

0xc04b,	// (0x00052557) volume_set_pane_g9_copy1

0xb738,	// (0x00051c44) bg_set_opt_pane_cp_copy1_ParamLimits

0xb738,	// (0x00051c44) bg_set_opt_pane_cp_copy1

0x6675,	// (0x0004cb81) setting_slider_pane_t1_copy1_ParamLimits

0x6675,	// (0x0004cb81) setting_slider_pane_t1_copy1

0xc053,	// (0x0005255f) setting_slider_pane_t2_copy1_ParamLimits

0xc053,	// (0x0005255f) setting_slider_pane_t2_copy1

0xc06d,	// (0x00052579) setting_slider_pane_t3_copy1_ParamLimits

0xc06d,	// (0x00052579) setting_slider_pane_t3_copy1

0xc085,	// (0x00052591) slider_set_pane_copy1_ParamLimits

0xc085,	// (0x00052591) slider_set_pane_copy1

0xbea7,	// (0x000523b3) set_opt_bg_pane_g1_copy2

0xbeaf,	// (0x000523bb) set_opt_bg_pane_g2_copy2

0x6693,	// (0x0004cb9f) set_opt_bg_pane_g3_copy2

0xbebf,	// (0x000523cb) set_opt_bg_pane_g4_copy2

0xbec7,	// (0x000523d3) set_opt_bg_pane_g5_copy2

0xbecf,	// (0x000523db) set_opt_bg_pane_g6_copy2

0xc09b,	// (0x000525a7) set_opt_bg_pane_g7_copy2

0x669d,	// (0x0004cba9) set_opt_bg_pane_g8_copy2

0x66a7,	// (0x0004cbb3) set_opt_bg_pane_g9_copy2

0x254d,	// (0x00048a59) aid_size_touch_slider_mark_copy1_ParamLimits

0x254d,	// (0x00048a59) aid_size_touch_slider_mark_copy1

0x66b1,	// (0x0004cbbd) slider_set_pane_g1_copy1

0x2561,	// (0x00048a6d) slider_set_pane_g2_copy1

0x1745,	// (0x00047c51) slider_set_pane_g3_copy1_ParamLimits

0x1745,	// (0x00047c51) slider_set_pane_g3_copy1

0x1759,	// (0x00047c65) slider_set_pane_g4_copy1_ParamLimits

0x1759,	// (0x00047c65) slider_set_pane_g4_copy1

0x1771,	// (0x00047c7d) slider_set_pane_g5_copy1_ParamLimits

0x1771,	// (0x00047c7d) slider_set_pane_g5_copy1

0x1745,	// (0x00047c51) slider_set_pane_g6_copy1_ParamLimits

0x1745,	// (0x00047c51) slider_set_pane_g6_copy1

0x86cc,	// (0x0004ebd8) slider_set_pane_g7_copy1_ParamLimits

0x86cc,	// (0x0004ebd8) slider_set_pane_g7_copy1

0xb6dc,	// (0x00051be8) bg_set_opt_pane_cp2_copy1

0x66ba,	// (0x0004cbc6) setting_slider_graphic_pane_g1_copy1

0xc0a3,	// (0x000525af) setting_slider_graphic_pane_t1_copy1

0xc0b3,	// (0x000525bf) setting_slider_graphic_pane_t2_copy1

0xc0c3,	// (0x000525cf) slider_set_pane_cp_copy1

0x66cb,	// (0x0004cbd7) input_focus_pane_cp1_copy1

0x66d4,	// (0x0004cbe0) list_set_text_pane_copy1

0x66dc,	// (0x0004cbe8) setting_text_pane_g1_copy1

0x385e,	// (0x00049d6a) set_text_pane_t1_copy1

0x66cb,	// (0x0004cbd7) input_focus_pane_cp2_copy1

0x66dc,	// (0x0004cbe8) setting_code_pane_g1_copy1

0xc0cb,	// (0x000525d7) setting_code_pane_t1_copy1

0x8f5e,	// (0x0004f46a) list_set_graphic_pane_copy1

0xb6dc,	// (0x00051be8) bg_set_opt_pane_cp4_copy1

0x8f70,	// (0x0004f47c) list_set_graphic_pane_g1_copy1_ParamLimits

0x8f70,	// (0x0004f47c) list_set_graphic_pane_g1_copy1

0xc0d9,	// (0x000525e5) list_set_graphic_pane_g2_copy1

0x8f88,	// (0x0004f494) list_set_graphic_pane_t1_copy1_ParamLimits

0x8f88,	// (0x0004f494) list_set_graphic_pane_t1_copy1

0xec9a,	// (0x000551a6) rs_clock_indi_pane_g1

0x66e5,	// (0x0004cbf1) rs_clock_indi_pane_t1

0x62f8,	// (0x0004c804) rs_indi_pane

0x66f3,	// (0x0004cbff) rs_indi_pane_g1

0x66fc,	// (0x0004cc08) rs_indi_pane_g2

0x6705,	// (0x0004cc11) rs_indi_pane_g3

0x0002,

0xfe10,	// (0x0005631c) rs_indi_pane_g

0xc9a2,	// (0x00052eae) bg_popup_preview_window_pane_cp03

0x670e,	// (0x0004cc1a) popup_fep_tooltip_window_t1

0x49a6,	// (0x0004aeb2) popup_note2_window_g2_ParamLimits

0x49a6,	// (0x0004aeb2) popup_note2_window_g2

0x0001,

0xfbf8,	// (0x00056104) popup_note2_window_g_ParamLimits

0xfbf8,	// (0x00056104) popup_note2_window_g

0x4ea1,	// (0x0004b3ad) bg_popup_sub_pane_cp11_ParamLimits

0x4eae,	// (0x0004b3ba) cell_ai3_links_pane_g1_ParamLimits

0x4ec5,	// (0x0004b3d1) cell_ai3_links_pane_t1

0x385e,	// (0x00049d6a) set_text_pane_t1_copy1_ParamLimits

0xc8b3,	// (0x00052dbf) cell_graphic_popup_pane_cp2_ParamLimits

0xc8b3,	// (0x00052dbf) cell_graphic_popup_pane_cp2

0x671c,	// (0x0004cc28) cell_graphic_popup_pane_g1_cp2

0xba8e,	// (0x00051f9a) cell_graphic_popup_pane_g2_cp2

0x6724,	// (0x0004cc30) cell_graphic_popup_pane_g3_cp2

0x672c,	// (0x0004cc38) cell_graphic_popup_pane_t2_cp2

0xba9f,	// (0x00051fab) grid_highlight_pane_cp3_cp2

0xc276,	// (0x00052782) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xbe40,	// (0x0005234c) main_tmo_pane_ParamLimits

0xa7c6,	// (0x00050cd2) popup_tmo_big_image_note_window

0xb313,	// (0x0005181f) cell_ai5_widget_list_pane

0xb31b,	// (0x00051827) cell_ai5_widget_lrg_icon_pane

0xb5ee,	// (0x00051afa) tmo_note_info_pane_t1_ParamLimits

0xb603,	// (0x00051b0f) tmo_note_info_pane_t2_ParamLimits

0xb61a,	// (0x00051b26) tmo_note_info_pane_t3_ParamLimits

0x656d,	// (0x0004ca79) tmo_note_info_pane_t4_ParamLimits

0x657f,	// (0x0004ca8b) tmo_note_info_pane_t5_ParamLimits

0xfdfe,	// (0x0005630a) tmo_note_info_pane_t_ParamLimits

0xb694,	// (0x00051ba0) settings_container_pane_ParamLimits

0x66c3,	// (0x0004cbcf) indicator_popup_pane_cp5

0x66c3,	// (0x0004cbcf) indicator_popup_pane_cp6

0x8f5e,	// (0x0004f46a) list_set_graphic_pane_copy1_ParamLimits

0xb6c8,	// (0x00051bd4) bg_popup_window_pane_cp23

0x673a,	// (0x0004cc46) popup_tmo_big_image_note_window_g1

0x6744,	// (0x0004cc50) popup_tmo_big_image_note_window_t1

0x6754,	// (0x0004cc60) popup_tmo_big_image_note_window_t2

0x6764,	// (0x0004cc70) popup_tmo_big_image_note_window_t3

0x0002,

0xfe17,	// (0x00056323) popup_tmo_big_image_note_window_t

0xc0e1,	// (0x000525ed) cell_ai5_widget_lrg_icon_pane_g1

0xc0e9,	// (0x000525f5) cell_ai5_widget_lrg_icon_pane_t1

0xc0f7,	// (0x00052603) cell_ai5_widget_list_row_pane_ParamLimits

0xc0f7,	// (0x00052603) cell_ai5_widget_list_row_pane

0xc110,	// (0x0005261c) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xc110,	// (0x0005261c) cell_ai5_widget_list_row_pane_g1

0xc11d,	// (0x00052629) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xc11d,	// (0x00052629) cell_ai5_widget_list_row_pane_t1

0xc135,	// (0x00052641) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xc135,	// (0x00052641) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfe1e,	// (0x0005632a) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfe1e,	// (0x0005632a) cell_ai5_widget_list_row_pane_t

0x05f1,	// (0x00046afd) main_fep_vtchi_ss_pane

0x6774,	// (0x0004cc80) popup_fep_char_pre_window

0x677c,	// (0x0004cc88) popup_fep_ituss_window

0x6787,	// (0x0004cc93) popup_fep_vkbss_window

0x6790,	// (0x0004cc9c) grid_vkbss_keypad_pane_ParamLimits

0x6790,	// (0x0004cc9c) grid_vkbss_keypad_pane

0x67a0,	// (0x0004ccac) ituss_keypad_pane

0x67a8,	// (0x0004ccb4) aid_vkbss_key_offset_ParamLimits

0x67a8,	// (0x0004ccb4) aid_vkbss_key_offset

0x67b7,	// (0x0004ccc3) cell_vkbss_key_pane_ParamLimits

0x67b7,	// (0x0004ccc3) cell_vkbss_key_pane

0x67cd,	// (0x0004ccd9) bg_cell_vkbss_key_g1_ParamLimits

0x67cd,	// (0x0004ccd9) bg_cell_vkbss_key_g1

0x67d9,	// (0x0004cce5) cell_vkbss_key_3p_pane_ParamLimits

0x67d9,	// (0x0004cce5) cell_vkbss_key_3p_pane

0x67f3,	// (0x0004ccff) cell_vkbss_key_g1_ParamLimits

0x67f3,	// (0x0004ccff) cell_vkbss_key_g1

0x680d,	// (0x0004cd19) cell_vkbss_key_t1_ParamLimits

0x680d,	// (0x0004cd19) cell_vkbss_key_t1

0x6838,	// (0x0004cd44) cell_ituss_key_pane_ParamLimits

0x6838,	// (0x0004cd44) cell_ituss_key_pane

0x6847,	// (0x0004cd53) bg_cell_ituss_key_g1_ParamLimits

0x6847,	// (0x0004cd53) bg_cell_ituss_key_g1

0x6853,	// (0x0004cd5f) cell_ituss_key_pane_g1_ParamLimits

0x6853,	// (0x0004cd5f) cell_ituss_key_pane_g1

0x685f,	// (0x0004cd6b) cell_ituss_key_pane_g2_ParamLimits

0x685f,	// (0x0004cd6b) cell_ituss_key_pane_g2

0x0001,

0xfe23,	// (0x0005632f) cell_ituss_key_pane_g_ParamLimits

0xfe23,	// (0x0005632f) cell_ituss_key_pane_g

0x6872,	// (0x0004cd7e) cell_ituss_key_t1_ParamLimits

0x6872,	// (0x0004cd7e) cell_ituss_key_t1

0x6890,	// (0x0004cd9c) cell_ituss_key_t2_ParamLimits

0x6890,	// (0x0004cd9c) cell_ituss_key_t2

0x68af,	// (0x0004cdbb) cell_ituss_key_t3_ParamLimits

0x68af,	// (0x0004cdbb) cell_ituss_key_t3

0x68ce,	// (0x0004cdda) cell_ituss_key_t4_ParamLimits

0x68ce,	// (0x0004cdda) cell_ituss_key_t4

0x0003,

0xfe28,	// (0x00056334) cell_ituss_key_t_ParamLimits

0xfe28,	// (0x00056334) cell_ituss_key_t

0x68ed,	// (0x0004cdf9) cell_vkbss_key_3p_pane_g1

0x68f5,	// (0x0004ce01) cell_vkbss_key_3p_pane_g2

0x68fd,	// (0x0004ce09) cell_vkbss_key_3p_pane_g3

0x0002,

0xfe31,	// (0x0005633d) cell_vkbss_key_3p_pane_g

0xb6c8,	// (0x00051bd4) bg_popup_fep_char_preview_window_cp02

0x6905,	// (0x0004ce11) popup_fep_char_pre_window_t1

0xb309,	// (0x00051815) main_ai5_sk_pane

0x65f9,	// (0x0004cb05) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x6605,	// (0x0004cb11) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x6619,	// (0x0004cb25) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x6628,	// (0x0004cb34) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfe09,	// (0x00056315) cell_contacts_ai5_widget_pane_g_ParamLimits

0x663b,	// (0x0004cb47) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xbe40,	// (0x0005234c) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xc67f,	// (0x00052b8b) main_ai5_sk_pane_g1
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

} // end of namespace AknLayoutScalable_Abrw_phl_av_qhd_lsc_tch_Large

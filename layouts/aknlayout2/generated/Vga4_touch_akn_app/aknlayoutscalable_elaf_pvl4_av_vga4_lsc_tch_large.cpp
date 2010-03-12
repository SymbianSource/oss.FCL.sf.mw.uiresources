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

#include "aknlayoutscalable_elaf_pvl4_av_vga4_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvl4_av_vga4_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x00048272 };

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
0xa1e9,	// (0x0005245b) Screen

0xa1f5,	// (0x00052467) application_window_ParamLimits

0xa1f5,	// (0x00052467) application_window

0x6cd9,	// (0x0004ef4b) screen_g1

0xa22d,	// (0x0005249f) area_bottom_pane_ParamLimits

0xa22d,	// (0x0005249f) area_bottom_pane

0xeed0,	// (0x00057142) area_top_pane_ParamLimits

0xeed0,	// (0x00057142) area_top_pane

0xef64,	// (0x000571d6) main_pane_ParamLimits

0xef64,	// (0x000571d6) main_pane

0x6ce3,	// (0x0004ef55) misc_graphics

0xbdbc,	// (0x0005402e) battery_pane_ParamLimits

0xbdbc,	// (0x0005402e) battery_pane

0x3449,	// (0x0004b6bb) bg_status_flat_pane_g8

0x3451,	// (0x0004b6c3) bg_status_flat_pane_g9

0x27cb,	// (0x0004aa3d) context_pane_ParamLimits

0x27cb,	// (0x0004aa3d) context_pane

0xbf33,	// (0x000541a5) navi_pane_ParamLimits

0xbf33,	// (0x000541a5) navi_pane

0xbfbd,	// (0x0005422f) signal_pane_ParamLimits

0xbfbd,	// (0x0005422f) signal_pane

0x0008,

0xf87f,	// (0x00057af1) bg_status_flat_pane_g

0xc04d,	// (0x000542bf) status_pane_g1_ParamLimits

0xc04d,	// (0x000542bf) status_pane_g1

0xc063,	// (0x000542d5) status_pane_g2_ParamLimits

0xc063,	// (0x000542d5) status_pane_g2

0x2a0c,	// (0x0004ac7e) status_pane_g3_ParamLimits

0x2a0c,	// (0x0004ac7e) status_pane_g3

0x0004,

0xf7ab,	// (0x00057a1d) status_pane_g_ParamLimits

0xf7ab,	// (0x00057a1d) status_pane_g

0xc06f,	// (0x000542e1) title_pane_ParamLimits

0xc06f,	// (0x000542e1) title_pane

0xc828,	// (0x00054a9a) uni_indicator_pane_ParamLimits

0xc828,	// (0x00054a9a) uni_indicator_pane

0x261d,	// (0x0004a88f) bg_list_pane_ParamLimits

0x261d,	// (0x0004a88f) bg_list_pane

0xb5f0,	// (0x00053862) find_pane

0xb5f8,	// (0x0005386a) listscroll_app_pane_ParamLimits

0xb5f8,	// (0x0005386a) listscroll_app_pane

0x2651,	// (0x0004a8c3) listscroll_form_pane

0xb604,	// (0x00053876) listscroll_gen_pane_ParamLimits

0xb604,	// (0x00053876) listscroll_gen_pane

0x2651,	// (0x0004a8c3) listscroll_set_pane

0x4002,	// (0x0004c274) main_idle_act_pane

0x231f,	// (0x0004a591) main_idle_trad_pane

0x231f,	// (0x0004a591) main_list_empty_pane

0x266b,	// (0x0004a8dd) main_midp_pane

0x2677,	// (0x0004a8e9) main_pane_g1_ParamLimits

0x2677,	// (0x0004a8e9) main_pane_g1

0xb618,	// (0x0005388a) popup_ai_message_window_ParamLimits

0xb618,	// (0x0005388a) popup_ai_message_window

0xb6b8,	// (0x0005392a) popup_fep_china_uni_window_ParamLimits

0xb6b8,	// (0x0005392a) popup_fep_china_uni_window

0x09bf,	// (0x00048c31) popup_fep_japan_candidate_window_ParamLimits

0x09bf,	// (0x00048c31) popup_fep_japan_candidate_window

0x09e9,	// (0x00048c5b) popup_fep_japan_predictive_window_ParamLimits

0x09e9,	// (0x00048c5b) popup_fep_japan_predictive_window

0xb718,	// (0x0005398a) popup_find_window

0xb735,	// (0x000539a7) popup_grid_graphic_window_ParamLimits

0xb735,	// (0x000539a7) popup_grid_graphic_window

0x0a5a,	// (0x00048ccc) popup_large_graphic_colour_window

0xb7d9,	// (0x00053a4b) popup_menu_window_ParamLimits

0xb7d9,	// (0x00053a4b) popup_menu_window

0xb9c9,	// (0x00053c3b) popup_note_image_window

0xb989,	// (0x00053bfb) popup_note_wait_window_ParamLimits

0xb989,	// (0x00053bfb) popup_note_wait_window

0xb9e1,	// (0x00053c53) popup_note_window_ParamLimits

0xb9e1,	// (0x00053c53) popup_note_window

0xba8f,	// (0x00053d01) popup_query_code_window_ParamLimits

0xba8f,	// (0x00053d01) popup_query_code_window

0x0cc6,	// (0x00048f38) popup_query_data_code_window_ParamLimits

0x0cc6,	// (0x00048f38) popup_query_data_code_window

0xbacf,	// (0x00053d41) popup_query_data_window_ParamLimits

0xbacf,	// (0x00053d41) popup_query_data_window

0xbb63,	// (0x00053dd5) popup_query_sat_info_window_ParamLimits

0xbb63,	// (0x00053dd5) popup_query_sat_info_window

0xbc0e,	// (0x00053e80) popup_snote_single_graphic_window_ParamLimits

0xbc0e,	// (0x00053e80) popup_snote_single_graphic_window

0xbc0e,	// (0x00053e80) popup_snote_single_text_window_ParamLimits

0xbc0e,	// (0x00053e80) popup_snote_single_text_window

0x0d61,	// (0x00048fd3) popup_sub_window_general

0x0ea7,	// (0x00049119) popup_window_general_ParamLimits

0x0ea7,	// (0x00049119) popup_window_general

0x2685,	// (0x0004a8f7) power_save_pane

0xb45e,	// (0x000536d0) control_pane_g1_ParamLimits

0xb45e,	// (0x000536d0) control_pane_g1

0xb487,	// (0x000536f9) control_pane_g2_ParamLimits

0xb487,	// (0x000536f9) control_pane_g2

0x25e0,	// (0x0004a852) control_pane_g3_ParamLimits

0x25e0,	// (0x0004a852) control_pane_g3

0x0007,

0xf793,	// (0x00057a05) control_pane_g_ParamLimits

0xf793,	// (0x00057a05) control_pane_g

0xb4e9,	// (0x0005375b) control_pane_t1_ParamLimits

0xb4e9,	// (0x0005375b) control_pane_t1

0xb547,	// (0x000537b9) control_pane_t2_ParamLimits

0xb547,	// (0x000537b9) control_pane_t2

0x0002,

0xf7a4,	// (0x00057a16) control_pane_t_ParamLimits

0xf7a4,	// (0x00057a16) control_pane_t

0x2501,	// (0x0004a773) navi_navi_volume_pane_cp1

0x250a,	// (0x0004a77c) status_small_icon_pane

0x2512,	// (0x0004a784) status_small_pane_g1_ParamLimits

0x2512,	// (0x0004a784) status_small_pane_g1

0x2546,	// (0x0004a7b8) status_small_pane_g2_ParamLimits

0x2546,	// (0x0004a7b8) status_small_pane_g2

0x2552,	// (0x0004a7c4) status_small_pane_g3_ParamLimits

0x2552,	// (0x0004a7c4) status_small_pane_g3

0x255e,	// (0x0004a7d0) status_small_pane_g4_ParamLimits

0x255e,	// (0x0004a7d0) status_small_pane_g4

0x256a,	// (0x0004a7dc) status_small_pane_g5_ParamLimits

0x256a,	// (0x0004a7dc) status_small_pane_g5

0x2579,	// (0x0004a7eb) status_small_pane_g6_ParamLimits

0x2579,	// (0x0004a7eb) status_small_pane_g6

0x0007,

0xf782,	// (0x000579f4) status_small_pane_g_ParamLimits

0xf782,	// (0x000579f4) status_small_pane_g

0x25a9,	// (0x0004a81b) status_small_pane_t1

0x25cc,	// (0x0004a83e) status_small_wait_pane_ParamLimits

0x25cc,	// (0x0004a83e) status_small_wait_pane

0xb211,	// (0x00053483) aid_levels_signal_ParamLimits

0xb211,	// (0x00053483) aid_levels_signal

0xb229,	// (0x0005349b) signal_pane_g1_ParamLimits

0xb229,	// (0x0005349b) signal_pane_g1

0xb244,	// (0x000534b6) signal_pane_g2_ParamLimits

0xb244,	// (0x000534b6) signal_pane_g2

0x0003,

0xf713,	// (0x00057985) signal_pane_g_ParamLimits

0xf713,	// (0x00057985) signal_pane_g

0xe8f9,	// (0x00056b6b) context_pane_g1

0xa3aa,	// (0x0005261c) title_pane_g1

0xa3e1,	// (0x00052653) title_pane_t1

0x6cf9,	// (0x0004ef6b) title_pane_t2

0x6d1f,	// (0x0004ef91) title_pane_t3

0x0002,

0xf55d,	// (0x000577cf) title_pane_t

0xc850,	// (0x00054ac2) aid_levels_battery_ParamLimits

0xc850,	// (0x00054ac2) aid_levels_battery

0xc86c,	// (0x00054ade) battery_pane_g1_ParamLimits

0xc86c,	// (0x00054ade) battery_pane_g1

0xc889,	// (0x00054afb) battery_pane_g2_ParamLimits

0xc889,	// (0x00054afb) battery_pane_g2

0x0001,

0xf7b6,	// (0x00057a28) battery_pane_g_ParamLimits

0xf7b6,	// (0x00057a28) battery_pane_g

0xcb3f,	// (0x00054db1) uni_indicator_pane_g1

0xcb54,	// (0x00054dc6) uni_indicator_pane_g2

0xcb69,	// (0x00054ddb) uni_indicator_pane_g3

0x0005,

0xf927,	// (0x00057b99) uni_indicator_pane_g

0x218d,	// (0x0004a3ff) navi_icon_pane_ParamLimits

0x218d,	// (0x0004a3ff) navi_icon_pane

0xeb2b,	// (0x00056d9d) navi_midp_pane

0x21a9,	// (0x0004a41b) navi_navi_pane

0x21b3,	// (0x0004a425) navi_text_pane_ParamLimits

0x21b3,	// (0x0004a425) navi_text_pane

0x6cd9,	// (0x0004ef4b) status_small_wait_pane_g1

0xa6ba,	// (0x0005292c) status_small_wait_pane_g2

0x0001,

0xf922,	// (0x00057b94) status_small_wait_pane_g

0xcaa6,	// (0x00054d18) navi_navi_icon_text_pane

0xcaae,	// (0x00054d20) navi_navi_pane_g1_ParamLimits

0xcaae,	// (0x00054d20) navi_navi_pane_g1

0xcac0,	// (0x00054d32) navi_navi_pane_g2_ParamLimits

0xcac0,	// (0x00054d32) navi_navi_pane_g2

0x0001,

0xf8f0,	// (0x00057b62) navi_navi_pane_g_ParamLimits

0xf8f0,	// (0x00057b62) navi_navi_pane_g

0x3ad8,	// (0x0004bd4a) navi_navi_tabs_pane

0xcad2,	// (0x00054d44) navi_navi_text_pane

0xcaa6,	// (0x00054d18) navi_navi_volume_pane

0xca94,	// (0x00054d06) navi_text_pane_t1

0xca88,	// (0x00054cfa) navi_icon_pane_g1

0x39c9,	// (0x0004bc3b) navi_navi_text_pane_t1

0xc29a,	// (0x0005450c) navi_navi_volume_pane_g1

0xc2a2,	// (0x00054514) volume_small_pane

0xc9d0,	// (0x00054c42) navi_navi_icon_text_pane_g1

0xc9d8,	// (0x00054c4a) navi_navi_icon_text_pane_t1

0x21a9,	// (0x0004a41b) navi_tabs_2_long_pane

0x21a9,	// (0x0004a41b) navi_tabs_2_pane

0x21a9,	// (0x0004a41b) navi_tabs_3_long_pane

0x21a9,	// (0x0004a41b) navi_tabs_3_pane

0x21a9,	// (0x0004a41b) navi_tabs_4_pane

0xc27a,	// (0x000544ec) tabs_2_active_pane_ParamLimits

0xc27a,	// (0x000544ec) tabs_2_active_pane

0xc28a,	// (0x000544fc) tabs_2_passive_pane_ParamLimits

0xc28a,	// (0x000544fc) tabs_2_passive_pane

0xc248,	// (0x000544ba) tabs_3_active_pane_ParamLimits

0xc248,	// (0x000544ba) tabs_3_active_pane

0xc258,	// (0x000544ca) tabs_3_passive_pane_ParamLimits

0xc258,	// (0x000544ca) tabs_3_passive_pane

0xc269,	// (0x000544db) tabs_3_passive_pane_cp_ParamLimits

0xc269,	// (0x000544db) tabs_3_passive_pane_cp

0xc204,	// (0x00054476) tabs_4_active_pane_ParamLimits

0xc204,	// (0x00054476) tabs_4_active_pane

0xc215,	// (0x00054487) tabs_4_passive_pane_ParamLimits

0xc215,	// (0x00054487) tabs_4_passive_pane

0xc226,	// (0x00054498) tabs_4_passive_pane_cp_ParamLimits

0xc226,	// (0x00054498) tabs_4_passive_pane_cp

0xc237,	// (0x000544a9) tabs_4_passive_pane_cp2_ParamLimits

0xc237,	// (0x000544a9) tabs_4_passive_pane_cp2

0xc1e0,	// (0x00054452) tabs_2_long_active_pane_ParamLimits

0xc1e0,	// (0x00054452) tabs_2_long_active_pane

0xc1f2,	// (0x00054464) tabs_2_long_passive_pane_ParamLimits

0xc1f2,	// (0x00054464) tabs_2_long_passive_pane

0xc195,	// (0x00054407) tabs_3_long_active_pane_ParamLimits

0xc195,	// (0x00054407) tabs_3_long_active_pane

0xc1ae,	// (0x00054420) tabs_3_long_passive_pane_ParamLimits

0xc1ae,	// (0x00054420) tabs_3_long_passive_pane

0xc1c7,	// (0x00054439) tabs_3_long_passive_pane_cp_ParamLimits

0xc1c7,	// (0x00054439) tabs_3_long_passive_pane_cp

0x1001,	// (0x00049273) volume_small_pane_g1

0xc144,	// (0x000543b6) volume_small_pane_g2

0xc14d,	// (0x000543bf) volume_small_pane_g3

0xc156,	// (0x000543c8) volume_small_pane_g4

0xc15f,	// (0x000543d1) volume_small_pane_g5

0xc168,	// (0x000543da) volume_small_pane_g6

0xc171,	// (0x000543e3) volume_small_pane_g7

0xc17a,	// (0x000543ec) volume_small_pane_g8

0xc183,	// (0x000543f5) volume_small_pane_g9

0xc18c,	// (0x000543fe) volume_small_pane_g10

0x0009,

0xf8bc,	// (0x00057b2e) volume_small_pane_g

0x6e64,	// (0x0004f0d6) bg_active_tab_pane_cp2_ParamLimits

0x6e64,	// (0x0004f0d6) bg_active_tab_pane_cp2

0xa46d,	// (0x000526df) tabs_3_active_pane_g1

0xa475,	// (0x000526e7) tabs_3_active_pane_t1

0x6e64,	// (0x0004f0d6) bg_passive_tab_pane_cp2_ParamLimits

0x6e64,	// (0x0004f0d6) bg_passive_tab_pane_cp2

0xa46d,	// (0x000526df) tabs_3_passive_pane_g1

0xa475,	// (0x000526e7) tabs_3_passive_pane_t1

0x6e64,	// (0x0004f0d6) bg_active_tab_pane_cp3_ParamLimits

0x6e64,	// (0x0004f0d6) bg_active_tab_pane_cp3

0xa487,	// (0x000526f9) tabs_4_active_pane_g1

0xa48f,	// (0x00052701) tabs_4_active_pane_t1

0x6e64,	// (0x0004f0d6) bg_passive_tab_pane_cp3_ParamLimits

0x6e64,	// (0x0004f0d6) bg_passive_tab_pane_cp3

0xa487,	// (0x000526f9) tabs_4_1_passive_pane_g1

0xa48f,	// (0x00052701) tabs_4_1_passive_pane_t1

0x266b,	// (0x0004a8dd) list_highlight_pane_cp2

0xcc27,	// (0x00054e99) list_set_pane_ParamLimits

0xcc27,	// (0x00054e99) list_set_pane

0xccef,	// (0x00054f61) main_pane_set_t1_ParamLimits

0xccef,	// (0x00054f61) main_pane_set_t1

0xcd0f,	// (0x00054f81) main_pane_set_t2_ParamLimits

0xcd0f,	// (0x00054f81) main_pane_set_t2

0xcd23,	// (0x00054f95) main_pane_set_t3_ParamLimits

0xcd23,	// (0x00054f95) main_pane_set_t3

0xcd37,	// (0x00054fa9) main_pane_set_t4_ParamLimits

0xcd37,	// (0x00054fa9) main_pane_set_t4

0x0003,

0xf98c,	// (0x00057bfe) main_pane_set_t_ParamLimits

0xf98c,	// (0x00057bfe) main_pane_set_t

0xcd4b,	// (0x00054fbd) setting_code_pane

0x4156,	// (0x0004c3c8) setting_slider_graphic_pane

0x4156,	// (0x0004c3c8) setting_slider_pane

0x4156,	// (0x0004c3c8) setting_text_pane

0x4156,	// (0x0004c3c8) setting_volume_pane

0xf4a0,	// (0x00057712) volume_set_pane

0x6d31,	// (0x0004efa3) bg_set_opt_pane_cp

0xf4aa,	// (0x0005771c) setting_slider_pane_t1

0xf4c3,	// (0x00057735) setting_slider_pane_t2

0xf4dd,	// (0x0005774f) setting_slider_pane_t3

0x0002,

0xf564,	// (0x000577d6) setting_slider_pane_t

0xf4f5,	// (0x00057767) slider_set_pane

0x6ce3,	// (0x0004ef55) bg_set_opt_pane_cp2

0x6d3f,	// (0x0004efb1) setting_slider_graphic_pane_g1

0xf50b,	// (0x0005777d) setting_slider_graphic_pane_t1

0xf51b,	// (0x0005778d) setting_slider_graphic_pane_t2

0x0001,

0xf56b,	// (0x000577dd) setting_slider_graphic_pane_t

0xf52b,	// (0x0005779d) slider_set_pane_cp

0x6ce3,	// (0x0004ef55) input_focus_pane_cp1

0x3fe9,	// (0x0004c25b) list_set_text_pane

0x6cd9,	// (0x0004ef4b) setting_text_pane_g1

0x6ce3,	// (0x0004ef55) input_focus_pane_cp2

0x6cd9,	// (0x0004ef4b) setting_code_pane_g1

0x6d48,	// (0x0004efba) setting_code_pane_t1

0xe788,	// (0x000569fa) set_text_pane_t1_ParamLimits

0xe788,	// (0x000569fa) set_text_pane_t1

0xaba9,	// (0x00052e1b) set_opt_bg_pane_g1

0xabb1,	// (0x00052e23) set_opt_bg_pane_g2

0x3fc1,	// (0x0004c233) set_opt_bg_pane_g3

0xabc1,	// (0x00052e33) set_opt_bg_pane_g4

0xabc9,	// (0x00052e3b) set_opt_bg_pane_g5

0xabd1,	// (0x00052e43) set_opt_bg_pane_g6

0x3fcb,	// (0x0004c23d) set_opt_bg_pane_g7

0x3fd5,	// (0x0004c247) set_opt_bg_pane_g8

0x3fdf,	// (0x0004c251) set_opt_bg_pane_g9

0x0008,

0xf979,	// (0x00057beb) set_opt_bg_pane_g

0x3fb4,	// (0x0004c226) slider_set_pane_g1

0x11e5,	// (0x00049457) slider_set_pane_g2

0x0006,

0xf96a,	// (0x00057bdc) slider_set_pane_g

0x116d,	// (0x000493df) volume_set_pane_g1

0x1177,	// (0x000493e9) volume_set_pane_g2

0x1181,	// (0x000493f3) volume_set_pane_g3

0x118b,	// (0x000493fd) volume_set_pane_g4

0x1195,	// (0x00049407) volume_set_pane_g5

0x119f,	// (0x00049411) volume_set_pane_g6

0x11a9,	// (0x0004941b) volume_set_pane_g7

0x11b3,	// (0x00049425) volume_set_pane_g8

0x11bd,	// (0x0004942f) volume_set_pane_g9

0x11c7,	// (0x00049439) volume_set_pane_g10

0x0009,

0xf942,	// (0x00057bb4) volume_set_pane_g

0xa4a1,	// (0x00052713) indicator_pane_ParamLimits

0xa4a1,	// (0x00052713) indicator_pane

0xa4cd,	// (0x0005273f) main_idle_pane_g2_ParamLimits

0xa4cd,	// (0x0005273f) main_idle_pane_g2

0xa505,	// (0x00052777) main_pane_idle_g1_ParamLimits

0xa505,	// (0x00052777) main_pane_idle_g1

0x6d56,	// (0x0004efc8) popup_clock_digital_analogue_window_ParamLimits

0x6d56,	// (0x0004efc8) popup_clock_digital_analogue_window

0xa533,	// (0x000527a5) soft_indicator_pane_ParamLimits

0xa533,	// (0x000527a5) soft_indicator_pane

0xa54f,	// (0x000527c1) wallpaper_pane_ParamLimits

0xa54f,	// (0x000527c1) wallpaper_pane

0x6cd9,	// (0x0004ef4b) wallpaper_pane_g1

0xa561,	// (0x000527d3) indicator_pane_g1_ParamLimits

0xa561,	// (0x000527d3) indicator_pane_g1

0x4406,	// (0x0004c678) navi_navi_icon_text_pane_srt_g1

0x6d84,	// (0x0004eff6) soft_indicator_pane_t1

0x6d9e,	// (0x0004f010) aid_ps_area_pane

0xa57a,	// (0x000527ec) aid_ps_clock_pane

0x6daf,	// (0x0004f021) aid_ps_indicator_pane

0x6dbb,	// (0x0004f02d) indicator_ps_pane_ParamLimits

0x6dbb,	// (0x0004f02d) indicator_ps_pane

0x6dca,	// (0x0004f03c) power_save_pane_g1_ParamLimits

0x6dca,	// (0x0004f03c) power_save_pane_g1

0x6dd6,	// (0x0004f048) power_save_pane_g2_ParamLimits

0x6dd6,	// (0x0004f048) power_save_pane_g2

0xeeb0,	// (0x00057122) aid_navinavi_width_pane

0x6d9e,	// (0x0004f010) aid_ps_area_pane_ParamLimits

0x0001,

0xf570,	// (0x000577e2) power_save_pane_g_ParamLimits

0xf570,	// (0x000577e2) power_save_pane_g

0x6de4,	// (0x0004f056) power_save_pane_t1_ParamLimits

0x6de4,	// (0x0004f056) power_save_pane_t1

0xa57a,	// (0x000527ec) aid_ps_clock_pane_ParamLimits

0x6daf,	// (0x0004f021) aid_ps_indicator_pane_ParamLimits

0x6df6,	// (0x0004f068) power_save_pane_t4_ParamLimits

0x6df6,	// (0x0004f068) power_save_pane_t4

0x0001,

0xf575,	// (0x000577e7) power_save_pane_t_ParamLimits

0xf575,	// (0x000577e7) power_save_pane_t

0x6e20,	// (0x0004f092) power_save_t3_ParamLimits

0x6e20,	// (0x0004f092) power_save_t3

0x6e0b,	// (0x0004f07d) power_save_t2_ParamLimits

0x6e0b,	// (0x0004f07d) power_save_t2

0x6e35,	// (0x0004f0a7) indicator_ps_pane_g1

0xa588,	// (0x000527fa) ai_gene_pane_ParamLimits

0xa588,	// (0x000527fa) ai_gene_pane

0xa59f,	// (0x00052811) ai_links_pane_ParamLimits

0xa59f,	// (0x00052811) ai_links_pane

0xa5b7,	// (0x00052829) indicator_pane_cp1_ParamLimits

0xa5b7,	// (0x00052829) indicator_pane_cp1

0xa5c6,	// (0x00052838) main_pane_idle_g1_cp_ParamLimits

0xa5c6,	// (0x00052838) main_pane_idle_g1_cp

0x6e3e,	// (0x0004f0b0) popup_ai_links_title_window

0xa5de,	// (0x00052850) soft_indicator_pane_cp1_ParamLimits

0xa5de,	// (0x00052850) soft_indicator_pane_cp1

0x3d87,	// (0x0004bff9) ai_links_pane_g1

0x3d90,	// (0x0004c002) grid_ai_links_pane

0xcb36,	// (0x00054da8) ai_gene_pane_1

0x3d75,	// (0x0004bfe7) ai_gene_pane_2

0x3d7e,	// (0x0004bff0) list_highlight_pane_cp4

0xcb12,	// (0x00054d84) cell_ai_link_pane_ParamLimits

0xcb12,	// (0x00054d84) cell_ai_link_pane

0x3d44,	// (0x0004bfb6) cell_ai_link_pane_g1

0xa6ba,	// (0x0005292c) cell_ai_link_pane_g2

0x0001,

0xf91d,	// (0x00057b8f) cell_ai_link_pane_g

0x6ce3,	// (0x0004ef55) grid_highlight_cp2

0x6ce3,	// (0x0004ef55) bg_popup_sub_pane_cp1

0x6e55,	// (0x0004f0c7) popup_ai_links_title_window_t1

0x3c90,	// (0x0004bf02) ai_gene_pane_1_g1_ParamLimits

0x3c90,	// (0x0004bf02) ai_gene_pane_1_g1

0x3c9c,	// (0x0004bf0e) ai_gene_pane_1_g2_ParamLimits

0x3c9c,	// (0x0004bf0e) ai_gene_pane_1_g2

0x0001,

0xf913,	// (0x00057b85) ai_gene_pane_1_g_ParamLimits

0xf913,	// (0x00057b85) ai_gene_pane_1_g

0x3ca9,	// (0x0004bf1b) ai_gene_pane_1_t1_ParamLimits

0x3ca9,	// (0x0004bf1b) ai_gene_pane_1_t1

0x3cdd,	// (0x0004bf4f) grid_ai_soft_ind_pane

0x3c7b,	// (0x0004beed) ai_gene_pane_2_t1_ParamLimits

0x3c7b,	// (0x0004beed) ai_gene_pane_2_t1

0xa5f2,	// (0x00052864) main_pane_empty_t1_ParamLimits

0xa5f2,	// (0x00052864) main_pane_empty_t1

0xa60a,	// (0x0005287c) main_pane_empty_t2_ParamLimits

0xa60a,	// (0x0005287c) main_pane_empty_t2

0xa61f,	// (0x00052891) main_pane_empty_t3_ParamLimits

0xa61f,	// (0x00052891) main_pane_empty_t3

0xa631,	// (0x000528a3) main_pane_empty_t4_ParamLimits

0xa631,	// (0x000528a3) main_pane_empty_t4

0xa643,	// (0x000528b5) main_pane_empty_t5_ParamLimits

0xa643,	// (0x000528b5) main_pane_empty_t5

0x0004,

0xf57a,	// (0x000577ec) main_pane_empty_t_ParamLimits

0xf57a,	// (0x000577ec) main_pane_empty_t

0xabfa,	// (0x00052e6c) bg_popup_window_pane_ParamLimits

0xabfa,	// (0x00052e6c) bg_popup_window_pane

0x39d7,	// (0x0004bc49) find_popup_pane_cp2_ParamLimits

0x39d7,	// (0x0004bc49) find_popup_pane_cp2

0x39e3,	// (0x0004bc55) heading_pane_ParamLimits

0x39e3,	// (0x0004bc55) heading_pane

0x6ce3,	// (0x0004ef55) bg_popup_sub_pane

0xc9f5,	// (0x00054c67) bg_popup_window_pane_g1_ParamLimits

0xc9f5,	// (0x00054c67) bg_popup_window_pane_g1

0xca04,	// (0x00054c76) bg_popup_window_pane_g2_ParamLimits

0xca04,	// (0x00054c76) bg_popup_window_pane_g2

0xca10,	// (0x00054c82) bg_popup_window_pane_g3_ParamLimits

0xca10,	// (0x00054c82) bg_popup_window_pane_g3

0xca1c,	// (0x00054c8e) bg_popup_window_pane_g4_ParamLimits

0xca1c,	// (0x00054c8e) bg_popup_window_pane_g4

0xca2b,	// (0x00054c9d) bg_popup_window_pane_g5_ParamLimits

0xca2b,	// (0x00054c9d) bg_popup_window_pane_g5

0xca3b,	// (0x00054cad) bg_popup_window_pane_g6_ParamLimits

0xca3b,	// (0x00054cad) bg_popup_window_pane_g6

0xca47,	// (0x00054cb9) bg_popup_window_pane_g7_ParamLimits

0xca47,	// (0x00054cb9) bg_popup_window_pane_g7

0xca56,	// (0x00054cc8) bg_popup_window_pane_g8_ParamLimits

0xca56,	// (0x00054cc8) bg_popup_window_pane_g8

0xca65,	// (0x00054cd7) bg_popup_window_pane_g9_ParamLimits

0xca65,	// (0x00054cd7) bg_popup_window_pane_g9

0x39bd,	// (0x0004bc2f) bg_popup_window_pane_g10_ParamLimits

0x39bd,	// (0x0004bc2f) bg_popup_window_pane_g10

0x0009,

0xf8db,	// (0x00057b4d) bg_popup_window_pane_g_ParamLimits

0xf8db,	// (0x00057b4d) bg_popup_window_pane_g

0x38e6,	// (0x0004bb58) bg_popup_heading_pane_ParamLimits

0x38e6,	// (0x0004bb58) bg_popup_heading_pane

0x126b,	// (0x000494dd) tabs_4_passive_pane_cp_srt_ParamLimits

0x126b,	// (0x000494dd) tabs_4_passive_pane_cp_srt

0x127d,	// (0x000494ef) tabs_4_passive_pane_srt_ParamLimits

0x38fa,	// (0x0004bb6c) heading_pane_g2

0x127d,	// (0x000494ef) tabs_4_passive_pane_srt

0x2c93,	// (0x0004af05) bg_passive_tab_pane_cp3_srt_ParamLimits

0x2c93,	// (0x0004af05) bg_passive_tab_pane_cp3_srt

0x3902,	// (0x0004bb74) heading_pane_t1_ParamLimits

0x3902,	// (0x0004bb74) heading_pane_t1

0x3919,	// (0x0004bb8b) heading_pane_t2_ParamLimits

0x3919,	// (0x0004bb8b) heading_pane_t2

0x0001,

0xf8d6,	// (0x00057b48) heading_pane_t_ParamLimits

0xf8d6,	// (0x00057b48) heading_pane_t

0x3411,	// (0x0004b683) bg_popup_heading_pane_g1

0x34c0,	// (0x0004b732) bg_popup_heading_pane_g2

0x34ca,	// (0x0004b73c) bg_popup_heading_pane_g3

0x34d4,	// (0x0004b746) bg_popup_heading_pane_g4

0x34de,	// (0x0004b750) bg_popup_heading_pane_g5

0x34e8,	// (0x0004b75a) bg_popup_heading_pane_g6

0x34f0,	// (0x0004b762) bg_popup_heading_pane_g7

0x34f8,	// (0x0004b76a) bg_popup_heading_pane_g8

0x3502,	// (0x0004b774) bg_popup_heading_pane_g9

0x0008,

0xf892,	// (0x00057b04) bg_popup_heading_pane_g

0x2b97,	// (0x0004ae09) bg_popup_sub_pane_g1

0x2b9f,	// (0x0004ae11) bg_popup_sub_pane_g2

0x2ba7,	// (0x0004ae19) bg_popup_sub_pane_g3

0x2baf,	// (0x0004ae21) bg_popup_sub_pane_g4

0x2bb7,	// (0x0004ae29) bg_popup_sub_pane_g5

0x2bbf,	// (0x0004ae31) bg_popup_sub_pane_g6

0x2bc7,	// (0x0004ae39) bg_popup_sub_pane_g7

0x2bcf,	// (0x0004ae41) bg_popup_sub_pane_g8

0x2bd7,	// (0x0004ae49) bg_popup_sub_pane_g9

0x0008,

0xf86c,	// (0x00057ade) bg_popup_sub_pane_g

0x6e64,	// (0x0004f0d6) bg_popup_window_pane_cp5_ParamLimits

0x6e64,	// (0x0004f0d6) bg_popup_window_pane_cp5

0x6e80,	// (0x0004f0f2) popup_note_window_g1_ParamLimits

0x6e80,	// (0x0004f0f2) popup_note_window_g1

0x6e8c,	// (0x0004f0fe) popup_note_window_t1_ParamLimits

0x6e8c,	// (0x0004f0fe) popup_note_window_t1

0x6ea2,	// (0x0004f114) popup_note_window_t2_ParamLimits

0x6ea2,	// (0x0004f114) popup_note_window_t2

0x6eb8,	// (0x0004f12a) popup_note_window_t3_ParamLimits

0x6eb8,	// (0x0004f12a) popup_note_window_t3

0x6ece,	// (0x0004f140) popup_note_window_t4_ParamLimits

0x6ece,	// (0x0004f140) popup_note_window_t4

0x6ef6,	// (0x0004f168) popup_note_window_t5_ParamLimits

0x6ef6,	// (0x0004f168) popup_note_window_t5

0x0004,

0xf585,	// (0x000577f7) popup_note_window_t_ParamLimits

0xf585,	// (0x000577f7) popup_note_window_t

0x6f1a,	// (0x0004f18c) bg_popup_window_pane_cp6_ParamLimits

0x6f1a,	// (0x0004f18c) bg_popup_window_pane_cp6

0x338d,	// (0x0004b5ff) popup_note_image_window_g1_ParamLimits

0x338d,	// (0x0004b5ff) popup_note_image_window_g1

0x3399,	// (0x0004b60b) popup_note_image_window_g2_ParamLimits

0x3399,	// (0x0004b60b) popup_note_image_window_g2

0x0001,

0xf860,	// (0x00057ad2) popup_note_image_window_g_ParamLimits

0xf860,	// (0x00057ad2) popup_note_image_window_g

0x33b2,	// (0x0004b624) popup_note_image_window_t1_ParamLimits

0x33b2,	// (0x0004b624) popup_note_image_window_t1

0x33cb,	// (0x0004b63d) popup_note_image_window_t2_ParamLimits

0x33cb,	// (0x0004b63d) popup_note_image_window_t2

0x33e4,	// (0x0004b656) popup_note_image_window_t3_ParamLimits

0x33e4,	// (0x0004b656) popup_note_image_window_t3

0x0002,

0xf865,	// (0x00057ad7) popup_note_image_window_t_ParamLimits

0xf865,	// (0x00057ad7) popup_note_image_window_t

0x324d,	// (0x0004b4bf) bg_popup_window_pane_cp7_ParamLimits

0x324d,	// (0x0004b4bf) bg_popup_window_pane_cp7

0x327d,	// (0x0004b4ef) popup_note_wait_window_g1_ParamLimits

0x327d,	// (0x0004b4ef) popup_note_wait_window_g1

0x3289,	// (0x0004b4fb) popup_note_wait_window_g2_ParamLimits

0x3289,	// (0x0004b4fb) popup_note_wait_window_g2

0x0002,

0xf84e,	// (0x00057ac0) popup_note_wait_window_g_ParamLimits

0xf84e,	// (0x00057ac0) popup_note_wait_window_g

0x32a1,	// (0x0004b513) popup_note_wait_window_t1_ParamLimits

0x32a1,	// (0x0004b513) popup_note_wait_window_t1

0x32c8,	// (0x0004b53a) popup_note_wait_window_t2_ParamLimits

0x32c8,	// (0x0004b53a) popup_note_wait_window_t2

0x32e6,	// (0x0004b558) popup_note_wait_window_t3_ParamLimits

0x32e6,	// (0x0004b558) popup_note_wait_window_t3

0x32f9,	// (0x0004b56b) popup_note_wait_window_t4_ParamLimits

0x32f9,	// (0x0004b56b) popup_note_wait_window_t4

0x0004,

0xf855,	// (0x00057ac7) popup_note_wait_window_t_ParamLimits

0xf855,	// (0x00057ac7) popup_note_wait_window_t

0x331e,	// (0x0004b590) wait_bar_pane_ParamLimits

0x331e,	// (0x0004b590) wait_bar_pane

0x6ce3,	// (0x0004ef55) wait_anim_pane

0x6ce3,	// (0x0004ef55) wait_border_pane

0x6cd9,	// (0x0004ef4b) wait_anim_pane_g1

0x6cd9,	// (0x0004ef4b) wait_anim_pane_g2

0x0001,

0xf70e,	// (0x00057980) wait_anim_pane_g

0x31f1,	// (0x0004b463) wait_border_pane_g1

0x31fc,	// (0x0004b46e) wait_border_pane_g2

0x3205,	// (0x0004b477) wait_border_pane_g3

0x0002,

0xf847,	// (0x00057ab9) wait_border_pane_g

0x305b,	// (0x0004b2cd) bg_popup_window_pane_cp16_ParamLimits

0x305b,	// (0x0004b2cd) bg_popup_window_pane_cp16

0x315b,	// (0x0004b3cd) indicator_popup_pane_cp4_ParamLimits

0x315b,	// (0x0004b3cd) indicator_popup_pane_cp4

0x316f,	// (0x0004b3e1) popup_query_data_window_t1_ParamLimits

0x316f,	// (0x0004b3e1) popup_query_data_window_t1

0x3181,	// (0x0004b3f3) popup_query_data_window_t2_ParamLimits

0x3181,	// (0x0004b3f3) popup_query_data_window_t2

0x319a,	// (0x0004b40c) popup_query_data_window_t3_ParamLimits

0x319a,	// (0x0004b40c) popup_query_data_window_t3

0x0002,

0xf840,	// (0x00057ab2) popup_query_data_window_t_ParamLimits

0xf840,	// (0x00057ab2) popup_query_data_window_t

0x31b4,	// (0x0004b426) query_popup_data_pane_ParamLimits

0x31b4,	// (0x0004b426) query_popup_data_pane

0x31c8,	// (0x0004b43a) query_popup_data_pane_cp1_ParamLimits

0x31c8,	// (0x0004b43a) query_popup_data_pane_cp1

0x305b,	// (0x0004b2cd) bg_popup_window_pane_cp10_ParamLimits

0x305b,	// (0x0004b2cd) bg_popup_window_pane_cp10

0x308d,	// (0x0004b2ff) indicator_popup_pane_ParamLimits

0x308d,	// (0x0004b2ff) indicator_popup_pane

0x30af,	// (0x0004b321) popup_query_code_window_t1_ParamLimits

0x30af,	// (0x0004b321) popup_query_code_window_t1

0x30c9,	// (0x0004b33b) popup_query_code_window_t2_ParamLimits

0x30c9,	// (0x0004b33b) popup_query_code_window_t2

0x3112,	// (0x0004b384) popup_query_code_window_t3_ParamLimits

0x3112,	// (0x0004b384) popup_query_code_window_t3

0x0002,

0xf839,	// (0x00057aab) popup_query_code_window_t_ParamLimits

0xf839,	// (0x00057aab) popup_query_code_window_t

0x3141,	// (0x0004b3b3) query_popup_pane_ParamLimits

0x3141,	// (0x0004b3b3) query_popup_pane

0x6f1a,	// (0x0004f18c) bg_popup_window_pane_cp15_ParamLimits

0x6f1a,	// (0x0004f18c) bg_popup_window_pane_cp15

0x6f3a,	// (0x0004f1ac) indicator_popup_pane_cp1_ParamLimits

0x6f3a,	// (0x0004f1ac) indicator_popup_pane_cp1

0x6f4d,	// (0x0004f1bf) indicator_popup_pane_cp2_ParamLimits

0x6f4d,	// (0x0004f1bf) indicator_popup_pane_cp2

0x6f68,	// (0x0004f1da) popup_query_data_code_window_g1_ParamLimits

0x6f68,	// (0x0004f1da) popup_query_data_code_window_g1

0x6f7b,	// (0x0004f1ed) popup_query_data_code_window_t1_ParamLimits

0x6f7b,	// (0x0004f1ed) popup_query_data_code_window_t1

0x6f8d,	// (0x0004f1ff) popup_query_data_code_window_t2_ParamLimits

0x6f8d,	// (0x0004f1ff) popup_query_data_code_window_t2

0x6f9f,	// (0x0004f211) popup_query_data_code_window_t3_ParamLimits

0x6f9f,	// (0x0004f211) popup_query_data_code_window_t3

0xa655,	// (0x000528c7) popup_query_data_code_window_t4_ParamLimits

0xa655,	// (0x000528c7) popup_query_data_code_window_t4

0x0003,

0xf590,	// (0x00057802) popup_query_data_code_window_t_ParamLimits

0xf590,	// (0x00057802) popup_query_data_code_window_t

0x2149,	// (0x0004a3bb) list_single_midp_graphic_pane_g3

0xa66f,	// (0x000528e1) query_popup_data_pane_cp2_ParamLimits

0xa682,	// (0x000528f4) query_popup_pane_cp2_ParamLimits

0xa682,	// (0x000528f4) query_popup_pane_cp2

0x6ce3,	// (0x0004ef55) bg_popup_window_pane_cp11

0x3053,	// (0x0004b2c5) heading_pane_cp5

0xa772,	// (0x000529e4) listscroll_popup_info_pane

0x6ce3,	// (0x0004ef55) input_focus_pane_cp3

0xa69d,	// (0x0005290f) query_popup_pane_t1

0xa6ab,	// (0x0005291d) list_popup_info_pane_ParamLimits

0xa6ab,	// (0x0005291d) list_popup_info_pane

0xa6ba,	// (0x0005292c) listscroll_popup_info_pane_g1

0xa6c2,	// (0x00052934) scroll_pane_cp7

0xa6cc,	// (0x0005293e) popup_info_list_pane_t1_ParamLimits

0xa6cc,	// (0x0005293e) popup_info_list_pane_t1

0xa6e6,	// (0x00052958) popup_info_list_pane_t2_ParamLimits

0xa6e6,	// (0x00052958) popup_info_list_pane_t2

0x0001,

0xf599,	// (0x0005780b) popup_info_list_pane_t_ParamLimits

0xf599,	// (0x0005780b) popup_info_list_pane_t

0x6ce3,	// (0x0004ef55) bg_popup_window_pane_cp12

0x4420,	// (0x0004c692) find_popup_pane

0x6d31,	// (0x0004efa3) bg_popup_window_pane_cp3

0xa700,	// (0x00052972) heading_pane_cp3

0xa70c,	// (0x0005297e) listscroll_popup_graphic_pane

0x6ce3,	// (0x0004ef55) bg_popup_window_pane_cp4

0xa768,	// (0x000529da) heading_pane_cp4

0xa772,	// (0x000529e4) listscroll_popup_colour_pane

0xa77a,	// (0x000529ec) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xa77a,	// (0x000529ec) cell_large_graphic_colour_none_popup_pane

0xa78e,	// (0x00052a00) grid_large_graphic_colour_popup_pane_ParamLimits

0xa78e,	// (0x00052a00) grid_large_graphic_colour_popup_pane

0xa7b2,	// (0x00052a24) listscroll_popup_colour_pane_g1_ParamLimits

0xa7b2,	// (0x00052a24) listscroll_popup_colour_pane_g1

0xa7c9,	// (0x00052a3b) listscroll_popup_colour_pane_g2_ParamLimits

0xa7c9,	// (0x00052a3b) listscroll_popup_colour_pane_g2

0xa7e0,	// (0x00052a52) listscroll_popup_colour_pane_g3_ParamLimits

0xa7e0,	// (0x00052a52) listscroll_popup_colour_pane_g3

0xa7f0,	// (0x00052a62) listscroll_popup_colour_pane_g4_ParamLimits

0xa7f0,	// (0x00052a62) listscroll_popup_colour_pane_g4

0x0003,

0xf59e,	// (0x00057810) listscroll_popup_colour_pane_g_ParamLimits

0xf59e,	// (0x00057810) listscroll_popup_colour_pane_g

0xa800,	// (0x00052a72) scroll_pane_cp6_ParamLimits

0xa800,	// (0x00052a72) scroll_pane_cp6

0xa812,	// (0x00052a84) cell_large_graphic_colour_popup_pane_ParamLimits

0xa812,	// (0x00052a84) cell_large_graphic_colour_popup_pane

0xa833,	// (0x00052aa5) cell_large_graphic_colour_none_popup_pane_t1

0x6ce3,	// (0x0004ef55) grid_highlight_pane_cp5

0xa842,	// (0x00052ab4) cell_large_graphic_colour_popup_pane_g1

0xa84a,	// (0x00052abc) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a7,	// (0x00057819) cell_large_graphic_colour_popup_pane_g

0xa852,	// (0x00052ac4) cell_large_graphic_colour_popup_pane_g2_copy1

0xa85b,	// (0x00052acd) grid_highlight_pane_cp4

0xa863,	// (0x00052ad5) bg_popup_window_pane_cp8_ParamLimits

0xa863,	// (0x00052ad5) bg_popup_window_pane_cp8

0xa87e,	// (0x00052af0) popup_snote_single_text_window_g1_ParamLimits

0xa87e,	// (0x00052af0) popup_snote_single_text_window_g1

0xa890,	// (0x00052b02) popup_snote_single_text_window_t1_ParamLimits

0xa890,	// (0x00052b02) popup_snote_single_text_window_t1

0xa8a3,	// (0x00052b15) popup_snote_single_text_window_t2_ParamLimits

0xa8a3,	// (0x00052b15) popup_snote_single_text_window_t2

0xa8b6,	// (0x00052b28) popup_snote_single_text_window_t3_ParamLimits

0xa8b6,	// (0x00052b28) popup_snote_single_text_window_t3

0xa8ef,	// (0x00052b61) popup_snote_single_text_window_t4_ParamLimits

0xa8ef,	// (0x00052b61) popup_snote_single_text_window_t4

0xa923,	// (0x00052b95) popup_snote_single_text_window_t5_ParamLimits

0xa923,	// (0x00052b95) popup_snote_single_text_window_t5

0x0004,

0xf5ac,	// (0x0005781e) popup_snote_single_text_window_t_ParamLimits

0xf5ac,	// (0x0005781e) popup_snote_single_text_window_t

0xa952,	// (0x00052bc4) bg_popup_window_pane_cp9_ParamLimits

0xa952,	// (0x00052bc4) bg_popup_window_pane_cp9

0xa87e,	// (0x00052af0) popup_snote_single_graphic_window_g1_ParamLimits

0xa87e,	// (0x00052af0) popup_snote_single_graphic_window_g1

0xa960,	// (0x00052bd2) popup_snote_single_graphic_window_g2_ParamLimits

0xa960,	// (0x00052bd2) popup_snote_single_graphic_window_g2

0x0001,

0xf5b7,	// (0x00057829) popup_snote_single_graphic_window_g_ParamLimits

0xf5b7,	// (0x00057829) popup_snote_single_graphic_window_g

0xa96c,	// (0x00052bde) popup_snote_single_graphic_window_t1_ParamLimits

0xa96c,	// (0x00052bde) popup_snote_single_graphic_window_t1

0xa97f,	// (0x00052bf1) popup_snote_single_graphic_window_t2_ParamLimits

0xa97f,	// (0x00052bf1) popup_snote_single_graphic_window_t2

0xa992,	// (0x00052c04) popup_snote_single_graphic_window_t3_ParamLimits

0xa992,	// (0x00052c04) popup_snote_single_graphic_window_t3

0xa9cb,	// (0x00052c3d) popup_snote_single_graphic_window_t4_ParamLimits

0xa9cb,	// (0x00052c3d) popup_snote_single_graphic_window_t4

0xa9ff,	// (0x00052c71) popup_snote_single_graphic_window_t5_ParamLimits

0xa9ff,	// (0x00052c71) popup_snote_single_graphic_window_t5

0x0004,

0xf5bc,	// (0x0005782e) popup_snote_single_graphic_window_t_ParamLimits

0xf5bc,	// (0x0005782e) popup_snote_single_graphic_window_t

0x435e,	// (0x0004c5d0) grid_graphic_popup_pane_ParamLimits

0x435e,	// (0x0004c5d0) grid_graphic_popup_pane

0x438c,	// (0x0004c5fe) listscroll_popup_graphic_pane_g1_ParamLimits

0x438c,	// (0x0004c5fe) listscroll_popup_graphic_pane_g1

0xce4c,	// (0x000550be) listscroll_popup_graphic_pane_g2_ParamLimits

0xce4c,	// (0x000550be) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b6,	// (0x00057c28) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b6,	// (0x00057c28) listscroll_popup_graphic_pane_g

0x43b4,	// (0x0004c626) scroll_pane_cp5

0xce0b,	// (0x0005507d) cell_graphic_popup_pane_ParamLimits

0xce0b,	// (0x0005507d) cell_graphic_popup_pane

0x42e7,	// (0x0004c559) cell_graphic_popup_pane_g1

0x42ef,	// (0x0004c561) cell_graphic_popup_pane_g2

0xa852,	// (0x00052ac4) cell_graphic_popup_pane_g3

0x0002,

0xf9af,	// (0x00057c21) cell_graphic_popup_pane_g

0x42f8,	// (0x0004c56a) cell_graphic_popup_pane_t2

0xa85b,	// (0x00052acd) grid_highlight_pane_cp3

0xaa40,	// (0x00052cb2) list_gen_pane_ParamLimits

0xaa40,	// (0x00052cb2) list_gen_pane

0xaa72,	// (0x00052ce4) scroll_pane

0xcdc6,	// (0x00055038) bg_list_pane_g1_ParamLimits

0xcdc6,	// (0x00055038) bg_list_pane_g1

0x4264,	// (0x0004c4d6) bg_list_pane_g2_ParamLimits

0x4264,	// (0x0004c4d6) bg_list_pane_g2

0x4277,	// (0x0004c4e9) bg_list_pane_g3_ParamLimits

0x4277,	// (0x0004c4e9) bg_list_pane_g3

0x4289,	// (0x0004c4fb) bg_list_pane_g4_ParamLimits

0x4289,	// (0x0004c4fb) bg_list_pane_g4

0xcde1,	// (0x00055053) bg_list_pane_g5_ParamLimits

0xcde1,	// (0x00055053) bg_list_pane_g5

0x0004,

0xf9a4,	// (0x00057c16) bg_list_pane_g_ParamLimits

0xf9a4,	// (0x00057c16) bg_list_pane_g

0xcd89,	// (0x00054ffb) list_double2_graphic_large_graphic_pane_ParamLimits

0xcd89,	// (0x00054ffb) list_double2_graphic_large_graphic_pane

0xcd89,	// (0x00054ffb) list_double2_graphic_pane_ParamLimits

0xcd89,	// (0x00054ffb) list_double2_graphic_pane

0xcd89,	// (0x00054ffb) list_double2_large_graphic_pane_ParamLimits

0xcd89,	// (0x00054ffb) list_double2_large_graphic_pane

0xcd89,	// (0x00054ffb) list_double2_pane_ParamLimits

0xcd89,	// (0x00054ffb) list_double2_pane

0xcd89,	// (0x00054ffb) list_double_graphic_heading_pane_ParamLimits

0xcd89,	// (0x00054ffb) list_double_graphic_heading_pane

0xcd89,	// (0x00054ffb) list_double_graphic_pane_ParamLimits

0xcd89,	// (0x00054ffb) list_double_graphic_pane

0xcd89,	// (0x00054ffb) list_double_heading_pane_ParamLimits

0xcd89,	// (0x00054ffb) list_double_heading_pane

0xcd89,	// (0x00054ffb) list_double_large_graphic_pane_ParamLimits

0xcd89,	// (0x00054ffb) list_double_large_graphic_pane

0xcd89,	// (0x00054ffb) list_double_number_pane_ParamLimits

0xcd89,	// (0x00054ffb) list_double_number_pane

0xcd89,	// (0x00054ffb) list_double_pane_ParamLimits

0xcd89,	// (0x00054ffb) list_double_pane

0xcd89,	// (0x00054ffb) list_double_time_pane_ParamLimits

0xcd89,	// (0x00054ffb) list_double_time_pane

0xcd89,	// (0x00054ffb) list_setting_number_pane_ParamLimits

0xcd89,	// (0x00054ffb) list_setting_number_pane

0xcd89,	// (0x00054ffb) list_setting_pane_ParamLimits

0xcd89,	// (0x00054ffb) list_setting_pane

0xcd9d,	// (0x0005500f) list_single_2graphic_pane_ParamLimits

0xcd9d,	// (0x0005500f) list_single_2graphic_pane

0xcd9d,	// (0x0005500f) list_single_graphic_heading_pane_ParamLimits

0xcd9d,	// (0x0005500f) list_single_graphic_heading_pane

0xcd9d,	// (0x0005500f) list_single_graphic_pane_ParamLimits

0xcd9d,	// (0x0005500f) list_single_graphic_pane

0xcd9d,	// (0x0005500f) list_single_heading_pane_ParamLimits

0xcd9d,	// (0x0005500f) list_single_heading_pane

0xcd9d,	// (0x0005500f) list_single_large_graphic_pane_ParamLimits

0xcd9d,	// (0x0005500f) list_single_large_graphic_pane

0xcd9d,	// (0x0005500f) list_single_number_heading_pane_ParamLimits

0xcd9d,	// (0x0005500f) list_single_number_heading_pane

0xcd9d,	// (0x0005500f) list_single_number_pane_ParamLimits

0xcd9d,	// (0x0005500f) list_single_number_pane

0xcd9d,	// (0x0005500f) list_single_pane_ParamLimits

0xcd9d,	// (0x0005500f) list_single_pane

0x6ce3,	// (0x0004ef55) list_highlight_pane_cp1

0x2290,	// (0x0004a502) list_single_pane_g1_ParamLimits

0x2290,	// (0x0004a502) list_single_pane_g1

0x0ef0,	// (0x00049162) list_single_pane_g2_ParamLimits

0x0ef0,	// (0x00049162) list_single_pane_g2

0x0001,

0xf5d8,	// (0x0005784a) list_single_pane_g_ParamLimits

0xf5d8,	// (0x0005784a) list_single_pane_g

0xf047,	// (0x000572b9) list_single_pane_t1_ParamLimits

0xf047,	// (0x000572b9) list_single_pane_t1

0x2290,	// (0x0004a502) list_single_number_pane_g1_ParamLimits

0x2290,	// (0x0004a502) list_single_number_pane_g1

0x0ef0,	// (0x00049162) list_single_number_pane_g2_ParamLimits

0x0ef0,	// (0x00049162) list_single_number_pane_g2

0x0001,

0xf5d8,	// (0x0005784a) list_single_number_pane_g_ParamLimits

0xf5d8,	// (0x0005784a) list_single_number_pane_g

0xec07,	// (0x00056e79) list_single_number_pane_t1_ParamLimits

0xec07,	// (0x00056e79) list_single_number_pane_t1

0xa045,	// (0x000522b7) list_single_number_pane_t2_ParamLimits

0xa045,	// (0x000522b7) list_single_number_pane_t2

0x0001,

0xf965,	// (0x00057bd7) list_single_number_pane_t_ParamLimits

0xf965,	// (0x00057bd7) list_single_number_pane_t

0x99f7,	// (0x00051c69) list_single_graphic_pane_g1_ParamLimits

0x99f7,	// (0x00051c69) list_single_graphic_pane_g1

0x2290,	// (0x0004a502) list_single_graphic_pane_g2_ParamLimits

0x2290,	// (0x0004a502) list_single_graphic_pane_g2

0x0ef0,	// (0x00049162) list_single_graphic_pane_g3_ParamLimits

0x0ef0,	// (0x00049162) list_single_graphic_pane_g3

0x0002,

0xf5c7,	// (0x00057839) list_single_graphic_pane_g_ParamLimits

0xf5c7,	// (0x00057839) list_single_graphic_pane_g

0x9a03,	// (0x00051c75) list_single_graphic_pane_t1_ParamLimits

0x9a03,	// (0x00051c75) list_single_graphic_pane_t1

0x9a19,	// (0x00051c8b) list_single_heading_pane_g1_ParamLimits

0x9a19,	// (0x00051c8b) list_single_heading_pane_g1

0x0ef0,	// (0x00049162) list_single_heading_pane_g2_ParamLimits

0x0ef0,	// (0x00049162) list_single_heading_pane_g2

0x0001,

0xf5ce,	// (0x00057840) list_single_heading_pane_g_ParamLimits

0xf5ce,	// (0x00057840) list_single_heading_pane_g

0x9a2c,	// (0x00051c9e) list_single_heading_pane_t1_ParamLimits

0x9a2c,	// (0x00051c9e) list_single_heading_pane_t1

0xaaa6,	// (0x00052d18) list_single_heading_pane_t2_ParamLimits

0xaaa6,	// (0x00052d18) list_single_heading_pane_t2

0x0001,

0xf5d3,	// (0x00057845) list_single_heading_pane_t_ParamLimits

0xf5d3,	// (0x00057845) list_single_heading_pane_t

0x2290,	// (0x0004a502) list_single_number_heading_pane_g1_ParamLimits

0x2290,	// (0x0004a502) list_single_number_heading_pane_g1

0x0ef0,	// (0x00049162) list_single_number_heading_pane_g2_ParamLimits

0x0ef0,	// (0x00049162) list_single_number_heading_pane_g2

0x0001,

0xf5d8,	// (0x0005784a) list_single_number_heading_pane_g_ParamLimits

0xf5d8,	// (0x0005784a) list_single_number_heading_pane_g

0xf01f,	// (0x00057291) list_single_number_heading_pane_t1_ParamLimits

0xf01f,	// (0x00057291) list_single_number_heading_pane_t1

0x9a42,	// (0x00051cb4) list_single_number_heading_pane_t2_ParamLimits

0x9a42,	// (0x00051cb4) list_single_number_heading_pane_t2

0xf035,	// (0x000572a7) list_single_number_heading_pane_t3_ParamLimits

0xf035,	// (0x000572a7) list_single_number_heading_pane_t3

0x0002,

0xf5dd,	// (0x0005784f) list_single_number_heading_pane_t_ParamLimits

0xf5dd,	// (0x0005784f) list_single_number_heading_pane_t

0x9a54,	// (0x00051cc6) list_single_graphic_heading_pane_g1_ParamLimits

0x9a54,	// (0x00051cc6) list_single_graphic_heading_pane_g1

0xaab8,	// (0x00052d2a) list_single_graphic_heading_pane_g4_ParamLimits

0xaab8,	// (0x00052d2a) list_single_graphic_heading_pane_g4

0x0ef0,	// (0x00049162) list_single_graphic_heading_pane_g5_ParamLimits

0x0ef0,	// (0x00049162) list_single_graphic_heading_pane_g5

0x0002,

0xf5e4,	// (0x00057856) list_single_graphic_heading_pane_g_ParamLimits

0xf5e4,	// (0x00057856) list_single_graphic_heading_pane_g

0xf01f,	// (0x00057291) list_single_graphic_heading_pane_t1_ParamLimits

0xf01f,	// (0x00057291) list_single_graphic_heading_pane_t1

0x9a6c,	// (0x00051cde) list_single_graphic_heading_pane_t2_ParamLimits

0x9a6c,	// (0x00051cde) list_single_graphic_heading_pane_t2

0x0001,

0xf5eb,	// (0x0005785d) list_single_graphic_heading_pane_t_ParamLimits

0xf5eb,	// (0x0005785d) list_single_graphic_heading_pane_t

0x1328,	// (0x0004959a) list_single_large_graphic_pane_g1_ParamLimits

0x1328,	// (0x0004959a) list_single_large_graphic_pane_g1

0x2290,	// (0x0004a502) list_single_large_graphic_pane_g2_ParamLimits

0x2290,	// (0x0004a502) list_single_large_graphic_pane_g2

0x0ef0,	// (0x00049162) list_single_large_graphic_pane_g3_ParamLimits

0x0ef0,	// (0x00049162) list_single_large_graphic_pane_g3

0x0002,

0xf5f0,	// (0x00057862) list_single_large_graphic_pane_g_ParamLimits

0xf5f0,	// (0x00057862) list_single_large_graphic_pane_g

0x31fc,	// (0x0004b46e) wait_border_pane_g2_copy1

0xaac9,	// (0x00052d3b) list_single_large_graphic_pane_g4_cp2

0xf01f,	// (0x00057291) list_single_large_graphic_pane_t1_ParamLimits

0xf01f,	// (0x00057291) list_single_large_graphic_pane_t1

0xaad1,	// (0x00052d43) list_double_pane_g1_ParamLimits

0xaad1,	// (0x00052d43) list_double_pane_g1

0xaadd,	// (0x00052d4f) list_double_pane_g2_ParamLimits

0xaadd,	// (0x00052d4f) list_double_pane_g2

0x0001,

0xf5f7,	// (0x00057869) list_double_pane_g_ParamLimits

0xf5f7,	// (0x00057869) list_double_pane_g

0x9a84,	// (0x00051cf6) list_double_pane_t1_ParamLimits

0x9a84,	// (0x00051cf6) list_double_pane_t1

0x9a9a,	// (0x00051d0c) list_double_pane_t2_ParamLimits

0x9a9a,	// (0x00051d0c) list_double_pane_t2

0x0001,

0xf5fc,	// (0x0005786e) list_double_pane_t_ParamLimits

0xf5fc,	// (0x0005786e) list_double_pane_t

0x9aac,	// (0x00051d1e) list_double2_pane_g1_ParamLimits

0x9aac,	// (0x00051d1e) list_double2_pane_g1

0x9abd,	// (0x00051d2f) list_double2_pane_g2_ParamLimits

0x9abd,	// (0x00051d2f) list_double2_pane_g2

0x0001,

0xf601,	// (0x00057873) list_double2_pane_g_ParamLimits

0xf601,	// (0x00057873) list_double2_pane_g

0x9ac9,	// (0x00051d3b) list_double2_pane_t1_ParamLimits

0x9ac9,	// (0x00051d3b) list_double2_pane_t1

0x9adf,	// (0x00051d51) list_double2_pane_t2_ParamLimits

0x9adf,	// (0x00051d51) list_double2_pane_t2

0x0001,

0xf606,	// (0x00057878) list_double2_pane_t_ParamLimits

0xf606,	// (0x00057878) list_double2_pane_t

0xaad1,	// (0x00052d43) list_double_number_pane_g1_ParamLimits

0xaad1,	// (0x00052d43) list_double_number_pane_g1

0xaadd,	// (0x00052d4f) list_double_number_pane_g2_ParamLimits

0xaadd,	// (0x00052d4f) list_double_number_pane_g2

0x0001,

0xf5f7,	// (0x00057869) list_double_number_pane_g_ParamLimits

0xf5f7,	// (0x00057869) list_double_number_pane_g

0x9af1,	// (0x00051d63) list_double_number_pane_t1_ParamLimits

0x9af1,	// (0x00051d63) list_double_number_pane_t1

0x9b03,	// (0x00051d75) list_double_number_pane_t2_ParamLimits

0x9b03,	// (0x00051d75) list_double_number_pane_t2

0x9b19,	// (0x00051d8b) list_double_number_pane_t3_ParamLimits

0x9b19,	// (0x00051d8b) list_double_number_pane_t3

0x0002,

0xf60b,	// (0x0005787d) list_double_number_pane_t_ParamLimits

0xf60b,	// (0x0005787d) list_double_number_pane_t

0x9b2b,	// (0x00051d9d) list_double_graphic_pane_g1_ParamLimits

0x9b2b,	// (0x00051d9d) list_double_graphic_pane_g1

0x9b37,	// (0x00051da9) list_double_graphic_pane_g2_ParamLimits

0x9b37,	// (0x00051da9) list_double_graphic_pane_g2

0x9b46,	// (0x00051db8) list_double_graphic_pane_g3_ParamLimits

0x9b46,	// (0x00051db8) list_double_graphic_pane_g3

0x0003,

0xf612,	// (0x00057884) list_double_graphic_pane_g_ParamLimits

0xf612,	// (0x00057884) list_double_graphic_pane_g

0x9b5e,	// (0x00051dd0) list_double_graphic_pane_t1_ParamLimits

0x9b5e,	// (0x00051dd0) list_double_graphic_pane_t1

0x9b74,	// (0x00051de6) list_double_graphic_pane_t2_ParamLimits

0x9b74,	// (0x00051de6) list_double_graphic_pane_t2

0x0001,

0xf61b,	// (0x0005788d) list_double_graphic_pane_t_ParamLimits

0xf61b,	// (0x0005788d) list_double_graphic_pane_t

0x9b86,	// (0x00051df8) list_double2_graphic_pane_g1_ParamLimits

0x9b86,	// (0x00051df8) list_double2_graphic_pane_g1

0x9b92,	// (0x00051e04) list_double2_graphic_pane_g2_ParamLimits

0x9b92,	// (0x00051e04) list_double2_graphic_pane_g2

0x9b9e,	// (0x00051e10) list_double2_graphic_pane_g3_ParamLimits

0x9b9e,	// (0x00051e10) list_double2_graphic_pane_g3

0x0002,

0xf620,	// (0x00057892) list_double2_graphic_pane_g_ParamLimits

0xf620,	// (0x00057892) list_double2_graphic_pane_g

0x9baa,	// (0x00051e1c) list_double2_graphic_pane_t1_ParamLimits

0x9baa,	// (0x00051e1c) list_double2_graphic_pane_t1

0x9bc0,	// (0x00051e32) list_double2_graphic_pane_t2_ParamLimits

0x9bc0,	// (0x00051e32) list_double2_graphic_pane_t2

0x0001,

0xf627,	// (0x00057899) list_double2_graphic_pane_t_ParamLimits

0xf627,	// (0x00057899) list_double2_graphic_pane_t

0x9bd2,	// (0x00051e44) list_double_large_graphic_pane_g1_ParamLimits

0x9bd2,	// (0x00051e44) list_double_large_graphic_pane_g1

0x9bfd,	// (0x00051e6f) list_double_large_graphic_pane_g2_ParamLimits

0x9bfd,	// (0x00051e6f) list_double_large_graphic_pane_g2

0xaadd,	// (0x00052d4f) list_double_large_graphic_pane_g3_ParamLimits

0xaadd,	// (0x00052d4f) list_double_large_graphic_pane_g3

0x9c13,	// (0x00051e85) list_double_large_graphic_pane_g4_ParamLimits

0x9c13,	// (0x00051e85) list_double_large_graphic_pane_g4

0x0004,

0xf62c,	// (0x0005789e) list_double_large_graphic_pane_g_ParamLimits

0xf62c,	// (0x0005789e) list_double_large_graphic_pane_g

0x9c26,	// (0x00051e98) list_double_large_graphic_pane_t1_ParamLimits

0x9c26,	// (0x00051e98) list_double_large_graphic_pane_t1

0x9c3f,	// (0x00051eb1) list_double_large_graphic_pane_t2_ParamLimits

0x9c3f,	// (0x00051eb1) list_double_large_graphic_pane_t2

0x0001,

0xf637,	// (0x000578a9) list_double_large_graphic_pane_t_ParamLimits

0xf637,	// (0x000578a9) list_double_large_graphic_pane_t

0xaae9,	// (0x00052d5b) list_double2_large_graphic_pane_g1_ParamLimits

0xaae9,	// (0x00052d5b) list_double2_large_graphic_pane_g1

0x9c51,	// (0x00051ec3) list_double2_large_graphic_pane_g2_ParamLimits

0x9c51,	// (0x00051ec3) list_double2_large_graphic_pane_g2

0x9b9e,	// (0x00051e10) list_double2_large_graphic_pane_g3_ParamLimits

0x9b9e,	// (0x00051e10) list_double2_large_graphic_pane_g3

0x0002,

0xf63c,	// (0x000578ae) list_double2_large_graphic_pane_g_ParamLimits

0xf63c,	// (0x000578ae) list_double2_large_graphic_pane_g

0x9c62,	// (0x00051ed4) list_double2_large_graphic_pane_t1_ParamLimits

0x9c62,	// (0x00051ed4) list_double2_large_graphic_pane_t1

0x9c78,	// (0x00051eea) list_double2_large_graphic_pane_t2_ParamLimits

0x9c78,	// (0x00051eea) list_double2_large_graphic_pane_t2

0x0001,

0xf643,	// (0x000578b5) list_double2_large_graphic_pane_t_ParamLimits

0xf643,	// (0x000578b5) list_double2_large_graphic_pane_t

0x9c8a,	// (0x00051efc) list_double_heading_pane_g1_ParamLimits

0x9c8a,	// (0x00051efc) list_double_heading_pane_g1

0x9c9b,	// (0x00051f0d) list_double_heading_pane_g2_ParamLimits

0x9c9b,	// (0x00051f0d) list_double_heading_pane_g2

0x0001,

0xf648,	// (0x000578ba) list_double_heading_pane_g_ParamLimits

0xf648,	// (0x000578ba) list_double_heading_pane_g

0x9ca7,	// (0x00051f19) list_double_heading_pane_t1_ParamLimits

0x9ca7,	// (0x00051f19) list_double_heading_pane_t1

0x9adf,	// (0x00051d51) list_double_heading_pane_t2_ParamLimits

0x9adf,	// (0x00051d51) list_double_heading_pane_t2

0x0001,

0xf64d,	// (0x000578bf) list_double_heading_pane_t_ParamLimits

0xf64d,	// (0x000578bf) list_double_heading_pane_t

0x9cbd,	// (0x00051f2f) list_double_graphic_heading_pane_g1_ParamLimits

0x9cbd,	// (0x00051f2f) list_double_graphic_heading_pane_g1

0x9c8a,	// (0x00051efc) list_double_graphic_heading_pane_g2_ParamLimits

0x9c8a,	// (0x00051efc) list_double_graphic_heading_pane_g2

0x9c9b,	// (0x00051f0d) list_double_graphic_heading_pane_g3_ParamLimits

0x9c9b,	// (0x00051f0d) list_double_graphic_heading_pane_g3

0x0002,

0xf652,	// (0x000578c4) list_double_graphic_heading_pane_g_ParamLimits

0xf652,	// (0x000578c4) list_double_graphic_heading_pane_g

0x9cc9,	// (0x00051f3b) list_double_graphic_heading_pane_t1_ParamLimits

0x9cc9,	// (0x00051f3b) list_double_graphic_heading_pane_t1

0x9bc0,	// (0x00051e32) list_double_graphic_heading_pane_t2_ParamLimits

0x9bc0,	// (0x00051e32) list_double_graphic_heading_pane_t2

0x0001,

0xf659,	// (0x000578cb) list_double_graphic_heading_pane_t_ParamLimits

0xf659,	// (0x000578cb) list_double_graphic_heading_pane_t

0x9cdf,	// (0x00051f51) list_double_time_pane_g1_ParamLimits

0x9cdf,	// (0x00051f51) list_double_time_pane_g1

0x9cf0,	// (0x00051f62) list_double_time_pane_g2_ParamLimits

0x9cf0,	// (0x00051f62) list_double_time_pane_g2

0x0001,

0xf65e,	// (0x000578d0) list_double_time_pane_g_ParamLimits

0xf65e,	// (0x000578d0) list_double_time_pane_g

0x9cfc,	// (0x00051f6e) list_double_time_pane_t1_ParamLimits

0x9cfc,	// (0x00051f6e) list_double_time_pane_t1

0x9d12,	// (0x00051f84) list_double_time_pane_t2_ParamLimits

0x9d12,	// (0x00051f84) list_double_time_pane_t2

0x9d24,	// (0x00051f96) list_double_time_pane_t3_ParamLimits

0x9d24,	// (0x00051f96) list_double_time_pane_t3

0x9d36,	// (0x00051fa8) list_double_time_pane_t4_ParamLimits

0x9d36,	// (0x00051fa8) list_double_time_pane_t4

0x0003,

0xf663,	// (0x000578d5) list_double_time_pane_t_ParamLimits

0xf663,	// (0x000578d5) list_double_time_pane_t

0x9d48,	// (0x00051fba) list_setting_pane_g1_ParamLimits

0x9d48,	// (0x00051fba) list_setting_pane_g1

0x9abd,	// (0x00051d2f) list_setting_pane_g2_ParamLimits

0x9abd,	// (0x00051d2f) list_setting_pane_g2

0x0001,

0xf66c,	// (0x000578de) list_setting_pane_g_ParamLimits

0xf66c,	// (0x000578de) list_setting_pane_g

0x9d54,	// (0x00051fc6) list_setting_pane_t1_ParamLimits

0x9d54,	// (0x00051fc6) list_setting_pane_t1

0x9d6e,	// (0x00051fe0) list_setting_pane_t2_ParamLimits

0x9d6e,	// (0x00051fe0) list_setting_pane_t2

0x0002,

0xf671,	// (0x000578e3) list_setting_pane_t_ParamLimits

0xf671,	// (0x000578e3) list_setting_pane_t

0x9dad,	// (0x0005201f) set_value_pane_cp_ParamLimits

0x9dad,	// (0x0005201f) set_value_pane_cp

0x9dbb,	// (0x0005202d) list_setting_number_pane_g1_ParamLimits

0x9dbb,	// (0x0005202d) list_setting_number_pane_g1

0x9dc7,	// (0x00052039) list_setting_number_pane_g2_ParamLimits

0x9dc7,	// (0x00052039) list_setting_number_pane_g2

0x0001,

0xf678,	// (0x000578ea) list_setting_number_pane_g_ParamLimits

0xf678,	// (0x000578ea) list_setting_number_pane_g

0x9dd3,	// (0x00052045) list_setting_number_pane_t1_ParamLimits

0x9dd3,	// (0x00052045) list_setting_number_pane_t1

0x9dec,	// (0x0005205e) list_setting_number_pane_t2_ParamLimits

0x9dec,	// (0x0005205e) list_setting_number_pane_t2

0x9e06,	// (0x00052078) list_setting_number_pane_t3_ParamLimits

0x9e06,	// (0x00052078) list_setting_number_pane_t3

0x0003,

0xf67d,	// (0x000578ef) list_setting_number_pane_t_ParamLimits

0xf67d,	// (0x000578ef) list_setting_number_pane_t

0x9dad,	// (0x0005201f) set_value_pane_ParamLimits

0x9dad,	// (0x0005201f) set_value_pane

0xaaf5,	// (0x00052d67) bg_set_opt_pane_ParamLimits

0xaaf5,	// (0x00052d67) bg_set_opt_pane

0xe7a1,	// (0x00056a13) set_value_pane_t1

0xab16,	// (0x00052d88) slider_set_pane_cp3

0xab1f,	// (0x00052d91) volume_small_pane_cp

0xab28,	// (0x00052d9a) list_form_gen_pane

0xab31,	// (0x00052da3) scroll_pane_cp8

0x9e49,	// (0x000520bb) form_field_data_pane_ParamLimits

0x9e49,	// (0x000520bb) form_field_data_pane

0x9e66,	// (0x000520d8) form_field_data_wide_pane_ParamLimits

0x9e66,	// (0x000520d8) form_field_data_wide_pane

0x9e8a,	// (0x000520fc) form_field_popup_pane_ParamLimits

0x9e8a,	// (0x000520fc) form_field_popup_pane

0xe7bf,	// (0x00056a31) form_field_popup_wide_pane_ParamLimits

0xe7bf,	// (0x00056a31) form_field_popup_wide_pane

0xe7e0,	// (0x00056a52) form_field_slider_pane_ParamLimits

0xe7e0,	// (0x00056a52) form_field_slider_pane

0xe7f3,	// (0x00056a65) form_field_slider_wide_pane_ParamLimits

0xe7f3,	// (0x00056a65) form_field_slider_wide_pane

0xab42,	// (0x00052db4) data_form_pane

0x9eb6,	// (0x00052128) form_field_data_pane_t1

0xab4e,	// (0x00052dc0) input_focus_pane

0xab5c,	// (0x00052dce) data_form_wide_pane

0xe812,	// (0x00056a84) form_field_data_wide_pane_t1

0xa870,	// (0x00052ae2) input_focus_pane_cp6

0x9ed0,	// (0x00052142) form_field_popup_pane_t1

0xab4e,	// (0x00052dc0) input_focus_pane_cp7

0xab7c,	// (0x00052dee) list_form_pane

0xe83c,	// (0x00056aae) form_field_popup_wide_pane_t1

0xab4e,	// (0x00052dc0) input_focus_pane_cp8

0xab88,	// (0x00052dfa) list_form_wide_pane

0x9ef2,	// (0x00052164) form_field_slider_pane_t1_ParamLimits

0x9ef2,	// (0x00052164) form_field_slider_pane_t1

0x9f0a,	// (0x0005217c) form_field_slider_pane_t2_ParamLimits

0x9f0a,	// (0x0005217c) form_field_slider_pane_t2

0x0001,

0xf68d,	// (0x000578ff) form_field_slider_pane_t_ParamLimits

0xf68d,	// (0x000578ff) form_field_slider_pane_t

0x6e64,	// (0x0004f0d6) input_focus_pane_cp9_ParamLimits

0x6e64,	// (0x0004f0d6) input_focus_pane_cp9

0x9f1f,	// (0x00052191) slider_cont_pane_ParamLimits

0x9f1f,	// (0x00052191) slider_cont_pane

0xab97,	// (0x00052e09) form_field_slider_wide_pane_t1_ParamLimits

0xab97,	// (0x00052e09) form_field_slider_wide_pane_t1

0xe851,	// (0x00056ac3) form_field_slider_wide_pane_t2_ParamLimits

0xe851,	// (0x00056ac3) form_field_slider_wide_pane_t2

0x0001,

0xf692,	// (0x00057904) form_field_slider_wide_pane_t_ParamLimits

0xf692,	// (0x00057904) form_field_slider_wide_pane_t

0x6e64,	// (0x0004f0d6) input_focus_pane_cp10_ParamLimits

0x6e64,	// (0x0004f0d6) input_focus_pane_cp10

0x9f33,	// (0x000521a5) slider_cont_pane_cp1_ParamLimits

0x9f33,	// (0x000521a5) slider_cont_pane_cp1

0x9f47,	// (0x000521b9) slider_form_pane_cp

0xaba9,	// (0x00052e1b) input_focus_pane_g1

0xabb1,	// (0x00052e23) input_focus_pane_g2

0xabb9,	// (0x00052e2b) input_focus_pane_g3

0xabc1,	// (0x00052e33) input_focus_pane_g4

0xabc9,	// (0x00052e3b) input_focus_pane_g5

0xabd1,	// (0x00052e43) input_focus_pane_g6

0xabd9,	// (0x00052e4b) input_focus_pane_g7

0xabe1,	// (0x00052e53) input_focus_pane_g8

0xabe9,	// (0x00052e5b) input_focus_pane_g9

0x6cd9,	// (0x0004ef4b) input_focus_pane_g10

0x0009,

0xf697,	// (0x00057909) input_focus_pane_g

0x3205,	// (0x0004b477) wait_border_pane_g3_copy1

0x9f4f,	// (0x000521c1) data_form_pane_t1

0x6cd9,	// (0x0004ef4b) wait_anim_pane_g1_copy1

0xa057,	// (0x000522c9) data_form_wide_pane_t1

0xe863,	// (0x00056ad5) list_form_graphic_pane_cp_ParamLimits

0xe863,	// (0x00056ad5) list_form_graphic_pane_cp

0x417e,	// (0x0004c3f0) slider_form_pane_g1

0x4187,	// (0x0004c3f9) slider_form_pane_g2

0x0006,

0xf995,	// (0x00057c07) slider_form_pane_g

0x9f6b,	// (0x000521dd) list_form_graphic_pane_ParamLimits

0x9f6b,	// (0x000521dd) list_form_graphic_pane

0xe875,	// (0x00056ae7) list_form_graphic_pane_g1

0xe87d,	// (0x00056aef) list_form_graphic_pane_t1_ParamLimits

0xe87d,	// (0x00056aef) list_form_graphic_pane_t1

0x6d31,	// (0x0004efa3) list_highlight_pane_cp5_ParamLimits

0x6d31,	// (0x0004efa3) list_highlight_pane_cp5

0x9f7c,	// (0x000521ee) find_pane_g1

0xabf1,	// (0x00052e63) input_find_pane

0x9f85,	// (0x000521f7) input_find_pane_g1_ParamLimits

0x9f85,	// (0x000521f7) input_find_pane_g1

0x9f91,	// (0x00052203) input_find_pane_t1_ParamLimits

0x9f91,	// (0x00052203) input_find_pane_t1

0x9fa6,	// (0x00052218) input_find_pane_t2_ParamLimits

0x9fa6,	// (0x00052218) input_find_pane_t2

0x0001,

0xf6ac,	// (0x0005791e) input_find_pane_t_ParamLimits

0xf6ac,	// (0x0005791e) input_find_pane_t

0xabfa,	// (0x00052e6c) input_focus_pane_cp5_ParamLimits

0xabfa,	// (0x00052e6c) input_focus_pane_cp5

0xac14,	// (0x00052e86) bg_popup_window_pane_cp2_ParamLimits

0xac14,	// (0x00052e86) bg_popup_window_pane_cp2

0xac21,	// (0x00052e93) listscroll_menu_pane_ParamLimits

0xac21,	// (0x00052e93) listscroll_menu_pane

0xac2d,	// (0x00052e9f) popup_submenu_window_ParamLimits

0xac2d,	// (0x00052e9f) popup_submenu_window

0xac5d,	// (0x00052ecf) find_popup_pane_g1

0xac65,	// (0x00052ed7) input_popup_find_pane_cp

0xabfa,	// (0x00052e6c) input_focus_pane_cp4_ParamLimits

0xabfa,	// (0x00052e6c) input_focus_pane_cp4

0xac7d,	// (0x00052eef) input_popup_find_pane_t1_ParamLimits

0xac7d,	// (0x00052eef) input_popup_find_pane_t1

0x6ce3,	// (0x0004ef55) bg_popup_sub_pane_cp

0xacab,	// (0x00052f1d) listscroll_popup_sub_pane

0xacb3,	// (0x00052f25) list_submenu_pane_ParamLimits

0xacb3,	// (0x00052f25) list_submenu_pane

0xacc4,	// (0x00052f36) scroll_pane_cp4

0xaccc,	// (0x00052f3e) list_single_popup_submenu_pane_ParamLimits

0xaccc,	// (0x00052f3e) list_single_popup_submenu_pane

0xace1,	// (0x00052f53) list_single_popup_submenu_pane_g1

0xace9,	// (0x00052f5b) list_single_popup_submenu_pane_t1_ParamLimits

0xace9,	// (0x00052f5b) list_single_popup_submenu_pane_t1

0x6e64,	// (0x0004f0d6) bg_active_tab_pane_cp1_ParamLimits

0x6e64,	// (0x0004f0d6) bg_active_tab_pane_cp1

0xacfe,	// (0x00052f70) tabs_2_active_pane_g1

0xad06,	// (0x00052f78) tabs_2_active_pane_t1

0x6e64,	// (0x0004f0d6) bg_passive_tab_pane_cp1_ParamLimits

0x6e64,	// (0x0004f0d6) bg_passive_tab_pane_cp1

0xacfe,	// (0x00052f70) tabs_2_passive_pane_g1

0xad06,	// (0x00052f78) tabs_2_passive_pane_t1

0x6d31,	// (0x0004efa3) bg_active_tab_pane_cp4

0xad18,	// (0x00052f8a) tabs_2_long_active_pane_t1

0x266b,	// (0x0004a8dd) bg_passive_tab_pane_cp4

0x0f21,	// (0x00049193) list_single_midp_graphic_pane_g4_ParamLimits

0x6d31,	// (0x0004efa3) bg_active_tab_pane_cp5

0xad2b,	// (0x00052f9d) tabs_3_long_active_pane_t1

0x266b,	// (0x0004a8dd) bg_passive_tab_pane_cp5

0x0f21,	// (0x00049193) list_single_midp_graphic_pane_g4

0x6d31,	// (0x0004efa3) bg_popup_window_pane_cp13_ParamLimits

0x6d31,	// (0x0004efa3) bg_popup_window_pane_cp13

0xad46,	// (0x00052fb8) listscroll_popup_fast_pane_ParamLimits

0xad46,	// (0x00052fb8) listscroll_popup_fast_pane

0xad55,	// (0x00052fc7) grid_popup_fast_pane_ParamLimits

0xad55,	// (0x00052fc7) grid_popup_fast_pane

0xad67,	// (0x00052fd9) scroll_pane_cp9_ParamLimits

0xad67,	// (0x00052fd9) scroll_pane_cp9

0x5b09,	// (0x0004dd7b) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x5b09,	// (0x0004dd7b) list_single_graphic_hl_pane_t1_cp2

0xad8b,	// (0x00052ffd) input_focus_pane_cp20_ParamLimits

0xad8b,	// (0x00052ffd) input_focus_pane_cp20

0xad99,	// (0x0005300b) query_popup_data_pane_t1_ParamLimits

0xad99,	// (0x0005300b) query_popup_data_pane_t1

0xadac,	// (0x0005301e) query_popup_data_pane_t2_ParamLimits

0xadac,	// (0x0005301e) query_popup_data_pane_t2

0xadf2,	// (0x00053064) query_popup_data_pane_t3_ParamLimits

0xadf2,	// (0x00053064) query_popup_data_pane_t3

0xae33,	// (0x000530a5) query_popup_data_pane_t4_ParamLimits

0xae33,	// (0x000530a5) query_popup_data_pane_t4

0xae6f,	// (0x000530e1) query_popup_data_pane_t5_ParamLimits

0xae6f,	// (0x000530e1) query_popup_data_pane_t5

0x0004,

0xf6b1,	// (0x00057923) query_popup_data_pane_t_ParamLimits

0xf6b1,	// (0x00057923) query_popup_data_pane_t

0xaba9,	// (0x00052e1b) bg_set_opt_pane_g1

0xabb1,	// (0x00052e23) bg_set_opt_pane_g2

0xabb9,	// (0x00052e2b) bg_set_opt_pane_g3

0xabc1,	// (0x00052e33) bg_set_opt_pane_g4

0xabc9,	// (0x00052e3b) bg_set_opt_pane_g5

0xabd1,	// (0x00052e43) bg_set_opt_pane_g6

0xabd9,	// (0x00052e4b) bg_set_opt_pane_g7

0xabe1,	// (0x00052e53) bg_set_opt_pane_g8

0xabe9,	// (0x00052e5b) bg_set_opt_pane_g9

0x0008,

0xf6bc,	// (0x0005792e) bg_set_opt_pane_g

0x04c1,	// (0x00048733) control_top_pane_stacon_ParamLimits

0x04c1,	// (0x00048733) control_top_pane_stacon

0x0514,	// (0x00048786) signal_pane_stacon_ParamLimits

0x0514,	// (0x00048786) signal_pane_stacon

0xea6f,	// (0x00056ce1) stacon_top_pane_g1_ParamLimits

0xea6f,	// (0x00056ce1) stacon_top_pane_g1

0x0539,	// (0x000487ab) title_pane_stacon_ParamLimits

0x0539,	// (0x000487ab) title_pane_stacon

0x0563,	// (0x000487d5) uni_indicator_pane_stacon_ParamLimits

0x0563,	// (0x000487d5) uni_indicator_pane_stacon

0x057b,	// (0x000487ed) battery_pane_stacon_ParamLimits

0x057b,	// (0x000487ed) battery_pane_stacon

0x05bf,	// (0x00048831) control_bottom_pane_stacon_ParamLimits

0x05bf,	// (0x00048831) control_bottom_pane_stacon

0x05e2,	// (0x00048854) navi_pane_stacon_ParamLimits

0x05e2,	// (0x00048854) navi_pane_stacon

0xea91,	// (0x00056d03) stacon_bottom_pane_g1_ParamLimits

0xea91,	// (0x00056d03) stacon_bottom_pane_g1

0x003b,	// (0x000482ad) aid_levels_signal_lsc_ParamLimits

0x003b,	// (0x000482ad) aid_levels_signal_lsc

0x0052,	// (0x000482c4) signal_pane_stacon_g1_ParamLimits

0x0052,	// (0x000482c4) signal_pane_stacon_g1

0x0066,	// (0x000482d8) signal_pane_stacon_g2_ParamLimits

0x0066,	// (0x000482d8) signal_pane_stacon_g2

0x0001,

0xf6cf,	// (0x00057941) signal_pane_stacon_g_ParamLimits

0xf6cf,	// (0x00057941) signal_pane_stacon_g

0x009b,	// (0x0004830d) title_pane_stacon_t1_ParamLimits

0x009b,	// (0x0004830d) title_pane_stacon_t1

0xaeb3,	// (0x00053125) uni_indicator_pane_stacon_g1

0xaebd,	// (0x0005312f) uni_indicator_pane_stacon_g2

0xaec7,	// (0x00053139) uni_indicator_pane_stacon_g3

0xaed1,	// (0x00053143) uni_indicator_pane_stacon_g4

0x0003,

0xf6db,	// (0x0005794d) uni_indicator_pane_stacon_g

0x00c0,	// (0x00048332) control_top_pane_stacon_g1

0x00c8,	// (0x0004833a) control_top_pane_stacon_t1_ParamLimits

0x00c8,	// (0x0004833a) control_top_pane_stacon_t1

0x00ff,	// (0x00048371) aid_levels_battery_lsc_ParamLimits

0x00ff,	// (0x00048371) aid_levels_battery_lsc

0x0117,	// (0x00048389) battery_pane_stacon_g1_ParamLimits

0x0117,	// (0x00048389) battery_pane_stacon_g1

0x012a,	// (0x0004839c) battery_pane_stacon_g2_ParamLimits

0x012a,	// (0x0004839c) battery_pane_stacon_g2

0x0001,

0xf6e4,	// (0x00057956) battery_pane_stacon_g_ParamLimits

0xf6e4,	// (0x00057956) battery_pane_stacon_g

0x0168,	// (0x000483da) navi_icon_pane_stacon

0x017c,	// (0x000483ee) navi_navi_pane_stacon

0x0168,	// (0x000483da) navi_text_pane_stacon

0x00c0,	// (0x00048332) control_bottom_pane_stacon_g1

0x0192,	// (0x00048404) control_bottom_pane_stacon_t1_ParamLimits

0x0192,	// (0x00048404) control_bottom_pane_stacon_t1

0xaef5,	// (0x00053167) grid_app_pane_ParamLimits

0xaef5,	// (0x00053167) grid_app_pane

0xaf2d,	// (0x0005319f) scroll_pane_cp15_ParamLimits

0xaf2d,	// (0x0005319f) scroll_pane_cp15

0xaf46,	// (0x000531b8) cell_app_pane_ParamLimits

0xaf46,	// (0x000531b8) cell_app_pane

0xaf87,	// (0x000531f9) cell_app_pane_g1_ParamLimits

0xaf87,	// (0x000531f9) cell_app_pane_g1

0xafab,	// (0x0005321d) cell_app_pane_g2_ParamLimits

0xafab,	// (0x0005321d) cell_app_pane_g2

0x0001,

0xf6e9,	// (0x0005795b) cell_app_pane_g_ParamLimits

0xf6e9,	// (0x0005795b) cell_app_pane_g

0xafb7,	// (0x00053229) cell_app_pane_t1_ParamLimits

0xafb7,	// (0x00053229) cell_app_pane_t1

0xafc9,	// (0x0005323b) grid_highlight_pane_ParamLimits

0xafc9,	// (0x0005323b) grid_highlight_pane

0xaba9,	// (0x00052e1b) cell_highlight_pane_g1

0xabb1,	// (0x00052e23) cell_highlight_pane_g2

0xabb9,	// (0x00052e2b) cell_highlight_pane_g3

0xabc1,	// (0x00052e33) cell_highlight_pane_g4

0xabc9,	// (0x00052e3b) cell_highlight_pane_g5

0xabd1,	// (0x00052e43) cell_highlight_pane_g6

0xabd9,	// (0x00052e4b) cell_highlight_pane_g7

0xabe1,	// (0x00052e53) cell_highlight_pane_g8

0xabe9,	// (0x00052e5b) cell_highlight_pane_g9

0x6cd9,	// (0x0004ef4b) cell_highlight_pane_g10

0x0009,

0xf697,	// (0x00057909) cell_highlight_pane_g

0xafe3,	// (0x00053255) bg_scroll_pane

0x0265,	// (0x000484d7) scroll_handle_pane

0xb02a,	// (0x0005329c) scroll_bg_pane_g1

0xb03f,	// (0x000532b1) scroll_bg_pane_g2

0xb057,	// (0x000532c9) scroll_bg_pane_g3

0x0002,

0xf6ee,	// (0x00057960) scroll_bg_pane_g

0xb06c,	// (0x000532de) scroll_handle_focus_pane_ParamLimits

0xb06c,	// (0x000532de) scroll_handle_focus_pane

0xb02a,	// (0x0005329c) scroll_handle_pane_g1

0xb079,	// (0x000532eb) scroll_handle_pane_g2

0xb057,	// (0x000532c9) scroll_handle_pane_g3

0x0002,

0xf6f5,	// (0x00057967) scroll_handle_pane_g

0xabfa,	// (0x00052e6c) bg_popup_sub_pane_cp21_ParamLimits

0xabfa,	// (0x00052e6c) bg_popup_sub_pane_cp21

0xb08d,	// (0x000532ff) popup_fep_japan_predictive_window_t1_ParamLimits

0xb08d,	// (0x000532ff) popup_fep_japan_predictive_window_t1

0xb0a4,	// (0x00053316) popup_fep_japan_predictive_window_t2_ParamLimits

0xb0a4,	// (0x00053316) popup_fep_japan_predictive_window_t2

0xb0d7,	// (0x00053349) popup_fep_japan_predictive_window_t3_ParamLimits

0xb0d7,	// (0x00053349) popup_fep_japan_predictive_window_t3

0x0002,

0xf6fc,	// (0x0005796e) popup_fep_japan_predictive_window_t_ParamLimits

0xf6fc,	// (0x0005796e) popup_fep_japan_predictive_window_t

0x6ce3,	// (0x0004ef55) bg_popup_sub_pane_cp23

0xb10e,	// (0x00053380) listscroll_japin_cand_pane

0xb116,	// (0x00053388) popup_fep_japan_candidate_window_t1

0xb124,	// (0x00053396) candidate_pane_ParamLimits

0xb124,	// (0x00053396) candidate_pane

0xb136,	// (0x000533a8) scroll_pane_cp30

0xb140,	// (0x000533b2) list_single_popup_jap_candidate_pane_ParamLimits

0xb140,	// (0x000533b2) list_single_popup_jap_candidate_pane

0x6ce3,	// (0x0004ef55) list_highlight_pane_cp30

0xb154,	// (0x000533c6) list_single_popup_jap_candidate_pane_t1

0xb163,	// (0x000533d5) level_1_signal

0xb175,	// (0x000533e7) level_2_signal

0xb188,	// (0x000533fa) level_3_signal

0xb19b,	// (0x0005340d) level_4_signal

0xb1ae,	// (0x00053420) level_5_signal

0xb1c1,	// (0x00053433) level_6_signal

0xb1d4,	// (0x00053446) level_7_signal

0xb163,	// (0x000533d5) level_1_battery

0xb175,	// (0x000533e7) level_2_battery

0xb188,	// (0x000533fa) level_3_battery

0xb19b,	// (0x0005340d) level_4_battery

0xb1ae,	// (0x00053420) level_5_battery

0xb1c1,	// (0x00053433) level_6_battery

0xb1d4,	// (0x00053446) level_7_battery

0xe8aa,	// (0x00056b1c) list_menu_pane_ParamLimits

0xe8aa,	// (0x00056b1c) list_menu_pane

0xe8c0,	// (0x00056b32) scroll_pane_cp25_ParamLimits

0xe8c0,	// (0x00056b32) scroll_pane_cp25

0xe8d9,	// (0x00056b4b) list_double2_graphic_pane_cp2_ParamLimits

0xe8d9,	// (0x00056b4b) list_double2_graphic_pane_cp2

0xe8d9,	// (0x00056b4b) list_double2_large_graphic_pane_cp2_ParamLimits

0xe8d9,	// (0x00056b4b) list_double2_large_graphic_pane_cp2

0xe8d9,	// (0x00056b4b) list_double2_pane_cp2_ParamLimits

0xe8d9,	// (0x00056b4b) list_double2_pane_cp2

0xe8d9,	// (0x00056b4b) list_double_graphic_pane_cp2_ParamLimits

0xe8d9,	// (0x00056b4b) list_double_graphic_pane_cp2

0xe8d9,	// (0x00056b4b) list_double_large_graphic_pane_cp2_ParamLimits

0xe8d9,	// (0x00056b4b) list_double_large_graphic_pane_cp2

0xe8d9,	// (0x00056b4b) list_double_number_pane_cp2_ParamLimits

0xe8d9,	// (0x00056b4b) list_double_number_pane_cp2

0xe8d9,	// (0x00056b4b) list_double_pane_cp2_ParamLimits

0xe8d9,	// (0x00056b4b) list_double_pane_cp2

0xb1fa,	// (0x0005346c) list_single_2graphic_pane_cp2_ParamLimits

0xb1fa,	// (0x0005346c) list_single_2graphic_pane_cp2

0xb1fa,	// (0x0005346c) list_single_graphic_heading_pane_cp2_ParamLimits

0xb1fa,	// (0x0005346c) list_single_graphic_heading_pane_cp2

0xb1fa,	// (0x0005346c) list_single_graphic_pane_cp2_ParamLimits

0xb1fa,	// (0x0005346c) list_single_graphic_pane_cp2

0xb1fa,	// (0x0005346c) list_single_heading_pane_cp2_ParamLimits

0xb1fa,	// (0x0005346c) list_single_heading_pane_cp2

0xe8e9,	// (0x00056b5b) list_single_large_graphic_pane_cp2_ParamLimits

0xe8e9,	// (0x00056b5b) list_single_large_graphic_pane_cp2

0xb1fa,	// (0x0005346c) list_single_number_heading_pane_cp2_ParamLimits

0xb1fa,	// (0x0005346c) list_single_number_heading_pane_cp2

0xb1fa,	// (0x0005346c) list_single_number_pane_cp2_ParamLimits

0xb1fa,	// (0x0005346c) list_single_number_pane_cp2

0xb1fa,	// (0x0005346c) list_single_pane_cp2_ParamLimits

0xb1fa,	// (0x0005346c) list_single_pane_cp2

0xe902,	// (0x00056b74) bg_popup_sub_pane_cp22

0x0407,	// (0x00048679) popup_side_volume_key_window_g1

0x0431,	// (0x000486a3) popup_side_volume_key_window_t1

0x044f,	// (0x000486c1) volume_small_pane_cp1

0x6e64,	// (0x0004f0d6) bg_popup_sub_pane_cp24_ParamLimits

0x6e64,	// (0x0004f0d6) bg_popup_sub_pane_cp24

0xe918,	// (0x00056b8a) fep_china_uni_candidate_pane_ParamLimits

0xe918,	// (0x00056b8a) fep_china_uni_candidate_pane

0xe92c,	// (0x00056b9e) fep_china_uni_entry_pane

0xe93c,	// (0x00056bae) popup_fep_china_uni_window_g1

0xe958,	// (0x00056bca) fep_china_uni_entry_pane_g1

0xe962,	// (0x00056bd4) fep_china_uni_entry_pane_g2

0x0001,

0xf72d,	// (0x0005799f) fep_china_uni_entry_pane_g

0xe96c,	// (0x00056bde) fep_entry_item_pane

0xe976,	// (0x00056be8) fep_candidate_item_pane

0xe97e,	// (0x00056bf0) fep_china_uni_candidate_pane_g1

0xe988,	// (0x00056bfa) fep_china_uni_candidate_pane_g2

0xe990,	// (0x00056c02) fep_china_uni_candidate_pane_g3

0xe998,	// (0x00056c0a) fep_china_uni_candidate_pane_g4

0x0003,

0xf732,	// (0x000579a4) fep_china_uni_candidate_pane_g

0x6cd9,	// (0x0004ef4b) fep_entry_item_pane_g1

0xe9a2,	// (0x00056c14) fep_entry_item_pane_t1_ParamLimits

0xe9a2,	// (0x00056c14) fep_entry_item_pane_t1

0xe9b8,	// (0x00056c2a) fep_candidate_item_pane_t1_ParamLimits

0xe9b8,	// (0x00056c2a) fep_candidate_item_pane_t1

0xe9cd,	// (0x00056c3f) fep_candidate_item_pane_t2_ParamLimits

0xe9cd,	// (0x00056c3f) fep_candidate_item_pane_t2

0x0001,

0xf73b,	// (0x000579ad) fep_candidate_item_pane_t_ParamLimits

0xf73b,	// (0x000579ad) fep_candidate_item_pane_t

0x6d31,	// (0x0004efa3) list_highlight_pane_cp31_ParamLimits

0x6d31,	// (0x0004efa3) list_highlight_pane_cp31

0xe9df,	// (0x00056c51) level_1_signal_lsc

0xe9e8,	// (0x00056c5a) level_2_signal_lsc

0xe9f1,	// (0x00056c63) level_3_signal_lsc

0xe9fa,	// (0x00056c6c) level_4_signal_lsc

0xea03,	// (0x00056c75) level_5_signal_lsc

0xea0c,	// (0x00056c7e) level_6_signal_lsc

0xea15,	// (0x00056c87) level_7_signal_lsc

0xea15,	// (0x00056c87) level_1_battery_lsc

0xea1e,	// (0x00056c90) level_2_battery_lsc

0xea27,	// (0x00056c99) level_3_battery_lsc

0xea30,	// (0x00056ca2) level_4_battery_lsc

0xea39,	// (0x00056cab) level_5_battery_lsc

0xea42,	// (0x00056cb4) level_6_battery_lsc

0xe9df,	// (0x00056c51) level_7_battery_lsc

0xea4b,	// (0x00056cbd) scroll_handle_focus_pane_g1

0xea54,	// (0x00056cc6) scroll_handle_focus_pane_g2

0xea5d,	// (0x00056ccf) scroll_handle_focus_pane_g3

0x0002,

0xf740,	// (0x000579b2) scroll_handle_focus_pane_g

0x9fbb,	// (0x0005222d) list_single_2graphic_pane_g1_ParamLimits

0x9fbb,	// (0x0005222d) list_single_2graphic_pane_g1

0xaab8,	// (0x00052d2a) list_single_2graphic_pane_g2_ParamLimits

0xaab8,	// (0x00052d2a) list_single_2graphic_pane_g2

0x0ef0,	// (0x00049162) list_single_2graphic_pane_g3_ParamLimits

0x0ef0,	// (0x00049162) list_single_2graphic_pane_g3

0xb28c,	// (0x000534fe) list_single_2graphic_pane_g4_ParamLimits

0xb28c,	// (0x000534fe) list_single_2graphic_pane_g4

0x0003,

0xf747,	// (0x000579b9) list_single_2graphic_pane_g_ParamLimits

0xf747,	// (0x000579b9) list_single_2graphic_pane_g

0x9fc7,	// (0x00052239) list_single_2graphic_pane_t1_ParamLimits

0x9fc7,	// (0x00052239) list_single_2graphic_pane_t1

0xb29d,	// (0x0005350f) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xb29d,	// (0x0005350f) list_double2_graphic_large_graphic_pane_g1

0x9c51,	// (0x00051ec3) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x9c51,	// (0x00051ec3) list_double2_graphic_large_graphic_pane_g2

0x9b9e,	// (0x00051e10) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x9b9e,	// (0x00051e10) list_double2_graphic_large_graphic_pane_g3

0x9ff5,	// (0x00052267) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x9ff5,	// (0x00052267) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf750,	// (0x000579c2) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf750,	// (0x000579c2) list_double2_graphic_large_graphic_pane_g

0xa001,	// (0x00052273) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xa001,	// (0x00052273) list_double2_graphic_large_graphic_pane_t1

0xa017,	// (0x00052289) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xa017,	// (0x00052289) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf759,	// (0x000579cb) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf759,	// (0x000579cb) list_double2_graphic_large_graphic_pane_t

0xeaef,	// (0x00056d61) popup_fast_swap_window_ParamLimits

0xeaef,	// (0x00056d61) popup_fast_swap_window

0xeb0d,	// (0x00056d7f) popup_side_volume_key_window

0xeb2b,	// (0x00056d9d) stacon_top_pane

0xeb35,	// (0x00056da7) status_pane_ParamLimits

0xeb35,	// (0x00056da7) status_pane

0xeb2b,	// (0x00056d9d) status_small_pane

0x6ce3,	// (0x0004ef55) control_pane

0x6ce3,	// (0x0004ef55) stacon_bottom_pane

0xab31,	// (0x00052da3) scroll_pane_cp121

0xab28,	// (0x00052d9a) set_content_pane

0xb2af,	// (0x00053521) bg_active_tab_pane_g1_cp1

0xea66,	// (0x00056cd8) bg_active_tab_pane_g2_cp1

0xb2b8,	// (0x0005352a) bg_active_tab_pane_g3_cp1

0xb2af,	// (0x00053521) bg_passive_tab_pane_g1_cp1

0xea66,	// (0x00056cd8) bg_passive_tab_pane_g2_cp1

0xb2b8,	// (0x0005352a) bg_passive_tab_pane_g3_cp1

0xb2c1,	// (0x00053533) bg_active_tab_pane_g1_cp2

0xea66,	// (0x00056cd8) bg_active_tab_pane_g2_cp2

0xb2ca,	// (0x0005353c) bg_active_tab_pane_g3_cp2

0xb2c1,	// (0x00053533) bg_passive_tab_pane_g1_cp2

0xea66,	// (0x00056cd8) bg_passive_tab_pane_g2_cp2

0xb2ca,	// (0x0005353c) bg_passive_tab_pane_g3_cp2

0xb2d3,	// (0x00053545) bg_active_tab_pane_g1_cp3

0xea66,	// (0x00056cd8) bg_active_tab_pane_g2_cp3

0xb2dc,	// (0x0005354e) bg_active_tab_pane_g3_cp3

0xb2d3,	// (0x00053545) bg_passive_tab_pane_g1_cp3

0xea66,	// (0x00056cd8) bg_passive_tab_pane_g2_cp3

0xb2dc,	// (0x0005354e) bg_passive_tab_pane_g3_cp3

0xb2e5,	// (0x00053557) bg_active_tab_pane_g1_cp4

0xea66,	// (0x00056cd8) bg_active_tab_pane_g2_cp4

0xb2ee,	// (0x00053560) bg_active_tab_pane_g3_cp4

0xb2e5,	// (0x00053557) bg_passive_tab_pane_g1_cp4

0xea66,	// (0x00056cd8) bg_passive_tab_pane_g2_cp4

0xb2ee,	// (0x00053560) bg_passive_tab_pane_g3_cp4

0xeaad,	// (0x00056d1f) bg_active_tab_pane_g1_cp5

0xea66,	// (0x00056cd8) bg_active_tab_pane_g2_cp5

0xeab6,	// (0x00056d28) bg_active_tab_pane_g3_cp5

0xeaad,	// (0x00056d1f) bg_passive_tab_pane_g1_cp5

0xea66,	// (0x00056cd8) bg_passive_tab_pane_g2_cp5

0xeab6,	// (0x00056d28) bg_passive_tab_pane_g3_cp5

0x4782,	// (0x0004c9f4) list_set_graphic_pane_ParamLimits

0x4782,	// (0x0004c9f4) list_set_graphic_pane

0x6ce3,	// (0x0004ef55) bg_set_opt_pane_cp4

0xb2f7,	// (0x00053569) list_set_graphic_pane_g1_ParamLimits

0xb2f7,	// (0x00053569) list_set_graphic_pane_g1

0xb303,	// (0x00053575) list_set_graphic_pane_g2_ParamLimits

0xb303,	// (0x00053575) list_set_graphic_pane_g2

0x0001,

0xf75e,	// (0x000579d0) list_set_graphic_pane_g_ParamLimits

0xf75e,	// (0x000579d0) list_set_graphic_pane_g

0x0009,

0xfae6,	// (0x00057d58) volume_small_pane_cp_g

0xb327,	// (0x00053599) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xb327,	// (0x00053599) list_double2_large_graphic_pane_g1_cp2

0xb335,	// (0x000535a7) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xb335,	// (0x000535a7) list_double2_large_graphic_pane_g2_cp2

0xeabf,	// (0x00056d31) list_double2_large_graphic_pane_g3_cp2

0xeac7,	// (0x00056d39) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xeac7,	// (0x00056d39) list_double2_large_graphic_pane_t1_cp2

0xeadd,	// (0x00056d4f) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xeadd,	// (0x00056d4f) list_double2_large_graphic_pane_t2_cp2

0xcaee,	// (0x00054d60) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xcaee,	// (0x00054d60) list_double_large_graphic_pane_g1_cp2

0xcb01,	// (0x00054d73) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xcb01,	// (0x00054d73) list_double_large_graphic_pane_g2_cp2

0x21fc,	// (0x0004a46e) list_double_large_graphic_pane_g3_cp2

0x3d13,	// (0x0004bf85) list_double_large_graphic_pane_g4_cp

0x3d1b,	// (0x0004bf8d) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x3d1b,	// (0x0004bf8d) list_double_large_graphic_pane_t1_cp2

0x3d32,	// (0x0004bfa4) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x3d32,	// (0x0004bfa4) list_double_large_graphic_pane_t2_cp2

0xb346,	// (0x000535b8) list_double2_graphic_pane_g1_cp2_ParamLimits

0xb346,	// (0x000535b8) list_double2_graphic_pane_g1_cp2

0xb354,	// (0x000535c6) list_double2_graphic_pane_g2_cp2_ParamLimits

0xb354,	// (0x000535c6) list_double2_graphic_pane_g2_cp2

0xb365,	// (0x000535d7) list_double2_graphic_pane_g3_cp2

0xeb43,	// (0x00056db5) list_double2_graphic_pane_t1_cp2_ParamLimits

0xeb43,	// (0x00056db5) list_double2_graphic_pane_t1_cp2

0xeb59,	// (0x00056dcb) list_double2_graphic_pane_t2_cp2_ParamLimits

0xeb59,	// (0x00056dcb) list_double2_graphic_pane_t2_cp2

0xeb6b,	// (0x00056ddd) list_single_number_heading_pane_g1_cp2_ParamLimits

0xeb6b,	// (0x00056ddd) list_single_number_heading_pane_g1_cp2

0x2149,	// (0x0004a3bb) list_single_number_heading_pane_g2_cp2

0x2151,	// (0x0004a3c3) list_single_number_heading_pane_t1_cp2_ParamLimits

0x2151,	// (0x0004a3c3) list_single_number_heading_pane_t1_cp2

0xb36f,	// (0x000535e1) list_single_number_heading_pane_t2_cp2_ParamLimits

0xb36f,	// (0x000535e1) list_single_number_heading_pane_t2_cp2

0x217b,	// (0x0004a3ed) list_single_number_heading_pane_t3_cp2_ParamLimits

0x217b,	// (0x0004a3ed) list_single_number_heading_pane_t3_cp2

0xeb6b,	// (0x00056ddd) list_single_heading_pane_g1_cp2_ParamLimits

0xeb6b,	// (0x00056ddd) list_single_heading_pane_g1_cp2

0x2149,	// (0x0004a3bb) list_single_heading_pane_g2_cp2

0x2151,	// (0x0004a3c3) list_single_heading_pane_t1_cp2_ParamLimits

0x2151,	// (0x0004a3c3) list_single_heading_pane_t1_cp2

0xcada,	// (0x00054d4c) list_single_heading_pane_t2_cp2_ParamLimits

0xcada,	// (0x00054d4c) list_single_heading_pane_t2_cp2

0x3a2b,	// (0x0004bc9d) list_double_graphic_pane_g1_cp2_ParamLimits

0x3a2b,	// (0x0004bc9d) list_double_graphic_pane_g1_cp2

0x3a37,	// (0x0004bca9) list_double_graphic_pane_g2_cp2_ParamLimits

0x3a37,	// (0x0004bca9) list_double_graphic_pane_g2_cp2

0x3a46,	// (0x0004bcb8) list_double_graphic_pane_g3_cp2

0x3a4e,	// (0x0004bcc0) list_double_graphic_pane_t1_cp2_ParamLimits

0x3a4e,	// (0x0004bcc0) list_double_graphic_pane_t1_cp2

0x3a64,	// (0x0004bcd6) list_double_graphic_pane_t2_cp2_ParamLimits

0x3a64,	// (0x0004bcd6) list_double_graphic_pane_t2_cp2

0x21f0,	// (0x0004a462) list_double_number_pane_g1_cp2_ParamLimits

0x21f0,	// (0x0004a462) list_double_number_pane_g1_cp2

0x21fc,	// (0x0004a46e) list_double_number_pane_g2_cp2

0xca74,	// (0x00054ce6) list_double_number_pane_t1_cp2_ParamLimits

0xca74,	// (0x00054ce6) list_double_number_pane_t1_cp2

0x3a03,	// (0x0004bc75) list_double_number_pane_t2_cp2_ParamLimits

0x3a03,	// (0x0004bc75) list_double_number_pane_t2_cp2

0x3a19,	// (0x0004bc8b) list_double_number_pane_t3_cp2_ParamLimits

0x3a19,	// (0x0004bc8b) list_double_number_pane_t3_cp2

0xc9c2,	// (0x00054c34) list_single_graphic_pane_g1_cp2_ParamLimits

0xc9c2,	// (0x00054c34) list_single_graphic_pane_g1_cp2

0x2256,	// (0x0004a4c8) list_single_graphic_pane_g2_cp2_ParamLimits

0x2256,	// (0x0004a4c8) list_single_graphic_pane_g2_cp2

0x2262,	// (0x0004a4d4) list_single_graphic_pane_g3_cp2

0x38ae,	// (0x0004bb20) list_single_graphic_pane_t1_cp2_ParamLimits

0x38ae,	// (0x0004bb20) list_single_graphic_pane_t1_cp2

0x2256,	// (0x0004a4c8) list_single_number_pane_g1_cp2_ParamLimits

0x2256,	// (0x0004a4c8) list_single_number_pane_g1_cp2

0x2262,	// (0x0004a4d4) list_single_number_pane_g2_cp2

0x38ae,	// (0x0004bb20) list_single_number_pane_t1_cp2_ParamLimits

0x38ae,	// (0x0004bb20) list_single_number_pane_t1_cp2

0xc9ae,	// (0x00054c20) list_single_number_pane_t2_cp2_ParamLimits

0xc9ae,	// (0x00054c20) list_single_number_pane_t2_cp2

0xb335,	// (0x000535a7) list_double2_pane_g1_cp2_ParamLimits

0xb335,	// (0x000535a7) list_double2_pane_g1_cp2

0xeabf,	// (0x00056d31) list_double2_pane_g2_cp2

0x21c8,	// (0x0004a43a) list_double2_pane_t1_cp2_ParamLimits

0x21c8,	// (0x0004a43a) list_double2_pane_t1_cp2

0x21de,	// (0x0004a450) list_double2_pane_t2_cp2_ParamLimits

0x21de,	// (0x0004a450) list_double2_pane_t2_cp2

0x21f0,	// (0x0004a462) list_double_pane_g1_cp2_ParamLimits

0x21f0,	// (0x0004a462) list_double_pane_g1_cp2

0x21fc,	// (0x0004a46e) list_double_pane_g2_cp2

0x2204,	// (0x0004a476) list_double_pane_t1_cp2_ParamLimits

0x2204,	// (0x0004a476) list_double_pane_t1_cp2

0x221a,	// (0x0004a48c) list_double_pane_t2_cp2_ParamLimits

0x221a,	// (0x0004a48c) list_double_pane_t2_cp2

0x2246,	// (0x0004a4b8) list_single_pane_cp2_g3

0x2256,	// (0x0004a4c8) list_single_pane_g1_cp2_ParamLimits

0x2256,	// (0x0004a4c8) list_single_pane_g1_cp2

0x2262,	// (0x0004a4d4) list_single_pane_g2_cp2

0x226a,	// (0x0004a4dc) list_single_pane_t1_cp2_ParamLimits

0x226a,	// (0x0004a4dc) list_single_pane_t1_cp2

0xb39d,	// (0x0005360f) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xb39d,	// (0x0005360f) list_single_large_graphic_pane_g1_cp2

0x2290,	// (0x0004a502) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x2290,	// (0x0004a502) list_single_large_graphic_pane_g2_cp2

0x229c,	// (0x0004a50e) list_single_large_graphic_pane_g3_cp2

0x22a4,	// (0x0004a516) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x22a4,	// (0x0004a516) list_single_large_graphic_pane_g4_cp1

0x22be,	// (0x0004a530) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x22be,	// (0x0004a530) list_single_large_graphic_pane_t1_cp2

0x3878,	// (0x0004baea) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x3878,	// (0x0004baea) list_single_graphic_heading_pane_g1_cp2

0xc989,	// (0x00054bfb) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xc989,	// (0x00054bfb) list_single_graphic_heading_pane_g4_cp2

0x2262,	// (0x0004a4d4) list_single_graphic_heading_pane_g5_cp2

0x3884,	// (0x0004baf6) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x3884,	// (0x0004baf6) list_single_graphic_heading_pane_t1_cp2

0xc99a,	// (0x00054c0c) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xc99a,	// (0x00054c0c) list_single_graphic_heading_pane_t2_cp2

0x3839,	// (0x0004baab) list_single_2graphic_pane_g1_cp2_ParamLimits

0x3839,	// (0x0004baab) list_single_2graphic_pane_g1_cp2

0xc989,	// (0x00054bfb) list_single_2graphic_pane_g2_cp2_ParamLimits

0xc989,	// (0x00054bfb) list_single_2graphic_pane_g2_cp2

0x2262,	// (0x0004a4d4) list_single_2graphic_pane_g3_cp2

0x3856,	// (0x0004bac8) list_single_2graphic_pane_g4_cp2_ParamLimits

0x3856,	// (0x0004bac8) list_single_2graphic_pane_g4_cp2

0x3862,	// (0x0004bad4) list_single_2graphic_pane_t1_cp2_ParamLimits

0x3862,	// (0x0004bad4) list_single_2graphic_pane_t1_cp2

0x6cd9,	// (0x0004ef4b) list_highlight_pane_g10_cp1

0x3411,	// (0x0004b683) list_highlight_pane_g1_cp1

0x3419,	// (0x0004b68b) list_highlight_pane_g2_cp1

0x3421,	// (0x0004b693) list_highlight_pane_g3_cp1

0x3429,	// (0x0004b69b) list_highlight_pane_g4_cp1

0x3431,	// (0x0004b6a3) list_highlight_pane_g5_cp1

0x3439,	// (0x0004b6ab) list_highlight_pane_g6_cp1

0x3441,	// (0x0004b6b3) list_highlight_pane_g7_cp1

0x3449,	// (0x0004b6bb) list_highlight_pane_g8_cp1

0x3451,	// (0x0004b6c3) list_highlight_pane_g9_cp1

0xc94f,	// (0x00054bc1) form_field_slider_pane_t3

0xc95d,	// (0x00054bcf) form_field_slider_pane_t4

0x334d,	// (0x0004b5bf) slider_form_pane_ParamLimits

0x334d,	// (0x0004b5bf) slider_form_pane

0x6ce3,	// (0x0004ef55) control_abbreviations

0x6ce3,	// (0x0004ef55) control_conventions

0x6ce3,	// (0x0004ef55) control_definitions

0x6ce3,	// (0x0004ef55) format_table_attribute

0x3b3f,	// (0x0004bdb1) bg_popup_preview_window_pane_g9

0x6ce3,	// (0x0004ef55) format_table_data2

0x6ce3,	// (0x0004ef55) format_table_data3

0x6ce3,	// (0x0004ef55) format_table_data_example

0x0008,

0x6ce3,	// (0x0004ef55) intro_purpose

0xf8f5,	// (0x00057b67) bg_popup_preview_window_pane_g

0x6ce3,	// (0x0004ef55) texts_category

0x6ce3,	// (0x0004ef55) texts_graphics

0x22d4,	// (0x0004a546) text_digital

0x22e3,	// (0x0004a555) text_primary

0x22f2,	// (0x0004a564) text_primary_small

0x2301,	// (0x0004a573) text_secondary

0x2310,	// (0x0004a582) text_title

0x42bb,	// (0x0004c52d) bg_passive_tab_pane_g1_cp3_srt

0xea66,	// (0x00056cd8) bg_passive_tab_pane_g2_cp3_srt

0x42c4,	// (0x0004c536) bg_passive_tab_pane_g3_cp3_srt

0x6e64,	// (0x0004f0d6) bg_active_tab_pane_cp3_srt_ParamLimits

0x6e64,	// (0x0004f0d6) bg_active_tab_pane_cp3_srt

0x42cd,	// (0x0004c53f) tabs_4_active_pane_srt_g1

0xcdf5,	// (0x00055067) tabs_4_active_pane_srt_t1_ParamLimits

0xcdf5,	// (0x00055067) tabs_4_active_pane_srt_t1

0x42bb,	// (0x0004c52d) bg_active_tab_pane_g1_cp3_copy1

0xea66,	// (0x00056cd8) bg_active_tab_pane_g2_cp3_copy1

0x42c4,	// (0x0004c536) bg_active_tab_pane_g3_cp3_copy1

0x6d31,	// (0x0004efa3) tabs_2_long_active_pane_srt_ParamLimits

0x6d31,	// (0x0004efa3) tabs_2_long_active_pane_srt

0x6d31,	// (0x0004efa3) tabs_2_long_passive_pane_srt_ParamLimits

0x6d31,	// (0x0004efa3) tabs_2_long_passive_pane_srt

0x266b,	// (0x0004a8dd) bg_passive_tab_pane_cp4_srt_ParamLimits

0x266b,	// (0x0004a8dd) bg_passive_tab_pane_cp4_srt

0x3f8f,	// (0x0004c201) bg_passive_tab_pane_g1_cp4_srt

0xea66,	// (0x00056cd8) bg_passive_tab_pane_g2_cp4_srt

0x3f98,	// (0x0004c20a) bg_passive_tab_pane_g3_cp4_srt

0x6d31,	// (0x0004efa3) bg_active_tab_pane_cp4_srt_ParamLimits

0x6d31,	// (0x0004efa3) bg_active_tab_pane_cp4_srt

0xcbeb,	// (0x00054e5d) tabs_2_long_active_pane_srt_t1_ParamLimits

0xcbeb,	// (0x00054e5d) tabs_2_long_active_pane_srt_t1

0x3f8f,	// (0x0004c201) bg_active_tab_pane_g1_cp4_srt

0xea66,	// (0x00056cd8) bg_active_tab_pane_g2_cp4_srt

0x3f98,	// (0x0004c20a) bg_active_tab_pane_g3_cp4_srt

0x6e64,	// (0x0004f0d6) tabs_3_long_active_pane_srt_ParamLimits

0x6e64,	// (0x0004f0d6) tabs_3_long_active_pane_srt

0x6e64,	// (0x0004f0d6) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x6e64,	// (0x0004f0d6) tabs_3_long_passive_pane_cp_srt

0x6e64,	// (0x0004f0d6) tabs_3_long_passive_pane_srt_ParamLimits

0x6e64,	// (0x0004f0d6) tabs_3_long_passive_pane_srt

0x266b,	// (0x0004a8dd) bg_passive_tab_pane_cp5_srt_ParamLimits

0x266b,	// (0x0004a8dd) bg_passive_tab_pane_cp5_srt

0xeaad,	// (0x00056d1f) bg_passive_tab_pane_g1_cp5_srt

0xea66,	// (0x00056cd8) bg_passive_tab_pane_g2_cp5_srt

0xeab6,	// (0x00056d28) bg_passive_tab_pane_g3_cp5_srt

0x6d31,	// (0x0004efa3) bg_active_tab_pane_cp5_srt_ParamLimits

0x6d31,	// (0x0004efa3) bg_active_tab_pane_cp5_srt

0xcbd5,	// (0x00054e47) tabs_3_long_active_pane_srt_t1_ParamLimits

0xcbd5,	// (0x00054e47) tabs_3_long_active_pane_srt_t1

0xeaad,	// (0x00056d1f) bg_active_tab_pane_g1_cp5_srt

0xea66,	// (0x00056cd8) bg_active_tab_pane_g2_cp5_srt

0xeab6,	// (0x00056d28) bg_active_tab_pane_g3_cp5_srt

0x3f6f,	// (0x0004c1e1) navi_text_pane_srt_t1

0x3f67,	// (0x0004c1d9) navi_icon_pane_srt_g1

0x24db,	// (0x0004a74d) midp_editing_number_pane_srt

0x231f,	// (0x0004a591) midp_ticker_pane_srt

0x24e3,	// (0x0004a755) midp_ticker_pane_srt_g1

0x24eb,	// (0x0004a75d) midp_ticker_pane_srt_g2

0x0001,

0xf77d,	// (0x000579ef) midp_ticker_pane_srt_g

0x24f3,	// (0x0004a765) midp_ticker_pane_srt_t1

0x3f58,	// (0x0004c1ca) midp_editing_number_pane_t1_copy1

0x266b,	// (0x0004a8dd) listscroll_midp_pane

0x266b,	// (0x0004a8dd) midp_form_pane

0x2389,	// (0x0004a5fb) midp_info_popup_window_ParamLimits

0x2389,	// (0x0004a5fb) midp_info_popup_window

0xabfa,	// (0x00052e6c) bg_popup_sub_pane_cp50_ParamLimits

0xabfa,	// (0x00052e6c) bg_popup_sub_pane_cp50

0x3047,	// (0x0004b2b9) listscroll_midp_info_pane_ParamLimits

0x3047,	// (0x0004b2b9) listscroll_midp_info_pane

0x302f,	// (0x0004b2a1) listscroll_form_midp_pane_ParamLimits

0x302f,	// (0x0004b2a1) listscroll_form_midp_pane

0x303b,	// (0x0004b2ad) scroll_bar_cp050

0xc943,	// (0x00054bb5) list_midp_pane

0x4da0,	// (0x0004d012) signal_pane_g2_cp

0x2f49,	// (0x0004b1bb) listscroll_midp_info_pane_t1_ParamLimits

0x2f49,	// (0x0004b1bb) listscroll_midp_info_pane_t1

0x2f61,	// (0x0004b1d3) listscroll_midp_info_pane_t2_ParamLimits

0x2f61,	// (0x0004b1d3) listscroll_midp_info_pane_t2

0x2f9f,	// (0x0004b211) listscroll_midp_info_pane_t3_ParamLimits

0x2f9f,	// (0x0004b211) listscroll_midp_info_pane_t3

0x2fd9,	// (0x0004b24b) listscroll_midp_info_pane_t4_ParamLimits

0x2fd9,	// (0x0004b24b) listscroll_midp_info_pane_t4

0x0003,

0xf830,	// (0x00057aa2) listscroll_midp_info_pane_t_ParamLimits

0xf830,	// (0x00057aa2) listscroll_midp_info_pane_t

0xacc4,	// (0x00052f36) scroll_pane_cp21

0x2ee3,	// (0x0004b155) form_midp_field_choice_group_pane

0x2eec,	// (0x0004b15e) form_midp_field_text_pane

0x2f2f,	// (0x0004b1a1) form_midp_field_time_pane

0x2f37,	// (0x0004b1a9) form_midp_gauge_slider_pane

0x2f40,	// (0x0004b1b2) form_midp_gauge_wait_pane

0x6ce3,	// (0x0004ef55) form_midp_image_pane

0xa029,	// (0x0005229b) list_single_midp_pane_ParamLimits

0xa029,	// (0x0005229b) list_single_midp_pane

0xc91b,	// (0x00054b8d) form_midp_field_text_pane_t1

0x2c93,	// (0x0004af05) input_focus_pane_cp050

0x2ed2,	// (0x0004b144) list_midp_form_text_pane

0x2e76,	// (0x0004b0e8) form_midp_field_choice_group_pane_t1

0x2e84,	// (0x0004b0f6) input_focus_pane_cp051

0x2e98,	// (0x0004b10a) list_midp_choice_pane

0x6ce3,	// (0x0004ef55) status_idle_pane

0x2e5a,	// (0x0004b0cc) form_midp_field_time_pane_t1

0x6cd9,	// (0x0004ef4b) wait_anim_pane_g2_copy1

0x2e68,	// (0x0004b0da) form_midp_field_time_pane_t2

0x0001,

0x2439,	// (0x0004a6ab) aid_navinavi_width_2_pane

0xf82b,	// (0x00057a9d) form_midp_field_time_pane_t

0x6ce3,	// (0x0004ef55) input_focus_pane_cp052

0x6ce3,	// (0x0004ef55) bg_input_focus_pane_cp040

0x2e1a,	// (0x0004b08c) form_midp_gauge_slider_pane_t1

0x2e28,	// (0x0004b09a) form_midp_gauge_slider_pane_t2

0xc8ff,	// (0x00054b71) form_midp_gauge_slider_pane_t3

0xc90d,	// (0x00054b7f) form_midp_gauge_slider_pane_t4

0x0003,

0xf822,	// (0x00057a94) form_midp_gauge_slider_pane_t

0x2e52,	// (0x0004b0c4) form_midp_slider_pane

0x6d31,	// (0x0004efa3) bg_input_focus_pane_cp041_ParamLimits

0x6d31,	// (0x0004efa3) bg_input_focus_pane_cp041

0x2de7,	// (0x0004b059) form_midp_gauge_wait_pane_t1_ParamLimits

0x2de7,	// (0x0004b059) form_midp_gauge_wait_pane_t1

0x2df9,	// (0x0004b06b) form_midp_gauge_wait_pane_t2_ParamLimits

0x2df9,	// (0x0004b06b) form_midp_gauge_wait_pane_t2

0x0001,

0xf81d,	// (0x00057a8f) form_midp_gauge_wait_pane_t_ParamLimits

0xf81d,	// (0x00057a8f) form_midp_gauge_wait_pane_t

0x2e0b,	// (0x0004b07d) form_midp_wait_pane_ParamLimits

0x2e0b,	// (0x0004b07d) form_midp_wait_pane

0x2daf,	// (0x0004b021) form_midp_image_pane_g1

0x2db8,	// (0x0004b02a) form_midp_image_pane_t1

0x2dc7,	// (0x0004b039) form_midp_image_pane_t2

0x2dd6,	// (0x0004b048) form_midp_image_pane_t3

0x0002,

0xf816,	// (0x00057a88) form_midp_image_pane_t

0x2da6,	// (0x0004b018) list_single_midp_pane_g1

0xec47,	// (0x00056eb9) list_single_midp_pane_t1

0xc8e8,	// (0x00054b5a) list_midp_form_item_pane_ParamLimits

0xc8e8,	// (0x00054b5a) list_midp_form_item_pane

0x23e1,	// (0x0004a653) list_midp_form_item_pane_t1

0x23f0,	// (0x0004a662) midp_ticker_pane_g1

0x23fc,	// (0x0004a66e) midp_ticker_pane_g2

0x0001,

0xf763,	// (0x000579d5) midp_ticker_pane_g

0xb442,	// (0x000536b4) midp_ticker_pane_t1

0xcd7a,	// (0x00054fec) midp_editing_number_pane_t1

0x41a9,	// (0x0004c41b) midp_editing_number_pane

0x41b8,	// (0x0004c42a) midp_ticker_pane

0x3f48,	// (0x0004c1ba) ai_message_heading_pane

0x6ce3,	// (0x0004ef55) bg_popup_window_pane_cp14

0x3f50,	// (0x0004c1c2) listscroll_ai_message_pane

0x3ece,	// (0x0004c140) ai_message_heading_pane_g1_ParamLimits

0x3ece,	// (0x0004c140) ai_message_heading_pane_g1

0x3eda,	// (0x0004c14c) ai_message_heading_pane_g2_ParamLimits

0x3eda,	// (0x0004c14c) ai_message_heading_pane_g2

0x3ee8,	// (0x0004c15a) ai_message_heading_pane_g3_ParamLimits

0x3ee8,	// (0x0004c15a) ai_message_heading_pane_g3

0x3ef4,	// (0x0004c166) ai_message_heading_pane_g4_ParamLimits

0x3ef4,	// (0x0004c166) ai_message_heading_pane_g4

0x0003,

0xf957,	// (0x00057bc9) ai_message_heading_pane_g_ParamLimits

0xf957,	// (0x00057bc9) ai_message_heading_pane_g

0x3f00,	// (0x0004c172) ai_message_heading_pane_t1_ParamLimits

0x3f00,	// (0x0004c172) ai_message_heading_pane_t1

0x3f1a,	// (0x0004c18c) ai_message_heading_pane_t2_ParamLimits

0x3f1a,	// (0x0004c18c) ai_message_heading_pane_t2

0x0001,

0xf960,	// (0x00057bd2) ai_message_heading_pane_t_ParamLimits

0xf960,	// (0x00057bd2) ai_message_heading_pane_t

0x3f2e,	// (0x0004c1a0) bg_popup_heading_pane_cp1_ParamLimits

0x3f2e,	// (0x0004c1a0) bg_popup_heading_pane_cp1

0x3ebc,	// (0x0004c12e) list_ai_message_pane_ParamLimits

0x3ebc,	// (0x0004c12e) list_ai_message_pane

0xacc4,	// (0x00052f36) scroll_pane_cp10

0x3e58,	// (0x0004c0ca) list_ai_message_pane_g1

0x3e60,	// (0x0004c0d2) list_ai_message_pane_g2

0x0001,

0xf934,	// (0x00057ba6) list_ai_message_pane_g

0x3e68,	// (0x0004c0da) list_ai_message_pane_t1_ParamLimits

0x3e68,	// (0x0004c0da) list_ai_message_pane_t1

0x3e7d,	// (0x0004c0ef) list_ai_message_pane_t2_ParamLimits

0x3e7d,	// (0x0004c0ef) list_ai_message_pane_t2

0x3e92,	// (0x0004c104) list_ai_message_pane_t3_ParamLimits

0x3e92,	// (0x0004c104) list_ai_message_pane_t3

0x3ea7,	// (0x0004c119) list_ai_message_pane_t4_ParamLimits

0x3ea7,	// (0x0004c119) list_ai_message_pane_t4

0x0003,

0xf939,	// (0x00057bab) list_ai_message_pane_t_ParamLimits

0xf939,	// (0x00057bab) list_ai_message_pane_t

0xcbbb,	// (0x00054e2d) cell_ai_soft_ind_pane_ParamLimits

0xcbbb,	// (0x00054e2d) cell_ai_soft_ind_pane

0x241a,	// (0x0004a68c) cell_ai_soft_ind_pane_g1_ParamLimits

0x241a,	// (0x0004a68c) cell_ai_soft_ind_pane_g1

0x6ce3,	// (0x0004ef55) grid_highlight_cp1

0x2427,	// (0x0004a699) text_secondary_cp56_ParamLimits

0x2427,	// (0x0004a699) text_secondary_cp56

0x3e16,	// (0x0004c088) example_general_pane_ParamLimits

0x3e16,	// (0x0004c088) example_general_pane

0x3e22,	// (0x0004c094) example_parent_pane_g1_ParamLimits

0x3e22,	// (0x0004c094) example_parent_pane_g1

0x3e2e,	// (0x0004c0a0) example_parent_pane_t1_ParamLimits

0x3e2e,	// (0x0004c0a0) example_parent_pane_t1

0xba19,	// (0x00053c8b) popup_preview_text_window_ParamLimits

0xba19,	// (0x00053c8b) popup_preview_text_window

0x224e,	// (0x0004a4c0) list_single_pane_cp2_g4

0x6f1a,	// (0x0004f18c) bg_popup_preview_window_pane_ParamLimits

0x6f1a,	// (0x0004f18c) bg_popup_preview_window_pane

0x3b49,	// (0x0004bdbb) popup_preview_text_window_t1_ParamLimits

0x3b49,	// (0x0004bdbb) popup_preview_text_window_t1

0x3b67,	// (0x0004bdd9) popup_preview_text_window_t2_ParamLimits

0x3b67,	// (0x0004bdd9) popup_preview_text_window_t2

0x3bb0,	// (0x0004be22) popup_preview_text_window_t3_ParamLimits

0x3bb0,	// (0x0004be22) popup_preview_text_window_t3

0x3bf5,	// (0x0004be67) popup_preview_text_window_t4_ParamLimits

0x3bf5,	// (0x0004be67) popup_preview_text_window_t4

0x0004,

0xf908,	// (0x00057b7a) popup_preview_text_window_t_ParamLimits

0xf908,	// (0x00057b7a) popup_preview_text_window_t

0x3c73,	// (0x0004bee5) scroll_pane_cp11

0x2b97,	// (0x0004ae09) bg_popup_preview_window_pane_g1

0x3afd,	// (0x0004bd6f) bg_popup_preview_window_pane_g2

0x3b07,	// (0x0004bd79) bg_popup_preview_window_pane_g3

0x3b11,	// (0x0004bd83) bg_popup_preview_window_pane_g4

0x3b1b,	// (0x0004bd8d) bg_popup_preview_window_pane_g5

0x3b25,	// (0x0004bd97) bg_popup_preview_window_pane_g6

0x3b2d,	// (0x0004bd9f) bg_popup_preview_window_pane_g7

0x3b35,	// (0x0004bda7) bg_popup_preview_window_pane_g8

0xeebc,	// (0x0005712e) aid_popup_width_pane

0xb989,	// (0x00053bfb) popup_midp_note_alarm_window_ParamLimits

0xb989,	// (0x00053bfb) popup_midp_note_alarm_window

0xab42,	// (0x00052db4) data_form_pane_ParamLimits

0x9eac,	// (0x0005211e) form_field_data_pane_g1

0x9eb6,	// (0x00052128) form_field_data_pane_t1_ParamLimits

0xab4e,	// (0x00052dc0) input_focus_pane_ParamLimits

0xab5c,	// (0x00052dce) data_form_wide_pane_ParamLimits

0xe806,	// (0x00056a78) form_field_data_wide_pane_g1

0xe812,	// (0x00056a84) form_field_data_wide_pane_t1_ParamLimits

0xa870,	// (0x00052ae2) input_focus_pane_cp6_ParamLimits

0xac6f,	// (0x00052ee1) input_popup_find_pane_g1_ParamLimits

0xac6f,	// (0x00052ee1) input_popup_find_pane_g1

0x013b,	// (0x000483ad) aid_navi_side_left_pane

0x0150,	// (0x000483c2) aid_navi_side_right_pane

0x350c,	// (0x0004b77e) bg_popup_window_pane_cp30_ParamLimits

0x350c,	// (0x0004b77e) bg_popup_window_pane_cp30

0x3586,	// (0x0004b7f8) popup_midp_note_alarm_window_g1_ParamLimits

0x3586,	// (0x0004b7f8) popup_midp_note_alarm_window_g1

0x35b6,	// (0x0004b828) popup_midp_note_alarm_window_t1_ParamLimits

0x35b6,	// (0x0004b828) popup_midp_note_alarm_window_t1

0x3657,	// (0x0004b8c9) popup_midp_note_alarm_window_t2_ParamLimits

0x3657,	// (0x0004b8c9) popup_midp_note_alarm_window_t2

0x3705,	// (0x0004b977) popup_midp_note_alarm_window_t3_ParamLimits

0x3705,	// (0x0004b977) popup_midp_note_alarm_window_t3

0x3737,	// (0x0004b9a9) popup_midp_note_alarm_window_t4_ParamLimits

0x3737,	// (0x0004b9a9) popup_midp_note_alarm_window_t4

0x375d,	// (0x0004b9cf) popup_midp_note_alarm_window_t5_ParamLimits

0x375d,	// (0x0004b9cf) popup_midp_note_alarm_window_t5

0x000a,

0xf8a5,	// (0x00057b17) popup_midp_note_alarm_window_t_ParamLimits

0xf8a5,	// (0x00057b17) popup_midp_note_alarm_window_t

0x3809,	// (0x0004ba7b) wait_bar_pane_cp1_ParamLimits

0x3809,	// (0x0004ba7b) wait_bar_pane_cp1

0x6ce3,	// (0x0004ef55) wait_anim_pane_copy1

0x6ce3,	// (0x0004ef55) wait_border_pane_copy1

0x31f1,	// (0x0004b463) wait_border_pane_g1_copy1

0xe82c,	// (0x00056a9e) form_field_popup_pane_g1

0x9ed0,	// (0x00052142) form_field_popup_pane_t1_ParamLimits

0xab4e,	// (0x00052dc0) input_focus_pane_cp7_ParamLimits

0xab7c,	// (0x00052dee) list_form_pane_ParamLimits

0xe834,	// (0x00056aa6) form_field_popup_wide_pane_g1

0xe83c,	// (0x00056aae) form_field_popup_wide_pane_t1_ParamLimits

0xab4e,	// (0x00052dc0) input_focus_pane_cp8_ParamLimits

0xab88,	// (0x00052dfa) list_form_wide_pane_ParamLimits

0x4348,	// (0x0004c5ba) aid_size_cell_graphic_pane

0x9f4f,	// (0x000521c1) data_form_pane_t1_ParamLimits

0xa057,	// (0x000522c9) data_form_wide_pane_t1_ParamLimits

0xbe1b,	// (0x0005408d) bg_status_flat_pane

0xa3e1,	// (0x00052653) title_pane_t1_ParamLimits

0x6cf9,	// (0x0004ef6b) title_pane_t2_ParamLimits

0x6d1f,	// (0x0004ef91) title_pane_t3_ParamLimits

0xf55d,	// (0x000577cf) title_pane_t_ParamLimits

0xb163,	// (0x000533d5) level_1_signal_ParamLimits

0xb175,	// (0x000533e7) level_2_signal_ParamLimits

0xb188,	// (0x000533fa) level_3_signal_ParamLimits

0xb19b,	// (0x0005340d) level_4_signal_ParamLimits

0xb1ae,	// (0x00053420) level_5_signal_ParamLimits

0xb1c1,	// (0x00053433) level_6_signal_ParamLimits

0xb1d4,	// (0x00053446) level_7_signal_ParamLimits

0xb163,	// (0x000533d5) level_1_battery_ParamLimits

0xb175,	// (0x000533e7) level_2_battery_ParamLimits

0xb188,	// (0x000533fa) level_3_battery_ParamLimits

0xb19b,	// (0x0005340d) level_4_battery_ParamLimits

0xb1ae,	// (0x00053420) level_5_battery_ParamLimits

0xb1c1,	// (0x00053433) level_6_battery_ParamLimits

0xb1d4,	// (0x00053446) level_7_battery_ParamLimits

0x3411,	// (0x0004b683) bg_status_flat_pane_g1

0x3419,	// (0x0004b68b) bg_status_flat_pane_g2

0x3421,	// (0x0004b693) bg_status_flat_pane_g3

0x3429,	// (0x0004b69b) bg_status_flat_pane_g4

0x3431,	// (0x0004b6a3) bg_status_flat_pane_g5

0x3439,	// (0x0004b6ab) bg_status_flat_pane_g6

0x3441,	// (0x0004b6b3) bg_status_flat_pane_g7

0xa475,	// (0x000526e7) tabs_3_active_pane_t1_ParamLimits

0xa475,	// (0x000526e7) tabs_3_passive_pane_t1_ParamLimits

0xa48f,	// (0x00052701) tabs_4_active_pane_t1_ParamLimits

0xa48f,	// (0x00052701) tabs_4_1_passive_pane_t1_ParamLimits

0xad06,	// (0x00052f78) tabs_2_active_pane_t1_ParamLimits

0xad06,	// (0x00052f78) tabs_2_passive_pane_t1_ParamLimits

0x6d31,	// (0x0004efa3) bg_active_tab_pane_cp4_ParamLimits

0xad18,	// (0x00052f8a) tabs_2_long_active_pane_t1_ParamLimits

0x266b,	// (0x0004a8dd) bg_passive_tab_pane_cp4_ParamLimits

0x0f48,	// (0x000491ba) list_single_midp_graphic_pane_t1_ParamLimits

0x6d31,	// (0x0004efa3) bg_active_tab_pane_cp5_ParamLimits

0xad2b,	// (0x00052f9d) tabs_3_long_active_pane_t1_ParamLimits

0x266b,	// (0x0004a8dd) bg_passive_tab_pane_cp5_ParamLimits

0x0f48,	// (0x000491ba) list_single_midp_graphic_pane_t1

0xbe1b,	// (0x0005408d) bg_status_flat_pane_ParamLimits

0x280f,	// (0x0004aa81) indicator_pane_cp2_ParamLimits

0x280f,	// (0x0004aa81) indicator_pane_cp2

0xbfb1,	// (0x00054223) navi_pane_srt_ParamLimits

0xbfb1,	// (0x00054223) navi_pane_srt

0x2976,	// (0x0004abe8) popup_clock_digital_analogue_window_cp1

0x6d75,	// (0x0004efe7) indicator_pane_t1

0x231f,	// (0x0004a591) copy_highlight_pane

0x231f,	// (0x0004a591) cursor_graphics_pane

0x231f,	// (0x0004a591) graphic_within_text_pane

0x231f,	// (0x0004a591) link_highlight_pane

0x3c36,	// (0x0004bea8) popup_preview_text_window_t5_ParamLimits

0x3c36,	// (0x0004bea8) popup_preview_text_window_t5

0x2443,	// (0x0004a6b5) cursor_digital_pane

0x2443,	// (0x0004a6b5) cursor_primary_pane

0x2454,	// (0x0004a6c6) cursor_primary_small_pane

0x245c,	// (0x0004a6ce) cursor_secondary_pane

0x2464,	// (0x0004a6d6) cursor_title_pane

0x2443,	// (0x0004a6b5) link_highlight_digital_pane

0x244b,	// (0x0004a6bd) link_highlight_primary_pane

0x2454,	// (0x0004a6c6) link_highlight_primary_small_pane

0x245c,	// (0x0004a6ce) link_highlight_secondary_pane

0x2464,	// (0x0004a6d6) link_highlight_title_pane

0x2443,	// (0x0004a6b5) copy_highlight_digital_pane

0x2443,	// (0x0004a6b5) copy_highlight_primary_pane

0x2454,	// (0x0004a6c6) copy_highlight_primary_small_pane

0x245c,	// (0x0004a6ce) copy_highlight_secondary_pane

0x2464,	// (0x0004a6d6) copy_highlight_title_pane

0x245c,	// (0x0004a6ce) graphic_text_digital_pane

0x34af,	// (0x0004b721) graphic_text_primary_pane

0x34b8,	// (0x0004b72a) graphic_text_primary_small_pane

0x2454,	// (0x0004a6c6) graphic_text_secondary_pane

0x2443,	// (0x0004a6b5) graphic_text_title_pane

0xb454,	// (0x000536c6) cursor_primary_pane_g1

0x34a1,	// (0x0004b713) cursor_text_primary_t1

0xc97f,	// (0x00054bf1) cursor_primary_small_pane_g1

0x3493,	// (0x0004b705) cursor_text_primary_small_t1

0xc975,	// (0x00054be7) cursor_primary_small_pane_g1_copy1

0x347b,	// (0x0004b6ed) cursor_text_primary_small_t1_copy1

0x3459,	// (0x0004b6cb) cursor_text_title_t1

0xc96b,	// (0x00054bdd) cursor_title_pane_g1

0xb454,	// (0x000536c6) cursor_digital_pane_g1

0x2476,	// (0x0004a6e8) cursor_text_digital_t1

0x2484,	// (0x0004a6f6) link_highlight_primary_pane_g1

0x3402,	// (0x0004b674) link_highlight_primary_pane_t1

0x2484,	// (0x0004a6f6) link_highlight_primary_small_pane_g1

0x248c,	// (0x0004a6fe) link_highlight_primary_small_pane_t1

0x249b,	// (0x0004a70d) link_highlight_secondary_pane_g1

0x24a3,	// (0x0004a715) link_highlight_secondary_pane_t1

0x3376,	// (0x0004b5e8) link_highlight_title_pane_g1

0x337e,	// (0x0004b5f0) link_highlight_title_pane_t1

0x335f,	// (0x0004b5d1) link_highlight_digital_pane_g1

0x3367,	// (0x0004b5d9) link_highlight_digital_pane_t1

0x3227,	// (0x0004b499) copy_highlight_primary_pane_g1

0x323e,	// (0x0004b4b0) copy_highlight_primary_pane_t1

0x3227,	// (0x0004b499) copy_highlight_primary_small_pane_g1

0x322f,	// (0x0004b4a1) copy_highlight_primary_small_pane_t1

0x24b2,	// (0x0004a724) copy_highlight_secondary_pane_g1

0x24ba,	// (0x0004a72c) copy_highlight_secondary_pane_t1

0x3210,	// (0x0004b482) copy_highlight_title_pane_g1

0x3218,	// (0x0004b48a) copy_highlight_title_pane_t1

0x3227,	// (0x0004b499) copy_highlight_digital_pane_g1

0x4518,	// (0x0004c78a) copy_highlight_digital_pane_t1

0x446c,	// (0x0004c6de) graphic_text_primary_pane_g1

0x44fc,	// (0x0004c76e) graphic_text_primary_pane_t1

0x450a,	// (0x0004c77c) graphic_text_primary_pane_t2

0x0001,

0xf9d4,	// (0x00057c46) graphic_text_primary_pane_t

0x44d8,	// (0x0004c74a) graphic_text_primary_small_pane_g1

0x44e0,	// (0x0004c752) graphic_text_primary_small_pane_t1

0x44ee,	// (0x0004c760) graphic_text_primary_small_pane_t2

0x0001,

0xf9cf,	// (0x00057c41) graphic_text_primary_small_pane_t

0x44b4,	// (0x0004c726) graphic_text_secondary_pane_g1

0x44bc,	// (0x0004c72e) graphic_text_secondary_pane_t1

0x44ca,	// (0x0004c73c) graphic_text_secondary_pane_t2

0x0001,

0xf9ca,	// (0x00057c3c) graphic_text_secondary_pane_t

0x4490,	// (0x0004c702) graphic_text_title_pane_g1

0x4498,	// (0x0004c70a) graphic_text_title_pane_t1

0x44a6,	// (0x0004c718) graphic_text_title_pane_t2

0x0001,

0xf9c5,	// (0x00057c37) graphic_text_title_pane_t

0x446c,	// (0x0004c6de) graphic_text_digital_pane_g1

0x4474,	// (0x0004c6e6) graphic_text_digital_pane_t1

0x4482,	// (0x0004c6f4) graphic_text_digital_pane_t2

0x0001,

0xf9c0,	// (0x00057c32) graphic_text_digital_pane_t

0x6d31,	// (0x0004efa3) navi_icon_pane_srt_ParamLimits

0x6d31,	// (0x0004efa3) navi_icon_pane_srt

0x6ce3,	// (0x0004ef55) navi_midp_pane_srt

0x6ce3,	// (0x0004ef55) navi_navi_pane_srt

0x6d31,	// (0x0004efa3) navi_text_pane_srt_ParamLimits

0x6d31,	// (0x0004efa3) navi_text_pane_srt

0x4437,	// (0x0004c6a9) navi_navi_icon_text_pane_srt

0x443f,	// (0x0004c6b1) navi_navi_pane_srt_g1_ParamLimits

0x443f,	// (0x0004c6b1) navi_navi_pane_srt_g1

0x4451,	// (0x0004c6c3) navi_navi_pane_srt_g2_ParamLimits

0x4451,	// (0x0004c6c3) navi_navi_pane_srt_g2

0x0001,

0xf9bb,	// (0x00057c2d) navi_navi_pane_srt_g_ParamLimits

0xf9bb,	// (0x00057c2d) navi_navi_pane_srt_g

0x4463,	// (0x0004c6d5) navi_navi_tabs_pane_srt

0x4437,	// (0x0004c6a9) navi_navi_text_pane_srt

0x4437,	// (0x0004c6a9) navi_navi_volume_pane_srt

0x4428,	// (0x0004c69a) navi_navi_text_pane_srt_t1

0x12e2,	// (0x00049554) navi_navi_volume_pane_srt_g1

0x12ea,	// (0x0004955c) volume_small_pane_srt_ParamLimits

0x12ea,	// (0x0004955c) volume_small_pane_srt

0x0692,	// (0x00048904) volume_small_pane_srt_g1_ParamLimits

0x0692,	// (0x00048904) volume_small_pane_srt_g1

0x06a2,	// (0x00048914) volume_small_pane_srt_g2_ParamLimits

0x06a2,	// (0x00048914) volume_small_pane_srt_g2

0x06b3,	// (0x00048925) volume_small_pane_srt_g3_ParamLimits

0x06b3,	// (0x00048925) volume_small_pane_srt_g3

0x06c4,	// (0x00048936) volume_small_pane_srt_g4_ParamLimits

0x06c4,	// (0x00048936) volume_small_pane_srt_g4

0x06d5,	// (0x00048947) volume_small_pane_srt_g5_ParamLimits

0x06d5,	// (0x00048947) volume_small_pane_srt_g5

0x06e6,	// (0x00048958) volume_small_pane_srt_g6_ParamLimits

0x06e6,	// (0x00048958) volume_small_pane_srt_g6

0x06f7,	// (0x00048969) volume_small_pane_srt_g7_ParamLimits

0x06f7,	// (0x00048969) volume_small_pane_srt_g7

0x0708,	// (0x0004897a) volume_small_pane_srt_g8_ParamLimits

0x0708,	// (0x0004897a) volume_small_pane_srt_g8

0x0719,	// (0x0004898b) volume_small_pane_srt_g9_ParamLimits

0x0719,	// (0x0004898b) volume_small_pane_srt_g9

0x072a,	// (0x0004899c) volume_small_pane_srt_g10_ParamLimits

0x072a,	// (0x0004899c) volume_small_pane_srt_g10

0x0009,

0xf768,	// (0x000579da) volume_small_pane_srt_g_ParamLimits

0xf768,	// (0x000579da) volume_small_pane_srt_g

0xa66f,	// (0x000528e1) query_popup_data_pane_cp2

0x440e,	// (0x0004c680) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x440e,	// (0x0004c680) navi_navi_icon_text_pane_srt_t1

0x34af,	// (0x0004b721) navi_tabs_2_long_pane_srt

0x34af,	// (0x0004b721) navi_tabs_2_pane_srt

0x34af,	// (0x0004b721) navi_tabs_3_long_pane_srt

0x34af,	// (0x0004b721) navi_tabs_3_pane_srt

0x34af,	// (0x0004b721) navi_tabs_4_pane_srt

0x12c2,	// (0x00049534) tabs_2_active_pane_srt_ParamLimits

0x12c2,	// (0x00049534) tabs_2_active_pane_srt

0x12d2,	// (0x00049544) tabs_2_passive_pane_srt_ParamLimits

0x12d2,	// (0x00049544) tabs_2_passive_pane_srt

0x2c93,	// (0x0004af05) bg_passive_tab_pane_cp1_srt_ParamLimits

0x2c93,	// (0x0004af05) bg_passive_tab_pane_cp1_srt

0x43da,	// (0x0004c64c) bg_passive_tab_pane_g1_cp1_srt

0xea66,	// (0x00056cd8) bg_passive_tab_pane_g2_cp1_srt

0x43e3,	// (0x0004c655) bg_passive_tab_pane_g3_cp1_srt

0x6e64,	// (0x0004f0d6) bg_active_tab_pane_cp1_srt_ParamLimits

0x6e64,	// (0x0004f0d6) bg_active_tab_pane_cp1_srt

0x43ec,	// (0x0004c65e) tabs_2_active_pane_srt_g1

0xce76,	// (0x000550e8) tabs_2_active_pane_srt_t1_ParamLimits

0xce76,	// (0x000550e8) tabs_2_active_pane_srt_t1

0x43da,	// (0x0004c64c) bg_active_tab_pane_g1_cp1_srt

0xea66,	// (0x00056cd8) bg_active_tab_pane_g2_cp1_srt

0x43e3,	// (0x0004c655) bg_active_tab_pane_g3_cp1_srt

0x128f,	// (0x00049501) tabs_3_active_pane_srt_ParamLimits

0x128f,	// (0x00049501) tabs_3_active_pane_srt

0x12a0,	// (0x00049512) tabs_3_passive_pane_cp_srt_ParamLimits

0x12a0,	// (0x00049512) tabs_3_passive_pane_cp_srt

0x12b1,	// (0x00049523) tabs_3_passive_pane_srt_ParamLimits

0x12b1,	// (0x00049523) tabs_3_passive_pane_srt

0x2c93,	// (0x0004af05) bg_passive_tab_pane_cp2_srt_ParamLimits

0x2c93,	// (0x0004af05) bg_passive_tab_pane_cp2_srt

0x24c9,	// (0x0004a73b) bg_passive_tab_pane_g1_cp2_srt

0xea66,	// (0x00056cd8) bg_passive_tab_pane_g2_cp2_srt

0x24d2,	// (0x0004a744) bg_passive_tab_pane_g3_cp2_srt

0x6e64,	// (0x0004f0d6) bg_active_tab_pane_cp2_srt_ParamLimits

0x6e64,	// (0x0004f0d6) bg_active_tab_pane_cp2_srt

0x43c0,	// (0x0004c632) tabs_3_active_pane_srt_g1

0xce60,	// (0x000550d2) tabs_3_active_pane_srt_t1_ParamLimits

0xce60,	// (0x000550d2) tabs_3_active_pane_srt_t1

0x24c9,	// (0x0004a73b) bg_active_tab_pane_g1_cp2_srt

0xea66,	// (0x00056cd8) bg_active_tab_pane_g2_cp2_srt

0x24d2,	// (0x0004a744) bg_active_tab_pane_g3_cp2_srt

0x1247,	// (0x000494b9) tabs_4_active_pane_srt_ParamLimits

0x1247,	// (0x000494b9) tabs_4_active_pane_srt

0x1259,	// (0x000494cb) tabs_4_passive_pane_cp2_srt_ParamLimits

0x1259,	// (0x000494cb) tabs_4_passive_pane_cp2_srt

0x088f,	// (0x00048b01) aid_size_cell_toolbar

0x4002,	// (0x0004c274) main_idle_act_pane_ParamLimits

0x0a5a,	// (0x00048ccc) popup_large_graphic_colour_window_ParamLimits

0xbcdf,	// (0x00053f51) popup_toolbar_window_ParamLimits

0xbcdf,	// (0x00053f51) popup_toolbar_window

0x41da,	// (0x0004c44c) list_single_graphic_2heading_pane_ParamLimits

0x41da,	// (0x0004c44c) list_single_graphic_2heading_pane

0xaedb,	// (0x0005314d) aid_size_cell_apps_grid_lsc_pane

0xaeed,	// (0x0005315f) aid_size_cell_apps_grid_prt_pane

0x266b,	// (0x0004a8dd) bg_wml_button_pane_cp1_ParamLimits

0x266b,	// (0x0004a8dd) bg_wml_button_pane_cp1

0xc91b,	// (0x00054b8d) form_midp_field_text_pane_t1_ParamLimits

0x2c93,	// (0x0004af05) input_focus_pane_cp050_ParamLimits

0x2ed2,	// (0x0004b144) list_midp_form_text_pane_ParamLimits

0x2e84,	// (0x0004b0f6) input_focus_pane_cp051_ParamLimits

0x2e98,	// (0x0004b10a) list_midp_choice_pane_ParamLimits

0xc8d2,	// (0x00054b44) list_single_2graphic_pane_cp3_ParamLimits

0xc8d2,	// (0x00054b44) list_single_2graphic_pane_cp3

0x50c9,	// (0x0004d33b) list_single_midp_graphic_pane_ParamLimits

0x50c9,	// (0x0004d33b) list_single_midp_graphic_pane

0xeb8f,	// (0x00056e01) list_single_graphic_2heading_pane_g1_ParamLimits

0xeb8f,	// (0x00056e01) list_single_graphic_2heading_pane_g1

0xeb9b,	// (0x00056e0d) list_single_graphic_2heading_pane_g4_ParamLimits

0xeb9b,	// (0x00056e0d) list_single_graphic_2heading_pane_g4

0xeba7,	// (0x00056e19) list_single_graphic_2heading_pane_g5_ParamLimits

0xeba7,	// (0x00056e19) list_single_graphic_2heading_pane_g5

0x0002,

0xf7bb,	// (0x00057a2d) list_single_graphic_2heading_pane_g_ParamLimits

0xf7bb,	// (0x00057a2d) list_single_graphic_2heading_pane_g

0xebb3,	// (0x00056e25) list_single_graphic_2heading_pane_t1_ParamLimits

0xebb3,	// (0x00056e25) list_single_graphic_2heading_pane_t1

0xebc7,	// (0x00056e39) list_single_graphic_2heading_pane_t2_ParamLimits

0xebc7,	// (0x00056e39) list_single_graphic_2heading_pane_t2

0xebe3,	// (0x00056e55) list_single_graphic_2heading_pane_t3_ParamLimits

0xebe3,	// (0x00056e55) list_single_graphic_2heading_pane_t3

0x0002,

0xf7c2,	// (0x00057a34) list_single_graphic_2heading_pane_t_ParamLimits

0xf7c2,	// (0x00057a34) list_single_graphic_2heading_pane_t

0x2ad5,	// (0x0004ad47) bg_popup_sub_pane_cp2

0x2aff,	// (0x0004ad71) grid_toobar_pane

0x0ec0,	// (0x00049132) cell_toolbar_pane_ParamLimits

0x0ec0,	// (0x00049132) cell_toolbar_pane

0x2b3b,	// (0x0004adad) cell_toolbar_pane_g1_ParamLimits

0x2b3b,	// (0x0004adad) cell_toolbar_pane_g1

0x2b4f,	// (0x0004adc1) cell_toolbar_pane_g2_ParamLimits

0x2b4f,	// (0x0004adc1) cell_toolbar_pane_g2

0x0001,

0xf7d0,	// (0x00057a42) cell_toolbar_pane_g_ParamLimits

0xf7d0,	// (0x00057a42) cell_toolbar_pane_g

0x2b71,	// (0x0004ade3) grid_highlight_pane_cp2_ParamLimits

0x2b71,	// (0x0004ade3) grid_highlight_pane_cp2

0x2b8b,	// (0x0004adfd) toolbar_button_pane

0x2b97,	// (0x0004ae09) toolbar_button_pane_g1

0x2b9f,	// (0x0004ae11) toolbar_button_pane_g2

0x2ba7,	// (0x0004ae19) toolbar_button_pane_g3

0x2baf,	// (0x0004ae21) toolbar_button_pane_g4

0x2bb7,	// (0x0004ae29) toolbar_button_pane_g5

0x2bbf,	// (0x0004ae31) toolbar_button_pane_g6

0x2bc7,	// (0x0004ae39) toolbar_button_pane_g7

0x2bcf,	// (0x0004ae41) toolbar_button_pane_g8

0x2bd7,	// (0x0004ae49) toolbar_button_pane_g9

0x0009,

0xf7d5,	// (0x00057a47) toolbar_button_pane_g

0x0f04,	// (0x00049176) list_single_2graphic_pane_g1_cp3_ParamLimits

0x0f04,	// (0x00049176) list_single_2graphic_pane_g1_cp3

0xc0d2,	// (0x00054344) list_single_2graphic_pane_g2_cp3_ParamLimits

0xc0d2,	// (0x00054344) list_single_2graphic_pane_g2_cp3

0x2149,	// (0x0004a3bb) list_single_2graphic_pane_g3_cp3

0x0f21,	// (0x00049193) list_single_2graphic_pane_g4_cp3_ParamLimits

0x0f21,	// (0x00049193) list_single_2graphic_pane_g4_cp3

0x0f2d,	// (0x0004919f) list_single_2graphic_pane_t1_cp3_ParamLimits

0x0f2d,	// (0x0004919f) list_single_2graphic_pane_t1_cp3

0xeb6b,	// (0x00056ddd) list_single_midp_graphic_pane_g2_ParamLimits

0xeb6b,	// (0x00056ddd) list_single_midp_graphic_pane_g2

0xeb77,	// (0x00056de9) aid_zoom_text_primary

0xeb7f,	// (0x00056df1) aid_zoom_text_secondary

0x2586,	// (0x0004a7f8) status_small_pane_g7_ParamLimits

0x2586,	// (0x0004a7f8) status_small_pane_g7

0x25a9,	// (0x0004a81b) status_small_pane_t1_ParamLimits

0xa3bd,	// (0x0005262f) title_pane_g2

0x0003,

0xf554,	// (0x000577c6) title_pane_g

0xa718,	// (0x0005298a) aid_size_cell_colour_1_pane_ParamLimits

0xa718,	// (0x0005298a) aid_size_cell_colour_1_pane

0xa72c,	// (0x0005299e) aid_size_cell_colour_2_pane_ParamLimits

0xa72c,	// (0x0005299e) aid_size_cell_colour_2_pane

0xa740,	// (0x000529b2) aid_size_cell_colour_3_pane_ParamLimits

0xa740,	// (0x000529b2) aid_size_cell_colour_3_pane

0xa754,	// (0x000529c6) aid_size_cell_colour_4_pane_ParamLimits

0xa754,	// (0x000529c6) aid_size_cell_colour_4_pane

0x0077,	// (0x000482e9) title_pane_stacon_g1_ParamLimits

0x0077,	// (0x000482e9) title_pane_stacon_g1

0x3295,	// (0x0004b507) popup_note_wait_window_g3_ParamLimits

0x3295,	// (0x0004b507) popup_note_wait_window_g3

0x330c,	// (0x0004b57e) popup_note_wait_window_t5_ParamLimits

0x330c,	// (0x0004b57e) popup_note_wait_window_t5

0x6ce3,	// (0x0004ef55) main_feb_china_hwr_fs_writing_pane

0xb676,	// (0x000538e8) popup_feb_china_hwr_fs_window_ParamLimits

0xb676,	// (0x000538e8) popup_feb_china_hwr_fs_window

0xc0e3,	// (0x00054355) aid_size_cell_hwr_fs_ParamLimits

0xc0e3,	// (0x00054355) aid_size_cell_hwr_fs

0x2c93,	// (0x0004af05) bg_popup_sub_pane_cp3_ParamLimits

0x2c93,	// (0x0004af05) bg_popup_sub_pane_cp3

0xc0f8,	// (0x0005436a) grid_hwr_fs_pane_ParamLimits

0xc0f8,	// (0x0005436a) grid_hwr_fs_pane

0x0f8b,	// (0x000491fd) linegrid_hwr_fs_pane_ParamLimits

0x0f8b,	// (0x000491fd) linegrid_hwr_fs_pane

0xc110,	// (0x00054382) cell_hwr_fs_pane_ParamLimits

0xc110,	// (0x00054382) cell_hwr_fs_pane

0x2c9f,	// (0x0004af11) linegrid_hwr_fs_pane_g1_ParamLimits

0x2c9f,	// (0x0004af11) linegrid_hwr_fs_pane_g1

0xc8a6,	// (0x00054b18) linegrid_hwr_fs_pane_g2_ParamLimits

0xc8a6,	// (0x00054b18) linegrid_hwr_fs_pane_g2

0x2cbd,	// (0x0004af2f) linegrid_hwr_fs_pane_g3_ParamLimits

0x2cbd,	// (0x0004af2f) linegrid_hwr_fs_pane_g3

0x0fbf,	// (0x00049231) linegrid_hwr_fs_pane_g4_ParamLimits

0x0fbf,	// (0x00049231) linegrid_hwr_fs_pane_g4

0x0fdd,	// (0x0004924f) linegrid_hwr_fs_pane_g5_ParamLimits

0x0fdd,	// (0x0004924f) linegrid_hwr_fs_pane_g5

0x0004,

0xf7fb,	// (0x00057a6d) linegrid_hwr_fs_pane_g_ParamLimits

0xf7fb,	// (0x00057a6d) linegrid_hwr_fs_pane_g

0x2cc9,	// (0x0004af3b) cell_hwr_fs_pane_g1_ParamLimits

0x2cc9,	// (0x0004af3b) cell_hwr_fs_pane_g1

0x2a0c,	// (0x0004ac7e) cell_hwr_fs_pane_g2_ParamLimits

0x2a0c,	// (0x0004ac7e) cell_hwr_fs_pane_g2

0xc8b8,	// (0x00054b2a) cell_hwr_fs_pane_g3_ParamLimits

0xc8b8,	// (0x00054b2a) cell_hwr_fs_pane_g3

0xc8c5,	// (0x00054b37) cell_hwr_fs_pane_g4_ParamLimits

0xc8c5,	// (0x00054b37) cell_hwr_fs_pane_g4

0x0003,

0xf806,	// (0x00057a78) cell_hwr_fs_pane_g_ParamLimits

0xf806,	// (0x00057a78) cell_hwr_fs_pane_g

0xc136,	// (0x000543a8) cell_hwr_fs_pane_t1

0x6ce3,	// (0x0004ef55) grid_highlight_pane_cp6

0x6ce3,	// (0x0004ef55) main_idle_act2_pane

0xacab,	// (0x00052f1d) aid_inside_area_popup_secondary

0xc9e6,	// (0x00054c58) aid_inside_area_window_primary_ParamLimits

0xc9e6,	// (0x00054c58) aid_inside_area_window_primary

0x4527,	// (0x0004c799) ai2_news_ticker_pane

0x452f,	// (0x0004c7a1) aid_size_cell_ai1_link_ParamLimits

0x452f,	// (0x0004c7a1) aid_size_cell_ai1_link

0x4549,	// (0x0004c7bb) popup_ai2_data_window_ParamLimits

0x4549,	// (0x0004c7bb) popup_ai2_data_window

0x4567,	// (0x0004c7d9) popup_ai2_link_window_ParamLimits

0x4567,	// (0x0004c7d9) popup_ai2_link_window

0x2c93,	// (0x0004af05) bg_popup_sub_pane_cp4_ParamLimits

0x2c93,	// (0x0004af05) bg_popup_sub_pane_cp4

0x457d,	// (0x0004c7ef) grid_ai2_link_pane_ParamLimits

0x457d,	// (0x0004c7ef) grid_ai2_link_pane

0x4594,	// (0x0004c806) popup_ai2_link_window_g1_ParamLimits

0x4594,	// (0x0004c806) popup_ai2_link_window_g1

0x45a0,	// (0x0004c812) popup_ai2_link_window_g2_ParamLimits

0x45a0,	// (0x0004c812) popup_ai2_link_window_g2

0x0001,

0xf9d9,	// (0x00057c4b) popup_ai2_link_window_g_ParamLimits

0xf9d9,	// (0x00057c4b) popup_ai2_link_window_g

0x45b1,	// (0x0004c823) ai2_mp_button_pane

0x45b9,	// (0x0004c82b) ai2_mp_volume_pane

0x2e84,	// (0x0004b0f6) bg_popup_sub_pane_cp5_ParamLimits

0x2e84,	// (0x0004b0f6) bg_popup_sub_pane_cp5

0x45c1,	// (0x0004c833) heading_ai2_gene_pane_ParamLimits

0x45c1,	// (0x0004c833) heading_ai2_gene_pane

0x45cd,	// (0x0004c83f) list_ai2_gene_pane_ParamLimits

0x45cd,	// (0x0004c83f) list_ai2_gene_pane

0x4615,	// (0x0004c887) cell_ai2_link_pane_ParamLimits

0x4615,	// (0x0004c887) cell_ai2_link_pane

0x462b,	// (0x0004c89d) cell_ai2_link_pane_g1

0x6ce3,	// (0x0004ef55) grid_highlight_pane_cp7

0x12ff,	// (0x00049571) ai2_mp_volume_pane_g1

0x4706,	// (0x0004c978) ai2_mp_volume_pane_g2

0x4673,	// (0x0004c8e5) list_ai2_gene_pane_t1

0x46fe,	// (0x0004c970) ai2_mp_volume_pane_g3

0x0002,

0xf9f2,	// (0x00057c64) ai2_mp_volume_pane_g

0x1307,	// (0x00049579) volume_small_pane_cp3

0x470e,	// (0x0004c980) aid_size_cell_ai2_button

0x4716,	// (0x0004c988) grid_ai2_button_pane

0x471f,	// (0x0004c991) cell_ai2_button_pane_ParamLimits

0x471f,	// (0x0004c991) cell_ai2_button_pane

0x6cd9,	// (0x0004ef4b) cell_ai2_button_pane_g1

0x6ce3,	// (0x0004ef55) grid_highlight_pane_cp8

0x46be,	// (0x0004c930) ai2_gene_pane_t1_ParamLimits

0x46be,	// (0x0004c930) ai2_gene_pane_t1

0xb5e6,	// (0x00053858) aid_height_parent_landscape

0xcc02,	// (0x00054e74) aid_height_set_list

0x4002,	// (0x0004c274) aid_size_parent

0x4348,	// (0x0004c5ba) aid_size_cell_graphic_pane_ParamLimits

0x45dd,	// (0x0004c84f) popup_ai2_data_window_g1_ParamLimits

0x45dd,	// (0x0004c84f) popup_ai2_data_window_g1

0x45e9,	// (0x0004c85b) ai2_news_ticker_pane_g1

0x45f1,	// (0x0004c863) ai2_news_ticker_pane_g2

0x0001,

0xf9de,	// (0x00057c50) ai2_news_ticker_pane_g

0x45f9,	// (0x0004c86b) ai2_news_ticker_pane_t1

0x4607,	// (0x0004c879) ai2_news_ticker_pane_t2

0x0001,

0xf9e3,	// (0x00057c55) ai2_news_ticker_pane_t

0x4634,	// (0x0004c8a6) heading_ai2_gene_pane_g1

0x463c,	// (0x0004c8ae) heading_ai2_gene_pane_t1_ParamLimits

0x463c,	// (0x0004c8ae) heading_ai2_gene_pane_t1

0x4651,	// (0x0004c8c3) list_highlight_pane_cp6

0x4659,	// (0x0004c8cb) ai2_gene_pane_ParamLimits

0x4659,	// (0x0004c8cb) ai2_gene_pane

0x4681,	// (0x0004c8f3) list_ai2_gene_pane_t2

0x0001,

0xf9e8,	// (0x00057c5a) list_ai2_gene_pane_t

0x468f,	// (0x0004c901) list_highlight_pane_cp8_ParamLimits

0x468f,	// (0x0004c901) list_highlight_pane_cp8

0x46a0,	// (0x0004c912) ai2_gene_pane_g1_ParamLimits

0x46a0,	// (0x0004c912) ai2_gene_pane_g1

0x46b2,	// (0x0004c924) ai2_gene_pane_g2_ParamLimits

0x46b2,	// (0x0004c924) ai2_gene_pane_g2

0x0001,

0xf9ed,	// (0x00057c5f) ai2_gene_pane_g_ParamLimits

0xf9ed,	// (0x00057c5f) ai2_gene_pane_g

0xaa95,	// (0x00052d07) scroll_pane_cp12

0xb5a5,	// (0x00053817) control_pane_t3_ParamLimits

0xb5a5,	// (0x00053817) control_pane_t3

0x259a,	// (0x0004a80c) status_small_pane_g8_ParamLimits

0x259a,	// (0x0004a80c) status_small_pane_g8

0xb718,	// (0x0005398a) popup_find_window_ParamLimits

0xb9c9,	// (0x00053c3b) popup_note_image_window_ParamLimits

0xebfb,	// (0x00056e6d) list_double2_graphic_pane_vc_g1_ParamLimits

0xebfb,	// (0x00056e6d) list_double2_graphic_pane_vc_g1

0x2290,	// (0x0004a502) list_double2_graphic_pane_vc_g2_ParamLimits

0x2290,	// (0x0004a502) list_double2_graphic_pane_vc_g2

0x0ef0,	// (0x00049162) list_double2_graphic_pane_vc_g3_ParamLimits

0x0ef0,	// (0x00049162) list_double2_graphic_pane_vc_g3

0x0002,

0xf7c9,	// (0x00057a3b) list_double2_graphic_pane_vc_g_ParamLimits

0xf7c9,	// (0x00057a3b) list_double2_graphic_pane_vc_g

0xec07,	// (0x00056e79) list_double2_graphic_pane_vc_t1_ParamLimits

0xec07,	// (0x00056e79) list_double2_graphic_pane_vc_t1

0x2290,	// (0x0004a502) list_single_heading_pane_vc_g1_ParamLimits

0x2290,	// (0x0004a502) list_single_heading_pane_vc_g1

0x0ef0,	// (0x00049162) list_single_heading_pane_vc_g2_ParamLimits

0x0ef0,	// (0x00049162) list_single_heading_pane_vc_g2

0x0001,

0xf5d8,	// (0x0005784a) list_single_heading_pane_vc_g_ParamLimits

0xf5d8,	// (0x0005784a) list_single_heading_pane_vc_g

0xec1d,	// (0x00056e8f) list_single_heading_pane_vc_t1_ParamLimits

0xec1d,	// (0x00056e8f) list_single_heading_pane_vc_t1

0xec35,	// (0x00056ea7) list_single_heading_pane_vc_t2_ParamLimits

0xec35,	// (0x00056ea7) list_single_heading_pane_vc_t2

0x0001,

0xf7ea,	// (0x00057a5c) list_single_heading_pane_vc_t_ParamLimits

0xf7ea,	// (0x00057a5c) list_single_heading_pane_vc_t

0x2bdf,	// (0x0004ae51) list_setting_number_pane_vc_g1_ParamLimits

0x2bdf,	// (0x0004ae51) list_setting_number_pane_vc_g1

0x2beb,	// (0x0004ae5d) list_setting_number_pane_vc_g2_ParamLimits

0x2beb,	// (0x0004ae5d) list_setting_number_pane_vc_g2

0x0001,

0xf7ef,	// (0x00057a61) list_setting_number_pane_vc_g_ParamLimits

0xf7ef,	// (0x00057a61) list_setting_number_pane_vc_g

0x2bf7,	// (0x0004ae69) list_setting_number_pane_vc_t1_ParamLimits

0x2bf7,	// (0x0004ae69) list_setting_number_pane_vc_t1

0x2c0b,	// (0x0004ae7d) list_setting_number_pane_vc_t2_ParamLimits

0x2c0b,	// (0x0004ae7d) list_setting_number_pane_vc_t2

0x2c27,	// (0x0004ae99) list_setting_number_pane_vc_t3_ParamLimits

0x2c27,	// (0x0004ae99) list_setting_number_pane_vc_t3

0x0002,

0xf7f4,	// (0x00057a66) list_setting_number_pane_vc_t_ParamLimits

0xf7f4,	// (0x00057a66) list_setting_number_pane_vc_t

0x2c55,	// (0x0004aec7) set_value_pane_vc_ParamLimits

0x2c55,	// (0x0004aec7) set_value_pane_vc

0x41da,	// (0x0004c44c) list_double2_graphic_pane_vc_ParamLimits

0x41da,	// (0x0004c44c) list_double2_graphic_pane_vc

0x41da,	// (0x0004c44c) list_double2_large_graphic_pane_vc_ParamLimits

0x41da,	// (0x0004c44c) list_double2_large_graphic_pane_vc

0x41da,	// (0x0004c44c) list_double2_pane_vc_ParamLimits

0x41da,	// (0x0004c44c) list_double2_pane_vc

0x41da,	// (0x0004c44c) list_double_graphic_heading_pane_vc_ParamLimits

0x41da,	// (0x0004c44c) list_double_graphic_heading_pane_vc

0x41da,	// (0x0004c44c) list_double_graphic_pane_vc_ParamLimits

0x41da,	// (0x0004c44c) list_double_graphic_pane_vc

0x41da,	// (0x0004c44c) list_double_heading_pane_vc_ParamLimits

0x41da,	// (0x0004c44c) list_double_heading_pane_vc

0x41da,	// (0x0004c44c) list_double_large_graphic_pane_vc_ParamLimits

0x41da,	// (0x0004c44c) list_double_large_graphic_pane_vc

0x41da,	// (0x0004c44c) list_double_number_pane_vc_ParamLimits

0x41da,	// (0x0004c44c) list_double_number_pane_vc

0x41da,	// (0x0004c44c) list_double_pane_vc_ParamLimits

0x41da,	// (0x0004c44c) list_double_pane_vc

0x41da,	// (0x0004c44c) list_double_time_pane_vc_ParamLimits

0x41da,	// (0x0004c44c) list_double_time_pane_vc

0x41da,	// (0x0004c44c) list_setting_number_pane_vc_ParamLimits

0x41da,	// (0x0004c44c) list_setting_number_pane_vc

0x41da,	// (0x0004c44c) list_setting_pane_vc_ParamLimits

0x41da,	// (0x0004c44c) list_setting_pane_vc

0x41da,	// (0x0004c44c) list_single_graphic_heading_pane_vc_ParamLimits

0x41da,	// (0x0004c44c) list_single_graphic_heading_pane_vc

0x41da,	// (0x0004c44c) list_single_heading_pane_vc_ParamLimits

0x41da,	// (0x0004c44c) list_single_heading_pane_vc

0x41da,	// (0x0004c44c) list_single_number_heading_pane_vc_ParamLimits

0x41da,	// (0x0004c44c) list_single_number_heading_pane_vc

0xebfb,	// (0x00056e6d) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xebfb,	// (0x00056e6d) list_double_graphic_heading_pane_vc_g1

0x1310,	// (0x00049582) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x1310,	// (0x00049582) list_double_graphic_heading_pane_vc_g2

0x131c,	// (0x0004958e) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x131c,	// (0x0004958e) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9f9,	// (0x00057c6b) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9f9,	// (0x00057c6b) list_double_graphic_heading_pane_vc_g

0xf05d,	// (0x000572cf) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xf05d,	// (0x000572cf) list_double_graphic_heading_pane_vc_t1

0xec1d,	// (0x00056e8f) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xec1d,	// (0x00056e8f) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa00,	// (0x00057c72) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa00,	// (0x00057c72) list_double_graphic_heading_pane_vc_t

0x2bdf,	// (0x0004ae51) list_setting_pane_vc_g1_ParamLimits

0x2bdf,	// (0x0004ae51) list_setting_pane_vc_g1

0x2beb,	// (0x0004ae5d) list_setting_pane_vc_g2_ParamLimits

0x2beb,	// (0x0004ae5d) list_setting_pane_vc_g2

0x0001,

0xf7ef,	// (0x00057a61) list_setting_pane_vc_g_ParamLimits

0xf7ef,	// (0x00057a61) list_setting_pane_vc_g

0x4986,	// (0x0004cbf8) list_setting_pane_vc_t1_ParamLimits

0x4986,	// (0x0004cbf8) list_setting_pane_vc_t1

0x49a2,	// (0x0004cc14) list_setting_pane_vc_t2_ParamLimits

0x49a2,	// (0x0004cc14) list_setting_pane_vc_t2

0x0001,

0xfa43,	// (0x00057cb5) list_setting_pane_vc_t_ParamLimits

0xfa43,	// (0x00057cb5) list_setting_pane_vc_t

0x2c55,	// (0x0004aec7) set_value_pane_cp_vc_ParamLimits

0x2c55,	// (0x0004aec7) set_value_pane_cp_vc

0x2290,	// (0x0004a502) list_single_number_heading_pane_vc_g1_ParamLimits

0x2290,	// (0x0004a502) list_single_number_heading_pane_vc_g1

0x0ef0,	// (0x00049162) list_single_number_heading_pane_vc_g2_ParamLimits

0x0ef0,	// (0x00049162) list_single_number_heading_pane_vc_g2

0x0001,

0xf5d8,	// (0x0005784a) list_single_number_heading_pane_vc_g_ParamLimits

0xf5d8,	// (0x0005784a) list_single_number_heading_pane_vc_g

0xec1d,	// (0x00056e8f) list_single_number_heading_pane_vc_t1_ParamLimits

0xec1d,	// (0x00056e8f) list_single_number_heading_pane_vc_t1

0xf06f,	// (0x000572e1) list_single_number_heading_pane_vc_t2_ParamLimits

0xf06f,	// (0x000572e1) list_single_number_heading_pane_vc_t2

0xf035,	// (0x000572a7) list_single_number_heading_pane_vc_t3_ParamLimits

0xf035,	// (0x000572a7) list_single_number_heading_pane_vc_t3

0x0002,

0xfa48,	// (0x00057cba) list_single_number_heading_pane_vc_t_ParamLimits

0xfa48,	// (0x00057cba) list_single_number_heading_pane_vc_t

0xebfb,	// (0x00056e6d) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xebfb,	// (0x00056e6d) list_single_graphic_heading_pane_vc_g1

0x2290,	// (0x0004a502) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x2290,	// (0x0004a502) list_single_graphic_heading_pane_vc_g4

0x0ef0,	// (0x00049162) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x0ef0,	// (0x00049162) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7c9,	// (0x00057a3b) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7c9,	// (0x00057a3b) list_single_graphic_heading_pane_vc_g

0xec1d,	// (0x00056e8f) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xec1d,	// (0x00056e8f) list_single_graphic_heading_pane_vc_t1

0xf081,	// (0x000572f3) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xf081,	// (0x000572f3) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa4f,	// (0x00057cc1) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa4f,	// (0x00057cc1) list_single_graphic_heading_pane_vc_t

0x2290,	// (0x0004a502) list_double2_pane_vc_g1_ParamLimits

0x2290,	// (0x0004a502) list_double2_pane_vc_g1

0x0ef0,	// (0x00049162) list_double2_pane_vc_g2_ParamLimits

0x0ef0,	// (0x00049162) list_double2_pane_vc_g2

0x0001,

0xf5d8,	// (0x0005784a) list_double2_pane_vc_g_ParamLimits

0xf5d8,	// (0x0005784a) list_double2_pane_vc_g

0xf047,	// (0x000572b9) list_double2_pane_vc_t1_ParamLimits

0xf047,	// (0x000572b9) list_double2_pane_vc_t1

0x1328,	// (0x0004959a) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x1328,	// (0x0004959a) list_double2_large_graphic_pane_vc_g1

0x2290,	// (0x0004a502) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x2290,	// (0x0004a502) list_double2_large_graphic_pane_vc_g2

0x0ef0,	// (0x00049162) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x0ef0,	// (0x00049162) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5f0,	// (0x00057862) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5f0,	// (0x00057862) list_double2_large_graphic_pane_vc_g

0xf01f,	// (0x00057291) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xf01f,	// (0x00057291) list_double2_large_graphic_pane_vc_t1

0x1334,	// (0x000495a6) list_double_time_pane_vc_g1_ParamLimits

0x1334,	// (0x000495a6) list_double_time_pane_vc_g1

0x1340,	// (0x000495b2) list_double_time_pane_vc_g2_ParamLimits

0x1340,	// (0x000495b2) list_double_time_pane_vc_g2

0x0001,

0xfa54,	// (0x00057cc6) list_double_time_pane_vc_g_ParamLimits

0xfa54,	// (0x00057cc6) list_double_time_pane_vc_g

0xf093,	// (0x00057305) list_double_time_pane_vc_t1_ParamLimits

0xf093,	// (0x00057305) list_double_time_pane_vc_t1

0xf0bd,	// (0x0005732f) list_double_time_pane_vc_t2_ParamLimits

0xf0bd,	// (0x0005732f) list_double_time_pane_vc_t2

0xf106,	// (0x00057378) list_double_time_pane_vc_t3_ParamLimits

0xf106,	// (0x00057378) list_double_time_pane_vc_t3

0xf118,	// (0x0005738a) list_double_time_pane_vc_t4_ParamLimits

0xf118,	// (0x0005738a) list_double_time_pane_vc_t4

0x0003,

0xfa59,	// (0x00057ccb) list_double_time_pane_vc_t_ParamLimits

0xfa59,	// (0x00057ccb) list_double_time_pane_vc_t

0x2290,	// (0x0004a502) list_double_pane_vc_g1_ParamLimits

0x2290,	// (0x0004a502) list_double_pane_vc_g1

0x0ef0,	// (0x00049162) list_double_pane_vc_g2_ParamLimits

0x0ef0,	// (0x00049162) list_double_pane_vc_g2

0x0001,

0xf5d8,	// (0x0005784a) list_double_pane_vc_g_ParamLimits

0xf5d8,	// (0x0005784a) list_double_pane_vc_g

0xf13d,	// (0x000573af) list_double_pane_vc_t1_ParamLimits

0xf13d,	// (0x000573af) list_double_pane_vc_t1

0xf151,	// (0x000573c3) list_double_pane_vc_t2_ParamLimits

0xf151,	// (0x000573c3) list_double_pane_vc_t2

0x0001,

0xfa62,	// (0x00057cd4) list_double_pane_vc_t_ParamLimits

0xfa62,	// (0x00057cd4) list_double_pane_vc_t

0x2290,	// (0x0004a502) list_double_number_pane_vc_g1_ParamLimits

0x2290,	// (0x0004a502) list_double_number_pane_vc_g1

0x0ef0,	// (0x00049162) list_double_number_pane_vc_g2_ParamLimits

0x0ef0,	// (0x00049162) list_double_number_pane_vc_g2

0x0001,

0xf5d8,	// (0x0005784a) list_double_number_pane_vc_g_ParamLimits

0xf5d8,	// (0x0005784a) list_double_number_pane_vc_g

0xf167,	// (0x000573d9) list_double_number_pane_vc_t1_ParamLimits

0xf167,	// (0x000573d9) list_double_number_pane_vc_t1

0xf17b,	// (0x000573ed) list_double_number_pane_vc_t2_ParamLimits

0xf17b,	// (0x000573ed) list_double_number_pane_vc_t2

0xf151,	// (0x000573c3) list_double_number_pane_vc_t3_ParamLimits

0xf151,	// (0x000573c3) list_double_number_pane_vc_t3

0x0002,

0xfa67,	// (0x00057cd9) list_double_number_pane_vc_t_ParamLimits

0xfa67,	// (0x00057cd9) list_double_number_pane_vc_t

0x134c,	// (0x000495be) list_double_large_graphic_pane_vc_g1_ParamLimits

0x134c,	// (0x000495be) list_double_large_graphic_pane_vc_g1

0x135d,	// (0x000495cf) list_double_large_graphic_pane_vc_g2_ParamLimits

0x135d,	// (0x000495cf) list_double_large_graphic_pane_vc_g2

0x0ef0,	// (0x00049162) list_double_large_graphic_pane_vc_g3_ParamLimits

0x0ef0,	// (0x00049162) list_double_large_graphic_pane_vc_g3

0xf18f,	// (0x00057401) list_double_large_graphic_pane_vc_g4_ParamLimits

0xf18f,	// (0x00057401) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa6e,	// (0x00057ce0) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa6e,	// (0x00057ce0) list_double_large_graphic_pane_vc_g

0xf19b,	// (0x0005740d) list_double_large_graphic_pane_vc_t1_ParamLimits

0xf19b,	// (0x0005740d) list_double_large_graphic_pane_vc_t1

0xf1b4,	// (0x00057426) list_double_large_graphic_pane_vc_t2_ParamLimits

0xf1b4,	// (0x00057426) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa77,	// (0x00057ce9) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa77,	// (0x00057ce9) list_double_large_graphic_pane_vc_t

0x1310,	// (0x00049582) list_double_heading_pane_vc_g1_ParamLimits

0x1310,	// (0x00049582) list_double_heading_pane_vc_g1

0x131c,	// (0x0004958e) list_double_heading_pane_vc_g2_ParamLimits

0x131c,	// (0x0004958e) list_double_heading_pane_vc_g2

0x0001,

0xfa7c,	// (0x00057cee) list_double_heading_pane_vc_g_ParamLimits

0xfa7c,	// (0x00057cee) list_double_heading_pane_vc_g

0xf1cb,	// (0x0005743d) list_double_heading_pane_vc_t1_ParamLimits

0xf1cb,	// (0x0005743d) list_double_heading_pane_vc_t1

0xec1d,	// (0x00056e8f) list_double_heading_pane_vc_t2_ParamLimits

0xec1d,	// (0x00056e8f) list_double_heading_pane_vc_t2

0x0001,

0xfa81,	// (0x00057cf3) list_double_heading_pane_vc_t_ParamLimits

0xfa81,	// (0x00057cf3) list_double_heading_pane_vc_t

0xebfb,	// (0x00056e6d) list_double_graphic_pane_vc_g1_ParamLimits

0xebfb,	// (0x00056e6d) list_double_graphic_pane_vc_g1

0x136c,	// (0x000495de) list_double_graphic_pane_vc_g2_ParamLimits

0x136c,	// (0x000495de) list_double_graphic_pane_vc_g2

0x137b,	// (0x000495ed) list_double_graphic_pane_vc_g3_ParamLimits

0x137b,	// (0x000495ed) list_double_graphic_pane_vc_g3

0x0002,

0xfa86,	// (0x00057cf8) list_double_graphic_pane_vc_g_ParamLimits

0xfa86,	// (0x00057cf8) list_double_graphic_pane_vc_g

0xf1dd,	// (0x0005744f) list_double_graphic_pane_vc_t1_ParamLimits

0xf1dd,	// (0x0005744f) list_double_graphic_pane_vc_t1

0xf151,	// (0x000573c3) list_double_graphic_pane_vc_t2_ParamLimits

0xf151,	// (0x000573c3) list_double_graphic_pane_vc_t2

0x0001,

0xfa8d,	// (0x00057cff) list_double_graphic_pane_vc_t_ParamLimits

0xfa8d,	// (0x00057cff) list_double_graphic_pane_vc_t

0xeec8,	// (0x0005713a) aid_size_cell_fastswap

0xa205,	// (0x00052477) aid_size_cell_touch_ParamLimits

0xa205,	// (0x00052477) aid_size_cell_touch

0xf405,	// (0x00057677) popup_fast_swap_wide_window_ParamLimits

0xf405,	// (0x00057677) popup_fast_swap_wide_window

0xa354,	// (0x000525c6) touch_pane_ParamLimits

0xa354,	// (0x000525c6) touch_pane

0xab3a,	// (0x00052dac) button_value_adjust_pane_cp2

0xe7af,	// (0x00056a21) button_value_adjust_pane_cp4

0xe7b7,	// (0x00056a29) form_field_data_pane_cp2

0x9e80,	// (0x000520f2) form_field_data_wide_pane_cp2

0xafe3,	// (0x00053255) bg_scroll_pane_ParamLimits

0x0265,	// (0x000484d7) scroll_handle_pane_ParamLimits

0x0279,	// (0x000484eb) scroll_sc2_down_pane_ParamLimits

0x0279,	// (0x000484eb) scroll_sc2_down_pane

0xb014,	// (0x00053286) scroll_sc2_up_pane_ParamLimits

0xb014,	// (0x00053286) scroll_sc2_up_pane

0xcfc5,	// (0x00055237) grid_wheel_folder_pane_g1_ParamLimits

0xcfc5,	// (0x00055237) grid_wheel_folder_pane_g1

0x059d,	// (0x0004880f) clock_nsta_pane_cp2_ParamLimits

0x059d,	// (0x0004880f) clock_nsta_pane_cp2

0x266b,	// (0x0004a8dd) listscroll_midp_pane_ParamLimits

0xb3ab,	// (0x0005361d) midp_canvas_pane

0x2615,	// (0x0004a887) nsta_clock_indic_pane

0x2651,	// (0x0004a8c3) listscroll_form_pane_vc

0x2659,	// (0x0004a8cb) listscroll_set_pane_vc_ParamLimits

0x2659,	// (0x0004a8cb) listscroll_set_pane_vc

0xbe43,	// (0x000540b5) clock_nsta_pane

0xbe6d,	// (0x000540df) indicator_nsta_pane

0x2ad5,	// (0x0004ad47) bg_popup_sub_pane_cp2_ParamLimits

0x2ae9,	// (0x0004ad5b) find_pane_cp2_ParamLimits

0x2ae9,	// (0x0004ad5b) find_pane_cp2

0x2aff,	// (0x0004ad71) grid_toobar_pane_ParamLimits

0x2c67,	// (0x0004aed9) list_form_gen_pane_vc_ParamLimits

0x2c67,	// (0x0004aed9) list_form_gen_pane_vc

0x2c7d,	// (0x0004aeef) scroll_pane_cp8_vc_ParamLimits

0x2c7d,	// (0x0004aeef) scroll_pane_cp8_vc

0x2cf9,	// (0x0004af6b) data_form_wide_pane_vc_ParamLimits

0x2cf9,	// (0x0004af6b) data_form_wide_pane_vc

0x2d05,	// (0x0004af77) form_field_data_wide_pane_vc_g1

0x2d0d,	// (0x0004af7f) form_field_data_wide_pane_vc_t1_ParamLimits

0x2d0d,	// (0x0004af7f) form_field_data_wide_pane_vc_t1

0xab4e,	// (0x00052dc0) input_focus_pane_cp6_vc_ParamLimits

0xab4e,	// (0x00052dc0) input_focus_pane_cp6_vc

0xc943,	// (0x00054bb5) list_midp_pane_ParamLimits

0x43b4,	// (0x0004c626) scroll_pane_cp16_ParamLimits

0x43b4,	// (0x0004c626) scroll_pane_cp16

0x3069,	// (0x0004b2db) button_value_adjust_pane_ParamLimits

0x3069,	// (0x0004b2db) button_value_adjust_pane

0xcc13,	// (0x00054e85) button_value_adjust_pane_cp6_ParamLimits

0xcc13,	// (0x00054e85) button_value_adjust_pane_cp6

0xcd55,	// (0x00054fc7) settings_code_pane_cp_ParamLimits

0xcd55,	// (0x00054fc7) settings_code_pane_cp

0x6cd9,	// (0x0004ef4b) cell_touch_pane_g1

0x6cd9,	// (0x0004ef4b) cell_touch_pane_g2

0x0001,

0xf70e,	// (0x00057980) cell_touch_pane_g

0xce8c,	// (0x000550fe) cell_touch_pane_cp_ParamLimits

0xce8c,	// (0x000550fe) cell_touch_pane_cp

0xcea8,	// (0x0005511a) cell_touch_pane_ParamLimits

0xcea8,	// (0x0005511a) cell_touch_pane

0x6cd9,	// (0x0004ef4b) scroll_sc2_down_pane_g1

0x6cd9,	// (0x0004ef4b) scroll_sc2_up_pane_g1

0x6ce3,	// (0x0004ef55) bg_set_opt_pane_cp4_vc

0x4752,	// (0x0004c9c4) list_set_graphic_pane_vc_g1_ParamLimits

0x4752,	// (0x0004c9c4) list_set_graphic_pane_vc_g1

0x475e,	// (0x0004c9d0) list_set_graphic_pane_vc_g2_ParamLimits

0x475e,	// (0x0004c9d0) list_set_graphic_pane_vc_g2

0x0001,

0xfa05,	// (0x00057c77) list_set_graphic_pane_vc_g_ParamLimits

0xfa05,	// (0x00057c77) list_set_graphic_pane_vc_g

0x476a,	// (0x0004c9dc) text_primary_small_cp13_vc_ParamLimits

0x476a,	// (0x0004c9dc) text_primary_small_cp13_vc

0x4782,	// (0x0004c9f4) list_set_graphic_pane_vc_ParamLimits

0x4782,	// (0x0004c9f4) list_set_graphic_pane_vc

0x6ce3,	// (0x0004ef55) input_focus_pane_cp2_vc

0x6cd9,	// (0x0004ef4b) setting_code_pane_vc_g1

0x6d48,	// (0x0004efba) setting_code_pane_vc_t1

0x4797,	// (0x0004ca09) set_text_pane_vc_t1_ParamLimits

0x4797,	// (0x0004ca09) set_text_pane_vc_t1

0x6ce3,	// (0x0004ef55) input_focus_pane_cp1_vc

0x47b5,	// (0x0004ca27) list_set_text_pane_vc

0x6cd9,	// (0x0004ef4b) setting_text_pane_vc_g1

0x6ce3,	// (0x0004ef55) bg_set_opt_pane_cp2_vc

0x6d3f,	// (0x0004efb1) setting_slider_graphic_pane_vc_g1

0x47bf,	// (0x0004ca31) setting_slider_graphic_pane_vc_t1

0x47d1,	// (0x0004ca43) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa0a,	// (0x00057c7c) setting_slider_graphic_pane_vc_t

0x47e3,	// (0x0004ca55) slider_set_pane_cp_vc

0x47ed,	// (0x0004ca5f) slider_set_pane_vc_g1

0x47f6,	// (0x0004ca68) slider_set_pane_vc_g2

0x0006,

0xfa0f,	// (0x00057c81) slider_set_pane_vc_g

0xaba9,	// (0x00052e1b) set_opt_bg_pane_g1_copy1

0xabb1,	// (0x00052e23) set_opt_bg_pane_g2_copy1

0x4822,	// (0x0004ca94) set_opt_bg_pane_g3_copy1

0xabc1,	// (0x00052e33) set_opt_bg_pane_g4_copy1

0xabc9,	// (0x00052e3b) set_opt_bg_pane_g5_copy1

0xabd1,	// (0x00052e43) set_opt_bg_pane_g6_copy1

0x482c,	// (0x0004ca9e) set_opt_bg_pane_g7_copy1

0x4836,	// (0x0004caa8) set_opt_bg_pane_g8_copy1

0x4840,	// (0x0004cab2) set_opt_bg_pane_g9_copy1

0x6ce3,	// (0x0004ef55) bg_set_opt_pane_cp_vc

0x484a,	// (0x0004cabc) setting_slider_pane_vc_t1

0x4859,	// (0x0004cacb) setting_slider_pane_vc_t2

0x486b,	// (0x0004cadd) setting_slider_pane_vc_t3

0x0002,

0xfa1e,	// (0x00057c90) setting_slider_pane_vc_t

0x487d,	// (0x0004caef) slider_set_pane_vc

0x1001,	// (0x00049273) volume_set_pane_vc_g1

0x100a,	// (0x0004927c) volume_set_pane_vc_g2

0x1013,	// (0x00049285) volume_set_pane_vc_g3

0x101c,	// (0x0004928e) volume_set_pane_vc_g4

0x1025,	// (0x00049297) volume_set_pane_vc_g5

0x102e,	// (0x000492a0) volume_set_pane_vc_g6

0x1037,	// (0x000492a9) volume_set_pane_vc_g7

0x1040,	// (0x000492b2) volume_set_pane_vc_g8

0x1049,	// (0x000492bb) volume_set_pane_vc_g9

0x1052,	// (0x000492c4) volume_set_pane_vc_g10

0x0009,

0xfa25,	// (0x00057c97) volume_set_pane_vc_g

0x4887,	// (0x0004caf9) volume_set_pane_vc

0x4891,	// (0x0004cb03) button_value_adjust_pane_cp1_vc

0x489b,	// (0x0004cb0d) list_highlight_pane_cp2_vc

0x48a4,	// (0x0004cb16) list_set_pane_vc_ParamLimits

0x48a4,	// (0x0004cb16) list_set_pane_vc

0x4914,	// (0x0004cb86) main_pane_set_vc_t1_ParamLimits

0x4914,	// (0x0004cb86) main_pane_set_vc_t1

0x4929,	// (0x0004cb9b) main_pane_set_vc_t2_ParamLimits

0x4929,	// (0x0004cb9b) main_pane_set_vc_t2

0x493b,	// (0x0004cbad) main_pane_set_vc_t3_ParamLimits

0x493b,	// (0x0004cbad) main_pane_set_vc_t3

0x494f,	// (0x0004cbc1) main_pane_set_vc_t4_ParamLimits

0x494f,	// (0x0004cbc1) main_pane_set_vc_t4

0x0003,

0xfa3a,	// (0x00057cac) main_pane_set_vc_t_ParamLimits

0xfa3a,	// (0x00057cac) main_pane_set_vc_t

0x4963,	// (0x0004cbd5) setting_code_pane_vc_ParamLimits

0x4963,	// (0x0004cbd5) setting_code_pane_vc

0x4974,	// (0x0004cbe6) setting_slider_graphic_pane_vc

0x4974,	// (0x0004cbe6) setting_slider_pane_vc

0x4974,	// (0x0004cbe6) setting_text_pane_vc

0x4974,	// (0x0004cbe6) setting_volume_pane_vc

0x497e,	// (0x0004cbf0) scroll_pane_cp121_vc

0xab28,	// (0x00052d9a) set_content_pane_vc

0x49be,	// (0x0004cc30) button_value_adjust_pane_g1

0x49c7,	// (0x0004cc39) button_value_adjust_pane_g2

0x0001,

0xfa92,	// (0x00057d04) button_value_adjust_pane_g

0x49d0,	// (0x0004cc42) form_field_slider_wide_pane_vc_t1_ParamLimits

0x49d0,	// (0x0004cc42) form_field_slider_wide_pane_vc_t1

0x49e4,	// (0x0004cc56) form_field_slider_wide_pane_vc_t2_ParamLimits

0x49e4,	// (0x0004cc56) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa97,	// (0x00057d09) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa97,	// (0x00057d09) form_field_slider_wide_pane_vc_t

0x6e64,	// (0x0004f0d6) input_focus_pane_cp10_vc_ParamLimits

0x6e64,	// (0x0004f0d6) input_focus_pane_cp10_vc

0x4a12,	// (0x0004cc84) slider_cont_pane_cp1_vc_ParamLimits

0x4a12,	// (0x0004cc84) slider_cont_pane_cp1_vc

0x4a22,	// (0x0004cc94) slider_form_pane_g1_cp2

0x47f6,	// (0x0004ca68) slider_form_pane_g2_cp2

0x4a4f,	// (0x0004ccc1) form_field_slider_pane_vc_t3

0x4a5d,	// (0x0004cccf) form_field_slider_pane_vc_t4

0x4a6b,	// (0x0004ccdd) slider_form_pane_vc_ParamLimits

0x4a6b,	// (0x0004ccdd) slider_form_pane_vc

0x4a78,	// (0x0004ccea) form_field_slider_pane_vc_t1_ParamLimits

0x4a78,	// (0x0004ccea) form_field_slider_pane_vc_t1

0x49e4,	// (0x0004cc56) form_field_slider_pane_vc_t2_ParamLimits

0x49e4,	// (0x0004cc56) form_field_slider_pane_vc_t2

0x0001,

0xfaa9,	// (0x00057d1b) form_field_slider_pane_vc_t_ParamLimits

0xfaa9,	// (0x00057d1b) form_field_slider_pane_vc_t

0x6e64,	// (0x0004f0d6) input_focus_pane_cp9_vc_ParamLimits

0x6e64,	// (0x0004f0d6) input_focus_pane_cp9_vc

0x4a94,	// (0x0004cd06) slider_cont_pane_vc_ParamLimits

0x4a94,	// (0x0004cd06) slider_cont_pane_vc

0x4aa6,	// (0x0004cd18) list_form_graphic_pane_cp_vc_ParamLimits

0x4aa6,	// (0x0004cd18) list_form_graphic_pane_cp_vc

0x2d05,	// (0x0004af77) form_field_popup_wide_pane_vc_g1

0x4abb,	// (0x0004cd2d) form_field_popup_wide_pane_vc_t1_ParamLimits

0x4abb,	// (0x0004cd2d) form_field_popup_wide_pane_vc_t1

0xab4e,	// (0x00052dc0) input_focus_pane_cp8_vc_ParamLimits

0xab4e,	// (0x00052dc0) input_focus_pane_cp8_vc

0x4b00,	// (0x0004cd72) list_form_wide_pane_vc_ParamLimits

0x4b00,	// (0x0004cd72) list_form_wide_pane_vc

0x4b0c,	// (0x0004cd7e) list_form_graphic_pane_vc_g1

0x4b14,	// (0x0004cd86) list_form_graphic_pane_vc_t1_ParamLimits

0x4b14,	// (0x0004cd86) list_form_graphic_pane_vc_t1

0x6d31,	// (0x0004efa3) list_highlight_pane_cp5_vc_ParamLimits

0x6d31,	// (0x0004efa3) list_highlight_pane_cp5_vc

0x4b30,	// (0x0004cda2) list_form_graphic_pane_vc_ParamLimits

0x4b30,	// (0x0004cda2) list_form_graphic_pane_vc

0x2d05,	// (0x0004af77) form_field_popup_pane_vc_g1

0x4b46,	// (0x0004cdb8) form_field_popup_pane_vc_t1_ParamLimits

0x4b46,	// (0x0004cdb8) form_field_popup_pane_vc_t1

0xab4e,	// (0x00052dc0) input_focus_pane_cp7_vc_ParamLimits

0xab4e,	// (0x00052dc0) input_focus_pane_cp7_vc

0x4b5d,	// (0x0004cdcf) list_form_pane_vc_ParamLimits

0x4b5d,	// (0x0004cdcf) list_form_pane_vc

0x4b69,	// (0x0004cddb) data_form_pane_vc_t1_ParamLimits

0x4b69,	// (0x0004cddb) data_form_pane_vc_t1

0xaba9,	// (0x00052e1b) input_focus_pane_vc_g1

0xabb1,	// (0x00052e23) input_focus_pane_vc_g2

0xabb9,	// (0x00052e2b) input_focus_pane_vc_g3

0xabc1,	// (0x00052e33) input_focus_pane_vc_g4

0xabc9,	// (0x00052e3b) input_focus_pane_vc_g5

0xabd1,	// (0x00052e43) input_focus_pane_vc_g6

0xabd9,	// (0x00052e4b) input_focus_pane_vc_g7

0xabe1,	// (0x00052e53) input_focus_pane_vc_g8

0xabe9,	// (0x00052e5b) input_focus_pane_vc_g9

0x6cd9,	// (0x0004ef4b) input_focus_pane_vc_g10

0x0009,

0xf697,	// (0x00057909) input_focus_pane_vc_g

0x2cf9,	// (0x0004af6b) data_form_pane_vc_ParamLimits

0x2cf9,	// (0x0004af6b) data_form_pane_vc

0x2d05,	// (0x0004af77) form_field_data_pane_vc_g1

0x4b86,	// (0x0004cdf8) form_field_data_pane_vc_t1_ParamLimits

0x4b86,	// (0x0004cdf8) form_field_data_pane_vc_t1

0xab4e,	// (0x00052dc0) input_focus_pane_vc_ParamLimits

0xab4e,	// (0x00052dc0) input_focus_pane_vc

0x4ba0,	// (0x0004ce12) button_value_adjust_pane_cp3_vc

0x4ba8,	// (0x0004ce1a) button_value_adjust_pane_cp5_vc

0x4bb0,	// (0x0004ce22) form_field_data_pane_vc_ParamLimits

0x4bb0,	// (0x0004ce22) form_field_data_pane_vc

0x4bcb,	// (0x0004ce3d) form_field_data_pane_vc_cp2

0x4bd3,	// (0x0004ce45) form_field_data_wide_pane_vc_ParamLimits

0x4bd3,	// (0x0004ce45) form_field_data_wide_pane_vc

0x4bed,	// (0x0004ce5f) form_field_data_wide_pane_vc_cp2

0x4bf5,	// (0x0004ce67) form_field_popup_pane_vc_ParamLimits

0x4bf5,	// (0x0004ce67) form_field_popup_pane_vc

0x4c10,	// (0x0004ce82) form_field_popup_wide_pane_vc_ParamLimits

0x4c10,	// (0x0004ce82) form_field_popup_wide_pane_vc

0x4c2a,	// (0x0004ce9c) form_field_slider_pane_vc_ParamLimits

0x4c2a,	// (0x0004ce9c) form_field_slider_pane_vc

0x4c3d,	// (0x0004ceaf) form_field_slider_wide_pane_vc_ParamLimits

0x4c3d,	// (0x0004ceaf) form_field_slider_wide_pane_vc

0xcec6,	// (0x00055138) grid_touch_1_pane_ParamLimits

0xcec6,	// (0x00055138) grid_touch_1_pane

0xceda,	// (0x0005514c) grid_touch_2_pane_ParamLimits

0xceda,	// (0x0005514c) grid_touch_2_pane

0x4d14,	// (0x0004cf86) touch_pane_g1_ParamLimits

0x4d14,	// (0x0004cf86) touch_pane_g1

0x4c76,	// (0x0004cee8) cell_app_pane_cp_wide_ParamLimits

0x4c76,	// (0x0004cee8) cell_app_pane_cp_wide

0x4c87,	// (0x0004cef9) grid_popup_fast_wide_pane_ParamLimits

0x4c87,	// (0x0004cef9) grid_popup_fast_wide_pane

0x4c9b,	// (0x0004cf0d) scroll_pane_cp19_ParamLimits

0x4c9b,	// (0x0004cf0d) scroll_pane_cp19

0x6ce3,	// (0x0004ef55) bg_popup_window_pane_cp20

0x4caf,	// (0x0004cf21) listscroll_popup_fast_wide_pane

0xcf06,	// (0x00055178) grid_indicator_nsta_pane

0x4cb7,	// (0x0004cf29) clock_nsta_pane_g1

0x4cc0,	// (0x0004cf32) clock_nsta_pane_t1

0xcf14,	// (0x00055186) cell_indicator_nsta_pane_ParamLimits

0xcf14,	// (0x00055186) cell_indicator_nsta_pane

0x4d14,	// (0x0004cf86) cell_indicator_nsta_pane_g1

0xcf31,	// (0x000551a3) cell_indicator_nsta_pane_g2

0x0001,

0xfaba,	// (0x00057d2c) cell_indicator_nsta_pane_g

0x4d38,	// (0x0004cfaa) clock_nsta_pane_cp

0x4d40,	// (0x0004cfb2) indicator_nsta_pane_cp

0x4d49,	// (0x0004cfbb) nsta_clock_indic_pane_g1

0x6d6d,	// (0x0004efdf) grid_indicator_pane

0xb106,	// (0x00053378) scroll_pane_cp29

0x04e9,	// (0x0004875b) indicator_nsta_pane_cp2_ParamLimits

0x04e9,	// (0x0004875b) indicator_nsta_pane_cp2

0x6d31,	// (0x0004efa3) main_apps_wheel_pane

0x2eec,	// (0x0004b15e) form_midp_field_text_pane_ParamLimits

0x303b,	// (0x0004b2ad) scroll_bar_cp050_ParamLimits

0x4db2,	// (0x0004d024) cell_indicator_pane_ParamLimits

0x4db2,	// (0x0004d024) cell_indicator_pane

0x4dca,	// (0x0004d03c) cell_indicator_pane_g1

0xcf47,	// (0x000551b9) grid_wheel_folder_pane_ParamLimits

0xcf47,	// (0x000551b9) grid_wheel_folder_pane

0xcf55,	// (0x000551c7) list_wheel_apps_pane_ParamLimits

0xcf55,	// (0x000551c7) list_wheel_apps_pane

0xcf63,	// (0x000551d5) main_apps_wheel_pane_g1_ParamLimits

0xcf63,	// (0x000551d5) main_apps_wheel_pane_g1

0xcf73,	// (0x000551e5) main_apps_wheel_pane_g2_ParamLimits

0xcf73,	// (0x000551e5) main_apps_wheel_pane_g2

0x0001,

0xfad6,	// (0x00057d48) main_apps_wheel_pane_g_ParamLimits

0xfad6,	// (0x00057d48) main_apps_wheel_pane_g

0xcf83,	// (0x000551f5) main_apps_wheel_pane_t1_ParamLimits

0xcf83,	// (0x000551f5) main_apps_wheel_pane_t1

0xcf9b,	// (0x0005520d) list_wheel_apps_pane_g1

0xcfa3,	// (0x00055215) list_wheel_apps_pane_g2

0xcfab,	// (0x0005521d) list_wheel_apps_pane_g3

0xcfb3,	// (0x00055225) list_wheel_apps_pane_g4

0xcfbb,	// (0x0005522d) list_wheel_apps_pane_g5

0x0004,

0xfadb,	// (0x00057d4d) list_wheel_apps_pane_g

0x219b,	// (0x0004a40d) navi_icon_text_pane

0xbd37,	// (0x00053fa9) aid_fill_nsta

0xcfd8,	// (0x0005524a) navi_icon_text_pane_g1

0xcfe4,	// (0x00055256) navi_icon_text_pane_t1

0xb30f,	// (0x00053581) list_set_graphic_pane_t1_ParamLimits

0xb30f,	// (0x00053581) list_set_graphic_pane_t1

0x378c,	// (0x0004b9fe) popup_midp_note_alarm_window_t6_ParamLimits

0x378c,	// (0x0004b9fe) popup_midp_note_alarm_window_t6

0x379e,	// (0x0004ba10) popup_midp_note_alarm_window_t7_ParamLimits

0x379e,	// (0x0004ba10) popup_midp_note_alarm_window_t7

0x37b0,	// (0x0004ba22) popup_midp_note_alarm_window_t8_ParamLimits

0x37b0,	// (0x0004ba22) popup_midp_note_alarm_window_t8

0x37c2,	// (0x0004ba34) popup_midp_note_alarm_window_t9_ParamLimits

0x37c2,	// (0x0004ba34) popup_midp_note_alarm_window_t9

0x37d4,	// (0x0004ba46) popup_midp_note_alarm_window_t10_ParamLimits

0x37d4,	// (0x0004ba46) popup_midp_note_alarm_window_t10

0x37e6,	// (0x0004ba58) popup_midp_note_alarm_window_t11_ParamLimits

0x37e6,	// (0x0004ba58) popup_midp_note_alarm_window_t11

0x37f8,	// (0x0004ba6a) scroll_pane_cp17_ParamLimits

0x37f8,	// (0x0004ba6a) scroll_pane_cp17

0x1001,	// (0x00049273) volume_small_pane_cp_g1

0x1387,	// (0x000495f9) volume_small_pane_cp_g2

0x1390,	// (0x00049602) volume_small_pane_cp_g3

0x1399,	// (0x0004960b) volume_small_pane_cp_g4

0x13a2,	// (0x00049614) volume_small_pane_cp_g5

0x13ab,	// (0x0004961d) volume_small_pane_cp_g6

0x13b4,	// (0x00049626) volume_small_pane_cp_g7

0x13bd,	// (0x0004962f) volume_small_pane_cp_g8

0x13c6,	// (0x00049638) volume_small_pane_cp_g9

0x13cf,	// (0x00049641) volume_small_pane_cp_g10

0x23f0,	// (0x0004a662) midp_ticker_pane_g1_ParamLimits

0x23fc,	// (0x0004a66e) midp_ticker_pane_g2_ParamLimits

0xf763,	// (0x000579d5) midp_ticker_pane_g_ParamLimits

0xb442,	// (0x000536b4) midp_ticker_pane_t1_ParamLimits

0xbd5b,	// (0x00053fcd) aid_fill_nsta_2

0x3027,	// (0x0004b299) list_form2_midp_pane

0x41a9,	// (0x0004c41b) midp_editing_number_pane_ParamLimits

0x41b8,	// (0x0004c42a) midp_ticker_pane_ParamLimits

0x4ec3,	// (0x0004d135) form2_midp_field_pane

0x4ee7,	// (0x0004d159) scroll_pane_cp51

0x4f07,	// (0x0004d179) form2_midp_button_pane_ParamLimits

0x4f07,	// (0x0004d179) form2_midp_button_pane

0x4f19,	// (0x0004d18b) form2_midp_content_pane_ParamLimits

0x4f19,	// (0x0004d18b) form2_midp_content_pane

0x4f33,	// (0x0004d1a5) form2_midp_field_choice_group_pane

0x4f3b,	// (0x0004d1ad) form2_midp_field_pane_g1

0x4f43,	// (0x0004d1b5) form2_midp_field_pane_g2

0x4f4b,	// (0x0004d1bd) form2_midp_field_pane_g3

0x4f53,	// (0x0004d1c5) form2_midp_field_pane_g4

0x0003,

0xfb00,	// (0x00057d72) form2_midp_field_pane_g

0x4f5b,	// (0x0004d1cd) form2_midp_gauge_slider_pane

0x4f63,	// (0x0004d1d5) form2_midp_gauge_wait_pane

0x4f6b,	// (0x0004d1dd) form2_midp_image_pane_ParamLimits

0x4f6b,	// (0x0004d1dd) form2_midp_image_pane

0x4f86,	// (0x0004d1f8) form2_midp_label_pane_ParamLimits

0x4f86,	// (0x0004d1f8) form2_midp_label_pane

0xd012,	// (0x00055284) form2_midp_label_pane_cp_ParamLimits

0xd012,	// (0x00055284) form2_midp_label_pane_cp

0x4fc6,	// (0x0004d238) form2_midp_string_pane_ParamLimits

0x4fc6,	// (0x0004d238) form2_midp_string_pane

0xf1f1,	// (0x00057463) form2_midp_text_pane_ParamLimits

0xf1f1,	// (0x00057463) form2_midp_text_pane

0x4fd8,	// (0x0004d24a) form2_midp_time_pane

0x4fe8,	// (0x0004d25a) input_focus_pane_cp51_ParamLimits

0x4fe8,	// (0x0004d25a) input_focus_pane_cp51

0x5000,	// (0x0004d272) form2_midp_label_pane_t1_ParamLimits

0x5000,	// (0x0004d272) form2_midp_label_pane_t1

0xf214,	// (0x00057486) form2_mdip_text_pane_t1_ParamLimits

0xf214,	// (0x00057486) form2_mdip_text_pane_t1

0xf233,	// (0x000574a5) form2_midp_time_pane_t1

0x504e,	// (0x0004d2c0) form2_midp_gauge_slider_pane_t1

0xd033,	// (0x000552a5) form2_midp_gauge_slider_pane_t2

0xd045,	// (0x000552b7) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb09,	// (0x00057d7b) form2_midp_gauge_slider_pane_t

0x5084,	// (0x0004d2f6) form2_midp_slider_pane

0x5090,	// (0x0004d302) form2_midp_gauge_wait_pane_t1

0x509e,	// (0x0004d310) form2_midp_wait_pane_ParamLimits

0x509e,	// (0x0004d310) form2_midp_wait_pane

0x2d4c,	// (0x0004afbe) list_single_2graphic_pane_cp4_ParamLimits

0x2d4c,	// (0x0004afbe) list_single_2graphic_pane_cp4

0x50c9,	// (0x0004d33b) list_single_midp_graphic_pane_cp_ParamLimits

0x50c9,	// (0x0004d33b) list_single_midp_graphic_pane_cp

0x6ce3,	// (0x0004ef55) list_highlight_pane_cp20

0x50ed,	// (0x0004d35f) list_single_2graphic_pane_g1_cp4

0x4634,	// (0x0004c8a6) list_single_2graphic_pane_g2_cp4

0x50f5,	// (0x0004d367) list_single_2graphic_pane_t1_cp4

0x6d31,	// (0x0004efa3) list_highlight_pane_cp21

0x5104,	// (0x0004d376) list_single_midp_graphic_pane_g4_cp

0x5113,	// (0x0004d385) list_single_midp_graphic_pane_t1_cp

0xd057,	// (0x000552c9) form2_mdip_string_pane_t1_ParamLimits

0xd057,	// (0x000552c9) form2_mdip_string_pane_t1

0x6ce3,	// (0x0004ef55) bg_wml_button_pane_cp2

0x6cd9,	// (0x0004ef4b) form2_midp_image_pane_g1

0xf533,	// (0x000577a5) list_double_large_graphic_pane_g5_ParamLimits

0xf533,	// (0x000577a5) list_double_large_graphic_pane_g5

0x266b,	// (0x0004a8dd) midp_form_pane_ParamLimits

0x6d31,	// (0x0004efa3) main_apps_wheel_pane_ParamLimits

0xba4f,	// (0x00053cc1) popup_preview_window_ParamLimits

0xba4f,	// (0x00053cc1) popup_preview_window

0x0e59,	// (0x000490cb) popup_touch_info_window_ParamLimits

0x0e59,	// (0x000490cb) popup_touch_info_window

0x0e7b,	// (0x000490ed) popup_touch_menu_window_ParamLimits

0x0e7b,	// (0x000490ed) popup_touch_menu_window

0x6ccf,	// (0x0004ef41) bg_popup_sub_pane_cp6

0x51cd,	// (0x0004d43f) list_touch_menu_pane

0x51d5,	// (0x0004d447) list_single_touch_menu_pane_ParamLimits

0x51d5,	// (0x0004d447) list_single_touch_menu_pane

0x51ed,	// (0x0004d45f) list_single_touch_menu_pane_t1

0x6d31,	// (0x0004efa3) bg_popup_sub_pane_cp7_ParamLimits

0x6d31,	// (0x0004efa3) bg_popup_sub_pane_cp7

0x51fb,	// (0x0004d46d) heading_sub_pane

0x5203,	// (0x0004d475) list_touch_info_pane_ParamLimits

0x5203,	// (0x0004d475) list_touch_info_pane

0x5212,	// (0x0004d484) list_single_touch_info_pane_ParamLimits

0x5212,	// (0x0004d484) list_single_touch_info_pane

0x5224,	// (0x0004d496) list_single_touch_info_pane_t1

0x5232,	// (0x0004d4a4) list_single_touch_info_pane_t2

0x0001,

0xfb17,	// (0x00057d89) list_single_touch_info_pane_t

0x231f,	// (0x0004a591) bg_popup_heading_pane_cp

0x5240,	// (0x0004d4b2) heading_sub_pane_t1

0x2c93,	// (0x0004af05) bg_popup_preview_window_pane_cp_ParamLimits

0x2c93,	// (0x0004af05) bg_popup_preview_window_pane_cp

0x51fb,	// (0x0004d46d) heading_preview_pane

0x5203,	// (0x0004d475) list_preview_pane_ParamLimits

0x5203,	// (0x0004d475) list_preview_pane

0x524e,	// (0x0004d4c0) popup_preview_window_g1

0x5212,	// (0x0004d484) list_single_preview_pane_ParamLimits

0x5212,	// (0x0004d484) list_single_preview_pane

0x5256,	// (0x0004d4c8) list_single_preview_pane_g1

0x525e,	// (0x0004d4d0) list_single_preview_pane_t1

0x5224,	// (0x0004d496) list_single_preview_pane_t2

0x0001,

0xfb1c,	// (0x00057d8e) list_single_preview_pane_t

0x526c,	// (0x0004d4de) bg_popup_heading_pane_cp2_ParamLimits

0x526c,	// (0x0004d4de) bg_popup_heading_pane_cp2

0x5282,	// (0x0004d4f4) heading_preview_pane_g1

0x528a,	// (0x0004d4fc) heading_preview_pane_t1_ParamLimits

0x528a,	// (0x0004d4fc) heading_preview_pane_t1

0x6d84,	// (0x0004eff6) soft_indicator_pane_t1_ParamLimits

0xaa72,	// (0x00052ce4) scroll_pane_ParamLimits

0xb002,	// (0x00053274) scroll_sc2_left_pane

0xb00b,	// (0x0005327d) scroll_sc2_right_pane

0xb02a,	// (0x0005329c) scroll_bg_pane_g1_ParamLimits

0xb03f,	// (0x000532b1) scroll_bg_pane_g2_ParamLimits

0xb057,	// (0x000532c9) scroll_bg_pane_g3_ParamLimits

0xf6ee,	// (0x00057960) scroll_bg_pane_g_ParamLimits

0xb02a,	// (0x0005329c) scroll_handle_pane_g1_ParamLimits

0xb079,	// (0x000532eb) scroll_handle_pane_g2_ParamLimits

0xb057,	// (0x000532c9) scroll_handle_pane_g3_ParamLimits

0xf6f5,	// (0x00057967) scroll_handle_pane_g_ParamLimits

0x08b9,	// (0x00048b2b) popup_choice_list_window_ParamLimits

0x08b9,	// (0x00048b2b) popup_choice_list_window

0x2ae1,	// (0x0004ad53) choice_list_pane

0x2b63,	// (0x0004add5) cell_toolbar_pane_t1

0x2b8b,	// (0x0004adfd) toolbar_button_pane_ParamLimits

0x3cc8,	// (0x0004bf3a) ai_gene_pane_1_t2_ParamLimits

0x3cc8,	// (0x0004bf3a) ai_gene_pane_1_t2

0x0001,

0xf918,	// (0x00057b8a) ai_gene_pane_1_t_ParamLimits

0xf918,	// (0x00057b8a) ai_gene_pane_1_t

0x52a7,	// (0x0004d519) scroll_sc2_left_pane_g1

0x52a7,	// (0x0004d519) scroll_sc2_right_pane_g1

0x266b,	// (0x0004a8dd) bg_popup_sub_pane_cp10

0x52b1,	// (0x0004d523) list_choice_list_pane

0x52ca,	// (0x0004d53c) list_single_choice_list_pane_ParamLimits

0x52ca,	// (0x0004d53c) list_single_choice_list_pane

0x52e2,	// (0x0004d554) list_single_choice_list_pane_g1

0xace9,	// (0x00052f5b) list_single_choice_list_pane_t1_ParamLimits

0xace9,	// (0x00052f5b) list_single_choice_list_pane_t1

0x52ea,	// (0x0004d55c) choice_list_pane_g1

0x52f2,	// (0x0004d564) choice_list_pane_t1

0x6ccf,	// (0x0004ef41) input_focus_pane_cp11

0xaea6,	// (0x00053118) title_pane_stacon_g2_ParamLimits

0xaea6,	// (0x00053118) title_pane_stacon_g2

0x0002,

0xf6d4,	// (0x00057946) title_pane_stacon_g_ParamLimits

0xf6d4,	// (0x00057946) title_pane_stacon_g

0x231f,	// (0x0004a591) cursor_press_pane

0xb6cc,	// (0x0005393e) popup_fep_hwr_window_ParamLimits

0xb6cc,	// (0x0005393e) popup_fep_hwr_window

0x09fd,	// (0x00048c6f) popup_fep_vkb_window_ParamLimits

0x09fd,	// (0x00048c6f) popup_fep_vkb_window

0x5300,	// (0x0004d572) cursor_press_pane_g1

0x0002,

0xfb45,	// (0x00057db7) fep_vkb_side_pane_g_ParamLimits

0x1411,	// (0x00049683) fep_hwr_candidate_pane_ParamLimits

0x1411,	// (0x00049683) fep_hwr_candidate_pane

0x143b,	// (0x000496ad) fep_hwr_side_pane_ParamLimits

0x143b,	// (0x000496ad) fep_hwr_side_pane

0x145d,	// (0x000496cf) fep_hwr_top_pane_ParamLimits

0x145d,	// (0x000496cf) fep_hwr_top_pane

0x1475,	// (0x000496e7) fep_hwr_write_pane_ParamLimits

0x1475,	// (0x000496e7) fep_hwr_write_pane

0xfb45,	// (0x00057db7) fep_vkb_side_pane_g

0x5308,	// (0x0004d57a) fep_hwr_top_pane_g1

0x531a,	// (0x0004d58c) fep_hwr_top_pane_g2

0x14a1,	// (0x00049713) fep_hwr_top_pane_g3

0x0002,

0xfb21,	// (0x00057d93) fep_hwr_top_pane_g

0x14b6,	// (0x00049728) fep_hwr_top_text_pane

0xe8a2,	// (0x00056b14) fep_hwr_top_text_pane_g1

0x5350,	// (0x0004d5c2) fep_hwr_top_text_pane_t1

0x15c0,	// (0x00049832) fep_hwr_candidate_pane_g1

0x559b,	// (0x0004d80d) fep_vkb_keypad_pane_g3_ParamLimits

0x559b,	// (0x0004d80d) fep_vkb_keypad_pane_g3

0x55c7,	// (0x0004d839) fep_vkb_keypad_pane_g4_ParamLimits

0x55c7,	// (0x0004d839) fep_vkb_keypad_pane_g4

0x563e,	// (0x0004d8b0) fep_vkb_bottom_pane_g2_ParamLimits

0x563e,	// (0x0004d8b0) fep_vkb_bottom_pane_g2

0x0001,

0xfb4c,	// (0x00057dbe) fep_vkb_bottom_pane_g_ParamLimits

0xfb4c,	// (0x00057dbe) fep_vkb_bottom_pane_g

0x52a7,	// (0x0004d519) cell_vkb_side_pane_g2

0x0001,

0xfb56,	// (0x00057dc8) cell_vkb_side_pane_g

0x56c9,	// (0x0004d93b) cell_vkb_side_pane_t1

0x56d7,	// (0x0004d949) cell_vkb_side_pane_t1_copy1

0x52a7,	// (0x0004d519) bg_fep_vkb_candidate_pane_g2

0x581b,	// (0x0004da8d) cell_vkb_candidate_pane_ParamLimits

0x535e,	// (0x0004d5d0) aid_size_cell_vkb_ParamLimits

0x535e,	// (0x0004d5d0) aid_size_cell_vkb

0x581b,	// (0x0004da8d) cell_vkb_candidate_pane

0x15da,	// (0x0004984c) bg_popup_fep_shadow_pane_g1

0xd127,	// (0x00055399) fep_vkb_bottom_pane_ParamLimits

0xd127,	// (0x00055399) fep_vkb_bottom_pane

0x542d,	// (0x0004d69f) fep_vkb_candidate_pane_ParamLimits

0x542d,	// (0x0004d69f) fep_vkb_candidate_pane

0xd153,	// (0x000553c5) fep_vkb_keypad_pane_ParamLimits

0xd153,	// (0x000553c5) fep_vkb_keypad_pane

0xd17a,	// (0x000553ec) fep_vkb_side_pane_ParamLimits

0xd17a,	// (0x000553ec) fep_vkb_side_pane

0xd1b6,	// (0x00055428) fep_vkb_top_pane_ParamLimits

0xd1b6,	// (0x00055428) fep_vkb_top_pane

0x54f4,	// (0x0004d766) fep_vkb_top_pane_g1_ParamLimits

0x54f4,	// (0x0004d766) fep_vkb_top_pane_g1

0x5503,	// (0x0004d775) fep_vkb_top_pane_g2_ParamLimits

0x5503,	// (0x0004d775) fep_vkb_top_pane_g2

0x5512,	// (0x0004d784) fep_vkb_top_pane_g3_ParamLimits

0x5512,	// (0x0004d784) fep_vkb_top_pane_g3

0x0003,

0xfb3c,	// (0x00057dae) fep_vkb_top_pane_g_ParamLimits

0xfb3c,	// (0x00057dae) fep_vkb_top_pane_g

0x5530,	// (0x0004d7a2) fep_vkb_top_text_pane_ParamLimits

0x5530,	// (0x0004d7a2) fep_vkb_top_text_pane

0xd1f2,	// (0x00055464) fep_vkb_side_pane_g1_ParamLimits

0xd1f2,	// (0x00055464) fep_vkb_side_pane_g1

0x558a,	// (0x0004d7fc) grid_vkb_side_pane_ParamLimits

0x558a,	// (0x0004d7fc) grid_vkb_side_pane

0x15e2,	// (0x00049854) bg_popup_fep_shadow_pane_g2

0x15eb,	// (0x0004985d) bg_popup_fep_shadow_pane_g3

0x15f3,	// (0x00049865) bg_popup_fep_shadow_pane_g4

0x15fc,	// (0x0004986e) bg_popup_fep_shadow_pane_g5

0x1606,	// (0x00049878) bg_popup_fep_shadow_pane_g6

0x160e,	// (0x00049880) bg_popup_fep_shadow_pane_g7

0xabc9,	// (0x00052e3b) bg_popup_fep_shadow_pane_g8

0x55e9,	// (0x0004d85b) grid_vkb_keypad_number_pane_ParamLimits

0x55e9,	// (0x0004d85b) grid_vkb_keypad_number_pane

0x55fd,	// (0x0004d86f) grid_vkb_keypad_pane_ParamLimits

0x55fd,	// (0x0004d86f) grid_vkb_keypad_pane

0x5623,	// (0x0004d895) fep_vkb_bottom_pane_g1_ParamLimits

0x5623,	// (0x0004d895) fep_vkb_bottom_pane_g1

0x564c,	// (0x0004d8be) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x564c,	// (0x0004d8be) grid_vkb_keypad_bottom_left_pane

0x5661,	// (0x0004d8d3) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x5661,	// (0x0004d8d3) grid_vkb_keypad_bottom_right_pane

0x5676,	// (0x0004d8e8) fep_vkb_top_text_pane_g1

0xd239,	// (0x000554ab) fep_vkb_top_text_pane_t1

0xd24b,	// (0x000554bd) cell_vkb_side_pane_ParamLimits

0xd24b,	// (0x000554bd) cell_vkb_side_pane

0x52a7,	// (0x0004d519) cell_vkb_side_pane_g1

0x56e5,	// (0x0004d957) cell_vkb_keypad_pane_ParamLimits

0x56e5,	// (0x0004d957) cell_vkb_keypad_pane

0x5772,	// (0x0004d9e4) cell_vkb_keypad_pane_g1

0x0008,

0xfb69,	// (0x00057ddb) bg_popup_fep_shadow_pane_g

0x52a7,	// (0x0004d519) cell_hwr_side_pane_g1

0x52a7,	// (0x0004d519) cell_hwr_side_pane_g2

0x577c,	// (0x0004d9ee) cell_vkb_keypad_pane_t1

0xd261,	// (0x000554d3) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xd261,	// (0x000554d3) cell_vkb_keypad_bottom_left_pane

0xd276,	// (0x000554e8) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xd276,	// (0x000554e8) cell_vkb_keypad_bottom_right_pane

0x52a7,	// (0x0004d519) cell_vkb_keypad_bottom_left_pane_g1

0x52a7,	// (0x0004d519) cell_vkb_keypad_bottom_right_pane_g1

0x57e0,	// (0x0004da52) cell_vkb_keypad_number_pane_ParamLimits

0x57e0,	// (0x0004da52) cell_vkb_keypad_number_pane

0x57ff,	// (0x0004da71) cell_vkb_keypad_number_pane_g1

0x5809,	// (0x0004da7b) cell_vkb_keypad_number_pane_g2

0x5812,	// (0x0004da84) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb5b,	// (0x00057dcd) cell_vkb_keypad_number_pane_g

0x577c,	// (0x0004d9ee) cell_vkb_keypad_number_pane_t1

0x583c,	// (0x0004daae) fep_vkb_candidate_pane_g1

0x0001,

0xfb56,	// (0x00057dc8) cell_hwr_side_pane_g

0x5855,	// (0x0004dac7) cell_hwr_side_pane_t1

0x1620,	// (0x00049892) cell_hwr_side_pane_t1_copy1

0x5522,	// (0x0004d794) cell_hwr_candidate_pane_g1

0x162e,	// (0x000498a0) cell_hwr_candidate_pane_t1

0x52a7,	// (0x0004d519) cell_vkb_candidate_pane_g2

0x58db,	// (0x0004db4d) cell_vkb_candidate_pane_t1

0x13d8,	// (0x0004964a) bg_popup_fep_shadow_pane_ParamLimits

0x13d8,	// (0x0004964a) bg_popup_fep_shadow_pane

0xd0ed,	// (0x0005535f) bg_fep_hwr_top_pane_g4

0x532c,	// (0x0004d59e) bg_hwr_side_pane_g1_ParamLimits

0x532c,	// (0x0004d59e) bg_hwr_side_pane_g1

0xc2d8,	// (0x0005454a) cell_hwr_side_pane_ParamLimits

0xc2d8,	// (0x0005454a) cell_hwr_side_pane

0x1531,	// (0x000497a3) fep_hwr_write_pane_g1_ParamLimits

0x1531,	// (0x000497a3) fep_hwr_write_pane_g1

0x153e,	// (0x000497b0) fep_hwr_write_pane_g2_ParamLimits

0x153e,	// (0x000497b0) fep_hwr_write_pane_g2

0x154b,	// (0x000497bd) fep_hwr_write_pane_g3_ParamLimits

0x154b,	// (0x000497bd) fep_hwr_write_pane_g3

0xc2f8,	// (0x0005456a) fep_hwr_write_pane_g4_ParamLimits

0xc2f8,	// (0x0005456a) fep_hwr_write_pane_g4

0x0005,

0xfb28,	// (0x00057d9a) fep_hwr_write_pane_g_ParamLimits

0xfb28,	// (0x00057d9a) fep_hwr_write_pane_g

0xd0ed,	// (0x0005535f) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xd0ed,	// (0x0005535f) bg_fep_hwr_candidate_pane_g2

0x156e,	// (0x000497e0) cell_hwr_candidate_pane_ParamLimits

0x156e,	// (0x000497e0) cell_hwr_candidate_pane

0x15c0,	// (0x00049832) fep_hwr_candidate_pane_g1_ParamLimits

0x538c,	// (0x0004d5fe) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x538c,	// (0x0004d5fe) bg_popup_fep_shadow_pane_cp2

0x5522,	// (0x0004d794) fep_vkb_top_pane_g4_ParamLimits

0x5522,	// (0x0004d794) fep_vkb_top_pane_g4

0x5568,	// (0x0004d7da) fep_vkb_side_pane_g2_ParamLimits

0x5568,	// (0x0004d7da) fep_vkb_side_pane_g2

0x9d82,	// (0x00051ff4) list_setting_pane_t4_ParamLimits

0x9d82,	// (0x00051ff4) list_setting_pane_t4

0x9e1e,	// (0x00052090) list_setting_number_pane_t5_ParamLimits

0x9e1e,	// (0x00052090) list_setting_number_pane_t5

0xb1e7,	// (0x00053459) list_double_heading_pane_cp2_ParamLimits

0xb1e7,	// (0x00053459) list_double_heading_pane_cp2

0xaad1,	// (0x00052d43) list_double_heading_pane_g1_cp2_ParamLimits

0xaad1,	// (0x00052d43) list_double_heading_pane_g1_cp2

0xab68,	// (0x00052dda) list_double_heading_pane_g2_cp2_ParamLimits

0xab68,	// (0x00052dda) list_double_heading_pane_g2_cp2

0x58e9,	// (0x0004db5b) list_double_heading_pane_t1_cp2_ParamLimits

0x58e9,	// (0x0004db5b) list_double_heading_pane_t1_cp2

0x58ff,	// (0x0004db71) list_double_heading_pane_t2_cp2_ParamLimits

0x58ff,	// (0x0004db71) list_double_heading_pane_t2_cp2

0x6cc7,	// (0x0004ef39) aid_value_unit2

0xf429,	// (0x0005769b) popup_preview_fixed_window

0x6e72,	// (0x0004f0e4) bg_popup_preview_window_pane_cp02

0x5911,	// (0x0004db83) list_preview_fixed_pane

0x5957,	// (0x0004dbc9) list_empty_pane_fp_ParamLimits

0x5957,	// (0x0004dbc9) list_empty_pane_fp

0x5957,	// (0x0004dbc9) list_single_cale_day_pane_fp_ParamLimits

0x5957,	// (0x0004dbc9) list_single_cale_day_pane_fp

0x5957,	// (0x0004dbc9) list_single_graphic_heading_pane_fp_ParamLimits

0x5957,	// (0x0004dbc9) list_single_graphic_heading_pane_fp

0x5957,	// (0x0004dbc9) list_single_graphic_pane_fp_ParamLimits

0x5957,	// (0x0004dbc9) list_single_graphic_pane_fp

0x5957,	// (0x0004dbc9) list_single_heading_pane_fp_ParamLimits

0x5957,	// (0x0004dbc9) list_single_heading_pane_fp

0x5957,	// (0x0004dbc9) list_single_pane_fp_ParamLimits

0x5957,	// (0x0004dbc9) list_single_pane_fp

0x5970,	// (0x0004dbe2) list_single_pane_fp_g1_ParamLimits

0x5970,	// (0x0004dbe2) list_single_pane_fp_g1

0xf548,	// (0x000577ba) list_single_pane_fp_g2_ParamLimits

0xf548,	// (0x000577ba) list_single_pane_fp_g2

0x164c,	// (0x000498be) list_single_pane_fp_g3_ParamLimits

0x164c,	// (0x000498be) list_single_pane_fp_g3

0x597c,	// (0x0004dbee) list_single_pane_fp_g4_ParamLimits

0x597c,	// (0x0004dbee) list_single_pane_fp_g4

0x0003,

0xfb8a,	// (0x00057dfc) list_single_pane_fp_g_ParamLimits

0xfb8a,	// (0x00057dfc) list_single_pane_fp_g

0xf246,	// (0x000574b8) list_single_pane_fp_t1_ParamLimits

0xf246,	// (0x000574b8) list_single_pane_fp_t1

0xf25d,	// (0x000574cf) list_single_graphic_pane_fp_g1_ParamLimits

0xf25d,	// (0x000574cf) list_single_graphic_pane_fp_g1

0x5970,	// (0x0004dbe2) list_single_graphic_pane_fp_g2_ParamLimits

0x5970,	// (0x0004dbe2) list_single_graphic_pane_fp_g2

0xf548,	// (0x000577ba) list_single_graphic_pane_fp_g3_ParamLimits

0xf548,	// (0x000577ba) list_single_graphic_pane_fp_g3

0x164c,	// (0x000498be) list_single_graphic_pane_fp_g4_ParamLimits

0x164c,	// (0x000498be) list_single_graphic_pane_fp_g4

0x597c,	// (0x0004dbee) list_single_graphic_pane_fp_g5_ParamLimits

0x597c,	// (0x0004dbee) list_single_graphic_pane_fp_g5

0x0004,

0xfb93,	// (0x00057e05) list_single_graphic_pane_fp_g_ParamLimits

0xfb93,	// (0x00057e05) list_single_graphic_pane_fp_g

0xf269,	// (0x000574db) list_single_graphic_pane_fp_t1_ParamLimits

0xf269,	// (0x000574db) list_single_graphic_pane_fp_t1

0xf25d,	// (0x000574cf) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xf25d,	// (0x000574cf) list_single_graphic_heading_pane_fp_g1

0x5970,	// (0x0004dbe2) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x5970,	// (0x0004dbe2) list_single_graphic_heading_pane_fp_g2

0xf548,	// (0x000577ba) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xf548,	// (0x000577ba) list_single_graphic_heading_pane_fp_g3

0x164c,	// (0x000498be) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x164c,	// (0x000498be) list_single_graphic_heading_pane_fp_g4

0x597c,	// (0x0004dbee) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x597c,	// (0x0004dbee) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb93,	// (0x00057e05) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb93,	// (0x00057e05) list_single_graphic_heading_pane_fp_g

0xf27f,	// (0x000574f1) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xf27f,	// (0x000574f1) list_single_graphic_heading_pane_fp_t1

0xf295,	// (0x00057507) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xf295,	// (0x00057507) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb9e,	// (0x00057e10) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb9e,	// (0x00057e10) list_single_graphic_heading_pane_fp_t

0xf2a7,	// (0x00057519) list_single_cale_day_pane_fp_g1_ParamLimits

0xf2a7,	// (0x00057519) list_single_cale_day_pane_fp_g1

0x5988,	// (0x0004dbfa) list_single_cale_day_pane_fp_g2_ParamLimits

0x5988,	// (0x0004dbfa) list_single_cale_day_pane_fp_g2

0x1660,	// (0x000498d2) list_single_cale_day_pane_fp_g3_ParamLimits

0x1660,	// (0x000498d2) list_single_cale_day_pane_fp_g3

0x1688,	// (0x000498fa) list_single_cale_day_pane_fp_g4_ParamLimits

0x1688,	// (0x000498fa) list_single_cale_day_pane_fp_g4

0x16ac,	// (0x0004991e) list_single_cale_day_pane_fp_g5_ParamLimits

0x16ac,	// (0x0004991e) list_single_cale_day_pane_fp_g5

0x0004,

0xfba3,	// (0x00057e15) list_single_cale_day_pane_fp_g_ParamLimits

0xfba3,	// (0x00057e15) list_single_cale_day_pane_fp_g

0xf2df,	// (0x00057551) list_single_cale_day_pane_fp_t1_ParamLimits

0xf2df,	// (0x00057551) list_single_cale_day_pane_fp_t1

0xf305,	// (0x00057577) list_single_cale_day_pane_fp_t2_ParamLimits

0xf305,	// (0x00057577) list_single_cale_day_pane_fp_t2

0xf31e,	// (0x00057590) list_single_cale_day_pane_fp_t3_ParamLimits

0xf31e,	// (0x00057590) list_single_cale_day_pane_fp_t3

0x0002,

0xfbae,	// (0x00057e20) list_single_cale_day_pane_fp_t_ParamLimits

0xfbae,	// (0x00057e20) list_single_cale_day_pane_fp_t

0x5970,	// (0x0004dbe2) list_empty_pane_fp_g1_ParamLimits

0x5970,	// (0x0004dbe2) list_empty_pane_fp_g1

0xf337,	// (0x000575a9) list_empty_pane_fp_t1

0xf345,	// (0x000575b7) list_empty_pane_fp_t2

0x0001,

0xfbb5,	// (0x00057e27) list_empty_pane_fp_t

0x5970,	// (0x0004dbe2) list_single_heading_pane_fp_g1_ParamLimits

0x5970,	// (0x0004dbe2) list_single_heading_pane_fp_g1

0xf548,	// (0x000577ba) list_single_heading_pane_fp_g2_ParamLimits

0xf548,	// (0x000577ba) list_single_heading_pane_fp_g2

0x164c,	// (0x000498be) list_single_heading_pane_fp_g3_ParamLimits

0x164c,	// (0x000498be) list_single_heading_pane_fp_g3

0x0002,

0xfbba,	// (0x00057e2c) list_single_heading_pane_fp_g_ParamLimits

0xfbba,	// (0x00057e2c) list_single_heading_pane_fp_g

0xf353,	// (0x000575c5) list_single_heading_pane_fp_t1_ParamLimits

0xf353,	// (0x000575c5) list_single_heading_pane_fp_t1

0xf365,	// (0x000575d7) list_single_heading_pane_fp_t2_ParamLimits

0xf365,	// (0x000575d7) list_single_heading_pane_fp_t2

0x0001,

0xfbc1,	// (0x00057e33) list_single_heading_pane_fp_t_ParamLimits

0xfbc1,	// (0x00057e33) list_single_heading_pane_fp_t

0xad3d,	// (0x00052faf) aid_size_cell_fast

0x6e47,	// (0x0004f0b9) soft_indicator_pane_cp1_t1

0xad7a,	// (0x00052fec) cell_app_pane_cp2_ParamLimits

0xad7a,	// (0x00052fec) cell_app_pane_cp2

0x13fa,	// (0x0004966c) fep_hwr_candidate_drop_down_list_pane

0xd0fb,	// (0x0005536d) fep_hwr_candidate_pane_g3_ParamLimits

0xd0fb,	// (0x0005536d) fep_hwr_candidate_pane_g3

0xd108,	// (0x0005537a) fep_hwr_candidate_pane_g4_ParamLimits

0xd108,	// (0x0005537a) fep_hwr_candidate_pane_g4

0x0002,

0xfb35,	// (0x00057da7) fep_hwr_candidate_pane_g_ParamLimits

0xfb35,	// (0x00057da7) fep_hwr_candidate_pane_g

0x541c,	// (0x0004d68e) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x541c,	// (0x0004d68e) fep_vkb_candidate_drop_down_list_pane

0x5844,	// (0x0004dab6) fep_vkb_candidate_pane_g3

0x584c,	// (0x0004dabe) fep_vkb_candidate_pane_g4

0x0002,

0xfb62,	// (0x00057dd4) fep_vkb_candidate_pane_g

0x5522,	// (0x0004d794) cell_hwr_candidate_pane_g1_ParamLimits

0x5863,	// (0x0004dad5) cell_hwr_candidate_pane_g3_ParamLimits

0x5863,	// (0x0004dad5) cell_hwr_candidate_pane_g3

0x5884,	// (0x0004daf6) cell_hwr_candidate_pane_g4_ParamLimits

0x5884,	// (0x0004daf6) cell_hwr_candidate_pane_g4

0x0002,

0xfb7c,	// (0x00057dee) cell_hwr_candidate_pane_g_ParamLimits

0xfb7c,	// (0x00057dee) cell_hwr_candidate_pane_g

0x58a5,	// (0x0004db17) cell_vkb_candidate_pane_g3_ParamLimits

0x58a5,	// (0x0004db17) cell_vkb_candidate_pane_g3

0x58c0,	// (0x0004db32) cell_vkb_candidate_pane_g4_ParamLimits

0x58c0,	// (0x0004db32) cell_vkb_candidate_pane_g4

0x5994,	// (0x0004dc06) cell_app_pane_cp2_g1_ParamLimits

0x5994,	// (0x0004dc06) cell_app_pane_cp2_g1

0x59b2,	// (0x0004dc24) cell_app_pane_cp2_g2_ParamLimits

0x59b2,	// (0x0004dc24) cell_app_pane_cp2_g2

0x0001,

0xfbc6,	// (0x00057e38) cell_app_pane_cp2_g_ParamLimits

0xfbc6,	// (0x00057e38) cell_app_pane_cp2_g

0x59be,	// (0x0004dc30) cell_app_pane_cp2_t1_ParamLimits

0x59be,	// (0x0004dc30) cell_app_pane_cp2_t1

0xab4e,	// (0x00052dc0) grid_highlight_pane_cp1_ParamLimits

0xab4e,	// (0x00052dc0) grid_highlight_pane_cp1

0x16d0,	// (0x00049942) cell_hwr_candidate_pane_cp1_ParamLimits

0x16d0,	// (0x00049942) cell_hwr_candidate_pane_cp1

0x5522,	// (0x0004d794) fep_hwr_candidate_drop_down_list_pane_g1

0x59d0,	// (0x0004dc42) fep_hwr_candidate_drop_down_list_pane_g2

0x59dd,	// (0x0004dc4f) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbcb,	// (0x00057e3d) fep_hwr_candidate_drop_down_list_pane_g

0x16f4,	// (0x00049966) fep_hwr_candidate_drop_down_list_scroll_pane

0x16fd,	// (0x0004996f) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x16fd,	// (0x0004996f) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x170a,	// (0x0004997c) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x170a,	// (0x0004997c) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x1717,	// (0x00049989) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x1717,	// (0x00049989) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x58a5,	// (0x0004db17) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x58a5,	// (0x0004db17) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x58c0,	// (0x0004db32) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x58c0,	// (0x0004db32) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x1724,	// (0x00049996) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x1724,	// (0x00049996) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x173f,	// (0x000499b1) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x173f,	// (0x000499b1) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x175a,	// (0x000499cc) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x175a,	// (0x000499cc) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd2,	// (0x00057e44) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd2,	// (0x00057e44) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x59ea,	// (0x0004dc5c) cell_vkb_candidate_pane_cp1_ParamLimits

0x59ea,	// (0x0004dc5c) cell_vkb_candidate_pane_cp1

0x5522,	// (0x0004d794) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x5522,	// (0x0004d794) fep_vkb_candidate_drop_down_list_pane_g1

0x59d0,	// (0x0004dc42) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x59d0,	// (0x0004dc42) fep_vkb_candidate_drop_down_list_pane_g2

0x59dd,	// (0x0004dc4f) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x59dd,	// (0x0004dc4f) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbcb,	// (0x00057e3d) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbcb,	// (0x00057e3d) fep_vkb_candidate_drop_down_list_pane_g

0x5a10,	// (0x0004dc82) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x5a10,	// (0x0004dc82) fep_vkb_candidate_drop_down_list_scroll_pane

0x5a1d,	// (0x0004dc8f) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x5a1d,	// (0x0004dc8f) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x5a2a,	// (0x0004dc9c) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x5a2a,	// (0x0004dc9c) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x5a36,	// (0x0004dca8) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x5a36,	// (0x0004dca8) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x5863,	// (0x0004dad5) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x5863,	// (0x0004dad5) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x5884,	// (0x0004daf6) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x5884,	// (0x0004daf6) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x5a42,	// (0x0004dcb4) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x5a42,	// (0x0004dcb4) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x5a63,	// (0x0004dcd5) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x5a63,	// (0x0004dcd5) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x5a84,	// (0x0004dcf6) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x5a84,	// (0x0004dcf6) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbe3,	// (0x00057e55) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbe3,	// (0x00057e55) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xa3aa,	// (0x0005261c) title_pane_g1_ParamLimits

0xa3bd,	// (0x0005262f) title_pane_g2_ParamLimits

0xf554,	// (0x000577c6) title_pane_g_ParamLimits

0xe892,	// (0x00056b04) aid_call2_pane

0xe89a,	// (0x00056b0c) aid_call_pane

0xe8a2,	// (0x00056b14) popup_clock_analogue_window_g1

0xe8a2,	// (0x00056b14) popup_clock_analogue_window_g2

0x02e9,	// (0x0004855b) popup_clock_analogue_window_g3

0x02f2,	// (0x00048564) popup_clock_analogue_window_g4

0x6cd9,	// (0x0004ef4b) popup_clock_analogue_window_g5

0x0004,

0xf703,	// (0x00057975) popup_clock_analogue_window_g

0x02fa,	// (0x0004856c) popup_clock_analogue_window_t1

0x033b,	// (0x000485ad) clock_digital_number_pane_ParamLimits

0x033b,	// (0x000485ad) clock_digital_number_pane

0x0347,	// (0x000485b9) clock_digital_number_pane_cp02_ParamLimits

0x0347,	// (0x000485b9) clock_digital_number_pane_cp02

0x0353,	// (0x000485c5) clock_digital_number_pane_cp03_ParamLimits

0x0353,	// (0x000485c5) clock_digital_number_pane_cp03

0x035f,	// (0x000485d1) clock_digital_number_pane_cp04_ParamLimits

0x035f,	// (0x000485d1) clock_digital_number_pane_cp04

0x036b,	// (0x000485dd) clock_digital_separator_pane_ParamLimits

0x036b,	// (0x000485dd) clock_digital_separator_pane

0x0377,	// (0x000485e9) popup_clock_digital_window_t1_ParamLimits

0x0377,	// (0x000485e9) popup_clock_digital_window_t1

0x6cd9,	// (0x0004ef4b) clock_digital_number_pane_g1

0x6cd9,	// (0x0004ef4b) clock_digital_number_pane_g2

0x0001,

0xf70e,	// (0x00057980) clock_digital_number_pane_g

0x6cd9,	// (0x0004ef4b) clock_digital_separator_pane_g1

0x6cd9,	// (0x0004ef4b) clock_digital_separator_pane_g2

0x0001,

0xf70e,	// (0x00057980) clock_digital_separator_pane_g

0xbd37,	// (0x00053fa9) aid_fill_nsta_ParamLimits

0xbe6d,	// (0x000540df) indicator_nsta_pane_ParamLimits

0x296e,	// (0x0004abe0) popup_clock_analogue_window

0x296e,	// (0x0004abe0) popup_clock_digital_window

0xcf06,	// (0x00055178) grid_indicator_nsta_pane_ParamLimits

0x4cce,	// (0x0004cf40) clock_nsta_pane_t2

0x0001,

0xfab5,	// (0x00057d27) clock_nsta_pane_t

0x0252,	// (0x000484c4) aid_size_max_handle

0xafda,	// (0x0005324c) aid_size_min_handle

0x231f,	// (0x0004a591) editor_scroll_pane

0x5a9f,	// (0x0004dd11) ex_editor_pane

0xacc4,	// (0x00052f36) scroll_pane_cp13

0xaa9e,	// (0x00052d10) scroll_pane_cp14

0xe8d1,	// (0x00056b43) scroll_pane_cp36

0xb1fa,	// (0x0005346c) list_single_graphic_hl_pane_cp2_ParamLimits

0xb1fa,	// (0x0005346c) list_single_graphic_hl_pane_cp2

0xcdb2,	// (0x00055024) list_single_graphic_hl_pane_ParamLimits

0xcdb2,	// (0x00055024) list_single_graphic_hl_pane

0xf37b,	// (0x000575ed) aid_size_min_hl_cp1

0x5aa7,	// (0x0004dd19) list_highlight_pane_cp34_ParamLimits

0x5aa7,	// (0x0004dd19) list_highlight_pane_cp34

0x5ab8,	// (0x0004dd2a) list_single_graphic_hl_pane_g1_ParamLimits

0x5ab8,	// (0x0004dd2a) list_single_graphic_hl_pane_g1

0xa098,	// (0x0005230a) list_single_graphic_hl_pane_g2_ParamLimits

0xa098,	// (0x0005230a) list_single_graphic_hl_pane_g2

0xa098,	// (0x0005230a) list_single_graphic_hl_pane_g3_ParamLimits

0xa098,	// (0x0005230a) list_single_graphic_hl_pane_g3

0xd291,	// (0x00055503) list_single_graphic_hl_pane_g4_ParamLimits

0xd291,	// (0x00055503) list_single_graphic_hl_pane_g4

0x5af5,	// (0x0004dd67) list_single_graphic_hl_pane_g5_ParamLimits

0x5af5,	// (0x0004dd67) list_single_graphic_hl_pane_g5

0x0004,

0xfbf4,	// (0x00057e66) list_single_graphic_hl_pane_g_ParamLimits

0xfbf4,	// (0x00057e66) list_single_graphic_hl_pane_g

0xa0a4,	// (0x00052316) list_single_graphic_hl_pane_t1_ParamLimits

0xa0a4,	// (0x00052316) list_single_graphic_hl_pane_t1

0x5ac5,	// (0x0004dd37) aid_size_min_hl_cp2

0x5ace,	// (0x0004dd40) list_highlight_pane_cp34_cp2_ParamLimits

0x5ace,	// (0x0004dd40) list_highlight_pane_cp34_cp2

0x5ab8,	// (0x0004dd2a) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x5ab8,	// (0x0004dd2a) list_single_graphic_hl_pane_g1_cp2

0x5adb,	// (0x0004dd4d) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x5adb,	// (0x0004dd4d) list_single_graphic_hl_pane_g2_cp2

0xd29d,	// (0x0005550f) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xd29d,	// (0x0005550f) list_single_graphic_hl_pane_g3_cp2

0xd291,	// (0x00055503) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xd291,	// (0x00055503) list_single_graphic_hl_pane_g4_cp2

0x5af5,	// (0x0004dd67) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x5af5,	// (0x0004dd67) list_single_graphic_hl_pane_g5_cp2

0xb4ac,	// (0x0005371e) control_pane_g4_ParamLimits

0xb4ac,	// (0x0005371e) control_pane_g4

0x266b,	// (0x0004a8dd) bg_popup_sub_pane_cp10_ParamLimits

0x52b1,	// (0x0004d523) list_choice_list_pane_ParamLimits

0x52c0,	// (0x0004d532) scroll_pane_cp23

0x6e72,	// (0x0004f0e4) bg_popup_preview_window_pane_cp02_ParamLimits

0x5911,	// (0x0004db83) list_preview_fixed_pane_ParamLimits

0x5927,	// (0x0004db99) list_preview_fixed_pane_cp_ParamLimits

0x5927,	// (0x0004db99) list_preview_fixed_pane_cp

0x5933,	// (0x0004dba5) popup_preview_fixed_window_g1_ParamLimits

0x5933,	// (0x0004dba5) popup_preview_fixed_window_g1

0x593f,	// (0x0004dbb1) popup_preview_fixed_window_g2_ParamLimits

0x593f,	// (0x0004dbb1) popup_preview_fixed_window_g2

0x0002,

0xfb83,	// (0x00057df5) popup_preview_fixed_window_g_ParamLimits

0xfb83,	// (0x00057df5) popup_preview_fixed_window_g

0x013b,	// (0x000483ad) aid_navi_side_left_pane_ParamLimits

0x0150,	// (0x000483c2) aid_navi_side_right_pane_ParamLimits

0x0168,	// (0x000483da) navi_icon_pane_stacon_ParamLimits

0x017c,	// (0x000483ee) navi_navi_pane_stacon_ParamLimits

0x0168,	// (0x000483da) navi_text_pane_stacon_ParamLimits

0x6ccf,	// (0x0004ef41) main_text_info_pane

0x5b1f,	// (0x0004dd91) listscroll_text_info_pane

0x5b27,	// (0x0004dd99) list_text_info_pane_ParamLimits

0x5b27,	// (0x0004dd99) list_text_info_pane

0x5b36,	// (0x0004dda8) scroll_pane_cp24_ParamLimits

0x5b36,	// (0x0004dda8) scroll_pane_cp24

0xd2ab,	// (0x0005551d) list_text_info_pane_t1_ParamLimits

0xd2ab,	// (0x0005551d) list_text_info_pane_t1

0xb630,	// (0x000538a2) popup_fast_swap2_window_ParamLimits

0xb630,	// (0x000538a2) popup_fast_swap2_window

0x5b79,	// (0x0004ddeb) aid_size_cell_fast2

0x6ccf,	// (0x0004ef41) bg_popup_window_pane_cp17

0x3053,	// (0x0004b2c5) heading_pane_cp2

0xa772,	// (0x000529e4) listscroll_fast2_pane

0x5b83,	// (0x0004ddf5) grid_fast2_pane

0x5b8d,	// (0x0004ddff) listscroll_fast2_pane_g1

0x5b97,	// (0x0004de09) listscroll_fast2_pane_g2

0x0001,

0xfbff,	// (0x00057e71) listscroll_fast2_pane_g

0xacc4,	// (0x00052f36) scroll_pane_cp26

0x5ba1,	// (0x0004de13) cell_fast2_pane_ParamLimits

0x5ba1,	// (0x0004de13) cell_fast2_pane

0x5bb8,	// (0x0004de2a) cell_fast2_pane_g1

0x5bc1,	// (0x0004de33) cell_fast2_pane_g2

0x5bca,	// (0x0004de3c) cell_fast2_pane_g3

0x0002,

0xfc04,	// (0x00057e76) cell_fast2_pane_g

0xa85b,	// (0x00052acd) grid_highlight_pane_cp9

0xa870,	// (0x00052ae2) main_eswt_pane_ParamLimits

0xa870,	// (0x00052ae2) main_eswt_pane

0x5b4b,	// (0x0004ddbd) list_single_text_info_pane

0x5bd2,	// (0x0004de44) eswt_ctrl_button_pane

0x5bd2,	// (0x0004de44) eswt_ctrl_canvas_pane

0x5bda,	// (0x0004de4c) eswt_ctrl_combo_pane

0x5bd2,	// (0x0004de44) eswt_ctrl_default_pane

0x5bd2,	// (0x0004de44) eswt_ctrl_label_pane

0x5be2,	// (0x0004de54) eswt_ctrl_wait_pane

0x5bea,	// (0x0004de5c) eswt_shell_pane

0x6ccf,	// (0x0004ef41) listscroll_eswt_app_pane

0x5c0a,	// (0x0004de7c) popup_eswt_tasktip_window_ParamLimits

0x5c0a,	// (0x0004de7c) popup_eswt_tasktip_window

0x2c93,	// (0x0004af05) bg_popup_window_pane_cp18

0x5c1b,	// (0x0004de8d) eswt_control_pane_g1_ParamLimits

0x5c1b,	// (0x0004de8d) eswt_control_pane_g1

0x5c28,	// (0x0004de9a) eswt_control_pane_g2_ParamLimits

0x5c28,	// (0x0004de9a) eswt_control_pane_g2

0x5c35,	// (0x0004dea7) eswt_control_pane_g3_ParamLimits

0x5c35,	// (0x0004dea7) eswt_control_pane_g3

0x5c42,	// (0x0004deb4) eswt_control_pane_g4_ParamLimits

0x5c42,	// (0x0004deb4) eswt_control_pane_g4

0x0003,

0xfc0b,	// (0x00057e7d) eswt_control_pane_g_ParamLimits

0xfc0b,	// (0x00057e7d) eswt_control_pane_g

0xab4e,	// (0x00052dc0) bg_button_pane_ParamLimits

0xab4e,	// (0x00052dc0) bg_button_pane

0xa870,	// (0x00052ae2) common_borders_pane_copy2_ParamLimits

0xa870,	// (0x00052ae2) common_borders_pane_copy2

0x5c4f,	// (0x0004dec1) control_button_pane_g1_ParamLimits

0x5c4f,	// (0x0004dec1) control_button_pane_g1

0x5c5b,	// (0x0004decd) control_button_pane_g2_ParamLimits

0x5c5b,	// (0x0004decd) control_button_pane_g2

0x5c67,	// (0x0004ded9) control_button_pane_g3_ParamLimits

0x5c67,	// (0x0004ded9) control_button_pane_g3

0x0002,

0xfc14,	// (0x00057e86) control_button_pane_g_ParamLimits

0xfc14,	// (0x00057e86) control_button_pane_g

0x5c7b,	// (0x0004deed) control_button_pane_t1

0x5c89,	// (0x0004defb) control_button_pane_t2

0x0001,

0xfc1b,	// (0x00057e8d) control_button_pane_t

0x2b97,	// (0x0004ae09) bg_button_pane_g1

0x2b9f,	// (0x0004ae11) bg_button_pane_g2

0x2ba7,	// (0x0004ae19) bg_button_pane_g3

0x2baf,	// (0x0004ae21) bg_button_pane_g4

0x2bb7,	// (0x0004ae29) bg_button_pane_g5

0x2bbf,	// (0x0004ae31) bg_button_pane_g6

0x2bc7,	// (0x0004ae39) bg_button_pane_g7

0x2bcf,	// (0x0004ae41) bg_button_pane_g8

0x2bd7,	// (0x0004ae49) bg_button_pane_g9

0x0008,

0xf86c,	// (0x00057ade) bg_button_pane_g

0x526c,	// (0x0004d4de) common_borders_pane_ParamLimits

0x526c,	// (0x0004d4de) common_borders_pane

0x5c1b,	// (0x0004de8d) eswt_control_pane_g1_copy1_ParamLimits

0x5c1b,	// (0x0004de8d) eswt_control_pane_g1_copy1

0x5c28,	// (0x0004de9a) eswt_control_pane_g2_copy1_ParamLimits

0x5c28,	// (0x0004de9a) eswt_control_pane_g2_copy1

0x5c35,	// (0x0004dea7) eswt_control_pane_g3_copy1_ParamLimits

0x5c35,	// (0x0004dea7) eswt_control_pane_g3_copy1

0x5c42,	// (0x0004deb4) eswt_control_pane_g4_copy1_ParamLimits

0x5c42,	// (0x0004deb4) eswt_control_pane_g4_copy1

0x52a7,	// (0x0004d519) bg_eswt_ctrl_canvas_pane_g1

0x526c,	// (0x0004d4de) common_borders_pane_cp2_ParamLimits

0x526c,	// (0x0004d4de) common_borders_pane_cp2

0x526c,	// (0x0004d4de) common_borders_pane_cp3_ParamLimits

0x526c,	// (0x0004d4de) common_borders_pane_cp3

0x5c97,	// (0x0004df09) separator_horizontal_pane

0x5c9f,	// (0x0004df11) separator_vertical_pane

0x5c1b,	// (0x0004de8d) eswt_control_pane_g1_copy2_ParamLimits

0x5c1b,	// (0x0004de8d) eswt_control_pane_g1_copy2

0x5c28,	// (0x0004de9a) eswt_control_pane_g2_copy2_ParamLimits

0x5c28,	// (0x0004de9a) eswt_control_pane_g2_copy2

0x5c35,	// (0x0004dea7) eswt_control_pane_g3_copy2_ParamLimits

0x5c35,	// (0x0004dea7) eswt_control_pane_g3_copy2

0x5c42,	// (0x0004deb4) eswt_control_pane_g4_copy2_ParamLimits

0x5c42,	// (0x0004deb4) eswt_control_pane_g4_copy2

0x6ccf,	// (0x0004ef41) common_borders_pane_cp4

0x5ca8,	// (0x0004df1a) separator_horizontal_pane_g1

0x5cb1,	// (0x0004df23) separator_horizontal_pane_g2

0x5cba,	// (0x0004df2c) separator_horizontal_pane_g3

0x0002,

0xfc20,	// (0x00057e92) separator_horizontal_pane_g

0x5c1b,	// (0x0004de8d) eswt_control_pane_g1_copy3_ParamLimits

0x5c1b,	// (0x0004de8d) eswt_control_pane_g1_copy3

0x5c28,	// (0x0004de9a) eswt_control_pane_g2_copy3_ParamLimits

0x5c28,	// (0x0004de9a) eswt_control_pane_g2_copy3

0x5c35,	// (0x0004dea7) eswt_control_pane_g3_copy3_ParamLimits

0x5c35,	// (0x0004dea7) eswt_control_pane_g3_copy3

0x5c42,	// (0x0004deb4) eswt_control_pane_g4_copy3_ParamLimits

0x5c42,	// (0x0004deb4) eswt_control_pane_g4_copy3

0x6ccf,	// (0x0004ef41) common_borders_pane_cp5

0x5cc3,	// (0x0004df35) separator_vertical_pane_g1

0x5ccc,	// (0x0004df3e) separator_vertical_pane_g2

0x5cd5,	// (0x0004df47) separator_vertical_pane_g3

0x0002,

0xfc27,	// (0x00057e99) separator_vertical_pane_g

0x5c1b,	// (0x0004de8d) eswt_control_pane_g1_copy4_ParamLimits

0x5c1b,	// (0x0004de8d) eswt_control_pane_g1_copy4

0x5c28,	// (0x0004de9a) eswt_control_pane_g2_copy4_ParamLimits

0x5c28,	// (0x0004de9a) eswt_control_pane_g2_copy4

0x5c35,	// (0x0004dea7) eswt_control_pane_g3_copy4_ParamLimits

0x5c35,	// (0x0004dea7) eswt_control_pane_g3_copy4

0x5c42,	// (0x0004deb4) eswt_control_pane_g4_copy4_ParamLimits

0x5c42,	// (0x0004deb4) eswt_control_pane_g4_copy4

0xd2cd,	// (0x0005553f) eswt_ctrl_combo_button_pane

0xd2d5,	// (0x00055547) eswt_ctrl_input_pane

0xd2dd,	// (0x0005554f) popup_choice_list_window_cp70

0xd2e5,	// (0x00055557) eswt_ctrl_input_pane_t1

0x6ccf,	// (0x0004ef41) input_focus_pane_cp70

0x526c,	// (0x0004d4de) bg_button_pane_cp70_ParamLimits

0x526c,	// (0x0004d4de) bg_button_pane_cp70

0xd2f3,	// (0x00055565) eswt_ctrl_combo_button_pane_g1

0x5d0c,	// (0x0004df7e) wait_bar_pane_cp70

0x2c93,	// (0x0004af05) bg_popup_window_pane_cp70_ParamLimits

0x2c93,	// (0x0004af05) bg_popup_window_pane_cp70

0x5d14,	// (0x0004df86) popup_eswt_tasktip_window_t1

0x5d2a,	// (0x0004df9c) wait_bar_pane_cp71_ParamLimits

0x5d2a,	// (0x0004df9c) wait_bar_pane_cp71

0x5d36,	// (0x0004dfa8) grid_eswt_app_pane

0xb00b,	// (0x0005327d) scroll_pane_cp70

0xd2fb,	// (0x0005556d) cell_eswt_app_pane_ParamLimits

0xd2fb,	// (0x0005556d) cell_eswt_app_pane

0xd32d,	// (0x0005559f) cell_eswt_app_pane_g1_ParamLimits

0xd32d,	// (0x0005559f) cell_eswt_app_pane_g1

0xd35c,	// (0x000555ce) cell_eswt_app_pane_g2_ParamLimits

0xd35c,	// (0x000555ce) cell_eswt_app_pane_g2

0x0001,

0xfc2e,	// (0x00057ea0) cell_eswt_app_pane_g_ParamLimits

0xfc2e,	// (0x00057ea0) cell_eswt_app_pane_g

0xd385,	// (0x000555f7) cell_eswt_app_pane_t1_ParamLimits

0xd385,	// (0x000555f7) cell_eswt_app_pane_t1

0x5dfb,	// (0x0004e06d) grid_highlight_pane_cp70_ParamLimits

0x5dfb,	// (0x0004e06d) grid_highlight_pane_cp70

0x21f0,	// (0x0004a462) set_content_pane_g1

0x25c3,	// (0x0004a835) status_small_volume_pane

0x1789,	// (0x000499fb) status_small_volume_pane_g1

0x1791,	// (0x00049a03) volume_small2_pane

0x179a,	// (0x00049a0c) volume_small2_pane_g1

0x17a3,	// (0x00049a15) volume_small2_pane_g2

0x17ac,	// (0x00049a1e) volume_small2_pane_g3

0x17b5,	// (0x00049a27) volume_small2_pane_g4

0x17be,	// (0x00049a30) volume_small2_pane_g5

0x17c7,	// (0x00049a39) volume_small2_pane_g6

0x17d0,	// (0x00049a42) volume_small2_pane_g7

0x17d9,	// (0x00049a4b) volume_small2_pane_g8

0x17e2,	// (0x00049a54) volume_small2_pane_g9

0x17eb,	// (0x00049a5d) volume_small2_pane_g10

0x0009,

0xfc33,	// (0x00057ea5) volume_small2_pane_g

0x5676,	// (0x0004d8e8) fep_vkb_top_text_pane_g1_ParamLimits

0xd239,	// (0x000554ab) fep_vkb_top_text_pane_t1_ParamLimits

0x594b,	// (0x0004dbbd) popup_preview_fixed_window_g3_ParamLimits

0x594b,	// (0x0004dbbd) popup_preview_fixed_window_g3

0xbcca,	// (0x00053f3c) popup_toolbar_trans_pane

0xcc02,	// (0x00054e74) aid_height_set_list_ParamLimits

0x4002,	// (0x0004c274) aid_size_parent_ParamLimits

0x266b,	// (0x0004a8dd) list_highlight_pane_cp2_ParamLimits

0x21f0,	// (0x0004a462) set_content_pane_g1_ParamLimits

0xa087,	// (0x000522f9) list_single_image_pane_ParamLimits

0xa087,	// (0x000522f9) list_single_image_pane

0xd3b7,	// (0x00055629) aid_size_cell_image_ParamLimits

0xd3b7,	// (0x00055629) aid_size_cell_image

0xd3c4,	// (0x00055636) grid_single_image_pane_ParamLimits

0xd3c4,	// (0x00055636) grid_single_image_pane

0xaad1,	// (0x00052d43) list_single_image_pane_g1_ParamLimits

0xaad1,	// (0x00052d43) list_single_image_pane_g1

0xab68,	// (0x00052dda) list_single_image_pane_g2_ParamLimits

0xab68,	// (0x00052dda) list_single_image_pane_g2

0x0001,

0xfc48,	// (0x00057eba) list_single_image_pane_g_ParamLimits

0xfc48,	// (0x00057eba) list_single_image_pane_g

0x5e22,	// (0x0004e094) list_single_image_pane_t1_ParamLimits

0x5e22,	// (0x0004e094) list_single_image_pane_t1

0xd3d2,	// (0x00055644) cell_image_list_pane_ParamLimits

0xd3d2,	// (0x00055644) cell_image_list_pane

0xd3e6,	// (0x00055658) cell_image_list_pane_g1

0xd3ef,	// (0x00055661) cell_image_list_pane_g2

0x0001,

0xfc4d,	// (0x00057ebf) cell_image_list_pane_g

0x5e60,	// (0x0004e0d2) aid_size_cell_tb_trans_pane

0xab4e,	// (0x00052dc0) bg_tb_trans_pane

0x5e72,	// (0x0004e0e4) grid_tb_trans_pane

0x2b97,	// (0x0004ae09) bg_tb_trans_pane_g1

0x2b9f,	// (0x0004ae11) bg_tb_trans_pane_g2

0x2ba7,	// (0x0004ae19) bg_tb_trans_pane_g3

0x2baf,	// (0x0004ae21) bg_tb_trans_pane_g4

0x2bb7,	// (0x0004ae29) bg_tb_trans_pane_g5

0x2bcf,	// (0x0004ae41) bg_tb_trans_pane_g6

0x2bd7,	// (0x0004ae49) bg_tb_trans_pane_g7

0x2bbf,	// (0x0004ae31) bg_tb_trans_pane_g8

0x2bc7,	// (0x0004ae39) bg_tb_trans_pane_g9

0x0008,

0xfc52,	// (0x00057ec4) bg_tb_trans_pane_g

0x5e86,	// (0x0004e0f8) cell_toolbar_trans_pane_ParamLimits

0x5e86,	// (0x0004e0f8) cell_toolbar_trans_pane

0x52a7,	// (0x0004d519) cell_toolbar_trans_pane_g1

0xcff6,	// (0x00055268) list_form2_midp_pane_t1

0xd004,	// (0x00055276) list_form2_midp_pane_t2

0x0001,

0xfafb,	// (0x00057d6d) list_form2_midp_pane_t

0x4ee7,	// (0x0004d159) scroll_pane_cp51_ParamLimits

0x50ae,	// (0x0004d320) form2_midp_wait_pane_g1

0x50b7,	// (0x0004d329) form2_midp_wait_pane_g2

0x50c0,	// (0x0004d332) form2_midp_wait_pane_g3

0x0002,

0xfb10,	// (0x00057d82) form2_midp_wait_pane_g

0x6d31,	// (0x0004efa3) list_highlight_pane_cp21_ParamLimits

0x5104,	// (0x0004d376) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x5113,	// (0x0004d385) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x41da,	// (0x0004c44c) list_single_2graphic_im_pane_ParamLimits

0x41da,	// (0x0004c44c) list_single_2graphic_im_pane

0xd3f8,	// (0x0005566a) list_single_2graphic_im_pane_g1_ParamLimits

0xd3f8,	// (0x0005566a) list_single_2graphic_im_pane_g1

0xd409,	// (0x0005567b) list_single_2graphic_im_pane_g2_ParamLimits

0xd409,	// (0x0005567b) list_single_2graphic_im_pane_g2

0xd415,	// (0x00055687) list_single_2graphic_im_pane_g3_ParamLimits

0xd415,	// (0x00055687) list_single_2graphic_im_pane_g3

0x0003,

0xfc65,	// (0x00057ed7) list_single_2graphic_im_pane_g_ParamLimits

0xfc65,	// (0x00057ed7) list_single_2graphic_im_pane_g

0xd429,	// (0x0005569b) list_single_2graphic_im_pane_t1_ParamLimits

0xd429,	// (0x0005569b) list_single_2graphic_im_pane_t1

0x5957,	// (0x0004dbc9) list_single_graphic_2heading_pane_fp_ParamLimits

0x5957,	// (0x0004dbc9) list_single_graphic_2heading_pane_fp

0xf25d,	// (0x000574cf) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xf25d,	// (0x000574cf) list_single_graphic_2heading_pane_fp_g1

0x5970,	// (0x0004dbe2) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x5970,	// (0x0004dbe2) list_single_graphic_2heading_pane_fp_g2

0xf548,	// (0x000577ba) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xf548,	// (0x000577ba) list_single_graphic_2heading_pane_fp_g3

0x164c,	// (0x000498be) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x164c,	// (0x000498be) list_single_graphic_2heading_pane_fp_g4

0x597c,	// (0x0004dbee) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x597c,	// (0x0004dbee) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb93,	// (0x00057e05) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb93,	// (0x00057e05) list_single_graphic_2heading_pane_fp_g

0xf384,	// (0x000575f6) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xf384,	// (0x000575f6) list_single_graphic_2heading_pane_fp_t1

0xf295,	// (0x00057507) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xf295,	// (0x00057507) list_single_graphic_2heading_pane_fp_t2

0xf39a,	// (0x0005760c) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xf39a,	// (0x0005760c) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc6e,	// (0x00057ee0) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc6e,	// (0x00057ee0) list_single_graphic_2heading_pane_fp_t

0x5338,	// (0x0004d5aa) fep_hwr_write_pane_g5_ParamLimits

0x5338,	// (0x0004d5aa) fep_hwr_write_pane_g5

0x5344,	// (0x0004d5b6) fep_hwr_write_pane_g6_ParamLimits

0x5344,	// (0x0004d5b6) fep_hwr_write_pane_g6

0x5bea,	// (0x0004de5c) eswt_shell_pane_ParamLimits

0x2c93,	// (0x0004af05) bg_popup_window_pane_cp18_ParamLimits

0x3f48,	// (0x0004c1ba) heading_pane_cp70

0x5d14,	// (0x0004df86) popup_eswt_tasktip_window_t1_ParamLimits

0xbd94,	// (0x00054006) aid_touch_tab_arrow_left

0xbda8,	// (0x0005401a) aid_touch_tab_arrow_right

0xa3d5,	// (0x00052647) title_pane_g3_ParamLimits

0xa3d5,	// (0x00052647) title_pane_g3

0xab0d,	// (0x00052d7f) set_value_pane_g1

0xbcca,	// (0x00053f3c) popup_toolbar_trans_pane_ParamLimits

0x5e60,	// (0x0004e0d2) aid_size_cell_tb_trans_pane_ParamLimits

0xab4e,	// (0x00052dc0) bg_tb_trans_pane_ParamLimits

0x5e72,	// (0x0004e0e4) grid_tb_trans_pane_ParamLimits

0x6e72,	// (0x0004f0e4) cont_note_pane_ParamLimits

0x6e72,	// (0x0004f0e4) cont_note_pane

0xa870,	// (0x00052ae2) cont_snote2_single_text_pane_ParamLimits

0xa870,	// (0x00052ae2) cont_snote2_single_text_pane

0xa870,	// (0x00052ae2) cont_snote2_single_graphic_pane_ParamLimits

0xa870,	// (0x00052ae2) cont_snote2_single_graphic_pane

0x326f,	// (0x0004b4e1) cont_note_wait_pane_ParamLimits

0x326f,	// (0x0004b4e1) cont_note_wait_pane

0x326f,	// (0x0004b4e1) cont_note_image_pane_ParamLimits

0x326f,	// (0x0004b4e1) cont_note_image_pane

0x5f1a,	// (0x0004e18c) popup_note2_window_g1_ParamLimits

0x5f1a,	// (0x0004e18c) popup_note2_window_g1

0x5f4b,	// (0x0004e1bd) popup_note2_window_t1_ParamLimits

0x5f4b,	// (0x0004e1bd) popup_note2_window_t1

0x5f90,	// (0x0004e202) popup_note2_window_t2_ParamLimits

0x5f90,	// (0x0004e202) popup_note2_window_t2

0x5fd5,	// (0x0004e247) popup_note2_window_t3_ParamLimits

0x5fd5,	// (0x0004e247) popup_note2_window_t3

0x601a,	// (0x0004e28c) popup_note2_window_t4_ParamLimits

0x601a,	// (0x0004e28c) popup_note2_window_t4

0x6ef6,	// (0x0004f168) popup_note2_window_t5_ParamLimits

0x6ef6,	// (0x0004f168) popup_note2_window_t5

0x0004,

0xfc7a,	// (0x00057eec) popup_note2_window_t_ParamLimits

0xfc7a,	// (0x00057eec) popup_note2_window_t

0x6049,	// (0x0004e2bb) popup_note2_image_window_g1_ParamLimits

0x6049,	// (0x0004e2bb) popup_note2_image_window_g1

0x6055,	// (0x0004e2c7) popup_note2_image_window_g2_ParamLimits

0x6055,	// (0x0004e2c7) popup_note2_image_window_g2

0x0001,

0xfc85,	// (0x00057ef7) popup_note2_image_window_g_ParamLimits

0xfc85,	// (0x00057ef7) popup_note2_image_window_g

0x6067,	// (0x0004e2d9) popup_note2_image_window_t1_ParamLimits

0x6067,	// (0x0004e2d9) popup_note2_image_window_t1

0x607f,	// (0x0004e2f1) popup_note2_image_window_t2_ParamLimits

0x607f,	// (0x0004e2f1) popup_note2_image_window_t2

0x6097,	// (0x0004e309) popup_note2_image_window_t3_ParamLimits

0x6097,	// (0x0004e309) popup_note2_image_window_t3

0x0002,

0xfc8a,	// (0x00057efc) popup_note2_image_window_t_ParamLimits

0xfc8a,	// (0x00057efc) popup_note2_image_window_t

0x327d,	// (0x0004b4ef) popup_note2_wait_window_g1_ParamLimits

0x327d,	// (0x0004b4ef) popup_note2_wait_window_g1

0x60b3,	// (0x0004e325) popup_note2_wait_window_g2_ParamLimits

0x60b3,	// (0x0004e325) popup_note2_wait_window_g2

0x3295,	// (0x0004b507) popup_note2_wait_window_g3_ParamLimits

0x3295,	// (0x0004b507) popup_note2_wait_window_g3

0x0002,

0xfc91,	// (0x00057f03) popup_note2_wait_window_g_ParamLimits

0xfc91,	// (0x00057f03) popup_note2_wait_window_g

0x60bf,	// (0x0004e331) popup_note2_wait_window_t1_ParamLimits

0x60bf,	// (0x0004e331) popup_note2_wait_window_t1

0x60dd,	// (0x0004e34f) popup_note2_wait_window_t2_ParamLimits

0x60dd,	// (0x0004e34f) popup_note2_wait_window_t2

0x60fb,	// (0x0004e36d) popup_note2_wait_window_t3_ParamLimits

0x60fb,	// (0x0004e36d) popup_note2_wait_window_t3

0x610d,	// (0x0004e37f) popup_note2_wait_window_t4_ParamLimits

0x610d,	// (0x0004e37f) popup_note2_wait_window_t4

0x0003,

0xfc98,	// (0x00057f0a) popup_note2_wait_window_t_ParamLimits

0xfc98,	// (0x00057f0a) popup_note2_wait_window_t

0x611f,	// (0x0004e391) wait_bar2_pane_ParamLimits

0x611f,	// (0x0004e391) wait_bar2_pane

0x6137,	// (0x0004e3a9) popup_snote2_single_text_window_g1_ParamLimits

0x6137,	// (0x0004e3a9) popup_snote2_single_text_window_g1

0x615f,	// (0x0004e3d1) popup_snote2_single_text_window_t1_ParamLimits

0x615f,	// (0x0004e3d1) popup_snote2_single_text_window_t1

0x61ab,	// (0x0004e41d) popup_snote2_single_text_window_t2_ParamLimits

0x61ab,	// (0x0004e41d) popup_snote2_single_text_window_t2

0x61f7,	// (0x0004e469) popup_snote2_single_text_window_t3_ParamLimits

0x61f7,	// (0x0004e469) popup_snote2_single_text_window_t3

0x6238,	// (0x0004e4aa) popup_snote2_single_text_window_t4_ParamLimits

0x6238,	// (0x0004e4aa) popup_snote2_single_text_window_t4

0x626e,	// (0x0004e4e0) popup_snote2_single_text_window_t5_ParamLimits

0x626e,	// (0x0004e4e0) popup_snote2_single_text_window_t5

0x0004,

0xfca1,	// (0x00057f13) popup_snote2_single_text_window_t_ParamLimits

0xfca1,	// (0x00057f13) popup_snote2_single_text_window_t

0x6299,	// (0x0004e50b) popup_snote2_single_graphic_window_g1_ParamLimits

0x6299,	// (0x0004e50b) popup_snote2_single_graphic_window_g1

0x62c1,	// (0x0004e533) popup_snote2_single_graphic_window_g2_ParamLimits

0x62c1,	// (0x0004e533) popup_snote2_single_graphic_window_g2

0x0001,

0xfcac,	// (0x00057f1e) popup_snote2_single_graphic_window_g_ParamLimits

0xfcac,	// (0x00057f1e) popup_snote2_single_graphic_window_g

0x62e9,	// (0x0004e55b) popup_snote2_single_graphic_window_t1_ParamLimits

0x62e9,	// (0x0004e55b) popup_snote2_single_graphic_window_t1

0x6335,	// (0x0004e5a7) popup_snote2_single_graphic_window_t2_ParamLimits

0x6335,	// (0x0004e5a7) popup_snote2_single_graphic_window_t2

0x61f7,	// (0x0004e469) popup_snote2_single_graphic_window_t3_ParamLimits

0x61f7,	// (0x0004e469) popup_snote2_single_graphic_window_t3

0x6238,	// (0x0004e4aa) popup_snote2_single_graphic_window_t4_ParamLimits

0x6238,	// (0x0004e4aa) popup_snote2_single_graphic_window_t4

0x626e,	// (0x0004e4e0) popup_snote2_single_graphic_window_t5_ParamLimits

0x626e,	// (0x0004e4e0) popup_snote2_single_graphic_window_t5

0x0004,

0xfcb1,	// (0x00057f23) popup_snote2_single_graphic_window_t_ParamLimits

0xfcb1,	// (0x00057f23) popup_snote2_single_graphic_window_t

0x4d91,	// (0x0004d003) clock_nsta_pane_cp2_t1

0x4d91,	// (0x0004d003) clock_nsta_pane_cp2_t2

0x0001,

0xfad1,	// (0x00057d43) clock_nsta_pane_cp2_t

0xe806,	// (0x00056a78) form_field_data_wide_pane_g1_ParamLimits

0xaad1,	// (0x00052d43) form_field_data_wide_pane_g2_ParamLimits

0xaad1,	// (0x00052d43) form_field_data_wide_pane_g2

0xab68,	// (0x00052dda) form_field_data_wide_pane_g3_ParamLimits

0xab68,	// (0x00052dda) form_field_data_wide_pane_g3

0x0002,

0xf686,	// (0x000578f8) form_field_data_wide_pane_g_ParamLimits

0xf686,	// (0x000578f8) form_field_data_wide_pane_g

0xcef0,	// (0x00055162) grid_touch_3_pane_ParamLimits

0xcef0,	// (0x00055162) grid_touch_3_pane

0xd45a,	// (0x000556cc) cell_touch_3_pane_ParamLimits

0xd45a,	// (0x000556cc) cell_touch_3_pane

0x52a7,	// (0x0004d519) cell_touch_3_pane_g1

0x52a7,	// (0x0004d519) cell_touch_3_pane_g2

0x0001,

0xfb56,	// (0x00057dc8) cell_touch_3_pane_g

0x6f28,	// (0x0004f19a) cont_query_data_pane

0x6f30,	// (0x0004f1a2) cont_query_data_pane_cp1

0x63b4,	// (0x0004e626) button_value_adjust_pane_cp7

0x63bc,	// (0x0004e62e) query_popup_pane_cp3

0xe902,	// (0x00056b74) bg_popup_sub_pane_cp22_ParamLimits

0x03f8,	// (0x0004866a) navi_navi_volume_pane_cp2

0x0413,	// (0x00048685) popup_side_volume_key_window_g2

0x0422,	// (0x00048694) popup_side_volume_key_window_g3

0x0002,

0xf71c,	// (0x0005798e) popup_side_volume_key_window_g

0x043f,	// (0x000486b1) popup_side_volume_key_window_t2

0x0001,

0xf723,	// (0x00057995) popup_side_volume_key_window_t

0xeb0d,	// (0x00056d7f) popup_side_volume_key_window_ParamLimits

0x9b52,	// (0x00051dc4) list_double_graphic_pane_g4_ParamLimits

0x9b52,	// (0x00051dc4) list_double_graphic_pane_g4

0xc2ab,	// (0x0005451d) list_single_2heading_msg_pane_ParamLimits

0xc2ab,	// (0x0005451d) list_single_2heading_msg_pane

0xc30d,	// (0x0005457f) list_single_2heading_msg_pane_g1_ParamLimits

0xc30d,	// (0x0005457f) list_single_2heading_msg_pane_g1

0xc319,	// (0x0005458b) list_single_2heading_msg_pane_g2_ParamLimits

0xc319,	// (0x0005458b) list_single_2heading_msg_pane_g2

0xc32c,	// (0x0005459e) list_single_2heading_msg_pane_g3_ParamLimits

0xc32c,	// (0x0005459e) list_single_2heading_msg_pane_g3

0xc338,	// (0x000545aa) list_single_2heading_msg_pane_g4_ParamLimits

0xc338,	// (0x000545aa) list_single_2heading_msg_pane_g4

0x0003,

0xfcbc,	// (0x00057f2e) list_single_2heading_msg_pane_g_ParamLimits

0xfcbc,	// (0x00057f2e) list_single_2heading_msg_pane_g

0xa0ba,	// (0x0005232c) list_single_2heading_msg_pane_t1_ParamLimits

0xa0ba,	// (0x0005232c) list_single_2heading_msg_pane_t1

0xa0e2,	// (0x00052354) list_single_2heading_msg_pane_t2_ParamLimits

0xa0e2,	// (0x00052354) list_single_2heading_msg_pane_t2

0xa14d,	// (0x000523bf) list_single_2heading_msg_pane_t3_ParamLimits

0xa14d,	// (0x000523bf) list_single_2heading_msg_pane_t3

0xf3ba,	// (0x0005762c) list_single_2heading_msg_pane_t4_ParamLimits

0xf3ba,	// (0x0005762c) list_single_2heading_msg_pane_t4

0x0003,

0xfcc5,	// (0x00057f37) list_single_2heading_msg_pane_t_ParamLimits

0xfcc5,	// (0x00057f37) list_single_2heading_msg_pane_t

0x6ced,	// (0x0004ef5f) title_pane_g4_ParamLimits

0x6ced,	// (0x0004ef5f) title_pane_g4

0x008b,	// (0x000482fd) title_pane_stacon_g3_ParamLimits

0x008b,	// (0x000482fd) title_pane_stacon_g3

0x5edd,	// (0x0004e14f) list_single_2graphic_im_pane_g4_ParamLimits

0x5edd,	// (0x0004e14f) list_single_2graphic_im_pane_g4

0x3ce5,	// (0x0004bf57) popup_side_volume_key_window_cp

0x453b,	// (0x0004c7ad) main_idle_act2_pane_t1

0x0efc,	// (0x0004916e) toolbar_button_pane_g10

0xaa68,	// (0x00052cda) popup_toolbar_window_cp1

0x4d82,	// (0x0004cff4) clock_nsta_pane_cp_t1

0x4d82,	// (0x0004cff4) clock_nsta_pane_cp_t2

0x0001,

0xfacc,	// (0x00057d3e) clock_nsta_pane_cp_t

0x03f8,	// (0x0004866a) navi_navi_volume_pane_cp2_ParamLimits

0x0407,	// (0x00048679) popup_side_volume_key_window_g1_ParamLimits

0x0413,	// (0x00048685) popup_side_volume_key_window_g2_ParamLimits

0x0422,	// (0x00048694) popup_side_volume_key_window_g3_ParamLimits

0xf71c,	// (0x0005798e) popup_side_volume_key_window_g_ParamLimits

0x13e6,	// (0x00049658) fep_hwr_aid_pane

0xd0ed,	// (0x0005535f) bg_fep_hwr_top_pane_g4_ParamLimits

0x5308,	// (0x0004d57a) fep_hwr_top_pane_g1_ParamLimits

0x531a,	// (0x0004d58c) fep_hwr_top_pane_g2_ParamLimits

0x14a1,	// (0x00049713) fep_hwr_top_pane_g3_ParamLimits

0xfb21,	// (0x00057d93) fep_hwr_top_pane_g_ParamLimits

0x14b6,	// (0x00049728) fep_hwr_top_text_pane_ParamLimits

0x3a9a,	// (0x0004bd0c) aid_touch_tab_arrow_arrow_2

0x3aa3,	// (0x0004bd15) aid_touch_tab_arrow_left_2

0x13fa,	// (0x0004966c) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x1431,	// (0x000496a3) fep_hwr_prediction_pane

0x5470,	// (0x0004d6e2) fep_vkb_prediction_pane

0xd219,	// (0x0005548b) fep_vkb_side_pane_g3_ParamLimits

0xd219,	// (0x0005548b) fep_vkb_side_pane_g3

0x5522,	// (0x0004d794) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x59d0,	// (0x0004dc42) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x59dd,	// (0x0004dc4f) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbcb,	// (0x00057e3d) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x63e3,	// (0x0004e655) fep_hwr_prediction_pane_g1

0x1824,	// (0x00049a96) fep_hwr_prediction_pane_g2

0x182c,	// (0x00049a9e) fep_hwr_prediction_pane_g3

0x1834,	// (0x00049aa6) fep_hwr_prediction_pane_g4

0x0003,

0xfcce,	// (0x00057f40) fep_hwr_prediction_pane_g

0x63e3,	// (0x0004e655) fep_vkb_prediction_pane_g1

0x63ed,	// (0x0004e65f) fep_vkb_prediction_pane_g2

0x63f5,	// (0x0004e667) fep_vkb_prediction_pane_g3

0x63fd,	// (0x0004e66f) fep_vkb_prediction_pane_g4

0x0003,

0xfcd7,	// (0x00057f49) fep_vkb_prediction_pane_g

0x6fb5,	// (0x0004f227) slider_set_pane_g3

0x6fc9,	// (0x0004f23b) slider_set_pane_g4

0x6fe1,	// (0x0004f253) slider_set_pane_g5

0x6fb5,	// (0x0004f227) slider_set_pane_g6

0x11f1,	// (0x00049463) slider_set_pane_g7

0x4187,	// (0x0004c3f9) slider_form_pane_g3

0x4190,	// (0x0004c402) slider_form_pane_g4

0x4198,	// (0x0004c40a) slider_form_pane_g5

0x4187,	// (0x0004c3f9) slider_form_pane_g6

0xcd71,	// (0x00054fe3) slider_form_pane_g7

0x47fe,	// (0x0004ca70) slider_set_pane_vc_g3

0x4807,	// (0x0004ca79) slider_set_pane_vc_g4

0x4810,	// (0x0004ca82) slider_set_pane_vc_g5

0x47fe,	// (0x0004ca70) slider_set_pane_vc_g6

0x4819,	// (0x0004ca8b) slider_set_pane_vc_g7

0x4a2b,	// (0x0004cc9d) slider_form_pane_vc_g1

0x4a34,	// (0x0004cca6) slider_form_pane_vc_g2

0x4a3d,	// (0x0004ccaf) slider_form_pane_vc_g3

0x4a2b,	// (0x0004cc9d) slider_form_pane_vc_g4

0x4a46,	// (0x0004ccb8) slider_form_pane_vc_g5

0x0004,

0xfa9e,	// (0x00057d10) slider_form_pane_vc_g

0x6ccf,	// (0x0004ef41) main_idle_act3_pane

0x6405,	// (0x0004e677) ai3_links_pane

0xd4a4,	// (0x00055716) popup_ai3_data_window_ParamLimits

0xd4a4,	// (0x00055716) popup_ai3_data_window

0x6ccf,	// (0x0004ef41) grid_ai3_links_pane

0xd4c2,	// (0x00055734) cell_ai3_links_pane_ParamLimits

0xd4c2,	// (0x00055734) cell_ai3_links_pane

0x6446,	// (0x0004e6b8) bg_popup_sub_pane_cp11

0x6453,	// (0x0004e6c5) cell_ai3_links_pane_g1

0x6ccf,	// (0x0004ef41) bg_popup_sub_pane_cp12

0x6478,	// (0x0004e6ea) heading_ai3_data_pane

0x6480,	// (0x0004e6f2) list_ai3_gene_pane

0x648c,	// (0x0004e6fe) popup_ai3_data_window_g1

0x6494,	// (0x0004e706) heading_ai3_data_pane_g1

0x649c,	// (0x0004e70e) heading_ai3_data_pane_t1

0x64aa,	// (0x0004e71c) list_double_ai3_gene_pane_ParamLimits

0x64aa,	// (0x0004e71c) list_double_ai3_gene_pane

0x64b7,	// (0x0004e729) list_single_ai3_gene_pane_ParamLimits

0x64b7,	// (0x0004e729) list_single_ai3_gene_pane

0x526c,	// (0x0004d4de) list_highlight_pane_cp7_ParamLimits

0x526c,	// (0x0004d4de) list_highlight_pane_cp7

0x64c4,	// (0x0004e736) list_single_a13_gene_pane_t1_ParamLimits

0x64c4,	// (0x0004e736) list_single_a13_gene_pane_t1

0x64db,	// (0x0004e74d) list_single_ai3_gene_pane_g1

0x64e4,	// (0x0004e756) list_single_ai3_gene_pane_g2

0x0001,

0xfce0,	// (0x00057f52) list_single_ai3_gene_pane_g

0x64ec,	// (0x0004e75e) list_double_ai3_gene_pane_g1_ParamLimits

0x64ec,	// (0x0004e75e) list_double_ai3_gene_pane_g1

0x64f8,	// (0x0004e76a) list_double_ai3_gene_pane_t1_ParamLimits

0x64f8,	// (0x0004e76a) list_double_ai3_gene_pane_t1

0x6514,	// (0x0004e786) list_double_ai3_gene_pane_t2_ParamLimits

0x6514,	// (0x0004e786) list_double_ai3_gene_pane_t2

0x6529,	// (0x0004e79b) list_double_ai3_gene_pane_t3_ParamLimits

0x6529,	// (0x0004e79b) list_double_ai3_gene_pane_t3

0x0002,

0xfce5,	// (0x00057f57) list_double_ai3_gene_pane_t_ParamLimits

0xfce5,	// (0x00057f57) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xf3b0,	// (0x00057622) aid_size_min_col_2

0xd48e,	// (0x00055700) aid_size_min_msg_ParamLimits

0xd48e,	// (0x00055700) aid_size_min_msg

0xd22d,	// (0x0005549f) fep_vkb_top_text_pane_g2_ParamLimits

0xd22d,	// (0x0005549f) fep_vkb_top_text_pane_g2

0x0001,

0xfb51,	// (0x00057dc3) fep_vkb_top_text_pane_g_ParamLimits

0xfb51,	// (0x00057dc3) fep_vkb_top_text_pane_g

0x6ccf,	// (0x0004ef41) main_hc_apps_shell_pane

0x6546,	// (0x0004e7b8) grid_hc_apps_pane_ParamLimits

0x6546,	// (0x0004e7b8) grid_hc_apps_pane

0x6555,	// (0x0004e7c7) list_hc_apps_pane

0x655d,	// (0x0004e7cf) scroll_pane_cp37_ParamLimits

0x655d,	// (0x0004e7cf) scroll_pane_cp37

0xd4dc,	// (0x0005574e) cell_hc_apps_pane_ParamLimits

0xd4dc,	// (0x0005574e) cell_hc_apps_pane

0xd5a6,	// (0x00055818) cell_hc_apps_pane_g1_ParamLimits

0xd5a6,	// (0x00055818) cell_hc_apps_pane_g1

0x6652,	// (0x0004e8c4) cell_hc_apps_pane_g2_ParamLimits

0x6652,	// (0x0004e8c4) cell_hc_apps_pane_g2

0x666e,	// (0x0004e8e0) cell_hc_apps_pane_g3_ParamLimits

0x666e,	// (0x0004e8e0) cell_hc_apps_pane_g3

0x0002,

0xfcec,	// (0x00057f5e) cell_hc_apps_pane_g_ParamLimits

0xfcec,	// (0x00057f5e) cell_hc_apps_pane_g

0xd5d3,	// (0x00055845) cell_hc_apps_pane_t1_ParamLimits

0xd5d3,	// (0x00055845) cell_hc_apps_pane_t1

0x6e72,	// (0x0004f0e4) grid_highlight_pane_cp10_ParamLimits

0x6e72,	// (0x0004f0e4) grid_highlight_pane_cp10

0xd613,	// (0x00055885) list_single_hc_apps_pane_ParamLimits

0xd613,	// (0x00055885) list_single_hc_apps_pane

0xd64d,	// (0x000558bf) list_single_hc_apps_pane_g1

0xc350,	// (0x000545c2) list_single_hc_apps_pane_g2

0x0001,

0xfcf3,	// (0x00057f65) list_single_hc_apps_pane_g

0xc369,	// (0x000545db) list_single_hc_apps_pane_g2_copy1

0xa1bb,	// (0x0005242d) list_single_hc_apps_pane_t1

0x6d31,	// (0x0004efa3) bg_set_opt_pane_cp_ParamLimits

0xf4aa,	// (0x0005771c) setting_slider_pane_t1_ParamLimits

0xf4c3,	// (0x00057735) setting_slider_pane_t2_ParamLimits

0xf4dd,	// (0x0005774f) setting_slider_pane_t3_ParamLimits

0xf564,	// (0x000577d6) setting_slider_pane_t_ParamLimits

0xf4f5,	// (0x00057767) slider_set_pane_ParamLimits

0x079d,	// (0x00048a0f) control_pane_g5_ParamLimits

0x079d,	// (0x00048a0f) control_pane_g5

0x3fb4,	// (0x0004c226) slider_set_pane_g1_ParamLimits

0x11e5,	// (0x00049457) slider_set_pane_g2_ParamLimits

0x6fb5,	// (0x0004f227) slider_set_pane_g3_ParamLimits

0x6fc9,	// (0x0004f23b) slider_set_pane_g4_ParamLimits

0x6fe1,	// (0x0004f253) slider_set_pane_g5_ParamLimits

0x6fb5,	// (0x0004f227) slider_set_pane_g6_ParamLimits

0x11f1,	// (0x00049463) slider_set_pane_g7_ParamLimits

0xf96a,	// (0x00057bdc) slider_set_pane_g_ParamLimits

0x219b,	// (0x0004a40d) navi_icon_text_pane_ParamLimits

0xbd5b,	// (0x00053fcd) aid_fill_nsta_2_ParamLimits

0xbd94,	// (0x00054006) aid_touch_tab_arrow_left_ParamLimits

0xbda8,	// (0x0005401a) aid_touch_tab_arrow_right_ParamLimits

0xbe43,	// (0x000540b5) clock_nsta_pane_ParamLimits

0xca88,	// (0x00054cfa) navi_icon_pane_g1_ParamLimits

0xca94,	// (0x00054d06) navi_text_pane_t1_ParamLimits

0xcfd8,	// (0x0005524a) navi_icon_text_pane_g1_ParamLimits

0xcfe4,	// (0x00055256) navi_icon_text_pane_t1_ParamLimits

0xd64d,	// (0x000558bf) list_single_hc_apps_pane_g1_ParamLimits

0xc350,	// (0x000545c2) list_single_hc_apps_pane_g2_ParamLimits

0xfcf3,	// (0x00057f65) list_single_hc_apps_pane_g_ParamLimits

0xc369,	// (0x000545db) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xa1bb,	// (0x0005242d) list_single_hc_apps_pane_t1_ParamLimits

0xa33f,	// (0x000525b1) popup_toolbar2_fixed_window_ParamLimits

0xa33f,	// (0x000525b1) popup_toolbar2_fixed_window

0xbcc0,	// (0x00053f32) popup_toolbar2_float_window

0x6ccf,	// (0x0004ef41) bg_popup_sub_pane_cp27

0x6728,	// (0x0004e99a) grid_toolbar2_float_pane

0x6ccf,	// (0x0004ef41) bg_popup_sub_pane_cp26

0x6728,	// (0x0004e99a) grid_toolbar2_fixed_pane

0xd666,	// (0x000558d8) cell_toolbar2_fixed_pane_ParamLimits

0xd666,	// (0x000558d8) cell_toolbar2_fixed_pane

0xd683,	// (0x000558f5) cell_toolbar2_fixed_pane_g1

0x6749,	// (0x0004e9bb) toolbar2_fixed_button_pane

0x2b97,	// (0x0004ae09) toolbar2_fixed_button_pane_g1

0x2b9f,	// (0x0004ae11) toolbar2_fixed_button_pane_g2

0x2ba7,	// (0x0004ae19) toolbar2_fixed_button_pane_g3

0x2baf,	// (0x0004ae21) toolbar2_fixed_button_pane_g4

0x2bb7,	// (0x0004ae29) toolbar2_fixed_button_pane_g5

0x2bbf,	// (0x0004ae31) toolbar2_fixed_button_pane_g6

0x2bc7,	// (0x0004ae39) toolbar2_fixed_button_pane_g7

0x2bcf,	// (0x0004ae41) toolbar2_fixed_button_pane_g8

0x2bd7,	// (0x0004ae49) toolbar2_fixed_button_pane_g9

0x0008,

0xf86c,	// (0x00057ade) toolbar2_fixed_button_pane_g

0x6751,	// (0x0004e9c3) cell_toolbar2_float_pane_ParamLimits

0x6751,	// (0x0004e9c3) cell_toolbar2_float_pane

0x6762,	// (0x0004e9d4) cell_toolbar2_float_pane_g1

0x6749,	// (0x0004e9bb) toolbar2_fixed_button_pane_cp

0xd115,	// (0x00055387) fep_vkb_accented_list_pane_ParamLimits

0xd115,	// (0x00055387) fep_vkb_accented_list_pane

0x1618,	// (0x0004988a) bg_popup_fep_shadow_pane_g9

0x231f,	// (0x0004a591) bg_popup_fep_shadow_pane_cp3

0xacab,	// (0x00052f1d) list_accented_list_pane

0x676b,	// (0x0004e9dd) list_single_accented_list_pane_ParamLimits

0x676b,	// (0x0004e9dd) list_single_accented_list_pane

0x231f,	// (0x0004a591) list_highlight_pane_cp10

0x677c,	// (0x0004e9ee) list_single_accented_list_pane_t1

0xbbdc,	// (0x00053e4e) popup_slider_window_ParamLimits

0xbbdc,	// (0x00053e4e) popup_slider_window

0x63c4,	// (0x0004e636) aid_indentation_list_msg

0xd78e,	// (0x00055a00) bg_popup_window_pane_cp19

0x68b6,	// (0x0004eb28) popup_slider_window_g1

0x68d2,	// (0x0004eb44) popup_slider_window_g2

0x68ee,	// (0x0004eb60) popup_slider_window_g3

0x0005,

0xfcf8,	// (0x00057f6a) popup_slider_window_g

0x694a,	// (0x0004ebbc) popup_slider_window_t1

0x69be,	// (0x0004ec30) small_volume_slider_vertical_pane

0x52a7,	// (0x0004d519) small_volume_slider_vertical_pane_g1

0x52a7,	// (0x0004d519) small_volume_slider_vertical_pane_g2

0x69da,	// (0x0004ec4c) small_volume_slider_vertical_pane_g3

0x0002,

0xfd0a,	// (0x00057f7c) small_volume_slider_vertical_pane_g

0xa2a9,	// (0x0005251b) area_side_right_pane_ParamLimits

0xa2a9,	// (0x0005251b) area_side_right_pane

0xc385,	// (0x000545f7) aid_size_side_button_ParamLimits

0xc385,	// (0x000545f7) aid_size_side_button

0xc39e,	// (0x00054610) grid_sctrl_middle_pane_ParamLimits

0xc39e,	// (0x00054610) grid_sctrl_middle_pane

0x18a5,	// (0x00049b17) sctrl_sk_bottom_pane

0x18b6,	// (0x00049b28) sctrl_sk_top_pane

0x18c8,	// (0x00049b3a) aid_touch_sctrl_top

0x6e72,	// (0x0004f0e4) bg_sctrl_sk_pane_ParamLimits

0x6e72,	// (0x0004f0e4) bg_sctrl_sk_pane

0x18d5,	// (0x00049b47) sctrl_sk_top_pane_g1

0x18e2,	// (0x00049b54) sctrl_sk_top_pane_t1

0x18c8,	// (0x00049b3a) aid_touch_sctrl_bottom

0x6e72,	// (0x0004f0e4) bg_sctrl_sk_pane_cp_ParamLimits

0x6e72,	// (0x0004f0e4) bg_sctrl_sk_pane_cp

0x18fd,	// (0x00049b6f) sctrl_sk_bottom_pane_g1

0x18e2,	// (0x00049b54) sctrl_sk_bottom_pane_t1

0xc3b8,	// (0x0005462a) cell_sctrl_middle_pane_ParamLimits

0xc3b8,	// (0x0005462a) cell_sctrl_middle_pane

0xc3cb,	// (0x0005463d) aid_touch_sctrl_middle_ParamLimits

0xc3cb,	// (0x0005463d) aid_touch_sctrl_middle

0xc3d8,	// (0x0005464a) bg_sctrl_middle_pane_ParamLimits

0xc3d8,	// (0x0005464a) bg_sctrl_middle_pane

0x6a65,	// (0x0004ecd7) cell_sctrl_middle_pane_g1_ParamLimits

0x6a65,	// (0x0004ecd7) cell_sctrl_middle_pane_g1

0xc3e6,	// (0x00054658) cell_sctrl_middle_pane_g2_ParamLimits

0xc3e6,	// (0x00054658) cell_sctrl_middle_pane_g2

0x0001,

0xfd16,	// (0x00057f88) cell_sctrl_middle_pane_g_ParamLimits

0xfd16,	// (0x00057f88) cell_sctrl_middle_pane_g

0x2b97,	// (0x0004ae09) bg_sctrl_middle_pane_g1

0x2b9f,	// (0x0004ae11) bg_sctrl_middle_pane_g2

0x2ba7,	// (0x0004ae19) bg_sctrl_middle_pane_g3

0x2baf,	// (0x0004ae21) bg_sctrl_middle_pane_g4

0x2bb7,	// (0x0004ae29) bg_sctrl_middle_pane_g5

0x2bbf,	// (0x0004ae31) bg_sctrl_middle_pane_g6

0x2bc7,	// (0x0004ae39) bg_sctrl_middle_pane_g7

0x2bcf,	// (0x0004ae41) bg_sctrl_middle_pane_g8

0x0007,

0xfd1b,	// (0x00057f8d) bg_sctrl_middle_pane_g

0x2bd7,	// (0x0004ae49) bg_sctrl_middle_pane_g8_copy1

0x2b97,	// (0x0004ae09) bg_sctrl_sk_pane_g1

0x2b9f,	// (0x0004ae11) bg_sctrl_sk_pane_g2

0x2ba7,	// (0x0004ae19) bg_sctrl_sk_pane_g3

0x0008,

0xf86c,	// (0x00057ade) bg_sctrl_sk_pane_g

0xaa2e,	// (0x00052ca0) aid_size_touch_scroll_bar

0x2baf,	// (0x0004ae21) bg_sctrl_sk_pane_g4

0x2bb7,	// (0x0004ae29) bg_sctrl_sk_pane_g5

0x2bbf,	// (0x0004ae31) bg_sctrl_sk_pane_g6

0x2bc7,	// (0x0004ae39) bg_sctrl_sk_pane_g7

0x2bcf,	// (0x0004ae41) bg_sctrl_sk_pane_g8

0x2bd7,	// (0x0004ae49) bg_sctrl_sk_pane_g9

0x093f,	// (0x00048bb1) popup_fep_china_hwr2_fs_candidate_window

0xb694,	// (0x00053906) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xb694,	// (0x00053906) popup_fep_china_hwr2_fs_control_window

0x5522,	// (0x0004d794) sctrl_sk_top_pane_g2

0x0001,

0xfd11,	// (0x00057f83) sctrl_sk_top_pane_g

0xd846,	// (0x00055ab8) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd846,	// (0x00055ab8) aid_fep_china_hwr2_fs_cell

0xd85c,	// (0x00055ace) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd85c,	// (0x00055ace) bg_popup_fep_shadow_pane_cp4

0xd873,	// (0x00055ae5) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd873,	// (0x00055ae5) bg_popup_fep_shadow_pane_cp5

0xd885,	// (0x00055af7) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd885,	// (0x00055af7) popup_fep_china_hwr2_fs_control_bar_grid

0xd899,	// (0x00055b0b) popup_fep_china_hwr2_fs_control_funtion_grid

0x6a39,	// (0x0004ecab) aid_fep_china_hwr2_fs_candi_cell

0x6ccf,	// (0x0004ef41) bg_popup_fep_shadow_pane_cp6

0x6a43,	// (0x0004ecb5) popup_fep_china_hwr2_fs_candidate_grid

0xd8a1,	// (0x00055b13) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd8a1,	// (0x00055b13) cell_fep_china_hwr2_fs_funtion_grid

0x52a7,	// (0x0004d519) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x6a65,	// (0x0004ecd7) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x6a65,	// (0x0004ecd7) cell_fep_china_hwr2_fs_funtion_grid_g1

0x6a73,	// (0x0004ece5) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x6a73,	// (0x0004ece5) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd2c,	// (0x00057f9e) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd2c,	// (0x00057f9e) cell_fep_china_hwr2_fs_funtion_grid_g

0xd8b9,	// (0x00055b2b) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd8b9,	// (0x00055b2b) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd8ce,	// (0x00055b40) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd8ce,	// (0x00055b40) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd31,	// (0x00057fa3) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd31,	// (0x00057fa3) cell_fep_china_hwr2_fs_funtion_grid_t

0x6aba,	// (0x0004ed2c) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x6ac2,	// (0x0004ed34) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x6aca,	// (0x0004ed3c) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd36,	// (0x00057fa8) popup_fep_china_hwr2_fs_control_bar_grid_g

0x6ad2,	// (0x0004ed44) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x6ad2,	// (0x0004ed44) cell_fep_china_hwr2_fs_candidate_grid

0x6af1,	// (0x0004ed63) popup_fep_china_hwr2_fs_candidate_grid_g20

0x6af9,	// (0x0004ed6b) popup_fep_china_hwr2_fs_candidate_grid_g21

0x52a7,	// (0x0004d519) cell_fep_china_hwr2_fs_candidate_grid_g1

0x52a7,	// (0x0004d519) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb56,	// (0x00057dc8) cell_fep_china_hwr2_fs_candidate_grid_g

0x6b01,	// (0x0004ed73) cell_fep_china_hwr2_fs_candidate_grid_t1

0x2773,	// (0x0004a9e5) clock_nsta_pane_cp_24_ParamLimits

0x2773,	// (0x0004a9e5) clock_nsta_pane_cp_24

0x27f3,	// (0x0004aa65) indicator_nsta_pane_cp_24_ParamLimits

0x27f3,	// (0x0004aa65) indicator_nsta_pane_cp_24

0x38f2,	// (0x0004bb64) heading_pane_g1

0x0001,

0xf8d1,	// (0x00057b43) heading_pane_g

0x4382,	// (0x0004c5f4) grid_sct_catagory_button_pane

0x43b4,	// (0x0004c626) scroll_pane_cp5_ParamLimits

0x4ef3,	// (0x0004d165) button_value_adjust_pane_cp5_ParamLimits

0x4ef3,	// (0x0004d165) button_value_adjust_pane_cp5

0x4fd8,	// (0x0004d24a) form2_midp_time_pane_ParamLimits

0x6b0f,	// (0x0004ed81) cell_sct_catagory_button_pane_ParamLimits

0x6b0f,	// (0x0004ed81) cell_sct_catagory_button_pane

0x526c,	// (0x0004d4de) bg_button_pane_cp01_ParamLimits

0x526c,	// (0x0004d4de) bg_button_pane_cp01

0x52a7,	// (0x0004d519) cell_sct_catagory_button_pane_g1

0xbc5d,	// (0x00053ecf) popup_tb_extension_window

0xd8ea,	// (0x00055b5c) aid_size_cell_ext_ParamLimits

0xd8ea,	// (0x00055b5c) aid_size_cell_ext

0xa870,	// (0x00052ae2) bg_tb_trans_pane_cp1_ParamLimits

0xa870,	// (0x00052ae2) bg_tb_trans_pane_cp1

0xd910,	// (0x00055b82) grid_tb_ext_pane_ParamLimits

0xd910,	// (0x00055b82) grid_tb_ext_pane

0xd950,	// (0x00055bc2) cell_tb_ext_pane_ParamLimits

0xd950,	// (0x00055bc2) cell_tb_ext_pane

0xd978,	// (0x00055bea) cell_tb_ext_pane_g1_ParamLimits

0xd978,	// (0x00055bea) cell_tb_ext_pane_g1

0x6ba5,	// (0x0004ee17) cell_tb_ext_pane_t1

0x6e72,	// (0x0004f0e4) list_highlight_pane_cp11_ParamLimits

0x6e72,	// (0x0004f0e4) list_highlight_pane_cp11

0xf433,	// (0x000576a5) popup_uni_indicator_window_ParamLimits

0xf433,	// (0x000576a5) popup_uni_indicator_window

0xab4e,	// (0x00052dc0) bg_popup_sub_pane_cp14

0x6bc0,	// (0x0004ee32) list_uniindi_pane

0x6bcc,	// (0x0004ee3e) uniindi_top_pane

0x6e72,	// (0x0004f0e4) bg_uniindi_top_pane

0x6bed,	// (0x0004ee5f) uniindi_top_pane_g1

0x6c03,	// (0x0004ee75) uniindi_top_pane_g2

0x0003,

0xfd3d,	// (0x00057faf) uniindi_top_pane_g

0x6c2d,	// (0x0004ee9f) uniindi_top_pane_t1

0x6c59,	// (0x0004eecb) list_single_uniindi_pane_ParamLimits

0x6c59,	// (0x0004eecb) list_single_uniindi_pane

0x52a7,	// (0x0004d519) bg_uniindi_top_pane_g1

0x6c6b,	// (0x0004eedd) list_single_uniindi_pane_g1

0x6c7e,	// (0x0004eef0) list_single_uniindi_pane_t1

0x6ccf,	// (0x0004ef41) control_bg_pane

0x6ca3,	// (0x0004ef15) bg_sctrl_sk_pane_cp1

0x6cac,	// (0x0004ef1e) bg_sctrl_sk_pane_cp2

0x6cb5,	// (0x0004ef27) control_bg_pane_g1

0x6cbe,	// (0x0004ef30) control_bg_pane_g2

0x0001,

0xfd46,	// (0x00057fb8) control_bg_pane_g

0x4d14,	// (0x0004cf86) cell_indicator_nsta_pane_g1_ParamLimits

0xcf31,	// (0x000551a3) cell_indicator_nsta_pane_g2_ParamLimits

0xfaba,	// (0x00057d2c) cell_indicator_nsta_pane_g_ParamLimits

0xf233,	// (0x000574a5) form2_midp_time_pane_t1_ParamLimits

0x13d8,	// (0x0004964a) main_idle_act4_pane_ParamLimits

0x13d8,	// (0x0004964a) main_idle_act4_pane

0xbc5d,	// (0x00053ecf) popup_tb_extension_window_ParamLimits

0xd938,	// (0x00055baa) tb_ext_find_pane_ParamLimits

0xd938,	// (0x00055baa) tb_ext_find_pane

0x6ff7,	// (0x0004f269) ai_gene_pane_1_cp1

0x245c,	// (0x0004a6ce) ai_gene_pane_2_cp1

0x6fff,	// (0x0004f271) list_single_idle_plugin_calendar_pane

0x7008,	// (0x0004f27a) list_single_idle_plugin_notification_pane

0x7011,	// (0x0004f283) list_single_idle_plugin_player_pane

0xd995,	// (0x00055c07) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd995,	// (0x00055c07) list_single_idle_plugin_shortcut_pane

0xd9bd,	// (0x00055c2f) main_idle_act4_pane_t1

0xd9d5,	// (0x00055c47) main_idle_act4_pane_t2

0x0001,

0xfd4b,	// (0x00057fbd) main_idle_act4_pane_t

0xd9ed,	// (0x00055c5f) middle_sk_idle_act4_pane_ParamLimits

0xd9ed,	// (0x00055c5f) middle_sk_idle_act4_pane

0xda09,	// (0x00055c7b) popup_clock_digital_analogue_window_cp2

0xda30,	// (0x00055ca2) shortcut_wheel_idle_act4_pane_ParamLimits

0xda30,	// (0x00055ca2) shortcut_wheel_idle_act4_pane

0x52a7,	// (0x0004d519) shortcut_wheel_idle_act4_pane_g1

0x52a7,	// (0x0004d519) shortcut_wheel_idle_act4_pane_g2

0x52a7,	// (0x0004d519) shortcut_wheel_idle_act4_pane_g3

0x52a7,	// (0x0004d519) shortcut_wheel_idle_act4_pane_g4

0x52a7,	// (0x0004d519) shortcut_wheel_idle_act4_pane_g5

0x70a4,	// (0x0004f316) shortcut_wheel_idle_act4_pane_g6

0x70ac,	// (0x0004f31e) shortcut_wheel_idle_act4_pane_g7

0x70b4,	// (0x0004f326) shortcut_wheel_idle_act4_pane_g8

0x70bc,	// (0x0004f32e) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd50,	// (0x00057fc2) shortcut_wheel_idle_act4_pane_g

0xd0ed,	// (0x0005535f) middle_sk_idle_act4_pane_g1_ParamLimits

0xd0ed,	// (0x0005535f) middle_sk_idle_act4_pane_g1

0xdaad,	// (0x00055d1f) middle_sk_idle_act4_pane_g2_ParamLimits

0xdaad,	// (0x00055d1f) middle_sk_idle_act4_pane_g2

0x0001,

0xfd73,	// (0x00057fe5) middle_sk_idle_act4_pane_g_ParamLimits

0xfd73,	// (0x00057fe5) middle_sk_idle_act4_pane_g

0xdac5,	// (0x00055d37) middle_sk_idle_act4_pane_t1_ParamLimits

0xdac5,	// (0x00055d37) middle_sk_idle_act4_pane_t1

0xdaf4,	// (0x00055d66) grid_ai_shortcut_pane_ParamLimits

0xdaf4,	// (0x00055d66) grid_ai_shortcut_pane

0xdb11,	// (0x00055d83) list_highlight_pane_cp16_ParamLimits

0xdb11,	// (0x00055d83) list_highlight_pane_cp16

0xdb1e,	// (0x00055d90) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdb1e,	// (0x00055d90) list_single_idle_plugin_shortcut_pane_g1

0xdb2a,	// (0x00055d9c) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdb2a,	// (0x00055d9c) list_single_idle_plugin_shortcut_pane_g2

0xdb48,	// (0x00055dba) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdb48,	// (0x00055dba) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd78,	// (0x00057fea) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd78,	// (0x00057fea) list_single_idle_plugin_shortcut_pane_g

0xdb5d,	// (0x00055dcf) cell_ai_shortcut_pane_ParamLimits

0xdb5d,	// (0x00055dcf) cell_ai_shortcut_pane

0xdb73,	// (0x00055de5) cell_ai_shortcut_pane_g1_ParamLimits

0xdb73,	// (0x00055de5) cell_ai_shortcut_pane_g1

0x6ff7,	// (0x0004f269) ai_gene_pane_1_cp2

0x71ed,	// (0x0004f45f) ai_gene_pane_2_cp2

0x71f5,	// (0x0004f467) list_highlight_pane_cp15

0x71fe,	// (0x0004f470) list_single_idle_plugin_calendar_pane_g1

0x71f5,	// (0x0004f467) list_highlight_pane_cp17

0x7206,	// (0x0004f478) list_single_idle_plugin_calendar_pane_g1_copy1

0x720e,	// (0x0004f480) list_single_idle_plugin_player_pane_g1

0x45e9,	// (0x0004c85b) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd7f,	// (0x00057ff1) list_single_idle_plugin_player_pane_g

0x7216,	// (0x0004f488) list_single_idle_plugin_player_pane_t1

0x7224,	// (0x0004f496) list_single_idle_plugin_player_pane_t2

0x7232,	// (0x0004f4a4) list_single_idle_plugin_player_pane_t3

0x7240,	// (0x0004f4b2) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd84,	// (0x00057ff6) list_single_idle_plugin_player_pane_t

0x724e,	// (0x0004f4c0) wait_bar_pane_cp15

0x7256,	// (0x0004f4c8) grid_ai_notification_pane

0x45e9,	// (0x0004c85b) list_single_idle_plugin_notification_pane_g1

0xdb95,	// (0x00055e07) cell_ai_notification_pane_ParamLimits

0xdb95,	// (0x00055e07) cell_ai_notification_pane

0x726c,	// (0x0004f4de) cell_ai_notification_pane_g1

0x7274,	// (0x0004f4e6) cell_ai_notification_pane_t1

0xdba2,	// (0x00055e14) tb_ext_find_button_pane

0xdbaa,	// (0x00055e1c) tb_ext_find_pane_g1

0xdbb2,	// (0x00055e24) tb_ext_find_pane_t1

0xe8a2,	// (0x00056b14) tb_ext_find_button_pane_g1

0x72a0,	// (0x0004f512) tb_ext_find_button_pane_g2

0x0001,

0xfd8d,	// (0x00057fff) tb_ext_find_button_pane_g

0xd9bd,	// (0x00055c2f) main_idle_act4_pane_t1_ParamLimits

0xd9d5,	// (0x00055c47) main_idle_act4_pane_t2_ParamLimits

0xfd4b,	// (0x00057fbd) main_idle_act4_pane_t_ParamLimits

0xda09,	// (0x00055c7b) popup_clock_digital_analogue_window_cp2_ParamLimits

0xda20,	// (0x00055c92) sat_plugin_idle_act4_pane_ParamLimits

0xda20,	// (0x00055c92) sat_plugin_idle_act4_pane

0xdbc0,	// (0x00055e32) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdbc0,	// (0x00055e32) sat_plugin_idle_act4_pane_t1

0xdbd8,	// (0x00055e4a) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdbd8,	// (0x00055e4a) sat_plugin_idle_act4_pane_t2

0xdbf0,	// (0x00055e62) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdbf0,	// (0x00055e62) sat_plugin_idle_act4_pane_t3

0xdc08,	// (0x00055e7a) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdc08,	// (0x00055e7a) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd92,	// (0x00058004) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd92,	// (0x00058004) sat_plugin_idle_act4_pane_t

0xf3df,	// (0x00057651) popup_battery_window_ParamLimits

0xf3df,	// (0x00057651) popup_battery_window

0x6e72,	// (0x0004f0e4) bg_popup_sub_pane_cp25_ParamLimits

0x6e72,	// (0x0004f0e4) bg_popup_sub_pane_cp25

0x72f5,	// (0x0004f567) popup_battery_window_g1_ParamLimits

0x72f5,	// (0x0004f567) popup_battery_window_g1

0x7301,	// (0x0004f573) popup_battery_window_t1_ParamLimits

0x7301,	// (0x0004f573) popup_battery_window_t1

0x7313,	// (0x0004f585) popup_battery_window_t2_ParamLimits

0x7313,	// (0x0004f585) popup_battery_window_t2

0x0001,

0xfd9b,	// (0x0005800d) popup_battery_window_t_ParamLimits

0xfd9b,	// (0x0005800d) popup_battery_window_t

0xb3ab,	// (0x0005361d) midp_canvas_pane_ParamLimits

0xb406,	// (0x00053678) midp_keypad_pane_ParamLimits

0xb406,	// (0x00053678) midp_keypad_pane

0x266b,	// (0x0004a8dd) main_midp_pane_ParamLimits

0x4da0,	// (0x0004d012) signal_pane_g2_cp_ParamLimits

0xdc20,	// (0x00055e92) aid_size_cell_midp_keypad_ParamLimits

0xdc20,	// (0x00055e92) aid_size_cell_midp_keypad

0xdc3e,	// (0x00055eb0) midp_keyp_game_grid_pane_ParamLimits

0xdc3e,	// (0x00055eb0) midp_keyp_game_grid_pane

0xdc65,	// (0x00055ed7) midp_keyp_rocker_pane_ParamLimits

0xdc65,	// (0x00055ed7) midp_keyp_rocker_pane

0xdca4,	// (0x00055f16) midp_keyp_sk_left_pane_ParamLimits

0xdca4,	// (0x00055f16) midp_keyp_sk_left_pane

0xdcf8,	// (0x00055f6a) midp_keyp_sk_right_pane_ParamLimits

0xdcf8,	// (0x00055f6a) midp_keyp_sk_right_pane

0x6ccf,	// (0x0004ef41) bg_button_pane_cp03

0xdd4c,	// (0x00055fbe) midp_keyp_sk_left_pane_g1

0x6ccf,	// (0x0004ef41) bg_button_pane_cp04

0xdd4c,	// (0x00055fbe) midp_keyp_sk_right_pane_g1

0x52a7,	// (0x0004d519) midp_keyp_rocker_pane_g1

0xdd55,	// (0x00055fc7) keyp_game_cell_pane_ParamLimits

0xdd55,	// (0x00055fc7) keyp_game_cell_pane

0x6ccf,	// (0x0004ef41) bg_button_pane_cp02

0xdd7b,	// (0x00055fed) keyp_game_cell_pane_g1

0xa2eb,	// (0x0005255d) popup_fep_vkb2_window_ParamLimits

0xa2eb,	// (0x0005255d) popup_fep_vkb2_window

0xc3f2,	// (0x00054664) aid_size_cell_vkb2_ParamLimits

0xc3f2,	// (0x00054664) aid_size_cell_vkb2

0xc428,	// (0x0005469a) popup_fep_vkb2_window_g1_ParamLimits

0xc428,	// (0x0005469a) popup_fep_vkb2_window_g1

0xc478,	// (0x000546ea) vkb2_area_bottom_pane_ParamLimits

0xc478,	// (0x000546ea) vkb2_area_bottom_pane

0xc4d4,	// (0x00054746) vkb2_area_keypad_pane_ParamLimits

0xc4d4,	// (0x00054746) vkb2_area_keypad_pane

0xc522,	// (0x00054794) vkb2_area_top_pane_ParamLimits

0xc522,	// (0x00054794) vkb2_area_top_pane

0xc5a8,	// (0x0005481a) vkb2_top_entry_pane_ParamLimits

0xc5a8,	// (0x0005481a) vkb2_top_entry_pane

0xc5d5,	// (0x00054847) vkb2_top_grid_left_pane_ParamLimits

0xc5d5,	// (0x00054847) vkb2_top_grid_left_pane

0xc5f5,	// (0x00054867) vkb2_top_grid_right_pane_ParamLimits

0xc5f5,	// (0x00054867) vkb2_top_grid_right_pane

0x1b69,	// (0x00049ddb) vkb2_cell_keypad_pane_ParamLimits

0x1b69,	// (0x00049ddb) vkb2_cell_keypad_pane

0xc63b,	// (0x000548ad) vkb2_area_bottom_grid_pane_ParamLimits

0xc63b,	// (0x000548ad) vkb2_area_bottom_grid_pane

0xc665,	// (0x000548d7) vkb2_area_bottom_pane_g1_ParamLimits

0xc665,	// (0x000548d7) vkb2_area_bottom_pane_g1

0xc68b,	// (0x000548fd) vkb2_area_bottom_pane_g2_ParamLimits

0xc68b,	// (0x000548fd) vkb2_area_bottom_pane_g2

0xc6bc,	// (0x0005492e) vkb2_area_bottom_pane_g3_ParamLimits

0xc6bc,	// (0x0005492e) vkb2_area_bottom_pane_g3

0x0002,

0xfda0,	// (0x00058012) vkb2_area_bottom_pane_g_ParamLimits

0xfda0,	// (0x00058012) vkb2_area_bottom_pane_g

0x1d13,	// (0x00049f85) vkb2_top_cell_left_pane_ParamLimits

0x1d13,	// (0x00049f85) vkb2_top_cell_left_pane

0xdd84,	// (0x00055ff6) vkb2_top_entry_pane_g1_ParamLimits

0xdd84,	// (0x00055ff6) vkb2_top_entry_pane_g1

0xdd92,	// (0x00056004) vkb2_top_entry_pane_t1_ParamLimits

0xdd92,	// (0x00056004) vkb2_top_entry_pane_t1

0x74b6,	// (0x0004f728) vkb2_top_entry_pane_t2_ParamLimits

0x74b6,	// (0x0004f728) vkb2_top_entry_pane_t2

0x74e8,	// (0x0004f75a) vkb2_top_entry_pane_t3_ParamLimits

0x74e8,	// (0x0004f75a) vkb2_top_entry_pane_t3

0x0002,

0xfda7,	// (0x00058019) vkb2_top_entry_pane_t_ParamLimits

0xfda7,	// (0x00058019) vkb2_top_entry_pane_t

0xc726,	// (0x00054998) vkb2_top_grid_right_pane_g1_ParamLimits

0xc726,	// (0x00054998) vkb2_top_grid_right_pane_g1

0x1d76,	// (0x00049fe8) vkb2_top_grid_right_pane_g2_ParamLimits

0x1d76,	// (0x00049fe8) vkb2_top_grid_right_pane_g2

0x1d8e,	// (0x0004a000) vkb2_top_grid_right_pane_g3_ParamLimits

0x1d8e,	// (0x0004a000) vkb2_top_grid_right_pane_g3

0xc73c,	// (0x000549ae) vkb2_top_grid_right_pane_g4_ParamLimits

0xc73c,	// (0x000549ae) vkb2_top_grid_right_pane_g4

0x0003,

0xfdae,	// (0x00058020) vkb2_top_grid_right_pane_g_ParamLimits

0xfdae,	// (0x00058020) vkb2_top_grid_right_pane_g

0x1dbc,	// (0x0004a02e) vkb2_top_cell_left_pane_g1

0x1dd3,	// (0x0004a045) vkb2_cell_keypad_pane_g1_ParamLimits

0x1dd3,	// (0x0004a045) vkb2_cell_keypad_pane_g1

0x750c,	// (0x0004f77e) vkb2_cell_keypad_pane_t1_ParamLimits

0x750c,	// (0x0004f77e) vkb2_cell_keypad_pane_t1

0x1de1,	// (0x0004a053) vkb2_cell_bottom_grid_pane_ParamLimits

0x1de1,	// (0x0004a053) vkb2_cell_bottom_grid_pane

0x1e1a,	// (0x0004a08c) vkb2_cell_bottom_grid_pane_g1

0xda51,	// (0x00055cc3) aid_call2_pane_cp02

0xda59,	// (0x00055ccb) aid_call_pane_cp02

0xda61,	// (0x00055cd3) clock_digital_number_pane_cp10

0xda69,	// (0x00055cdb) clock_digital_number_pane_cp11

0xda71,	// (0x00055ce3) clock_digital_number_pane_cp12

0xda79,	// (0x00055ceb) clock_digital_number_pane_cp13

0xda81,	// (0x00055cf3) clock_digital_separator_pane_cp10

0xe8a2,	// (0x00056b14) popup_clock_digital_analogue_window_cp2_g1

0xe8a2,	// (0x00056b14) popup_clock_digital_analogue_window_cp2_g2

0xda89,	// (0x00055cfb) popup_clock_digital_analogue_window_cp2_g3

0xe8a2,	// (0x00056b14) popup_clock_digital_analogue_window_cp2_g4

0xda89,	// (0x00055cfb) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd63,	// (0x00057fd5) popup_clock_digital_analogue_window_cp2_g

0xda91,	// (0x00055d03) popup_clock_digital_analogue_window_cp2_t1

0xda9f,	// (0x00055d11) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd6e,	// (0x00057fe0) popup_clock_digital_analogue_window_cp2_t

0x52a7,	// (0x0004d519) clock_digital_number_pane_cp10_g1

0x52a7,	// (0x0004d519) clock_digital_number_pane_cp10_g2

0x0001,

0xfb56,	// (0x00057dc8) clock_digital_number_pane_cp10_g

0x52a7,	// (0x0004d519) clock_digital_separator_pane_cp10_g1

0x52a7,	// (0x0004d519) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb56,	// (0x00057dc8) clock_digital_separator_pane_cp10_g

0x6c0f,	// (0x0004ee81) uniindi_top_pane_g3

0x6c20,	// (0x0004ee92) uniindi_top_pane_g4

0x1bf4,	// (0x00049e66) vkb2_row_keypad_pane_ParamLimits

0x1bf4,	// (0x00049e66) vkb2_row_keypad_pane

0x1e36,	// (0x0004a0a8) vkb2_cell_t_keypad_pane_ParamLimits

0x1e36,	// (0x0004a0a8) vkb2_cell_t_keypad_pane

0x1e46,	// (0x0004a0b8) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x1e46,	// (0x0004a0b8) vkb2_cell_t_keypad_pane_cp08

0x1e5b,	// (0x0004a0cd) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x1e5b,	// (0x0004a0cd) vkb2_cell_t_keypad_pane_cp09

0x1e6f,	// (0x0004a0e1) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x1e6f,	// (0x0004a0e1) vkb2_cell_t_keypad_pane_cp01

0x1e80,	// (0x0004a0f2) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x1e80,	// (0x0004a0f2) vkb2_cell_t_keypad_pane_cp02

0x1e91,	// (0x0004a103) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x1e91,	// (0x0004a103) vkb2_cell_t_keypad_pane_cp03

0x1ea2,	// (0x0004a114) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x1ea2,	// (0x0004a114) vkb2_cell_t_keypad_pane_cp04

0x1eb3,	// (0x0004a125) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x1eb3,	// (0x0004a125) vkb2_cell_t_keypad_pane_cp05

0x1ec4,	// (0x0004a136) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x1ec4,	// (0x0004a136) vkb2_cell_t_keypad_pane_cp06

0x1ed7,	// (0x0004a149) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x1ed7,	// (0x0004a149) vkb2_cell_t_keypad_pane_cp07

0x1eec,	// (0x0004a15e) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x1eec,	// (0x0004a15e) vkb2_cell_t_keypad_pane_cp10

0x5522,	// (0x0004d794) vkb2_cell_t_keypad_pane_g1

0x7523,	// (0x0004f795) vkb2_cell_t_keypad_pane_t1

0x6ccf,	// (0x0004ef41) popup_grid_graphic2_window

0xddcb,	// (0x0005603d) aid_size_cell_graphic2_ParamLimits

0xddcb,	// (0x0005603d) aid_size_cell_graphic2

0xde09,	// (0x0005607b) bg_popup_window_pane_cp21_ParamLimits

0xde09,	// (0x0005607b) bg_popup_window_pane_cp21

0xde17,	// (0x00056089) graphic2_pages_pane_ParamLimits

0xde17,	// (0x00056089) graphic2_pages_pane

0xde6f,	// (0x000560e1) grid_graphic2_control_pane_ParamLimits

0xde6f,	// (0x000560e1) grid_graphic2_control_pane

0xdeb7,	// (0x00056129) grid_graphic2_pane_ParamLimits

0xdeb7,	// (0x00056129) grid_graphic2_pane

0xdf42,	// (0x000561b4) cell_graphic2_pane

0x6ccf,	// (0x0004ef41) main_comp_mode_pane

0x6480,	// (0x0004e6f2) list_ai3_gene_pane_ParamLimits

0xd78e,	// (0x00055a00) bg_popup_window_pane_cp19_ParamLimits

0x6854,	// (0x0004eac6) bg_touch_area_indi_pane_ParamLimits

0x6854,	// (0x0004eac6) bg_touch_area_indi_pane

0x686a,	// (0x0004eadc) bg_touch_area_indi_pane_cp01_ParamLimits

0x686a,	// (0x0004eadc) bg_touch_area_indi_pane_cp01

0x6882,	// (0x0004eaf4) bg_touch_area_indi_pane_cp02_ParamLimits

0x6882,	// (0x0004eaf4) bg_touch_area_indi_pane_cp02

0x689c,	// (0x0004eb0e) bg_touch_area_indi_pane_cp03_ParamLimits

0x689c,	// (0x0004eb0e) bg_touch_area_indi_pane_cp03

0x68b6,	// (0x0004eb28) popup_slider_window_g1_ParamLimits

0x68d2,	// (0x0004eb44) popup_slider_window_g2_ParamLimits

0x68ee,	// (0x0004eb60) popup_slider_window_g3_ParamLimits

0xfcf8,	// (0x00057f6a) popup_slider_window_g_ParamLimits

0x694a,	// (0x0004ebbc) popup_slider_window_t1_ParamLimits

0x69be,	// (0x0004ec30) small_volume_slider_vertical_pane_ParamLimits

0xdf42,	// (0x000561b4) cell_graphic2_pane_ParamLimits

0xdfa5,	// (0x00056217) bg_button_pane_cp10_ParamLimits

0xdfa5,	// (0x00056217) bg_button_pane_cp10

0xdfb8,	// (0x0005622a) bg_button_pane_cp11_ParamLimits

0xdfb8,	// (0x0005622a) bg_button_pane_cp11

0xdfcb,	// (0x0005623d) graphic2_pages_pane_g1_ParamLimits

0xdfcb,	// (0x0005623d) graphic2_pages_pane_g1

0xdfe6,	// (0x00056258) graphic2_pages_pane_g2_ParamLimits

0xdfe6,	// (0x00056258) graphic2_pages_pane_g2

0x0001,

0xfdbc,	// (0x0005802e) graphic2_pages_pane_g_ParamLimits

0xfdbc,	// (0x0005802e) graphic2_pages_pane_g

0xdffe,	// (0x00056270) graphic2_pages_pane_t1_ParamLimits

0xdffe,	// (0x00056270) graphic2_pages_pane_t1

0xe016,	// (0x00056288) cell_graphic2_control_pane_ParamLimits

0xe016,	// (0x00056288) cell_graphic2_control_pane

0xe04a,	// (0x000562bc) cell_graphic2_pane_g1_ParamLimits

0xe04a,	// (0x000562bc) cell_graphic2_pane_g1

0xd0fb,	// (0x0005536d) cell_graphic2_pane_g2_ParamLimits

0xd0fb,	// (0x0005536d) cell_graphic2_pane_g2

0xe057,	// (0x000562c9) cell_graphic2_pane_g3_ParamLimits

0xe057,	// (0x000562c9) cell_graphic2_pane_g3

0xd108,	// (0x0005537a) cell_graphic2_pane_g4_ParamLimits

0xd108,	// (0x0005537a) cell_graphic2_pane_g4

0xe064,	// (0x000562d6) cell_graphic2_pane_g5_ParamLimits

0xe064,	// (0x000562d6) cell_graphic2_pane_g5

0x0004,

0xfdc1,	// (0x00058033) cell_graphic2_pane_g_ParamLimits

0xfdc1,	// (0x00058033) cell_graphic2_pane_g

0xe084,	// (0x000562f6) cell_graphic2_pane_t1_ParamLimits

0xe084,	// (0x000562f6) cell_graphic2_pane_t1

0x38e6,	// (0x0004bb58) grid_highlight_pane_cp11_ParamLimits

0x38e6,	// (0x0004bb58) grid_highlight_pane_cp11

0x6e72,	// (0x0004f0e4) bg_button_pane_cp05

0xe0b9,	// (0x0005632b) cell_graphic2_control_pane_g1

0x52a7,	// (0x0004d519) bg_touch_area_indi_pane_g1

0x77fd,	// (0x0004fa6f) aid_cmod_rocker_key_size

0x7807,	// (0x0004fa79) aid_cmode_itu_key_size

0x7811,	// (0x0004fa83) main_cmode_video_pane

0x781b,	// (0x0004fa8d) main_comp_mode_itu_pane

0x7827,	// (0x0004fa99) main_comp_mode_rocker_pane

0x7833,	// (0x0004faa5) cell_cmode_rocker_pane_ParamLimits

0x7833,	// (0x0004faa5) cell_cmode_rocker_pane

0x7847,	// (0x0004fab9) cell_cmode_itu_pane_ParamLimits

0x7847,	// (0x0004fab9) cell_cmode_itu_pane

0xab4e,	// (0x00052dc0) bg_button_pane_cp06_ParamLimits

0xab4e,	// (0x00052dc0) bg_button_pane_cp06

0x5522,	// (0x0004d794) cell_cmode_rocker_pane_g1_ParamLimits

0x5522,	// (0x0004d794) cell_cmode_rocker_pane_g1

0x6a65,	// (0x0004ecd7) cell_cmode_rocker_pane_g2_ParamLimits

0x6a65,	// (0x0004ecd7) cell_cmode_rocker_pane_g2

0x0001,

0xfdd1,	// (0x00058043) cell_cmode_rocker_pane_g_ParamLimits

0xfdd1,	// (0x00058043) cell_cmode_rocker_pane_g

0x6ccf,	// (0x0004ef41) bg_button_pane_cp07

0x785e,	// (0x0004fad0) cell_cmode_itu_pane_g1

0x7867,	// (0x0004fad9) cell_cmode_itu_pane_t1

0x7875,	// (0x0004fae7) cell_cmode_itu_pane_t2

0x0001,

0xfdd6,	// (0x00058048) cell_cmode_itu_pane_t

0x6c93,	// (0x0004ef05) aid_touch_ctrl_left

0x6c9b,	// (0x0004ef0d) aid_touch_ctrl_right

0x6ccf,	// (0x0004ef41) compa_mode_pane

0xe0df,	// (0x00056351) aid_cmod_rocker_key_size_cp

0xe0e9,	// (0x0005635b) aid_cmode_itu_key_size_cp

0x7897,	// (0x0004fb09) compa_mode_pane_g1

0x789f,	// (0x0004fb11) compa_mode_pane_g2

0x78a7,	// (0x0004fb19) compa_mode_pane_g3

0x0002,

0xfddb,	// (0x0005804d) compa_mode_pane_g

0xe0f3,	// (0x00056365) main_comp_mode_itu_pane_cp

0xe0fb,	// (0x0005636d) main_comp_mode_rocker_pane_cp

0xe103,	// (0x00056375) cell_cmode_itu_pane_cp_ParamLimits

0xe103,	// (0x00056375) cell_cmode_itu_pane_cp

0xe118,	// (0x0005638a) cell_cmode_rocker_pane_cp_ParamLimits

0xe118,	// (0x0005638a) cell_cmode_rocker_pane_cp

0xab4e,	// (0x00052dc0) bg_button_pane_cp06_cp_ParamLimits

0xab4e,	// (0x00052dc0) bg_button_pane_cp06_cp

0x5522,	// (0x0004d794) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x5522,	// (0x0004d794) cell_cmode_rocker_pane_g1_cp

0x52a7,	// (0x0004d519) cell_cmode_rocker_pane_g2_cp

0x6ccf,	// (0x0004ef41) bg_button_pane_cp07_cp

0xe12a,	// (0x0005639c) cell_cmode_itu_pane_g1_cp

0xe133,	// (0x000563a5) cell_cmode_itu_pane_t1_cp

0xe133,	// (0x000563a5) cell_cmode_itu_pane_t2_cp

0xcd69,	// (0x00054fdb) settings_code_pane_cp2

0x6d31,	// (0x0004efa3) bg_popup_window_pane_cp3_ParamLimits

0xa700,	// (0x00052972) heading_pane_cp3_ParamLimits

0xa70c,	// (0x0005297e) listscroll_popup_graphic_pane_ParamLimits

0x13e6,	// (0x00049658) fep_hwr_aid_pane_ParamLimits

0x18c8,	// (0x00049b3a) aid_touch_sctrl_top_ParamLimits

0x18d5,	// (0x00049b47) sctrl_sk_top_pane_g1_ParamLimits

0x5522,	// (0x0004d794) sctrl_sk_top_pane_g2_ParamLimits

0xfd11,	// (0x00057f83) sctrl_sk_top_pane_g_ParamLimits

0x18e2,	// (0x00049b54) sctrl_sk_top_pane_t1_ParamLimits

0x18c8,	// (0x00049b3a) aid_touch_sctrl_bottom_ParamLimits

0x18e2,	// (0x00049b54) sctrl_sk_bottom_pane_t1_ParamLimits

0x6bd9,	// (0x0004ee4b) aid_area_touch_clock

0xc56a,	// (0x000547dc) aid_vkb2_area_top_pane_cell_ParamLimits

0xc56a,	// (0x000547dc) aid_vkb2_area_top_pane_cell

0xc615,	// (0x00054887) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xc615,	// (0x00054887) aid_vkb2_area_bottom_pane_cell

0x746e,	// (0x0004f6e0) popup_char_count_window

0x78fd,	// (0x0004fb6f) popup_char_count_window_g1

0x7906,	// (0x0004fb78) popup_char_count_window_g2

0x790f,	// (0x0004fb81) popup_char_count_window_g3

0x0002,

0xfde2,	// (0x00058054) popup_char_count_window_g

0x7918,	// (0x0004fb8a) popup_char_count_window_t1

0x1985,	// (0x00049bf7) popup_fep_char_preview_window_ParamLimits

0x1985,	// (0x00049bf7) popup_fep_char_preview_window

0xc58a,	// (0x000547fc) vkb2_top_candi_pane_ParamLimits

0xc58a,	// (0x000547fc) vkb2_top_candi_pane

0xe141,	// (0x000563b3) cell_vkb2_top_candi_pane_ParamLimits

0xe141,	// (0x000563b3) cell_vkb2_top_candi_pane

0x326f,	// (0x0004b4e1) bg_popup_fep_char_preview_window_ParamLimits

0x326f,	// (0x0004b4e1) bg_popup_fep_char_preview_window

0x1f01,	// (0x0004a173) popup_fep_char_preview_window_t1_ParamLimits

0x1f01,	// (0x0004a173) popup_fep_char_preview_window_t1

0x7977,	// (0x0004fbe9) bg_popup_fep_char_preview_window_g1

0x797f,	// (0x0004fbf1) bg_popup_fep_char_preview_window_g2

0x7987,	// (0x0004fbf9) bg_popup_fep_char_preview_window_g3

0x798f,	// (0x0004fc01) bg_popup_fep_char_preview_window_g4

0x7997,	// (0x0004fc09) bg_popup_fep_char_preview_window_g5

0x1f3b,	// (0x0004a1ad) bg_popup_fep_char_preview_window_g6

0x799f,	// (0x0004fc11) bg_popup_fep_char_preview_window_g7

0x79a7,	// (0x0004fc19) bg_popup_fep_char_preview_window_g8

0x79af,	// (0x0004fc21) bg_popup_fep_char_preview_window_g9

0x0008,

0xfde9,	// (0x0005805b) bg_popup_fep_char_preview_window_g

0x5522,	// (0x0004d794) cell_vkb2_top_candi_pane_g1_ParamLimits

0x5522,	// (0x0004d794) cell_vkb2_top_candi_pane_g1

0x5863,	// (0x0004dad5) cell_vkb2_top_candi_pane_g2_ParamLimits

0x5863,	// (0x0004dad5) cell_vkb2_top_candi_pane_g2

0x5884,	// (0x0004daf6) cell_vkb2_top_candi_pane_g3_ParamLimits

0x5884,	// (0x0004daf6) cell_vkb2_top_candi_pane_g3

0x1f43,	// (0x0004a1b5) cell_vkb2_top_candi_pane_g4_ParamLimits

0x1f43,	// (0x0004a1b5) cell_vkb2_top_candi_pane_g4

0x79b7,	// (0x0004fc29) cell_vkb2_top_candi_pane_g5_ParamLimits

0x79b7,	// (0x0004fc29) cell_vkb2_top_candi_pane_g5

0x6a65,	// (0x0004ecd7) cell_vkb2_top_candi_pane_g6_ParamLimits

0x6a65,	// (0x0004ecd7) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdfc,	// (0x0005806e) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdfc,	// (0x0005806e) cell_vkb2_top_candi_pane_g

0x1f64,	// (0x0004a1d6) cell_vkb2_top_candi_pane_t1

0x11d1,	// (0x00049443) aid_size_touch_slider_mark_ParamLimits

0x11d1,	// (0x00049443) aid_size_touch_slider_mark

0xde53,	// (0x000560c5) grid_graphic2_catg_pane_ParamLimits

0xde53,	// (0x000560c5) grid_graphic2_catg_pane

0xdf11,	// (0x00056183) popup_grid_graphic2_window_t1_ParamLimits

0xdf11,	// (0x00056183) popup_grid_graphic2_window_t1

0xdf27,	// (0x00056199) popup_grid_graphic2_window_t2_ParamLimits

0xdf27,	// (0x00056199) popup_grid_graphic2_window_t2

0x0001,

0xfdb7,	// (0x00058029) popup_grid_graphic2_window_t_ParamLimits

0xfdb7,	// (0x00058029) popup_grid_graphic2_window_t

0x6e72,	// (0x0004f0e4) bg_button_pane_cp05_ParamLimits

0xe0b9,	// (0x0005632b) cell_graphic2_control_pane_g1_ParamLimits

0xe1ab,	// (0x0005641d) cell_graphic2_catg_pane_ParamLimits

0xe1ab,	// (0x0005641d) cell_graphic2_catg_pane

0x6ccf,	// (0x0004ef41) bg_button_pane_cp12

0xe1bd,	// (0x0005642f) cell_graphic2_catg_pane_g1

0x6ba5,	// (0x0004ee17) cell_tb_ext_pane_t1_ParamLimits

0x1d33,	// (0x00049fa5) vkb2_top_cell_right_narrow_pane_ParamLimits

0x1d33,	// (0x00049fa5) vkb2_top_cell_right_narrow_pane

0x1d4b,	// (0x00049fbd) vkb2_top_cell_right_wide_pane_ParamLimits

0x1d4b,	// (0x00049fbd) vkb2_top_cell_right_wide_pane

0x13d8,	// (0x0004964a) bg_vkb2_func_pane_ParamLimits

0x13d8,	// (0x0004964a) bg_vkb2_func_pane

0x1dbc,	// (0x0004a02e) vkb2_top_cell_left_pane_g1_ParamLimits

0x13d8,	// (0x0004964a) bg_vkb2_fuc_pane_cp03_ParamLimits

0x13d8,	// (0x0004964a) bg_vkb2_fuc_pane_cp03

0x1e1a,	// (0x0004a08c) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x2b9f,	// (0x0004ae11) bg_vkb2_func_pane_g1

0x2ba7,	// (0x0004ae19) bg_vkb2_func_pane_g2

0x2bb7,	// (0x0004ae29) bg_vkb2_func_pane_g3

0x2baf,	// (0x0004ae21) bg_vkb2_func_pane_g4

0x2bbf,	// (0x0004ae31) bg_vkb2_func_pane_g5

0x2bc7,	// (0x0004ae39) bg_vkb2_func_pane_g6

0x2bcf,	// (0x0004ae41) bg_vkb2_func_pane_g7

0x2bd7,	// (0x0004ae49) bg_vkb2_func_pane_g8

0x2b97,	// (0x0004ae09) bg_vkb2_func_pane_g9

0x0008,

0xfe09,	// (0x0005807b) bg_vkb2_func_pane_g

0x13d8,	// (0x0004964a) bg_vkb2_fuc_pane_cp01_ParamLimits

0x13d8,	// (0x0004964a) bg_vkb2_fuc_pane_cp01

0x1dbc,	// (0x0004a02e) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x1dbc,	// (0x0004a02e) vkb2_top_cell_right_wide_pane_g1

0x13d8,	// (0x0004964a) bg_vkb2_fuc_pane_cp02_ParamLimits

0x13d8,	// (0x0004964a) bg_vkb2_fuc_pane_cp02

0x1e1a,	// (0x0004a08c) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x1e1a,	// (0x0004a08c) vkb2_top_cell_right_narrow_pane_g1

0xd6c8,	// (0x0005593a) aid_touch_area_decrease_ParamLimits

0xd6c8,	// (0x0005593a) aid_touch_area_decrease

0xd702,	// (0x00055974) aid_touch_area_increase_ParamLimits

0xd702,	// (0x00055974) aid_touch_area_increase

0xd72a,	// (0x0005599c) aid_touch_area_mute_ParamLimits

0xd72a,	// (0x0005599c) aid_touch_area_mute

0xd75a,	// (0x000559cc) aid_touch_area_slider_ParamLimits

0xd75a,	// (0x000559cc) aid_touch_area_slider

0xd79a,	// (0x00055a0c) popup_slider_window_g4_ParamLimits

0xd79a,	// (0x00055a0c) popup_slider_window_g4

0xd7c2,	// (0x00055a34) popup_slider_window_g5_ParamLimits

0xd7c2,	// (0x00055a34) popup_slider_window_g5

0xd7f6,	// (0x00055a68) popup_slider_window_g6_ParamLimits

0xd7f6,	// (0x00055a68) popup_slider_window_g6

0x6978,	// (0x0004ebea) popup_slider_window_t2_ParamLimits

0x6978,	// (0x0004ebea) popup_slider_window_t2

0x0001,

0xfd05,	// (0x00057f77) popup_slider_window_t_ParamLimits

0xfd05,	// (0x00057f77) popup_slider_window_t

0xd812,	// (0x00055a84) slider_pane_ParamLimits

0xd812,	// (0x00055a84) slider_pane

0x79f3,	// (0x0004fc65) slider_pane_g1_ParamLimits

0x79f3,	// (0x0004fc65) slider_pane_g1

0x7a07,	// (0x0004fc79) slider_pane_g2_ParamLimits

0x7a07,	// (0x0004fc79) slider_pane_g2

0x7a1d,	// (0x0004fc8f) slider_pane_g3_ParamLimits

0x7a1d,	// (0x0004fc8f) slider_pane_g3

0x0003,

0xfe1c,	// (0x0005808e) slider_pane_g_ParamLimits

0xfe1c,	// (0x0005808e) slider_pane_g

0xbca9,	// (0x00053f1b) popup_tb_float_extension_window_ParamLimits

0xbca9,	// (0x00053f1b) popup_tb_float_extension_window

0x7a49,	// (0x0004fcbb) aid_size_cell_tb_float_ext

0x6ccf,	// (0x0004ef41) bg_popup_sub_window_cp28

0x7a55,	// (0x0004fcc7) grid_tb_float_ext_pane

0x7a61,	// (0x0004fcd3) cell_tb_float_ext_pane_ParamLimits

0x7a61,	// (0x0004fcd3) cell_tb_float_ext_pane

0x7a7d,	// (0x0004fcef) cell_tb_float_ext_pane_g1

0x7a86,	// (0x0004fcf8) grid_highlight_pane_cp12

0xc2eb,	// (0x0005455d) cell_last_hwr_side_pane_ParamLimits

0xc2eb,	// (0x0005455d) cell_last_hwr_side_pane

0x52a7,	// (0x0004d519) cell_last_hwr_side_pane_g1

0x7a8f,	// (0x0004fd01) cell_last_hwr_side_pane_g2

0x0001,

0xfe25,	// (0x00058097) cell_last_hwr_side_pane_g

0xc6f1,	// (0x00054963) vkb2_area_bottom_space_btn_pane_ParamLimits

0xc6f1,	// (0x00054963) vkb2_area_bottom_space_btn_pane

0x5522,	// (0x0004d794) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x7523,	// (0x0004f795) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x1f64,	// (0x0004a1d6) cell_vkb2_top_candi_pane_t1_ParamLimits

0x1f82,	// (0x0004a1f4) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x1f82,	// (0x0004a1f4) vkb2_area_bottom_space_btn_pane_g1

0x1fbc,	// (0x0004a22e) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x1fbc,	// (0x0004a22e) vkb2_area_bottom_space_btn_pane_g2

0x1ff2,	// (0x0004a264) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x1ff2,	// (0x0004a264) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe2a,	// (0x0005809c) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe2a,	// (0x0005809c) vkb2_area_bottom_space_btn_pane_g

0x148f,	// (0x00049701) cel_fep_hwr_func_pane_ParamLimits

0x148f,	// (0x00049701) cel_fep_hwr_func_pane

0xc2c0,	// (0x00054532) cell_hwr_side_button_pane_ParamLimits

0xc2c0,	// (0x00054532) cell_hwr_side_button_pane

0x6bd9,	// (0x0004ee4b) aid_area_touch_clock_ParamLimits

0x6e72,	// (0x0004f0e4) bg_uniindi_top_pane_ParamLimits

0x6bed,	// (0x0004ee5f) uniindi_top_pane_g1_ParamLimits

0x6c03,	// (0x0004ee75) uniindi_top_pane_g2_ParamLimits

0x6c0f,	// (0x0004ee81) uniindi_top_pane_g3_ParamLimits

0x6c20,	// (0x0004ee92) uniindi_top_pane_g4_ParamLimits

0xfd3d,	// (0x00057faf) uniindi_top_pane_g_ParamLimits

0x6c2d,	// (0x0004ee9f) uniindi_top_pane_t1_ParamLimits

0x6e72,	// (0x0004f0e4) bg_vkb2_func_pane_cp01_ParamLimits

0x6e72,	// (0x0004f0e4) bg_vkb2_func_pane_cp01

0x7a98,	// (0x0004fd0a) cel_fep_hwr_func_pane_g1_ParamLimits

0x7a98,	// (0x0004fd0a) cel_fep_hwr_func_pane_g1

0x6e72,	// (0x0004f0e4) bg_vkb2_func_pane_cp02_ParamLimits

0x6e72,	// (0x0004f0e4) bg_vkb2_func_pane_cp02

0x7a98,	// (0x0004fd0a) cell_hwr_side_button_pane_g1_ParamLimits

0x7a98,	// (0x0004fd0a) cell_hwr_side_button_pane_g1

0x2a18,	// (0x0004ac8a) status_pane_g4_ParamLimits

0x2a18,	// (0x0004ac8a) status_pane_g4

0x2a32,	// (0x0004aca4) status_pane_t1

0x5046,	// (0x0004d2b8) form2_midp_gauge_slider_cont_pane

0x504e,	// (0x0004d2c0) form2_midp_gauge_slider_pane_t1_ParamLimits

0xd033,	// (0x000552a5) form2_midp_gauge_slider_pane_t2_ParamLimits

0xd045,	// (0x000552b7) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb09,	// (0x00057d7b) form2_midp_gauge_slider_pane_t_ParamLimits

0x5084,	// (0x0004d2f6) form2_midp_slider_pane_ParamLimits

0x1945,	// (0x00049bb7) aid_size_cell_func_vkb2_ParamLimits

0x1945,	// (0x00049bb7) aid_size_cell_func_vkb2

0x7a35,	// (0x0004fca7) slider_pane_g4_ParamLimits

0x7a35,	// (0x0004fca7) slider_pane_g4

0xc752,	// (0x000549c4) form2_midp_gauge_slider_pane_t2_cp01

0xc760,	// (0x000549d2) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xc760,	// (0x000549d2) form2_midp_gauge_slider_pane_t3_cp01

0x2067,	// (0x0004a2d9) form2_midp_slider_pane_cp01

0x6ccf,	// (0x0004ef41) navi_smil_pane

0x7ad1,	// (0x0004fd43) navi_smil_pane_g1

0x7ad9,	// (0x0004fd4b) navi_smil_pane_t1

0x7aa6,	// (0x0004fd18) form2_midp_slider_pane_g1

0x7aaf,	// (0x0004fd21) form2_midp_slider_pane_g2

0x7ab7,	// (0x0004fd29) form2_midp_slider_pane_g3

0x7aa6,	// (0x0004fd18) form2_midp_slider_pane_g4

0xe1c6,	// (0x00056438) form2_midp_slider_pane_g5

0x0004,

0xfe33,	// (0x000580a5) form2_midp_slider_pane_g

0x202c,	// (0x0004a29e) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x202c,	// (0x0004a29e) vkb2_area_bottom_space_btn_pane_g4

0xbe8e,	// (0x00054100) lc0_navi_pane_ParamLimits

0xbe8e,	// (0x00054100) lc0_navi_pane

0xbefe,	// (0x00054170) lc0_stat_indi_pane_ParamLimits

0xbefe,	// (0x00054170) lc0_stat_indi_pane

0xbf13,	// (0x00054185) ls0_title_pane_ParamLimits

0xbf13,	// (0x00054185) ls0_title_pane

0xab4e,	// (0x00052dc0) bg_popup_sub_pane_cp14_ParamLimits

0x6bc0,	// (0x0004ee32) list_uniindi_pane_ParamLimits

0x6bcc,	// (0x0004ee3e) uniindi_top_pane_ParamLimits

0x6c6b,	// (0x0004eedd) list_single_uniindi_pane_g1_ParamLimits

0x6c7e,	// (0x0004eef0) list_single_uniindi_pane_t1_ParamLimits

0xc77d,	// (0x000549ef) lc0_stat_clock_pane_ParamLimits

0xc77d,	// (0x000549ef) lc0_stat_clock_pane

0xe1cf,	// (0x00056441) lc0_stat_indi_pane_g1_ParamLimits

0xe1cf,	// (0x00056441) lc0_stat_indi_pane_g1

0xe1dc,	// (0x0005644e) lc0_stat_indi_pane_g2_ParamLimits

0xe1dc,	// (0x0005644e) lc0_stat_indi_pane_g2

0x0001,

0xfe3e,	// (0x000580b0) lc0_stat_indi_pane_g_ParamLimits

0xfe3e,	// (0x000580b0) lc0_stat_indi_pane_g

0xc78a,	// (0x000549fc) lc0_uni_indicator_pane_ParamLimits

0xc78a,	// (0x000549fc) lc0_uni_indicator_pane

0xe1e9,	// (0x0005645b) ls0_title_pane_g1_ParamLimits

0xe1e9,	// (0x0005645b) ls0_title_pane_g1

0xe1fd,	// (0x0005646f) ls0_title_pane_t1_ParamLimits

0xe1fd,	// (0x0005646f) ls0_title_pane_t1

0xc797,	// (0x00054a09) lc0_uni_indicator_pane_g1_ParamLimits

0xc797,	// (0x00054a09) lc0_uni_indicator_pane_g1

0x7b4b,	// (0x0004fdbd) lc0_stat_clock_pane_t1

0x6ccf,	// (0x0004ef41) main_ai5_pane

0x7b59,	// (0x0004fdcb) ai5_sk_pane_ParamLimits

0x7b59,	// (0x0004fdcb) ai5_sk_pane

0xe22b,	// (0x0005649d) cell_ai5_widget_pane_ParamLimits

0xe22b,	// (0x0005649d) cell_ai5_widget_pane

0x8102,	// (0x00050374) aid_size_cell_widget_grid

0x8118,	// (0x0005038a) bg_ai5_widget_pane_ParamLimits

0x8118,	// (0x0005038a) bg_ai5_widget_pane

0x8182,	// (0x000503f4) cell_ai5_widget_pane_g2

0x8192,	// (0x00050404) cell_ai5_widget_pane_g3

0x81b1,	// (0x00050423) cell_ai5_widget_pane_g4

0x81bd,	// (0x0005042f) cell_ai5_widget_pane_g5

0xe582,	// (0x000567f4) cell_ai5_widget_pane_g6

0xe58e,	// (0x00056800) cell_ai5_widget_pane_g7

0x821d,	// (0x0005048f) cell_ai5_widget_pane_t1_ParamLimits

0x821d,	// (0x0005048f) cell_ai5_widget_pane_t1

0x823a,	// (0x000504ac) cell_ai5_widget_pane_t2_ParamLimits

0x823a,	// (0x000504ac) cell_ai5_widget_pane_t2

0x8252,	// (0x000504c4) cell_ai5_widget_pane_t3_ParamLimits

0x8252,	// (0x000504c4) cell_ai5_widget_pane_t3

0x826a,	// (0x000504dc) cell_ai5_widget_pane_t4_ParamLimits

0x826a,	// (0x000504dc) cell_ai5_widget_pane_t4

0x8284,	// (0x000504f6) cell_ai5_widget_pane_t5_ParamLimits

0x8284,	// (0x000504f6) cell_ai5_widget_pane_t5

0x82a3,	// (0x00050515) cell_ai5_widget_pane_t6_ParamLimits

0x82a3,	// (0x00050515) cell_ai5_widget_pane_t6

0x82b5,	// (0x00050527) cell_ai5_widget_pane_t7_ParamLimits

0x82b5,	// (0x00050527) cell_ai5_widget_pane_t7

0x82ce,	// (0x00050540) cell_ai5_widget_pane_t8_ParamLimits

0x82ce,	// (0x00050540) cell_ai5_widget_pane_t8

0x0009,

0xfe58,	// (0x000580ca) cell_ai5_widget_pane_t_ParamLimits

0xfe58,	// (0x000580ca) cell_ai5_widget_pane_t

0x831a,	// (0x0005058c) grid_ai5_widget_pane

0xab4e,	// (0x00052dc0) highlight_cell_ai5_widget_pane_ParamLimits

0xab4e,	// (0x00052dc0) highlight_cell_ai5_widget_pane

0xe59a,	// (0x0005680c) ai5_sk_left_pane

0xe5a4,	// (0x00056816) ai5_sk_middle_pane

0xe5ae,	// (0x00056820) ai5_sk_right_pane

0x8350,	// (0x000505c2) bg_ai5_widget_pane_g1_ParamLimits

0x8350,	// (0x000505c2) bg_ai5_widget_pane_g1

0x835c,	// (0x000505ce) bg_ai5_widget_pane_g2_ParamLimits

0x835c,	// (0x000505ce) bg_ai5_widget_pane_g2

0x8368,	// (0x000505da) bg_ai5_widget_pane_g3_ParamLimits

0x8368,	// (0x000505da) bg_ai5_widget_pane_g3

0x8374,	// (0x000505e6) bg_ai5_widget_pane_g4_ParamLimits

0x8374,	// (0x000505e6) bg_ai5_widget_pane_g4

0x8380,	// (0x000505f2) bg_ai5_widget_pane_g5_ParamLimits

0x8380,	// (0x000505f2) bg_ai5_widget_pane_g5

0x838c,	// (0x000505fe) bg_ai5_widget_pane_g6_ParamLimits

0x838c,	// (0x000505fe) bg_ai5_widget_pane_g6

0x8398,	// (0x0005060a) bg_ai5_widget_pane_g7_ParamLimits

0x8398,	// (0x0005060a) bg_ai5_widget_pane_g7

0x83a4,	// (0x00050616) bg_ai5_widget_pane_g8_ParamLimits

0x83a4,	// (0x00050616) bg_ai5_widget_pane_g8

0x83b0,	// (0x00050622) bg_ai5_widget_pane_g9_ParamLimits

0x83b0,	// (0x00050622) bg_ai5_widget_pane_g9

0x0008,

0xfe6d,	// (0x000580df) bg_ai5_widget_pane_g_ParamLimits

0xfe6d,	// (0x000580df) bg_ai5_widget_pane_g

0x83d8,	// (0x0005064a) cell_shortcut_ai5_widget_pane_ParamLimits

0x83d8,	// (0x0005064a) cell_shortcut_ai5_widget_pane

0x6d6d,	// (0x0004efdf) bg_cell_shortcut_ai5_widget_pane

0x83eb,	// (0x0005065d) cell_grid_ai5_widget_pane_g1

0x83f4,	// (0x00050666) highlight_cell_shortcut_ai5_widget_pane

0x2ba7,	// (0x0004ae19) ai5_sk_left_pane_g1

0x83fc,	// (0x0005066e) ai5_sk_left_pane_g2

0x8404,	// (0x00050676) ai5_sk_left_pane_g3

0x840c,	// (0x0005067e) ai5_sk_left_pane_g4

0x0003,

0xfe80,	// (0x000580f2) ai5_sk_left_pane_g

0x8414,	// (0x00050686) ai5_sk_left_pane_t1

0x2b9f,	// (0x0004ae11) ai5_sk_right_pane_g1

0x8422,	// (0x00050694) ai5_sk_right_pane_g2

0x842a,	// (0x0005069c) ai5_sk_right_pane_g3

0x8432,	// (0x000506a4) ai5_sk_right_pane_g4

0x0003,

0xfe89,	// (0x000580fb) ai5_sk_right_pane_g

0x843a,	// (0x000506ac) ai5_sk_right_pane_t1

0x2b9f,	// (0x0004ae11) ai5_sk_middle_pane_g1

0x2ba7,	// (0x0004ae19) ai5_sk_middle_pane_g2

0x2bbf,	// (0x0004ae31) ai5_sk_middle_pane_g3

0x842a,	// (0x0005069c) ai5_sk_middle_pane_g4

0x8404,	// (0x00050676) ai5_sk_middle_pane_g5

0x8448,	// (0x000506ba) ai5_sk_middle_pane_g6

0xe5d4,	// (0x00056846) ai5_sk_middle_pane_g7

0x0006,

0xfe92,	// (0x00058104) ai5_sk_middle_pane_g

0xbd7a,	// (0x00053fec) aid_touch_area_size_lc0_ParamLimits

0xbd7a,	// (0x00053fec) aid_touch_area_size_lc0

0x162e,	// (0x000498a0) cell_hwr_candidate_pane_t1_ParamLimits

0x26cf,	// (0x0004a941) aid_touch_navi_pane

0xc01e,	// (0x00054290) status_dt_navi_pane_ParamLimits

0xc01e,	// (0x00054290) status_dt_navi_pane

0xc036,	// (0x000542a8) status_dt_sta_pane_ParamLimits

0xc036,	// (0x000542a8) status_dt_sta_pane

0xe5dc,	// (0x0005684e) dt_sta_controll_pane

0xe5e9,	// (0x0005685b) dt_sta_indi_pane

0xe5f6,	// (0x00056868) dt_sta_title_pane

0x6e72,	// (0x0004f0e4) bg_dt_sta_indi_pane_ParamLimits

0x6e72,	// (0x0004f0e4) bg_dt_sta_indi_pane

0xe608,	// (0x0005687a) dt_sta_battery_pane

0xe610,	// (0x00056882) dt_sta_indi_pane_g1

0xe619,	// (0x0005688b) dt_sta_indi_pane_g2

0xe622,	// (0x00056894) dt_sta_indi_pane_g3

0x0002,

0xfea1,	// (0x00058113) dt_sta_indi_pane_g

0xe62b,	// (0x0005689d) dt_sta_signal_pane

0xab4e,	// (0x00052dc0) bg_dt_sta_title_pane_ParamLimits

0xab4e,	// (0x00052dc0) bg_dt_sta_title_pane

0xe634,	// (0x000568a6) dt_sta_title_pane_g1

0xe63c,	// (0x000568ae) dt_sta_title_pane_t1_ParamLimits

0xe63c,	// (0x000568ae) dt_sta_title_pane_t1

0x6ccf,	// (0x0004ef41) bg_dt_sta_control_pane

0xe651,	// (0x000568c3) dt_sta_controll_pane_g1

0xe65a,	// (0x000568cc) bg_dt_sta_title_pane_g1

0xe663,	// (0x000568d5) bg_dt_sta_title_pane_g2

0xe66c,	// (0x000568de) bg_dt_sta_title_pane_g3

0x0002,

0xfea8,	// (0x0005811a) bg_dt_sta_title_pane_g

0x52a7,	// (0x0004d519) bg_dt_sta_indi_pane_g1

0x84f6,	// (0x00050768) dt_sta_signal_pane_g1

0x84fe,	// (0x00050770) dt_sta_signal_pane_g2

0x0001,

0xfeaf,	// (0x00058121) dt_sta_signal_pane_g

0x8506,	// (0x00050778) dt_sta_battery_pane_g1

0x850f,	// (0x00050781) dt_sta_battery_pane_t1

0x52a7,	// (0x0004d519) bg_dt_sta_control_pane_g1

0xe924,	// (0x00056b96) fep_china_uni_eep_pane

0xe92c,	// (0x00056b9e) fep_china_uni_entry_pane_ParamLimits

0xe93c,	// (0x00056bae) popup_fep_china_uni_window_g1_ParamLimits

0xe94c,	// (0x00056bbe) popup_fep_china_uni_window_g2_ParamLimits

0xe94c,	// (0x00056bbe) popup_fep_china_uni_window_g2

0x0001,

0xf728,	// (0x0005799a) popup_fep_china_uni_window_g_ParamLimits

0xf728,	// (0x0005799a) popup_fep_china_uni_window_g

0x851e,	// (0x00050790) fep_china_uni_eep_pane_g1

0x8526,	// (0x00050798) fep_china_uni_eep_pane_t1

0x7ac8,	// (0x0004fd3a) aid_touch_area_size_smil_player

0x2827,	// (0x0004aa99) lc0_clock_pane

0x2a26,	// (0x0004ac98) status_pane_g5_ParamLimits

0x2a26,	// (0x0004ac98) status_pane_g5

0xb7cf,	// (0x00053a41) popup_keymap_window

0x29e4,	// (0x0004ac56) status_icon_pane

0x8192,	// (0x00050404) cell_ai5_widget_pane_g3_ParamLimits

0x81b1,	// (0x00050423) cell_ai5_widget_pane_g4_ParamLimits

0x81bd,	// (0x0005042f) cell_ai5_widget_pane_g5_ParamLimits

0x81e1,	// (0x00050453) cell_ai5_widget_pane_g8_ParamLimits

0x81e1,	// (0x00050453) cell_ai5_widget_pane_g8

0x81f5,	// (0x00050467) cell_ai5_widget_pane_g9_ParamLimits

0x81f5,	// (0x00050467) cell_ai5_widget_pane_g9

0x8209,	// (0x0005047b) cell_ai5_widget_pane_g10_ParamLimits

0x8209,	// (0x0005047b) cell_ai5_widget_pane_g10

0x8535,	// (0x000507a7) status_icon_pane_g1

0x6ccf,	// (0x0004ef41) bg_popup_sub_pane_cp13

0x853d,	// (0x000507af) popup_keymap_window_t1

0xb4c2,	// (0x00053734) control_pane_g6_ParamLimits

0xb4c2,	// (0x00053734) control_pane_g6

0xb4cf,	// (0x00053741) control_pane_g7_ParamLimits

0xb4cf,	// (0x00053741) control_pane_g7

0xb4dc,	// (0x0005374e) control_pane_g8_ParamLimits

0xb4dc,	// (0x0005374e) control_pane_g8

0xe5dc,	// (0x0005684e) dt_sta_controll_pane_ParamLimits

0xe5e9,	// (0x0005685b) dt_sta_indi_pane_ParamLimits

0xe5f6,	// (0x00056868) dt_sta_title_pane_ParamLimits

0xaa37,	// (0x00052ca9) aid_size_touch_scroll_bar_cale

0xf3f7,	// (0x00057669) popup_discreet_window_ParamLimits

0xf3f7,	// (0x00057669) popup_discreet_window

0xa335,	// (0x000525a7) popup_sk_window

0x326f,	// (0x0004b4e1) bg_popup_sub_pane_cp28_ParamLimits

0x326f,	// (0x0004b4e1) bg_popup_sub_pane_cp28

0x854b,	// (0x000507bd) popup_discreet_window_g1_ParamLimits

0x854b,	// (0x000507bd) popup_discreet_window_g1

0x856b,	// (0x000507dd) popup_discreet_window_t1_ParamLimits

0x856b,	// (0x000507dd) popup_discreet_window_t1

0x8589,	// (0x000507fb) popup_discreet_window_t2_ParamLimits

0x8589,	// (0x000507fb) popup_discreet_window_t2

0x0002,

0xfeb4,	// (0x00058126) popup_discreet_window_t_ParamLimits

0xfeb4,	// (0x00058126) popup_discreet_window_t

0x209d,	// (0x0004a30f) popup_sk_window_g1

0x20a7,	// (0x0004a319) popup_sk_window_g2

0x0001,

0xfebb,	// (0x0005812d) popup_sk_window_g

0x20b1,	// (0x0004a323) popup_sk_window_t1

0x20c1,	// (0x0004a333) popup_sk_window_t1_copy1

0x8182,	// (0x000503f4) cell_ai5_widget_pane_g2_ParamLimits

0x82e0,	// (0x00050552) cell_ai5_widget_pane_t9_ParamLimits

0x82e0,	// (0x00050552) cell_ai5_widget_pane_t9

0x6ccf,	// (0x0004ef41) main_fep_fshwr2_pane

0xc7b6,	// (0x00054a28) aid_fshwr2_btn_pane

0xc7c5,	// (0x00054a37) aid_fshwr2_syb_pane

0xc7d7,	// (0x00054a49) aid_fshwr2_txt_pane

0xc7e6,	// (0x00054a58) fshwr2_func_candi_pane

0xc7f7,	// (0x00054a69) fshwr2_hwr_syb_pane

0xc812,	// (0x00054a84) fshwr2_icf_pane

0x6ccf,	// (0x0004ef41) fshwr2_icf_bg_pane

0xe675,	// (0x000568e7) fshwr2_icf_pane_t1_ParamLimits

0xe675,	// (0x000568e7) fshwr2_icf_pane_t1

0x52a7,	// (0x0004d519) fshwr2_func_candi_pane_g1

0x85f2,	// (0x00050864) fshwr2_func_candi_row_pane_ParamLimits

0x85f2,	// (0x00050864) fshwr2_func_candi_row_pane

0xe68d,	// (0x000568ff) cell_fshwr2_syb_pane_ParamLimits

0xe68d,	// (0x000568ff) cell_fshwr2_syb_pane

0x5522,	// (0x0004d794) fshwr2_hwr_syb_pane_g1_ParamLimits

0x5522,	// (0x0004d794) fshwr2_hwr_syb_pane_g1

0x6ccf,	// (0x0004ef41) bg_popup_call_pane_cp01

0x861d,	// (0x0005088f) fshwr2_func_candi_cell_pane_ParamLimits

0x861d,	// (0x0005088f) fshwr2_func_candi_cell_pane

0x864f,	// (0x000508c1) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x864f,	// (0x000508c1) fshwr2_func_candi_cell_bg_pane

0x8669,	// (0x000508db) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x8669,	// (0x000508db) fshwr2_func_candi_cell_pane_g1

0x8689,	// (0x000508fb) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x8689,	// (0x000508fb) fshwr2_func_candi_cell_pane_t1

0x6ccf,	// (0x0004ef41) bg_button_pane_cp08

0x231f,	// (0x0004a591) cell_fshwr2_syb_bg_pane

0xe6a6,	// (0x00056918) cell_fshwr2_syb_bg_pane_g1

0xe6ae,	// (0x00056920) cell_fshwr2_syb_bg_pane_t1

0xab4e,	// (0x00052dc0) main_tmo_pane

0xcb3f,	// (0x00054db1) uni_indicator_pane_g1_ParamLimits

0xcb54,	// (0x00054dc6) uni_indicator_pane_g2_ParamLimits

0xcb69,	// (0x00054ddb) uni_indicator_pane_g3_ParamLimits

0xcb7f,	// (0x00054df1) uni_indicator_pane_g4_ParamLimits

0xcb7f,	// (0x00054df1) uni_indicator_pane_g4

0xcb93,	// (0x00054e05) uni_indicator_pane_g5_ParamLimits

0xcb93,	// (0x00054e05) uni_indicator_pane_g5

0xcba7,	// (0x00054e19) uni_indicator_pane_g6_ParamLimits

0xcba7,	// (0x00054e19) uni_indicator_pane_g6

0xf927,	// (0x00057b99) uni_indicator_pane_g_ParamLimits

0xd698,	// (0x0005590a) popup_tmo_note_window_ParamLimits

0xd698,	// (0x0005590a) popup_tmo_note_window

0xab4e,	// (0x00052dc0) fshwr2_bg_pane

0x867a,	// (0x000508ec) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x867a,	// (0x000508ec) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfec0,	// (0x00058132) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfec0,	// (0x00058132) fshwr2_func_candi_cell_pane_g

0x52a7,	// (0x0004d519) bg_popup_window_pane_cp01

0x86b3,	// (0x00050925) bg_popup_window_pane_g1_cp01

0x86bc,	// (0x0005092e) bg_popup_window_pane_cp22_ParamLimits

0x86bc,	// (0x0005092e) bg_popup_window_pane_cp22

0x86ca,	// (0x0005093c) listscroll_tmo_link_pane_ParamLimits

0x86ca,	// (0x0005093c) listscroll_tmo_link_pane

0x870a,	// (0x0005097c) popup_tmo_note_window_g1_ParamLimits

0x870a,	// (0x0005097c) popup_tmo_note_window_g1

0x8717,	// (0x00050989) tmo_note_info_pane_ParamLimits

0x8717,	// (0x00050989) tmo_note_info_pane

0xe6bd,	// (0x0005692f) list_tmo_note_info_pane_g1_ParamLimits

0xe6bd,	// (0x0005692f) list_tmo_note_info_pane_g1

0x8748,	// (0x000509ba) list_tmo_note_info_pane_g2_ParamLimits

0x8748,	// (0x000509ba) list_tmo_note_info_pane_g2

0x0001,

0xfec5,	// (0x00058137) list_tmo_note_info_pane_g_ParamLimits

0xfec5,	// (0x00058137) list_tmo_note_info_pane_g

0x8764,	// (0x000509d6) list_tmo_note_info_text_pane_ParamLimits

0x8764,	// (0x000509d6) list_tmo_note_info_text_pane

0x87e9,	// (0x00050a5b) list_tmo_link_pane

0x87f6,	// (0x00050a68) scroll_pane_cp20

0x8803,	// (0x00050a75) list_single_tmo_link_pane_ParamLimits

0x8803,	// (0x00050a75) list_single_tmo_link_pane

0x8813,	// (0x00050a85) list_single_tmo_link_pane_t1

0x8821,	// (0x00050a93) list_tmo_note_info_text_pane_t1_ParamLimits

0x8821,	// (0x00050a93) list_tmo_note_info_text_pane_t1

0xac08,	// (0x00052e7a) aid_size_touch_scroll_bar_cp01_ParamLimits

0xac08,	// (0x00052e7a) aid_size_touch_scroll_bar_cp01

0x9eea,	// (0x0005215c) aid_size_touch_slider_marker

0xa325,	// (0x00052597) popup_settings_window_ParamLimits

0xa325,	// (0x00052597) popup_settings_window

0xeb87,	// (0x00056df9) popup_candi_list_indi_window

0x26cf,	// (0x0004a941) aid_touch_navi_pane_ParamLimits

0x189c,	// (0x00049b0e) rs_clock_indi_pane

0x18a5,	// (0x00049b17) sctrl_sk_bottom_pane_ParamLimits

0x18b6,	// (0x00049b28) sctrl_sk_top_pane_ParamLimits

0x199f,	// (0x00049c11) popup_fep_tooltip_window

0x8102,	// (0x00050374) aid_size_cell_widget_grid_ParamLimits

0x8176,	// (0x000503e8) cell_ai5_widget_pane_g1_ParamLimits

0x8176,	// (0x000503e8) cell_ai5_widget_pane_g1

0xe582,	// (0x000567f4) cell_ai5_widget_pane_g6_ParamLimits

0xe58e,	// (0x00056800) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe43,	// (0x000580b5) cell_ai5_widget_pane_g_ParamLimits

0xfe43,	// (0x000580b5) cell_ai5_widget_pane_g

0x8304,	// (0x00050576) cell_ai5_widget_pane_t10_ParamLimits

0x8304,	// (0x00050576) cell_ai5_widget_pane_t10

0x831a,	// (0x0005058c) grid_ai5_widget_pane_ParamLimits

0xe5b8,	// (0x0005682a) cell_contacts_ai5_widget_pane_ParamLimits

0xe5b8,	// (0x0005682a) cell_contacts_ai5_widget_pane

0x859e,	// (0x00050810) popup_discreet_window_t3_ParamLimits

0x859e,	// (0x00050810) popup_discreet_window_t3

0x2131,	// (0x0004a3a3) popup_fshwr2_char_preview_window_ParamLimits

0x2131,	// (0x0004a3a3) popup_fshwr2_char_preview_window

0xe6d4,	// (0x00056946) tmo_note_info_pane_t1

0xe6e9,	// (0x0005695b) tmo_note_info_pane_t2

0xe702,	// (0x00056974) tmo_note_info_pane_t3

0x87c5,	// (0x00050a37) tmo_note_info_pane_t4

0x87d7,	// (0x00050a49) tmo_note_info_pane_t5

0x0004,

0xfeca,	// (0x0005813c) tmo_note_info_pane_t

0x87e9,	// (0x00050a5b) list_tmo_link_pane_ParamLimits

0x87f6,	// (0x00050a68) scroll_pane_cp20_ParamLimits

0x6ccf,	// (0x0004ef41) bg_popup_fep_char_preview_window_cp01

0x883a,	// (0x00050aac) popup_fshwr2_char_preview_window_t1

0x8848,	// (0x00050aba) popup_candi_list_indi_window_g1

0x8851,	// (0x00050ac3) bg_cell_contacts_ai5_widget_pane

0x885d,	// (0x00050acf) cell_contacts_ai5_widget_pane_g1

0x886d,	// (0x00050adf) cell_contacts_ai5_widget_pane_g2

0x8879,	// (0x00050aeb) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfed5,	// (0x00058147) cell_contacts_ai5_widget_pane_g

0x8885,	// (0x00050af7) cell_contacts_ai5_widget_pane_t1

0xab4e,	// (0x00052dc0) highlight_cell_shortcut_ai5_widget_pane_cp01

0xe77c,	// (0x000569ee) settings_container_pane

0x231f,	// (0x0004a591) listscroll_set_pane_copy1

0x497e,	// (0x0004cbf0) scroll_pane_cp121_copy1

0x890b,	// (0x00050b7d) set_content_pane_copy1

0xec56,	// (0x00056ec8) aid_height_set_list_copy1_ParamLimits

0xec56,	// (0x00056ec8) aid_height_set_list_copy1

0x4002,	// (0x0004c274) aid_size_parent_copy1_ParamLimits

0x4002,	// (0x0004c274) aid_size_parent_copy1

0xec62,	// (0x00056ed4) button_value_adjust_pane_cp6_copy1_ParamLimits

0xec62,	// (0x00056ed4) button_value_adjust_pane_cp6_copy1

0x266b,	// (0x0004a8dd) list_highlight_pane_cp2_copy1_ParamLimits

0x266b,	// (0x0004a8dd) list_highlight_pane_cp2_copy1

0xec76,	// (0x00056ee8) list_set_pane_copy1_ParamLimits

0xec76,	// (0x00056ee8) list_set_pane_copy1

0xe717,	// (0x00056989) main_pane_set_t1_copy1_ParamLimits

0xe717,	// (0x00056989) main_pane_set_t1_copy1

0xe751,	// (0x000569c3) main_pane_set_t2_copy1_ParamLimits

0xe751,	// (0x000569c3) main_pane_set_t2_copy1

0xed3d,	// (0x00056faf) main_pane_set_t3_copy1

0xed4b,	// (0x00056fbd) main_pane_set_t4_copy1

0xe770,	// (0x000569e2) set_content_pane_g1_copy1_ParamLimits

0xe770,	// (0x000569e2) set_content_pane_g1_copy1

0xed59,	// (0x00056fcb) setting_code_pane_copy1

0x8a1e,	// (0x00050c90) setting_slider_graphic_pane_copy1

0x8a1e,	// (0x00050c90) setting_slider_pane_copy1

0x8a1e,	// (0x00050c90) setting_text_pane_copy1

0x8a1e,	// (0x00050c90) setting_volume_pane_copy1

0xed59,	// (0x00056fcb) settings_code_pane_cp2_copy1

0xed61,	// (0x00056fd3) settings_code_pane_cp_copy1_ParamLimits

0xed61,	// (0x00056fd3) settings_code_pane_cp_copy1

0xed75,	// (0x00056fe7) volume_set_pane_copy1

0xed81,	// (0x00056ff3) volume_set_pane_g10_copy1

0xed8d,	// (0x00056fff) volume_set_pane_g1_copy1

0xed97,	// (0x00057009) volume_set_pane_g2_copy1

0xeda1,	// (0x00057013) volume_set_pane_g3_copy1

0xedab,	// (0x0005701d) volume_set_pane_g4_copy1

0xedb5,	// (0x00057027) volume_set_pane_g5_copy1

0xedbf,	// (0x00057031) volume_set_pane_g6_copy1

0xedc9,	// (0x0005703b) volume_set_pane_g7_copy1

0xedd3,	// (0x00057045) volume_set_pane_g8_copy1

0xeddd,	// (0x0005704f) volume_set_pane_g9_copy1

0x6d31,	// (0x0004efa3) bg_set_opt_pane_cp_copy1_ParamLimits

0x6d31,	// (0x0004efa3) bg_set_opt_pane_cp_copy1

0x8aac,	// (0x00050d1e) setting_slider_pane_t1_copy1_ParamLimits

0x8aac,	// (0x00050d1e) setting_slider_pane_t1_copy1

0xede7,	// (0x00057059) setting_slider_pane_t2_copy1_ParamLimits

0xede7,	// (0x00057059) setting_slider_pane_t2_copy1

0xee01,	// (0x00057073) setting_slider_pane_t3_copy1_ParamLimits

0xee01,	// (0x00057073) setting_slider_pane_t3_copy1

0xee19,	// (0x0005708b) slider_set_pane_copy1_ParamLimits

0xee19,	// (0x0005708b) slider_set_pane_copy1

0xaba9,	// (0x00052e1b) set_opt_bg_pane_g1_copy2

0xabb1,	// (0x00052e23) set_opt_bg_pane_g2_copy2

0x8b12,	// (0x00050d84) set_opt_bg_pane_g3_copy2

0xabc1,	// (0x00052e33) set_opt_bg_pane_g4_copy2

0xabc9,	// (0x00052e3b) set_opt_bg_pane_g5_copy2

0xabd1,	// (0x00052e43) set_opt_bg_pane_g6_copy2

0xee2f,	// (0x000570a1) set_opt_bg_pane_g7_copy2

0x8b26,	// (0x00050d98) set_opt_bg_pane_g8_copy2

0x8b30,	// (0x00050da2) set_opt_bg_pane_g9_copy2

0x8b3a,	// (0x00050dac) aid_size_touch_slider_mark_copy1_ParamLimits

0x8b3a,	// (0x00050dac) aid_size_touch_slider_mark_copy1

0x8b4e,	// (0x00050dc0) slider_set_pane_g1_copy1

0x8b57,	// (0x00050dc9) slider_set_pane_g2_copy1

0x6fb5,	// (0x0004f227) slider_set_pane_g3_copy1_ParamLimits

0x6fb5,	// (0x0004f227) slider_set_pane_g3_copy1

0x6fc9,	// (0x0004f23b) slider_set_pane_g4_copy1_ParamLimits

0x6fc9,	// (0x0004f23b) slider_set_pane_g4_copy1

0x6fe1,	// (0x0004f253) slider_set_pane_g5_copy1_ParamLimits

0x6fe1,	// (0x0004f253) slider_set_pane_g5_copy1

0x6fb5,	// (0x0004f227) slider_set_pane_g6_copy1_ParamLimits

0x6fb5,	// (0x0004f227) slider_set_pane_g6_copy1

0xee39,	// (0x000570ab) slider_set_pane_g7_copy1_ParamLimits

0xee39,	// (0x000570ab) slider_set_pane_g7_copy1

0x6ce3,	// (0x0004ef55) bg_set_opt_pane_cp2_copy1

0x8b75,	// (0x00050de7) setting_slider_graphic_pane_g1_copy1

0xee4f,	// (0x000570c1) setting_slider_graphic_pane_t1_copy1

0xee5f,	// (0x000570d1) setting_slider_graphic_pane_t2_copy1

0xee6f,	// (0x000570e1) slider_set_pane_cp_copy1

0x8bae,	// (0x00050e20) input_focus_pane_cp1_copy1

0x8bb7,	// (0x00050e29) list_set_text_pane_copy1

0x8bbf,	// (0x00050e31) setting_text_pane_g1_copy1

0xe788,	// (0x000569fa) set_text_pane_t1_copy1

0x8bae,	// (0x00050e20) input_focus_pane_cp2_copy1

0x8bbf,	// (0x00050e31) setting_code_pane_g1_copy1

0xee77,	// (0x000570e9) setting_code_pane_t1_copy1

0xee85,	// (0x000570f7) list_set_graphic_pane_copy1

0x6ce3,	// (0x0004ef55) bg_set_opt_pane_cp4_copy1

0xb2f7,	// (0x00053569) list_set_graphic_pane_g1_copy1_ParamLimits

0xb2f7,	// (0x00053569) list_set_graphic_pane_g1_copy1

0xee97,	// (0x00057109) list_set_graphic_pane_g2_copy1

0xb30f,	// (0x00053581) list_set_graphic_pane_t1_copy1_ParamLimits

0xb30f,	// (0x00053581) list_set_graphic_pane_t1_copy1

0x52a7,	// (0x0004d519) rs_clock_indi_pane_g1

0x8bf0,	// (0x00050e62) rs_clock_indi_pane_t1

0x8bfe,	// (0x00050e70) rs_indi_pane

0x8c06,	// (0x00050e78) rs_indi_pane_g1

0x8c0f,	// (0x00050e81) rs_indi_pane_g2

0x8c18,	// (0x00050e8a) rs_indi_pane_g3

0x0002,

0xfedc,	// (0x0005814e) rs_indi_pane_g

0x231f,	// (0x0004a591) bg_popup_preview_window_pane_cp03

0x8c21,	// (0x00050e93) popup_fep_tooltip_window_t1

0x5f3e,	// (0x0004e1b0) popup_note2_window_g2_ParamLimits

0x5f3e,	// (0x0004e1b0) popup_note2_window_g2

0x0001,

0xfc75,	// (0x00057ee7) popup_note2_window_g_ParamLimits

0xfc75,	// (0x00057ee7) popup_note2_window_g

0x6446,	// (0x0004e6b8) bg_popup_sub_pane_cp11_ParamLimits

0x6453,	// (0x0004e6c5) cell_ai3_links_pane_g1_ParamLimits

0x646a,	// (0x0004e6dc) cell_ai3_links_pane_t1

0xe788,	// (0x000569fa) set_text_pane_t1_copy1_ParamLimits

0xb383,	// (0x000535f5) cell_graphic_popup_pane_cp2_ParamLimits

0xb383,	// (0x000535f5) cell_graphic_popup_pane_cp2

0xee9f,	// (0x00057111) cell_graphic_popup_pane_g1_cp2

0xa84a,	// (0x00052abc) cell_graphic_popup_pane_g2_cp2

0x8c37,	// (0x00050ea9) cell_graphic_popup_pane_g3_cp2

0x8c3f,	// (0x00050eb1) cell_graphic_popup_pane_t2_cp2

0xa85b,	// (0x00052acd) grid_highlight_pane_cp3_cp2

0xaedb,	// (0x0005314d) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xab4e,	// (0x00052dc0) main_tmo_pane_ParamLimits

0xd68c,	// (0x000558fe) popup_tmo_big_image_note_window

0x8166,	// (0x000503d8) cell_ai5_widget_list_pane

0x816e,	// (0x000503e0) cell_ai5_widget_lrg_icon_pane

0xe6d4,	// (0x00056946) tmo_note_info_pane_t1_ParamLimits

0xe6e9,	// (0x0005695b) tmo_note_info_pane_t2_ParamLimits

0xe702,	// (0x00056974) tmo_note_info_pane_t3_ParamLimits

0x87c5,	// (0x00050a37) tmo_note_info_pane_t4_ParamLimits

0x87d7,	// (0x00050a49) tmo_note_info_pane_t5_ParamLimits

0xfeca,	// (0x0005813c) tmo_note_info_pane_t_ParamLimits

0xe77c,	// (0x000569ee) settings_container_pane_ParamLimits

0x8ba6,	// (0x00050e18) indicator_popup_pane_cp5

0x8ba6,	// (0x00050e18) indicator_popup_pane_cp6

0xee85,	// (0x000570f7) list_set_graphic_pane_copy1_ParamLimits

0x6ccf,	// (0x0004ef41) bg_popup_window_pane_cp23

0x8c4d,	// (0x00050ebf) popup_tmo_big_image_note_window_g1

0x8c59,	// (0x00050ecb) popup_tmo_big_image_note_window_t1

0x8c69,	// (0x00050edb) popup_tmo_big_image_note_window_t2

0x8c79,	// (0x00050eeb) popup_tmo_big_image_note_window_t3

0x0002,

0xfee3,	// (0x00058155) popup_tmo_big_image_note_window_t

0x8c89,	// (0x00050efb) cell_ai5_widget_lrg_icon_pane_g1

0x8c91,	// (0x00050f03) cell_ai5_widget_lrg_icon_pane_t1

0x8c9f,	// (0x00050f11) cell_ai5_widget_list_row_pane_ParamLimits

0x8c9f,	// (0x00050f11) cell_ai5_widget_list_row_pane

0x8cb8,	// (0x00050f2a) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x8cb8,	// (0x00050f2a) cell_ai5_widget_list_row_pane_g1

0x8cc5,	// (0x00050f37) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x8cc5,	// (0x00050f37) cell_ai5_widget_list_row_pane_t1

0x8cdd,	// (0x00050f4f) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x8cdd,	// (0x00050f4f) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfeea,	// (0x0005815c) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeea,	// (0x0005815c) cell_ai5_widget_list_row_pane_t

0x6ccf,	// (0x0004ef41) main_fep_vtchi_ss_pane

0x8d14,	// (0x00050f86) popup_fep_char_pre_window

0x8d1c,	// (0x00050f8e) popup_fep_ituss_window

0x8d3d,	// (0x00050faf) popup_fep_vkbss_window

0x8d5e,	// (0x00050fd0) grid_vkbss_keypad_pane_ParamLimits

0x8d5e,	// (0x00050fd0) grid_vkbss_keypad_pane

0x8d6e,	// (0x00050fe0) ituss_keypad_pane

0x8d8a,	// (0x00050ffc) aid_vkbss_key_offset_ParamLimits

0x8d8a,	// (0x00050ffc) aid_vkbss_key_offset

0x8d96,	// (0x00051008) cell_vkbss_key_pane_ParamLimits

0x8d96,	// (0x00051008) cell_vkbss_key_pane

0x8dac,	// (0x0005101e) bg_cell_vkbss_key_g1_ParamLimits

0x8dac,	// (0x0005101e) bg_cell_vkbss_key_g1

0x8db8,	// (0x0005102a) cell_vkbss_key_3p_pane_ParamLimits

0x8db8,	// (0x0005102a) cell_vkbss_key_3p_pane

0x8dd2,	// (0x00051044) cell_vkbss_key_g1_ParamLimits

0x8dd2,	// (0x00051044) cell_vkbss_key_g1

0x8dec,	// (0x0005105e) cell_vkbss_key_t1_ParamLimits

0x8dec,	// (0x0005105e) cell_vkbss_key_t1

0x8e17,	// (0x00051089) cell_ituss_key_pane_ParamLimits

0x8e17,	// (0x00051089) cell_ituss_key_pane

0x8e28,	// (0x0005109a) bg_cell_ituss_key_g1_ParamLimits

0x8e28,	// (0x0005109a) bg_cell_ituss_key_g1

0x8e34,	// (0x000510a6) cell_ituss_key_pane_g1_ParamLimits

0x8e34,	// (0x000510a6) cell_ituss_key_pane_g1

0x8e48,	// (0x000510ba) cell_ituss_key_pane_g2_ParamLimits

0x8e48,	// (0x000510ba) cell_ituss_key_pane_g2

0x0001,

0xfef1,	// (0x00058163) cell_ituss_key_pane_g_ParamLimits

0xfef1,	// (0x00058163) cell_ituss_key_pane_g

0x8e73,	// (0x000510e5) cell_ituss_key_t1_ParamLimits

0x8e73,	// (0x000510e5) cell_ituss_key_t1

0x8ea1,	// (0x00051113) cell_ituss_key_t2_ParamLimits

0x8ea1,	// (0x00051113) cell_ituss_key_t2

0x8ed2,	// (0x00051144) cell_ituss_key_t3_ParamLimits

0x8ed2,	// (0x00051144) cell_ituss_key_t3

0x8f03,	// (0x00051175) cell_ituss_key_t4_ParamLimits

0x8f03,	// (0x00051175) cell_ituss_key_t4

0x0003,

0xfef6,	// (0x00058168) cell_ituss_key_t_ParamLimits

0xfef6,	// (0x00058168) cell_ituss_key_t

0x8f34,	// (0x000511a6) cell_vkbss_key_3p_pane_g1

0x8f3c,	// (0x000511ae) cell_vkbss_key_3p_pane_g2

0x8f44,	// (0x000511b6) cell_vkbss_key_3p_pane_g3

0x0002,

0xfeff,	// (0x00058171) cell_vkbss_key_3p_pane_g

0x6ccf,	// (0x0004ef41) bg_popup_fep_char_preview_window_cp02

0x8f4c,	// (0x000511be) popup_fep_char_pre_window_t1

0xe578,	// (0x000567ea) main_ai5_sk_pane

0x8851,	// (0x00050ac3) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x885d,	// (0x00050acf) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x886d,	// (0x00050adf) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x8879,	// (0x00050aeb) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfed5,	// (0x00058147) cell_contacts_ai5_widget_pane_g_ParamLimits

0x8885,	// (0x00050af7) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xab4e,	// (0x00052dc0) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xeea7,	// (0x00057119) main_ai5_sk_pane_g1

0x30a7,	// (0x0004b319) popup_query_code_window_g1

0x8d32,	// (0x00050fa4) popup_fep_vkb_icf_pane

0x8d48,	// (0x00050fba) popup_fep_vtchi_icf_pane

0xab4e,	// (0x00052dc0) bg_icf_pane

0x8f64,	// (0x000511d6) list_vkb_icf_pane

0xab4e,	// (0x00052dc0) bg_icf_pane_cp01

0x8f70,	// (0x000511e2) vtchi_icf_list_pane

0x8f81,	// (0x000511f3) list_vkb_icf_pane_t1_ParamLimits

0x8f81,	// (0x000511f3) list_vkb_icf_pane_t1

0x8f98,	// (0x0005120a) vtchi_icf_list_pane_t1_ParamLimits

0x8f98,	// (0x0005120a) vtchi_icf_list_pane_t1

0x8d1c,	// (0x00050f8e) popup_fep_ituss_window_ParamLimits

0x8d48,	// (0x00050fba) popup_fep_vtchi_icf_pane_ParamLimits

0x8d6e,	// (0x00050fe0) ituss_keypad_pane_ParamLimits

0x8d7e,	// (0x00050ff0) ituss_sks_pane

0xab4e,	// (0x00052dc0) bg_icf_pane_ParamLimits

0x8d05,	// (0x00050f77) icf_edit_indi_pane_ParamLimits

0x8d05,	// (0x00050f77) icf_edit_indi_pane

0x8f64,	// (0x000511d6) list_vkb_icf_pane_ParamLimits

0xab4e,	// (0x00052dc0) bg_icf_pane_cp01_ParamLimits

0x8d05,	// (0x00050f77) icf_edit_indi_pane_cp01_ParamLimits

0x8d05,	// (0x00050f77) icf_edit_indi_pane_cp01

0x8f78,	// (0x000511ea) vtchi_query_pane

0x5522,	// (0x0004d794) icf_edit_indi_pane_g1_ParamLimits

0x5522,	// (0x0004d794) icf_edit_indi_pane_g1

0x901b,	// (0x0005128d) icf_edit_indi_pane_g2_ParamLimits

0x901b,	// (0x0005128d) icf_edit_indi_pane_g2

0x0001,

0xff17,	// (0x00058189) icf_edit_indi_pane_g_ParamLimits

0xff17,	// (0x00058189) icf_edit_indi_pane_g

0x902a,	// (0x0005129c) icf_edit_indi_pane_t1

0x8fb1,	// (0x00051223) bg_input_focus_pane_cp042

0xaa2e,	// (0x00052ca0) vtchi_button_pane

0x8fba,	// (0x0005122c) vtchi_query_pane_t1

0x8fc8,	// (0x0005123a) vtchi_query_pane_t2

0x8fd6,	// (0x00051248) vtchi_query_pane_t3

0x0002,

0xff06,	// (0x00058178) vtchi_query_pane_t

0x6ccf,	// (0x0004ef41) bg_button_pane_cp13

0x8fe4,	// (0x00051256) vtchi_button_pane_g1

0x8fec,	// (0x0005125e) ituss_sks_pane_g1

0x8ff7,	// (0x00051269) ituss_sks_pane_g2

0x0001,

0xff0d,	// (0x0005817f) ituss_sks_pane_g

0x8fff,	// (0x00051271) ituss_sks_pane_t1

0x900d,	// (0x0005127f) ituss_sks_pane_t2

0x0001,

0xff12,	// (0x00058184) ituss_sks_pane_t

0x4d51,	// (0x0004cfc3) indicator_nsta_pane_cp_g1

0x4d5a,	// (0x0004cfcc) indicator_nsta_pane_cp_g2

0x4d62,	// (0x0004cfd4) indicator_nsta_pane_cp_g3

0x4d6a,	// (0x0004cfdc) indicator_nsta_pane_cp_g4

0x4d72,	// (0x0004cfe4) indicator_nsta_pane_cp_g5

0x4d7a,	// (0x0004cfec) indicator_nsta_pane_cp_g6

0x0005,

0xfabf,	// (0x00057d31) indicator_nsta_pane_cp_g

0xe09b,	// (0x0005630d) cell_graphic2_pane_t2_ParamLimits

0xe09b,	// (0x0005630d) cell_graphic2_pane_t2

0x0001,

0xfdcc,	// (0x0005803e) cell_graphic2_pane_t_ParamLimits

0xfdcc,	// (0x0005803e) cell_graphic2_pane_t

0xe0d1,	// (0x00056343) cell_graphic2_control_pane_t1

0xb260,	// (0x000534d2) signal_pane_g3_ParamLimits

0xb260,	// (0x000534d2) signal_pane_g3

0xb274,	// (0x000534e6) signal_pane_g4_ParamLimits

0xb274,	// (0x000534e6) signal_pane_g4

0x8cef,	// (0x00050f61) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x8cef,	// (0x00050f61) cell_ai5_widget_list_row_pane_t3

0x8e61,	// (0x000510d3) cell_ituss_key_pane_t1_ParamLimits

0x8e61,	// (0x000510d3) cell_ituss_key_pane_t1

0x2d24,	// (0x0004af96) form_field_data_wide_pane_vc_t2_ParamLimits

0x2d24,	// (0x0004af96) form_field_data_wide_pane_vc_t2

0x2d38,	// (0x0004afaa) form_field_data_wide_pane_vc_t3_ParamLimits

0x2d38,	// (0x0004afaa) form_field_data_wide_pane_vc_t3

0x0002,

0xf80f,	// (0x00057a81) form_field_data_wide_pane_vc_t_ParamLimits

0xf80f,	// (0x00057a81) form_field_data_wide_pane_vc_t

0x49f6,	// (0x0004cc68) form_field_slider_wide_pane_vc_t3_ParamLimits

0x49f6,	// (0x0004cc68) form_field_slider_wide_pane_vc_t3

0x4ad2,	// (0x0004cd44) form_field_popup_wide_pane_vc_t2_ParamLimits

0x4ad2,	// (0x0004cd44) form_field_popup_wide_pane_vc_t2

0x4ae9,	// (0x0004cd5b) form_field_popup_wide_pane_vc_t3_ParamLimits

0x4ae9,	// (0x0004cd5b) form_field_popup_wide_pane_vc_t3

0x0002,

0xfaae,	// (0x00057d20) form_field_popup_wide_pane_vc_t_ParamLimits

0xfaae,	// (0x00057d20) form_field_popup_wide_pane_vc_t

0xc7b6,	// (0x00054a28) aid_fshwr2_btn_pane_ParamLimits

0xc7c5,	// (0x00054a37) aid_fshwr2_syb_pane_ParamLimits

0xc7d7,	// (0x00054a49) aid_fshwr2_txt_pane_ParamLimits

0xab4e,	// (0x00052dc0) fshwr2_bg_pane_ParamLimits

0xc7e6,	// (0x00054a58) fshwr2_func_candi_pane_ParamLimits

0xc7f7,	// (0x00054a69) fshwr2_hwr_syb_pane_ParamLimits

0xc812,	// (0x00054a84) fshwr2_icf_pane_ParamLimits
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

} // end of namespace AknLayoutScalable_Elaf_pvl4_av_vga4_lsc_tch_Large

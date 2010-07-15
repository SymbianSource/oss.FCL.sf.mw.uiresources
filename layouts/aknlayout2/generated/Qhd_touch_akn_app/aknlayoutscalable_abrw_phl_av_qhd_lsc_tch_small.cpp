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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0002f45a };

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
0xcff3,	// (0x0003c44d) Screen

0xcfff,	// (0x0003c459) application_window_ParamLimits

0xcfff,	// (0x0003c459) application_window

0x2cb5,	// (0x0003210f) screen_g1

0xb6bc,	// (0x0003ab16) area_bottom_pane_ParamLimits

0xb6bc,	// (0x0003ab16) area_bottom_pane

0x0046,	// (0x0002f4a0) area_top_pane_ParamLimits

0x0046,	// (0x0002f4a0) area_top_pane

0x00e4,	// (0x0002f53e) main_pane_ParamLimits

0x00e4,	// (0x0002f53e) main_pane

0x2cbf,	// (0x00032119) misc_graphics

0xd73b,	// (0x0003cb95) battery_pane_ParamLimits

0xd73b,	// (0x0003cb95) battery_pane

0x5bf9,	// (0x00035053) bg_status_flat_pane_g8

0x5c01,	// (0x0003505b) bg_status_flat_pane_g9

0x4fe7,	// (0x00034441) context_pane_ParamLimits

0x4fe7,	// (0x00034441) context_pane

0xd8a6,	// (0x0003cd00) navi_pane_ParamLimits

0xd8a6,	// (0x0003cd00) navi_pane

0xd924,	// (0x0003cd7e) signal_pane_ParamLimits

0xd924,	// (0x0003cd7e) signal_pane

0x0008,

0xf874,	// (0x0003ecce) bg_status_flat_pane_g

0xd9b4,	// (0x0003ce0e) status_pane_g1_ParamLimits

0xd9b4,	// (0x0003ce0e) status_pane_g1

0xd9ca,	// (0x0003ce24) status_pane_g2_ParamLimits

0xd9ca,	// (0x0003ce24) status_pane_g2

0x520e,	// (0x00034668) status_pane_g3_ParamLimits

0x520e,	// (0x00034668) status_pane_g3

0x0004,

0xf7a0,	// (0x0003ebfa) status_pane_g_ParamLimits

0xf7a0,	// (0x0003ebfa) status_pane_g

0xd9d6,	// (0x0003ce30) title_pane_ParamLimits

0xd9d6,	// (0x0003ce30) title_pane

0xda39,	// (0x0003ce93) uni_indicator_pane_ParamLimits

0xda39,	// (0x0003ce93) uni_indicator_pane

0x4e55,	// (0x000342af) bg_list_pane_ParamLimits

0x4e55,	// (0x000342af) bg_list_pane

0xd6ae,	// (0x0003cb08) find_pane

0x540d,	// (0x00034867) listscroll_app_pane_ParamLimits

0x540d,	// (0x00034867) listscroll_app_pane

0x4e81,	// (0x000342db) listscroll_form_pane

0xc00b,	// (0x0003b465) listscroll_gen_pane_ParamLimits

0xc00b,	// (0x0003b465) listscroll_gen_pane

0x1166,	// (0x000305c0) listscroll_set_pane

0x677b,	// (0x00035bd5) main_idle_act_pane

0x4b51,	// (0x00033fab) main_idle_trad_pane

0x4b51,	// (0x00033fab) main_list_empty_pane

0x4e75,	// (0x000342cf) main_midp_pane

0x4e9b,	// (0x000342f5) main_pane_g1_ParamLimits

0x4e9b,	// (0x000342f5) main_pane_g1

0xc01f,	// (0x0003b479) popup_ai_message_window_ParamLimits

0xc01f,	// (0x0003b479) popup_ai_message_window

0xc0b0,	// (0x0003b50a) popup_fep_china_uni_window_ParamLimits

0xc0b0,	// (0x0003b50a) popup_fep_china_uni_window

0x1286,	// (0x000306e0) popup_fep_japan_candidate_window_ParamLimits

0x1286,	// (0x000306e0) popup_fep_japan_candidate_window

0x12a6,	// (0x00030700) popup_fep_japan_predictive_window_ParamLimits

0x12a6,	// (0x00030700) popup_fep_japan_predictive_window

0xc10c,	// (0x0003b566) popup_find_window

0xc129,	// (0x0003b583) popup_grid_graphic_window_ParamLimits

0xc129,	// (0x0003b583) popup_grid_graphic_window

0x130d,	// (0x00030767) popup_large_graphic_colour_window

0xc1c7,	// (0x0003b621) popup_menu_window_ParamLimits

0xc1c7,	// (0x0003b621) popup_menu_window

0xc399,	// (0x0003b7f3) popup_note_image_window

0xc35f,	// (0x0003b7b9) popup_note_wait_window_ParamLimits

0xc35f,	// (0x0003b7b9) popup_note_wait_window

0xc3b1,	// (0x0003b80b) popup_note_window_ParamLimits

0xc3b1,	// (0x0003b80b) popup_note_window

0xc457,	// (0x0003b8b1) popup_query_code_window_ParamLimits

0xc457,	// (0x0003b8b1) popup_query_code_window

0x1555,	// (0x000309af) popup_query_data_code_window_ParamLimits

0x1555,	// (0x000309af) popup_query_data_code_window

0xc491,	// (0x0003b8eb) popup_query_data_window_ParamLimits

0xc491,	// (0x0003b8eb) popup_query_data_window

0xc513,	// (0x0003b96d) popup_query_sat_info_window_ParamLimits

0xc513,	// (0x0003b96d) popup_query_sat_info_window

0xc5aa,	// (0x0003ba04) popup_snote_single_graphic_window_ParamLimits

0xc5aa,	// (0x0003ba04) popup_snote_single_graphic_window

0xc5aa,	// (0x0003ba04) popup_snote_single_text_window_ParamLimits

0xc5aa,	// (0x0003ba04) popup_snote_single_text_window

0x15dc,	// (0x00030a36) popup_sub_window_general

0x170c,	// (0x00030b66) popup_window_general_ParamLimits

0x170c,	// (0x00030b66) popup_window_general

0x4ea9,	// (0x00034303) power_save_pane

0xbe90,	// (0x0003b2ea) control_pane_g1_ParamLimits

0xbe90,	// (0x0003b2ea) control_pane_g1

0xbeb9,	// (0x0003b313) control_pane_g2_ParamLimits

0xbeb9,	// (0x0003b313) control_pane_g2

0x4e18,	// (0x00034272) control_pane_g3_ParamLimits

0x4e18,	// (0x00034272) control_pane_g3

0x0007,

0xf788,	// (0x0003ebe2) control_pane_g_ParamLimits

0xf788,	// (0x0003ebe2) control_pane_g

0xbefa,	// (0x0003b354) control_pane_t1_ParamLimits

0xbefa,	// (0x0003b354) control_pane_t1

0xbf60,	// (0x0003b3ba) control_pane_t2_ParamLimits

0xbf60,	// (0x0003b3ba) control_pane_t2

0x0002,

0xf799,	// (0x0003ebf3) control_pane_t_ParamLimits

0xf799,	// (0x0003ebf3) control_pane_t

0xd5e0,	// (0x0003ca3a) navi_navi_volume_pane_cp1

0xd5e8,	// (0x0003ca42) status_small_icon_pane

0x4d4d,	// (0x000341a7) status_small_pane_g1_ParamLimits

0x4d4d,	// (0x000341a7) status_small_pane_g1

0xd5f0,	// (0x0003ca4a) status_small_pane_g2_ParamLimits

0xd5f0,	// (0x0003ca4a) status_small_pane_g2

0xd5fc,	// (0x0003ca56) status_small_pane_g3_ParamLimits

0xd5fc,	// (0x0003ca56) status_small_pane_g3

0xd608,	// (0x0003ca62) status_small_pane_g4_ParamLimits

0xd608,	// (0x0003ca62) status_small_pane_g4

0xd614,	// (0x0003ca6e) status_small_pane_g5_ParamLimits

0xd614,	// (0x0003ca6e) status_small_pane_g5

0xd622,	// (0x0003ca7c) status_small_pane_g6_ParamLimits

0xd622,	// (0x0003ca7c) status_small_pane_g6

0x0007,

0xf777,	// (0x0003ebd1) status_small_pane_g_ParamLimits

0xf777,	// (0x0003ebd1) status_small_pane_g

0xd651,	// (0x0003caab) status_small_pane_t1

0xd673,	// (0x0003cacd) status_small_wait_pane_ParamLimits

0xd673,	// (0x0003cacd) status_small_wait_pane

0xd4ab,	// (0x0003c905) aid_levels_signal_ParamLimits

0xd4ab,	// (0x0003c905) aid_levels_signal

0xd4c3,	// (0x0003c91d) signal_pane_g1_ParamLimits

0xd4c3,	// (0x0003c91d) signal_pane_g1

0xd4de,	// (0x0003c938) signal_pane_g2_ParamLimits

0xd4de,	// (0x0003c938) signal_pane_g2

0x0003,

0xf708,	// (0x0003eb62) signal_pane_g_ParamLimits

0xf708,	// (0x0003eb62) signal_pane_g

0x4625,	// (0x00033a7f) context_pane_g1

0xd00f,	// (0x0003c469) title_pane_g1

0xd046,	// (0x0003c4a0) title_pane_t1

0x2d67,	// (0x000321c1) title_pane_t2

0x2d8d,	// (0x000321e7) title_pane_t3

0x0002,

0xf557,	// (0x0003e9b1) title_pane_t

0xda61,	// (0x0003cebb) aid_levels_battery_ParamLimits

0xda61,	// (0x0003cebb) aid_levels_battery

0xda7d,	// (0x0003ced7) battery_pane_g1_ParamLimits

0xda7d,	// (0x0003ced7) battery_pane_g1

0xda9a,	// (0x0003cef4) battery_pane_g2_ParamLimits

0xda9a,	// (0x0003cef4) battery_pane_g2

0x0001,

0xf7ab,	// (0x0003ec05) battery_pane_g_ParamLimits

0xf7ab,	// (0x0003ec05) battery_pane_g

0xdc5b,	// (0x0003d0b5) uni_indicator_pane_g1

0xdc70,	// (0x0003d0ca) uni_indicator_pane_g2

0xdc86,	// (0x0003d0e0) uni_indicator_pane_g3

0x0005,

0xf91c,	// (0x0003ed76) uni_indicator_pane_g

0x49c3,	// (0x00033e1d) navi_icon_pane_ParamLimits

0x49c3,	// (0x00033e1d) navi_icon_pane

0x4901,	// (0x00033d5b) navi_midp_pane

0x49df,	// (0x00033e39) navi_navi_pane

0x49e9,	// (0x00033e43) navi_text_pane_ParamLimits

0x49e9,	// (0x00033e43) navi_text_pane

0x2cb5,	// (0x0003210f) status_small_wait_pane_g1

0x3a6a,	// (0x00032ec4) status_small_wait_pane_g2

0x0001,

0xf917,	// (0x0003ed71) status_small_wait_pane_g

0x6260,	// (0x000356ba) navi_navi_icon_text_pane

0x6268,	// (0x000356c2) navi_navi_pane_g1_ParamLimits

0x6268,	// (0x000356c2) navi_navi_pane_g1

0x627a,	// (0x000356d4) navi_navi_pane_g2_ParamLimits

0x627a,	// (0x000356d4) navi_navi_pane_g2

0x0001,

0xf8e5,	// (0x0003ed3f) navi_navi_pane_g_ParamLimits

0xf8e5,	// (0x0003ed3f) navi_navi_pane_g

0x628c,	// (0x000356e6) navi_navi_tabs_pane

0x6295,	// (0x000356ef) navi_navi_text_pane

0x6260,	// (0x000356ba) navi_navi_volume_pane

0x623c,	// (0x00035696) navi_text_pane_t1

0x6230,	// (0x0003568a) navi_icon_pane_g1

0x6183,	// (0x000355dd) navi_navi_text_pane_t1

0x1a90,	// (0x00030eea) navi_navi_volume_pane_g1

0x1a98,	// (0x00030ef2) volume_small_pane

0x60e9,	// (0x00035543) navi_navi_icon_text_pane_g1

0x60f1,	// (0x0003554b) navi_navi_icon_text_pane_t1

0x49df,	// (0x00033e39) navi_tabs_2_long_pane

0x49df,	// (0x00033e39) navi_tabs_2_pane

0x49df,	// (0x00033e39) navi_tabs_3_long_pane

0x49df,	// (0x00033e39) navi_tabs_3_pane

0x49df,	// (0x00033e39) navi_tabs_4_pane

0x1a70,	// (0x00030eca) tabs_2_active_pane_ParamLimits

0x1a70,	// (0x00030eca) tabs_2_active_pane

0x1a80,	// (0x00030eda) tabs_2_passive_pane_ParamLimits

0x1a80,	// (0x00030eda) tabs_2_passive_pane

0x1a3e,	// (0x00030e98) tabs_3_active_pane_ParamLimits

0x1a3e,	// (0x00030e98) tabs_3_active_pane

0x1a4e,	// (0x00030ea8) tabs_3_passive_pane_ParamLimits

0x1a4e,	// (0x00030ea8) tabs_3_passive_pane

0x1a5f,	// (0x00030eb9) tabs_3_passive_pane_cp_ParamLimits

0x1a5f,	// (0x00030eb9) tabs_3_passive_pane_cp

0x19fa,	// (0x00030e54) tabs_4_active_pane_ParamLimits

0x19fa,	// (0x00030e54) tabs_4_active_pane

0x1a0b,	// (0x00030e65) tabs_4_passive_pane_ParamLimits

0x1a0b,	// (0x00030e65) tabs_4_passive_pane

0x1a1c,	// (0x00030e76) tabs_4_passive_pane_cp_ParamLimits

0x1a1c,	// (0x00030e76) tabs_4_passive_pane_cp

0x1a2d,	// (0x00030e87) tabs_4_passive_pane_cp2_ParamLimits

0x1a2d,	// (0x00030e87) tabs_4_passive_pane_cp2

0x19d6,	// (0x00030e30) tabs_2_long_active_pane_ParamLimits

0x19d6,	// (0x00030e30) tabs_2_long_active_pane

0x19e8,	// (0x00030e42) tabs_2_long_passive_pane_ParamLimits

0x19e8,	// (0x00030e42) tabs_2_long_passive_pane

0x1997,	// (0x00030df1) tabs_3_long_active_pane_ParamLimits

0x1997,	// (0x00030df1) tabs_3_long_active_pane

0x19aa,	// (0x00030e04) tabs_3_long_passive_pane_ParamLimits

0x19aa,	// (0x00030e04) tabs_3_long_passive_pane

0x19c3,	// (0x00030e1d) tabs_3_long_passive_pane_cp_ParamLimits

0x19c3,	// (0x00030e1d) tabs_3_long_passive_pane_cp

0x193d,	// (0x00030d97) volume_small_pane_g1

0x1946,	// (0x00030da0) volume_small_pane_g2

0x194f,	// (0x00030da9) volume_small_pane_g3

0x1958,	// (0x00030db2) volume_small_pane_g4

0x1961,	// (0x00030dbb) volume_small_pane_g5

0x196a,	// (0x00030dc4) volume_small_pane_g6

0x1973,	// (0x00030dcd) volume_small_pane_g7

0x197c,	// (0x00030dd6) volume_small_pane_g8

0x1985,	// (0x00030ddf) volume_small_pane_g9

0x198e,	// (0x00030de8) volume_small_pane_g10

0x0009,

0xf8b1,	// (0x0003ed0b) volume_small_pane_g

0x38a2,	// (0x00032cfc) bg_active_tab_pane_cp2_ParamLimits

0x38a2,	// (0x00032cfc) bg_active_tab_pane_cp2

0x3635,	// (0x00032a8f) tabs_3_active_pane_g1

0xd0d2,	// (0x0003c52c) tabs_3_active_pane_t1

0x38a2,	// (0x00032cfc) bg_passive_tab_pane_cp2_ParamLimits

0x38a2,	// (0x00032cfc) bg_passive_tab_pane_cp2

0x3635,	// (0x00032a8f) tabs_3_passive_pane_g1

0xd0d2,	// (0x0003c52c) tabs_3_passive_pane_t1

0x38a2,	// (0x00032cfc) bg_active_tab_pane_cp3_ParamLimits

0x38a2,	// (0x00032cfc) bg_active_tab_pane_cp3

0x364f,	// (0x00032aa9) tabs_4_active_pane_g1

0xd0e4,	// (0x0003c53e) tabs_4_active_pane_t1

0x38a2,	// (0x00032cfc) bg_passive_tab_pane_cp3_ParamLimits

0x38a2,	// (0x00032cfc) bg_passive_tab_pane_cp3

0x364f,	// (0x00032aa9) tabs_4_1_passive_pane_g1

0xd0e4,	// (0x0003c53e) tabs_4_1_passive_pane_t1

0x4e75,	// (0x000342cf) list_highlight_pane_cp2

0xdd0c,	// (0x0003d166) list_set_pane_ParamLimits

0xdd0c,	// (0x0003d166) list_set_pane

0xdda6,	// (0x0003d200) main_pane_set_t1_ParamLimits

0xdda6,	// (0x0003d200) main_pane_set_t1

0xddc6,	// (0x0003d220) main_pane_set_t2_ParamLimits

0xddc6,	// (0x0003d220) main_pane_set_t2

0xddda,	// (0x0003d234) main_pane_set_t3_ParamLimits

0xddda,	// (0x0003d234) main_pane_set_t3

0xddec,	// (0x0003d246) main_pane_set_t4_ParamLimits

0xddec,	// (0x0003d246) main_pane_set_t4

0x0003,

0xf981,	// (0x0003eddb) main_pane_set_t_ParamLimits

0xf981,	// (0x0003eddb) main_pane_set_t

0xddfe,	// (0x0003d258) setting_code_pane

0xde08,	// (0x0003d262) setting_slider_graphic_pane

0xde08,	// (0x0003d262) setting_slider_pane

0xde08,	// (0x0003d262) setting_text_pane

0xde08,	// (0x0003d262) setting_volume_pane

0x0333,	// (0x0002f78d) volume_set_pane

0x2d9f,	// (0x000321f9) bg_set_opt_pane_cp

0x033b,	// (0x0002f795) setting_slider_pane_t1

0x0354,	// (0x0002f7ae) setting_slider_pane_t2

0x036e,	// (0x0002f7c8) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0003e9b8) setting_slider_pane_t

0x0386,	// (0x0002f7e0) slider_set_pane

0x2cbf,	// (0x00032119) bg_set_opt_pane_cp2

0x3669,	// (0x00032ac3) setting_slider_graphic_pane_g1

0x039c,	// (0x0002f7f6) setting_slider_graphic_pane_t1

0x03ac,	// (0x0002f806) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x0003e9bf) setting_slider_graphic_pane_t

0x03bc,	// (0x0002f816) slider_set_pane_cp

0x2cbf,	// (0x00032119) input_focus_pane_cp1

0x6762,	// (0x00035bbc) list_set_text_pane

0x2cb5,	// (0x0003210f) setting_text_pane_g1

0x2cbf,	// (0x00032119) input_focus_pane_cp2

0x2cb5,	// (0x0003210f) setting_code_pane_g1

0x3672,	// (0x00032acc) setting_code_pane_t1

0x03c4,	// (0x0002f81e) set_text_pane_t1_ParamLimits

0x03c4,	// (0x0002f81e) set_text_pane_t1

0x3f14,	// (0x0003336e) set_opt_bg_pane_g1

0x3f1c,	// (0x00033376) set_opt_bg_pane_g2

0x673c,	// (0x00035b96) set_opt_bg_pane_g3

0x3f2c,	// (0x00033386) set_opt_bg_pane_g4

0x3f34,	// (0x0003338e) set_opt_bg_pane_g5

0x3f3c,	// (0x00033396) set_opt_bg_pane_g6

0x6746,	// (0x00035ba0) set_opt_bg_pane_g7

0x674e,	// (0x00035ba8) set_opt_bg_pane_g8

0x6758,	// (0x00035bb2) set_opt_bg_pane_g9

0x0008,

0xf96e,	// (0x0003edc8) set_opt_bg_pane_g

0x672f,	// (0x00035b89) slider_set_pane_g1

0x1b05,	// (0x00030f5f) slider_set_pane_g2

0x0006,

0xf95f,	// (0x0003edb9) slider_set_pane_g

0x1aa1,	// (0x00030efb) volume_set_pane_g1

0x1aa9,	// (0x00030f03) volume_set_pane_g2

0x1ab1,	// (0x00030f0b) volume_set_pane_g3

0x1ab9,	// (0x00030f13) volume_set_pane_g4

0x1ac1,	// (0x00030f1b) volume_set_pane_g5

0x1ac9,	// (0x00030f23) volume_set_pane_g6

0x1ad1,	// (0x00030f2b) volume_set_pane_g7

0x1ad9,	// (0x00030f33) volume_set_pane_g8

0x1ae1,	// (0x00030f3b) volume_set_pane_g9

0x1ae9,	// (0x00030f43) volume_set_pane_g10

0x0009,

0xf937,	// (0x0003ed91) volume_set_pane_g

0xd0f6,	// (0x0003c550) indicator_pane_ParamLimits

0xd0f6,	// (0x0003c550) indicator_pane

0xd11e,	// (0x0003c578) main_idle_pane_g2_ParamLimits

0xd11e,	// (0x0003c578) main_idle_pane_g2

0xd156,	// (0x0003c5b0) main_pane_idle_g1_ParamLimits

0xd156,	// (0x0003c5b0) main_pane_idle_g1

0x36c1,	// (0x00032b1b) popup_clock_digital_analogue_window_ParamLimits

0x36c1,	// (0x00032b1b) popup_clock_digital_analogue_window

0xd17d,	// (0x0003c5d7) soft_indicator_pane_ParamLimits

0xd17d,	// (0x0003c5d7) soft_indicator_pane

0xd197,	// (0x0003c5f1) wallpaper_pane_ParamLimits

0xd197,	// (0x0003c5f1) wallpaper_pane

0x2cb5,	// (0x0003210f) wallpaper_pane_g1

0xd1a9,	// (0x0003c603) indicator_pane_g1_ParamLimits

0xd1a9,	// (0x0003c603) indicator_pane_g1

0x6b66,	// (0x00035fc0) navi_navi_icon_text_pane_srt_g1

0x3713,	// (0x00032b6d) soft_indicator_pane_t1

0x372d,	// (0x00032b87) aid_ps_area_pane

0xd1bf,	// (0x0003c619) aid_ps_clock_pane

0x374c,	// (0x00032ba6) aid_ps_indicator_pane

0x3758,	// (0x00032bb2) indicator_ps_pane_ParamLimits

0x3758,	// (0x00032bb2) indicator_ps_pane

0x3767,	// (0x00032bc1) power_save_pane_g1_ParamLimits

0x3767,	// (0x00032bc1) power_save_pane_g1

0x3773,	// (0x00032bcd) power_save_pane_g2_ParamLimits

0x3773,	// (0x00032bcd) power_save_pane_g2

0xf4bc,	// (0x0003e916) aid_navinavi_width_pane

0x372d,	// (0x00032b87) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0003e9c4) power_save_pane_g_ParamLimits

0xf56a,	// (0x0003e9c4) power_save_pane_g

0x3781,	// (0x00032bdb) power_save_pane_t1_ParamLimits

0x3781,	// (0x00032bdb) power_save_pane_t1

0xd1bf,	// (0x0003c619) aid_ps_clock_pane_ParamLimits

0x374c,	// (0x00032ba6) aid_ps_indicator_pane_ParamLimits

0x3793,	// (0x00032bed) power_save_pane_t4_ParamLimits

0x3793,	// (0x00032bed) power_save_pane_t4

0x0001,

0xf56f,	// (0x0003e9c9) power_save_pane_t_ParamLimits

0xf56f,	// (0x0003e9c9) power_save_pane_t

0x37bd,	// (0x00032c17) power_save_t3_ParamLimits

0x37bd,	// (0x00032c17) power_save_t3

0x37a8,	// (0x00032c02) power_save_t2_ParamLimits

0x37a8,	// (0x00032c02) power_save_t2

0x37d2,	// (0x00032c2c) indicator_ps_pane_g1

0xd1cd,	// (0x0003c627) ai_gene_pane_ParamLimits

0xd1cd,	// (0x0003c627) ai_gene_pane

0xd1e4,	// (0x0003c63e) ai_links_pane_ParamLimits

0xd1e4,	// (0x0003c63e) ai_links_pane

0xd1fc,	// (0x0003c656) indicator_pane_cp1_ParamLimits

0xd1fc,	// (0x0003c656) indicator_pane_cp1

0xd20b,	// (0x0003c665) main_pane_idle_g1_cp_ParamLimits

0xd20b,	// (0x0003c665) main_pane_idle_g1_cp

0x380b,	// (0x00032c65) popup_ai_links_title_window

0xd223,	// (0x0003c67d) soft_indicator_pane_cp1_ParamLimits

0xd223,	// (0x0003c67d) soft_indicator_pane_cp1

0x6529,	// (0x00035983) ai_links_pane_g1

0x6532,	// (0x0003598c) grid_ai_links_pane

0xdc52,	// (0x0003d0ac) ai_gene_pane_1

0x6517,	// (0x00035971) ai_gene_pane_2

0x6520,	// (0x0003597a) list_highlight_pane_cp4

0xdc2e,	// (0x0003d088) cell_ai_link_pane_ParamLimits

0xdc2e,	// (0x0003d088) cell_ai_link_pane

0x64e8,	// (0x00035942) cell_ai_link_pane_g1

0x3a6a,	// (0x00032ec4) cell_ai_link_pane_g2

0x0001,

0xf912,	// (0x0003ed6c) cell_ai_link_pane_g

0x2cbf,	// (0x00032119) grid_highlight_cp2

0x2cbf,	// (0x00032119) bg_popup_sub_pane_cp1

0x382e,	// (0x00032c88) popup_ai_links_title_window_t1

0x6436,	// (0x00035890) ai_gene_pane_1_g1_ParamLimits

0x6436,	// (0x00035890) ai_gene_pane_1_g1

0x6442,	// (0x0003589c) ai_gene_pane_1_g2_ParamLimits

0x6442,	// (0x0003589c) ai_gene_pane_1_g2

0x0001,

0xf908,	// (0x0003ed62) ai_gene_pane_1_g_ParamLimits

0xf908,	// (0x0003ed62) ai_gene_pane_1_g

0x644f,	// (0x000358a9) ai_gene_pane_1_t1_ParamLimits

0x644f,	// (0x000358a9) ai_gene_pane_1_t1

0x6483,	// (0x000358dd) grid_ai_soft_ind_pane

0x6421,	// (0x0003587b) ai_gene_pane_2_t1_ParamLimits

0x6421,	// (0x0003587b) ai_gene_pane_2_t1

0xd237,	// (0x0003c691) main_pane_empty_t1_ParamLimits

0xd237,	// (0x0003c691) main_pane_empty_t1

0xd24f,	// (0x0003c6a9) main_pane_empty_t2_ParamLimits

0xd24f,	// (0x0003c6a9) main_pane_empty_t2

0xd264,	// (0x0003c6be) main_pane_empty_t3_ParamLimits

0xd264,	// (0x0003c6be) main_pane_empty_t3

0xd276,	// (0x0003c6d0) main_pane_empty_t4_ParamLimits

0xd276,	// (0x0003c6d0) main_pane_empty_t4

0xd288,	// (0x0003c6e2) main_pane_empty_t5_ParamLimits

0xd288,	// (0x0003c6e2) main_pane_empty_t5

0x0004,

0xf574,	// (0x0003e9ce) main_pane_empty_t_ParamLimits

0xf574,	// (0x0003e9ce) main_pane_empty_t

0x3f65,	// (0x000333bf) bg_popup_window_pane_ParamLimits

0x3f65,	// (0x000333bf) bg_popup_window_pane

0x6191,	// (0x000355eb) find_popup_pane_cp2_ParamLimits

0x6191,	// (0x000355eb) find_popup_pane_cp2

0x619d,	// (0x000355f7) heading_pane_ParamLimits

0x619d,	// (0x000355f7) heading_pane

0x2cbf,	// (0x00032119) bg_popup_sub_pane

0xdbaf,	// (0x0003d009) bg_popup_window_pane_g1_ParamLimits

0xdbaf,	// (0x0003d009) bg_popup_window_pane_g1

0xdbbe,	// (0x0003d018) bg_popup_window_pane_g2_ParamLimits

0xdbbe,	// (0x0003d018) bg_popup_window_pane_g2

0xdbca,	// (0x0003d024) bg_popup_window_pane_g3_ParamLimits

0xdbca,	// (0x0003d024) bg_popup_window_pane_g3

0xdbd6,	// (0x0003d030) bg_popup_window_pane_g4_ParamLimits

0xdbd6,	// (0x0003d030) bg_popup_window_pane_g4

0xdbe5,	// (0x0003d03f) bg_popup_window_pane_g5_ParamLimits

0xdbe5,	// (0x0003d03f) bg_popup_window_pane_g5

0xdbf5,	// (0x0003d04f) bg_popup_window_pane_g6_ParamLimits

0xdbf5,	// (0x0003d04f) bg_popup_window_pane_g6

0xdc01,	// (0x0003d05b) bg_popup_window_pane_g7_ParamLimits

0xdc01,	// (0x0003d05b) bg_popup_window_pane_g7

0xdc10,	// (0x0003d06a) bg_popup_window_pane_g8_ParamLimits

0xdc10,	// (0x0003d06a) bg_popup_window_pane_g8

0xdc1f,	// (0x0003d079) bg_popup_window_pane_g9_ParamLimits

0xdc1f,	// (0x0003d079) bg_popup_window_pane_g9

0x6177,	// (0x000355d1) bg_popup_window_pane_g10_ParamLimits

0x6177,	// (0x000355d1) bg_popup_window_pane_g10

0x0009,

0xf8d0,	// (0x0003ed2a) bg_popup_window_pane_g_ParamLimits

0xf8d0,	// (0x0003ed2a) bg_popup_window_pane_g

0x60a0,	// (0x000354fa) bg_popup_heading_pane_ParamLimits

0x60a0,	// (0x000354fa) bg_popup_heading_pane

0x1b8d,	// (0x00030fe7) tabs_4_passive_pane_cp_srt_ParamLimits

0x1b8d,	// (0x00030fe7) tabs_4_passive_pane_cp_srt

0x1b9f,	// (0x00030ff9) tabs_4_passive_pane_srt_ParamLimits

0x60b4,	// (0x0003550e) heading_pane_g2

0x1b9f,	// (0x00030ff9) tabs_4_passive_pane_srt

0x540d,	// (0x00034867) bg_passive_tab_pane_cp3_srt_ParamLimits

0x540d,	// (0x00034867) bg_passive_tab_pane_cp3_srt

0x60bc,	// (0x00035516) heading_pane_t1_ParamLimits

0x60bc,	// (0x00035516) heading_pane_t1

0x60d3,	// (0x0003552d) heading_pane_t2_ParamLimits

0x60d3,	// (0x0003552d) heading_pane_t2

0x0001,

0xf8cb,	// (0x0003ed25) heading_pane_t_ParamLimits

0xf8cb,	// (0x0003ed25) heading_pane_t

0x5bc1,	// (0x0003501b) bg_popup_heading_pane_g1

0x5c70,	// (0x000350ca) bg_popup_heading_pane_g2

0x5c7a,	// (0x000350d4) bg_popup_heading_pane_g3

0x5c84,	// (0x000350de) bg_popup_heading_pane_g4

0x5c8e,	// (0x000350e8) bg_popup_heading_pane_g5

0x5c98,	// (0x000350f2) bg_popup_heading_pane_g6

0x5ca0,	// (0x000350fa) bg_popup_heading_pane_g7

0x5ca8,	// (0x00035102) bg_popup_heading_pane_g8

0x5cb2,	// (0x0003510c) bg_popup_heading_pane_g9

0x0008,

0xf887,	// (0x0003ece1) bg_popup_heading_pane_g

0x5399,	// (0x000347f3) bg_popup_sub_pane_g1

0x53a9,	// (0x00034803) bg_popup_sub_pane_g2

0x53a1,	// (0x000347fb) bg_popup_sub_pane_g3

0x53b9,	// (0x00034813) bg_popup_sub_pane_g4

0x53b1,	// (0x0003480b) bg_popup_sub_pane_g5

0x53c1,	// (0x0003481b) bg_popup_sub_pane_g6

0x53c9,	// (0x00034823) bg_popup_sub_pane_g7

0x53d9,	// (0x00034833) bg_popup_sub_pane_g8

0x53d1,	// (0x0003482b) bg_popup_sub_pane_g9

0x0008,

0xf861,	// (0x0003ecbb) bg_popup_sub_pane_g

0x38a2,	// (0x00032cfc) bg_popup_window_pane_cp5_ParamLimits

0x38a2,	// (0x00032cfc) bg_popup_window_pane_cp5

0x38be,	// (0x00032d18) popup_note_window_g1_ParamLimits

0x38be,	// (0x00032d18) popup_note_window_g1

0x38ca,	// (0x00032d24) popup_note_window_t1_ParamLimits

0x38ca,	// (0x00032d24) popup_note_window_t1

0x38e0,	// (0x00032d3a) popup_note_window_t2_ParamLimits

0x38e0,	// (0x00032d3a) popup_note_window_t2

0x38f6,	// (0x00032d50) popup_note_window_t3_ParamLimits

0x38f6,	// (0x00032d50) popup_note_window_t3

0x390c,	// (0x00032d66) popup_note_window_t4_ParamLimits

0x390c,	// (0x00032d66) popup_note_window_t4

0x3934,	// (0x00032d8e) popup_note_window_t5_ParamLimits

0x3934,	// (0x00032d8e) popup_note_window_t5

0x0004,

0xf57f,	// (0x0003e9d9) popup_note_window_t_ParamLimits

0xf57f,	// (0x0003e9d9) popup_note_window_t

0x397e,	// (0x00032dd8) bg_popup_window_pane_cp6_ParamLimits

0x397e,	// (0x00032dd8) bg_popup_window_pane_cp6

0x5b3d,	// (0x00034f97) popup_note_image_window_g1_ParamLimits

0x5b3d,	// (0x00034f97) popup_note_image_window_g1

0x5b49,	// (0x00034fa3) popup_note_image_window_g2_ParamLimits

0x5b49,	// (0x00034fa3) popup_note_image_window_g2

0x0001,

0xf855,	// (0x0003ecaf) popup_note_image_window_g_ParamLimits

0xf855,	// (0x0003ecaf) popup_note_image_window_g

0x5b62,	// (0x00034fbc) popup_note_image_window_t1_ParamLimits

0x5b62,	// (0x00034fbc) popup_note_image_window_t1

0x5b7b,	// (0x00034fd5) popup_note_image_window_t2_ParamLimits

0x5b7b,	// (0x00034fd5) popup_note_image_window_t2

0x5b94,	// (0x00034fee) popup_note_image_window_t3_ParamLimits

0x5b94,	// (0x00034fee) popup_note_image_window_t3

0x0002,

0xf85a,	// (0x0003ecb4) popup_note_image_window_t_ParamLimits

0xf85a,	// (0x0003ecb4) popup_note_image_window_t

0x59fe,	// (0x00034e58) bg_popup_window_pane_cp7_ParamLimits

0x59fe,	// (0x00034e58) bg_popup_window_pane_cp7

0x5a2e,	// (0x00034e88) popup_note_wait_window_g1_ParamLimits

0x5a2e,	// (0x00034e88) popup_note_wait_window_g1

0x5a3a,	// (0x00034e94) popup_note_wait_window_g2_ParamLimits

0x5a3a,	// (0x00034e94) popup_note_wait_window_g2

0x0002,

0xf843,	// (0x0003ec9d) popup_note_wait_window_g_ParamLimits

0xf843,	// (0x0003ec9d) popup_note_wait_window_g

0x5a52,	// (0x00034eac) popup_note_wait_window_t1_ParamLimits

0x5a52,	// (0x00034eac) popup_note_wait_window_t1

0x5a79,	// (0x00034ed3) popup_note_wait_window_t2_ParamLimits

0x5a79,	// (0x00034ed3) popup_note_wait_window_t2

0x5a96,	// (0x00034ef0) popup_note_wait_window_t3_ParamLimits

0x5a96,	// (0x00034ef0) popup_note_wait_window_t3

0x5aa9,	// (0x00034f03) popup_note_wait_window_t4_ParamLimits

0x5aa9,	// (0x00034f03) popup_note_wait_window_t4

0x0004,

0xf84a,	// (0x0003eca4) popup_note_wait_window_t_ParamLimits

0xf84a,	// (0x0003eca4) popup_note_wait_window_t

0x5ace,	// (0x00034f28) wait_bar_pane_ParamLimits

0x5ace,	// (0x00034f28) wait_bar_pane

0x2cbf,	// (0x00032119) wait_anim_pane

0x2cbf,	// (0x00032119) wait_border_pane

0x2cb5,	// (0x0003210f) wait_anim_pane_g1

0x2cb5,	// (0x0003210f) wait_anim_pane_g2

0x0001,

0xf703,	// (0x0003eb5d) wait_anim_pane_g

0x59a2,	// (0x00034dfc) wait_border_pane_g1

0x59ad,	// (0x00034e07) wait_border_pane_g2

0x59b6,	// (0x00034e10) wait_border_pane_g3

0x0002,

0xf83c,	// (0x0003ec96) wait_border_pane_g

0x580d,	// (0x00034c67) bg_popup_window_pane_cp16_ParamLimits

0x580d,	// (0x00034c67) bg_popup_window_pane_cp16

0x590d,	// (0x00034d67) indicator_popup_pane_cp4_ParamLimits

0x590d,	// (0x00034d67) indicator_popup_pane_cp4

0x5921,	// (0x00034d7b) popup_query_data_window_t1_ParamLimits

0x5921,	// (0x00034d7b) popup_query_data_window_t1

0x5933,	// (0x00034d8d) popup_query_data_window_t2_ParamLimits

0x5933,	// (0x00034d8d) popup_query_data_window_t2

0x594c,	// (0x00034da6) popup_query_data_window_t3_ParamLimits

0x594c,	// (0x00034da6) popup_query_data_window_t3

0x0002,

0xf835,	// (0x0003ec8f) popup_query_data_window_t_ParamLimits

0xf835,	// (0x0003ec8f) popup_query_data_window_t

0x5966,	// (0x00034dc0) query_popup_data_pane_ParamLimits

0x5966,	// (0x00034dc0) query_popup_data_pane

0x597a,	// (0x00034dd4) query_popup_data_pane_cp1_ParamLimits

0x597a,	// (0x00034dd4) query_popup_data_pane_cp1

0x580d,	// (0x00034c67) bg_popup_window_pane_cp10_ParamLimits

0x580d,	// (0x00034c67) bg_popup_window_pane_cp10

0x583f,	// (0x00034c99) indicator_popup_pane_ParamLimits

0x583f,	// (0x00034c99) indicator_popup_pane

0x5861,	// (0x00034cbb) popup_query_code_window_t1_ParamLimits

0x5861,	// (0x00034cbb) popup_query_code_window_t1

0x587b,	// (0x00034cd5) popup_query_code_window_t2_ParamLimits

0x587b,	// (0x00034cd5) popup_query_code_window_t2

0x58c4,	// (0x00034d1e) popup_query_code_window_t3_ParamLimits

0x58c4,	// (0x00034d1e) popup_query_code_window_t3

0x0002,

0xf82e,	// (0x0003ec88) popup_query_code_window_t_ParamLimits

0xf82e,	// (0x0003ec88) popup_query_code_window_t

0x58f3,	// (0x00034d4d) query_popup_pane_ParamLimits

0x58f3,	// (0x00034d4d) query_popup_pane

0x397e,	// (0x00032dd8) bg_popup_window_pane_cp15_ParamLimits

0x397e,	// (0x00032dd8) bg_popup_window_pane_cp15

0x399c,	// (0x00032df6) indicator_popup_pane_cp1_ParamLimits

0x399c,	// (0x00032df6) indicator_popup_pane_cp1

0x39af,	// (0x00032e09) indicator_popup_pane_cp2_ParamLimits

0x39af,	// (0x00032e09) indicator_popup_pane_cp2

0x39c2,	// (0x00032e1c) popup_query_data_code_window_g1_ParamLimits

0x39c2,	// (0x00032e1c) popup_query_data_code_window_g1

0x39d5,	// (0x00032e2f) popup_query_data_code_window_t1_ParamLimits

0x39d5,	// (0x00032e2f) popup_query_data_code_window_t1

0x39e7,	// (0x00032e41) popup_query_data_code_window_t2_ParamLimits

0x39e7,	// (0x00032e41) popup_query_data_code_window_t2

0x39f9,	// (0x00032e53) popup_query_data_code_window_t3_ParamLimits

0x39f9,	// (0x00032e53) popup_query_data_code_window_t3

0x3a0f,	// (0x00032e69) popup_query_data_code_window_t4_ParamLimits

0x3a0f,	// (0x00032e69) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x0003e9e4) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x0003e9e4) popup_query_data_code_window_t

0x17b0,	// (0x00030c0a) list_single_midp_graphic_pane_g3

0x3a27,	// (0x00032e81) query_popup_data_pane_cp2_ParamLimits

0x3a3a,	// (0x00032e94) query_popup_pane_cp2_ParamLimits

0x3a3a,	// (0x00032e94) query_popup_pane_cp2

0x2cbf,	// (0x00032119) bg_popup_window_pane_cp11

0x57f9,	// (0x00034c53) heading_pane_cp5

0x3b25,	// (0x00032f7f) listscroll_popup_info_pane

0x2cbf,	// (0x00032119) input_focus_pane_cp3

0x3a4d,	// (0x00032ea7) query_popup_pane_t1

0x3a5b,	// (0x00032eb5) list_popup_info_pane_ParamLimits

0x3a5b,	// (0x00032eb5) list_popup_info_pane

0x3a6a,	// (0x00032ec4) listscroll_popup_info_pane_g1

0x3a72,	// (0x00032ecc) scroll_pane_cp7

0x3a7c,	// (0x00032ed6) popup_info_list_pane_t1_ParamLimits

0x3a7c,	// (0x00032ed6) popup_info_list_pane_t1

0x3a96,	// (0x00032ef0) popup_info_list_pane_t2_ParamLimits

0x3a96,	// (0x00032ef0) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x0003e9ed) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x0003e9ed) popup_info_list_pane_t

0x2cbf,	// (0x00032119) bg_popup_window_pane_cp12

0x6b80,	// (0x00035fda) find_popup_pane

0x2d9f,	// (0x000321f9) bg_popup_window_pane_cp3

0x3ab0,	// (0x00032f0a) heading_pane_cp3

0x3abc,	// (0x00032f16) listscroll_popup_graphic_pane

0x2cbf,	// (0x00032119) bg_popup_window_pane_cp4

0xd2ea,	// (0x0003c744) heading_pane_cp4

0x3b25,	// (0x00032f7f) listscroll_popup_colour_pane

0x3b2d,	// (0x00032f87) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x3b2d,	// (0x00032f87) cell_large_graphic_colour_none_popup_pane

0xd2f2,	// (0x0003c74c) grid_large_graphic_colour_popup_pane_ParamLimits

0xd2f2,	// (0x0003c74c) grid_large_graphic_colour_popup_pane

0x3b6d,	// (0x00032fc7) listscroll_popup_colour_pane_g1_ParamLimits

0x3b6d,	// (0x00032fc7) listscroll_popup_colour_pane_g1

0x3b84,	// (0x00032fde) listscroll_popup_colour_pane_g2_ParamLimits

0x3b84,	// (0x00032fde) listscroll_popup_colour_pane_g2

0x3b9b,	// (0x00032ff5) listscroll_popup_colour_pane_g3_ParamLimits

0x3b9b,	// (0x00032ff5) listscroll_popup_colour_pane_g3

0xd316,	// (0x0003c770) listscroll_popup_colour_pane_g4_ParamLimits

0xd316,	// (0x0003c770) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x0003e9f2) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x0003e9f2) listscroll_popup_colour_pane_g

0x3bbf,	// (0x00033019) scroll_pane_cp6_ParamLimits

0x3bbf,	// (0x00033019) scroll_pane_cp6

0xd326,	// (0x0003c780) cell_large_graphic_colour_popup_pane_ParamLimits

0xd326,	// (0x0003c780) cell_large_graphic_colour_popup_pane

0x3bf0,	// (0x0003304a) cell_large_graphic_colour_none_popup_pane_t1

0x2cbf,	// (0x00032119) grid_highlight_pane_cp5

0x3bff,	// (0x00033059) cell_large_graphic_colour_popup_pane_g1

0x3c07,	// (0x00033061) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0003e9fb) cell_large_graphic_colour_popup_pane_g

0x3c0f,	// (0x00033069) cell_large_graphic_colour_popup_pane_g2_copy1

0x3c18,	// (0x00033072) grid_highlight_pane_cp4

0x3c20,	// (0x0003307a) bg_popup_window_pane_cp8_ParamLimits

0x3c20,	// (0x0003307a) bg_popup_window_pane_cp8

0x3c3b,	// (0x00033095) popup_snote_single_text_window_g1_ParamLimits

0x3c3b,	// (0x00033095) popup_snote_single_text_window_g1

0x3c4d,	// (0x000330a7) popup_snote_single_text_window_t1_ParamLimits

0x3c4d,	// (0x000330a7) popup_snote_single_text_window_t1

0x3c60,	// (0x000330ba) popup_snote_single_text_window_t2_ParamLimits

0x3c60,	// (0x000330ba) popup_snote_single_text_window_t2

0x3c73,	// (0x000330cd) popup_snote_single_text_window_t3_ParamLimits

0x3c73,	// (0x000330cd) popup_snote_single_text_window_t3

0x3cac,	// (0x00033106) popup_snote_single_text_window_t4_ParamLimits

0x3cac,	// (0x00033106) popup_snote_single_text_window_t4

0x3ce0,	// (0x0003313a) popup_snote_single_text_window_t5_ParamLimits

0x3ce0,	// (0x0003313a) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0003ea00) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0003ea00) popup_snote_single_text_window_t

0x3d0f,	// (0x00033169) bg_popup_window_pane_cp9_ParamLimits

0x3d0f,	// (0x00033169) bg_popup_window_pane_cp9

0x3c3b,	// (0x00033095) popup_snote_single_graphic_window_g1_ParamLimits

0x3c3b,	// (0x00033095) popup_snote_single_graphic_window_g1

0x3d1d,	// (0x00033177) popup_snote_single_graphic_window_g2_ParamLimits

0x3d1d,	// (0x00033177) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0003ea0b) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0003ea0b) popup_snote_single_graphic_window_g

0x3d29,	// (0x00033183) popup_snote_single_graphic_window_t1_ParamLimits

0x3d29,	// (0x00033183) popup_snote_single_graphic_window_t1

0x3d3c,	// (0x00033196) popup_snote_single_graphic_window_t2_ParamLimits

0x3d3c,	// (0x00033196) popup_snote_single_graphic_window_t2

0x3d4f,	// (0x000331a9) popup_snote_single_graphic_window_t3_ParamLimits

0x3d4f,	// (0x000331a9) popup_snote_single_graphic_window_t3

0x3d88,	// (0x000331e2) popup_snote_single_graphic_window_t4_ParamLimits

0x3d88,	// (0x000331e2) popup_snote_single_graphic_window_t4

0x3dbc,	// (0x00033216) popup_snote_single_graphic_window_t5_ParamLimits

0x3dbc,	// (0x00033216) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0003ea10) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0003ea10) popup_snote_single_graphic_window_t

0x6ac2,	// (0x00035f1c) grid_graphic_popup_pane_ParamLimits

0x6ac2,	// (0x00035f1c) grid_graphic_popup_pane

0x6aec,	// (0x00035f46) listscroll_popup_graphic_pane_g1_ParamLimits

0x6aec,	// (0x00035f46) listscroll_popup_graphic_pane_g1

0xdf17,	// (0x0003d371) listscroll_popup_graphic_pane_g2_ParamLimits

0xdf17,	// (0x0003d371) listscroll_popup_graphic_pane_g2

0x0001,

0xf9ab,	// (0x0003ee05) listscroll_popup_graphic_pane_g_ParamLimits

0xf9ab,	// (0x0003ee05) listscroll_popup_graphic_pane_g

0x6b14,	// (0x00035f6e) scroll_pane_cp5

0xdebc,	// (0x0003d316) cell_graphic_popup_pane_ParamLimits

0xdebc,	// (0x0003d316) cell_graphic_popup_pane

0x6a42,	// (0x00035e9c) cell_graphic_popup_pane_g1

0x6a4a,	// (0x00035ea4) cell_graphic_popup_pane_g2

0x3c0f,	// (0x00033069) cell_graphic_popup_pane_g3

0x0002,

0xf9a4,	// (0x0003edfe) cell_graphic_popup_pane_g

0x6a53,	// (0x00035ead) cell_graphic_popup_pane_t2

0x3c18,	// (0x00033072) grid_highlight_pane_cp3

0x3dfd,	// (0x00033257) list_gen_pane_ParamLimits

0x3dfd,	// (0x00033257) list_gen_pane

0x3e2f,	// (0x00033289) scroll_pane

0xde73,	// (0x0003d2cd) bg_list_pane_g1_ParamLimits

0xde73,	// (0x0003d2cd) bg_list_pane_g1

0x69b7,	// (0x00035e11) bg_list_pane_g2_ParamLimits

0x69b7,	// (0x00035e11) bg_list_pane_g2

0x69cc,	// (0x00035e26) bg_list_pane_g3_ParamLimits

0x69cc,	// (0x00035e26) bg_list_pane_g3

0x69e0,	// (0x00035e3a) bg_list_pane_g4_ParamLimits

0x69e0,	// (0x00035e3a) bg_list_pane_g4

0xde90,	// (0x0003d2ea) bg_list_pane_g5_ParamLimits

0xde90,	// (0x0003d2ea) bg_list_pane_g5

0x0004,

0xf999,	// (0x0003edf3) bg_list_pane_g_ParamLimits

0xf999,	// (0x0003edf3) bg_list_pane_g

0xde3b,	// (0x0003d295) list_double2_graphic_large_graphic_pane_ParamLimits

0xde3b,	// (0x0003d295) list_double2_graphic_large_graphic_pane

0xde3b,	// (0x0003d295) list_double2_graphic_pane_ParamLimits

0xde3b,	// (0x0003d295) list_double2_graphic_pane

0xde3b,	// (0x0003d295) list_double2_large_graphic_pane_ParamLimits

0xde3b,	// (0x0003d295) list_double2_large_graphic_pane

0xde3b,	// (0x0003d295) list_double2_pane_ParamLimits

0xde3b,	// (0x0003d295) list_double2_pane

0xde3b,	// (0x0003d295) list_double_graphic_heading_pane_ParamLimits

0xde3b,	// (0x0003d295) list_double_graphic_heading_pane

0xde3b,	// (0x0003d295) list_double_graphic_pane_ParamLimits

0xde3b,	// (0x0003d295) list_double_graphic_pane

0xde3b,	// (0x0003d295) list_double_heading_pane_ParamLimits

0xde3b,	// (0x0003d295) list_double_heading_pane

0xde3b,	// (0x0003d295) list_double_large_graphic_pane_ParamLimits

0xde3b,	// (0x0003d295) list_double_large_graphic_pane

0xde3b,	// (0x0003d295) list_double_number_pane_ParamLimits

0xde3b,	// (0x0003d295) list_double_number_pane

0xde3b,	// (0x0003d295) list_double_pane_ParamLimits

0xde3b,	// (0x0003d295) list_double_pane

0xde3b,	// (0x0003d295) list_double_time_pane_ParamLimits

0xde3b,	// (0x0003d295) list_double_time_pane

0xde3b,	// (0x0003d295) list_setting_number_pane_ParamLimits

0xde3b,	// (0x0003d295) list_setting_number_pane

0xde3b,	// (0x0003d295) list_setting_pane_ParamLimits

0xde3b,	// (0x0003d295) list_setting_pane

0xde4d,	// (0x0003d2a7) list_single_2graphic_pane_ParamLimits

0xde4d,	// (0x0003d2a7) list_single_2graphic_pane

0xde4d,	// (0x0003d2a7) list_single_graphic_heading_pane_ParamLimits

0xde4d,	// (0x0003d2a7) list_single_graphic_heading_pane

0xde4d,	// (0x0003d2a7) list_single_graphic_pane_ParamLimits

0xde4d,	// (0x0003d2a7) list_single_graphic_pane

0xde4d,	// (0x0003d2a7) list_single_heading_pane_ParamLimits

0xde4d,	// (0x0003d2a7) list_single_heading_pane

0xde4d,	// (0x0003d2a7) list_single_large_graphic_pane_ParamLimits

0xde4d,	// (0x0003d2a7) list_single_large_graphic_pane

0xde4d,	// (0x0003d2a7) list_single_number_heading_pane_ParamLimits

0xde4d,	// (0x0003d2a7) list_single_number_heading_pane

0xde4d,	// (0x0003d2a7) list_single_number_pane_ParamLimits

0xde4d,	// (0x0003d2a7) list_single_number_pane

0xde4d,	// (0x0003d2a7) list_single_pane_ParamLimits

0xde4d,	// (0x0003d2a7) list_single_pane

0x2cbf,	// (0x00032119) list_highlight_pane_cp1

0x175d,	// (0x00030bb7) list_single_pane_g1_ParamLimits

0x175d,	// (0x00030bb7) list_single_pane_g1

0x1769,	// (0x00030bc3) list_single_pane_g2_ParamLimits

0x1769,	// (0x00030bc3) list_single_pane_g2

0x0001,

0xf5c8,	// (0x0003ea22) list_single_pane_g_ParamLimits

0xf5c8,	// (0x0003ea22) list_single_pane_g

0x2fcb,	// (0x00032425) list_single_pane_t1_ParamLimits

0x2fcb,	// (0x00032425) list_single_pane_t1

0x175d,	// (0x00030bb7) list_single_number_pane_g1_ParamLimits

0x175d,	// (0x00030bb7) list_single_number_pane_g1

0x1769,	// (0x00030bc3) list_single_number_pane_g2_ParamLimits

0x1769,	// (0x00030bc3) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x0003ea22) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x0003ea22) list_single_number_pane_g

0x1775,	// (0x00030bcf) list_single_number_pane_t1_ParamLimits

0x1775,	// (0x00030bcf) list_single_number_pane_t1

0xc750,	// (0x0003bbaa) list_single_number_pane_t2_ParamLimits

0xc750,	// (0x0003bbaa) list_single_number_pane_t2

0x0001,

0xf95a,	// (0x0003edb4) list_single_number_pane_t_ParamLimits

0xf95a,	// (0x0003edb4) list_single_number_pane_t

0xb89a,	// (0x0003acf4) list_single_graphic_pane_g1_ParamLimits

0xb89a,	// (0x0003acf4) list_single_graphic_pane_g1

0x175d,	// (0x00030bb7) list_single_graphic_pane_g2_ParamLimits

0x175d,	// (0x00030bb7) list_single_graphic_pane_g2

0x1769,	// (0x00030bc3) list_single_graphic_pane_g3_ParamLimits

0x1769,	// (0x00030bc3) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0003ea1b) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0003ea1b) list_single_graphic_pane_g

0xb8a6,	// (0x0003ad00) list_single_graphic_pane_t1_ParamLimits

0xb8a6,	// (0x0003ad00) list_single_graphic_pane_t1

0x175d,	// (0x00030bb7) list_single_heading_pane_g1_ParamLimits

0x175d,	// (0x00030bb7) list_single_heading_pane_g1

0x1769,	// (0x00030bc3) list_single_heading_pane_g2_ParamLimits

0x1769,	// (0x00030bc3) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x0003ea22) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x0003ea22) list_single_heading_pane_g

0xb8bc,	// (0x0003ad16) list_single_heading_pane_t1_ParamLimits

0xb8bc,	// (0x0003ad16) list_single_heading_pane_t1

0xb8d2,	// (0x0003ad2c) list_single_heading_pane_t2_ParamLimits

0xb8d2,	// (0x0003ad2c) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x0003ea27) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x0003ea27) list_single_heading_pane_t

0x175d,	// (0x00030bb7) list_single_number_heading_pane_g1_ParamLimits

0x175d,	// (0x00030bb7) list_single_number_heading_pane_g1

0x1769,	// (0x00030bc3) list_single_number_heading_pane_g2_ParamLimits

0x1769,	// (0x00030bc3) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x0003ea22) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x0003ea22) list_single_number_heading_pane_g

0xb8bc,	// (0x0003ad16) list_single_number_heading_pane_t1_ParamLimits

0xb8bc,	// (0x0003ad16) list_single_number_heading_pane_t1

0x2f7f,	// (0x000323d9) list_single_number_heading_pane_t2_ParamLimits

0x2f7f,	// (0x000323d9) list_single_number_heading_pane_t2

0x2f91,	// (0x000323eb) list_single_number_heading_pane_t3_ParamLimits

0x2f91,	// (0x000323eb) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x0003ea2c) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x0003ea2c) list_single_number_heading_pane_t

0x1751,	// (0x00030bab) list_single_graphic_heading_pane_g1_ParamLimits

0x1751,	// (0x00030bab) list_single_graphic_heading_pane_g1

0xb8e4,	// (0x0003ad3e) list_single_graphic_heading_pane_g4_ParamLimits

0xb8e4,	// (0x0003ad3e) list_single_graphic_heading_pane_g4

0x1769,	// (0x00030bc3) list_single_graphic_heading_pane_g5_ParamLimits

0x1769,	// (0x00030bc3) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x0003ea33) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x0003ea33) list_single_graphic_heading_pane_g

0xb8bc,	// (0x0003ad16) list_single_graphic_heading_pane_t1_ParamLimits

0xb8bc,	// (0x0003ad16) list_single_graphic_heading_pane_t1

0xb8f5,	// (0x0003ad4f) list_single_graphic_heading_pane_t2_ParamLimits

0xb8f5,	// (0x0003ad4f) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x0003ea3a) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x0003ea3a) list_single_graphic_heading_pane_t

0x2fe1,	// (0x0003243b) list_single_large_graphic_pane_g1_ParamLimits

0x2fe1,	// (0x0003243b) list_single_large_graphic_pane_g1

0x175d,	// (0x00030bb7) list_single_large_graphic_pane_g2_ParamLimits

0x175d,	// (0x00030bb7) list_single_large_graphic_pane_g2

0x1769,	// (0x00030bc3) list_single_large_graphic_pane_g3_ParamLimits

0x1769,	// (0x00030bc3) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x0003ea3f) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x0003ea3f) list_single_large_graphic_pane_g

0x59ad,	// (0x00034e07) wait_border_pane_g2_copy1

0xb907,	// (0x0003ad61) list_single_large_graphic_pane_g4_cp2

0x2fed,	// (0x00032447) list_single_large_graphic_pane_t1_ParamLimits

0x2fed,	// (0x00032447) list_single_large_graphic_pane_t1

0xb90f,	// (0x0003ad69) list_double_pane_g1_ParamLimits

0xb90f,	// (0x0003ad69) list_double_pane_g1

0xb91b,	// (0x0003ad75) list_double_pane_g2_ParamLimits

0xb91b,	// (0x0003ad75) list_double_pane_g2

0x0001,

0xf5ec,	// (0x0003ea46) list_double_pane_g_ParamLimits

0xf5ec,	// (0x0003ea46) list_double_pane_g

0xb927,	// (0x0003ad81) list_double_pane_t1_ParamLimits

0xb927,	// (0x0003ad81) list_double_pane_t1

0xb93d,	// (0x0003ad97) list_double_pane_t2_ParamLimits

0xb93d,	// (0x0003ad97) list_double_pane_t2

0x0001,

0xf5f1,	// (0x0003ea4b) list_double_pane_t_ParamLimits

0xf5f1,	// (0x0003ea4b) list_double_pane_t

0xb94f,	// (0x0003ada9) list_double2_pane_g1_ParamLimits

0xb94f,	// (0x0003ada9) list_double2_pane_g1

0xb960,	// (0x0003adba) list_double2_pane_g2_ParamLimits

0xb960,	// (0x0003adba) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x0003ea50) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x0003ea50) list_double2_pane_g

0xb96c,	// (0x0003adc6) list_double2_pane_t1_ParamLimits

0xb96c,	// (0x0003adc6) list_double2_pane_t1

0xb982,	// (0x0003addc) list_double2_pane_t2_ParamLimits

0xb982,	// (0x0003addc) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x0003ea55) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x0003ea55) list_double2_pane_t

0xb90f,	// (0x0003ad69) list_double_number_pane_g1_ParamLimits

0xb90f,	// (0x0003ad69) list_double_number_pane_g1

0xb91b,	// (0x0003ad75) list_double_number_pane_g2_ParamLimits

0xb91b,	// (0x0003ad75) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x0003ea46) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x0003ea46) list_double_number_pane_g

0xb994,	// (0x0003adee) list_double_number_pane_t1_ParamLimits

0xb994,	// (0x0003adee) list_double_number_pane_t1

0xb9a6,	// (0x0003ae00) list_double_number_pane_t2_ParamLimits

0xb9a6,	// (0x0003ae00) list_double_number_pane_t2

0xb9bc,	// (0x0003ae16) list_double_number_pane_t3_ParamLimits

0xb9bc,	// (0x0003ae16) list_double_number_pane_t3

0x0002,

0xf600,	// (0x0003ea5a) list_double_number_pane_t_ParamLimits

0xf600,	// (0x0003ea5a) list_double_number_pane_t

0xb9ce,	// (0x0003ae28) list_double_graphic_pane_g1_ParamLimits

0xb9ce,	// (0x0003ae28) list_double_graphic_pane_g1

0xb9da,	// (0x0003ae34) list_double_graphic_pane_g2_ParamLimits

0xb9da,	// (0x0003ae34) list_double_graphic_pane_g2

0xb9e9,	// (0x0003ae43) list_double_graphic_pane_g3_ParamLimits

0xb9e9,	// (0x0003ae43) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x0003ea61) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x0003ea61) list_double_graphic_pane_g

0xba01,	// (0x0003ae5b) list_double_graphic_pane_t1_ParamLimits

0xba01,	// (0x0003ae5b) list_double_graphic_pane_t1

0xba17,	// (0x0003ae71) list_double_graphic_pane_t2_ParamLimits

0xba17,	// (0x0003ae71) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x0003ea6a) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x0003ea6a) list_double_graphic_pane_t

0x070d,	// (0x0002fb67) list_double2_graphic_pane_g1_ParamLimits

0x070d,	// (0x0002fb67) list_double2_graphic_pane_g1

0x32a2,	// (0x000326fc) list_double2_graphic_pane_g2_ParamLimits

0x32a2,	// (0x000326fc) list_double2_graphic_pane_g2

0xb960,	// (0x0003adba) list_double2_graphic_pane_g3_ParamLimits

0xb960,	// (0x0003adba) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x0003ea6f) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x0003ea6f) list_double2_graphic_pane_g

0xba29,	// (0x0003ae83) list_double2_graphic_pane_t1_ParamLimits

0xba29,	// (0x0003ae83) list_double2_graphic_pane_t1

0xba3f,	// (0x0003ae99) list_double2_graphic_pane_t2_ParamLimits

0xba3f,	// (0x0003ae99) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x0003ea76) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x0003ea76) list_double2_graphic_pane_t

0xba51,	// (0x0003aeab) list_double_large_graphic_pane_g1_ParamLimits

0xba51,	// (0x0003aeab) list_double_large_graphic_pane_g1

0xba70,	// (0x0003aeca) list_double_large_graphic_pane_g2_ParamLimits

0xba70,	// (0x0003aeca) list_double_large_graphic_pane_g2

0xb91b,	// (0x0003ad75) list_double_large_graphic_pane_g3_ParamLimits

0xb91b,	// (0x0003ad75) list_double_large_graphic_pane_g3

0xba81,	// (0x0003aedb) list_double_large_graphic_pane_g4_ParamLimits

0xba81,	// (0x0003aedb) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x0003ea7b) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x0003ea7b) list_double_large_graphic_pane_g

0xba94,	// (0x0003aeee) list_double_large_graphic_pane_t1_ParamLimits

0xba94,	// (0x0003aeee) list_double_large_graphic_pane_t1

0xbaad,	// (0x0003af07) list_double_large_graphic_pane_t2_ParamLimits

0xbaad,	// (0x0003af07) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x0003ea86) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x0003ea86) list_double_large_graphic_pane_t

0xbabf,	// (0x0003af19) list_double2_large_graphic_pane_g1_ParamLimits

0xbabf,	// (0x0003af19) list_double2_large_graphic_pane_g1

0xb94f,	// (0x0003ada9) list_double2_large_graphic_pane_g2_ParamLimits

0xb94f,	// (0x0003ada9) list_double2_large_graphic_pane_g2

0xb960,	// (0x0003adba) list_double2_large_graphic_pane_g3_ParamLimits

0xb960,	// (0x0003adba) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x0003ea8b) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x0003ea8b) list_double2_large_graphic_pane_g

0xbacb,	// (0x0003af25) list_double2_large_graphic_pane_t1_ParamLimits

0xbacb,	// (0x0003af25) list_double2_large_graphic_pane_t1

0xbae1,	// (0x0003af3b) list_double2_large_graphic_pane_t2_ParamLimits

0xbae1,	// (0x0003af3b) list_double2_large_graphic_pane_t2

0x0001,

0xf638,	// (0x0003ea92) list_double2_large_graphic_pane_t_ParamLimits

0xf638,	// (0x0003ea92) list_double2_large_graphic_pane_t

0xbaf3,	// (0x0003af4d) list_double_heading_pane_g1_ParamLimits

0xbaf3,	// (0x0003af4d) list_double_heading_pane_g1

0x04e2,	// (0x0002f93c) list_double_heading_pane_g2_ParamLimits

0x04e2,	// (0x0002f93c) list_double_heading_pane_g2

0x0001,

0xf63d,	// (0x0003ea97) list_double_heading_pane_g_ParamLimits

0xf63d,	// (0x0003ea97) list_double_heading_pane_g

0xbb04,	// (0x0003af5e) list_double_heading_pane_t1_ParamLimits

0xbb04,	// (0x0003af5e) list_double_heading_pane_t1

0xb982,	// (0x0003addc) list_double_heading_pane_t2_ParamLimits

0xb982,	// (0x0003addc) list_double_heading_pane_t2

0x0001,

0xf642,	// (0x0003ea9c) list_double_heading_pane_t_ParamLimits

0xf642,	// (0x0003ea9c) list_double_heading_pane_t

0x070d,	// (0x0002fb67) list_double_graphic_heading_pane_g1_ParamLimits

0x070d,	// (0x0002fb67) list_double_graphic_heading_pane_g1

0xbaf3,	// (0x0003af4d) list_double_graphic_heading_pane_g2_ParamLimits

0xbaf3,	// (0x0003af4d) list_double_graphic_heading_pane_g2

0x04e2,	// (0x0002f93c) list_double_graphic_heading_pane_g3_ParamLimits

0x04e2,	// (0x0002f93c) list_double_graphic_heading_pane_g3

0x0002,

0xf647,	// (0x0003eaa1) list_double_graphic_heading_pane_g_ParamLimits

0xf647,	// (0x0003eaa1) list_double_graphic_heading_pane_g

0xbb1a,	// (0x0003af74) list_double_graphic_heading_pane_t1_ParamLimits

0xbb1a,	// (0x0003af74) list_double_graphic_heading_pane_t1

0xba3f,	// (0x0003ae99) list_double_graphic_heading_pane_t2_ParamLimits

0xba3f,	// (0x0003ae99) list_double_graphic_heading_pane_t2

0x0001,

0xf64e,	// (0x0003eaa8) list_double_graphic_heading_pane_t_ParamLimits

0xf64e,	// (0x0003eaa8) list_double_graphic_heading_pane_t

0xba70,	// (0x0003aeca) list_double_time_pane_g1_ParamLimits

0xba70,	// (0x0003aeca) list_double_time_pane_g1

0xb91b,	// (0x0003ad75) list_double_time_pane_g2_ParamLimits

0xb91b,	// (0x0003ad75) list_double_time_pane_g2

0x0001,

0xf653,	// (0x0003eaad) list_double_time_pane_g_ParamLimits

0xf653,	// (0x0003eaad) list_double_time_pane_g

0xbb30,	// (0x0003af8a) list_double_time_pane_t1_ParamLimits

0xbb30,	// (0x0003af8a) list_double_time_pane_t1

0xbb46,	// (0x0003afa0) list_double_time_pane_t2_ParamLimits

0xbb46,	// (0x0003afa0) list_double_time_pane_t2

0xbb58,	// (0x0003afb2) list_double_time_pane_t3_ParamLimits

0xbb58,	// (0x0003afb2) list_double_time_pane_t3

0xbb6a,	// (0x0003afc4) list_double_time_pane_t4_ParamLimits

0xbb6a,	// (0x0003afc4) list_double_time_pane_t4

0x0003,

0xf658,	// (0x0003eab2) list_double_time_pane_t_ParamLimits

0xf658,	// (0x0003eab2) list_double_time_pane_t

0xbb7c,	// (0x0003afd6) list_setting_pane_g1_ParamLimits

0xbb7c,	// (0x0003afd6) list_setting_pane_g1

0xbb88,	// (0x0003afe2) list_setting_pane_g2_ParamLimits

0xbb88,	// (0x0003afe2) list_setting_pane_g2

0x0001,

0xf661,	// (0x0003eabb) list_setting_pane_g_ParamLimits

0xf661,	// (0x0003eabb) list_setting_pane_g

0xbb94,	// (0x0003afee) list_setting_pane_t1_ParamLimits

0xbb94,	// (0x0003afee) list_setting_pane_t1

0xbbae,	// (0x0003b008) list_setting_pane_t2_ParamLimits

0xbbae,	// (0x0003b008) list_setting_pane_t2

0x0002,

0xf666,	// (0x0003eac0) list_setting_pane_t_ParamLimits

0xf666,	// (0x0003eac0) list_setting_pane_t

0xbbed,	// (0x0003b047) set_value_pane_cp_ParamLimits

0xbbed,	// (0x0003b047) set_value_pane_cp

0xbbf9,	// (0x0003b053) list_setting_number_pane_g1_ParamLimits

0xbbf9,	// (0x0003b053) list_setting_number_pane_g1

0xbc05,	// (0x0003b05f) list_setting_number_pane_g2_ParamLimits

0xbc05,	// (0x0003b05f) list_setting_number_pane_g2

0x0001,

0xf66d,	// (0x0003eac7) list_setting_number_pane_g_ParamLimits

0xf66d,	// (0x0003eac7) list_setting_number_pane_g

0xbc11,	// (0x0003b06b) list_setting_number_pane_t1_ParamLimits

0xbc11,	// (0x0003b06b) list_setting_number_pane_t1

0xbc2a,	// (0x0003b084) list_setting_number_pane_t2_ParamLimits

0xbc2a,	// (0x0003b084) list_setting_number_pane_t2

0xbc44,	// (0x0003b09e) list_setting_number_pane_t3_ParamLimits

0xbc44,	// (0x0003b09e) list_setting_number_pane_t3

0x0003,

0xf672,	// (0x0003eacc) list_setting_number_pane_t_ParamLimits

0xf672,	// (0x0003eacc) list_setting_number_pane_t

0xbbed,	// (0x0003b047) set_value_pane_ParamLimits

0xbbed,	// (0x0003b047) set_value_pane

0x3e63,	// (0x000332bd) bg_set_opt_pane_ParamLimits

0x3e63,	// (0x000332bd) bg_set_opt_pane

0x086e,	// (0x0002fcc8) set_value_pane_t1

0x3e84,	// (0x000332de) slider_set_pane_cp3

0x3e8d,	// (0x000332e7) volume_small_pane_cp

0x3e96,	// (0x000332f0) list_form_gen_pane

0x3e9f,	// (0x000332f9) scroll_pane_cp8

0xbc87,	// (0x0003b0e1) form_field_data_pane_ParamLimits

0xbc87,	// (0x0003b0e1) form_field_data_pane

0xbc9e,	// (0x0003b0f8) form_field_data_wide_pane_ParamLimits

0xbc9e,	// (0x0003b0f8) form_field_data_wide_pane

0xbcbe,	// (0x0003b118) form_field_popup_pane_ParamLimits

0xbcbe,	// (0x0003b118) form_field_popup_pane

0xbcd6,	// (0x0003b130) form_field_popup_wide_pane_ParamLimits

0xbcd6,	// (0x0003b130) form_field_popup_wide_pane

0x0902,	// (0x0002fd5c) form_field_slider_pane_ParamLimits

0x0902,	// (0x0002fd5c) form_field_slider_pane

0x0915,	// (0x0002fd6f) form_field_slider_wide_pane_ParamLimits

0x0915,	// (0x0002fd6f) form_field_slider_wide_pane

0x3eb0,	// (0x0003330a) data_form_pane

0xbcf7,	// (0x0003b151) form_field_data_pane_t1

0x3ebc,	// (0x00033316) input_focus_pane

0x094a,	// (0x0002fda4) data_form_wide_pane

0x0967,	// (0x0002fdc1) form_field_data_wide_pane_t1

0x3c2d,	// (0x00033087) input_focus_pane_cp6

0xbd11,	// (0x0003b16b) form_field_popup_pane_t1

0x3ebc,	// (0x00033316) input_focus_pane_cp7

0x3eea,	// (0x00033344) list_form_pane

0x09a9,	// (0x0002fe03) form_field_popup_wide_pane_t1

0x3ebc,	// (0x00033316) input_focus_pane_cp8

0x3ef6,	// (0x00033350) list_form_wide_pane

0xbd33,	// (0x0003b18d) form_field_slider_pane_t1_ParamLimits

0xbd33,	// (0x0003b18d) form_field_slider_pane_t1

0xbd4b,	// (0x0003b1a5) form_field_slider_pane_t2_ParamLimits

0xbd4b,	// (0x0003b1a5) form_field_slider_pane_t2

0x0001,

0xf682,	// (0x0003eadc) form_field_slider_pane_t_ParamLimits

0xf682,	// (0x0003eadc) form_field_slider_pane_t

0x38a2,	// (0x00032cfc) input_focus_pane_cp9_ParamLimits

0x38a2,	// (0x00032cfc) input_focus_pane_cp9

0xbd60,	// (0x0003b1ba) slider_cont_pane_ParamLimits

0xbd60,	// (0x0003b1ba) slider_cont_pane

0x3f02,	// (0x0003335c) form_field_slider_wide_pane_t1_ParamLimits

0x3f02,	// (0x0003335c) form_field_slider_wide_pane_t1

0x0a05,	// (0x0002fe5f) form_field_slider_wide_pane_t2_ParamLimits

0x0a05,	// (0x0002fe5f) form_field_slider_wide_pane_t2

0x0001,

0xf687,	// (0x0003eae1) form_field_slider_wide_pane_t_ParamLimits

0xf687,	// (0x0003eae1) form_field_slider_wide_pane_t

0x38a2,	// (0x00032cfc) input_focus_pane_cp10_ParamLimits

0x38a2,	// (0x00032cfc) input_focus_pane_cp10

0xbd74,	// (0x0003b1ce) slider_cont_pane_cp1_ParamLimits

0xbd74,	// (0x0003b1ce) slider_cont_pane_cp1

0xbd88,	// (0x0003b1e2) slider_form_pane_cp

0x3f14,	// (0x0003336e) input_focus_pane_g1

0x3f1c,	// (0x00033376) input_focus_pane_g2

0x3f24,	// (0x0003337e) input_focus_pane_g3

0x3f2c,	// (0x00033386) input_focus_pane_g4

0x3f34,	// (0x0003338e) input_focus_pane_g5

0x3f3c,	// (0x00033396) input_focus_pane_g6

0x3f44,	// (0x0003339e) input_focus_pane_g7

0x3f4c,	// (0x000333a6) input_focus_pane_g8

0x3f54,	// (0x000333ae) input_focus_pane_g9

0x2cb5,	// (0x0003210f) input_focus_pane_g10

0x0009,

0xf68c,	// (0x0003eae6) input_focus_pane_g

0x59b6,	// (0x00034e10) wait_border_pane_g3_copy1

0xbd90,	// (0x0003b1ea) data_form_pane_t1

0x2cb5,	// (0x0003210f) wait_anim_pane_g1_copy1

0xc762,	// (0x0003bbbc) data_form_wide_pane_t1

0xbdaa,	// (0x0003b204) list_form_graphic_pane_cp_ParamLimits

0xbdaa,	// (0x0003b204) list_form_graphic_pane_cp

0x68d7,	// (0x00035d31) slider_form_pane_g1

0x68e0,	// (0x00035d3a) slider_form_pane_g2

0x0006,

0xf98a,	// (0x0003ede4) slider_form_pane_g

0xbdaa,	// (0x0003b204) list_form_graphic_pane_ParamLimits

0xbdaa,	// (0x0003b204) list_form_graphic_pane

0x0a83,	// (0x0002fedd) list_form_graphic_pane_g1

0x0a8b,	// (0x0002fee5) list_form_graphic_pane_t1_ParamLimits

0x0a8b,	// (0x0002fee5) list_form_graphic_pane_t1

0x2d9f,	// (0x000321f9) list_highlight_pane_cp5_ParamLimits

0x2d9f,	// (0x000321f9) list_highlight_pane_cp5

0xbdbc,	// (0x0003b216) find_pane_g1

0x3f5c,	// (0x000333b6) input_find_pane

0xbdc5,	// (0x0003b21f) input_find_pane_g1_ParamLimits

0xbdc5,	// (0x0003b21f) input_find_pane_g1

0xbdd1,	// (0x0003b22b) input_find_pane_t1_ParamLimits

0xbdd1,	// (0x0003b22b) input_find_pane_t1

0xbde6,	// (0x0003b240) input_find_pane_t2_ParamLimits

0xbde6,	// (0x0003b240) input_find_pane_t2

0x0001,

0xf6a1,	// (0x0003eafb) input_find_pane_t_ParamLimits

0xf6a1,	// (0x0003eafb) input_find_pane_t

0x3f65,	// (0x000333bf) input_focus_pane_cp5_ParamLimits

0x3f65,	// (0x000333bf) input_focus_pane_cp5

0x3f7f,	// (0x000333d9) bg_popup_window_pane_cp2_ParamLimits

0x3f7f,	// (0x000333d9) bg_popup_window_pane_cp2

0x3f8c,	// (0x000333e6) listscroll_menu_pane_ParamLimits

0x3f8c,	// (0x000333e6) listscroll_menu_pane

0xd35b,	// (0x0003c7b5) popup_submenu_window_ParamLimits

0xd35b,	// (0x0003c7b5) popup_submenu_window

0x3fc4,	// (0x0003341e) find_popup_pane_g1

0x3fcc,	// (0x00033426) input_popup_find_pane_cp

0x3f65,	// (0x000333bf) input_focus_pane_cp4_ParamLimits

0x3f65,	// (0x000333bf) input_focus_pane_cp4

0x3fe2,	// (0x0003343c) input_popup_find_pane_t1_ParamLimits

0x3fe2,	// (0x0003343c) input_popup_find_pane_t1

0x2cbf,	// (0x00032119) bg_popup_sub_pane_cp

0x4010,	// (0x0003346a) listscroll_popup_sub_pane

0x4018,	// (0x00033472) list_submenu_pane_ParamLimits

0x4018,	// (0x00033472) list_submenu_pane

0x4029,	// (0x00033483) scroll_pane_cp4

0x4031,	// (0x0003348b) list_single_popup_submenu_pane_ParamLimits

0x4031,	// (0x0003348b) list_single_popup_submenu_pane

0x4045,	// (0x0003349f) list_single_popup_submenu_pane_g1

0x404d,	// (0x000334a7) list_single_popup_submenu_pane_t1_ParamLimits

0x404d,	// (0x000334a7) list_single_popup_submenu_pane_t1

0x38a2,	// (0x00032cfc) bg_active_tab_pane_cp1_ParamLimits

0x38a2,	// (0x00032cfc) bg_active_tab_pane_cp1

0x4062,	// (0x000334bc) tabs_2_active_pane_g1

0xd395,	// (0x0003c7ef) tabs_2_active_pane_t1

0x38a2,	// (0x00032cfc) bg_passive_tab_pane_cp1_ParamLimits

0x38a2,	// (0x00032cfc) bg_passive_tab_pane_cp1

0x4062,	// (0x000334bc) tabs_2_passive_pane_g1

0xd395,	// (0x0003c7ef) tabs_2_passive_pane_t1

0x2d9f,	// (0x000321f9) bg_active_tab_pane_cp4

0xd3a7,	// (0x0003c801) tabs_2_long_active_pane_t1

0x4e75,	// (0x000342cf) bg_passive_tab_pane_cp4

0x17b8,	// (0x00030c12) list_single_midp_graphic_pane_g4_ParamLimits

0x2d9f,	// (0x000321f9) bg_active_tab_pane_cp5

0xd3ba,	// (0x0003c814) tabs_3_long_active_pane_t1

0x4e75,	// (0x000342cf) bg_passive_tab_pane_cp5

0x17b8,	// (0x00030c12) list_single_midp_graphic_pane_g4

0x2d9f,	// (0x000321f9) bg_popup_window_pane_cp13_ParamLimits

0x2d9f,	// (0x000321f9) bg_popup_window_pane_cp13

0x40c4,	// (0x0003351e) listscroll_popup_fast_pane_ParamLimits

0x40c4,	// (0x0003351e) listscroll_popup_fast_pane

0x40d3,	// (0x0003352d) grid_popup_fast_pane_ParamLimits

0x40d3,	// (0x0003352d) grid_popup_fast_pane

0x40e5,	// (0x0003353f) scroll_pane_cp9_ParamLimits

0x40e5,	// (0x0003353f) scroll_pane_cp9

0x81d6,	// (0x00037630) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x81d6,	// (0x00037630) list_single_graphic_hl_pane_t1_cp2

0x4109,	// (0x00033563) input_focus_pane_cp20_ParamLimits

0x4109,	// (0x00033563) input_focus_pane_cp20

0x4117,	// (0x00033571) query_popup_data_pane_t1_ParamLimits

0x4117,	// (0x00033571) query_popup_data_pane_t1

0x412a,	// (0x00033584) query_popup_data_pane_t2_ParamLimits

0x412a,	// (0x00033584) query_popup_data_pane_t2

0x4170,	// (0x000335ca) query_popup_data_pane_t3_ParamLimits

0x4170,	// (0x000335ca) query_popup_data_pane_t3

0x41b1,	// (0x0003360b) query_popup_data_pane_t4_ParamLimits

0x41b1,	// (0x0003360b) query_popup_data_pane_t4

0x41ed,	// (0x00033647) query_popup_data_pane_t5_ParamLimits

0x41ed,	// (0x00033647) query_popup_data_pane_t5

0x0004,

0xf6a6,	// (0x0003eb00) query_popup_data_pane_t_ParamLimits

0xf6a6,	// (0x0003eb00) query_popup_data_pane_t

0x3f14,	// (0x0003336e) bg_set_opt_pane_g1

0x3f1c,	// (0x00033376) bg_set_opt_pane_g2

0x3f24,	// (0x0003337e) bg_set_opt_pane_g3

0x3f2c,	// (0x00033386) bg_set_opt_pane_g4

0x3f34,	// (0x0003338e) bg_set_opt_pane_g5

0x3f3c,	// (0x00033396) bg_set_opt_pane_g6

0x3f44,	// (0x0003339e) bg_set_opt_pane_g7

0x3f4c,	// (0x000333a6) bg_set_opt_pane_g8

0x3f54,	// (0x000333ae) bg_set_opt_pane_g9

0x0008,

0xf6b1,	// (0x0003eb0b) bg_set_opt_pane_g

0x0e06,	// (0x00030260) control_top_pane_stacon_ParamLimits

0x0e06,	// (0x00030260) control_top_pane_stacon

0x0e59,	// (0x000302b3) signal_pane_stacon_ParamLimits

0x0e59,	// (0x000302b3) signal_pane_stacon

0x47df,	// (0x00033c39) stacon_top_pane_g1_ParamLimits

0x47df,	// (0x00033c39) stacon_top_pane_g1

0x0e7e,	// (0x000302d8) title_pane_stacon_ParamLimits

0x0e7e,	// (0x000302d8) title_pane_stacon

0x0ea8,	// (0x00030302) uni_indicator_pane_stacon_ParamLimits

0x0ea8,	// (0x00030302) uni_indicator_pane_stacon

0x0ebd,	// (0x00030317) battery_pane_stacon_ParamLimits

0x0ebd,	// (0x00030317) battery_pane_stacon

0x0f01,	// (0x0003035b) control_bottom_pane_stacon_ParamLimits

0x0f01,	// (0x0003035b) control_bottom_pane_stacon

0x0f24,	// (0x0003037e) navi_pane_stacon_ParamLimits

0x0f24,	// (0x0003037e) navi_pane_stacon

0x4801,	// (0x00033c5b) stacon_bottom_pane_g1_ParamLimits

0x4801,	// (0x00033c5b) stacon_bottom_pane_g1

0x0adf,	// (0x0002ff39) aid_levels_signal_lsc_ParamLimits

0x0adf,	// (0x0002ff39) aid_levels_signal_lsc

0x0af5,	// (0x0002ff4f) signal_pane_stacon_g1_ParamLimits

0x0af5,	// (0x0002ff4f) signal_pane_stacon_g1

0x0b09,	// (0x0002ff63) signal_pane_stacon_g2_ParamLimits

0x0b09,	// (0x0002ff63) signal_pane_stacon_g2

0x0001,

0xf6c4,	// (0x0003eb1e) signal_pane_stacon_g_ParamLimits

0xf6c4,	// (0x0003eb1e) signal_pane_stacon_g

0x0b3e,	// (0x0002ff98) title_pane_stacon_t1_ParamLimits

0x0b3e,	// (0x0002ff98) title_pane_stacon_t1

0x4231,	// (0x0003368b) uni_indicator_pane_stacon_g1

0x423b,	// (0x00033695) uni_indicator_pane_stacon_g2

0x4245,	// (0x0003369f) uni_indicator_pane_stacon_g3

0x424f,	// (0x000336a9) uni_indicator_pane_stacon_g4

0x0003,

0xf6d0,	// (0x0003eb2a) uni_indicator_pane_stacon_g

0x0b63,	// (0x0002ffbd) control_top_pane_stacon_g1

0x0b6b,	// (0x0002ffc5) control_top_pane_stacon_t1_ParamLimits

0x0b6b,	// (0x0002ffc5) control_top_pane_stacon_t1

0x0ba2,	// (0x0002fffc) aid_levels_battery_lsc_ParamLimits

0x0ba2,	// (0x0002fffc) aid_levels_battery_lsc

0x0bb9,	// (0x00030013) battery_pane_stacon_g1_ParamLimits

0x0bb9,	// (0x00030013) battery_pane_stacon_g1

0x0bcc,	// (0x00030026) battery_pane_stacon_g2_ParamLimits

0x0bcc,	// (0x00030026) battery_pane_stacon_g2

0x0001,

0xf6d9,	// (0x0003eb33) battery_pane_stacon_g_ParamLimits

0xf6d9,	// (0x0003eb33) battery_pane_stacon_g

0x0c0a,	// (0x00030064) navi_icon_pane_stacon

0x0c1e,	// (0x00030078) navi_navi_pane_stacon

0x0c0a,	// (0x00030064) navi_text_pane_stacon

0x0b63,	// (0x0002ffbd) control_bottom_pane_stacon_g1

0x0c32,	// (0x0003008c) control_bottom_pane_stacon_t1_ParamLimits

0x0c32,	// (0x0003008c) control_bottom_pane_stacon_t1

0xd3cc,	// (0x0003c826) grid_app_pane_ParamLimits

0xd3cc,	// (0x0003c826) grid_app_pane

0xd404,	// (0x0003c85e) scroll_pane_cp15_ParamLimits

0xd404,	// (0x0003c85e) scroll_pane_cp15

0xd419,	// (0x0003c873) cell_app_pane_ParamLimits

0xd419,	// (0x0003c873) cell_app_pane

0xd45e,	// (0x0003c8b8) cell_app_pane_g1_ParamLimits

0xd45e,	// (0x0003c8b8) cell_app_pane_g1

0x42f4,	// (0x0003374e) cell_app_pane_g2_ParamLimits

0x42f4,	// (0x0003374e) cell_app_pane_g2

0x0001,

0xf6de,	// (0x0003eb38) cell_app_pane_g_ParamLimits

0xf6de,	// (0x0003eb38) cell_app_pane_g

0xd482,	// (0x0003c8dc) cell_app_pane_t1_ParamLimits

0xd482,	// (0x0003c8dc) cell_app_pane_t1

0x4317,	// (0x00033771) grid_highlight_pane_ParamLimits

0x4317,	// (0x00033771) grid_highlight_pane

0x3f14,	// (0x0003336e) cell_highlight_pane_g1

0x3f1c,	// (0x00033376) cell_highlight_pane_g2

0x3f24,	// (0x0003337e) cell_highlight_pane_g3

0x3f2c,	// (0x00033386) cell_highlight_pane_g4

0x3f34,	// (0x0003338e) cell_highlight_pane_g5

0x3f3c,	// (0x00033396) cell_highlight_pane_g6

0x3f44,	// (0x0003339e) cell_highlight_pane_g7

0x3f4c,	// (0x000333a6) cell_highlight_pane_g8

0x3f54,	// (0x000333ae) cell_highlight_pane_g9

0x2cb5,	// (0x0003210f) cell_highlight_pane_g10

0x0009,

0xf68c,	// (0x0003eae6) cell_highlight_pane_g

0x4328,	// (0x00033782) bg_scroll_pane

0x0c7c,	// (0x000300d6) scroll_handle_pane

0x436f,	// (0x000337c9) scroll_bg_pane_g1

0x4384,	// (0x000337de) scroll_bg_pane_g2

0x439c,	// (0x000337f6) scroll_bg_pane_g3

0x0002,

0xf6e3,	// (0x0003eb3d) scroll_bg_pane_g

0x43b1,	// (0x0003380b) scroll_handle_focus_pane_ParamLimits

0x43b1,	// (0x0003380b) scroll_handle_focus_pane

0x436f,	// (0x000337c9) scroll_handle_pane_g1

0x43be,	// (0x00033818) scroll_handle_pane_g2

0x439c,	// (0x000337f6) scroll_handle_pane_g3

0x0002,

0xf6ea,	// (0x0003eb44) scroll_handle_pane_g

0x3f65,	// (0x000333bf) bg_popup_sub_pane_cp21_ParamLimits

0x3f65,	// (0x000333bf) bg_popup_sub_pane_cp21

0x43d2,	// (0x0003382c) popup_fep_japan_predictive_window_t1_ParamLimits

0x43d2,	// (0x0003382c) popup_fep_japan_predictive_window_t1

0x43ec,	// (0x00033846) popup_fep_japan_predictive_window_t2_ParamLimits

0x43ec,	// (0x00033846) popup_fep_japan_predictive_window_t2

0x441f,	// (0x00033879) popup_fep_japan_predictive_window_t3_ParamLimits

0x441f,	// (0x00033879) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f1,	// (0x0003eb4b) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f1,	// (0x0003eb4b) popup_fep_japan_predictive_window_t

0x2cbf,	// (0x00032119) bg_popup_sub_pane_cp23

0x4456,	// (0x000338b0) listscroll_japin_cand_pane

0x445e,	// (0x000338b8) popup_fep_japan_candidate_window_t1

0x446c,	// (0x000338c6) candidate_pane_ParamLimits

0x446c,	// (0x000338c6) candidate_pane

0x447e,	// (0x000338d8) scroll_pane_cp30

0x4486,	// (0x000338e0) list_single_popup_jap_candidate_pane_ParamLimits

0x4486,	// (0x000338e0) list_single_popup_jap_candidate_pane

0x2cbf,	// (0x00032119) list_highlight_pane_cp30

0x449b,	// (0x000338f5) list_single_popup_jap_candidate_pane_t1

0x44aa,	// (0x00033904) level_1_signal

0x44bc,	// (0x00033916) level_2_signal

0x44cf,	// (0x00033929) level_3_signal

0x44e2,	// (0x0003393c) level_4_signal

0x44f5,	// (0x0003394f) level_5_signal

0x4508,	// (0x00033962) level_6_signal

0x451b,	// (0x00033975) level_7_signal

0x44aa,	// (0x00033904) level_1_battery

0x44bc,	// (0x00033916) level_2_battery

0x44cf,	// (0x00033929) level_3_battery

0x44e2,	// (0x0003393c) level_4_battery

0x44f5,	// (0x0003394f) level_5_battery

0x4508,	// (0x00033962) level_6_battery

0x451b,	// (0x00033975) level_7_battery

0x4546,	// (0x000339a0) list_menu_pane_ParamLimits

0x4546,	// (0x000339a0) list_menu_pane

0x455c,	// (0x000339b6) scroll_pane_cp25_ParamLimits

0x455c,	// (0x000339b6) scroll_pane_cp25

0x4575,	// (0x000339cf) list_double2_graphic_pane_cp2_ParamLimits

0x4575,	// (0x000339cf) list_double2_graphic_pane_cp2

0x4575,	// (0x000339cf) list_double2_large_graphic_pane_cp2_ParamLimits

0x4575,	// (0x000339cf) list_double2_large_graphic_pane_cp2

0x4575,	// (0x000339cf) list_double2_pane_cp2_ParamLimits

0x4575,	// (0x000339cf) list_double2_pane_cp2

0x4575,	// (0x000339cf) list_double_graphic_pane_cp2_ParamLimits

0x4575,	// (0x000339cf) list_double_graphic_pane_cp2

0x4575,	// (0x000339cf) list_double_large_graphic_pane_cp2_ParamLimits

0x4575,	// (0x000339cf) list_double_large_graphic_pane_cp2

0x4575,	// (0x000339cf) list_double_number_pane_cp2_ParamLimits

0x4575,	// (0x000339cf) list_double_number_pane_cp2

0x4575,	// (0x000339cf) list_double_pane_cp2_ParamLimits

0x4575,	// (0x000339cf) list_double_pane_cp2

0xd499,	// (0x0003c8f3) list_single_2graphic_pane_cp2_ParamLimits

0xd499,	// (0x0003c8f3) list_single_2graphic_pane_cp2

0xd499,	// (0x0003c8f3) list_single_graphic_heading_pane_cp2_ParamLimits

0xd499,	// (0x0003c8f3) list_single_graphic_heading_pane_cp2

0xd499,	// (0x0003c8f3) list_single_graphic_pane_cp2_ParamLimits

0xd499,	// (0x0003c8f3) list_single_graphic_pane_cp2

0xd499,	// (0x0003c8f3) list_single_heading_pane_cp2_ParamLimits

0xd499,	// (0x0003c8f3) list_single_heading_pane_cp2

0x45b2,	// (0x00033a0c) list_single_large_graphic_pane_cp2_ParamLimits

0x45b2,	// (0x00033a0c) list_single_large_graphic_pane_cp2

0xd499,	// (0x0003c8f3) list_single_number_heading_pane_cp2_ParamLimits

0xd499,	// (0x0003c8f3) list_single_number_heading_pane_cp2

0xd499,	// (0x0003c8f3) list_single_number_pane_cp2_ParamLimits

0xd499,	// (0x0003c8f3) list_single_number_pane_cp2

0xd499,	// (0x0003c8f3) list_single_pane_cp2_ParamLimits

0xd499,	// (0x0003c8f3) list_single_pane_cp2

0x462e,	// (0x00033a88) bg_popup_sub_pane_cp22

0x0d2e,	// (0x00030188) popup_side_volume_key_window_g1

0x0d58,	// (0x000301b2) popup_side_volume_key_window_t1

0x0d74,	// (0x000301ce) volume_small_pane_cp1

0x38a2,	// (0x00032cfc) bg_popup_sub_pane_cp24_ParamLimits

0x38a2,	// (0x00032cfc) bg_popup_sub_pane_cp24

0x4644,	// (0x00033a9e) fep_china_uni_candidate_pane_ParamLimits

0x4644,	// (0x00033a9e) fep_china_uni_candidate_pane

0x4658,	// (0x00033ab2) fep_china_uni_entry_pane

0x4668,	// (0x00033ac2) popup_fep_china_uni_window_g1

0x4684,	// (0x00033ade) fep_china_uni_entry_pane_g1

0x468c,	// (0x00033ae6) fep_china_uni_entry_pane_g2

0x0001,

0xf722,	// (0x0003eb7c) fep_china_uni_entry_pane_g

0x4694,	// (0x00033aee) fep_entry_item_pane

0x469e,	// (0x00033af8) fep_candidate_item_pane

0x46a6,	// (0x00033b00) fep_china_uni_candidate_pane_g1

0x46ae,	// (0x00033b08) fep_china_uni_candidate_pane_g2

0x46b6,	// (0x00033b10) fep_china_uni_candidate_pane_g3

0x46be,	// (0x00033b18) fep_china_uni_candidate_pane_g4

0x0003,

0xf727,	// (0x0003eb81) fep_china_uni_candidate_pane_g

0x2cb5,	// (0x0003210f) fep_entry_item_pane_g1

0x46c6,	// (0x00033b20) fep_entry_item_pane_t1_ParamLimits

0x46c6,	// (0x00033b20) fep_entry_item_pane_t1

0x46dc,	// (0x00033b36) fep_candidate_item_pane_t1_ParamLimits

0x46dc,	// (0x00033b36) fep_candidate_item_pane_t1

0x46f1,	// (0x00033b4b) fep_candidate_item_pane_t2_ParamLimits

0x46f1,	// (0x00033b4b) fep_candidate_item_pane_t2

0x0001,

0xf730,	// (0x0003eb8a) fep_candidate_item_pane_t_ParamLimits

0xf730,	// (0x0003eb8a) fep_candidate_item_pane_t

0x2d9f,	// (0x000321f9) list_highlight_pane_cp31_ParamLimits

0x2d9f,	// (0x000321f9) list_highlight_pane_cp31

0x4703,	// (0x00033b5d) level_1_signal_lsc

0x470c,	// (0x00033b66) level_2_signal_lsc

0x4715,	// (0x00033b6f) level_3_signal_lsc

0x471e,	// (0x00033b78) level_4_signal_lsc

0x4727,	// (0x00033b81) level_5_signal_lsc

0x4730,	// (0x00033b8a) level_6_signal_lsc

0x4739,	// (0x00033b93) level_7_signal_lsc

0x4739,	// (0x00033b93) level_1_battery_lsc

0x4742,	// (0x00033b9c) level_2_battery_lsc

0x474b,	// (0x00033ba5) level_3_battery_lsc

0x4754,	// (0x00033bae) level_4_battery_lsc

0x475d,	// (0x00033bb7) level_5_battery_lsc

0x4766,	// (0x00033bc0) level_6_battery_lsc

0x4703,	// (0x00033b5d) level_7_battery_lsc

0x476f,	// (0x00033bc9) scroll_handle_focus_pane_g1

0x4778,	// (0x00033bd2) scroll_handle_focus_pane_g2

0x4781,	// (0x00033bdb) scroll_handle_focus_pane_g3

0x0002,

0xf735,	// (0x0003eb8f) scroll_handle_focus_pane_g

0xbe04,	// (0x0003b25e) list_single_2graphic_pane_g1_ParamLimits

0xbe04,	// (0x0003b25e) list_single_2graphic_pane_g1

0xb8e4,	// (0x0003ad3e) list_single_2graphic_pane_g2_ParamLimits

0xb8e4,	// (0x0003ad3e) list_single_2graphic_pane_g2

0x1769,	// (0x00030bc3) list_single_2graphic_pane_g3_ParamLimits

0x1769,	// (0x00030bc3) list_single_2graphic_pane_g3

0xbe10,	// (0x0003b26a) list_single_2graphic_pane_g4_ParamLimits

0xbe10,	// (0x0003b26a) list_single_2graphic_pane_g4

0x0003,

0xf73c,	// (0x0003eb96) list_single_2graphic_pane_g_ParamLimits

0xf73c,	// (0x0003eb96) list_single_2graphic_pane_g

0xbe1c,	// (0x0003b276) list_single_2graphic_pane_t1_ParamLimits

0xbe1c,	// (0x0003b276) list_single_2graphic_pane_t1

0xbe4a,	// (0x0003b2a4) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xbe4a,	// (0x0003b2a4) list_double2_graphic_large_graphic_pane_g1

0xb94f,	// (0x0003ada9) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xb94f,	// (0x0003ada9) list_double2_graphic_large_graphic_pane_g2

0xb960,	// (0x0003adba) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xb960,	// (0x0003adba) list_double2_graphic_large_graphic_pane_g3

0xbe5c,	// (0x0003b2b6) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xbe5c,	// (0x0003b2b6) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf745,	// (0x0003eb9f) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf745,	// (0x0003eb9f) list_double2_graphic_large_graphic_pane_g

0xbe68,	// (0x0003b2c2) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xbe68,	// (0x0003b2c2) list_double2_graphic_large_graphic_pane_t1

0xbe7e,	// (0x0003b2d8) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xbe7e,	// (0x0003b2d8) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf74e,	// (0x0003eba8) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf74e,	// (0x0003eba8) list_double2_graphic_large_graphic_pane_t

0x48c9,	// (0x00033d23) popup_fast_swap_window_ParamLimits

0x48c9,	// (0x00033d23) popup_fast_swap_window

0x48e5,	// (0x00033d3f) popup_side_volume_key_window

0x4901,	// (0x00033d5b) stacon_top_pane

0x490b,	// (0x00033d65) status_pane_ParamLimits

0x490b,	// (0x00033d65) status_pane

0xd526,	// (0x0003c980) status_small_pane

0x2cbf,	// (0x00032119) control_pane

0x2cbf,	// (0x00032119) stacon_bottom_pane

0x3e9f,	// (0x000332f9) scroll_pane_cp121

0x3e96,	// (0x000332f0) set_content_pane

0x478a,	// (0x00033be4) bg_active_tab_pane_g1_cp1

0x4793,	// (0x00033bed) bg_active_tab_pane_g2_cp1

0x479c,	// (0x00033bf6) bg_active_tab_pane_g3_cp1

0x478a,	// (0x00033be4) bg_passive_tab_pane_g1_cp1

0x4793,	// (0x00033bed) bg_passive_tab_pane_g2_cp1

0x479c,	// (0x00033bf6) bg_passive_tab_pane_g3_cp1

0x47a5,	// (0x00033bff) bg_active_tab_pane_g1_cp2

0x4793,	// (0x00033bed) bg_active_tab_pane_g2_cp2

0x47ae,	// (0x00033c08) bg_active_tab_pane_g3_cp2

0x47a5,	// (0x00033bff) bg_passive_tab_pane_g1_cp2

0x4793,	// (0x00033bed) bg_passive_tab_pane_g2_cp2

0x47ae,	// (0x00033c08) bg_passive_tab_pane_g3_cp2

0x47b7,	// (0x00033c11) bg_active_tab_pane_g1_cp3

0x4793,	// (0x00033bed) bg_active_tab_pane_g2_cp3

0x47c0,	// (0x00033c1a) bg_active_tab_pane_g3_cp3

0x47b7,	// (0x00033c11) bg_passive_tab_pane_g1_cp3

0x4793,	// (0x00033bed) bg_passive_tab_pane_g2_cp3

0x47c0,	// (0x00033c1a) bg_passive_tab_pane_g3_cp3

0x47c9,	// (0x00033c23) bg_active_tab_pane_g1_cp4

0x4793,	// (0x00033bed) bg_active_tab_pane_g2_cp4

0x47d4,	// (0x00033c2e) bg_active_tab_pane_g3_cp4

0x47c9,	// (0x00033c23) bg_passive_tab_pane_g1_cp4

0x4793,	// (0x00033bed) bg_passive_tab_pane_g2_cp4

0x47d4,	// (0x00033c2e) bg_passive_tab_pane_g3_cp4

0x481d,	// (0x00033c77) bg_active_tab_pane_g1_cp5

0x4793,	// (0x00033bed) bg_active_tab_pane_g2_cp5

0x4826,	// (0x00033c80) bg_active_tab_pane_g3_cp5

0x481d,	// (0x00033c77) bg_passive_tab_pane_g1_cp5

0x4793,	// (0x00033bed) bg_passive_tab_pane_g2_cp5

0x4826,	// (0x00033c80) bg_passive_tab_pane_g3_cp5

0x6ed4,	// (0x0003632e) list_set_graphic_pane_ParamLimits

0x6ed4,	// (0x0003632e) list_set_graphic_pane

0x2cbf,	// (0x00032119) bg_set_opt_pane_cp4

0x484c,	// (0x00033ca6) list_set_graphic_pane_g1_ParamLimits

0x484c,	// (0x00033ca6) list_set_graphic_pane_g1

0x4858,	// (0x00033cb2) list_set_graphic_pane_g2_ParamLimits

0x4858,	// (0x00033cb2) list_set_graphic_pane_g2

0x0001,

0xf753,	// (0x0003ebad) list_set_graphic_pane_g_ParamLimits

0xf753,	// (0x0003ebad) list_set_graphic_pane_g

0x0009,

0xfabc,	// (0x0003ef16) volume_small_pane_cp_g

0x487c,	// (0x00033cd6) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x487c,	// (0x00033cd6) list_double2_large_graphic_pane_g1_cp2

0x4888,	// (0x00033ce2) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x4888,	// (0x00033ce2) list_double2_large_graphic_pane_g2_cp2

0x4899,	// (0x00033cf3) list_double2_large_graphic_pane_g3_cp2

0x48a1,	// (0x00033cfb) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x48a1,	// (0x00033cfb) list_double2_large_graphic_pane_t1_cp2

0x48b7,	// (0x00033d11) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x48b7,	// (0x00033d11) list_double2_large_graphic_pane_t2_cp2

0x6495,	// (0x000358ef) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x6495,	// (0x000358ef) list_double_large_graphic_pane_g1_cp2

0x64a6,	// (0x00035900) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x64a6,	// (0x00035900) list_double_large_graphic_pane_g2_cp2

0x4a32,	// (0x00033e8c) list_double_large_graphic_pane_g3_cp2

0x64b7,	// (0x00035911) list_double_large_graphic_pane_g4_cp

0x64bf,	// (0x00035919) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x64bf,	// (0x00035919) list_double_large_graphic_pane_t1_cp2

0x64d6,	// (0x00035930) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x64d6,	// (0x00035930) list_double_large_graphic_pane_t2_cp2

0x4924,	// (0x00033d7e) list_double2_graphic_pane_g1_cp2_ParamLimits

0x4924,	// (0x00033d7e) list_double2_graphic_pane_g1_cp2

0x4932,	// (0x00033d8c) list_double2_graphic_pane_g2_cp2_ParamLimits

0x4932,	// (0x00033d8c) list_double2_graphic_pane_g2_cp2

0x4943,	// (0x00033d9d) list_double2_graphic_pane_g3_cp2

0x494d,	// (0x00033da7) list_double2_graphic_pane_t1_cp2_ParamLimits

0x494d,	// (0x00033da7) list_double2_graphic_pane_t1_cp2

0x4963,	// (0x00033dbd) list_double2_graphic_pane_t2_cp2_ParamLimits

0x4963,	// (0x00033dbd) list_double2_graphic_pane_t2_cp2

0x4975,	// (0x00033dcf) list_single_number_heading_pane_g1_cp2_ParamLimits

0x4975,	// (0x00033dcf) list_single_number_heading_pane_g1_cp2

0x4981,	// (0x00033ddb) list_single_number_heading_pane_g2_cp2

0x4989,	// (0x00033de3) list_single_number_heading_pane_t1_cp2_ParamLimits

0x4989,	// (0x00033de3) list_single_number_heading_pane_t1_cp2

0x499f,	// (0x00033df9) list_single_number_heading_pane_t2_cp2_ParamLimits

0x499f,	// (0x00033df9) list_single_number_heading_pane_t2_cp2

0x49b1,	// (0x00033e0b) list_single_number_heading_pane_t3_cp2_ParamLimits

0x49b1,	// (0x00033e0b) list_single_number_heading_pane_t3_cp2

0x4975,	// (0x00033dcf) list_single_heading_pane_g1_cp2_ParamLimits

0x4975,	// (0x00033dcf) list_single_heading_pane_g1_cp2

0x4981,	// (0x00033ddb) list_single_heading_pane_g2_cp2

0x4989,	// (0x00033de3) list_single_heading_pane_t1_cp2_ParamLimits

0x4989,	// (0x00033de3) list_single_heading_pane_t1_cp2

0x629d,	// (0x000356f7) list_single_heading_pane_t2_cp2_ParamLimits

0x629d,	// (0x000356f7) list_single_heading_pane_t2_cp2

0x61e5,	// (0x0003563f) list_double_graphic_pane_g1_cp2_ParamLimits

0x61e5,	// (0x0003563f) list_double_graphic_pane_g1_cp2

0x61f1,	// (0x0003564b) list_double_graphic_pane_g2_cp2_ParamLimits

0x61f1,	// (0x0003564b) list_double_graphic_pane_g2_cp2

0x6200,	// (0x0003565a) list_double_graphic_pane_g3_cp2

0x6208,	// (0x00035662) list_double_graphic_pane_t1_cp2_ParamLimits

0x6208,	// (0x00035662) list_double_graphic_pane_t1_cp2

0x621e,	// (0x00035678) list_double_graphic_pane_t2_cp2_ParamLimits

0x621e,	// (0x00035678) list_double_graphic_pane_t2_cp2

0x4a26,	// (0x00033e80) list_double_number_pane_g1_cp2_ParamLimits

0x4a26,	// (0x00033e80) list_double_number_pane_g1_cp2

0x4a32,	// (0x00033e8c) list_double_number_pane_g2_cp2

0x61a9,	// (0x00035603) list_double_number_pane_t1_cp2_ParamLimits

0x61a9,	// (0x00035603) list_double_number_pane_t1_cp2

0x61bd,	// (0x00035617) list_double_number_pane_t2_cp2_ParamLimits

0x61bd,	// (0x00035617) list_double_number_pane_t2_cp2

0x61d3,	// (0x0003562d) list_double_number_pane_t3_cp2_ParamLimits

0x61d3,	// (0x0003562d) list_double_number_pane_t3_cp2

0x6092,	// (0x000354ec) list_single_graphic_pane_g1_cp2_ParamLimits

0x6092,	// (0x000354ec) list_single_graphic_pane_g1_cp2

0x4a8a,	// (0x00033ee4) list_single_graphic_pane_g2_cp2_ParamLimits

0x4a8a,	// (0x00033ee4) list_single_graphic_pane_g2_cp2

0x4a96,	// (0x00033ef0) list_single_graphic_pane_g3_cp2

0x6068,	// (0x000354c2) list_single_graphic_pane_t1_cp2_ParamLimits

0x6068,	// (0x000354c2) list_single_graphic_pane_t1_cp2

0x4a8a,	// (0x00033ee4) list_single_number_pane_g1_cp2_ParamLimits

0x4a8a,	// (0x00033ee4) list_single_number_pane_g1_cp2

0x4a96,	// (0x00033ef0) list_single_number_pane_g2_cp2

0x6068,	// (0x000354c2) list_single_number_pane_t1_cp2_ParamLimits

0x6068,	// (0x000354c2) list_single_number_pane_t1_cp2

0x607e,	// (0x000354d8) list_single_number_pane_t2_cp2_ParamLimits

0x607e,	// (0x000354d8) list_single_number_pane_t2_cp2

0x4888,	// (0x00033ce2) list_double2_pane_g1_cp2_ParamLimits

0x4888,	// (0x00033ce2) list_double2_pane_g1_cp2

0x4899,	// (0x00033cf3) list_double2_pane_g2_cp2

0x49fe,	// (0x00033e58) list_double2_pane_t1_cp2_ParamLimits

0x49fe,	// (0x00033e58) list_double2_pane_t1_cp2

0x4a14,	// (0x00033e6e) list_double2_pane_t2_cp2_ParamLimits

0x4a14,	// (0x00033e6e) list_double2_pane_t2_cp2

0x4a26,	// (0x00033e80) list_double_pane_g1_cp2_ParamLimits

0x4a26,	// (0x00033e80) list_double_pane_g1_cp2

0x4a32,	// (0x00033e8c) list_double_pane_g2_cp2

0x4a3a,	// (0x00033e94) list_double_pane_t1_cp2_ParamLimits

0x4a3a,	// (0x00033e94) list_double_pane_t1_cp2

0x4a50,	// (0x00033eaa) list_double_pane_t2_cp2_ParamLimits

0x4a50,	// (0x00033eaa) list_double_pane_t2_cp2

0x4a7a,	// (0x00033ed4) list_single_pane_cp2_g3

0x4a8a,	// (0x00033ee4) list_single_pane_g1_cp2_ParamLimits

0x4a8a,	// (0x00033ee4) list_single_pane_g1_cp2

0x4a96,	// (0x00033ef0) list_single_pane_g2_cp2

0x4a9e,	// (0x00033ef8) list_single_pane_t1_cp2_ParamLimits

0x4a9e,	// (0x00033ef8) list_single_pane_t1_cp2

0x4ab6,	// (0x00033f10) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x4ab6,	// (0x00033f10) list_single_large_graphic_pane_g1_cp2

0x4ac2,	// (0x00033f1c) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x4ac2,	// (0x00033f1c) list_single_large_graphic_pane_g2_cp2

0x4ace,	// (0x00033f28) list_single_large_graphic_pane_g3_cp2

0x4ad6,	// (0x00033f30) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x4ad6,	// (0x00033f30) list_single_large_graphic_pane_g4_cp1

0x4af0,	// (0x00033f4a) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x4af0,	// (0x00033f4a) list_single_large_graphic_pane_t1_cp2

0x6034,	// (0x0003548e) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x6034,	// (0x0003548e) list_single_graphic_heading_pane_g1_cp2

0x6001,	// (0x0003545b) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x6001,	// (0x0003545b) list_single_graphic_heading_pane_g4_cp2

0x4a96,	// (0x00033ef0) list_single_graphic_heading_pane_g5_cp2

0x6040,	// (0x0003549a) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x6040,	// (0x0003549a) list_single_graphic_heading_pane_t1_cp2

0x6056,	// (0x000354b0) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x6056,	// (0x000354b0) list_single_graphic_heading_pane_t2_cp2

0x5ff5,	// (0x0003544f) list_single_2graphic_pane_g1_cp2_ParamLimits

0x5ff5,	// (0x0003544f) list_single_2graphic_pane_g1_cp2

0x6001,	// (0x0003545b) list_single_2graphic_pane_g2_cp2_ParamLimits

0x6001,	// (0x0003545b) list_single_2graphic_pane_g2_cp2

0x4a96,	// (0x00033ef0) list_single_2graphic_pane_g3_cp2

0x6012,	// (0x0003546c) list_single_2graphic_pane_g4_cp2_ParamLimits

0x6012,	// (0x0003546c) list_single_2graphic_pane_g4_cp2

0x601e,	// (0x00035478) list_single_2graphic_pane_t1_cp2_ParamLimits

0x601e,	// (0x00035478) list_single_2graphic_pane_t1_cp2

0x2cb5,	// (0x0003210f) list_highlight_pane_g10_cp1

0x5bc1,	// (0x0003501b) list_highlight_pane_g1_cp1

0x5bc9,	// (0x00035023) list_highlight_pane_g2_cp1

0x5bd1,	// (0x0003502b) list_highlight_pane_g3_cp1

0x5bd9,	// (0x00035033) list_highlight_pane_g4_cp1

0x5be1,	// (0x0003503b) list_highlight_pane_g5_cp1

0x5be9,	// (0x00035043) list_highlight_pane_g6_cp1

0x5bf1,	// (0x0003504b) list_highlight_pane_g7_cp1

0x5bf9,	// (0x00035053) list_highlight_pane_g8_cp1

0x5c01,	// (0x0003505b) list_highlight_pane_g9_cp1

0xdb66,	// (0x0003cfc0) form_field_slider_pane_t3

0xdb74,	// (0x0003cfce) form_field_slider_pane_t4

0x5afd,	// (0x00034f57) slider_form_pane_ParamLimits

0x5afd,	// (0x00034f57) slider_form_pane

0x2cbf,	// (0x00032119) control_abbreviations

0x2cbf,	// (0x00032119) control_conventions

0x2cbf,	// (0x00032119) control_definitions

0x2cbf,	// (0x00032119) format_table_attribute

0x62e7,	// (0x00035741) bg_popup_preview_window_pane_g9

0x2cbf,	// (0x00032119) format_table_data2

0x2cbf,	// (0x00032119) format_table_data3

0x2cbf,	// (0x00032119) format_table_data_example

0x0008,

0x2cbf,	// (0x00032119) intro_purpose

0xf8ea,	// (0x0003ed44) bg_popup_preview_window_pane_g

0x2cbf,	// (0x00032119) texts_category

0x2cbf,	// (0x00032119) texts_graphics

0x4b06,	// (0x00033f60) text_digital

0x4b15,	// (0x00033f6f) text_primary

0x4b24,	// (0x00033f7e) text_primary_small

0x4b33,	// (0x00033f8d) text_secondary

0x4b42,	// (0x00033f9c) text_title

0x6a16,	// (0x00035e70) bg_passive_tab_pane_g1_cp3_srt

0x4793,	// (0x00033bed) bg_passive_tab_pane_g2_cp3_srt

0x6a1f,	// (0x00035e79) bg_passive_tab_pane_g3_cp3_srt

0x38a2,	// (0x00032cfc) bg_active_tab_pane_cp3_srt_ParamLimits

0x38a2,	// (0x00032cfc) bg_active_tab_pane_cp3_srt

0x6a28,	// (0x00035e82) tabs_4_active_pane_srt_g1

0xdea6,	// (0x0003d300) tabs_4_active_pane_srt_t1_ParamLimits

0xdea6,	// (0x0003d300) tabs_4_active_pane_srt_t1

0x6a16,	// (0x00035e70) bg_active_tab_pane_g1_cp3_copy1

0x4793,	// (0x00033bed) bg_active_tab_pane_g2_cp3_copy1

0x6a1f,	// (0x00035e79) bg_active_tab_pane_g3_cp3_copy1

0x2d9f,	// (0x000321f9) tabs_2_long_active_pane_srt_ParamLimits

0x2d9f,	// (0x000321f9) tabs_2_long_active_pane_srt

0x2d9f,	// (0x000321f9) tabs_2_long_passive_pane_srt_ParamLimits

0x2d9f,	// (0x000321f9) tabs_2_long_passive_pane_srt

0x4e75,	// (0x000342cf) bg_passive_tab_pane_cp4_srt_ParamLimits

0x4e75,	// (0x000342cf) bg_passive_tab_pane_cp4_srt

0x670a,	// (0x00035b64) bg_passive_tab_pane_g1_cp4_srt

0x4793,	// (0x00033bed) bg_passive_tab_pane_g2_cp4_srt

0x6713,	// (0x00035b6d) bg_passive_tab_pane_g3_cp4_srt

0x2d9f,	// (0x000321f9) bg_active_tab_pane_cp4_srt_ParamLimits

0x2d9f,	// (0x000321f9) bg_active_tab_pane_cp4_srt

0xdcd0,	// (0x0003d12a) tabs_2_long_active_pane_srt_t1_ParamLimits

0xdcd0,	// (0x0003d12a) tabs_2_long_active_pane_srt_t1

0x670a,	// (0x00035b64) bg_active_tab_pane_g1_cp4_srt

0x4793,	// (0x00033bed) bg_active_tab_pane_g2_cp4_srt

0x6713,	// (0x00035b6d) bg_active_tab_pane_g3_cp4_srt

0x38a2,	// (0x00032cfc) tabs_3_long_active_pane_srt_ParamLimits

0x38a2,	// (0x00032cfc) tabs_3_long_active_pane_srt

0x38a2,	// (0x00032cfc) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x38a2,	// (0x00032cfc) tabs_3_long_passive_pane_cp_srt

0x38a2,	// (0x00032cfc) tabs_3_long_passive_pane_srt_ParamLimits

0x38a2,	// (0x00032cfc) tabs_3_long_passive_pane_srt

0x4e75,	// (0x000342cf) bg_passive_tab_pane_cp5_srt_ParamLimits

0x4e75,	// (0x000342cf) bg_passive_tab_pane_cp5_srt

0x481d,	// (0x00033c77) bg_passive_tab_pane_g1_cp5_srt

0x4793,	// (0x00033bed) bg_passive_tab_pane_g2_cp5_srt

0x4826,	// (0x00033c80) bg_passive_tab_pane_g3_cp5_srt

0x2d9f,	// (0x000321f9) bg_active_tab_pane_cp5_srt_ParamLimits

0x2d9f,	// (0x000321f9) bg_active_tab_pane_cp5_srt

0xdcba,	// (0x0003d114) tabs_3_long_active_pane_srt_t1_ParamLimits

0xdcba,	// (0x0003d114) tabs_3_long_active_pane_srt_t1

0x481d,	// (0x00033c77) bg_active_tab_pane_g1_cp5_srt

0x4793,	// (0x00033bed) bg_active_tab_pane_g2_cp5_srt

0x4826,	// (0x00033c80) bg_active_tab_pane_g3_cp5_srt

0x66ea,	// (0x00035b44) navi_text_pane_srt_t1

0x66e2,	// (0x00035b3c) navi_icon_pane_srt_g1

0x4d17,	// (0x00034171) midp_editing_number_pane_srt

0x4b51,	// (0x00033fab) midp_ticker_pane_srt

0x4d1f,	// (0x00034179) midp_ticker_pane_srt_g1

0x4d27,	// (0x00034181) midp_ticker_pane_srt_g2

0x0001,

0xf772,	// (0x0003ebcc) midp_ticker_pane_srt_g

0x4d2f,	// (0x00034189) midp_ticker_pane_srt_t1

0x66d3,	// (0x00035b2d) midp_editing_number_pane_t1_copy1

0xd531,	// (0x0003c98b) listscroll_midp_pane

0xd531,	// (0x0003c98b) midp_form_pane

0x4bc9,	// (0x00034023) midp_info_popup_window_ParamLimits

0x4bc9,	// (0x00034023) midp_info_popup_window

0x3f65,	// (0x000333bf) bg_popup_sub_pane_cp50_ParamLimits

0x3f65,	// (0x000333bf) bg_popup_sub_pane_cp50

0x57ed,	// (0x00034c47) listscroll_midp_info_pane_ParamLimits

0x57ed,	// (0x00034c47) listscroll_midp_info_pane

0x57cd,	// (0x00034c27) listscroll_form_midp_pane_ParamLimits

0x57cd,	// (0x00034c27) listscroll_form_midp_pane

0x57d9,	// (0x00034c33) scroll_bar_cp050

0x57cd,	// (0x00034c27) list_midp_pane

0x745a,	// (0x000368b4) signal_pane_g2_cp

0x56e7,	// (0x00034b41) listscroll_midp_info_pane_t1_ParamLimits

0x56e7,	// (0x00034b41) listscroll_midp_info_pane_t1

0x56ff,	// (0x00034b59) listscroll_midp_info_pane_t2_ParamLimits

0x56ff,	// (0x00034b59) listscroll_midp_info_pane_t2

0x573d,	// (0x00034b97) listscroll_midp_info_pane_t3_ParamLimits

0x573d,	// (0x00034b97) listscroll_midp_info_pane_t3

0x5777,	// (0x00034bd1) listscroll_midp_info_pane_t4_ParamLimits

0x5777,	// (0x00034bd1) listscroll_midp_info_pane_t4

0x0003,

0xf825,	// (0x0003ec7f) listscroll_midp_info_pane_t_ParamLimits

0xf825,	// (0x0003ec7f) listscroll_midp_info_pane_t

0x4029,	// (0x00033483) scroll_pane_cp21

0x5685,	// (0x00034adf) form_midp_field_choice_group_pane

0x568e,	// (0x00034ae8) form_midp_field_text_pane

0x56cd,	// (0x00034b27) form_midp_field_time_pane

0x56d5,	// (0x00034b2f) form_midp_gauge_slider_pane

0x56de,	// (0x00034b38) form_midp_gauge_wait_pane

0x2cbf,	// (0x00032119) form_midp_image_pane

0xc739,	// (0x0003bb93) list_single_midp_pane_ParamLimits

0xc739,	// (0x0003bb93) list_single_midp_pane

0xdb45,	// (0x0003cf9f) form_midp_field_text_pane_t1

0x540d,	// (0x00034867) input_focus_pane_cp050

0x5674,	// (0x00034ace) list_midp_form_text_pane

0x560c,	// (0x00034a66) form_midp_field_choice_group_pane_t1

0x561a,	// (0x00034a74) input_focus_pane_cp051

0x562e,	// (0x00034a88) list_midp_choice_pane

0x2cbf,	// (0x00032119) status_idle_pane

0x55f0,	// (0x00034a4a) form_midp_field_time_pane_t1

0x2cb5,	// (0x0003210f) wait_anim_pane_g2_copy1

0x55fe,	// (0x00034a58) form_midp_field_time_pane_t2

0x0001,

0x4c77,	// (0x000340d1) aid_navinavi_width_2_pane

0xf820,	// (0x0003ec7a) form_midp_field_time_pane_t

0x2cbf,	// (0x00032119) input_focus_pane_cp052

0x2cbf,	// (0x00032119) bg_input_focus_pane_cp040

0x55b0,	// (0x00034a0a) form_midp_gauge_slider_pane_t1

0x55be,	// (0x00034a18) form_midp_gauge_slider_pane_t2

0xdb29,	// (0x0003cf83) form_midp_gauge_slider_pane_t3

0xdb37,	// (0x0003cf91) form_midp_gauge_slider_pane_t4

0x0003,

0xf817,	// (0x0003ec71) form_midp_gauge_slider_pane_t

0x55e8,	// (0x00034a42) form_midp_slider_pane

0x2d9f,	// (0x000321f9) bg_input_focus_pane_cp041_ParamLimits

0x2d9f,	// (0x000321f9) bg_input_focus_pane_cp041

0x557d,	// (0x000349d7) form_midp_gauge_wait_pane_t1_ParamLimits

0x557d,	// (0x000349d7) form_midp_gauge_wait_pane_t1

0x558f,	// (0x000349e9) form_midp_gauge_wait_pane_t2_ParamLimits

0x558f,	// (0x000349e9) form_midp_gauge_wait_pane_t2

0x0001,

0xf812,	// (0x0003ec6c) form_midp_gauge_wait_pane_t_ParamLimits

0xf812,	// (0x0003ec6c) form_midp_gauge_wait_pane_t

0x55a1,	// (0x000349fb) form_midp_wait_pane_ParamLimits

0x55a1,	// (0x000349fb) form_midp_wait_pane

0x5547,	// (0x000349a1) form_midp_image_pane_g1

0x5550,	// (0x000349aa) form_midp_image_pane_t1

0x555f,	// (0x000349b9) form_midp_image_pane_t2

0x556e,	// (0x000349c8) form_midp_image_pane_t3

0x0002,

0xf80b,	// (0x0003ec65) form_midp_image_pane_t

0x553e,	// (0x00034998) list_single_midp_pane_g1

0x2dad,	// (0x00032207) list_single_midp_pane_t1

0xdb15,	// (0x0003cf6f) list_midp_form_item_pane_ParamLimits

0xdb15,	// (0x0003cf6f) list_midp_form_item_pane

0x4c1f,	// (0x00034079) list_midp_form_item_pane_t1

0x4c2e,	// (0x00034088) midp_ticker_pane_g1

0x4c3a,	// (0x00034094) midp_ticker_pane_g2

0x0001,

0xf758,	// (0x0003ebb2) midp_ticker_pane_g

0x4c46,	// (0x000340a0) midp_ticker_pane_t1

0x6924,	// (0x00035d7e) midp_editing_number_pane_t1

0x6902,	// (0x00035d5c) midp_editing_number_pane

0x6911,	// (0x00035d6b) midp_ticker_pane

0x66c3,	// (0x00035b1d) ai_message_heading_pane

0x2cbf,	// (0x00032119) bg_popup_window_pane_cp14

0x66cb,	// (0x00035b25) listscroll_ai_message_pane

0x664d,	// (0x00035aa7) ai_message_heading_pane_g1_ParamLimits

0x664d,	// (0x00035aa7) ai_message_heading_pane_g1

0x6659,	// (0x00035ab3) ai_message_heading_pane_g2_ParamLimits

0x6659,	// (0x00035ab3) ai_message_heading_pane_g2

0x6665,	// (0x00035abf) ai_message_heading_pane_g3_ParamLimits

0x6665,	// (0x00035abf) ai_message_heading_pane_g3

0x6671,	// (0x00035acb) ai_message_heading_pane_g4_ParamLimits

0x6671,	// (0x00035acb) ai_message_heading_pane_g4

0x0003,

0xf94c,	// (0x0003eda6) ai_message_heading_pane_g_ParamLimits

0xf94c,	// (0x0003eda6) ai_message_heading_pane_g

0x667d,	// (0x00035ad7) ai_message_heading_pane_t1_ParamLimits

0x667d,	// (0x00035ad7) ai_message_heading_pane_t1

0x6697,	// (0x00035af1) ai_message_heading_pane_t2_ParamLimits

0x6697,	// (0x00035af1) ai_message_heading_pane_t2

0x0001,

0xf955,	// (0x0003edaf) ai_message_heading_pane_t_ParamLimits

0xf955,	// (0x0003edaf) ai_message_heading_pane_t

0x66a9,	// (0x00035b03) bg_popup_heading_pane_cp1_ParamLimits

0x66a9,	// (0x00035b03) bg_popup_heading_pane_cp1

0x663b,	// (0x00035a95) list_ai_message_pane_ParamLimits

0x663b,	// (0x00035a95) list_ai_message_pane

0x4029,	// (0x00033483) scroll_pane_cp10

0x65d7,	// (0x00035a31) list_ai_message_pane_g1

0x65df,	// (0x00035a39) list_ai_message_pane_g2

0x0001,

0xf929,	// (0x0003ed83) list_ai_message_pane_g

0x65e7,	// (0x00035a41) list_ai_message_pane_t1_ParamLimits

0x65e7,	// (0x00035a41) list_ai_message_pane_t1

0x65fc,	// (0x00035a56) list_ai_message_pane_t2_ParamLimits

0x65fc,	// (0x00035a56) list_ai_message_pane_t2

0x6611,	// (0x00035a6b) list_ai_message_pane_t3_ParamLimits

0x6611,	// (0x00035a6b) list_ai_message_pane_t3

0x6626,	// (0x00035a80) list_ai_message_pane_t4_ParamLimits

0x6626,	// (0x00035a80) list_ai_message_pane_t4

0x0003,

0xf92e,	// (0x0003ed88) list_ai_message_pane_t_ParamLimits

0xf92e,	// (0x0003ed88) list_ai_message_pane_t

0xdc99,	// (0x0003d0f3) cell_ai_soft_ind_pane_ParamLimits

0xdc99,	// (0x0003d0f3) cell_ai_soft_ind_pane

0x4c58,	// (0x000340b2) cell_ai_soft_ind_pane_g1_ParamLimits

0x4c58,	// (0x000340b2) cell_ai_soft_ind_pane_g1

0x2cbf,	// (0x00032119) grid_highlight_cp1

0x4c65,	// (0x000340bf) text_secondary_cp56_ParamLimits

0x4c65,	// (0x000340bf) text_secondary_cp56

0x6597,	// (0x000359f1) example_general_pane_ParamLimits

0x6597,	// (0x000359f1) example_general_pane

0x65a3,	// (0x000359fd) example_parent_pane_g1_ParamLimits

0x65a3,	// (0x000359fd) example_parent_pane_g1

0x65af,	// (0x00035a09) example_parent_pane_t1_ParamLimits

0x65af,	// (0x00035a09) example_parent_pane_t1

0xc3e3,	// (0x0003b83d) popup_preview_text_window_ParamLimits

0xc3e3,	// (0x0003b83d) popup_preview_text_window

0x4a82,	// (0x00033edc) list_single_pane_cp2_g4

0x397e,	// (0x00032dd8) bg_popup_preview_window_pane_ParamLimits

0x397e,	// (0x00032dd8) bg_popup_preview_window_pane

0x62ef,	// (0x00035749) popup_preview_text_window_t1_ParamLimits

0x62ef,	// (0x00035749) popup_preview_text_window_t1

0x630d,	// (0x00035767) popup_preview_text_window_t2_ParamLimits

0x630d,	// (0x00035767) popup_preview_text_window_t2

0x6356,	// (0x000357b0) popup_preview_text_window_t3_ParamLimits

0x6356,	// (0x000357b0) popup_preview_text_window_t3

0x639b,	// (0x000357f5) popup_preview_text_window_t4_ParamLimits

0x639b,	// (0x000357f5) popup_preview_text_window_t4

0x0004,

0xf8fd,	// (0x0003ed57) popup_preview_text_window_t_ParamLimits

0xf8fd,	// (0x0003ed57) popup_preview_text_window_t

0x6419,	// (0x00035873) scroll_pane_cp11

0x5399,	// (0x000347f3) bg_popup_preview_window_pane_g1

0x62af,	// (0x00035709) bg_popup_preview_window_pane_g2

0x62b7,	// (0x00035711) bg_popup_preview_window_pane_g3

0x62bf,	// (0x00035719) bg_popup_preview_window_pane_g4

0x62c7,	// (0x00035721) bg_popup_preview_window_pane_g5

0x62cf,	// (0x00035729) bg_popup_preview_window_pane_g6

0x62d7,	// (0x00035731) bg_popup_preview_window_pane_g7

0x62df,	// (0x00035739) bg_popup_preview_window_pane_g8

0xf4c8,	// (0x0003e922) aid_popup_width_pane

0xc35f,	// (0x0003b7b9) popup_midp_note_alarm_window_ParamLimits

0xc35f,	// (0x0003b7b9) popup_midp_note_alarm_window

0x3eb0,	// (0x0003330a) data_form_pane_ParamLimits

0xbced,	// (0x0003b147) form_field_data_pane_g1

0xbcf7,	// (0x0003b151) form_field_data_pane_t1_ParamLimits

0x3ebc,	// (0x00033316) input_focus_pane_ParamLimits

0x094a,	// (0x0002fda4) data_form_wide_pane_ParamLimits

0x095b,	// (0x0002fdb5) form_field_data_wide_pane_g1

0x0967,	// (0x0002fdc1) form_field_data_wide_pane_t1_ParamLimits

0x3c2d,	// (0x00033087) input_focus_pane_cp6_ParamLimits

0xd387,	// (0x0003c7e1) input_popup_find_pane_g1_ParamLimits

0xd387,	// (0x0003c7e1) input_popup_find_pane_g1

0x0bdd,	// (0x00030037) aid_navi_side_left_pane

0x0bf2,	// (0x0003004c) aid_navi_side_right_pane

0x5cbc,	// (0x00035116) bg_popup_window_pane_cp30_ParamLimits

0x5cbc,	// (0x00035116) bg_popup_window_pane_cp30

0x5d42,	// (0x0003519c) popup_midp_note_alarm_window_g1_ParamLimits

0x5d42,	// (0x0003519c) popup_midp_note_alarm_window_g1

0x5d72,	// (0x000351cc) popup_midp_note_alarm_window_t1_ParamLimits

0x5d72,	// (0x000351cc) popup_midp_note_alarm_window_t1

0x5e13,	// (0x0003526d) popup_midp_note_alarm_window_t2_ParamLimits

0x5e13,	// (0x0003526d) popup_midp_note_alarm_window_t2

0x5ec1,	// (0x0003531b) popup_midp_note_alarm_window_t3_ParamLimits

0x5ec1,	// (0x0003531b) popup_midp_note_alarm_window_t3

0x5ef3,	// (0x0003534d) popup_midp_note_alarm_window_t4_ParamLimits

0x5ef3,	// (0x0003534d) popup_midp_note_alarm_window_t4

0x5f19,	// (0x00035373) popup_midp_note_alarm_window_t5_ParamLimits

0x5f19,	// (0x00035373) popup_midp_note_alarm_window_t5

0x000a,

0xf89a,	// (0x0003ecf4) popup_midp_note_alarm_window_t_ParamLimits

0xf89a,	// (0x0003ecf4) popup_midp_note_alarm_window_t

0x5fc5,	// (0x0003541f) wait_bar_pane_cp1_ParamLimits

0x5fc5,	// (0x0003541f) wait_bar_pane_cp1

0x2cbf,	// (0x00032119) wait_anim_pane_copy1

0x2cbf,	// (0x00032119) wait_border_pane_copy1

0x59a2,	// (0x00034dfc) wait_border_pane_g1_copy1

0x0981,	// (0x0002fddb) form_field_popup_pane_g1

0xbd11,	// (0x0003b16b) form_field_popup_pane_t1_ParamLimits

0x3ebc,	// (0x00033316) input_focus_pane_cp7_ParamLimits

0x3eea,	// (0x00033344) list_form_pane_ParamLimits

0x09a1,	// (0x0002fdfb) form_field_popup_wide_pane_g1

0x09a9,	// (0x0002fe03) form_field_popup_wide_pane_t1_ParamLimits

0x3ebc,	// (0x00033316) input_focus_pane_cp8_ParamLimits

0x3ef6,	// (0x00033350) list_form_wide_pane_ParamLimits

0xdeff,	// (0x0003d359) aid_size_cell_graphic_pane

0xbd90,	// (0x0003b1ea) data_form_pane_t1_ParamLimits

0xc762,	// (0x0003bbbc) data_form_wide_pane_t1_ParamLimits

0xd79a,	// (0x0003cbf4) bg_status_flat_pane

0xd046,	// (0x0003c4a0) title_pane_t1_ParamLimits

0x2d67,	// (0x000321c1) title_pane_t2_ParamLimits

0x2d8d,	// (0x000321e7) title_pane_t3_ParamLimits

0xf557,	// (0x0003e9b1) title_pane_t_ParamLimits

0x44aa,	// (0x00033904) level_1_signal_ParamLimits

0x44bc,	// (0x00033916) level_2_signal_ParamLimits

0x44cf,	// (0x00033929) level_3_signal_ParamLimits

0x44e2,	// (0x0003393c) level_4_signal_ParamLimits

0x44f5,	// (0x0003394f) level_5_signal_ParamLimits

0x4508,	// (0x00033962) level_6_signal_ParamLimits

0x451b,	// (0x00033975) level_7_signal_ParamLimits

0x44aa,	// (0x00033904) level_1_battery_ParamLimits

0x44bc,	// (0x00033916) level_2_battery_ParamLimits

0x44cf,	// (0x00033929) level_3_battery_ParamLimits

0x44e2,	// (0x0003393c) level_4_battery_ParamLimits

0x44f5,	// (0x0003394f) level_5_battery_ParamLimits

0x4508,	// (0x00033962) level_6_battery_ParamLimits

0x451b,	// (0x00033975) level_7_battery_ParamLimits

0x5bc1,	// (0x0003501b) bg_status_flat_pane_g1

0x5bc9,	// (0x00035023) bg_status_flat_pane_g2

0x5bd1,	// (0x0003502b) bg_status_flat_pane_g3

0x5bd9,	// (0x00035033) bg_status_flat_pane_g4

0x5be1,	// (0x0003503b) bg_status_flat_pane_g5

0x5be9,	// (0x00035043) bg_status_flat_pane_g6

0x5bf1,	// (0x0003504b) bg_status_flat_pane_g7

0xd0d2,	// (0x0003c52c) tabs_3_active_pane_t1_ParamLimits

0xd0d2,	// (0x0003c52c) tabs_3_passive_pane_t1_ParamLimits

0xd0e4,	// (0x0003c53e) tabs_4_active_pane_t1_ParamLimits

0xd0e4,	// (0x0003c53e) tabs_4_1_passive_pane_t1_ParamLimits

0xd395,	// (0x0003c7ef) tabs_2_active_pane_t1_ParamLimits

0xd395,	// (0x0003c7ef) tabs_2_passive_pane_t1_ParamLimits

0x2d9f,	// (0x000321f9) bg_active_tab_pane_cp4_ParamLimits

0xd3a7,	// (0x0003c801) tabs_2_long_active_pane_t1_ParamLimits

0x4e75,	// (0x000342cf) bg_passive_tab_pane_cp4_ParamLimits

0x1814,	// (0x00030c6e) list_single_midp_graphic_pane_t1_ParamLimits

0x2d9f,	// (0x000321f9) bg_active_tab_pane_cp5_ParamLimits

0xd3ba,	// (0x0003c814) tabs_3_long_active_pane_t1_ParamLimits

0x4e75,	// (0x000342cf) bg_passive_tab_pane_cp5_ParamLimits

0x1814,	// (0x00030c6e) list_single_midp_graphic_pane_t1

0xd79a,	// (0x0003cbf4) bg_status_flat_pane_ParamLimits

0x5029,	// (0x00034483) indicator_pane_cp2_ParamLimits

0x5029,	// (0x00034483) indicator_pane_cp2

0xd918,	// (0x0003cd72) navi_pane_srt_ParamLimits

0xd918,	// (0x0003cd72) navi_pane_srt

0x5178,	// (0x000345d2) popup_clock_digital_analogue_window_cp1

0x3704,	// (0x00032b5e) indicator_pane_t1

0x4b51,	// (0x00033fab) copy_highlight_pane

0x4b51,	// (0x00033fab) cursor_graphics_pane

0x4b51,	// (0x00033fab) graphic_within_text_pane

0x4b51,	// (0x00033fab) link_highlight_pane

0x63dc,	// (0x00035836) popup_preview_text_window_t5_ParamLimits

0x63dc,	// (0x00035836) popup_preview_text_window_t5

0x4c7f,	// (0x000340d9) cursor_digital_pane

0x4c7f,	// (0x000340d9) cursor_primary_pane

0x4c90,	// (0x000340ea) cursor_primary_small_pane

0x4c98,	// (0x000340f2) cursor_secondary_pane

0x4ca0,	// (0x000340fa) cursor_title_pane

0x4c7f,	// (0x000340d9) link_highlight_digital_pane

0x4c87,	// (0x000340e1) link_highlight_primary_pane

0x4c90,	// (0x000340ea) link_highlight_primary_small_pane

0x4c98,	// (0x000340f2) link_highlight_secondary_pane

0x4ca0,	// (0x000340fa) link_highlight_title_pane

0x4c7f,	// (0x000340d9) copy_highlight_digital_pane

0x4c7f,	// (0x000340d9) copy_highlight_primary_pane

0x4c90,	// (0x000340ea) copy_highlight_primary_small_pane

0x4c98,	// (0x000340f2) copy_highlight_secondary_pane

0x4ca0,	// (0x000340fa) copy_highlight_title_pane

0x4c98,	// (0x000340f2) graphic_text_digital_pane

0x5c5f,	// (0x000350b9) graphic_text_primary_pane

0x5c68,	// (0x000350c2) graphic_text_primary_small_pane

0x4c90,	// (0x000340ea) graphic_text_secondary_pane

0x4c7f,	// (0x000340d9) graphic_text_title_pane

0xd5d6,	// (0x0003ca30) cursor_primary_pane_g1

0x5c51,	// (0x000350ab) cursor_text_primary_t1

0xdb96,	// (0x0003cff0) cursor_primary_small_pane_g1

0x5c43,	// (0x0003509d) cursor_text_primary_small_t1

0xdb8c,	// (0x0003cfe6) cursor_primary_small_pane_g1_copy1

0x5c2b,	// (0x00035085) cursor_text_primary_small_t1_copy1

0x5c09,	// (0x00035063) cursor_text_title_t1

0xdb82,	// (0x0003cfdc) cursor_title_pane_g1

0xd5d6,	// (0x0003ca30) cursor_digital_pane_g1

0x4cb2,	// (0x0003410c) cursor_text_digital_t1

0x4cd7,	// (0x00034131) link_highlight_primary_pane_g1

0x5bb2,	// (0x0003500c) link_highlight_primary_pane_t1

0x4cc0,	// (0x0003411a) link_highlight_primary_small_pane_g1

0x4cc8,	// (0x00034122) link_highlight_primary_small_pane_t1

0x4cd7,	// (0x00034131) link_highlight_secondary_pane_g1

0x4cdf,	// (0x00034139) link_highlight_secondary_pane_t1

0x5b26,	// (0x00034f80) link_highlight_title_pane_g1

0x5b2e,	// (0x00034f88) link_highlight_title_pane_t1

0x5b0f,	// (0x00034f69) link_highlight_digital_pane_g1

0x5b17,	// (0x00034f71) link_highlight_digital_pane_t1

0x59e7,	// (0x00034e41) copy_highlight_primary_pane_g1

0x59ef,	// (0x00034e49) copy_highlight_primary_pane_t1

0x59c1,	// (0x00034e1b) copy_highlight_primary_small_pane_g1

0x59d8,	// (0x00034e32) copy_highlight_primary_small_pane_t1

0x4cee,	// (0x00034148) copy_highlight_secondary_pane_g1

0x4cf6,	// (0x00034150) copy_highlight_secondary_pane_t1

0x59c1,	// (0x00034e1b) copy_highlight_title_pane_g1

0x59c9,	// (0x00034e23) copy_highlight_title_pane_t1

0x59e7,	// (0x00034e41) copy_highlight_digital_pane_g1

0x6c78,	// (0x000360d2) copy_highlight_digital_pane_t1

0x6bcc,	// (0x00036026) graphic_text_primary_pane_g1

0x6c5c,	// (0x000360b6) graphic_text_primary_pane_t1

0x6c6a,	// (0x000360c4) graphic_text_primary_pane_t2

0x0001,

0xf9c9,	// (0x0003ee23) graphic_text_primary_pane_t

0x6c38,	// (0x00036092) graphic_text_primary_small_pane_g1

0x6c40,	// (0x0003609a) graphic_text_primary_small_pane_t1

0x6c4e,	// (0x000360a8) graphic_text_primary_small_pane_t2

0x0001,

0xf9c4,	// (0x0003ee1e) graphic_text_primary_small_pane_t

0x6c14,	// (0x0003606e) graphic_text_secondary_pane_g1

0x6c1c,	// (0x00036076) graphic_text_secondary_pane_t1

0x6c2a,	// (0x00036084) graphic_text_secondary_pane_t2

0x0001,

0xf9bf,	// (0x0003ee19) graphic_text_secondary_pane_t

0x6bf0,	// (0x0003604a) graphic_text_title_pane_g1

0x6bf8,	// (0x00036052) graphic_text_title_pane_t1

0x6c06,	// (0x00036060) graphic_text_title_pane_t2

0x0001,

0xf9ba,	// (0x0003ee14) graphic_text_title_pane_t

0x6bcc,	// (0x00036026) graphic_text_digital_pane_g1

0x6bd4,	// (0x0003602e) graphic_text_digital_pane_t1

0x6be2,	// (0x0003603c) graphic_text_digital_pane_t2

0x0001,

0xf9b5,	// (0x0003ee0f) graphic_text_digital_pane_t

0x2d9f,	// (0x000321f9) navi_icon_pane_srt_ParamLimits

0x2d9f,	// (0x000321f9) navi_icon_pane_srt

0x2cbf,	// (0x00032119) navi_midp_pane_srt

0x2cbf,	// (0x00032119) navi_navi_pane_srt

0x2d9f,	// (0x000321f9) navi_text_pane_srt_ParamLimits

0x2d9f,	// (0x000321f9) navi_text_pane_srt

0x6b97,	// (0x00035ff1) navi_navi_icon_text_pane_srt

0x6b9f,	// (0x00035ff9) navi_navi_pane_srt_g1_ParamLimits

0x6b9f,	// (0x00035ff9) navi_navi_pane_srt_g1

0x6bb1,	// (0x0003600b) navi_navi_pane_srt_g2_ParamLimits

0x6bb1,	// (0x0003600b) navi_navi_pane_srt_g2

0x0001,

0xf9b0,	// (0x0003ee0a) navi_navi_pane_srt_g_ParamLimits

0xf9b0,	// (0x0003ee0a) navi_navi_pane_srt_g

0x6bc3,	// (0x0003601d) navi_navi_tabs_pane_srt

0x6b97,	// (0x00035ff1) navi_navi_text_pane_srt

0x6b97,	// (0x00035ff1) navi_navi_volume_pane_srt

0x6b88,	// (0x00035fe2) navi_navi_text_pane_srt_t1

0x1c04,	// (0x0003105e) navi_navi_volume_pane_srt_g1

0x1c0c,	// (0x00031066) volume_small_pane_srt_ParamLimits

0x1c0c,	// (0x00031066) volume_small_pane_srt

0x0f47,	// (0x000303a1) volume_small_pane_srt_g1_ParamLimits

0x0f47,	// (0x000303a1) volume_small_pane_srt_g1

0x0f57,	// (0x000303b1) volume_small_pane_srt_g2_ParamLimits

0x0f57,	// (0x000303b1) volume_small_pane_srt_g2

0x0f68,	// (0x000303c2) volume_small_pane_srt_g3_ParamLimits

0x0f68,	// (0x000303c2) volume_small_pane_srt_g3

0x0f79,	// (0x000303d3) volume_small_pane_srt_g4_ParamLimits

0x0f79,	// (0x000303d3) volume_small_pane_srt_g4

0x0f8a,	// (0x000303e4) volume_small_pane_srt_g5_ParamLimits

0x0f8a,	// (0x000303e4) volume_small_pane_srt_g5

0x0f9b,	// (0x000303f5) volume_small_pane_srt_g6_ParamLimits

0x0f9b,	// (0x000303f5) volume_small_pane_srt_g6

0x0fac,	// (0x00030406) volume_small_pane_srt_g7_ParamLimits

0x0fac,	// (0x00030406) volume_small_pane_srt_g7

0x0fbd,	// (0x00030417) volume_small_pane_srt_g8_ParamLimits

0x0fbd,	// (0x00030417) volume_small_pane_srt_g8

0x0fce,	// (0x00030428) volume_small_pane_srt_g9_ParamLimits

0x0fce,	// (0x00030428) volume_small_pane_srt_g9

0x0fdf,	// (0x00030439) volume_small_pane_srt_g10_ParamLimits

0x0fdf,	// (0x00030439) volume_small_pane_srt_g10

0x0009,

0xf75d,	// (0x0003ebb7) volume_small_pane_srt_g_ParamLimits

0xf75d,	// (0x0003ebb7) volume_small_pane_srt_g

0x3a27,	// (0x00032e81) query_popup_data_pane_cp2

0x6b6e,	// (0x00035fc8) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x6b6e,	// (0x00035fc8) navi_navi_icon_text_pane_srt_t1

0x5c5f,	// (0x000350b9) navi_tabs_2_long_pane_srt

0x5c5f,	// (0x000350b9) navi_tabs_2_pane_srt

0x5c5f,	// (0x000350b9) navi_tabs_3_long_pane_srt

0x5c5f,	// (0x000350b9) navi_tabs_3_pane_srt

0x5c5f,	// (0x000350b9) navi_tabs_4_pane_srt

0x1be4,	// (0x0003103e) tabs_2_active_pane_srt_ParamLimits

0x1be4,	// (0x0003103e) tabs_2_active_pane_srt

0x1bf4,	// (0x0003104e) tabs_2_passive_pane_srt_ParamLimits

0x1bf4,	// (0x0003104e) tabs_2_passive_pane_srt

0x540d,	// (0x00034867) bg_passive_tab_pane_cp1_srt_ParamLimits

0x540d,	// (0x00034867) bg_passive_tab_pane_cp1_srt

0x6b3a,	// (0x00035f94) bg_passive_tab_pane_g1_cp1_srt

0x4793,	// (0x00033bed) bg_passive_tab_pane_g2_cp1_srt

0x6b43,	// (0x00035f9d) bg_passive_tab_pane_g3_cp1_srt

0x38a2,	// (0x00032cfc) bg_active_tab_pane_cp1_srt_ParamLimits

0x38a2,	// (0x00032cfc) bg_active_tab_pane_cp1_srt

0x6b4c,	// (0x00035fa6) tabs_2_active_pane_srt_g1

0xdf41,	// (0x0003d39b) tabs_2_active_pane_srt_t1_ParamLimits

0xdf41,	// (0x0003d39b) tabs_2_active_pane_srt_t1

0x6b3a,	// (0x00035f94) bg_active_tab_pane_g1_cp1_srt

0x4793,	// (0x00033bed) bg_active_tab_pane_g2_cp1_srt

0x6b43,	// (0x00035f9d) bg_active_tab_pane_g3_cp1_srt

0x1bb1,	// (0x0003100b) tabs_3_active_pane_srt_ParamLimits

0x1bb1,	// (0x0003100b) tabs_3_active_pane_srt

0x1bc2,	// (0x0003101c) tabs_3_passive_pane_cp_srt_ParamLimits

0x1bc2,	// (0x0003101c) tabs_3_passive_pane_cp_srt

0x1bd3,	// (0x0003102d) tabs_3_passive_pane_srt_ParamLimits

0x1bd3,	// (0x0003102d) tabs_3_passive_pane_srt

0x540d,	// (0x00034867) bg_passive_tab_pane_cp2_srt_ParamLimits

0x540d,	// (0x00034867) bg_passive_tab_pane_cp2_srt

0x4d05,	// (0x0003415f) bg_passive_tab_pane_g1_cp2_srt

0x4793,	// (0x00033bed) bg_passive_tab_pane_g2_cp2_srt

0x4d0e,	// (0x00034168) bg_passive_tab_pane_g3_cp2_srt

0x38a2,	// (0x00032cfc) bg_active_tab_pane_cp2_srt_ParamLimits

0x38a2,	// (0x00032cfc) bg_active_tab_pane_cp2_srt

0x6b20,	// (0x00035f7a) tabs_3_active_pane_srt_g1

0xdf2b,	// (0x0003d385) tabs_3_active_pane_srt_t1_ParamLimits

0xdf2b,	// (0x0003d385) tabs_3_active_pane_srt_t1

0x4d05,	// (0x0003415f) bg_active_tab_pane_g1_cp2_srt

0x4793,	// (0x00033bed) bg_active_tab_pane_g2_cp2_srt

0x4d0e,	// (0x00034168) bg_active_tab_pane_g3_cp2_srt

0x1b69,	// (0x00030fc3) tabs_4_active_pane_srt_ParamLimits

0x1b69,	// (0x00030fc3) tabs_4_active_pane_srt

0x1b7b,	// (0x00030fd5) tabs_4_passive_pane_cp2_srt_ParamLimits

0x1b7b,	// (0x00030fd5) tabs_4_passive_pane_cp2_srt

0x114e,	// (0x000305a8) aid_size_cell_toolbar

0x677b,	// (0x00035bd5) main_idle_act_pane_ParamLimits

0x130d,	// (0x00030767) popup_large_graphic_colour_window_ParamLimits

0xc66f,	// (0x0003bac9) popup_toolbar_window_ParamLimits

0xc66f,	// (0x0003bac9) popup_toolbar_window

0x6933,	// (0x00035d8d) list_single_graphic_2heading_pane_ParamLimits

0x6933,	// (0x00035d8d) list_single_graphic_2heading_pane

0x4259,	// (0x000336b3) aid_size_cell_apps_grid_lsc_pane

0x426b,	// (0x000336c5) aid_size_cell_apps_grid_prt_pane

0x4e75,	// (0x000342cf) bg_wml_button_pane_cp1_ParamLimits

0x4e75,	// (0x000342cf) bg_wml_button_pane_cp1

0xdb45,	// (0x0003cf9f) form_midp_field_text_pane_t1_ParamLimits

0x540d,	// (0x00034867) input_focus_pane_cp050_ParamLimits

0x5674,	// (0x00034ace) list_midp_form_text_pane_ParamLimits

0x561a,	// (0x00034a74) input_focus_pane_cp051_ParamLimits

0x562e,	// (0x00034a88) list_midp_choice_pane_ParamLimits

0xdae3,	// (0x0003cf3d) list_single_2graphic_pane_cp3_ParamLimits

0xdae3,	// (0x0003cf3d) list_single_2graphic_pane_cp3

0xdaf6,	// (0x0003cf50) list_single_midp_graphic_pane_ParamLimits

0xdaf6,	// (0x0003cf50) list_single_midp_graphic_pane

0xf4e4,	// (0x0003e93e) list_single_graphic_2heading_pane_g1_ParamLimits

0xf4e4,	// (0x0003e93e) list_single_graphic_2heading_pane_g1

0xf4f0,	// (0x0003e94a) list_single_graphic_2heading_pane_g4_ParamLimits

0xf4f0,	// (0x0003e94a) list_single_graphic_2heading_pane_g4

0xf4fc,	// (0x0003e956) list_single_graphic_2heading_pane_g5_ParamLimits

0xf4fc,	// (0x0003e956) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b0,	// (0x0003ec0a) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b0,	// (0x0003ec0a) list_single_graphic_2heading_pane_g

0xf508,	// (0x0003e962) list_single_graphic_2heading_pane_t1_ParamLimits

0xf508,	// (0x0003e962) list_single_graphic_2heading_pane_t1

0xf51c,	// (0x0003e976) list_single_graphic_2heading_pane_t2_ParamLimits

0xf51c,	// (0x0003e976) list_single_graphic_2heading_pane_t2

0xf536,	// (0x0003e990) list_single_graphic_2heading_pane_t3_ParamLimits

0xf536,	// (0x0003e990) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b7,	// (0x0003ec11) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b7,	// (0x0003ec11) list_single_graphic_2heading_pane_t

0x52d7,	// (0x00034731) bg_popup_sub_pane_cp2

0x5301,	// (0x0003475b) grid_toobar_pane

0x1721,	// (0x00030b7b) cell_toolbar_pane_ParamLimits

0x1721,	// (0x00030b7b) cell_toolbar_pane

0x533d,	// (0x00034797) cell_toolbar_pane_g1_ParamLimits

0x533d,	// (0x00034797) cell_toolbar_pane_g1

0x5351,	// (0x000347ab) cell_toolbar_pane_g2_ParamLimits

0x5351,	// (0x000347ab) cell_toolbar_pane_g2

0x0001,

0xf7c5,	// (0x0003ec1f) cell_toolbar_pane_g_ParamLimits

0xf7c5,	// (0x0003ec1f) cell_toolbar_pane_g

0x5373,	// (0x000347cd) grid_highlight_pane_cp2_ParamLimits

0x5373,	// (0x000347cd) grid_highlight_pane_cp2

0x538d,	// (0x000347e7) toolbar_button_pane

0x5399,	// (0x000347f3) toolbar_button_pane_g1

0x53a1,	// (0x000347fb) toolbar_button_pane_g2

0x53a9,	// (0x00034803) toolbar_button_pane_g3

0x53b1,	// (0x0003480b) toolbar_button_pane_g4

0x53b9,	// (0x00034813) toolbar_button_pane_g5

0x53c1,	// (0x0003481b) toolbar_button_pane_g6

0x53c9,	// (0x00034823) toolbar_button_pane_g7

0x53d1,	// (0x0003482b) toolbar_button_pane_g8

0x53d9,	// (0x00034833) toolbar_button_pane_g9

0x0009,

0xf7ca,	// (0x0003ec24) toolbar_button_pane_g

0x1793,	// (0x00030bed) list_single_2graphic_pane_g1_cp3_ParamLimits

0x1793,	// (0x00030bed) list_single_2graphic_pane_g1_cp3

0xc6c7,	// (0x0003bb21) list_single_2graphic_pane_g2_cp3_ParamLimits

0xc6c7,	// (0x0003bb21) list_single_2graphic_pane_g2_cp3

0x17b0,	// (0x00030c0a) list_single_2graphic_pane_g3_cp3

0x17b8,	// (0x00030c12) list_single_2graphic_pane_g4_cp3_ParamLimits

0x17b8,	// (0x00030c12) list_single_2graphic_pane_g4_cp3

0x17c4,	// (0x00030c1e) list_single_2graphic_pane_t1_cp3_ParamLimits

0x17c4,	// (0x00030c1e) list_single_2graphic_pane_t1_cp3

0x1808,	// (0x00030c62) list_single_midp_graphic_pane_g2_ParamLimits

0x1808,	// (0x00030c62) list_single_midp_graphic_pane_g2

0x1156,	// (0x000305b0) aid_zoom_text_primary

0xf4dc,	// (0x0003e936) aid_zoom_text_secondary

0xd62e,	// (0x0003ca88) status_small_pane_g7_ParamLimits

0xd62e,	// (0x0003ca88) status_small_pane_g7

0xd651,	// (0x0003caab) status_small_pane_t1_ParamLimits

0xd022,	// (0x0003c47c) title_pane_g2

0x0003,

0xf54e,	// (0x0003e9a8) title_pane_g

0xd29a,	// (0x0003c6f4) aid_size_cell_colour_1_pane_ParamLimits

0xd29a,	// (0x0003c6f4) aid_size_cell_colour_1_pane

0xd2ae,	// (0x0003c708) aid_size_cell_colour_2_pane_ParamLimits

0xd2ae,	// (0x0003c708) aid_size_cell_colour_2_pane

0xd2c2,	// (0x0003c71c) aid_size_cell_colour_3_pane_ParamLimits

0xd2c2,	// (0x0003c71c) aid_size_cell_colour_3_pane

0xd2d6,	// (0x0003c730) aid_size_cell_colour_4_pane_ParamLimits

0xd2d6,	// (0x0003c730) aid_size_cell_colour_4_pane

0x0b1a,	// (0x0002ff74) title_pane_stacon_g1_ParamLimits

0x0b1a,	// (0x0002ff74) title_pane_stacon_g1

0x5a46,	// (0x00034ea0) popup_note_wait_window_g3_ParamLimits

0x5a46,	// (0x00034ea0) popup_note_wait_window_g3

0x5abc,	// (0x00034f16) popup_note_wait_window_t5_ParamLimits

0x5abc,	// (0x00034f16) popup_note_wait_window_t5

0x2cbf,	// (0x00032119) main_feb_china_hwr_fs_writing_pane

0xc077,	// (0x0003b4d1) popup_feb_china_hwr_fs_window_ParamLimits

0xc077,	// (0x0003b4d1) popup_feb_china_hwr_fs_window

0xc6d8,	// (0x0003bb32) aid_size_cell_hwr_fs_ParamLimits

0xc6d8,	// (0x0003bb32) aid_size_cell_hwr_fs

0x540d,	// (0x00034867) bg_popup_sub_pane_cp3_ParamLimits

0x540d,	// (0x00034867) bg_popup_sub_pane_cp3

0xc6ed,	// (0x0003bb47) grid_hwr_fs_pane_ParamLimits

0xc6ed,	// (0x0003bb47) grid_hwr_fs_pane

0x18cd,	// (0x00030d27) linegrid_hwr_fs_pane_ParamLimits

0x18cd,	// (0x00030d27) linegrid_hwr_fs_pane

0xc705,	// (0x0003bb5f) cell_hwr_fs_pane_ParamLimits

0xc705,	// (0x0003bb5f) cell_hwr_fs_pane

0x5419,	// (0x00034873) linegrid_hwr_fs_pane_g1_ParamLimits

0x5419,	// (0x00034873) linegrid_hwr_fs_pane_g1

0xdab7,	// (0x0003cf11) linegrid_hwr_fs_pane_g2_ParamLimits

0xdab7,	// (0x0003cf11) linegrid_hwr_fs_pane_g2

0x5437,	// (0x00034891) linegrid_hwr_fs_pane_g3_ParamLimits

0x5437,	// (0x00034891) linegrid_hwr_fs_pane_g3

0x18ff,	// (0x00030d59) linegrid_hwr_fs_pane_g4_ParamLimits

0x18ff,	// (0x00030d59) linegrid_hwr_fs_pane_g4

0x1919,	// (0x00030d73) linegrid_hwr_fs_pane_g5_ParamLimits

0x1919,	// (0x00030d73) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f0,	// (0x0003ec4a) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f0,	// (0x0003ec4a) linegrid_hwr_fs_pane_g

0x5443,	// (0x0003489d) cell_hwr_fs_pane_g1_ParamLimits

0x5443,	// (0x0003489d) cell_hwr_fs_pane_g1

0x520e,	// (0x00034668) cell_hwr_fs_pane_g2_ParamLimits

0x520e,	// (0x00034668) cell_hwr_fs_pane_g2

0xdac9,	// (0x0003cf23) cell_hwr_fs_pane_g3_ParamLimits

0xdac9,	// (0x0003cf23) cell_hwr_fs_pane_g3

0xdad6,	// (0x0003cf30) cell_hwr_fs_pane_g4_ParamLimits

0xdad6,	// (0x0003cf30) cell_hwr_fs_pane_g4

0x0003,

0xf7fb,	// (0x0003ec55) cell_hwr_fs_pane_g_ParamLimits

0xf7fb,	// (0x0003ec55) cell_hwr_fs_pane_g

0xc72b,	// (0x0003bb85) cell_hwr_fs_pane_t1

0x2cbf,	// (0x00032119) grid_highlight_pane_cp6

0x2cbf,	// (0x00032119) main_idle_act2_pane

0x4010,	// (0x0003346a) aid_inside_area_popup_secondary

0xdba0,	// (0x0003cffa) aid_inside_area_window_primary_ParamLimits

0xdba0,	// (0x0003cffa) aid_inside_area_window_primary

0x6c87,	// (0x000360e1) ai2_news_ticker_pane

0x6c8f,	// (0x000360e9) aid_size_cell_ai1_link_ParamLimits

0x6c8f,	// (0x000360e9) aid_size_cell_ai1_link

0xdf57,	// (0x0003d3b1) popup_ai2_data_window_ParamLimits

0xdf57,	// (0x0003d3b1) popup_ai2_data_window

0x6cbf,	// (0x00036119) popup_ai2_link_window_ParamLimits

0x6cbf,	// (0x00036119) popup_ai2_link_window

0x540d,	// (0x00034867) bg_popup_sub_pane_cp4_ParamLimits

0x540d,	// (0x00034867) bg_popup_sub_pane_cp4

0x6cd3,	// (0x0003612d) grid_ai2_link_pane_ParamLimits

0x6cd3,	// (0x0003612d) grid_ai2_link_pane

0x6cea,	// (0x00036144) popup_ai2_link_window_g1_ParamLimits

0x6cea,	// (0x00036144) popup_ai2_link_window_g1

0x6cf6,	// (0x00036150) popup_ai2_link_window_g2_ParamLimits

0x6cf6,	// (0x00036150) popup_ai2_link_window_g2

0x0001,

0xf9ce,	// (0x0003ee28) popup_ai2_link_window_g_ParamLimits

0xf9ce,	// (0x0003ee28) popup_ai2_link_window_g

0x6d05,	// (0x0003615f) ai2_mp_button_pane

0x6d0d,	// (0x00036167) ai2_mp_volume_pane

0x561a,	// (0x00034a74) bg_popup_sub_pane_cp5_ParamLimits

0x561a,	// (0x00034a74) bg_popup_sub_pane_cp5

0x6d15,	// (0x0003616f) heading_ai2_gene_pane_ParamLimits

0x6d15,	// (0x0003616f) heading_ai2_gene_pane

0x6d21,	// (0x0003617b) list_ai2_gene_pane_ParamLimits

0x6d21,	// (0x0003617b) list_ai2_gene_pane

0x6d69,	// (0x000361c3) cell_ai2_link_pane_ParamLimits

0x6d69,	// (0x000361c3) cell_ai2_link_pane

0x6d7f,	// (0x000361d9) cell_ai2_link_pane_g1

0x2cbf,	// (0x00032119) grid_highlight_pane_cp7

0x1c21,	// (0x0003107b) ai2_mp_volume_pane_g1

0x6e4f,	// (0x000362a9) ai2_mp_volume_pane_g2

0xdf81,	// (0x0003d3db) list_ai2_gene_pane_t1

0x6e57,	// (0x000362b1) ai2_mp_volume_pane_g3

0x0002,

0xf9e7,	// (0x0003ee41) ai2_mp_volume_pane_g

0x1c29,	// (0x00031083) volume_small_pane_cp3

0x6e5f,	// (0x000362b9) aid_size_cell_ai2_button

0x6e67,	// (0x000362c1) grid_ai2_button_pane

0x6e70,	// (0x000362ca) cell_ai2_button_pane_ParamLimits

0x6e70,	// (0x000362ca) cell_ai2_button_pane

0x2cb5,	// (0x0003210f) cell_ai2_button_pane_g1

0x2cbf,	// (0x00032119) grid_highlight_pane_cp8

0x6e0f,	// (0x00036269) ai2_gene_pane_t1_ParamLimits

0x6e0f,	// (0x00036269) ai2_gene_pane_t1

0xc001,	// (0x0003b45b) aid_height_parent_landscape

0xdce7,	// (0x0003d141) aid_height_set_list

0x677b,	// (0x00035bd5) aid_size_parent

0xdeff,	// (0x0003d359) aid_size_cell_graphic_pane_ParamLimits

0x6d31,	// (0x0003618b) popup_ai2_data_window_g1_ParamLimits

0x6d31,	// (0x0003618b) popup_ai2_data_window_g1

0x6d3d,	// (0x00036197) ai2_news_ticker_pane_g1

0x6d45,	// (0x0003619f) ai2_news_ticker_pane_g2

0x0001,

0xf9d3,	// (0x0003ee2d) ai2_news_ticker_pane_g

0x6d4d,	// (0x000361a7) ai2_news_ticker_pane_t1

0x6d5b,	// (0x000361b5) ai2_news_ticker_pane_t2

0x0001,

0xf9d8,	// (0x0003ee32) ai2_news_ticker_pane_t

0x6d88,	// (0x000361e2) heading_ai2_gene_pane_g1

0x6d90,	// (0x000361ea) heading_ai2_gene_pane_t1_ParamLimits

0x6d90,	// (0x000361ea) heading_ai2_gene_pane_t1

0x6da5,	// (0x000361ff) list_highlight_pane_cp6

0xdf6b,	// (0x0003d3c5) ai2_gene_pane_ParamLimits

0xdf6b,	// (0x0003d3c5) ai2_gene_pane

0xdf8f,	// (0x0003d3e9) list_ai2_gene_pane_t2

0x0001,

0xf9dd,	// (0x0003ee37) list_ai2_gene_pane_t

0x6de0,	// (0x0003623a) list_highlight_pane_cp8_ParamLimits

0x6de0,	// (0x0003623a) list_highlight_pane_cp8

0x6df1,	// (0x0003624b) ai2_gene_pane_g1_ParamLimits

0x6df1,	// (0x0003624b) ai2_gene_pane_g1

0x6e03,	// (0x0003625d) ai2_gene_pane_g2_ParamLimits

0x6e03,	// (0x0003625d) ai2_gene_pane_g2

0x0001,

0xf9e2,	// (0x0003ee3c) ai2_gene_pane_g_ParamLimits

0xf9e2,	// (0x0003ee3c) ai2_gene_pane_g

0x3e52,	// (0x000332ac) scroll_pane_cp12

0xbfbe,	// (0x0003b418) control_pane_t3_ParamLimits

0xbfbe,	// (0x0003b418) control_pane_t3

0xd642,	// (0x0003ca9c) status_small_pane_g8_ParamLimits

0xd642,	// (0x0003ca9c) status_small_pane_g8

0xc10c,	// (0x0003b566) popup_find_window_ParamLimits

0xc399,	// (0x0003b7f3) popup_note_image_window_ParamLimits

0x1751,	// (0x00030bab) list_double2_graphic_pane_vc_g1_ParamLimits

0x1751,	// (0x00030bab) list_double2_graphic_pane_vc_g1

0x175d,	// (0x00030bb7) list_double2_graphic_pane_vc_g2_ParamLimits

0x175d,	// (0x00030bb7) list_double2_graphic_pane_vc_g2

0x1769,	// (0x00030bc3) list_double2_graphic_pane_vc_g3_ParamLimits

0x1769,	// (0x00030bc3) list_double2_graphic_pane_vc_g3

0x0002,

0xf7be,	// (0x0003ec18) list_double2_graphic_pane_vc_g_ParamLimits

0xf7be,	// (0x0003ec18) list_double2_graphic_pane_vc_g

0x1775,	// (0x00030bcf) list_double2_graphic_pane_vc_t1_ParamLimits

0x1775,	// (0x00030bcf) list_double2_graphic_pane_vc_t1

0x175d,	// (0x00030bb7) list_single_heading_pane_vc_g1_ParamLimits

0x175d,	// (0x00030bb7) list_single_heading_pane_vc_g1

0x1769,	// (0x00030bc3) list_single_heading_pane_vc_g2_ParamLimits

0x1769,	// (0x00030bc3) list_single_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x0003ea22) list_single_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x0003ea22) list_single_heading_pane_vc_g

0x17e0,	// (0x00030c3a) list_single_heading_pane_vc_t1_ParamLimits

0x17e0,	// (0x00030c3a) list_single_heading_pane_vc_t1

0x17f6,	// (0x00030c50) list_single_heading_pane_vc_t2_ParamLimits

0x17f6,	// (0x00030c50) list_single_heading_pane_vc_t2

0x0001,

0xf7df,	// (0x0003ec39) list_single_heading_pane_vc_t_ParamLimits

0xf7df,	// (0x0003ec39) list_single_heading_pane_vc_t

0x182a,	// (0x00030c84) list_setting_number_pane_vc_g1_ParamLimits

0x182a,	// (0x00030c84) list_setting_number_pane_vc_g1

0x1836,	// (0x00030c90) list_setting_number_pane_vc_g2_ParamLimits

0x1836,	// (0x00030c90) list_setting_number_pane_vc_g2

0x0001,

0xf7e4,	// (0x0003ec3e) list_setting_number_pane_vc_g_ParamLimits

0xf7e4,	// (0x0003ec3e) list_setting_number_pane_vc_g

0x1842,	// (0x00030c9c) list_setting_number_pane_vc_t1_ParamLimits

0x1842,	// (0x00030c9c) list_setting_number_pane_vc_t1

0x1856,	// (0x00030cb0) list_setting_number_pane_vc_t2_ParamLimits

0x1856,	// (0x00030cb0) list_setting_number_pane_vc_t2

0x1872,	// (0x00030ccc) list_setting_number_pane_vc_t3_ParamLimits

0x1872,	// (0x00030ccc) list_setting_number_pane_vc_t3

0x0002,

0xf7e9,	// (0x0003ec43) list_setting_number_pane_vc_t_ParamLimits

0xf7e9,	// (0x0003ec43) list_setting_number_pane_vc_t

0x1890,	// (0x00030cea) set_value_pane_vc_ParamLimits

0x1890,	// (0x00030cea) set_value_pane_vc

0x6933,	// (0x00035d8d) list_double2_graphic_pane_vc_ParamLimits

0x6933,	// (0x00035d8d) list_double2_graphic_pane_vc

0x6933,	// (0x00035d8d) list_double2_large_graphic_pane_vc_ParamLimits

0x6933,	// (0x00035d8d) list_double2_large_graphic_pane_vc

0x6933,	// (0x00035d8d) list_double2_pane_vc_ParamLimits

0x6933,	// (0x00035d8d) list_double2_pane_vc

0x6933,	// (0x00035d8d) list_double_graphic_heading_pane_vc_ParamLimits

0x6933,	// (0x00035d8d) list_double_graphic_heading_pane_vc

0x6933,	// (0x00035d8d) list_double_graphic_pane_vc_ParamLimits

0x6933,	// (0x00035d8d) list_double_graphic_pane_vc

0x6933,	// (0x00035d8d) list_double_heading_pane_vc_ParamLimits

0x6933,	// (0x00035d8d) list_double_heading_pane_vc

0x6945,	// (0x00035d9f) list_double_large_graphic_pane_vc_ParamLimits

0x6945,	// (0x00035d9f) list_double_large_graphic_pane_vc

0x6933,	// (0x00035d8d) list_double_number_pane_vc_ParamLimits

0x6933,	// (0x00035d8d) list_double_number_pane_vc

0x6933,	// (0x00035d8d) list_double_pane_vc_ParamLimits

0x6933,	// (0x00035d8d) list_double_pane_vc

0x6933,	// (0x00035d8d) list_double_time_pane_vc_ParamLimits

0x6933,	// (0x00035d8d) list_double_time_pane_vc

0x6933,	// (0x00035d8d) list_setting_number_pane_vc_ParamLimits

0x6933,	// (0x00035d8d) list_setting_number_pane_vc

0x6933,	// (0x00035d8d) list_setting_pane_vc_ParamLimits

0x6933,	// (0x00035d8d) list_setting_pane_vc

0x6933,	// (0x00035d8d) list_single_graphic_heading_pane_vc_ParamLimits

0x6933,	// (0x00035d8d) list_single_graphic_heading_pane_vc

0x6933,	// (0x00035d8d) list_single_heading_pane_vc_ParamLimits

0x6933,	// (0x00035d8d) list_single_heading_pane_vc

0x6933,	// (0x00035d8d) list_single_number_heading_pane_vc_ParamLimits

0x6933,	// (0x00035d8d) list_single_number_heading_pane_vc

0x1751,	// (0x00030bab) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x1751,	// (0x00030bab) list_double_graphic_heading_pane_vc_g1

0x175d,	// (0x00030bb7) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x175d,	// (0x00030bb7) list_double_graphic_heading_pane_vc_g2

0x1769,	// (0x00030bc3) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x1769,	// (0x00030bc3) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7be,	// (0x0003ec18) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7be,	// (0x0003ec18) list_double_graphic_heading_pane_vc_g

0x2ef7,	// (0x00032351) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x2ef7,	// (0x00032351) list_double_graphic_heading_pane_vc_t1

0x2f13,	// (0x0003236d) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x2f13,	// (0x0003236d) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9ee,	// (0x0003ee48) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9ee,	// (0x0003ee48) list_double_graphic_heading_pane_vc_t

0x182a,	// (0x00030c84) list_setting_pane_vc_g1_ParamLimits

0x182a,	// (0x00030c84) list_setting_pane_vc_g1

0x1836,	// (0x00030c90) list_setting_pane_vc_g2_ParamLimits

0x1836,	// (0x00030c90) list_setting_pane_vc_g2

0x0001,

0xf7e4,	// (0x0003ec3e) list_setting_pane_vc_g_ParamLimits

0xf7e4,	// (0x0003ec3e) list_setting_pane_vc_g

0x2f31,	// (0x0003238b) list_setting_pane_vc_t1_ParamLimits

0x2f31,	// (0x0003238b) list_setting_pane_vc_t1

0x2f4d,	// (0x000323a7) list_setting_pane_vc_t2_ParamLimits

0x2f4d,	// (0x000323a7) list_setting_pane_vc_t2

0x0001,

0xfa1c,	// (0x0003ee76) list_setting_pane_vc_t_ParamLimits

0xfa1c,	// (0x0003ee76) list_setting_pane_vc_t

0x1890,	// (0x00030cea) set_value_pane_cp_vc_ParamLimits

0x1890,	// (0x00030cea) set_value_pane_cp_vc

0x175d,	// (0x00030bb7) list_single_number_heading_pane_vc_g1_ParamLimits

0x175d,	// (0x00030bb7) list_single_number_heading_pane_vc_g1

0x1769,	// (0x00030bc3) list_single_number_heading_pane_vc_g2_ParamLimits

0x1769,	// (0x00030bc3) list_single_number_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x0003ea22) list_single_number_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x0003ea22) list_single_number_heading_pane_vc_g

0x2f69,	// (0x000323c3) list_single_number_heading_pane_vc_t1_ParamLimits

0x2f69,	// (0x000323c3) list_single_number_heading_pane_vc_t1

0x2f7f,	// (0x000323d9) list_single_number_heading_pane_vc_t2_ParamLimits

0x2f7f,	// (0x000323d9) list_single_number_heading_pane_vc_t2

0x2f91,	// (0x000323eb) list_single_number_heading_pane_vc_t3_ParamLimits

0x2f91,	// (0x000323eb) list_single_number_heading_pane_vc_t3

0x0002,

0xfa21,	// (0x0003ee7b) list_single_number_heading_pane_vc_t_ParamLimits

0xfa21,	// (0x0003ee7b) list_single_number_heading_pane_vc_t

0x1751,	// (0x00030bab) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x1751,	// (0x00030bab) list_single_graphic_heading_pane_vc_g1

0x175d,	// (0x00030bb7) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x175d,	// (0x00030bb7) list_single_graphic_heading_pane_vc_g4

0x1769,	// (0x00030bc3) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x1769,	// (0x00030bc3) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7be,	// (0x0003ec18) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7be,	// (0x0003ec18) list_single_graphic_heading_pane_vc_g

0x2fa3,	// (0x000323fd) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x2fa3,	// (0x000323fd) list_single_graphic_heading_pane_vc_t1

0x2fb9,	// (0x00032413) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x2fb9,	// (0x00032413) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa28,	// (0x0003ee82) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa28,	// (0x0003ee82) list_single_graphic_heading_pane_vc_t

0x175d,	// (0x00030bb7) list_double2_pane_vc_g1_ParamLimits

0x175d,	// (0x00030bb7) list_double2_pane_vc_g1

0x1769,	// (0x00030bc3) list_double2_pane_vc_g2_ParamLimits

0x1769,	// (0x00030bc3) list_double2_pane_vc_g2

0x0001,

0xf5c8,	// (0x0003ea22) list_double2_pane_vc_g_ParamLimits

0xf5c8,	// (0x0003ea22) list_double2_pane_vc_g

0x2fcb,	// (0x00032425) list_double2_pane_vc_t1_ParamLimits

0x2fcb,	// (0x00032425) list_double2_pane_vc_t1

0x2fe1,	// (0x0003243b) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x2fe1,	// (0x0003243b) list_double2_large_graphic_pane_vc_g1

0x175d,	// (0x00030bb7) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x175d,	// (0x00030bb7) list_double2_large_graphic_pane_vc_g2

0x1769,	// (0x00030bc3) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x1769,	// (0x00030bc3) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5e5,	// (0x0003ea3f) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5e5,	// (0x0003ea3f) list_double2_large_graphic_pane_vc_g

0x2fed,	// (0x00032447) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x2fed,	// (0x00032447) list_double2_large_graphic_pane_vc_t1

0x3003,	// (0x0003245d) list_double_time_pane_vc_g1_ParamLimits

0x3003,	// (0x0003245d) list_double_time_pane_vc_g1

0x300f,	// (0x00032469) list_double_time_pane_vc_g2_ParamLimits

0x300f,	// (0x00032469) list_double_time_pane_vc_g2

0x0001,

0xfa2d,	// (0x0003ee87) list_double_time_pane_vc_g_ParamLimits

0xfa2d,	// (0x0003ee87) list_double_time_pane_vc_g

0x301b,	// (0x00032475) list_double_time_pane_vc_t1_ParamLimits

0x301b,	// (0x00032475) list_double_time_pane_vc_t1

0x303f,	// (0x00032499) list_double_time_pane_vc_t2_ParamLimits

0x303f,	// (0x00032499) list_double_time_pane_vc_t2

0x308e,	// (0x000324e8) list_double_time_pane_vc_t3_ParamLimits

0x308e,	// (0x000324e8) list_double_time_pane_vc_t3

0x30a0,	// (0x000324fa) list_double_time_pane_vc_t4_ParamLimits

0x30a0,	// (0x000324fa) list_double_time_pane_vc_t4

0x0003,

0xfa32,	// (0x0003ee8c) list_double_time_pane_vc_t_ParamLimits

0xfa32,	// (0x0003ee8c) list_double_time_pane_vc_t

0x175d,	// (0x00030bb7) list_double_pane_vc_g1_ParamLimits

0x175d,	// (0x00030bb7) list_double_pane_vc_g1

0x1769,	// (0x00030bc3) list_double_pane_vc_g2_ParamLimits

0x1769,	// (0x00030bc3) list_double_pane_vc_g2

0x0001,

0xf5c8,	// (0x0003ea22) list_double_pane_vc_g_ParamLimits

0xf5c8,	// (0x0003ea22) list_double_pane_vc_g

0x30b4,	// (0x0003250e) list_double_pane_vc_t1_ParamLimits

0x30b4,	// (0x0003250e) list_double_pane_vc_t1

0x30c8,	// (0x00032522) list_double_pane_vc_t2_ParamLimits

0x30c8,	// (0x00032522) list_double_pane_vc_t2

0x0001,

0xfa3b,	// (0x0003ee95) list_double_pane_vc_t_ParamLimits

0xfa3b,	// (0x0003ee95) list_double_pane_vc_t

0x175d,	// (0x00030bb7) list_double_number_pane_vc_g1_ParamLimits

0x175d,	// (0x00030bb7) list_double_number_pane_vc_g1

0x1769,	// (0x00030bc3) list_double_number_pane_vc_g2_ParamLimits

0x1769,	// (0x00030bc3) list_double_number_pane_vc_g2

0x0001,

0xf5c8,	// (0x0003ea22) list_double_number_pane_vc_g_ParamLimits

0xf5c8,	// (0x0003ea22) list_double_number_pane_vc_g

0x30e0,	// (0x0003253a) list_double_number_pane_vc_t1_ParamLimits

0x30e0,	// (0x0003253a) list_double_number_pane_vc_t1

0x30f2,	// (0x0003254c) list_double_number_pane_vc_t2_ParamLimits

0x30f2,	// (0x0003254c) list_double_number_pane_vc_t2

0x3106,	// (0x00032560) list_double_number_pane_vc_t3_ParamLimits

0x3106,	// (0x00032560) list_double_number_pane_vc_t3

0x0002,

0xfa40,	// (0x0003ee9a) list_double_number_pane_vc_t_ParamLimits

0xfa40,	// (0x0003ee9a) list_double_number_pane_vc_t

0x311e,	// (0x00032578) list_double_large_graphic_pane_vc_g1_ParamLimits

0x311e,	// (0x00032578) list_double_large_graphic_pane_vc_g1

0x3140,	// (0x0003259a) list_double_large_graphic_pane_vc_g2_ParamLimits

0x3140,	// (0x0003259a) list_double_large_graphic_pane_vc_g2

0x3154,	// (0x000325ae) list_double_large_graphic_pane_vc_g3_ParamLimits

0x3154,	// (0x000325ae) list_double_large_graphic_pane_vc_g3

0x3163,	// (0x000325bd) list_double_large_graphic_pane_vc_g4_ParamLimits

0x3163,	// (0x000325bd) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa47,	// (0x0003eea1) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa47,	// (0x0003eea1) list_double_large_graphic_pane_vc_g

0x316f,	// (0x000325c9) list_double_large_graphic_pane_vc_t1_ParamLimits

0x316f,	// (0x000325c9) list_double_large_graphic_pane_vc_t1

0x318b,	// (0x000325e5) list_double_large_graphic_pane_vc_t2_ParamLimits

0x318b,	// (0x000325e5) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa50,	// (0x0003eeaa) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa50,	// (0x0003eeaa) list_double_large_graphic_pane_vc_t

0x175d,	// (0x00030bb7) list_double_heading_pane_vc_g1_ParamLimits

0x175d,	// (0x00030bb7) list_double_heading_pane_vc_g1

0x1769,	// (0x00030bc3) list_double_heading_pane_vc_g2_ParamLimits

0x1769,	// (0x00030bc3) list_double_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x0003ea22) list_double_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x0003ea22) list_double_heading_pane_vc_g

0x31ad,	// (0x00032607) list_double_heading_pane_vc_t1_ParamLimits

0x31ad,	// (0x00032607) list_double_heading_pane_vc_t1

0x31c1,	// (0x0003261b) list_double_heading_pane_vc_t2_ParamLimits

0x31c1,	// (0x0003261b) list_double_heading_pane_vc_t2

0x0001,

0xfa55,	// (0x0003eeaf) list_double_heading_pane_vc_t_ParamLimits

0xfa55,	// (0x0003eeaf) list_double_heading_pane_vc_t

0x31d9,	// (0x00032633) list_double_graphic_pane_vc_g1_ParamLimits

0x31d9,	// (0x00032633) list_double_graphic_pane_vc_g1

0x31e5,	// (0x0003263f) list_double_graphic_pane_vc_g2_ParamLimits

0x31e5,	// (0x0003263f) list_double_graphic_pane_vc_g2

0x175d,	// (0x00030bb7) list_double_graphic_pane_vc_g3_ParamLimits

0x175d,	// (0x00030bb7) list_double_graphic_pane_vc_g3

0x0003,

0xfa5a,	// (0x0003eeb4) list_double_graphic_pane_vc_g_ParamLimits

0xfa5a,	// (0x0003eeb4) list_double_graphic_pane_vc_g

0x3202,	// (0x0003265c) list_double_graphic_pane_vc_t1_ParamLimits

0x3202,	// (0x0003265c) list_double_graphic_pane_vc_t1

0x322c,	// (0x00032686) list_double_graphic_pane_vc_t2_ParamLimits

0x322c,	// (0x00032686) list_double_graphic_pane_vc_t2

0x0001,

0xfa63,	// (0x0003eebd) list_double_graphic_pane_vc_t_ParamLimits

0xfa63,	// (0x0003eebd) list_double_graphic_pane_vc_t

0xf4d4,	// (0x0003e92e) aid_size_cell_fastswap

0xb694,	// (0x0003aaee) aid_size_cell_touch_ParamLimits

0xb694,	// (0x0003aaee) aid_size_cell_touch

0x01bf,	// (0x0002f619) popup_fast_swap_wide_window_ParamLimits

0x01bf,	// (0x0002f619) popup_fast_swap_wide_window

0xb844,	// (0x0003ac9e) touch_pane_ParamLimits

0xb844,	// (0x0003ac9e) touch_pane

0x3ea8,	// (0x00033302) button_value_adjust_pane_cp2

0x087c,	// (0x0002fcd6) button_value_adjust_pane_cp4

0x089c,	// (0x0002fcf6) form_field_data_pane_cp2

0xbcb4,	// (0x0003b10e) form_field_data_wide_pane_cp2

0x4328,	// (0x00033782) bg_scroll_pane_ParamLimits

0x0c7c,	// (0x000300d6) scroll_handle_pane_ParamLimits

0x0c90,	// (0x000300ea) scroll_sc2_down_pane_ParamLimits

0x0c90,	// (0x000300ea) scroll_sc2_down_pane

0x4359,	// (0x000337b3) scroll_sc2_up_pane_ParamLimits

0x4359,	// (0x000337b3) scroll_sc2_up_pane

0xe0af,	// (0x0003d509) grid_wheel_folder_pane_g1_ParamLimits

0xe0af,	// (0x0003d509) grid_wheel_folder_pane_g1

0x0edf,	// (0x00030339) clock_nsta_pane_cp2_ParamLimits

0x0edf,	// (0x00030339) clock_nsta_pane_cp2

0xd531,	// (0x0003c98b) listscroll_midp_pane_ParamLimits

0xd53d,	// (0x0003c997) midp_canvas_pane

0x4e4d,	// (0x000342a7) nsta_clock_indic_pane

0x4e81,	// (0x000342db) listscroll_form_pane_vc

0x4e89,	// (0x000342e3) listscroll_set_pane_vc_ParamLimits

0x4e89,	// (0x000342e3) listscroll_set_pane_vc

0xd7c2,	// (0x0003cc1c) clock_nsta_pane

0xd7ec,	// (0x0003cc46) indicator_nsta_pane

0x52d7,	// (0x00034731) bg_popup_sub_pane_cp2_ParamLimits

0x52eb,	// (0x00034745) find_pane_cp2_ParamLimits

0x52eb,	// (0x00034745) find_pane_cp2

0x5301,	// (0x0003475b) grid_toobar_pane_ParamLimits

0x53e1,	// (0x0003483b) list_form_gen_pane_vc_ParamLimits

0x53e1,	// (0x0003483b) list_form_gen_pane_vc

0x53f7,	// (0x00034851) scroll_pane_cp8_vc_ParamLimits

0x53f7,	// (0x00034851) scroll_pane_cp8_vc

0x5473,	// (0x000348cd) data_form_wide_pane_vc_ParamLimits

0x5473,	// (0x000348cd) data_form_wide_pane_vc

0x547f,	// (0x000348d9) form_field_data_wide_pane_vc_g1

0x5487,	// (0x000348e1) form_field_data_wide_pane_vc_t1_ParamLimits

0x5487,	// (0x000348e1) form_field_data_wide_pane_vc_t1

0x3ebc,	// (0x00033316) input_focus_pane_cp6_vc_ParamLimits

0x3ebc,	// (0x00033316) input_focus_pane_cp6_vc

0x57cd,	// (0x00034c27) list_midp_pane_ParamLimits

0x6b14,	// (0x00035f6e) scroll_pane_cp16_ParamLimits

0x6b14,	// (0x00035f6e) scroll_pane_cp16

0x581b,	// (0x00034c75) button_value_adjust_pane_ParamLimits

0x581b,	// (0x00034c75) button_value_adjust_pane

0xdcf8,	// (0x0003d152) button_value_adjust_pane_cp6_ParamLimits

0xdcf8,	// (0x0003d152) button_value_adjust_pane_cp6

0xde12,	// (0x0003d26c) settings_code_pane_cp_ParamLimits

0xde12,	// (0x0003d26c) settings_code_pane_cp

0x2cb5,	// (0x0003210f) cell_touch_pane_g1

0x2cb5,	// (0x0003210f) cell_touch_pane_g2

0x0001,

0xf703,	// (0x0003eb5d) cell_touch_pane_g

0xdf9d,	// (0x0003d3f7) cell_touch_pane_cp_ParamLimits

0xdf9d,	// (0x0003d3f7) cell_touch_pane_cp

0xdfb9,	// (0x0003d413) cell_touch_pane_ParamLimits

0xdfb9,	// (0x0003d413) cell_touch_pane

0x2cb5,	// (0x0003210f) scroll_sc2_down_pane_g1

0x2cb5,	// (0x0003210f) scroll_sc2_up_pane_g1

0x2cbf,	// (0x00032119) bg_set_opt_pane_cp4_vc

0x6ea4,	// (0x000362fe) list_set_graphic_pane_vc_g1_ParamLimits

0x6ea4,	// (0x000362fe) list_set_graphic_pane_vc_g1

0x6eb0,	// (0x0003630a) list_set_graphic_pane_vc_g2_ParamLimits

0x6eb0,	// (0x0003630a) list_set_graphic_pane_vc_g2

0x0001,

0xf9f3,	// (0x0003ee4d) list_set_graphic_pane_vc_g_ParamLimits

0xf9f3,	// (0x0003ee4d) list_set_graphic_pane_vc_g

0x6ebc,	// (0x00036316) text_primary_small_cp13_vc_ParamLimits

0x6ebc,	// (0x00036316) text_primary_small_cp13_vc

0x6ed4,	// (0x0003632e) list_set_graphic_pane_vc_ParamLimits

0x6ed4,	// (0x0003632e) list_set_graphic_pane_vc

0x2cbf,	// (0x00032119) input_focus_pane_cp2_vc

0x2cb5,	// (0x0003210f) setting_code_pane_vc_g1

0x3672,	// (0x00032acc) setting_code_pane_vc_t1

0x6ee6,	// (0x00036340) set_text_pane_vc_t1_ParamLimits

0x6ee6,	// (0x00036340) set_text_pane_vc_t1

0x2cbf,	// (0x00032119) input_focus_pane_cp1_vc

0x6f02,	// (0x0003635c) list_set_text_pane_vc

0x2cb5,	// (0x0003210f) setting_text_pane_vc_g1

0x2cbf,	// (0x00032119) bg_set_opt_pane_cp2_vc

0x3669,	// (0x00032ac3) setting_slider_graphic_pane_vc_g1

0x6f0c,	// (0x00036366) setting_slider_graphic_pane_vc_t1

0x6f1c,	// (0x00036376) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9f8,	// (0x0003ee52) setting_slider_graphic_pane_vc_t

0x6f2c,	// (0x00036386) slider_set_pane_cp_vc

0x6f34,	// (0x0003638e) slider_set_pane_vc_g1

0x6f3d,	// (0x00036397) slider_set_pane_vc_g2

0x0006,

0xf9fd,	// (0x0003ee57) slider_set_pane_vc_g

0x3f14,	// (0x0003336e) set_opt_bg_pane_g1_copy1

0x3f1c,	// (0x00033376) set_opt_bg_pane_g2_copy1

0x6f69,	// (0x000363c3) set_opt_bg_pane_g3_copy1

0x3f2c,	// (0x00033386) set_opt_bg_pane_g4_copy1

0x3f34,	// (0x0003338e) set_opt_bg_pane_g5_copy1

0x3f3c,	// (0x00033396) set_opt_bg_pane_g6_copy1

0x6f73,	// (0x000363cd) set_opt_bg_pane_g7_copy1

0x6f7b,	// (0x000363d5) set_opt_bg_pane_g8_copy1

0x6f85,	// (0x000363df) set_opt_bg_pane_g9_copy1

0x2cbf,	// (0x00032119) bg_set_opt_pane_cp_vc

0x6f8f,	// (0x000363e9) setting_slider_pane_vc_t1

0x6f9e,	// (0x000363f8) setting_slider_pane_vc_t2

0x6fae,	// (0x00036408) setting_slider_pane_vc_t3

0x0002,

0xfa0c,	// (0x0003ee66) setting_slider_pane_vc_t

0x6fbe,	// (0x00036418) slider_set_pane_vc

0x193d,	// (0x00030d97) volume_set_pane_vc_g1

0x1946,	// (0x00030da0) volume_set_pane_vc_g2

0x194f,	// (0x00030da9) volume_set_pane_vc_g3

0x1958,	// (0x00030db2) volume_set_pane_vc_g4

0x1961,	// (0x00030dbb) volume_set_pane_vc_g5

0x196a,	// (0x00030dc4) volume_set_pane_vc_g6

0x1973,	// (0x00030dcd) volume_set_pane_vc_g7

0x197c,	// (0x00030dd6) volume_set_pane_vc_g8

0x1985,	// (0x00030ddf) volume_set_pane_vc_g9

0x198e,	// (0x00030de8) volume_set_pane_vc_g10

0x0009,

0xf8b1,	// (0x0003ed0b) volume_set_pane_vc_g

0x6fc6,	// (0x00036420) volume_set_pane_vc

0x6fce,	// (0x00036428) button_value_adjust_pane_cp1_vc

0x6fd8,	// (0x00036432) list_highlight_pane_cp2_vc

0x6fe1,	// (0x0003643b) list_set_pane_vc_ParamLimits

0x6fe1,	// (0x0003643b) list_set_pane_vc

0x703f,	// (0x00036499) main_pane_set_vc_t1_ParamLimits

0x703f,	// (0x00036499) main_pane_set_vc_t1

0x7054,	// (0x000364ae) main_pane_set_vc_t2_ParamLimits

0x7054,	// (0x000364ae) main_pane_set_vc_t2

0x7066,	// (0x000364c0) main_pane_set_vc_t3_ParamLimits

0x7066,	// (0x000364c0) main_pane_set_vc_t3

0x707a,	// (0x000364d4) main_pane_set_vc_t4_ParamLimits

0x707a,	// (0x000364d4) main_pane_set_vc_t4

0x0003,

0xfa13,	// (0x0003ee6d) main_pane_set_vc_t_ParamLimits

0xfa13,	// (0x0003ee6d) main_pane_set_vc_t

0x708e,	// (0x000364e8) setting_code_pane_vc_ParamLimits

0x708e,	// (0x000364e8) setting_code_pane_vc

0x709f,	// (0x000364f9) setting_slider_graphic_pane_vc

0x709f,	// (0x000364f9) setting_slider_pane_vc

0x709f,	// (0x000364f9) setting_text_pane_vc

0x709f,	// (0x000364f9) setting_volume_pane_vc

0x70a9,	// (0x00036503) scroll_pane_cp121_vc

0x3e96,	// (0x000332f0) set_content_pane_vc

0x70b1,	// (0x0003650b) button_value_adjust_pane_g1

0x70ba,	// (0x00036514) button_value_adjust_pane_g2

0x0001,

0xfa68,	// (0x0003eec2) button_value_adjust_pane_g

0x70c3,	// (0x0003651d) form_field_slider_wide_pane_vc_t1_ParamLimits

0x70c3,	// (0x0003651d) form_field_slider_wide_pane_vc_t1

0x70d7,	// (0x00036531) form_field_slider_wide_pane_vc_t2_ParamLimits

0x70d7,	// (0x00036531) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa6d,	// (0x0003eec7) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa6d,	// (0x0003eec7) form_field_slider_wide_pane_vc_t

0x38a2,	// (0x00032cfc) input_focus_pane_cp10_vc_ParamLimits

0x38a2,	// (0x00032cfc) input_focus_pane_cp10_vc

0x7105,	// (0x0003655f) slider_cont_pane_cp1_vc_ParamLimits

0x7105,	// (0x0003655f) slider_cont_pane_cp1_vc

0x7117,	// (0x00036571) slider_form_pane_g1_cp2

0x6f3d,	// (0x00036397) slider_form_pane_g2_cp2

0x7144,	// (0x0003659e) form_field_slider_pane_vc_t3

0x7152,	// (0x000365ac) form_field_slider_pane_vc_t4

0x7160,	// (0x000365ba) slider_form_pane_vc_ParamLimits

0x7160,	// (0x000365ba) slider_form_pane_vc

0x716d,	// (0x000365c7) form_field_slider_pane_vc_t1_ParamLimits

0x716d,	// (0x000365c7) form_field_slider_pane_vc_t1

0x70d7,	// (0x00036531) form_field_slider_pane_vc_t2_ParamLimits

0x70d7,	// (0x00036531) form_field_slider_pane_vc_t2

0x0001,

0xfa7f,	// (0x0003eed9) form_field_slider_pane_vc_t_ParamLimits

0xfa7f,	// (0x0003eed9) form_field_slider_pane_vc_t

0x38a2,	// (0x00032cfc) input_focus_pane_cp9_vc_ParamLimits

0x38a2,	// (0x00032cfc) input_focus_pane_cp9_vc

0x7189,	// (0x000365e3) slider_cont_pane_vc_ParamLimits

0x7189,	// (0x000365e3) slider_cont_pane_vc

0x719d,	// (0x000365f7) list_form_graphic_pane_cp_vc_ParamLimits

0x719d,	// (0x000365f7) list_form_graphic_pane_cp_vc

0x547f,	// (0x000348d9) form_field_popup_wide_pane_vc_g1

0x71b2,	// (0x0003660c) form_field_popup_wide_pane_vc_t1_ParamLimits

0x71b2,	// (0x0003660c) form_field_popup_wide_pane_vc_t1

0x3ebc,	// (0x00033316) input_focus_pane_cp8_vc_ParamLimits

0x3ebc,	// (0x00033316) input_focus_pane_cp8_vc

0x71f7,	// (0x00036651) list_form_wide_pane_vc_ParamLimits

0x71f7,	// (0x00036651) list_form_wide_pane_vc

0x7203,	// (0x0003665d) list_form_graphic_pane_vc_g1

0x720b,	// (0x00036665) list_form_graphic_pane_vc_t1_ParamLimits

0x720b,	// (0x00036665) list_form_graphic_pane_vc_t1

0x2d9f,	// (0x000321f9) list_highlight_pane_cp5_vc_ParamLimits

0x2d9f,	// (0x000321f9) list_highlight_pane_cp5_vc

0x7227,	// (0x00036681) list_form_graphic_pane_vc_ParamLimits

0x7227,	// (0x00036681) list_form_graphic_pane_vc

0x547f,	// (0x000348d9) form_field_popup_pane_vc_g1

0x723d,	// (0x00036697) form_field_popup_pane_vc_t1_ParamLimits

0x723d,	// (0x00036697) form_field_popup_pane_vc_t1

0x3ebc,	// (0x00033316) input_focus_pane_cp7_vc_ParamLimits

0x3ebc,	// (0x00033316) input_focus_pane_cp7_vc

0x7254,	// (0x000366ae) list_form_pane_vc_ParamLimits

0x7254,	// (0x000366ae) list_form_pane_vc

0x7260,	// (0x000366ba) data_form_pane_vc_t1_ParamLimits

0x7260,	// (0x000366ba) data_form_pane_vc_t1

0x3f14,	// (0x0003336e) input_focus_pane_vc_g1

0x3f1c,	// (0x00033376) input_focus_pane_vc_g2

0x3f24,	// (0x0003337e) input_focus_pane_vc_g3

0x3f2c,	// (0x00033386) input_focus_pane_vc_g4

0x3f34,	// (0x0003338e) input_focus_pane_vc_g5

0x3f3c,	// (0x00033396) input_focus_pane_vc_g6

0x3f44,	// (0x0003339e) input_focus_pane_vc_g7

0x3f4c,	// (0x000333a6) input_focus_pane_vc_g8

0x3f54,	// (0x000333ae) input_focus_pane_vc_g9

0x2cb5,	// (0x0003210f) input_focus_pane_vc_g10

0x0009,

0xf68c,	// (0x0003eae6) input_focus_pane_vc_g

0x5473,	// (0x000348cd) data_form_pane_vc_ParamLimits

0x5473,	// (0x000348cd) data_form_pane_vc

0x547f,	// (0x000348d9) form_field_data_pane_vc_g1

0x727b,	// (0x000366d5) form_field_data_pane_vc_t1_ParamLimits

0x727b,	// (0x000366d5) form_field_data_pane_vc_t1

0x3ebc,	// (0x00033316) input_focus_pane_vc_ParamLimits

0x3ebc,	// (0x00033316) input_focus_pane_vc

0x7295,	// (0x000366ef) button_value_adjust_pane_cp3_vc

0x729d,	// (0x000366f7) button_value_adjust_pane_cp5_vc

0x72a5,	// (0x000366ff) form_field_data_pane_vc_ParamLimits

0x72a5,	// (0x000366ff) form_field_data_pane_vc

0x72bc,	// (0x00036716) form_field_data_pane_vc_cp2

0x72c4,	// (0x0003671e) form_field_data_wide_pane_vc_ParamLimits

0x72c4,	// (0x0003671e) form_field_data_wide_pane_vc

0x72da,	// (0x00036734) form_field_data_wide_pane_vc_cp2

0x72e2,	// (0x0003673c) form_field_popup_pane_vc_ParamLimits

0x72e2,	// (0x0003673c) form_field_popup_pane_vc

0x72f9,	// (0x00036753) form_field_popup_wide_pane_vc_ParamLimits

0x72f9,	// (0x00036753) form_field_popup_wide_pane_vc

0x730f,	// (0x00036769) form_field_slider_pane_vc_ParamLimits

0x730f,	// (0x00036769) form_field_slider_pane_vc

0x7322,	// (0x0003677c) form_field_slider_wide_pane_vc_ParamLimits

0x7322,	// (0x0003677c) form_field_slider_wide_pane_vc

0xdfd7,	// (0x0003d431) grid_touch_1_pane_ParamLimits

0xdfd7,	// (0x0003d431) grid_touch_1_pane

0xdfeb,	// (0x0003d445) grid_touch_2_pane_ParamLimits

0xdfeb,	// (0x0003d445) grid_touch_2_pane

0x73f0,	// (0x0003684a) touch_pane_g1_ParamLimits

0x73f0,	// (0x0003684a) touch_pane_g1

0x7359,	// (0x000367b3) cell_app_pane_cp_wide_ParamLimits

0x7359,	// (0x000367b3) cell_app_pane_cp_wide

0x736a,	// (0x000367c4) grid_popup_fast_wide_pane_ParamLimits

0x736a,	// (0x000367c4) grid_popup_fast_wide_pane

0x737e,	// (0x000367d8) scroll_pane_cp19_ParamLimits

0x737e,	// (0x000367d8) scroll_pane_cp19

0x2cbf,	// (0x00032119) bg_popup_window_pane_cp20

0x7392,	// (0x000367ec) listscroll_popup_fast_wide_pane

0x407c,	// (0x000334d6) grid_indicator_nsta_pane

0x739a,	// (0x000367f4) clock_nsta_pane_g1

0x73a3,	// (0x000367fd) clock_nsta_pane_t1

0xe015,	// (0x0003d46f) cell_indicator_nsta_pane_ParamLimits

0xe015,	// (0x0003d46f) cell_indicator_nsta_pane

0x73f0,	// (0x0003684a) cell_indicator_nsta_pane_g1

0xe02c,	// (0x0003d486) cell_indicator_nsta_pane_g2

0x0001,

0xfa90,	// (0x0003eeea) cell_indicator_nsta_pane_g

0x740b,	// (0x00036865) clock_nsta_pane_cp

0x7414,	// (0x0003686e) indicator_nsta_pane_cp

0x741c,	// (0x00036876) nsta_clock_indic_pane_g1

0x36f0,	// (0x00032b4a) grid_indicator_pane

0x444e,	// (0x000338a8) scroll_pane_cp29

0x0e2e,	// (0x00030288) indicator_nsta_pane_cp2_ParamLimits

0x0e2e,	// (0x00030288) indicator_nsta_pane_cp2

0x2d9f,	// (0x000321f9) main_apps_wheel_pane

0x568e,	// (0x00034ae8) form_midp_field_text_pane_ParamLimits

0x57d9,	// (0x00034c33) scroll_bar_cp050_ParamLimits

0x746c,	// (0x000368c6) cell_indicator_pane_ParamLimits

0x746c,	// (0x000368c6) cell_indicator_pane

0x7483,	// (0x000368dd) cell_indicator_pane_g1

0xe039,	// (0x0003d493) grid_wheel_folder_pane_ParamLimits

0xe039,	// (0x0003d493) grid_wheel_folder_pane

0xe047,	// (0x0003d4a1) list_wheel_apps_pane_ParamLimits

0xe047,	// (0x0003d4a1) list_wheel_apps_pane

0xe055,	// (0x0003d4af) main_apps_wheel_pane_g1_ParamLimits

0xe055,	// (0x0003d4af) main_apps_wheel_pane_g1

0xe061,	// (0x0003d4bb) main_apps_wheel_pane_g2_ParamLimits

0xe061,	// (0x0003d4bb) main_apps_wheel_pane_g2

0x0001,

0xfaac,	// (0x0003ef06) main_apps_wheel_pane_g_ParamLimits

0xfaac,	// (0x0003ef06) main_apps_wheel_pane_g

0xe06f,	// (0x0003d4c9) main_apps_wheel_pane_t1_ParamLimits

0xe06f,	// (0x0003d4c9) main_apps_wheel_pane_t1

0xe083,	// (0x0003d4dd) list_wheel_apps_pane_g1

0xe08b,	// (0x0003d4e5) list_wheel_apps_pane_g2

0xe093,	// (0x0003d4ed) list_wheel_apps_pane_g3

0xe09b,	// (0x0003d4f5) list_wheel_apps_pane_g4

0xe0a5,	// (0x0003d4ff) list_wheel_apps_pane_g5

0x0004,

0xfab1,	// (0x0003ef0b) list_wheel_apps_pane_g

0x49d1,	// (0x00033e2b) navi_icon_text_pane

0xd6b6,	// (0x0003cb10) aid_fill_nsta

0x7548,	// (0x000369a2) navi_icon_text_pane_g1

0x7554,	// (0x000369ae) navi_icon_text_pane_t1

0x4864,	// (0x00033cbe) list_set_graphic_pane_t1_ParamLimits

0x4864,	// (0x00033cbe) list_set_graphic_pane_t1

0x5f48,	// (0x000353a2) popup_midp_note_alarm_window_t6_ParamLimits

0x5f48,	// (0x000353a2) popup_midp_note_alarm_window_t6

0x5f5a,	// (0x000353b4) popup_midp_note_alarm_window_t7_ParamLimits

0x5f5a,	// (0x000353b4) popup_midp_note_alarm_window_t7

0x5f6c,	// (0x000353c6) popup_midp_note_alarm_window_t8_ParamLimits

0x5f6c,	// (0x000353c6) popup_midp_note_alarm_window_t8

0x5f7e,	// (0x000353d8) popup_midp_note_alarm_window_t9_ParamLimits

0x5f7e,	// (0x000353d8) popup_midp_note_alarm_window_t9

0x5f90,	// (0x000353ea) popup_midp_note_alarm_window_t10_ParamLimits

0x5f90,	// (0x000353ea) popup_midp_note_alarm_window_t10

0x5fa2,	// (0x000353fc) popup_midp_note_alarm_window_t11_ParamLimits

0x5fa2,	// (0x000353fc) popup_midp_note_alarm_window_t11

0x5fb4,	// (0x0003540e) scroll_pane_cp17_ParamLimits

0x5fb4,	// (0x0003540e) scroll_pane_cp17

0x193d,	// (0x00030d97) volume_small_pane_cp_g1

0x1c32,	// (0x0003108c) volume_small_pane_cp_g2

0x1c3b,	// (0x00031095) volume_small_pane_cp_g3

0x1c44,	// (0x0003109e) volume_small_pane_cp_g4

0x1c4d,	// (0x000310a7) volume_small_pane_cp_g5

0x1c56,	// (0x000310b0) volume_small_pane_cp_g6

0x1c5f,	// (0x000310b9) volume_small_pane_cp_g7

0x1c68,	// (0x000310c2) volume_small_pane_cp_g8

0x1c71,	// (0x000310cb) volume_small_pane_cp_g9

0x1c7a,	// (0x000310d4) volume_small_pane_cp_g10

0x4c2e,	// (0x00034088) midp_ticker_pane_g1_ParamLimits

0x4c3a,	// (0x00034094) midp_ticker_pane_g2_ParamLimits

0xf758,	// (0x0003ebb2) midp_ticker_pane_g_ParamLimits

0x4c46,	// (0x000340a0) midp_ticker_pane_t1_ParamLimits

0xd6da,	// (0x0003cb34) aid_fill_nsta_2

0x57c5,	// (0x00034c1f) list_form2_midp_pane

0x6902,	// (0x00035d5c) midp_editing_number_pane_ParamLimits

0x6911,	// (0x00035d6b) midp_ticker_pane_ParamLimits

0x7566,	// (0x000369c0) form2_midp_field_pane

0x758a,	// (0x000369e4) scroll_pane_cp51

0x75aa,	// (0x00036a04) form2_midp_button_pane_ParamLimits

0x75aa,	// (0x00036a04) form2_midp_button_pane

0x75bc,	// (0x00036a16) form2_midp_content_pane_ParamLimits

0x75bc,	// (0x00036a16) form2_midp_content_pane

0x75d6,	// (0x00036a30) form2_midp_field_choice_group_pane

0x75de,	// (0x00036a38) form2_midp_field_pane_g1

0x75e6,	// (0x00036a40) form2_midp_field_pane_g2

0x75ee,	// (0x00036a48) form2_midp_field_pane_g3

0x75f6,	// (0x00036a50) form2_midp_field_pane_g4

0x0003,

0xfad6,	// (0x0003ef30) form2_midp_field_pane_g

0x75fe,	// (0x00036a58) form2_midp_gauge_slider_pane

0x7606,	// (0x00036a60) form2_midp_gauge_wait_pane

0x760e,	// (0x00036a68) form2_midp_image_pane_ParamLimits

0x760e,	// (0x00036a68) form2_midp_image_pane

0x7629,	// (0x00036a83) form2_midp_label_pane_ParamLimits

0x7629,	// (0x00036a83) form2_midp_label_pane

0xe0d8,	// (0x0003d532) form2_midp_label_pane_cp_ParamLimits

0xe0d8,	// (0x0003d532) form2_midp_label_pane_cp

0x7663,	// (0x00036abd) form2_midp_string_pane_ParamLimits

0x7663,	// (0x00036abd) form2_midp_string_pane

0xc7b2,	// (0x0003bc0c) form2_midp_text_pane_ParamLimits

0xc7b2,	// (0x0003bc0c) form2_midp_text_pane

0x7675,	// (0x00036acf) form2_midp_time_pane

0x7685,	// (0x00036adf) input_focus_pane_cp51_ParamLimits

0x7685,	// (0x00036adf) input_focus_pane_cp51

0x769d,	// (0x00036af7) form2_midp_label_pane_t1_ParamLimits

0x769d,	// (0x00036af7) form2_midp_label_pane_t1

0xc7cb,	// (0x0003bc25) form2_mdip_text_pane_t1_ParamLimits

0xc7cb,	// (0x0003bc25) form2_mdip_text_pane_t1

0x328f,	// (0x000326e9) form2_midp_time_pane_t1

0x76e6,	// (0x00036b40) form2_midp_gauge_slider_pane_t1

0xe0f7,	// (0x0003d551) form2_midp_gauge_slider_pane_t2

0xe109,	// (0x0003d563) form2_midp_gauge_slider_pane_t3

0x0002,

0xfadf,	// (0x0003ef39) form2_midp_gauge_slider_pane_t

0x771c,	// (0x00036b76) form2_midp_slider_pane

0x7728,	// (0x00036b82) form2_midp_gauge_wait_pane_t1

0x7736,	// (0x00036b90) form2_midp_wait_pane_ParamLimits

0x7736,	// (0x00036b90) form2_midp_wait_pane

0xe11b,	// (0x0003d575) list_single_2graphic_pane_cp4_ParamLimits

0xe11b,	// (0x0003d575) list_single_2graphic_pane_cp4

0xdaf6,	// (0x0003cf50) list_single_midp_graphic_pane_cp_ParamLimits

0xdaf6,	// (0x0003cf50) list_single_midp_graphic_pane_cp

0x2cbf,	// (0x00032119) list_highlight_pane_cp20

0x7785,	// (0x00036bdf) list_single_2graphic_pane_g1_cp4

0x778d,	// (0x00036be7) list_single_2graphic_pane_g2_cp4

0x7795,	// (0x00036bef) list_single_2graphic_pane_t1_cp4

0x2d9f,	// (0x000321f9) list_highlight_pane_cp21

0x77a4,	// (0x00036bfe) list_single_midp_graphic_pane_g4_cp

0x77b3,	// (0x00036c0d) list_single_midp_graphic_pane_t1_cp

0xe12f,	// (0x0003d589) form2_mdip_string_pane_t1_ParamLimits

0xe12f,	// (0x0003d589) form2_mdip_string_pane_t1

0x2cbf,	// (0x00032119) bg_wml_button_pane_cp2

0x2cb5,	// (0x0003210f) form2_midp_image_pane_g1

0x0666,	// (0x0002fac0) list_double_large_graphic_pane_g5_ParamLimits

0x0666,	// (0x0002fac0) list_double_large_graphic_pane_g5

0xd531,	// (0x0003c98b) midp_form_pane_ParamLimits

0x2d9f,	// (0x000321f9) main_apps_wheel_pane_ParamLimits

0xc417,	// (0x0003b871) popup_preview_window_ParamLimits

0xc417,	// (0x0003b871) popup_preview_window

0x16cc,	// (0x00030b26) popup_touch_info_window_ParamLimits

0x16cc,	// (0x00030b26) popup_touch_info_window

0x16ea,	// (0x00030b44) popup_touch_menu_window_ParamLimits

0x16ea,	// (0x00030b44) popup_touch_menu_window

0x2cab,	// (0x00032105) bg_popup_sub_pane_cp6

0x78c1,	// (0x00036d1b) list_touch_menu_pane

0x78c9,	// (0x00036d23) list_single_touch_menu_pane_ParamLimits

0x78c9,	// (0x00036d23) list_single_touch_menu_pane

0x78df,	// (0x00036d39) list_single_touch_menu_pane_t1

0x2d9f,	// (0x000321f9) bg_popup_sub_pane_cp7_ParamLimits

0x2d9f,	// (0x000321f9) bg_popup_sub_pane_cp7

0x78ed,	// (0x00036d47) heading_sub_pane

0x78f5,	// (0x00036d4f) list_touch_info_pane_ParamLimits

0x78f5,	// (0x00036d4f) list_touch_info_pane

0x7904,	// (0x00036d5e) list_single_touch_info_pane_ParamLimits

0x7904,	// (0x00036d5e) list_single_touch_info_pane

0x7916,	// (0x00036d70) list_single_touch_info_pane_t1

0x7924,	// (0x00036d7e) list_single_touch_info_pane_t2

0x0001,

0xfaed,	// (0x0003ef47) list_single_touch_info_pane_t

0x4b51,	// (0x00033fab) bg_popup_heading_pane_cp

0x7932,	// (0x00036d8c) heading_sub_pane_t1

0x540d,	// (0x00034867) bg_popup_preview_window_pane_cp_ParamLimits

0x540d,	// (0x00034867) bg_popup_preview_window_pane_cp

0x78ed,	// (0x00036d47) heading_preview_pane

0x78f5,	// (0x00036d4f) list_preview_pane_ParamLimits

0x78f5,	// (0x00036d4f) list_preview_pane

0x7940,	// (0x00036d9a) popup_preview_window_g1

0x7904,	// (0x00036d5e) list_single_preview_pane_ParamLimits

0x7904,	// (0x00036d5e) list_single_preview_pane

0x7948,	// (0x00036da2) list_single_preview_pane_g1

0x7950,	// (0x00036daa) list_single_preview_pane_t1

0x7916,	// (0x00036d70) list_single_preview_pane_t2

0x0001,

0xfaf2,	// (0x0003ef4c) list_single_preview_pane_t

0x795e,	// (0x00036db8) bg_popup_heading_pane_cp2_ParamLimits

0x795e,	// (0x00036db8) bg_popup_heading_pane_cp2

0x7974,	// (0x00036dce) heading_preview_pane_g1

0x797c,	// (0x00036dd6) heading_preview_pane_t1_ParamLimits

0x797c,	// (0x00036dd6) heading_preview_pane_t1

0x3713,	// (0x00032b6d) soft_indicator_pane_t1_ParamLimits

0x3e2f,	// (0x00033289) scroll_pane_ParamLimits

0x4347,	// (0x000337a1) scroll_sc2_left_pane

0x4350,	// (0x000337aa) scroll_sc2_right_pane

0x436f,	// (0x000337c9) scroll_bg_pane_g1_ParamLimits

0x4384,	// (0x000337de) scroll_bg_pane_g2_ParamLimits

0x439c,	// (0x000337f6) scroll_bg_pane_g3_ParamLimits

0xf6e3,	// (0x0003eb3d) scroll_bg_pane_g_ParamLimits

0x436f,	// (0x000337c9) scroll_handle_pane_g1_ParamLimits

0x43be,	// (0x00033818) scroll_handle_pane_g2_ParamLimits

0x439c,	// (0x000337f6) scroll_handle_pane_g3_ParamLimits

0xf6ea,	// (0x0003eb44) scroll_handle_pane_g_ParamLimits

0x1192,	// (0x000305ec) popup_choice_list_window_ParamLimits

0x1192,	// (0x000305ec) popup_choice_list_window

0x52e3,	// (0x0003473d) choice_list_pane

0x5365,	// (0x000347bf) cell_toolbar_pane_t1

0x538d,	// (0x000347e7) toolbar_button_pane_ParamLimits

0x646e,	// (0x000358c8) ai_gene_pane_1_t2_ParamLimits

0x646e,	// (0x000358c8) ai_gene_pane_1_t2

0x0001,

0xf90d,	// (0x0003ed67) ai_gene_pane_1_t_ParamLimits

0xf90d,	// (0x0003ed67) ai_gene_pane_1_t

0x7999,	// (0x00036df3) scroll_sc2_left_pane_g1

0x7999,	// (0x00036df3) scroll_sc2_right_pane_g1

0x4e75,	// (0x000342cf) bg_popup_sub_pane_cp10

0x79a3,	// (0x00036dfd) list_choice_list_pane

0x79bc,	// (0x00036e16) list_single_choice_list_pane_ParamLimits

0x79bc,	// (0x00036e16) list_single_choice_list_pane

0x79cf,	// (0x00036e29) list_single_choice_list_pane_g1

0x404d,	// (0x000334a7) list_single_choice_list_pane_t1_ParamLimits

0x404d,	// (0x000334a7) list_single_choice_list_pane_t1

0x79d7,	// (0x00036e31) choice_list_pane_g1

0x79df,	// (0x00036e39) choice_list_pane_t1

0x2cab,	// (0x00032105) input_focus_pane_cp11

0x4224,	// (0x0003367e) title_pane_stacon_g2_ParamLimits

0x4224,	// (0x0003367e) title_pane_stacon_g2

0x0002,

0xf6c9,	// (0x0003eb23) title_pane_stacon_g_ParamLimits

0xf6c9,	// (0x0003eb23) title_pane_stacon_g

0x4b51,	// (0x00033fab) cursor_press_pane

0xc0c4,	// (0x0003b51e) popup_fep_hwr_window_ParamLimits

0xc0c4,	// (0x0003b51e) popup_fep_hwr_window

0x12b8,	// (0x00030712) popup_fep_vkb_window_ParamLimits

0x12b8,	// (0x00030712) popup_fep_vkb_window

0x79ed,	// (0x00036e47) cursor_press_pane_g1

0x0002,

0xfb1b,	// (0x0003ef75) fep_vkb_side_pane_g_ParamLimits

0x1cbc,	// (0x00031116) fep_hwr_candidate_pane_ParamLimits

0x1cbc,	// (0x00031116) fep_hwr_candidate_pane

0x1ce6,	// (0x00031140) fep_hwr_side_pane_ParamLimits

0x1ce6,	// (0x00031140) fep_hwr_side_pane

0x1d06,	// (0x00031160) fep_hwr_top_pane_ParamLimits

0x1d06,	// (0x00031160) fep_hwr_top_pane

0x1d1e,	// (0x00031178) fep_hwr_write_pane_ParamLimits

0x1d1e,	// (0x00031178) fep_hwr_write_pane

0xfb1b,	// (0x0003ef75) fep_vkb_side_pane_g

0x79f5,	// (0x00036e4f) fep_hwr_top_pane_g1

0x7a07,	// (0x00036e61) fep_hwr_top_pane_g2

0x1d58,	// (0x000311b2) fep_hwr_top_pane_g3

0x0002,

0xfaf7,	// (0x0003ef51) fep_hwr_top_pane_g

0x1d6d,	// (0x000311c7) fep_hwr_top_text_pane

0x453e,	// (0x00033998) fep_hwr_top_text_pane_g1

0x7a3d,	// (0x00036e97) fep_hwr_top_text_pane_t1

0x1e63,	// (0x000312bd) fep_hwr_candidate_pane_g1

0x7c9c,	// (0x000370f6) fep_vkb_keypad_pane_g3_ParamLimits

0x7c9c,	// (0x000370f6) fep_vkb_keypad_pane_g3

0x7cc4,	// (0x0003711e) fep_vkb_keypad_pane_g4_ParamLimits

0x7cc4,	// (0x0003711e) fep_vkb_keypad_pane_g4

0x7d33,	// (0x0003718d) fep_vkb_bottom_pane_g2_ParamLimits

0x7d33,	// (0x0003718d) fep_vkb_bottom_pane_g2

0x0001,

0xfb22,	// (0x0003ef7c) fep_vkb_bottom_pane_g_ParamLimits

0xfb22,	// (0x0003ef7c) fep_vkb_bottom_pane_g

0x7999,	// (0x00036df3) cell_vkb_side_pane_g2

0x0001,

0xfb2c,	// (0x0003ef86) cell_vkb_side_pane_g

0x7dbe,	// (0x00037218) cell_vkb_side_pane_t1

0x7dcc,	// (0x00037226) cell_vkb_side_pane_t1_copy1

0x7999,	// (0x00036df3) bg_fep_vkb_candidate_pane_g2

0x7ef8,	// (0x00037352) cell_vkb_candidate_pane_ParamLimits

0x7a57,	// (0x00036eb1) aid_size_cell_vkb_ParamLimits

0x7a57,	// (0x00036eb1) aid_size_cell_vkb

0x7ef8,	// (0x00037352) cell_vkb_candidate_pane

0x1e8a,	// (0x000312e4) bg_popup_fep_shadow_pane_g1

0xe1b1,	// (0x0003d60b) fep_vkb_bottom_pane_ParamLimits

0xe1b1,	// (0x0003d60b) fep_vkb_bottom_pane

0x7b1b,	// (0x00036f75) fep_vkb_candidate_pane_ParamLimits

0x7b1b,	// (0x00036f75) fep_vkb_candidate_pane

0xe1d6,	// (0x0003d630) fep_vkb_keypad_pane_ParamLimits

0xe1d6,	// (0x0003d630) fep_vkb_keypad_pane

0xe212,	// (0x0003d66c) fep_vkb_side_pane_ParamLimits

0xe212,	// (0x0003d66c) fep_vkb_side_pane

0xe24e,	// (0x0003d6a8) fep_vkb_top_pane_ParamLimits

0xe24e,	// (0x0003d6a8) fep_vkb_top_pane

0x7bf5,	// (0x0003704f) fep_vkb_top_pane_g1_ParamLimits

0x7bf5,	// (0x0003704f) fep_vkb_top_pane_g1

0x7c04,	// (0x0003705e) fep_vkb_top_pane_g2_ParamLimits

0x7c04,	// (0x0003705e) fep_vkb_top_pane_g2

0x7c13,	// (0x0003706d) fep_vkb_top_pane_g3_ParamLimits

0x7c13,	// (0x0003706d) fep_vkb_top_pane_g3

0x0003,

0xfb12,	// (0x0003ef6c) fep_vkb_top_pane_g_ParamLimits

0xfb12,	// (0x0003ef6c) fep_vkb_top_pane_g

0x7c31,	// (0x0003708b) fep_vkb_top_text_pane_ParamLimits

0x7c31,	// (0x0003708b) fep_vkb_top_text_pane

0xe28a,	// (0x0003d6e4) fep_vkb_side_pane_g1_ParamLimits

0xe28a,	// (0x0003d6e4) fep_vkb_side_pane_g1

0x7c8b,	// (0x000370e5) grid_vkb_side_pane_ParamLimits

0x7c8b,	// (0x000370e5) grid_vkb_side_pane

0x1e92,	// (0x000312ec) bg_popup_fep_shadow_pane_g2

0x1e9b,	// (0x000312f5) bg_popup_fep_shadow_pane_g3

0x1ea3,	// (0x000312fd) bg_popup_fep_shadow_pane_g4

0x1eac,	// (0x00031306) bg_popup_fep_shadow_pane_g5

0x1eb6,	// (0x00031310) bg_popup_fep_shadow_pane_g6

0x1ebe,	// (0x00031318) bg_popup_fep_shadow_pane_g7

0x3f2c,	// (0x00033386) bg_popup_fep_shadow_pane_g8

0x7ce2,	// (0x0003713c) grid_vkb_keypad_number_pane_ParamLimits

0x7ce2,	// (0x0003713c) grid_vkb_keypad_number_pane

0x7cf2,	// (0x0003714c) grid_vkb_keypad_pane_ParamLimits

0x7cf2,	// (0x0003714c) grid_vkb_keypad_pane

0x7d18,	// (0x00037172) fep_vkb_bottom_pane_g1_ParamLimits

0x7d18,	// (0x00037172) fep_vkb_bottom_pane_g1

0x7d41,	// (0x0003719b) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x7d41,	// (0x0003719b) grid_vkb_keypad_bottom_left_pane

0x7d56,	// (0x000371b0) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x7d56,	// (0x000371b0) grid_vkb_keypad_bottom_right_pane

0x7d6b,	// (0x000371c5) fep_vkb_top_text_pane_g1

0xe2d1,	// (0x0003d72b) fep_vkb_top_text_pane_t1

0xe2e3,	// (0x0003d73d) cell_vkb_side_pane_ParamLimits

0xe2e3,	// (0x0003d73d) cell_vkb_side_pane

0x7999,	// (0x00036df3) cell_vkb_side_pane_g1

0x7dda,	// (0x00037234) cell_vkb_keypad_pane_ParamLimits

0x7dda,	// (0x00037234) cell_vkb_keypad_pane

0x7e4f,	// (0x000372a9) cell_vkb_keypad_pane_g1

0x0008,

0xfb3f,	// (0x0003ef99) bg_popup_fep_shadow_pane_g

0x1ed0,	// (0x0003132a) cell_hwr_side_pane_g1

0x1ed0,	// (0x0003132a) cell_hwr_side_pane_g2

0x7e59,	// (0x000372b3) cell_vkb_keypad_pane_t1

0xe2f9,	// (0x0003d753) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xe2f9,	// (0x0003d753) cell_vkb_keypad_bottom_left_pane

0xe30e,	// (0x0003d768) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xe30e,	// (0x0003d768) cell_vkb_keypad_bottom_right_pane

0x7999,	// (0x00036df3) cell_vkb_keypad_bottom_left_pane_g1

0x7999,	// (0x00036df3) cell_vkb_keypad_bottom_right_pane_g1

0x7ebd,	// (0x00037317) cell_vkb_keypad_number_pane_ParamLimits

0x7ebd,	// (0x00037317) cell_vkb_keypad_number_pane

0x7edc,	// (0x00037336) cell_vkb_keypad_number_pane_g1

0x7ee6,	// (0x00037340) cell_vkb_keypad_number_pane_g2

0x7eef,	// (0x00037349) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb31,	// (0x0003ef8b) cell_vkb_keypad_number_pane_g

0x7e59,	// (0x000372b3) cell_vkb_keypad_number_pane_t1

0x7f13,	// (0x0003736d) fep_vkb_candidate_pane_g1

0x0001,

0xfb52,	// (0x0003efac) cell_hwr_side_pane_g

0x7f2c,	// (0x00037386) cell_hwr_side_pane_t1

0x1eda,	// (0x00031334) cell_hwr_side_pane_t1_copy1

0x1ee8,	// (0x00031342) cell_hwr_candidate_pane_g1

0x1f17,	// (0x00031371) cell_hwr_candidate_pane_t1

0x7999,	// (0x00036df3) cell_vkb_candidate_pane_g2

0x7f70,	// (0x000373ca) cell_vkb_candidate_pane_t1

0x1c83,	// (0x000310dd) bg_popup_fep_shadow_pane_ParamLimits

0x1c83,	// (0x000310dd) bg_popup_fep_shadow_pane

0x1d38,	// (0x00031192) bg_fep_hwr_top_pane_g4

0x7a19,	// (0x00036e73) bg_hwr_side_pane_g1_ParamLimits

0x7a19,	// (0x00036e73) bg_hwr_side_pane_g1

0xc800,	// (0x0003bc5a) cell_hwr_side_pane_ParamLimits

0xc800,	// (0x0003bc5a) cell_hwr_side_pane

0x1de4,	// (0x0003123e) fep_hwr_write_pane_g1_ParamLimits

0x1de4,	// (0x0003123e) fep_hwr_write_pane_g1

0x1df1,	// (0x0003124b) fep_hwr_write_pane_g2_ParamLimits

0x1df1,	// (0x0003124b) fep_hwr_write_pane_g2

0x1dfe,	// (0x00031258) fep_hwr_write_pane_g3_ParamLimits

0x1dfe,	// (0x00031258) fep_hwr_write_pane_g3

0xc820,	// (0x0003bc7a) fep_hwr_write_pane_g4_ParamLimits

0xc820,	// (0x0003bc7a) fep_hwr_write_pane_g4

0x0005,

0xfafe,	// (0x0003ef58) fep_hwr_write_pane_g_ParamLimits

0xfafe,	// (0x0003ef58) fep_hwr_write_pane_g

0x1d38,	// (0x00031192) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x1d38,	// (0x00031192) bg_fep_hwr_candidate_pane_g2

0x1e21,	// (0x0003127b) cell_hwr_candidate_pane_ParamLimits

0x1e21,	// (0x0003127b) cell_hwr_candidate_pane

0x1e63,	// (0x000312bd) fep_hwr_candidate_pane_g1_ParamLimits

0x7a85,	// (0x00036edf) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x7a85,	// (0x00036edf) bg_popup_fep_shadow_pane_cp2

0x7c23,	// (0x0003707d) fep_vkb_top_pane_g4_ParamLimits

0x7c23,	// (0x0003707d) fep_vkb_top_pane_g4

0x7c69,	// (0x000370c3) fep_vkb_side_pane_g2_ParamLimits

0x7c69,	// (0x000370c3) fep_vkb_side_pane_g2

0xbbc2,	// (0x0003b01c) list_setting_pane_t4_ParamLimits

0xbbc2,	// (0x0003b01c) list_setting_pane_t4

0xbc5c,	// (0x0003b0b6) list_setting_number_pane_t5_ParamLimits

0xbc5c,	// (0x0003b0b6) list_setting_number_pane_t5

0x4575,	// (0x000339cf) list_double_heading_pane_cp2_ParamLimits

0x4575,	// (0x000339cf) list_double_heading_pane_cp2

0x3eca,	// (0x00033324) list_double_heading_pane_g1_cp2_ParamLimits

0x3eca,	// (0x00033324) list_double_heading_pane_g1_cp2

0x3ed6,	// (0x00033330) list_double_heading_pane_g2_cp2_ParamLimits

0x3ed6,	// (0x00033330) list_double_heading_pane_g2_cp2

0x7f7e,	// (0x000373d8) list_double_heading_pane_t1_cp2_ParamLimits

0x7f7e,	// (0x000373d8) list_double_heading_pane_t1_cp2

0x7f94,	// (0x000373ee) list_double_heading_pane_t2_cp2_ParamLimits

0x7f94,	// (0x000373ee) list_double_heading_pane_t2_cp2

0x2c93,	// (0x000320ed) aid_value_unit2

0x0219,	// (0x0002f673) popup_preview_fixed_window

0x38b0,	// (0x00032d0a) bg_popup_preview_window_pane_cp02

0x7fa6,	// (0x00037400) list_preview_fixed_pane

0x7fec,	// (0x00037446) list_empty_pane_fp_ParamLimits

0x7fec,	// (0x00037446) list_empty_pane_fp

0x7fec,	// (0x00037446) list_single_cale_day_pane_fp_ParamLimits

0x7fec,	// (0x00037446) list_single_cale_day_pane_fp

0x7fec,	// (0x00037446) list_single_graphic_heading_pane_fp_ParamLimits

0x7fec,	// (0x00037446) list_single_graphic_heading_pane_fp

0x7fec,	// (0x00037446) list_single_graphic_pane_fp_ParamLimits

0x7fec,	// (0x00037446) list_single_graphic_pane_fp

0x7fec,	// (0x00037446) list_single_heading_pane_fp_ParamLimits

0x7fec,	// (0x00037446) list_single_heading_pane_fp

0x7fec,	// (0x00037446) list_single_pane_fp_ParamLimits

0x7fec,	// (0x00037446) list_single_pane_fp

0x8001,	// (0x0003745b) list_single_pane_fp_g1_ParamLimits

0x8001,	// (0x0003745b) list_single_pane_fp_g1

0x32a2,	// (0x000326fc) list_single_pane_fp_g2_ParamLimits

0x32a2,	// (0x000326fc) list_single_pane_fp_g2

0x32ae,	// (0x00032708) list_single_pane_fp_g3_ParamLimits

0x32ae,	// (0x00032708) list_single_pane_fp_g3

0x800d,	// (0x00037467) list_single_pane_fp_g4_ParamLimits

0x800d,	// (0x00037467) list_single_pane_fp_g4

0x0003,

0xfb65,	// (0x0003efbf) list_single_pane_fp_g_ParamLimits

0xfb65,	// (0x0003efbf) list_single_pane_fp_g

0x32c2,	// (0x0003271c) list_single_pane_fp_t1_ParamLimits

0x32c2,	// (0x0003271c) list_single_pane_fp_t1

0x32d9,	// (0x00032733) list_single_graphic_pane_fp_g1_ParamLimits

0x32d9,	// (0x00032733) list_single_graphic_pane_fp_g1

0x8001,	// (0x0003745b) list_single_graphic_pane_fp_g2_ParamLimits

0x8001,	// (0x0003745b) list_single_graphic_pane_fp_g2

0x32a2,	// (0x000326fc) list_single_graphic_pane_fp_g3_ParamLimits

0x32a2,	// (0x000326fc) list_single_graphic_pane_fp_g3

0x32ae,	// (0x00032708) list_single_graphic_pane_fp_g4_ParamLimits

0x32ae,	// (0x00032708) list_single_graphic_pane_fp_g4

0x800d,	// (0x00037467) list_single_graphic_pane_fp_g5_ParamLimits

0x800d,	// (0x00037467) list_single_graphic_pane_fp_g5

0x0004,

0xfb6e,	// (0x0003efc8) list_single_graphic_pane_fp_g_ParamLimits

0xfb6e,	// (0x0003efc8) list_single_graphic_pane_fp_g

0x32e5,	// (0x0003273f) list_single_graphic_pane_fp_t1_ParamLimits

0x32e5,	// (0x0003273f) list_single_graphic_pane_fp_t1

0x32d9,	// (0x00032733) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x32d9,	// (0x00032733) list_single_graphic_heading_pane_fp_g1

0x8001,	// (0x0003745b) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x8001,	// (0x0003745b) list_single_graphic_heading_pane_fp_g2

0x32a2,	// (0x000326fc) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x32a2,	// (0x000326fc) list_single_graphic_heading_pane_fp_g3

0x32ae,	// (0x00032708) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x32ae,	// (0x00032708) list_single_graphic_heading_pane_fp_g4

0x800d,	// (0x00037467) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x800d,	// (0x00037467) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb6e,	// (0x0003efc8) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb6e,	// (0x0003efc8) list_single_graphic_heading_pane_fp_g

0x32fb,	// (0x00032755) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x32fb,	// (0x00032755) list_single_graphic_heading_pane_fp_t1

0x3311,	// (0x0003276b) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x3311,	// (0x0003276b) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb79,	// (0x0003efd3) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb79,	// (0x0003efd3) list_single_graphic_heading_pane_fp_t

0x3323,	// (0x0003277d) list_single_cale_day_pane_fp_g1_ParamLimits

0x3323,	// (0x0003277d) list_single_cale_day_pane_fp_g1

0x8019,	// (0x00037473) list_single_cale_day_pane_fp_g2_ParamLimits

0x8019,	// (0x00037473) list_single_cale_day_pane_fp_g2

0x335b,	// (0x000327b5) list_single_cale_day_pane_fp_g3_ParamLimits

0x335b,	// (0x000327b5) list_single_cale_day_pane_fp_g3

0x3383,	// (0x000327dd) list_single_cale_day_pane_fp_g4_ParamLimits

0x3383,	// (0x000327dd) list_single_cale_day_pane_fp_g4

0x33a7,	// (0x00032801) list_single_cale_day_pane_fp_g5_ParamLimits

0x33a7,	// (0x00032801) list_single_cale_day_pane_fp_g5

0x0004,

0xfb7e,	// (0x0003efd8) list_single_cale_day_pane_fp_g_ParamLimits

0xfb7e,	// (0x0003efd8) list_single_cale_day_pane_fp_g

0x33cb,	// (0x00032825) list_single_cale_day_pane_fp_t1_ParamLimits

0x33cb,	// (0x00032825) list_single_cale_day_pane_fp_t1

0x33f1,	// (0x0003284b) list_single_cale_day_pane_fp_t2_ParamLimits

0x33f1,	// (0x0003284b) list_single_cale_day_pane_fp_t2

0x340a,	// (0x00032864) list_single_cale_day_pane_fp_t3_ParamLimits

0x340a,	// (0x00032864) list_single_cale_day_pane_fp_t3

0x0002,

0xfb89,	// (0x0003efe3) list_single_cale_day_pane_fp_t_ParamLimits

0xfb89,	// (0x0003efe3) list_single_cale_day_pane_fp_t

0x8001,	// (0x0003745b) list_empty_pane_fp_g1_ParamLimits

0x8001,	// (0x0003745b) list_empty_pane_fp_g1

0x3423,	// (0x0003287d) list_empty_pane_fp_t1

0x3431,	// (0x0003288b) list_empty_pane_fp_t2

0x0001,

0xfb90,	// (0x0003efea) list_empty_pane_fp_t

0x8001,	// (0x0003745b) list_single_heading_pane_fp_g1_ParamLimits

0x8001,	// (0x0003745b) list_single_heading_pane_fp_g1

0x32a2,	// (0x000326fc) list_single_heading_pane_fp_g2_ParamLimits

0x32a2,	// (0x000326fc) list_single_heading_pane_fp_g2

0x32ae,	// (0x00032708) list_single_heading_pane_fp_g3_ParamLimits

0x32ae,	// (0x00032708) list_single_heading_pane_fp_g3

0x0002,

0xfb95,	// (0x0003efef) list_single_heading_pane_fp_g_ParamLimits

0xfb95,	// (0x0003efef) list_single_heading_pane_fp_g

0x343f,	// (0x00032899) list_single_heading_pane_fp_t1_ParamLimits

0x343f,	// (0x00032899) list_single_heading_pane_fp_t1

0x3451,	// (0x000328ab) list_single_heading_pane_fp_t2_ParamLimits

0x3451,	// (0x000328ab) list_single_heading_pane_fp_t2

0x0001,

0xfb9c,	// (0x0003eff6) list_single_heading_pane_fp_t_ParamLimits

0xfb9c,	// (0x0003eff6) list_single_heading_pane_fp_t

0x40bb,	// (0x00033515) aid_size_cell_fast

0x3820,	// (0x00032c7a) soft_indicator_pane_cp1_t1

0x40f8,	// (0x00033552) cell_app_pane_cp2_ParamLimits

0x40f8,	// (0x00033552) cell_app_pane_cp2

0x1ca5,	// (0x000310ff) fep_hwr_candidate_drop_down_list_pane

0x1e7d,	// (0x000312d7) fep_hwr_candidate_pane_g3_ParamLimits

0x1e7d,	// (0x000312d7) fep_hwr_candidate_pane_g3

0xef1a,	// (0x0003e374) fep_hwr_candidate_pane_g4_ParamLimits

0xef1a,	// (0x0003e374) fep_hwr_candidate_pane_g4

0x0002,

0xfb0b,	// (0x0003ef65) fep_hwr_candidate_pane_g_ParamLimits

0xfb0b,	// (0x0003ef65) fep_hwr_candidate_pane_g

0x7b0a,	// (0x00036f64) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x7b0a,	// (0x00036f64) fep_vkb_candidate_drop_down_list_pane

0x7f1b,	// (0x00037375) fep_vkb_candidate_pane_g3

0x7f23,	// (0x0003737d) fep_vkb_candidate_pane_g4

0x0002,

0xfb38,	// (0x0003ef92) fep_vkb_candidate_pane_g

0x1ee8,	// (0x00031342) cell_hwr_candidate_pane_g1_ParamLimits

0x1ef6,	// (0x00031350) cell_hwr_candidate_pane_g3_ParamLimits

0x1ef6,	// (0x00031350) cell_hwr_candidate_pane_g3

0x97fe,	// (0x00038c58) cell_hwr_candidate_pane_g4_ParamLimits

0x97fe,	// (0x00038c58) cell_hwr_candidate_pane_g4

0x0002,

0xfb57,	// (0x0003efb1) cell_hwr_candidate_pane_g_ParamLimits

0xfb57,	// (0x0003efb1) cell_hwr_candidate_pane_g

0x7f3a,	// (0x00037394) cell_vkb_candidate_pane_g3_ParamLimits

0x7f3a,	// (0x00037394) cell_vkb_candidate_pane_g3

0x7f55,	// (0x000373af) cell_vkb_candidate_pane_g4_ParamLimits

0x7f55,	// (0x000373af) cell_vkb_candidate_pane_g4

0x8025,	// (0x0003747f) cell_app_pane_cp2_g1_ParamLimits

0x8025,	// (0x0003747f) cell_app_pane_cp2_g1

0x8043,	// (0x0003749d) cell_app_pane_cp2_g2_ParamLimits

0x8043,	// (0x0003749d) cell_app_pane_cp2_g2

0x0001,

0xfba1,	// (0x0003effb) cell_app_pane_cp2_g_ParamLimits

0xfba1,	// (0x0003effb) cell_app_pane_cp2_g

0x804f,	// (0x000374a9) cell_app_pane_cp2_t1_ParamLimits

0x804f,	// (0x000374a9) cell_app_pane_cp2_t1

0x3ebc,	// (0x00033316) grid_highlight_pane_cp1_ParamLimits

0x3ebc,	// (0x00033316) grid_highlight_pane_cp1

0x1f35,	// (0x0003138f) cell_hwr_candidate_pane_cp1_ParamLimits

0x1f35,	// (0x0003138f) cell_hwr_candidate_pane_cp1

0x1ee8,	// (0x00031342) fep_hwr_candidate_drop_down_list_pane_g1

0x1f54,	// (0x000313ae) fep_hwr_candidate_drop_down_list_pane_g2

0x1f61,	// (0x000313bb) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfba6,	// (0x0003f000) fep_hwr_candidate_drop_down_list_pane_g

0x1f6e,	// (0x000313c8) fep_hwr_candidate_drop_down_list_scroll_pane

0x1f77,	// (0x000313d1) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x1f77,	// (0x000313d1) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x1f84,	// (0x000313de) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x1f84,	// (0x000313de) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x1f91,	// (0x000313eb) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x1f91,	// (0x000313eb) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x1f9e,	// (0x000313f8) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x1f9e,	// (0x000313f8) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x1fb9,	// (0x00031413) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x1fb9,	// (0x00031413) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x1fd4,	// (0x0003142e) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x1fd4,	// (0x0003142e) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x1fef,	// (0x00031449) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x1fef,	// (0x00031449) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x200a,	// (0x00031464) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x200a,	// (0x00031464) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbad,	// (0x0003f007) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbad,	// (0x0003f007) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x8061,	// (0x000374bb) cell_vkb_candidate_pane_cp1_ParamLimits

0x8061,	// (0x000374bb) cell_vkb_candidate_pane_cp1

0x7c23,	// (0x0003707d) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x7c23,	// (0x0003707d) fep_vkb_candidate_drop_down_list_pane_g1

0x8081,	// (0x000374db) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x8081,	// (0x000374db) fep_vkb_candidate_drop_down_list_pane_g2

0x808e,	// (0x000374e8) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x808e,	// (0x000374e8) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbbe,	// (0x0003f018) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbbe,	// (0x0003f018) fep_vkb_candidate_drop_down_list_pane_g

0x809b,	// (0x000374f5) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x809b,	// (0x000374f5) fep_vkb_candidate_drop_down_list_scroll_pane

0x80a8,	// (0x00037502) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x80a8,	// (0x00037502) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x80b5,	// (0x0003750f) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x80b5,	// (0x0003750f) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x80c1,	// (0x0003751b) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x80c1,	// (0x0003751b) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x80cd,	// (0x00037527) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x80cd,	// (0x00037527) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x80ee,	// (0x00037548) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x80ee,	// (0x00037548) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x810f,	// (0x00037569) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x810f,	// (0x00037569) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x8130,	// (0x0003758a) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x8130,	// (0x0003758a) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x8151,	// (0x000375ab) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x8151,	// (0x000375ab) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc5,	// (0x0003f01f) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc5,	// (0x0003f01f) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xd00f,	// (0x0003c469) title_pane_g1_ParamLimits

0xd022,	// (0x0003c47c) title_pane_g2_ParamLimits

0xf54e,	// (0x0003e9a8) title_pane_g_ParamLimits

0x452e,	// (0x00033988) aid_call2_pane

0x4536,	// (0x00033990) aid_call_pane

0x453e,	// (0x00033998) popup_clock_analogue_window_g1

0x453e,	// (0x00033998) popup_clock_analogue_window_g2

0x0ca5,	// (0x000300ff) popup_clock_analogue_window_g3

0x0cae,	// (0x00030108) popup_clock_analogue_window_g4

0x2cb5,	// (0x0003210f) popup_clock_analogue_window_g5

0x0004,

0xf6f8,	// (0x0003eb52) popup_clock_analogue_window_g

0x0cb6,	// (0x00030110) popup_clock_analogue_window_t1

0x0cc4,	// (0x0003011e) clock_digital_number_pane_ParamLimits

0x0cc4,	// (0x0003011e) clock_digital_number_pane

0x0cd0,	// (0x0003012a) clock_digital_number_pane_cp02_ParamLimits

0x0cd0,	// (0x0003012a) clock_digital_number_pane_cp02

0x0cdc,	// (0x00030136) clock_digital_number_pane_cp03_ParamLimits

0x0cdc,	// (0x00030136) clock_digital_number_pane_cp03

0x0ce8,	// (0x00030142) clock_digital_number_pane_cp04_ParamLimits

0x0ce8,	// (0x00030142) clock_digital_number_pane_cp04

0x0cf4,	// (0x0003014e) clock_digital_separator_pane_ParamLimits

0x0cf4,	// (0x0003014e) clock_digital_separator_pane

0x0d00,	// (0x0003015a) popup_clock_digital_window_t1_ParamLimits

0x0d00,	// (0x0003015a) popup_clock_digital_window_t1

0x2cb5,	// (0x0003210f) clock_digital_number_pane_g1

0x2cb5,	// (0x0003210f) clock_digital_number_pane_g2

0x0001,

0xf703,	// (0x0003eb5d) clock_digital_number_pane_g

0x2cb5,	// (0x0003210f) clock_digital_separator_pane_g1

0x2cb5,	// (0x0003210f) clock_digital_separator_pane_g2

0x0001,

0xf703,	// (0x0003eb5d) clock_digital_separator_pane_g

0xd6b6,	// (0x0003cb10) aid_fill_nsta_ParamLimits

0xd7ec,	// (0x0003cc46) indicator_nsta_pane_ParamLimits

0x5170,	// (0x000345ca) popup_clock_analogue_window

0x5170,	// (0x000345ca) popup_clock_digital_window

0x407c,	// (0x000334d6) grid_indicator_nsta_pane_ParamLimits

0x73b1,	// (0x0003680b) clock_nsta_pane_t2

0x0001,

0xfa8b,	// (0x0003eee5) clock_nsta_pane_t

0x0c69,	// (0x000300c3) aid_size_max_handle

0xbdfb,	// (0x0003b255) aid_size_min_handle

0x4b51,	// (0x00033fab) editor_scroll_pane

0x816c,	// (0x000375c6) ex_editor_pane

0x4029,	// (0x00033483) scroll_pane_cp13

0x3e5b,	// (0x000332b5) scroll_pane_cp14

0x456d,	// (0x000339c7) scroll_pane_cp36

0xd499,	// (0x0003c8f3) list_single_graphic_hl_pane_cp2_ParamLimits

0xd499,	// (0x0003c8f3) list_single_graphic_hl_pane_cp2

0xc78e,	// (0x0003bbe8) list_single_graphic_hl_pane_ParamLimits

0xc78e,	// (0x0003bbe8) list_single_graphic_hl_pane

0x3467,	// (0x000328c1) aid_size_min_hl_cp1

0x8174,	// (0x000375ce) list_highlight_pane_cp34_ParamLimits

0x8174,	// (0x000375ce) list_highlight_pane_cp34

0x8185,	// (0x000375df) list_single_graphic_hl_pane_g1_ParamLimits

0x8185,	// (0x000375df) list_single_graphic_hl_pane_g1

0xc835,	// (0x0003bc8f) list_single_graphic_hl_pane_g2_ParamLimits

0xc835,	// (0x0003bc8f) list_single_graphic_hl_pane_g2

0xc835,	// (0x0003bc8f) list_single_graphic_hl_pane_g3_ParamLimits

0xc835,	// (0x0003bc8f) list_single_graphic_hl_pane_g3

0xc841,	// (0x0003bc9b) list_single_graphic_hl_pane_g4_ParamLimits

0xc841,	// (0x0003bc9b) list_single_graphic_hl_pane_g4

0xc84d,	// (0x0003bca7) list_single_graphic_hl_pane_g5_ParamLimits

0xc84d,	// (0x0003bca7) list_single_graphic_hl_pane_g5

0x0004,

0xfbd6,	// (0x0003f030) list_single_graphic_hl_pane_g_ParamLimits

0xfbd6,	// (0x0003f030) list_single_graphic_hl_pane_g

0xc861,	// (0x0003bcbb) list_single_graphic_hl_pane_t1_ParamLimits

0xc861,	// (0x0003bcbb) list_single_graphic_hl_pane_t1

0x8192,	// (0x000375ec) aid_size_min_hl_cp2

0x819b,	// (0x000375f5) list_highlight_pane_cp34_cp2_ParamLimits

0x819b,	// (0x000375f5) list_highlight_pane_cp34_cp2

0x8185,	// (0x000375df) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x8185,	// (0x000375df) list_single_graphic_hl_pane_g1_cp2

0x81a8,	// (0x00037602) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x81a8,	// (0x00037602) list_single_graphic_hl_pane_g2_cp2

0x81b4,	// (0x0003760e) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x81b4,	// (0x0003760e) list_single_graphic_hl_pane_g3_cp2

0x7a4b,	// (0x00036ea5) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x7a4b,	// (0x00036ea5) list_single_graphic_hl_pane_g4_cp2

0x81c2,	// (0x0003761c) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x81c2,	// (0x0003761c) list_single_graphic_hl_pane_g5_cp2

0xbee2,	// (0x0003b33c) control_pane_g4_ParamLimits

0xbee2,	// (0x0003b33c) control_pane_g4

0x4e75,	// (0x000342cf) bg_popup_sub_pane_cp10_ParamLimits

0x79a3,	// (0x00036dfd) list_choice_list_pane_ParamLimits

0x79b2,	// (0x00036e0c) scroll_pane_cp23

0x38b0,	// (0x00032d0a) bg_popup_preview_window_pane_cp02_ParamLimits

0x7fa6,	// (0x00037400) list_preview_fixed_pane_ParamLimits

0x7fbc,	// (0x00037416) list_preview_fixed_pane_cp_ParamLimits

0x7fbc,	// (0x00037416) list_preview_fixed_pane_cp

0x7fc8,	// (0x00037422) popup_preview_fixed_window_g1_ParamLimits

0x7fc8,	// (0x00037422) popup_preview_fixed_window_g1

0x7fd4,	// (0x0003742e) popup_preview_fixed_window_g2_ParamLimits

0x7fd4,	// (0x0003742e) popup_preview_fixed_window_g2

0x0002,

0xfb5e,	// (0x0003efb8) popup_preview_fixed_window_g_ParamLimits

0xfb5e,	// (0x0003efb8) popup_preview_fixed_window_g

0x0bdd,	// (0x00030037) aid_navi_side_left_pane_ParamLimits

0x0bf2,	// (0x0003004c) aid_navi_side_right_pane_ParamLimits

0x0c0a,	// (0x00030064) navi_icon_pane_stacon_ParamLimits

0x0c1e,	// (0x00030078) navi_navi_pane_stacon_ParamLimits

0x0c0a,	// (0x00030064) navi_text_pane_stacon_ParamLimits

0x00da,	// (0x0002f534) main_text_info_pane

0x81ec,	// (0x00037646) listscroll_text_info_pane

0x81f4,	// (0x0003764e) list_text_info_pane_ParamLimits

0x81f4,	// (0x0003764e) list_text_info_pane

0x8203,	// (0x0003765d) scroll_pane_cp24_ParamLimits

0x8203,	// (0x0003765d) scroll_pane_cp24

0xe329,	// (0x0003d783) list_text_info_pane_t1_ParamLimits

0xe329,	// (0x0003d783) list_text_info_pane_t1

0xc037,	// (0x0003b491) popup_fast_swap2_window_ParamLimits

0xc037,	// (0x0003b491) popup_fast_swap2_window

0x8252,	// (0x000376ac) aid_size_cell_fast2

0x2cab,	// (0x00032105) bg_popup_window_pane_cp17

0x57f9,	// (0x00034c53) heading_pane_cp2

0x3b25,	// (0x00032f7f) listscroll_fast2_pane

0x825c,	// (0x000376b6) grid_fast2_pane

0x8266,	// (0x000376c0) listscroll_fast2_pane_g1

0x826e,	// (0x000376c8) listscroll_fast2_pane_g2

0x0001,

0xfbe1,	// (0x0003f03b) listscroll_fast2_pane_g

0x4029,	// (0x00033483) scroll_pane_cp26

0x8278,	// (0x000376d2) cell_fast2_pane_ParamLimits

0x8278,	// (0x000376d2) cell_fast2_pane

0x828d,	// (0x000376e7) cell_fast2_pane_g1

0x8296,	// (0x000376f0) cell_fast2_pane_g2

0x829f,	// (0x000376f9) cell_fast2_pane_g3

0x0002,

0xfbe6,	// (0x0003f040) cell_fast2_pane_g

0x3c18,	// (0x00033072) grid_highlight_pane_cp9

0x116e,	// (0x000305c8) main_eswt_pane_ParamLimits

0x116e,	// (0x000305c8) main_eswt_pane

0x8218,	// (0x00037672) list_single_text_info_pane

0x82a7,	// (0x00037701) eswt_ctrl_button_pane

0x82a7,	// (0x00037701) eswt_ctrl_canvas_pane

0x82af,	// (0x00037709) eswt_ctrl_combo_pane

0x82a7,	// (0x00037701) eswt_ctrl_default_pane

0x82a7,	// (0x00037701) eswt_ctrl_label_pane

0x82b7,	// (0x00037711) eswt_ctrl_wait_pane

0x82bf,	// (0x00037719) eswt_shell_pane

0x2cab,	// (0x00032105) listscroll_eswt_app_pane

0x82df,	// (0x00037739) popup_eswt_tasktip_window_ParamLimits

0x82df,	// (0x00037739) popup_eswt_tasktip_window

0x540d,	// (0x00034867) bg_popup_window_pane_cp18

0x82f0,	// (0x0003774a) eswt_control_pane_g1_ParamLimits

0x82f0,	// (0x0003774a) eswt_control_pane_g1

0x82fd,	// (0x00037757) eswt_control_pane_g2_ParamLimits

0x82fd,	// (0x00037757) eswt_control_pane_g2

0x830a,	// (0x00037764) eswt_control_pane_g3_ParamLimits

0x830a,	// (0x00037764) eswt_control_pane_g3

0x8317,	// (0x00037771) eswt_control_pane_g4_ParamLimits

0x8317,	// (0x00037771) eswt_control_pane_g4

0x0003,

0xfbed,	// (0x0003f047) eswt_control_pane_g_ParamLimits

0xfbed,	// (0x0003f047) eswt_control_pane_g

0x3ebc,	// (0x00033316) bg_button_pane_ParamLimits

0x3ebc,	// (0x00033316) bg_button_pane

0x3c2d,	// (0x00033087) common_borders_pane_copy2_ParamLimits

0x3c2d,	// (0x00033087) common_borders_pane_copy2

0x8324,	// (0x0003777e) control_button_pane_g1_ParamLimits

0x8324,	// (0x0003777e) control_button_pane_g1

0x8330,	// (0x0003778a) control_button_pane_g2_ParamLimits

0x8330,	// (0x0003778a) control_button_pane_g2

0x833c,	// (0x00037796) control_button_pane_g3_ParamLimits

0x833c,	// (0x00037796) control_button_pane_g3

0x0002,

0xfbf6,	// (0x0003f050) control_button_pane_g_ParamLimits

0xfbf6,	// (0x0003f050) control_button_pane_g

0x8350,	// (0x000377aa) control_button_pane_t1

0x835e,	// (0x000377b8) control_button_pane_t2

0x0001,

0xfbfd,	// (0x0003f057) control_button_pane_t

0x5399,	// (0x000347f3) bg_button_pane_g1

0x53a9,	// (0x00034803) bg_button_pane_g2

0x53a1,	// (0x000347fb) bg_button_pane_g3

0x53b9,	// (0x00034813) bg_button_pane_g4

0x53b1,	// (0x0003480b) bg_button_pane_g5

0x53c1,	// (0x0003481b) bg_button_pane_g6

0x53c9,	// (0x00034823) bg_button_pane_g7

0x53d9,	// (0x00034833) bg_button_pane_g8

0x53d1,	// (0x0003482b) bg_button_pane_g9

0x0008,

0xf861,	// (0x0003ecbb) bg_button_pane_g

0x795e,	// (0x00036db8) common_borders_pane_ParamLimits

0x795e,	// (0x00036db8) common_borders_pane

0x82f0,	// (0x0003774a) eswt_control_pane_g1_copy1_ParamLimits

0x82f0,	// (0x0003774a) eswt_control_pane_g1_copy1

0x82fd,	// (0x00037757) eswt_control_pane_g2_copy1_ParamLimits

0x82fd,	// (0x00037757) eswt_control_pane_g2_copy1

0x830a,	// (0x00037764) eswt_control_pane_g3_copy1_ParamLimits

0x830a,	// (0x00037764) eswt_control_pane_g3_copy1

0x8317,	// (0x00037771) eswt_control_pane_g4_copy1_ParamLimits

0x8317,	// (0x00037771) eswt_control_pane_g4_copy1

0x7999,	// (0x00036df3) bg_eswt_ctrl_canvas_pane_g1

0x795e,	// (0x00036db8) common_borders_pane_cp2_ParamLimits

0x795e,	// (0x00036db8) common_borders_pane_cp2

0x795e,	// (0x00036db8) common_borders_pane_cp3_ParamLimits

0x795e,	// (0x00036db8) common_borders_pane_cp3

0x836c,	// (0x000377c6) separator_horizontal_pane

0x8374,	// (0x000377ce) separator_vertical_pane

0x82f0,	// (0x0003774a) eswt_control_pane_g1_copy2_ParamLimits

0x82f0,	// (0x0003774a) eswt_control_pane_g1_copy2

0x82fd,	// (0x00037757) eswt_control_pane_g2_copy2_ParamLimits

0x82fd,	// (0x00037757) eswt_control_pane_g2_copy2

0x830a,	// (0x00037764) eswt_control_pane_g3_copy2_ParamLimits

0x830a,	// (0x00037764) eswt_control_pane_g3_copy2

0x8317,	// (0x00037771) eswt_control_pane_g4_copy2_ParamLimits

0x8317,	// (0x00037771) eswt_control_pane_g4_copy2

0x2cab,	// (0x00032105) common_borders_pane_cp4

0x837d,	// (0x000377d7) separator_horizontal_pane_g1

0x8386,	// (0x000377e0) separator_horizontal_pane_g2

0x838f,	// (0x000377e9) separator_horizontal_pane_g3

0x0002,

0xfc02,	// (0x0003f05c) separator_horizontal_pane_g

0x82f0,	// (0x0003774a) eswt_control_pane_g1_copy3_ParamLimits

0x82f0,	// (0x0003774a) eswt_control_pane_g1_copy3

0x82fd,	// (0x00037757) eswt_control_pane_g2_copy3_ParamLimits

0x82fd,	// (0x00037757) eswt_control_pane_g2_copy3

0x830a,	// (0x00037764) eswt_control_pane_g3_copy3_ParamLimits

0x830a,	// (0x00037764) eswt_control_pane_g3_copy3

0x8317,	// (0x00037771) eswt_control_pane_g4_copy3_ParamLimits

0x8317,	// (0x00037771) eswt_control_pane_g4_copy3

0x2cab,	// (0x00032105) common_borders_pane_cp5

0x8398,	// (0x000377f2) separator_vertical_pane_g1

0x83a1,	// (0x000377fb) separator_vertical_pane_g2

0x83aa,	// (0x00037804) separator_vertical_pane_g3

0x0002,

0xfc09,	// (0x0003f063) separator_vertical_pane_g

0x82f0,	// (0x0003774a) eswt_control_pane_g1_copy4_ParamLimits

0x82f0,	// (0x0003774a) eswt_control_pane_g1_copy4

0x82fd,	// (0x00037757) eswt_control_pane_g2_copy4_ParamLimits

0x82fd,	// (0x00037757) eswt_control_pane_g2_copy4

0x830a,	// (0x00037764) eswt_control_pane_g3_copy4_ParamLimits

0x830a,	// (0x00037764) eswt_control_pane_g3_copy4

0x8317,	// (0x00037771) eswt_control_pane_g4_copy4_ParamLimits

0x8317,	// (0x00037771) eswt_control_pane_g4_copy4

0xe344,	// (0x0003d79e) eswt_ctrl_combo_button_pane

0xe34c,	// (0x0003d7a6) eswt_ctrl_input_pane

0xe354,	// (0x0003d7ae) popup_choice_list_window_cp70

0xe35c,	// (0x0003d7b6) eswt_ctrl_input_pane_t1

0x2cab,	// (0x00032105) input_focus_pane_cp70

0x795e,	// (0x00036db8) bg_button_pane_cp70_ParamLimits

0x795e,	// (0x00036db8) bg_button_pane_cp70

0xe36a,	// (0x0003d7c4) eswt_ctrl_combo_button_pane_g1

0x83e1,	// (0x0003783b) wait_bar_pane_cp70

0x540d,	// (0x00034867) bg_popup_window_pane_cp70_ParamLimits

0x540d,	// (0x00034867) bg_popup_window_pane_cp70

0x83e9,	// (0x00037843) popup_eswt_tasktip_window_t1

0x83ff,	// (0x00037859) wait_bar_pane_cp71_ParamLimits

0x83ff,	// (0x00037859) wait_bar_pane_cp71

0x840b,	// (0x00037865) grid_eswt_app_pane

0x4347,	// (0x000337a1) scroll_pane_cp70

0xe372,	// (0x0003d7cc) cell_eswt_app_pane_ParamLimits

0xe372,	// (0x0003d7cc) cell_eswt_app_pane

0xe39c,	// (0x0003d7f6) cell_eswt_app_pane_g1_ParamLimits

0xe39c,	// (0x0003d7f6) cell_eswt_app_pane_g1

0xe3cb,	// (0x0003d825) cell_eswt_app_pane_g2_ParamLimits

0xe3cb,	// (0x0003d825) cell_eswt_app_pane_g2

0x0001,

0xfc10,	// (0x0003f06a) cell_eswt_app_pane_g_ParamLimits

0xfc10,	// (0x0003f06a) cell_eswt_app_pane_g

0xe3f4,	// (0x0003d84e) cell_eswt_app_pane_t1_ParamLimits

0xe3f4,	// (0x0003d84e) cell_eswt_app_pane_t1

0x84ce,	// (0x00037928) grid_highlight_pane_cp70_ParamLimits

0x84ce,	// (0x00037928) grid_highlight_pane_cp70

0x4a26,	// (0x00033e80) set_content_pane_g1

0xd66b,	// (0x0003cac5) status_small_volume_pane

0x2025,	// (0x0003147f) status_small_volume_pane_g1

0x202d,	// (0x00031487) volume_small2_pane

0x2036,	// (0x00031490) volume_small2_pane_g1

0x203f,	// (0x00031499) volume_small2_pane_g2

0x2048,	// (0x000314a2) volume_small2_pane_g3

0x2051,	// (0x000314ab) volume_small2_pane_g4

0x205a,	// (0x000314b4) volume_small2_pane_g5

0x2063,	// (0x000314bd) volume_small2_pane_g6

0x206c,	// (0x000314c6) volume_small2_pane_g7

0x2075,	// (0x000314cf) volume_small2_pane_g8

0x207e,	// (0x000314d8) volume_small2_pane_g9

0x2087,	// (0x000314e1) volume_small2_pane_g10

0x0009,

0xfc15,	// (0x0003f06f) volume_small2_pane_g

0x7d6b,	// (0x000371c5) fep_vkb_top_text_pane_g1_ParamLimits

0xe2d1,	// (0x0003d72b) fep_vkb_top_text_pane_t1_ParamLimits

0x7fe0,	// (0x0003743a) popup_preview_fixed_window_g3_ParamLimits

0x7fe0,	// (0x0003743a) popup_preview_fixed_window_g3

0xc65a,	// (0x0003bab4) popup_toolbar_trans_pane

0xdce7,	// (0x0003d141) aid_height_set_list_ParamLimits

0x677b,	// (0x00035bd5) aid_size_parent_ParamLimits

0x4e75,	// (0x000342cf) list_highlight_pane_cp2_ParamLimits

0x4a26,	// (0x00033e80) set_content_pane_g1_ParamLimits

0xc7a0,	// (0x0003bbfa) list_single_image_pane_ParamLimits

0xc7a0,	// (0x0003bbfa) list_single_image_pane

0xe426,	// (0x0003d880) aid_size_cell_image_ParamLimits

0xe426,	// (0x0003d880) aid_size_cell_image

0xe433,	// (0x0003d88d) grid_single_image_pane_ParamLimits

0xe433,	// (0x0003d88d) grid_single_image_pane

0x5d36,	// (0x00035190) list_single_image_pane_g1_ParamLimits

0x5d36,	// (0x00035190) list_single_image_pane_g1

0x84f3,	// (0x0003794d) list_single_image_pane_g2_ParamLimits

0x84f3,	// (0x0003794d) list_single_image_pane_g2

0x0001,

0xfc2a,	// (0x0003f084) list_single_image_pane_g_ParamLimits

0xfc2a,	// (0x0003f084) list_single_image_pane_g

0x8507,	// (0x00037961) list_single_image_pane_t1_ParamLimits

0x8507,	// (0x00037961) list_single_image_pane_t1

0xe441,	// (0x0003d89b) cell_image_list_pane_ParamLimits

0xe441,	// (0x0003d89b) cell_image_list_pane

0xe457,	// (0x0003d8b1) cell_image_list_pane_g1

0xe460,	// (0x0003d8ba) cell_image_list_pane_g2

0x0001,

0xfc2f,	// (0x0003f089) cell_image_list_pane_g

0x8543,	// (0x0003799d) aid_size_cell_tb_trans_pane

0x3ebc,	// (0x00033316) bg_tb_trans_pane

0x8555,	// (0x000379af) grid_tb_trans_pane

0x5399,	// (0x000347f3) bg_tb_trans_pane_g1

0x53a9,	// (0x00034803) bg_tb_trans_pane_g2

0x53a1,	// (0x000347fb) bg_tb_trans_pane_g3

0x53b9,	// (0x00034813) bg_tb_trans_pane_g4

0x53b1,	// (0x0003480b) bg_tb_trans_pane_g5

0x53d9,	// (0x00034833) bg_tb_trans_pane_g6

0x53d1,	// (0x0003482b) bg_tb_trans_pane_g7

0x53c1,	// (0x0003481b) bg_tb_trans_pane_g8

0x53c9,	// (0x00034823) bg_tb_trans_pane_g9

0x0008,

0xfc34,	// (0x0003f08e) bg_tb_trans_pane_g

0x8569,	// (0x000379c3) cell_toolbar_trans_pane_ParamLimits

0x8569,	// (0x000379c3) cell_toolbar_trans_pane

0x7999,	// (0x00036df3) cell_toolbar_trans_pane_g1

0xe0bc,	// (0x0003d516) list_form2_midp_pane_t1

0xe0ca,	// (0x0003d524) list_form2_midp_pane_t2

0x0001,

0xfad1,	// (0x0003ef2b) list_form2_midp_pane_t

0x758a,	// (0x000369e4) scroll_pane_cp51_ParamLimits

0x7746,	// (0x00036ba0) form2_midp_wait_pane_g1

0x774f,	// (0x00036ba9) form2_midp_wait_pane_g2

0x7758,	// (0x00036bb2) form2_midp_wait_pane_g3

0x0002,

0xfae6,	// (0x0003ef40) form2_midp_wait_pane_g

0x2d9f,	// (0x000321f9) list_highlight_pane_cp21_ParamLimits

0x77a4,	// (0x00036bfe) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x77b3,	// (0x00036c0d) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x6933,	// (0x00035d8d) list_single_2graphic_im_pane_ParamLimits

0x6933,	// (0x00035d8d) list_single_2graphic_im_pane

0xe469,	// (0x0003d8c3) list_single_2graphic_im_pane_g1_ParamLimits

0xe469,	// (0x0003d8c3) list_single_2graphic_im_pane_g1

0xe47a,	// (0x0003d8d4) list_single_2graphic_im_pane_g2_ParamLimits

0xe47a,	// (0x0003d8d4) list_single_2graphic_im_pane_g2

0xe486,	// (0x0003d8e0) list_single_2graphic_im_pane_g3_ParamLimits

0xe486,	// (0x0003d8e0) list_single_2graphic_im_pane_g3

0x0003,

0xfc47,	// (0x0003f0a1) list_single_2graphic_im_pane_g_ParamLimits

0xfc47,	// (0x0003f0a1) list_single_2graphic_im_pane_g

0xe4c2,	// (0x0003d91c) list_single_2graphic_im_pane_t1_ParamLimits

0xe4c2,	// (0x0003d91c) list_single_2graphic_im_pane_t1

0x7fec,	// (0x00037446) list_single_graphic_2heading_pane_fp_ParamLimits

0x7fec,	// (0x00037446) list_single_graphic_2heading_pane_fp

0x32d9,	// (0x00032733) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x32d9,	// (0x00032733) list_single_graphic_2heading_pane_fp_g1

0x8001,	// (0x0003745b) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x8001,	// (0x0003745b) list_single_graphic_2heading_pane_fp_g2

0x32a2,	// (0x000326fc) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x32a2,	// (0x000326fc) list_single_graphic_2heading_pane_fp_g3

0x32ae,	// (0x00032708) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x32ae,	// (0x00032708) list_single_graphic_2heading_pane_fp_g4

0x800d,	// (0x00037467) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x800d,	// (0x00037467) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb6e,	// (0x0003efc8) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb6e,	// (0x0003efc8) list_single_graphic_2heading_pane_fp_g

0x34b2,	// (0x0003290c) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x34b2,	// (0x0003290c) list_single_graphic_2heading_pane_fp_t1

0x3311,	// (0x0003276b) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x3311,	// (0x0003276b) list_single_graphic_2heading_pane_fp_t2

0x34c8,	// (0x00032922) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x34c8,	// (0x00032922) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc50,	// (0x0003f0aa) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc50,	// (0x0003f0aa) list_single_graphic_2heading_pane_fp_t

0x7a25,	// (0x00036e7f) fep_hwr_write_pane_g5_ParamLimits

0x7a25,	// (0x00036e7f) fep_hwr_write_pane_g5

0x7a31,	// (0x00036e8b) fep_hwr_write_pane_g6_ParamLimits

0x7a31,	// (0x00036e8b) fep_hwr_write_pane_g6

0x82bf,	// (0x00037719) eswt_shell_pane_ParamLimits

0x540d,	// (0x00034867) bg_popup_window_pane_cp18_ParamLimits

0x66c3,	// (0x00035b1d) heading_pane_cp70

0x83e9,	// (0x00037843) popup_eswt_tasktip_window_t1_ParamLimits

0xd711,	// (0x0003cb6b) aid_touch_tab_arrow_left

0xd727,	// (0x0003cb81) aid_touch_tab_arrow_right

0xd03a,	// (0x0003c494) title_pane_g3_ParamLimits

0xd03a,	// (0x0003c494) title_pane_g3

0x3e7b,	// (0x000332d5) set_value_pane_g1

0xc65a,	// (0x0003bab4) popup_toolbar_trans_pane_ParamLimits

0x8543,	// (0x0003799d) aid_size_cell_tb_trans_pane_ParamLimits

0x3ebc,	// (0x00033316) bg_tb_trans_pane_ParamLimits

0x8555,	// (0x000379af) grid_tb_trans_pane_ParamLimits

0x38b0,	// (0x00032d0a) cont_note_pane_ParamLimits

0x38b0,	// (0x00032d0a) cont_note_pane

0x3c2d,	// (0x00033087) cont_snote2_single_text_pane_ParamLimits

0x3c2d,	// (0x00033087) cont_snote2_single_text_pane

0x3c2d,	// (0x00033087) cont_snote2_single_graphic_pane_ParamLimits

0x3c2d,	// (0x00033087) cont_snote2_single_graphic_pane

0x5a20,	// (0x00034e7a) cont_note_wait_pane_ParamLimits

0x5a20,	// (0x00034e7a) cont_note_wait_pane

0x5a20,	// (0x00034e7a) cont_note_image_pane_ParamLimits

0x5a20,	// (0x00034e7a) cont_note_image_pane

0x85fd,	// (0x00037a57) popup_note2_window_g1_ParamLimits

0x85fd,	// (0x00037a57) popup_note2_window_g1

0x862e,	// (0x00037a88) popup_note2_window_t1_ParamLimits

0x862e,	// (0x00037a88) popup_note2_window_t1

0x8673,	// (0x00037acd) popup_note2_window_t2_ParamLimits

0x8673,	// (0x00037acd) popup_note2_window_t2

0x86b8,	// (0x00037b12) popup_note2_window_t3_ParamLimits

0x86b8,	// (0x00037b12) popup_note2_window_t3

0x86fd,	// (0x00037b57) popup_note2_window_t4_ParamLimits

0x86fd,	// (0x00037b57) popup_note2_window_t4

0x3934,	// (0x00032d8e) popup_note2_window_t5_ParamLimits

0x3934,	// (0x00032d8e) popup_note2_window_t5

0x0004,

0xfc5c,	// (0x0003f0b6) popup_note2_window_t_ParamLimits

0xfc5c,	// (0x0003f0b6) popup_note2_window_t

0x872c,	// (0x00037b86) popup_note2_image_window_g1_ParamLimits

0x872c,	// (0x00037b86) popup_note2_image_window_g1

0x8738,	// (0x00037b92) popup_note2_image_window_g2_ParamLimits

0x8738,	// (0x00037b92) popup_note2_image_window_g2

0x0001,

0xfc67,	// (0x0003f0c1) popup_note2_image_window_g_ParamLimits

0xfc67,	// (0x0003f0c1) popup_note2_image_window_g

0x874a,	// (0x00037ba4) popup_note2_image_window_t1_ParamLimits

0x874a,	// (0x00037ba4) popup_note2_image_window_t1

0x8762,	// (0x00037bbc) popup_note2_image_window_t2_ParamLimits

0x8762,	// (0x00037bbc) popup_note2_image_window_t2

0x877a,	// (0x00037bd4) popup_note2_image_window_t3_ParamLimits

0x877a,	// (0x00037bd4) popup_note2_image_window_t3

0x0002,

0xfc6c,	// (0x0003f0c6) popup_note2_image_window_t_ParamLimits

0xfc6c,	// (0x0003f0c6) popup_note2_image_window_t

0x5a2e,	// (0x00034e88) popup_note2_wait_window_g1_ParamLimits

0x5a2e,	// (0x00034e88) popup_note2_wait_window_g1

0x8796,	// (0x00037bf0) popup_note2_wait_window_g2_ParamLimits

0x8796,	// (0x00037bf0) popup_note2_wait_window_g2

0x5a46,	// (0x00034ea0) popup_note2_wait_window_g3_ParamLimits

0x5a46,	// (0x00034ea0) popup_note2_wait_window_g3

0x0002,

0xfc73,	// (0x0003f0cd) popup_note2_wait_window_g_ParamLimits

0xfc73,	// (0x0003f0cd) popup_note2_wait_window_g

0x87a2,	// (0x00037bfc) popup_note2_wait_window_t1_ParamLimits

0x87a2,	// (0x00037bfc) popup_note2_wait_window_t1

0x87c0,	// (0x00037c1a) popup_note2_wait_window_t2_ParamLimits

0x87c0,	// (0x00037c1a) popup_note2_wait_window_t2

0x87de,	// (0x00037c38) popup_note2_wait_window_t3_ParamLimits

0x87de,	// (0x00037c38) popup_note2_wait_window_t3

0x87f0,	// (0x00037c4a) popup_note2_wait_window_t4_ParamLimits

0x87f0,	// (0x00037c4a) popup_note2_wait_window_t4

0x0003,

0xfc7a,	// (0x0003f0d4) popup_note2_wait_window_t_ParamLimits

0xfc7a,	// (0x0003f0d4) popup_note2_wait_window_t

0x8802,	// (0x00037c5c) wait_bar2_pane_ParamLimits

0x8802,	// (0x00037c5c) wait_bar2_pane

0x881a,	// (0x00037c74) popup_snote2_single_text_window_g1_ParamLimits

0x881a,	// (0x00037c74) popup_snote2_single_text_window_g1

0x8842,	// (0x00037c9c) popup_snote2_single_text_window_t1_ParamLimits

0x8842,	// (0x00037c9c) popup_snote2_single_text_window_t1

0x888e,	// (0x00037ce8) popup_snote2_single_text_window_t2_ParamLimits

0x888e,	// (0x00037ce8) popup_snote2_single_text_window_t2

0x88da,	// (0x00037d34) popup_snote2_single_text_window_t3_ParamLimits

0x88da,	// (0x00037d34) popup_snote2_single_text_window_t3

0x891b,	// (0x00037d75) popup_snote2_single_text_window_t4_ParamLimits

0x891b,	// (0x00037d75) popup_snote2_single_text_window_t4

0x8951,	// (0x00037dab) popup_snote2_single_text_window_t5_ParamLimits

0x8951,	// (0x00037dab) popup_snote2_single_text_window_t5

0x0004,

0xfc83,	// (0x0003f0dd) popup_snote2_single_text_window_t_ParamLimits

0xfc83,	// (0x0003f0dd) popup_snote2_single_text_window_t

0x897c,	// (0x00037dd6) popup_snote2_single_graphic_window_g1_ParamLimits

0x897c,	// (0x00037dd6) popup_snote2_single_graphic_window_g1

0x89a4,	// (0x00037dfe) popup_snote2_single_graphic_window_g2_ParamLimits

0x89a4,	// (0x00037dfe) popup_snote2_single_graphic_window_g2

0x0001,

0xfc8e,	// (0x0003f0e8) popup_snote2_single_graphic_window_g_ParamLimits

0xfc8e,	// (0x0003f0e8) popup_snote2_single_graphic_window_g

0x89cc,	// (0x00037e26) popup_snote2_single_graphic_window_t1_ParamLimits

0x89cc,	// (0x00037e26) popup_snote2_single_graphic_window_t1

0x8a18,	// (0x00037e72) popup_snote2_single_graphic_window_t2_ParamLimits

0x8a18,	// (0x00037e72) popup_snote2_single_graphic_window_t2

0x88da,	// (0x00037d34) popup_snote2_single_graphic_window_t3_ParamLimits

0x88da,	// (0x00037d34) popup_snote2_single_graphic_window_t3

0x891b,	// (0x00037d75) popup_snote2_single_graphic_window_t4_ParamLimits

0x891b,	// (0x00037d75) popup_snote2_single_graphic_window_t4

0x8951,	// (0x00037dab) popup_snote2_single_graphic_window_t5_ParamLimits

0x8951,	// (0x00037dab) popup_snote2_single_graphic_window_t5

0x0004,

0xfc93,	// (0x0003f0ed) popup_snote2_single_graphic_window_t_ParamLimits

0xfc93,	// (0x0003f0ed) popup_snote2_single_graphic_window_t

0x744b,	// (0x000368a5) clock_nsta_pane_cp2_t1

0x744b,	// (0x000368a5) clock_nsta_pane_cp2_t2

0x0001,

0xfaa7,	// (0x0003ef01) clock_nsta_pane_cp2_t

0x095b,	// (0x0002fdb5) form_field_data_wide_pane_g1_ParamLimits

0x3eca,	// (0x00033324) form_field_data_wide_pane_g2_ParamLimits

0x3eca,	// (0x00033324) form_field_data_wide_pane_g2

0x3ed6,	// (0x00033330) form_field_data_wide_pane_g3_ParamLimits

0x3ed6,	// (0x00033330) form_field_data_wide_pane_g3

0x0002,

0xf67b,	// (0x0003ead5) form_field_data_wide_pane_g_ParamLimits

0xf67b,	// (0x0003ead5) form_field_data_wide_pane_g

0xdfff,	// (0x0003d459) grid_touch_3_pane_ParamLimits

0xdfff,	// (0x0003d459) grid_touch_3_pane

0xe4f3,	// (0x0003d94d) cell_touch_3_pane_ParamLimits

0xe4f3,	// (0x0003d94d) cell_touch_3_pane

0x7999,	// (0x00036df3) cell_touch_3_pane_g1

0x7999,	// (0x00036df3) cell_touch_3_pane_g2

0x0001,

0xfb2c,	// (0x0003ef86) cell_touch_3_pane_g

0x398c,	// (0x00032de6) cont_query_data_pane

0x3994,	// (0x00032dee) cont_query_data_pane_cp1

0x8a92,	// (0x00037eec) button_value_adjust_pane_cp7

0x8a9a,	// (0x00037ef4) query_popup_pane_cp3

0x462e,	// (0x00033a88) bg_popup_sub_pane_cp22_ParamLimits

0x0d1f,	// (0x00030179) navi_navi_volume_pane_cp2

0x0d3a,	// (0x00030194) popup_side_volume_key_window_g2

0x0d49,	// (0x000301a3) popup_side_volume_key_window_g3

0x0002,

0xf711,	// (0x0003eb6b) popup_side_volume_key_window_g

0x0d66,	// (0x000301c0) popup_side_volume_key_window_t2

0x0001,

0xf718,	// (0x0003eb72) popup_side_volume_key_window_t

0x48e5,	// (0x00033d3f) popup_side_volume_key_window_ParamLimits

0xb9f5,	// (0x0003ae4f) list_double_graphic_pane_g4_ParamLimits

0xb9f5,	// (0x0003ae4f) list_double_graphic_pane_g4

0xde60,	// (0x0003d2ba) list_single_2heading_msg_pane_ParamLimits

0xde60,	// (0x0003d2ba) list_single_2heading_msg_pane

0xc877,	// (0x0003bcd1) list_single_2heading_msg_pane_g1_ParamLimits

0xc877,	// (0x0003bcd1) list_single_2heading_msg_pane_g1

0xc883,	// (0x0003bcdd) list_single_2heading_msg_pane_g2_ParamLimits

0xc883,	// (0x0003bcdd) list_single_2heading_msg_pane_g2

0xc896,	// (0x0003bcf0) list_single_2heading_msg_pane_g3_ParamLimits

0xc896,	// (0x0003bcf0) list_single_2heading_msg_pane_g3

0xc8a2,	// (0x0003bcfc) list_single_2heading_msg_pane_g4_ParamLimits

0xc8a2,	// (0x0003bcfc) list_single_2heading_msg_pane_g4

0x0003,

0xfc9e,	// (0x0003f0f8) list_single_2heading_msg_pane_g_ParamLimits

0xfc9e,	// (0x0003f0f8) list_single_2heading_msg_pane_g

0xc8ba,	// (0x0003bd14) list_single_2heading_msg_pane_t1_ParamLimits

0xc8ba,	// (0x0003bd14) list_single_2heading_msg_pane_t1

0xc8e2,	// (0x0003bd3c) list_single_2heading_msg_pane_t2_ParamLimits

0xc8e2,	// (0x0003bd3c) list_single_2heading_msg_pane_t2

0xc94d,	// (0x0003bda7) list_single_2heading_msg_pane_t3_ParamLimits

0xc94d,	// (0x0003bda7) list_single_2heading_msg_pane_t3

0x35ad,	// (0x00032a07) list_single_2heading_msg_pane_t4_ParamLimits

0x35ad,	// (0x00032a07) list_single_2heading_msg_pane_t4

0x0003,

0xfca7,	// (0x0003f101) list_single_2heading_msg_pane_t_ParamLimits

0xfca7,	// (0x0003f101) list_single_2heading_msg_pane_t

0x2cf3,	// (0x0003214d) title_pane_g4_ParamLimits

0x2cf3,	// (0x0003214d) title_pane_g4

0x0b2e,	// (0x0002ff88) title_pane_stacon_g3_ParamLimits

0x0b2e,	// (0x0002ff88) title_pane_stacon_g3

0x85c0,	// (0x00037a1a) list_single_2graphic_im_pane_g4_ParamLimits

0x85c0,	// (0x00037a1a) list_single_2graphic_im_pane_g4

0x648b,	// (0x000358e5) popup_side_volume_key_window_cp

0x6c9b,	// (0x000360f5) main_idle_act2_pane_t1

0x178b,	// (0x00030be5) toolbar_button_pane_g10

0xd345,	// (0x0003c79f) popup_toolbar_window_cp1

0x743c,	// (0x00036896) clock_nsta_pane_cp_t1

0x743c,	// (0x00036896) clock_nsta_pane_cp_t2

0x0001,

0xfaa2,	// (0x0003eefc) clock_nsta_pane_cp_t

0x0d1f,	// (0x00030179) navi_navi_volume_pane_cp2_ParamLimits

0x0d2e,	// (0x00030188) popup_side_volume_key_window_g1_ParamLimits

0x0d3a,	// (0x00030194) popup_side_volume_key_window_g2_ParamLimits

0x0d49,	// (0x000301a3) popup_side_volume_key_window_g3_ParamLimits

0xf711,	// (0x0003eb6b) popup_side_volume_key_window_g_ParamLimits

0x1c91,	// (0x000310eb) fep_hwr_aid_pane

0x1d38,	// (0x00031192) bg_fep_hwr_top_pane_g4_ParamLimits

0x79f5,	// (0x00036e4f) fep_hwr_top_pane_g1_ParamLimits

0x7a07,	// (0x00036e61) fep_hwr_top_pane_g2_ParamLimits

0x1d58,	// (0x000311b2) fep_hwr_top_pane_g3_ParamLimits

0xfaf7,	// (0x0003ef51) fep_hwr_top_pane_g_ParamLimits

0x1d6d,	// (0x000311c7) fep_hwr_top_text_pane_ParamLimits

0x624e,	// (0x000356a8) aid_touch_tab_arrow_arrow_2

0x6257,	// (0x000356b1) aid_touch_tab_arrow_left_2

0x1ca5,	// (0x000310ff) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x1cdc,	// (0x00031136) fep_hwr_prediction_pane

0x7b73,	// (0x00036fcd) fep_vkb_prediction_pane

0xe2b1,	// (0x0003d70b) fep_vkb_side_pane_g3_ParamLimits

0xe2b1,	// (0x0003d70b) fep_vkb_side_pane_g3

0x1ee8,	// (0x00031342) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x1f54,	// (0x000313ae) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x1f61,	// (0x000313bb) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfba6,	// (0x0003f000) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x2090,	// (0x000314ea) fep_hwr_prediction_pane_g1

0x209a,	// (0x000314f4) fep_hwr_prediction_pane_g2

0x20a2,	// (0x000314fc) fep_hwr_prediction_pane_g3

0x20aa,	// (0x00031504) fep_hwr_prediction_pane_g4

0x0003,

0xfcb0,	// (0x0003f10a) fep_hwr_prediction_pane_g

0x8abf,	// (0x00037f19) fep_vkb_prediction_pane_g1

0x8ac9,	// (0x00037f23) fep_vkb_prediction_pane_g2

0x8ad1,	// (0x00037f2b) fep_vkb_prediction_pane_g3

0x8ad9,	// (0x00037f33) fep_vkb_prediction_pane_g4

0x0003,

0xfcb9,	// (0x0003f113) fep_vkb_prediction_pane_g

0x1b11,	// (0x00030f6b) slider_set_pane_g3

0x1b25,	// (0x00030f7f) slider_set_pane_g4

0x1b3d,	// (0x00030f97) slider_set_pane_g5

0x1b11,	// (0x00030f6b) slider_set_pane_g6

0x1b53,	// (0x00030fad) slider_set_pane_g7

0x68e0,	// (0x00035d3a) slider_form_pane_g3

0x68e9,	// (0x00035d43) slider_form_pane_g4

0x68f1,	// (0x00035d4b) slider_form_pane_g5

0x68e0,	// (0x00035d3a) slider_form_pane_g6

0xde32,	// (0x0003d28c) slider_form_pane_g7

0x6f45,	// (0x0003639f) slider_set_pane_vc_g3

0x6f4e,	// (0x000363a8) slider_set_pane_vc_g4

0x6f57,	// (0x000363b1) slider_set_pane_vc_g5

0x6f45,	// (0x0003639f) slider_set_pane_vc_g6

0x6f60,	// (0x000363ba) slider_set_pane_vc_g7

0x7120,	// (0x0003657a) slider_form_pane_vc_g1

0x7129,	// (0x00036583) slider_form_pane_vc_g2

0x7132,	// (0x0003658c) slider_form_pane_vc_g3

0x7120,	// (0x0003657a) slider_form_pane_vc_g4

0x713b,	// (0x00036595) slider_form_pane_vc_g5

0x0004,

0xfa74,	// (0x0003eece) slider_form_pane_vc_g

0x00da,	// (0x0002f534) main_idle_act3_pane

0x8ae1,	// (0x00037f3b) ai3_links_pane

0xe53b,	// (0x0003d995) popup_ai3_data_window_ParamLimits

0xe53b,	// (0x0003d995) popup_ai3_data_window

0x2cab,	// (0x00032105) grid_ai3_links_pane

0xe555,	// (0x0003d9af) cell_ai3_links_pane_ParamLimits

0xe555,	// (0x0003d9af) cell_ai3_links_pane

0x8b1c,	// (0x00037f76) bg_popup_sub_pane_cp11

0x8b29,	// (0x00037f83) cell_ai3_links_pane_g1

0x2cab,	// (0x00032105) bg_popup_sub_pane_cp12

0x8b4e,	// (0x00037fa8) heading_ai3_data_pane

0x8b56,	// (0x00037fb0) list_ai3_gene_pane

0x8b62,	// (0x00037fbc) popup_ai3_data_window_g1

0x8b6a,	// (0x00037fc4) heading_ai3_data_pane_g1

0x8b72,	// (0x00037fcc) heading_ai3_data_pane_t1

0x8b80,	// (0x00037fda) list_double_ai3_gene_pane_ParamLimits

0x8b80,	// (0x00037fda) list_double_ai3_gene_pane

0x8b8d,	// (0x00037fe7) list_single_ai3_gene_pane_ParamLimits

0x8b8d,	// (0x00037fe7) list_single_ai3_gene_pane

0x795e,	// (0x00036db8) list_highlight_pane_cp7_ParamLimits

0x795e,	// (0x00036db8) list_highlight_pane_cp7

0x8b9a,	// (0x00037ff4) list_single_a13_gene_pane_t1_ParamLimits

0x8b9a,	// (0x00037ff4) list_single_a13_gene_pane_t1

0x8bb1,	// (0x0003800b) list_single_ai3_gene_pane_g1

0x8bba,	// (0x00038014) list_single_ai3_gene_pane_g2

0x0001,

0xfcc2,	// (0x0003f11c) list_single_ai3_gene_pane_g

0x8bc2,	// (0x0003801c) list_double_ai3_gene_pane_g1_ParamLimits

0x8bc2,	// (0x0003801c) list_double_ai3_gene_pane_g1

0x8bce,	// (0x00038028) list_double_ai3_gene_pane_t1_ParamLimits

0x8bce,	// (0x00038028) list_double_ai3_gene_pane_t1

0x8bea,	// (0x00038044) list_double_ai3_gene_pane_t2_ParamLimits

0x8bea,	// (0x00038044) list_double_ai3_gene_pane_t2

0x8c00,	// (0x0003805a) list_double_ai3_gene_pane_t3_ParamLimits

0x8c00,	// (0x0003805a) list_double_ai3_gene_pane_t3

0x0002,

0xfcc7,	// (0x0003f121) list_double_ai3_gene_pane_t_ParamLimits

0xfcc7,	// (0x0003f121) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x34de,	// (0x00032938) aid_size_min_col_2

0xe525,	// (0x0003d97f) aid_size_min_msg_ParamLimits

0xe525,	// (0x0003d97f) aid_size_min_msg

0xe2c5,	// (0x0003d71f) fep_vkb_top_text_pane_g2_ParamLimits

0xe2c5,	// (0x0003d71f) fep_vkb_top_text_pane_g2

0x0001,

0xfb27,	// (0x0003ef81) fep_vkb_top_text_pane_g_ParamLimits

0xfb27,	// (0x0003ef81) fep_vkb_top_text_pane_g

0x00da,	// (0x0002f534) main_hc_apps_shell_pane

0x8c1d,	// (0x00038077) grid_hc_apps_pane_ParamLimits

0x8c1d,	// (0x00038077) grid_hc_apps_pane

0x8c2c,	// (0x00038086) list_hc_apps_pane

0x8c34,	// (0x0003808e) scroll_pane_cp37_ParamLimits

0x8c34,	// (0x0003808e) scroll_pane_cp37

0xe56f,	// (0x0003d9c9) cell_hc_apps_pane_ParamLimits

0xe56f,	// (0x0003d9c9) cell_hc_apps_pane

0xe62d,	// (0x0003da87) cell_hc_apps_pane_g1_ParamLimits

0xe62d,	// (0x0003da87) cell_hc_apps_pane_g1

0x8d1f,	// (0x00038179) cell_hc_apps_pane_g2_ParamLimits

0x8d1f,	// (0x00038179) cell_hc_apps_pane_g2

0x8d3b,	// (0x00038195) cell_hc_apps_pane_g3_ParamLimits

0x8d3b,	// (0x00038195) cell_hc_apps_pane_g3

0x0002,

0xfcce,	// (0x0003f128) cell_hc_apps_pane_g_ParamLimits

0xfcce,	// (0x0003f128) cell_hc_apps_pane_g

0xe65a,	// (0x0003dab4) cell_hc_apps_pane_t1_ParamLimits

0xe65a,	// (0x0003dab4) cell_hc_apps_pane_t1

0x38b0,	// (0x00032d0a) grid_highlight_pane_cp10_ParamLimits

0x38b0,	// (0x00032d0a) grid_highlight_pane_cp10

0xe698,	// (0x0003daf2) list_single_hc_apps_pane_ParamLimits

0xe698,	// (0x0003daf2) list_single_hc_apps_pane

0xe6c5,	// (0x0003db1f) list_single_hc_apps_pane_g1

0xc9bb,	// (0x0003be15) list_single_hc_apps_pane_g2

0x0001,

0xfcd5,	// (0x0003f12f) list_single_hc_apps_pane_g

0xc9d4,	// (0x0003be2e) list_single_hc_apps_pane_g2_copy1

0xc9f0,	// (0x0003be4a) list_single_hc_apps_pane_t1

0x2d9f,	// (0x000321f9) bg_set_opt_pane_cp_ParamLimits

0x033b,	// (0x0002f795) setting_slider_pane_t1_ParamLimits

0x0354,	// (0x0002f7ae) setting_slider_pane_t2_ParamLimits

0x036e,	// (0x0002f7c8) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0003e9b8) setting_slider_pane_t_ParamLimits

0x0386,	// (0x0002f7e0) slider_set_pane_ParamLimits

0x1052,	// (0x000304ac) control_pane_g5_ParamLimits

0x1052,	// (0x000304ac) control_pane_g5

0x672f,	// (0x00035b89) slider_set_pane_g1_ParamLimits

0x1b05,	// (0x00030f5f) slider_set_pane_g2_ParamLimits

0x1b11,	// (0x00030f6b) slider_set_pane_g3_ParamLimits

0x1b25,	// (0x00030f7f) slider_set_pane_g4_ParamLimits

0x1b3d,	// (0x00030f97) slider_set_pane_g5_ParamLimits

0x1b11,	// (0x00030f6b) slider_set_pane_g6_ParamLimits

0x1b53,	// (0x00030fad) slider_set_pane_g7_ParamLimits

0xf95f,	// (0x0003edb9) slider_set_pane_g_ParamLimits

0x49d1,	// (0x00033e2b) navi_icon_text_pane_ParamLimits

0xd6da,	// (0x0003cb34) aid_fill_nsta_2_ParamLimits

0xd711,	// (0x0003cb6b) aid_touch_tab_arrow_left_ParamLimits

0xd727,	// (0x0003cb81) aid_touch_tab_arrow_right_ParamLimits

0xd7c2,	// (0x0003cc1c) clock_nsta_pane_ParamLimits

0x6230,	// (0x0003568a) navi_icon_pane_g1_ParamLimits

0x623c,	// (0x00035696) navi_text_pane_t1_ParamLimits

0x7548,	// (0x000369a2) navi_icon_text_pane_g1_ParamLimits

0x7554,	// (0x000369ae) navi_icon_text_pane_t1_ParamLimits

0xe6c5,	// (0x0003db1f) list_single_hc_apps_pane_g1_ParamLimits

0xc9bb,	// (0x0003be15) list_single_hc_apps_pane_g2_ParamLimits

0xfcd5,	// (0x0003f12f) list_single_hc_apps_pane_g_ParamLimits

0xc9d4,	// (0x0003be2e) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xc9f0,	// (0x0003be4a) list_single_hc_apps_pane_t1_ParamLimits

0xb7ca,	// (0x0003ac24) popup_toolbar2_fixed_window_ParamLimits

0xb7ca,	// (0x0003ac24) popup_toolbar2_fixed_window

0xc650,	// (0x0003baaa) popup_toolbar2_float_window

0x2cab,	// (0x00032105) bg_popup_sub_pane_cp27

0x8e12,	// (0x0003826c) grid_toolbar2_float_pane

0x2cab,	// (0x00032105) bg_popup_sub_pane_cp26

0x8e12,	// (0x0003826c) grid_toolbar2_fixed_pane

0xe6de,	// (0x0003db38) cell_toolbar2_fixed_pane_ParamLimits

0xe6de,	// (0x0003db38) cell_toolbar2_fixed_pane

0xe6f8,	// (0x0003db52) cell_toolbar2_fixed_pane_g1

0x8e33,	// (0x0003828d) toolbar2_fixed_button_pane

0x5399,	// (0x000347f3) toolbar2_fixed_button_pane_g1

0x53a9,	// (0x00034803) toolbar2_fixed_button_pane_g2

0x53a1,	// (0x000347fb) toolbar2_fixed_button_pane_g3

0x53b9,	// (0x00034813) toolbar2_fixed_button_pane_g4

0x53b1,	// (0x0003480b) toolbar2_fixed_button_pane_g5

0x53c1,	// (0x0003481b) toolbar2_fixed_button_pane_g6

0x53c9,	// (0x00034823) toolbar2_fixed_button_pane_g7

0x53d9,	// (0x00034833) toolbar2_fixed_button_pane_g8

0x53d1,	// (0x0003482b) toolbar2_fixed_button_pane_g9

0x0008,

0xf861,	// (0x0003ecbb) toolbar2_fixed_button_pane_g

0x8e3b,	// (0x00038295) cell_toolbar2_float_pane_ParamLimits

0x8e3b,	// (0x00038295) cell_toolbar2_float_pane

0x8e4c,	// (0x000382a6) cell_toolbar2_float_pane_g1

0x8e33,	// (0x0003828d) toolbar2_fixed_button_pane_cp

0xe19f,	// (0x0003d5f9) fep_vkb_accented_list_pane_ParamLimits

0xe19f,	// (0x0003d5f9) fep_vkb_accented_list_pane

0x1ec8,	// (0x00031322) bg_popup_fep_shadow_pane_g9

0x4b51,	// (0x00033fab) bg_popup_fep_shadow_pane_cp3

0x4010,	// (0x0003346a) list_accented_list_pane

0x8e55,	// (0x000382af) list_single_accented_list_pane_ParamLimits

0x8e55,	// (0x000382af) list_single_accented_list_pane

0x4b51,	// (0x00033fab) list_highlight_pane_cp10

0x8e66,	// (0x000382c0) list_single_accented_list_pane_t1

0xc57a,	// (0x0003b9d4) popup_slider_window_ParamLimits

0xc57a,	// (0x0003b9d4) popup_slider_window

0x8aa2,	// (0x00037efc) aid_indentation_list_msg

0xe7ef,	// (0x0003dc49) bg_popup_window_pane_cp19

0x8f92,	// (0x000383ec) popup_slider_window_g1

0x8fae,	// (0x00038408) popup_slider_window_g2

0x8fca,	// (0x00038424) popup_slider_window_g3

0x0005,

0xfcda,	// (0x0003f134) popup_slider_window_g

0x9030,	// (0x0003848a) popup_slider_window_t1

0x90a4,	// (0x000384fe) small_volume_slider_vertical_pane

0x7999,	// (0x00036df3) small_volume_slider_vertical_pane_g1

0x7999,	// (0x00036df3) small_volume_slider_vertical_pane_g2

0x90c0,	// (0x0003851a) small_volume_slider_vertical_pane_g3

0x0002,

0xfcec,	// (0x0003f146) small_volume_slider_vertical_pane_g

0xb738,	// (0x0003ab92) area_side_right_pane_ParamLimits

0xb738,	// (0x0003ab92) area_side_right_pane

0xca1e,	// (0x0003be78) aid_size_side_button_ParamLimits

0xca1e,	// (0x0003be78) aid_size_side_button

0xca37,	// (0x0003be91) grid_sctrl_middle_pane_ParamLimits

0xca37,	// (0x0003be91) grid_sctrl_middle_pane

0x20e5,	// (0x0003153f) sctrl_sk_bottom_pane

0x20f6,	// (0x00031550) sctrl_sk_top_pane

0x2108,	// (0x00031562) aid_touch_sctrl_top

0x2115,	// (0x0003156f) bg_sctrl_sk_pane_ParamLimits

0x2115,	// (0x0003156f) bg_sctrl_sk_pane

0x2123,	// (0x0003157d) sctrl_sk_top_pane_g1

0x2130,	// (0x0003158a) sctrl_sk_top_pane_t1

0x2108,	// (0x00031562) aid_touch_sctrl_bottom

0x2115,	// (0x0003156f) bg_sctrl_sk_pane_cp_ParamLimits

0x2115,	// (0x0003156f) bg_sctrl_sk_pane_cp

0x214b,	// (0x000315a5) sctrl_sk_bottom_pane_g1

0x2130,	// (0x0003158a) sctrl_sk_bottom_pane_t1

0xca51,	// (0x0003beab) cell_sctrl_middle_pane_ParamLimits

0xca51,	// (0x0003beab) cell_sctrl_middle_pane

0xca62,	// (0x0003bebc) aid_touch_sctrl_middle_ParamLimits

0xca62,	// (0x0003bebc) aid_touch_sctrl_middle

0xca6f,	// (0x0003bec9) bg_sctrl_middle_pane_ParamLimits

0xca6f,	// (0x0003bec9) bg_sctrl_middle_pane

0x27b8,	// (0x00031c12) cell_sctrl_middle_pane_g1_ParamLimits

0x27b8,	// (0x00031c12) cell_sctrl_middle_pane_g1

0xca7d,	// (0x0003bed7) cell_sctrl_middle_pane_g2_ParamLimits

0xca7d,	// (0x0003bed7) cell_sctrl_middle_pane_g2

0x0001,

0xfcf8,	// (0x0003f152) cell_sctrl_middle_pane_g_ParamLimits

0xfcf8,	// (0x0003f152) cell_sctrl_middle_pane_g

0x5399,	// (0x000347f3) bg_sctrl_middle_pane_g1

0x53a1,	// (0x000347fb) bg_sctrl_middle_pane_g2

0x53a9,	// (0x00034803) bg_sctrl_middle_pane_g3

0x53b1,	// (0x0003480b) bg_sctrl_middle_pane_g4

0x53b9,	// (0x00034813) bg_sctrl_middle_pane_g5

0x53c1,	// (0x0003481b) bg_sctrl_middle_pane_g6

0x53c9,	// (0x00034823) bg_sctrl_middle_pane_g7

0x53d1,	// (0x0003482b) bg_sctrl_middle_pane_g8

0x0007,

0xfcfd,	// (0x0003f157) bg_sctrl_middle_pane_g

0x53d9,	// (0x00034833) bg_sctrl_middle_pane_g8_copy1

0x5399,	// (0x000347f3) bg_sctrl_sk_pane_g1

0x53a9,	// (0x00034803) bg_sctrl_sk_pane_g2

0x53a1,	// (0x000347fb) bg_sctrl_sk_pane_g3

0x0008,

0xf861,	// (0x0003ecbb) bg_sctrl_sk_pane_g

0x3deb,	// (0x00033245) aid_size_touch_scroll_bar

0x53b9,	// (0x00034813) bg_sctrl_sk_pane_g4

0x53b1,	// (0x0003480b) bg_sctrl_sk_pane_g5

0x53c1,	// (0x0003481b) bg_sctrl_sk_pane_g6

0x53c9,	// (0x00034823) bg_sctrl_sk_pane_g7

0x53d9,	// (0x00034833) bg_sctrl_sk_pane_g8

0x53d1,	// (0x0003482b) bg_sctrl_sk_pane_g9

0x120e,	// (0x00030668) popup_fep_china_hwr2_fs_candidate_window

0xc094,	// (0x0003b4ee) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xc094,	// (0x0003b4ee) popup_fep_china_hwr2_fs_control_window

0x1ee8,	// (0x00031342) sctrl_sk_top_pane_g2

0x0001,

0xfcf3,	// (0x0003f14d) sctrl_sk_top_pane_g

0xe8a7,	// (0x0003dd01) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe8a7,	// (0x0003dd01) aid_fep_china_hwr2_fs_cell

0xe8bb,	// (0x0003dd15) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe8bb,	// (0x0003dd15) bg_popup_fep_shadow_pane_cp4

0xe8d2,	// (0x0003dd2c) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe8d2,	// (0x0003dd2c) bg_popup_fep_shadow_pane_cp5

0xe8e4,	// (0x0003dd3e) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe8e4,	// (0x0003dd3e) popup_fep_china_hwr2_fs_control_bar_grid

0xe8f8,	// (0x0003dd52) popup_fep_china_hwr2_fs_control_funtion_grid

0x911c,	// (0x00038576) aid_fep_china_hwr2_fs_candi_cell

0x2cab,	// (0x00032105) bg_popup_fep_shadow_pane_cp6

0x9126,	// (0x00038580) popup_fep_china_hwr2_fs_candidate_grid

0xe900,	// (0x0003dd5a) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe900,	// (0x0003dd5a) cell_fep_china_hwr2_fs_funtion_grid

0x7999,	// (0x00036df3) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x9148,	// (0x000385a2) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x9148,	// (0x000385a2) cell_fep_china_hwr2_fs_funtion_grid_g1

0x9156,	// (0x000385b0) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x9156,	// (0x000385b0) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd0e,	// (0x0003f168) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd0e,	// (0x0003f168) cell_fep_china_hwr2_fs_funtion_grid_g

0xe918,	// (0x0003dd72) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe918,	// (0x0003dd72) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe92d,	// (0x0003dd87) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe92d,	// (0x0003dd87) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd13,	// (0x0003f16d) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd13,	// (0x0003f16d) cell_fep_china_hwr2_fs_funtion_grid_t

0x919d,	// (0x000385f7) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x91a5,	// (0x000385ff) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x91ad,	// (0x00038607) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd18,	// (0x0003f172) popup_fep_china_hwr2_fs_control_bar_grid_g

0x91b5,	// (0x0003860f) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x91b5,	// (0x0003860f) cell_fep_china_hwr2_fs_candidate_grid

0x91ce,	// (0x00038628) popup_fep_china_hwr2_fs_candidate_grid_g20

0x91d6,	// (0x00038630) popup_fep_china_hwr2_fs_candidate_grid_g21

0x7999,	// (0x00036df3) cell_fep_china_hwr2_fs_candidate_grid_g1

0x7999,	// (0x00036df3) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb2c,	// (0x0003ef86) cell_fep_china_hwr2_fs_candidate_grid_g

0x91de,	// (0x00038638) cell_fep_china_hwr2_fs_candidate_grid_t1

0x4f8f,	// (0x000343e9) clock_nsta_pane_cp_24_ParamLimits

0x4f8f,	// (0x000343e9) clock_nsta_pane_cp_24

0x500d,	// (0x00034467) indicator_nsta_pane_cp_24_ParamLimits

0x500d,	// (0x00034467) indicator_nsta_pane_cp_24

0x60ac,	// (0x00035506) heading_pane_g1

0x0001,

0xf8c6,	// (0x0003ed20) heading_pane_g

0x6ae4,	// (0x00035f3e) grid_sct_catagory_button_pane

0x6b14,	// (0x00035f6e) scroll_pane_cp5_ParamLimits

0x7596,	// (0x000369f0) button_value_adjust_pane_cp5_ParamLimits

0x7596,	// (0x000369f0) button_value_adjust_pane_cp5

0x7675,	// (0x00036acf) form2_midp_time_pane_ParamLimits

0x91ec,	// (0x00038646) cell_sct_catagory_button_pane_ParamLimits

0x91ec,	// (0x00038646) cell_sct_catagory_button_pane

0x795e,	// (0x00036db8) bg_button_pane_cp01_ParamLimits

0x795e,	// (0x00036db8) bg_button_pane_cp01

0x7999,	// (0x00036df3) cell_sct_catagory_button_pane_g1

0xc5f3,	// (0x0003ba4d) popup_tb_extension_window

0xe949,	// (0x0003dda3) aid_size_cell_ext_ParamLimits

0xe949,	// (0x0003dda3) aid_size_cell_ext

0x3c2d,	// (0x00033087) bg_tb_trans_pane_cp1_ParamLimits

0x3c2d,	// (0x00033087) bg_tb_trans_pane_cp1

0xe96f,	// (0x0003ddc9) grid_tb_ext_pane_ParamLimits

0xe96f,	// (0x0003ddc9) grid_tb_ext_pane

0xe9aa,	// (0x0003de04) cell_tb_ext_pane_ParamLimits

0xe9aa,	// (0x0003de04) cell_tb_ext_pane

0xe9d2,	// (0x0003de2c) cell_tb_ext_pane_g1_ParamLimits

0xe9d2,	// (0x0003de2c) cell_tb_ext_pane_g1

0x9280,	// (0x000386da) cell_tb_ext_pane_t1

0x38b0,	// (0x00032d0a) list_highlight_pane_cp11_ParamLimits

0x38b0,	// (0x00032d0a) list_highlight_pane_cp11

0xb7df,	// (0x0003ac39) popup_uni_indicator_window_ParamLimits

0xb7df,	// (0x0003ac39) popup_uni_indicator_window

0x3ebc,	// (0x00033316) bg_popup_sub_pane_cp14

0x929b,	// (0x000386f5) list_uniindi_pane

0x92a7,	// (0x00038701) uniindi_top_pane

0x38b0,	// (0x00032d0a) bg_uniindi_top_pane

0x92c6,	// (0x00038720) uniindi_top_pane_g1

0x92dc,	// (0x00038736) uniindi_top_pane_g2

0x0003,

0xfd1f,	// (0x0003f179) uniindi_top_pane_g

0x9306,	// (0x00038760) uniindi_top_pane_t1

0x9330,	// (0x0003878a) list_single_uniindi_pane_ParamLimits

0x9330,	// (0x0003878a) list_single_uniindi_pane

0x7999,	// (0x00036df3) bg_uniindi_top_pane_g1

0x9343,	// (0x0003879d) list_single_uniindi_pane_g1

0x9356,	// (0x000387b0) list_single_uniindi_pane_t1

0x00da,	// (0x0002f534) control_bg_pane

0x937b,	// (0x000387d5) bg_sctrl_sk_pane_cp1

0x9384,	// (0x000387de) bg_sctrl_sk_pane_cp2

0x938d,	// (0x000387e7) control_bg_pane_g1

0x9396,	// (0x000387f0) control_bg_pane_g2

0x0001,

0xfd28,	// (0x0003f182) control_bg_pane_g

0x73f0,	// (0x0003684a) cell_indicator_nsta_pane_g1_ParamLimits

0xe02c,	// (0x0003d486) cell_indicator_nsta_pane_g2_ParamLimits

0xfa90,	// (0x0003eeea) cell_indicator_nsta_pane_g_ParamLimits

0x328f,	// (0x000326e9) form2_midp_time_pane_t1_ParamLimits

0x1c83,	// (0x000310dd) main_idle_act4_pane_ParamLimits

0x1c83,	// (0x000310dd) main_idle_act4_pane

0xc5f3,	// (0x0003ba4d) popup_tb_extension_window_ParamLimits

0xe991,	// (0x0003ddeb) tb_ext_find_pane_ParamLimits

0xe991,	// (0x0003ddeb) tb_ext_find_pane

0x939f,	// (0x000387f9) ai_gene_pane_1_cp1

0x4c98,	// (0x000340f2) ai_gene_pane_2_cp1

0x93a7,	// (0x00038801) list_single_idle_plugin_calendar_pane

0x93b0,	// (0x0003880a) list_single_idle_plugin_notification_pane

0x93b9,	// (0x00038813) list_single_idle_plugin_player_pane

0xe9ef,	// (0x0003de49) list_single_idle_plugin_shortcut_pane_ParamLimits

0xe9ef,	// (0x0003de49) list_single_idle_plugin_shortcut_pane

0xea17,	// (0x0003de71) main_idle_act4_pane_t1

0xea2d,	// (0x0003de87) main_idle_act4_pane_t2

0x0001,

0xfd2d,	// (0x0003f187) main_idle_act4_pane_t

0xea43,	// (0x0003de9d) middle_sk_idle_act4_pane_ParamLimits

0xea43,	// (0x0003de9d) middle_sk_idle_act4_pane

0xea5f,	// (0x0003deb9) popup_clock_digital_analogue_window_cp2

0xea87,	// (0x0003dee1) shortcut_wheel_idle_act4_pane_ParamLimits

0xea87,	// (0x0003dee1) shortcut_wheel_idle_act4_pane

0x7999,	// (0x00036df3) shortcut_wheel_idle_act4_pane_g1

0x7999,	// (0x00036df3) shortcut_wheel_idle_act4_pane_g2

0x7999,	// (0x00036df3) shortcut_wheel_idle_act4_pane_g3

0x7999,	// (0x00036df3) shortcut_wheel_idle_act4_pane_g4

0x7999,	// (0x00036df3) shortcut_wheel_idle_act4_pane_g5

0x944c,	// (0x000388a6) shortcut_wheel_idle_act4_pane_g6

0x9454,	// (0x000388ae) shortcut_wheel_idle_act4_pane_g7

0x945c,	// (0x000388b6) shortcut_wheel_idle_act4_pane_g8

0x9464,	// (0x000388be) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd32,	// (0x0003f18c) shortcut_wheel_idle_act4_pane_g

0xe49a,	// (0x0003d8f4) middle_sk_idle_act4_pane_g1_ParamLimits

0xe49a,	// (0x0003d8f4) middle_sk_idle_act4_pane_g1

0xeb04,	// (0x0003df5e) middle_sk_idle_act4_pane_g2_ParamLimits

0xeb04,	// (0x0003df5e) middle_sk_idle_act4_pane_g2

0x0001,

0xfd55,	// (0x0003f1af) middle_sk_idle_act4_pane_g_ParamLimits

0xfd55,	// (0x0003f1af) middle_sk_idle_act4_pane_g

0xeb1c,	// (0x0003df76) middle_sk_idle_act4_pane_t1_ParamLimits

0xeb1c,	// (0x0003df76) middle_sk_idle_act4_pane_t1

0xeb4b,	// (0x0003dfa5) grid_ai_shortcut_pane_ParamLimits

0xeb4b,	// (0x0003dfa5) grid_ai_shortcut_pane

0xeb68,	// (0x0003dfc2) list_highlight_pane_cp16_ParamLimits

0xeb68,	// (0x0003dfc2) list_highlight_pane_cp16

0xeb75,	// (0x0003dfcf) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xeb75,	// (0x0003dfcf) list_single_idle_plugin_shortcut_pane_g1

0xeb81,	// (0x0003dfdb) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xeb81,	// (0x0003dfdb) list_single_idle_plugin_shortcut_pane_g2

0xeb9d,	// (0x0003dff7) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xeb9d,	// (0x0003dff7) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd5a,	// (0x0003f1b4) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd5a,	// (0x0003f1b4) list_single_idle_plugin_shortcut_pane_g

0xebb2,	// (0x0003e00c) cell_ai_shortcut_pane_ParamLimits

0xebb2,	// (0x0003e00c) cell_ai_shortcut_pane

0xebc8,	// (0x0003e022) cell_ai_shortcut_pane_g1_ParamLimits

0xebc8,	// (0x0003e022) cell_ai_shortcut_pane_g1

0x939f,	// (0x000387f9) ai_gene_pane_1_cp2

0x9594,	// (0x000389ee) ai_gene_pane_2_cp2

0x959c,	// (0x000389f6) list_highlight_pane_cp15

0x95a5,	// (0x000389ff) list_single_idle_plugin_calendar_pane_g1

0x959c,	// (0x000389f6) list_highlight_pane_cp17

0x95ad,	// (0x00038a07) list_single_idle_plugin_calendar_pane_g1_copy1

0x95b5,	// (0x00038a0f) list_single_idle_plugin_player_pane_g1

0x6d3d,	// (0x00036197) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd61,	// (0x0003f1bb) list_single_idle_plugin_player_pane_g

0x95bd,	// (0x00038a17) list_single_idle_plugin_player_pane_t1

0x95cb,	// (0x00038a25) list_single_idle_plugin_player_pane_t2

0x95d9,	// (0x00038a33) list_single_idle_plugin_player_pane_t3

0x95e7,	// (0x00038a41) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd66,	// (0x0003f1c0) list_single_idle_plugin_player_pane_t

0x95f5,	// (0x00038a4f) wait_bar_pane_cp15

0x95fd,	// (0x00038a57) grid_ai_notification_pane

0x6d3d,	// (0x00036197) list_single_idle_plugin_notification_pane_g1

0xebea,	// (0x0003e044) cell_ai_notification_pane_ParamLimits

0xebea,	// (0x0003e044) cell_ai_notification_pane

0x9613,	// (0x00038a6d) cell_ai_notification_pane_g1

0x961b,	// (0x00038a75) cell_ai_notification_pane_t1

0xebf7,	// (0x0003e051) tb_ext_find_button_pane

0xebff,	// (0x0003e059) tb_ext_find_pane_g1

0xec07,	// (0x0003e061) tb_ext_find_pane_t1

0x453e,	// (0x00033998) tb_ext_find_button_pane_g1

0x9647,	// (0x00038aa1) tb_ext_find_button_pane_g2

0x0001,

0xfd6f,	// (0x0003f1c9) tb_ext_find_button_pane_g

0xea17,	// (0x0003de71) main_idle_act4_pane_t1_ParamLimits

0xea2d,	// (0x0003de87) main_idle_act4_pane_t2_ParamLimits

0xfd2d,	// (0x0003f187) main_idle_act4_pane_t_ParamLimits

0xea5f,	// (0x0003deb9) popup_clock_digital_analogue_window_cp2_ParamLimits

0xea77,	// (0x0003ded1) sat_plugin_idle_act4_pane_ParamLimits

0xea77,	// (0x0003ded1) sat_plugin_idle_act4_pane

0xec15,	// (0x0003e06f) sat_plugin_idle_act4_pane_t1_ParamLimits

0xec15,	// (0x0003e06f) sat_plugin_idle_act4_pane_t1

0xec2d,	// (0x0003e087) sat_plugin_idle_act4_pane_t2_ParamLimits

0xec2d,	// (0x0003e087) sat_plugin_idle_act4_pane_t2

0xec45,	// (0x0003e09f) sat_plugin_idle_act4_pane_t3_ParamLimits

0xec45,	// (0x0003e09f) sat_plugin_idle_act4_pane_t3

0xec5d,	// (0x0003e0b7) sat_plugin_idle_act4_pane_t4_ParamLimits

0xec5d,	// (0x0003e0b7) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd74,	// (0x0003f1ce) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd74,	// (0x0003f1ce) sat_plugin_idle_act4_pane_t

0x019f,	// (0x0002f5f9) popup_battery_window_ParamLimits

0x019f,	// (0x0002f5f9) popup_battery_window

0x38b0,	// (0x00032d0a) bg_popup_sub_pane_cp25_ParamLimits

0x38b0,	// (0x00032d0a) bg_popup_sub_pane_cp25

0x969c,	// (0x00038af6) popup_battery_window_g1_ParamLimits

0x969c,	// (0x00038af6) popup_battery_window_g1

0x96a8,	// (0x00038b02) popup_battery_window_t1_ParamLimits

0x96a8,	// (0x00038b02) popup_battery_window_t1

0x96ba,	// (0x00038b14) popup_battery_window_t2_ParamLimits

0x96ba,	// (0x00038b14) popup_battery_window_t2

0x0001,

0xfd7d,	// (0x0003f1d7) popup_battery_window_t_ParamLimits

0xfd7d,	// (0x0003f1d7) popup_battery_window_t

0xd53d,	// (0x0003c997) midp_canvas_pane_ParamLimits

0xd59a,	// (0x0003c9f4) midp_keypad_pane_ParamLimits

0xd59a,	// (0x0003c9f4) midp_keypad_pane

0x4e75,	// (0x000342cf) main_midp_pane_ParamLimits

0x745a,	// (0x000368b4) signal_pane_g2_cp_ParamLimits

0xec75,	// (0x0003e0cf) aid_size_cell_midp_keypad_ParamLimits

0xec75,	// (0x0003e0cf) aid_size_cell_midp_keypad

0xec93,	// (0x0003e0ed) midp_keyp_game_grid_pane_ParamLimits

0xec93,	// (0x0003e0ed) midp_keyp_game_grid_pane

0xecba,	// (0x0003e114) midp_keyp_rocker_pane_ParamLimits

0xecba,	// (0x0003e114) midp_keyp_rocker_pane

0xed0b,	// (0x0003e165) midp_keyp_sk_left_pane_ParamLimits

0xed0b,	// (0x0003e165) midp_keyp_sk_left_pane

0xed5f,	// (0x0003e1b9) midp_keyp_sk_right_pane_ParamLimits

0xed5f,	// (0x0003e1b9) midp_keyp_sk_right_pane

0x2cab,	// (0x00032105) bg_button_pane_cp03

0xedb3,	// (0x0003e20d) midp_keyp_sk_left_pane_g1

0x2cab,	// (0x00032105) bg_button_pane_cp04

0xedb3,	// (0x0003e20d) midp_keyp_sk_right_pane_g1

0x7999,	// (0x00036df3) midp_keyp_rocker_pane_g1

0xedbc,	// (0x0003e216) keyp_game_cell_pane_ParamLimits

0xedbc,	// (0x0003e216) keyp_game_cell_pane

0x2cab,	// (0x00032105) bg_button_pane_cp02

0xede0,	// (0x0003e23a) keyp_game_cell_pane_g1

0xb77a,	// (0x0003abd4) popup_fep_vkb2_window_ParamLimits

0xb77a,	// (0x0003abd4) popup_fep_vkb2_window

0xca89,	// (0x0003bee3) aid_size_cell_vkb2_ParamLimits

0xca89,	// (0x0003bee3) aid_size_cell_vkb2

0xcabf,	// (0x0003bf19) popup_fep_vkb2_window_g1_ParamLimits

0xcabf,	// (0x0003bf19) popup_fep_vkb2_window_g1

0xcb0f,	// (0x0003bf69) vkb2_area_bottom_pane_ParamLimits

0xcb0f,	// (0x0003bf69) vkb2_area_bottom_pane

0xcb63,	// (0x0003bfbd) vkb2_area_keypad_pane_ParamLimits

0xcb63,	// (0x0003bfbd) vkb2_area_keypad_pane

0xcbab,	// (0x0003c005) vkb2_area_top_pane_ParamLimits

0xcbab,	// (0x0003c005) vkb2_area_top_pane

0xcc31,	// (0x0003c08b) vkb2_top_entry_pane_ParamLimits

0xcc31,	// (0x0003c08b) vkb2_top_entry_pane

0xcc5e,	// (0x0003c0b8) vkb2_top_grid_left_pane_ParamLimits

0xcc5e,	// (0x0003c0b8) vkb2_top_grid_left_pane

0xcc7e,	// (0x0003c0d8) vkb2_top_grid_right_pane_ParamLimits

0xcc7e,	// (0x0003c0d8) vkb2_top_grid_right_pane

0x23b7,	// (0x00031811) vkb2_cell_keypad_pane_ParamLimits

0x23b7,	// (0x00031811) vkb2_cell_keypad_pane

0xccc4,	// (0x0003c11e) vkb2_area_bottom_grid_pane_ParamLimits

0xccc4,	// (0x0003c11e) vkb2_area_bottom_grid_pane

0xccee,	// (0x0003c148) vkb2_area_bottom_pane_g1_ParamLimits

0xccee,	// (0x0003c148) vkb2_area_bottom_pane_g1

0xcd14,	// (0x0003c16e) vkb2_area_bottom_pane_g2_ParamLimits

0xcd14,	// (0x0003c16e) vkb2_area_bottom_pane_g2

0xcd45,	// (0x0003c19f) vkb2_area_bottom_pane_g3_ParamLimits

0xcd45,	// (0x0003c19f) vkb2_area_bottom_pane_g3

0x0002,

0xfd82,	// (0x0003f1dc) vkb2_area_bottom_pane_g_ParamLimits

0xfd82,	// (0x0003f1dc) vkb2_area_bottom_pane_g

0x2561,	// (0x000319bb) vkb2_top_cell_left_pane_ParamLimits

0x2561,	// (0x000319bb) vkb2_top_cell_left_pane

0xede9,	// (0x0003e243) vkb2_top_entry_pane_g1_ParamLimits

0xede9,	// (0x0003e243) vkb2_top_entry_pane_g1

0xedf7,	// (0x0003e251) vkb2_top_entry_pane_t1_ParamLimits

0xedf7,	// (0x0003e251) vkb2_top_entry_pane_t1

0x988c,	// (0x00038ce6) vkb2_top_entry_pane_t2_ParamLimits

0x988c,	// (0x00038ce6) vkb2_top_entry_pane_t2

0x98be,	// (0x00038d18) vkb2_top_entry_pane_t3_ParamLimits

0x98be,	// (0x00038d18) vkb2_top_entry_pane_t3

0x0002,

0xfd89,	// (0x0003f1e3) vkb2_top_entry_pane_t_ParamLimits

0xfd89,	// (0x0003f1e3) vkb2_top_entry_pane_t

0xcdaf,	// (0x0003c209) vkb2_top_grid_right_pane_g1_ParamLimits

0xcdaf,	// (0x0003c209) vkb2_top_grid_right_pane_g1

0x25c4,	// (0x00031a1e) vkb2_top_grid_right_pane_g2_ParamLimits

0x25c4,	// (0x00031a1e) vkb2_top_grid_right_pane_g2

0x25dc,	// (0x00031a36) vkb2_top_grid_right_pane_g3_ParamLimits

0x25dc,	// (0x00031a36) vkb2_top_grid_right_pane_g3

0xcdc5,	// (0x0003c21f) vkb2_top_grid_right_pane_g4_ParamLimits

0xcdc5,	// (0x0003c21f) vkb2_top_grid_right_pane_g4

0x0003,

0xfd90,	// (0x0003f1ea) vkb2_top_grid_right_pane_g_ParamLimits

0xfd90,	// (0x0003f1ea) vkb2_top_grid_right_pane_g

0x260a,	// (0x00031a64) vkb2_top_cell_left_pane_g1

0x2621,	// (0x00031a7b) vkb2_cell_keypad_pane_g1_ParamLimits

0x2621,	// (0x00031a7b) vkb2_cell_keypad_pane_g1

0x98e2,	// (0x00038d3c) vkb2_cell_keypad_pane_t1_ParamLimits

0x98e2,	// (0x00038d3c) vkb2_cell_keypad_pane_t1

0x262f,	// (0x00031a89) vkb2_cell_bottom_grid_pane_ParamLimits

0x262f,	// (0x00031a89) vkb2_cell_bottom_grid_pane

0x2668,	// (0x00031ac2) vkb2_cell_bottom_grid_pane_g1

0xeaa8,	// (0x0003df02) aid_call2_pane_cp02

0xeab0,	// (0x0003df0a) aid_call_pane_cp02

0xeab8,	// (0x0003df12) clock_digital_number_pane_cp10

0xeac0,	// (0x0003df1a) clock_digital_number_pane_cp11

0xeac8,	// (0x0003df22) clock_digital_number_pane_cp12

0xead0,	// (0x0003df2a) clock_digital_number_pane_cp13

0xead8,	// (0x0003df32) clock_digital_separator_pane_cp10

0x453e,	// (0x00033998) popup_clock_digital_analogue_window_cp2_g1

0x453e,	// (0x00033998) popup_clock_digital_analogue_window_cp2_g2

0xeae0,	// (0x0003df3a) popup_clock_digital_analogue_window_cp2_g3

0x453e,	// (0x00033998) popup_clock_digital_analogue_window_cp2_g4

0xeae0,	// (0x0003df3a) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd45,	// (0x0003f19f) popup_clock_digital_analogue_window_cp2_g

0xeae8,	// (0x0003df42) popup_clock_digital_analogue_window_cp2_t1

0xeaf6,	// (0x0003df50) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd50,	// (0x0003f1aa) popup_clock_digital_analogue_window_cp2_t

0x7999,	// (0x00036df3) clock_digital_number_pane_cp10_g1

0x7999,	// (0x00036df3) clock_digital_number_pane_cp10_g2

0x0001,

0xfb2c,	// (0x0003ef86) clock_digital_number_pane_cp10_g

0x7999,	// (0x00036df3) clock_digital_separator_pane_cp10_g1

0x7999,	// (0x00036df3) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb2c,	// (0x0003ef86) clock_digital_separator_pane_cp10_g

0x92e8,	// (0x00038742) uniindi_top_pane_g3

0x92f9,	// (0x00038753) uniindi_top_pane_g4

0x2442,	// (0x0003189c) vkb2_row_keypad_pane_ParamLimits

0x2442,	// (0x0003189c) vkb2_row_keypad_pane

0x2684,	// (0x00031ade) vkb2_cell_t_keypad_pane_ParamLimits

0x2684,	// (0x00031ade) vkb2_cell_t_keypad_pane

0x2694,	// (0x00031aee) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x2694,	// (0x00031aee) vkb2_cell_t_keypad_pane_cp08

0x26a7,	// (0x00031b01) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x26a7,	// (0x00031b01) vkb2_cell_t_keypad_pane_cp09

0x26bb,	// (0x00031b15) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x26bb,	// (0x00031b15) vkb2_cell_t_keypad_pane_cp01

0x26cc,	// (0x00031b26) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x26cc,	// (0x00031b26) vkb2_cell_t_keypad_pane_cp02

0x26dd,	// (0x00031b37) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x26dd,	// (0x00031b37) vkb2_cell_t_keypad_pane_cp03

0x26ee,	// (0x00031b48) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x26ee,	// (0x00031b48) vkb2_cell_t_keypad_pane_cp04

0x26ff,	// (0x00031b59) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x26ff,	// (0x00031b59) vkb2_cell_t_keypad_pane_cp05

0x2710,	// (0x00031b6a) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x2710,	// (0x00031b6a) vkb2_cell_t_keypad_pane_cp06

0x2721,	// (0x00031b7b) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x2721,	// (0x00031b7b) vkb2_cell_t_keypad_pane_cp07

0x2732,	// (0x00031b8c) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x2732,	// (0x00031b8c) vkb2_cell_t_keypad_pane_cp10

0x1ee8,	// (0x00031342) vkb2_cell_t_keypad_pane_g1

0x98f9,	// (0x00038d53) vkb2_cell_t_keypad_pane_t1

0x00da,	// (0x0002f534) popup_grid_graphic2_window

0xee30,	// (0x0003e28a) aid_size_cell_graphic2_ParamLimits

0xee30,	// (0x0003e28a) aid_size_cell_graphic2

0xee6e,	// (0x0003e2c8) bg_popup_window_pane_cp21_ParamLimits

0xee6e,	// (0x0003e2c8) bg_popup_window_pane_cp21

0xee7c,	// (0x0003e2d6) graphic2_pages_pane_ParamLimits

0xee7c,	// (0x0003e2d6) graphic2_pages_pane

0xeed2,	// (0x0003e32c) grid_graphic2_control_pane_ParamLimits

0xeed2,	// (0x0003e32c) grid_graphic2_control_pane

0xef27,	// (0x0003e381) grid_graphic2_pane_ParamLimits

0xef27,	// (0x0003e381) grid_graphic2_pane

0xefae,	// (0x0003e408) cell_graphic2_pane

0x00da,	// (0x0002f534) main_comp_mode_pane

0x8b56,	// (0x00037fb0) list_ai3_gene_pane_ParamLimits

0xe7ef,	// (0x0003dc49) bg_popup_window_pane_cp19_ParamLimits

0x8f36,	// (0x00038390) bg_touch_area_indi_pane_ParamLimits

0x8f36,	// (0x00038390) bg_touch_area_indi_pane

0x8f4c,	// (0x000383a6) bg_touch_area_indi_pane_cp01_ParamLimits

0x8f4c,	// (0x000383a6) bg_touch_area_indi_pane_cp01

0x8f62,	// (0x000383bc) bg_touch_area_indi_pane_cp02_ParamLimits

0x8f62,	// (0x000383bc) bg_touch_area_indi_pane_cp02

0x8f78,	// (0x000383d2) bg_touch_area_indi_pane_cp03_ParamLimits

0x8f78,	// (0x000383d2) bg_touch_area_indi_pane_cp03

0x8f92,	// (0x000383ec) popup_slider_window_g1_ParamLimits

0x8fae,	// (0x00038408) popup_slider_window_g2_ParamLimits

0x8fca,	// (0x00038424) popup_slider_window_g3_ParamLimits

0xfcda,	// (0x0003f134) popup_slider_window_g_ParamLimits

0x9030,	// (0x0003848a) popup_slider_window_t1_ParamLimits

0x90a4,	// (0x000384fe) small_volume_slider_vertical_pane_ParamLimits

0xefae,	// (0x0003e408) cell_graphic2_pane_ParamLimits

0xf009,	// (0x0003e463) bg_button_pane_cp10_ParamLimits

0xf009,	// (0x0003e463) bg_button_pane_cp10

0xf01c,	// (0x0003e476) bg_button_pane_cp11_ParamLimits

0xf01c,	// (0x0003e476) bg_button_pane_cp11

0xf02f,	// (0x0003e489) graphic2_pages_pane_g1_ParamLimits

0xf02f,	// (0x0003e489) graphic2_pages_pane_g1

0xf04a,	// (0x0003e4a4) graphic2_pages_pane_g2_ParamLimits

0xf04a,	// (0x0003e4a4) graphic2_pages_pane_g2

0x0001,

0xfd9e,	// (0x0003f1f8) graphic2_pages_pane_g_ParamLimits

0xfd9e,	// (0x0003f1f8) graphic2_pages_pane_g

0xf062,	// (0x0003e4bc) graphic2_pages_pane_t1_ParamLimits

0xf062,	// (0x0003e4bc) graphic2_pages_pane_t1

0xf07a,	// (0x0003e4d4) cell_graphic2_control_pane_ParamLimits

0xf07a,	// (0x0003e4d4) cell_graphic2_control_pane

0xf0ac,	// (0x0003e506) cell_graphic2_pane_g1_ParamLimits

0xf0ac,	// (0x0003e506) cell_graphic2_pane_g1

0xe4a8,	// (0x0003d902) cell_graphic2_pane_g2_ParamLimits

0xe4a8,	// (0x0003d902) cell_graphic2_pane_g2

0xef1a,	// (0x0003e374) cell_graphic2_pane_g3_ParamLimits

0xef1a,	// (0x0003e374) cell_graphic2_pane_g3

0xe4b5,	// (0x0003d90f) cell_graphic2_pane_g4_ParamLimits

0xe4b5,	// (0x0003d90f) cell_graphic2_pane_g4

0xf0b9,	// (0x0003e513) cell_graphic2_pane_g5_ParamLimits

0xf0b9,	// (0x0003e513) cell_graphic2_pane_g5

0x0004,

0xfda3,	// (0x0003f1fd) cell_graphic2_pane_g_ParamLimits

0xfda3,	// (0x0003f1fd) cell_graphic2_pane_g

0xf0d9,	// (0x0003e533) cell_graphic2_pane_t1_ParamLimits

0xf0d9,	// (0x0003e533) cell_graphic2_pane_t1

0x60a0,	// (0x000354fa) grid_highlight_pane_cp11_ParamLimits

0x60a0,	// (0x000354fa) grid_highlight_pane_cp11

0x38b0,	// (0x00032d0a) bg_button_pane_cp05

0xf122,	// (0x0003e57c) cell_graphic2_control_pane_g1

0x7999,	// (0x00036df3) bg_touch_area_indi_pane_g1

0x9bd5,	// (0x0003902f) aid_cmod_rocker_key_size

0x9bdf,	// (0x00039039) aid_cmode_itu_key_size

0x9be9,	// (0x00039043) main_cmode_video_pane

0x9bf3,	// (0x0003904d) main_comp_mode_itu_pane

0x9bff,	// (0x00039059) main_comp_mode_rocker_pane

0x9c0b,	// (0x00039065) cell_cmode_rocker_pane_ParamLimits

0x9c0b,	// (0x00039065) cell_cmode_rocker_pane

0x9c1d,	// (0x00039077) cell_cmode_itu_pane_ParamLimits

0x9c1d,	// (0x00039077) cell_cmode_itu_pane

0x3ebc,	// (0x00033316) bg_button_pane_cp06_ParamLimits

0x3ebc,	// (0x00033316) bg_button_pane_cp06

0x7c23,	// (0x0003707d) cell_cmode_rocker_pane_g1_ParamLimits

0x7c23,	// (0x0003707d) cell_cmode_rocker_pane_g1

0x9148,	// (0x000385a2) cell_cmode_rocker_pane_g2_ParamLimits

0x9148,	// (0x000385a2) cell_cmode_rocker_pane_g2

0x0001,

0xfdb3,	// (0x0003f20d) cell_cmode_rocker_pane_g_ParamLimits

0xfdb3,	// (0x0003f20d) cell_cmode_rocker_pane_g

0x2cab,	// (0x00032105) bg_button_pane_cp07

0x9c32,	// (0x0003908c) cell_cmode_itu_pane_g1

0x9c3b,	// (0x00039095) cell_cmode_itu_pane_t1

0x9c49,	// (0x000390a3) cell_cmode_itu_pane_t2

0x0001,

0xfdb8,	// (0x0003f212) cell_cmode_itu_pane_t

0x936b,	// (0x000387c5) aid_touch_ctrl_left

0x9373,	// (0x000387cd) aid_touch_ctrl_right

0x2cab,	// (0x00032105) compa_mode_pane

0xf146,	// (0x0003e5a0) aid_cmod_rocker_key_size_cp

0xf150,	// (0x0003e5aa) aid_cmode_itu_key_size_cp

0x9c6b,	// (0x000390c5) compa_mode_pane_g1

0x9c73,	// (0x000390cd) compa_mode_pane_g2

0x9c7b,	// (0x000390d5) compa_mode_pane_g3

0x0002,

0xfdbd,	// (0x0003f217) compa_mode_pane_g

0xf15a,	// (0x0003e5b4) main_comp_mode_itu_pane_cp

0xf162,	// (0x0003e5bc) main_comp_mode_rocker_pane_cp

0xf16a,	// (0x0003e5c4) cell_cmode_itu_pane_cp_ParamLimits

0xf16a,	// (0x0003e5c4) cell_cmode_itu_pane_cp

0xf17f,	// (0x0003e5d9) cell_cmode_rocker_pane_cp_ParamLimits

0xf17f,	// (0x0003e5d9) cell_cmode_rocker_pane_cp

0x3ebc,	// (0x00033316) bg_button_pane_cp06_cp_ParamLimits

0x3ebc,	// (0x00033316) bg_button_pane_cp06_cp

0x7c23,	// (0x0003707d) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x7c23,	// (0x0003707d) cell_cmode_rocker_pane_g1_cp

0x7999,	// (0x00036df3) cell_cmode_rocker_pane_g2_cp

0x2cab,	// (0x00032105) bg_button_pane_cp07_cp

0xf191,	// (0x0003e5eb) cell_cmode_itu_pane_g1_cp

0xf19a,	// (0x0003e5f4) cell_cmode_itu_pane_t1_cp

0xf19a,	// (0x0003e5f4) cell_cmode_itu_pane_t2_cp

0xde28,	// (0x0003d282) settings_code_pane_cp2

0x2d9f,	// (0x000321f9) bg_popup_window_pane_cp3_ParamLimits

0x3ab0,	// (0x00032f0a) heading_pane_cp3_ParamLimits

0x3abc,	// (0x00032f16) listscroll_popup_graphic_pane_ParamLimits

0x1c91,	// (0x000310eb) fep_hwr_aid_pane_ParamLimits

0x2108,	// (0x00031562) aid_touch_sctrl_top_ParamLimits

0x2123,	// (0x0003157d) sctrl_sk_top_pane_g1_ParamLimits

0x1ee8,	// (0x00031342) sctrl_sk_top_pane_g2_ParamLimits

0xfcf3,	// (0x0003f14d) sctrl_sk_top_pane_g_ParamLimits

0x2130,	// (0x0003158a) sctrl_sk_top_pane_t1_ParamLimits

0x2108,	// (0x00031562) aid_touch_sctrl_bottom_ParamLimits

0x2130,	// (0x0003158a) sctrl_sk_bottom_pane_t1_ParamLimits

0x92b4,	// (0x0003870e) aid_area_touch_clock

0xcbf3,	// (0x0003c04d) aid_vkb2_area_top_pane_cell_ParamLimits

0xcbf3,	// (0x0003c04d) aid_vkb2_area_top_pane_cell

0xcc9e,	// (0x0003c0f8) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xcc9e,	// (0x0003c0f8) aid_vkb2_area_bottom_pane_cell

0x9844,	// (0x00038c9e) popup_char_count_window

0x9cc8,	// (0x00039122) popup_char_count_window_g1

0x9cd1,	// (0x0003912b) popup_char_count_window_g2

0x9cda,	// (0x00039134) popup_char_count_window_g3

0x0002,

0xfdc4,	// (0x0003f21e) popup_char_count_window_g

0x9ce3,	// (0x0003913d) popup_char_count_window_t1

0x21df,	// (0x00031639) popup_fep_char_preview_window_ParamLimits

0x21df,	// (0x00031639) popup_fep_char_preview_window

0xcc13,	// (0x0003c06d) vkb2_top_candi_pane_ParamLimits

0xcc13,	// (0x0003c06d) vkb2_top_candi_pane

0xf1a8,	// (0x0003e602) cell_vkb2_top_candi_pane_ParamLimits

0xf1a8,	// (0x0003e602) cell_vkb2_top_candi_pane

0x2747,	// (0x00031ba1) bg_popup_fep_char_preview_window_ParamLimits

0x2747,	// (0x00031ba1) bg_popup_fep_char_preview_window

0x2755,	// (0x00031baf) popup_fep_char_preview_window_t1_ParamLimits

0x2755,	// (0x00031baf) popup_fep_char_preview_window_t1

0x9d3e,	// (0x00039198) bg_popup_fep_char_preview_window_g1

0x9d46,	// (0x000391a0) bg_popup_fep_char_preview_window_g2

0x9d4e,	// (0x000391a8) bg_popup_fep_char_preview_window_g3

0x9d56,	// (0x000391b0) bg_popup_fep_char_preview_window_g4

0x9d5e,	// (0x000391b8) bg_popup_fep_char_preview_window_g5

0x278f,	// (0x00031be9) bg_popup_fep_char_preview_window_g6

0x9d66,	// (0x000391c0) bg_popup_fep_char_preview_window_g7

0x9d6e,	// (0x000391c8) bg_popup_fep_char_preview_window_g8

0x9d76,	// (0x000391d0) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdcb,	// (0x0003f225) bg_popup_fep_char_preview_window_g

0x1ee8,	// (0x00031342) cell_vkb2_top_candi_pane_g1_ParamLimits

0x1ee8,	// (0x00031342) cell_vkb2_top_candi_pane_g1

0x1ef6,	// (0x00031350) cell_vkb2_top_candi_pane_g2_ParamLimits

0x1ef6,	// (0x00031350) cell_vkb2_top_candi_pane_g2

0x97fe,	// (0x00038c58) cell_vkb2_top_candi_pane_g3_ParamLimits

0x97fe,	// (0x00038c58) cell_vkb2_top_candi_pane_g3

0x2797,	// (0x00031bf1) cell_vkb2_top_candi_pane_g4_ParamLimits

0x2797,	// (0x00031bf1) cell_vkb2_top_candi_pane_g4

0x80ee,	// (0x00037548) cell_vkb2_top_candi_pane_g5_ParamLimits

0x80ee,	// (0x00037548) cell_vkb2_top_candi_pane_g5

0x27b8,	// (0x00031c12) cell_vkb2_top_candi_pane_g6_ParamLimits

0x27b8,	// (0x00031c12) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdde,	// (0x0003f238) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdde,	// (0x0003f238) cell_vkb2_top_candi_pane_g

0x27c6,	// (0x00031c20) cell_vkb2_top_candi_pane_t1

0x1af1,	// (0x00030f4b) aid_size_touch_slider_mark_ParamLimits

0x1af1,	// (0x00030f4b) aid_size_touch_slider_mark

0xeeb8,	// (0x0003e312) grid_graphic2_catg_pane_ParamLimits

0xeeb8,	// (0x0003e312) grid_graphic2_catg_pane

0xef81,	// (0x0003e3db) popup_grid_graphic2_window_t1_ParamLimits

0xef81,	// (0x0003e3db) popup_grid_graphic2_window_t1

0xef97,	// (0x0003e3f1) popup_grid_graphic2_window_t2_ParamLimits

0xef97,	// (0x0003e3f1) popup_grid_graphic2_window_t2

0x0001,

0xfd99,	// (0x0003f1f3) popup_grid_graphic2_window_t_ParamLimits

0xfd99,	// (0x0003f1f3) popup_grid_graphic2_window_t

0x38b0,	// (0x00032d0a) bg_button_pane_cp05_ParamLimits

0xf122,	// (0x0003e57c) cell_graphic2_control_pane_g1_ParamLimits

0xf20e,	// (0x0003e668) cell_graphic2_catg_pane_ParamLimits

0xf20e,	// (0x0003e668) cell_graphic2_catg_pane

0x2cab,	// (0x00032105) bg_button_pane_cp12

0xf220,	// (0x0003e67a) cell_graphic2_catg_pane_g1

0x9280,	// (0x000386da) cell_tb_ext_pane_t1_ParamLimits

0x2581,	// (0x000319db) vkb2_top_cell_right_narrow_pane_ParamLimits

0x2581,	// (0x000319db) vkb2_top_cell_right_narrow_pane

0x2599,	// (0x000319f3) vkb2_top_cell_right_wide_pane_ParamLimits

0x2599,	// (0x000319f3) vkb2_top_cell_right_wide_pane

0x1c83,	// (0x000310dd) bg_vkb2_func_pane_ParamLimits

0x1c83,	// (0x000310dd) bg_vkb2_func_pane

0x260a,	// (0x00031a64) vkb2_top_cell_left_pane_g1_ParamLimits

0x1c83,	// (0x000310dd) bg_vkb2_fuc_pane_cp03_ParamLimits

0x1c83,	// (0x000310dd) bg_vkb2_fuc_pane_cp03

0x2668,	// (0x00031ac2) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x53a1,	// (0x000347fb) bg_vkb2_func_pane_g1

0x53a9,	// (0x00034803) bg_vkb2_func_pane_g2

0x53b9,	// (0x00034813) bg_vkb2_func_pane_g3

0x53b1,	// (0x0003480b) bg_vkb2_func_pane_g4

0x53c1,	// (0x0003481b) bg_vkb2_func_pane_g5

0x53c9,	// (0x00034823) bg_vkb2_func_pane_g6

0x53d1,	// (0x0003482b) bg_vkb2_func_pane_g7

0x53d9,	// (0x00034833) bg_vkb2_func_pane_g8

0x5399,	// (0x000347f3) bg_vkb2_func_pane_g9

0x0008,

0xfdeb,	// (0x0003f245) bg_vkb2_func_pane_g

0x1c83,	// (0x000310dd) bg_vkb2_fuc_pane_cp01_ParamLimits

0x1c83,	// (0x000310dd) bg_vkb2_fuc_pane_cp01

0x260a,	// (0x00031a64) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x260a,	// (0x00031a64) vkb2_top_cell_right_wide_pane_g1

0x1c83,	// (0x000310dd) bg_vkb2_fuc_pane_cp02_ParamLimits

0x1c83,	// (0x000310dd) bg_vkb2_fuc_pane_cp02

0x2668,	// (0x00031ac2) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x2668,	// (0x00031ac2) vkb2_top_cell_right_narrow_pane_g1

0xe731,	// (0x0003db8b) aid_touch_area_decrease_ParamLimits

0xe731,	// (0x0003db8b) aid_touch_area_decrease

0xe76b,	// (0x0003dbc5) aid_touch_area_increase_ParamLimits

0xe76b,	// (0x0003dbc5) aid_touch_area_increase

0xe793,	// (0x0003dbed) aid_touch_area_mute_ParamLimits

0xe793,	// (0x0003dbed) aid_touch_area_mute

0xe7bb,	// (0x0003dc15) aid_touch_area_slider_ParamLimits

0xe7bb,	// (0x0003dc15) aid_touch_area_slider

0xe7fb,	// (0x0003dc55) popup_slider_window_g4_ParamLimits

0xe7fb,	// (0x0003dc55) popup_slider_window_g4

0xe823,	// (0x0003dc7d) popup_slider_window_g5_ParamLimits

0xe823,	// (0x0003dc7d) popup_slider_window_g5

0xe857,	// (0x0003dcb1) popup_slider_window_g6_ParamLimits

0xe857,	// (0x0003dcb1) popup_slider_window_g6

0x905e,	// (0x000384b8) popup_slider_window_t2_ParamLimits

0x905e,	// (0x000384b8) popup_slider_window_t2

0x0001,

0xfce7,	// (0x0003f141) popup_slider_window_t_ParamLimits

0xfce7,	// (0x0003f141) popup_slider_window_t

0xe873,	// (0x0003dccd) slider_pane_ParamLimits

0xe873,	// (0x0003dccd) slider_pane

0x9d99,	// (0x000391f3) slider_pane_g1_ParamLimits

0x9d99,	// (0x000391f3) slider_pane_g1

0x9dad,	// (0x00039207) slider_pane_g2_ParamLimits

0x9dad,	// (0x00039207) slider_pane_g2

0x9dc3,	// (0x0003921d) slider_pane_g3_ParamLimits

0x9dc3,	// (0x0003921d) slider_pane_g3

0x0003,

0xfdfe,	// (0x0003f258) slider_pane_g_ParamLimits

0xfdfe,	// (0x0003f258) slider_pane_g

0xc63b,	// (0x0003ba95) popup_tb_float_extension_window_ParamLimits

0xc63b,	// (0x0003ba95) popup_tb_float_extension_window

0x9def,	// (0x00039249) aid_size_cell_tb_float_ext

0x2cab,	// (0x00032105) bg_popup_sub_window_cp28

0x9dfb,	// (0x00039255) grid_tb_float_ext_pane

0x9e05,	// (0x0003925f) cell_tb_float_ext_pane_ParamLimits

0x9e05,	// (0x0003925f) cell_tb_float_ext_pane

0x9e1f,	// (0x00039279) cell_tb_float_ext_pane_g1

0x9e28,	// (0x00039282) grid_highlight_pane_cp12

0xc813,	// (0x0003bc6d) cell_last_hwr_side_pane_ParamLimits

0xc813,	// (0x0003bc6d) cell_last_hwr_side_pane

0x7999,	// (0x00036df3) cell_last_hwr_side_pane_g1

0x9e31,	// (0x0003928b) cell_last_hwr_side_pane_g2

0x0001,

0xfe07,	// (0x0003f261) cell_last_hwr_side_pane_g

0xcd7a,	// (0x0003c1d4) vkb2_area_bottom_space_btn_pane_ParamLimits

0xcd7a,	// (0x0003c1d4) vkb2_area_bottom_space_btn_pane

0x1ee8,	// (0x00031342) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x98f9,	// (0x00038d53) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x27c6,	// (0x00031c20) cell_vkb2_top_candi_pane_t1_ParamLimits

0x27e5,	// (0x00031c3f) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x27e5,	// (0x00031c3f) vkb2_area_bottom_space_btn_pane_g1

0x281f,	// (0x00031c79) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x281f,	// (0x00031c79) vkb2_area_bottom_space_btn_pane_g2

0x2855,	// (0x00031caf) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x2855,	// (0x00031caf) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe0c,	// (0x0003f266) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe0c,	// (0x0003f266) vkb2_area_bottom_space_btn_pane_g

0x1d46,	// (0x000311a0) cel_fep_hwr_func_pane_ParamLimits

0x1d46,	// (0x000311a0) cel_fep_hwr_func_pane

0xc7e8,	// (0x0003bc42) cell_hwr_side_button_pane_ParamLimits

0xc7e8,	// (0x0003bc42) cell_hwr_side_button_pane

0x92b4,	// (0x0003870e) aid_area_touch_clock_ParamLimits

0x38b0,	// (0x00032d0a) bg_uniindi_top_pane_ParamLimits

0x92c6,	// (0x00038720) uniindi_top_pane_g1_ParamLimits

0x92dc,	// (0x00038736) uniindi_top_pane_g2_ParamLimits

0x92e8,	// (0x00038742) uniindi_top_pane_g3_ParamLimits

0x92f9,	// (0x00038753) uniindi_top_pane_g4_ParamLimits

0xfd1f,	// (0x0003f179) uniindi_top_pane_g_ParamLimits

0x9306,	// (0x00038760) uniindi_top_pane_t1_ParamLimits

0x38b0,	// (0x00032d0a) bg_vkb2_func_pane_cp01_ParamLimits

0x38b0,	// (0x00032d0a) bg_vkb2_func_pane_cp01

0x9e3a,	// (0x00039294) cel_fep_hwr_func_pane_g1_ParamLimits

0x9e3a,	// (0x00039294) cel_fep_hwr_func_pane_g1

0x38b0,	// (0x00032d0a) bg_vkb2_func_pane_cp02_ParamLimits

0x38b0,	// (0x00032d0a) bg_vkb2_func_pane_cp02

0x9e3a,	// (0x00039294) cell_hwr_side_button_pane_g1_ParamLimits

0x9e3a,	// (0x00039294) cell_hwr_side_button_pane_g1

0x521a,	// (0x00034674) status_pane_g4_ParamLimits

0x521a,	// (0x00034674) status_pane_g4

0x5234,	// (0x0003468e) status_pane_t1

0x76de,	// (0x00036b38) form2_midp_gauge_slider_cont_pane

0x76e6,	// (0x00036b40) form2_midp_gauge_slider_pane_t1_ParamLimits

0xe0f7,	// (0x0003d551) form2_midp_gauge_slider_pane_t2_ParamLimits

0xe109,	// (0x0003d563) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfadf,	// (0x0003ef39) form2_midp_gauge_slider_pane_t_ParamLimits

0x771c,	// (0x00036b76) form2_midp_slider_pane_ParamLimits

0x219f,	// (0x000315f9) aid_size_cell_func_vkb2_ParamLimits

0x219f,	// (0x000315f9) aid_size_cell_func_vkb2

0x9ddb,	// (0x00039235) slider_pane_g4_ParamLimits

0x9ddb,	// (0x00039235) slider_pane_g4

0xcddb,	// (0x0003c235) form2_midp_gauge_slider_pane_t2_cp01

0xcde9,	// (0x0003c243) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xcde9,	// (0x0003c243) form2_midp_gauge_slider_pane_t3_cp01

0x28ca,	// (0x00031d24) form2_midp_slider_pane_cp01

0x2cab,	// (0x00032105) navi_smil_pane

0x9e73,	// (0x000392cd) navi_smil_pane_g1

0x9e7b,	// (0x000392d5) navi_smil_pane_t1

0x9e48,	// (0x000392a2) form2_midp_slider_pane_g1

0x9e51,	// (0x000392ab) form2_midp_slider_pane_g2

0x9e59,	// (0x000392b3) form2_midp_slider_pane_g3

0x9e48,	// (0x000392a2) form2_midp_slider_pane_g4

0xf229,	// (0x0003e683) form2_midp_slider_pane_g5

0x0004,

0xfe15,	// (0x0003f26f) form2_midp_slider_pane_g

0x288f,	// (0x00031ce9) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x288f,	// (0x00031ce9) vkb2_area_bottom_space_btn_pane_g4

0xd80d,	// (0x0003cc67) lc0_navi_pane_ParamLimits

0xd80d,	// (0x0003cc67) lc0_navi_pane

0xd877,	// (0x0003ccd1) lc0_stat_indi_pane_ParamLimits

0xd877,	// (0x0003ccd1) lc0_stat_indi_pane

0xd88c,	// (0x0003cce6) ls0_title_pane_ParamLimits

0xd88c,	// (0x0003cce6) ls0_title_pane

0x3ebc,	// (0x00033316) bg_popup_sub_pane_cp14_ParamLimits

0x929b,	// (0x000386f5) list_uniindi_pane_ParamLimits

0x92a7,	// (0x00038701) uniindi_top_pane_ParamLimits

0x9343,	// (0x0003879d) list_single_uniindi_pane_g1_ParamLimits

0x9356,	// (0x000387b0) list_single_uniindi_pane_t1_ParamLimits

0xce06,	// (0x0003c260) lc0_stat_clock_pane_ParamLimits

0xce06,	// (0x0003c260) lc0_stat_clock_pane

0xf234,	// (0x0003e68e) lc0_stat_indi_pane_g1_ParamLimits

0xf234,	// (0x0003e68e) lc0_stat_indi_pane_g1

0xf241,	// (0x0003e69b) lc0_stat_indi_pane_g2_ParamLimits

0xf241,	// (0x0003e69b) lc0_stat_indi_pane_g2

0x0001,

0xfe20,	// (0x0003f27a) lc0_stat_indi_pane_g_ParamLimits

0xfe20,	// (0x0003f27a) lc0_stat_indi_pane_g

0xce13,	// (0x0003c26d) lc0_uni_indicator_pane_ParamLimits

0xce13,	// (0x0003c26d) lc0_uni_indicator_pane

0xf24e,	// (0x0003e6a8) ls0_title_pane_g1_ParamLimits

0xf24e,	// (0x0003e6a8) ls0_title_pane_g1

0xf262,	// (0x0003e6bc) ls0_title_pane_t1_ParamLimits

0xf262,	// (0x0003e6bc) ls0_title_pane_t1

0xce20,	// (0x0003c27a) lc0_uni_indicator_pane_g1_ParamLimits

0xce20,	// (0x0003c27a) lc0_uni_indicator_pane_g1

0x9eed,	// (0x00039347) lc0_stat_clock_pane_t1

0x00da,	// (0x0002f534) main_ai5_pane

0x9efb,	// (0x00039355) ai5_sk_pane_ParamLimits

0x9efb,	// (0x00039355) ai5_sk_pane

0xf290,	// (0x0003e6ea) cell_ai5_widget_pane_ParamLimits

0xf290,	// (0x0003e6ea) cell_ai5_widget_pane

0x9fc3,	// (0x0003941d) aid_size_cell_widget_grid

0x9fd9,	// (0x00039433) bg_ai5_widget_pane_ParamLimits

0x9fd9,	// (0x00039433) bg_ai5_widget_pane

0xa051,	// (0x000394ab) cell_ai5_widget_pane_g2

0xa065,	// (0x000394bf) cell_ai5_widget_pane_g3

0xa07f,	// (0x000394d9) cell_ai5_widget_pane_g4

0xa08f,	// (0x000394e9) cell_ai5_widget_pane_g5

0xa09f,	// (0x000394f9) cell_ai5_widget_pane_g6

0xa0ab,	// (0x00039505) cell_ai5_widget_pane_g7

0xa0f3,	// (0x0003954d) cell_ai5_widget_pane_t1_ParamLimits

0xa0f3,	// (0x0003954d) cell_ai5_widget_pane_t1

0xa110,	// (0x0003956a) cell_ai5_widget_pane_t2_ParamLimits

0xa110,	// (0x0003956a) cell_ai5_widget_pane_t2

0xa128,	// (0x00039582) cell_ai5_widget_pane_t3_ParamLimits

0xa128,	// (0x00039582) cell_ai5_widget_pane_t3

0xa140,	// (0x0003959a) cell_ai5_widget_pane_t4_ParamLimits

0xa140,	// (0x0003959a) cell_ai5_widget_pane_t4

0xa166,	// (0x000395c0) cell_ai5_widget_pane_t5_ParamLimits

0xa166,	// (0x000395c0) cell_ai5_widget_pane_t5

0xa186,	// (0x000395e0) cell_ai5_widget_pane_t6_ParamLimits

0xa186,	// (0x000395e0) cell_ai5_widget_pane_t6

0xa198,	// (0x000395f2) cell_ai5_widget_pane_t7_ParamLimits

0xa198,	// (0x000395f2) cell_ai5_widget_pane_t7

0xa1b1,	// (0x0003960b) cell_ai5_widget_pane_t8_ParamLimits

0xa1b1,	// (0x0003960b) cell_ai5_widget_pane_t8

0x0009,

0xfe3a,	// (0x0003f294) cell_ai5_widget_pane_t_ParamLimits

0xfe3a,	// (0x0003f294) cell_ai5_widget_pane_t

0xa210,	// (0x0003966a) grid_ai5_widget_pane

0x3ebc,	// (0x00033316) highlight_cell_ai5_widget_pane_ParamLimits

0x3ebc,	// (0x00033316) highlight_cell_ai5_widget_pane

0xf2f6,	// (0x0003e750) ai5_sk_left_pane

0xf300,	// (0x0003e75a) ai5_sk_middle_pane

0xf30a,	// (0x0003e764) ai5_sk_right_pane

0xa245,	// (0x0003969f) bg_ai5_widget_pane_g1_ParamLimits

0xa245,	// (0x0003969f) bg_ai5_widget_pane_g1

0xa251,	// (0x000396ab) bg_ai5_widget_pane_g2_ParamLimits

0xa251,	// (0x000396ab) bg_ai5_widget_pane_g2

0xa25d,	// (0x000396b7) bg_ai5_widget_pane_g3_ParamLimits

0xa25d,	// (0x000396b7) bg_ai5_widget_pane_g3

0xa269,	// (0x000396c3) bg_ai5_widget_pane_g4_ParamLimits

0xa269,	// (0x000396c3) bg_ai5_widget_pane_g4

0xa275,	// (0x000396cf) bg_ai5_widget_pane_g5_ParamLimits

0xa275,	// (0x000396cf) bg_ai5_widget_pane_g5

0xa281,	// (0x000396db) bg_ai5_widget_pane_g6_ParamLimits

0xa281,	// (0x000396db) bg_ai5_widget_pane_g6

0xa28d,	// (0x000396e7) bg_ai5_widget_pane_g7_ParamLimits

0xa28d,	// (0x000396e7) bg_ai5_widget_pane_g7

0xa299,	// (0x000396f3) bg_ai5_widget_pane_g8_ParamLimits

0xa299,	// (0x000396f3) bg_ai5_widget_pane_g8

0xa2a5,	// (0x000396ff) bg_ai5_widget_pane_g9_ParamLimits

0xa2a5,	// (0x000396ff) bg_ai5_widget_pane_g9

0x0008,

0xfe4f,	// (0x0003f2a9) bg_ai5_widget_pane_g_ParamLimits

0xfe4f,	// (0x0003f2a9) bg_ai5_widget_pane_g

0xa2d7,	// (0x00039731) cell_shortcut_ai5_widget_pane_ParamLimits

0xa2d7,	// (0x00039731) cell_shortcut_ai5_widget_pane

0x4b51,	// (0x00033fab) bg_cell_shortcut_ai5_widget_pane

0xa2e8,	// (0x00039742) cell_grid_ai5_widget_pane_g1

0x4b51,	// (0x00033fab) highlight_cell_shortcut_ai5_widget_pane

0x53a1,	// (0x000347fb) ai5_sk_left_pane_g1

0xa2f1,	// (0x0003974b) ai5_sk_left_pane_g2

0xa2f9,	// (0x00039753) ai5_sk_left_pane_g3

0xa301,	// (0x0003975b) ai5_sk_left_pane_g4

0x0003,

0xfe62,	// (0x0003f2bc) ai5_sk_left_pane_g

0xa309,	// (0x00039763) ai5_sk_left_pane_t1

0x53a9,	// (0x00034803) ai5_sk_right_pane_g1

0xa317,	// (0x00039771) ai5_sk_right_pane_g2

0xa31f,	// (0x00039779) ai5_sk_right_pane_g3

0xa327,	// (0x00039781) ai5_sk_right_pane_g4

0x0003,

0xfe6b,	// (0x0003f2c5) ai5_sk_right_pane_g

0xa32f,	// (0x00039789) ai5_sk_right_pane_t1

0x53a9,	// (0x00034803) ai5_sk_middle_pane_g1

0x53a1,	// (0x000347fb) ai5_sk_middle_pane_g2

0x53c1,	// (0x0003481b) ai5_sk_middle_pane_g3

0xa31f,	// (0x00039779) ai5_sk_middle_pane_g4

0xa2f9,	// (0x00039753) ai5_sk_middle_pane_g5

0xa33d,	// (0x00039797) ai5_sk_middle_pane_g6

0xf314,	// (0x0003e76e) ai5_sk_middle_pane_g7

0x0006,

0xfe74,	// (0x0003f2ce) ai5_sk_middle_pane_g

0xd6f9,	// (0x0003cb53) aid_touch_area_size_lc0_ParamLimits

0xd6f9,	// (0x0003cb53) aid_touch_area_size_lc0

0x1f17,	// (0x00031371) cell_hwr_candidate_pane_t1_ParamLimits

0x4ef1,	// (0x0003434b) aid_touch_navi_pane

0xd985,	// (0x0003cddf) status_dt_navi_pane_ParamLimits

0xd985,	// (0x0003cddf) status_dt_navi_pane

0xd99d,	// (0x0003cdf7) status_dt_sta_pane_ParamLimits

0xd99d,	// (0x0003cdf7) status_dt_sta_pane

0xf31c,	// (0x0003e776) dt_sta_controll_pane

0xf329,	// (0x0003e783) dt_sta_indi_pane

0xf336,	// (0x0003e790) dt_sta_title_pane

0x38b0,	// (0x00032d0a) bg_dt_sta_indi_pane_ParamLimits

0x38b0,	// (0x00032d0a) bg_dt_sta_indi_pane

0xf348,	// (0x0003e7a2) dt_sta_battery_pane

0xf350,	// (0x0003e7aa) dt_sta_indi_pane_g1

0xa38f,	// (0x000397e9) dt_sta_indi_pane_g2

0xa398,	// (0x000397f2) dt_sta_indi_pane_g3

0x0002,

0xfe83,	// (0x0003f2dd) dt_sta_indi_pane_g

0xa3a1,	// (0x000397fb) dt_sta_signal_pane

0x3ebc,	// (0x00033316) bg_dt_sta_title_pane_ParamLimits

0x3ebc,	// (0x00033316) bg_dt_sta_title_pane

0xa3aa,	// (0x00039804) dt_sta_title_pane_g1

0xa3b2,	// (0x0003980c) dt_sta_title_pane_t1_ParamLimits

0xa3b2,	// (0x0003980c) dt_sta_title_pane_t1

0x2cab,	// (0x00032105) bg_dt_sta_control_pane

0xf359,	// (0x0003e7b3) dt_sta_controll_pane_g1

0xa3d0,	// (0x0003982a) bg_dt_sta_title_pane_g1

0xa3d9,	// (0x00039833) bg_dt_sta_title_pane_g2

0xa3e2,	// (0x0003983c) bg_dt_sta_title_pane_g3

0x0002,

0xfe8a,	// (0x0003f2e4) bg_dt_sta_title_pane_g

0x7999,	// (0x00036df3) bg_dt_sta_indi_pane_g1

0xa3eb,	// (0x00039845) dt_sta_signal_pane_g1

0xa3f3,	// (0x0003984d) dt_sta_signal_pane_g2

0x0001,

0xfe91,	// (0x0003f2eb) dt_sta_signal_pane_g

0xa3fb,	// (0x00039855) dt_sta_battery_pane_g1

0xa404,	// (0x0003985e) dt_sta_battery_pane_t1

0x7999,	// (0x00036df3) bg_dt_sta_control_pane_g1

0x4650,	// (0x00033aaa) fep_china_uni_eep_pane

0x4658,	// (0x00033ab2) fep_china_uni_entry_pane_ParamLimits

0x4668,	// (0x00033ac2) popup_fep_china_uni_window_g1_ParamLimits

0x4678,	// (0x00033ad2) popup_fep_china_uni_window_g2_ParamLimits

0x4678,	// (0x00033ad2) popup_fep_china_uni_window_g2

0x0001,

0xf71d,	// (0x0003eb77) popup_fep_china_uni_window_g_ParamLimits

0xf71d,	// (0x0003eb77) popup_fep_china_uni_window_g

0xa413,	// (0x0003986d) fep_china_uni_eep_pane_g1

0xa41b,	// (0x00039875) fep_china_uni_eep_pane_t1

0x9e6a,	// (0x000392c4) aid_touch_area_size_smil_player

0x5041,	// (0x0003449b) lc0_clock_pane

0x5228,	// (0x00034682) status_pane_g5_ParamLimits

0x5228,	// (0x00034682) status_pane_g5

0xc1bd,	// (0x0003b617) popup_keymap_window

0x51e6,	// (0x00034640) status_icon_pane

0xa065,	// (0x000394bf) cell_ai5_widget_pane_g3_ParamLimits

0xa07f,	// (0x000394d9) cell_ai5_widget_pane_g4_ParamLimits

0xa08f,	// (0x000394e9) cell_ai5_widget_pane_g5_ParamLimits

0xa0b7,	// (0x00039511) cell_ai5_widget_pane_g8_ParamLimits

0xa0b7,	// (0x00039511) cell_ai5_widget_pane_g8

0xa0cb,	// (0x00039525) cell_ai5_widget_pane_g9_ParamLimits

0xa0cb,	// (0x00039525) cell_ai5_widget_pane_g9

0xa0df,	// (0x00039539) cell_ai5_widget_pane_g10_ParamLimits

0xa0df,	// (0x00039539) cell_ai5_widget_pane_g10

0xa42a,	// (0x00039884) status_icon_pane_g1

0x2cab,	// (0x00032105) bg_popup_sub_pane_cp13

0xa432,	// (0x0003988c) popup_keymap_window_t1

0xd687,	// (0x0003cae1) control_pane_g6_ParamLimits

0xd687,	// (0x0003cae1) control_pane_g6

0xd694,	// (0x0003caee) control_pane_g7_ParamLimits

0xd694,	// (0x0003caee) control_pane_g7

0xd6a1,	// (0x0003cafb) control_pane_g8_ParamLimits

0xd6a1,	// (0x0003cafb) control_pane_g8

0xf31c,	// (0x0003e776) dt_sta_controll_pane_ParamLimits

0xf329,	// (0x0003e783) dt_sta_indi_pane_ParamLimits

0xf336,	// (0x0003e790) dt_sta_title_pane_ParamLimits

0x3df4,	// (0x0003324e) aid_size_touch_scroll_bar_cale

0x01b3,	// (0x0002f60d) popup_discreet_window_ParamLimits

0x01b3,	// (0x0002f60d) popup_discreet_window

0xb7c0,	// (0x0003ac1a) popup_sk_window

0x5a20,	// (0x00034e7a) bg_popup_sub_pane_cp28_ParamLimits

0x5a20,	// (0x00034e7a) bg_popup_sub_pane_cp28

0xa440,	// (0x0003989a) popup_discreet_window_g1_ParamLimits

0xa440,	// (0x0003989a) popup_discreet_window_g1

0xa460,	// (0x000398ba) popup_discreet_window_t1_ParamLimits

0xa460,	// (0x000398ba) popup_discreet_window_t1

0xa47e,	// (0x000398d8) popup_discreet_window_t2_ParamLimits

0xa47e,	// (0x000398d8) popup_discreet_window_t2

0x0002,

0xfe96,	// (0x0003f2f0) popup_discreet_window_t_ParamLimits

0xfe96,	// (0x0003f2f0) popup_discreet_window_t

0x2901,	// (0x00031d5b) popup_sk_window_g1

0x290b,	// (0x00031d65) popup_sk_window_g2

0x0001,

0xfe9d,	// (0x0003f2f7) popup_sk_window_g

0x2913,	// (0x00031d6d) popup_sk_window_t1

0x2921,	// (0x00031d7b) popup_sk_window_t1_copy1

0xa051,	// (0x000394ab) cell_ai5_widget_pane_g2_ParamLimits

0xa1c3,	// (0x0003961d) cell_ai5_widget_pane_t9_ParamLimits

0xa1c3,	// (0x0003961d) cell_ai5_widget_pane_t9

0x2cab,	// (0x00032105) main_fep_fshwr2_pane

0xce47,	// (0x0003c2a1) aid_fshwr2_btn_pane

0xce5b,	// (0x0003c2b5) aid_fshwr2_syb_pane

0xce6f,	// (0x0003c2c9) aid_fshwr2_txt_pane

0xce7f,	// (0x0003c2d9) fshwr2_func_candi_pane

0xce9f,	// (0x0003c2f9) fshwr2_hwr_syb_pane

0xcec1,	// (0x0003c31b) fshwr2_icf_pane

0x00da,	// (0x0002f534) fshwr2_icf_bg_pane

0x29bb,	// (0x00031e15) fshwr2_icf_pane_t1_ParamLimits

0x29bb,	// (0x00031e15) fshwr2_icf_pane_t1

0x453e,	// (0x00033998) fshwr2_func_candi_pane_g1

0xf362,	// (0x0003e7bc) fshwr2_func_candi_row_pane_ParamLimits

0xf362,	// (0x0003e7bc) fshwr2_func_candi_row_pane

0xcef1,	// (0x0003c34b) cell_fshwr2_syb_pane_ParamLimits

0xcef1,	// (0x0003c34b) cell_fshwr2_syb_pane

0x29f4,	// (0x00031e4e) fshwr2_hwr_syb_pane_g1_ParamLimits

0x29f4,	// (0x00031e4e) fshwr2_hwr_syb_pane_g1

0x00da,	// (0x0002f534) bg_popup_call_pane_cp01

0xcf17,	// (0x0003c371) fshwr2_func_candi_cell_pane_ParamLimits

0xcf17,	// (0x0003c371) fshwr2_func_candi_cell_pane

0xf385,	// (0x0003e7df) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xf385,	// (0x0003e7df) fshwr2_func_candi_cell_bg_pane

0xcf62,	// (0x0003c3bc) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xcf62,	// (0x0003c3bc) fshwr2_func_candi_cell_pane_g1

0xcf99,	// (0x0003c3f3) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xcf99,	// (0x0003c3f3) fshwr2_func_candi_cell_pane_t1

0x00da,	// (0x0002f534) bg_button_pane_cp08

0xa501,	// (0x0003995b) cell_fshwr2_syb_bg_pane

0xcfb4,	// (0x0003c40e) cell_fshwr2_syb_bg_pane_g1

0xcfc7,	// (0x0003c421) cell_fshwr2_syb_bg_pane_t1

0x3ebc,	// (0x00033316) main_tmo_pane

0xdc5b,	// (0x0003d0b5) uni_indicator_pane_g1_ParamLimits

0xdc70,	// (0x0003d0ca) uni_indicator_pane_g2_ParamLimits

0xdc86,	// (0x0003d0e0) uni_indicator_pane_g3_ParamLimits

0x656f,	// (0x000359c9) uni_indicator_pane_g4_ParamLimits

0x656f,	// (0x000359c9) uni_indicator_pane_g4

0x6583,	// (0x000359dd) uni_indicator_pane_g5_ParamLimits

0x6583,	// (0x000359dd) uni_indicator_pane_g5

0x6583,	// (0x000359dd) uni_indicator_pane_g6_ParamLimits

0x6583,	// (0x000359dd) uni_indicator_pane_g6

0xf91c,	// (0x0003ed76) uni_indicator_pane_g_ParamLimits

0xe70d,	// (0x0003db67) popup_tmo_note_window_ParamLimits

0xe70d,	// (0x0003db67) popup_tmo_note_window

0x2181,	// (0x000315db) fshwr2_bg_pane

0xcf8a,	// (0x0003c3e4) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xcf8a,	// (0x0003c3e4) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfea2,	// (0x0003f2fc) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfea2,	// (0x0003f2fc) fshwr2_func_candi_cell_pane_g

0x1ed0,	// (0x0003132a) bg_popup_window_pane_cp01

0x2ab2,	// (0x00031f0c) bg_popup_window_pane_g1_cp01

0xa50d,	// (0x00039967) bg_popup_window_pane_cp22_ParamLimits

0xa50d,	// (0x00039967) bg_popup_window_pane_cp22

0xa51b,	// (0x00039975) listscroll_tmo_link_pane_ParamLimits

0xa51b,	// (0x00039975) listscroll_tmo_link_pane

0xa55b,	// (0x000399b5) popup_tmo_note_window_g1_ParamLimits

0xa55b,	// (0x000399b5) popup_tmo_note_window_g1

0xa568,	// (0x000399c2) tmo_note_info_pane_ParamLimits

0xa568,	// (0x000399c2) tmo_note_info_pane

0xf391,	// (0x0003e7eb) list_tmo_note_info_pane_g1_ParamLimits

0xf391,	// (0x0003e7eb) list_tmo_note_info_pane_g1

0xa599,	// (0x000399f3) list_tmo_note_info_pane_g2_ParamLimits

0xa599,	// (0x000399f3) list_tmo_note_info_pane_g2

0x0001,

0xfea7,	// (0x0003f301) list_tmo_note_info_pane_g_ParamLimits

0xfea7,	// (0x0003f301) list_tmo_note_info_pane_g

0xa5b5,	// (0x00039a0f) list_tmo_note_info_text_pane_ParamLimits

0xa5b5,	// (0x00039a0f) list_tmo_note_info_text_pane

0xa636,	// (0x00039a90) list_tmo_link_pane

0xa643,	// (0x00039a9d) scroll_pane_cp20

0xa650,	// (0x00039aaa) list_single_tmo_link_pane_ParamLimits

0xa650,	// (0x00039aaa) list_single_tmo_link_pane

0xa660,	// (0x00039aba) list_single_tmo_link_pane_t1

0xa66e,	// (0x00039ac8) list_tmo_note_info_text_pane_t1_ParamLimits

0xa66e,	// (0x00039ac8) list_tmo_note_info_text_pane_t1

0xd34f,	// (0x0003c7a9) aid_size_touch_scroll_bar_cp01_ParamLimits

0xd34f,	// (0x0003c7a9) aid_size_touch_scroll_bar_cp01

0xbd2b,	// (0x0003b185) aid_size_touch_slider_marker

0xb7b0,	// (0x0003ac0a) popup_settings_window_ParamLimits

0xb7b0,	// (0x0003ac0a) popup_settings_window

0x118a,	// (0x000305e4) popup_candi_list_indi_window

0x4ef1,	// (0x0003434b) aid_touch_navi_pane_ParamLimits

0x20dc,	// (0x00031536) rs_clock_indi_pane

0x20e5,	// (0x0003153f) sctrl_sk_bottom_pane_ParamLimits

0x20f6,	// (0x00031550) sctrl_sk_top_pane_ParamLimits

0x21f9,	// (0x00031653) popup_fep_tooltip_window

0x9fc3,	// (0x0003941d) aid_size_cell_widget_grid_ParamLimits

0xa03c,	// (0x00039496) cell_ai5_widget_pane_g1_ParamLimits

0xa03c,	// (0x00039496) cell_ai5_widget_pane_g1

0xa09f,	// (0x000394f9) cell_ai5_widget_pane_g6_ParamLimits

0xa0ab,	// (0x00039505) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe25,	// (0x0003f27f) cell_ai5_widget_pane_g_ParamLimits

0xfe25,	// (0x0003f27f) cell_ai5_widget_pane_g

0xa1f2,	// (0x0003964c) cell_ai5_widget_pane_t10_ParamLimits

0xa1f2,	// (0x0003964c) cell_ai5_widget_pane_t10

0xa210,	// (0x0003966a) grid_ai5_widget_pane_ParamLimits

0xa2b1,	// (0x0003970b) cell_contacts_ai5_widget_pane_ParamLimits

0xa2b1,	// (0x0003970b) cell_contacts_ai5_widget_pane

0xa493,	// (0x000398ed) popup_discreet_window_t3_ParamLimits

0xa493,	// (0x000398ed) popup_discreet_window_t3

0xcedd,	// (0x0003c337) popup_fshwr2_char_preview_window_ParamLimits

0xcedd,	// (0x0003c337) popup_fshwr2_char_preview_window

0xf3a8,	// (0x0003e802) tmo_note_info_pane_t1

0xf3bd,	// (0x0003e817) tmo_note_info_pane_t2

0xf3d4,	// (0x0003e82e) tmo_note_info_pane_t3

0xa612,	// (0x00039a6c) tmo_note_info_pane_t4

0xa624,	// (0x00039a7e) tmo_note_info_pane_t5

0x0004,

0xfeac,	// (0x0003f306) tmo_note_info_pane_t

0xa636,	// (0x00039a90) list_tmo_link_pane_ParamLimits

0xa643,	// (0x00039a9d) scroll_pane_cp20_ParamLimits

0x00da,	// (0x0002f534) bg_popup_fep_char_preview_window_cp01

0xa687,	// (0x00039ae1) popup_fshwr2_char_preview_window_t1

0xa695,	// (0x00039aef) popup_candi_list_indi_window_g1

0xa69e,	// (0x00039af8) bg_cell_contacts_ai5_widget_pane

0xa6aa,	// (0x00039b04) cell_contacts_ai5_widget_pane_g1

0x8043,	// (0x0003749d) cell_contacts_ai5_widget_pane_g2

0xa6bf,	// (0x00039b19) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeb7,	// (0x0003f311) cell_contacts_ai5_widget_pane_g

0xa6cb,	// (0x00039b25) cell_contacts_ai5_widget_pane_t1

0x3ebc,	// (0x00033316) highlight_cell_shortcut_ai5_widget_pane_cp01

0xa742,	// (0x00039b9c) settings_container_pane

0x4b51,	// (0x00033fab) listscroll_set_pane_copy1

0x70a9,	// (0x00036503) scroll_pane_cp121_copy1

0x57c5,	// (0x00034c1f) set_content_pane_copy1

0xa74e,	// (0x00039ba8) aid_height_set_list_copy1_ParamLimits

0xa74e,	// (0x00039ba8) aid_height_set_list_copy1

0x677b,	// (0x00035bd5) aid_size_parent_copy1_ParamLimits

0x677b,	// (0x00035bd5) aid_size_parent_copy1

0xa75a,	// (0x00039bb4) button_value_adjust_pane_cp6_copy1_ParamLimits

0xa75a,	// (0x00039bb4) button_value_adjust_pane_cp6_copy1

0x4e75,	// (0x000342cf) list_highlight_pane_cp2_copy1_ParamLimits

0x4e75,	// (0x000342cf) list_highlight_pane_cp2_copy1

0xa76e,	// (0x00039bc8) list_set_pane_copy1_ParamLimits

0xa76e,	// (0x00039bc8) list_set_pane_copy1

0xa6dd,	// (0x00039b37) main_pane_set_t1_copy1_ParamLimits

0xa6dd,	// (0x00039b37) main_pane_set_t1_copy1

0xa717,	// (0x00039b71) main_pane_set_t2_copy1_ParamLimits

0xa717,	// (0x00039b71) main_pane_set_t2_copy1

0xa81b,	// (0x00039c75) main_pane_set_t3_copy1

0xa829,	// (0x00039c83) main_pane_set_t4_copy1

0xa736,	// (0x00039b90) set_content_pane_g1_copy1_ParamLimits

0xa736,	// (0x00039b90) set_content_pane_g1_copy1

0xa837,	// (0x00039c91) setting_code_pane_copy1

0xa83f,	// (0x00039c99) setting_slider_graphic_pane_copy1

0xa83f,	// (0x00039c99) setting_slider_pane_copy1

0xa83f,	// (0x00039c99) setting_text_pane_copy1

0xa83f,	// (0x00039c99) setting_volume_pane_copy1

0xa837,	// (0x00039c91) settings_code_pane_cp2_copy1

0xa847,	// (0x00039ca1) settings_code_pane_cp_copy1_ParamLimits

0xa847,	// (0x00039ca1) settings_code_pane_cp_copy1

0x2abb,	// (0x00031f15) volume_set_pane_copy1

0xa85b,	// (0x00039cb5) volume_set_pane_g10_copy1

0xa863,	// (0x00039cbd) volume_set_pane_g1_copy1

0xa86b,	// (0x00039cc5) volume_set_pane_g2_copy1

0xa873,	// (0x00039ccd) volume_set_pane_g3_copy1

0xa87b,	// (0x00039cd5) volume_set_pane_g4_copy1

0xa883,	// (0x00039cdd) volume_set_pane_g5_copy1

0xa88b,	// (0x00039ce5) volume_set_pane_g6_copy1

0xa893,	// (0x00039ced) volume_set_pane_g7_copy1

0xa89b,	// (0x00039cf5) volume_set_pane_g8_copy1

0xa8a3,	// (0x00039cfd) volume_set_pane_g9_copy1

0x2d9f,	// (0x000321f9) bg_set_opt_pane_cp_copy1_ParamLimits

0x2d9f,	// (0x000321f9) bg_set_opt_pane_cp_copy1

0x2ac3,	// (0x00031f1d) setting_slider_pane_t1_copy1_ParamLimits

0x2ac3,	// (0x00031f1d) setting_slider_pane_t1_copy1

0x2ae1,	// (0x00031f3b) setting_slider_pane_t2_copy1_ParamLimits

0x2ae1,	// (0x00031f3b) setting_slider_pane_t2_copy1

0x2afb,	// (0x00031f55) setting_slider_pane_t3_copy1_ParamLimits

0x2afb,	// (0x00031f55) setting_slider_pane_t3_copy1

0x2b13,	// (0x00031f6d) slider_set_pane_copy1_ParamLimits

0x2b13,	// (0x00031f6d) slider_set_pane_copy1

0x3f14,	// (0x0003336e) set_opt_bg_pane_g1_copy2

0x3f1c,	// (0x00033376) set_opt_bg_pane_g2_copy2

0xa8ab,	// (0x00039d05) set_opt_bg_pane_g3_copy2

0x3f2c,	// (0x00033386) set_opt_bg_pane_g4_copy2

0x3f34,	// (0x0003338e) set_opt_bg_pane_g5_copy2

0x3f3c,	// (0x00033396) set_opt_bg_pane_g6_copy2

0xa8b5,	// (0x00039d0f) set_opt_bg_pane_g7_copy2

0xa8bd,	// (0x00039d17) set_opt_bg_pane_g8_copy2

0xa8c7,	// (0x00039d21) set_opt_bg_pane_g9_copy2

0x2b29,	// (0x00031f83) aid_size_touch_slider_mark_copy1_ParamLimits

0x2b29,	// (0x00031f83) aid_size_touch_slider_mark_copy1

0xa8d1,	// (0x00039d2b) slider_set_pane_g1_copy1

0x2b3d,	// (0x00031f97) slider_set_pane_g2_copy1

0x1b11,	// (0x00030f6b) slider_set_pane_g3_copy1_ParamLimits

0x1b11,	// (0x00030f6b) slider_set_pane_g3_copy1

0x1b25,	// (0x00030f7f) slider_set_pane_g4_copy1_ParamLimits

0x1b25,	// (0x00030f7f) slider_set_pane_g4_copy1

0x1b3d,	// (0x00030f97) slider_set_pane_g5_copy1_ParamLimits

0x1b3d,	// (0x00030f97) slider_set_pane_g5_copy1

0x1b11,	// (0x00030f6b) slider_set_pane_g6_copy1_ParamLimits

0x1b11,	// (0x00030f6b) slider_set_pane_g6_copy1

0x2b45,	// (0x00031f9f) slider_set_pane_g7_copy1_ParamLimits

0x2b45,	// (0x00031f9f) slider_set_pane_g7_copy1

0x2cbf,	// (0x00032119) bg_set_opt_pane_cp2_copy1

0xa8da,	// (0x00039d34) setting_slider_graphic_pane_g1_copy1

0xa8e3,	// (0x00039d3d) setting_slider_graphic_pane_t1_copy1

0xa8f3,	// (0x00039d4d) setting_slider_graphic_pane_t2_copy1

0xa903,	// (0x00039d5d) slider_set_pane_cp_copy1

0xa913,	// (0x00039d6d) input_focus_pane_cp1_copy1

0xa91c,	// (0x00039d76) list_set_text_pane_copy1

0xa924,	// (0x00039d7e) setting_text_pane_g1_copy1

0x03c4,	// (0x0002f81e) set_text_pane_t1_copy1

0xa913,	// (0x00039d6d) input_focus_pane_cp2_copy1

0xa924,	// (0x00039d7e) setting_code_pane_g1_copy1

0xa92d,	// (0x00039d87) setting_code_pane_t1_copy1

0xa93b,	// (0x00039d95) list_set_graphic_pane_copy1

0x2cbf,	// (0x00032119) bg_set_opt_pane_cp4_copy1

0x484c,	// (0x00033ca6) list_set_graphic_pane_g1_copy1_ParamLimits

0x484c,	// (0x00033ca6) list_set_graphic_pane_g1_copy1

0xa94e,	// (0x00039da8) list_set_graphic_pane_g2_copy1

0x4864,	// (0x00033cbe) list_set_graphic_pane_t1_copy1_ParamLimits

0x4864,	// (0x00033cbe) list_set_graphic_pane_t1_copy1

0x7999,	// (0x00036df3) rs_clock_indi_pane_g1

0xa956,	// (0x00039db0) rs_clock_indi_pane_t1

0xa964,	// (0x00039dbe) rs_indi_pane

0xa96c,	// (0x00039dc6) rs_indi_pane_g1

0xa975,	// (0x00039dcf) rs_indi_pane_g2

0xa97e,	// (0x00039dd8) rs_indi_pane_g3

0x0002,

0xfebe,	// (0x0003f318) rs_indi_pane_g

0x4b51,	// (0x00033fab) bg_popup_preview_window_pane_cp03

0xa987,	// (0x00039de1) popup_fep_tooltip_window_t1

0x8621,	// (0x00037a7b) popup_note2_window_g2_ParamLimits

0x8621,	// (0x00037a7b) popup_note2_window_g2

0x0001,

0xfc57,	// (0x0003f0b1) popup_note2_window_g_ParamLimits

0xfc57,	// (0x0003f0b1) popup_note2_window_g

0x8b1c,	// (0x00037f76) bg_popup_sub_pane_cp11_ParamLimits

0x8b29,	// (0x00037f83) cell_ai3_links_pane_g1_ParamLimits

0x8b40,	// (0x00037f9a) cell_ai3_links_pane_t1

0x03c4,	// (0x0002f81e) set_text_pane_t1_copy1_ParamLimits

0x4a62,	// (0x00033ebc) cell_graphic_popup_pane_cp2_ParamLimits

0x4a62,	// (0x00033ebc) cell_graphic_popup_pane_cp2

0xa995,	// (0x00039def) cell_graphic_popup_pane_g1_cp2

0x3c07,	// (0x00033061) cell_graphic_popup_pane_g2_cp2

0xa99d,	// (0x00039df7) cell_graphic_popup_pane_g3_cp2

0xa9a5,	// (0x00039dff) cell_graphic_popup_pane_t2_cp2

0x3c18,	// (0x00033072) grid_highlight_pane_cp3_cp2

0x4259,	// (0x000336b3) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x3ebc,	// (0x00033316) main_tmo_pane_ParamLimits

0xe701,	// (0x0003db5b) popup_tmo_big_image_note_window

0xa02b,	// (0x00039485) cell_ai5_widget_list_pane

0xa033,	// (0x0003948d) cell_ai5_widget_lrg_icon_pane

0xf3a8,	// (0x0003e802) tmo_note_info_pane_t1_ParamLimits

0xf3bd,	// (0x0003e817) tmo_note_info_pane_t2_ParamLimits

0xf3d4,	// (0x0003e82e) tmo_note_info_pane_t3_ParamLimits

0xa612,	// (0x00039a6c) tmo_note_info_pane_t4_ParamLimits

0xa624,	// (0x00039a7e) tmo_note_info_pane_t5_ParamLimits

0xfeac,	// (0x0003f306) tmo_note_info_pane_t_ParamLimits

0xa742,	// (0x00039b9c) settings_container_pane_ParamLimits

0xa90b,	// (0x00039d65) indicator_popup_pane_cp5

0xa90b,	// (0x00039d65) indicator_popup_pane_cp6

0xa93b,	// (0x00039d95) list_set_graphic_pane_copy1_ParamLimits

0x2cab,	// (0x00032105) bg_popup_window_pane_cp23

0xa9b3,	// (0x00039e0d) popup_tmo_big_image_note_window_g1

0xa9bd,	// (0x00039e17) popup_tmo_big_image_note_window_t1

0xa9cd,	// (0x00039e27) popup_tmo_big_image_note_window_t2

0xa9dd,	// (0x00039e37) popup_tmo_big_image_note_window_t3

0x0002,

0xfec5,	// (0x0003f31f) popup_tmo_big_image_note_window_t

0x7999,	// (0x00036df3) cell_ai5_widget_lrg_icon_pane_g1

0xa9ed,	// (0x00039e47) cell_ai5_widget_lrg_icon_pane_t1

0xa9fb,	// (0x00039e55) cell_ai5_widget_list_row_pane_ParamLimits

0xa9fb,	// (0x00039e55) cell_ai5_widget_list_row_pane

0xaa12,	// (0x00039e6c) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xaa12,	// (0x00039e6c) cell_ai5_widget_list_row_pane_g1

0xaa1f,	// (0x00039e79) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xaa1f,	// (0x00039e79) cell_ai5_widget_list_row_pane_t1

0xaa50,	// (0x00039eaa) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xaa50,	// (0x00039eaa) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfecc,	// (0x0003f326) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfecc,	// (0x0003f326) cell_ai5_widget_list_row_pane_t

0x00da,	// (0x0002f534) main_fep_vtchi_ss_pane

0xaa98,	// (0x00039ef2) popup_fep_char_pre_window

0xaaa0,	// (0x00039efa) popup_fep_ituss_window

0xf3f8,	// (0x0003e852) popup_fep_vkbss_window

0xf405,	// (0x0003e85f) grid_vkbss_keypad_pane_ParamLimits

0xf405,	// (0x0003e85f) grid_vkbss_keypad_pane

0xab06,	// (0x00039f60) ituss_keypad_pane

0x2b67,	// (0x00031fc1) aid_vkbss_key_offset_ParamLimits

0x2b67,	// (0x00031fc1) aid_vkbss_key_offset

0xcfdd,	// (0x0003c437) cell_vkbss_key_pane_ParamLimits

0xcfdd,	// (0x0003c437) cell_vkbss_key_pane

0xab15,	// (0x00039f6f) bg_cell_vkbss_key_g1_ParamLimits

0xab15,	// (0x00039f6f) bg_cell_vkbss_key_g1

0xf415,	// (0x0003e86f) cell_vkbss_key_3p_pane_ParamLimits

0xf415,	// (0x0003e86f) cell_vkbss_key_3p_pane

0xf42f,	// (0x0003e889) cell_vkbss_key_g1_ParamLimits

0xf42f,	// (0x0003e889) cell_vkbss_key_g1

0xf449,	// (0x0003e8a3) cell_vkbss_key_t1_ParamLimits

0xf449,	// (0x0003e8a3) cell_vkbss_key_t1

0x2b89,	// (0x00031fe3) cell_ituss_key_pane_ParamLimits

0x2b89,	// (0x00031fe3) cell_ituss_key_pane

0xab74,	// (0x00039fce) bg_cell_ituss_key_g1_ParamLimits

0xab74,	// (0x00039fce) bg_cell_ituss_key_g1

0xab80,	// (0x00039fda) cell_ituss_key_pane_g1_ParamLimits

0xab80,	// (0x00039fda) cell_ituss_key_pane_g1

0x2b9a,	// (0x00031ff4) cell_ituss_key_pane_g2_ParamLimits

0x2b9a,	// (0x00031ff4) cell_ituss_key_pane_g2

0x0002,

0xfed3,	// (0x0003f32d) cell_ituss_key_pane_g_ParamLimits

0xfed3,	// (0x0003f32d) cell_ituss_key_pane_g

0x2bc6,	// (0x00032020) cell_ituss_key_t1_ParamLimits

0x2bc6,	// (0x00032020) cell_ituss_key_t1

0x2c00,	// (0x0003205a) cell_ituss_key_t2_ParamLimits

0x2c00,	// (0x0003205a) cell_ituss_key_t2

0x2c31,	// (0x0003208b) cell_ituss_key_t3_ParamLimits

0x2c31,	// (0x0003208b) cell_ituss_key_t3

0x2c00,	// (0x0003205a) cell_ituss_key_t4_ParamLimits

0x2c00,	// (0x0003205a) cell_ituss_key_t4

0x0004,

0xfeda,	// (0x0003f334) cell_ituss_key_t_ParamLimits

0xfeda,	// (0x0003f334) cell_ituss_key_t

0xabac,	// (0x0003a006) cell_vkbss_key_3p_pane_g1

0xabb4,	// (0x0003a00e) cell_vkbss_key_3p_pane_g2

0xabbc,	// (0x0003a016) cell_vkbss_key_3p_pane_g3

0x0002,

0xfee5,	// (0x0003f33f) cell_vkbss_key_3p_pane_g

0x4b51,	// (0x00033fab) bg_popup_fep_char_preview_window_cp02

0xabc4,	// (0x0003a01e) popup_fep_char_pre_window_t1

0xf2ec,	// (0x0003e746) main_ai5_sk_pane

0xa69e,	// (0x00039af8) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xa6aa,	// (0x00039b04) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x8043,	// (0x0003749d) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa6bf,	// (0x00039b19) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeb7,	// (0x0003f311) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa6cb,	// (0x00039b25) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x3ebc,	// (0x00033316) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf474,	// (0x0003e8ce) main_ai5_sk_pane_g1

0x5859,	// (0x00034cb3) popup_query_code_window_g1

0xf3e9,	// (0x0003e843) popup_fep_vkb_icf_pane

0xaae0,	// (0x00039f3a) popup_fep_vtchi_icf_pane

0xabdb,	// (0x0003a035) bg_icf_pane

0xabe7,	// (0x0003a041) list_vkb_icf_pane

0xabf6,	// (0x0003a050) bg_icf_pane_cp01

0xac09,	// (0x0003a063) vtchi_icf_list_pane

0xf47d,	// (0x0003e8d7) list_vkb_icf_pane_t1_ParamLimits

0xf47d,	// (0x0003e8d7) list_vkb_icf_pane_t1

0xac3a,	// (0x0003a094) vtchi_icf_list_pane_t1_ParamLimits

0xac3a,	// (0x0003a094) vtchi_icf_list_pane_t1

0xaaa0,	// (0x00039efa) popup_fep_ituss_window_ParamLimits

0xaae0,	// (0x00039f3a) popup_fep_vtchi_icf_pane_ParamLimits

0xab06,	// (0x00039f60) ituss_keypad_pane_ParamLimits

0x2b5b,	// (0x00031fb5) ituss_sks_pane

0xabdb,	// (0x0003a035) bg_icf_pane_ParamLimits

0xaa78,	// (0x00039ed2) icf_edit_indi_pane_ParamLimits

0xaa78,	// (0x00039ed2) icf_edit_indi_pane

0xabe7,	// (0x0003a041) list_vkb_icf_pane_ParamLimits

0xabf6,	// (0x0003a050) bg_icf_pane_cp01_ParamLimits

0xaa8b,	// (0x00039ee5) icf_edit_indi_pane_cp01_ParamLimits

0xaa8b,	// (0x00039ee5) icf_edit_indi_pane_cp01

0xac11,	// (0x0003a06b) vtchi_query_pane

0x9e3a,	// (0x00039294) icf_edit_indi_pane_g1_ParamLimits

0x9e3a,	// (0x00039294) icf_edit_indi_pane_g1

0xf493,	// (0x0003e8ed) icf_edit_indi_pane_g2_ParamLimits

0xf493,	// (0x0003e8ed) icf_edit_indi_pane_g2

0x0001,

0xfefd,	// (0x0003f357) icf_edit_indi_pane_g_ParamLimits

0xfefd,	// (0x0003f357) icf_edit_indi_pane_g

0xf4a5,	// (0x0003e8ff) icf_edit_indi_pane_t1

0xac54,	// (0x0003a0ae) bg_input_focus_pane_cp042

0x3deb,	// (0x00033245) vtchi_button_pane

0xac5d,	// (0x0003a0b7) vtchi_query_pane_t1

0xac6b,	// (0x0003a0c5) vtchi_query_pane_t2

0xac79,	// (0x0003a0d3) vtchi_query_pane_t3

0x0002,

0xfeec,	// (0x0003f346) vtchi_query_pane_t

0x00da,	// (0x0002f534) bg_button_pane_cp13

0xac87,	// (0x0003a0e1) vtchi_button_pane_g1

0x2c74,	// (0x000320ce) ituss_sks_pane_g1

0x2c7f,	// (0x000320d9) ituss_sks_pane_g2

0x0001,

0xfef3,	// (0x0003f34d) ituss_sks_pane_g

0xac8f,	// (0x0003a0e9) ituss_sks_pane_t1

0xac9d,	// (0x0003a0f7) ituss_sks_pane_t2

0x0001,

0xfef8,	// (0x0003f352) ituss_sks_pane_t

0x7424,	// (0x0003687e) indicator_nsta_pane_cp_g1

0x742c,	// (0x00036886) indicator_nsta_pane_cp_g2

0x7434,	// (0x0003688e) indicator_nsta_pane_cp_g3

0x7424,	// (0x0003687e) indicator_nsta_pane_cp_g4

0x742c,	// (0x00036886) indicator_nsta_pane_cp_g5

0x7434,	// (0x0003688e) indicator_nsta_pane_cp_g6

0x0005,

0xfa95,	// (0x0003eeef) indicator_nsta_pane_cp_g

0xf104,	// (0x0003e55e) cell_graphic2_pane_t2_ParamLimits

0xf104,	// (0x0003e55e) cell_graphic2_pane_t2

0x0001,

0xfdae,	// (0x0003f208) cell_graphic2_pane_t_ParamLimits

0xfdae,	// (0x0003f208) cell_graphic2_pane_t

0xf138,	// (0x0003e592) cell_graphic2_control_pane_t1

0xd4fa,	// (0x0003c954) signal_pane_g3_ParamLimits

0xd4fa,	// (0x0003c954) signal_pane_g3

0xd50e,	// (0x0003c968) signal_pane_g4_ParamLimits

0xd50e,	// (0x0003c968) signal_pane_g4

0xaa62,	// (0x00039ebc) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xaa62,	// (0x00039ebc) cell_ai5_widget_list_row_pane_t3

0xab9a,	// (0x00039ff4) cell_ituss_key_pane_t1_ParamLimits

0xab9a,	// (0x00039ff4) cell_ituss_key_pane_t1

0x549e,	// (0x000348f8) form_field_data_wide_pane_vc_t2_ParamLimits

0x549e,	// (0x000348f8) form_field_data_wide_pane_vc_t2

0x54b2,	// (0x0003490c) form_field_data_wide_pane_vc_t3_ParamLimits

0x54b2,	// (0x0003490c) form_field_data_wide_pane_vc_t3

0x0002,

0xf804,	// (0x0003ec5e) form_field_data_wide_pane_vc_t_ParamLimits

0xf804,	// (0x0003ec5e) form_field_data_wide_pane_vc_t

0x70eb,	// (0x00036545) form_field_slider_wide_pane_vc_t3_ParamLimits

0x70eb,	// (0x00036545) form_field_slider_wide_pane_vc_t3

0x71c9,	// (0x00036623) form_field_popup_wide_pane_vc_t2_ParamLimits

0x71c9,	// (0x00036623) form_field_popup_wide_pane_vc_t2

0x71e0,	// (0x0003663a) form_field_popup_wide_pane_vc_t3_ParamLimits

0x71e0,	// (0x0003663a) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa84,	// (0x0003eede) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa84,	// (0x0003eede) form_field_popup_wide_pane_vc_t

0xce47,	// (0x0003c2a1) aid_fshwr2_btn_pane_ParamLimits

0xce5b,	// (0x0003c2b5) aid_fshwr2_syb_pane_ParamLimits

0xce6f,	// (0x0003c2c9) aid_fshwr2_txt_pane_ParamLimits

0x2181,	// (0x000315db) fshwr2_bg_pane_ParamLimits

0xce7f,	// (0x0003c2d9) fshwr2_func_candi_pane_ParamLimits

0xce9f,	// (0x0003c2f9) fshwr2_hwr_syb_pane_ParamLimits

0xcec1,	// (0x0003c31b) fshwr2_icf_pane_ParamLimits

0x31f6,	// (0x00032650) list_double_graphic_pane_vc_g4_ParamLimits

0x31f6,	// (0x00032650) list_double_graphic_pane_vc_g4

0x2bba,	// (0x00032014) cell_ituss_key_pane_g3_ParamLimits

0x2bba,	// (0x00032014) cell_ituss_key_pane_g3

0x2c62,	// (0x000320bc) cell_ituss_key_t5_ParamLimits

0x2c62,	// (0x000320bc) cell_ituss_key_t5

0xf3f8,	// (0x0003e852) popup_fep_vkbss_window_ParamLimits

0x9fba,	// (0x00039414) aid_cell_ai5_quarter

0xf4a5,	// (0x0003e8ff) icf_edit_indi_pane_t1_ParamLimits

0x3958,	// (0x00032db2) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x3958,	// (0x00032db2) aid_tch_indicator_popup_pane_cp2

0x396b,	// (0x00032dc5) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x396b,	// (0x00032dc5) aid_tch_query_popup_data_pane_cp2

0x5801,	// (0x00034c5b) aid_tch_query_popup_pane_ParamLimits

0x5801,	// (0x00034c5b) aid_tch_query_popup_pane

0x5801,	// (0x00034c5b) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x5801,	// (0x00034c5b) aid_tch_query_popup_data_pane_cp1

0xa501,	// (0x0003995b) cell_fshwr2_syb_bg_pane_ParamLimits

0xcfb4,	// (0x0003c40e) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0xcfc7,	// (0x0003c421) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xf3e9,	// (0x0003e843) popup_fep_vkb_icf_pane_ParamLimits
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

} // end of namespace AknLayoutScalable_Abrw_phl_av_qhd_lsc_tch_Small

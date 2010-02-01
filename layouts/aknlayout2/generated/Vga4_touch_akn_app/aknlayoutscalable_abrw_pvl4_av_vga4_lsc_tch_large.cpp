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

#include "aknlayoutscalable_abrw_pvl4_av_vga4_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvl4_av_vga4_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x000524b6 };

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
0xad1d,	// (0x0005d1d3) Screen

0xad29,	// (0x0005d1df) application_window_ParamLimits

0xad29,	// (0x0005d1df) application_window

0xd2a3,	// (0x0005f759) screen_g1

0xad61,	// (0x0005d217) area_bottom_pane_ParamLimits

0xad61,	// (0x0005d217) area_bottom_pane

0xf08c,	// (0x00061542) area_top_pane_ParamLimits

0xf08c,	// (0x00061542) area_top_pane

0xf12a,	// (0x000615e0) main_pane_ParamLimits

0xf12a,	// (0x000615e0) main_pane

0xd2ad,	// (0x0005f763) misc_graphics

0xce0d,	// (0x0005f2c3) battery_pane_ParamLimits

0xce0d,	// (0x0005f2c3) battery_pane

0x502e,	// (0x000574e4) bg_status_flat_pane_g8

0x5036,	// (0x000574ec) bg_status_flat_pane_g9

0x43e3,	// (0x00056899) context_pane_ParamLimits

0x43e3,	// (0x00056899) context_pane

0xcf84,	// (0x0005f43a) navi_pane_ParamLimits

0xcf84,	// (0x0005f43a) navi_pane

0xd00d,	// (0x0005f4c3) signal_pane_ParamLimits

0xd00d,	// (0x0005f4c3) signal_pane

0x0008,

0xf88a,	// (0x00061d40) bg_status_flat_pane_g

0xd09d,	// (0x0005f553) status_pane_g1_ParamLimits

0xd09d,	// (0x0005f553) status_pane_g1

0xd0b3,	// (0x0005f569) status_pane_g2_ParamLimits

0xd0b3,	// (0x0005f569) status_pane_g2

0x4623,	// (0x00056ad9) status_pane_g3_ParamLimits

0x4623,	// (0x00056ad9) status_pane_g3

0x0004,

0xf7bd,	// (0x00061c73) status_pane_g_ParamLimits

0xf7bd,	// (0x00061c73) status_pane_g

0xd0bf,	// (0x0005f575) title_pane_ParamLimits

0xd0bf,	// (0x0005f575) title_pane

0xd11c,	// (0x0005f5d2) uni_indicator_pane_ParamLimits

0xd11c,	// (0x0005f5d2) uni_indicator_pane

0x3c10,	// (0x000560c6) bg_list_pane_ParamLimits

0x3c10,	// (0x000560c6) bg_list_pane

0xc63c,	// (0x0005eaf2) find_pane

0xc644,	// (0x0005eafa) listscroll_app_pane_ParamLimits

0xc644,	// (0x0005eafa) listscroll_app_pane

0x3c44,	// (0x000560fa) listscroll_form_pane

0xc650,	// (0x0005eb06) listscroll_gen_pane_ParamLimits

0xc650,	// (0x0005eb06) listscroll_gen_pane

0x3c44,	// (0x000560fa) listscroll_set_pane

0x5be7,	// (0x0005809d) main_idle_act_pane

0x38f4,	// (0x00055daa) main_idle_trad_pane

0x38f4,	// (0x00055daa) main_list_empty_pane

0x3c72,	// (0x00056128) main_midp_pane

0x3c7e,	// (0x00056134) main_pane_g1_ParamLimits

0x3c7e,	// (0x00056134) main_pane_g1

0xc672,	// (0x0005eb28) popup_ai_message_window_ParamLimits

0xc672,	// (0x0005eb28) popup_ai_message_window

0xc712,	// (0x0005ebc8) popup_fep_china_uni_window_ParamLimits

0xc712,	// (0x0005ebc8) popup_fep_china_uni_window

0x3d9c,	// (0x00056252) popup_fep_japan_candidate_window_ParamLimits

0x3d9c,	// (0x00056252) popup_fep_japan_candidate_window

0x3dc6,	// (0x0005627c) popup_fep_japan_predictive_window_ParamLimits

0x3dc6,	// (0x0005627c) popup_fep_japan_predictive_window

0xc772,	// (0x0005ec28) popup_find_window

0xc78f,	// (0x0005ec45) popup_grid_graphic_window_ParamLimits

0xc78f,	// (0x0005ec45) popup_grid_graphic_window

0x3e37,	// (0x000562ed) popup_large_graphic_colour_window

0xc833,	// (0x0005ece9) popup_menu_window_ParamLimits

0xc833,	// (0x0005ece9) popup_menu_window

0xca1f,	// (0x0005eed5) popup_note_image_window

0xc9df,	// (0x0005ee95) popup_note_wait_window_ParamLimits

0xc9df,	// (0x0005ee95) popup_note_wait_window

0xca37,	// (0x0005eeed) popup_note_window_ParamLimits

0xca37,	// (0x0005eeed) popup_note_window

0xcae5,	// (0x0005ef9b) popup_query_code_window_ParamLimits

0xcae5,	// (0x0005ef9b) popup_query_code_window

0x40a3,	// (0x00056559) popup_query_data_code_window_ParamLimits

0x40a3,	// (0x00056559) popup_query_data_code_window

0xcb25,	// (0x0005efdb) popup_query_data_window_ParamLimits

0xcb25,	// (0x0005efdb) popup_query_data_window

0xcbb9,	// (0x0005f06f) popup_query_sat_info_window_ParamLimits

0xcbb9,	// (0x0005f06f) popup_query_sat_info_window

0xcc64,	// (0x0005f11a) popup_snote_single_graphic_window_ParamLimits

0xcc64,	// (0x0005f11a) popup_snote_single_graphic_window

0xcc64,	// (0x0005f11a) popup_snote_single_text_window_ParamLimits

0xcc64,	// (0x0005f11a) popup_snote_single_text_window

0x413e,	// (0x000565f4) popup_sub_window_general

0x4284,	// (0x0005673a) popup_window_general_ParamLimits

0x4284,	// (0x0005673a) popup_window_general

0x429d,	// (0x00056753) power_save_pane

0xba3e,	// (0x0005def4) control_pane_g1_ParamLimits

0xba3e,	// (0x0005def4) control_pane_g1

0x089e,	// (0x00052d54) control_pane_g2_ParamLimits

0x089e,	// (0x00052d54) control_pane_g2

0x3bc1,	// (0x00056077) control_pane_g3_ParamLimits

0x3bc1,	// (0x00056077) control_pane_g3

0x0007,

0xf7a5,	// (0x00061c5b) control_pane_g_ParamLimits

0xf7a5,	// (0x00061c5b) control_pane_g

0xba7d,	// (0x0005df33) control_pane_t1_ParamLimits

0xba7d,	// (0x0005df33) control_pane_t1

0xbadb,	// (0x0005df91) control_pane_t2_ParamLimits

0xbadb,	// (0x0005df91) control_pane_t2

0x0002,

0xf7b6,	// (0x00061c6c) control_pane_t_ParamLimits

0xf7b6,	// (0x00061c6c) control_pane_t

0x3ae2,	// (0x00055f98) navi_navi_volume_pane_cp1

0x3aeb,	// (0x00055fa1) status_small_icon_pane

0x3af3,	// (0x00055fa9) status_small_pane_g1_ParamLimits

0x3af3,	// (0x00055fa9) status_small_pane_g1

0x3b27,	// (0x00055fdd) status_small_pane_g2_ParamLimits

0x3b27,	// (0x00055fdd) status_small_pane_g2

0x3b33,	// (0x00055fe9) status_small_pane_g3_ParamLimits

0x3b33,	// (0x00055fe9) status_small_pane_g3

0x3b3f,	// (0x00055ff5) status_small_pane_g4_ParamLimits

0x3b3f,	// (0x00055ff5) status_small_pane_g4

0x3b4b,	// (0x00056001) status_small_pane_g5_ParamLimits

0x3b4b,	// (0x00056001) status_small_pane_g5

0x3b5a,	// (0x00056010) status_small_pane_g6_ParamLimits

0x3b5a,	// (0x00056010) status_small_pane_g6

0x0007,

0xf794,	// (0x00061c4a) status_small_pane_g_ParamLimits

0xf794,	// (0x00061c4a) status_small_pane_g

0x3b8a,	// (0x00056040) status_small_pane_t1

0x3bad,	// (0x00056063) status_small_wait_pane_ParamLimits

0x3bad,	// (0x00056063) status_small_wait_pane

0xc45d,	// (0x0005e913) aid_levels_signal_ParamLimits

0xc45d,	// (0x0005e913) aid_levels_signal

0xc475,	// (0x0005e92b) signal_pane_g1_ParamLimits

0xc475,	// (0x0005e92b) signal_pane_g1

0xc490,	// (0x0005e946) signal_pane_g2_ParamLimits

0xc490,	// (0x0005e946) signal_pane_g2

0x0001,

0xf729,	// (0x00061bdf) signal_pane_g_ParamLimits

0xf729,	// (0x00061bdf) signal_pane_g

0x33c7,	// (0x0005587d) context_pane_g1

0xaede,	// (0x0005d394) title_pane_g1

0xaf13,	// (0x0005d3c9) title_pane_t1

0x215d,	// (0x00054613) title_pane_t2

0x2183,	// (0x00054639) title_pane_t3

0x0002,

0xf573,	// (0x00061a29) title_pane_t

0xd144,	// (0x0005f5fa) aid_levels_battery_ParamLimits

0xd144,	// (0x0005f5fa) aid_levels_battery

0xd160,	// (0x0005f616) battery_pane_g1_ParamLimits

0xd160,	// (0x0005f616) battery_pane_g1

0xd17d,	// (0x0005f633) battery_pane_g2_ParamLimits

0xd17d,	// (0x0005f633) battery_pane_g2

0x0001,

0xf7c8,	// (0x00061c7e) battery_pane_g_ParamLimits

0xf7c8,	// (0x00061c7e) battery_pane_g

0xd470,	// (0x0005f926) uni_indicator_pane_g1

0xd485,	// (0x0005f93b) uni_indicator_pane_g2

0xd49a,	// (0x0005f950) uni_indicator_pane_g3

0x0005,

0xf932,	// (0x00061de8) uni_indicator_pane_g

0x3762,	// (0x00055c18) navi_icon_pane_ParamLimits

0x3762,	// (0x00055c18) navi_icon_pane

0x36a9,	// (0x00055b5f) navi_midp_pane

0x377e,	// (0x00055c34) navi_navi_pane

0x3788,	// (0x00055c3e) navi_text_pane_ParamLimits

0x3788,	// (0x00055c3e) navi_text_pane

0xd2a3,	// (0x0005f759) status_small_wait_pane_g1

0x25c7,	// (0x00054a7d) status_small_wait_pane_g2

0x0001,

0xf92d,	// (0x00061de3) status_small_wait_pane_g

0xd40f,	// (0x0005f8c5) navi_navi_icon_text_pane

0xd417,	// (0x0005f8cd) navi_navi_pane_g1_ParamLimits

0xd417,	// (0x0005f8cd) navi_navi_pane_g1

0xd429,	// (0x0005f8df) navi_navi_pane_g2_ParamLimits

0xd429,	// (0x0005f8df) navi_navi_pane_g2

0x0001,

0xf8fb,	// (0x00061db1) navi_navi_pane_g_ParamLimits

0xf8fb,	// (0x00061db1) navi_navi_pane_g

0x56bd,	// (0x00057b73) navi_navi_tabs_pane

0xd43b,	// (0x0005f8f1) navi_navi_text_pane

0xd40f,	// (0x0005f8c5) navi_navi_volume_pane

0xd3fd,	// (0x0005f8b3) navi_text_pane_t1

0xd3f1,	// (0x0005f8a7) navi_icon_pane_g1

0x55ae,	// (0x00057a64) navi_navi_text_pane_t1

0xbd5e,	// (0x0005e214) navi_navi_volume_pane_g1

0xbd66,	// (0x0005e21c) volume_small_pane

0xd34d,	// (0x0005f803) navi_navi_icon_text_pane_g1

0xd355,	// (0x0005f80b) navi_navi_icon_text_pane_t1

0x377e,	// (0x00055c34) navi_tabs_2_long_pane

0x377e,	// (0x00055c34) navi_tabs_2_pane

0x377e,	// (0x00055c34) navi_tabs_3_long_pane

0x377e,	// (0x00055c34) navi_tabs_3_pane

0x377e,	// (0x00055c34) navi_tabs_4_pane

0xbd3e,	// (0x0005e1f4) tabs_2_active_pane_ParamLimits

0xbd3e,	// (0x0005e1f4) tabs_2_active_pane

0xbd4e,	// (0x0005e204) tabs_2_passive_pane_ParamLimits

0xbd4e,	// (0x0005e204) tabs_2_passive_pane

0xbd0c,	// (0x0005e1c2) tabs_3_active_pane_ParamLimits

0xbd0c,	// (0x0005e1c2) tabs_3_active_pane

0xbd1c,	// (0x0005e1d2) tabs_3_passive_pane_ParamLimits

0xbd1c,	// (0x0005e1d2) tabs_3_passive_pane

0xbd2d,	// (0x0005e1e3) tabs_3_passive_pane_cp_ParamLimits

0xbd2d,	// (0x0005e1e3) tabs_3_passive_pane_cp

0xbcc8,	// (0x0005e17e) tabs_4_active_pane_ParamLimits

0xbcc8,	// (0x0005e17e) tabs_4_active_pane

0xbcd9,	// (0x0005e18f) tabs_4_passive_pane_ParamLimits

0xbcd9,	// (0x0005e18f) tabs_4_passive_pane

0xbcea,	// (0x0005e1a0) tabs_4_passive_pane_cp_ParamLimits

0xbcea,	// (0x0005e1a0) tabs_4_passive_pane_cp

0xbcfb,	// (0x0005e1b1) tabs_4_passive_pane_cp2_ParamLimits

0xbcfb,	// (0x0005e1b1) tabs_4_passive_pane_cp2

0xbca4,	// (0x0005e15a) tabs_2_long_active_pane_ParamLimits

0xbca4,	// (0x0005e15a) tabs_2_long_active_pane

0xbcb6,	// (0x0005e16c) tabs_2_long_passive_pane_ParamLimits

0xbcb6,	// (0x0005e16c) tabs_2_long_passive_pane

0xbc59,	// (0x0005e10f) tabs_3_long_active_pane_ParamLimits

0xbc59,	// (0x0005e10f) tabs_3_long_active_pane

0xbc72,	// (0x0005e128) tabs_3_long_passive_pane_ParamLimits

0xbc72,	// (0x0005e128) tabs_3_long_passive_pane

0xbc8b,	// (0x0005e141) tabs_3_long_passive_pane_cp_ParamLimits

0xbc8b,	// (0x0005e141) tabs_3_long_passive_pane_cp

0x0ba6,	// (0x0005305c) volume_small_pane_g1

0xbc08,	// (0x0005e0be) volume_small_pane_g2

0xbc11,	// (0x0005e0c7) volume_small_pane_g3

0xbc1a,	// (0x0005e0d0) volume_small_pane_g4

0xbc23,	// (0x0005e0d9) volume_small_pane_g5

0xbc2c,	// (0x0005e0e2) volume_small_pane_g6

0xbc35,	// (0x0005e0eb) volume_small_pane_g7

0xbc3e,	// (0x0005e0f4) volume_small_pane_g8

0xbc47,	// (0x0005e0fd) volume_small_pane_g9

0xbc50,	// (0x0005e106) volume_small_pane_g10

0x0009,

0xf8c7,	// (0x00061d7d) volume_small_pane_g

0x2411,	// (0x000548c7) bg_active_tab_pane_cp2_ParamLimits

0x2411,	// (0x000548c7) bg_active_tab_pane_cp2

0xaf9f,	// (0x0005d455) tabs_3_active_pane_g1

0xafa7,	// (0x0005d45d) tabs_3_active_pane_t1

0x2411,	// (0x000548c7) bg_passive_tab_pane_cp2_ParamLimits

0x2411,	// (0x000548c7) bg_passive_tab_pane_cp2

0xaf9f,	// (0x0005d455) tabs_3_passive_pane_g1

0xafa7,	// (0x0005d45d) tabs_3_passive_pane_t1

0x2411,	// (0x000548c7) bg_active_tab_pane_cp3_ParamLimits

0x2411,	// (0x000548c7) bg_active_tab_pane_cp3

0xafb9,	// (0x0005d46f) tabs_4_active_pane_g1

0xafc1,	// (0x0005d477) tabs_4_active_pane_t1

0x2411,	// (0x000548c7) bg_passive_tab_pane_cp3_ParamLimits

0x2411,	// (0x000548c7) bg_passive_tab_pane_cp3

0xafb9,	// (0x0005d46f) tabs_4_1_passive_pane_g1

0xafc1,	// (0x0005d477) tabs_4_1_passive_pane_t1

0x3c72,	// (0x00056128) list_highlight_pane_cp2

0xd558,	// (0x0005fa0e) list_set_pane_ParamLimits

0xd558,	// (0x0005fa0e) list_set_pane

0xd620,	// (0x0005fad6) main_pane_set_t1_ParamLimits

0xd620,	// (0x0005fad6) main_pane_set_t1

0xd640,	// (0x0005faf6) main_pane_set_t2_ParamLimits

0xd640,	// (0x0005faf6) main_pane_set_t2

0xd654,	// (0x0005fb0a) main_pane_set_t3_ParamLimits

0xd654,	// (0x0005fb0a) main_pane_set_t3

0xd668,	// (0x0005fb1e) main_pane_set_t4_ParamLimits

0xd668,	// (0x0005fb1e) main_pane_set_t4

0x0003,

0xf997,	// (0x00061e4d) main_pane_set_t_ParamLimits

0xf997,	// (0x00061e4d) main_pane_set_t

0xd67c,	// (0x0005fb32) setting_code_pane

0x5d47,	// (0x000581fd) setting_slider_graphic_pane

0x5d47,	// (0x000581fd) setting_slider_pane

0x5d47,	// (0x000581fd) setting_text_pane

0x5d47,	// (0x000581fd) setting_volume_pane

0xf4da,	// (0x00061990) volume_set_pane

0x2195,	// (0x0005464b) bg_set_opt_pane_cp

0xf4e4,	// (0x0006199a) setting_slider_pane_t1

0xf4fa,	// (0x000619b0) setting_slider_pane_t2

0xf514,	// (0x000619ca) setting_slider_pane_t3

0x0002,

0xf57a,	// (0x00061a30) setting_slider_pane_t

0xf52c,	// (0x000619e2) slider_set_pane

0xd2ad,	// (0x0005f763) bg_set_opt_pane_cp2

0x21d7,	// (0x0005468d) setting_slider_graphic_pane_g1

0xf542,	// (0x000619f8) setting_slider_graphic_pane_t1

0xf552,	// (0x00061a08) setting_slider_graphic_pane_t2

0x0001,

0xf581,	// (0x00061a37) setting_slider_graphic_pane_t

0xf562,	// (0x00061a18) slider_set_pane_cp

0xd2ad,	// (0x0005f763) input_focus_pane_cp1

0x5bce,	// (0x00058084) list_set_text_pane

0xd2a3,	// (0x0005f759) setting_text_pane_g1

0xd2ad,	// (0x0005f763) input_focus_pane_cp2

0xd2a3,	// (0x0005f759) setting_code_pane_g1

0x21e0,	// (0x00054696) setting_code_pane_t1

0xf239,	// (0x000616ef) set_text_pane_t1_ParamLimits

0xf239,	// (0x000616ef) set_text_pane_t1

0x2b2f,	// (0x00054fe5) set_opt_bg_pane_g1

0x2b37,	// (0x00054fed) set_opt_bg_pane_g2

0x5ba6,	// (0x0005805c) set_opt_bg_pane_g3

0x2b47,	// (0x00054ffd) set_opt_bg_pane_g4

0x2b4f,	// (0x00055005) set_opt_bg_pane_g5

0x2b57,	// (0x0005500d) set_opt_bg_pane_g6

0x5bb0,	// (0x00058066) set_opt_bg_pane_g7

0x5bba,	// (0x00058070) set_opt_bg_pane_g8

0x5bc4,	// (0x0005807a) set_opt_bg_pane_g9

0x0008,

0xf984,	// (0x00061e3a) set_opt_bg_pane_g

0x5b99,	// (0x0005804f) slider_set_pane_g1

0x0db2,	// (0x00053268) slider_set_pane_g2

0x0006,

0xf975,	// (0x00061e2b) slider_set_pane_g

0x0d12,	// (0x000531c8) volume_set_pane_g1

0x0d1c,	// (0x000531d2) volume_set_pane_g2

0x0d26,	// (0x000531dc) volume_set_pane_g3

0x0d30,	// (0x000531e6) volume_set_pane_g4

0x0d3a,	// (0x000531f0) volume_set_pane_g5

0x0d44,	// (0x000531fa) volume_set_pane_g6

0x0d4e,	// (0x00053204) volume_set_pane_g7

0x0d58,	// (0x0005320e) volume_set_pane_g8

0x0d62,	// (0x00053218) volume_set_pane_g9

0x0d6c,	// (0x00053222) volume_set_pane_g10

0x0009,

0xf94d,	// (0x00061e03) volume_set_pane_g

0xafd3,	// (0x0005d489) indicator_pane_ParamLimits

0xafd3,	// (0x0005d489) indicator_pane

0xafff,	// (0x0005d4b5) main_idle_pane_g2_ParamLimits

0xafff,	// (0x0005d4b5) main_idle_pane_g2

0xb037,	// (0x0005d4ed) main_pane_idle_g1_ParamLimits

0xb037,	// (0x0005d4ed) main_pane_idle_g1

0x2230,	// (0x000546e6) popup_clock_digital_analogue_window_ParamLimits

0x2230,	// (0x000546e6) popup_clock_digital_analogue_window

0xb065,	// (0x0005d51b) soft_indicator_pane_ParamLimits

0xb065,	// (0x0005d51b) soft_indicator_pane

0xb081,	// (0x0005d537) wallpaper_pane_ParamLimits

0xb081,	// (0x0005d537) wallpaper_pane

0xd2a3,	// (0x0005f759) wallpaper_pane_g1

0xb093,	// (0x0005d549) indicator_pane_g1_ParamLimits

0xb093,	// (0x0005d549) indicator_pane_g1

0x600b,	// (0x000584c1) navi_navi_icon_text_pane_srt_g1

0x2284,	// (0x0005473a) soft_indicator_pane_t1

0x229e,	// (0x00054754) aid_ps_area_pane

0xb0ac,	// (0x0005d562) aid_ps_clock_pane

0x22bd,	// (0x00054773) aid_ps_indicator_pane

0x22c9,	// (0x0005477f) indicator_ps_pane_ParamLimits

0x22c9,	// (0x0005477f) indicator_ps_pane

0x22d8,	// (0x0005478e) power_save_pane_g1_ParamLimits

0x22d8,	// (0x0005478e) power_save_pane_g1

0x22e4,	// (0x0005479a) power_save_pane_g2_ParamLimits

0x22e4,	// (0x0005479a) power_save_pane_g2

0xf06c,	// (0x00061522) aid_navinavi_width_pane

0x229e,	// (0x00054754) aid_ps_area_pane_ParamLimits

0x0001,

0xf586,	// (0x00061a3c) power_save_pane_g_ParamLimits

0xf586,	// (0x00061a3c) power_save_pane_g

0x22f2,	// (0x000547a8) power_save_pane_t1_ParamLimits

0x22f2,	// (0x000547a8) power_save_pane_t1

0xb0ac,	// (0x0005d562) aid_ps_clock_pane_ParamLimits

0x22bd,	// (0x00054773) aid_ps_indicator_pane_ParamLimits

0x2304,	// (0x000547ba) power_save_pane_t4_ParamLimits

0x2304,	// (0x000547ba) power_save_pane_t4

0x0001,

0xf58b,	// (0x00061a41) power_save_pane_t_ParamLimits

0xf58b,	// (0x00061a41) power_save_pane_t

0x232e,	// (0x000547e4) power_save_t3_ParamLimits

0x232e,	// (0x000547e4) power_save_t3

0x2319,	// (0x000547cf) power_save_t2_ParamLimits

0x2319,	// (0x000547cf) power_save_t2

0x2343,	// (0x000547f9) indicator_ps_pane_g1

0xb0ba,	// (0x0005d570) ai_gene_pane_ParamLimits

0xb0ba,	// (0x0005d570) ai_gene_pane

0xb0d1,	// (0x0005d587) ai_links_pane_ParamLimits

0xb0d1,	// (0x0005d587) ai_links_pane

0xb0e9,	// (0x0005d59f) indicator_pane_cp1_ParamLimits

0xb0e9,	// (0x0005d59f) indicator_pane_cp1

0xb0f8,	// (0x0005d5ae) main_pane_idle_g1_cp_ParamLimits

0xb0f8,	// (0x0005d5ae) main_pane_idle_g1_cp

0x237c,	// (0x00054832) popup_ai_links_title_window

0xb110,	// (0x0005d5c6) soft_indicator_pane_cp1_ParamLimits

0xb110,	// (0x0005d5c6) soft_indicator_pane_cp1

0x596c,	// (0x00057e22) ai_links_pane_g1

0x5975,	// (0x00057e2b) grid_ai_links_pane

0xd467,	// (0x0005f91d) ai_gene_pane_1

0x595a,	// (0x00057e10) ai_gene_pane_2

0x5963,	// (0x00057e19) list_highlight_pane_cp4

0xd443,	// (0x0005f8f9) cell_ai_link_pane_ParamLimits

0xd443,	// (0x0005f8f9) cell_ai_link_pane

0x5929,	// (0x00057ddf) cell_ai_link_pane_g1

0x25c7,	// (0x00054a7d) cell_ai_link_pane_g2

0x0001,

0xf928,	// (0x00061dde) cell_ai_link_pane_g

0xd2ad,	// (0x0005f763) grid_highlight_cp2

0xd2ad,	// (0x0005f763) bg_popup_sub_pane_cp1

0x239f,	// (0x00054855) popup_ai_links_title_window_t1

0x5875,	// (0x00057d2b) ai_gene_pane_1_g1_ParamLimits

0x5875,	// (0x00057d2b) ai_gene_pane_1_g1

0x5881,	// (0x00057d37) ai_gene_pane_1_g2_ParamLimits

0x5881,	// (0x00057d37) ai_gene_pane_1_g2

0x0001,

0xf91e,	// (0x00061dd4) ai_gene_pane_1_g_ParamLimits

0xf91e,	// (0x00061dd4) ai_gene_pane_1_g

0x588e,	// (0x00057d44) ai_gene_pane_1_t1_ParamLimits

0x588e,	// (0x00057d44) ai_gene_pane_1_t1

0x58c2,	// (0x00057d78) grid_ai_soft_ind_pane

0x5860,	// (0x00057d16) ai_gene_pane_2_t1_ParamLimits

0x5860,	// (0x00057d16) ai_gene_pane_2_t1

0xb124,	// (0x0005d5da) main_pane_empty_t1_ParamLimits

0xb124,	// (0x0005d5da) main_pane_empty_t1

0xb13c,	// (0x0005d5f2) main_pane_empty_t2_ParamLimits

0xb13c,	// (0x0005d5f2) main_pane_empty_t2

0xb151,	// (0x0005d607) main_pane_empty_t3_ParamLimits

0xb151,	// (0x0005d607) main_pane_empty_t3

0xb163,	// (0x0005d619) main_pane_empty_t4_ParamLimits

0xb163,	// (0x0005d619) main_pane_empty_t4

0xb175,	// (0x0005d62b) main_pane_empty_t5_ParamLimits

0xb175,	// (0x0005d62b) main_pane_empty_t5

0x0004,

0xf590,	// (0x00061a46) main_pane_empty_t_ParamLimits

0xf590,	// (0x00061a46) main_pane_empty_t

0x2b89,	// (0x0005503f) bg_popup_window_pane_ParamLimits

0x2b89,	// (0x0005503f) bg_popup_window_pane

0x55bc,	// (0x00057a72) find_popup_pane_cp2_ParamLimits

0x55bc,	// (0x00057a72) find_popup_pane_cp2

0x55c8,	// (0x00057a7e) heading_pane_ParamLimits

0x55c8,	// (0x00057a7e) heading_pane

0xd2ad,	// (0x0005f763) bg_popup_sub_pane

0xd372,	// (0x0005f828) bg_popup_window_pane_g1_ParamLimits

0xd372,	// (0x0005f828) bg_popup_window_pane_g1

0xd381,	// (0x0005f837) bg_popup_window_pane_g2_ParamLimits

0xd381,	// (0x0005f837) bg_popup_window_pane_g2

0xd38d,	// (0x0005f843) bg_popup_window_pane_g3_ParamLimits

0xd38d,	// (0x0005f843) bg_popup_window_pane_g3

0xd399,	// (0x0005f84f) bg_popup_window_pane_g4_ParamLimits

0xd399,	// (0x0005f84f) bg_popup_window_pane_g4

0xd3a8,	// (0x0005f85e) bg_popup_window_pane_g5_ParamLimits

0xd3a8,	// (0x0005f85e) bg_popup_window_pane_g5

0xd3b8,	// (0x0005f86e) bg_popup_window_pane_g6_ParamLimits

0xd3b8,	// (0x0005f86e) bg_popup_window_pane_g6

0xd3c4,	// (0x0005f87a) bg_popup_window_pane_g7_ParamLimits

0xd3c4,	// (0x0005f87a) bg_popup_window_pane_g7

0xd3d3,	// (0x0005f889) bg_popup_window_pane_g8_ParamLimits

0xd3d3,	// (0x0005f889) bg_popup_window_pane_g8

0xd3e2,	// (0x0005f898) bg_popup_window_pane_g9_ParamLimits

0xd3e2,	// (0x0005f898) bg_popup_window_pane_g9

0x55a2,	// (0x00057a58) bg_popup_window_pane_g10_ParamLimits

0x55a2,	// (0x00057a58) bg_popup_window_pane_g10

0x0009,

0xf8e6,	// (0x00061d9c) bg_popup_window_pane_g_ParamLimits

0xf8e6,	// (0x00061d9c) bg_popup_window_pane_g

0x54cb,	// (0x00057981) bg_popup_heading_pane_ParamLimits

0x54cb,	// (0x00057981) bg_popup_heading_pane

0x0e86,	// (0x0005333c) tabs_4_passive_pane_cp_srt_ParamLimits

0x0e86,	// (0x0005333c) tabs_4_passive_pane_cp_srt

0x0e98,	// (0x0005334e) tabs_4_passive_pane_srt_ParamLimits

0x54df,	// (0x00057995) heading_pane_g2

0x0e98,	// (0x0005334e) tabs_4_passive_pane_srt

0x48a0,	// (0x00056d56) bg_passive_tab_pane_cp3_srt_ParamLimits

0x48a0,	// (0x00056d56) bg_passive_tab_pane_cp3_srt

0x54e7,	// (0x0005799d) heading_pane_t1_ParamLimits

0x54e7,	// (0x0005799d) heading_pane_t1

0x54fe,	// (0x000579b4) heading_pane_t2_ParamLimits

0x54fe,	// (0x000579b4) heading_pane_t2

0x0001,

0xf8e1,	// (0x00061d97) heading_pane_t_ParamLimits

0xf8e1,	// (0x00061d97) heading_pane_t

0x4ff6,	// (0x000574ac) bg_popup_heading_pane_g1

0x50a5,	// (0x0005755b) bg_popup_heading_pane_g2

0x50af,	// (0x00057565) bg_popup_heading_pane_g3

0x50b9,	// (0x0005756f) bg_popup_heading_pane_g4

0x50c3,	// (0x00057579) bg_popup_heading_pane_g5

0x50cd,	// (0x00057583) bg_popup_heading_pane_g6

0x50d5,	// (0x0005758b) bg_popup_heading_pane_g7

0x50dd,	// (0x00057593) bg_popup_heading_pane_g8

0x50e7,	// (0x0005759d) bg_popup_heading_pane_g9

0x0008,

0xf89d,	// (0x00061d53) bg_popup_heading_pane_g

0x47ae,	// (0x00056c64) bg_popup_sub_pane_g1

0x47be,	// (0x00056c74) bg_popup_sub_pane_g2

0x47b6,	// (0x00056c6c) bg_popup_sub_pane_g3

0x47ce,	// (0x00056c84) bg_popup_sub_pane_g4

0x47c6,	// (0x00056c7c) bg_popup_sub_pane_g5

0x47d6,	// (0x00056c8c) bg_popup_sub_pane_g6

0x47de,	// (0x00056c94) bg_popup_sub_pane_g7

0x47ee,	// (0x00056ca4) bg_popup_sub_pane_g8

0x47e6,	// (0x00056c9c) bg_popup_sub_pane_g9

0x0008,

0xf877,	// (0x00061d2d) bg_popup_sub_pane_g

0x2411,	// (0x000548c7) bg_popup_window_pane_cp5_ParamLimits

0x2411,	// (0x000548c7) bg_popup_window_pane_cp5

0x242d,	// (0x000548e3) popup_note_window_g1_ParamLimits

0x242d,	// (0x000548e3) popup_note_window_g1

0x2439,	// (0x000548ef) popup_note_window_t1_ParamLimits

0x2439,	// (0x000548ef) popup_note_window_t1

0x244f,	// (0x00054905) popup_note_window_t2_ParamLimits

0x244f,	// (0x00054905) popup_note_window_t2

0x2465,	// (0x0005491b) popup_note_window_t3_ParamLimits

0x2465,	// (0x0005491b) popup_note_window_t3

0x247b,	// (0x00054931) popup_note_window_t4_ParamLimits

0x247b,	// (0x00054931) popup_note_window_t4

0x24a3,	// (0x00054959) popup_note_window_t5_ParamLimits

0x24a3,	// (0x00054959) popup_note_window_t5

0x0004,

0xf59b,	// (0x00061a51) popup_note_window_t_ParamLimits

0xf59b,	// (0x00061a51) popup_note_window_t

0x24c7,	// (0x0005497d) bg_popup_window_pane_cp6_ParamLimits

0x24c7,	// (0x0005497d) bg_popup_window_pane_cp6

0x4f72,	// (0x00057428) popup_note_image_window_g1_ParamLimits

0x4f72,	// (0x00057428) popup_note_image_window_g1

0x4f7e,	// (0x00057434) popup_note_image_window_g2_ParamLimits

0x4f7e,	// (0x00057434) popup_note_image_window_g2

0x0001,

0xf86b,	// (0x00061d21) popup_note_image_window_g_ParamLimits

0xf86b,	// (0x00061d21) popup_note_image_window_g

0x4f97,	// (0x0005744d) popup_note_image_window_t1_ParamLimits

0x4f97,	// (0x0005744d) popup_note_image_window_t1

0x4fb0,	// (0x00057466) popup_note_image_window_t2_ParamLimits

0x4fb0,	// (0x00057466) popup_note_image_window_t2

0x4fc9,	// (0x0005747f) popup_note_image_window_t3_ParamLimits

0x4fc9,	// (0x0005747f) popup_note_image_window_t3

0x0002,

0xf870,	// (0x00061d26) popup_note_image_window_t_ParamLimits

0xf870,	// (0x00061d26) popup_note_image_window_t

0x4e32,	// (0x000572e8) bg_popup_window_pane_cp7_ParamLimits

0x4e32,	// (0x000572e8) bg_popup_window_pane_cp7

0x4e62,	// (0x00057318) popup_note_wait_window_g1_ParamLimits

0x4e62,	// (0x00057318) popup_note_wait_window_g1

0x4e6e,	// (0x00057324) popup_note_wait_window_g2_ParamLimits

0x4e6e,	// (0x00057324) popup_note_wait_window_g2

0x0002,

0xf859,	// (0x00061d0f) popup_note_wait_window_g_ParamLimits

0xf859,	// (0x00061d0f) popup_note_wait_window_g

0x4e86,	// (0x0005733c) popup_note_wait_window_t1_ParamLimits

0x4e86,	// (0x0005733c) popup_note_wait_window_t1

0x4ead,	// (0x00057363) popup_note_wait_window_t2_ParamLimits

0x4ead,	// (0x00057363) popup_note_wait_window_t2

0x4ecb,	// (0x00057381) popup_note_wait_window_t3_ParamLimits

0x4ecb,	// (0x00057381) popup_note_wait_window_t3

0x4ede,	// (0x00057394) popup_note_wait_window_t4_ParamLimits

0x4ede,	// (0x00057394) popup_note_wait_window_t4

0x0004,

0xf860,	// (0x00061d16) popup_note_wait_window_t_ParamLimits

0xf860,	// (0x00061d16) popup_note_wait_window_t

0x4f03,	// (0x000573b9) wait_bar_pane_ParamLimits

0x4f03,	// (0x000573b9) wait_bar_pane

0xd2ad,	// (0x0005f763) wait_anim_pane

0xd2ad,	// (0x0005f763) wait_border_pane

0xd2a3,	// (0x0005f759) wait_anim_pane_g1

0xd2a3,	// (0x0005f759) wait_anim_pane_g2

0x0001,

0xf724,	// (0x00061bda) wait_anim_pane_g

0x4dd6,	// (0x0005728c) wait_border_pane_g1

0x4de1,	// (0x00057297) wait_border_pane_g2

0x4dea,	// (0x000572a0) wait_border_pane_g3

0x0002,

0xf852,	// (0x00061d08) wait_border_pane_g

0x4c40,	// (0x000570f6) bg_popup_window_pane_cp16_ParamLimits

0x4c40,	// (0x000570f6) bg_popup_window_pane_cp16

0x4d40,	// (0x000571f6) indicator_popup_pane_cp4_ParamLimits

0x4d40,	// (0x000571f6) indicator_popup_pane_cp4

0x4d54,	// (0x0005720a) popup_query_data_window_t1_ParamLimits

0x4d54,	// (0x0005720a) popup_query_data_window_t1

0x4d66,	// (0x0005721c) popup_query_data_window_t2_ParamLimits

0x4d66,	// (0x0005721c) popup_query_data_window_t2

0x4d7f,	// (0x00057235) popup_query_data_window_t3_ParamLimits

0x4d7f,	// (0x00057235) popup_query_data_window_t3

0x0002,

0xf84b,	// (0x00061d01) popup_query_data_window_t_ParamLimits

0xf84b,	// (0x00061d01) popup_query_data_window_t

0x4d99,	// (0x0005724f) query_popup_data_pane_ParamLimits

0x4d99,	// (0x0005724f) query_popup_data_pane

0x4dad,	// (0x00057263) query_popup_data_pane_cp1_ParamLimits

0x4dad,	// (0x00057263) query_popup_data_pane_cp1

0x4c40,	// (0x000570f6) bg_popup_window_pane_cp10_ParamLimits

0x4c40,	// (0x000570f6) bg_popup_window_pane_cp10

0x4c72,	// (0x00057128) indicator_popup_pane_ParamLimits

0x4c72,	// (0x00057128) indicator_popup_pane

0x4c94,	// (0x0005714a) popup_query_code_window_t1_ParamLimits

0x4c94,	// (0x0005714a) popup_query_code_window_t1

0x4cae,	// (0x00057164) popup_query_code_window_t2_ParamLimits

0x4cae,	// (0x00057164) popup_query_code_window_t2

0x4cf7,	// (0x000571ad) popup_query_code_window_t3_ParamLimits

0x4cf7,	// (0x000571ad) popup_query_code_window_t3

0x0002,

0xf844,	// (0x00061cfa) popup_query_code_window_t_ParamLimits

0xf844,	// (0x00061cfa) popup_query_code_window_t

0x4d26,	// (0x000571dc) query_popup_pane_ParamLimits

0x4d26,	// (0x000571dc) query_popup_pane

0x24c7,	// (0x0005497d) bg_popup_window_pane_cp15_ParamLimits

0x24c7,	// (0x0005497d) bg_popup_window_pane_cp15

0x24e7,	// (0x0005499d) indicator_popup_pane_cp1_ParamLimits

0x24e7,	// (0x0005499d) indicator_popup_pane_cp1

0x24fa,	// (0x000549b0) indicator_popup_pane_cp2_ParamLimits

0x24fa,	// (0x000549b0) indicator_popup_pane_cp2

0x2515,	// (0x000549cb) popup_query_data_code_window_g1_ParamLimits

0x2515,	// (0x000549cb) popup_query_data_code_window_g1

0x2528,	// (0x000549de) popup_query_data_code_window_t1_ParamLimits

0x2528,	// (0x000549de) popup_query_data_code_window_t1

0x253a,	// (0x000549f0) popup_query_data_code_window_t2_ParamLimits

0x253a,	// (0x000549f0) popup_query_data_code_window_t2

0x254c,	// (0x00054a02) popup_query_data_code_window_t3_ParamLimits

0x254c,	// (0x00054a02) popup_query_data_code_window_t3

0x2562,	// (0x00054a18) popup_query_data_code_window_t4_ParamLimits

0x2562,	// (0x00054a18) popup_query_data_code_window_t4

0x0003,

0xf5a6,	// (0x00061a5c) popup_query_data_code_window_t_ParamLimits

0xf5a6,	// (0x00061a5c) popup_query_data_code_window_t

0x0a5a,	// (0x00052f10) list_single_midp_graphic_pane_g3

0x257c,	// (0x00054a32) query_popup_data_pane_cp2_ParamLimits

0x258f,	// (0x00054a45) query_popup_pane_cp2_ParamLimits

0x258f,	// (0x00054a45) query_popup_pane_cp2

0xd2ad,	// (0x0005f763) bg_popup_window_pane_cp11

0x4c38,	// (0x000570ee) heading_pane_cp5

0x267f,	// (0x00054b35) listscroll_popup_info_pane

0xd2ad,	// (0x0005f763) input_focus_pane_cp3

0x25aa,	// (0x00054a60) query_popup_pane_t1

0x25b8,	// (0x00054a6e) list_popup_info_pane_ParamLimits

0x25b8,	// (0x00054a6e) list_popup_info_pane

0x25c7,	// (0x00054a7d) listscroll_popup_info_pane_g1

0x25cf,	// (0x00054a85) scroll_pane_cp7

0x25d9,	// (0x00054a8f) popup_info_list_pane_t1_ParamLimits

0x25d9,	// (0x00054a8f) popup_info_list_pane_t1

0x25f3,	// (0x00054aa9) popup_info_list_pane_t2_ParamLimits

0x25f3,	// (0x00054aa9) popup_info_list_pane_t2

0x0001,

0xf5af,	// (0x00061a65) popup_info_list_pane_t_ParamLimits

0xf5af,	// (0x00061a65) popup_info_list_pane_t

0xd2ad,	// (0x0005f763) bg_popup_window_pane_cp12

0x6025,	// (0x000584db) find_popup_pane

0x2195,	// (0x0005464b) bg_popup_window_pane_cp3

0x260d,	// (0x00054ac3) heading_pane_cp3

0x2619,	// (0x00054acf) listscroll_popup_graphic_pane

0xd2ad,	// (0x0005f763) bg_popup_window_pane_cp4

0xb1d7,	// (0x0005d68d) heading_pane_cp4

0x267f,	// (0x00054b35) listscroll_popup_colour_pane

0xb1e1,	// (0x0005d697) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xb1e1,	// (0x0005d697) cell_large_graphic_colour_none_popup_pane

0xb1f5,	// (0x0005d6ab) grid_large_graphic_colour_popup_pane_ParamLimits

0xb1f5,	// (0x0005d6ab) grid_large_graphic_colour_popup_pane

0xb221,	// (0x0005d6d7) listscroll_popup_colour_pane_g1_ParamLimits

0xb221,	// (0x0005d6d7) listscroll_popup_colour_pane_g1

0xb238,	// (0x0005d6ee) listscroll_popup_colour_pane_g2_ParamLimits

0xb238,	// (0x0005d6ee) listscroll_popup_colour_pane_g2

0xb24f,	// (0x0005d705) listscroll_popup_colour_pane_g3_ParamLimits

0xb24f,	// (0x0005d705) listscroll_popup_colour_pane_g3

0xb25f,	// (0x0005d715) listscroll_popup_colour_pane_g4_ParamLimits

0xb25f,	// (0x0005d715) listscroll_popup_colour_pane_g4

0x0003,

0xf5b4,	// (0x00061a6a) listscroll_popup_colour_pane_g_ParamLimits

0xf5b4,	// (0x00061a6a) listscroll_popup_colour_pane_g

0x2719,	// (0x00054bcf) scroll_pane_cp6_ParamLimits

0x2719,	// (0x00054bcf) scroll_pane_cp6

0xb273,	// (0x0005d729) cell_large_graphic_colour_popup_pane_ParamLimits

0xb273,	// (0x0005d729) cell_large_graphic_colour_popup_pane

0x2750,	// (0x00054c06) cell_large_graphic_colour_none_popup_pane_t1

0xd2ad,	// (0x0005f763) grid_highlight_pane_cp5

0x275f,	// (0x00054c15) cell_large_graphic_colour_popup_pane_g1

0x2767,	// (0x00054c1d) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5bd,	// (0x00061a73) cell_large_graphic_colour_popup_pane_g

0x276f,	// (0x00054c25) cell_large_graphic_colour_popup_pane_g2_copy1

0x2778,	// (0x00054c2e) grid_highlight_pane_cp4

0x2780,	// (0x00054c36) bg_popup_window_pane_cp8_ParamLimits

0x2780,	// (0x00054c36) bg_popup_window_pane_cp8

0x279b,	// (0x00054c51) popup_snote_single_text_window_g1_ParamLimits

0x279b,	// (0x00054c51) popup_snote_single_text_window_g1

0x27ad,	// (0x00054c63) popup_snote_single_text_window_t1_ParamLimits

0x27ad,	// (0x00054c63) popup_snote_single_text_window_t1

0x27c0,	// (0x00054c76) popup_snote_single_text_window_t2_ParamLimits

0x27c0,	// (0x00054c76) popup_snote_single_text_window_t2

0x27d3,	// (0x00054c89) popup_snote_single_text_window_t3_ParamLimits

0x27d3,	// (0x00054c89) popup_snote_single_text_window_t3

0x280c,	// (0x00054cc2) popup_snote_single_text_window_t4_ParamLimits

0x280c,	// (0x00054cc2) popup_snote_single_text_window_t4

0x2840,	// (0x00054cf6) popup_snote_single_text_window_t5_ParamLimits

0x2840,	// (0x00054cf6) popup_snote_single_text_window_t5

0x0004,

0xf5c2,	// (0x00061a78) popup_snote_single_text_window_t_ParamLimits

0xf5c2,	// (0x00061a78) popup_snote_single_text_window_t

0x286f,	// (0x00054d25) bg_popup_window_pane_cp9_ParamLimits

0x286f,	// (0x00054d25) bg_popup_window_pane_cp9

0x279b,	// (0x00054c51) popup_snote_single_graphic_window_g1_ParamLimits

0x279b,	// (0x00054c51) popup_snote_single_graphic_window_g1

0x287d,	// (0x00054d33) popup_snote_single_graphic_window_g2_ParamLimits

0x287d,	// (0x00054d33) popup_snote_single_graphic_window_g2

0x0001,

0xf5cd,	// (0x00061a83) popup_snote_single_graphic_window_g_ParamLimits

0xf5cd,	// (0x00061a83) popup_snote_single_graphic_window_g

0x2889,	// (0x00054d3f) popup_snote_single_graphic_window_t1_ParamLimits

0x2889,	// (0x00054d3f) popup_snote_single_graphic_window_t1

0x289c,	// (0x00054d52) popup_snote_single_graphic_window_t2_ParamLimits

0x289c,	// (0x00054d52) popup_snote_single_graphic_window_t2

0x28af,	// (0x00054d65) popup_snote_single_graphic_window_t3_ParamLimits

0x28af,	// (0x00054d65) popup_snote_single_graphic_window_t3

0x28e8,	// (0x00054d9e) popup_snote_single_graphic_window_t4_ParamLimits

0x28e8,	// (0x00054d9e) popup_snote_single_graphic_window_t4

0x291c,	// (0x00054dd2) popup_snote_single_graphic_window_t5_ParamLimits

0x291c,	// (0x00054dd2) popup_snote_single_graphic_window_t5

0x0004,

0xf5d2,	// (0x00061a88) popup_snote_single_graphic_window_t_ParamLimits

0xf5d2,	// (0x00061a88) popup_snote_single_graphic_window_t

0x5f63,	// (0x00058419) grid_graphic_popup_pane_ParamLimits

0x5f63,	// (0x00058419) grid_graphic_popup_pane

0x5f91,	// (0x00058447) listscroll_popup_graphic_pane_g1_ParamLimits

0x5f91,	// (0x00058447) listscroll_popup_graphic_pane_g1

0xd77c,	// (0x0005fc32) listscroll_popup_graphic_pane_g2_ParamLimits

0xd77c,	// (0x0005fc32) listscroll_popup_graphic_pane_g2

0x0001,

0xf9c1,	// (0x00061e77) listscroll_popup_graphic_pane_g_ParamLimits

0xf9c1,	// (0x00061e77) listscroll_popup_graphic_pane_g

0x5fb9,	// (0x0005846f) scroll_pane_cp5

0xd73c,	// (0x0005fbf2) cell_graphic_popup_pane_ParamLimits

0xd73c,	// (0x0005fbf2) cell_graphic_popup_pane

0x5eec,	// (0x000583a2) cell_graphic_popup_pane_g1

0x5ef4,	// (0x000583aa) cell_graphic_popup_pane_g2

0x276f,	// (0x00054c25) cell_graphic_popup_pane_g3

0x0002,

0xf9ba,	// (0x00061e70) cell_graphic_popup_pane_g

0x5efd,	// (0x000583b3) cell_graphic_popup_pane_t2

0x2778,	// (0x00054c2e) grid_highlight_pane_cp3

0x295d,	// (0x00054e13) list_gen_pane_ParamLimits

0x295d,	// (0x00054e13) list_gen_pane

0x298f,	// (0x00054e45) scroll_pane

0xd6f7,	// (0x0005fbad) bg_list_pane_g1_ParamLimits

0xd6f7,	// (0x0005fbad) bg_list_pane_g1

0x5e69,	// (0x0005831f) bg_list_pane_g2_ParamLimits

0x5e69,	// (0x0005831f) bg_list_pane_g2

0x5e7c,	// (0x00058332) bg_list_pane_g3_ParamLimits

0x5e7c,	// (0x00058332) bg_list_pane_g3

0x5e8e,	// (0x00058344) bg_list_pane_g4_ParamLimits

0x5e8e,	// (0x00058344) bg_list_pane_g4

0xd712,	// (0x0005fbc8) bg_list_pane_g5_ParamLimits

0xd712,	// (0x0005fbc8) bg_list_pane_g5

0x0004,

0xf9af,	// (0x00061e65) bg_list_pane_g_ParamLimits

0xf9af,	// (0x00061e65) bg_list_pane_g

0xd6ba,	// (0x0005fb70) list_double2_graphic_large_graphic_pane_ParamLimits

0xd6ba,	// (0x0005fb70) list_double2_graphic_large_graphic_pane

0xd6ba,	// (0x0005fb70) list_double2_graphic_pane_ParamLimits

0xd6ba,	// (0x0005fb70) list_double2_graphic_pane

0xd6ba,	// (0x0005fb70) list_double2_large_graphic_pane_ParamLimits

0xd6ba,	// (0x0005fb70) list_double2_large_graphic_pane

0xd6ba,	// (0x0005fb70) list_double2_pane_ParamLimits

0xd6ba,	// (0x0005fb70) list_double2_pane

0xd6ba,	// (0x0005fb70) list_double_graphic_heading_pane_ParamLimits

0xd6ba,	// (0x0005fb70) list_double_graphic_heading_pane

0xd6ba,	// (0x0005fb70) list_double_graphic_pane_ParamLimits

0xd6ba,	// (0x0005fb70) list_double_graphic_pane

0xd6ba,	// (0x0005fb70) list_double_heading_pane_ParamLimits

0xd6ba,	// (0x0005fb70) list_double_heading_pane

0xd6ba,	// (0x0005fb70) list_double_large_graphic_pane_ParamLimits

0xd6ba,	// (0x0005fb70) list_double_large_graphic_pane

0xd6ba,	// (0x0005fb70) list_double_number_pane_ParamLimits

0xd6ba,	// (0x0005fb70) list_double_number_pane

0xd6ba,	// (0x0005fb70) list_double_pane_ParamLimits

0xd6ba,	// (0x0005fb70) list_double_pane

0xd6ba,	// (0x0005fb70) list_double_time_pane_ParamLimits

0xd6ba,	// (0x0005fb70) list_double_time_pane

0xd6ba,	// (0x0005fb70) list_setting_number_pane_ParamLimits

0xd6ba,	// (0x0005fb70) list_setting_number_pane

0xd6ba,	// (0x0005fb70) list_setting_pane_ParamLimits

0xd6ba,	// (0x0005fb70) list_setting_pane

0xd6ce,	// (0x0005fb84) list_single_2graphic_pane_ParamLimits

0xd6ce,	// (0x0005fb84) list_single_2graphic_pane

0xd6ce,	// (0x0005fb84) list_single_graphic_heading_pane_ParamLimits

0xd6ce,	// (0x0005fb84) list_single_graphic_heading_pane

0xd6ce,	// (0x0005fb84) list_single_graphic_pane_ParamLimits

0xd6ce,	// (0x0005fb84) list_single_graphic_pane

0xd6ce,	// (0x0005fb84) list_single_heading_pane_ParamLimits

0xd6ce,	// (0x0005fb84) list_single_heading_pane

0xd6ce,	// (0x0005fb84) list_single_large_graphic_pane_ParamLimits

0xd6ce,	// (0x0005fb84) list_single_large_graphic_pane

0xd6ce,	// (0x0005fb84) list_single_number_heading_pane_ParamLimits

0xd6ce,	// (0x0005fb84) list_single_number_heading_pane

0xd6ce,	// (0x0005fb84) list_single_number_pane_ParamLimits

0xd6ce,	// (0x0005fb84) list_single_number_pane

0xd6ce,	// (0x0005fb84) list_single_pane_ParamLimits

0xd6ce,	// (0x0005fb84) list_single_pane

0xd2ad,	// (0x0005f763) list_highlight_pane_cp1

0x3865,	// (0x00055d1b) list_single_pane_g1_ParamLimits

0x3865,	// (0x00055d1b) list_single_pane_g1

0x2dfa,	// (0x000552b0) list_single_pane_g2_ParamLimits

0x2dfa,	// (0x000552b0) list_single_pane_g2

0x0001,

0xf5ee,	// (0x00061aa4) list_single_pane_g_ParamLimits

0xf5ee,	// (0x00061aa4) list_single_pane_g

0x0f79,	// (0x0005342f) list_single_pane_t1_ParamLimits

0x0f79,	// (0x0005342f) list_single_pane_t1

0x3865,	// (0x00055d1b) list_single_number_pane_g1_ParamLimits

0x3865,	// (0x00055d1b) list_single_number_pane_g1

0x2dfa,	// (0x000552b0) list_single_number_pane_g2_ParamLimits

0x2dfa,	// (0x000552b0) list_single_number_pane_g2

0x0001,

0xf5ee,	// (0x00061aa4) list_single_number_pane_g_ParamLimits

0xf5ee,	// (0x00061aa4) list_single_number_pane_g

0x0a1f,	// (0x00052ed5) list_single_number_pane_t1_ParamLimits

0x0a1f,	// (0x00052ed5) list_single_number_pane_t1

0xbd6f,	// (0x0005e225) list_single_number_pane_t2_ParamLimits

0xbd6f,	// (0x0005e225) list_single_number_pane_t2

0x0001,

0xf970,	// (0x00061e26) list_single_number_pane_t_ParamLimits

0xf970,	// (0x00061e26) list_single_number_pane_t

0xb29e,	// (0x0005d754) list_single_graphic_pane_g1_ParamLimits

0xb29e,	// (0x0005d754) list_single_graphic_pane_g1

0x3865,	// (0x00055d1b) list_single_graphic_pane_g2_ParamLimits

0x3865,	// (0x00055d1b) list_single_graphic_pane_g2

0x2dfa,	// (0x000552b0) list_single_graphic_pane_g3_ParamLimits

0x2dfa,	// (0x000552b0) list_single_graphic_pane_g3

0x0002,

0xf5dd,	// (0x00061a93) list_single_graphic_pane_g_ParamLimits

0xf5dd,	// (0x00061a93) list_single_graphic_pane_g

0x1684,	// (0x00053b3a) list_single_graphic_pane_t1_ParamLimits

0x1684,	// (0x00053b3a) list_single_graphic_pane_t1

0xb2aa,	// (0x0005d760) list_single_heading_pane_g1_ParamLimits

0xb2aa,	// (0x0005d760) list_single_heading_pane_g1

0x2dfa,	// (0x000552b0) list_single_heading_pane_g2_ParamLimits

0x2dfa,	// (0x000552b0) list_single_heading_pane_g2

0x0001,

0xf5e4,	// (0x00061a9a) list_single_heading_pane_g_ParamLimits

0xf5e4,	// (0x00061a9a) list_single_heading_pane_g

0xb2bd,	// (0x0005d773) list_single_heading_pane_t1_ParamLimits

0xb2bd,	// (0x0005d773) list_single_heading_pane_t1

0xb2d3,	// (0x0005d789) list_single_heading_pane_t2_ParamLimits

0xb2d3,	// (0x0005d789) list_single_heading_pane_t2

0x0001,

0xf5e9,	// (0x00061a9f) list_single_heading_pane_t_ParamLimits

0xf5e9,	// (0x00061a9f) list_single_heading_pane_t

0x3865,	// (0x00055d1b) list_single_number_heading_pane_g1_ParamLimits

0x3865,	// (0x00055d1b) list_single_number_heading_pane_g1

0x2dfa,	// (0x000552b0) list_single_number_heading_pane_g2_ParamLimits

0x2dfa,	// (0x000552b0) list_single_number_heading_pane_g2

0x0001,

0xf5ee,	// (0x00061aa4) list_single_number_heading_pane_g_ParamLimits

0xf5ee,	// (0x00061aa4) list_single_number_heading_pane_g

0x0f8f,	// (0x00053445) list_single_number_heading_pane_t1_ParamLimits

0x0f8f,	// (0x00053445) list_single_number_heading_pane_t1

0xb2e5,	// (0x0005d79b) list_single_number_heading_pane_t2_ParamLimits

0xb2e5,	// (0x0005d79b) list_single_number_heading_pane_t2

0x0f53,	// (0x00053409) list_single_number_heading_pane_t3_ParamLimits

0x0f53,	// (0x00053409) list_single_number_heading_pane_t3

0x0002,

0xf5f3,	// (0x00061aa9) list_single_number_heading_pane_t_ParamLimits

0xf5f3,	// (0x00061aa9) list_single_number_heading_pane_t

0xb2f7,	// (0x0005d7ad) list_single_graphic_heading_pane_g1_ParamLimits

0xb2f7,	// (0x0005d7ad) list_single_graphic_heading_pane_g1

0xb30f,	// (0x0005d7c5) list_single_graphic_heading_pane_g4_ParamLimits

0xb30f,	// (0x0005d7c5) list_single_graphic_heading_pane_g4

0x2dfa,	// (0x000552b0) list_single_graphic_heading_pane_g5_ParamLimits

0x2dfa,	// (0x000552b0) list_single_graphic_heading_pane_g5

0x0002,

0xf5fa,	// (0x00061ab0) list_single_graphic_heading_pane_g_ParamLimits

0xf5fa,	// (0x00061ab0) list_single_graphic_heading_pane_g

0x0f8f,	// (0x00053445) list_single_graphic_heading_pane_t1_ParamLimits

0x0f8f,	// (0x00053445) list_single_graphic_heading_pane_t1

0xb320,	// (0x0005d7d6) list_single_graphic_heading_pane_t2_ParamLimits

0xb320,	// (0x0005d7d6) list_single_graphic_heading_pane_t2

0x0001,

0xf601,	// (0x00061ab7) list_single_graphic_heading_pane_t_ParamLimits

0xf601,	// (0x00061ab7) list_single_graphic_heading_pane_t

0x2e4a,	// (0x00055300) list_single_large_graphic_pane_g1_ParamLimits

0x2e4a,	// (0x00055300) list_single_large_graphic_pane_g1

0x3865,	// (0x00055d1b) list_single_large_graphic_pane_g2_ParamLimits

0x3865,	// (0x00055d1b) list_single_large_graphic_pane_g2

0x2dfa,	// (0x000552b0) list_single_large_graphic_pane_g3_ParamLimits

0x2dfa,	// (0x000552b0) list_single_large_graphic_pane_g3

0x0002,

0xf606,	// (0x00061abc) list_single_large_graphic_pane_g_ParamLimits

0xf606,	// (0x00061abc) list_single_large_graphic_pane_g

0x4de1,	// (0x00057297) wait_border_pane_g2_copy1

0xb338,	// (0x0005d7ee) list_single_large_graphic_pane_g4_cp2

0x0f8f,	// (0x00053445) list_single_large_graphic_pane_t1_ParamLimits

0x0f8f,	// (0x00053445) list_single_large_graphic_pane_t1

0x2ae2,	// (0x00054f98) list_double_pane_g1_ParamLimits

0x2ae2,	// (0x00054f98) list_double_pane_g1

0xb340,	// (0x0005d7f6) list_double_pane_g2_ParamLimits

0xb340,	// (0x0005d7f6) list_double_pane_g2

0x0001,

0xf60d,	// (0x00061ac3) list_double_pane_g_ParamLimits

0xf60d,	// (0x00061ac3) list_double_pane_g

0xb34c,	// (0x0005d802) list_double_pane_t1_ParamLimits

0xb34c,	// (0x0005d802) list_double_pane_t1

0xb362,	// (0x0005d818) list_double_pane_t2_ParamLimits

0xb362,	// (0x0005d818) list_double_pane_t2

0x0001,

0xf612,	// (0x00061ac8) list_double_pane_t_ParamLimits

0xf612,	// (0x00061ac8) list_double_pane_t

0xb374,	// (0x0005d82a) list_double2_pane_g1_ParamLimits

0xb374,	// (0x0005d82a) list_double2_pane_g1

0xb385,	// (0x0005d83b) list_double2_pane_g2_ParamLimits

0xb385,	// (0x0005d83b) list_double2_pane_g2

0x0001,

0xf617,	// (0x00061acd) list_double2_pane_g_ParamLimits

0xf617,	// (0x00061acd) list_double2_pane_g

0xb391,	// (0x0005d847) list_double2_pane_t1_ParamLimits

0xb391,	// (0x0005d847) list_double2_pane_t1

0xb3a7,	// (0x0005d85d) list_double2_pane_t2_ParamLimits

0xb3a7,	// (0x0005d85d) list_double2_pane_t2

0x0001,

0xf61c,	// (0x00061ad2) list_double2_pane_t_ParamLimits

0xf61c,	// (0x00061ad2) list_double2_pane_t

0x2ae2,	// (0x00054f98) list_double_number_pane_g1_ParamLimits

0x2ae2,	// (0x00054f98) list_double_number_pane_g1

0xb340,	// (0x0005d7f6) list_double_number_pane_g2_ParamLimits

0xb340,	// (0x0005d7f6) list_double_number_pane_g2

0x0001,

0xf60d,	// (0x00061ac3) list_double_number_pane_g_ParamLimits

0xf60d,	// (0x00061ac3) list_double_number_pane_g

0xb3b9,	// (0x0005d86f) list_double_number_pane_t1_ParamLimits

0xb3b9,	// (0x0005d86f) list_double_number_pane_t1

0xb3cb,	// (0x0005d881) list_double_number_pane_t2_ParamLimits

0xb3cb,	// (0x0005d881) list_double_number_pane_t2

0xb3e1,	// (0x0005d897) list_double_number_pane_t3_ParamLimits

0xb3e1,	// (0x0005d897) list_double_number_pane_t3

0x0002,

0xf621,	// (0x00061ad7) list_double_number_pane_t_ParamLimits

0xf621,	// (0x00061ad7) list_double_number_pane_t

0xb3f3,	// (0x0005d8a9) list_double_graphic_pane_g1_ParamLimits

0xb3f3,	// (0x0005d8a9) list_double_graphic_pane_g1

0xb3ff,	// (0x0005d8b5) list_double_graphic_pane_g2_ParamLimits

0xb3ff,	// (0x0005d8b5) list_double_graphic_pane_g2

0xb40e,	// (0x0005d8c4) list_double_graphic_pane_g3_ParamLimits

0xb40e,	// (0x0005d8c4) list_double_graphic_pane_g3

0x0003,

0xf628,	// (0x00061ade) list_double_graphic_pane_g_ParamLimits

0xf628,	// (0x00061ade) list_double_graphic_pane_g

0xb426,	// (0x0005d8dc) list_double_graphic_pane_t1_ParamLimits

0xb426,	// (0x0005d8dc) list_double_graphic_pane_t1

0xb43c,	// (0x0005d8f2) list_double_graphic_pane_t2_ParamLimits

0xb43c,	// (0x0005d8f2) list_double_graphic_pane_t2

0x0001,

0xf631,	// (0x00061ae7) list_double_graphic_pane_t_ParamLimits

0xf631,	// (0x00061ae7) list_double_graphic_pane_t

0xb44e,	// (0x0005d904) list_double2_graphic_pane_g1_ParamLimits

0xb44e,	// (0x0005d904) list_double2_graphic_pane_g1

0xb45a,	// (0x0005d910) list_double2_graphic_pane_g2_ParamLimits

0xb45a,	// (0x0005d910) list_double2_graphic_pane_g2

0xb466,	// (0x0005d91c) list_double2_graphic_pane_g3_ParamLimits

0xb466,	// (0x0005d91c) list_double2_graphic_pane_g3

0x0002,

0xf636,	// (0x00061aec) list_double2_graphic_pane_g_ParamLimits

0xf636,	// (0x00061aec) list_double2_graphic_pane_g

0xb472,	// (0x0005d928) list_double2_graphic_pane_t1_ParamLimits

0xb472,	// (0x0005d928) list_double2_graphic_pane_t1

0xb488,	// (0x0005d93e) list_double2_graphic_pane_t2_ParamLimits

0xb488,	// (0x0005d93e) list_double2_graphic_pane_t2

0x0001,

0xf63d,	// (0x00061af3) list_double2_graphic_pane_t_ParamLimits

0xf63d,	// (0x00061af3) list_double2_graphic_pane_t

0xb49a,	// (0x0005d950) list_double_large_graphic_pane_g1_ParamLimits

0xb49a,	// (0x0005d950) list_double_large_graphic_pane_g1

0xb4c5,	// (0x0005d97b) list_double_large_graphic_pane_g2_ParamLimits

0xb4c5,	// (0x0005d97b) list_double_large_graphic_pane_g2

0xb340,	// (0x0005d7f6) list_double_large_graphic_pane_g3_ParamLimits

0xb340,	// (0x0005d7f6) list_double_large_graphic_pane_g3

0xb4db,	// (0x0005d991) list_double_large_graphic_pane_g4_ParamLimits

0xb4db,	// (0x0005d991) list_double_large_graphic_pane_g4

0x0004,

0xf642,	// (0x00061af8) list_double_large_graphic_pane_g_ParamLimits

0xf642,	// (0x00061af8) list_double_large_graphic_pane_g

0xb4ee,	// (0x0005d9a4) list_double_large_graphic_pane_t1_ParamLimits

0xb4ee,	// (0x0005d9a4) list_double_large_graphic_pane_t1

0xb507,	// (0x0005d9bd) list_double_large_graphic_pane_t2_ParamLimits

0xb507,	// (0x0005d9bd) list_double_large_graphic_pane_t2

0x0001,

0xf64d,	// (0x00061b03) list_double_large_graphic_pane_t_ParamLimits

0xf64d,	// (0x00061b03) list_double_large_graphic_pane_t

0xb519,	// (0x0005d9cf) list_double2_large_graphic_pane_g1_ParamLimits

0xb519,	// (0x0005d9cf) list_double2_large_graphic_pane_g1

0xb525,	// (0x0005d9db) list_double2_large_graphic_pane_g2_ParamLimits

0xb525,	// (0x0005d9db) list_double2_large_graphic_pane_g2

0xb466,	// (0x0005d91c) list_double2_large_graphic_pane_g3_ParamLimits

0xb466,	// (0x0005d91c) list_double2_large_graphic_pane_g3

0x0002,

0xf652,	// (0x00061b08) list_double2_large_graphic_pane_g_ParamLimits

0xf652,	// (0x00061b08) list_double2_large_graphic_pane_g

0xb536,	// (0x0005d9ec) list_double2_large_graphic_pane_t1_ParamLimits

0xb536,	// (0x0005d9ec) list_double2_large_graphic_pane_t1

0xb54c,	// (0x0005da02) list_double2_large_graphic_pane_t2_ParamLimits

0xb54c,	// (0x0005da02) list_double2_large_graphic_pane_t2

0x0001,

0xf659,	// (0x00061b0f) list_double2_large_graphic_pane_t_ParamLimits

0xf659,	// (0x00061b0f) list_double2_large_graphic_pane_t

0xb55e,	// (0x0005da14) list_double_heading_pane_g1_ParamLimits

0xb55e,	// (0x0005da14) list_double_heading_pane_g1

0xb56f,	// (0x0005da25) list_double_heading_pane_g2_ParamLimits

0xb56f,	// (0x0005da25) list_double_heading_pane_g2

0x0001,

0xf65e,	// (0x00061b14) list_double_heading_pane_g_ParamLimits

0xf65e,	// (0x00061b14) list_double_heading_pane_g

0xb57b,	// (0x0005da31) list_double_heading_pane_t1_ParamLimits

0xb57b,	// (0x0005da31) list_double_heading_pane_t1

0xb3a7,	// (0x0005d85d) list_double_heading_pane_t2_ParamLimits

0xb3a7,	// (0x0005d85d) list_double_heading_pane_t2

0x0001,

0xf663,	// (0x00061b19) list_double_heading_pane_t_ParamLimits

0xf663,	// (0x00061b19) list_double_heading_pane_t

0xb591,	// (0x0005da47) list_double_graphic_heading_pane_g1_ParamLimits

0xb591,	// (0x0005da47) list_double_graphic_heading_pane_g1

0xb55e,	// (0x0005da14) list_double_graphic_heading_pane_g2_ParamLimits

0xb55e,	// (0x0005da14) list_double_graphic_heading_pane_g2

0xb56f,	// (0x0005da25) list_double_graphic_heading_pane_g3_ParamLimits

0xb56f,	// (0x0005da25) list_double_graphic_heading_pane_g3

0x0002,

0xf668,	// (0x00061b1e) list_double_graphic_heading_pane_g_ParamLimits

0xf668,	// (0x00061b1e) list_double_graphic_heading_pane_g

0xb59d,	// (0x0005da53) list_double_graphic_heading_pane_t1_ParamLimits

0xb59d,	// (0x0005da53) list_double_graphic_heading_pane_t1

0xb488,	// (0x0005d93e) list_double_graphic_heading_pane_t2_ParamLimits

0xb488,	// (0x0005d93e) list_double_graphic_heading_pane_t2

0x0001,

0xf66f,	// (0x00061b25) list_double_graphic_heading_pane_t_ParamLimits

0xf66f,	// (0x00061b25) list_double_graphic_heading_pane_t

0xb5b3,	// (0x0005da69) list_double_time_pane_g1_ParamLimits

0xb5b3,	// (0x0005da69) list_double_time_pane_g1

0xb5c4,	// (0x0005da7a) list_double_time_pane_g2_ParamLimits

0xb5c4,	// (0x0005da7a) list_double_time_pane_g2

0x0001,

0xf674,	// (0x00061b2a) list_double_time_pane_g_ParamLimits

0xf674,	// (0x00061b2a) list_double_time_pane_g

0xb5d0,	// (0x0005da86) list_double_time_pane_t1_ParamLimits

0xb5d0,	// (0x0005da86) list_double_time_pane_t1

0xb5e6,	// (0x0005da9c) list_double_time_pane_t2_ParamLimits

0xb5e6,	// (0x0005da9c) list_double_time_pane_t2

0xb5f8,	// (0x0005daae) list_double_time_pane_t3_ParamLimits

0xb5f8,	// (0x0005daae) list_double_time_pane_t3

0xb60a,	// (0x0005dac0) list_double_time_pane_t4_ParamLimits

0xb60a,	// (0x0005dac0) list_double_time_pane_t4

0x0003,

0xf679,	// (0x00061b2f) list_double_time_pane_t_ParamLimits

0xf679,	// (0x00061b2f) list_double_time_pane_t

0xb61c,	// (0x0005dad2) list_setting_pane_g1_ParamLimits

0xb61c,	// (0x0005dad2) list_setting_pane_g1

0xb385,	// (0x0005d83b) list_setting_pane_g2_ParamLimits

0xb385,	// (0x0005d83b) list_setting_pane_g2

0x0001,

0xf682,	// (0x00061b38) list_setting_pane_g_ParamLimits

0xf682,	// (0x00061b38) list_setting_pane_g

0xb628,	// (0x0005dade) list_setting_pane_t1_ParamLimits

0xb628,	// (0x0005dade) list_setting_pane_t1

0xb642,	// (0x0005daf8) list_setting_pane_t2_ParamLimits

0xb642,	// (0x0005daf8) list_setting_pane_t2

0x0002,

0xf687,	// (0x00061b3d) list_setting_pane_t_ParamLimits

0xf687,	// (0x00061b3d) list_setting_pane_t

0xb681,	// (0x0005db37) set_value_pane_cp_ParamLimits

0xb681,	// (0x0005db37) set_value_pane_cp

0xb68f,	// (0x0005db45) list_setting_number_pane_g1_ParamLimits

0xb68f,	// (0x0005db45) list_setting_number_pane_g1

0xb69b,	// (0x0005db51) list_setting_number_pane_g2_ParamLimits

0xb69b,	// (0x0005db51) list_setting_number_pane_g2

0x0001,

0xf68e,	// (0x00061b44) list_setting_number_pane_g_ParamLimits

0xf68e,	// (0x00061b44) list_setting_number_pane_g

0xb6a7,	// (0x0005db5d) list_setting_number_pane_t1_ParamLimits

0xb6a7,	// (0x0005db5d) list_setting_number_pane_t1

0xb6c0,	// (0x0005db76) list_setting_number_pane_t2_ParamLimits

0xb6c0,	// (0x0005db76) list_setting_number_pane_t2

0xb6da,	// (0x0005db90) list_setting_number_pane_t3_ParamLimits

0xb6da,	// (0x0005db90) list_setting_number_pane_t3

0x0003,

0xf693,	// (0x00061b49) list_setting_number_pane_t_ParamLimits

0xf693,	// (0x00061b49) list_setting_number_pane_t

0xb681,	// (0x0005db37) set_value_pane_ParamLimits

0xb681,	// (0x0005db37) set_value_pane

0x2a6f,	// (0x00054f25) bg_set_opt_pane_ParamLimits

0x2a6f,	// (0x00054f25) bg_set_opt_pane

0x0125,	// (0x000525db) set_value_pane_t1

0x2a90,	// (0x00054f46) slider_set_pane_cp3

0x2a99,	// (0x00054f4f) volume_small_pane_cp

0x2aa2,	// (0x00054f58) list_form_gen_pane

0x2aab,	// (0x00054f61) scroll_pane_cp8

0xb71d,	// (0x0005dbd3) form_field_data_pane_ParamLimits

0xb71d,	// (0x0005dbd3) form_field_data_pane

0xb73a,	// (0x0005dbf0) form_field_data_wide_pane_ParamLimits

0xb73a,	// (0x0005dbf0) form_field_data_wide_pane

0xb75e,	// (0x0005dc14) form_field_popup_pane_ParamLimits

0xb75e,	// (0x0005dc14) form_field_popup_pane

0x01ac,	// (0x00052662) form_field_popup_wide_pane_ParamLimits

0x01ac,	// (0x00052662) form_field_popup_wide_pane

0x01cd,	// (0x00052683) form_field_slider_pane_ParamLimits

0x01cd,	// (0x00052683) form_field_slider_pane

0x01e0,	// (0x00052696) form_field_slider_wide_pane_ParamLimits

0x01e0,	// (0x00052696) form_field_slider_wide_pane

0x2abc,	// (0x00054f72) data_form_pane

0xb78a,	// (0x0005dc40) form_field_data_pane_t1

0x2ac8,	// (0x00054f7e) input_focus_pane

0x2ad6,	// (0x00054f8c) data_form_wide_pane

0x0223,	// (0x000526d9) form_field_data_wide_pane_t1

0x278d,	// (0x00054c43) input_focus_pane_cp6

0xb7a4,	// (0x0005dc5a) form_field_popup_pane_t1

0x2ac8,	// (0x00054f7e) input_focus_pane_cp7

0x2b02,	// (0x00054fb8) list_form_pane

0x0267,	// (0x0005271d) form_field_popup_wide_pane_t1

0x2ac8,	// (0x00054f7e) input_focus_pane_cp8

0x2b0e,	// (0x00054fc4) list_form_wide_pane

0xb7c6,	// (0x0005dc7c) form_field_slider_pane_t1_ParamLimits

0xb7c6,	// (0x0005dc7c) form_field_slider_pane_t1

0xb7de,	// (0x0005dc94) form_field_slider_pane_t2_ParamLimits

0xb7de,	// (0x0005dc94) form_field_slider_pane_t2

0x0001,

0xf6a3,	// (0x00061b59) form_field_slider_pane_t_ParamLimits

0xf6a3,	// (0x00061b59) form_field_slider_pane_t

0x2411,	// (0x000548c7) input_focus_pane_cp9_ParamLimits

0x2411,	// (0x000548c7) input_focus_pane_cp9

0xb7f3,	// (0x0005dca9) slider_cont_pane_ParamLimits

0xb7f3,	// (0x0005dca9) slider_cont_pane

0x2b1d,	// (0x00054fd3) form_field_slider_wide_pane_t1_ParamLimits

0x2b1d,	// (0x00054fd3) form_field_slider_wide_pane_t1

0x02c5,	// (0x0005277b) form_field_slider_wide_pane_t2_ParamLimits

0x02c5,	// (0x0005277b) form_field_slider_wide_pane_t2

0x0001,

0xf6a8,	// (0x00061b5e) form_field_slider_wide_pane_t_ParamLimits

0xf6a8,	// (0x00061b5e) form_field_slider_wide_pane_t

0x2411,	// (0x000548c7) input_focus_pane_cp10_ParamLimits

0x2411,	// (0x000548c7) input_focus_pane_cp10

0xb807,	// (0x0005dcbd) slider_cont_pane_cp1_ParamLimits

0xb807,	// (0x0005dcbd) slider_cont_pane_cp1

0xb81b,	// (0x0005dcd1) slider_form_pane_cp

0x2b2f,	// (0x00054fe5) input_focus_pane_g1

0x2b37,	// (0x00054fed) input_focus_pane_g2

0x2b3f,	// (0x00054ff5) input_focus_pane_g3

0x2b47,	// (0x00054ffd) input_focus_pane_g4

0x2b4f,	// (0x00055005) input_focus_pane_g5

0x2b57,	// (0x0005500d) input_focus_pane_g6

0x2b5f,	// (0x00055015) input_focus_pane_g7

0x2b67,	// (0x0005501d) input_focus_pane_g8

0x2b6f,	// (0x00055025) input_focus_pane_g9

0xd2a3,	// (0x0005f759) input_focus_pane_g10

0x0009,

0xf6ad,	// (0x00061b63) input_focus_pane_g

0x4dea,	// (0x000572a0) wait_border_pane_g3_copy1

0xb823,	// (0x0005dcd9) data_form_pane_t1

0xd2a3,	// (0x0005f759) wait_anim_pane_g1_copy1

0xbd81,	// (0x0005e237) data_form_wide_pane_t1

0x0312,	// (0x000527c8) list_form_graphic_pane_cp_ParamLimits

0x0312,	// (0x000527c8) list_form_graphic_pane_cp

0x5d6f,	// (0x00058225) slider_form_pane_g1

0x5d78,	// (0x0005822e) slider_form_pane_g2

0x0006,

0xf9a0,	// (0x00061e56) slider_form_pane_g

0xb83f,	// (0x0005dcf5) list_form_graphic_pane_ParamLimits

0xb83f,	// (0x0005dcf5) list_form_graphic_pane

0x0324,	// (0x000527da) list_form_graphic_pane_g1

0x032c,	// (0x000527e2) list_form_graphic_pane_t1_ParamLimits

0x032c,	// (0x000527e2) list_form_graphic_pane_t1

0x2195,	// (0x0005464b) list_highlight_pane_cp5_ParamLimits

0x2195,	// (0x0005464b) list_highlight_pane_cp5

0xb850,	// (0x0005dd06) find_pane_g1

0x2b80,	// (0x00055036) input_find_pane

0xb859,	// (0x0005dd0f) input_find_pane_g1_ParamLimits

0xb859,	// (0x0005dd0f) input_find_pane_g1

0xb865,	// (0x0005dd1b) input_find_pane_t1_ParamLimits

0xb865,	// (0x0005dd1b) input_find_pane_t1

0xb87a,	// (0x0005dd30) input_find_pane_t2_ParamLimits

0xb87a,	// (0x0005dd30) input_find_pane_t2

0x0001,

0xf6c2,	// (0x00061b78) input_find_pane_t_ParamLimits

0xf6c2,	// (0x00061b78) input_find_pane_t

0x2b89,	// (0x0005503f) input_focus_pane_cp5_ParamLimits

0x2b89,	// (0x0005503f) input_focus_pane_cp5

0xb89b,	// (0x0005dd51) bg_popup_window_pane_cp2_ParamLimits

0xb89b,	// (0x0005dd51) bg_popup_window_pane_cp2

0xb8a8,	// (0x0005dd5e) listscroll_menu_pane_ParamLimits

0xb8a8,	// (0x0005dd5e) listscroll_menu_pane

0xb8b4,	// (0x0005dd6a) popup_submenu_window_ParamLimits

0xb8b4,	// (0x0005dd6a) popup_submenu_window

0x2bec,	// (0x000550a2) find_popup_pane_g1

0x2bf4,	// (0x000550aa) input_popup_find_pane_cp

0x2b89,	// (0x0005503f) input_focus_pane_cp4_ParamLimits

0x2b89,	// (0x0005503f) input_focus_pane_cp4

0x2c0c,	// (0x000550c2) input_popup_find_pane_t1_ParamLimits

0x2c0c,	// (0x000550c2) input_popup_find_pane_t1

0xd2ad,	// (0x0005f763) bg_popup_sub_pane_cp

0x2c3a,	// (0x000550f0) listscroll_popup_sub_pane

0x2c42,	// (0x000550f8) list_submenu_pane_ParamLimits

0x2c42,	// (0x000550f8) list_submenu_pane

0x2c53,	// (0x00055109) scroll_pane_cp4

0x2c5b,	// (0x00055111) list_single_popup_submenu_pane_ParamLimits

0x2c5b,	// (0x00055111) list_single_popup_submenu_pane

0x2c70,	// (0x00055126) list_single_popup_submenu_pane_g1

0x2c78,	// (0x0005512e) list_single_popup_submenu_pane_t1_ParamLimits

0x2c78,	// (0x0005512e) list_single_popup_submenu_pane_t1

0x2411,	// (0x000548c7) bg_active_tab_pane_cp1_ParamLimits

0x2411,	// (0x000548c7) bg_active_tab_pane_cp1

0xb8f2,	// (0x0005dda8) tabs_2_active_pane_g1

0xb8fa,	// (0x0005ddb0) tabs_2_active_pane_t1

0x2411,	// (0x000548c7) bg_passive_tab_pane_cp1_ParamLimits

0x2411,	// (0x000548c7) bg_passive_tab_pane_cp1

0xb8f2,	// (0x0005dda8) tabs_2_passive_pane_g1

0xb8fa,	// (0x0005ddb0) tabs_2_passive_pane_t1

0x2195,	// (0x0005464b) bg_active_tab_pane_cp4

0xb90c,	// (0x0005ddc2) tabs_2_long_active_pane_t1

0x3c72,	// (0x00056128) bg_passive_tab_pane_cp4

0x0a62,	// (0x00052f18) list_single_midp_graphic_pane_g4_ParamLimits

0x2195,	// (0x0005464b) bg_active_tab_pane_cp5

0xb91f,	// (0x0005ddd5) tabs_3_long_active_pane_t1

0x3c72,	// (0x00056128) bg_passive_tab_pane_cp5

0x0a62,	// (0x00052f18) list_single_midp_graphic_pane_g4

0x2195,	// (0x0005464b) bg_popup_window_pane_cp13_ParamLimits

0x2195,	// (0x0005464b) bg_popup_window_pane_cp13

0x2cef,	// (0x000551a5) listscroll_popup_fast_pane_ParamLimits

0x2cef,	// (0x000551a5) listscroll_popup_fast_pane

0x2cfe,	// (0x000551b4) grid_popup_fast_pane_ParamLimits

0x2cfe,	// (0x000551b4) grid_popup_fast_pane

0x2d10,	// (0x000551c6) scroll_pane_cp9_ParamLimits

0x2d10,	// (0x000551c6) scroll_pane_cp9

0x76c5,	// (0x00059b7b) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x76c5,	// (0x00059b7b) list_single_graphic_hl_pane_t1_cp2

0x2d34,	// (0x000551ea) input_focus_pane_cp20_ParamLimits

0x2d34,	// (0x000551ea) input_focus_pane_cp20

0x2d42,	// (0x000551f8) query_popup_data_pane_t1_ParamLimits

0x2d42,	// (0x000551f8) query_popup_data_pane_t1

0x2d55,	// (0x0005520b) query_popup_data_pane_t2_ParamLimits

0x2d55,	// (0x0005520b) query_popup_data_pane_t2

0x2d9b,	// (0x00055251) query_popup_data_pane_t3_ParamLimits

0x2d9b,	// (0x00055251) query_popup_data_pane_t3

0x2fa1,	// (0x00055457) query_popup_data_pane_t4_ParamLimits

0x2fa1,	// (0x00055457) query_popup_data_pane_t4

0x2fdd,	// (0x00055493) query_popup_data_pane_t5_ParamLimits

0x2fdd,	// (0x00055493) query_popup_data_pane_t5

0x0004,

0xf6c7,	// (0x00061b7d) query_popup_data_pane_t_ParamLimits

0xf6c7,	// (0x00061b7d) query_popup_data_pane_t

0x2b2f,	// (0x00054fe5) bg_set_opt_pane_g1

0x2b37,	// (0x00054fed) bg_set_opt_pane_g2

0x2b3f,	// (0x00054ff5) bg_set_opt_pane_g3

0x2b47,	// (0x00054ffd) bg_set_opt_pane_g4

0x2b4f,	// (0x00055005) bg_set_opt_pane_g5

0x2b57,	// (0x0005500d) bg_set_opt_pane_g6

0x2b5f,	// (0x00055015) bg_set_opt_pane_g7

0x2b67,	// (0x0005501d) bg_set_opt_pane_g8

0x2b6f,	// (0x00055025) bg_set_opt_pane_g9

0x0008,

0xf6d2,	// (0x00061b88) bg_set_opt_pane_g

0x0688,	// (0x00052b3e) control_top_pane_stacon_ParamLimits

0x0688,	// (0x00052b3e) control_top_pane_stacon

0x06db,	// (0x00052b91) signal_pane_stacon_ParamLimits

0x06db,	// (0x00052b91) signal_pane_stacon

0x3589,	// (0x00055a3f) stacon_top_pane_g1_ParamLimits

0x3589,	// (0x00055a3f) stacon_top_pane_g1

0x0700,	// (0x00052bb6) title_pane_stacon_ParamLimits

0x0700,	// (0x00052bb6) title_pane_stacon

0x072a,	// (0x00052be0) uni_indicator_pane_stacon_ParamLimits

0x072a,	// (0x00052be0) uni_indicator_pane_stacon

0x0742,	// (0x00052bf8) battery_pane_stacon_ParamLimits

0x0742,	// (0x00052bf8) battery_pane_stacon

0x0786,	// (0x00052c3c) control_bottom_pane_stacon_ParamLimits

0x0786,	// (0x00052c3c) control_bottom_pane_stacon

0x07a9,	// (0x00052c5f) navi_pane_stacon_ParamLimits

0x07a9,	// (0x00052c5f) navi_pane_stacon

0x35ab,	// (0x00055a61) stacon_bottom_pane_g1_ParamLimits

0x35ab,	// (0x00055a61) stacon_bottom_pane_g1

0x0377,	// (0x0005282d) aid_levels_signal_lsc_ParamLimits

0x0377,	// (0x0005282d) aid_levels_signal_lsc

0x038e,	// (0x00052844) signal_pane_stacon_g1_ParamLimits

0x038e,	// (0x00052844) signal_pane_stacon_g1

0x03a2,	// (0x00052858) signal_pane_stacon_g2_ParamLimits

0x03a2,	// (0x00052858) signal_pane_stacon_g2

0x0001,

0xf6e5,	// (0x00061b9b) signal_pane_stacon_g_ParamLimits

0xf6e5,	// (0x00061b9b) signal_pane_stacon_g

0x03d7,	// (0x0005288d) title_pane_stacon_t1_ParamLimits

0x03d7,	// (0x0005288d) title_pane_stacon_t1

0x3021,	// (0x000554d7) uni_indicator_pane_stacon_g1

0x302b,	// (0x000554e1) uni_indicator_pane_stacon_g2

0x3035,	// (0x000554eb) uni_indicator_pane_stacon_g3

0x303f,	// (0x000554f5) uni_indicator_pane_stacon_g4

0x0003,

0xf6f1,	// (0x00061ba7) uni_indicator_pane_stacon_g

0x03fc,	// (0x000528b2) control_top_pane_stacon_g1

0x0404,	// (0x000528ba) control_top_pane_stacon_t1_ParamLimits

0x0404,	// (0x000528ba) control_top_pane_stacon_t1

0x043b,	// (0x000528f1) aid_levels_battery_lsc_ParamLimits

0x043b,	// (0x000528f1) aid_levels_battery_lsc

0x0453,	// (0x00052909) battery_pane_stacon_g1_ParamLimits

0x0453,	// (0x00052909) battery_pane_stacon_g1

0x0466,	// (0x0005291c) battery_pane_stacon_g2_ParamLimits

0x0466,	// (0x0005291c) battery_pane_stacon_g2

0x0001,

0xf6fa,	// (0x00061bb0) battery_pane_stacon_g_ParamLimits

0xf6fa,	// (0x00061bb0) battery_pane_stacon_g

0x04a4,	// (0x0005295a) navi_icon_pane_stacon

0x04b8,	// (0x0005296e) navi_navi_pane_stacon

0x04a4,	// (0x0005295a) navi_text_pane_stacon

0x03fc,	// (0x000528b2) control_bottom_pane_stacon_g1

0x04ce,	// (0x00052984) control_bottom_pane_stacon_t1_ParamLimits

0x04ce,	// (0x00052984) control_bottom_pane_stacon_t1

0xb931,	// (0x0005dde7) grid_app_pane_ParamLimits

0xb931,	// (0x0005dde7) grid_app_pane

0xb969,	// (0x0005de1f) scroll_pane_cp15_ParamLimits

0xb969,	// (0x0005de1f) scroll_pane_cp15

0xb986,	// (0x0005de3c) cell_app_pane_ParamLimits

0xb986,	// (0x0005de3c) cell_app_pane

0xc3a1,	// (0x0005e857) cell_app_pane_g1_ParamLimits

0xc3a1,	// (0x0005e857) cell_app_pane_g1

0x30ec,	// (0x000555a2) cell_app_pane_g2_ParamLimits

0x30ec,	// (0x000555a2) cell_app_pane_g2

0x0001,

0xf6ff,	// (0x00061bb5) cell_app_pane_g_ParamLimits

0xf6ff,	// (0x00061bb5) cell_app_pane_g

0x30f8,	// (0x000555ae) cell_app_pane_t1_ParamLimits

0x30f8,	// (0x000555ae) cell_app_pane_t1

0x310a,	// (0x000555c0) grid_highlight_pane_ParamLimits

0x310a,	// (0x000555c0) grid_highlight_pane

0x2b2f,	// (0x00054fe5) cell_highlight_pane_g1

0x2b37,	// (0x00054fed) cell_highlight_pane_g2

0x2b3f,	// (0x00054ff5) cell_highlight_pane_g3

0x2b47,	// (0x00054ffd) cell_highlight_pane_g4

0x2b4f,	// (0x00055005) cell_highlight_pane_g5

0x2b57,	// (0x0005500d) cell_highlight_pane_g6

0x2b5f,	// (0x00055015) cell_highlight_pane_g7

0x2b67,	// (0x0005501d) cell_highlight_pane_g8

0x2b6f,	// (0x00055025) cell_highlight_pane_g9

0xd2a3,	// (0x0005f759) cell_highlight_pane_g10

0x0009,

0xf6ad,	// (0x00061b63) cell_highlight_pane_g

0x311b,	// (0x000555d1) bg_scroll_pane

0x0518,	// (0x000529ce) scroll_handle_pane

0x3162,	// (0x00055618) scroll_bg_pane_g1

0x3177,	// (0x0005562d) scroll_bg_pane_g2

0x318f,	// (0x00055645) scroll_bg_pane_g3

0x0002,

0xf704,	// (0x00061bba) scroll_bg_pane_g

0x31a4,	// (0x0005565a) scroll_handle_focus_pane_ParamLimits

0x31a4,	// (0x0005565a) scroll_handle_focus_pane

0x3162,	// (0x00055618) scroll_handle_pane_g1

0x31b1,	// (0x00055667) scroll_handle_pane_g2

0x318f,	// (0x00055645) scroll_handle_pane_g3

0x0002,

0xf70b,	// (0x00061bc1) scroll_handle_pane_g

0x2b89,	// (0x0005503f) bg_popup_sub_pane_cp21_ParamLimits

0x2b89,	// (0x0005503f) bg_popup_sub_pane_cp21

0x31c5,	// (0x0005567b) popup_fep_japan_predictive_window_t1_ParamLimits

0x31c5,	// (0x0005567b) popup_fep_japan_predictive_window_t1

0x31dc,	// (0x00055692) popup_fep_japan_predictive_window_t2_ParamLimits

0x31dc,	// (0x00055692) popup_fep_japan_predictive_window_t2

0x320f,	// (0x000556c5) popup_fep_japan_predictive_window_t3_ParamLimits

0x320f,	// (0x000556c5) popup_fep_japan_predictive_window_t3

0x0002,

0xf712,	// (0x00061bc8) popup_fep_japan_predictive_window_t_ParamLimits

0xf712,	// (0x00061bc8) popup_fep_japan_predictive_window_t

0xd2ad,	// (0x0005f763) bg_popup_sub_pane_cp23

0x3246,	// (0x000556fc) listscroll_japin_cand_pane

0x324e,	// (0x00055704) popup_fep_japan_candidate_window_t1

0x325c,	// (0x00055712) candidate_pane_ParamLimits

0x325c,	// (0x00055712) candidate_pane

0x326e,	// (0x00055724) scroll_pane_cp30

0x3278,	// (0x0005572e) list_single_popup_jap_candidate_pane_ParamLimits

0x3278,	// (0x0005572e) list_single_popup_jap_candidate_pane

0xd2ad,	// (0x0005f763) list_highlight_pane_cp30

0x328c,	// (0x00055742) list_single_popup_jap_candidate_pane_t1

0xc3c5,	// (0x0005e87b) level_1_signal

0xc3d7,	// (0x0005e88d) level_2_signal

0xc3ea,	// (0x0005e8a0) level_3_signal

0xc3fd,	// (0x0005e8b3) level_4_signal

0xc410,	// (0x0005e8c6) level_5_signal

0xc423,	// (0x0005e8d9) level_6_signal

0xc436,	// (0x0005e8ec) level_7_signal

0xc3c5,	// (0x0005e87b) level_1_battery

0xc3d7,	// (0x0005e88d) level_2_battery

0xc3ea,	// (0x0005e8a0) level_3_battery

0xc3fd,	// (0x0005e8b3) level_4_battery

0xc410,	// (0x0005e8c6) level_5_battery

0xc423,	// (0x0005e8d9) level_6_battery

0xc436,	// (0x0005e8ec) level_7_battery

0x330e,	// (0x000557c4) list_menu_pane_ParamLimits

0x330e,	// (0x000557c4) list_menu_pane

0x331f,	// (0x000557d5) scroll_pane_cp25_ParamLimits

0x331f,	// (0x000557d5) scroll_pane_cp25

0x3338,	// (0x000557ee) list_double2_graphic_pane_cp2_ParamLimits

0x3338,	// (0x000557ee) list_double2_graphic_pane_cp2

0x3338,	// (0x000557ee) list_double2_large_graphic_pane_cp2_ParamLimits

0x3338,	// (0x000557ee) list_double2_large_graphic_pane_cp2

0x3338,	// (0x000557ee) list_double2_pane_cp2_ParamLimits

0x3338,	// (0x000557ee) list_double2_pane_cp2

0x3338,	// (0x000557ee) list_double_graphic_pane_cp2_ParamLimits

0x3338,	// (0x000557ee) list_double_graphic_pane_cp2

0x3338,	// (0x000557ee) list_double_large_graphic_pane_cp2_ParamLimits

0x3338,	// (0x000557ee) list_double_large_graphic_pane_cp2

0x3338,	// (0x000557ee) list_double_number_pane_cp2_ParamLimits

0x3338,	// (0x000557ee) list_double_number_pane_cp2

0x3338,	// (0x000557ee) list_double_pane_cp2_ParamLimits

0x3338,	// (0x000557ee) list_double_pane_cp2

0xc449,	// (0x0005e8ff) list_single_2graphic_pane_cp2_ParamLimits

0xc449,	// (0x0005e8ff) list_single_2graphic_pane_cp2

0xc449,	// (0x0005e8ff) list_single_graphic_heading_pane_cp2_ParamLimits

0xc449,	// (0x0005e8ff) list_single_graphic_heading_pane_cp2

0xc449,	// (0x0005e8ff) list_single_graphic_pane_cp2_ParamLimits

0xc449,	// (0x0005e8ff) list_single_graphic_pane_cp2

0xc449,	// (0x0005e8ff) list_single_heading_pane_cp2_ParamLimits

0xc449,	// (0x0005e8ff) list_single_heading_pane_cp2

0x337b,	// (0x00055831) list_single_large_graphic_pane_cp2_ParamLimits

0x337b,	// (0x00055831) list_single_large_graphic_pane_cp2

0xc449,	// (0x0005e8ff) list_single_number_heading_pane_cp2_ParamLimits

0xc449,	// (0x0005e8ff) list_single_number_heading_pane_cp2

0xc449,	// (0x0005e8ff) list_single_number_pane_cp2_ParamLimits

0xc449,	// (0x0005e8ff) list_single_number_pane_cp2

0xc449,	// (0x0005e8ff) list_single_pane_cp2_ParamLimits

0xc449,	// (0x0005e8ff) list_single_pane_cp2

0x33d0,	// (0x00055886) bg_popup_sub_pane_cp22

0x05ca,	// (0x00052a80) popup_side_volume_key_window_g1

0x05f4,	// (0x00052aaa) popup_side_volume_key_window_t1

0x0612,	// (0x00052ac8) volume_small_pane_cp1

0x2411,	// (0x000548c7) bg_popup_sub_pane_cp24_ParamLimits

0x2411,	// (0x000548c7) bg_popup_sub_pane_cp24

0x33e6,	// (0x0005589c) fep_china_uni_candidate_pane_ParamLimits

0x33e6,	// (0x0005589c) fep_china_uni_candidate_pane

0x33fa,	// (0x000558b0) fep_china_uni_entry_pane

0x340a,	// (0x000558c0) popup_fep_china_uni_window_g1

0x3426,	// (0x000558dc) fep_china_uni_entry_pane_g1

0x3430,	// (0x000558e6) fep_china_uni_entry_pane_g2

0x0001,

0xf73f,	// (0x00061bf5) fep_china_uni_entry_pane_g

0x343a,	// (0x000558f0) fep_entry_item_pane

0x3444,	// (0x000558fa) fep_candidate_item_pane

0x344c,	// (0x00055902) fep_china_uni_candidate_pane_g1

0x3456,	// (0x0005590c) fep_china_uni_candidate_pane_g2

0x345e,	// (0x00055914) fep_china_uni_candidate_pane_g3

0x3466,	// (0x0005591c) fep_china_uni_candidate_pane_g4

0x0003,

0xf744,	// (0x00061bfa) fep_china_uni_candidate_pane_g

0xd2a3,	// (0x0005f759) fep_entry_item_pane_g1

0x3470,	// (0x00055926) fep_entry_item_pane_t1_ParamLimits

0x3470,	// (0x00055926) fep_entry_item_pane_t1

0x3486,	// (0x0005593c) fep_candidate_item_pane_t1_ParamLimits

0x3486,	// (0x0005593c) fep_candidate_item_pane_t1

0x349b,	// (0x00055951) fep_candidate_item_pane_t2_ParamLimits

0x349b,	// (0x00055951) fep_candidate_item_pane_t2

0x0001,

0xf74d,	// (0x00061c03) fep_candidate_item_pane_t_ParamLimits

0xf74d,	// (0x00061c03) fep_candidate_item_pane_t

0x2195,	// (0x0005464b) list_highlight_pane_cp31_ParamLimits

0x2195,	// (0x0005464b) list_highlight_pane_cp31

0x34ad,	// (0x00055963) level_1_signal_lsc

0x34b6,	// (0x0005596c) level_2_signal_lsc

0x34bf,	// (0x00055975) level_3_signal_lsc

0x34c8,	// (0x0005597e) level_4_signal_lsc

0x34d1,	// (0x00055987) level_5_signal_lsc

0x34da,	// (0x00055990) level_6_signal_lsc

0x34e3,	// (0x00055999) level_7_signal_lsc

0x34e3,	// (0x00055999) level_1_battery_lsc

0x34ec,	// (0x000559a2) level_2_battery_lsc

0x34f5,	// (0x000559ab) level_3_battery_lsc

0x34fe,	// (0x000559b4) level_4_battery_lsc

0x3507,	// (0x000559bd) level_5_battery_lsc

0x3510,	// (0x000559c6) level_6_battery_lsc

0x34ad,	// (0x00055963) level_7_battery_lsc

0x3519,	// (0x000559cf) scroll_handle_focus_pane_g1

0x3522,	// (0x000559d8) scroll_handle_focus_pane_g2

0x352b,	// (0x000559e1) scroll_handle_focus_pane_g3

0x0002,

0xf752,	// (0x00061c08) scroll_handle_focus_pane_g

0xb9d0,	// (0x0005de86) list_single_2graphic_pane_g1_ParamLimits

0xb9d0,	// (0x0005de86) list_single_2graphic_pane_g1

0xb30f,	// (0x0005d7c5) list_single_2graphic_pane_g2_ParamLimits

0xb30f,	// (0x0005d7c5) list_single_2graphic_pane_g2

0x2dfa,	// (0x000552b0) list_single_2graphic_pane_g3_ParamLimits

0x2dfa,	// (0x000552b0) list_single_2graphic_pane_g3

0xc4ac,	// (0x0005e962) list_single_2graphic_pane_g4_ParamLimits

0xc4ac,	// (0x0005e962) list_single_2graphic_pane_g4

0x0003,

0xf759,	// (0x00061c0f) list_single_2graphic_pane_g_ParamLimits

0xf759,	// (0x00061c0f) list_single_2graphic_pane_g

0xb9dc,	// (0x0005de92) list_single_2graphic_pane_t1_ParamLimits

0xb9dc,	// (0x0005de92) list_single_2graphic_pane_t1

0xc4bd,	// (0x0005e973) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xc4bd,	// (0x0005e973) list_double2_graphic_large_graphic_pane_g1

0xb525,	// (0x0005d9db) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xb525,	// (0x0005d9db) list_double2_graphic_large_graphic_pane_g2

0xb466,	// (0x0005d91c) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xb466,	// (0x0005d91c) list_double2_graphic_large_graphic_pane_g3

0xba0a,	// (0x0005dec0) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xba0a,	// (0x0005dec0) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf762,	// (0x00061c18) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf762,	// (0x00061c18) list_double2_graphic_large_graphic_pane_g

0xba16,	// (0x0005decc) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xba16,	// (0x0005decc) list_double2_graphic_large_graphic_pane_t1

0xba2c,	// (0x0005dee2) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xba2c,	// (0x0005dee2) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf76b,	// (0x00061c21) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf76b,	// (0x00061c21) list_double2_graphic_large_graphic_pane_t

0x366d,	// (0x00055b23) popup_fast_swap_window_ParamLimits

0x366d,	// (0x00055b23) popup_fast_swap_window

0x368b,	// (0x00055b41) popup_side_volume_key_window

0x36a9,	// (0x00055b5f) stacon_top_pane

0x36b3,	// (0x00055b69) status_pane_ParamLimits

0x36b3,	// (0x00055b69) status_pane

0x36a9,	// (0x00055b5f) status_small_pane

0xd2ad,	// (0x0005f763) control_pane

0xd2ad,	// (0x0005f763) stacon_bottom_pane

0x2aab,	// (0x00054f61) scroll_pane_cp121

0x2aa2,	// (0x00054f58) set_content_pane

0xc4cf,	// (0x0005e985) bg_active_tab_pane_g1_cp1

0x353d,	// (0x000559f3) bg_active_tab_pane_g2_cp1

0xc4d8,	// (0x0005e98e) bg_active_tab_pane_g3_cp1

0xc4cf,	// (0x0005e985) bg_passive_tab_pane_g1_cp1

0x353d,	// (0x000559f3) bg_passive_tab_pane_g2_cp1

0xc4d8,	// (0x0005e98e) bg_passive_tab_pane_g3_cp1

0xc4e1,	// (0x0005e997) bg_active_tab_pane_g1_cp2

0x353d,	// (0x000559f3) bg_active_tab_pane_g2_cp2

0xc4ea,	// (0x0005e9a0) bg_active_tab_pane_g3_cp2

0xc4e1,	// (0x0005e997) bg_passive_tab_pane_g1_cp2

0x353d,	// (0x000559f3) bg_passive_tab_pane_g2_cp2

0xc4ea,	// (0x0005e9a0) bg_passive_tab_pane_g3_cp2

0xc4f3,	// (0x0005e9a9) bg_active_tab_pane_g1_cp3

0x353d,	// (0x000559f3) bg_active_tab_pane_g2_cp3

0xc4fc,	// (0x0005e9b2) bg_active_tab_pane_g3_cp3

0xc4f3,	// (0x0005e9a9) bg_passive_tab_pane_g1_cp3

0x353d,	// (0x000559f3) bg_passive_tab_pane_g2_cp3

0xc4fc,	// (0x0005e9b2) bg_passive_tab_pane_g3_cp3

0xc505,	// (0x0005e9bb) bg_active_tab_pane_g1_cp4

0x353d,	// (0x000559f3) bg_active_tab_pane_g2_cp4

0xc50e,	// (0x0005e9c4) bg_active_tab_pane_g3_cp4

0xc505,	// (0x0005e9bb) bg_passive_tab_pane_g1_cp4

0x353d,	// (0x000559f3) bg_passive_tab_pane_g2_cp4

0xc50e,	// (0x0005e9c4) bg_passive_tab_pane_g3_cp4

0x35c7,	// (0x00055a7d) bg_active_tab_pane_g1_cp5

0x353d,	// (0x000559f3) bg_active_tab_pane_g2_cp5

0x35d0,	// (0x00055a86) bg_active_tab_pane_g3_cp5

0x35c7,	// (0x00055a7d) bg_passive_tab_pane_g1_cp5

0x353d,	// (0x000559f3) bg_passive_tab_pane_g2_cp5

0x35d0,	// (0x00055a86) bg_passive_tab_pane_g3_cp5

0x2c5b,	// (0x00055111) list_set_graphic_pane_ParamLimits

0x2c5b,	// (0x00055111) list_set_graphic_pane

0xd2ad,	// (0x0005f763) bg_set_opt_pane_cp4

0xc517,	// (0x0005e9cd) list_set_graphic_pane_g1_ParamLimits

0xc517,	// (0x0005e9cd) list_set_graphic_pane_g1

0xc523,	// (0x0005e9d9) list_set_graphic_pane_g2_ParamLimits

0xc523,	// (0x0005e9d9) list_set_graphic_pane_g2

0x0001,

0xf770,	// (0x00061c26) list_set_graphic_pane_g_ParamLimits

0xf770,	// (0x00061c26) list_set_graphic_pane_g

0x0009,

0xfae8,	// (0x00061f9e) volume_small_pane_cp_g

0x361e,	// (0x00055ad4) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x361e,	// (0x00055ad4) list_double2_large_graphic_pane_g1_cp2

0x362c,	// (0x00055ae2) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x362c,	// (0x00055ae2) list_double2_large_graphic_pane_g2_cp2

0x363d,	// (0x00055af3) list_double2_large_graphic_pane_g3_cp2

0x3645,	// (0x00055afb) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x3645,	// (0x00055afb) list_double2_large_graphic_pane_t1_cp2

0x365b,	// (0x00055b11) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x365b,	// (0x00055b11) list_double2_large_graphic_pane_t2_cp2

0x58d4,	// (0x00057d8a) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x58d4,	// (0x00057d8a) list_double_large_graphic_pane_g1_cp2

0x58e7,	// (0x00057d9d) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x58e7,	// (0x00057d9d) list_double_large_graphic_pane_g2_cp2

0x37d1,	// (0x00055c87) list_double_large_graphic_pane_g3_cp2

0x58f8,	// (0x00057dae) list_double_large_graphic_pane_g4_cp

0x5900,	// (0x00057db6) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x5900,	// (0x00057db6) list_double_large_graphic_pane_t1_cp2

0x5917,	// (0x00057dcd) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x5917,	// (0x00057dcd) list_double_large_graphic_pane_t2_cp2

0x36c1,	// (0x00055b77) list_double2_graphic_pane_g1_cp2_ParamLimits

0x36c1,	// (0x00055b77) list_double2_graphic_pane_g1_cp2

0x36cf,	// (0x00055b85) list_double2_graphic_pane_g2_cp2_ParamLimits

0x36cf,	// (0x00055b85) list_double2_graphic_pane_g2_cp2

0x36e0,	// (0x00055b96) list_double2_graphic_pane_g3_cp2

0x36ea,	// (0x00055ba0) list_double2_graphic_pane_t1_cp2_ParamLimits

0x36ea,	// (0x00055ba0) list_double2_graphic_pane_t1_cp2

0x3700,	// (0x00055bb6) list_double2_graphic_pane_t2_cp2_ParamLimits

0x3700,	// (0x00055bb6) list_double2_graphic_pane_t2_cp2

0x3712,	// (0x00055bc8) list_single_number_heading_pane_g1_cp2_ParamLimits

0x3712,	// (0x00055bc8) list_single_number_heading_pane_g1_cp2

0x371e,	// (0x00055bd4) list_single_number_heading_pane_g2_cp2

0x3726,	// (0x00055bdc) list_single_number_heading_pane_t1_cp2_ParamLimits

0x3726,	// (0x00055bdc) list_single_number_heading_pane_t1_cp2

0x373c,	// (0x00055bf2) list_single_number_heading_pane_t2_cp2_ParamLimits

0x373c,	// (0x00055bf2) list_single_number_heading_pane_t2_cp2

0x3750,	// (0x00055c06) list_single_number_heading_pane_t3_cp2_ParamLimits

0x3750,	// (0x00055c06) list_single_number_heading_pane_t3_cp2

0x3712,	// (0x00055bc8) list_single_heading_pane_g1_cp2_ParamLimits

0x3712,	// (0x00055bc8) list_single_heading_pane_g1_cp2

0x371e,	// (0x00055bd4) list_single_heading_pane_g2_cp2

0x3726,	// (0x00055bdc) list_single_heading_pane_t1_cp2_ParamLimits

0x3726,	// (0x00055bdc) list_single_heading_pane_t1_cp2

0x56ce,	// (0x00057b84) list_single_heading_pane_t2_cp2_ParamLimits

0x56ce,	// (0x00057b84) list_single_heading_pane_t2_cp2

0x5610,	// (0x00057ac6) list_double_graphic_pane_g1_cp2_ParamLimits

0x5610,	// (0x00057ac6) list_double_graphic_pane_g1_cp2

0x561c,	// (0x00057ad2) list_double_graphic_pane_g2_cp2_ParamLimits

0x561c,	// (0x00057ad2) list_double_graphic_pane_g2_cp2

0x562b,	// (0x00057ae1) list_double_graphic_pane_g3_cp2

0x5633,	// (0x00057ae9) list_double_graphic_pane_t1_cp2_ParamLimits

0x5633,	// (0x00057ae9) list_double_graphic_pane_t1_cp2

0x5649,	// (0x00057aff) list_double_graphic_pane_t2_cp2_ParamLimits

0x5649,	// (0x00057aff) list_double_graphic_pane_t2_cp2

0x37c5,	// (0x00055c7b) list_double_number_pane_g1_cp2_ParamLimits

0x37c5,	// (0x00055c7b) list_double_number_pane_g1_cp2

0x37d1,	// (0x00055c87) list_double_number_pane_g2_cp2

0x55d4,	// (0x00057a8a) list_double_number_pane_t1_cp2_ParamLimits

0x55d4,	// (0x00057a8a) list_double_number_pane_t1_cp2

0x55e8,	// (0x00057a9e) list_double_number_pane_t2_cp2_ParamLimits

0x55e8,	// (0x00057a9e) list_double_number_pane_t2_cp2

0x55fe,	// (0x00057ab4) list_double_number_pane_t3_cp2_ParamLimits

0x55fe,	// (0x00057ab4) list_double_number_pane_t3_cp2

0x54bd,	// (0x00057973) list_single_graphic_pane_g1_cp2_ParamLimits

0x54bd,	// (0x00057973) list_single_graphic_pane_g1_cp2

0x382b,	// (0x00055ce1) list_single_graphic_pane_g2_cp2_ParamLimits

0x382b,	// (0x00055ce1) list_single_graphic_pane_g2_cp2

0x3837,	// (0x00055ced) list_single_graphic_pane_g3_cp2

0x5493,	// (0x00057949) list_single_graphic_pane_t1_cp2_ParamLimits

0x5493,	// (0x00057949) list_single_graphic_pane_t1_cp2

0x382b,	// (0x00055ce1) list_single_number_pane_g1_cp2_ParamLimits

0x382b,	// (0x00055ce1) list_single_number_pane_g1_cp2

0x3837,	// (0x00055ced) list_single_number_pane_g2_cp2

0x5493,	// (0x00057949) list_single_number_pane_t1_cp2_ParamLimits

0x5493,	// (0x00057949) list_single_number_pane_t1_cp2

0x54a9,	// (0x0005795f) list_single_number_pane_t2_cp2_ParamLimits

0x54a9,	// (0x0005795f) list_single_number_pane_t2_cp2

0x362c,	// (0x00055ae2) list_double2_pane_g1_cp2_ParamLimits

0x362c,	// (0x00055ae2) list_double2_pane_g1_cp2

0x363d,	// (0x00055af3) list_double2_pane_g2_cp2

0x379d,	// (0x00055c53) list_double2_pane_t1_cp2_ParamLimits

0x379d,	// (0x00055c53) list_double2_pane_t1_cp2

0x37b3,	// (0x00055c69) list_double2_pane_t2_cp2_ParamLimits

0x37b3,	// (0x00055c69) list_double2_pane_t2_cp2

0x37c5,	// (0x00055c7b) list_double_pane_g1_cp2_ParamLimits

0x37c5,	// (0x00055c7b) list_double_pane_g1_cp2

0x37d1,	// (0x00055c87) list_double_pane_g2_cp2

0x37d9,	// (0x00055c8f) list_double_pane_t1_cp2_ParamLimits

0x37d9,	// (0x00055c8f) list_double_pane_t1_cp2

0x37ef,	// (0x00055ca5) list_double_pane_t2_cp2_ParamLimits

0x37ef,	// (0x00055ca5) list_double_pane_t2_cp2

0x381b,	// (0x00055cd1) list_single_pane_cp2_g3

0x382b,	// (0x00055ce1) list_single_pane_g1_cp2_ParamLimits

0x382b,	// (0x00055ce1) list_single_pane_g1_cp2

0x3837,	// (0x00055ced) list_single_pane_g2_cp2

0x383f,	// (0x00055cf5) list_single_pane_t1_cp2_ParamLimits

0x383f,	// (0x00055cf5) list_single_pane_t1_cp2

0x3857,	// (0x00055d0d) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x3857,	// (0x00055d0d) list_single_large_graphic_pane_g1_cp2

0x3865,	// (0x00055d1b) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x3865,	// (0x00055d1b) list_single_large_graphic_pane_g2_cp2

0x3871,	// (0x00055d27) list_single_large_graphic_pane_g3_cp2

0x3879,	// (0x00055d2f) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x3879,	// (0x00055d2f) list_single_large_graphic_pane_g4_cp1

0x3893,	// (0x00055d49) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x3893,	// (0x00055d49) list_single_large_graphic_pane_t1_cp2

0x545d,	// (0x00057913) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x545d,	// (0x00057913) list_single_graphic_heading_pane_g1_cp2

0x542a,	// (0x000578e0) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x542a,	// (0x000578e0) list_single_graphic_heading_pane_g4_cp2

0x3837,	// (0x00055ced) list_single_graphic_heading_pane_g5_cp2

0x5469,	// (0x0005791f) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x5469,	// (0x0005791f) list_single_graphic_heading_pane_t1_cp2

0x547f,	// (0x00057935) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x547f,	// (0x00057935) list_single_graphic_heading_pane_t2_cp2

0x541e,	// (0x000578d4) list_single_2graphic_pane_g1_cp2_ParamLimits

0x541e,	// (0x000578d4) list_single_2graphic_pane_g1_cp2

0x542a,	// (0x000578e0) list_single_2graphic_pane_g2_cp2_ParamLimits

0x542a,	// (0x000578e0) list_single_2graphic_pane_g2_cp2

0x3837,	// (0x00055ced) list_single_2graphic_pane_g3_cp2

0x543b,	// (0x000578f1) list_single_2graphic_pane_g4_cp2_ParamLimits

0x543b,	// (0x000578f1) list_single_2graphic_pane_g4_cp2

0x5447,	// (0x000578fd) list_single_2graphic_pane_t1_cp2_ParamLimits

0x5447,	// (0x000578fd) list_single_2graphic_pane_t1_cp2

0xd2a3,	// (0x0005f759) list_highlight_pane_g10_cp1

0x4ff6,	// (0x000574ac) list_highlight_pane_g1_cp1

0x4ffe,	// (0x000574b4) list_highlight_pane_g2_cp1

0x5006,	// (0x000574bc) list_highlight_pane_g3_cp1

0x500e,	// (0x000574c4) list_highlight_pane_g4_cp1

0x5016,	// (0x000574cc) list_highlight_pane_g5_cp1

0x501e,	// (0x000574d4) list_highlight_pane_g6_cp1

0x5026,	// (0x000574dc) list_highlight_pane_g7_cp1

0x502e,	// (0x000574e4) list_highlight_pane_g8_cp1

0x5036,	// (0x000574ec) list_highlight_pane_g9_cp1

0xd313,	// (0x0005f7c9) form_field_slider_pane_t3

0xd321,	// (0x0005f7d7) form_field_slider_pane_t4

0x4f32,	// (0x000573e8) slider_form_pane_ParamLimits

0x4f32,	// (0x000573e8) slider_form_pane

0xd2ad,	// (0x0005f763) control_abbreviations

0xd2ad,	// (0x0005f763) control_conventions

0xd2ad,	// (0x0005f763) control_definitions

0xd2ad,	// (0x0005f763) format_table_attribute

0x5724,	// (0x00057bda) bg_popup_preview_window_pane_g9

0xd2ad,	// (0x0005f763) format_table_data2

0xd2ad,	// (0x0005f763) format_table_data3

0xd2ad,	// (0x0005f763) format_table_data_example

0x0008,

0xd2ad,	// (0x0005f763) intro_purpose

0xf900,	// (0x00061db6) bg_popup_preview_window_pane_g

0xd2ad,	// (0x0005f763) texts_category

0xd2ad,	// (0x0005f763) texts_graphics

0x38a9,	// (0x00055d5f) text_digital

0x38b8,	// (0x00055d6e) text_primary

0x38c7,	// (0x00055d7d) text_primary_small

0x38d6,	// (0x00055d8c) text_secondary

0x38e5,	// (0x00055d9b) text_title

0x5ec0,	// (0x00058376) bg_passive_tab_pane_g1_cp3_srt

0x353d,	// (0x000559f3) bg_passive_tab_pane_g2_cp3_srt

0x5ec9,	// (0x0005837f) bg_passive_tab_pane_g3_cp3_srt

0x2411,	// (0x000548c7) bg_active_tab_pane_cp3_srt_ParamLimits

0x2411,	// (0x000548c7) bg_active_tab_pane_cp3_srt

0x5ed2,	// (0x00058388) tabs_4_active_pane_srt_g1

0xd726,	// (0x0005fbdc) tabs_4_active_pane_srt_t1_ParamLimits

0xd726,	// (0x0005fbdc) tabs_4_active_pane_srt_t1

0x5ec0,	// (0x00058376) bg_active_tab_pane_g1_cp3_copy1

0x353d,	// (0x000559f3) bg_active_tab_pane_g2_cp3_copy1

0x5ec9,	// (0x0005837f) bg_active_tab_pane_g3_cp3_copy1

0x2195,	// (0x0005464b) tabs_2_long_active_pane_srt_ParamLimits

0x2195,	// (0x0005464b) tabs_2_long_active_pane_srt

0x2195,	// (0x0005464b) tabs_2_long_passive_pane_srt_ParamLimits

0x2195,	// (0x0005464b) tabs_2_long_passive_pane_srt

0x3c72,	// (0x00056128) bg_passive_tab_pane_cp4_srt_ParamLimits

0x3c72,	// (0x00056128) bg_passive_tab_pane_cp4_srt

0x5b74,	// (0x0005802a) bg_passive_tab_pane_g1_cp4_srt

0x353d,	// (0x000559f3) bg_passive_tab_pane_g2_cp4_srt

0x5b7d,	// (0x00058033) bg_passive_tab_pane_g3_cp4_srt

0x2195,	// (0x0005464b) bg_active_tab_pane_cp4_srt_ParamLimits

0x2195,	// (0x0005464b) bg_active_tab_pane_cp4_srt

0xd51c,	// (0x0005f9d2) tabs_2_long_active_pane_srt_t1_ParamLimits

0xd51c,	// (0x0005f9d2) tabs_2_long_active_pane_srt_t1

0x5b74,	// (0x0005802a) bg_active_tab_pane_g1_cp4_srt

0x353d,	// (0x000559f3) bg_active_tab_pane_g2_cp4_srt

0x5b7d,	// (0x00058033) bg_active_tab_pane_g3_cp4_srt

0x2411,	// (0x000548c7) tabs_3_long_active_pane_srt_ParamLimits

0x2411,	// (0x000548c7) tabs_3_long_active_pane_srt

0x2411,	// (0x000548c7) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x2411,	// (0x000548c7) tabs_3_long_passive_pane_cp_srt

0x2411,	// (0x000548c7) tabs_3_long_passive_pane_srt_ParamLimits

0x2411,	// (0x000548c7) tabs_3_long_passive_pane_srt

0x3c72,	// (0x00056128) bg_passive_tab_pane_cp5_srt_ParamLimits

0x3c72,	// (0x00056128) bg_passive_tab_pane_cp5_srt

0x35c7,	// (0x00055a7d) bg_passive_tab_pane_g1_cp5_srt

0x353d,	// (0x000559f3) bg_passive_tab_pane_g2_cp5_srt

0x35d0,	// (0x00055a86) bg_passive_tab_pane_g3_cp5_srt

0x2195,	// (0x0005464b) bg_active_tab_pane_cp5_srt_ParamLimits

0x2195,	// (0x0005464b) bg_active_tab_pane_cp5_srt

0xd506,	// (0x0005f9bc) tabs_3_long_active_pane_srt_t1_ParamLimits

0xd506,	// (0x0005f9bc) tabs_3_long_active_pane_srt_t1

0x35c7,	// (0x00055a7d) bg_active_tab_pane_g1_cp5_srt

0x353d,	// (0x000559f3) bg_active_tab_pane_g2_cp5_srt

0x35d0,	// (0x00055a86) bg_active_tab_pane_g3_cp5_srt

0x5b54,	// (0x0005800a) navi_text_pane_srt_t1

0x5b4c,	// (0x00058002) navi_icon_pane_srt_g1

0x3abc,	// (0x00055f72) midp_editing_number_pane_srt

0x38f4,	// (0x00055daa) midp_ticker_pane_srt

0x3ac4,	// (0x00055f7a) midp_ticker_pane_srt_g1

0x3acc,	// (0x00055f82) midp_ticker_pane_srt_g2

0x0001,

0xf78f,	// (0x00061c45) midp_ticker_pane_srt_g

0x3ad4,	// (0x00055f8a) midp_ticker_pane_srt_t1

0x5b3d,	// (0x00057ff3) midp_editing_number_pane_t1_copy1

0xc547,	// (0x0005e9fd) listscroll_midp_pane

0xc547,	// (0x0005e9fd) midp_form_pane

0x396a,	// (0x00055e20) midp_info_popup_window_ParamLimits

0x396a,	// (0x00055e20) midp_info_popup_window

0x2b89,	// (0x0005503f) bg_popup_sub_pane_cp50_ParamLimits

0x2b89,	// (0x0005503f) bg_popup_sub_pane_cp50

0x4c2c,	// (0x000570e2) listscroll_midp_info_pane_ParamLimits

0x4c2c,	// (0x000570e2) listscroll_midp_info_pane

0x4c14,	// (0x000570ca) listscroll_form_midp_pane_ParamLimits

0x4c14,	// (0x000570ca) listscroll_form_midp_pane

0x4c20,	// (0x000570d6) scroll_bar_cp050

0xd307,	// (0x0005f7bd) list_midp_pane

0x6908,	// (0x00058dbe) signal_pane_g2_cp

0x4b2e,	// (0x00056fe4) listscroll_midp_info_pane_t1_ParamLimits

0x4b2e,	// (0x00056fe4) listscroll_midp_info_pane_t1

0x4b46,	// (0x00056ffc) listscroll_midp_info_pane_t2_ParamLimits

0x4b46,	// (0x00056ffc) listscroll_midp_info_pane_t2

0x4b84,	// (0x0005703a) listscroll_midp_info_pane_t3_ParamLimits

0x4b84,	// (0x0005703a) listscroll_midp_info_pane_t3

0x4bbe,	// (0x00057074) listscroll_midp_info_pane_t4_ParamLimits

0x4bbe,	// (0x00057074) listscroll_midp_info_pane_t4

0x0003,

0xf83b,	// (0x00061cf1) listscroll_midp_info_pane_t_ParamLimits

0xf83b,	// (0x00061cf1) listscroll_midp_info_pane_t

0x2c53,	// (0x00055109) scroll_pane_cp21

0x4ac8,	// (0x00056f7e) form_midp_field_choice_group_pane

0x4ad1,	// (0x00056f87) form_midp_field_text_pane

0x4b14,	// (0x00056fca) form_midp_field_time_pane

0x4b1c,	// (0x00056fd2) form_midp_gauge_slider_pane

0x4b25,	// (0x00056fdb) form_midp_gauge_wait_pane

0xd2ad,	// (0x0005f763) form_midp_image_pane

0xbbec,	// (0x0005e0a2) list_single_midp_pane_ParamLimits

0xbbec,	// (0x0005e0a2) list_single_midp_pane

0xd2df,	// (0x0005f795) form_midp_field_text_pane_t1

0x48a0,	// (0x00056d56) input_focus_pane_cp050

0x4ab7,	// (0x00056f6d) list_midp_form_text_pane

0x4a5b,	// (0x00056f11) form_midp_field_choice_group_pane_t1

0x4a69,	// (0x00056f1f) input_focus_pane_cp051

0x4a7d,	// (0x00056f33) list_midp_choice_pane

0xd2ad,	// (0x0005f763) status_idle_pane

0x4a3f,	// (0x00056ef5) form_midp_field_time_pane_t1

0xd2a3,	// (0x0005f759) wait_anim_pane_g2_copy1

0x4a4d,	// (0x00056f03) form_midp_field_time_pane_t2

0x0001,

0x3a1a,	// (0x00055ed0) aid_navinavi_width_2_pane

0xf836,	// (0x00061cec) form_midp_field_time_pane_t

0xd2ad,	// (0x0005f763) input_focus_pane_cp052

0xd2ad,	// (0x0005f763) bg_input_focus_pane_cp040

0x49ff,	// (0x00056eb5) form_midp_gauge_slider_pane_t1

0x4a0d,	// (0x00056ec3) form_midp_gauge_slider_pane_t2

0xd2c3,	// (0x0005f779) form_midp_gauge_slider_pane_t3

0xd2d1,	// (0x0005f787) form_midp_gauge_slider_pane_t4

0x0003,

0xf82d,	// (0x00061ce3) form_midp_gauge_slider_pane_t

0x4a37,	// (0x00056eed) form_midp_slider_pane

0x2195,	// (0x0005464b) bg_input_focus_pane_cp041_ParamLimits

0x2195,	// (0x0005464b) bg_input_focus_pane_cp041

0x49cc,	// (0x00056e82) form_midp_gauge_wait_pane_t1_ParamLimits

0x49cc,	// (0x00056e82) form_midp_gauge_wait_pane_t1

0x49de,	// (0x00056e94) form_midp_gauge_wait_pane_t2_ParamLimits

0x49de,	// (0x00056e94) form_midp_gauge_wait_pane_t2

0x0001,

0xf828,	// (0x00061cde) form_midp_gauge_wait_pane_t_ParamLimits

0xf828,	// (0x00061cde) form_midp_gauge_wait_pane_t

0x49f0,	// (0x00056ea6) form_midp_wait_pane_ParamLimits

0x49f0,	// (0x00056ea6) form_midp_wait_pane

0x4994,	// (0x00056e4a) form_midp_image_pane_g1

0x499d,	// (0x00056e53) form_midp_image_pane_t1

0x49ac,	// (0x00056e62) form_midp_image_pane_t2

0x49bb,	// (0x00056e71) form_midp_image_pane_t3

0x0002,

0xf821,	// (0x00061cd7) form_midp_image_pane_t

0x498b,	// (0x00056e41) list_single_midp_pane_g1

0x0b78,	// (0x0005302e) list_single_midp_pane_t1

0xd1dc,	// (0x0005f692) list_midp_form_item_pane_ParamLimits

0xd1dc,	// (0x0005f692) list_midp_form_item_pane

0x39c2,	// (0x00055e78) list_midp_form_item_pane_t1

0x39d1,	// (0x00055e87) midp_ticker_pane_g1

0x39dd,	// (0x00055e93) midp_ticker_pane_g2

0x0001,

0xf775,	// (0x00061c2b) midp_ticker_pane_g

0xc5ef,	// (0x0005eaa5) midp_ticker_pane_t1

0xd6ab,	// (0x0005fb61) midp_editing_number_pane_t1

0x5d9a,	// (0x00058250) midp_editing_number_pane

0x5da9,	// (0x0005825f) midp_ticker_pane

0x5b2d,	// (0x00057fe3) ai_message_heading_pane

0xd2ad,	// (0x0005f763) bg_popup_window_pane_cp14

0x5b35,	// (0x00057feb) listscroll_ai_message_pane

0x5ab3,	// (0x00057f69) ai_message_heading_pane_g1_ParamLimits

0x5ab3,	// (0x00057f69) ai_message_heading_pane_g1

0x5abf,	// (0x00057f75) ai_message_heading_pane_g2_ParamLimits

0x5abf,	// (0x00057f75) ai_message_heading_pane_g2

0x5acd,	// (0x00057f83) ai_message_heading_pane_g3_ParamLimits

0x5acd,	// (0x00057f83) ai_message_heading_pane_g3

0x5ad9,	// (0x00057f8f) ai_message_heading_pane_g4_ParamLimits

0x5ad9,	// (0x00057f8f) ai_message_heading_pane_g4

0x0003,

0xf962,	// (0x00061e18) ai_message_heading_pane_g_ParamLimits

0xf962,	// (0x00061e18) ai_message_heading_pane_g

0x5ae5,	// (0x00057f9b) ai_message_heading_pane_t1_ParamLimits

0x5ae5,	// (0x00057f9b) ai_message_heading_pane_t1

0x5aff,	// (0x00057fb5) ai_message_heading_pane_t2_ParamLimits

0x5aff,	// (0x00057fb5) ai_message_heading_pane_t2

0x0001,

0xf96b,	// (0x00061e21) ai_message_heading_pane_t_ParamLimits

0xf96b,	// (0x00061e21) ai_message_heading_pane_t

0x5b13,	// (0x00057fc9) bg_popup_heading_pane_cp1_ParamLimits

0x5b13,	// (0x00057fc9) bg_popup_heading_pane_cp1

0x5aa1,	// (0x00057f57) list_ai_message_pane_ParamLimits

0x5aa1,	// (0x00057f57) list_ai_message_pane

0x2c53,	// (0x00055109) scroll_pane_cp10

0x5a3d,	// (0x00057ef3) list_ai_message_pane_g1

0x5a45,	// (0x00057efb) list_ai_message_pane_g2

0x0001,

0xf93f,	// (0x00061df5) list_ai_message_pane_g

0x5a4d,	// (0x00057f03) list_ai_message_pane_t1_ParamLimits

0x5a4d,	// (0x00057f03) list_ai_message_pane_t1

0x5a62,	// (0x00057f18) list_ai_message_pane_t2_ParamLimits

0x5a62,	// (0x00057f18) list_ai_message_pane_t2

0x5a77,	// (0x00057f2d) list_ai_message_pane_t3_ParamLimits

0x5a77,	// (0x00057f2d) list_ai_message_pane_t3

0x5a8c,	// (0x00057f42) list_ai_message_pane_t4_ParamLimits

0x5a8c,	// (0x00057f42) list_ai_message_pane_t4

0x0003,

0xf944,	// (0x00061dfa) list_ai_message_pane_t_ParamLimits

0xf944,	// (0x00061dfa) list_ai_message_pane_t

0xd4ec,	// (0x0005f9a2) cell_ai_soft_ind_pane_ParamLimits

0xd4ec,	// (0x0005f9a2) cell_ai_soft_ind_pane

0x39fb,	// (0x00055eb1) cell_ai_soft_ind_pane_g1_ParamLimits

0x39fb,	// (0x00055eb1) cell_ai_soft_ind_pane_g1

0xd2ad,	// (0x0005f763) grid_highlight_cp1

0x3a08,	// (0x00055ebe) text_secondary_cp56_ParamLimits

0x3a08,	// (0x00055ebe) text_secondary_cp56

0x59fb,	// (0x00057eb1) example_general_pane_ParamLimits

0x59fb,	// (0x00057eb1) example_general_pane

0x5a07,	// (0x00057ebd) example_parent_pane_g1_ParamLimits

0x5a07,	// (0x00057ebd) example_parent_pane_g1

0x5a13,	// (0x00057ec9) example_parent_pane_t1_ParamLimits

0x5a13,	// (0x00057ec9) example_parent_pane_t1

0xca6f,	// (0x0005ef25) popup_preview_text_window_ParamLimits

0xca6f,	// (0x0005ef25) popup_preview_text_window

0x3823,	// (0x00055cd9) list_single_pane_cp2_g4

0x24c7,	// (0x0005497d) bg_popup_preview_window_pane_ParamLimits

0x24c7,	// (0x0005497d) bg_popup_preview_window_pane

0x572e,	// (0x00057be4) popup_preview_text_window_t1_ParamLimits

0x572e,	// (0x00057be4) popup_preview_text_window_t1

0x574c,	// (0x00057c02) popup_preview_text_window_t2_ParamLimits

0x574c,	// (0x00057c02) popup_preview_text_window_t2

0x5795,	// (0x00057c4b) popup_preview_text_window_t3_ParamLimits

0x5795,	// (0x00057c4b) popup_preview_text_window_t3

0x57da,	// (0x00057c90) popup_preview_text_window_t4_ParamLimits

0x57da,	// (0x00057c90) popup_preview_text_window_t4

0x0004,

0xf913,	// (0x00061dc9) popup_preview_text_window_t_ParamLimits

0xf913,	// (0x00061dc9) popup_preview_text_window_t

0x5858,	// (0x00057d0e) scroll_pane_cp11

0x47ae,	// (0x00056c64) bg_popup_preview_window_pane_g1

0x56e2,	// (0x00057b98) bg_popup_preview_window_pane_g2

0x56ec,	// (0x00057ba2) bg_popup_preview_window_pane_g3

0x56f6,	// (0x00057bac) bg_popup_preview_window_pane_g4

0x5700,	// (0x00057bb6) bg_popup_preview_window_pane_g5

0x570a,	// (0x00057bc0) bg_popup_preview_window_pane_g6

0x5712,	// (0x00057bc8) bg_popup_preview_window_pane_g7

0x571a,	// (0x00057bd0) bg_popup_preview_window_pane_g8

0xf078,	// (0x0006152e) aid_popup_width_pane

0xc9df,	// (0x0005ee95) popup_midp_note_alarm_window_ParamLimits

0xc9df,	// (0x0005ee95) popup_midp_note_alarm_window

0x2abc,	// (0x00054f72) data_form_pane_ParamLimits

0xb780,	// (0x0005dc36) form_field_data_pane_g1

0xb78a,	// (0x0005dc40) form_field_data_pane_t1_ParamLimits

0x2ac8,	// (0x00054f7e) input_focus_pane_ParamLimits

0x2ad6,	// (0x00054f8c) data_form_wide_pane_ParamLimits

0x0217,	// (0x000526cd) form_field_data_wide_pane_g1

0x0223,	// (0x000526d9) form_field_data_wide_pane_t1_ParamLimits

0x278d,	// (0x00054c43) input_focus_pane_cp6_ParamLimits

0xb8e4,	// (0x0005dd9a) input_popup_find_pane_g1_ParamLimits

0xb8e4,	// (0x0005dd9a) input_popup_find_pane_g1

0x0477,	// (0x0005292d) aid_navi_side_left_pane

0x048c,	// (0x00052942) aid_navi_side_right_pane

0x50f1,	// (0x000575a7) bg_popup_window_pane_cp30_ParamLimits

0x50f1,	// (0x000575a7) bg_popup_window_pane_cp30

0x516b,	// (0x00057621) popup_midp_note_alarm_window_g1_ParamLimits

0x516b,	// (0x00057621) popup_midp_note_alarm_window_g1

0x519b,	// (0x00057651) popup_midp_note_alarm_window_t1_ParamLimits

0x519b,	// (0x00057651) popup_midp_note_alarm_window_t1

0x523c,	// (0x000576f2) popup_midp_note_alarm_window_t2_ParamLimits

0x523c,	// (0x000576f2) popup_midp_note_alarm_window_t2

0x52ea,	// (0x000577a0) popup_midp_note_alarm_window_t3_ParamLimits

0x52ea,	// (0x000577a0) popup_midp_note_alarm_window_t3

0x531c,	// (0x000577d2) popup_midp_note_alarm_window_t4_ParamLimits

0x531c,	// (0x000577d2) popup_midp_note_alarm_window_t4

0x5342,	// (0x000577f8) popup_midp_note_alarm_window_t5_ParamLimits

0x5342,	// (0x000577f8) popup_midp_note_alarm_window_t5

0x000a,

0xf8b0,	// (0x00061d66) popup_midp_note_alarm_window_t_ParamLimits

0xf8b0,	// (0x00061d66) popup_midp_note_alarm_window_t

0x53ee,	// (0x000578a4) wait_bar_pane_cp1_ParamLimits

0x53ee,	// (0x000578a4) wait_bar_pane_cp1

0xd2ad,	// (0x0005f763) wait_anim_pane_copy1

0xd2ad,	// (0x0005f763) wait_border_pane_copy1

0x4dd6,	// (0x0005728c) wait_border_pane_g1_copy1

0x023d,	// (0x000526f3) form_field_popup_pane_g1

0xb7a4,	// (0x0005dc5a) form_field_popup_pane_t1_ParamLimits

0x2ac8,	// (0x00054f7e) input_focus_pane_cp7_ParamLimits

0x2b02,	// (0x00054fb8) list_form_pane_ParamLimits

0x025f,	// (0x00052715) form_field_popup_wide_pane_g1

0x0267,	// (0x0005271d) form_field_popup_wide_pane_t1_ParamLimits

0x2ac8,	// (0x00054f7e) input_focus_pane_cp8_ParamLimits

0x2b0e,	// (0x00054fc4) list_form_wide_pane_ParamLimits

0x5f4d,	// (0x00058403) aid_size_cell_graphic_pane

0xb823,	// (0x0005dcd9) data_form_pane_t1_ParamLimits

0xbd81,	// (0x0005e237) data_form_wide_pane_t1_ParamLimits

0xce6c,	// (0x0005f322) bg_status_flat_pane

0xaf13,	// (0x0005d3c9) title_pane_t1_ParamLimits

0x215d,	// (0x00054613) title_pane_t2_ParamLimits

0x2183,	// (0x00054639) title_pane_t3_ParamLimits

0xf573,	// (0x00061a29) title_pane_t_ParamLimits

0xc3c5,	// (0x0005e87b) level_1_signal_ParamLimits

0xc3d7,	// (0x0005e88d) level_2_signal_ParamLimits

0xc3ea,	// (0x0005e8a0) level_3_signal_ParamLimits

0xc3fd,	// (0x0005e8b3) level_4_signal_ParamLimits

0xc410,	// (0x0005e8c6) level_5_signal_ParamLimits

0xc423,	// (0x0005e8d9) level_6_signal_ParamLimits

0xc436,	// (0x0005e8ec) level_7_signal_ParamLimits

0xc3c5,	// (0x0005e87b) level_1_battery_ParamLimits

0xc3d7,	// (0x0005e88d) level_2_battery_ParamLimits

0xc3ea,	// (0x0005e8a0) level_3_battery_ParamLimits

0xc3fd,	// (0x0005e8b3) level_4_battery_ParamLimits

0xc410,	// (0x0005e8c6) level_5_battery_ParamLimits

0xc423,	// (0x0005e8d9) level_6_battery_ParamLimits

0xc436,	// (0x0005e8ec) level_7_battery_ParamLimits

0x4ff6,	// (0x000574ac) bg_status_flat_pane_g1

0x4ffe,	// (0x000574b4) bg_status_flat_pane_g2

0x5006,	// (0x000574bc) bg_status_flat_pane_g3

0x500e,	// (0x000574c4) bg_status_flat_pane_g4

0x5016,	// (0x000574cc) bg_status_flat_pane_g5

0x501e,	// (0x000574d4) bg_status_flat_pane_g6

0x5026,	// (0x000574dc) bg_status_flat_pane_g7

0xafa7,	// (0x0005d45d) tabs_3_active_pane_t1_ParamLimits

0xafa7,	// (0x0005d45d) tabs_3_passive_pane_t1_ParamLimits

0xafc1,	// (0x0005d477) tabs_4_active_pane_t1_ParamLimits

0xafc1,	// (0x0005d477) tabs_4_1_passive_pane_t1_ParamLimits

0xb8fa,	// (0x0005ddb0) tabs_2_active_pane_t1_ParamLimits

0xb8fa,	// (0x0005ddb0) tabs_2_passive_pane_t1_ParamLimits

0x2195,	// (0x0005464b) bg_active_tab_pane_cp4_ParamLimits

0xb90c,	// (0x0005ddc2) tabs_2_long_active_pane_t1_ParamLimits

0x3c72,	// (0x00056128) bg_passive_tab_pane_cp4_ParamLimits

0x0abf,	// (0x00052f75) list_single_midp_graphic_pane_t1_ParamLimits

0x2195,	// (0x0005464b) bg_active_tab_pane_cp5_ParamLimits

0xb91f,	// (0x0005ddd5) tabs_3_long_active_pane_t1_ParamLimits

0x3c72,	// (0x00056128) bg_passive_tab_pane_cp5_ParamLimits

0x0abf,	// (0x00052f75) list_single_midp_graphic_pane_t1

0xce6c,	// (0x0005f322) bg_status_flat_pane_ParamLimits

0x4427,	// (0x000568dd) indicator_pane_cp2_ParamLimits

0x4427,	// (0x000568dd) indicator_pane_cp2

0xd001,	// (0x0005f4b7) navi_pane_srt_ParamLimits

0xd001,	// (0x0005f4b7) navi_pane_srt

0x458d,	// (0x00056a43) popup_clock_digital_analogue_window_cp1

0x2275,	// (0x0005472b) indicator_pane_t1

0x38f4,	// (0x00055daa) copy_highlight_pane

0x38f4,	// (0x00055daa) cursor_graphics_pane

0x38f4,	// (0x00055daa) graphic_within_text_pane

0x38f4,	// (0x00055daa) link_highlight_pane

0x581b,	// (0x00057cd1) popup_preview_text_window_t5_ParamLimits

0x581b,	// (0x00057cd1) popup_preview_text_window_t5

0x3a24,	// (0x00055eda) cursor_digital_pane

0x3a24,	// (0x00055eda) cursor_primary_pane

0x3a35,	// (0x00055eeb) cursor_primary_small_pane

0x3a3d,	// (0x00055ef3) cursor_secondary_pane

0x3a45,	// (0x00055efb) cursor_title_pane

0x3a24,	// (0x00055eda) link_highlight_digital_pane

0x3a2c,	// (0x00055ee2) link_highlight_primary_pane

0x3a35,	// (0x00055eeb) link_highlight_primary_small_pane

0x3a3d,	// (0x00055ef3) link_highlight_secondary_pane

0x3a45,	// (0x00055efb) link_highlight_title_pane

0x3a24,	// (0x00055eda) copy_highlight_digital_pane

0x3a24,	// (0x00055eda) copy_highlight_primary_pane

0x3a35,	// (0x00055eeb) copy_highlight_primary_small_pane

0x3a3d,	// (0x00055ef3) copy_highlight_secondary_pane

0x3a45,	// (0x00055efb) copy_highlight_title_pane

0x3a3d,	// (0x00055ef3) graphic_text_digital_pane

0x5094,	// (0x0005754a) graphic_text_primary_pane

0x509d,	// (0x00057553) graphic_text_primary_small_pane

0x3a35,	// (0x00055eeb) graphic_text_secondary_pane

0x3a24,	// (0x00055eda) graphic_text_title_pane

0xc601,	// (0x0005eab7) cursor_primary_pane_g1

0x5086,	// (0x0005753c) cursor_text_primary_t1

0xd343,	// (0x0005f7f9) cursor_primary_small_pane_g1

0x5078,	// (0x0005752e) cursor_text_primary_small_t1

0xd339,	// (0x0005f7ef) cursor_primary_small_pane_g1_copy1

0x5060,	// (0x00057516) cursor_text_primary_small_t1_copy1

0x503e,	// (0x000574f4) cursor_text_title_t1

0xd32f,	// (0x0005f7e5) cursor_title_pane_g1

0xc601,	// (0x0005eab7) cursor_digital_pane_g1

0x3a57,	// (0x00055f0d) cursor_text_digital_t1

0x3a65,	// (0x00055f1b) link_highlight_primary_pane_g1

0x4fe7,	// (0x0005749d) link_highlight_primary_pane_t1

0x3a65,	// (0x00055f1b) link_highlight_primary_small_pane_g1

0x3a6d,	// (0x00055f23) link_highlight_primary_small_pane_t1

0x3a7c,	// (0x00055f32) link_highlight_secondary_pane_g1

0x3a84,	// (0x00055f3a) link_highlight_secondary_pane_t1

0x4f5b,	// (0x00057411) link_highlight_title_pane_g1

0x4f63,	// (0x00057419) link_highlight_title_pane_t1

0x4f44,	// (0x000573fa) link_highlight_digital_pane_g1

0x4f4c,	// (0x00057402) link_highlight_digital_pane_t1

0x4e0c,	// (0x000572c2) copy_highlight_primary_pane_g1

0x4e23,	// (0x000572d9) copy_highlight_primary_pane_t1

0x4e0c,	// (0x000572c2) copy_highlight_primary_small_pane_g1

0x4e14,	// (0x000572ca) copy_highlight_primary_small_pane_t1

0x3a93,	// (0x00055f49) copy_highlight_secondary_pane_g1

0x3a9b,	// (0x00055f51) copy_highlight_secondary_pane_t1

0x4df5,	// (0x000572ab) copy_highlight_title_pane_g1

0x4dfd,	// (0x000572b3) copy_highlight_title_pane_t1

0x4e0c,	// (0x000572c2) copy_highlight_digital_pane_g1

0x611d,	// (0x000585d3) copy_highlight_digital_pane_t1

0x6071,	// (0x00058527) graphic_text_primary_pane_g1

0x6101,	// (0x000585b7) graphic_text_primary_pane_t1

0x610f,	// (0x000585c5) graphic_text_primary_pane_t2

0x0001,

0xf9df,	// (0x00061e95) graphic_text_primary_pane_t

0x60dd,	// (0x00058593) graphic_text_primary_small_pane_g1

0x60e5,	// (0x0005859b) graphic_text_primary_small_pane_t1

0x60f3,	// (0x000585a9) graphic_text_primary_small_pane_t2

0x0001,

0xf9da,	// (0x00061e90) graphic_text_primary_small_pane_t

0x60b9,	// (0x0005856f) graphic_text_secondary_pane_g1

0x60c1,	// (0x00058577) graphic_text_secondary_pane_t1

0x60cf,	// (0x00058585) graphic_text_secondary_pane_t2

0x0001,

0xf9d5,	// (0x00061e8b) graphic_text_secondary_pane_t

0x6095,	// (0x0005854b) graphic_text_title_pane_g1

0x609d,	// (0x00058553) graphic_text_title_pane_t1

0x60ab,	// (0x00058561) graphic_text_title_pane_t2

0x0001,

0xf9d0,	// (0x00061e86) graphic_text_title_pane_t

0x6071,	// (0x00058527) graphic_text_digital_pane_g1

0x6079,	// (0x0005852f) graphic_text_digital_pane_t1

0x6087,	// (0x0005853d) graphic_text_digital_pane_t2

0x0001,

0xf9cb,	// (0x00061e81) graphic_text_digital_pane_t

0x2195,	// (0x0005464b) navi_icon_pane_srt_ParamLimits

0x2195,	// (0x0005464b) navi_icon_pane_srt

0xd2ad,	// (0x0005f763) navi_midp_pane_srt

0xd2ad,	// (0x0005f763) navi_navi_pane_srt

0x2195,	// (0x0005464b) navi_text_pane_srt_ParamLimits

0x2195,	// (0x0005464b) navi_text_pane_srt

0x603c,	// (0x000584f2) navi_navi_icon_text_pane_srt

0x6044,	// (0x000584fa) navi_navi_pane_srt_g1_ParamLimits

0x6044,	// (0x000584fa) navi_navi_pane_srt_g1

0x6056,	// (0x0005850c) navi_navi_pane_srt_g2_ParamLimits

0x6056,	// (0x0005850c) navi_navi_pane_srt_g2

0x0001,

0xf9c6,	// (0x00061e7c) navi_navi_pane_srt_g_ParamLimits

0xf9c6,	// (0x00061e7c) navi_navi_pane_srt_g

0x6068,	// (0x0005851e) navi_navi_tabs_pane_srt

0x603c,	// (0x000584f2) navi_navi_text_pane_srt

0x603c,	// (0x000584f2) navi_navi_volume_pane_srt

0x602d,	// (0x000584e3) navi_navi_text_pane_srt_t1

0x0efd,	// (0x000533b3) navi_navi_volume_pane_srt_g1

0x0f05,	// (0x000533bb) volume_small_pane_srt_ParamLimits

0x0f05,	// (0x000533bb) volume_small_pane_srt

0x07cc,	// (0x00052c82) volume_small_pane_srt_g1_ParamLimits

0x07cc,	// (0x00052c82) volume_small_pane_srt_g1

0x07dc,	// (0x00052c92) volume_small_pane_srt_g2_ParamLimits

0x07dc,	// (0x00052c92) volume_small_pane_srt_g2

0x07ed,	// (0x00052ca3) volume_small_pane_srt_g3_ParamLimits

0x07ed,	// (0x00052ca3) volume_small_pane_srt_g3

0x07fe,	// (0x00052cb4) volume_small_pane_srt_g4_ParamLimits

0x07fe,	// (0x00052cb4) volume_small_pane_srt_g4

0x080f,	// (0x00052cc5) volume_small_pane_srt_g5_ParamLimits

0x080f,	// (0x00052cc5) volume_small_pane_srt_g5

0x0820,	// (0x00052cd6) volume_small_pane_srt_g6_ParamLimits

0x0820,	// (0x00052cd6) volume_small_pane_srt_g6

0x0831,	// (0x00052ce7) volume_small_pane_srt_g7_ParamLimits

0x0831,	// (0x00052ce7) volume_small_pane_srt_g7

0x0842,	// (0x00052cf8) volume_small_pane_srt_g8_ParamLimits

0x0842,	// (0x00052cf8) volume_small_pane_srt_g8

0x0853,	// (0x00052d09) volume_small_pane_srt_g9_ParamLimits

0x0853,	// (0x00052d09) volume_small_pane_srt_g9

0x0864,	// (0x00052d1a) volume_small_pane_srt_g10_ParamLimits

0x0864,	// (0x00052d1a) volume_small_pane_srt_g10

0x0009,

0xf77a,	// (0x00061c30) volume_small_pane_srt_g_ParamLimits

0xf77a,	// (0x00061c30) volume_small_pane_srt_g

0x257c,	// (0x00054a32) query_popup_data_pane_cp2

0x6013,	// (0x000584c9) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x6013,	// (0x000584c9) navi_navi_icon_text_pane_srt_t1

0x5094,	// (0x0005754a) navi_tabs_2_long_pane_srt

0x5094,	// (0x0005754a) navi_tabs_2_pane_srt

0x5094,	// (0x0005754a) navi_tabs_3_long_pane_srt

0x5094,	// (0x0005754a) navi_tabs_3_pane_srt

0x5094,	// (0x0005754a) navi_tabs_4_pane_srt

0x0edd,	// (0x00053393) tabs_2_active_pane_srt_ParamLimits

0x0edd,	// (0x00053393) tabs_2_active_pane_srt

0x0eed,	// (0x000533a3) tabs_2_passive_pane_srt_ParamLimits

0x0eed,	// (0x000533a3) tabs_2_passive_pane_srt

0x48a0,	// (0x00056d56) bg_passive_tab_pane_cp1_srt_ParamLimits

0x48a0,	// (0x00056d56) bg_passive_tab_pane_cp1_srt

0x5fdf,	// (0x00058495) bg_passive_tab_pane_g1_cp1_srt

0x353d,	// (0x000559f3) bg_passive_tab_pane_g2_cp1_srt

0x5fe8,	// (0x0005849e) bg_passive_tab_pane_g3_cp1_srt

0x2411,	// (0x000548c7) bg_active_tab_pane_cp1_srt_ParamLimits

0x2411,	// (0x000548c7) bg_active_tab_pane_cp1_srt

0x5ff1,	// (0x000584a7) tabs_2_active_pane_srt_g1

0xd7a6,	// (0x0005fc5c) tabs_2_active_pane_srt_t1_ParamLimits

0xd7a6,	// (0x0005fc5c) tabs_2_active_pane_srt_t1

0x5fdf,	// (0x00058495) bg_active_tab_pane_g1_cp1_srt

0x353d,	// (0x000559f3) bg_active_tab_pane_g2_cp1_srt

0x5fe8,	// (0x0005849e) bg_active_tab_pane_g3_cp1_srt

0x0eaa,	// (0x00053360) tabs_3_active_pane_srt_ParamLimits

0x0eaa,	// (0x00053360) tabs_3_active_pane_srt

0x0ebb,	// (0x00053371) tabs_3_passive_pane_cp_srt_ParamLimits

0x0ebb,	// (0x00053371) tabs_3_passive_pane_cp_srt

0x0ecc,	// (0x00053382) tabs_3_passive_pane_srt_ParamLimits

0x0ecc,	// (0x00053382) tabs_3_passive_pane_srt

0x48a0,	// (0x00056d56) bg_passive_tab_pane_cp2_srt_ParamLimits

0x48a0,	// (0x00056d56) bg_passive_tab_pane_cp2_srt

0x3aaa,	// (0x00055f60) bg_passive_tab_pane_g1_cp2_srt

0x353d,	// (0x000559f3) bg_passive_tab_pane_g2_cp2_srt

0x3ab3,	// (0x00055f69) bg_passive_tab_pane_g3_cp2_srt

0x2411,	// (0x000548c7) bg_active_tab_pane_cp2_srt_ParamLimits

0x2411,	// (0x000548c7) bg_active_tab_pane_cp2_srt

0x5fc5,	// (0x0005847b) tabs_3_active_pane_srt_g1

0xd790,	// (0x0005fc46) tabs_3_active_pane_srt_t1_ParamLimits

0xd790,	// (0x0005fc46) tabs_3_active_pane_srt_t1

0x3aaa,	// (0x00055f60) bg_active_tab_pane_g1_cp2_srt

0x353d,	// (0x000559f3) bg_active_tab_pane_g2_cp2_srt

0x3ab3,	// (0x00055f69) bg_active_tab_pane_g3_cp2_srt

0x0e62,	// (0x00053318) tabs_4_active_pane_srt_ParamLimits

0x0e62,	// (0x00053318) tabs_4_active_pane_srt

0x0e74,	// (0x0005332a) tabs_4_passive_pane_cp2_srt_ParamLimits

0x0e74,	// (0x0005332a) tabs_4_passive_pane_cp2_srt

0x3c08,	// (0x000560be) aid_size_cell_toolbar

0x5be7,	// (0x0005809d) main_idle_act_pane_ParamLimits

0x3e37,	// (0x000562ed) popup_large_graphic_colour_window_ParamLimits

0xcd35,	// (0x0005f1eb) popup_toolbar_window_ParamLimits

0xcd35,	// (0x0005f1eb) popup_toolbar_window

0x5ddf,	// (0x00058295) list_single_graphic_2heading_pane_ParamLimits

0x5ddf,	// (0x00058295) list_single_graphic_2heading_pane

0x3049,	// (0x000554ff) aid_size_cell_apps_grid_lsc_pane

0x305b,	// (0x00055511) aid_size_cell_apps_grid_prt_pane

0x3c72,	// (0x00056128) bg_wml_button_pane_cp1_ParamLimits

0x3c72,	// (0x00056128) bg_wml_button_pane_cp1

0xd2df,	// (0x0005f795) form_midp_field_text_pane_t1_ParamLimits

0x48a0,	// (0x00056d56) input_focus_pane_cp050_ParamLimits

0x4ab7,	// (0x00056f6d) list_midp_form_text_pane_ParamLimits

0x4a69,	// (0x00056f1f) input_focus_pane_cp051_ParamLimits

0x4a7d,	// (0x00056f33) list_midp_choice_pane_ParamLimits

0xd1c6,	// (0x0005f67c) list_single_2graphic_pane_cp3_ParamLimits

0xd1c6,	// (0x0005f67c) list_single_2graphic_pane_cp3

0x6c31,	// (0x000590e7) list_single_midp_graphic_pane_ParamLimits

0x6c31,	// (0x000590e7) list_single_midp_graphic_pane

0xf252,	// (0x00061708) list_single_graphic_2heading_pane_g1_ParamLimits

0xf252,	// (0x00061708) list_single_graphic_2heading_pane_g1

0xf25e,	// (0x00061714) list_single_graphic_2heading_pane_g4_ParamLimits

0xf25e,	// (0x00061714) list_single_graphic_2heading_pane_g4

0xf26a,	// (0x00061720) list_single_graphic_2heading_pane_g5_ParamLimits

0xf26a,	// (0x00061720) list_single_graphic_2heading_pane_g5

0x0002,

0xf7cd,	// (0x00061c83) list_single_graphic_2heading_pane_g_ParamLimits

0xf7cd,	// (0x00061c83) list_single_graphic_2heading_pane_g

0xf276,	// (0x0006172c) list_single_graphic_2heading_pane_t1_ParamLimits

0xf276,	// (0x0006172c) list_single_graphic_2heading_pane_t1

0xf28a,	// (0x00061740) list_single_graphic_2heading_pane_t2_ParamLimits

0xf28a,	// (0x00061740) list_single_graphic_2heading_pane_t2

0xf2a6,	// (0x0006175c) list_single_graphic_2heading_pane_t3_ParamLimits

0xf2a6,	// (0x0006175c) list_single_graphic_2heading_pane_t3

0x0002,

0xf7d4,	// (0x00061c8a) list_single_graphic_2heading_pane_t_ParamLimits

0xf7d4,	// (0x00061c8a) list_single_graphic_2heading_pane_t

0x46ec,	// (0x00056ba2) bg_popup_sub_pane_cp2

0x4716,	// (0x00056bcc) grid_toobar_pane

0x09e3,	// (0x00052e99) cell_toolbar_pane_ParamLimits

0x09e3,	// (0x00052e99) cell_toolbar_pane

0x4752,	// (0x00056c08) cell_toolbar_pane_g1_ParamLimits

0x4752,	// (0x00056c08) cell_toolbar_pane_g1

0x4766,	// (0x00056c1c) cell_toolbar_pane_g2_ParamLimits

0x4766,	// (0x00056c1c) cell_toolbar_pane_g2

0x0001,

0xf7e2,	// (0x00061c98) cell_toolbar_pane_g_ParamLimits

0xf7e2,	// (0x00061c98) cell_toolbar_pane_g

0x4788,	// (0x00056c3e) grid_highlight_pane_cp2_ParamLimits

0x4788,	// (0x00056c3e) grid_highlight_pane_cp2

0x47a2,	// (0x00056c58) toolbar_button_pane

0x47ae,	// (0x00056c64) toolbar_button_pane_g1

0x47b6,	// (0x00056c6c) toolbar_button_pane_g2

0x47be,	// (0x00056c74) toolbar_button_pane_g3

0x47c6,	// (0x00056c7c) toolbar_button_pane_g4

0x47ce,	// (0x00056c84) toolbar_button_pane_g5

0x47d6,	// (0x00056c8c) toolbar_button_pane_g6

0x47de,	// (0x00056c94) toolbar_button_pane_g7

0x47e6,	// (0x00056c9c) toolbar_button_pane_g8

0x47ee,	// (0x00056ca4) toolbar_button_pane_g9

0x0009,

0xf7e7,	// (0x00061c9d) toolbar_button_pane_g

0x0a3d,	// (0x00052ef3) list_single_2graphic_pane_g1_cp3_ParamLimits

0x0a3d,	// (0x00052ef3) list_single_2graphic_pane_g1_cp3

0xbb7a,	// (0x0005e030) list_single_2graphic_pane_g2_cp3_ParamLimits

0xbb7a,	// (0x0005e030) list_single_2graphic_pane_g2_cp3

0x0a5a,	// (0x00052f10) list_single_2graphic_pane_g3_cp3

0x0a62,	// (0x00052f18) list_single_2graphic_pane_g4_cp3_ParamLimits

0x0a62,	// (0x00052f18) list_single_2graphic_pane_g4_cp3

0x0a6e,	// (0x00052f24) list_single_2graphic_pane_t1_cp3_ParamLimits

0x0a6e,	// (0x00052f24) list_single_2graphic_pane_t1_cp3

0x0ab3,	// (0x00052f69) list_single_midp_graphic_pane_g2_ParamLimits

0x0ab3,	// (0x00052f69) list_single_midp_graphic_pane_g2

0x09cb,	// (0x00052e81) aid_zoom_text_primary

0x09d3,	// (0x00052e89) aid_zoom_text_secondary

0x3b67,	// (0x0005601d) status_small_pane_g7_ParamLimits

0x3b67,	// (0x0005601d) status_small_pane_g7

0x3b8a,	// (0x00056040) status_small_pane_t1_ParamLimits

0xaeef,	// (0x0005d3a5) title_pane_g2

0x0003,

0xf56a,	// (0x00061a20) title_pane_g

0xb187,	// (0x0005d63d) aid_size_cell_colour_1_pane_ParamLimits

0xb187,	// (0x0005d63d) aid_size_cell_colour_1_pane

0xb19b,	// (0x0005d651) aid_size_cell_colour_2_pane_ParamLimits

0xb19b,	// (0x0005d651) aid_size_cell_colour_2_pane

0xb1af,	// (0x0005d665) aid_size_cell_colour_3_pane_ParamLimits

0xb1af,	// (0x0005d665) aid_size_cell_colour_3_pane

0xb1c3,	// (0x0005d679) aid_size_cell_colour_4_pane_ParamLimits

0xb1c3,	// (0x0005d679) aid_size_cell_colour_4_pane

0x03b3,	// (0x00052869) title_pane_stacon_g1_ParamLimits

0x03b3,	// (0x00052869) title_pane_stacon_g1

0x4e7a,	// (0x00057330) popup_note_wait_window_g3_ParamLimits

0x4e7a,	// (0x00057330) popup_note_wait_window_g3

0x4ef1,	// (0x000573a7) popup_note_wait_window_t5_ParamLimits

0x4ef1,	// (0x000573a7) popup_note_wait_window_t5

0xd2ad,	// (0x0005f763) main_feb_china_hwr_fs_writing_pane

0xc6d0,	// (0x0005eb86) popup_feb_china_hwr_fs_window_ParamLimits

0xc6d0,	// (0x0005eb86) popup_feb_china_hwr_fs_window

0xbb8b,	// (0x0005e041) aid_size_cell_hwr_fs_ParamLimits

0xbb8b,	// (0x0005e041) aid_size_cell_hwr_fs

0x48a0,	// (0x00056d56) bg_popup_sub_pane_cp3_ParamLimits

0x48a0,	// (0x00056d56) bg_popup_sub_pane_cp3

0xbba0,	// (0x0005e056) grid_hwr_fs_pane_ParamLimits

0xbba0,	// (0x0005e056) grid_hwr_fs_pane

0x0b02,	// (0x00052fb8) linegrid_hwr_fs_pane_ParamLimits

0x0b02,	// (0x00052fb8) linegrid_hwr_fs_pane

0xbbb8,	// (0x0005e06e) cell_hwr_fs_pane_ParamLimits

0xbbb8,	// (0x0005e06e) cell_hwr_fs_pane

0x48ac,	// (0x00056d62) linegrid_hwr_fs_pane_g1_ParamLimits

0x48ac,	// (0x00056d62) linegrid_hwr_fs_pane_g1

0xd19a,	// (0x0005f650) linegrid_hwr_fs_pane_g2_ParamLimits

0xd19a,	// (0x0005f650) linegrid_hwr_fs_pane_g2

0x48ca,	// (0x00056d80) linegrid_hwr_fs_pane_g3_ParamLimits

0x48ca,	// (0x00056d80) linegrid_hwr_fs_pane_g3

0x0b36,	// (0x00052fec) linegrid_hwr_fs_pane_g4_ParamLimits

0x0b36,	// (0x00052fec) linegrid_hwr_fs_pane_g4

0x0b54,	// (0x0005300a) linegrid_hwr_fs_pane_g5_ParamLimits

0x0b54,	// (0x0005300a) linegrid_hwr_fs_pane_g5

0x0004,

0xf80d,	// (0x00061cc3) linegrid_hwr_fs_pane_g_ParamLimits

0xf80d,	// (0x00061cc3) linegrid_hwr_fs_pane_g

0x48d6,	// (0x00056d8c) cell_hwr_fs_pane_g1_ParamLimits

0x48d6,	// (0x00056d8c) cell_hwr_fs_pane_g1

0x4623,	// (0x00056ad9) cell_hwr_fs_pane_g2_ParamLimits

0x4623,	// (0x00056ad9) cell_hwr_fs_pane_g2

0xd1ac,	// (0x0005f662) cell_hwr_fs_pane_g3_ParamLimits

0xd1ac,	// (0x0005f662) cell_hwr_fs_pane_g3

0xd1b9,	// (0x0005f66f) cell_hwr_fs_pane_g4_ParamLimits

0xd1b9,	// (0x0005f66f) cell_hwr_fs_pane_g4

0x0003,

0xf818,	// (0x00061cce) cell_hwr_fs_pane_g_ParamLimits

0xf818,	// (0x00061cce) cell_hwr_fs_pane_g

0xbbde,	// (0x0005e094) cell_hwr_fs_pane_t1

0xd2ad,	// (0x0005f763) grid_highlight_pane_cp6

0xd2ad,	// (0x0005f763) main_idle_act2_pane

0x2c3a,	// (0x000550f0) aid_inside_area_popup_secondary

0xd363,	// (0x0005f819) aid_inside_area_window_primary_ParamLimits

0xd363,	// (0x0005f819) aid_inside_area_window_primary

0x612c,	// (0x000585e2) ai2_news_ticker_pane

0x6134,	// (0x000585ea) aid_size_cell_ai1_link_ParamLimits

0x6134,	// (0x000585ea) aid_size_cell_ai1_link

0x614e,	// (0x00058604) popup_ai2_data_window_ParamLimits

0x614e,	// (0x00058604) popup_ai2_data_window

0x616c,	// (0x00058622) popup_ai2_link_window_ParamLimits

0x616c,	// (0x00058622) popup_ai2_link_window

0x48a0,	// (0x00056d56) bg_popup_sub_pane_cp4_ParamLimits

0x48a0,	// (0x00056d56) bg_popup_sub_pane_cp4

0x6182,	// (0x00058638) grid_ai2_link_pane_ParamLimits

0x6182,	// (0x00058638) grid_ai2_link_pane

0x6199,	// (0x0005864f) popup_ai2_link_window_g1_ParamLimits

0x6199,	// (0x0005864f) popup_ai2_link_window_g1

0x61a5,	// (0x0005865b) popup_ai2_link_window_g2_ParamLimits

0x61a5,	// (0x0005865b) popup_ai2_link_window_g2

0x0001,

0xf9e4,	// (0x00061e9a) popup_ai2_link_window_g_ParamLimits

0xf9e4,	// (0x00061e9a) popup_ai2_link_window_g

0x61b6,	// (0x0005866c) ai2_mp_button_pane

0x61be,	// (0x00058674) ai2_mp_volume_pane

0x4a69,	// (0x00056f1f) bg_popup_sub_pane_cp5_ParamLimits

0x4a69,	// (0x00056f1f) bg_popup_sub_pane_cp5

0x61c6,	// (0x0005867c) heading_ai2_gene_pane_ParamLimits

0x61c6,	// (0x0005867c) heading_ai2_gene_pane

0x61d2,	// (0x00058688) list_ai2_gene_pane_ParamLimits

0x61d2,	// (0x00058688) list_ai2_gene_pane

0x621a,	// (0x000586d0) cell_ai2_link_pane_ParamLimits

0x621a,	// (0x000586d0) cell_ai2_link_pane

0x6230,	// (0x000586e6) cell_ai2_link_pane_g1

0xd2ad,	// (0x0005f763) grid_highlight_pane_cp7

0x0f1a,	// (0x000533d0) ai2_mp_volume_pane_g1

0x6303,	// (0x000587b9) ai2_mp_volume_pane_g2

0x6278,	// (0x0005872e) list_ai2_gene_pane_t1

0x630b,	// (0x000587c1) ai2_mp_volume_pane_g3

0x0002,

0xf9fd,	// (0x00061eb3) ai2_mp_volume_pane_g

0x0f22,	// (0x000533d8) volume_small_pane_cp3

0x6313,	// (0x000587c9) aid_size_cell_ai2_button

0x631b,	// (0x000587d1) grid_ai2_button_pane

0x6324,	// (0x000587da) cell_ai2_button_pane_ParamLimits

0x6324,	// (0x000587da) cell_ai2_button_pane

0xd2a3,	// (0x0005f759) cell_ai2_button_pane_g1

0xd2ad,	// (0x0005f763) grid_highlight_pane_cp8

0x62c3,	// (0x00058779) ai2_gene_pane_t1_ParamLimits

0x62c3,	// (0x00058779) ai2_gene_pane_t1

0xc632,	// (0x0005eae8) aid_height_parent_landscape

0xd533,	// (0x0005f9e9) aid_height_set_list

0x5be7,	// (0x0005809d) aid_size_parent

0x5f4d,	// (0x00058403) aid_size_cell_graphic_pane_ParamLimits

0x61e2,	// (0x00058698) popup_ai2_data_window_g1_ParamLimits

0x61e2,	// (0x00058698) popup_ai2_data_window_g1

0x61ee,	// (0x000586a4) ai2_news_ticker_pane_g1

0x61f6,	// (0x000586ac) ai2_news_ticker_pane_g2

0x0001,

0xf9e9,	// (0x00061e9f) ai2_news_ticker_pane_g

0x61fe,	// (0x000586b4) ai2_news_ticker_pane_t1

0x620c,	// (0x000586c2) ai2_news_ticker_pane_t2

0x0001,

0xf9ee,	// (0x00061ea4) ai2_news_ticker_pane_t

0x6239,	// (0x000586ef) heading_ai2_gene_pane_g1

0x6241,	// (0x000586f7) heading_ai2_gene_pane_t1_ParamLimits

0x6241,	// (0x000586f7) heading_ai2_gene_pane_t1

0x6256,	// (0x0005870c) list_highlight_pane_cp6

0x625e,	// (0x00058714) ai2_gene_pane_ParamLimits

0x625e,	// (0x00058714) ai2_gene_pane

0x6286,	// (0x0005873c) list_ai2_gene_pane_t2

0x0001,

0xf9f3,	// (0x00061ea9) list_ai2_gene_pane_t

0x6294,	// (0x0005874a) list_highlight_pane_cp8_ParamLimits

0x6294,	// (0x0005874a) list_highlight_pane_cp8

0x62a5,	// (0x0005875b) ai2_gene_pane_g1_ParamLimits

0x62a5,	// (0x0005875b) ai2_gene_pane_g1

0x62b7,	// (0x0005876d) ai2_gene_pane_g2_ParamLimits

0x62b7,	// (0x0005876d) ai2_gene_pane_g2

0x0001,

0xf9f8,	// (0x00061eae) ai2_gene_pane_g_ParamLimits

0xf9f8,	// (0x00061eae) ai2_gene_pane_g

0x29b2,	// (0x00054e68) scroll_pane_cp12

0xbb39,	// (0x0005dfef) control_pane_t3_ParamLimits

0xbb39,	// (0x0005dfef) control_pane_t3

0x3b7b,	// (0x00056031) status_small_pane_g8_ParamLimits

0x3b7b,	// (0x00056031) status_small_pane_g8

0xc772,	// (0x0005ec28) popup_find_window_ParamLimits

0xca1f,	// (0x0005eed5) popup_note_image_window_ParamLimits

0x0a13,	// (0x00052ec9) list_double2_graphic_pane_vc_g1_ParamLimits

0x0a13,	// (0x00052ec9) list_double2_graphic_pane_vc_g1

0x3865,	// (0x00055d1b) list_double2_graphic_pane_vc_g2_ParamLimits

0x3865,	// (0x00055d1b) list_double2_graphic_pane_vc_g2

0x2dfa,	// (0x000552b0) list_double2_graphic_pane_vc_g3_ParamLimits

0x2dfa,	// (0x000552b0) list_double2_graphic_pane_vc_g3

0x0002,

0xf7db,	// (0x00061c91) list_double2_graphic_pane_vc_g_ParamLimits

0xf7db,	// (0x00061c91) list_double2_graphic_pane_vc_g

0x0a1f,	// (0x00052ed5) list_double2_graphic_pane_vc_t1_ParamLimits

0x0a1f,	// (0x00052ed5) list_double2_graphic_pane_vc_t1

0x3865,	// (0x00055d1b) list_single_heading_pane_vc_g1_ParamLimits

0x3865,	// (0x00055d1b) list_single_heading_pane_vc_g1

0x2dfa,	// (0x000552b0) list_single_heading_pane_vc_g2_ParamLimits

0x2dfa,	// (0x000552b0) list_single_heading_pane_vc_g2

0x0001,

0xf5ee,	// (0x00061aa4) list_single_heading_pane_vc_g_ParamLimits

0xf5ee,	// (0x00061aa4) list_single_heading_pane_vc_g

0x0a89,	// (0x00052f3f) list_single_heading_pane_vc_t1_ParamLimits

0x0a89,	// (0x00052f3f) list_single_heading_pane_vc_t1

0x0a9f,	// (0x00052f55) list_single_heading_pane_vc_t2_ParamLimits

0x0a9f,	// (0x00052f55) list_single_heading_pane_vc_t2

0x0001,

0xf7fc,	// (0x00061cb2) list_single_heading_pane_vc_t_ParamLimits

0xf7fc,	// (0x00061cb2) list_single_heading_pane_vc_t

0x47f6,	// (0x00056cac) list_setting_number_pane_vc_g1_ParamLimits

0x47f6,	// (0x00056cac) list_setting_number_pane_vc_g1

0x4802,	// (0x00056cb8) list_setting_number_pane_vc_g2_ParamLimits

0x4802,	// (0x00056cb8) list_setting_number_pane_vc_g2

0x0001,

0xf801,	// (0x00061cb7) list_setting_number_pane_vc_g_ParamLimits

0xf801,	// (0x00061cb7) list_setting_number_pane_vc_g

0x480e,	// (0x00056cc4) list_setting_number_pane_vc_t1_ParamLimits

0x480e,	// (0x00056cc4) list_setting_number_pane_vc_t1

0x4822,	// (0x00056cd8) list_setting_number_pane_vc_t2_ParamLimits

0x4822,	// (0x00056cd8) list_setting_number_pane_vc_t2

0x483e,	// (0x00056cf4) list_setting_number_pane_vc_t3_ParamLimits

0x483e,	// (0x00056cf4) list_setting_number_pane_vc_t3

0x0002,

0xf806,	// (0x00061cbc) list_setting_number_pane_vc_t_ParamLimits

0xf806,	// (0x00061cbc) list_setting_number_pane_vc_t

0x4866,	// (0x00056d1c) set_value_pane_vc_ParamLimits

0x4866,	// (0x00056d1c) set_value_pane_vc

0x5ddf,	// (0x00058295) list_double2_graphic_pane_vc_ParamLimits

0x5ddf,	// (0x00058295) list_double2_graphic_pane_vc

0x5ddf,	// (0x00058295) list_double2_large_graphic_pane_vc_ParamLimits

0x5ddf,	// (0x00058295) list_double2_large_graphic_pane_vc

0x5ddf,	// (0x00058295) list_double2_pane_vc_ParamLimits

0x5ddf,	// (0x00058295) list_double2_pane_vc

0x5ddf,	// (0x00058295) list_double_graphic_heading_pane_vc_ParamLimits

0x5ddf,	// (0x00058295) list_double_graphic_heading_pane_vc

0x5ddf,	// (0x00058295) list_double_graphic_pane_vc_ParamLimits

0x5ddf,	// (0x00058295) list_double_graphic_pane_vc

0x5ddf,	// (0x00058295) list_double_heading_pane_vc_ParamLimits

0x5ddf,	// (0x00058295) list_double_heading_pane_vc

0x5ddf,	// (0x00058295) list_double_large_graphic_pane_vc_ParamLimits

0x5ddf,	// (0x00058295) list_double_large_graphic_pane_vc

0x5ddf,	// (0x00058295) list_double_number_pane_vc_ParamLimits

0x5ddf,	// (0x00058295) list_double_number_pane_vc

0x5ddf,	// (0x00058295) list_double_pane_vc_ParamLimits

0x5ddf,	// (0x00058295) list_double_pane_vc

0x5ddf,	// (0x00058295) list_double_time_pane_vc_ParamLimits

0x5ddf,	// (0x00058295) list_double_time_pane_vc

0x5ddf,	// (0x00058295) list_setting_number_pane_vc_ParamLimits

0x5ddf,	// (0x00058295) list_setting_number_pane_vc

0x5ddf,	// (0x00058295) list_setting_pane_vc_ParamLimits

0x5ddf,	// (0x00058295) list_setting_pane_vc

0x5ddf,	// (0x00058295) list_single_graphic_heading_pane_vc_ParamLimits

0x5ddf,	// (0x00058295) list_single_graphic_heading_pane_vc

0x5ddf,	// (0x00058295) list_single_heading_pane_vc_ParamLimits

0x5ddf,	// (0x00058295) list_single_heading_pane_vc

0x5ddf,	// (0x00058295) list_single_number_heading_pane_vc_ParamLimits

0x5ddf,	// (0x00058295) list_single_number_heading_pane_vc

0x0a13,	// (0x00052ec9) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x0a13,	// (0x00052ec9) list_double_graphic_heading_pane_vc_g1

0x2e32,	// (0x000552e8) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x2e32,	// (0x000552e8) list_double_graphic_heading_pane_vc_g2

0x2e3e,	// (0x000552f4) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x2e3e,	// (0x000552f4) list_double_graphic_heading_pane_vc_g3

0x0002,

0xfa04,	// (0x00061eba) list_double_graphic_heading_pane_vc_g_ParamLimits

0xfa04,	// (0x00061eba) list_double_graphic_heading_pane_vc_g

0x0f2b,	// (0x000533e1) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x0f2b,	// (0x000533e1) list_double_graphic_heading_pane_vc_t1

0x0a89,	// (0x00052f3f) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x0a89,	// (0x00052f3f) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa0b,	// (0x00061ec1) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa0b,	// (0x00061ec1) list_double_graphic_heading_pane_vc_t

0x47f6,	// (0x00056cac) list_setting_pane_vc_g1_ParamLimits

0x47f6,	// (0x00056cac) list_setting_pane_vc_g1

0x4802,	// (0x00056cb8) list_setting_pane_vc_g2_ParamLimits

0x4802,	// (0x00056cb8) list_setting_pane_vc_g2

0x0001,

0xf801,	// (0x00061cb7) list_setting_pane_vc_g_ParamLimits

0xf801,	// (0x00061cb7) list_setting_pane_vc_g

0x6560,	// (0x00058a16) list_setting_pane_vc_t1_ParamLimits

0x6560,	// (0x00058a16) list_setting_pane_vc_t1

0x6574,	// (0x00058a2a) list_setting_pane_vc_t2_ParamLimits

0x6574,	// (0x00058a2a) list_setting_pane_vc_t2

0x0001,

0xfa4e,	// (0x00061f04) list_setting_pane_vc_t_ParamLimits

0xfa4e,	// (0x00061f04) list_setting_pane_vc_t

0x4866,	// (0x00056d1c) set_value_pane_cp_vc_ParamLimits

0x4866,	// (0x00056d1c) set_value_pane_cp_vc

0x3865,	// (0x00055d1b) list_single_number_heading_pane_vc_g1_ParamLimits

0x3865,	// (0x00055d1b) list_single_number_heading_pane_vc_g1

0x2dfa,	// (0x000552b0) list_single_number_heading_pane_vc_g2_ParamLimits

0x2dfa,	// (0x000552b0) list_single_number_heading_pane_vc_g2

0x0001,

0xf5ee,	// (0x00061aa4) list_single_number_heading_pane_vc_g_ParamLimits

0xf5ee,	// (0x00061aa4) list_single_number_heading_pane_vc_g

0x0a89,	// (0x00052f3f) list_single_number_heading_pane_vc_t1_ParamLimits

0x0a89,	// (0x00052f3f) list_single_number_heading_pane_vc_t1

0x0f3f,	// (0x000533f5) list_single_number_heading_pane_vc_t2_ParamLimits

0x0f3f,	// (0x000533f5) list_single_number_heading_pane_vc_t2

0x0f53,	// (0x00053409) list_single_number_heading_pane_vc_t3_ParamLimits

0x0f53,	// (0x00053409) list_single_number_heading_pane_vc_t3

0x0002,

0xfa53,	// (0x00061f09) list_single_number_heading_pane_vc_t_ParamLimits

0xfa53,	// (0x00061f09) list_single_number_heading_pane_vc_t

0x0a13,	// (0x00052ec9) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x0a13,	// (0x00052ec9) list_single_graphic_heading_pane_vc_g1

0x3865,	// (0x00055d1b) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x3865,	// (0x00055d1b) list_single_graphic_heading_pane_vc_g4

0x2dfa,	// (0x000552b0) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x2dfa,	// (0x000552b0) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7db,	// (0x00061c91) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7db,	// (0x00061c91) list_single_graphic_heading_pane_vc_g

0x0a89,	// (0x00052f3f) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x0a89,	// (0x00052f3f) list_single_graphic_heading_pane_vc_t1

0x0f65,	// (0x0005341b) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x0f65,	// (0x0005341b) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa5a,	// (0x00061f10) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa5a,	// (0x00061f10) list_single_graphic_heading_pane_vc_t

0x3865,	// (0x00055d1b) list_double2_pane_vc_g1_ParamLimits

0x3865,	// (0x00055d1b) list_double2_pane_vc_g1

0x2dfa,	// (0x000552b0) list_double2_pane_vc_g2_ParamLimits

0x2dfa,	// (0x000552b0) list_double2_pane_vc_g2

0x0001,

0xf5ee,	// (0x00061aa4) list_double2_pane_vc_g_ParamLimits

0xf5ee,	// (0x00061aa4) list_double2_pane_vc_g

0x0f79,	// (0x0005342f) list_double2_pane_vc_t1_ParamLimits

0x0f79,	// (0x0005342f) list_double2_pane_vc_t1

0x2e4a,	// (0x00055300) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x2e4a,	// (0x00055300) list_double2_large_graphic_pane_vc_g1

0x3865,	// (0x00055d1b) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x3865,	// (0x00055d1b) list_double2_large_graphic_pane_vc_g2

0x2dfa,	// (0x000552b0) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x2dfa,	// (0x000552b0) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf606,	// (0x00061abc) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf606,	// (0x00061abc) list_double2_large_graphic_pane_vc_g

0x0f8f,	// (0x00053445) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x0f8f,	// (0x00053445) list_double2_large_graphic_pane_vc_t1

0x2e56,	// (0x0005530c) list_double_time_pane_vc_g1_ParamLimits

0x2e56,	// (0x0005530c) list_double_time_pane_vc_g1

0x2e62,	// (0x00055318) list_double_time_pane_vc_g2_ParamLimits

0x2e62,	// (0x00055318) list_double_time_pane_vc_g2

0x0001,

0xfa5f,	// (0x00061f15) list_double_time_pane_vc_g_ParamLimits

0xfa5f,	// (0x00061f15) list_double_time_pane_vc_g

0x0fa5,	// (0x0005345b) list_double_time_pane_vc_t1_ParamLimits

0x0fa5,	// (0x0005345b) list_double_time_pane_vc_t1

0x0fbe,	// (0x00053474) list_double_time_pane_vc_t2_ParamLimits

0x0fbe,	// (0x00053474) list_double_time_pane_vc_t2

0x0ffe,	// (0x000534b4) list_double_time_pane_vc_t3_ParamLimits

0x0ffe,	// (0x000534b4) list_double_time_pane_vc_t3

0x1016,	// (0x000534cc) list_double_time_pane_vc_t4_ParamLimits

0x1016,	// (0x000534cc) list_double_time_pane_vc_t4

0x0003,

0xfa64,	// (0x00061f1a) list_double_time_pane_vc_t_ParamLimits

0xfa64,	// (0x00061f1a) list_double_time_pane_vc_t

0x3865,	// (0x00055d1b) list_double_pane_vc_g1_ParamLimits

0x3865,	// (0x00055d1b) list_double_pane_vc_g1

0x2dfa,	// (0x000552b0) list_double_pane_vc_g2_ParamLimits

0x2dfa,	// (0x000552b0) list_double_pane_vc_g2

0x0001,

0xf5ee,	// (0x00061aa4) list_double_pane_vc_g_ParamLimits

0xf5ee,	// (0x00061aa4) list_double_pane_vc_g

0x102a,	// (0x000534e0) list_double_pane_vc_t1_ParamLimits

0x102a,	// (0x000534e0) list_double_pane_vc_t1

0x103c,	// (0x000534f2) list_double_pane_vc_t2_ParamLimits

0x103c,	// (0x000534f2) list_double_pane_vc_t2

0x0001,

0xfa6d,	// (0x00061f23) list_double_pane_vc_t_ParamLimits

0xfa6d,	// (0x00061f23) list_double_pane_vc_t

0x3865,	// (0x00055d1b) list_double_number_pane_vc_g1_ParamLimits

0x3865,	// (0x00055d1b) list_double_number_pane_vc_g1

0x2dfa,	// (0x000552b0) list_double_number_pane_vc_g2_ParamLimits

0x2dfa,	// (0x000552b0) list_double_number_pane_vc_g2

0x0001,

0xf5ee,	// (0x00061aa4) list_double_number_pane_vc_g_ParamLimits

0xf5ee,	// (0x00061aa4) list_double_number_pane_vc_g

0x1054,	// (0x0005350a) list_double_number_pane_vc_t1_ParamLimits

0x1054,	// (0x0005350a) list_double_number_pane_vc_t1

0x1068,	// (0x0005351e) list_double_number_pane_vc_t2_ParamLimits

0x1068,	// (0x0005351e) list_double_number_pane_vc_t2

0x103c,	// (0x000534f2) list_double_number_pane_vc_t3_ParamLimits

0x103c,	// (0x000534f2) list_double_number_pane_vc_t3

0x0002,

0xfa72,	// (0x00061f28) list_double_number_pane_vc_t_ParamLimits

0xfa72,	// (0x00061f28) list_double_number_pane_vc_t

0x2e6e,	// (0x00055324) list_double_large_graphic_pane_vc_g1_ParamLimits

0x2e6e,	// (0x00055324) list_double_large_graphic_pane_vc_g1

0x2e7a,	// (0x00055330) list_double_large_graphic_pane_vc_g2_ParamLimits

0x2e7a,	// (0x00055330) list_double_large_graphic_pane_vc_g2

0x2dfa,	// (0x000552b0) list_double_large_graphic_pane_vc_g3_ParamLimits

0x2dfa,	// (0x000552b0) list_double_large_graphic_pane_vc_g3

0x107a,	// (0x00053530) list_double_large_graphic_pane_vc_g4_ParamLimits

0x107a,	// (0x00053530) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa79,	// (0x00061f2f) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa79,	// (0x00061f2f) list_double_large_graphic_pane_vc_g

0x1086,	// (0x0005353c) list_double_large_graphic_pane_vc_t1_ParamLimits

0x1086,	// (0x0005353c) list_double_large_graphic_pane_vc_t1

0x1098,	// (0x0005354e) list_double_large_graphic_pane_vc_t2_ParamLimits

0x1098,	// (0x0005354e) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa82,	// (0x00061f38) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa82,	// (0x00061f38) list_double_large_graphic_pane_vc_t

0x2e32,	// (0x000552e8) list_double_heading_pane_vc_g1_ParamLimits

0x2e32,	// (0x000552e8) list_double_heading_pane_vc_g1

0x2e3e,	// (0x000552f4) list_double_heading_pane_vc_g2_ParamLimits

0x2e3e,	// (0x000552f4) list_double_heading_pane_vc_g2

0x0001,

0xfa87,	// (0x00061f3d) list_double_heading_pane_vc_g_ParamLimits

0xfa87,	// (0x00061f3d) list_double_heading_pane_vc_g

0x10b1,	// (0x00053567) list_double_heading_pane_vc_t1_ParamLimits

0x10b1,	// (0x00053567) list_double_heading_pane_vc_t1

0x0a89,	// (0x00052f3f) list_double_heading_pane_vc_t2_ParamLimits

0x0a89,	// (0x00052f3f) list_double_heading_pane_vc_t2

0x0001,

0xfa8c,	// (0x00061f42) list_double_heading_pane_vc_t_ParamLimits

0xfa8c,	// (0x00061f42) list_double_heading_pane_vc_t

0x0a13,	// (0x00052ec9) list_double_graphic_pane_vc_g1_ParamLimits

0x0a13,	// (0x00052ec9) list_double_graphic_pane_vc_g1

0x2e89,	// (0x0005533f) list_double_graphic_pane_vc_g2_ParamLimits

0x2e89,	// (0x0005533f) list_double_graphic_pane_vc_g2

0x2e98,	// (0x0005534e) list_double_graphic_pane_vc_g3_ParamLimits

0x2e98,	// (0x0005534e) list_double_graphic_pane_vc_g3

0x0002,

0xfa91,	// (0x00061f47) list_double_graphic_pane_vc_g_ParamLimits

0xfa91,	// (0x00061f47) list_double_graphic_pane_vc_g

0x10c5,	// (0x0005357b) list_double_graphic_pane_vc_t1_ParamLimits

0x10c5,	// (0x0005357b) list_double_graphic_pane_vc_t1

0x103c,	// (0x000534f2) list_double_graphic_pane_vc_t2_ParamLimits

0x103c,	// (0x000534f2) list_double_graphic_pane_vc_t2

0x0001,

0xfa98,	// (0x00061f4e) list_double_graphic_pane_vc_t_ParamLimits

0xfa98,	// (0x00061f4e) list_double_graphic_pane_vc_t

0xf084,	// (0x0006153a) aid_size_cell_fastswap

0xad39,	// (0x0005d1ef) aid_size_cell_touch_ParamLimits

0xad39,	// (0x0005d1ef) aid_size_cell_touch

0xf20b,	// (0x000616c1) popup_fast_swap_wide_window_ParamLimits

0xf20b,	// (0x000616c1) popup_fast_swap_wide_window

0xae88,	// (0x0005d33e) touch_pane_ParamLimits

0xae88,	// (0x0005d33e) touch_pane

0x2ab4,	// (0x00054f6a) button_value_adjust_pane_cp2

0x0133,	// (0x000525e9) button_value_adjust_pane_cp4

0x015b,	// (0x00052611) form_field_data_pane_cp2

0xb754,	// (0x0005dc0a) form_field_data_wide_pane_cp2

0x311b,	// (0x000555d1) bg_scroll_pane_ParamLimits

0x0518,	// (0x000529ce) scroll_handle_pane_ParamLimits

0x052c,	// (0x000529e2) scroll_sc2_down_pane_ParamLimits

0x052c,	// (0x000529e2) scroll_sc2_down_pane

0x314c,	// (0x00055602) scroll_sc2_up_pane_ParamLimits

0x314c,	// (0x00055602) scroll_sc2_up_pane

0xd8e7,	// (0x0005fd9d) grid_wheel_folder_pane_g1_ParamLimits

0xd8e7,	// (0x0005fd9d) grid_wheel_folder_pane_g1

0x0764,	// (0x00052c1a) clock_nsta_pane_cp2_ParamLimits

0x0764,	// (0x00052c1a) clock_nsta_pane_cp2

0xc547,	// (0x0005e9fd) listscroll_midp_pane_ParamLimits

0xc558,	// (0x0005ea0e) midp_canvas_pane

0x3bf6,	// (0x000560ac) nsta_clock_indic_pane

0x3c44,	// (0x000560fa) listscroll_form_pane_vc

0x3c60,	// (0x00056116) listscroll_set_pane_vc_ParamLimits

0x3c60,	// (0x00056116) listscroll_set_pane_vc

0xce94,	// (0x0005f34a) clock_nsta_pane

0xcebe,	// (0x0005f374) indicator_nsta_pane

0x46ec,	// (0x00056ba2) bg_popup_sub_pane_cp2_ParamLimits

0x4700,	// (0x00056bb6) find_pane_cp2_ParamLimits

0x4700,	// (0x00056bb6) find_pane_cp2

0x4716,	// (0x00056bcc) grid_toobar_pane_ParamLimits

0x4874,	// (0x00056d2a) list_form_gen_pane_vc_ParamLimits

0x4874,	// (0x00056d2a) list_form_gen_pane_vc

0x488a,	// (0x00056d40) scroll_pane_cp8_vc_ParamLimits

0x488a,	// (0x00056d40) scroll_pane_cp8_vc

0x4906,	// (0x00056dbc) data_form_wide_pane_vc_ParamLimits

0x4906,	// (0x00056dbc) data_form_wide_pane_vc

0x4912,	// (0x00056dc8) form_field_data_wide_pane_vc_g1

0x491a,	// (0x00056dd0) form_field_data_wide_pane_vc_t1_ParamLimits

0x491a,	// (0x00056dd0) form_field_data_wide_pane_vc_t1

0x2ac8,	// (0x00054f7e) input_focus_pane_cp6_vc_ParamLimits

0x2ac8,	// (0x00054f7e) input_focus_pane_cp6_vc

0xd307,	// (0x0005f7bd) list_midp_pane_ParamLimits

0x5fb9,	// (0x0005846f) scroll_pane_cp16_ParamLimits

0x5fb9,	// (0x0005846f) scroll_pane_cp16

0x4c4e,	// (0x00057104) button_value_adjust_pane_ParamLimits

0x4c4e,	// (0x00057104) button_value_adjust_pane

0xd544,	// (0x0005f9fa) button_value_adjust_pane_cp6_ParamLimits

0xd544,	// (0x0005f9fa) button_value_adjust_pane_cp6

0xd686,	// (0x0005fb3c) settings_code_pane_cp_ParamLimits

0xd686,	// (0x0005fb3c) settings_code_pane_cp

0xd2a3,	// (0x0005f759) cell_touch_pane_g1

0xd2a3,	// (0x0005f759) cell_touch_pane_g2

0x0001,

0xf724,	// (0x00061bda) cell_touch_pane_g

0xd7bc,	// (0x0005fc72) cell_touch_pane_cp_ParamLimits

0xd7bc,	// (0x0005fc72) cell_touch_pane_cp

0xd7d8,	// (0x0005fc8e) cell_touch_pane_ParamLimits

0xd7d8,	// (0x0005fc8e) cell_touch_pane

0xd2a3,	// (0x0005f759) scroll_sc2_down_pane_g1

0xd2a3,	// (0x0005f759) scroll_sc2_up_pane_g1

0xd2ad,	// (0x0005f763) bg_set_opt_pane_cp4_vc

0x6357,	// (0x0005880d) list_set_graphic_pane_vc_g1_ParamLimits

0x6357,	// (0x0005880d) list_set_graphic_pane_vc_g1

0x6363,	// (0x00058819) list_set_graphic_pane_vc_g2_ParamLimits

0x6363,	// (0x00058819) list_set_graphic_pane_vc_g2

0x0001,

0xfa10,	// (0x00061ec6) list_set_graphic_pane_vc_g_ParamLimits

0xfa10,	// (0x00061ec6) list_set_graphic_pane_vc_g

0x636f,	// (0x00058825) text_primary_small_cp13_vc_ParamLimits

0x636f,	// (0x00058825) text_primary_small_cp13_vc

0x6387,	// (0x0005883d) list_set_graphic_pane_vc_ParamLimits

0x6387,	// (0x0005883d) list_set_graphic_pane_vc

0xd2ad,	// (0x0005f763) input_focus_pane_cp2_vc

0xd2a3,	// (0x0005f759) setting_code_pane_vc_g1

0x639b,	// (0x00058851) setting_code_pane_vc_t1

0x63a9,	// (0x0005885f) set_text_pane_vc_t1_ParamLimits

0x63a9,	// (0x0005885f) set_text_pane_vc_t1

0xd2ad,	// (0x0005f763) input_focus_pane_cp1_vc

0x63c7,	// (0x0005887d) list_set_text_pane_vc

0xd2a3,	// (0x0005f759) setting_text_pane_vc_g1

0xd2ad,	// (0x0005f763) bg_set_opt_pane_cp2_vc

0x63d1,	// (0x00058887) setting_slider_graphic_pane_vc_g1

0x63d9,	// (0x0005888f) setting_slider_graphic_pane_vc_t1

0x63e7,	// (0x0005889d) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa15,	// (0x00061ecb) setting_slider_graphic_pane_vc_t

0x63f5,	// (0x000588ab) slider_set_pane_cp_vc

0x63fd,	// (0x000588b3) slider_set_pane_vc_g1

0x6406,	// (0x000588bc) slider_set_pane_vc_g2

0x0006,

0xfa1a,	// (0x00061ed0) slider_set_pane_vc_g

0x2b2f,	// (0x00054fe5) set_opt_bg_pane_g1_copy1

0x2b37,	// (0x00054fed) set_opt_bg_pane_g2_copy1

0x6432,	// (0x000588e8) set_opt_bg_pane_g3_copy1

0x2b47,	// (0x00054ffd) set_opt_bg_pane_g4_copy1

0x2b4f,	// (0x00055005) set_opt_bg_pane_g5_copy1

0x2b57,	// (0x0005500d) set_opt_bg_pane_g6_copy1

0x643c,	// (0x000588f2) set_opt_bg_pane_g7_copy1

0x6446,	// (0x000588fc) set_opt_bg_pane_g8_copy1

0x6450,	// (0x00058906) set_opt_bg_pane_g9_copy1

0xd2ad,	// (0x0005f763) bg_set_opt_pane_cp_vc

0x645a,	// (0x00058910) setting_slider_pane_vc_t1

0x63d9,	// (0x0005888f) setting_slider_pane_vc_t2

0x63e7,	// (0x0005889d) setting_slider_pane_vc_t3

0x0002,

0xfa29,	// (0x00061edf) setting_slider_pane_vc_t

0x63f5,	// (0x000588ab) slider_set_pane_vc

0x0ba6,	// (0x0005305c) volume_set_pane_vc_g1

0x0baf,	// (0x00053065) volume_set_pane_vc_g2

0x0bb8,	// (0x0005306e) volume_set_pane_vc_g3

0x0bc1,	// (0x00053077) volume_set_pane_vc_g4

0x0bca,	// (0x00053080) volume_set_pane_vc_g5

0x0bd3,	// (0x00053089) volume_set_pane_vc_g6

0x0bdc,	// (0x00053092) volume_set_pane_vc_g7

0x0be5,	// (0x0005309b) volume_set_pane_vc_g8

0x0bee,	// (0x000530a4) volume_set_pane_vc_g9

0x0bf7,	// (0x000530ad) volume_set_pane_vc_g10

0x0009,

0xfa30,	// (0x00061ee6) volume_set_pane_vc_g

0x6469,	// (0x0005891f) volume_set_pane_vc

0x6471,	// (0x00058927) button_value_adjust_pane_cp1_vc

0x647b,	// (0x00058931) list_highlight_pane_cp2_vc

0x6484,	// (0x0005893a) list_set_pane_vc_ParamLimits

0x6484,	// (0x0005893a) list_set_pane_vc

0x64ee,	// (0x000589a4) main_pane_set_vc_t1_ParamLimits

0x64ee,	// (0x000589a4) main_pane_set_vc_t1

0x6503,	// (0x000589b9) main_pane_set_vc_t2_ParamLimits

0x6503,	// (0x000589b9) main_pane_set_vc_t2

0x6515,	// (0x000589cb) main_pane_set_vc_t3_ParamLimits

0x6515,	// (0x000589cb) main_pane_set_vc_t3

0x6529,	// (0x000589df) main_pane_set_vc_t4_ParamLimits

0x6529,	// (0x000589df) main_pane_set_vc_t4

0x0003,

0xfa45,	// (0x00061efb) main_pane_set_vc_t_ParamLimits

0xfa45,	// (0x00061efb) main_pane_set_vc_t

0x653d,	// (0x000589f3) setting_code_pane_vc_ParamLimits

0x653d,	// (0x000589f3) setting_code_pane_vc

0x654e,	// (0x00058a04) setting_slider_graphic_pane_vc

0x654e,	// (0x00058a04) setting_slider_pane_vc

0x654e,	// (0x00058a04) setting_text_pane_vc

0x654e,	// (0x00058a04) setting_volume_pane_vc

0x6558,	// (0x00058a0e) scroll_pane_cp121_vc

0x2aa2,	// (0x00054f58) set_content_pane_vc

0x6596,	// (0x00058a4c) button_value_adjust_pane_g1

0x659f,	// (0x00058a55) button_value_adjust_pane_g2

0x0001,

0xfa9d,	// (0x00061f53) button_value_adjust_pane_g

0x65a8,	// (0x00058a5e) form_field_slider_wide_pane_vc_t1_ParamLimits

0x65a8,	// (0x00058a5e) form_field_slider_wide_pane_vc_t1

0x65bc,	// (0x00058a72) form_field_slider_wide_pane_vc_t2_ParamLimits

0x65bc,	// (0x00058a72) form_field_slider_wide_pane_vc_t2

0x0001,

0xfaa2,	// (0x00061f58) form_field_slider_wide_pane_vc_t_ParamLimits

0xfaa2,	// (0x00061f58) form_field_slider_wide_pane_vc_t

0x2411,	// (0x000548c7) input_focus_pane_cp10_vc_ParamLimits

0x2411,	// (0x000548c7) input_focus_pane_cp10_vc

0x65ce,	// (0x00058a84) slider_cont_pane_cp1_vc_ParamLimits

0x65ce,	// (0x00058a84) slider_cont_pane_cp1_vc

0x63fd,	// (0x000588b3) slider_form_pane_g1_cp2

0x6406,	// (0x000588bc) slider_form_pane_g2_cp2

0x65e7,	// (0x00058a9d) form_field_slider_pane_vc_t3

0x65f5,	// (0x00058aab) form_field_slider_pane_vc_t4

0x6603,	// (0x00058ab9) slider_form_pane_vc_ParamLimits

0x6603,	// (0x00058ab9) slider_form_pane_vc

0x6610,	// (0x00058ac6) form_field_slider_pane_vc_t1_ParamLimits

0x6610,	// (0x00058ac6) form_field_slider_pane_vc_t1

0x65bc,	// (0x00058a72) form_field_slider_pane_vc_t2_ParamLimits

0x65bc,	// (0x00058a72) form_field_slider_pane_vc_t2

0x0001,

0xfab2,	// (0x00061f68) form_field_slider_pane_vc_t_ParamLimits

0xfab2,	// (0x00061f68) form_field_slider_pane_vc_t

0x2411,	// (0x000548c7) input_focus_pane_cp9_vc_ParamLimits

0x2411,	// (0x000548c7) input_focus_pane_cp9_vc

0x662c,	// (0x00058ae2) slider_cont_pane_vc_ParamLimits

0x662c,	// (0x00058ae2) slider_cont_pane_vc

0x663e,	// (0x00058af4) list_form_graphic_pane_cp_vc_ParamLimits

0x663e,	// (0x00058af4) list_form_graphic_pane_cp_vc

0x4912,	// (0x00056dc8) form_field_popup_wide_pane_vc_g1

0x6653,	// (0x00058b09) form_field_popup_wide_pane_vc_t1_ParamLimits

0x6653,	// (0x00058b09) form_field_popup_wide_pane_vc_t1

0x2ac8,	// (0x00054f7e) input_focus_pane_cp8_vc_ParamLimits

0x2ac8,	// (0x00054f7e) input_focus_pane_cp8_vc

0x666a,	// (0x00058b20) list_form_wide_pane_vc_ParamLimits

0x666a,	// (0x00058b20) list_form_wide_pane_vc

0x6676,	// (0x00058b2c) list_form_graphic_pane_vc_g1

0x667e,	// (0x00058b34) list_form_graphic_pane_vc_t1_ParamLimits

0x667e,	// (0x00058b34) list_form_graphic_pane_vc_t1

0x2195,	// (0x0005464b) list_highlight_pane_cp5_vc_ParamLimits

0x2195,	// (0x0005464b) list_highlight_pane_cp5_vc

0x669a,	// (0x00058b50) list_form_graphic_pane_vc_ParamLimits

0x669a,	// (0x00058b50) list_form_graphic_pane_vc

0x4912,	// (0x00056dc8) form_field_popup_pane_vc_g1

0x66b0,	// (0x00058b66) form_field_popup_pane_vc_t1_ParamLimits

0x66b0,	// (0x00058b66) form_field_popup_pane_vc_t1

0x2ac8,	// (0x00054f7e) input_focus_pane_cp7_vc_ParamLimits

0x2ac8,	// (0x00054f7e) input_focus_pane_cp7_vc

0x66c7,	// (0x00058b7d) list_form_pane_vc_ParamLimits

0x66c7,	// (0x00058b7d) list_form_pane_vc

0x66d3,	// (0x00058b89) data_form_pane_vc_t1_ParamLimits

0x66d3,	// (0x00058b89) data_form_pane_vc_t1

0x2b2f,	// (0x00054fe5) input_focus_pane_vc_g1

0x2b37,	// (0x00054fed) input_focus_pane_vc_g2

0x2b3f,	// (0x00054ff5) input_focus_pane_vc_g3

0x2b47,	// (0x00054ffd) input_focus_pane_vc_g4

0x2b4f,	// (0x00055005) input_focus_pane_vc_g5

0x2b57,	// (0x0005500d) input_focus_pane_vc_g6

0x2b5f,	// (0x00055015) input_focus_pane_vc_g7

0x2b67,	// (0x0005501d) input_focus_pane_vc_g8

0x2b6f,	// (0x00055025) input_focus_pane_vc_g9

0xd2a3,	// (0x0005f759) input_focus_pane_vc_g10

0x0009,

0xf6ad,	// (0x00061b63) input_focus_pane_vc_g

0x4906,	// (0x00056dbc) data_form_pane_vc_ParamLimits

0x4906,	// (0x00056dbc) data_form_pane_vc

0x4912,	// (0x00056dc8) form_field_data_pane_vc_g1

0x66f0,	// (0x00058ba6) form_field_data_pane_vc_t1_ParamLimits

0x66f0,	// (0x00058ba6) form_field_data_pane_vc_t1

0x2ac8,	// (0x00054f7e) input_focus_pane_vc_ParamLimits

0x2ac8,	// (0x00054f7e) input_focus_pane_vc

0x670a,	// (0x00058bc0) button_value_adjust_pane_cp3_vc

0x6712,	// (0x00058bc8) button_value_adjust_pane_cp5_vc

0x671a,	// (0x00058bd0) form_field_data_pane_vc_ParamLimits

0x671a,	// (0x00058bd0) form_field_data_pane_vc

0x6735,	// (0x00058beb) form_field_data_pane_vc_cp2

0x673d,	// (0x00058bf3) form_field_data_wide_pane_vc_ParamLimits

0x673d,	// (0x00058bf3) form_field_data_wide_pane_vc

0x6757,	// (0x00058c0d) form_field_data_wide_pane_vc_cp2

0x675f,	// (0x00058c15) form_field_popup_pane_vc_ParamLimits

0x675f,	// (0x00058c15) form_field_popup_pane_vc

0x677a,	// (0x00058c30) form_field_popup_wide_pane_vc_ParamLimits

0x677a,	// (0x00058c30) form_field_popup_wide_pane_vc

0x6794,	// (0x00058c4a) form_field_slider_pane_vc_ParamLimits

0x6794,	// (0x00058c4a) form_field_slider_pane_vc

0x67a7,	// (0x00058c5d) form_field_slider_wide_pane_vc_ParamLimits

0x67a7,	// (0x00058c5d) form_field_slider_wide_pane_vc

0xd7f6,	// (0x0005fcac) grid_touch_1_pane_ParamLimits

0xd7f6,	// (0x0005fcac) grid_touch_1_pane

0xd80a,	// (0x0005fcc0) grid_touch_2_pane_ParamLimits

0xd80a,	// (0x0005fcc0) grid_touch_2_pane

0x687e,	// (0x00058d34) touch_pane_g1_ParamLimits

0x687e,	// (0x00058d34) touch_pane_g1

0x67e0,	// (0x00058c96) cell_app_pane_cp_wide_ParamLimits

0x67e0,	// (0x00058c96) cell_app_pane_cp_wide

0x67f1,	// (0x00058ca7) grid_popup_fast_wide_pane_ParamLimits

0x67f1,	// (0x00058ca7) grid_popup_fast_wide_pane

0x6805,	// (0x00058cbb) scroll_pane_cp19_ParamLimits

0x6805,	// (0x00058cbb) scroll_pane_cp19

0xd2ad,	// (0x0005f763) bg_popup_window_pane_cp20

0x6819,	// (0x00058ccf) listscroll_popup_fast_wide_pane

0x2ca7,	// (0x0005515d) grid_indicator_nsta_pane

0x6821,	// (0x00058cd7) clock_nsta_pane_g1

0x682a,	// (0x00058ce0) clock_nsta_pane_t1

0xd836,	// (0x0005fcec) cell_indicator_nsta_pane_ParamLimits

0xd836,	// (0x0005fcec) cell_indicator_nsta_pane

0x687e,	// (0x00058d34) cell_indicator_nsta_pane_g1

0xd853,	// (0x0005fd09) cell_indicator_nsta_pane_g2

0x0001,

0xfabc,	// (0x00061f72) cell_indicator_nsta_pane_g

0x68a1,	// (0x00058d57) clock_nsta_pane_cp

0x68a9,	// (0x00058d5f) indicator_nsta_pane_cp

0x68b1,	// (0x00058d67) nsta_clock_indic_pane_g1

0x2261,	// (0x00054717) grid_indicator_pane

0x323e,	// (0x000556f4) scroll_pane_cp29

0x06b0,	// (0x00052b66) indicator_nsta_pane_cp2_ParamLimits

0x06b0,	// (0x00052b66) indicator_nsta_pane_cp2

0x2195,	// (0x0005464b) main_apps_wheel_pane

0x4ad1,	// (0x00056f87) form_midp_field_text_pane_ParamLimits

0x4c20,	// (0x000570d6) scroll_bar_cp050_ParamLimits

0x691a,	// (0x00058dd0) cell_indicator_pane_ParamLimits

0x691a,	// (0x00058dd0) cell_indicator_pane

0x6932,	// (0x00058de8) cell_indicator_pane_g1

0xd869,	// (0x0005fd1f) grid_wheel_folder_pane_ParamLimits

0xd869,	// (0x0005fd1f) grid_wheel_folder_pane

0xd877,	// (0x0005fd2d) list_wheel_apps_pane_ParamLimits

0xd877,	// (0x0005fd2d) list_wheel_apps_pane

0xd885,	// (0x0005fd3b) main_apps_wheel_pane_g1_ParamLimits

0xd885,	// (0x0005fd3b) main_apps_wheel_pane_g1

0xd895,	// (0x0005fd4b) main_apps_wheel_pane_g2_ParamLimits

0xd895,	// (0x0005fd4b) main_apps_wheel_pane_g2

0x0001,

0xfad8,	// (0x00061f8e) main_apps_wheel_pane_g_ParamLimits

0xfad8,	// (0x00061f8e) main_apps_wheel_pane_g

0xd8a5,	// (0x0005fd5b) main_apps_wheel_pane_t1_ParamLimits

0xd8a5,	// (0x0005fd5b) main_apps_wheel_pane_t1

0xd8bd,	// (0x0005fd73) list_wheel_apps_pane_g1

0xd8c5,	// (0x0005fd7b) list_wheel_apps_pane_g2

0xd8cd,	// (0x0005fd83) list_wheel_apps_pane_g3

0xd8d5,	// (0x0005fd8b) list_wheel_apps_pane_g4

0xd8dd,	// (0x0005fd93) list_wheel_apps_pane_g5

0x0004,

0xfadd,	// (0x00061f93) list_wheel_apps_pane_g

0x3770,	// (0x00055c26) navi_icon_text_pane

0xcd8d,	// (0x0005f243) aid_fill_nsta

0xd8fa,	// (0x0005fdb0) navi_icon_text_pane_g1

0xd906,	// (0x0005fdbc) navi_icon_text_pane_t1

0xc52f,	// (0x0005e9e5) list_set_graphic_pane_t1_ParamLimits

0xc52f,	// (0x0005e9e5) list_set_graphic_pane_t1

0x5371,	// (0x00057827) popup_midp_note_alarm_window_t6_ParamLimits

0x5371,	// (0x00057827) popup_midp_note_alarm_window_t6

0x5383,	// (0x00057839) popup_midp_note_alarm_window_t7_ParamLimits

0x5383,	// (0x00057839) popup_midp_note_alarm_window_t7

0x5395,	// (0x0005784b) popup_midp_note_alarm_window_t8_ParamLimits

0x5395,	// (0x0005784b) popup_midp_note_alarm_window_t8

0x53a7,	// (0x0005785d) popup_midp_note_alarm_window_t9_ParamLimits

0x53a7,	// (0x0005785d) popup_midp_note_alarm_window_t9

0x53b9,	// (0x0005786f) popup_midp_note_alarm_window_t10_ParamLimits

0x53b9,	// (0x0005786f) popup_midp_note_alarm_window_t10

0x53cb,	// (0x00057881) popup_midp_note_alarm_window_t11_ParamLimits

0x53cb,	// (0x00057881) popup_midp_note_alarm_window_t11

0x53dd,	// (0x00057893) scroll_pane_cp17_ParamLimits

0x53dd,	// (0x00057893) scroll_pane_cp17

0x0ba6,	// (0x0005305c) volume_small_pane_cp_g1

0x10d7,	// (0x0005358d) volume_small_pane_cp_g2

0x10e0,	// (0x00053596) volume_small_pane_cp_g3

0x10e9,	// (0x0005359f) volume_small_pane_cp_g4

0x10f2,	// (0x000535a8) volume_small_pane_cp_g5

0x10fb,	// (0x000535b1) volume_small_pane_cp_g6

0x1104,	// (0x000535ba) volume_small_pane_cp_g7

0x110d,	// (0x000535c3) volume_small_pane_cp_g8

0x1116,	// (0x000535cc) volume_small_pane_cp_g9

0x111f,	// (0x000535d5) volume_small_pane_cp_g10

0x39d1,	// (0x00055e87) midp_ticker_pane_g1_ParamLimits

0x39dd,	// (0x00055e93) midp_ticker_pane_g2_ParamLimits

0xf775,	// (0x00061c2b) midp_ticker_pane_g_ParamLimits

0xc5ef,	// (0x0005eaa5) midp_ticker_pane_t1_ParamLimits

0xcdad,	// (0x0005f263) aid_fill_nsta_2

0x4c0c,	// (0x000570c2) list_form2_midp_pane

0x5d9a,	// (0x00058250) midp_editing_number_pane_ParamLimits

0x5da9,	// (0x0005825f) midp_ticker_pane_ParamLimits

0x6a2b,	// (0x00058ee1) form2_midp_field_pane

0x6a4f,	// (0x00058f05) scroll_pane_cp51

0x6a6f,	// (0x00058f25) form2_midp_button_pane_ParamLimits

0x6a6f,	// (0x00058f25) form2_midp_button_pane

0x6a81,	// (0x00058f37) form2_midp_content_pane_ParamLimits

0x6a81,	// (0x00058f37) form2_midp_content_pane

0x6a9b,	// (0x00058f51) form2_midp_field_choice_group_pane

0x6aa3,	// (0x00058f59) form2_midp_field_pane_g1

0x6aab,	// (0x00058f61) form2_midp_field_pane_g2

0x6ab3,	// (0x00058f69) form2_midp_field_pane_g3

0x6abb,	// (0x00058f71) form2_midp_field_pane_g4

0x0003,

0xfb02,	// (0x00061fb8) form2_midp_field_pane_g

0x6ac3,	// (0x00058f79) form2_midp_gauge_slider_pane

0x6acb,	// (0x00058f81) form2_midp_gauge_wait_pane

0x6ad3,	// (0x00058f89) form2_midp_image_pane_ParamLimits

0x6ad3,	// (0x00058f89) form2_midp_image_pane

0x6aee,	// (0x00058fa4) form2_midp_label_pane_ParamLimits

0x6aee,	// (0x00058fa4) form2_midp_label_pane

0xd934,	// (0x0005fdea) form2_midp_label_pane_cp_ParamLimits

0xd934,	// (0x0005fdea) form2_midp_label_pane_cp

0x6b2e,	// (0x00058fe4) form2_midp_string_pane_ParamLimits

0x6b2e,	// (0x00058fe4) form2_midp_string_pane

0xbdb1,	// (0x0005e267) form2_midp_text_pane_ParamLimits

0xbdb1,	// (0x0005e267) form2_midp_text_pane

0x6b40,	// (0x00058ff6) form2_midp_time_pane

0x6b50,	// (0x00059006) input_focus_pane_cp51_ParamLimits

0x6b50,	// (0x00059006) input_focus_pane_cp51

0x6b68,	// (0x0005901e) form2_midp_label_pane_t1_ParamLimits

0x6b68,	// (0x0005901e) form2_midp_label_pane_t1

0xbdd4,	// (0x0005e28a) form2_mdip_text_pane_t1_ParamLimits

0xbdd4,	// (0x0005e28a) form2_mdip_text_pane_t1

0x116a,	// (0x00053620) form2_midp_time_pane_t1

0x6bb6,	// (0x0005906c) form2_midp_gauge_slider_pane_t1

0xd955,	// (0x0005fe0b) form2_midp_gauge_slider_pane_t2

0xd967,	// (0x0005fe1d) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb0b,	// (0x00061fc1) form2_midp_gauge_slider_pane_t

0x6bec,	// (0x000590a2) form2_midp_slider_pane

0x6bf8,	// (0x000590ae) form2_midp_gauge_wait_pane_t1

0x6c06,	// (0x000590bc) form2_midp_wait_pane_ParamLimits

0x6c06,	// (0x000590bc) form2_midp_wait_pane

0xd1c6,	// (0x0005f67c) list_single_2graphic_pane_cp4_ParamLimits

0xd1c6,	// (0x0005f67c) list_single_2graphic_pane_cp4

0xd979,	// (0x0005fe2f) list_single_midp_graphic_pane_cp_ParamLimits

0xd979,	// (0x0005fe2f) list_single_midp_graphic_pane_cp

0xd2ad,	// (0x0005f763) list_highlight_pane_cp20

0x6c55,	// (0x0005910b) list_single_2graphic_pane_g1_cp4

0x6239,	// (0x000586ef) list_single_2graphic_pane_g2_cp4

0x6c5d,	// (0x00059113) list_single_2graphic_pane_t1_cp4

0x2195,	// (0x0005464b) list_highlight_pane_cp21

0x6c6c,	// (0x00059122) list_single_midp_graphic_pane_g4_cp

0x6c7b,	// (0x00059131) list_single_midp_graphic_pane_t1_cp

0xd99a,	// (0x0005fe50) form2_mdip_string_pane_t1_ParamLimits

0xd99a,	// (0x0005fe50) form2_mdip_string_pane_t1

0xd2ad,	// (0x0005f763) bg_wml_button_pane_cp2

0xd2a3,	// (0x0005f759) form2_midp_image_pane_g1

0x2a4e,	// (0x00054f04) list_double_large_graphic_pane_g5_ParamLimits

0x2a4e,	// (0x00054f04) list_double_large_graphic_pane_g5

0xc547,	// (0x0005e9fd) midp_form_pane_ParamLimits

0x2195,	// (0x0005464b) main_apps_wheel_pane_ParamLimits

0xcaa5,	// (0x0005ef5b) popup_preview_window_ParamLimits

0xcaa5,	// (0x0005ef5b) popup_preview_window

0x4236,	// (0x000566ec) popup_touch_info_window_ParamLimits

0x4236,	// (0x000566ec) popup_touch_info_window

0x4258,	// (0x0005670e) popup_touch_menu_window_ParamLimits

0x4258,	// (0x0005670e) popup_touch_menu_window

0xd299,	// (0x0005f74f) bg_popup_sub_pane_cp6

0x6d77,	// (0x0005922d) list_touch_menu_pane

0x6d7f,	// (0x00059235) list_single_touch_menu_pane_ParamLimits

0x6d7f,	// (0x00059235) list_single_touch_menu_pane

0x6d9a,	// (0x00059250) list_single_touch_menu_pane_t1

0x2195,	// (0x0005464b) bg_popup_sub_pane_cp7_ParamLimits

0x2195,	// (0x0005464b) bg_popup_sub_pane_cp7

0x6da8,	// (0x0005925e) heading_sub_pane

0x6db0,	// (0x00059266) list_touch_info_pane_ParamLimits

0x6db0,	// (0x00059266) list_touch_info_pane

0x6dbf,	// (0x00059275) list_single_touch_info_pane_ParamLimits

0x6dbf,	// (0x00059275) list_single_touch_info_pane

0x6dd1,	// (0x00059287) list_single_touch_info_pane_t1

0x6ddf,	// (0x00059295) list_single_touch_info_pane_t2

0x0001,

0xfb19,	// (0x00061fcf) list_single_touch_info_pane_t

0x38f4,	// (0x00055daa) bg_popup_heading_pane_cp

0x6ded,	// (0x000592a3) heading_sub_pane_t1

0x48a0,	// (0x00056d56) bg_popup_preview_window_pane_cp_ParamLimits

0x48a0,	// (0x00056d56) bg_popup_preview_window_pane_cp

0x6da8,	// (0x0005925e) heading_preview_pane

0x6db0,	// (0x00059266) list_preview_pane_ParamLimits

0x6db0,	// (0x00059266) list_preview_pane

0x6dfb,	// (0x000592b1) popup_preview_window_g1

0x6dbf,	// (0x00059275) list_single_preview_pane_ParamLimits

0x6dbf,	// (0x00059275) list_single_preview_pane

0x6e03,	// (0x000592b9) list_single_preview_pane_g1

0x6e0b,	// (0x000592c1) list_single_preview_pane_t1

0x6dd1,	// (0x00059287) list_single_preview_pane_t2

0x0001,

0xfb1e,	// (0x00061fd4) list_single_preview_pane_t

0x6e19,	// (0x000592cf) bg_popup_heading_pane_cp2_ParamLimits

0x6e19,	// (0x000592cf) bg_popup_heading_pane_cp2

0x6e2f,	// (0x000592e5) heading_preview_pane_g1

0x6e37,	// (0x000592ed) heading_preview_pane_t1_ParamLimits

0x6e37,	// (0x000592ed) heading_preview_pane_t1

0x2284,	// (0x0005473a) soft_indicator_pane_t1_ParamLimits

0x298f,	// (0x00054e45) scroll_pane_ParamLimits

0x313a,	// (0x000555f0) scroll_sc2_left_pane

0x3143,	// (0x000555f9) scroll_sc2_right_pane

0x3162,	// (0x00055618) scroll_bg_pane_g1_ParamLimits

0x3177,	// (0x0005562d) scroll_bg_pane_g2_ParamLimits

0x318f,	// (0x00055645) scroll_bg_pane_g3_ParamLimits

0xf704,	// (0x00061bba) scroll_bg_pane_g_ParamLimits

0x3162,	// (0x00055618) scroll_handle_pane_g1_ParamLimits

0x31b1,	// (0x00055667) scroll_handle_pane_g2_ParamLimits

0x318f,	// (0x00055645) scroll_handle_pane_g3_ParamLimits

0xf70b,	// (0x00061bc1) scroll_handle_pane_g_ParamLimits

0x3c9a,	// (0x00056150) popup_choice_list_window_ParamLimits

0x3c9a,	// (0x00056150) popup_choice_list_window

0x46f8,	// (0x00056bae) choice_list_pane

0x477a,	// (0x00056c30) cell_toolbar_pane_t1

0x47a2,	// (0x00056c58) toolbar_button_pane_ParamLimits

0x58ad,	// (0x00057d63) ai_gene_pane_1_t2_ParamLimits

0x58ad,	// (0x00057d63) ai_gene_pane_1_t2

0x0001,

0xf923,	// (0x00061dd9) ai_gene_pane_1_t_ParamLimits

0xf923,	// (0x00061dd9) ai_gene_pane_1_t

0x6e54,	// (0x0005930a) scroll_sc2_left_pane_g1

0x6e54,	// (0x0005930a) scroll_sc2_right_pane_g1

0x3c72,	// (0x00056128) bg_popup_sub_pane_cp10

0x6e5e,	// (0x00059314) list_choice_list_pane

0x6e75,	// (0x0005932b) list_single_choice_list_pane_ParamLimits

0x6e75,	// (0x0005932b) list_single_choice_list_pane

0x6e89,	// (0x0005933f) list_single_choice_list_pane_g1

0x6e91,	// (0x00059347) list_single_choice_list_pane_t1_ParamLimits

0x6e91,	// (0x00059347) list_single_choice_list_pane_t1

0x6ea6,	// (0x0005935c) choice_list_pane_g1

0x6eae,	// (0x00059364) choice_list_pane_t1

0xd299,	// (0x0005f74f) input_focus_pane_cp11

0x3014,	// (0x000554ca) title_pane_stacon_g2_ParamLimits

0x3014,	// (0x000554ca) title_pane_stacon_g2

0x0002,

0xf6ea,	// (0x00061ba0) title_pane_stacon_g_ParamLimits

0xf6ea,	// (0x00061ba0) title_pane_stacon_g

0x38f4,	// (0x00055daa) cursor_press_pane

0xc726,	// (0x0005ebdc) popup_fep_hwr_window_ParamLimits

0xc726,	// (0x0005ebdc) popup_fep_hwr_window

0x3dda,	// (0x00056290) popup_fep_vkb_window_ParamLimits

0x3dda,	// (0x00056290) popup_fep_vkb_window

0x6ebc,	// (0x00059372) cursor_press_pane_g1

0x0002,

0xfb47,	// (0x00061ffd) fep_vkb_side_pane_g_ParamLimits

0x11b6,	// (0x0005366c) fep_hwr_candidate_pane_ParamLimits

0x11b6,	// (0x0005366c) fep_hwr_candidate_pane

0x11e0,	// (0x00053696) fep_hwr_side_pane_ParamLimits

0x11e0,	// (0x00053696) fep_hwr_side_pane

0x1202,	// (0x000536b8) fep_hwr_top_pane_ParamLimits

0x1202,	// (0x000536b8) fep_hwr_top_pane

0x121a,	// (0x000536d0) fep_hwr_write_pane_ParamLimits

0x121a,	// (0x000536d0) fep_hwr_write_pane

0xfb47,	// (0x00061ffd) fep_vkb_side_pane_g

0x6ec4,	// (0x0005937a) fep_hwr_top_pane_g1

0x6ed6,	// (0x0005938c) fep_hwr_top_pane_g2

0x1254,	// (0x0005370a) fep_hwr_top_pane_g3

0x0002,

0xfb23,	// (0x00061fd9) fep_hwr_top_pane_g

0x1269,	// (0x0005371f) fep_hwr_top_text_pane

0x3306,	// (0x000557bc) fep_hwr_top_text_pane_g1

0x6f0c,	// (0x000593c2) fep_hwr_top_text_pane_t1

0x1373,	// (0x00053829) fep_hwr_candidate_pane_g1

0x7157,	// (0x0005960d) fep_vkb_keypad_pane_g3_ParamLimits

0x7157,	// (0x0005960d) fep_vkb_keypad_pane_g3

0x7183,	// (0x00059639) fep_vkb_keypad_pane_g4_ParamLimits

0x7183,	// (0x00059639) fep_vkb_keypad_pane_g4

0x71fa,	// (0x000596b0) fep_vkb_bottom_pane_g2_ParamLimits

0x71fa,	// (0x000596b0) fep_vkb_bottom_pane_g2

0x0001,

0xfb4e,	// (0x00062004) fep_vkb_bottom_pane_g_ParamLimits

0xfb4e,	// (0x00062004) fep_vkb_bottom_pane_g

0x6e54,	// (0x0005930a) cell_vkb_side_pane_g2

0x0001,

0xfb58,	// (0x0006200e) cell_vkb_side_pane_g

0x7285,	// (0x0005973b) cell_vkb_side_pane_t1

0x7293,	// (0x00059749) cell_vkb_side_pane_t1_copy1

0x6e54,	// (0x0005930a) bg_fep_vkb_candidate_pane_g2

0x73d7,	// (0x0005988d) cell_vkb_candidate_pane_ParamLimits

0x6f1a,	// (0x000593d0) aid_size_cell_vkb_ParamLimits

0x6f1a,	// (0x000593d0) aid_size_cell_vkb

0x73d7,	// (0x0005988d) cell_vkb_candidate_pane

0x139a,	// (0x00053850) bg_popup_fep_shadow_pane_g1

0xda36,	// (0x0005feec) fep_vkb_bottom_pane_ParamLimits

0xda36,	// (0x0005feec) fep_vkb_bottom_pane

0x6fe9,	// (0x0005949f) fep_vkb_candidate_pane_ParamLimits

0x6fe9,	// (0x0005949f) fep_vkb_candidate_pane

0xda62,	// (0x0005ff18) fep_vkb_keypad_pane_ParamLimits

0xda62,	// (0x0005ff18) fep_vkb_keypad_pane

0xda89,	// (0x0005ff3f) fep_vkb_side_pane_ParamLimits

0xda89,	// (0x0005ff3f) fep_vkb_side_pane

0xdac5,	// (0x0005ff7b) fep_vkb_top_pane_ParamLimits

0xdac5,	// (0x0005ff7b) fep_vkb_top_pane

0x70b0,	// (0x00059566) fep_vkb_top_pane_g1_ParamLimits

0x70b0,	// (0x00059566) fep_vkb_top_pane_g1

0x70bf,	// (0x00059575) fep_vkb_top_pane_g2_ParamLimits

0x70bf,	// (0x00059575) fep_vkb_top_pane_g2

0x70ce,	// (0x00059584) fep_vkb_top_pane_g3_ParamLimits

0x70ce,	// (0x00059584) fep_vkb_top_pane_g3

0x0003,

0xfb3e,	// (0x00061ff4) fep_vkb_top_pane_g_ParamLimits

0xfb3e,	// (0x00061ff4) fep_vkb_top_pane_g

0x70ec,	// (0x000595a2) fep_vkb_top_text_pane_ParamLimits

0x70ec,	// (0x000595a2) fep_vkb_top_text_pane

0xdb01,	// (0x0005ffb7) fep_vkb_side_pane_g1_ParamLimits

0xdb01,	// (0x0005ffb7) fep_vkb_side_pane_g1

0x7146,	// (0x000595fc) grid_vkb_side_pane_ParamLimits

0x7146,	// (0x000595fc) grid_vkb_side_pane

0x13a2,	// (0x00053858) bg_popup_fep_shadow_pane_g2

0x13ab,	// (0x00053861) bg_popup_fep_shadow_pane_g3

0x13b3,	// (0x00053869) bg_popup_fep_shadow_pane_g4

0x13bc,	// (0x00053872) bg_popup_fep_shadow_pane_g5

0x13c6,	// (0x0005387c) bg_popup_fep_shadow_pane_g6

0x13ce,	// (0x00053884) bg_popup_fep_shadow_pane_g7

0x2b47,	// (0x00054ffd) bg_popup_fep_shadow_pane_g8

0x71a5,	// (0x0005965b) grid_vkb_keypad_number_pane_ParamLimits

0x71a5,	// (0x0005965b) grid_vkb_keypad_number_pane

0x71b9,	// (0x0005966f) grid_vkb_keypad_pane_ParamLimits

0x71b9,	// (0x0005966f) grid_vkb_keypad_pane

0x71df,	// (0x00059695) fep_vkb_bottom_pane_g1_ParamLimits

0x71df,	// (0x00059695) fep_vkb_bottom_pane_g1

0x7208,	// (0x000596be) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x7208,	// (0x000596be) grid_vkb_keypad_bottom_left_pane

0x721d,	// (0x000596d3) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x721d,	// (0x000596d3) grid_vkb_keypad_bottom_right_pane

0x7232,	// (0x000596e8) fep_vkb_top_text_pane_g1

0xdb48,	// (0x0005fffe) fep_vkb_top_text_pane_t1

0xdb5a,	// (0x00060010) cell_vkb_side_pane_ParamLimits

0xdb5a,	// (0x00060010) cell_vkb_side_pane

0x6e54,	// (0x0005930a) cell_vkb_side_pane_g1

0x72a1,	// (0x00059757) cell_vkb_keypad_pane_ParamLimits

0x72a1,	// (0x00059757) cell_vkb_keypad_pane

0x732e,	// (0x000597e4) cell_vkb_keypad_pane_g1

0x0008,

0xfb6b,	// (0x00062021) bg_popup_fep_shadow_pane_g

0x13e0,	// (0x00053896) cell_hwr_side_pane_g1

0x13e0,	// (0x00053896) cell_hwr_side_pane_g2

0x7338,	// (0x000597ee) cell_vkb_keypad_pane_t1

0xdb70,	// (0x00060026) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xdb70,	// (0x00060026) cell_vkb_keypad_bottom_left_pane

0xdb85,	// (0x0006003b) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xdb85,	// (0x0006003b) cell_vkb_keypad_bottom_right_pane

0x6e54,	// (0x0005930a) cell_vkb_keypad_bottom_left_pane_g1

0x6e54,	// (0x0005930a) cell_vkb_keypad_bottom_right_pane_g1

0x739c,	// (0x00059852) cell_vkb_keypad_number_pane_ParamLimits

0x739c,	// (0x00059852) cell_vkb_keypad_number_pane

0x73bb,	// (0x00059871) cell_vkb_keypad_number_pane_g1

0x73c5,	// (0x0005987b) cell_vkb_keypad_number_pane_g2

0x73ce,	// (0x00059884) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb5d,	// (0x00062013) cell_vkb_keypad_number_pane_g

0x7338,	// (0x000597ee) cell_vkb_keypad_number_pane_t1

0x73f8,	// (0x000598ae) fep_vkb_candidate_pane_g1

0x0001,

0xfb7e,	// (0x00062034) cell_hwr_side_pane_g

0x7411,	// (0x000598c7) cell_hwr_side_pane_t1

0x13ea,	// (0x000538a0) cell_hwr_side_pane_t1_copy1

0x13f8,	// (0x000538ae) cell_hwr_candidate_pane_g1

0x1427,	// (0x000538dd) cell_hwr_candidate_pane_t1

0x6e54,	// (0x0005930a) cell_vkb_candidate_pane_g2

0x7455,	// (0x0005990b) cell_vkb_candidate_pane_t1

0x117d,	// (0x00053633) bg_popup_fep_shadow_pane_ParamLimits

0x117d,	// (0x00053633) bg_popup_fep_shadow_pane

0x1234,	// (0x000536ea) bg_fep_hwr_top_pane_g4

0x6ee8,	// (0x0005939e) bg_hwr_side_pane_g1_ParamLimits

0x6ee8,	// (0x0005939e) bg_hwr_side_pane_g1

0xbe08,	// (0x0005e2be) cell_hwr_side_pane_ParamLimits

0xbe08,	// (0x0005e2be) cell_hwr_side_pane

0x12e4,	// (0x0005379a) fep_hwr_write_pane_g1_ParamLimits

0x12e4,	// (0x0005379a) fep_hwr_write_pane_g1

0x12f1,	// (0x000537a7) fep_hwr_write_pane_g2_ParamLimits

0x12f1,	// (0x000537a7) fep_hwr_write_pane_g2

0x12fe,	// (0x000537b4) fep_hwr_write_pane_g3_ParamLimits

0x12fe,	// (0x000537b4) fep_hwr_write_pane_g3

0xbe28,	// (0x0005e2de) fep_hwr_write_pane_g4_ParamLimits

0xbe28,	// (0x0005e2de) fep_hwr_write_pane_g4

0x0005,

0xfb2a,	// (0x00061fe0) fep_hwr_write_pane_g_ParamLimits

0xfb2a,	// (0x00061fe0) fep_hwr_write_pane_g

0x1234,	// (0x000536ea) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x1234,	// (0x000536ea) bg_fep_hwr_candidate_pane_g2

0x1321,	// (0x000537d7) cell_hwr_candidate_pane_ParamLimits

0x1321,	// (0x000537d7) cell_hwr_candidate_pane

0x1373,	// (0x00053829) fep_hwr_candidate_pane_g1_ParamLimits

0x6f48,	// (0x000593fe) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x6f48,	// (0x000593fe) bg_popup_fep_shadow_pane_cp2

0x70de,	// (0x00059594) fep_vkb_top_pane_g4_ParamLimits

0x70de,	// (0x00059594) fep_vkb_top_pane_g4

0x7124,	// (0x000595da) fep_vkb_side_pane_g2_ParamLimits

0x7124,	// (0x000595da) fep_vkb_side_pane_g2

0xb656,	// (0x0005db0c) list_setting_pane_t4_ParamLimits

0xb656,	// (0x0005db0c) list_setting_pane_t4

0xb6f2,	// (0x0005dba8) list_setting_number_pane_t5_ParamLimits

0xb6f2,	// (0x0005dba8) list_setting_number_pane_t5

0x3338,	// (0x000557ee) list_double_heading_pane_cp2_ParamLimits

0x3338,	// (0x000557ee) list_double_heading_pane_cp2

0x2ae2,	// (0x00054f98) list_double_heading_pane_g1_cp2_ParamLimits

0x2ae2,	// (0x00054f98) list_double_heading_pane_g1_cp2

0x2aee,	// (0x00054fa4) list_double_heading_pane_g2_cp2_ParamLimits

0x2aee,	// (0x00054fa4) list_double_heading_pane_g2_cp2

0x7463,	// (0x00059919) list_double_heading_pane_t1_cp2_ParamLimits

0x7463,	// (0x00059919) list_double_heading_pane_t1_cp2

0x7479,	// (0x0005992f) list_double_heading_pane_t2_cp2_ParamLimits

0x7479,	// (0x0005992f) list_double_heading_pane_t2_cp2

0xd291,	// (0x0005f747) aid_value_unit2

0xf22f,	// (0x000616e5) popup_preview_fixed_window

0x241f,	// (0x000548d5) bg_popup_preview_window_pane_cp02

0x748b,	// (0x00059941) list_preview_fixed_pane

0x74d1,	// (0x00059987) list_empty_pane_fp_ParamLimits

0x74d1,	// (0x00059987) list_empty_pane_fp

0x74d1,	// (0x00059987) list_single_cale_day_pane_fp_ParamLimits

0x74d1,	// (0x00059987) list_single_cale_day_pane_fp

0x74d1,	// (0x00059987) list_single_graphic_heading_pane_fp_ParamLimits

0x74d1,	// (0x00059987) list_single_graphic_heading_pane_fp

0x74d1,	// (0x00059987) list_single_graphic_pane_fp_ParamLimits

0x74d1,	// (0x00059987) list_single_graphic_pane_fp

0x74d1,	// (0x00059987) list_single_heading_pane_fp_ParamLimits

0x74d1,	// (0x00059987) list_single_heading_pane_fp

0x74d1,	// (0x00059987) list_single_pane_fp_ParamLimits

0x74d1,	// (0x00059987) list_single_pane_fp

0x74ea,	// (0x000599a0) list_single_pane_fp_g1_ParamLimits

0x74ea,	// (0x000599a0) list_single_pane_fp_g1

0x2a42,	// (0x00054ef8) list_single_pane_fp_g2_ParamLimits

0x2a42,	// (0x00054ef8) list_single_pane_fp_g2

0x2ea4,	// (0x0005535a) list_single_pane_fp_g3_ParamLimits

0x2ea4,	// (0x0005535a) list_single_pane_fp_g3

0x74f6,	// (0x000599ac) list_single_pane_fp_g4_ParamLimits

0x74f6,	// (0x000599ac) list_single_pane_fp_g4

0x0003,

0xfb91,	// (0x00062047) list_single_pane_fp_g_ParamLimits

0xfb91,	// (0x00062047) list_single_pane_fp_g

0x1445,	// (0x000538fb) list_single_pane_fp_t1_ParamLimits

0x1445,	// (0x000538fb) list_single_pane_fp_t1

0x145c,	// (0x00053912) list_single_graphic_pane_fp_g1_ParamLimits

0x145c,	// (0x00053912) list_single_graphic_pane_fp_g1

0x74ea,	// (0x000599a0) list_single_graphic_pane_fp_g2_ParamLimits

0x74ea,	// (0x000599a0) list_single_graphic_pane_fp_g2

0x2a42,	// (0x00054ef8) list_single_graphic_pane_fp_g3_ParamLimits

0x2a42,	// (0x00054ef8) list_single_graphic_pane_fp_g3

0x2ea4,	// (0x0005535a) list_single_graphic_pane_fp_g4_ParamLimits

0x2ea4,	// (0x0005535a) list_single_graphic_pane_fp_g4

0x74f6,	// (0x000599ac) list_single_graphic_pane_fp_g5_ParamLimits

0x74f6,	// (0x000599ac) list_single_graphic_pane_fp_g5

0x0004,

0xfb9a,	// (0x00062050) list_single_graphic_pane_fp_g_ParamLimits

0xfb9a,	// (0x00062050) list_single_graphic_pane_fp_g

0x1468,	// (0x0005391e) list_single_graphic_pane_fp_t1_ParamLimits

0x1468,	// (0x0005391e) list_single_graphic_pane_fp_t1

0x145c,	// (0x00053912) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x145c,	// (0x00053912) list_single_graphic_heading_pane_fp_g1

0x74ea,	// (0x000599a0) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x74ea,	// (0x000599a0) list_single_graphic_heading_pane_fp_g2

0x2a42,	// (0x00054ef8) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x2a42,	// (0x00054ef8) list_single_graphic_heading_pane_fp_g3

0x2ea4,	// (0x0005535a) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x2ea4,	// (0x0005535a) list_single_graphic_heading_pane_fp_g4

0x74f6,	// (0x000599ac) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x74f6,	// (0x000599ac) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb9a,	// (0x00062050) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb9a,	// (0x00062050) list_single_graphic_heading_pane_fp_g

0x147e,	// (0x00053934) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x147e,	// (0x00053934) list_single_graphic_heading_pane_fp_t1

0x1494,	// (0x0005394a) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x1494,	// (0x0005394a) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfba5,	// (0x0006205b) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfba5,	// (0x0006205b) list_single_graphic_heading_pane_fp_t

0x14a6,	// (0x0005395c) list_single_cale_day_pane_fp_g1_ParamLimits

0x14a6,	// (0x0005395c) list_single_cale_day_pane_fp_g1

0x7502,	// (0x000599b8) list_single_cale_day_pane_fp_g2_ParamLimits

0x7502,	// (0x000599b8) list_single_cale_day_pane_fp_g2

0x2eb8,	// (0x0005536e) list_single_cale_day_pane_fp_g3_ParamLimits

0x2eb8,	// (0x0005536e) list_single_cale_day_pane_fp_g3

0x2ee0,	// (0x00055396) list_single_cale_day_pane_fp_g4_ParamLimits

0x2ee0,	// (0x00055396) list_single_cale_day_pane_fp_g4

0x2f04,	// (0x000553ba) list_single_cale_day_pane_fp_g5_ParamLimits

0x2f04,	// (0x000553ba) list_single_cale_day_pane_fp_g5

0x0004,

0xfbaa,	// (0x00062060) list_single_cale_day_pane_fp_g_ParamLimits

0xfbaa,	// (0x00062060) list_single_cale_day_pane_fp_g

0x14de,	// (0x00053994) list_single_cale_day_pane_fp_t1_ParamLimits

0x14de,	// (0x00053994) list_single_cale_day_pane_fp_t1

0x1504,	// (0x000539ba) list_single_cale_day_pane_fp_t2_ParamLimits

0x1504,	// (0x000539ba) list_single_cale_day_pane_fp_t2

0x151d,	// (0x000539d3) list_single_cale_day_pane_fp_t3_ParamLimits

0x151d,	// (0x000539d3) list_single_cale_day_pane_fp_t3

0x0002,

0xfbb5,	// (0x0006206b) list_single_cale_day_pane_fp_t_ParamLimits

0xfbb5,	// (0x0006206b) list_single_cale_day_pane_fp_t

0x74ea,	// (0x000599a0) list_empty_pane_fp_g1_ParamLimits

0x74ea,	// (0x000599a0) list_empty_pane_fp_g1

0x1536,	// (0x000539ec) list_empty_pane_fp_t1

0x1544,	// (0x000539fa) list_empty_pane_fp_t2

0x0001,

0xfbbc,	// (0x00062072) list_empty_pane_fp_t

0x74ea,	// (0x000599a0) list_single_heading_pane_fp_g1_ParamLimits

0x74ea,	// (0x000599a0) list_single_heading_pane_fp_g1

0x2a42,	// (0x00054ef8) list_single_heading_pane_fp_g2_ParamLimits

0x2a42,	// (0x00054ef8) list_single_heading_pane_fp_g2

0x2ea4,	// (0x0005535a) list_single_heading_pane_fp_g3_ParamLimits

0x2ea4,	// (0x0005535a) list_single_heading_pane_fp_g3

0x0002,

0xfbc1,	// (0x00062077) list_single_heading_pane_fp_g_ParamLimits

0xfbc1,	// (0x00062077) list_single_heading_pane_fp_g

0x1552,	// (0x00053a08) list_single_heading_pane_fp_t1_ParamLimits

0x1552,	// (0x00053a08) list_single_heading_pane_fp_t1

0x1564,	// (0x00053a1a) list_single_heading_pane_fp_t2_ParamLimits

0x1564,	// (0x00053a1a) list_single_heading_pane_fp_t2

0x0001,

0xfbc8,	// (0x0006207e) list_single_heading_pane_fp_t_ParamLimits

0xfbc8,	// (0x0006207e) list_single_heading_pane_fp_t

0x2ce6,	// (0x0005519c) aid_size_cell_fast

0x2391,	// (0x00054847) soft_indicator_pane_cp1_t1

0x2d23,	// (0x000551d9) cell_app_pane_cp2_ParamLimits

0x2d23,	// (0x000551d9) cell_app_pane_cp2

0x119f,	// (0x00053655) fep_hwr_candidate_drop_down_list_pane

0x138d,	// (0x00053843) fep_hwr_candidate_pane_g3_ParamLimits

0x138d,	// (0x00053843) fep_hwr_candidate_pane_g3

0xe17f,	// (0x00060635) fep_hwr_candidate_pane_g4_ParamLimits

0xe17f,	// (0x00060635) fep_hwr_candidate_pane_g4

0x0002,

0xfb37,	// (0x00061fed) fep_hwr_candidate_pane_g_ParamLimits

0xfb37,	// (0x00061fed) fep_hwr_candidate_pane_g

0x6fd8,	// (0x0005948e) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x6fd8,	// (0x0005948e) fep_vkb_candidate_drop_down_list_pane

0x7400,	// (0x000598b6) fep_vkb_candidate_pane_g3

0x7408,	// (0x000598be) fep_vkb_candidate_pane_g4

0x0002,

0xfb64,	// (0x0006201a) fep_vkb_candidate_pane_g

0x13f8,	// (0x000538ae) cell_hwr_candidate_pane_g1_ParamLimits

0x1406,	// (0x000538bc) cell_hwr_candidate_pane_g3_ParamLimits

0x1406,	// (0x000538bc) cell_hwr_candidate_pane_g3

0x7c6f,	// (0x0005a125) cell_hwr_candidate_pane_g4_ParamLimits

0x7c6f,	// (0x0005a125) cell_hwr_candidate_pane_g4

0x0002,

0xfb83,	// (0x00062039) cell_hwr_candidate_pane_g_ParamLimits

0xfb83,	// (0x00062039) cell_hwr_candidate_pane_g

0x741f,	// (0x000598d5) cell_vkb_candidate_pane_g3_ParamLimits

0x741f,	// (0x000598d5) cell_vkb_candidate_pane_g3

0x743a,	// (0x000598f0) cell_vkb_candidate_pane_g4_ParamLimits

0x743a,	// (0x000598f0) cell_vkb_candidate_pane_g4

0x750e,	// (0x000599c4) cell_app_pane_cp2_g1_ParamLimits

0x750e,	// (0x000599c4) cell_app_pane_cp2_g1

0x752c,	// (0x000599e2) cell_app_pane_cp2_g2_ParamLimits

0x752c,	// (0x000599e2) cell_app_pane_cp2_g2

0x0001,

0xfbcd,	// (0x00062083) cell_app_pane_cp2_g_ParamLimits

0xfbcd,	// (0x00062083) cell_app_pane_cp2_g

0x7538,	// (0x000599ee) cell_app_pane_cp2_t1_ParamLimits

0x7538,	// (0x000599ee) cell_app_pane_cp2_t1

0x2ac8,	// (0x00054f7e) grid_highlight_pane_cp1_ParamLimits

0x2ac8,	// (0x00054f7e) grid_highlight_pane_cp1

0x157a,	// (0x00053a30) cell_hwr_candidate_pane_cp1_ParamLimits

0x157a,	// (0x00053a30) cell_hwr_candidate_pane_cp1

0x13f8,	// (0x000538ae) fep_hwr_candidate_drop_down_list_pane_g1

0x159e,	// (0x00053a54) fep_hwr_candidate_drop_down_list_pane_g2

0x15ab,	// (0x00053a61) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbd2,	// (0x00062088) fep_hwr_candidate_drop_down_list_pane_g

0x15b8,	// (0x00053a6e) fep_hwr_candidate_drop_down_list_scroll_pane

0x15c1,	// (0x00053a77) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x15c1,	// (0x00053a77) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x15ce,	// (0x00053a84) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x15ce,	// (0x00053a84) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x15db,	// (0x00053a91) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x15db,	// (0x00053a91) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x15e8,	// (0x00053a9e) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x15e8,	// (0x00053a9e) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x1603,	// (0x00053ab9) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x1603,	// (0x00053ab9) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x161e,	// (0x00053ad4) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x161e,	// (0x00053ad4) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x1639,	// (0x00053aef) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x1639,	// (0x00053aef) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x1654,	// (0x00053b0a) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x1654,	// (0x00053b0a) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd9,	// (0x0006208f) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd9,	// (0x0006208f) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x754a,	// (0x00059a00) cell_vkb_candidate_pane_cp1_ParamLimits

0x754a,	// (0x00059a00) cell_vkb_candidate_pane_cp1

0x70de,	// (0x00059594) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x70de,	// (0x00059594) fep_vkb_candidate_drop_down_list_pane_g1

0x7570,	// (0x00059a26) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x7570,	// (0x00059a26) fep_vkb_candidate_drop_down_list_pane_g2

0x757d,	// (0x00059a33) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x757d,	// (0x00059a33) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbea,	// (0x000620a0) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbea,	// (0x000620a0) fep_vkb_candidate_drop_down_list_pane_g

0x758a,	// (0x00059a40) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x758a,	// (0x00059a40) fep_vkb_candidate_drop_down_list_scroll_pane

0x7597,	// (0x00059a4d) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7597,	// (0x00059a4d) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x75a4,	// (0x00059a5a) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x75a4,	// (0x00059a5a) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x75b0,	// (0x00059a66) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x75b0,	// (0x00059a66) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x75bc,	// (0x00059a72) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x75bc,	// (0x00059a72) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x75dd,	// (0x00059a93) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x75dd,	// (0x00059a93) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x75fe,	// (0x00059ab4) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x75fe,	// (0x00059ab4) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x761f,	// (0x00059ad5) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x761f,	// (0x00059ad5) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x7640,	// (0x00059af6) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7640,	// (0x00059af6) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbf1,	// (0x000620a7) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbf1,	// (0x000620a7) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xaede,	// (0x0005d394) title_pane_g1_ParamLimits

0xaeef,	// (0x0005d3a5) title_pane_g2_ParamLimits

0xf56a,	// (0x00061a20) title_pane_g_ParamLimits

0x32f6,	// (0x000557ac) aid_call2_pane

0x32fe,	// (0x000557b4) aid_call_pane

0x3306,	// (0x000557bc) popup_clock_analogue_window_g1

0x3306,	// (0x000557bc) popup_clock_analogue_window_g2

0x0541,	// (0x000529f7) popup_clock_analogue_window_g3

0x054a,	// (0x00052a00) popup_clock_analogue_window_g4

0xd2a3,	// (0x0005f759) popup_clock_analogue_window_g5

0x0004,

0xf719,	// (0x00061bcf) popup_clock_analogue_window_g

0x0552,	// (0x00052a08) popup_clock_analogue_window_t1

0x0560,	// (0x00052a16) clock_digital_number_pane_ParamLimits

0x0560,	// (0x00052a16) clock_digital_number_pane

0x056c,	// (0x00052a22) clock_digital_number_pane_cp02_ParamLimits

0x056c,	// (0x00052a22) clock_digital_number_pane_cp02

0x0578,	// (0x00052a2e) clock_digital_number_pane_cp03_ParamLimits

0x0578,	// (0x00052a2e) clock_digital_number_pane_cp03

0x0584,	// (0x00052a3a) clock_digital_number_pane_cp04_ParamLimits

0x0584,	// (0x00052a3a) clock_digital_number_pane_cp04

0x0590,	// (0x00052a46) clock_digital_separator_pane_ParamLimits

0x0590,	// (0x00052a46) clock_digital_separator_pane

0x059c,	// (0x00052a52) popup_clock_digital_window_t1_ParamLimits

0x059c,	// (0x00052a52) popup_clock_digital_window_t1

0xd2a3,	// (0x0005f759) clock_digital_number_pane_g1

0xd2a3,	// (0x0005f759) clock_digital_number_pane_g2

0x0001,

0xf724,	// (0x00061bda) clock_digital_number_pane_g

0xd2a3,	// (0x0005f759) clock_digital_separator_pane_g1

0xd2a3,	// (0x0005f759) clock_digital_separator_pane_g2

0x0001,

0xf724,	// (0x00061bda) clock_digital_separator_pane_g

0xcd8d,	// (0x0005f243) aid_fill_nsta_ParamLimits

0xcebe,	// (0x0005f374) indicator_nsta_pane_ParamLimits

0x4585,	// (0x00056a3b) popup_clock_analogue_window

0x4585,	// (0x00056a3b) popup_clock_digital_window

0x2ca7,	// (0x0005515d) grid_indicator_nsta_pane_ParamLimits

0x6838,	// (0x00058cee) clock_nsta_pane_t2

0x0001,

0xfab7,	// (0x00061f6d) clock_nsta_pane_t

0x0505,	// (0x000529bb) aid_size_max_handle

0xb9c7,	// (0x0005de7d) aid_size_min_handle

0x38f4,	// (0x00055daa) editor_scroll_pane

0x765b,	// (0x00059b11) ex_editor_pane

0x2c53,	// (0x00055109) scroll_pane_cp13

0x29bb,	// (0x00054e71) scroll_pane_cp14

0x3330,	// (0x000557e6) scroll_pane_cp36

0xc449,	// (0x0005e8ff) list_single_graphic_hl_pane_cp2_ParamLimits

0xc449,	// (0x0005e8ff) list_single_graphic_hl_pane_cp2

0xd6e3,	// (0x0005fb99) list_single_graphic_hl_pane_ParamLimits

0xd6e3,	// (0x0005fb99) list_single_graphic_hl_pane

0x166f,	// (0x00053b25) aid_size_min_hl_cp1

0x7663,	// (0x00059b19) list_highlight_pane_cp34_ParamLimits

0x7663,	// (0x00059b19) list_highlight_pane_cp34

0x7674,	// (0x00059b2a) list_single_graphic_hl_pane_g1_ParamLimits

0x7674,	// (0x00059b2a) list_single_graphic_hl_pane_g1

0xbe3d,	// (0x0005e2f3) list_single_graphic_hl_pane_g2_ParamLimits

0xbe3d,	// (0x0005e2f3) list_single_graphic_hl_pane_g2

0xbe3d,	// (0x0005e2f3) list_single_graphic_hl_pane_g3_ParamLimits

0xbe3d,	// (0x0005e2f3) list_single_graphic_hl_pane_g3

0x29c3,	// (0x00054e79) list_single_graphic_hl_pane_g4_ParamLimits

0x29c3,	// (0x00054e79) list_single_graphic_hl_pane_g4

0x76b1,	// (0x00059b67) list_single_graphic_hl_pane_g5_ParamLimits

0x76b1,	// (0x00059b67) list_single_graphic_hl_pane_g5

0x0004,

0xfc02,	// (0x000620b8) list_single_graphic_hl_pane_g_ParamLimits

0xfc02,	// (0x000620b8) list_single_graphic_hl_pane_g

0xf2be,	// (0x00061774) list_single_graphic_hl_pane_t1_ParamLimits

0xf2be,	// (0x00061774) list_single_graphic_hl_pane_t1

0x7681,	// (0x00059b37) aid_size_min_hl_cp2

0x768a,	// (0x00059b40) list_highlight_pane_cp34_cp2_ParamLimits

0x768a,	// (0x00059b40) list_highlight_pane_cp34_cp2

0x7674,	// (0x00059b2a) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x7674,	// (0x00059b2a) list_single_graphic_hl_pane_g1_cp2

0x7697,	// (0x00059b4d) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x7697,	// (0x00059b4d) list_single_graphic_hl_pane_g2_cp2

0x76a3,	// (0x00059b59) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x76a3,	// (0x00059b59) list_single_graphic_hl_pane_g3_cp2

0x29c3,	// (0x00054e79) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x29c3,	// (0x00054e79) list_single_graphic_hl_pane_g4_cp2

0x76b1,	// (0x00059b67) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x76b1,	// (0x00059b67) list_single_graphic_hl_pane_g5_cp2

0xba67,	// (0x0005df1d) control_pane_g4_ParamLimits

0xba67,	// (0x0005df1d) control_pane_g4

0x3c72,	// (0x00056128) bg_popup_sub_pane_cp10_ParamLimits

0x6e5e,	// (0x00059314) list_choice_list_pane_ParamLimits

0x6e6d,	// (0x00059323) scroll_pane_cp23

0x241f,	// (0x000548d5) bg_popup_preview_window_pane_cp02_ParamLimits

0x748b,	// (0x00059941) list_preview_fixed_pane_ParamLimits

0x74a1,	// (0x00059957) list_preview_fixed_pane_cp_ParamLimits

0x74a1,	// (0x00059957) list_preview_fixed_pane_cp

0x74ad,	// (0x00059963) popup_preview_fixed_window_g1_ParamLimits

0x74ad,	// (0x00059963) popup_preview_fixed_window_g1

0x74b9,	// (0x0005996f) popup_preview_fixed_window_g2_ParamLimits

0x74b9,	// (0x0005996f) popup_preview_fixed_window_g2

0x0002,

0xfb8a,	// (0x00062040) popup_preview_fixed_window_g_ParamLimits

0xfb8a,	// (0x00062040) popup_preview_fixed_window_g

0x0477,	// (0x0005292d) aid_navi_side_left_pane_ParamLimits

0x048c,	// (0x00052942) aid_navi_side_right_pane_ParamLimits

0x04a4,	// (0x0005295a) navi_icon_pane_stacon_ParamLimits

0x04b8,	// (0x0005296e) navi_navi_pane_stacon_ParamLimits

0x04a4,	// (0x0005295a) navi_text_pane_stacon_ParamLimits

0xd299,	// (0x0005f74f) main_text_info_pane

0x76db,	// (0x00059b91) listscroll_text_info_pane

0x76e3,	// (0x00059b99) list_text_info_pane_ParamLimits

0x76e3,	// (0x00059b99) list_text_info_pane

0x76f2,	// (0x00059ba8) scroll_pane_cp24_ParamLimits

0x76f2,	// (0x00059ba8) scroll_pane_cp24

0xdba0,	// (0x00060056) list_text_info_pane_t1_ParamLimits

0xdba0,	// (0x00060056) list_text_info_pane_t1

0xc68a,	// (0x0005eb40) popup_fast_swap2_window_ParamLimits

0xc68a,	// (0x0005eb40) popup_fast_swap2_window

0x7735,	// (0x00059beb) aid_size_cell_fast2

0xd299,	// (0x0005f74f) bg_popup_window_pane_cp17

0x4c38,	// (0x000570ee) heading_pane_cp2

0x267f,	// (0x00054b35) listscroll_fast2_pane

0x773f,	// (0x00059bf5) grid_fast2_pane

0x7749,	// (0x00059bff) listscroll_fast2_pane_g1

0x7753,	// (0x00059c09) listscroll_fast2_pane_g2

0x0001,

0xfc0d,	// (0x000620c3) listscroll_fast2_pane_g

0x2c53,	// (0x00055109) scroll_pane_cp26

0x775d,	// (0x00059c13) cell_fast2_pane_ParamLimits

0x775d,	// (0x00059c13) cell_fast2_pane

0x7774,	// (0x00059c2a) cell_fast2_pane_g1

0x777d,	// (0x00059c33) cell_fast2_pane_g2

0x7786,	// (0x00059c3c) cell_fast2_pane_g3

0x0002,

0xfc12,	// (0x000620c8) cell_fast2_pane_g

0x2778,	// (0x00054c2e) grid_highlight_pane_cp9

0x278d,	// (0x00054c43) main_eswt_pane_ParamLimits

0x278d,	// (0x00054c43) main_eswt_pane

0x7707,	// (0x00059bbd) list_single_text_info_pane

0x778e,	// (0x00059c44) eswt_ctrl_button_pane

0x778e,	// (0x00059c44) eswt_ctrl_canvas_pane

0x7796,	// (0x00059c4c) eswt_ctrl_combo_pane

0x778e,	// (0x00059c44) eswt_ctrl_default_pane

0x778e,	// (0x00059c44) eswt_ctrl_label_pane

0x779e,	// (0x00059c54) eswt_ctrl_wait_pane

0x77a6,	// (0x00059c5c) eswt_shell_pane

0xd299,	// (0x0005f74f) listscroll_eswt_app_pane

0x77c6,	// (0x00059c7c) popup_eswt_tasktip_window_ParamLimits

0x77c6,	// (0x00059c7c) popup_eswt_tasktip_window

0x48a0,	// (0x00056d56) bg_popup_window_pane_cp18

0x77d7,	// (0x00059c8d) eswt_control_pane_g1_ParamLimits

0x77d7,	// (0x00059c8d) eswt_control_pane_g1

0x77e4,	// (0x00059c9a) eswt_control_pane_g2_ParamLimits

0x77e4,	// (0x00059c9a) eswt_control_pane_g2

0x77f1,	// (0x00059ca7) eswt_control_pane_g3_ParamLimits

0x77f1,	// (0x00059ca7) eswt_control_pane_g3

0x77fe,	// (0x00059cb4) eswt_control_pane_g4_ParamLimits

0x77fe,	// (0x00059cb4) eswt_control_pane_g4

0x0003,

0xfc19,	// (0x000620cf) eswt_control_pane_g_ParamLimits

0xfc19,	// (0x000620cf) eswt_control_pane_g

0x2ac8,	// (0x00054f7e) bg_button_pane_ParamLimits

0x2ac8,	// (0x00054f7e) bg_button_pane

0x278d,	// (0x00054c43) common_borders_pane_copy2_ParamLimits

0x278d,	// (0x00054c43) common_borders_pane_copy2

0x780b,	// (0x00059cc1) control_button_pane_g1_ParamLimits

0x780b,	// (0x00059cc1) control_button_pane_g1

0x7817,	// (0x00059ccd) control_button_pane_g2_ParamLimits

0x7817,	// (0x00059ccd) control_button_pane_g2

0x7823,	// (0x00059cd9) control_button_pane_g3_ParamLimits

0x7823,	// (0x00059cd9) control_button_pane_g3

0x0002,

0xfc22,	// (0x000620d8) control_button_pane_g_ParamLimits

0xfc22,	// (0x000620d8) control_button_pane_g

0x7837,	// (0x00059ced) control_button_pane_t1

0x7845,	// (0x00059cfb) control_button_pane_t2

0x0001,

0xfc29,	// (0x000620df) control_button_pane_t

0x47ae,	// (0x00056c64) bg_button_pane_g1

0x47be,	// (0x00056c74) bg_button_pane_g2

0x47b6,	// (0x00056c6c) bg_button_pane_g3

0x47ce,	// (0x00056c84) bg_button_pane_g4

0x47c6,	// (0x00056c7c) bg_button_pane_g5

0x47d6,	// (0x00056c8c) bg_button_pane_g6

0x47de,	// (0x00056c94) bg_button_pane_g7

0x47ee,	// (0x00056ca4) bg_button_pane_g8

0x47e6,	// (0x00056c9c) bg_button_pane_g9

0x0008,

0xf877,	// (0x00061d2d) bg_button_pane_g

0x6e19,	// (0x000592cf) common_borders_pane_ParamLimits

0x6e19,	// (0x000592cf) common_borders_pane

0x77d7,	// (0x00059c8d) eswt_control_pane_g1_copy1_ParamLimits

0x77d7,	// (0x00059c8d) eswt_control_pane_g1_copy1

0x77e4,	// (0x00059c9a) eswt_control_pane_g2_copy1_ParamLimits

0x77e4,	// (0x00059c9a) eswt_control_pane_g2_copy1

0x77f1,	// (0x00059ca7) eswt_control_pane_g3_copy1_ParamLimits

0x77f1,	// (0x00059ca7) eswt_control_pane_g3_copy1

0x77fe,	// (0x00059cb4) eswt_control_pane_g4_copy1_ParamLimits

0x77fe,	// (0x00059cb4) eswt_control_pane_g4_copy1

0x6e54,	// (0x0005930a) bg_eswt_ctrl_canvas_pane_g1

0x6e19,	// (0x000592cf) common_borders_pane_cp2_ParamLimits

0x6e19,	// (0x000592cf) common_borders_pane_cp2

0x6e19,	// (0x000592cf) common_borders_pane_cp3_ParamLimits

0x6e19,	// (0x000592cf) common_borders_pane_cp3

0x7853,	// (0x00059d09) separator_horizontal_pane

0x785b,	// (0x00059d11) separator_vertical_pane

0x77d7,	// (0x00059c8d) eswt_control_pane_g1_copy2_ParamLimits

0x77d7,	// (0x00059c8d) eswt_control_pane_g1_copy2

0x77e4,	// (0x00059c9a) eswt_control_pane_g2_copy2_ParamLimits

0x77e4,	// (0x00059c9a) eswt_control_pane_g2_copy2

0x77f1,	// (0x00059ca7) eswt_control_pane_g3_copy2_ParamLimits

0x77f1,	// (0x00059ca7) eswt_control_pane_g3_copy2

0x77fe,	// (0x00059cb4) eswt_control_pane_g4_copy2_ParamLimits

0x77fe,	// (0x00059cb4) eswt_control_pane_g4_copy2

0xd299,	// (0x0005f74f) common_borders_pane_cp4

0x7864,	// (0x00059d1a) separator_horizontal_pane_g1

0x786d,	// (0x00059d23) separator_horizontal_pane_g2

0x7876,	// (0x00059d2c) separator_horizontal_pane_g3

0x0002,

0xfc2e,	// (0x000620e4) separator_horizontal_pane_g

0x77d7,	// (0x00059c8d) eswt_control_pane_g1_copy3_ParamLimits

0x77d7,	// (0x00059c8d) eswt_control_pane_g1_copy3

0x77e4,	// (0x00059c9a) eswt_control_pane_g2_copy3_ParamLimits

0x77e4,	// (0x00059c9a) eswt_control_pane_g2_copy3

0x77f1,	// (0x00059ca7) eswt_control_pane_g3_copy3_ParamLimits

0x77f1,	// (0x00059ca7) eswt_control_pane_g3_copy3

0x77fe,	// (0x00059cb4) eswt_control_pane_g4_copy3_ParamLimits

0x77fe,	// (0x00059cb4) eswt_control_pane_g4_copy3

0xd299,	// (0x0005f74f) common_borders_pane_cp5

0x787f,	// (0x00059d35) separator_vertical_pane_g1

0x7888,	// (0x00059d3e) separator_vertical_pane_g2

0x7891,	// (0x00059d47) separator_vertical_pane_g3

0x0002,

0xfc35,	// (0x000620eb) separator_vertical_pane_g

0x77d7,	// (0x00059c8d) eswt_control_pane_g1_copy4_ParamLimits

0x77d7,	// (0x00059c8d) eswt_control_pane_g1_copy4

0x77e4,	// (0x00059c9a) eswt_control_pane_g2_copy4_ParamLimits

0x77e4,	// (0x00059c9a) eswt_control_pane_g2_copy4

0x77f1,	// (0x00059ca7) eswt_control_pane_g3_copy4_ParamLimits

0x77f1,	// (0x00059ca7) eswt_control_pane_g3_copy4

0x77fe,	// (0x00059cb4) eswt_control_pane_g4_copy4_ParamLimits

0x77fe,	// (0x00059cb4) eswt_control_pane_g4_copy4

0xdbc2,	// (0x00060078) eswt_ctrl_combo_button_pane

0xdbca,	// (0x00060080) eswt_ctrl_input_pane

0xdbd2,	// (0x00060088) popup_choice_list_window_cp70

0xdbda,	// (0x00060090) eswt_ctrl_input_pane_t1

0xd299,	// (0x0005f74f) input_focus_pane_cp70

0x6e19,	// (0x000592cf) bg_button_pane_cp70_ParamLimits

0x6e19,	// (0x000592cf) bg_button_pane_cp70

0xdbe8,	// (0x0006009e) eswt_ctrl_combo_button_pane_g1

0x78c8,	// (0x00059d7e) wait_bar_pane_cp70

0x48a0,	// (0x00056d56) bg_popup_window_pane_cp70_ParamLimits

0x48a0,	// (0x00056d56) bg_popup_window_pane_cp70

0x78d0,	// (0x00059d86) popup_eswt_tasktip_window_t1

0x78e6,	// (0x00059d9c) wait_bar_pane_cp71_ParamLimits

0x78e6,	// (0x00059d9c) wait_bar_pane_cp71

0x78f2,	// (0x00059da8) grid_eswt_app_pane

0x313a,	// (0x000555f0) scroll_pane_cp70

0xdbf0,	// (0x000600a6) cell_eswt_app_pane_ParamLimits

0xdbf0,	// (0x000600a6) cell_eswt_app_pane

0xdc22,	// (0x000600d8) cell_eswt_app_pane_g1_ParamLimits

0xdc22,	// (0x000600d8) cell_eswt_app_pane_g1

0xdc51,	// (0x00060107) cell_eswt_app_pane_g2_ParamLimits

0xdc51,	// (0x00060107) cell_eswt_app_pane_g2

0x0001,

0xfc3c,	// (0x000620f2) cell_eswt_app_pane_g_ParamLimits

0xfc3c,	// (0x000620f2) cell_eswt_app_pane_g

0xdc7a,	// (0x00060130) cell_eswt_app_pane_t1_ParamLimits

0xdc7a,	// (0x00060130) cell_eswt_app_pane_t1

0x79b7,	// (0x00059e6d) grid_highlight_pane_cp70_ParamLimits

0x79b7,	// (0x00059e6d) grid_highlight_pane_cp70

0x5d31,	// (0x000581e7) set_content_pane_g1

0x3ba4,	// (0x0005605a) status_small_volume_pane

0x169a,	// (0x00053b50) status_small_volume_pane_g1

0x16a2,	// (0x00053b58) volume_small2_pane

0x16ab,	// (0x00053b61) volume_small2_pane_g1

0x16b4,	// (0x00053b6a) volume_small2_pane_g2

0x16bd,	// (0x00053b73) volume_small2_pane_g3

0x16c6,	// (0x00053b7c) volume_small2_pane_g4

0x16cf,	// (0x00053b85) volume_small2_pane_g5

0x16d8,	// (0x00053b8e) volume_small2_pane_g6

0x16e1,	// (0x00053b97) volume_small2_pane_g7

0x16ea,	// (0x00053ba0) volume_small2_pane_g8

0x16f3,	// (0x00053ba9) volume_small2_pane_g9

0x16fc,	// (0x00053bb2) volume_small2_pane_g10

0x0009,

0xfc41,	// (0x000620f7) volume_small2_pane_g

0x7232,	// (0x000596e8) fep_vkb_top_text_pane_g1_ParamLimits

0xdb48,	// (0x0005fffe) fep_vkb_top_text_pane_t1_ParamLimits

0x74c5,	// (0x0005997b) popup_preview_fixed_window_g3_ParamLimits

0x74c5,	// (0x0005997b) popup_preview_fixed_window_g3

0xcd20,	// (0x0005f1d6) popup_toolbar_trans_pane

0xd533,	// (0x0005f9e9) aid_height_set_list_ParamLimits

0x5be7,	// (0x0005809d) aid_size_parent_ParamLimits

0x3c72,	// (0x00056128) list_highlight_pane_cp2_ParamLimits

0x5d31,	// (0x000581e7) set_content_pane_g1_ParamLimits

0xd208,	// (0x0005f6be) list_single_image_pane_ParamLimits

0xd208,	// (0x0005f6be) list_single_image_pane

0xdcac,	// (0x00060162) aid_size_cell_image_ParamLimits

0xdcac,	// (0x00060162) aid_size_cell_image

0xdcb9,	// (0x0006016f) grid_single_image_pane_ParamLimits

0xdcb9,	// (0x0006016f) grid_single_image_pane

0x2ae2,	// (0x00054f98) list_single_image_pane_g1_ParamLimits

0x2ae2,	// (0x00054f98) list_single_image_pane_g1

0x2aee,	// (0x00054fa4) list_single_image_pane_g2_ParamLimits

0x2aee,	// (0x00054fa4) list_single_image_pane_g2

0x0001,

0xfc56,	// (0x0006210c) list_single_image_pane_g_ParamLimits

0xfc56,	// (0x0006210c) list_single_image_pane_g

0x79de,	// (0x00059e94) list_single_image_pane_t1_ParamLimits

0x79de,	// (0x00059e94) list_single_image_pane_t1

0xdcc7,	// (0x0006017d) cell_image_list_pane_ParamLimits

0xdcc7,	// (0x0006017d) cell_image_list_pane

0xdce1,	// (0x00060197) cell_image_list_pane_g1

0xdcea,	// (0x000601a0) cell_image_list_pane_g2

0x0001,

0xfc5b,	// (0x00062111) cell_image_list_pane_g

0x7a1c,	// (0x00059ed2) aid_size_cell_tb_trans_pane

0x2ac8,	// (0x00054f7e) bg_tb_trans_pane

0x7a2e,	// (0x00059ee4) grid_tb_trans_pane

0x47ae,	// (0x00056c64) bg_tb_trans_pane_g1

0x47be,	// (0x00056c74) bg_tb_trans_pane_g2

0x47b6,	// (0x00056c6c) bg_tb_trans_pane_g3

0x47ce,	// (0x00056c84) bg_tb_trans_pane_g4

0x47c6,	// (0x00056c7c) bg_tb_trans_pane_g5

0x47ee,	// (0x00056ca4) bg_tb_trans_pane_g6

0x47e6,	// (0x00056c9c) bg_tb_trans_pane_g7

0x47d6,	// (0x00056c8c) bg_tb_trans_pane_g8

0x47de,	// (0x00056c94) bg_tb_trans_pane_g9

0x0008,

0xfc60,	// (0x00062116) bg_tb_trans_pane_g

0x7a42,	// (0x00059ef8) cell_toolbar_trans_pane_ParamLimits

0x7a42,	// (0x00059ef8) cell_toolbar_trans_pane

0x6e54,	// (0x0005930a) cell_toolbar_trans_pane_g1

0xd918,	// (0x0005fdce) list_form2_midp_pane_t1

0xd926,	// (0x0005fddc) list_form2_midp_pane_t2

0x0001,

0xfafd,	// (0x00061fb3) list_form2_midp_pane_t

0x6a4f,	// (0x00058f05) scroll_pane_cp51_ParamLimits

0x6c16,	// (0x000590cc) form2_midp_wait_pane_g1

0x6c1f,	// (0x000590d5) form2_midp_wait_pane_g2

0x6c28,	// (0x000590de) form2_midp_wait_pane_g3

0x0002,

0xfb12,	// (0x00061fc8) form2_midp_wait_pane_g

0x2195,	// (0x0005464b) list_highlight_pane_cp21_ParamLimits

0x6c6c,	// (0x00059122) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x6c7b,	// (0x00059131) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x5ddf,	// (0x00058295) list_single_2graphic_im_pane_ParamLimits

0x5ddf,	// (0x00058295) list_single_2graphic_im_pane

0xdcf3,	// (0x000601a9) list_single_2graphic_im_pane_g1_ParamLimits

0xdcf3,	// (0x000601a9) list_single_2graphic_im_pane_g1

0xdd04,	// (0x000601ba) list_single_2graphic_im_pane_g2_ParamLimits

0xdd04,	// (0x000601ba) list_single_2graphic_im_pane_g2

0xdd10,	// (0x000601c6) list_single_2graphic_im_pane_g3_ParamLimits

0xdd10,	// (0x000601c6) list_single_2graphic_im_pane_g3

0x0003,

0xfc73,	// (0x00062129) list_single_2graphic_im_pane_g_ParamLimits

0xfc73,	// (0x00062129) list_single_2graphic_im_pane_g

0xdd24,	// (0x000601da) list_single_2graphic_im_pane_t1_ParamLimits

0xdd24,	// (0x000601da) list_single_2graphic_im_pane_t1

0x74d1,	// (0x00059987) list_single_graphic_2heading_pane_fp_ParamLimits

0x74d1,	// (0x00059987) list_single_graphic_2heading_pane_fp

0x145c,	// (0x00053912) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x145c,	// (0x00053912) list_single_graphic_2heading_pane_fp_g1

0x74ea,	// (0x000599a0) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x74ea,	// (0x000599a0) list_single_graphic_2heading_pane_fp_g2

0x2a42,	// (0x00054ef8) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x2a42,	// (0x00054ef8) list_single_graphic_2heading_pane_fp_g3

0x2ea4,	// (0x0005535a) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x2ea4,	// (0x0005535a) list_single_graphic_2heading_pane_fp_g4

0x74f6,	// (0x000599ac) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x74f6,	// (0x000599ac) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb9a,	// (0x00062050) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb9a,	// (0x00062050) list_single_graphic_2heading_pane_fp_g

0x1705,	// (0x00053bbb) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x1705,	// (0x00053bbb) list_single_graphic_2heading_pane_fp_t1

0x1494,	// (0x0005394a) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x1494,	// (0x0005394a) list_single_graphic_2heading_pane_fp_t2

0x171b,	// (0x00053bd1) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x171b,	// (0x00053bd1) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc7c,	// (0x00062132) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc7c,	// (0x00062132) list_single_graphic_2heading_pane_fp_t

0x6ef4,	// (0x000593aa) fep_hwr_write_pane_g5_ParamLimits

0x6ef4,	// (0x000593aa) fep_hwr_write_pane_g5

0x6f00,	// (0x000593b6) fep_hwr_write_pane_g6_ParamLimits

0x6f00,	// (0x000593b6) fep_hwr_write_pane_g6

0x77a6,	// (0x00059c5c) eswt_shell_pane_ParamLimits

0x48a0,	// (0x00056d56) bg_popup_window_pane_cp18_ParamLimits

0x5b2d,	// (0x00057fe3) heading_pane_cp70

0x78d0,	// (0x00059d86) popup_eswt_tasktip_window_t1_ParamLimits

0xcde3,	// (0x0005f299) aid_touch_tab_arrow_left

0xcdf9,	// (0x0005f2af) aid_touch_tab_arrow_right

0xaf07,	// (0x0005d3bd) title_pane_g3_ParamLimits

0xaf07,	// (0x0005d3bd) title_pane_g3

0x2a87,	// (0x00054f3d) set_value_pane_g1

0xcd20,	// (0x0005f1d6) popup_toolbar_trans_pane_ParamLimits

0x7a1c,	// (0x00059ed2) aid_size_cell_tb_trans_pane_ParamLimits

0x2ac8,	// (0x00054f7e) bg_tb_trans_pane_ParamLimits

0x7a2e,	// (0x00059ee4) grid_tb_trans_pane_ParamLimits

0x241f,	// (0x000548d5) cont_note_pane_ParamLimits

0x241f,	// (0x000548d5) cont_note_pane

0x278d,	// (0x00054c43) cont_snote2_single_text_pane_ParamLimits

0x278d,	// (0x00054c43) cont_snote2_single_text_pane

0x278d,	// (0x00054c43) cont_snote2_single_graphic_pane_ParamLimits

0x278d,	// (0x00054c43) cont_snote2_single_graphic_pane

0x4e54,	// (0x0005730a) cont_note_wait_pane_ParamLimits

0x4e54,	// (0x0005730a) cont_note_wait_pane

0x4e54,	// (0x0005730a) cont_note_image_pane_ParamLimits

0x4e54,	// (0x0005730a) cont_note_image_pane

0x7ad6,	// (0x00059f8c) popup_note2_window_g1_ParamLimits

0x7ad6,	// (0x00059f8c) popup_note2_window_g1

0x7b07,	// (0x00059fbd) popup_note2_window_t1_ParamLimits

0x7b07,	// (0x00059fbd) popup_note2_window_t1

0x7b4c,	// (0x0005a002) popup_note2_window_t2_ParamLimits

0x7b4c,	// (0x0005a002) popup_note2_window_t2

0x7b91,	// (0x0005a047) popup_note2_window_t3_ParamLimits

0x7b91,	// (0x0005a047) popup_note2_window_t3

0x7bd6,	// (0x0005a08c) popup_note2_window_t4_ParamLimits

0x7bd6,	// (0x0005a08c) popup_note2_window_t4

0x24a3,	// (0x00054959) popup_note2_window_t5_ParamLimits

0x24a3,	// (0x00054959) popup_note2_window_t5

0x0004,

0xfc88,	// (0x0006213e) popup_note2_window_t_ParamLimits

0xfc88,	// (0x0006213e) popup_note2_window_t

0x7c05,	// (0x0005a0bb) popup_note2_image_window_g1_ParamLimits

0x7c05,	// (0x0005a0bb) popup_note2_image_window_g1

0x7c11,	// (0x0005a0c7) popup_note2_image_window_g2_ParamLimits

0x7c11,	// (0x0005a0c7) popup_note2_image_window_g2

0x0001,

0xfc93,	// (0x00062149) popup_note2_image_window_g_ParamLimits

0xfc93,	// (0x00062149) popup_note2_image_window_g

0x7c23,	// (0x0005a0d9) popup_note2_image_window_t1_ParamLimits

0x7c23,	// (0x0005a0d9) popup_note2_image_window_t1

0x7c3b,	// (0x0005a0f1) popup_note2_image_window_t2_ParamLimits

0x7c3b,	// (0x0005a0f1) popup_note2_image_window_t2

0x7c53,	// (0x0005a109) popup_note2_image_window_t3_ParamLimits

0x7c53,	// (0x0005a109) popup_note2_image_window_t3

0x0002,

0xfc98,	// (0x0006214e) popup_note2_image_window_t_ParamLimits

0xfc98,	// (0x0006214e) popup_note2_image_window_t

0x4e62,	// (0x00057318) popup_note2_wait_window_g1_ParamLimits

0x4e62,	// (0x00057318) popup_note2_wait_window_g1

0x7c90,	// (0x0005a146) popup_note2_wait_window_g2_ParamLimits

0x7c90,	// (0x0005a146) popup_note2_wait_window_g2

0x4e7a,	// (0x00057330) popup_note2_wait_window_g3_ParamLimits

0x4e7a,	// (0x00057330) popup_note2_wait_window_g3

0x0002,

0xfc9f,	// (0x00062155) popup_note2_wait_window_g_ParamLimits

0xfc9f,	// (0x00062155) popup_note2_wait_window_g

0x7c9c,	// (0x0005a152) popup_note2_wait_window_t1_ParamLimits

0x7c9c,	// (0x0005a152) popup_note2_wait_window_t1

0x7cba,	// (0x0005a170) popup_note2_wait_window_t2_ParamLimits

0x7cba,	// (0x0005a170) popup_note2_wait_window_t2

0x7cd8,	// (0x0005a18e) popup_note2_wait_window_t3_ParamLimits

0x7cd8,	// (0x0005a18e) popup_note2_wait_window_t3

0x7cea,	// (0x0005a1a0) popup_note2_wait_window_t4_ParamLimits

0x7cea,	// (0x0005a1a0) popup_note2_wait_window_t4

0x0003,

0xfca6,	// (0x0006215c) popup_note2_wait_window_t_ParamLimits

0xfca6,	// (0x0006215c) popup_note2_wait_window_t

0x7cfc,	// (0x0005a1b2) wait_bar2_pane_ParamLimits

0x7cfc,	// (0x0005a1b2) wait_bar2_pane

0x7d14,	// (0x0005a1ca) popup_snote2_single_text_window_g1_ParamLimits

0x7d14,	// (0x0005a1ca) popup_snote2_single_text_window_g1

0x7d3c,	// (0x0005a1f2) popup_snote2_single_text_window_t1_ParamLimits

0x7d3c,	// (0x0005a1f2) popup_snote2_single_text_window_t1

0x7d88,	// (0x0005a23e) popup_snote2_single_text_window_t2_ParamLimits

0x7d88,	// (0x0005a23e) popup_snote2_single_text_window_t2

0x7dd4,	// (0x0005a28a) popup_snote2_single_text_window_t3_ParamLimits

0x7dd4,	// (0x0005a28a) popup_snote2_single_text_window_t3

0x7e15,	// (0x0005a2cb) popup_snote2_single_text_window_t4_ParamLimits

0x7e15,	// (0x0005a2cb) popup_snote2_single_text_window_t4

0x7e4b,	// (0x0005a301) popup_snote2_single_text_window_t5_ParamLimits

0x7e4b,	// (0x0005a301) popup_snote2_single_text_window_t5

0x0004,

0xfcaf,	// (0x00062165) popup_snote2_single_text_window_t_ParamLimits

0xfcaf,	// (0x00062165) popup_snote2_single_text_window_t

0x7e76,	// (0x0005a32c) popup_snote2_single_graphic_window_g1_ParamLimits

0x7e76,	// (0x0005a32c) popup_snote2_single_graphic_window_g1

0x7e9e,	// (0x0005a354) popup_snote2_single_graphic_window_g2_ParamLimits

0x7e9e,	// (0x0005a354) popup_snote2_single_graphic_window_g2

0x0001,

0xfcba,	// (0x00062170) popup_snote2_single_graphic_window_g_ParamLimits

0xfcba,	// (0x00062170) popup_snote2_single_graphic_window_g

0x7ec6,	// (0x0005a37c) popup_snote2_single_graphic_window_t1_ParamLimits

0x7ec6,	// (0x0005a37c) popup_snote2_single_graphic_window_t1

0x7f12,	// (0x0005a3c8) popup_snote2_single_graphic_window_t2_ParamLimits

0x7f12,	// (0x0005a3c8) popup_snote2_single_graphic_window_t2

0x7dd4,	// (0x0005a28a) popup_snote2_single_graphic_window_t3_ParamLimits

0x7dd4,	// (0x0005a28a) popup_snote2_single_graphic_window_t3

0x7e15,	// (0x0005a2cb) popup_snote2_single_graphic_window_t4_ParamLimits

0x7e15,	// (0x0005a2cb) popup_snote2_single_graphic_window_t4

0x7e4b,	// (0x0005a301) popup_snote2_single_graphic_window_t5_ParamLimits

0x7e4b,	// (0x0005a301) popup_snote2_single_graphic_window_t5

0x0004,

0xfcbf,	// (0x00062175) popup_snote2_single_graphic_window_t_ParamLimits

0xfcbf,	// (0x00062175) popup_snote2_single_graphic_window_t

0x68f9,	// (0x00058daf) clock_nsta_pane_cp2_t1

0x68f9,	// (0x00058daf) clock_nsta_pane_cp2_t2

0x0001,

0xfad3,	// (0x00061f89) clock_nsta_pane_cp2_t

0x0217,	// (0x000526cd) form_field_data_wide_pane_g1_ParamLimits

0x2ae2,	// (0x00054f98) form_field_data_wide_pane_g2_ParamLimits

0x2ae2,	// (0x00054f98) form_field_data_wide_pane_g2

0x2aee,	// (0x00054fa4) form_field_data_wide_pane_g3_ParamLimits

0x2aee,	// (0x00054fa4) form_field_data_wide_pane_g3

0x0002,

0xf69c,	// (0x00061b52) form_field_data_wide_pane_g_ParamLimits

0xf69c,	// (0x00061b52) form_field_data_wide_pane_g

0xd820,	// (0x0005fcd6) grid_touch_3_pane_ParamLimits

0xd820,	// (0x0005fcd6) grid_touch_3_pane

0xdd55,	// (0x0006020b) cell_touch_3_pane_ParamLimits

0xdd55,	// (0x0006020b) cell_touch_3_pane

0x6e54,	// (0x0005930a) cell_touch_3_pane_g1

0x6e54,	// (0x0005930a) cell_touch_3_pane_g2

0x0001,

0xfb58,	// (0x0006200e) cell_touch_3_pane_g

0x24d5,	// (0x0005498b) cont_query_data_pane

0x24dd,	// (0x00054993) cont_query_data_pane_cp1

0x7f91,	// (0x0005a447) button_value_adjust_pane_cp7

0x7f99,	// (0x0005a44f) query_popup_pane_cp3

0x33d0,	// (0x00055886) bg_popup_sub_pane_cp22_ParamLimits

0x05bb,	// (0x00052a71) navi_navi_volume_pane_cp2

0x05d6,	// (0x00052a8c) popup_side_volume_key_window_g2

0x05e5,	// (0x00052a9b) popup_side_volume_key_window_g3

0x0002,

0xf72e,	// (0x00061be4) popup_side_volume_key_window_g

0x0602,	// (0x00052ab8) popup_side_volume_key_window_t2

0x0001,

0xf735,	// (0x00061beb) popup_side_volume_key_window_t

0x368b,	// (0x00055b41) popup_side_volume_key_window_ParamLimits

0xb41a,	// (0x0005d8d0) list_double_graphic_pane_g4_ParamLimits

0xb41a,	// (0x0005d8d0) list_double_graphic_pane_g4

0xd1f3,	// (0x0005f6a9) list_single_2heading_msg_pane_ParamLimits

0xd1f3,	// (0x0005f6a9) list_single_2heading_msg_pane

0xd219,	// (0x0005f6cf) list_single_2heading_msg_pane_g1_ParamLimits

0xd219,	// (0x0005f6cf) list_single_2heading_msg_pane_g1

0xd225,	// (0x0005f6db) list_single_2heading_msg_pane_g2_ParamLimits

0xd225,	// (0x0005f6db) list_single_2heading_msg_pane_g2

0xd238,	// (0x0005f6ee) list_single_2heading_msg_pane_g3_ParamLimits

0xd238,	// (0x0005f6ee) list_single_2heading_msg_pane_g3

0xd244,	// (0x0005f6fa) list_single_2heading_msg_pane_g4_ParamLimits

0xd244,	// (0x0005f6fa) list_single_2heading_msg_pane_g4

0x0003,

0xfcca,	// (0x00062180) list_single_2heading_msg_pane_g_ParamLimits

0xfcca,	// (0x00062180) list_single_2heading_msg_pane_g

0xbe49,	// (0x0005e2ff) list_single_2heading_msg_pane_t1_ParamLimits

0xbe49,	// (0x0005e2ff) list_single_2heading_msg_pane_t1

0xbe71,	// (0x0005e327) list_single_2heading_msg_pane_t2_ParamLimits

0xbe71,	// (0x0005e327) list_single_2heading_msg_pane_t2

0xbedc,	// (0x0005e392) list_single_2heading_msg_pane_t3_ParamLimits

0xbedc,	// (0x0005e392) list_single_2heading_msg_pane_t3

0x17cb,	// (0x00053c81) list_single_2heading_msg_pane_t4_ParamLimits

0x17cb,	// (0x00053c81) list_single_2heading_msg_pane_t4

0x0003,

0xfcd3,	// (0x00062189) list_single_2heading_msg_pane_t_ParamLimits

0xfcd3,	// (0x00062189) list_single_2heading_msg_pane_t

0xd2b7,	// (0x0005f76d) title_pane_g4_ParamLimits

0xd2b7,	// (0x0005f76d) title_pane_g4

0x03c7,	// (0x0005287d) title_pane_stacon_g3_ParamLimits

0x03c7,	// (0x0005287d) title_pane_stacon_g3

0x7a99,	// (0x00059f4f) list_single_2graphic_im_pane_g4_ParamLimits

0x7a99,	// (0x00059f4f) list_single_2graphic_im_pane_g4

0x58ca,	// (0x00057d80) popup_side_volume_key_window_cp

0x6140,	// (0x000585f6) main_idle_act2_pane_t1

0x0a35,	// (0x00052eeb) toolbar_button_pane_g10

0xb294,	// (0x0005d74a) popup_toolbar_window_cp1

0x68ea,	// (0x00058da0) clock_nsta_pane_cp_t1

0x68ea,	// (0x00058da0) clock_nsta_pane_cp_t2

0x0001,

0xface,	// (0x00061f84) clock_nsta_pane_cp_t

0x05bb,	// (0x00052a71) navi_navi_volume_pane_cp2_ParamLimits

0x05ca,	// (0x00052a80) popup_side_volume_key_window_g1_ParamLimits

0x05d6,	// (0x00052a8c) popup_side_volume_key_window_g2_ParamLimits

0x05e5,	// (0x00052a9b) popup_side_volume_key_window_g3_ParamLimits

0xf72e,	// (0x00061be4) popup_side_volume_key_window_g_ParamLimits

0x118b,	// (0x00053641) fep_hwr_aid_pane

0x1234,	// (0x000536ea) bg_fep_hwr_top_pane_g4_ParamLimits

0x6ec4,	// (0x0005937a) fep_hwr_top_pane_g1_ParamLimits

0x6ed6,	// (0x0005938c) fep_hwr_top_pane_g2_ParamLimits

0x1254,	// (0x0005370a) fep_hwr_top_pane_g3_ParamLimits

0xfb23,	// (0x00061fd9) fep_hwr_top_pane_g_ParamLimits

0x1269,	// (0x0005371f) fep_hwr_top_text_pane_ParamLimits

0x567f,	// (0x00057b35) aid_touch_tab_arrow_arrow_2

0x5688,	// (0x00057b3e) aid_touch_tab_arrow_left_2

0x119f,	// (0x00053655) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x11d6,	// (0x0005368c) fep_hwr_prediction_pane

0x702c,	// (0x000594e2) fep_vkb_prediction_pane

0xdb28,	// (0x0005ffde) fep_vkb_side_pane_g3_ParamLimits

0xdb28,	// (0x0005ffde) fep_vkb_side_pane_g3

0x13f8,	// (0x000538ae) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x159e,	// (0x00053a54) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x15ab,	// (0x00053a61) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbd2,	// (0x00062088) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x17f0,	// (0x00053ca6) fep_hwr_prediction_pane_g1

0x17fa,	// (0x00053cb0) fep_hwr_prediction_pane_g2

0x1802,	// (0x00053cb8) fep_hwr_prediction_pane_g3

0x180a,	// (0x00053cc0) fep_hwr_prediction_pane_g4

0x0003,

0xfcdc,	// (0x00062192) fep_hwr_prediction_pane_g

0x7fc0,	// (0x0005a476) fep_vkb_prediction_pane_g1

0x7fca,	// (0x0005a480) fep_vkb_prediction_pane_g2

0x7fd2,	// (0x0005a488) fep_vkb_prediction_pane_g3

0x7fda,	// (0x0005a490) fep_vkb_prediction_pane_g4

0x0003,

0xfce5,	// (0x0006219b) fep_vkb_prediction_pane_g

0x0dbe,	// (0x00053274) slider_set_pane_g3

0x0dd2,	// (0x00053288) slider_set_pane_g4

0x0dea,	// (0x000532a0) slider_set_pane_g5

0x0dbe,	// (0x00053274) slider_set_pane_g6

0x0e00,	// (0x000532b6) slider_set_pane_g7

0x5d78,	// (0x0005822e) slider_form_pane_g3

0x5d81,	// (0x00058237) slider_form_pane_g4

0x5d89,	// (0x0005823f) slider_form_pane_g5

0x5d78,	// (0x0005822e) slider_form_pane_g6

0xd6a2,	// (0x0005fb58) slider_form_pane_g7

0x640e,	// (0x000588c4) slider_set_pane_vc_g3

0x6417,	// (0x000588cd) slider_set_pane_vc_g4

0x6420,	// (0x000588d6) slider_set_pane_vc_g5

0x640e,	// (0x000588c4) slider_set_pane_vc_g6

0x6429,	// (0x000588df) slider_set_pane_vc_g7

0x640e,	// (0x000588c4) slider_form_pane_vc_g1

0x6417,	// (0x000588cd) slider_form_pane_vc_g2

0x6420,	// (0x000588d6) slider_form_pane_vc_g3

0x640e,	// (0x000588c4) slider_form_pane_vc_g4

0x65de,	// (0x00058a94) slider_form_pane_vc_g5

0x0004,

0xfaa7,	// (0x00061f5d) slider_form_pane_vc_g

0xd299,	// (0x0005f74f) main_idle_act3_pane

0x7fe2,	// (0x0005a498) ai3_links_pane

0xdd9f,	// (0x00060255) popup_ai3_data_window_ParamLimits

0xdd9f,	// (0x00060255) popup_ai3_data_window

0xd299,	// (0x0005f74f) grid_ai3_links_pane

0xddbd,	// (0x00060273) cell_ai3_links_pane_ParamLimits

0xddbd,	// (0x00060273) cell_ai3_links_pane

0x8023,	// (0x0005a4d9) bg_popup_sub_pane_cp11

0x8030,	// (0x0005a4e6) cell_ai3_links_pane_g1

0xd299,	// (0x0005f74f) bg_popup_sub_pane_cp12

0x8055,	// (0x0005a50b) heading_ai3_data_pane

0x805d,	// (0x0005a513) list_ai3_gene_pane

0x8069,	// (0x0005a51f) popup_ai3_data_window_g1

0x8071,	// (0x0005a527) heading_ai3_data_pane_g1

0x8079,	// (0x0005a52f) heading_ai3_data_pane_t1

0x8087,	// (0x0005a53d) list_double_ai3_gene_pane_ParamLimits

0x8087,	// (0x0005a53d) list_double_ai3_gene_pane

0x8094,	// (0x0005a54a) list_single_ai3_gene_pane_ParamLimits

0x8094,	// (0x0005a54a) list_single_ai3_gene_pane

0x6e19,	// (0x000592cf) list_highlight_pane_cp7_ParamLimits

0x6e19,	// (0x000592cf) list_highlight_pane_cp7

0x80a1,	// (0x0005a557) list_single_a13_gene_pane_t1_ParamLimits

0x80a1,	// (0x0005a557) list_single_a13_gene_pane_t1

0x80b8,	// (0x0005a56e) list_single_ai3_gene_pane_g1

0x80c1,	// (0x0005a577) list_single_ai3_gene_pane_g2

0x0001,

0xfcee,	// (0x000621a4) list_single_ai3_gene_pane_g

0x80c9,	// (0x0005a57f) list_double_ai3_gene_pane_g1_ParamLimits

0x80c9,	// (0x0005a57f) list_double_ai3_gene_pane_g1

0x80d5,	// (0x0005a58b) list_double_ai3_gene_pane_t1_ParamLimits

0x80d5,	// (0x0005a58b) list_double_ai3_gene_pane_t1

0x80f1,	// (0x0005a5a7) list_double_ai3_gene_pane_t2_ParamLimits

0x80f1,	// (0x0005a5a7) list_double_ai3_gene_pane_t2

0x8106,	// (0x0005a5bc) list_double_ai3_gene_pane_t3_ParamLimits

0x8106,	// (0x0005a5bc) list_double_ai3_gene_pane_t3

0x0002,

0xfcf3,	// (0x000621a9) list_double_ai3_gene_pane_t_ParamLimits

0xfcf3,	// (0x000621a9) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x1731,	// (0x00053be7) aid_size_min_col_2

0xdd89,	// (0x0006023f) aid_size_min_msg_ParamLimits

0xdd89,	// (0x0006023f) aid_size_min_msg

0xdb3c,	// (0x0005fff2) fep_vkb_top_text_pane_g2_ParamLimits

0xdb3c,	// (0x0005fff2) fep_vkb_top_text_pane_g2

0x0001,

0xfb53,	// (0x00062009) fep_vkb_top_text_pane_g_ParamLimits

0xfb53,	// (0x00062009) fep_vkb_top_text_pane_g

0xd299,	// (0x0005f74f) main_hc_apps_shell_pane

0x8123,	// (0x0005a5d9) grid_hc_apps_pane_ParamLimits

0x8123,	// (0x0005a5d9) grid_hc_apps_pane

0x8132,	// (0x0005a5e8) list_hc_apps_pane

0x813a,	// (0x0005a5f0) scroll_pane_cp37_ParamLimits

0x813a,	// (0x0005a5f0) scroll_pane_cp37

0xddd7,	// (0x0006028d) cell_hc_apps_pane_ParamLimits

0xddd7,	// (0x0006028d) cell_hc_apps_pane

0xdea1,	// (0x00060357) cell_hc_apps_pane_g1_ParamLimits

0xdea1,	// (0x00060357) cell_hc_apps_pane_g1

0x822f,	// (0x0005a6e5) cell_hc_apps_pane_g2_ParamLimits

0x822f,	// (0x0005a6e5) cell_hc_apps_pane_g2

0x824b,	// (0x0005a701) cell_hc_apps_pane_g3_ParamLimits

0x824b,	// (0x0005a701) cell_hc_apps_pane_g3

0x0002,

0xfcfa,	// (0x000621b0) cell_hc_apps_pane_g_ParamLimits

0xfcfa,	// (0x000621b0) cell_hc_apps_pane_g

0xdece,	// (0x00060384) cell_hc_apps_pane_t1_ParamLimits

0xdece,	// (0x00060384) cell_hc_apps_pane_t1

0x241f,	// (0x000548d5) grid_highlight_pane_cp10_ParamLimits

0x241f,	// (0x000548d5) grid_highlight_pane_cp10

0xdf0e,	// (0x000603c4) list_single_hc_apps_pane_ParamLimits

0xdf0e,	// (0x000603c4) list_single_hc_apps_pane

0xdf48,	// (0x000603fe) list_single_hc_apps_pane_g1

0xd25c,	// (0x0005f712) list_single_hc_apps_pane_g2

0x0001,

0xfd01,	// (0x000621b7) list_single_hc_apps_pane_g

0xd275,	// (0x0005f72b) list_single_hc_apps_pane_g2_copy1

0xbf4a,	// (0x0005e400) list_single_hc_apps_pane_t1

0x2195,	// (0x0005464b) bg_set_opt_pane_cp_ParamLimits

0xf4e4,	// (0x0006199a) setting_slider_pane_t1_ParamLimits

0xf4fa,	// (0x000619b0) setting_slider_pane_t2_ParamLimits

0xf514,	// (0x000619ca) setting_slider_pane_t3_ParamLimits

0xf57a,	// (0x00061a30) setting_slider_pane_t_ParamLimits

0xf52c,	// (0x000619e2) slider_set_pane_ParamLimits

0x08d7,	// (0x00052d8d) control_pane_g5_ParamLimits

0x08d7,	// (0x00052d8d) control_pane_g5

0x5b99,	// (0x0005804f) slider_set_pane_g1_ParamLimits

0x0db2,	// (0x00053268) slider_set_pane_g2_ParamLimits

0x0dbe,	// (0x00053274) slider_set_pane_g3_ParamLimits

0x0dd2,	// (0x00053288) slider_set_pane_g4_ParamLimits

0x0dea,	// (0x000532a0) slider_set_pane_g5_ParamLimits

0x0dbe,	// (0x00053274) slider_set_pane_g6_ParamLimits

0x0e00,	// (0x000532b6) slider_set_pane_g7_ParamLimits

0xf975,	// (0x00061e2b) slider_set_pane_g_ParamLimits

0x3770,	// (0x00055c26) navi_icon_text_pane_ParamLimits

0xcdad,	// (0x0005f263) aid_fill_nsta_2_ParamLimits

0xcde3,	// (0x0005f299) aid_touch_tab_arrow_left_ParamLimits

0xcdf9,	// (0x0005f2af) aid_touch_tab_arrow_right_ParamLimits

0xce94,	// (0x0005f34a) clock_nsta_pane_ParamLimits

0xd3f1,	// (0x0005f8a7) navi_icon_pane_g1_ParamLimits

0xd3fd,	// (0x0005f8b3) navi_text_pane_t1_ParamLimits

0xd8fa,	// (0x0005fdb0) navi_icon_text_pane_g1_ParamLimits

0xd906,	// (0x0005fdbc) navi_icon_text_pane_t1_ParamLimits

0xdf48,	// (0x000603fe) list_single_hc_apps_pane_g1_ParamLimits

0xd25c,	// (0x0005f712) list_single_hc_apps_pane_g2_ParamLimits

0xfd01,	// (0x000621b7) list_single_hc_apps_pane_g_ParamLimits

0xd275,	// (0x0005f72b) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xbf4a,	// (0x0005e400) list_single_hc_apps_pane_t1_ParamLimits

0xae73,	// (0x0005d329) popup_toolbar2_fixed_window_ParamLimits

0xae73,	// (0x0005d329) popup_toolbar2_fixed_window

0xcd16,	// (0x0005f1cc) popup_toolbar2_float_window

0xd299,	// (0x0005f74f) bg_popup_sub_pane_cp27

0x8305,	// (0x0005a7bb) grid_toolbar2_float_pane

0xd299,	// (0x0005f74f) bg_popup_sub_pane_cp26

0x8305,	// (0x0005a7bb) grid_toolbar2_fixed_pane

0xdf61,	// (0x00060417) cell_toolbar2_fixed_pane_ParamLimits

0xdf61,	// (0x00060417) cell_toolbar2_fixed_pane

0xdf7e,	// (0x00060434) cell_toolbar2_fixed_pane_g1

0x8326,	// (0x0005a7dc) toolbar2_fixed_button_pane

0x47ae,	// (0x00056c64) toolbar2_fixed_button_pane_g1

0x47be,	// (0x00056c74) toolbar2_fixed_button_pane_g2

0x47b6,	// (0x00056c6c) toolbar2_fixed_button_pane_g3

0x47ce,	// (0x00056c84) toolbar2_fixed_button_pane_g4

0x47c6,	// (0x00056c7c) toolbar2_fixed_button_pane_g5

0x47d6,	// (0x00056c8c) toolbar2_fixed_button_pane_g6

0x47de,	// (0x00056c94) toolbar2_fixed_button_pane_g7

0x47ee,	// (0x00056ca4) toolbar2_fixed_button_pane_g8

0x47e6,	// (0x00056c9c) toolbar2_fixed_button_pane_g9

0x0008,

0xf877,	// (0x00061d2d) toolbar2_fixed_button_pane_g

0x832e,	// (0x0005a7e4) cell_toolbar2_float_pane_ParamLimits

0x832e,	// (0x0005a7e4) cell_toolbar2_float_pane

0x833f,	// (0x0005a7f5) cell_toolbar2_float_pane_g1

0x8326,	// (0x0005a7dc) toolbar2_fixed_button_pane_cp

0xda24,	// (0x0005feda) fep_vkb_accented_list_pane_ParamLimits

0xda24,	// (0x0005feda) fep_vkb_accented_list_pane

0x13d8,	// (0x0005388e) bg_popup_fep_shadow_pane_g9

0x38f4,	// (0x00055daa) bg_popup_fep_shadow_pane_cp3

0x2c3a,	// (0x000550f0) list_accented_list_pane

0x8348,	// (0x0005a7fe) list_single_accented_list_pane_ParamLimits

0x8348,	// (0x0005a7fe) list_single_accented_list_pane

0x38f4,	// (0x00055daa) list_highlight_pane_cp10

0x8359,	// (0x0005a80f) list_single_accented_list_pane_t1

0xcc32,	// (0x0005f0e8) popup_slider_window_ParamLimits

0xcc32,	// (0x0005f0e8) popup_slider_window

0x7fa1,	// (0x0005a457) aid_indentation_list_msg

0xe089,	// (0x0006053f) bg_popup_window_pane_cp19

0x8493,	// (0x0005a949) popup_slider_window_g1

0x84af,	// (0x0005a965) popup_slider_window_g2

0x84cb,	// (0x0005a981) popup_slider_window_g3

0x0005,

0xfd06,	// (0x000621bc) popup_slider_window_g

0x8527,	// (0x0005a9dd) popup_slider_window_t1

0x859b,	// (0x0005aa51) small_volume_slider_vertical_pane

0x6e54,	// (0x0005930a) small_volume_slider_vertical_pane_g1

0x6e54,	// (0x0005930a) small_volume_slider_vertical_pane_g2

0x85b7,	// (0x0005aa6d) small_volume_slider_vertical_pane_g3

0x0002,

0xfd18,	// (0x000621ce) small_volume_slider_vertical_pane_g

0xaddd,	// (0x0005d293) area_side_right_pane_ParamLimits

0xaddd,	// (0x0005d293) area_side_right_pane

0xbf78,	// (0x0005e42e) aid_size_side_button_ParamLimits

0xbf78,	// (0x0005e42e) aid_size_side_button

0xbf91,	// (0x0005e447) grid_sctrl_middle_pane_ParamLimits

0xbf91,	// (0x0005e447) grid_sctrl_middle_pane

0x1874,	// (0x00053d2a) sctrl_sk_bottom_pane

0x1885,	// (0x00053d3b) sctrl_sk_top_pane

0x1897,	// (0x00053d4d) aid_touch_sctrl_top

0x18a4,	// (0x00053d5a) bg_sctrl_sk_pane_ParamLimits

0x18a4,	// (0x00053d5a) bg_sctrl_sk_pane

0x18b2,	// (0x00053d68) sctrl_sk_top_pane_g1

0x18bf,	// (0x00053d75) sctrl_sk_top_pane_t1

0x1897,	// (0x00053d4d) aid_touch_sctrl_bottom

0x18a4,	// (0x00053d5a) bg_sctrl_sk_pane_cp_ParamLimits

0x18a4,	// (0x00053d5a) bg_sctrl_sk_pane_cp

0x18da,	// (0x00053d90) sctrl_sk_bottom_pane_g1

0x18bf,	// (0x00053d75) sctrl_sk_bottom_pane_t1

0xbfab,	// (0x0005e461) cell_sctrl_middle_pane_ParamLimits

0xbfab,	// (0x0005e461) cell_sctrl_middle_pane

0xbfbe,	// (0x0005e474) aid_touch_sctrl_middle_ParamLimits

0xbfbe,	// (0x0005e474) aid_touch_sctrl_middle

0xbfcb,	// (0x0005e481) bg_sctrl_middle_pane_ParamLimits

0xbfcb,	// (0x0005e481) bg_sctrl_middle_pane

0x1f54,	// (0x0005440a) cell_sctrl_middle_pane_g1_ParamLimits

0x1f54,	// (0x0005440a) cell_sctrl_middle_pane_g1

0xbfd9,	// (0x0005e48f) cell_sctrl_middle_pane_g2_ParamLimits

0xbfd9,	// (0x0005e48f) cell_sctrl_middle_pane_g2

0x0001,

0xfd24,	// (0x000621da) cell_sctrl_middle_pane_g_ParamLimits

0xfd24,	// (0x000621da) cell_sctrl_middle_pane_g

0x47ae,	// (0x00056c64) bg_sctrl_middle_pane_g1

0x47b6,	// (0x00056c6c) bg_sctrl_middle_pane_g2

0x47be,	// (0x00056c74) bg_sctrl_middle_pane_g3

0x47c6,	// (0x00056c7c) bg_sctrl_middle_pane_g4

0x47ce,	// (0x00056c84) bg_sctrl_middle_pane_g5

0x47d6,	// (0x00056c8c) bg_sctrl_middle_pane_g6

0x47de,	// (0x00056c94) bg_sctrl_middle_pane_g7

0x47e6,	// (0x00056c9c) bg_sctrl_middle_pane_g8

0x0007,

0xfd29,	// (0x000621df) bg_sctrl_middle_pane_g

0x47ee,	// (0x00056ca4) bg_sctrl_middle_pane_g8_copy1

0x47ae,	// (0x00056c64) bg_sctrl_sk_pane_g1

0x47be,	// (0x00056c74) bg_sctrl_sk_pane_g2

0x47b6,	// (0x00056c6c) bg_sctrl_sk_pane_g3

0x0008,

0xf877,	// (0x00061d2d) bg_sctrl_sk_pane_g

0x294b,	// (0x00054e01) aid_size_touch_scroll_bar

0x47ce,	// (0x00056c84) bg_sctrl_sk_pane_g4

0x47c6,	// (0x00056c7c) bg_sctrl_sk_pane_g5

0x47d6,	// (0x00056c8c) bg_sctrl_sk_pane_g6

0x47de,	// (0x00056c94) bg_sctrl_sk_pane_g7

0x47ee,	// (0x00056ca4) bg_sctrl_sk_pane_g8

0x47e6,	// (0x00056c9c) bg_sctrl_sk_pane_g9

0x3d1c,	// (0x000561d2) popup_fep_china_hwr2_fs_candidate_window

0xc6ee,	// (0x0005eba4) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xc6ee,	// (0x0005eba4) popup_fep_china_hwr2_fs_control_window

0x13f8,	// (0x000538ae) sctrl_sk_top_pane_g2

0x0001,

0xfd1f,	// (0x000621d5) sctrl_sk_top_pane_g

0xe141,	// (0x000605f7) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe141,	// (0x000605f7) aid_fep_china_hwr2_fs_cell

0xe18c,	// (0x00060642) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe18c,	// (0x00060642) bg_popup_fep_shadow_pane_cp4

0xe1a3,	// (0x00060659) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe1a3,	// (0x00060659) bg_popup_fep_shadow_pane_cp5

0xe1b5,	// (0x0006066b) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe1b5,	// (0x0006066b) popup_fep_china_hwr2_fs_control_bar_grid

0xe1c9,	// (0x0006067f) popup_fep_china_hwr2_fs_control_funtion_grid

0x8616,	// (0x0005aacc) aid_fep_china_hwr2_fs_candi_cell

0xd299,	// (0x0005f74f) bg_popup_fep_shadow_pane_cp6

0x8620,	// (0x0005aad6) popup_fep_china_hwr2_fs_candidate_grid

0xe1d1,	// (0x00060687) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe1d1,	// (0x00060687) cell_fep_china_hwr2_fs_funtion_grid

0x6e54,	// (0x0005930a) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x8642,	// (0x0005aaf8) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x8642,	// (0x0005aaf8) cell_fep_china_hwr2_fs_funtion_grid_g1

0x8650,	// (0x0005ab06) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x8650,	// (0x0005ab06) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd3a,	// (0x000621f0) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd3a,	// (0x000621f0) cell_fep_china_hwr2_fs_funtion_grid_g

0xe1e9,	// (0x0006069f) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe1e9,	// (0x0006069f) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe1fe,	// (0x000606b4) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe1fe,	// (0x000606b4) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd3f,	// (0x000621f5) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd3f,	// (0x000621f5) cell_fep_china_hwr2_fs_funtion_grid_t

0x8697,	// (0x0005ab4d) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x869f,	// (0x0005ab55) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x86a7,	// (0x0005ab5d) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd44,	// (0x000621fa) popup_fep_china_hwr2_fs_control_bar_grid_g

0x86af,	// (0x0005ab65) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x86af,	// (0x0005ab65) cell_fep_china_hwr2_fs_candidate_grid

0x86ce,	// (0x0005ab84) popup_fep_china_hwr2_fs_candidate_grid_g20

0x86d6,	// (0x0005ab8c) popup_fep_china_hwr2_fs_candidate_grid_g21

0x6e54,	// (0x0005930a) cell_fep_china_hwr2_fs_candidate_grid_g1

0x6e54,	// (0x0005930a) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb58,	// (0x0006200e) cell_fep_china_hwr2_fs_candidate_grid_g

0x86de,	// (0x0005ab94) cell_fep_china_hwr2_fs_candidate_grid_t1

0x438b,	// (0x00056841) clock_nsta_pane_cp_24_ParamLimits

0x438b,	// (0x00056841) clock_nsta_pane_cp_24

0x440b,	// (0x000568c1) indicator_nsta_pane_cp_24_ParamLimits

0x440b,	// (0x000568c1) indicator_nsta_pane_cp_24

0x54d7,	// (0x0005798d) heading_pane_g1

0x0001,

0xf8dc,	// (0x00061d92) heading_pane_g

0x5f87,	// (0x0005843d) grid_sct_catagory_button_pane

0x5fb9,	// (0x0005846f) scroll_pane_cp5_ParamLimits

0x6a5b,	// (0x00058f11) button_value_adjust_pane_cp5_ParamLimits

0x6a5b,	// (0x00058f11) button_value_adjust_pane_cp5

0x6b40,	// (0x00058ff6) form2_midp_time_pane_ParamLimits

0x86ec,	// (0x0005aba2) cell_sct_catagory_button_pane_ParamLimits

0x86ec,	// (0x0005aba2) cell_sct_catagory_button_pane

0x6e19,	// (0x000592cf) bg_button_pane_cp01_ParamLimits

0x6e19,	// (0x000592cf) bg_button_pane_cp01

0x6e54,	// (0x0005930a) cell_sct_catagory_button_pane_g1

0xccb3,	// (0x0005f169) popup_tb_extension_window

0xe21a,	// (0x000606d0) aid_size_cell_ext_ParamLimits

0xe21a,	// (0x000606d0) aid_size_cell_ext

0x278d,	// (0x00054c43) bg_tb_trans_pane_cp1_ParamLimits

0x278d,	// (0x00054c43) bg_tb_trans_pane_cp1

0xe240,	// (0x000606f6) grid_tb_ext_pane_ParamLimits

0xe240,	// (0x000606f6) grid_tb_ext_pane

0xe280,	// (0x00060736) cell_tb_ext_pane_ParamLimits

0xe280,	// (0x00060736) cell_tb_ext_pane

0xe2aa,	// (0x00060760) cell_tb_ext_pane_g1_ParamLimits

0xe2aa,	// (0x00060760) cell_tb_ext_pane_g1

0x8782,	// (0x0005ac38) cell_tb_ext_pane_t1

0x241f,	// (0x000548d5) list_highlight_pane_cp11_ParamLimits

0x241f,	// (0x000548d5) list_highlight_pane_cp11

0xf46d,	// (0x00061923) popup_uni_indicator_window_ParamLimits

0xf46d,	// (0x00061923) popup_uni_indicator_window

0x2ac8,	// (0x00054f7e) bg_popup_sub_pane_cp14

0x879d,	// (0x0005ac53) list_uniindi_pane

0x87a9,	// (0x0005ac5f) uniindi_top_pane

0x241f,	// (0x000548d5) bg_uniindi_top_pane

0x87ca,	// (0x0005ac80) uniindi_top_pane_g1

0x87e0,	// (0x0005ac96) uniindi_top_pane_g2

0x0003,

0xfd4b,	// (0x00062201) uniindi_top_pane_g

0x880a,	// (0x0005acc0) uniindi_top_pane_t1

0x8836,	// (0x0005acec) list_single_uniindi_pane_ParamLimits

0x8836,	// (0x0005acec) list_single_uniindi_pane

0x6e54,	// (0x0005930a) bg_uniindi_top_pane_g1

0x8848,	// (0x0005acfe) list_single_uniindi_pane_g1

0x885b,	// (0x0005ad11) list_single_uniindi_pane_t1

0xf120,	// (0x000615d6) control_bg_pane

0x8880,	// (0x0005ad36) bg_sctrl_sk_pane_cp1

0x8889,	// (0x0005ad3f) bg_sctrl_sk_pane_cp2

0x8892,	// (0x0005ad48) control_bg_pane_g1

0x889b,	// (0x0005ad51) control_bg_pane_g2

0x0001,

0xfd54,	// (0x0006220a) control_bg_pane_g

0x687e,	// (0x00058d34) cell_indicator_nsta_pane_g1_ParamLimits

0xd853,	// (0x0005fd09) cell_indicator_nsta_pane_g2_ParamLimits

0xfabc,	// (0x00061f72) cell_indicator_nsta_pane_g_ParamLimits

0x116a,	// (0x00053620) form2_midp_time_pane_t1_ParamLimits

0xc664,	// (0x0005eb1a) main_idle_act4_pane_ParamLimits

0xc664,	// (0x0005eb1a) main_idle_act4_pane

0xccb3,	// (0x0005f169) popup_tb_extension_window_ParamLimits

0xe268,	// (0x0006071e) tb_ext_find_pane_ParamLimits

0xe268,	// (0x0006071e) tb_ext_find_pane

0x88a4,	// (0x0005ad5a) ai_gene_pane_1_cp1

0x3a3d,	// (0x00055ef3) ai_gene_pane_2_cp1

0x88ac,	// (0x0005ad62) list_single_idle_plugin_calendar_pane

0x88b5,	// (0x0005ad6b) list_single_idle_plugin_notification_pane

0x88be,	// (0x0005ad74) list_single_idle_plugin_player_pane

0xe2c7,	// (0x0006077d) list_single_idle_plugin_shortcut_pane_ParamLimits

0xe2c7,	// (0x0006077d) list_single_idle_plugin_shortcut_pane

0xe2ef,	// (0x000607a5) main_idle_act4_pane_t1

0xe307,	// (0x000607bd) main_idle_act4_pane_t2

0x0001,

0xfd59,	// (0x0006220f) main_idle_act4_pane_t

0xe31f,	// (0x000607d5) middle_sk_idle_act4_pane_ParamLimits

0xe31f,	// (0x000607d5) middle_sk_idle_act4_pane

0xe33b,	// (0x000607f1) popup_clock_digital_analogue_window_cp2

0xe362,	// (0x00060818) shortcut_wheel_idle_act4_pane_ParamLimits

0xe362,	// (0x00060818) shortcut_wheel_idle_act4_pane

0x6e54,	// (0x0005930a) shortcut_wheel_idle_act4_pane_g1

0x6e54,	// (0x0005930a) shortcut_wheel_idle_act4_pane_g2

0x6e54,	// (0x0005930a) shortcut_wheel_idle_act4_pane_g3

0x6e54,	// (0x0005930a) shortcut_wheel_idle_act4_pane_g4

0x6e54,	// (0x0005930a) shortcut_wheel_idle_act4_pane_g5

0x8951,	// (0x0005ae07) shortcut_wheel_idle_act4_pane_g6

0x8959,	// (0x0005ae0f) shortcut_wheel_idle_act4_pane_g7

0x8961,	// (0x0005ae17) shortcut_wheel_idle_act4_pane_g8

0x8969,	// (0x0005ae1f) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd5e,	// (0x00062214) shortcut_wheel_idle_act4_pane_g

0xe157,	// (0x0006060d) middle_sk_idle_act4_pane_g1_ParamLimits

0xe157,	// (0x0006060d) middle_sk_idle_act4_pane_g1

0xe3df,	// (0x00060895) middle_sk_idle_act4_pane_g2_ParamLimits

0xe3df,	// (0x00060895) middle_sk_idle_act4_pane_g2

0x0001,

0xfd81,	// (0x00062237) middle_sk_idle_act4_pane_g_ParamLimits

0xfd81,	// (0x00062237) middle_sk_idle_act4_pane_g

0xe3f7,	// (0x000608ad) middle_sk_idle_act4_pane_t1_ParamLimits

0xe3f7,	// (0x000608ad) middle_sk_idle_act4_pane_t1

0xe426,	// (0x000608dc) grid_ai_shortcut_pane_ParamLimits

0xe426,	// (0x000608dc) grid_ai_shortcut_pane

0xe443,	// (0x000608f9) list_highlight_pane_cp16_ParamLimits

0xe443,	// (0x000608f9) list_highlight_pane_cp16

0xe450,	// (0x00060906) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xe450,	// (0x00060906) list_single_idle_plugin_shortcut_pane_g1

0xe45c,	// (0x00060912) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xe45c,	// (0x00060912) list_single_idle_plugin_shortcut_pane_g2

0xe47a,	// (0x00060930) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xe47a,	// (0x00060930) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd86,	// (0x0006223c) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd86,	// (0x0006223c) list_single_idle_plugin_shortcut_pane_g

0xe48f,	// (0x00060945) cell_ai_shortcut_pane_ParamLimits

0xe48f,	// (0x00060945) cell_ai_shortcut_pane

0xe4a5,	// (0x0006095b) cell_ai_shortcut_pane_g1_ParamLimits

0xe4a5,	// (0x0006095b) cell_ai_shortcut_pane_g1

0x88a4,	// (0x0005ad5a) ai_gene_pane_1_cp2

0x8a9a,	// (0x0005af50) ai_gene_pane_2_cp2

0x8aa2,	// (0x0005af58) list_highlight_pane_cp15

0x8aab,	// (0x0005af61) list_single_idle_plugin_calendar_pane_g1

0x8aa2,	// (0x0005af58) list_highlight_pane_cp17

0x8ab3,	// (0x0005af69) list_single_idle_plugin_calendar_pane_g1_copy1

0x8abb,	// (0x0005af71) list_single_idle_plugin_player_pane_g1

0x61ee,	// (0x000586a4) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd8d,	// (0x00062243) list_single_idle_plugin_player_pane_g

0x8ac3,	// (0x0005af79) list_single_idle_plugin_player_pane_t1

0x8ad1,	// (0x0005af87) list_single_idle_plugin_player_pane_t2

0x8adf,	// (0x0005af95) list_single_idle_plugin_player_pane_t3

0x8aed,	// (0x0005afa3) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd92,	// (0x00062248) list_single_idle_plugin_player_pane_t

0x8afb,	// (0x0005afb1) wait_bar_pane_cp15

0x8b03,	// (0x0005afb9) grid_ai_notification_pane

0x61ee,	// (0x000586a4) list_single_idle_plugin_notification_pane_g1

0xe4c7,	// (0x0006097d) cell_ai_notification_pane_ParamLimits

0xe4c7,	// (0x0006097d) cell_ai_notification_pane

0x8b19,	// (0x0005afcf) cell_ai_notification_pane_g1

0x8b21,	// (0x0005afd7) cell_ai_notification_pane_t1

0xe4d4,	// (0x0006098a) tb_ext_find_button_pane

0xe4dc,	// (0x00060992) tb_ext_find_pane_g1

0xe4e4,	// (0x0006099a) tb_ext_find_pane_t1

0x3306,	// (0x000557bc) tb_ext_find_button_pane_g1

0x8b4d,	// (0x0005b003) tb_ext_find_button_pane_g2

0x0001,

0xfd9b,	// (0x00062251) tb_ext_find_button_pane_g

0xe2ef,	// (0x000607a5) main_idle_act4_pane_t1_ParamLimits

0xe307,	// (0x000607bd) main_idle_act4_pane_t2_ParamLimits

0xfd59,	// (0x0006220f) main_idle_act4_pane_t_ParamLimits

0xe33b,	// (0x000607f1) popup_clock_digital_analogue_window_cp2_ParamLimits

0xe352,	// (0x00060808) sat_plugin_idle_act4_pane_ParamLimits

0xe352,	// (0x00060808) sat_plugin_idle_act4_pane

0xe4f2,	// (0x000609a8) sat_plugin_idle_act4_pane_t1_ParamLimits

0xe4f2,	// (0x000609a8) sat_plugin_idle_act4_pane_t1

0xe50a,	// (0x000609c0) sat_plugin_idle_act4_pane_t2_ParamLimits

0xe50a,	// (0x000609c0) sat_plugin_idle_act4_pane_t2

0xe522,	// (0x000609d8) sat_plugin_idle_act4_pane_t3_ParamLimits

0xe522,	// (0x000609d8) sat_plugin_idle_act4_pane_t3

0xe53a,	// (0x000609f0) sat_plugin_idle_act4_pane_t4_ParamLimits

0xe53a,	// (0x000609f0) sat_plugin_idle_act4_pane_t4

0x0003,

0xfda0,	// (0x00062256) sat_plugin_idle_act4_pane_t_ParamLimits

0xfda0,	// (0x00062256) sat_plugin_idle_act4_pane_t

0xf1e5,	// (0x0006169b) popup_battery_window_ParamLimits

0xf1e5,	// (0x0006169b) popup_battery_window

0x241f,	// (0x000548d5) bg_popup_sub_pane_cp25_ParamLimits

0x241f,	// (0x000548d5) bg_popup_sub_pane_cp25

0x8ba2,	// (0x0005b058) popup_battery_window_g1_ParamLimits

0x8ba2,	// (0x0005b058) popup_battery_window_g1

0x8bae,	// (0x0005b064) popup_battery_window_t1_ParamLimits

0x8bae,	// (0x0005b064) popup_battery_window_t1

0x8bc0,	// (0x0005b076) popup_battery_window_t2_ParamLimits

0x8bc0,	// (0x0005b076) popup_battery_window_t2

0x0001,

0xfda9,	// (0x0006225f) popup_battery_window_t_ParamLimits

0xfda9,	// (0x0006225f) popup_battery_window_t

0xc558,	// (0x0005ea0e) midp_canvas_pane_ParamLimits

0xc5b3,	// (0x0005ea69) midp_keypad_pane_ParamLimits

0xc5b3,	// (0x0005ea69) midp_keypad_pane

0x3c72,	// (0x00056128) main_midp_pane_ParamLimits

0x6908,	// (0x00058dbe) signal_pane_g2_cp_ParamLimits

0xe552,	// (0x00060a08) aid_size_cell_midp_keypad_ParamLimits

0xe552,	// (0x00060a08) aid_size_cell_midp_keypad

0xe570,	// (0x00060a26) midp_keyp_game_grid_pane_ParamLimits

0xe570,	// (0x00060a26) midp_keyp_game_grid_pane

0xe597,	// (0x00060a4d) midp_keyp_rocker_pane_ParamLimits

0xe597,	// (0x00060a4d) midp_keyp_rocker_pane

0xe5dc,	// (0x00060a92) midp_keyp_sk_left_pane_ParamLimits

0xe5dc,	// (0x00060a92) midp_keyp_sk_left_pane

0xe630,	// (0x00060ae6) midp_keyp_sk_right_pane_ParamLimits

0xe630,	// (0x00060ae6) midp_keyp_sk_right_pane

0xd299,	// (0x0005f74f) bg_button_pane_cp03

0xe684,	// (0x00060b3a) midp_keyp_sk_left_pane_g1

0xd299,	// (0x0005f74f) bg_button_pane_cp04

0xe684,	// (0x00060b3a) midp_keyp_sk_right_pane_g1

0x6e54,	// (0x0005930a) midp_keyp_rocker_pane_g1

0xe68d,	// (0x00060b43) keyp_game_cell_pane_ParamLimits

0xe68d,	// (0x00060b43) keyp_game_cell_pane

0xd299,	// (0x0005f74f) bg_button_pane_cp02

0xe6b3,	// (0x00060b69) keyp_game_cell_pane_g1

0xae1f,	// (0x0005d2d5) popup_fep_vkb2_window_ParamLimits

0xae1f,	// (0x0005d2d5) popup_fep_vkb2_window

0xbfe5,	// (0x0005e49b) aid_size_cell_vkb2_ParamLimits

0xbfe5,	// (0x0005e49b) aid_size_cell_vkb2

0xc013,	// (0x0005e4c9) popup_fep_vkb2_window_g1_ParamLimits

0xc013,	// (0x0005e4c9) popup_fep_vkb2_window_g1

0xc063,	// (0x0005e519) vkb2_area_bottom_pane_ParamLimits

0xc063,	// (0x0005e519) vkb2_area_bottom_pane

0xc0bf,	// (0x0005e575) vkb2_area_keypad_pane_ParamLimits

0xc0bf,	// (0x0005e575) vkb2_area_keypad_pane

0xc10d,	// (0x0005e5c3) vkb2_area_top_pane_ParamLimits

0xc10d,	// (0x0005e5c3) vkb2_area_top_pane

0xc193,	// (0x0005e649) vkb2_top_entry_pane_ParamLimits

0xc193,	// (0x0005e649) vkb2_top_entry_pane

0xc1c0,	// (0x0005e676) vkb2_top_grid_left_pane_ParamLimits

0xc1c0,	// (0x0005e676) vkb2_top_grid_left_pane

0xc1e0,	// (0x0005e696) vkb2_top_grid_right_pane_ParamLimits

0xc1e0,	// (0x0005e696) vkb2_top_grid_right_pane

0x1b50,	// (0x00054006) vkb2_cell_keypad_pane_ParamLimits

0x1b50,	// (0x00054006) vkb2_cell_keypad_pane

0xc226,	// (0x0005e6dc) vkb2_area_bottom_grid_pane_ParamLimits

0xc226,	// (0x0005e6dc) vkb2_area_bottom_grid_pane

0xc250,	// (0x0005e706) vkb2_area_bottom_pane_g1_ParamLimits

0xc250,	// (0x0005e706) vkb2_area_bottom_pane_g1

0xc276,	// (0x0005e72c) vkb2_area_bottom_pane_g2_ParamLimits

0xc276,	// (0x0005e72c) vkb2_area_bottom_pane_g2

0xc2a7,	// (0x0005e75d) vkb2_area_bottom_pane_g3_ParamLimits

0xc2a7,	// (0x0005e75d) vkb2_area_bottom_pane_g3

0x0002,

0xfdae,	// (0x00062264) vkb2_area_bottom_pane_g_ParamLimits

0xfdae,	// (0x00062264) vkb2_area_bottom_pane_g

0x1cdf,	// (0x00054195) vkb2_top_cell_left_pane_ParamLimits

0x1cdf,	// (0x00054195) vkb2_top_cell_left_pane

0xe6bc,	// (0x00060b72) vkb2_top_entry_pane_g1_ParamLimits

0xe6bc,	// (0x00060b72) vkb2_top_entry_pane_g1

0xe6ca,	// (0x00060b80) vkb2_top_entry_pane_t1_ParamLimits

0xe6ca,	// (0x00060b80) vkb2_top_entry_pane_t1

0x8d4d,	// (0x0005b203) vkb2_top_entry_pane_t2_ParamLimits

0x8d4d,	// (0x0005b203) vkb2_top_entry_pane_t2

0x8d65,	// (0x0005b21b) vkb2_top_entry_pane_t3_ParamLimits

0x8d65,	// (0x0005b21b) vkb2_top_entry_pane_t3

0x0002,

0xfdb5,	// (0x0006226b) vkb2_top_entry_pane_t_ParamLimits

0xfdb5,	// (0x0006226b) vkb2_top_entry_pane_t

0xc311,	// (0x0005e7c7) vkb2_top_grid_right_pane_g1_ParamLimits

0xc311,	// (0x0005e7c7) vkb2_top_grid_right_pane_g1

0x1d42,	// (0x000541f8) vkb2_top_grid_right_pane_g2_ParamLimits

0x1d42,	// (0x000541f8) vkb2_top_grid_right_pane_g2

0x1d5a,	// (0x00054210) vkb2_top_grid_right_pane_g3_ParamLimits

0x1d5a,	// (0x00054210) vkb2_top_grid_right_pane_g3

0xc327,	// (0x0005e7dd) vkb2_top_grid_right_pane_g4_ParamLimits

0xc327,	// (0x0005e7dd) vkb2_top_grid_right_pane_g4

0x0003,

0xfdbc,	// (0x00062272) vkb2_top_grid_right_pane_g_ParamLimits

0xfdbc,	// (0x00062272) vkb2_top_grid_right_pane_g

0x1d88,	// (0x0005423e) vkb2_top_cell_left_pane_g1

0x1d9f,	// (0x00054255) vkb2_cell_keypad_pane_g1_ParamLimits

0x1d9f,	// (0x00054255) vkb2_cell_keypad_pane_g1

0x8d7b,	// (0x0005b231) vkb2_cell_keypad_pane_t1_ParamLimits

0x8d7b,	// (0x0005b231) vkb2_cell_keypad_pane_t1

0x1dc3,	// (0x00054279) vkb2_cell_bottom_grid_pane_ParamLimits

0x1dc3,	// (0x00054279) vkb2_cell_bottom_grid_pane

0x1dfc,	// (0x000542b2) vkb2_cell_bottom_grid_pane_g1

0xe383,	// (0x00060839) aid_call2_pane_cp02

0xe38b,	// (0x00060841) aid_call_pane_cp02

0xe393,	// (0x00060849) clock_digital_number_pane_cp10

0xe39b,	// (0x00060851) clock_digital_number_pane_cp11

0xe3a3,	// (0x00060859) clock_digital_number_pane_cp12

0xe3ab,	// (0x00060861) clock_digital_number_pane_cp13

0xe3b3,	// (0x00060869) clock_digital_separator_pane_cp10

0x3306,	// (0x000557bc) popup_clock_digital_analogue_window_cp2_g1

0x3306,	// (0x000557bc) popup_clock_digital_analogue_window_cp2_g2

0xe3bb,	// (0x00060871) popup_clock_digital_analogue_window_cp2_g3

0x3306,	// (0x000557bc) popup_clock_digital_analogue_window_cp2_g4

0xe3bb,	// (0x00060871) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd71,	// (0x00062227) popup_clock_digital_analogue_window_cp2_g

0xe3c3,	// (0x00060879) popup_clock_digital_analogue_window_cp2_t1

0xe3d1,	// (0x00060887) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd7c,	// (0x00062232) popup_clock_digital_analogue_window_cp2_t

0x6e54,	// (0x0005930a) clock_digital_number_pane_cp10_g1

0x6e54,	// (0x0005930a) clock_digital_number_pane_cp10_g2

0x0001,

0xfb58,	// (0x0006200e) clock_digital_number_pane_cp10_g

0x6e54,	// (0x0005930a) clock_digital_separator_pane_cp10_g1

0x6e54,	// (0x0005930a) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb58,	// (0x0006200e) clock_digital_separator_pane_cp10_g

0x87ec,	// (0x0005aca2) uniindi_top_pane_g3

0x87fd,	// (0x0005acb3) uniindi_top_pane_g4

0x1bc0,	// (0x00054076) vkb2_row_keypad_pane_ParamLimits

0x1bc0,	// (0x00054076) vkb2_row_keypad_pane

0x1e18,	// (0x000542ce) vkb2_cell_t_keypad_pane_ParamLimits

0x1e18,	// (0x000542ce) vkb2_cell_t_keypad_pane

0x1e28,	// (0x000542de) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x1e28,	// (0x000542de) vkb2_cell_t_keypad_pane_cp08

0x1e3d,	// (0x000542f3) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x1e3d,	// (0x000542f3) vkb2_cell_t_keypad_pane_cp09

0x1e51,	// (0x00054307) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x1e51,	// (0x00054307) vkb2_cell_t_keypad_pane_cp01

0x1e62,	// (0x00054318) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x1e62,	// (0x00054318) vkb2_cell_t_keypad_pane_cp02

0x1e73,	// (0x00054329) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x1e73,	// (0x00054329) vkb2_cell_t_keypad_pane_cp03

0x1e84,	// (0x0005433a) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x1e84,	// (0x0005433a) vkb2_cell_t_keypad_pane_cp04

0x1e95,	// (0x0005434b) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x1e95,	// (0x0005434b) vkb2_cell_t_keypad_pane_cp05

0x1ea6,	// (0x0005435c) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x1ea6,	// (0x0005435c) vkb2_cell_t_keypad_pane_cp06

0x1eb9,	// (0x0005436f) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x1eb9,	// (0x0005436f) vkb2_cell_t_keypad_pane_cp07

0x1ece,	// (0x00054384) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x1ece,	// (0x00054384) vkb2_cell_t_keypad_pane_cp10

0x13f8,	// (0x000538ae) vkb2_cell_t_keypad_pane_g1

0x8d92,	// (0x0005b248) vkb2_cell_t_keypad_pane_t1

0xf120,	// (0x000615d6) popup_grid_graphic2_window

0xe703,	// (0x00060bb9) aid_size_cell_graphic2_ParamLimits

0xe703,	// (0x00060bb9) aid_size_cell_graphic2

0xe741,	// (0x00060bf7) bg_popup_window_pane_cp21_ParamLimits

0xe741,	// (0x00060bf7) bg_popup_window_pane_cp21

0xe74f,	// (0x00060c05) graphic2_pages_pane_ParamLimits

0xe74f,	// (0x00060c05) graphic2_pages_pane

0xe7a7,	// (0x00060c5d) grid_graphic2_control_pane_ParamLimits

0xe7a7,	// (0x00060c5d) grid_graphic2_control_pane

0xe7ef,	// (0x00060ca5) grid_graphic2_pane_ParamLimits

0xe7ef,	// (0x00060ca5) grid_graphic2_pane

0xe87a,	// (0x00060d30) cell_graphic2_pane

0xd299,	// (0x0005f74f) main_comp_mode_pane

0x805d,	// (0x0005a513) list_ai3_gene_pane_ParamLimits

0xe089,	// (0x0006053f) bg_popup_window_pane_cp19_ParamLimits

0x8431,	// (0x0005a8e7) bg_touch_area_indi_pane_ParamLimits

0x8431,	// (0x0005a8e7) bg_touch_area_indi_pane

0x8447,	// (0x0005a8fd) bg_touch_area_indi_pane_cp01_ParamLimits

0x8447,	// (0x0005a8fd) bg_touch_area_indi_pane_cp01

0x845f,	// (0x0005a915) bg_touch_area_indi_pane_cp02_ParamLimits

0x845f,	// (0x0005a915) bg_touch_area_indi_pane_cp02

0x8479,	// (0x0005a92f) bg_touch_area_indi_pane_cp03_ParamLimits

0x8479,	// (0x0005a92f) bg_touch_area_indi_pane_cp03

0x8493,	// (0x0005a949) popup_slider_window_g1_ParamLimits

0x84af,	// (0x0005a965) popup_slider_window_g2_ParamLimits

0x84cb,	// (0x0005a981) popup_slider_window_g3_ParamLimits

0xfd06,	// (0x000621bc) popup_slider_window_g_ParamLimits

0x8527,	// (0x0005a9dd) popup_slider_window_t1_ParamLimits

0x859b,	// (0x0005aa51) small_volume_slider_vertical_pane_ParamLimits

0xe87a,	// (0x00060d30) cell_graphic2_pane_ParamLimits

0xe8dd,	// (0x00060d93) bg_button_pane_cp10_ParamLimits

0xe8dd,	// (0x00060d93) bg_button_pane_cp10

0xe8f0,	// (0x00060da6) bg_button_pane_cp11_ParamLimits

0xe8f0,	// (0x00060da6) bg_button_pane_cp11

0xe903,	// (0x00060db9) graphic2_pages_pane_g1_ParamLimits

0xe903,	// (0x00060db9) graphic2_pages_pane_g1

0xe91e,	// (0x00060dd4) graphic2_pages_pane_g2_ParamLimits

0xe91e,	// (0x00060dd4) graphic2_pages_pane_g2

0x0001,

0xfdca,	// (0x00062280) graphic2_pages_pane_g_ParamLimits

0xfdca,	// (0x00062280) graphic2_pages_pane_g

0xe936,	// (0x00060dec) graphic2_pages_pane_t1_ParamLimits

0xe936,	// (0x00060dec) graphic2_pages_pane_t1

0xe94e,	// (0x00060e04) cell_graphic2_control_pane_ParamLimits

0xe94e,	// (0x00060e04) cell_graphic2_control_pane

0xe96a,	// (0x00060e20) cell_graphic2_pane_g1_ParamLimits

0xe96a,	// (0x00060e20) cell_graphic2_pane_g1

0xe165,	// (0x0006061b) cell_graphic2_pane_g2_ParamLimits

0xe165,	// (0x0006061b) cell_graphic2_pane_g2

0xe17f,	// (0x00060635) cell_graphic2_pane_g3_ParamLimits

0xe17f,	// (0x00060635) cell_graphic2_pane_g3

0xe172,	// (0x00060628) cell_graphic2_pane_g4_ParamLimits

0xe172,	// (0x00060628) cell_graphic2_pane_g4

0xe977,	// (0x00060e2d) cell_graphic2_pane_g5_ParamLimits

0xe977,	// (0x00060e2d) cell_graphic2_pane_g5

0x0004,

0xfdcf,	// (0x00062285) cell_graphic2_pane_g_ParamLimits

0xfdcf,	// (0x00062285) cell_graphic2_pane_g

0xe997,	// (0x00060e4d) cell_graphic2_pane_t1_ParamLimits

0xe997,	// (0x00060e4d) cell_graphic2_pane_t1

0x54cb,	// (0x00057981) grid_highlight_pane_cp11_ParamLimits

0x54cb,	// (0x00057981) grid_highlight_pane_cp11

0x241f,	// (0x000548d5) bg_button_pane_cp05

0xe9cc,	// (0x00060e82) cell_graphic2_control_pane_g1

0x6e54,	// (0x0005930a) bg_touch_area_indi_pane_g1

0x9063,	// (0x0005b519) aid_cmod_rocker_key_size

0x906d,	// (0x0005b523) aid_cmode_itu_key_size

0x9077,	// (0x0005b52d) main_cmode_video_pane

0x9081,	// (0x0005b537) main_comp_mode_itu_pane

0x908d,	// (0x0005b543) main_comp_mode_rocker_pane

0x9099,	// (0x0005b54f) cell_cmode_rocker_pane_ParamLimits

0x9099,	// (0x0005b54f) cell_cmode_rocker_pane

0x90ad,	// (0x0005b563) cell_cmode_itu_pane_ParamLimits

0x90ad,	// (0x0005b563) cell_cmode_itu_pane

0x2ac8,	// (0x00054f7e) bg_button_pane_cp06_ParamLimits

0x2ac8,	// (0x00054f7e) bg_button_pane_cp06

0x70de,	// (0x00059594) cell_cmode_rocker_pane_g1_ParamLimits

0x70de,	// (0x00059594) cell_cmode_rocker_pane_g1

0x8642,	// (0x0005aaf8) cell_cmode_rocker_pane_g2_ParamLimits

0x8642,	// (0x0005aaf8) cell_cmode_rocker_pane_g2

0x0001,

0xfddf,	// (0x00062295) cell_cmode_rocker_pane_g_ParamLimits

0xfddf,	// (0x00062295) cell_cmode_rocker_pane_g

0xd299,	// (0x0005f74f) bg_button_pane_cp07

0x90c4,	// (0x0005b57a) cell_cmode_itu_pane_g1

0x90cd,	// (0x0005b583) cell_cmode_itu_pane_t1

0x90db,	// (0x0005b591) cell_cmode_itu_pane_t2

0x0001,

0xfde4,	// (0x0006229a) cell_cmode_itu_pane_t

0x8870,	// (0x0005ad26) aid_touch_ctrl_left

0x8878,	// (0x0005ad2e) aid_touch_ctrl_right

0xd299,	// (0x0005f74f) compa_mode_pane

0xe9f2,	// (0x00060ea8) aid_cmod_rocker_key_size_cp

0xe9fc,	// (0x00060eb2) aid_cmode_itu_key_size_cp

0x90fd,	// (0x0005b5b3) compa_mode_pane_g1

0x9105,	// (0x0005b5bb) compa_mode_pane_g2

0x910d,	// (0x0005b5c3) compa_mode_pane_g3

0x0002,

0xfde9,	// (0x0006229f) compa_mode_pane_g

0xea06,	// (0x00060ebc) main_comp_mode_itu_pane_cp

0xea0e,	// (0x00060ec4) main_comp_mode_rocker_pane_cp

0xea16,	// (0x00060ecc) cell_cmode_itu_pane_cp_ParamLimits

0xea16,	// (0x00060ecc) cell_cmode_itu_pane_cp

0xea2b,	// (0x00060ee1) cell_cmode_rocker_pane_cp_ParamLimits

0xea2b,	// (0x00060ee1) cell_cmode_rocker_pane_cp

0x2ac8,	// (0x00054f7e) bg_button_pane_cp06_cp_ParamLimits

0x2ac8,	// (0x00054f7e) bg_button_pane_cp06_cp

0x70de,	// (0x00059594) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x70de,	// (0x00059594) cell_cmode_rocker_pane_g1_cp

0x6e54,	// (0x0005930a) cell_cmode_rocker_pane_g2_cp

0xd299,	// (0x0005f74f) bg_button_pane_cp07_cp

0xea3d,	// (0x00060ef3) cell_cmode_itu_pane_g1_cp

0xea46,	// (0x00060efc) cell_cmode_itu_pane_t1_cp

0xea46,	// (0x00060efc) cell_cmode_itu_pane_t2_cp

0xd69a,	// (0x0005fb50) settings_code_pane_cp2

0x2195,	// (0x0005464b) bg_popup_window_pane_cp3_ParamLimits

0x260d,	// (0x00054ac3) heading_pane_cp3_ParamLimits

0x2619,	// (0x00054acf) listscroll_popup_graphic_pane_ParamLimits

0x118b,	// (0x00053641) fep_hwr_aid_pane_ParamLimits

0x1897,	// (0x00053d4d) aid_touch_sctrl_top_ParamLimits

0x18b2,	// (0x00053d68) sctrl_sk_top_pane_g1_ParamLimits

0x13f8,	// (0x000538ae) sctrl_sk_top_pane_g2_ParamLimits

0xfd1f,	// (0x000621d5) sctrl_sk_top_pane_g_ParamLimits

0x18bf,	// (0x00053d75) sctrl_sk_top_pane_t1_ParamLimits

0x1897,	// (0x00053d4d) aid_touch_sctrl_bottom_ParamLimits

0x18bf,	// (0x00053d75) sctrl_sk_bottom_pane_t1_ParamLimits

0x87b6,	// (0x0005ac6c) aid_area_touch_clock

0xc155,	// (0x0005e60b) aid_vkb2_area_top_pane_cell_ParamLimits

0xc155,	// (0x0005e60b) aid_vkb2_area_top_pane_cell

0xc200,	// (0x0005e6b6) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xc200,	// (0x0005e6b6) aid_vkb2_area_bottom_pane_cell

0x8d1f,	// (0x0005b1d5) popup_char_count_window

0x9163,	// (0x0005b619) popup_char_count_window_g1

0x916c,	// (0x0005b622) popup_char_count_window_g2

0x9175,	// (0x0005b62b) popup_char_count_window_g3

0x0002,

0xfdf0,	// (0x000622a6) popup_char_count_window_g

0x917e,	// (0x0005b634) popup_char_count_window_t1

0x196c,	// (0x00053e22) popup_fep_char_preview_window_ParamLimits

0x196c,	// (0x00053e22) popup_fep_char_preview_window

0xc175,	// (0x0005e62b) vkb2_top_candi_pane_ParamLimits

0xc175,	// (0x0005e62b) vkb2_top_candi_pane

0xea54,	// (0x00060f0a) cell_vkb2_top_candi_pane_ParamLimits

0xea54,	// (0x00060f0a) cell_vkb2_top_candi_pane

0x1ee3,	// (0x00054399) bg_popup_fep_char_preview_window_ParamLimits

0x1ee3,	// (0x00054399) bg_popup_fep_char_preview_window

0x1ef1,	// (0x000543a7) popup_fep_char_preview_window_t1_ParamLimits

0x1ef1,	// (0x000543a7) popup_fep_char_preview_window_t1

0x91dd,	// (0x0005b693) bg_popup_fep_char_preview_window_g1

0x91e5,	// (0x0005b69b) bg_popup_fep_char_preview_window_g2

0x91ed,	// (0x0005b6a3) bg_popup_fep_char_preview_window_g3

0x91f5,	// (0x0005b6ab) bg_popup_fep_char_preview_window_g4

0x91fd,	// (0x0005b6b3) bg_popup_fep_char_preview_window_g5

0x1f2b,	// (0x000543e1) bg_popup_fep_char_preview_window_g6

0x9205,	// (0x0005b6bb) bg_popup_fep_char_preview_window_g7

0x920d,	// (0x0005b6c3) bg_popup_fep_char_preview_window_g8

0x9215,	// (0x0005b6cb) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdf7,	// (0x000622ad) bg_popup_fep_char_preview_window_g

0x13f8,	// (0x000538ae) cell_vkb2_top_candi_pane_g1_ParamLimits

0x13f8,	// (0x000538ae) cell_vkb2_top_candi_pane_g1

0x1406,	// (0x000538bc) cell_vkb2_top_candi_pane_g2_ParamLimits

0x1406,	// (0x000538bc) cell_vkb2_top_candi_pane_g2

0x7c6f,	// (0x0005a125) cell_vkb2_top_candi_pane_g3_ParamLimits

0x7c6f,	// (0x0005a125) cell_vkb2_top_candi_pane_g3

0x1f33,	// (0x000543e9) cell_vkb2_top_candi_pane_g4_ParamLimits

0x1f33,	// (0x000543e9) cell_vkb2_top_candi_pane_g4

0x75dd,	// (0x00059a93) cell_vkb2_top_candi_pane_g5_ParamLimits

0x75dd,	// (0x00059a93) cell_vkb2_top_candi_pane_g5

0x1f54,	// (0x0005440a) cell_vkb2_top_candi_pane_g6_ParamLimits

0x1f54,	// (0x0005440a) cell_vkb2_top_candi_pane_g6

0x0005,

0xfe0a,	// (0x000622c0) cell_vkb2_top_candi_pane_g_ParamLimits

0xfe0a,	// (0x000622c0) cell_vkb2_top_candi_pane_g

0x1f62,	// (0x00054418) cell_vkb2_top_candi_pane_t1

0x0d9e,	// (0x00053254) aid_size_touch_slider_mark_ParamLimits

0x0d9e,	// (0x00053254) aid_size_touch_slider_mark

0xe78b,	// (0x00060c41) grid_graphic2_catg_pane_ParamLimits

0xe78b,	// (0x00060c41) grid_graphic2_catg_pane

0xe849,	// (0x00060cff) popup_grid_graphic2_window_t1_ParamLimits

0xe849,	// (0x00060cff) popup_grid_graphic2_window_t1

0xe85f,	// (0x00060d15) popup_grid_graphic2_window_t2_ParamLimits

0xe85f,	// (0x00060d15) popup_grid_graphic2_window_t2

0x0001,

0xfdc5,	// (0x0006227b) popup_grid_graphic2_window_t_ParamLimits

0xfdc5,	// (0x0006227b) popup_grid_graphic2_window_t

0x241f,	// (0x000548d5) bg_button_pane_cp05_ParamLimits

0xe9cc,	// (0x00060e82) cell_graphic2_control_pane_g1_ParamLimits

0xeaa8,	// (0x00060f5e) cell_graphic2_catg_pane_ParamLimits

0xeaa8,	// (0x00060f5e) cell_graphic2_catg_pane

0xd299,	// (0x0005f74f) bg_button_pane_cp12

0xeaba,	// (0x00060f70) cell_graphic2_catg_pane_g1

0x8782,	// (0x0005ac38) cell_tb_ext_pane_t1_ParamLimits

0x1cff,	// (0x000541b5) vkb2_top_cell_right_narrow_pane_ParamLimits

0x1cff,	// (0x000541b5) vkb2_top_cell_right_narrow_pane

0x1d17,	// (0x000541cd) vkb2_top_cell_right_wide_pane_ParamLimits

0x1d17,	// (0x000541cd) vkb2_top_cell_right_wide_pane

0x117d,	// (0x00053633) bg_vkb2_func_pane_ParamLimits

0x117d,	// (0x00053633) bg_vkb2_func_pane

0x1d88,	// (0x0005423e) vkb2_top_cell_left_pane_g1_ParamLimits

0x117d,	// (0x00053633) bg_vkb2_fuc_pane_cp03_ParamLimits

0x117d,	// (0x00053633) bg_vkb2_fuc_pane_cp03

0x1dfc,	// (0x000542b2) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x47b6,	// (0x00056c6c) bg_vkb2_func_pane_g1

0x47be,	// (0x00056c74) bg_vkb2_func_pane_g2

0x47ce,	// (0x00056c84) bg_vkb2_func_pane_g3

0x47c6,	// (0x00056c7c) bg_vkb2_func_pane_g4

0x47d6,	// (0x00056c8c) bg_vkb2_func_pane_g5

0x47de,	// (0x00056c94) bg_vkb2_func_pane_g6

0x47e6,	// (0x00056c9c) bg_vkb2_func_pane_g7

0x47ee,	// (0x00056ca4) bg_vkb2_func_pane_g8

0x47ae,	// (0x00056c64) bg_vkb2_func_pane_g9

0x0008,

0xfe17,	// (0x000622cd) bg_vkb2_func_pane_g

0x117d,	// (0x00053633) bg_vkb2_fuc_pane_cp01_ParamLimits

0x117d,	// (0x00053633) bg_vkb2_fuc_pane_cp01

0x1d88,	// (0x0005423e) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x1d88,	// (0x0005423e) vkb2_top_cell_right_wide_pane_g1

0x117d,	// (0x00053633) bg_vkb2_fuc_pane_cp02_ParamLimits

0x117d,	// (0x00053633) bg_vkb2_fuc_pane_cp02

0x1dfc,	// (0x000542b2) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x1dfc,	// (0x000542b2) vkb2_top_cell_right_narrow_pane_g1

0xdfc3,	// (0x00060479) aid_touch_area_decrease_ParamLimits

0xdfc3,	// (0x00060479) aid_touch_area_decrease

0xdffd,	// (0x000604b3) aid_touch_area_increase_ParamLimits

0xdffd,	// (0x000604b3) aid_touch_area_increase

0xe025,	// (0x000604db) aid_touch_area_mute_ParamLimits

0xe025,	// (0x000604db) aid_touch_area_mute

0xe055,	// (0x0006050b) aid_touch_area_slider_ParamLimits

0xe055,	// (0x0006050b) aid_touch_area_slider

0xe095,	// (0x0006054b) popup_slider_window_g4_ParamLimits

0xe095,	// (0x0006054b) popup_slider_window_g4

0xe0bd,	// (0x00060573) popup_slider_window_g5_ParamLimits

0xe0bd,	// (0x00060573) popup_slider_window_g5

0xe0f1,	// (0x000605a7) popup_slider_window_g6_ParamLimits

0xe0f1,	// (0x000605a7) popup_slider_window_g6

0x8555,	// (0x0005aa0b) popup_slider_window_t2_ParamLimits

0x8555,	// (0x0005aa0b) popup_slider_window_t2

0x0001,

0xfd13,	// (0x000621c9) popup_slider_window_t_ParamLimits

0xfd13,	// (0x000621c9) popup_slider_window_t

0xe10d,	// (0x000605c3) slider_pane_ParamLimits

0xe10d,	// (0x000605c3) slider_pane

0x9238,	// (0x0005b6ee) slider_pane_g1_ParamLimits

0x9238,	// (0x0005b6ee) slider_pane_g1

0x924c,	// (0x0005b702) slider_pane_g2_ParamLimits

0x924c,	// (0x0005b702) slider_pane_g2

0x9262,	// (0x0005b718) slider_pane_g3_ParamLimits

0x9262,	// (0x0005b718) slider_pane_g3

0x0003,

0xfe2a,	// (0x000622e0) slider_pane_g_ParamLimits

0xfe2a,	// (0x000622e0) slider_pane_g

0xccff,	// (0x0005f1b5) popup_tb_float_extension_window_ParamLimits

0xccff,	// (0x0005f1b5) popup_tb_float_extension_window

0x928e,	// (0x0005b744) aid_size_cell_tb_float_ext

0xd299,	// (0x0005f74f) bg_popup_sub_window_cp28

0x929a,	// (0x0005b750) grid_tb_float_ext_pane

0x92a6,	// (0x0005b75c) cell_tb_float_ext_pane_ParamLimits

0x92a6,	// (0x0005b75c) cell_tb_float_ext_pane

0x92c2,	// (0x0005b778) cell_tb_float_ext_pane_g1

0x92cb,	// (0x0005b781) grid_highlight_pane_cp12

0xbe1b,	// (0x0005e2d1) cell_last_hwr_side_pane_ParamLimits

0xbe1b,	// (0x0005e2d1) cell_last_hwr_side_pane

0x6e54,	// (0x0005930a) cell_last_hwr_side_pane_g1

0x92d4,	// (0x0005b78a) cell_last_hwr_side_pane_g2

0x0001,

0xfe33,	// (0x000622e9) cell_last_hwr_side_pane_g

0xc2dc,	// (0x0005e792) vkb2_area_bottom_space_btn_pane_ParamLimits

0xc2dc,	// (0x0005e792) vkb2_area_bottom_space_btn_pane

0x13f8,	// (0x000538ae) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x8d92,	// (0x0005b248) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x1f62,	// (0x00054418) cell_vkb2_top_candi_pane_t1_ParamLimits

0x1f80,	// (0x00054436) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x1f80,	// (0x00054436) vkb2_area_bottom_space_btn_pane_g1

0x1fba,	// (0x00054470) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x1fba,	// (0x00054470) vkb2_area_bottom_space_btn_pane_g2

0x1ff0,	// (0x000544a6) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x1ff0,	// (0x000544a6) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe38,	// (0x000622ee) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe38,	// (0x000622ee) vkb2_area_bottom_space_btn_pane_g

0x1242,	// (0x000536f8) cel_fep_hwr_func_pane_ParamLimits

0x1242,	// (0x000536f8) cel_fep_hwr_func_pane

0xbdf0,	// (0x0005e2a6) cell_hwr_side_button_pane_ParamLimits

0xbdf0,	// (0x0005e2a6) cell_hwr_side_button_pane

0x87b6,	// (0x0005ac6c) aid_area_touch_clock_ParamLimits

0x241f,	// (0x000548d5) bg_uniindi_top_pane_ParamLimits

0x87ca,	// (0x0005ac80) uniindi_top_pane_g1_ParamLimits

0x87e0,	// (0x0005ac96) uniindi_top_pane_g2_ParamLimits

0x87ec,	// (0x0005aca2) uniindi_top_pane_g3_ParamLimits

0x87fd,	// (0x0005acb3) uniindi_top_pane_g4_ParamLimits

0xfd4b,	// (0x00062201) uniindi_top_pane_g_ParamLimits

0x880a,	// (0x0005acc0) uniindi_top_pane_t1_ParamLimits

0x241f,	// (0x000548d5) bg_vkb2_func_pane_cp01_ParamLimits

0x241f,	// (0x000548d5) bg_vkb2_func_pane_cp01

0x92dd,	// (0x0005b793) cel_fep_hwr_func_pane_g1_ParamLimits

0x92dd,	// (0x0005b793) cel_fep_hwr_func_pane_g1

0x241f,	// (0x000548d5) bg_vkb2_func_pane_cp02_ParamLimits

0x241f,	// (0x000548d5) bg_vkb2_func_pane_cp02

0x92dd,	// (0x0005b793) cell_hwr_side_button_pane_g1_ParamLimits

0x92dd,	// (0x0005b793) cell_hwr_side_button_pane_g1

0x462f,	// (0x00056ae5) status_pane_g4_ParamLimits

0x462f,	// (0x00056ae5) status_pane_g4

0x4649,	// (0x00056aff) status_pane_t1

0x6bae,	// (0x00059064) form2_midp_gauge_slider_cont_pane

0x6bb6,	// (0x0005906c) form2_midp_gauge_slider_pane_t1_ParamLimits

0xd955,	// (0x0005fe0b) form2_midp_gauge_slider_pane_t2_ParamLimits

0xd967,	// (0x0005fe1d) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb0b,	// (0x00061fc1) form2_midp_gauge_slider_pane_t_ParamLimits

0x6bec,	// (0x000590a2) form2_midp_slider_pane_ParamLimits

0x1934,	// (0x00053dea) aid_size_cell_func_vkb2_ParamLimits

0x1934,	// (0x00053dea) aid_size_cell_func_vkb2

0x927a,	// (0x0005b730) slider_pane_g4_ParamLimits

0x927a,	// (0x0005b730) slider_pane_g4

0xc33d,	// (0x0005e7f3) form2_midp_gauge_slider_pane_t2_cp01

0xc34b,	// (0x0005e801) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xc34b,	// (0x0005e801) form2_midp_gauge_slider_pane_t3_cp01

0x2065,	// (0x0005451b) form2_midp_slider_pane_cp01

0xd299,	// (0x0005f74f) navi_smil_pane

0x9316,	// (0x0005b7cc) navi_smil_pane_g1

0x931e,	// (0x0005b7d4) navi_smil_pane_t1

0x92eb,	// (0x0005b7a1) form2_midp_slider_pane_g1

0x92f4,	// (0x0005b7aa) form2_midp_slider_pane_g2

0x92fc,	// (0x0005b7b2) form2_midp_slider_pane_g3

0x92eb,	// (0x0005b7a1) form2_midp_slider_pane_g4

0xeac3,	// (0x00060f79) form2_midp_slider_pane_g5

0x0004,

0xfe41,	// (0x000622f7) form2_midp_slider_pane_g

0x202a,	// (0x000544e0) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x202a,	// (0x000544e0) vkb2_area_bottom_space_btn_pane_g4

0xcedf,	// (0x0005f395) lc0_navi_pane_ParamLimits

0xcedf,	// (0x0005f395) lc0_navi_pane

0xcf4f,	// (0x0005f405) lc0_stat_indi_pane_ParamLimits

0xcf4f,	// (0x0005f405) lc0_stat_indi_pane

0xcf64,	// (0x0005f41a) ls0_title_pane_ParamLimits

0xcf64,	// (0x0005f41a) ls0_title_pane

0x2ac8,	// (0x00054f7e) bg_popup_sub_pane_cp14_ParamLimits

0x879d,	// (0x0005ac53) list_uniindi_pane_ParamLimits

0x87a9,	// (0x0005ac5f) uniindi_top_pane_ParamLimits

0x8848,	// (0x0005acfe) list_single_uniindi_pane_g1_ParamLimits

0x885b,	// (0x0005ad11) list_single_uniindi_pane_t1_ParamLimits

0xc368,	// (0x0005e81e) lc0_stat_clock_pane_ParamLimits

0xc368,	// (0x0005e81e) lc0_stat_clock_pane

0xeacc,	// (0x00060f82) lc0_stat_indi_pane_g1_ParamLimits

0xeacc,	// (0x00060f82) lc0_stat_indi_pane_g1

0xead9,	// (0x00060f8f) lc0_stat_indi_pane_g2_ParamLimits

0xead9,	// (0x00060f8f) lc0_stat_indi_pane_g2

0x0001,

0xfe4c,	// (0x00062302) lc0_stat_indi_pane_g_ParamLimits

0xfe4c,	// (0x00062302) lc0_stat_indi_pane_g

0xc375,	// (0x0005e82b) lc0_uni_indicator_pane_ParamLimits

0xc375,	// (0x0005e82b) lc0_uni_indicator_pane

0xeae6,	// (0x00060f9c) ls0_title_pane_g1_ParamLimits

0xeae6,	// (0x00060f9c) ls0_title_pane_g1

0xeafa,	// (0x00060fb0) ls0_title_pane_t1_ParamLimits

0xeafa,	// (0x00060fb0) ls0_title_pane_t1

0xc382,	// (0x0005e838) lc0_uni_indicator_pane_g1_ParamLimits

0xc382,	// (0x0005e838) lc0_uni_indicator_pane_g1

0x9390,	// (0x0005b846) lc0_stat_clock_pane_t1

0xd299,	// (0x0005f74f) main_ai5_pane

0x939e,	// (0x0005b854) ai5_sk_pane_ParamLimits

0x939e,	// (0x0005b854) ai5_sk_pane

0xeb28,	// (0x00060fde) cell_ai5_widget_pane_ParamLimits

0xeb28,	// (0x00060fde) cell_ai5_widget_pane

0x9421,	// (0x0005b8d7) aid_size_cell_widget_grid

0x9435,	// (0x0005b8eb) bg_ai5_widget_pane_ParamLimits

0x9435,	// (0x0005b8eb) bg_ai5_widget_pane

0xebb5,	// (0x0006106b) cell_ai5_widget_pane_g2

0xebc5,	// (0x0006107b) cell_ai5_widget_pane_g3

0xebe4,	// (0x0006109a) cell_ai5_widget_pane_g4

0xebf0,	// (0x000610a6) cell_ai5_widget_pane_g5

0xebfc,	// (0x000610b2) cell_ai5_widget_pane_g6

0xec08,	// (0x000610be) cell_ai5_widget_pane_g7

0xec50,	// (0x00061106) cell_ai5_widget_pane_t1_ParamLimits

0xec50,	// (0x00061106) cell_ai5_widget_pane_t1

0xec6d,	// (0x00061123) cell_ai5_widget_pane_t2_ParamLimits

0xec6d,	// (0x00061123) cell_ai5_widget_pane_t2

0xec85,	// (0x0006113b) cell_ai5_widget_pane_t3_ParamLimits

0xec85,	// (0x0006113b) cell_ai5_widget_pane_t3

0xec9d,	// (0x00061153) cell_ai5_widget_pane_t4_ParamLimits

0xec9d,	// (0x00061153) cell_ai5_widget_pane_t4

0xecb7,	// (0x0006116d) cell_ai5_widget_pane_t5_ParamLimits

0xecb7,	// (0x0006116d) cell_ai5_widget_pane_t5

0x9580,	// (0x0005ba36) cell_ai5_widget_pane_t6_ParamLimits

0x9580,	// (0x0005ba36) cell_ai5_widget_pane_t6

0x9592,	// (0x0005ba48) cell_ai5_widget_pane_t7_ParamLimits

0x9592,	// (0x0005ba48) cell_ai5_widget_pane_t7

0xecd6,	// (0x0006118c) cell_ai5_widget_pane_t8_ParamLimits

0xecd6,	// (0x0006118c) cell_ai5_widget_pane_t8

0x0009,

0xfe66,	// (0x0006231c) cell_ai5_widget_pane_t_ParamLimits

0xfe66,	// (0x0006231c) cell_ai5_widget_pane_t

0xed22,	// (0x000611d8) grid_ai5_widget_pane

0x2ac8,	// (0x00054f7e) highlight_cell_ai5_widget_pane_ParamLimits

0x2ac8,	// (0x00054f7e) highlight_cell_ai5_widget_pane

0xed39,	// (0x000611ef) ai5_sk_left_pane

0xed43,	// (0x000611f9) ai5_sk_middle_pane

0xed4d,	// (0x00061203) ai5_sk_right_pane

0x962c,	// (0x0005bae2) bg_ai5_widget_pane_g1_ParamLimits

0x962c,	// (0x0005bae2) bg_ai5_widget_pane_g1

0x9638,	// (0x0005baee) bg_ai5_widget_pane_g2_ParamLimits

0x9638,	// (0x0005baee) bg_ai5_widget_pane_g2

0x9644,	// (0x0005bafa) bg_ai5_widget_pane_g3_ParamLimits

0x9644,	// (0x0005bafa) bg_ai5_widget_pane_g3

0x9650,	// (0x0005bb06) bg_ai5_widget_pane_g4_ParamLimits

0x9650,	// (0x0005bb06) bg_ai5_widget_pane_g4

0x965c,	// (0x0005bb12) bg_ai5_widget_pane_g5_ParamLimits

0x965c,	// (0x0005bb12) bg_ai5_widget_pane_g5

0x9668,	// (0x0005bb1e) bg_ai5_widget_pane_g6_ParamLimits

0x9668,	// (0x0005bb1e) bg_ai5_widget_pane_g6

0x9674,	// (0x0005bb2a) bg_ai5_widget_pane_g7_ParamLimits

0x9674,	// (0x0005bb2a) bg_ai5_widget_pane_g7

0x9680,	// (0x0005bb36) bg_ai5_widget_pane_g8_ParamLimits

0x9680,	// (0x0005bb36) bg_ai5_widget_pane_g8

0x968c,	// (0x0005bb42) bg_ai5_widget_pane_g9_ParamLimits

0x968c,	// (0x0005bb42) bg_ai5_widget_pane_g9

0x0008,

0xfe7b,	// (0x00062331) bg_ai5_widget_pane_g_ParamLimits

0xfe7b,	// (0x00062331) bg_ai5_widget_pane_g

0x96b3,	// (0x0005bb69) cell_shortcut_ai5_widget_pane_ParamLimits

0x96b3,	// (0x0005bb69) cell_shortcut_ai5_widget_pane

0x2261,	// (0x00054717) bg_cell_shortcut_ai5_widget_pane

0x96c5,	// (0x0005bb7b) cell_grid_ai5_widget_pane_g1

0x96ce,	// (0x0005bb84) highlight_cell_shortcut_ai5_widget_pane

0x47b6,	// (0x00056c6c) ai5_sk_left_pane_g1

0x96d6,	// (0x0005bb8c) ai5_sk_left_pane_g2

0x96de,	// (0x0005bb94) ai5_sk_left_pane_g3

0x96e6,	// (0x0005bb9c) ai5_sk_left_pane_g4

0x0003,

0xfe8e,	// (0x00062344) ai5_sk_left_pane_g

0x96ee,	// (0x0005bba4) ai5_sk_left_pane_t1

0x47be,	// (0x00056c74) ai5_sk_right_pane_g1

0x96fc,	// (0x0005bbb2) ai5_sk_right_pane_g2

0x9704,	// (0x0005bbba) ai5_sk_right_pane_g3

0x970c,	// (0x0005bbc2) ai5_sk_right_pane_g4

0x0003,

0xfe97,	// (0x0006234d) ai5_sk_right_pane_g

0x9714,	// (0x0005bbca) ai5_sk_right_pane_t1

0x47be,	// (0x00056c74) ai5_sk_middle_pane_g1

0x47b6,	// (0x00056c6c) ai5_sk_middle_pane_g2

0x47d6,	// (0x00056c8c) ai5_sk_middle_pane_g3

0x9704,	// (0x0005bbba) ai5_sk_middle_pane_g4

0x96de,	// (0x0005bb94) ai5_sk_middle_pane_g5

0x9722,	// (0x0005bbd8) ai5_sk_middle_pane_g6

0xed57,	// (0x0006120d) ai5_sk_middle_pane_g7

0x0006,

0xfea0,	// (0x00062356) ai5_sk_middle_pane_g

0xcdc9,	// (0x0005f27f) aid_touch_area_size_lc0_ParamLimits

0xcdc9,	// (0x0005f27f) aid_touch_area_size_lc0

0x1427,	// (0x000538dd) cell_hwr_candidate_pane_t1_ParamLimits

0x42e7,	// (0x0005679d) aid_touch_navi_pane

0xd06e,	// (0x0005f524) status_dt_navi_pane_ParamLimits

0xd06e,	// (0x0005f524) status_dt_navi_pane

0xd086,	// (0x0005f53c) status_dt_sta_pane_ParamLimits

0xd086,	// (0x0005f53c) status_dt_sta_pane

0xed5f,	// (0x00061215) dt_sta_controll_pane

0xed6c,	// (0x00061222) dt_sta_indi_pane

0xed79,	// (0x0006122f) dt_sta_title_pane

0x241f,	// (0x000548d5) bg_dt_sta_indi_pane_ParamLimits

0x241f,	// (0x000548d5) bg_dt_sta_indi_pane

0xed8b,	// (0x00061241) dt_sta_battery_pane

0xed93,	// (0x00061249) dt_sta_indi_pane_g1

0xed9c,	// (0x00061252) dt_sta_indi_pane_g2

0xeda5,	// (0x0006125b) dt_sta_indi_pane_g3

0x0002,

0xfeaf,	// (0x00062365) dt_sta_indi_pane_g

0xedae,	// (0x00061264) dt_sta_signal_pane

0x2ac8,	// (0x00054f7e) bg_dt_sta_title_pane_ParamLimits

0x2ac8,	// (0x00054f7e) bg_dt_sta_title_pane

0xedb7,	// (0x0006126d) dt_sta_title_pane_g1

0xedbf,	// (0x00061275) dt_sta_title_pane_t1_ParamLimits

0xedbf,	// (0x00061275) dt_sta_title_pane_t1

0xd299,	// (0x0005f74f) bg_dt_sta_control_pane

0xedd4,	// (0x0006128a) dt_sta_controll_pane_g1

0xeddd,	// (0x00061293) bg_dt_sta_title_pane_g1

0xede6,	// (0x0006129c) bg_dt_sta_title_pane_g2

0xedef,	// (0x000612a5) bg_dt_sta_title_pane_g3

0x0002,

0xfeb6,	// (0x0006236c) bg_dt_sta_title_pane_g

0x6e54,	// (0x0005930a) bg_dt_sta_indi_pane_g1

0x97d0,	// (0x0005bc86) dt_sta_signal_pane_g1

0x97d8,	// (0x0005bc8e) dt_sta_signal_pane_g2

0x0001,

0xfebd,	// (0x00062373) dt_sta_signal_pane_g

0x97e0,	// (0x0005bc96) dt_sta_battery_pane_g1

0x97e9,	// (0x0005bc9f) dt_sta_battery_pane_t1

0x6e54,	// (0x0005930a) bg_dt_sta_control_pane_g1

0x33f2,	// (0x000558a8) fep_china_uni_eep_pane

0x33fa,	// (0x000558b0) fep_china_uni_entry_pane_ParamLimits

0x340a,	// (0x000558c0) popup_fep_china_uni_window_g1_ParamLimits

0x341a,	// (0x000558d0) popup_fep_china_uni_window_g2_ParamLimits

0x341a,	// (0x000558d0) popup_fep_china_uni_window_g2

0x0001,

0xf73a,	// (0x00061bf0) popup_fep_china_uni_window_g_ParamLimits

0xf73a,	// (0x00061bf0) popup_fep_china_uni_window_g

0x97f8,	// (0x0005bcae) fep_china_uni_eep_pane_g1

0x9800,	// (0x0005bcb6) fep_china_uni_eep_pane_t1

0x930d,	// (0x0005b7c3) aid_touch_area_size_smil_player

0x443f,	// (0x000568f5) lc0_clock_pane

0x463d,	// (0x00056af3) status_pane_g5_ParamLimits

0x463d,	// (0x00056af3) status_pane_g5

0xc829,	// (0x0005ecdf) popup_keymap_window

0x45fb,	// (0x00056ab1) status_icon_pane

0xebc5,	// (0x0006107b) cell_ai5_widget_pane_g3_ParamLimits

0xebe4,	// (0x0006109a) cell_ai5_widget_pane_g4_ParamLimits

0xebf0,	// (0x000610a6) cell_ai5_widget_pane_g5_ParamLimits

0xec14,	// (0x000610ca) cell_ai5_widget_pane_g8_ParamLimits

0xec14,	// (0x000610ca) cell_ai5_widget_pane_g8

0xec28,	// (0x000610de) cell_ai5_widget_pane_g9_ParamLimits

0xec28,	// (0x000610de) cell_ai5_widget_pane_g9

0xec3c,	// (0x000610f2) cell_ai5_widget_pane_g10_ParamLimits

0xec3c,	// (0x000610f2) cell_ai5_widget_pane_g10

0x980f,	// (0x0005bcc5) status_icon_pane_g1

0xd299,	// (0x0005f74f) bg_popup_sub_pane_cp13

0x9817,	// (0x0005bccd) popup_keymap_window_t1

0xc60b,	// (0x0005eac1) control_pane_g6_ParamLimits

0xc60b,	// (0x0005eac1) control_pane_g6

0xc618,	// (0x0005eace) control_pane_g7_ParamLimits

0xc618,	// (0x0005eace) control_pane_g7

0xc625,	// (0x0005eadb) control_pane_g8_ParamLimits

0xc625,	// (0x0005eadb) control_pane_g8

0xed5f,	// (0x00061215) dt_sta_controll_pane_ParamLimits

0xed6c,	// (0x00061222) dt_sta_indi_pane_ParamLimits

0xed79,	// (0x0006122f) dt_sta_title_pane_ParamLimits

0x2954,	// (0x00054e0a) aid_size_touch_scroll_bar_cale

0xf1fd,	// (0x000616b3) popup_discreet_window_ParamLimits

0xf1fd,	// (0x000616b3) popup_discreet_window

0xae69,	// (0x0005d31f) popup_sk_window

0x4e54,	// (0x0005730a) bg_popup_sub_pane_cp28_ParamLimits

0x4e54,	// (0x0005730a) bg_popup_sub_pane_cp28

0x9825,	// (0x0005bcdb) popup_discreet_window_g1_ParamLimits

0x9825,	// (0x0005bcdb) popup_discreet_window_g1

0x9845,	// (0x0005bcfb) popup_discreet_window_t1_ParamLimits

0x9845,	// (0x0005bcfb) popup_discreet_window_t1

0x9863,	// (0x0005bd19) popup_discreet_window_t2_ParamLimits

0x9863,	// (0x0005bd19) popup_discreet_window_t2

0x0002,

0xfec2,	// (0x00062378) popup_discreet_window_t_ParamLimits

0xfec2,	// (0x00062378) popup_discreet_window_t

0x209b,	// (0x00054551) popup_sk_window_g1

0x20a5,	// (0x0005455b) popup_sk_window_g2

0x0001,

0xfec9,	// (0x0006237f) popup_sk_window_g

0x98b5,	// (0x0005bd6b) popup_sk_window_t1

0x98c3,	// (0x0005bd79) popup_sk_window_t1_copy1

0xebb5,	// (0x0006106b) cell_ai5_widget_pane_g2_ParamLimits

0xece8,	// (0x0006119e) cell_ai5_widget_pane_t9_ParamLimits

0xece8,	// (0x0006119e) cell_ai5_widget_pane_t9

0xd299,	// (0x0005f74f) main_fep_fshwr2_pane

0xedf8,	// (0x000612ae) aid_fshwr2_btn_pane

0xee00,	// (0x000612b6) aid_fshwr2_syb_pane

0xee08,	// (0x000612be) aid_fshwr2_txt_pane

0xee10,	// (0x000612c6) fshwr2_func_candi_pane

0xee1a,	// (0x000612d0) fshwr2_hwr_syb_pane

0xee26,	// (0x000612dc) fshwr2_icf_pane

0xd299,	// (0x0005f74f) fshwr2_icf_bg_pane

0xee30,	// (0x000612e6) fshwr2_icf_pane_t1_ParamLimits

0xee30,	// (0x000612e6) fshwr2_icf_pane_t1

0x6e54,	// (0x0005930a) fshwr2_func_candi_pane_g1

0x9936,	// (0x0005bdec) fshwr2_func_candi_row_pane_ParamLimits

0x9936,	// (0x0005bdec) fshwr2_func_candi_row_pane

0xee48,	// (0x000612fe) cell_fshwr2_syb_pane_ParamLimits

0xee48,	// (0x000612fe) cell_fshwr2_syb_pane

0x70de,	// (0x00059594) fshwr2_hwr_syb_pane_g1_ParamLimits

0x70de,	// (0x00059594) fshwr2_hwr_syb_pane_g1

0xd299,	// (0x0005f74f) bg_popup_call_pane_cp01

0x9961,	// (0x0005be17) fshwr2_func_candi_cell_pane_ParamLimits

0x9961,	// (0x0005be17) fshwr2_func_candi_cell_pane

0x9993,	// (0x0005be49) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x9993,	// (0x0005be49) fshwr2_func_candi_cell_bg_pane

0x99ad,	// (0x0005be63) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x99ad,	// (0x0005be63) fshwr2_func_candi_cell_pane_g1

0x99cd,	// (0x0005be83) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x99cd,	// (0x0005be83) fshwr2_func_candi_cell_pane_t1

0xd299,	// (0x0005f74f) bg_button_pane_cp08

0x38f4,	// (0x00055daa) cell_fshwr2_syb_bg_pane

0xee61,	// (0x00061317) cell_fshwr2_syb_bg_pane_g1

0xee69,	// (0x0006131f) cell_fshwr2_syb_bg_pane_t1

0x2ac8,	// (0x00054f7e) main_tmo_pane

0xd470,	// (0x0005f926) uni_indicator_pane_g1_ParamLimits

0xd485,	// (0x0005f93b) uni_indicator_pane_g2_ParamLimits

0xd49a,	// (0x0005f950) uni_indicator_pane_g3_ParamLimits

0xd4b0,	// (0x0005f966) uni_indicator_pane_g4_ParamLimits

0xd4b0,	// (0x0005f966) uni_indicator_pane_g4

0xd4c4,	// (0x0005f97a) uni_indicator_pane_g5_ParamLimits

0xd4c4,	// (0x0005f97a) uni_indicator_pane_g5

0xd4d8,	// (0x0005f98e) uni_indicator_pane_g6_ParamLimits

0xd4d8,	// (0x0005f98e) uni_indicator_pane_g6

0xf932,	// (0x00061de8) uni_indicator_pane_g_ParamLimits

0xdf93,	// (0x00060449) popup_tmo_note_window_ParamLimits

0xdf93,	// (0x00060449) popup_tmo_note_window

0xd299,	// (0x0005f74f) fshwr2_bg_pane

0x99be,	// (0x0005be74) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x99be,	// (0x0005be74) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfece,	// (0x00062384) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfece,	// (0x00062384) fshwr2_func_candi_cell_pane_g

0x6e54,	// (0x0005930a) bg_popup_window_pane_cp01

0x99f7,	// (0x0005bead) bg_popup_window_pane_g1_cp01

0x9a00,	// (0x0005beb6) bg_popup_window_pane_cp22_ParamLimits

0x9a00,	// (0x0005beb6) bg_popup_window_pane_cp22

0x9a0e,	// (0x0005bec4) listscroll_tmo_link_pane_ParamLimits

0x9a0e,	// (0x0005bec4) listscroll_tmo_link_pane

0x9a4e,	// (0x0005bf04) popup_tmo_note_window_g1_ParamLimits

0x9a4e,	// (0x0005bf04) popup_tmo_note_window_g1

0x9a5b,	// (0x0005bf11) tmo_note_info_pane_ParamLimits

0x9a5b,	// (0x0005bf11) tmo_note_info_pane

0xee78,	// (0x0006132e) list_tmo_note_info_pane_g1_ParamLimits

0xee78,	// (0x0006132e) list_tmo_note_info_pane_g1

0x9a8c,	// (0x0005bf42) list_tmo_note_info_pane_g2_ParamLimits

0x9a8c,	// (0x0005bf42) list_tmo_note_info_pane_g2

0x0001,

0xfed3,	// (0x00062389) list_tmo_note_info_pane_g_ParamLimits

0xfed3,	// (0x00062389) list_tmo_note_info_pane_g

0x9aa8,	// (0x0005bf5e) list_tmo_note_info_text_pane_ParamLimits

0x9aa8,	// (0x0005bf5e) list_tmo_note_info_text_pane

0x9b2d,	// (0x0005bfe3) list_tmo_link_pane

0x9b3a,	// (0x0005bff0) scroll_pane_cp20

0x9b47,	// (0x0005bffd) list_single_tmo_link_pane_ParamLimits

0x9b47,	// (0x0005bffd) list_single_tmo_link_pane

0x9b57,	// (0x0005c00d) list_single_tmo_link_pane_t1

0x9b65,	// (0x0005c01b) list_tmo_note_info_text_pane_t1_ParamLimits

0x9b65,	// (0x0005c01b) list_tmo_note_info_text_pane_t1

0xb88f,	// (0x0005dd45) aid_size_touch_scroll_bar_cp01_ParamLimits

0xb88f,	// (0x0005dd45) aid_size_touch_scroll_bar_cp01

0xb7be,	// (0x0005dc74) aid_size_touch_slider_marker

0xae59,	// (0x0005d30f) popup_settings_window_ParamLimits

0xae59,	// (0x0005d30f) popup_settings_window

0x09db,	// (0x00052e91) popup_candi_list_indi_window

0x42e7,	// (0x0005679d) aid_touch_navi_pane_ParamLimits

0x186b,	// (0x00053d21) rs_clock_indi_pane

0x1874,	// (0x00053d2a) sctrl_sk_bottom_pane_ParamLimits

0x1885,	// (0x00053d3b) sctrl_sk_top_pane_ParamLimits

0x1986,	// (0x00053e3c) popup_fep_tooltip_window

0x9421,	// (0x0005b8d7) aid_size_cell_widget_grid_ParamLimits

0xeba9,	// (0x0006105f) cell_ai5_widget_pane_g1_ParamLimits

0xeba9,	// (0x0006105f) cell_ai5_widget_pane_g1

0xebfc,	// (0x000610b2) cell_ai5_widget_pane_g6_ParamLimits

0xec08,	// (0x000610be) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe51,	// (0x00062307) cell_ai5_widget_pane_g_ParamLimits

0xfe51,	// (0x00062307) cell_ai5_widget_pane_g

0xed0c,	// (0x000611c2) cell_ai5_widget_pane_t10_ParamLimits

0xed0c,	// (0x000611c2) cell_ai5_widget_pane_t10

0xed22,	// (0x000611d8) grid_ai5_widget_pane_ParamLimits

0x9698,	// (0x0005bb4e) cell_contacts_ai5_widget_pane_ParamLimits

0x9698,	// (0x0005bb4e) cell_contacts_ai5_widget_pane

0x9878,	// (0x0005bd2e) popup_discreet_window_t3_ParamLimits

0x9878,	// (0x0005bd2e) popup_discreet_window_t3

0x9907,	// (0x0005bdbd) popup_fshwr2_char_preview_window_ParamLimits

0x9907,	// (0x0005bdbd) popup_fshwr2_char_preview_window

0xee8f,	// (0x00061345) tmo_note_info_pane_t1

0xeea4,	// (0x0006135a) tmo_note_info_pane_t2

0xeebd,	// (0x00061373) tmo_note_info_pane_t3

0x9b09,	// (0x0005bfbf) tmo_note_info_pane_t4

0x9b1b,	// (0x0005bfd1) tmo_note_info_pane_t5

0x0004,

0xfed8,	// (0x0006238e) tmo_note_info_pane_t

0x9b2d,	// (0x0005bfe3) list_tmo_link_pane_ParamLimits

0x9b3a,	// (0x0005bff0) scroll_pane_cp20_ParamLimits

0xd299,	// (0x0005f74f) bg_popup_fep_char_preview_window_cp01

0x9b7e,	// (0x0005c034) popup_fshwr2_char_preview_window_t1

0x9b8c,	// (0x0005c042) popup_candi_list_indi_window_g1

0x9b95,	// (0x0005c04b) bg_cell_contacts_ai5_widget_pane

0x9ba1,	// (0x0005c057) cell_contacts_ai5_widget_pane_g1

0x9bb5,	// (0x0005c06b) cell_contacts_ai5_widget_pane_g2

0x9bc4,	// (0x0005c07a) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfee3,	// (0x00062399) cell_contacts_ai5_widget_pane_g

0x9bd7,	// (0x0005c08d) cell_contacts_ai5_widget_pane_t1

0x2ac8,	// (0x00054f7e) highlight_cell_shortcut_ai5_widget_pane_cp01

0xef37,	// (0x000613ed) settings_container_pane

0x38f4,	// (0x00055daa) listscroll_set_pane_copy1

0x6558,	// (0x00058a0e) scroll_pane_cp121_copy1

0x9c5d,	// (0x0005c113) set_content_pane_copy1

0xef43,	// (0x000613f9) aid_height_set_list_copy1_ParamLimits

0xef43,	// (0x000613f9) aid_height_set_list_copy1

0x5be7,	// (0x0005809d) aid_size_parent_copy1_ParamLimits

0x5be7,	// (0x0005809d) aid_size_parent_copy1

0xef4f,	// (0x00061405) button_value_adjust_pane_cp6_copy1_ParamLimits

0xef4f,	// (0x00061405) button_value_adjust_pane_cp6_copy1

0x3c72,	// (0x00056128) list_highlight_pane_cp2_copy1_ParamLimits

0x3c72,	// (0x00056128) list_highlight_pane_cp2_copy1

0xef63,	// (0x00061419) list_set_pane_copy1_ParamLimits

0xef63,	// (0x00061419) list_set_pane_copy1

0xeed2,	// (0x00061388) main_pane_set_t1_copy1_ParamLimits

0xeed2,	// (0x00061388) main_pane_set_t1_copy1

0xef0c,	// (0x000613c2) main_pane_set_t2_copy1_ParamLimits

0xef0c,	// (0x000613c2) main_pane_set_t2_copy1

0xf02a,	// (0x000614e0) main_pane_set_t3_copy1

0xf038,	// (0x000614ee) main_pane_set_t4_copy1

0xef2b,	// (0x000613e1) set_content_pane_g1_copy1_ParamLimits

0xef2b,	// (0x000613e1) set_content_pane_g1_copy1

0xf046,	// (0x000614fc) setting_code_pane_copy1

0x9d72,	// (0x0005c228) setting_slider_graphic_pane_copy1

0x9d72,	// (0x0005c228) setting_slider_pane_copy1

0x9d72,	// (0x0005c228) setting_text_pane_copy1

0x9d7c,	// (0x0005c232) setting_volume_pane_copy1

0xf050,	// (0x00061506) settings_code_pane_cp2_copy1

0xf058,	// (0x0006150e) settings_code_pane_cp_copy1_ParamLimits

0xf058,	// (0x0006150e) settings_code_pane_cp_copy1

0xf2d4,	// (0x0006178a) volume_set_pane_copy1

0xf2e0,	// (0x00061796) volume_set_pane_g10_copy1

0xf2ec,	// (0x000617a2) volume_set_pane_g1_copy1

0xf2f6,	// (0x000617ac) volume_set_pane_g2_copy1

0xf300,	// (0x000617b6) volume_set_pane_g3_copy1

0xf30a,	// (0x000617c0) volume_set_pane_g4_copy1

0xf314,	// (0x000617ca) volume_set_pane_g5_copy1

0xf31e,	// (0x000617d4) volume_set_pane_g6_copy1

0xf328,	// (0x000617de) volume_set_pane_g7_copy1

0xf332,	// (0x000617e8) volume_set_pane_g8_copy1

0xf33c,	// (0x000617f2) volume_set_pane_g9_copy1

0x2195,	// (0x0005464b) bg_set_opt_pane_cp_copy1_ParamLimits

0x2195,	// (0x0005464b) bg_set_opt_pane_cp_copy1

0x9e13,	// (0x0005c2c9) setting_slider_pane_t1_copy1_ParamLimits

0x9e13,	// (0x0005c2c9) setting_slider_pane_t1_copy1

0xf346,	// (0x000617fc) setting_slider_pane_t2_copy1_ParamLimits

0xf346,	// (0x000617fc) setting_slider_pane_t2_copy1

0xf360,	// (0x00061816) setting_slider_pane_t3_copy1_ParamLimits

0xf360,	// (0x00061816) setting_slider_pane_t3_copy1

0xf378,	// (0x0006182e) slider_set_pane_copy1_ParamLimits

0xf378,	// (0x0006182e) slider_set_pane_copy1

0x2b2f,	// (0x00054fe5) set_opt_bg_pane_g1_copy2

0x2b37,	// (0x00054fed) set_opt_bg_pane_g2_copy2

0x9e79,	// (0x0005c32f) set_opt_bg_pane_g3_copy2

0x2b47,	// (0x00054ffd) set_opt_bg_pane_g4_copy2

0x2b4f,	// (0x00055005) set_opt_bg_pane_g5_copy2

0x2b57,	// (0x0005500d) set_opt_bg_pane_g6_copy2

0xf38e,	// (0x00061844) set_opt_bg_pane_g7_copy2

0x9e8d,	// (0x0005c343) set_opt_bg_pane_g8_copy2

0x9e97,	// (0x0005c34d) set_opt_bg_pane_g9_copy2

0x9ea1,	// (0x0005c357) aid_size_touch_slider_mark_copy1_ParamLimits

0x9ea1,	// (0x0005c357) aid_size_touch_slider_mark_copy1

0x9eb5,	// (0x0005c36b) slider_set_pane_g1_copy1

0x9ebe,	// (0x0005c374) slider_set_pane_g2_copy1

0x6d35,	// (0x000591eb) slider_set_pane_g3_copy1_ParamLimits

0x6d35,	// (0x000591eb) slider_set_pane_g3_copy1

0x6d49,	// (0x000591ff) slider_set_pane_g4_copy1_ParamLimits

0x6d49,	// (0x000591ff) slider_set_pane_g4_copy1

0x6d61,	// (0x00059217) slider_set_pane_g5_copy1_ParamLimits

0x6d61,	// (0x00059217) slider_set_pane_g5_copy1

0x6d35,	// (0x000591eb) slider_set_pane_g6_copy1_ParamLimits

0x6d35,	// (0x000591eb) slider_set_pane_g6_copy1

0xf398,	// (0x0006184e) slider_set_pane_g7_copy1_ParamLimits

0xf398,	// (0x0006184e) slider_set_pane_g7_copy1

0xd2ad,	// (0x0005f763) bg_set_opt_pane_cp2_copy1

0x9edc,	// (0x0005c392) setting_slider_graphic_pane_g1_copy1

0xf3ae,	// (0x00061864) setting_slider_graphic_pane_t1_copy1

0xf3be,	// (0x00061874) setting_slider_graphic_pane_t2_copy1

0xf3ce,	// (0x00061884) slider_set_pane_cp_copy1

0x9f15,	// (0x0005c3cb) input_focus_pane_cp1_copy1

0x9f1e,	// (0x0005c3d4) list_set_text_pane_copy1

0x9f26,	// (0x0005c3dc) setting_text_pane_g1_copy1

0xf239,	// (0x000616ef) set_text_pane_t1_copy1

0x9f15,	// (0x0005c3cb) input_focus_pane_cp2_copy1

0x9f26,	// (0x0005c3dc) setting_code_pane_g1_copy1

0xf3d6,	// (0x0006188c) setting_code_pane_t1_copy1

0xf3e4,	// (0x0006189a) list_set_graphic_pane_copy1

0xd2ad,	// (0x0005f763) bg_set_opt_pane_cp4_copy1

0xc517,	// (0x0005e9cd) list_set_graphic_pane_g1_copy1_ParamLimits

0xc517,	// (0x0005e9cd) list_set_graphic_pane_g1_copy1

0xf3f6,	// (0x000618ac) list_set_graphic_pane_g2_copy1

0xc52f,	// (0x0005e9e5) list_set_graphic_pane_t1_copy1_ParamLimits

0xc52f,	// (0x0005e9e5) list_set_graphic_pane_t1_copy1

0x6e54,	// (0x0005930a) rs_clock_indi_pane_g1

0x9f57,	// (0x0005c40d) rs_clock_indi_pane_t1

0x9f65,	// (0x0005c41b) rs_indi_pane

0x9f6d,	// (0x0005c423) rs_indi_pane_g1

0x9f76,	// (0x0005c42c) rs_indi_pane_g2

0x9f7f,	// (0x0005c435) rs_indi_pane_g3

0x0002,

0xfeea,	// (0x000623a0) rs_indi_pane_g

0x38f4,	// (0x00055daa) bg_popup_preview_window_pane_cp03

0x9f88,	// (0x0005c43e) popup_fep_tooltip_window_t1

0x7afa,	// (0x00059fb0) popup_note2_window_g2_ParamLimits

0x7afa,	// (0x00059fb0) popup_note2_window_g2

0x0001,

0xfc83,	// (0x00062139) popup_note2_window_g_ParamLimits

0xfc83,	// (0x00062139) popup_note2_window_g

0x8023,	// (0x0005a4d9) bg_popup_sub_pane_cp11_ParamLimits

0x8030,	// (0x0005a4e6) cell_ai3_links_pane_g1_ParamLimits

0x8047,	// (0x0005a4fd) cell_ai3_links_pane_t1

0xf239,	// (0x000616ef) set_text_pane_t1_copy1_ParamLimits

0x3801,	// (0x00055cb7) cell_graphic_popup_pane_cp2_ParamLimits

0x3801,	// (0x00055cb7) cell_graphic_popup_pane_cp2

0x9f96,	// (0x0005c44c) cell_graphic_popup_pane_g1_cp2

0x2767,	// (0x00054c1d) cell_graphic_popup_pane_g2_cp2

0x9f9e,	// (0x0005c454) cell_graphic_popup_pane_g3_cp2

0x9fa6,	// (0x0005c45c) cell_graphic_popup_pane_t2_cp2

0x2778,	// (0x00054c2e) grid_highlight_pane_cp3_cp2

0x3049,	// (0x000554ff) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x2ac8,	// (0x00054f7e) main_tmo_pane_ParamLimits

0xdf87,	// (0x0006043d) popup_tmo_big_image_note_window

0xeb99,	// (0x0006104f) cell_ai5_widget_list_pane

0xeba1,	// (0x00061057) cell_ai5_widget_lrg_icon_pane

0xee8f,	// (0x00061345) tmo_note_info_pane_t1_ParamLimits

0xeea4,	// (0x0006135a) tmo_note_info_pane_t2_ParamLimits

0xeebd,	// (0x00061373) tmo_note_info_pane_t3_ParamLimits

0x9b09,	// (0x0005bfbf) tmo_note_info_pane_t4_ParamLimits

0x9b1b,	// (0x0005bfd1) tmo_note_info_pane_t5_ParamLimits

0xfed8,	// (0x0006238e) tmo_note_info_pane_t_ParamLimits

0xef37,	// (0x000613ed) settings_container_pane_ParamLimits

0x9f0d,	// (0x0005c3c3) indicator_popup_pane_cp5

0x9f0d,	// (0x0005c3c3) indicator_popup_pane_cp6

0xf3e4,	// (0x0006189a) list_set_graphic_pane_copy1_ParamLimits

0xd299,	// (0x0005f74f) bg_popup_window_pane_cp23

0x9fb4,	// (0x0005c46a) popup_tmo_big_image_note_window_g1

0x9fc0,	// (0x0005c476) popup_tmo_big_image_note_window_t1

0x9fd0,	// (0x0005c486) popup_tmo_big_image_note_window_t2

0x9fe0,	// (0x0005c496) popup_tmo_big_image_note_window_t3

0x0002,

0xfef1,	// (0x000623a7) popup_tmo_big_image_note_window_t

0xf3fe,	// (0x000618b4) cell_ai5_widget_lrg_icon_pane_g1

0xf406,	// (0x000618bc) cell_ai5_widget_lrg_icon_pane_t1

0xf414,	// (0x000618ca) cell_ai5_widget_list_row_pane_ParamLimits

0xf414,	// (0x000618ca) cell_ai5_widget_list_row_pane

0xf42d,	// (0x000618e3) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf42d,	// (0x000618e3) cell_ai5_widget_list_row_pane_g1

0xf43a,	// (0x000618f0) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf43a,	// (0x000618f0) cell_ai5_widget_list_row_pane_t1

0xf452,	// (0x00061908) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf452,	// (0x00061908) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfef8,	// (0x000623ae) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfef8,	// (0x000623ae) cell_ai5_widget_list_row_pane_t

0xf120,	// (0x000615d6) main_fep_vtchi_ss_pane

0xa056,	// (0x0005c50c) popup_fep_char_pre_window

0xa05e,	// (0x0005c514) popup_fep_ituss_window

0xa07f,	// (0x0005c535) popup_fep_vkbss_window

0xa0a0,	// (0x0005c556) grid_vkbss_keypad_pane_ParamLimits

0xa0a0,	// (0x0005c556) grid_vkbss_keypad_pane

0xa0b0,	// (0x0005c566) ituss_keypad_pane

0xa0c8,	// (0x0005c57e) aid_vkbss_key_offset_ParamLimits

0xa0c8,	// (0x0005c57e) aid_vkbss_key_offset

0xa0d4,	// (0x0005c58a) cell_vkbss_key_pane_ParamLimits

0xa0d4,	// (0x0005c58a) cell_vkbss_key_pane

0xa0ea,	// (0x0005c5a0) bg_cell_vkbss_key_g1_ParamLimits

0xa0ea,	// (0x0005c5a0) bg_cell_vkbss_key_g1

0xa0f6,	// (0x0005c5ac) cell_vkbss_key_3p_pane_ParamLimits

0xa0f6,	// (0x0005c5ac) cell_vkbss_key_3p_pane

0xa110,	// (0x0005c5c6) cell_vkbss_key_g1_ParamLimits

0xa110,	// (0x0005c5c6) cell_vkbss_key_g1

0xa12a,	// (0x0005c5e0) cell_vkbss_key_t1_ParamLimits

0xa12a,	// (0x0005c5e0) cell_vkbss_key_t1

0xa155,	// (0x0005c60b) cell_ituss_key_pane_ParamLimits

0xa155,	// (0x0005c60b) cell_ituss_key_pane

0xa165,	// (0x0005c61b) bg_cell_ituss_key_g1_ParamLimits

0xa165,	// (0x0005c61b) bg_cell_ituss_key_g1

0xa171,	// (0x0005c627) cell_ituss_key_pane_g1_ParamLimits

0xa171,	// (0x0005c627) cell_ituss_key_pane_g1

0xa17d,	// (0x0005c633) cell_ituss_key_pane_g2_ParamLimits

0xa17d,	// (0x0005c633) cell_ituss_key_pane_g2

0x0001,

0xfefd,	// (0x000623b3) cell_ituss_key_pane_g_ParamLimits

0xfefd,	// (0x000623b3) cell_ituss_key_pane_g

0xa196,	// (0x0005c64c) cell_ituss_key_t1_ParamLimits

0xa196,	// (0x0005c64c) cell_ituss_key_t1

0xa1c4,	// (0x0005c67a) cell_ituss_key_t2_ParamLimits

0xa1c4,	// (0x0005c67a) cell_ituss_key_t2

0xa1f5,	// (0x0005c6ab) cell_ituss_key_t3_ParamLimits

0xa1f5,	// (0x0005c6ab) cell_ituss_key_t3

0xa226,	// (0x0005c6dc) cell_ituss_key_t4_ParamLimits

0xa226,	// (0x0005c6dc) cell_ituss_key_t4

0x0003,

0xff02,	// (0x000623b8) cell_ituss_key_t_ParamLimits

0xff02,	// (0x000623b8) cell_ituss_key_t

0xa257,	// (0x0005c70d) cell_vkbss_key_3p_pane_g1

0xa25f,	// (0x0005c715) cell_vkbss_key_3p_pane_g2

0xa267,	// (0x0005c71d) cell_vkbss_key_3p_pane_g3

0x0002,

0xff0b,	// (0x000623c1) cell_vkbss_key_3p_pane_g

0xd299,	// (0x0005f74f) bg_popup_fep_char_preview_window_cp02

0xa26f,	// (0x0005c725) popup_fep_char_pre_window_t1

0xeb8f,	// (0x00061045) main_ai5_sk_pane

0x9b95,	// (0x0005c04b) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x9ba1,	// (0x0005c057) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x9bb5,	// (0x0005c06b) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x9bc4,	// (0x0005c07a) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfee3,	// (0x00062399) cell_contacts_ai5_widget_pane_g_ParamLimits

0x9bd7,	// (0x0005c08d) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x2ac8,	// (0x00054f7e) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf464,	// (0x0006191a) main_ai5_sk_pane_g1

0x4c8c,	// (0x00057142) popup_query_code_window_g1

0xa074,	// (0x0005c52a) popup_fep_vkb_icf_pane

0xa08a,	// (0x0005c540) popup_fep_vtchi_icf_pane

0x2ac8,	// (0x00054f7e) bg_icf_pane

0xa296,	// (0x0005c74c) list_vkb_icf_pane

0x2ac8,	// (0x00054f7e) bg_icf_pane_cp01

0xa2ae,	// (0x0005c764) vtchi_icf_list_pane

0xa2be,	// (0x0005c774) list_vkb_icf_pane_t1_ParamLimits

0xa2be,	// (0x0005c774) list_vkb_icf_pane_t1

0xa2d5,	// (0x0005c78b) vtchi_icf_list_pane_t1_ParamLimits

0xa2d5,	// (0x0005c78b) vtchi_icf_list_pane_t1

0xa05e,	// (0x0005c514) popup_fep_ituss_window_ParamLimits

0xa08a,	// (0x0005c540) popup_fep_vtchi_icf_pane_ParamLimits

0xa0b0,	// (0x0005c566) ituss_keypad_pane_ParamLimits

0xa0bf,	// (0x0005c575) ituss_sks_pane

0x2ac8,	// (0x00054f7e) bg_icf_pane_ParamLimits

0xa287,	// (0x0005c73d) icf_edit_indi_pane_ParamLimits

0xa287,	// (0x0005c73d) icf_edit_indi_pane

0xa296,	// (0x0005c74c) list_vkb_icf_pane_ParamLimits

0x2ac8,	// (0x00054f7e) bg_icf_pane_cp01_ParamLimits

0xa2a2,	// (0x0005c758) icf_edit_indi_pane_cp01_ParamLimits

0xa2a2,	// (0x0005c758) icf_edit_indi_pane_cp01

0xa2b6,	// (0x0005c76c) vtchi_query_pane

0x70de,	// (0x00059594) icf_edit_indi_pane_g1_ParamLimits

0x70de,	// (0x00059594) icf_edit_indi_pane_g1

0xa2ee,	// (0x0005c7a4) icf_edit_indi_pane_g2_ParamLimits

0xa2ee,	// (0x0005c7a4) icf_edit_indi_pane_g2

0x0001,

0xff12,	// (0x000623c8) icf_edit_indi_pane_g_ParamLimits

0xff12,	// (0x000623c8) icf_edit_indi_pane_g

0xa2fa,	// (0x0005c7b0) icf_edit_indi_pane_t1

0xa308,	// (0x0005c7be) bg_input_focus_pane_cp042

0x294b,	// (0x00054e01) vtchi_button_pane

0xa311,	// (0x0005c7c7) vtchi_query_pane_t1

0xa31f,	// (0x0005c7d5) vtchi_query_pane_t2

0xa32d,	// (0x0005c7e3) vtchi_query_pane_t3

0x0002,

0xff17,	// (0x000623cd) vtchi_query_pane_t

0xd299,	// (0x0005f74f) bg_button_pane_cp13

0xa33b,	// (0x0005c7f1) vtchi_button_pane_g1

0x8892,	// (0x0005ad48) ituss_sks_pane_g1

0xa343,	// (0x0005c7f9) ituss_sks_pane_g2

0x0001,

0xff1e,	// (0x000623d4) ituss_sks_pane_g

0xa34c,	// (0x0005c802) ituss_sks_pane_t1

0xa35a,	// (0x0005c810) ituss_sks_pane_t2

0x0001,

0xff23,	// (0x000623d9) ituss_sks_pane_t

0x68b9,	// (0x00058d6f) indicator_nsta_pane_cp_g1

0x68c2,	// (0x00058d78) indicator_nsta_pane_cp_g2

0x68ca,	// (0x00058d80) indicator_nsta_pane_cp_g3

0x68d2,	// (0x00058d88) indicator_nsta_pane_cp_g4

0x68da,	// (0x00058d90) indicator_nsta_pane_cp_g5

0x68e2,	// (0x00058d98) indicator_nsta_pane_cp_g6

0x0005,

0xfac1,	// (0x00061f77) indicator_nsta_pane_cp_g

0xe9ae,	// (0x00060e64) cell_graphic2_pane_t2_ParamLimits

0xe9ae,	// (0x00060e64) cell_graphic2_pane_t2

0x0001,

0xfdda,	// (0x00062290) cell_graphic2_pane_t_ParamLimits

0xfdda,	// (0x00062290) cell_graphic2_pane_t

0xe9e4,	// (0x00060e9a) cell_graphic2_control_pane_t1
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

} // end of namespace AknLayoutScalable_Abrw_pvl4_av_vga4_lsc_tch_Large

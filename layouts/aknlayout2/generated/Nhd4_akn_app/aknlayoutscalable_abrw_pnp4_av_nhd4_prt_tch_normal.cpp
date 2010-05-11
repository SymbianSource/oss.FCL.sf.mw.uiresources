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

#include "aknlayoutscalable_abrw_pnp4_av_nhd4_prt_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnp4_av_nhd4_prt_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x0000caf8 };

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
0x7977,	// (0x0001446f) Screen

0x7983,	// (0x0001447b) application_window_ParamLimits

0x7983,	// (0x0001447b) application_window

0x3be4,	// (0x000106dc) screen_g1

0x5489,	// (0x00011f81) area_bottom_pane_ParamLimits

0x5489,	// (0x00011f81) area_bottom_pane

0x5549,	// (0x00012041) area_top_pane_ParamLimits

0x5549,	// (0x00012041) area_top_pane

0x55e7,	// (0x000120df) main_pane_ParamLimits

0x55e7,	// (0x000120df) main_pane

0x3d5d,	// (0x00010855) misc_graphics

0x8fa3,	// (0x00015a9b) battery_pane_ParamLimits

0x8fa3,	// (0x00015a9b) battery_pane

0x9d78,	// (0x00016870) bg_status_flat_pane_g8

0x9d80,	// (0x00016878) bg_status_flat_pane_g9

0x906b,	// (0x00015b63) context_pane_ParamLimits

0x906b,	// (0x00015b63) context_pane

0x9181,	// (0x00015c79) navi_pane_ParamLimits

0x9181,	// (0x00015c79) navi_pane

0x9205,	// (0x00015cfd) signal_pane_ParamLimits

0x9205,	// (0x00015cfd) signal_pane

0x0008,

0xf874,	// (0x0001c36c) bg_status_flat_pane_g

0x9272,	// (0x00015d6a) status_pane_g1_ParamLimits

0x9272,	// (0x00015d6a) status_pane_g1

0x9286,	// (0x00015d7e) status_pane_g2_ParamLimits

0x9286,	// (0x00015d7e) status_pane_g2

0x9292,	// (0x00015d8a) status_pane_g3_ParamLimits

0x9292,	// (0x00015d8a) status_pane_g3

0x0004,

0xf79b,	// (0x0001c293) status_pane_g_ParamLimits

0xf79b,	// (0x0001c293) status_pane_g

0x92c6,	// (0x00015dbe) title_pane_ParamLimits

0x92c6,	// (0x00015dbe) title_pane

0x9303,	// (0x00015dfb) uni_indicator_pane_ParamLimits

0x9303,	// (0x00015dfb) uni_indicator_pane

0x8eb7,	// (0x000159af) bg_list_pane_ParamLimits

0x8eb7,	// (0x000159af) bg_list_pane

0x8ed7,	// (0x000159cf) find_pane

0x8edf,	// (0x000159d7) listscroll_app_pane_ParamLimits

0x8edf,	// (0x000159d7) listscroll_app_pane

0x8eeb,	// (0x000159e3) listscroll_form_pane

0x5ea3,	// (0x0001299b) listscroll_gen_pane_ParamLimits

0x5ea3,	// (0x0001299b) listscroll_gen_pane

0x5eb7,	// (0x000129af) listscroll_set_pane

0x856f,	// (0x00015067) main_idle_act_pane

0x8bc3,	// (0x000156bb) main_idle_trad_pane

0x8bc3,	// (0x000156bb) main_list_empty_pane

0x8f05,	// (0x000159fd) main_midp_pane

0x8f11,	// (0x00015a09) main_pane_g1_ParamLimits

0x8f11,	// (0x00015a09) main_pane_g1

0x5ecd,	// (0x000129c5) popup_ai_message_window_ParamLimits

0x5ecd,	// (0x000129c5) popup_ai_message_window

0x5f71,	// (0x00012a69) popup_fep_china_uni_window_ParamLimits

0x5f71,	// (0x00012a69) popup_fep_china_uni_window

0x5fcb,	// (0x00012ac3) popup_fep_japan_candidate_window_ParamLimits

0x5fcb,	// (0x00012ac3) popup_fep_japan_candidate_window

0x5fe9,	// (0x00012ae1) popup_fep_japan_predictive_window_ParamLimits

0x5fe9,	// (0x00012ae1) popup_fep_japan_predictive_window

0x6019,	// (0x00012b11) popup_find_window

0x6026,	// (0x00012b1e) popup_grid_graphic_window_ParamLimits

0x6026,	// (0x00012b1e) popup_grid_graphic_window

0x6050,	// (0x00012b48) popup_large_graphic_colour_window

0x6076,	// (0x00012b6e) popup_menu_window_ParamLimits

0x6076,	// (0x00012b6e) popup_menu_window

0x6232,	// (0x00012d2a) popup_note_image_window

0x621e,	// (0x00012d16) popup_note_wait_window_ParamLimits

0x621e,	// (0x00012d16) popup_note_wait_window

0x621e,	// (0x00012d16) popup_note_window_ParamLimits

0x621e,	// (0x00012d16) popup_note_window

0x6288,	// (0x00012d80) popup_query_code_window_ParamLimits

0x6288,	// (0x00012d80) popup_query_code_window

0x629c,	// (0x00012d94) popup_query_data_code_window_ParamLimits

0x629c,	// (0x00012d94) popup_query_data_code_window

0x62b9,	// (0x00012db1) popup_query_data_window_ParamLimits

0x62b9,	// (0x00012db1) popup_query_data_window

0x62d5,	// (0x00012dcd) popup_query_sat_info_window_ParamLimits

0x62d5,	// (0x00012dcd) popup_query_sat_info_window

0x630e,	// (0x00012e06) popup_snote_single_graphic_window_ParamLimits

0x630e,	// (0x00012e06) popup_snote_single_graphic_window

0x630e,	// (0x00012e06) popup_snote_single_text_window_ParamLimits

0x630e,	// (0x00012e06) popup_snote_single_text_window

0x6323,	// (0x00012e1b) popup_sub_window_general

0x6453,	// (0x00012f4b) popup_window_general_ParamLimits

0x6453,	// (0x00012f4b) popup_window_general

0x8f27,	// (0x00015a1f) power_save_pane

0x5d37,	// (0x0001282f) control_pane_g1_ParamLimits

0x5d37,	// (0x0001282f) control_pane_g1

0x5d5e,	// (0x00012856) control_pane_g2_ParamLimits

0x5d5e,	// (0x00012856) control_pane_g2

0x8e7a,	// (0x00015972) control_pane_g3_ParamLimits

0x8e7a,	// (0x00015972) control_pane_g3

0x0007,

0xf783,	// (0x0001c27b) control_pane_g_ParamLimits

0xf783,	// (0x0001c27b) control_pane_g

0x5da8,	// (0x000128a0) control_pane_t1_ParamLimits

0x5da8,	// (0x000128a0) control_pane_t1

0x5df4,	// (0x000128ec) control_pane_t2_ParamLimits

0x5df4,	// (0x000128ec) control_pane_t2

0x0002,

0xf794,	// (0x0001c28c) control_pane_t_ParamLimits

0xf794,	// (0x0001c28c) control_pane_t

0x8d9f,	// (0x00015897) navi_navi_volume_pane_cp1

0x8da7,	// (0x0001589f) status_small_icon_pane

0x8daf,	// (0x000158a7) status_small_pane_g1_ParamLimits

0x8daf,	// (0x000158a7) status_small_pane_g1

0x8de3,	// (0x000158db) status_small_pane_g2_ParamLimits

0x8de3,	// (0x000158db) status_small_pane_g2

0x8def,	// (0x000158e7) status_small_pane_g3_ParamLimits

0x8def,	// (0x000158e7) status_small_pane_g3

0x8dfb,	// (0x000158f3) status_small_pane_g4_ParamLimits

0x8dfb,	// (0x000158f3) status_small_pane_g4

0x8e07,	// (0x000158ff) status_small_pane_g5_ParamLimits

0x8e07,	// (0x000158ff) status_small_pane_g5

0x8e15,	// (0x0001590d) status_small_pane_g6_ParamLimits

0x8e15,	// (0x0001590d) status_small_pane_g6

0x0007,

0xf772,	// (0x0001c26a) status_small_pane_g_ParamLimits

0xf772,	// (0x0001c26a) status_small_pane_g

0x8e44,	// (0x0001593c) status_small_pane_t1

0x8e66,	// (0x0001595e) status_small_wait_pane_ParamLimits

0x8e66,	// (0x0001595e) status_small_wait_pane

0x8704,	// (0x000151fc) aid_levels_signal_ParamLimits

0x8704,	// (0x000151fc) aid_levels_signal

0x8716,	// (0x0001520e) signal_pane_g1_ParamLimits

0x8716,	// (0x0001520e) signal_pane_g1

0x872b,	// (0x00015223) signal_pane_g2_ParamLimits

0x872b,	// (0x00015223) signal_pane_g2

0x0003,

0xf703,	// (0x0001c1fb) signal_pane_g_ParamLimits

0xf703,	// (0x0001c1fb) signal_pane_g

0x492d,	// (0x00011425) context_pane_g1

0x7993,	// (0x0001448b) title_pane_g1

0x79bd,	// (0x000144b5) title_pane_t1

0x3d93,	// (0x0001088b) title_pane_t2

0x3db9,	// (0x000108b1) title_pane_t3

0x0002,

0xf557,	// (0x0001c04f) title_pane_t

0x931b,	// (0x00015e13) aid_levels_battery_ParamLimits

0x931b,	// (0x00015e13) aid_levels_battery

0x932f,	// (0x00015e27) battery_pane_g1_ParamLimits

0x932f,	// (0x00015e27) battery_pane_g1

0x9345,	// (0x00015e3d) battery_pane_g2_ParamLimits

0x9345,	// (0x00015e3d) battery_pane_g2

0x0001,

0xf7a6,	// (0x0001c29e) battery_pane_g_ParamLimits

0xf7a6,	// (0x0001c29e) battery_pane_g

0xa69c,	// (0x00017194) uni_indicator_pane_g1

0xa6b2,	// (0x000171aa) uni_indicator_pane_g2

0xa6c8,	// (0x000171c0) uni_indicator_pane_g3

0x0005,

0xf91c,	// (0x0001c414) uni_indicator_pane_g

0x8a35,	// (0x0001552d) navi_icon_pane_ParamLimits

0x8a35,	// (0x0001552d) navi_icon_pane

0x897f,	// (0x00015477) navi_midp_pane

0x8a51,	// (0x00015549) navi_navi_pane

0x8a5b,	// (0x00015553) navi_text_pane_ParamLimits

0x8a5b,	// (0x00015553) navi_text_pane

0x3be4,	// (0x000106dc) status_small_wait_pane_g1

0x4024,	// (0x00010b1c) status_small_wait_pane_g2

0x0001,

0xf917,	// (0x0001c40f) status_small_wait_pane_g

0xa3c3,	// (0x00016ebb) navi_navi_icon_text_pane

0xa3cb,	// (0x00016ec3) navi_navi_pane_g1_ParamLimits

0xa3cb,	// (0x00016ec3) navi_navi_pane_g1

0xa3dd,	// (0x00016ed5) navi_navi_pane_g2_ParamLimits

0xa3dd,	// (0x00016ed5) navi_navi_pane_g2

0x0001,

0xf8e5,	// (0x0001c3dd) navi_navi_pane_g_ParamLimits

0xf8e5,	// (0x0001c3dd) navi_navi_pane_g

0xa3ef,	// (0x00016ee7) navi_navi_tabs_pane

0xa3f8,	// (0x00016ef0) navi_navi_text_pane

0xa3c3,	// (0x00016ebb) navi_navi_volume_pane

0xa39f,	// (0x00016e97) navi_text_pane_t1

0xa393,	// (0x00016e8b) navi_icon_pane_g1

0xa2e6,	// (0x00016dde) navi_navi_text_pane_t1

0x676f,	// (0x00013267) navi_navi_volume_pane_g1

0x6777,	// (0x0001326f) volume_small_pane

0xa24c,	// (0x00016d44) navi_navi_icon_text_pane_g1

0xa254,	// (0x00016d4c) navi_navi_icon_text_pane_t1

0x8a51,	// (0x00015549) navi_tabs_2_long_pane

0x8a51,	// (0x00015549) navi_tabs_2_pane

0x8a51,	// (0x00015549) navi_tabs_3_long_pane

0x8a51,	// (0x00015549) navi_tabs_3_pane

0x8a51,	// (0x00015549) navi_tabs_4_pane

0x674f,	// (0x00013247) tabs_2_active_pane_ParamLimits

0x674f,	// (0x00013247) tabs_2_active_pane

0x675f,	// (0x00013257) tabs_2_passive_pane_ParamLimits

0x675f,	// (0x00013257) tabs_2_passive_pane

0x671d,	// (0x00013215) tabs_3_active_pane_ParamLimits

0x671d,	// (0x00013215) tabs_3_active_pane

0x672d,	// (0x00013225) tabs_3_passive_pane_ParamLimits

0x672d,	// (0x00013225) tabs_3_passive_pane

0x673e,	// (0x00013236) tabs_3_passive_pane_cp_ParamLimits

0x673e,	// (0x00013236) tabs_3_passive_pane_cp

0x66d9,	// (0x000131d1) tabs_4_active_pane_ParamLimits

0x66d9,	// (0x000131d1) tabs_4_active_pane

0x66ea,	// (0x000131e2) tabs_4_passive_pane_ParamLimits

0x66ea,	// (0x000131e2) tabs_4_passive_pane

0x66fb,	// (0x000131f3) tabs_4_passive_pane_cp_ParamLimits

0x66fb,	// (0x000131f3) tabs_4_passive_pane_cp

0x670c,	// (0x00013204) tabs_4_passive_pane_cp2_ParamLimits

0x670c,	// (0x00013204) tabs_4_passive_pane_cp2

0x66b5,	// (0x000131ad) tabs_2_long_active_pane_ParamLimits

0x66b5,	// (0x000131ad) tabs_2_long_active_pane

0x66c7,	// (0x000131bf) tabs_2_long_passive_pane_ParamLimits

0x66c7,	// (0x000131bf) tabs_2_long_passive_pane

0x6670,	// (0x00013168) tabs_3_long_active_pane_ParamLimits

0x6670,	// (0x00013168) tabs_3_long_active_pane

0x6689,	// (0x00013181) tabs_3_long_passive_pane_ParamLimits

0x6689,	// (0x00013181) tabs_3_long_passive_pane

0x669c,	// (0x00013194) tabs_3_long_passive_pane_cp_ParamLimits

0x669c,	// (0x00013194) tabs_3_long_passive_pane_cp

0x6616,	// (0x0001310e) volume_small_pane_g1

0x661f,	// (0x00013117) volume_small_pane_g2

0x6628,	// (0x00013120) volume_small_pane_g3

0x6631,	// (0x00013129) volume_small_pane_g4

0x663a,	// (0x00013132) volume_small_pane_g5

0x6643,	// (0x0001313b) volume_small_pane_g6

0x664c,	// (0x00013144) volume_small_pane_g7

0x6655,	// (0x0001314d) volume_small_pane_g8

0x665e,	// (0x00013156) volume_small_pane_g9

0x6667,	// (0x0001315f) volume_small_pane_g10

0x0009,

0xf8b1,	// (0x0001c3a9) volume_small_pane_g

0x3dd9,	// (0x000108d1) bg_active_tab_pane_cp2_ParamLimits

0x3dd9,	// (0x000108d1) bg_active_tab_pane_cp2

0x7a25,	// (0x0001451d) tabs_3_active_pane_g1

0x7a2d,	// (0x00014525) tabs_3_active_pane_t1

0x3dd9,	// (0x000108d1) bg_passive_tab_pane_cp2_ParamLimits

0x3dd9,	// (0x000108d1) bg_passive_tab_pane_cp2

0x7a25,	// (0x0001451d) tabs_3_passive_pane_g1

0x7a2d,	// (0x00014525) tabs_3_passive_pane_t1

0x3dd9,	// (0x000108d1) bg_active_tab_pane_cp3_ParamLimits

0x3dd9,	// (0x000108d1) bg_active_tab_pane_cp3

0x7a3f,	// (0x00014537) tabs_4_active_pane_g1

0x7a47,	// (0x0001453f) tabs_4_active_pane_t1

0x3dd9,	// (0x000108d1) bg_passive_tab_pane_cp3_ParamLimits

0x3dd9,	// (0x000108d1) bg_passive_tab_pane_cp3

0x7a3f,	// (0x00014537) tabs_4_1_passive_pane_g1

0x7a47,	// (0x0001453f) tabs_4_1_passive_pane_t1

0x8f05,	// (0x000159fd) list_highlight_pane_cp2

0xa939,	// (0x00017431) list_set_pane_ParamLimits

0xa939,	// (0x00017431) list_set_pane

0xa9df,	// (0x000174d7) main_pane_set_t1_ParamLimits

0xa9df,	// (0x000174d7) main_pane_set_t1

0xa9ff,	// (0x000174f7) main_pane_set_t2_ParamLimits

0xa9ff,	// (0x000174f7) main_pane_set_t2

0xaa13,	// (0x0001750b) main_pane_set_t3_ParamLimits

0xaa13,	// (0x0001750b) main_pane_set_t3

0xaa25,	// (0x0001751d) main_pane_set_t4_ParamLimits

0xaa25,	// (0x0001751d) main_pane_set_t4

0x0003,

0xf981,	// (0x0001c479) main_pane_set_t_ParamLimits

0xf981,	// (0x0001c479) main_pane_set_t

0xaa37,	// (0x0001752f) setting_code_pane

0xaa43,	// (0x0001753b) setting_slider_graphic_pane

0xaa43,	// (0x0001753b) setting_slider_pane

0xaa43,	// (0x0001753b) setting_text_pane

0xaa43,	// (0x0001753b) setting_volume_pane

0x5828,	// (0x00012320) volume_set_pane

0x3dd9,	// (0x000108d1) bg_set_opt_pane_cp

0x5830,	// (0x00012328) setting_slider_pane_t1

0x5849,	// (0x00012341) setting_slider_pane_t2

0x5863,	// (0x0001235b) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0001c056) setting_slider_pane_t

0x587b,	// (0x00012373) slider_set_pane

0x3d5d,	// (0x00010855) bg_set_opt_pane_cp2

0x3de7,	// (0x000108df) setting_slider_graphic_pane_g1

0x5891,	// (0x00012389) setting_slider_graphic_pane_t1

0x58a1,	// (0x00012399) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x0001c05d) setting_slider_graphic_pane_t

0x58b1,	// (0x000123a9) slider_set_pane_cp

0x3d5d,	// (0x00010855) input_focus_pane_cp1

0xa8f8,	// (0x000173f0) list_set_text_pane

0x3be4,	// (0x000106dc) setting_text_pane_g1

0x3d5d,	// (0x00010855) input_focus_pane_cp2

0x3be4,	// (0x000106dc) setting_code_pane_g1

0x3df0,	// (0x000108e8) setting_code_pane_t1

0x3dfe,	// (0x000108f6) set_text_pane_t1_ParamLimits

0x3dfe,	// (0x000108f6) set_text_pane_t1

0x42b9,	// (0x00010db1) set_opt_bg_pane_g1

0x42c1,	// (0x00010db9) set_opt_bg_pane_g2

0xa8d2,	// (0x000173ca) set_opt_bg_pane_g3

0x42d1,	// (0x00010dc9) set_opt_bg_pane_g4

0x42d9,	// (0x00010dd1) set_opt_bg_pane_g5

0x42e1,	// (0x00010dd9) set_opt_bg_pane_g6

0xa8dc,	// (0x000173d4) set_opt_bg_pane_g7

0xa8e4,	// (0x000173dc) set_opt_bg_pane_g8

0xa8ee,	// (0x000173e6) set_opt_bg_pane_g9

0x0008,

0xf96e,	// (0x0001c466) set_opt_bg_pane_g

0xa8c5,	// (0x000173bd) slider_set_pane_g1

0x67e4,	// (0x000132dc) slider_set_pane_g2

0x0006,

0xf95f,	// (0x0001c457) slider_set_pane_g

0x6780,	// (0x00013278) volume_set_pane_g1

0x6788,	// (0x00013280) volume_set_pane_g2

0x6790,	// (0x00013288) volume_set_pane_g3

0x6798,	// (0x00013290) volume_set_pane_g4

0x67a0,	// (0x00013298) volume_set_pane_g5

0x67a8,	// (0x000132a0) volume_set_pane_g6

0x67b0,	// (0x000132a8) volume_set_pane_g7

0x67b8,	// (0x000132b0) volume_set_pane_g8

0x67c0,	// (0x000132b8) volume_set_pane_g9

0x67c8,	// (0x000132c0) volume_set_pane_g10

0x0009,

0xf937,	// (0x0001c42f) volume_set_pane_g

0x7a59,	// (0x00014551) indicator_pane_ParamLimits

0x7a59,	// (0x00014551) indicator_pane

0x7a65,	// (0x0001455d) main_idle_pane_g2_ParamLimits

0x7a65,	// (0x0001455d) main_idle_pane_g2

0x7a8d,	// (0x00014585) main_pane_idle_g1_ParamLimits

0x7a8d,	// (0x00014585) main_pane_idle_g1

0x3e18,	// (0x00010910) popup_clock_digital_analogue_window_ParamLimits

0x3e18,	// (0x00010910) popup_clock_digital_analogue_window

0x7a9a,	// (0x00014592) soft_indicator_pane_ParamLimits

0x7a9a,	// (0x00014592) soft_indicator_pane

0x7aa6,	// (0x0001459e) wallpaper_pane_ParamLimits

0x7aa6,	// (0x0001459e) wallpaper_pane

0x3be4,	// (0x000106dc) wallpaper_pane_g1

0x7ab2,	// (0x000145aa) indicator_pane_g1_ParamLimits

0x7ab2,	// (0x000145aa) indicator_pane_g1

0xadcf,	// (0x000178c7) navi_navi_icon_text_pane_srt_g1

0x3e46,	// (0x0001093e) soft_indicator_pane_t1

0x3e60,	// (0x00010958) aid_ps_area_pane

0x7abe,	// (0x000145b6) aid_ps_clock_pane

0x3e71,	// (0x00010969) aid_ps_indicator_pane

0x3e7d,	// (0x00010975) indicator_ps_pane_ParamLimits

0x3e7d,	// (0x00010975) indicator_ps_pane

0x3e8c,	// (0x00010984) power_save_pane_g1_ParamLimits

0x3e8c,	// (0x00010984) power_save_pane_g1

0x3e98,	// (0x00010990) power_save_pane_g2_ParamLimits

0x3e98,	// (0x00010990) power_save_pane_g2

0x543d,	// (0x00011f35) aid_navinavi_width_pane

0x3e60,	// (0x00010958) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0001c062) power_save_pane_g_ParamLimits

0xf56a,	// (0x0001c062) power_save_pane_g

0x3ea6,	// (0x0001099e) power_save_pane_t1_ParamLimits

0x3ea6,	// (0x0001099e) power_save_pane_t1

0x7abe,	// (0x000145b6) aid_ps_clock_pane_ParamLimits

0x3e71,	// (0x00010969) aid_ps_indicator_pane_ParamLimits

0x3eb8,	// (0x000109b0) power_save_pane_t4_ParamLimits

0x3eb8,	// (0x000109b0) power_save_pane_t4

0x0001,

0xf56f,	// (0x0001c067) power_save_pane_t_ParamLimits

0xf56f,	// (0x0001c067) power_save_pane_t

0x3ee2,	// (0x000109da) power_save_t3_ParamLimits

0x3ee2,	// (0x000109da) power_save_t3

0x3ecd,	// (0x000109c5) power_save_t2_ParamLimits

0x3ecd,	// (0x000109c5) power_save_t2

0x3ef7,	// (0x000109ef) indicator_ps_pane_g1

0x7acc,	// (0x000145c4) ai_gene_pane_ParamLimits

0x7acc,	// (0x000145c4) ai_gene_pane

0x7ad8,	// (0x000145d0) ai_links_pane_ParamLimits

0x7ad8,	// (0x000145d0) ai_links_pane

0x7ae4,	// (0x000145dc) indicator_pane_cp1_ParamLimits

0x7ae4,	// (0x000145dc) indicator_pane_cp1

0x7af0,	// (0x000145e8) main_pane_idle_g1_cp_ParamLimits

0x7af0,	// (0x000145e8) main_pane_idle_g1_cp

0x7afc,	// (0x000145f4) popup_ai_links_title_window

0x7b05,	// (0x000145fd) soft_indicator_pane_cp1_ParamLimits

0x7b05,	// (0x000145fd) soft_indicator_pane_cp1

0xa68a,	// (0x00017182) ai_links_pane_g1

0xa693,	// (0x0001718b) grid_ai_links_pane

0xa66d,	// (0x00017165) ai_gene_pane_1

0xa678,	// (0x00017170) ai_gene_pane_2

0xa681,	// (0x00017179) list_highlight_pane_cp4

0xa651,	// (0x00017149) cell_ai_link_pane_ParamLimits

0xa651,	// (0x00017149) cell_ai_link_pane

0xa649,	// (0x00017141) cell_ai_link_pane_g1

0x4024,	// (0x00010b1c) cell_ai_link_pane_g2

0x0001,

0xf912,	// (0x0001c40a) cell_ai_link_pane_g

0x3d5d,	// (0x00010855) grid_highlight_cp2

0x3d5d,	// (0x00010855) bg_popup_sub_pane_cp1

0x3f0e,	// (0x00010a06) popup_ai_links_title_window_t1

0xa599,	// (0x00017091) ai_gene_pane_1_g1_ParamLimits

0xa599,	// (0x00017091) ai_gene_pane_1_g1

0xa5a5,	// (0x0001709d) ai_gene_pane_1_g2_ParamLimits

0xa5a5,	// (0x0001709d) ai_gene_pane_1_g2

0x0001,

0xf908,	// (0x0001c400) ai_gene_pane_1_g_ParamLimits

0xf908,	// (0x0001c400) ai_gene_pane_1_g

0xa5b2,	// (0x000170aa) ai_gene_pane_1_t1_ParamLimits

0xa5b2,	// (0x000170aa) ai_gene_pane_1_t1

0xa5e6,	// (0x000170de) grid_ai_soft_ind_pane

0xa584,	// (0x0001707c) ai_gene_pane_2_t1_ParamLimits

0xa584,	// (0x0001707c) ai_gene_pane_2_t1

0x7b11,	// (0x00014609) main_pane_empty_t1_ParamLimits

0x7b11,	// (0x00014609) main_pane_empty_t1

0x7b29,	// (0x00014621) main_pane_empty_t2_ParamLimits

0x7b29,	// (0x00014621) main_pane_empty_t2

0x7b3e,	// (0x00014636) main_pane_empty_t3_ParamLimits

0x7b3e,	// (0x00014636) main_pane_empty_t3

0x7b50,	// (0x00014648) main_pane_empty_t4_ParamLimits

0x7b50,	// (0x00014648) main_pane_empty_t4

0x7b62,	// (0x0001465a) main_pane_empty_t5_ParamLimits

0x7b62,	// (0x0001465a) main_pane_empty_t5

0x0004,

0xf574,	// (0x0001c06c) main_pane_empty_t_ParamLimits

0xf574,	// (0x0001c06c) main_pane_empty_t

0x430a,	// (0x00010e02) bg_popup_window_pane_ParamLimits

0x430a,	// (0x00010e02) bg_popup_window_pane

0xa2f4,	// (0x00016dec) find_popup_pane_cp2_ParamLimits

0xa2f4,	// (0x00016dec) find_popup_pane_cp2

0xa300,	// (0x00016df8) heading_pane_ParamLimits

0xa300,	// (0x00016df8) heading_pane

0x3d5d,	// (0x00010855) bg_popup_sub_pane

0xa26e,	// (0x00016d66) bg_popup_window_pane_g1_ParamLimits

0xa26e,	// (0x00016d66) bg_popup_window_pane_g1

0xa27a,	// (0x00016d72) bg_popup_window_pane_g2_ParamLimits

0xa27a,	// (0x00016d72) bg_popup_window_pane_g2

0xa286,	// (0x00016d7e) bg_popup_window_pane_g3_ParamLimits

0xa286,	// (0x00016d7e) bg_popup_window_pane_g3

0xa292,	// (0x00016d8a) bg_popup_window_pane_g4_ParamLimits

0xa292,	// (0x00016d8a) bg_popup_window_pane_g4

0xa29e,	// (0x00016d96) bg_popup_window_pane_g5_ParamLimits

0xa29e,	// (0x00016d96) bg_popup_window_pane_g5

0xa2aa,	// (0x00016da2) bg_popup_window_pane_g6_ParamLimits

0xa2aa,	// (0x00016da2) bg_popup_window_pane_g6

0xa2b6,	// (0x00016dae) bg_popup_window_pane_g7_ParamLimits

0xa2b6,	// (0x00016dae) bg_popup_window_pane_g7

0xa2c2,	// (0x00016dba) bg_popup_window_pane_g8_ParamLimits

0xa2c2,	// (0x00016dba) bg_popup_window_pane_g8

0xa2ce,	// (0x00016dc6) bg_popup_window_pane_g9_ParamLimits

0xa2ce,	// (0x00016dc6) bg_popup_window_pane_g9

0xa2da,	// (0x00016dd2) bg_popup_window_pane_g10_ParamLimits

0xa2da,	// (0x00016dd2) bg_popup_window_pane_g10

0x0009,

0xf8d0,	// (0x0001c3c8) bg_popup_window_pane_g_ParamLimits

0xf8d0,	// (0x0001c3c8) bg_popup_window_pane_g

0xa203,	// (0x00016cfb) bg_popup_heading_pane_ParamLimits

0xa203,	// (0x00016cfb) bg_popup_heading_pane

0x686c,	// (0x00013364) tabs_4_passive_pane_cp_srt_ParamLimits

0x686c,	// (0x00013364) tabs_4_passive_pane_cp_srt

0x687e,	// (0x00013376) tabs_4_passive_pane_srt_ParamLimits

0xa217,	// (0x00016d0f) heading_pane_g2

0x687e,	// (0x00013376) tabs_4_passive_pane_srt

0x8f05,	// (0x000159fd) bg_passive_tab_pane_cp3_srt_ParamLimits

0x8f05,	// (0x000159fd) bg_passive_tab_pane_cp3_srt

0xa21f,	// (0x00016d17) heading_pane_t1_ParamLimits

0xa21f,	// (0x00016d17) heading_pane_t1

0xa236,	// (0x00016d2e) heading_pane_t2_ParamLimits

0xa236,	// (0x00016d2e) heading_pane_t2

0x0001,

0xf8cb,	// (0x0001c3c3) heading_pane_t_ParamLimits

0xf8cb,	// (0x0001c3c3) heading_pane_t

0x9d40,	// (0x00016838) bg_popup_heading_pane_g1

0x9def,	// (0x000168e7) bg_popup_heading_pane_g2

0x9df9,	// (0x000168f1) bg_popup_heading_pane_g3

0x9e03,	// (0x000168fb) bg_popup_heading_pane_g4

0x9e0d,	// (0x00016905) bg_popup_heading_pane_g5

0x9e17,	// (0x0001690f) bg_popup_heading_pane_g6

0x9e1f,	// (0x00016917) bg_popup_heading_pane_g7

0x9e27,	// (0x0001691f) bg_popup_heading_pane_g8

0x9e31,	// (0x00016929) bg_popup_heading_pane_g9

0x0008,

0xf887,	// (0x0001c37f) bg_popup_heading_pane_g

0x943c,	// (0x00015f34) bg_popup_sub_pane_g1

0x944c,	// (0x00015f44) bg_popup_sub_pane_g2

0x9444,	// (0x00015f3c) bg_popup_sub_pane_g3

0x945c,	// (0x00015f54) bg_popup_sub_pane_g4

0x9454,	// (0x00015f4c) bg_popup_sub_pane_g5

0x9464,	// (0x00015f5c) bg_popup_sub_pane_g6

0x946c,	// (0x00015f64) bg_popup_sub_pane_g7

0x947c,	// (0x00015f74) bg_popup_sub_pane_g8

0x9474,	// (0x00015f6c) bg_popup_sub_pane_g9

0x0008,

0xf861,	// (0x0001c359) bg_popup_sub_pane_g

0x3dcb,	// (0x000108c3) bg_popup_window_pane_cp5_ParamLimits

0x3dcb,	// (0x000108c3) bg_popup_window_pane_cp5

0x3f2b,	// (0x00010a23) popup_note_window_g1_ParamLimits

0x3f2b,	// (0x00010a23) popup_note_window_g1

0x3f37,	// (0x00010a2f) popup_note_window_t1_ParamLimits

0x3f37,	// (0x00010a2f) popup_note_window_t1

0x3f4d,	// (0x00010a45) popup_note_window_t2_ParamLimits

0x3f4d,	// (0x00010a45) popup_note_window_t2

0x3f63,	// (0x00010a5b) popup_note_window_t3_ParamLimits

0x3f63,	// (0x00010a5b) popup_note_window_t3

0x3f79,	// (0x00010a71) popup_note_window_t4_ParamLimits

0x3f79,	// (0x00010a71) popup_note_window_t4

0x3fa1,	// (0x00010a99) popup_note_window_t5_ParamLimits

0x3fa1,	// (0x00010a99) popup_note_window_t5

0x0004,

0xf57f,	// (0x0001c077) popup_note_window_t_ParamLimits

0xf57f,	// (0x0001c077) popup_note_window_t

0x3fc5,	// (0x00010abd) bg_popup_window_pane_cp6_ParamLimits

0x3fc5,	// (0x00010abd) bg_popup_window_pane_cp6

0x9cbc,	// (0x000167b4) popup_note_image_window_g1_ParamLimits

0x9cbc,	// (0x000167b4) popup_note_image_window_g1

0x9cc8,	// (0x000167c0) popup_note_image_window_g2_ParamLimits

0x9cc8,	// (0x000167c0) popup_note_image_window_g2

0x0001,

0xf855,	// (0x0001c34d) popup_note_image_window_g_ParamLimits

0xf855,	// (0x0001c34d) popup_note_image_window_g

0x9ce1,	// (0x000167d9) popup_note_image_window_t1_ParamLimits

0x9ce1,	// (0x000167d9) popup_note_image_window_t1

0x9cfa,	// (0x000167f2) popup_note_image_window_t2_ParamLimits

0x9cfa,	// (0x000167f2) popup_note_image_window_t2

0x9d13,	// (0x0001680b) popup_note_image_window_t3_ParamLimits

0x9d13,	// (0x0001680b) popup_note_image_window_t3

0x0002,

0xf85a,	// (0x0001c352) popup_note_image_window_t_ParamLimits

0xf85a,	// (0x0001c352) popup_note_image_window_t

0x9b85,	// (0x0001667d) bg_popup_window_pane_cp7_ParamLimits

0x9b85,	// (0x0001667d) bg_popup_window_pane_cp7

0x9bb5,	// (0x000166ad) popup_note_wait_window_g1_ParamLimits

0x9bb5,	// (0x000166ad) popup_note_wait_window_g1

0x9bc1,	// (0x000166b9) popup_note_wait_window_g2_ParamLimits

0x9bc1,	// (0x000166b9) popup_note_wait_window_g2

0x0002,

0xf843,	// (0x0001c33b) popup_note_wait_window_g_ParamLimits

0xf843,	// (0x0001c33b) popup_note_wait_window_g

0x9bd9,	// (0x000166d1) popup_note_wait_window_t1_ParamLimits

0x9bd9,	// (0x000166d1) popup_note_wait_window_t1

0x9c00,	// (0x000166f8) popup_note_wait_window_t2_ParamLimits

0x9c00,	// (0x000166f8) popup_note_wait_window_t2

0x9c1d,	// (0x00016715) popup_note_wait_window_t3_ParamLimits

0x9c1d,	// (0x00016715) popup_note_wait_window_t3

0x9c30,	// (0x00016728) popup_note_wait_window_t4_ParamLimits

0x9c30,	// (0x00016728) popup_note_wait_window_t4

0x0004,

0xf84a,	// (0x0001c342) popup_note_wait_window_t_ParamLimits

0xf84a,	// (0x0001c342) popup_note_wait_window_t

0x9c55,	// (0x0001674d) wait_bar_pane_ParamLimits

0x9c55,	// (0x0001674d) wait_bar_pane

0x3d5d,	// (0x00010855) wait_anim_pane

0x3d5d,	// (0x00010855) wait_border_pane

0x3be4,	// (0x000106dc) wait_anim_pane_g1

0x3be4,	// (0x000106dc) wait_anim_pane_g2

0x0001,

0xf6fe,	// (0x0001c1f6) wait_anim_pane_g

0x9b31,	// (0x00016629) wait_border_pane_g1

0x9b3c,	// (0x00016634) wait_border_pane_g2

0x9b45,	// (0x0001663d) wait_border_pane_g3

0x0002,

0xf83c,	// (0x0001c334) wait_border_pane_g

0x999c,	// (0x00016494) bg_popup_window_pane_cp16_ParamLimits

0x999c,	// (0x00016494) bg_popup_window_pane_cp16

0x9a9c,	// (0x00016594) indicator_popup_pane_cp4_ParamLimits

0x9a9c,	// (0x00016594) indicator_popup_pane_cp4

0x9ab0,	// (0x000165a8) popup_query_data_window_t1_ParamLimits

0x9ab0,	// (0x000165a8) popup_query_data_window_t1

0x9ac2,	// (0x000165ba) popup_query_data_window_t2_ParamLimits

0x9ac2,	// (0x000165ba) popup_query_data_window_t2

0x9adb,	// (0x000165d3) popup_query_data_window_t3_ParamLimits

0x9adb,	// (0x000165d3) popup_query_data_window_t3

0x0002,

0xf835,	// (0x0001c32d) popup_query_data_window_t_ParamLimits

0xf835,	// (0x0001c32d) popup_query_data_window_t

0x9af5,	// (0x000165ed) query_popup_data_pane_ParamLimits

0x9af5,	// (0x000165ed) query_popup_data_pane

0x9b09,	// (0x00016601) query_popup_data_pane_cp1_ParamLimits

0x9b09,	// (0x00016601) query_popup_data_pane_cp1

0x999c,	// (0x00016494) bg_popup_window_pane_cp10_ParamLimits

0x999c,	// (0x00016494) bg_popup_window_pane_cp10

0x99ce,	// (0x000164c6) indicator_popup_pane_ParamLimits

0x99ce,	// (0x000164c6) indicator_popup_pane

0x99f0,	// (0x000164e8) popup_query_code_window_t1_ParamLimits

0x99f0,	// (0x000164e8) popup_query_code_window_t1

0x9a0a,	// (0x00016502) popup_query_code_window_t2_ParamLimits

0x9a0a,	// (0x00016502) popup_query_code_window_t2

0x9a53,	// (0x0001654b) popup_query_code_window_t3_ParamLimits

0x9a53,	// (0x0001654b) popup_query_code_window_t3

0x0002,

0xf82e,	// (0x0001c326) popup_query_code_window_t_ParamLimits

0xf82e,	// (0x0001c326) popup_query_code_window_t

0x9a82,	// (0x0001657a) query_popup_pane_ParamLimits

0x9a82,	// (0x0001657a) query_popup_pane

0x3fc5,	// (0x00010abd) bg_popup_window_pane_cp15_ParamLimits

0x3fc5,	// (0x00010abd) bg_popup_window_pane_cp15

0x7b76,	// (0x0001466e) indicator_popup_pane_cp1_ParamLimits

0x7b76,	// (0x0001466e) indicator_popup_pane_cp1

0x7b89,	// (0x00014681) indicator_popup_pane_cp2_ParamLimits

0x7b89,	// (0x00014681) indicator_popup_pane_cp2

0x7b9c,	// (0x00014694) popup_query_data_code_window_g1_ParamLimits

0x7b9c,	// (0x00014694) popup_query_data_code_window_g1

0x3fe3,	// (0x00010adb) popup_query_data_code_window_t1_ParamLimits

0x3fe3,	// (0x00010adb) popup_query_data_code_window_t1

0x3ff5,	// (0x00010aed) popup_query_data_code_window_t2_ParamLimits

0x3ff5,	// (0x00010aed) popup_query_data_code_window_t2

0x7baf,	// (0x000146a7) popup_query_data_code_window_t3_ParamLimits

0x7baf,	// (0x000146a7) popup_query_data_code_window_t3

0x7bc5,	// (0x000146bd) popup_query_data_code_window_t4_ParamLimits

0x7bc5,	// (0x000146bd) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x0001c082) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x0001c082) popup_query_data_code_window_t

0x6527,	// (0x0001301f) list_single_midp_graphic_pane_g3

0x7bdd,	// (0x000146d5) query_popup_data_pane_cp2_ParamLimits

0x7bf0,	// (0x000146e8) query_popup_pane_cp2_ParamLimits

0x7bf0,	// (0x000146e8) query_popup_pane_cp2

0x3d5d,	// (0x00010855) bg_popup_window_pane_cp11

0x9994,	// (0x0001648c) heading_pane_cp5

0x4051,	// (0x00010b49) listscroll_popup_info_pane

0x3d5d,	// (0x00010855) input_focus_pane_cp3

0x4007,	// (0x00010aff) query_popup_pane_t1

0x4015,	// (0x00010b0d) list_popup_info_pane_ParamLimits

0x4015,	// (0x00010b0d) list_popup_info_pane

0x4024,	// (0x00010b1c) listscroll_popup_info_pane_g1

0x402c,	// (0x00010b24) scroll_pane_cp7

0x7c03,	// (0x000146fb) popup_info_list_pane_t1_ParamLimits

0x7c03,	// (0x000146fb) popup_info_list_pane_t1

0x7c1d,	// (0x00014715) popup_info_list_pane_t2_ParamLimits

0x7c1d,	// (0x00014715) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x0001c08b) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x0001c08b) popup_info_list_pane_t

0x3d5d,	// (0x00010855) bg_popup_window_pane_cp12

0xade9,	// (0x000178e1) find_popup_pane

0x3dd9,	// (0x000108d1) bg_popup_window_pane_cp3

0x4036,	// (0x00010b2e) heading_pane_cp3

0x4042,	// (0x00010b3a) listscroll_popup_graphic_pane

0x3d5d,	// (0x00010855) bg_popup_window_pane_cp4

0x7c87,	// (0x0001477f) heading_pane_cp4

0x4051,	// (0x00010b49) listscroll_popup_colour_pane

0x7c91,	// (0x00014789) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x7c91,	// (0x00014789) cell_large_graphic_colour_none_popup_pane

0x7ca5,	// (0x0001479d) grid_large_graphic_colour_popup_pane_ParamLimits

0x7ca5,	// (0x0001479d) grid_large_graphic_colour_popup_pane

0x7ccd,	// (0x000147c5) listscroll_popup_colour_pane_g1_ParamLimits

0x7ccd,	// (0x000147c5) listscroll_popup_colour_pane_g1

0x7ce4,	// (0x000147dc) listscroll_popup_colour_pane_g2_ParamLimits

0x7ce4,	// (0x000147dc) listscroll_popup_colour_pane_g2

0x7cfb,	// (0x000147f3) listscroll_popup_colour_pane_g3_ParamLimits

0x7cfb,	// (0x000147f3) listscroll_popup_colour_pane_g3

0x7d0b,	// (0x00014803) listscroll_popup_colour_pane_g4_ParamLimits

0x7d0b,	// (0x00014803) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x0001c090) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x0001c090) listscroll_popup_colour_pane_g

0x4059,	// (0x00010b51) scroll_pane_cp6_ParamLimits

0x4059,	// (0x00010b51) scroll_pane_cp6

0x7d1b,	// (0x00014813) cell_large_graphic_colour_popup_pane_ParamLimits

0x7d1b,	// (0x00014813) cell_large_graphic_colour_popup_pane

0x7d3a,	// (0x00014832) cell_large_graphic_colour_none_popup_pane_t1

0x3d5d,	// (0x00010855) grid_highlight_pane_cp5

0x406b,	// (0x00010b63) cell_large_graphic_colour_popup_pane_g1

0x4073,	// (0x00010b6b) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0001c099) cell_large_graphic_colour_popup_pane_g

0x407b,	// (0x00010b73) cell_large_graphic_colour_popup_pane_g2_copy1

0x4084,	// (0x00010b7c) grid_highlight_pane_cp4

0x408c,	// (0x00010b84) bg_popup_window_pane_cp8_ParamLimits

0x408c,	// (0x00010b84) bg_popup_window_pane_cp8

0x7d49,	// (0x00014841) popup_snote_single_text_window_g1_ParamLimits

0x7d49,	// (0x00014841) popup_snote_single_text_window_g1

0x7d5b,	// (0x00014853) popup_snote_single_text_window_t1_ParamLimits

0x7d5b,	// (0x00014853) popup_snote_single_text_window_t1

0x7d6e,	// (0x00014866) popup_snote_single_text_window_t2_ParamLimits

0x7d6e,	// (0x00014866) popup_snote_single_text_window_t2

0x7d81,	// (0x00014879) popup_snote_single_text_window_t3_ParamLimits

0x7d81,	// (0x00014879) popup_snote_single_text_window_t3

0x7dba,	// (0x000148b2) popup_snote_single_text_window_t4_ParamLimits

0x7dba,	// (0x000148b2) popup_snote_single_text_window_t4

0x7dee,	// (0x000148e6) popup_snote_single_text_window_t5_ParamLimits

0x7dee,	// (0x000148e6) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0001c09e) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0001c09e) popup_snote_single_text_window_t

0x40a7,	// (0x00010b9f) bg_popup_window_pane_cp9_ParamLimits

0x40a7,	// (0x00010b9f) bg_popup_window_pane_cp9

0x7d49,	// (0x00014841) popup_snote_single_graphic_window_g1_ParamLimits

0x7d49,	// (0x00014841) popup_snote_single_graphic_window_g1

0x40b5,	// (0x00010bad) popup_snote_single_graphic_window_g2_ParamLimits

0x40b5,	// (0x00010bad) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0001c0a9) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0001c0a9) popup_snote_single_graphic_window_g

0x40c1,	// (0x00010bb9) popup_snote_single_graphic_window_t1_ParamLimits

0x40c1,	// (0x00010bb9) popup_snote_single_graphic_window_t1

0x40d4,	// (0x00010bcc) popup_snote_single_graphic_window_t2_ParamLimits

0x40d4,	// (0x00010bcc) popup_snote_single_graphic_window_t2

0x7e1d,	// (0x00014915) popup_snote_single_graphic_window_t3_ParamLimits

0x7e1d,	// (0x00014915) popup_snote_single_graphic_window_t3

0x7e56,	// (0x0001494e) popup_snote_single_graphic_window_t4_ParamLimits

0x7e56,	// (0x0001494e) popup_snote_single_graphic_window_t4

0x7e8a,	// (0x00014982) popup_snote_single_graphic_window_t5_ParamLimits

0x7e8a,	// (0x00014982) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0001c0ae) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0001c0ae) popup_snote_single_graphic_window_t

0xad2d,	// (0x00017825) grid_graphic_popup_pane_ParamLimits

0xad2d,	// (0x00017825) grid_graphic_popup_pane

0xad55,	// (0x0001784d) listscroll_popup_graphic_pane_g1_ParamLimits

0xad55,	// (0x0001784d) listscroll_popup_graphic_pane_g1

0xad69,	// (0x00017861) listscroll_popup_graphic_pane_g2_ParamLimits

0xad69,	// (0x00017861) listscroll_popup_graphic_pane_g2

0x0001,

0xf9ab,	// (0x0001c4a3) listscroll_popup_graphic_pane_g_ParamLimits

0xf9ab,	// (0x0001c4a3) listscroll_popup_graphic_pane_g

0xad7d,	// (0x00017875) scroll_pane_cp5

0xacca,	// (0x000177c2) cell_graphic_popup_pane_ParamLimits

0xacca,	// (0x000177c2) cell_graphic_popup_pane

0xacab,	// (0x000177a3) cell_graphic_popup_pane_g1

0xacb3,	// (0x000177ab) cell_graphic_popup_pane_g2

0x407b,	// (0x00010b73) cell_graphic_popup_pane_g3

0x0002,

0xf9a4,	// (0x0001c49c) cell_graphic_popup_pane_g

0xacbc,	// (0x000177b4) cell_graphic_popup_pane_t2

0x4084,	// (0x00010b7c) grid_highlight_pane_cp3

0x40f9,	// (0x00010bf1) list_gen_pane_ParamLimits

0x40f9,	// (0x00010bf1) list_gen_pane

0x4121,	// (0x00010c19) scroll_pane

0xac03,	// (0x000176fb) bg_list_pane_g1_ParamLimits

0xac03,	// (0x000176fb) bg_list_pane_g1

0xac20,	// (0x00017718) bg_list_pane_g2_ParamLimits

0xac20,	// (0x00017718) bg_list_pane_g2

0xac35,	// (0x0001772d) bg_list_pane_g3_ParamLimits

0xac35,	// (0x0001772d) bg_list_pane_g3

0xac49,	// (0x00017741) bg_list_pane_g4_ParamLimits

0xac49,	// (0x00017741) bg_list_pane_g4

0xac5d,	// (0x00017755) bg_list_pane_g5_ParamLimits

0xac5d,	// (0x00017755) bg_list_pane_g5

0x0004,

0xf999,	// (0x0001c491) bg_list_pane_g_ParamLimits

0xf999,	// (0x0001c491) bg_list_pane_g

0xaafc,	// (0x000175f4) list_double2_graphic_large_graphic_pane_ParamLimits

0xaafc,	// (0x000175f4) list_double2_graphic_large_graphic_pane

0xaafc,	// (0x000175f4) list_double2_graphic_pane_ParamLimits

0xaafc,	// (0x000175f4) list_double2_graphic_pane

0xaafc,	// (0x000175f4) list_double2_large_graphic_pane_ParamLimits

0xaafc,	// (0x000175f4) list_double2_large_graphic_pane

0xaafc,	// (0x000175f4) list_double2_pane_ParamLimits

0xaafc,	// (0x000175f4) list_double2_pane

0xaafc,	// (0x000175f4) list_double_graphic_heading_pane_ParamLimits

0xaafc,	// (0x000175f4) list_double_graphic_heading_pane

0xaafc,	// (0x000175f4) list_double_graphic_pane_ParamLimits

0xaafc,	// (0x000175f4) list_double_graphic_pane

0xaafc,	// (0x000175f4) list_double_heading_pane_ParamLimits

0xaafc,	// (0x000175f4) list_double_heading_pane

0xaafc,	// (0x000175f4) list_double_large_graphic_pane_ParamLimits

0xaafc,	// (0x000175f4) list_double_large_graphic_pane

0xaafc,	// (0x000175f4) list_double_number_pane_ParamLimits

0xaafc,	// (0x000175f4) list_double_number_pane

0xaafc,	// (0x000175f4) list_double_pane_ParamLimits

0xaafc,	// (0x000175f4) list_double_pane

0xaafc,	// (0x000175f4) list_double_time_pane_ParamLimits

0xaafc,	// (0x000175f4) list_double_time_pane

0xaafc,	// (0x000175f4) list_setting_number_pane_ParamLimits

0xaafc,	// (0x000175f4) list_setting_number_pane

0xaafc,	// (0x000175f4) list_setting_pane_ParamLimits

0xaafc,	// (0x000175f4) list_setting_pane

0xab67,	// (0x0001765f) list_single_2graphic_pane_ParamLimits

0xab67,	// (0x0001765f) list_single_2graphic_pane

0xab67,	// (0x0001765f) list_single_graphic_heading_pane_ParamLimits

0xab67,	// (0x0001765f) list_single_graphic_heading_pane

0xab67,	// (0x0001765f) list_single_graphic_pane_ParamLimits

0xab67,	// (0x0001765f) list_single_graphic_pane

0xab67,	// (0x0001765f) list_single_heading_pane_ParamLimits

0xab67,	// (0x0001765f) list_single_heading_pane

0xabe1,	// (0x000176d9) list_single_large_graphic_pane_ParamLimits

0xabe1,	// (0x000176d9) list_single_large_graphic_pane

0xab67,	// (0x0001765f) list_single_number_heading_pane_ParamLimits

0xab67,	// (0x0001765f) list_single_number_heading_pane

0xab67,	// (0x0001765f) list_single_number_pane_ParamLimits

0xab67,	// (0x0001765f) list_single_number_pane

0xab67,	// (0x0001765f) list_single_pane_ParamLimits

0xab67,	// (0x0001765f) list_single_pane

0x3d5d,	// (0x00010855) list_highlight_pane_cp1

0x7ecf,	// (0x000149c7) list_single_pane_g1_ParamLimits

0x7ecf,	// (0x000149c7) list_single_pane_g1

0x7edb,	// (0x000149d3) list_single_pane_g2_ParamLimits

0x7edb,	// (0x000149d3) list_single_pane_g2

0x0001,

0xf5c8,	// (0x0001c0c0) list_single_pane_g_ParamLimits

0xf5c8,	// (0x0001c0c0) list_single_pane_g

0xaab5,	// (0x000175ad) list_single_pane_t1_ParamLimits

0xaab5,	// (0x000175ad) list_single_pane_t1

0x7ecf,	// (0x000149c7) list_single_number_pane_g1_ParamLimits

0x7ecf,	// (0x000149c7) list_single_number_pane_g1

0x7edb,	// (0x000149d3) list_single_number_pane_g2_ParamLimits

0x7edb,	// (0x000149d3) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x0001c0c0) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x0001c0c0) list_single_number_pane_g

0xa841,	// (0x00017339) list_single_number_pane_t1_ParamLimits

0xa841,	// (0x00017339) list_single_number_pane_t1

0xa857,	// (0x0001734f) list_single_number_pane_t2_ParamLimits

0xa857,	// (0x0001734f) list_single_number_pane_t2

0x0001,

0xf95a,	// (0x0001c452) list_single_number_pane_t_ParamLimits

0xf95a,	// (0x0001c452) list_single_number_pane_t

0x7ec3,	// (0x000149bb) list_single_graphic_pane_g1_ParamLimits

0x7ec3,	// (0x000149bb) list_single_graphic_pane_g1

0x7ecf,	// (0x000149c7) list_single_graphic_pane_g2_ParamLimits

0x7ecf,	// (0x000149c7) list_single_graphic_pane_g2

0x7edb,	// (0x000149d3) list_single_graphic_pane_g3_ParamLimits

0x7edb,	// (0x000149d3) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0001c0b9) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0001c0b9) list_single_graphic_pane_g

0x7ee7,	// (0x000149df) list_single_graphic_pane_t1_ParamLimits

0x7ee7,	// (0x000149df) list_single_graphic_pane_t1

0x7ecf,	// (0x000149c7) list_single_heading_pane_g1_ParamLimits

0x7ecf,	// (0x000149c7) list_single_heading_pane_g1

0x7edb,	// (0x000149d3) list_single_heading_pane_g2_ParamLimits

0x7edb,	// (0x000149d3) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x0001c0c0) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x0001c0c0) list_single_heading_pane_g

0x7efd,	// (0x000149f5) list_single_heading_pane_t1_ParamLimits

0x7efd,	// (0x000149f5) list_single_heading_pane_t1

0x7f13,	// (0x00014a0b) list_single_heading_pane_t2_ParamLimits

0x7f13,	// (0x00014a0b) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x0001c0c5) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x0001c0c5) list_single_heading_pane_t

0x7ecf,	// (0x000149c7) list_single_number_heading_pane_g1_ParamLimits

0x7ecf,	// (0x000149c7) list_single_number_heading_pane_g1

0x7edb,	// (0x000149d3) list_single_number_heading_pane_g2_ParamLimits

0x7edb,	// (0x000149d3) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x0001c0c0) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x0001c0c0) list_single_number_heading_pane_g

0x7efd,	// (0x000149f5) list_single_number_heading_pane_t1_ParamLimits

0x7efd,	// (0x000149f5) list_single_number_heading_pane_t1

0x7f25,	// (0x00014a1d) list_single_number_heading_pane_t2_ParamLimits

0x7f25,	// (0x00014a1d) list_single_number_heading_pane_t2

0x7f37,	// (0x00014a2f) list_single_number_heading_pane_t3_ParamLimits

0x7f37,	// (0x00014a2f) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x0001c0ca) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x0001c0ca) list_single_number_heading_pane_t

0x7f49,	// (0x00014a41) list_single_graphic_heading_pane_g1_ParamLimits

0x7f49,	// (0x00014a41) list_single_graphic_heading_pane_g1

0x7f55,	// (0x00014a4d) list_single_graphic_heading_pane_g4_ParamLimits

0x7f55,	// (0x00014a4d) list_single_graphic_heading_pane_g4

0x7edb,	// (0x000149d3) list_single_graphic_heading_pane_g5_ParamLimits

0x7edb,	// (0x000149d3) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x0001c0d1) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x0001c0d1) list_single_graphic_heading_pane_g

0x7efd,	// (0x000149f5) list_single_graphic_heading_pane_t1_ParamLimits

0x7efd,	// (0x000149f5) list_single_graphic_heading_pane_t1

0x7f66,	// (0x00014a5e) list_single_graphic_heading_pane_t2_ParamLimits

0x7f66,	// (0x00014a5e) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x0001c0d8) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x0001c0d8) list_single_graphic_heading_pane_t

0x7f78,	// (0x00014a70) list_single_large_graphic_pane_g1_ParamLimits

0x7f78,	// (0x00014a70) list_single_large_graphic_pane_g1

0x4155,	// (0x00010c4d) list_single_large_graphic_pane_g2_ParamLimits

0x4155,	// (0x00010c4d) list_single_large_graphic_pane_g2

0x4161,	// (0x00010c59) list_single_large_graphic_pane_g3_ParamLimits

0x4161,	// (0x00010c59) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x0001c0dd) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x0001c0dd) list_single_large_graphic_pane_g

0x9b3c,	// (0x00016634) wait_border_pane_g2_copy1

0x7f84,	// (0x00014a7c) list_single_large_graphic_pane_g4_cp2

0x7f8c,	// (0x00014a84) list_single_large_graphic_pane_t1_ParamLimits

0x7f8c,	// (0x00014a84) list_single_large_graphic_pane_t1

0x418e,	// (0x00010c86) list_double_pane_g1_ParamLimits

0x418e,	// (0x00010c86) list_double_pane_g1

0x7fa2,	// (0x00014a9a) list_double_pane_g2_ParamLimits

0x7fa2,	// (0x00014a9a) list_double_pane_g2

0x0001,

0xf5ec,	// (0x0001c0e4) list_double_pane_g_ParamLimits

0xf5ec,	// (0x0001c0e4) list_double_pane_g

0x7fae,	// (0x00014aa6) list_double_pane_t1_ParamLimits

0x7fae,	// (0x00014aa6) list_double_pane_t1

0x7fc4,	// (0x00014abc) list_double_pane_t2_ParamLimits

0x7fc4,	// (0x00014abc) list_double_pane_t2

0x0001,

0xf5f1,	// (0x0001c0e9) list_double_pane_t_ParamLimits

0xf5f1,	// (0x0001c0e9) list_double_pane_t

0x7fd6,	// (0x00014ace) list_double2_pane_g1_ParamLimits

0x7fd6,	// (0x00014ace) list_double2_pane_g1

0x7fe7,	// (0x00014adf) list_double2_pane_g2_ParamLimits

0x7fe7,	// (0x00014adf) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x0001c0ee) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x0001c0ee) list_double2_pane_g

0x7ff3,	// (0x00014aeb) list_double2_pane_t1_ParamLimits

0x7ff3,	// (0x00014aeb) list_double2_pane_t1

0x8009,	// (0x00014b01) list_double2_pane_t2_ParamLimits

0x8009,	// (0x00014b01) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x0001c0f3) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x0001c0f3) list_double2_pane_t

0x418e,	// (0x00010c86) list_double_number_pane_g1_ParamLimits

0x418e,	// (0x00010c86) list_double_number_pane_g1

0x7fa2,	// (0x00014a9a) list_double_number_pane_g2_ParamLimits

0x7fa2,	// (0x00014a9a) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x0001c0e4) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x0001c0e4) list_double_number_pane_g

0x801b,	// (0x00014b13) list_double_number_pane_t1_ParamLimits

0x801b,	// (0x00014b13) list_double_number_pane_t1

0x802d,	// (0x00014b25) list_double_number_pane_t2_ParamLimits

0x802d,	// (0x00014b25) list_double_number_pane_t2

0x8043,	// (0x00014b3b) list_double_number_pane_t3_ParamLimits

0x8043,	// (0x00014b3b) list_double_number_pane_t3

0x0002,

0xf600,	// (0x0001c0f8) list_double_number_pane_t_ParamLimits

0xf600,	// (0x0001c0f8) list_double_number_pane_t

0x8055,	// (0x00014b4d) list_double_graphic_pane_g1_ParamLimits

0x8055,	// (0x00014b4d) list_double_graphic_pane_g1

0x8061,	// (0x00014b59) list_double_graphic_pane_g2_ParamLimits

0x8061,	// (0x00014b59) list_double_graphic_pane_g2

0x8070,	// (0x00014b68) list_double_graphic_pane_g3_ParamLimits

0x8070,	// (0x00014b68) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x0001c0ff) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x0001c0ff) list_double_graphic_pane_g

0x8088,	// (0x00014b80) list_double_graphic_pane_t1_ParamLimits

0x8088,	// (0x00014b80) list_double_graphic_pane_t1

0x809e,	// (0x00014b96) list_double_graphic_pane_t2_ParamLimits

0x809e,	// (0x00014b96) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x0001c108) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x0001c108) list_double_graphic_pane_t

0x80b0,	// (0x00014ba8) list_double2_graphic_pane_g1_ParamLimits

0x80b0,	// (0x00014ba8) list_double2_graphic_pane_g1

0x419a,	// (0x00010c92) list_double2_graphic_pane_g2_ParamLimits

0x419a,	// (0x00010c92) list_double2_graphic_pane_g2

0x7fe7,	// (0x00014adf) list_double2_graphic_pane_g3_ParamLimits

0x7fe7,	// (0x00014adf) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x0001c10d) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x0001c10d) list_double2_graphic_pane_g

0x80bc,	// (0x00014bb4) list_double2_graphic_pane_t1_ParamLimits

0x80bc,	// (0x00014bb4) list_double2_graphic_pane_t1

0x80d2,	// (0x00014bca) list_double2_graphic_pane_t2_ParamLimits

0x80d2,	// (0x00014bca) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x0001c114) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x0001c114) list_double2_graphic_pane_t

0x80e4,	// (0x00014bdc) list_double_large_graphic_pane_g1_ParamLimits

0x80e4,	// (0x00014bdc) list_double_large_graphic_pane_g1

0x8103,	// (0x00014bfb) list_double_large_graphic_pane_g2_ParamLimits

0x8103,	// (0x00014bfb) list_double_large_graphic_pane_g2

0x7fa2,	// (0x00014a9a) list_double_large_graphic_pane_g3_ParamLimits

0x7fa2,	// (0x00014a9a) list_double_large_graphic_pane_g3

0x8114,	// (0x00014c0c) list_double_large_graphic_pane_g4_ParamLimits

0x8114,	// (0x00014c0c) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x0001c119) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x0001c119) list_double_large_graphic_pane_g

0x8126,	// (0x00014c1e) list_double_large_graphic_pane_t1_ParamLimits

0x8126,	// (0x00014c1e) list_double_large_graphic_pane_t1

0x813f,	// (0x00014c37) list_double_large_graphic_pane_t2_ParamLimits

0x813f,	// (0x00014c37) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x0001c124) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x0001c124) list_double_large_graphic_pane_t

0x8151,	// (0x00014c49) list_double2_large_graphic_pane_g1_ParamLimits

0x8151,	// (0x00014c49) list_double2_large_graphic_pane_g1

0x7fd6,	// (0x00014ace) list_double2_large_graphic_pane_g2_ParamLimits

0x7fd6,	// (0x00014ace) list_double2_large_graphic_pane_g2

0x7fe7,	// (0x00014adf) list_double2_large_graphic_pane_g3_ParamLimits

0x7fe7,	// (0x00014adf) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x0001c129) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x0001c129) list_double2_large_graphic_pane_g

0x815d,	// (0x00014c55) list_double2_large_graphic_pane_t1_ParamLimits

0x815d,	// (0x00014c55) list_double2_large_graphic_pane_t1

0x8173,	// (0x00014c6b) list_double2_large_graphic_pane_t2_ParamLimits

0x8173,	// (0x00014c6b) list_double2_large_graphic_pane_t2

0x0001,

0xf638,	// (0x0001c130) list_double2_large_graphic_pane_t_ParamLimits

0xf638,	// (0x0001c130) list_double2_large_graphic_pane_t

0x8185,	// (0x00014c7d) list_double_heading_pane_g1_ParamLimits

0x8185,	// (0x00014c7d) list_double_heading_pane_g1

0x8196,	// (0x00014c8e) list_double_heading_pane_g2_ParamLimits

0x8196,	// (0x00014c8e) list_double_heading_pane_g2

0x0001,

0xf63d,	// (0x0001c135) list_double_heading_pane_g_ParamLimits

0xf63d,	// (0x0001c135) list_double_heading_pane_g

0x81a2,	// (0x00014c9a) list_double_heading_pane_t1_ParamLimits

0x81a2,	// (0x00014c9a) list_double_heading_pane_t1

0x8009,	// (0x00014b01) list_double_heading_pane_t2_ParamLimits

0x8009,	// (0x00014b01) list_double_heading_pane_t2

0x0001,

0xf642,	// (0x0001c13a) list_double_heading_pane_t_ParamLimits

0xf642,	// (0x0001c13a) list_double_heading_pane_t

0x416d,	// (0x00010c65) list_double_graphic_heading_pane_g1_ParamLimits

0x416d,	// (0x00010c65) list_double_graphic_heading_pane_g1

0x8185,	// (0x00014c7d) list_double_graphic_heading_pane_g2_ParamLimits

0x8185,	// (0x00014c7d) list_double_graphic_heading_pane_g2

0x8196,	// (0x00014c8e) list_double_graphic_heading_pane_g3_ParamLimits

0x8196,	// (0x00014c8e) list_double_graphic_heading_pane_g3

0x0002,

0xf647,	// (0x0001c13f) list_double_graphic_heading_pane_g_ParamLimits

0xf647,	// (0x0001c13f) list_double_graphic_heading_pane_g

0x81b8,	// (0x00014cb0) list_double_graphic_heading_pane_t1_ParamLimits

0x81b8,	// (0x00014cb0) list_double_graphic_heading_pane_t1

0x80d2,	// (0x00014bca) list_double_graphic_heading_pane_t2_ParamLimits

0x80d2,	// (0x00014bca) list_double_graphic_heading_pane_t2

0x0001,

0xf64e,	// (0x0001c146) list_double_graphic_heading_pane_t_ParamLimits

0xf64e,	// (0x0001c146) list_double_graphic_heading_pane_t

0x8103,	// (0x00014bfb) list_double_time_pane_g1_ParamLimits

0x8103,	// (0x00014bfb) list_double_time_pane_g1

0x7fa2,	// (0x00014a9a) list_double_time_pane_g2_ParamLimits

0x7fa2,	// (0x00014a9a) list_double_time_pane_g2

0x0001,

0xf653,	// (0x0001c14b) list_double_time_pane_g_ParamLimits

0xf653,	// (0x0001c14b) list_double_time_pane_g

0x81ce,	// (0x00014cc6) list_double_time_pane_t1_ParamLimits

0x81ce,	// (0x00014cc6) list_double_time_pane_t1

0x81e4,	// (0x00014cdc) list_double_time_pane_t2_ParamLimits

0x81e4,	// (0x00014cdc) list_double_time_pane_t2

0x81f6,	// (0x00014cee) list_double_time_pane_t3_ParamLimits

0x81f6,	// (0x00014cee) list_double_time_pane_t3

0x8208,	// (0x00014d00) list_double_time_pane_t4_ParamLimits

0x8208,	// (0x00014d00) list_double_time_pane_t4

0x0003,

0xf658,	// (0x0001c150) list_double_time_pane_t_ParamLimits

0xf658,	// (0x0001c150) list_double_time_pane_t

0x419a,	// (0x00010c92) list_setting_pane_g1_ParamLimits

0x419a,	// (0x00010c92) list_setting_pane_g1

0x7fe7,	// (0x00014adf) list_setting_pane_g2_ParamLimits

0x7fe7,	// (0x00014adf) list_setting_pane_g2

0x0001,

0xf661,	// (0x0001c159) list_setting_pane_g_ParamLimits

0xf661,	// (0x0001c159) list_setting_pane_g

0x821a,	// (0x00014d12) list_setting_pane_t1_ParamLimits

0x821a,	// (0x00014d12) list_setting_pane_t1

0x8231,	// (0x00014d29) list_setting_pane_t2_ParamLimits

0x8231,	// (0x00014d29) list_setting_pane_t2

0x0002,

0xf666,	// (0x0001c15e) list_setting_pane_t_ParamLimits

0xf666,	// (0x0001c15e) list_setting_pane_t

0x826e,	// (0x00014d66) set_value_pane_cp_ParamLimits

0x826e,	// (0x00014d66) set_value_pane_cp

0x419a,	// (0x00010c92) list_setting_number_pane_g1_ParamLimits

0x419a,	// (0x00010c92) list_setting_number_pane_g1

0x7fe7,	// (0x00014adf) list_setting_number_pane_g2_ParamLimits

0x7fe7,	// (0x00014adf) list_setting_number_pane_g2

0x0001,

0xf661,	// (0x0001c159) list_setting_number_pane_g_ParamLimits

0xf661,	// (0x0001c159) list_setting_number_pane_g

0x827a,	// (0x00014d72) list_setting_number_pane_t1_ParamLimits

0x827a,	// (0x00014d72) list_setting_number_pane_t1

0x828e,	// (0x00014d86) list_setting_number_pane_t2_ParamLimits

0x828e,	// (0x00014d86) list_setting_number_pane_t2

0x82a5,	// (0x00014d9d) list_setting_number_pane_t3_ParamLimits

0x82a5,	// (0x00014d9d) list_setting_number_pane_t3

0x0003,

0xf66d,	// (0x0001c165) list_setting_number_pane_t_ParamLimits

0xf66d,	// (0x0001c165) list_setting_number_pane_t

0x826e,	// (0x00014d66) set_value_pane_ParamLimits

0x826e,	// (0x00014d66) set_value_pane

0x41a6,	// (0x00010c9e) bg_set_opt_pane_ParamLimits

0x41a6,	// (0x00010c9e) bg_set_opt_pane

0x41c7,	// (0x00010cbf) set_value_pane_t1

0x41d5,	// (0x00010ccd) slider_set_pane_cp3

0x82e8,	// (0x00014de0) volume_small_pane_cp

0x41de,	// (0x00010cd6) list_form_gen_pane

0x41e7,	// (0x00010cdf) scroll_pane_cp8

0x82f1,	// (0x00014de9) form_field_data_pane_ParamLimits

0x82f1,	// (0x00014de9) form_field_data_pane

0x8309,	// (0x00014e01) form_field_data_wide_pane_ParamLimits

0x8309,	// (0x00014e01) form_field_data_wide_pane

0x832a,	// (0x00014e22) form_field_popup_pane_ParamLimits

0x832a,	// (0x00014e22) form_field_popup_pane

0x834a,	// (0x00014e42) form_field_popup_wide_pane_ParamLimits

0x834a,	// (0x00014e42) form_field_popup_wide_pane

0x4208,	// (0x00010d00) form_field_slider_pane_ParamLimits

0x4208,	// (0x00010d00) form_field_slider_pane

0x8367,	// (0x00014e5f) form_field_slider_wide_pane_ParamLimits

0x8367,	// (0x00014e5f) form_field_slider_wide_pane

0x421b,	// (0x00010d13) data_form_pane

0x8384,	// (0x00014e7c) form_field_data_pane_t1

0x4227,	// (0x00010d1f) input_focus_pane

0x839c,	// (0x00014e94) data_form_wide_pane

0x83a8,	// (0x00014ea0) form_field_data_wide_pane_t1

0x4099,	// (0x00010b91) input_focus_pane_cp6

0x83bf,	// (0x00014eb7) form_field_popup_pane_t1

0x4227,	// (0x00010d1f) input_focus_pane_cp7

0x425d,	// (0x00010d55) list_form_pane

0x4271,	// (0x00010d69) form_field_popup_wide_pane_t1

0x4227,	// (0x00010d1f) input_focus_pane_cp8

0x4286,	// (0x00010d7e) list_form_wide_pane

0x83df,	// (0x00014ed7) form_field_slider_pane_t1_ParamLimits

0x83df,	// (0x00014ed7) form_field_slider_pane_t1

0x83f1,	// (0x00014ee9) form_field_slider_pane_t2_ParamLimits

0x83f1,	// (0x00014ee9) form_field_slider_pane_t2

0x0001,

0xf67d,	// (0x0001c175) form_field_slider_pane_t_ParamLimits

0xf67d,	// (0x0001c175) form_field_slider_pane_t

0x3dcb,	// (0x000108c3) input_focus_pane_cp9_ParamLimits

0x3dcb,	// (0x000108c3) input_focus_pane_cp9

0x8403,	// (0x00014efb) slider_cont_pane_ParamLimits

0x8403,	// (0x00014efb) slider_cont_pane

0x4295,	// (0x00010d8d) form_field_slider_wide_pane_t1_ParamLimits

0x4295,	// (0x00010d8d) form_field_slider_wide_pane_t1

0x42a7,	// (0x00010d9f) form_field_slider_wide_pane_t2_ParamLimits

0x42a7,	// (0x00010d9f) form_field_slider_wide_pane_t2

0x0001,

0xf682,	// (0x0001c17a) form_field_slider_wide_pane_t_ParamLimits

0xf682,	// (0x0001c17a) form_field_slider_wide_pane_t

0x3dcb,	// (0x000108c3) input_focus_pane_cp10_ParamLimits

0x3dcb,	// (0x000108c3) input_focus_pane_cp10

0x8417,	// (0x00014f0f) slider_cont_pane_cp1_ParamLimits

0x8417,	// (0x00014f0f) slider_cont_pane_cp1

0x842b,	// (0x00014f23) slider_form_pane_cp

0x42b9,	// (0x00010db1) input_focus_pane_g1

0x42c1,	// (0x00010db9) input_focus_pane_g2

0x42c9,	// (0x00010dc1) input_focus_pane_g3

0x42d1,	// (0x00010dc9) input_focus_pane_g4

0x42d9,	// (0x00010dd1) input_focus_pane_g5

0x42e1,	// (0x00010dd9) input_focus_pane_g6

0x42e9,	// (0x00010de1) input_focus_pane_g7

0x42f1,	// (0x00010de9) input_focus_pane_g8

0x42f9,	// (0x00010df1) input_focus_pane_g9

0x3be4,	// (0x000106dc) input_focus_pane_g10

0x0009,

0xf687,	// (0x0001c17f) input_focus_pane_g

0x9b45,	// (0x0001663d) wait_border_pane_g3_copy1

0x8433,	// (0x00014f2b) data_form_pane_t1

0x3be4,	// (0x000106dc) wait_anim_pane_g1_copy1

0xaa98,	// (0x00017590) data_form_wide_pane_t1

0x844e,	// (0x00014f46) list_form_graphic_pane_cp_ParamLimits

0x844e,	// (0x00014f46) list_form_graphic_pane_cp

0xaa6d,	// (0x00017565) slider_form_pane_g1

0xaa76,	// (0x0001756e) slider_form_pane_g2

0x0006,

0xf98a,	// (0x0001c482) slider_form_pane_g

0x8462,	// (0x00014f5a) list_form_graphic_pane_ParamLimits

0x8462,	// (0x00014f5a) list_form_graphic_pane

0x8479,	// (0x00014f71) list_form_graphic_pane_g1

0x8481,	// (0x00014f79) list_form_graphic_pane_t1_ParamLimits

0x8481,	// (0x00014f79) list_form_graphic_pane_t1

0x3dd9,	// (0x000108d1) list_highlight_pane_cp5_ParamLimits

0x3dd9,	// (0x000108d1) list_highlight_pane_cp5

0x8496,	// (0x00014f8e) find_pane_g1

0x4301,	// (0x00010df9) input_find_pane

0x849f,	// (0x00014f97) input_find_pane_g1_ParamLimits

0x849f,	// (0x00014f97) input_find_pane_g1

0x84ab,	// (0x00014fa3) input_find_pane_t1_ParamLimits

0x84ab,	// (0x00014fa3) input_find_pane_t1

0x84c0,	// (0x00014fb8) input_find_pane_t2_ParamLimits

0x84c0,	// (0x00014fb8) input_find_pane_t2

0x0001,

0xf69c,	// (0x0001c194) input_find_pane_t_ParamLimits

0xf69c,	// (0x0001c194) input_find_pane_t

0x430a,	// (0x00010e02) input_focus_pane_cp5_ParamLimits

0x430a,	// (0x00010e02) input_focus_pane_cp5

0x4318,	// (0x00010e10) bg_popup_window_pane_cp2_ParamLimits

0x4318,	// (0x00010e10) bg_popup_window_pane_cp2

0x4325,	// (0x00010e1d) listscroll_menu_pane_ParamLimits

0x4325,	// (0x00010e1d) listscroll_menu_pane

0x84e1,	// (0x00014fd9) popup_submenu_window_ParamLimits

0x84e1,	// (0x00014fd9) popup_submenu_window

0x4331,	// (0x00010e29) find_popup_pane_g1

0x8509,	// (0x00015001) input_popup_find_pane_cp

0x430a,	// (0x00010e02) input_focus_pane_cp4_ParamLimits

0x430a,	// (0x00010e02) input_focus_pane_cp4

0x4339,	// (0x00010e31) input_popup_find_pane_t1_ParamLimits

0x4339,	// (0x00010e31) input_popup_find_pane_t1

0x3d5d,	// (0x00010855) bg_popup_sub_pane_cp

0x4367,	// (0x00010e5f) listscroll_popup_sub_pane

0x436f,	// (0x00010e67) list_submenu_pane_ParamLimits

0x436f,	// (0x00010e67) list_submenu_pane

0x4380,	// (0x00010e78) scroll_pane_cp4

0x8521,	// (0x00015019) list_single_popup_submenu_pane_ParamLimits

0x8521,	// (0x00015019) list_single_popup_submenu_pane

0x4436,	// (0x00010f2e) list_single_popup_submenu_pane_g1

0x8535,	// (0x0001502d) list_single_popup_submenu_pane_t1_ParamLimits

0x8535,	// (0x0001502d) list_single_popup_submenu_pane_t1

0x3dd9,	// (0x000108d1) bg_active_tab_pane_cp1_ParamLimits

0x3dd9,	// (0x000108d1) bg_active_tab_pane_cp1

0x4388,	// (0x00010e80) tabs_2_active_pane_g1

0x854a,	// (0x00015042) tabs_2_active_pane_t1

0x3dd9,	// (0x000108d1) bg_passive_tab_pane_cp1_ParamLimits

0x3dd9,	// (0x000108d1) bg_passive_tab_pane_cp1

0x4388,	// (0x00010e80) tabs_2_passive_pane_g1

0x854a,	// (0x00015042) tabs_2_passive_pane_t1

0x4428,	// (0x00010f20) bg_active_tab_pane_cp4

0x855c,	// (0x00015054) tabs_2_long_active_pane_t1

0x856f,	// (0x00015067) bg_passive_tab_pane_cp4

0x652f,	// (0x00013027) list_single_midp_graphic_pane_g4_ParamLimits

0x4428,	// (0x00010f20) bg_active_tab_pane_cp5

0x857b,	// (0x00015073) tabs_3_long_active_pane_t1

0x856f,	// (0x00015067) bg_passive_tab_pane_cp5

0x652f,	// (0x00013027) list_single_midp_graphic_pane_g4

0x3dd9,	// (0x000108d1) bg_popup_window_pane_cp13_ParamLimits

0x3dd9,	// (0x000108d1) bg_popup_window_pane_cp13

0x4390,	// (0x00010e88) listscroll_popup_fast_pane_ParamLimits

0x4390,	// (0x00010e88) listscroll_popup_fast_pane

0x439c,	// (0x00010e94) grid_popup_fast_pane_ParamLimits

0x439c,	// (0x00010e94) grid_popup_fast_pane

0x43ae,	// (0x00010ea6) scroll_pane_cp9_ParamLimits

0x43ae,	// (0x00010ea6) scroll_pane_cp9

0xc9b1,	// (0x000194a9) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc9b1,	// (0x000194a9) list_single_graphic_hl_pane_t1_cp2

0x43c1,	// (0x00010eb9) input_focus_pane_cp20_ParamLimits

0x43c1,	// (0x00010eb9) input_focus_pane_cp20

0x43cf,	// (0x00010ec7) query_popup_data_pane_t1_ParamLimits

0x43cf,	// (0x00010ec7) query_popup_data_pane_t1

0x43e2,	// (0x00010eda) query_popup_data_pane_t2_ParamLimits

0x43e2,	// (0x00010eda) query_popup_data_pane_t2

0x443e,	// (0x00010f36) query_popup_data_pane_t3_ParamLimits

0x443e,	// (0x00010f36) query_popup_data_pane_t3

0x447f,	// (0x00010f77) query_popup_data_pane_t4_ParamLimits

0x447f,	// (0x00010f77) query_popup_data_pane_t4

0x44bb,	// (0x00010fb3) query_popup_data_pane_t5_ParamLimits

0x44bb,	// (0x00010fb3) query_popup_data_pane_t5

0x0004,

0xf6a1,	// (0x0001c199) query_popup_data_pane_t_ParamLimits

0xf6a1,	// (0x0001c199) query_popup_data_pane_t

0x42b9,	// (0x00010db1) bg_set_opt_pane_g1

0x42c1,	// (0x00010db9) bg_set_opt_pane_g2

0x42c9,	// (0x00010dc1) bg_set_opt_pane_g3

0x42d1,	// (0x00010dc9) bg_set_opt_pane_g4

0x42d9,	// (0x00010dd1) bg_set_opt_pane_g5

0x42e1,	// (0x00010dd9) bg_set_opt_pane_g6

0x42e9,	// (0x00010de1) bg_set_opt_pane_g7

0x42f1,	// (0x00010de9) bg_set_opt_pane_g8

0x42f9,	// (0x00010df1) bg_set_opt_pane_g9

0x0008,

0xf6ac,	// (0x0001c1a4) bg_set_opt_pane_g

0x5b4d,	// (0x00012645) control_top_pane_stacon_ParamLimits

0x5b4d,	// (0x00012645) control_top_pane_stacon

0x5ba0,	// (0x00012698) signal_pane_stacon_ParamLimits

0x5ba0,	// (0x00012698) signal_pane_stacon

0x885e,	// (0x00015356) stacon_top_pane_g1_ParamLimits

0x885e,	// (0x00015356) stacon_top_pane_g1

0x5bc5,	// (0x000126bd) title_pane_stacon_ParamLimits

0x5bc5,	// (0x000126bd) title_pane_stacon

0x5bef,	// (0x000126e7) uni_indicator_pane_stacon_ParamLimits

0x5bef,	// (0x000126e7) uni_indicator_pane_stacon

0x5c04,	// (0x000126fc) battery_pane_stacon_ParamLimits

0x5c04,	// (0x000126fc) battery_pane_stacon

0x5c48,	// (0x00012740) control_bottom_pane_stacon_ParamLimits

0x5c48,	// (0x00012740) control_bottom_pane_stacon

0x5c6b,	// (0x00012763) navi_pane_stacon_ParamLimits

0x5c6b,	// (0x00012763) navi_pane_stacon

0x8880,	// (0x00015378) stacon_bottom_pane_g1_ParamLimits

0x8880,	// (0x00015378) stacon_bottom_pane_g1

0x58b9,	// (0x000123b1) aid_levels_signal_lsc_ParamLimits

0x58b9,	// (0x000123b1) aid_levels_signal_lsc

0x58cf,	// (0x000123c7) signal_pane_stacon_g1_ParamLimits

0x58cf,	// (0x000123c7) signal_pane_stacon_g1

0x58e3,	// (0x000123db) signal_pane_stacon_g2_ParamLimits

0x58e3,	// (0x000123db) signal_pane_stacon_g2

0x0001,

0xf6bf,	// (0x0001c1b7) signal_pane_stacon_g_ParamLimits

0xf6bf,	// (0x0001c1b7) signal_pane_stacon_g

0x5918,	// (0x00012410) title_pane_stacon_t1_ParamLimits

0x5918,	// (0x00012410) title_pane_stacon_t1

0x4597,	// (0x0001108f) uni_indicator_pane_stacon_g1

0x45a1,	// (0x00011099) uni_indicator_pane_stacon_g2

0x4583,	// (0x0001107b) uni_indicator_pane_stacon_g3

0x458d,	// (0x00011085) uni_indicator_pane_stacon_g4

0x0003,

0xf6cb,	// (0x0001c1c3) uni_indicator_pane_stacon_g

0x593d,	// (0x00012435) control_top_pane_stacon_g1

0x5945,	// (0x0001243d) control_top_pane_stacon_t1_ParamLimits

0x5945,	// (0x0001243d) control_top_pane_stacon_t1

0x597c,	// (0x00012474) aid_levels_battery_lsc_ParamLimits

0x597c,	// (0x00012474) aid_levels_battery_lsc

0x5993,	// (0x0001248b) battery_pane_stacon_g1_ParamLimits

0x5993,	// (0x0001248b) battery_pane_stacon_g1

0x59a6,	// (0x0001249e) battery_pane_stacon_g2_ParamLimits

0x59a6,	// (0x0001249e) battery_pane_stacon_g2

0x0001,

0xf6d4,	// (0x0001c1cc) battery_pane_stacon_g_ParamLimits

0xf6d4,	// (0x0001c1cc) battery_pane_stacon_g

0x59e4,	// (0x000124dc) navi_icon_pane_stacon

0x59f8,	// (0x000124f0) navi_navi_pane_stacon

0x59e4,	// (0x000124dc) navi_text_pane_stacon

0x593d,	// (0x00012435) control_bottom_pane_stacon_g1

0x5a0c,	// (0x00012504) control_bottom_pane_stacon_t1_ParamLimits

0x5a0c,	// (0x00012504) control_bottom_pane_stacon_t1

0x85a7,	// (0x0001509f) grid_app_pane_ParamLimits

0x85a7,	// (0x0001509f) grid_app_pane

0x85cb,	// (0x000150c3) scroll_pane_cp15_ParamLimits

0x85cb,	// (0x000150c3) scroll_pane_cp15

0x85de,	// (0x000150d6) cell_app_pane_ParamLimits

0x85de,	// (0x000150d6) cell_app_pane

0x8606,	// (0x000150fe) cell_app_pane_g1_ParamLimits

0x8606,	// (0x000150fe) cell_app_pane_g1

0x46cb,	// (0x000111c3) cell_app_pane_g2_ParamLimits

0x46cb,	// (0x000111c3) cell_app_pane_g2

0x0001,

0xf6d9,	// (0x0001c1d1) cell_app_pane_g_ParamLimits

0xf6d9,	// (0x0001c1d1) cell_app_pane_g

0x862a,	// (0x00015122) cell_app_pane_t1_ParamLimits

0x862a,	// (0x00015122) cell_app_pane_t1

0x46d7,	// (0x000111cf) grid_highlight_pane_ParamLimits

0x46d7,	// (0x000111cf) grid_highlight_pane

0x42b9,	// (0x00010db1) cell_highlight_pane_g1

0x42c1,	// (0x00010db9) cell_highlight_pane_g2

0x42c9,	// (0x00010dc1) cell_highlight_pane_g3

0x42d1,	// (0x00010dc9) cell_highlight_pane_g4

0x42d9,	// (0x00010dd1) cell_highlight_pane_g5

0x42e1,	// (0x00010dd9) cell_highlight_pane_g6

0x42e9,	// (0x00010de1) cell_highlight_pane_g7

0x42f1,	// (0x00010de9) cell_highlight_pane_g8

0x42f9,	// (0x00010df1) cell_highlight_pane_g9

0x3be4,	// (0x000106dc) cell_highlight_pane_g10

0x0009,

0xf687,	// (0x0001c17f) cell_highlight_pane_g

0x46f2,	// (0x000111ea) bg_scroll_pane

0x5a56,	// (0x0001254e) scroll_handle_pane

0x474e,	// (0x00011246) scroll_bg_pane_g1

0x4763,	// (0x0001125b) scroll_bg_pane_g2

0x477b,	// (0x00011273) scroll_bg_pane_g3

0x0002,

0xf6de,	// (0x0001c1d6) scroll_bg_pane_g

0x8641,	// (0x00015139) scroll_handle_focus_pane_ParamLimits

0x8641,	// (0x00015139) scroll_handle_focus_pane

0x474e,	// (0x00011246) scroll_handle_pane_g1

0x4790,	// (0x00011288) scroll_handle_pane_g2

0x477b,	// (0x00011273) scroll_handle_pane_g3

0x0002,

0xf6e5,	// (0x0001c1dd) scroll_handle_pane_g

0x430a,	// (0x00010e02) bg_popup_sub_pane_cp21_ParamLimits

0x430a,	// (0x00010e02) bg_popup_sub_pane_cp21

0x864e,	// (0x00015146) popup_fep_japan_predictive_window_t1_ParamLimits

0x864e,	// (0x00015146) popup_fep_japan_predictive_window_t1

0x8668,	// (0x00015160) popup_fep_japan_predictive_window_t2_ParamLimits

0x8668,	// (0x00015160) popup_fep_japan_predictive_window_t2

0x869b,	// (0x00015193) popup_fep_japan_predictive_window_t3_ParamLimits

0x869b,	// (0x00015193) popup_fep_japan_predictive_window_t3

0x0002,

0xf6ec,	// (0x0001c1e4) popup_fep_japan_predictive_window_t_ParamLimits

0xf6ec,	// (0x0001c1e4) popup_fep_japan_predictive_window_t

0x3d5d,	// (0x00010855) bg_popup_sub_pane_cp23

0x47c4,	// (0x000112bc) listscroll_japin_cand_pane

0x47a4,	// (0x0001129c) popup_fep_japan_candidate_window_t1

0x47b2,	// (0x000112aa) candidate_pane_ParamLimits

0x47b2,	// (0x000112aa) candidate_pane

0x86d2,	// (0x000151ca) scroll_pane_cp30

0x47cc,	// (0x000112c4) list_single_popup_jap_candidate_pane_ParamLimits

0x47cc,	// (0x000112c4) list_single_popup_jap_candidate_pane

0x3d5d,	// (0x00010855) list_highlight_pane_cp30

0x47e1,	// (0x000112d9) list_single_popup_jap_candidate_pane_t1

0x47f0,	// (0x000112e8) level_1_signal

0x47fd,	// (0x000112f5) level_2_signal

0x480a,	// (0x00011302) level_3_signal

0x4817,	// (0x0001130f) level_4_signal

0x4824,	// (0x0001131c) level_5_signal

0x4831,	// (0x00011329) level_6_signal

0x483e,	// (0x00011336) level_7_signal

0x47f0,	// (0x000112e8) level_1_battery

0x47fd,	// (0x000112f5) level_2_battery

0x480a,	// (0x00011302) level_3_battery

0x4817,	// (0x0001130f) level_4_battery

0x4824,	// (0x0001131c) level_5_battery

0x4831,	// (0x00011329) level_6_battery

0x483e,	// (0x00011336) level_7_battery

0x4882,	// (0x0001137a) list_menu_pane_ParamLimits

0x4882,	// (0x0001137a) list_menu_pane

0x4898,	// (0x00011390) scroll_pane_cp25_ParamLimits

0x4898,	// (0x00011390) scroll_pane_cp25

0x48b1,	// (0x000113a9) list_double2_graphic_pane_cp2_ParamLimits

0x48b1,	// (0x000113a9) list_double2_graphic_pane_cp2

0x48b1,	// (0x000113a9) list_double2_large_graphic_pane_cp2_ParamLimits

0x48b1,	// (0x000113a9) list_double2_large_graphic_pane_cp2

0x48b1,	// (0x000113a9) list_double2_pane_cp2_ParamLimits

0x48b1,	// (0x000113a9) list_double2_pane_cp2

0x48b1,	// (0x000113a9) list_double_graphic_pane_cp2_ParamLimits

0x48b1,	// (0x000113a9) list_double_graphic_pane_cp2

0x48b1,	// (0x000113a9) list_double_large_graphic_pane_cp2_ParamLimits

0x48b1,	// (0x000113a9) list_double_large_graphic_pane_cp2

0x48b1,	// (0x000113a9) list_double_number_pane_cp2_ParamLimits

0x48b1,	// (0x000113a9) list_double_number_pane_cp2

0x48b1,	// (0x000113a9) list_double_pane_cp2_ParamLimits

0x48b1,	// (0x000113a9) list_double_pane_cp2

0x86ee,	// (0x000151e6) list_single_2graphic_pane_cp2_ParamLimits

0x86ee,	// (0x000151e6) list_single_2graphic_pane_cp2

0x86ee,	// (0x000151e6) list_single_graphic_heading_pane_cp2_ParamLimits

0x86ee,	// (0x000151e6) list_single_graphic_heading_pane_cp2

0x86ee,	// (0x000151e6) list_single_graphic_pane_cp2_ParamLimits

0x86ee,	// (0x000151e6) list_single_graphic_pane_cp2

0x86ee,	// (0x000151e6) list_single_heading_pane_cp2_ParamLimits

0x86ee,	// (0x000151e6) list_single_heading_pane_cp2

0x48c1,	// (0x000113b9) list_single_large_graphic_pane_cp2_ParamLimits

0x48c1,	// (0x000113b9) list_single_large_graphic_pane_cp2

0x86ee,	// (0x000151e6) list_single_number_heading_pane_cp2_ParamLimits

0x86ee,	// (0x000151e6) list_single_number_heading_pane_cp2

0x86ee,	// (0x000151e6) list_single_number_pane_cp2_ParamLimits

0x86ee,	// (0x000151e6) list_single_number_pane_cp2

0x86ee,	// (0x000151e6) list_single_pane_cp2_ParamLimits

0x86ee,	// (0x000151e6) list_single_pane_cp2

0x4936,	// (0x0001142e) bg_popup_sub_pane_cp22

0x5b05,	// (0x000125fd) popup_side_volume_key_window_g1

0x5b29,	// (0x00012621) popup_side_volume_key_window_t1

0x5b45,	// (0x0001263d) volume_small_pane_cp1

0x3dcb,	// (0x000108c3) bg_popup_sub_pane_cp24_ParamLimits

0x3dcb,	// (0x000108c3) bg_popup_sub_pane_cp24

0x4966,	// (0x0001145e) fep_china_uni_candidate_pane_ParamLimits

0x4966,	// (0x0001145e) fep_china_uni_candidate_pane

0x497a,	// (0x00011472) fep_china_uni_entry_pane

0x498a,	// (0x00011482) popup_fep_china_uni_window_g1

0x875f,	// (0x00015257) fep_china_uni_entry_pane_g1

0x8767,	// (0x0001525f) fep_china_uni_entry_pane_g2

0x0001,

0xf71d,	// (0x0001c215) fep_china_uni_entry_pane_g

0x49a6,	// (0x0001149e) fep_entry_item_pane

0x49b0,	// (0x000114a8) fep_candidate_item_pane

0x876f,	// (0x00015267) fep_china_uni_candidate_pane_g1

0x49b8,	// (0x000114b0) fep_china_uni_candidate_pane_g2

0x49c0,	// (0x000114b8) fep_china_uni_candidate_pane_g3

0x8777,	// (0x0001526f) fep_china_uni_candidate_pane_g4

0x0003,

0xf722,	// (0x0001c21a) fep_china_uni_candidate_pane_g

0x3be4,	// (0x000106dc) fep_entry_item_pane_g1

0x49c8,	// (0x000114c0) fep_entry_item_pane_t1_ParamLimits

0x49c8,	// (0x000114c0) fep_entry_item_pane_t1

0x49de,	// (0x000114d6) fep_candidate_item_pane_t1_ParamLimits

0x49de,	// (0x000114d6) fep_candidate_item_pane_t1

0x49f3,	// (0x000114eb) fep_candidate_item_pane_t2_ParamLimits

0x49f3,	// (0x000114eb) fep_candidate_item_pane_t2

0x0001,

0xf72b,	// (0x0001c223) fep_candidate_item_pane_t_ParamLimits

0xf72b,	// (0x0001c223) fep_candidate_item_pane_t

0x3dd9,	// (0x000108d1) list_highlight_pane_cp31_ParamLimits

0x3dd9,	// (0x000108d1) list_highlight_pane_cp31

0x4a05,	// (0x000114fd) level_1_signal_lsc

0x4a0e,	// (0x00011506) level_2_signal_lsc

0x4a17,	// (0x0001150f) level_3_signal_lsc

0x4a20,	// (0x00011518) level_4_signal_lsc

0x4a29,	// (0x00011521) level_5_signal_lsc

0x4a32,	// (0x0001152a) level_6_signal_lsc

0x4a3b,	// (0x00011533) level_7_signal_lsc

0x4a3b,	// (0x00011533) level_1_battery_lsc

0x4a44,	// (0x0001153c) level_2_battery_lsc

0x4a4d,	// (0x00011545) level_3_battery_lsc

0x4a56,	// (0x0001154e) level_4_battery_lsc

0x4a5f,	// (0x00011557) level_5_battery_lsc

0x4a68,	// (0x00011560) level_6_battery_lsc

0x4a05,	// (0x000114fd) level_7_battery_lsc

0x4a71,	// (0x00011569) scroll_handle_focus_pane_g1

0x4a7a,	// (0x00011572) scroll_handle_focus_pane_g2

0x4a83,	// (0x0001157b) scroll_handle_focus_pane_g3

0x0002,

0xf730,	// (0x0001c228) scroll_handle_focus_pane_g

0x877f,	// (0x00015277) list_single_2graphic_pane_g1_ParamLimits

0x877f,	// (0x00015277) list_single_2graphic_pane_g1

0x7f55,	// (0x00014a4d) list_single_2graphic_pane_g2_ParamLimits

0x7f55,	// (0x00014a4d) list_single_2graphic_pane_g2

0x7edb,	// (0x000149d3) list_single_2graphic_pane_g3_ParamLimits

0x7edb,	// (0x000149d3) list_single_2graphic_pane_g3

0x878b,	// (0x00015283) list_single_2graphic_pane_g4_ParamLimits

0x878b,	// (0x00015283) list_single_2graphic_pane_g4

0x0003,

0xf737,	// (0x0001c22f) list_single_2graphic_pane_g_ParamLimits

0xf737,	// (0x0001c22f) list_single_2graphic_pane_g

0x8797,	// (0x0001528f) list_single_2graphic_pane_t1_ParamLimits

0x8797,	// (0x0001528f) list_single_2graphic_pane_t1

0x87c5,	// (0x000152bd) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x87c5,	// (0x000152bd) list_double2_graphic_large_graphic_pane_g1

0x7fd6,	// (0x00014ace) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x7fd6,	// (0x00014ace) list_double2_graphic_large_graphic_pane_g2

0x7fe7,	// (0x00014adf) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x7fe7,	// (0x00014adf) list_double2_graphic_large_graphic_pane_g3

0x87d5,	// (0x000152cd) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x87d5,	// (0x000152cd) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf740,	// (0x0001c238) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf740,	// (0x0001c238) list_double2_graphic_large_graphic_pane_g

0x87e1,	// (0x000152d9) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x87e1,	// (0x000152d9) list_double2_graphic_large_graphic_pane_t1

0x87f7,	// (0x000152ef) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x87f7,	// (0x000152ef) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf749,	// (0x0001c241) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf749,	// (0x0001c241) list_double2_graphic_large_graphic_pane_t

0x8949,	// (0x00015441) popup_fast_swap_window_ParamLimits

0x8949,	// (0x00015441) popup_fast_swap_window

0x8965,	// (0x0001545d) popup_side_volume_key_window

0x897f,	// (0x00015477) stacon_top_pane

0x8989,	// (0x00015481) status_pane_ParamLimits

0x8989,	// (0x00015481) status_pane

0x8997,	// (0x0001548f) status_small_pane

0x3d5d,	// (0x00010855) control_pane

0x3d5d,	// (0x00010855) stacon_bottom_pane

0x41e7,	// (0x00010cdf) scroll_pane_cp121

0x41de,	// (0x00010cd6) set_content_pane

0x8809,	// (0x00015301) bg_active_tab_pane_g1_cp1

0x8812,	// (0x0001530a) bg_active_tab_pane_g2_cp1

0x881b,	// (0x00015313) bg_active_tab_pane_g3_cp1

0x8809,	// (0x00015301) bg_passive_tab_pane_g1_cp1

0x8812,	// (0x0001530a) bg_passive_tab_pane_g2_cp1

0x881b,	// (0x00015313) bg_passive_tab_pane_g3_cp1

0x8824,	// (0x0001531c) bg_active_tab_pane_g1_cp2

0x8812,	// (0x0001530a) bg_active_tab_pane_g2_cp2

0x882d,	// (0x00015325) bg_active_tab_pane_g3_cp2

0x8824,	// (0x0001531c) bg_passive_tab_pane_g1_cp2

0x8812,	// (0x0001530a) bg_passive_tab_pane_g2_cp2

0x882d,	// (0x00015325) bg_passive_tab_pane_g3_cp2

0x8836,	// (0x0001532e) bg_active_tab_pane_g1_cp3

0x8812,	// (0x0001530a) bg_active_tab_pane_g2_cp3

0x883f,	// (0x00015337) bg_active_tab_pane_g3_cp3

0x8836,	// (0x0001532e) bg_passive_tab_pane_g1_cp3

0x8812,	// (0x0001530a) bg_passive_tab_pane_g2_cp3

0x883f,	// (0x00015337) bg_passive_tab_pane_g3_cp3

0x8848,	// (0x00015340) bg_active_tab_pane_g1_cp4

0x8812,	// (0x0001530a) bg_active_tab_pane_g2_cp4

0x8853,	// (0x0001534b) bg_active_tab_pane_g3_cp4

0x8848,	// (0x00015340) bg_passive_tab_pane_g1_cp4

0x8812,	// (0x0001530a) bg_passive_tab_pane_g2_cp4

0x8853,	// (0x0001534b) bg_passive_tab_pane_g3_cp4

0x889c,	// (0x00015394) bg_active_tab_pane_g1_cp5

0x8812,	// (0x0001530a) bg_active_tab_pane_g2_cp5

0x88a5,	// (0x0001539d) bg_active_tab_pane_g3_cp5

0x889c,	// (0x00015394) bg_passive_tab_pane_g1_cp5

0x8812,	// (0x0001530a) bg_passive_tab_pane_g2_cp5

0x88a5,	// (0x0001539d) bg_passive_tab_pane_g3_cp5

0x88ae,	// (0x000153a6) list_set_graphic_pane_ParamLimits

0x88ae,	// (0x000153a6) list_set_graphic_pane

0x3d5d,	// (0x00010855) bg_set_opt_pane_cp4

0x88ce,	// (0x000153c6) list_set_graphic_pane_g1_ParamLimits

0x88ce,	// (0x000153c6) list_set_graphic_pane_g1

0x88da,	// (0x000153d2) list_set_graphic_pane_g2_ParamLimits

0x88da,	// (0x000153d2) list_set_graphic_pane_g2

0x0001,

0xf74e,	// (0x0001c246) list_set_graphic_pane_g_ParamLimits

0xf74e,	// (0x0001c246) list_set_graphic_pane_g

0x0009,

0xfad8,	// (0x0001c5d0) volume_small_pane_cp_g

0x88fc,	// (0x000153f4) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x88fc,	// (0x000153f4) list_double2_large_graphic_pane_g1_cp2

0x8908,	// (0x00015400) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x8908,	// (0x00015400) list_double2_large_graphic_pane_g2_cp2

0x8919,	// (0x00015411) list_double2_large_graphic_pane_g3_cp2

0x8921,	// (0x00015419) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x8921,	// (0x00015419) list_double2_large_graphic_pane_t1_cp2

0x8937,	// (0x0001542f) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x8937,	// (0x0001542f) list_double2_large_graphic_pane_t2_cp2

0xa5f6,	// (0x000170ee) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xa5f6,	// (0x000170ee) list_double_large_graphic_pane_g1_cp2

0xa607,	// (0x000170ff) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xa607,	// (0x000170ff) list_double_large_graphic_pane_g2_cp2

0x8aa4,	// (0x0001559c) list_double_large_graphic_pane_g3_cp2

0xa618,	// (0x00017110) list_double_large_graphic_pane_g4_cp

0xa620,	// (0x00017118) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xa620,	// (0x00017118) list_double_large_graphic_pane_t1_cp2

0xa637,	// (0x0001712f) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xa637,	// (0x0001712f) list_double_large_graphic_pane_t2_cp2

0x89a2,	// (0x0001549a) list_double2_graphic_pane_g1_cp2_ParamLimits

0x89a2,	// (0x0001549a) list_double2_graphic_pane_g1_cp2

0x89b0,	// (0x000154a8) list_double2_graphic_pane_g2_cp2_ParamLimits

0x89b0,	// (0x000154a8) list_double2_graphic_pane_g2_cp2

0x89c1,	// (0x000154b9) list_double2_graphic_pane_g3_cp2

0x89cb,	// (0x000154c3) list_double2_graphic_pane_t1_cp2_ParamLimits

0x89cb,	// (0x000154c3) list_double2_graphic_pane_t1_cp2

0x89e1,	// (0x000154d9) list_double2_graphic_pane_t2_cp2_ParamLimits

0x89e1,	// (0x000154d9) list_double2_graphic_pane_t2_cp2

0x419a,	// (0x00010c92) list_single_number_heading_pane_g1_cp2_ParamLimits

0x419a,	// (0x00010c92) list_single_number_heading_pane_g1_cp2

0x89f3,	// (0x000154eb) list_single_number_heading_pane_g2_cp2

0x89fb,	// (0x000154f3) list_single_number_heading_pane_t1_cp2_ParamLimits

0x89fb,	// (0x000154f3) list_single_number_heading_pane_t1_cp2

0x8a11,	// (0x00015509) list_single_number_heading_pane_t2_cp2_ParamLimits

0x8a11,	// (0x00015509) list_single_number_heading_pane_t2_cp2

0x8a23,	// (0x0001551b) list_single_number_heading_pane_t3_cp2_ParamLimits

0x8a23,	// (0x0001551b) list_single_number_heading_pane_t3_cp2

0x419a,	// (0x00010c92) list_single_heading_pane_g1_cp2_ParamLimits

0x419a,	// (0x00010c92) list_single_heading_pane_g1_cp2

0x89f3,	// (0x000154eb) list_single_heading_pane_g2_cp2

0x89fb,	// (0x000154f3) list_single_heading_pane_t1_cp2_ParamLimits

0x89fb,	// (0x000154f3) list_single_heading_pane_t1_cp2

0xa400,	// (0x00016ef8) list_single_heading_pane_t2_cp2_ParamLimits

0xa400,	// (0x00016ef8) list_single_heading_pane_t2_cp2

0xa348,	// (0x00016e40) list_double_graphic_pane_g1_cp2_ParamLimits

0xa348,	// (0x00016e40) list_double_graphic_pane_g1_cp2

0xa354,	// (0x00016e4c) list_double_graphic_pane_g2_cp2_ParamLimits

0xa354,	// (0x00016e4c) list_double_graphic_pane_g2_cp2

0xa363,	// (0x00016e5b) list_double_graphic_pane_g3_cp2

0xa36b,	// (0x00016e63) list_double_graphic_pane_t1_cp2_ParamLimits

0xa36b,	// (0x00016e63) list_double_graphic_pane_t1_cp2

0xa381,	// (0x00016e79) list_double_graphic_pane_t2_cp2_ParamLimits

0xa381,	// (0x00016e79) list_double_graphic_pane_t2_cp2

0x8a98,	// (0x00015590) list_double_number_pane_g1_cp2_ParamLimits

0x8a98,	// (0x00015590) list_double_number_pane_g1_cp2

0x8aa4,	// (0x0001559c) list_double_number_pane_g2_cp2

0xa30c,	// (0x00016e04) list_double_number_pane_t1_cp2_ParamLimits

0xa30c,	// (0x00016e04) list_double_number_pane_t1_cp2

0xa320,	// (0x00016e18) list_double_number_pane_t2_cp2_ParamLimits

0xa320,	// (0x00016e18) list_double_number_pane_t2_cp2

0xa336,	// (0x00016e2e) list_double_number_pane_t3_cp2_ParamLimits

0xa336,	// (0x00016e2e) list_double_number_pane_t3_cp2

0xa1f5,	// (0x00016ced) list_single_graphic_pane_g1_cp2_ParamLimits

0xa1f5,	// (0x00016ced) list_single_graphic_pane_g1_cp2

0x8afc,	// (0x000155f4) list_single_graphic_pane_g2_cp2_ParamLimits

0x8afc,	// (0x000155f4) list_single_graphic_pane_g2_cp2

0x8b08,	// (0x00015600) list_single_graphic_pane_g3_cp2

0xa1cb,	// (0x00016cc3) list_single_graphic_pane_t1_cp2_ParamLimits

0xa1cb,	// (0x00016cc3) list_single_graphic_pane_t1_cp2

0x8afc,	// (0x000155f4) list_single_number_pane_g1_cp2_ParamLimits

0x8afc,	// (0x000155f4) list_single_number_pane_g1_cp2

0x8b08,	// (0x00015600) list_single_number_pane_g2_cp2

0xa1cb,	// (0x00016cc3) list_single_number_pane_t1_cp2_ParamLimits

0xa1cb,	// (0x00016cc3) list_single_number_pane_t1_cp2

0xa1e1,	// (0x00016cd9) list_single_number_pane_t2_cp2_ParamLimits

0xa1e1,	// (0x00016cd9) list_single_number_pane_t2_cp2

0x8908,	// (0x00015400) list_double2_pane_g1_cp2_ParamLimits

0x8908,	// (0x00015400) list_double2_pane_g1_cp2

0x8919,	// (0x00015411) list_double2_pane_g2_cp2

0x8a70,	// (0x00015568) list_double2_pane_t1_cp2_ParamLimits

0x8a70,	// (0x00015568) list_double2_pane_t1_cp2

0x8a86,	// (0x0001557e) list_double2_pane_t2_cp2_ParamLimits

0x8a86,	// (0x0001557e) list_double2_pane_t2_cp2

0x8a98,	// (0x00015590) list_double_pane_g1_cp2_ParamLimits

0x8a98,	// (0x00015590) list_double_pane_g1_cp2

0x8aa4,	// (0x0001559c) list_double_pane_g2_cp2

0x8aac,	// (0x000155a4) list_double_pane_t1_cp2_ParamLimits

0x8aac,	// (0x000155a4) list_double_pane_t1_cp2

0x8ac2,	// (0x000155ba) list_double_pane_t2_cp2_ParamLimits

0x8ac2,	// (0x000155ba) list_double_pane_t2_cp2

0x8aec,	// (0x000155e4) list_single_pane_cp2_g3

0x8afc,	// (0x000155f4) list_single_pane_g1_cp2_ParamLimits

0x8afc,	// (0x000155f4) list_single_pane_g1_cp2

0x8b08,	// (0x00015600) list_single_pane_g2_cp2

0x8b10,	// (0x00015608) list_single_pane_t1_cp2_ParamLimits

0x8b10,	// (0x00015608) list_single_pane_t1_cp2

0x8b28,	// (0x00015620) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x8b28,	// (0x00015620) list_single_large_graphic_pane_g1_cp2

0x8b34,	// (0x0001562c) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x8b34,	// (0x0001562c) list_single_large_graphic_pane_g2_cp2

0x8b40,	// (0x00015638) list_single_large_graphic_pane_g3_cp2

0x8b48,	// (0x00015640) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x8b48,	// (0x00015640) list_single_large_graphic_pane_g4_cp1

0x8b62,	// (0x0001565a) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x8b62,	// (0x0001565a) list_single_large_graphic_pane_t1_cp2

0xa197,	// (0x00016c8f) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa197,	// (0x00016c8f) list_single_graphic_heading_pane_g1_cp2

0xa164,	// (0x00016c5c) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa164,	// (0x00016c5c) list_single_graphic_heading_pane_g4_cp2

0x8b08,	// (0x00015600) list_single_graphic_heading_pane_g5_cp2

0xa1a3,	// (0x00016c9b) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa1a3,	// (0x00016c9b) list_single_graphic_heading_pane_t1_cp2

0xa1b9,	// (0x00016cb1) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa1b9,	// (0x00016cb1) list_single_graphic_heading_pane_t2_cp2

0xa158,	// (0x00016c50) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa158,	// (0x00016c50) list_single_2graphic_pane_g1_cp2

0xa164,	// (0x00016c5c) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa164,	// (0x00016c5c) list_single_2graphic_pane_g2_cp2

0x8b08,	// (0x00015600) list_single_2graphic_pane_g3_cp2

0xa175,	// (0x00016c6d) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa175,	// (0x00016c6d) list_single_2graphic_pane_g4_cp2

0xa181,	// (0x00016c79) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa181,	// (0x00016c79) list_single_2graphic_pane_t1_cp2

0x3be4,	// (0x000106dc) list_highlight_pane_g10_cp1

0x9d40,	// (0x00016838) list_highlight_pane_g1_cp1

0x9d48,	// (0x00016840) list_highlight_pane_g2_cp1

0x9d50,	// (0x00016848) list_highlight_pane_g3_cp1

0x9d58,	// (0x00016850) list_highlight_pane_g4_cp1

0x9d60,	// (0x00016858) list_highlight_pane_g5_cp1

0x9d68,	// (0x00016860) list_highlight_pane_g6_cp1

0x9d70,	// (0x00016868) list_highlight_pane_g7_cp1

0x9d78,	// (0x00016870) list_highlight_pane_g8_cp1

0x9d80,	// (0x00016878) list_highlight_pane_g9_cp1

0x9c68,	// (0x00016760) form_field_slider_pane_t3

0x9c76,	// (0x0001676e) form_field_slider_pane_t4

0x9c84,	// (0x0001677c) slider_form_pane_ParamLimits

0x9c84,	// (0x0001677c) slider_form_pane

0x3d5d,	// (0x00010855) control_abbreviations

0x3d5d,	// (0x00010855) control_conventions

0x3d5d,	// (0x00010855) control_definitions

0x3d5d,	// (0x00010855) format_table_attribute

0xa44a,	// (0x00016f42) bg_popup_preview_window_pane_g9

0x3d5d,	// (0x00010855) format_table_data2

0x3d5d,	// (0x00010855) format_table_data3

0x3d5d,	// (0x00010855) format_table_data_example

0x0008,

0x3d5d,	// (0x00010855) intro_purpose

0xf8ea,	// (0x0001c3e2) bg_popup_preview_window_pane_g

0x3d5d,	// (0x00010855) texts_category

0x3d5d,	// (0x00010855) texts_graphics

0x8b78,	// (0x00015670) text_digital

0x8b87,	// (0x0001567f) text_primary

0x8b96,	// (0x0001568e) text_primary_small

0x8ba5,	// (0x0001569d) text_secondary

0x8bb4,	// (0x000156ac) text_title

0xac7f,	// (0x00017777) bg_passive_tab_pane_g1_cp3_srt

0x8812,	// (0x0001530a) bg_passive_tab_pane_g2_cp3_srt

0xac88,	// (0x00017780) bg_passive_tab_pane_g3_cp3_srt

0x3dd9,	// (0x000108d1) bg_active_tab_pane_cp3_srt_ParamLimits

0x3dd9,	// (0x000108d1) bg_active_tab_pane_cp3_srt

0xac91,	// (0x00017789) tabs_4_active_pane_srt_g1

0xac99,	// (0x00017791) tabs_4_active_pane_srt_t1_ParamLimits

0xac99,	// (0x00017791) tabs_4_active_pane_srt_t1

0xac7f,	// (0x00017777) bg_active_tab_pane_g1_cp3_copy1

0x8812,	// (0x0001530a) bg_active_tab_pane_g2_cp3_copy1

0xac88,	// (0x00017780) bg_active_tab_pane_g3_cp3_copy1

0x3dd9,	// (0x000108d1) tabs_2_long_active_pane_srt_ParamLimits

0x3dd9,	// (0x000108d1) tabs_2_long_active_pane_srt

0x3dd9,	// (0x000108d1) tabs_2_long_passive_pane_srt_ParamLimits

0x3dd9,	// (0x000108d1) tabs_2_long_passive_pane_srt

0x856f,	// (0x00015067) bg_passive_tab_pane_cp4_srt_ParamLimits

0x856f,	// (0x00015067) bg_passive_tab_pane_cp4_srt

0xa8a0,	// (0x00017398) bg_passive_tab_pane_g1_cp4_srt

0x8812,	// (0x0001530a) bg_passive_tab_pane_g2_cp4_srt

0xa8a9,	// (0x000173a1) bg_passive_tab_pane_g3_cp4_srt

0x4428,	// (0x00010f20) bg_active_tab_pane_cp4_srt_ParamLimits

0x4428,	// (0x00010f20) bg_active_tab_pane_cp4_srt

0xa8b2,	// (0x000173aa) tabs_2_long_active_pane_srt_t1_ParamLimits

0xa8b2,	// (0x000173aa) tabs_2_long_active_pane_srt_t1

0xa8a0,	// (0x00017398) bg_active_tab_pane_g1_cp4_srt

0x8812,	// (0x0001530a) bg_active_tab_pane_g2_cp4_srt

0xa8a9,	// (0x000173a1) bg_active_tab_pane_g3_cp4_srt

0x3dcb,	// (0x000108c3) tabs_3_long_active_pane_srt_ParamLimits

0x3dcb,	// (0x000108c3) tabs_3_long_active_pane_srt

0x3dcb,	// (0x000108c3) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x3dcb,	// (0x000108c3) tabs_3_long_passive_pane_cp_srt

0x3dcb,	// (0x000108c3) tabs_3_long_passive_pane_srt_ParamLimits

0x3dcb,	// (0x000108c3) tabs_3_long_passive_pane_srt

0x856f,	// (0x00015067) bg_passive_tab_pane_cp5_srt_ParamLimits

0x856f,	// (0x00015067) bg_passive_tab_pane_cp5_srt

0x889c,	// (0x00015394) bg_passive_tab_pane_g1_cp5_srt

0x8812,	// (0x0001530a) bg_passive_tab_pane_g2_cp5_srt

0x88a5,	// (0x0001539d) bg_passive_tab_pane_g3_cp5_srt

0x4428,	// (0x00010f20) bg_active_tab_pane_cp5_srt_ParamLimits

0x4428,	// (0x00010f20) bg_active_tab_pane_cp5_srt

0xa88e,	// (0x00017386) tabs_3_long_active_pane_srt_t1_ParamLimits

0xa88e,	// (0x00017386) tabs_3_long_active_pane_srt_t1

0x889c,	// (0x00015394) bg_active_tab_pane_g1_cp5_srt

0x8812,	// (0x0001530a) bg_active_tab_pane_g2_cp5_srt

0x88a5,	// (0x0001539d) bg_active_tab_pane_g3_cp5_srt

0xa880,	// (0x00017378) navi_text_pane_srt_t1

0xa878,	// (0x00017370) navi_icon_pane_srt_g1

0x8d79,	// (0x00015871) midp_editing_number_pane_srt

0x8bc3,	// (0x000156bb) midp_ticker_pane_srt

0x8d81,	// (0x00015879) midp_ticker_pane_srt_g1

0x8d89,	// (0x00015881) midp_ticker_pane_srt_g2

0x0001,

0xf76d,	// (0x0001c265) midp_ticker_pane_srt_g

0x8d91,	// (0x00015889) midp_ticker_pane_srt_t1

0xa869,	// (0x00017361) midp_editing_number_pane_t1_copy1

0x856f,	// (0x00015067) listscroll_midp_pane

0x856f,	// (0x00015067) midp_form_pane

0x8c31,	// (0x00015729) midp_info_popup_window_ParamLimits

0x8c31,	// (0x00015729) midp_info_popup_window

0x430a,	// (0x00010e02) bg_popup_sub_pane_cp50_ParamLimits

0x430a,	// (0x00010e02) bg_popup_sub_pane_cp50

0x9988,	// (0x00016480) listscroll_midp_info_pane_ParamLimits

0x9988,	// (0x00016480) listscroll_midp_info_pane

0x9970,	// (0x00016468) listscroll_form_midp_pane_ParamLimits

0x9970,	// (0x00016468) listscroll_form_midp_pane

0x997c,	// (0x00016474) scroll_bar_cp050

0x9950,	// (0x00016448) list_midp_pane

0xb9bd,	// (0x000184b5) signal_pane_g2_cp

0x988a,	// (0x00016382) listscroll_midp_info_pane_t1_ParamLimits

0x988a,	// (0x00016382) listscroll_midp_info_pane_t1

0x98a2,	// (0x0001639a) listscroll_midp_info_pane_t2_ParamLimits

0x98a2,	// (0x0001639a) listscroll_midp_info_pane_t2

0x98e0,	// (0x000163d8) listscroll_midp_info_pane_t3_ParamLimits

0x98e0,	// (0x000163d8) listscroll_midp_info_pane_t3

0x991a,	// (0x00016412) listscroll_midp_info_pane_t4_ParamLimits

0x991a,	// (0x00016412) listscroll_midp_info_pane_t4

0x0003,

0xf825,	// (0x0001c31d) listscroll_midp_info_pane_t_ParamLimits

0xf825,	// (0x0001c31d) listscroll_midp_info_pane_t

0x4380,	// (0x00010e78) scroll_pane_cp21

0x982a,	// (0x00016322) form_midp_field_choice_group_pane

0x9833,	// (0x0001632b) form_midp_field_text_pane

0x9870,	// (0x00016368) form_midp_field_time_pane

0x9878,	// (0x00016370) form_midp_gauge_slider_pane

0x9881,	// (0x00016379) form_midp_gauge_wait_pane

0x3d5d,	// (0x00010855) form_midp_image_pane

0x97f8,	// (0x000162f0) list_single_midp_pane_ParamLimits

0x97f8,	// (0x000162f0) list_single_midp_pane

0x97ad,	// (0x000162a5) form_midp_field_text_pane_t1

0x9568,	// (0x00016060) input_focus_pane_cp050

0x97e7,	// (0x000162df) list_midp_form_text_pane

0x977c,	// (0x00016274) form_midp_field_choice_group_pane_t1

0x978a,	// (0x00016282) input_focus_pane_cp051

0x979e,	// (0x00016296) list_midp_choice_pane

0x3d5d,	// (0x00010855) status_idle_pane

0x9760,	// (0x00016258) form_midp_field_time_pane_t1

0x3be4,	// (0x000106dc) wait_anim_pane_g2_copy1

0x976e,	// (0x00016266) form_midp_field_time_pane_t2

0x0001,

0x8ce1,	// (0x000157d9) aid_navinavi_width_2_pane

0xf820,	// (0x0001c318) form_midp_field_time_pane_t

0x3d5d,	// (0x00010855) input_focus_pane_cp052

0x3d5d,	// (0x00010855) bg_input_focus_pane_cp040

0x9720,	// (0x00016218) form_midp_gauge_slider_pane_t1

0x972e,	// (0x00016226) form_midp_gauge_slider_pane_t2

0x973c,	// (0x00016234) form_midp_gauge_slider_pane_t3

0x974a,	// (0x00016242) form_midp_gauge_slider_pane_t4

0x0003,

0xf817,	// (0x0001c30f) form_midp_gauge_slider_pane_t

0x9758,	// (0x00016250) form_midp_slider_pane

0x3dd9,	// (0x000108d1) bg_input_focus_pane_cp041_ParamLimits

0x3dd9,	// (0x000108d1) bg_input_focus_pane_cp041

0x96ed,	// (0x000161e5) form_midp_gauge_wait_pane_t1_ParamLimits

0x96ed,	// (0x000161e5) form_midp_gauge_wait_pane_t1

0x96ff,	// (0x000161f7) form_midp_gauge_wait_pane_t2_ParamLimits

0x96ff,	// (0x000161f7) form_midp_gauge_wait_pane_t2

0x0001,

0xf812,	// (0x0001c30a) form_midp_gauge_wait_pane_t_ParamLimits

0xf812,	// (0x0001c30a) form_midp_gauge_wait_pane_t

0x9711,	// (0x00016209) form_midp_wait_pane_ParamLimits

0x9711,	// (0x00016209) form_midp_wait_pane

0x96b7,	// (0x000161af) form_midp_image_pane_g1

0x96c0,	// (0x000161b8) form_midp_image_pane_t1

0x96cf,	// (0x000161c7) form_midp_image_pane_t2

0x96de,	// (0x000161d6) form_midp_image_pane_t3

0x0002,

0xf80b,	// (0x0001c303) form_midp_image_pane_t

0x969f,	// (0x00016197) list_single_midp_pane_g1

0x96a8,	// (0x000161a0) list_single_midp_pane_t1

0x9676,	// (0x0001616e) list_midp_form_item_pane_ParamLimits

0x9676,	// (0x0001616e) list_midp_form_item_pane

0x8c89,	// (0x00015781) list_midp_form_item_pane_t1

0x8c98,	// (0x00015790) midp_ticker_pane_g1

0x8ca4,	// (0x0001579c) midp_ticker_pane_g2

0x0001,

0xf753,	// (0x0001c24b) midp_ticker_pane_g

0x8cb0,	// (0x000157a8) midp_ticker_pane_t1

0xaaed,	// (0x000175e5) midp_editing_number_pane_t1

0xaacb,	// (0x000175c3) midp_editing_number_pane

0xaada,	// (0x000175d2) midp_ticker_pane

0xa831,	// (0x00017329) ai_message_heading_pane

0x3d5d,	// (0x00010855) bg_popup_window_pane_cp14

0xa839,	// (0x00017331) listscroll_ai_message_pane

0xa7bb,	// (0x000172b3) ai_message_heading_pane_g1_ParamLimits

0xa7bb,	// (0x000172b3) ai_message_heading_pane_g1

0xa7c7,	// (0x000172bf) ai_message_heading_pane_g2_ParamLimits

0xa7c7,	// (0x000172bf) ai_message_heading_pane_g2

0xa7d3,	// (0x000172cb) ai_message_heading_pane_g3_ParamLimits

0xa7d3,	// (0x000172cb) ai_message_heading_pane_g3

0xa7df,	// (0x000172d7) ai_message_heading_pane_g4_ParamLimits

0xa7df,	// (0x000172d7) ai_message_heading_pane_g4

0x0003,

0xf94c,	// (0x0001c444) ai_message_heading_pane_g_ParamLimits

0xf94c,	// (0x0001c444) ai_message_heading_pane_g

0xa7eb,	// (0x000172e3) ai_message_heading_pane_t1_ParamLimits

0xa7eb,	// (0x000172e3) ai_message_heading_pane_t1

0xa805,	// (0x000172fd) ai_message_heading_pane_t2_ParamLimits

0xa805,	// (0x000172fd) ai_message_heading_pane_t2

0x0001,

0xf955,	// (0x0001c44d) ai_message_heading_pane_t_ParamLimits

0xf955,	// (0x0001c44d) ai_message_heading_pane_t

0xa817,	// (0x0001730f) bg_popup_heading_pane_cp1_ParamLimits

0xa817,	// (0x0001730f) bg_popup_heading_pane_cp1

0xa7a9,	// (0x000172a1) list_ai_message_pane_ParamLimits

0xa7a9,	// (0x000172a1) list_ai_message_pane

0x4380,	// (0x00010e78) scroll_pane_cp10

0xa745,	// (0x0001723d) list_ai_message_pane_g1

0xa74d,	// (0x00017245) list_ai_message_pane_g2

0x0001,

0xf929,	// (0x0001c421) list_ai_message_pane_g

0xa755,	// (0x0001724d) list_ai_message_pane_t1_ParamLimits

0xa755,	// (0x0001724d) list_ai_message_pane_t1

0xa76a,	// (0x00017262) list_ai_message_pane_t2_ParamLimits

0xa76a,	// (0x00017262) list_ai_message_pane_t2

0xa77f,	// (0x00017277) list_ai_message_pane_t3_ParamLimits

0xa77f,	// (0x00017277) list_ai_message_pane_t3

0xa794,	// (0x0001728c) list_ai_message_pane_t4_ParamLimits

0xa794,	// (0x0001728c) list_ai_message_pane_t4

0x0003,

0xf92e,	// (0x0001c426) list_ai_message_pane_t_ParamLimits

0xf92e,	// (0x0001c426) list_ai_message_pane_t

0xa730,	// (0x00017228) cell_ai_soft_ind_pane_ParamLimits

0xa730,	// (0x00017228) cell_ai_soft_ind_pane

0x8cc2,	// (0x000157ba) cell_ai_soft_ind_pane_g1_ParamLimits

0x8cc2,	// (0x000157ba) cell_ai_soft_ind_pane_g1

0x3d5d,	// (0x00010855) grid_highlight_cp1

0x8ccf,	// (0x000157c7) text_secondary_cp56_ParamLimits

0x8ccf,	// (0x000157c7) text_secondary_cp56

0xa705,	// (0x000171fd) example_general_pane_ParamLimits

0xa705,	// (0x000171fd) example_general_pane

0xa711,	// (0x00017209) example_parent_pane_g1_ParamLimits

0xa711,	// (0x00017209) example_parent_pane_g1

0xa71d,	// (0x00017215) example_parent_pane_t1_ParamLimits

0xa71d,	// (0x00017215) example_parent_pane_t1

0x6240,	// (0x00012d38) popup_preview_text_window_ParamLimits

0x6240,	// (0x00012d38) popup_preview_text_window

0x8af4,	// (0x000155ec) list_single_pane_cp2_g4

0x3fc5,	// (0x00010abd) bg_popup_preview_window_pane_ParamLimits

0x3fc5,	// (0x00010abd) bg_popup_preview_window_pane

0xa452,	// (0x00016f4a) popup_preview_text_window_t1_ParamLimits

0xa452,	// (0x00016f4a) popup_preview_text_window_t1

0xa470,	// (0x00016f68) popup_preview_text_window_t2_ParamLimits

0xa470,	// (0x00016f68) popup_preview_text_window_t2

0xa4b9,	// (0x00016fb1) popup_preview_text_window_t3_ParamLimits

0xa4b9,	// (0x00016fb1) popup_preview_text_window_t3

0xa4fe,	// (0x00016ff6) popup_preview_text_window_t4_ParamLimits

0xa4fe,	// (0x00016ff6) popup_preview_text_window_t4

0x0004,

0xf8fd,	// (0x0001c3f5) popup_preview_text_window_t_ParamLimits

0xf8fd,	// (0x0001c3f5) popup_preview_text_window_t

0xa57c,	// (0x00017074) scroll_pane_cp11

0x943c,	// (0x00015f34) bg_popup_preview_window_pane_g1

0xa412,	// (0x00016f0a) bg_popup_preview_window_pane_g2

0xa41a,	// (0x00016f12) bg_popup_preview_window_pane_g3

0xa422,	// (0x00016f1a) bg_popup_preview_window_pane_g4

0xa42a,	// (0x00016f22) bg_popup_preview_window_pane_g5

0xa432,	// (0x00016f2a) bg_popup_preview_window_pane_g6

0xa43a,	// (0x00016f32) bg_popup_preview_window_pane_g7

0xa442,	// (0x00016f3a) bg_popup_preview_window_pane_g8

0x5449,	// (0x00011f41) aid_popup_width_pane

0x621e,	// (0x00012d16) popup_midp_note_alarm_window_ParamLimits

0x621e,	// (0x00012d16) popup_midp_note_alarm_window

0x421b,	// (0x00010d13) data_form_pane_ParamLimits

0x837a,	// (0x00014e72) form_field_data_pane_g1

0x8384,	// (0x00014e7c) form_field_data_pane_t1_ParamLimits

0x4227,	// (0x00010d1f) input_focus_pane_ParamLimits

0x839c,	// (0x00014e94) data_form_wide_pane_ParamLimits

0x4235,	// (0x00010d2d) form_field_data_wide_pane_g1

0x83a8,	// (0x00014ea0) form_field_data_wide_pane_t1_ParamLimits

0x4099,	// (0x00010b91) input_focus_pane_cp6_ParamLimits

0x8513,	// (0x0001500b) input_popup_find_pane_g1_ParamLimits

0x8513,	// (0x0001500b) input_popup_find_pane_g1

0x59b7,	// (0x000124af) aid_navi_side_left_pane

0x59cc,	// (0x000124c4) aid_navi_side_right_pane

0x9e3b,	// (0x00016933) bg_popup_window_pane_cp30_ParamLimits

0x9e3b,	// (0x00016933) bg_popup_window_pane_cp30

0x9eb5,	// (0x000169ad) popup_midp_note_alarm_window_g1_ParamLimits

0x9eb5,	// (0x000169ad) popup_midp_note_alarm_window_g1

0x9ee5,	// (0x000169dd) popup_midp_note_alarm_window_t1_ParamLimits

0x9ee5,	// (0x000169dd) popup_midp_note_alarm_window_t1

0x9f86,	// (0x00016a7e) popup_midp_note_alarm_window_t2_ParamLimits

0x9f86,	// (0x00016a7e) popup_midp_note_alarm_window_t2

0xa034,	// (0x00016b2c) popup_midp_note_alarm_window_t3_ParamLimits

0xa034,	// (0x00016b2c) popup_midp_note_alarm_window_t3

0xa05c,	// (0x00016b54) popup_midp_note_alarm_window_t4_ParamLimits

0xa05c,	// (0x00016b54) popup_midp_note_alarm_window_t4

0xa07c,	// (0x00016b74) popup_midp_note_alarm_window_t5_ParamLimits

0xa07c,	// (0x00016b74) popup_midp_note_alarm_window_t5

0x000a,

0xf89a,	// (0x0001c392) popup_midp_note_alarm_window_t_ParamLimits

0xf89a,	// (0x0001c392) popup_midp_note_alarm_window_t

0xa128,	// (0x00016c20) wait_bar_pane_cp1_ParamLimits

0xa128,	// (0x00016c20) wait_bar_pane_cp1

0x3d5d,	// (0x00010855) wait_anim_pane_copy1

0x3d5d,	// (0x00010855) wait_border_pane_copy1

0x9b31,	// (0x00016629) wait_border_pane_g1_copy1

0x4255,	// (0x00010d4d) form_field_popup_pane_g1

0x83bf,	// (0x00014eb7) form_field_popup_pane_t1_ParamLimits

0x4227,	// (0x00010d1f) input_focus_pane_cp7_ParamLimits

0x425d,	// (0x00010d55) list_form_pane_ParamLimits

0x4269,	// (0x00010d61) form_field_popup_wide_pane_g1

0x4271,	// (0x00010d69) form_field_popup_wide_pane_t1_ParamLimits

0x4227,	// (0x00010d1f) input_focus_pane_cp8_ParamLimits

0x4286,	// (0x00010d7e) list_form_wide_pane_ParamLimits

0xad17,	// (0x0001780f) aid_size_cell_graphic_pane

0x8433,	// (0x00014f2b) data_form_pane_t1_ParamLimits

0xaa98,	// (0x00017590) data_form_wide_pane_t1_ParamLimits

0x8fe4,	// (0x00015adc) bg_status_flat_pane

0x79bd,	// (0x000144b5) title_pane_t1_ParamLimits

0x3d93,	// (0x0001088b) title_pane_t2_ParamLimits

0x3db9,	// (0x000108b1) title_pane_t3_ParamLimits

0xf557,	// (0x0001c04f) title_pane_t_ParamLimits

0x47f0,	// (0x000112e8) level_1_signal_ParamLimits

0x47fd,	// (0x000112f5) level_2_signal_ParamLimits

0x480a,	// (0x00011302) level_3_signal_ParamLimits

0x4817,	// (0x0001130f) level_4_signal_ParamLimits

0x4824,	// (0x0001131c) level_5_signal_ParamLimits

0x4831,	// (0x00011329) level_6_signal_ParamLimits

0x483e,	// (0x00011336) level_7_signal_ParamLimits

0x47f0,	// (0x000112e8) level_1_battery_ParamLimits

0x47fd,	// (0x000112f5) level_2_battery_ParamLimits

0x480a,	// (0x00011302) level_3_battery_ParamLimits

0x4817,	// (0x0001130f) level_4_battery_ParamLimits

0x4824,	// (0x0001131c) level_5_battery_ParamLimits

0x4831,	// (0x00011329) level_6_battery_ParamLimits

0x483e,	// (0x00011336) level_7_battery_ParamLimits

0x9d40,	// (0x00016838) bg_status_flat_pane_g1

0x9d48,	// (0x00016840) bg_status_flat_pane_g2

0x9d50,	// (0x00016848) bg_status_flat_pane_g3

0x9d58,	// (0x00016850) bg_status_flat_pane_g4

0x9d60,	// (0x00016858) bg_status_flat_pane_g5

0x9d68,	// (0x00016860) bg_status_flat_pane_g6

0x9d70,	// (0x00016868) bg_status_flat_pane_g7

0x7a2d,	// (0x00014525) tabs_3_active_pane_t1_ParamLimits

0x7a2d,	// (0x00014525) tabs_3_passive_pane_t1_ParamLimits

0x7a47,	// (0x0001453f) tabs_4_active_pane_t1_ParamLimits

0x7a47,	// (0x0001453f) tabs_4_1_passive_pane_t1_ParamLimits

0x854a,	// (0x00015042) tabs_2_active_pane_t1_ParamLimits

0x854a,	// (0x00015042) tabs_2_passive_pane_t1_ParamLimits

0x4428,	// (0x00010f20) bg_active_tab_pane_cp4_ParamLimits

0x855c,	// (0x00015054) tabs_2_long_active_pane_t1_ParamLimits

0x856f,	// (0x00015067) bg_passive_tab_pane_cp4_ParamLimits

0x6563,	// (0x0001305b) list_single_midp_graphic_pane_t1_ParamLimits

0x4428,	// (0x00010f20) bg_active_tab_pane_cp5_ParamLimits

0x857b,	// (0x00015073) tabs_3_long_active_pane_t1_ParamLimits

0x856f,	// (0x00015067) bg_passive_tab_pane_cp5_ParamLimits

0x6563,	// (0x0001305b) list_single_midp_graphic_pane_t1

0x8fe4,	// (0x00015adc) bg_status_flat_pane_ParamLimits

0x90ad,	// (0x00015ba5) indicator_pane_cp2_ParamLimits

0x90ad,	// (0x00015ba5) indicator_pane_cp2

0x91d8,	// (0x00015cd0) navi_pane_srt_ParamLimits

0x91d8,	// (0x00015cd0) navi_pane_srt

0x91fc,	// (0x00015cf4) popup_clock_digital_analogue_window_cp1

0x3e37,	// (0x0001092f) indicator_pane_t1

0x8bc3,	// (0x000156bb) copy_highlight_pane

0x8bc3,	// (0x000156bb) cursor_graphics_pane

0x8bc3,	// (0x000156bb) graphic_within_text_pane

0x8bc3,	// (0x000156bb) link_highlight_pane

0xa53f,	// (0x00017037) popup_preview_text_window_t5_ParamLimits

0xa53f,	// (0x00017037) popup_preview_text_window_t5

0x8ce9,	// (0x000157e1) cursor_digital_pane

0x8ce9,	// (0x000157e1) cursor_primary_pane

0x8cfa,	// (0x000157f2) cursor_primary_small_pane

0x8d02,	// (0x000157fa) cursor_secondary_pane

0x8d0a,	// (0x00015802) cursor_title_pane

0x8ce9,	// (0x000157e1) link_highlight_digital_pane

0x8cf1,	// (0x000157e9) link_highlight_primary_pane

0x8cfa,	// (0x000157f2) link_highlight_primary_small_pane

0x8d02,	// (0x000157fa) link_highlight_secondary_pane

0x8d0a,	// (0x00015802) link_highlight_title_pane

0x8ce9,	// (0x000157e1) copy_highlight_digital_pane

0x8ce9,	// (0x000157e1) copy_highlight_primary_pane

0x8cfa,	// (0x000157f2) copy_highlight_primary_small_pane

0x8d02,	// (0x000157fa) copy_highlight_secondary_pane

0x8d0a,	// (0x00015802) copy_highlight_title_pane

0x8d02,	// (0x000157fa) graphic_text_digital_pane

0x9dde,	// (0x000168d6) graphic_text_primary_pane

0x9de7,	// (0x000168df) graphic_text_primary_small_pane

0x8cfa,	// (0x000157f2) graphic_text_secondary_pane

0x8ce9,	// (0x000157e1) graphic_text_title_pane

0x8d12,	// (0x0001580a) cursor_primary_pane_g1

0x9dd0,	// (0x000168c8) cursor_text_primary_t1

0x9db8,	// (0x000168b0) cursor_primary_small_pane_g1

0x9dc2,	// (0x000168ba) cursor_text_primary_small_t1

0x9da0,	// (0x00016898) cursor_primary_small_pane_g1_copy1

0x9daa,	// (0x000168a2) cursor_text_primary_small_t1_copy1

0x9d88,	// (0x00016880) cursor_text_title_t1

0x9d96,	// (0x0001688e) cursor_title_pane_g1

0x8d12,	// (0x0001580a) cursor_digital_pane_g1

0x8d1c,	// (0x00015814) cursor_text_digital_t1

0x8d2a,	// (0x00015822) link_highlight_primary_pane_g1

0x9d31,	// (0x00016829) link_highlight_primary_pane_t1

0x8d2a,	// (0x00015822) link_highlight_primary_small_pane_g1

0x8d32,	// (0x0001582a) link_highlight_primary_small_pane_t1

0x8d2a,	// (0x00015822) link_highlight_secondary_pane_g1

0x8d41,	// (0x00015839) link_highlight_secondary_pane_t1

0x9c96,	// (0x0001678e) link_highlight_title_pane_g1

0x9cad,	// (0x000167a5) link_highlight_title_pane_t1

0x9c96,	// (0x0001678e) link_highlight_digital_pane_g1

0x9c9e,	// (0x00016796) link_highlight_digital_pane_t1

0x9b50,	// (0x00016648) copy_highlight_primary_pane_g1

0x9b76,	// (0x0001666e) copy_highlight_primary_pane_t1

0x9b50,	// (0x00016648) copy_highlight_primary_small_pane_g1

0x9b67,	// (0x0001665f) copy_highlight_primary_small_pane_t1

0x8d50,	// (0x00015848) copy_highlight_secondary_pane_g1

0x8d58,	// (0x00015850) copy_highlight_secondary_pane_t1

0x9b50,	// (0x00016648) copy_highlight_title_pane_g1

0x9b58,	// (0x00016650) copy_highlight_title_pane_t1

0x9b50,	// (0x00016648) copy_highlight_digital_pane_g1

0xaee1,	// (0x000179d9) copy_highlight_digital_pane_t1

0xae35,	// (0x0001792d) graphic_text_primary_pane_g1

0xaec5,	// (0x000179bd) graphic_text_primary_pane_t1

0xaed3,	// (0x000179cb) graphic_text_primary_pane_t2

0x0001,

0xf9c9,	// (0x0001c4c1) graphic_text_primary_pane_t

0xaea1,	// (0x00017999) graphic_text_primary_small_pane_g1

0xaea9,	// (0x000179a1) graphic_text_primary_small_pane_t1

0xaeb7,	// (0x000179af) graphic_text_primary_small_pane_t2

0x0001,

0xf9c4,	// (0x0001c4bc) graphic_text_primary_small_pane_t

0xae7d,	// (0x00017975) graphic_text_secondary_pane_g1

0xae85,	// (0x0001797d) graphic_text_secondary_pane_t1

0xae93,	// (0x0001798b) graphic_text_secondary_pane_t2

0x0001,

0xf9bf,	// (0x0001c4b7) graphic_text_secondary_pane_t

0xae59,	// (0x00017951) graphic_text_title_pane_g1

0xae61,	// (0x00017959) graphic_text_title_pane_t1

0xae6f,	// (0x00017967) graphic_text_title_pane_t2

0x0001,

0xf9ba,	// (0x0001c4b2) graphic_text_title_pane_t

0xae35,	// (0x0001792d) graphic_text_digital_pane_g1

0xae3d,	// (0x00017935) graphic_text_digital_pane_t1

0xae4b,	// (0x00017943) graphic_text_digital_pane_t2

0x0001,

0xf9b5,	// (0x0001c4ad) graphic_text_digital_pane_t

0x3dd9,	// (0x000108d1) navi_icon_pane_srt_ParamLimits

0x3dd9,	// (0x000108d1) navi_icon_pane_srt

0x3d5d,	// (0x00010855) navi_midp_pane_srt

0x3d5d,	// (0x00010855) navi_navi_pane_srt

0x3dd9,	// (0x000108d1) navi_text_pane_srt_ParamLimits

0x3dd9,	// (0x000108d1) navi_text_pane_srt

0xae00,	// (0x000178f8) navi_navi_icon_text_pane_srt

0xae08,	// (0x00017900) navi_navi_pane_srt_g1_ParamLimits

0xae08,	// (0x00017900) navi_navi_pane_srt_g1

0xae1a,	// (0x00017912) navi_navi_pane_srt_g2_ParamLimits

0xae1a,	// (0x00017912) navi_navi_pane_srt_g2

0x0001,

0xf9b0,	// (0x0001c4a8) navi_navi_pane_srt_g_ParamLimits

0xf9b0,	// (0x0001c4a8) navi_navi_pane_srt_g

0xae2c,	// (0x00017924) navi_navi_tabs_pane_srt

0xae00,	// (0x000178f8) navi_navi_text_pane_srt

0xae00,	// (0x000178f8) navi_navi_volume_pane_srt

0xadf1,	// (0x000178e9) navi_navi_text_pane_srt_t1

0x68e3,	// (0x000133db) navi_navi_volume_pane_srt_g1

0x68eb,	// (0x000133e3) volume_small_pane_srt_ParamLimits

0x68eb,	// (0x000133e3) volume_small_pane_srt

0x5c8e,	// (0x00012786) volume_small_pane_srt_g1_ParamLimits

0x5c8e,	// (0x00012786) volume_small_pane_srt_g1

0x5c9e,	// (0x00012796) volume_small_pane_srt_g2_ParamLimits

0x5c9e,	// (0x00012796) volume_small_pane_srt_g2

0x5caf,	// (0x000127a7) volume_small_pane_srt_g3_ParamLimits

0x5caf,	// (0x000127a7) volume_small_pane_srt_g3

0x5cc0,	// (0x000127b8) volume_small_pane_srt_g4_ParamLimits

0x5cc0,	// (0x000127b8) volume_small_pane_srt_g4

0x5cd1,	// (0x000127c9) volume_small_pane_srt_g5_ParamLimits

0x5cd1,	// (0x000127c9) volume_small_pane_srt_g5

0x5ce2,	// (0x000127da) volume_small_pane_srt_g6_ParamLimits

0x5ce2,	// (0x000127da) volume_small_pane_srt_g6

0x5cf3,	// (0x000127eb) volume_small_pane_srt_g7_ParamLimits

0x5cf3,	// (0x000127eb) volume_small_pane_srt_g7

0x5d04,	// (0x000127fc) volume_small_pane_srt_g8_ParamLimits

0x5d04,	// (0x000127fc) volume_small_pane_srt_g8

0x5d15,	// (0x0001280d) volume_small_pane_srt_g9_ParamLimits

0x5d15,	// (0x0001280d) volume_small_pane_srt_g9

0x5d26,	// (0x0001281e) volume_small_pane_srt_g10_ParamLimits

0x5d26,	// (0x0001281e) volume_small_pane_srt_g10

0x0009,

0xf758,	// (0x0001c250) volume_small_pane_srt_g_ParamLimits

0xf758,	// (0x0001c250) volume_small_pane_srt_g

0x7bdd,	// (0x000146d5) query_popup_data_pane_cp2

0xadd7,	// (0x000178cf) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xadd7,	// (0x000178cf) navi_navi_icon_text_pane_srt_t1

0x9dde,	// (0x000168d6) navi_tabs_2_long_pane_srt

0x9dde,	// (0x000168d6) navi_tabs_2_pane_srt

0x9dde,	// (0x000168d6) navi_tabs_3_long_pane_srt

0x9dde,	// (0x000168d6) navi_tabs_3_pane_srt

0x9dde,	// (0x000168d6) navi_tabs_4_pane_srt

0x68c3,	// (0x000133bb) tabs_2_active_pane_srt_ParamLimits

0x68c3,	// (0x000133bb) tabs_2_active_pane_srt

0x68d3,	// (0x000133cb) tabs_2_passive_pane_srt_ParamLimits

0x68d3,	// (0x000133cb) tabs_2_passive_pane_srt

0x8f05,	// (0x000159fd) bg_passive_tab_pane_cp1_srt_ParamLimits

0x8f05,	// (0x000159fd) bg_passive_tab_pane_cp1_srt

0xada3,	// (0x0001789b) bg_passive_tab_pane_g1_cp1_srt

0x8812,	// (0x0001530a) bg_passive_tab_pane_g2_cp1_srt

0xadac,	// (0x000178a4) bg_passive_tab_pane_g3_cp1_srt

0x3dd9,	// (0x000108d1) bg_active_tab_pane_cp1_srt_ParamLimits

0x3dd9,	// (0x000108d1) bg_active_tab_pane_cp1_srt

0xadb5,	// (0x000178ad) tabs_2_active_pane_srt_g1

0xadbd,	// (0x000178b5) tabs_2_active_pane_srt_t1_ParamLimits

0xadbd,	// (0x000178b5) tabs_2_active_pane_srt_t1

0xada3,	// (0x0001789b) bg_active_tab_pane_g1_cp1_srt

0x8812,	// (0x0001530a) bg_active_tab_pane_g2_cp1_srt

0xadac,	// (0x000178a4) bg_active_tab_pane_g3_cp1_srt

0x6890,	// (0x00013388) tabs_3_active_pane_srt_ParamLimits

0x6890,	// (0x00013388) tabs_3_active_pane_srt

0x68a1,	// (0x00013399) tabs_3_passive_pane_cp_srt_ParamLimits

0x68a1,	// (0x00013399) tabs_3_passive_pane_cp_srt

0x68b2,	// (0x000133aa) tabs_3_passive_pane_srt_ParamLimits

0x68b2,	// (0x000133aa) tabs_3_passive_pane_srt

0x8f05,	// (0x000159fd) bg_passive_tab_pane_cp2_srt_ParamLimits

0x8f05,	// (0x000159fd) bg_passive_tab_pane_cp2_srt

0x8d67,	// (0x0001585f) bg_passive_tab_pane_g1_cp2_srt

0x8812,	// (0x0001530a) bg_passive_tab_pane_g2_cp2_srt

0x8d70,	// (0x00015868) bg_passive_tab_pane_g3_cp2_srt

0x3dd9,	// (0x000108d1) bg_active_tab_pane_cp2_srt_ParamLimits

0x3dd9,	// (0x000108d1) bg_active_tab_pane_cp2_srt

0xad89,	// (0x00017881) tabs_3_active_pane_srt_g1

0xad91,	// (0x00017889) tabs_3_active_pane_srt_t1_ParamLimits

0xad91,	// (0x00017889) tabs_3_active_pane_srt_t1

0x8d67,	// (0x0001585f) bg_active_tab_pane_g1_cp2_srt

0x8812,	// (0x0001530a) bg_active_tab_pane_g2_cp2_srt

0x8d70,	// (0x00015868) bg_active_tab_pane_g3_cp2_srt

0x6848,	// (0x00013340) tabs_4_active_pane_srt_ParamLimits

0x6848,	// (0x00013340) tabs_4_active_pane_srt

0x685a,	// (0x00013352) tabs_4_passive_pane_cp2_srt_ParamLimits

0x685a,	// (0x00013352) tabs_4_passive_pane_cp2_srt

0x5e8b,	// (0x00012983) aid_size_cell_toolbar

0x856f,	// (0x00015067) main_idle_act_pane_ParamLimits

0x6050,	// (0x00012b48) popup_large_graphic_colour_window_ParamLimits

0x63bb,	// (0x00012eb3) popup_toolbar_window_ParamLimits

0x63bb,	// (0x00012eb3) popup_toolbar_window

0xab18,	// (0x00017610) list_single_graphic_2heading_pane_ParamLimits

0xab18,	// (0x00017610) list_single_graphic_2heading_pane

0x46b1,	// (0x000111a9) aid_size_cell_apps_grid_lsc_pane

0x46c3,	// (0x000111bb) aid_size_cell_apps_grid_prt_pane

0x8f05,	// (0x000159fd) bg_wml_button_pane_cp1_ParamLimits

0x8f05,	// (0x000159fd) bg_wml_button_pane_cp1

0x97ad,	// (0x000162a5) form_midp_field_text_pane_t1_ParamLimits

0x9568,	// (0x00016060) input_focus_pane_cp050_ParamLimits

0x97e7,	// (0x000162df) list_midp_form_text_pane_ParamLimits

0x978a,	// (0x00016282) input_focus_pane_cp051_ParamLimits

0x979e,	// (0x00016296) list_midp_choice_pane_ParamLimits

0x961e,	// (0x00016116) list_single_2graphic_pane_cp3_ParamLimits

0x961e,	// (0x00016116) list_single_2graphic_pane_cp3

0x9643,	// (0x0001613b) list_single_midp_graphic_pane_ParamLimits

0x9643,	// (0x0001613b) list_single_midp_graphic_pane

0x6468,	// (0x00012f60) list_single_graphic_2heading_pane_g1_ParamLimits

0x6468,	// (0x00012f60) list_single_graphic_2heading_pane_g1

0x6474,	// (0x00012f6c) list_single_graphic_2heading_pane_g4_ParamLimits

0x6474,	// (0x00012f6c) list_single_graphic_2heading_pane_g4

0x6480,	// (0x00012f78) list_single_graphic_2heading_pane_g5_ParamLimits

0x6480,	// (0x00012f78) list_single_graphic_2heading_pane_g5

0x0002,

0xf7ab,	// (0x0001c2a3) list_single_graphic_2heading_pane_g_ParamLimits

0xf7ab,	// (0x0001c2a3) list_single_graphic_2heading_pane_g

0x648c,	// (0x00012f84) list_single_graphic_2heading_pane_t1_ParamLimits

0x648c,	// (0x00012f84) list_single_graphic_2heading_pane_t1

0x64a0,	// (0x00012f98) list_single_graphic_2heading_pane_t2_ParamLimits

0x64a0,	// (0x00012f98) list_single_graphic_2heading_pane_t2

0x64ba,	// (0x00012fb2) list_single_graphic_2heading_pane_t3_ParamLimits

0x64ba,	// (0x00012fb2) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b2,	// (0x0001c2aa) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b2,	// (0x0001c2aa) list_single_graphic_2heading_pane_t

0x9358,	// (0x00015e50) bg_popup_sub_pane_cp2

0x9382,	// (0x00015e7a) grid_toobar_pane

0x64d2,	// (0x00012fca) cell_toolbar_pane_ParamLimits

0x64d2,	// (0x00012fca) cell_toolbar_pane

0x93e0,	// (0x00015ed8) cell_toolbar_pane_g1_ParamLimits

0x93e0,	// (0x00015ed8) cell_toolbar_pane_g1

0x93f4,	// (0x00015eec) cell_toolbar_pane_g2_ParamLimits

0x93f4,	// (0x00015eec) cell_toolbar_pane_g2

0x0001,

0xf7c0,	// (0x0001c2b8) cell_toolbar_pane_g_ParamLimits

0xf7c0,	// (0x0001c2b8) cell_toolbar_pane_g

0x9416,	// (0x00015f0e) grid_highlight_pane_cp2_ParamLimits

0x9416,	// (0x00015f0e) grid_highlight_pane_cp2

0x9430,	// (0x00015f28) toolbar_button_pane

0x943c,	// (0x00015f34) toolbar_button_pane_g1

0x9444,	// (0x00015f3c) toolbar_button_pane_g2

0x944c,	// (0x00015f44) toolbar_button_pane_g3

0x9454,	// (0x00015f4c) toolbar_button_pane_g4

0x945c,	// (0x00015f54) toolbar_button_pane_g5

0x9464,	// (0x00015f5c) toolbar_button_pane_g6

0x946c,	// (0x00015f64) toolbar_button_pane_g7

0x9474,	// (0x00015f6c) toolbar_button_pane_g8

0x947c,	// (0x00015f74) toolbar_button_pane_g9

0x0009,

0xf7c5,	// (0x0001c2bd) toolbar_button_pane_g

0x650a,	// (0x00013002) list_single_2graphic_pane_g1_cp3_ParamLimits

0x650a,	// (0x00013002) list_single_2graphic_pane_g1_cp3

0x6516,	// (0x0001300e) list_single_2graphic_pane_g2_cp3_ParamLimits

0x6516,	// (0x0001300e) list_single_2graphic_pane_g2_cp3

0x6527,	// (0x0001301f) list_single_2graphic_pane_g3_cp3

0x652f,	// (0x00013027) list_single_2graphic_pane_g4_cp3_ParamLimits

0x652f,	// (0x00013027) list_single_2graphic_pane_g4_cp3

0x653b,	// (0x00013033) list_single_2graphic_pane_t1_cp3_ParamLimits

0x653b,	// (0x00013033) list_single_2graphic_pane_t1_cp3

0x6557,	// (0x0001304f) list_single_midp_graphic_pane_g2_ParamLimits

0x6557,	// (0x0001304f) list_single_midp_graphic_pane_g2

0x5e93,	// (0x0001298b) aid_zoom_text_primary

0x5e9b,	// (0x00012993) aid_zoom_text_secondary

0x8e21,	// (0x00015919) status_small_pane_g7_ParamLimits

0x8e21,	// (0x00015919) status_small_pane_g7

0x8e44,	// (0x0001593c) status_small_pane_t1_ParamLimits

0x79a0,	// (0x00014498) title_pane_g2

0x0003,

0xf54e,	// (0x0001c046) title_pane_g

0x7c37,	// (0x0001472f) aid_size_cell_colour_1_pane_ParamLimits

0x7c37,	// (0x0001472f) aid_size_cell_colour_1_pane

0x7c4b,	// (0x00014743) aid_size_cell_colour_2_pane_ParamLimits

0x7c4b,	// (0x00014743) aid_size_cell_colour_2_pane

0x7c5f,	// (0x00014757) aid_size_cell_colour_3_pane_ParamLimits

0x7c5f,	// (0x00014757) aid_size_cell_colour_3_pane

0x7c73,	// (0x0001476b) aid_size_cell_colour_4_pane_ParamLimits

0x7c73,	// (0x0001476b) aid_size_cell_colour_4_pane

0x58f4,	// (0x000123ec) title_pane_stacon_g1_ParamLimits

0x58f4,	// (0x000123ec) title_pane_stacon_g1

0x9bcd,	// (0x000166c5) popup_note_wait_window_g3_ParamLimits

0x9bcd,	// (0x000166c5) popup_note_wait_window_g3

0x9c43,	// (0x0001673b) popup_note_wait_window_t5_ParamLimits

0x9c43,	// (0x0001673b) popup_note_wait_window_t5

0x3d5d,	// (0x00010855) main_feb_china_hwr_fs_writing_pane

0x5f37,	// (0x00012a2f) popup_feb_china_hwr_fs_window_ParamLimits

0x5f37,	// (0x00012a2f) popup_feb_china_hwr_fs_window

0x6579,	// (0x00013071) aid_size_cell_hwr_fs_ParamLimits

0x6579,	// (0x00013071) aid_size_cell_hwr_fs

0x9568,	// (0x00016060) bg_popup_sub_pane_cp3_ParamLimits

0x9568,	// (0x00016060) bg_popup_sub_pane_cp3

0x658e,	// (0x00013086) grid_hwr_fs_pane_ParamLimits

0x658e,	// (0x00013086) grid_hwr_fs_pane

0x65a6,	// (0x0001309e) linegrid_hwr_fs_pane_ParamLimits

0x65a6,	// (0x0001309e) linegrid_hwr_fs_pane

0x65b6,	// (0x000130ae) cell_hwr_fs_pane_ParamLimits

0x65b6,	// (0x000130ae) cell_hwr_fs_pane

0x9574,	// (0x0001606c) linegrid_hwr_fs_pane_g1_ParamLimits

0x9574,	// (0x0001606c) linegrid_hwr_fs_pane_g1

0x9580,	// (0x00016078) linegrid_hwr_fs_pane_g2_ParamLimits

0x9580,	// (0x00016078) linegrid_hwr_fs_pane_g2

0x9592,	// (0x0001608a) linegrid_hwr_fs_pane_g3_ParamLimits

0x9592,	// (0x0001608a) linegrid_hwr_fs_pane_g3

0x65d8,	// (0x000130d0) linegrid_hwr_fs_pane_g4_ParamLimits

0x65d8,	// (0x000130d0) linegrid_hwr_fs_pane_g4

0x65f2,	// (0x000130ea) linegrid_hwr_fs_pane_g5_ParamLimits

0x65f2,	// (0x000130ea) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f0,	// (0x0001c2e8) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f0,	// (0x0001c2e8) linegrid_hwr_fs_pane_g

0x959e,	// (0x00016096) cell_hwr_fs_pane_g1_ParamLimits

0x959e,	// (0x00016096) cell_hwr_fs_pane_g1

0x9292,	// (0x00015d8a) cell_hwr_fs_pane_g2_ParamLimits

0x9292,	// (0x00015d8a) cell_hwr_fs_pane_g2

0x95b4,	// (0x000160ac) cell_hwr_fs_pane_g3_ParamLimits

0x95b4,	// (0x000160ac) cell_hwr_fs_pane_g3

0x95c1,	// (0x000160b9) cell_hwr_fs_pane_g4_ParamLimits

0x95c1,	// (0x000160b9) cell_hwr_fs_pane_g4

0x0003,

0xf7fb,	// (0x0001c2f3) cell_hwr_fs_pane_g_ParamLimits

0xf7fb,	// (0x0001c2f3) cell_hwr_fs_pane_g

0x6608,	// (0x00013100) cell_hwr_fs_pane_t1

0x3d5d,	// (0x00010855) grid_highlight_pane_cp6

0x3d5d,	// (0x00010855) main_idle_act2_pane

0x4367,	// (0x00010e5f) aid_inside_area_popup_secondary

0xa262,	// (0x00016d5a) aid_inside_area_window_primary_ParamLimits

0xa262,	// (0x00016d5a) aid_inside_area_window_primary

0xaef0,	// (0x000179e8) ai2_news_ticker_pane

0xaef8,	// (0x000179f0) aid_size_cell_ai1_link_ParamLimits

0xaef8,	// (0x000179f0) aid_size_cell_ai1_link

0xaf12,	// (0x00017a0a) popup_ai2_data_window_ParamLimits

0xaf12,	// (0x00017a0a) popup_ai2_data_window

0xaf28,	// (0x00017a20) popup_ai2_link_window_ParamLimits

0xaf28,	// (0x00017a20) popup_ai2_link_window

0x9568,	// (0x00016060) bg_popup_sub_pane_cp4_ParamLimits

0x9568,	// (0x00016060) bg_popup_sub_pane_cp4

0xaf3c,	// (0x00017a34) grid_ai2_link_pane_ParamLimits

0xaf3c,	// (0x00017a34) grid_ai2_link_pane

0xaf53,	// (0x00017a4b) popup_ai2_link_window_g1_ParamLimits

0xaf53,	// (0x00017a4b) popup_ai2_link_window_g1

0xaf5f,	// (0x00017a57) popup_ai2_link_window_g2_ParamLimits

0xaf5f,	// (0x00017a57) popup_ai2_link_window_g2

0x0001,

0xf9ce,	// (0x0001c4c6) popup_ai2_link_window_g_ParamLimits

0xf9ce,	// (0x0001c4c6) popup_ai2_link_window_g

0xaf6e,	// (0x00017a66) ai2_mp_button_pane

0xaf76,	// (0x00017a6e) ai2_mp_volume_pane

0x978a,	// (0x00016282) bg_popup_sub_pane_cp5_ParamLimits

0x978a,	// (0x00016282) bg_popup_sub_pane_cp5

0xaf7e,	// (0x00017a76) heading_ai2_gene_pane_ParamLimits

0xaf7e,	// (0x00017a76) heading_ai2_gene_pane

0xaf8a,	// (0x00017a82) list_ai2_gene_pane_ParamLimits

0xaf8a,	// (0x00017a82) list_ai2_gene_pane

0xafd2,	// (0x00017aca) cell_ai2_link_pane_ParamLimits

0xafd2,	// (0x00017aca) cell_ai2_link_pane

0xafe8,	// (0x00017ae0) cell_ai2_link_pane_g1

0x3d5d,	// (0x00010855) grid_highlight_pane_cp7

0x6900,	// (0x000133f8) ai2_mp_volume_pane_g1

0xb0b8,	// (0x00017bb0) ai2_mp_volume_pane_g2

0xb02d,	// (0x00017b25) list_ai2_gene_pane_t1

0xb0c0,	// (0x00017bb8) ai2_mp_volume_pane_g3

0x0002,

0xf9e7,	// (0x0001c4df) ai2_mp_volume_pane_g

0x6908,	// (0x00013400) volume_small_pane_cp3

0xb0c8,	// (0x00017bc0) aid_size_cell_ai2_button

0xb0d0,	// (0x00017bc8) grid_ai2_button_pane

0xb0d9,	// (0x00017bd1) cell_ai2_button_pane_ParamLimits

0xb0d9,	// (0x00017bd1) cell_ai2_button_pane

0x3be4,	// (0x000106dc) cell_ai2_button_pane_g1

0x3d5d,	// (0x00010855) grid_highlight_pane_cp8

0xb078,	// (0x00017b70) ai2_gene_pane_t1_ParamLimits

0xb078,	// (0x00017b70) ai2_gene_pane_t1

0x5e81,	// (0x00012979) aid_height_parent_landscape

0xa900,	// (0x000173f8) aid_height_set_list

0xa911,	// (0x00017409) aid_size_parent

0xad17,	// (0x0001780f) aid_size_cell_graphic_pane_ParamLimits

0xaf9a,	// (0x00017a92) popup_ai2_data_window_g1_ParamLimits

0xaf9a,	// (0x00017a92) popup_ai2_data_window_g1

0xafa6,	// (0x00017a9e) ai2_news_ticker_pane_g1

0xafae,	// (0x00017aa6) ai2_news_ticker_pane_g2

0x0001,

0xf9d3,	// (0x0001c4cb) ai2_news_ticker_pane_g

0xafb6,	// (0x00017aae) ai2_news_ticker_pane_t1

0xafc4,	// (0x00017abc) ai2_news_ticker_pane_t2

0x0001,

0xf9d8,	// (0x0001c4d0) ai2_news_ticker_pane_t

0xaff1,	// (0x00017ae9) heading_ai2_gene_pane_g1

0xaff9,	// (0x00017af1) heading_ai2_gene_pane_t1_ParamLimits

0xaff9,	// (0x00017af1) heading_ai2_gene_pane_t1

0xb00e,	// (0x00017b06) list_highlight_pane_cp6

0xb016,	// (0x00017b0e) ai2_gene_pane_ParamLimits

0xb016,	// (0x00017b0e) ai2_gene_pane

0xb03b,	// (0x00017b33) list_ai2_gene_pane_t2

0x0001,

0xf9dd,	// (0x0001c4d5) list_ai2_gene_pane_t

0xb049,	// (0x00017b41) list_highlight_pane_cp8_ParamLimits

0xb049,	// (0x00017b41) list_highlight_pane_cp8

0xb05a,	// (0x00017b52) ai2_gene_pane_g1_ParamLimits

0xb05a,	// (0x00017b52) ai2_gene_pane_g1

0xb06c,	// (0x00017b64) ai2_gene_pane_g2_ParamLimits

0xb06c,	// (0x00017b64) ai2_gene_pane_g2

0x0001,

0xf9e2,	// (0x0001c4da) ai2_gene_pane_g_ParamLimits

0xf9e2,	// (0x0001c4da) ai2_gene_pane_g

0x4144,	// (0x00010c3c) scroll_pane_cp12

0x5e40,	// (0x00012938) control_pane_t3_ParamLimits

0x5e40,	// (0x00012938) control_pane_t3

0x8e35,	// (0x0001592d) status_small_pane_g8_ParamLimits

0x8e35,	// (0x0001592d) status_small_pane_g8

0x6019,	// (0x00012b11) popup_find_window_ParamLimits

0x6232,	// (0x00012d2a) popup_note_image_window_ParamLimits

0x93be,	// (0x00015eb6) list_double2_graphic_pane_vc_g1_ParamLimits

0x93be,	// (0x00015eb6) list_double2_graphic_pane_vc_g1

0x4155,	// (0x00010c4d) list_double2_graphic_pane_vc_g2_ParamLimits

0x4155,	// (0x00010c4d) list_double2_graphic_pane_vc_g2

0x4161,	// (0x00010c59) list_double2_graphic_pane_vc_g3_ParamLimits

0x4161,	// (0x00010c59) list_double2_graphic_pane_vc_g3

0x0002,

0xf7b9,	// (0x0001c2b1) list_double2_graphic_pane_vc_g_ParamLimits

0xf7b9,	// (0x0001c2b1) list_double2_graphic_pane_vc_g

0x93ca,	// (0x00015ec2) list_double2_graphic_pane_vc_t1_ParamLimits

0x93ca,	// (0x00015ec2) list_double2_graphic_pane_vc_t1

0x4155,	// (0x00010c4d) list_single_heading_pane_vc_g1_ParamLimits

0x4155,	// (0x00010c4d) list_single_heading_pane_vc_g1

0x4161,	// (0x00010c59) list_single_heading_pane_vc_g2_ParamLimits

0x4161,	// (0x00010c59) list_single_heading_pane_vc_g2

0x0001,

0xf7da,	// (0x0001c2d2) list_single_heading_pane_vc_g_ParamLimits

0xf7da,	// (0x0001c2d2) list_single_heading_pane_vc_g

0x9484,	// (0x00015f7c) list_single_heading_pane_vc_t1_ParamLimits

0x9484,	// (0x00015f7c) list_single_heading_pane_vc_t1

0x949c,	// (0x00015f94) list_single_heading_pane_vc_t2_ParamLimits

0x949c,	// (0x00015f94) list_single_heading_pane_vc_t2

0x0001,

0xf7df,	// (0x0001c2d7) list_single_heading_pane_vc_t_ParamLimits

0xf7df,	// (0x0001c2d7) list_single_heading_pane_vc_t

0x94b8,	// (0x00015fb0) list_setting_number_pane_vc_g1_ParamLimits

0x94b8,	// (0x00015fb0) list_setting_number_pane_vc_g1

0x94c4,	// (0x00015fbc) list_setting_number_pane_vc_g2_ParamLimits

0x94c4,	// (0x00015fbc) list_setting_number_pane_vc_g2

0x0001,

0xf7e4,	// (0x0001c2dc) list_setting_number_pane_vc_g_ParamLimits

0xf7e4,	// (0x0001c2dc) list_setting_number_pane_vc_g

0x94d0,	// (0x00015fc8) list_setting_number_pane_vc_t1_ParamLimits

0x94d0,	// (0x00015fc8) list_setting_number_pane_vc_t1

0x94e4,	// (0x00015fdc) list_setting_number_pane_vc_t2_ParamLimits

0x94e4,	// (0x00015fdc) list_setting_number_pane_vc_t2

0x9500,	// (0x00015ff8) list_setting_number_pane_vc_t3_ParamLimits

0x9500,	// (0x00015ff8) list_setting_number_pane_vc_t3

0x0002,

0xf7e9,	// (0x0001c2e1) list_setting_number_pane_vc_t_ParamLimits

0xf7e9,	// (0x0001c2e1) list_setting_number_pane_vc_t

0x952c,	// (0x00016024) set_value_pane_vc_ParamLimits

0x952c,	// (0x00016024) set_value_pane_vc

0xab18,	// (0x00017610) list_double2_graphic_pane_vc_ParamLimits

0xab18,	// (0x00017610) list_double2_graphic_pane_vc

0xab18,	// (0x00017610) list_double2_large_graphic_pane_vc_ParamLimits

0xab18,	// (0x00017610) list_double2_large_graphic_pane_vc

0xab18,	// (0x00017610) list_double2_pane_vc_ParamLimits

0xab18,	// (0x00017610) list_double2_pane_vc

0xab18,	// (0x00017610) list_double_graphic_heading_pane_vc_ParamLimits

0xab18,	// (0x00017610) list_double_graphic_heading_pane_vc

0xab18,	// (0x00017610) list_double_graphic_pane_vc_ParamLimits

0xab18,	// (0x00017610) list_double_graphic_pane_vc

0xab18,	// (0x00017610) list_double_heading_pane_vc_ParamLimits

0xab18,	// (0x00017610) list_double_heading_pane_vc

0xab2a,	// (0x00017622) list_double_large_graphic_pane_vc_ParamLimits

0xab2a,	// (0x00017622) list_double_large_graphic_pane_vc

0xab18,	// (0x00017610) list_double_number_pane_vc_ParamLimits

0xab18,	// (0x00017610) list_double_number_pane_vc

0xab18,	// (0x00017610) list_double_pane_vc_ParamLimits

0xab18,	// (0x00017610) list_double_pane_vc

0xab18,	// (0x00017610) list_double_time_pane_vc_ParamLimits

0xab18,	// (0x00017610) list_double_time_pane_vc

0xab18,	// (0x00017610) list_setting_number_pane_vc_ParamLimits

0xab18,	// (0x00017610) list_setting_number_pane_vc

0xab18,	// (0x00017610) list_setting_pane_vc_ParamLimits

0xab18,	// (0x00017610) list_setting_pane_vc

0xab18,	// (0x00017610) list_single_graphic_heading_pane_vc_ParamLimits

0xab18,	// (0x00017610) list_single_graphic_heading_pane_vc

0xab18,	// (0x00017610) list_single_heading_pane_vc_ParamLimits

0xab18,	// (0x00017610) list_single_heading_pane_vc

0xab48,	// (0x00017640) list_single_number_heading_pane_vc_ParamLimits

0xab48,	// (0x00017640) list_single_number_heading_pane_vc

0x93be,	// (0x00015eb6) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x93be,	// (0x00015eb6) list_double_graphic_heading_pane_vc_g1

0x4155,	// (0x00010c4d) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x4155,	// (0x00010c4d) list_double_graphic_heading_pane_vc_g2

0x4161,	// (0x00010c59) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x4161,	// (0x00010c59) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7b9,	// (0x0001c2b1) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7b9,	// (0x0001c2b1) list_double_graphic_heading_pane_vc_g

0xb10d,	// (0x00017c05) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xb10d,	// (0x00017c05) list_double_graphic_heading_pane_vc_t1

0xb129,	// (0x00017c21) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xb129,	// (0x00017c21) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9ee,	// (0x0001c4e6) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9ee,	// (0x0001c4e6) list_double_graphic_heading_pane_vc_t

0x94b8,	// (0x00015fb0) list_setting_pane_vc_g1_ParamLimits

0x94b8,	// (0x00015fb0) list_setting_pane_vc_g1

0x94c4,	// (0x00015fbc) list_setting_pane_vc_g2_ParamLimits

0x94c4,	// (0x00015fbc) list_setting_pane_vc_g2

0x0001,

0xf7e4,	// (0x0001c2dc) list_setting_pane_vc_g_ParamLimits

0xf7e4,	// (0x0001c2dc) list_setting_pane_vc_g

0xb347,	// (0x00017e3f) list_setting_pane_vc_t1_ParamLimits

0xb347,	// (0x00017e3f) list_setting_pane_vc_t1

0xb363,	// (0x00017e5b) list_setting_pane_vc_t2_ParamLimits

0xb363,	// (0x00017e5b) list_setting_pane_vc_t2

0x0001,

0xfa31,	// (0x0001c529) list_setting_pane_vc_t_ParamLimits

0xfa31,	// (0x0001c529) list_setting_pane_vc_t

0x952c,	// (0x00016024) set_value_pane_cp_vc_ParamLimits

0x952c,	// (0x00016024) set_value_pane_cp_vc

0x4155,	// (0x00010c4d) list_single_number_heading_pane_vc_g1_ParamLimits

0x4155,	// (0x00010c4d) list_single_number_heading_pane_vc_g1

0x4161,	// (0x00010c59) list_single_number_heading_pane_vc_g2_ParamLimits

0x4161,	// (0x00010c59) list_single_number_heading_pane_vc_g2

0x0001,

0xf7da,	// (0x0001c2d2) list_single_number_heading_pane_vc_g_ParamLimits

0xf7da,	// (0x0001c2d2) list_single_number_heading_pane_vc_g

0x9484,	// (0x00015f7c) list_single_number_heading_pane_vc_t1_ParamLimits

0x9484,	// (0x00015f7c) list_single_number_heading_pane_vc_t1

0xb37d,	// (0x00017e75) list_single_number_heading_pane_vc_t2_ParamLimits

0xb37d,	// (0x00017e75) list_single_number_heading_pane_vc_t2

0xb391,	// (0x00017e89) list_single_number_heading_pane_vc_t3_ParamLimits

0xb391,	// (0x00017e89) list_single_number_heading_pane_vc_t3

0x0002,

0xfa36,	// (0x0001c52e) list_single_number_heading_pane_vc_t_ParamLimits

0xfa36,	// (0x0001c52e) list_single_number_heading_pane_vc_t

0x93be,	// (0x00015eb6) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x93be,	// (0x00015eb6) list_single_graphic_heading_pane_vc_g1

0x4155,	// (0x00010c4d) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x4155,	// (0x00010c4d) list_single_graphic_heading_pane_vc_g4

0x4161,	// (0x00010c59) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x4161,	// (0x00010c59) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7b9,	// (0x0001c2b1) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7b9,	// (0x0001c2b1) list_single_graphic_heading_pane_vc_g

0x9484,	// (0x00015f7c) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x9484,	// (0x00015f7c) list_single_graphic_heading_pane_vc_t1

0xb3a3,	// (0x00017e9b) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xb3a3,	// (0x00017e9b) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa3d,	// (0x0001c535) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa3d,	// (0x0001c535) list_single_graphic_heading_pane_vc_t

0x4155,	// (0x00010c4d) list_double2_pane_vc_g1_ParamLimits

0x4155,	// (0x00010c4d) list_double2_pane_vc_g1

0x4161,	// (0x00010c59) list_double2_pane_vc_g2_ParamLimits

0x4161,	// (0x00010c59) list_double2_pane_vc_g2

0x0001,

0xf7da,	// (0x0001c2d2) list_double2_pane_vc_g_ParamLimits

0xf7da,	// (0x0001c2d2) list_double2_pane_vc_g

0xb3b7,	// (0x00017eaf) list_double2_pane_vc_t1_ParamLimits

0xb3b7,	// (0x00017eaf) list_double2_pane_vc_t1

0xb3cd,	// (0x00017ec5) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xb3cd,	// (0x00017ec5) list_double2_large_graphic_pane_vc_g1

0x4155,	// (0x00010c4d) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x4155,	// (0x00010c4d) list_double2_large_graphic_pane_vc_g2

0x4161,	// (0x00010c59) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x4161,	// (0x00010c59) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa42,	// (0x0001c53a) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa42,	// (0x0001c53a) list_double2_large_graphic_pane_vc_g

0xb3d9,	// (0x00017ed1) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xb3d9,	// (0x00017ed1) list_double2_large_graphic_pane_vc_t1

0xb3ef,	// (0x00017ee7) list_double_time_pane_vc_g1_ParamLimits

0xb3ef,	// (0x00017ee7) list_double_time_pane_vc_g1

0xb3fb,	// (0x00017ef3) list_double_time_pane_vc_g2_ParamLimits

0xb3fb,	// (0x00017ef3) list_double_time_pane_vc_g2

0x0001,

0xfa49,	// (0x0001c541) list_double_time_pane_vc_g_ParamLimits

0xfa49,	// (0x0001c541) list_double_time_pane_vc_g

0xb407,	// (0x00017eff) list_double_time_pane_vc_t1_ParamLimits

0xb407,	// (0x00017eff) list_double_time_pane_vc_t1

0xb42b,	// (0x00017f23) list_double_time_pane_vc_t2_ParamLimits

0xb42b,	// (0x00017f23) list_double_time_pane_vc_t2

0xb45a,	// (0x00017f52) list_double_time_pane_vc_t3_ParamLimits

0xb45a,	// (0x00017f52) list_double_time_pane_vc_t3

0xb46c,	// (0x00017f64) list_double_time_pane_vc_t4_ParamLimits

0xb46c,	// (0x00017f64) list_double_time_pane_vc_t4

0x0003,

0xfa4e,	// (0x0001c546) list_double_time_pane_vc_t_ParamLimits

0xfa4e,	// (0x0001c546) list_double_time_pane_vc_t

0x4155,	// (0x00010c4d) list_double_pane_vc_g1_ParamLimits

0x4155,	// (0x00010c4d) list_double_pane_vc_g1

0x4161,	// (0x00010c59) list_double_pane_vc_g2_ParamLimits

0x4161,	// (0x00010c59) list_double_pane_vc_g2

0x0001,

0xf7da,	// (0x0001c2d2) list_double_pane_vc_g_ParamLimits

0xf7da,	// (0x0001c2d2) list_double_pane_vc_g

0xb480,	// (0x00017f78) list_double_pane_vc_t1_ParamLimits

0xb480,	// (0x00017f78) list_double_pane_vc_t1

0xb494,	// (0x00017f8c) list_double_pane_vc_t2_ParamLimits

0xb494,	// (0x00017f8c) list_double_pane_vc_t2

0x0001,

0xfa57,	// (0x0001c54f) list_double_pane_vc_t_ParamLimits

0xfa57,	// (0x0001c54f) list_double_pane_vc_t

0x4155,	// (0x00010c4d) list_double_number_pane_vc_g1_ParamLimits

0x4155,	// (0x00010c4d) list_double_number_pane_vc_g1

0x4161,	// (0x00010c59) list_double_number_pane_vc_g2_ParamLimits

0x4161,	// (0x00010c59) list_double_number_pane_vc_g2

0x0001,

0xf7da,	// (0x0001c2d2) list_double_number_pane_vc_g_ParamLimits

0xf7da,	// (0x0001c2d2) list_double_number_pane_vc_g

0xb4ac,	// (0x00017fa4) list_double_number_pane_vc_t1_ParamLimits

0xb4ac,	// (0x00017fa4) list_double_number_pane_vc_t1

0xb4be,	// (0x00017fb6) list_double_number_pane_vc_t2_ParamLimits

0xb4be,	// (0x00017fb6) list_double_number_pane_vc_t2

0xb4d2,	// (0x00017fca) list_double_number_pane_vc_t3_ParamLimits

0xb4d2,	// (0x00017fca) list_double_number_pane_vc_t3

0x0002,

0xfa5c,	// (0x0001c554) list_double_number_pane_vc_t_ParamLimits

0xfa5c,	// (0x0001c554) list_double_number_pane_vc_t

0xb4ea,	// (0x00017fe2) list_double_large_graphic_pane_vc_g1_ParamLimits

0xb4ea,	// (0x00017fe2) list_double_large_graphic_pane_vc_g1

0xb50c,	// (0x00018004) list_double_large_graphic_pane_vc_g2_ParamLimits

0xb50c,	// (0x00018004) list_double_large_graphic_pane_vc_g2

0xb520,	// (0x00018018) list_double_large_graphic_pane_vc_g3_ParamLimits

0xb520,	// (0x00018018) list_double_large_graphic_pane_vc_g3

0xb52f,	// (0x00018027) list_double_large_graphic_pane_vc_g4_ParamLimits

0xb52f,	// (0x00018027) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa63,	// (0x0001c55b) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa63,	// (0x0001c55b) list_double_large_graphic_pane_vc_g

0xb53b,	// (0x00018033) list_double_large_graphic_pane_vc_t1_ParamLimits

0xb53b,	// (0x00018033) list_double_large_graphic_pane_vc_t1

0xb557,	// (0x0001804f) list_double_large_graphic_pane_vc_t2_ParamLimits

0xb557,	// (0x0001804f) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa6c,	// (0x0001c564) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa6c,	// (0x0001c564) list_double_large_graphic_pane_vc_t

0x4155,	// (0x00010c4d) list_double_heading_pane_vc_g1_ParamLimits

0x4155,	// (0x00010c4d) list_double_heading_pane_vc_g1

0x4161,	// (0x00010c59) list_double_heading_pane_vc_g2_ParamLimits

0x4161,	// (0x00010c59) list_double_heading_pane_vc_g2

0x0001,

0xf7da,	// (0x0001c2d2) list_double_heading_pane_vc_g_ParamLimits

0xf7da,	// (0x0001c2d2) list_double_heading_pane_vc_g

0xb579,	// (0x00018071) list_double_heading_pane_vc_t1_ParamLimits

0xb579,	// (0x00018071) list_double_heading_pane_vc_t1

0x9484,	// (0x00015f7c) list_double_heading_pane_vc_t2_ParamLimits

0x9484,	// (0x00015f7c) list_double_heading_pane_vc_t2

0x0001,

0xfa71,	// (0x0001c569) list_double_heading_pane_vc_t_ParamLimits

0xfa71,	// (0x0001c569) list_double_heading_pane_vc_t

0xb58d,	// (0x00018085) list_double_graphic_pane_vc_g1_ParamLimits

0xb58d,	// (0x00018085) list_double_graphic_pane_vc_g1

0xb599,	// (0x00018091) list_double_graphic_pane_vc_g2_ParamLimits

0xb599,	// (0x00018091) list_double_graphic_pane_vc_g2

0x4155,	// (0x00010c4d) list_double_graphic_pane_vc_g3_ParamLimits

0x4155,	// (0x00010c4d) list_double_graphic_pane_vc_g3

0x0003,

0xfa76,	// (0x0001c56e) list_double_graphic_pane_vc_g_ParamLimits

0xfa76,	// (0x0001c56e) list_double_graphic_pane_vc_g

0xb5b6,	// (0x000180ae) list_double_graphic_pane_vc_t1_ParamLimits

0xb5b6,	// (0x000180ae) list_double_graphic_pane_vc_t1

0xb5da,	// (0x000180d2) list_double_graphic_pane_vc_t2_ParamLimits

0xb5da,	// (0x000180d2) list_double_graphic_pane_vc_t2

0x0001,

0xfa7f,	// (0x0001c577) list_double_graphic_pane_vc_t_ParamLimits

0xfa7f,	// (0x0001c577) list_double_graphic_pane_vc_t

0x5455,	// (0x00011f4d) aid_size_cell_fastswap

0x545d,	// (0x00011f55) aid_size_cell_touch_ParamLimits

0x545d,	// (0x00011f55) aid_size_cell_touch

0x56c2,	// (0x000121ba) popup_fast_swap_wide_window_ParamLimits

0x56c2,	// (0x000121ba) popup_fast_swap_wide_window

0x57c8,	// (0x000122c0) touch_pane_ParamLimits

0x57c8,	// (0x000122c0) touch_pane

0x41f0,	// (0x00010ce8) button_value_adjust_pane_cp2

0x41f8,	// (0x00010cf0) button_value_adjust_pane_cp4

0x4200,	// (0x00010cf8) form_field_data_pane_cp2

0x8320,	// (0x00014e18) form_field_data_wide_pane_cp2

0x46f2,	// (0x000111ea) bg_scroll_pane_ParamLimits

0x5a56,	// (0x0001254e) scroll_handle_pane_ParamLimits

0x5a6a,	// (0x00012562) scroll_sc2_down_pane_ParamLimits

0x5a6a,	// (0x00012562) scroll_sc2_down_pane

0x4738,	// (0x00011230) scroll_sc2_up_pane_ParamLimits

0x4738,	// (0x00011230) scroll_sc2_up_pane

0xba96,	// (0x0001858e) grid_wheel_folder_pane_g1_ParamLimits

0xba96,	// (0x0001858e) grid_wheel_folder_pane_g1

0x5c26,	// (0x0001271e) clock_nsta_pane_cp2_ParamLimits

0x5c26,	// (0x0001271e) clock_nsta_pane_cp2

0x856f,	// (0x00015067) listscroll_midp_pane_ParamLimits

0x8bcb,	// (0x000156c3) midp_canvas_pane

0x8eaf,	// (0x000159a7) nsta_clock_indic_pane

0x8eeb,	// (0x000159e3) listscroll_form_pane_vc

0x8ef3,	// (0x000159eb) listscroll_set_pane_vc_ParamLimits

0x8ef3,	// (0x000159eb) listscroll_set_pane_vc

0x9000,	// (0x00015af8) clock_nsta_pane

0x907b,	// (0x00015b73) indicator_nsta_pane

0x9358,	// (0x00015e50) bg_popup_sub_pane_cp2_ParamLimits

0x936c,	// (0x00015e64) find_pane_cp2_ParamLimits

0x936c,	// (0x00015e64) find_pane_cp2

0x9382,	// (0x00015e7a) grid_toobar_pane_ParamLimits

0x953c,	// (0x00016034) list_form_gen_pane_vc_ParamLimits

0x953c,	// (0x00016034) list_form_gen_pane_vc

0x9552,	// (0x0001604a) scroll_pane_cp8_vc_ParamLimits

0x9552,	// (0x0001604a) scroll_pane_cp8_vc

0x95ce,	// (0x000160c6) data_form_wide_pane_vc_ParamLimits

0x95ce,	// (0x000160c6) data_form_wide_pane_vc

0x95da,	// (0x000160d2) form_field_data_wide_pane_vc_g1

0x95e2,	// (0x000160da) form_field_data_wide_pane_vc_t1_ParamLimits

0x95e2,	// (0x000160da) form_field_data_wide_pane_vc_t1

0x4227,	// (0x00010d1f) input_focus_pane_cp6_vc_ParamLimits

0x4227,	// (0x00010d1f) input_focus_pane_cp6_vc

0x9950,	// (0x00016448) list_midp_pane_ParamLimits

0x995c,	// (0x00016454) scroll_pane_cp16_ParamLimits

0x995c,	// (0x00016454) scroll_pane_cp16

0x99aa,	// (0x000164a2) button_value_adjust_pane_ParamLimits

0x99aa,	// (0x000164a2) button_value_adjust_pane

0xa923,	// (0x0001741b) button_value_adjust_pane_cp6_ParamLimits

0xa923,	// (0x0001741b) button_value_adjust_pane_cp6

0xaa4d,	// (0x00017545) settings_code_pane_cp_ParamLimits

0xaa4d,	// (0x00017545) settings_code_pane_cp

0x3be4,	// (0x000106dc) cell_touch_pane_g1

0x3be4,	// (0x000106dc) cell_touch_pane_g2

0x0001,

0xf6fe,	// (0x0001c1f6) cell_touch_pane_g

0xb0eb,	// (0x00017be3) cell_touch_pane_cp_ParamLimits

0xb0eb,	// (0x00017be3) cell_touch_pane_cp

0xb0fb,	// (0x00017bf3) cell_touch_pane_ParamLimits

0xb0fb,	// (0x00017bf3) cell_touch_pane

0x3be4,	// (0x000106dc) scroll_sc2_down_pane_g1

0x3be4,	// (0x000106dc) scroll_sc2_up_pane_g1

0x3d5d,	// (0x00010855) bg_set_opt_pane_cp4_vc

0xb147,	// (0x00017c3f) list_set_graphic_pane_vc_g1_ParamLimits

0xb147,	// (0x00017c3f) list_set_graphic_pane_vc_g1

0xb153,	// (0x00017c4b) list_set_graphic_pane_vc_g2_ParamLimits

0xb153,	// (0x00017c4b) list_set_graphic_pane_vc_g2

0x0001,

0xf9f3,	// (0x0001c4eb) list_set_graphic_pane_vc_g_ParamLimits

0xf9f3,	// (0x0001c4eb) list_set_graphic_pane_vc_g

0xb15f,	// (0x00017c57) text_primary_small_cp13_vc_ParamLimits

0xb15f,	// (0x00017c57) text_primary_small_cp13_vc

0xb177,	// (0x00017c6f) list_set_graphic_pane_vc_ParamLimits

0xb177,	// (0x00017c6f) list_set_graphic_pane_vc

0x3d5d,	// (0x00010855) input_focus_pane_cp2_vc

0x3be4,	// (0x000106dc) setting_code_pane_vc_g1

0x3df0,	// (0x000108e8) setting_code_pane_vc_t1

0xb18a,	// (0x00017c82) set_text_pane_vc_t1_ParamLimits

0xb18a,	// (0x00017c82) set_text_pane_vc_t1

0x3d5d,	// (0x00010855) input_focus_pane_cp1_vc

0xb1a6,	// (0x00017c9e) list_set_text_pane_vc

0x3be4,	// (0x000106dc) setting_text_pane_vc_g1

0x3d5d,	// (0x00010855) bg_set_opt_pane_cp2_vc

0x3de7,	// (0x000108df) setting_slider_graphic_pane_vc_g1

0xb1b0,	// (0x00017ca8) setting_slider_graphic_pane_vc_t1

0xb1c0,	// (0x00017cb8) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9f8,	// (0x0001c4f0) setting_slider_graphic_pane_vc_t

0xb1d0,	// (0x00017cc8) slider_set_pane_cp_vc

0xb1d8,	// (0x00017cd0) slider_set_pane_vc_g1

0xb1e1,	// (0x00017cd9) slider_set_pane_vc_g2

0x0006,

0xf9fd,	// (0x0001c4f5) slider_set_pane_vc_g

0x42b9,	// (0x00010db1) set_opt_bg_pane_g1_copy1

0x42c1,	// (0x00010db9) set_opt_bg_pane_g2_copy1

0xb20d,	// (0x00017d05) set_opt_bg_pane_g3_copy1

0x42d1,	// (0x00010dc9) set_opt_bg_pane_g4_copy1

0x42d9,	// (0x00010dd1) set_opt_bg_pane_g5_copy1

0x42e1,	// (0x00010dd9) set_opt_bg_pane_g6_copy1

0xb215,	// (0x00017d0d) set_opt_bg_pane_g7_copy1

0xb21d,	// (0x00017d15) set_opt_bg_pane_g8_copy1

0xb225,	// (0x00017d1d) set_opt_bg_pane_g9_copy1

0x3d5d,	// (0x00010855) bg_set_opt_pane_cp_vc

0xb22d,	// (0x00017d25) setting_slider_pane_vc_t1

0xb23c,	// (0x00017d34) setting_slider_pane_vc_t2

0xb24c,	// (0x00017d44) setting_slider_pane_vc_t3

0x0002,

0xfa0c,	// (0x0001c504) setting_slider_pane_vc_t

0xb25c,	// (0x00017d54) slider_set_pane_vc

0x6616,	// (0x0001310e) volume_set_pane_vc_g1

0x6911,	// (0x00013409) volume_set_pane_vc_g2

0x691a,	// (0x00013412) volume_set_pane_vc_g3

0x6923,	// (0x0001341b) volume_set_pane_vc_g4

0x692c,	// (0x00013424) volume_set_pane_vc_g5

0x6935,	// (0x0001342d) volume_set_pane_vc_g6

0x693e,	// (0x00013436) volume_set_pane_vc_g7

0x6947,	// (0x0001343f) volume_set_pane_vc_g8

0x6950,	// (0x00013448) volume_set_pane_vc_g9

0x6959,	// (0x00013451) volume_set_pane_vc_g10

0x0009,

0xfa13,	// (0x0001c50b) volume_set_pane_vc_g

0xb264,	// (0x00017d5c) volume_set_pane_vc

0xb26c,	// (0x00017d64) button_value_adjust_pane_cp1_vc

0xb276,	// (0x00017d6e) list_highlight_pane_cp2_vc

0xb27f,	// (0x00017d77) list_set_pane_vc_ParamLimits

0xb27f,	// (0x00017d77) list_set_pane_vc

0xb2dd,	// (0x00017dd5) main_pane_set_vc_t1_ParamLimits

0xb2dd,	// (0x00017dd5) main_pane_set_vc_t1

0xb2f2,	// (0x00017dea) main_pane_set_vc_t2_ParamLimits

0xb2f2,	// (0x00017dea) main_pane_set_vc_t2

0xb304,	// (0x00017dfc) main_pane_set_vc_t3_ParamLimits

0xb304,	// (0x00017dfc) main_pane_set_vc_t3

0xb316,	// (0x00017e0e) main_pane_set_vc_t4_ParamLimits

0xb316,	// (0x00017e0e) main_pane_set_vc_t4

0x0003,

0xfa28,	// (0x0001c520) main_pane_set_vc_t_ParamLimits

0xfa28,	// (0x0001c520) main_pane_set_vc_t

0xb328,	// (0x00017e20) setting_code_pane_vc_ParamLimits

0xb328,	// (0x00017e20) setting_code_pane_vc

0xb337,	// (0x00017e2f) setting_slider_graphic_pane_vc

0xb337,	// (0x00017e2f) setting_slider_pane_vc

0xb337,	// (0x00017e2f) setting_text_pane_vc

0xb337,	// (0x00017e2f) setting_volume_pane_vc

0xb33f,	// (0x00017e37) scroll_pane_cp121_vc

0x41de,	// (0x00010cd6) set_content_pane_vc

0xb604,	// (0x000180fc) button_value_adjust_pane_g1

0xb60d,	// (0x00018105) button_value_adjust_pane_g2

0x0001,

0xfa84,	// (0x0001c57c) button_value_adjust_pane_g

0xb616,	// (0x0001810e) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb616,	// (0x0001810e) form_field_slider_wide_pane_vc_t1

0xb62a,	// (0x00018122) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb62a,	// (0x00018122) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa89,	// (0x0001c581) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa89,	// (0x0001c581) form_field_slider_wide_pane_vc_t

0x3dcb,	// (0x000108c3) input_focus_pane_cp10_vc_ParamLimits

0x3dcb,	// (0x000108c3) input_focus_pane_cp10_vc

0xb658,	// (0x00018150) slider_cont_pane_cp1_vc_ParamLimits

0xb658,	// (0x00018150) slider_cont_pane_cp1_vc

0xb66a,	// (0x00018162) slider_form_pane_g1_cp2

0xb1e1,	// (0x00017cd9) slider_form_pane_g2_cp2

0xb697,	// (0x0001818f) form_field_slider_pane_vc_t3

0xb6a5,	// (0x0001819d) form_field_slider_pane_vc_t4

0xb6b3,	// (0x000181ab) slider_form_pane_vc_ParamLimits

0xb6b3,	// (0x000181ab) slider_form_pane_vc

0xb6c0,	// (0x000181b8) form_field_slider_pane_vc_t1_ParamLimits

0xb6c0,	// (0x000181b8) form_field_slider_pane_vc_t1

0xb62a,	// (0x00018122) form_field_slider_pane_vc_t2_ParamLimits

0xb62a,	// (0x00018122) form_field_slider_pane_vc_t2

0x0001,

0xfa9b,	// (0x0001c593) form_field_slider_pane_vc_t_ParamLimits

0xfa9b,	// (0x0001c593) form_field_slider_pane_vc_t

0x3dcb,	// (0x000108c3) input_focus_pane_cp9_vc_ParamLimits

0x3dcb,	// (0x000108c3) input_focus_pane_cp9_vc

0xb6dc,	// (0x000181d4) slider_cont_pane_vc_ParamLimits

0xb6dc,	// (0x000181d4) slider_cont_pane_vc

0xb6f0,	// (0x000181e8) list_form_graphic_pane_cp_vc_ParamLimits

0xb6f0,	// (0x000181e8) list_form_graphic_pane_cp_vc

0x95da,	// (0x000160d2) form_field_popup_wide_pane_vc_g1

0xb705,	// (0x000181fd) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb705,	// (0x000181fd) form_field_popup_wide_pane_vc_t1

0x4227,	// (0x00010d1f) input_focus_pane_cp8_vc_ParamLimits

0x4227,	// (0x00010d1f) input_focus_pane_cp8_vc

0xb74a,	// (0x00018242) list_form_wide_pane_vc_ParamLimits

0xb74a,	// (0x00018242) list_form_wide_pane_vc

0xb756,	// (0x0001824e) list_form_graphic_pane_vc_g1

0xb75e,	// (0x00018256) list_form_graphic_pane_vc_t1_ParamLimits

0xb75e,	// (0x00018256) list_form_graphic_pane_vc_t1

0x3dd9,	// (0x000108d1) list_highlight_pane_cp5_vc_ParamLimits

0x3dd9,	// (0x000108d1) list_highlight_pane_cp5_vc

0xb77a,	// (0x00018272) list_form_graphic_pane_vc_ParamLimits

0xb77a,	// (0x00018272) list_form_graphic_pane_vc

0x95da,	// (0x000160d2) form_field_popup_pane_vc_g1

0xb790,	// (0x00018288) form_field_popup_pane_vc_t1_ParamLimits

0xb790,	// (0x00018288) form_field_popup_pane_vc_t1

0x4227,	// (0x00010d1f) input_focus_pane_cp7_vc_ParamLimits

0x4227,	// (0x00010d1f) input_focus_pane_cp7_vc

0xb7a7,	// (0x0001829f) list_form_pane_vc_ParamLimits

0xb7a7,	// (0x0001829f) list_form_pane_vc

0xb7b3,	// (0x000182ab) data_form_pane_vc_t1_ParamLimits

0xb7b3,	// (0x000182ab) data_form_pane_vc_t1

0x42b9,	// (0x00010db1) input_focus_pane_vc_g1

0x42c1,	// (0x00010db9) input_focus_pane_vc_g2

0x42c9,	// (0x00010dc1) input_focus_pane_vc_g3

0x42d1,	// (0x00010dc9) input_focus_pane_vc_g4

0x42d9,	// (0x00010dd1) input_focus_pane_vc_g5

0x42e1,	// (0x00010dd9) input_focus_pane_vc_g6

0x42e9,	// (0x00010de1) input_focus_pane_vc_g7

0x42f1,	// (0x00010de9) input_focus_pane_vc_g8

0x42f9,	// (0x00010df1) input_focus_pane_vc_g9

0x3be4,	// (0x000106dc) input_focus_pane_vc_g10

0x0009,

0xf687,	// (0x0001c17f) input_focus_pane_vc_g

0x95ce,	// (0x000160c6) data_form_pane_vc_ParamLimits

0x95ce,	// (0x000160c6) data_form_pane_vc

0x95da,	// (0x000160d2) form_field_data_pane_vc_g1

0xb7ce,	// (0x000182c6) form_field_data_pane_vc_t1_ParamLimits

0xb7ce,	// (0x000182c6) form_field_data_pane_vc_t1

0x4227,	// (0x00010d1f) input_focus_pane_vc_ParamLimits

0x4227,	// (0x00010d1f) input_focus_pane_vc

0xb7e8,	// (0x000182e0) button_value_adjust_pane_cp3_vc

0xb7f0,	// (0x000182e8) button_value_adjust_pane_cp5_vc

0xb7f8,	// (0x000182f0) form_field_data_pane_vc_ParamLimits

0xb7f8,	// (0x000182f0) form_field_data_pane_vc

0xb80f,	// (0x00018307) form_field_data_pane_vc_cp2

0xb817,	// (0x0001830f) form_field_data_wide_pane_vc_ParamLimits

0xb817,	// (0x0001830f) form_field_data_wide_pane_vc

0xb82d,	// (0x00018325) form_field_data_wide_pane_vc_cp2

0xb835,	// (0x0001832d) form_field_popup_pane_vc_ParamLimits

0xb835,	// (0x0001832d) form_field_popup_pane_vc

0xb84c,	// (0x00018344) form_field_popup_wide_pane_vc_ParamLimits

0xb84c,	// (0x00018344) form_field_popup_wide_pane_vc

0xb862,	// (0x0001835a) form_field_slider_pane_vc_ParamLimits

0xb862,	// (0x0001835a) form_field_slider_pane_vc

0xb875,	// (0x0001836d) form_field_slider_wide_pane_vc_ParamLimits

0xb875,	// (0x0001836d) form_field_slider_wide_pane_vc

0xb888,	// (0x00018380) grid_touch_1_pane_ParamLimits

0xb888,	// (0x00018380) grid_touch_1_pane

0xb894,	// (0x0001838c) grid_touch_2_pane_ParamLimits

0xb894,	// (0x0001838c) grid_touch_2_pane

0x8e7a,	// (0x00015972) touch_pane_g1_ParamLimits

0x8e7a,	// (0x00015972) touch_pane_g1

0xb8ac,	// (0x000183a4) cell_app_pane_cp_wide_ParamLimits

0xb8ac,	// (0x000183a4) cell_app_pane_cp_wide

0xb8bd,	// (0x000183b5) grid_popup_fast_wide_pane_ParamLimits

0xb8bd,	// (0x000183b5) grid_popup_fast_wide_pane

0xb8d1,	// (0x000183c9) scroll_pane_cp19_ParamLimits

0xb8d1,	// (0x000183c9) scroll_pane_cp19

0x3d5d,	// (0x00010855) bg_popup_window_pane_cp20

0xb8e5,	// (0x000183dd) listscroll_popup_fast_wide_pane

0x3dd9,	// (0x000108d1) grid_indicator_nsta_pane

0xb8ed,	// (0x000183e5) clock_nsta_pane_g1

0xb8f6,	// (0x000183ee) clock_nsta_pane_t1

0xb912,	// (0x0001840a) cell_indicator_nsta_pane_ParamLimits

0xb912,	// (0x0001840a) cell_indicator_nsta_pane

0xb943,	// (0x0001843b) cell_indicator_nsta_pane_g1

0xb951,	// (0x00018449) cell_indicator_nsta_pane_g2

0x0001,

0xfaac,	// (0x0001c5a4) cell_indicator_nsta_pane_g

0xb95e,	// (0x00018456) clock_nsta_pane_cp

0xb966,	// (0x0001845e) indicator_nsta_pane_cp

0xb96e,	// (0x00018466) nsta_clock_indic_pane_g1

0x3e2f,	// (0x00010927) grid_indicator_pane

0x86ca,	// (0x000151c2) scroll_pane_cp29

0x5b75,	// (0x0001266d) indicator_nsta_pane_cp2_ParamLimits

0x5b75,	// (0x0001266d) indicator_nsta_pane_cp2

0x3dd9,	// (0x000108d1) main_apps_wheel_pane

0x9833,	// (0x0001632b) form_midp_field_text_pane_ParamLimits

0x997c,	// (0x00016474) scroll_bar_cp050_ParamLimits

0xb9cf,	// (0x000184c7) cell_indicator_pane_ParamLimits

0xb9cf,	// (0x000184c7) cell_indicator_pane

0xb9e8,	// (0x000184e0) cell_indicator_pane_g1

0xb9f2,	// (0x000184ea) grid_wheel_folder_pane_ParamLimits

0xb9f2,	// (0x000184ea) grid_wheel_folder_pane

0xba08,	// (0x00018500) list_wheel_apps_pane_ParamLimits

0xba08,	// (0x00018500) list_wheel_apps_pane

0xba19,	// (0x00018511) main_apps_wheel_pane_g1_ParamLimits

0xba19,	// (0x00018511) main_apps_wheel_pane_g1

0xba2d,	// (0x00018525) main_apps_wheel_pane_g2_ParamLimits

0xba2d,	// (0x00018525) main_apps_wheel_pane_g2

0x0001,

0xfac8,	// (0x0001c5c0) main_apps_wheel_pane_g_ParamLimits

0xfac8,	// (0x0001c5c0) main_apps_wheel_pane_g

0xba45,	// (0x0001853d) main_apps_wheel_pane_t1_ParamLimits

0xba45,	// (0x0001853d) main_apps_wheel_pane_t1

0xba68,	// (0x00018560) list_wheel_apps_pane_g1

0xba70,	// (0x00018568) list_wheel_apps_pane_g2

0xba78,	// (0x00018570) list_wheel_apps_pane_g3

0xba82,	// (0x0001857a) list_wheel_apps_pane_g4

0xba8c,	// (0x00018584) list_wheel_apps_pane_g5

0x0004,

0xfacd,	// (0x0001c5c5) list_wheel_apps_pane_g

0x8a43,	// (0x0001553b) navi_icon_text_pane

0x8f2f,	// (0x00015a27) aid_fill_nsta

0xbaaf,	// (0x000185a7) navi_icon_text_pane_g1

0xbabb,	// (0x000185b3) navi_icon_text_pane_t1

0x88e6,	// (0x000153de) list_set_graphic_pane_t1_ParamLimits

0x88e6,	// (0x000153de) list_set_graphic_pane_t1

0xa0ab,	// (0x00016ba3) popup_midp_note_alarm_window_t6_ParamLimits

0xa0ab,	// (0x00016ba3) popup_midp_note_alarm_window_t6

0xa0bd,	// (0x00016bb5) popup_midp_note_alarm_window_t7_ParamLimits

0xa0bd,	// (0x00016bb5) popup_midp_note_alarm_window_t7

0xa0cf,	// (0x00016bc7) popup_midp_note_alarm_window_t8_ParamLimits

0xa0cf,	// (0x00016bc7) popup_midp_note_alarm_window_t8

0xa0e1,	// (0x00016bd9) popup_midp_note_alarm_window_t9_ParamLimits

0xa0e1,	// (0x00016bd9) popup_midp_note_alarm_window_t9

0xa0f3,	// (0x00016beb) popup_midp_note_alarm_window_t10_ParamLimits

0xa0f3,	// (0x00016beb) popup_midp_note_alarm_window_t10

0xa105,	// (0x00016bfd) popup_midp_note_alarm_window_t11_ParamLimits

0xa105,	// (0x00016bfd) popup_midp_note_alarm_window_t11

0xa117,	// (0x00016c0f) scroll_pane_cp17_ParamLimits

0xa117,	// (0x00016c0f) scroll_pane_cp17

0x6616,	// (0x0001310e) volume_small_pane_cp_g1

0x6962,	// (0x0001345a) volume_small_pane_cp_g2

0x696b,	// (0x00013463) volume_small_pane_cp_g3

0x6974,	// (0x0001346c) volume_small_pane_cp_g4

0x697d,	// (0x00013475) volume_small_pane_cp_g5

0x692c,	// (0x00013424) volume_small_pane_cp_g6

0x6986,	// (0x0001347e) volume_small_pane_cp_g7

0x698f,	// (0x00013487) volume_small_pane_cp_g8

0x6998,	// (0x00013490) volume_small_pane_cp_g9

0x69a1,	// (0x00013499) volume_small_pane_cp_g10

0x8c98,	// (0x00015790) midp_ticker_pane_g1_ParamLimits

0x8ca4,	// (0x0001579c) midp_ticker_pane_g2_ParamLimits

0xf753,	// (0x0001c24b) midp_ticker_pane_g_ParamLimits

0x8cb0,	// (0x000157a8) midp_ticker_pane_t1_ParamLimits

0x8f45,	// (0x00015a3d) aid_fill_nsta_2

0x9968,	// (0x00016460) list_form2_midp_pane

0xaacb,	// (0x000175c3) midp_editing_number_pane_ParamLimits

0xaada,	// (0x000175d2) midp_ticker_pane_ParamLimits

0xbacd,	// (0x000185c5) form2_midp_field_pane

0xbaf1,	// (0x000185e9) scroll_pane_cp51

0xbb11,	// (0x00018609) form2_midp_button_pane_ParamLimits

0xbb11,	// (0x00018609) form2_midp_button_pane

0xbb23,	// (0x0001861b) form2_midp_content_pane_ParamLimits

0xbb23,	// (0x0001861b) form2_midp_content_pane

0xbb3d,	// (0x00018635) form2_midp_field_choice_group_pane

0xbb45,	// (0x0001863d) form2_midp_field_pane_g1

0xbb4d,	// (0x00018645) form2_midp_field_pane_g2

0xbb55,	// (0x0001864d) form2_midp_field_pane_g3

0xbb5d,	// (0x00018655) form2_midp_field_pane_g4

0x0003,

0xfaf2,	// (0x0001c5ea) form2_midp_field_pane_g

0xbb65,	// (0x0001865d) form2_midp_gauge_slider_pane

0xbb6d,	// (0x00018665) form2_midp_gauge_wait_pane

0xbb75,	// (0x0001866d) form2_midp_image_pane_ParamLimits

0xbb75,	// (0x0001866d) form2_midp_image_pane

0xbb90,	// (0x00018688) form2_midp_label_pane_ParamLimits

0xbb90,	// (0x00018688) form2_midp_label_pane

0xbba9,	// (0x000186a1) form2_midp_label_pane_cp_ParamLimits

0xbba9,	// (0x000186a1) form2_midp_label_pane_cp

0xbbca,	// (0x000186c2) form2_midp_string_pane_ParamLimits

0xbbca,	// (0x000186c2) form2_midp_string_pane

0xbbdc,	// (0x000186d4) form2_midp_text_pane_ParamLimits

0xbbdc,	// (0x000186d4) form2_midp_text_pane

0xbbf7,	// (0x000186ef) form2_midp_time_pane

0xbc07,	// (0x000186ff) input_focus_pane_cp51_ParamLimits

0xbc07,	// (0x000186ff) input_focus_pane_cp51

0xbc1f,	// (0x00018717) form2_midp_label_pane_t1_ParamLimits

0xbc1f,	// (0x00018717) form2_midp_label_pane_t1

0xbc60,	// (0x00018758) form2_mdip_text_pane_t1_ParamLimits

0xbc60,	// (0x00018758) form2_mdip_text_pane_t1

0xbc7f,	// (0x00018777) form2_midp_time_pane_t1

0xbc9a,	// (0x00018792) form2_midp_gauge_slider_pane_t1

0xbcac,	// (0x000187a4) form2_midp_gauge_slider_pane_t2

0xbcbe,	// (0x000187b6) form2_midp_gauge_slider_pane_t3

0x0002,

0xfafb,	// (0x0001c5f3) form2_midp_gauge_slider_pane_t

0xbcd0,	// (0x000187c8) form2_midp_slider_pane

0xbcdc,	// (0x000187d4) form2_midp_gauge_wait_pane_t1

0xbcea,	// (0x000187e2) form2_midp_wait_pane_ParamLimits

0xbcea,	// (0x000187e2) form2_midp_wait_pane

0xbd15,	// (0x0001880d) list_single_2graphic_pane_cp4_ParamLimits

0xbd15,	// (0x0001880d) list_single_2graphic_pane_cp4

0x9643,	// (0x0001613b) list_single_midp_graphic_pane_cp_ParamLimits

0x9643,	// (0x0001613b) list_single_midp_graphic_pane_cp

0x3d5d,	// (0x00010855) list_highlight_pane_cp20

0xbd3d,	// (0x00018835) list_single_2graphic_pane_g1_cp4

0xaff1,	// (0x00017ae9) list_single_2graphic_pane_g2_cp4

0xbd45,	// (0x0001883d) list_single_2graphic_pane_t1_cp4

0x3dd9,	// (0x000108d1) list_highlight_pane_cp21

0xbd54,	// (0x0001884c) list_single_midp_graphic_pane_g4_cp

0xbd63,	// (0x0001885b) list_single_midp_graphic_pane_t1_cp

0xbd78,	// (0x00018870) form2_mdip_string_pane_t1_ParamLimits

0xbd78,	// (0x00018870) form2_mdip_string_pane_t1

0x3d5d,	// (0x00010855) bg_wml_button_pane_cp2

0x3be4,	// (0x000106dc) form2_midp_image_pane_g1

0x4179,	// (0x00010c71) list_double_large_graphic_pane_g5_ParamLimits

0x4179,	// (0x00010c71) list_double_large_graphic_pane_g5

0x856f,	// (0x00015067) midp_form_pane_ParamLimits

0x3dd9,	// (0x000108d1) main_apps_wheel_pane_ParamLimits

0x6258,	// (0x00012d50) popup_preview_window_ParamLimits

0x6258,	// (0x00012d50) popup_preview_window

0x6413,	// (0x00012f0b) popup_touch_info_window_ParamLimits

0x6413,	// (0x00012f0b) popup_touch_info_window

0x6431,	// (0x00012f29) popup_touch_menu_window_ParamLimits

0x6431,	// (0x00012f29) popup_touch_menu_window

0x3bda,	// (0x000106d2) bg_popup_sub_pane_cp6

0xbe85,	// (0x0001897d) list_touch_menu_pane

0xbe8d,	// (0x00018985) list_single_touch_menu_pane_ParamLimits

0xbe8d,	// (0x00018985) list_single_touch_menu_pane

0xbea3,	// (0x0001899b) list_single_touch_menu_pane_t1

0x3dd9,	// (0x000108d1) bg_popup_sub_pane_cp7_ParamLimits

0x3dd9,	// (0x000108d1) bg_popup_sub_pane_cp7

0xbeb1,	// (0x000189a9) heading_sub_pane

0xbeb9,	// (0x000189b1) list_touch_info_pane_ParamLimits

0xbeb9,	// (0x000189b1) list_touch_info_pane

0xbec8,	// (0x000189c0) list_single_touch_info_pane_ParamLimits

0xbec8,	// (0x000189c0) list_single_touch_info_pane

0xbeda,	// (0x000189d2) list_single_touch_info_pane_t1

0xbee8,	// (0x000189e0) list_single_touch_info_pane_t2

0x0001,

0xfb09,	// (0x0001c601) list_single_touch_info_pane_t

0x8bc3,	// (0x000156bb) bg_popup_heading_pane_cp

0xbef6,	// (0x000189ee) heading_sub_pane_t1

0x9568,	// (0x00016060) bg_popup_preview_window_pane_cp_ParamLimits

0x9568,	// (0x00016060) bg_popup_preview_window_pane_cp

0xbeb1,	// (0x000189a9) heading_preview_pane

0xbeb9,	// (0x000189b1) list_preview_pane_ParamLimits

0xbeb9,	// (0x000189b1) list_preview_pane

0xbf04,	// (0x000189fc) popup_preview_window_g1

0xbec8,	// (0x000189c0) list_single_preview_pane_ParamLimits

0xbec8,	// (0x000189c0) list_single_preview_pane

0xbf0c,	// (0x00018a04) list_single_preview_pane_g1

0xbf14,	// (0x00018a0c) list_single_preview_pane_t1

0xbeda,	// (0x000189d2) list_single_preview_pane_t2

0x0001,

0xfb0e,	// (0x0001c606) list_single_preview_pane_t

0xbf22,	// (0x00018a1a) bg_popup_heading_pane_cp2_ParamLimits

0xbf22,	// (0x00018a1a) bg_popup_heading_pane_cp2

0xbf38,	// (0x00018a30) heading_preview_pane_g1

0xbf40,	// (0x00018a38) heading_preview_pane_t1_ParamLimits

0xbf40,	// (0x00018a38) heading_preview_pane_t1

0x3e46,	// (0x0001093e) soft_indicator_pane_t1_ParamLimits

0x4121,	// (0x00010c19) scroll_pane_ParamLimits

0x472f,	// (0x00011227) scroll_sc2_left_pane

0x4726,	// (0x0001121e) scroll_sc2_right_pane

0x474e,	// (0x00011246) scroll_bg_pane_g1_ParamLimits

0x4763,	// (0x0001125b) scroll_bg_pane_g2_ParamLimits

0x477b,	// (0x00011273) scroll_bg_pane_g3_ParamLimits

0xf6de,	// (0x0001c1d6) scroll_bg_pane_g_ParamLimits

0x474e,	// (0x00011246) scroll_handle_pane_g1_ParamLimits

0x4790,	// (0x00011288) scroll_handle_pane_g2_ParamLimits

0x477b,	// (0x00011273) scroll_handle_pane_g3_ParamLimits

0xf6e5,	// (0x0001c1dd) scroll_handle_pane_g_ParamLimits

0x5edb,	// (0x000129d3) popup_choice_list_window_ParamLimits

0x5edb,	// (0x000129d3) popup_choice_list_window

0x9364,	// (0x00015e5c) choice_list_pane

0x9408,	// (0x00015f00) cell_toolbar_pane_t1

0x9430,	// (0x00015f28) toolbar_button_pane_ParamLimits

0xa5d1,	// (0x000170c9) ai_gene_pane_1_t2_ParamLimits

0xa5d1,	// (0x000170c9) ai_gene_pane_1_t2

0x0001,

0xf90d,	// (0x0001c405) ai_gene_pane_1_t_ParamLimits

0xf90d,	// (0x0001c405) ai_gene_pane_1_t

0xbf5d,	// (0x00018a55) scroll_sc2_left_pane_g1

0xbf5d,	// (0x00018a55) scroll_sc2_right_pane_g1

0x8f05,	// (0x000159fd) bg_popup_sub_pane_cp10

0xbf67,	// (0x00018a5f) list_choice_list_pane

0xbf80,	// (0x00018a78) list_single_choice_list_pane_ParamLimits

0xbf80,	// (0x00018a78) list_single_choice_list_pane

0xbf93,	// (0x00018a8b) list_single_choice_list_pane_g1

0x8535,	// (0x0001502d) list_single_choice_list_pane_t1_ParamLimits

0x8535,	// (0x0001502d) list_single_choice_list_pane_t1

0xbf9b,	// (0x00018a93) choice_list_pane_g1

0xbfa3,	// (0x00018a9b) choice_list_pane_t1

0x3bda,	// (0x000106d2) input_focus_pane_cp11

0x4541,	// (0x00011039) title_pane_stacon_g2_ParamLimits

0x4541,	// (0x00011039) title_pane_stacon_g2

0x0002,

0xf6c4,	// (0x0001c1bc) title_pane_stacon_g_ParamLimits

0xf6c4,	// (0x0001c1bc) title_pane_stacon_g

0x8bc3,	// (0x000156bb) cursor_press_pane

0x5f83,	// (0x00012a7b) popup_fep_hwr_window_ParamLimits

0x5f83,	// (0x00012a7b) popup_fep_hwr_window

0x5ffb,	// (0x00012af3) popup_fep_vkb_window_ParamLimits

0x5ffb,	// (0x00012af3) popup_fep_vkb_window

0xbfb1,	// (0x00018aa9) cursor_press_pane_g1

0x0002,

0xfb37,	// (0x0001c62f) fep_vkb_side_pane_g_ParamLimits

0x69e3,	// (0x000134db) fep_hwr_candidate_pane_ParamLimits

0x69e3,	// (0x000134db) fep_hwr_candidate_pane

0x6a0d,	// (0x00013505) fep_hwr_side_pane_ParamLimits

0x6a0d,	// (0x00013505) fep_hwr_side_pane

0x6a2d,	// (0x00013525) fep_hwr_top_pane_ParamLimits

0x6a2d,	// (0x00013525) fep_hwr_top_pane

0x6a45,	// (0x0001353d) fep_hwr_write_pane_ParamLimits

0x6a45,	// (0x0001353d) fep_hwr_write_pane

0xfb37,	// (0x0001c62f) fep_vkb_side_pane_g

0xbfb9,	// (0x00018ab1) fep_hwr_top_pane_g1

0xbfcb,	// (0x00018ac3) fep_hwr_top_pane_g2

0x6a7f,	// (0x00013577) fep_hwr_top_pane_g3

0x0002,

0xfb13,	// (0x0001c60b) fep_hwr_top_pane_g

0x6a94,	// (0x0001358c) fep_hwr_top_text_pane

0x485b,	// (0x00011353) fep_hwr_top_text_pane_g1

0xc001,	// (0x00018af9) fep_hwr_top_text_pane_t1

0x6b8a,	// (0x00013682) fep_hwr_candidate_pane_g1

0xc246,	// (0x00018d3e) fep_vkb_keypad_pane_g3_ParamLimits

0xc246,	// (0x00018d3e) fep_vkb_keypad_pane_g3

0xc26e,	// (0x00018d66) fep_vkb_keypad_pane_g4_ParamLimits

0xc26e,	// (0x00018d66) fep_vkb_keypad_pane_g4

0xc2dd,	// (0x00018dd5) fep_vkb_bottom_pane_g2_ParamLimits

0xc2dd,	// (0x00018dd5) fep_vkb_bottom_pane_g2

0x0001,

0xfb3e,	// (0x0001c636) fep_vkb_bottom_pane_g_ParamLimits

0xfb3e,	// (0x0001c636) fep_vkb_bottom_pane_g

0xbf5d,	// (0x00018a55) cell_vkb_side_pane_g2

0x0001,

0xfb48,	// (0x0001c640) cell_vkb_side_pane_g

0xc368,	// (0x00018e60) cell_vkb_side_pane_t1

0xc376,	// (0x00018e6e) cell_vkb_side_pane_t1_copy1

0xbf5d,	// (0x00018a55) bg_fep_vkb_candidate_pane_g2

0xc4a2,	// (0x00018f9a) cell_vkb_candidate_pane_ParamLimits

0xc00f,	// (0x00018b07) aid_size_cell_vkb_ParamLimits

0xc00f,	// (0x00018b07) aid_size_cell_vkb

0xc4a2,	// (0x00018f9a) cell_vkb_candidate_pane

0x6bb1,	// (0x000136a9) bg_popup_fep_shadow_pane_g1

0xc09d,	// (0x00018b95) fep_vkb_bottom_pane_ParamLimits

0xc09d,	// (0x00018b95) fep_vkb_bottom_pane

0xc0d3,	// (0x00018bcb) fep_vkb_candidate_pane_ParamLimits

0xc0d3,	// (0x00018bcb) fep_vkb_candidate_pane

0xc0ef,	// (0x00018be7) fep_vkb_keypad_pane_ParamLimits

0xc0ef,	// (0x00018be7) fep_vkb_keypad_pane

0xc12e,	// (0x00018c26) fep_vkb_side_pane_ParamLimits

0xc12e,	// (0x00018c26) fep_vkb_side_pane

0xc16a,	// (0x00018c62) fep_vkb_top_pane_ParamLimits

0xc16a,	// (0x00018c62) fep_vkb_top_pane

0xc19f,	// (0x00018c97) fep_vkb_top_pane_g1_ParamLimits

0xc19f,	// (0x00018c97) fep_vkb_top_pane_g1

0xc1ae,	// (0x00018ca6) fep_vkb_top_pane_g2_ParamLimits

0xc1ae,	// (0x00018ca6) fep_vkb_top_pane_g2

0xc1bd,	// (0x00018cb5) fep_vkb_top_pane_g3_ParamLimits

0xc1bd,	// (0x00018cb5) fep_vkb_top_pane_g3

0x0003,

0xfb2e,	// (0x0001c626) fep_vkb_top_pane_g_ParamLimits

0xfb2e,	// (0x0001c626) fep_vkb_top_pane_g

0xc1db,	// (0x00018cd3) fep_vkb_top_text_pane_ParamLimits

0xc1db,	// (0x00018cd3) fep_vkb_top_text_pane

0xc1ec,	// (0x00018ce4) fep_vkb_side_pane_g1_ParamLimits

0xc1ec,	// (0x00018ce4) fep_vkb_side_pane_g1

0xc235,	// (0x00018d2d) grid_vkb_side_pane_ParamLimits

0xc235,	// (0x00018d2d) grid_vkb_side_pane

0x6bb9,	// (0x000136b1) bg_popup_fep_shadow_pane_g2

0x6bc2,	// (0x000136ba) bg_popup_fep_shadow_pane_g3

0x6bca,	// (0x000136c2) bg_popup_fep_shadow_pane_g4

0x6bd3,	// (0x000136cb) bg_popup_fep_shadow_pane_g5

0x6bdd,	// (0x000136d5) bg_popup_fep_shadow_pane_g6

0x6be5,	// (0x000136dd) bg_popup_fep_shadow_pane_g7

0x42d1,	// (0x00010dc9) bg_popup_fep_shadow_pane_g8

0xc28c,	// (0x00018d84) grid_vkb_keypad_number_pane_ParamLimits

0xc28c,	// (0x00018d84) grid_vkb_keypad_number_pane

0xc29c,	// (0x00018d94) grid_vkb_keypad_pane_ParamLimits

0xc29c,	// (0x00018d94) grid_vkb_keypad_pane

0xc2c2,	// (0x00018dba) fep_vkb_bottom_pane_g1_ParamLimits

0xc2c2,	// (0x00018dba) fep_vkb_bottom_pane_g1

0xc2eb,	// (0x00018de3) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc2eb,	// (0x00018de3) grid_vkb_keypad_bottom_left_pane

0xc300,	// (0x00018df8) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc300,	// (0x00018df8) grid_vkb_keypad_bottom_right_pane

0xc315,	// (0x00018e0d) fep_vkb_top_text_pane_g1

0xc330,	// (0x00018e28) fep_vkb_top_text_pane_t1

0xc345,	// (0x00018e3d) cell_vkb_side_pane_ParamLimits

0xc345,	// (0x00018e3d) cell_vkb_side_pane

0xbf5d,	// (0x00018a55) cell_vkb_side_pane_g1

0xc384,	// (0x00018e7c) cell_vkb_keypad_pane_ParamLimits

0xc384,	// (0x00018e7c) cell_vkb_keypad_pane

0xc3f9,	// (0x00018ef1) cell_vkb_keypad_pane_g1

0x0008,

0xfb5b,	// (0x0001c653) bg_popup_fep_shadow_pane_g

0x6bf7,	// (0x000136ef) cell_hwr_side_pane_g1

0x6bf7,	// (0x000136ef) cell_hwr_side_pane_g2

0xc403,	// (0x00018efb) cell_vkb_keypad_pane_t1

0xc411,	// (0x00018f09) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc411,	// (0x00018f09) cell_vkb_keypad_bottom_left_pane

0xc42e,	// (0x00018f26) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc42e,	// (0x00018f26) cell_vkb_keypad_bottom_right_pane

0xbf5d,	// (0x00018a55) cell_vkb_keypad_bottom_left_pane_g1

0xbf5d,	// (0x00018a55) cell_vkb_keypad_bottom_right_pane_g1

0xc467,	// (0x00018f5f) cell_vkb_keypad_number_pane_ParamLimits

0xc467,	// (0x00018f5f) cell_vkb_keypad_number_pane

0xc486,	// (0x00018f7e) cell_vkb_keypad_number_pane_g1

0xc490,	// (0x00018f88) cell_vkb_keypad_number_pane_g2

0xc499,	// (0x00018f91) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb4d,	// (0x0001c645) cell_vkb_keypad_number_pane_g

0xc403,	// (0x00018efb) cell_vkb_keypad_number_pane_t1

0xc4bd,	// (0x00018fb5) fep_vkb_candidate_pane_g1

0x0001,

0xfb6e,	// (0x0001c666) cell_hwr_side_pane_g

0xc4d6,	// (0x00018fce) cell_hwr_side_pane_t1

0x6c01,	// (0x000136f9) cell_hwr_side_pane_t1_copy1

0x6c0f,	// (0x00013707) cell_hwr_candidate_pane_g1

0x6c3e,	// (0x00013736) cell_hwr_candidate_pane_t1

0xbf5d,	// (0x00018a55) cell_vkb_candidate_pane_g2

0xc51a,	// (0x00019012) cell_vkb_candidate_pane_t1

0x69aa,	// (0x000134a2) bg_popup_fep_shadow_pane_ParamLimits

0x69aa,	// (0x000134a2) bg_popup_fep_shadow_pane

0x6a5f,	// (0x00013557) bg_fep_hwr_top_pane_g4

0xbfdd,	// (0x00018ad5) bg_hwr_side_pane_g1_ParamLimits

0xbfdd,	// (0x00018ad5) bg_hwr_side_pane_g1

0x6ad0,	// (0x000135c8) cell_hwr_side_pane_ParamLimits

0x6ad0,	// (0x000135c8) cell_hwr_side_pane

0x6b0b,	// (0x00013603) fep_hwr_write_pane_g1_ParamLimits

0x6b0b,	// (0x00013603) fep_hwr_write_pane_g1

0x6b18,	// (0x00013610) fep_hwr_write_pane_g2_ParamLimits

0x6b18,	// (0x00013610) fep_hwr_write_pane_g2

0x6b25,	// (0x0001361d) fep_hwr_write_pane_g3_ParamLimits

0x6b25,	// (0x0001361d) fep_hwr_write_pane_g3

0x6b33,	// (0x0001362b) fep_hwr_write_pane_g4_ParamLimits

0x6b33,	// (0x0001362b) fep_hwr_write_pane_g4

0x0005,

0xfb1a,	// (0x0001c612) fep_hwr_write_pane_g_ParamLimits

0xfb1a,	// (0x0001c612) fep_hwr_write_pane_g

0x6a5f,	// (0x00013557) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x6a5f,	// (0x00013557) bg_fep_hwr_candidate_pane_g2

0x6b48,	// (0x00013640) cell_hwr_candidate_pane_ParamLimits

0x6b48,	// (0x00013640) cell_hwr_candidate_pane

0x6b8a,	// (0x00013682) fep_hwr_candidate_pane_g1_ParamLimits

0xc03d,	// (0x00018b35) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc03d,	// (0x00018b35) bg_popup_fep_shadow_pane_cp2

0xc1cd,	// (0x00018cc5) fep_vkb_top_pane_g4_ParamLimits

0xc1cd,	// (0x00018cc5) fep_vkb_top_pane_g4

0xc213,	// (0x00018d0b) fep_vkb_side_pane_g2_ParamLimits

0xc213,	// (0x00018d0b) fep_vkb_side_pane_g2

0x8243,	// (0x00014d3b) list_setting_pane_t4_ParamLimits

0x8243,	// (0x00014d3b) list_setting_pane_t4

0x82bd,	// (0x00014db5) list_setting_number_pane_t5_ParamLimits

0x82bd,	// (0x00014db5) list_setting_number_pane_t5

0x86da,	// (0x000151d2) list_double_heading_pane_cp2_ParamLimits

0x86da,	// (0x000151d2) list_double_heading_pane_cp2

0xc528,	// (0x00019020) list_double_heading_pane_g1_cp2_ParamLimits

0xc528,	// (0x00019020) list_double_heading_pane_g1_cp2

0xc534,	// (0x0001902c) list_double_heading_pane_g2_cp2_ParamLimits

0xc534,	// (0x0001902c) list_double_heading_pane_g2_cp2

0xc548,	// (0x00019040) list_double_heading_pane_t1_cp2_ParamLimits

0xc548,	// (0x00019040) list_double_heading_pane_t1_cp2

0xc55e,	// (0x00019056) list_double_heading_pane_t2_cp2_ParamLimits

0xc55e,	// (0x00019056) list_double_heading_pane_t2_cp2

0x3bd2,	// (0x000106ca) aid_value_unit2

0x570e,	// (0x00012206) popup_preview_fixed_window

0x3f1d,	// (0x00010a15) bg_popup_preview_window_pane_cp02

0xc570,	// (0x00019068) list_preview_fixed_pane

0xc5b6,	// (0x000190ae) list_empty_pane_fp_ParamLimits

0xc5b6,	// (0x000190ae) list_empty_pane_fp

0xc5b6,	// (0x000190ae) list_single_cale_day_pane_fp_ParamLimits

0xc5b6,	// (0x000190ae) list_single_cale_day_pane_fp

0xc5b6,	// (0x000190ae) list_single_graphic_heading_pane_fp_ParamLimits

0xc5b6,	// (0x000190ae) list_single_graphic_heading_pane_fp

0xc5b6,	// (0x000190ae) list_single_graphic_pane_fp_ParamLimits

0xc5b6,	// (0x000190ae) list_single_graphic_pane_fp

0xc5b6,	// (0x000190ae) list_single_heading_pane_fp_ParamLimits

0xc5b6,	// (0x000190ae) list_single_heading_pane_fp

0xc5b6,	// (0x000190ae) list_single_pane_fp_ParamLimits

0xc5b6,	// (0x000190ae) list_single_pane_fp

0xc5cc,	// (0x000190c4) list_single_pane_fp_g1_ParamLimits

0xc5cc,	// (0x000190c4) list_single_pane_fp_g1

0xc5d8,	// (0x000190d0) list_single_pane_fp_g2_ParamLimits

0xc5d8,	// (0x000190d0) list_single_pane_fp_g2

0xc5e4,	// (0x000190dc) list_single_pane_fp_g3_ParamLimits

0xc5e4,	// (0x000190dc) list_single_pane_fp_g3

0xc5f8,	// (0x000190f0) list_single_pane_fp_g4_ParamLimits

0xc5f8,	// (0x000190f0) list_single_pane_fp_g4

0x0003,

0xfb81,	// (0x0001c679) list_single_pane_fp_g_ParamLimits

0xfb81,	// (0x0001c679) list_single_pane_fp_g

0xc604,	// (0x000190fc) list_single_pane_fp_t1_ParamLimits

0xc604,	// (0x000190fc) list_single_pane_fp_t1

0xc61b,	// (0x00019113) list_single_graphic_pane_fp_g1_ParamLimits

0xc61b,	// (0x00019113) list_single_graphic_pane_fp_g1

0xc5cc,	// (0x000190c4) list_single_graphic_pane_fp_g2_ParamLimits

0xc5cc,	// (0x000190c4) list_single_graphic_pane_fp_g2

0xc5d8,	// (0x000190d0) list_single_graphic_pane_fp_g3_ParamLimits

0xc5d8,	// (0x000190d0) list_single_graphic_pane_fp_g3

0xc5e4,	// (0x000190dc) list_single_graphic_pane_fp_g4_ParamLimits

0xc5e4,	// (0x000190dc) list_single_graphic_pane_fp_g4

0xc5f8,	// (0x000190f0) list_single_graphic_pane_fp_g5_ParamLimits

0xc5f8,	// (0x000190f0) list_single_graphic_pane_fp_g5

0x0004,

0xfb8a,	// (0x0001c682) list_single_graphic_pane_fp_g_ParamLimits

0xfb8a,	// (0x0001c682) list_single_graphic_pane_fp_g

0xc627,	// (0x0001911f) list_single_graphic_pane_fp_t1_ParamLimits

0xc627,	// (0x0001911f) list_single_graphic_pane_fp_t1

0xc61b,	// (0x00019113) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xc61b,	// (0x00019113) list_single_graphic_heading_pane_fp_g1

0xc5cc,	// (0x000190c4) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc5cc,	// (0x000190c4) list_single_graphic_heading_pane_fp_g2

0xc5d8,	// (0x000190d0) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xc5d8,	// (0x000190d0) list_single_graphic_heading_pane_fp_g3

0xc5e4,	// (0x000190dc) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xc5e4,	// (0x000190dc) list_single_graphic_heading_pane_fp_g4

0xc5f8,	// (0x000190f0) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc5f8,	// (0x000190f0) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb8a,	// (0x0001c682) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb8a,	// (0x0001c682) list_single_graphic_heading_pane_fp_g

0xc63d,	// (0x00019135) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xc63d,	// (0x00019135) list_single_graphic_heading_pane_fp_t1

0xc653,	// (0x0001914b) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xc653,	// (0x0001914b) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb95,	// (0x0001c68d) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb95,	// (0x0001c68d) list_single_graphic_heading_pane_fp_t

0xc665,	// (0x0001915d) list_single_cale_day_pane_fp_g1_ParamLimits

0xc665,	// (0x0001915d) list_single_cale_day_pane_fp_g1

0xc69d,	// (0x00019195) list_single_cale_day_pane_fp_g2_ParamLimits

0xc69d,	// (0x00019195) list_single_cale_day_pane_fp_g2

0xc6a9,	// (0x000191a1) list_single_cale_day_pane_fp_g3_ParamLimits

0xc6a9,	// (0x000191a1) list_single_cale_day_pane_fp_g3

0xc6d1,	// (0x000191c9) list_single_cale_day_pane_fp_g4_ParamLimits

0xc6d1,	// (0x000191c9) list_single_cale_day_pane_fp_g4

0xc6f5,	// (0x000191ed) list_single_cale_day_pane_fp_g5_ParamLimits

0xc6f5,	// (0x000191ed) list_single_cale_day_pane_fp_g5

0x0004,

0xfb9a,	// (0x0001c692) list_single_cale_day_pane_fp_g_ParamLimits

0xfb9a,	// (0x0001c692) list_single_cale_day_pane_fp_g

0xc719,	// (0x00019211) list_single_cale_day_pane_fp_t1_ParamLimits

0xc719,	// (0x00019211) list_single_cale_day_pane_fp_t1

0xc73f,	// (0x00019237) list_single_cale_day_pane_fp_t2_ParamLimits

0xc73f,	// (0x00019237) list_single_cale_day_pane_fp_t2

0xc758,	// (0x00019250) list_single_cale_day_pane_fp_t3_ParamLimits

0xc758,	// (0x00019250) list_single_cale_day_pane_fp_t3

0x0002,

0xfba5,	// (0x0001c69d) list_single_cale_day_pane_fp_t_ParamLimits

0xfba5,	// (0x0001c69d) list_single_cale_day_pane_fp_t

0xc5cc,	// (0x000190c4) list_empty_pane_fp_g1_ParamLimits

0xc5cc,	// (0x000190c4) list_empty_pane_fp_g1

0xc771,	// (0x00019269) list_empty_pane_fp_t1

0xc77f,	// (0x00019277) list_empty_pane_fp_t2

0x0001,

0xfbac,	// (0x0001c6a4) list_empty_pane_fp_t

0xc5cc,	// (0x000190c4) list_single_heading_pane_fp_g1_ParamLimits

0xc5cc,	// (0x000190c4) list_single_heading_pane_fp_g1

0xc5d8,	// (0x000190d0) list_single_heading_pane_fp_g2_ParamLimits

0xc5d8,	// (0x000190d0) list_single_heading_pane_fp_g2

0xc5e4,	// (0x000190dc) list_single_heading_pane_fp_g3_ParamLimits

0xc5e4,	// (0x000190dc) list_single_heading_pane_fp_g3

0x0002,

0xfbb1,	// (0x0001c6a9) list_single_heading_pane_fp_g_ParamLimits

0xfbb1,	// (0x0001c6a9) list_single_heading_pane_fp_g

0xc78d,	// (0x00019285) list_single_heading_pane_fp_t1_ParamLimits

0xc78d,	// (0x00019285) list_single_heading_pane_fp_t1

0xc79f,	// (0x00019297) list_single_heading_pane_fp_t2_ParamLimits

0xc79f,	// (0x00019297) list_single_heading_pane_fp_t2

0x0001,

0xfbb8,	// (0x0001c6b0) list_single_heading_pane_fp_t_ParamLimits

0xfbb8,	// (0x0001c6b0) list_single_heading_pane_fp_t

0x858d,	// (0x00015085) aid_size_cell_fast

0x3f00,	// (0x000109f8) soft_indicator_pane_cp1_t1

0x8596,	// (0x0001508e) cell_app_pane_cp2_ParamLimits

0x8596,	// (0x0001508e) cell_app_pane_cp2

0x69cc,	// (0x000134c4) fep_hwr_candidate_drop_down_list_pane

0x6ba4,	// (0x0001369c) fep_hwr_candidate_pane_g3_ParamLimits

0x6ba4,	// (0x0001369c) fep_hwr_candidate_pane_g3

0x31e2,	// (0x0000fcda) fep_hwr_candidate_pane_g4_ParamLimits

0x31e2,	// (0x0000fcda) fep_hwr_candidate_pane_g4

0x0002,

0xfb27,	// (0x0001c61f) fep_hwr_candidate_pane_g_ParamLimits

0xfb27,	// (0x0001c61f) fep_hwr_candidate_pane_g

0xc0c2,	// (0x00018bba) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc0c2,	// (0x00018bba) fep_vkb_candidate_drop_down_list_pane

0xc4c5,	// (0x00018fbd) fep_vkb_candidate_pane_g3

0xc4cd,	// (0x00018fc5) fep_vkb_candidate_pane_g4

0x0002,

0xfb54,	// (0x0001c64c) fep_vkb_candidate_pane_g

0x6c0f,	// (0x00013707) cell_hwr_candidate_pane_g1_ParamLimits

0x6c1d,	// (0x00013715) cell_hwr_candidate_pane_g3_ParamLimits

0x6c1d,	// (0x00013715) cell_hwr_candidate_pane_g3

0xd5c1,	// (0x0001a0b9) cell_hwr_candidate_pane_g4_ParamLimits

0xd5c1,	// (0x0001a0b9) cell_hwr_candidate_pane_g4

0x0002,

0xfb73,	// (0x0001c66b) cell_hwr_candidate_pane_g_ParamLimits

0xfb73,	// (0x0001c66b) cell_hwr_candidate_pane_g

0xc4e4,	// (0x00018fdc) cell_vkb_candidate_pane_g3_ParamLimits

0xc4e4,	// (0x00018fdc) cell_vkb_candidate_pane_g3

0xc4ff,	// (0x00018ff7) cell_vkb_candidate_pane_g4_ParamLimits

0xc4ff,	// (0x00018ff7) cell_vkb_candidate_pane_g4

0xc7b5,	// (0x000192ad) cell_app_pane_cp2_g1_ParamLimits

0xc7b5,	// (0x000192ad) cell_app_pane_cp2_g1

0xc7d3,	// (0x000192cb) cell_app_pane_cp2_g2_ParamLimits

0xc7d3,	// (0x000192cb) cell_app_pane_cp2_g2

0x0001,

0xfbbd,	// (0x0001c6b5) cell_app_pane_cp2_g_ParamLimits

0xfbbd,	// (0x0001c6b5) cell_app_pane_cp2_g

0xc7df,	// (0x000192d7) cell_app_pane_cp2_t1_ParamLimits

0xc7df,	// (0x000192d7) cell_app_pane_cp2_t1

0x4227,	// (0x00010d1f) grid_highlight_pane_cp1_ParamLimits

0x4227,	// (0x00010d1f) grid_highlight_pane_cp1

0x6c5c,	// (0x00013754) cell_hwr_candidate_pane_cp1_ParamLimits

0x6c5c,	// (0x00013754) cell_hwr_candidate_pane_cp1

0x6c0f,	// (0x00013707) fep_hwr_candidate_drop_down_list_pane_g1

0x6c7b,	// (0x00013773) fep_hwr_candidate_drop_down_list_pane_g2

0x6c88,	// (0x00013780) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbc2,	// (0x0001c6ba) fep_hwr_candidate_drop_down_list_pane_g

0x6c95,	// (0x0001378d) fep_hwr_candidate_drop_down_list_scroll_pane

0x6c9e,	// (0x00013796) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x6c9e,	// (0x00013796) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x6cab,	// (0x000137a3) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x6cab,	// (0x000137a3) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x6cb8,	// (0x000137b0) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x6cb8,	// (0x000137b0) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x6cc5,	// (0x000137bd) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6cc5,	// (0x000137bd) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x6ce0,	// (0x000137d8) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6ce0,	// (0x000137d8) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x6cfb,	// (0x000137f3) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x6cfb,	// (0x000137f3) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x6d16,	// (0x0001380e) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x6d16,	// (0x0001380e) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x6d31,	// (0x00013829) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x6d31,	// (0x00013829) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc9,	// (0x0001c6c1) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc9,	// (0x0001c6c1) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc7f1,	// (0x000192e9) cell_vkb_candidate_pane_cp1_ParamLimits

0xc7f1,	// (0x000192e9) cell_vkb_candidate_pane_cp1

0xc1cd,	// (0x00018cc5) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc1cd,	// (0x00018cc5) fep_vkb_candidate_drop_down_list_pane_g1

0xc811,	// (0x00019309) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc811,	// (0x00019309) fep_vkb_candidate_drop_down_list_pane_g2

0xc81e,	// (0x00019316) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc81e,	// (0x00019316) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbda,	// (0x0001c6d2) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbda,	// (0x0001c6d2) fep_vkb_candidate_drop_down_list_pane_g

0xc82b,	// (0x00019323) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc82b,	// (0x00019323) fep_vkb_candidate_drop_down_list_scroll_pane

0xc838,	// (0x00019330) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc838,	// (0x00019330) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc845,	// (0x0001933d) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc845,	// (0x0001933d) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc851,	// (0x00019349) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc851,	// (0x00019349) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc85d,	// (0x00019355) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc85d,	// (0x00019355) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc87e,	// (0x00019376) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc87e,	// (0x00019376) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc89f,	// (0x00019397) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc89f,	// (0x00019397) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc8c0,	// (0x000193b8) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc8c0,	// (0x000193b8) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc8e1,	// (0x000193d9) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc8e1,	// (0x000193d9) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbe1,	// (0x0001c6d9) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbe1,	// (0x0001c6d9) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x7993,	// (0x0001448b) title_pane_g1_ParamLimits

0x79a0,	// (0x00014498) title_pane_g2_ParamLimits

0xf54e,	// (0x0001c046) title_pane_g_ParamLimits

0x4853,	// (0x0001134b) aid_call2_pane

0x484b,	// (0x00011343) aid_call_pane

0x485b,	// (0x00011353) popup_clock_analogue_window_g1

0x485b,	// (0x00011353) popup_clock_analogue_window_g2

0x5a7f,	// (0x00012577) popup_clock_analogue_window_g3

0x5a88,	// (0x00012580) popup_clock_analogue_window_g4

0x3be4,	// (0x000106dc) popup_clock_analogue_window_g5

0x0004,

0xf6f3,	// (0x0001c1eb) popup_clock_analogue_window_g

0x5a90,	// (0x00012588) popup_clock_analogue_window_t1

0x5a9e,	// (0x00012596) clock_digital_number_pane_ParamLimits

0x5a9e,	// (0x00012596) clock_digital_number_pane

0x5aaa,	// (0x000125a2) clock_digital_number_pane_cp02_ParamLimits

0x5aaa,	// (0x000125a2) clock_digital_number_pane_cp02

0x5ab6,	// (0x000125ae) clock_digital_number_pane_cp03_ParamLimits

0x5ab6,	// (0x000125ae) clock_digital_number_pane_cp03

0x5ac2,	// (0x000125ba) clock_digital_number_pane_cp04_ParamLimits

0x5ac2,	// (0x000125ba) clock_digital_number_pane_cp04

0x5ace,	// (0x000125c6) clock_digital_separator_pane_ParamLimits

0x5ace,	// (0x000125c6) clock_digital_separator_pane

0x5ada,	// (0x000125d2) popup_clock_digital_window_t1_ParamLimits

0x5ada,	// (0x000125d2) popup_clock_digital_window_t1

0x3be4,	// (0x000106dc) clock_digital_number_pane_g1

0x3be4,	// (0x000106dc) clock_digital_number_pane_g2

0x0001,

0xf6fe,	// (0x0001c1f6) clock_digital_number_pane_g

0x3be4,	// (0x000106dc) clock_digital_separator_pane_g1

0x3be4,	// (0x000106dc) clock_digital_separator_pane_g2

0x0001,

0xf6fe,	// (0x0001c1f6) clock_digital_separator_pane_g

0x8f2f,	// (0x00015a27) aid_fill_nsta_ParamLimits

0x907b,	// (0x00015b73) indicator_nsta_pane_ParamLimits

0x91f4,	// (0x00015cec) popup_clock_analogue_window

0x91f4,	// (0x00015cec) popup_clock_digital_window

0x3dd9,	// (0x000108d1) grid_indicator_nsta_pane_ParamLimits

0xb904,	// (0x000183fc) clock_nsta_pane_t2

0x0001,

0xfaa7,	// (0x0001c59f) clock_nsta_pane_t

0x5a43,	// (0x0001253b) aid_size_max_handle

0x5a4d,	// (0x00012545) aid_size_min_handle

0x8bc3,	// (0x000156bb) editor_scroll_pane

0xc8fc,	// (0x000193f4) ex_editor_pane

0x4380,	// (0x00010e78) scroll_pane_cp13

0x414d,	// (0x00010c45) scroll_pane_cp14

0x48a9,	// (0x000113a1) scroll_pane_cp36

0x86ee,	// (0x000151e6) list_single_graphic_hl_pane_cp2_ParamLimits

0x86ee,	// (0x000151e6) list_single_graphic_hl_pane_cp2

0xaba7,	// (0x0001769f) list_single_graphic_hl_pane_ParamLimits

0xaba7,	// (0x0001769f) list_single_graphic_hl_pane

0xc904,	// (0x000193fc) aid_size_min_hl_cp1

0xc90d,	// (0x00019405) list_highlight_pane_cp34_ParamLimits

0xc90d,	// (0x00019405) list_highlight_pane_cp34

0xc91e,	// (0x00019416) list_single_graphic_hl_pane_g1_ParamLimits

0xc91e,	// (0x00019416) list_single_graphic_hl_pane_g1

0xc92b,	// (0x00019423) list_single_graphic_hl_pane_g2_ParamLimits

0xc92b,	// (0x00019423) list_single_graphic_hl_pane_g2

0xc92b,	// (0x00019423) list_single_graphic_hl_pane_g3_ParamLimits

0xc92b,	// (0x00019423) list_single_graphic_hl_pane_g3

0xc937,	// (0x0001942f) list_single_graphic_hl_pane_g4_ParamLimits

0xc937,	// (0x0001942f) list_single_graphic_hl_pane_g4

0xc943,	// (0x0001943b) list_single_graphic_hl_pane_g5_ParamLimits

0xc943,	// (0x0001943b) list_single_graphic_hl_pane_g5

0x0004,

0xfbf2,	// (0x0001c6ea) list_single_graphic_hl_pane_g_ParamLimits

0xfbf2,	// (0x0001c6ea) list_single_graphic_hl_pane_g

0xc957,	// (0x0001944f) list_single_graphic_hl_pane_t1_ParamLimits

0xc957,	// (0x0001944f) list_single_graphic_hl_pane_t1

0xc96d,	// (0x00019465) aid_size_min_hl_cp2

0xc976,	// (0x0001946e) list_highlight_pane_cp34_cp2_ParamLimits

0xc976,	// (0x0001946e) list_highlight_pane_cp34_cp2

0xc91e,	// (0x00019416) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc91e,	// (0x00019416) list_single_graphic_hl_pane_g1_cp2

0xc983,	// (0x0001947b) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc983,	// (0x0001947b) list_single_graphic_hl_pane_g2_cp2

0xc98f,	// (0x00019487) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc98f,	// (0x00019487) list_single_graphic_hl_pane_g3_cp2

0x8afc,	// (0x000155f4) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x8afc,	// (0x000155f4) list_single_graphic_hl_pane_g4_cp2

0xc99d,	// (0x00019495) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc99d,	// (0x00019495) list_single_graphic_hl_pane_g5_cp2

0x5d85,	// (0x0001287d) control_pane_g4_ParamLimits

0x5d85,	// (0x0001287d) control_pane_g4

0x8f05,	// (0x000159fd) bg_popup_sub_pane_cp10_ParamLimits

0xbf67,	// (0x00018a5f) list_choice_list_pane_ParamLimits

0xbf76,	// (0x00018a6e) scroll_pane_cp23

0x3f1d,	// (0x00010a15) bg_popup_preview_window_pane_cp02_ParamLimits

0xc570,	// (0x00019068) list_preview_fixed_pane_ParamLimits

0xc586,	// (0x0001907e) list_preview_fixed_pane_cp_ParamLimits

0xc586,	// (0x0001907e) list_preview_fixed_pane_cp

0xc592,	// (0x0001908a) popup_preview_fixed_window_g1_ParamLimits

0xc592,	// (0x0001908a) popup_preview_fixed_window_g1

0xc59e,	// (0x00019096) popup_preview_fixed_window_g2_ParamLimits

0xc59e,	// (0x00019096) popup_preview_fixed_window_g2

0x0002,

0xfb7a,	// (0x0001c672) popup_preview_fixed_window_g_ParamLimits

0xfb7a,	// (0x0001c672) popup_preview_fixed_window_g

0x59b7,	// (0x000124af) aid_navi_side_left_pane_ParamLimits

0x59cc,	// (0x000124c4) aid_navi_side_right_pane_ParamLimits

0x59e4,	// (0x000124dc) navi_icon_pane_stacon_ParamLimits

0x59f8,	// (0x000124f0) navi_navi_pane_stacon_ParamLimits

0x59e4,	// (0x000124dc) navi_text_pane_stacon_ParamLimits

0x55dd,	// (0x000120d5) main_text_info_pane

0xc9c7,	// (0x000194bf) listscroll_text_info_pane

0xc9cf,	// (0x000194c7) list_text_info_pane_ParamLimits

0xc9cf,	// (0x000194c7) list_text_info_pane

0xc9de,	// (0x000194d6) scroll_pane_cp24_ParamLimits

0xc9de,	// (0x000194d6) scroll_pane_cp24

0xc9fc,	// (0x000194f4) list_text_info_pane_t1_ParamLimits

0xc9fc,	// (0x000194f4) list_text_info_pane_t1

0x5ef7,	// (0x000129ef) popup_fast_swap2_window_ParamLimits

0x5ef7,	// (0x000129ef) popup_fast_swap2_window

0xca30,	// (0x00019528) aid_size_cell_fast2

0x3bda,	// (0x000106d2) bg_popup_window_pane_cp17

0x9994,	// (0x0001648c) heading_pane_cp2

0x4051,	// (0x00010b49) listscroll_fast2_pane

0xca3a,	// (0x00019532) grid_fast2_pane

0xca44,	// (0x0001953c) listscroll_fast2_pane_g1

0xca4c,	// (0x00019544) listscroll_fast2_pane_g2

0x0001,

0xfbfd,	// (0x0001c6f5) listscroll_fast2_pane_g

0x4380,	// (0x00010e78) scroll_pane_cp26

0xca56,	// (0x0001954e) cell_fast2_pane_ParamLimits

0xca56,	// (0x0001954e) cell_fast2_pane

0xca6b,	// (0x00019563) cell_fast2_pane_g1

0xca74,	// (0x0001956c) cell_fast2_pane_g2

0xca7d,	// (0x00019575) cell_fast2_pane_g3

0x0002,

0xfc02,	// (0x0001c6fa) cell_fast2_pane_g

0x4084,	// (0x00010b7c) grid_highlight_pane_cp9

0x5ebf,	// (0x000129b7) main_eswt_pane_ParamLimits

0x5ebf,	// (0x000129b7) main_eswt_pane

0xc9f3,	// (0x000194eb) list_single_text_info_pane

0xca85,	// (0x0001957d) eswt_ctrl_button_pane

0xca85,	// (0x0001957d) eswt_ctrl_canvas_pane

0xca8d,	// (0x00019585) eswt_ctrl_combo_pane

0xca85,	// (0x0001957d) eswt_ctrl_default_pane

0xca85,	// (0x0001957d) eswt_ctrl_label_pane

0xca95,	// (0x0001958d) eswt_ctrl_wait_pane

0xca9d,	// (0x00019595) eswt_shell_pane

0x3bda,	// (0x000106d2) listscroll_eswt_app_pane

0xcabd,	// (0x000195b5) popup_eswt_tasktip_window_ParamLimits

0xcabd,	// (0x000195b5) popup_eswt_tasktip_window

0x9568,	// (0x00016060) bg_popup_window_pane_cp18

0xcace,	// (0x000195c6) eswt_control_pane_g1_ParamLimits

0xcace,	// (0x000195c6) eswt_control_pane_g1

0xcadb,	// (0x000195d3) eswt_control_pane_g2_ParamLimits

0xcadb,	// (0x000195d3) eswt_control_pane_g2

0xcae8,	// (0x000195e0) eswt_control_pane_g3_ParamLimits

0xcae8,	// (0x000195e0) eswt_control_pane_g3

0xcaf5,	// (0x000195ed) eswt_control_pane_g4_ParamLimits

0xcaf5,	// (0x000195ed) eswt_control_pane_g4

0x0003,

0xfc09,	// (0x0001c701) eswt_control_pane_g_ParamLimits

0xfc09,	// (0x0001c701) eswt_control_pane_g

0x4227,	// (0x00010d1f) bg_button_pane_ParamLimits

0x4227,	// (0x00010d1f) bg_button_pane

0x4099,	// (0x00010b91) common_borders_pane_copy2_ParamLimits

0x4099,	// (0x00010b91) common_borders_pane_copy2

0xcb02,	// (0x000195fa) control_button_pane_g1_ParamLimits

0xcb02,	// (0x000195fa) control_button_pane_g1

0xcb0e,	// (0x00019606) control_button_pane_g2_ParamLimits

0xcb0e,	// (0x00019606) control_button_pane_g2

0xcb1a,	// (0x00019612) control_button_pane_g3_ParamLimits

0xcb1a,	// (0x00019612) control_button_pane_g3

0x0002,

0xfc12,	// (0x0001c70a) control_button_pane_g_ParamLimits

0xfc12,	// (0x0001c70a) control_button_pane_g

0xcb2e,	// (0x00019626) control_button_pane_t1

0xcb3c,	// (0x00019634) control_button_pane_t2

0x0001,

0xfc19,	// (0x0001c711) control_button_pane_t

0x943c,	// (0x00015f34) bg_button_pane_g1

0x944c,	// (0x00015f44) bg_button_pane_g2

0x9444,	// (0x00015f3c) bg_button_pane_g3

0x945c,	// (0x00015f54) bg_button_pane_g4

0x9454,	// (0x00015f4c) bg_button_pane_g5

0x9464,	// (0x00015f5c) bg_button_pane_g6

0x946c,	// (0x00015f64) bg_button_pane_g7

0x947c,	// (0x00015f74) bg_button_pane_g8

0x9474,	// (0x00015f6c) bg_button_pane_g9

0x0008,

0xf861,	// (0x0001c359) bg_button_pane_g

0xbf22,	// (0x00018a1a) common_borders_pane_ParamLimits

0xbf22,	// (0x00018a1a) common_borders_pane

0xcace,	// (0x000195c6) eswt_control_pane_g1_copy1_ParamLimits

0xcace,	// (0x000195c6) eswt_control_pane_g1_copy1

0xcadb,	// (0x000195d3) eswt_control_pane_g2_copy1_ParamLimits

0xcadb,	// (0x000195d3) eswt_control_pane_g2_copy1

0xcae8,	// (0x000195e0) eswt_control_pane_g3_copy1_ParamLimits

0xcae8,	// (0x000195e0) eswt_control_pane_g3_copy1

0xcaf5,	// (0x000195ed) eswt_control_pane_g4_copy1_ParamLimits

0xcaf5,	// (0x000195ed) eswt_control_pane_g4_copy1

0xbf5d,	// (0x00018a55) bg_eswt_ctrl_canvas_pane_g1

0xbf22,	// (0x00018a1a) common_borders_pane_cp2_ParamLimits

0xbf22,	// (0x00018a1a) common_borders_pane_cp2

0xbf22,	// (0x00018a1a) common_borders_pane_cp3_ParamLimits

0xbf22,	// (0x00018a1a) common_borders_pane_cp3

0xcb4a,	// (0x00019642) separator_horizontal_pane

0xcb52,	// (0x0001964a) separator_vertical_pane

0xcace,	// (0x000195c6) eswt_control_pane_g1_copy2_ParamLimits

0xcace,	// (0x000195c6) eswt_control_pane_g1_copy2

0xcadb,	// (0x000195d3) eswt_control_pane_g2_copy2_ParamLimits

0xcadb,	// (0x000195d3) eswt_control_pane_g2_copy2

0xcae8,	// (0x000195e0) eswt_control_pane_g3_copy2_ParamLimits

0xcae8,	// (0x000195e0) eswt_control_pane_g3_copy2

0xcaf5,	// (0x000195ed) eswt_control_pane_g4_copy2_ParamLimits

0xcaf5,	// (0x000195ed) eswt_control_pane_g4_copy2

0x3bda,	// (0x000106d2) common_borders_pane_cp4

0xcb5b,	// (0x00019653) separator_horizontal_pane_g1

0xcb64,	// (0x0001965c) separator_horizontal_pane_g2

0xcb6d,	// (0x00019665) separator_horizontal_pane_g3

0x0002,

0xfc1e,	// (0x0001c716) separator_horizontal_pane_g

0xcace,	// (0x000195c6) eswt_control_pane_g1_copy3_ParamLimits

0xcace,	// (0x000195c6) eswt_control_pane_g1_copy3

0xcadb,	// (0x000195d3) eswt_control_pane_g2_copy3_ParamLimits

0xcadb,	// (0x000195d3) eswt_control_pane_g2_copy3

0xcae8,	// (0x000195e0) eswt_control_pane_g3_copy3_ParamLimits

0xcae8,	// (0x000195e0) eswt_control_pane_g3_copy3

0xcaf5,	// (0x000195ed) eswt_control_pane_g4_copy3_ParamLimits

0xcaf5,	// (0x000195ed) eswt_control_pane_g4_copy3

0x3bda,	// (0x000106d2) common_borders_pane_cp5

0xcb76,	// (0x0001966e) separator_vertical_pane_g1

0xcb7f,	// (0x00019677) separator_vertical_pane_g2

0xcb88,	// (0x00019680) separator_vertical_pane_g3

0x0002,

0xfc25,	// (0x0001c71d) separator_vertical_pane_g

0xcace,	// (0x000195c6) eswt_control_pane_g1_copy4_ParamLimits

0xcace,	// (0x000195c6) eswt_control_pane_g1_copy4

0xcadb,	// (0x000195d3) eswt_control_pane_g2_copy4_ParamLimits

0xcadb,	// (0x000195d3) eswt_control_pane_g2_copy4

0xcae8,	// (0x000195e0) eswt_control_pane_g3_copy4_ParamLimits

0xcae8,	// (0x000195e0) eswt_control_pane_g3_copy4

0xcaf5,	// (0x000195ed) eswt_control_pane_g4_copy4_ParamLimits

0xcaf5,	// (0x000195ed) eswt_control_pane_g4_copy4

0xcb91,	// (0x00019689) eswt_ctrl_combo_button_pane

0xcb99,	// (0x00019691) eswt_ctrl_input_pane

0xcba1,	// (0x00019699) popup_choice_list_window_cp70

0xcba9,	// (0x000196a1) eswt_ctrl_input_pane_t1

0x3bda,	// (0x000106d2) input_focus_pane_cp70

0xbf22,	// (0x00018a1a) bg_button_pane_cp70_ParamLimits

0xbf22,	// (0x00018a1a) bg_button_pane_cp70

0xcbb7,	// (0x000196af) eswt_ctrl_combo_button_pane_g1

0xcbbf,	// (0x000196b7) wait_bar_pane_cp70

0x9568,	// (0x00016060) bg_popup_window_pane_cp70_ParamLimits

0x9568,	// (0x00016060) bg_popup_window_pane_cp70

0xcbc7,	// (0x000196bf) popup_eswt_tasktip_window_t1

0xcbdd,	// (0x000196d5) wait_bar_pane_cp71_ParamLimits

0xcbdd,	// (0x000196d5) wait_bar_pane_cp71

0xcbe9,	// (0x000196e1) grid_eswt_app_pane

0x472f,	// (0x00011227) scroll_pane_cp70

0xcbf2,	// (0x000196ea) cell_eswt_app_pane_ParamLimits

0xcbf2,	// (0x000196ea) cell_eswt_app_pane

0xcc22,	// (0x0001971a) cell_eswt_app_pane_g1_ParamLimits

0xcc22,	// (0x0001971a) cell_eswt_app_pane_g1

0xcc51,	// (0x00019749) cell_eswt_app_pane_g2_ParamLimits

0xcc51,	// (0x00019749) cell_eswt_app_pane_g2

0x0001,

0xfc2c,	// (0x0001c724) cell_eswt_app_pane_g_ParamLimits

0xfc2c,	// (0x0001c724) cell_eswt_app_pane_g

0xcc75,	// (0x0001976d) cell_eswt_app_pane_t1_ParamLimits

0xcc75,	// (0x0001976d) cell_eswt_app_pane_t1

0xcca7,	// (0x0001979f) grid_highlight_pane_cp70_ParamLimits

0xcca7,	// (0x0001979f) grid_highlight_pane_cp70

0x8a98,	// (0x00015590) set_content_pane_g1

0x8e5e,	// (0x00015956) status_small_volume_pane

0x6d4c,	// (0x00013844) status_small_volume_pane_g1

0x6d54,	// (0x0001384c) volume_small2_pane

0x6d5d,	// (0x00013855) volume_small2_pane_g1

0x6d66,	// (0x0001385e) volume_small2_pane_g2

0x6d6f,	// (0x00013867) volume_small2_pane_g3

0x6d78,	// (0x00013870) volume_small2_pane_g4

0x6d81,	// (0x00013879) volume_small2_pane_g5

0x6d8a,	// (0x00013882) volume_small2_pane_g6

0x6d93,	// (0x0001388b) volume_small2_pane_g7

0x6d9c,	// (0x00013894) volume_small2_pane_g8

0x6da5,	// (0x0001389d) volume_small2_pane_g9

0x6dae,	// (0x000138a6) volume_small2_pane_g10

0x0009,

0xfc31,	// (0x0001c729) volume_small2_pane_g

0xc315,	// (0x00018e0d) fep_vkb_top_text_pane_g1_ParamLimits

0xc330,	// (0x00018e28) fep_vkb_top_text_pane_t1_ParamLimits

0xc5aa,	// (0x000190a2) popup_preview_fixed_window_g3_ParamLimits

0xc5aa,	// (0x000190a2) popup_preview_fixed_window_g3

0x63a6,	// (0x00012e9e) popup_toolbar_trans_pane

0xa900,	// (0x000173f8) aid_height_set_list_ParamLimits

0xa911,	// (0x00017409) aid_size_parent_ParamLimits

0x8f05,	// (0x000159fd) list_highlight_pane_cp2_ParamLimits

0x8a98,	// (0x00015590) set_content_pane_g1_ParamLimits

0xabc6,	// (0x000176be) list_single_image_pane_ParamLimits

0xabc6,	// (0x000176be) list_single_image_pane

0xccb3,	// (0x000197ab) aid_size_cell_image_ParamLimits

0xccb3,	// (0x000197ab) aid_size_cell_image

0xccc0,	// (0x000197b8) grid_single_image_pane_ParamLimits

0xccc0,	// (0x000197b8) grid_single_image_pane

0xc5d8,	// (0x000190d0) list_single_image_pane_g1_ParamLimits

0xc5d8,	// (0x000190d0) list_single_image_pane_g1

0xc5e4,	// (0x000190dc) list_single_image_pane_g2_ParamLimits

0xc5e4,	// (0x000190dc) list_single_image_pane_g2

0x0001,

0xfc46,	// (0x0001c73e) list_single_image_pane_g_ParamLimits

0xfc46,	// (0x0001c73e) list_single_image_pane_g

0xccce,	// (0x000197c6) list_single_image_pane_t1_ParamLimits

0xccce,	// (0x000197c6) list_single_image_pane_t1

0xcce4,	// (0x000197dc) cell_image_list_pane_ParamLimits

0xcce4,	// (0x000197dc) cell_image_list_pane

0xccf8,	// (0x000197f0) cell_image_list_pane_g1

0xcd01,	// (0x000197f9) cell_image_list_pane_g2

0x0001,

0xfc4b,	// (0x0001c743) cell_image_list_pane_g

0xcd0a,	// (0x00019802) aid_size_cell_tb_trans_pane

0x4227,	// (0x00010d1f) bg_tb_trans_pane

0xcd1c,	// (0x00019814) grid_tb_trans_pane

0x943c,	// (0x00015f34) bg_tb_trans_pane_g1

0x944c,	// (0x00015f44) bg_tb_trans_pane_g2

0x9444,	// (0x00015f3c) bg_tb_trans_pane_g3

0x945c,	// (0x00015f54) bg_tb_trans_pane_g4

0x9454,	// (0x00015f4c) bg_tb_trans_pane_g5

0x947c,	// (0x00015f74) bg_tb_trans_pane_g6

0x9474,	// (0x00015f6c) bg_tb_trans_pane_g7

0x9464,	// (0x00015f5c) bg_tb_trans_pane_g8

0x946c,	// (0x00015f64) bg_tb_trans_pane_g9

0x0008,

0xfc50,	// (0x0001c748) bg_tb_trans_pane_g

0xcd30,	// (0x00019828) cell_toolbar_trans_pane_ParamLimits

0xcd30,	// (0x00019828) cell_toolbar_trans_pane

0xbf5d,	// (0x00018a55) cell_toolbar_trans_pane_g1

0xbad5,	// (0x000185cd) list_form2_midp_pane_t1

0xbae3,	// (0x000185db) list_form2_midp_pane_t2

0x0001,

0xfaed,	// (0x0001c5e5) list_form2_midp_pane_t

0xbaf1,	// (0x000185e9) scroll_pane_cp51_ParamLimits

0xbcfa,	// (0x000187f2) form2_midp_wait_pane_g1

0xbd03,	// (0x000187fb) form2_midp_wait_pane_g2

0xbd0c,	// (0x00018804) form2_midp_wait_pane_g3

0x0002,

0xfb02,	// (0x0001c5fa) form2_midp_wait_pane_g

0x3dd9,	// (0x000108d1) list_highlight_pane_cp21_ParamLimits

0xbd54,	// (0x0001884c) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xbd63,	// (0x0001885b) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xab48,	// (0x00017640) list_single_2graphic_im_pane_ParamLimits

0xab48,	// (0x00017640) list_single_2graphic_im_pane

0xcd56,	// (0x0001984e) list_single_2graphic_im_pane_g1_ParamLimits

0xcd56,	// (0x0001984e) list_single_2graphic_im_pane_g1

0xcd67,	// (0x0001985f) list_single_2graphic_im_pane_g2_ParamLimits

0xcd67,	// (0x0001985f) list_single_2graphic_im_pane_g2

0xcd73,	// (0x0001986b) list_single_2graphic_im_pane_g3_ParamLimits

0xcd73,	// (0x0001986b) list_single_2graphic_im_pane_g3

0x0003,

0xfc63,	// (0x0001c75b) list_single_2graphic_im_pane_g_ParamLimits

0xfc63,	// (0x0001c75b) list_single_2graphic_im_pane_g

0xcd93,	// (0x0001988b) list_single_2graphic_im_pane_t1_ParamLimits

0xcd93,	// (0x0001988b) list_single_2graphic_im_pane_t1

0xc5b6,	// (0x000190ae) list_single_graphic_2heading_pane_fp_ParamLimits

0xc5b6,	// (0x000190ae) list_single_graphic_2heading_pane_fp

0xc61b,	// (0x00019113) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xc61b,	// (0x00019113) list_single_graphic_2heading_pane_fp_g1

0xc5cc,	// (0x000190c4) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc5cc,	// (0x000190c4) list_single_graphic_2heading_pane_fp_g2

0xc5d8,	// (0x000190d0) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xc5d8,	// (0x000190d0) list_single_graphic_2heading_pane_fp_g3

0xc5e4,	// (0x000190dc) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xc5e4,	// (0x000190dc) list_single_graphic_2heading_pane_fp_g4

0xc5f8,	// (0x000190f0) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc5f8,	// (0x000190f0) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb8a,	// (0x0001c682) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb8a,	// (0x0001c682) list_single_graphic_2heading_pane_fp_g

0xcdc4,	// (0x000198bc) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xcdc4,	// (0x000198bc) list_single_graphic_2heading_pane_fp_t1

0xc653,	// (0x0001914b) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xc653,	// (0x0001914b) list_single_graphic_2heading_pane_fp_t2

0xcdda,	// (0x000198d2) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xcdda,	// (0x000198d2) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc6c,	// (0x0001c764) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc6c,	// (0x0001c764) list_single_graphic_2heading_pane_fp_t

0xbfe9,	// (0x00018ae1) fep_hwr_write_pane_g5_ParamLimits

0xbfe9,	// (0x00018ae1) fep_hwr_write_pane_g5

0xbff5,	// (0x00018aed) fep_hwr_write_pane_g6_ParamLimits

0xbff5,	// (0x00018aed) fep_hwr_write_pane_g6

0xca9d,	// (0x00019595) eswt_shell_pane_ParamLimits

0x9568,	// (0x00016060) bg_popup_window_pane_cp18_ParamLimits

0xa831,	// (0x00017329) heading_pane_cp70

0xcbc7,	// (0x000196bf) popup_eswt_tasktip_window_t1_ParamLimits

0x8f84,	// (0x00015a7c) aid_touch_tab_arrow_left

0x8f93,	// (0x00015a8b) aid_touch_tab_arrow_right

0x79b1,	// (0x000144a9) title_pane_g3_ParamLimits

0x79b1,	// (0x000144a9) title_pane_g3

0x41be,	// (0x00010cb6) set_value_pane_g1

0x63a6,	// (0x00012e9e) popup_toolbar_trans_pane_ParamLimits

0xcd0a,	// (0x00019802) aid_size_cell_tb_trans_pane_ParamLimits

0x4227,	// (0x00010d1f) bg_tb_trans_pane_ParamLimits

0xcd1c,	// (0x00019814) grid_tb_trans_pane_ParamLimits

0x3f1d,	// (0x00010a15) cont_note_pane_ParamLimits

0x3f1d,	// (0x00010a15) cont_note_pane

0x4099,	// (0x00010b91) cont_snote2_single_text_pane_ParamLimits

0x4099,	// (0x00010b91) cont_snote2_single_text_pane

0x4099,	// (0x00010b91) cont_snote2_single_graphic_pane_ParamLimits

0x4099,	// (0x00010b91) cont_snote2_single_graphic_pane

0x9ba7,	// (0x0001669f) cont_note_wait_pane_ParamLimits

0x9ba7,	// (0x0001669f) cont_note_wait_pane

0x9ba7,	// (0x0001669f) cont_note_image_pane_ParamLimits

0x9ba7,	// (0x0001669f) cont_note_image_pane

0xcdf0,	// (0x000198e8) popup_note2_window_g1_ParamLimits

0xcdf0,	// (0x000198e8) popup_note2_window_g1

0xce21,	// (0x00019919) popup_note2_window_t1_ParamLimits

0xce21,	// (0x00019919) popup_note2_window_t1

0xce66,	// (0x0001995e) popup_note2_window_t2_ParamLimits

0xce66,	// (0x0001995e) popup_note2_window_t2

0xceab,	// (0x000199a3) popup_note2_window_t3_ParamLimits

0xceab,	// (0x000199a3) popup_note2_window_t3

0xcef0,	// (0x000199e8) popup_note2_window_t4_ParamLimits

0xcef0,	// (0x000199e8) popup_note2_window_t4

0x3fa1,	// (0x00010a99) popup_note2_window_t5_ParamLimits

0x3fa1,	// (0x00010a99) popup_note2_window_t5

0x0004,

0xfc78,	// (0x0001c770) popup_note2_window_t_ParamLimits

0xfc78,	// (0x0001c770) popup_note2_window_t

0xcf1f,	// (0x00019a17) popup_note2_image_window_g1_ParamLimits

0xcf1f,	// (0x00019a17) popup_note2_image_window_g1

0xcf2b,	// (0x00019a23) popup_note2_image_window_g2_ParamLimits

0xcf2b,	// (0x00019a23) popup_note2_image_window_g2

0x0001,

0xfc83,	// (0x0001c77b) popup_note2_image_window_g_ParamLimits

0xfc83,	// (0x0001c77b) popup_note2_image_window_g

0xcf3d,	// (0x00019a35) popup_note2_image_window_t1_ParamLimits

0xcf3d,	// (0x00019a35) popup_note2_image_window_t1

0xcf55,	// (0x00019a4d) popup_note2_image_window_t2_ParamLimits

0xcf55,	// (0x00019a4d) popup_note2_image_window_t2

0xcf6d,	// (0x00019a65) popup_note2_image_window_t3_ParamLimits

0xcf6d,	// (0x00019a65) popup_note2_image_window_t3

0x0002,

0xfc88,	// (0x0001c780) popup_note2_image_window_t_ParamLimits

0xfc88,	// (0x0001c780) popup_note2_image_window_t

0x9bb5,	// (0x000166ad) popup_note2_wait_window_g1_ParamLimits

0x9bb5,	// (0x000166ad) popup_note2_wait_window_g1

0x9bc1,	// (0x000166b9) popup_note2_wait_window_g2_ParamLimits

0x9bc1,	// (0x000166b9) popup_note2_wait_window_g2

0x9bcd,	// (0x000166c5) popup_note2_wait_window_g3_ParamLimits

0x9bcd,	// (0x000166c5) popup_note2_wait_window_g3

0x0002,

0xf843,	// (0x0001c33b) popup_note2_wait_window_g_ParamLimits

0xf843,	// (0x0001c33b) popup_note2_wait_window_g

0xcf89,	// (0x00019a81) popup_note2_wait_window_t1_ParamLimits

0xcf89,	// (0x00019a81) popup_note2_wait_window_t1

0xcfa7,	// (0x00019a9f) popup_note2_wait_window_t2_ParamLimits

0xcfa7,	// (0x00019a9f) popup_note2_wait_window_t2

0xcfc5,	// (0x00019abd) popup_note2_wait_window_t3_ParamLimits

0xcfc5,	// (0x00019abd) popup_note2_wait_window_t3

0xcfd7,	// (0x00019acf) popup_note2_wait_window_t4_ParamLimits

0xcfd7,	// (0x00019acf) popup_note2_wait_window_t4

0x0003,

0xfc8f,	// (0x0001c787) popup_note2_wait_window_t_ParamLimits

0xfc8f,	// (0x0001c787) popup_note2_wait_window_t

0xcfe9,	// (0x00019ae1) wait_bar2_pane_ParamLimits

0xcfe9,	// (0x00019ae1) wait_bar2_pane

0xd001,	// (0x00019af9) popup_snote2_single_text_window_g1_ParamLimits

0xd001,	// (0x00019af9) popup_snote2_single_text_window_g1

0xd029,	// (0x00019b21) popup_snote2_single_text_window_t1_ParamLimits

0xd029,	// (0x00019b21) popup_snote2_single_text_window_t1

0xd075,	// (0x00019b6d) popup_snote2_single_text_window_t2_ParamLimits

0xd075,	// (0x00019b6d) popup_snote2_single_text_window_t2

0xd0c1,	// (0x00019bb9) popup_snote2_single_text_window_t3_ParamLimits

0xd0c1,	// (0x00019bb9) popup_snote2_single_text_window_t3

0xd102,	// (0x00019bfa) popup_snote2_single_text_window_t4_ParamLimits

0xd102,	// (0x00019bfa) popup_snote2_single_text_window_t4

0xd138,	// (0x00019c30) popup_snote2_single_text_window_t5_ParamLimits

0xd138,	// (0x00019c30) popup_snote2_single_text_window_t5

0x0004,

0xfc98,	// (0x0001c790) popup_snote2_single_text_window_t_ParamLimits

0xfc98,	// (0x0001c790) popup_snote2_single_text_window_t

0xd163,	// (0x00019c5b) popup_snote2_single_graphic_window_g1_ParamLimits

0xd163,	// (0x00019c5b) popup_snote2_single_graphic_window_g1

0xd18b,	// (0x00019c83) popup_snote2_single_graphic_window_g2_ParamLimits

0xd18b,	// (0x00019c83) popup_snote2_single_graphic_window_g2

0x0001,

0xfca3,	// (0x0001c79b) popup_snote2_single_graphic_window_g_ParamLimits

0xfca3,	// (0x0001c79b) popup_snote2_single_graphic_window_g

0xd1b3,	// (0x00019cab) popup_snote2_single_graphic_window_t1_ParamLimits

0xd1b3,	// (0x00019cab) popup_snote2_single_graphic_window_t1

0xd1ff,	// (0x00019cf7) popup_snote2_single_graphic_window_t2_ParamLimits

0xd1ff,	// (0x00019cf7) popup_snote2_single_graphic_window_t2

0xd0c1,	// (0x00019bb9) popup_snote2_single_graphic_window_t3_ParamLimits

0xd0c1,	// (0x00019bb9) popup_snote2_single_graphic_window_t3

0xd102,	// (0x00019bfa) popup_snote2_single_graphic_window_t4_ParamLimits

0xd102,	// (0x00019bfa) popup_snote2_single_graphic_window_t4

0xd138,	// (0x00019c30) popup_snote2_single_graphic_window_t5_ParamLimits

0xd138,	// (0x00019c30) popup_snote2_single_graphic_window_t5

0x0004,

0xfca8,	// (0x0001c7a0) popup_snote2_single_graphic_window_t_ParamLimits

0xfca8,	// (0x0001c7a0) popup_snote2_single_graphic_window_t

0xb9ae,	// (0x000184a6) clock_nsta_pane_cp2_t1

0xb9ae,	// (0x000184a6) clock_nsta_pane_cp2_t2

0x0001,

0xfac3,	// (0x0001c5bb) clock_nsta_pane_cp2_t

0x4235,	// (0x00010d2d) form_field_data_wide_pane_g1_ParamLimits

0x418e,	// (0x00010c86) form_field_data_wide_pane_g2_ParamLimits

0x418e,	// (0x00010c86) form_field_data_wide_pane_g2

0x4241,	// (0x00010d39) form_field_data_wide_pane_g3_ParamLimits

0x4241,	// (0x00010d39) form_field_data_wide_pane_g3

0x0002,

0xf676,	// (0x0001c16e) form_field_data_wide_pane_g_ParamLimits

0xf676,	// (0x0001c16e) form_field_data_wide_pane_g

0xb8a0,	// (0x00018398) grid_touch_3_pane_ParamLimits

0xb8a0,	// (0x00018398) grid_touch_3_pane

0xd24b,	// (0x00019d43) cell_touch_3_pane_ParamLimits

0xd24b,	// (0x00019d43) cell_touch_3_pane

0xbf5d,	// (0x00018a55) cell_touch_3_pane_g1

0xbf5d,	// (0x00018a55) cell_touch_3_pane_g2

0x0001,

0xfb48,	// (0x0001c640) cell_touch_3_pane_g

0x3fd3,	// (0x00010acb) cont_query_data_pane

0x3fdb,	// (0x00010ad3) cont_query_data_pane_cp1

0xd279,	// (0x00019d71) button_value_adjust_pane_cp7

0xd281,	// (0x00019d79) query_popup_pane_cp3

0x4936,	// (0x0001142e) bg_popup_sub_pane_cp22_ParamLimits

0x5af9,	// (0x000125f1) navi_navi_volume_pane_cp2

0x5b11,	// (0x00012609) popup_side_volume_key_window_g2

0x5b1d,	// (0x00012615) popup_side_volume_key_window_g3

0x0002,

0xf70c,	// (0x0001c204) popup_side_volume_key_window_g

0x5b37,	// (0x0001262f) popup_side_volume_key_window_t2

0x0001,

0xf713,	// (0x0001c20b) popup_side_volume_key_window_t

0x8965,	// (0x0001545d) popup_side_volume_key_window_ParamLimits

0x807c,	// (0x00014b74) list_double_graphic_pane_g4_ParamLimits

0x807c,	// (0x00014b74) list_double_graphic_pane_g4

0xab87,	// (0x0001767f) list_single_2heading_msg_pane_ParamLimits

0xab87,	// (0x0001767f) list_single_2heading_msg_pane

0xd2b0,	// (0x00019da8) list_single_2heading_msg_pane_g1_ParamLimits

0xd2b0,	// (0x00019da8) list_single_2heading_msg_pane_g1

0x7ecf,	// (0x000149c7) list_single_2heading_msg_pane_g2_ParamLimits

0x7ecf,	// (0x000149c7) list_single_2heading_msg_pane_g2

0xd2bc,	// (0x00019db4) list_single_2heading_msg_pane_g3_ParamLimits

0xd2bc,	// (0x00019db4) list_single_2heading_msg_pane_g3

0xd2c8,	// (0x00019dc0) list_single_2heading_msg_pane_g4_ParamLimits

0xd2c8,	// (0x00019dc0) list_single_2heading_msg_pane_g4

0x0003,

0xfcb3,	// (0x0001c7ab) list_single_2heading_msg_pane_g_ParamLimits

0xfcb3,	// (0x0001c7ab) list_single_2heading_msg_pane_g

0xd2e0,	// (0x00019dd8) list_single_2heading_msg_pane_t1_ParamLimits

0xd2e0,	// (0x00019dd8) list_single_2heading_msg_pane_t1

0xd308,	// (0x00019e00) list_single_2heading_msg_pane_t2_ParamLimits

0xd308,	// (0x00019e00) list_single_2heading_msg_pane_t2

0xd337,	// (0x00019e2f) list_single_2heading_msg_pane_t3_ParamLimits

0xd337,	// (0x00019e2f) list_single_2heading_msg_pane_t3

0xd370,	// (0x00019e68) list_single_2heading_msg_pane_t4_ParamLimits

0xd370,	// (0x00019e68) list_single_2heading_msg_pane_t4

0x0003,

0xfcbc,	// (0x0001c7b4) list_single_2heading_msg_pane_t_ParamLimits

0xfcbc,	// (0x0001c7b4) list_single_2heading_msg_pane_t

0x3d87,	// (0x0001087f) title_pane_g4_ParamLimits

0x3d87,	// (0x0001087f) title_pane_g4

0x5908,	// (0x00012400) title_pane_stacon_g3_ParamLimits

0x5908,	// (0x00012400) title_pane_stacon_g3

0xcd87,	// (0x0001987f) list_single_2graphic_im_pane_g4_ParamLimits

0xcd87,	// (0x0001987f) list_single_2graphic_im_pane_g4

0xa5ee,	// (0x000170e6) popup_side_volume_key_window_cp

0xaf04,	// (0x000179fc) main_idle_act2_pane_t1

0x6502,	// (0x00012ffa) toolbar_button_pane_g10

0x7eb9,	// (0x000149b1) popup_toolbar_window_cp1

0xb99f,	// (0x00018497) clock_nsta_pane_cp_t1

0xb99f,	// (0x00018497) clock_nsta_pane_cp_t2

0x0001,

0xfabe,	// (0x0001c5b6) clock_nsta_pane_cp_t

0x5af9,	// (0x000125f1) navi_navi_volume_pane_cp2_ParamLimits

0x5b05,	// (0x000125fd) popup_side_volume_key_window_g1_ParamLimits

0x5b11,	// (0x00012609) popup_side_volume_key_window_g2_ParamLimits

0x5b1d,	// (0x00012615) popup_side_volume_key_window_g3_ParamLimits

0xf70c,	// (0x0001c204) popup_side_volume_key_window_g_ParamLimits

0x69b8,	// (0x000134b0) fep_hwr_aid_pane

0x6a5f,	// (0x00013557) bg_fep_hwr_top_pane_g4_ParamLimits

0xbfb9,	// (0x00018ab1) fep_hwr_top_pane_g1_ParamLimits

0xbfcb,	// (0x00018ac3) fep_hwr_top_pane_g2_ParamLimits

0x6a7f,	// (0x00013577) fep_hwr_top_pane_g3_ParamLimits

0xfb13,	// (0x0001c60b) fep_hwr_top_pane_g_ParamLimits

0x6a94,	// (0x0001358c) fep_hwr_top_text_pane_ParamLimits

0xa3b1,	// (0x00016ea9) aid_touch_tab_arrow_arrow_2

0xa3ba,	// (0x00016eb2) aid_touch_tab_arrow_left_2

0x69cc,	// (0x000134c4) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x6a03,	// (0x000134fb) fep_hwr_prediction_pane

0xc124,	// (0x00018c1c) fep_vkb_prediction_pane

0xc221,	// (0x00018d19) fep_vkb_side_pane_g3_ParamLimits

0xc221,	// (0x00018d19) fep_vkb_side_pane_g3

0x6c0f,	// (0x00013707) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x6c7b,	// (0x00013773) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x6c88,	// (0x00013780) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbc2,	// (0x0001c6ba) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x6db7,	// (0x000138af) fep_hwr_prediction_pane_g1

0x6dc1,	// (0x000138b9) fep_hwr_prediction_pane_g2

0x6dc9,	// (0x000138c1) fep_hwr_prediction_pane_g3

0x6dd1,	// (0x000138c9) fep_hwr_prediction_pane_g4

0x0003,

0xfcc5,	// (0x0001c7bd) fep_hwr_prediction_pane_g

0xd395,	// (0x00019e8d) fep_vkb_prediction_pane_g1

0xd39f,	// (0x00019e97) fep_vkb_prediction_pane_g2

0xd3a7,	// (0x00019e9f) fep_vkb_prediction_pane_g3

0xd3af,	// (0x00019ea7) fep_vkb_prediction_pane_g4

0x0003,

0xfcce,	// (0x0001c7c6) fep_vkb_prediction_pane_g

0x67f0,	// (0x000132e8) slider_set_pane_g3

0x6804,	// (0x000132fc) slider_set_pane_g4

0x681c,	// (0x00013314) slider_set_pane_g5

0x67f0,	// (0x000132e8) slider_set_pane_g6

0x6832,	// (0x0001332a) slider_set_pane_g7

0xaa76,	// (0x0001756e) slider_form_pane_g3

0xaa7f,	// (0x00017577) slider_form_pane_g4

0xaa87,	// (0x0001757f) slider_form_pane_g5

0xaa76,	// (0x0001756e) slider_form_pane_g6

0xaa8f,	// (0x00017587) slider_form_pane_g7

0xb1e9,	// (0x00017ce1) slider_set_pane_vc_g3

0xb1f2,	// (0x00017cea) slider_set_pane_vc_g4

0xb1fb,	// (0x00017cf3) slider_set_pane_vc_g5

0xb1e9,	// (0x00017ce1) slider_set_pane_vc_g6

0xb204,	// (0x00017cfc) slider_set_pane_vc_g7

0xb673,	// (0x0001816b) slider_form_pane_vc_g1

0xb67c,	// (0x00018174) slider_form_pane_vc_g2

0xb685,	// (0x0001817d) slider_form_pane_vc_g3

0xb673,	// (0x0001816b) slider_form_pane_vc_g4

0xb68e,	// (0x00018186) slider_form_pane_vc_g5

0x0004,

0xfa90,	// (0x0001c588) slider_form_pane_vc_g

0x55dd,	// (0x000120d5) main_idle_act3_pane

0xd3b7,	// (0x00019eaf) ai3_links_pane

0xd3c0,	// (0x00019eb8) popup_ai3_data_window_ParamLimits

0xd3c0,	// (0x00019eb8) popup_ai3_data_window

0x3bda,	// (0x000106d2) grid_ai3_links_pane

0xd3d8,	// (0x00019ed0) cell_ai3_links_pane_ParamLimits

0xd3d8,	// (0x00019ed0) cell_ai3_links_pane

0xd3f0,	// (0x00019ee8) bg_popup_sub_pane_cp11

0xd3fd,	// (0x00019ef5) cell_ai3_links_pane_g1

0x3bda,	// (0x000106d2) bg_popup_sub_pane_cp12

0xd422,	// (0x00019f1a) heading_ai3_data_pane

0xd42a,	// (0x00019f22) list_ai3_gene_pane

0xd436,	// (0x00019f2e) popup_ai3_data_window_g1

0xd43e,	// (0x00019f36) heading_ai3_data_pane_g1

0xd446,	// (0x00019f3e) heading_ai3_data_pane_t1

0xd454,	// (0x00019f4c) list_double_ai3_gene_pane_ParamLimits

0xd454,	// (0x00019f4c) list_double_ai3_gene_pane

0xd461,	// (0x00019f59) list_single_ai3_gene_pane_ParamLimits

0xd461,	// (0x00019f59) list_single_ai3_gene_pane

0xbf22,	// (0x00018a1a) list_highlight_pane_cp7_ParamLimits

0xbf22,	// (0x00018a1a) list_highlight_pane_cp7

0xd46e,	// (0x00019f66) list_single_a13_gene_pane_t1_ParamLimits

0xd46e,	// (0x00019f66) list_single_a13_gene_pane_t1

0xd485,	// (0x00019f7d) list_single_ai3_gene_pane_g1

0xd48e,	// (0x00019f86) list_single_ai3_gene_pane_g2

0x0001,

0xfcd7,	// (0x0001c7cf) list_single_ai3_gene_pane_g

0xd496,	// (0x00019f8e) list_double_ai3_gene_pane_g1_ParamLimits

0xd496,	// (0x00019f8e) list_double_ai3_gene_pane_g1

0xd4a2,	// (0x00019f9a) list_double_ai3_gene_pane_t1_ParamLimits

0xd4a2,	// (0x00019f9a) list_double_ai3_gene_pane_t1

0xd4be,	// (0x00019fb6) list_double_ai3_gene_pane_t2_ParamLimits

0xd4be,	// (0x00019fb6) list_double_ai3_gene_pane_t2

0xd4d3,	// (0x00019fcb) list_double_ai3_gene_pane_t3_ParamLimits

0xd4d3,	// (0x00019fcb) list_double_ai3_gene_pane_t3

0x0002,

0xfcdc,	// (0x0001c7d4) list_double_ai3_gene_pane_t_ParamLimits

0xfcdc,	// (0x0001c7d4) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xd292,	// (0x00019d8a) aid_size_min_col_2

0xd29c,	// (0x00019d94) aid_size_min_msg_ParamLimits

0xd29c,	// (0x00019d94) aid_size_min_msg

0xc321,	// (0x00018e19) fep_vkb_top_text_pane_g2_ParamLimits

0xc321,	// (0x00018e19) fep_vkb_top_text_pane_g2

0x0001,

0xfb43,	// (0x0001c63b) fep_vkb_top_text_pane_g_ParamLimits

0xfb43,	// (0x0001c63b) fep_vkb_top_text_pane_g

0x55dd,	// (0x000120d5) main_hc_apps_shell_pane

0xd4f0,	// (0x00019fe8) grid_hc_apps_pane_ParamLimits

0xd4f0,	// (0x00019fe8) grid_hc_apps_pane

0xd4ff,	// (0x00019ff7) list_hc_apps_pane

0xd507,	// (0x00019fff) scroll_pane_cp37_ParamLimits

0xd507,	// (0x00019fff) scroll_pane_cp37

0xd513,	// (0x0001a00b) cell_hc_apps_pane_ParamLimits

0xd513,	// (0x0001a00b) cell_hc_apps_pane

0xd5e2,	// (0x0001a0da) cell_hc_apps_pane_g1_ParamLimits

0xd5e2,	// (0x0001a0da) cell_hc_apps_pane_g1

0xd613,	// (0x0001a10b) cell_hc_apps_pane_g2_ParamLimits

0xd613,	// (0x0001a10b) cell_hc_apps_pane_g2

0xd62f,	// (0x0001a127) cell_hc_apps_pane_g3_ParamLimits

0xd62f,	// (0x0001a127) cell_hc_apps_pane_g3

0x0002,

0xfce3,	// (0x0001c7db) cell_hc_apps_pane_g_ParamLimits

0xfce3,	// (0x0001c7db) cell_hc_apps_pane_g

0xd651,	// (0x0001a149) cell_hc_apps_pane_t1_ParamLimits

0xd651,	// (0x0001a149) cell_hc_apps_pane_t1

0x3f1d,	// (0x00010a15) grid_highlight_pane_cp10_ParamLimits

0x3f1d,	// (0x00010a15) grid_highlight_pane_cp10

0xd691,	// (0x0001a189) list_single_hc_apps_pane_ParamLimits

0xd691,	// (0x0001a189) list_single_hc_apps_pane

0xd6f4,	// (0x0001a1ec) list_single_hc_apps_pane_g1

0xd70d,	// (0x0001a205) list_single_hc_apps_pane_g2

0x0001,

0xfcea,	// (0x0001c7e2) list_single_hc_apps_pane_g

0xd726,	// (0x0001a21e) list_single_hc_apps_pane_g2_copy1

0xd742,	// (0x0001a23a) list_single_hc_apps_pane_t1

0x3dd9,	// (0x000108d1) bg_set_opt_pane_cp_ParamLimits

0x5830,	// (0x00012328) setting_slider_pane_t1_ParamLimits

0x5849,	// (0x00012341) setting_slider_pane_t2_ParamLimits

0x5863,	// (0x0001235b) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0001c056) setting_slider_pane_t_ParamLimits

0x587b,	// (0x00012373) slider_set_pane_ParamLimits

0x5d99,	// (0x00012891) control_pane_g5_ParamLimits

0x5d99,	// (0x00012891) control_pane_g5

0xa8c5,	// (0x000173bd) slider_set_pane_g1_ParamLimits

0x67e4,	// (0x000132dc) slider_set_pane_g2_ParamLimits

0x67f0,	// (0x000132e8) slider_set_pane_g3_ParamLimits

0x6804,	// (0x000132fc) slider_set_pane_g4_ParamLimits

0x681c,	// (0x00013314) slider_set_pane_g5_ParamLimits

0x67f0,	// (0x000132e8) slider_set_pane_g6_ParamLimits

0x6832,	// (0x0001332a) slider_set_pane_g7_ParamLimits

0xf95f,	// (0x0001c457) slider_set_pane_g_ParamLimits

0x8a43,	// (0x0001553b) navi_icon_text_pane_ParamLimits

0x8f45,	// (0x00015a3d) aid_fill_nsta_2_ParamLimits

0x8f84,	// (0x00015a7c) aid_touch_tab_arrow_left_ParamLimits

0x8f93,	// (0x00015a8b) aid_touch_tab_arrow_right_ParamLimits

0x9000,	// (0x00015af8) clock_nsta_pane_ParamLimits

0xa393,	// (0x00016e8b) navi_icon_pane_g1_ParamLimits

0xa39f,	// (0x00016e97) navi_text_pane_t1_ParamLimits

0xbaaf,	// (0x000185a7) navi_icon_text_pane_g1_ParamLimits

0xbabb,	// (0x000185b3) navi_icon_text_pane_t1_ParamLimits

0xd6f4,	// (0x0001a1ec) list_single_hc_apps_pane_g1_ParamLimits

0xd70d,	// (0x0001a205) list_single_hc_apps_pane_g2_ParamLimits

0xfcea,	// (0x0001c7e2) list_single_hc_apps_pane_g_ParamLimits

0xd726,	// (0x0001a21e) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xd742,	// (0x0001a23a) list_single_hc_apps_pane_t1_ParamLimits

0x573a,	// (0x00012232) popup_toolbar2_fixed_window_ParamLimits

0x573a,	// (0x00012232) popup_toolbar2_fixed_window

0x639c,	// (0x00012e94) popup_toolbar2_float_window

0x3bda,	// (0x000106d2) bg_popup_sub_pane_cp27

0xd770,	// (0x0001a268) grid_toolbar2_float_pane

0x3bda,	// (0x000106d2) bg_popup_sub_pane_cp26

0xd770,	// (0x0001a268) grid_toolbar2_fixed_pane

0xd778,	// (0x0001a270) cell_toolbar2_fixed_pane_ParamLimits

0xd778,	// (0x0001a270) cell_toolbar2_fixed_pane

0xd788,	// (0x0001a280) cell_toolbar2_fixed_pane_g1

0x626e,	// (0x00012d66) toolbar2_fixed_button_pane

0x943c,	// (0x00015f34) toolbar2_fixed_button_pane_g1

0x944c,	// (0x00015f44) toolbar2_fixed_button_pane_g2

0x9444,	// (0x00015f3c) toolbar2_fixed_button_pane_g3

0x945c,	// (0x00015f54) toolbar2_fixed_button_pane_g4

0x9454,	// (0x00015f4c) toolbar2_fixed_button_pane_g5

0x9464,	// (0x00015f5c) toolbar2_fixed_button_pane_g6

0x946c,	// (0x00015f64) toolbar2_fixed_button_pane_g7

0x947c,	// (0x00015f74) toolbar2_fixed_button_pane_g8

0x9474,	// (0x00015f6c) toolbar2_fixed_button_pane_g9

0x0008,

0xf861,	// (0x0001c359) toolbar2_fixed_button_pane_g

0xd791,	// (0x0001a289) cell_toolbar2_float_pane_ParamLimits

0xd791,	// (0x0001a289) cell_toolbar2_float_pane

0xd7a2,	// (0x0001a29a) cell_toolbar2_float_pane_g1

0x626e,	// (0x00012d66) toolbar2_fixed_button_pane_cp

0xc08b,	// (0x00018b83) fep_vkb_accented_list_pane_ParamLimits

0xc08b,	// (0x00018b83) fep_vkb_accented_list_pane

0x6bef,	// (0x000136e7) bg_popup_fep_shadow_pane_g9

0x8bc3,	// (0x000156bb) bg_popup_fep_shadow_pane_cp3

0x4367,	// (0x00010e5f) list_accented_list_pane

0xd7ab,	// (0x0001a2a3) list_single_accented_list_pane_ParamLimits

0xd7ab,	// (0x0001a2a3) list_single_accented_list_pane

0x8bc3,	// (0x000156bb) list_highlight_pane_cp10

0xd7bc,	// (0x0001a2b4) list_single_accented_list_pane_t1

0x62ec,	// (0x00012de4) popup_slider_window_ParamLimits

0x62ec,	// (0x00012de4) popup_slider_window

0xd289,	// (0x00019d81) aid_indentation_list_msg

0xd872,	// (0x0001a36a) bg_popup_window_pane_cp19

0xd8dc,	// (0x0001a3d4) popup_slider_window_g1

0xd8f8,	// (0x0001a3f0) popup_slider_window_g2

0xd914,	// (0x0001a40c) popup_slider_window_g3

0x0005,

0xfcef,	// (0x0001c7e7) popup_slider_window_g

0xd970,	// (0x0001a468) popup_slider_window_t1

0xd9e4,	// (0x0001a4dc) small_volume_slider_vertical_pane

0xbf5d,	// (0x00018a55) small_volume_slider_vertical_pane_g1

0xbf5d,	// (0x00018a55) small_volume_slider_vertical_pane_g2

0xda00,	// (0x0001a4f8) small_volume_slider_vertical_pane_g3

0x0002,

0xfd01,	// (0x0001c7f9) small_volume_slider_vertical_pane_g

0x5500,	// (0x00011ff8) area_side_right_pane_ParamLimits

0x5500,	// (0x00011ff8) area_side_right_pane

0x6dd9,	// (0x000138d1) aid_size_side_button_ParamLimits

0x6dd9,	// (0x000138d1) aid_size_side_button

0x6ded,	// (0x000138e5) grid_sctrl_middle_pane_ParamLimits

0x6ded,	// (0x000138e5) grid_sctrl_middle_pane

0x6e0c,	// (0x00013904) sctrl_sk_bottom_pane

0x6e1d,	// (0x00013915) sctrl_sk_top_pane

0x6e2f,	// (0x00013927) aid_touch_sctrl_top

0x6e3c,	// (0x00013934) bg_sctrl_sk_pane_ParamLimits

0x6e3c,	// (0x00013934) bg_sctrl_sk_pane

0x6e4a,	// (0x00013942) sctrl_sk_top_pane_g1

0x6e57,	// (0x0001394f) sctrl_sk_top_pane_t1

0x6e2f,	// (0x00013927) aid_touch_sctrl_bottom

0x6e3c,	// (0x00013934) bg_sctrl_sk_pane_cp_ParamLimits

0x6e3c,	// (0x00013934) bg_sctrl_sk_pane_cp

0x6e72,	// (0x0001396a) sctrl_sk_bottom_pane_g1

0x6e57,	// (0x0001394f) sctrl_sk_bottom_pane_t1

0x6e7b,	// (0x00013973) cell_sctrl_middle_pane_ParamLimits

0x6e7b,	// (0x00013973) cell_sctrl_middle_pane

0x6e96,	// (0x0001398e) aid_touch_sctrl_middle_ParamLimits

0x6e96,	// (0x0001398e) aid_touch_sctrl_middle

0x6ea8,	// (0x000139a0) bg_sctrl_middle_pane_ParamLimits

0x6ea8,	// (0x000139a0) bg_sctrl_middle_pane

0x6c0f,	// (0x00013707) cell_sctrl_middle_pane_g1_ParamLimits

0x6c0f,	// (0x00013707) cell_sctrl_middle_pane_g1

0x6eb6,	// (0x000139ae) cell_sctrl_middle_pane_g2_ParamLimits

0x6eb6,	// (0x000139ae) cell_sctrl_middle_pane_g2

0x0001,

0xfd0d,	// (0x0001c805) cell_sctrl_middle_pane_g_ParamLimits

0xfd0d,	// (0x0001c805) cell_sctrl_middle_pane_g

0x943c,	// (0x00015f34) bg_sctrl_middle_pane_g1

0x9444,	// (0x00015f3c) bg_sctrl_middle_pane_g2

0x944c,	// (0x00015f44) bg_sctrl_middle_pane_g3

0x9454,	// (0x00015f4c) bg_sctrl_middle_pane_g4

0x945c,	// (0x00015f54) bg_sctrl_middle_pane_g5

0x9464,	// (0x00015f5c) bg_sctrl_middle_pane_g6

0x946c,	// (0x00015f64) bg_sctrl_middle_pane_g7

0x9474,	// (0x00015f6c) bg_sctrl_middle_pane_g8

0x0007,

0xfd12,	// (0x0001c80a) bg_sctrl_middle_pane_g

0x947c,	// (0x00015f74) bg_sctrl_middle_pane_g8_copy1

0x943c,	// (0x00015f34) bg_sctrl_sk_pane_g1

0x944c,	// (0x00015f44) bg_sctrl_sk_pane_g2

0x9444,	// (0x00015f3c) bg_sctrl_sk_pane_g3

0x0008,

0xf861,	// (0x0001c359) bg_sctrl_sk_pane_g

0x40e7,	// (0x00010bdf) aid_size_touch_scroll_bar

0x945c,	// (0x00015f54) bg_sctrl_sk_pane_g4

0x9454,	// (0x00015f4c) bg_sctrl_sk_pane_g5

0x9464,	// (0x00015f5c) bg_sctrl_sk_pane_g6

0x946c,	// (0x00015f64) bg_sctrl_sk_pane_g7

0x947c,	// (0x00015f74) bg_sctrl_sk_pane_g8

0x9474,	// (0x00015f6c) bg_sctrl_sk_pane_g9

0x5f55,	// (0x00012a4d) popup_fep_china_hwr2_fs_candidate_window

0x5f5f,	// (0x00012a57) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x5f5f,	// (0x00012a57) popup_fep_china_hwr2_fs_control_window

0x6c0f,	// (0x00013707) sctrl_sk_top_pane_g2

0x0001,

0xfd08,	// (0x0001c800) sctrl_sk_top_pane_g

0xda09,	// (0x0001a501) aid_fep_china_hwr2_fs_cell_ParamLimits

0xda09,	// (0x0001a501) aid_fep_china_hwr2_fs_cell

0xda1b,	// (0x0001a513) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xda1b,	// (0x0001a513) bg_popup_fep_shadow_pane_cp4

0xda32,	// (0x0001a52a) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xda32,	// (0x0001a52a) bg_popup_fep_shadow_pane_cp5

0xda44,	// (0x0001a53c) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xda44,	// (0x0001a53c) popup_fep_china_hwr2_fs_control_bar_grid

0xda54,	// (0x0001a54c) popup_fep_china_hwr2_fs_control_funtion_grid

0xda5c,	// (0x0001a554) aid_fep_china_hwr2_fs_candi_cell

0x3bda,	// (0x000106d2) bg_popup_fep_shadow_pane_cp6

0xda66,	// (0x0001a55e) popup_fep_china_hwr2_fs_candidate_grid

0xda70,	// (0x0001a568) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xda70,	// (0x0001a568) cell_fep_china_hwr2_fs_funtion_grid

0xbf5d,	// (0x00018a55) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xda88,	// (0x0001a580) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xda88,	// (0x0001a580) cell_fep_china_hwr2_fs_funtion_grid_g1

0xda96,	// (0x0001a58e) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xda96,	// (0x0001a58e) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd23,	// (0x0001c81b) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd23,	// (0x0001c81b) cell_fep_china_hwr2_fs_funtion_grid_g

0xdaac,	// (0x0001a5a4) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xdaac,	// (0x0001a5a4) cell_fep_china_hwr2_fs_funtion_grid_t1

0xdac1,	// (0x0001a5b9) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xdac1,	// (0x0001a5b9) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd28,	// (0x0001c820) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd28,	// (0x0001c820) cell_fep_china_hwr2_fs_funtion_grid_t

0xdadd,	// (0x0001a5d5) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xdae5,	// (0x0001a5dd) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xdaed,	// (0x0001a5e5) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd2d,	// (0x0001c825) popup_fep_china_hwr2_fs_control_bar_grid_g

0xdaf5,	// (0x0001a5ed) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xdaf5,	// (0x0001a5ed) cell_fep_china_hwr2_fs_candidate_grid

0xdb0e,	// (0x0001a606) popup_fep_china_hwr2_fs_candidate_grid_g20

0xdb16,	// (0x0001a60e) popup_fep_china_hwr2_fs_candidate_grid_g21

0xbf5d,	// (0x00018a55) cell_fep_china_hwr2_fs_candidate_grid_g1

0xbf5d,	// (0x00018a55) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb48,	// (0x0001c640) cell_fep_china_hwr2_fs_candidate_grid_g

0xdb1e,	// (0x0001a616) cell_fep_china_hwr2_fs_candidate_grid_t1

0x9013,	// (0x00015b0b) clock_nsta_pane_cp_24_ParamLimits

0x9013,	// (0x00015b0b) clock_nsta_pane_cp_24

0x9091,	// (0x00015b89) indicator_nsta_pane_cp_24_ParamLimits

0x9091,	// (0x00015b89) indicator_nsta_pane_cp_24

0xa20f,	// (0x00016d07) heading_pane_g1

0x0001,

0xf8c6,	// (0x0001c3be) heading_pane_g

0xad4d,	// (0x00017845) grid_sct_catagory_button_pane

0xad7d,	// (0x00017875) scroll_pane_cp5_ParamLimits

0xbafd,	// (0x000185f5) button_value_adjust_pane_cp5_ParamLimits

0xbafd,	// (0x000185f5) button_value_adjust_pane_cp5

0xbbf7,	// (0x000186ef) form2_midp_time_pane_ParamLimits

0xdb2c,	// (0x0001a624) cell_sct_catagory_button_pane_ParamLimits

0xdb2c,	// (0x0001a624) cell_sct_catagory_button_pane

0xbf22,	// (0x00018a1a) bg_button_pane_cp01_ParamLimits

0xbf22,	// (0x00018a1a) bg_button_pane_cp01

0xbf5d,	// (0x00018a55) cell_sct_catagory_button_pane_g1

0x632b,	// (0x00012e23) popup_tb_extension_window

0xdb3e,	// (0x0001a636) aid_size_cell_ext_ParamLimits

0xdb3e,	// (0x0001a636) aid_size_cell_ext

0x3f1d,	// (0x00010a15) bg_tb_trans_pane_cp1_ParamLimits

0x3f1d,	// (0x00010a15) bg_tb_trans_pane_cp1

0xdb5e,	// (0x0001a656) grid_tb_ext_pane_ParamLimits

0xdb5e,	// (0x0001a656) grid_tb_ext_pane

0xdb8e,	// (0x0001a686) cell_tb_ext_pane_ParamLimits

0xdb8e,	// (0x0001a686) cell_tb_ext_pane

0xdba5,	// (0x0001a69d) cell_tb_ext_pane_g1_ParamLimits

0xdba5,	// (0x0001a69d) cell_tb_ext_pane_g1

0xdbc2,	// (0x0001a6ba) cell_tb_ext_pane_t1

0x3f1d,	// (0x00010a15) list_highlight_pane_cp11_ParamLimits

0x3f1d,	// (0x00010a15) list_highlight_pane_cp11

0x5759,	// (0x00012251) popup_uni_indicator_window_ParamLimits

0x5759,	// (0x00012251) popup_uni_indicator_window

0x4227,	// (0x00010d1f) bg_popup_sub_pane_cp14

0xdbdd,	// (0x0001a6d5) list_uniindi_pane

0xdbe9,	// (0x0001a6e1) uniindi_top_pane

0x3f1d,	// (0x00010a15) bg_uniindi_top_pane

0xdc08,	// (0x0001a700) uniindi_top_pane_g1

0xdc1e,	// (0x0001a716) uniindi_top_pane_g2

0x0003,

0xfd34,	// (0x0001c82c) uniindi_top_pane_g

0xdc48,	// (0x0001a740) uniindi_top_pane_t1

0xdc72,	// (0x0001a76a) list_single_uniindi_pane_ParamLimits

0xdc72,	// (0x0001a76a) list_single_uniindi_pane

0xbf5d,	// (0x00018a55) bg_uniindi_top_pane_g1

0xdc84,	// (0x0001a77c) list_single_uniindi_pane_g1

0xdc97,	// (0x0001a78f) list_single_uniindi_pane_t1

0x55dd,	// (0x000120d5) control_bg_pane

0xdcbc,	// (0x0001a7b4) bg_sctrl_sk_pane_cp1

0xdcc5,	// (0x0001a7bd) bg_sctrl_sk_pane_cp2

0xdcce,	// (0x0001a7c6) control_bg_pane_g1

0xdcd7,	// (0x0001a7cf) control_bg_pane_g2

0x0001,

0xfd3d,	// (0x0001c835) control_bg_pane_g

0xb943,	// (0x0001843b) cell_indicator_nsta_pane_g1_ParamLimits

0xb951,	// (0x00018449) cell_indicator_nsta_pane_g2_ParamLimits

0xfaac,	// (0x0001c5a4) cell_indicator_nsta_pane_g_ParamLimits

0xbc7f,	// (0x00018777) form2_midp_time_pane_t1_ParamLimits

0x5ebf,	// (0x000129b7) main_idle_act4_pane_ParamLimits

0x5ebf,	// (0x000129b7) main_idle_act4_pane

0x632b,	// (0x00012e23) popup_tb_extension_window_ParamLimits

0xdb7e,	// (0x0001a676) tb_ext_find_pane_ParamLimits

0xdb7e,	// (0x0001a676) tb_ext_find_pane

0xdce0,	// (0x0001a7d8) ai_gene_pane_1_cp1

0x8d02,	// (0x000157fa) ai_gene_pane_2_cp1

0xdce8,	// (0x0001a7e0) list_single_idle_plugin_calendar_pane

0xdcf1,	// (0x0001a7e9) list_single_idle_plugin_notification_pane

0xdcfa,	// (0x0001a7f2) list_single_idle_plugin_player_pane

0xdd03,	// (0x0001a7fb) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdd03,	// (0x0001a7fb) list_single_idle_plugin_shortcut_pane

0xdd25,	// (0x0001a81d) main_idle_act4_pane_t1

0xdd37,	// (0x0001a82f) main_idle_act4_pane_t2

0x0001,

0xfd42,	// (0x0001c83a) main_idle_act4_pane_t

0xdd49,	// (0x0001a841) middle_sk_idle_act4_pane_ParamLimits

0xdd49,	// (0x0001a841) middle_sk_idle_act4_pane

0xdd5f,	// (0x0001a857) popup_clock_digital_analogue_window_cp2

0xdd79,	// (0x0001a871) shortcut_wheel_idle_act4_pane_ParamLimits

0xdd79,	// (0x0001a871) shortcut_wheel_idle_act4_pane

0xbf5d,	// (0x00018a55) shortcut_wheel_idle_act4_pane_g1

0xbf5d,	// (0x00018a55) shortcut_wheel_idle_act4_pane_g2

0xbf5d,	// (0x00018a55) shortcut_wheel_idle_act4_pane_g3

0xbf5d,	// (0x00018a55) shortcut_wheel_idle_act4_pane_g4

0xbf5d,	// (0x00018a55) shortcut_wheel_idle_act4_pane_g5

0xdd8d,	// (0x0001a885) shortcut_wheel_idle_act4_pane_g6

0xdd95,	// (0x0001a88d) shortcut_wheel_idle_act4_pane_g7

0xdd9d,	// (0x0001a895) shortcut_wheel_idle_act4_pane_g8

0xdda5,	// (0x0001a89d) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd47,	// (0x0001c83f) shortcut_wheel_idle_act4_pane_g

0xc1cd,	// (0x00018cc5) middle_sk_idle_act4_pane_g1_ParamLimits

0xc1cd,	// (0x00018cc5) middle_sk_idle_act4_pane_g1

0xde09,	// (0x0001a901) middle_sk_idle_act4_pane_g2_ParamLimits

0xde09,	// (0x0001a901) middle_sk_idle_act4_pane_g2

0x0001,

0xfd6a,	// (0x0001c862) middle_sk_idle_act4_pane_g_ParamLimits

0xfd6a,	// (0x0001c862) middle_sk_idle_act4_pane_g

0xde15,	// (0x0001a90d) middle_sk_idle_act4_pane_t1_ParamLimits

0xde15,	// (0x0001a90d) middle_sk_idle_act4_pane_t1

0xde32,	// (0x0001a92a) grid_ai_shortcut_pane_ParamLimits

0xde32,	// (0x0001a92a) grid_ai_shortcut_pane

0xde4b,	// (0x0001a943) list_highlight_pane_cp16_ParamLimits

0xde4b,	// (0x0001a943) list_highlight_pane_cp16

0xde58,	// (0x0001a950) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xde58,	// (0x0001a950) list_single_idle_plugin_shortcut_pane_g1

0xde64,	// (0x0001a95c) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xde64,	// (0x0001a95c) list_single_idle_plugin_shortcut_pane_g2

0xde7c,	// (0x0001a974) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xde7c,	// (0x0001a974) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd6f,	// (0x0001c867) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd6f,	// (0x0001c867) list_single_idle_plugin_shortcut_pane_g

0xde8f,	// (0x0001a987) cell_ai_shortcut_pane_ParamLimits

0xde8f,	// (0x0001a987) cell_ai_shortcut_pane

0xdeb3,	// (0x0001a9ab) cell_ai_shortcut_pane_g1_ParamLimits

0xdeb3,	// (0x0001a9ab) cell_ai_shortcut_pane_g1

0xdce0,	// (0x0001a7d8) ai_gene_pane_1_cp2

0xded5,	// (0x0001a9cd) ai_gene_pane_2_cp2

0xdedd,	// (0x0001a9d5) list_highlight_pane_cp15

0xdee6,	// (0x0001a9de) list_single_idle_plugin_calendar_pane_g1

0xdedd,	// (0x0001a9d5) list_highlight_pane_cp17

0xdeee,	// (0x0001a9e6) list_single_idle_plugin_calendar_pane_g1_copy1

0xdef6,	// (0x0001a9ee) list_single_idle_plugin_player_pane_g1

0xafa6,	// (0x00017a9e) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd76,	// (0x0001c86e) list_single_idle_plugin_player_pane_g

0xdefe,	// (0x0001a9f6) list_single_idle_plugin_player_pane_t1

0xdf0c,	// (0x0001aa04) list_single_idle_plugin_player_pane_t2

0xdf1a,	// (0x0001aa12) list_single_idle_plugin_player_pane_t3

0xdf28,	// (0x0001aa20) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd7b,	// (0x0001c873) list_single_idle_plugin_player_pane_t

0xdf36,	// (0x0001aa2e) wait_bar_pane_cp15

0xdf3e,	// (0x0001aa36) grid_ai_notification_pane

0xafa6,	// (0x00017a9e) list_single_idle_plugin_notification_pane_g1

0xdf47,	// (0x0001aa3f) cell_ai_notification_pane_ParamLimits

0xdf47,	// (0x0001aa3f) cell_ai_notification_pane

0xdf54,	// (0x0001aa4c) cell_ai_notification_pane_g1

0xdf5c,	// (0x0001aa54) cell_ai_notification_pane_t1

0xdf6a,	// (0x0001aa62) tb_ext_find_button_pane

0xdf72,	// (0x0001aa6a) tb_ext_find_pane_g1

0xdf7a,	// (0x0001aa72) tb_ext_find_pane_t1

0x485b,	// (0x00011353) tb_ext_find_button_pane_g1

0xdf88,	// (0x0001aa80) tb_ext_find_button_pane_g2

0x0001,

0xfd84,	// (0x0001c87c) tb_ext_find_button_pane_g

0xdd25,	// (0x0001a81d) main_idle_act4_pane_t1_ParamLimits

0xdd37,	// (0x0001a82f) main_idle_act4_pane_t2_ParamLimits

0xfd42,	// (0x0001c83a) main_idle_act4_pane_t_ParamLimits

0xdd5f,	// (0x0001a857) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdd6d,	// (0x0001a865) sat_plugin_idle_act4_pane_ParamLimits

0xdd6d,	// (0x0001a865) sat_plugin_idle_act4_pane

0xdf91,	// (0x0001aa89) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdf91,	// (0x0001aa89) sat_plugin_idle_act4_pane_t1

0xdfa4,	// (0x0001aa9c) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdfa4,	// (0x0001aa9c) sat_plugin_idle_act4_pane_t2

0xdfb7,	// (0x0001aaaf) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdfb7,	// (0x0001aaaf) sat_plugin_idle_act4_pane_t3

0xdfca,	// (0x0001aac2) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdfca,	// (0x0001aac2) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd89,	// (0x0001c881) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd89,	// (0x0001c881) sat_plugin_idle_act4_pane_t

0x56a2,	// (0x0001219a) popup_battery_window_ParamLimits

0x56a2,	// (0x0001219a) popup_battery_window

0x3f1d,	// (0x00010a15) bg_popup_sub_pane_cp25_ParamLimits

0x3f1d,	// (0x00010a15) bg_popup_sub_pane_cp25

0xdfdd,	// (0x0001aad5) popup_battery_window_g1_ParamLimits

0xdfdd,	// (0x0001aad5) popup_battery_window_g1

0xdfe9,	// (0x0001aae1) popup_battery_window_t1_ParamLimits

0xdfe9,	// (0x0001aae1) popup_battery_window_t1

0xdffb,	// (0x0001aaf3) popup_battery_window_t2_ParamLimits

0xdffb,	// (0x0001aaf3) popup_battery_window_t2

0x0001,

0xfd92,	// (0x0001c88a) popup_battery_window_t_ParamLimits

0xfd92,	// (0x0001c88a) popup_battery_window_t

0x8bcb,	// (0x000156c3) midp_canvas_pane_ParamLimits

0x8c44,	// (0x0001573c) midp_keypad_pane_ParamLimits

0x8c44,	// (0x0001573c) midp_keypad_pane

0x8f05,	// (0x000159fd) main_midp_pane_ParamLimits

0xb9bd,	// (0x000184b5) signal_pane_g2_cp_ParamLimits

0xe018,	// (0x0001ab10) aid_size_cell_midp_keypad_ParamLimits

0xe018,	// (0x0001ab10) aid_size_cell_midp_keypad

0xe032,	// (0x0001ab2a) midp_keyp_game_grid_pane_ParamLimits

0xe032,	// (0x0001ab2a) midp_keyp_game_grid_pane

0xe052,	// (0x0001ab4a) midp_keyp_rocker_pane_ParamLimits

0xe052,	// (0x0001ab4a) midp_keyp_rocker_pane

0xe08b,	// (0x0001ab83) midp_keyp_sk_left_pane_ParamLimits

0xe08b,	// (0x0001ab83) midp_keyp_sk_left_pane

0xe0e5,	// (0x0001abdd) midp_keyp_sk_right_pane_ParamLimits

0xe0e5,	// (0x0001abdd) midp_keyp_sk_right_pane

0x3bda,	// (0x000106d2) bg_button_pane_cp03

0xe13f,	// (0x0001ac37) midp_keyp_sk_left_pane_g1

0x3bda,	// (0x000106d2) bg_button_pane_cp04

0xe13f,	// (0x0001ac37) midp_keyp_sk_right_pane_g1

0xbf5d,	// (0x00018a55) midp_keyp_rocker_pane_g1

0xe148,	// (0x0001ac40) keyp_game_cell_pane_ParamLimits

0xe148,	// (0x0001ac40) keyp_game_cell_pane

0x3bda,	// (0x000106d2) bg_button_pane_cp02

0xe15b,	// (0x0001ac53) keyp_game_cell_pane_g1

0x56d8,	// (0x000121d0) popup_fep_vkb2_window_ParamLimits

0x56d8,	// (0x000121d0) popup_fep_vkb2_window

0x6ed4,	// (0x000139cc) aid_size_cell_vkb2_ParamLimits

0x6ed4,	// (0x000139cc) aid_size_cell_vkb2

0x6f28,	// (0x00013a20) popup_fep_vkb2_window_g1_ParamLimits

0x6f28,	// (0x00013a20) popup_fep_vkb2_window_g1

0x6f70,	// (0x00013a68) vkb2_area_bottom_pane_ParamLimits

0x6f70,	// (0x00013a68) vkb2_area_bottom_pane

0x6fbc,	// (0x00013ab4) vkb2_area_keypad_pane_ParamLimits

0x6fbc,	// (0x00013ab4) vkb2_area_keypad_pane

0x6ffe,	// (0x00013af6) vkb2_area_top_pane_ParamLimits

0x6ffe,	// (0x00013af6) vkb2_area_top_pane

0x7078,	// (0x00013b70) vkb2_top_entry_pane_ParamLimits

0x7078,	// (0x00013b70) vkb2_top_entry_pane

0x70a2,	// (0x00013b9a) vkb2_top_grid_left_pane_ParamLimits

0x70a2,	// (0x00013b9a) vkb2_top_grid_left_pane

0x70c0,	// (0x00013bb8) vkb2_top_grid_right_pane_ParamLimits

0x70c0,	// (0x00013bb8) vkb2_top_grid_right_pane

0x70de,	// (0x00013bd6) vkb2_cell_keypad_pane_ParamLimits

0x70de,	// (0x00013bd6) vkb2_cell_keypad_pane

0x71af,	// (0x00013ca7) vkb2_area_bottom_grid_pane_ParamLimits

0x71af,	// (0x00013ca7) vkb2_area_bottom_grid_pane

0x71d5,	// (0x00013ccd) vkb2_area_bottom_pane_g1_ParamLimits

0x71d5,	// (0x00013ccd) vkb2_area_bottom_pane_g1

0x71f9,	// (0x00013cf1) vkb2_area_bottom_pane_g2_ParamLimits

0x71f9,	// (0x00013cf1) vkb2_area_bottom_pane_g2

0x7227,	// (0x00013d1f) vkb2_area_bottom_pane_g3_ParamLimits

0x7227,	// (0x00013d1f) vkb2_area_bottom_pane_g3

0x0002,

0xfd97,	// (0x0001c88f) vkb2_area_bottom_pane_g_ParamLimits

0xfd97,	// (0x0001c88f) vkb2_area_bottom_pane_g

0x7288,	// (0x00013d80) vkb2_top_cell_left_pane_ParamLimits

0x7288,	// (0x00013d80) vkb2_top_cell_left_pane

0xe16c,	// (0x0001ac64) vkb2_top_entry_pane_g1_ParamLimits

0xe16c,	// (0x0001ac64) vkb2_top_entry_pane_g1

0xe17a,	// (0x0001ac72) vkb2_top_entry_pane_t1_ParamLimits

0xe17a,	// (0x0001ac72) vkb2_top_entry_pane_t1

0xe1ac,	// (0x0001aca4) vkb2_top_entry_pane_t2_ParamLimits

0xe1ac,	// (0x0001aca4) vkb2_top_entry_pane_t2

0xe1de,	// (0x0001acd6) vkb2_top_entry_pane_t3_ParamLimits

0xe1de,	// (0x0001acd6) vkb2_top_entry_pane_t3

0x0002,

0xfd9e,	// (0x0001c896) vkb2_top_entry_pane_t_ParamLimits

0xfd9e,	// (0x0001c896) vkb2_top_entry_pane_t

0x72d5,	// (0x00013dcd) vkb2_top_grid_right_pane_g1_ParamLimits

0x72d5,	// (0x00013dcd) vkb2_top_grid_right_pane_g1

0x72eb,	// (0x00013de3) vkb2_top_grid_right_pane_g2_ParamLimits

0x72eb,	// (0x00013de3) vkb2_top_grid_right_pane_g2

0x7303,	// (0x00013dfb) vkb2_top_grid_right_pane_g3_ParamLimits

0x7303,	// (0x00013dfb) vkb2_top_grid_right_pane_g3

0x731b,	// (0x00013e13) vkb2_top_grid_right_pane_g4_ParamLimits

0x731b,	// (0x00013e13) vkb2_top_grid_right_pane_g4

0x0003,

0xfda5,	// (0x0001c89d) vkb2_top_grid_right_pane_g_ParamLimits

0xfda5,	// (0x0001c89d) vkb2_top_grid_right_pane_g

0x7331,	// (0x00013e29) vkb2_top_cell_left_pane_g1

0x7348,	// (0x00013e40) vkb2_cell_keypad_pane_g1_ParamLimits

0x7348,	// (0x00013e40) vkb2_cell_keypad_pane_g1

0xe202,	// (0x0001acfa) vkb2_cell_keypad_pane_t1_ParamLimits

0xe202,	// (0x0001acfa) vkb2_cell_keypad_pane_t1

0x7356,	// (0x00013e4e) vkb2_cell_bottom_grid_pane_ParamLimits

0x7356,	// (0x00013e4e) vkb2_cell_bottom_grid_pane

0x738f,	// (0x00013e87) vkb2_cell_bottom_grid_pane_g1

0xddad,	// (0x0001a8a5) aid_call2_pane_cp02

0xddb5,	// (0x0001a8ad) aid_call_pane_cp02

0xddbd,	// (0x0001a8b5) clock_digital_number_pane_cp10

0xddc5,	// (0x0001a8bd) clock_digital_number_pane_cp11

0xddcd,	// (0x0001a8c5) clock_digital_number_pane_cp12

0xddd5,	// (0x0001a8cd) clock_digital_number_pane_cp13

0xdddd,	// (0x0001a8d5) clock_digital_separator_pane_cp10

0x485b,	// (0x00011353) popup_clock_digital_analogue_window_cp2_g1

0x485b,	// (0x00011353) popup_clock_digital_analogue_window_cp2_g2

0xdde5,	// (0x0001a8dd) popup_clock_digital_analogue_window_cp2_g3

0x485b,	// (0x00011353) popup_clock_digital_analogue_window_cp2_g4

0xdde5,	// (0x0001a8dd) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd5a,	// (0x0001c852) popup_clock_digital_analogue_window_cp2_g

0xdded,	// (0x0001a8e5) popup_clock_digital_analogue_window_cp2_t1

0xddfb,	// (0x0001a8f3) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd65,	// (0x0001c85d) popup_clock_digital_analogue_window_cp2_t

0xbf5d,	// (0x00018a55) clock_digital_number_pane_cp10_g1

0xbf5d,	// (0x00018a55) clock_digital_number_pane_cp10_g2

0x0001,

0xfb48,	// (0x0001c640) clock_digital_number_pane_cp10_g

0xbf5d,	// (0x00018a55) clock_digital_separator_pane_cp10_g1

0xbf5d,	// (0x00018a55) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb48,	// (0x0001c640) clock_digital_separator_pane_cp10_g

0xdc2a,	// (0x0001a722) uniindi_top_pane_g3

0xdc3b,	// (0x0001a733) uniindi_top_pane_g4

0x7169,	// (0x00013c61) vkb2_row_keypad_pane_ParamLimits

0x7169,	// (0x00013c61) vkb2_row_keypad_pane

0x73ab,	// (0x00013ea3) vkb2_cell_t_keypad_pane_ParamLimits

0x73ab,	// (0x00013ea3) vkb2_cell_t_keypad_pane

0x73bb,	// (0x00013eb3) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x73bb,	// (0x00013eb3) vkb2_cell_t_keypad_pane_cp08

0x73ce,	// (0x00013ec6) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x73ce,	// (0x00013ec6) vkb2_cell_t_keypad_pane_cp09

0x73e2,	// (0x00013eda) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x73e2,	// (0x00013eda) vkb2_cell_t_keypad_pane_cp01

0x73f3,	// (0x00013eeb) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x73f3,	// (0x00013eeb) vkb2_cell_t_keypad_pane_cp02

0x7404,	// (0x00013efc) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x7404,	// (0x00013efc) vkb2_cell_t_keypad_pane_cp03

0x7415,	// (0x00013f0d) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x7415,	// (0x00013f0d) vkb2_cell_t_keypad_pane_cp04

0x7426,	// (0x00013f1e) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x7426,	// (0x00013f1e) vkb2_cell_t_keypad_pane_cp05

0x7437,	// (0x00013f2f) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x7437,	// (0x00013f2f) vkb2_cell_t_keypad_pane_cp06

0x7448,	// (0x00013f40) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x7448,	// (0x00013f40) vkb2_cell_t_keypad_pane_cp07

0x7459,	// (0x00013f51) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x7459,	// (0x00013f51) vkb2_cell_t_keypad_pane_cp10

0x6c0f,	// (0x00013707) vkb2_cell_t_keypad_pane_g1

0xe219,	// (0x0001ad11) vkb2_cell_t_keypad_pane_t1

0x55dd,	// (0x000120d5) popup_grid_graphic2_window

0xe22b,	// (0x0001ad23) aid_size_cell_graphic2_ParamLimits

0xe22b,	// (0x0001ad23) aid_size_cell_graphic2

0xe263,	// (0x0001ad5b) bg_popup_window_pane_cp21_ParamLimits

0xe263,	// (0x0001ad5b) bg_popup_window_pane_cp21

0xe271,	// (0x0001ad69) graphic2_pages_pane_ParamLimits

0xe271,	// (0x0001ad69) graphic2_pages_pane

0xe2b7,	// (0x0001adaf) grid_graphic2_control_pane_ParamLimits

0xe2b7,	// (0x0001adaf) grid_graphic2_control_pane

0xe2f5,	// (0x0001aded) grid_graphic2_pane_ParamLimits

0xe2f5,	// (0x0001aded) grid_graphic2_pane

0xe369,	// (0x0001ae61) cell_graphic2_pane

0x55dd,	// (0x000120d5) main_comp_mode_pane

0xd42a,	// (0x00019f22) list_ai3_gene_pane_ParamLimits

0xd872,	// (0x0001a36a) bg_popup_window_pane_cp19_ParamLimits

0xd87e,	// (0x0001a376) bg_touch_area_indi_pane_ParamLimits

0xd87e,	// (0x0001a376) bg_touch_area_indi_pane

0xd894,	// (0x0001a38c) bg_touch_area_indi_pane_cp01_ParamLimits

0xd894,	// (0x0001a38c) bg_touch_area_indi_pane_cp01

0xd8aa,	// (0x0001a3a2) bg_touch_area_indi_pane_cp02_ParamLimits

0xd8aa,	// (0x0001a3a2) bg_touch_area_indi_pane_cp02

0xd8c2,	// (0x0001a3ba) bg_touch_area_indi_pane_cp03_ParamLimits

0xd8c2,	// (0x0001a3ba) bg_touch_area_indi_pane_cp03

0xd8dc,	// (0x0001a3d4) popup_slider_window_g1_ParamLimits

0xd8f8,	// (0x0001a3f0) popup_slider_window_g2_ParamLimits

0xd914,	// (0x0001a40c) popup_slider_window_g3_ParamLimits

0xfcef,	// (0x0001c7e7) popup_slider_window_g_ParamLimits

0xd970,	// (0x0001a468) popup_slider_window_t1_ParamLimits

0xd9e4,	// (0x0001a4dc) small_volume_slider_vertical_pane_ParamLimits

0xe369,	// (0x0001ae61) cell_graphic2_pane_ParamLimits

0xe3b7,	// (0x0001aeaf) bg_button_pane_cp10_ParamLimits

0xe3b7,	// (0x0001aeaf) bg_button_pane_cp10

0xe3ca,	// (0x0001aec2) bg_button_pane_cp11_ParamLimits

0xe3ca,	// (0x0001aec2) bg_button_pane_cp11

0xe3dd,	// (0x0001aed5) graphic2_pages_pane_g1_ParamLimits

0xe3dd,	// (0x0001aed5) graphic2_pages_pane_g1

0xe3f8,	// (0x0001aef0) graphic2_pages_pane_g2_ParamLimits

0xe3f8,	// (0x0001aef0) graphic2_pages_pane_g2

0x0001,

0xfdb3,	// (0x0001c8ab) graphic2_pages_pane_g_ParamLimits

0xfdb3,	// (0x0001c8ab) graphic2_pages_pane_g

0xe410,	// (0x0001af08) graphic2_pages_pane_t1_ParamLimits

0xe410,	// (0x0001af08) graphic2_pages_pane_t1

0xe428,	// (0x0001af20) cell_graphic2_control_pane_ParamLimits

0xe428,	// (0x0001af20) cell_graphic2_control_pane

0xe449,	// (0x0001af41) cell_graphic2_pane_g1_ParamLimits

0xe449,	// (0x0001af41) cell_graphic2_pane_g1

0xe456,	// (0x0001af4e) cell_graphic2_pane_g2_ParamLimits

0xe456,	// (0x0001af4e) cell_graphic2_pane_g2

0xe463,	// (0x0001af5b) cell_graphic2_pane_g3_ParamLimits

0xe463,	// (0x0001af5b) cell_graphic2_pane_g3

0xe470,	// (0x0001af68) cell_graphic2_pane_g4_ParamLimits

0xe470,	// (0x0001af68) cell_graphic2_pane_g4

0xe47d,	// (0x0001af75) cell_graphic2_pane_g5_ParamLimits

0xe47d,	// (0x0001af75) cell_graphic2_pane_g5

0x0004,

0xfdb8,	// (0x0001c8b0) cell_graphic2_pane_g_ParamLimits

0xfdb8,	// (0x0001c8b0) cell_graphic2_pane_g

0xe498,	// (0x0001af90) cell_graphic2_pane_t1_ParamLimits

0xe498,	// (0x0001af90) cell_graphic2_pane_t1

0x9568,	// (0x00016060) grid_highlight_pane_cp11_ParamLimits

0x9568,	// (0x00016060) grid_highlight_pane_cp11

0x3f1d,	// (0x00010a15) bg_button_pane_cp05

0xe4c1,	// (0x0001afb9) cell_graphic2_control_pane_g1

0xbf5d,	// (0x00018a55) bg_touch_area_indi_pane_g1

0xe4e9,	// (0x0001afe1) aid_cmod_rocker_key_size

0xe4f3,	// (0x0001afeb) aid_cmode_itu_key_size

0xe4fd,	// (0x0001aff5) main_cmode_video_pane

0xe507,	// (0x0001afff) main_comp_mode_itu_pane

0xe513,	// (0x0001b00b) main_comp_mode_rocker_pane

0xe51f,	// (0x0001b017) cell_cmode_rocker_pane_ParamLimits

0xe51f,	// (0x0001b017) cell_cmode_rocker_pane

0xe531,	// (0x0001b029) cell_cmode_itu_pane_ParamLimits

0xe531,	// (0x0001b029) cell_cmode_itu_pane

0x4227,	// (0x00010d1f) bg_button_pane_cp06_ParamLimits

0x4227,	// (0x00010d1f) bg_button_pane_cp06

0xc1cd,	// (0x00018cc5) cell_cmode_rocker_pane_g1_ParamLimits

0xc1cd,	// (0x00018cc5) cell_cmode_rocker_pane_g1

0xda88,	// (0x0001a580) cell_cmode_rocker_pane_g2_ParamLimits

0xda88,	// (0x0001a580) cell_cmode_rocker_pane_g2

0x0001,

0xfdc8,	// (0x0001c8c0) cell_cmode_rocker_pane_g_ParamLimits

0xfdc8,	// (0x0001c8c0) cell_cmode_rocker_pane_g

0x3bda,	// (0x000106d2) bg_button_pane_cp07

0xe546,	// (0x0001b03e) cell_cmode_itu_pane_g1

0xe54f,	// (0x0001b047) cell_cmode_itu_pane_t1

0xe55d,	// (0x0001b055) cell_cmode_itu_pane_t2

0x0001,

0xfdcd,	// (0x0001c8c5) cell_cmode_itu_pane_t

0xdcac,	// (0x0001a7a4) aid_touch_ctrl_left

0xdcb4,	// (0x0001a7ac) aid_touch_ctrl_right

0x3bda,	// (0x000106d2) compa_mode_pane

0xe56b,	// (0x0001b063) aid_cmod_rocker_key_size_cp

0xe575,	// (0x0001b06d) aid_cmode_itu_key_size_cp

0xe57f,	// (0x0001b077) compa_mode_pane_g1

0xe587,	// (0x0001b07f) compa_mode_pane_g2

0xe58f,	// (0x0001b087) compa_mode_pane_g3

0x0002,

0xfdd2,	// (0x0001c8ca) compa_mode_pane_g

0xe597,	// (0x0001b08f) main_comp_mode_itu_pane_cp

0xe59f,	// (0x0001b097) main_comp_mode_rocker_pane_cp

0xe5a7,	// (0x0001b09f) cell_cmode_itu_pane_cp_ParamLimits

0xe5a7,	// (0x0001b09f) cell_cmode_itu_pane_cp

0xe5bc,	// (0x0001b0b4) cell_cmode_rocker_pane_cp_ParamLimits

0xe5bc,	// (0x0001b0b4) cell_cmode_rocker_pane_cp

0x4227,	// (0x00010d1f) bg_button_pane_cp06_cp_ParamLimits

0x4227,	// (0x00010d1f) bg_button_pane_cp06_cp

0xc1cd,	// (0x00018cc5) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc1cd,	// (0x00018cc5) cell_cmode_rocker_pane_g1_cp

0xbf5d,	// (0x00018a55) cell_cmode_rocker_pane_g2_cp

0x3bda,	// (0x000106d2) bg_button_pane_cp07_cp

0xe5ce,	// (0x0001b0c6) cell_cmode_itu_pane_g1_cp

0xe5d7,	// (0x0001b0cf) cell_cmode_itu_pane_t1_cp

0xe5d7,	// (0x0001b0cf) cell_cmode_itu_pane_t2_cp

0xaa63,	// (0x0001755b) settings_code_pane_cp2

0x3dd9,	// (0x000108d1) bg_popup_window_pane_cp3_ParamLimits

0x4036,	// (0x00010b2e) heading_pane_cp3_ParamLimits

0x4042,	// (0x00010b3a) listscroll_popup_graphic_pane_ParamLimits

0x69b8,	// (0x000134b0) fep_hwr_aid_pane_ParamLimits

0x6e2f,	// (0x00013927) aid_touch_sctrl_top_ParamLimits

0x6e4a,	// (0x00013942) sctrl_sk_top_pane_g1_ParamLimits

0x6c0f,	// (0x00013707) sctrl_sk_top_pane_g2_ParamLimits

0xfd08,	// (0x0001c800) sctrl_sk_top_pane_g_ParamLimits

0x6e57,	// (0x0001394f) sctrl_sk_top_pane_t1_ParamLimits

0x6e2f,	// (0x00013927) aid_touch_sctrl_bottom_ParamLimits

0x6e57,	// (0x0001394f) sctrl_sk_bottom_pane_t1_ParamLimits

0xdbf6,	// (0x0001a6ee) aid_area_touch_clock

0x7040,	// (0x00013b38) aid_vkb2_area_top_pane_cell_ParamLimits

0x7040,	// (0x00013b38) aid_vkb2_area_top_pane_cell

0x718b,	// (0x00013c83) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x718b,	// (0x00013c83) aid_vkb2_area_bottom_pane_cell

0xe164,	// (0x0001ac5c) popup_char_count_window

0xe5e5,	// (0x0001b0dd) popup_char_count_window_g1

0xe5ee,	// (0x0001b0e6) popup_char_count_window_g2

0xe5f7,	// (0x0001b0ef) popup_char_count_window_g3

0x0002,

0xfdd9,	// (0x0001c8d1) popup_char_count_window_g

0xe600,	// (0x0001b0f8) popup_char_count_window_t1

0x6f06,	// (0x000139fe) popup_fep_char_preview_window_ParamLimits

0x6f06,	// (0x000139fe) popup_fep_char_preview_window

0x705e,	// (0x00013b56) vkb2_top_candi_pane_ParamLimits

0x705e,	// (0x00013b56) vkb2_top_candi_pane

0xe60e,	// (0x0001b106) cell_vkb2_top_candi_pane_ParamLimits

0xe60e,	// (0x0001b106) cell_vkb2_top_candi_pane

0x746e,	// (0x00013f66) bg_popup_fep_char_preview_window_ParamLimits

0x746e,	// (0x00013f66) bg_popup_fep_char_preview_window

0x747c,	// (0x00013f74) popup_fep_char_preview_window_t1_ParamLimits

0x747c,	// (0x00013f74) popup_fep_char_preview_window_t1

0xe65b,	// (0x0001b153) bg_popup_fep_char_preview_window_g1

0xe663,	// (0x0001b15b) bg_popup_fep_char_preview_window_g2

0xe66b,	// (0x0001b163) bg_popup_fep_char_preview_window_g3

0xe673,	// (0x0001b16b) bg_popup_fep_char_preview_window_g4

0xe67b,	// (0x0001b173) bg_popup_fep_char_preview_window_g5

0x74b6,	// (0x00013fae) bg_popup_fep_char_preview_window_g6

0xe683,	// (0x0001b17b) bg_popup_fep_char_preview_window_g7

0xe68b,	// (0x0001b183) bg_popup_fep_char_preview_window_g8

0xe693,	// (0x0001b18b) bg_popup_fep_char_preview_window_g9

0x0008,

0xfde0,	// (0x0001c8d8) bg_popup_fep_char_preview_window_g

0x6c0f,	// (0x00013707) cell_vkb2_top_candi_pane_g1_ParamLimits

0x6c0f,	// (0x00013707) cell_vkb2_top_candi_pane_g1

0x6c1d,	// (0x00013715) cell_vkb2_top_candi_pane_g2_ParamLimits

0x6c1d,	// (0x00013715) cell_vkb2_top_candi_pane_g2

0xd5c1,	// (0x0001a0b9) cell_vkb2_top_candi_pane_g3_ParamLimits

0xd5c1,	// (0x0001a0b9) cell_vkb2_top_candi_pane_g3

0x74be,	// (0x00013fb6) cell_vkb2_top_candi_pane_g4_ParamLimits

0x74be,	// (0x00013fb6) cell_vkb2_top_candi_pane_g4

0xc87e,	// (0x00019376) cell_vkb2_top_candi_pane_g5_ParamLimits

0xc87e,	// (0x00019376) cell_vkb2_top_candi_pane_g5

0x74df,	// (0x00013fd7) cell_vkb2_top_candi_pane_g6_ParamLimits

0x74df,	// (0x00013fd7) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdf3,	// (0x0001c8eb) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdf3,	// (0x0001c8eb) cell_vkb2_top_candi_pane_g

0x74ed,	// (0x00013fe5) cell_vkb2_top_candi_pane_t1

0x67d0,	// (0x000132c8) aid_size_touch_slider_mark_ParamLimits

0x67d0,	// (0x000132c8) aid_size_touch_slider_mark

0xe2a7,	// (0x0001ad9f) grid_graphic2_catg_pane_ParamLimits

0xe2a7,	// (0x0001ad9f) grid_graphic2_catg_pane

0xe345,	// (0x0001ae3d) popup_grid_graphic2_window_t1_ParamLimits

0xe345,	// (0x0001ae3d) popup_grid_graphic2_window_t1

0xe357,	// (0x0001ae4f) popup_grid_graphic2_window_t2_ParamLimits

0xe357,	// (0x0001ae4f) popup_grid_graphic2_window_t2

0x0001,

0xfdae,	// (0x0001c8a6) popup_grid_graphic2_window_t_ParamLimits

0xfdae,	// (0x0001c8a6) popup_grid_graphic2_window_t

0x3f1d,	// (0x00010a15) bg_button_pane_cp05_ParamLimits

0xe4c1,	// (0x0001afb9) cell_graphic2_control_pane_g1_ParamLimits

0xe69b,	// (0x0001b193) cell_graphic2_catg_pane_ParamLimits

0xe69b,	// (0x0001b193) cell_graphic2_catg_pane

0x3bda,	// (0x000106d2) bg_button_pane_cp12

0xe6ad,	// (0x0001b1a5) cell_graphic2_catg_pane_g1

0xdbc2,	// (0x0001a6ba) cell_tb_ext_pane_t1_ParamLimits

0x72a8,	// (0x00013da0) vkb2_top_cell_right_narrow_pane_ParamLimits

0x72a8,	// (0x00013da0) vkb2_top_cell_right_narrow_pane

0x72c0,	// (0x00013db8) vkb2_top_cell_right_wide_pane_ParamLimits

0x72c0,	// (0x00013db8) vkb2_top_cell_right_wide_pane

0x69aa,	// (0x000134a2) bg_vkb2_func_pane_ParamLimits

0x69aa,	// (0x000134a2) bg_vkb2_func_pane

0x7331,	// (0x00013e29) vkb2_top_cell_left_pane_g1_ParamLimits

0x69aa,	// (0x000134a2) bg_vkb2_fuc_pane_cp03_ParamLimits

0x69aa,	// (0x000134a2) bg_vkb2_fuc_pane_cp03

0x738f,	// (0x00013e87) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x9444,	// (0x00015f3c) bg_vkb2_func_pane_g1

0x944c,	// (0x00015f44) bg_vkb2_func_pane_g2

0x945c,	// (0x00015f54) bg_vkb2_func_pane_g3

0x9454,	// (0x00015f4c) bg_vkb2_func_pane_g4

0x9464,	// (0x00015f5c) bg_vkb2_func_pane_g5

0x946c,	// (0x00015f64) bg_vkb2_func_pane_g6

0x9474,	// (0x00015f6c) bg_vkb2_func_pane_g7

0x947c,	// (0x00015f74) bg_vkb2_func_pane_g8

0x943c,	// (0x00015f34) bg_vkb2_func_pane_g9

0x0008,

0xfe00,	// (0x0001c8f8) bg_vkb2_func_pane_g

0x69aa,	// (0x000134a2) bg_vkb2_fuc_pane_cp01_ParamLimits

0x69aa,	// (0x000134a2) bg_vkb2_fuc_pane_cp01

0x7331,	// (0x00013e29) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x7331,	// (0x00013e29) vkb2_top_cell_right_wide_pane_g1

0x69aa,	// (0x000134a2) bg_vkb2_fuc_pane_cp02_ParamLimits

0x69aa,	// (0x000134a2) bg_vkb2_fuc_pane_cp02

0x738f,	// (0x00013e87) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x738f,	// (0x00013e87) vkb2_top_cell_right_narrow_pane_g1

0xd7f4,	// (0x0001a2ec) aid_touch_area_decrease_ParamLimits

0xd7f4,	// (0x0001a2ec) aid_touch_area_decrease

0xd814,	// (0x0001a30c) aid_touch_area_increase_ParamLimits

0xd814,	// (0x0001a30c) aid_touch_area_increase

0xd820,	// (0x0001a318) aid_touch_area_mute_ParamLimits

0xd820,	// (0x0001a318) aid_touch_area_mute

0xd844,	// (0x0001a33c) aid_touch_area_slider_ParamLimits

0xd844,	// (0x0001a33c) aid_touch_area_slider

0xd930,	// (0x0001a428) popup_slider_window_g4_ParamLimits

0xd930,	// (0x0001a428) popup_slider_window_g4

0xd93c,	// (0x0001a434) popup_slider_window_g5_ParamLimits

0xd93c,	// (0x0001a434) popup_slider_window_g5

0xd95e,	// (0x0001a456) popup_slider_window_g6_ParamLimits

0xd95e,	// (0x0001a456) popup_slider_window_g6

0xd99e,	// (0x0001a496) popup_slider_window_t2_ParamLimits

0xd99e,	// (0x0001a496) popup_slider_window_t2

0x0001,

0xfcfc,	// (0x0001c7f4) popup_slider_window_t_ParamLimits

0xfcfc,	// (0x0001c7f4) popup_slider_window_t

0xd9b6,	// (0x0001a4ae) slider_pane_ParamLimits

0xd9b6,	// (0x0001a4ae) slider_pane

0xe6b6,	// (0x0001b1ae) slider_pane_g1_ParamLimits

0xe6b6,	// (0x0001b1ae) slider_pane_g1

0xe6ca,	// (0x0001b1c2) slider_pane_g2_ParamLimits

0xe6ca,	// (0x0001b1c2) slider_pane_g2

0xe6e0,	// (0x0001b1d8) slider_pane_g3_ParamLimits

0xe6e0,	// (0x0001b1d8) slider_pane_g3

0x0003,

0xfe13,	// (0x0001c90b) slider_pane_g_ParamLimits

0xfe13,	// (0x0001c90b) slider_pane_g

0x6387,	// (0x00012e7f) popup_tb_float_extension_window_ParamLimits

0x6387,	// (0x00012e7f) popup_tb_float_extension_window

0xe70c,	// (0x0001b204) aid_size_cell_tb_float_ext

0x3bda,	// (0x000106d2) bg_popup_sub_window_cp28

0xe718,	// (0x0001b210) grid_tb_float_ext_pane

0xe722,	// (0x0001b21a) cell_tb_float_ext_pane_ParamLimits

0xe722,	// (0x0001b21a) cell_tb_float_ext_pane

0xe73c,	// (0x0001b234) cell_tb_float_ext_pane_g1

0xe745,	// (0x0001b23d) grid_highlight_pane_cp12

0x6af9,	// (0x000135f1) cell_last_hwr_side_pane_ParamLimits

0x6af9,	// (0x000135f1) cell_last_hwr_side_pane

0xbf5d,	// (0x00018a55) cell_last_hwr_side_pane_g1

0xe74e,	// (0x0001b246) cell_last_hwr_side_pane_g2

0x0001,

0xfe1c,	// (0x0001c914) cell_last_hwr_side_pane_g

0x7257,	// (0x00013d4f) vkb2_area_bottom_space_btn_pane_ParamLimits

0x7257,	// (0x00013d4f) vkb2_area_bottom_space_btn_pane

0x6c0f,	// (0x00013707) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xe219,	// (0x0001ad11) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x74ed,	// (0x00013fe5) cell_vkb2_top_candi_pane_t1_ParamLimits

0x750c,	// (0x00014004) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x750c,	// (0x00014004) vkb2_area_bottom_space_btn_pane_g1

0x7546,	// (0x0001403e) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x7546,	// (0x0001403e) vkb2_area_bottom_space_btn_pane_g2

0x757c,	// (0x00014074) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x757c,	// (0x00014074) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe21,	// (0x0001c919) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe21,	// (0x0001c919) vkb2_area_bottom_space_btn_pane_g

0x6a6d,	// (0x00013565) cel_fep_hwr_func_pane_ParamLimits

0x6a6d,	// (0x00013565) cel_fep_hwr_func_pane

0x6aa9,	// (0x000135a1) cell_hwr_side_button_pane_ParamLimits

0x6aa9,	// (0x000135a1) cell_hwr_side_button_pane

0xdbf6,	// (0x0001a6ee) aid_area_touch_clock_ParamLimits

0x3f1d,	// (0x00010a15) bg_uniindi_top_pane_ParamLimits

0xdc08,	// (0x0001a700) uniindi_top_pane_g1_ParamLimits

0xdc1e,	// (0x0001a716) uniindi_top_pane_g2_ParamLimits

0xdc2a,	// (0x0001a722) uniindi_top_pane_g3_ParamLimits

0xdc3b,	// (0x0001a733) uniindi_top_pane_g4_ParamLimits

0xfd34,	// (0x0001c82c) uniindi_top_pane_g_ParamLimits

0xdc48,	// (0x0001a740) uniindi_top_pane_t1_ParamLimits

0x3f1d,	// (0x00010a15) bg_vkb2_func_pane_cp01_ParamLimits

0x3f1d,	// (0x00010a15) bg_vkb2_func_pane_cp01

0xe757,	// (0x0001b24f) cel_fep_hwr_func_pane_g1_ParamLimits

0xe757,	// (0x0001b24f) cel_fep_hwr_func_pane_g1

0x3f1d,	// (0x00010a15) bg_vkb2_func_pane_cp02_ParamLimits

0x3f1d,	// (0x00010a15) bg_vkb2_func_pane_cp02

0xe757,	// (0x0001b24f) cell_hwr_side_button_pane_g1_ParamLimits

0xe757,	// (0x0001b24f) cell_hwr_side_button_pane_g1

0x929e,	// (0x00015d96) status_pane_g4_ParamLimits

0x929e,	// (0x00015d96) status_pane_g4

0x92b8,	// (0x00015db0) status_pane_t1

0xbc92,	// (0x0001878a) form2_midp_gauge_slider_cont_pane

0xbc9a,	// (0x00018792) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbcac,	// (0x000187a4) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbcbe,	// (0x000187b6) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfafb,	// (0x0001c5f3) form2_midp_gauge_slider_pane_t_ParamLimits

0xbcd0,	// (0x000187c8) form2_midp_slider_pane_ParamLimits

0x6ec6,	// (0x000139be) aid_size_cell_func_vkb2_ParamLimits

0x6ec6,	// (0x000139be) aid_size_cell_func_vkb2

0xe6f8,	// (0x0001b1f0) slider_pane_g4_ParamLimits

0xe6f8,	// (0x0001b1f0) slider_pane_g4

0x75c6,	// (0x000140be) form2_midp_gauge_slider_pane_t2_cp01

0x75d4,	// (0x000140cc) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x75d4,	// (0x000140cc) form2_midp_gauge_slider_pane_t3_cp01

0x75f1,	// (0x000140e9) form2_midp_slider_pane_cp01

0x3bda,	// (0x000106d2) navi_smil_pane

0xe790,	// (0x0001b288) navi_smil_pane_g1

0xe798,	// (0x0001b290) navi_smil_pane_t1

0xe765,	// (0x0001b25d) form2_midp_slider_pane_g1

0xe76e,	// (0x0001b266) form2_midp_slider_pane_g2

0xe776,	// (0x0001b26e) form2_midp_slider_pane_g3

0xe765,	// (0x0001b25d) form2_midp_slider_pane_g4

0xe77e,	// (0x0001b276) form2_midp_slider_pane_g5

0x0004,

0xfe2a,	// (0x0001c922) form2_midp_slider_pane_g

0x75b6,	// (0x000140ae) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x75b6,	// (0x000140ae) vkb2_area_bottom_space_btn_pane_g4

0x90cd,	// (0x00015bc5) lc0_navi_pane_ParamLimits

0x90cd,	// (0x00015bc5) lc0_navi_pane

0x9143,	// (0x00015c3b) lc0_stat_indi_pane_ParamLimits

0x9143,	// (0x00015c3b) lc0_stat_indi_pane

0x915a,	// (0x00015c52) ls0_title_pane_ParamLimits

0x915a,	// (0x00015c52) ls0_title_pane

0x4227,	// (0x00010d1f) bg_popup_sub_pane_cp14_ParamLimits

0xdbdd,	// (0x0001a6d5) list_uniindi_pane_ParamLimits

0xdbe9,	// (0x0001a6e1) uniindi_top_pane_ParamLimits

0xdc84,	// (0x0001a77c) list_single_uniindi_pane_g1_ParamLimits

0xdc97,	// (0x0001a78f) list_single_uniindi_pane_t1_ParamLimits

0x75fa,	// (0x000140f2) lc0_stat_clock_pane_ParamLimits

0x75fa,	// (0x000140f2) lc0_stat_clock_pane

0xe7a6,	// (0x0001b29e) lc0_stat_indi_pane_g1_ParamLimits

0xe7a6,	// (0x0001b29e) lc0_stat_indi_pane_g1

0xe7b3,	// (0x0001b2ab) lc0_stat_indi_pane_g2_ParamLimits

0xe7b3,	// (0x0001b2ab) lc0_stat_indi_pane_g2

0x0001,

0xfe35,	// (0x0001c92d) lc0_stat_indi_pane_g_ParamLimits

0xfe35,	// (0x0001c92d) lc0_stat_indi_pane_g

0x7607,	// (0x000140ff) lc0_uni_indicator_pane_ParamLimits

0x7607,	// (0x000140ff) lc0_uni_indicator_pane

0xe7c0,	// (0x0001b2b8) ls0_title_pane_g1_ParamLimits

0xe7c0,	// (0x0001b2b8) ls0_title_pane_g1

0xe7d4,	// (0x0001b2cc) ls0_title_pane_t1_ParamLimits

0xe7d4,	// (0x0001b2cc) ls0_title_pane_t1

0x7614,	// (0x0001410c) lc0_uni_indicator_pane_g1_ParamLimits

0x7614,	// (0x0001410c) lc0_uni_indicator_pane_g1

0xe80a,	// (0x0001b302) lc0_stat_clock_pane_t1

0x55dd,	// (0x000120d5) main_ai5_pane

0xe818,	// (0x0001b310) ai5_sk_pane_ParamLimits

0xe818,	// (0x0001b310) ai5_sk_pane

0xe825,	// (0x0001b31d) cell_ai5_widget_pane_ParamLimits

0xe825,	// (0x0001b31d) cell_ai5_widget_pane

0xe8e1,	// (0x0001b3d9) aid_size_cell_widget_grid

0xe8ef,	// (0x0001b3e7) bg_ai5_widget_pane_ParamLimits

0xe8ef,	// (0x0001b3e7) bg_ai5_widget_pane

0xe963,	// (0x0001b45b) cell_ai5_widget_pane_g2

0xe973,	// (0x0001b46b) cell_ai5_widget_pane_g3

0xe98a,	// (0x0001b482) cell_ai5_widget_pane_g4

0xe996,	// (0x0001b48e) cell_ai5_widget_pane_g5

0xe9a2,	// (0x0001b49a) cell_ai5_widget_pane_g6

0xe9ae,	// (0x0001b4a6) cell_ai5_widget_pane_g7

0xe9f6,	// (0x0001b4ee) cell_ai5_widget_pane_t1_ParamLimits

0xe9f6,	// (0x0001b4ee) cell_ai5_widget_pane_t1

0xea13,	// (0x0001b50b) cell_ai5_widget_pane_t2_ParamLimits

0xea13,	// (0x0001b50b) cell_ai5_widget_pane_t2

0xea2b,	// (0x0001b523) cell_ai5_widget_pane_t3_ParamLimits

0xea2b,	// (0x0001b523) cell_ai5_widget_pane_t3

0xea43,	// (0x0001b53b) cell_ai5_widget_pane_t4_ParamLimits

0xea43,	// (0x0001b53b) cell_ai5_widget_pane_t4

0xea60,	// (0x0001b558) cell_ai5_widget_pane_t5_ParamLimits

0xea60,	// (0x0001b558) cell_ai5_widget_pane_t5

0xea7f,	// (0x0001b577) cell_ai5_widget_pane_t6_ParamLimits

0xea7f,	// (0x0001b577) cell_ai5_widget_pane_t6

0xea91,	// (0x0001b589) cell_ai5_widget_pane_t7_ParamLimits

0xea91,	// (0x0001b589) cell_ai5_widget_pane_t7

0xeaaa,	// (0x0001b5a2) cell_ai5_widget_pane_t8_ParamLimits

0xeaaa,	// (0x0001b5a2) cell_ai5_widget_pane_t8

0x0009,

0xfe4f,	// (0x0001c947) cell_ai5_widget_pane_t_ParamLimits

0xfe4f,	// (0x0001c947) cell_ai5_widget_pane_t

0xeafe,	// (0x0001b5f6) grid_ai5_widget_pane

0x4227,	// (0x00010d1f) highlight_cell_ai5_widget_pane_ParamLimits

0x4227,	// (0x00010d1f) highlight_cell_ai5_widget_pane

0xeb0c,	// (0x0001b604) ai5_sk_left_pane

0xeb16,	// (0x0001b60e) ai5_sk_middle_pane

0xeb20,	// (0x0001b618) ai5_sk_right_pane

0xeb2a,	// (0x0001b622) bg_ai5_widget_pane_g1_ParamLimits

0xeb2a,	// (0x0001b622) bg_ai5_widget_pane_g1

0xeb36,	// (0x0001b62e) bg_ai5_widget_pane_g2_ParamLimits

0xeb36,	// (0x0001b62e) bg_ai5_widget_pane_g2

0xeb42,	// (0x0001b63a) bg_ai5_widget_pane_g3_ParamLimits

0xeb42,	// (0x0001b63a) bg_ai5_widget_pane_g3

0xeb4e,	// (0x0001b646) bg_ai5_widget_pane_g4_ParamLimits

0xeb4e,	// (0x0001b646) bg_ai5_widget_pane_g4

0xeb5a,	// (0x0001b652) bg_ai5_widget_pane_g5_ParamLimits

0xeb5a,	// (0x0001b652) bg_ai5_widget_pane_g5

0xeb66,	// (0x0001b65e) bg_ai5_widget_pane_g6_ParamLimits

0xeb66,	// (0x0001b65e) bg_ai5_widget_pane_g6

0xeb72,	// (0x0001b66a) bg_ai5_widget_pane_g7_ParamLimits

0xeb72,	// (0x0001b66a) bg_ai5_widget_pane_g7

0xeb7e,	// (0x0001b676) bg_ai5_widget_pane_g8_ParamLimits

0xeb7e,	// (0x0001b676) bg_ai5_widget_pane_g8

0xeb8a,	// (0x0001b682) bg_ai5_widget_pane_g9_ParamLimits

0xeb8a,	// (0x0001b682) bg_ai5_widget_pane_g9

0x0008,

0xfe64,	// (0x0001c95c) bg_ai5_widget_pane_g_ParamLimits

0xfe64,	// (0x0001c95c) bg_ai5_widget_pane_g

0xebbc,	// (0x0001b6b4) cell_shortcut_ai5_widget_pane_ParamLimits

0xebbc,	// (0x0001b6b4) cell_shortcut_ai5_widget_pane

0x8bc3,	// (0x000156bb) bg_cell_shortcut_ai5_widget_pane

0xebcd,	// (0x0001b6c5) cell_grid_ai5_widget_pane_g1

0x8bc3,	// (0x000156bb) highlight_cell_shortcut_ai5_widget_pane

0x9444,	// (0x00015f3c) ai5_sk_left_pane_g1

0xebd6,	// (0x0001b6ce) ai5_sk_left_pane_g2

0xebde,	// (0x0001b6d6) ai5_sk_left_pane_g3

0xebe6,	// (0x0001b6de) ai5_sk_left_pane_g4

0x0003,

0xfe77,	// (0x0001c96f) ai5_sk_left_pane_g

0xebee,	// (0x0001b6e6) ai5_sk_left_pane_t1

0x944c,	// (0x00015f44) ai5_sk_right_pane_g1

0xebfc,	// (0x0001b6f4) ai5_sk_right_pane_g2

0xec04,	// (0x0001b6fc) ai5_sk_right_pane_g3

0xec0c,	// (0x0001b704) ai5_sk_right_pane_g4

0x0003,

0xfe80,	// (0x0001c978) ai5_sk_right_pane_g

0xec14,	// (0x0001b70c) ai5_sk_right_pane_t1

0x944c,	// (0x00015f44) ai5_sk_middle_pane_g1

0x9444,	// (0x00015f3c) ai5_sk_middle_pane_g2

0x9464,	// (0x00015f5c) ai5_sk_middle_pane_g3

0xec04,	// (0x0001b6fc) ai5_sk_middle_pane_g4

0xebde,	// (0x0001b6d6) ai5_sk_middle_pane_g5

0xec22,	// (0x0001b71a) ai5_sk_middle_pane_g6

0xec2a,	// (0x0001b722) ai5_sk_middle_pane_g7

0x0006,

0xfe89,	// (0x0001c981) ai5_sk_middle_pane_g

0x8f53,	// (0x00015a4b) aid_touch_area_size_lc0_ParamLimits

0x8f53,	// (0x00015a4b) aid_touch_area_size_lc0

0x6c3e,	// (0x00013736) cell_hwr_candidate_pane_t1_ParamLimits

0x8f6f,	// (0x00015a67) aid_touch_navi_pane

0x9248,	// (0x00015d40) status_dt_navi_pane_ParamLimits

0x9248,	// (0x00015d40) status_dt_navi_pane

0x9255,	// (0x00015d4d) status_dt_sta_pane_ParamLimits

0x9255,	// (0x00015d4d) status_dt_sta_pane

0xec32,	// (0x0001b72a) dt_sta_controll_pane

0xec3f,	// (0x0001b737) dt_sta_indi_pane

0xec50,	// (0x0001b748) dt_sta_title_pane

0x3f1d,	// (0x00010a15) bg_dt_sta_indi_pane_ParamLimits

0x3f1d,	// (0x00010a15) bg_dt_sta_indi_pane

0xec63,	// (0x0001b75b) dt_sta_battery_pane

0xec6b,	// (0x0001b763) dt_sta_indi_pane_g1

0xec74,	// (0x0001b76c) dt_sta_indi_pane_g2

0xec7d,	// (0x0001b775) dt_sta_indi_pane_g3

0x0002,

0xfe98,	// (0x0001c990) dt_sta_indi_pane_g

0xec86,	// (0x0001b77e) dt_sta_signal_pane

0x4227,	// (0x00010d1f) bg_dt_sta_title_pane_ParamLimits

0x4227,	// (0x00010d1f) bg_dt_sta_title_pane

0xa363,	// (0x00016e5b) dt_sta_title_pane_g1

0xec8f,	// (0x0001b787) dt_sta_title_pane_t1_ParamLimits

0xec8f,	// (0x0001b787) dt_sta_title_pane_t1

0x3bda,	// (0x000106d2) bg_dt_sta_control_pane

0xeca4,	// (0x0001b79c) dt_sta_controll_pane_g1

0xecad,	// (0x0001b7a5) bg_dt_sta_title_pane_g1

0xecb6,	// (0x0001b7ae) bg_dt_sta_title_pane_g2

0xecbf,	// (0x0001b7b7) bg_dt_sta_title_pane_g3

0x0002,

0xfe9f,	// (0x0001c997) bg_dt_sta_title_pane_g

0xbf5d,	// (0x00018a55) bg_dt_sta_indi_pane_g1

0xecc8,	// (0x0001b7c0) dt_sta_signal_pane_g1

0xecd0,	// (0x0001b7c8) dt_sta_signal_pane_g2

0x0001,

0xfea6,	// (0x0001c99e) dt_sta_signal_pane_g

0xecd8,	// (0x0001b7d0) dt_sta_battery_pane_g1

0xece1,	// (0x0001b7d9) dt_sta_battery_pane_t1

0xbf5d,	// (0x00018a55) bg_dt_sta_control_pane_g1

0x4972,	// (0x0001146a) fep_china_uni_eep_pane

0x497a,	// (0x00011472) fep_china_uni_entry_pane_ParamLimits

0x498a,	// (0x00011482) popup_fep_china_uni_window_g1_ParamLimits

0x499a,	// (0x00011492) popup_fep_china_uni_window_g2_ParamLimits

0x499a,	// (0x00011492) popup_fep_china_uni_window_g2

0x0001,

0xf718,	// (0x0001c210) popup_fep_china_uni_window_g_ParamLimits

0xf718,	// (0x0001c210) popup_fep_china_uni_window_g

0xecf0,	// (0x0001b7e8) fep_china_uni_eep_pane_g1

0xecf8,	// (0x0001b7f0) fep_china_uni_eep_pane_t1

0xe787,	// (0x0001b27f) aid_touch_area_size_smil_player

0x90c5,	// (0x00015bbd) lc0_clock_pane

0x92ac,	// (0x00015da4) status_pane_g5_ParamLimits

0x92ac,	// (0x00015da4) status_pane_g5

0x6048,	// (0x00012b40) popup_keymap_window

0x926a,	// (0x00015d62) status_icon_pane

0xe973,	// (0x0001b46b) cell_ai5_widget_pane_g3_ParamLimits

0xe98a,	// (0x0001b482) cell_ai5_widget_pane_g4_ParamLimits

0xe996,	// (0x0001b48e) cell_ai5_widget_pane_g5_ParamLimits

0xe9ba,	// (0x0001b4b2) cell_ai5_widget_pane_g8_ParamLimits

0xe9ba,	// (0x0001b4b2) cell_ai5_widget_pane_g8

0xe9ce,	// (0x0001b4c6) cell_ai5_widget_pane_g9_ParamLimits

0xe9ce,	// (0x0001b4c6) cell_ai5_widget_pane_g9

0xe9e2,	// (0x0001b4da) cell_ai5_widget_pane_g10_ParamLimits

0xe9e2,	// (0x0001b4da) cell_ai5_widget_pane_g10

0xed07,	// (0x0001b7ff) status_icon_pane_g1

0x3bda,	// (0x000106d2) bg_popup_sub_pane_cp13

0xed0f,	// (0x0001b807) popup_keymap_window_t1

0x8e88,	// (0x00015980) control_pane_g6_ParamLimits

0x8e88,	// (0x00015980) control_pane_g6

0x8e95,	// (0x0001598d) control_pane_g7_ParamLimits

0x8e95,	// (0x0001598d) control_pane_g7

0x8ea2,	// (0x0001599a) control_pane_g8_ParamLimits

0x8ea2,	// (0x0001599a) control_pane_g8

0xec32,	// (0x0001b72a) dt_sta_controll_pane_ParamLimits

0xec3f,	// (0x0001b737) dt_sta_indi_pane_ParamLimits

0xec50,	// (0x0001b748) dt_sta_title_pane_ParamLimits

0x40f0,	// (0x00010be8) aid_size_touch_scroll_bar_cale

0x56b6,	// (0x000121ae) popup_discreet_window_ParamLimits

0x56b6,	// (0x000121ae) popup_discreet_window

0x5730,	// (0x00012228) popup_sk_window

0x9ba7,	// (0x0001669f) bg_popup_sub_pane_cp28_ParamLimits

0x9ba7,	// (0x0001669f) bg_popup_sub_pane_cp28

0xed1d,	// (0x0001b815) popup_discreet_window_g1_ParamLimits

0xed1d,	// (0x0001b815) popup_discreet_window_g1

0xed3d,	// (0x0001b835) popup_discreet_window_t1_ParamLimits

0xed3d,	// (0x0001b835) popup_discreet_window_t1

0xed5b,	// (0x0001b853) popup_discreet_window_t2_ParamLimits

0xed5b,	// (0x0001b853) popup_discreet_window_t2

0x0002,

0xfeab,	// (0x0001c9a3) popup_discreet_window_t_ParamLimits

0xfeab,	// (0x0001c9a3) popup_discreet_window_t

0x7628,	// (0x00014120) popup_sk_window_g1

0x7632,	// (0x0001412a) popup_sk_window_g2

0x0001,

0xfeb2,	// (0x0001c9aa) popup_sk_window_g

0x763c,	// (0x00014134) popup_sk_window_t1

0x764a,	// (0x00014142) popup_sk_window_t1_copy1

0xe963,	// (0x0001b45b) cell_ai5_widget_pane_g2_ParamLimits

0xeabc,	// (0x0001b5b4) cell_ai5_widget_pane_t9_ParamLimits

0xeabc,	// (0x0001b5b4) cell_ai5_widget_pane_t9

0x3bda,	// (0x000106d2) main_fep_fshwr2_pane

0x7658,	// (0x00014150) aid_fshwr2_btn_pane

0x7664,	// (0x0001415c) aid_fshwr2_syb_pane

0x7670,	// (0x00014168) aid_fshwr2_txt_pane

0x767c,	// (0x00014174) fshwr2_func_candi_pane

0x7691,	// (0x00014189) fshwr2_hwr_syb_pane

0x76a1,	// (0x00014199) fshwr2_icf_pane

0x55dd,	// (0x000120d5) fshwr2_icf_bg_pane

0x76ca,	// (0x000141c2) fshwr2_icf_pane_t1_ParamLimits

0x76ca,	// (0x000141c2) fshwr2_icf_pane_t1

0x485b,	// (0x00011353) fshwr2_func_candi_pane_g1

0xedad,	// (0x0001b8a5) fshwr2_func_candi_row_pane_ParamLimits

0xedad,	// (0x0001b8a5) fshwr2_func_candi_row_pane

0x76e2,	// (0x000141da) cell_fshwr2_syb_pane_ParamLimits

0x76e2,	// (0x000141da) cell_fshwr2_syb_pane

0x6c0f,	// (0x00013707) fshwr2_hwr_syb_pane_g1_ParamLimits

0x6c0f,	// (0x00013707) fshwr2_hwr_syb_pane_g1

0x55dd,	// (0x000120d5) bg_popup_call_pane_cp01

0x76f8,	// (0x000141f0) fshwr2_func_candi_cell_pane_ParamLimits

0x76f8,	// (0x000141f0) fshwr2_func_candi_cell_pane

0xa203,	// (0x00016cfb) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xa203,	// (0x00016cfb) fshwr2_func_candi_cell_bg_pane

0x7741,	// (0x00014239) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x7741,	// (0x00014239) fshwr2_func_candi_cell_pane_g1

0x7769,	// (0x00014261) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x7769,	// (0x00014261) fshwr2_func_candi_cell_pane_t1

0x55dd,	// (0x000120d5) bg_button_pane_cp08

0xedbd,	// (0x0001b8b5) cell_fshwr2_syb_bg_pane

0x777c,	// (0x00014274) cell_fshwr2_syb_bg_pane_g1

0x7784,	// (0x0001427c) cell_fshwr2_syb_bg_pane_t1

0x4227,	// (0x00010d1f) main_tmo_pane

0xa69c,	// (0x00017194) uni_indicator_pane_g1_ParamLimits

0xa6b2,	// (0x000171aa) uni_indicator_pane_g2_ParamLimits

0xa6c8,	// (0x000171c0) uni_indicator_pane_g3_ParamLimits

0xa6dd,	// (0x000171d5) uni_indicator_pane_g4_ParamLimits

0xa6dd,	// (0x000171d5) uni_indicator_pane_g4

0xa6f1,	// (0x000171e9) uni_indicator_pane_g5_ParamLimits

0xa6f1,	// (0x000171e9) uni_indicator_pane_g5

0xa6f1,	// (0x000171e9) uni_indicator_pane_g6_ParamLimits

0xa6f1,	// (0x000171e9) uni_indicator_pane_g6

0xf91c,	// (0x0001c414) uni_indicator_pane_g_ParamLimits

0xd7d6,	// (0x0001a2ce) popup_tmo_note_window_ParamLimits

0xd7d6,	// (0x0001a2ce) popup_tmo_note_window

0x6ea8,	// (0x000139a0) fshwr2_bg_pane

0x775a,	// (0x00014252) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x775a,	// (0x00014252) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeb7,	// (0x0001c9af) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeb7,	// (0x0001c9af) fshwr2_func_candi_cell_pane_g

0x6bf7,	// (0x000136ef) bg_popup_window_pane_cp01

0x7793,	// (0x0001428b) bg_popup_window_pane_g1_cp01

0xedc5,	// (0x0001b8bd) bg_popup_window_pane_cp22_ParamLimits

0xedc5,	// (0x0001b8bd) bg_popup_window_pane_cp22

0xedd3,	// (0x0001b8cb) listscroll_tmo_link_pane_ParamLimits

0xedd3,	// (0x0001b8cb) listscroll_tmo_link_pane

0xee13,	// (0x0001b90b) popup_tmo_note_window_g1_ParamLimits

0xee13,	// (0x0001b90b) popup_tmo_note_window_g1

0xee20,	// (0x0001b918) tmo_note_info_pane_ParamLimits

0xee20,	// (0x0001b918) tmo_note_info_pane

0xee3a,	// (0x0001b932) list_tmo_note_info_pane_g1_ParamLimits

0xee3a,	// (0x0001b932) list_tmo_note_info_pane_g1

0xee51,	// (0x0001b949) list_tmo_note_info_pane_g2_ParamLimits

0xee51,	// (0x0001b949) list_tmo_note_info_pane_g2

0x0001,

0xfebc,	// (0x0001c9b4) list_tmo_note_info_pane_g_ParamLimits

0xfebc,	// (0x0001c9b4) list_tmo_note_info_pane_g

0xee6d,	// (0x0001b965) list_tmo_note_info_text_pane_ParamLimits

0xee6d,	// (0x0001b965) list_tmo_note_info_text_pane

0xeeee,	// (0x0001b9e6) list_tmo_link_pane

0xeefb,	// (0x0001b9f3) scroll_pane_cp20

0xef08,	// (0x0001ba00) list_single_tmo_link_pane_ParamLimits

0xef08,	// (0x0001ba00) list_single_tmo_link_pane

0xef18,	// (0x0001ba10) list_single_tmo_link_pane_t1

0xef26,	// (0x0001ba1e) list_tmo_note_info_text_pane_t1_ParamLimits

0xef26,	// (0x0001ba1e) list_tmo_note_info_text_pane_t1

0x84d5,	// (0x00014fcd) aid_size_touch_scroll_bar_cp01_ParamLimits

0x84d5,	// (0x00014fcd) aid_size_touch_scroll_bar_cp01

0x83d7,	// (0x00014ecf) aid_size_touch_slider_marker

0x5718,	// (0x00012210) popup_settings_window_ParamLimits

0x5718,	// (0x00012210) popup_settings_window

0x8f1f,	// (0x00015a17) popup_candi_list_indi_window

0x8f6f,	// (0x00015a67) aid_touch_navi_pane_ParamLimits

0x6e03,	// (0x000138fb) rs_clock_indi_pane

0x6e0c,	// (0x00013904) sctrl_sk_bottom_pane_ParamLimits

0x6e1d,	// (0x00013915) sctrl_sk_top_pane_ParamLimits

0x6f20,	// (0x00013a18) popup_fep_tooltip_window

0xe8e1,	// (0x0001b3d9) aid_size_cell_widget_grid_ParamLimits

0xe94e,	// (0x0001b446) cell_ai5_widget_pane_g1_ParamLimits

0xe94e,	// (0x0001b446) cell_ai5_widget_pane_g1

0xe9a2,	// (0x0001b49a) cell_ai5_widget_pane_g6_ParamLimits

0xe9ae,	// (0x0001b4a6) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe3a,	// (0x0001c932) cell_ai5_widget_pane_g_ParamLimits

0xfe3a,	// (0x0001c932) cell_ai5_widget_pane_g

0xeae0,	// (0x0001b5d8) cell_ai5_widget_pane_t10_ParamLimits

0xeae0,	// (0x0001b5d8) cell_ai5_widget_pane_t10

0xeafe,	// (0x0001b5f6) grid_ai5_widget_pane_ParamLimits

0xeb96,	// (0x0001b68e) cell_contacts_ai5_widget_pane_ParamLimits

0xeb96,	// (0x0001b68e) cell_contacts_ai5_widget_pane

0xed70,	// (0x0001b868) popup_discreet_window_t3_ParamLimits

0xed70,	// (0x0001b868) popup_discreet_window_t3

0x76b6,	// (0x000141ae) popup_fshwr2_char_preview_window_ParamLimits

0x76b6,	// (0x000141ae) popup_fshwr2_char_preview_window

0xee8b,	// (0x0001b983) tmo_note_info_pane_t1

0xeea0,	// (0x0001b998) tmo_note_info_pane_t2

0xeeb5,	// (0x0001b9ad) tmo_note_info_pane_t3

0xeeca,	// (0x0001b9c2) tmo_note_info_pane_t4

0xeedc,	// (0x0001b9d4) tmo_note_info_pane_t5

0x0004,

0xfec1,	// (0x0001c9b9) tmo_note_info_pane_t

0xeeee,	// (0x0001b9e6) list_tmo_link_pane_ParamLimits

0xeefb,	// (0x0001b9f3) scroll_pane_cp20_ParamLimits

0x55dd,	// (0x000120d5) bg_popup_fep_char_preview_window_cp01

0xef3f,	// (0x0001ba37) popup_fshwr2_char_preview_window_t1

0xef4d,	// (0x0001ba45) popup_candi_list_indi_window_g1

0xef56,	// (0x0001ba4e) bg_cell_contacts_ai5_widget_pane

0xef62,	// (0x0001ba5a) cell_contacts_ai5_widget_pane_g1

0xc7d3,	// (0x000192cb) cell_contacts_ai5_widget_pane_g2

0xef77,	// (0x0001ba6f) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfecc,	// (0x0001c9c4) cell_contacts_ai5_widget_pane_g

0xef83,	// (0x0001ba7b) cell_contacts_ai5_widget_pane_t1

0x4227,	// (0x00010d1f) highlight_cell_shortcut_ai5_widget_pane_cp01

0xeffa,	// (0x0001baf2) settings_container_pane

0x8bc3,	// (0x000156bb) listscroll_set_pane_copy1

0xb33f,	// (0x00017e37) scroll_pane_cp121_copy1

0xf006,	// (0x0001bafe) set_content_pane_copy1

0xf00e,	// (0x0001bb06) aid_height_set_list_copy1_ParamLimits

0xf00e,	// (0x0001bb06) aid_height_set_list_copy1

0xa911,	// (0x00017409) aid_size_parent_copy1_ParamLimits

0xa911,	// (0x00017409) aid_size_parent_copy1

0xf01a,	// (0x0001bb12) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf01a,	// (0x0001bb12) button_value_adjust_pane_cp6_copy1

0x8f05,	// (0x000159fd) list_highlight_pane_cp2_copy1_ParamLimits

0x8f05,	// (0x000159fd) list_highlight_pane_cp2_copy1

0xf02e,	// (0x0001bb26) list_set_pane_copy1_ParamLimits

0xf02e,	// (0x0001bb26) list_set_pane_copy1

0xef95,	// (0x0001ba8d) main_pane_set_t1_copy1_ParamLimits

0xef95,	// (0x0001ba8d) main_pane_set_t1_copy1

0xefcf,	// (0x0001bac7) main_pane_set_t2_copy1_ParamLimits

0xefcf,	// (0x0001bac7) main_pane_set_t2_copy1

0xf0db,	// (0x0001bbd3) main_pane_set_t3_copy1

0xf0e9,	// (0x0001bbe1) main_pane_set_t4_copy1

0xefee,	// (0x0001bae6) set_content_pane_g1_copy1_ParamLimits

0xefee,	// (0x0001bae6) set_content_pane_g1_copy1

0xf0f7,	// (0x0001bbef) setting_code_pane_copy1

0xf0ff,	// (0x0001bbf7) setting_slider_graphic_pane_copy1

0xf0ff,	// (0x0001bbf7) setting_slider_pane_copy1

0xf0ff,	// (0x0001bbf7) setting_text_pane_copy1

0xf0ff,	// (0x0001bbf7) setting_volume_pane_copy1

0xf0f7,	// (0x0001bbef) settings_code_pane_cp2_copy1

0xf107,	// (0x0001bbff) settings_code_pane_cp_copy1_ParamLimits

0xf107,	// (0x0001bbff) settings_code_pane_cp_copy1

0x779c,	// (0x00014294) volume_set_pane_copy1

0xf11b,	// (0x0001bc13) volume_set_pane_g10_copy1

0xf123,	// (0x0001bc1b) volume_set_pane_g1_copy1

0xf12b,	// (0x0001bc23) volume_set_pane_g2_copy1

0xf133,	// (0x0001bc2b) volume_set_pane_g3_copy1

0xf13b,	// (0x0001bc33) volume_set_pane_g4_copy1

0xf143,	// (0x0001bc3b) volume_set_pane_g5_copy1

0xf14b,	// (0x0001bc43) volume_set_pane_g6_copy1

0xf153,	// (0x0001bc4b) volume_set_pane_g7_copy1

0xf15b,	// (0x0001bc53) volume_set_pane_g8_copy1

0xf163,	// (0x0001bc5b) volume_set_pane_g9_copy1

0x3dd9,	// (0x000108d1) bg_set_opt_pane_cp_copy1_ParamLimits

0x3dd9,	// (0x000108d1) bg_set_opt_pane_cp_copy1

0x77a4,	// (0x0001429c) setting_slider_pane_t1_copy1_ParamLimits

0x77a4,	// (0x0001429c) setting_slider_pane_t1_copy1

0x77c2,	// (0x000142ba) setting_slider_pane_t2_copy1_ParamLimits

0x77c2,	// (0x000142ba) setting_slider_pane_t2_copy1

0x77dc,	// (0x000142d4) setting_slider_pane_t3_copy1_ParamLimits

0x77dc,	// (0x000142d4) setting_slider_pane_t3_copy1

0x77f4,	// (0x000142ec) slider_set_pane_copy1_ParamLimits

0x77f4,	// (0x000142ec) slider_set_pane_copy1

0x42b9,	// (0x00010db1) set_opt_bg_pane_g1_copy2

0x42c1,	// (0x00010db9) set_opt_bg_pane_g2_copy2

0xf16b,	// (0x0001bc63) set_opt_bg_pane_g3_copy2

0x42d1,	// (0x00010dc9) set_opt_bg_pane_g4_copy2

0x42d9,	// (0x00010dd1) set_opt_bg_pane_g5_copy2

0x42e1,	// (0x00010dd9) set_opt_bg_pane_g6_copy2

0xf175,	// (0x0001bc6d) set_opt_bg_pane_g7_copy2

0xf17d,	// (0x0001bc75) set_opt_bg_pane_g8_copy2

0xf187,	// (0x0001bc7f) set_opt_bg_pane_g9_copy2

0x780a,	// (0x00014302) aid_size_touch_slider_mark_copy1_ParamLimits

0x780a,	// (0x00014302) aid_size_touch_slider_mark_copy1

0xf191,	// (0x0001bc89) slider_set_pane_g1_copy1

0x781e,	// (0x00014316) slider_set_pane_g2_copy1

0x67f0,	// (0x000132e8) slider_set_pane_g3_copy1_ParamLimits

0x67f0,	// (0x000132e8) slider_set_pane_g3_copy1

0x6804,	// (0x000132fc) slider_set_pane_g4_copy1_ParamLimits

0x6804,	// (0x000132fc) slider_set_pane_g4_copy1

0x681c,	// (0x00013314) slider_set_pane_g5_copy1_ParamLimits

0x681c,	// (0x00013314) slider_set_pane_g5_copy1

0x67f0,	// (0x000132e8) slider_set_pane_g6_copy1_ParamLimits

0x67f0,	// (0x000132e8) slider_set_pane_g6_copy1

0x7826,	// (0x0001431e) slider_set_pane_g7_copy1_ParamLimits

0x7826,	// (0x0001431e) slider_set_pane_g7_copy1

0x3d5d,	// (0x00010855) bg_set_opt_pane_cp2_copy1

0xf19a,	// (0x0001bc92) setting_slider_graphic_pane_g1_copy1

0xf1a3,	// (0x0001bc9b) setting_slider_graphic_pane_t1_copy1

0xf1b3,	// (0x0001bcab) setting_slider_graphic_pane_t2_copy1

0xf1c3,	// (0x0001bcbb) slider_set_pane_cp_copy1

0xf1d3,	// (0x0001bccb) input_focus_pane_cp1_copy1

0xf1dc,	// (0x0001bcd4) list_set_text_pane_copy1

0xf1e4,	// (0x0001bcdc) setting_text_pane_g1_copy1

0xf1ed,	// (0x0001bce5) set_text_pane_t1_copy1

0xf1d3,	// (0x0001bccb) input_focus_pane_cp2_copy1

0xf1e4,	// (0x0001bcdc) setting_code_pane_g1_copy1

0xf208,	// (0x0001bd00) setting_code_pane_t1_copy1

0xb177,	// (0x00017c6f) list_set_graphic_pane_copy1

0x3d5d,	// (0x00010855) bg_set_opt_pane_cp4_copy1

0x88ce,	// (0x000153c6) list_set_graphic_pane_g1_copy1_ParamLimits

0x88ce,	// (0x000153c6) list_set_graphic_pane_g1_copy1

0xf216,	// (0x0001bd0e) list_set_graphic_pane_g2_copy1

0x88e6,	// (0x000153de) list_set_graphic_pane_t1_copy1_ParamLimits

0x88e6,	// (0x000153de) list_set_graphic_pane_t1_copy1

0xbf5d,	// (0x00018a55) rs_clock_indi_pane_g1

0xf21e,	// (0x0001bd16) rs_clock_indi_pane_t1

0xf22c,	// (0x0001bd24) rs_indi_pane

0xf234,	// (0x0001bd2c) rs_indi_pane_g1

0xf23d,	// (0x0001bd35) rs_indi_pane_g2

0xef4d,	// (0x0001ba45) rs_indi_pane_g3

0x0002,

0xfed3,	// (0x0001c9cb) rs_indi_pane_g

0x8bc3,	// (0x000156bb) bg_popup_preview_window_pane_cp03

0xf246,	// (0x0001bd3e) popup_fep_tooltip_window_t1

0xce14,	// (0x0001990c) popup_note2_window_g2_ParamLimits

0xce14,	// (0x0001990c) popup_note2_window_g2

0x0001,

0xfc73,	// (0x0001c76b) popup_note2_window_g_ParamLimits

0xfc73,	// (0x0001c76b) popup_note2_window_g

0xd3f0,	// (0x00019ee8) bg_popup_sub_pane_cp11_ParamLimits

0xd3fd,	// (0x00019ef5) cell_ai3_links_pane_g1_ParamLimits

0xd414,	// (0x00019f0c) cell_ai3_links_pane_t1

0xf1ed,	// (0x0001bce5) set_text_pane_t1_copy1_ParamLimits

0x8ad4,	// (0x000155cc) cell_graphic_popup_pane_cp2_ParamLimits

0x8ad4,	// (0x000155cc) cell_graphic_popup_pane_cp2

0xf254,	// (0x0001bd4c) cell_graphic_popup_pane_g1_cp2

0x4073,	// (0x00010b6b) cell_graphic_popup_pane_g2_cp2

0xf25c,	// (0x0001bd54) cell_graphic_popup_pane_g3_cp2

0xf264,	// (0x0001bd5c) cell_graphic_popup_pane_t2_cp2

0x4084,	// (0x00010b7c) grid_highlight_pane_cp3_cp2

0x46b1,	// (0x000111a9) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x4227,	// (0x00010d1f) main_tmo_pane_ParamLimits

0xd7ca,	// (0x0001a2c2) popup_tmo_big_image_note_window

0xe93d,	// (0x0001b435) cell_ai5_widget_list_pane

0xe945,	// (0x0001b43d) cell_ai5_widget_lrg_icon_pane

0xee8b,	// (0x0001b983) tmo_note_info_pane_t1_ParamLimits

0xeea0,	// (0x0001b998) tmo_note_info_pane_t2_ParamLimits

0xeeb5,	// (0x0001b9ad) tmo_note_info_pane_t3_ParamLimits

0xeeca,	// (0x0001b9c2) tmo_note_info_pane_t4_ParamLimits

0xeedc,	// (0x0001b9d4) tmo_note_info_pane_t5_ParamLimits

0xfec1,	// (0x0001c9b9) tmo_note_info_pane_t_ParamLimits

0xeffa,	// (0x0001baf2) settings_container_pane_ParamLimits

0xf1cb,	// (0x0001bcc3) indicator_popup_pane_cp5

0xf1cb,	// (0x0001bcc3) indicator_popup_pane_cp6

0xb177,	// (0x00017c6f) list_set_graphic_pane_copy1_ParamLimits

0x3bda,	// (0x000106d2) bg_popup_window_pane_cp23

0xf272,	// (0x0001bd6a) popup_tmo_big_image_note_window_g1

0xf27b,	// (0x0001bd73) popup_tmo_big_image_note_window_t1

0xf28b,	// (0x0001bd83) popup_tmo_big_image_note_window_t2

0xf29b,	// (0x0001bd93) popup_tmo_big_image_note_window_t3

0x0002,

0xfeda,	// (0x0001c9d2) popup_tmo_big_image_note_window_t

0xbf5d,	// (0x00018a55) cell_ai5_widget_lrg_icon_pane_g1

0xf2ab,	// (0x0001bda3) cell_ai5_widget_lrg_icon_pane_t1

0xf2b9,	// (0x0001bdb1) cell_ai5_widget_list_row_pane_ParamLimits

0xf2b9,	// (0x0001bdb1) cell_ai5_widget_list_row_pane

0xf2d0,	// (0x0001bdc8) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf2d0,	// (0x0001bdc8) cell_ai5_widget_list_row_pane_g1

0xf2dd,	// (0x0001bdd5) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf2dd,	// (0x0001bdd5) cell_ai5_widget_list_row_pane_t1

0xf308,	// (0x0001be00) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf308,	// (0x0001be00) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfee1,	// (0x0001c9d9) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfee1,	// (0x0001c9d9) cell_ai5_widget_list_row_pane_t

0x55dd,	// (0x000120d5) main_fep_vtchi_ss_pane

0xf34c,	// (0x0001be44) popup_fep_char_pre_window

0xf354,	// (0x0001be4c) popup_fep_ituss_window

0xf375,	// (0x0001be6d) popup_fep_vkbss_window

0xf394,	// (0x0001be8c) grid_vkbss_keypad_pane_ParamLimits

0xf394,	// (0x0001be8c) grid_vkbss_keypad_pane

0xf3a4,	// (0x0001be9c) ituss_keypad_pane

0x7848,	// (0x00014340) aid_vkbss_key_offset_ParamLimits

0x7848,	// (0x00014340) aid_vkbss_key_offset

0x7854,	// (0x0001434c) cell_vkbss_key_pane_ParamLimits

0x7854,	// (0x0001434c) cell_vkbss_key_pane

0x9286,	// (0x00015d7e) bg_cell_vkbss_key_g1_ParamLimits

0x9286,	// (0x00015d7e) bg_cell_vkbss_key_g1

0xf3b3,	// (0x0001beab) cell_vkbss_key_3p_pane_ParamLimits

0xf3b3,	// (0x0001beab) cell_vkbss_key_3p_pane

0xf3cd,	// (0x0001bec5) cell_vkbss_key_g1_ParamLimits

0xf3cd,	// (0x0001bec5) cell_vkbss_key_g1

0xf3e7,	// (0x0001bedf) cell_vkbss_key_t1_ParamLimits

0xf3e7,	// (0x0001bedf) cell_vkbss_key_t1

0x786a,	// (0x00014362) cell_ituss_key_pane_ParamLimits

0x786a,	// (0x00014362) cell_ituss_key_pane

0xf412,	// (0x0001bf0a) bg_cell_ituss_key_g1_ParamLimits

0xf412,	// (0x0001bf0a) bg_cell_ituss_key_g1

0xf41e,	// (0x0001bf16) cell_ituss_key_pane_g1_ParamLimits

0xf41e,	// (0x0001bf16) cell_ituss_key_pane_g1

0x787b,	// (0x00014373) cell_ituss_key_pane_g2_ParamLimits

0x787b,	// (0x00014373) cell_ituss_key_pane_g2

0x0002,

0xfee8,	// (0x0001c9e0) cell_ituss_key_pane_g_ParamLimits

0xfee8,	// (0x0001c9e0) cell_ituss_key_pane_g

0x78a7,	// (0x0001439f) cell_ituss_key_t1_ParamLimits

0x78a7,	// (0x0001439f) cell_ituss_key_t1

0x78e1,	// (0x000143d9) cell_ituss_key_t2_ParamLimits

0x78e1,	// (0x000143d9) cell_ituss_key_t2

0x7912,	// (0x0001440a) cell_ituss_key_t3_ParamLimits

0x7912,	// (0x0001440a) cell_ituss_key_t3

0x78e1,	// (0x000143d9) cell_ituss_key_t4_ParamLimits

0x78e1,	// (0x000143d9) cell_ituss_key_t4

0x0004,

0xfeef,	// (0x0001c9e7) cell_ituss_key_t_ParamLimits

0xfeef,	// (0x0001c9e7) cell_ituss_key_t

0xf44a,	// (0x0001bf42) cell_vkbss_key_3p_pane_g1

0xf452,	// (0x0001bf4a) cell_vkbss_key_3p_pane_g2

0xf45a,	// (0x0001bf52) cell_vkbss_key_3p_pane_g3

0x0002,

0xfefa,	// (0x0001c9f2) cell_vkbss_key_3p_pane_g

0x55dd,	// (0x000120d5) bg_popup_fep_char_preview_window_cp02

0x7955,	// (0x0001444d) popup_fep_char_pre_window_t1

0xe8d7,	// (0x0001b3cf) main_ai5_sk_pane

0xef56,	// (0x0001ba4e) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xef62,	// (0x0001ba5a) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xc7d3,	// (0x000192cb) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xef77,	// (0x0001ba6f) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfecc,	// (0x0001c9c4) cell_contacts_ai5_widget_pane_g_ParamLimits

0xef83,	// (0x0001ba7b) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x4227,	// (0x00010d1f) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf462,	// (0x0001bf5a) main_ai5_sk_pane_g1

0x99e8,	// (0x000164e0) popup_query_code_window_g1

0xf36a,	// (0x0001be62) popup_fep_vkb_icf_pane

0xf37e,	// (0x0001be76) popup_fep_vtchi_icf_pane

0xf46b,	// (0x0001bf63) bg_icf_pane

0xf477,	// (0x0001bf6f) list_vkb_icf_pane

0xf486,	// (0x0001bf7e) bg_icf_pane_cp01

0xf499,	// (0x0001bf91) vtchi_icf_list_pane

0xf4a9,	// (0x0001bfa1) list_vkb_icf_pane_t1_ParamLimits

0xf4a9,	// (0x0001bfa1) list_vkb_icf_pane_t1

0xf4bf,	// (0x0001bfb7) vtchi_icf_list_pane_t1_ParamLimits

0xf4bf,	// (0x0001bfb7) vtchi_icf_list_pane_t1

0xf354,	// (0x0001be4c) popup_fep_ituss_window_ParamLimits

0xf37e,	// (0x0001be76) popup_fep_vtchi_icf_pane_ParamLimits

0xf3a4,	// (0x0001be9c) ituss_keypad_pane_ParamLimits

0x783c,	// (0x00014334) ituss_sks_pane

0xf46b,	// (0x0001bf63) bg_icf_pane_ParamLimits

0xf330,	// (0x0001be28) icf_edit_indi_pane_ParamLimits

0xf330,	// (0x0001be28) icf_edit_indi_pane

0xf477,	// (0x0001bf6f) list_vkb_icf_pane_ParamLimits

0xf486,	// (0x0001bf7e) bg_icf_pane_cp01_ParamLimits

0xf33f,	// (0x0001be37) icf_edit_indi_pane_cp01_ParamLimits

0xf33f,	// (0x0001be37) icf_edit_indi_pane_cp01

0xf4a1,	// (0x0001bf99) vtchi_query_pane

0xc1cd,	// (0x00018cc5) icf_edit_indi_pane_g1_ParamLimits

0xc1cd,	// (0x00018cc5) icf_edit_indi_pane_g1

0xf531,	// (0x0001c029) icf_edit_indi_pane_g2_ParamLimits

0xf531,	// (0x0001c029) icf_edit_indi_pane_g2

0x0001,

0xff12,	// (0x0001ca0a) icf_edit_indi_pane_g_ParamLimits

0xff12,	// (0x0001ca0a) icf_edit_indi_pane_g

0xf540,	// (0x0001c038) icf_edit_indi_pane_t1

0xf4da,	// (0x0001bfd2) bg_input_focus_pane_cp042

0x40e7,	// (0x00010bdf) vtchi_button_pane

0xf4e3,	// (0x0001bfdb) vtchi_query_pane_t1

0xf4f1,	// (0x0001bfe9) vtchi_query_pane_t2

0xf4ff,	// (0x0001bff7) vtchi_query_pane_t3

0x0002,

0xff01,	// (0x0001c9f9) vtchi_query_pane_t

0x55dd,	// (0x000120d5) bg_button_pane_cp13

0xf50d,	// (0x0001c005) vtchi_button_pane_g1

0x7964,	// (0x0001445c) ituss_sks_pane_g1

0x796f,	// (0x00014467) ituss_sks_pane_g2

0x0001,

0xff08,	// (0x0001ca00) ituss_sks_pane_g

0xf515,	// (0x0001c00d) ituss_sks_pane_t1

0xf523,	// (0x0001c01b) ituss_sks_pane_t2

0x0001,

0xff0d,	// (0x0001ca05) ituss_sks_pane_t

0xb976,	// (0x0001846e) indicator_nsta_pane_cp_g1

0xb97f,	// (0x00018477) indicator_nsta_pane_cp_g2

0xb987,	// (0x0001847f) indicator_nsta_pane_cp_g3

0xb98f,	// (0x00018487) indicator_nsta_pane_cp_g4

0xb997,	// (0x0001848f) indicator_nsta_pane_cp_g5

0xb997,	// (0x0001848f) indicator_nsta_pane_cp_g6

0x0005,

0xfab1,	// (0x0001c5a9) indicator_nsta_pane_cp_g

0xe4ae,	// (0x0001afa6) cell_graphic2_pane_t2_ParamLimits

0xe4ae,	// (0x0001afa6) cell_graphic2_pane_t2

0x0001,

0xfdc3,	// (0x0001c8bb) cell_graphic2_pane_t_ParamLimits

0xfdc3,	// (0x0001c8bb) cell_graphic2_pane_t

0xe4db,	// (0x0001afd3) cell_graphic2_control_pane_t1

0x873d,	// (0x00015235) signal_pane_g3_ParamLimits

0x873d,	// (0x00015235) signal_pane_g3

0x874f,	// (0x00015247) signal_pane_g4_ParamLimits

0x874f,	// (0x00015247) signal_pane_g4

0xf31a,	// (0x0001be12) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf31a,	// (0x0001be12) cell_ai5_widget_list_row_pane_t3

0xf438,	// (0x0001bf30) cell_ituss_key_pane_t1_ParamLimits

0xf438,	// (0x0001bf30) cell_ituss_key_pane_t1

0x95f6,	// (0x000160ee) form_field_data_wide_pane_vc_t2_ParamLimits

0x95f6,	// (0x000160ee) form_field_data_wide_pane_vc_t2

0x960a,	// (0x00016102) form_field_data_wide_pane_vc_t3_ParamLimits

0x960a,	// (0x00016102) form_field_data_wide_pane_vc_t3

0x0002,

0xf804,	// (0x0001c2fc) form_field_data_wide_pane_vc_t_ParamLimits

0xf804,	// (0x0001c2fc) form_field_data_wide_pane_vc_t

0xb63e,	// (0x00018136) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb63e,	// (0x00018136) form_field_slider_wide_pane_vc_t3

0xb71c,	// (0x00018214) form_field_popup_wide_pane_vc_t2_ParamLimits

0xb71c,	// (0x00018214) form_field_popup_wide_pane_vc_t2

0xb733,	// (0x0001822b) form_field_popup_wide_pane_vc_t3_ParamLimits

0xb733,	// (0x0001822b) form_field_popup_wide_pane_vc_t3

0x0002,

0xfaa0,	// (0x0001c598) form_field_popup_wide_pane_vc_t_ParamLimits

0xfaa0,	// (0x0001c598) form_field_popup_wide_pane_vc_t

0x7658,	// (0x00014150) aid_fshwr2_btn_pane_ParamLimits

0x7664,	// (0x0001415c) aid_fshwr2_syb_pane_ParamLimits

0x7670,	// (0x00014168) aid_fshwr2_txt_pane_ParamLimits

0x6ea8,	// (0x000139a0) fshwr2_bg_pane_ParamLimits

0x767c,	// (0x00014174) fshwr2_func_candi_pane_ParamLimits

0x7691,	// (0x00014189) fshwr2_hwr_syb_pane_ParamLimits

0x76a1,	// (0x00014199) fshwr2_icf_pane_ParamLimits

0xb5aa,	// (0x000180a2) list_double_graphic_pane_vc_g4_ParamLimits

0xb5aa,	// (0x000180a2) list_double_graphic_pane_vc_g4

0x789b,	// (0x00014393) cell_ituss_key_pane_g3_ParamLimits

0x789b,	// (0x00014393) cell_ituss_key_pane_g3

0x7943,	// (0x0001443b) cell_ituss_key_t5_ParamLimits

0x7943,	// (0x0001443b) cell_ituss_key_t5
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
	};

} // end of namespace AknLayoutScalable_Abrw_pnp4_av_nhd4_prt_tch_Normal

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

#include "aknlayoutscalable_abrw_php_av_qhd_prt_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_php_av_qhd_prt_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0000ac73 };

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
0x6dbf,	// (0x00011a32) Screen

0x6dd3,	// (0x00011a46) application_window_ParamLimits

0x6dd3,	// (0x00011a46) application_window

0x6ded,	// (0x00011a60) screen_g1

0x48fa,	// (0x0000f56d) area_bottom_pane_ParamLimits

0x48fa,	// (0x0000f56d) area_bottom_pane

0x49ba,	// (0x0000f62d) area_top_pane_ParamLimits

0x49ba,	// (0x0000f62d) area_top_pane

0x4a58,	// (0x0000f6cb) main_pane_ParamLimits

0x4a58,	// (0x0000f6cb) main_pane

0x6df7,	// (0x00011a6a) misc_graphics

0x8f64,	// (0x00013bd7) battery_pane_ParamLimits

0x8f64,	// (0x00013bd7) battery_pane

0x9d3f,	// (0x000149b2) bg_status_flat_pane_g8

0x9d47,	// (0x000149ba) bg_status_flat_pane_g9

0x9026,	// (0x00013c99) context_pane_ParamLimits

0x9026,	// (0x00013c99) context_pane

0x913c,	// (0x00013daf) navi_pane_ParamLimits

0x913c,	// (0x00013daf) navi_pane

0x91c0,	// (0x00013e33) signal_pane_ParamLimits

0x91c0,	// (0x00013e33) signal_pane

0x0008,

0xf874,	// (0x0001a4e7) bg_status_flat_pane_g

0x922d,	// (0x00013ea0) status_pane_g1_ParamLimits

0x922d,	// (0x00013ea0) status_pane_g1

0x9241,	// (0x00013eb4) status_pane_g2_ParamLimits

0x9241,	// (0x00013eb4) status_pane_g2

0x924d,	// (0x00013ec0) status_pane_g3_ParamLimits

0x924d,	// (0x00013ec0) status_pane_g3

0x0004,

0xf79b,	// (0x0001a40e) status_pane_g_ParamLimits

0xf79b,	// (0x0001a40e) status_pane_g

0x9281,	// (0x00013ef4) title_pane_ParamLimits

0x9281,	// (0x00013ef4) title_pane

0x92be,	// (0x00013f31) uni_indicator_pane_ParamLimits

0x92be,	// (0x00013f31) uni_indicator_pane

0x8e78,	// (0x00013aeb) bg_list_pane_ParamLimits

0x8e78,	// (0x00013aeb) bg_list_pane

0x8e98,	// (0x00013b0b) find_pane

0x8ea0,	// (0x00013b13) listscroll_app_pane_ParamLimits

0x8ea0,	// (0x00013b13) listscroll_app_pane

0x8eac,	// (0x00013b1f) listscroll_form_pane

0x5335,	// (0x0000ffa8) listscroll_gen_pane_ParamLimits

0x5335,	// (0x0000ffa8) listscroll_gen_pane

0x5349,	// (0x0000ffbc) listscroll_set_pane

0x8033,	// (0x00012ca6) main_idle_act_pane

0x8b74,	// (0x000137e7) main_idle_trad_pane

0x8b74,	// (0x000137e7) main_list_empty_pane

0x8ec6,	// (0x00013b39) main_midp_pane

0x8ed2,	// (0x00013b45) main_pane_g1_ParamLimits

0x8ed2,	// (0x00013b45) main_pane_g1

0x535f,	// (0x0000ffd2) popup_ai_message_window_ParamLimits

0x535f,	// (0x0000ffd2) popup_ai_message_window

0x5405,	// (0x00010078) popup_fep_china_uni_window_ParamLimits

0x5405,	// (0x00010078) popup_fep_china_uni_window

0x5461,	// (0x000100d4) popup_fep_japan_candidate_window_ParamLimits

0x5461,	// (0x000100d4) popup_fep_japan_candidate_window

0x5481,	// (0x000100f4) popup_fep_japan_predictive_window_ParamLimits

0x5481,	// (0x000100f4) popup_fep_japan_predictive_window

0x54b1,	// (0x00010124) popup_find_window

0x54be,	// (0x00010131) popup_grid_graphic_window_ParamLimits

0x54be,	// (0x00010131) popup_grid_graphic_window

0x54e8,	// (0x0001015b) popup_large_graphic_colour_window

0x550e,	// (0x00010181) popup_menu_window_ParamLimits

0x550e,	// (0x00010181) popup_menu_window

0x56c6,	// (0x00010339) popup_note_image_window

0x56b2,	// (0x00010325) popup_note_wait_window_ParamLimits

0x56b2,	// (0x00010325) popup_note_wait_window

0x56b2,	// (0x00010325) popup_note_window_ParamLimits

0x56b2,	// (0x00010325) popup_note_window

0x571c,	// (0x0001038f) popup_query_code_window_ParamLimits

0x571c,	// (0x0001038f) popup_query_code_window

0x5730,	// (0x000103a3) popup_query_data_code_window_ParamLimits

0x5730,	// (0x000103a3) popup_query_data_code_window

0x574d,	// (0x000103c0) popup_query_data_window_ParamLimits

0x574d,	// (0x000103c0) popup_query_data_window

0x5769,	// (0x000103dc) popup_query_sat_info_window_ParamLimits

0x5769,	// (0x000103dc) popup_query_sat_info_window

0x57a2,	// (0x00010415) popup_snote_single_graphic_window_ParamLimits

0x57a2,	// (0x00010415) popup_snote_single_graphic_window

0x57a2,	// (0x00010415) popup_snote_single_text_window_ParamLimits

0x57a2,	// (0x00010415) popup_snote_single_text_window

0x57b7,	// (0x0001042a) popup_sub_window_general

0x58e7,	// (0x0001055a) popup_window_general_ParamLimits

0x58e7,	// (0x0001055a) popup_window_general

0x8ee8,	// (0x00013b5b) power_save_pane

0x51bf,	// (0x0000fe32) control_pane_g1_ParamLimits

0x51bf,	// (0x0000fe32) control_pane_g1

0x51e6,	// (0x0000fe59) control_pane_g2_ParamLimits

0x51e6,	// (0x0000fe59) control_pane_g2

0x8e3b,	// (0x00013aae) control_pane_g3_ParamLimits

0x8e3b,	// (0x00013aae) control_pane_g3

0x0007,

0xf783,	// (0x0001a3f6) control_pane_g_ParamLimits

0xf783,	// (0x0001a3f6) control_pane_g

0x5230,	// (0x0000fea3) control_pane_t1_ParamLimits

0x5230,	// (0x0000fea3) control_pane_t1

0x5284,	// (0x0000fef7) control_pane_t2_ParamLimits

0x5284,	// (0x0000fef7) control_pane_t2

0x0002,

0xf794,	// (0x0001a407) control_pane_t_ParamLimits

0xf794,	// (0x0001a407) control_pane_t

0x8d60,	// (0x000139d3) navi_navi_volume_pane_cp1

0x8d68,	// (0x000139db) status_small_icon_pane

0x8d70,	// (0x000139e3) status_small_pane_g1_ParamLimits

0x8d70,	// (0x000139e3) status_small_pane_g1

0x8da4,	// (0x00013a17) status_small_pane_g2_ParamLimits

0x8da4,	// (0x00013a17) status_small_pane_g2

0x8db0,	// (0x00013a23) status_small_pane_g3_ParamLimits

0x8db0,	// (0x00013a23) status_small_pane_g3

0x8dbc,	// (0x00013a2f) status_small_pane_g4_ParamLimits

0x8dbc,	// (0x00013a2f) status_small_pane_g4

0x8dc8,	// (0x00013a3b) status_small_pane_g5_ParamLimits

0x8dc8,	// (0x00013a3b) status_small_pane_g5

0x8dd6,	// (0x00013a49) status_small_pane_g6_ParamLimits

0x8dd6,	// (0x00013a49) status_small_pane_g6

0x0007,

0xf772,	// (0x0001a3e5) status_small_pane_g_ParamLimits

0xf772,	// (0x0001a3e5) status_small_pane_g

0x8e05,	// (0x00013a78) status_small_pane_t1

0x8e27,	// (0x00013a9a) status_small_wait_pane_ParamLimits

0x8e27,	// (0x00013a9a) status_small_wait_pane

0x8557,	// (0x000131ca) aid_levels_signal_ParamLimits

0x8557,	// (0x000131ca) aid_levels_signal

0x8569,	// (0x000131dc) signal_pane_g1_ParamLimits

0x8569,	// (0x000131dc) signal_pane_g1

0x857e,	// (0x000131f1) signal_pane_g2_ParamLimits

0x857e,	// (0x000131f1) signal_pane_g2

0x0003,

0xf703,	// (0x0001a376) signal_pane_g_ParamLimits

0xf703,	// (0x0001a376) signal_pane_g

0x85b9,	// (0x0001322c) context_pane_g1

0x6e01,	// (0x00011a74) title_pane_g1

0x6e37,	// (0x00011aaa) title_pane_t1

0x6e9f,	// (0x00011b12) title_pane_t2

0x6ec5,	// (0x00011b38) title_pane_t3

0x0002,

0xf557,	// (0x0001a1ca) title_pane_t

0x92d6,	// (0x00013f49) aid_levels_battery_ParamLimits

0x92d6,	// (0x00013f49) aid_levels_battery

0x92ea,	// (0x00013f5d) battery_pane_g1_ParamLimits

0x92ea,	// (0x00013f5d) battery_pane_g1

0x9300,	// (0x00013f73) battery_pane_g2_ParamLimits

0x9300,	// (0x00013f73) battery_pane_g2

0x0001,

0xf7a6,	// (0x0001a419) battery_pane_g_ParamLimits

0xf7a6,	// (0x0001a419) battery_pane_g

0xa681,	// (0x000152f4) uni_indicator_pane_g1

0xa697,	// (0x0001530a) uni_indicator_pane_g2

0xa6ad,	// (0x00015320) uni_indicator_pane_g3

0x0005,

0xf91c,	// (0x0001a58f) uni_indicator_pane_g

0x89e6,	// (0x00013659) navi_icon_pane_ParamLimits

0x89e6,	// (0x00013659) navi_icon_pane

0x8924,	// (0x00013597) navi_midp_pane

0x8a02,	// (0x00013675) navi_navi_pane

0x8a0c,	// (0x0001367f) navi_text_pane_ParamLimits

0x8a0c,	// (0x0001367f) navi_text_pane

0x6ded,	// (0x00011a60) status_small_wait_pane_g1

0x730e,	// (0x00011f81) status_small_wait_pane_g2

0x0001,

0xf917,	// (0x0001a58a) status_small_wait_pane_g

0xa3a6,	// (0x00015019) navi_navi_icon_text_pane

0xa3ae,	// (0x00015021) navi_navi_pane_g1_ParamLimits

0xa3ae,	// (0x00015021) navi_navi_pane_g1

0xa3c0,	// (0x00015033) navi_navi_pane_g2_ParamLimits

0xa3c0,	// (0x00015033) navi_navi_pane_g2

0x0001,

0xf8e5,	// (0x0001a558) navi_navi_pane_g_ParamLimits

0xf8e5,	// (0x0001a558) navi_navi_pane_g

0xa3d2,	// (0x00015045) navi_navi_tabs_pane

0xa3db,	// (0x0001504e) navi_navi_text_pane

0xa3a6,	// (0x00015019) navi_navi_volume_pane

0xa382,	// (0x00014ff5) navi_text_pane_t1

0xa376,	// (0x00014fe9) navi_icon_pane_g1

0xa2c9,	// (0x00014f3c) navi_navi_text_pane_t1

0x5bff,	// (0x00010872) navi_navi_volume_pane_g1

0x5c07,	// (0x0001087a) volume_small_pane

0xa22f,	// (0x00014ea2) navi_navi_icon_text_pane_g1

0xa237,	// (0x00014eaa) navi_navi_icon_text_pane_t1

0x8a02,	// (0x00013675) navi_tabs_2_long_pane

0x8a02,	// (0x00013675) navi_tabs_2_pane

0x8a02,	// (0x00013675) navi_tabs_3_long_pane

0x8a02,	// (0x00013675) navi_tabs_3_pane

0x8a02,	// (0x00013675) navi_tabs_4_pane

0x5bdf,	// (0x00010852) tabs_2_active_pane_ParamLimits

0x5bdf,	// (0x00010852) tabs_2_active_pane

0x5bef,	// (0x00010862) tabs_2_passive_pane_ParamLimits

0x5bef,	// (0x00010862) tabs_2_passive_pane

0x5bad,	// (0x00010820) tabs_3_active_pane_ParamLimits

0x5bad,	// (0x00010820) tabs_3_active_pane

0x5bbd,	// (0x00010830) tabs_3_passive_pane_ParamLimits

0x5bbd,	// (0x00010830) tabs_3_passive_pane

0x5bce,	// (0x00010841) tabs_3_passive_pane_cp_ParamLimits

0x5bce,	// (0x00010841) tabs_3_passive_pane_cp

0x5b69,	// (0x000107dc) tabs_4_active_pane_ParamLimits

0x5b69,	// (0x000107dc) tabs_4_active_pane

0x5b7a,	// (0x000107ed) tabs_4_passive_pane_ParamLimits

0x5b7a,	// (0x000107ed) tabs_4_passive_pane

0x5b8b,	// (0x000107fe) tabs_4_passive_pane_cp_ParamLimits

0x5b8b,	// (0x000107fe) tabs_4_passive_pane_cp

0x5b9c,	// (0x0001080f) tabs_4_passive_pane_cp2_ParamLimits

0x5b9c,	// (0x0001080f) tabs_4_passive_pane_cp2

0x5b45,	// (0x000107b8) tabs_2_long_active_pane_ParamLimits

0x5b45,	// (0x000107b8) tabs_2_long_active_pane

0x5b57,	// (0x000107ca) tabs_2_long_passive_pane_ParamLimits

0x5b57,	// (0x000107ca) tabs_2_long_passive_pane

0x5b06,	// (0x00010779) tabs_3_long_active_pane_ParamLimits

0x5b06,	// (0x00010779) tabs_3_long_active_pane

0x5b19,	// (0x0001078c) tabs_3_long_passive_pane_ParamLimits

0x5b19,	// (0x0001078c) tabs_3_long_passive_pane

0x5b32,	// (0x000107a5) tabs_3_long_passive_pane_cp_ParamLimits

0x5b32,	// (0x000107a5) tabs_3_long_passive_pane_cp

0x5aac,	// (0x0001071f) volume_small_pane_g1

0x5ab5,	// (0x00010728) volume_small_pane_g2

0x5abe,	// (0x00010731) volume_small_pane_g3

0x5ac7,	// (0x0001073a) volume_small_pane_g4

0x5ad0,	// (0x00010743) volume_small_pane_g5

0x5ad9,	// (0x0001074c) volume_small_pane_g6

0x5ae2,	// (0x00010755) volume_small_pane_g7

0x5aeb,	// (0x0001075e) volume_small_pane_g8

0x5af4,	// (0x00010767) volume_small_pane_g9

0x5afd,	// (0x00010770) volume_small_pane_g10

0x0009,

0xf8b1,	// (0x0001a524) volume_small_pane_g

0x6ed7,	// (0x00011b4a) bg_active_tab_pane_cp2_ParamLimits

0x6ed7,	// (0x00011b4a) bg_active_tab_pane_cp2

0x6ee5,	// (0x00011b58) tabs_3_active_pane_g1

0x6eed,	// (0x00011b60) tabs_3_active_pane_t1

0x6ed7,	// (0x00011b4a) bg_passive_tab_pane_cp2_ParamLimits

0x6ed7,	// (0x00011b4a) bg_passive_tab_pane_cp2

0x6ee5,	// (0x00011b58) tabs_3_passive_pane_g1

0x6eed,	// (0x00011b60) tabs_3_passive_pane_t1

0x6ed7,	// (0x00011b4a) bg_active_tab_pane_cp3_ParamLimits

0x6ed7,	// (0x00011b4a) bg_active_tab_pane_cp3

0x6eff,	// (0x00011b72) tabs_4_active_pane_g1

0x6f07,	// (0x00011b7a) tabs_4_active_pane_t1

0x6ed7,	// (0x00011b4a) bg_passive_tab_pane_cp3_ParamLimits

0x6ed7,	// (0x00011b4a) bg_passive_tab_pane_cp3

0x6eff,	// (0x00011b72) tabs_4_1_passive_pane_g1

0x6f07,	// (0x00011b7a) tabs_4_1_passive_pane_t1

0x8ec6,	// (0x00013b39) list_highlight_pane_cp2

0xa91c,	// (0x0001558f) list_set_pane_ParamLimits

0xa91c,	// (0x0001558f) list_set_pane

0xa9c2,	// (0x00015635) main_pane_set_t1_ParamLimits

0xa9c2,	// (0x00015635) main_pane_set_t1

0xa9e2,	// (0x00015655) main_pane_set_t2_ParamLimits

0xa9e2,	// (0x00015655) main_pane_set_t2

0xa9f6,	// (0x00015669) main_pane_set_t3_ParamLimits

0xa9f6,	// (0x00015669) main_pane_set_t3

0xaa08,	// (0x0001567b) main_pane_set_t4_ParamLimits

0xaa08,	// (0x0001567b) main_pane_set_t4

0x0003,

0xf981,	// (0x0001a5f4) main_pane_set_t_ParamLimits

0xf981,	// (0x0001a5f4) main_pane_set_t

0xaa1a,	// (0x0001568d) setting_code_pane

0xaa26,	// (0x00015699) setting_slider_graphic_pane

0xaa26,	// (0x00015699) setting_slider_pane

0xaa26,	// (0x00015699) setting_text_pane

0xaa26,	// (0x00015699) setting_volume_pane

0x4ca7,	// (0x0000f91a) volume_set_pane

0x6ed7,	// (0x00011b4a) bg_set_opt_pane_cp

0x4caf,	// (0x0000f922) setting_slider_pane_t1

0x4cc8,	// (0x0000f93b) setting_slider_pane_t2

0x4ce2,	// (0x0000f955) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0001a1d1) setting_slider_pane_t

0x4cfa,	// (0x0000f96d) slider_set_pane

0x6df7,	// (0x00011a6a) bg_set_opt_pane_cp2

0x6f19,	// (0x00011b8c) setting_slider_graphic_pane_g1

0x4d10,	// (0x0000f983) setting_slider_graphic_pane_t1

0x4d20,	// (0x0000f993) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x0001a1d8) setting_slider_graphic_pane_t

0x4d30,	// (0x0000f9a3) slider_set_pane_cp

0x6df7,	// (0x00011a6a) input_focus_pane_cp1

0xa8db,	// (0x0001554e) list_set_text_pane

0x6ded,	// (0x00011a60) setting_text_pane_g1

0x6df7,	// (0x00011a6a) input_focus_pane_cp2

0x6ded,	// (0x00011a60) setting_code_pane_g1

0x6f22,	// (0x00011b95) setting_code_pane_t1

0x6f30,	// (0x00011ba3) set_text_pane_t1_ParamLimits

0x6f30,	// (0x00011ba3) set_text_pane_t1

0x7dfe,	// (0x00012a71) set_opt_bg_pane_g1

0x7e06,	// (0x00012a79) set_opt_bg_pane_g2

0xa8b5,	// (0x00015528) set_opt_bg_pane_g3

0x7e16,	// (0x00012a89) set_opt_bg_pane_g4

0x7e1e,	// (0x00012a91) set_opt_bg_pane_g5

0x7e26,	// (0x00012a99) set_opt_bg_pane_g6

0xa8bf,	// (0x00015532) set_opt_bg_pane_g7

0xa8c7,	// (0x0001553a) set_opt_bg_pane_g8

0xa8d1,	// (0x00015544) set_opt_bg_pane_g9

0x0008,

0xf96e,	// (0x0001a5e1) set_opt_bg_pane_g

0xa8a8,	// (0x0001551b) slider_set_pane_g1

0x5c74,	// (0x000108e7) slider_set_pane_g2

0x0006,

0xf95f,	// (0x0001a5d2) slider_set_pane_g

0x5c10,	// (0x00010883) volume_set_pane_g1

0x5c18,	// (0x0001088b) volume_set_pane_g2

0x5c20,	// (0x00010893) volume_set_pane_g3

0x5c28,	// (0x0001089b) volume_set_pane_g4

0x5c30,	// (0x000108a3) volume_set_pane_g5

0x5c38,	// (0x000108ab) volume_set_pane_g6

0x5c40,	// (0x000108b3) volume_set_pane_g7

0x5c48,	// (0x000108bb) volume_set_pane_g8

0x5c50,	// (0x000108c3) volume_set_pane_g9

0x5c58,	// (0x000108cb) volume_set_pane_g10

0x0009,

0xf937,	// (0x0001a5aa) volume_set_pane_g

0x6f4a,	// (0x00011bbd) indicator_pane_ParamLimits

0x6f4a,	// (0x00011bbd) indicator_pane

0x6f56,	// (0x00011bc9) main_idle_pane_g2_ParamLimits

0x6f56,	// (0x00011bc9) main_idle_pane_g2

0x6f7e,	// (0x00011bf1) main_pane_idle_g1_ParamLimits

0x6f7e,	// (0x00011bf1) main_pane_idle_g1

0x6f8b,	// (0x00011bfe) popup_clock_digital_analogue_window_ParamLimits

0x6f8b,	// (0x00011bfe) popup_clock_digital_analogue_window

0x6fa2,	// (0x00011c15) soft_indicator_pane_ParamLimits

0x6fa2,	// (0x00011c15) soft_indicator_pane

0x6fae,	// (0x00011c21) wallpaper_pane_ParamLimits

0x6fae,	// (0x00011c21) wallpaper_pane

0x6ded,	// (0x00011a60) wallpaper_pane_g1

0x6fc2,	// (0x00011c35) indicator_pane_g1_ParamLimits

0x6fc2,	// (0x00011c35) indicator_pane_g1

0xada8,	// (0x00015a1b) navi_navi_icon_text_pane_srt_g1

0x6fdd,	// (0x00011c50) soft_indicator_pane_t1

0x6ff7,	// (0x00011c6a) aid_ps_area_pane

0x7008,	// (0x00011c7b) aid_ps_clock_pane

0x7016,	// (0x00011c89) aid_ps_indicator_pane

0x7022,	// (0x00011c95) indicator_ps_pane_ParamLimits

0x7022,	// (0x00011c95) indicator_ps_pane

0x7031,	// (0x00011ca4) power_save_pane_g1_ParamLimits

0x7031,	// (0x00011ca4) power_save_pane_g1

0x703d,	// (0x00011cb0) power_save_pane_g2_ParamLimits

0x703d,	// (0x00011cb0) power_save_pane_g2

0x48ae,	// (0x0000f521) aid_navinavi_width_pane

0x6ff7,	// (0x00011c6a) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0001a1dd) power_save_pane_g_ParamLimits

0xf56a,	// (0x0001a1dd) power_save_pane_g

0x704b,	// (0x00011cbe) power_save_pane_t1_ParamLimits

0x704b,	// (0x00011cbe) power_save_pane_t1

0x7008,	// (0x00011c7b) aid_ps_clock_pane_ParamLimits

0x7016,	// (0x00011c89) aid_ps_indicator_pane_ParamLimits

0x705d,	// (0x00011cd0) power_save_pane_t4_ParamLimits

0x705d,	// (0x00011cd0) power_save_pane_t4

0x0001,

0xf56f,	// (0x0001a1e2) power_save_pane_t_ParamLimits

0xf56f,	// (0x0001a1e2) power_save_pane_t

0x7087,	// (0x00011cfa) power_save_t3_ParamLimits

0x7087,	// (0x00011cfa) power_save_t3

0x7072,	// (0x00011ce5) power_save_t2_ParamLimits

0x7072,	// (0x00011ce5) power_save_t2

0x709c,	// (0x00011d0f) indicator_ps_pane_g1

0x70a5,	// (0x00011d18) ai_gene_pane_ParamLimits

0x70a5,	// (0x00011d18) ai_gene_pane

0x70b1,	// (0x00011d24) ai_links_pane_ParamLimits

0x70b1,	// (0x00011d24) ai_links_pane

0x70bd,	// (0x00011d30) indicator_pane_cp1_ParamLimits

0x70bd,	// (0x00011d30) indicator_pane_cp1

0x70c9,	// (0x00011d3c) main_pane_idle_g1_cp_ParamLimits

0x70c9,	// (0x00011d3c) main_pane_idle_g1_cp

0x70d5,	// (0x00011d48) popup_ai_links_title_window

0x70de,	// (0x00011d51) soft_indicator_pane_cp1_ParamLimits

0x70de,	// (0x00011d51) soft_indicator_pane_cp1

0xa66f,	// (0x000152e2) ai_links_pane_g1

0xa678,	// (0x000152eb) grid_ai_links_pane

0xa652,	// (0x000152c5) ai_gene_pane_1

0xa65d,	// (0x000152d0) ai_gene_pane_2

0xa666,	// (0x000152d9) list_highlight_pane_cp4

0xa636,	// (0x000152a9) cell_ai_link_pane_ParamLimits

0xa636,	// (0x000152a9) cell_ai_link_pane

0xa62e,	// (0x000152a1) cell_ai_link_pane_g1

0x730e,	// (0x00011f81) cell_ai_link_pane_g2

0x0001,

0xf912,	// (0x0001a585) cell_ai_link_pane_g

0x6df7,	// (0x00011a6a) grid_highlight_cp2

0x6df7,	// (0x00011a6a) bg_popup_sub_pane_cp1

0x70f8,	// (0x00011d6b) popup_ai_links_title_window_t1

0xa57c,	// (0x000151ef) ai_gene_pane_1_g1_ParamLimits

0xa57c,	// (0x000151ef) ai_gene_pane_1_g1

0xa588,	// (0x000151fb) ai_gene_pane_1_g2_ParamLimits

0xa588,	// (0x000151fb) ai_gene_pane_1_g2

0x0001,

0xf908,	// (0x0001a57b) ai_gene_pane_1_g_ParamLimits

0xf908,	// (0x0001a57b) ai_gene_pane_1_g

0xa595,	// (0x00015208) ai_gene_pane_1_t1_ParamLimits

0xa595,	// (0x00015208) ai_gene_pane_1_t1

0xa5c9,	// (0x0001523c) grid_ai_soft_ind_pane

0xa567,	// (0x000151da) ai_gene_pane_2_t1_ParamLimits

0xa567,	// (0x000151da) ai_gene_pane_2_t1

0x7107,	// (0x00011d7a) main_pane_empty_t1_ParamLimits

0x7107,	// (0x00011d7a) main_pane_empty_t1

0x711f,	// (0x00011d92) main_pane_empty_t2_ParamLimits

0x711f,	// (0x00011d92) main_pane_empty_t2

0x7134,	// (0x00011da7) main_pane_empty_t3_ParamLimits

0x7134,	// (0x00011da7) main_pane_empty_t3

0x7146,	// (0x00011db9) main_pane_empty_t4_ParamLimits

0x7146,	// (0x00011db9) main_pane_empty_t4

0x7158,	// (0x00011dcb) main_pane_empty_t5_ParamLimits

0x7158,	// (0x00011dcb) main_pane_empty_t5

0x0004,

0xf574,	// (0x0001a1e7) main_pane_empty_t_ParamLimits

0xf574,	// (0x0001a1e7) main_pane_empty_t

0x7efb,	// (0x00012b6e) bg_popup_window_pane_ParamLimits

0x7efb,	// (0x00012b6e) bg_popup_window_pane

0xa2d7,	// (0x00014f4a) find_popup_pane_cp2_ParamLimits

0xa2d7,	// (0x00014f4a) find_popup_pane_cp2

0xa2e3,	// (0x00014f56) heading_pane_ParamLimits

0xa2e3,	// (0x00014f56) heading_pane

0x6df7,	// (0x00011a6a) bg_popup_sub_pane

0xa251,	// (0x00014ec4) bg_popup_window_pane_g1_ParamLimits

0xa251,	// (0x00014ec4) bg_popup_window_pane_g1

0xa25d,	// (0x00014ed0) bg_popup_window_pane_g2_ParamLimits

0xa25d,	// (0x00014ed0) bg_popup_window_pane_g2

0xa269,	// (0x00014edc) bg_popup_window_pane_g3_ParamLimits

0xa269,	// (0x00014edc) bg_popup_window_pane_g3

0xa275,	// (0x00014ee8) bg_popup_window_pane_g4_ParamLimits

0xa275,	// (0x00014ee8) bg_popup_window_pane_g4

0xa281,	// (0x00014ef4) bg_popup_window_pane_g5_ParamLimits

0xa281,	// (0x00014ef4) bg_popup_window_pane_g5

0xa28d,	// (0x00014f00) bg_popup_window_pane_g6_ParamLimits

0xa28d,	// (0x00014f00) bg_popup_window_pane_g6

0xa299,	// (0x00014f0c) bg_popup_window_pane_g7_ParamLimits

0xa299,	// (0x00014f0c) bg_popup_window_pane_g7

0xa2a5,	// (0x00014f18) bg_popup_window_pane_g8_ParamLimits

0xa2a5,	// (0x00014f18) bg_popup_window_pane_g8

0xa2b1,	// (0x00014f24) bg_popup_window_pane_g9_ParamLimits

0xa2b1,	// (0x00014f24) bg_popup_window_pane_g9

0xa2bd,	// (0x00014f30) bg_popup_window_pane_g10_ParamLimits

0xa2bd,	// (0x00014f30) bg_popup_window_pane_g10

0x0009,

0xf8d0,	// (0x0001a543) bg_popup_window_pane_g_ParamLimits

0xf8d0,	// (0x0001a543) bg_popup_window_pane_g

0xa1e6,	// (0x00014e59) bg_popup_heading_pane_ParamLimits

0xa1e6,	// (0x00014e59) bg_popup_heading_pane

0x5cfc,	// (0x0001096f) tabs_4_passive_pane_cp_srt_ParamLimits

0x5cfc,	// (0x0001096f) tabs_4_passive_pane_cp_srt

0x5d0e,	// (0x00010981) tabs_4_passive_pane_srt_ParamLimits

0xa1fa,	// (0x00014e6d) heading_pane_g2

0x5d0e,	// (0x00010981) tabs_4_passive_pane_srt

0x8ec6,	// (0x00013b39) bg_passive_tab_pane_cp3_srt_ParamLimits

0x8ec6,	// (0x00013b39) bg_passive_tab_pane_cp3_srt

0xa202,	// (0x00014e75) heading_pane_t1_ParamLimits

0xa202,	// (0x00014e75) heading_pane_t1

0xa219,	// (0x00014e8c) heading_pane_t2_ParamLimits

0xa219,	// (0x00014e8c) heading_pane_t2

0x0001,

0xf8cb,	// (0x0001a53e) heading_pane_t_ParamLimits

0xf8cb,	// (0x0001a53e) heading_pane_t

0x9d07,	// (0x0001497a) bg_popup_heading_pane_g1

0x9dc2,	// (0x00014a35) bg_popup_heading_pane_g2

0x9dcc,	// (0x00014a3f) bg_popup_heading_pane_g3

0x9dd6,	// (0x00014a49) bg_popup_heading_pane_g4

0x9de0,	// (0x00014a53) bg_popup_heading_pane_g5

0x9dea,	// (0x00014a5d) bg_popup_heading_pane_g6

0x9df2,	// (0x00014a65) bg_popup_heading_pane_g7

0x9dfa,	// (0x00014a6d) bg_popup_heading_pane_g8

0x9e04,	// (0x00014a77) bg_popup_heading_pane_g9

0x0008,

0xf887,	// (0x0001a4fa) bg_popup_heading_pane_g

0x9406,	// (0x00014079) bg_popup_sub_pane_g1

0x9416,	// (0x00014089) bg_popup_sub_pane_g2

0x940e,	// (0x00014081) bg_popup_sub_pane_g3

0x9426,	// (0x00014099) bg_popup_sub_pane_g4

0x941e,	// (0x00014091) bg_popup_sub_pane_g5

0x942e,	// (0x000140a1) bg_popup_sub_pane_g6

0x9436,	// (0x000140a9) bg_popup_sub_pane_g7

0x9446,	// (0x000140b9) bg_popup_sub_pane_g8

0x943e,	// (0x000140b1) bg_popup_sub_pane_g9

0x0008,

0xf861,	// (0x0001a4d4) bg_popup_sub_pane_g

0x716c,	// (0x00011ddf) bg_popup_window_pane_cp5_ParamLimits

0x716c,	// (0x00011ddf) bg_popup_window_pane_cp5

0x7188,	// (0x00011dfb) popup_note_window_g1_ParamLimits

0x7188,	// (0x00011dfb) popup_note_window_g1

0x7194,	// (0x00011e07) popup_note_window_t1_ParamLimits

0x7194,	// (0x00011e07) popup_note_window_t1

0x71aa,	// (0x00011e1d) popup_note_window_t2_ParamLimits

0x71aa,	// (0x00011e1d) popup_note_window_t2

0x71c0,	// (0x00011e33) popup_note_window_t3_ParamLimits

0x71c0,	// (0x00011e33) popup_note_window_t3

0x71d6,	// (0x00011e49) popup_note_window_t4_ParamLimits

0x71d6,	// (0x00011e49) popup_note_window_t4

0x71fe,	// (0x00011e71) popup_note_window_t5_ParamLimits

0x71fe,	// (0x00011e71) popup_note_window_t5

0x0004,

0xf57f,	// (0x0001a1f2) popup_note_window_t_ParamLimits

0xf57f,	// (0x0001a1f2) popup_note_window_t

0x7222,	// (0x00011e95) bg_popup_window_pane_cp6_ParamLimits

0x7222,	// (0x00011e95) bg_popup_window_pane_cp6

0x9c83,	// (0x000148f6) popup_note_image_window_g1_ParamLimits

0x9c83,	// (0x000148f6) popup_note_image_window_g1

0x9c8f,	// (0x00014902) popup_note_image_window_g2_ParamLimits

0x9c8f,	// (0x00014902) popup_note_image_window_g2

0x0001,

0xf855,	// (0x0001a4c8) popup_note_image_window_g_ParamLimits

0xf855,	// (0x0001a4c8) popup_note_image_window_g

0x9ca8,	// (0x0001491b) popup_note_image_window_t1_ParamLimits

0x9ca8,	// (0x0001491b) popup_note_image_window_t1

0x9cc1,	// (0x00014934) popup_note_image_window_t2_ParamLimits

0x9cc1,	// (0x00014934) popup_note_image_window_t2

0x9cda,	// (0x0001494d) popup_note_image_window_t3_ParamLimits

0x9cda,	// (0x0001494d) popup_note_image_window_t3

0x0002,

0xf85a,	// (0x0001a4cd) popup_note_image_window_t_ParamLimits

0xf85a,	// (0x0001a4cd) popup_note_image_window_t

0x9b44,	// (0x000147b7) bg_popup_window_pane_cp7_ParamLimits

0x9b44,	// (0x000147b7) bg_popup_window_pane_cp7

0x9b74,	// (0x000147e7) popup_note_wait_window_g1_ParamLimits

0x9b74,	// (0x000147e7) popup_note_wait_window_g1

0x9b80,	// (0x000147f3) popup_note_wait_window_g2_ParamLimits

0x9b80,	// (0x000147f3) popup_note_wait_window_g2

0x0002,

0xf843,	// (0x0001a4b6) popup_note_wait_window_g_ParamLimits

0xf843,	// (0x0001a4b6) popup_note_wait_window_g

0x9b98,	// (0x0001480b) popup_note_wait_window_t1_ParamLimits

0x9b98,	// (0x0001480b) popup_note_wait_window_t1

0x9bbf,	// (0x00014832) popup_note_wait_window_t2_ParamLimits

0x9bbf,	// (0x00014832) popup_note_wait_window_t2

0x9bdc,	// (0x0001484f) popup_note_wait_window_t3_ParamLimits

0x9bdc,	// (0x0001484f) popup_note_wait_window_t3

0x9bef,	// (0x00014862) popup_note_wait_window_t4_ParamLimits

0x9bef,	// (0x00014862) popup_note_wait_window_t4

0x0004,

0xf84a,	// (0x0001a4bd) popup_note_wait_window_t_ParamLimits

0xf84a,	// (0x0001a4bd) popup_note_wait_window_t

0x9c14,	// (0x00014887) wait_bar_pane_ParamLimits

0x9c14,	// (0x00014887) wait_bar_pane

0x6df7,	// (0x00011a6a) wait_anim_pane

0x6df7,	// (0x00011a6a) wait_border_pane

0x6ded,	// (0x00011a60) wait_anim_pane_g1

0x6ded,	// (0x00011a60) wait_anim_pane_g2

0x0001,

0xf6fe,	// (0x0001a371) wait_anim_pane_g

0x9ae8,	// (0x0001475b) wait_border_pane_g1

0x9af3,	// (0x00014766) wait_border_pane_g2

0x9afc,	// (0x0001476f) wait_border_pane_g3

0x0002,

0xf83c,	// (0x0001a4af) wait_border_pane_g

0x9953,	// (0x000145c6) bg_popup_window_pane_cp16_ParamLimits

0x9953,	// (0x000145c6) bg_popup_window_pane_cp16

0x9a53,	// (0x000146c6) indicator_popup_pane_cp4_ParamLimits

0x9a53,	// (0x000146c6) indicator_popup_pane_cp4

0x9a67,	// (0x000146da) popup_query_data_window_t1_ParamLimits

0x9a67,	// (0x000146da) popup_query_data_window_t1

0x9a79,	// (0x000146ec) popup_query_data_window_t2_ParamLimits

0x9a79,	// (0x000146ec) popup_query_data_window_t2

0x9a92,	// (0x00014705) popup_query_data_window_t3_ParamLimits

0x9a92,	// (0x00014705) popup_query_data_window_t3

0x0002,

0xf835,	// (0x0001a4a8) popup_query_data_window_t_ParamLimits

0xf835,	// (0x0001a4a8) popup_query_data_window_t

0x9aac,	// (0x0001471f) query_popup_data_pane_ParamLimits

0x9aac,	// (0x0001471f) query_popup_data_pane

0x9ac0,	// (0x00014733) query_popup_data_pane_cp1_ParamLimits

0x9ac0,	// (0x00014733) query_popup_data_pane_cp1

0x9953,	// (0x000145c6) bg_popup_window_pane_cp10_ParamLimits

0x9953,	// (0x000145c6) bg_popup_window_pane_cp10

0x9985,	// (0x000145f8) indicator_popup_pane_ParamLimits

0x9985,	// (0x000145f8) indicator_popup_pane

0x99a7,	// (0x0001461a) popup_query_code_window_t1_ParamLimits

0x99a7,	// (0x0001461a) popup_query_code_window_t1

0x99c1,	// (0x00014634) popup_query_code_window_t2_ParamLimits

0x99c1,	// (0x00014634) popup_query_code_window_t2

0x9a0a,	// (0x0001467d) popup_query_code_window_t3_ParamLimits

0x9a0a,	// (0x0001467d) popup_query_code_window_t3

0x0002,

0xf82e,	// (0x0001a4a1) popup_query_code_window_t_ParamLimits

0xf82e,	// (0x0001a4a1) popup_query_code_window_t

0x9a39,	// (0x000146ac) query_popup_pane_ParamLimits

0x9a39,	// (0x000146ac) query_popup_pane

0x7222,	// (0x00011e95) bg_popup_window_pane_cp15_ParamLimits

0x7222,	// (0x00011e95) bg_popup_window_pane_cp15

0x7240,	// (0x00011eb3) indicator_popup_pane_cp1_ParamLimits

0x7240,	// (0x00011eb3) indicator_popup_pane_cp1

0x7253,	// (0x00011ec6) indicator_popup_pane_cp2_ParamLimits

0x7253,	// (0x00011ec6) indicator_popup_pane_cp2

0x7266,	// (0x00011ed9) popup_query_data_code_window_g1_ParamLimits

0x7266,	// (0x00011ed9) popup_query_data_code_window_g1

0x7279,	// (0x00011eec) popup_query_data_code_window_t1_ParamLimits

0x7279,	// (0x00011eec) popup_query_data_code_window_t1

0x728b,	// (0x00011efe) popup_query_data_code_window_t2_ParamLimits

0x728b,	// (0x00011efe) popup_query_data_code_window_t2

0x729d,	// (0x00011f10) popup_query_data_code_window_t3_ParamLimits

0x729d,	// (0x00011f10) popup_query_data_code_window_t3

0x72b3,	// (0x00011f26) popup_query_data_code_window_t4_ParamLimits

0x72b3,	// (0x00011f26) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x0001a1fd) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x0001a1fd) popup_query_data_code_window_t

0x59bd,	// (0x00010630) list_single_midp_graphic_pane_g3

0x72cb,	// (0x00011f3e) query_popup_data_pane_cp2_ParamLimits

0x72de,	// (0x00011f51) query_popup_pane_cp2_ParamLimits

0x72de,	// (0x00011f51) query_popup_pane_cp2

0x6df7,	// (0x00011a6a) bg_popup_window_pane_cp11

0x994b,	// (0x000145be) heading_pane_cp5

0x73c9,	// (0x0001203c) listscroll_popup_info_pane

0x6df7,	// (0x00011a6a) input_focus_pane_cp3

0x72f1,	// (0x00011f64) query_popup_pane_t1

0x72ff,	// (0x00011f72) list_popup_info_pane_ParamLimits

0x72ff,	// (0x00011f72) list_popup_info_pane

0x730e,	// (0x00011f81) listscroll_popup_info_pane_g1

0x7316,	// (0x00011f89) scroll_pane_cp7

0x7320,	// (0x00011f93) popup_info_list_pane_t1_ParamLimits

0x7320,	// (0x00011f93) popup_info_list_pane_t1

0x733a,	// (0x00011fad) popup_info_list_pane_t2_ParamLimits

0x733a,	// (0x00011fad) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x0001a206) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x0001a206) popup_info_list_pane_t

0x6df7,	// (0x00011a6a) bg_popup_window_pane_cp12

0xadc2,	// (0x00015a35) find_popup_pane

0x6ed7,	// (0x00011b4a) bg_popup_window_pane_cp3

0x7354,	// (0x00011fc7) heading_pane_cp3

0x7360,	// (0x00011fd3) listscroll_popup_graphic_pane

0x6df7,	// (0x00011a6a) bg_popup_window_pane_cp4

0x73bf,	// (0x00012032) heading_pane_cp4

0x73c9,	// (0x0001203c) listscroll_popup_colour_pane

0x73d1,	// (0x00012044) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x73d1,	// (0x00012044) cell_large_graphic_colour_none_popup_pane

0x73e5,	// (0x00012058) grid_large_graphic_colour_popup_pane_ParamLimits

0x73e5,	// (0x00012058) grid_large_graphic_colour_popup_pane

0x7411,	// (0x00012084) listscroll_popup_colour_pane_g1_ParamLimits

0x7411,	// (0x00012084) listscroll_popup_colour_pane_g1

0x7428,	// (0x0001209b) listscroll_popup_colour_pane_g2_ParamLimits

0x7428,	// (0x0001209b) listscroll_popup_colour_pane_g2

0x743f,	// (0x000120b2) listscroll_popup_colour_pane_g3_ParamLimits

0x743f,	// (0x000120b2) listscroll_popup_colour_pane_g3

0x744f,	// (0x000120c2) listscroll_popup_colour_pane_g4_ParamLimits

0x744f,	// (0x000120c2) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x0001a20b) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x0001a20b) listscroll_popup_colour_pane_g

0x7463,	// (0x000120d6) scroll_pane_cp6_ParamLimits

0x7463,	// (0x000120d6) scroll_pane_cp6

0x7475,	// (0x000120e8) cell_large_graphic_colour_popup_pane_ParamLimits

0x7475,	// (0x000120e8) cell_large_graphic_colour_popup_pane

0x7494,	// (0x00012107) cell_large_graphic_colour_none_popup_pane_t1

0x6df7,	// (0x00011a6a) grid_highlight_pane_cp5

0x74a3,	// (0x00012116) cell_large_graphic_colour_popup_pane_g1

0x74ab,	// (0x0001211e) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0001a214) cell_large_graphic_colour_popup_pane_g

0x74b3,	// (0x00012126) cell_large_graphic_colour_popup_pane_g2_copy1

0x74bc,	// (0x0001212f) grid_highlight_pane_cp4

0x74c4,	// (0x00012137) bg_popup_window_pane_cp8_ParamLimits

0x74c4,	// (0x00012137) bg_popup_window_pane_cp8

0x74df,	// (0x00012152) popup_snote_single_text_window_g1_ParamLimits

0x74df,	// (0x00012152) popup_snote_single_text_window_g1

0x74f1,	// (0x00012164) popup_snote_single_text_window_t1_ParamLimits

0x74f1,	// (0x00012164) popup_snote_single_text_window_t1

0x7504,	// (0x00012177) popup_snote_single_text_window_t2_ParamLimits

0x7504,	// (0x00012177) popup_snote_single_text_window_t2

0x7517,	// (0x0001218a) popup_snote_single_text_window_t3_ParamLimits

0x7517,	// (0x0001218a) popup_snote_single_text_window_t3

0x7550,	// (0x000121c3) popup_snote_single_text_window_t4_ParamLimits

0x7550,	// (0x000121c3) popup_snote_single_text_window_t4

0x7584,	// (0x000121f7) popup_snote_single_text_window_t5_ParamLimits

0x7584,	// (0x000121f7) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0001a219) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0001a219) popup_snote_single_text_window_t

0x75b3,	// (0x00012226) bg_popup_window_pane_cp9_ParamLimits

0x75b3,	// (0x00012226) bg_popup_window_pane_cp9

0x74df,	// (0x00012152) popup_snote_single_graphic_window_g1_ParamLimits

0x74df,	// (0x00012152) popup_snote_single_graphic_window_g1

0x75c1,	// (0x00012234) popup_snote_single_graphic_window_g2_ParamLimits

0x75c1,	// (0x00012234) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0001a224) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0001a224) popup_snote_single_graphic_window_g

0x75cd,	// (0x00012240) popup_snote_single_graphic_window_t1_ParamLimits

0x75cd,	// (0x00012240) popup_snote_single_graphic_window_t1

0x75e0,	// (0x00012253) popup_snote_single_graphic_window_t2_ParamLimits

0x75e0,	// (0x00012253) popup_snote_single_graphic_window_t2

0x75f3,	// (0x00012266) popup_snote_single_graphic_window_t3_ParamLimits

0x75f3,	// (0x00012266) popup_snote_single_graphic_window_t3

0x762c,	// (0x0001229f) popup_snote_single_graphic_window_t4_ParamLimits

0x762c,	// (0x0001229f) popup_snote_single_graphic_window_t4

0x7660,	// (0x000122d3) popup_snote_single_graphic_window_t5_ParamLimits

0x7660,	// (0x000122d3) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0001a229) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0001a229) popup_snote_single_graphic_window_t

0xad04,	// (0x00015977) grid_graphic_popup_pane_ParamLimits

0xad04,	// (0x00015977) grid_graphic_popup_pane

0xad2e,	// (0x000159a1) listscroll_popup_graphic_pane_g1_ParamLimits

0xad2e,	// (0x000159a1) listscroll_popup_graphic_pane_g1

0xad42,	// (0x000159b5) listscroll_popup_graphic_pane_g2_ParamLimits

0xad42,	// (0x000159b5) listscroll_popup_graphic_pane_g2

0x0001,

0xf9ab,	// (0x0001a61e) listscroll_popup_graphic_pane_g_ParamLimits

0xf9ab,	// (0x0001a61e) listscroll_popup_graphic_pane_g

0xad56,	// (0x000159c9) scroll_pane_cp5

0xaca3,	// (0x00015916) cell_graphic_popup_pane_ParamLimits

0xaca3,	// (0x00015916) cell_graphic_popup_pane

0xac84,	// (0x000158f7) cell_graphic_popup_pane_g1

0xac8c,	// (0x000158ff) cell_graphic_popup_pane_g2

0x74b3,	// (0x00012126) cell_graphic_popup_pane_g3

0x0002,

0xf9a4,	// (0x0001a617) cell_graphic_popup_pane_g

0xac95,	// (0x00015908) cell_graphic_popup_pane_t2

0x74bc,	// (0x0001212f) grid_highlight_pane_cp3

0x76a1,	// (0x00012314) list_gen_pane_ParamLimits

0x76a1,	// (0x00012314) list_gen_pane

0x76d3,	// (0x00012346) scroll_pane

0xabdc,	// (0x0001584f) bg_list_pane_g1_ParamLimits

0xabdc,	// (0x0001584f) bg_list_pane_g1

0xabf9,	// (0x0001586c) bg_list_pane_g2_ParamLimits

0xabf9,	// (0x0001586c) bg_list_pane_g2

0xac0e,	// (0x00015881) bg_list_pane_g3_ParamLimits

0xac0e,	// (0x00015881) bg_list_pane_g3

0xac22,	// (0x00015895) bg_list_pane_g4_ParamLimits

0xac22,	// (0x00015895) bg_list_pane_g4

0xac36,	// (0x000158a9) bg_list_pane_g5_ParamLimits

0xac36,	// (0x000158a9) bg_list_pane_g5

0x0004,

0xf999,	// (0x0001a60c) bg_list_pane_g_ParamLimits

0xf999,	// (0x0001a60c) bg_list_pane_g

0xaadf,	// (0x00015752) list_double2_graphic_large_graphic_pane_ParamLimits

0xaadf,	// (0x00015752) list_double2_graphic_large_graphic_pane

0xaadf,	// (0x00015752) list_double2_graphic_pane_ParamLimits

0xaadf,	// (0x00015752) list_double2_graphic_pane

0xaadf,	// (0x00015752) list_double2_large_graphic_pane_ParamLimits

0xaadf,	// (0x00015752) list_double2_large_graphic_pane

0xaadf,	// (0x00015752) list_double2_pane_ParamLimits

0xaadf,	// (0x00015752) list_double2_pane

0xaadf,	// (0x00015752) list_double_graphic_heading_pane_ParamLimits

0xaadf,	// (0x00015752) list_double_graphic_heading_pane

0xaadf,	// (0x00015752) list_double_graphic_pane_ParamLimits

0xaadf,	// (0x00015752) list_double_graphic_pane

0xaadf,	// (0x00015752) list_double_heading_pane_ParamLimits

0xaadf,	// (0x00015752) list_double_heading_pane

0xaadf,	// (0x00015752) list_double_large_graphic_pane_ParamLimits

0xaadf,	// (0x00015752) list_double_large_graphic_pane

0xaadf,	// (0x00015752) list_double_number_pane_ParamLimits

0xaadf,	// (0x00015752) list_double_number_pane

0xaadf,	// (0x00015752) list_double_pane_ParamLimits

0xaadf,	// (0x00015752) list_double_pane

0xaadf,	// (0x00015752) list_double_time_pane_ParamLimits

0xaadf,	// (0x00015752) list_double_time_pane

0xaadf,	// (0x00015752) list_setting_number_pane_ParamLimits

0xaadf,	// (0x00015752) list_setting_number_pane

0xaadf,	// (0x00015752) list_setting_pane_ParamLimits

0xaadf,	// (0x00015752) list_setting_pane

0xab48,	// (0x000157bb) list_single_2graphic_pane_ParamLimits

0xab48,	// (0x000157bb) list_single_2graphic_pane

0xab48,	// (0x000157bb) list_single_graphic_heading_pane_ParamLimits

0xab48,	// (0x000157bb) list_single_graphic_heading_pane

0xab48,	// (0x000157bb) list_single_graphic_pane_ParamLimits

0xab48,	// (0x000157bb) list_single_graphic_pane

0xab48,	// (0x000157bb) list_single_heading_pane_ParamLimits

0xab48,	// (0x000157bb) list_single_heading_pane

0xabbd,	// (0x00015830) list_single_large_graphic_pane_ParamLimits

0xabbd,	// (0x00015830) list_single_large_graphic_pane

0xab48,	// (0x000157bb) list_single_number_heading_pane_ParamLimits

0xab48,	// (0x000157bb) list_single_number_heading_pane

0xab48,	// (0x000157bb) list_single_number_pane_ParamLimits

0xab48,	// (0x000157bb) list_single_number_pane

0xab48,	// (0x000157bb) list_single_pane_ParamLimits

0xab48,	// (0x000157bb) list_single_pane

0x6df7,	// (0x00011a6a) list_highlight_pane_cp1

0x7713,	// (0x00012386) list_single_pane_g1_ParamLimits

0x7713,	// (0x00012386) list_single_pane_g1

0x771f,	// (0x00012392) list_single_pane_g2_ParamLimits

0x771f,	// (0x00012392) list_single_pane_g2

0x0001,

0xf5c8,	// (0x0001a23b) list_single_pane_g_ParamLimits

0xf5c8,	// (0x0001a23b) list_single_pane_g

0xaa98,	// (0x0001570b) list_single_pane_t1_ParamLimits

0xaa98,	// (0x0001570b) list_single_pane_t1

0x7713,	// (0x00012386) list_single_number_pane_g1_ParamLimits

0x7713,	// (0x00012386) list_single_number_pane_g1

0x771f,	// (0x00012392) list_single_number_pane_g2_ParamLimits

0x771f,	// (0x00012392) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x0001a23b) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x0001a23b) list_single_number_pane_g

0xa824,	// (0x00015497) list_single_number_pane_t1_ParamLimits

0xa824,	// (0x00015497) list_single_number_pane_t1

0xa83a,	// (0x000154ad) list_single_number_pane_t2_ParamLimits

0xa83a,	// (0x000154ad) list_single_number_pane_t2

0x0001,

0xf95a,	// (0x0001a5cd) list_single_number_pane_t_ParamLimits

0xf95a,	// (0x0001a5cd) list_single_number_pane_t

0x7707,	// (0x0001237a) list_single_graphic_pane_g1_ParamLimits

0x7707,	// (0x0001237a) list_single_graphic_pane_g1

0x7713,	// (0x00012386) list_single_graphic_pane_g2_ParamLimits

0x7713,	// (0x00012386) list_single_graphic_pane_g2

0x771f,	// (0x00012392) list_single_graphic_pane_g3_ParamLimits

0x771f,	// (0x00012392) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0001a234) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0001a234) list_single_graphic_pane_g

0x772b,	// (0x0001239e) list_single_graphic_pane_t1_ParamLimits

0x772b,	// (0x0001239e) list_single_graphic_pane_t1

0x7713,	// (0x00012386) list_single_heading_pane_g1_ParamLimits

0x7713,	// (0x00012386) list_single_heading_pane_g1

0x771f,	// (0x00012392) list_single_heading_pane_g2_ParamLimits

0x771f,	// (0x00012392) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x0001a23b) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x0001a23b) list_single_heading_pane_g

0x7741,	// (0x000123b4) list_single_heading_pane_t1_ParamLimits

0x7741,	// (0x000123b4) list_single_heading_pane_t1

0x7757,	// (0x000123ca) list_single_heading_pane_t2_ParamLimits

0x7757,	// (0x000123ca) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x0001a240) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x0001a240) list_single_heading_pane_t

0x7713,	// (0x00012386) list_single_number_heading_pane_g1_ParamLimits

0x7713,	// (0x00012386) list_single_number_heading_pane_g1

0x771f,	// (0x00012392) list_single_number_heading_pane_g2_ParamLimits

0x771f,	// (0x00012392) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x0001a23b) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x0001a23b) list_single_number_heading_pane_g

0x7741,	// (0x000123b4) list_single_number_heading_pane_t1_ParamLimits

0x7741,	// (0x000123b4) list_single_number_heading_pane_t1

0x7769,	// (0x000123dc) list_single_number_heading_pane_t2_ParamLimits

0x7769,	// (0x000123dc) list_single_number_heading_pane_t2

0x777b,	// (0x000123ee) list_single_number_heading_pane_t3_ParamLimits

0x777b,	// (0x000123ee) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x0001a245) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x0001a245) list_single_number_heading_pane_t

0x778d,	// (0x00012400) list_single_graphic_heading_pane_g1_ParamLimits

0x778d,	// (0x00012400) list_single_graphic_heading_pane_g1

0x7799,	// (0x0001240c) list_single_graphic_heading_pane_g4_ParamLimits

0x7799,	// (0x0001240c) list_single_graphic_heading_pane_g4

0x771f,	// (0x00012392) list_single_graphic_heading_pane_g5_ParamLimits

0x771f,	// (0x00012392) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x0001a24c) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x0001a24c) list_single_graphic_heading_pane_g

0x7741,	// (0x000123b4) list_single_graphic_heading_pane_t1_ParamLimits

0x7741,	// (0x000123b4) list_single_graphic_heading_pane_t1

0x77aa,	// (0x0001241d) list_single_graphic_heading_pane_t2_ParamLimits

0x77aa,	// (0x0001241d) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x0001a253) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x0001a253) list_single_graphic_heading_pane_t

0x77bc,	// (0x0001242f) list_single_large_graphic_pane_g1_ParamLimits

0x77bc,	// (0x0001242f) list_single_large_graphic_pane_g1

0x77c8,	// (0x0001243b) list_single_large_graphic_pane_g2_ParamLimits

0x77c8,	// (0x0001243b) list_single_large_graphic_pane_g2

0x77d4,	// (0x00012447) list_single_large_graphic_pane_g3_ParamLimits

0x77d4,	// (0x00012447) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x0001a258) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x0001a258) list_single_large_graphic_pane_g

0x9af3,	// (0x00014766) wait_border_pane_g2_copy1

0x77e0,	// (0x00012453) list_single_large_graphic_pane_g4_cp2

0x77e8,	// (0x0001245b) list_single_large_graphic_pane_t1_ParamLimits

0x77e8,	// (0x0001245b) list_single_large_graphic_pane_t1

0x77fe,	// (0x00012471) list_double_pane_g1_ParamLimits

0x77fe,	// (0x00012471) list_double_pane_g1

0x780a,	// (0x0001247d) list_double_pane_g2_ParamLimits

0x780a,	// (0x0001247d) list_double_pane_g2

0x0001,

0xf5ec,	// (0x0001a25f) list_double_pane_g_ParamLimits

0xf5ec,	// (0x0001a25f) list_double_pane_g

0x7816,	// (0x00012489) list_double_pane_t1_ParamLimits

0x7816,	// (0x00012489) list_double_pane_t1

0x782c,	// (0x0001249f) list_double_pane_t2_ParamLimits

0x782c,	// (0x0001249f) list_double_pane_t2

0x0001,

0xf5f1,	// (0x0001a264) list_double_pane_t_ParamLimits

0xf5f1,	// (0x0001a264) list_double_pane_t

0x783e,	// (0x000124b1) list_double2_pane_g1_ParamLimits

0x783e,	// (0x000124b1) list_double2_pane_g1

0x784f,	// (0x000124c2) list_double2_pane_g2_ParamLimits

0x784f,	// (0x000124c2) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x0001a269) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x0001a269) list_double2_pane_g

0x785b,	// (0x000124ce) list_double2_pane_t1_ParamLimits

0x785b,	// (0x000124ce) list_double2_pane_t1

0x7871,	// (0x000124e4) list_double2_pane_t2_ParamLimits

0x7871,	// (0x000124e4) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x0001a26e) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x0001a26e) list_double2_pane_t

0x77fe,	// (0x00012471) list_double_number_pane_g1_ParamLimits

0x77fe,	// (0x00012471) list_double_number_pane_g1

0x780a,	// (0x0001247d) list_double_number_pane_g2_ParamLimits

0x780a,	// (0x0001247d) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x0001a25f) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x0001a25f) list_double_number_pane_g

0x7883,	// (0x000124f6) list_double_number_pane_t1_ParamLimits

0x7883,	// (0x000124f6) list_double_number_pane_t1

0x7895,	// (0x00012508) list_double_number_pane_t2_ParamLimits

0x7895,	// (0x00012508) list_double_number_pane_t2

0x78ab,	// (0x0001251e) list_double_number_pane_t3_ParamLimits

0x78ab,	// (0x0001251e) list_double_number_pane_t3

0x0002,

0xf600,	// (0x0001a273) list_double_number_pane_t_ParamLimits

0xf600,	// (0x0001a273) list_double_number_pane_t

0x78bd,	// (0x00012530) list_double_graphic_pane_g1_ParamLimits

0x78bd,	// (0x00012530) list_double_graphic_pane_g1

0x78c9,	// (0x0001253c) list_double_graphic_pane_g2_ParamLimits

0x78c9,	// (0x0001253c) list_double_graphic_pane_g2

0x78d8,	// (0x0001254b) list_double_graphic_pane_g3_ParamLimits

0x78d8,	// (0x0001254b) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x0001a27a) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x0001a27a) list_double_graphic_pane_g

0x78f0,	// (0x00012563) list_double_graphic_pane_t1_ParamLimits

0x78f0,	// (0x00012563) list_double_graphic_pane_t1

0x7906,	// (0x00012579) list_double_graphic_pane_t2_ParamLimits

0x7906,	// (0x00012579) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x0001a283) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x0001a283) list_double_graphic_pane_t

0x7918,	// (0x0001258b) list_double2_graphic_pane_g1_ParamLimits

0x7918,	// (0x0001258b) list_double2_graphic_pane_g1

0x7924,	// (0x00012597) list_double2_graphic_pane_g2_ParamLimits

0x7924,	// (0x00012597) list_double2_graphic_pane_g2

0x784f,	// (0x000124c2) list_double2_graphic_pane_g3_ParamLimits

0x784f,	// (0x000124c2) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x0001a288) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x0001a288) list_double2_graphic_pane_g

0x7930,	// (0x000125a3) list_double2_graphic_pane_t1_ParamLimits

0x7930,	// (0x000125a3) list_double2_graphic_pane_t1

0x7946,	// (0x000125b9) list_double2_graphic_pane_t2_ParamLimits

0x7946,	// (0x000125b9) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x0001a28f) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x0001a28f) list_double2_graphic_pane_t

0x7958,	// (0x000125cb) list_double_large_graphic_pane_g1_ParamLimits

0x7958,	// (0x000125cb) list_double_large_graphic_pane_g1

0x7977,	// (0x000125ea) list_double_large_graphic_pane_g2_ParamLimits

0x7977,	// (0x000125ea) list_double_large_graphic_pane_g2

0x780a,	// (0x0001247d) list_double_large_graphic_pane_g3_ParamLimits

0x780a,	// (0x0001247d) list_double_large_graphic_pane_g3

0x7988,	// (0x000125fb) list_double_large_graphic_pane_g4_ParamLimits

0x7988,	// (0x000125fb) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x0001a294) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x0001a294) list_double_large_graphic_pane_g

0x79ae,	// (0x00012621) list_double_large_graphic_pane_t1_ParamLimits

0x79ae,	// (0x00012621) list_double_large_graphic_pane_t1

0x79c7,	// (0x0001263a) list_double_large_graphic_pane_t2_ParamLimits

0x79c7,	// (0x0001263a) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x0001a29f) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x0001a29f) list_double_large_graphic_pane_t

0x79d9,	// (0x0001264c) list_double2_large_graphic_pane_g1_ParamLimits

0x79d9,	// (0x0001264c) list_double2_large_graphic_pane_g1

0x783e,	// (0x000124b1) list_double2_large_graphic_pane_g2_ParamLimits

0x783e,	// (0x000124b1) list_double2_large_graphic_pane_g2

0x784f,	// (0x000124c2) list_double2_large_graphic_pane_g3_ParamLimits

0x784f,	// (0x000124c2) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x0001a2a4) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x0001a2a4) list_double2_large_graphic_pane_g

0x79e5,	// (0x00012658) list_double2_large_graphic_pane_t1_ParamLimits

0x79e5,	// (0x00012658) list_double2_large_graphic_pane_t1

0x79fb,	// (0x0001266e) list_double2_large_graphic_pane_t2_ParamLimits

0x79fb,	// (0x0001266e) list_double2_large_graphic_pane_t2

0x0001,

0xf638,	// (0x0001a2ab) list_double2_large_graphic_pane_t_ParamLimits

0xf638,	// (0x0001a2ab) list_double2_large_graphic_pane_t

0x7a0d,	// (0x00012680) list_double_heading_pane_g1_ParamLimits

0x7a0d,	// (0x00012680) list_double_heading_pane_g1

0x7a1e,	// (0x00012691) list_double_heading_pane_g2_ParamLimits

0x7a1e,	// (0x00012691) list_double_heading_pane_g2

0x0001,

0xf63d,	// (0x0001a2b0) list_double_heading_pane_g_ParamLimits

0xf63d,	// (0x0001a2b0) list_double_heading_pane_g

0x7a2a,	// (0x0001269d) list_double_heading_pane_t1_ParamLimits

0x7a2a,	// (0x0001269d) list_double_heading_pane_t1

0x7a40,	// (0x000126b3) list_double_heading_pane_t2_ParamLimits

0x7a40,	// (0x000126b3) list_double_heading_pane_t2

0x0001,

0xf642,	// (0x0001a2b5) list_double_heading_pane_t_ParamLimits

0xf642,	// (0x0001a2b5) list_double_heading_pane_t

0x7a52,	// (0x000126c5) list_double_graphic_heading_pane_g1_ParamLimits

0x7a52,	// (0x000126c5) list_double_graphic_heading_pane_g1

0x7a0d,	// (0x00012680) list_double_graphic_heading_pane_g2_ParamLimits

0x7a0d,	// (0x00012680) list_double_graphic_heading_pane_g2

0x7a1e,	// (0x00012691) list_double_graphic_heading_pane_g3_ParamLimits

0x7a1e,	// (0x00012691) list_double_graphic_heading_pane_g3

0x0002,

0xf647,	// (0x0001a2ba) list_double_graphic_heading_pane_g_ParamLimits

0xf647,	// (0x0001a2ba) list_double_graphic_heading_pane_g

0x7a5e,	// (0x000126d1) list_double_graphic_heading_pane_t1_ParamLimits

0x7a5e,	// (0x000126d1) list_double_graphic_heading_pane_t1

0x7a74,	// (0x000126e7) list_double_graphic_heading_pane_t2_ParamLimits

0x7a74,	// (0x000126e7) list_double_graphic_heading_pane_t2

0x0001,

0xf64e,	// (0x0001a2c1) list_double_graphic_heading_pane_t_ParamLimits

0xf64e,	// (0x0001a2c1) list_double_graphic_heading_pane_t

0x7977,	// (0x000125ea) list_double_time_pane_g1_ParamLimits

0x7977,	// (0x000125ea) list_double_time_pane_g1

0x780a,	// (0x0001247d) list_double_time_pane_g2_ParamLimits

0x780a,	// (0x0001247d) list_double_time_pane_g2

0x0001,

0xf653,	// (0x0001a2c6) list_double_time_pane_g_ParamLimits

0xf653,	// (0x0001a2c6) list_double_time_pane_g

0x7a86,	// (0x000126f9) list_double_time_pane_t1_ParamLimits

0x7a86,	// (0x000126f9) list_double_time_pane_t1

0x7a9c,	// (0x0001270f) list_double_time_pane_t2_ParamLimits

0x7a9c,	// (0x0001270f) list_double_time_pane_t2

0x7aae,	// (0x00012721) list_double_time_pane_t3_ParamLimits

0x7aae,	// (0x00012721) list_double_time_pane_t3

0x7ac0,	// (0x00012733) list_double_time_pane_t4_ParamLimits

0x7ac0,	// (0x00012733) list_double_time_pane_t4

0x0003,

0xf658,	// (0x0001a2cb) list_double_time_pane_t_ParamLimits

0xf658,	// (0x0001a2cb) list_double_time_pane_t

0x7924,	// (0x00012597) list_setting_pane_g1_ParamLimits

0x7924,	// (0x00012597) list_setting_pane_g1

0x784f,	// (0x000124c2) list_setting_pane_g2_ParamLimits

0x784f,	// (0x000124c2) list_setting_pane_g2

0x0001,

0xf661,	// (0x0001a2d4) list_setting_pane_g_ParamLimits

0xf661,	// (0x0001a2d4) list_setting_pane_g

0x7ad2,	// (0x00012745) list_setting_pane_t1_ParamLimits

0x7ad2,	// (0x00012745) list_setting_pane_t1

0x7ae9,	// (0x0001275c) list_setting_pane_t2_ParamLimits

0x7ae9,	// (0x0001275c) list_setting_pane_t2

0x0002,

0xf666,	// (0x0001a2d9) list_setting_pane_t_ParamLimits

0xf666,	// (0x0001a2d9) list_setting_pane_t

0x7b28,	// (0x0001279b) set_value_pane_cp_ParamLimits

0x7b28,	// (0x0001279b) set_value_pane_cp

0x7924,	// (0x00012597) list_setting_number_pane_g1_ParamLimits

0x7924,	// (0x00012597) list_setting_number_pane_g1

0x784f,	// (0x000124c2) list_setting_number_pane_g2_ParamLimits

0x784f,	// (0x000124c2) list_setting_number_pane_g2

0x0001,

0xf661,	// (0x0001a2d4) list_setting_number_pane_g_ParamLimits

0xf661,	// (0x0001a2d4) list_setting_number_pane_g

0x7b34,	// (0x000127a7) list_setting_number_pane_t1_ParamLimits

0x7b34,	// (0x000127a7) list_setting_number_pane_t1

0x7b48,	// (0x000127bb) list_setting_number_pane_t2_ParamLimits

0x7b48,	// (0x000127bb) list_setting_number_pane_t2

0x7b5f,	// (0x000127d2) list_setting_number_pane_t3_ParamLimits

0x7b5f,	// (0x000127d2) list_setting_number_pane_t3

0x0003,

0xf66d,	// (0x0001a2e0) list_setting_number_pane_t_ParamLimits

0xf66d,	// (0x0001a2e0) list_setting_number_pane_t

0x7b28,	// (0x0001279b) set_value_pane_ParamLimits

0x7b28,	// (0x0001279b) set_value_pane

0x7ba2,	// (0x00012815) bg_set_opt_pane_ParamLimits

0x7ba2,	// (0x00012815) bg_set_opt_pane

0x7bc3,	// (0x00012836) set_value_pane_t1

0x7bd1,	// (0x00012844) slider_set_pane_cp3

0x7bda,	// (0x0001284d) volume_small_pane_cp

0x7be3,	// (0x00012856) list_form_gen_pane

0x7bec,	// (0x0001285f) scroll_pane_cp8

0x7c05,	// (0x00012878) form_field_data_pane_ParamLimits

0x7c05,	// (0x00012878) form_field_data_pane

0x7c27,	// (0x0001289a) form_field_data_wide_pane_ParamLimits

0x7c27,	// (0x0001289a) form_field_data_wide_pane

0x7c4a,	// (0x000128bd) form_field_popup_pane_ParamLimits

0x7c4a,	// (0x000128bd) form_field_popup_pane

0x7c6a,	// (0x000128dd) form_field_popup_wide_pane_ParamLimits

0x7c6a,	// (0x000128dd) form_field_popup_wide_pane

0x7c87,	// (0x000128fa) form_field_slider_pane_ParamLimits

0x7c87,	// (0x000128fa) form_field_slider_pane

0x7c9a,	// (0x0001290d) form_field_slider_wide_pane_ParamLimits

0x7c9a,	// (0x0001290d) form_field_slider_wide_pane

0x7cad,	// (0x00012920) data_form_pane

0x7cc3,	// (0x00012936) form_field_data_pane_t1

0x7cdb,	// (0x0001294e) input_focus_pane

0x7ce9,	// (0x0001295c) data_form_wide_pane

0x7d15,	// (0x00012988) form_field_data_wide_pane_t1

0x74d1,	// (0x00012144) input_focus_pane_cp6

0x7d34,	// (0x000129a7) form_field_popup_pane_t1

0x7cdb,	// (0x0001294e) input_focus_pane_cp7

0x7d4c,	// (0x000129bf) list_form_pane

0x7d60,	// (0x000129d3) form_field_popup_wide_pane_t1

0x7cdb,	// (0x0001294e) input_focus_pane_cp8

0x7d72,	// (0x000129e5) list_form_wide_pane

0x7d86,	// (0x000129f9) form_field_slider_pane_t1_ParamLimits

0x7d86,	// (0x000129f9) form_field_slider_pane_t1

0x7d98,	// (0x00012a0b) form_field_slider_pane_t2_ParamLimits

0x7d98,	// (0x00012a0b) form_field_slider_pane_t2

0x0001,

0xf67d,	// (0x0001a2f0) form_field_slider_pane_t_ParamLimits

0xf67d,	// (0x0001a2f0) form_field_slider_pane_t

0x716c,	// (0x00011ddf) input_focus_pane_cp9_ParamLimits

0x716c,	// (0x00011ddf) input_focus_pane_cp9

0x7daa,	// (0x00012a1d) slider_cont_pane_ParamLimits

0x7daa,	// (0x00012a1d) slider_cont_pane

0x7dbe,	// (0x00012a31) form_field_slider_wide_pane_t1_ParamLimits

0x7dbe,	// (0x00012a31) form_field_slider_wide_pane_t1

0x7dd0,	// (0x00012a43) form_field_slider_wide_pane_t2_ParamLimits

0x7dd0,	// (0x00012a43) form_field_slider_wide_pane_t2

0x0001,

0xf682,	// (0x0001a2f5) form_field_slider_wide_pane_t_ParamLimits

0xf682,	// (0x0001a2f5) form_field_slider_wide_pane_t

0x716c,	// (0x00011ddf) input_focus_pane_cp10_ParamLimits

0x716c,	// (0x00011ddf) input_focus_pane_cp10

0x7de2,	// (0x00012a55) slider_cont_pane_cp1_ParamLimits

0x7de2,	// (0x00012a55) slider_cont_pane_cp1

0x7df6,	// (0x00012a69) slider_form_pane_cp

0x7dfe,	// (0x00012a71) input_focus_pane_g1

0x7e06,	// (0x00012a79) input_focus_pane_g2

0x7e0e,	// (0x00012a81) input_focus_pane_g3

0x7e16,	// (0x00012a89) input_focus_pane_g4

0x7e1e,	// (0x00012a91) input_focus_pane_g5

0x7e26,	// (0x00012a99) input_focus_pane_g6

0x7e2e,	// (0x00012aa1) input_focus_pane_g7

0x7e36,	// (0x00012aa9) input_focus_pane_g8

0x7e3e,	// (0x00012ab1) input_focus_pane_g9

0x6ded,	// (0x00011a60) input_focus_pane_g10

0x0009,

0xf687,	// (0x0001a2fa) input_focus_pane_g

0x9afc,	// (0x0001476f) wait_border_pane_g3_copy1

0x7e46,	// (0x00012ab9) data_form_pane_t1

0x6ded,	// (0x00011a60) wait_anim_pane_g1_copy1

0xaa7b,	// (0x000156ee) data_form_wide_pane_t1

0x7e61,	// (0x00012ad4) list_form_graphic_pane_cp_ParamLimits

0x7e61,	// (0x00012ad4) list_form_graphic_pane_cp

0xaa50,	// (0x000156c3) slider_form_pane_g1

0xaa59,	// (0x000156cc) slider_form_pane_g2

0x0006,

0xf98a,	// (0x0001a5fd) slider_form_pane_g

0x7e7a,	// (0x00012aed) list_form_graphic_pane_ParamLimits

0x7e7a,	// (0x00012aed) list_form_graphic_pane

0x7e96,	// (0x00012b09) list_form_graphic_pane_g1

0x7e9e,	// (0x00012b11) list_form_graphic_pane_t1_ParamLimits

0x7e9e,	// (0x00012b11) list_form_graphic_pane_t1

0x6ed7,	// (0x00011b4a) list_highlight_pane_cp5_ParamLimits

0x6ed7,	// (0x00011b4a) list_highlight_pane_cp5

0x7eb3,	// (0x00012b26) find_pane_g1

0x7ebc,	// (0x00012b2f) input_find_pane

0x7ec5,	// (0x00012b38) input_find_pane_g1_ParamLimits

0x7ec5,	// (0x00012b38) input_find_pane_g1

0x7ed1,	// (0x00012b44) input_find_pane_t1_ParamLimits

0x7ed1,	// (0x00012b44) input_find_pane_t1

0x7ee6,	// (0x00012b59) input_find_pane_t2_ParamLimits

0x7ee6,	// (0x00012b59) input_find_pane_t2

0x0001,

0xf69c,	// (0x0001a30f) input_find_pane_t_ParamLimits

0xf69c,	// (0x0001a30f) input_find_pane_t

0x7efb,	// (0x00012b6e) input_focus_pane_cp5_ParamLimits

0x7efb,	// (0x00012b6e) input_focus_pane_cp5

0x7f15,	// (0x00012b88) bg_popup_window_pane_cp2_ParamLimits

0x7f15,	// (0x00012b88) bg_popup_window_pane_cp2

0x7f22,	// (0x00012b95) listscroll_menu_pane_ParamLimits

0x7f22,	// (0x00012b95) listscroll_menu_pane

0x7f2e,	// (0x00012ba1) popup_submenu_window_ParamLimits

0x7f2e,	// (0x00012ba1) popup_submenu_window

0x7f5a,	// (0x00012bcd) find_popup_pane_g1

0x7f62,	// (0x00012bd5) input_popup_find_pane_cp

0x7efb,	// (0x00012b6e) input_focus_pane_cp4_ParamLimits

0x7efb,	// (0x00012b6e) input_focus_pane_cp4

0x7f78,	// (0x00012beb) input_popup_find_pane_t1_ParamLimits

0x7f78,	// (0x00012beb) input_popup_find_pane_t1

0x6df7,	// (0x00011a6a) bg_popup_sub_pane_cp

0x7fa6,	// (0x00012c19) listscroll_popup_sub_pane

0x7fae,	// (0x00012c21) list_submenu_pane_ParamLimits

0x7fae,	// (0x00012c21) list_submenu_pane

0x7fbf,	// (0x00012c32) scroll_pane_cp4

0x7fc7,	// (0x00012c3a) list_single_popup_submenu_pane_ParamLimits

0x7fc7,	// (0x00012c3a) list_single_popup_submenu_pane

0x7fdb,	// (0x00012c4e) list_single_popup_submenu_pane_g1

0x7fe3,	// (0x00012c56) list_single_popup_submenu_pane_t1_ParamLimits

0x7fe3,	// (0x00012c56) list_single_popup_submenu_pane_t1

0x6ed7,	// (0x00011b4a) bg_active_tab_pane_cp1_ParamLimits

0x6ed7,	// (0x00011b4a) bg_active_tab_pane_cp1

0x7ff8,	// (0x00012c6b) tabs_2_active_pane_g1

0x8000,	// (0x00012c73) tabs_2_active_pane_t1

0x6ed7,	// (0x00011b4a) bg_passive_tab_pane_cp1_ParamLimits

0x6ed7,	// (0x00011b4a) bg_passive_tab_pane_cp1

0x7ff8,	// (0x00012c6b) tabs_2_passive_pane_g1

0x8000,	// (0x00012c73) tabs_2_passive_pane_t1

0x8012,	// (0x00012c85) bg_active_tab_pane_cp4

0x8020,	// (0x00012c93) tabs_2_long_active_pane_t1

0x8033,	// (0x00012ca6) bg_passive_tab_pane_cp4

0x59c5,	// (0x00010638) list_single_midp_graphic_pane_g4_ParamLimits

0x8012,	// (0x00012c85) bg_active_tab_pane_cp5

0x803f,	// (0x00012cb2) tabs_3_long_active_pane_t1

0x8033,	// (0x00012ca6) bg_passive_tab_pane_cp5

0x59c5,	// (0x00010638) list_single_midp_graphic_pane_g4

0x6ed7,	// (0x00011b4a) bg_popup_window_pane_cp13_ParamLimits

0x6ed7,	// (0x00011b4a) bg_popup_window_pane_cp13

0x805a,	// (0x00012ccd) listscroll_popup_fast_pane_ParamLimits

0x805a,	// (0x00012ccd) listscroll_popup_fast_pane

0x8069,	// (0x00012cdc) grid_popup_fast_pane_ParamLimits

0x8069,	// (0x00012cdc) grid_popup_fast_pane

0x807b,	// (0x00012cee) scroll_pane_cp9_ParamLimits

0x807b,	// (0x00012cee) scroll_pane_cp9

0xc972,	// (0x000175e5) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc972,	// (0x000175e5) list_single_graphic_hl_pane_t1_cp2

0x809f,	// (0x00012d12) input_focus_pane_cp20_ParamLimits

0x809f,	// (0x00012d12) input_focus_pane_cp20

0x80ad,	// (0x00012d20) query_popup_data_pane_t1_ParamLimits

0x80ad,	// (0x00012d20) query_popup_data_pane_t1

0x80c0,	// (0x00012d33) query_popup_data_pane_t2_ParamLimits

0x80c0,	// (0x00012d33) query_popup_data_pane_t2

0x8106,	// (0x00012d79) query_popup_data_pane_t3_ParamLimits

0x8106,	// (0x00012d79) query_popup_data_pane_t3

0x8147,	// (0x00012dba) query_popup_data_pane_t4_ParamLimits

0x8147,	// (0x00012dba) query_popup_data_pane_t4

0x8183,	// (0x00012df6) query_popup_data_pane_t5_ParamLimits

0x8183,	// (0x00012df6) query_popup_data_pane_t5

0x0004,

0xf6a1,	// (0x0001a314) query_popup_data_pane_t_ParamLimits

0xf6a1,	// (0x0001a314) query_popup_data_pane_t

0x7dfe,	// (0x00012a71) bg_set_opt_pane_g1

0x7e06,	// (0x00012a79) bg_set_opt_pane_g2

0x7e0e,	// (0x00012a81) bg_set_opt_pane_g3

0x7e16,	// (0x00012a89) bg_set_opt_pane_g4

0x7e1e,	// (0x00012a91) bg_set_opt_pane_g5

0x7e26,	// (0x00012a99) bg_set_opt_pane_g6

0x7e2e,	// (0x00012aa1) bg_set_opt_pane_g7

0x7e36,	// (0x00012aa9) bg_set_opt_pane_g8

0x7e3e,	// (0x00012ab1) bg_set_opt_pane_g9

0x0008,

0xf6ac,	// (0x0001a31f) bg_set_opt_pane_g

0x4fd5,	// (0x0000fc48) control_top_pane_stacon_ParamLimits

0x4fd5,	// (0x0000fc48) control_top_pane_stacon

0x5028,	// (0x0000fc9b) signal_pane_stacon_ParamLimits

0x5028,	// (0x0000fc9b) signal_pane_stacon

0x8802,	// (0x00013475) stacon_top_pane_g1_ParamLimits

0x8802,	// (0x00013475) stacon_top_pane_g1

0x504d,	// (0x0000fcc0) title_pane_stacon_ParamLimits

0x504d,	// (0x0000fcc0) title_pane_stacon

0x5077,	// (0x0000fcea) uni_indicator_pane_stacon_ParamLimits

0x5077,	// (0x0000fcea) uni_indicator_pane_stacon

0x508c,	// (0x0000fcff) battery_pane_stacon_ParamLimits

0x508c,	// (0x0000fcff) battery_pane_stacon

0x50d0,	// (0x0000fd43) control_bottom_pane_stacon_ParamLimits

0x50d0,	// (0x0000fd43) control_bottom_pane_stacon

0x50f3,	// (0x0000fd66) navi_pane_stacon_ParamLimits

0x50f3,	// (0x0000fd66) navi_pane_stacon

0x8824,	// (0x00013497) stacon_bottom_pane_g1_ParamLimits

0x8824,	// (0x00013497) stacon_bottom_pane_g1

0x4d38,	// (0x0000f9ab) aid_levels_signal_lsc_ParamLimits

0x4d38,	// (0x0000f9ab) aid_levels_signal_lsc

0x4d4e,	// (0x0000f9c1) signal_pane_stacon_g1_ParamLimits

0x4d4e,	// (0x0000f9c1) signal_pane_stacon_g1

0x4d62,	// (0x0000f9d5) signal_pane_stacon_g2_ParamLimits

0x4d62,	// (0x0000f9d5) signal_pane_stacon_g2

0x0001,

0xf6bf,	// (0x0001a332) signal_pane_stacon_g_ParamLimits

0xf6bf,	// (0x0001a332) signal_pane_stacon_g

0x4d97,	// (0x0000fa0a) title_pane_stacon_t1_ParamLimits

0x4d97,	// (0x0000fa0a) title_pane_stacon_t1

0x81c7,	// (0x00012e3a) uni_indicator_pane_stacon_g1

0x81d1,	// (0x00012e44) uni_indicator_pane_stacon_g2

0x81db,	// (0x00012e4e) uni_indicator_pane_stacon_g3

0x81e5,	// (0x00012e58) uni_indicator_pane_stacon_g4

0x0003,

0xf6cb,	// (0x0001a33e) uni_indicator_pane_stacon_g

0x4dbc,	// (0x0000fa2f) control_top_pane_stacon_g1

0x4dc4,	// (0x0000fa37) control_top_pane_stacon_t1_ParamLimits

0x4dc4,	// (0x0000fa37) control_top_pane_stacon_t1

0x4dfb,	// (0x0000fa6e) aid_levels_battery_lsc_ParamLimits

0x4dfb,	// (0x0000fa6e) aid_levels_battery_lsc

0x4e12,	// (0x0000fa85) battery_pane_stacon_g1_ParamLimits

0x4e12,	// (0x0000fa85) battery_pane_stacon_g1

0x4e25,	// (0x0000fa98) battery_pane_stacon_g2_ParamLimits

0x4e25,	// (0x0000fa98) battery_pane_stacon_g2

0x0001,

0xf6d4,	// (0x0001a347) battery_pane_stacon_g_ParamLimits

0xf6d4,	// (0x0001a347) battery_pane_stacon_g

0x4e63,	// (0x0000fad6) navi_icon_pane_stacon

0x4e77,	// (0x0000faea) navi_navi_pane_stacon

0x4e63,	// (0x0000fad6) navi_text_pane_stacon

0x4dbc,	// (0x0000fa2f) control_bottom_pane_stacon_g1

0x4e8b,	// (0x0000fafe) control_bottom_pane_stacon_t1_ParamLimits

0x4e8b,	// (0x0000fafe) control_bottom_pane_stacon_t1

0x8209,	// (0x00012e7c) grid_app_pane_ParamLimits

0x8209,	// (0x00012e7c) grid_app_pane

0x822d,	// (0x00012ea0) scroll_pane_cp15_ParamLimits

0x822d,	// (0x00012ea0) scroll_pane_cp15

0x8240,	// (0x00012eb3) cell_app_pane_ParamLimits

0x8240,	// (0x00012eb3) cell_app_pane

0x8264,	// (0x00012ed7) cell_app_pane_g1_ParamLimits

0x8264,	// (0x00012ed7) cell_app_pane_g1

0x8288,	// (0x00012efb) cell_app_pane_g2_ParamLimits

0x8288,	// (0x00012efb) cell_app_pane_g2

0x0001,

0xf6d9,	// (0x0001a34c) cell_app_pane_g_ParamLimits

0xf6d9,	// (0x0001a34c) cell_app_pane_g

0x8294,	// (0x00012f07) cell_app_pane_t1_ParamLimits

0x8294,	// (0x00012f07) cell_app_pane_t1

0x82ab,	// (0x00012f1e) grid_highlight_pane_ParamLimits

0x82ab,	// (0x00012f1e) grid_highlight_pane

0x7dfe,	// (0x00012a71) cell_highlight_pane_g1

0x7e06,	// (0x00012a79) cell_highlight_pane_g2

0x7e0e,	// (0x00012a81) cell_highlight_pane_g3

0x7e16,	// (0x00012a89) cell_highlight_pane_g4

0x7e1e,	// (0x00012a91) cell_highlight_pane_g5

0x7e26,	// (0x00012a99) cell_highlight_pane_g6

0x7e2e,	// (0x00012aa1) cell_highlight_pane_g7

0x7e36,	// (0x00012aa9) cell_highlight_pane_g8

0x7e3e,	// (0x00012ab1) cell_highlight_pane_g9

0x6ded,	// (0x00011a60) cell_highlight_pane_g10

0x0009,

0xf687,	// (0x0001a2fa) cell_highlight_pane_g

0x82bc,	// (0x00012f2f) bg_scroll_pane

0x4ed5,	// (0x0000fb48) scroll_handle_pane

0x8303,	// (0x00012f76) scroll_bg_pane_g1

0x8318,	// (0x00012f8b) scroll_bg_pane_g2

0x8330,	// (0x00012fa3) scroll_bg_pane_g3

0x0002,

0xf6de,	// (0x0001a351) scroll_bg_pane_g

0x8345,	// (0x00012fb8) scroll_handle_focus_pane_ParamLimits

0x8345,	// (0x00012fb8) scroll_handle_focus_pane

0x8303,	// (0x00012f76) scroll_handle_pane_g1

0x8352,	// (0x00012fc5) scroll_handle_pane_g2

0x8330,	// (0x00012fa3) scroll_handle_pane_g3

0x0002,

0xf6e5,	// (0x0001a358) scroll_handle_pane_g

0x7efb,	// (0x00012b6e) bg_popup_sub_pane_cp21_ParamLimits

0x7efb,	// (0x00012b6e) bg_popup_sub_pane_cp21

0x8366,	// (0x00012fd9) popup_fep_japan_predictive_window_t1_ParamLimits

0x8366,	// (0x00012fd9) popup_fep_japan_predictive_window_t1

0x8380,	// (0x00012ff3) popup_fep_japan_predictive_window_t2_ParamLimits

0x8380,	// (0x00012ff3) popup_fep_japan_predictive_window_t2

0x83b3,	// (0x00013026) popup_fep_japan_predictive_window_t3_ParamLimits

0x83b3,	// (0x00013026) popup_fep_japan_predictive_window_t3

0x0002,

0xf6ec,	// (0x0001a35f) popup_fep_japan_predictive_window_t_ParamLimits

0xf6ec,	// (0x0001a35f) popup_fep_japan_predictive_window_t

0x6df7,	// (0x00011a6a) bg_popup_sub_pane_cp23

0x83ea,	// (0x0001305d) listscroll_japin_cand_pane

0x83f2,	// (0x00013065) popup_fep_japan_candidate_window_t1

0x8400,	// (0x00013073) candidate_pane_ParamLimits

0x8400,	// (0x00013073) candidate_pane

0x8412,	// (0x00013085) scroll_pane_cp30

0x841a,	// (0x0001308d) list_single_popup_jap_candidate_pane_ParamLimits

0x841a,	// (0x0001308d) list_single_popup_jap_candidate_pane

0x6df7,	// (0x00011a6a) list_highlight_pane_cp30

0x842f,	// (0x000130a2) list_single_popup_jap_candidate_pane_t1

0x843e,	// (0x000130b1) level_1_signal

0x8450,	// (0x000130c3) level_2_signal

0x8463,	// (0x000130d6) level_3_signal

0x8476,	// (0x000130e9) level_4_signal

0x8489,	// (0x000130fc) level_5_signal

0x849c,	// (0x0001310f) level_6_signal

0x84af,	// (0x00013122) level_7_signal

0x843e,	// (0x000130b1) level_1_battery

0x8450,	// (0x000130c3) level_2_battery

0x8463,	// (0x000130d6) level_3_battery

0x8476,	// (0x000130e9) level_4_battery

0x8489,	// (0x000130fc) level_5_battery

0x849c,	// (0x0001310f) level_6_battery

0x84af,	// (0x00013122) level_7_battery

0x84da,	// (0x0001314d) list_menu_pane_ParamLimits

0x84da,	// (0x0001314d) list_menu_pane

0x84f0,	// (0x00013163) scroll_pane_cp25_ParamLimits

0x84f0,	// (0x00013163) scroll_pane_cp25

0x8509,	// (0x0001317c) list_double2_graphic_pane_cp2_ParamLimits

0x8509,	// (0x0001317c) list_double2_graphic_pane_cp2

0x8509,	// (0x0001317c) list_double2_large_graphic_pane_cp2_ParamLimits

0x8509,	// (0x0001317c) list_double2_large_graphic_pane_cp2

0x8509,	// (0x0001317c) list_double2_pane_cp2_ParamLimits

0x8509,	// (0x0001317c) list_double2_pane_cp2

0x8509,	// (0x0001317c) list_double_graphic_pane_cp2_ParamLimits

0x8509,	// (0x0001317c) list_double_graphic_pane_cp2

0x8509,	// (0x0001317c) list_double_large_graphic_pane_cp2_ParamLimits

0x8509,	// (0x0001317c) list_double_large_graphic_pane_cp2

0x8509,	// (0x0001317c) list_double_number_pane_cp2_ParamLimits

0x8509,	// (0x0001317c) list_double_number_pane_cp2

0x8509,	// (0x0001317c) list_double_pane_cp2_ParamLimits

0x8509,	// (0x0001317c) list_double_pane_cp2

0x852d,	// (0x000131a0) list_single_2graphic_pane_cp2_ParamLimits

0x852d,	// (0x000131a0) list_single_2graphic_pane_cp2

0x852d,	// (0x000131a0) list_single_graphic_heading_pane_cp2_ParamLimits

0x852d,	// (0x000131a0) list_single_graphic_heading_pane_cp2

0x852d,	// (0x000131a0) list_single_graphic_pane_cp2_ParamLimits

0x852d,	// (0x000131a0) list_single_graphic_pane_cp2

0x852d,	// (0x000131a0) list_single_heading_pane_cp2_ParamLimits

0x852d,	// (0x000131a0) list_single_heading_pane_cp2

0x8546,	// (0x000131b9) list_single_large_graphic_pane_cp2_ParamLimits

0x8546,	// (0x000131b9) list_single_large_graphic_pane_cp2

0x852d,	// (0x000131a0) list_single_number_heading_pane_cp2_ParamLimits

0x852d,	// (0x000131a0) list_single_number_heading_pane_cp2

0x852d,	// (0x000131a0) list_single_number_pane_cp2_ParamLimits

0x852d,	// (0x000131a0) list_single_number_pane_cp2

0x852d,	// (0x000131a0) list_single_pane_cp2_ParamLimits

0x852d,	// (0x000131a0) list_single_pane_cp2

0x85c2,	// (0x00013235) bg_popup_sub_pane_cp22

0x4f87,	// (0x0000fbfa) popup_side_volume_key_window_g1

0x4fb1,	// (0x0000fc24) popup_side_volume_key_window_t1

0x4fcd,	// (0x0000fc40) volume_small_pane_cp1

0x716c,	// (0x00011ddf) bg_popup_sub_pane_cp24_ParamLimits

0x716c,	// (0x00011ddf) bg_popup_sub_pane_cp24

0x85d8,	// (0x0001324b) fep_china_uni_candidate_pane_ParamLimits

0x85d8,	// (0x0001324b) fep_china_uni_candidate_pane

0x85ec,	// (0x0001325f) fep_china_uni_entry_pane

0x85fc,	// (0x0001326f) popup_fep_china_uni_window_g1

0x8618,	// (0x0001328b) fep_china_uni_entry_pane_g1

0x8620,	// (0x00013293) fep_china_uni_entry_pane_g2

0x0001,

0xf71d,	// (0x0001a390) fep_china_uni_entry_pane_g

0x8628,	// (0x0001329b) fep_entry_item_pane

0x8632,	// (0x000132a5) fep_candidate_item_pane

0x863a,	// (0x000132ad) fep_china_uni_candidate_pane_g1

0x8642,	// (0x000132b5) fep_china_uni_candidate_pane_g2

0x864a,	// (0x000132bd) fep_china_uni_candidate_pane_g3

0x8652,	// (0x000132c5) fep_china_uni_candidate_pane_g4

0x0003,

0xf722,	// (0x0001a395) fep_china_uni_candidate_pane_g

0x6ded,	// (0x00011a60) fep_entry_item_pane_g1

0x865a,	// (0x000132cd) fep_entry_item_pane_t1_ParamLimits

0x865a,	// (0x000132cd) fep_entry_item_pane_t1

0x8670,	// (0x000132e3) fep_candidate_item_pane_t1_ParamLimits

0x8670,	// (0x000132e3) fep_candidate_item_pane_t1

0x8685,	// (0x000132f8) fep_candidate_item_pane_t2_ParamLimits

0x8685,	// (0x000132f8) fep_candidate_item_pane_t2

0x0001,

0xf72b,	// (0x0001a39e) fep_candidate_item_pane_t_ParamLimits

0xf72b,	// (0x0001a39e) fep_candidate_item_pane_t

0x6ed7,	// (0x00011b4a) list_highlight_pane_cp31_ParamLimits

0x6ed7,	// (0x00011b4a) list_highlight_pane_cp31

0x8697,	// (0x0001330a) level_1_signal_lsc

0x86a0,	// (0x00013313) level_2_signal_lsc

0x86a9,	// (0x0001331c) level_3_signal_lsc

0x86b2,	// (0x00013325) level_4_signal_lsc

0x86bb,	// (0x0001332e) level_5_signal_lsc

0x86c4,	// (0x00013337) level_6_signal_lsc

0x86cd,	// (0x00013340) level_7_signal_lsc

0x86cd,	// (0x00013340) level_1_battery_lsc

0x86d6,	// (0x00013349) level_2_battery_lsc

0x86df,	// (0x00013352) level_3_battery_lsc

0x86e8,	// (0x0001335b) level_4_battery_lsc

0x86f1,	// (0x00013364) level_5_battery_lsc

0x86fa,	// (0x0001336d) level_6_battery_lsc

0x8697,	// (0x0001330a) level_7_battery_lsc

0x8703,	// (0x00013376) scroll_handle_focus_pane_g1

0x870c,	// (0x0001337f) scroll_handle_focus_pane_g2

0x8715,	// (0x00013388) scroll_handle_focus_pane_g3

0x0002,

0xf730,	// (0x0001a3a3) scroll_handle_focus_pane_g

0x871e,	// (0x00013391) list_single_2graphic_pane_g1_ParamLimits

0x871e,	// (0x00013391) list_single_2graphic_pane_g1

0x7799,	// (0x0001240c) list_single_2graphic_pane_g2_ParamLimits

0x7799,	// (0x0001240c) list_single_2graphic_pane_g2

0x771f,	// (0x00012392) list_single_2graphic_pane_g3_ParamLimits

0x771f,	// (0x00012392) list_single_2graphic_pane_g3

0x872a,	// (0x0001339d) list_single_2graphic_pane_g4_ParamLimits

0x872a,	// (0x0001339d) list_single_2graphic_pane_g4

0x0003,

0xf737,	// (0x0001a3aa) list_single_2graphic_pane_g_ParamLimits

0xf737,	// (0x0001a3aa) list_single_2graphic_pane_g

0x873b,	// (0x000133ae) list_single_2graphic_pane_t1_ParamLimits

0x873b,	// (0x000133ae) list_single_2graphic_pane_t1

0x8769,	// (0x000133dc) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x8769,	// (0x000133dc) list_double2_graphic_large_graphic_pane_g1

0x783e,	// (0x000124b1) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x783e,	// (0x000124b1) list_double2_graphic_large_graphic_pane_g2

0x784f,	// (0x000124c2) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x784f,	// (0x000124c2) list_double2_graphic_large_graphic_pane_g3

0x8779,	// (0x000133ec) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x8779,	// (0x000133ec) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf740,	// (0x0001a3b3) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf740,	// (0x0001a3b3) list_double2_graphic_large_graphic_pane_g

0x8785,	// (0x000133f8) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x8785,	// (0x000133f8) list_double2_graphic_large_graphic_pane_t1

0x879b,	// (0x0001340e) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x879b,	// (0x0001340e) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf749,	// (0x0001a3bc) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf749,	// (0x0001a3bc) list_double2_graphic_large_graphic_pane_t

0x88ec,	// (0x0001355f) popup_fast_swap_window_ParamLimits

0x88ec,	// (0x0001355f) popup_fast_swap_window

0x8908,	// (0x0001357b) popup_side_volume_key_window

0x8924,	// (0x00013597) stacon_top_pane

0x892e,	// (0x000135a1) status_pane_ParamLimits

0x892e,	// (0x000135a1) status_pane

0x893c,	// (0x000135af) status_small_pane

0x6df7,	// (0x00011a6a) control_pane

0x6df7,	// (0x00011a6a) stacon_bottom_pane

0x7bec,	// (0x0001285f) scroll_pane_cp121

0x7be3,	// (0x00012856) set_content_pane

0x87ad,	// (0x00013420) bg_active_tab_pane_g1_cp1

0x87b6,	// (0x00013429) bg_active_tab_pane_g2_cp1

0x87bf,	// (0x00013432) bg_active_tab_pane_g3_cp1

0x87ad,	// (0x00013420) bg_passive_tab_pane_g1_cp1

0x87b6,	// (0x00013429) bg_passive_tab_pane_g2_cp1

0x87bf,	// (0x00013432) bg_passive_tab_pane_g3_cp1

0x87c8,	// (0x0001343b) bg_active_tab_pane_g1_cp2

0x87b6,	// (0x00013429) bg_active_tab_pane_g2_cp2

0x87d1,	// (0x00013444) bg_active_tab_pane_g3_cp2

0x87c8,	// (0x0001343b) bg_passive_tab_pane_g1_cp2

0x87b6,	// (0x00013429) bg_passive_tab_pane_g2_cp2

0x87d1,	// (0x00013444) bg_passive_tab_pane_g3_cp2

0x87da,	// (0x0001344d) bg_active_tab_pane_g1_cp3

0x87b6,	// (0x00013429) bg_active_tab_pane_g2_cp3

0x87e3,	// (0x00013456) bg_active_tab_pane_g3_cp3

0x87da,	// (0x0001344d) bg_passive_tab_pane_g1_cp3

0x87b6,	// (0x00013429) bg_passive_tab_pane_g2_cp3

0x87e3,	// (0x00013456) bg_passive_tab_pane_g3_cp3

0x87ec,	// (0x0001345f) bg_active_tab_pane_g1_cp4

0x87b6,	// (0x00013429) bg_active_tab_pane_g2_cp4

0x87f7,	// (0x0001346a) bg_active_tab_pane_g3_cp4

0x87ec,	// (0x0001345f) bg_passive_tab_pane_g1_cp4

0x87b6,	// (0x00013429) bg_passive_tab_pane_g2_cp4

0x87f7,	// (0x0001346a) bg_passive_tab_pane_g3_cp4

0x8840,	// (0x000134b3) bg_active_tab_pane_g1_cp5

0x87b6,	// (0x00013429) bg_active_tab_pane_g2_cp5

0x8849,	// (0x000134bc) bg_active_tab_pane_g3_cp5

0x8840,	// (0x000134b3) bg_passive_tab_pane_g1_cp5

0x87b6,	// (0x00013429) bg_passive_tab_pane_g2_cp5

0x8849,	// (0x000134bc) bg_passive_tab_pane_g3_cp5

0x8852,	// (0x000134c5) list_set_graphic_pane_ParamLimits

0x8852,	// (0x000134c5) list_set_graphic_pane

0x6df7,	// (0x00011a6a) bg_set_opt_pane_cp4

0x886f,	// (0x000134e2) list_set_graphic_pane_g1_ParamLimits

0x886f,	// (0x000134e2) list_set_graphic_pane_g1

0x887b,	// (0x000134ee) list_set_graphic_pane_g2_ParamLimits

0x887b,	// (0x000134ee) list_set_graphic_pane_g2

0x0001,

0xf74e,	// (0x0001a3c1) list_set_graphic_pane_g_ParamLimits

0xf74e,	// (0x0001a3c1) list_set_graphic_pane_g

0x0009,

0xfacf,	// (0x0001a742) volume_small_pane_cp_g

0x889f,	// (0x00013512) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x889f,	// (0x00013512) list_double2_large_graphic_pane_g1_cp2

0x88ab,	// (0x0001351e) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x88ab,	// (0x0001351e) list_double2_large_graphic_pane_g2_cp2

0x88bc,	// (0x0001352f) list_double2_large_graphic_pane_g3_cp2

0x88c4,	// (0x00013537) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x88c4,	// (0x00013537) list_double2_large_graphic_pane_t1_cp2

0x88da,	// (0x0001354d) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x88da,	// (0x0001354d) list_double2_large_graphic_pane_t2_cp2

0xa5db,	// (0x0001524e) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xa5db,	// (0x0001524e) list_double_large_graphic_pane_g1_cp2

0xa5ec,	// (0x0001525f) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xa5ec,	// (0x0001525f) list_double_large_graphic_pane_g2_cp2

0x8a55,	// (0x000136c8) list_double_large_graphic_pane_g3_cp2

0xa5fd,	// (0x00015270) list_double_large_graphic_pane_g4_cp

0xa605,	// (0x00015278) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xa605,	// (0x00015278) list_double_large_graphic_pane_t1_cp2

0xa61c,	// (0x0001528f) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xa61c,	// (0x0001528f) list_double_large_graphic_pane_t2_cp2

0x8947,	// (0x000135ba) list_double2_graphic_pane_g1_cp2_ParamLimits

0x8947,	// (0x000135ba) list_double2_graphic_pane_g1_cp2

0x8955,	// (0x000135c8) list_double2_graphic_pane_g2_cp2_ParamLimits

0x8955,	// (0x000135c8) list_double2_graphic_pane_g2_cp2

0x8966,	// (0x000135d9) list_double2_graphic_pane_g3_cp2

0x8970,	// (0x000135e3) list_double2_graphic_pane_t1_cp2_ParamLimits

0x8970,	// (0x000135e3) list_double2_graphic_pane_t1_cp2

0x8986,	// (0x000135f9) list_double2_graphic_pane_t2_cp2_ParamLimits

0x8986,	// (0x000135f9) list_double2_graphic_pane_t2_cp2

0x8998,	// (0x0001360b) list_single_number_heading_pane_g1_cp2_ParamLimits

0x8998,	// (0x0001360b) list_single_number_heading_pane_g1_cp2

0x89a4,	// (0x00013617) list_single_number_heading_pane_g2_cp2

0x89ac,	// (0x0001361f) list_single_number_heading_pane_t1_cp2_ParamLimits

0x89ac,	// (0x0001361f) list_single_number_heading_pane_t1_cp2

0x89c2,	// (0x00013635) list_single_number_heading_pane_t2_cp2_ParamLimits

0x89c2,	// (0x00013635) list_single_number_heading_pane_t2_cp2

0x89d4,	// (0x00013647) list_single_number_heading_pane_t3_cp2_ParamLimits

0x89d4,	// (0x00013647) list_single_number_heading_pane_t3_cp2

0x8998,	// (0x0001360b) list_single_heading_pane_g1_cp2_ParamLimits

0x8998,	// (0x0001360b) list_single_heading_pane_g1_cp2

0x89a4,	// (0x00013617) list_single_heading_pane_g2_cp2

0x89ac,	// (0x0001361f) list_single_heading_pane_t1_cp2_ParamLimits

0x89ac,	// (0x0001361f) list_single_heading_pane_t1_cp2

0xa3e3,	// (0x00015056) list_single_heading_pane_t2_cp2_ParamLimits

0xa3e3,	// (0x00015056) list_single_heading_pane_t2_cp2

0xa32b,	// (0x00014f9e) list_double_graphic_pane_g1_cp2_ParamLimits

0xa32b,	// (0x00014f9e) list_double_graphic_pane_g1_cp2

0xa337,	// (0x00014faa) list_double_graphic_pane_g2_cp2_ParamLimits

0xa337,	// (0x00014faa) list_double_graphic_pane_g2_cp2

0xa346,	// (0x00014fb9) list_double_graphic_pane_g3_cp2

0xa34e,	// (0x00014fc1) list_double_graphic_pane_t1_cp2_ParamLimits

0xa34e,	// (0x00014fc1) list_double_graphic_pane_t1_cp2

0xa364,	// (0x00014fd7) list_double_graphic_pane_t2_cp2_ParamLimits

0xa364,	// (0x00014fd7) list_double_graphic_pane_t2_cp2

0x8a49,	// (0x000136bc) list_double_number_pane_g1_cp2_ParamLimits

0x8a49,	// (0x000136bc) list_double_number_pane_g1_cp2

0x8a55,	// (0x000136c8) list_double_number_pane_g2_cp2

0xa2ef,	// (0x00014f62) list_double_number_pane_t1_cp2_ParamLimits

0xa2ef,	// (0x00014f62) list_double_number_pane_t1_cp2

0xa303,	// (0x00014f76) list_double_number_pane_t2_cp2_ParamLimits

0xa303,	// (0x00014f76) list_double_number_pane_t2_cp2

0xa319,	// (0x00014f8c) list_double_number_pane_t3_cp2_ParamLimits

0xa319,	// (0x00014f8c) list_double_number_pane_t3_cp2

0xa1d8,	// (0x00014e4b) list_single_graphic_pane_g1_cp2_ParamLimits

0xa1d8,	// (0x00014e4b) list_single_graphic_pane_g1_cp2

0x8aad,	// (0x00013720) list_single_graphic_pane_g2_cp2_ParamLimits

0x8aad,	// (0x00013720) list_single_graphic_pane_g2_cp2

0x8ab9,	// (0x0001372c) list_single_graphic_pane_g3_cp2

0xa1ae,	// (0x00014e21) list_single_graphic_pane_t1_cp2_ParamLimits

0xa1ae,	// (0x00014e21) list_single_graphic_pane_t1_cp2

0x8aad,	// (0x00013720) list_single_number_pane_g1_cp2_ParamLimits

0x8aad,	// (0x00013720) list_single_number_pane_g1_cp2

0x8ab9,	// (0x0001372c) list_single_number_pane_g2_cp2

0xa1ae,	// (0x00014e21) list_single_number_pane_t1_cp2_ParamLimits

0xa1ae,	// (0x00014e21) list_single_number_pane_t1_cp2

0xa1c4,	// (0x00014e37) list_single_number_pane_t2_cp2_ParamLimits

0xa1c4,	// (0x00014e37) list_single_number_pane_t2_cp2

0x88ab,	// (0x0001351e) list_double2_pane_g1_cp2_ParamLimits

0x88ab,	// (0x0001351e) list_double2_pane_g1_cp2

0x88bc,	// (0x0001352f) list_double2_pane_g2_cp2

0x8a21,	// (0x00013694) list_double2_pane_t1_cp2_ParamLimits

0x8a21,	// (0x00013694) list_double2_pane_t1_cp2

0x8a37,	// (0x000136aa) list_double2_pane_t2_cp2_ParamLimits

0x8a37,	// (0x000136aa) list_double2_pane_t2_cp2

0x8a49,	// (0x000136bc) list_double_pane_g1_cp2_ParamLimits

0x8a49,	// (0x000136bc) list_double_pane_g1_cp2

0x8a55,	// (0x000136c8) list_double_pane_g2_cp2

0x8a5d,	// (0x000136d0) list_double_pane_t1_cp2_ParamLimits

0x8a5d,	// (0x000136d0) list_double_pane_t1_cp2

0x8a73,	// (0x000136e6) list_double_pane_t2_cp2_ParamLimits

0x8a73,	// (0x000136e6) list_double_pane_t2_cp2

0x8a9d,	// (0x00013710) list_single_pane_cp2_g3

0x8aad,	// (0x00013720) list_single_pane_g1_cp2_ParamLimits

0x8aad,	// (0x00013720) list_single_pane_g1_cp2

0x8ab9,	// (0x0001372c) list_single_pane_g2_cp2

0x8ac1,	// (0x00013734) list_single_pane_t1_cp2_ParamLimits

0x8ac1,	// (0x00013734) list_single_pane_t1_cp2

0x8ad9,	// (0x0001374c) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x8ad9,	// (0x0001374c) list_single_large_graphic_pane_g1_cp2

0x8ae5,	// (0x00013758) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x8ae5,	// (0x00013758) list_single_large_graphic_pane_g2_cp2

0x8af1,	// (0x00013764) list_single_large_graphic_pane_g3_cp2

0x8af9,	// (0x0001376c) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x8af9,	// (0x0001376c) list_single_large_graphic_pane_g4_cp1

0x8b13,	// (0x00013786) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x8b13,	// (0x00013786) list_single_large_graphic_pane_t1_cp2

0xa17a,	// (0x00014ded) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa17a,	// (0x00014ded) list_single_graphic_heading_pane_g1_cp2

0xa147,	// (0x00014dba) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa147,	// (0x00014dba) list_single_graphic_heading_pane_g4_cp2

0x8ab9,	// (0x0001372c) list_single_graphic_heading_pane_g5_cp2

0xa186,	// (0x00014df9) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa186,	// (0x00014df9) list_single_graphic_heading_pane_t1_cp2

0xa19c,	// (0x00014e0f) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa19c,	// (0x00014e0f) list_single_graphic_heading_pane_t2_cp2

0xa13b,	// (0x00014dae) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa13b,	// (0x00014dae) list_single_2graphic_pane_g1_cp2

0xa147,	// (0x00014dba) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa147,	// (0x00014dba) list_single_2graphic_pane_g2_cp2

0x8ab9,	// (0x0001372c) list_single_2graphic_pane_g3_cp2

0xa158,	// (0x00014dcb) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa158,	// (0x00014dcb) list_single_2graphic_pane_g4_cp2

0xa164,	// (0x00014dd7) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa164,	// (0x00014dd7) list_single_2graphic_pane_t1_cp2

0x6ded,	// (0x00011a60) list_highlight_pane_g10_cp1

0x9d07,	// (0x0001497a) list_highlight_pane_g1_cp1

0x9d0f,	// (0x00014982) list_highlight_pane_g2_cp1

0x9d17,	// (0x0001498a) list_highlight_pane_g3_cp1

0x9d1f,	// (0x00014992) list_highlight_pane_g4_cp1

0x9d27,	// (0x0001499a) list_highlight_pane_g5_cp1

0x9d2f,	// (0x000149a2) list_highlight_pane_g6_cp1

0x9d37,	// (0x000149aa) list_highlight_pane_g7_cp1

0x9d3f,	// (0x000149b2) list_highlight_pane_g8_cp1

0x9d47,	// (0x000149ba) list_highlight_pane_g9_cp1

0x9c27,	// (0x0001489a) form_field_slider_pane_t3

0x9c35,	// (0x000148a8) form_field_slider_pane_t4

0x9c43,	// (0x000148b6) slider_form_pane_ParamLimits

0x9c43,	// (0x000148b6) slider_form_pane

0x6df7,	// (0x00011a6a) control_abbreviations

0x6df7,	// (0x00011a6a) control_conventions

0x6df7,	// (0x00011a6a) control_definitions

0x6df7,	// (0x00011a6a) format_table_attribute

0xa42d,	// (0x000150a0) bg_popup_preview_window_pane_g9

0x6df7,	// (0x00011a6a) format_table_data2

0x6df7,	// (0x00011a6a) format_table_data3

0x6df7,	// (0x00011a6a) format_table_data_example

0x0008,

0x6df7,	// (0x00011a6a) intro_purpose

0xf8ea,	// (0x0001a55d) bg_popup_preview_window_pane_g

0x6df7,	// (0x00011a6a) texts_category

0x6df7,	// (0x00011a6a) texts_graphics

0x8b29,	// (0x0001379c) text_digital

0x8b38,	// (0x000137ab) text_primary

0x8b47,	// (0x000137ba) text_primary_small

0x8b56,	// (0x000137c9) text_secondary

0x8b65,	// (0x000137d8) text_title

0xac58,	// (0x000158cb) bg_passive_tab_pane_g1_cp3_srt

0x87b6,	// (0x00013429) bg_passive_tab_pane_g2_cp3_srt

0xac61,	// (0x000158d4) bg_passive_tab_pane_g3_cp3_srt

0x6ed7,	// (0x00011b4a) bg_active_tab_pane_cp3_srt_ParamLimits

0x6ed7,	// (0x00011b4a) bg_active_tab_pane_cp3_srt

0xac6a,	// (0x000158dd) tabs_4_active_pane_srt_g1

0xac72,	// (0x000158e5) tabs_4_active_pane_srt_t1_ParamLimits

0xac72,	// (0x000158e5) tabs_4_active_pane_srt_t1

0xac58,	// (0x000158cb) bg_active_tab_pane_g1_cp3_copy1

0x87b6,	// (0x00013429) bg_active_tab_pane_g2_cp3_copy1

0xac61,	// (0x000158d4) bg_active_tab_pane_g3_cp3_copy1

0x6ed7,	// (0x00011b4a) tabs_2_long_active_pane_srt_ParamLimits

0x6ed7,	// (0x00011b4a) tabs_2_long_active_pane_srt

0x6ed7,	// (0x00011b4a) tabs_2_long_passive_pane_srt_ParamLimits

0x6ed7,	// (0x00011b4a) tabs_2_long_passive_pane_srt

0x8033,	// (0x00012ca6) bg_passive_tab_pane_cp4_srt_ParamLimits

0x8033,	// (0x00012ca6) bg_passive_tab_pane_cp4_srt

0xa883,	// (0x000154f6) bg_passive_tab_pane_g1_cp4_srt

0x87b6,	// (0x00013429) bg_passive_tab_pane_g2_cp4_srt

0xa88c,	// (0x000154ff) bg_passive_tab_pane_g3_cp4_srt

0x8012,	// (0x00012c85) bg_active_tab_pane_cp4_srt_ParamLimits

0x8012,	// (0x00012c85) bg_active_tab_pane_cp4_srt

0xa895,	// (0x00015508) tabs_2_long_active_pane_srt_t1_ParamLimits

0xa895,	// (0x00015508) tabs_2_long_active_pane_srt_t1

0xa883,	// (0x000154f6) bg_active_tab_pane_g1_cp4_srt

0x87b6,	// (0x00013429) bg_active_tab_pane_g2_cp4_srt

0xa88c,	// (0x000154ff) bg_active_tab_pane_g3_cp4_srt

0x716c,	// (0x00011ddf) tabs_3_long_active_pane_srt_ParamLimits

0x716c,	// (0x00011ddf) tabs_3_long_active_pane_srt

0x716c,	// (0x00011ddf) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x716c,	// (0x00011ddf) tabs_3_long_passive_pane_cp_srt

0x716c,	// (0x00011ddf) tabs_3_long_passive_pane_srt_ParamLimits

0x716c,	// (0x00011ddf) tabs_3_long_passive_pane_srt

0x8033,	// (0x00012ca6) bg_passive_tab_pane_cp5_srt_ParamLimits

0x8033,	// (0x00012ca6) bg_passive_tab_pane_cp5_srt

0x8840,	// (0x000134b3) bg_passive_tab_pane_g1_cp5_srt

0x87b6,	// (0x00013429) bg_passive_tab_pane_g2_cp5_srt

0x8849,	// (0x000134bc) bg_passive_tab_pane_g3_cp5_srt

0x8012,	// (0x00012c85) bg_active_tab_pane_cp5_srt_ParamLimits

0x8012,	// (0x00012c85) bg_active_tab_pane_cp5_srt

0xa871,	// (0x000154e4) tabs_3_long_active_pane_srt_t1_ParamLimits

0xa871,	// (0x000154e4) tabs_3_long_active_pane_srt_t1

0x8840,	// (0x000134b3) bg_active_tab_pane_g1_cp5_srt

0x87b6,	// (0x00013429) bg_active_tab_pane_g2_cp5_srt

0x8849,	// (0x000134bc) bg_active_tab_pane_g3_cp5_srt

0xa863,	// (0x000154d6) navi_text_pane_srt_t1

0xa85b,	// (0x000154ce) navi_icon_pane_srt_g1

0x8d3a,	// (0x000139ad) midp_editing_number_pane_srt

0x8b74,	// (0x000137e7) midp_ticker_pane_srt

0x8d42,	// (0x000139b5) midp_ticker_pane_srt_g1

0x8d4a,	// (0x000139bd) midp_ticker_pane_srt_g2

0x0001,

0xf76d,	// (0x0001a3e0) midp_ticker_pane_srt_g

0x8d52,	// (0x000139c5) midp_ticker_pane_srt_t1

0xa84c,	// (0x000154bf) midp_editing_number_pane_t1_copy1

0x8b7c,	// (0x000137ef) listscroll_midp_pane

0x8b7c,	// (0x000137ef) midp_form_pane

0x8bec,	// (0x0001385f) midp_info_popup_window_ParamLimits

0x8bec,	// (0x0001385f) midp_info_popup_window

0x7efb,	// (0x00012b6e) bg_popup_sub_pane_cp50_ParamLimits

0x7efb,	// (0x00012b6e) bg_popup_sub_pane_cp50

0x993f,	// (0x000145b2) listscroll_midp_info_pane_ParamLimits

0x993f,	// (0x000145b2) listscroll_midp_info_pane

0x991f,	// (0x00014592) listscroll_form_midp_pane_ParamLimits

0x991f,	// (0x00014592) listscroll_form_midp_pane

0x992b,	// (0x0001459e) scroll_bar_cp050

0x98ff,	// (0x00014572) list_midp_pane

0xb9f2,	// (0x00016665) signal_pane_g2_cp

0x9839,	// (0x000144ac) listscroll_midp_info_pane_t1_ParamLimits

0x9839,	// (0x000144ac) listscroll_midp_info_pane_t1

0x9851,	// (0x000144c4) listscroll_midp_info_pane_t2_ParamLimits

0x9851,	// (0x000144c4) listscroll_midp_info_pane_t2

0x988f,	// (0x00014502) listscroll_midp_info_pane_t3_ParamLimits

0x988f,	// (0x00014502) listscroll_midp_info_pane_t3

0x98c9,	// (0x0001453c) listscroll_midp_info_pane_t4_ParamLimits

0x98c9,	// (0x0001453c) listscroll_midp_info_pane_t4

0x0003,

0xf825,	// (0x0001a498) listscroll_midp_info_pane_t_ParamLimits

0xf825,	// (0x0001a498) listscroll_midp_info_pane_t

0x7fbf,	// (0x00012c32) scroll_pane_cp21

0x97d7,	// (0x0001444a) form_midp_field_choice_group_pane

0x97e0,	// (0x00014453) form_midp_field_text_pane

0x981f,	// (0x00014492) form_midp_field_time_pane

0x9827,	// (0x0001449a) form_midp_gauge_slider_pane

0x9830,	// (0x000144a3) form_midp_gauge_wait_pane

0x6df7,	// (0x00011a6a) form_midp_image_pane

0x97a9,	// (0x0001441c) list_single_midp_pane_ParamLimits

0x97a9,	// (0x0001441c) list_single_midp_pane

0x9764,	// (0x000143d7) form_midp_field_text_pane_t1

0x9528,	// (0x0001419b) input_focus_pane_cp050

0x9798,	// (0x0001440b) list_midp_form_text_pane

0x9733,	// (0x000143a6) form_midp_field_choice_group_pane_t1

0x9741,	// (0x000143b4) input_focus_pane_cp051

0x9755,	// (0x000143c8) list_midp_choice_pane

0x6df7,	// (0x00011a6a) status_idle_pane

0x9717,	// (0x0001438a) form_midp_field_time_pane_t1

0x6ded,	// (0x00011a60) wait_anim_pane_g2_copy1

0x9725,	// (0x00014398) form_midp_field_time_pane_t2

0x0001,

0x8c9a,	// (0x0001390d) aid_navinavi_width_2_pane

0xf820,	// (0x0001a493) form_midp_field_time_pane_t

0x6df7,	// (0x00011a6a) input_focus_pane_cp052

0x6df7,	// (0x00011a6a) bg_input_focus_pane_cp040

0x96d7,	// (0x0001434a) form_midp_gauge_slider_pane_t1

0x96e5,	// (0x00014358) form_midp_gauge_slider_pane_t2

0x96f3,	// (0x00014366) form_midp_gauge_slider_pane_t3

0x9701,	// (0x00014374) form_midp_gauge_slider_pane_t4

0x0003,

0xf817,	// (0x0001a48a) form_midp_gauge_slider_pane_t

0x970f,	// (0x00014382) form_midp_slider_pane

0x6ed7,	// (0x00011b4a) bg_input_focus_pane_cp041_ParamLimits

0x6ed7,	// (0x00011b4a) bg_input_focus_pane_cp041

0x96a4,	// (0x00014317) form_midp_gauge_wait_pane_t1_ParamLimits

0x96a4,	// (0x00014317) form_midp_gauge_wait_pane_t1

0x96b6,	// (0x00014329) form_midp_gauge_wait_pane_t2_ParamLimits

0x96b6,	// (0x00014329) form_midp_gauge_wait_pane_t2

0x0001,

0xf812,	// (0x0001a485) form_midp_gauge_wait_pane_t_ParamLimits

0xf812,	// (0x0001a485) form_midp_gauge_wait_pane_t

0x96c8,	// (0x0001433b) form_midp_wait_pane_ParamLimits

0x96c8,	// (0x0001433b) form_midp_wait_pane

0x966e,	// (0x000142e1) form_midp_image_pane_g1

0x9677,	// (0x000142ea) form_midp_image_pane_t1

0x9686,	// (0x000142f9) form_midp_image_pane_t2

0x9695,	// (0x00014308) form_midp_image_pane_t3

0x0002,

0xf80b,	// (0x0001a47e) form_midp_image_pane_t

0x9656,	// (0x000142c9) list_single_midp_pane_g1

0x965f,	// (0x000142d2) list_single_midp_pane_t1

0x9631,	// (0x000142a4) list_midp_form_item_pane_ParamLimits

0x9631,	// (0x000142a4) list_midp_form_item_pane

0x8c42,	// (0x000138b5) list_midp_form_item_pane_t1

0x8c51,	// (0x000138c4) midp_ticker_pane_g1

0x8c5d,	// (0x000138d0) midp_ticker_pane_g2

0x0001,

0xf753,	// (0x0001a3c6) midp_ticker_pane_g

0x8c69,	// (0x000138dc) midp_ticker_pane_t1

0xaad0,	// (0x00015743) midp_editing_number_pane_t1

0xaaae,	// (0x00015721) midp_editing_number_pane

0xaabd,	// (0x00015730) midp_ticker_pane

0xa814,	// (0x00015487) ai_message_heading_pane

0x6df7,	// (0x00011a6a) bg_popup_window_pane_cp14

0xa81c,	// (0x0001548f) listscroll_ai_message_pane

0xa79e,	// (0x00015411) ai_message_heading_pane_g1_ParamLimits

0xa79e,	// (0x00015411) ai_message_heading_pane_g1

0xa7aa,	// (0x0001541d) ai_message_heading_pane_g2_ParamLimits

0xa7aa,	// (0x0001541d) ai_message_heading_pane_g2

0xa7b6,	// (0x00015429) ai_message_heading_pane_g3_ParamLimits

0xa7b6,	// (0x00015429) ai_message_heading_pane_g3

0xa7c2,	// (0x00015435) ai_message_heading_pane_g4_ParamLimits

0xa7c2,	// (0x00015435) ai_message_heading_pane_g4

0x0003,

0xf94c,	// (0x0001a5bf) ai_message_heading_pane_g_ParamLimits

0xf94c,	// (0x0001a5bf) ai_message_heading_pane_g

0xa7ce,	// (0x00015441) ai_message_heading_pane_t1_ParamLimits

0xa7ce,	// (0x00015441) ai_message_heading_pane_t1

0xa7e8,	// (0x0001545b) ai_message_heading_pane_t2_ParamLimits

0xa7e8,	// (0x0001545b) ai_message_heading_pane_t2

0x0001,

0xf955,	// (0x0001a5c8) ai_message_heading_pane_t_ParamLimits

0xf955,	// (0x0001a5c8) ai_message_heading_pane_t

0xa7fa,	// (0x0001546d) bg_popup_heading_pane_cp1_ParamLimits

0xa7fa,	// (0x0001546d) bg_popup_heading_pane_cp1

0xa78c,	// (0x000153ff) list_ai_message_pane_ParamLimits

0xa78c,	// (0x000153ff) list_ai_message_pane

0x7fbf,	// (0x00012c32) scroll_pane_cp10

0xa728,	// (0x0001539b) list_ai_message_pane_g1

0xa730,	// (0x000153a3) list_ai_message_pane_g2

0x0001,

0xf929,	// (0x0001a59c) list_ai_message_pane_g

0xa738,	// (0x000153ab) list_ai_message_pane_t1_ParamLimits

0xa738,	// (0x000153ab) list_ai_message_pane_t1

0xa74d,	// (0x000153c0) list_ai_message_pane_t2_ParamLimits

0xa74d,	// (0x000153c0) list_ai_message_pane_t2

0xa762,	// (0x000153d5) list_ai_message_pane_t3_ParamLimits

0xa762,	// (0x000153d5) list_ai_message_pane_t3

0xa777,	// (0x000153ea) list_ai_message_pane_t4_ParamLimits

0xa777,	// (0x000153ea) list_ai_message_pane_t4

0x0003,

0xf92e,	// (0x0001a5a1) list_ai_message_pane_t_ParamLimits

0xf92e,	// (0x0001a5a1) list_ai_message_pane_t

0xa713,	// (0x00015386) cell_ai_soft_ind_pane_ParamLimits

0xa713,	// (0x00015386) cell_ai_soft_ind_pane

0x8c7b,	// (0x000138ee) cell_ai_soft_ind_pane_g1_ParamLimits

0x8c7b,	// (0x000138ee) cell_ai_soft_ind_pane_g1

0x6df7,	// (0x00011a6a) grid_highlight_cp1

0x8c88,	// (0x000138fb) text_secondary_cp56_ParamLimits

0x8c88,	// (0x000138fb) text_secondary_cp56

0xa6e8,	// (0x0001535b) example_general_pane_ParamLimits

0xa6e8,	// (0x0001535b) example_general_pane

0xa6f4,	// (0x00015367) example_parent_pane_g1_ParamLimits

0xa6f4,	// (0x00015367) example_parent_pane_g1

0xa700,	// (0x00015373) example_parent_pane_t1_ParamLimits

0xa700,	// (0x00015373) example_parent_pane_t1

0x56d4,	// (0x00010347) popup_preview_text_window_ParamLimits

0x56d4,	// (0x00010347) popup_preview_text_window

0x8aa5,	// (0x00013718) list_single_pane_cp2_g4

0x7222,	// (0x00011e95) bg_popup_preview_window_pane_ParamLimits

0x7222,	// (0x00011e95) bg_popup_preview_window_pane

0xa435,	// (0x000150a8) popup_preview_text_window_t1_ParamLimits

0xa435,	// (0x000150a8) popup_preview_text_window_t1

0xa453,	// (0x000150c6) popup_preview_text_window_t2_ParamLimits

0xa453,	// (0x000150c6) popup_preview_text_window_t2

0xa49c,	// (0x0001510f) popup_preview_text_window_t3_ParamLimits

0xa49c,	// (0x0001510f) popup_preview_text_window_t3

0xa4e1,	// (0x00015154) popup_preview_text_window_t4_ParamLimits

0xa4e1,	// (0x00015154) popup_preview_text_window_t4

0x0004,

0xf8fd,	// (0x0001a570) popup_preview_text_window_t_ParamLimits

0xf8fd,	// (0x0001a570) popup_preview_text_window_t

0xa55f,	// (0x000151d2) scroll_pane_cp11

0x9406,	// (0x00014079) bg_popup_preview_window_pane_g1

0xa3f5,	// (0x00015068) bg_popup_preview_window_pane_g2

0xa3fd,	// (0x00015070) bg_popup_preview_window_pane_g3

0xa405,	// (0x00015078) bg_popup_preview_window_pane_g4

0xa40d,	// (0x00015080) bg_popup_preview_window_pane_g5

0xa415,	// (0x00015088) bg_popup_preview_window_pane_g6

0xa41d,	// (0x00015090) bg_popup_preview_window_pane_g7

0xa425,	// (0x00015098) bg_popup_preview_window_pane_g8

0x48ba,	// (0x0000f52d) aid_popup_width_pane

0x56b2,	// (0x00010325) popup_midp_note_alarm_window_ParamLimits

0x56b2,	// (0x00010325) popup_midp_note_alarm_window

0x7cad,	// (0x00012920) data_form_pane_ParamLimits

0x7cb9,	// (0x0001292c) form_field_data_pane_g1

0x7cc3,	// (0x00012936) form_field_data_pane_t1_ParamLimits

0x7cdb,	// (0x0001294e) input_focus_pane_ParamLimits

0x7ce9,	// (0x0001295c) data_form_wide_pane_ParamLimits

0x7cf5,	// (0x00012968) form_field_data_wide_pane_g1

0x7d15,	// (0x00012988) form_field_data_wide_pane_t1_ParamLimits

0x74d1,	// (0x00012144) input_focus_pane_cp6_ParamLimits

0x7f6c,	// (0x00012bdf) input_popup_find_pane_g1_ParamLimits

0x7f6c,	// (0x00012bdf) input_popup_find_pane_g1

0x4e36,	// (0x0000faa9) aid_navi_side_left_pane

0x4e4b,	// (0x0000fabe) aid_navi_side_right_pane

0x9e0e,	// (0x00014a81) bg_popup_window_pane_cp30_ParamLimits

0x9e0e,	// (0x00014a81) bg_popup_window_pane_cp30

0x9e88,	// (0x00014afb) popup_midp_note_alarm_window_g1_ParamLimits

0x9e88,	// (0x00014afb) popup_midp_note_alarm_window_g1

0x9eb8,	// (0x00014b2b) popup_midp_note_alarm_window_t1_ParamLimits

0x9eb8,	// (0x00014b2b) popup_midp_note_alarm_window_t1

0x9f59,	// (0x00014bcc) popup_midp_note_alarm_window_t2_ParamLimits

0x9f59,	// (0x00014bcc) popup_midp_note_alarm_window_t2

0xa007,	// (0x00014c7a) popup_midp_note_alarm_window_t3_ParamLimits

0xa007,	// (0x00014c7a) popup_midp_note_alarm_window_t3

0xa039,	// (0x00014cac) popup_midp_note_alarm_window_t4_ParamLimits

0xa039,	// (0x00014cac) popup_midp_note_alarm_window_t4

0xa05f,	// (0x00014cd2) popup_midp_note_alarm_window_t5_ParamLimits

0xa05f,	// (0x00014cd2) popup_midp_note_alarm_window_t5

0x000a,

0xf89a,	// (0x0001a50d) popup_midp_note_alarm_window_t_ParamLimits

0xf89a,	// (0x0001a50d) popup_midp_note_alarm_window_t

0xa10b,	// (0x00014d7e) wait_bar_pane_cp1_ParamLimits

0xa10b,	// (0x00014d7e) wait_bar_pane_cp1

0x6df7,	// (0x00011a6a) wait_anim_pane_copy1

0x6df7,	// (0x00011a6a) wait_border_pane_copy1

0x9ae8,	// (0x0001475b) wait_border_pane_g1_copy1

0x7d2c,	// (0x0001299f) form_field_popup_pane_g1

0x7d34,	// (0x000129a7) form_field_popup_pane_t1_ParamLimits

0x7cdb,	// (0x0001294e) input_focus_pane_cp7_ParamLimits

0x7d4c,	// (0x000129bf) list_form_pane_ParamLimits

0x7d58,	// (0x000129cb) form_field_popup_wide_pane_g1

0x7d60,	// (0x000129d3) form_field_popup_wide_pane_t1_ParamLimits

0x7cdb,	// (0x0001294e) input_focus_pane_cp8_ParamLimits

0x7d72,	// (0x000129e5) list_form_wide_pane_ParamLimits

0xacec,	// (0x0001595f) aid_size_cell_graphic_pane

0x7e46,	// (0x00012ab9) data_form_pane_t1_ParamLimits

0xaa7b,	// (0x000156ee) data_form_wide_pane_t1_ParamLimits

0x8fa5,	// (0x00013c18) bg_status_flat_pane

0x6e37,	// (0x00011aaa) title_pane_t1_ParamLimits

0x6e9f,	// (0x00011b12) title_pane_t2_ParamLimits

0x6ec5,	// (0x00011b38) title_pane_t3_ParamLimits

0xf557,	// (0x0001a1ca) title_pane_t_ParamLimits

0x843e,	// (0x000130b1) level_1_signal_ParamLimits

0x8450,	// (0x000130c3) level_2_signal_ParamLimits

0x8463,	// (0x000130d6) level_3_signal_ParamLimits

0x8476,	// (0x000130e9) level_4_signal_ParamLimits

0x8489,	// (0x000130fc) level_5_signal_ParamLimits

0x849c,	// (0x0001310f) level_6_signal_ParamLimits

0x84af,	// (0x00013122) level_7_signal_ParamLimits

0x843e,	// (0x000130b1) level_1_battery_ParamLimits

0x8450,	// (0x000130c3) level_2_battery_ParamLimits

0x8463,	// (0x000130d6) level_3_battery_ParamLimits

0x8476,	// (0x000130e9) level_4_battery_ParamLimits

0x8489,	// (0x000130fc) level_5_battery_ParamLimits

0x849c,	// (0x0001310f) level_6_battery_ParamLimits

0x84af,	// (0x00013122) level_7_battery_ParamLimits

0x9d07,	// (0x0001497a) bg_status_flat_pane_g1

0x9d0f,	// (0x00014982) bg_status_flat_pane_g2

0x9d17,	// (0x0001498a) bg_status_flat_pane_g3

0x9d1f,	// (0x00014992) bg_status_flat_pane_g4

0x9d27,	// (0x0001499a) bg_status_flat_pane_g5

0x9d2f,	// (0x000149a2) bg_status_flat_pane_g6

0x9d37,	// (0x000149aa) bg_status_flat_pane_g7

0x6eed,	// (0x00011b60) tabs_3_active_pane_t1_ParamLimits

0x6eed,	// (0x00011b60) tabs_3_passive_pane_t1_ParamLimits

0x6f07,	// (0x00011b7a) tabs_4_active_pane_t1_ParamLimits

0x6f07,	// (0x00011b7a) tabs_4_1_passive_pane_t1_ParamLimits

0x8000,	// (0x00012c73) tabs_2_active_pane_t1_ParamLimits

0x8000,	// (0x00012c73) tabs_2_passive_pane_t1_ParamLimits

0x8012,	// (0x00012c85) bg_active_tab_pane_cp4_ParamLimits

0x8020,	// (0x00012c93) tabs_2_long_active_pane_t1_ParamLimits

0x8033,	// (0x00012ca6) bg_passive_tab_pane_cp4_ParamLimits

0x59f9,	// (0x0001066c) list_single_midp_graphic_pane_t1_ParamLimits

0x8012,	// (0x00012c85) bg_active_tab_pane_cp5_ParamLimits

0x803f,	// (0x00012cb2) tabs_3_long_active_pane_t1_ParamLimits

0x8033,	// (0x00012ca6) bg_passive_tab_pane_cp5_ParamLimits

0x59f9,	// (0x0001066c) list_single_midp_graphic_pane_t1

0x8fa5,	// (0x00013c18) bg_status_flat_pane_ParamLimits

0x9068,	// (0x00013cdb) indicator_pane_cp2_ParamLimits

0x9068,	// (0x00013cdb) indicator_pane_cp2

0x9193,	// (0x00013e06) navi_pane_srt_ParamLimits

0x9193,	// (0x00013e06) navi_pane_srt

0x91b7,	// (0x00013e2a) popup_clock_digital_analogue_window_cp1

0x6fce,	// (0x00011c41) indicator_pane_t1

0x8b74,	// (0x000137e7) copy_highlight_pane

0x8b74,	// (0x000137e7) cursor_graphics_pane

0x8b74,	// (0x000137e7) graphic_within_text_pane

0x8b74,	// (0x000137e7) link_highlight_pane

0xa522,	// (0x00015195) popup_preview_text_window_t5_ParamLimits

0xa522,	// (0x00015195) popup_preview_text_window_t5

0x8ca2,	// (0x00013915) cursor_digital_pane

0x8ca2,	// (0x00013915) cursor_primary_pane

0x8cb3,	// (0x00013926) cursor_primary_small_pane

0x8cbb,	// (0x0001392e) cursor_secondary_pane

0x8cc3,	// (0x00013936) cursor_title_pane

0x8ca2,	// (0x00013915) link_highlight_digital_pane

0x8caa,	// (0x0001391d) link_highlight_primary_pane

0x8cb3,	// (0x00013926) link_highlight_primary_small_pane

0x8cbb,	// (0x0001392e) link_highlight_secondary_pane

0x8cc3,	// (0x00013936) link_highlight_title_pane

0x8ca2,	// (0x00013915) copy_highlight_digital_pane

0x8ca2,	// (0x00013915) copy_highlight_primary_pane

0x8cb3,	// (0x00013926) copy_highlight_primary_small_pane

0x8cbb,	// (0x0001392e) copy_highlight_secondary_pane

0x8cc3,	// (0x00013936) copy_highlight_title_pane

0x8cbb,	// (0x0001392e) graphic_text_digital_pane

0x9db1,	// (0x00014a24) graphic_text_primary_pane

0x9dba,	// (0x00014a2d) graphic_text_primary_small_pane

0x8cb3,	// (0x00013926) graphic_text_secondary_pane

0x8ca2,	// (0x00013915) graphic_text_title_pane

0x8ccb,	// (0x0001393e) cursor_primary_pane_g1

0x9da3,	// (0x00014a16) cursor_text_primary_t1

0x9d8b,	// (0x000149fe) cursor_primary_small_pane_g1

0x9d95,	// (0x00014a08) cursor_text_primary_small_t1

0x9d67,	// (0x000149da) cursor_primary_small_pane_g1_copy1

0x9d7d,	// (0x000149f0) cursor_text_primary_small_t1_copy1

0x9d4f,	// (0x000149c2) cursor_text_title_t1

0x9d5d,	// (0x000149d0) cursor_title_pane_g1

0x8ccb,	// (0x0001393e) cursor_digital_pane_g1

0x8cd5,	// (0x00013948) cursor_text_digital_t1

0x8cfa,	// (0x0001396d) link_highlight_primary_pane_g1

0x9cf8,	// (0x0001496b) link_highlight_primary_pane_t1

0x8ce3,	// (0x00013956) link_highlight_primary_small_pane_g1

0x8ceb,	// (0x0001395e) link_highlight_primary_small_pane_t1

0x8cfa,	// (0x0001396d) link_highlight_secondary_pane_g1

0x8d02,	// (0x00013975) link_highlight_secondary_pane_t1

0x9c6c,	// (0x000148df) link_highlight_title_pane_g1

0x9c74,	// (0x000148e7) link_highlight_title_pane_t1

0x9c55,	// (0x000148c8) link_highlight_digital_pane_g1

0x9c5d,	// (0x000148d0) link_highlight_digital_pane_t1

0x9b2d,	// (0x000147a0) copy_highlight_primary_pane_g1

0x9b35,	// (0x000147a8) copy_highlight_primary_pane_t1

0x9b07,	// (0x0001477a) copy_highlight_primary_small_pane_g1

0x9b1e,	// (0x00014791) copy_highlight_primary_small_pane_t1

0x8d11,	// (0x00013984) copy_highlight_secondary_pane_g1

0x8d19,	// (0x0001398c) copy_highlight_secondary_pane_t1

0x9b07,	// (0x0001477a) copy_highlight_title_pane_g1

0x9b0f,	// (0x00014782) copy_highlight_title_pane_t1

0x9b2d,	// (0x000147a0) copy_highlight_digital_pane_g1

0xaeba,	// (0x00015b2d) copy_highlight_digital_pane_t1

0xae0e,	// (0x00015a81) graphic_text_primary_pane_g1

0xae9e,	// (0x00015b11) graphic_text_primary_pane_t1

0xaeac,	// (0x00015b1f) graphic_text_primary_pane_t2

0x0001,

0xf9c9,	// (0x0001a63c) graphic_text_primary_pane_t

0xae7a,	// (0x00015aed) graphic_text_primary_small_pane_g1

0xae82,	// (0x00015af5) graphic_text_primary_small_pane_t1

0xae90,	// (0x00015b03) graphic_text_primary_small_pane_t2

0x0001,

0xf9c4,	// (0x0001a637) graphic_text_primary_small_pane_t

0xae56,	// (0x00015ac9) graphic_text_secondary_pane_g1

0xae5e,	// (0x00015ad1) graphic_text_secondary_pane_t1

0xae6c,	// (0x00015adf) graphic_text_secondary_pane_t2

0x0001,

0xf9bf,	// (0x0001a632) graphic_text_secondary_pane_t

0xae32,	// (0x00015aa5) graphic_text_title_pane_g1

0xae3a,	// (0x00015aad) graphic_text_title_pane_t1

0xae48,	// (0x00015abb) graphic_text_title_pane_t2

0x0001,

0xf9ba,	// (0x0001a62d) graphic_text_title_pane_t

0xae0e,	// (0x00015a81) graphic_text_digital_pane_g1

0xae16,	// (0x00015a89) graphic_text_digital_pane_t1

0xae24,	// (0x00015a97) graphic_text_digital_pane_t2

0x0001,

0xf9b5,	// (0x0001a628) graphic_text_digital_pane_t

0x6ed7,	// (0x00011b4a) navi_icon_pane_srt_ParamLimits

0x6ed7,	// (0x00011b4a) navi_icon_pane_srt

0x6df7,	// (0x00011a6a) navi_midp_pane_srt

0x6df7,	// (0x00011a6a) navi_navi_pane_srt

0x6ed7,	// (0x00011b4a) navi_text_pane_srt_ParamLimits

0x6ed7,	// (0x00011b4a) navi_text_pane_srt

0xadd9,	// (0x00015a4c) navi_navi_icon_text_pane_srt

0xade1,	// (0x00015a54) navi_navi_pane_srt_g1_ParamLimits

0xade1,	// (0x00015a54) navi_navi_pane_srt_g1

0xadf3,	// (0x00015a66) navi_navi_pane_srt_g2_ParamLimits

0xadf3,	// (0x00015a66) navi_navi_pane_srt_g2

0x0001,

0xf9b0,	// (0x0001a623) navi_navi_pane_srt_g_ParamLimits

0xf9b0,	// (0x0001a623) navi_navi_pane_srt_g

0xae05,	// (0x00015a78) navi_navi_tabs_pane_srt

0xadd9,	// (0x00015a4c) navi_navi_text_pane_srt

0xadd9,	// (0x00015a4c) navi_navi_volume_pane_srt

0xadca,	// (0x00015a3d) navi_navi_text_pane_srt_t1

0x5d73,	// (0x000109e6) navi_navi_volume_pane_srt_g1

0x5d7b,	// (0x000109ee) volume_small_pane_srt_ParamLimits

0x5d7b,	// (0x000109ee) volume_small_pane_srt

0x5116,	// (0x0000fd89) volume_small_pane_srt_g1_ParamLimits

0x5116,	// (0x0000fd89) volume_small_pane_srt_g1

0x5126,	// (0x0000fd99) volume_small_pane_srt_g2_ParamLimits

0x5126,	// (0x0000fd99) volume_small_pane_srt_g2

0x5137,	// (0x0000fdaa) volume_small_pane_srt_g3_ParamLimits

0x5137,	// (0x0000fdaa) volume_small_pane_srt_g3

0x5148,	// (0x0000fdbb) volume_small_pane_srt_g4_ParamLimits

0x5148,	// (0x0000fdbb) volume_small_pane_srt_g4

0x5159,	// (0x0000fdcc) volume_small_pane_srt_g5_ParamLimits

0x5159,	// (0x0000fdcc) volume_small_pane_srt_g5

0x516a,	// (0x0000fddd) volume_small_pane_srt_g6_ParamLimits

0x516a,	// (0x0000fddd) volume_small_pane_srt_g6

0x517b,	// (0x0000fdee) volume_small_pane_srt_g7_ParamLimits

0x517b,	// (0x0000fdee) volume_small_pane_srt_g7

0x518c,	// (0x0000fdff) volume_small_pane_srt_g8_ParamLimits

0x518c,	// (0x0000fdff) volume_small_pane_srt_g8

0x519d,	// (0x0000fe10) volume_small_pane_srt_g9_ParamLimits

0x519d,	// (0x0000fe10) volume_small_pane_srt_g9

0x51ae,	// (0x0000fe21) volume_small_pane_srt_g10_ParamLimits

0x51ae,	// (0x0000fe21) volume_small_pane_srt_g10

0x0009,

0xf758,	// (0x0001a3cb) volume_small_pane_srt_g_ParamLimits

0xf758,	// (0x0001a3cb) volume_small_pane_srt_g

0x72cb,	// (0x00011f3e) query_popup_data_pane_cp2

0xadb0,	// (0x00015a23) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xadb0,	// (0x00015a23) navi_navi_icon_text_pane_srt_t1

0x9db1,	// (0x00014a24) navi_tabs_2_long_pane_srt

0x9db1,	// (0x00014a24) navi_tabs_2_pane_srt

0x9db1,	// (0x00014a24) navi_tabs_3_long_pane_srt

0x9db1,	// (0x00014a24) navi_tabs_3_pane_srt

0x9db1,	// (0x00014a24) navi_tabs_4_pane_srt

0x5d53,	// (0x000109c6) tabs_2_active_pane_srt_ParamLimits

0x5d53,	// (0x000109c6) tabs_2_active_pane_srt

0x5d63,	// (0x000109d6) tabs_2_passive_pane_srt_ParamLimits

0x5d63,	// (0x000109d6) tabs_2_passive_pane_srt

0x8ec6,	// (0x00013b39) bg_passive_tab_pane_cp1_srt_ParamLimits

0x8ec6,	// (0x00013b39) bg_passive_tab_pane_cp1_srt

0xad7c,	// (0x000159ef) bg_passive_tab_pane_g1_cp1_srt

0x87b6,	// (0x00013429) bg_passive_tab_pane_g2_cp1_srt

0xad85,	// (0x000159f8) bg_passive_tab_pane_g3_cp1_srt

0x6ed7,	// (0x00011b4a) bg_active_tab_pane_cp1_srt_ParamLimits

0x6ed7,	// (0x00011b4a) bg_active_tab_pane_cp1_srt

0xad8e,	// (0x00015a01) tabs_2_active_pane_srt_g1

0xad96,	// (0x00015a09) tabs_2_active_pane_srt_t1_ParamLimits

0xad96,	// (0x00015a09) tabs_2_active_pane_srt_t1

0xad7c,	// (0x000159ef) bg_active_tab_pane_g1_cp1_srt

0x87b6,	// (0x00013429) bg_active_tab_pane_g2_cp1_srt

0xad85,	// (0x000159f8) bg_active_tab_pane_g3_cp1_srt

0x5d20,	// (0x00010993) tabs_3_active_pane_srt_ParamLimits

0x5d20,	// (0x00010993) tabs_3_active_pane_srt

0x5d31,	// (0x000109a4) tabs_3_passive_pane_cp_srt_ParamLimits

0x5d31,	// (0x000109a4) tabs_3_passive_pane_cp_srt

0x5d42,	// (0x000109b5) tabs_3_passive_pane_srt_ParamLimits

0x5d42,	// (0x000109b5) tabs_3_passive_pane_srt

0x8ec6,	// (0x00013b39) bg_passive_tab_pane_cp2_srt_ParamLimits

0x8ec6,	// (0x00013b39) bg_passive_tab_pane_cp2_srt

0x8d28,	// (0x0001399b) bg_passive_tab_pane_g1_cp2_srt

0x87b6,	// (0x00013429) bg_passive_tab_pane_g2_cp2_srt

0x8d31,	// (0x000139a4) bg_passive_tab_pane_g3_cp2_srt

0x6ed7,	// (0x00011b4a) bg_active_tab_pane_cp2_srt_ParamLimits

0x6ed7,	// (0x00011b4a) bg_active_tab_pane_cp2_srt

0xad62,	// (0x000159d5) tabs_3_active_pane_srt_g1

0xad6a,	// (0x000159dd) tabs_3_active_pane_srt_t1_ParamLimits

0xad6a,	// (0x000159dd) tabs_3_active_pane_srt_t1

0x8d28,	// (0x0001399b) bg_active_tab_pane_g1_cp2_srt

0x87b6,	// (0x00013429) bg_active_tab_pane_g2_cp2_srt

0x8d31,	// (0x000139a4) bg_active_tab_pane_g3_cp2_srt

0x5cd8,	// (0x0001094b) tabs_4_active_pane_srt_ParamLimits

0x5cd8,	// (0x0001094b) tabs_4_active_pane_srt

0x5cea,	// (0x0001095d) tabs_4_passive_pane_cp2_srt_ParamLimits

0x5cea,	// (0x0001095d) tabs_4_passive_pane_cp2_srt

0x531d,	// (0x0000ff90) aid_size_cell_toolbar

0x8033,	// (0x00012ca6) main_idle_act_pane_ParamLimits

0x54e8,	// (0x0001015b) popup_large_graphic_colour_window_ParamLimits

0x584f,	// (0x000104c2) popup_toolbar_window_ParamLimits

0x584f,	// (0x000104c2) popup_toolbar_window

0xaafa,	// (0x0001576d) list_single_graphic_2heading_pane_ParamLimits

0xaafa,	// (0x0001576d) list_single_graphic_2heading_pane

0x81ef,	// (0x00012e62) aid_size_cell_apps_grid_lsc_pane

0x8201,	// (0x00012e74) aid_size_cell_apps_grid_prt_pane

0x8ec6,	// (0x00013b39) bg_wml_button_pane_cp1_ParamLimits

0x8ec6,	// (0x00013b39) bg_wml_button_pane_cp1

0x9764,	// (0x000143d7) form_midp_field_text_pane_t1_ParamLimits

0x9528,	// (0x0001419b) input_focus_pane_cp050_ParamLimits

0x9798,	// (0x0001440b) list_midp_form_text_pane_ParamLimits

0x9741,	// (0x000143b4) input_focus_pane_cp051_ParamLimits

0x9755,	// (0x000143c8) list_midp_choice_pane_ParamLimits

0x95e1,	// (0x00014254) list_single_2graphic_pane_cp3_ParamLimits

0x95e1,	// (0x00014254) list_single_2graphic_pane_cp3

0x9602,	// (0x00014275) list_single_midp_graphic_pane_ParamLimits

0x9602,	// (0x00014275) list_single_midp_graphic_pane

0x58fc,	// (0x0001056f) list_single_graphic_2heading_pane_g1_ParamLimits

0x58fc,	// (0x0001056f) list_single_graphic_2heading_pane_g1

0x5908,	// (0x0001057b) list_single_graphic_2heading_pane_g4_ParamLimits

0x5908,	// (0x0001057b) list_single_graphic_2heading_pane_g4

0x5914,	// (0x00010587) list_single_graphic_2heading_pane_g5_ParamLimits

0x5914,	// (0x00010587) list_single_graphic_2heading_pane_g5

0x0002,

0xf7ab,	// (0x0001a41e) list_single_graphic_2heading_pane_g_ParamLimits

0xf7ab,	// (0x0001a41e) list_single_graphic_2heading_pane_g

0x5920,	// (0x00010593) list_single_graphic_2heading_pane_t1_ParamLimits

0x5920,	// (0x00010593) list_single_graphic_2heading_pane_t1

0x5934,	// (0x000105a7) list_single_graphic_2heading_pane_t2_ParamLimits

0x5934,	// (0x000105a7) list_single_graphic_2heading_pane_t2

0x5950,	// (0x000105c3) list_single_graphic_2heading_pane_t3_ParamLimits

0x5950,	// (0x000105c3) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b2,	// (0x0001a425) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b2,	// (0x0001a425) list_single_graphic_2heading_pane_t

0x9316,	// (0x00013f89) bg_popup_sub_pane_cp2

0x9340,	// (0x00013fb3) grid_toobar_pane

0x5968,	// (0x000105db) cell_toolbar_pane_ParamLimits

0x5968,	// (0x000105db) cell_toolbar_pane

0x93aa,	// (0x0001401d) cell_toolbar_pane_g1_ParamLimits

0x93aa,	// (0x0001401d) cell_toolbar_pane_g1

0x93be,	// (0x00014031) cell_toolbar_pane_g2_ParamLimits

0x93be,	// (0x00014031) cell_toolbar_pane_g2

0x0001,

0xf7c0,	// (0x0001a433) cell_toolbar_pane_g_ParamLimits

0xf7c0,	// (0x0001a433) cell_toolbar_pane_g

0x93e0,	// (0x00014053) grid_highlight_pane_cp2_ParamLimits

0x93e0,	// (0x00014053) grid_highlight_pane_cp2

0x93fa,	// (0x0001406d) toolbar_button_pane

0x9406,	// (0x00014079) toolbar_button_pane_g1

0x940e,	// (0x00014081) toolbar_button_pane_g2

0x9416,	// (0x00014089) toolbar_button_pane_g3

0x941e,	// (0x00014091) toolbar_button_pane_g4

0x9426,	// (0x00014099) toolbar_button_pane_g5

0x942e,	// (0x000140a1) toolbar_button_pane_g6

0x9436,	// (0x000140a9) toolbar_button_pane_g7

0x943e,	// (0x000140b1) toolbar_button_pane_g8

0x9446,	// (0x000140b9) toolbar_button_pane_g9

0x0009,

0xf7c5,	// (0x0001a438) toolbar_button_pane_g

0x59a0,	// (0x00010613) list_single_2graphic_pane_g1_cp3_ParamLimits

0x59a0,	// (0x00010613) list_single_2graphic_pane_g1_cp3

0x59ac,	// (0x0001061f) list_single_2graphic_pane_g2_cp3_ParamLimits

0x59ac,	// (0x0001061f) list_single_2graphic_pane_g2_cp3

0x59bd,	// (0x00010630) list_single_2graphic_pane_g3_cp3

0x59c5,	// (0x00010638) list_single_2graphic_pane_g4_cp3_ParamLimits

0x59c5,	// (0x00010638) list_single_2graphic_pane_g4_cp3

0x59d1,	// (0x00010644) list_single_2graphic_pane_t1_cp3_ParamLimits

0x59d1,	// (0x00010644) list_single_2graphic_pane_t1_cp3

0x59ed,	// (0x00010660) list_single_midp_graphic_pane_g2_ParamLimits

0x59ed,	// (0x00010660) list_single_midp_graphic_pane_g2

0x5325,	// (0x0000ff98) aid_zoom_text_primary

0x532d,	// (0x0000ffa0) aid_zoom_text_secondary

0x8de2,	// (0x00013a55) status_small_pane_g7_ParamLimits

0x8de2,	// (0x00013a55) status_small_pane_g7

0x8e05,	// (0x00013a78) status_small_pane_t1_ParamLimits

0x6e0e,	// (0x00011a81) title_pane_g2

0x0003,

0xf54e,	// (0x0001a1c1) title_pane_g

0x736f,	// (0x00011fe2) aid_size_cell_colour_1_pane_ParamLimits

0x736f,	// (0x00011fe2) aid_size_cell_colour_1_pane

0x7383,	// (0x00011ff6) aid_size_cell_colour_2_pane_ParamLimits

0x7383,	// (0x00011ff6) aid_size_cell_colour_2_pane

0x7397,	// (0x0001200a) aid_size_cell_colour_3_pane_ParamLimits

0x7397,	// (0x0001200a) aid_size_cell_colour_3_pane

0x73ab,	// (0x0001201e) aid_size_cell_colour_4_pane_ParamLimits

0x73ab,	// (0x0001201e) aid_size_cell_colour_4_pane

0x4d73,	// (0x0000f9e6) title_pane_stacon_g1_ParamLimits

0x4d73,	// (0x0000f9e6) title_pane_stacon_g1

0x9b8c,	// (0x000147ff) popup_note_wait_window_g3_ParamLimits

0x9b8c,	// (0x000147ff) popup_note_wait_window_g3

0x9c02,	// (0x00014875) popup_note_wait_window_t5_ParamLimits

0x9c02,	// (0x00014875) popup_note_wait_window_t5

0x6df7,	// (0x00011a6a) main_feb_china_hwr_fs_writing_pane

0x53cb,	// (0x0001003e) popup_feb_china_hwr_fs_window_ParamLimits

0x53cb,	// (0x0001003e) popup_feb_china_hwr_fs_window

0x5a0f,	// (0x00010682) aid_size_cell_hwr_fs_ParamLimits

0x5a0f,	// (0x00010682) aid_size_cell_hwr_fs

0x9528,	// (0x0001419b) bg_popup_sub_pane_cp3_ParamLimits

0x9528,	// (0x0001419b) bg_popup_sub_pane_cp3

0x5a24,	// (0x00010697) grid_hwr_fs_pane_ParamLimits

0x5a24,	// (0x00010697) grid_hwr_fs_pane

0x5a3c,	// (0x000106af) linegrid_hwr_fs_pane_ParamLimits

0x5a3c,	// (0x000106af) linegrid_hwr_fs_pane

0x5a4c,	// (0x000106bf) cell_hwr_fs_pane_ParamLimits

0x5a4c,	// (0x000106bf) cell_hwr_fs_pane

0x9534,	// (0x000141a7) linegrid_hwr_fs_pane_g1_ParamLimits

0x9534,	// (0x000141a7) linegrid_hwr_fs_pane_g1

0x9540,	// (0x000141b3) linegrid_hwr_fs_pane_g2_ParamLimits

0x9540,	// (0x000141b3) linegrid_hwr_fs_pane_g2

0x9552,	// (0x000141c5) linegrid_hwr_fs_pane_g3_ParamLimits

0x9552,	// (0x000141c5) linegrid_hwr_fs_pane_g3

0x5a6e,	// (0x000106e1) linegrid_hwr_fs_pane_g4_ParamLimits

0x5a6e,	// (0x000106e1) linegrid_hwr_fs_pane_g4

0x5a88,	// (0x000106fb) linegrid_hwr_fs_pane_g5_ParamLimits

0x5a88,	// (0x000106fb) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f0,	// (0x0001a463) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f0,	// (0x0001a463) linegrid_hwr_fs_pane_g

0x955e,	// (0x000141d1) cell_hwr_fs_pane_g1_ParamLimits

0x955e,	// (0x000141d1) cell_hwr_fs_pane_g1

0x924d,	// (0x00013ec0) cell_hwr_fs_pane_g2_ParamLimits

0x924d,	// (0x00013ec0) cell_hwr_fs_pane_g2

0x9574,	// (0x000141e7) cell_hwr_fs_pane_g3_ParamLimits

0x9574,	// (0x000141e7) cell_hwr_fs_pane_g3

0x9581,	// (0x000141f4) cell_hwr_fs_pane_g4_ParamLimits

0x9581,	// (0x000141f4) cell_hwr_fs_pane_g4

0x0003,

0xf7fb,	// (0x0001a46e) cell_hwr_fs_pane_g_ParamLimits

0xf7fb,	// (0x0001a46e) cell_hwr_fs_pane_g

0x5a9e,	// (0x00010711) cell_hwr_fs_pane_t1

0x6df7,	// (0x00011a6a) grid_highlight_pane_cp6

0x6df7,	// (0x00011a6a) main_idle_act2_pane

0x7fa6,	// (0x00012c19) aid_inside_area_popup_secondary

0xa245,	// (0x00014eb8) aid_inside_area_window_primary_ParamLimits

0xa245,	// (0x00014eb8) aid_inside_area_window_primary

0xaec9,	// (0x00015b3c) ai2_news_ticker_pane

0xaed1,	// (0x00015b44) aid_size_cell_ai1_link_ParamLimits

0xaed1,	// (0x00015b44) aid_size_cell_ai1_link

0xaeeb,	// (0x00015b5e) popup_ai2_data_window_ParamLimits

0xaeeb,	// (0x00015b5e) popup_ai2_data_window

0xaf01,	// (0x00015b74) popup_ai2_link_window_ParamLimits

0xaf01,	// (0x00015b74) popup_ai2_link_window

0x9528,	// (0x0001419b) bg_popup_sub_pane_cp4_ParamLimits

0x9528,	// (0x0001419b) bg_popup_sub_pane_cp4

0xaf15,	// (0x00015b88) grid_ai2_link_pane_ParamLimits

0xaf15,	// (0x00015b88) grid_ai2_link_pane

0xaf2c,	// (0x00015b9f) popup_ai2_link_window_g1_ParamLimits

0xaf2c,	// (0x00015b9f) popup_ai2_link_window_g1

0xaf38,	// (0x00015bab) popup_ai2_link_window_g2_ParamLimits

0xaf38,	// (0x00015bab) popup_ai2_link_window_g2

0x0001,

0xf9ce,	// (0x0001a641) popup_ai2_link_window_g_ParamLimits

0xf9ce,	// (0x0001a641) popup_ai2_link_window_g

0xaf47,	// (0x00015bba) ai2_mp_button_pane

0xaf4f,	// (0x00015bc2) ai2_mp_volume_pane

0x9741,	// (0x000143b4) bg_popup_sub_pane_cp5_ParamLimits

0x9741,	// (0x000143b4) bg_popup_sub_pane_cp5

0xaf57,	// (0x00015bca) heading_ai2_gene_pane_ParamLimits

0xaf57,	// (0x00015bca) heading_ai2_gene_pane

0xaf63,	// (0x00015bd6) list_ai2_gene_pane_ParamLimits

0xaf63,	// (0x00015bd6) list_ai2_gene_pane

0xafab,	// (0x00015c1e) cell_ai2_link_pane_ParamLimits

0xafab,	// (0x00015c1e) cell_ai2_link_pane

0xafc1,	// (0x00015c34) cell_ai2_link_pane_g1

0x6df7,	// (0x00011a6a) grid_highlight_pane_cp7

0x5d90,	// (0x00010a03) ai2_mp_volume_pane_g1

0xb091,	// (0x00015d04) ai2_mp_volume_pane_g2

0xb006,	// (0x00015c79) list_ai2_gene_pane_t1

0xb099,	// (0x00015d0c) ai2_mp_volume_pane_g3

0x0002,

0xf9e7,	// (0x0001a65a) ai2_mp_volume_pane_g

0x5d98,	// (0x00010a0b) volume_small_pane_cp3

0xb0a1,	// (0x00015d14) aid_size_cell_ai2_button

0xb0a9,	// (0x00015d1c) grid_ai2_button_pane

0xb0b2,	// (0x00015d25) cell_ai2_button_pane_ParamLimits

0xb0b2,	// (0x00015d25) cell_ai2_button_pane

0x6ded,	// (0x00011a60) cell_ai2_button_pane_g1

0x6df7,	// (0x00011a6a) grid_highlight_pane_cp8

0xb051,	// (0x00015cc4) ai2_gene_pane_t1_ParamLimits

0xb051,	// (0x00015cc4) ai2_gene_pane_t1

0x5313,	// (0x0000ff86) aid_height_parent_landscape

0xa8e3,	// (0x00015556) aid_height_set_list

0xa8f4,	// (0x00015567) aid_size_parent

0xacec,	// (0x0001595f) aid_size_cell_graphic_pane_ParamLimits

0xaf73,	// (0x00015be6) popup_ai2_data_window_g1_ParamLimits

0xaf73,	// (0x00015be6) popup_ai2_data_window_g1

0xaf7f,	// (0x00015bf2) ai2_news_ticker_pane_g1

0xaf87,	// (0x00015bfa) ai2_news_ticker_pane_g2

0x0001,

0xf9d3,	// (0x0001a646) ai2_news_ticker_pane_g

0xaf8f,	// (0x00015c02) ai2_news_ticker_pane_t1

0xaf9d,	// (0x00015c10) ai2_news_ticker_pane_t2

0x0001,

0xf9d8,	// (0x0001a64b) ai2_news_ticker_pane_t

0xafca,	// (0x00015c3d) heading_ai2_gene_pane_g1

0xafd2,	// (0x00015c45) heading_ai2_gene_pane_t1_ParamLimits

0xafd2,	// (0x00015c45) heading_ai2_gene_pane_t1

0xafe7,	// (0x00015c5a) list_highlight_pane_cp6

0xafef,	// (0x00015c62) ai2_gene_pane_ParamLimits

0xafef,	// (0x00015c62) ai2_gene_pane

0xb014,	// (0x00015c87) list_ai2_gene_pane_t2

0x0001,

0xf9dd,	// (0x0001a650) list_ai2_gene_pane_t

0xb022,	// (0x00015c95) list_highlight_pane_cp8_ParamLimits

0xb022,	// (0x00015c95) list_highlight_pane_cp8

0xb033,	// (0x00015ca6) ai2_gene_pane_g1_ParamLimits

0xb033,	// (0x00015ca6) ai2_gene_pane_g1

0xb045,	// (0x00015cb8) ai2_gene_pane_g2_ParamLimits

0xb045,	// (0x00015cb8) ai2_gene_pane_g2

0x0001,

0xf9e2,	// (0x0001a655) ai2_gene_pane_g_ParamLimits

0xf9e2,	// (0x0001a655) ai2_gene_pane_g

0x76f6,	// (0x00012369) scroll_pane_cp12

0x52d0,	// (0x0000ff43) control_pane_t3_ParamLimits

0x52d0,	// (0x0000ff43) control_pane_t3

0x8df6,	// (0x00013a69) status_small_pane_g8_ParamLimits

0x8df6,	// (0x00013a69) status_small_pane_g8

0x54b1,	// (0x00010124) popup_find_window_ParamLimits

0x56c6,	// (0x00010339) popup_note_image_window_ParamLimits

0x937c,	// (0x00013fef) list_double2_graphic_pane_vc_g1_ParamLimits

0x937c,	// (0x00013fef) list_double2_graphic_pane_vc_g1

0x8aad,	// (0x00013720) list_double2_graphic_pane_vc_g2_ParamLimits

0x8aad,	// (0x00013720) list_double2_graphic_pane_vc_g2

0x9388,	// (0x00013ffb) list_double2_graphic_pane_vc_g3_ParamLimits

0x9388,	// (0x00013ffb) list_double2_graphic_pane_vc_g3

0x0002,

0xf7b9,	// (0x0001a42c) list_double2_graphic_pane_vc_g_ParamLimits

0xf7b9,	// (0x0001a42c) list_double2_graphic_pane_vc_g

0x9394,	// (0x00014007) list_double2_graphic_pane_vc_t1_ParamLimits

0x9394,	// (0x00014007) list_double2_graphic_pane_vc_t1

0x8aad,	// (0x00013720) list_single_heading_pane_vc_g1_ParamLimits

0x8aad,	// (0x00013720) list_single_heading_pane_vc_g1

0x9388,	// (0x00013ffb) list_single_heading_pane_vc_g2_ParamLimits

0x9388,	// (0x00013ffb) list_single_heading_pane_vc_g2

0x0001,

0xf7da,	// (0x0001a44d) list_single_heading_pane_vc_g_ParamLimits

0xf7da,	// (0x0001a44d) list_single_heading_pane_vc_g

0x944e,	// (0x000140c1) list_single_heading_pane_vc_t1_ParamLimits

0x944e,	// (0x000140c1) list_single_heading_pane_vc_t1

0x9464,	// (0x000140d7) list_single_heading_pane_vc_t2_ParamLimits

0x9464,	// (0x000140d7) list_single_heading_pane_vc_t2

0x0001,

0xf7df,	// (0x0001a452) list_single_heading_pane_vc_t_ParamLimits

0xf7df,	// (0x0001a452) list_single_heading_pane_vc_t

0x9476,	// (0x000140e9) list_setting_number_pane_vc_g1_ParamLimits

0x9476,	// (0x000140e9) list_setting_number_pane_vc_g1

0x9482,	// (0x000140f5) list_setting_number_pane_vc_g2_ParamLimits

0x9482,	// (0x000140f5) list_setting_number_pane_vc_g2

0x0001,

0xf7e4,	// (0x0001a457) list_setting_number_pane_vc_g_ParamLimits

0xf7e4,	// (0x0001a457) list_setting_number_pane_vc_g

0x948e,	// (0x00014101) list_setting_number_pane_vc_t1_ParamLimits

0x948e,	// (0x00014101) list_setting_number_pane_vc_t1

0x94a2,	// (0x00014115) list_setting_number_pane_vc_t2_ParamLimits

0x94a2,	// (0x00014115) list_setting_number_pane_vc_t2

0x94be,	// (0x00014131) list_setting_number_pane_vc_t3_ParamLimits

0x94be,	// (0x00014131) list_setting_number_pane_vc_t3

0x0002,

0xf7e9,	// (0x0001a45c) list_setting_number_pane_vc_t_ParamLimits

0xf7e9,	// (0x0001a45c) list_setting_number_pane_vc_t

0x94ec,	// (0x0001415f) set_value_pane_vc_ParamLimits

0x94ec,	// (0x0001415f) set_value_pane_vc

0xaafa,	// (0x0001576d) list_double2_graphic_pane_vc_ParamLimits

0xaafa,	// (0x0001576d) list_double2_graphic_pane_vc

0xaafa,	// (0x0001576d) list_double2_large_graphic_pane_vc_ParamLimits

0xaafa,	// (0x0001576d) list_double2_large_graphic_pane_vc

0xaafa,	// (0x0001576d) list_double2_pane_vc_ParamLimits

0xaafa,	// (0x0001576d) list_double2_pane_vc

0xaafa,	// (0x0001576d) list_double_graphic_heading_pane_vc_ParamLimits

0xaafa,	// (0x0001576d) list_double_graphic_heading_pane_vc

0xaafa,	// (0x0001576d) list_double_graphic_pane_vc_ParamLimits

0xaafa,	// (0x0001576d) list_double_graphic_pane_vc

0xaafa,	// (0x0001576d) list_double_heading_pane_vc_ParamLimits

0xaafa,	// (0x0001576d) list_double_heading_pane_vc

0xab0c,	// (0x0001577f) list_double_large_graphic_pane_vc_ParamLimits

0xab0c,	// (0x0001577f) list_double_large_graphic_pane_vc

0xaafa,	// (0x0001576d) list_double_number_pane_vc_ParamLimits

0xaafa,	// (0x0001576d) list_double_number_pane_vc

0xaafa,	// (0x0001576d) list_double_pane_vc_ParamLimits

0xaafa,	// (0x0001576d) list_double_pane_vc

0xaafa,	// (0x0001576d) list_double_time_pane_vc_ParamLimits

0xaafa,	// (0x0001576d) list_double_time_pane_vc

0xaafa,	// (0x0001576d) list_setting_number_pane_vc_ParamLimits

0xaafa,	// (0x0001576d) list_setting_number_pane_vc

0xaafa,	// (0x0001576d) list_setting_pane_vc_ParamLimits

0xaafa,	// (0x0001576d) list_setting_pane_vc

0xaafa,	// (0x0001576d) list_single_graphic_heading_pane_vc_ParamLimits

0xaafa,	// (0x0001576d) list_single_graphic_heading_pane_vc

0xaafa,	// (0x0001576d) list_single_heading_pane_vc_ParamLimits

0xaafa,	// (0x0001576d) list_single_heading_pane_vc

0xab2a,	// (0x0001579d) list_single_number_heading_pane_vc_ParamLimits

0xab2a,	// (0x0001579d) list_single_number_heading_pane_vc

0x937c,	// (0x00013fef) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x937c,	// (0x00013fef) list_double_graphic_heading_pane_vc_g1

0xb0e6,	// (0x00015d59) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xb0e6,	// (0x00015d59) list_double_graphic_heading_pane_vc_g2

0xb0f2,	// (0x00015d65) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xb0f2,	// (0x00015d65) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9ee,	// (0x0001a661) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9ee,	// (0x0001a661) list_double_graphic_heading_pane_vc_g

0xb0fe,	// (0x00015d71) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xb0fe,	// (0x00015d71) list_double_graphic_heading_pane_vc_t1

0xb11a,	// (0x00015d8d) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xb11a,	// (0x00015d8d) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f5,	// (0x0001a668) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f5,	// (0x0001a668) list_double_graphic_heading_pane_vc_t

0x9476,	// (0x000140e9) list_setting_pane_vc_g1_ParamLimits

0x9476,	// (0x000140e9) list_setting_pane_vc_g1

0x9482,	// (0x000140f5) list_setting_pane_vc_g2_ParamLimits

0x9482,	// (0x000140f5) list_setting_pane_vc_g2

0x0001,

0xf7e4,	// (0x0001a457) list_setting_pane_vc_g_ParamLimits

0xf7e4,	// (0x0001a457) list_setting_pane_vc_g

0xb345,	// (0x00015fb8) list_setting_pane_vc_t1_ParamLimits

0xb345,	// (0x00015fb8) list_setting_pane_vc_t1

0xb361,	// (0x00015fd4) list_setting_pane_vc_t2_ParamLimits

0xb361,	// (0x00015fd4) list_setting_pane_vc_t2

0x0001,

0xfa23,	// (0x0001a696) list_setting_pane_vc_t_ParamLimits

0xfa23,	// (0x0001a696) list_setting_pane_vc_t

0x94ec,	// (0x0001415f) set_value_pane_cp_vc_ParamLimits

0x94ec,	// (0x0001415f) set_value_pane_cp_vc

0x8aad,	// (0x00013720) list_single_number_heading_pane_vc_g1_ParamLimits

0x8aad,	// (0x00013720) list_single_number_heading_pane_vc_g1

0x9388,	// (0x00013ffb) list_single_number_heading_pane_vc_g2_ParamLimits

0x9388,	// (0x00013ffb) list_single_number_heading_pane_vc_g2

0x0001,

0xf7da,	// (0x0001a44d) list_single_number_heading_pane_vc_g_ParamLimits

0xf7da,	// (0x0001a44d) list_single_number_heading_pane_vc_g

0xb37d,	// (0x00015ff0) list_single_number_heading_pane_vc_t1_ParamLimits

0xb37d,	// (0x00015ff0) list_single_number_heading_pane_vc_t1

0xb393,	// (0x00016006) list_single_number_heading_pane_vc_t2_ParamLimits

0xb393,	// (0x00016006) list_single_number_heading_pane_vc_t2

0xb3a5,	// (0x00016018) list_single_number_heading_pane_vc_t3_ParamLimits

0xb3a5,	// (0x00016018) list_single_number_heading_pane_vc_t3

0x0002,

0xfa28,	// (0x0001a69b) list_single_number_heading_pane_vc_t_ParamLimits

0xfa28,	// (0x0001a69b) list_single_number_heading_pane_vc_t

0x937c,	// (0x00013fef) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x937c,	// (0x00013fef) list_single_graphic_heading_pane_vc_g1

0x8aad,	// (0x00013720) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x8aad,	// (0x00013720) list_single_graphic_heading_pane_vc_g4

0x9388,	// (0x00013ffb) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x9388,	// (0x00013ffb) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7b9,	// (0x0001a42c) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7b9,	// (0x0001a42c) list_single_graphic_heading_pane_vc_g

0xb3b7,	// (0x0001602a) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xb3b7,	// (0x0001602a) list_single_graphic_heading_pane_vc_t1

0xb3cd,	// (0x00016040) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xb3cd,	// (0x00016040) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa2f,	// (0x0001a6a2) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa2f,	// (0x0001a6a2) list_single_graphic_heading_pane_vc_t

0x8aad,	// (0x00013720) list_double2_pane_vc_g1_ParamLimits

0x8aad,	// (0x00013720) list_double2_pane_vc_g1

0x9388,	// (0x00013ffb) list_double2_pane_vc_g2_ParamLimits

0x9388,	// (0x00013ffb) list_double2_pane_vc_g2

0x0001,

0xf7da,	// (0x0001a44d) list_double2_pane_vc_g_ParamLimits

0xf7da,	// (0x0001a44d) list_double2_pane_vc_g

0xb3df,	// (0x00016052) list_double2_pane_vc_t1_ParamLimits

0xb3df,	// (0x00016052) list_double2_pane_vc_t1

0xb3f5,	// (0x00016068) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xb3f5,	// (0x00016068) list_double2_large_graphic_pane_vc_g1

0x8aad,	// (0x00013720) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x8aad,	// (0x00013720) list_double2_large_graphic_pane_vc_g2

0x9388,	// (0x00013ffb) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x9388,	// (0x00013ffb) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa34,	// (0x0001a6a7) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa34,	// (0x0001a6a7) list_double2_large_graphic_pane_vc_g

0xb401,	// (0x00016074) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xb401,	// (0x00016074) list_double2_large_graphic_pane_vc_t1

0xb417,	// (0x0001608a) list_double_time_pane_vc_g1_ParamLimits

0xb417,	// (0x0001608a) list_double_time_pane_vc_g1

0xb423,	// (0x00016096) list_double_time_pane_vc_g2_ParamLimits

0xb423,	// (0x00016096) list_double_time_pane_vc_g2

0x0001,

0xfa3b,	// (0x0001a6ae) list_double_time_pane_vc_g_ParamLimits

0xfa3b,	// (0x0001a6ae) list_double_time_pane_vc_g

0xb42f,	// (0x000160a2) list_double_time_pane_vc_t1_ParamLimits

0xb42f,	// (0x000160a2) list_double_time_pane_vc_t1

0xb453,	// (0x000160c6) list_double_time_pane_vc_t2_ParamLimits

0xb453,	// (0x000160c6) list_double_time_pane_vc_t2

0xb482,	// (0x000160f5) list_double_time_pane_vc_t3_ParamLimits

0xb482,	// (0x000160f5) list_double_time_pane_vc_t3

0xb494,	// (0x00016107) list_double_time_pane_vc_t4_ParamLimits

0xb494,	// (0x00016107) list_double_time_pane_vc_t4

0x0003,

0xfa40,	// (0x0001a6b3) list_double_time_pane_vc_t_ParamLimits

0xfa40,	// (0x0001a6b3) list_double_time_pane_vc_t

0x8aad,	// (0x00013720) list_double_pane_vc_g1_ParamLimits

0x8aad,	// (0x00013720) list_double_pane_vc_g1

0x9388,	// (0x00013ffb) list_double_pane_vc_g2_ParamLimits

0x9388,	// (0x00013ffb) list_double_pane_vc_g2

0x0001,

0xf7da,	// (0x0001a44d) list_double_pane_vc_g_ParamLimits

0xf7da,	// (0x0001a44d) list_double_pane_vc_g

0xb4a8,	// (0x0001611b) list_double_pane_vc_t1_ParamLimits

0xb4a8,	// (0x0001611b) list_double_pane_vc_t1

0xb4bc,	// (0x0001612f) list_double_pane_vc_t2_ParamLimits

0xb4bc,	// (0x0001612f) list_double_pane_vc_t2

0x0001,

0xfa49,	// (0x0001a6bc) list_double_pane_vc_t_ParamLimits

0xfa49,	// (0x0001a6bc) list_double_pane_vc_t

0x8aad,	// (0x00013720) list_double_number_pane_vc_g1_ParamLimits

0x8aad,	// (0x00013720) list_double_number_pane_vc_g1

0x9388,	// (0x00013ffb) list_double_number_pane_vc_g2_ParamLimits

0x9388,	// (0x00013ffb) list_double_number_pane_vc_g2

0x0001,

0xf7da,	// (0x0001a44d) list_double_number_pane_vc_g_ParamLimits

0xf7da,	// (0x0001a44d) list_double_number_pane_vc_g

0xb4d4,	// (0x00016147) list_double_number_pane_vc_t1_ParamLimits

0xb4d4,	// (0x00016147) list_double_number_pane_vc_t1

0xb4e6,	// (0x00016159) list_double_number_pane_vc_t2_ParamLimits

0xb4e6,	// (0x00016159) list_double_number_pane_vc_t2

0xb4fa,	// (0x0001616d) list_double_number_pane_vc_t3_ParamLimits

0xb4fa,	// (0x0001616d) list_double_number_pane_vc_t3

0x0002,

0xfa4e,	// (0x0001a6c1) list_double_number_pane_vc_t_ParamLimits

0xfa4e,	// (0x0001a6c1) list_double_number_pane_vc_t

0xb512,	// (0x00016185) list_double_large_graphic_pane_vc_g1_ParamLimits

0xb512,	// (0x00016185) list_double_large_graphic_pane_vc_g1

0xb534,	// (0x000161a7) list_double_large_graphic_pane_vc_g2_ParamLimits

0xb534,	// (0x000161a7) list_double_large_graphic_pane_vc_g2

0xb548,	// (0x000161bb) list_double_large_graphic_pane_vc_g3_ParamLimits

0xb548,	// (0x000161bb) list_double_large_graphic_pane_vc_g3

0xb557,	// (0x000161ca) list_double_large_graphic_pane_vc_g4_ParamLimits

0xb557,	// (0x000161ca) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa55,	// (0x0001a6c8) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa55,	// (0x0001a6c8) list_double_large_graphic_pane_vc_g

0xb563,	// (0x000161d6) list_double_large_graphic_pane_vc_t1_ParamLimits

0xb563,	// (0x000161d6) list_double_large_graphic_pane_vc_t1

0xb57f,	// (0x000161f2) list_double_large_graphic_pane_vc_t2_ParamLimits

0xb57f,	// (0x000161f2) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa5e,	// (0x0001a6d1) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa5e,	// (0x0001a6d1) list_double_large_graphic_pane_vc_t

0xb0e6,	// (0x00015d59) list_double_heading_pane_vc_g1_ParamLimits

0xb0e6,	// (0x00015d59) list_double_heading_pane_vc_g1

0xb0f2,	// (0x00015d65) list_double_heading_pane_vc_g2_ParamLimits

0xb0f2,	// (0x00015d65) list_double_heading_pane_vc_g2

0x0001,

0xfa63,	// (0x0001a6d6) list_double_heading_pane_vc_g_ParamLimits

0xfa63,	// (0x0001a6d6) list_double_heading_pane_vc_g

0xb5a1,	// (0x00016214) list_double_heading_pane_vc_t1_ParamLimits

0xb5a1,	// (0x00016214) list_double_heading_pane_vc_t1

0xb5b5,	// (0x00016228) list_double_heading_pane_vc_t2_ParamLimits

0xb5b5,	// (0x00016228) list_double_heading_pane_vc_t2

0x0001,

0xfa68,	// (0x0001a6db) list_double_heading_pane_vc_t_ParamLimits

0xfa68,	// (0x0001a6db) list_double_heading_pane_vc_t

0xb5cd,	// (0x00016240) list_double_graphic_pane_vc_g1_ParamLimits

0xb5cd,	// (0x00016240) list_double_graphic_pane_vc_g1

0xb5d9,	// (0x0001624c) list_double_graphic_pane_vc_g2_ParamLimits

0xb5d9,	// (0x0001624c) list_double_graphic_pane_vc_g2

0x8aad,	// (0x00013720) list_double_graphic_pane_vc_g3_ParamLimits

0x8aad,	// (0x00013720) list_double_graphic_pane_vc_g3

0x0003,

0xfa6d,	// (0x0001a6e0) list_double_graphic_pane_vc_g_ParamLimits

0xfa6d,	// (0x0001a6e0) list_double_graphic_pane_vc_g

0xb5f6,	// (0x00016269) list_double_graphic_pane_vc_t1_ParamLimits

0xb5f6,	// (0x00016269) list_double_graphic_pane_vc_t1

0xb620,	// (0x00016293) list_double_graphic_pane_vc_t2_ParamLimits

0xb620,	// (0x00016293) list_double_graphic_pane_vc_t2

0x0001,

0xfa76,	// (0x0001a6e9) list_double_graphic_pane_vc_t_ParamLimits

0xfa76,	// (0x0001a6e9) list_double_graphic_pane_vc_t

0x48c6,	// (0x0000f539) aid_size_cell_fastswap

0x48ce,	// (0x0000f541) aid_size_cell_touch_ParamLimits

0x48ce,	// (0x0000f541) aid_size_cell_touch

0x4b33,	// (0x0000f7a6) popup_fast_swap_wide_window_ParamLimits

0x4b33,	// (0x0000f7a6) popup_fast_swap_wide_window

0x4c47,	// (0x0000f8ba) touch_pane_ParamLimits

0x4c47,	// (0x0000f8ba) touch_pane

0x7bf5,	// (0x00012868) button_value_adjust_pane_cp2

0x7bfd,	// (0x00012870) button_value_adjust_pane_cp4

0x7c1f,	// (0x00012892) form_field_data_pane_cp2

0x7c40,	// (0x000128b3) form_field_data_wide_pane_cp2

0x82bc,	// (0x00012f2f) bg_scroll_pane_ParamLimits

0x4ed5,	// (0x0000fb48) scroll_handle_pane_ParamLimits

0x4ee9,	// (0x0000fb5c) scroll_sc2_down_pane_ParamLimits

0x4ee9,	// (0x0000fb5c) scroll_sc2_down_pane

0x82ed,	// (0x00012f60) scroll_sc2_up_pane_ParamLimits

0x82ed,	// (0x00012f60) scroll_sc2_up_pane

0xbac7,	// (0x0001673a) grid_wheel_folder_pane_g1_ParamLimits

0xbac7,	// (0x0001673a) grid_wheel_folder_pane_g1

0x50ae,	// (0x0000fd21) clock_nsta_pane_cp2_ParamLimits

0x50ae,	// (0x0000fd21) clock_nsta_pane_cp2

0x8b7c,	// (0x000137ef) listscroll_midp_pane_ParamLimits

0x8b88,	// (0x000137fb) midp_canvas_pane

0x8e70,	// (0x00013ae3) nsta_clock_indic_pane

0x8eac,	// (0x00013b1f) listscroll_form_pane_vc

0x8eb4,	// (0x00013b27) listscroll_set_pane_vc_ParamLimits

0x8eb4,	// (0x00013b27) listscroll_set_pane_vc

0x8fc1,	// (0x00013c34) clock_nsta_pane

0x9036,	// (0x00013ca9) indicator_nsta_pane

0x9316,	// (0x00013f89) bg_popup_sub_pane_cp2_ParamLimits

0x932a,	// (0x00013f9d) find_pane_cp2_ParamLimits

0x932a,	// (0x00013f9d) find_pane_cp2

0x9340,	// (0x00013fb3) grid_toobar_pane_ParamLimits

0x94fc,	// (0x0001416f) list_form_gen_pane_vc_ParamLimits

0x94fc,	// (0x0001416f) list_form_gen_pane_vc

0x9512,	// (0x00014185) scroll_pane_cp8_vc_ParamLimits

0x9512,	// (0x00014185) scroll_pane_cp8_vc

0x958e,	// (0x00014201) data_form_wide_pane_vc_ParamLimits

0x958e,	// (0x00014201) data_form_wide_pane_vc

0x959a,	// (0x0001420d) form_field_data_wide_pane_vc_g1

0x95a2,	// (0x00014215) form_field_data_wide_pane_vc_t1_ParamLimits

0x95a2,	// (0x00014215) form_field_data_wide_pane_vc_t1

0x7cdb,	// (0x0001294e) input_focus_pane_cp6_vc_ParamLimits

0x7cdb,	// (0x0001294e) input_focus_pane_cp6_vc

0x98ff,	// (0x00014572) list_midp_pane_ParamLimits

0x990b,	// (0x0001457e) scroll_pane_cp16_ParamLimits

0x990b,	// (0x0001457e) scroll_pane_cp16

0x9961,	// (0x000145d4) button_value_adjust_pane_ParamLimits

0x9961,	// (0x000145d4) button_value_adjust_pane

0xa906,	// (0x00015579) button_value_adjust_pane_cp6_ParamLimits

0xa906,	// (0x00015579) button_value_adjust_pane_cp6

0xaa30,	// (0x000156a3) settings_code_pane_cp_ParamLimits

0xaa30,	// (0x000156a3) settings_code_pane_cp

0x6ded,	// (0x00011a60) cell_touch_pane_g1

0x6ded,	// (0x00011a60) cell_touch_pane_g2

0x0001,

0xf6fe,	// (0x0001a371) cell_touch_pane_g

0xb0c4,	// (0x00015d37) cell_touch_pane_cp_ParamLimits

0xb0c4,	// (0x00015d37) cell_touch_pane_cp

0xb0d4,	// (0x00015d47) cell_touch_pane_ParamLimits

0xb0d4,	// (0x00015d47) cell_touch_pane

0x6ded,	// (0x00011a60) scroll_sc2_down_pane_g1

0x6ded,	// (0x00011a60) scroll_sc2_up_pane_g1

0x6df7,	// (0x00011a6a) bg_set_opt_pane_cp4_vc

0xb138,	// (0x00015dab) list_set_graphic_pane_vc_g1_ParamLimits

0xb138,	// (0x00015dab) list_set_graphic_pane_vc_g1

0xb144,	// (0x00015db7) list_set_graphic_pane_vc_g2_ParamLimits

0xb144,	// (0x00015db7) list_set_graphic_pane_vc_g2

0x0001,

0xf9fa,	// (0x0001a66d) list_set_graphic_pane_vc_g_ParamLimits

0xf9fa,	// (0x0001a66d) list_set_graphic_pane_vc_g

0xb150,	// (0x00015dc3) text_primary_small_cp13_vc_ParamLimits

0xb150,	// (0x00015dc3) text_primary_small_cp13_vc

0xb168,	// (0x00015ddb) list_set_graphic_pane_vc_ParamLimits

0xb168,	// (0x00015ddb) list_set_graphic_pane_vc

0x6df7,	// (0x00011a6a) input_focus_pane_cp2_vc

0x6ded,	// (0x00011a60) setting_code_pane_vc_g1

0x6f22,	// (0x00011b95) setting_code_pane_vc_t1

0xb17a,	// (0x00015ded) set_text_pane_vc_t1_ParamLimits

0xb17a,	// (0x00015ded) set_text_pane_vc_t1

0x6df7,	// (0x00011a6a) input_focus_pane_cp1_vc

0xb196,	// (0x00015e09) list_set_text_pane_vc

0x6ded,	// (0x00011a60) setting_text_pane_vc_g1

0x6df7,	// (0x00011a6a) bg_set_opt_pane_cp2_vc

0x6f19,	// (0x00011b8c) setting_slider_graphic_pane_vc_g1

0xb1a0,	// (0x00015e13) setting_slider_graphic_pane_vc_t1

0xb1b0,	// (0x00015e23) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9ff,	// (0x0001a672) setting_slider_graphic_pane_vc_t

0xb1c0,	// (0x00015e33) slider_set_pane_cp_vc

0xb1c8,	// (0x00015e3b) slider_set_pane_vc_g1

0xb1d1,	// (0x00015e44) slider_set_pane_vc_g2

0x0006,

0xfa04,	// (0x0001a677) slider_set_pane_vc_g

0x7dfe,	// (0x00012a71) set_opt_bg_pane_g1_copy1

0x7e06,	// (0x00012a79) set_opt_bg_pane_g2_copy1

0xb1fd,	// (0x00015e70) set_opt_bg_pane_g3_copy1

0x7e16,	// (0x00012a89) set_opt_bg_pane_g4_copy1

0x7e1e,	// (0x00012a91) set_opt_bg_pane_g5_copy1

0x7e26,	// (0x00012a99) set_opt_bg_pane_g6_copy1

0xb207,	// (0x00015e7a) set_opt_bg_pane_g7_copy1

0xb20f,	// (0x00015e82) set_opt_bg_pane_g8_copy1

0xb219,	// (0x00015e8c) set_opt_bg_pane_g9_copy1

0x6df7,	// (0x00011a6a) bg_set_opt_pane_cp_vc

0xb223,	// (0x00015e96) setting_slider_pane_vc_t1

0xb232,	// (0x00015ea5) setting_slider_pane_vc_t2

0xb242,	// (0x00015eb5) setting_slider_pane_vc_t3

0x0002,

0xfa13,	// (0x0001a686) setting_slider_pane_vc_t

0xb252,	// (0x00015ec5) slider_set_pane_vc

0x5aac,	// (0x0001071f) volume_set_pane_vc_g1

0x5ab5,	// (0x00010728) volume_set_pane_vc_g2

0x5abe,	// (0x00010731) volume_set_pane_vc_g3

0x5ac7,	// (0x0001073a) volume_set_pane_vc_g4

0x5ad0,	// (0x00010743) volume_set_pane_vc_g5

0x5ad9,	// (0x0001074c) volume_set_pane_vc_g6

0x5ae2,	// (0x00010755) volume_set_pane_vc_g7

0x5aeb,	// (0x0001075e) volume_set_pane_vc_g8

0x5af4,	// (0x00010767) volume_set_pane_vc_g9

0x5afd,	// (0x00010770) volume_set_pane_vc_g10

0x0009,

0xf8b1,	// (0x0001a524) volume_set_pane_vc_g

0xb25a,	// (0x00015ecd) volume_set_pane_vc

0xb262,	// (0x00015ed5) button_value_adjust_pane_cp1_vc

0xb26c,	// (0x00015edf) list_highlight_pane_cp2_vc

0xb275,	// (0x00015ee8) list_set_pane_vc_ParamLimits

0xb275,	// (0x00015ee8) list_set_pane_vc

0xb2d3,	// (0x00015f46) main_pane_set_vc_t1_ParamLimits

0xb2d3,	// (0x00015f46) main_pane_set_vc_t1

0xb2e8,	// (0x00015f5b) main_pane_set_vc_t2_ParamLimits

0xb2e8,	// (0x00015f5b) main_pane_set_vc_t2

0xb2fa,	// (0x00015f6d) main_pane_set_vc_t3_ParamLimits

0xb2fa,	// (0x00015f6d) main_pane_set_vc_t3

0xb30e,	// (0x00015f81) main_pane_set_vc_t4_ParamLimits

0xb30e,	// (0x00015f81) main_pane_set_vc_t4

0x0003,

0xfa1a,	// (0x0001a68d) main_pane_set_vc_t_ParamLimits

0xfa1a,	// (0x0001a68d) main_pane_set_vc_t

0xb322,	// (0x00015f95) setting_code_pane_vc_ParamLimits

0xb322,	// (0x00015f95) setting_code_pane_vc

0xb333,	// (0x00015fa6) setting_slider_graphic_pane_vc

0xb333,	// (0x00015fa6) setting_slider_pane_vc

0xb333,	// (0x00015fa6) setting_text_pane_vc

0xb333,	// (0x00015fa6) setting_volume_pane_vc

0xb33d,	// (0x00015fb0) scroll_pane_cp121_vc

0x7be3,	// (0x00012856) set_content_pane_vc

0xb64a,	// (0x000162bd) button_value_adjust_pane_g1

0xb653,	// (0x000162c6) button_value_adjust_pane_g2

0x0001,

0xfa7b,	// (0x0001a6ee) button_value_adjust_pane_g

0xb65c,	// (0x000162cf) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb65c,	// (0x000162cf) form_field_slider_wide_pane_vc_t1

0xb670,	// (0x000162e3) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb670,	// (0x000162e3) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa80,	// (0x0001a6f3) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa80,	// (0x0001a6f3) form_field_slider_wide_pane_vc_t

0x716c,	// (0x00011ddf) input_focus_pane_cp10_vc_ParamLimits

0x716c,	// (0x00011ddf) input_focus_pane_cp10_vc

0xb69e,	// (0x00016311) slider_cont_pane_cp1_vc_ParamLimits

0xb69e,	// (0x00016311) slider_cont_pane_cp1_vc

0xb6b0,	// (0x00016323) slider_form_pane_g1_cp2

0xb1d1,	// (0x00015e44) slider_form_pane_g2_cp2

0xb6dd,	// (0x00016350) form_field_slider_pane_vc_t3

0xb6eb,	// (0x0001635e) form_field_slider_pane_vc_t4

0xb6f9,	// (0x0001636c) slider_form_pane_vc_ParamLimits

0xb6f9,	// (0x0001636c) slider_form_pane_vc

0xb706,	// (0x00016379) form_field_slider_pane_vc_t1_ParamLimits

0xb706,	// (0x00016379) form_field_slider_pane_vc_t1

0xb670,	// (0x000162e3) form_field_slider_pane_vc_t2_ParamLimits

0xb670,	// (0x000162e3) form_field_slider_pane_vc_t2

0x0001,

0xfa92,	// (0x0001a705) form_field_slider_pane_vc_t_ParamLimits

0xfa92,	// (0x0001a705) form_field_slider_pane_vc_t

0x716c,	// (0x00011ddf) input_focus_pane_cp9_vc_ParamLimits

0x716c,	// (0x00011ddf) input_focus_pane_cp9_vc

0xb722,	// (0x00016395) slider_cont_pane_vc_ParamLimits

0xb722,	// (0x00016395) slider_cont_pane_vc

0xb736,	// (0x000163a9) list_form_graphic_pane_cp_vc_ParamLimits

0xb736,	// (0x000163a9) list_form_graphic_pane_cp_vc

0x959a,	// (0x0001420d) form_field_popup_wide_pane_vc_g1

0xb74b,	// (0x000163be) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb74b,	// (0x000163be) form_field_popup_wide_pane_vc_t1

0x7cdb,	// (0x0001294e) input_focus_pane_cp8_vc_ParamLimits

0x7cdb,	// (0x0001294e) input_focus_pane_cp8_vc

0xb790,	// (0x00016403) list_form_wide_pane_vc_ParamLimits

0xb790,	// (0x00016403) list_form_wide_pane_vc

0xb79c,	// (0x0001640f) list_form_graphic_pane_vc_g1

0xb7a4,	// (0x00016417) list_form_graphic_pane_vc_t1_ParamLimits

0xb7a4,	// (0x00016417) list_form_graphic_pane_vc_t1

0x6ed7,	// (0x00011b4a) list_highlight_pane_cp5_vc_ParamLimits

0x6ed7,	// (0x00011b4a) list_highlight_pane_cp5_vc

0xb7c0,	// (0x00016433) list_form_graphic_pane_vc_ParamLimits

0xb7c0,	// (0x00016433) list_form_graphic_pane_vc

0x959a,	// (0x0001420d) form_field_popup_pane_vc_g1

0xb7d6,	// (0x00016449) form_field_popup_pane_vc_t1_ParamLimits

0xb7d6,	// (0x00016449) form_field_popup_pane_vc_t1

0x7cdb,	// (0x0001294e) input_focus_pane_cp7_vc_ParamLimits

0x7cdb,	// (0x0001294e) input_focus_pane_cp7_vc

0xb7ed,	// (0x00016460) list_form_pane_vc_ParamLimits

0xb7ed,	// (0x00016460) list_form_pane_vc

0xb7f9,	// (0x0001646c) data_form_pane_vc_t1_ParamLimits

0xb7f9,	// (0x0001646c) data_form_pane_vc_t1

0x7dfe,	// (0x00012a71) input_focus_pane_vc_g1

0x7e06,	// (0x00012a79) input_focus_pane_vc_g2

0x7e0e,	// (0x00012a81) input_focus_pane_vc_g3

0x7e16,	// (0x00012a89) input_focus_pane_vc_g4

0x7e1e,	// (0x00012a91) input_focus_pane_vc_g5

0x7e26,	// (0x00012a99) input_focus_pane_vc_g6

0x7e2e,	// (0x00012aa1) input_focus_pane_vc_g7

0x7e36,	// (0x00012aa9) input_focus_pane_vc_g8

0x7e3e,	// (0x00012ab1) input_focus_pane_vc_g9

0x6ded,	// (0x00011a60) input_focus_pane_vc_g10

0x0009,

0xf687,	// (0x0001a2fa) input_focus_pane_vc_g

0x958e,	// (0x00014201) data_form_pane_vc_ParamLimits

0x958e,	// (0x00014201) data_form_pane_vc

0x959a,	// (0x0001420d) form_field_data_pane_vc_g1

0xb814,	// (0x00016487) form_field_data_pane_vc_t1_ParamLimits

0xb814,	// (0x00016487) form_field_data_pane_vc_t1

0x7cdb,	// (0x0001294e) input_focus_pane_vc_ParamLimits

0x7cdb,	// (0x0001294e) input_focus_pane_vc

0xb82e,	// (0x000164a1) button_value_adjust_pane_cp3_vc

0xb836,	// (0x000164a9) button_value_adjust_pane_cp5_vc

0xb83e,	// (0x000164b1) form_field_data_pane_vc_ParamLimits

0xb83e,	// (0x000164b1) form_field_data_pane_vc

0xb855,	// (0x000164c8) form_field_data_pane_vc_cp2

0xb85d,	// (0x000164d0) form_field_data_wide_pane_vc_ParamLimits

0xb85d,	// (0x000164d0) form_field_data_wide_pane_vc

0xb873,	// (0x000164e6) form_field_data_wide_pane_vc_cp2

0xb87b,	// (0x000164ee) form_field_popup_pane_vc_ParamLimits

0xb87b,	// (0x000164ee) form_field_popup_pane_vc

0xb892,	// (0x00016505) form_field_popup_wide_pane_vc_ParamLimits

0xb892,	// (0x00016505) form_field_popup_wide_pane_vc

0xb8a8,	// (0x0001651b) form_field_slider_pane_vc_ParamLimits

0xb8a8,	// (0x0001651b) form_field_slider_pane_vc

0xb8bb,	// (0x0001652e) form_field_slider_wide_pane_vc_ParamLimits

0xb8bb,	// (0x0001652e) form_field_slider_wide_pane_vc

0xb8ce,	// (0x00016541) grid_touch_1_pane_ParamLimits

0xb8ce,	// (0x00016541) grid_touch_1_pane

0xb8da,	// (0x0001654d) grid_touch_2_pane_ParamLimits

0xb8da,	// (0x0001654d) grid_touch_2_pane

0x8e3b,	// (0x00013aae) touch_pane_g1_ParamLimits

0x8e3b,	// (0x00013aae) touch_pane_g1

0xb8f2,	// (0x00016565) cell_app_pane_cp_wide_ParamLimits

0xb8f2,	// (0x00016565) cell_app_pane_cp_wide

0xb903,	// (0x00016576) grid_popup_fast_wide_pane_ParamLimits

0xb903,	// (0x00016576) grid_popup_fast_wide_pane

0xb917,	// (0x0001658a) scroll_pane_cp19_ParamLimits

0xb917,	// (0x0001658a) scroll_pane_cp19

0x6df7,	// (0x00011a6a) bg_popup_window_pane_cp20

0xb92b,	// (0x0001659e) listscroll_popup_fast_wide_pane

0x6ed7,	// (0x00011b4a) grid_indicator_nsta_pane

0xb933,	// (0x000165a6) clock_nsta_pane_g1

0xb93c,	// (0x000165af) clock_nsta_pane_t1

0xb958,	// (0x000165cb) cell_indicator_nsta_pane_ParamLimits

0xb958,	// (0x000165cb) cell_indicator_nsta_pane

0xb989,	// (0x000165fc) cell_indicator_nsta_pane_g1

0xb997,	// (0x0001660a) cell_indicator_nsta_pane_g2

0x0001,

0xfaa3,	// (0x0001a716) cell_indicator_nsta_pane_g

0xb9a4,	// (0x00016617) clock_nsta_pane_cp

0xb9ac,	// (0x0001661f) indicator_nsta_pane_cp

0xb9b4,	// (0x00016627) nsta_clock_indic_pane_g1

0x6fba,	// (0x00011c2d) grid_indicator_pane

0x83e2,	// (0x00013055) scroll_pane_cp29

0x4ffd,	// (0x0000fc70) indicator_nsta_pane_cp2_ParamLimits

0x4ffd,	// (0x0000fc70) indicator_nsta_pane_cp2

0x6ed7,	// (0x00011b4a) main_apps_wheel_pane

0x97e0,	// (0x00014453) form_midp_field_text_pane_ParamLimits

0x992b,	// (0x0001459e) scroll_bar_cp050_ParamLimits

0xba04,	// (0x00016677) cell_indicator_pane_ParamLimits

0xba04,	// (0x00016677) cell_indicator_pane

0xba1b,	// (0x0001668e) cell_indicator_pane_g1

0xba25,	// (0x00016698) grid_wheel_folder_pane_ParamLimits

0xba25,	// (0x00016698) grid_wheel_folder_pane

0xba3b,	// (0x000166ae) list_wheel_apps_pane_ParamLimits

0xba3b,	// (0x000166ae) list_wheel_apps_pane

0xba4c,	// (0x000166bf) main_apps_wheel_pane_g1_ParamLimits

0xba4c,	// (0x000166bf) main_apps_wheel_pane_g1

0xba60,	// (0x000166d3) main_apps_wheel_pane_g2_ParamLimits

0xba60,	// (0x000166d3) main_apps_wheel_pane_g2

0x0001,

0xfabf,	// (0x0001a732) main_apps_wheel_pane_g_ParamLimits

0xfabf,	// (0x0001a732) main_apps_wheel_pane_g

0xba78,	// (0x000166eb) main_apps_wheel_pane_t1_ParamLimits

0xba78,	// (0x000166eb) main_apps_wheel_pane_t1

0xba9b,	// (0x0001670e) list_wheel_apps_pane_g1

0xbaa3,	// (0x00016716) list_wheel_apps_pane_g2

0xbaab,	// (0x0001671e) list_wheel_apps_pane_g3

0xbab3,	// (0x00016726) list_wheel_apps_pane_g4

0xbabd,	// (0x00016730) list_wheel_apps_pane_g5

0x0004,

0xfac4,	// (0x0001a737) list_wheel_apps_pane_g

0x89f4,	// (0x00013667) navi_icon_text_pane

0x8ef0,	// (0x00013b63) aid_fill_nsta

0xbae0,	// (0x00016753) navi_icon_text_pane_g1

0xbaec,	// (0x0001675f) navi_icon_text_pane_t1

0x8887,	// (0x000134fa) list_set_graphic_pane_t1_ParamLimits

0x8887,	// (0x000134fa) list_set_graphic_pane_t1

0xa08e,	// (0x00014d01) popup_midp_note_alarm_window_t6_ParamLimits

0xa08e,	// (0x00014d01) popup_midp_note_alarm_window_t6

0xa0a0,	// (0x00014d13) popup_midp_note_alarm_window_t7_ParamLimits

0xa0a0,	// (0x00014d13) popup_midp_note_alarm_window_t7

0xa0b2,	// (0x00014d25) popup_midp_note_alarm_window_t8_ParamLimits

0xa0b2,	// (0x00014d25) popup_midp_note_alarm_window_t8

0xa0c4,	// (0x00014d37) popup_midp_note_alarm_window_t9_ParamLimits

0xa0c4,	// (0x00014d37) popup_midp_note_alarm_window_t9

0xa0d6,	// (0x00014d49) popup_midp_note_alarm_window_t10_ParamLimits

0xa0d6,	// (0x00014d49) popup_midp_note_alarm_window_t10

0xa0e8,	// (0x00014d5b) popup_midp_note_alarm_window_t11_ParamLimits

0xa0e8,	// (0x00014d5b) popup_midp_note_alarm_window_t11

0xa0fa,	// (0x00014d6d) scroll_pane_cp17_ParamLimits

0xa0fa,	// (0x00014d6d) scroll_pane_cp17

0x5aac,	// (0x0001071f) volume_small_pane_cp_g1

0x5da1,	// (0x00010a14) volume_small_pane_cp_g2

0x5daa,	// (0x00010a1d) volume_small_pane_cp_g3

0x5db3,	// (0x00010a26) volume_small_pane_cp_g4

0x5dbc,	// (0x00010a2f) volume_small_pane_cp_g5

0x5dc5,	// (0x00010a38) volume_small_pane_cp_g6

0x5dce,	// (0x00010a41) volume_small_pane_cp_g7

0x5dd7,	// (0x00010a4a) volume_small_pane_cp_g8

0x5de0,	// (0x00010a53) volume_small_pane_cp_g9

0x5de9,	// (0x00010a5c) volume_small_pane_cp_g10

0x8c51,	// (0x000138c4) midp_ticker_pane_g1_ParamLimits

0x8c5d,	// (0x000138d0) midp_ticker_pane_g2_ParamLimits

0xf753,	// (0x0001a3c6) midp_ticker_pane_g_ParamLimits

0x8c69,	// (0x000138dc) midp_ticker_pane_t1_ParamLimits

0x8f06,	// (0x00013b79) aid_fill_nsta_2

0x9917,	// (0x0001458a) list_form2_midp_pane

0xaaae,	// (0x00015721) midp_editing_number_pane_ParamLimits

0xaabd,	// (0x00015730) midp_ticker_pane_ParamLimits

0xbafe,	// (0x00016771) form2_midp_field_pane

0xbb22,	// (0x00016795) scroll_pane_cp51

0xbb42,	// (0x000167b5) form2_midp_button_pane_ParamLimits

0xbb42,	// (0x000167b5) form2_midp_button_pane

0xbb54,	// (0x000167c7) form2_midp_content_pane_ParamLimits

0xbb54,	// (0x000167c7) form2_midp_content_pane

0xbb6e,	// (0x000167e1) form2_midp_field_choice_group_pane

0xbb76,	// (0x000167e9) form2_midp_field_pane_g1

0xbb7e,	// (0x000167f1) form2_midp_field_pane_g2

0xbb86,	// (0x000167f9) form2_midp_field_pane_g3

0xbb8e,	// (0x00016801) form2_midp_field_pane_g4

0x0003,

0xfae9,	// (0x0001a75c) form2_midp_field_pane_g

0xbb96,	// (0x00016809) form2_midp_gauge_slider_pane

0xbb9e,	// (0x00016811) form2_midp_gauge_wait_pane

0xbba6,	// (0x00016819) form2_midp_image_pane_ParamLimits

0xbba6,	// (0x00016819) form2_midp_image_pane

0xbbc1,	// (0x00016834) form2_midp_label_pane_ParamLimits

0xbbc1,	// (0x00016834) form2_midp_label_pane

0xbbda,	// (0x0001684d) form2_midp_label_pane_cp_ParamLimits

0xbbda,	// (0x0001684d) form2_midp_label_pane_cp

0xbbfb,	// (0x0001686e) form2_midp_string_pane_ParamLimits

0xbbfb,	// (0x0001686e) form2_midp_string_pane

0xbc0d,	// (0x00016880) form2_midp_text_pane_ParamLimits

0xbc0d,	// (0x00016880) form2_midp_text_pane

0xbc2a,	// (0x0001689d) form2_midp_time_pane

0xbc3a,	// (0x000168ad) input_focus_pane_cp51_ParamLimits

0xbc3a,	// (0x000168ad) input_focus_pane_cp51

0xbc52,	// (0x000168c5) form2_midp_label_pane_t1_ParamLimits

0xbc52,	// (0x000168c5) form2_midp_label_pane_t1

0xbc93,	// (0x00016906) form2_mdip_text_pane_t1_ParamLimits

0xbc93,	// (0x00016906) form2_mdip_text_pane_t1

0xbcb2,	// (0x00016925) form2_midp_time_pane_t1

0xbccd,	// (0x00016940) form2_midp_gauge_slider_pane_t1

0xbcdf,	// (0x00016952) form2_midp_gauge_slider_pane_t2

0xbcf1,	// (0x00016964) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf2,	// (0x0001a765) form2_midp_gauge_slider_pane_t

0xbd03,	// (0x00016976) form2_midp_slider_pane

0xbd0f,	// (0x00016982) form2_midp_gauge_wait_pane_t1

0xbd1d,	// (0x00016990) form2_midp_wait_pane_ParamLimits

0xbd1d,	// (0x00016990) form2_midp_wait_pane

0xbd48,	// (0x000169bb) list_single_2graphic_pane_cp4_ParamLimits

0xbd48,	// (0x000169bb) list_single_2graphic_pane_cp4

0x9602,	// (0x00014275) list_single_midp_graphic_pane_cp_ParamLimits

0x9602,	// (0x00014275) list_single_midp_graphic_pane_cp

0x6df7,	// (0x00011a6a) list_highlight_pane_cp20

0xbd6c,	// (0x000169df) list_single_2graphic_pane_g1_cp4

0xbd74,	// (0x000169e7) list_single_2graphic_pane_g2_cp4

0xbd7c,	// (0x000169ef) list_single_2graphic_pane_t1_cp4

0x6ed7,	// (0x00011b4a) list_highlight_pane_cp21

0xbd8b,	// (0x000169fe) list_single_midp_graphic_pane_g4_cp

0xbd9a,	// (0x00016a0d) list_single_midp_graphic_pane_t1_cp

0xbdaf,	// (0x00016a22) form2_mdip_string_pane_t1_ParamLimits

0xbdaf,	// (0x00016a22) form2_mdip_string_pane_t1

0x6df7,	// (0x00011a6a) bg_wml_button_pane_cp2

0x6ded,	// (0x00011a60) form2_midp_image_pane_g1

0x7999,	// (0x0001260c) list_double_large_graphic_pane_g5_ParamLimits

0x7999,	// (0x0001260c) list_double_large_graphic_pane_g5

0x8b7c,	// (0x000137ef) midp_form_pane_ParamLimits

0x6ed7,	// (0x00011b4a) main_apps_wheel_pane_ParamLimits

0x56ec,	// (0x0001035f) popup_preview_window_ParamLimits

0x56ec,	// (0x0001035f) popup_preview_window

0x58a7,	// (0x0001051a) popup_touch_info_window_ParamLimits

0x58a7,	// (0x0001051a) popup_touch_info_window

0x58c5,	// (0x00010538) popup_touch_menu_window_ParamLimits

0x58c5,	// (0x00010538) popup_touch_menu_window

0x6de3,	// (0x00011a56) bg_popup_sub_pane_cp6

0xbe99,	// (0x00016b0c) list_touch_menu_pane

0xbea1,	// (0x00016b14) list_single_touch_menu_pane_ParamLimits

0xbea1,	// (0x00016b14) list_single_touch_menu_pane

0xbeb7,	// (0x00016b2a) list_single_touch_menu_pane_t1

0x6ed7,	// (0x00011b4a) bg_popup_sub_pane_cp7_ParamLimits

0x6ed7,	// (0x00011b4a) bg_popup_sub_pane_cp7

0xbec5,	// (0x00016b38) heading_sub_pane

0xbecd,	// (0x00016b40) list_touch_info_pane_ParamLimits

0xbecd,	// (0x00016b40) list_touch_info_pane

0xbedc,	// (0x00016b4f) list_single_touch_info_pane_ParamLimits

0xbedc,	// (0x00016b4f) list_single_touch_info_pane

0xbeee,	// (0x00016b61) list_single_touch_info_pane_t1

0xbefc,	// (0x00016b6f) list_single_touch_info_pane_t2

0x0001,

0xfb00,	// (0x0001a773) list_single_touch_info_pane_t

0x8b74,	// (0x000137e7) bg_popup_heading_pane_cp

0xbf0a,	// (0x00016b7d) heading_sub_pane_t1

0x9528,	// (0x0001419b) bg_popup_preview_window_pane_cp_ParamLimits

0x9528,	// (0x0001419b) bg_popup_preview_window_pane_cp

0xbec5,	// (0x00016b38) heading_preview_pane

0xbecd,	// (0x00016b40) list_preview_pane_ParamLimits

0xbecd,	// (0x00016b40) list_preview_pane

0xbf18,	// (0x00016b8b) popup_preview_window_g1

0xbedc,	// (0x00016b4f) list_single_preview_pane_ParamLimits

0xbedc,	// (0x00016b4f) list_single_preview_pane

0xbf20,	// (0x00016b93) list_single_preview_pane_g1

0xbf28,	// (0x00016b9b) list_single_preview_pane_t1

0xbeee,	// (0x00016b61) list_single_preview_pane_t2

0x0001,

0xfb05,	// (0x0001a778) list_single_preview_pane_t

0xbf36,	// (0x00016ba9) bg_popup_heading_pane_cp2_ParamLimits

0xbf36,	// (0x00016ba9) bg_popup_heading_pane_cp2

0xbf4c,	// (0x00016bbf) heading_preview_pane_g1

0xbf54,	// (0x00016bc7) heading_preview_pane_t1_ParamLimits

0xbf54,	// (0x00016bc7) heading_preview_pane_t1

0x6fdd,	// (0x00011c50) soft_indicator_pane_t1_ParamLimits

0x76d3,	// (0x00012346) scroll_pane_ParamLimits

0x82db,	// (0x00012f4e) scroll_sc2_left_pane

0x82e4,	// (0x00012f57) scroll_sc2_right_pane

0x8303,	// (0x00012f76) scroll_bg_pane_g1_ParamLimits

0x8318,	// (0x00012f8b) scroll_bg_pane_g2_ParamLimits

0x8330,	// (0x00012fa3) scroll_bg_pane_g3_ParamLimits

0xf6de,	// (0x0001a351) scroll_bg_pane_g_ParamLimits

0x8303,	// (0x00012f76) scroll_handle_pane_g1_ParamLimits

0x8352,	// (0x00012fc5) scroll_handle_pane_g2_ParamLimits

0x8330,	// (0x00012fa3) scroll_handle_pane_g3_ParamLimits

0xf6e5,	// (0x0001a358) scroll_handle_pane_g_ParamLimits

0x536d,	// (0x0000ffe0) popup_choice_list_window_ParamLimits

0x536d,	// (0x0000ffe0) popup_choice_list_window

0x9322,	// (0x00013f95) choice_list_pane

0x93d2,	// (0x00014045) cell_toolbar_pane_t1

0x93fa,	// (0x0001406d) toolbar_button_pane_ParamLimits

0xa5b4,	// (0x00015227) ai_gene_pane_1_t2_ParamLimits

0xa5b4,	// (0x00015227) ai_gene_pane_1_t2

0x0001,

0xf90d,	// (0x0001a580) ai_gene_pane_1_t_ParamLimits

0xf90d,	// (0x0001a580) ai_gene_pane_1_t

0xbf71,	// (0x00016be4) scroll_sc2_left_pane_g1

0xbf71,	// (0x00016be4) scroll_sc2_right_pane_g1

0x8ec6,	// (0x00013b39) bg_popup_sub_pane_cp10

0xbf7b,	// (0x00016bee) list_choice_list_pane

0xbf94,	// (0x00016c07) list_single_choice_list_pane_ParamLimits

0xbf94,	// (0x00016c07) list_single_choice_list_pane

0xbfa7,	// (0x00016c1a) list_single_choice_list_pane_g1

0x7fe3,	// (0x00012c56) list_single_choice_list_pane_t1_ParamLimits

0x7fe3,	// (0x00012c56) list_single_choice_list_pane_t1

0xbfaf,	// (0x00016c22) choice_list_pane_g1

0xbfb7,	// (0x00016c2a) choice_list_pane_t1

0x6de3,	// (0x00011a56) input_focus_pane_cp11

0x81ba,	// (0x00012e2d) title_pane_stacon_g2_ParamLimits

0x81ba,	// (0x00012e2d) title_pane_stacon_g2

0x0002,

0xf6c4,	// (0x0001a337) title_pane_stacon_g_ParamLimits

0xf6c4,	// (0x0001a337) title_pane_stacon_g

0x8b74,	// (0x000137e7) cursor_press_pane

0x5419,	// (0x0001008c) popup_fep_hwr_window_ParamLimits

0x5419,	// (0x0001008c) popup_fep_hwr_window

0x5493,	// (0x00010106) popup_fep_vkb_window_ParamLimits

0x5493,	// (0x00010106) popup_fep_vkb_window

0xbfc5,	// (0x00016c38) cursor_press_pane_g1

0x0002,

0xfb2e,	// (0x0001a7a1) fep_vkb_side_pane_g_ParamLimits

0x5e2b,	// (0x00010a9e) fep_hwr_candidate_pane_ParamLimits

0x5e2b,	// (0x00010a9e) fep_hwr_candidate_pane

0x5e55,	// (0x00010ac8) fep_hwr_side_pane_ParamLimits

0x5e55,	// (0x00010ac8) fep_hwr_side_pane

0x5e75,	// (0x00010ae8) fep_hwr_top_pane_ParamLimits

0x5e75,	// (0x00010ae8) fep_hwr_top_pane

0x5e8d,	// (0x00010b00) fep_hwr_write_pane_ParamLimits

0x5e8d,	// (0x00010b00) fep_hwr_write_pane

0xfb2e,	// (0x0001a7a1) fep_vkb_side_pane_g

0xbfcd,	// (0x00016c40) fep_hwr_top_pane_g1

0xbfdf,	// (0x00016c52) fep_hwr_top_pane_g2

0x5ec7,	// (0x00010b3a) fep_hwr_top_pane_g3

0x0002,

0xfb0a,	// (0x0001a77d) fep_hwr_top_pane_g

0x5edc,	// (0x00010b4f) fep_hwr_top_text_pane

0x84d2,	// (0x00013145) fep_hwr_top_text_pane_g1

0xc015,	// (0x00016c88) fep_hwr_top_text_pane_t1

0x5fd2,	// (0x00010c45) fep_hwr_candidate_pane_g1

0xc268,	// (0x00016edb) fep_vkb_keypad_pane_g3_ParamLimits

0xc268,	// (0x00016edb) fep_vkb_keypad_pane_g3

0xc290,	// (0x00016f03) fep_vkb_keypad_pane_g4_ParamLimits

0xc290,	// (0x00016f03) fep_vkb_keypad_pane_g4

0xc2ff,	// (0x00016f72) fep_vkb_bottom_pane_g2_ParamLimits

0xc2ff,	// (0x00016f72) fep_vkb_bottom_pane_g2

0x0001,

0xfb35,	// (0x0001a7a8) fep_vkb_bottom_pane_g_ParamLimits

0xfb35,	// (0x0001a7a8) fep_vkb_bottom_pane_g

0xbf71,	// (0x00016be4) cell_vkb_side_pane_g2

0x0001,

0xfb3f,	// (0x0001a7b2) cell_vkb_side_pane_g

0xc38a,	// (0x00016ffd) cell_vkb_side_pane_t1

0xc398,	// (0x0001700b) cell_vkb_side_pane_t1_copy1

0xbf71,	// (0x00016be4) bg_fep_vkb_candidate_pane_g2

0xc4c4,	// (0x00017137) cell_vkb_candidate_pane_ParamLimits

0xc023,	// (0x00016c96) aid_size_cell_vkb_ParamLimits

0xc023,	// (0x00016c96) aid_size_cell_vkb

0xc4c4,	// (0x00017137) cell_vkb_candidate_pane

0x5ff9,	// (0x00010c6c) bg_popup_fep_shadow_pane_g1

0xc0b1,	// (0x00016d24) fep_vkb_bottom_pane_ParamLimits

0xc0b1,	// (0x00016d24) fep_vkb_bottom_pane

0xc0e7,	// (0x00016d5a) fep_vkb_candidate_pane_ParamLimits

0xc0e7,	// (0x00016d5a) fep_vkb_candidate_pane

0xc103,	// (0x00016d76) fep_vkb_keypad_pane_ParamLimits

0xc103,	// (0x00016d76) fep_vkb_keypad_pane

0xc149,	// (0x00016dbc) fep_vkb_side_pane_ParamLimits

0xc149,	// (0x00016dbc) fep_vkb_side_pane

0xc185,	// (0x00016df8) fep_vkb_top_pane_ParamLimits

0xc185,	// (0x00016df8) fep_vkb_top_pane

0xc1c1,	// (0x00016e34) fep_vkb_top_pane_g1_ParamLimits

0xc1c1,	// (0x00016e34) fep_vkb_top_pane_g1

0xc1d0,	// (0x00016e43) fep_vkb_top_pane_g2_ParamLimits

0xc1d0,	// (0x00016e43) fep_vkb_top_pane_g2

0xc1df,	// (0x00016e52) fep_vkb_top_pane_g3_ParamLimits

0xc1df,	// (0x00016e52) fep_vkb_top_pane_g3

0x0003,

0xfb25,	// (0x0001a798) fep_vkb_top_pane_g_ParamLimits

0xfb25,	// (0x0001a798) fep_vkb_top_pane_g

0xc1fd,	// (0x00016e70) fep_vkb_top_text_pane_ParamLimits

0xc1fd,	// (0x00016e70) fep_vkb_top_text_pane

0xc20e,	// (0x00016e81) fep_vkb_side_pane_g1_ParamLimits

0xc20e,	// (0x00016e81) fep_vkb_side_pane_g1

0xc257,	// (0x00016eca) grid_vkb_side_pane_ParamLimits

0xc257,	// (0x00016eca) grid_vkb_side_pane

0x6001,	// (0x00010c74) bg_popup_fep_shadow_pane_g2

0x600a,	// (0x00010c7d) bg_popup_fep_shadow_pane_g3

0x6012,	// (0x00010c85) bg_popup_fep_shadow_pane_g4

0x601b,	// (0x00010c8e) bg_popup_fep_shadow_pane_g5

0x6025,	// (0x00010c98) bg_popup_fep_shadow_pane_g6

0x602d,	// (0x00010ca0) bg_popup_fep_shadow_pane_g7

0x7e16,	// (0x00012a89) bg_popup_fep_shadow_pane_g8

0xc2ae,	// (0x00016f21) grid_vkb_keypad_number_pane_ParamLimits

0xc2ae,	// (0x00016f21) grid_vkb_keypad_number_pane

0xc2be,	// (0x00016f31) grid_vkb_keypad_pane_ParamLimits

0xc2be,	// (0x00016f31) grid_vkb_keypad_pane

0xc2e4,	// (0x00016f57) fep_vkb_bottom_pane_g1_ParamLimits

0xc2e4,	// (0x00016f57) fep_vkb_bottom_pane_g1

0xc30d,	// (0x00016f80) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc30d,	// (0x00016f80) grid_vkb_keypad_bottom_left_pane

0xc322,	// (0x00016f95) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc322,	// (0x00016f95) grid_vkb_keypad_bottom_right_pane

0xc337,	// (0x00016faa) fep_vkb_top_text_pane_g1

0xc352,	// (0x00016fc5) fep_vkb_top_text_pane_t1

0xc367,	// (0x00016fda) cell_vkb_side_pane_ParamLimits

0xc367,	// (0x00016fda) cell_vkb_side_pane

0xbf71,	// (0x00016be4) cell_vkb_side_pane_g1

0xc3a6,	// (0x00017019) cell_vkb_keypad_pane_ParamLimits

0xc3a6,	// (0x00017019) cell_vkb_keypad_pane

0xc41b,	// (0x0001708e) cell_vkb_keypad_pane_g1

0x0008,

0xfb52,	// (0x0001a7c5) bg_popup_fep_shadow_pane_g

0x603f,	// (0x00010cb2) cell_hwr_side_pane_g1

0x603f,	// (0x00010cb2) cell_hwr_side_pane_g2

0xc425,	// (0x00017098) cell_vkb_keypad_pane_t1

0xc433,	// (0x000170a6) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc433,	// (0x000170a6) cell_vkb_keypad_bottom_left_pane

0xc450,	// (0x000170c3) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc450,	// (0x000170c3) cell_vkb_keypad_bottom_right_pane

0xbf71,	// (0x00016be4) cell_vkb_keypad_bottom_left_pane_g1

0xbf71,	// (0x00016be4) cell_vkb_keypad_bottom_right_pane_g1

0xc489,	// (0x000170fc) cell_vkb_keypad_number_pane_ParamLimits

0xc489,	// (0x000170fc) cell_vkb_keypad_number_pane

0xc4a8,	// (0x0001711b) cell_vkb_keypad_number_pane_g1

0xc4b2,	// (0x00017125) cell_vkb_keypad_number_pane_g2

0xc4bb,	// (0x0001712e) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb44,	// (0x0001a7b7) cell_vkb_keypad_number_pane_g

0xc425,	// (0x00017098) cell_vkb_keypad_number_pane_t1

0xc4df,	// (0x00017152) fep_vkb_candidate_pane_g1

0x0001,

0xfb65,	// (0x0001a7d8) cell_hwr_side_pane_g

0xc4f8,	// (0x0001716b) cell_hwr_side_pane_t1

0x6049,	// (0x00010cbc) cell_hwr_side_pane_t1_copy1

0x6057,	// (0x00010cca) cell_hwr_candidate_pane_g1

0x6086,	// (0x00010cf9) cell_hwr_candidate_pane_t1

0xbf71,	// (0x00016be4) cell_vkb_candidate_pane_g2

0xc53c,	// (0x000171af) cell_vkb_candidate_pane_t1

0x5df2,	// (0x00010a65) bg_popup_fep_shadow_pane_ParamLimits

0x5df2,	// (0x00010a65) bg_popup_fep_shadow_pane

0x5ea7,	// (0x00010b1a) bg_fep_hwr_top_pane_g4

0xbff1,	// (0x00016c64) bg_hwr_side_pane_g1_ParamLimits

0xbff1,	// (0x00016c64) bg_hwr_side_pane_g1

0x5f18,	// (0x00010b8b) cell_hwr_side_pane_ParamLimits

0x5f18,	// (0x00010b8b) cell_hwr_side_pane

0x5f53,	// (0x00010bc6) fep_hwr_write_pane_g1_ParamLimits

0x5f53,	// (0x00010bc6) fep_hwr_write_pane_g1

0x5f60,	// (0x00010bd3) fep_hwr_write_pane_g2_ParamLimits

0x5f60,	// (0x00010bd3) fep_hwr_write_pane_g2

0x5f6d,	// (0x00010be0) fep_hwr_write_pane_g3_ParamLimits

0x5f6d,	// (0x00010be0) fep_hwr_write_pane_g3

0x5f7b,	// (0x00010bee) fep_hwr_write_pane_g4_ParamLimits

0x5f7b,	// (0x00010bee) fep_hwr_write_pane_g4

0x0005,

0xfb11,	// (0x0001a784) fep_hwr_write_pane_g_ParamLimits

0xfb11,	// (0x0001a784) fep_hwr_write_pane_g

0x5ea7,	// (0x00010b1a) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x5ea7,	// (0x00010b1a) bg_fep_hwr_candidate_pane_g2

0x5f90,	// (0x00010c03) cell_hwr_candidate_pane_ParamLimits

0x5f90,	// (0x00010c03) cell_hwr_candidate_pane

0x5fd2,	// (0x00010c45) fep_hwr_candidate_pane_g1_ParamLimits

0xc051,	// (0x00016cc4) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc051,	// (0x00016cc4) bg_popup_fep_shadow_pane_cp2

0xc1ef,	// (0x00016e62) fep_vkb_top_pane_g4_ParamLimits

0xc1ef,	// (0x00016e62) fep_vkb_top_pane_g4

0xc235,	// (0x00016ea8) fep_vkb_side_pane_g2_ParamLimits

0xc235,	// (0x00016ea8) fep_vkb_side_pane_g2

0x7afd,	// (0x00012770) list_setting_pane_t4_ParamLimits

0x7afd,	// (0x00012770) list_setting_pane_t4

0x7b77,	// (0x000127ea) list_setting_number_pane_t5_ParamLimits

0x7b77,	// (0x000127ea) list_setting_number_pane_t5

0x8519,	// (0x0001318c) list_double_heading_pane_cp2_ParamLimits

0x8519,	// (0x0001318c) list_double_heading_pane_cp2

0x7924,	// (0x00012597) list_double_heading_pane_g1_cp2_ParamLimits

0x7924,	// (0x00012597) list_double_heading_pane_g1_cp2

0x7d01,	// (0x00012974) list_double_heading_pane_g2_cp2_ParamLimits

0x7d01,	// (0x00012974) list_double_heading_pane_g2_cp2

0xc54a,	// (0x000171bd) list_double_heading_pane_t1_cp2_ParamLimits

0xc54a,	// (0x000171bd) list_double_heading_pane_t1_cp2

0xc560,	// (0x000171d3) list_double_heading_pane_t2_cp2_ParamLimits

0xc560,	// (0x000171d3) list_double_heading_pane_t2_cp2

0x6dcb,	// (0x00011a3e) aid_value_unit2

0x4b8d,	// (0x0000f800) popup_preview_fixed_window

0x717a,	// (0x00011ded) bg_popup_preview_window_pane_cp02

0xc572,	// (0x000171e5) list_preview_fixed_pane

0xc5b8,	// (0x0001722b) list_empty_pane_fp_ParamLimits

0xc5b8,	// (0x0001722b) list_empty_pane_fp

0xc5b8,	// (0x0001722b) list_single_cale_day_pane_fp_ParamLimits

0xc5b8,	// (0x0001722b) list_single_cale_day_pane_fp

0xc5b8,	// (0x0001722b) list_single_graphic_heading_pane_fp_ParamLimits

0xc5b8,	// (0x0001722b) list_single_graphic_heading_pane_fp

0xc5b8,	// (0x0001722b) list_single_graphic_pane_fp_ParamLimits

0xc5b8,	// (0x0001722b) list_single_graphic_pane_fp

0xc5b8,	// (0x0001722b) list_single_heading_pane_fp_ParamLimits

0xc5b8,	// (0x0001722b) list_single_heading_pane_fp

0xc5b8,	// (0x0001722b) list_single_pane_fp_ParamLimits

0xc5b8,	// (0x0001722b) list_single_pane_fp

0xc5cd,	// (0x00017240) list_single_pane_fp_g1_ParamLimits

0xc5cd,	// (0x00017240) list_single_pane_fp_g1

0x7924,	// (0x00012597) list_single_pane_fp_g2_ParamLimits

0x7924,	// (0x00012597) list_single_pane_fp_g2

0x7d01,	// (0x00012974) list_single_pane_fp_g3_ParamLimits

0x7d01,	// (0x00012974) list_single_pane_fp_g3

0xc5d9,	// (0x0001724c) list_single_pane_fp_g4_ParamLimits

0xc5d9,	// (0x0001724c) list_single_pane_fp_g4

0x0003,

0xfb78,	// (0x0001a7eb) list_single_pane_fp_g_ParamLimits

0xfb78,	// (0x0001a7eb) list_single_pane_fp_g

0xc5e5,	// (0x00017258) list_single_pane_fp_t1_ParamLimits

0xc5e5,	// (0x00017258) list_single_pane_fp_t1

0xc5fc,	// (0x0001726f) list_single_graphic_pane_fp_g1_ParamLimits

0xc5fc,	// (0x0001726f) list_single_graphic_pane_fp_g1

0xc5cd,	// (0x00017240) list_single_graphic_pane_fp_g2_ParamLimits

0xc5cd,	// (0x00017240) list_single_graphic_pane_fp_g2

0x7924,	// (0x00012597) list_single_graphic_pane_fp_g3_ParamLimits

0x7924,	// (0x00012597) list_single_graphic_pane_fp_g3

0x7d01,	// (0x00012974) list_single_graphic_pane_fp_g4_ParamLimits

0x7d01,	// (0x00012974) list_single_graphic_pane_fp_g4

0xc5d9,	// (0x0001724c) list_single_graphic_pane_fp_g5_ParamLimits

0xc5d9,	// (0x0001724c) list_single_graphic_pane_fp_g5

0x0004,

0xfb81,	// (0x0001a7f4) list_single_graphic_pane_fp_g_ParamLimits

0xfb81,	// (0x0001a7f4) list_single_graphic_pane_fp_g

0xc608,	// (0x0001727b) list_single_graphic_pane_fp_t1_ParamLimits

0xc608,	// (0x0001727b) list_single_graphic_pane_fp_t1

0xc5fc,	// (0x0001726f) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xc5fc,	// (0x0001726f) list_single_graphic_heading_pane_fp_g1

0xc5cd,	// (0x00017240) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc5cd,	// (0x00017240) list_single_graphic_heading_pane_fp_g2

0x7924,	// (0x00012597) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x7924,	// (0x00012597) list_single_graphic_heading_pane_fp_g3

0x7d01,	// (0x00012974) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x7d01,	// (0x00012974) list_single_graphic_heading_pane_fp_g4

0xc5d9,	// (0x0001724c) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc5d9,	// (0x0001724c) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb81,	// (0x0001a7f4) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb81,	// (0x0001a7f4) list_single_graphic_heading_pane_fp_g

0xc61e,	// (0x00017291) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xc61e,	// (0x00017291) list_single_graphic_heading_pane_fp_t1

0xc634,	// (0x000172a7) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xc634,	// (0x000172a7) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb8c,	// (0x0001a7ff) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb8c,	// (0x0001a7ff) list_single_graphic_heading_pane_fp_t

0xc646,	// (0x000172b9) list_single_cale_day_pane_fp_g1_ParamLimits

0xc646,	// (0x000172b9) list_single_cale_day_pane_fp_g1

0xc67e,	// (0x000172f1) list_single_cale_day_pane_fp_g2_ParamLimits

0xc67e,	// (0x000172f1) list_single_cale_day_pane_fp_g2

0xc68a,	// (0x000172fd) list_single_cale_day_pane_fp_g3_ParamLimits

0xc68a,	// (0x000172fd) list_single_cale_day_pane_fp_g3

0xc6b2,	// (0x00017325) list_single_cale_day_pane_fp_g4_ParamLimits

0xc6b2,	// (0x00017325) list_single_cale_day_pane_fp_g4

0xc6d6,	// (0x00017349) list_single_cale_day_pane_fp_g5_ParamLimits

0xc6d6,	// (0x00017349) list_single_cale_day_pane_fp_g5

0x0004,

0xfb91,	// (0x0001a804) list_single_cale_day_pane_fp_g_ParamLimits

0xfb91,	// (0x0001a804) list_single_cale_day_pane_fp_g

0xc6fa,	// (0x0001736d) list_single_cale_day_pane_fp_t1_ParamLimits

0xc6fa,	// (0x0001736d) list_single_cale_day_pane_fp_t1

0xc720,	// (0x00017393) list_single_cale_day_pane_fp_t2_ParamLimits

0xc720,	// (0x00017393) list_single_cale_day_pane_fp_t2

0xc739,	// (0x000173ac) list_single_cale_day_pane_fp_t3_ParamLimits

0xc739,	// (0x000173ac) list_single_cale_day_pane_fp_t3

0x0002,

0xfb9c,	// (0x0001a80f) list_single_cale_day_pane_fp_t_ParamLimits

0xfb9c,	// (0x0001a80f) list_single_cale_day_pane_fp_t

0xc5cd,	// (0x00017240) list_empty_pane_fp_g1_ParamLimits

0xc5cd,	// (0x00017240) list_empty_pane_fp_g1

0xc752,	// (0x000173c5) list_empty_pane_fp_t1

0xc760,	// (0x000173d3) list_empty_pane_fp_t2

0x0001,

0xfba3,	// (0x0001a816) list_empty_pane_fp_t

0xc5cd,	// (0x00017240) list_single_heading_pane_fp_g1_ParamLimits

0xc5cd,	// (0x00017240) list_single_heading_pane_fp_g1

0x7924,	// (0x00012597) list_single_heading_pane_fp_g2_ParamLimits

0x7924,	// (0x00012597) list_single_heading_pane_fp_g2

0x7d01,	// (0x00012974) list_single_heading_pane_fp_g3_ParamLimits

0x7d01,	// (0x00012974) list_single_heading_pane_fp_g3

0x0002,

0xfba8,	// (0x0001a81b) list_single_heading_pane_fp_g_ParamLimits

0xfba8,	// (0x0001a81b) list_single_heading_pane_fp_g

0xc76e,	// (0x000173e1) list_single_heading_pane_fp_t1_ParamLimits

0xc76e,	// (0x000173e1) list_single_heading_pane_fp_t1

0xc780,	// (0x000173f3) list_single_heading_pane_fp_t2_ParamLimits

0xc780,	// (0x000173f3) list_single_heading_pane_fp_t2

0x0001,

0xfbaf,	// (0x0001a822) list_single_heading_pane_fp_t_ParamLimits

0xfbaf,	// (0x0001a822) list_single_heading_pane_fp_t

0x8051,	// (0x00012cc4) aid_size_cell_fast

0x70ea,	// (0x00011d5d) soft_indicator_pane_cp1_t1

0x808e,	// (0x00012d01) cell_app_pane_cp2_ParamLimits

0x808e,	// (0x00012d01) cell_app_pane_cp2

0x5e14,	// (0x00010a87) fep_hwr_candidate_drop_down_list_pane

0x5fec,	// (0x00010c5f) fep_hwr_candidate_pane_g3_ParamLimits

0x5fec,	// (0x00010c5f) fep_hwr_candidate_pane_g3

0x4043,	// (0x0000ecb6) fep_hwr_candidate_pane_g4_ParamLimits

0x4043,	// (0x0000ecb6) fep_hwr_candidate_pane_g4

0x0002,

0xfb1e,	// (0x0001a791) fep_hwr_candidate_pane_g_ParamLimits

0xfb1e,	// (0x0001a791) fep_hwr_candidate_pane_g

0xc0d6,	// (0x00016d49) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc0d6,	// (0x00016d49) fep_vkb_candidate_drop_down_list_pane

0xc4e7,	// (0x0001715a) fep_vkb_candidate_pane_g3

0xc4ef,	// (0x00017162) fep_vkb_candidate_pane_g4

0x0002,

0xfb4b,	// (0x0001a7be) fep_vkb_candidate_pane_g

0x6057,	// (0x00010cca) cell_hwr_candidate_pane_g1_ParamLimits

0x6065,	// (0x00010cd8) cell_hwr_candidate_pane_g3_ParamLimits

0x6065,	// (0x00010cd8) cell_hwr_candidate_pane_g3

0xe11f,	// (0x00018d92) cell_hwr_candidate_pane_g4_ParamLimits

0xe11f,	// (0x00018d92) cell_hwr_candidate_pane_g4

0x0002,

0xfb6a,	// (0x0001a7dd) cell_hwr_candidate_pane_g_ParamLimits

0xfb6a,	// (0x0001a7dd) cell_hwr_candidate_pane_g

0xc506,	// (0x00017179) cell_vkb_candidate_pane_g3_ParamLimits

0xc506,	// (0x00017179) cell_vkb_candidate_pane_g3

0xc521,	// (0x00017194) cell_vkb_candidate_pane_g4_ParamLimits

0xc521,	// (0x00017194) cell_vkb_candidate_pane_g4

0xc796,	// (0x00017409) cell_app_pane_cp2_g1_ParamLimits

0xc796,	// (0x00017409) cell_app_pane_cp2_g1

0xc7b4,	// (0x00017427) cell_app_pane_cp2_g2_ParamLimits

0xc7b4,	// (0x00017427) cell_app_pane_cp2_g2

0x0001,

0xfbb4,	// (0x0001a827) cell_app_pane_cp2_g_ParamLimits

0xfbb4,	// (0x0001a827) cell_app_pane_cp2_g

0xc7c0,	// (0x00017433) cell_app_pane_cp2_t1_ParamLimits

0xc7c0,	// (0x00017433) cell_app_pane_cp2_t1

0x7cdb,	// (0x0001294e) grid_highlight_pane_cp1_ParamLimits

0x7cdb,	// (0x0001294e) grid_highlight_pane_cp1

0x60a4,	// (0x00010d17) cell_hwr_candidate_pane_cp1_ParamLimits

0x60a4,	// (0x00010d17) cell_hwr_candidate_pane_cp1

0x6057,	// (0x00010cca) fep_hwr_candidate_drop_down_list_pane_g1

0x60c3,	// (0x00010d36) fep_hwr_candidate_drop_down_list_pane_g2

0x60d0,	// (0x00010d43) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbb9,	// (0x0001a82c) fep_hwr_candidate_drop_down_list_pane_g

0x60dd,	// (0x00010d50) fep_hwr_candidate_drop_down_list_scroll_pane

0x60e6,	// (0x00010d59) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x60e6,	// (0x00010d59) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x60f3,	// (0x00010d66) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x60f3,	// (0x00010d66) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x6100,	// (0x00010d73) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x6100,	// (0x00010d73) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x610d,	// (0x00010d80) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x610d,	// (0x00010d80) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x6128,	// (0x00010d9b) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6128,	// (0x00010d9b) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x6143,	// (0x00010db6) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x6143,	// (0x00010db6) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x615e,	// (0x00010dd1) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x615e,	// (0x00010dd1) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x6179,	// (0x00010dec) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x6179,	// (0x00010dec) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc0,	// (0x0001a833) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc0,	// (0x0001a833) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc7d2,	// (0x00017445) cell_vkb_candidate_pane_cp1_ParamLimits

0xc7d2,	// (0x00017445) cell_vkb_candidate_pane_cp1

0xc1ef,	// (0x00016e62) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc1ef,	// (0x00016e62) fep_vkb_candidate_drop_down_list_pane_g1

0xc7f2,	// (0x00017465) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc7f2,	// (0x00017465) fep_vkb_candidate_drop_down_list_pane_g2

0xc7ff,	// (0x00017472) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc7ff,	// (0x00017472) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbd1,	// (0x0001a844) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbd1,	// (0x0001a844) fep_vkb_candidate_drop_down_list_pane_g

0xc80c,	// (0x0001747f) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc80c,	// (0x0001747f) fep_vkb_candidate_drop_down_list_scroll_pane

0xc819,	// (0x0001748c) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc819,	// (0x0001748c) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc826,	// (0x00017499) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc826,	// (0x00017499) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc832,	// (0x000174a5) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc832,	// (0x000174a5) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc83e,	// (0x000174b1) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc83e,	// (0x000174b1) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc85f,	// (0x000174d2) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc85f,	// (0x000174d2) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc880,	// (0x000174f3) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc880,	// (0x000174f3) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc8a1,	// (0x00017514) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc8a1,	// (0x00017514) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc8c2,	// (0x00017535) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc8c2,	// (0x00017535) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd8,	// (0x0001a84b) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd8,	// (0x0001a84b) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x6e01,	// (0x00011a74) title_pane_g1_ParamLimits

0x6e0e,	// (0x00011a81) title_pane_g2_ParamLimits

0xf54e,	// (0x0001a1c1) title_pane_g_ParamLimits

0x84c2,	// (0x00013135) aid_call2_pane

0x84ca,	// (0x0001313d) aid_call_pane

0x84d2,	// (0x00013145) popup_clock_analogue_window_g1

0x84d2,	// (0x00013145) popup_clock_analogue_window_g2

0x4efe,	// (0x0000fb71) popup_clock_analogue_window_g3

0x4f07,	// (0x0000fb7a) popup_clock_analogue_window_g4

0x6ded,	// (0x00011a60) popup_clock_analogue_window_g5

0x0004,

0xf6f3,	// (0x0001a366) popup_clock_analogue_window_g

0x4f0f,	// (0x0000fb82) popup_clock_analogue_window_t1

0x4f1d,	// (0x0000fb90) clock_digital_number_pane_ParamLimits

0x4f1d,	// (0x0000fb90) clock_digital_number_pane

0x4f29,	// (0x0000fb9c) clock_digital_number_pane_cp02_ParamLimits

0x4f29,	// (0x0000fb9c) clock_digital_number_pane_cp02

0x4f35,	// (0x0000fba8) clock_digital_number_pane_cp03_ParamLimits

0x4f35,	// (0x0000fba8) clock_digital_number_pane_cp03

0x4f41,	// (0x0000fbb4) clock_digital_number_pane_cp04_ParamLimits

0x4f41,	// (0x0000fbb4) clock_digital_number_pane_cp04

0x4f4d,	// (0x0000fbc0) clock_digital_separator_pane_ParamLimits

0x4f4d,	// (0x0000fbc0) clock_digital_separator_pane

0x4f59,	// (0x0000fbcc) popup_clock_digital_window_t1_ParamLimits

0x4f59,	// (0x0000fbcc) popup_clock_digital_window_t1

0x6ded,	// (0x00011a60) clock_digital_number_pane_g1

0x6ded,	// (0x00011a60) clock_digital_number_pane_g2

0x0001,

0xf6fe,	// (0x0001a371) clock_digital_number_pane_g

0x6ded,	// (0x00011a60) clock_digital_separator_pane_g1

0x6ded,	// (0x00011a60) clock_digital_separator_pane_g2

0x0001,

0xf6fe,	// (0x0001a371) clock_digital_separator_pane_g

0x8ef0,	// (0x00013b63) aid_fill_nsta_ParamLimits

0x9036,	// (0x00013ca9) indicator_nsta_pane_ParamLimits

0x91af,	// (0x00013e22) popup_clock_analogue_window

0x91af,	// (0x00013e22) popup_clock_digital_window

0x6ed7,	// (0x00011b4a) grid_indicator_nsta_pane_ParamLimits

0xb94a,	// (0x000165bd) clock_nsta_pane_t2

0x0001,

0xfa9e,	// (0x0001a711) clock_nsta_pane_t

0x4ec2,	// (0x0000fb35) aid_size_max_handle

0x4ecc,	// (0x0000fb3f) aid_size_min_handle

0x8b74,	// (0x000137e7) editor_scroll_pane

0xc8dd,	// (0x00017550) ex_editor_pane

0x7fbf,	// (0x00012c32) scroll_pane_cp13

0x76ff,	// (0x00012372) scroll_pane_cp14

0x8501,	// (0x00013174) scroll_pane_cp36

0x852d,	// (0x000131a0) list_single_graphic_hl_pane_cp2_ParamLimits

0x852d,	// (0x000131a0) list_single_graphic_hl_pane_cp2

0xab86,	// (0x000157f9) list_single_graphic_hl_pane_ParamLimits

0xab86,	// (0x000157f9) list_single_graphic_hl_pane

0xc8e5,	// (0x00017558) aid_size_min_hl_cp1

0xc8ee,	// (0x00017561) list_highlight_pane_cp34_ParamLimits

0xc8ee,	// (0x00017561) list_highlight_pane_cp34

0xc8ff,	// (0x00017572) list_single_graphic_hl_pane_g1_ParamLimits

0xc8ff,	// (0x00017572) list_single_graphic_hl_pane_g1

0xc90c,	// (0x0001757f) list_single_graphic_hl_pane_g2_ParamLimits

0xc90c,	// (0x0001757f) list_single_graphic_hl_pane_g2

0xc90c,	// (0x0001757f) list_single_graphic_hl_pane_g3_ParamLimits

0xc90c,	// (0x0001757f) list_single_graphic_hl_pane_g3

0xb0e6,	// (0x00015d59) list_single_graphic_hl_pane_g4_ParamLimits

0xb0e6,	// (0x00015d59) list_single_graphic_hl_pane_g4

0xc918,	// (0x0001758b) list_single_graphic_hl_pane_g5_ParamLimits

0xc918,	// (0x0001758b) list_single_graphic_hl_pane_g5

0x0004,

0xfbe9,	// (0x0001a85c) list_single_graphic_hl_pane_g_ParamLimits

0xfbe9,	// (0x0001a85c) list_single_graphic_hl_pane_g

0xc92c,	// (0x0001759f) list_single_graphic_hl_pane_t1_ParamLimits

0xc92c,	// (0x0001759f) list_single_graphic_hl_pane_t1

0xc942,	// (0x000175b5) aid_size_min_hl_cp2

0xc94b,	// (0x000175be) list_highlight_pane_cp34_cp2_ParamLimits

0xc94b,	// (0x000175be) list_highlight_pane_cp34_cp2

0xc8ff,	// (0x00017572) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc8ff,	// (0x00017572) list_single_graphic_hl_pane_g1_cp2

0xc958,	// (0x000175cb) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc958,	// (0x000175cb) list_single_graphic_hl_pane_g2_cp2

0xc964,	// (0x000175d7) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc964,	// (0x000175d7) list_single_graphic_hl_pane_g3_cp2

0xb0e6,	// (0x00015d59) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xb0e6,	// (0x00015d59) list_single_graphic_hl_pane_g4_cp2

0xc918,	// (0x0001758b) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc918,	// (0x0001758b) list_single_graphic_hl_pane_g5_cp2

0x520d,	// (0x0000fe80) control_pane_g4_ParamLimits

0x520d,	// (0x0000fe80) control_pane_g4

0x8ec6,	// (0x00013b39) bg_popup_sub_pane_cp10_ParamLimits

0xbf7b,	// (0x00016bee) list_choice_list_pane_ParamLimits

0xbf8a,	// (0x00016bfd) scroll_pane_cp23

0x717a,	// (0x00011ded) bg_popup_preview_window_pane_cp02_ParamLimits

0xc572,	// (0x000171e5) list_preview_fixed_pane_ParamLimits

0xc588,	// (0x000171fb) list_preview_fixed_pane_cp_ParamLimits

0xc588,	// (0x000171fb) list_preview_fixed_pane_cp

0xc594,	// (0x00017207) popup_preview_fixed_window_g1_ParamLimits

0xc594,	// (0x00017207) popup_preview_fixed_window_g1

0xc5a0,	// (0x00017213) popup_preview_fixed_window_g2_ParamLimits

0xc5a0,	// (0x00017213) popup_preview_fixed_window_g2

0x0002,

0xfb71,	// (0x0001a7e4) popup_preview_fixed_window_g_ParamLimits

0xfb71,	// (0x0001a7e4) popup_preview_fixed_window_g

0x4e36,	// (0x0000faa9) aid_navi_side_left_pane_ParamLimits

0x4e4b,	// (0x0000fabe) aid_navi_side_right_pane_ParamLimits

0x4e63,	// (0x0000fad6) navi_icon_pane_stacon_ParamLimits

0x4e77,	// (0x0000faea) navi_navi_pane_stacon_ParamLimits

0x4e63,	// (0x0000fad6) navi_text_pane_stacon_ParamLimits

0x4a4e,	// (0x0000f6c1) main_text_info_pane

0xc988,	// (0x000175fb) listscroll_text_info_pane

0xc990,	// (0x00017603) list_text_info_pane_ParamLimits

0xc990,	// (0x00017603) list_text_info_pane

0xc99f,	// (0x00017612) scroll_pane_cp24_ParamLimits

0xc99f,	// (0x00017612) scroll_pane_cp24

0xc9bd,	// (0x00017630) list_text_info_pane_t1_ParamLimits

0xc9bd,	// (0x00017630) list_text_info_pane_t1

0x538b,	// (0x0000fffe) popup_fast_swap2_window_ParamLimits

0x538b,	// (0x0000fffe) popup_fast_swap2_window

0xc9ee,	// (0x00017661) aid_size_cell_fast2

0x6de3,	// (0x00011a56) bg_popup_window_pane_cp17

0x994b,	// (0x000145be) heading_pane_cp2

0x73c9,	// (0x0001203c) listscroll_fast2_pane

0xc9f8,	// (0x0001766b) grid_fast2_pane

0xca02,	// (0x00017675) listscroll_fast2_pane_g1

0xca0a,	// (0x0001767d) listscroll_fast2_pane_g2

0x0001,

0xfbf4,	// (0x0001a867) listscroll_fast2_pane_g

0x7fbf,	// (0x00012c32) scroll_pane_cp26

0xca14,	// (0x00017687) cell_fast2_pane_ParamLimits

0xca14,	// (0x00017687) cell_fast2_pane

0xca29,	// (0x0001769c) cell_fast2_pane_g1

0xca32,	// (0x000176a5) cell_fast2_pane_g2

0xca3b,	// (0x000176ae) cell_fast2_pane_g3

0x0002,

0xfbf9,	// (0x0001a86c) cell_fast2_pane_g

0x74bc,	// (0x0001212f) grid_highlight_pane_cp9

0x5351,	// (0x0000ffc4) main_eswt_pane_ParamLimits

0x5351,	// (0x0000ffc4) main_eswt_pane

0xc9b4,	// (0x00017627) list_single_text_info_pane

0xca43,	// (0x000176b6) eswt_ctrl_button_pane

0xca43,	// (0x000176b6) eswt_ctrl_canvas_pane

0xca4b,	// (0x000176be) eswt_ctrl_combo_pane

0xca43,	// (0x000176b6) eswt_ctrl_default_pane

0xca43,	// (0x000176b6) eswt_ctrl_label_pane

0xca53,	// (0x000176c6) eswt_ctrl_wait_pane

0xca5b,	// (0x000176ce) eswt_shell_pane

0x6de3,	// (0x00011a56) listscroll_eswt_app_pane

0xca7b,	// (0x000176ee) popup_eswt_tasktip_window_ParamLimits

0xca7b,	// (0x000176ee) popup_eswt_tasktip_window

0x9528,	// (0x0001419b) bg_popup_window_pane_cp18

0xca8c,	// (0x000176ff) eswt_control_pane_g1_ParamLimits

0xca8c,	// (0x000176ff) eswt_control_pane_g1

0xca99,	// (0x0001770c) eswt_control_pane_g2_ParamLimits

0xca99,	// (0x0001770c) eswt_control_pane_g2

0xcaa6,	// (0x00017719) eswt_control_pane_g3_ParamLimits

0xcaa6,	// (0x00017719) eswt_control_pane_g3

0xcab3,	// (0x00017726) eswt_control_pane_g4_ParamLimits

0xcab3,	// (0x00017726) eswt_control_pane_g4

0x0003,

0xfc00,	// (0x0001a873) eswt_control_pane_g_ParamLimits

0xfc00,	// (0x0001a873) eswt_control_pane_g

0x7cdb,	// (0x0001294e) bg_button_pane_ParamLimits

0x7cdb,	// (0x0001294e) bg_button_pane

0x74d1,	// (0x00012144) common_borders_pane_copy2_ParamLimits

0x74d1,	// (0x00012144) common_borders_pane_copy2

0xcac0,	// (0x00017733) control_button_pane_g1_ParamLimits

0xcac0,	// (0x00017733) control_button_pane_g1

0xcacc,	// (0x0001773f) control_button_pane_g2_ParamLimits

0xcacc,	// (0x0001773f) control_button_pane_g2

0xcad8,	// (0x0001774b) control_button_pane_g3_ParamLimits

0xcad8,	// (0x0001774b) control_button_pane_g3

0x0002,

0xfc09,	// (0x0001a87c) control_button_pane_g_ParamLimits

0xfc09,	// (0x0001a87c) control_button_pane_g

0xcaec,	// (0x0001775f) control_button_pane_t1

0xcafa,	// (0x0001776d) control_button_pane_t2

0x0001,

0xfc10,	// (0x0001a883) control_button_pane_t

0x9406,	// (0x00014079) bg_button_pane_g1

0x9416,	// (0x00014089) bg_button_pane_g2

0x940e,	// (0x00014081) bg_button_pane_g3

0x9426,	// (0x00014099) bg_button_pane_g4

0x941e,	// (0x00014091) bg_button_pane_g5

0x942e,	// (0x000140a1) bg_button_pane_g6

0x9436,	// (0x000140a9) bg_button_pane_g7

0x9446,	// (0x000140b9) bg_button_pane_g8

0x943e,	// (0x000140b1) bg_button_pane_g9

0x0008,

0xf861,	// (0x0001a4d4) bg_button_pane_g

0xbf36,	// (0x00016ba9) common_borders_pane_ParamLimits

0xbf36,	// (0x00016ba9) common_borders_pane

0xca8c,	// (0x000176ff) eswt_control_pane_g1_copy1_ParamLimits

0xca8c,	// (0x000176ff) eswt_control_pane_g1_copy1

0xca99,	// (0x0001770c) eswt_control_pane_g2_copy1_ParamLimits

0xca99,	// (0x0001770c) eswt_control_pane_g2_copy1

0xcaa6,	// (0x00017719) eswt_control_pane_g3_copy1_ParamLimits

0xcaa6,	// (0x00017719) eswt_control_pane_g3_copy1

0xcab3,	// (0x00017726) eswt_control_pane_g4_copy1_ParamLimits

0xcab3,	// (0x00017726) eswt_control_pane_g4_copy1

0xbf71,	// (0x00016be4) bg_eswt_ctrl_canvas_pane_g1

0xbf36,	// (0x00016ba9) common_borders_pane_cp2_ParamLimits

0xbf36,	// (0x00016ba9) common_borders_pane_cp2

0xbf36,	// (0x00016ba9) common_borders_pane_cp3_ParamLimits

0xbf36,	// (0x00016ba9) common_borders_pane_cp3

0xcb08,	// (0x0001777b) separator_horizontal_pane

0xcb10,	// (0x00017783) separator_vertical_pane

0xca8c,	// (0x000176ff) eswt_control_pane_g1_copy2_ParamLimits

0xca8c,	// (0x000176ff) eswt_control_pane_g1_copy2

0xca99,	// (0x0001770c) eswt_control_pane_g2_copy2_ParamLimits

0xca99,	// (0x0001770c) eswt_control_pane_g2_copy2

0xcaa6,	// (0x00017719) eswt_control_pane_g3_copy2_ParamLimits

0xcaa6,	// (0x00017719) eswt_control_pane_g3_copy2

0xcab3,	// (0x00017726) eswt_control_pane_g4_copy2_ParamLimits

0xcab3,	// (0x00017726) eswt_control_pane_g4_copy2

0x6de3,	// (0x00011a56) common_borders_pane_cp4

0xcb19,	// (0x0001778c) separator_horizontal_pane_g1

0xcb22,	// (0x00017795) separator_horizontal_pane_g2

0xcb2b,	// (0x0001779e) separator_horizontal_pane_g3

0x0002,

0xfc15,	// (0x0001a888) separator_horizontal_pane_g

0xca8c,	// (0x000176ff) eswt_control_pane_g1_copy3_ParamLimits

0xca8c,	// (0x000176ff) eswt_control_pane_g1_copy3

0xca99,	// (0x0001770c) eswt_control_pane_g2_copy3_ParamLimits

0xca99,	// (0x0001770c) eswt_control_pane_g2_copy3

0xcaa6,	// (0x00017719) eswt_control_pane_g3_copy3_ParamLimits

0xcaa6,	// (0x00017719) eswt_control_pane_g3_copy3

0xcab3,	// (0x00017726) eswt_control_pane_g4_copy3_ParamLimits

0xcab3,	// (0x00017726) eswt_control_pane_g4_copy3

0x6de3,	// (0x00011a56) common_borders_pane_cp5

0xcb34,	// (0x000177a7) separator_vertical_pane_g1

0xcb3d,	// (0x000177b0) separator_vertical_pane_g2

0xcb46,	// (0x000177b9) separator_vertical_pane_g3

0x0002,

0xfc1c,	// (0x0001a88f) separator_vertical_pane_g

0xca8c,	// (0x000176ff) eswt_control_pane_g1_copy4_ParamLimits

0xca8c,	// (0x000176ff) eswt_control_pane_g1_copy4

0xca99,	// (0x0001770c) eswt_control_pane_g2_copy4_ParamLimits

0xca99,	// (0x0001770c) eswt_control_pane_g2_copy4

0xcaa6,	// (0x00017719) eswt_control_pane_g3_copy4_ParamLimits

0xcaa6,	// (0x00017719) eswt_control_pane_g3_copy4

0xcab3,	// (0x00017726) eswt_control_pane_g4_copy4_ParamLimits

0xcab3,	// (0x00017726) eswt_control_pane_g4_copy4

0xcb4f,	// (0x000177c2) eswt_ctrl_combo_button_pane

0xcb57,	// (0x000177ca) eswt_ctrl_input_pane

0xcb5f,	// (0x000177d2) popup_choice_list_window_cp70

0xcb67,	// (0x000177da) eswt_ctrl_input_pane_t1

0x6de3,	// (0x00011a56) input_focus_pane_cp70

0xbf36,	// (0x00016ba9) bg_button_pane_cp70_ParamLimits

0xbf36,	// (0x00016ba9) bg_button_pane_cp70

0xcb75,	// (0x000177e8) eswt_ctrl_combo_button_pane_g1

0xcb7d,	// (0x000177f0) wait_bar_pane_cp70

0x9528,	// (0x0001419b) bg_popup_window_pane_cp70_ParamLimits

0x9528,	// (0x0001419b) bg_popup_window_pane_cp70

0xcb85,	// (0x000177f8) popup_eswt_tasktip_window_t1

0xcb9b,	// (0x0001780e) wait_bar_pane_cp71_ParamLimits

0xcb9b,	// (0x0001780e) wait_bar_pane_cp71

0xcba7,	// (0x0001781a) grid_eswt_app_pane

0x82db,	// (0x00012f4e) scroll_pane_cp70

0xcbb0,	// (0x00017823) cell_eswt_app_pane_ParamLimits

0xcbb0,	// (0x00017823) cell_eswt_app_pane

0xcbe0,	// (0x00017853) cell_eswt_app_pane_g1_ParamLimits

0xcbe0,	// (0x00017853) cell_eswt_app_pane_g1

0xcc0f,	// (0x00017882) cell_eswt_app_pane_g2_ParamLimits

0xcc0f,	// (0x00017882) cell_eswt_app_pane_g2

0x0001,

0xfc23,	// (0x0001a896) cell_eswt_app_pane_g_ParamLimits

0xfc23,	// (0x0001a896) cell_eswt_app_pane_g

0xcc38,	// (0x000178ab) cell_eswt_app_pane_t1_ParamLimits

0xcc38,	// (0x000178ab) cell_eswt_app_pane_t1

0xcc6a,	// (0x000178dd) grid_highlight_pane_cp70_ParamLimits

0xcc6a,	// (0x000178dd) grid_highlight_pane_cp70

0x8a49,	// (0x000136bc) set_content_pane_g1

0x8e1f,	// (0x00013a92) status_small_volume_pane

0x6194,	// (0x00010e07) status_small_volume_pane_g1

0x619c,	// (0x00010e0f) volume_small2_pane

0x61a5,	// (0x00010e18) volume_small2_pane_g1

0x61ae,	// (0x00010e21) volume_small2_pane_g2

0x61b7,	// (0x00010e2a) volume_small2_pane_g3

0x61c0,	// (0x00010e33) volume_small2_pane_g4

0x61c9,	// (0x00010e3c) volume_small2_pane_g5

0x61d2,	// (0x00010e45) volume_small2_pane_g6

0x61db,	// (0x00010e4e) volume_small2_pane_g7

0x61e4,	// (0x00010e57) volume_small2_pane_g8

0x61ed,	// (0x00010e60) volume_small2_pane_g9

0x61f6,	// (0x00010e69) volume_small2_pane_g10

0x0009,

0xfc28,	// (0x0001a89b) volume_small2_pane_g

0xc337,	// (0x00016faa) fep_vkb_top_text_pane_g1_ParamLimits

0xc352,	// (0x00016fc5) fep_vkb_top_text_pane_t1_ParamLimits

0xc5ac,	// (0x0001721f) popup_preview_fixed_window_g3_ParamLimits

0xc5ac,	// (0x0001721f) popup_preview_fixed_window_g3

0x583a,	// (0x000104ad) popup_toolbar_trans_pane

0xa8e3,	// (0x00015556) aid_height_set_list_ParamLimits

0xa8f4,	// (0x00015567) aid_size_parent_ParamLimits

0x8ec6,	// (0x00013b39) list_highlight_pane_cp2_ParamLimits

0x8a49,	// (0x000136bc) set_content_pane_g1_ParamLimits

0xaba2,	// (0x00015815) list_single_image_pane_ParamLimits

0xaba2,	// (0x00015815) list_single_image_pane

0xcc76,	// (0x000178e9) aid_size_cell_image_ParamLimits

0xcc76,	// (0x000178e9) aid_size_cell_image

0xcc83,	// (0x000178f6) grid_single_image_pane_ParamLimits

0xcc83,	// (0x000178f6) grid_single_image_pane

0x9d71,	// (0x000149e4) list_single_image_pane_g1_ParamLimits

0x9d71,	// (0x000149e4) list_single_image_pane_g1

0xcc8f,	// (0x00017902) list_single_image_pane_g2_ParamLimits

0xcc8f,	// (0x00017902) list_single_image_pane_g2

0x0001,

0xfc3d,	// (0x0001a8b0) list_single_image_pane_g_ParamLimits

0xfc3d,	// (0x0001a8b0) list_single_image_pane_g

0xcca3,	// (0x00017916) list_single_image_pane_t1_ParamLimits

0xcca3,	// (0x00017916) list_single_image_pane_t1

0xccb9,	// (0x0001792c) cell_image_list_pane_ParamLimits

0xccb9,	// (0x0001792c) cell_image_list_pane

0xcccd,	// (0x00017940) cell_image_list_pane_g1

0xccd6,	// (0x00017949) cell_image_list_pane_g2

0x0001,

0xfc42,	// (0x0001a8b5) cell_image_list_pane_g

0xccdf,	// (0x00017952) aid_size_cell_tb_trans_pane

0x7cdb,	// (0x0001294e) bg_tb_trans_pane

0xccf1,	// (0x00017964) grid_tb_trans_pane

0x9406,	// (0x00014079) bg_tb_trans_pane_g1

0x9416,	// (0x00014089) bg_tb_trans_pane_g2

0x940e,	// (0x00014081) bg_tb_trans_pane_g3

0x9426,	// (0x00014099) bg_tb_trans_pane_g4

0x941e,	// (0x00014091) bg_tb_trans_pane_g5

0x9446,	// (0x000140b9) bg_tb_trans_pane_g6

0x943e,	// (0x000140b1) bg_tb_trans_pane_g7

0x942e,	// (0x000140a1) bg_tb_trans_pane_g8

0x9436,	// (0x000140a9) bg_tb_trans_pane_g9

0x0008,

0xfc47,	// (0x0001a8ba) bg_tb_trans_pane_g

0xcd05,	// (0x00017978) cell_toolbar_trans_pane_ParamLimits

0xcd05,	// (0x00017978) cell_toolbar_trans_pane

0xbf71,	// (0x00016be4) cell_toolbar_trans_pane_g1

0xbb06,	// (0x00016779) list_form2_midp_pane_t1

0xbb14,	// (0x00016787) list_form2_midp_pane_t2

0x0001,

0xfae4,	// (0x0001a757) list_form2_midp_pane_t

0xbb22,	// (0x00016795) scroll_pane_cp51_ParamLimits

0xbd2d,	// (0x000169a0) form2_midp_wait_pane_g1

0xbd36,	// (0x000169a9) form2_midp_wait_pane_g2

0xbd3f,	// (0x000169b2) form2_midp_wait_pane_g3

0x0002,

0xfaf9,	// (0x0001a76c) form2_midp_wait_pane_g

0x6ed7,	// (0x00011b4a) list_highlight_pane_cp21_ParamLimits

0xbd8b,	// (0x000169fe) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xbd9a,	// (0x00016a0d) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xab2a,	// (0x0001579d) list_single_2graphic_im_pane_ParamLimits

0xab2a,	// (0x0001579d) list_single_2graphic_im_pane

0xcd2b,	// (0x0001799e) list_single_2graphic_im_pane_g1_ParamLimits

0xcd2b,	// (0x0001799e) list_single_2graphic_im_pane_g1

0xcd3c,	// (0x000179af) list_single_2graphic_im_pane_g2_ParamLimits

0xcd3c,	// (0x000179af) list_single_2graphic_im_pane_g2

0xcd48,	// (0x000179bb) list_single_2graphic_im_pane_g3_ParamLimits

0xcd48,	// (0x000179bb) list_single_2graphic_im_pane_g3

0x0003,

0xfc5a,	// (0x0001a8cd) list_single_2graphic_im_pane_g_ParamLimits

0xfc5a,	// (0x0001a8cd) list_single_2graphic_im_pane_g

0xcd68,	// (0x000179db) list_single_2graphic_im_pane_t1_ParamLimits

0xcd68,	// (0x000179db) list_single_2graphic_im_pane_t1

0xc5b8,	// (0x0001722b) list_single_graphic_2heading_pane_fp_ParamLimits

0xc5b8,	// (0x0001722b) list_single_graphic_2heading_pane_fp

0xc5fc,	// (0x0001726f) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xc5fc,	// (0x0001726f) list_single_graphic_2heading_pane_fp_g1

0xc5cd,	// (0x00017240) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc5cd,	// (0x00017240) list_single_graphic_2heading_pane_fp_g2

0x7924,	// (0x00012597) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x7924,	// (0x00012597) list_single_graphic_2heading_pane_fp_g3

0x7d01,	// (0x00012974) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x7d01,	// (0x00012974) list_single_graphic_2heading_pane_fp_g4

0xc5d9,	// (0x0001724c) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc5d9,	// (0x0001724c) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb81,	// (0x0001a7f4) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb81,	// (0x0001a7f4) list_single_graphic_2heading_pane_fp_g

0xcd99,	// (0x00017a0c) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xcd99,	// (0x00017a0c) list_single_graphic_2heading_pane_fp_t1

0xc634,	// (0x000172a7) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xc634,	// (0x000172a7) list_single_graphic_2heading_pane_fp_t2

0xcdaf,	// (0x00017a22) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xcdaf,	// (0x00017a22) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc63,	// (0x0001a8d6) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc63,	// (0x0001a8d6) list_single_graphic_2heading_pane_fp_t

0xbffd,	// (0x00016c70) fep_hwr_write_pane_g5_ParamLimits

0xbffd,	// (0x00016c70) fep_hwr_write_pane_g5

0xc009,	// (0x00016c7c) fep_hwr_write_pane_g6_ParamLimits

0xc009,	// (0x00016c7c) fep_hwr_write_pane_g6

0xca5b,	// (0x000176ce) eswt_shell_pane_ParamLimits

0x9528,	// (0x0001419b) bg_popup_window_pane_cp18_ParamLimits

0xa814,	// (0x00015487) heading_pane_cp70

0xcb85,	// (0x000177f8) popup_eswt_tasktip_window_t1_ParamLimits

0x8f45,	// (0x00013bb8) aid_touch_tab_arrow_left

0x8f54,	// (0x00013bc7) aid_touch_tab_arrow_right

0x6e1f,	// (0x00011a92) title_pane_g3_ParamLimits

0x6e1f,	// (0x00011a92) title_pane_g3

0x7bba,	// (0x0001282d) set_value_pane_g1

0x583a,	// (0x000104ad) popup_toolbar_trans_pane_ParamLimits

0xccdf,	// (0x00017952) aid_size_cell_tb_trans_pane_ParamLimits

0x7cdb,	// (0x0001294e) bg_tb_trans_pane_ParamLimits

0xccf1,	// (0x00017964) grid_tb_trans_pane_ParamLimits

0x717a,	// (0x00011ded) cont_note_pane_ParamLimits

0x717a,	// (0x00011ded) cont_note_pane

0x74d1,	// (0x00012144) cont_snote2_single_text_pane_ParamLimits

0x74d1,	// (0x00012144) cont_snote2_single_text_pane

0x74d1,	// (0x00012144) cont_snote2_single_graphic_pane_ParamLimits

0x74d1,	// (0x00012144) cont_snote2_single_graphic_pane

0x9b66,	// (0x000147d9) cont_note_wait_pane_ParamLimits

0x9b66,	// (0x000147d9) cont_note_wait_pane

0x9b66,	// (0x000147d9) cont_note_image_pane_ParamLimits

0x9b66,	// (0x000147d9) cont_note_image_pane

0xcdc5,	// (0x00017a38) popup_note2_window_g1_ParamLimits

0xcdc5,	// (0x00017a38) popup_note2_window_g1

0xcdf6,	// (0x00017a69) popup_note2_window_t1_ParamLimits

0xcdf6,	// (0x00017a69) popup_note2_window_t1

0xce3b,	// (0x00017aae) popup_note2_window_t2_ParamLimits

0xce3b,	// (0x00017aae) popup_note2_window_t2

0xce80,	// (0x00017af3) popup_note2_window_t3_ParamLimits

0xce80,	// (0x00017af3) popup_note2_window_t3

0xcec5,	// (0x00017b38) popup_note2_window_t4_ParamLimits

0xcec5,	// (0x00017b38) popup_note2_window_t4

0x71fe,	// (0x00011e71) popup_note2_window_t5_ParamLimits

0x71fe,	// (0x00011e71) popup_note2_window_t5

0x0004,

0xfc6f,	// (0x0001a8e2) popup_note2_window_t_ParamLimits

0xfc6f,	// (0x0001a8e2) popup_note2_window_t

0xcef4,	// (0x00017b67) popup_note2_image_window_g1_ParamLimits

0xcef4,	// (0x00017b67) popup_note2_image_window_g1

0xcf00,	// (0x00017b73) popup_note2_image_window_g2_ParamLimits

0xcf00,	// (0x00017b73) popup_note2_image_window_g2

0x0001,

0xfc7a,	// (0x0001a8ed) popup_note2_image_window_g_ParamLimits

0xfc7a,	// (0x0001a8ed) popup_note2_image_window_g

0xcf12,	// (0x00017b85) popup_note2_image_window_t1_ParamLimits

0xcf12,	// (0x00017b85) popup_note2_image_window_t1

0xcf2a,	// (0x00017b9d) popup_note2_image_window_t2_ParamLimits

0xcf2a,	// (0x00017b9d) popup_note2_image_window_t2

0xcf42,	// (0x00017bb5) popup_note2_image_window_t3_ParamLimits

0xcf42,	// (0x00017bb5) popup_note2_image_window_t3

0x0002,

0xfc7f,	// (0x0001a8f2) popup_note2_image_window_t_ParamLimits

0xfc7f,	// (0x0001a8f2) popup_note2_image_window_t

0x9b74,	// (0x000147e7) popup_note2_wait_window_g1_ParamLimits

0x9b74,	// (0x000147e7) popup_note2_wait_window_g1

0xcf5e,	// (0x00017bd1) popup_note2_wait_window_g2_ParamLimits

0xcf5e,	// (0x00017bd1) popup_note2_wait_window_g2

0x9b8c,	// (0x000147ff) popup_note2_wait_window_g3_ParamLimits

0x9b8c,	// (0x000147ff) popup_note2_wait_window_g3

0x0002,

0xfc86,	// (0x0001a8f9) popup_note2_wait_window_g_ParamLimits

0xfc86,	// (0x0001a8f9) popup_note2_wait_window_g

0xcf6a,	// (0x00017bdd) popup_note2_wait_window_t1_ParamLimits

0xcf6a,	// (0x00017bdd) popup_note2_wait_window_t1

0xcf88,	// (0x00017bfb) popup_note2_wait_window_t2_ParamLimits

0xcf88,	// (0x00017bfb) popup_note2_wait_window_t2

0xcfa6,	// (0x00017c19) popup_note2_wait_window_t3_ParamLimits

0xcfa6,	// (0x00017c19) popup_note2_wait_window_t3

0xcfb8,	// (0x00017c2b) popup_note2_wait_window_t4_ParamLimits

0xcfb8,	// (0x00017c2b) popup_note2_wait_window_t4

0x0003,

0xfc8d,	// (0x0001a900) popup_note2_wait_window_t_ParamLimits

0xfc8d,	// (0x0001a900) popup_note2_wait_window_t

0xcfca,	// (0x00017c3d) wait_bar2_pane_ParamLimits

0xcfca,	// (0x00017c3d) wait_bar2_pane

0xcfe2,	// (0x00017c55) popup_snote2_single_text_window_g1_ParamLimits

0xcfe2,	// (0x00017c55) popup_snote2_single_text_window_g1

0xd00a,	// (0x00017c7d) popup_snote2_single_text_window_t1_ParamLimits

0xd00a,	// (0x00017c7d) popup_snote2_single_text_window_t1

0xd056,	// (0x00017cc9) popup_snote2_single_text_window_t2_ParamLimits

0xd056,	// (0x00017cc9) popup_snote2_single_text_window_t2

0xd0a2,	// (0x00017d15) popup_snote2_single_text_window_t3_ParamLimits

0xd0a2,	// (0x00017d15) popup_snote2_single_text_window_t3

0xd0e3,	// (0x00017d56) popup_snote2_single_text_window_t4_ParamLimits

0xd0e3,	// (0x00017d56) popup_snote2_single_text_window_t4

0xd119,	// (0x00017d8c) popup_snote2_single_text_window_t5_ParamLimits

0xd119,	// (0x00017d8c) popup_snote2_single_text_window_t5

0x0004,

0xfc96,	// (0x0001a909) popup_snote2_single_text_window_t_ParamLimits

0xfc96,	// (0x0001a909) popup_snote2_single_text_window_t

0xd144,	// (0x00017db7) popup_snote2_single_graphic_window_g1_ParamLimits

0xd144,	// (0x00017db7) popup_snote2_single_graphic_window_g1

0xd16c,	// (0x00017ddf) popup_snote2_single_graphic_window_g2_ParamLimits

0xd16c,	// (0x00017ddf) popup_snote2_single_graphic_window_g2

0x0001,

0xfca1,	// (0x0001a914) popup_snote2_single_graphic_window_g_ParamLimits

0xfca1,	// (0x0001a914) popup_snote2_single_graphic_window_g

0xd194,	// (0x00017e07) popup_snote2_single_graphic_window_t1_ParamLimits

0xd194,	// (0x00017e07) popup_snote2_single_graphic_window_t1

0xd1e0,	// (0x00017e53) popup_snote2_single_graphic_window_t2_ParamLimits

0xd1e0,	// (0x00017e53) popup_snote2_single_graphic_window_t2

0xd0a2,	// (0x00017d15) popup_snote2_single_graphic_window_t3_ParamLimits

0xd0a2,	// (0x00017d15) popup_snote2_single_graphic_window_t3

0xd0e3,	// (0x00017d56) popup_snote2_single_graphic_window_t4_ParamLimits

0xd0e3,	// (0x00017d56) popup_snote2_single_graphic_window_t4

0xd119,	// (0x00017d8c) popup_snote2_single_graphic_window_t5_ParamLimits

0xd119,	// (0x00017d8c) popup_snote2_single_graphic_window_t5

0x0004,

0xfca6,	// (0x0001a919) popup_snote2_single_graphic_window_t_ParamLimits

0xfca6,	// (0x0001a919) popup_snote2_single_graphic_window_t

0xb9e3,	// (0x00016656) clock_nsta_pane_cp2_t1

0xb9e3,	// (0x00016656) clock_nsta_pane_cp2_t2

0x0001,

0xfaba,	// (0x0001a72d) clock_nsta_pane_cp2_t

0x7cf5,	// (0x00012968) form_field_data_wide_pane_g1_ParamLimits

0x7924,	// (0x00012597) form_field_data_wide_pane_g2_ParamLimits

0x7924,	// (0x00012597) form_field_data_wide_pane_g2

0x7d01,	// (0x00012974) form_field_data_wide_pane_g3_ParamLimits

0x7d01,	// (0x00012974) form_field_data_wide_pane_g3

0x0002,

0xf676,	// (0x0001a2e9) form_field_data_wide_pane_g_ParamLimits

0xf676,	// (0x0001a2e9) form_field_data_wide_pane_g

0xb8e6,	// (0x00016559) grid_touch_3_pane_ParamLimits

0xb8e6,	// (0x00016559) grid_touch_3_pane

0xd22c,	// (0x00017e9f) cell_touch_3_pane_ParamLimits

0xd22c,	// (0x00017e9f) cell_touch_3_pane

0xbf71,	// (0x00016be4) cell_touch_3_pane_g1

0xbf71,	// (0x00016be4) cell_touch_3_pane_g2

0x0001,

0xfb3f,	// (0x0001a7b2) cell_touch_3_pane_g

0x7230,	// (0x00011ea3) cont_query_data_pane

0x7238,	// (0x00011eab) cont_query_data_pane_cp1

0xd25a,	// (0x00017ecd) button_value_adjust_pane_cp7

0xd262,	// (0x00017ed5) query_popup_pane_cp3

0x85c2,	// (0x00013235) bg_popup_sub_pane_cp22_ParamLimits

0x4f78,	// (0x0000fbeb) navi_navi_volume_pane_cp2

0x4f93,	// (0x0000fc06) popup_side_volume_key_window_g2

0x4fa2,	// (0x0000fc15) popup_side_volume_key_window_g3

0x0002,

0xf70c,	// (0x0001a37f) popup_side_volume_key_window_g

0x4fbf,	// (0x0000fc32) popup_side_volume_key_window_t2

0x0001,

0xf713,	// (0x0001a386) popup_side_volume_key_window_t

0x8908,	// (0x0001357b) popup_side_volume_key_window_ParamLimits

0x78e4,	// (0x00012557) list_double_graphic_pane_g4_ParamLimits

0x78e4,	// (0x00012557) list_double_graphic_pane_g4

0xab67,	// (0x000157da) list_single_2heading_msg_pane_ParamLimits

0xab67,	// (0x000157da) list_single_2heading_msg_pane

0xd291,	// (0x00017f04) list_single_2heading_msg_pane_g1_ParamLimits

0xd291,	// (0x00017f04) list_single_2heading_msg_pane_g1

0x8aad,	// (0x00013720) list_single_2heading_msg_pane_g2_ParamLimits

0x8aad,	// (0x00013720) list_single_2heading_msg_pane_g2

0xb417,	// (0x0001608a) list_single_2heading_msg_pane_g3_ParamLimits

0xb417,	// (0x0001608a) list_single_2heading_msg_pane_g3

0xd29d,	// (0x00017f10) list_single_2heading_msg_pane_g4_ParamLimits

0xd29d,	// (0x00017f10) list_single_2heading_msg_pane_g4

0x0003,

0xfcb1,	// (0x0001a924) list_single_2heading_msg_pane_g_ParamLimits

0xfcb1,	// (0x0001a924) list_single_2heading_msg_pane_g

0xd2b5,	// (0x00017f28) list_single_2heading_msg_pane_t1_ParamLimits

0xd2b5,	// (0x00017f28) list_single_2heading_msg_pane_t1

0xd2dd,	// (0x00017f50) list_single_2heading_msg_pane_t2_ParamLimits

0xd2dd,	// (0x00017f50) list_single_2heading_msg_pane_t2

0xd30c,	// (0x00017f7f) list_single_2heading_msg_pane_t3_ParamLimits

0xd30c,	// (0x00017f7f) list_single_2heading_msg_pane_t3

0xd345,	// (0x00017fb8) list_single_2heading_msg_pane_t4_ParamLimits

0xd345,	// (0x00017fb8) list_single_2heading_msg_pane_t4

0x0003,

0xfcba,	// (0x0001a92d) list_single_2heading_msg_pane_t_ParamLimits

0xfcba,	// (0x0001a92d) list_single_2heading_msg_pane_t

0x6e2b,	// (0x00011a9e) title_pane_g4_ParamLimits

0x6e2b,	// (0x00011a9e) title_pane_g4

0x4d87,	// (0x0000f9fa) title_pane_stacon_g3_ParamLimits

0x4d87,	// (0x0000f9fa) title_pane_stacon_g3

0xcd5c,	// (0x000179cf) list_single_2graphic_im_pane_g4_ParamLimits

0xcd5c,	// (0x000179cf) list_single_2graphic_im_pane_g4

0xa5d1,	// (0x00015244) popup_side_volume_key_window_cp

0xaedd,	// (0x00015b50) main_idle_act2_pane_t1

0x5998,	// (0x0001060b) toolbar_button_pane_g10

0x76c9,	// (0x0001233c) popup_toolbar_window_cp1

0xb9d4,	// (0x00016647) clock_nsta_pane_cp_t1

0xb9d4,	// (0x00016647) clock_nsta_pane_cp_t2

0x0001,

0xfab5,	// (0x0001a728) clock_nsta_pane_cp_t

0x4f78,	// (0x0000fbeb) navi_navi_volume_pane_cp2_ParamLimits

0x4f87,	// (0x0000fbfa) popup_side_volume_key_window_g1_ParamLimits

0x4f93,	// (0x0000fc06) popup_side_volume_key_window_g2_ParamLimits

0x4fa2,	// (0x0000fc15) popup_side_volume_key_window_g3_ParamLimits

0xf70c,	// (0x0001a37f) popup_side_volume_key_window_g_ParamLimits

0x5e00,	// (0x00010a73) fep_hwr_aid_pane

0x5ea7,	// (0x00010b1a) bg_fep_hwr_top_pane_g4_ParamLimits

0xbfcd,	// (0x00016c40) fep_hwr_top_pane_g1_ParamLimits

0xbfdf,	// (0x00016c52) fep_hwr_top_pane_g2_ParamLimits

0x5ec7,	// (0x00010b3a) fep_hwr_top_pane_g3_ParamLimits

0xfb0a,	// (0x0001a77d) fep_hwr_top_pane_g_ParamLimits

0x5edc,	// (0x00010b4f) fep_hwr_top_text_pane_ParamLimits

0xa394,	// (0x00015007) aid_touch_tab_arrow_arrow_2

0xa39d,	// (0x00015010) aid_touch_tab_arrow_left_2

0x5e14,	// (0x00010a87) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x5e4b,	// (0x00010abe) fep_hwr_prediction_pane

0xc13f,	// (0x00016db2) fep_vkb_prediction_pane

0xc243,	// (0x00016eb6) fep_vkb_side_pane_g3_ParamLimits

0xc243,	// (0x00016eb6) fep_vkb_side_pane_g3

0x6057,	// (0x00010cca) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x60c3,	// (0x00010d36) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x60d0,	// (0x00010d43) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbb9,	// (0x0001a82c) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x61ff,	// (0x00010e72) fep_hwr_prediction_pane_g1

0x6209,	// (0x00010e7c) fep_hwr_prediction_pane_g2

0x6211,	// (0x00010e84) fep_hwr_prediction_pane_g3

0x6219,	// (0x00010e8c) fep_hwr_prediction_pane_g4

0x0003,

0xfcc3,	// (0x0001a936) fep_hwr_prediction_pane_g

0xd36a,	// (0x00017fdd) fep_vkb_prediction_pane_g1

0xd374,	// (0x00017fe7) fep_vkb_prediction_pane_g2

0xd37c,	// (0x00017fef) fep_vkb_prediction_pane_g3

0xd384,	// (0x00017ff7) fep_vkb_prediction_pane_g4

0x0003,

0xfccc,	// (0x0001a93f) fep_vkb_prediction_pane_g

0x5c80,	// (0x000108f3) slider_set_pane_g3

0x5c94,	// (0x00010907) slider_set_pane_g4

0x5cac,	// (0x0001091f) slider_set_pane_g5

0x5c80,	// (0x000108f3) slider_set_pane_g6

0x5cc2,	// (0x00010935) slider_set_pane_g7

0xaa59,	// (0x000156cc) slider_form_pane_g3

0xaa62,	// (0x000156d5) slider_form_pane_g4

0xaa6a,	// (0x000156dd) slider_form_pane_g5

0xaa59,	// (0x000156cc) slider_form_pane_g6

0xaa72,	// (0x000156e5) slider_form_pane_g7

0xb1d9,	// (0x00015e4c) slider_set_pane_vc_g3

0xb1e2,	// (0x00015e55) slider_set_pane_vc_g4

0xb1eb,	// (0x00015e5e) slider_set_pane_vc_g5

0xb1d9,	// (0x00015e4c) slider_set_pane_vc_g6

0xb1f4,	// (0x00015e67) slider_set_pane_vc_g7

0xb6b9,	// (0x0001632c) slider_form_pane_vc_g1

0xb6c2,	// (0x00016335) slider_form_pane_vc_g2

0xb6cb,	// (0x0001633e) slider_form_pane_vc_g3

0xb6b9,	// (0x0001632c) slider_form_pane_vc_g4

0xb6d4,	// (0x00016347) slider_form_pane_vc_g5

0x0004,

0xfa87,	// (0x0001a6fa) slider_form_pane_vc_g

0x4a4e,	// (0x0000f6c1) main_idle_act3_pane

0xd38c,	// (0x00017fff) ai3_links_pane

0xd395,	// (0x00018008) popup_ai3_data_window_ParamLimits

0xd395,	// (0x00018008) popup_ai3_data_window

0x6de3,	// (0x00011a56) grid_ai3_links_pane

0xd3af,	// (0x00018022) cell_ai3_links_pane_ParamLimits

0xd3af,	// (0x00018022) cell_ai3_links_pane

0xd3c7,	// (0x0001803a) bg_popup_sub_pane_cp11

0xd3d4,	// (0x00018047) cell_ai3_links_pane_g1

0x6de3,	// (0x00011a56) bg_popup_sub_pane_cp12

0xd3f9,	// (0x0001806c) heading_ai3_data_pane

0xd401,	// (0x00018074) list_ai3_gene_pane

0xd40d,	// (0x00018080) popup_ai3_data_window_g1

0xd415,	// (0x00018088) heading_ai3_data_pane_g1

0xd41d,	// (0x00018090) heading_ai3_data_pane_t1

0xd42b,	// (0x0001809e) list_double_ai3_gene_pane_ParamLimits

0xd42b,	// (0x0001809e) list_double_ai3_gene_pane

0xd438,	// (0x000180ab) list_single_ai3_gene_pane_ParamLimits

0xd438,	// (0x000180ab) list_single_ai3_gene_pane

0xbf36,	// (0x00016ba9) list_highlight_pane_cp7_ParamLimits

0xbf36,	// (0x00016ba9) list_highlight_pane_cp7

0xd445,	// (0x000180b8) list_single_a13_gene_pane_t1_ParamLimits

0xd445,	// (0x000180b8) list_single_a13_gene_pane_t1

0xd45c,	// (0x000180cf) list_single_ai3_gene_pane_g1

0xd465,	// (0x000180d8) list_single_ai3_gene_pane_g2

0x0001,

0xfcd5,	// (0x0001a948) list_single_ai3_gene_pane_g

0xd46d,	// (0x000180e0) list_double_ai3_gene_pane_g1_ParamLimits

0xd46d,	// (0x000180e0) list_double_ai3_gene_pane_g1

0xd479,	// (0x000180ec) list_double_ai3_gene_pane_t1_ParamLimits

0xd479,	// (0x000180ec) list_double_ai3_gene_pane_t1

0xd495,	// (0x00018108) list_double_ai3_gene_pane_t2_ParamLimits

0xd495,	// (0x00018108) list_double_ai3_gene_pane_t2

0xd4ab,	// (0x0001811e) list_double_ai3_gene_pane_t3_ParamLimits

0xd4ab,	// (0x0001811e) list_double_ai3_gene_pane_t3

0x0002,

0xfcda,	// (0x0001a94d) list_double_ai3_gene_pane_t_ParamLimits

0xfcda,	// (0x0001a94d) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xd273,	// (0x00017ee6) aid_size_min_col_2

0xd27d,	// (0x00017ef0) aid_size_min_msg_ParamLimits

0xd27d,	// (0x00017ef0) aid_size_min_msg

0xc343,	// (0x00016fb6) fep_vkb_top_text_pane_g2_ParamLimits

0xc343,	// (0x00016fb6) fep_vkb_top_text_pane_g2

0x0001,

0xfb3a,	// (0x0001a7ad) fep_vkb_top_text_pane_g_ParamLimits

0xfb3a,	// (0x0001a7ad) fep_vkb_top_text_pane_g

0x4a4e,	// (0x0000f6c1) main_hc_apps_shell_pane

0xd4c8,	// (0x0001813b) grid_hc_apps_pane_ParamLimits

0xd4c8,	// (0x0001813b) grid_hc_apps_pane

0xd4d7,	// (0x0001814a) list_hc_apps_pane

0xd4df,	// (0x00018152) scroll_pane_cp37_ParamLimits

0xd4df,	// (0x00018152) scroll_pane_cp37

0xd4eb,	// (0x0001815e) cell_hc_apps_pane_ParamLimits

0xd4eb,	// (0x0001815e) cell_hc_apps_pane

0xd599,	// (0x0001820c) cell_hc_apps_pane_g1_ParamLimits

0xd599,	// (0x0001820c) cell_hc_apps_pane_g1

0xd5ca,	// (0x0001823d) cell_hc_apps_pane_g2_ParamLimits

0xd5ca,	// (0x0001823d) cell_hc_apps_pane_g2

0xd5e6,	// (0x00018259) cell_hc_apps_pane_g3_ParamLimits

0xd5e6,	// (0x00018259) cell_hc_apps_pane_g3

0x0002,

0xfce1,	// (0x0001a954) cell_hc_apps_pane_g_ParamLimits

0xfce1,	// (0x0001a954) cell_hc_apps_pane_g

0xd608,	// (0x0001827b) cell_hc_apps_pane_t1_ParamLimits

0xd608,	// (0x0001827b) cell_hc_apps_pane_t1

0x717a,	// (0x00011ded) grid_highlight_pane_cp10_ParamLimits

0x717a,	// (0x00011ded) grid_highlight_pane_cp10

0xd648,	// (0x000182bb) list_single_hc_apps_pane_ParamLimits

0xd648,	// (0x000182bb) list_single_hc_apps_pane

0xd6a4,	// (0x00018317) list_single_hc_apps_pane_g1

0xd6bd,	// (0x00018330) list_single_hc_apps_pane_g2

0x0001,

0xfce8,	// (0x0001a95b) list_single_hc_apps_pane_g

0xd6d6,	// (0x00018349) list_single_hc_apps_pane_g2_copy1

0xd6f2,	// (0x00018365) list_single_hc_apps_pane_t1

0x6ed7,	// (0x00011b4a) bg_set_opt_pane_cp_ParamLimits

0x4caf,	// (0x0000f922) setting_slider_pane_t1_ParamLimits

0x4cc8,	// (0x0000f93b) setting_slider_pane_t2_ParamLimits

0x4ce2,	// (0x0000f955) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0001a1d1) setting_slider_pane_t_ParamLimits

0x4cfa,	// (0x0000f96d) slider_set_pane_ParamLimits

0x5221,	// (0x0000fe94) control_pane_g5_ParamLimits

0x5221,	// (0x0000fe94) control_pane_g5

0xa8a8,	// (0x0001551b) slider_set_pane_g1_ParamLimits

0x5c74,	// (0x000108e7) slider_set_pane_g2_ParamLimits

0x5c80,	// (0x000108f3) slider_set_pane_g3_ParamLimits

0x5c94,	// (0x00010907) slider_set_pane_g4_ParamLimits

0x5cac,	// (0x0001091f) slider_set_pane_g5_ParamLimits

0x5c80,	// (0x000108f3) slider_set_pane_g6_ParamLimits

0x5cc2,	// (0x00010935) slider_set_pane_g7_ParamLimits

0xf95f,	// (0x0001a5d2) slider_set_pane_g_ParamLimits

0x89f4,	// (0x00013667) navi_icon_text_pane_ParamLimits

0x8f06,	// (0x00013b79) aid_fill_nsta_2_ParamLimits

0x8f45,	// (0x00013bb8) aid_touch_tab_arrow_left_ParamLimits

0x8f54,	// (0x00013bc7) aid_touch_tab_arrow_right_ParamLimits

0x8fc1,	// (0x00013c34) clock_nsta_pane_ParamLimits

0xa376,	// (0x00014fe9) navi_icon_pane_g1_ParamLimits

0xa382,	// (0x00014ff5) navi_text_pane_t1_ParamLimits

0xbae0,	// (0x00016753) navi_icon_text_pane_g1_ParamLimits

0xbaec,	// (0x0001675f) navi_icon_text_pane_t1_ParamLimits

0xd6a4,	// (0x00018317) list_single_hc_apps_pane_g1_ParamLimits

0xd6bd,	// (0x00018330) list_single_hc_apps_pane_g2_ParamLimits

0xfce8,	// (0x0001a95b) list_single_hc_apps_pane_g_ParamLimits

0xd6d6,	// (0x00018349) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xd6f2,	// (0x00018365) list_single_hc_apps_pane_t1_ParamLimits

0x4bb9,	// (0x0000f82c) popup_toolbar2_fixed_window_ParamLimits

0x4bb9,	// (0x0000f82c) popup_toolbar2_fixed_window

0x5830,	// (0x000104a3) popup_toolbar2_float_window

0x6de3,	// (0x00011a56) bg_popup_sub_pane_cp27

0xd720,	// (0x00018393) grid_toolbar2_float_pane

0x6de3,	// (0x00011a56) bg_popup_sub_pane_cp26

0xd720,	// (0x00018393) grid_toolbar2_fixed_pane

0xd728,	// (0x0001839b) cell_toolbar2_fixed_pane_ParamLimits

0xd728,	// (0x0001839b) cell_toolbar2_fixed_pane

0xd738,	// (0x000183ab) cell_toolbar2_fixed_pane_g1

0xd741,	// (0x000183b4) toolbar2_fixed_button_pane

0x9406,	// (0x00014079) toolbar2_fixed_button_pane_g1

0x9416,	// (0x00014089) toolbar2_fixed_button_pane_g2

0x940e,	// (0x00014081) toolbar2_fixed_button_pane_g3

0x9426,	// (0x00014099) toolbar2_fixed_button_pane_g4

0x941e,	// (0x00014091) toolbar2_fixed_button_pane_g5

0x942e,	// (0x000140a1) toolbar2_fixed_button_pane_g6

0x9436,	// (0x000140a9) toolbar2_fixed_button_pane_g7

0x9446,	// (0x000140b9) toolbar2_fixed_button_pane_g8

0x943e,	// (0x000140b1) toolbar2_fixed_button_pane_g9

0x0008,

0xf861,	// (0x0001a4d4) toolbar2_fixed_button_pane_g

0xd749,	// (0x000183bc) cell_toolbar2_float_pane_ParamLimits

0xd749,	// (0x000183bc) cell_toolbar2_float_pane

0xd75a,	// (0x000183cd) cell_toolbar2_float_pane_g1

0xd741,	// (0x000183b4) toolbar2_fixed_button_pane_cp

0xc09f,	// (0x00016d12) fep_vkb_accented_list_pane_ParamLimits

0xc09f,	// (0x00016d12) fep_vkb_accented_list_pane

0x6037,	// (0x00010caa) bg_popup_fep_shadow_pane_g9

0x8b74,	// (0x000137e7) bg_popup_fep_shadow_pane_cp3

0x7fa6,	// (0x00012c19) list_accented_list_pane

0xd763,	// (0x000183d6) list_single_accented_list_pane_ParamLimits

0xd763,	// (0x000183d6) list_single_accented_list_pane

0x8b74,	// (0x000137e7) list_highlight_pane_cp10

0xd774,	// (0x000183e7) list_single_accented_list_pane_t1

0x5780,	// (0x000103f3) popup_slider_window_ParamLimits

0x5780,	// (0x000103f3) popup_slider_window

0xd26a,	// (0x00017edd) aid_indentation_list_msg

0xd82e,	// (0x000184a1) bg_popup_window_pane_cp19

0xd898,	// (0x0001850b) popup_slider_window_g1

0xd8b4,	// (0x00018527) popup_slider_window_g2

0xd8d0,	// (0x00018543) popup_slider_window_g3

0x0005,

0xfced,	// (0x0001a960) popup_slider_window_g

0xd92c,	// (0x0001859f) popup_slider_window_t1

0xd9a0,	// (0x00018613) small_volume_slider_vertical_pane

0xbf71,	// (0x00016be4) small_volume_slider_vertical_pane_g1

0xbf71,	// (0x00016be4) small_volume_slider_vertical_pane_g2

0xd9bc,	// (0x0001862f) small_volume_slider_vertical_pane_g3

0x0002,

0xfcff,	// (0x0001a972) small_volume_slider_vertical_pane_g

0x4971,	// (0x0000f5e4) area_side_right_pane_ParamLimits

0x4971,	// (0x0000f5e4) area_side_right_pane

0x6221,	// (0x00010e94) aid_size_side_button_ParamLimits

0x6221,	// (0x00010e94) aid_size_side_button

0x6235,	// (0x00010ea8) grid_sctrl_middle_pane_ParamLimits

0x6235,	// (0x00010ea8) grid_sctrl_middle_pane

0x6254,	// (0x00010ec7) sctrl_sk_bottom_pane

0x6265,	// (0x00010ed8) sctrl_sk_top_pane

0x6277,	// (0x00010eea) aid_touch_sctrl_top

0x6284,	// (0x00010ef7) bg_sctrl_sk_pane_ParamLimits

0x6284,	// (0x00010ef7) bg_sctrl_sk_pane

0x6292,	// (0x00010f05) sctrl_sk_top_pane_g1

0x629f,	// (0x00010f12) sctrl_sk_top_pane_t1

0x6277,	// (0x00010eea) aid_touch_sctrl_bottom

0x6284,	// (0x00010ef7) bg_sctrl_sk_pane_cp_ParamLimits

0x6284,	// (0x00010ef7) bg_sctrl_sk_pane_cp

0x62ba,	// (0x00010f2d) sctrl_sk_bottom_pane_g1

0x629f,	// (0x00010f12) sctrl_sk_bottom_pane_t1

0x62c3,	// (0x00010f36) cell_sctrl_middle_pane_ParamLimits

0x62c3,	// (0x00010f36) cell_sctrl_middle_pane

0x62de,	// (0x00010f51) aid_touch_sctrl_middle_ParamLimits

0x62de,	// (0x00010f51) aid_touch_sctrl_middle

0x62f0,	// (0x00010f63) bg_sctrl_middle_pane_ParamLimits

0x62f0,	// (0x00010f63) bg_sctrl_middle_pane

0x6057,	// (0x00010cca) cell_sctrl_middle_pane_g1_ParamLimits

0x6057,	// (0x00010cca) cell_sctrl_middle_pane_g1

0x62fe,	// (0x00010f71) cell_sctrl_middle_pane_g2_ParamLimits

0x62fe,	// (0x00010f71) cell_sctrl_middle_pane_g2

0x0001,

0xfd0b,	// (0x0001a97e) cell_sctrl_middle_pane_g_ParamLimits

0xfd0b,	// (0x0001a97e) cell_sctrl_middle_pane_g

0x9406,	// (0x00014079) bg_sctrl_middle_pane_g1

0x940e,	// (0x00014081) bg_sctrl_middle_pane_g2

0x9416,	// (0x00014089) bg_sctrl_middle_pane_g3

0x941e,	// (0x00014091) bg_sctrl_middle_pane_g4

0x9426,	// (0x00014099) bg_sctrl_middle_pane_g5

0x942e,	// (0x000140a1) bg_sctrl_middle_pane_g6

0x9436,	// (0x000140a9) bg_sctrl_middle_pane_g7

0x943e,	// (0x000140b1) bg_sctrl_middle_pane_g8

0x0007,

0xfd10,	// (0x0001a983) bg_sctrl_middle_pane_g

0x9446,	// (0x000140b9) bg_sctrl_middle_pane_g8_copy1

0x9406,	// (0x00014079) bg_sctrl_sk_pane_g1

0x9416,	// (0x00014089) bg_sctrl_sk_pane_g2

0x940e,	// (0x00014081) bg_sctrl_sk_pane_g3

0x0008,

0xf861,	// (0x0001a4d4) bg_sctrl_sk_pane_g

0x768f,	// (0x00012302) aid_size_touch_scroll_bar

0x9426,	// (0x00014099) bg_sctrl_sk_pane_g4

0x941e,	// (0x00014091) bg_sctrl_sk_pane_g5

0x942e,	// (0x000140a1) bg_sctrl_sk_pane_g6

0x9436,	// (0x000140a9) bg_sctrl_sk_pane_g7

0x9446,	// (0x000140b9) bg_sctrl_sk_pane_g8

0x943e,	// (0x000140b1) bg_sctrl_sk_pane_g9

0x53e9,	// (0x0001005c) popup_fep_china_hwr2_fs_candidate_window

0x53f3,	// (0x00010066) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x53f3,	// (0x00010066) popup_fep_china_hwr2_fs_control_window

0x6057,	// (0x00010cca) sctrl_sk_top_pane_g2

0x0001,

0xfd06,	// (0x0001a979) sctrl_sk_top_pane_g

0xd9c5,	// (0x00018638) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd9c5,	// (0x00018638) aid_fep_china_hwr2_fs_cell

0xd9d7,	// (0x0001864a) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd9d7,	// (0x0001864a) bg_popup_fep_shadow_pane_cp4

0xd9ee,	// (0x00018661) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd9ee,	// (0x00018661) bg_popup_fep_shadow_pane_cp5

0xda00,	// (0x00018673) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xda00,	// (0x00018673) popup_fep_china_hwr2_fs_control_bar_grid

0xda10,	// (0x00018683) popup_fep_china_hwr2_fs_control_funtion_grid

0xda18,	// (0x0001868b) aid_fep_china_hwr2_fs_candi_cell

0x6de3,	// (0x00011a56) bg_popup_fep_shadow_pane_cp6

0xda22,	// (0x00018695) popup_fep_china_hwr2_fs_candidate_grid

0xda2c,	// (0x0001869f) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xda2c,	// (0x0001869f) cell_fep_china_hwr2_fs_funtion_grid

0xbf71,	// (0x00016be4) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xda44,	// (0x000186b7) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xda44,	// (0x000186b7) cell_fep_china_hwr2_fs_funtion_grid_g1

0xda52,	// (0x000186c5) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xda52,	// (0x000186c5) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd21,	// (0x0001a994) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd21,	// (0x0001a994) cell_fep_china_hwr2_fs_funtion_grid_g

0xda68,	// (0x000186db) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xda68,	// (0x000186db) cell_fep_china_hwr2_fs_funtion_grid_t1

0xda7d,	// (0x000186f0) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xda7d,	// (0x000186f0) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd26,	// (0x0001a999) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd26,	// (0x0001a999) cell_fep_china_hwr2_fs_funtion_grid_t

0xda99,	// (0x0001870c) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xdaa1,	// (0x00018714) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xdaa9,	// (0x0001871c) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd2b,	// (0x0001a99e) popup_fep_china_hwr2_fs_control_bar_grid_g

0xdab1,	// (0x00018724) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xdab1,	// (0x00018724) cell_fep_china_hwr2_fs_candidate_grid

0xdaca,	// (0x0001873d) popup_fep_china_hwr2_fs_candidate_grid_g20

0xdad2,	// (0x00018745) popup_fep_china_hwr2_fs_candidate_grid_g21

0xbf71,	// (0x00016be4) cell_fep_china_hwr2_fs_candidate_grid_g1

0xbf71,	// (0x00016be4) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb3f,	// (0x0001a7b2) cell_fep_china_hwr2_fs_candidate_grid_g

0xdada,	// (0x0001874d) cell_fep_china_hwr2_fs_candidate_grid_t1

0x8fce,	// (0x00013c41) clock_nsta_pane_cp_24_ParamLimits

0x8fce,	// (0x00013c41) clock_nsta_pane_cp_24

0x904c,	// (0x00013cbf) indicator_nsta_pane_cp_24_ParamLimits

0x904c,	// (0x00013cbf) indicator_nsta_pane_cp_24

0xa1f2,	// (0x00014e65) heading_pane_g1

0x0001,

0xf8c6,	// (0x0001a539) heading_pane_g

0xad26,	// (0x00015999) grid_sct_catagory_button_pane

0xad56,	// (0x000159c9) scroll_pane_cp5_ParamLimits

0xbb2e,	// (0x000167a1) button_value_adjust_pane_cp5_ParamLimits

0xbb2e,	// (0x000167a1) button_value_adjust_pane_cp5

0xbc2a,	// (0x0001689d) form2_midp_time_pane_ParamLimits

0xdae8,	// (0x0001875b) cell_sct_catagory_button_pane_ParamLimits

0xdae8,	// (0x0001875b) cell_sct_catagory_button_pane

0xbf36,	// (0x00016ba9) bg_button_pane_cp01_ParamLimits

0xbf36,	// (0x00016ba9) bg_button_pane_cp01

0xbf71,	// (0x00016be4) cell_sct_catagory_button_pane_g1

0x57bf,	// (0x00010432) popup_tb_extension_window

0xdafa,	// (0x0001876d) aid_size_cell_ext_ParamLimits

0xdafa,	// (0x0001876d) aid_size_cell_ext

0x717a,	// (0x00011ded) bg_tb_trans_pane_cp1_ParamLimits

0x717a,	// (0x00011ded) bg_tb_trans_pane_cp1

0xdb1a,	// (0x0001878d) grid_tb_ext_pane_ParamLimits

0xdb1a,	// (0x0001878d) grid_tb_ext_pane

0xdb48,	// (0x000187bb) cell_tb_ext_pane_ParamLimits

0xdb48,	// (0x000187bb) cell_tb_ext_pane

0xdb5f,	// (0x000187d2) cell_tb_ext_pane_g1_ParamLimits

0xdb5f,	// (0x000187d2) cell_tb_ext_pane_g1

0xdb7c,	// (0x000187ef) cell_tb_ext_pane_t1

0x717a,	// (0x00011ded) list_highlight_pane_cp11_ParamLimits

0x717a,	// (0x00011ded) list_highlight_pane_cp11

0x4bd8,	// (0x0000f84b) popup_uni_indicator_window_ParamLimits

0x4bd8,	// (0x0000f84b) popup_uni_indicator_window

0x7cdb,	// (0x0001294e) bg_popup_sub_pane_cp14

0xdb97,	// (0x0001880a) list_uniindi_pane

0xdba3,	// (0x00018816) uniindi_top_pane

0x717a,	// (0x00011ded) bg_uniindi_top_pane

0xdbc2,	// (0x00018835) uniindi_top_pane_g1

0xdbd8,	// (0x0001884b) uniindi_top_pane_g2

0x0003,

0xfd32,	// (0x0001a9a5) uniindi_top_pane_g

0xdc02,	// (0x00018875) uniindi_top_pane_t1

0xdc2c,	// (0x0001889f) list_single_uniindi_pane_ParamLimits

0xdc2c,	// (0x0001889f) list_single_uniindi_pane

0xbf71,	// (0x00016be4) bg_uniindi_top_pane_g1

0xdc3f,	// (0x000188b2) list_single_uniindi_pane_g1

0xdc52,	// (0x000188c5) list_single_uniindi_pane_t1

0x4a4e,	// (0x0000f6c1) control_bg_pane

0xdc77,	// (0x000188ea) bg_sctrl_sk_pane_cp1

0xdc80,	// (0x000188f3) bg_sctrl_sk_pane_cp2

0xdc89,	// (0x000188fc) control_bg_pane_g1

0xdc92,	// (0x00018905) control_bg_pane_g2

0x0001,

0xfd3b,	// (0x0001a9ae) control_bg_pane_g

0xb989,	// (0x000165fc) cell_indicator_nsta_pane_g1_ParamLimits

0xb997,	// (0x0001660a) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa3,	// (0x0001a716) cell_indicator_nsta_pane_g_ParamLimits

0xbcb2,	// (0x00016925) form2_midp_time_pane_t1_ParamLimits

0x5351,	// (0x0000ffc4) main_idle_act4_pane_ParamLimits

0x5351,	// (0x0000ffc4) main_idle_act4_pane

0x57bf,	// (0x00010432) popup_tb_extension_window_ParamLimits

0xdb38,	// (0x000187ab) tb_ext_find_pane_ParamLimits

0xdb38,	// (0x000187ab) tb_ext_find_pane

0xdc9b,	// (0x0001890e) ai_gene_pane_1_cp1

0x8cbb,	// (0x0001392e) ai_gene_pane_2_cp1

0xdca3,	// (0x00018916) list_single_idle_plugin_calendar_pane

0xdcac,	// (0x0001891f) list_single_idle_plugin_notification_pane

0xdcb5,	// (0x00018928) list_single_idle_plugin_player_pane

0xdcbe,	// (0x00018931) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdcbe,	// (0x00018931) list_single_idle_plugin_shortcut_pane

0xdce0,	// (0x00018953) main_idle_act4_pane_t1

0xdcf2,	// (0x00018965) main_idle_act4_pane_t2

0x0001,

0xfd40,	// (0x0001a9b3) main_idle_act4_pane_t

0xdd04,	// (0x00018977) middle_sk_idle_act4_pane_ParamLimits

0xdd04,	// (0x00018977) middle_sk_idle_act4_pane

0xdd1a,	// (0x0001898d) popup_clock_digital_analogue_window_cp2

0xdd34,	// (0x000189a7) shortcut_wheel_idle_act4_pane_ParamLimits

0xdd34,	// (0x000189a7) shortcut_wheel_idle_act4_pane

0xbf71,	// (0x00016be4) shortcut_wheel_idle_act4_pane_g1

0xbf71,	// (0x00016be4) shortcut_wheel_idle_act4_pane_g2

0xbf71,	// (0x00016be4) shortcut_wheel_idle_act4_pane_g3

0xbf71,	// (0x00016be4) shortcut_wheel_idle_act4_pane_g4

0xbf71,	// (0x00016be4) shortcut_wheel_idle_act4_pane_g5

0xdd48,	// (0x000189bb) shortcut_wheel_idle_act4_pane_g6

0xdd50,	// (0x000189c3) shortcut_wheel_idle_act4_pane_g7

0xdd58,	// (0x000189cb) shortcut_wheel_idle_act4_pane_g8

0xdd60,	// (0x000189d3) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd45,	// (0x0001a9b8) shortcut_wheel_idle_act4_pane_g

0xc1ef,	// (0x00016e62) middle_sk_idle_act4_pane_g1_ParamLimits

0xc1ef,	// (0x00016e62) middle_sk_idle_act4_pane_g1

0xddc4,	// (0x00018a37) middle_sk_idle_act4_pane_g2_ParamLimits

0xddc4,	// (0x00018a37) middle_sk_idle_act4_pane_g2

0x0001,

0xfd68,	// (0x0001a9db) middle_sk_idle_act4_pane_g_ParamLimits

0xfd68,	// (0x0001a9db) middle_sk_idle_act4_pane_g

0xddd0,	// (0x00018a43) middle_sk_idle_act4_pane_t1_ParamLimits

0xddd0,	// (0x00018a43) middle_sk_idle_act4_pane_t1

0xdded,	// (0x00018a60) grid_ai_shortcut_pane_ParamLimits

0xdded,	// (0x00018a60) grid_ai_shortcut_pane

0xde06,	// (0x00018a79) list_highlight_pane_cp16_ParamLimits

0xde06,	// (0x00018a79) list_highlight_pane_cp16

0xde13,	// (0x00018a86) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xde13,	// (0x00018a86) list_single_idle_plugin_shortcut_pane_g1

0xde1f,	// (0x00018a92) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xde1f,	// (0x00018a92) list_single_idle_plugin_shortcut_pane_g2

0xde37,	// (0x00018aaa) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xde37,	// (0x00018aaa) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd6d,	// (0x0001a9e0) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd6d,	// (0x0001a9e0) list_single_idle_plugin_shortcut_pane_g

0xde4a,	// (0x00018abd) cell_ai_shortcut_pane_ParamLimits

0xde4a,	// (0x00018abd) cell_ai_shortcut_pane

0xde6e,	// (0x00018ae1) cell_ai_shortcut_pane_g1_ParamLimits

0xde6e,	// (0x00018ae1) cell_ai_shortcut_pane_g1

0xdc9b,	// (0x0001890e) ai_gene_pane_1_cp2

0xde90,	// (0x00018b03) ai_gene_pane_2_cp2

0xde98,	// (0x00018b0b) list_highlight_pane_cp15

0xdea1,	// (0x00018b14) list_single_idle_plugin_calendar_pane_g1

0xde98,	// (0x00018b0b) list_highlight_pane_cp17

0xdea9,	// (0x00018b1c) list_single_idle_plugin_calendar_pane_g1_copy1

0xdeb1,	// (0x00018b24) list_single_idle_plugin_player_pane_g1

0xaf7f,	// (0x00015bf2) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd74,	// (0x0001a9e7) list_single_idle_plugin_player_pane_g

0xdeb9,	// (0x00018b2c) list_single_idle_plugin_player_pane_t1

0xdec7,	// (0x00018b3a) list_single_idle_plugin_player_pane_t2

0xded5,	// (0x00018b48) list_single_idle_plugin_player_pane_t3

0xdee3,	// (0x00018b56) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd79,	// (0x0001a9ec) list_single_idle_plugin_player_pane_t

0xdef1,	// (0x00018b64) wait_bar_pane_cp15

0xdef9,	// (0x00018b6c) grid_ai_notification_pane

0xaf7f,	// (0x00015bf2) list_single_idle_plugin_notification_pane_g1

0xdf02,	// (0x00018b75) cell_ai_notification_pane_ParamLimits

0xdf02,	// (0x00018b75) cell_ai_notification_pane

0xdf0f,	// (0x00018b82) cell_ai_notification_pane_g1

0xdf17,	// (0x00018b8a) cell_ai_notification_pane_t1

0xdf25,	// (0x00018b98) tb_ext_find_button_pane

0xdf2d,	// (0x00018ba0) tb_ext_find_pane_g1

0xdf35,	// (0x00018ba8) tb_ext_find_pane_t1

0x84d2,	// (0x00013145) tb_ext_find_button_pane_g1

0xdf43,	// (0x00018bb6) tb_ext_find_button_pane_g2

0x0001,

0xfd82,	// (0x0001a9f5) tb_ext_find_button_pane_g

0xdce0,	// (0x00018953) main_idle_act4_pane_t1_ParamLimits

0xdcf2,	// (0x00018965) main_idle_act4_pane_t2_ParamLimits

0xfd40,	// (0x0001a9b3) main_idle_act4_pane_t_ParamLimits

0xdd1a,	// (0x0001898d) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdd28,	// (0x0001899b) sat_plugin_idle_act4_pane_ParamLimits

0xdd28,	// (0x0001899b) sat_plugin_idle_act4_pane

0xdf4c,	// (0x00018bbf) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdf4c,	// (0x00018bbf) sat_plugin_idle_act4_pane_t1

0xdf5f,	// (0x00018bd2) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdf5f,	// (0x00018bd2) sat_plugin_idle_act4_pane_t2

0xdf72,	// (0x00018be5) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdf72,	// (0x00018be5) sat_plugin_idle_act4_pane_t3

0xdf85,	// (0x00018bf8) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdf85,	// (0x00018bf8) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd87,	// (0x0001a9fa) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd87,	// (0x0001a9fa) sat_plugin_idle_act4_pane_t

0x4b13,	// (0x0000f786) popup_battery_window_ParamLimits

0x4b13,	// (0x0000f786) popup_battery_window

0x717a,	// (0x00011ded) bg_popup_sub_pane_cp25_ParamLimits

0x717a,	// (0x00011ded) bg_popup_sub_pane_cp25

0xdf98,	// (0x00018c0b) popup_battery_window_g1_ParamLimits

0xdf98,	// (0x00018c0b) popup_battery_window_g1

0xdfa4,	// (0x00018c17) popup_battery_window_t1_ParamLimits

0xdfa4,	// (0x00018c17) popup_battery_window_t1

0xdfb6,	// (0x00018c29) popup_battery_window_t2_ParamLimits

0xdfb6,	// (0x00018c29) popup_battery_window_t2

0x0001,

0xfd90,	// (0x0001aa03) popup_battery_window_t_ParamLimits

0xfd90,	// (0x0001aa03) popup_battery_window_t

0x8b88,	// (0x000137fb) midp_canvas_pane_ParamLimits

0x8bff,	// (0x00013872) midp_keypad_pane_ParamLimits

0x8bff,	// (0x00013872) midp_keypad_pane

0x8ec6,	// (0x00013b39) main_midp_pane_ParamLimits

0xb9f2,	// (0x00016665) signal_pane_g2_cp_ParamLimits

0xdfd3,	// (0x00018c46) aid_size_cell_midp_keypad_ParamLimits

0xdfd3,	// (0x00018c46) aid_size_cell_midp_keypad

0xdfed,	// (0x00018c60) midp_keyp_game_grid_pane_ParamLimits

0xdfed,	// (0x00018c60) midp_keyp_game_grid_pane

0xe00d,	// (0x00018c80) midp_keyp_rocker_pane_ParamLimits

0xe00d,	// (0x00018c80) midp_keyp_rocker_pane

0xe046,	// (0x00018cb9) midp_keyp_sk_left_pane_ParamLimits

0xe046,	// (0x00018cb9) midp_keyp_sk_left_pane

0xe0a0,	// (0x00018d13) midp_keyp_sk_right_pane_ParamLimits

0xe0a0,	// (0x00018d13) midp_keyp_sk_right_pane

0x6de3,	// (0x00011a56) bg_button_pane_cp03

0xe0fa,	// (0x00018d6d) midp_keyp_sk_left_pane_g1

0x6de3,	// (0x00011a56) bg_button_pane_cp04

0xe0fa,	// (0x00018d6d) midp_keyp_sk_right_pane_g1

0xbf71,	// (0x00016be4) midp_keyp_rocker_pane_g1

0xe103,	// (0x00018d76) keyp_game_cell_pane_ParamLimits

0xe103,	// (0x00018d76) keyp_game_cell_pane

0x6de3,	// (0x00011a56) bg_button_pane_cp02

0xe116,	// (0x00018d89) keyp_game_cell_pane_g1

0x4b57,	// (0x0000f7ca) popup_fep_vkb2_window_ParamLimits

0x4b57,	// (0x0000f7ca) popup_fep_vkb2_window

0x631c,	// (0x00010f8f) aid_size_cell_vkb2_ParamLimits

0x631c,	// (0x00010f8f) aid_size_cell_vkb2

0x6370,	// (0x00010fe3) popup_fep_vkb2_window_g1_ParamLimits

0x6370,	// (0x00010fe3) popup_fep_vkb2_window_g1

0x63b8,	// (0x0001102b) vkb2_area_bottom_pane_ParamLimits

0x63b8,	// (0x0001102b) vkb2_area_bottom_pane

0x6404,	// (0x00011077) vkb2_area_keypad_pane_ParamLimits

0x6404,	// (0x00011077) vkb2_area_keypad_pane

0x6446,	// (0x000110b9) vkb2_area_top_pane_ParamLimits

0x6446,	// (0x000110b9) vkb2_area_top_pane

0x64c0,	// (0x00011133) vkb2_top_entry_pane_ParamLimits

0x64c0,	// (0x00011133) vkb2_top_entry_pane

0x64ea,	// (0x0001115d) vkb2_top_grid_left_pane_ParamLimits

0x64ea,	// (0x0001115d) vkb2_top_grid_left_pane

0x6508,	// (0x0001117b) vkb2_top_grid_right_pane_ParamLimits

0x6508,	// (0x0001117b) vkb2_top_grid_right_pane

0x6526,	// (0x00011199) vkb2_cell_keypad_pane_ParamLimits

0x6526,	// (0x00011199) vkb2_cell_keypad_pane

0x65f7,	// (0x0001126a) vkb2_area_bottom_grid_pane_ParamLimits

0x65f7,	// (0x0001126a) vkb2_area_bottom_grid_pane

0x661d,	// (0x00011290) vkb2_area_bottom_pane_g1_ParamLimits

0x661d,	// (0x00011290) vkb2_area_bottom_pane_g1

0x6641,	// (0x000112b4) vkb2_area_bottom_pane_g2_ParamLimits

0x6641,	// (0x000112b4) vkb2_area_bottom_pane_g2

0x666f,	// (0x000112e2) vkb2_area_bottom_pane_g3_ParamLimits

0x666f,	// (0x000112e2) vkb2_area_bottom_pane_g3

0x0002,

0xfd95,	// (0x0001aa08) vkb2_area_bottom_pane_g_ParamLimits

0xfd95,	// (0x0001aa08) vkb2_area_bottom_pane_g

0x66d0,	// (0x00011343) vkb2_top_cell_left_pane_ParamLimits

0x66d0,	// (0x00011343) vkb2_top_cell_left_pane

0xe148,	// (0x00018dbb) vkb2_top_entry_pane_g1_ParamLimits

0xe148,	// (0x00018dbb) vkb2_top_entry_pane_g1

0xe156,	// (0x00018dc9) vkb2_top_entry_pane_t1_ParamLimits

0xe156,	// (0x00018dc9) vkb2_top_entry_pane_t1

0xe188,	// (0x00018dfb) vkb2_top_entry_pane_t2_ParamLimits

0xe188,	// (0x00018dfb) vkb2_top_entry_pane_t2

0xe1ba,	// (0x00018e2d) vkb2_top_entry_pane_t3_ParamLimits

0xe1ba,	// (0x00018e2d) vkb2_top_entry_pane_t3

0x0002,

0xfd9c,	// (0x0001aa0f) vkb2_top_entry_pane_t_ParamLimits

0xfd9c,	// (0x0001aa0f) vkb2_top_entry_pane_t

0x671d,	// (0x00011390) vkb2_top_grid_right_pane_g1_ParamLimits

0x671d,	// (0x00011390) vkb2_top_grid_right_pane_g1

0x6733,	// (0x000113a6) vkb2_top_grid_right_pane_g2_ParamLimits

0x6733,	// (0x000113a6) vkb2_top_grid_right_pane_g2

0x674b,	// (0x000113be) vkb2_top_grid_right_pane_g3_ParamLimits

0x674b,	// (0x000113be) vkb2_top_grid_right_pane_g3

0x6763,	// (0x000113d6) vkb2_top_grid_right_pane_g4_ParamLimits

0x6763,	// (0x000113d6) vkb2_top_grid_right_pane_g4

0x0003,

0xfda3,	// (0x0001aa16) vkb2_top_grid_right_pane_g_ParamLimits

0xfda3,	// (0x0001aa16) vkb2_top_grid_right_pane_g

0x6779,	// (0x000113ec) vkb2_top_cell_left_pane_g1

0x6790,	// (0x00011403) vkb2_cell_keypad_pane_g1_ParamLimits

0x6790,	// (0x00011403) vkb2_cell_keypad_pane_g1

0xe1de,	// (0x00018e51) vkb2_cell_keypad_pane_t1_ParamLimits

0xe1de,	// (0x00018e51) vkb2_cell_keypad_pane_t1

0x679e,	// (0x00011411) vkb2_cell_bottom_grid_pane_ParamLimits

0x679e,	// (0x00011411) vkb2_cell_bottom_grid_pane

0x67d7,	// (0x0001144a) vkb2_cell_bottom_grid_pane_g1

0xdd68,	// (0x000189db) aid_call2_pane_cp02

0xdd70,	// (0x000189e3) aid_call_pane_cp02

0xdd78,	// (0x000189eb) clock_digital_number_pane_cp10

0xdd80,	// (0x000189f3) clock_digital_number_pane_cp11

0xdd88,	// (0x000189fb) clock_digital_number_pane_cp12

0xdd90,	// (0x00018a03) clock_digital_number_pane_cp13

0xdd98,	// (0x00018a0b) clock_digital_separator_pane_cp10

0x84d2,	// (0x00013145) popup_clock_digital_analogue_window_cp2_g1

0x84d2,	// (0x00013145) popup_clock_digital_analogue_window_cp2_g2

0xdda0,	// (0x00018a13) popup_clock_digital_analogue_window_cp2_g3

0x84d2,	// (0x00013145) popup_clock_digital_analogue_window_cp2_g4

0xdda0,	// (0x00018a13) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd58,	// (0x0001a9cb) popup_clock_digital_analogue_window_cp2_g

0xdda8,	// (0x00018a1b) popup_clock_digital_analogue_window_cp2_t1

0xddb6,	// (0x00018a29) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd63,	// (0x0001a9d6) popup_clock_digital_analogue_window_cp2_t

0xbf71,	// (0x00016be4) clock_digital_number_pane_cp10_g1

0xbf71,	// (0x00016be4) clock_digital_number_pane_cp10_g2

0x0001,

0xfb3f,	// (0x0001a7b2) clock_digital_number_pane_cp10_g

0xbf71,	// (0x00016be4) clock_digital_separator_pane_cp10_g1

0xbf71,	// (0x00016be4) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb3f,	// (0x0001a7b2) clock_digital_separator_pane_cp10_g

0xdbe4,	// (0x00018857) uniindi_top_pane_g3

0xdbf5,	// (0x00018868) uniindi_top_pane_g4

0x65b1,	// (0x00011224) vkb2_row_keypad_pane_ParamLimits

0x65b1,	// (0x00011224) vkb2_row_keypad_pane

0x67f3,	// (0x00011466) vkb2_cell_t_keypad_pane_ParamLimits

0x67f3,	// (0x00011466) vkb2_cell_t_keypad_pane

0x6803,	// (0x00011476) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x6803,	// (0x00011476) vkb2_cell_t_keypad_pane_cp08

0x6816,	// (0x00011489) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x6816,	// (0x00011489) vkb2_cell_t_keypad_pane_cp09

0x682a,	// (0x0001149d) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x682a,	// (0x0001149d) vkb2_cell_t_keypad_pane_cp01

0x683b,	// (0x000114ae) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x683b,	// (0x000114ae) vkb2_cell_t_keypad_pane_cp02

0x684c,	// (0x000114bf) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x684c,	// (0x000114bf) vkb2_cell_t_keypad_pane_cp03

0x685d,	// (0x000114d0) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x685d,	// (0x000114d0) vkb2_cell_t_keypad_pane_cp04

0x686e,	// (0x000114e1) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x686e,	// (0x000114e1) vkb2_cell_t_keypad_pane_cp05

0x687f,	// (0x000114f2) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x687f,	// (0x000114f2) vkb2_cell_t_keypad_pane_cp06

0x6890,	// (0x00011503) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x6890,	// (0x00011503) vkb2_cell_t_keypad_pane_cp07

0x68a1,	// (0x00011514) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x68a1,	// (0x00011514) vkb2_cell_t_keypad_pane_cp10

0x6057,	// (0x00010cca) vkb2_cell_t_keypad_pane_g1

0xe1f5,	// (0x00018e68) vkb2_cell_t_keypad_pane_t1

0x4a4e,	// (0x0000f6c1) popup_grid_graphic2_window

0xe207,	// (0x00018e7a) aid_size_cell_graphic2_ParamLimits

0xe207,	// (0x00018e7a) aid_size_cell_graphic2

0xe23f,	// (0x00018eb2) bg_popup_window_pane_cp21_ParamLimits

0xe23f,	// (0x00018eb2) bg_popup_window_pane_cp21

0xe24d,	// (0x00018ec0) graphic2_pages_pane_ParamLimits

0xe24d,	// (0x00018ec0) graphic2_pages_pane

0xe293,	// (0x00018f06) grid_graphic2_control_pane_ParamLimits

0xe293,	// (0x00018f06) grid_graphic2_control_pane

0xe2d1,	// (0x00018f44) grid_graphic2_pane_ParamLimits

0xe2d1,	// (0x00018f44) grid_graphic2_pane

0xe345,	// (0x00018fb8) cell_graphic2_pane

0x4a4e,	// (0x0000f6c1) main_comp_mode_pane

0xd401,	// (0x00018074) list_ai3_gene_pane_ParamLimits

0xd82e,	// (0x000184a1) bg_popup_window_pane_cp19_ParamLimits

0xd83a,	// (0x000184ad) bg_touch_area_indi_pane_ParamLimits

0xd83a,	// (0x000184ad) bg_touch_area_indi_pane

0xd850,	// (0x000184c3) bg_touch_area_indi_pane_cp01_ParamLimits

0xd850,	// (0x000184c3) bg_touch_area_indi_pane_cp01

0xd866,	// (0x000184d9) bg_touch_area_indi_pane_cp02_ParamLimits

0xd866,	// (0x000184d9) bg_touch_area_indi_pane_cp02

0xd87e,	// (0x000184f1) bg_touch_area_indi_pane_cp03_ParamLimits

0xd87e,	// (0x000184f1) bg_touch_area_indi_pane_cp03

0xd898,	// (0x0001850b) popup_slider_window_g1_ParamLimits

0xd8b4,	// (0x00018527) popup_slider_window_g2_ParamLimits

0xd8d0,	// (0x00018543) popup_slider_window_g3_ParamLimits

0xfced,	// (0x0001a960) popup_slider_window_g_ParamLimits

0xd92c,	// (0x0001859f) popup_slider_window_t1_ParamLimits

0xd9a0,	// (0x00018613) small_volume_slider_vertical_pane_ParamLimits

0xe345,	// (0x00018fb8) cell_graphic2_pane_ParamLimits

0xe394,	// (0x00019007) bg_button_pane_cp10_ParamLimits

0xe394,	// (0x00019007) bg_button_pane_cp10

0xe3a7,	// (0x0001901a) bg_button_pane_cp11_ParamLimits

0xe3a7,	// (0x0001901a) bg_button_pane_cp11

0xe3ba,	// (0x0001902d) graphic2_pages_pane_g1_ParamLimits

0xe3ba,	// (0x0001902d) graphic2_pages_pane_g1

0xe3d5,	// (0x00019048) graphic2_pages_pane_g2_ParamLimits

0xe3d5,	// (0x00019048) graphic2_pages_pane_g2

0x0001,

0xfdb1,	// (0x0001aa24) graphic2_pages_pane_g_ParamLimits

0xfdb1,	// (0x0001aa24) graphic2_pages_pane_g

0xe3ed,	// (0x00019060) graphic2_pages_pane_t1_ParamLimits

0xe3ed,	// (0x00019060) graphic2_pages_pane_t1

0xe405,	// (0x00019078) cell_graphic2_control_pane_ParamLimits

0xe405,	// (0x00019078) cell_graphic2_control_pane

0xe423,	// (0x00019096) cell_graphic2_pane_g1_ParamLimits

0xe423,	// (0x00019096) cell_graphic2_pane_g1

0xe430,	// (0x000190a3) cell_graphic2_pane_g2_ParamLimits

0xe430,	// (0x000190a3) cell_graphic2_pane_g2

0xe43d,	// (0x000190b0) cell_graphic2_pane_g3_ParamLimits

0xe43d,	// (0x000190b0) cell_graphic2_pane_g3

0xe44a,	// (0x000190bd) cell_graphic2_pane_g4_ParamLimits

0xe44a,	// (0x000190bd) cell_graphic2_pane_g4

0xe457,	// (0x000190ca) cell_graphic2_pane_g5_ParamLimits

0xe457,	// (0x000190ca) cell_graphic2_pane_g5

0x0004,

0xfdb6,	// (0x0001aa29) cell_graphic2_pane_g_ParamLimits

0xfdb6,	// (0x0001aa29) cell_graphic2_pane_g

0xe472,	// (0x000190e5) cell_graphic2_pane_t1_ParamLimits

0xe472,	// (0x000190e5) cell_graphic2_pane_t1

0x9528,	// (0x0001419b) grid_highlight_pane_cp11_ParamLimits

0x9528,	// (0x0001419b) grid_highlight_pane_cp11

0x717a,	// (0x00011ded) bg_button_pane_cp05

0xe4a9,	// (0x0001911c) cell_graphic2_control_pane_g1

0xbf71,	// (0x00016be4) bg_touch_area_indi_pane_g1

0xe4d1,	// (0x00019144) aid_cmod_rocker_key_size

0xe4db,	// (0x0001914e) aid_cmode_itu_key_size

0xe4e5,	// (0x00019158) main_cmode_video_pane

0xe4ef,	// (0x00019162) main_comp_mode_itu_pane

0xe4fb,	// (0x0001916e) main_comp_mode_rocker_pane

0xe507,	// (0x0001917a) cell_cmode_rocker_pane_ParamLimits

0xe507,	// (0x0001917a) cell_cmode_rocker_pane

0xe519,	// (0x0001918c) cell_cmode_itu_pane_ParamLimits

0xe519,	// (0x0001918c) cell_cmode_itu_pane

0x7cdb,	// (0x0001294e) bg_button_pane_cp06_ParamLimits

0x7cdb,	// (0x0001294e) bg_button_pane_cp06

0xc1ef,	// (0x00016e62) cell_cmode_rocker_pane_g1_ParamLimits

0xc1ef,	// (0x00016e62) cell_cmode_rocker_pane_g1

0xda44,	// (0x000186b7) cell_cmode_rocker_pane_g2_ParamLimits

0xda44,	// (0x000186b7) cell_cmode_rocker_pane_g2

0x0001,

0xfdc6,	// (0x0001aa39) cell_cmode_rocker_pane_g_ParamLimits

0xfdc6,	// (0x0001aa39) cell_cmode_rocker_pane_g

0x6de3,	// (0x00011a56) bg_button_pane_cp07

0xe52e,	// (0x000191a1) cell_cmode_itu_pane_g1

0xe537,	// (0x000191aa) cell_cmode_itu_pane_t1

0xe545,	// (0x000191b8) cell_cmode_itu_pane_t2

0x0001,

0xfdcb,	// (0x0001aa3e) cell_cmode_itu_pane_t

0xdc67,	// (0x000188da) aid_touch_ctrl_left

0xdc6f,	// (0x000188e2) aid_touch_ctrl_right

0x6de3,	// (0x00011a56) compa_mode_pane

0xe553,	// (0x000191c6) aid_cmod_rocker_key_size_cp

0xe55d,	// (0x000191d0) aid_cmode_itu_key_size_cp

0xe567,	// (0x000191da) compa_mode_pane_g1

0xe56f,	// (0x000191e2) compa_mode_pane_g2

0xe577,	// (0x000191ea) compa_mode_pane_g3

0x0002,

0xfdd0,	// (0x0001aa43) compa_mode_pane_g

0xe57f,	// (0x000191f2) main_comp_mode_itu_pane_cp

0xe587,	// (0x000191fa) main_comp_mode_rocker_pane_cp

0xe58f,	// (0x00019202) cell_cmode_itu_pane_cp_ParamLimits

0xe58f,	// (0x00019202) cell_cmode_itu_pane_cp

0xe5a4,	// (0x00019217) cell_cmode_rocker_pane_cp_ParamLimits

0xe5a4,	// (0x00019217) cell_cmode_rocker_pane_cp

0x7cdb,	// (0x0001294e) bg_button_pane_cp06_cp_ParamLimits

0x7cdb,	// (0x0001294e) bg_button_pane_cp06_cp

0xc1ef,	// (0x00016e62) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc1ef,	// (0x00016e62) cell_cmode_rocker_pane_g1_cp

0xbf71,	// (0x00016be4) cell_cmode_rocker_pane_g2_cp

0x6de3,	// (0x00011a56) bg_button_pane_cp07_cp

0xaa59,	// (0x000156cc) cell_cmode_itu_pane_g1_cp

0xe5b6,	// (0x00019229) cell_cmode_itu_pane_t1_cp

0xe5b6,	// (0x00019229) cell_cmode_itu_pane_t2_cp

0xaa46,	// (0x000156b9) settings_code_pane_cp2

0x6ed7,	// (0x00011b4a) bg_popup_window_pane_cp3_ParamLimits

0x7354,	// (0x00011fc7) heading_pane_cp3_ParamLimits

0x7360,	// (0x00011fd3) listscroll_popup_graphic_pane_ParamLimits

0x5e00,	// (0x00010a73) fep_hwr_aid_pane_ParamLimits

0x6277,	// (0x00010eea) aid_touch_sctrl_top_ParamLimits

0x6292,	// (0x00010f05) sctrl_sk_top_pane_g1_ParamLimits

0x6057,	// (0x00010cca) sctrl_sk_top_pane_g2_ParamLimits

0xfd06,	// (0x0001a979) sctrl_sk_top_pane_g_ParamLimits

0x629f,	// (0x00010f12) sctrl_sk_top_pane_t1_ParamLimits

0x6277,	// (0x00010eea) aid_touch_sctrl_bottom_ParamLimits

0x629f,	// (0x00010f12) sctrl_sk_bottom_pane_t1_ParamLimits

0xdbb0,	// (0x00018823) aid_area_touch_clock

0x6488,	// (0x000110fb) aid_vkb2_area_top_pane_cell_ParamLimits

0x6488,	// (0x000110fb) aid_vkb2_area_top_pane_cell

0x65d3,	// (0x00011246) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x65d3,	// (0x00011246) aid_vkb2_area_bottom_pane_cell

0xe140,	// (0x00018db3) popup_char_count_window

0xe5c4,	// (0x00019237) popup_char_count_window_g1

0xe5cd,	// (0x00019240) popup_char_count_window_g2

0xe5d6,	// (0x00019249) popup_char_count_window_g3

0x0002,

0xfdd7,	// (0x0001aa4a) popup_char_count_window_g

0xe5df,	// (0x00019252) popup_char_count_window_t1

0x634e,	// (0x00010fc1) popup_fep_char_preview_window_ParamLimits

0x634e,	// (0x00010fc1) popup_fep_char_preview_window

0x64a6,	// (0x00011119) vkb2_top_candi_pane_ParamLimits

0x64a6,	// (0x00011119) vkb2_top_candi_pane

0xe5ed,	// (0x00019260) cell_vkb2_top_candi_pane_ParamLimits

0xe5ed,	// (0x00019260) cell_vkb2_top_candi_pane

0x68b6,	// (0x00011529) bg_popup_fep_char_preview_window_ParamLimits

0x68b6,	// (0x00011529) bg_popup_fep_char_preview_window

0x68c4,	// (0x00011537) popup_fep_char_preview_window_t1_ParamLimits

0x68c4,	// (0x00011537) popup_fep_char_preview_window_t1

0xe63a,	// (0x000192ad) bg_popup_fep_char_preview_window_g1

0xe642,	// (0x000192b5) bg_popup_fep_char_preview_window_g2

0xe64a,	// (0x000192bd) bg_popup_fep_char_preview_window_g3

0xe652,	// (0x000192c5) bg_popup_fep_char_preview_window_g4

0xe65a,	// (0x000192cd) bg_popup_fep_char_preview_window_g5

0x68fe,	// (0x00011571) bg_popup_fep_char_preview_window_g6

0xe662,	// (0x000192d5) bg_popup_fep_char_preview_window_g7

0xe66a,	// (0x000192dd) bg_popup_fep_char_preview_window_g8

0xe672,	// (0x000192e5) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdde,	// (0x0001aa51) bg_popup_fep_char_preview_window_g

0x6057,	// (0x00010cca) cell_vkb2_top_candi_pane_g1_ParamLimits

0x6057,	// (0x00010cca) cell_vkb2_top_candi_pane_g1

0x6065,	// (0x00010cd8) cell_vkb2_top_candi_pane_g2_ParamLimits

0x6065,	// (0x00010cd8) cell_vkb2_top_candi_pane_g2

0xe11f,	// (0x00018d92) cell_vkb2_top_candi_pane_g3_ParamLimits

0xe11f,	// (0x00018d92) cell_vkb2_top_candi_pane_g3

0x6906,	// (0x00011579) cell_vkb2_top_candi_pane_g4_ParamLimits

0x6906,	// (0x00011579) cell_vkb2_top_candi_pane_g4

0xc85f,	// (0x000174d2) cell_vkb2_top_candi_pane_g5_ParamLimits

0xc85f,	// (0x000174d2) cell_vkb2_top_candi_pane_g5

0x6927,	// (0x0001159a) cell_vkb2_top_candi_pane_g6_ParamLimits

0x6927,	// (0x0001159a) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdf1,	// (0x0001aa64) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdf1,	// (0x0001aa64) cell_vkb2_top_candi_pane_g

0x6935,	// (0x000115a8) cell_vkb2_top_candi_pane_t1

0x5c60,	// (0x000108d3) aid_size_touch_slider_mark_ParamLimits

0x5c60,	// (0x000108d3) aid_size_touch_slider_mark

0xe283,	// (0x00018ef6) grid_graphic2_catg_pane_ParamLimits

0xe283,	// (0x00018ef6) grid_graphic2_catg_pane

0xe321,	// (0x00018f94) popup_grid_graphic2_window_t1_ParamLimits

0xe321,	// (0x00018f94) popup_grid_graphic2_window_t1

0xe333,	// (0x00018fa6) popup_grid_graphic2_window_t2_ParamLimits

0xe333,	// (0x00018fa6) popup_grid_graphic2_window_t2

0x0001,

0xfdac,	// (0x0001aa1f) popup_grid_graphic2_window_t_ParamLimits

0xfdac,	// (0x0001aa1f) popup_grid_graphic2_window_t

0x717a,	// (0x00011ded) bg_button_pane_cp05_ParamLimits

0xe4a9,	// (0x0001911c) cell_graphic2_control_pane_g1_ParamLimits

0xe67a,	// (0x000192ed) cell_graphic2_catg_pane_ParamLimits

0xe67a,	// (0x000192ed) cell_graphic2_catg_pane

0x6de3,	// (0x00011a56) bg_button_pane_cp12

0xe68c,	// (0x000192ff) cell_graphic2_catg_pane_g1

0xdb7c,	// (0x000187ef) cell_tb_ext_pane_t1_ParamLimits

0x66f0,	// (0x00011363) vkb2_top_cell_right_narrow_pane_ParamLimits

0x66f0,	// (0x00011363) vkb2_top_cell_right_narrow_pane

0x6708,	// (0x0001137b) vkb2_top_cell_right_wide_pane_ParamLimits

0x6708,	// (0x0001137b) vkb2_top_cell_right_wide_pane

0x5df2,	// (0x00010a65) bg_vkb2_func_pane_ParamLimits

0x5df2,	// (0x00010a65) bg_vkb2_func_pane

0x6779,	// (0x000113ec) vkb2_top_cell_left_pane_g1_ParamLimits

0x5df2,	// (0x00010a65) bg_vkb2_fuc_pane_cp03_ParamLimits

0x5df2,	// (0x00010a65) bg_vkb2_fuc_pane_cp03

0x67d7,	// (0x0001144a) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x940e,	// (0x00014081) bg_vkb2_func_pane_g1

0x9416,	// (0x00014089) bg_vkb2_func_pane_g2

0x9426,	// (0x00014099) bg_vkb2_func_pane_g3

0x941e,	// (0x00014091) bg_vkb2_func_pane_g4

0x942e,	// (0x000140a1) bg_vkb2_func_pane_g5

0x9436,	// (0x000140a9) bg_vkb2_func_pane_g6

0x943e,	// (0x000140b1) bg_vkb2_func_pane_g7

0x9446,	// (0x000140b9) bg_vkb2_func_pane_g8

0x9406,	// (0x00014079) bg_vkb2_func_pane_g9

0x0008,

0xfdfe,	// (0x0001aa71) bg_vkb2_func_pane_g

0x5df2,	// (0x00010a65) bg_vkb2_fuc_pane_cp01_ParamLimits

0x5df2,	// (0x00010a65) bg_vkb2_fuc_pane_cp01

0x6779,	// (0x000113ec) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x6779,	// (0x000113ec) vkb2_top_cell_right_wide_pane_g1

0x5df2,	// (0x00010a65) bg_vkb2_fuc_pane_cp02_ParamLimits

0x5df2,	// (0x00010a65) bg_vkb2_fuc_pane_cp02

0x67d7,	// (0x0001144a) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x67d7,	// (0x0001144a) vkb2_top_cell_right_narrow_pane_g1

0xd7b2,	// (0x00018425) aid_touch_area_decrease_ParamLimits

0xd7b2,	// (0x00018425) aid_touch_area_decrease

0xd7d0,	// (0x00018443) aid_touch_area_increase_ParamLimits

0xd7d0,	// (0x00018443) aid_touch_area_increase

0xd7dc,	// (0x0001844f) aid_touch_area_mute_ParamLimits

0xd7dc,	// (0x0001844f) aid_touch_area_mute

0xd800,	// (0x00018473) aid_touch_area_slider_ParamLimits

0xd800,	// (0x00018473) aid_touch_area_slider

0xd8ec,	// (0x0001855f) popup_slider_window_g4_ParamLimits

0xd8ec,	// (0x0001855f) popup_slider_window_g4

0xd8f8,	// (0x0001856b) popup_slider_window_g5_ParamLimits

0xd8f8,	// (0x0001856b) popup_slider_window_g5

0xd91a,	// (0x0001858d) popup_slider_window_g6_ParamLimits

0xd91a,	// (0x0001858d) popup_slider_window_g6

0xd95a,	// (0x000185cd) popup_slider_window_t2_ParamLimits

0xd95a,	// (0x000185cd) popup_slider_window_t2

0x0001,

0xfcfa,	// (0x0001a96d) popup_slider_window_t_ParamLimits

0xfcfa,	// (0x0001a96d) popup_slider_window_t

0xd972,	// (0x000185e5) slider_pane_ParamLimits

0xd972,	// (0x000185e5) slider_pane

0xe695,	// (0x00019308) slider_pane_g1_ParamLimits

0xe695,	// (0x00019308) slider_pane_g1

0xe6a9,	// (0x0001931c) slider_pane_g2_ParamLimits

0xe6a9,	// (0x0001931c) slider_pane_g2

0xe6bf,	// (0x00019332) slider_pane_g3_ParamLimits

0xe6bf,	// (0x00019332) slider_pane_g3

0x0003,

0xfe11,	// (0x0001aa84) slider_pane_g_ParamLimits

0xfe11,	// (0x0001aa84) slider_pane_g

0x581b,	// (0x0001048e) popup_tb_float_extension_window_ParamLimits

0x581b,	// (0x0001048e) popup_tb_float_extension_window

0xe6eb,	// (0x0001935e) aid_size_cell_tb_float_ext

0x6de3,	// (0x00011a56) bg_popup_sub_window_cp28

0xe6f7,	// (0x0001936a) grid_tb_float_ext_pane

0xe701,	// (0x00019374) cell_tb_float_ext_pane_ParamLimits

0xe701,	// (0x00019374) cell_tb_float_ext_pane

0xe71b,	// (0x0001938e) cell_tb_float_ext_pane_g1

0xe724,	// (0x00019397) grid_highlight_pane_cp12

0x5f41,	// (0x00010bb4) cell_last_hwr_side_pane_ParamLimits

0x5f41,	// (0x00010bb4) cell_last_hwr_side_pane

0xbf71,	// (0x00016be4) cell_last_hwr_side_pane_g1

0xe72d,	// (0x000193a0) cell_last_hwr_side_pane_g2

0x0001,

0xfe1a,	// (0x0001aa8d) cell_last_hwr_side_pane_g

0x669f,	// (0x00011312) vkb2_area_bottom_space_btn_pane_ParamLimits

0x669f,	// (0x00011312) vkb2_area_bottom_space_btn_pane

0x6057,	// (0x00010cca) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xe1f5,	// (0x00018e68) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x6935,	// (0x000115a8) cell_vkb2_top_candi_pane_t1_ParamLimits

0x6954,	// (0x000115c7) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x6954,	// (0x000115c7) vkb2_area_bottom_space_btn_pane_g1

0x698e,	// (0x00011601) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x698e,	// (0x00011601) vkb2_area_bottom_space_btn_pane_g2

0x69c4,	// (0x00011637) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x69c4,	// (0x00011637) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe1f,	// (0x0001aa92) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe1f,	// (0x0001aa92) vkb2_area_bottom_space_btn_pane_g

0x5eb5,	// (0x00010b28) cel_fep_hwr_func_pane_ParamLimits

0x5eb5,	// (0x00010b28) cel_fep_hwr_func_pane

0x5ef1,	// (0x00010b64) cell_hwr_side_button_pane_ParamLimits

0x5ef1,	// (0x00010b64) cell_hwr_side_button_pane

0xdbb0,	// (0x00018823) aid_area_touch_clock_ParamLimits

0x717a,	// (0x00011ded) bg_uniindi_top_pane_ParamLimits

0xdbc2,	// (0x00018835) uniindi_top_pane_g1_ParamLimits

0xdbd8,	// (0x0001884b) uniindi_top_pane_g2_ParamLimits

0xdbe4,	// (0x00018857) uniindi_top_pane_g3_ParamLimits

0xdbf5,	// (0x00018868) uniindi_top_pane_g4_ParamLimits

0xfd32,	// (0x0001a9a5) uniindi_top_pane_g_ParamLimits

0xdc02,	// (0x00018875) uniindi_top_pane_t1_ParamLimits

0x717a,	// (0x00011ded) bg_vkb2_func_pane_cp01_ParamLimits

0x717a,	// (0x00011ded) bg_vkb2_func_pane_cp01

0xe736,	// (0x000193a9) cel_fep_hwr_func_pane_g1_ParamLimits

0xe736,	// (0x000193a9) cel_fep_hwr_func_pane_g1

0x717a,	// (0x00011ded) bg_vkb2_func_pane_cp02_ParamLimits

0x717a,	// (0x00011ded) bg_vkb2_func_pane_cp02

0xe736,	// (0x000193a9) cell_hwr_side_button_pane_g1_ParamLimits

0xe736,	// (0x000193a9) cell_hwr_side_button_pane_g1

0x9259,	// (0x00013ecc) status_pane_g4_ParamLimits

0x9259,	// (0x00013ecc) status_pane_g4

0x9273,	// (0x00013ee6) status_pane_t1

0xbcc5,	// (0x00016938) form2_midp_gauge_slider_cont_pane

0xbccd,	// (0x00016940) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbcdf,	// (0x00016952) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbcf1,	// (0x00016964) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf2,	// (0x0001a765) form2_midp_gauge_slider_pane_t_ParamLimits

0xbd03,	// (0x00016976) form2_midp_slider_pane_ParamLimits

0x630e,	// (0x00010f81) aid_size_cell_func_vkb2_ParamLimits

0x630e,	// (0x00010f81) aid_size_cell_func_vkb2

0xe6d7,	// (0x0001934a) slider_pane_g4_ParamLimits

0xe6d7,	// (0x0001934a) slider_pane_g4

0x6a0e,	// (0x00011681) form2_midp_gauge_slider_pane_t2_cp01

0x6a1c,	// (0x0001168f) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x6a1c,	// (0x0001168f) form2_midp_gauge_slider_pane_t3_cp01

0x6a39,	// (0x000116ac) form2_midp_slider_pane_cp01

0x6de3,	// (0x00011a56) navi_smil_pane

0xe76f,	// (0x000193e2) navi_smil_pane_g1

0xe777,	// (0x000193ea) navi_smil_pane_t1

0xe744,	// (0x000193b7) form2_midp_slider_pane_g1

0xe74d,	// (0x000193c0) form2_midp_slider_pane_g2

0xe755,	// (0x000193c8) form2_midp_slider_pane_g3

0xe744,	// (0x000193b7) form2_midp_slider_pane_g4

0xe75d,	// (0x000193d0) form2_midp_slider_pane_g5

0x0004,

0xfe28,	// (0x0001aa9b) form2_midp_slider_pane_g

0x69fe,	// (0x00011671) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x69fe,	// (0x00011671) vkb2_area_bottom_space_btn_pane_g4

0x9088,	// (0x00013cfb) lc0_navi_pane_ParamLimits

0x9088,	// (0x00013cfb) lc0_navi_pane

0x90fe,	// (0x00013d71) lc0_stat_indi_pane_ParamLimits

0x90fe,	// (0x00013d71) lc0_stat_indi_pane

0x9115,	// (0x00013d88) ls0_title_pane_ParamLimits

0x9115,	// (0x00013d88) ls0_title_pane

0x7cdb,	// (0x0001294e) bg_popup_sub_pane_cp14_ParamLimits

0xdb97,	// (0x0001880a) list_uniindi_pane_ParamLimits

0xdba3,	// (0x00018816) uniindi_top_pane_ParamLimits

0xdc3f,	// (0x000188b2) list_single_uniindi_pane_g1_ParamLimits

0xdc52,	// (0x000188c5) list_single_uniindi_pane_t1_ParamLimits

0x6a42,	// (0x000116b5) lc0_stat_clock_pane_ParamLimits

0x6a42,	// (0x000116b5) lc0_stat_clock_pane

0xe785,	// (0x000193f8) lc0_stat_indi_pane_g1_ParamLimits

0xe785,	// (0x000193f8) lc0_stat_indi_pane_g1

0xe792,	// (0x00019405) lc0_stat_indi_pane_g2_ParamLimits

0xe792,	// (0x00019405) lc0_stat_indi_pane_g2

0x0001,

0xfe33,	// (0x0001aaa6) lc0_stat_indi_pane_g_ParamLimits

0xfe33,	// (0x0001aaa6) lc0_stat_indi_pane_g

0x6a4f,	// (0x000116c2) lc0_uni_indicator_pane_ParamLimits

0x6a4f,	// (0x000116c2) lc0_uni_indicator_pane

0xe79f,	// (0x00019412) ls0_title_pane_g1_ParamLimits

0xe79f,	// (0x00019412) ls0_title_pane_g1

0xe7b3,	// (0x00019426) ls0_title_pane_t1_ParamLimits

0xe7b3,	// (0x00019426) ls0_title_pane_t1

0x6a5c,	// (0x000116cf) lc0_uni_indicator_pane_g1_ParamLimits

0x6a5c,	// (0x000116cf) lc0_uni_indicator_pane_g1

0xe7e9,	// (0x0001945c) lc0_stat_clock_pane_t1

0x4a4e,	// (0x0000f6c1) main_ai5_pane

0xe7f7,	// (0x0001946a) ai5_sk_pane_ParamLimits

0xe7f7,	// (0x0001946a) ai5_sk_pane

0xe804,	// (0x00019477) cell_ai5_widget_pane_ParamLimits

0xe804,	// (0x00019477) cell_ai5_widget_pane

0xe8b6,	// (0x00019529) aid_size_cell_widget_grid

0xe8cc,	// (0x0001953f) bg_ai5_widget_pane_ParamLimits

0xe8cc,	// (0x0001953f) bg_ai5_widget_pane

0xe940,	// (0x000195b3) cell_ai5_widget_pane_g2

0xe950,	// (0x000195c3) cell_ai5_widget_pane_g3

0xe967,	// (0x000195da) cell_ai5_widget_pane_g4

0xe973,	// (0x000195e6) cell_ai5_widget_pane_g5

0xe97f,	// (0x000195f2) cell_ai5_widget_pane_g6

0xe98b,	// (0x000195fe) cell_ai5_widget_pane_g7

0xe9d3,	// (0x00019646) cell_ai5_widget_pane_t1_ParamLimits

0xe9d3,	// (0x00019646) cell_ai5_widget_pane_t1

0xe9f0,	// (0x00019663) cell_ai5_widget_pane_t2_ParamLimits

0xe9f0,	// (0x00019663) cell_ai5_widget_pane_t2

0xea08,	// (0x0001967b) cell_ai5_widget_pane_t3_ParamLimits

0xea08,	// (0x0001967b) cell_ai5_widget_pane_t3

0xea20,	// (0x00019693) cell_ai5_widget_pane_t4_ParamLimits

0xea20,	// (0x00019693) cell_ai5_widget_pane_t4

0xea3d,	// (0x000196b0) cell_ai5_widget_pane_t5_ParamLimits

0xea3d,	// (0x000196b0) cell_ai5_widget_pane_t5

0xea5c,	// (0x000196cf) cell_ai5_widget_pane_t6_ParamLimits

0xea5c,	// (0x000196cf) cell_ai5_widget_pane_t6

0xea6e,	// (0x000196e1) cell_ai5_widget_pane_t7_ParamLimits

0xea6e,	// (0x000196e1) cell_ai5_widget_pane_t7

0xea87,	// (0x000196fa) cell_ai5_widget_pane_t8_ParamLimits

0xea87,	// (0x000196fa) cell_ai5_widget_pane_t8

0x0009,

0xfe4d,	// (0x0001aac0) cell_ai5_widget_pane_t_ParamLimits

0xfe4d,	// (0x0001aac0) cell_ai5_widget_pane_t

0xeadb,	// (0x0001974e) grid_ai5_widget_pane

0x7cdb,	// (0x0001294e) highlight_cell_ai5_widget_pane_ParamLimits

0x7cdb,	// (0x0001294e) highlight_cell_ai5_widget_pane

0xeaf2,	// (0x00019765) ai5_sk_left_pane

0xeafc,	// (0x0001976f) ai5_sk_middle_pane

0xeb06,	// (0x00019779) ai5_sk_right_pane

0xeb10,	// (0x00019783) bg_ai5_widget_pane_g1_ParamLimits

0xeb10,	// (0x00019783) bg_ai5_widget_pane_g1

0xeb1c,	// (0x0001978f) bg_ai5_widget_pane_g2_ParamLimits

0xeb1c,	// (0x0001978f) bg_ai5_widget_pane_g2

0xeb28,	// (0x0001979b) bg_ai5_widget_pane_g3_ParamLimits

0xeb28,	// (0x0001979b) bg_ai5_widget_pane_g3

0xeb34,	// (0x000197a7) bg_ai5_widget_pane_g4_ParamLimits

0xeb34,	// (0x000197a7) bg_ai5_widget_pane_g4

0xeb40,	// (0x000197b3) bg_ai5_widget_pane_g5_ParamLimits

0xeb40,	// (0x000197b3) bg_ai5_widget_pane_g5

0xeb4c,	// (0x000197bf) bg_ai5_widget_pane_g6_ParamLimits

0xeb4c,	// (0x000197bf) bg_ai5_widget_pane_g6

0xeb58,	// (0x000197cb) bg_ai5_widget_pane_g7_ParamLimits

0xeb58,	// (0x000197cb) bg_ai5_widget_pane_g7

0xeb64,	// (0x000197d7) bg_ai5_widget_pane_g8_ParamLimits

0xeb64,	// (0x000197d7) bg_ai5_widget_pane_g8

0xeb70,	// (0x000197e3) bg_ai5_widget_pane_g9_ParamLimits

0xeb70,	// (0x000197e3) bg_ai5_widget_pane_g9

0x0008,

0xfe62,	// (0x0001aad5) bg_ai5_widget_pane_g_ParamLimits

0xfe62,	// (0x0001aad5) bg_ai5_widget_pane_g

0xeba2,	// (0x00019815) cell_shortcut_ai5_widget_pane_ParamLimits

0xeba2,	// (0x00019815) cell_shortcut_ai5_widget_pane

0x8b74,	// (0x000137e7) bg_cell_shortcut_ai5_widget_pane

0xebb3,	// (0x00019826) cell_grid_ai5_widget_pane_g1

0x8b74,	// (0x000137e7) highlight_cell_shortcut_ai5_widget_pane

0x940e,	// (0x00014081) ai5_sk_left_pane_g1

0xebbc,	// (0x0001982f) ai5_sk_left_pane_g2

0xebc4,	// (0x00019837) ai5_sk_left_pane_g3

0xebcc,	// (0x0001983f) ai5_sk_left_pane_g4

0x0003,

0xfe75,	// (0x0001aae8) ai5_sk_left_pane_g

0xebd4,	// (0x00019847) ai5_sk_left_pane_t1

0x9416,	// (0x00014089) ai5_sk_right_pane_g1

0xebe2,	// (0x00019855) ai5_sk_right_pane_g2

0xebea,	// (0x0001985d) ai5_sk_right_pane_g3

0xebf2,	// (0x00019865) ai5_sk_right_pane_g4

0x0003,

0xfe7e,	// (0x0001aaf1) ai5_sk_right_pane_g

0xebfa,	// (0x0001986d) ai5_sk_right_pane_t1

0x9416,	// (0x00014089) ai5_sk_middle_pane_g1

0x940e,	// (0x00014081) ai5_sk_middle_pane_g2

0x942e,	// (0x000140a1) ai5_sk_middle_pane_g3

0xebea,	// (0x0001985d) ai5_sk_middle_pane_g4

0xebc4,	// (0x00019837) ai5_sk_middle_pane_g5

0xec08,	// (0x0001987b) ai5_sk_middle_pane_g6

0xec10,	// (0x00019883) ai5_sk_middle_pane_g7

0x0006,

0xfe87,	// (0x0001aafa) ai5_sk_middle_pane_g

0x8f14,	// (0x00013b87) aid_touch_area_size_lc0_ParamLimits

0x8f14,	// (0x00013b87) aid_touch_area_size_lc0

0x6086,	// (0x00010cf9) cell_hwr_candidate_pane_t1_ParamLimits

0x8f30,	// (0x00013ba3) aid_touch_navi_pane

0x9203,	// (0x00013e76) status_dt_navi_pane_ParamLimits

0x9203,	// (0x00013e76) status_dt_navi_pane

0x9210,	// (0x00013e83) status_dt_sta_pane_ParamLimits

0x9210,	// (0x00013e83) status_dt_sta_pane

0xec18,	// (0x0001988b) dt_sta_controll_pane

0xec25,	// (0x00019898) dt_sta_indi_pane

0xec36,	// (0x000198a9) dt_sta_title_pane

0x717a,	// (0x00011ded) bg_dt_sta_indi_pane_ParamLimits

0x717a,	// (0x00011ded) bg_dt_sta_indi_pane

0xec49,	// (0x000198bc) dt_sta_battery_pane

0xec51,	// (0x000198c4) dt_sta_indi_pane_g1

0xec5a,	// (0x000198cd) dt_sta_indi_pane_g2

0xec63,	// (0x000198d6) dt_sta_indi_pane_g3

0x0002,

0xfe96,	// (0x0001ab09) dt_sta_indi_pane_g

0xec6c,	// (0x000198df) dt_sta_signal_pane

0x7cdb,	// (0x0001294e) bg_dt_sta_title_pane_ParamLimits

0x7cdb,	// (0x0001294e) bg_dt_sta_title_pane

0xec75,	// (0x000198e8) dt_sta_title_pane_g1

0xec7d,	// (0x000198f0) dt_sta_title_pane_t1_ParamLimits

0xec7d,	// (0x000198f0) dt_sta_title_pane_t1

0x6de3,	// (0x00011a56) bg_dt_sta_control_pane

0xec92,	// (0x00019905) dt_sta_controll_pane_g1

0xec9b,	// (0x0001990e) bg_dt_sta_title_pane_g1

0xeca4,	// (0x00019917) bg_dt_sta_title_pane_g2

0xecad,	// (0x00019920) bg_dt_sta_title_pane_g3

0x0002,

0xfe9d,	// (0x0001ab10) bg_dt_sta_title_pane_g

0xbf71,	// (0x00016be4) bg_dt_sta_indi_pane_g1

0xecb6,	// (0x00019929) dt_sta_signal_pane_g1

0xecbe,	// (0x00019931) dt_sta_signal_pane_g2

0x0001,

0xfea4,	// (0x0001ab17) dt_sta_signal_pane_g

0xecc6,	// (0x00019939) dt_sta_battery_pane_g1

0xeccf,	// (0x00019942) dt_sta_battery_pane_t1

0xbf71,	// (0x00016be4) bg_dt_sta_control_pane_g1

0x85e4,	// (0x00013257) fep_china_uni_eep_pane

0x85ec,	// (0x0001325f) fep_china_uni_entry_pane_ParamLimits

0x85fc,	// (0x0001326f) popup_fep_china_uni_window_g1_ParamLimits

0x860c,	// (0x0001327f) popup_fep_china_uni_window_g2_ParamLimits

0x860c,	// (0x0001327f) popup_fep_china_uni_window_g2

0x0001,

0xf718,	// (0x0001a38b) popup_fep_china_uni_window_g_ParamLimits

0xf718,	// (0x0001a38b) popup_fep_china_uni_window_g

0xecde,	// (0x00019951) fep_china_uni_eep_pane_g1

0xece6,	// (0x00019959) fep_china_uni_eep_pane_t1

0xe766,	// (0x000193d9) aid_touch_area_size_smil_player

0x9080,	// (0x00013cf3) lc0_clock_pane

0x9267,	// (0x00013eda) status_pane_g5_ParamLimits

0x9267,	// (0x00013eda) status_pane_g5

0x54e0,	// (0x00010153) popup_keymap_window

0x9225,	// (0x00013e98) status_icon_pane

0xe950,	// (0x000195c3) cell_ai5_widget_pane_g3_ParamLimits

0xe967,	// (0x000195da) cell_ai5_widget_pane_g4_ParamLimits

0xe973,	// (0x000195e6) cell_ai5_widget_pane_g5_ParamLimits

0xe997,	// (0x0001960a) cell_ai5_widget_pane_g8_ParamLimits

0xe997,	// (0x0001960a) cell_ai5_widget_pane_g8

0xe9ab,	// (0x0001961e) cell_ai5_widget_pane_g9_ParamLimits

0xe9ab,	// (0x0001961e) cell_ai5_widget_pane_g9

0xe9bf,	// (0x00019632) cell_ai5_widget_pane_g10_ParamLimits

0xe9bf,	// (0x00019632) cell_ai5_widget_pane_g10

0xecf5,	// (0x00019968) status_icon_pane_g1

0x6de3,	// (0x00011a56) bg_popup_sub_pane_cp13

0xecfd,	// (0x00019970) popup_keymap_window_t1

0x8e49,	// (0x00013abc) control_pane_g6_ParamLimits

0x8e49,	// (0x00013abc) control_pane_g6

0x8e56,	// (0x00013ac9) control_pane_g7_ParamLimits

0x8e56,	// (0x00013ac9) control_pane_g7

0x8e63,	// (0x00013ad6) control_pane_g8_ParamLimits

0x8e63,	// (0x00013ad6) control_pane_g8

0xec18,	// (0x0001988b) dt_sta_controll_pane_ParamLimits

0xec25,	// (0x00019898) dt_sta_indi_pane_ParamLimits

0xec36,	// (0x000198a9) dt_sta_title_pane_ParamLimits

0x7698,	// (0x0001230b) aid_size_touch_scroll_bar_cale

0x4b27,	// (0x0000f79a) popup_discreet_window_ParamLimits

0x4b27,	// (0x0000f79a) popup_discreet_window

0x4baf,	// (0x0000f822) popup_sk_window

0x9b66,	// (0x000147d9) bg_popup_sub_pane_cp28_ParamLimits

0x9b66,	// (0x000147d9) bg_popup_sub_pane_cp28

0xed0b,	// (0x0001997e) popup_discreet_window_g1_ParamLimits

0xed0b,	// (0x0001997e) popup_discreet_window_g1

0xed2b,	// (0x0001999e) popup_discreet_window_t1_ParamLimits

0xed2b,	// (0x0001999e) popup_discreet_window_t1

0xed49,	// (0x000199bc) popup_discreet_window_t2_ParamLimits

0xed49,	// (0x000199bc) popup_discreet_window_t2

0x0002,

0xfea9,	// (0x0001ab1c) popup_discreet_window_t_ParamLimits

0xfea9,	// (0x0001ab1c) popup_discreet_window_t

0x6a70,	// (0x000116e3) popup_sk_window_g1

0x6a7a,	// (0x000116ed) popup_sk_window_g2

0x0001,

0xfeb0,	// (0x0001ab23) popup_sk_window_g

0x6a82,	// (0x000116f5) popup_sk_window_t1

0x6a90,	// (0x00011703) popup_sk_window_t1_copy1

0xe940,	// (0x000195b3) cell_ai5_widget_pane_g2_ParamLimits

0xea99,	// (0x0001970c) cell_ai5_widget_pane_t9_ParamLimits

0xea99,	// (0x0001970c) cell_ai5_widget_pane_t9

0x6de3,	// (0x00011a56) main_fep_fshwr2_pane

0x6a9e,	// (0x00011711) aid_fshwr2_btn_pane

0x6aaa,	// (0x0001171d) aid_fshwr2_syb_pane

0x6ab6,	// (0x00011729) aid_fshwr2_txt_pane

0x6ac2,	// (0x00011735) fshwr2_func_candi_pane

0x6ad7,	// (0x0001174a) fshwr2_hwr_syb_pane

0x6ae7,	// (0x0001175a) fshwr2_icf_pane

0x4a4e,	// (0x0000f6c1) fshwr2_icf_bg_pane

0x6b10,	// (0x00011783) fshwr2_icf_pane_t1_ParamLimits

0x6b10,	// (0x00011783) fshwr2_icf_pane_t1

0x84d2,	// (0x00013145) fshwr2_func_candi_pane_g1

0xed9b,	// (0x00019a0e) fshwr2_func_candi_row_pane_ParamLimits

0xed9b,	// (0x00019a0e) fshwr2_func_candi_row_pane

0x6b28,	// (0x0001179b) cell_fshwr2_syb_pane_ParamLimits

0x6b28,	// (0x0001179b) cell_fshwr2_syb_pane

0x6057,	// (0x00010cca) fshwr2_hwr_syb_pane_g1_ParamLimits

0x6057,	// (0x00010cca) fshwr2_hwr_syb_pane_g1

0x4a4e,	// (0x0000f6c1) bg_popup_call_pane_cp01

0x6b3e,	// (0x000117b1) fshwr2_func_candi_cell_pane_ParamLimits

0x6b3e,	// (0x000117b1) fshwr2_func_candi_cell_pane

0xedab,	// (0x00019a1e) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xedab,	// (0x00019a1e) fshwr2_func_candi_cell_bg_pane

0x6b89,	// (0x000117fc) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x6b89,	// (0x000117fc) fshwr2_func_candi_cell_pane_g1

0x6bb1,	// (0x00011824) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x6bb1,	// (0x00011824) fshwr2_func_candi_cell_pane_t1

0x4a4e,	// (0x0000f6c1) bg_button_pane_cp08

0xedb7,	// (0x00019a2a) cell_fshwr2_syb_bg_pane

0x6bc4,	// (0x00011837) cell_fshwr2_syb_bg_pane_g1

0x6bcc,	// (0x0001183f) cell_fshwr2_syb_bg_pane_t1

0x7cdb,	// (0x0001294e) main_tmo_pane

0xa681,	// (0x000152f4) uni_indicator_pane_g1_ParamLimits

0xa697,	// (0x0001530a) uni_indicator_pane_g2_ParamLimits

0xa6ad,	// (0x00015320) uni_indicator_pane_g3_ParamLimits

0xa6c0,	// (0x00015333) uni_indicator_pane_g4_ParamLimits

0xa6c0,	// (0x00015333) uni_indicator_pane_g4

0xa6d4,	// (0x00015347) uni_indicator_pane_g5_ParamLimits

0xa6d4,	// (0x00015347) uni_indicator_pane_g5

0xa6d4,	// (0x00015347) uni_indicator_pane_g6_ParamLimits

0xa6d4,	// (0x00015347) uni_indicator_pane_g6

0xf91c,	// (0x0001a58f) uni_indicator_pane_g_ParamLimits

0xd78e,	// (0x00018401) popup_tmo_note_window_ParamLimits

0xd78e,	// (0x00018401) popup_tmo_note_window

0x62f0,	// (0x00010f63) fshwr2_bg_pane

0x6ba2,	// (0x00011815) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x6ba2,	// (0x00011815) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeb5,	// (0x0001ab28) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeb5,	// (0x0001ab28) fshwr2_func_candi_cell_pane_g

0x603f,	// (0x00010cb2) bg_popup_window_pane_cp01

0x6bdb,	// (0x0001184e) bg_popup_window_pane_g1_cp01

0xedbf,	// (0x00019a32) bg_popup_window_pane_cp22_ParamLimits

0xedbf,	// (0x00019a32) bg_popup_window_pane_cp22

0xedcd,	// (0x00019a40) listscroll_tmo_link_pane_ParamLimits

0xedcd,	// (0x00019a40) listscroll_tmo_link_pane

0xee0d,	// (0x00019a80) popup_tmo_note_window_g1_ParamLimits

0xee0d,	// (0x00019a80) popup_tmo_note_window_g1

0xee1a,	// (0x00019a8d) tmo_note_info_pane_ParamLimits

0xee1a,	// (0x00019a8d) tmo_note_info_pane

0xee34,	// (0x00019aa7) list_tmo_note_info_pane_g1_ParamLimits

0xee34,	// (0x00019aa7) list_tmo_note_info_pane_g1

0xee4b,	// (0x00019abe) list_tmo_note_info_pane_g2_ParamLimits

0xee4b,	// (0x00019abe) list_tmo_note_info_pane_g2

0x0001,

0xfeba,	// (0x0001ab2d) list_tmo_note_info_pane_g_ParamLimits

0xfeba,	// (0x0001ab2d) list_tmo_note_info_pane_g

0xee67,	// (0x00019ada) list_tmo_note_info_text_pane_ParamLimits

0xee67,	// (0x00019ada) list_tmo_note_info_text_pane

0xeee8,	// (0x00019b5b) list_tmo_link_pane

0xeef5,	// (0x00019b68) scroll_pane_cp20

0xef02,	// (0x00019b75) list_single_tmo_link_pane_ParamLimits

0xef02,	// (0x00019b75) list_single_tmo_link_pane

0xef12,	// (0x00019b85) list_single_tmo_link_pane_t1

0xef20,	// (0x00019b93) list_tmo_note_info_text_pane_t1_ParamLimits

0xef20,	// (0x00019b93) list_tmo_note_info_text_pane_t1

0x7f09,	// (0x00012b7c) aid_size_touch_scroll_bar_cp01_ParamLimits

0x7f09,	// (0x00012b7c) aid_size_touch_scroll_bar_cp01

0x7d7e,	// (0x000129f1) aid_size_touch_slider_marker

0x4b97,	// (0x0000f80a) popup_settings_window_ParamLimits

0x4b97,	// (0x0000f80a) popup_settings_window

0x8ee0,	// (0x00013b53) popup_candi_list_indi_window

0x8f30,	// (0x00013ba3) aid_touch_navi_pane_ParamLimits

0x624b,	// (0x00010ebe) rs_clock_indi_pane

0x6254,	// (0x00010ec7) sctrl_sk_bottom_pane_ParamLimits

0x6265,	// (0x00010ed8) sctrl_sk_top_pane_ParamLimits

0x6368,	// (0x00010fdb) popup_fep_tooltip_window

0xe8b6,	// (0x00019529) aid_size_cell_widget_grid_ParamLimits

0xe92b,	// (0x0001959e) cell_ai5_widget_pane_g1_ParamLimits

0xe92b,	// (0x0001959e) cell_ai5_widget_pane_g1

0xe97f,	// (0x000195f2) cell_ai5_widget_pane_g6_ParamLimits

0xe98b,	// (0x000195fe) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe38,	// (0x0001aaab) cell_ai5_widget_pane_g_ParamLimits

0xfe38,	// (0x0001aaab) cell_ai5_widget_pane_g

0xeabd,	// (0x00019730) cell_ai5_widget_pane_t10_ParamLimits

0xeabd,	// (0x00019730) cell_ai5_widget_pane_t10

0xeadb,	// (0x0001974e) grid_ai5_widget_pane_ParamLimits

0xeb7c,	// (0x000197ef) cell_contacts_ai5_widget_pane_ParamLimits

0xeb7c,	// (0x000197ef) cell_contacts_ai5_widget_pane

0xed5e,	// (0x000199d1) popup_discreet_window_t3_ParamLimits

0xed5e,	// (0x000199d1) popup_discreet_window_t3

0x6afc,	// (0x0001176f) popup_fshwr2_char_preview_window_ParamLimits

0x6afc,	// (0x0001176f) popup_fshwr2_char_preview_window

0xee85,	// (0x00019af8) tmo_note_info_pane_t1

0xee9a,	// (0x00019b0d) tmo_note_info_pane_t2

0xeeaf,	// (0x00019b22) tmo_note_info_pane_t3

0xeec4,	// (0x00019b37) tmo_note_info_pane_t4

0xeed6,	// (0x00019b49) tmo_note_info_pane_t5

0x0004,

0xfebf,	// (0x0001ab32) tmo_note_info_pane_t

0xeee8,	// (0x00019b5b) list_tmo_link_pane_ParamLimits

0xeef5,	// (0x00019b68) scroll_pane_cp20_ParamLimits

0x4a4e,	// (0x0000f6c1) bg_popup_fep_char_preview_window_cp01

0xef39,	// (0x00019bac) popup_fshwr2_char_preview_window_t1

0xef47,	// (0x00019bba) popup_candi_list_indi_window_g1

0xef50,	// (0x00019bc3) bg_cell_contacts_ai5_widget_pane

0xef5c,	// (0x00019bcf) cell_contacts_ai5_widget_pane_g1

0xc7b4,	// (0x00017427) cell_contacts_ai5_widget_pane_g2

0xef71,	// (0x00019be4) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeca,	// (0x0001ab3d) cell_contacts_ai5_widget_pane_g

0xef7d,	// (0x00019bf0) cell_contacts_ai5_widget_pane_t1

0x7cdb,	// (0x0001294e) highlight_cell_shortcut_ai5_widget_pane_cp01

0xeff4,	// (0x00019c67) settings_container_pane

0x8b74,	// (0x000137e7) listscroll_set_pane_copy1

0xb33d,	// (0x00015fb0) scroll_pane_cp121_copy1

0x9917,	// (0x0001458a) set_content_pane_copy1

0xf000,	// (0x00019c73) aid_height_set_list_copy1_ParamLimits

0xf000,	// (0x00019c73) aid_height_set_list_copy1

0xa8f4,	// (0x00015567) aid_size_parent_copy1_ParamLimits

0xa8f4,	// (0x00015567) aid_size_parent_copy1

0xf00c,	// (0x00019c7f) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf00c,	// (0x00019c7f) button_value_adjust_pane_cp6_copy1

0x8ec6,	// (0x00013b39) list_highlight_pane_cp2_copy1_ParamLimits

0x8ec6,	// (0x00013b39) list_highlight_pane_cp2_copy1

0xf020,	// (0x00019c93) list_set_pane_copy1_ParamLimits

0xf020,	// (0x00019c93) list_set_pane_copy1

0xef8f,	// (0x00019c02) main_pane_set_t1_copy1_ParamLimits

0xef8f,	// (0x00019c02) main_pane_set_t1_copy1

0xefc9,	// (0x00019c3c) main_pane_set_t2_copy1_ParamLimits

0xefc9,	// (0x00019c3c) main_pane_set_t2_copy1

0xf0cd,	// (0x00019d40) main_pane_set_t3_copy1

0xf0db,	// (0x00019d4e) main_pane_set_t4_copy1

0xefe8,	// (0x00019c5b) set_content_pane_g1_copy1_ParamLimits

0xefe8,	// (0x00019c5b) set_content_pane_g1_copy1

0xf0e9,	// (0x00019d5c) setting_code_pane_copy1

0xf0f1,	// (0x00019d64) setting_slider_graphic_pane_copy1

0xf0f1,	// (0x00019d64) setting_slider_pane_copy1

0xf0f1,	// (0x00019d64) setting_text_pane_copy1

0xf0f1,	// (0x00019d64) setting_volume_pane_copy1

0xf0e9,	// (0x00019d5c) settings_code_pane_cp2_copy1

0xf0f9,	// (0x00019d6c) settings_code_pane_cp_copy1_ParamLimits

0xf0f9,	// (0x00019d6c) settings_code_pane_cp_copy1

0x6be4,	// (0x00011857) volume_set_pane_copy1

0xf10d,	// (0x00019d80) volume_set_pane_g10_copy1

0xf115,	// (0x00019d88) volume_set_pane_g1_copy1

0xf11d,	// (0x00019d90) volume_set_pane_g2_copy1

0xf125,	// (0x00019d98) volume_set_pane_g3_copy1

0xf12d,	// (0x00019da0) volume_set_pane_g4_copy1

0xf135,	// (0x00019da8) volume_set_pane_g5_copy1

0xf13d,	// (0x00019db0) volume_set_pane_g6_copy1

0xf145,	// (0x00019db8) volume_set_pane_g7_copy1

0xf14d,	// (0x00019dc0) volume_set_pane_g8_copy1

0xf155,	// (0x00019dc8) volume_set_pane_g9_copy1

0x6ed7,	// (0x00011b4a) bg_set_opt_pane_cp_copy1_ParamLimits

0x6ed7,	// (0x00011b4a) bg_set_opt_pane_cp_copy1

0x6bec,	// (0x0001185f) setting_slider_pane_t1_copy1_ParamLimits

0x6bec,	// (0x0001185f) setting_slider_pane_t1_copy1

0x6c0a,	// (0x0001187d) setting_slider_pane_t2_copy1_ParamLimits

0x6c0a,	// (0x0001187d) setting_slider_pane_t2_copy1

0x6c24,	// (0x00011897) setting_slider_pane_t3_copy1_ParamLimits

0x6c24,	// (0x00011897) setting_slider_pane_t3_copy1

0x6c3c,	// (0x000118af) slider_set_pane_copy1_ParamLimits

0x6c3c,	// (0x000118af) slider_set_pane_copy1

0x7dfe,	// (0x00012a71) set_opt_bg_pane_g1_copy2

0x7e06,	// (0x00012a79) set_opt_bg_pane_g2_copy2

0xf15d,	// (0x00019dd0) set_opt_bg_pane_g3_copy2

0x7e16,	// (0x00012a89) set_opt_bg_pane_g4_copy2

0x7e1e,	// (0x00012a91) set_opt_bg_pane_g5_copy2

0x7e26,	// (0x00012a99) set_opt_bg_pane_g6_copy2

0xf167,	// (0x00019dda) set_opt_bg_pane_g7_copy2

0xf16f,	// (0x00019de2) set_opt_bg_pane_g8_copy2

0xf179,	// (0x00019dec) set_opt_bg_pane_g9_copy2

0x6c52,	// (0x000118c5) aid_size_touch_slider_mark_copy1_ParamLimits

0x6c52,	// (0x000118c5) aid_size_touch_slider_mark_copy1

0xf183,	// (0x00019df6) slider_set_pane_g1_copy1

0x6c66,	// (0x000118d9) slider_set_pane_g2_copy1

0x5c80,	// (0x000108f3) slider_set_pane_g3_copy1_ParamLimits

0x5c80,	// (0x000108f3) slider_set_pane_g3_copy1

0x5c94,	// (0x00010907) slider_set_pane_g4_copy1_ParamLimits

0x5c94,	// (0x00010907) slider_set_pane_g4_copy1

0x5cac,	// (0x0001091f) slider_set_pane_g5_copy1_ParamLimits

0x5cac,	// (0x0001091f) slider_set_pane_g5_copy1

0x5c80,	// (0x000108f3) slider_set_pane_g6_copy1_ParamLimits

0x5c80,	// (0x000108f3) slider_set_pane_g6_copy1

0x6c6e,	// (0x000118e1) slider_set_pane_g7_copy1_ParamLimits

0x6c6e,	// (0x000118e1) slider_set_pane_g7_copy1

0x6df7,	// (0x00011a6a) bg_set_opt_pane_cp2_copy1

0xf18c,	// (0x00019dff) setting_slider_graphic_pane_g1_copy1

0xf195,	// (0x00019e08) setting_slider_graphic_pane_t1_copy1

0xf1a5,	// (0x00019e18) setting_slider_graphic_pane_t2_copy1

0xf1b5,	// (0x00019e28) slider_set_pane_cp_copy1

0xf1c5,	// (0x00019e38) input_focus_pane_cp1_copy1

0xf1ce,	// (0x00019e41) list_set_text_pane_copy1

0xf1d6,	// (0x00019e49) setting_text_pane_g1_copy1

0x6f30,	// (0x00011ba3) set_text_pane_t1_copy1

0xf1c5,	// (0x00019e38) input_focus_pane_cp2_copy1

0xf1d6,	// (0x00019e49) setting_code_pane_g1_copy1

0xf1df,	// (0x00019e52) setting_code_pane_t1_copy1

0xf1ed,	// (0x00019e60) list_set_graphic_pane_copy1

0x6df7,	// (0x00011a6a) bg_set_opt_pane_cp4_copy1

0x886f,	// (0x000134e2) list_set_graphic_pane_g1_copy1_ParamLimits

0x886f,	// (0x000134e2) list_set_graphic_pane_g1_copy1

0xf200,	// (0x00019e73) list_set_graphic_pane_g2_copy1

0x8887,	// (0x000134fa) list_set_graphic_pane_t1_copy1_ParamLimits

0x8887,	// (0x000134fa) list_set_graphic_pane_t1_copy1

0xbf71,	// (0x00016be4) rs_clock_indi_pane_g1

0xf208,	// (0x00019e7b) rs_clock_indi_pane_t1

0xf216,	// (0x00019e89) rs_indi_pane

0xf21e,	// (0x00019e91) rs_indi_pane_g1

0xf227,	// (0x00019e9a) rs_indi_pane_g2

0xf230,	// (0x00019ea3) rs_indi_pane_g3

0x0002,

0xfed1,	// (0x0001ab44) rs_indi_pane_g

0x8b74,	// (0x000137e7) bg_popup_preview_window_pane_cp03

0xf239,	// (0x00019eac) popup_fep_tooltip_window_t1

0xcde9,	// (0x00017a5c) popup_note2_window_g2_ParamLimits

0xcde9,	// (0x00017a5c) popup_note2_window_g2

0x0001,

0xfc6a,	// (0x0001a8dd) popup_note2_window_g_ParamLimits

0xfc6a,	// (0x0001a8dd) popup_note2_window_g

0xd3c7,	// (0x0001803a) bg_popup_sub_pane_cp11_ParamLimits

0xd3d4,	// (0x00018047) cell_ai3_links_pane_g1_ParamLimits

0xd3eb,	// (0x0001805e) cell_ai3_links_pane_t1

0x6f30,	// (0x00011ba3) set_text_pane_t1_copy1_ParamLimits

0x8a85,	// (0x000136f8) cell_graphic_popup_pane_cp2_ParamLimits

0x8a85,	// (0x000136f8) cell_graphic_popup_pane_cp2

0xf247,	// (0x00019eba) cell_graphic_popup_pane_g1_cp2

0x74ab,	// (0x0001211e) cell_graphic_popup_pane_g2_cp2

0xf24f,	// (0x00019ec2) cell_graphic_popup_pane_g3_cp2

0xf257,	// (0x00019eca) cell_graphic_popup_pane_t2_cp2

0x74bc,	// (0x0001212f) grid_highlight_pane_cp3_cp2

0x81ef,	// (0x00012e62) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x7cdb,	// (0x0001294e) main_tmo_pane_ParamLimits

0xd782,	// (0x000183f5) popup_tmo_big_image_note_window

0xe91a,	// (0x0001958d) cell_ai5_widget_list_pane

0xe922,	// (0x00019595) cell_ai5_widget_lrg_icon_pane

0xee85,	// (0x00019af8) tmo_note_info_pane_t1_ParamLimits

0xee9a,	// (0x00019b0d) tmo_note_info_pane_t2_ParamLimits

0xeeaf,	// (0x00019b22) tmo_note_info_pane_t3_ParamLimits

0xeec4,	// (0x00019b37) tmo_note_info_pane_t4_ParamLimits

0xeed6,	// (0x00019b49) tmo_note_info_pane_t5_ParamLimits

0xfebf,	// (0x0001ab32) tmo_note_info_pane_t_ParamLimits

0xeff4,	// (0x00019c67) settings_container_pane_ParamLimits

0xf1bd,	// (0x00019e30) indicator_popup_pane_cp5

0xf1bd,	// (0x00019e30) indicator_popup_pane_cp6

0xf1ed,	// (0x00019e60) list_set_graphic_pane_copy1_ParamLimits

0x6de3,	// (0x00011a56) bg_popup_window_pane_cp23

0xf265,	// (0x00019ed8) popup_tmo_big_image_note_window_g1

0xf26f,	// (0x00019ee2) popup_tmo_big_image_note_window_t1

0xf27f,	// (0x00019ef2) popup_tmo_big_image_note_window_t2

0xf28f,	// (0x00019f02) popup_tmo_big_image_note_window_t3

0x0002,

0xfed8,	// (0x0001ab4b) popup_tmo_big_image_note_window_t

0xbf71,	// (0x00016be4) cell_ai5_widget_lrg_icon_pane_g1

0xf29f,	// (0x00019f12) cell_ai5_widget_lrg_icon_pane_t1

0xf2ad,	// (0x00019f20) cell_ai5_widget_list_row_pane_ParamLimits

0xf2ad,	// (0x00019f20) cell_ai5_widget_list_row_pane

0xf2c4,	// (0x00019f37) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf2c4,	// (0x00019f37) cell_ai5_widget_list_row_pane_g1

0xf2d1,	// (0x00019f44) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf2d1,	// (0x00019f44) cell_ai5_widget_list_row_pane_t1

0xf302,	// (0x00019f75) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf302,	// (0x00019f75) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfedf,	// (0x0001ab52) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfedf,	// (0x0001ab52) cell_ai5_widget_list_row_pane_t

0x4a4e,	// (0x0000f6c1) main_fep_vtchi_ss_pane

0xf346,	// (0x00019fb9) popup_fep_char_pre_window

0xf34e,	// (0x00019fc1) popup_fep_ituss_window

0xf36f,	// (0x00019fe2) popup_fep_vkbss_window

0xf399,	// (0x0001a00c) grid_vkbss_keypad_pane_ParamLimits

0xf399,	// (0x0001a00c) grid_vkbss_keypad_pane

0xf3a5,	// (0x0001a018) ituss_keypad_pane

0x6c90,	// (0x00011903) aid_vkbss_key_offset_ParamLimits

0x6c90,	// (0x00011903) aid_vkbss_key_offset

0x6c9c,	// (0x0001190f) cell_vkbss_key_pane_ParamLimits

0x6c9c,	// (0x0001190f) cell_vkbss_key_pane

0xf3b4,	// (0x0001a027) bg_cell_vkbss_key_g1_ParamLimits

0xf3b4,	// (0x0001a027) bg_cell_vkbss_key_g1

0xf3c0,	// (0x0001a033) cell_vkbss_key_3p_pane_ParamLimits

0xf3c0,	// (0x0001a033) cell_vkbss_key_3p_pane

0xf3d4,	// (0x0001a047) cell_vkbss_key_g1_ParamLimits

0xf3d4,	// (0x0001a047) cell_vkbss_key_g1

0xf3e8,	// (0x0001a05b) cell_vkbss_key_t1_ParamLimits

0xf3e8,	// (0x0001a05b) cell_vkbss_key_t1

0x6cb2,	// (0x00011925) cell_ituss_key_pane_ParamLimits

0x6cb2,	// (0x00011925) cell_ituss_key_pane

0xf413,	// (0x0001a086) bg_cell_ituss_key_g1_ParamLimits

0xf413,	// (0x0001a086) bg_cell_ituss_key_g1

0xf41f,	// (0x0001a092) cell_ituss_key_pane_g1_ParamLimits

0xf41f,	// (0x0001a092) cell_ituss_key_pane_g1

0x6cc3,	// (0x00011936) cell_ituss_key_pane_g2_ParamLimits

0x6cc3,	// (0x00011936) cell_ituss_key_pane_g2

0x0002,

0xfee6,	// (0x0001ab59) cell_ituss_key_pane_g_ParamLimits

0xfee6,	// (0x0001ab59) cell_ituss_key_pane_g

0x6cef,	// (0x00011962) cell_ituss_key_t1_ParamLimits

0x6cef,	// (0x00011962) cell_ituss_key_t1

0x6d29,	// (0x0001199c) cell_ituss_key_t2_ParamLimits

0x6d29,	// (0x0001199c) cell_ituss_key_t2

0x6d5a,	// (0x000119cd) cell_ituss_key_t3_ParamLimits

0x6d5a,	// (0x000119cd) cell_ituss_key_t3

0x6d29,	// (0x0001199c) cell_ituss_key_t4_ParamLimits

0x6d29,	// (0x0001199c) cell_ituss_key_t4

0x0004,

0xfeed,	// (0x0001ab60) cell_ituss_key_t_ParamLimits

0xfeed,	// (0x0001ab60) cell_ituss_key_t

0xf44b,	// (0x0001a0be) cell_vkbss_key_3p_pane_g1

0xf453,	// (0x0001a0c6) cell_vkbss_key_3p_pane_g2

0xf45b,	// (0x0001a0ce) cell_vkbss_key_3p_pane_g3

0x0002,

0xfef8,	// (0x0001ab6b) cell_vkbss_key_3p_pane_g

0x4a4e,	// (0x0000f6c1) bg_popup_fep_char_preview_window_cp02

0x6d9d,	// (0x00011a10) popup_fep_char_pre_window_t1

0xe8ac,	// (0x0001951f) main_ai5_sk_pane

0xef50,	// (0x00019bc3) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xef5c,	// (0x00019bcf) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xc7b4,	// (0x00017427) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xef71,	// (0x00019be4) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeca,	// (0x0001ab3d) cell_contacts_ai5_widget_pane_g_ParamLimits

0xef7d,	// (0x00019bf0) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x7cdb,	// (0x0001294e) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf463,	// (0x0001a0d6) main_ai5_sk_pane_g1

0x999f,	// (0x00014612) popup_query_code_window_g1

0xf364,	// (0x00019fd7) popup_fep_vkb_icf_pane

0xf383,	// (0x00019ff6) popup_fep_vtchi_icf_pane

0xf46c,	// (0x0001a0df) bg_icf_pane

0xf478,	// (0x0001a0eb) list_vkb_icf_pane

0xf487,	// (0x0001a0fa) bg_icf_pane_cp01

0xf49a,	// (0x0001a10d) vtchi_icf_list_pane

0xf4aa,	// (0x0001a11d) list_vkb_icf_pane_t1_ParamLimits

0xf4aa,	// (0x0001a11d) list_vkb_icf_pane_t1

0xf4c0,	// (0x0001a133) vtchi_icf_list_pane_t1_ParamLimits

0xf4c0,	// (0x0001a133) vtchi_icf_list_pane_t1

0xf34e,	// (0x00019fc1) popup_fep_ituss_window_ParamLimits

0xf383,	// (0x00019ff6) popup_fep_vtchi_icf_pane_ParamLimits

0xf3a5,	// (0x0001a018) ituss_keypad_pane_ParamLimits

0x6c84,	// (0x000118f7) ituss_sks_pane

0xf46c,	// (0x0001a0df) bg_icf_pane_ParamLimits

0xf32a,	// (0x00019f9d) icf_edit_indi_pane_ParamLimits

0xf32a,	// (0x00019f9d) icf_edit_indi_pane

0xf478,	// (0x0001a0eb) list_vkb_icf_pane_ParamLimits

0xf487,	// (0x0001a0fa) bg_icf_pane_cp01_ParamLimits

0xf339,	// (0x00019fac) icf_edit_indi_pane_cp01_ParamLimits

0xf339,	// (0x00019fac) icf_edit_indi_pane_cp01

0xf4a2,	// (0x0001a115) vtchi_query_pane

0xc1ef,	// (0x00016e62) icf_edit_indi_pane_g1_ParamLimits

0xc1ef,	// (0x00016e62) icf_edit_indi_pane_g1

0xf531,	// (0x0001a1a4) icf_edit_indi_pane_g2_ParamLimits

0xf531,	// (0x0001a1a4) icf_edit_indi_pane_g2

0x0001,

0xff10,	// (0x0001ab83) icf_edit_indi_pane_g_ParamLimits

0xff10,	// (0x0001ab83) icf_edit_indi_pane_g

0xf540,	// (0x0001a1b3) icf_edit_indi_pane_t1

0xf4da,	// (0x0001a14d) bg_input_focus_pane_cp042

0x768f,	// (0x00012302) vtchi_button_pane

0xf4e3,	// (0x0001a156) vtchi_query_pane_t1

0xf4f1,	// (0x0001a164) vtchi_query_pane_t2

0xf4ff,	// (0x0001a172) vtchi_query_pane_t3

0x0002,

0xfeff,	// (0x0001ab72) vtchi_query_pane_t

0x4a4e,	// (0x0000f6c1) bg_button_pane_cp13

0xf50d,	// (0x0001a180) vtchi_button_pane_g1

0x6dac,	// (0x00011a1f) ituss_sks_pane_g1

0x6db7,	// (0x00011a2a) ituss_sks_pane_g2

0x0001,

0xff06,	// (0x0001ab79) ituss_sks_pane_g

0xf515,	// (0x0001a188) ituss_sks_pane_t1

0xf523,	// (0x0001a196) ituss_sks_pane_t2

0x0001,

0xff0b,	// (0x0001ab7e) ituss_sks_pane_t

0xb9bc,	// (0x0001662f) indicator_nsta_pane_cp_g1

0xb9c4,	// (0x00016637) indicator_nsta_pane_cp_g2

0xb9cc,	// (0x0001663f) indicator_nsta_pane_cp_g3

0xb9bc,	// (0x0001662f) indicator_nsta_pane_cp_g4

0xb9c4,	// (0x00016637) indicator_nsta_pane_cp_g5

0xb9cc,	// (0x0001663f) indicator_nsta_pane_cp_g6

0x0005,

0xfaa8,	// (0x0001a71b) indicator_nsta_pane_cp_g

0xe496,	// (0x00019109) cell_graphic2_pane_t2_ParamLimits

0xe496,	// (0x00019109) cell_graphic2_pane_t2

0x0001,

0xfdc1,	// (0x0001aa34) cell_graphic2_pane_t_ParamLimits

0xfdc1,	// (0x0001aa34) cell_graphic2_pane_t

0xe4c3,	// (0x00019136) cell_graphic2_control_pane_t1

0x8593,	// (0x00013206) signal_pane_g3_ParamLimits

0x8593,	// (0x00013206) signal_pane_g3

0x85a5,	// (0x00013218) signal_pane_g4_ParamLimits

0x85a5,	// (0x00013218) signal_pane_g4

0xf314,	// (0x00019f87) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf314,	// (0x00019f87) cell_ai5_widget_list_row_pane_t3

0xf439,	// (0x0001a0ac) cell_ituss_key_pane_t1_ParamLimits

0xf439,	// (0x0001a0ac) cell_ituss_key_pane_t1

0x95b9,	// (0x0001422c) form_field_data_wide_pane_vc_t2_ParamLimits

0x95b9,	// (0x0001422c) form_field_data_wide_pane_vc_t2

0x95cd,	// (0x00014240) form_field_data_wide_pane_vc_t3_ParamLimits

0x95cd,	// (0x00014240) form_field_data_wide_pane_vc_t3

0x0002,

0xf804,	// (0x0001a477) form_field_data_wide_pane_vc_t_ParamLimits

0xf804,	// (0x0001a477) form_field_data_wide_pane_vc_t

0xb684,	// (0x000162f7) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb684,	// (0x000162f7) form_field_slider_wide_pane_vc_t3

0xb762,	// (0x000163d5) form_field_popup_wide_pane_vc_t2_ParamLimits

0xb762,	// (0x000163d5) form_field_popup_wide_pane_vc_t2

0xb779,	// (0x000163ec) form_field_popup_wide_pane_vc_t3_ParamLimits

0xb779,	// (0x000163ec) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa97,	// (0x0001a70a) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa97,	// (0x0001a70a) form_field_popup_wide_pane_vc_t

0x6a9e,	// (0x00011711) aid_fshwr2_btn_pane_ParamLimits

0x6aaa,	// (0x0001171d) aid_fshwr2_syb_pane_ParamLimits

0x6ab6,	// (0x00011729) aid_fshwr2_txt_pane_ParamLimits

0x62f0,	// (0x00010f63) fshwr2_bg_pane_ParamLimits

0x6ac2,	// (0x00011735) fshwr2_func_candi_pane_ParamLimits

0x6ad7,	// (0x0001174a) fshwr2_hwr_syb_pane_ParamLimits

0x6ae7,	// (0x0001175a) fshwr2_icf_pane_ParamLimits

0xb5ea,	// (0x0001625d) list_double_graphic_pane_vc_g4_ParamLimits

0xb5ea,	// (0x0001625d) list_double_graphic_pane_vc_g4

0x6ce3,	// (0x00011956) cell_ituss_key_pane_g3_ParamLimits

0x6ce3,	// (0x00011956) cell_ituss_key_pane_g3

0x6d8b,	// (0x000119fe) cell_ituss_key_t5_ParamLimits

0x6d8b,	// (0x000119fe) cell_ituss_key_t5

0xf36f,	// (0x00019fe2) popup_fep_vkbss_window_ParamLimits
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

} // end of namespace AknLayoutScalable_Abrw_php_av_qhd_prt_tch_Normal

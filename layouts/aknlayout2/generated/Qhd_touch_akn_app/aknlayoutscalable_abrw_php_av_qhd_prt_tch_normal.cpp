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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0000ba47 };

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
0x6b52,	// (0x00012599) Screen

0x6b5e,	// (0x000125a5) application_window_ParamLimits

0x6b5e,	// (0x000125a5) application_window

0x3b7a,	// (0x0000f5c1) screen_g1

0x45bd,	// (0x00010004) area_bottom_pane_ParamLimits

0x45bd,	// (0x00010004) area_bottom_pane

0x467d,	// (0x000100c4) area_top_pane_ParamLimits

0x467d,	// (0x000100c4) area_top_pane

0x471b,	// (0x00010162) main_pane_ParamLimits

0x471b,	// (0x00010162) main_pane

0x6b6e,	// (0x000125b5) misc_graphics

0x8ce1,	// (0x00014728) battery_pane_ParamLimits

0x8ce1,	// (0x00014728) battery_pane

0x9ac4,	// (0x0001550b) bg_status_flat_pane_g8

0x9acc,	// (0x00015513) bg_status_flat_pane_g9

0x8da9,	// (0x000147f0) context_pane_ParamLimits

0x8da9,	// (0x000147f0) context_pane

0x8ebf,	// (0x00014906) navi_pane_ParamLimits

0x8ebf,	// (0x00014906) navi_pane

0x8f43,	// (0x0001498a) signal_pane_ParamLimits

0x8f43,	// (0x0001498a) signal_pane

0x0008,

0xf84a,	// (0x0001b291) bg_status_flat_pane_g

0x8fb0,	// (0x000149f7) status_pane_g1_ParamLimits

0x8fb0,	// (0x000149f7) status_pane_g1

0x8fc4,	// (0x00014a0b) status_pane_g2_ParamLimits

0x8fc4,	// (0x00014a0b) status_pane_g2

0x8fd0,	// (0x00014a17) status_pane_g3_ParamLimits

0x8fd0,	// (0x00014a17) status_pane_g3

0x0004,

0xf776,	// (0x0001b1bd) status_pane_g_ParamLimits

0xf776,	// (0x0001b1bd) status_pane_g

0x9004,	// (0x00014a4b) title_pane_ParamLimits

0x9004,	// (0x00014a4b) title_pane

0x9041,	// (0x00014a88) uni_indicator_pane_ParamLimits

0x9041,	// (0x00014a88) uni_indicator_pane

0x8c01,	// (0x00014648) bg_list_pane_ParamLimits

0x8c01,	// (0x00014648) bg_list_pane

0x8c21,	// (0x00014668) find_pane

0x8c29,	// (0x00014670) listscroll_app_pane_ParamLimits

0x8c29,	// (0x00014670) listscroll_app_pane

0x8c35,	// (0x0001467c) listscroll_form_pane

0x4ff8,	// (0x00010a3f) listscroll_gen_pane_ParamLimits

0x4ff8,	// (0x00010a3f) listscroll_gen_pane

0x500c,	// (0x00010a53) listscroll_set_pane

0x7dc3,	// (0x0001380a) main_idle_act_pane

0x88fd,	// (0x00014344) main_idle_trad_pane

0x88fd,	// (0x00014344) main_list_empty_pane

0x8c29,	// (0x00014670) main_midp_pane

0x8c4f,	// (0x00014696) main_pane_g1_ParamLimits

0x8c4f,	// (0x00014696) main_pane_g1

0x5022,	// (0x00010a69) popup_ai_message_window_ParamLimits

0x5022,	// (0x00010a69) popup_ai_message_window

0x50c8,	// (0x00010b0f) popup_fep_china_uni_window_ParamLimits

0x50c8,	// (0x00010b0f) popup_fep_china_uni_window

0x5124,	// (0x00010b6b) popup_fep_japan_candidate_window_ParamLimits

0x5124,	// (0x00010b6b) popup_fep_japan_candidate_window

0x5144,	// (0x00010b8b) popup_fep_japan_predictive_window_ParamLimits

0x5144,	// (0x00010b8b) popup_fep_japan_predictive_window

0x5174,	// (0x00010bbb) popup_find_window

0x5181,	// (0x00010bc8) popup_grid_graphic_window_ParamLimits

0x5181,	// (0x00010bc8) popup_grid_graphic_window

0x51ad,	// (0x00010bf4) popup_large_graphic_colour_window

0x51d3,	// (0x00010c1a) popup_menu_window_ParamLimits

0x51d3,	// (0x00010c1a) popup_menu_window

0x538b,	// (0x00010dd2) popup_note_image_window

0x5377,	// (0x00010dbe) popup_note_wait_window_ParamLimits

0x5377,	// (0x00010dbe) popup_note_wait_window

0x5377,	// (0x00010dbe) popup_note_window_ParamLimits

0x5377,	// (0x00010dbe) popup_note_window

0x53e1,	// (0x00010e28) popup_query_code_window_ParamLimits

0x53e1,	// (0x00010e28) popup_query_code_window

0x53f5,	// (0x00010e3c) popup_query_data_code_window_ParamLimits

0x53f5,	// (0x00010e3c) popup_query_data_code_window

0x5412,	// (0x00010e59) popup_query_data_window_ParamLimits

0x5412,	// (0x00010e59) popup_query_data_window

0x542e,	// (0x00010e75) popup_query_sat_info_window_ParamLimits

0x542e,	// (0x00010e75) popup_query_sat_info_window

0x5467,	// (0x00010eae) popup_snote_single_graphic_window_ParamLimits

0x5467,	// (0x00010eae) popup_snote_single_graphic_window

0x5467,	// (0x00010eae) popup_snote_single_text_window_ParamLimits

0x5467,	// (0x00010eae) popup_snote_single_text_window

0x547c,	// (0x00010ec3) popup_sub_window_general

0x55ac,	// (0x00010ff3) popup_window_general_ParamLimits

0x55ac,	// (0x00010ff3) popup_window_general

0x8c65,	// (0x000146ac) power_save_pane

0x4e82,	// (0x000108c9) control_pane_g1_ParamLimits

0x4e82,	// (0x000108c9) control_pane_g1

0x4ea9,	// (0x000108f0) control_pane_g2_ParamLimits

0x4ea9,	// (0x000108f0) control_pane_g2

0x8bc4,	// (0x0001460b) control_pane_g3_ParamLimits

0x8bc4,	// (0x0001460b) control_pane_g3

0x0007,

0xf75e,	// (0x0001b1a5) control_pane_g_ParamLimits

0xf75e,	// (0x0001b1a5) control_pane_g

0x4ef3,	// (0x0001093a) control_pane_t1_ParamLimits

0x4ef3,	// (0x0001093a) control_pane_t1

0x4f47,	// (0x0001098e) control_pane_t2_ParamLimits

0x4f47,	// (0x0001098e) control_pane_t2

0x0002,

0xf76f,	// (0x0001b1b6) control_pane_t_ParamLimits

0xf76f,	// (0x0001b1b6) control_pane_t

0x8ae9,	// (0x00014530) navi_navi_volume_pane_cp1

0x8af1,	// (0x00014538) status_small_icon_pane

0x8af9,	// (0x00014540) status_small_pane_g1_ParamLimits

0x8af9,	// (0x00014540) status_small_pane_g1

0x8b2d,	// (0x00014574) status_small_pane_g2_ParamLimits

0x8b2d,	// (0x00014574) status_small_pane_g2

0x8b39,	// (0x00014580) status_small_pane_g3_ParamLimits

0x8b39,	// (0x00014580) status_small_pane_g3

0x8b45,	// (0x0001458c) status_small_pane_g4_ParamLimits

0x8b45,	// (0x0001458c) status_small_pane_g4

0x8b51,	// (0x00014598) status_small_pane_g5_ParamLimits

0x8b51,	// (0x00014598) status_small_pane_g5

0x8b5f,	// (0x000145a6) status_small_pane_g6_ParamLimits

0x8b5f,	// (0x000145a6) status_small_pane_g6

0x0007,

0xf74d,	// (0x0001b194) status_small_pane_g_ParamLimits

0xf74d,	// (0x0001b194) status_small_pane_g

0x8b8e,	// (0x000145d5) status_small_pane_t1

0x8bb0,	// (0x000145f7) status_small_wait_pane_ParamLimits

0x8bb0,	// (0x000145f7) status_small_wait_pane

0x82e9,	// (0x00013d30) aid_levels_signal_ParamLimits

0x82e9,	// (0x00013d30) aid_levels_signal

0x82fb,	// (0x00013d42) signal_pane_g1_ParamLimits

0x82fb,	// (0x00013d42) signal_pane_g1

0x8310,	// (0x00013d57) signal_pane_g2_ParamLimits

0x8310,	// (0x00013d57) signal_pane_g2

0x0003,

0xf6de,	// (0x0001b125) signal_pane_g_ParamLimits

0xf6de,	// (0x0001b125) signal_pane_g

0x834b,	// (0x00013d92) context_pane_g1

0x6b78,	// (0x000125bf) title_pane_g1

0x6bae,	// (0x000125f5) title_pane_t1

0x6c16,	// (0x0001265d) title_pane_t2

0x6c3c,	// (0x00012683) title_pane_t3

0x0002,

0xf532,	// (0x0001af79) title_pane_t

0x9059,	// (0x00014aa0) aid_levels_battery_ParamLimits

0x9059,	// (0x00014aa0) aid_levels_battery

0x906d,	// (0x00014ab4) battery_pane_g1_ParamLimits

0x906d,	// (0x00014ab4) battery_pane_g1

0x9083,	// (0x00014aca) battery_pane_g2_ParamLimits

0x9083,	// (0x00014aca) battery_pane_g2

0x0001,

0xf781,	// (0x0001b1c8) battery_pane_g_ParamLimits

0xf781,	// (0x0001b1c8) battery_pane_g

0xa3fa,	// (0x00015e41) uni_indicator_pane_g1

0xa410,	// (0x00015e57) uni_indicator_pane_g2

0xa426,	// (0x00015e6d) uni_indicator_pane_g3

0x0005,

0xf8f2,	// (0x0001b339) uni_indicator_pane_g

0x877b,	// (0x000141c2) navi_icon_pane_ParamLimits

0x877b,	// (0x000141c2) navi_icon_pane

0x86b9,	// (0x00014100) navi_midp_pane

0x8797,	// (0x000141de) navi_navi_pane

0x87a1,	// (0x000141e8) navi_text_pane_ParamLimits

0x87a1,	// (0x000141e8) navi_text_pane

0x3b7a,	// (0x0000f5c1) status_small_wait_pane_g1

0x70ab,	// (0x00012af2) status_small_wait_pane_g2

0x0001,

0xf8ed,	// (0x0001b334) status_small_wait_pane_g

0xa11f,	// (0x00015b66) navi_navi_icon_text_pane

0xa127,	// (0x00015b6e) navi_navi_pane_g1_ParamLimits

0xa127,	// (0x00015b6e) navi_navi_pane_g1

0xa139,	// (0x00015b80) navi_navi_pane_g2_ParamLimits

0xa139,	// (0x00015b80) navi_navi_pane_g2

0x0001,

0xf8bb,	// (0x0001b302) navi_navi_pane_g_ParamLimits

0xf8bb,	// (0x0001b302) navi_navi_pane_g

0xa14b,	// (0x00015b92) navi_navi_tabs_pane

0xa154,	// (0x00015b9b) navi_navi_text_pane

0xa11f,	// (0x00015b66) navi_navi_volume_pane

0xa0fb,	// (0x00015b42) navi_text_pane_t1

0xa0ef,	// (0x00015b36) navi_icon_pane_g1

0xa042,	// (0x00015a89) navi_navi_text_pane_t1

0x58c4,	// (0x0001130b) navi_navi_volume_pane_g1

0x58cc,	// (0x00011313) volume_small_pane

0x9fa8,	// (0x000159ef) navi_navi_icon_text_pane_g1

0x9fb0,	// (0x000159f7) navi_navi_icon_text_pane_t1

0x8797,	// (0x000141de) navi_tabs_2_long_pane

0x8797,	// (0x000141de) navi_tabs_2_pane

0x8797,	// (0x000141de) navi_tabs_3_long_pane

0x8797,	// (0x000141de) navi_tabs_3_pane

0x8797,	// (0x000141de) navi_tabs_4_pane

0x58a4,	// (0x000112eb) tabs_2_active_pane_ParamLimits

0x58a4,	// (0x000112eb) tabs_2_active_pane

0x58b4,	// (0x000112fb) tabs_2_passive_pane_ParamLimits

0x58b4,	// (0x000112fb) tabs_2_passive_pane

0x5872,	// (0x000112b9) tabs_3_active_pane_ParamLimits

0x5872,	// (0x000112b9) tabs_3_active_pane

0x5882,	// (0x000112c9) tabs_3_passive_pane_ParamLimits

0x5882,	// (0x000112c9) tabs_3_passive_pane

0x5893,	// (0x000112da) tabs_3_passive_pane_cp_ParamLimits

0x5893,	// (0x000112da) tabs_3_passive_pane_cp

0x582e,	// (0x00011275) tabs_4_active_pane_ParamLimits

0x582e,	// (0x00011275) tabs_4_active_pane

0x583f,	// (0x00011286) tabs_4_passive_pane_ParamLimits

0x583f,	// (0x00011286) tabs_4_passive_pane

0x5850,	// (0x00011297) tabs_4_passive_pane_cp_ParamLimits

0x5850,	// (0x00011297) tabs_4_passive_pane_cp

0x5861,	// (0x000112a8) tabs_4_passive_pane_cp2_ParamLimits

0x5861,	// (0x000112a8) tabs_4_passive_pane_cp2

0x580a,	// (0x00011251) tabs_2_long_active_pane_ParamLimits

0x580a,	// (0x00011251) tabs_2_long_active_pane

0x581c,	// (0x00011263) tabs_2_long_passive_pane_ParamLimits

0x581c,	// (0x00011263) tabs_2_long_passive_pane

0x57cb,	// (0x00011212) tabs_3_long_active_pane_ParamLimits

0x57cb,	// (0x00011212) tabs_3_long_active_pane

0x57de,	// (0x00011225) tabs_3_long_passive_pane_ParamLimits

0x57de,	// (0x00011225) tabs_3_long_passive_pane

0x57f7,	// (0x0001123e) tabs_3_long_passive_pane_cp_ParamLimits

0x57f7,	// (0x0001123e) tabs_3_long_passive_pane_cp

0x5771,	// (0x000111b8) volume_small_pane_g1

0x577a,	// (0x000111c1) volume_small_pane_g2

0x5783,	// (0x000111ca) volume_small_pane_g3

0x578c,	// (0x000111d3) volume_small_pane_g4

0x5795,	// (0x000111dc) volume_small_pane_g5

0x579e,	// (0x000111e5) volume_small_pane_g6

0x57a7,	// (0x000111ee) volume_small_pane_g7

0x57b0,	// (0x000111f7) volume_small_pane_g8

0x57b9,	// (0x00011200) volume_small_pane_g9

0x57c2,	// (0x00011209) volume_small_pane_g10

0x0009,

0xf887,	// (0x0001b2ce) volume_small_pane_g

0x6c4e,	// (0x00012695) bg_active_tab_pane_cp2_ParamLimits

0x6c4e,	// (0x00012695) bg_active_tab_pane_cp2

0x6c5c,	// (0x000126a3) tabs_3_active_pane_g1

0x6c64,	// (0x000126ab) tabs_3_active_pane_t1

0x6c4e,	// (0x00012695) bg_passive_tab_pane_cp2_ParamLimits

0x6c4e,	// (0x00012695) bg_passive_tab_pane_cp2

0x6c5c,	// (0x000126a3) tabs_3_passive_pane_g1

0x6c64,	// (0x000126ab) tabs_3_passive_pane_t1

0x6c4e,	// (0x00012695) bg_active_tab_pane_cp3_ParamLimits

0x6c4e,	// (0x00012695) bg_active_tab_pane_cp3

0x6c76,	// (0x000126bd) tabs_4_active_pane_g1

0x6c7e,	// (0x000126c5) tabs_4_active_pane_t1

0x6c4e,	// (0x00012695) bg_passive_tab_pane_cp3_ParamLimits

0x6c4e,	// (0x00012695) bg_passive_tab_pane_cp3

0x6c76,	// (0x000126bd) tabs_4_1_passive_pane_g1

0x6c7e,	// (0x000126c5) tabs_4_1_passive_pane_t1

0x8c29,	// (0x00014670) list_highlight_pane_cp2

0xa67f,	// (0x000160c6) list_set_pane_ParamLimits

0xa67f,	// (0x000160c6) list_set_pane

0xa725,	// (0x0001616c) main_pane_set_t1_ParamLimits

0xa725,	// (0x0001616c) main_pane_set_t1

0xa745,	// (0x0001618c) main_pane_set_t2_ParamLimits

0xa745,	// (0x0001618c) main_pane_set_t2

0xa759,	// (0x000161a0) main_pane_set_t3_ParamLimits

0xa759,	// (0x000161a0) main_pane_set_t3

0xa76b,	// (0x000161b2) main_pane_set_t4_ParamLimits

0xa76b,	// (0x000161b2) main_pane_set_t4

0x0003,

0xf957,	// (0x0001b39e) main_pane_set_t_ParamLimits

0xf957,	// (0x0001b39e) main_pane_set_t

0xa77d,	// (0x000161c4) setting_code_pane

0xa789,	// (0x000161d0) setting_slider_graphic_pane

0xa789,	// (0x000161d0) setting_slider_pane

0xa789,	// (0x000161d0) setting_text_pane

0xa789,	// (0x000161d0) setting_volume_pane

0x496a,	// (0x000103b1) volume_set_pane

0x6c4e,	// (0x00012695) bg_set_opt_pane_cp

0x4972,	// (0x000103b9) setting_slider_pane_t1

0x498b,	// (0x000103d2) setting_slider_pane_t2

0x49a5,	// (0x000103ec) setting_slider_pane_t3

0x0002,

0xf539,	// (0x0001af80) setting_slider_pane_t

0x49bd,	// (0x00010404) slider_set_pane

0x6b6e,	// (0x000125b5) bg_set_opt_pane_cp2

0x6c90,	// (0x000126d7) setting_slider_graphic_pane_g1

0x49d3,	// (0x0001041a) setting_slider_graphic_pane_t1

0x49e3,	// (0x0001042a) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x0001af87) setting_slider_graphic_pane_t

0x49f3,	// (0x0001043a) slider_set_pane_cp

0x6b6e,	// (0x000125b5) input_focus_pane_cp1

0xa63e,	// (0x00016085) list_set_text_pane

0x3b7a,	// (0x0000f5c1) setting_text_pane_g1

0x6b6e,	// (0x000125b5) input_focus_pane_cp2

0x3b7a,	// (0x0000f5c1) setting_code_pane_g1

0x6c99,	// (0x000126e0) setting_code_pane_t1

0x6ca7,	// (0x000126ee) set_text_pane_t1_ParamLimits

0x6ca7,	// (0x000126ee) set_text_pane_t1

0x7b7b,	// (0x000135c2) set_opt_bg_pane_g1

0x7b83,	// (0x000135ca) set_opt_bg_pane_g2

0xa618,	// (0x0001605f) set_opt_bg_pane_g3

0x7b93,	// (0x000135da) set_opt_bg_pane_g4

0x7b9b,	// (0x000135e2) set_opt_bg_pane_g5

0x7ba3,	// (0x000135ea) set_opt_bg_pane_g6

0xa622,	// (0x00016069) set_opt_bg_pane_g7

0xa62a,	// (0x00016071) set_opt_bg_pane_g8

0xa634,	// (0x0001607b) set_opt_bg_pane_g9

0x0008,

0xf944,	// (0x0001b38b) set_opt_bg_pane_g

0xa60b,	// (0x00016052) slider_set_pane_g1

0x5939,	// (0x00011380) slider_set_pane_g2

0x0006,

0xf935,	// (0x0001b37c) slider_set_pane_g

0x58d5,	// (0x0001131c) volume_set_pane_g1

0x58dd,	// (0x00011324) volume_set_pane_g2

0x58e5,	// (0x0001132c) volume_set_pane_g3

0x58ed,	// (0x00011334) volume_set_pane_g4

0x58f5,	// (0x0001133c) volume_set_pane_g5

0x58fd,	// (0x00011344) volume_set_pane_g6

0x5905,	// (0x0001134c) volume_set_pane_g7

0x590d,	// (0x00011354) volume_set_pane_g8

0x5915,	// (0x0001135c) volume_set_pane_g9

0x591d,	// (0x00011364) volume_set_pane_g10

0x0009,

0xf90d,	// (0x0001b354) volume_set_pane_g

0x6cc1,	// (0x00012708) indicator_pane_ParamLimits

0x6cc1,	// (0x00012708) indicator_pane

0x6ccd,	// (0x00012714) main_idle_pane_g2_ParamLimits

0x6ccd,	// (0x00012714) main_idle_pane_g2

0x6cf5,	// (0x0001273c) main_pane_idle_g1_ParamLimits

0x6cf5,	// (0x0001273c) main_pane_idle_g1

0x6d02,	// (0x00012749) popup_clock_digital_analogue_window_ParamLimits

0x6d02,	// (0x00012749) popup_clock_digital_analogue_window

0x6d19,	// (0x00012760) soft_indicator_pane_ParamLimits

0x6d19,	// (0x00012760) soft_indicator_pane

0x6d25,	// (0x0001276c) wallpaper_pane_ParamLimits

0x6d25,	// (0x0001276c) wallpaper_pane

0x3b7a,	// (0x0000f5c1) wallpaper_pane_g1

0x6d39,	// (0x00012780) indicator_pane_g1_ParamLimits

0x6d39,	// (0x00012780) indicator_pane_g1

0xab2a,	// (0x00016571) navi_navi_icon_text_pane_srt_g1

0x6d54,	// (0x0001279b) soft_indicator_pane_t1

0x6d6e,	// (0x000127b5) aid_ps_area_pane

0x6d7f,	// (0x000127c6) aid_ps_clock_pane

0x6d8d,	// (0x000127d4) aid_ps_indicator_pane

0x6d99,	// (0x000127e0) indicator_ps_pane_ParamLimits

0x6d99,	// (0x000127e0) indicator_ps_pane

0x6da8,	// (0x000127ef) power_save_pane_g1_ParamLimits

0x6da8,	// (0x000127ef) power_save_pane_g1

0x6db4,	// (0x000127fb) power_save_pane_g2_ParamLimits

0x6db4,	// (0x000127fb) power_save_pane_g2

0x4571,	// (0x0000ffb8) aid_navinavi_width_pane

0x6d6e,	// (0x000127b5) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x0001af8c) power_save_pane_g_ParamLimits

0xf545,	// (0x0001af8c) power_save_pane_g

0x6dc2,	// (0x00012809) power_save_pane_t1_ParamLimits

0x6dc2,	// (0x00012809) power_save_pane_t1

0x6d7f,	// (0x000127c6) aid_ps_clock_pane_ParamLimits

0x6d8d,	// (0x000127d4) aid_ps_indicator_pane_ParamLimits

0x6dd4,	// (0x0001281b) power_save_pane_t4_ParamLimits

0x6dd4,	// (0x0001281b) power_save_pane_t4

0x0001,

0xf54a,	// (0x0001af91) power_save_pane_t_ParamLimits

0xf54a,	// (0x0001af91) power_save_pane_t

0x6dfe,	// (0x00012845) power_save_t3_ParamLimits

0x6dfe,	// (0x00012845) power_save_t3

0x6de9,	// (0x00012830) power_save_t2_ParamLimits

0x6de9,	// (0x00012830) power_save_t2

0x6e13,	// (0x0001285a) indicator_ps_pane_g1

0x6e1c,	// (0x00012863) ai_gene_pane_ParamLimits

0x6e1c,	// (0x00012863) ai_gene_pane

0x6e28,	// (0x0001286f) ai_links_pane_ParamLimits

0x6e28,	// (0x0001286f) ai_links_pane

0x6e34,	// (0x0001287b) indicator_pane_cp1_ParamLimits

0x6e34,	// (0x0001287b) indicator_pane_cp1

0x6e40,	// (0x00012887) main_pane_idle_g1_cp_ParamLimits

0x6e40,	// (0x00012887) main_pane_idle_g1_cp

0x6e4c,	// (0x00012893) popup_ai_links_title_window

0x6e55,	// (0x0001289c) soft_indicator_pane_cp1_ParamLimits

0x6e55,	// (0x0001289c) soft_indicator_pane_cp1

0xa3e8,	// (0x00015e2f) ai_links_pane_g1

0xa3f1,	// (0x00015e38) grid_ai_links_pane

0xa3cb,	// (0x00015e12) ai_gene_pane_1

0xa3d6,	// (0x00015e1d) ai_gene_pane_2

0xa3df,	// (0x00015e26) list_highlight_pane_cp4

0xa3af,	// (0x00015df6) cell_ai_link_pane_ParamLimits

0xa3af,	// (0x00015df6) cell_ai_link_pane

0xa3a7,	// (0x00015dee) cell_ai_link_pane_g1

0x70ab,	// (0x00012af2) cell_ai_link_pane_g2

0x0001,

0xf8e8,	// (0x0001b32f) cell_ai_link_pane_g

0x6b6e,	// (0x000125b5) grid_highlight_cp2

0x6b6e,	// (0x000125b5) bg_popup_sub_pane_cp1

0x6e6f,	// (0x000128b6) popup_ai_links_title_window_t1

0xa2f5,	// (0x00015d3c) ai_gene_pane_1_g1_ParamLimits

0xa2f5,	// (0x00015d3c) ai_gene_pane_1_g1

0xa301,	// (0x00015d48) ai_gene_pane_1_g2_ParamLimits

0xa301,	// (0x00015d48) ai_gene_pane_1_g2

0x0001,

0xf8de,	// (0x0001b325) ai_gene_pane_1_g_ParamLimits

0xf8de,	// (0x0001b325) ai_gene_pane_1_g

0xa30e,	// (0x00015d55) ai_gene_pane_1_t1_ParamLimits

0xa30e,	// (0x00015d55) ai_gene_pane_1_t1

0xa342,	// (0x00015d89) grid_ai_soft_ind_pane

0xa2e0,	// (0x00015d27) ai_gene_pane_2_t1_ParamLimits

0xa2e0,	// (0x00015d27) ai_gene_pane_2_t1

0x6e7e,	// (0x000128c5) main_pane_empty_t1_ParamLimits

0x6e7e,	// (0x000128c5) main_pane_empty_t1

0x6e96,	// (0x000128dd) main_pane_empty_t2_ParamLimits

0x6e96,	// (0x000128dd) main_pane_empty_t2

0x6eab,	// (0x000128f2) main_pane_empty_t3_ParamLimits

0x6eab,	// (0x000128f2) main_pane_empty_t3

0x6ebd,	// (0x00012904) main_pane_empty_t4_ParamLimits

0x6ebd,	// (0x00012904) main_pane_empty_t4

0x6ecf,	// (0x00012916) main_pane_empty_t5_ParamLimits

0x6ecf,	// (0x00012916) main_pane_empty_t5

0x0004,

0xf54f,	// (0x0001af96) main_pane_empty_t_ParamLimits

0xf54f,	// (0x0001af96) main_pane_empty_t

0x7cee,	// (0x00013735) bg_popup_window_pane_ParamLimits

0x7cee,	// (0x00013735) bg_popup_window_pane

0xa050,	// (0x00015a97) find_popup_pane_cp2_ParamLimits

0xa050,	// (0x00015a97) find_popup_pane_cp2

0xa05c,	// (0x00015aa3) heading_pane_ParamLimits

0xa05c,	// (0x00015aa3) heading_pane

0x6b6e,	// (0x000125b5) bg_popup_sub_pane

0x9fca,	// (0x00015a11) bg_popup_window_pane_g1_ParamLimits

0x9fca,	// (0x00015a11) bg_popup_window_pane_g1

0x9fd6,	// (0x00015a1d) bg_popup_window_pane_g2_ParamLimits

0x9fd6,	// (0x00015a1d) bg_popup_window_pane_g2

0x9fe2,	// (0x00015a29) bg_popup_window_pane_g3_ParamLimits

0x9fe2,	// (0x00015a29) bg_popup_window_pane_g3

0x9fee,	// (0x00015a35) bg_popup_window_pane_g4_ParamLimits

0x9fee,	// (0x00015a35) bg_popup_window_pane_g4

0x9ffa,	// (0x00015a41) bg_popup_window_pane_g5_ParamLimits

0x9ffa,	// (0x00015a41) bg_popup_window_pane_g5

0xa006,	// (0x00015a4d) bg_popup_window_pane_g6_ParamLimits

0xa006,	// (0x00015a4d) bg_popup_window_pane_g6

0xa012,	// (0x00015a59) bg_popup_window_pane_g7_ParamLimits

0xa012,	// (0x00015a59) bg_popup_window_pane_g7

0xa01e,	// (0x00015a65) bg_popup_window_pane_g8_ParamLimits

0xa01e,	// (0x00015a65) bg_popup_window_pane_g8

0xa02a,	// (0x00015a71) bg_popup_window_pane_g9_ParamLimits

0xa02a,	// (0x00015a71) bg_popup_window_pane_g9

0xa036,	// (0x00015a7d) bg_popup_window_pane_g10_ParamLimits

0xa036,	// (0x00015a7d) bg_popup_window_pane_g10

0x0009,

0xf8a6,	// (0x0001b2ed) bg_popup_window_pane_g_ParamLimits

0xf8a6,	// (0x0001b2ed) bg_popup_window_pane_g

0x9f5f,	// (0x000159a6) bg_popup_heading_pane_ParamLimits

0x9f5f,	// (0x000159a6) bg_popup_heading_pane

0x59c1,	// (0x00011408) tabs_4_passive_pane_cp_srt_ParamLimits

0x59c1,	// (0x00011408) tabs_4_passive_pane_cp_srt

0x59d3,	// (0x0001141a) tabs_4_passive_pane_srt_ParamLimits

0x9f73,	// (0x000159ba) heading_pane_g2

0x59d3,	// (0x0001141a) tabs_4_passive_pane_srt

0x8c29,	// (0x00014670) bg_passive_tab_pane_cp3_srt_ParamLimits

0x8c29,	// (0x00014670) bg_passive_tab_pane_cp3_srt

0x9f7b,	// (0x000159c2) heading_pane_t1_ParamLimits

0x9f7b,	// (0x000159c2) heading_pane_t1

0x9f92,	// (0x000159d9) heading_pane_t2_ParamLimits

0x9f92,	// (0x000159d9) heading_pane_t2

0x0001,

0xf8a1,	// (0x0001b2e8) heading_pane_t_ParamLimits

0xf8a1,	// (0x0001b2e8) heading_pane_t

0x9a8c,	// (0x000154d3) bg_popup_heading_pane_g1

0x9b3b,	// (0x00015582) bg_popup_heading_pane_g2

0x9b45,	// (0x0001558c) bg_popup_heading_pane_g3

0x9b4f,	// (0x00015596) bg_popup_heading_pane_g4

0x9b59,	// (0x000155a0) bg_popup_heading_pane_g5

0x9b63,	// (0x000155aa) bg_popup_heading_pane_g6

0x9b6b,	// (0x000155b2) bg_popup_heading_pane_g7

0x9b73,	// (0x000155ba) bg_popup_heading_pane_g8

0x9b7d,	// (0x000155c4) bg_popup_heading_pane_g9

0x0008,

0xf85d,	// (0x0001b2a4) bg_popup_heading_pane_g

0x9171,	// (0x00014bb8) bg_popup_sub_pane_g1

0x9181,	// (0x00014bc8) bg_popup_sub_pane_g2

0x9179,	// (0x00014bc0) bg_popup_sub_pane_g3

0x9191,	// (0x00014bd8) bg_popup_sub_pane_g4

0x9189,	// (0x00014bd0) bg_popup_sub_pane_g5

0x9199,	// (0x00014be0) bg_popup_sub_pane_g6

0x91a1,	// (0x00014be8) bg_popup_sub_pane_g7

0x91b1,	// (0x00014bf8) bg_popup_sub_pane_g8

0x91a9,	// (0x00014bf0) bg_popup_sub_pane_g9

0x0008,

0xf837,	// (0x0001b27e) bg_popup_sub_pane_g

0x6ee3,	// (0x0001292a) bg_popup_window_pane_cp5_ParamLimits

0x6ee3,	// (0x0001292a) bg_popup_window_pane_cp5

0x6eff,	// (0x00012946) popup_note_window_g1_ParamLimits

0x6eff,	// (0x00012946) popup_note_window_g1

0x6f0b,	// (0x00012952) popup_note_window_t1_ParamLimits

0x6f0b,	// (0x00012952) popup_note_window_t1

0x6f21,	// (0x00012968) popup_note_window_t2_ParamLimits

0x6f21,	// (0x00012968) popup_note_window_t2

0x6f37,	// (0x0001297e) popup_note_window_t3_ParamLimits

0x6f37,	// (0x0001297e) popup_note_window_t3

0x6f4d,	// (0x00012994) popup_note_window_t4_ParamLimits

0x6f4d,	// (0x00012994) popup_note_window_t4

0x6f75,	// (0x000129bc) popup_note_window_t5_ParamLimits

0x6f75,	// (0x000129bc) popup_note_window_t5

0x0004,

0xf55a,	// (0x0001afa1) popup_note_window_t_ParamLimits

0xf55a,	// (0x0001afa1) popup_note_window_t

0x6fbf,	// (0x00012a06) bg_popup_window_pane_cp6_ParamLimits

0x6fbf,	// (0x00012a06) bg_popup_window_pane_cp6

0x9a08,	// (0x0001544f) popup_note_image_window_g1_ParamLimits

0x9a08,	// (0x0001544f) popup_note_image_window_g1

0x9a14,	// (0x0001545b) popup_note_image_window_g2_ParamLimits

0x9a14,	// (0x0001545b) popup_note_image_window_g2

0x0001,

0xf82b,	// (0x0001b272) popup_note_image_window_g_ParamLimits

0xf82b,	// (0x0001b272) popup_note_image_window_g

0x9a2d,	// (0x00015474) popup_note_image_window_t1_ParamLimits

0x9a2d,	// (0x00015474) popup_note_image_window_t1

0x9a46,	// (0x0001548d) popup_note_image_window_t2_ParamLimits

0x9a46,	// (0x0001548d) popup_note_image_window_t2

0x9a5f,	// (0x000154a6) popup_note_image_window_t3_ParamLimits

0x9a5f,	// (0x000154a6) popup_note_image_window_t3

0x0002,

0xf830,	// (0x0001b277) popup_note_image_window_t_ParamLimits

0xf830,	// (0x0001b277) popup_note_image_window_t

0x98c9,	// (0x00015310) bg_popup_window_pane_cp7_ParamLimits

0x98c9,	// (0x00015310) bg_popup_window_pane_cp7

0x98f9,	// (0x00015340) popup_note_wait_window_g1_ParamLimits

0x98f9,	// (0x00015340) popup_note_wait_window_g1

0x9905,	// (0x0001534c) popup_note_wait_window_g2_ParamLimits

0x9905,	// (0x0001534c) popup_note_wait_window_g2

0x0002,

0xf819,	// (0x0001b260) popup_note_wait_window_g_ParamLimits

0xf819,	// (0x0001b260) popup_note_wait_window_g

0x991d,	// (0x00015364) popup_note_wait_window_t1_ParamLimits

0x991d,	// (0x00015364) popup_note_wait_window_t1

0x9944,	// (0x0001538b) popup_note_wait_window_t2_ParamLimits

0x9944,	// (0x0001538b) popup_note_wait_window_t2

0x9961,	// (0x000153a8) popup_note_wait_window_t3_ParamLimits

0x9961,	// (0x000153a8) popup_note_wait_window_t3

0x9974,	// (0x000153bb) popup_note_wait_window_t4_ParamLimits

0x9974,	// (0x000153bb) popup_note_wait_window_t4

0x0004,

0xf820,	// (0x0001b267) popup_note_wait_window_t_ParamLimits

0xf820,	// (0x0001b267) popup_note_wait_window_t

0x9999,	// (0x000153e0) wait_bar_pane_ParamLimits

0x9999,	// (0x000153e0) wait_bar_pane

0x6b6e,	// (0x000125b5) wait_anim_pane

0x6b6e,	// (0x000125b5) wait_border_pane

0x3b7a,	// (0x0000f5c1) wait_anim_pane_g1

0x3b7a,	// (0x0000f5c1) wait_anim_pane_g2

0x0001,

0xf6d9,	// (0x0001b120) wait_anim_pane_g

0x986d,	// (0x000152b4) wait_border_pane_g1

0x9878,	// (0x000152bf) wait_border_pane_g2

0x9881,	// (0x000152c8) wait_border_pane_g3

0x0002,

0xf812,	// (0x0001b259) wait_border_pane_g

0x96d8,	// (0x0001511f) bg_popup_window_pane_cp16_ParamLimits

0x96d8,	// (0x0001511f) bg_popup_window_pane_cp16

0x97d8,	// (0x0001521f) indicator_popup_pane_cp4_ParamLimits

0x97d8,	// (0x0001521f) indicator_popup_pane_cp4

0x97ec,	// (0x00015233) popup_query_data_window_t1_ParamLimits

0x97ec,	// (0x00015233) popup_query_data_window_t1

0x97fe,	// (0x00015245) popup_query_data_window_t2_ParamLimits

0x97fe,	// (0x00015245) popup_query_data_window_t2

0x9817,	// (0x0001525e) popup_query_data_window_t3_ParamLimits

0x9817,	// (0x0001525e) popup_query_data_window_t3

0x0002,

0xf80b,	// (0x0001b252) popup_query_data_window_t_ParamLimits

0xf80b,	// (0x0001b252) popup_query_data_window_t

0x9831,	// (0x00015278) query_popup_data_pane_ParamLimits

0x9831,	// (0x00015278) query_popup_data_pane

0x9845,	// (0x0001528c) query_popup_data_pane_cp1_ParamLimits

0x9845,	// (0x0001528c) query_popup_data_pane_cp1

0x96d8,	// (0x0001511f) bg_popup_window_pane_cp10_ParamLimits

0x96d8,	// (0x0001511f) bg_popup_window_pane_cp10

0x970a,	// (0x00015151) indicator_popup_pane_ParamLimits

0x970a,	// (0x00015151) indicator_popup_pane

0x972c,	// (0x00015173) popup_query_code_window_t1_ParamLimits

0x972c,	// (0x00015173) popup_query_code_window_t1

0x9746,	// (0x0001518d) popup_query_code_window_t2_ParamLimits

0x9746,	// (0x0001518d) popup_query_code_window_t2

0x978f,	// (0x000151d6) popup_query_code_window_t3_ParamLimits

0x978f,	// (0x000151d6) popup_query_code_window_t3

0x0002,

0xf804,	// (0x0001b24b) popup_query_code_window_t_ParamLimits

0xf804,	// (0x0001b24b) popup_query_code_window_t

0x97be,	// (0x00015205) query_popup_pane_ParamLimits

0x97be,	// (0x00015205) query_popup_pane

0x6fbf,	// (0x00012a06) bg_popup_window_pane_cp15_ParamLimits

0x6fbf,	// (0x00012a06) bg_popup_window_pane_cp15

0x6fdd,	// (0x00012a24) indicator_popup_pane_cp1_ParamLimits

0x6fdd,	// (0x00012a24) indicator_popup_pane_cp1

0x6ff0,	// (0x00012a37) indicator_popup_pane_cp2_ParamLimits

0x6ff0,	// (0x00012a37) indicator_popup_pane_cp2

0x7003,	// (0x00012a4a) popup_query_data_code_window_g1_ParamLimits

0x7003,	// (0x00012a4a) popup_query_data_code_window_g1

0x7016,	// (0x00012a5d) popup_query_data_code_window_t1_ParamLimits

0x7016,	// (0x00012a5d) popup_query_data_code_window_t1

0x7028,	// (0x00012a6f) popup_query_data_code_window_t2_ParamLimits

0x7028,	// (0x00012a6f) popup_query_data_code_window_t2

0x703a,	// (0x00012a81) popup_query_data_code_window_t3_ParamLimits

0x703a,	// (0x00012a81) popup_query_data_code_window_t3

0x7050,	// (0x00012a97) popup_query_data_code_window_t4_ParamLimits

0x7050,	// (0x00012a97) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x0001afac) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x0001afac) popup_query_data_code_window_t

0x5682,	// (0x000110c9) list_single_midp_graphic_pane_g3

0x7068,	// (0x00012aaf) query_popup_data_pane_cp2_ParamLimits

0x707b,	// (0x00012ac2) query_popup_pane_cp2_ParamLimits

0x707b,	// (0x00012ac2) query_popup_pane_cp2

0x6b6e,	// (0x000125b5) bg_popup_window_pane_cp11

0x96bc,	// (0x00015103) heading_pane_cp5

0x96c4,	// (0x0001510b) listscroll_popup_info_pane

0x6b6e,	// (0x000125b5) input_focus_pane_cp3

0x708e,	// (0x00012ad5) query_popup_pane_t1

0x709c,	// (0x00012ae3) list_popup_info_pane_ParamLimits

0x709c,	// (0x00012ae3) list_popup_info_pane

0x70ab,	// (0x00012af2) listscroll_popup_info_pane_g1

0x70b3,	// (0x00012afa) scroll_pane_cp7

0x70bd,	// (0x00012b04) popup_info_list_pane_t1_ParamLimits

0x70bd,	// (0x00012b04) popup_info_list_pane_t1

0x70d7,	// (0x00012b1e) popup_info_list_pane_t2_ParamLimits

0x70d7,	// (0x00012b1e) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x0001afb5) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x0001afb5) popup_info_list_pane_t

0x6b6e,	// (0x000125b5) bg_popup_window_pane_cp12

0xab44,	// (0x0001658b) find_popup_pane

0x6c4e,	// (0x00012695) bg_popup_window_pane_cp3

0x70f1,	// (0x00012b38) heading_pane_cp3

0x7100,	// (0x00012b47) listscroll_popup_graphic_pane

0x6b6e,	// (0x000125b5) bg_popup_window_pane_cp4

0x7160,	// (0x00012ba7) heading_pane_cp4

0x716a,	// (0x00012bb1) listscroll_popup_colour_pane

0x7172,	// (0x00012bb9) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x7172,	// (0x00012bb9) cell_large_graphic_colour_none_popup_pane

0x7186,	// (0x00012bcd) grid_large_graphic_colour_popup_pane_ParamLimits

0x7186,	// (0x00012bcd) grid_large_graphic_colour_popup_pane

0x71aa,	// (0x00012bf1) listscroll_popup_colour_pane_g1_ParamLimits

0x71aa,	// (0x00012bf1) listscroll_popup_colour_pane_g1

0x71c1,	// (0x00012c08) listscroll_popup_colour_pane_g2_ParamLimits

0x71c1,	// (0x00012c08) listscroll_popup_colour_pane_g2

0x71d8,	// (0x00012c1f) listscroll_popup_colour_pane_g3_ParamLimits

0x71d8,	// (0x00012c1f) listscroll_popup_colour_pane_g3

0x71e8,	// (0x00012c2f) listscroll_popup_colour_pane_g4_ParamLimits

0x71e8,	// (0x00012c2f) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x0001afba) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x0001afba) listscroll_popup_colour_pane_g

0x71f8,	// (0x00012c3f) scroll_pane_cp6_ParamLimits

0x71f8,	// (0x00012c3f) scroll_pane_cp6

0x720a,	// (0x00012c51) cell_large_graphic_colour_popup_pane_ParamLimits

0x720a,	// (0x00012c51) cell_large_graphic_colour_popup_pane

0x7229,	// (0x00012c70) cell_large_graphic_colour_none_popup_pane_t1

0x6b6e,	// (0x000125b5) grid_highlight_pane_cp5

0x7238,	// (0x00012c7f) cell_large_graphic_colour_popup_pane_g1

0x7240,	// (0x00012c87) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x0001afc3) cell_large_graphic_colour_popup_pane_g

0x7248,	// (0x00012c8f) cell_large_graphic_colour_popup_pane_g2_copy1

0x7251,	// (0x00012c98) grid_highlight_pane_cp4

0x7259,	// (0x00012ca0) bg_popup_window_pane_cp8_ParamLimits

0x7259,	// (0x00012ca0) bg_popup_window_pane_cp8

0x7274,	// (0x00012cbb) popup_snote_single_text_window_g1_ParamLimits

0x7274,	// (0x00012cbb) popup_snote_single_text_window_g1

0x7286,	// (0x00012ccd) popup_snote_single_text_window_t1_ParamLimits

0x7286,	// (0x00012ccd) popup_snote_single_text_window_t1

0x7299,	// (0x00012ce0) popup_snote_single_text_window_t2_ParamLimits

0x7299,	// (0x00012ce0) popup_snote_single_text_window_t2

0x72ac,	// (0x00012cf3) popup_snote_single_text_window_t3_ParamLimits

0x72ac,	// (0x00012cf3) popup_snote_single_text_window_t3

0x72e5,	// (0x00012d2c) popup_snote_single_text_window_t4_ParamLimits

0x72e5,	// (0x00012d2c) popup_snote_single_text_window_t4

0x7319,	// (0x00012d60) popup_snote_single_text_window_t5_ParamLimits

0x7319,	// (0x00012d60) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x0001afc8) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x0001afc8) popup_snote_single_text_window_t

0x7348,	// (0x00012d8f) bg_popup_window_pane_cp9_ParamLimits

0x7348,	// (0x00012d8f) bg_popup_window_pane_cp9

0x7274,	// (0x00012cbb) popup_snote_single_graphic_window_g1_ParamLimits

0x7274,	// (0x00012cbb) popup_snote_single_graphic_window_g1

0x7356,	// (0x00012d9d) popup_snote_single_graphic_window_g2_ParamLimits

0x7356,	// (0x00012d9d) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x0001afd3) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x0001afd3) popup_snote_single_graphic_window_g

0x7362,	// (0x00012da9) popup_snote_single_graphic_window_t1_ParamLimits

0x7362,	// (0x00012da9) popup_snote_single_graphic_window_t1

0x7375,	// (0x00012dbc) popup_snote_single_graphic_window_t2_ParamLimits

0x7375,	// (0x00012dbc) popup_snote_single_graphic_window_t2

0x7388,	// (0x00012dcf) popup_snote_single_graphic_window_t3_ParamLimits

0x7388,	// (0x00012dcf) popup_snote_single_graphic_window_t3

0x73c1,	// (0x00012e08) popup_snote_single_graphic_window_t4_ParamLimits

0x73c1,	// (0x00012e08) popup_snote_single_graphic_window_t4

0x73f5,	// (0x00012e3c) popup_snote_single_graphic_window_t5_ParamLimits

0x73f5,	// (0x00012e3c) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x0001afd8) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x0001afd8) popup_snote_single_graphic_window_t

0xaa86,	// (0x000164cd) grid_graphic_popup_pane_ParamLimits

0xaa86,	// (0x000164cd) grid_graphic_popup_pane

0xaab0,	// (0x000164f7) listscroll_popup_graphic_pane_g1_ParamLimits

0xaab0,	// (0x000164f7) listscroll_popup_graphic_pane_g1

0xaac4,	// (0x0001650b) listscroll_popup_graphic_pane_g2_ParamLimits

0xaac4,	// (0x0001650b) listscroll_popup_graphic_pane_g2

0x0001,

0xf981,	// (0x0001b3c8) listscroll_popup_graphic_pane_g_ParamLimits

0xf981,	// (0x0001b3c8) listscroll_popup_graphic_pane_g

0xaad8,	// (0x0001651f) scroll_pane_cp5

0xaa17,	// (0x0001645e) cell_graphic_popup_pane_ParamLimits

0xaa17,	// (0x0001645e) cell_graphic_popup_pane

0xa9f8,	// (0x0001643f) cell_graphic_popup_pane_g1

0xaa00,	// (0x00016447) cell_graphic_popup_pane_g2

0x7248,	// (0x00012c8f) cell_graphic_popup_pane_g3

0x0002,

0xf97a,	// (0x0001b3c1) cell_graphic_popup_pane_g

0xaa09,	// (0x00016450) cell_graphic_popup_pane_t2

0x7251,	// (0x00012c98) grid_highlight_pane_cp3

0x7436,	// (0x00012e7d) list_gen_pane_ParamLimits

0x7436,	// (0x00012e7d) list_gen_pane

0x7468,	// (0x00012eaf) scroll_pane

0xa950,	// (0x00016397) bg_list_pane_g1_ParamLimits

0xa950,	// (0x00016397) bg_list_pane_g1

0xa96d,	// (0x000163b4) bg_list_pane_g2_ParamLimits

0xa96d,	// (0x000163b4) bg_list_pane_g2

0xa982,	// (0x000163c9) bg_list_pane_g3_ParamLimits

0xa982,	// (0x000163c9) bg_list_pane_g3

0xa996,	// (0x000163dd) bg_list_pane_g4_ParamLimits

0xa996,	// (0x000163dd) bg_list_pane_g4

0xa9aa,	// (0x000163f1) bg_list_pane_g5_ParamLimits

0xa9aa,	// (0x000163f1) bg_list_pane_g5

0x0004,

0xf96f,	// (0x0001b3b6) bg_list_pane_g_ParamLimits

0xf96f,	// (0x0001b3b6) bg_list_pane_g

0xa842,	// (0x00016289) list_double2_graphic_large_graphic_pane_ParamLimits

0xa842,	// (0x00016289) list_double2_graphic_large_graphic_pane

0xa842,	// (0x00016289) list_double2_graphic_pane_ParamLimits

0xa842,	// (0x00016289) list_double2_graphic_pane

0xa842,	// (0x00016289) list_double2_large_graphic_pane_ParamLimits

0xa842,	// (0x00016289) list_double2_large_graphic_pane

0xa842,	// (0x00016289) list_double2_pane_ParamLimits

0xa842,	// (0x00016289) list_double2_pane

0xa842,	// (0x00016289) list_double_graphic_heading_pane_ParamLimits

0xa842,	// (0x00016289) list_double_graphic_heading_pane

0xa842,	// (0x00016289) list_double_graphic_pane_ParamLimits

0xa842,	// (0x00016289) list_double_graphic_pane

0xa842,	// (0x00016289) list_double_heading_pane_ParamLimits

0xa842,	// (0x00016289) list_double_heading_pane

0xa842,	// (0x00016289) list_double_large_graphic_pane_ParamLimits

0xa842,	// (0x00016289) list_double_large_graphic_pane

0xa842,	// (0x00016289) list_double_number_pane_ParamLimits

0xa842,	// (0x00016289) list_double_number_pane

0xa842,	// (0x00016289) list_double_pane_ParamLimits

0xa842,	// (0x00016289) list_double_pane

0xa842,	// (0x00016289) list_double_time_pane_ParamLimits

0xa842,	// (0x00016289) list_double_time_pane

0xa842,	// (0x00016289) list_setting_number_pane_ParamLimits

0xa842,	// (0x00016289) list_setting_number_pane

0xa842,	// (0x00016289) list_setting_pane_ParamLimits

0xa842,	// (0x00016289) list_setting_pane

0xa8ab,	// (0x000162f2) list_single_2graphic_pane_ParamLimits

0xa8ab,	// (0x000162f2) list_single_2graphic_pane

0xa8ab,	// (0x000162f2) list_single_graphic_heading_pane_ParamLimits

0xa8ab,	// (0x000162f2) list_single_graphic_heading_pane

0xa8ab,	// (0x000162f2) list_single_graphic_pane_ParamLimits

0xa8ab,	// (0x000162f2) list_single_graphic_pane

0xa8ab,	// (0x000162f2) list_single_heading_pane_ParamLimits

0xa8ab,	// (0x000162f2) list_single_heading_pane

0xa92e,	// (0x00016375) list_single_large_graphic_pane_ParamLimits

0xa92e,	// (0x00016375) list_single_large_graphic_pane

0xa8ab,	// (0x000162f2) list_single_number_heading_pane_ParamLimits

0xa8ab,	// (0x000162f2) list_single_number_heading_pane

0xa8ab,	// (0x000162f2) list_single_number_pane_ParamLimits

0xa8ab,	// (0x000162f2) list_single_number_pane

0xa8ab,	// (0x000162f2) list_single_pane_ParamLimits

0xa8ab,	// (0x000162f2) list_single_pane

0x6b6e,	// (0x000125b5) list_highlight_pane_cp1

0x74a8,	// (0x00012eef) list_single_pane_g1_ParamLimits

0x74a8,	// (0x00012eef) list_single_pane_g1

0x74b4,	// (0x00012efb) list_single_pane_g2_ParamLimits

0x74b4,	// (0x00012efb) list_single_pane_g2

0x0001,

0xf5a3,	// (0x0001afea) list_single_pane_g_ParamLimits

0xf5a3,	// (0x0001afea) list_single_pane_g

0xa7fb,	// (0x00016242) list_single_pane_t1_ParamLimits

0xa7fb,	// (0x00016242) list_single_pane_t1

0x74a8,	// (0x00012eef) list_single_number_pane_g1_ParamLimits

0x74a8,	// (0x00012eef) list_single_number_pane_g1

0x74b4,	// (0x00012efb) list_single_number_pane_g2_ParamLimits

0x74b4,	// (0x00012efb) list_single_number_pane_g2

0x0001,

0xf5a3,	// (0x0001afea) list_single_number_pane_g_ParamLimits

0xf5a3,	// (0x0001afea) list_single_number_pane_g

0x90ff,	// (0x00014b46) list_single_number_pane_t1_ParamLimits

0x90ff,	// (0x00014b46) list_single_number_pane_t1

0xa59d,	// (0x00015fe4) list_single_number_pane_t2_ParamLimits

0xa59d,	// (0x00015fe4) list_single_number_pane_t2

0x0001,

0xf930,	// (0x0001b377) list_single_number_pane_t_ParamLimits

0xf930,	// (0x0001b377) list_single_number_pane_t

0x749c,	// (0x00012ee3) list_single_graphic_pane_g1_ParamLimits

0x749c,	// (0x00012ee3) list_single_graphic_pane_g1

0x74a8,	// (0x00012eef) list_single_graphic_pane_g2_ParamLimits

0x74a8,	// (0x00012eef) list_single_graphic_pane_g2

0x74b4,	// (0x00012efb) list_single_graphic_pane_g3_ParamLimits

0x74b4,	// (0x00012efb) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x0001afe3) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x0001afe3) list_single_graphic_pane_g

0x74c0,	// (0x00012f07) list_single_graphic_pane_t1_ParamLimits

0x74c0,	// (0x00012f07) list_single_graphic_pane_t1

0x74a8,	// (0x00012eef) list_single_heading_pane_g1_ParamLimits

0x74a8,	// (0x00012eef) list_single_heading_pane_g1

0x74b4,	// (0x00012efb) list_single_heading_pane_g2_ParamLimits

0x74b4,	// (0x00012efb) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x0001afea) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x0001afea) list_single_heading_pane_g

0x74d6,	// (0x00012f1d) list_single_heading_pane_t1_ParamLimits

0x74d6,	// (0x00012f1d) list_single_heading_pane_t1

0x74ec,	// (0x00012f33) list_single_heading_pane_t2_ParamLimits

0x74ec,	// (0x00012f33) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x0001afef) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x0001afef) list_single_heading_pane_t

0x74a8,	// (0x00012eef) list_single_number_heading_pane_g1_ParamLimits

0x74a8,	// (0x00012eef) list_single_number_heading_pane_g1

0x74b4,	// (0x00012efb) list_single_number_heading_pane_g2_ParamLimits

0x74b4,	// (0x00012efb) list_single_number_heading_pane_g2

0x0001,

0xf5a3,	// (0x0001afea) list_single_number_heading_pane_g_ParamLimits

0xf5a3,	// (0x0001afea) list_single_number_heading_pane_g

0x74d6,	// (0x00012f1d) list_single_number_heading_pane_t1_ParamLimits

0x74d6,	// (0x00012f1d) list_single_number_heading_pane_t1

0x74fe,	// (0x00012f45) list_single_number_heading_pane_t2_ParamLimits

0x74fe,	// (0x00012f45) list_single_number_heading_pane_t2

0x7510,	// (0x00012f57) list_single_number_heading_pane_t3_ParamLimits

0x7510,	// (0x00012f57) list_single_number_heading_pane_t3

0x0002,

0xf5ad,	// (0x0001aff4) list_single_number_heading_pane_t_ParamLimits

0xf5ad,	// (0x0001aff4) list_single_number_heading_pane_t

0x7522,	// (0x00012f69) list_single_graphic_heading_pane_g1_ParamLimits

0x7522,	// (0x00012f69) list_single_graphic_heading_pane_g1

0x752e,	// (0x00012f75) list_single_graphic_heading_pane_g4_ParamLimits

0x752e,	// (0x00012f75) list_single_graphic_heading_pane_g4

0x74b4,	// (0x00012efb) list_single_graphic_heading_pane_g5_ParamLimits

0x74b4,	// (0x00012efb) list_single_graphic_heading_pane_g5

0x0002,

0xf5b4,	// (0x0001affb) list_single_graphic_heading_pane_g_ParamLimits

0xf5b4,	// (0x0001affb) list_single_graphic_heading_pane_g

0x74d6,	// (0x00012f1d) list_single_graphic_heading_pane_t1_ParamLimits

0x74d6,	// (0x00012f1d) list_single_graphic_heading_pane_t1

0x753f,	// (0x00012f86) list_single_graphic_heading_pane_t2_ParamLimits

0x753f,	// (0x00012f86) list_single_graphic_heading_pane_t2

0x0001,

0xf5bb,	// (0x0001b002) list_single_graphic_heading_pane_t_ParamLimits

0xf5bb,	// (0x0001b002) list_single_graphic_heading_pane_t

0x7551,	// (0x00012f98) list_single_large_graphic_pane_g1_ParamLimits

0x7551,	// (0x00012f98) list_single_large_graphic_pane_g1

0x74a8,	// (0x00012eef) list_single_large_graphic_pane_g2_ParamLimits

0x74a8,	// (0x00012eef) list_single_large_graphic_pane_g2

0x74b4,	// (0x00012efb) list_single_large_graphic_pane_g3_ParamLimits

0x74b4,	// (0x00012efb) list_single_large_graphic_pane_g3

0x0002,

0xf5c0,	// (0x0001b007) list_single_large_graphic_pane_g_ParamLimits

0xf5c0,	// (0x0001b007) list_single_large_graphic_pane_g

0x9878,	// (0x000152bf) wait_border_pane_g2_copy1

0x755d,	// (0x00012fa4) list_single_large_graphic_pane_g4_cp2

0x7565,	// (0x00012fac) list_single_large_graphic_pane_t1_ParamLimits

0x7565,	// (0x00012fac) list_single_large_graphic_pane_t1

0x757b,	// (0x00012fc2) list_double_pane_g1_ParamLimits

0x757b,	// (0x00012fc2) list_double_pane_g1

0x7587,	// (0x00012fce) list_double_pane_g2_ParamLimits

0x7587,	// (0x00012fce) list_double_pane_g2

0x0001,

0xf5c7,	// (0x0001b00e) list_double_pane_g_ParamLimits

0xf5c7,	// (0x0001b00e) list_double_pane_g

0x7593,	// (0x00012fda) list_double_pane_t1_ParamLimits

0x7593,	// (0x00012fda) list_double_pane_t1

0x75a9,	// (0x00012ff0) list_double_pane_t2_ParamLimits

0x75a9,	// (0x00012ff0) list_double_pane_t2

0x0001,

0xf5cc,	// (0x0001b013) list_double_pane_t_ParamLimits

0xf5cc,	// (0x0001b013) list_double_pane_t

0x75bb,	// (0x00013002) list_double2_pane_g1_ParamLimits

0x75bb,	// (0x00013002) list_double2_pane_g1

0x75cc,	// (0x00013013) list_double2_pane_g2_ParamLimits

0x75cc,	// (0x00013013) list_double2_pane_g2

0x0001,

0xf5d1,	// (0x0001b018) list_double2_pane_g_ParamLimits

0xf5d1,	// (0x0001b018) list_double2_pane_g

0x75d8,	// (0x0001301f) list_double2_pane_t1_ParamLimits

0x75d8,	// (0x0001301f) list_double2_pane_t1

0x75ee,	// (0x00013035) list_double2_pane_t2_ParamLimits

0x75ee,	// (0x00013035) list_double2_pane_t2

0x0001,

0xf5d6,	// (0x0001b01d) list_double2_pane_t_ParamLimits

0xf5d6,	// (0x0001b01d) list_double2_pane_t

0x757b,	// (0x00012fc2) list_double_number_pane_g1_ParamLimits

0x757b,	// (0x00012fc2) list_double_number_pane_g1

0x7587,	// (0x00012fce) list_double_number_pane_g2_ParamLimits

0x7587,	// (0x00012fce) list_double_number_pane_g2

0x0001,

0xf5c7,	// (0x0001b00e) list_double_number_pane_g_ParamLimits

0xf5c7,	// (0x0001b00e) list_double_number_pane_g

0x7600,	// (0x00013047) list_double_number_pane_t1_ParamLimits

0x7600,	// (0x00013047) list_double_number_pane_t1

0x7612,	// (0x00013059) list_double_number_pane_t2_ParamLimits

0x7612,	// (0x00013059) list_double_number_pane_t2

0x7628,	// (0x0001306f) list_double_number_pane_t3_ParamLimits

0x7628,	// (0x0001306f) list_double_number_pane_t3

0x0002,

0xf5db,	// (0x0001b022) list_double_number_pane_t_ParamLimits

0xf5db,	// (0x0001b022) list_double_number_pane_t

0x763a,	// (0x00013081) list_double_graphic_pane_g1_ParamLimits

0x763a,	// (0x00013081) list_double_graphic_pane_g1

0x7646,	// (0x0001308d) list_double_graphic_pane_g2_ParamLimits

0x7646,	// (0x0001308d) list_double_graphic_pane_g2

0x7655,	// (0x0001309c) list_double_graphic_pane_g3_ParamLimits

0x7655,	// (0x0001309c) list_double_graphic_pane_g3

0x0003,

0xf5e2,	// (0x0001b029) list_double_graphic_pane_g_ParamLimits

0xf5e2,	// (0x0001b029) list_double_graphic_pane_g

0x766d,	// (0x000130b4) list_double_graphic_pane_t1_ParamLimits

0x766d,	// (0x000130b4) list_double_graphic_pane_t1

0x7683,	// (0x000130ca) list_double_graphic_pane_t2_ParamLimits

0x7683,	// (0x000130ca) list_double_graphic_pane_t2

0x0001,

0xf5eb,	// (0x0001b032) list_double_graphic_pane_t_ParamLimits

0xf5eb,	// (0x0001b032) list_double_graphic_pane_t

0x7695,	// (0x000130dc) list_double2_graphic_pane_g1_ParamLimits

0x7695,	// (0x000130dc) list_double2_graphic_pane_g1

0x76a1,	// (0x000130e8) list_double2_graphic_pane_g2_ParamLimits

0x76a1,	// (0x000130e8) list_double2_graphic_pane_g2

0x75cc,	// (0x00013013) list_double2_graphic_pane_g3_ParamLimits

0x75cc,	// (0x00013013) list_double2_graphic_pane_g3

0x0002,

0xf5f0,	// (0x0001b037) list_double2_graphic_pane_g_ParamLimits

0xf5f0,	// (0x0001b037) list_double2_graphic_pane_g

0x76ad,	// (0x000130f4) list_double2_graphic_pane_t1_ParamLimits

0x76ad,	// (0x000130f4) list_double2_graphic_pane_t1

0x76c3,	// (0x0001310a) list_double2_graphic_pane_t2_ParamLimits

0x76c3,	// (0x0001310a) list_double2_graphic_pane_t2

0x0001,

0xf5f7,	// (0x0001b03e) list_double2_graphic_pane_t_ParamLimits

0xf5f7,	// (0x0001b03e) list_double2_graphic_pane_t

0x76d5,	// (0x0001311c) list_double_large_graphic_pane_g1_ParamLimits

0x76d5,	// (0x0001311c) list_double_large_graphic_pane_g1

0x76f4,	// (0x0001313b) list_double_large_graphic_pane_g2_ParamLimits

0x76f4,	// (0x0001313b) list_double_large_graphic_pane_g2

0x7587,	// (0x00012fce) list_double_large_graphic_pane_g3_ParamLimits

0x7587,	// (0x00012fce) list_double_large_graphic_pane_g3

0x7705,	// (0x0001314c) list_double_large_graphic_pane_g4_ParamLimits

0x7705,	// (0x0001314c) list_double_large_graphic_pane_g4

0x0004,

0xf5fc,	// (0x0001b043) list_double_large_graphic_pane_g_ParamLimits

0xf5fc,	// (0x0001b043) list_double_large_graphic_pane_g

0x772b,	// (0x00013172) list_double_large_graphic_pane_t1_ParamLimits

0x772b,	// (0x00013172) list_double_large_graphic_pane_t1

0x7744,	// (0x0001318b) list_double_large_graphic_pane_t2_ParamLimits

0x7744,	// (0x0001318b) list_double_large_graphic_pane_t2

0x0001,

0xf607,	// (0x0001b04e) list_double_large_graphic_pane_t_ParamLimits

0xf607,	// (0x0001b04e) list_double_large_graphic_pane_t

0x7756,	// (0x0001319d) list_double2_large_graphic_pane_g1_ParamLimits

0x7756,	// (0x0001319d) list_double2_large_graphic_pane_g1

0x75bb,	// (0x00013002) list_double2_large_graphic_pane_g2_ParamLimits

0x75bb,	// (0x00013002) list_double2_large_graphic_pane_g2

0x75cc,	// (0x00013013) list_double2_large_graphic_pane_g3_ParamLimits

0x75cc,	// (0x00013013) list_double2_large_graphic_pane_g3

0x0002,

0xf60c,	// (0x0001b053) list_double2_large_graphic_pane_g_ParamLimits

0xf60c,	// (0x0001b053) list_double2_large_graphic_pane_g

0x7762,	// (0x000131a9) list_double2_large_graphic_pane_t1_ParamLimits

0x7762,	// (0x000131a9) list_double2_large_graphic_pane_t1

0x7778,	// (0x000131bf) list_double2_large_graphic_pane_t2_ParamLimits

0x7778,	// (0x000131bf) list_double2_large_graphic_pane_t2

0x0001,

0xf613,	// (0x0001b05a) list_double2_large_graphic_pane_t_ParamLimits

0xf613,	// (0x0001b05a) list_double2_large_graphic_pane_t

0x778a,	// (0x000131d1) list_double_heading_pane_g1_ParamLimits

0x778a,	// (0x000131d1) list_double_heading_pane_g1

0x779b,	// (0x000131e2) list_double_heading_pane_g2_ParamLimits

0x779b,	// (0x000131e2) list_double_heading_pane_g2

0x0001,

0xf618,	// (0x0001b05f) list_double_heading_pane_g_ParamLimits

0xf618,	// (0x0001b05f) list_double_heading_pane_g

0x77a7,	// (0x000131ee) list_double_heading_pane_t1_ParamLimits

0x77a7,	// (0x000131ee) list_double_heading_pane_t1

0x77bd,	// (0x00013204) list_double_heading_pane_t2_ParamLimits

0x77bd,	// (0x00013204) list_double_heading_pane_t2

0x0001,

0xf61d,	// (0x0001b064) list_double_heading_pane_t_ParamLimits

0xf61d,	// (0x0001b064) list_double_heading_pane_t

0x763a,	// (0x00013081) list_double_graphic_heading_pane_g1_ParamLimits

0x763a,	// (0x00013081) list_double_graphic_heading_pane_g1

0x778a,	// (0x000131d1) list_double_graphic_heading_pane_g2_ParamLimits

0x778a,	// (0x000131d1) list_double_graphic_heading_pane_g2

0x779b,	// (0x000131e2) list_double_graphic_heading_pane_g3_ParamLimits

0x779b,	// (0x000131e2) list_double_graphic_heading_pane_g3

0x0002,

0xf622,	// (0x0001b069) list_double_graphic_heading_pane_g_ParamLimits

0xf622,	// (0x0001b069) list_double_graphic_heading_pane_g

0x77cf,	// (0x00013216) list_double_graphic_heading_pane_t1_ParamLimits

0x77cf,	// (0x00013216) list_double_graphic_heading_pane_t1

0x77e5,	// (0x0001322c) list_double_graphic_heading_pane_t2_ParamLimits

0x77e5,	// (0x0001322c) list_double_graphic_heading_pane_t2

0x0001,

0xf629,	// (0x0001b070) list_double_graphic_heading_pane_t_ParamLimits

0xf629,	// (0x0001b070) list_double_graphic_heading_pane_t

0x76f4,	// (0x0001313b) list_double_time_pane_g1_ParamLimits

0x76f4,	// (0x0001313b) list_double_time_pane_g1

0x7587,	// (0x00012fce) list_double_time_pane_g2_ParamLimits

0x7587,	// (0x00012fce) list_double_time_pane_g2

0x0001,

0xf62e,	// (0x0001b075) list_double_time_pane_g_ParamLimits

0xf62e,	// (0x0001b075) list_double_time_pane_g

0x77f7,	// (0x0001323e) list_double_time_pane_t1_ParamLimits

0x77f7,	// (0x0001323e) list_double_time_pane_t1

0x780d,	// (0x00013254) list_double_time_pane_t2_ParamLimits

0x780d,	// (0x00013254) list_double_time_pane_t2

0x781f,	// (0x00013266) list_double_time_pane_t3_ParamLimits

0x781f,	// (0x00013266) list_double_time_pane_t3

0x7831,	// (0x00013278) list_double_time_pane_t4_ParamLimits

0x7831,	// (0x00013278) list_double_time_pane_t4

0x0003,

0xf633,	// (0x0001b07a) list_double_time_pane_t_ParamLimits

0xf633,	// (0x0001b07a) list_double_time_pane_t

0x76a1,	// (0x000130e8) list_setting_pane_g1_ParamLimits

0x76a1,	// (0x000130e8) list_setting_pane_g1

0x75cc,	// (0x00013013) list_setting_pane_g2_ParamLimits

0x75cc,	// (0x00013013) list_setting_pane_g2

0x0001,

0xf63c,	// (0x0001b083) list_setting_pane_g_ParamLimits

0xf63c,	// (0x0001b083) list_setting_pane_g

0x7843,	// (0x0001328a) list_setting_pane_t1_ParamLimits

0x7843,	// (0x0001328a) list_setting_pane_t1

0x785a,	// (0x000132a1) list_setting_pane_t2_ParamLimits

0x785a,	// (0x000132a1) list_setting_pane_t2

0x0002,

0xf641,	// (0x0001b088) list_setting_pane_t_ParamLimits

0xf641,	// (0x0001b088) list_setting_pane_t

0x7899,	// (0x000132e0) set_value_pane_cp_ParamLimits

0x7899,	// (0x000132e0) set_value_pane_cp

0x76a1,	// (0x000130e8) list_setting_number_pane_g1_ParamLimits

0x76a1,	// (0x000130e8) list_setting_number_pane_g1

0x75cc,	// (0x00013013) list_setting_number_pane_g2_ParamLimits

0x75cc,	// (0x00013013) list_setting_number_pane_g2

0x0001,

0xf63c,	// (0x0001b083) list_setting_number_pane_g_ParamLimits

0xf63c,	// (0x0001b083) list_setting_number_pane_g

0x78a5,	// (0x000132ec) list_setting_number_pane_t1_ParamLimits

0x78a5,	// (0x000132ec) list_setting_number_pane_t1

0x78b9,	// (0x00013300) list_setting_number_pane_t2_ParamLimits

0x78b9,	// (0x00013300) list_setting_number_pane_t2

0x78d0,	// (0x00013317) list_setting_number_pane_t3_ParamLimits

0x78d0,	// (0x00013317) list_setting_number_pane_t3

0x0003,

0xf648,	// (0x0001b08f) list_setting_number_pane_t_ParamLimits

0xf648,	// (0x0001b08f) list_setting_number_pane_t

0x7899,	// (0x000132e0) set_value_pane_ParamLimits

0x7899,	// (0x000132e0) set_value_pane

0x7913,	// (0x0001335a) bg_set_opt_pane_ParamLimits

0x7913,	// (0x0001335a) bg_set_opt_pane

0x7934,	// (0x0001337b) set_value_pane_t1

0x7942,	// (0x00013389) slider_set_pane_cp3

0x794b,	// (0x00013392) volume_small_pane_cp

0x7954,	// (0x0001339b) list_form_gen_pane

0x795d,	// (0x000133a4) scroll_pane_cp8

0x7976,	// (0x000133bd) form_field_data_pane_ParamLimits

0x7976,	// (0x000133bd) form_field_data_pane

0x7998,	// (0x000133df) form_field_data_wide_pane_ParamLimits

0x7998,	// (0x000133df) form_field_data_wide_pane

0x79bb,	// (0x00013402) form_field_popup_pane_ParamLimits

0x79bb,	// (0x00013402) form_field_popup_pane

0x79db,	// (0x00013422) form_field_popup_wide_pane_ParamLimits

0x79db,	// (0x00013422) form_field_popup_wide_pane

0x79f8,	// (0x0001343f) form_field_slider_pane_ParamLimits

0x79f8,	// (0x0001343f) form_field_slider_pane

0x7a0b,	// (0x00013452) form_field_slider_wide_pane_ParamLimits

0x7a0b,	// (0x00013452) form_field_slider_wide_pane

0x7a1e,	// (0x00013465) data_form_pane

0x7a34,	// (0x0001347b) form_field_data_pane_t1

0x7a4c,	// (0x00013493) input_focus_pane

0x7a5a,	// (0x000134a1) data_form_wide_pane

0x7a92,	// (0x000134d9) form_field_data_wide_pane_t1

0x7266,	// (0x00012cad) input_focus_pane_cp6

0x7ab1,	// (0x000134f8) form_field_popup_pane_t1

0x7a4c,	// (0x00013493) input_focus_pane_cp7

0x7ac9,	// (0x00013510) list_form_pane

0x7add,	// (0x00013524) form_field_popup_wide_pane_t1

0x7a4c,	// (0x00013493) input_focus_pane_cp8

0x7aef,	// (0x00013536) list_form_wide_pane

0x7b03,	// (0x0001354a) form_field_slider_pane_t1_ParamLimits

0x7b03,	// (0x0001354a) form_field_slider_pane_t1

0x7b15,	// (0x0001355c) form_field_slider_pane_t2_ParamLimits

0x7b15,	// (0x0001355c) form_field_slider_pane_t2

0x0001,

0xf658,	// (0x0001b09f) form_field_slider_pane_t_ParamLimits

0xf658,	// (0x0001b09f) form_field_slider_pane_t

0x6ee3,	// (0x0001292a) input_focus_pane_cp9_ParamLimits

0x6ee3,	// (0x0001292a) input_focus_pane_cp9

0x7b27,	// (0x0001356e) slider_cont_pane_ParamLimits

0x7b27,	// (0x0001356e) slider_cont_pane

0x7b3b,	// (0x00013582) form_field_slider_wide_pane_t1_ParamLimits

0x7b3b,	// (0x00013582) form_field_slider_wide_pane_t1

0x7b4d,	// (0x00013594) form_field_slider_wide_pane_t2_ParamLimits

0x7b4d,	// (0x00013594) form_field_slider_wide_pane_t2

0x0001,

0xf65d,	// (0x0001b0a4) form_field_slider_wide_pane_t_ParamLimits

0xf65d,	// (0x0001b0a4) form_field_slider_wide_pane_t

0x6ee3,	// (0x0001292a) input_focus_pane_cp10_ParamLimits

0x6ee3,	// (0x0001292a) input_focus_pane_cp10

0x7b5f,	// (0x000135a6) slider_cont_pane_cp1_ParamLimits

0x7b5f,	// (0x000135a6) slider_cont_pane_cp1

0x7b73,	// (0x000135ba) slider_form_pane_cp

0x7b7b,	// (0x000135c2) input_focus_pane_g1

0x7b83,	// (0x000135ca) input_focus_pane_g2

0x7b8b,	// (0x000135d2) input_focus_pane_g3

0x7b93,	// (0x000135da) input_focus_pane_g4

0x7b9b,	// (0x000135e2) input_focus_pane_g5

0x7ba3,	// (0x000135ea) input_focus_pane_g6

0x7bab,	// (0x000135f2) input_focus_pane_g7

0x7bb3,	// (0x000135fa) input_focus_pane_g8

0x7bbb,	// (0x00013602) input_focus_pane_g9

0x3b7a,	// (0x0000f5c1) input_focus_pane_g10

0x0009,

0xf662,	// (0x0001b0a9) input_focus_pane_g

0x9881,	// (0x000152c8) wait_border_pane_g3_copy1

0x7bc3,	// (0x0001360a) data_form_pane_t1

0x3b7a,	// (0x0000f5c1) wait_anim_pane_g1_copy1

0xa7de,	// (0x00016225) data_form_wide_pane_t1

0x7bde,	// (0x00013625) list_form_graphic_pane_cp_ParamLimits

0x7bde,	// (0x00013625) list_form_graphic_pane_cp

0xa7b3,	// (0x000161fa) slider_form_pane_g1

0xa7bc,	// (0x00016203) slider_form_pane_g2

0x0006,

0xf960,	// (0x0001b3a7) slider_form_pane_g

0x7bf7,	// (0x0001363e) list_form_graphic_pane_ParamLimits

0x7bf7,	// (0x0001363e) list_form_graphic_pane

0x7c13,	// (0x0001365a) list_form_graphic_pane_g1

0x7c1b,	// (0x00013662) list_form_graphic_pane_t1_ParamLimits

0x7c1b,	// (0x00013662) list_form_graphic_pane_t1

0x6c4e,	// (0x00012695) list_highlight_pane_cp5_ParamLimits

0x6c4e,	// (0x00012695) list_highlight_pane_cp5

0x7c30,	// (0x00013677) find_pane_g1

0x7c39,	// (0x00013680) input_find_pane

0x7c42,	// (0x00013689) input_find_pane_g1_ParamLimits

0x7c42,	// (0x00013689) input_find_pane_g1

0x7c4e,	// (0x00013695) input_find_pane_t1_ParamLimits

0x7c4e,	// (0x00013695) input_find_pane_t1

0x7c63,	// (0x000136aa) input_find_pane_t2_ParamLimits

0x7c63,	// (0x000136aa) input_find_pane_t2

0x0001,

0xf677,	// (0x0001b0be) input_find_pane_t_ParamLimits

0xf677,	// (0x0001b0be) input_find_pane_t

0x7c78,	// (0x000136bf) input_focus_pane_cp5_ParamLimits

0x7c78,	// (0x000136bf) input_focus_pane_cp5

0x7c97,	// (0x000136de) bg_popup_window_pane_cp2_ParamLimits

0x7c97,	// (0x000136de) bg_popup_window_pane_cp2

0x7ca4,	// (0x000136eb) listscroll_menu_pane_ParamLimits

0x7ca4,	// (0x000136eb) listscroll_menu_pane

0x7cb0,	// (0x000136f7) popup_submenu_window_ParamLimits

0x7cb0,	// (0x000136f7) popup_submenu_window

0x7cdc,	// (0x00013723) find_popup_pane_g1

0x7ce4,	// (0x0001372b) input_popup_find_pane_cp

0x7cee,	// (0x00013735) input_focus_pane_cp4_ParamLimits

0x7cee,	// (0x00013735) input_focus_pane_cp4

0x7d08,	// (0x0001374f) input_popup_find_pane_t1_ParamLimits

0x7d08,	// (0x0001374f) input_popup_find_pane_t1

0x6b6e,	// (0x000125b5) bg_popup_sub_pane_cp

0x7d36,	// (0x0001377d) listscroll_popup_sub_pane

0x7d3e,	// (0x00013785) list_submenu_pane_ParamLimits

0x7d3e,	// (0x00013785) list_submenu_pane

0x7d4f,	// (0x00013796) scroll_pane_cp4

0x7d57,	// (0x0001379e) list_single_popup_submenu_pane_ParamLimits

0x7d57,	// (0x0001379e) list_single_popup_submenu_pane

0x7d6b,	// (0x000137b2) list_single_popup_submenu_pane_g1

0x7d73,	// (0x000137ba) list_single_popup_submenu_pane_t1_ParamLimits

0x7d73,	// (0x000137ba) list_single_popup_submenu_pane_t1

0x6c4e,	// (0x00012695) bg_active_tab_pane_cp1_ParamLimits

0x6c4e,	// (0x00012695) bg_active_tab_pane_cp1

0x7d88,	// (0x000137cf) tabs_2_active_pane_g1

0x7d90,	// (0x000137d7) tabs_2_active_pane_t1

0x6c4e,	// (0x00012695) bg_passive_tab_pane_cp1_ParamLimits

0x6c4e,	// (0x00012695) bg_passive_tab_pane_cp1

0x7d88,	// (0x000137cf) tabs_2_passive_pane_g1

0x7d90,	// (0x000137d7) tabs_2_passive_pane_t1

0x7da2,	// (0x000137e9) bg_active_tab_pane_cp4

0x7db0,	// (0x000137f7) tabs_2_long_active_pane_t1

0x7dc3,	// (0x0001380a) bg_passive_tab_pane_cp4

0x568a,	// (0x000110d1) list_single_midp_graphic_pane_g4_ParamLimits

0x7da2,	// (0x000137e9) bg_active_tab_pane_cp5

0x7dcf,	// (0x00013816) tabs_3_long_active_pane_t1

0x7dc3,	// (0x0001380a) bg_passive_tab_pane_cp5

0x568a,	// (0x000110d1) list_single_midp_graphic_pane_g4

0x6c4e,	// (0x00012695) bg_popup_window_pane_cp13_ParamLimits

0x6c4e,	// (0x00012695) bg_popup_window_pane_cp13

0x7dea,	// (0x00013831) listscroll_popup_fast_pane_ParamLimits

0x7dea,	// (0x00013831) listscroll_popup_fast_pane

0x7df9,	// (0x00013840) grid_popup_fast_pane_ParamLimits

0x7df9,	// (0x00013840) grid_popup_fast_pane

0x7e0b,	// (0x00013852) scroll_pane_cp9_ParamLimits

0x7e0b,	// (0x00013852) scroll_pane_cp9

0xc6fa,	// (0x00018141) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc6fa,	// (0x00018141) list_single_graphic_hl_pane_t1_cp2

0x7e2f,	// (0x00013876) input_focus_pane_cp20_ParamLimits

0x7e2f,	// (0x00013876) input_focus_pane_cp20

0x7e3d,	// (0x00013884) query_popup_data_pane_t1_ParamLimits

0x7e3d,	// (0x00013884) query_popup_data_pane_t1

0x7e50,	// (0x00013897) query_popup_data_pane_t2_ParamLimits

0x7e50,	// (0x00013897) query_popup_data_pane_t2

0x7e96,	// (0x000138dd) query_popup_data_pane_t3_ParamLimits

0x7e96,	// (0x000138dd) query_popup_data_pane_t3

0x7ed7,	// (0x0001391e) query_popup_data_pane_t4_ParamLimits

0x7ed7,	// (0x0001391e) query_popup_data_pane_t4

0x7f13,	// (0x0001395a) query_popup_data_pane_t5_ParamLimits

0x7f13,	// (0x0001395a) query_popup_data_pane_t5

0x0004,

0xf67c,	// (0x0001b0c3) query_popup_data_pane_t_ParamLimits

0xf67c,	// (0x0001b0c3) query_popup_data_pane_t

0x7b7b,	// (0x000135c2) bg_set_opt_pane_g1

0x7b83,	// (0x000135ca) bg_set_opt_pane_g2

0x7b8b,	// (0x000135d2) bg_set_opt_pane_g3

0x7b93,	// (0x000135da) bg_set_opt_pane_g4

0x7b9b,	// (0x000135e2) bg_set_opt_pane_g5

0x7ba3,	// (0x000135ea) bg_set_opt_pane_g6

0x7bab,	// (0x000135f2) bg_set_opt_pane_g7

0x7bb3,	// (0x000135fa) bg_set_opt_pane_g8

0x7bbb,	// (0x00013602) bg_set_opt_pane_g9

0x0008,

0xf687,	// (0x0001b0ce) bg_set_opt_pane_g

0x4c98,	// (0x000106df) control_top_pane_stacon_ParamLimits

0x4c98,	// (0x000106df) control_top_pane_stacon

0x4ceb,	// (0x00010732) signal_pane_stacon_ParamLimits

0x4ceb,	// (0x00010732) signal_pane_stacon

0x8594,	// (0x00013fdb) stacon_top_pane_g1_ParamLimits

0x8594,	// (0x00013fdb) stacon_top_pane_g1

0x4d10,	// (0x00010757) title_pane_stacon_ParamLimits

0x4d10,	// (0x00010757) title_pane_stacon

0x4d3a,	// (0x00010781) uni_indicator_pane_stacon_ParamLimits

0x4d3a,	// (0x00010781) uni_indicator_pane_stacon

0x4d4f,	// (0x00010796) battery_pane_stacon_ParamLimits

0x4d4f,	// (0x00010796) battery_pane_stacon

0x4d93,	// (0x000107da) control_bottom_pane_stacon_ParamLimits

0x4d93,	// (0x000107da) control_bottom_pane_stacon

0x4db6,	// (0x000107fd) navi_pane_stacon_ParamLimits

0x4db6,	// (0x000107fd) navi_pane_stacon

0x85b6,	// (0x00013ffd) stacon_bottom_pane_g1_ParamLimits

0x85b6,	// (0x00013ffd) stacon_bottom_pane_g1

0x49fb,	// (0x00010442) aid_levels_signal_lsc_ParamLimits

0x49fb,	// (0x00010442) aid_levels_signal_lsc

0x4a11,	// (0x00010458) signal_pane_stacon_g1_ParamLimits

0x4a11,	// (0x00010458) signal_pane_stacon_g1

0x4a25,	// (0x0001046c) signal_pane_stacon_g2_ParamLimits

0x4a25,	// (0x0001046c) signal_pane_stacon_g2

0x0001,

0xf69a,	// (0x0001b0e1) signal_pane_stacon_g_ParamLimits

0xf69a,	// (0x0001b0e1) signal_pane_stacon_g

0x4a5a,	// (0x000104a1) title_pane_stacon_t1_ParamLimits

0x4a5a,	// (0x000104a1) title_pane_stacon_t1

0x7f57,	// (0x0001399e) uni_indicator_pane_stacon_g1

0x7f61,	// (0x000139a8) uni_indicator_pane_stacon_g2

0x7f6b,	// (0x000139b2) uni_indicator_pane_stacon_g3

0x7f75,	// (0x000139bc) uni_indicator_pane_stacon_g4

0x0003,

0xf6a6,	// (0x0001b0ed) uni_indicator_pane_stacon_g

0x4a7f,	// (0x000104c6) control_top_pane_stacon_g1

0x4a87,	// (0x000104ce) control_top_pane_stacon_t1_ParamLimits

0x4a87,	// (0x000104ce) control_top_pane_stacon_t1

0x4abe,	// (0x00010505) aid_levels_battery_lsc_ParamLimits

0x4abe,	// (0x00010505) aid_levels_battery_lsc

0x4ad5,	// (0x0001051c) battery_pane_stacon_g1_ParamLimits

0x4ad5,	// (0x0001051c) battery_pane_stacon_g1

0x4ae8,	// (0x0001052f) battery_pane_stacon_g2_ParamLimits

0x4ae8,	// (0x0001052f) battery_pane_stacon_g2

0x0001,

0xf6af,	// (0x0001b0f6) battery_pane_stacon_g_ParamLimits

0xf6af,	// (0x0001b0f6) battery_pane_stacon_g

0x4b26,	// (0x0001056d) navi_icon_pane_stacon

0x4b3a,	// (0x00010581) navi_navi_pane_stacon

0x4b26,	// (0x0001056d) navi_text_pane_stacon

0x4a7f,	// (0x000104c6) control_bottom_pane_stacon_g1

0x4b4e,	// (0x00010595) control_bottom_pane_stacon_t1_ParamLimits

0x4b4e,	// (0x00010595) control_bottom_pane_stacon_t1

0x7f99,	// (0x000139e0) grid_app_pane_ParamLimits

0x7f99,	// (0x000139e0) grid_app_pane

0x7fbb,	// (0x00013a02) scroll_pane_cp15_ParamLimits

0x7fbb,	// (0x00013a02) scroll_pane_cp15

0x7fce,	// (0x00013a15) cell_app_pane_ParamLimits

0x7fce,	// (0x00013a15) cell_app_pane

0x7ff6,	// (0x00013a3d) cell_app_pane_g1_ParamLimits

0x7ff6,	// (0x00013a3d) cell_app_pane_g1

0x801a,	// (0x00013a61) cell_app_pane_g2_ParamLimits

0x801a,	// (0x00013a61) cell_app_pane_g2

0x0001,

0xf6b4,	// (0x0001b0fb) cell_app_pane_g_ParamLimits

0xf6b4,	// (0x0001b0fb) cell_app_pane_g

0x8026,	// (0x00013a6d) cell_app_pane_t1_ParamLimits

0x8026,	// (0x00013a6d) cell_app_pane_t1

0x803d,	// (0x00013a84) grid_highlight_pane_ParamLimits

0x803d,	// (0x00013a84) grid_highlight_pane

0x7b7b,	// (0x000135c2) cell_highlight_pane_g1

0x7b83,	// (0x000135ca) cell_highlight_pane_g2

0x7b8b,	// (0x000135d2) cell_highlight_pane_g3

0x7b93,	// (0x000135da) cell_highlight_pane_g4

0x7b9b,	// (0x000135e2) cell_highlight_pane_g5

0x7ba3,	// (0x000135ea) cell_highlight_pane_g6

0x7bab,	// (0x000135f2) cell_highlight_pane_g7

0x7bb3,	// (0x000135fa) cell_highlight_pane_g8

0x7bbb,	// (0x00013602) cell_highlight_pane_g9

0x3b7a,	// (0x0000f5c1) cell_highlight_pane_g10

0x0009,

0xf662,	// (0x0001b0a9) cell_highlight_pane_g

0x804e,	// (0x00013a95) bg_scroll_pane

0x4b98,	// (0x000105df) scroll_handle_pane

0x8095,	// (0x00013adc) scroll_bg_pane_g1

0x80aa,	// (0x00013af1) scroll_bg_pane_g2

0x80c2,	// (0x00013b09) scroll_bg_pane_g3

0x0002,

0xf6b9,	// (0x0001b100) scroll_bg_pane_g

0x80d7,	// (0x00013b1e) scroll_handle_focus_pane_ParamLimits

0x80d7,	// (0x00013b1e) scroll_handle_focus_pane

0x8095,	// (0x00013adc) scroll_handle_pane_g1

0x80e4,	// (0x00013b2b) scroll_handle_pane_g2

0x80c2,	// (0x00013b09) scroll_handle_pane_g3

0x0002,

0xf6c0,	// (0x0001b107) scroll_handle_pane_g

0x7cee,	// (0x00013735) bg_popup_sub_pane_cp21_ParamLimits

0x7cee,	// (0x00013735) bg_popup_sub_pane_cp21

0x80f8,	// (0x00013b3f) popup_fep_japan_predictive_window_t1_ParamLimits

0x80f8,	// (0x00013b3f) popup_fep_japan_predictive_window_t1

0x8112,	// (0x00013b59) popup_fep_japan_predictive_window_t2_ParamLimits

0x8112,	// (0x00013b59) popup_fep_japan_predictive_window_t2

0x8145,	// (0x00013b8c) popup_fep_japan_predictive_window_t3_ParamLimits

0x8145,	// (0x00013b8c) popup_fep_japan_predictive_window_t3

0x0002,

0xf6c7,	// (0x0001b10e) popup_fep_japan_predictive_window_t_ParamLimits

0xf6c7,	// (0x0001b10e) popup_fep_japan_predictive_window_t

0x6b6e,	// (0x000125b5) bg_popup_sub_pane_cp23

0x817c,	// (0x00013bc3) listscroll_japin_cand_pane

0x8184,	// (0x00013bcb) popup_fep_japan_candidate_window_t1

0x8192,	// (0x00013bd9) candidate_pane_ParamLimits

0x8192,	// (0x00013bd9) candidate_pane

0x81a4,	// (0x00013beb) scroll_pane_cp30

0x81ac,	// (0x00013bf3) list_single_popup_jap_candidate_pane_ParamLimits

0x81ac,	// (0x00013bf3) list_single_popup_jap_candidate_pane

0x6b6e,	// (0x000125b5) list_highlight_pane_cp30

0x81c1,	// (0x00013c08) list_single_popup_jap_candidate_pane_t1

0x81d0,	// (0x00013c17) level_1_signal

0x81e2,	// (0x00013c29) level_2_signal

0x81f5,	// (0x00013c3c) level_3_signal

0x8208,	// (0x00013c4f) level_4_signal

0x821b,	// (0x00013c62) level_5_signal

0x822e,	// (0x00013c75) level_6_signal

0x8241,	// (0x00013c88) level_7_signal

0x81d0,	// (0x00013c17) level_1_battery

0x81e2,	// (0x00013c29) level_2_battery

0x81f5,	// (0x00013c3c) level_3_battery

0x8208,	// (0x00013c4f) level_4_battery

0x821b,	// (0x00013c62) level_5_battery

0x822e,	// (0x00013c75) level_6_battery

0x8241,	// (0x00013c88) level_7_battery

0x826c,	// (0x00013cb3) list_menu_pane_ParamLimits

0x826c,	// (0x00013cb3) list_menu_pane

0x8282,	// (0x00013cc9) scroll_pane_cp25_ParamLimits

0x8282,	// (0x00013cc9) scroll_pane_cp25

0x829b,	// (0x00013ce2) list_double2_graphic_pane_cp2_ParamLimits

0x829b,	// (0x00013ce2) list_double2_graphic_pane_cp2

0x829b,	// (0x00013ce2) list_double2_large_graphic_pane_cp2_ParamLimits

0x829b,	// (0x00013ce2) list_double2_large_graphic_pane_cp2

0x829b,	// (0x00013ce2) list_double2_pane_cp2_ParamLimits

0x829b,	// (0x00013ce2) list_double2_pane_cp2

0x829b,	// (0x00013ce2) list_double_graphic_pane_cp2_ParamLimits

0x829b,	// (0x00013ce2) list_double_graphic_pane_cp2

0x829b,	// (0x00013ce2) list_double_large_graphic_pane_cp2_ParamLimits

0x829b,	// (0x00013ce2) list_double_large_graphic_pane_cp2

0x829b,	// (0x00013ce2) list_double_number_pane_cp2_ParamLimits

0x829b,	// (0x00013ce2) list_double_number_pane_cp2

0x829b,	// (0x00013ce2) list_double_pane_cp2_ParamLimits

0x829b,	// (0x00013ce2) list_double_pane_cp2

0x82bf,	// (0x00013d06) list_single_2graphic_pane_cp2_ParamLimits

0x82bf,	// (0x00013d06) list_single_2graphic_pane_cp2

0x82bf,	// (0x00013d06) list_single_graphic_heading_pane_cp2_ParamLimits

0x82bf,	// (0x00013d06) list_single_graphic_heading_pane_cp2

0x82bf,	// (0x00013d06) list_single_graphic_pane_cp2_ParamLimits

0x82bf,	// (0x00013d06) list_single_graphic_pane_cp2

0x82bf,	// (0x00013d06) list_single_heading_pane_cp2_ParamLimits

0x82bf,	// (0x00013d06) list_single_heading_pane_cp2

0x82d8,	// (0x00013d1f) list_single_large_graphic_pane_cp2_ParamLimits

0x82d8,	// (0x00013d1f) list_single_large_graphic_pane_cp2

0x82bf,	// (0x00013d06) list_single_number_heading_pane_cp2_ParamLimits

0x82bf,	// (0x00013d06) list_single_number_heading_pane_cp2

0x82bf,	// (0x00013d06) list_single_number_pane_cp2_ParamLimits

0x82bf,	// (0x00013d06) list_single_number_pane_cp2

0x82bf,	// (0x00013d06) list_single_pane_cp2_ParamLimits

0x82bf,	// (0x00013d06) list_single_pane_cp2

0x8354,	// (0x00013d9b) bg_popup_sub_pane_cp22

0x4c4a,	// (0x00010691) popup_side_volume_key_window_g1

0x4c74,	// (0x000106bb) popup_side_volume_key_window_t1

0x4c90,	// (0x000106d7) volume_small_pane_cp1

0x6ee3,	// (0x0001292a) bg_popup_sub_pane_cp24_ParamLimits

0x6ee3,	// (0x0001292a) bg_popup_sub_pane_cp24

0x836a,	// (0x00013db1) fep_china_uni_candidate_pane_ParamLimits

0x836a,	// (0x00013db1) fep_china_uni_candidate_pane

0x837e,	// (0x00013dc5) fep_china_uni_entry_pane

0x838e,	// (0x00013dd5) popup_fep_china_uni_window_g1

0x83aa,	// (0x00013df1) fep_china_uni_entry_pane_g1

0x83b2,	// (0x00013df9) fep_china_uni_entry_pane_g2

0x0001,

0xf6f8,	// (0x0001b13f) fep_china_uni_entry_pane_g

0x83ba,	// (0x00013e01) fep_entry_item_pane

0x83c4,	// (0x00013e0b) fep_candidate_item_pane

0x83cc,	// (0x00013e13) fep_china_uni_candidate_pane_g1

0x83d4,	// (0x00013e1b) fep_china_uni_candidate_pane_g2

0x83dc,	// (0x00013e23) fep_china_uni_candidate_pane_g3

0x83e4,	// (0x00013e2b) fep_china_uni_candidate_pane_g4

0x0003,

0xf6fd,	// (0x0001b144) fep_china_uni_candidate_pane_g

0x3b7a,	// (0x0000f5c1) fep_entry_item_pane_g1

0x83ec,	// (0x00013e33) fep_entry_item_pane_t1_ParamLimits

0x83ec,	// (0x00013e33) fep_entry_item_pane_t1

0x8402,	// (0x00013e49) fep_candidate_item_pane_t1_ParamLimits

0x8402,	// (0x00013e49) fep_candidate_item_pane_t1

0x8417,	// (0x00013e5e) fep_candidate_item_pane_t2_ParamLimits

0x8417,	// (0x00013e5e) fep_candidate_item_pane_t2

0x0001,

0xf706,	// (0x0001b14d) fep_candidate_item_pane_t_ParamLimits

0xf706,	// (0x0001b14d) fep_candidate_item_pane_t

0x6c4e,	// (0x00012695) list_highlight_pane_cp31_ParamLimits

0x6c4e,	// (0x00012695) list_highlight_pane_cp31

0x8429,	// (0x00013e70) level_1_signal_lsc

0x8432,	// (0x00013e79) level_2_signal_lsc

0x843b,	// (0x00013e82) level_3_signal_lsc

0x8444,	// (0x00013e8b) level_4_signal_lsc

0x844d,	// (0x00013e94) level_5_signal_lsc

0x8456,	// (0x00013e9d) level_6_signal_lsc

0x845f,	// (0x00013ea6) level_7_signal_lsc

0x845f,	// (0x00013ea6) level_1_battery_lsc

0x8468,	// (0x00013eaf) level_2_battery_lsc

0x8471,	// (0x00013eb8) level_3_battery_lsc

0x847a,	// (0x00013ec1) level_4_battery_lsc

0x8483,	// (0x00013eca) level_5_battery_lsc

0x848c,	// (0x00013ed3) level_6_battery_lsc

0x8429,	// (0x00013e70) level_7_battery_lsc

0x8495,	// (0x00013edc) scroll_handle_focus_pane_g1

0x849e,	// (0x00013ee5) scroll_handle_focus_pane_g2

0x84a7,	// (0x00013eee) scroll_handle_focus_pane_g3

0x0002,

0xf70b,	// (0x0001b152) scroll_handle_focus_pane_g

0x84b0,	// (0x00013ef7) list_single_2graphic_pane_g1_ParamLimits

0x84b0,	// (0x00013ef7) list_single_2graphic_pane_g1

0x752e,	// (0x00012f75) list_single_2graphic_pane_g2_ParamLimits

0x752e,	// (0x00012f75) list_single_2graphic_pane_g2

0x74b4,	// (0x00012efb) list_single_2graphic_pane_g3_ParamLimits

0x74b4,	// (0x00012efb) list_single_2graphic_pane_g3

0x84bc,	// (0x00013f03) list_single_2graphic_pane_g4_ParamLimits

0x84bc,	// (0x00013f03) list_single_2graphic_pane_g4

0x0003,

0xf712,	// (0x0001b159) list_single_2graphic_pane_g_ParamLimits

0xf712,	// (0x0001b159) list_single_2graphic_pane_g

0x84cd,	// (0x00013f14) list_single_2graphic_pane_t1_ParamLimits

0x84cd,	// (0x00013f14) list_single_2graphic_pane_t1

0x84fb,	// (0x00013f42) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x84fb,	// (0x00013f42) list_double2_graphic_large_graphic_pane_g1

0x75bb,	// (0x00013002) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x75bb,	// (0x00013002) list_double2_graphic_large_graphic_pane_g2

0x75cc,	// (0x00013013) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x75cc,	// (0x00013013) list_double2_graphic_large_graphic_pane_g3

0x850b,	// (0x00013f52) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x850b,	// (0x00013f52) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf71b,	// (0x0001b162) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf71b,	// (0x0001b162) list_double2_graphic_large_graphic_pane_g

0x8517,	// (0x00013f5e) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x8517,	// (0x00013f5e) list_double2_graphic_large_graphic_pane_t1

0x852d,	// (0x00013f74) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x852d,	// (0x00013f74) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf724,	// (0x0001b16b) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf724,	// (0x0001b16b) list_double2_graphic_large_graphic_pane_t

0x8681,	// (0x000140c8) popup_fast_swap_window_ParamLimits

0x8681,	// (0x000140c8) popup_fast_swap_window

0x869d,	// (0x000140e4) popup_side_volume_key_window

0x86b9,	// (0x00014100) stacon_top_pane

0x86c3,	// (0x0001410a) status_pane_ParamLimits

0x86c3,	// (0x0001410a) status_pane

0x86d1,	// (0x00014118) status_small_pane

0x6b6e,	// (0x000125b5) control_pane

0x6b6e,	// (0x000125b5) stacon_bottom_pane

0x795d,	// (0x000133a4) scroll_pane_cp121

0x7954,	// (0x0001339b) set_content_pane

0x853f,	// (0x00013f86) bg_active_tab_pane_g1_cp1

0x8548,	// (0x00013f8f) bg_active_tab_pane_g2_cp1

0x8551,	// (0x00013f98) bg_active_tab_pane_g3_cp1

0x853f,	// (0x00013f86) bg_passive_tab_pane_g1_cp1

0x8548,	// (0x00013f8f) bg_passive_tab_pane_g2_cp1

0x8551,	// (0x00013f98) bg_passive_tab_pane_g3_cp1

0x855a,	// (0x00013fa1) bg_active_tab_pane_g1_cp2

0x8548,	// (0x00013f8f) bg_active_tab_pane_g2_cp2

0x8563,	// (0x00013faa) bg_active_tab_pane_g3_cp2

0x855a,	// (0x00013fa1) bg_passive_tab_pane_g1_cp2

0x8548,	// (0x00013f8f) bg_passive_tab_pane_g2_cp2

0x8563,	// (0x00013faa) bg_passive_tab_pane_g3_cp2

0x856c,	// (0x00013fb3) bg_active_tab_pane_g1_cp3

0x8548,	// (0x00013f8f) bg_active_tab_pane_g2_cp3

0x8575,	// (0x00013fbc) bg_active_tab_pane_g3_cp3

0x856c,	// (0x00013fb3) bg_passive_tab_pane_g1_cp3

0x8548,	// (0x00013f8f) bg_passive_tab_pane_g2_cp3

0x8575,	// (0x00013fbc) bg_passive_tab_pane_g3_cp3

0x857e,	// (0x00013fc5) bg_active_tab_pane_g1_cp4

0x8548,	// (0x00013f8f) bg_active_tab_pane_g2_cp4

0x8589,	// (0x00013fd0) bg_active_tab_pane_g3_cp4

0x857e,	// (0x00013fc5) bg_passive_tab_pane_g1_cp4

0x8548,	// (0x00013f8f) bg_passive_tab_pane_g2_cp4

0x8589,	// (0x00013fd0) bg_passive_tab_pane_g3_cp4

0x85d2,	// (0x00014019) bg_active_tab_pane_g1_cp5

0x8548,	// (0x00013f8f) bg_active_tab_pane_g2_cp5

0x85db,	// (0x00014022) bg_active_tab_pane_g3_cp5

0x85d2,	// (0x00014019) bg_passive_tab_pane_g1_cp5

0x8548,	// (0x00013f8f) bg_passive_tab_pane_g2_cp5

0x85db,	// (0x00014022) bg_passive_tab_pane_g3_cp5

0x85e4,	// (0x0001402b) list_set_graphic_pane_ParamLimits

0x85e4,	// (0x0001402b) list_set_graphic_pane

0x6b6e,	// (0x000125b5) bg_set_opt_pane_cp4

0x8604,	// (0x0001404b) list_set_graphic_pane_g1_ParamLimits

0x8604,	// (0x0001404b) list_set_graphic_pane_g1

0x8610,	// (0x00014057) list_set_graphic_pane_g2_ParamLimits

0x8610,	// (0x00014057) list_set_graphic_pane_g2

0x0001,

0xf729,	// (0x0001b170) list_set_graphic_pane_g_ParamLimits

0xf729,	// (0x0001b170) list_set_graphic_pane_g

0x0009,

0xfaa5,	// (0x0001b4ec) volume_small_pane_cp_g

0x8634,	// (0x0001407b) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x8634,	// (0x0001407b) list_double2_large_graphic_pane_g1_cp2

0x8640,	// (0x00014087) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x8640,	// (0x00014087) list_double2_large_graphic_pane_g2_cp2

0x8651,	// (0x00014098) list_double2_large_graphic_pane_g3_cp2

0x8659,	// (0x000140a0) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x8659,	// (0x000140a0) list_double2_large_graphic_pane_t1_cp2

0x866f,	// (0x000140b6) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x866f,	// (0x000140b6) list_double2_large_graphic_pane_t2_cp2

0xa354,	// (0x00015d9b) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xa354,	// (0x00015d9b) list_double_large_graphic_pane_g1_cp2

0xa365,	// (0x00015dac) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xa365,	// (0x00015dac) list_double_large_graphic_pane_g2_cp2

0x87ea,	// (0x00014231) list_double_large_graphic_pane_g3_cp2

0xa376,	// (0x00015dbd) list_double_large_graphic_pane_g4_cp

0xa37e,	// (0x00015dc5) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xa37e,	// (0x00015dc5) list_double_large_graphic_pane_t1_cp2

0xa395,	// (0x00015ddc) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xa395,	// (0x00015ddc) list_double_large_graphic_pane_t2_cp2

0x86dc,	// (0x00014123) list_double2_graphic_pane_g1_cp2_ParamLimits

0x86dc,	// (0x00014123) list_double2_graphic_pane_g1_cp2

0x86ea,	// (0x00014131) list_double2_graphic_pane_g2_cp2_ParamLimits

0x86ea,	// (0x00014131) list_double2_graphic_pane_g2_cp2

0x86fb,	// (0x00014142) list_double2_graphic_pane_g3_cp2

0x8705,	// (0x0001414c) list_double2_graphic_pane_t1_cp2_ParamLimits

0x8705,	// (0x0001414c) list_double2_graphic_pane_t1_cp2

0x871b,	// (0x00014162) list_double2_graphic_pane_t2_cp2_ParamLimits

0x871b,	// (0x00014162) list_double2_graphic_pane_t2_cp2

0x872d,	// (0x00014174) list_single_number_heading_pane_g1_cp2_ParamLimits

0x872d,	// (0x00014174) list_single_number_heading_pane_g1_cp2

0x8739,	// (0x00014180) list_single_number_heading_pane_g2_cp2

0x8741,	// (0x00014188) list_single_number_heading_pane_t1_cp2_ParamLimits

0x8741,	// (0x00014188) list_single_number_heading_pane_t1_cp2

0x8757,	// (0x0001419e) list_single_number_heading_pane_t2_cp2_ParamLimits

0x8757,	// (0x0001419e) list_single_number_heading_pane_t2_cp2

0x8769,	// (0x000141b0) list_single_number_heading_pane_t3_cp2_ParamLimits

0x8769,	// (0x000141b0) list_single_number_heading_pane_t3_cp2

0x872d,	// (0x00014174) list_single_heading_pane_g1_cp2_ParamLimits

0x872d,	// (0x00014174) list_single_heading_pane_g1_cp2

0x8739,	// (0x00014180) list_single_heading_pane_g2_cp2

0x8741,	// (0x00014188) list_single_heading_pane_t1_cp2_ParamLimits

0x8741,	// (0x00014188) list_single_heading_pane_t1_cp2

0xa15c,	// (0x00015ba3) list_single_heading_pane_t2_cp2_ParamLimits

0xa15c,	// (0x00015ba3) list_single_heading_pane_t2_cp2

0xa0a4,	// (0x00015aeb) list_double_graphic_pane_g1_cp2_ParamLimits

0xa0a4,	// (0x00015aeb) list_double_graphic_pane_g1_cp2

0xa0b0,	// (0x00015af7) list_double_graphic_pane_g2_cp2_ParamLimits

0xa0b0,	// (0x00015af7) list_double_graphic_pane_g2_cp2

0xa0bf,	// (0x00015b06) list_double_graphic_pane_g3_cp2

0xa0c7,	// (0x00015b0e) list_double_graphic_pane_t1_cp2_ParamLimits

0xa0c7,	// (0x00015b0e) list_double_graphic_pane_t1_cp2

0xa0dd,	// (0x00015b24) list_double_graphic_pane_t2_cp2_ParamLimits

0xa0dd,	// (0x00015b24) list_double_graphic_pane_t2_cp2

0x87de,	// (0x00014225) list_double_number_pane_g1_cp2_ParamLimits

0x87de,	// (0x00014225) list_double_number_pane_g1_cp2

0x87ea,	// (0x00014231) list_double_number_pane_g2_cp2

0xa068,	// (0x00015aaf) list_double_number_pane_t1_cp2_ParamLimits

0xa068,	// (0x00015aaf) list_double_number_pane_t1_cp2

0xa07c,	// (0x00015ac3) list_double_number_pane_t2_cp2_ParamLimits

0xa07c,	// (0x00015ac3) list_double_number_pane_t2_cp2

0xa092,	// (0x00015ad9) list_double_number_pane_t3_cp2_ParamLimits

0xa092,	// (0x00015ad9) list_double_number_pane_t3_cp2

0x9f51,	// (0x00015998) list_single_graphic_pane_g1_cp2_ParamLimits

0x9f51,	// (0x00015998) list_single_graphic_pane_g1_cp2

0x8842,	// (0x00014289) list_single_graphic_pane_g2_cp2_ParamLimits

0x8842,	// (0x00014289) list_single_graphic_pane_g2_cp2

0x884e,	// (0x00014295) list_single_graphic_pane_g3_cp2

0x9f27,	// (0x0001596e) list_single_graphic_pane_t1_cp2_ParamLimits

0x9f27,	// (0x0001596e) list_single_graphic_pane_t1_cp2

0x8842,	// (0x00014289) list_single_number_pane_g1_cp2_ParamLimits

0x8842,	// (0x00014289) list_single_number_pane_g1_cp2

0x884e,	// (0x00014295) list_single_number_pane_g2_cp2

0x9f27,	// (0x0001596e) list_single_number_pane_t1_cp2_ParamLimits

0x9f27,	// (0x0001596e) list_single_number_pane_t1_cp2

0x9f3d,	// (0x00015984) list_single_number_pane_t2_cp2_ParamLimits

0x9f3d,	// (0x00015984) list_single_number_pane_t2_cp2

0x8640,	// (0x00014087) list_double2_pane_g1_cp2_ParamLimits

0x8640,	// (0x00014087) list_double2_pane_g1_cp2

0x8651,	// (0x00014098) list_double2_pane_g2_cp2

0x87b6,	// (0x000141fd) list_double2_pane_t1_cp2_ParamLimits

0x87b6,	// (0x000141fd) list_double2_pane_t1_cp2

0x87cc,	// (0x00014213) list_double2_pane_t2_cp2_ParamLimits

0x87cc,	// (0x00014213) list_double2_pane_t2_cp2

0x87de,	// (0x00014225) list_double_pane_g1_cp2_ParamLimits

0x87de,	// (0x00014225) list_double_pane_g1_cp2

0x87ea,	// (0x00014231) list_double_pane_g2_cp2

0x87f2,	// (0x00014239) list_double_pane_t1_cp2_ParamLimits

0x87f2,	// (0x00014239) list_double_pane_t1_cp2

0x8808,	// (0x0001424f) list_double_pane_t2_cp2_ParamLimits

0x8808,	// (0x0001424f) list_double_pane_t2_cp2

0x8832,	// (0x00014279) list_single_pane_cp2_g3

0x8842,	// (0x00014289) list_single_pane_g1_cp2_ParamLimits

0x8842,	// (0x00014289) list_single_pane_g1_cp2

0x884e,	// (0x00014295) list_single_pane_g2_cp2

0x8856,	// (0x0001429d) list_single_pane_t1_cp2_ParamLimits

0x8856,	// (0x0001429d) list_single_pane_t1_cp2

0x886e,	// (0x000142b5) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x886e,	// (0x000142b5) list_single_large_graphic_pane_g1_cp2

0x74a8,	// (0x00012eef) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x74a8,	// (0x00012eef) list_single_large_graphic_pane_g2_cp2

0x887a,	// (0x000142c1) list_single_large_graphic_pane_g3_cp2

0x8882,	// (0x000142c9) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x8882,	// (0x000142c9) list_single_large_graphic_pane_g4_cp1

0x889c,	// (0x000142e3) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x889c,	// (0x000142e3) list_single_large_graphic_pane_t1_cp2

0x9ef3,	// (0x0001593a) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x9ef3,	// (0x0001593a) list_single_graphic_heading_pane_g1_cp2

0x9ec0,	// (0x00015907) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x9ec0,	// (0x00015907) list_single_graphic_heading_pane_g4_cp2

0x884e,	// (0x00014295) list_single_graphic_heading_pane_g5_cp2

0x9eff,	// (0x00015946) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x9eff,	// (0x00015946) list_single_graphic_heading_pane_t1_cp2

0x9f15,	// (0x0001595c) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x9f15,	// (0x0001595c) list_single_graphic_heading_pane_t2_cp2

0x9eb4,	// (0x000158fb) list_single_2graphic_pane_g1_cp2_ParamLimits

0x9eb4,	// (0x000158fb) list_single_2graphic_pane_g1_cp2

0x9ec0,	// (0x00015907) list_single_2graphic_pane_g2_cp2_ParamLimits

0x9ec0,	// (0x00015907) list_single_2graphic_pane_g2_cp2

0x884e,	// (0x00014295) list_single_2graphic_pane_g3_cp2

0x9ed1,	// (0x00015918) list_single_2graphic_pane_g4_cp2_ParamLimits

0x9ed1,	// (0x00015918) list_single_2graphic_pane_g4_cp2

0x9edd,	// (0x00015924) list_single_2graphic_pane_t1_cp2_ParamLimits

0x9edd,	// (0x00015924) list_single_2graphic_pane_t1_cp2

0x3b7a,	// (0x0000f5c1) list_highlight_pane_g10_cp1

0x9a8c,	// (0x000154d3) list_highlight_pane_g1_cp1

0x9a94,	// (0x000154db) list_highlight_pane_g2_cp1

0x9a9c,	// (0x000154e3) list_highlight_pane_g3_cp1

0x9aa4,	// (0x000154eb) list_highlight_pane_g4_cp1

0x9aac,	// (0x000154f3) list_highlight_pane_g5_cp1

0x9ab4,	// (0x000154fb) list_highlight_pane_g6_cp1

0x9abc,	// (0x00015503) list_highlight_pane_g7_cp1

0x9ac4,	// (0x0001550b) list_highlight_pane_g8_cp1

0x9acc,	// (0x00015513) list_highlight_pane_g9_cp1

0x99ac,	// (0x000153f3) form_field_slider_pane_t3

0x99ba,	// (0x00015401) form_field_slider_pane_t4

0x99c8,	// (0x0001540f) slider_form_pane_ParamLimits

0x99c8,	// (0x0001540f) slider_form_pane

0x6b6e,	// (0x000125b5) control_abbreviations

0x6b6e,	// (0x000125b5) control_conventions

0x6b6e,	// (0x000125b5) control_definitions

0x6b6e,	// (0x000125b5) format_table_attribute

0xa1a6,	// (0x00015bed) bg_popup_preview_window_pane_g9

0x6b6e,	// (0x000125b5) format_table_data2

0x6b6e,	// (0x000125b5) format_table_data3

0x6b6e,	// (0x000125b5) format_table_data_example

0x0008,

0x6b6e,	// (0x000125b5) intro_purpose

0xf8c0,	// (0x0001b307) bg_popup_preview_window_pane_g

0x6b6e,	// (0x000125b5) texts_category

0x6b6e,	// (0x000125b5) texts_graphics

0x88b2,	// (0x000142f9) text_digital

0x88c1,	// (0x00014308) text_primary

0x88d0,	// (0x00014317) text_primary_small

0x88df,	// (0x00014326) text_secondary

0x88ee,	// (0x00014335) text_title

0xa9cc,	// (0x00016413) bg_passive_tab_pane_g1_cp3_srt

0x8548,	// (0x00013f8f) bg_passive_tab_pane_g2_cp3_srt

0xa9d5,	// (0x0001641c) bg_passive_tab_pane_g3_cp3_srt

0x6c4e,	// (0x00012695) bg_active_tab_pane_cp3_srt_ParamLimits

0x6c4e,	// (0x00012695) bg_active_tab_pane_cp3_srt

0xa9de,	// (0x00016425) tabs_4_active_pane_srt_g1

0xa9e6,	// (0x0001642d) tabs_4_active_pane_srt_t1_ParamLimits

0xa9e6,	// (0x0001642d) tabs_4_active_pane_srt_t1

0xa9cc,	// (0x00016413) bg_active_tab_pane_g1_cp3_copy1

0x8548,	// (0x00013f8f) bg_active_tab_pane_g2_cp3_copy1

0xa9d5,	// (0x0001641c) bg_active_tab_pane_g3_cp3_copy1

0x6c4e,	// (0x00012695) tabs_2_long_active_pane_srt_ParamLimits

0x6c4e,	// (0x00012695) tabs_2_long_active_pane_srt

0x6c4e,	// (0x00012695) tabs_2_long_passive_pane_srt_ParamLimits

0x6c4e,	// (0x00012695) tabs_2_long_passive_pane_srt

0x7dc3,	// (0x0001380a) bg_passive_tab_pane_cp4_srt_ParamLimits

0x7dc3,	// (0x0001380a) bg_passive_tab_pane_cp4_srt

0xa5e6,	// (0x0001602d) bg_passive_tab_pane_g1_cp4_srt

0x8548,	// (0x00013f8f) bg_passive_tab_pane_g2_cp4_srt

0xa5ef,	// (0x00016036) bg_passive_tab_pane_g3_cp4_srt

0x7da2,	// (0x000137e9) bg_active_tab_pane_cp4_srt_ParamLimits

0x7da2,	// (0x000137e9) bg_active_tab_pane_cp4_srt

0xa5f8,	// (0x0001603f) tabs_2_long_active_pane_srt_t1_ParamLimits

0xa5f8,	// (0x0001603f) tabs_2_long_active_pane_srt_t1

0xa5e6,	// (0x0001602d) bg_active_tab_pane_g1_cp4_srt

0x8548,	// (0x00013f8f) bg_active_tab_pane_g2_cp4_srt

0xa5ef,	// (0x00016036) bg_active_tab_pane_g3_cp4_srt

0x6ee3,	// (0x0001292a) tabs_3_long_active_pane_srt_ParamLimits

0x6ee3,	// (0x0001292a) tabs_3_long_active_pane_srt

0x6ee3,	// (0x0001292a) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x6ee3,	// (0x0001292a) tabs_3_long_passive_pane_cp_srt

0x6ee3,	// (0x0001292a) tabs_3_long_passive_pane_srt_ParamLimits

0x6ee3,	// (0x0001292a) tabs_3_long_passive_pane_srt

0x7dc3,	// (0x0001380a) bg_passive_tab_pane_cp5_srt_ParamLimits

0x7dc3,	// (0x0001380a) bg_passive_tab_pane_cp5_srt

0x85d2,	// (0x00014019) bg_passive_tab_pane_g1_cp5_srt

0x8548,	// (0x00013f8f) bg_passive_tab_pane_g2_cp5_srt

0x85db,	// (0x00014022) bg_passive_tab_pane_g3_cp5_srt

0x7da2,	// (0x000137e9) bg_active_tab_pane_cp5_srt_ParamLimits

0x7da2,	// (0x000137e9) bg_active_tab_pane_cp5_srt

0xa5d4,	// (0x0001601b) tabs_3_long_active_pane_srt_t1_ParamLimits

0xa5d4,	// (0x0001601b) tabs_3_long_active_pane_srt_t1

0x85d2,	// (0x00014019) bg_active_tab_pane_g1_cp5_srt

0x8548,	// (0x00013f8f) bg_active_tab_pane_g2_cp5_srt

0x85db,	// (0x00014022) bg_active_tab_pane_g3_cp5_srt

0xa5c6,	// (0x0001600d) navi_text_pane_srt_t1

0xa5be,	// (0x00016005) navi_icon_pane_srt_g1

0x8ac3,	// (0x0001450a) midp_editing_number_pane_srt

0x88fd,	// (0x00014344) midp_ticker_pane_srt

0x8acb,	// (0x00014512) midp_ticker_pane_srt_g1

0x8ad3,	// (0x0001451a) midp_ticker_pane_srt_g2

0x0001,

0xf748,	// (0x0001b18f) midp_ticker_pane_srt_g

0x8adb,	// (0x00014522) midp_ticker_pane_srt_t1

0xa5af,	// (0x00015ff6) midp_editing_number_pane_t1_copy1

0x8905,	// (0x0001434c) listscroll_midp_pane

0x8905,	// (0x0001434c) midp_form_pane

0x8975,	// (0x000143bc) midp_info_popup_window_ParamLimits

0x8975,	// (0x000143bc) midp_info_popup_window

0x7cee,	// (0x00013735) bg_popup_sub_pane_cp50_ParamLimits

0x7cee,	// (0x00013735) bg_popup_sub_pane_cp50

0x96b0,	// (0x000150f7) listscroll_midp_info_pane_ParamLimits

0x96b0,	// (0x000150f7) listscroll_midp_info_pane

0x9690,	// (0x000150d7) listscroll_form_midp_pane_ParamLimits

0x9690,	// (0x000150d7) listscroll_form_midp_pane

0x969c,	// (0x000150e3) scroll_bar_cp050

0x9670,	// (0x000150b7) list_midp_pane

0xb761,	// (0x000171a8) signal_pane_g2_cp

0x95aa,	// (0x00014ff1) listscroll_midp_info_pane_t1_ParamLimits

0x95aa,	// (0x00014ff1) listscroll_midp_info_pane_t1

0x95c2,	// (0x00015009) listscroll_midp_info_pane_t2_ParamLimits

0x95c2,	// (0x00015009) listscroll_midp_info_pane_t2

0x9600,	// (0x00015047) listscroll_midp_info_pane_t3_ParamLimits

0x9600,	// (0x00015047) listscroll_midp_info_pane_t3

0x963a,	// (0x00015081) listscroll_midp_info_pane_t4_ParamLimits

0x963a,	// (0x00015081) listscroll_midp_info_pane_t4

0x0003,

0xf7fb,	// (0x0001b242) listscroll_midp_info_pane_t_ParamLimits

0xf7fb,	// (0x0001b242) listscroll_midp_info_pane_t

0x7d4f,	// (0x00013796) scroll_pane_cp21

0x9548,	// (0x00014f8f) form_midp_field_choice_group_pane

0x9551,	// (0x00014f98) form_midp_field_text_pane

0x9590,	// (0x00014fd7) form_midp_field_time_pane

0x9598,	// (0x00014fdf) form_midp_gauge_slider_pane

0x95a1,	// (0x00014fe8) form_midp_gauge_wait_pane

0x6b6e,	// (0x000125b5) form_midp_image_pane

0x951a,	// (0x00014f61) list_single_midp_pane_ParamLimits

0x951a,	// (0x00014f61) list_single_midp_pane

0x94d2,	// (0x00014f19) form_midp_field_text_pane_t1

0x9293,	// (0x00014cda) input_focus_pane_cp050

0x9509,	// (0x00014f50) list_midp_form_text_pane

0x94a1,	// (0x00014ee8) form_midp_field_choice_group_pane_t1

0x94af,	// (0x00014ef6) input_focus_pane_cp051

0x94c3,	// (0x00014f0a) list_midp_choice_pane

0x6b6e,	// (0x000125b5) status_idle_pane

0x9485,	// (0x00014ecc) form_midp_field_time_pane_t1

0x3b7a,	// (0x0000f5c1) wait_anim_pane_g2_copy1

0x9493,	// (0x00014eda) form_midp_field_time_pane_t2

0x0001,

0x8a23,	// (0x0001446a) aid_navinavi_width_2_pane

0xf7f6,	// (0x0001b23d) form_midp_field_time_pane_t

0x6b6e,	// (0x000125b5) input_focus_pane_cp052

0x6b6e,	// (0x000125b5) bg_input_focus_pane_cp040

0x9445,	// (0x00014e8c) form_midp_gauge_slider_pane_t1

0x9453,	// (0x00014e9a) form_midp_gauge_slider_pane_t2

0x9461,	// (0x00014ea8) form_midp_gauge_slider_pane_t3

0x946f,	// (0x00014eb6) form_midp_gauge_slider_pane_t4

0x0003,

0xf7ed,	// (0x0001b234) form_midp_gauge_slider_pane_t

0x947d,	// (0x00014ec4) form_midp_slider_pane

0x6c4e,	// (0x00012695) bg_input_focus_pane_cp041_ParamLimits

0x6c4e,	// (0x00012695) bg_input_focus_pane_cp041

0x9412,	// (0x00014e59) form_midp_gauge_wait_pane_t1_ParamLimits

0x9412,	// (0x00014e59) form_midp_gauge_wait_pane_t1

0x9424,	// (0x00014e6b) form_midp_gauge_wait_pane_t2_ParamLimits

0x9424,	// (0x00014e6b) form_midp_gauge_wait_pane_t2

0x0001,

0xf7e8,	// (0x0001b22f) form_midp_gauge_wait_pane_t_ParamLimits

0xf7e8,	// (0x0001b22f) form_midp_gauge_wait_pane_t

0x9436,	// (0x00014e7d) form_midp_wait_pane_ParamLimits

0x9436,	// (0x00014e7d) form_midp_wait_pane

0x93dc,	// (0x00014e23) form_midp_image_pane_g1

0x93e5,	// (0x00014e2c) form_midp_image_pane_t1

0x93f4,	// (0x00014e3b) form_midp_image_pane_t2

0x9403,	// (0x00014e4a) form_midp_image_pane_t3

0x0002,

0xf7e1,	// (0x0001b228) form_midp_image_pane_t

0x93c4,	// (0x00014e0b) list_single_midp_pane_g1

0x93cd,	// (0x00014e14) list_single_midp_pane_t1

0x939c,	// (0x00014de3) list_midp_form_item_pane_ParamLimits

0x939c,	// (0x00014de3) list_midp_form_item_pane

0x89cb,	// (0x00014412) list_midp_form_item_pane_t1

0x89da,	// (0x00014421) midp_ticker_pane_g1

0x89e6,	// (0x0001442d) midp_ticker_pane_g2

0x0001,

0xf72e,	// (0x0001b175) midp_ticker_pane_g

0x89f2,	// (0x00014439) midp_ticker_pane_t1

0xa833,	// (0x0001627a) midp_editing_number_pane_t1

0xa811,	// (0x00016258) midp_editing_number_pane

0xa820,	// (0x00016267) midp_ticker_pane

0xa58d,	// (0x00015fd4) ai_message_heading_pane

0x6b6e,	// (0x000125b5) bg_popup_window_pane_cp14

0xa595,	// (0x00015fdc) listscroll_ai_message_pane

0xa517,	// (0x00015f5e) ai_message_heading_pane_g1_ParamLimits

0xa517,	// (0x00015f5e) ai_message_heading_pane_g1

0xa523,	// (0x00015f6a) ai_message_heading_pane_g2_ParamLimits

0xa523,	// (0x00015f6a) ai_message_heading_pane_g2

0xa52f,	// (0x00015f76) ai_message_heading_pane_g3_ParamLimits

0xa52f,	// (0x00015f76) ai_message_heading_pane_g3

0xa53b,	// (0x00015f82) ai_message_heading_pane_g4_ParamLimits

0xa53b,	// (0x00015f82) ai_message_heading_pane_g4

0x0003,

0xf922,	// (0x0001b369) ai_message_heading_pane_g_ParamLimits

0xf922,	// (0x0001b369) ai_message_heading_pane_g

0xa547,	// (0x00015f8e) ai_message_heading_pane_t1_ParamLimits

0xa547,	// (0x00015f8e) ai_message_heading_pane_t1

0xa561,	// (0x00015fa8) ai_message_heading_pane_t2_ParamLimits

0xa561,	// (0x00015fa8) ai_message_heading_pane_t2

0x0001,

0xf92b,	// (0x0001b372) ai_message_heading_pane_t_ParamLimits

0xf92b,	// (0x0001b372) ai_message_heading_pane_t

0xa573,	// (0x00015fba) bg_popup_heading_pane_cp1_ParamLimits

0xa573,	// (0x00015fba) bg_popup_heading_pane_cp1

0xa505,	// (0x00015f4c) list_ai_message_pane_ParamLimits

0xa505,	// (0x00015f4c) list_ai_message_pane

0x7d4f,	// (0x00013796) scroll_pane_cp10

0xa4a1,	// (0x00015ee8) list_ai_message_pane_g1

0xa4a9,	// (0x00015ef0) list_ai_message_pane_g2

0x0001,

0xf8ff,	// (0x0001b346) list_ai_message_pane_g

0xa4b1,	// (0x00015ef8) list_ai_message_pane_t1_ParamLimits

0xa4b1,	// (0x00015ef8) list_ai_message_pane_t1

0xa4c6,	// (0x00015f0d) list_ai_message_pane_t2_ParamLimits

0xa4c6,	// (0x00015f0d) list_ai_message_pane_t2

0xa4db,	// (0x00015f22) list_ai_message_pane_t3_ParamLimits

0xa4db,	// (0x00015f22) list_ai_message_pane_t3

0xa4f0,	// (0x00015f37) list_ai_message_pane_t4_ParamLimits

0xa4f0,	// (0x00015f37) list_ai_message_pane_t4

0x0003,

0xf904,	// (0x0001b34b) list_ai_message_pane_t_ParamLimits

0xf904,	// (0x0001b34b) list_ai_message_pane_t

0xa48c,	// (0x00015ed3) cell_ai_soft_ind_pane_ParamLimits

0xa48c,	// (0x00015ed3) cell_ai_soft_ind_pane

0x8a04,	// (0x0001444b) cell_ai_soft_ind_pane_g1_ParamLimits

0x8a04,	// (0x0001444b) cell_ai_soft_ind_pane_g1

0x6b6e,	// (0x000125b5) grid_highlight_cp1

0x8a11,	// (0x00014458) text_secondary_cp56_ParamLimits

0x8a11,	// (0x00014458) text_secondary_cp56

0xa461,	// (0x00015ea8) example_general_pane_ParamLimits

0xa461,	// (0x00015ea8) example_general_pane

0xa46d,	// (0x00015eb4) example_parent_pane_g1_ParamLimits

0xa46d,	// (0x00015eb4) example_parent_pane_g1

0xa479,	// (0x00015ec0) example_parent_pane_t1_ParamLimits

0xa479,	// (0x00015ec0) example_parent_pane_t1

0x5399,	// (0x00010de0) popup_preview_text_window_ParamLimits

0x5399,	// (0x00010de0) popup_preview_text_window

0x883a,	// (0x00014281) list_single_pane_cp2_g4

0x6fbf,	// (0x00012a06) bg_popup_preview_window_pane_ParamLimits

0x6fbf,	// (0x00012a06) bg_popup_preview_window_pane

0xa1ae,	// (0x00015bf5) popup_preview_text_window_t1_ParamLimits

0xa1ae,	// (0x00015bf5) popup_preview_text_window_t1

0xa1cc,	// (0x00015c13) popup_preview_text_window_t2_ParamLimits

0xa1cc,	// (0x00015c13) popup_preview_text_window_t2

0xa215,	// (0x00015c5c) popup_preview_text_window_t3_ParamLimits

0xa215,	// (0x00015c5c) popup_preview_text_window_t3

0xa25a,	// (0x00015ca1) popup_preview_text_window_t4_ParamLimits

0xa25a,	// (0x00015ca1) popup_preview_text_window_t4

0x0004,

0xf8d3,	// (0x0001b31a) popup_preview_text_window_t_ParamLimits

0xf8d3,	// (0x0001b31a) popup_preview_text_window_t

0xa2d8,	// (0x00015d1f) scroll_pane_cp11

0x9171,	// (0x00014bb8) bg_popup_preview_window_pane_g1

0xa16e,	// (0x00015bb5) bg_popup_preview_window_pane_g2

0xa176,	// (0x00015bbd) bg_popup_preview_window_pane_g3

0xa17e,	// (0x00015bc5) bg_popup_preview_window_pane_g4

0xa186,	// (0x00015bcd) bg_popup_preview_window_pane_g5

0xa18e,	// (0x00015bd5) bg_popup_preview_window_pane_g6

0xa196,	// (0x00015bdd) bg_popup_preview_window_pane_g7

0xa19e,	// (0x00015be5) bg_popup_preview_window_pane_g8

0x457d,	// (0x0000ffc4) aid_popup_width_pane

0x5377,	// (0x00010dbe) popup_midp_note_alarm_window_ParamLimits

0x5377,	// (0x00010dbe) popup_midp_note_alarm_window

0x7a1e,	// (0x00013465) data_form_pane_ParamLimits

0x7a2a,	// (0x00013471) form_field_data_pane_g1

0x7a34,	// (0x0001347b) form_field_data_pane_t1_ParamLimits

0x7a4c,	// (0x00013493) input_focus_pane_ParamLimits

0x7a5a,	// (0x000134a1) data_form_wide_pane_ParamLimits

0x7a66,	// (0x000134ad) form_field_data_wide_pane_g1

0x7a92,	// (0x000134d9) form_field_data_wide_pane_t1_ParamLimits

0x7266,	// (0x00012cad) input_focus_pane_cp6_ParamLimits

0x7cfc,	// (0x00013743) input_popup_find_pane_g1_ParamLimits

0x7cfc,	// (0x00013743) input_popup_find_pane_g1

0x4af9,	// (0x00010540) aid_navi_side_left_pane

0x4b0e,	// (0x00010555) aid_navi_side_right_pane

0x9b87,	// (0x000155ce) bg_popup_window_pane_cp30_ParamLimits

0x9b87,	// (0x000155ce) bg_popup_window_pane_cp30

0x9c01,	// (0x00015648) popup_midp_note_alarm_window_g1_ParamLimits

0x9c01,	// (0x00015648) popup_midp_note_alarm_window_g1

0x9c31,	// (0x00015678) popup_midp_note_alarm_window_t1_ParamLimits

0x9c31,	// (0x00015678) popup_midp_note_alarm_window_t1

0x9cd2,	// (0x00015719) popup_midp_note_alarm_window_t2_ParamLimits

0x9cd2,	// (0x00015719) popup_midp_note_alarm_window_t2

0x9d80,	// (0x000157c7) popup_midp_note_alarm_window_t3_ParamLimits

0x9d80,	// (0x000157c7) popup_midp_note_alarm_window_t3

0x9db2,	// (0x000157f9) popup_midp_note_alarm_window_t4_ParamLimits

0x9db2,	// (0x000157f9) popup_midp_note_alarm_window_t4

0x9dd8,	// (0x0001581f) popup_midp_note_alarm_window_t5_ParamLimits

0x9dd8,	// (0x0001581f) popup_midp_note_alarm_window_t5

0x000a,

0xf870,	// (0x0001b2b7) popup_midp_note_alarm_window_t_ParamLimits

0xf870,	// (0x0001b2b7) popup_midp_note_alarm_window_t

0x9e84,	// (0x000158cb) wait_bar_pane_cp1_ParamLimits

0x9e84,	// (0x000158cb) wait_bar_pane_cp1

0x6b6e,	// (0x000125b5) wait_anim_pane_copy1

0x6b6e,	// (0x000125b5) wait_border_pane_copy1

0x986d,	// (0x000152b4) wait_border_pane_g1_copy1

0x7aa9,	// (0x000134f0) form_field_popup_pane_g1

0x7ab1,	// (0x000134f8) form_field_popup_pane_t1_ParamLimits

0x7a4c,	// (0x00013493) input_focus_pane_cp7_ParamLimits

0x7ac9,	// (0x00013510) list_form_pane_ParamLimits

0x7ad5,	// (0x0001351c) form_field_popup_wide_pane_g1

0x7add,	// (0x00013524) form_field_popup_wide_pane_t1_ParamLimits

0x7a4c,	// (0x00013493) input_focus_pane_cp8_ParamLimits

0x7aef,	// (0x00013536) list_form_wide_pane_ParamLimits

0xaa6e,	// (0x000164b5) aid_size_cell_graphic_pane

0x7bc3,	// (0x0001360a) data_form_pane_t1_ParamLimits

0xa7de,	// (0x00016225) data_form_wide_pane_t1_ParamLimits

0x8d22,	// (0x00014769) bg_status_flat_pane

0x6bae,	// (0x000125f5) title_pane_t1_ParamLimits

0x6c16,	// (0x0001265d) title_pane_t2_ParamLimits

0x6c3c,	// (0x00012683) title_pane_t3_ParamLimits

0xf532,	// (0x0001af79) title_pane_t_ParamLimits

0x81d0,	// (0x00013c17) level_1_signal_ParamLimits

0x81e2,	// (0x00013c29) level_2_signal_ParamLimits

0x81f5,	// (0x00013c3c) level_3_signal_ParamLimits

0x8208,	// (0x00013c4f) level_4_signal_ParamLimits

0x821b,	// (0x00013c62) level_5_signal_ParamLimits

0x822e,	// (0x00013c75) level_6_signal_ParamLimits

0x8241,	// (0x00013c88) level_7_signal_ParamLimits

0x81d0,	// (0x00013c17) level_1_battery_ParamLimits

0x81e2,	// (0x00013c29) level_2_battery_ParamLimits

0x81f5,	// (0x00013c3c) level_3_battery_ParamLimits

0x8208,	// (0x00013c4f) level_4_battery_ParamLimits

0x821b,	// (0x00013c62) level_5_battery_ParamLimits

0x822e,	// (0x00013c75) level_6_battery_ParamLimits

0x8241,	// (0x00013c88) level_7_battery_ParamLimits

0x9a8c,	// (0x000154d3) bg_status_flat_pane_g1

0x9a94,	// (0x000154db) bg_status_flat_pane_g2

0x9a9c,	// (0x000154e3) bg_status_flat_pane_g3

0x9aa4,	// (0x000154eb) bg_status_flat_pane_g4

0x9aac,	// (0x000154f3) bg_status_flat_pane_g5

0x9ab4,	// (0x000154fb) bg_status_flat_pane_g6

0x9abc,	// (0x00015503) bg_status_flat_pane_g7

0x6c64,	// (0x000126ab) tabs_3_active_pane_t1_ParamLimits

0x6c64,	// (0x000126ab) tabs_3_passive_pane_t1_ParamLimits

0x6c7e,	// (0x000126c5) tabs_4_active_pane_t1_ParamLimits

0x6c7e,	// (0x000126c5) tabs_4_1_passive_pane_t1_ParamLimits

0x7d90,	// (0x000137d7) tabs_2_active_pane_t1_ParamLimits

0x7d90,	// (0x000137d7) tabs_2_passive_pane_t1_ParamLimits

0x7da2,	// (0x000137e9) bg_active_tab_pane_cp4_ParamLimits

0x7db0,	// (0x000137f7) tabs_2_long_active_pane_t1_ParamLimits

0x7dc3,	// (0x0001380a) bg_passive_tab_pane_cp4_ParamLimits

0x56be,	// (0x00011105) list_single_midp_graphic_pane_t1_ParamLimits

0x7da2,	// (0x000137e9) bg_active_tab_pane_cp5_ParamLimits

0x7dcf,	// (0x00013816) tabs_3_long_active_pane_t1_ParamLimits

0x7dc3,	// (0x0001380a) bg_passive_tab_pane_cp5_ParamLimits

0x56be,	// (0x00011105) list_single_midp_graphic_pane_t1

0x8d22,	// (0x00014769) bg_status_flat_pane_ParamLimits

0x8deb,	// (0x00014832) indicator_pane_cp2_ParamLimits

0x8deb,	// (0x00014832) indicator_pane_cp2

0x8f16,	// (0x0001495d) navi_pane_srt_ParamLimits

0x8f16,	// (0x0001495d) navi_pane_srt

0x8f3a,	// (0x00014981) popup_clock_digital_analogue_window_cp1

0x6d45,	// (0x0001278c) indicator_pane_t1

0x88fd,	// (0x00014344) copy_highlight_pane

0x88fd,	// (0x00014344) cursor_graphics_pane

0x88fd,	// (0x00014344) graphic_within_text_pane

0x88fd,	// (0x00014344) link_highlight_pane

0xa29b,	// (0x00015ce2) popup_preview_text_window_t5_ParamLimits

0xa29b,	// (0x00015ce2) popup_preview_text_window_t5

0x8a2b,	// (0x00014472) cursor_digital_pane

0x8a2b,	// (0x00014472) cursor_primary_pane

0x8a3c,	// (0x00014483) cursor_primary_small_pane

0x8a44,	// (0x0001448b) cursor_secondary_pane

0x8a4c,	// (0x00014493) cursor_title_pane

0x8a2b,	// (0x00014472) link_highlight_digital_pane

0x8a33,	// (0x0001447a) link_highlight_primary_pane

0x8a3c,	// (0x00014483) link_highlight_primary_small_pane

0x8a44,	// (0x0001448b) link_highlight_secondary_pane

0x8a4c,	// (0x00014493) link_highlight_title_pane

0x8a2b,	// (0x00014472) copy_highlight_digital_pane

0x8a2b,	// (0x00014472) copy_highlight_primary_pane

0x8a3c,	// (0x00014483) copy_highlight_primary_small_pane

0x8a44,	// (0x0001448b) copy_highlight_secondary_pane

0x8a4c,	// (0x00014493) copy_highlight_title_pane

0x8a44,	// (0x0001448b) graphic_text_digital_pane

0x9b2a,	// (0x00015571) graphic_text_primary_pane

0x9b33,	// (0x0001557a) graphic_text_primary_small_pane

0x8a3c,	// (0x00014483) graphic_text_secondary_pane

0x8a2b,	// (0x00014472) graphic_text_title_pane

0x8a54,	// (0x0001449b) cursor_primary_pane_g1

0x9b1c,	// (0x00015563) cursor_text_primary_t1

0x9b04,	// (0x0001554b) cursor_primary_small_pane_g1

0x9b0e,	// (0x00015555) cursor_text_primary_small_t1

0x9aec,	// (0x00015533) cursor_primary_small_pane_g1_copy1

0x9af6,	// (0x0001553d) cursor_text_primary_small_t1_copy1

0x9ad4,	// (0x0001551b) cursor_text_title_t1

0x9ae2,	// (0x00015529) cursor_title_pane_g1

0x8a54,	// (0x0001449b) cursor_digital_pane_g1

0x8a5e,	// (0x000144a5) cursor_text_digital_t1

0x8a83,	// (0x000144ca) link_highlight_primary_pane_g1

0x9a7d,	// (0x000154c4) link_highlight_primary_pane_t1

0x8a6c,	// (0x000144b3) link_highlight_primary_small_pane_g1

0x8a74,	// (0x000144bb) link_highlight_primary_small_pane_t1

0x8a83,	// (0x000144ca) link_highlight_secondary_pane_g1

0x8a8b,	// (0x000144d2) link_highlight_secondary_pane_t1

0x99f1,	// (0x00015438) link_highlight_title_pane_g1

0x99f9,	// (0x00015440) link_highlight_title_pane_t1

0x99da,	// (0x00015421) link_highlight_digital_pane_g1

0x99e2,	// (0x00015429) link_highlight_digital_pane_t1

0x98b2,	// (0x000152f9) copy_highlight_primary_pane_g1

0x98ba,	// (0x00015301) copy_highlight_primary_pane_t1

0x988c,	// (0x000152d3) copy_highlight_primary_small_pane_g1

0x98a3,	// (0x000152ea) copy_highlight_primary_small_pane_t1

0x8a9a,	// (0x000144e1) copy_highlight_secondary_pane_g1

0x8aa2,	// (0x000144e9) copy_highlight_secondary_pane_t1

0x988c,	// (0x000152d3) copy_highlight_title_pane_g1

0x9894,	// (0x000152db) copy_highlight_title_pane_t1

0x98b2,	// (0x000152f9) copy_highlight_digital_pane_g1

0xac3c,	// (0x00016683) copy_highlight_digital_pane_t1

0xab90,	// (0x000165d7) graphic_text_primary_pane_g1

0xac20,	// (0x00016667) graphic_text_primary_pane_t1

0xac2e,	// (0x00016675) graphic_text_primary_pane_t2

0x0001,

0xf99f,	// (0x0001b3e6) graphic_text_primary_pane_t

0xabfc,	// (0x00016643) graphic_text_primary_small_pane_g1

0xac04,	// (0x0001664b) graphic_text_primary_small_pane_t1

0xac12,	// (0x00016659) graphic_text_primary_small_pane_t2

0x0001,

0xf99a,	// (0x0001b3e1) graphic_text_primary_small_pane_t

0xabd8,	// (0x0001661f) graphic_text_secondary_pane_g1

0xabe0,	// (0x00016627) graphic_text_secondary_pane_t1

0xabee,	// (0x00016635) graphic_text_secondary_pane_t2

0x0001,

0xf995,	// (0x0001b3dc) graphic_text_secondary_pane_t

0xabb4,	// (0x000165fb) graphic_text_title_pane_g1

0xabbc,	// (0x00016603) graphic_text_title_pane_t1

0xabca,	// (0x00016611) graphic_text_title_pane_t2

0x0001,

0xf990,	// (0x0001b3d7) graphic_text_title_pane_t

0xab90,	// (0x000165d7) graphic_text_digital_pane_g1

0xab98,	// (0x000165df) graphic_text_digital_pane_t1

0xaba6,	// (0x000165ed) graphic_text_digital_pane_t2

0x0001,

0xf98b,	// (0x0001b3d2) graphic_text_digital_pane_t

0x6c4e,	// (0x00012695) navi_icon_pane_srt_ParamLimits

0x6c4e,	// (0x00012695) navi_icon_pane_srt

0x6b6e,	// (0x000125b5) navi_midp_pane_srt

0x6b6e,	// (0x000125b5) navi_navi_pane_srt

0x6c4e,	// (0x00012695) navi_text_pane_srt_ParamLimits

0x6c4e,	// (0x00012695) navi_text_pane_srt

0xab5b,	// (0x000165a2) navi_navi_icon_text_pane_srt

0xab63,	// (0x000165aa) navi_navi_pane_srt_g1_ParamLimits

0xab63,	// (0x000165aa) navi_navi_pane_srt_g1

0xab75,	// (0x000165bc) navi_navi_pane_srt_g2_ParamLimits

0xab75,	// (0x000165bc) navi_navi_pane_srt_g2

0x0001,

0xf986,	// (0x0001b3cd) navi_navi_pane_srt_g_ParamLimits

0xf986,	// (0x0001b3cd) navi_navi_pane_srt_g

0xab87,	// (0x000165ce) navi_navi_tabs_pane_srt

0xab5b,	// (0x000165a2) navi_navi_text_pane_srt

0xab5b,	// (0x000165a2) navi_navi_volume_pane_srt

0xab4c,	// (0x00016593) navi_navi_text_pane_srt_t1

0x5a38,	// (0x0001147f) navi_navi_volume_pane_srt_g1

0x5a40,	// (0x00011487) volume_small_pane_srt_ParamLimits

0x5a40,	// (0x00011487) volume_small_pane_srt

0x4dd9,	// (0x00010820) volume_small_pane_srt_g1_ParamLimits

0x4dd9,	// (0x00010820) volume_small_pane_srt_g1

0x4de9,	// (0x00010830) volume_small_pane_srt_g2_ParamLimits

0x4de9,	// (0x00010830) volume_small_pane_srt_g2

0x4dfa,	// (0x00010841) volume_small_pane_srt_g3_ParamLimits

0x4dfa,	// (0x00010841) volume_small_pane_srt_g3

0x4e0b,	// (0x00010852) volume_small_pane_srt_g4_ParamLimits

0x4e0b,	// (0x00010852) volume_small_pane_srt_g4

0x4e1c,	// (0x00010863) volume_small_pane_srt_g5_ParamLimits

0x4e1c,	// (0x00010863) volume_small_pane_srt_g5

0x4e2d,	// (0x00010874) volume_small_pane_srt_g6_ParamLimits

0x4e2d,	// (0x00010874) volume_small_pane_srt_g6

0x4e3e,	// (0x00010885) volume_small_pane_srt_g7_ParamLimits

0x4e3e,	// (0x00010885) volume_small_pane_srt_g7

0x4e4f,	// (0x00010896) volume_small_pane_srt_g8_ParamLimits

0x4e4f,	// (0x00010896) volume_small_pane_srt_g8

0x4e60,	// (0x000108a7) volume_small_pane_srt_g9_ParamLimits

0x4e60,	// (0x000108a7) volume_small_pane_srt_g9

0x4e71,	// (0x000108b8) volume_small_pane_srt_g10_ParamLimits

0x4e71,	// (0x000108b8) volume_small_pane_srt_g10

0x0009,

0xf733,	// (0x0001b17a) volume_small_pane_srt_g_ParamLimits

0xf733,	// (0x0001b17a) volume_small_pane_srt_g

0x7068,	// (0x00012aaf) query_popup_data_pane_cp2

0xab32,	// (0x00016579) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xab32,	// (0x00016579) navi_navi_icon_text_pane_srt_t1

0x9b2a,	// (0x00015571) navi_tabs_2_long_pane_srt

0x9b2a,	// (0x00015571) navi_tabs_2_pane_srt

0x9b2a,	// (0x00015571) navi_tabs_3_long_pane_srt

0x9b2a,	// (0x00015571) navi_tabs_3_pane_srt

0x9b2a,	// (0x00015571) navi_tabs_4_pane_srt

0x5a18,	// (0x0001145f) tabs_2_active_pane_srt_ParamLimits

0x5a18,	// (0x0001145f) tabs_2_active_pane_srt

0x5a28,	// (0x0001146f) tabs_2_passive_pane_srt_ParamLimits

0x5a28,	// (0x0001146f) tabs_2_passive_pane_srt

0x8c29,	// (0x00014670) bg_passive_tab_pane_cp1_srt_ParamLimits

0x8c29,	// (0x00014670) bg_passive_tab_pane_cp1_srt

0xaafe,	// (0x00016545) bg_passive_tab_pane_g1_cp1_srt

0x8548,	// (0x00013f8f) bg_passive_tab_pane_g2_cp1_srt

0xab07,	// (0x0001654e) bg_passive_tab_pane_g3_cp1_srt

0x6c4e,	// (0x00012695) bg_active_tab_pane_cp1_srt_ParamLimits

0x6c4e,	// (0x00012695) bg_active_tab_pane_cp1_srt

0xab10,	// (0x00016557) tabs_2_active_pane_srt_g1

0xab18,	// (0x0001655f) tabs_2_active_pane_srt_t1_ParamLimits

0xab18,	// (0x0001655f) tabs_2_active_pane_srt_t1

0xaafe,	// (0x00016545) bg_active_tab_pane_g1_cp1_srt

0x8548,	// (0x00013f8f) bg_active_tab_pane_g2_cp1_srt

0xab07,	// (0x0001654e) bg_active_tab_pane_g3_cp1_srt

0x59e5,	// (0x0001142c) tabs_3_active_pane_srt_ParamLimits

0x59e5,	// (0x0001142c) tabs_3_active_pane_srt

0x59f6,	// (0x0001143d) tabs_3_passive_pane_cp_srt_ParamLimits

0x59f6,	// (0x0001143d) tabs_3_passive_pane_cp_srt

0x5a07,	// (0x0001144e) tabs_3_passive_pane_srt_ParamLimits

0x5a07,	// (0x0001144e) tabs_3_passive_pane_srt

0x8c29,	// (0x00014670) bg_passive_tab_pane_cp2_srt_ParamLimits

0x8c29,	// (0x00014670) bg_passive_tab_pane_cp2_srt

0x8ab1,	// (0x000144f8) bg_passive_tab_pane_g1_cp2_srt

0x8548,	// (0x00013f8f) bg_passive_tab_pane_g2_cp2_srt

0x8aba,	// (0x00014501) bg_passive_tab_pane_g3_cp2_srt

0x6c4e,	// (0x00012695) bg_active_tab_pane_cp2_srt_ParamLimits

0x6c4e,	// (0x00012695) bg_active_tab_pane_cp2_srt

0xaae4,	// (0x0001652b) tabs_3_active_pane_srt_g1

0xaaec,	// (0x00016533) tabs_3_active_pane_srt_t1_ParamLimits

0xaaec,	// (0x00016533) tabs_3_active_pane_srt_t1

0x8ab1,	// (0x000144f8) bg_active_tab_pane_g1_cp2_srt

0x8548,	// (0x00013f8f) bg_active_tab_pane_g2_cp2_srt

0x8aba,	// (0x00014501) bg_active_tab_pane_g3_cp2_srt

0x599d,	// (0x000113e4) tabs_4_active_pane_srt_ParamLimits

0x599d,	// (0x000113e4) tabs_4_active_pane_srt

0x59af,	// (0x000113f6) tabs_4_passive_pane_cp2_srt_ParamLimits

0x59af,	// (0x000113f6) tabs_4_passive_pane_cp2_srt

0x4fe0,	// (0x00010a27) aid_size_cell_toolbar

0x7dc3,	// (0x0001380a) main_idle_act_pane_ParamLimits

0x51ad,	// (0x00010bf4) popup_large_graphic_colour_window_ParamLimits

0x5514,	// (0x00010f5b) popup_toolbar_window_ParamLimits

0x5514,	// (0x00010f5b) popup_toolbar_window

0xa85d,	// (0x000162a4) list_single_graphic_2heading_pane_ParamLimits

0xa85d,	// (0x000162a4) list_single_graphic_2heading_pane

0x7f7f,	// (0x000139c6) aid_size_cell_apps_grid_lsc_pane

0x7f91,	// (0x000139d8) aid_size_cell_apps_grid_prt_pane

0x8c29,	// (0x00014670) bg_wml_button_pane_cp1_ParamLimits

0x8c29,	// (0x00014670) bg_wml_button_pane_cp1

0x94d2,	// (0x00014f19) form_midp_field_text_pane_t1_ParamLimits

0x9293,	// (0x00014cda) input_focus_pane_cp050_ParamLimits

0x9509,	// (0x00014f50) list_midp_form_text_pane_ParamLimits

0x94af,	// (0x00014ef6) input_focus_pane_cp051_ParamLimits

0x94c3,	// (0x00014f0a) list_midp_choice_pane_ParamLimits

0x934c,	// (0x00014d93) list_single_2graphic_pane_cp3_ParamLimits

0x934c,	// (0x00014d93) list_single_2graphic_pane_cp3

0x936d,	// (0x00014db4) list_single_midp_graphic_pane_ParamLimits

0x936d,	// (0x00014db4) list_single_midp_graphic_pane

0x55c1,	// (0x00011008) list_single_graphic_2heading_pane_g1_ParamLimits

0x55c1,	// (0x00011008) list_single_graphic_2heading_pane_g1

0x55cd,	// (0x00011014) list_single_graphic_2heading_pane_g4_ParamLimits

0x55cd,	// (0x00011014) list_single_graphic_2heading_pane_g4

0x55d9,	// (0x00011020) list_single_graphic_2heading_pane_g5_ParamLimits

0x55d9,	// (0x00011020) list_single_graphic_2heading_pane_g5

0x0002,

0xf786,	// (0x0001b1cd) list_single_graphic_2heading_pane_g_ParamLimits

0xf786,	// (0x0001b1cd) list_single_graphic_2heading_pane_g

0x55e5,	// (0x0001102c) list_single_graphic_2heading_pane_t1_ParamLimits

0x55e5,	// (0x0001102c) list_single_graphic_2heading_pane_t1

0x55f9,	// (0x00011040) list_single_graphic_2heading_pane_t2_ParamLimits

0x55f9,	// (0x00011040) list_single_graphic_2heading_pane_t2

0x5615,	// (0x0001105c) list_single_graphic_2heading_pane_t3_ParamLimits

0x5615,	// (0x0001105c) list_single_graphic_2heading_pane_t3

0x0002,

0xf78d,	// (0x0001b1d4) list_single_graphic_2heading_pane_t_ParamLimits

0xf78d,	// (0x0001b1d4) list_single_graphic_2heading_pane_t

0x9099,	// (0x00014ae0) bg_popup_sub_pane_cp2

0x90c3,	// (0x00014b0a) grid_toobar_pane

0x562d,	// (0x00011074) cell_toolbar_pane_ParamLimits

0x562d,	// (0x00011074) cell_toolbar_pane

0x9115,	// (0x00014b5c) cell_toolbar_pane_g1_ParamLimits

0x9115,	// (0x00014b5c) cell_toolbar_pane_g1

0x9129,	// (0x00014b70) cell_toolbar_pane_g2_ParamLimits

0x9129,	// (0x00014b70) cell_toolbar_pane_g2

0x0001,

0xf79b,	// (0x0001b1e2) cell_toolbar_pane_g_ParamLimits

0xf79b,	// (0x0001b1e2) cell_toolbar_pane_g

0x914b,	// (0x00014b92) grid_highlight_pane_cp2_ParamLimits

0x914b,	// (0x00014b92) grid_highlight_pane_cp2

0x9165,	// (0x00014bac) toolbar_button_pane

0x9171,	// (0x00014bb8) toolbar_button_pane_g1

0x9179,	// (0x00014bc0) toolbar_button_pane_g2

0x9181,	// (0x00014bc8) toolbar_button_pane_g3

0x9189,	// (0x00014bd0) toolbar_button_pane_g4

0x9191,	// (0x00014bd8) toolbar_button_pane_g5

0x9199,	// (0x00014be0) toolbar_button_pane_g6

0x91a1,	// (0x00014be8) toolbar_button_pane_g7

0x91a9,	// (0x00014bf0) toolbar_button_pane_g8

0x91b1,	// (0x00014bf8) toolbar_button_pane_g9

0x0009,

0xf7a0,	// (0x0001b1e7) toolbar_button_pane_g

0x5665,	// (0x000110ac) list_single_2graphic_pane_g1_cp3_ParamLimits

0x5665,	// (0x000110ac) list_single_2graphic_pane_g1_cp3

0x5671,	// (0x000110b8) list_single_2graphic_pane_g2_cp3_ParamLimits

0x5671,	// (0x000110b8) list_single_2graphic_pane_g2_cp3

0x5682,	// (0x000110c9) list_single_2graphic_pane_g3_cp3

0x568a,	// (0x000110d1) list_single_2graphic_pane_g4_cp3_ParamLimits

0x568a,	// (0x000110d1) list_single_2graphic_pane_g4_cp3

0x5696,	// (0x000110dd) list_single_2graphic_pane_t1_cp3_ParamLimits

0x5696,	// (0x000110dd) list_single_2graphic_pane_t1_cp3

0x56b2,	// (0x000110f9) list_single_midp_graphic_pane_g2_ParamLimits

0x56b2,	// (0x000110f9) list_single_midp_graphic_pane_g2

0x4fe8,	// (0x00010a2f) aid_zoom_text_primary

0x4ff0,	// (0x00010a37) aid_zoom_text_secondary

0x8b6b,	// (0x000145b2) status_small_pane_g7_ParamLimits

0x8b6b,	// (0x000145b2) status_small_pane_g7

0x8b8e,	// (0x000145d5) status_small_pane_t1_ParamLimits

0x6b85,	// (0x000125cc) title_pane_g2

0x0003,

0xf529,	// (0x0001af70) title_pane_g

0x7110,	// (0x00012b57) aid_size_cell_colour_1_pane_ParamLimits

0x7110,	// (0x00012b57) aid_size_cell_colour_1_pane

0x7124,	// (0x00012b6b) aid_size_cell_colour_2_pane_ParamLimits

0x7124,	// (0x00012b6b) aid_size_cell_colour_2_pane

0x7138,	// (0x00012b7f) aid_size_cell_colour_3_pane_ParamLimits

0x7138,	// (0x00012b7f) aid_size_cell_colour_3_pane

0x714c,	// (0x00012b93) aid_size_cell_colour_4_pane_ParamLimits

0x714c,	// (0x00012b93) aid_size_cell_colour_4_pane

0x4a36,	// (0x0001047d) title_pane_stacon_g1_ParamLimits

0x4a36,	// (0x0001047d) title_pane_stacon_g1

0x9911,	// (0x00015358) popup_note_wait_window_g3_ParamLimits

0x9911,	// (0x00015358) popup_note_wait_window_g3

0x9987,	// (0x000153ce) popup_note_wait_window_t5_ParamLimits

0x9987,	// (0x000153ce) popup_note_wait_window_t5

0x6b6e,	// (0x000125b5) main_feb_china_hwr_fs_writing_pane

0x508e,	// (0x00010ad5) popup_feb_china_hwr_fs_window_ParamLimits

0x508e,	// (0x00010ad5) popup_feb_china_hwr_fs_window

0x56d4,	// (0x0001111b) aid_size_cell_hwr_fs_ParamLimits

0x56d4,	// (0x0001111b) aid_size_cell_hwr_fs

0x9293,	// (0x00014cda) bg_popup_sub_pane_cp3_ParamLimits

0x9293,	// (0x00014cda) bg_popup_sub_pane_cp3

0x56e9,	// (0x00011130) grid_hwr_fs_pane_ParamLimits

0x56e9,	// (0x00011130) grid_hwr_fs_pane

0x5701,	// (0x00011148) linegrid_hwr_fs_pane_ParamLimits

0x5701,	// (0x00011148) linegrid_hwr_fs_pane

0x5711,	// (0x00011158) cell_hwr_fs_pane_ParamLimits

0x5711,	// (0x00011158) cell_hwr_fs_pane

0x929f,	// (0x00014ce6) linegrid_hwr_fs_pane_g1_ParamLimits

0x929f,	// (0x00014ce6) linegrid_hwr_fs_pane_g1

0x92ab,	// (0x00014cf2) linegrid_hwr_fs_pane_g2_ParamLimits

0x92ab,	// (0x00014cf2) linegrid_hwr_fs_pane_g2

0x92bd,	// (0x00014d04) linegrid_hwr_fs_pane_g3_ParamLimits

0x92bd,	// (0x00014d04) linegrid_hwr_fs_pane_g3

0x5733,	// (0x0001117a) linegrid_hwr_fs_pane_g4_ParamLimits

0x5733,	// (0x0001117a) linegrid_hwr_fs_pane_g4

0x574d,	// (0x00011194) linegrid_hwr_fs_pane_g5_ParamLimits

0x574d,	// (0x00011194) linegrid_hwr_fs_pane_g5

0x0004,

0xf7c6,	// (0x0001b20d) linegrid_hwr_fs_pane_g_ParamLimits

0xf7c6,	// (0x0001b20d) linegrid_hwr_fs_pane_g

0x92c9,	// (0x00014d10) cell_hwr_fs_pane_g1_ParamLimits

0x92c9,	// (0x00014d10) cell_hwr_fs_pane_g1

0x8fd0,	// (0x00014a17) cell_hwr_fs_pane_g2_ParamLimits

0x8fd0,	// (0x00014a17) cell_hwr_fs_pane_g2

0x92df,	// (0x00014d26) cell_hwr_fs_pane_g3_ParamLimits

0x92df,	// (0x00014d26) cell_hwr_fs_pane_g3

0x92ec,	// (0x00014d33) cell_hwr_fs_pane_g4_ParamLimits

0x92ec,	// (0x00014d33) cell_hwr_fs_pane_g4

0x0003,

0xf7d1,	// (0x0001b218) cell_hwr_fs_pane_g_ParamLimits

0xf7d1,	// (0x0001b218) cell_hwr_fs_pane_g

0x5763,	// (0x000111aa) cell_hwr_fs_pane_t1

0x6b6e,	// (0x000125b5) grid_highlight_pane_cp6

0x6b6e,	// (0x000125b5) main_idle_act2_pane

0x7d36,	// (0x0001377d) aid_inside_area_popup_secondary

0x9fbe,	// (0x00015a05) aid_inside_area_window_primary_ParamLimits

0x9fbe,	// (0x00015a05) aid_inside_area_window_primary

0xac4b,	// (0x00016692) ai2_news_ticker_pane

0xac53,	// (0x0001669a) aid_size_cell_ai1_link_ParamLimits

0xac53,	// (0x0001669a) aid_size_cell_ai1_link

0xac6d,	// (0x000166b4) popup_ai2_data_window_ParamLimits

0xac6d,	// (0x000166b4) popup_ai2_data_window

0xac83,	// (0x000166ca) popup_ai2_link_window_ParamLimits

0xac83,	// (0x000166ca) popup_ai2_link_window

0x9293,	// (0x00014cda) bg_popup_sub_pane_cp4_ParamLimits

0x9293,	// (0x00014cda) bg_popup_sub_pane_cp4

0xac97,	// (0x000166de) grid_ai2_link_pane_ParamLimits

0xac97,	// (0x000166de) grid_ai2_link_pane

0xacae,	// (0x000166f5) popup_ai2_link_window_g1_ParamLimits

0xacae,	// (0x000166f5) popup_ai2_link_window_g1

0xacba,	// (0x00016701) popup_ai2_link_window_g2_ParamLimits

0xacba,	// (0x00016701) popup_ai2_link_window_g2

0x0001,

0xf9a4,	// (0x0001b3eb) popup_ai2_link_window_g_ParamLimits

0xf9a4,	// (0x0001b3eb) popup_ai2_link_window_g

0xacc9,	// (0x00016710) ai2_mp_button_pane

0xacd1,	// (0x00016718) ai2_mp_volume_pane

0x94af,	// (0x00014ef6) bg_popup_sub_pane_cp5_ParamLimits

0x94af,	// (0x00014ef6) bg_popup_sub_pane_cp5

0xacd9,	// (0x00016720) heading_ai2_gene_pane_ParamLimits

0xacd9,	// (0x00016720) heading_ai2_gene_pane

0xace5,	// (0x0001672c) list_ai2_gene_pane_ParamLimits

0xace5,	// (0x0001672c) list_ai2_gene_pane

0xad2d,	// (0x00016774) cell_ai2_link_pane_ParamLimits

0xad2d,	// (0x00016774) cell_ai2_link_pane

0xad43,	// (0x0001678a) cell_ai2_link_pane_g1

0x6b6e,	// (0x000125b5) grid_highlight_pane_cp7

0x5a55,	// (0x0001149c) ai2_mp_volume_pane_g1

0xae13,	// (0x0001685a) ai2_mp_volume_pane_g2

0xad88,	// (0x000167cf) list_ai2_gene_pane_t1

0xae1b,	// (0x00016862) ai2_mp_volume_pane_g3

0x0002,

0xf9bd,	// (0x0001b404) ai2_mp_volume_pane_g

0x5a5d,	// (0x000114a4) volume_small_pane_cp3

0xae23,	// (0x0001686a) aid_size_cell_ai2_button

0xae2b,	// (0x00016872) grid_ai2_button_pane

0xae34,	// (0x0001687b) cell_ai2_button_pane_ParamLimits

0xae34,	// (0x0001687b) cell_ai2_button_pane

0x3b7a,	// (0x0000f5c1) cell_ai2_button_pane_g1

0x6b6e,	// (0x000125b5) grid_highlight_pane_cp8

0xadd3,	// (0x0001681a) ai2_gene_pane_t1_ParamLimits

0xadd3,	// (0x0001681a) ai2_gene_pane_t1

0x4fd6,	// (0x00010a1d) aid_height_parent_landscape

0xa646,	// (0x0001608d) aid_height_set_list

0xa657,	// (0x0001609e) aid_size_parent

0xaa6e,	// (0x000164b5) aid_size_cell_graphic_pane_ParamLimits

0xacf5,	// (0x0001673c) popup_ai2_data_window_g1_ParamLimits

0xacf5,	// (0x0001673c) popup_ai2_data_window_g1

0xad01,	// (0x00016748) ai2_news_ticker_pane_g1

0xad09,	// (0x00016750) ai2_news_ticker_pane_g2

0x0001,

0xf9a9,	// (0x0001b3f0) ai2_news_ticker_pane_g

0xad11,	// (0x00016758) ai2_news_ticker_pane_t1

0xad1f,	// (0x00016766) ai2_news_ticker_pane_t2

0x0001,

0xf9ae,	// (0x0001b3f5) ai2_news_ticker_pane_t

0xad4c,	// (0x00016793) heading_ai2_gene_pane_g1

0xad54,	// (0x0001679b) heading_ai2_gene_pane_t1_ParamLimits

0xad54,	// (0x0001679b) heading_ai2_gene_pane_t1

0xad69,	// (0x000167b0) list_highlight_pane_cp6

0xad71,	// (0x000167b8) ai2_gene_pane_ParamLimits

0xad71,	// (0x000167b8) ai2_gene_pane

0xad96,	// (0x000167dd) list_ai2_gene_pane_t2

0x0001,

0xf9b3,	// (0x0001b3fa) list_ai2_gene_pane_t

0xada4,	// (0x000167eb) list_highlight_pane_cp8_ParamLimits

0xada4,	// (0x000167eb) list_highlight_pane_cp8

0xadb5,	// (0x000167fc) ai2_gene_pane_g1_ParamLimits

0xadb5,	// (0x000167fc) ai2_gene_pane_g1

0xadc7,	// (0x0001680e) ai2_gene_pane_g2_ParamLimits

0xadc7,	// (0x0001680e) ai2_gene_pane_g2

0x0001,

0xf9b8,	// (0x0001b3ff) ai2_gene_pane_g_ParamLimits

0xf9b8,	// (0x0001b3ff) ai2_gene_pane_g

0x748b,	// (0x00012ed2) scroll_pane_cp12

0x4f93,	// (0x000109da) control_pane_t3_ParamLimits

0x4f93,	// (0x000109da) control_pane_t3

0x8b7f,	// (0x000145c6) status_small_pane_g8_ParamLimits

0x8b7f,	// (0x000145c6) status_small_pane_g8

0x5174,	// (0x00010bbb) popup_find_window_ParamLimits

0x538b,	// (0x00010dd2) popup_note_image_window_ParamLimits

0x7522,	// (0x00012f69) list_double2_graphic_pane_vc_g1_ParamLimits

0x7522,	// (0x00012f69) list_double2_graphic_pane_vc_g1

0x74a8,	// (0x00012eef) list_double2_graphic_pane_vc_g2_ParamLimits

0x74a8,	// (0x00012eef) list_double2_graphic_pane_vc_g2

0x74b4,	// (0x00012efb) list_double2_graphic_pane_vc_g3_ParamLimits

0x74b4,	// (0x00012efb) list_double2_graphic_pane_vc_g3

0x0002,

0xf794,	// (0x0001b1db) list_double2_graphic_pane_vc_g_ParamLimits

0xf794,	// (0x0001b1db) list_double2_graphic_pane_vc_g

0x90ff,	// (0x00014b46) list_double2_graphic_pane_vc_t1_ParamLimits

0x90ff,	// (0x00014b46) list_double2_graphic_pane_vc_t1

0x74a8,	// (0x00012eef) list_single_heading_pane_vc_g1_ParamLimits

0x74a8,	// (0x00012eef) list_single_heading_pane_vc_g1

0x74b4,	// (0x00012efb) list_single_heading_pane_vc_g2_ParamLimits

0x74b4,	// (0x00012efb) list_single_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x0001afea) list_single_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x0001afea) list_single_heading_pane_vc_g

0x91b9,	// (0x00014c00) list_single_heading_pane_vc_t1_ParamLimits

0x91b9,	// (0x00014c00) list_single_heading_pane_vc_t1

0x91cf,	// (0x00014c16) list_single_heading_pane_vc_t2_ParamLimits

0x91cf,	// (0x00014c16) list_single_heading_pane_vc_t2

0x0001,

0xf7b5,	// (0x0001b1fc) list_single_heading_pane_vc_t_ParamLimits

0xf7b5,	// (0x0001b1fc) list_single_heading_pane_vc_t

0x91e1,	// (0x00014c28) list_setting_number_pane_vc_g1_ParamLimits

0x91e1,	// (0x00014c28) list_setting_number_pane_vc_g1

0x91ed,	// (0x00014c34) list_setting_number_pane_vc_g2_ParamLimits

0x91ed,	// (0x00014c34) list_setting_number_pane_vc_g2

0x0001,

0xf7ba,	// (0x0001b201) list_setting_number_pane_vc_g_ParamLimits

0xf7ba,	// (0x0001b201) list_setting_number_pane_vc_g

0x91f9,	// (0x00014c40) list_setting_number_pane_vc_t1_ParamLimits

0x91f9,	// (0x00014c40) list_setting_number_pane_vc_t1

0x920d,	// (0x00014c54) list_setting_number_pane_vc_t2_ParamLimits

0x920d,	// (0x00014c54) list_setting_number_pane_vc_t2

0x9229,	// (0x00014c70) list_setting_number_pane_vc_t3_ParamLimits

0x9229,	// (0x00014c70) list_setting_number_pane_vc_t3

0x0002,

0xf7bf,	// (0x0001b206) list_setting_number_pane_vc_t_ParamLimits

0xf7bf,	// (0x0001b206) list_setting_number_pane_vc_t

0x9257,	// (0x00014c9e) set_value_pane_vc_ParamLimits

0x9257,	// (0x00014c9e) set_value_pane_vc

0xa85d,	// (0x000162a4) list_double2_graphic_pane_vc_ParamLimits

0xa85d,	// (0x000162a4) list_double2_graphic_pane_vc

0xa85d,	// (0x000162a4) list_double2_large_graphic_pane_vc_ParamLimits

0xa85d,	// (0x000162a4) list_double2_large_graphic_pane_vc

0xa85d,	// (0x000162a4) list_double2_pane_vc_ParamLimits

0xa85d,	// (0x000162a4) list_double2_pane_vc

0xa85d,	// (0x000162a4) list_double_graphic_heading_pane_vc_ParamLimits

0xa85d,	// (0x000162a4) list_double_graphic_heading_pane_vc

0xa85d,	// (0x000162a4) list_double_graphic_pane_vc_ParamLimits

0xa85d,	// (0x000162a4) list_double_graphic_pane_vc

0xa85d,	// (0x000162a4) list_double_heading_pane_vc_ParamLimits

0xa85d,	// (0x000162a4) list_double_heading_pane_vc

0xa86f,	// (0x000162b6) list_double_large_graphic_pane_vc_ParamLimits

0xa86f,	// (0x000162b6) list_double_large_graphic_pane_vc

0xa85d,	// (0x000162a4) list_double_number_pane_vc_ParamLimits

0xa85d,	// (0x000162a4) list_double_number_pane_vc

0xa85d,	// (0x000162a4) list_double_pane_vc_ParamLimits

0xa85d,	// (0x000162a4) list_double_pane_vc

0xa85d,	// (0x000162a4) list_double_time_pane_vc_ParamLimits

0xa85d,	// (0x000162a4) list_double_time_pane_vc

0xa85d,	// (0x000162a4) list_setting_number_pane_vc_ParamLimits

0xa85d,	// (0x000162a4) list_setting_number_pane_vc

0xa85d,	// (0x000162a4) list_setting_pane_vc_ParamLimits

0xa85d,	// (0x000162a4) list_setting_pane_vc

0xa85d,	// (0x000162a4) list_single_graphic_heading_pane_vc_ParamLimits

0xa85d,	// (0x000162a4) list_single_graphic_heading_pane_vc

0xa85d,	// (0x000162a4) list_single_heading_pane_vc_ParamLimits

0xa85d,	// (0x000162a4) list_single_heading_pane_vc

0xa88d,	// (0x000162d4) list_single_number_heading_pane_vc_ParamLimits

0xa88d,	// (0x000162d4) list_single_number_heading_pane_vc

0x7522,	// (0x00012f69) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x7522,	// (0x00012f69) list_double_graphic_heading_pane_vc_g1

0xae68,	// (0x000168af) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xae68,	// (0x000168af) list_double_graphic_heading_pane_vc_g2

0xae74,	// (0x000168bb) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xae74,	// (0x000168bb) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9c4,	// (0x0001b40b) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9c4,	// (0x0001b40b) list_double_graphic_heading_pane_vc_g

0xae80,	// (0x000168c7) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xae80,	// (0x000168c7) list_double_graphic_heading_pane_vc_t1

0xae9c,	// (0x000168e3) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xae9c,	// (0x000168e3) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9cb,	// (0x0001b412) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9cb,	// (0x0001b412) list_double_graphic_heading_pane_vc_t

0x91e1,	// (0x00014c28) list_setting_pane_vc_g1_ParamLimits

0x91e1,	// (0x00014c28) list_setting_pane_vc_g1

0x91ed,	// (0x00014c34) list_setting_pane_vc_g2_ParamLimits

0x91ed,	// (0x00014c34) list_setting_pane_vc_g2

0x0001,

0xf7ba,	// (0x0001b201) list_setting_pane_vc_g_ParamLimits

0xf7ba,	// (0x0001b201) list_setting_pane_vc_g

0xb0ca,	// (0x00016b11) list_setting_pane_vc_t1_ParamLimits

0xb0ca,	// (0x00016b11) list_setting_pane_vc_t1

0xb0e6,	// (0x00016b2d) list_setting_pane_vc_t2_ParamLimits

0xb0e6,	// (0x00016b2d) list_setting_pane_vc_t2

0x0001,

0xf9f9,	// (0x0001b440) list_setting_pane_vc_t_ParamLimits

0xf9f9,	// (0x0001b440) list_setting_pane_vc_t

0x9257,	// (0x00014c9e) set_value_pane_cp_vc_ParamLimits

0x9257,	// (0x00014c9e) set_value_pane_cp_vc

0x74a8,	// (0x00012eef) list_single_number_heading_pane_vc_g1_ParamLimits

0x74a8,	// (0x00012eef) list_single_number_heading_pane_vc_g1

0x74b4,	// (0x00012efb) list_single_number_heading_pane_vc_g2_ParamLimits

0x74b4,	// (0x00012efb) list_single_number_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x0001afea) list_single_number_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x0001afea) list_single_number_heading_pane_vc_g

0xb102,	// (0x00016b49) list_single_number_heading_pane_vc_t1_ParamLimits

0xb102,	// (0x00016b49) list_single_number_heading_pane_vc_t1

0x74fe,	// (0x00012f45) list_single_number_heading_pane_vc_t2_ParamLimits

0x74fe,	// (0x00012f45) list_single_number_heading_pane_vc_t2

0x7510,	// (0x00012f57) list_single_number_heading_pane_vc_t3_ParamLimits

0x7510,	// (0x00012f57) list_single_number_heading_pane_vc_t3

0x0002,

0xf9fe,	// (0x0001b445) list_single_number_heading_pane_vc_t_ParamLimits

0xf9fe,	// (0x0001b445) list_single_number_heading_pane_vc_t

0x7522,	// (0x00012f69) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x7522,	// (0x00012f69) list_single_graphic_heading_pane_vc_g1

0x74a8,	// (0x00012eef) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x74a8,	// (0x00012eef) list_single_graphic_heading_pane_vc_g4

0x74b4,	// (0x00012efb) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x74b4,	// (0x00012efb) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf794,	// (0x0001b1db) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf794,	// (0x0001b1db) list_single_graphic_heading_pane_vc_g

0xb118,	// (0x00016b5f) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xb118,	// (0x00016b5f) list_single_graphic_heading_pane_vc_t1

0xb12e,	// (0x00016b75) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xb12e,	// (0x00016b75) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa05,	// (0x0001b44c) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa05,	// (0x0001b44c) list_single_graphic_heading_pane_vc_t

0x74a8,	// (0x00012eef) list_double2_pane_vc_g1_ParamLimits

0x74a8,	// (0x00012eef) list_double2_pane_vc_g1

0x74b4,	// (0x00012efb) list_double2_pane_vc_g2_ParamLimits

0x74b4,	// (0x00012efb) list_double2_pane_vc_g2

0x0001,

0xf5a3,	// (0x0001afea) list_double2_pane_vc_g_ParamLimits

0xf5a3,	// (0x0001afea) list_double2_pane_vc_g

0xa7fb,	// (0x00016242) list_double2_pane_vc_t1_ParamLimits

0xa7fb,	// (0x00016242) list_double2_pane_vc_t1

0xb140,	// (0x00016b87) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xb140,	// (0x00016b87) list_double2_large_graphic_pane_vc_g1

0x74a8,	// (0x00012eef) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x74a8,	// (0x00012eef) list_double2_large_graphic_pane_vc_g2

0x74b4,	// (0x00012efb) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x74b4,	// (0x00012efb) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa0a,	// (0x0001b451) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa0a,	// (0x0001b451) list_double2_large_graphic_pane_vc_g

0xb14c,	// (0x00016b93) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xb14c,	// (0x00016b93) list_double2_large_graphic_pane_vc_t1

0xb162,	// (0x00016ba9) list_double_time_pane_vc_g1_ParamLimits

0xb162,	// (0x00016ba9) list_double_time_pane_vc_g1

0xb16e,	// (0x00016bb5) list_double_time_pane_vc_g2_ParamLimits

0xb16e,	// (0x00016bb5) list_double_time_pane_vc_g2

0x0001,

0xfa11,	// (0x0001b458) list_double_time_pane_vc_g_ParamLimits

0xfa11,	// (0x0001b458) list_double_time_pane_vc_g

0xb17a,	// (0x00016bc1) list_double_time_pane_vc_t1_ParamLimits

0xb17a,	// (0x00016bc1) list_double_time_pane_vc_t1

0xb19e,	// (0x00016be5) list_double_time_pane_vc_t2_ParamLimits

0xb19e,	// (0x00016be5) list_double_time_pane_vc_t2

0xb1cd,	// (0x00016c14) list_double_time_pane_vc_t3_ParamLimits

0xb1cd,	// (0x00016c14) list_double_time_pane_vc_t3

0xb1df,	// (0x00016c26) list_double_time_pane_vc_t4_ParamLimits

0xb1df,	// (0x00016c26) list_double_time_pane_vc_t4

0x0003,

0xfa16,	// (0x0001b45d) list_double_time_pane_vc_t_ParamLimits

0xfa16,	// (0x0001b45d) list_double_time_pane_vc_t

0x74a8,	// (0x00012eef) list_double_pane_vc_g1_ParamLimits

0x74a8,	// (0x00012eef) list_double_pane_vc_g1

0x74b4,	// (0x00012efb) list_double_pane_vc_g2_ParamLimits

0x74b4,	// (0x00012efb) list_double_pane_vc_g2

0x0001,

0xf5a3,	// (0x0001afea) list_double_pane_vc_g_ParamLimits

0xf5a3,	// (0x0001afea) list_double_pane_vc_g

0xb1f3,	// (0x00016c3a) list_double_pane_vc_t1_ParamLimits

0xb1f3,	// (0x00016c3a) list_double_pane_vc_t1

0xb207,	// (0x00016c4e) list_double_pane_vc_t2_ParamLimits

0xb207,	// (0x00016c4e) list_double_pane_vc_t2

0x0001,

0xfa1f,	// (0x0001b466) list_double_pane_vc_t_ParamLimits

0xfa1f,	// (0x0001b466) list_double_pane_vc_t

0x74a8,	// (0x00012eef) list_double_number_pane_vc_g1_ParamLimits

0x74a8,	// (0x00012eef) list_double_number_pane_vc_g1

0x74b4,	// (0x00012efb) list_double_number_pane_vc_g2_ParamLimits

0x74b4,	// (0x00012efb) list_double_number_pane_vc_g2

0x0001,

0xf5a3,	// (0x0001afea) list_double_number_pane_vc_g_ParamLimits

0xf5a3,	// (0x0001afea) list_double_number_pane_vc_g

0xb21f,	// (0x00016c66) list_double_number_pane_vc_t1_ParamLimits

0xb21f,	// (0x00016c66) list_double_number_pane_vc_t1

0xb231,	// (0x00016c78) list_double_number_pane_vc_t2_ParamLimits

0xb231,	// (0x00016c78) list_double_number_pane_vc_t2

0xb245,	// (0x00016c8c) list_double_number_pane_vc_t3_ParamLimits

0xb245,	// (0x00016c8c) list_double_number_pane_vc_t3

0x0002,

0xfa24,	// (0x0001b46b) list_double_number_pane_vc_t_ParamLimits

0xfa24,	// (0x0001b46b) list_double_number_pane_vc_t

0xb25d,	// (0x00016ca4) list_double_large_graphic_pane_vc_g1_ParamLimits

0xb25d,	// (0x00016ca4) list_double_large_graphic_pane_vc_g1

0xb279,	// (0x00016cc0) list_double_large_graphic_pane_vc_g2_ParamLimits

0xb279,	// (0x00016cc0) list_double_large_graphic_pane_vc_g2

0xb28d,	// (0x00016cd4) list_double_large_graphic_pane_vc_g3_ParamLimits

0xb28d,	// (0x00016cd4) list_double_large_graphic_pane_vc_g3

0xb29c,	// (0x00016ce3) list_double_large_graphic_pane_vc_g4_ParamLimits

0xb29c,	// (0x00016ce3) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa2b,	// (0x0001b472) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa2b,	// (0x0001b472) list_double_large_graphic_pane_vc_g

0xb2ab,	// (0x00016cf2) list_double_large_graphic_pane_vc_t1_ParamLimits

0xb2ab,	// (0x00016cf2) list_double_large_graphic_pane_vc_t1

0xb2c7,	// (0x00016d0e) list_double_large_graphic_pane_vc_t2_ParamLimits

0xb2c7,	// (0x00016d0e) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa34,	// (0x0001b47b) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa34,	// (0x0001b47b) list_double_large_graphic_pane_vc_t

0xae68,	// (0x000168af) list_double_heading_pane_vc_g1_ParamLimits

0xae68,	// (0x000168af) list_double_heading_pane_vc_g1

0xae74,	// (0x000168bb) list_double_heading_pane_vc_g2_ParamLimits

0xae74,	// (0x000168bb) list_double_heading_pane_vc_g2

0x0001,

0xfa39,	// (0x0001b480) list_double_heading_pane_vc_g_ParamLimits

0xfa39,	// (0x0001b480) list_double_heading_pane_vc_g

0xb2e9,	// (0x00016d30) list_double_heading_pane_vc_t1_ParamLimits

0xb2e9,	// (0x00016d30) list_double_heading_pane_vc_t1

0xb2fd,	// (0x00016d44) list_double_heading_pane_vc_t2_ParamLimits

0xb2fd,	// (0x00016d44) list_double_heading_pane_vc_t2

0x0001,

0xfa3e,	// (0x0001b485) list_double_heading_pane_vc_t_ParamLimits

0xfa3e,	// (0x0001b485) list_double_heading_pane_vc_t

0xb315,	// (0x00016d5c) list_double_graphic_pane_vc_g1_ParamLimits

0xb315,	// (0x00016d5c) list_double_graphic_pane_vc_g1

0xb321,	// (0x00016d68) list_double_graphic_pane_vc_g2_ParamLimits

0xb321,	// (0x00016d68) list_double_graphic_pane_vc_g2

0x74a8,	// (0x00012eef) list_double_graphic_pane_vc_g3_ParamLimits

0x74a8,	// (0x00012eef) list_double_graphic_pane_vc_g3

0x0003,

0xfa43,	// (0x0001b48a) list_double_graphic_pane_vc_g_ParamLimits

0xfa43,	// (0x0001b48a) list_double_graphic_pane_vc_g

0xb33e,	// (0x00016d85) list_double_graphic_pane_vc_t1_ParamLimits

0xb33e,	// (0x00016d85) list_double_graphic_pane_vc_t1

0xb368,	// (0x00016daf) list_double_graphic_pane_vc_t2_ParamLimits

0xb368,	// (0x00016daf) list_double_graphic_pane_vc_t2

0x0001,

0xfa4c,	// (0x0001b493) list_double_graphic_pane_vc_t_ParamLimits

0xfa4c,	// (0x0001b493) list_double_graphic_pane_vc_t

0x4589,	// (0x0000ffd0) aid_size_cell_fastswap

0x4591,	// (0x0000ffd8) aid_size_cell_touch_ParamLimits

0x4591,	// (0x0000ffd8) aid_size_cell_touch

0x47f6,	// (0x0001023d) popup_fast_swap_wide_window_ParamLimits

0x47f6,	// (0x0001023d) popup_fast_swap_wide_window

0x490a,	// (0x00010351) touch_pane_ParamLimits

0x490a,	// (0x00010351) touch_pane

0x7966,	// (0x000133ad) button_value_adjust_pane_cp2

0x796e,	// (0x000133b5) button_value_adjust_pane_cp4

0x7990,	// (0x000133d7) form_field_data_pane_cp2

0x79b1,	// (0x000133f8) form_field_data_wide_pane_cp2

0x804e,	// (0x00013a95) bg_scroll_pane_ParamLimits

0x4b98,	// (0x000105df) scroll_handle_pane_ParamLimits

0x4bac,	// (0x000105f3) scroll_sc2_down_pane_ParamLimits

0x4bac,	// (0x000105f3) scroll_sc2_down_pane

0x807f,	// (0x00013ac6) scroll_sc2_up_pane_ParamLimits

0x807f,	// (0x00013ac6) scroll_sc2_up_pane

0xb836,	// (0x0001727d) grid_wheel_folder_pane_g1_ParamLimits

0xb836,	// (0x0001727d) grid_wheel_folder_pane_g1

0x4d71,	// (0x000107b8) clock_nsta_pane_cp2_ParamLimits

0x4d71,	// (0x000107b8) clock_nsta_pane_cp2

0x8905,	// (0x0001434c) listscroll_midp_pane_ParamLimits

0x8911,	// (0x00014358) midp_canvas_pane

0x8bf9,	// (0x00014640) nsta_clock_indic_pane

0x8c35,	// (0x0001467c) listscroll_form_pane_vc

0x8c3d,	// (0x00014684) listscroll_set_pane_vc_ParamLimits

0x8c3d,	// (0x00014684) listscroll_set_pane_vc

0x8d3e,	// (0x00014785) clock_nsta_pane

0x8db9,	// (0x00014800) indicator_nsta_pane

0x9099,	// (0x00014ae0) bg_popup_sub_pane_cp2_ParamLimits

0x90ad,	// (0x00014af4) find_pane_cp2_ParamLimits

0x90ad,	// (0x00014af4) find_pane_cp2

0x90c3,	// (0x00014b0a) grid_toobar_pane_ParamLimits

0x9267,	// (0x00014cae) list_form_gen_pane_vc_ParamLimits

0x9267,	// (0x00014cae) list_form_gen_pane_vc

0x927d,	// (0x00014cc4) scroll_pane_cp8_vc_ParamLimits

0x927d,	// (0x00014cc4) scroll_pane_cp8_vc

0x92f9,	// (0x00014d40) data_form_wide_pane_vc_ParamLimits

0x92f9,	// (0x00014d40) data_form_wide_pane_vc

0x9305,	// (0x00014d4c) form_field_data_wide_pane_vc_g1

0x930d,	// (0x00014d54) form_field_data_wide_pane_vc_t1_ParamLimits

0x930d,	// (0x00014d54) form_field_data_wide_pane_vc_t1

0x7a4c,	// (0x00013493) input_focus_pane_cp6_vc_ParamLimits

0x7a4c,	// (0x00013493) input_focus_pane_cp6_vc

0x9670,	// (0x000150b7) list_midp_pane_ParamLimits

0x967c,	// (0x000150c3) scroll_pane_cp16_ParamLimits

0x967c,	// (0x000150c3) scroll_pane_cp16

0x96e6,	// (0x0001512d) button_value_adjust_pane_ParamLimits

0x96e6,	// (0x0001512d) button_value_adjust_pane

0xa669,	// (0x000160b0) button_value_adjust_pane_cp6_ParamLimits

0xa669,	// (0x000160b0) button_value_adjust_pane_cp6

0xa793,	// (0x000161da) settings_code_pane_cp_ParamLimits

0xa793,	// (0x000161da) settings_code_pane_cp

0x3b7a,	// (0x0000f5c1) cell_touch_pane_g1

0x3b7a,	// (0x0000f5c1) cell_touch_pane_g2

0x0001,

0xf6d9,	// (0x0001b120) cell_touch_pane_g

0xae46,	// (0x0001688d) cell_touch_pane_cp_ParamLimits

0xae46,	// (0x0001688d) cell_touch_pane_cp

0xae56,	// (0x0001689d) cell_touch_pane_ParamLimits

0xae56,	// (0x0001689d) cell_touch_pane

0x3b7a,	// (0x0000f5c1) scroll_sc2_down_pane_g1

0x3b7a,	// (0x0000f5c1) scroll_sc2_up_pane_g1

0x6b6e,	// (0x000125b5) bg_set_opt_pane_cp4_vc

0xaeba,	// (0x00016901) list_set_graphic_pane_vc_g1_ParamLimits

0xaeba,	// (0x00016901) list_set_graphic_pane_vc_g1

0xaec6,	// (0x0001690d) list_set_graphic_pane_vc_g2_ParamLimits

0xaec6,	// (0x0001690d) list_set_graphic_pane_vc_g2

0x0001,

0xf9d0,	// (0x0001b417) list_set_graphic_pane_vc_g_ParamLimits

0xf9d0,	// (0x0001b417) list_set_graphic_pane_vc_g

0xaed2,	// (0x00016919) text_primary_small_cp13_vc_ParamLimits

0xaed2,	// (0x00016919) text_primary_small_cp13_vc

0xaeea,	// (0x00016931) list_set_graphic_pane_vc_ParamLimits

0xaeea,	// (0x00016931) list_set_graphic_pane_vc

0x6b6e,	// (0x000125b5) input_focus_pane_cp2_vc

0x3b7a,	// (0x0000f5c1) setting_code_pane_vc_g1

0x6c99,	// (0x000126e0) setting_code_pane_vc_t1

0xaefd,	// (0x00016944) set_text_pane_vc_t1_ParamLimits

0xaefd,	// (0x00016944) set_text_pane_vc_t1

0x6b6e,	// (0x000125b5) input_focus_pane_cp1_vc

0xaf19,	// (0x00016960) list_set_text_pane_vc

0x3b7a,	// (0x0000f5c1) setting_text_pane_vc_g1

0x6b6e,	// (0x000125b5) bg_set_opt_pane_cp2_vc

0x6c90,	// (0x000126d7) setting_slider_graphic_pane_vc_g1

0xaf23,	// (0x0001696a) setting_slider_graphic_pane_vc_t1

0xaf33,	// (0x0001697a) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9d5,	// (0x0001b41c) setting_slider_graphic_pane_vc_t

0xaf43,	// (0x0001698a) slider_set_pane_cp_vc

0xaf4b,	// (0x00016992) slider_set_pane_vc_g1

0xaf54,	// (0x0001699b) slider_set_pane_vc_g2

0x0006,

0xf9da,	// (0x0001b421) slider_set_pane_vc_g

0x7b7b,	// (0x000135c2) set_opt_bg_pane_g1_copy1

0x7b83,	// (0x000135ca) set_opt_bg_pane_g2_copy1

0xaf80,	// (0x000169c7) set_opt_bg_pane_g3_copy1

0x7b93,	// (0x000135da) set_opt_bg_pane_g4_copy1

0x7b9b,	// (0x000135e2) set_opt_bg_pane_g5_copy1

0x7ba3,	// (0x000135ea) set_opt_bg_pane_g6_copy1

0xaf8a,	// (0x000169d1) set_opt_bg_pane_g7_copy1

0xaf94,	// (0x000169db) set_opt_bg_pane_g8_copy1

0xaf9e,	// (0x000169e5) set_opt_bg_pane_g9_copy1

0x6b6e,	// (0x000125b5) bg_set_opt_pane_cp_vc

0xafa8,	// (0x000169ef) setting_slider_pane_vc_t1

0xafb7,	// (0x000169fe) setting_slider_pane_vc_t2

0xafc7,	// (0x00016a0e) setting_slider_pane_vc_t3

0x0002,

0xf9e9,	// (0x0001b430) setting_slider_pane_vc_t

0xafd7,	// (0x00016a1e) slider_set_pane_vc

0x5771,	// (0x000111b8) volume_set_pane_vc_g1

0x577a,	// (0x000111c1) volume_set_pane_vc_g2

0x5783,	// (0x000111ca) volume_set_pane_vc_g3

0x578c,	// (0x000111d3) volume_set_pane_vc_g4

0x5795,	// (0x000111dc) volume_set_pane_vc_g5

0x579e,	// (0x000111e5) volume_set_pane_vc_g6

0x57a7,	// (0x000111ee) volume_set_pane_vc_g7

0x57b0,	// (0x000111f7) volume_set_pane_vc_g8

0x57b9,	// (0x00011200) volume_set_pane_vc_g9

0x57c2,	// (0x00011209) volume_set_pane_vc_g10

0x0009,

0xf887,	// (0x0001b2ce) volume_set_pane_vc_g

0xafdf,	// (0x00016a26) volume_set_pane_vc

0xafe7,	// (0x00016a2e) button_value_adjust_pane_cp1_vc

0xaff1,	// (0x00016a38) list_highlight_pane_cp2_vc

0xaffa,	// (0x00016a41) list_set_pane_vc_ParamLimits

0xaffa,	// (0x00016a41) list_set_pane_vc

0xb058,	// (0x00016a9f) main_pane_set_vc_t1_ParamLimits

0xb058,	// (0x00016a9f) main_pane_set_vc_t1

0xb06d,	// (0x00016ab4) main_pane_set_vc_t2_ParamLimits

0xb06d,	// (0x00016ab4) main_pane_set_vc_t2

0xb07f,	// (0x00016ac6) main_pane_set_vc_t3_ParamLimits

0xb07f,	// (0x00016ac6) main_pane_set_vc_t3

0xb093,	// (0x00016ada) main_pane_set_vc_t4_ParamLimits

0xb093,	// (0x00016ada) main_pane_set_vc_t4

0x0003,

0xf9f0,	// (0x0001b437) main_pane_set_vc_t_ParamLimits

0xf9f0,	// (0x0001b437) main_pane_set_vc_t

0xb0a7,	// (0x00016aee) setting_code_pane_vc_ParamLimits

0xb0a7,	// (0x00016aee) setting_code_pane_vc

0xb0b8,	// (0x00016aff) setting_slider_graphic_pane_vc

0xb0b8,	// (0x00016aff) setting_slider_pane_vc

0xb0b8,	// (0x00016aff) setting_text_pane_vc

0xb0b8,	// (0x00016aff) setting_volume_pane_vc

0xb0c2,	// (0x00016b09) scroll_pane_cp121_vc

0x7954,	// (0x0001339b) set_content_pane_vc

0xb392,	// (0x00016dd9) button_value_adjust_pane_g1

0xb39b,	// (0x00016de2) button_value_adjust_pane_g2

0x0001,

0xfa51,	// (0x0001b498) button_value_adjust_pane_g

0xb3a4,	// (0x00016deb) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb3a4,	// (0x00016deb) form_field_slider_wide_pane_vc_t1

0xb3b8,	// (0x00016dff) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb3b8,	// (0x00016dff) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa56,	// (0x0001b49d) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa56,	// (0x0001b49d) form_field_slider_wide_pane_vc_t

0x6ee3,	// (0x0001292a) input_focus_pane_cp10_vc_ParamLimits

0x6ee3,	// (0x0001292a) input_focus_pane_cp10_vc

0xb3e6,	// (0x00016e2d) slider_cont_pane_cp1_vc_ParamLimits

0xb3e6,	// (0x00016e2d) slider_cont_pane_cp1_vc

0xb3f8,	// (0x00016e3f) slider_form_pane_g1_cp2

0xaf54,	// (0x0001699b) slider_form_pane_g2_cp2

0xb425,	// (0x00016e6c) form_field_slider_pane_vc_t3

0xb433,	// (0x00016e7a) form_field_slider_pane_vc_t4

0xb441,	// (0x00016e88) slider_form_pane_vc_ParamLimits

0xb441,	// (0x00016e88) slider_form_pane_vc

0xb44e,	// (0x00016e95) form_field_slider_pane_vc_t1_ParamLimits

0xb44e,	// (0x00016e95) form_field_slider_pane_vc_t1

0xb3b8,	// (0x00016dff) form_field_slider_pane_vc_t2_ParamLimits

0xb3b8,	// (0x00016dff) form_field_slider_pane_vc_t2

0x0001,

0xfa68,	// (0x0001b4af) form_field_slider_pane_vc_t_ParamLimits

0xfa68,	// (0x0001b4af) form_field_slider_pane_vc_t

0x6ee3,	// (0x0001292a) input_focus_pane_cp9_vc_ParamLimits

0x6ee3,	// (0x0001292a) input_focus_pane_cp9_vc

0xb46a,	// (0x00016eb1) slider_cont_pane_vc_ParamLimits

0xb46a,	// (0x00016eb1) slider_cont_pane_vc

0xb47e,	// (0x00016ec5) list_form_graphic_pane_cp_vc_ParamLimits

0xb47e,	// (0x00016ec5) list_form_graphic_pane_cp_vc

0x9305,	// (0x00014d4c) form_field_popup_wide_pane_vc_g1

0xb493,	// (0x00016eda) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb493,	// (0x00016eda) form_field_popup_wide_pane_vc_t1

0x7a4c,	// (0x00013493) input_focus_pane_cp8_vc_ParamLimits

0x7a4c,	// (0x00013493) input_focus_pane_cp8_vc

0xb4d8,	// (0x00016f1f) list_form_wide_pane_vc_ParamLimits

0xb4d8,	// (0x00016f1f) list_form_wide_pane_vc

0xb4e4,	// (0x00016f2b) list_form_graphic_pane_vc_g1

0xb4ec,	// (0x00016f33) list_form_graphic_pane_vc_t1_ParamLimits

0xb4ec,	// (0x00016f33) list_form_graphic_pane_vc_t1

0x6c4e,	// (0x00012695) list_highlight_pane_cp5_vc_ParamLimits

0x6c4e,	// (0x00012695) list_highlight_pane_cp5_vc

0xb508,	// (0x00016f4f) list_form_graphic_pane_vc_ParamLimits

0xb508,	// (0x00016f4f) list_form_graphic_pane_vc

0x9305,	// (0x00014d4c) form_field_popup_pane_vc_g1

0xb51e,	// (0x00016f65) form_field_popup_pane_vc_t1_ParamLimits

0xb51e,	// (0x00016f65) form_field_popup_pane_vc_t1

0x7a4c,	// (0x00013493) input_focus_pane_cp7_vc_ParamLimits

0x7a4c,	// (0x00013493) input_focus_pane_cp7_vc

0xb535,	// (0x00016f7c) list_form_pane_vc_ParamLimits

0xb535,	// (0x00016f7c) list_form_pane_vc

0xb541,	// (0x00016f88) data_form_pane_vc_t1_ParamLimits

0xb541,	// (0x00016f88) data_form_pane_vc_t1

0x7b7b,	// (0x000135c2) input_focus_pane_vc_g1

0x7b83,	// (0x000135ca) input_focus_pane_vc_g2

0x7b8b,	// (0x000135d2) input_focus_pane_vc_g3

0x7b93,	// (0x000135da) input_focus_pane_vc_g4

0x7b9b,	// (0x000135e2) input_focus_pane_vc_g5

0x7ba3,	// (0x000135ea) input_focus_pane_vc_g6

0x7bab,	// (0x000135f2) input_focus_pane_vc_g7

0x7bb3,	// (0x000135fa) input_focus_pane_vc_g8

0x7bbb,	// (0x00013602) input_focus_pane_vc_g9

0x3b7a,	// (0x0000f5c1) input_focus_pane_vc_g10

0x0009,

0xf662,	// (0x0001b0a9) input_focus_pane_vc_g

0x92f9,	// (0x00014d40) data_form_pane_vc_ParamLimits

0x92f9,	// (0x00014d40) data_form_pane_vc

0x9305,	// (0x00014d4c) form_field_data_pane_vc_g1

0xb55c,	// (0x00016fa3) form_field_data_pane_vc_t1_ParamLimits

0xb55c,	// (0x00016fa3) form_field_data_pane_vc_t1

0x7a4c,	// (0x00013493) input_focus_pane_vc_ParamLimits

0x7a4c,	// (0x00013493) input_focus_pane_vc

0xb576,	// (0x00016fbd) button_value_adjust_pane_cp3_vc

0xb57e,	// (0x00016fc5) button_value_adjust_pane_cp5_vc

0xb586,	// (0x00016fcd) form_field_data_pane_vc_ParamLimits

0xb586,	// (0x00016fcd) form_field_data_pane_vc

0xb59d,	// (0x00016fe4) form_field_data_pane_vc_cp2

0xb5a5,	// (0x00016fec) form_field_data_wide_pane_vc_ParamLimits

0xb5a5,	// (0x00016fec) form_field_data_wide_pane_vc

0xb5bb,	// (0x00017002) form_field_data_wide_pane_vc_cp2

0xb5c3,	// (0x0001700a) form_field_popup_pane_vc_ParamLimits

0xb5c3,	// (0x0001700a) form_field_popup_pane_vc

0xb5da,	// (0x00017021) form_field_popup_wide_pane_vc_ParamLimits

0xb5da,	// (0x00017021) form_field_popup_wide_pane_vc

0xb5f0,	// (0x00017037) form_field_slider_pane_vc_ParamLimits

0xb5f0,	// (0x00017037) form_field_slider_pane_vc

0xb603,	// (0x0001704a) form_field_slider_wide_pane_vc_ParamLimits

0xb603,	// (0x0001704a) form_field_slider_wide_pane_vc

0xb616,	// (0x0001705d) grid_touch_1_pane_ParamLimits

0xb616,	// (0x0001705d) grid_touch_1_pane

0xb622,	// (0x00017069) grid_touch_2_pane_ParamLimits

0xb622,	// (0x00017069) grid_touch_2_pane

0x8bc4,	// (0x0001460b) touch_pane_g1_ParamLimits

0x8bc4,	// (0x0001460b) touch_pane_g1

0xb63a,	// (0x00017081) cell_app_pane_cp_wide_ParamLimits

0xb63a,	// (0x00017081) cell_app_pane_cp_wide

0xb64b,	// (0x00017092) grid_popup_fast_wide_pane_ParamLimits

0xb64b,	// (0x00017092) grid_popup_fast_wide_pane

0xb65f,	// (0x000170a6) scroll_pane_cp19_ParamLimits

0xb65f,	// (0x000170a6) scroll_pane_cp19

0x6b6e,	// (0x000125b5) bg_popup_window_pane_cp20

0xb673,	// (0x000170ba) listscroll_popup_fast_wide_pane

0xb67b,	// (0x000170c2) grid_indicator_nsta_pane

0xb68d,	// (0x000170d4) clock_nsta_pane_g1

0xb696,	// (0x000170dd) clock_nsta_pane_t1

0xb6b2,	// (0x000170f9) cell_indicator_nsta_pane_ParamLimits

0xb6b2,	// (0x000170f9) cell_indicator_nsta_pane

0xb6e7,	// (0x0001712e) cell_indicator_nsta_pane_g1

0xb6f5,	// (0x0001713c) cell_indicator_nsta_pane_g2

0x0001,

0xfa79,	// (0x0001b4c0) cell_indicator_nsta_pane_g

0xb707,	// (0x0001714e) clock_nsta_pane_cp

0xb710,	// (0x00017157) indicator_nsta_pane_cp

0xb71a,	// (0x00017161) nsta_clock_indic_pane_g1

0x6d31,	// (0x00012778) grid_indicator_pane

0x8174,	// (0x00013bbb) scroll_pane_cp29

0x4cc0,	// (0x00010707) indicator_nsta_pane_cp2_ParamLimits

0x4cc0,	// (0x00010707) indicator_nsta_pane_cp2

0x6c4e,	// (0x00012695) main_apps_wheel_pane

0x9551,	// (0x00014f98) form_midp_field_text_pane_ParamLimits

0x969c,	// (0x000150e3) scroll_bar_cp050_ParamLimits

0xb773,	// (0x000171ba) cell_indicator_pane_ParamLimits

0xb773,	// (0x000171ba) cell_indicator_pane

0xb78a,	// (0x000171d1) cell_indicator_pane_g1

0xb794,	// (0x000171db) grid_wheel_folder_pane_ParamLimits

0xb794,	// (0x000171db) grid_wheel_folder_pane

0xb7aa,	// (0x000171f1) list_wheel_apps_pane_ParamLimits

0xb7aa,	// (0x000171f1) list_wheel_apps_pane

0xb7bb,	// (0x00017202) main_apps_wheel_pane_g1_ParamLimits

0xb7bb,	// (0x00017202) main_apps_wheel_pane_g1

0xb7cf,	// (0x00017216) main_apps_wheel_pane_g2_ParamLimits

0xb7cf,	// (0x00017216) main_apps_wheel_pane_g2

0x0001,

0xfa95,	// (0x0001b4dc) main_apps_wheel_pane_g_ParamLimits

0xfa95,	// (0x0001b4dc) main_apps_wheel_pane_g

0xb7e7,	// (0x0001722e) main_apps_wheel_pane_t1_ParamLimits

0xb7e7,	// (0x0001722e) main_apps_wheel_pane_t1

0xb80a,	// (0x00017251) list_wheel_apps_pane_g1

0xb812,	// (0x00017259) list_wheel_apps_pane_g2

0xb81a,	// (0x00017261) list_wheel_apps_pane_g3

0xb822,	// (0x00017269) list_wheel_apps_pane_g4

0xb82c,	// (0x00017273) list_wheel_apps_pane_g5

0x0004,

0xfa9a,	// (0x0001b4e1) list_wheel_apps_pane_g

0x8789,	// (0x000141d0) navi_icon_text_pane

0x8c6d,	// (0x000146b4) aid_fill_nsta

0xb84f,	// (0x00017296) navi_icon_text_pane_g1

0xb85b,	// (0x000172a2) navi_icon_text_pane_t1

0x861c,	// (0x00014063) list_set_graphic_pane_t1_ParamLimits

0x861c,	// (0x00014063) list_set_graphic_pane_t1

0x9e07,	// (0x0001584e) popup_midp_note_alarm_window_t6_ParamLimits

0x9e07,	// (0x0001584e) popup_midp_note_alarm_window_t6

0x9e19,	// (0x00015860) popup_midp_note_alarm_window_t7_ParamLimits

0x9e19,	// (0x00015860) popup_midp_note_alarm_window_t7

0x9e2b,	// (0x00015872) popup_midp_note_alarm_window_t8_ParamLimits

0x9e2b,	// (0x00015872) popup_midp_note_alarm_window_t8

0x9e3d,	// (0x00015884) popup_midp_note_alarm_window_t9_ParamLimits

0x9e3d,	// (0x00015884) popup_midp_note_alarm_window_t9

0x9e4f,	// (0x00015896) popup_midp_note_alarm_window_t10_ParamLimits

0x9e4f,	// (0x00015896) popup_midp_note_alarm_window_t10

0x9e61,	// (0x000158a8) popup_midp_note_alarm_window_t11_ParamLimits

0x9e61,	// (0x000158a8) popup_midp_note_alarm_window_t11

0x9e73,	// (0x000158ba) scroll_pane_cp17_ParamLimits

0x9e73,	// (0x000158ba) scroll_pane_cp17

0x5771,	// (0x000111b8) volume_small_pane_cp_g1

0x5a66,	// (0x000114ad) volume_small_pane_cp_g2

0x5a6f,	// (0x000114b6) volume_small_pane_cp_g3

0x5a78,	// (0x000114bf) volume_small_pane_cp_g4

0x5a81,	// (0x000114c8) volume_small_pane_cp_g5

0x5a8a,	// (0x000114d1) volume_small_pane_cp_g6

0x5a93,	// (0x000114da) volume_small_pane_cp_g7

0x5a9c,	// (0x000114e3) volume_small_pane_cp_g8

0x5aa5,	// (0x000114ec) volume_small_pane_cp_g9

0x5aae,	// (0x000114f5) volume_small_pane_cp_g10

0x89da,	// (0x00014421) midp_ticker_pane_g1_ParamLimits

0x89e6,	// (0x0001442d) midp_ticker_pane_g2_ParamLimits

0xf72e,	// (0x0001b175) midp_ticker_pane_g_ParamLimits

0x89f2,	// (0x00014439) midp_ticker_pane_t1_ParamLimits

0x8c83,	// (0x000146ca) aid_fill_nsta_2

0x9688,	// (0x000150cf) list_form2_midp_pane

0xa811,	// (0x00016258) midp_editing_number_pane_ParamLimits

0xa820,	// (0x00016267) midp_ticker_pane_ParamLimits

0xb86d,	// (0x000172b4) form2_midp_field_pane

0xb891,	// (0x000172d8) scroll_pane_cp51

0xb8b1,	// (0x000172f8) form2_midp_button_pane_ParamLimits

0xb8b1,	// (0x000172f8) form2_midp_button_pane

0xb8c3,	// (0x0001730a) form2_midp_content_pane_ParamLimits

0xb8c3,	// (0x0001730a) form2_midp_content_pane

0xb8dd,	// (0x00017324) form2_midp_field_choice_group_pane

0xb8e5,	// (0x0001732c) form2_midp_field_pane_g1

0xb8ed,	// (0x00017334) form2_midp_field_pane_g2

0xb8f5,	// (0x0001733c) form2_midp_field_pane_g3

0xb8fd,	// (0x00017344) form2_midp_field_pane_g4

0x0003,

0xfabf,	// (0x0001b506) form2_midp_field_pane_g

0xb905,	// (0x0001734c) form2_midp_gauge_slider_pane

0xb90d,	// (0x00017354) form2_midp_gauge_wait_pane

0xb915,	// (0x0001735c) form2_midp_image_pane_ParamLimits

0xb915,	// (0x0001735c) form2_midp_image_pane

0xb930,	// (0x00017377) form2_midp_label_pane_ParamLimits

0xb930,	// (0x00017377) form2_midp_label_pane

0xb949,	// (0x00017390) form2_midp_label_pane_cp_ParamLimits

0xb949,	// (0x00017390) form2_midp_label_pane_cp

0xb96a,	// (0x000173b1) form2_midp_string_pane_ParamLimits

0xb96a,	// (0x000173b1) form2_midp_string_pane

0xb97c,	// (0x000173c3) form2_midp_text_pane_ParamLimits

0xb97c,	// (0x000173c3) form2_midp_text_pane

0xb999,	// (0x000173e0) form2_midp_time_pane

0xb9a9,	// (0x000173f0) input_focus_pane_cp51_ParamLimits

0xb9a9,	// (0x000173f0) input_focus_pane_cp51

0xb9c1,	// (0x00017408) form2_midp_label_pane_t1_ParamLimits

0xb9c1,	// (0x00017408) form2_midp_label_pane_t1

0xba02,	// (0x00017449) form2_mdip_text_pane_t1_ParamLimits

0xba02,	// (0x00017449) form2_mdip_text_pane_t1

0xba21,	// (0x00017468) form2_midp_time_pane_t1

0xba3c,	// (0x00017483) form2_midp_gauge_slider_pane_t1

0xba4e,	// (0x00017495) form2_midp_gauge_slider_pane_t2

0xba60,	// (0x000174a7) form2_midp_gauge_slider_pane_t3

0x0002,

0xfac8,	// (0x0001b50f) form2_midp_gauge_slider_pane_t

0xba72,	// (0x000174b9) form2_midp_slider_pane

0xba7e,	// (0x000174c5) form2_midp_gauge_wait_pane_t1

0xba8c,	// (0x000174d3) form2_midp_wait_pane_ParamLimits

0xba8c,	// (0x000174d3) form2_midp_wait_pane

0xbab7,	// (0x000174fe) list_single_2graphic_pane_cp4_ParamLimits

0xbab7,	// (0x000174fe) list_single_2graphic_pane_cp4

0x936d,	// (0x00014db4) list_single_midp_graphic_pane_cp_ParamLimits

0x936d,	// (0x00014db4) list_single_midp_graphic_pane_cp

0x6b6e,	// (0x000125b5) list_highlight_pane_cp20

0xbadb,	// (0x00017522) list_single_2graphic_pane_g1_cp4

0xbae3,	// (0x0001752a) list_single_2graphic_pane_g2_cp4

0xbaeb,	// (0x00017532) list_single_2graphic_pane_t1_cp4

0x6c4e,	// (0x00012695) list_highlight_pane_cp21

0xbafa,	// (0x00017541) list_single_midp_graphic_pane_g4_cp

0xbb09,	// (0x00017550) list_single_midp_graphic_pane_t1_cp

0xbb1e,	// (0x00017565) form2_mdip_string_pane_t1_ParamLimits

0xbb1e,	// (0x00017565) form2_mdip_string_pane_t1

0x6b6e,	// (0x000125b5) bg_wml_button_pane_cp2

0x3b7a,	// (0x0000f5c1) form2_midp_image_pane_g1

0x7716,	// (0x0001315d) list_double_large_graphic_pane_g5_ParamLimits

0x7716,	// (0x0001315d) list_double_large_graphic_pane_g5

0x8905,	// (0x0001434c) midp_form_pane_ParamLimits

0x6c4e,	// (0x00012695) main_apps_wheel_pane_ParamLimits

0x53b1,	// (0x00010df8) popup_preview_window_ParamLimits

0x53b1,	// (0x00010df8) popup_preview_window

0x556c,	// (0x00010fb3) popup_touch_info_window_ParamLimits

0x556c,	// (0x00010fb3) popup_touch_info_window

0x558a,	// (0x00010fd1) popup_touch_menu_window_ParamLimits

0x558a,	// (0x00010fd1) popup_touch_menu_window

0x3b70,	// (0x0000f5b7) bg_popup_sub_pane_cp6

0xbc17,	// (0x0001765e) list_touch_menu_pane

0xbc1f,	// (0x00017666) list_single_touch_menu_pane_ParamLimits

0xbc1f,	// (0x00017666) list_single_touch_menu_pane

0xbc35,	// (0x0001767c) list_single_touch_menu_pane_t1

0x6c4e,	// (0x00012695) bg_popup_sub_pane_cp7_ParamLimits

0x6c4e,	// (0x00012695) bg_popup_sub_pane_cp7

0xbc43,	// (0x0001768a) heading_sub_pane

0xbc4b,	// (0x00017692) list_touch_info_pane_ParamLimits

0xbc4b,	// (0x00017692) list_touch_info_pane

0xbc5a,	// (0x000176a1) list_single_touch_info_pane_ParamLimits

0xbc5a,	// (0x000176a1) list_single_touch_info_pane

0xbc6c,	// (0x000176b3) list_single_touch_info_pane_t1

0xbc7a,	// (0x000176c1) list_single_touch_info_pane_t2

0x0001,

0xfad6,	// (0x0001b51d) list_single_touch_info_pane_t

0x88fd,	// (0x00014344) bg_popup_heading_pane_cp

0xbc88,	// (0x000176cf) heading_sub_pane_t1

0x9293,	// (0x00014cda) bg_popup_preview_window_pane_cp_ParamLimits

0x9293,	// (0x00014cda) bg_popup_preview_window_pane_cp

0xbc43,	// (0x0001768a) heading_preview_pane

0xbc4b,	// (0x00017692) list_preview_pane_ParamLimits

0xbc4b,	// (0x00017692) list_preview_pane

0xbc96,	// (0x000176dd) popup_preview_window_g1

0xbc5a,	// (0x000176a1) list_single_preview_pane_ParamLimits

0xbc5a,	// (0x000176a1) list_single_preview_pane

0xbc9e,	// (0x000176e5) list_single_preview_pane_g1

0xbca6,	// (0x000176ed) list_single_preview_pane_t1

0xbc6c,	// (0x000176b3) list_single_preview_pane_t2

0x0001,

0xfadb,	// (0x0001b522) list_single_preview_pane_t

0xbcb4,	// (0x000176fb) bg_popup_heading_pane_cp2_ParamLimits

0xbcb4,	// (0x000176fb) bg_popup_heading_pane_cp2

0xbcca,	// (0x00017711) heading_preview_pane_g1

0xbcd2,	// (0x00017719) heading_preview_pane_t1_ParamLimits

0xbcd2,	// (0x00017719) heading_preview_pane_t1

0x6d54,	// (0x0001279b) soft_indicator_pane_t1_ParamLimits

0x7468,	// (0x00012eaf) scroll_pane_ParamLimits

0x806d,	// (0x00013ab4) scroll_sc2_left_pane

0x8076,	// (0x00013abd) scroll_sc2_right_pane

0x8095,	// (0x00013adc) scroll_bg_pane_g1_ParamLimits

0x80aa,	// (0x00013af1) scroll_bg_pane_g2_ParamLimits

0x80c2,	// (0x00013b09) scroll_bg_pane_g3_ParamLimits

0xf6b9,	// (0x0001b100) scroll_bg_pane_g_ParamLimits

0x8095,	// (0x00013adc) scroll_handle_pane_g1_ParamLimits

0x80e4,	// (0x00013b2b) scroll_handle_pane_g2_ParamLimits

0x80c2,	// (0x00013b09) scroll_handle_pane_g3_ParamLimits

0xf6c0,	// (0x0001b107) scroll_handle_pane_g_ParamLimits

0x5030,	// (0x00010a77) popup_choice_list_window_ParamLimits

0x5030,	// (0x00010a77) popup_choice_list_window

0x90a5,	// (0x00014aec) choice_list_pane

0x913d,	// (0x00014b84) cell_toolbar_pane_t1

0x9165,	// (0x00014bac) toolbar_button_pane_ParamLimits

0xa32d,	// (0x00015d74) ai_gene_pane_1_t2_ParamLimits

0xa32d,	// (0x00015d74) ai_gene_pane_1_t2

0x0001,

0xf8e3,	// (0x0001b32a) ai_gene_pane_1_t_ParamLimits

0xf8e3,	// (0x0001b32a) ai_gene_pane_1_t

0xbcef,	// (0x00017736) scroll_sc2_left_pane_g1

0xbcef,	// (0x00017736) scroll_sc2_right_pane_g1

0x8c29,	// (0x00014670) bg_popup_sub_pane_cp10

0xbcf9,	// (0x00017740) list_choice_list_pane

0xbd12,	// (0x00017759) list_single_choice_list_pane_ParamLimits

0xbd12,	// (0x00017759) list_single_choice_list_pane

0xbd25,	// (0x0001776c) list_single_choice_list_pane_g1

0x7d73,	// (0x000137ba) list_single_choice_list_pane_t1_ParamLimits

0x7d73,	// (0x000137ba) list_single_choice_list_pane_t1

0xbd2d,	// (0x00017774) choice_list_pane_g1

0xbd35,	// (0x0001777c) choice_list_pane_t1

0x3b70,	// (0x0000f5b7) input_focus_pane_cp11

0x7f4a,	// (0x00013991) title_pane_stacon_g2_ParamLimits

0x7f4a,	// (0x00013991) title_pane_stacon_g2

0x0002,

0xf69f,	// (0x0001b0e6) title_pane_stacon_g_ParamLimits

0xf69f,	// (0x0001b0e6) title_pane_stacon_g

0x88fd,	// (0x00014344) cursor_press_pane

0x50dc,	// (0x00010b23) popup_fep_hwr_window_ParamLimits

0x50dc,	// (0x00010b23) popup_fep_hwr_window

0x5156,	// (0x00010b9d) popup_fep_vkb_window_ParamLimits

0x5156,	// (0x00010b9d) popup_fep_vkb_window

0xbd43,	// (0x0001778a) cursor_press_pane_g1

0x0002,

0xfb04,	// (0x0001b54b) fep_vkb_side_pane_g_ParamLimits

0x5af0,	// (0x00011537) fep_hwr_candidate_pane_ParamLimits

0x5af0,	// (0x00011537) fep_hwr_candidate_pane

0x5b1a,	// (0x00011561) fep_hwr_side_pane_ParamLimits

0x5b1a,	// (0x00011561) fep_hwr_side_pane

0x5b3a,	// (0x00011581) fep_hwr_top_pane_ParamLimits

0x5b3a,	// (0x00011581) fep_hwr_top_pane

0x5b52,	// (0x00011599) fep_hwr_write_pane_ParamLimits

0x5b52,	// (0x00011599) fep_hwr_write_pane

0xfb04,	// (0x0001b54b) fep_vkb_side_pane_g

0xbd4b,	// (0x00017792) fep_hwr_top_pane_g1

0xbd5d,	// (0x000177a4) fep_hwr_top_pane_g2

0x5b8c,	// (0x000115d3) fep_hwr_top_pane_g3

0x0002,

0xfae0,	// (0x0001b527) fep_hwr_top_pane_g

0x5ba1,	// (0x000115e8) fep_hwr_top_text_pane

0x8264,	// (0x00013cab) fep_hwr_top_text_pane_g1

0xbd93,	// (0x000177da) fep_hwr_top_text_pane_t1

0x5c97,	// (0x000116de) fep_hwr_candidate_pane_g1

0xbfe6,	// (0x00017a2d) fep_vkb_keypad_pane_g3_ParamLimits

0xbfe6,	// (0x00017a2d) fep_vkb_keypad_pane_g3

0xc00e,	// (0x00017a55) fep_vkb_keypad_pane_g4_ParamLimits

0xc00e,	// (0x00017a55) fep_vkb_keypad_pane_g4

0xc07d,	// (0x00017ac4) fep_vkb_bottom_pane_g2_ParamLimits

0xc07d,	// (0x00017ac4) fep_vkb_bottom_pane_g2

0x0001,

0xfb0b,	// (0x0001b552) fep_vkb_bottom_pane_g_ParamLimits

0xfb0b,	// (0x0001b552) fep_vkb_bottom_pane_g

0xbcef,	// (0x00017736) cell_vkb_side_pane_g2

0x0001,

0xfb15,	// (0x0001b55c) cell_vkb_side_pane_g

0xc108,	// (0x00017b4f) cell_vkb_side_pane_t1

0xc116,	// (0x00017b5d) cell_vkb_side_pane_t1_copy1

0xbcef,	// (0x00017736) bg_fep_vkb_candidate_pane_g2

0xc242,	// (0x00017c89) cell_vkb_candidate_pane_ParamLimits

0xbda1,	// (0x000177e8) aid_size_cell_vkb_ParamLimits

0xbda1,	// (0x000177e8) aid_size_cell_vkb

0xc242,	// (0x00017c89) cell_vkb_candidate_pane

0x5cbe,	// (0x00011705) bg_popup_fep_shadow_pane_g1

0xbe2f,	// (0x00017876) fep_vkb_bottom_pane_ParamLimits

0xbe2f,	// (0x00017876) fep_vkb_bottom_pane

0xbe65,	// (0x000178ac) fep_vkb_candidate_pane_ParamLimits

0xbe65,	// (0x000178ac) fep_vkb_candidate_pane

0xbe81,	// (0x000178c8) fep_vkb_keypad_pane_ParamLimits

0xbe81,	// (0x000178c8) fep_vkb_keypad_pane

0xbec7,	// (0x0001790e) fep_vkb_side_pane_ParamLimits

0xbec7,	// (0x0001790e) fep_vkb_side_pane

0xbf03,	// (0x0001794a) fep_vkb_top_pane_ParamLimits

0xbf03,	// (0x0001794a) fep_vkb_top_pane

0xbf3f,	// (0x00017986) fep_vkb_top_pane_g1_ParamLimits

0xbf3f,	// (0x00017986) fep_vkb_top_pane_g1

0xbf4e,	// (0x00017995) fep_vkb_top_pane_g2_ParamLimits

0xbf4e,	// (0x00017995) fep_vkb_top_pane_g2

0xbf5d,	// (0x000179a4) fep_vkb_top_pane_g3_ParamLimits

0xbf5d,	// (0x000179a4) fep_vkb_top_pane_g3

0x0003,

0xfafb,	// (0x0001b542) fep_vkb_top_pane_g_ParamLimits

0xfafb,	// (0x0001b542) fep_vkb_top_pane_g

0xbf7b,	// (0x000179c2) fep_vkb_top_text_pane_ParamLimits

0xbf7b,	// (0x000179c2) fep_vkb_top_text_pane

0xbf8c,	// (0x000179d3) fep_vkb_side_pane_g1_ParamLimits

0xbf8c,	// (0x000179d3) fep_vkb_side_pane_g1

0xbfd5,	// (0x00017a1c) grid_vkb_side_pane_ParamLimits

0xbfd5,	// (0x00017a1c) grid_vkb_side_pane

0x5cc6,	// (0x0001170d) bg_popup_fep_shadow_pane_g2

0x5ccf,	// (0x00011716) bg_popup_fep_shadow_pane_g3

0x5cd7,	// (0x0001171e) bg_popup_fep_shadow_pane_g4

0x5ce0,	// (0x00011727) bg_popup_fep_shadow_pane_g5

0x5cea,	// (0x00011731) bg_popup_fep_shadow_pane_g6

0x5cf2,	// (0x00011739) bg_popup_fep_shadow_pane_g7

0x7b93,	// (0x000135da) bg_popup_fep_shadow_pane_g8

0xc02c,	// (0x00017a73) grid_vkb_keypad_number_pane_ParamLimits

0xc02c,	// (0x00017a73) grid_vkb_keypad_number_pane

0xc03c,	// (0x00017a83) grid_vkb_keypad_pane_ParamLimits

0xc03c,	// (0x00017a83) grid_vkb_keypad_pane

0xc062,	// (0x00017aa9) fep_vkb_bottom_pane_g1_ParamLimits

0xc062,	// (0x00017aa9) fep_vkb_bottom_pane_g1

0xc08b,	// (0x00017ad2) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc08b,	// (0x00017ad2) grid_vkb_keypad_bottom_left_pane

0xc0a0,	// (0x00017ae7) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc0a0,	// (0x00017ae7) grid_vkb_keypad_bottom_right_pane

0xc0b5,	// (0x00017afc) fep_vkb_top_text_pane_g1

0xc0d0,	// (0x00017b17) fep_vkb_top_text_pane_t1

0xc0e5,	// (0x00017b2c) cell_vkb_side_pane_ParamLimits

0xc0e5,	// (0x00017b2c) cell_vkb_side_pane

0xbcef,	// (0x00017736) cell_vkb_side_pane_g1

0xc124,	// (0x00017b6b) cell_vkb_keypad_pane_ParamLimits

0xc124,	// (0x00017b6b) cell_vkb_keypad_pane

0xc199,	// (0x00017be0) cell_vkb_keypad_pane_g1

0x0008,

0xfb28,	// (0x0001b56f) bg_popup_fep_shadow_pane_g

0x5d04,	// (0x0001174b) cell_hwr_side_pane_g1

0x5d04,	// (0x0001174b) cell_hwr_side_pane_g2

0xc1a3,	// (0x00017bea) cell_vkb_keypad_pane_t1

0xc1b1,	// (0x00017bf8) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc1b1,	// (0x00017bf8) cell_vkb_keypad_bottom_left_pane

0xc1ce,	// (0x00017c15) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc1ce,	// (0x00017c15) cell_vkb_keypad_bottom_right_pane

0xbcef,	// (0x00017736) cell_vkb_keypad_bottom_left_pane_g1

0xbcef,	// (0x00017736) cell_vkb_keypad_bottom_right_pane_g1

0xc207,	// (0x00017c4e) cell_vkb_keypad_number_pane_ParamLimits

0xc207,	// (0x00017c4e) cell_vkb_keypad_number_pane

0xc226,	// (0x00017c6d) cell_vkb_keypad_number_pane_g1

0xc230,	// (0x00017c77) cell_vkb_keypad_number_pane_g2

0xc239,	// (0x00017c80) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb1a,	// (0x0001b561) cell_vkb_keypad_number_pane_g

0xc1a3,	// (0x00017bea) cell_vkb_keypad_number_pane_t1

0xc25d,	// (0x00017ca4) fep_vkb_candidate_pane_g1

0x0001,

0xfb3b,	// (0x0001b582) cell_hwr_side_pane_g

0xc276,	// (0x00017cbd) cell_hwr_side_pane_t1

0x5d0e,	// (0x00011755) cell_hwr_side_pane_t1_copy1

0x5d1c,	// (0x00011763) cell_hwr_candidate_pane_g1

0x5d4b,	// (0x00011792) cell_hwr_candidate_pane_t1

0xbcef,	// (0x00017736) cell_vkb_candidate_pane_g2

0xc2ba,	// (0x00017d01) cell_vkb_candidate_pane_t1

0x5ab7,	// (0x000114fe) bg_popup_fep_shadow_pane_ParamLimits

0x5ab7,	// (0x000114fe) bg_popup_fep_shadow_pane

0x5b6c,	// (0x000115b3) bg_fep_hwr_top_pane_g4

0xbd6f,	// (0x000177b6) bg_hwr_side_pane_g1_ParamLimits

0xbd6f,	// (0x000177b6) bg_hwr_side_pane_g1

0x5bdd,	// (0x00011624) cell_hwr_side_pane_ParamLimits

0x5bdd,	// (0x00011624) cell_hwr_side_pane

0x5c18,	// (0x0001165f) fep_hwr_write_pane_g1_ParamLimits

0x5c18,	// (0x0001165f) fep_hwr_write_pane_g1

0x5c25,	// (0x0001166c) fep_hwr_write_pane_g2_ParamLimits

0x5c25,	// (0x0001166c) fep_hwr_write_pane_g2

0x5c32,	// (0x00011679) fep_hwr_write_pane_g3_ParamLimits

0x5c32,	// (0x00011679) fep_hwr_write_pane_g3

0x5c40,	// (0x00011687) fep_hwr_write_pane_g4_ParamLimits

0x5c40,	// (0x00011687) fep_hwr_write_pane_g4

0x0005,

0xfae7,	// (0x0001b52e) fep_hwr_write_pane_g_ParamLimits

0xfae7,	// (0x0001b52e) fep_hwr_write_pane_g

0x5b6c,	// (0x000115b3) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x5b6c,	// (0x000115b3) bg_fep_hwr_candidate_pane_g2

0x5c55,	// (0x0001169c) cell_hwr_candidate_pane_ParamLimits

0x5c55,	// (0x0001169c) cell_hwr_candidate_pane

0x5c97,	// (0x000116de) fep_hwr_candidate_pane_g1_ParamLimits

0xbdcf,	// (0x00017816) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xbdcf,	// (0x00017816) bg_popup_fep_shadow_pane_cp2

0xbf6d,	// (0x000179b4) fep_vkb_top_pane_g4_ParamLimits

0xbf6d,	// (0x000179b4) fep_vkb_top_pane_g4

0xbfb3,	// (0x000179fa) fep_vkb_side_pane_g2_ParamLimits

0xbfb3,	// (0x000179fa) fep_vkb_side_pane_g2

0x786e,	// (0x000132b5) list_setting_pane_t4_ParamLimits

0x786e,	// (0x000132b5) list_setting_pane_t4

0x78e8,	// (0x0001332f) list_setting_number_pane_t5_ParamLimits

0x78e8,	// (0x0001332f) list_setting_number_pane_t5

0x82ab,	// (0x00013cf2) list_double_heading_pane_cp2_ParamLimits

0x82ab,	// (0x00013cf2) list_double_heading_pane_cp2

0x7a72,	// (0x000134b9) list_double_heading_pane_g1_cp2_ParamLimits

0x7a72,	// (0x000134b9) list_double_heading_pane_g1_cp2

0x7a7e,	// (0x000134c5) list_double_heading_pane_g2_cp2_ParamLimits

0x7a7e,	// (0x000134c5) list_double_heading_pane_g2_cp2

0xc2c8,	// (0x00017d0f) list_double_heading_pane_t1_cp2_ParamLimits

0xc2c8,	// (0x00017d0f) list_double_heading_pane_t1_cp2

0xc2de,	// (0x00017d25) list_double_heading_pane_t2_cp2_ParamLimits

0xc2de,	// (0x00017d25) list_double_heading_pane_t2_cp2

0x3b68,	// (0x0000f5af) aid_value_unit2

0x4850,	// (0x00010297) popup_preview_fixed_window

0x6ef1,	// (0x00012938) bg_popup_preview_window_pane_cp02

0xc2f0,	// (0x00017d37) list_preview_fixed_pane

0xc336,	// (0x00017d7d) list_empty_pane_fp_ParamLimits

0xc336,	// (0x00017d7d) list_empty_pane_fp

0xc336,	// (0x00017d7d) list_single_cale_day_pane_fp_ParamLimits

0xc336,	// (0x00017d7d) list_single_cale_day_pane_fp

0xc336,	// (0x00017d7d) list_single_graphic_heading_pane_fp_ParamLimits

0xc336,	// (0x00017d7d) list_single_graphic_heading_pane_fp

0xc336,	// (0x00017d7d) list_single_graphic_pane_fp_ParamLimits

0xc336,	// (0x00017d7d) list_single_graphic_pane_fp

0xc336,	// (0x00017d7d) list_single_heading_pane_fp_ParamLimits

0xc336,	// (0x00017d7d) list_single_heading_pane_fp

0xc336,	// (0x00017d7d) list_single_pane_fp_ParamLimits

0xc336,	// (0x00017d7d) list_single_pane_fp

0xc34b,	// (0x00017d92) list_single_pane_fp_g1_ParamLimits

0xc34b,	// (0x00017d92) list_single_pane_fp_g1

0x7a72,	// (0x000134b9) list_single_pane_fp_g2_ParamLimits

0x7a72,	// (0x000134b9) list_single_pane_fp_g2

0x7a7e,	// (0x000134c5) list_single_pane_fp_g3_ParamLimits

0x7a7e,	// (0x000134c5) list_single_pane_fp_g3

0xc357,	// (0x00017d9e) list_single_pane_fp_g4_ParamLimits

0xc357,	// (0x00017d9e) list_single_pane_fp_g4

0x0003,

0xfb4e,	// (0x0001b595) list_single_pane_fp_g_ParamLimits

0xfb4e,	// (0x0001b595) list_single_pane_fp_g

0xc363,	// (0x00017daa) list_single_pane_fp_t1_ParamLimits

0xc363,	// (0x00017daa) list_single_pane_fp_t1

0xc37a,	// (0x00017dc1) list_single_graphic_pane_fp_g1_ParamLimits

0xc37a,	// (0x00017dc1) list_single_graphic_pane_fp_g1

0xc34b,	// (0x00017d92) list_single_graphic_pane_fp_g2_ParamLimits

0xc34b,	// (0x00017d92) list_single_graphic_pane_fp_g2

0x7a72,	// (0x000134b9) list_single_graphic_pane_fp_g3_ParamLimits

0x7a72,	// (0x000134b9) list_single_graphic_pane_fp_g3

0x7a7e,	// (0x000134c5) list_single_graphic_pane_fp_g4_ParamLimits

0x7a7e,	// (0x000134c5) list_single_graphic_pane_fp_g4

0xc357,	// (0x00017d9e) list_single_graphic_pane_fp_g5_ParamLimits

0xc357,	// (0x00017d9e) list_single_graphic_pane_fp_g5

0x0004,

0xfb57,	// (0x0001b59e) list_single_graphic_pane_fp_g_ParamLimits

0xfb57,	// (0x0001b59e) list_single_graphic_pane_fp_g

0xc386,	// (0x00017dcd) list_single_graphic_pane_fp_t1_ParamLimits

0xc386,	// (0x00017dcd) list_single_graphic_pane_fp_t1

0xc37a,	// (0x00017dc1) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xc37a,	// (0x00017dc1) list_single_graphic_heading_pane_fp_g1

0xc34b,	// (0x00017d92) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc34b,	// (0x00017d92) list_single_graphic_heading_pane_fp_g2

0x7a72,	// (0x000134b9) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x7a72,	// (0x000134b9) list_single_graphic_heading_pane_fp_g3

0x7a7e,	// (0x000134c5) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x7a7e,	// (0x000134c5) list_single_graphic_heading_pane_fp_g4

0xc357,	// (0x00017d9e) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc357,	// (0x00017d9e) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb57,	// (0x0001b59e) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb57,	// (0x0001b59e) list_single_graphic_heading_pane_fp_g

0xc39c,	// (0x00017de3) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xc39c,	// (0x00017de3) list_single_graphic_heading_pane_fp_t1

0xc3b2,	// (0x00017df9) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xc3b2,	// (0x00017df9) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb62,	// (0x0001b5a9) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb62,	// (0x0001b5a9) list_single_graphic_heading_pane_fp_t

0xc3c4,	// (0x00017e0b) list_single_cale_day_pane_fp_g1_ParamLimits

0xc3c4,	// (0x00017e0b) list_single_cale_day_pane_fp_g1

0xc3fc,	// (0x00017e43) list_single_cale_day_pane_fp_g2_ParamLimits

0xc3fc,	// (0x00017e43) list_single_cale_day_pane_fp_g2

0xc408,	// (0x00017e4f) list_single_cale_day_pane_fp_g3_ParamLimits

0xc408,	// (0x00017e4f) list_single_cale_day_pane_fp_g3

0xc430,	// (0x00017e77) list_single_cale_day_pane_fp_g4_ParamLimits

0xc430,	// (0x00017e77) list_single_cale_day_pane_fp_g4

0xc454,	// (0x00017e9b) list_single_cale_day_pane_fp_g5_ParamLimits

0xc454,	// (0x00017e9b) list_single_cale_day_pane_fp_g5

0x0004,

0xfb67,	// (0x0001b5ae) list_single_cale_day_pane_fp_g_ParamLimits

0xfb67,	// (0x0001b5ae) list_single_cale_day_pane_fp_g

0xc478,	// (0x00017ebf) list_single_cale_day_pane_fp_t1_ParamLimits

0xc478,	// (0x00017ebf) list_single_cale_day_pane_fp_t1

0xc49e,	// (0x00017ee5) list_single_cale_day_pane_fp_t2_ParamLimits

0xc49e,	// (0x00017ee5) list_single_cale_day_pane_fp_t2

0xc4b7,	// (0x00017efe) list_single_cale_day_pane_fp_t3_ParamLimits

0xc4b7,	// (0x00017efe) list_single_cale_day_pane_fp_t3

0x0002,

0xfb72,	// (0x0001b5b9) list_single_cale_day_pane_fp_t_ParamLimits

0xfb72,	// (0x0001b5b9) list_single_cale_day_pane_fp_t

0xc34b,	// (0x00017d92) list_empty_pane_fp_g1_ParamLimits

0xc34b,	// (0x00017d92) list_empty_pane_fp_g1

0xc4d0,	// (0x00017f17) list_empty_pane_fp_t1

0xc4de,	// (0x00017f25) list_empty_pane_fp_t2

0x0001,

0xfb79,	// (0x0001b5c0) list_empty_pane_fp_t

0xc34b,	// (0x00017d92) list_single_heading_pane_fp_g1_ParamLimits

0xc34b,	// (0x00017d92) list_single_heading_pane_fp_g1

0x7a72,	// (0x000134b9) list_single_heading_pane_fp_g2_ParamLimits

0x7a72,	// (0x000134b9) list_single_heading_pane_fp_g2

0x7a7e,	// (0x000134c5) list_single_heading_pane_fp_g3_ParamLimits

0x7a7e,	// (0x000134c5) list_single_heading_pane_fp_g3

0x0002,

0xfb7e,	// (0x0001b5c5) list_single_heading_pane_fp_g_ParamLimits

0xfb7e,	// (0x0001b5c5) list_single_heading_pane_fp_g

0xc4ec,	// (0x00017f33) list_single_heading_pane_fp_t1_ParamLimits

0xc4ec,	// (0x00017f33) list_single_heading_pane_fp_t1

0xc4fe,	// (0x00017f45) list_single_heading_pane_fp_t2_ParamLimits

0xc4fe,	// (0x00017f45) list_single_heading_pane_fp_t2

0x0001,

0xfb85,	// (0x0001b5cc) list_single_heading_pane_fp_t_ParamLimits

0xfb85,	// (0x0001b5cc) list_single_heading_pane_fp_t

0x7de1,	// (0x00013828) aid_size_cell_fast

0x6e61,	// (0x000128a8) soft_indicator_pane_cp1_t1

0x7e1e,	// (0x00013865) cell_app_pane_cp2_ParamLimits

0x7e1e,	// (0x00013865) cell_app_pane_cp2

0x5ad9,	// (0x00011520) fep_hwr_candidate_drop_down_list_pane

0x5cb1,	// (0x000116f8) fep_hwr_candidate_pane_g3_ParamLimits

0x5cb1,	// (0x000116f8) fep_hwr_candidate_pane_g3

0x33fc,	// (0x0000ee43) fep_hwr_candidate_pane_g4_ParamLimits

0x33fc,	// (0x0000ee43) fep_hwr_candidate_pane_g4

0x0002,

0xfaf4,	// (0x0001b53b) fep_hwr_candidate_pane_g_ParamLimits

0xfaf4,	// (0x0001b53b) fep_hwr_candidate_pane_g

0xbe54,	// (0x0001789b) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xbe54,	// (0x0001789b) fep_vkb_candidate_drop_down_list_pane

0xc265,	// (0x00017cac) fep_vkb_candidate_pane_g3

0xc26d,	// (0x00017cb4) fep_vkb_candidate_pane_g4

0x0002,

0xfb21,	// (0x0001b568) fep_vkb_candidate_pane_g

0x5d1c,	// (0x00011763) cell_hwr_candidate_pane_g1_ParamLimits

0x5d2a,	// (0x00011771) cell_hwr_candidate_pane_g3_ParamLimits

0x5d2a,	// (0x00011771) cell_hwr_candidate_pane_g3

0xd907,	// (0x0001934e) cell_hwr_candidate_pane_g4_ParamLimits

0xd907,	// (0x0001934e) cell_hwr_candidate_pane_g4

0x0002,

0xfb40,	// (0x0001b587) cell_hwr_candidate_pane_g_ParamLimits

0xfb40,	// (0x0001b587) cell_hwr_candidate_pane_g

0xc284,	// (0x00017ccb) cell_vkb_candidate_pane_g3_ParamLimits

0xc284,	// (0x00017ccb) cell_vkb_candidate_pane_g3

0xc29f,	// (0x00017ce6) cell_vkb_candidate_pane_g4_ParamLimits

0xc29f,	// (0x00017ce6) cell_vkb_candidate_pane_g4

0xc514,	// (0x00017f5b) cell_app_pane_cp2_g1_ParamLimits

0xc514,	// (0x00017f5b) cell_app_pane_cp2_g1

0xc532,	// (0x00017f79) cell_app_pane_cp2_g2_ParamLimits

0xc532,	// (0x00017f79) cell_app_pane_cp2_g2

0x0001,

0xfb8a,	// (0x0001b5d1) cell_app_pane_cp2_g_ParamLimits

0xfb8a,	// (0x0001b5d1) cell_app_pane_cp2_g

0xc53e,	// (0x00017f85) cell_app_pane_cp2_t1_ParamLimits

0xc53e,	// (0x00017f85) cell_app_pane_cp2_t1

0x7a4c,	// (0x00013493) grid_highlight_pane_cp1_ParamLimits

0x7a4c,	// (0x00013493) grid_highlight_pane_cp1

0x5d69,	// (0x000117b0) cell_hwr_candidate_pane_cp1_ParamLimits

0x5d69,	// (0x000117b0) cell_hwr_candidate_pane_cp1

0x5d1c,	// (0x00011763) fep_hwr_candidate_drop_down_list_pane_g1

0x5d88,	// (0x000117cf) fep_hwr_candidate_drop_down_list_pane_g2

0x5d95,	// (0x000117dc) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb8f,	// (0x0001b5d6) fep_hwr_candidate_drop_down_list_pane_g

0x5da2,	// (0x000117e9) fep_hwr_candidate_drop_down_list_scroll_pane

0x5dab,	// (0x000117f2) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x5dab,	// (0x000117f2) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x5db8,	// (0x000117ff) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x5db8,	// (0x000117ff) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x5dc5,	// (0x0001180c) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x5dc5,	// (0x0001180c) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x5dd2,	// (0x00011819) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x5dd2,	// (0x00011819) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x5ded,	// (0x00011834) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x5ded,	// (0x00011834) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x5e08,	// (0x0001184f) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x5e08,	// (0x0001184f) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x5e23,	// (0x0001186a) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x5e23,	// (0x0001186a) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x5e3e,	// (0x00011885) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x5e3e,	// (0x00011885) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb96,	// (0x0001b5dd) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb96,	// (0x0001b5dd) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc550,	// (0x00017f97) cell_vkb_candidate_pane_cp1_ParamLimits

0xc550,	// (0x00017f97) cell_vkb_candidate_pane_cp1

0xbf6d,	// (0x000179b4) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xbf6d,	// (0x000179b4) fep_vkb_candidate_drop_down_list_pane_g1

0xc570,	// (0x00017fb7) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc570,	// (0x00017fb7) fep_vkb_candidate_drop_down_list_pane_g2

0xc57d,	// (0x00017fc4) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc57d,	// (0x00017fc4) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfba7,	// (0x0001b5ee) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfba7,	// (0x0001b5ee) fep_vkb_candidate_drop_down_list_pane_g

0xc58a,	// (0x00017fd1) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc58a,	// (0x00017fd1) fep_vkb_candidate_drop_down_list_scroll_pane

0xc597,	// (0x00017fde) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc597,	// (0x00017fde) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc5a4,	// (0x00017feb) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc5a4,	// (0x00017feb) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc5b0,	// (0x00017ff7) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc5b0,	// (0x00017ff7) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc5bc,	// (0x00018003) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc5bc,	// (0x00018003) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc5dd,	// (0x00018024) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc5dd,	// (0x00018024) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc5fe,	// (0x00018045) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc5fe,	// (0x00018045) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc61f,	// (0x00018066) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc61f,	// (0x00018066) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc640,	// (0x00018087) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc640,	// (0x00018087) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbae,	// (0x0001b5f5) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbae,	// (0x0001b5f5) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x6b78,	// (0x000125bf) title_pane_g1_ParamLimits

0x6b85,	// (0x000125cc) title_pane_g2_ParamLimits

0xf529,	// (0x0001af70) title_pane_g_ParamLimits

0x8254,	// (0x00013c9b) aid_call2_pane

0x825c,	// (0x00013ca3) aid_call_pane

0x8264,	// (0x00013cab) popup_clock_analogue_window_g1

0x8264,	// (0x00013cab) popup_clock_analogue_window_g2

0x4bc1,	// (0x00010608) popup_clock_analogue_window_g3

0x4bca,	// (0x00010611) popup_clock_analogue_window_g4

0x3b7a,	// (0x0000f5c1) popup_clock_analogue_window_g5

0x0004,

0xf6ce,	// (0x0001b115) popup_clock_analogue_window_g

0x4bd2,	// (0x00010619) popup_clock_analogue_window_t1

0x4be0,	// (0x00010627) clock_digital_number_pane_ParamLimits

0x4be0,	// (0x00010627) clock_digital_number_pane

0x4bec,	// (0x00010633) clock_digital_number_pane_cp02_ParamLimits

0x4bec,	// (0x00010633) clock_digital_number_pane_cp02

0x4bf8,	// (0x0001063f) clock_digital_number_pane_cp03_ParamLimits

0x4bf8,	// (0x0001063f) clock_digital_number_pane_cp03

0x4c04,	// (0x0001064b) clock_digital_number_pane_cp04_ParamLimits

0x4c04,	// (0x0001064b) clock_digital_number_pane_cp04

0x4c10,	// (0x00010657) clock_digital_separator_pane_ParamLimits

0x4c10,	// (0x00010657) clock_digital_separator_pane

0x4c1c,	// (0x00010663) popup_clock_digital_window_t1_ParamLimits

0x4c1c,	// (0x00010663) popup_clock_digital_window_t1

0x3b7a,	// (0x0000f5c1) clock_digital_number_pane_g1

0x3b7a,	// (0x0000f5c1) clock_digital_number_pane_g2

0x0001,

0xf6d9,	// (0x0001b120) clock_digital_number_pane_g

0x3b7a,	// (0x0000f5c1) clock_digital_separator_pane_g1

0x3b7a,	// (0x0000f5c1) clock_digital_separator_pane_g2

0x0001,

0xf6d9,	// (0x0001b120) clock_digital_separator_pane_g

0x8c6d,	// (0x000146b4) aid_fill_nsta_ParamLimits

0x8db9,	// (0x00014800) indicator_nsta_pane_ParamLimits

0x8f32,	// (0x00014979) popup_clock_analogue_window

0x8f32,	// (0x00014979) popup_clock_digital_window

0xb67b,	// (0x000170c2) grid_indicator_nsta_pane_ParamLimits

0xb6a4,	// (0x000170eb) clock_nsta_pane_t2

0x0001,

0xfa74,	// (0x0001b4bb) clock_nsta_pane_t

0x4b85,	// (0x000105cc) aid_size_max_handle

0x4b8f,	// (0x000105d6) aid_size_min_handle

0x88fd,	// (0x00014344) editor_scroll_pane

0xc65b,	// (0x000180a2) ex_editor_pane

0x7d4f,	// (0x00013796) scroll_pane_cp13

0x7494,	// (0x00012edb) scroll_pane_cp14

0x8293,	// (0x00013cda) scroll_pane_cp36

0x82bf,	// (0x00013d06) list_single_graphic_hl_pane_cp2_ParamLimits

0x82bf,	// (0x00013d06) list_single_graphic_hl_pane_cp2

0xa8f5,	// (0x0001633c) list_single_graphic_hl_pane_ParamLimits

0xa8f5,	// (0x0001633c) list_single_graphic_hl_pane

0xc663,	// (0x000180aa) aid_size_min_hl_cp1

0xc66c,	// (0x000180b3) list_highlight_pane_cp34_ParamLimits

0xc66c,	// (0x000180b3) list_highlight_pane_cp34

0xc67d,	// (0x000180c4) list_single_graphic_hl_pane_g1_ParamLimits

0xc67d,	// (0x000180c4) list_single_graphic_hl_pane_g1

0xc68a,	// (0x000180d1) list_single_graphic_hl_pane_g2_ParamLimits

0xc68a,	// (0x000180d1) list_single_graphic_hl_pane_g2

0xc68a,	// (0x000180d1) list_single_graphic_hl_pane_g3_ParamLimits

0xc68a,	// (0x000180d1) list_single_graphic_hl_pane_g3

0x8842,	// (0x00014289) list_single_graphic_hl_pane_g4_ParamLimits

0x8842,	// (0x00014289) list_single_graphic_hl_pane_g4

0xc696,	// (0x000180dd) list_single_graphic_hl_pane_g5_ParamLimits

0xc696,	// (0x000180dd) list_single_graphic_hl_pane_g5

0x0004,

0xfbbf,	// (0x0001b606) list_single_graphic_hl_pane_g_ParamLimits

0xfbbf,	// (0x0001b606) list_single_graphic_hl_pane_g

0x9f27,	// (0x0001596e) list_single_graphic_hl_pane_t1_ParamLimits

0x9f27,	// (0x0001596e) list_single_graphic_hl_pane_t1

0xc6aa,	// (0x000180f1) aid_size_min_hl_cp2

0xc6b3,	// (0x000180fa) list_highlight_pane_cp34_cp2_ParamLimits

0xc6b3,	// (0x000180fa) list_highlight_pane_cp34_cp2

0xc67d,	// (0x000180c4) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc67d,	// (0x000180c4) list_single_graphic_hl_pane_g1_cp2

0xc6c0,	// (0x00018107) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc6c0,	// (0x00018107) list_single_graphic_hl_pane_g2_cp2

0xc6cc,	// (0x00018113) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc6cc,	// (0x00018113) list_single_graphic_hl_pane_g3_cp2

0xc6da,	// (0x00018121) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xc6da,	// (0x00018121) list_single_graphic_hl_pane_g4_cp2

0xc6e6,	// (0x0001812d) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc6e6,	// (0x0001812d) list_single_graphic_hl_pane_g5_cp2

0x4ed0,	// (0x00010917) control_pane_g4_ParamLimits

0x4ed0,	// (0x00010917) control_pane_g4

0x8c29,	// (0x00014670) bg_popup_sub_pane_cp10_ParamLimits

0xbcf9,	// (0x00017740) list_choice_list_pane_ParamLimits

0xbd08,	// (0x0001774f) scroll_pane_cp23

0x6ef1,	// (0x00012938) bg_popup_preview_window_pane_cp02_ParamLimits

0xc2f0,	// (0x00017d37) list_preview_fixed_pane_ParamLimits

0xc306,	// (0x00017d4d) list_preview_fixed_pane_cp_ParamLimits

0xc306,	// (0x00017d4d) list_preview_fixed_pane_cp

0xc312,	// (0x00017d59) popup_preview_fixed_window_g1_ParamLimits

0xc312,	// (0x00017d59) popup_preview_fixed_window_g1

0xc31e,	// (0x00017d65) popup_preview_fixed_window_g2_ParamLimits

0xc31e,	// (0x00017d65) popup_preview_fixed_window_g2

0x0002,

0xfb47,	// (0x0001b58e) popup_preview_fixed_window_g_ParamLimits

0xfb47,	// (0x0001b58e) popup_preview_fixed_window_g

0x4af9,	// (0x00010540) aid_navi_side_left_pane_ParamLimits

0x4b0e,	// (0x00010555) aid_navi_side_right_pane_ParamLimits

0x4b26,	// (0x0001056d) navi_icon_pane_stacon_ParamLimits

0x4b3a,	// (0x00010581) navi_navi_pane_stacon_ParamLimits

0x4b26,	// (0x0001056d) navi_text_pane_stacon_ParamLimits

0x4711,	// (0x00010158) main_text_info_pane

0xc710,	// (0x00018157) listscroll_text_info_pane

0xc718,	// (0x0001815f) list_text_info_pane_ParamLimits

0xc718,	// (0x0001815f) list_text_info_pane

0xc727,	// (0x0001816e) scroll_pane_cp24_ParamLimits

0xc727,	// (0x0001816e) scroll_pane_cp24

0xc745,	// (0x0001818c) list_text_info_pane_t1_ParamLimits

0xc745,	// (0x0001818c) list_text_info_pane_t1

0x504e,	// (0x00010a95) popup_fast_swap2_window_ParamLimits

0x504e,	// (0x00010a95) popup_fast_swap2_window

0xc776,	// (0x000181bd) aid_size_cell_fast2

0x3b70,	// (0x0000f5b7) bg_popup_window_pane_cp17

0x96bc,	// (0x00015103) heading_pane_cp2

0x96c4,	// (0x0001510b) listscroll_fast2_pane

0xc780,	// (0x000181c7) grid_fast2_pane

0xc78a,	// (0x000181d1) listscroll_fast2_pane_g1

0xc792,	// (0x000181d9) listscroll_fast2_pane_g2

0x0001,

0xfbca,	// (0x0001b611) listscroll_fast2_pane_g

0x7d4f,	// (0x00013796) scroll_pane_cp26

0xc79c,	// (0x000181e3) cell_fast2_pane_ParamLimits

0xc79c,	// (0x000181e3) cell_fast2_pane

0xc7b1,	// (0x000181f8) cell_fast2_pane_g1

0xc7ba,	// (0x00018201) cell_fast2_pane_g2

0xc7c3,	// (0x0001820a) cell_fast2_pane_g3

0x0002,

0xfbcf,	// (0x0001b616) cell_fast2_pane_g

0x7251,	// (0x00012c98) grid_highlight_pane_cp9

0x5014,	// (0x00010a5b) main_eswt_pane_ParamLimits

0x5014,	// (0x00010a5b) main_eswt_pane

0xc73c,	// (0x00018183) list_single_text_info_pane

0xc7cb,	// (0x00018212) eswt_ctrl_button_pane

0xc7cb,	// (0x00018212) eswt_ctrl_canvas_pane

0xc7d3,	// (0x0001821a) eswt_ctrl_combo_pane

0xc7cb,	// (0x00018212) eswt_ctrl_default_pane

0xc7cb,	// (0x00018212) eswt_ctrl_label_pane

0xc7db,	// (0x00018222) eswt_ctrl_wait_pane

0xc7e3,	// (0x0001822a) eswt_shell_pane

0x3b70,	// (0x0000f5b7) listscroll_eswt_app_pane

0xc803,	// (0x0001824a) popup_eswt_tasktip_window_ParamLimits

0xc803,	// (0x0001824a) popup_eswt_tasktip_window

0x9293,	// (0x00014cda) bg_popup_window_pane_cp18

0xc814,	// (0x0001825b) eswt_control_pane_g1_ParamLimits

0xc814,	// (0x0001825b) eswt_control_pane_g1

0xc821,	// (0x00018268) eswt_control_pane_g2_ParamLimits

0xc821,	// (0x00018268) eswt_control_pane_g2

0xc82e,	// (0x00018275) eswt_control_pane_g3_ParamLimits

0xc82e,	// (0x00018275) eswt_control_pane_g3

0xc83b,	// (0x00018282) eswt_control_pane_g4_ParamLimits

0xc83b,	// (0x00018282) eswt_control_pane_g4

0x0003,

0xfbd6,	// (0x0001b61d) eswt_control_pane_g_ParamLimits

0xfbd6,	// (0x0001b61d) eswt_control_pane_g

0x7a4c,	// (0x00013493) bg_button_pane_ParamLimits

0x7a4c,	// (0x00013493) bg_button_pane

0x7266,	// (0x00012cad) common_borders_pane_copy2_ParamLimits

0x7266,	// (0x00012cad) common_borders_pane_copy2

0xc848,	// (0x0001828f) control_button_pane_g1_ParamLimits

0xc848,	// (0x0001828f) control_button_pane_g1

0xc854,	// (0x0001829b) control_button_pane_g2_ParamLimits

0xc854,	// (0x0001829b) control_button_pane_g2

0xc860,	// (0x000182a7) control_button_pane_g3_ParamLimits

0xc860,	// (0x000182a7) control_button_pane_g3

0x0002,

0xfbdf,	// (0x0001b626) control_button_pane_g_ParamLimits

0xfbdf,	// (0x0001b626) control_button_pane_g

0xc874,	// (0x000182bb) control_button_pane_t1

0xc882,	// (0x000182c9) control_button_pane_t2

0x0001,

0xfbe6,	// (0x0001b62d) control_button_pane_t

0x9171,	// (0x00014bb8) bg_button_pane_g1

0x9181,	// (0x00014bc8) bg_button_pane_g2

0x9179,	// (0x00014bc0) bg_button_pane_g3

0x9191,	// (0x00014bd8) bg_button_pane_g4

0x9189,	// (0x00014bd0) bg_button_pane_g5

0x9199,	// (0x00014be0) bg_button_pane_g6

0x91a1,	// (0x00014be8) bg_button_pane_g7

0x91b1,	// (0x00014bf8) bg_button_pane_g8

0x91a9,	// (0x00014bf0) bg_button_pane_g9

0x0008,

0xf837,	// (0x0001b27e) bg_button_pane_g

0xbcb4,	// (0x000176fb) common_borders_pane_ParamLimits

0xbcb4,	// (0x000176fb) common_borders_pane

0xc814,	// (0x0001825b) eswt_control_pane_g1_copy1_ParamLimits

0xc814,	// (0x0001825b) eswt_control_pane_g1_copy1

0xc821,	// (0x00018268) eswt_control_pane_g2_copy1_ParamLimits

0xc821,	// (0x00018268) eswt_control_pane_g2_copy1

0xc82e,	// (0x00018275) eswt_control_pane_g3_copy1_ParamLimits

0xc82e,	// (0x00018275) eswt_control_pane_g3_copy1

0xc83b,	// (0x00018282) eswt_control_pane_g4_copy1_ParamLimits

0xc83b,	// (0x00018282) eswt_control_pane_g4_copy1

0xbcef,	// (0x00017736) bg_eswt_ctrl_canvas_pane_g1

0xbcb4,	// (0x000176fb) common_borders_pane_cp2_ParamLimits

0xbcb4,	// (0x000176fb) common_borders_pane_cp2

0xbcb4,	// (0x000176fb) common_borders_pane_cp3_ParamLimits

0xbcb4,	// (0x000176fb) common_borders_pane_cp3

0xc890,	// (0x000182d7) separator_horizontal_pane

0xc898,	// (0x000182df) separator_vertical_pane

0xc814,	// (0x0001825b) eswt_control_pane_g1_copy2_ParamLimits

0xc814,	// (0x0001825b) eswt_control_pane_g1_copy2

0xc821,	// (0x00018268) eswt_control_pane_g2_copy2_ParamLimits

0xc821,	// (0x00018268) eswt_control_pane_g2_copy2

0xc82e,	// (0x00018275) eswt_control_pane_g3_copy2_ParamLimits

0xc82e,	// (0x00018275) eswt_control_pane_g3_copy2

0xc83b,	// (0x00018282) eswt_control_pane_g4_copy2_ParamLimits

0xc83b,	// (0x00018282) eswt_control_pane_g4_copy2

0x3b70,	// (0x0000f5b7) common_borders_pane_cp4

0xc8a1,	// (0x000182e8) separator_horizontal_pane_g1

0xc8aa,	// (0x000182f1) separator_horizontal_pane_g2

0xc8b3,	// (0x000182fa) separator_horizontal_pane_g3

0x0002,

0xfbeb,	// (0x0001b632) separator_horizontal_pane_g

0xc814,	// (0x0001825b) eswt_control_pane_g1_copy3_ParamLimits

0xc814,	// (0x0001825b) eswt_control_pane_g1_copy3

0xc821,	// (0x00018268) eswt_control_pane_g2_copy3_ParamLimits

0xc821,	// (0x00018268) eswt_control_pane_g2_copy3

0xc82e,	// (0x00018275) eswt_control_pane_g3_copy3_ParamLimits

0xc82e,	// (0x00018275) eswt_control_pane_g3_copy3

0xc83b,	// (0x00018282) eswt_control_pane_g4_copy3_ParamLimits

0xc83b,	// (0x00018282) eswt_control_pane_g4_copy3

0x3b70,	// (0x0000f5b7) common_borders_pane_cp5

0xc8bc,	// (0x00018303) separator_vertical_pane_g1

0xc8c5,	// (0x0001830c) separator_vertical_pane_g2

0xc8ce,	// (0x00018315) separator_vertical_pane_g3

0x0002,

0xfbf2,	// (0x0001b639) separator_vertical_pane_g

0xc814,	// (0x0001825b) eswt_control_pane_g1_copy4_ParamLimits

0xc814,	// (0x0001825b) eswt_control_pane_g1_copy4

0xc821,	// (0x00018268) eswt_control_pane_g2_copy4_ParamLimits

0xc821,	// (0x00018268) eswt_control_pane_g2_copy4

0xc82e,	// (0x00018275) eswt_control_pane_g3_copy4_ParamLimits

0xc82e,	// (0x00018275) eswt_control_pane_g3_copy4

0xc83b,	// (0x00018282) eswt_control_pane_g4_copy4_ParamLimits

0xc83b,	// (0x00018282) eswt_control_pane_g4_copy4

0xc8d7,	// (0x0001831e) eswt_ctrl_combo_button_pane

0xc8df,	// (0x00018326) eswt_ctrl_input_pane

0xc8e7,	// (0x0001832e) popup_choice_list_window_cp70

0xc8ef,	// (0x00018336) eswt_ctrl_input_pane_t1

0x3b70,	// (0x0000f5b7) input_focus_pane_cp70

0xbcb4,	// (0x000176fb) bg_button_pane_cp70_ParamLimits

0xbcb4,	// (0x000176fb) bg_button_pane_cp70

0xc8fd,	// (0x00018344) eswt_ctrl_combo_button_pane_g1

0xc905,	// (0x0001834c) wait_bar_pane_cp70

0x9293,	// (0x00014cda) bg_popup_window_pane_cp70_ParamLimits

0x9293,	// (0x00014cda) bg_popup_window_pane_cp70

0xc90d,	// (0x00018354) popup_eswt_tasktip_window_t1

0xc923,	// (0x0001836a) wait_bar_pane_cp71_ParamLimits

0xc923,	// (0x0001836a) wait_bar_pane_cp71

0xc92f,	// (0x00018376) grid_eswt_app_pane

0x806d,	// (0x00013ab4) scroll_pane_cp70

0xc938,	// (0x0001837f) cell_eswt_app_pane_ParamLimits

0xc938,	// (0x0001837f) cell_eswt_app_pane

0xc968,	// (0x000183af) cell_eswt_app_pane_g1_ParamLimits

0xc968,	// (0x000183af) cell_eswt_app_pane_g1

0xc997,	// (0x000183de) cell_eswt_app_pane_g2_ParamLimits

0xc997,	// (0x000183de) cell_eswt_app_pane_g2

0x0001,

0xfbf9,	// (0x0001b640) cell_eswt_app_pane_g_ParamLimits

0xfbf9,	// (0x0001b640) cell_eswt_app_pane_g

0xc9c0,	// (0x00018407) cell_eswt_app_pane_t1_ParamLimits

0xc9c0,	// (0x00018407) cell_eswt_app_pane_t1

0xc9f2,	// (0x00018439) grid_highlight_pane_cp70_ParamLimits

0xc9f2,	// (0x00018439) grid_highlight_pane_cp70

0x87de,	// (0x00014225) set_content_pane_g1

0x8ba8,	// (0x000145ef) status_small_volume_pane

0x5e59,	// (0x000118a0) status_small_volume_pane_g1

0x5e61,	// (0x000118a8) volume_small2_pane

0x5e6a,	// (0x000118b1) volume_small2_pane_g1

0x5e73,	// (0x000118ba) volume_small2_pane_g2

0x5e7c,	// (0x000118c3) volume_small2_pane_g3

0x5e85,	// (0x000118cc) volume_small2_pane_g4

0x5e8e,	// (0x000118d5) volume_small2_pane_g5

0x5e97,	// (0x000118de) volume_small2_pane_g6

0x5ea0,	// (0x000118e7) volume_small2_pane_g7

0x5ea9,	// (0x000118f0) volume_small2_pane_g8

0x5eb2,	// (0x000118f9) volume_small2_pane_g9

0x5ebb,	// (0x00011902) volume_small2_pane_g10

0x0009,

0xfbfe,	// (0x0001b645) volume_small2_pane_g

0xc0b5,	// (0x00017afc) fep_vkb_top_text_pane_g1_ParamLimits

0xc0d0,	// (0x00017b17) fep_vkb_top_text_pane_t1_ParamLimits

0xc32a,	// (0x00017d71) popup_preview_fixed_window_g3_ParamLimits

0xc32a,	// (0x00017d71) popup_preview_fixed_window_g3

0x54ff,	// (0x00010f46) popup_toolbar_trans_pane

0xa646,	// (0x0001608d) aid_height_set_list_ParamLimits

0xa657,	// (0x0001609e) aid_size_parent_ParamLimits

0x8c29,	// (0x00014670) list_highlight_pane_cp2_ParamLimits

0x87de,	// (0x00014225) set_content_pane_g1_ParamLimits

0xa913,	// (0x0001635a) list_single_image_pane_ParamLimits

0xa913,	// (0x0001635a) list_single_image_pane

0xc9fe,	// (0x00018445) aid_size_cell_image_ParamLimits

0xc9fe,	// (0x00018445) aid_size_cell_image

0xca0b,	// (0x00018452) grid_single_image_pane_ParamLimits

0xca0b,	// (0x00018452) grid_single_image_pane

0xa8ca,	// (0x00016311) list_single_image_pane_g1_ParamLimits

0xa8ca,	// (0x00016311) list_single_image_pane_g1

0xca17,	// (0x0001845e) list_single_image_pane_g2_ParamLimits

0xca17,	// (0x0001845e) list_single_image_pane_g2

0x0001,

0xfc13,	// (0x0001b65a) list_single_image_pane_g_ParamLimits

0xfc13,	// (0x0001b65a) list_single_image_pane_g

0xca2b,	// (0x00018472) list_single_image_pane_t1_ParamLimits

0xca2b,	// (0x00018472) list_single_image_pane_t1

0xca41,	// (0x00018488) cell_image_list_pane_ParamLimits

0xca41,	// (0x00018488) cell_image_list_pane

0xca55,	// (0x0001849c) cell_image_list_pane_g1

0xca5e,	// (0x000184a5) cell_image_list_pane_g2

0x0001,

0xfc18,	// (0x0001b65f) cell_image_list_pane_g

0xca67,	// (0x000184ae) aid_size_cell_tb_trans_pane

0x7a4c,	// (0x00013493) bg_tb_trans_pane

0xca79,	// (0x000184c0) grid_tb_trans_pane

0x9171,	// (0x00014bb8) bg_tb_trans_pane_g1

0x9181,	// (0x00014bc8) bg_tb_trans_pane_g2

0x9179,	// (0x00014bc0) bg_tb_trans_pane_g3

0x9191,	// (0x00014bd8) bg_tb_trans_pane_g4

0x9189,	// (0x00014bd0) bg_tb_trans_pane_g5

0x91b1,	// (0x00014bf8) bg_tb_trans_pane_g6

0x91a9,	// (0x00014bf0) bg_tb_trans_pane_g7

0x9199,	// (0x00014be0) bg_tb_trans_pane_g8

0x91a1,	// (0x00014be8) bg_tb_trans_pane_g9

0x0008,

0xfc1d,	// (0x0001b664) bg_tb_trans_pane_g

0xca8d,	// (0x000184d4) cell_toolbar_trans_pane_ParamLimits

0xca8d,	// (0x000184d4) cell_toolbar_trans_pane

0xbcef,	// (0x00017736) cell_toolbar_trans_pane_g1

0xb875,	// (0x000172bc) list_form2_midp_pane_t1

0xb883,	// (0x000172ca) list_form2_midp_pane_t2

0x0001,

0xfaba,	// (0x0001b501) list_form2_midp_pane_t

0xb891,	// (0x000172d8) scroll_pane_cp51_ParamLimits

0xba9c,	// (0x000174e3) form2_midp_wait_pane_g1

0xbaa5,	// (0x000174ec) form2_midp_wait_pane_g2

0xbaae,	// (0x000174f5) form2_midp_wait_pane_g3

0x0002,

0xfacf,	// (0x0001b516) form2_midp_wait_pane_g

0x6c4e,	// (0x00012695) list_highlight_pane_cp21_ParamLimits

0xbafa,	// (0x00017541) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xbb09,	// (0x00017550) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xa88d,	// (0x000162d4) list_single_2graphic_im_pane_ParamLimits

0xa88d,	// (0x000162d4) list_single_2graphic_im_pane

0xcab3,	// (0x000184fa) list_single_2graphic_im_pane_g1_ParamLimits

0xcab3,	// (0x000184fa) list_single_2graphic_im_pane_g1

0xcac4,	// (0x0001850b) list_single_2graphic_im_pane_g2_ParamLimits

0xcac4,	// (0x0001850b) list_single_2graphic_im_pane_g2

0xcad0,	// (0x00018517) list_single_2graphic_im_pane_g3_ParamLimits

0xcad0,	// (0x00018517) list_single_2graphic_im_pane_g3

0x0003,

0xfc30,	// (0x0001b677) list_single_2graphic_im_pane_g_ParamLimits

0xfc30,	// (0x0001b677) list_single_2graphic_im_pane_g

0xcaf0,	// (0x00018537) list_single_2graphic_im_pane_t1_ParamLimits

0xcaf0,	// (0x00018537) list_single_2graphic_im_pane_t1

0xc336,	// (0x00017d7d) list_single_graphic_2heading_pane_fp_ParamLimits

0xc336,	// (0x00017d7d) list_single_graphic_2heading_pane_fp

0xc37a,	// (0x00017dc1) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xc37a,	// (0x00017dc1) list_single_graphic_2heading_pane_fp_g1

0xc34b,	// (0x00017d92) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc34b,	// (0x00017d92) list_single_graphic_2heading_pane_fp_g2

0x7a72,	// (0x000134b9) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x7a72,	// (0x000134b9) list_single_graphic_2heading_pane_fp_g3

0x7a7e,	// (0x000134c5) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x7a7e,	// (0x000134c5) list_single_graphic_2heading_pane_fp_g4

0xc357,	// (0x00017d9e) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc357,	// (0x00017d9e) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb57,	// (0x0001b59e) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb57,	// (0x0001b59e) list_single_graphic_2heading_pane_fp_g

0xcb21,	// (0x00018568) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xcb21,	// (0x00018568) list_single_graphic_2heading_pane_fp_t1

0xc3b2,	// (0x00017df9) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xc3b2,	// (0x00017df9) list_single_graphic_2heading_pane_fp_t2

0xcb37,	// (0x0001857e) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xcb37,	// (0x0001857e) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc39,	// (0x0001b680) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc39,	// (0x0001b680) list_single_graphic_2heading_pane_fp_t

0xbd7b,	// (0x000177c2) fep_hwr_write_pane_g5_ParamLimits

0xbd7b,	// (0x000177c2) fep_hwr_write_pane_g5

0xbd87,	// (0x000177ce) fep_hwr_write_pane_g6_ParamLimits

0xbd87,	// (0x000177ce) fep_hwr_write_pane_g6

0xc7e3,	// (0x0001822a) eswt_shell_pane_ParamLimits

0x9293,	// (0x00014cda) bg_popup_window_pane_cp18_ParamLimits

0xa58d,	// (0x00015fd4) heading_pane_cp70

0xc90d,	// (0x00018354) popup_eswt_tasktip_window_t1_ParamLimits

0x8cc2,	// (0x00014709) aid_touch_tab_arrow_left

0x8cd1,	// (0x00014718) aid_touch_tab_arrow_right

0x6b96,	// (0x000125dd) title_pane_g3_ParamLimits

0x6b96,	// (0x000125dd) title_pane_g3

0x792b,	// (0x00013372) set_value_pane_g1

0x54ff,	// (0x00010f46) popup_toolbar_trans_pane_ParamLimits

0xca67,	// (0x000184ae) aid_size_cell_tb_trans_pane_ParamLimits

0x7a4c,	// (0x00013493) bg_tb_trans_pane_ParamLimits

0xca79,	// (0x000184c0) grid_tb_trans_pane_ParamLimits

0x6ef1,	// (0x00012938) cont_note_pane_ParamLimits

0x6ef1,	// (0x00012938) cont_note_pane

0x7266,	// (0x00012cad) cont_snote2_single_text_pane_ParamLimits

0x7266,	// (0x00012cad) cont_snote2_single_text_pane

0x7266,	// (0x00012cad) cont_snote2_single_graphic_pane_ParamLimits

0x7266,	// (0x00012cad) cont_snote2_single_graphic_pane

0x98eb,	// (0x00015332) cont_note_wait_pane_ParamLimits

0x98eb,	// (0x00015332) cont_note_wait_pane

0x98eb,	// (0x00015332) cont_note_image_pane_ParamLimits

0x98eb,	// (0x00015332) cont_note_image_pane

0xcb4d,	// (0x00018594) popup_note2_window_g1_ParamLimits

0xcb4d,	// (0x00018594) popup_note2_window_g1

0xcb7e,	// (0x000185c5) popup_note2_window_t1_ParamLimits

0xcb7e,	// (0x000185c5) popup_note2_window_t1

0xcbc3,	// (0x0001860a) popup_note2_window_t2_ParamLimits

0xcbc3,	// (0x0001860a) popup_note2_window_t2

0xcc08,	// (0x0001864f) popup_note2_window_t3_ParamLimits

0xcc08,	// (0x0001864f) popup_note2_window_t3

0xcc4d,	// (0x00018694) popup_note2_window_t4_ParamLimits

0xcc4d,	// (0x00018694) popup_note2_window_t4

0x6f75,	// (0x000129bc) popup_note2_window_t5_ParamLimits

0x6f75,	// (0x000129bc) popup_note2_window_t5

0x0004,

0xfc45,	// (0x0001b68c) popup_note2_window_t_ParamLimits

0xfc45,	// (0x0001b68c) popup_note2_window_t

0xcc7c,	// (0x000186c3) popup_note2_image_window_g1_ParamLimits

0xcc7c,	// (0x000186c3) popup_note2_image_window_g1

0xcc88,	// (0x000186cf) popup_note2_image_window_g2_ParamLimits

0xcc88,	// (0x000186cf) popup_note2_image_window_g2

0x0001,

0xfc50,	// (0x0001b697) popup_note2_image_window_g_ParamLimits

0xfc50,	// (0x0001b697) popup_note2_image_window_g

0xcc9a,	// (0x000186e1) popup_note2_image_window_t1_ParamLimits

0xcc9a,	// (0x000186e1) popup_note2_image_window_t1

0xccb2,	// (0x000186f9) popup_note2_image_window_t2_ParamLimits

0xccb2,	// (0x000186f9) popup_note2_image_window_t2

0xccca,	// (0x00018711) popup_note2_image_window_t3_ParamLimits

0xccca,	// (0x00018711) popup_note2_image_window_t3

0x0002,

0xfc55,	// (0x0001b69c) popup_note2_image_window_t_ParamLimits

0xfc55,	// (0x0001b69c) popup_note2_image_window_t

0x98f9,	// (0x00015340) popup_note2_wait_window_g1_ParamLimits

0x98f9,	// (0x00015340) popup_note2_wait_window_g1

0xcce6,	// (0x0001872d) popup_note2_wait_window_g2_ParamLimits

0xcce6,	// (0x0001872d) popup_note2_wait_window_g2

0x9911,	// (0x00015358) popup_note2_wait_window_g3_ParamLimits

0x9911,	// (0x00015358) popup_note2_wait_window_g3

0x0002,

0xfc5c,	// (0x0001b6a3) popup_note2_wait_window_g_ParamLimits

0xfc5c,	// (0x0001b6a3) popup_note2_wait_window_g

0xccf2,	// (0x00018739) popup_note2_wait_window_t1_ParamLimits

0xccf2,	// (0x00018739) popup_note2_wait_window_t1

0xcd10,	// (0x00018757) popup_note2_wait_window_t2_ParamLimits

0xcd10,	// (0x00018757) popup_note2_wait_window_t2

0xcd2e,	// (0x00018775) popup_note2_wait_window_t3_ParamLimits

0xcd2e,	// (0x00018775) popup_note2_wait_window_t3

0xcd40,	// (0x00018787) popup_note2_wait_window_t4_ParamLimits

0xcd40,	// (0x00018787) popup_note2_wait_window_t4

0x0003,

0xfc63,	// (0x0001b6aa) popup_note2_wait_window_t_ParamLimits

0xfc63,	// (0x0001b6aa) popup_note2_wait_window_t

0xcd52,	// (0x00018799) wait_bar2_pane_ParamLimits

0xcd52,	// (0x00018799) wait_bar2_pane

0xcd6a,	// (0x000187b1) popup_snote2_single_text_window_g1_ParamLimits

0xcd6a,	// (0x000187b1) popup_snote2_single_text_window_g1

0xcd92,	// (0x000187d9) popup_snote2_single_text_window_t1_ParamLimits

0xcd92,	// (0x000187d9) popup_snote2_single_text_window_t1

0xcdde,	// (0x00018825) popup_snote2_single_text_window_t2_ParamLimits

0xcdde,	// (0x00018825) popup_snote2_single_text_window_t2

0xce2a,	// (0x00018871) popup_snote2_single_text_window_t3_ParamLimits

0xce2a,	// (0x00018871) popup_snote2_single_text_window_t3

0xce6b,	// (0x000188b2) popup_snote2_single_text_window_t4_ParamLimits

0xce6b,	// (0x000188b2) popup_snote2_single_text_window_t4

0xcea1,	// (0x000188e8) popup_snote2_single_text_window_t5_ParamLimits

0xcea1,	// (0x000188e8) popup_snote2_single_text_window_t5

0x0004,

0xfc6c,	// (0x0001b6b3) popup_snote2_single_text_window_t_ParamLimits

0xfc6c,	// (0x0001b6b3) popup_snote2_single_text_window_t

0xcecc,	// (0x00018913) popup_snote2_single_graphic_window_g1_ParamLimits

0xcecc,	// (0x00018913) popup_snote2_single_graphic_window_g1

0xcef4,	// (0x0001893b) popup_snote2_single_graphic_window_g2_ParamLimits

0xcef4,	// (0x0001893b) popup_snote2_single_graphic_window_g2

0x0001,

0xfc77,	// (0x0001b6be) popup_snote2_single_graphic_window_g_ParamLimits

0xfc77,	// (0x0001b6be) popup_snote2_single_graphic_window_g

0xcf1c,	// (0x00018963) popup_snote2_single_graphic_window_t1_ParamLimits

0xcf1c,	// (0x00018963) popup_snote2_single_graphic_window_t1

0xcf68,	// (0x000189af) popup_snote2_single_graphic_window_t2_ParamLimits

0xcf68,	// (0x000189af) popup_snote2_single_graphic_window_t2

0xce2a,	// (0x00018871) popup_snote2_single_graphic_window_t3_ParamLimits

0xce2a,	// (0x00018871) popup_snote2_single_graphic_window_t3

0xce6b,	// (0x000188b2) popup_snote2_single_graphic_window_t4_ParamLimits

0xce6b,	// (0x000188b2) popup_snote2_single_graphic_window_t4

0xcea1,	// (0x000188e8) popup_snote2_single_graphic_window_t5_ParamLimits

0xcea1,	// (0x000188e8) popup_snote2_single_graphic_window_t5

0x0004,

0xfc7c,	// (0x0001b6c3) popup_snote2_single_graphic_window_t_ParamLimits

0xfc7c,	// (0x0001b6c3) popup_snote2_single_graphic_window_t

0xb752,	// (0x00017199) clock_nsta_pane_cp2_t1

0xb752,	// (0x00017199) clock_nsta_pane_cp2_t2

0x0001,

0xfa90,	// (0x0001b4d7) clock_nsta_pane_cp2_t

0x7a66,	// (0x000134ad) form_field_data_wide_pane_g1_ParamLimits

0x7a72,	// (0x000134b9) form_field_data_wide_pane_g2_ParamLimits

0x7a72,	// (0x000134b9) form_field_data_wide_pane_g2

0x7a7e,	// (0x000134c5) form_field_data_wide_pane_g3_ParamLimits

0x7a7e,	// (0x000134c5) form_field_data_wide_pane_g3

0x0002,

0xf651,	// (0x0001b098) form_field_data_wide_pane_g_ParamLimits

0xf651,	// (0x0001b098) form_field_data_wide_pane_g

0xb62e,	// (0x00017075) grid_touch_3_pane_ParamLimits

0xb62e,	// (0x00017075) grid_touch_3_pane

0xcfb4,	// (0x000189fb) cell_touch_3_pane_ParamLimits

0xcfb4,	// (0x000189fb) cell_touch_3_pane

0xbcef,	// (0x00017736) cell_touch_3_pane_g1

0xbcef,	// (0x00017736) cell_touch_3_pane_g2

0x0001,

0xfb15,	// (0x0001b55c) cell_touch_3_pane_g

0x6fcd,	// (0x00012a14) cont_query_data_pane

0x6fd5,	// (0x00012a1c) cont_query_data_pane_cp1

0xcfe2,	// (0x00018a29) button_value_adjust_pane_cp7

0xcfea,	// (0x00018a31) query_popup_pane_cp3

0x8354,	// (0x00013d9b) bg_popup_sub_pane_cp22_ParamLimits

0x4c3b,	// (0x00010682) navi_navi_volume_pane_cp2

0x4c56,	// (0x0001069d) popup_side_volume_key_window_g2

0x4c65,	// (0x000106ac) popup_side_volume_key_window_g3

0x0002,

0xf6e7,	// (0x0001b12e) popup_side_volume_key_window_g

0x4c82,	// (0x000106c9) popup_side_volume_key_window_t2

0x0001,

0xf6ee,	// (0x0001b135) popup_side_volume_key_window_t

0x869d,	// (0x000140e4) popup_side_volume_key_window_ParamLimits

0x7661,	// (0x000130a8) list_double_graphic_pane_g4_ParamLimits

0x7661,	// (0x000130a8) list_double_graphic_pane_g4

0xa8d6,	// (0x0001631d) list_single_2heading_msg_pane_ParamLimits

0xa8d6,	// (0x0001631d) list_single_2heading_msg_pane

0xd019,	// (0x00018a60) list_single_2heading_msg_pane_g1_ParamLimits

0xd019,	// (0x00018a60) list_single_2heading_msg_pane_g1

0xae68,	// (0x000168af) list_single_2heading_msg_pane_g2_ParamLimits

0xae68,	// (0x000168af) list_single_2heading_msg_pane_g2

0xd025,	// (0x00018a6c) list_single_2heading_msg_pane_g3_ParamLimits

0xd025,	// (0x00018a6c) list_single_2heading_msg_pane_g3

0xd031,	// (0x00018a78) list_single_2heading_msg_pane_g4_ParamLimits

0xd031,	// (0x00018a78) list_single_2heading_msg_pane_g4

0x0003,

0xfc87,	// (0x0001b6ce) list_single_2heading_msg_pane_g_ParamLimits

0xfc87,	// (0x0001b6ce) list_single_2heading_msg_pane_g

0xd049,	// (0x00018a90) list_single_2heading_msg_pane_t1_ParamLimits

0xd049,	// (0x00018a90) list_single_2heading_msg_pane_t1

0xd071,	// (0x00018ab8) list_single_2heading_msg_pane_t2_ParamLimits

0xd071,	// (0x00018ab8) list_single_2heading_msg_pane_t2

0xd0a0,	// (0x00018ae7) list_single_2heading_msg_pane_t3_ParamLimits

0xd0a0,	// (0x00018ae7) list_single_2heading_msg_pane_t3

0xd0d9,	// (0x00018b20) list_single_2heading_msg_pane_t4_ParamLimits

0xd0d9,	// (0x00018b20) list_single_2heading_msg_pane_t4

0x0003,

0xfc90,	// (0x0001b6d7) list_single_2heading_msg_pane_t_ParamLimits

0xfc90,	// (0x0001b6d7) list_single_2heading_msg_pane_t

0x6ba2,	// (0x000125e9) title_pane_g4_ParamLimits

0x6ba2,	// (0x000125e9) title_pane_g4

0x4a4a,	// (0x00010491) title_pane_stacon_g3_ParamLimits

0x4a4a,	// (0x00010491) title_pane_stacon_g3

0xcae4,	// (0x0001852b) list_single_2graphic_im_pane_g4_ParamLimits

0xcae4,	// (0x0001852b) list_single_2graphic_im_pane_g4

0xa34a,	// (0x00015d91) popup_side_volume_key_window_cp

0xac5f,	// (0x000166a6) main_idle_act2_pane_t1

0x565d,	// (0x000110a4) toolbar_button_pane_g10

0x745e,	// (0x00012ea5) popup_toolbar_window_cp1

0xb743,	// (0x0001718a) clock_nsta_pane_cp_t1

0xb743,	// (0x0001718a) clock_nsta_pane_cp_t2

0x0001,

0xfa8b,	// (0x0001b4d2) clock_nsta_pane_cp_t

0x4c3b,	// (0x00010682) navi_navi_volume_pane_cp2_ParamLimits

0x4c4a,	// (0x00010691) popup_side_volume_key_window_g1_ParamLimits

0x4c56,	// (0x0001069d) popup_side_volume_key_window_g2_ParamLimits

0x4c65,	// (0x000106ac) popup_side_volume_key_window_g3_ParamLimits

0xf6e7,	// (0x0001b12e) popup_side_volume_key_window_g_ParamLimits

0x5ac5,	// (0x0001150c) fep_hwr_aid_pane

0x5b6c,	// (0x000115b3) bg_fep_hwr_top_pane_g4_ParamLimits

0xbd4b,	// (0x00017792) fep_hwr_top_pane_g1_ParamLimits

0xbd5d,	// (0x000177a4) fep_hwr_top_pane_g2_ParamLimits

0x5b8c,	// (0x000115d3) fep_hwr_top_pane_g3_ParamLimits

0xfae0,	// (0x0001b527) fep_hwr_top_pane_g_ParamLimits

0x5ba1,	// (0x000115e8) fep_hwr_top_text_pane_ParamLimits

0xa10d,	// (0x00015b54) aid_touch_tab_arrow_arrow_2

0xa116,	// (0x00015b5d) aid_touch_tab_arrow_left_2

0x5ad9,	// (0x00011520) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x5b10,	// (0x00011557) fep_hwr_prediction_pane

0xbebd,	// (0x00017904) fep_vkb_prediction_pane

0xbfc1,	// (0x00017a08) fep_vkb_side_pane_g3_ParamLimits

0xbfc1,	// (0x00017a08) fep_vkb_side_pane_g3

0x5d1c,	// (0x00011763) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x5d88,	// (0x000117cf) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x5d95,	// (0x000117dc) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb8f,	// (0x0001b5d6) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x5ec4,	// (0x0001190b) fep_hwr_prediction_pane_g1

0x5ece,	// (0x00011915) fep_hwr_prediction_pane_g2

0x5ed6,	// (0x0001191d) fep_hwr_prediction_pane_g3

0x5ede,	// (0x00011925) fep_hwr_prediction_pane_g4

0x0003,

0xfc99,	// (0x0001b6e0) fep_hwr_prediction_pane_g

0xd0fe,	// (0x00018b45) fep_vkb_prediction_pane_g1

0xd108,	// (0x00018b4f) fep_vkb_prediction_pane_g2

0xd110,	// (0x00018b57) fep_vkb_prediction_pane_g3

0xd118,	// (0x00018b5f) fep_vkb_prediction_pane_g4

0x0003,

0xfca2,	// (0x0001b6e9) fep_vkb_prediction_pane_g

0x5945,	// (0x0001138c) slider_set_pane_g3

0x5959,	// (0x000113a0) slider_set_pane_g4

0x5971,	// (0x000113b8) slider_set_pane_g5

0x5945,	// (0x0001138c) slider_set_pane_g6

0x5987,	// (0x000113ce) slider_set_pane_g7

0xa7bc,	// (0x00016203) slider_form_pane_g3

0xa7c5,	// (0x0001620c) slider_form_pane_g4

0xa7cd,	// (0x00016214) slider_form_pane_g5

0xa7bc,	// (0x00016203) slider_form_pane_g6

0xa7d5,	// (0x0001621c) slider_form_pane_g7

0xaf5c,	// (0x000169a3) slider_set_pane_vc_g3

0xaf65,	// (0x000169ac) slider_set_pane_vc_g4

0xaf6e,	// (0x000169b5) slider_set_pane_vc_g5

0xaf5c,	// (0x000169a3) slider_set_pane_vc_g6

0xaf77,	// (0x000169be) slider_set_pane_vc_g7

0xb401,	// (0x00016e48) slider_form_pane_vc_g1

0xb40a,	// (0x00016e51) slider_form_pane_vc_g2

0xb413,	// (0x00016e5a) slider_form_pane_vc_g3

0xb401,	// (0x00016e48) slider_form_pane_vc_g4

0xb41c,	// (0x00016e63) slider_form_pane_vc_g5

0x0004,

0xfa5d,	// (0x0001b4a4) slider_form_pane_vc_g

0x4711,	// (0x00010158) main_idle_act3_pane

0xd120,	// (0x00018b67) ai3_links_pane

0xd129,	// (0x00018b70) popup_ai3_data_window_ParamLimits

0xd129,	// (0x00018b70) popup_ai3_data_window

0x3b70,	// (0x0000f5b7) grid_ai3_links_pane

0xd143,	// (0x00018b8a) cell_ai3_links_pane_ParamLimits

0xd143,	// (0x00018b8a) cell_ai3_links_pane

0xd15b,	// (0x00018ba2) bg_popup_sub_pane_cp11

0xd168,	// (0x00018baf) cell_ai3_links_pane_g1

0x3b70,	// (0x0000f5b7) bg_popup_sub_pane_cp12

0xd18d,	// (0x00018bd4) heading_ai3_data_pane

0xd195,	// (0x00018bdc) list_ai3_gene_pane

0xd1a1,	// (0x00018be8) popup_ai3_data_window_g1

0xd1a9,	// (0x00018bf0) heading_ai3_data_pane_g1

0xd1b1,	// (0x00018bf8) heading_ai3_data_pane_t1

0xd1bf,	// (0x00018c06) list_double_ai3_gene_pane_ParamLimits

0xd1bf,	// (0x00018c06) list_double_ai3_gene_pane

0xd1cc,	// (0x00018c13) list_single_ai3_gene_pane_ParamLimits

0xd1cc,	// (0x00018c13) list_single_ai3_gene_pane

0xbcb4,	// (0x000176fb) list_highlight_pane_cp7_ParamLimits

0xbcb4,	// (0x000176fb) list_highlight_pane_cp7

0xd1d9,	// (0x00018c20) list_single_a13_gene_pane_t1_ParamLimits

0xd1d9,	// (0x00018c20) list_single_a13_gene_pane_t1

0xd1f0,	// (0x00018c37) list_single_ai3_gene_pane_g1

0xd1f9,	// (0x00018c40) list_single_ai3_gene_pane_g2

0x0001,

0xfcab,	// (0x0001b6f2) list_single_ai3_gene_pane_g

0xd201,	// (0x00018c48) list_double_ai3_gene_pane_g1_ParamLimits

0xd201,	// (0x00018c48) list_double_ai3_gene_pane_g1

0xd20d,	// (0x00018c54) list_double_ai3_gene_pane_t1_ParamLimits

0xd20d,	// (0x00018c54) list_double_ai3_gene_pane_t1

0xd229,	// (0x00018c70) list_double_ai3_gene_pane_t2_ParamLimits

0xd229,	// (0x00018c70) list_double_ai3_gene_pane_t2

0xd23f,	// (0x00018c86) list_double_ai3_gene_pane_t3_ParamLimits

0xd23f,	// (0x00018c86) list_double_ai3_gene_pane_t3

0x0002,

0xfcb0,	// (0x0001b6f7) list_double_ai3_gene_pane_t_ParamLimits

0xfcb0,	// (0x0001b6f7) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xcffb,	// (0x00018a42) aid_size_min_col_2

0xd005,	// (0x00018a4c) aid_size_min_msg_ParamLimits

0xd005,	// (0x00018a4c) aid_size_min_msg

0xc0c1,	// (0x00017b08) fep_vkb_top_text_pane_g2_ParamLimits

0xc0c1,	// (0x00017b08) fep_vkb_top_text_pane_g2

0x0001,

0xfb10,	// (0x0001b557) fep_vkb_top_text_pane_g_ParamLimits

0xfb10,	// (0x0001b557) fep_vkb_top_text_pane_g

0x4711,	// (0x00010158) main_hc_apps_shell_pane

0xd25c,	// (0x00018ca3) grid_hc_apps_pane_ParamLimits

0xd25c,	// (0x00018ca3) grid_hc_apps_pane

0xd26e,	// (0x00018cb5) list_hc_apps_pane

0xd276,	// (0x00018cbd) scroll_pane_cp37_ParamLimits

0xd276,	// (0x00018cbd) scroll_pane_cp37

0xd282,	// (0x00018cc9) cell_hc_apps_pane_ParamLimits

0xd282,	// (0x00018cc9) cell_hc_apps_pane

0xd330,	// (0x00018d77) cell_hc_apps_pane_g1_ParamLimits

0xd330,	// (0x00018d77) cell_hc_apps_pane_g1

0xd360,	// (0x00018da7) cell_hc_apps_pane_g2_ParamLimits

0xd360,	// (0x00018da7) cell_hc_apps_pane_g2

0xd37c,	// (0x00018dc3) cell_hc_apps_pane_g3_ParamLimits

0xd37c,	// (0x00018dc3) cell_hc_apps_pane_g3

0x0002,

0xfcb7,	// (0x0001b6fe) cell_hc_apps_pane_g_ParamLimits

0xfcb7,	// (0x0001b6fe) cell_hc_apps_pane_g

0xd39e,	// (0x00018de5) cell_hc_apps_pane_t1_ParamLimits

0xd39e,	// (0x00018de5) cell_hc_apps_pane_t1

0x6ef1,	// (0x00012938) grid_highlight_pane_cp10_ParamLimits

0x6ef1,	// (0x00012938) grid_highlight_pane_cp10

0xd3de,	// (0x00018e25) list_single_hc_apps_pane_ParamLimits

0xd3de,	// (0x00018e25) list_single_hc_apps_pane

0xd43a,	// (0x00018e81) list_single_hc_apps_pane_g1

0xd453,	// (0x00018e9a) list_single_hc_apps_pane_g2

0x0001,

0xfcbe,	// (0x0001b705) list_single_hc_apps_pane_g

0xd46c,	// (0x00018eb3) list_single_hc_apps_pane_g2_copy1

0xd488,	// (0x00018ecf) list_single_hc_apps_pane_t1

0x6c4e,	// (0x00012695) bg_set_opt_pane_cp_ParamLimits

0x4972,	// (0x000103b9) setting_slider_pane_t1_ParamLimits

0x498b,	// (0x000103d2) setting_slider_pane_t2_ParamLimits

0x49a5,	// (0x000103ec) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x0001af80) setting_slider_pane_t_ParamLimits

0x49bd,	// (0x00010404) slider_set_pane_ParamLimits

0x4ee4,	// (0x0001092b) control_pane_g5_ParamLimits

0x4ee4,	// (0x0001092b) control_pane_g5

0xa60b,	// (0x00016052) slider_set_pane_g1_ParamLimits

0x5939,	// (0x00011380) slider_set_pane_g2_ParamLimits

0x5945,	// (0x0001138c) slider_set_pane_g3_ParamLimits

0x5959,	// (0x000113a0) slider_set_pane_g4_ParamLimits

0x5971,	// (0x000113b8) slider_set_pane_g5_ParamLimits

0x5945,	// (0x0001138c) slider_set_pane_g6_ParamLimits

0x5987,	// (0x000113ce) slider_set_pane_g7_ParamLimits

0xf935,	// (0x0001b37c) slider_set_pane_g_ParamLimits

0x8789,	// (0x000141d0) navi_icon_text_pane_ParamLimits

0x8c83,	// (0x000146ca) aid_fill_nsta_2_ParamLimits

0x8cc2,	// (0x00014709) aid_touch_tab_arrow_left_ParamLimits

0x8cd1,	// (0x00014718) aid_touch_tab_arrow_right_ParamLimits

0x8d3e,	// (0x00014785) clock_nsta_pane_ParamLimits

0xa0ef,	// (0x00015b36) navi_icon_pane_g1_ParamLimits

0xa0fb,	// (0x00015b42) navi_text_pane_t1_ParamLimits

0xb84f,	// (0x00017296) navi_icon_text_pane_g1_ParamLimits

0xb85b,	// (0x000172a2) navi_icon_text_pane_t1_ParamLimits

0xd43a,	// (0x00018e81) list_single_hc_apps_pane_g1_ParamLimits

0xd453,	// (0x00018e9a) list_single_hc_apps_pane_g2_ParamLimits

0xfcbe,	// (0x0001b705) list_single_hc_apps_pane_g_ParamLimits

0xd46c,	// (0x00018eb3) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xd488,	// (0x00018ecf) list_single_hc_apps_pane_t1_ParamLimits

0x487c,	// (0x000102c3) popup_toolbar2_fixed_window_ParamLimits

0x487c,	// (0x000102c3) popup_toolbar2_fixed_window

0x54f5,	// (0x00010f3c) popup_toolbar2_float_window

0x3b70,	// (0x0000f5b7) bg_popup_sub_pane_cp27

0xd4b6,	// (0x00018efd) grid_toolbar2_float_pane

0x3b70,	// (0x0000f5b7) bg_popup_sub_pane_cp26

0xd4b6,	// (0x00018efd) grid_toolbar2_fixed_pane

0xd4be,	// (0x00018f05) cell_toolbar2_fixed_pane_ParamLimits

0xd4be,	// (0x00018f05) cell_toolbar2_fixed_pane

0xd4ce,	// (0x00018f15) cell_toolbar2_fixed_pane_g1

0xd4d7,	// (0x00018f1e) toolbar2_fixed_button_pane

0x9171,	// (0x00014bb8) toolbar2_fixed_button_pane_g1

0x9181,	// (0x00014bc8) toolbar2_fixed_button_pane_g2

0x9179,	// (0x00014bc0) toolbar2_fixed_button_pane_g3

0x9191,	// (0x00014bd8) toolbar2_fixed_button_pane_g4

0x9189,	// (0x00014bd0) toolbar2_fixed_button_pane_g5

0x9199,	// (0x00014be0) toolbar2_fixed_button_pane_g6

0x91a1,	// (0x00014be8) toolbar2_fixed_button_pane_g7

0x91b1,	// (0x00014bf8) toolbar2_fixed_button_pane_g8

0x91a9,	// (0x00014bf0) toolbar2_fixed_button_pane_g9

0x0008,

0xf837,	// (0x0001b27e) toolbar2_fixed_button_pane_g

0xd4df,	// (0x00018f26) cell_toolbar2_float_pane_ParamLimits

0xd4df,	// (0x00018f26) cell_toolbar2_float_pane

0xd4f0,	// (0x00018f37) cell_toolbar2_float_pane_g1

0xd4d7,	// (0x00018f1e) toolbar2_fixed_button_pane_cp

0xbe1d,	// (0x00017864) fep_vkb_accented_list_pane_ParamLimits

0xbe1d,	// (0x00017864) fep_vkb_accented_list_pane

0x5cfc,	// (0x00011743) bg_popup_fep_shadow_pane_g9

0x88fd,	// (0x00014344) bg_popup_fep_shadow_pane_cp3

0x7d36,	// (0x0001377d) list_accented_list_pane

0xd4f9,	// (0x00018f40) list_single_accented_list_pane_ParamLimits

0xd4f9,	// (0x00018f40) list_single_accented_list_pane

0x88fd,	// (0x00014344) list_highlight_pane_cp10

0xd50a,	// (0x00018f51) list_single_accented_list_pane_t1

0x5445,	// (0x00010e8c) popup_slider_window_ParamLimits

0x5445,	// (0x00010e8c) popup_slider_window

0xcff2,	// (0x00018a39) aid_indentation_list_msg

0xd5ce,	// (0x00019015) bg_popup_window_pane_cp19

0xd636,	// (0x0001907d) popup_slider_window_g1

0xd652,	// (0x00019099) popup_slider_window_g2

0xd66e,	// (0x000190b5) popup_slider_window_g3

0x0005,

0xfcc3,	// (0x0001b70a) popup_slider_window_g

0xd6d4,	// (0x0001911b) popup_slider_window_t1

0xd748,	// (0x0001918f) small_volume_slider_vertical_pane

0xbcef,	// (0x00017736) small_volume_slider_vertical_pane_g1

0xbcef,	// (0x00017736) small_volume_slider_vertical_pane_g2

0xd764,	// (0x000191ab) small_volume_slider_vertical_pane_g3

0x0002,

0xfcd5,	// (0x0001b71c) small_volume_slider_vertical_pane_g

0x4634,	// (0x0001007b) area_side_right_pane_ParamLimits

0x4634,	// (0x0001007b) area_side_right_pane

0x5ee6,	// (0x0001192d) aid_size_side_button_ParamLimits

0x5ee6,	// (0x0001192d) aid_size_side_button

0x5efa,	// (0x00011941) grid_sctrl_middle_pane_ParamLimits

0x5efa,	// (0x00011941) grid_sctrl_middle_pane

0x5f19,	// (0x00011960) sctrl_sk_bottom_pane

0x5f2a,	// (0x00011971) sctrl_sk_top_pane

0x5f3c,	// (0x00011983) aid_touch_sctrl_top

0x5f49,	// (0x00011990) bg_sctrl_sk_pane_ParamLimits

0x5f49,	// (0x00011990) bg_sctrl_sk_pane

0x5f57,	// (0x0001199e) sctrl_sk_top_pane_g1

0x5f64,	// (0x000119ab) sctrl_sk_top_pane_t1

0x5f3c,	// (0x00011983) aid_touch_sctrl_bottom

0x5f49,	// (0x00011990) bg_sctrl_sk_pane_cp_ParamLimits

0x5f49,	// (0x00011990) bg_sctrl_sk_pane_cp

0x5f7f,	// (0x000119c6) sctrl_sk_bottom_pane_g1

0x5f64,	// (0x000119ab) sctrl_sk_bottom_pane_t1

0x5f88,	// (0x000119cf) cell_sctrl_middle_pane_ParamLimits

0x5f88,	// (0x000119cf) cell_sctrl_middle_pane

0x5fa3,	// (0x000119ea) aid_touch_sctrl_middle_ParamLimits

0x5fa3,	// (0x000119ea) aid_touch_sctrl_middle

0x5fb5,	// (0x000119fc) bg_sctrl_middle_pane_ParamLimits

0x5fb5,	// (0x000119fc) bg_sctrl_middle_pane

0x5d1c,	// (0x00011763) cell_sctrl_middle_pane_g1_ParamLimits

0x5d1c,	// (0x00011763) cell_sctrl_middle_pane_g1

0x5fc3,	// (0x00011a0a) cell_sctrl_middle_pane_g2_ParamLimits

0x5fc3,	// (0x00011a0a) cell_sctrl_middle_pane_g2

0x0001,

0xfce1,	// (0x0001b728) cell_sctrl_middle_pane_g_ParamLimits

0xfce1,	// (0x0001b728) cell_sctrl_middle_pane_g

0x9171,	// (0x00014bb8) bg_sctrl_middle_pane_g1

0x9179,	// (0x00014bc0) bg_sctrl_middle_pane_g2

0x9181,	// (0x00014bc8) bg_sctrl_middle_pane_g3

0x9189,	// (0x00014bd0) bg_sctrl_middle_pane_g4

0x9191,	// (0x00014bd8) bg_sctrl_middle_pane_g5

0x9199,	// (0x00014be0) bg_sctrl_middle_pane_g6

0x91a1,	// (0x00014be8) bg_sctrl_middle_pane_g7

0x91a9,	// (0x00014bf0) bg_sctrl_middle_pane_g8

0x0007,

0xfce6,	// (0x0001b72d) bg_sctrl_middle_pane_g

0x91b1,	// (0x00014bf8) bg_sctrl_middle_pane_g8_copy1

0x9171,	// (0x00014bb8) bg_sctrl_sk_pane_g1

0x9181,	// (0x00014bc8) bg_sctrl_sk_pane_g2

0x9179,	// (0x00014bc0) bg_sctrl_sk_pane_g3

0x0008,

0xf837,	// (0x0001b27e) bg_sctrl_sk_pane_g

0x7424,	// (0x00012e6b) aid_size_touch_scroll_bar

0x9191,	// (0x00014bd8) bg_sctrl_sk_pane_g4

0x9189,	// (0x00014bd0) bg_sctrl_sk_pane_g5

0x9199,	// (0x00014be0) bg_sctrl_sk_pane_g6

0x91a1,	// (0x00014be8) bg_sctrl_sk_pane_g7

0x91b1,	// (0x00014bf8) bg_sctrl_sk_pane_g8

0x91a9,	// (0x00014bf0) bg_sctrl_sk_pane_g9

0x50ac,	// (0x00010af3) popup_fep_china_hwr2_fs_candidate_window

0x50b6,	// (0x00010afd) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x50b6,	// (0x00010afd) popup_fep_china_hwr2_fs_control_window

0x5d1c,	// (0x00011763) sctrl_sk_top_pane_g2

0x0001,

0xfcdc,	// (0x0001b723) sctrl_sk_top_pane_g

0xd76d,	// (0x000191b4) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd76d,	// (0x000191b4) aid_fep_china_hwr2_fs_cell

0xd77f,	// (0x000191c6) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd77f,	// (0x000191c6) bg_popup_fep_shadow_pane_cp4

0xd796,	// (0x000191dd) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd796,	// (0x000191dd) bg_popup_fep_shadow_pane_cp5

0xd7a8,	// (0x000191ef) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd7a8,	// (0x000191ef) popup_fep_china_hwr2_fs_control_bar_grid

0xd7b8,	// (0x000191ff) popup_fep_china_hwr2_fs_control_funtion_grid

0xd7c0,	// (0x00019207) aid_fep_china_hwr2_fs_candi_cell

0x3b70,	// (0x0000f5b7) bg_popup_fep_shadow_pane_cp6

0xd7ca,	// (0x00019211) popup_fep_china_hwr2_fs_candidate_grid

0xd7d4,	// (0x0001921b) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd7d4,	// (0x0001921b) cell_fep_china_hwr2_fs_funtion_grid

0xbcef,	// (0x00017736) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd7ec,	// (0x00019233) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd7ec,	// (0x00019233) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd7fa,	// (0x00019241) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd7fa,	// (0x00019241) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfcf7,	// (0x0001b73e) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfcf7,	// (0x0001b73e) cell_fep_china_hwr2_fs_funtion_grid_g

0xd810,	// (0x00019257) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd810,	// (0x00019257) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd825,	// (0x0001926c) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd825,	// (0x0001926c) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfcfc,	// (0x0001b743) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfcfc,	// (0x0001b743) cell_fep_china_hwr2_fs_funtion_grid_t

0xd841,	// (0x00019288) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd849,	// (0x00019290) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd851,	// (0x00019298) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd01,	// (0x0001b748) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd859,	// (0x000192a0) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd859,	// (0x000192a0) cell_fep_china_hwr2_fs_candidate_grid

0xd872,	// (0x000192b9) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd87a,	// (0x000192c1) popup_fep_china_hwr2_fs_candidate_grid_g21

0xbcef,	// (0x00017736) cell_fep_china_hwr2_fs_candidate_grid_g1

0xbcef,	// (0x00017736) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb15,	// (0x0001b55c) cell_fep_china_hwr2_fs_candidate_grid_g

0xd882,	// (0x000192c9) cell_fep_china_hwr2_fs_candidate_grid_t1

0x8d51,	// (0x00014798) clock_nsta_pane_cp_24_ParamLimits

0x8d51,	// (0x00014798) clock_nsta_pane_cp_24

0x8dcf,	// (0x00014816) indicator_nsta_pane_cp_24_ParamLimits

0x8dcf,	// (0x00014816) indicator_nsta_pane_cp_24

0x9f6b,	// (0x000159b2) heading_pane_g1

0x0001,

0xf89c,	// (0x0001b2e3) heading_pane_g

0xaaa8,	// (0x000164ef) grid_sct_catagory_button_pane

0xaad8,	// (0x0001651f) scroll_pane_cp5_ParamLimits

0xb89d,	// (0x000172e4) button_value_adjust_pane_cp5_ParamLimits

0xb89d,	// (0x000172e4) button_value_adjust_pane_cp5

0xb999,	// (0x000173e0) form2_midp_time_pane_ParamLimits

0xd890,	// (0x000192d7) cell_sct_catagory_button_pane_ParamLimits

0xd890,	// (0x000192d7) cell_sct_catagory_button_pane

0xbcb4,	// (0x000176fb) bg_button_pane_cp01_ParamLimits

0xbcb4,	// (0x000176fb) bg_button_pane_cp01

0xbcef,	// (0x00017736) cell_sct_catagory_button_pane_g1

0x5484,	// (0x00010ecb) popup_tb_extension_window

0xd8a2,	// (0x000192e9) aid_size_cell_ext_ParamLimits

0xd8a2,	// (0x000192e9) aid_size_cell_ext

0x6ef1,	// (0x00012938) bg_tb_trans_pane_cp1_ParamLimits

0x6ef1,	// (0x00012938) bg_tb_trans_pane_cp1

0xd8c2,	// (0x00019309) grid_tb_ext_pane_ParamLimits

0xd8c2,	// (0x00019309) grid_tb_ext_pane

0xd8f0,	// (0x00019337) cell_tb_ext_pane_ParamLimits

0xd8f0,	// (0x00019337) cell_tb_ext_pane

0xd928,	// (0x0001936f) cell_tb_ext_pane_g1_ParamLimits

0xd928,	// (0x0001936f) cell_tb_ext_pane_g1

0xd945,	// (0x0001938c) cell_tb_ext_pane_t1

0x6ef1,	// (0x00012938) list_highlight_pane_cp11_ParamLimits

0x6ef1,	// (0x00012938) list_highlight_pane_cp11

0x489b,	// (0x000102e2) popup_uni_indicator_window_ParamLimits

0x489b,	// (0x000102e2) popup_uni_indicator_window

0x7a4c,	// (0x00013493) bg_popup_sub_pane_cp14

0xd960,	// (0x000193a7) list_uniindi_pane

0xd96c,	// (0x000193b3) uniindi_top_pane

0x6ef1,	// (0x00012938) bg_uniindi_top_pane

0xd98b,	// (0x000193d2) uniindi_top_pane_g1

0xd9a1,	// (0x000193e8) uniindi_top_pane_g2

0x0003,

0xfd08,	// (0x0001b74f) uniindi_top_pane_g

0xd9cb,	// (0x00019412) uniindi_top_pane_t1

0xd9f5,	// (0x0001943c) list_single_uniindi_pane_ParamLimits

0xd9f5,	// (0x0001943c) list_single_uniindi_pane

0xbcef,	// (0x00017736) bg_uniindi_top_pane_g1

0xda08,	// (0x0001944f) list_single_uniindi_pane_g1

0xda1b,	// (0x00019462) list_single_uniindi_pane_t1

0x4711,	// (0x00010158) control_bg_pane

0xda40,	// (0x00019487) bg_sctrl_sk_pane_cp1

0xda49,	// (0x00019490) bg_sctrl_sk_pane_cp2

0xda52,	// (0x00019499) control_bg_pane_g1

0xda5b,	// (0x000194a2) control_bg_pane_g2

0x0001,

0xfd11,	// (0x0001b758) control_bg_pane_g

0xb6e7,	// (0x0001712e) cell_indicator_nsta_pane_g1_ParamLimits

0xb6f5,	// (0x0001713c) cell_indicator_nsta_pane_g2_ParamLimits

0xfa79,	// (0x0001b4c0) cell_indicator_nsta_pane_g_ParamLimits

0xba21,	// (0x00017468) form2_midp_time_pane_t1_ParamLimits

0x5014,	// (0x00010a5b) main_idle_act4_pane_ParamLimits

0x5014,	// (0x00010a5b) main_idle_act4_pane

0x5484,	// (0x00010ecb) popup_tb_extension_window_ParamLimits

0xd8e0,	// (0x00019327) tb_ext_find_pane_ParamLimits

0xd8e0,	// (0x00019327) tb_ext_find_pane

0xda64,	// (0x000194ab) ai_gene_pane_1_cp1

0x8a44,	// (0x0001448b) ai_gene_pane_2_cp1

0xda6c,	// (0x000194b3) list_single_idle_plugin_calendar_pane

0xda75,	// (0x000194bc) list_single_idle_plugin_notification_pane

0xda7e,	// (0x000194c5) list_single_idle_plugin_player_pane

0xda87,	// (0x000194ce) list_single_idle_plugin_shortcut_pane_ParamLimits

0xda87,	// (0x000194ce) list_single_idle_plugin_shortcut_pane

0xdaa9,	// (0x000194f0) main_idle_act4_pane_t1

0xdabb,	// (0x00019502) main_idle_act4_pane_t2

0x0001,

0xfd16,	// (0x0001b75d) main_idle_act4_pane_t

0xdacd,	// (0x00019514) middle_sk_idle_act4_pane_ParamLimits

0xdacd,	// (0x00019514) middle_sk_idle_act4_pane

0xdae3,	// (0x0001952a) popup_clock_digital_analogue_window_cp2

0xdafd,	// (0x00019544) shortcut_wheel_idle_act4_pane_ParamLimits

0xdafd,	// (0x00019544) shortcut_wheel_idle_act4_pane

0xbcef,	// (0x00017736) shortcut_wheel_idle_act4_pane_g1

0xbcef,	// (0x00017736) shortcut_wheel_idle_act4_pane_g2

0xbcef,	// (0x00017736) shortcut_wheel_idle_act4_pane_g3

0xbcef,	// (0x00017736) shortcut_wheel_idle_act4_pane_g4

0xbcef,	// (0x00017736) shortcut_wheel_idle_act4_pane_g5

0xdb11,	// (0x00019558) shortcut_wheel_idle_act4_pane_g6

0xdb19,	// (0x00019560) shortcut_wheel_idle_act4_pane_g7

0xdb21,	// (0x00019568) shortcut_wheel_idle_act4_pane_g8

0xdb29,	// (0x00019570) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd1b,	// (0x0001b762) shortcut_wheel_idle_act4_pane_g

0xbf6d,	// (0x000179b4) middle_sk_idle_act4_pane_g1_ParamLimits

0xbf6d,	// (0x000179b4) middle_sk_idle_act4_pane_g1

0xdb8d,	// (0x000195d4) middle_sk_idle_act4_pane_g2_ParamLimits

0xdb8d,	// (0x000195d4) middle_sk_idle_act4_pane_g2

0x0001,

0xfd3e,	// (0x0001b785) middle_sk_idle_act4_pane_g_ParamLimits

0xfd3e,	// (0x0001b785) middle_sk_idle_act4_pane_g

0xdb99,	// (0x000195e0) middle_sk_idle_act4_pane_t1_ParamLimits

0xdb99,	// (0x000195e0) middle_sk_idle_act4_pane_t1

0xdbb6,	// (0x000195fd) grid_ai_shortcut_pane_ParamLimits

0xdbb6,	// (0x000195fd) grid_ai_shortcut_pane

0xdbcf,	// (0x00019616) list_highlight_pane_cp16_ParamLimits

0xdbcf,	// (0x00019616) list_highlight_pane_cp16

0xdbdc,	// (0x00019623) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdbdc,	// (0x00019623) list_single_idle_plugin_shortcut_pane_g1

0xdbe8,	// (0x0001962f) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdbe8,	// (0x0001962f) list_single_idle_plugin_shortcut_pane_g2

0xdc00,	// (0x00019647) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdc00,	// (0x00019647) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd43,	// (0x0001b78a) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd43,	// (0x0001b78a) list_single_idle_plugin_shortcut_pane_g

0xdc13,	// (0x0001965a) cell_ai_shortcut_pane_ParamLimits

0xdc13,	// (0x0001965a) cell_ai_shortcut_pane

0xdc37,	// (0x0001967e) cell_ai_shortcut_pane_g1_ParamLimits

0xdc37,	// (0x0001967e) cell_ai_shortcut_pane_g1

0xda64,	// (0x000194ab) ai_gene_pane_1_cp2

0xdc59,	// (0x000196a0) ai_gene_pane_2_cp2

0xdc61,	// (0x000196a8) list_highlight_pane_cp15

0xdc6a,	// (0x000196b1) list_single_idle_plugin_calendar_pane_g1

0xdc61,	// (0x000196a8) list_highlight_pane_cp17

0xdc72,	// (0x000196b9) list_single_idle_plugin_calendar_pane_g1_copy1

0xdc7a,	// (0x000196c1) list_single_idle_plugin_player_pane_g1

0xad01,	// (0x00016748) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd4a,	// (0x0001b791) list_single_idle_plugin_player_pane_g

0xdc82,	// (0x000196c9) list_single_idle_plugin_player_pane_t1

0xdc90,	// (0x000196d7) list_single_idle_plugin_player_pane_t2

0xdc9e,	// (0x000196e5) list_single_idle_plugin_player_pane_t3

0xdcac,	// (0x000196f3) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd4f,	// (0x0001b796) list_single_idle_plugin_player_pane_t

0xdcba,	// (0x00019701) wait_bar_pane_cp15

0xdcc2,	// (0x00019709) grid_ai_notification_pane

0xad01,	// (0x00016748) list_single_idle_plugin_notification_pane_g1

0xdccb,	// (0x00019712) cell_ai_notification_pane_ParamLimits

0xdccb,	// (0x00019712) cell_ai_notification_pane

0xdcd8,	// (0x0001971f) cell_ai_notification_pane_g1

0xdce0,	// (0x00019727) cell_ai_notification_pane_t1

0xdcee,	// (0x00019735) tb_ext_find_button_pane

0xdcf6,	// (0x0001973d) tb_ext_find_pane_g1

0xdcfe,	// (0x00019745) tb_ext_find_pane_t1

0x8264,	// (0x00013cab) tb_ext_find_button_pane_g1

0xdd0c,	// (0x00019753) tb_ext_find_button_pane_g2

0x0001,

0xfd58,	// (0x0001b79f) tb_ext_find_button_pane_g

0xdaa9,	// (0x000194f0) main_idle_act4_pane_t1_ParamLimits

0xdabb,	// (0x00019502) main_idle_act4_pane_t2_ParamLimits

0xfd16,	// (0x0001b75d) main_idle_act4_pane_t_ParamLimits

0xdae3,	// (0x0001952a) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdaf1,	// (0x00019538) sat_plugin_idle_act4_pane_ParamLimits

0xdaf1,	// (0x00019538) sat_plugin_idle_act4_pane

0xdd15,	// (0x0001975c) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdd15,	// (0x0001975c) sat_plugin_idle_act4_pane_t1

0xdd28,	// (0x0001976f) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdd28,	// (0x0001976f) sat_plugin_idle_act4_pane_t2

0xdd3b,	// (0x00019782) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdd3b,	// (0x00019782) sat_plugin_idle_act4_pane_t3

0xdd4e,	// (0x00019795) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdd4e,	// (0x00019795) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd5d,	// (0x0001b7a4) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd5d,	// (0x0001b7a4) sat_plugin_idle_act4_pane_t

0x47d6,	// (0x0001021d) popup_battery_window_ParamLimits

0x47d6,	// (0x0001021d) popup_battery_window

0x6ef1,	// (0x00012938) bg_popup_sub_pane_cp25_ParamLimits

0x6ef1,	// (0x00012938) bg_popup_sub_pane_cp25

0xdd61,	// (0x000197a8) popup_battery_window_g1_ParamLimits

0xdd61,	// (0x000197a8) popup_battery_window_g1

0xdd6d,	// (0x000197b4) popup_battery_window_t1_ParamLimits

0xdd6d,	// (0x000197b4) popup_battery_window_t1

0xdd7f,	// (0x000197c6) popup_battery_window_t2_ParamLimits

0xdd7f,	// (0x000197c6) popup_battery_window_t2

0x0001,

0xfd66,	// (0x0001b7ad) popup_battery_window_t_ParamLimits

0xfd66,	// (0x0001b7ad) popup_battery_window_t

0x8911,	// (0x00014358) midp_canvas_pane_ParamLimits

0x8988,	// (0x000143cf) midp_keypad_pane_ParamLimits

0x8988,	// (0x000143cf) midp_keypad_pane

0x8c29,	// (0x00014670) main_midp_pane_ParamLimits

0xb761,	// (0x000171a8) signal_pane_g2_cp_ParamLimits

0xdd9c,	// (0x000197e3) aid_size_cell_midp_keypad_ParamLimits

0xdd9c,	// (0x000197e3) aid_size_cell_midp_keypad

0xddb6,	// (0x000197fd) midp_keyp_game_grid_pane_ParamLimits

0xddb6,	// (0x000197fd) midp_keyp_game_grid_pane

0xddd6,	// (0x0001981d) midp_keyp_rocker_pane_ParamLimits

0xddd6,	// (0x0001981d) midp_keyp_rocker_pane

0xde0f,	// (0x00019856) midp_keyp_sk_left_pane_ParamLimits

0xde0f,	// (0x00019856) midp_keyp_sk_left_pane

0xde69,	// (0x000198b0) midp_keyp_sk_right_pane_ParamLimits

0xde69,	// (0x000198b0) midp_keyp_sk_right_pane

0x3b70,	// (0x0000f5b7) bg_button_pane_cp03

0xdec3,	// (0x0001990a) midp_keyp_sk_left_pane_g1

0x3b70,	// (0x0000f5b7) bg_button_pane_cp04

0xdec3,	// (0x0001990a) midp_keyp_sk_right_pane_g1

0xbcef,	// (0x00017736) midp_keyp_rocker_pane_g1

0xdecc,	// (0x00019913) keyp_game_cell_pane_ParamLimits

0xdecc,	// (0x00019913) keyp_game_cell_pane

0x3b70,	// (0x0000f5b7) bg_button_pane_cp02

0xdedf,	// (0x00019926) keyp_game_cell_pane_g1

0x481a,	// (0x00010261) popup_fep_vkb2_window_ParamLimits

0x481a,	// (0x00010261) popup_fep_vkb2_window

0x5fe1,	// (0x00011a28) aid_size_cell_vkb2_ParamLimits

0x5fe1,	// (0x00011a28) aid_size_cell_vkb2

0x6035,	// (0x00011a7c) popup_fep_vkb2_window_g1_ParamLimits

0x6035,	// (0x00011a7c) popup_fep_vkb2_window_g1

0x607d,	// (0x00011ac4) vkb2_area_bottom_pane_ParamLimits

0x607d,	// (0x00011ac4) vkb2_area_bottom_pane

0x60c9,	// (0x00011b10) vkb2_area_keypad_pane_ParamLimits

0x60c9,	// (0x00011b10) vkb2_area_keypad_pane

0x610b,	// (0x00011b52) vkb2_area_top_pane_ParamLimits

0x610b,	// (0x00011b52) vkb2_area_top_pane

0x6185,	// (0x00011bcc) vkb2_top_entry_pane_ParamLimits

0x6185,	// (0x00011bcc) vkb2_top_entry_pane

0x61af,	// (0x00011bf6) vkb2_top_grid_left_pane_ParamLimits

0x61af,	// (0x00011bf6) vkb2_top_grid_left_pane

0x61cd,	// (0x00011c14) vkb2_top_grid_right_pane_ParamLimits

0x61cd,	// (0x00011c14) vkb2_top_grid_right_pane

0x61eb,	// (0x00011c32) vkb2_cell_keypad_pane_ParamLimits

0x61eb,	// (0x00011c32) vkb2_cell_keypad_pane

0x62bc,	// (0x00011d03) vkb2_area_bottom_grid_pane_ParamLimits

0x62bc,	// (0x00011d03) vkb2_area_bottom_grid_pane

0x62e2,	// (0x00011d29) vkb2_area_bottom_pane_g1_ParamLimits

0x62e2,	// (0x00011d29) vkb2_area_bottom_pane_g1

0x6306,	// (0x00011d4d) vkb2_area_bottom_pane_g2_ParamLimits

0x6306,	// (0x00011d4d) vkb2_area_bottom_pane_g2

0x6334,	// (0x00011d7b) vkb2_area_bottom_pane_g3_ParamLimits

0x6334,	// (0x00011d7b) vkb2_area_bottom_pane_g3

0x0002,

0xfd6b,	// (0x0001b7b2) vkb2_area_bottom_pane_g_ParamLimits

0xfd6b,	// (0x0001b7b2) vkb2_area_bottom_pane_g

0x6395,	// (0x00011ddc) vkb2_top_cell_left_pane_ParamLimits

0x6395,	// (0x00011ddc) vkb2_top_cell_left_pane

0xdef0,	// (0x00019937) vkb2_top_entry_pane_g1_ParamLimits

0xdef0,	// (0x00019937) vkb2_top_entry_pane_g1

0xdefe,	// (0x00019945) vkb2_top_entry_pane_t1_ParamLimits

0xdefe,	// (0x00019945) vkb2_top_entry_pane_t1

0xdf30,	// (0x00019977) vkb2_top_entry_pane_t2_ParamLimits

0xdf30,	// (0x00019977) vkb2_top_entry_pane_t2

0xdf62,	// (0x000199a9) vkb2_top_entry_pane_t3_ParamLimits

0xdf62,	// (0x000199a9) vkb2_top_entry_pane_t3

0x0002,

0xfd72,	// (0x0001b7b9) vkb2_top_entry_pane_t_ParamLimits

0xfd72,	// (0x0001b7b9) vkb2_top_entry_pane_t

0x63e2,	// (0x00011e29) vkb2_top_grid_right_pane_g1_ParamLimits

0x63e2,	// (0x00011e29) vkb2_top_grid_right_pane_g1

0x63f8,	// (0x00011e3f) vkb2_top_grid_right_pane_g2_ParamLimits

0x63f8,	// (0x00011e3f) vkb2_top_grid_right_pane_g2

0x6410,	// (0x00011e57) vkb2_top_grid_right_pane_g3_ParamLimits

0x6410,	// (0x00011e57) vkb2_top_grid_right_pane_g3

0x6428,	// (0x00011e6f) vkb2_top_grid_right_pane_g4_ParamLimits

0x6428,	// (0x00011e6f) vkb2_top_grid_right_pane_g4

0x0003,

0xfd79,	// (0x0001b7c0) vkb2_top_grid_right_pane_g_ParamLimits

0xfd79,	// (0x0001b7c0) vkb2_top_grid_right_pane_g

0x643e,	// (0x00011e85) vkb2_top_cell_left_pane_g1

0x6455,	// (0x00011e9c) vkb2_cell_keypad_pane_g1_ParamLimits

0x6455,	// (0x00011e9c) vkb2_cell_keypad_pane_g1

0xdf86,	// (0x000199cd) vkb2_cell_keypad_pane_t1_ParamLimits

0xdf86,	// (0x000199cd) vkb2_cell_keypad_pane_t1

0x6463,	// (0x00011eaa) vkb2_cell_bottom_grid_pane_ParamLimits

0x6463,	// (0x00011eaa) vkb2_cell_bottom_grid_pane

0x649c,	// (0x00011ee3) vkb2_cell_bottom_grid_pane_g1

0xdb31,	// (0x00019578) aid_call2_pane_cp02

0xdb39,	// (0x00019580) aid_call_pane_cp02

0xdb41,	// (0x00019588) clock_digital_number_pane_cp10

0xdb49,	// (0x00019590) clock_digital_number_pane_cp11

0xdb51,	// (0x00019598) clock_digital_number_pane_cp12

0xdb59,	// (0x000195a0) clock_digital_number_pane_cp13

0xdb61,	// (0x000195a8) clock_digital_separator_pane_cp10

0x8264,	// (0x00013cab) popup_clock_digital_analogue_window_cp2_g1

0x8264,	// (0x00013cab) popup_clock_digital_analogue_window_cp2_g2

0xdb69,	// (0x000195b0) popup_clock_digital_analogue_window_cp2_g3

0x8264,	// (0x00013cab) popup_clock_digital_analogue_window_cp2_g4

0xdb69,	// (0x000195b0) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd2e,	// (0x0001b775) popup_clock_digital_analogue_window_cp2_g

0xdb71,	// (0x000195b8) popup_clock_digital_analogue_window_cp2_t1

0xdb7f,	// (0x000195c6) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd39,	// (0x0001b780) popup_clock_digital_analogue_window_cp2_t

0xbcef,	// (0x00017736) clock_digital_number_pane_cp10_g1

0xbcef,	// (0x00017736) clock_digital_number_pane_cp10_g2

0x0001,

0xfb15,	// (0x0001b55c) clock_digital_number_pane_cp10_g

0xbcef,	// (0x00017736) clock_digital_separator_pane_cp10_g1

0xbcef,	// (0x00017736) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb15,	// (0x0001b55c) clock_digital_separator_pane_cp10_g

0xd9ad,	// (0x000193f4) uniindi_top_pane_g3

0xd9be,	// (0x00019405) uniindi_top_pane_g4

0x6276,	// (0x00011cbd) vkb2_row_keypad_pane_ParamLimits

0x6276,	// (0x00011cbd) vkb2_row_keypad_pane

0x64b8,	// (0x00011eff) vkb2_cell_t_keypad_pane_ParamLimits

0x64b8,	// (0x00011eff) vkb2_cell_t_keypad_pane

0x64c8,	// (0x00011f0f) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x64c8,	// (0x00011f0f) vkb2_cell_t_keypad_pane_cp08

0x64db,	// (0x00011f22) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x64db,	// (0x00011f22) vkb2_cell_t_keypad_pane_cp09

0x64ef,	// (0x00011f36) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x64ef,	// (0x00011f36) vkb2_cell_t_keypad_pane_cp01

0x6500,	// (0x00011f47) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x6500,	// (0x00011f47) vkb2_cell_t_keypad_pane_cp02

0x6511,	// (0x00011f58) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x6511,	// (0x00011f58) vkb2_cell_t_keypad_pane_cp03

0x6522,	// (0x00011f69) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x6522,	// (0x00011f69) vkb2_cell_t_keypad_pane_cp04

0x6533,	// (0x00011f7a) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x6533,	// (0x00011f7a) vkb2_cell_t_keypad_pane_cp05

0x6544,	// (0x00011f8b) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x6544,	// (0x00011f8b) vkb2_cell_t_keypad_pane_cp06

0x6555,	// (0x00011f9c) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x6555,	// (0x00011f9c) vkb2_cell_t_keypad_pane_cp07

0x6566,	// (0x00011fad) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x6566,	// (0x00011fad) vkb2_cell_t_keypad_pane_cp10

0x5d1c,	// (0x00011763) vkb2_cell_t_keypad_pane_g1

0xdf9d,	// (0x000199e4) vkb2_cell_t_keypad_pane_t1

0x4711,	// (0x00010158) popup_grid_graphic2_window

0xdfaf,	// (0x000199f6) aid_size_cell_graphic2_ParamLimits

0xdfaf,	// (0x000199f6) aid_size_cell_graphic2

0xdfe7,	// (0x00019a2e) bg_popup_window_pane_cp21_ParamLimits

0xdfe7,	// (0x00019a2e) bg_popup_window_pane_cp21

0xdff5,	// (0x00019a3c) graphic2_pages_pane_ParamLimits

0xdff5,	// (0x00019a3c) graphic2_pages_pane

0xe03b,	// (0x00019a82) grid_graphic2_control_pane_ParamLimits

0xe03b,	// (0x00019a82) grid_graphic2_control_pane

0xe079,	// (0x00019ac0) grid_graphic2_pane_ParamLimits

0xe079,	// (0x00019ac0) grid_graphic2_pane

0xe0ed,	// (0x00019b34) cell_graphic2_pane

0x4711,	// (0x00010158) main_comp_mode_pane

0xd195,	// (0x00018bdc) list_ai3_gene_pane_ParamLimits

0xd5ce,	// (0x00019015) bg_popup_window_pane_cp19_ParamLimits

0xd5da,	// (0x00019021) bg_touch_area_indi_pane_ParamLimits

0xd5da,	// (0x00019021) bg_touch_area_indi_pane

0xd5f0,	// (0x00019037) bg_touch_area_indi_pane_cp01_ParamLimits

0xd5f0,	// (0x00019037) bg_touch_area_indi_pane_cp01

0xd606,	// (0x0001904d) bg_touch_area_indi_pane_cp02_ParamLimits

0xd606,	// (0x0001904d) bg_touch_area_indi_pane_cp02

0xd61c,	// (0x00019063) bg_touch_area_indi_pane_cp03_ParamLimits

0xd61c,	// (0x00019063) bg_touch_area_indi_pane_cp03

0xd636,	// (0x0001907d) popup_slider_window_g1_ParamLimits

0xd652,	// (0x00019099) popup_slider_window_g2_ParamLimits

0xd66e,	// (0x000190b5) popup_slider_window_g3_ParamLimits

0xfcc3,	// (0x0001b70a) popup_slider_window_g_ParamLimits

0xd6d4,	// (0x0001911b) popup_slider_window_t1_ParamLimits

0xd748,	// (0x0001918f) small_volume_slider_vertical_pane_ParamLimits

0xe0ed,	// (0x00019b34) cell_graphic2_pane_ParamLimits

0xe13c,	// (0x00019b83) bg_button_pane_cp10_ParamLimits

0xe13c,	// (0x00019b83) bg_button_pane_cp10

0xe14f,	// (0x00019b96) bg_button_pane_cp11_ParamLimits

0xe14f,	// (0x00019b96) bg_button_pane_cp11

0xe162,	// (0x00019ba9) graphic2_pages_pane_g1_ParamLimits

0xe162,	// (0x00019ba9) graphic2_pages_pane_g1

0xe17d,	// (0x00019bc4) graphic2_pages_pane_g2_ParamLimits

0xe17d,	// (0x00019bc4) graphic2_pages_pane_g2

0x0001,

0xfd87,	// (0x0001b7ce) graphic2_pages_pane_g_ParamLimits

0xfd87,	// (0x0001b7ce) graphic2_pages_pane_g

0xe195,	// (0x00019bdc) graphic2_pages_pane_t1_ParamLimits

0xe195,	// (0x00019bdc) graphic2_pages_pane_t1

0xe1ad,	// (0x00019bf4) cell_graphic2_control_pane_ParamLimits

0xe1ad,	// (0x00019bf4) cell_graphic2_control_pane

0xe1cb,	// (0x00019c12) cell_graphic2_pane_g1_ParamLimits

0xe1cb,	// (0x00019c12) cell_graphic2_pane_g1

0xe1d8,	// (0x00019c1f) cell_graphic2_pane_g2_ParamLimits

0xe1d8,	// (0x00019c1f) cell_graphic2_pane_g2

0xe1e5,	// (0x00019c2c) cell_graphic2_pane_g3_ParamLimits

0xe1e5,	// (0x00019c2c) cell_graphic2_pane_g3

0xe1f2,	// (0x00019c39) cell_graphic2_pane_g4_ParamLimits

0xe1f2,	// (0x00019c39) cell_graphic2_pane_g4

0xe1ff,	// (0x00019c46) cell_graphic2_pane_g5_ParamLimits

0xe1ff,	// (0x00019c46) cell_graphic2_pane_g5

0x0004,

0xfd8c,	// (0x0001b7d3) cell_graphic2_pane_g_ParamLimits

0xfd8c,	// (0x0001b7d3) cell_graphic2_pane_g

0xe218,	// (0x00019c5f) cell_graphic2_pane_t1_ParamLimits

0xe218,	// (0x00019c5f) cell_graphic2_pane_t1

0x9293,	// (0x00014cda) grid_highlight_pane_cp11_ParamLimits

0x9293,	// (0x00014cda) grid_highlight_pane_cp11

0x6ef1,	// (0x00012938) bg_button_pane_cp05

0xe24e,	// (0x00019c95) cell_graphic2_control_pane_g1

0xbcef,	// (0x00017736) bg_touch_area_indi_pane_g1

0xe276,	// (0x00019cbd) aid_cmod_rocker_key_size

0xe280,	// (0x00019cc7) aid_cmode_itu_key_size

0xe28a,	// (0x00019cd1) main_cmode_video_pane

0xe294,	// (0x00019cdb) main_comp_mode_itu_pane

0xe2a0,	// (0x00019ce7) main_comp_mode_rocker_pane

0xe2ac,	// (0x00019cf3) cell_cmode_rocker_pane_ParamLimits

0xe2ac,	// (0x00019cf3) cell_cmode_rocker_pane

0xe2be,	// (0x00019d05) cell_cmode_itu_pane_ParamLimits

0xe2be,	// (0x00019d05) cell_cmode_itu_pane

0x7a4c,	// (0x00013493) bg_button_pane_cp06_ParamLimits

0x7a4c,	// (0x00013493) bg_button_pane_cp06

0xbf6d,	// (0x000179b4) cell_cmode_rocker_pane_g1_ParamLimits

0xbf6d,	// (0x000179b4) cell_cmode_rocker_pane_g1

0xd7ec,	// (0x00019233) cell_cmode_rocker_pane_g2_ParamLimits

0xd7ec,	// (0x00019233) cell_cmode_rocker_pane_g2

0x0001,

0xfd9c,	// (0x0001b7e3) cell_cmode_rocker_pane_g_ParamLimits

0xfd9c,	// (0x0001b7e3) cell_cmode_rocker_pane_g

0x3b70,	// (0x0000f5b7) bg_button_pane_cp07

0xe2d3,	// (0x00019d1a) cell_cmode_itu_pane_g1

0xe2dc,	// (0x00019d23) cell_cmode_itu_pane_t1

0xe2ea,	// (0x00019d31) cell_cmode_itu_pane_t2

0x0001,

0xfda1,	// (0x0001b7e8) cell_cmode_itu_pane_t

0xda30,	// (0x00019477) aid_touch_ctrl_left

0xda38,	// (0x0001947f) aid_touch_ctrl_right

0x3b70,	// (0x0000f5b7) compa_mode_pane

0xe2f8,	// (0x00019d3f) aid_cmod_rocker_key_size_cp

0xe302,	// (0x00019d49) aid_cmode_itu_key_size_cp

0xe30c,	// (0x00019d53) compa_mode_pane_g1

0xe314,	// (0x00019d5b) compa_mode_pane_g2

0xe31c,	// (0x00019d63) compa_mode_pane_g3

0x0002,

0xfda6,	// (0x0001b7ed) compa_mode_pane_g

0xe324,	// (0x00019d6b) main_comp_mode_itu_pane_cp

0xe32c,	// (0x00019d73) main_comp_mode_rocker_pane_cp

0xe334,	// (0x00019d7b) cell_cmode_itu_pane_cp_ParamLimits

0xe334,	// (0x00019d7b) cell_cmode_itu_pane_cp

0xe349,	// (0x00019d90) cell_cmode_rocker_pane_cp_ParamLimits

0xe349,	// (0x00019d90) cell_cmode_rocker_pane_cp

0x7a4c,	// (0x00013493) bg_button_pane_cp06_cp_ParamLimits

0x7a4c,	// (0x00013493) bg_button_pane_cp06_cp

0xbf6d,	// (0x000179b4) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xbf6d,	// (0x000179b4) cell_cmode_rocker_pane_g1_cp

0xbcef,	// (0x00017736) cell_cmode_rocker_pane_g2_cp

0x3b70,	// (0x0000f5b7) bg_button_pane_cp07_cp

0xa7bc,	// (0x00016203) cell_cmode_itu_pane_g1_cp

0xe35b,	// (0x00019da2) cell_cmode_itu_pane_t1_cp

0xe35b,	// (0x00019da2) cell_cmode_itu_pane_t2_cp

0xa7a9,	// (0x000161f0) settings_code_pane_cp2

0x6c4e,	// (0x00012695) bg_popup_window_pane_cp3_ParamLimits

0x70f1,	// (0x00012b38) heading_pane_cp3_ParamLimits

0x7100,	// (0x00012b47) listscroll_popup_graphic_pane_ParamLimits

0x5ac5,	// (0x0001150c) fep_hwr_aid_pane_ParamLimits

0x5f3c,	// (0x00011983) aid_touch_sctrl_top_ParamLimits

0x5f57,	// (0x0001199e) sctrl_sk_top_pane_g1_ParamLimits

0x5d1c,	// (0x00011763) sctrl_sk_top_pane_g2_ParamLimits

0xfcdc,	// (0x0001b723) sctrl_sk_top_pane_g_ParamLimits

0x5f64,	// (0x000119ab) sctrl_sk_top_pane_t1_ParamLimits

0x5f3c,	// (0x00011983) aid_touch_sctrl_bottom_ParamLimits

0x5f64,	// (0x000119ab) sctrl_sk_bottom_pane_t1_ParamLimits

0xd979,	// (0x000193c0) aid_area_touch_clock

0x614d,	// (0x00011b94) aid_vkb2_area_top_pane_cell_ParamLimits

0x614d,	// (0x00011b94) aid_vkb2_area_top_pane_cell

0x6298,	// (0x00011cdf) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x6298,	// (0x00011cdf) aid_vkb2_area_bottom_pane_cell

0xdee8,	// (0x0001992f) popup_char_count_window

0xe369,	// (0x00019db0) popup_char_count_window_g1

0xe372,	// (0x00019db9) popup_char_count_window_g2

0xe37b,	// (0x00019dc2) popup_char_count_window_g3

0x0002,

0xfdad,	// (0x0001b7f4) popup_char_count_window_g

0xe384,	// (0x00019dcb) popup_char_count_window_t1

0x6013,	// (0x00011a5a) popup_fep_char_preview_window_ParamLimits

0x6013,	// (0x00011a5a) popup_fep_char_preview_window

0x616b,	// (0x00011bb2) vkb2_top_candi_pane_ParamLimits

0x616b,	// (0x00011bb2) vkb2_top_candi_pane

0xe392,	// (0x00019dd9) cell_vkb2_top_candi_pane_ParamLimits

0xe392,	// (0x00019dd9) cell_vkb2_top_candi_pane

0x657b,	// (0x00011fc2) bg_popup_fep_char_preview_window_ParamLimits

0x657b,	// (0x00011fc2) bg_popup_fep_char_preview_window

0x6589,	// (0x00011fd0) popup_fep_char_preview_window_t1_ParamLimits

0x6589,	// (0x00011fd0) popup_fep_char_preview_window_t1

0xe3df,	// (0x00019e26) bg_popup_fep_char_preview_window_g1

0xe3e7,	// (0x00019e2e) bg_popup_fep_char_preview_window_g2

0xe3ef,	// (0x00019e36) bg_popup_fep_char_preview_window_g3

0xe3f7,	// (0x00019e3e) bg_popup_fep_char_preview_window_g4

0xe3ff,	// (0x00019e46) bg_popup_fep_char_preview_window_g5

0xe407,	// (0x00019e4e) bg_popup_fep_char_preview_window_g6

0xe40f,	// (0x00019e56) bg_popup_fep_char_preview_window_g7

0xe417,	// (0x00019e5e) bg_popup_fep_char_preview_window_g8

0xe41f,	// (0x00019e66) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdb4,	// (0x0001b7fb) bg_popup_fep_char_preview_window_g

0x5d1c,	// (0x00011763) cell_vkb2_top_candi_pane_g1_ParamLimits

0x5d1c,	// (0x00011763) cell_vkb2_top_candi_pane_g1

0x5d2a,	// (0x00011771) cell_vkb2_top_candi_pane_g2_ParamLimits

0x5d2a,	// (0x00011771) cell_vkb2_top_candi_pane_g2

0xd907,	// (0x0001934e) cell_vkb2_top_candi_pane_g3_ParamLimits

0xd907,	// (0x0001934e) cell_vkb2_top_candi_pane_g3

0x65cb,	// (0x00012012) cell_vkb2_top_candi_pane_g4_ParamLimits

0x65cb,	// (0x00012012) cell_vkb2_top_candi_pane_g4

0xc5dd,	// (0x00018024) cell_vkb2_top_candi_pane_g5_ParamLimits

0xc5dd,	// (0x00018024) cell_vkb2_top_candi_pane_g5

0x65ec,	// (0x00012033) cell_vkb2_top_candi_pane_g6_ParamLimits

0x65ec,	// (0x00012033) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdc9,	// (0x0001b810) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdc9,	// (0x0001b810) cell_vkb2_top_candi_pane_g

0x65fa,	// (0x00012041) cell_vkb2_top_candi_pane_t1

0x5925,	// (0x0001136c) aid_size_touch_slider_mark_ParamLimits

0x5925,	// (0x0001136c) aid_size_touch_slider_mark

0xe02b,	// (0x00019a72) grid_graphic2_catg_pane_ParamLimits

0xe02b,	// (0x00019a72) grid_graphic2_catg_pane

0xe0c9,	// (0x00019b10) popup_grid_graphic2_window_t1_ParamLimits

0xe0c9,	// (0x00019b10) popup_grid_graphic2_window_t1

0xe0db,	// (0x00019b22) popup_grid_graphic2_window_t2_ParamLimits

0xe0db,	// (0x00019b22) popup_grid_graphic2_window_t2

0x0001,

0xfd82,	// (0x0001b7c9) popup_grid_graphic2_window_t_ParamLimits

0xfd82,	// (0x0001b7c9) popup_grid_graphic2_window_t

0x6ef1,	// (0x00012938) bg_button_pane_cp05_ParamLimits

0xe24e,	// (0x00019c95) cell_graphic2_control_pane_g1_ParamLimits

0xe427,	// (0x00019e6e) cell_graphic2_catg_pane_ParamLimits

0xe427,	// (0x00019e6e) cell_graphic2_catg_pane

0x3b70,	// (0x0000f5b7) bg_button_pane_cp12

0xe439,	// (0x00019e80) cell_graphic2_catg_pane_g1

0xd945,	// (0x0001938c) cell_tb_ext_pane_t1_ParamLimits

0x63b5,	// (0x00011dfc) vkb2_top_cell_right_narrow_pane_ParamLimits

0x63b5,	// (0x00011dfc) vkb2_top_cell_right_narrow_pane

0x63cd,	// (0x00011e14) vkb2_top_cell_right_wide_pane_ParamLimits

0x63cd,	// (0x00011e14) vkb2_top_cell_right_wide_pane

0x5ab7,	// (0x000114fe) bg_vkb2_func_pane_ParamLimits

0x5ab7,	// (0x000114fe) bg_vkb2_func_pane

0x643e,	// (0x00011e85) vkb2_top_cell_left_pane_g1_ParamLimits

0x5ab7,	// (0x000114fe) bg_vkb2_fuc_pane_cp03_ParamLimits

0x5ab7,	// (0x000114fe) bg_vkb2_fuc_pane_cp03

0x649c,	// (0x00011ee3) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x9179,	// (0x00014bc0) bg_vkb2_func_pane_g1

0x9181,	// (0x00014bc8) bg_vkb2_func_pane_g2

0x9191,	// (0x00014bd8) bg_vkb2_func_pane_g3

0x9189,	// (0x00014bd0) bg_vkb2_func_pane_g4

0x9199,	// (0x00014be0) bg_vkb2_func_pane_g5

0x91a1,	// (0x00014be8) bg_vkb2_func_pane_g6

0x91a9,	// (0x00014bf0) bg_vkb2_func_pane_g7

0x91b1,	// (0x00014bf8) bg_vkb2_func_pane_g8

0x9171,	// (0x00014bb8) bg_vkb2_func_pane_g9

0x0008,

0xfdd6,	// (0x0001b81d) bg_vkb2_func_pane_g

0x5ab7,	// (0x000114fe) bg_vkb2_fuc_pane_cp01_ParamLimits

0x5ab7,	// (0x000114fe) bg_vkb2_fuc_pane_cp01

0x643e,	// (0x00011e85) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x643e,	// (0x00011e85) vkb2_top_cell_right_wide_pane_g1

0x5ab7,	// (0x000114fe) bg_vkb2_fuc_pane_cp02_ParamLimits

0x5ab7,	// (0x000114fe) bg_vkb2_fuc_pane_cp02

0x649c,	// (0x00011ee3) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x649c,	// (0x00011ee3) vkb2_top_cell_right_narrow_pane_g1

0xd548,	// (0x00018f8f) aid_touch_area_decrease_ParamLimits

0xd548,	// (0x00018f8f) aid_touch_area_decrease

0xd56c,	// (0x00018fb3) aid_touch_area_increase_ParamLimits

0xd56c,	// (0x00018fb3) aid_touch_area_increase

0xd584,	// (0x00018fcb) aid_touch_area_mute_ParamLimits

0xd584,	// (0x00018fcb) aid_touch_area_mute

0xd5a0,	// (0x00018fe7) aid_touch_area_slider_ParamLimits

0xd5a0,	// (0x00018fe7) aid_touch_area_slider

0xd68a,	// (0x000190d1) popup_slider_window_g4_ParamLimits

0xd68a,	// (0x000190d1) popup_slider_window_g4

0xd6a2,	// (0x000190e9) popup_slider_window_g5_ParamLimits

0xd6a2,	// (0x000190e9) popup_slider_window_g5

0xd6c4,	// (0x0001910b) popup_slider_window_g6_ParamLimits

0xd6c4,	// (0x0001910b) popup_slider_window_g6

0xd702,	// (0x00019149) popup_slider_window_t2_ParamLimits

0xd702,	// (0x00019149) popup_slider_window_t2

0x0001,

0xfcd0,	// (0x0001b717) popup_slider_window_t_ParamLimits

0xfcd0,	// (0x0001b717) popup_slider_window_t

0xd71a,	// (0x00019161) slider_pane_ParamLimits

0xd71a,	// (0x00019161) slider_pane

0xe442,	// (0x00019e89) slider_pane_g1_ParamLimits

0xe442,	// (0x00019e89) slider_pane_g1

0xe456,	// (0x00019e9d) slider_pane_g2_ParamLimits

0xe456,	// (0x00019e9d) slider_pane_g2

0xe46c,	// (0x00019eb3) slider_pane_g3_ParamLimits

0xe46c,	// (0x00019eb3) slider_pane_g3

0x0003,

0xfde9,	// (0x0001b830) slider_pane_g_ParamLimits

0xfde9,	// (0x0001b830) slider_pane_g

0x54e0,	// (0x00010f27) popup_tb_float_extension_window_ParamLimits

0x54e0,	// (0x00010f27) popup_tb_float_extension_window

0xe498,	// (0x00019edf) aid_size_cell_tb_float_ext

0x3b70,	// (0x0000f5b7) bg_popup_sub_window_cp28

0xe4a4,	// (0x00019eeb) grid_tb_float_ext_pane

0xe4ae,	// (0x00019ef5) cell_tb_float_ext_pane_ParamLimits

0xe4ae,	// (0x00019ef5) cell_tb_float_ext_pane

0xe4c8,	// (0x00019f0f) cell_tb_float_ext_pane_g1

0xe4d1,	// (0x00019f18) grid_highlight_pane_cp12

0x5c06,	// (0x0001164d) cell_last_hwr_side_pane_ParamLimits

0x5c06,	// (0x0001164d) cell_last_hwr_side_pane

0xbcef,	// (0x00017736) cell_last_hwr_side_pane_g1

0xe4da,	// (0x00019f21) cell_last_hwr_side_pane_g2

0x0001,

0xfdf2,	// (0x0001b839) cell_last_hwr_side_pane_g

0x6364,	// (0x00011dab) vkb2_area_bottom_space_btn_pane_ParamLimits

0x6364,	// (0x00011dab) vkb2_area_bottom_space_btn_pane

0x5d1c,	// (0x00011763) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xdf9d,	// (0x000199e4) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x65fa,	// (0x00012041) cell_vkb2_top_candi_pane_t1_ParamLimits

0x6619,	// (0x00012060) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x6619,	// (0x00012060) vkb2_area_bottom_space_btn_pane_g1

0x6653,	// (0x0001209a) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x6653,	// (0x0001209a) vkb2_area_bottom_space_btn_pane_g2

0x6689,	// (0x000120d0) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x6689,	// (0x000120d0) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfdf7,	// (0x0001b83e) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfdf7,	// (0x0001b83e) vkb2_area_bottom_space_btn_pane_g

0x5b7a,	// (0x000115c1) cel_fep_hwr_func_pane_ParamLimits

0x5b7a,	// (0x000115c1) cel_fep_hwr_func_pane

0x5bb6,	// (0x000115fd) cell_hwr_side_button_pane_ParamLimits

0x5bb6,	// (0x000115fd) cell_hwr_side_button_pane

0xd979,	// (0x000193c0) aid_area_touch_clock_ParamLimits

0x6ef1,	// (0x00012938) bg_uniindi_top_pane_ParamLimits

0xd98b,	// (0x000193d2) uniindi_top_pane_g1_ParamLimits

0xd9a1,	// (0x000193e8) uniindi_top_pane_g2_ParamLimits

0xd9ad,	// (0x000193f4) uniindi_top_pane_g3_ParamLimits

0xd9be,	// (0x00019405) uniindi_top_pane_g4_ParamLimits

0xfd08,	// (0x0001b74f) uniindi_top_pane_g_ParamLimits

0xd9cb,	// (0x00019412) uniindi_top_pane_t1_ParamLimits

0x6ef1,	// (0x00012938) bg_vkb2_func_pane_cp01_ParamLimits

0x6ef1,	// (0x00012938) bg_vkb2_func_pane_cp01

0xe4e3,	// (0x00019f2a) cel_fep_hwr_func_pane_g1_ParamLimits

0xe4e3,	// (0x00019f2a) cel_fep_hwr_func_pane_g1

0x6ef1,	// (0x00012938) bg_vkb2_func_pane_cp02_ParamLimits

0x6ef1,	// (0x00012938) bg_vkb2_func_pane_cp02

0xe4e3,	// (0x00019f2a) cell_hwr_side_button_pane_g1_ParamLimits

0xe4e3,	// (0x00019f2a) cell_hwr_side_button_pane_g1

0x8fdc,	// (0x00014a23) status_pane_g4_ParamLimits

0x8fdc,	// (0x00014a23) status_pane_g4

0x8ff6,	// (0x00014a3d) status_pane_t1

0xba34,	// (0x0001747b) form2_midp_gauge_slider_cont_pane

0xba3c,	// (0x00017483) form2_midp_gauge_slider_pane_t1_ParamLimits

0xba4e,	// (0x00017495) form2_midp_gauge_slider_pane_t2_ParamLimits

0xba60,	// (0x000174a7) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfac8,	// (0x0001b50f) form2_midp_gauge_slider_pane_t_ParamLimits

0xba72,	// (0x000174b9) form2_midp_slider_pane_ParamLimits

0x5fd3,	// (0x00011a1a) aid_size_cell_func_vkb2_ParamLimits

0x5fd3,	// (0x00011a1a) aid_size_cell_func_vkb2

0xe484,	// (0x00019ecb) slider_pane_g4_ParamLimits

0xe484,	// (0x00019ecb) slider_pane_g4

0x66d3,	// (0x0001211a) form2_midp_gauge_slider_pane_t2_cp01

0x66e1,	// (0x00012128) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x66e1,	// (0x00012128) form2_midp_gauge_slider_pane_t3_cp01

0x66fe,	// (0x00012145) form2_midp_slider_pane_cp01

0x3b70,	// (0x0000f5b7) navi_smil_pane

0xe51c,	// (0x00019f63) navi_smil_pane_g1

0xe524,	// (0x00019f6b) navi_smil_pane_t1

0xe4f1,	// (0x00019f38) form2_midp_slider_pane_g1

0xe4fa,	// (0x00019f41) form2_midp_slider_pane_g2

0xe502,	// (0x00019f49) form2_midp_slider_pane_g3

0xe4f1,	// (0x00019f38) form2_midp_slider_pane_g4

0xe50a,	// (0x00019f51) form2_midp_slider_pane_g5

0x0004,

0xfe00,	// (0x0001b847) form2_midp_slider_pane_g

0x66c3,	// (0x0001210a) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x66c3,	// (0x0001210a) vkb2_area_bottom_space_btn_pane_g4

0x8e0b,	// (0x00014852) lc0_navi_pane_ParamLimits

0x8e0b,	// (0x00014852) lc0_navi_pane

0x8e81,	// (0x000148c8) lc0_stat_indi_pane_ParamLimits

0x8e81,	// (0x000148c8) lc0_stat_indi_pane

0x8e98,	// (0x000148df) ls0_title_pane_ParamLimits

0x8e98,	// (0x000148df) ls0_title_pane

0x7a4c,	// (0x00013493) bg_popup_sub_pane_cp14_ParamLimits

0xd960,	// (0x000193a7) list_uniindi_pane_ParamLimits

0xd96c,	// (0x000193b3) uniindi_top_pane_ParamLimits

0xda08,	// (0x0001944f) list_single_uniindi_pane_g1_ParamLimits

0xda1b,	// (0x00019462) list_single_uniindi_pane_t1_ParamLimits

0x6707,	// (0x0001214e) lc0_stat_clock_pane_ParamLimits

0x6707,	// (0x0001214e) lc0_stat_clock_pane

0xe532,	// (0x00019f79) lc0_stat_indi_pane_g1_ParamLimits

0xe532,	// (0x00019f79) lc0_stat_indi_pane_g1

0xe53f,	// (0x00019f86) lc0_stat_indi_pane_g2_ParamLimits

0xe53f,	// (0x00019f86) lc0_stat_indi_pane_g2

0x0001,

0xfe0b,	// (0x0001b852) lc0_stat_indi_pane_g_ParamLimits

0xfe0b,	// (0x0001b852) lc0_stat_indi_pane_g

0x6714,	// (0x0001215b) lc0_uni_indicator_pane_ParamLimits

0x6714,	// (0x0001215b) lc0_uni_indicator_pane

0xe54c,	// (0x00019f93) ls0_title_pane_g1_ParamLimits

0xe54c,	// (0x00019f93) ls0_title_pane_g1

0xe560,	// (0x00019fa7) ls0_title_pane_t1_ParamLimits

0xe560,	// (0x00019fa7) ls0_title_pane_t1

0x6721,	// (0x00012168) lc0_uni_indicator_pane_g1_ParamLimits

0x6721,	// (0x00012168) lc0_uni_indicator_pane_g1

0xe596,	// (0x00019fdd) lc0_stat_clock_pane_t1

0x4711,	// (0x00010158) main_ai5_pane

0xe5a4,	// (0x00019feb) ai5_sk_pane_ParamLimits

0xe5a4,	// (0x00019feb) ai5_sk_pane

0xe5b1,	// (0x00019ff8) cell_ai5_widget_pane_ParamLimits

0xe5b1,	// (0x00019ff8) cell_ai5_widget_pane

0xe67a,	// (0x0001a0c1) aid_size_cell_widget_grid

0xe690,	// (0x0001a0d7) bg_ai5_widget_pane_ParamLimits

0xe690,	// (0x0001a0d7) bg_ai5_widget_pane

0xe70c,	// (0x0001a153) cell_ai5_widget_pane_g2

0xe720,	// (0x0001a167) cell_ai5_widget_pane_g3

0xe73a,	// (0x0001a181) cell_ai5_widget_pane_g4

0xe74a,	// (0x0001a191) cell_ai5_widget_pane_g5

0xe75a,	// (0x0001a1a1) cell_ai5_widget_pane_g6

0xe766,	// (0x0001a1ad) cell_ai5_widget_pane_g7

0xe7d2,	// (0x0001a219) cell_ai5_widget_pane_t1_ParamLimits

0xe7d2,	// (0x0001a219) cell_ai5_widget_pane_t1

0xe7ef,	// (0x0001a236) cell_ai5_widget_pane_t2_ParamLimits

0xe7ef,	// (0x0001a236) cell_ai5_widget_pane_t2

0xe807,	// (0x0001a24e) cell_ai5_widget_pane_t3_ParamLimits

0xe807,	// (0x0001a24e) cell_ai5_widget_pane_t3

0xe81f,	// (0x0001a266) cell_ai5_widget_pane_t4_ParamLimits

0xe81f,	// (0x0001a266) cell_ai5_widget_pane_t4

0xe845,	// (0x0001a28c) cell_ai5_widget_pane_t5_ParamLimits

0xe845,	// (0x0001a28c) cell_ai5_widget_pane_t5

0xe864,	// (0x0001a2ab) cell_ai5_widget_pane_t6_ParamLimits

0xe864,	// (0x0001a2ab) cell_ai5_widget_pane_t6

0xe876,	// (0x0001a2bd) cell_ai5_widget_pane_t7_ParamLimits

0xe876,	// (0x0001a2bd) cell_ai5_widget_pane_t7

0xe895,	// (0x0001a2dc) cell_ai5_widget_pane_t8_ParamLimits

0xe895,	// (0x0001a2dc) cell_ai5_widget_pane_t8

0x000b,

0xfe2b,	// (0x0001b872) cell_ai5_widget_pane_t_ParamLimits

0xfe2b,	// (0x0001b872) cell_ai5_widget_pane_t

0xe919,	// (0x0001a360) grid_ai5_widget_pane

0x7a4c,	// (0x00013493) highlight_cell_ai5_widget_pane_ParamLimits

0x7a4c,	// (0x00013493) highlight_cell_ai5_widget_pane

0xe930,	// (0x0001a377) ai5_sk_left_pane

0xe93a,	// (0x0001a381) ai5_sk_middle_pane

0xe944,	// (0x0001a38b) ai5_sk_right_pane

0xe94e,	// (0x0001a395) bg_ai5_widget_pane_g1_ParamLimits

0xe94e,	// (0x0001a395) bg_ai5_widget_pane_g1

0xe95a,	// (0x0001a3a1) bg_ai5_widget_pane_g2_ParamLimits

0xe95a,	// (0x0001a3a1) bg_ai5_widget_pane_g2

0xe966,	// (0x0001a3ad) bg_ai5_widget_pane_g3_ParamLimits

0xe966,	// (0x0001a3ad) bg_ai5_widget_pane_g3

0xe972,	// (0x0001a3b9) bg_ai5_widget_pane_g4_ParamLimits

0xe972,	// (0x0001a3b9) bg_ai5_widget_pane_g4

0xe97e,	// (0x0001a3c5) bg_ai5_widget_pane_g5_ParamLimits

0xe97e,	// (0x0001a3c5) bg_ai5_widget_pane_g5

0xe98a,	// (0x0001a3d1) bg_ai5_widget_pane_g6_ParamLimits

0xe98a,	// (0x0001a3d1) bg_ai5_widget_pane_g6

0xe996,	// (0x0001a3dd) bg_ai5_widget_pane_g7_ParamLimits

0xe996,	// (0x0001a3dd) bg_ai5_widget_pane_g7

0xe9a2,	// (0x0001a3e9) bg_ai5_widget_pane_g8_ParamLimits

0xe9a2,	// (0x0001a3e9) bg_ai5_widget_pane_g8

0xe9ae,	// (0x0001a3f5) bg_ai5_widget_pane_g9_ParamLimits

0xe9ae,	// (0x0001a3f5) bg_ai5_widget_pane_g9

0x0008,

0xfe44,	// (0x0001b88b) bg_ai5_widget_pane_g_ParamLimits

0xfe44,	// (0x0001b88b) bg_ai5_widget_pane_g

0xe9e0,	// (0x0001a427) cell_shortcut_ai5_widget_pane_ParamLimits

0xe9e0,	// (0x0001a427) cell_shortcut_ai5_widget_pane

0x88fd,	// (0x00014344) bg_cell_shortcut_ai5_widget_pane

0xe9f1,	// (0x0001a438) cell_grid_ai5_widget_pane_g1

0x88fd,	// (0x00014344) highlight_cell_shortcut_ai5_widget_pane

0x9179,	// (0x00014bc0) ai5_sk_left_pane_g1

0xe9fa,	// (0x0001a441) ai5_sk_left_pane_g2

0xea02,	// (0x0001a449) ai5_sk_left_pane_g3

0xea0a,	// (0x0001a451) ai5_sk_left_pane_g4

0x0003,

0xfe57,	// (0x0001b89e) ai5_sk_left_pane_g

0xea12,	// (0x0001a459) ai5_sk_left_pane_t1

0x9181,	// (0x00014bc8) ai5_sk_right_pane_g1

0xea20,	// (0x0001a467) ai5_sk_right_pane_g2

0xea28,	// (0x0001a46f) ai5_sk_right_pane_g3

0xea30,	// (0x0001a477) ai5_sk_right_pane_g4

0x0003,

0xfe60,	// (0x0001b8a7) ai5_sk_right_pane_g

0xea38,	// (0x0001a47f) ai5_sk_right_pane_t1

0x9181,	// (0x00014bc8) ai5_sk_middle_pane_g1

0x9179,	// (0x00014bc0) ai5_sk_middle_pane_g2

0x9199,	// (0x00014be0) ai5_sk_middle_pane_g3

0xea28,	// (0x0001a46f) ai5_sk_middle_pane_g4

0xea02,	// (0x0001a449) ai5_sk_middle_pane_g5

0xea46,	// (0x0001a48d) ai5_sk_middle_pane_g6

0xea4e,	// (0x0001a495) ai5_sk_middle_pane_g7

0x0006,

0xfe69,	// (0x0001b8b0) ai5_sk_middle_pane_g

0x8c91,	// (0x000146d8) aid_touch_area_size_lc0_ParamLimits

0x8c91,	// (0x000146d8) aid_touch_area_size_lc0

0x5d4b,	// (0x00011792) cell_hwr_candidate_pane_t1_ParamLimits

0x8cad,	// (0x000146f4) aid_touch_navi_pane

0x8f86,	// (0x000149cd) status_dt_navi_pane_ParamLimits

0x8f86,	// (0x000149cd) status_dt_navi_pane

0x8f93,	// (0x000149da) status_dt_sta_pane_ParamLimits

0x8f93,	// (0x000149da) status_dt_sta_pane

0xea56,	// (0x0001a49d) dt_sta_controll_pane

0xea63,	// (0x0001a4aa) dt_sta_indi_pane

0xea74,	// (0x0001a4bb) dt_sta_title_pane

0x6ef1,	// (0x00012938) bg_dt_sta_indi_pane_ParamLimits

0x6ef1,	// (0x00012938) bg_dt_sta_indi_pane

0xea87,	// (0x0001a4ce) dt_sta_battery_pane

0xea8f,	// (0x0001a4d6) dt_sta_indi_pane_g1

0xea98,	// (0x0001a4df) dt_sta_indi_pane_g2

0xeaa1,	// (0x0001a4e8) dt_sta_indi_pane_g3

0x0002,

0xfe78,	// (0x0001b8bf) dt_sta_indi_pane_g

0xeaaa,	// (0x0001a4f1) dt_sta_signal_pane

0x7a4c,	// (0x00013493) bg_dt_sta_title_pane_ParamLimits

0x7a4c,	// (0x00013493) bg_dt_sta_title_pane

0xeab3,	// (0x0001a4fa) dt_sta_title_pane_g1

0xeabb,	// (0x0001a502) dt_sta_title_pane_t1_ParamLimits

0xeabb,	// (0x0001a502) dt_sta_title_pane_t1

0x3b70,	// (0x0000f5b7) bg_dt_sta_control_pane

0xead0,	// (0x0001a517) dt_sta_controll_pane_g1

0xead9,	// (0x0001a520) bg_dt_sta_title_pane_g1

0xeae2,	// (0x0001a529) bg_dt_sta_title_pane_g2

0xeaeb,	// (0x0001a532) bg_dt_sta_title_pane_g3

0x0002,

0xfe7f,	// (0x0001b8c6) bg_dt_sta_title_pane_g

0xbcef,	// (0x00017736) bg_dt_sta_indi_pane_g1

0xeaf4,	// (0x0001a53b) dt_sta_signal_pane_g1

0xeafc,	// (0x0001a543) dt_sta_signal_pane_g2

0x0001,

0xfe86,	// (0x0001b8cd) dt_sta_signal_pane_g

0xeb04,	// (0x0001a54b) dt_sta_battery_pane_g1

0xeb0d,	// (0x0001a554) dt_sta_battery_pane_t1

0xbcef,	// (0x00017736) bg_dt_sta_control_pane_g1

0x8376,	// (0x00013dbd) fep_china_uni_eep_pane

0x837e,	// (0x00013dc5) fep_china_uni_entry_pane_ParamLimits

0x838e,	// (0x00013dd5) popup_fep_china_uni_window_g1_ParamLimits

0x839e,	// (0x00013de5) popup_fep_china_uni_window_g2_ParamLimits

0x839e,	// (0x00013de5) popup_fep_china_uni_window_g2

0x0001,

0xf6f3,	// (0x0001b13a) popup_fep_china_uni_window_g_ParamLimits

0xf6f3,	// (0x0001b13a) popup_fep_china_uni_window_g

0xeb1c,	// (0x0001a563) fep_china_uni_eep_pane_g1

0xeb24,	// (0x0001a56b) fep_china_uni_eep_pane_t1

0xe513,	// (0x00019f5a) aid_touch_area_size_smil_player

0x8e03,	// (0x0001484a) lc0_clock_pane

0x8fea,	// (0x00014a31) status_pane_g5_ParamLimits

0x8fea,	// (0x00014a31) status_pane_g5

0x51a5,	// (0x00010bec) popup_keymap_window

0x8fa8,	// (0x000149ef) status_icon_pane

0xe720,	// (0x0001a167) cell_ai5_widget_pane_g3_ParamLimits

0xe73a,	// (0x0001a181) cell_ai5_widget_pane_g4_ParamLimits

0xe74a,	// (0x0001a191) cell_ai5_widget_pane_g5_ParamLimits

0xe772,	// (0x0001a1b9) cell_ai5_widget_pane_g8_ParamLimits

0xe772,	// (0x0001a1b9) cell_ai5_widget_pane_g8

0xe786,	// (0x0001a1cd) cell_ai5_widget_pane_g9_ParamLimits

0xe786,	// (0x0001a1cd) cell_ai5_widget_pane_g9

0xe79a,	// (0x0001a1e1) cell_ai5_widget_pane_g10_ParamLimits

0xe79a,	// (0x0001a1e1) cell_ai5_widget_pane_g10

0xeb33,	// (0x0001a57a) status_icon_pane_g1

0x3b70,	// (0x0000f5b7) bg_popup_sub_pane_cp13

0xeb3b,	// (0x0001a582) popup_keymap_window_t1

0x8bd2,	// (0x00014619) control_pane_g6_ParamLimits

0x8bd2,	// (0x00014619) control_pane_g6

0x8bdf,	// (0x00014626) control_pane_g7_ParamLimits

0x8bdf,	// (0x00014626) control_pane_g7

0x8bec,	// (0x00014633) control_pane_g8_ParamLimits

0x8bec,	// (0x00014633) control_pane_g8

0xea56,	// (0x0001a49d) dt_sta_controll_pane_ParamLimits

0xea63,	// (0x0001a4aa) dt_sta_indi_pane_ParamLimits

0xea74,	// (0x0001a4bb) dt_sta_title_pane_ParamLimits

0x742d,	// (0x00012e74) aid_size_touch_scroll_bar_cale

0x47ea,	// (0x00010231) popup_discreet_window_ParamLimits

0x47ea,	// (0x00010231) popup_discreet_window

0x4872,	// (0x000102b9) popup_sk_window

0x98eb,	// (0x00015332) bg_popup_sub_pane_cp28_ParamLimits

0x98eb,	// (0x00015332) bg_popup_sub_pane_cp28

0xeb49,	// (0x0001a590) popup_discreet_window_g1_ParamLimits

0xeb49,	// (0x0001a590) popup_discreet_window_g1

0xeb69,	// (0x0001a5b0) popup_discreet_window_t1_ParamLimits

0xeb69,	// (0x0001a5b0) popup_discreet_window_t1

0xeb87,	// (0x0001a5ce) popup_discreet_window_t2_ParamLimits

0xeb87,	// (0x0001a5ce) popup_discreet_window_t2

0x0002,

0xfe8b,	// (0x0001b8d2) popup_discreet_window_t_ParamLimits

0xfe8b,	// (0x0001b8d2) popup_discreet_window_t

0x6735,	// (0x0001217c) popup_sk_window_g1

0x673f,	// (0x00012186) popup_sk_window_g2

0x0001,

0xfe92,	// (0x0001b8d9) popup_sk_window_g

0x6747,	// (0x0001218e) popup_sk_window_t1

0x6755,	// (0x0001219c) popup_sk_window_t1_copy1

0xe70c,	// (0x0001a153) cell_ai5_widget_pane_g2_ParamLimits

0xe8a7,	// (0x0001a2ee) cell_ai5_widget_pane_t9_ParamLimits

0xe8a7,	// (0x0001a2ee) cell_ai5_widget_pane_t9

0x3b70,	// (0x0000f5b7) main_fep_fshwr2_pane

0x6763,	// (0x000121aa) aid_fshwr2_btn_pane

0x676f,	// (0x000121b6) aid_fshwr2_syb_pane

0x6781,	// (0x000121c8) aid_fshwr2_txt_pane

0x678d,	// (0x000121d4) fshwr2_func_candi_pane

0x67a9,	// (0x000121f0) fshwr2_hwr_syb_pane

0x67c3,	// (0x0001220a) fshwr2_icf_pane

0x4711,	// (0x00010158) fshwr2_icf_bg_pane

0x67f1,	// (0x00012238) fshwr2_icf_pane_t1_ParamLimits

0x67f1,	// (0x00012238) fshwr2_icf_pane_t1

0x8264,	// (0x00013cab) fshwr2_func_candi_pane_g1

0xebd9,	// (0x0001a620) fshwr2_func_candi_row_pane_ParamLimits

0xebd9,	// (0x0001a620) fshwr2_func_candi_row_pane

0x6809,	// (0x00012250) cell_fshwr2_syb_pane_ParamLimits

0x6809,	// (0x00012250) cell_fshwr2_syb_pane

0x682c,	// (0x00012273) fshwr2_hwr_syb_pane_g1_ParamLimits

0x682c,	// (0x00012273) fshwr2_hwr_syb_pane_g1

0x4711,	// (0x00010158) bg_popup_call_pane_cp01

0x683a,	// (0x00012281) fshwr2_func_candi_cell_pane_ParamLimits

0x683a,	// (0x00012281) fshwr2_func_candi_cell_pane

0x9f5f,	// (0x000159a6) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x9f5f,	// (0x000159a6) fshwr2_func_candi_cell_bg_pane

0x6885,	// (0x000122cc) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x6885,	// (0x000122cc) fshwr2_func_candi_cell_pane_g1

0x68a5,	// (0x000122ec) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x68a5,	// (0x000122ec) fshwr2_func_candi_cell_pane_t1

0x4711,	// (0x00010158) bg_button_pane_cp08

0x8c29,	// (0x00014670) cell_fshwr2_syb_bg_pane

0x68b8,	// (0x000122ff) cell_fshwr2_syb_bg_pane_g1

0x68cc,	// (0x00012313) cell_fshwr2_syb_bg_pane_t1

0x7a4c,	// (0x00013493) main_tmo_pane

0xa3fa,	// (0x00015e41) uni_indicator_pane_g1_ParamLimits

0xa410,	// (0x00015e57) uni_indicator_pane_g2_ParamLimits

0xa426,	// (0x00015e6d) uni_indicator_pane_g3_ParamLimits

0xa439,	// (0x00015e80) uni_indicator_pane_g4_ParamLimits

0xa439,	// (0x00015e80) uni_indicator_pane_g4

0xa44d,	// (0x00015e94) uni_indicator_pane_g5_ParamLimits

0xa44d,	// (0x00015e94) uni_indicator_pane_g5

0xa44d,	// (0x00015e94) uni_indicator_pane_g6_ParamLimits

0xa44d,	// (0x00015e94) uni_indicator_pane_g6

0xf8f2,	// (0x0001b339) uni_indicator_pane_g_ParamLimits

0xd524,	// (0x00018f6b) popup_tmo_note_window_ParamLimits

0xd524,	// (0x00018f6b) popup_tmo_note_window

0x5fb5,	// (0x000119fc) fshwr2_bg_pane

0x6896,	// (0x000122dd) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x6896,	// (0x000122dd) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe97,	// (0x0001b8de) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe97,	// (0x0001b8de) fshwr2_func_candi_cell_pane_g

0x5d04,	// (0x0001174b) bg_popup_window_pane_cp01

0x68e2,	// (0x00012329) bg_popup_window_pane_g1_cp01

0xec00,	// (0x0001a647) bg_popup_window_pane_cp22_ParamLimits

0xec00,	// (0x0001a647) bg_popup_window_pane_cp22

0xec0e,	// (0x0001a655) listscroll_tmo_link_pane_ParamLimits

0xec0e,	// (0x0001a655) listscroll_tmo_link_pane

0xec4e,	// (0x0001a695) popup_tmo_note_window_g1_ParamLimits

0xec4e,	// (0x0001a695) popup_tmo_note_window_g1

0xec5b,	// (0x0001a6a2) tmo_note_info_pane_ParamLimits

0xec5b,	// (0x0001a6a2) tmo_note_info_pane

0xec75,	// (0x0001a6bc) list_tmo_note_info_pane_g1_ParamLimits

0xec75,	// (0x0001a6bc) list_tmo_note_info_pane_g1

0xec8c,	// (0x0001a6d3) list_tmo_note_info_pane_g2_ParamLimits

0xec8c,	// (0x0001a6d3) list_tmo_note_info_pane_g2

0x0001,

0xfe9c,	// (0x0001b8e3) list_tmo_note_info_pane_g_ParamLimits

0xfe9c,	// (0x0001b8e3) list_tmo_note_info_pane_g

0xeca8,	// (0x0001a6ef) list_tmo_note_info_text_pane_ParamLimits

0xeca8,	// (0x0001a6ef) list_tmo_note_info_text_pane

0xed29,	// (0x0001a770) list_tmo_link_pane

0xed36,	// (0x0001a77d) scroll_pane_cp20

0xed43,	// (0x0001a78a) list_single_tmo_link_pane_ParamLimits

0xed43,	// (0x0001a78a) list_single_tmo_link_pane

0xed53,	// (0x0001a79a) list_single_tmo_link_pane_t1

0xed61,	// (0x0001a7a8) list_tmo_note_info_text_pane_t1_ParamLimits

0xed61,	// (0x0001a7a8) list_tmo_note_info_text_pane_t1

0x7c8b,	// (0x000136d2) aid_size_touch_scroll_bar_cp01_ParamLimits

0x7c8b,	// (0x000136d2) aid_size_touch_scroll_bar_cp01

0x7afb,	// (0x00013542) aid_size_touch_slider_marker

0x485a,	// (0x000102a1) popup_settings_window_ParamLimits

0x485a,	// (0x000102a1) popup_settings_window

0x8c5d,	// (0x000146a4) popup_candi_list_indi_window

0x8cad,	// (0x000146f4) aid_touch_navi_pane_ParamLimits

0x5f10,	// (0x00011957) rs_clock_indi_pane

0x5f19,	// (0x00011960) sctrl_sk_bottom_pane_ParamLimits

0x5f2a,	// (0x00011971) sctrl_sk_top_pane_ParamLimits

0x602d,	// (0x00011a74) popup_fep_tooltip_window

0xe67a,	// (0x0001a0c1) aid_size_cell_widget_grid_ParamLimits

0xe6f7,	// (0x0001a13e) cell_ai5_widget_pane_g1_ParamLimits

0xe6f7,	// (0x0001a13e) cell_ai5_widget_pane_g1

0xe75a,	// (0x0001a1a1) cell_ai5_widget_pane_g6_ParamLimits

0xe766,	// (0x0001a1ad) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe10,	// (0x0001b857) cell_ai5_widget_pane_g_ParamLimits

0xfe10,	// (0x0001b857) cell_ai5_widget_pane_g

0xe8d6,	// (0x0001a31d) cell_ai5_widget_pane_t10_ParamLimits

0xe8d6,	// (0x0001a31d) cell_ai5_widget_pane_t10

0xe919,	// (0x0001a360) grid_ai5_widget_pane_ParamLimits

0xe9ba,	// (0x0001a401) cell_contacts_ai5_widget_pane_ParamLimits

0xe9ba,	// (0x0001a401) cell_contacts_ai5_widget_pane

0xeb9c,	// (0x0001a5e3) popup_discreet_window_t3_ParamLimits

0xeb9c,	// (0x0001a5e3) popup_discreet_window_t3

0x67db,	// (0x00012222) popup_fshwr2_char_preview_window_ParamLimits

0x67db,	// (0x00012222) popup_fshwr2_char_preview_window

0xecc6,	// (0x0001a70d) tmo_note_info_pane_t1

0xecdb,	// (0x0001a722) tmo_note_info_pane_t2

0xecf0,	// (0x0001a737) tmo_note_info_pane_t3

0xed05,	// (0x0001a74c) tmo_note_info_pane_t4

0xed17,	// (0x0001a75e) tmo_note_info_pane_t5

0x0004,

0xfea1,	// (0x0001b8e8) tmo_note_info_pane_t

0xed29,	// (0x0001a770) list_tmo_link_pane_ParamLimits

0xed36,	// (0x0001a77d) scroll_pane_cp20_ParamLimits

0x4711,	// (0x00010158) bg_popup_fep_char_preview_window_cp01

0xed7a,	// (0x0001a7c1) popup_fshwr2_char_preview_window_t1

0xed88,	// (0x0001a7cf) popup_candi_list_indi_window_g1

0xed91,	// (0x0001a7d8) bg_cell_contacts_ai5_widget_pane

0xed9d,	// (0x0001a7e4) cell_contacts_ai5_widget_pane_g1

0xc532,	// (0x00017f79) cell_contacts_ai5_widget_pane_g2

0xedb2,	// (0x0001a7f9) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeac,	// (0x0001b8f3) cell_contacts_ai5_widget_pane_g

0xedbe,	// (0x0001a805) cell_contacts_ai5_widget_pane_t1

0x7a4c,	// (0x00013493) highlight_cell_shortcut_ai5_widget_pane_cp01

0xee35,	// (0x0001a87c) settings_container_pane

0x88fd,	// (0x00014344) listscroll_set_pane_copy1

0xb0c2,	// (0x00016b09) scroll_pane_cp121_copy1

0x9688,	// (0x000150cf) set_content_pane_copy1

0xee41,	// (0x0001a888) aid_height_set_list_copy1_ParamLimits

0xee41,	// (0x0001a888) aid_height_set_list_copy1

0xa657,	// (0x0001609e) aid_size_parent_copy1_ParamLimits

0xa657,	// (0x0001609e) aid_size_parent_copy1

0xee4d,	// (0x0001a894) button_value_adjust_pane_cp6_copy1_ParamLimits

0xee4d,	// (0x0001a894) button_value_adjust_pane_cp6_copy1

0x8c29,	// (0x00014670) list_highlight_pane_cp2_copy1_ParamLimits

0x8c29,	// (0x00014670) list_highlight_pane_cp2_copy1

0xee61,	// (0x0001a8a8) list_set_pane_copy1_ParamLimits

0xee61,	// (0x0001a8a8) list_set_pane_copy1

0xedd0,	// (0x0001a817) main_pane_set_t1_copy1_ParamLimits

0xedd0,	// (0x0001a817) main_pane_set_t1_copy1

0xee0a,	// (0x0001a851) main_pane_set_t2_copy1_ParamLimits

0xee0a,	// (0x0001a851) main_pane_set_t2_copy1

0xef0e,	// (0x0001a955) main_pane_set_t3_copy1

0xef1c,	// (0x0001a963) main_pane_set_t4_copy1

0xee29,	// (0x0001a870) set_content_pane_g1_copy1_ParamLimits

0xee29,	// (0x0001a870) set_content_pane_g1_copy1

0xef2a,	// (0x0001a971) setting_code_pane_copy1

0xef32,	// (0x0001a979) setting_slider_graphic_pane_copy1

0xef32,	// (0x0001a979) setting_slider_pane_copy1

0xef3a,	// (0x0001a981) setting_text_pane_copy1

0xef3a,	// (0x0001a981) setting_volume_pane_copy1

0xef2a,	// (0x0001a971) settings_code_pane_cp2_copy1

0xef42,	// (0x0001a989) settings_code_pane_cp_copy1_ParamLimits

0xef42,	// (0x0001a989) settings_code_pane_cp_copy1

0x68eb,	// (0x00012332) volume_set_pane_copy1

0xef56,	// (0x0001a99d) volume_set_pane_g10_copy1

0xef5e,	// (0x0001a9a5) volume_set_pane_g1_copy1

0xef66,	// (0x0001a9ad) volume_set_pane_g2_copy1

0xef6e,	// (0x0001a9b5) volume_set_pane_g3_copy1

0xef76,	// (0x0001a9bd) volume_set_pane_g4_copy1

0xef7e,	// (0x0001a9c5) volume_set_pane_g5_copy1

0xef86,	// (0x0001a9cd) volume_set_pane_g6_copy1

0xef8e,	// (0x0001a9d5) volume_set_pane_g7_copy1

0xef96,	// (0x0001a9dd) volume_set_pane_g8_copy1

0xef9e,	// (0x0001a9e5) volume_set_pane_g9_copy1

0x6c4e,	// (0x00012695) bg_set_opt_pane_cp_copy1_ParamLimits

0x6c4e,	// (0x00012695) bg_set_opt_pane_cp_copy1

0x68f3,	// (0x0001233a) setting_slider_pane_t1_copy1_ParamLimits

0x68f3,	// (0x0001233a) setting_slider_pane_t1_copy1

0x6912,	// (0x00012359) setting_slider_pane_t2_copy1_ParamLimits

0x6912,	// (0x00012359) setting_slider_pane_t2_copy1

0x692c,	// (0x00012373) setting_slider_pane_t3_copy1_ParamLimits

0x692c,	// (0x00012373) setting_slider_pane_t3_copy1

0x6944,	// (0x0001238b) slider_set_pane_copy1_ParamLimits

0x6944,	// (0x0001238b) slider_set_pane_copy1

0x7b7b,	// (0x000135c2) set_opt_bg_pane_g1_copy2

0x7b83,	// (0x000135ca) set_opt_bg_pane_g2_copy2

0xefa6,	// (0x0001a9ed) set_opt_bg_pane_g3_copy2

0x7b93,	// (0x000135da) set_opt_bg_pane_g4_copy2

0x7b9b,	// (0x000135e2) set_opt_bg_pane_g5_copy2

0x7ba3,	// (0x000135ea) set_opt_bg_pane_g6_copy2

0xefb0,	// (0x0001a9f7) set_opt_bg_pane_g7_copy2

0xefb8,	// (0x0001a9ff) set_opt_bg_pane_g8_copy2

0xefc2,	// (0x0001aa09) set_opt_bg_pane_g9_copy2

0x695a,	// (0x000123a1) aid_size_touch_slider_mark_copy1_ParamLimits

0x695a,	// (0x000123a1) aid_size_touch_slider_mark_copy1

0xefcc,	// (0x0001aa13) slider_set_pane_g1_copy1

0x696e,	// (0x000123b5) slider_set_pane_g2_copy1

0x5945,	// (0x0001138c) slider_set_pane_g3_copy1_ParamLimits

0x5945,	// (0x0001138c) slider_set_pane_g3_copy1

0x5959,	// (0x000113a0) slider_set_pane_g4_copy1_ParamLimits

0x5959,	// (0x000113a0) slider_set_pane_g4_copy1

0x5971,	// (0x000113b8) slider_set_pane_g5_copy1_ParamLimits

0x5971,	// (0x000113b8) slider_set_pane_g5_copy1

0x5945,	// (0x0001138c) slider_set_pane_g6_copy1_ParamLimits

0x5945,	// (0x0001138c) slider_set_pane_g6_copy1

0x6976,	// (0x000123bd) slider_set_pane_g7_copy1_ParamLimits

0x6976,	// (0x000123bd) slider_set_pane_g7_copy1

0x6b6e,	// (0x000125b5) bg_set_opt_pane_cp2_copy1

0xefd5,	// (0x0001aa1c) setting_slider_graphic_pane_g1_copy1

0xefde,	// (0x0001aa25) setting_slider_graphic_pane_t1_copy1

0xefee,	// (0x0001aa35) setting_slider_graphic_pane_t2_copy1

0xeffe,	// (0x0001aa45) slider_set_pane_cp_copy1

0xf00e,	// (0x0001aa55) input_focus_pane_cp1_copy1

0xf017,	// (0x0001aa5e) list_set_text_pane_copy1

0xf01f,	// (0x0001aa66) setting_text_pane_g1_copy1

0x6ca7,	// (0x000126ee) set_text_pane_t1_copy1

0xf00e,	// (0x0001aa55) input_focus_pane_cp2_copy1

0xf01f,	// (0x0001aa66) setting_code_pane_g1_copy1

0xf028,	// (0x0001aa6f) setting_code_pane_t1_copy1

0xaeea,	// (0x00016931) list_set_graphic_pane_copy1

0x6b6e,	// (0x000125b5) bg_set_opt_pane_cp4_copy1

0x8604,	// (0x0001404b) list_set_graphic_pane_g1_copy1_ParamLimits

0x8604,	// (0x0001404b) list_set_graphic_pane_g1_copy1

0xf036,	// (0x0001aa7d) list_set_graphic_pane_g2_copy1

0x861c,	// (0x00014063) list_set_graphic_pane_t1_copy1_ParamLimits

0x861c,	// (0x00014063) list_set_graphic_pane_t1_copy1

0xbcef,	// (0x00017736) rs_clock_indi_pane_g1

0xf03e,	// (0x0001aa85) rs_clock_indi_pane_t1

0xf04c,	// (0x0001aa93) rs_indi_pane

0xf054,	// (0x0001aa9b) rs_indi_pane_g1

0xf05d,	// (0x0001aaa4) rs_indi_pane_g2

0xf066,	// (0x0001aaad) rs_indi_pane_g3

0x0002,

0xfeb3,	// (0x0001b8fa) rs_indi_pane_g

0x88fd,	// (0x00014344) bg_popup_preview_window_pane_cp03

0xf06f,	// (0x0001aab6) popup_fep_tooltip_window_t1

0xcb71,	// (0x000185b8) popup_note2_window_g2_ParamLimits

0xcb71,	// (0x000185b8) popup_note2_window_g2

0x0001,

0xfc40,	// (0x0001b687) popup_note2_window_g_ParamLimits

0xfc40,	// (0x0001b687) popup_note2_window_g

0xd15b,	// (0x00018ba2) bg_popup_sub_pane_cp11_ParamLimits

0xd168,	// (0x00018baf) cell_ai3_links_pane_g1_ParamLimits

0xd17f,	// (0x00018bc6) cell_ai3_links_pane_t1

0x6ca7,	// (0x000126ee) set_text_pane_t1_copy1_ParamLimits

0x881a,	// (0x00014261) cell_graphic_popup_pane_cp2_ParamLimits

0x881a,	// (0x00014261) cell_graphic_popup_pane_cp2

0xf07d,	// (0x0001aac4) cell_graphic_popup_pane_g1_cp2

0x7240,	// (0x00012c87) cell_graphic_popup_pane_g2_cp2

0xf085,	// (0x0001aacc) cell_graphic_popup_pane_g3_cp2

0xf08d,	// (0x0001aad4) cell_graphic_popup_pane_t2_cp2

0x7251,	// (0x00012c98) grid_highlight_pane_cp3_cp2

0x7f7f,	// (0x000139c6) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x7a4c,	// (0x00013493) main_tmo_pane_ParamLimits

0xd518,	// (0x00018f5f) popup_tmo_big_image_note_window

0xe6e6,	// (0x0001a12d) cell_ai5_widget_list_pane

0xe6ee,	// (0x0001a135) cell_ai5_widget_lrg_icon_pane

0xecc6,	// (0x0001a70d) tmo_note_info_pane_t1_ParamLimits

0xecdb,	// (0x0001a722) tmo_note_info_pane_t2_ParamLimits

0xecf0,	// (0x0001a737) tmo_note_info_pane_t3_ParamLimits

0xed05,	// (0x0001a74c) tmo_note_info_pane_t4_ParamLimits

0xed17,	// (0x0001a75e) tmo_note_info_pane_t5_ParamLimits

0xfea1,	// (0x0001b8e8) tmo_note_info_pane_t_ParamLimits

0xee35,	// (0x0001a87c) settings_container_pane_ParamLimits

0xf006,	// (0x0001aa4d) indicator_popup_pane_cp5

0xf006,	// (0x0001aa4d) indicator_popup_pane_cp6

0xaeea,	// (0x00016931) list_set_graphic_pane_copy1_ParamLimits

0x3b70,	// (0x0000f5b7) bg_popup_window_pane_cp23

0xf09b,	// (0x0001aae2) popup_tmo_big_image_note_window_g1

0xf0a5,	// (0x0001aaec) popup_tmo_big_image_note_window_t1

0xf0b5,	// (0x0001aafc) popup_tmo_big_image_note_window_t2

0xf0c5,	// (0x0001ab0c) popup_tmo_big_image_note_window_t3

0x0002,

0xfeba,	// (0x0001b901) popup_tmo_big_image_note_window_t

0xbcef,	// (0x00017736) cell_ai5_widget_lrg_icon_pane_g1

0xf0d5,	// (0x0001ab1c) cell_ai5_widget_lrg_icon_pane_t1

0xf0e3,	// (0x0001ab2a) cell_ai5_widget_list_row_pane_ParamLimits

0xf0e3,	// (0x0001ab2a) cell_ai5_widget_list_row_pane

0xf0fa,	// (0x0001ab41) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf0fa,	// (0x0001ab41) cell_ai5_widget_list_row_pane_g1

0xf107,	// (0x0001ab4e) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf107,	// (0x0001ab4e) cell_ai5_widget_list_row_pane_t1

0xf138,	// (0x0001ab7f) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf138,	// (0x0001ab7f) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfec1,	// (0x0001b908) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfec1,	// (0x0001b908) cell_ai5_widget_list_row_pane_t

0x4711,	// (0x00010158) main_fep_vtchi_ss_pane

0xf188,	// (0x0001abcf) popup_fep_char_pre_window

0xf190,	// (0x0001abd7) popup_fep_ituss_window

0xf1bc,	// (0x0001ac03) popup_fep_vkbss_window

0x8c29,	// (0x00014670) grid_vkbss_keypad_pane_ParamLimits

0x8c29,	// (0x00014670) grid_vkbss_keypad_pane

0x8c29,	// (0x00014670) ituss_keypad_pane

0x6998,	// (0x000123df) aid_vkbss_key_offset_ParamLimits

0x6998,	// (0x000123df) aid_vkbss_key_offset

0x69a4,	// (0x000123eb) cell_vkbss_key_pane_ParamLimits

0x69a4,	// (0x000123eb) cell_vkbss_key_pane

0xf1fc,	// (0x0001ac43) bg_cell_vkbss_key_g1_ParamLimits

0xf1fc,	// (0x0001ac43) bg_cell_vkbss_key_g1

0xf208,	// (0x0001ac4f) cell_vkbss_key_3p_pane_ParamLimits

0xf208,	// (0x0001ac4f) cell_vkbss_key_3p_pane

0xf23e,	// (0x0001ac85) cell_vkbss_key_g1_ParamLimits

0xf23e,	// (0x0001ac85) cell_vkbss_key_g1

0xf274,	// (0x0001acbb) cell_vkbss_key_t1_ParamLimits

0xf274,	// (0x0001acbb) cell_vkbss_key_t1

0x69fc,	// (0x00012443) cell_ituss_key_pane_ParamLimits

0x69fc,	// (0x00012443) cell_ituss_key_pane

0xf2d0,	// (0x0001ad17) bg_cell_ituss_key_g1_ParamLimits

0xf2d0,	// (0x0001ad17) bg_cell_ituss_key_g1

0xf2dc,	// (0x0001ad23) cell_ituss_key_pane_g1_ParamLimits

0xf2dc,	// (0x0001ad23) cell_ituss_key_pane_g1

0x6a0d,	// (0x00012454) cell_ituss_key_pane_g2_ParamLimits

0x6a0d,	// (0x00012454) cell_ituss_key_pane_g2

0x0005,

0xfec8,	// (0x0001b90f) cell_ituss_key_pane_g_ParamLimits

0xfec8,	// (0x0001b90f) cell_ituss_key_pane_g

0x6a91,	// (0x000124d8) cell_ituss_key_t1_ParamLimits

0x6a91,	// (0x000124d8) cell_ituss_key_t1

0x6acb,	// (0x00012512) cell_ituss_key_t2_ParamLimits

0x6acb,	// (0x00012512) cell_ituss_key_t2

0x6afc,	// (0x00012543) cell_ituss_key_t3_ParamLimits

0x6afc,	// (0x00012543) cell_ituss_key_t3

0x6acb,	// (0x00012512) cell_ituss_key_t4_ParamLimits

0x6acb,	// (0x00012512) cell_ituss_key_t4

0x0004,

0xfed5,	// (0x0001b91c) cell_ituss_key_t_ParamLimits

0xfed5,	// (0x0001b91c) cell_ituss_key_t

0xf302,	// (0x0001ad49) cell_vkbss_key_3p_pane_g1

0xf30a,	// (0x0001ad51) cell_vkbss_key_3p_pane_g2

0xf312,	// (0x0001ad59) cell_vkbss_key_3p_pane_g3

0x0002,

0xfee0,	// (0x0001b927) cell_vkbss_key_3p_pane_g

0x88fd,	// (0x00014344) bg_popup_fep_char_preview_window_cp02

0xf31a,	// (0x0001ad61) popup_fep_char_pre_window_t1

0xe667,	// (0x0001a0ae) main_ai5_sk_pane

0xed91,	// (0x0001a7d8) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xed9d,	// (0x0001a7e4) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xc532,	// (0x00017f79) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xedb2,	// (0x0001a7f9) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeac,	// (0x0001b8f3) cell_contacts_ai5_widget_pane_g_ParamLimits

0xedbe,	// (0x0001a805) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x7a4c,	// (0x00013493) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf328,	// (0x0001ad6f) main_ai5_sk_pane_g1

0x9724,	// (0x0001516b) popup_query_code_window_g1

0xf1a6,	// (0x0001abed) popup_fep_vkb_icf_pane

0xf1d3,	// (0x0001ac1a) popup_fep_vtchi_icf_pane

0x8c29,	// (0x00014670) bg_icf_pane

0x8c29,	// (0x00014670) list_vkb_icf_pane

0xf331,	// (0x0001ad78) bg_icf_pane_cp01

0x88fd,	// (0x00014344) vtchi_icf_list_pane

0xf3a4,	// (0x0001adeb) list_vkb_icf_pane_t1_ParamLimits

0xf3a4,	// (0x0001adeb) list_vkb_icf_pane_t1

0xf3c5,	// (0x0001ae0c) vtchi_icf_list_pane_t1_ParamLimits

0xf3c5,	// (0x0001ae0c) vtchi_icf_list_pane_t1

0xf190,	// (0x0001abd7) popup_fep_ituss_window_ParamLimits

0xf1d3,	// (0x0001ac1a) popup_fep_vtchi_icf_pane_ParamLimits

0x8c29,	// (0x00014670) ituss_keypad_pane_ParamLimits

0x698c,	// (0x000123d3) ituss_sks_pane

0x8c29,	// (0x00014670) bg_icf_pane_ParamLimits

0xf160,	// (0x0001aba7) icf_edit_indi_pane_ParamLimits

0xf160,	// (0x0001aba7) icf_edit_indi_pane

0x8c29,	// (0x00014670) list_vkb_icf_pane_ParamLimits

0xf331,	// (0x0001ad78) bg_icf_pane_cp01_ParamLimits

0xf17b,	// (0x0001abc2) icf_edit_indi_pane_cp01_ParamLimits

0xf17b,	// (0x0001abc2) icf_edit_indi_pane_cp01

0xf344,	// (0x0001ad8b) vtchi_query_pane

0xe4e3,	// (0x00019f2a) icf_edit_indi_pane_g1_ParamLimits

0xe4e3,	// (0x00019f2a) icf_edit_indi_pane_g1

0xf43a,	// (0x0001ae81) icf_edit_indi_pane_g2_ParamLimits

0xf43a,	// (0x0001ae81) icf_edit_indi_pane_g2

0x0001,

0xff0b,	// (0x0001b952) icf_edit_indi_pane_g_ParamLimits

0xff0b,	// (0x0001b952) icf_edit_indi_pane_g

0xf44e,	// (0x0001ae95) icf_edit_indi_pane_t1

0xf3e3,	// (0x0001ae2a) bg_input_focus_pane_cp042

0x7424,	// (0x00012e6b) vtchi_button_pane

0xf3ec,	// (0x0001ae33) vtchi_query_pane_t1

0xf3fa,	// (0x0001ae41) vtchi_query_pane_t2

0xf408,	// (0x0001ae4f) vtchi_query_pane_t3

0x0002,

0xfefa,	// (0x0001b941) vtchi_query_pane_t

0x4711,	// (0x00010158) bg_button_pane_cp13

0xf416,	// (0x0001ae5d) vtchi_button_pane_g1

0x6b3f,	// (0x00012586) ituss_sks_pane_g1

0x6b4a,	// (0x00012591) ituss_sks_pane_g2

0x0001,

0xff01,	// (0x0001b948) ituss_sks_pane_g

0xf41e,	// (0x0001ae65) ituss_sks_pane_t1

0xf42c,	// (0x0001ae73) ituss_sks_pane_t2

0x0001,

0xff06,	// (0x0001b94d) ituss_sks_pane_t

0xb722,	// (0x00017169) indicator_nsta_pane_cp_g1

0xb72b,	// (0x00017172) indicator_nsta_pane_cp_g2

0xb733,	// (0x0001717a) indicator_nsta_pane_cp_g3

0xb73b,	// (0x00017182) indicator_nsta_pane_cp_g4

0xb72b,	// (0x00017172) indicator_nsta_pane_cp_g5

0xb733,	// (0x0001717a) indicator_nsta_pane_cp_g6

0x0005,

0xfa7e,	// (0x0001b4c5) indicator_nsta_pane_cp_g

0xe23c,	// (0x00019c83) cell_graphic2_pane_t2_ParamLimits

0xe23c,	// (0x00019c83) cell_graphic2_pane_t2

0x0001,

0xfd97,	// (0x0001b7de) cell_graphic2_pane_t_ParamLimits

0xfd97,	// (0x0001b7de) cell_graphic2_pane_t

0xe268,	// (0x00019caf) cell_graphic2_control_pane_t1

0x8325,	// (0x00013d6c) signal_pane_g3_ParamLimits

0x8325,	// (0x00013d6c) signal_pane_g3

0x8337,	// (0x00013d7e) signal_pane_g4_ParamLimits

0x8337,	// (0x00013d7e) signal_pane_g4

0xf14a,	// (0x0001ab91) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf14a,	// (0x0001ab91) cell_ai5_widget_list_row_pane_t3

0xf2f0,	// (0x0001ad37) cell_ituss_key_pane_t1_ParamLimits

0xf2f0,	// (0x0001ad37) cell_ituss_key_pane_t1

0x9324,	// (0x00014d6b) form_field_data_wide_pane_vc_t2_ParamLimits

0x9324,	// (0x00014d6b) form_field_data_wide_pane_vc_t2

0x9338,	// (0x00014d7f) form_field_data_wide_pane_vc_t3_ParamLimits

0x9338,	// (0x00014d7f) form_field_data_wide_pane_vc_t3

0x0002,

0xf7da,	// (0x0001b221) form_field_data_wide_pane_vc_t_ParamLimits

0xf7da,	// (0x0001b221) form_field_data_wide_pane_vc_t

0xb3cc,	// (0x00016e13) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb3cc,	// (0x00016e13) form_field_slider_wide_pane_vc_t3

0xb4aa,	// (0x00016ef1) form_field_popup_wide_pane_vc_t2_ParamLimits

0xb4aa,	// (0x00016ef1) form_field_popup_wide_pane_vc_t2

0xb4c1,	// (0x00016f08) form_field_popup_wide_pane_vc_t3_ParamLimits

0xb4c1,	// (0x00016f08) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa6d,	// (0x0001b4b4) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa6d,	// (0x0001b4b4) form_field_popup_wide_pane_vc_t

0x6763,	// (0x000121aa) aid_fshwr2_btn_pane_ParamLimits

0x676f,	// (0x000121b6) aid_fshwr2_syb_pane_ParamLimits

0x6781,	// (0x000121c8) aid_fshwr2_txt_pane_ParamLimits

0x5fb5,	// (0x000119fc) fshwr2_bg_pane_ParamLimits

0x678d,	// (0x000121d4) fshwr2_func_candi_pane_ParamLimits

0x67a9,	// (0x000121f0) fshwr2_hwr_syb_pane_ParamLimits

0x67c3,	// (0x0001220a) fshwr2_icf_pane_ParamLimits

0xb332,	// (0x00016d79) list_double_graphic_pane_vc_g4_ParamLimits

0xb332,	// (0x00016d79) list_double_graphic_pane_vc_g4

0x6a2d,	// (0x00012474) cell_ituss_key_pane_g3_ParamLimits

0x6a2d,	// (0x00012474) cell_ituss_key_pane_g3

0x6b2d,	// (0x00012574) cell_ituss_key_t5_ParamLimits

0x6b2d,	// (0x00012574) cell_ituss_key_t5

0xf1bc,	// (0x0001ac03) popup_fep_vkbss_window_ParamLimits

0xe671,	// (0x0001a0b8) aid_cell_ai5_quarter

0xf44e,	// (0x0001ae95) icf_edit_indi_pane_t1_ParamLimits

0x6f99,	// (0x000129e0) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x6f99,	// (0x000129e0) aid_tch_indicator_popup_pane_cp2

0x6fac,	// (0x000129f3) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x6fac,	// (0x000129f3) aid_tch_query_popup_data_pane_cp2

0x96cc,	// (0x00015113) aid_tch_query_popup_pane_ParamLimits

0x96cc,	// (0x00015113) aid_tch_query_popup_pane

0x96cc,	// (0x00015113) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x96cc,	// (0x00015113) aid_tch_query_popup_data_pane_cp1

0x8c29,	// (0x00014670) cell_fshwr2_syb_bg_pane_ParamLimits

0x68b8,	// (0x000122ff) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0x68cc,	// (0x00012313) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xf1a6,	// (0x0001abed) popup_fep_vkb_icf_pane_ParamLimits

0x65c3,	// (0x0001200a) bg_popup_fep_char_preview_window_g10

0xe7ae,	// (0x0001a1f5) cell_ai5_widget_pane_g11_ParamLimits

0xe7ae,	// (0x0001a1f5) cell_ai5_widget_pane_g11

0xe7ba,	// (0x0001a201) cell_ai5_widget_pane_g12_ParamLimits

0xe7ba,	// (0x0001a201) cell_ai5_widget_pane_g12

0xe7c6,	// (0x0001a20d) cell_ai5_widget_pane_g13_ParamLimits

0xe7c6,	// (0x0001a20d) cell_ai5_widget_pane_g13

0xe8f5,	// (0x0001a33c) cell_ai5_widget_pane_t11_ParamLimits

0xe8f5,	// (0x0001a33c) cell_ai5_widget_pane_t11

0xe907,	// (0x0001a34e) cell_ai5_widget_pane_t12_ParamLimits

0xe907,	// (0x0001a34e) cell_ai5_widget_pane_t12

0x6a39,	// (0x00012480) cell_ituss_key_pane_g4_ParamLimits

0x6a39,	// (0x00012480) cell_ituss_key_pane_g4

0x6a55,	// (0x0001249c) cell_ituss_key_pane_g5_ParamLimits

0x6a55,	// (0x0001249c) cell_ituss_key_pane_g5

0x6a71,	// (0x000124b8) cell_ituss_key_pane_g6_ParamLimits

0x6a71,	// (0x000124b8) cell_ituss_key_pane_g6

0x9171,	// (0x00014bb8) bg_icf_pane_g1

0xf34c,	// (0x0001ad93) bg_icf_pane_g2

0xf358,	// (0x0001ad9f) bg_icf_pane_g3

0xf362,	// (0x0001ada9) bg_icf_pane_g4

0xf36e,	// (0x0001adb5) bg_icf_pane_g5

0xf378,	// (0x0001adbf) bg_icf_pane_g6

0xf384,	// (0x0001adcb) bg_icf_pane_g7

0xf38e,	// (0x0001add5) bg_icf_pane_g8

0xf39a,	// (0x0001ade1) bg_icf_pane_g9

0x0008,

0xfee7,	// (0x0001b92e) bg_icf_pane_g

0xf1e9,	// (0x0001ac30) popup_hyb_candi_window_ParamLimits

0xf1e9,	// (0x0001ac30) popup_hyb_candi_window

0x9293,	// (0x00014cda) bg_popup_sub_pane_cp01_ParamLimits

0x9293,	// (0x00014cda) bg_popup_sub_pane_cp01

0xf467,	// (0x0001aeae) entry_hyb_candi_pane_ParamLimits

0xf467,	// (0x0001aeae) entry_hyb_candi_pane

0xf476,	// (0x0001aebd) grid_hyb_candi_pane_ParamLimits

0xf476,	// (0x0001aebd) grid_hyb_candi_pane

0xf48b,	// (0x0001aed2) grid_hyb_phrase_pane_ParamLimits

0xf48b,	// (0x0001aed2) grid_hyb_phrase_pane

0xf49a,	// (0x0001aee1) cell_hyb_candi_pane_ParamLimits

0xf49a,	// (0x0001aee1) cell_hyb_candi_pane

0xf4bd,	// (0x0001af04) cell_hyb_candi_scroll_pane

0x8264,	// (0x00013cab) cell_hyb_candi_pane_g1

0xf4c6,	// (0x0001af0d) cell_hyb_candi_pane_t1

0xf4d4,	// (0x0001af1b) cell_hyb_phrase_pane

0x8264,	// (0x00013cab) cell_hyb_phrase_pane_g1

0xf4dd,	// (0x0001af24) cell_hyb_phrase_pane_t1

0xf4eb,	// (0x0001af32) entry_hyb_candi_pane_t1

0x88fd,	// (0x00014344) input_focus_pane_cp06

0xf4f9,	// (0x0001af40) cell_hyb_candi_scroll_pane_g1

0xf501,	// (0x0001af48) cell_hyb_candi_scroll_pane_g1_aid

0xf509,	// (0x0001af50) cell_hyb_candi_scroll_pane_g2

0xf511,	// (0x0001af58) cell_hyb_candi_scroll_pane_g2_aid

0xf519,	// (0x0001af60) cell_hyb_candi_scroll_pane_g3

0xf521,	// (0x0001af68) cell_hyb_candi_scroll_pane_g4
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
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	};

} // end of namespace AknLayoutScalable_Abrw_php_av_qhd_prt_tch_Normal

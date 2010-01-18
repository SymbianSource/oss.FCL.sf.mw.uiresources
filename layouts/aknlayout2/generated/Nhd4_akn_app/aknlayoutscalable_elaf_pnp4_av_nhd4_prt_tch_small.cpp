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

#include "aknlayoutscalable_elaf_pnp4_av_nhd4_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x0000ec40 };

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
0x2139,	// (0x00010d79) Screen

0x214d,	// (0x00010d8d) application_window_ParamLimits

0x214d,	// (0x00010d8d) application_window

0x2167,	// (0x00010da7) screen_g1

0xd374,	// (0x0001bfb4) area_bottom_pane_ParamLimits

0xd374,	// (0x0001bfb4) area_bottom_pane

0xd434,	// (0x0001c074) area_top_pane_ParamLimits

0xd434,	// (0x0001c074) area_top_pane

0xd4c8,	// (0x0001c108) main_pane_ParamLimits

0xd4c8,	// (0x0001c108) main_pane

0x2171,	// (0x00010db1) misc_graphics

0x4820,	// (0x00013460) battery_pane_ParamLimits

0x4820,	// (0x00013460) battery_pane

0x55e5,	// (0x00014225) bg_status_flat_pane_g8

0x55ed,	// (0x0001422d) bg_status_flat_pane_g9

0x48e2,	// (0x00013522) context_pane_ParamLimits

0x48e2,	// (0x00013522) context_pane

0x49f8,	// (0x00013638) navi_pane_ParamLimits

0x49f8,	// (0x00013638) navi_pane

0x4a75,	// (0x000136b5) signal_pane_ParamLimits

0x4a75,	// (0x000136b5) signal_pane

0x0008,

0xf879,	// (0x0001e4b9) bg_status_flat_pane_g

0x4ae2,	// (0x00013722) status_pane_g1_ParamLimits

0x4ae2,	// (0x00013722) status_pane_g1

0x4af6,	// (0x00013736) status_pane_g2_ParamLimits

0x4af6,	// (0x00013736) status_pane_g2

0x4b02,	// (0x00013742) status_pane_g3_ParamLimits

0x4b02,	// (0x00013742) status_pane_g3

0x0004,

0xf7b3,	// (0x0001e3f3) status_pane_g_ParamLimits

0xf7b3,	// (0x0001e3f3) status_pane_g

0x4b34,	// (0x00013774) title_pane_ParamLimits

0x4b34,	// (0x00013774) title_pane

0x4b71,	// (0x000137b1) uni_indicator_pane_ParamLimits

0x4b71,	// (0x000137b1) uni_indicator_pane

0x4199,	// (0x00012dd9) bg_list_pane_ParamLimits

0x4199,	// (0x00012dd9) bg_list_pane

0xcaff,	// (0x0001b73f) find_pane

0x41c1,	// (0x00012e01) listscroll_app_pane_ParamLimits

0x41c1,	// (0x00012e01) listscroll_app_pane

0x41cd,	// (0x00012e0d) listscroll_form_pane

0xcb07,	// (0x0001b747) listscroll_gen_pane_ParamLimits

0xcb07,	// (0x0001b747) listscroll_gen_pane

0x41cd,	// (0x00012e0d) listscroll_set_pane

0x3390,	// (0x00011fd0) main_idle_act_pane

0x3e75,	// (0x00012ab5) main_idle_trad_pane

0x3e75,	// (0x00012ab5) main_list_empty_pane

0x41fb,	// (0x00012e3b) main_midp_pane

0x4207,	// (0x00012e47) main_pane_g1_ParamLimits

0x4207,	// (0x00012e47) main_pane_g1

0x4215,	// (0x00012e55) popup_ai_message_window_ParamLimits

0x4215,	// (0x00012e55) popup_ai_message_window

0x42bf,	// (0x00012eff) popup_fep_china_uni_window_ParamLimits

0x42bf,	// (0x00012eff) popup_fep_china_uni_window

0x4319,	// (0x00012f59) popup_fep_japan_candidate_window_ParamLimits

0x4319,	// (0x00012f59) popup_fep_japan_candidate_window

0x4337,	// (0x00012f77) popup_fep_japan_predictive_window_ParamLimits

0x4337,	// (0x00012f77) popup_fep_japan_predictive_window

0x4367,	// (0x00012fa7) popup_find_window

0x4374,	// (0x00012fb4) popup_grid_graphic_window_ParamLimits

0x4374,	// (0x00012fb4) popup_grid_graphic_window

0x439a,	// (0x00012fda) popup_large_graphic_colour_window

0x43c0,	// (0x00013000) popup_menu_window_ParamLimits

0x43c0,	// (0x00013000) popup_menu_window

0x457a,	// (0x000131ba) popup_note_image_window

0x4566,	// (0x000131a6) popup_note_wait_window_ParamLimits

0x4566,	// (0x000131a6) popup_note_wait_window

0x4566,	// (0x000131a6) popup_note_window_ParamLimits

0x4566,	// (0x000131a6) popup_note_window

0x45d0,	// (0x00013210) popup_query_code_window_ParamLimits

0x45d0,	// (0x00013210) popup_query_code_window

0x45e4,	// (0x00013224) popup_query_data_code_window_ParamLimits

0x45e4,	// (0x00013224) popup_query_data_code_window

0x45fb,	// (0x0001323b) popup_query_data_window_ParamLimits

0x45fb,	// (0x0001323b) popup_query_data_window

0x4613,	// (0x00013253) popup_query_sat_info_window_ParamLimits

0x4613,	// (0x00013253) popup_query_sat_info_window

0x464c,	// (0x0001328c) popup_snote_single_graphic_window_ParamLimits

0x464c,	// (0x0001328c) popup_snote_single_graphic_window

0x464c,	// (0x0001328c) popup_snote_single_text_window_ParamLimits

0x464c,	// (0x0001328c) popup_snote_single_text_window

0x4661,	// (0x000132a1) popup_sub_window_general

0x478f,	// (0x000133cf) popup_window_general_ParamLimits

0x478f,	// (0x000133cf) popup_window_general

0x47a4,	// (0x000133e4) power_save_pane

0xdc0f,	// (0x0001c84f) control_pane_g1_ParamLimits

0xdc0f,	// (0x0001c84f) control_pane_g1

0xdc38,	// (0x0001c878) control_pane_g2_ParamLimits

0xdc38,	// (0x0001c878) control_pane_g2

0x413a,	// (0x00012d7a) control_pane_g3_ParamLimits

0x413a,	// (0x00012d7a) control_pane_g3

0x0007,

0xf79b,	// (0x0001e3db) control_pane_g_ParamLimits

0xf79b,	// (0x0001e3db) control_pane_g

0xdc7d,	// (0x0001c8bd) control_pane_t1_ParamLimits

0xdc7d,	// (0x0001c8bd) control_pane_t1

0xdccf,	// (0x0001c90f) control_pane_t2_ParamLimits

0xdccf,	// (0x0001c90f) control_pane_t2

0x0002,

0xf7ac,	// (0x0001e3ec) control_pane_t_ParamLimits

0xf7ac,	// (0x0001e3ec) control_pane_t

0x405b,	// (0x00012c9b) navi_navi_volume_pane_cp1

0x4064,	// (0x00012ca4) status_small_icon_pane

0x406c,	// (0x00012cac) status_small_pane_g1_ParamLimits

0x406c,	// (0x00012cac) status_small_pane_g1

0x40a0,	// (0x00012ce0) status_small_pane_g2_ParamLimits

0x40a0,	// (0x00012ce0) status_small_pane_g2

0x40ac,	// (0x00012cec) status_small_pane_g3_ParamLimits

0x40ac,	// (0x00012cec) status_small_pane_g3

0x40b8,	// (0x00012cf8) status_small_pane_g4_ParamLimits

0x40b8,	// (0x00012cf8) status_small_pane_g4

0x40c4,	// (0x00012d04) status_small_pane_g5_ParamLimits

0x40c4,	// (0x00012d04) status_small_pane_g5

0x40d3,	// (0x00012d13) status_small_pane_g6_ParamLimits

0x40d3,	// (0x00012d13) status_small_pane_g6

0x0007,

0xf78a,	// (0x0001e3ca) status_small_pane_g_ParamLimits

0xf78a,	// (0x0001e3ca) status_small_pane_g

0x4103,	// (0x00012d43) status_small_pane_t1

0x4126,	// (0x00012d66) status_small_wait_pane_ParamLimits

0x4126,	// (0x00012d66) status_small_wait_pane

0x3884,	// (0x000124c4) aid_levels_signal_ParamLimits

0x3884,	// (0x000124c4) aid_levels_signal

0x3896,	// (0x000124d6) signal_pane_g1_ParamLimits

0x3896,	// (0x000124d6) signal_pane_g1

0x38ab,	// (0x000124eb) signal_pane_g2_ParamLimits

0x38ab,	// (0x000124eb) signal_pane_g2

0x0001,

0xf71f,	// (0x0001e35f) signal_pane_g_ParamLimits

0xf71f,	// (0x0001e35f) signal_pane_g

0x38c0,	// (0x00012500) context_pane_g1

0x217b,	// (0x00010dbb) title_pane_g1

0x21b1,	// (0x00010df1) title_pane_t1

0x2219,	// (0x00010e59) title_pane_t2

0x223f,	// (0x00010e7f) title_pane_t3

0x0002,

0xf573,	// (0x0001e1b3) title_pane_t

0x4b89,	// (0x000137c9) aid_levels_battery_ParamLimits

0x4b89,	// (0x000137c9) aid_levels_battery

0x4b9d,	// (0x000137dd) battery_pane_g1_ParamLimits

0x4b9d,	// (0x000137dd) battery_pane_g1

0x4bb3,	// (0x000137f3) battery_pane_g2_ParamLimits

0x4bb3,	// (0x000137f3) battery_pane_g2

0x0001,

0xf7be,	// (0x0001e3fe) battery_pane_g_ParamLimits

0xf7be,	// (0x0001e3fe) battery_pane_g

0x5f15,	// (0x00014b55) uni_indicator_pane_g1

0x5f2a,	// (0x00014b6a) uni_indicator_pane_g2

0x5f40,	// (0x00014b80) uni_indicator_pane_g3

0x0005,

0xf921,	// (0x0001e561) uni_indicator_pane_g

0x3ce5,	// (0x00012925) navi_icon_pane_ParamLimits

0x3ce5,	// (0x00012925) navi_icon_pane

0x3c2c,	// (0x0001286c) navi_midp_pane

0x3d01,	// (0x00012941) navi_navi_pane

0x3d0b,	// (0x0001294b) navi_text_pane_ParamLimits

0x3d0b,	// (0x0001294b) navi_text_pane

0x2167,	// (0x00010da7) status_small_wait_pane_g1

0x267c,	// (0x000112bc) status_small_wait_pane_g2

0x0001,

0xf91c,	// (0x0001e55c) status_small_wait_pane_g

0x5c38,	// (0x00014878) navi_navi_icon_text_pane

0x5c52,	// (0x00014892) navi_navi_pane_g1_ParamLimits

0x5c52,	// (0x00014892) navi_navi_pane_g1

0x5c40,	// (0x00014880) navi_navi_pane_g2_ParamLimits

0x5c40,	// (0x00014880) navi_navi_pane_g2

0x0001,

0xf8ea,	// (0x0001e52a) navi_navi_pane_g_ParamLimits

0xf8ea,	// (0x0001e52a) navi_navi_pane_g

0x5c64,	// (0x000148a4) navi_navi_tabs_pane

0x5c6d,	// (0x000148ad) navi_navi_text_pane

0x5c38,	// (0x00014878) navi_navi_volume_pane

0x5c11,	// (0x00014851) navi_text_pane_t1

0x5c02,	// (0x00014842) navi_icon_pane_g1

0x5b55,	// (0x00014795) navi_navi_text_pane_t1

0xdfe9,	// (0x0001cc29) navi_navi_volume_pane_g1

0xdff1,	// (0x0001cc31) volume_small_pane

0x5abb,	// (0x000146fb) navi_navi_icon_text_pane_g1

0x5ac3,	// (0x00014703) navi_navi_icon_text_pane_t1

0x3d01,	// (0x00012941) navi_tabs_2_long_pane

0x3d01,	// (0x00012941) navi_tabs_2_pane

0x3d01,	// (0x00012941) navi_tabs_3_long_pane

0x3d01,	// (0x00012941) navi_tabs_3_pane

0x3d01,	// (0x00012941) navi_tabs_4_pane

0xdfc9,	// (0x0001cc09) tabs_2_active_pane_ParamLimits

0xdfc9,	// (0x0001cc09) tabs_2_active_pane

0xdfd9,	// (0x0001cc19) tabs_2_passive_pane_ParamLimits

0xdfd9,	// (0x0001cc19) tabs_2_passive_pane

0xdf97,	// (0x0001cbd7) tabs_3_active_pane_ParamLimits

0xdf97,	// (0x0001cbd7) tabs_3_active_pane

0xdfa7,	// (0x0001cbe7) tabs_3_passive_pane_ParamLimits

0xdfa7,	// (0x0001cbe7) tabs_3_passive_pane

0xdfb8,	// (0x0001cbf8) tabs_3_passive_pane_cp_ParamLimits

0xdfb8,	// (0x0001cbf8) tabs_3_passive_pane_cp

0xdf53,	// (0x0001cb93) tabs_4_active_pane_ParamLimits

0xdf53,	// (0x0001cb93) tabs_4_active_pane

0xdf64,	// (0x0001cba4) tabs_4_passive_pane_ParamLimits

0xdf64,	// (0x0001cba4) tabs_4_passive_pane

0xdf75,	// (0x0001cbb5) tabs_4_passive_pane_cp_ParamLimits

0xdf75,	// (0x0001cbb5) tabs_4_passive_pane_cp

0xdf86,	// (0x0001cbc6) tabs_4_passive_pane_cp2_ParamLimits

0xdf86,	// (0x0001cbc6) tabs_4_passive_pane_cp2

0xdf2f,	// (0x0001cb6f) tabs_2_long_active_pane_ParamLimits

0xdf2f,	// (0x0001cb6f) tabs_2_long_active_pane

0xdf41,	// (0x0001cb81) tabs_2_long_passive_pane_ParamLimits

0xdf41,	// (0x0001cb81) tabs_2_long_passive_pane

0xdeea,	// (0x0001cb2a) tabs_3_long_active_pane_ParamLimits

0xdeea,	// (0x0001cb2a) tabs_3_long_active_pane

0xdf03,	// (0x0001cb43) tabs_3_long_passive_pane_ParamLimits

0xdf03,	// (0x0001cb43) tabs_3_long_passive_pane

0xdf16,	// (0x0001cb56) tabs_3_long_passive_pane_cp_ParamLimits

0xdf16,	// (0x0001cb56) tabs_3_long_passive_pane_cp

0xde90,	// (0x0001cad0) volume_small_pane_g1

0xde99,	// (0x0001cad9) volume_small_pane_g2

0xdea2,	// (0x0001cae2) volume_small_pane_g3

0xdeab,	// (0x0001caeb) volume_small_pane_g4

0xdeb4,	// (0x0001caf4) volume_small_pane_g5

0xdebd,	// (0x0001cafd) volume_small_pane_g6

0xdec6,	// (0x0001cb06) volume_small_pane_g7

0xdecf,	// (0x0001cb0f) volume_small_pane_g8

0xded8,	// (0x0001cb18) volume_small_pane_g9

0xdee1,	// (0x0001cb21) volume_small_pane_g10

0x0009,

0xf8b6,	// (0x0001e4f6) volume_small_pane_g

0x2251,	// (0x00010e91) bg_active_tab_pane_cp2_ParamLimits

0x2251,	// (0x00010e91) bg_active_tab_pane_cp2

0x225f,	// (0x00010e9f) tabs_3_active_pane_g1

0x2267,	// (0x00010ea7) tabs_3_active_pane_t1

0x2251,	// (0x00010e91) bg_passive_tab_pane_cp2_ParamLimits

0x2251,	// (0x00010e91) bg_passive_tab_pane_cp2

0x225f,	// (0x00010e9f) tabs_3_passive_pane_g1

0x2267,	// (0x00010ea7) tabs_3_passive_pane_t1

0x2251,	// (0x00010e91) bg_active_tab_pane_cp3_ParamLimits

0x2251,	// (0x00010e91) bg_active_tab_pane_cp3

0x2279,	// (0x00010eb9) tabs_4_active_pane_g1

0x2281,	// (0x00010ec1) tabs_4_active_pane_t1

0x2251,	// (0x00010e91) bg_passive_tab_pane_cp3_ParamLimits

0x2251,	// (0x00010e91) bg_passive_tab_pane_cp3

0x2279,	// (0x00010eb9) tabs_4_1_passive_pane_g1

0x2281,	// (0x00010ec1) tabs_4_1_passive_pane_t1

0x41fb,	// (0x00012e3b) list_highlight_pane_cp2

0x61c1,	// (0x00014e01) list_set_pane_ParamLimits

0x61c1,	// (0x00014e01) list_set_pane

0x6263,	// (0x00014ea3) main_pane_set_t1_ParamLimits

0x6263,	// (0x00014ea3) main_pane_set_t1

0x6283,	// (0x00014ec3) main_pane_set_t2_ParamLimits

0x6283,	// (0x00014ec3) main_pane_set_t2

0x6297,	// (0x00014ed7) main_pane_set_t3_ParamLimits

0x6297,	// (0x00014ed7) main_pane_set_t3

0x62a9,	// (0x00014ee9) main_pane_set_t4_ParamLimits

0x62a9,	// (0x00014ee9) main_pane_set_t4

0x0003,

0xf986,	// (0x0001e5c6) main_pane_set_t_ParamLimits

0xf986,	// (0x0001e5c6) main_pane_set_t

0x62bb,	// (0x00014efb) setting_code_pane

0x62c5,	// (0x00014f05) setting_slider_graphic_pane

0x62c5,	// (0x00014f05) setting_slider_pane

0x62c5,	// (0x00014f05) setting_text_pane

0x62c5,	// (0x00014f05) setting_volume_pane

0xd6f9,	// (0x0001c339) volume_set_pane

0x2251,	// (0x00010e91) bg_set_opt_pane_cp

0xd701,	// (0x0001c341) setting_slider_pane_t1

0xd71a,	// (0x0001c35a) setting_slider_pane_t2

0xd733,	// (0x0001c373) setting_slider_pane_t3

0x0002,

0xf57a,	// (0x0001e1ba) setting_slider_pane_t

0xd74a,	// (0x0001c38a) slider_set_pane

0x2171,	// (0x00010db1) bg_set_opt_pane_cp2

0x2293,	// (0x00010ed3) setting_slider_graphic_pane_g1

0xd760,	// (0x0001c3a0) setting_slider_graphic_pane_t1

0xd76f,	// (0x0001c3af) setting_slider_graphic_pane_t2

0x0001,

0xf581,	// (0x0001e1c1) setting_slider_graphic_pane_t

0xd77e,	// (0x0001c3be) slider_set_pane_cp

0x2171,	// (0x00010db1) input_focus_pane_cp1

0x6180,	// (0x00014dc0) list_set_text_pane

0x2167,	// (0x00010da7) setting_text_pane_g1

0x2171,	// (0x00010db1) input_focus_pane_cp2

0x2167,	// (0x00010da7) setting_code_pane_g1

0x229c,	// (0x00010edc) setting_code_pane_t1

0xc3b2,	// (0x0001aff2) set_text_pane_t1_ParamLimits

0xc3b2,	// (0x0001aff2) set_text_pane_t1

0x3166,	// (0x00011da6) set_opt_bg_pane_g1

0x316e,	// (0x00011dae) set_opt_bg_pane_g2

0x6160,	// (0x00014da0) set_opt_bg_pane_g3

0x317e,	// (0x00011dbe) set_opt_bg_pane_g4

0x3186,	// (0x00011dc6) set_opt_bg_pane_g5

0x318e,	// (0x00011dce) set_opt_bg_pane_g6

0x6168,	// (0x00014da8) set_opt_bg_pane_g7

0x6170,	// (0x00014db0) set_opt_bg_pane_g8

0x6178,	// (0x00014db8) set_opt_bg_pane_g9

0x0008,

0xf973,	// (0x0001e5b3) set_opt_bg_pane_g

0x6153,	// (0x00014d93) slider_set_pane_g1

0xe05e,	// (0x0001cc9e) slider_set_pane_g2

0x0006,

0xf964,	// (0x0001e5a4) slider_set_pane_g

0xdffa,	// (0x0001cc3a) volume_set_pane_g1

0xe002,	// (0x0001cc42) volume_set_pane_g2

0xe00a,	// (0x0001cc4a) volume_set_pane_g3

0xe012,	// (0x0001cc52) volume_set_pane_g4

0xe01a,	// (0x0001cc5a) volume_set_pane_g5

0xe022,	// (0x0001cc62) volume_set_pane_g6

0xe02a,	// (0x0001cc6a) volume_set_pane_g7

0xe032,	// (0x0001cc72) volume_set_pane_g8

0xe03a,	// (0x0001cc7a) volume_set_pane_g9

0xe042,	// (0x0001cc82) volume_set_pane_g10

0x0009,

0xf93c,	// (0x0001e57c) volume_set_pane_g

0x22c4,	// (0x00010f04) indicator_pane_ParamLimits

0x22c4,	// (0x00010f04) indicator_pane

0x22d0,	// (0x00010f10) main_idle_pane_g2_ParamLimits

0x22d0,	// (0x00010f10) main_idle_pane_g2

0x22f8,	// (0x00010f38) main_pane_idle_g1_ParamLimits

0x22f8,	// (0x00010f38) main_pane_idle_g1

0x2305,	// (0x00010f45) popup_clock_digital_analogue_window_ParamLimits

0x2305,	// (0x00010f45) popup_clock_digital_analogue_window

0x231c,	// (0x00010f5c) soft_indicator_pane_ParamLimits

0x231c,	// (0x00010f5c) soft_indicator_pane

0x2328,	// (0x00010f68) wallpaper_pane_ParamLimits

0x2328,	// (0x00010f68) wallpaper_pane

0x2167,	// (0x00010da7) wallpaper_pane_g1

0x233c,	// (0x00010f7c) indicator_pane_g1_ParamLimits

0x233c,	// (0x00010f7c) indicator_pane_g1

0x663f,	// (0x0001527f) navi_navi_icon_text_pane_srt_g1

0x2357,	// (0x00010f97) soft_indicator_pane_t1

0x2371,	// (0x00010fb1) aid_ps_area_pane

0x2382,	// (0x00010fc2) aid_ps_clock_pane

0x2390,	// (0x00010fd0) aid_ps_indicator_pane

0x239c,	// (0x00010fdc) indicator_ps_pane_ParamLimits

0x239c,	// (0x00010fdc) indicator_ps_pane

0x23ab,	// (0x00010feb) power_save_pane_g1_ParamLimits

0x23ab,	// (0x00010feb) power_save_pane_g1

0x23b7,	// (0x00010ff7) power_save_pane_g2_ParamLimits

0x23b7,	// (0x00010ff7) power_save_pane_g2

0xd328,	// (0x0001bf68) aid_navinavi_width_pane

0x2371,	// (0x00010fb1) aid_ps_area_pane_ParamLimits

0x0001,

0xf586,	// (0x0001e1c6) power_save_pane_g_ParamLimits

0xf586,	// (0x0001e1c6) power_save_pane_g

0x23c5,	// (0x00011005) power_save_pane_t1_ParamLimits

0x23c5,	// (0x00011005) power_save_pane_t1

0x2382,	// (0x00010fc2) aid_ps_clock_pane_ParamLimits

0x2390,	// (0x00010fd0) aid_ps_indicator_pane_ParamLimits

0x23d7,	// (0x00011017) power_save_pane_t4_ParamLimits

0x23d7,	// (0x00011017) power_save_pane_t4

0x0001,

0xf58b,	// (0x0001e1cb) power_save_pane_t_ParamLimits

0xf58b,	// (0x0001e1cb) power_save_pane_t

0x2401,	// (0x00011041) power_save_t3_ParamLimits

0x2401,	// (0x00011041) power_save_t3

0x23ec,	// (0x0001102c) power_save_t2_ParamLimits

0x23ec,	// (0x0001102c) power_save_t2

0x2416,	// (0x00011056) indicator_ps_pane_g1

0x241f,	// (0x0001105f) ai_gene_pane_ParamLimits

0x241f,	// (0x0001105f) ai_gene_pane

0x242b,	// (0x0001106b) ai_links_pane_ParamLimits

0x242b,	// (0x0001106b) ai_links_pane

0x2437,	// (0x00011077) indicator_pane_cp1_ParamLimits

0x2437,	// (0x00011077) indicator_pane_cp1

0x2443,	// (0x00011083) main_pane_idle_g1_cp_ParamLimits

0x2443,	// (0x00011083) main_pane_idle_g1_cp

0x244f,	// (0x0001108f) popup_ai_links_title_window

0x2458,	// (0x00011098) soft_indicator_pane_cp1_ParamLimits

0x2458,	// (0x00011098) soft_indicator_pane_cp1

0x5f03,	// (0x00014b43) ai_links_pane_g1

0x5f0c,	// (0x00014b4c) grid_ai_links_pane

0x5ee6,	// (0x00014b26) ai_gene_pane_1

0x5ef1,	// (0x00014b31) ai_gene_pane_2

0x5efa,	// (0x00014b3a) list_highlight_pane_cp4

0x5eca,	// (0x00014b0a) cell_ai_link_pane_ParamLimits

0x5eca,	// (0x00014b0a) cell_ai_link_pane

0x5ec2,	// (0x00014b02) cell_ai_link_pane_g1

0x267c,	// (0x000112bc) cell_ai_link_pane_g2

0x0001,

0xf917,	// (0x0001e557) cell_ai_link_pane_g

0x2171,	// (0x00010db1) grid_highlight_cp2

0x2171,	// (0x00010db1) bg_popup_sub_pane_cp1

0x2472,	// (0x000110b2) popup_ai_links_title_window_t1

0x5e10,	// (0x00014a50) ai_gene_pane_1_g1_ParamLimits

0x5e10,	// (0x00014a50) ai_gene_pane_1_g1

0x5e1c,	// (0x00014a5c) ai_gene_pane_1_g2_ParamLimits

0x5e1c,	// (0x00014a5c) ai_gene_pane_1_g2

0x0001,

0xf90d,	// (0x0001e54d) ai_gene_pane_1_g_ParamLimits

0xf90d,	// (0x0001e54d) ai_gene_pane_1_g

0x5e29,	// (0x00014a69) ai_gene_pane_1_t1_ParamLimits

0x5e29,	// (0x00014a69) ai_gene_pane_1_t1

0x5e5d,	// (0x00014a9d) grid_ai_soft_ind_pane

0x5dfb,	// (0x00014a3b) ai_gene_pane_2_t1_ParamLimits

0x5dfb,	// (0x00014a3b) ai_gene_pane_2_t1

0x2481,	// (0x000110c1) main_pane_empty_t1_ParamLimits

0x2481,	// (0x000110c1) main_pane_empty_t1

0x2499,	// (0x000110d9) main_pane_empty_t2_ParamLimits

0x2499,	// (0x000110d9) main_pane_empty_t2

0x24ae,	// (0x000110ee) main_pane_empty_t3_ParamLimits

0x24ae,	// (0x000110ee) main_pane_empty_t3

0x24c0,	// (0x00011100) main_pane_empty_t4_ParamLimits

0x24c0,	// (0x00011100) main_pane_empty_t4

0x24d2,	// (0x00011112) main_pane_empty_t5_ParamLimits

0x24d2,	// (0x00011112) main_pane_empty_t5

0x0004,

0xf590,	// (0x0001e1d0) main_pane_empty_t_ParamLimits

0xf590,	// (0x0001e1d0) main_pane_empty_t

0x325f,	// (0x00011e9f) bg_popup_window_pane_ParamLimits

0x325f,	// (0x00011e9f) bg_popup_window_pane

0x5b63,	// (0x000147a3) find_popup_pane_cp2_ParamLimits

0x5b63,	// (0x000147a3) find_popup_pane_cp2

0x5b6f,	// (0x000147af) heading_pane_ParamLimits

0x5b6f,	// (0x000147af) heading_pane

0x2171,	// (0x00010db1) bg_popup_sub_pane

0x5add,	// (0x0001471d) bg_popup_window_pane_g1_ParamLimits

0x5add,	// (0x0001471d) bg_popup_window_pane_g1

0x5ae9,	// (0x00014729) bg_popup_window_pane_g2_ParamLimits

0x5ae9,	// (0x00014729) bg_popup_window_pane_g2

0x5af5,	// (0x00014735) bg_popup_window_pane_g3_ParamLimits

0x5af5,	// (0x00014735) bg_popup_window_pane_g3

0x5b01,	// (0x00014741) bg_popup_window_pane_g4_ParamLimits

0x5b01,	// (0x00014741) bg_popup_window_pane_g4

0x5b0d,	// (0x0001474d) bg_popup_window_pane_g5_ParamLimits

0x5b0d,	// (0x0001474d) bg_popup_window_pane_g5

0x5b19,	// (0x00014759) bg_popup_window_pane_g6_ParamLimits

0x5b19,	// (0x00014759) bg_popup_window_pane_g6

0x5b25,	// (0x00014765) bg_popup_window_pane_g7_ParamLimits

0x5b25,	// (0x00014765) bg_popup_window_pane_g7

0x5b31,	// (0x00014771) bg_popup_window_pane_g8_ParamLimits

0x5b31,	// (0x00014771) bg_popup_window_pane_g8

0x5b3d,	// (0x0001477d) bg_popup_window_pane_g9_ParamLimits

0x5b3d,	// (0x0001477d) bg_popup_window_pane_g9

0x5b49,	// (0x00014789) bg_popup_window_pane_g10_ParamLimits

0x5b49,	// (0x00014789) bg_popup_window_pane_g10

0x0009,

0xf8d5,	// (0x0001e515) bg_popup_window_pane_g_ParamLimits

0xf8d5,	// (0x0001e515) bg_popup_window_pane_g

0x5a72,	// (0x000146b2) bg_popup_heading_pane_ParamLimits

0x5a72,	// (0x000146b2) bg_popup_heading_pane

0xe0e6,	// (0x0001cd26) tabs_4_passive_pane_cp_srt_ParamLimits

0xe0e6,	// (0x0001cd26) tabs_4_passive_pane_cp_srt

0xe0f8,	// (0x0001cd38) tabs_4_passive_pane_srt_ParamLimits

0x5a86,	// (0x000146c6) heading_pane_g2

0xe0f8,	// (0x0001cd38) tabs_4_passive_pane_srt

0x41fb,	// (0x00012e3b) bg_passive_tab_pane_cp3_srt_ParamLimits

0x41fb,	// (0x00012e3b) bg_passive_tab_pane_cp3_srt

0x5a8e,	// (0x000146ce) heading_pane_t1_ParamLimits

0x5a8e,	// (0x000146ce) heading_pane_t1

0x5aa5,	// (0x000146e5) heading_pane_t2_ParamLimits

0x5aa5,	// (0x000146e5) heading_pane_t2

0x0001,

0xf8d0,	// (0x0001e510) heading_pane_t_ParamLimits

0xf8d0,	// (0x0001e510) heading_pane_t

0x55ad,	// (0x000141ed) bg_popup_heading_pane_g1

0x565c,	// (0x0001429c) bg_popup_heading_pane_g2

0x5666,	// (0x000142a6) bg_popup_heading_pane_g3

0x5670,	// (0x000142b0) bg_popup_heading_pane_g4

0x567a,	// (0x000142ba) bg_popup_heading_pane_g5

0x5684,	// (0x000142c4) bg_popup_heading_pane_g6

0x568c,	// (0x000142cc) bg_popup_heading_pane_g7

0x5694,	// (0x000142d4) bg_popup_heading_pane_g8

0x569e,	// (0x000142de) bg_popup_heading_pane_g9

0x0008,

0xf88c,	// (0x0001e4cc) bg_popup_heading_pane_g

0x4cad,	// (0x000138ed) bg_popup_sub_pane_g1

0x4cbd,	// (0x000138fd) bg_popup_sub_pane_g2

0x4cb5,	// (0x000138f5) bg_popup_sub_pane_g3

0x4ccd,	// (0x0001390d) bg_popup_sub_pane_g4

0x4cc5,	// (0x00013905) bg_popup_sub_pane_g5

0x4cd5,	// (0x00013915) bg_popup_sub_pane_g6

0x4cdd,	// (0x0001391d) bg_popup_sub_pane_g7

0x4ced,	// (0x0001392d) bg_popup_sub_pane_g8

0x4ce5,	// (0x00013925) bg_popup_sub_pane_g9

0x0008,

0xf866,	// (0x0001e4a6) bg_popup_sub_pane_g

0x24e6,	// (0x00011126) bg_popup_window_pane_cp5_ParamLimits

0x24e6,	// (0x00011126) bg_popup_window_pane_cp5

0x2502,	// (0x00011142) popup_note_window_g1_ParamLimits

0x2502,	// (0x00011142) popup_note_window_g1

0x250e,	// (0x0001114e) popup_note_window_t1_ParamLimits

0x250e,	// (0x0001114e) popup_note_window_t1

0x2520,	// (0x00011160) popup_note_window_t2_ParamLimits

0x2520,	// (0x00011160) popup_note_window_t2

0x2532,	// (0x00011172) popup_note_window_t3_ParamLimits

0x2532,	// (0x00011172) popup_note_window_t3

0x2544,	// (0x00011184) popup_note_window_t4_ParamLimits

0x2544,	// (0x00011184) popup_note_window_t4

0x256c,	// (0x000111ac) popup_note_window_t5_ParamLimits

0x256c,	// (0x000111ac) popup_note_window_t5

0x0004,

0xf59b,	// (0x0001e1db) popup_note_window_t_ParamLimits

0xf59b,	// (0x0001e1db) popup_note_window_t

0x2590,	// (0x000111d0) bg_popup_window_pane_cp6_ParamLimits

0x2590,	// (0x000111d0) bg_popup_window_pane_cp6

0x5521,	// (0x00014161) popup_note_image_window_g1_ParamLimits

0x5521,	// (0x00014161) popup_note_image_window_g1

0x552d,	// (0x0001416d) popup_note_image_window_g2_ParamLimits

0x552d,	// (0x0001416d) popup_note_image_window_g2

0x0001,

0xf85a,	// (0x0001e49a) popup_note_image_window_g_ParamLimits

0xf85a,	// (0x0001e49a) popup_note_image_window_g

0x5546,	// (0x00014186) popup_note_image_window_t1_ParamLimits

0x5546,	// (0x00014186) popup_note_image_window_t1

0x555f,	// (0x0001419f) popup_note_image_window_t2_ParamLimits

0x555f,	// (0x0001419f) popup_note_image_window_t2

0x5578,	// (0x000141b8) popup_note_image_window_t3_ParamLimits

0x5578,	// (0x000141b8) popup_note_image_window_t3

0x0002,

0xf85f,	// (0x0001e49f) popup_note_image_window_t_ParamLimits

0xf85f,	// (0x0001e49f) popup_note_image_window_t

0x53e2,	// (0x00014022) bg_popup_window_pane_cp7_ParamLimits

0x53e2,	// (0x00014022) bg_popup_window_pane_cp7

0x5412,	// (0x00014052) popup_note_wait_window_g1_ParamLimits

0x5412,	// (0x00014052) popup_note_wait_window_g1

0x541e,	// (0x0001405e) popup_note_wait_window_g2_ParamLimits

0x541e,	// (0x0001405e) popup_note_wait_window_g2

0x0002,

0xf848,	// (0x0001e488) popup_note_wait_window_g_ParamLimits

0xf848,	// (0x0001e488) popup_note_wait_window_g

0x5436,	// (0x00014076) popup_note_wait_window_t1_ParamLimits

0x5436,	// (0x00014076) popup_note_wait_window_t1

0x545d,	// (0x0001409d) popup_note_wait_window_t2_ParamLimits

0x545d,	// (0x0001409d) popup_note_wait_window_t2

0x547a,	// (0x000140ba) popup_note_wait_window_t3_ParamLimits

0x547a,	// (0x000140ba) popup_note_wait_window_t3

0x548d,	// (0x000140cd) popup_note_wait_window_t4_ParamLimits

0x548d,	// (0x000140cd) popup_note_wait_window_t4

0x0004,

0xf84f,	// (0x0001e48f) popup_note_wait_window_t_ParamLimits

0xf84f,	// (0x0001e48f) popup_note_wait_window_t

0x54b2,	// (0x000140f2) wait_bar_pane_ParamLimits

0x54b2,	// (0x000140f2) wait_bar_pane

0x2171,	// (0x00010db1) wait_anim_pane

0x2171,	// (0x00010db1) wait_border_pane

0x2167,	// (0x00010da7) wait_anim_pane_g1

0x2167,	// (0x00010da7) wait_anim_pane_g2

0x0001,

0xf71a,	// (0x0001e35a) wait_anim_pane_g

0x5386,	// (0x00013fc6) wait_border_pane_g1

0x5391,	// (0x00013fd1) wait_border_pane_g2

0x539a,	// (0x00013fda) wait_border_pane_g3

0x0002,

0xf841,	// (0x0001e481) wait_border_pane_g

0x51f6,	// (0x00013e36) bg_popup_window_pane_cp16_ParamLimits

0x51f6,	// (0x00013e36) bg_popup_window_pane_cp16

0x52f6,	// (0x00013f36) indicator_popup_pane_cp4_ParamLimits

0x52f6,	// (0x00013f36) indicator_popup_pane_cp4

0x530a,	// (0x00013f4a) popup_query_data_window_t1_ParamLimits

0x530a,	// (0x00013f4a) popup_query_data_window_t1

0x531c,	// (0x00013f5c) popup_query_data_window_t2_ParamLimits

0x531c,	// (0x00013f5c) popup_query_data_window_t2

0x5335,	// (0x00013f75) popup_query_data_window_t3_ParamLimits

0x5335,	// (0x00013f75) popup_query_data_window_t3

0x0002,

0xf83a,	// (0x0001e47a) popup_query_data_window_t_ParamLimits

0xf83a,	// (0x0001e47a) popup_query_data_window_t

0x534f,	// (0x00013f8f) query_popup_data_pane_ParamLimits

0x534f,	// (0x00013f8f) query_popup_data_pane

0x5363,	// (0x00013fa3) query_popup_data_pane_cp1_ParamLimits

0x5363,	// (0x00013fa3) query_popup_data_pane_cp1

0x51f6,	// (0x00013e36) bg_popup_window_pane_cp10_ParamLimits

0x51f6,	// (0x00013e36) bg_popup_window_pane_cp10

0x5228,	// (0x00013e68) indicator_popup_pane_ParamLimits

0x5228,	// (0x00013e68) indicator_popup_pane

0x524a,	// (0x00013e8a) popup_query_code_window_t1_ParamLimits

0x524a,	// (0x00013e8a) popup_query_code_window_t1

0x5264,	// (0x00013ea4) popup_query_code_window_t2_ParamLimits

0x5264,	// (0x00013ea4) popup_query_code_window_t2

0x52ad,	// (0x00013eed) popup_query_code_window_t3_ParamLimits

0x52ad,	// (0x00013eed) popup_query_code_window_t3

0x0002,

0xf833,	// (0x0001e473) popup_query_code_window_t_ParamLimits

0xf833,	// (0x0001e473) popup_query_code_window_t

0x52dc,	// (0x00013f1c) query_popup_pane_ParamLimits

0x52dc,	// (0x00013f1c) query_popup_pane

0x2590,	// (0x000111d0) bg_popup_window_pane_cp15_ParamLimits

0x2590,	// (0x000111d0) bg_popup_window_pane_cp15

0x25ae,	// (0x000111ee) indicator_popup_pane_cp1_ParamLimits

0x25ae,	// (0x000111ee) indicator_popup_pane_cp1

0x25c1,	// (0x00011201) indicator_popup_pane_cp2_ParamLimits

0x25c1,	// (0x00011201) indicator_popup_pane_cp2

0x25d4,	// (0x00011214) popup_query_data_code_window_g1_ParamLimits

0x25d4,	// (0x00011214) popup_query_data_code_window_g1

0x25e7,	// (0x00011227) popup_query_data_code_window_t1_ParamLimits

0x25e7,	// (0x00011227) popup_query_data_code_window_t1

0x25f9,	// (0x00011239) popup_query_data_code_window_t2_ParamLimits

0x25f9,	// (0x00011239) popup_query_data_code_window_t2

0x260b,	// (0x0001124b) popup_query_data_code_window_t3_ParamLimits

0x260b,	// (0x0001124b) popup_query_data_code_window_t3

0x2621,	// (0x00011261) popup_query_data_code_window_t4_ParamLimits

0x2621,	// (0x00011261) popup_query_data_code_window_t4

0x0003,

0xf5a6,	// (0x0001e1e6) popup_query_data_code_window_t_ParamLimits

0xf5a6,	// (0x0001e1e6) popup_query_data_code_window_t

0x3ca1,	// (0x000128e1) list_single_midp_graphic_pane_g3

0x2639,	// (0x00011279) query_popup_data_pane_cp2_ParamLimits

0x264c,	// (0x0001128c) query_popup_pane_cp2_ParamLimits

0x264c,	// (0x0001128c) query_popup_pane_cp2

0x2171,	// (0x00010db1) bg_popup_window_pane_cp11

0x51ee,	// (0x00013e2e) heading_pane_cp5

0x2734,	// (0x00011374) listscroll_popup_info_pane

0x2171,	// (0x00010db1) input_focus_pane_cp3

0x265f,	// (0x0001129f) query_popup_pane_t1

0x266d,	// (0x000112ad) list_popup_info_pane_ParamLimits

0x266d,	// (0x000112ad) list_popup_info_pane

0x267c,	// (0x000112bc) listscroll_popup_info_pane_g1

0x2684,	// (0x000112c4) scroll_pane_cp7

0x268e,	// (0x000112ce) popup_info_list_pane_t1_ParamLimits

0x268e,	// (0x000112ce) popup_info_list_pane_t1

0x26a8,	// (0x000112e8) popup_info_list_pane_t2_ParamLimits

0x26a8,	// (0x000112e8) popup_info_list_pane_t2

0x0001,

0xf5af,	// (0x0001e1ef) popup_info_list_pane_t_ParamLimits

0xf5af,	// (0x0001e1ef) popup_info_list_pane_t

0x2171,	// (0x00010db1) bg_popup_window_pane_cp12

0x6659,	// (0x00015299) find_popup_pane

0x2251,	// (0x00010e91) bg_popup_window_pane_cp3

0x26c2,	// (0x00011302) heading_pane_cp3

0x26ce,	// (0x0001130e) listscroll_popup_graphic_pane

0x2171,	// (0x00010db1) bg_popup_window_pane_cp4

0x272a,	// (0x0001136a) heading_pane_cp4

0x2734,	// (0x00011374) listscroll_popup_colour_pane

0x273c,	// (0x0001137c) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x273c,	// (0x0001137c) cell_large_graphic_colour_none_popup_pane

0x2750,	// (0x00011390) grid_large_graphic_colour_popup_pane_ParamLimits

0x2750,	// (0x00011390) grid_large_graphic_colour_popup_pane

0x2774,	// (0x000113b4) listscroll_popup_colour_pane_g1_ParamLimits

0x2774,	// (0x000113b4) listscroll_popup_colour_pane_g1

0x278b,	// (0x000113cb) listscroll_popup_colour_pane_g2_ParamLimits

0x278b,	// (0x000113cb) listscroll_popup_colour_pane_g2

0x27a2,	// (0x000113e2) listscroll_popup_colour_pane_g3_ParamLimits

0x27a2,	// (0x000113e2) listscroll_popup_colour_pane_g3

0x27b2,	// (0x000113f2) listscroll_popup_colour_pane_g4_ParamLimits

0x27b2,	// (0x000113f2) listscroll_popup_colour_pane_g4

0x0003,

0xf5b4,	// (0x0001e1f4) listscroll_popup_colour_pane_g_ParamLimits

0xf5b4,	// (0x0001e1f4) listscroll_popup_colour_pane_g

0x27c1,	// (0x00011401) scroll_pane_cp6_ParamLimits

0x27c1,	// (0x00011401) scroll_pane_cp6

0x27d3,	// (0x00011413) cell_large_graphic_colour_popup_pane_ParamLimits

0x27d3,	// (0x00011413) cell_large_graphic_colour_popup_pane

0x27f2,	// (0x00011432) cell_large_graphic_colour_none_popup_pane_t1

0x2171,	// (0x00010db1) grid_highlight_pane_cp5

0x2801,	// (0x00011441) cell_large_graphic_colour_popup_pane_g1

0x2809,	// (0x00011449) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5bd,	// (0x0001e1fd) cell_large_graphic_colour_popup_pane_g

0x2811,	// (0x00011451) cell_large_graphic_colour_popup_pane_g2_copy1

0x281a,	// (0x0001145a) grid_highlight_pane_cp4

0x2822,	// (0x00011462) bg_popup_window_pane_cp8_ParamLimits

0x2822,	// (0x00011462) bg_popup_window_pane_cp8

0x283d,	// (0x0001147d) popup_snote_single_text_window_g1_ParamLimits

0x283d,	// (0x0001147d) popup_snote_single_text_window_g1

0x284f,	// (0x0001148f) popup_snote_single_text_window_t1_ParamLimits

0x284f,	// (0x0001148f) popup_snote_single_text_window_t1

0x2862,	// (0x000114a2) popup_snote_single_text_window_t2_ParamLimits

0x2862,	// (0x000114a2) popup_snote_single_text_window_t2

0x2875,	// (0x000114b5) popup_snote_single_text_window_t3_ParamLimits

0x2875,	// (0x000114b5) popup_snote_single_text_window_t3

0x28ae,	// (0x000114ee) popup_snote_single_text_window_t4_ParamLimits

0x28ae,	// (0x000114ee) popup_snote_single_text_window_t4

0x28e2,	// (0x00011522) popup_snote_single_text_window_t5_ParamLimits

0x28e2,	// (0x00011522) popup_snote_single_text_window_t5

0x0004,

0xf5c2,	// (0x0001e202) popup_snote_single_text_window_t_ParamLimits

0xf5c2,	// (0x0001e202) popup_snote_single_text_window_t

0x2911,	// (0x00011551) bg_popup_window_pane_cp9_ParamLimits

0x2911,	// (0x00011551) bg_popup_window_pane_cp9

0x283d,	// (0x0001147d) popup_snote_single_graphic_window_g1_ParamLimits

0x283d,	// (0x0001147d) popup_snote_single_graphic_window_g1

0x291f,	// (0x0001155f) popup_snote_single_graphic_window_g2_ParamLimits

0x291f,	// (0x0001155f) popup_snote_single_graphic_window_g2

0x0001,

0xf5cd,	// (0x0001e20d) popup_snote_single_graphic_window_g_ParamLimits

0xf5cd,	// (0x0001e20d) popup_snote_single_graphic_window_g

0x292b,	// (0x0001156b) popup_snote_single_graphic_window_t1_ParamLimits

0x292b,	// (0x0001156b) popup_snote_single_graphic_window_t1

0x293e,	// (0x0001157e) popup_snote_single_graphic_window_t2_ParamLimits

0x293e,	// (0x0001157e) popup_snote_single_graphic_window_t2

0x2951,	// (0x00011591) popup_snote_single_graphic_window_t3_ParamLimits

0x2951,	// (0x00011591) popup_snote_single_graphic_window_t3

0x298a,	// (0x000115ca) popup_snote_single_graphic_window_t4_ParamLimits

0x298a,	// (0x000115ca) popup_snote_single_graphic_window_t4

0x29be,	// (0x000115fe) popup_snote_single_graphic_window_t5_ParamLimits

0x29be,	// (0x000115fe) popup_snote_single_graphic_window_t5

0x0004,

0xf5d2,	// (0x0001e212) popup_snote_single_graphic_window_t_ParamLimits

0xf5d2,	// (0x0001e212) popup_snote_single_graphic_window_t

0x6599,	// (0x000151d9) grid_graphic_popup_pane_ParamLimits

0x6599,	// (0x000151d9) grid_graphic_popup_pane

0x65c5,	// (0x00015205) listscroll_popup_graphic_pane_g1_ParamLimits

0x65c5,	// (0x00015205) listscroll_popup_graphic_pane_g1

0x65d9,	// (0x00015219) listscroll_popup_graphic_pane_g2_ParamLimits

0x65d9,	// (0x00015219) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b0,	// (0x0001e5f0) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b0,	// (0x0001e5f0) listscroll_popup_graphic_pane_g

0x65ed,	// (0x0001522d) scroll_pane_cp5

0x6544,	// (0x00015184) cell_graphic_popup_pane_ParamLimits

0x6544,	// (0x00015184) cell_graphic_popup_pane

0x6525,	// (0x00015165) cell_graphic_popup_pane_g1

0x652d,	// (0x0001516d) cell_graphic_popup_pane_g2

0x2811,	// (0x00011451) cell_graphic_popup_pane_g3

0x0002,

0xf9a9,	// (0x0001e5e9) cell_graphic_popup_pane_g

0x6536,	// (0x00015176) cell_graphic_popup_pane_t2

0x281a,	// (0x0001145a) grid_highlight_pane_cp3

0x29ff,	// (0x0001163f) list_gen_pane_ParamLimits

0x29ff,	// (0x0001163f) list_gen_pane

0x2a31,	// (0x00011671) scroll_pane

0x6487,	// (0x000150c7) bg_list_pane_g1_ParamLimits

0x6487,	// (0x000150c7) bg_list_pane_g1

0x64a2,	// (0x000150e2) bg_list_pane_g2_ParamLimits

0x64a2,	// (0x000150e2) bg_list_pane_g2

0x64b5,	// (0x000150f5) bg_list_pane_g3_ParamLimits

0x64b5,	// (0x000150f5) bg_list_pane_g3

0x64c7,	// (0x00015107) bg_list_pane_g4_ParamLimits

0x64c7,	// (0x00015107) bg_list_pane_g4

0x64d9,	// (0x00015119) bg_list_pane_g5_ParamLimits

0x64d9,	// (0x00015119) bg_list_pane_g5

0x0004,

0xf99e,	// (0x0001e5de) bg_list_pane_g_ParamLimits

0xf99e,	// (0x0001e5de) bg_list_pane_g

0xcc4d,	// (0x0001b88d) list_double2_graphic_large_graphic_pane_ParamLimits

0xcc4d,	// (0x0001b88d) list_double2_graphic_large_graphic_pane

0xcc4d,	// (0x0001b88d) list_double2_graphic_pane_ParamLimits

0xcc4d,	// (0x0001b88d) list_double2_graphic_pane

0xcc4d,	// (0x0001b88d) list_double2_large_graphic_pane_ParamLimits

0xcc4d,	// (0x0001b88d) list_double2_large_graphic_pane

0xcc4d,	// (0x0001b88d) list_double2_pane_ParamLimits

0xcc4d,	// (0x0001b88d) list_double2_pane

0xcc4d,	// (0x0001b88d) list_double_graphic_heading_pane_ParamLimits

0xcc4d,	// (0x0001b88d) list_double_graphic_heading_pane

0xcc4d,	// (0x0001b88d) list_double_graphic_pane_ParamLimits

0xcc4d,	// (0x0001b88d) list_double_graphic_pane

0xcc4d,	// (0x0001b88d) list_double_heading_pane_ParamLimits

0xcc4d,	// (0x0001b88d) list_double_heading_pane

0xcc4d,	// (0x0001b88d) list_double_large_graphic_pane_ParamLimits

0xcc4d,	// (0x0001b88d) list_double_large_graphic_pane

0xcc4d,	// (0x0001b88d) list_double_number_pane_ParamLimits

0xcc4d,	// (0x0001b88d) list_double_number_pane

0xcc4d,	// (0x0001b88d) list_double_pane_ParamLimits

0xcc4d,	// (0x0001b88d) list_double_pane

0xcc4d,	// (0x0001b88d) list_double_time_pane_ParamLimits

0xcc4d,	// (0x0001b88d) list_double_time_pane

0xcc4d,	// (0x0001b88d) list_setting_number_pane_ParamLimits

0xcc4d,	// (0x0001b88d) list_setting_number_pane

0xcc4d,	// (0x0001b88d) list_setting_pane_ParamLimits

0xcc4d,	// (0x0001b88d) list_setting_pane

0xcca9,	// (0x0001b8e9) list_single_2graphic_pane_ParamLimits

0xcca9,	// (0x0001b8e9) list_single_2graphic_pane

0xcca9,	// (0x0001b8e9) list_single_graphic_heading_pane_ParamLimits

0xcca9,	// (0x0001b8e9) list_single_graphic_heading_pane

0xcca9,	// (0x0001b8e9) list_single_graphic_pane_ParamLimits

0xcca9,	// (0x0001b8e9) list_single_graphic_pane

0xcca9,	// (0x0001b8e9) list_single_heading_pane_ParamLimits

0xcca9,	// (0x0001b8e9) list_single_heading_pane

0xcd17,	// (0x0001b957) list_single_large_graphic_pane_ParamLimits

0xcd17,	// (0x0001b957) list_single_large_graphic_pane

0xcca9,	// (0x0001b8e9) list_single_number_heading_pane_ParamLimits

0xcca9,	// (0x0001b8e9) list_single_number_heading_pane

0xcca9,	// (0x0001b8e9) list_single_number_pane_ParamLimits

0xcca9,	// (0x0001b8e9) list_single_number_pane

0xcca9,	// (0x0001b8e9) list_single_pane_ParamLimits

0xcca9,	// (0x0001b8e9) list_single_pane

0x2171,	// (0x00010db1) list_highlight_pane_cp1

0xc3d8,	// (0x0001b018) list_single_pane_g1_ParamLimits

0xc3d8,	// (0x0001b018) list_single_pane_g1

0xc3e4,	// (0x0001b024) list_single_pane_g2_ParamLimits

0xc3e4,	// (0x0001b024) list_single_pane_g2

0x0001,

0xf5e4,	// (0x0001e224) list_single_pane_g_ParamLimits

0xf5e4,	// (0x0001e224) list_single_pane_g

0xcc37,	// (0x0001b877) list_single_pane_t1_ParamLimits

0xcc37,	// (0x0001b877) list_single_pane_t1

0xc3d8,	// (0x0001b018) list_single_number_pane_g1_ParamLimits

0xc3d8,	// (0x0001b018) list_single_number_pane_g1

0xc3e4,	// (0x0001b024) list_single_number_pane_g2_ParamLimits

0xc3e4,	// (0x0001b024) list_single_number_pane_g2

0x0001,

0xf5e4,	// (0x0001e224) list_single_number_pane_g_ParamLimits

0xf5e4,	// (0x0001e224) list_single_number_pane_g

0xcb6b,	// (0x0001b7ab) list_single_number_pane_t1_ParamLimits

0xcb6b,	// (0x0001b7ab) list_single_number_pane_t1

0xcbf7,	// (0x0001b837) list_single_number_pane_t2_ParamLimits

0xcbf7,	// (0x0001b837) list_single_number_pane_t2

0x0001,

0xf95f,	// (0x0001e59f) list_single_number_pane_t_ParamLimits

0xf95f,	// (0x0001e59f) list_single_number_pane_t

0xc3cc,	// (0x0001b00c) list_single_graphic_pane_g1_ParamLimits

0xc3cc,	// (0x0001b00c) list_single_graphic_pane_g1

0xc3d8,	// (0x0001b018) list_single_graphic_pane_g2_ParamLimits

0xc3d8,	// (0x0001b018) list_single_graphic_pane_g2

0xc3e4,	// (0x0001b024) list_single_graphic_pane_g3_ParamLimits

0xc3e4,	// (0x0001b024) list_single_graphic_pane_g3

0x0002,

0xf5dd,	// (0x0001e21d) list_single_graphic_pane_g_ParamLimits

0xf5dd,	// (0x0001e21d) list_single_graphic_pane_g

0xc3f0,	// (0x0001b030) list_single_graphic_pane_t1_ParamLimits

0xc3f0,	// (0x0001b030) list_single_graphic_pane_t1

0xc3d8,	// (0x0001b018) list_single_heading_pane_g1_ParamLimits

0xc3d8,	// (0x0001b018) list_single_heading_pane_g1

0xc3e4,	// (0x0001b024) list_single_heading_pane_g2_ParamLimits

0xc3e4,	// (0x0001b024) list_single_heading_pane_g2

0x0001,

0xf5e4,	// (0x0001e224) list_single_heading_pane_g_ParamLimits

0xf5e4,	// (0x0001e224) list_single_heading_pane_g

0xc406,	// (0x0001b046) list_single_heading_pane_t1_ParamLimits

0xc406,	// (0x0001b046) list_single_heading_pane_t1

0xc41c,	// (0x0001b05c) list_single_heading_pane_t2_ParamLimits

0xc41c,	// (0x0001b05c) list_single_heading_pane_t2

0x0001,

0xf5e9,	// (0x0001e229) list_single_heading_pane_t_ParamLimits

0xf5e9,	// (0x0001e229) list_single_heading_pane_t

0xc3d8,	// (0x0001b018) list_single_number_heading_pane_g1_ParamLimits

0xc3d8,	// (0x0001b018) list_single_number_heading_pane_g1

0xc3e4,	// (0x0001b024) list_single_number_heading_pane_g2_ParamLimits

0xc3e4,	// (0x0001b024) list_single_number_heading_pane_g2

0x0001,

0xf5e4,	// (0x0001e224) list_single_number_heading_pane_g_ParamLimits

0xf5e4,	// (0x0001e224) list_single_number_heading_pane_g

0xc406,	// (0x0001b046) list_single_number_heading_pane_t1_ParamLimits

0xc406,	// (0x0001b046) list_single_number_heading_pane_t1

0xc42e,	// (0x0001b06e) list_single_number_heading_pane_t2_ParamLimits

0xc42e,	// (0x0001b06e) list_single_number_heading_pane_t2

0xc440,	// (0x0001b080) list_single_number_heading_pane_t3_ParamLimits

0xc440,	// (0x0001b080) list_single_number_heading_pane_t3

0x0002,

0xf5ee,	// (0x0001e22e) list_single_number_heading_pane_t_ParamLimits

0xf5ee,	// (0x0001e22e) list_single_number_heading_pane_t

0xc452,	// (0x0001b092) list_single_graphic_heading_pane_g1_ParamLimits

0xc452,	// (0x0001b092) list_single_graphic_heading_pane_g1

0xc45e,	// (0x0001b09e) list_single_graphic_heading_pane_g4_ParamLimits

0xc45e,	// (0x0001b09e) list_single_graphic_heading_pane_g4

0xc3e4,	// (0x0001b024) list_single_graphic_heading_pane_g5_ParamLimits

0xc3e4,	// (0x0001b024) list_single_graphic_heading_pane_g5

0x0002,

0xf5f5,	// (0x0001e235) list_single_graphic_heading_pane_g_ParamLimits

0xf5f5,	// (0x0001e235) list_single_graphic_heading_pane_g

0xc406,	// (0x0001b046) list_single_graphic_heading_pane_t1_ParamLimits

0xc406,	// (0x0001b046) list_single_graphic_heading_pane_t1

0xc46f,	// (0x0001b0af) list_single_graphic_heading_pane_t2_ParamLimits

0xc46f,	// (0x0001b0af) list_single_graphic_heading_pane_t2

0x0001,

0xf5fc,	// (0x0001e23c) list_single_graphic_heading_pane_t_ParamLimits

0xf5fc,	// (0x0001e23c) list_single_graphic_heading_pane_t

0xc481,	// (0x0001b0c1) list_single_large_graphic_pane_g1_ParamLimits

0xc481,	// (0x0001b0c1) list_single_large_graphic_pane_g1

0xc48d,	// (0x0001b0cd) list_single_large_graphic_pane_g2_ParamLimits

0xc48d,	// (0x0001b0cd) list_single_large_graphic_pane_g2

0xc499,	// (0x0001b0d9) list_single_large_graphic_pane_g3_ParamLimits

0xc499,	// (0x0001b0d9) list_single_large_graphic_pane_g3

0x0002,

0xf601,	// (0x0001e241) list_single_large_graphic_pane_g_ParamLimits

0xf601,	// (0x0001e241) list_single_large_graphic_pane_g

0x5391,	// (0x00013fd1) wait_border_pane_g2_copy1

0xc4a5,	// (0x0001b0e5) list_single_large_graphic_pane_g4_cp2

0xc4ad,	// (0x0001b0ed) list_single_large_graphic_pane_t1_ParamLimits

0xc4ad,	// (0x0001b0ed) list_single_large_graphic_pane_t1

0xc4c3,	// (0x0001b103) list_double_pane_g1_ParamLimits

0xc4c3,	// (0x0001b103) list_double_pane_g1

0xc4cf,	// (0x0001b10f) list_double_pane_g2_ParamLimits

0xc4cf,	// (0x0001b10f) list_double_pane_g2

0x0001,

0xf608,	// (0x0001e248) list_double_pane_g_ParamLimits

0xf608,	// (0x0001e248) list_double_pane_g

0xc4db,	// (0x0001b11b) list_double_pane_t1_ParamLimits

0xc4db,	// (0x0001b11b) list_double_pane_t1

0xc4f1,	// (0x0001b131) list_double_pane_t2_ParamLimits

0xc4f1,	// (0x0001b131) list_double_pane_t2

0x0001,

0xf60d,	// (0x0001e24d) list_double_pane_t_ParamLimits

0xf60d,	// (0x0001e24d) list_double_pane_t

0xc503,	// (0x0001b143) list_double2_pane_g1_ParamLimits

0xc503,	// (0x0001b143) list_double2_pane_g1

0xc4cf,	// (0x0001b10f) list_double2_pane_g2_ParamLimits

0xc4cf,	// (0x0001b10f) list_double2_pane_g2

0x0001,

0xf612,	// (0x0001e252) list_double2_pane_g_ParamLimits

0xf612,	// (0x0001e252) list_double2_pane_g

0xc4db,	// (0x0001b11b) list_double2_pane_t1_ParamLimits

0xc4db,	// (0x0001b11b) list_double2_pane_t1

0xc514,	// (0x0001b154) list_double2_pane_t2_ParamLimits

0xc514,	// (0x0001b154) list_double2_pane_t2

0x0001,

0xf617,	// (0x0001e257) list_double2_pane_t_ParamLimits

0xf617,	// (0x0001e257) list_double2_pane_t

0xc4c3,	// (0x0001b103) list_double_number_pane_g1_ParamLimits

0xc4c3,	// (0x0001b103) list_double_number_pane_g1

0xc4cf,	// (0x0001b10f) list_double_number_pane_g2_ParamLimits

0xc4cf,	// (0x0001b10f) list_double_number_pane_g2

0x0001,

0xf608,	// (0x0001e248) list_double_number_pane_g_ParamLimits

0xf608,	// (0x0001e248) list_double_number_pane_g

0xc526,	// (0x0001b166) list_double_number_pane_t1_ParamLimits

0xc526,	// (0x0001b166) list_double_number_pane_t1

0xc538,	// (0x0001b178) list_double_number_pane_t2_ParamLimits

0xc538,	// (0x0001b178) list_double_number_pane_t2

0xc54e,	// (0x0001b18e) list_double_number_pane_t3_ParamLimits

0xc54e,	// (0x0001b18e) list_double_number_pane_t3

0x0002,

0xf61c,	// (0x0001e25c) list_double_number_pane_t_ParamLimits

0xf61c,	// (0x0001e25c) list_double_number_pane_t

0xc560,	// (0x0001b1a0) list_double_graphic_pane_g1_ParamLimits

0xc560,	// (0x0001b1a0) list_double_graphic_pane_g1

0xc56c,	// (0x0001b1ac) list_double_graphic_pane_g2_ParamLimits

0xc56c,	// (0x0001b1ac) list_double_graphic_pane_g2

0xc57b,	// (0x0001b1bb) list_double_graphic_pane_g3_ParamLimits

0xc57b,	// (0x0001b1bb) list_double_graphic_pane_g3

0x0003,

0xf623,	// (0x0001e263) list_double_graphic_pane_g_ParamLimits

0xf623,	// (0x0001e263) list_double_graphic_pane_g

0xc593,	// (0x0001b1d3) list_double_graphic_pane_t1_ParamLimits

0xc593,	// (0x0001b1d3) list_double_graphic_pane_t1

0xc5a9,	// (0x0001b1e9) list_double_graphic_pane_t2_ParamLimits

0xc5a9,	// (0x0001b1e9) list_double_graphic_pane_t2

0x0001,

0xf62c,	// (0x0001e26c) list_double_graphic_pane_t_ParamLimits

0xf62c,	// (0x0001e26c) list_double_graphic_pane_t

0xc560,	// (0x0001b1a0) list_double2_graphic_pane_g1_ParamLimits

0xc560,	// (0x0001b1a0) list_double2_graphic_pane_g1

0xc5bb,	// (0x0001b1fb) list_double2_graphic_pane_g2_ParamLimits

0xc5bb,	// (0x0001b1fb) list_double2_graphic_pane_g2

0xc5c7,	// (0x0001b207) list_double2_graphic_pane_g3_ParamLimits

0xc5c7,	// (0x0001b207) list_double2_graphic_pane_g3

0x0002,

0xf631,	// (0x0001e271) list_double2_graphic_pane_g_ParamLimits

0xf631,	// (0x0001e271) list_double2_graphic_pane_g

0xc538,	// (0x0001b178) list_double2_graphic_pane_t1_ParamLimits

0xc538,	// (0x0001b178) list_double2_graphic_pane_t1

0xc5d3,	// (0x0001b213) list_double2_graphic_pane_t2_ParamLimits

0xc5d3,	// (0x0001b213) list_double2_graphic_pane_t2

0x0001,

0xf638,	// (0x0001e278) list_double2_graphic_pane_t_ParamLimits

0xf638,	// (0x0001e278) list_double2_graphic_pane_t

0xc5e5,	// (0x0001b225) list_double_large_graphic_pane_g1_ParamLimits

0xc5e5,	// (0x0001b225) list_double_large_graphic_pane_g1

0xc503,	// (0x0001b143) list_double_large_graphic_pane_g2_ParamLimits

0xc503,	// (0x0001b143) list_double_large_graphic_pane_g2

0xc4cf,	// (0x0001b10f) list_double_large_graphic_pane_g3_ParamLimits

0xc4cf,	// (0x0001b10f) list_double_large_graphic_pane_g3

0xc610,	// (0x0001b250) list_double_large_graphic_pane_g4_ParamLimits

0xc610,	// (0x0001b250) list_double_large_graphic_pane_g4

0x0004,

0xf63d,	// (0x0001e27d) list_double_large_graphic_pane_g_ParamLimits

0xf63d,	// (0x0001e27d) list_double_large_graphic_pane_g

0xc638,	// (0x0001b278) list_double_large_graphic_pane_t1_ParamLimits

0xc638,	// (0x0001b278) list_double_large_graphic_pane_t1

0xc651,	// (0x0001b291) list_double_large_graphic_pane_t2_ParamLimits

0xc651,	// (0x0001b291) list_double_large_graphic_pane_t2

0x0001,

0xf648,	// (0x0001e288) list_double_large_graphic_pane_t_ParamLimits

0xf648,	// (0x0001e288) list_double_large_graphic_pane_t

0xc663,	// (0x0001b2a3) list_double2_large_graphic_pane_g1_ParamLimits

0xc663,	// (0x0001b2a3) list_double2_large_graphic_pane_g1

0xc503,	// (0x0001b143) list_double2_large_graphic_pane_g2_ParamLimits

0xc503,	// (0x0001b143) list_double2_large_graphic_pane_g2

0xc4cf,	// (0x0001b10f) list_double2_large_graphic_pane_g3_ParamLimits

0xc4cf,	// (0x0001b10f) list_double2_large_graphic_pane_g3

0x0002,

0xf64d,	// (0x0001e28d) list_double2_large_graphic_pane_g_ParamLimits

0xf64d,	// (0x0001e28d) list_double2_large_graphic_pane_g

0xc66f,	// (0x0001b2af) list_double2_large_graphic_pane_t1_ParamLimits

0xc66f,	// (0x0001b2af) list_double2_large_graphic_pane_t1

0xc685,	// (0x0001b2c5) list_double2_large_graphic_pane_t2_ParamLimits

0xc685,	// (0x0001b2c5) list_double2_large_graphic_pane_t2

0x0001,

0xf654,	// (0x0001e294) list_double2_large_graphic_pane_t_ParamLimits

0xf654,	// (0x0001e294) list_double2_large_graphic_pane_t

0xc697,	// (0x0001b2d7) list_double_heading_pane_g1_ParamLimits

0xc697,	// (0x0001b2d7) list_double_heading_pane_g1

0xc6a8,	// (0x0001b2e8) list_double_heading_pane_g2_ParamLimits

0xc6a8,	// (0x0001b2e8) list_double_heading_pane_g2

0x0001,

0xf659,	// (0x0001e299) list_double_heading_pane_g_ParamLimits

0xf659,	// (0x0001e299) list_double_heading_pane_g

0xc6b4,	// (0x0001b2f4) list_double_heading_pane_t1_ParamLimits

0xc6b4,	// (0x0001b2f4) list_double_heading_pane_t1

0xc514,	// (0x0001b154) list_double_heading_pane_t2_ParamLimits

0xc514,	// (0x0001b154) list_double_heading_pane_t2

0x0001,

0xf65e,	// (0x0001e29e) list_double_heading_pane_t_ParamLimits

0xf65e,	// (0x0001e29e) list_double_heading_pane_t

0xc560,	// (0x0001b1a0) list_double_graphic_heading_pane_g1_ParamLimits

0xc560,	// (0x0001b1a0) list_double_graphic_heading_pane_g1

0xc697,	// (0x0001b2d7) list_double_graphic_heading_pane_g2_ParamLimits

0xc697,	// (0x0001b2d7) list_double_graphic_heading_pane_g2

0xc6a8,	// (0x0001b2e8) list_double_graphic_heading_pane_g3_ParamLimits

0xc6a8,	// (0x0001b2e8) list_double_graphic_heading_pane_g3

0x0002,

0xf663,	// (0x0001e2a3) list_double_graphic_heading_pane_g_ParamLimits

0xf663,	// (0x0001e2a3) list_double_graphic_heading_pane_g

0xc6ca,	// (0x0001b30a) list_double_graphic_heading_pane_t1_ParamLimits

0xc6ca,	// (0x0001b30a) list_double_graphic_heading_pane_t1

0xc5d3,	// (0x0001b213) list_double_graphic_heading_pane_t2_ParamLimits

0xc5d3,	// (0x0001b213) list_double_graphic_heading_pane_t2

0x0001,

0xf66a,	// (0x0001e2aa) list_double_graphic_heading_pane_t_ParamLimits

0xf66a,	// (0x0001e2aa) list_double_graphic_heading_pane_t

0xc503,	// (0x0001b143) list_double_time_pane_g1_ParamLimits

0xc503,	// (0x0001b143) list_double_time_pane_g1

0xc4cf,	// (0x0001b10f) list_double_time_pane_g2_ParamLimits

0xc4cf,	// (0x0001b10f) list_double_time_pane_g2

0x0001,

0xf612,	// (0x0001e252) list_double_time_pane_g_ParamLimits

0xf612,	// (0x0001e252) list_double_time_pane_g

0xc66f,	// (0x0001b2af) list_double_time_pane_t1_ParamLimits

0xc66f,	// (0x0001b2af) list_double_time_pane_t1

0xc6e0,	// (0x0001b320) list_double_time_pane_t2_ParamLimits

0xc6e0,	// (0x0001b320) list_double_time_pane_t2

0xc6f2,	// (0x0001b332) list_double_time_pane_t3_ParamLimits

0xc6f2,	// (0x0001b332) list_double_time_pane_t3

0xc704,	// (0x0001b344) list_double_time_pane_t4_ParamLimits

0xc704,	// (0x0001b344) list_double_time_pane_t4

0x0003,

0xf66f,	// (0x0001e2af) list_double_time_pane_t_ParamLimits

0xf66f,	// (0x0001e2af) list_double_time_pane_t

0xc716,	// (0x0001b356) list_setting_pane_g1_ParamLimits

0xc716,	// (0x0001b356) list_setting_pane_g1

0xc722,	// (0x0001b362) list_setting_pane_g2_ParamLimits

0xc722,	// (0x0001b362) list_setting_pane_g2

0x0001,

0xf678,	// (0x0001e2b8) list_setting_pane_g_ParamLimits

0xf678,	// (0x0001e2b8) list_setting_pane_g

0xc72e,	// (0x0001b36e) list_setting_pane_t1_ParamLimits

0xc72e,	// (0x0001b36e) list_setting_pane_t1

0xc745,	// (0x0001b385) list_setting_pane_t2_ParamLimits

0xc745,	// (0x0001b385) list_setting_pane_t2

0x0002,

0xf67d,	// (0x0001e2bd) list_setting_pane_t_ParamLimits

0xf67d,	// (0x0001e2bd) list_setting_pane_t

0xc782,	// (0x0001b3c2) set_value_pane_cp_ParamLimits

0xc782,	// (0x0001b3c2) set_value_pane_cp

0xc78e,	// (0x0001b3ce) list_setting_number_pane_g1_ParamLimits

0xc78e,	// (0x0001b3ce) list_setting_number_pane_g1

0xc79a,	// (0x0001b3da) list_setting_number_pane_g2_ParamLimits

0xc79a,	// (0x0001b3da) list_setting_number_pane_g2

0x0001,

0xf684,	// (0x0001e2c4) list_setting_number_pane_g_ParamLimits

0xf684,	// (0x0001e2c4) list_setting_number_pane_g

0xc7a6,	// (0x0001b3e6) list_setting_number_pane_t1_ParamLimits

0xc7a6,	// (0x0001b3e6) list_setting_number_pane_t1

0xc7ba,	// (0x0001b3fa) list_setting_number_pane_t2_ParamLimits

0xc7ba,	// (0x0001b3fa) list_setting_number_pane_t2

0xc7d1,	// (0x0001b411) list_setting_number_pane_t3_ParamLimits

0xc7d1,	// (0x0001b411) list_setting_number_pane_t3

0x0003,

0xf689,	// (0x0001e2c9) list_setting_number_pane_t_ParamLimits

0xf689,	// (0x0001e2c9) list_setting_number_pane_t

0xc782,	// (0x0001b3c2) set_value_pane_ParamLimits

0xc782,	// (0x0001b3c2) set_value_pane

0x2eff,	// (0x00011b3f) bg_set_opt_pane_ParamLimits

0x2eff,	// (0x00011b3f) bg_set_opt_pane

0xc814,	// (0x0001b454) set_value_pane_t1

0x2f2e,	// (0x00011b6e) slider_set_pane_cp3

0x2f37,	// (0x00011b77) volume_small_pane_cp

0x2f40,	// (0x00011b80) list_form_gen_pane

0x2f49,	// (0x00011b89) scroll_pane_cp8

0xc82a,	// (0x0001b46a) form_field_data_pane_ParamLimits

0xc82a,	// (0x0001b46a) form_field_data_pane

0xc84a,	// (0x0001b48a) form_field_data_wide_pane_ParamLimits

0xc84a,	// (0x0001b48a) form_field_data_wide_pane

0xc86b,	// (0x0001b4ab) form_field_popup_pane_ParamLimits

0xc86b,	// (0x0001b4ab) form_field_popup_pane

0xc889,	// (0x0001b4c9) form_field_popup_wide_pane_ParamLimits

0xc889,	// (0x0001b4c9) form_field_popup_wide_pane

0xc8a4,	// (0x0001b4e4) form_field_slider_pane_ParamLimits

0xc8a4,	// (0x0001b4e4) form_field_slider_pane

0xc8b7,	// (0x0001b4f7) form_field_slider_wide_pane_ParamLimits

0xc8b7,	// (0x0001b4f7) form_field_slider_wide_pane

0x2ffa,	// (0x00011c3a) data_form_pane

0xc8d4,	// (0x0001b514) form_field_data_pane_t1

0x302a,	// (0x00011c6a) input_focus_pane

0x3038,	// (0x00011c78) data_form_wide_pane

0xc8fa,	// (0x0001b53a) form_field_data_wide_pane_t1

0x282f,	// (0x0001146f) input_focus_pane_cp6

0xc91c,	// (0x0001b55c) form_field_popup_pane_t1

0x302a,	// (0x00011c6a) input_focus_pane_cp7

0x30ac,	// (0x00011cec) list_form_pane

0xc93e,	// (0x0001b57e) form_field_popup_wide_pane_t1

0x302a,	// (0x00011c6a) input_focus_pane_cp8

0x30d5,	// (0x00011d15) list_form_wide_pane

0xc95b,	// (0x0001b59b) form_field_slider_pane_t1_ParamLimits

0xc95b,	// (0x0001b59b) form_field_slider_pane_t1

0xc96f,	// (0x0001b5af) form_field_slider_pane_t2_ParamLimits

0xc96f,	// (0x0001b5af) form_field_slider_pane_t2

0x0001,

0xf699,	// (0x0001e2d9) form_field_slider_pane_t_ParamLimits

0xf699,	// (0x0001e2d9) form_field_slider_pane_t

0x24e6,	// (0x00011126) input_focus_pane_cp9_ParamLimits

0x24e6,	// (0x00011126) input_focus_pane_cp9

0xc981,	// (0x0001b5c1) slider_cont_pane_ParamLimits

0xc981,	// (0x0001b5c1) slider_cont_pane

0x3126,	// (0x00011d66) form_field_slider_wide_pane_t1_ParamLimits

0x3126,	// (0x00011d66) form_field_slider_wide_pane_t1

0xc995,	// (0x0001b5d5) form_field_slider_wide_pane_t2_ParamLimits

0xc995,	// (0x0001b5d5) form_field_slider_wide_pane_t2

0x0001,

0xf69e,	// (0x0001e2de) form_field_slider_wide_pane_t_ParamLimits

0xf69e,	// (0x0001e2de) form_field_slider_wide_pane_t

0x24e6,	// (0x00011126) input_focus_pane_cp10_ParamLimits

0x24e6,	// (0x00011126) input_focus_pane_cp10

0xc9a7,	// (0x0001b5e7) slider_cont_pane_cp1_ParamLimits

0xc9a7,	// (0x0001b5e7) slider_cont_pane_cp1

0xc9bb,	// (0x0001b5fb) slider_form_pane_cp

0x3166,	// (0x00011da6) input_focus_pane_g1

0x316e,	// (0x00011dae) input_focus_pane_g2

0x3176,	// (0x00011db6) input_focus_pane_g3

0x317e,	// (0x00011dbe) input_focus_pane_g4

0x3186,	// (0x00011dc6) input_focus_pane_g5

0x318e,	// (0x00011dce) input_focus_pane_g6

0x3196,	// (0x00011dd6) input_focus_pane_g7

0x319e,	// (0x00011dde) input_focus_pane_g8

0x31a6,	// (0x00011de6) input_focus_pane_g9

0x2167,	// (0x00010da7) input_focus_pane_g10

0x0009,

0xf6a3,	// (0x0001e2e3) input_focus_pane_g

0x539a,	// (0x00013fda) wait_border_pane_g3_copy1

0xc9c3,	// (0x0001b603) data_form_pane_t1

0x2167,	// (0x00010da7) wait_anim_pane_g1_copy1

0xcc09,	// (0x0001b849) data_form_wide_pane_t1

0xc9de,	// (0x0001b61e) list_form_graphic_pane_cp_ParamLimits

0xc9de,	// (0x0001b61e) list_form_graphic_pane_cp

0x62ed,	// (0x00014f2d) slider_form_pane_g1

0x62f6,	// (0x00014f36) slider_form_pane_g2

0x0006,

0xf98f,	// (0x0001e5cf) slider_form_pane_g

0xc9f5,	// (0x0001b635) list_form_graphic_pane_ParamLimits

0xc9f5,	// (0x0001b635) list_form_graphic_pane

0xca0f,	// (0x0001b64f) list_form_graphic_pane_g1

0xca17,	// (0x0001b657) list_form_graphic_pane_t1_ParamLimits

0xca17,	// (0x0001b657) list_form_graphic_pane_t1

0x2251,	// (0x00010e91) list_highlight_pane_cp5_ParamLimits

0x2251,	// (0x00010e91) list_highlight_pane_cp5

0xca2c,	// (0x0001b66c) find_pane_g1

0x3220,	// (0x00011e60) input_find_pane

0xca35,	// (0x0001b675) input_find_pane_g1_ParamLimits

0xca35,	// (0x0001b675) input_find_pane_g1

0xca41,	// (0x0001b681) input_find_pane_t1_ParamLimits

0xca41,	// (0x0001b681) input_find_pane_t1

0xca56,	// (0x0001b696) input_find_pane_t2_ParamLimits

0xca56,	// (0x0001b696) input_find_pane_t2

0x0001,

0xf6b8,	// (0x0001e2f8) input_find_pane_t_ParamLimits

0xf6b8,	// (0x0001e2f8) input_find_pane_t

0x325f,	// (0x00011e9f) input_focus_pane_cp5_ParamLimits

0x325f,	// (0x00011e9f) input_focus_pane_cp5

0x3279,	// (0x00011eb9) bg_popup_window_pane_cp2_ParamLimits

0x3279,	// (0x00011eb9) bg_popup_window_pane_cp2

0x3286,	// (0x00011ec6) listscroll_menu_pane_ParamLimits

0x3286,	// (0x00011ec6) listscroll_menu_pane

0x3292,	// (0x00011ed2) popup_submenu_window_ParamLimits

0x3292,	// (0x00011ed2) popup_submenu_window

0x32b6,	// (0x00011ef6) find_popup_pane_g1

0x32be,	// (0x00011efe) input_popup_find_pane_cp

0x325f,	// (0x00011e9f) input_focus_pane_cp4_ParamLimits

0x325f,	// (0x00011e9f) input_focus_pane_cp4

0x32d6,	// (0x00011f16) input_popup_find_pane_t1_ParamLimits

0x32d6,	// (0x00011f16) input_popup_find_pane_t1

0x2171,	// (0x00010db1) bg_popup_sub_pane_cp

0x3304,	// (0x00011f44) listscroll_popup_sub_pane

0x330c,	// (0x00011f4c) list_submenu_pane_ParamLimits

0x330c,	// (0x00011f4c) list_submenu_pane

0x331d,	// (0x00011f5d) scroll_pane_cp4

0x3325,	// (0x00011f65) list_single_popup_submenu_pane_ParamLimits

0x3325,	// (0x00011f65) list_single_popup_submenu_pane

0x3338,	// (0x00011f78) list_single_popup_submenu_pane_g1

0x3340,	// (0x00011f80) list_single_popup_submenu_pane_t1_ParamLimits

0x3340,	// (0x00011f80) list_single_popup_submenu_pane_t1

0x2251,	// (0x00010e91) bg_active_tab_pane_cp1_ParamLimits

0x2251,	// (0x00010e91) bg_active_tab_pane_cp1

0x3355,	// (0x00011f95) tabs_2_active_pane_g1

0x335d,	// (0x00011f9d) tabs_2_active_pane_t1

0x2251,	// (0x00010e91) bg_passive_tab_pane_cp1_ParamLimits

0x2251,	// (0x00010e91) bg_passive_tab_pane_cp1

0x3355,	// (0x00011f95) tabs_2_passive_pane_g1

0x335d,	// (0x00011f9d) tabs_2_passive_pane_t1

0x336f,	// (0x00011faf) bg_active_tab_pane_cp4

0x337d,	// (0x00011fbd) tabs_2_long_active_pane_t1

0x3390,	// (0x00011fd0) bg_passive_tab_pane_cp4

0xddb7,	// (0x0001c9f7) list_single_midp_graphic_pane_g4_ParamLimits

0x336f,	// (0x00011faf) bg_active_tab_pane_cp5

0x339c,	// (0x00011fdc) tabs_3_long_active_pane_t1

0x3390,	// (0x00011fd0) bg_passive_tab_pane_cp5

0xddb7,	// (0x0001c9f7) list_single_midp_graphic_pane_g4

0x2251,	// (0x00010e91) bg_popup_window_pane_cp13_ParamLimits

0x2251,	// (0x00010e91) bg_popup_window_pane_cp13

0x33b7,	// (0x00011ff7) listscroll_popup_fast_pane_ParamLimits

0x33b7,	// (0x00011ff7) listscroll_popup_fast_pane

0x33c6,	// (0x00012006) grid_popup_fast_pane_ParamLimits

0x33c6,	// (0x00012006) grid_popup_fast_pane

0x33d8,	// (0x00012018) scroll_pane_cp9_ParamLimits

0x33d8,	// (0x00012018) scroll_pane_cp9

0x80cf,	// (0x00016d0f) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x80cf,	// (0x00016d0f) list_single_graphic_hl_pane_t1_cp2

0x33fc,	// (0x0001203c) input_focus_pane_cp20_ParamLimits

0x33fc,	// (0x0001203c) input_focus_pane_cp20

0x340a,	// (0x0001204a) query_popup_data_pane_t1_ParamLimits

0x340a,	// (0x0001204a) query_popup_data_pane_t1

0x341d,	// (0x0001205d) query_popup_data_pane_t2_ParamLimits

0x341d,	// (0x0001205d) query_popup_data_pane_t2

0x3463,	// (0x000120a3) query_popup_data_pane_t3_ParamLimits

0x3463,	// (0x000120a3) query_popup_data_pane_t3

0x34a4,	// (0x000120e4) query_popup_data_pane_t4_ParamLimits

0x34a4,	// (0x000120e4) query_popup_data_pane_t4

0x34e0,	// (0x00012120) query_popup_data_pane_t5_ParamLimits

0x34e0,	// (0x00012120) query_popup_data_pane_t5

0x0004,

0xf6bd,	// (0x0001e2fd) query_popup_data_pane_t_ParamLimits

0xf6bd,	// (0x0001e2fd) query_popup_data_pane_t

0x3166,	// (0x00011da6) bg_set_opt_pane_g1

0x316e,	// (0x00011dae) bg_set_opt_pane_g2

0x3176,	// (0x00011db6) bg_set_opt_pane_g3

0x317e,	// (0x00011dbe) bg_set_opt_pane_g4

0x3186,	// (0x00011dc6) bg_set_opt_pane_g5

0x318e,	// (0x00011dce) bg_set_opt_pane_g6

0x3196,	// (0x00011dd6) bg_set_opt_pane_g7

0x319e,	// (0x00011dde) bg_set_opt_pane_g8

0x31a6,	// (0x00011de6) bg_set_opt_pane_g9

0x0008,

0xf6c8,	// (0x0001e308) bg_set_opt_pane_g

0xda25,	// (0x0001c665) control_top_pane_stacon_ParamLimits

0xda25,	// (0x0001c665) control_top_pane_stacon

0xda78,	// (0x0001c6b8) signal_pane_stacon_ParamLimits

0xda78,	// (0x0001c6b8) signal_pane_stacon

0x3b09,	// (0x00012749) stacon_top_pane_g1_ParamLimits

0x3b09,	// (0x00012749) stacon_top_pane_g1

0xda9d,	// (0x0001c6dd) title_pane_stacon_ParamLimits

0xda9d,	// (0x0001c6dd) title_pane_stacon

0xdac7,	// (0x0001c707) uni_indicator_pane_stacon_ParamLimits

0xdac7,	// (0x0001c707) uni_indicator_pane_stacon

0xdadc,	// (0x0001c71c) battery_pane_stacon_ParamLimits

0xdadc,	// (0x0001c71c) battery_pane_stacon

0xdb20,	// (0x0001c760) control_bottom_pane_stacon_ParamLimits

0xdb20,	// (0x0001c760) control_bottom_pane_stacon

0xdb43,	// (0x0001c783) navi_pane_stacon_ParamLimits

0xdb43,	// (0x0001c783) navi_pane_stacon

0x3b2b,	// (0x0001276b) stacon_bottom_pane_g1_ParamLimits

0x3b2b,	// (0x0001276b) stacon_bottom_pane_g1

0xd786,	// (0x0001c3c6) aid_levels_signal_lsc_ParamLimits

0xd786,	// (0x0001c3c6) aid_levels_signal_lsc

0xd79d,	// (0x0001c3dd) signal_pane_stacon_g1_ParamLimits

0xd79d,	// (0x0001c3dd) signal_pane_stacon_g1

0xd7b1,	// (0x0001c3f1) signal_pane_stacon_g2_ParamLimits

0xd7b1,	// (0x0001c3f1) signal_pane_stacon_g2

0x0001,

0xf6db,	// (0x0001e31b) signal_pane_stacon_g_ParamLimits

0xf6db,	// (0x0001e31b) signal_pane_stacon_g

0xd7e6,	// (0x0001c426) title_pane_stacon_t1_ParamLimits

0xd7e6,	// (0x0001c426) title_pane_stacon_t1

0x3538,	// (0x00012178) uni_indicator_pane_stacon_g1

0x3542,	// (0x00012182) uni_indicator_pane_stacon_g2

0x3524,	// (0x00012164) uni_indicator_pane_stacon_g3

0x352e,	// (0x0001216e) uni_indicator_pane_stacon_g4

0x0003,

0xf6e7,	// (0x0001e327) uni_indicator_pane_stacon_g

0xd80b,	// (0x0001c44b) control_top_pane_stacon_g1

0xd813,	// (0x0001c453) control_top_pane_stacon_t1_ParamLimits

0xd813,	// (0x0001c453) control_top_pane_stacon_t1

0xd84a,	// (0x0001c48a) aid_levels_battery_lsc_ParamLimits

0xd84a,	// (0x0001c48a) aid_levels_battery_lsc

0xd862,	// (0x0001c4a2) battery_pane_stacon_g1_ParamLimits

0xd862,	// (0x0001c4a2) battery_pane_stacon_g1

0xd875,	// (0x0001c4b5) battery_pane_stacon_g2_ParamLimits

0xd875,	// (0x0001c4b5) battery_pane_stacon_g2

0x0001,

0xf6f0,	// (0x0001e330) battery_pane_stacon_g_ParamLimits

0xf6f0,	// (0x0001e330) battery_pane_stacon_g

0xd8b3,	// (0x0001c4f3) navi_icon_pane_stacon

0xd8c7,	// (0x0001c507) navi_navi_pane_stacon

0xd8b3,	// (0x0001c4f3) navi_text_pane_stacon

0xd80b,	// (0x0001c44b) control_bottom_pane_stacon_g1

0xd8db,	// (0x0001c51b) control_bottom_pane_stacon_t1_ParamLimits

0xd8db,	// (0x0001c51b) control_bottom_pane_stacon_t1

0x3566,	// (0x000121a6) grid_app_pane_ParamLimits

0x3566,	// (0x000121a6) grid_app_pane

0x3588,	// (0x000121c8) scroll_pane_cp15_ParamLimits

0x3588,	// (0x000121c8) scroll_pane_cp15

0x359d,	// (0x000121dd) cell_app_pane_ParamLimits

0x359d,	// (0x000121dd) cell_app_pane

0x35c7,	// (0x00012207) cell_app_pane_g1_ParamLimits

0x35c7,	// (0x00012207) cell_app_pane_g1

0x35eb,	// (0x0001222b) cell_app_pane_g2_ParamLimits

0x35eb,	// (0x0001222b) cell_app_pane_g2

0x0001,

0xf6f5,	// (0x0001e335) cell_app_pane_g_ParamLimits

0xf6f5,	// (0x0001e335) cell_app_pane_g

0x35f7,	// (0x00012237) cell_app_pane_t1_ParamLimits

0x35f7,	// (0x00012237) cell_app_pane_t1

0x360e,	// (0x0001224e) grid_highlight_pane_ParamLimits

0x360e,	// (0x0001224e) grid_highlight_pane

0x3166,	// (0x00011da6) cell_highlight_pane_g1

0x316e,	// (0x00011dae) cell_highlight_pane_g2

0x3176,	// (0x00011db6) cell_highlight_pane_g3

0x317e,	// (0x00011dbe) cell_highlight_pane_g4

0x3186,	// (0x00011dc6) cell_highlight_pane_g5

0x318e,	// (0x00011dce) cell_highlight_pane_g6

0x3196,	// (0x00011dd6) cell_highlight_pane_g7

0x319e,	// (0x00011dde) cell_highlight_pane_g8

0x31a6,	// (0x00011de6) cell_highlight_pane_g9

0x2167,	// (0x00010da7) cell_highlight_pane_g10

0x0009,

0xf6a3,	// (0x0001e2e3) cell_highlight_pane_g

0x361f,	// (0x0001225f) bg_scroll_pane

0xd925,	// (0x0001c565) scroll_handle_pane

0x3666,	// (0x000122a6) scroll_bg_pane_g1

0x367b,	// (0x000122bb) scroll_bg_pane_g2

0x3693,	// (0x000122d3) scroll_bg_pane_g3

0x0002,

0xf6fa,	// (0x0001e33a) scroll_bg_pane_g

0x36a8,	// (0x000122e8) scroll_handle_focus_pane_ParamLimits

0x36a8,	// (0x000122e8) scroll_handle_focus_pane

0x3666,	// (0x000122a6) scroll_handle_pane_g1

0x36b5,	// (0x000122f5) scroll_handle_pane_g2

0x3693,	// (0x000122d3) scroll_handle_pane_g3

0x0002,

0xf701,	// (0x0001e341) scroll_handle_pane_g

0x325f,	// (0x00011e9f) bg_popup_sub_pane_cp21_ParamLimits

0x325f,	// (0x00011e9f) bg_popup_sub_pane_cp21

0x36c9,	// (0x00012309) popup_fep_japan_predictive_window_t1_ParamLimits

0x36c9,	// (0x00012309) popup_fep_japan_predictive_window_t1

0x36e0,	// (0x00012320) popup_fep_japan_predictive_window_t2_ParamLimits

0x36e0,	// (0x00012320) popup_fep_japan_predictive_window_t2

0x3713,	// (0x00012353) popup_fep_japan_predictive_window_t3_ParamLimits

0x3713,	// (0x00012353) popup_fep_japan_predictive_window_t3

0x0002,

0xf708,	// (0x0001e348) popup_fep_japan_predictive_window_t_ParamLimits

0xf708,	// (0x0001e348) popup_fep_japan_predictive_window_t

0x2171,	// (0x00010db1) bg_popup_sub_pane_cp23

0x374a,	// (0x0001238a) listscroll_japin_cand_pane

0x3752,	// (0x00012392) popup_fep_japan_candidate_window_t1

0x3760,	// (0x000123a0) candidate_pane_ParamLimits

0x3760,	// (0x000123a0) candidate_pane

0x3772,	// (0x000123b2) scroll_pane_cp30

0x377a,	// (0x000123ba) list_single_popup_jap_candidate_pane_ParamLimits

0x377a,	// (0x000123ba) list_single_popup_jap_candidate_pane

0x2171,	// (0x00010db1) list_highlight_pane_cp30

0x378e,	// (0x000123ce) list_single_popup_jap_candidate_pane_t1

0x379d,	// (0x000123dd) level_1_signal

0x37aa,	// (0x000123ea) level_2_signal

0x37b7,	// (0x000123f7) level_3_signal

0x37c4,	// (0x00012404) level_4_signal

0x37d1,	// (0x00012411) level_5_signal

0x37de,	// (0x0001241e) level_6_signal

0x37eb,	// (0x0001242b) level_7_signal

0x379d,	// (0x000123dd) level_1_battery

0x37aa,	// (0x000123ea) level_2_battery

0x37b7,	// (0x000123f7) level_3_battery

0x37c4,	// (0x00012404) level_4_battery

0x37d1,	// (0x00012411) level_5_battery

0x37de,	// (0x0001241e) level_6_battery

0x37eb,	// (0x0001242b) level_7_battery

0x3810,	// (0x00012450) list_menu_pane_ParamLimits

0x3810,	// (0x00012450) list_menu_pane

0x3821,	// (0x00012461) scroll_pane_cp25_ParamLimits

0x3821,	// (0x00012461) scroll_pane_cp25

0x383a,	// (0x0001247a) list_double2_graphic_pane_cp2_ParamLimits

0x383a,	// (0x0001247a) list_double2_graphic_pane_cp2

0x383a,	// (0x0001247a) list_double2_large_graphic_pane_cp2_ParamLimits

0x383a,	// (0x0001247a) list_double2_large_graphic_pane_cp2

0x383a,	// (0x0001247a) list_double2_pane_cp2_ParamLimits

0x383a,	// (0x0001247a) list_double2_pane_cp2

0x383a,	// (0x0001247a) list_double_graphic_pane_cp2_ParamLimits

0x383a,	// (0x0001247a) list_double_graphic_pane_cp2

0x383a,	// (0x0001247a) list_double_large_graphic_pane_cp2_ParamLimits

0x383a,	// (0x0001247a) list_double_large_graphic_pane_cp2

0x383a,	// (0x0001247a) list_double_number_pane_cp2_ParamLimits

0x383a,	// (0x0001247a) list_double_number_pane_cp2

0x383a,	// (0x0001247a) list_double_pane_cp2_ParamLimits

0x383a,	// (0x0001247a) list_double_pane_cp2

0x385c,	// (0x0001249c) list_single_2graphic_pane_cp2_ParamLimits

0x385c,	// (0x0001249c) list_single_2graphic_pane_cp2

0x385c,	// (0x0001249c) list_single_graphic_heading_pane_cp2_ParamLimits

0x385c,	// (0x0001249c) list_single_graphic_heading_pane_cp2

0x385c,	// (0x0001249c) list_single_graphic_pane_cp2_ParamLimits

0x385c,	// (0x0001249c) list_single_graphic_pane_cp2

0x385c,	// (0x0001249c) list_single_heading_pane_cp2_ParamLimits

0x385c,	// (0x0001249c) list_single_heading_pane_cp2

0x3873,	// (0x000124b3) list_single_large_graphic_pane_cp2_ParamLimits

0x3873,	// (0x000124b3) list_single_large_graphic_pane_cp2

0x385c,	// (0x0001249c) list_single_number_heading_pane_cp2_ParamLimits

0x385c,	// (0x0001249c) list_single_number_heading_pane_cp2

0x385c,	// (0x0001249c) list_single_number_pane_cp2_ParamLimits

0x385c,	// (0x0001249c) list_single_number_pane_cp2

0x385c,	// (0x0001249c) list_single_pane_cp2_ParamLimits

0x385c,	// (0x0001249c) list_single_pane_cp2

0x38c9,	// (0x00012509) bg_popup_sub_pane_cp22

0xd9d7,	// (0x0001c617) popup_side_volume_key_window_g1

0xda01,	// (0x0001c641) popup_side_volume_key_window_t1

0xda1d,	// (0x0001c65d) volume_small_pane_cp1

0x24e6,	// (0x00011126) bg_popup_sub_pane_cp24_ParamLimits

0x24e6,	// (0x00011126) bg_popup_sub_pane_cp24

0x38df,	// (0x0001251f) fep_china_uni_candidate_pane_ParamLimits

0x38df,	// (0x0001251f) fep_china_uni_candidate_pane

0x38f3,	// (0x00012533) fep_china_uni_entry_pane

0x3903,	// (0x00012543) popup_fep_china_uni_window_g1

0x391f,	// (0x0001255f) fep_china_uni_entry_pane_g1

0x3927,	// (0x00012567) fep_china_uni_entry_pane_g2

0x0001,

0xf735,	// (0x0001e375) fep_china_uni_entry_pane_g

0x392f,	// (0x0001256f) fep_entry_item_pane

0x3939,	// (0x00012579) fep_candidate_item_pane

0x3941,	// (0x00012581) fep_china_uni_candidate_pane_g1

0x3949,	// (0x00012589) fep_china_uni_candidate_pane_g2

0x3951,	// (0x00012591) fep_china_uni_candidate_pane_g3

0x3959,	// (0x00012599) fep_china_uni_candidate_pane_g4

0x0003,

0xf73a,	// (0x0001e37a) fep_china_uni_candidate_pane_g

0x2167,	// (0x00010da7) fep_entry_item_pane_g1

0x3961,	// (0x000125a1) fep_entry_item_pane_t1_ParamLimits

0x3961,	// (0x000125a1) fep_entry_item_pane_t1

0x3977,	// (0x000125b7) fep_candidate_item_pane_t1_ParamLimits

0x3977,	// (0x000125b7) fep_candidate_item_pane_t1

0x398c,	// (0x000125cc) fep_candidate_item_pane_t2_ParamLimits

0x398c,	// (0x000125cc) fep_candidate_item_pane_t2

0x0001,

0xf743,	// (0x0001e383) fep_candidate_item_pane_t_ParamLimits

0xf743,	// (0x0001e383) fep_candidate_item_pane_t

0x2251,	// (0x00010e91) list_highlight_pane_cp31_ParamLimits

0x2251,	// (0x00010e91) list_highlight_pane_cp31

0x399e,	// (0x000125de) level_1_signal_lsc

0x39a7,	// (0x000125e7) level_2_signal_lsc

0x39b0,	// (0x000125f0) level_3_signal_lsc

0x39b9,	// (0x000125f9) level_4_signal_lsc

0x39c2,	// (0x00012602) level_5_signal_lsc

0x39cb,	// (0x0001260b) level_6_signal_lsc

0x39d4,	// (0x00012614) level_7_signal_lsc

0x39d4,	// (0x00012614) level_1_battery_lsc

0x39dd,	// (0x0001261d) level_2_battery_lsc

0x39e6,	// (0x00012626) level_3_battery_lsc

0x39ef,	// (0x0001262f) level_4_battery_lsc

0x39f8,	// (0x00012638) level_5_battery_lsc

0x3a01,	// (0x00012641) level_6_battery_lsc

0x399e,	// (0x000125de) level_7_battery_lsc

0x3a0a,	// (0x0001264a) scroll_handle_focus_pane_g1

0x3a13,	// (0x00012653) scroll_handle_focus_pane_g2

0x3a1c,	// (0x0001265c) scroll_handle_focus_pane_g3

0x0002,

0xf748,	// (0x0001e388) scroll_handle_focus_pane_g

0xca6b,	// (0x0001b6ab) list_single_2graphic_pane_g1_ParamLimits

0xca6b,	// (0x0001b6ab) list_single_2graphic_pane_g1

0xc45e,	// (0x0001b09e) list_single_2graphic_pane_g2_ParamLimits

0xc45e,	// (0x0001b09e) list_single_2graphic_pane_g2

0xc3e4,	// (0x0001b024) list_single_2graphic_pane_g3_ParamLimits

0xc3e4,	// (0x0001b024) list_single_2graphic_pane_g3

0xca77,	// (0x0001b6b7) list_single_2graphic_pane_g4_ParamLimits

0xca77,	// (0x0001b6b7) list_single_2graphic_pane_g4

0x0003,

0xf74f,	// (0x0001e38f) list_single_2graphic_pane_g_ParamLimits

0xf74f,	// (0x0001e38f) list_single_2graphic_pane_g

0xca83,	// (0x0001b6c3) list_single_2graphic_pane_t1_ParamLimits

0xca83,	// (0x0001b6c3) list_single_2graphic_pane_t1

0xcab1,	// (0x0001b6f1) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xcab1,	// (0x0001b6f1) list_double2_graphic_large_graphic_pane_g1

0xc503,	// (0x0001b143) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xc503,	// (0x0001b143) list_double2_graphic_large_graphic_pane_g2

0xc4cf,	// (0x0001b10f) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xc4cf,	// (0x0001b10f) list_double2_graphic_large_graphic_pane_g3

0xcac3,	// (0x0001b703) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xcac3,	// (0x0001b703) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf758,	// (0x0001e398) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf758,	// (0x0001e398) list_double2_graphic_large_graphic_pane_g

0xcacf,	// (0x0001b70f) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xcacf,	// (0x0001b70f) list_double2_graphic_large_graphic_pane_t1

0xcae5,	// (0x0001b725) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xcae5,	// (0x0001b725) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf761,	// (0x0001e3a1) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf761,	// (0x0001e3a1) list_double2_graphic_large_graphic_pane_t

0x3bf6,	// (0x00012836) popup_fast_swap_window_ParamLimits

0x3bf6,	// (0x00012836) popup_fast_swap_window

0x3c12,	// (0x00012852) popup_side_volume_key_window

0x3c2c,	// (0x0001286c) stacon_top_pane

0x3c36,	// (0x00012876) status_pane_ParamLimits

0x3c36,	// (0x00012876) status_pane

0x3c2c,	// (0x0001286c) status_small_pane

0x2171,	// (0x00010db1) control_pane

0x2171,	// (0x00010db1) stacon_bottom_pane

0x2f49,	// (0x00011b89) scroll_pane_cp121

0x2f40,	// (0x00011b80) set_content_pane

0x3ac6,	// (0x00012706) bg_active_tab_pane_g1_cp1

0x3abd,	// (0x000126fd) bg_active_tab_pane_g2_cp1

0x3ab4,	// (0x000126f4) bg_active_tab_pane_g3_cp1

0x3ac6,	// (0x00012706) bg_passive_tab_pane_g1_cp1

0x3abd,	// (0x000126fd) bg_passive_tab_pane_g2_cp1

0x3ab4,	// (0x000126f4) bg_passive_tab_pane_g3_cp1

0x3ad8,	// (0x00012718) bg_active_tab_pane_g1_cp2

0x3abd,	// (0x000126fd) bg_active_tab_pane_g2_cp2

0x3acf,	// (0x0001270f) bg_active_tab_pane_g3_cp2

0x3ad8,	// (0x00012718) bg_passive_tab_pane_g1_cp2

0x3abd,	// (0x000126fd) bg_passive_tab_pane_g2_cp2

0x3acf,	// (0x0001270f) bg_passive_tab_pane_g3_cp2

0x3aea,	// (0x0001272a) bg_active_tab_pane_g1_cp3

0x3abd,	// (0x000126fd) bg_active_tab_pane_g2_cp3

0x3ae1,	// (0x00012721) bg_active_tab_pane_g3_cp3

0x3aea,	// (0x0001272a) bg_passive_tab_pane_g1_cp3

0x3abd,	// (0x000126fd) bg_passive_tab_pane_g2_cp3

0x3ae1,	// (0x00012721) bg_passive_tab_pane_g3_cp3

0x3afe,	// (0x0001273e) bg_active_tab_pane_g1_cp4

0x3abd,	// (0x000126fd) bg_active_tab_pane_g2_cp4

0x3af3,	// (0x00012733) bg_active_tab_pane_g3_cp4

0x3afe,	// (0x0001273e) bg_passive_tab_pane_g1_cp4

0x3abd,	// (0x000126fd) bg_passive_tab_pane_g2_cp4

0x3af3,	// (0x00012733) bg_passive_tab_pane_g3_cp4

0x3b50,	// (0x00012790) bg_active_tab_pane_g1_cp5

0x3abd,	// (0x000126fd) bg_active_tab_pane_g2_cp5

0x3b47,	// (0x00012787) bg_active_tab_pane_g3_cp5

0x3b50,	// (0x00012790) bg_passive_tab_pane_g1_cp5

0x3abd,	// (0x000126fd) bg_passive_tab_pane_g2_cp5

0x3b47,	// (0x00012787) bg_passive_tab_pane_g3_cp5

0x3b59,	// (0x00012799) list_set_graphic_pane_ParamLimits

0x3b59,	// (0x00012799) list_set_graphic_pane

0x2171,	// (0x00010db1) bg_set_opt_pane_cp4

0x3b77,	// (0x000127b7) list_set_graphic_pane_g1_ParamLimits

0x3b77,	// (0x000127b7) list_set_graphic_pane_g1

0x3b83,	// (0x000127c3) list_set_graphic_pane_g2_ParamLimits

0x3b83,	// (0x000127c3) list_set_graphic_pane_g2

0x0001,

0xf766,	// (0x0001e3a6) list_set_graphic_pane_g_ParamLimits

0xf766,	// (0x0001e3a6) list_set_graphic_pane_g

0x0009,

0xfad2,	// (0x0001e712) volume_small_pane_cp_g

0x3ba7,	// (0x000127e7) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x3ba7,	// (0x000127e7) list_double2_large_graphic_pane_g1_cp2

0x3bb5,	// (0x000127f5) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x3bb5,	// (0x000127f5) list_double2_large_graphic_pane_g2_cp2

0x3bc6,	// (0x00012806) list_double2_large_graphic_pane_g3_cp2

0x3bce,	// (0x0001280e) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x3bce,	// (0x0001280e) list_double2_large_graphic_pane_t1_cp2

0x3be4,	// (0x00012824) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x3be4,	// (0x00012824) list_double2_large_graphic_pane_t2_cp2

0x5e6d,	// (0x00014aad) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x5e6d,	// (0x00014aad) list_double_large_graphic_pane_g1_cp2

0x5e80,	// (0x00014ac0) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x5e80,	// (0x00014ac0) list_double_large_graphic_pane_g2_cp2

0x3d54,	// (0x00012994) list_double_large_graphic_pane_g3_cp2

0x5e91,	// (0x00014ad1) list_double_large_graphic_pane_g4_cp

0x5e99,	// (0x00014ad9) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x5e99,	// (0x00014ad9) list_double_large_graphic_pane_t1_cp2

0x5eb0,	// (0x00014af0) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x5eb0,	// (0x00014af0) list_double_large_graphic_pane_t2_cp2

0x3c44,	// (0x00012884) list_double2_graphic_pane_g1_cp2_ParamLimits

0x3c44,	// (0x00012884) list_double2_graphic_pane_g1_cp2

0x3c52,	// (0x00012892) list_double2_graphic_pane_g2_cp2_ParamLimits

0x3c52,	// (0x00012892) list_double2_graphic_pane_g2_cp2

0x3c63,	// (0x000128a3) list_double2_graphic_pane_g3_cp2

0x3c6d,	// (0x000128ad) list_double2_graphic_pane_t1_cp2_ParamLimits

0x3c6d,	// (0x000128ad) list_double2_graphic_pane_t1_cp2

0x3c83,	// (0x000128c3) list_double2_graphic_pane_t2_cp2_ParamLimits

0x3c83,	// (0x000128c3) list_double2_graphic_pane_t2_cp2

0x3c95,	// (0x000128d5) list_single_number_heading_pane_g1_cp2_ParamLimits

0x3c95,	// (0x000128d5) list_single_number_heading_pane_g1_cp2

0x3ca1,	// (0x000128e1) list_single_number_heading_pane_g2_cp2

0x3ca9,	// (0x000128e9) list_single_number_heading_pane_t1_cp2_ParamLimits

0x3ca9,	// (0x000128e9) list_single_number_heading_pane_t1_cp2

0x3cbf,	// (0x000128ff) list_single_number_heading_pane_t2_cp2_ParamLimits

0x3cbf,	// (0x000128ff) list_single_number_heading_pane_t2_cp2

0x3cd3,	// (0x00012913) list_single_number_heading_pane_t3_cp2_ParamLimits

0x3cd3,	// (0x00012913) list_single_number_heading_pane_t3_cp2

0x3c95,	// (0x000128d5) list_single_heading_pane_g1_cp2_ParamLimits

0x3c95,	// (0x000128d5) list_single_heading_pane_g1_cp2

0x3ca1,	// (0x000128e1) list_single_heading_pane_g2_cp2

0x3ca9,	// (0x000128e9) list_single_heading_pane_t1_cp2_ParamLimits

0x3ca9,	// (0x000128e9) list_single_heading_pane_t1_cp2

0x5c75,	// (0x000148b5) list_single_heading_pane_t2_cp2_ParamLimits

0x5c75,	// (0x000148b5) list_single_heading_pane_t2_cp2

0x5bb7,	// (0x000147f7) list_double_graphic_pane_g1_cp2_ParamLimits

0x5bb7,	// (0x000147f7) list_double_graphic_pane_g1_cp2

0x5bc3,	// (0x00014803) list_double_graphic_pane_g2_cp2_ParamLimits

0x5bc3,	// (0x00014803) list_double_graphic_pane_g2_cp2

0x5bd2,	// (0x00014812) list_double_graphic_pane_g3_cp2

0x5bda,	// (0x0001481a) list_double_graphic_pane_t1_cp2_ParamLimits

0x5bda,	// (0x0001481a) list_double_graphic_pane_t1_cp2

0x5bf0,	// (0x00014830) list_double_graphic_pane_t2_cp2_ParamLimits

0x5bf0,	// (0x00014830) list_double_graphic_pane_t2_cp2

0x3d48,	// (0x00012988) list_double_number_pane_g1_cp2_ParamLimits

0x3d48,	// (0x00012988) list_double_number_pane_g1_cp2

0x3d54,	// (0x00012994) list_double_number_pane_g2_cp2

0x5b7b,	// (0x000147bb) list_double_number_pane_t1_cp2_ParamLimits

0x5b7b,	// (0x000147bb) list_double_number_pane_t1_cp2

0x5b8f,	// (0x000147cf) list_double_number_pane_t2_cp2_ParamLimits

0x5b8f,	// (0x000147cf) list_double_number_pane_t2_cp2

0x5ba5,	// (0x000147e5) list_double_number_pane_t3_cp2_ParamLimits

0x5ba5,	// (0x000147e5) list_double_number_pane_t3_cp2

0x5a64,	// (0x000146a4) list_single_graphic_pane_g1_cp2_ParamLimits

0x5a64,	// (0x000146a4) list_single_graphic_pane_g1_cp2

0x3dac,	// (0x000129ec) list_single_graphic_pane_g2_cp2_ParamLimits

0x3dac,	// (0x000129ec) list_single_graphic_pane_g2_cp2

0x3db8,	// (0x000129f8) list_single_graphic_pane_g3_cp2

0x5a3a,	// (0x0001467a) list_single_graphic_pane_t1_cp2_ParamLimits

0x5a3a,	// (0x0001467a) list_single_graphic_pane_t1_cp2

0x3dac,	// (0x000129ec) list_single_number_pane_g1_cp2_ParamLimits

0x3dac,	// (0x000129ec) list_single_number_pane_g1_cp2

0x3db8,	// (0x000129f8) list_single_number_pane_g2_cp2

0x5a3a,	// (0x0001467a) list_single_number_pane_t1_cp2_ParamLimits

0x5a3a,	// (0x0001467a) list_single_number_pane_t1_cp2

0x5a50,	// (0x00014690) list_single_number_pane_t2_cp2_ParamLimits

0x5a50,	// (0x00014690) list_single_number_pane_t2_cp2

0x3bb5,	// (0x000127f5) list_double2_pane_g1_cp2_ParamLimits

0x3bb5,	// (0x000127f5) list_double2_pane_g1_cp2

0x3bc6,	// (0x00012806) list_double2_pane_g2_cp2

0x3d20,	// (0x00012960) list_double2_pane_t1_cp2_ParamLimits

0x3d20,	// (0x00012960) list_double2_pane_t1_cp2

0x3d36,	// (0x00012976) list_double2_pane_t2_cp2_ParamLimits

0x3d36,	// (0x00012976) list_double2_pane_t2_cp2

0x3d48,	// (0x00012988) list_double_pane_g1_cp2_ParamLimits

0x3d48,	// (0x00012988) list_double_pane_g1_cp2

0x3d54,	// (0x00012994) list_double_pane_g2_cp2

0x3d5c,	// (0x0001299c) list_double_pane_t1_cp2_ParamLimits

0x3d5c,	// (0x0001299c) list_double_pane_t1_cp2

0x3d72,	// (0x000129b2) list_double_pane_t2_cp2_ParamLimits

0x3d72,	// (0x000129b2) list_double_pane_t2_cp2

0x3d9c,	// (0x000129dc) list_single_pane_cp2_g3

0x3dac,	// (0x000129ec) list_single_pane_g1_cp2_ParamLimits

0x3dac,	// (0x000129ec) list_single_pane_g1_cp2

0x3db8,	// (0x000129f8) list_single_pane_g2_cp2

0x3dc0,	// (0x00012a00) list_single_pane_t1_cp2_ParamLimits

0x3dc0,	// (0x00012a00) list_single_pane_t1_cp2

0x3dd8,	// (0x00012a18) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x3dd8,	// (0x00012a18) list_single_large_graphic_pane_g1_cp2

0x3de6,	// (0x00012a26) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x3de6,	// (0x00012a26) list_single_large_graphic_pane_g2_cp2

0x3df2,	// (0x00012a32) list_single_large_graphic_pane_g3_cp2

0x3dfa,	// (0x00012a3a) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x3dfa,	// (0x00012a3a) list_single_large_graphic_pane_g4_cp1

0x3e14,	// (0x00012a54) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x3e14,	// (0x00012a54) list_single_large_graphic_pane_t1_cp2

0x5a04,	// (0x00014644) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x5a04,	// (0x00014644) list_single_graphic_heading_pane_g1_cp2

0x59d1,	// (0x00014611) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x59d1,	// (0x00014611) list_single_graphic_heading_pane_g4_cp2

0x3db8,	// (0x000129f8) list_single_graphic_heading_pane_g5_cp2

0x5a10,	// (0x00014650) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x5a10,	// (0x00014650) list_single_graphic_heading_pane_t1_cp2

0x5a26,	// (0x00014666) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x5a26,	// (0x00014666) list_single_graphic_heading_pane_t2_cp2

0x59c5,	// (0x00014605) list_single_2graphic_pane_g1_cp2_ParamLimits

0x59c5,	// (0x00014605) list_single_2graphic_pane_g1_cp2

0x59d1,	// (0x00014611) list_single_2graphic_pane_g2_cp2_ParamLimits

0x59d1,	// (0x00014611) list_single_2graphic_pane_g2_cp2

0x3db8,	// (0x000129f8) list_single_2graphic_pane_g3_cp2

0x59e2,	// (0x00014622) list_single_2graphic_pane_g4_cp2_ParamLimits

0x59e2,	// (0x00014622) list_single_2graphic_pane_g4_cp2

0x59ee,	// (0x0001462e) list_single_2graphic_pane_t1_cp2_ParamLimits

0x59ee,	// (0x0001462e) list_single_2graphic_pane_t1_cp2

0x2167,	// (0x00010da7) list_highlight_pane_g10_cp1

0x55ad,	// (0x000141ed) list_highlight_pane_g1_cp1

0x55b5,	// (0x000141f5) list_highlight_pane_g2_cp1

0x55bd,	// (0x000141fd) list_highlight_pane_g3_cp1

0x55c5,	// (0x00014205) list_highlight_pane_g4_cp1

0x55cd,	// (0x0001420d) list_highlight_pane_g5_cp1

0x55d5,	// (0x00014215) list_highlight_pane_g6_cp1

0x55dd,	// (0x0001421d) list_highlight_pane_g7_cp1

0x55e5,	// (0x00014225) list_highlight_pane_g8_cp1

0x55ed,	// (0x0001422d) list_highlight_pane_g9_cp1

0x54c5,	// (0x00014105) form_field_slider_pane_t3

0x54d3,	// (0x00014113) form_field_slider_pane_t4

0x54e1,	// (0x00014121) slider_form_pane_ParamLimits

0x54e1,	// (0x00014121) slider_form_pane

0x2171,	// (0x00010db1) control_abbreviations

0x2171,	// (0x00010db1) control_conventions

0x2171,	// (0x00010db1) control_definitions

0x2171,	// (0x00010db1) format_table_attribute

0x5cc1,	// (0x00014901) bg_popup_preview_window_pane_g9

0x2171,	// (0x00010db1) format_table_data2

0x2171,	// (0x00010db1) format_table_data3

0x2171,	// (0x00010db1) format_table_data_example

0x0008,

0x2171,	// (0x00010db1) intro_purpose

0xf8ef,	// (0x0001e52f) bg_popup_preview_window_pane_g

0x2171,	// (0x00010db1) texts_category

0x2171,	// (0x00010db1) texts_graphics

0x3e2a,	// (0x00012a6a) text_digital

0x3e39,	// (0x00012a79) text_primary

0x3e48,	// (0x00012a88) text_primary_small

0x3e57,	// (0x00012a97) text_secondary

0x3e66,	// (0x00012aa6) text_title

0x6502,	// (0x00015142) bg_passive_tab_pane_g1_cp3_srt

0x3abd,	// (0x000126fd) bg_passive_tab_pane_g2_cp3_srt

0x64f9,	// (0x00015139) bg_passive_tab_pane_g3_cp3_srt

0x2251,	// (0x00010e91) bg_active_tab_pane_cp3_srt_ParamLimits

0x2251,	// (0x00010e91) bg_active_tab_pane_cp3_srt

0x650b,	// (0x0001514b) tabs_4_active_pane_srt_g1

0x6513,	// (0x00015153) tabs_4_active_pane_srt_t1_ParamLimits

0x6513,	// (0x00015153) tabs_4_active_pane_srt_t1

0x6502,	// (0x00015142) bg_active_tab_pane_g1_cp3_copy1

0x3abd,	// (0x000126fd) bg_active_tab_pane_g2_cp3_copy1

0x64f9,	// (0x00015139) bg_active_tab_pane_g3_cp3_copy1

0x2251,	// (0x00010e91) tabs_2_long_active_pane_srt_ParamLimits

0x2251,	// (0x00010e91) tabs_2_long_active_pane_srt

0x2251,	// (0x00010e91) tabs_2_long_passive_pane_srt_ParamLimits

0x2251,	// (0x00010e91) tabs_2_long_passive_pane_srt

0x3390,	// (0x00011fd0) bg_passive_tab_pane_cp4_srt_ParamLimits

0x3390,	// (0x00011fd0) bg_passive_tab_pane_cp4_srt

0x6137,	// (0x00014d77) bg_passive_tab_pane_g1_cp4_srt

0x3abd,	// (0x000126fd) bg_passive_tab_pane_g2_cp4_srt

0x612e,	// (0x00014d6e) bg_passive_tab_pane_g3_cp4_srt

0x336f,	// (0x00011faf) bg_active_tab_pane_cp4_srt_ParamLimits

0x336f,	// (0x00011faf) bg_active_tab_pane_cp4_srt

0x6140,	// (0x00014d80) tabs_2_long_active_pane_srt_t1_ParamLimits

0x6140,	// (0x00014d80) tabs_2_long_active_pane_srt_t1

0x6137,	// (0x00014d77) bg_active_tab_pane_g1_cp4_srt

0x3abd,	// (0x000126fd) bg_active_tab_pane_g2_cp4_srt

0x612e,	// (0x00014d6e) bg_active_tab_pane_g3_cp4_srt

0x24e6,	// (0x00011126) tabs_3_long_active_pane_srt_ParamLimits

0x24e6,	// (0x00011126) tabs_3_long_active_pane_srt

0x24e6,	// (0x00011126) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x24e6,	// (0x00011126) tabs_3_long_passive_pane_cp_srt

0x24e6,	// (0x00011126) tabs_3_long_passive_pane_srt_ParamLimits

0x24e6,	// (0x00011126) tabs_3_long_passive_pane_srt

0x3390,	// (0x00011fd0) bg_passive_tab_pane_cp5_srt_ParamLimits

0x3390,	// (0x00011fd0) bg_passive_tab_pane_cp5_srt

0x3b50,	// (0x00012790) bg_passive_tab_pane_g1_cp5_srt

0x3abd,	// (0x000126fd) bg_passive_tab_pane_g2_cp5_srt

0x3b47,	// (0x00012787) bg_passive_tab_pane_g3_cp5_srt

0x336f,	// (0x00011faf) bg_active_tab_pane_cp5_srt_ParamLimits

0x336f,	// (0x00011faf) bg_active_tab_pane_cp5_srt

0x611c,	// (0x00014d5c) tabs_3_long_active_pane_srt_t1_ParamLimits

0x611c,	// (0x00014d5c) tabs_3_long_active_pane_srt_t1

0x3b50,	// (0x00012790) bg_active_tab_pane_g1_cp5_srt

0x3abd,	// (0x000126fd) bg_active_tab_pane_g2_cp5_srt

0x3b47,	// (0x00012787) bg_active_tab_pane_g3_cp5_srt

0x610e,	// (0x00014d4e) navi_text_pane_srt_t1

0x6106,	// (0x00014d46) navi_icon_pane_srt_g1

0x4035,	// (0x00012c75) midp_editing_number_pane_srt

0x3e75,	// (0x00012ab5) midp_ticker_pane_srt

0x403d,	// (0x00012c7d) midp_ticker_pane_srt_g1

0x4045,	// (0x00012c85) midp_ticker_pane_srt_g2

0x0001,

0xf785,	// (0x0001e3c5) midp_ticker_pane_srt_g

0x404d,	// (0x00012c8d) midp_ticker_pane_srt_t1

0x60f7,	// (0x00014d37) midp_editing_number_pane_t1_copy1

0x3e7d,	// (0x00012abd) listscroll_midp_pane

0x3e7d,	// (0x00012abd) midp_form_pane

0x3eed,	// (0x00012b2d) midp_info_popup_window_ParamLimits

0x3eed,	// (0x00012b2d) midp_info_popup_window

0x325f,	// (0x00011e9f) bg_popup_sub_pane_cp50_ParamLimits

0x325f,	// (0x00011e9f) bg_popup_sub_pane_cp50

0x51e2,	// (0x00013e22) listscroll_midp_info_pane_ParamLimits

0x51e2,	// (0x00013e22) listscroll_midp_info_pane

0x51ca,	// (0x00013e0a) listscroll_form_midp_pane_ParamLimits

0x51ca,	// (0x00013e0a) listscroll_form_midp_pane

0x51d6,	// (0x00013e16) scroll_bar_cp050

0x51aa,	// (0x00013dea) list_midp_pane

0x70dc,	// (0x00015d1c) signal_pane_g2_cp

0x50e4,	// (0x00013d24) listscroll_midp_info_pane_t1_ParamLimits

0x50e4,	// (0x00013d24) listscroll_midp_info_pane_t1

0x50fc,	// (0x00013d3c) listscroll_midp_info_pane_t2_ParamLimits

0x50fc,	// (0x00013d3c) listscroll_midp_info_pane_t2

0x513a,	// (0x00013d7a) listscroll_midp_info_pane_t3_ParamLimits

0x513a,	// (0x00013d7a) listscroll_midp_info_pane_t3

0x5174,	// (0x00013db4) listscroll_midp_info_pane_t4_ParamLimits

0x5174,	// (0x00013db4) listscroll_midp_info_pane_t4

0x0003,

0xf82a,	// (0x0001e46a) listscroll_midp_info_pane_t_ParamLimits

0xf82a,	// (0x0001e46a) listscroll_midp_info_pane_t

0x331d,	// (0x00011f5d) scroll_pane_cp21

0x5088,	// (0x00013cc8) form_midp_field_choice_group_pane

0x5091,	// (0x00013cd1) form_midp_field_text_pane

0x50ca,	// (0x00013d0a) form_midp_field_time_pane

0x50d2,	// (0x00013d12) form_midp_gauge_slider_pane

0x50db,	// (0x00013d1b) form_midp_gauge_wait_pane

0x2171,	// (0x00010db1) form_midp_image_pane

0xcbba,	// (0x0001b7fa) list_single_midp_pane_ParamLimits

0xcbba,	// (0x0001b7fa) list_single_midp_pane

0x4ffc,	// (0x00013c3c) form_midp_field_text_pane_t1

0x4dc7,	// (0x00013a07) input_focus_pane_cp050

0x503b,	// (0x00013c7b) list_midp_form_text_pane

0x4fcb,	// (0x00013c0b) form_midp_field_choice_group_pane_t1

0x4fd9,	// (0x00013c19) input_focus_pane_cp051

0x4fed,	// (0x00013c2d) list_midp_choice_pane

0x2171,	// (0x00010db1) status_idle_pane

0x4faf,	// (0x00013bef) form_midp_field_time_pane_t1

0x2167,	// (0x00010da7) wait_anim_pane_g2_copy1

0x4fbd,	// (0x00013bfd) form_midp_field_time_pane_t2

0x0001,

0x3f9d,	// (0x00012bdd) aid_navinavi_width_2_pane

0xf825,	// (0x0001e465) form_midp_field_time_pane_t

0x2171,	// (0x00010db1) input_focus_pane_cp052

0x2171,	// (0x00010db1) bg_input_focus_pane_cp040

0x4f6f,	// (0x00013baf) form_midp_gauge_slider_pane_t1

0x4f7d,	// (0x00013bbd) form_midp_gauge_slider_pane_t2

0x4f8b,	// (0x00013bcb) form_midp_gauge_slider_pane_t3

0x4f99,	// (0x00013bd9) form_midp_gauge_slider_pane_t4

0x0003,

0xf81c,	// (0x0001e45c) form_midp_gauge_slider_pane_t

0x4fa7,	// (0x00013be7) form_midp_slider_pane

0x2251,	// (0x00010e91) bg_input_focus_pane_cp041_ParamLimits

0x2251,	// (0x00010e91) bg_input_focus_pane_cp041

0x4f3c,	// (0x00013b7c) form_midp_gauge_wait_pane_t1_ParamLimits

0x4f3c,	// (0x00013b7c) form_midp_gauge_wait_pane_t1

0x4f4e,	// (0x00013b8e) form_midp_gauge_wait_pane_t2_ParamLimits

0x4f4e,	// (0x00013b8e) form_midp_gauge_wait_pane_t2

0x0001,

0xf817,	// (0x0001e457) form_midp_gauge_wait_pane_t_ParamLimits

0xf817,	// (0x0001e457) form_midp_gauge_wait_pane_t

0x4f60,	// (0x00013ba0) form_midp_wait_pane_ParamLimits

0x4f60,	// (0x00013ba0) form_midp_wait_pane

0x4f06,	// (0x00013b46) form_midp_image_pane_g1

0x4f0f,	// (0x00013b4f) form_midp_image_pane_t1

0x4f1e,	// (0x00013b5e) form_midp_image_pane_t2

0x4f2d,	// (0x00013b6d) form_midp_image_pane_t3

0x0002,

0xf810,	// (0x0001e450) form_midp_image_pane_t

0x4eee,	// (0x00013b2e) list_single_midp_pane_g1

0xcbab,	// (0x0001b7eb) list_single_midp_pane_t1

0x4ebe,	// (0x00013afe) list_midp_form_item_pane_ParamLimits

0x4ebe,	// (0x00013afe) list_midp_form_item_pane

0x3f45,	// (0x00012b85) list_midp_form_item_pane_t1

0x3f54,	// (0x00012b94) midp_ticker_pane_g1

0x3f60,	// (0x00012ba0) midp_ticker_pane_g2

0x0001,

0xf76b,	// (0x0001e3ab) midp_ticker_pane_g

0x3f6c,	// (0x00012bac) midp_ticker_pane_t1

0x636d,	// (0x00014fad) midp_editing_number_pane_t1

0x634b,	// (0x00014f8b) midp_editing_number_pane

0x635a,	// (0x00014f9a) midp_ticker_pane

0x60bf,	// (0x00014cff) ai_message_heading_pane

0x2171,	// (0x00010db1) bg_popup_window_pane_cp14

0x60c7,	// (0x00014d07) listscroll_ai_message_pane

0x6049,	// (0x00014c89) ai_message_heading_pane_g1_ParamLimits

0x6049,	// (0x00014c89) ai_message_heading_pane_g1

0x6055,	// (0x00014c95) ai_message_heading_pane_g2_ParamLimits

0x6055,	// (0x00014c95) ai_message_heading_pane_g2

0x6061,	// (0x00014ca1) ai_message_heading_pane_g3_ParamLimits

0x6061,	// (0x00014ca1) ai_message_heading_pane_g3

0x606d,	// (0x00014cad) ai_message_heading_pane_g4_ParamLimits

0x606d,	// (0x00014cad) ai_message_heading_pane_g4

0x0003,

0xf951,	// (0x0001e591) ai_message_heading_pane_g_ParamLimits

0xf951,	// (0x0001e591) ai_message_heading_pane_g

0x6079,	// (0x00014cb9) ai_message_heading_pane_t1_ParamLimits

0x6079,	// (0x00014cb9) ai_message_heading_pane_t1

0x6093,	// (0x00014cd3) ai_message_heading_pane_t2_ParamLimits

0x6093,	// (0x00014cd3) ai_message_heading_pane_t2

0x0001,

0xf95a,	// (0x0001e59a) ai_message_heading_pane_t_ParamLimits

0xf95a,	// (0x0001e59a) ai_message_heading_pane_t

0x60a5,	// (0x00014ce5) bg_popup_heading_pane_cp1_ParamLimits

0x60a5,	// (0x00014ce5) bg_popup_heading_pane_cp1

0x6037,	// (0x00014c77) list_ai_message_pane_ParamLimits

0x6037,	// (0x00014c77) list_ai_message_pane

0x331d,	// (0x00011f5d) scroll_pane_cp10

0x5fd3,	// (0x00014c13) list_ai_message_pane_g1

0x5fdb,	// (0x00014c1b) list_ai_message_pane_g2

0x0001,

0xf92e,	// (0x0001e56e) list_ai_message_pane_g

0x5fe3,	// (0x00014c23) list_ai_message_pane_t1_ParamLimits

0x5fe3,	// (0x00014c23) list_ai_message_pane_t1

0x5ff8,	// (0x00014c38) list_ai_message_pane_t2_ParamLimits

0x5ff8,	// (0x00014c38) list_ai_message_pane_t2

0x600d,	// (0x00014c4d) list_ai_message_pane_t3_ParamLimits

0x600d,	// (0x00014c4d) list_ai_message_pane_t3

0x6022,	// (0x00014c62) list_ai_message_pane_t4_ParamLimits

0x6022,	// (0x00014c62) list_ai_message_pane_t4

0x0003,

0xf933,	// (0x0001e573) list_ai_message_pane_t_ParamLimits

0xf933,	// (0x0001e573) list_ai_message_pane_t

0x5fbd,	// (0x00014bfd) cell_ai_soft_ind_pane_ParamLimits

0x5fbd,	// (0x00014bfd) cell_ai_soft_ind_pane

0x3f7e,	// (0x00012bbe) cell_ai_soft_ind_pane_g1_ParamLimits

0x3f7e,	// (0x00012bbe) cell_ai_soft_ind_pane_g1

0x2171,	// (0x00010db1) grid_highlight_cp1

0x3f8b,	// (0x00012bcb) text_secondary_cp56_ParamLimits

0x3f8b,	// (0x00012bcb) text_secondary_cp56

0x5f92,	// (0x00014bd2) example_general_pane_ParamLimits

0x5f92,	// (0x00014bd2) example_general_pane

0x5f9e,	// (0x00014bde) example_parent_pane_g1_ParamLimits

0x5f9e,	// (0x00014bde) example_parent_pane_g1

0x5faa,	// (0x00014bea) example_parent_pane_t1_ParamLimits

0x5faa,	// (0x00014bea) example_parent_pane_t1

0x4588,	// (0x000131c8) popup_preview_text_window_ParamLimits

0x4588,	// (0x000131c8) popup_preview_text_window

0x3da4,	// (0x000129e4) list_single_pane_cp2_g4

0x2590,	// (0x000111d0) bg_popup_preview_window_pane_ParamLimits

0x2590,	// (0x000111d0) bg_popup_preview_window_pane

0x5cc9,	// (0x00014909) popup_preview_text_window_t1_ParamLimits

0x5cc9,	// (0x00014909) popup_preview_text_window_t1

0x5ce7,	// (0x00014927) popup_preview_text_window_t2_ParamLimits

0x5ce7,	// (0x00014927) popup_preview_text_window_t2

0x5d30,	// (0x00014970) popup_preview_text_window_t3_ParamLimits

0x5d30,	// (0x00014970) popup_preview_text_window_t3

0x5d75,	// (0x000149b5) popup_preview_text_window_t4_ParamLimits

0x5d75,	// (0x000149b5) popup_preview_text_window_t4

0x0004,

0xf902,	// (0x0001e542) popup_preview_text_window_t_ParamLimits

0xf902,	// (0x0001e542) popup_preview_text_window_t

0x5df3,	// (0x00014a33) scroll_pane_cp11

0x4cad,	// (0x000138ed) bg_popup_preview_window_pane_g1

0x5c89,	// (0x000148c9) bg_popup_preview_window_pane_g2

0x5c91,	// (0x000148d1) bg_popup_preview_window_pane_g3

0x5c99,	// (0x000148d9) bg_popup_preview_window_pane_g4

0x5ca1,	// (0x000148e1) bg_popup_preview_window_pane_g5

0x5ca9,	// (0x000148e9) bg_popup_preview_window_pane_g6

0x5cb1,	// (0x000148f1) bg_popup_preview_window_pane_g7

0x5cb9,	// (0x000148f9) bg_popup_preview_window_pane_g8

0xd334,	// (0x0001bf74) aid_popup_width_pane

0x4566,	// (0x000131a6) popup_midp_note_alarm_window_ParamLimits

0x4566,	// (0x000131a6) popup_midp_note_alarm_window

0x2ffa,	// (0x00011c3a) data_form_pane_ParamLimits

0xc8ca,	// (0x0001b50a) form_field_data_pane_g1

0xc8d4,	// (0x0001b514) form_field_data_pane_t1_ParamLimits

0x302a,	// (0x00011c6a) input_focus_pane_ParamLimits

0x3038,	// (0x00011c78) data_form_wide_pane_ParamLimits

0xc8ee,	// (0x0001b52e) form_field_data_wide_pane_g1

0xc8fa,	// (0x0001b53a) form_field_data_wide_pane_t1_ParamLimits

0x282f,	// (0x0001146f) input_focus_pane_cp6_ParamLimits

0x32c8,	// (0x00011f08) input_popup_find_pane_g1_ParamLimits

0x32c8,	// (0x00011f08) input_popup_find_pane_g1

0xd886,	// (0x0001c4c6) aid_navi_side_left_pane

0xd89b,	// (0x0001c4db) aid_navi_side_right_pane

0x56a8,	// (0x000142e8) bg_popup_window_pane_cp30_ParamLimits

0x56a8,	// (0x000142e8) bg_popup_window_pane_cp30

0x5722,	// (0x00014362) popup_midp_note_alarm_window_g1_ParamLimits

0x5722,	// (0x00014362) popup_midp_note_alarm_window_g1

0x5752,	// (0x00014392) popup_midp_note_alarm_window_t1_ParamLimits

0x5752,	// (0x00014392) popup_midp_note_alarm_window_t1

0x57f3,	// (0x00014433) popup_midp_note_alarm_window_t2_ParamLimits

0x57f3,	// (0x00014433) popup_midp_note_alarm_window_t2

0x58a1,	// (0x000144e1) popup_midp_note_alarm_window_t3_ParamLimits

0x58a1,	// (0x000144e1) popup_midp_note_alarm_window_t3

0x58c9,	// (0x00014509) popup_midp_note_alarm_window_t4_ParamLimits

0x58c9,	// (0x00014509) popup_midp_note_alarm_window_t4

0x58e9,	// (0x00014529) popup_midp_note_alarm_window_t5_ParamLimits

0x58e9,	// (0x00014529) popup_midp_note_alarm_window_t5

0x000a,

0xf89f,	// (0x0001e4df) popup_midp_note_alarm_window_t_ParamLimits

0xf89f,	// (0x0001e4df) popup_midp_note_alarm_window_t

0x5995,	// (0x000145d5) wait_bar_pane_cp1_ParamLimits

0x5995,	// (0x000145d5) wait_bar_pane_cp1

0x2171,	// (0x00010db1) wait_anim_pane_copy1

0x2171,	// (0x00010db1) wait_border_pane_copy1

0x5386,	// (0x00013fc6) wait_border_pane_g1_copy1

0xc914,	// (0x0001b554) form_field_popup_pane_g1

0xc91c,	// (0x0001b55c) form_field_popup_pane_t1_ParamLimits

0x302a,	// (0x00011c6a) input_focus_pane_cp7_ParamLimits

0x30ac,	// (0x00011cec) list_form_pane_ParamLimits

0xc936,	// (0x0001b576) form_field_popup_wide_pane_g1

0xc93e,	// (0x0001b57e) form_field_popup_wide_pane_t1_ParamLimits

0x302a,	// (0x00011c6a) input_focus_pane_cp8_ParamLimits

0x30d5,	// (0x00011d15) list_form_wide_pane_ParamLimits

0x6583,	// (0x000151c3) aid_size_cell_graphic_pane

0xc9c3,	// (0x0001b603) data_form_pane_t1_ParamLimits

0xcc09,	// (0x0001b849) data_form_wide_pane_t1_ParamLimits

0x4861,	// (0x000134a1) bg_status_flat_pane

0x21b1,	// (0x00010df1) title_pane_t1_ParamLimits

0x2219,	// (0x00010e59) title_pane_t2_ParamLimits

0x223f,	// (0x00010e7f) title_pane_t3_ParamLimits

0xf573,	// (0x0001e1b3) title_pane_t_ParamLimits

0x379d,	// (0x000123dd) level_1_signal_ParamLimits

0x37aa,	// (0x000123ea) level_2_signal_ParamLimits

0x37b7,	// (0x000123f7) level_3_signal_ParamLimits

0x37c4,	// (0x00012404) level_4_signal_ParamLimits

0x37d1,	// (0x00012411) level_5_signal_ParamLimits

0x37de,	// (0x0001241e) level_6_signal_ParamLimits

0x37eb,	// (0x0001242b) level_7_signal_ParamLimits

0x379d,	// (0x000123dd) level_1_battery_ParamLimits

0x37aa,	// (0x000123ea) level_2_battery_ParamLimits

0x37b7,	// (0x000123f7) level_3_battery_ParamLimits

0x37c4,	// (0x00012404) level_4_battery_ParamLimits

0x37d1,	// (0x00012411) level_5_battery_ParamLimits

0x37de,	// (0x0001241e) level_6_battery_ParamLimits

0x37eb,	// (0x0001242b) level_7_battery_ParamLimits

0x55ad,	// (0x000141ed) bg_status_flat_pane_g1

0x55b5,	// (0x000141f5) bg_status_flat_pane_g2

0x55bd,	// (0x000141fd) bg_status_flat_pane_g3

0x55c5,	// (0x00014205) bg_status_flat_pane_g4

0x55cd,	// (0x0001420d) bg_status_flat_pane_g5

0x55d5,	// (0x00014215) bg_status_flat_pane_g6

0x55dd,	// (0x0001421d) bg_status_flat_pane_g7

0x2267,	// (0x00010ea7) tabs_3_active_pane_t1_ParamLimits

0x2267,	// (0x00010ea7) tabs_3_passive_pane_t1_ParamLimits

0x2281,	// (0x00010ec1) tabs_4_active_pane_t1_ParamLimits

0x2281,	// (0x00010ec1) tabs_4_1_passive_pane_t1_ParamLimits

0x335d,	// (0x00011f9d) tabs_2_active_pane_t1_ParamLimits

0x335d,	// (0x00011f9d) tabs_2_passive_pane_t1_ParamLimits

0x336f,	// (0x00011faf) bg_active_tab_pane_cp4_ParamLimits

0x337d,	// (0x00011fbd) tabs_2_long_active_pane_t1_ParamLimits

0x3390,	// (0x00011fd0) bg_passive_tab_pane_cp4_ParamLimits

0xdddd,	// (0x0001ca1d) list_single_midp_graphic_pane_t1_ParamLimits

0x336f,	// (0x00011faf) bg_active_tab_pane_cp5_ParamLimits

0x339c,	// (0x00011fdc) tabs_3_long_active_pane_t1_ParamLimits

0x3390,	// (0x00011fd0) bg_passive_tab_pane_cp5_ParamLimits

0xdddd,	// (0x0001ca1d) list_single_midp_graphic_pane_t1

0x4861,	// (0x000134a1) bg_status_flat_pane_ParamLimits

0x4924,	// (0x00013564) indicator_pane_cp2_ParamLimits

0x4924,	// (0x00013564) indicator_pane_cp2

0x4a48,	// (0x00013688) navi_pane_srt_ParamLimits

0x4a48,	// (0x00013688) navi_pane_srt

0x4a6c,	// (0x000136ac) popup_clock_digital_analogue_window_cp1

0x2348,	// (0x00010f88) indicator_pane_t1

0x3e75,	// (0x00012ab5) copy_highlight_pane

0x3e75,	// (0x00012ab5) cursor_graphics_pane

0x3e75,	// (0x00012ab5) graphic_within_text_pane

0x3e75,	// (0x00012ab5) link_highlight_pane

0x5db6,	// (0x000149f6) popup_preview_text_window_t5_ParamLimits

0x5db6,	// (0x000149f6) popup_preview_text_window_t5

0x3fa5,	// (0x00012be5) cursor_digital_pane

0x3fa5,	// (0x00012be5) cursor_primary_pane

0x3fb6,	// (0x00012bf6) cursor_primary_small_pane

0x3fbe,	// (0x00012bfe) cursor_secondary_pane

0x3fc6,	// (0x00012c06) cursor_title_pane

0x3fa5,	// (0x00012be5) link_highlight_digital_pane

0x3fad,	// (0x00012bed) link_highlight_primary_pane

0x3fb6,	// (0x00012bf6) link_highlight_primary_small_pane

0x3fbe,	// (0x00012bfe) link_highlight_secondary_pane

0x3fc6,	// (0x00012c06) link_highlight_title_pane

0x3fa5,	// (0x00012be5) copy_highlight_digital_pane

0x3fa5,	// (0x00012be5) copy_highlight_primary_pane

0x3fb6,	// (0x00012bf6) copy_highlight_primary_small_pane

0x3fbe,	// (0x00012bfe) copy_highlight_secondary_pane

0x3fc6,	// (0x00012c06) copy_highlight_title_pane

0x3fbe,	// (0x00012bfe) graphic_text_digital_pane

0x564b,	// (0x0001428b) graphic_text_primary_pane

0x5654,	// (0x00014294) graphic_text_primary_small_pane

0x3fb6,	// (0x00012bf6) graphic_text_secondary_pane

0x3fa5,	// (0x00012be5) graphic_text_title_pane

0x3fce,	// (0x00012c0e) cursor_primary_pane_g1

0x563d,	// (0x0001427d) cursor_text_primary_t1

0x5625,	// (0x00014265) cursor_primary_small_pane_g1

0x562f,	// (0x0001426f) cursor_text_primary_small_t1

0x560d,	// (0x0001424d) cursor_primary_small_pane_g1_copy1

0x5617,	// (0x00014257) cursor_text_primary_small_t1_copy1

0x55f5,	// (0x00014235) cursor_text_title_t1

0x5603,	// (0x00014243) cursor_title_pane_g1

0x3fce,	// (0x00012c0e) cursor_digital_pane_g1

0x3fd8,	// (0x00012c18) cursor_text_digital_t1

0x5596,	// (0x000141d6) link_highlight_primary_pane_g1

0x559e,	// (0x000141de) link_highlight_primary_pane_t1

0x3fe6,	// (0x00012c26) link_highlight_primary_small_pane_g1

0x3fee,	// (0x00012c2e) link_highlight_primary_small_pane_t1

0x3fe6,	// (0x00012c26) link_highlight_secondary_pane_g1

0x3ffd,	// (0x00012c3d) link_highlight_secondary_pane_t1

0x550a,	// (0x0001414a) link_highlight_title_pane_g1

0x5512,	// (0x00014152) link_highlight_title_pane_t1

0x54f3,	// (0x00014133) link_highlight_digital_pane_g1

0x54fb,	// (0x0001413b) link_highlight_digital_pane_t1

0x53cb,	// (0x0001400b) copy_highlight_primary_pane_g1

0x53d3,	// (0x00014013) copy_highlight_primary_pane_t1

0x53a5,	// (0x00013fe5) copy_highlight_primary_small_pane_g1

0x53bc,	// (0x00013ffc) copy_highlight_primary_small_pane_t1

0x400c,	// (0x00012c4c) copy_highlight_secondary_pane_g1

0x4014,	// (0x00012c54) copy_highlight_secondary_pane_t1

0x53a5,	// (0x00013fe5) copy_highlight_title_pane_g1

0x53ad,	// (0x00013fed) copy_highlight_title_pane_t1

0x53cb,	// (0x0001400b) copy_highlight_digital_pane_g1

0x6751,	// (0x00015391) copy_highlight_digital_pane_t1

0x66a5,	// (0x000152e5) graphic_text_primary_pane_g1

0x6735,	// (0x00015375) graphic_text_primary_pane_t1

0x6743,	// (0x00015383) graphic_text_primary_pane_t2

0x0001,

0xf9ce,	// (0x0001e60e) graphic_text_primary_pane_t

0x6711,	// (0x00015351) graphic_text_primary_small_pane_g1

0x6719,	// (0x00015359) graphic_text_primary_small_pane_t1

0x6727,	// (0x00015367) graphic_text_primary_small_pane_t2

0x0001,

0xf9c9,	// (0x0001e609) graphic_text_primary_small_pane_t

0x66ed,	// (0x0001532d) graphic_text_secondary_pane_g1

0x66f5,	// (0x00015335) graphic_text_secondary_pane_t1

0x6703,	// (0x00015343) graphic_text_secondary_pane_t2

0x0001,

0xf9c4,	// (0x0001e604) graphic_text_secondary_pane_t

0x66c9,	// (0x00015309) graphic_text_title_pane_g1

0x66d1,	// (0x00015311) graphic_text_title_pane_t1

0x66df,	// (0x0001531f) graphic_text_title_pane_t2

0x0001,

0xf9bf,	// (0x0001e5ff) graphic_text_title_pane_t

0x66a5,	// (0x000152e5) graphic_text_digital_pane_g1

0x66ad,	// (0x000152ed) graphic_text_digital_pane_t1

0x66bb,	// (0x000152fb) graphic_text_digital_pane_t2

0x0001,

0xf9ba,	// (0x0001e5fa) graphic_text_digital_pane_t

0x2251,	// (0x00010e91) navi_icon_pane_srt_ParamLimits

0x2251,	// (0x00010e91) navi_icon_pane_srt

0x2171,	// (0x00010db1) navi_midp_pane_srt

0x2171,	// (0x00010db1) navi_navi_pane_srt

0x2251,	// (0x00010e91) navi_text_pane_srt_ParamLimits

0x2251,	// (0x00010e91) navi_text_pane_srt

0x6670,	// (0x000152b0) navi_navi_icon_text_pane_srt

0x668a,	// (0x000152ca) navi_navi_pane_srt_g1_ParamLimits

0x668a,	// (0x000152ca) navi_navi_pane_srt_g1

0x6678,	// (0x000152b8) navi_navi_pane_srt_g2_ParamLimits

0x6678,	// (0x000152b8) navi_navi_pane_srt_g2

0x0001,

0xf9b5,	// (0x0001e5f5) navi_navi_pane_srt_g_ParamLimits

0xf9b5,	// (0x0001e5f5) navi_navi_pane_srt_g

0x669c,	// (0x000152dc) navi_navi_tabs_pane_srt

0x6670,	// (0x000152b0) navi_navi_text_pane_srt

0x6670,	// (0x000152b0) navi_navi_volume_pane_srt

0x6661,	// (0x000152a1) navi_navi_text_pane_srt_t1

0xe15d,	// (0x0001cd9d) navi_navi_volume_pane_srt_g1

0xe165,	// (0x0001cda5) volume_small_pane_srt_ParamLimits

0xe165,	// (0x0001cda5) volume_small_pane_srt

0xdb66,	// (0x0001c7a6) volume_small_pane_srt_g1_ParamLimits

0xdb66,	// (0x0001c7a6) volume_small_pane_srt_g1

0xdb76,	// (0x0001c7b6) volume_small_pane_srt_g2_ParamLimits

0xdb76,	// (0x0001c7b6) volume_small_pane_srt_g2

0xdb87,	// (0x0001c7c7) volume_small_pane_srt_g3_ParamLimits

0xdb87,	// (0x0001c7c7) volume_small_pane_srt_g3

0xdb98,	// (0x0001c7d8) volume_small_pane_srt_g4_ParamLimits

0xdb98,	// (0x0001c7d8) volume_small_pane_srt_g4

0xdba9,	// (0x0001c7e9) volume_small_pane_srt_g5_ParamLimits

0xdba9,	// (0x0001c7e9) volume_small_pane_srt_g5

0xdbba,	// (0x0001c7fa) volume_small_pane_srt_g6_ParamLimits

0xdbba,	// (0x0001c7fa) volume_small_pane_srt_g6

0xdbcb,	// (0x0001c80b) volume_small_pane_srt_g7_ParamLimits

0xdbcb,	// (0x0001c80b) volume_small_pane_srt_g7

0xdbdc,	// (0x0001c81c) volume_small_pane_srt_g8_ParamLimits

0xdbdc,	// (0x0001c81c) volume_small_pane_srt_g8

0xdbed,	// (0x0001c82d) volume_small_pane_srt_g9_ParamLimits

0xdbed,	// (0x0001c82d) volume_small_pane_srt_g9

0xdbfe,	// (0x0001c83e) volume_small_pane_srt_g10_ParamLimits

0xdbfe,	// (0x0001c83e) volume_small_pane_srt_g10

0x0009,

0xf770,	// (0x0001e3b0) volume_small_pane_srt_g_ParamLimits

0xf770,	// (0x0001e3b0) volume_small_pane_srt_g

0x2639,	// (0x00011279) query_popup_data_pane_cp2

0x6647,	// (0x00015287) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x6647,	// (0x00015287) navi_navi_icon_text_pane_srt_t1

0x564b,	// (0x0001428b) navi_tabs_2_long_pane_srt

0x564b,	// (0x0001428b) navi_tabs_2_pane_srt

0x564b,	// (0x0001428b) navi_tabs_3_long_pane_srt

0x564b,	// (0x0001428b) navi_tabs_3_pane_srt

0x564b,	// (0x0001428b) navi_tabs_4_pane_srt

0xe13d,	// (0x0001cd7d) tabs_2_active_pane_srt_ParamLimits

0xe13d,	// (0x0001cd7d) tabs_2_active_pane_srt

0xe14d,	// (0x0001cd8d) tabs_2_passive_pane_srt_ParamLimits

0xe14d,	// (0x0001cd8d) tabs_2_passive_pane_srt

0x41fb,	// (0x00012e3b) bg_passive_tab_pane_cp1_srt_ParamLimits

0x41fb,	// (0x00012e3b) bg_passive_tab_pane_cp1_srt

0x661c,	// (0x0001525c) bg_passive_tab_pane_g1_cp1_srt

0x3abd,	// (0x000126fd) bg_passive_tab_pane_g2_cp1_srt

0x6613,	// (0x00015253) bg_passive_tab_pane_g3_cp1_srt

0x2251,	// (0x00010e91) bg_active_tab_pane_cp1_srt_ParamLimits

0x2251,	// (0x00010e91) bg_active_tab_pane_cp1_srt

0x6625,	// (0x00015265) tabs_2_active_pane_srt_g1

0x662d,	// (0x0001526d) tabs_2_active_pane_srt_t1_ParamLimits

0x662d,	// (0x0001526d) tabs_2_active_pane_srt_t1

0x661c,	// (0x0001525c) bg_active_tab_pane_g1_cp1_srt

0x3abd,	// (0x000126fd) bg_active_tab_pane_g2_cp1_srt

0x6613,	// (0x00015253) bg_active_tab_pane_g3_cp1_srt

0xe10a,	// (0x0001cd4a) tabs_3_active_pane_srt_ParamLimits

0xe10a,	// (0x0001cd4a) tabs_3_active_pane_srt

0xe11b,	// (0x0001cd5b) tabs_3_passive_pane_cp_srt_ParamLimits

0xe11b,	// (0x0001cd5b) tabs_3_passive_pane_cp_srt

0xe12c,	// (0x0001cd6c) tabs_3_passive_pane_srt_ParamLimits

0xe12c,	// (0x0001cd6c) tabs_3_passive_pane_srt

0x41fb,	// (0x00012e3b) bg_passive_tab_pane_cp2_srt_ParamLimits

0x41fb,	// (0x00012e3b) bg_passive_tab_pane_cp2_srt

0x402c,	// (0x00012c6c) bg_passive_tab_pane_g1_cp2_srt

0x3abd,	// (0x000126fd) bg_passive_tab_pane_g2_cp2_srt

0x4023,	// (0x00012c63) bg_passive_tab_pane_g3_cp2_srt

0x2251,	// (0x00010e91) bg_active_tab_pane_cp2_srt_ParamLimits

0x2251,	// (0x00010e91) bg_active_tab_pane_cp2_srt

0x65f9,	// (0x00015239) tabs_3_active_pane_srt_g1

0x6601,	// (0x00015241) tabs_3_active_pane_srt_t1_ParamLimits

0x6601,	// (0x00015241) tabs_3_active_pane_srt_t1

0x402c,	// (0x00012c6c) bg_active_tab_pane_g1_cp2_srt

0x3abd,	// (0x000126fd) bg_active_tab_pane_g2_cp2_srt

0x4023,	// (0x00012c63) bg_active_tab_pane_g3_cp2_srt

0xe0c2,	// (0x0001cd02) tabs_4_active_pane_srt_ParamLimits

0xe0c2,	// (0x0001cd02) tabs_4_active_pane_srt

0xe0d4,	// (0x0001cd14) tabs_4_passive_pane_cp2_srt_ParamLimits

0xe0d4,	// (0x0001cd14) tabs_4_passive_pane_cp2_srt

0x4181,	// (0x00012dc1) aid_size_cell_toolbar

0x3390,	// (0x00011fd0) main_idle_act_pane_ParamLimits

0x439a,	// (0x00012fda) popup_large_graphic_colour_window_ParamLimits

0x46f9,	// (0x00013339) popup_toolbar_window_ParamLimits

0x46f9,	// (0x00013339) popup_toolbar_window

0xcc6f,	// (0x0001b8af) list_single_graphic_2heading_pane_ParamLimits

0xcc6f,	// (0x0001b8af) list_single_graphic_2heading_pane

0x354c,	// (0x0001218c) aid_size_cell_apps_grid_lsc_pane

0x355e,	// (0x0001219e) aid_size_cell_apps_grid_prt_pane

0x41fb,	// (0x00012e3b) bg_wml_button_pane_cp1_ParamLimits

0x41fb,	// (0x00012e3b) bg_wml_button_pane_cp1

0x4ffc,	// (0x00013c3c) form_midp_field_text_pane_t1_ParamLimits

0x4dc7,	// (0x00013a07) input_focus_pane_cp050_ParamLimits

0x503b,	// (0x00013c7b) list_midp_form_text_pane_ParamLimits

0x4fd9,	// (0x00013c19) input_focus_pane_cp051_ParamLimits

0x4fed,	// (0x00013c2d) list_midp_choice_pane_ParamLimits

0x4e58,	// (0x00013a98) list_single_2graphic_pane_cp3_ParamLimits

0x4e58,	// (0x00013a98) list_single_2graphic_pane_cp3

0x4e84,	// (0x00013ac4) list_single_midp_graphic_pane_ParamLimits

0x4e84,	// (0x00013ac4) list_single_midp_graphic_pane

0xc452,	// (0x0001b092) list_single_graphic_2heading_pane_g1_ParamLimits

0xc452,	// (0x0001b092) list_single_graphic_2heading_pane_g1

0xc3d8,	// (0x0001b018) list_single_graphic_2heading_pane_g4_ParamLimits

0xc3d8,	// (0x0001b018) list_single_graphic_2heading_pane_g4

0xc3e4,	// (0x0001b024) list_single_graphic_2heading_pane_g5_ParamLimits

0xc3e4,	// (0x0001b024) list_single_graphic_2heading_pane_g5

0x0002,

0xf7c3,	// (0x0001e403) list_single_graphic_2heading_pane_g_ParamLimits

0xf7c3,	// (0x0001e403) list_single_graphic_2heading_pane_g

0xcb23,	// (0x0001b763) list_single_graphic_2heading_pane_t1_ParamLimits

0xcb23,	// (0x0001b763) list_single_graphic_2heading_pane_t1

0xcb37,	// (0x0001b777) list_single_graphic_2heading_pane_t2_ParamLimits

0xcb37,	// (0x0001b777) list_single_graphic_2heading_pane_t2

0xcb53,	// (0x0001b793) list_single_graphic_2heading_pane_t3_ParamLimits

0xcb53,	// (0x0001b793) list_single_graphic_2heading_pane_t3

0x0002,

0xf7ca,	// (0x0001e40a) list_single_graphic_2heading_pane_t_ParamLimits

0xf7ca,	// (0x0001e40a) list_single_graphic_2heading_pane_t

0x4bc9,	// (0x00013809) bg_popup_sub_pane_cp2

0x4bf3,	// (0x00013833) grid_toobar_pane

0xdd62,	// (0x0001c9a2) cell_toolbar_pane_ParamLimits

0xdd62,	// (0x0001c9a2) cell_toolbar_pane

0x4c51,	// (0x00013891) cell_toolbar_pane_g1_ParamLimits

0x4c51,	// (0x00013891) cell_toolbar_pane_g1

0x4c65,	// (0x000138a5) cell_toolbar_pane_g2_ParamLimits

0x4c65,	// (0x000138a5) cell_toolbar_pane_g2

0x0001,

0xf7d1,	// (0x0001e411) cell_toolbar_pane_g_ParamLimits

0xf7d1,	// (0x0001e411) cell_toolbar_pane_g

0x4c87,	// (0x000138c7) grid_highlight_pane_cp2_ParamLimits

0x4c87,	// (0x000138c7) grid_highlight_pane_cp2

0x4ca1,	// (0x000138e1) toolbar_button_pane

0x4cad,	// (0x000138ed) toolbar_button_pane_g1

0x4cbd,	// (0x000138fd) toolbar_button_pane_g2

0x4cb5,	// (0x000138f5) toolbar_button_pane_g3

0x4ccd,	// (0x0001390d) toolbar_button_pane_g4

0x4cc5,	// (0x00013905) toolbar_button_pane_g5

0x4cd5,	// (0x00013915) toolbar_button_pane_g6

0x4cdd,	// (0x0001391d) toolbar_button_pane_g7

0x4ced,	// (0x0001392d) toolbar_button_pane_g8

0x4ce5,	// (0x00013925) toolbar_button_pane_g9

0x0009,

0xf7d6,	// (0x0001e416) toolbar_button_pane_g

0xdd9a,	// (0x0001c9da) list_single_2graphic_pane_g1_cp3_ParamLimits

0xdd9a,	// (0x0001c9da) list_single_2graphic_pane_g1_cp3

0xdda6,	// (0x0001c9e6) list_single_2graphic_pane_g2_cp3_ParamLimits

0xdda6,	// (0x0001c9e6) list_single_2graphic_pane_g2_cp3

0x3ca1,	// (0x000128e1) list_single_2graphic_pane_g3_cp3

0xddb7,	// (0x0001c9f7) list_single_2graphic_pane_g4_cp3_ParamLimits

0xddb7,	// (0x0001c9f7) list_single_2graphic_pane_g4_cp3

0xddc3,	// (0x0001ca03) list_single_2graphic_pane_t1_cp3_ParamLimits

0xddc3,	// (0x0001ca03) list_single_2graphic_pane_t1_cp3

0x3c95,	// (0x000128d5) list_single_midp_graphic_pane_g2_ParamLimits

0x3c95,	// (0x000128d5) list_single_midp_graphic_pane_g2

0x4191,	// (0x00012dd1) aid_zoom_text_primary

0xcaf7,	// (0x0001b737) aid_zoom_text_secondary

0x40e0,	// (0x00012d20) status_small_pane_g7_ParamLimits

0x40e0,	// (0x00012d20) status_small_pane_g7

0x4103,	// (0x00012d43) status_small_pane_t1_ParamLimits

0x2188,	// (0x00010dc8) title_pane_g2

0x0003,

0xf56a,	// (0x0001e1aa) title_pane_g

0x26da,	// (0x0001131a) aid_size_cell_colour_1_pane_ParamLimits

0x26da,	// (0x0001131a) aid_size_cell_colour_1_pane

0x26ee,	// (0x0001132e) aid_size_cell_colour_2_pane_ParamLimits

0x26ee,	// (0x0001132e) aid_size_cell_colour_2_pane

0x2702,	// (0x00011342) aid_size_cell_colour_3_pane_ParamLimits

0x2702,	// (0x00011342) aid_size_cell_colour_3_pane

0x2716,	// (0x00011356) aid_size_cell_colour_4_pane_ParamLimits

0x2716,	// (0x00011356) aid_size_cell_colour_4_pane

0xd7c2,	// (0x0001c402) title_pane_stacon_g1_ParamLimits

0xd7c2,	// (0x0001c402) title_pane_stacon_g1

0x542a,	// (0x0001406a) popup_note_wait_window_g3_ParamLimits

0x542a,	// (0x0001406a) popup_note_wait_window_g3

0x54a0,	// (0x000140e0) popup_note_wait_window_t5_ParamLimits

0x54a0,	// (0x000140e0) popup_note_wait_window_t5

0x2171,	// (0x00010db1) main_feb_china_hwr_fs_writing_pane

0x4285,	// (0x00012ec5) popup_feb_china_hwr_fs_window_ParamLimits

0x4285,	// (0x00012ec5) popup_feb_china_hwr_fs_window

0xddf3,	// (0x0001ca33) aid_size_cell_hwr_fs_ParamLimits

0xddf3,	// (0x0001ca33) aid_size_cell_hwr_fs

0x4dc7,	// (0x00013a07) bg_popup_sub_pane_cp3_ParamLimits

0x4dc7,	// (0x00013a07) bg_popup_sub_pane_cp3

0xde08,	// (0x0001ca48) grid_hwr_fs_pane_ParamLimits

0xde08,	// (0x0001ca48) grid_hwr_fs_pane

0xde20,	// (0x0001ca60) linegrid_hwr_fs_pane_ParamLimits

0xde20,	// (0x0001ca60) linegrid_hwr_fs_pane

0xde30,	// (0x0001ca70) cell_hwr_fs_pane_ParamLimits

0xde30,	// (0x0001ca70) cell_hwr_fs_pane

0x4dd3,	// (0x00013a13) linegrid_hwr_fs_pane_g1_ParamLimits

0x4dd3,	// (0x00013a13) linegrid_hwr_fs_pane_g1

0x4ddf,	// (0x00013a1f) linegrid_hwr_fs_pane_g2_ParamLimits

0x4ddf,	// (0x00013a1f) linegrid_hwr_fs_pane_g2

0x4df1,	// (0x00013a31) linegrid_hwr_fs_pane_g3_ParamLimits

0x4df1,	// (0x00013a31) linegrid_hwr_fs_pane_g3

0xde52,	// (0x0001ca92) linegrid_hwr_fs_pane_g4_ParamLimits

0xde52,	// (0x0001ca92) linegrid_hwr_fs_pane_g4

0xde6c,	// (0x0001caac) linegrid_hwr_fs_pane_g5_ParamLimits

0xde6c,	// (0x0001caac) linegrid_hwr_fs_pane_g5

0x0004,

0xf7fc,	// (0x0001e43c) linegrid_hwr_fs_pane_g_ParamLimits

0xf7fc,	// (0x0001e43c) linegrid_hwr_fs_pane_g

0x4dfd,	// (0x00013a3d) cell_hwr_fs_pane_g1_ParamLimits

0x4dfd,	// (0x00013a3d) cell_hwr_fs_pane_g1

0x4b02,	// (0x00013742) cell_hwr_fs_pane_g2_ParamLimits

0x4b02,	// (0x00013742) cell_hwr_fs_pane_g2

0x4e13,	// (0x00013a53) cell_hwr_fs_pane_g3_ParamLimits

0x4e13,	// (0x00013a53) cell_hwr_fs_pane_g3

0x4e20,	// (0x00013a60) cell_hwr_fs_pane_g4_ParamLimits

0x4e20,	// (0x00013a60) cell_hwr_fs_pane_g4

0x0003,

0xf807,	// (0x0001e447) cell_hwr_fs_pane_g_ParamLimits

0xf807,	// (0x0001e447) cell_hwr_fs_pane_g

0xde82,	// (0x0001cac2) cell_hwr_fs_pane_t1

0x2171,	// (0x00010db1) grid_highlight_pane_cp6

0x2171,	// (0x00010db1) main_idle_act2_pane

0x3304,	// (0x00011f44) aid_inside_area_popup_secondary

0x5ad1,	// (0x00014711) aid_inside_area_window_primary_ParamLimits

0x5ad1,	// (0x00014711) aid_inside_area_window_primary

0x6760,	// (0x000153a0) ai2_news_ticker_pane

0x6768,	// (0x000153a8) aid_size_cell_ai1_link_ParamLimits

0x6768,	// (0x000153a8) aid_size_cell_ai1_link

0x6782,	// (0x000153c2) popup_ai2_data_window_ParamLimits

0x6782,	// (0x000153c2) popup_ai2_data_window

0x6796,	// (0x000153d6) popup_ai2_link_window_ParamLimits

0x6796,	// (0x000153d6) popup_ai2_link_window

0x4dc7,	// (0x00013a07) bg_popup_sub_pane_cp4_ParamLimits

0x4dc7,	// (0x00013a07) bg_popup_sub_pane_cp4

0x67aa,	// (0x000153ea) grid_ai2_link_pane_ParamLimits

0x67aa,	// (0x000153ea) grid_ai2_link_pane

0x67c1,	// (0x00015401) popup_ai2_link_window_g1_ParamLimits

0x67c1,	// (0x00015401) popup_ai2_link_window_g1

0x67cd,	// (0x0001540d) popup_ai2_link_window_g2_ParamLimits

0x67cd,	// (0x0001540d) popup_ai2_link_window_g2

0x0001,

0xf9d3,	// (0x0001e613) popup_ai2_link_window_g_ParamLimits

0xf9d3,	// (0x0001e613) popup_ai2_link_window_g

0x67dc,	// (0x0001541c) ai2_mp_button_pane

0x67e4,	// (0x00015424) ai2_mp_volume_pane

0x4fd9,	// (0x00013c19) bg_popup_sub_pane_cp5_ParamLimits

0x4fd9,	// (0x00013c19) bg_popup_sub_pane_cp5

0x67ec,	// (0x0001542c) heading_ai2_gene_pane_ParamLimits

0x67ec,	// (0x0001542c) heading_ai2_gene_pane

0x67f8,	// (0x00015438) list_ai2_gene_pane_ParamLimits

0x67f8,	// (0x00015438) list_ai2_gene_pane

0x6840,	// (0x00015480) cell_ai2_link_pane_ParamLimits

0x6840,	// (0x00015480) cell_ai2_link_pane

0x6856,	// (0x00015496) cell_ai2_link_pane_g1

0x2171,	// (0x00010db1) grid_highlight_pane_cp7

0xe17a,	// (0x0001cdba) ai2_mp_volume_pane_g1

0x692f,	// (0x0001556f) ai2_mp_volume_pane_g2

0x689c,	// (0x000154dc) list_ai2_gene_pane_t1

0x6927,	// (0x00015567) ai2_mp_volume_pane_g3

0x0002,

0xf9ec,	// (0x0001e62c) ai2_mp_volume_pane_g

0xe182,	// (0x0001cdc2) volume_small_pane_cp3

0x6937,	// (0x00015577) aid_size_cell_ai2_button

0x693f,	// (0x0001557f) grid_ai2_button_pane

0x6948,	// (0x00015588) cell_ai2_button_pane_ParamLimits

0x6948,	// (0x00015588) cell_ai2_button_pane

0x2167,	// (0x00010da7) cell_ai2_button_pane_g1

0x2171,	// (0x00010db1) grid_highlight_pane_cp8

0x68e7,	// (0x00015527) ai2_gene_pane_t1_ParamLimits

0x68e7,	// (0x00015527) ai2_gene_pane_t1

0x4177,	// (0x00012db7) aid_height_parent_landscape

0x6188,	// (0x00014dc8) aid_height_set_list

0x6199,	// (0x00014dd9) aid_size_parent

0x6583,	// (0x000151c3) aid_size_cell_graphic_pane_ParamLimits

0x6808,	// (0x00015448) popup_ai2_data_window_g1_ParamLimits

0x6808,	// (0x00015448) popup_ai2_data_window_g1

0x6814,	// (0x00015454) ai2_news_ticker_pane_g1

0x681c,	// (0x0001545c) ai2_news_ticker_pane_g2

0x0001,

0xf9d8,	// (0x0001e618) ai2_news_ticker_pane_g

0x6824,	// (0x00015464) ai2_news_ticker_pane_t1

0x6832,	// (0x00015472) ai2_news_ticker_pane_t2

0x0001,

0xf9dd,	// (0x0001e61d) ai2_news_ticker_pane_t

0x685f,	// (0x0001549f) heading_ai2_gene_pane_g1

0x6867,	// (0x000154a7) heading_ai2_gene_pane_t1_ParamLimits

0x6867,	// (0x000154a7) heading_ai2_gene_pane_t1

0x687c,	// (0x000154bc) list_highlight_pane_cp6

0x6884,	// (0x000154c4) ai2_gene_pane_ParamLimits

0x6884,	// (0x000154c4) ai2_gene_pane

0x68aa,	// (0x000154ea) list_ai2_gene_pane_t2

0x0001,

0xf9e2,	// (0x0001e622) list_ai2_gene_pane_t

0x68b8,	// (0x000154f8) list_highlight_pane_cp8_ParamLimits

0x68b8,	// (0x000154f8) list_highlight_pane_cp8

0x68c9,	// (0x00015509) ai2_gene_pane_g1_ParamLimits

0x68c9,	// (0x00015509) ai2_gene_pane_g1

0x68db,	// (0x0001551b) ai2_gene_pane_g2_ParamLimits

0x68db,	// (0x0001551b) ai2_gene_pane_g2

0x0001,

0xf9e7,	// (0x0001e627) ai2_gene_pane_g_ParamLimits

0xf9e7,	// (0x0001e627) ai2_gene_pane_g

0x2a54,	// (0x00011694) scroll_pane_cp12

0xdd21,	// (0x0001c961) control_pane_t3_ParamLimits

0xdd21,	// (0x0001c961) control_pane_t3

0x40f4,	// (0x00012d34) status_small_pane_g8_ParamLimits

0x40f4,	// (0x00012d34) status_small_pane_g8

0x4367,	// (0x00012fa7) popup_find_window_ParamLimits

0x457a,	// (0x000131ba) popup_note_image_window_ParamLimits

0xc452,	// (0x0001b092) list_double2_graphic_pane_vc_g1_ParamLimits

0xc452,	// (0x0001b092) list_double2_graphic_pane_vc_g1

0xc3d8,	// (0x0001b018) list_double2_graphic_pane_vc_g2_ParamLimits

0xc3d8,	// (0x0001b018) list_double2_graphic_pane_vc_g2

0xc3e4,	// (0x0001b024) list_double2_graphic_pane_vc_g3_ParamLimits

0xc3e4,	// (0x0001b024) list_double2_graphic_pane_vc_g3

0x0002,

0xf7c3,	// (0x0001e403) list_double2_graphic_pane_vc_g_ParamLimits

0xf7c3,	// (0x0001e403) list_double2_graphic_pane_vc_g

0xcb6b,	// (0x0001b7ab) list_double2_graphic_pane_vc_t1_ParamLimits

0xcb6b,	// (0x0001b7ab) list_double2_graphic_pane_vc_t1

0xc3d8,	// (0x0001b018) list_single_heading_pane_vc_g1_ParamLimits

0xc3d8,	// (0x0001b018) list_single_heading_pane_vc_g1

0xc3e4,	// (0x0001b024) list_single_heading_pane_vc_g2_ParamLimits

0xc3e4,	// (0x0001b024) list_single_heading_pane_vc_g2

0x0001,

0xf5e4,	// (0x0001e224) list_single_heading_pane_vc_g_ParamLimits

0xf5e4,	// (0x0001e224) list_single_heading_pane_vc_g

0xcb81,	// (0x0001b7c1) list_single_heading_pane_vc_t1_ParamLimits

0xcb81,	// (0x0001b7c1) list_single_heading_pane_vc_t1

0xcb97,	// (0x0001b7d7) list_single_heading_pane_vc_t2_ParamLimits

0xcb97,	// (0x0001b7d7) list_single_heading_pane_vc_t2

0x0001,

0xf7eb,	// (0x0001e42b) list_single_heading_pane_vc_t_ParamLimits

0xf7eb,	// (0x0001e42b) list_single_heading_pane_vc_t

0x4d1f,	// (0x0001395f) list_setting_number_pane_vc_g1_ParamLimits

0x4d1f,	// (0x0001395f) list_setting_number_pane_vc_g1

0x4d2b,	// (0x0001396b) list_setting_number_pane_vc_g2_ParamLimits

0x4d2b,	// (0x0001396b) list_setting_number_pane_vc_g2

0x0001,

0xf7f0,	// (0x0001e430) list_setting_number_pane_vc_g_ParamLimits

0xf7f0,	// (0x0001e430) list_setting_number_pane_vc_g

0x4d37,	// (0x00013977) list_setting_number_pane_vc_t1_ParamLimits

0x4d37,	// (0x00013977) list_setting_number_pane_vc_t1

0x4d4b,	// (0x0001398b) list_setting_number_pane_vc_t2_ParamLimits

0x4d4b,	// (0x0001398b) list_setting_number_pane_vc_t2

0x4d67,	// (0x000139a7) list_setting_number_pane_vc_t3_ParamLimits

0x4d67,	// (0x000139a7) list_setting_number_pane_vc_t3

0x0002,

0xf7f5,	// (0x0001e435) list_setting_number_pane_vc_t_ParamLimits

0xf7f5,	// (0x0001e435) list_setting_number_pane_vc_t

0x4d8f,	// (0x000139cf) set_value_pane_vc_ParamLimits

0x4d8f,	// (0x000139cf) set_value_pane_vc

0xcc6f,	// (0x0001b8af) list_double2_graphic_pane_vc_ParamLimits

0xcc6f,	// (0x0001b8af) list_double2_graphic_pane_vc

0x639b,	// (0x00014fdb) list_double2_large_graphic_pane_vc_ParamLimits

0x639b,	// (0x00014fdb) list_double2_large_graphic_pane_vc

0xcc6f,	// (0x0001b8af) list_double2_pane_vc_ParamLimits

0xcc6f,	// (0x0001b8af) list_double2_pane_vc

0xcc6f,	// (0x0001b8af) list_double_graphic_heading_pane_vc_ParamLimits

0xcc6f,	// (0x0001b8af) list_double_graphic_heading_pane_vc

0xcc6f,	// (0x0001b8af) list_double_graphic_pane_vc_ParamLimits

0xcc6f,	// (0x0001b8af) list_double_graphic_pane_vc

0xcc6f,	// (0x0001b8af) list_double_heading_pane_vc_ParamLimits

0xcc6f,	// (0x0001b8af) list_double_heading_pane_vc

0x639b,	// (0x00014fdb) list_double_large_graphic_pane_vc_ParamLimits

0x639b,	// (0x00014fdb) list_double_large_graphic_pane_vc

0xcc6f,	// (0x0001b8af) list_double_number_pane_vc_ParamLimits

0xcc6f,	// (0x0001b8af) list_double_number_pane_vc

0xcc6f,	// (0x0001b8af) list_double_pane_vc_ParamLimits

0xcc6f,	// (0x0001b8af) list_double_pane_vc

0xcc6f,	// (0x0001b8af) list_double_time_pane_vc_ParamLimits

0xcc6f,	// (0x0001b8af) list_double_time_pane_vc

0xcc6f,	// (0x0001b8af) list_setting_number_pane_vc_ParamLimits

0xcc6f,	// (0x0001b8af) list_setting_number_pane_vc

0xcc6f,	// (0x0001b8af) list_setting_pane_vc_ParamLimits

0xcc6f,	// (0x0001b8af) list_setting_pane_vc

0xcc6f,	// (0x0001b8af) list_single_graphic_heading_pane_vc_ParamLimits

0xcc6f,	// (0x0001b8af) list_single_graphic_heading_pane_vc

0xcc6f,	// (0x0001b8af) list_single_heading_pane_vc_ParamLimits

0xcc6f,	// (0x0001b8af) list_single_heading_pane_vc

0xcc83,	// (0x0001b8c3) list_single_number_heading_pane_vc_ParamLimits

0xcc83,	// (0x0001b8c3) list_single_number_heading_pane_vc

0xc452,	// (0x0001b092) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xc452,	// (0x0001b092) list_double_graphic_heading_pane_vc_g1

0xc3d8,	// (0x0001b018) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xc3d8,	// (0x0001b018) list_double_graphic_heading_pane_vc_g2

0xc3e4,	// (0x0001b024) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xc3e4,	// (0x0001b024) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7c3,	// (0x0001e403) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7c3,	// (0x0001e403) list_double_graphic_heading_pane_vc_g

0xcd40,	// (0x0001b980) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xcd40,	// (0x0001b980) list_double_graphic_heading_pane_vc_t1

0xcb81,	// (0x0001b7c1) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xcb81,	// (0x0001b7c1) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f3,	// (0x0001e633) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f3,	// (0x0001e633) list_double_graphic_heading_pane_vc_t

0x4d1f,	// (0x0001395f) list_setting_pane_vc_g1_ParamLimits

0x4d1f,	// (0x0001395f) list_setting_pane_vc_g1

0x4d2b,	// (0x0001396b) list_setting_pane_vc_g2_ParamLimits

0x4d2b,	// (0x0001396b) list_setting_pane_vc_g2

0x0001,

0xf7f0,	// (0x0001e430) list_setting_pane_vc_g_ParamLimits

0xf7f0,	// (0x0001e430) list_setting_pane_vc_g

0x6b74,	// (0x000157b4) list_setting_pane_vc_t1_ParamLimits

0x6b74,	// (0x000157b4) list_setting_pane_vc_t1

0x6b88,	// (0x000157c8) list_setting_pane_vc_t2_ParamLimits

0x6b88,	// (0x000157c8) list_setting_pane_vc_t2

0x0001,

0xfa36,	// (0x0001e676) list_setting_pane_vc_t_ParamLimits

0xfa36,	// (0x0001e676) list_setting_pane_vc_t

0x4d8f,	// (0x000139cf) set_value_pane_cp_vc_ParamLimits

0x4d8f,	// (0x000139cf) set_value_pane_cp_vc

0xc3d8,	// (0x0001b018) list_single_number_heading_pane_vc_g1_ParamLimits

0xc3d8,	// (0x0001b018) list_single_number_heading_pane_vc_g1

0xc3e4,	// (0x0001b024) list_single_number_heading_pane_vc_g2_ParamLimits

0xc3e4,	// (0x0001b024) list_single_number_heading_pane_vc_g2

0x0001,

0xf5e4,	// (0x0001e224) list_single_number_heading_pane_vc_g_ParamLimits

0xf5e4,	// (0x0001e224) list_single_number_heading_pane_vc_g

0xcb81,	// (0x0001b7c1) list_single_number_heading_pane_vc_t1_ParamLimits

0xcb81,	// (0x0001b7c1) list_single_number_heading_pane_vc_t1

0xcd54,	// (0x0001b994) list_single_number_heading_pane_vc_t2_ParamLimits

0xcd54,	// (0x0001b994) list_single_number_heading_pane_vc_t2

0xc440,	// (0x0001b080) list_single_number_heading_pane_vc_t3_ParamLimits

0xc440,	// (0x0001b080) list_single_number_heading_pane_vc_t3

0x0002,

0xfa3b,	// (0x0001e67b) list_single_number_heading_pane_vc_t_ParamLimits

0xfa3b,	// (0x0001e67b) list_single_number_heading_pane_vc_t

0xc452,	// (0x0001b092) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xc452,	// (0x0001b092) list_single_graphic_heading_pane_vc_g1

0xc3d8,	// (0x0001b018) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xc3d8,	// (0x0001b018) list_single_graphic_heading_pane_vc_g4

0xc3e4,	// (0x0001b024) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xc3e4,	// (0x0001b024) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7c3,	// (0x0001e403) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7c3,	// (0x0001e403) list_single_graphic_heading_pane_vc_g

0xcb81,	// (0x0001b7c1) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xcb81,	// (0x0001b7c1) list_single_graphic_heading_pane_vc_t1

0xcd68,	// (0x0001b9a8) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xcd68,	// (0x0001b9a8) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa42,	// (0x0001e682) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa42,	// (0x0001e682) list_single_graphic_heading_pane_vc_t

0xc3d8,	// (0x0001b018) list_double2_pane_vc_g1_ParamLimits

0xc3d8,	// (0x0001b018) list_double2_pane_vc_g1

0xc3e4,	// (0x0001b024) list_double2_pane_vc_g2_ParamLimits

0xc3e4,	// (0x0001b024) list_double2_pane_vc_g2

0x0001,

0xf5e4,	// (0x0001e224) list_double2_pane_vc_g_ParamLimits

0xf5e4,	// (0x0001e224) list_double2_pane_vc_g

0xcc37,	// (0x0001b877) list_double2_pane_vc_t1_ParamLimits

0xcc37,	// (0x0001b877) list_double2_pane_vc_t1

0xcd7c,	// (0x0001b9bc) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xcd7c,	// (0x0001b9bc) list_double2_large_graphic_pane_vc_g1

0xcd88,	// (0x0001b9c8) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xcd88,	// (0x0001b9c8) list_double2_large_graphic_pane_vc_g2

0xcd94,	// (0x0001b9d4) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xcd94,	// (0x0001b9d4) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa47,	// (0x0001e687) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa47,	// (0x0001e687) list_double2_large_graphic_pane_vc_g

0xcda0,	// (0x0001b9e0) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xcda0,	// (0x0001b9e0) list_double2_large_graphic_pane_vc_t1

0xcdb6,	// (0x0001b9f6) list_double_time_pane_vc_g1_ParamLimits

0xcdb6,	// (0x0001b9f6) list_double_time_pane_vc_g1

0xcdc2,	// (0x0001ba02) list_double_time_pane_vc_g2_ParamLimits

0xcdc2,	// (0x0001ba02) list_double_time_pane_vc_g2

0x0001,

0xfa4e,	// (0x0001e68e) list_double_time_pane_vc_g_ParamLimits

0xfa4e,	// (0x0001e68e) list_double_time_pane_vc_g

0xcdce,	// (0x0001ba0e) list_double_time_pane_vc_t1_ParamLimits

0xcdce,	// (0x0001ba0e) list_double_time_pane_vc_t1

0xcde7,	// (0x0001ba27) list_double_time_pane_vc_t2_ParamLimits

0xcde7,	// (0x0001ba27) list_double_time_pane_vc_t2

0xce27,	// (0x0001ba67) list_double_time_pane_vc_t3_ParamLimits

0xce27,	// (0x0001ba67) list_double_time_pane_vc_t3

0xce3f,	// (0x0001ba7f) list_double_time_pane_vc_t4_ParamLimits

0xce3f,	// (0x0001ba7f) list_double_time_pane_vc_t4

0x0003,

0xfa53,	// (0x0001e693) list_double_time_pane_vc_t_ParamLimits

0xfa53,	// (0x0001e693) list_double_time_pane_vc_t

0xc3d8,	// (0x0001b018) list_double_pane_vc_g1_ParamLimits

0xc3d8,	// (0x0001b018) list_double_pane_vc_g1

0xc3e4,	// (0x0001b024) list_double_pane_vc_g2_ParamLimits

0xc3e4,	// (0x0001b024) list_double_pane_vc_g2

0x0001,

0xf5e4,	// (0x0001e224) list_double_pane_vc_g_ParamLimits

0xf5e4,	// (0x0001e224) list_double_pane_vc_g

0xce53,	// (0x0001ba93) list_double_pane_vc_t1_ParamLimits

0xce53,	// (0x0001ba93) list_double_pane_vc_t1

0xce65,	// (0x0001baa5) list_double_pane_vc_t2_ParamLimits

0xce65,	// (0x0001baa5) list_double_pane_vc_t2

0x0001,

0xfa5c,	// (0x0001e69c) list_double_pane_vc_t_ParamLimits

0xfa5c,	// (0x0001e69c) list_double_pane_vc_t

0xc3d8,	// (0x0001b018) list_double_number_pane_vc_g1_ParamLimits

0xc3d8,	// (0x0001b018) list_double_number_pane_vc_g1

0xc3e4,	// (0x0001b024) list_double_number_pane_vc_g2_ParamLimits

0xc3e4,	// (0x0001b024) list_double_number_pane_vc_g2

0x0001,

0xf5e4,	// (0x0001e224) list_double_number_pane_vc_g_ParamLimits

0xf5e4,	// (0x0001e224) list_double_number_pane_vc_g

0xce7d,	// (0x0001babd) list_double_number_pane_vc_t1_ParamLimits

0xce7d,	// (0x0001babd) list_double_number_pane_vc_t1

0xce91,	// (0x0001bad1) list_double_number_pane_vc_t2_ParamLimits

0xce91,	// (0x0001bad1) list_double_number_pane_vc_t2

0xce65,	// (0x0001baa5) list_double_number_pane_vc_t3_ParamLimits

0xce65,	// (0x0001baa5) list_double_number_pane_vc_t3

0x0002,

0xfa61,	// (0x0001e6a1) list_double_number_pane_vc_t_ParamLimits

0xfa61,	// (0x0001e6a1) list_double_number_pane_vc_t

0xcea3,	// (0x0001bae3) list_double_large_graphic_pane_vc_g1_ParamLimits

0xcea3,	// (0x0001bae3) list_double_large_graphic_pane_vc_g1

0xceaf,	// (0x0001baef) list_double_large_graphic_pane_vc_g2_ParamLimits

0xceaf,	// (0x0001baef) list_double_large_graphic_pane_vc_g2

0xcd94,	// (0x0001b9d4) list_double_large_graphic_pane_vc_g3_ParamLimits

0xcd94,	// (0x0001b9d4) list_double_large_graphic_pane_vc_g3

0xcebe,	// (0x0001bafe) list_double_large_graphic_pane_vc_g4_ParamLimits

0xcebe,	// (0x0001bafe) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa68,	// (0x0001e6a8) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa68,	// (0x0001e6a8) list_double_large_graphic_pane_vc_g

0xceca,	// (0x0001bb0a) list_double_large_graphic_pane_vc_t1_ParamLimits

0xceca,	// (0x0001bb0a) list_double_large_graphic_pane_vc_t1

0xcedc,	// (0x0001bb1c) list_double_large_graphic_pane_vc_t2_ParamLimits

0xcedc,	// (0x0001bb1c) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa71,	// (0x0001e6b1) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa71,	// (0x0001e6b1) list_double_large_graphic_pane_vc_t

0xc3d8,	// (0x0001b018) list_double_heading_pane_vc_g1_ParamLimits

0xc3d8,	// (0x0001b018) list_double_heading_pane_vc_g1

0xc3e4,	// (0x0001b024) list_double_heading_pane_vc_g2_ParamLimits

0xc3e4,	// (0x0001b024) list_double_heading_pane_vc_g2

0x0001,

0xf5e4,	// (0x0001e224) list_double_heading_pane_vc_g_ParamLimits

0xf5e4,	// (0x0001e224) list_double_heading_pane_vc_g

0xcef5,	// (0x0001bb35) list_double_heading_pane_vc_t1_ParamLimits

0xcef5,	// (0x0001bb35) list_double_heading_pane_vc_t1

0xcb81,	// (0x0001b7c1) list_double_heading_pane_vc_t2_ParamLimits

0xcb81,	// (0x0001b7c1) list_double_heading_pane_vc_t2

0x0001,

0xfa76,	// (0x0001e6b6) list_double_heading_pane_vc_t_ParamLimits

0xfa76,	// (0x0001e6b6) list_double_heading_pane_vc_t

0xcf09,	// (0x0001bb49) list_double_graphic_pane_vc_g1_ParamLimits

0xcf09,	// (0x0001bb49) list_double_graphic_pane_vc_g1

0xcf19,	// (0x0001bb59) list_double_graphic_pane_vc_g2_ParamLimits

0xcf19,	// (0x0001bb59) list_double_graphic_pane_vc_g2

0xcf28,	// (0x0001bb68) list_double_graphic_pane_vc_g3_ParamLimits

0xcf28,	// (0x0001bb68) list_double_graphic_pane_vc_g3

0x0002,

0xfa7b,	// (0x0001e6bb) list_double_graphic_pane_vc_g_ParamLimits

0xfa7b,	// (0x0001e6bb) list_double_graphic_pane_vc_g

0xcf34,	// (0x0001bb74) list_double_graphic_pane_vc_t1_ParamLimits

0xcf34,	// (0x0001bb74) list_double_graphic_pane_vc_t1

0xce65,	// (0x0001baa5) list_double_graphic_pane_vc_t2_ParamLimits

0xce65,	// (0x0001baa5) list_double_graphic_pane_vc_t2

0x0001,

0xfa82,	// (0x0001e6c2) list_double_graphic_pane_vc_t_ParamLimits

0xfa82,	// (0x0001e6c2) list_double_graphic_pane_vc_t

0xd340,	// (0x0001bf80) aid_size_cell_fastswap

0xd348,	// (0x0001bf88) aid_size_cell_touch_ParamLimits

0xd348,	// (0x0001bf88) aid_size_cell_touch

0xd5a3,	// (0x0001c1e3) popup_fast_swap_wide_window_ParamLimits

0xd5a3,	// (0x0001c1e3) popup_fast_swap_wide_window

0xd699,	// (0x0001c2d9) touch_pane_ParamLimits

0xd699,	// (0x0001c2d9) touch_pane

0x2f52,	// (0x00011b92) button_value_adjust_pane_cp2

0xc822,	// (0x0001b462) button_value_adjust_pane_cp4

0xc842,	// (0x0001b482) form_field_data_pane_cp2

0xc861,	// (0x0001b4a1) form_field_data_wide_pane_cp2

0x361f,	// (0x0001225f) bg_scroll_pane_ParamLimits

0xd925,	// (0x0001c565) scroll_handle_pane_ParamLimits

0xd939,	// (0x0001c579) scroll_sc2_down_pane_ParamLimits

0xd939,	// (0x0001c579) scroll_sc2_down_pane

0x3650,	// (0x00012290) scroll_sc2_up_pane_ParamLimits

0x3650,	// (0x00012290) scroll_sc2_up_pane

0x71b7,	// (0x00015df7) grid_wheel_folder_pane_g1_ParamLimits

0x71b7,	// (0x00015df7) grid_wheel_folder_pane_g1

0xdafe,	// (0x0001c73e) clock_nsta_pane_cp2_ParamLimits

0xdafe,	// (0x0001c73e) clock_nsta_pane_cp2

0x3e7d,	// (0x00012abd) listscroll_midp_pane_ParamLimits

0x3e89,	// (0x00012ac9) midp_canvas_pane

0x416f,	// (0x00012daf) nsta_clock_indic_pane

0x41cd,	// (0x00012e0d) listscroll_form_pane_vc

0x41e9,	// (0x00012e29) listscroll_set_pane_vc_ParamLimits

0x41e9,	// (0x00012e29) listscroll_set_pane_vc

0x487d,	// (0x000134bd) clock_nsta_pane

0x48f2,	// (0x00013532) indicator_nsta_pane

0x4bc9,	// (0x00013809) bg_popup_sub_pane_cp2_ParamLimits

0x4bdd,	// (0x0001381d) find_pane_cp2_ParamLimits

0x4bdd,	// (0x0001381d) find_pane_cp2

0x4bf3,	// (0x00013833) grid_toobar_pane_ParamLimits

0x4d9b,	// (0x000139db) list_form_gen_pane_vc_ParamLimits

0x4d9b,	// (0x000139db) list_form_gen_pane_vc

0x4db1,	// (0x000139f1) scroll_pane_cp8_vc_ParamLimits

0x4db1,	// (0x000139f1) scroll_pane_cp8_vc

0x4e2d,	// (0x00013a6d) data_form_wide_pane_vc_ParamLimits

0x4e2d,	// (0x00013a6d) data_form_wide_pane_vc

0x4e39,	// (0x00013a79) form_field_data_wide_pane_vc_g1

0x4e41,	// (0x00013a81) form_field_data_wide_pane_vc_t1_ParamLimits

0x4e41,	// (0x00013a81) form_field_data_wide_pane_vc_t1

0x302a,	// (0x00011c6a) input_focus_pane_cp6_vc_ParamLimits

0x302a,	// (0x00011c6a) input_focus_pane_cp6_vc

0x51aa,	// (0x00013dea) list_midp_pane_ParamLimits

0x51b6,	// (0x00013df6) scroll_pane_cp16_ParamLimits

0x51b6,	// (0x00013df6) scroll_pane_cp16

0x5204,	// (0x00013e44) button_value_adjust_pane_ParamLimits

0x5204,	// (0x00013e44) button_value_adjust_pane

0x61ab,	// (0x00014deb) button_value_adjust_pane_cp6_ParamLimits

0x61ab,	// (0x00014deb) button_value_adjust_pane_cp6

0x62cd,	// (0x00014f0d) settings_code_pane_cp_ParamLimits

0x62cd,	// (0x00014f0d) settings_code_pane_cp

0x2167,	// (0x00010da7) cell_touch_pane_g1

0x2167,	// (0x00010da7) cell_touch_pane_g2

0x0001,

0xf71a,	// (0x0001e35a) cell_touch_pane_g

0x695a,	// (0x0001559a) cell_touch_pane_cp_ParamLimits

0x695a,	// (0x0001559a) cell_touch_pane_cp

0x696a,	// (0x000155aa) cell_touch_pane_ParamLimits

0x696a,	// (0x000155aa) cell_touch_pane

0x2167,	// (0x00010da7) scroll_sc2_down_pane_g1

0x2167,	// (0x00010da7) scroll_sc2_up_pane_g1

0x2171,	// (0x00010db1) bg_set_opt_pane_cp4_vc

0x6990,	// (0x000155d0) list_set_graphic_pane_vc_g1_ParamLimits

0x6990,	// (0x000155d0) list_set_graphic_pane_vc_g1

0x699c,	// (0x000155dc) list_set_graphic_pane_vc_g2_ParamLimits

0x699c,	// (0x000155dc) list_set_graphic_pane_vc_g2

0x0001,

0xf9f8,	// (0x0001e638) list_set_graphic_pane_vc_g_ParamLimits

0xf9f8,	// (0x0001e638) list_set_graphic_pane_vc_g

0x69a8,	// (0x000155e8) text_primary_small_cp13_vc_ParamLimits

0x69a8,	// (0x000155e8) text_primary_small_cp13_vc

0x69c0,	// (0x00015600) list_set_graphic_pane_vc_ParamLimits

0x69c0,	// (0x00015600) list_set_graphic_pane_vc

0x2171,	// (0x00010db1) input_focus_pane_cp2_vc

0x2167,	// (0x00010da7) setting_code_pane_vc_g1

0x69d4,	// (0x00015614) setting_code_pane_vc_t1

0x69e2,	// (0x00015622) set_text_pane_vc_t1_ParamLimits

0x69e2,	// (0x00015622) set_text_pane_vc_t1

0x2171,	// (0x00010db1) input_focus_pane_cp1_vc

0x6a01,	// (0x00015641) list_set_text_pane_vc

0x2167,	// (0x00010da7) setting_text_pane_vc_g1

0x2171,	// (0x00010db1) bg_set_opt_pane_cp2_vc

0x6a0b,	// (0x0001564b) setting_slider_graphic_pane_vc_g1

0x6a13,	// (0x00015653) setting_slider_graphic_pane_vc_t1

0x6a21,	// (0x00015661) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9fd,	// (0x0001e63d) setting_slider_graphic_pane_vc_t

0x6a2f,	// (0x0001566f) slider_set_pane_cp_vc

0x6a37,	// (0x00015677) slider_set_pane_vc_g1

0x6a40,	// (0x00015680) slider_set_pane_vc_g2

0x0006,

0xfa02,	// (0x0001e642) slider_set_pane_vc_g

0x3166,	// (0x00011da6) set_opt_bg_pane_g1_copy1

0x316e,	// (0x00011dae) set_opt_bg_pane_g2_copy1

0x6a6c,	// (0x000156ac) set_opt_bg_pane_g3_copy1

0x317e,	// (0x00011dbe) set_opt_bg_pane_g4_copy1

0x3186,	// (0x00011dc6) set_opt_bg_pane_g5_copy1

0x318e,	// (0x00011dce) set_opt_bg_pane_g6_copy1

0x6a74,	// (0x000156b4) set_opt_bg_pane_g7_copy1

0x6a7e,	// (0x000156be) set_opt_bg_pane_g8_copy1

0x6a86,	// (0x000156c6) set_opt_bg_pane_g9_copy1

0x2171,	// (0x00010db1) bg_set_opt_pane_cp_vc

0x6a8e,	// (0x000156ce) setting_slider_pane_vc_t1

0x6a13,	// (0x00015653) setting_slider_pane_vc_t2

0x6a21,	// (0x00015661) setting_slider_pane_vc_t3

0x0002,

0xfa11,	// (0x0001e651) setting_slider_pane_vc_t

0x6a2f,	// (0x0001566f) slider_set_pane_vc

0xde90,	// (0x0001cad0) volume_set_pane_vc_g1

0xe18b,	// (0x0001cdcb) volume_set_pane_vc_g2

0xe194,	// (0x0001cdd4) volume_set_pane_vc_g3

0xe19d,	// (0x0001cddd) volume_set_pane_vc_g4

0xe1a6,	// (0x0001cde6) volume_set_pane_vc_g5

0xe1af,	// (0x0001cdef) volume_set_pane_vc_g6

0xe1b8,	// (0x0001cdf8) volume_set_pane_vc_g7

0xe1c1,	// (0x0001ce01) volume_set_pane_vc_g8

0xe1ca,	// (0x0001ce0a) volume_set_pane_vc_g9

0xe1d3,	// (0x0001ce13) volume_set_pane_vc_g10

0x0009,

0xfa18,	// (0x0001e658) volume_set_pane_vc_g

0x6a9d,	// (0x000156dd) volume_set_pane_vc

0x6aa5,	// (0x000156e5) button_value_adjust_pane_cp1_vc

0x6aaf,	// (0x000156ef) list_highlight_pane_cp2_vc

0x6ab8,	// (0x000156f8) list_set_pane_vc_ParamLimits

0x6ab8,	// (0x000156f8) list_set_pane_vc

0x6b0a,	// (0x0001574a) main_pane_set_vc_t1_ParamLimits

0x6b0a,	// (0x0001574a) main_pane_set_vc_t1

0x6b1f,	// (0x0001575f) main_pane_set_vc_t2_ParamLimits

0x6b1f,	// (0x0001575f) main_pane_set_vc_t2

0x6b31,	// (0x00015771) main_pane_set_vc_t3_ParamLimits

0x6b31,	// (0x00015771) main_pane_set_vc_t3

0x6b43,	// (0x00015783) main_pane_set_vc_t4_ParamLimits

0x6b43,	// (0x00015783) main_pane_set_vc_t4

0x0003,

0xfa2d,	// (0x0001e66d) main_pane_set_vc_t_ParamLimits

0xfa2d,	// (0x0001e66d) main_pane_set_vc_t

0x6b55,	// (0x00015795) setting_code_pane_vc_ParamLimits

0x6b55,	// (0x00015795) setting_code_pane_vc

0x6b64,	// (0x000157a4) setting_slider_graphic_pane_vc

0x6b64,	// (0x000157a4) setting_slider_pane_vc

0x6b64,	// (0x000157a4) setting_text_pane_vc

0x6b64,	// (0x000157a4) setting_volume_pane_vc

0x6b6c,	// (0x000157ac) scroll_pane_cp121_vc

0x2f40,	// (0x00011b80) set_content_pane_vc

0x6d7c,	// (0x000159bc) button_value_adjust_pane_g1

0x6d85,	// (0x000159c5) button_value_adjust_pane_g2

0x0001,

0xfa87,	// (0x0001e6c7) button_value_adjust_pane_g

0x6d8e,	// (0x000159ce) form_field_slider_wide_pane_vc_t1_ParamLimits

0x6d8e,	// (0x000159ce) form_field_slider_wide_pane_vc_t1

0x6da2,	// (0x000159e2) form_field_slider_wide_pane_vc_t2_ParamLimits

0x6da2,	// (0x000159e2) form_field_slider_wide_pane_vc_t2

0x0001,

0xfa8c,	// (0x0001e6cc) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa8c,	// (0x0001e6cc) form_field_slider_wide_pane_vc_t

0x24e6,	// (0x00011126) input_focus_pane_cp10_vc_ParamLimits

0x24e6,	// (0x00011126) input_focus_pane_cp10_vc

0x6db4,	// (0x000159f4) slider_cont_pane_cp1_vc_ParamLimits

0x6db4,	// (0x000159f4) slider_cont_pane_cp1_vc

0x6a37,	// (0x00015677) slider_form_pane_g1_cp2

0x6a40,	// (0x00015680) slider_form_pane_g2_cp2

0x6dcd,	// (0x00015a0d) form_field_slider_pane_vc_t3

0x6ddb,	// (0x00015a1b) form_field_slider_pane_vc_t4

0x6de9,	// (0x00015a29) slider_form_pane_vc_ParamLimits

0x6de9,	// (0x00015a29) slider_form_pane_vc

0x6df6,	// (0x00015a36) form_field_slider_pane_vc_t1_ParamLimits

0x6df6,	// (0x00015a36) form_field_slider_pane_vc_t1

0x6da2,	// (0x000159e2) form_field_slider_pane_vc_t2_ParamLimits

0x6da2,	// (0x000159e2) form_field_slider_pane_vc_t2

0x0001,

0xfa9c,	// (0x0001e6dc) form_field_slider_pane_vc_t_ParamLimits

0xfa9c,	// (0x0001e6dc) form_field_slider_pane_vc_t

0x24e6,	// (0x00011126) input_focus_pane_cp9_vc_ParamLimits

0x24e6,	// (0x00011126) input_focus_pane_cp9_vc

0x6e12,	// (0x00015a52) slider_cont_pane_vc_ParamLimits

0x6e12,	// (0x00015a52) slider_cont_pane_vc

0x6e24,	// (0x00015a64) list_form_graphic_pane_cp_vc_ParamLimits

0x6e24,	// (0x00015a64) list_form_graphic_pane_cp_vc

0x4e39,	// (0x00013a79) form_field_popup_wide_pane_vc_g1

0x6e39,	// (0x00015a79) form_field_popup_wide_pane_vc_t1_ParamLimits

0x6e39,	// (0x00015a79) form_field_popup_wide_pane_vc_t1

0x302a,	// (0x00011c6a) input_focus_pane_cp8_vc_ParamLimits

0x302a,	// (0x00011c6a) input_focus_pane_cp8_vc

0x6e50,	// (0x00015a90) list_form_wide_pane_vc_ParamLimits

0x6e50,	// (0x00015a90) list_form_wide_pane_vc

0x6e5c,	// (0x00015a9c) list_form_graphic_pane_vc_g1

0x6e64,	// (0x00015aa4) list_form_graphic_pane_vc_t1_ParamLimits

0x6e64,	// (0x00015aa4) list_form_graphic_pane_vc_t1

0x2251,	// (0x00010e91) list_highlight_pane_cp5_vc_ParamLimits

0x2251,	// (0x00010e91) list_highlight_pane_cp5_vc

0x6e80,	// (0x00015ac0) list_form_graphic_pane_vc_ParamLimits

0x6e80,	// (0x00015ac0) list_form_graphic_pane_vc

0x4e39,	// (0x00013a79) form_field_popup_pane_vc_g1

0x6e96,	// (0x00015ad6) form_field_popup_pane_vc_t1_ParamLimits

0x6e96,	// (0x00015ad6) form_field_popup_pane_vc_t1

0x302a,	// (0x00011c6a) input_focus_pane_cp7_vc_ParamLimits

0x302a,	// (0x00011c6a) input_focus_pane_cp7_vc

0x6ead,	// (0x00015aed) list_form_pane_vc_ParamLimits

0x6ead,	// (0x00015aed) list_form_pane_vc

0x6eb9,	// (0x00015af9) data_form_pane_vc_t1_ParamLimits

0x6eb9,	// (0x00015af9) data_form_pane_vc_t1

0x3166,	// (0x00011da6) input_focus_pane_vc_g1

0x316e,	// (0x00011dae) input_focus_pane_vc_g2

0x3176,	// (0x00011db6) input_focus_pane_vc_g3

0x317e,	// (0x00011dbe) input_focus_pane_vc_g4

0x3186,	// (0x00011dc6) input_focus_pane_vc_g5

0x318e,	// (0x00011dce) input_focus_pane_vc_g6

0x3196,	// (0x00011dd6) input_focus_pane_vc_g7

0x319e,	// (0x00011dde) input_focus_pane_vc_g8

0x31a6,	// (0x00011de6) input_focus_pane_vc_g9

0x2167,	// (0x00010da7) input_focus_pane_vc_g10

0x0009,

0xf6a3,	// (0x0001e2e3) input_focus_pane_vc_g

0x4e2d,	// (0x00013a6d) data_form_pane_vc_ParamLimits

0x4e2d,	// (0x00013a6d) data_form_pane_vc

0x4e39,	// (0x00013a79) form_field_data_pane_vc_g1

0x6ed4,	// (0x00015b14) form_field_data_pane_vc_t1_ParamLimits

0x6ed4,	// (0x00015b14) form_field_data_pane_vc_t1

0x302a,	// (0x00011c6a) input_focus_pane_vc_ParamLimits

0x302a,	// (0x00011c6a) input_focus_pane_vc

0x6eee,	// (0x00015b2e) button_value_adjust_pane_cp3_vc

0x6ef6,	// (0x00015b36) button_value_adjust_pane_cp5_vc

0x6efe,	// (0x00015b3e) form_field_data_pane_vc_ParamLimits

0x6efe,	// (0x00015b3e) form_field_data_pane_vc

0x6f15,	// (0x00015b55) form_field_data_pane_vc_cp2

0x6f1d,	// (0x00015b5d) form_field_data_wide_pane_vc_ParamLimits

0x6f1d,	// (0x00015b5d) form_field_data_wide_pane_vc

0x6f33,	// (0x00015b73) form_field_data_wide_pane_vc_cp2

0x6f3b,	// (0x00015b7b) form_field_popup_pane_vc_ParamLimits

0x6f3b,	// (0x00015b7b) form_field_popup_pane_vc

0x6f52,	// (0x00015b92) form_field_popup_wide_pane_vc_ParamLimits

0x6f52,	// (0x00015b92) form_field_popup_wide_pane_vc

0x6f68,	// (0x00015ba8) form_field_slider_pane_vc_ParamLimits

0x6f68,	// (0x00015ba8) form_field_slider_pane_vc

0x6f7b,	// (0x00015bbb) form_field_slider_wide_pane_vc_ParamLimits

0x6f7b,	// (0x00015bbb) form_field_slider_wide_pane_vc

0x6f8e,	// (0x00015bce) grid_touch_1_pane_ParamLimits

0x6f8e,	// (0x00015bce) grid_touch_1_pane

0x6f9a,	// (0x00015bda) grid_touch_2_pane_ParamLimits

0x6f9a,	// (0x00015bda) grid_touch_2_pane

0x413a,	// (0x00012d7a) touch_pane_g1_ParamLimits

0x413a,	// (0x00012d7a) touch_pane_g1

0x6fb2,	// (0x00015bf2) cell_app_pane_cp_wide_ParamLimits

0x6fb2,	// (0x00015bf2) cell_app_pane_cp_wide

0x6fc3,	// (0x00015c03) grid_popup_fast_wide_pane_ParamLimits

0x6fc3,	// (0x00015c03) grid_popup_fast_wide_pane

0x6fd7,	// (0x00015c17) scroll_pane_cp19_ParamLimits

0x6fd7,	// (0x00015c17) scroll_pane_cp19

0x2171,	// (0x00010db1) bg_popup_window_pane_cp20

0x6feb,	// (0x00015c2b) listscroll_popup_fast_wide_pane

0x2251,	// (0x00010e91) grid_indicator_nsta_pane

0x6ff3,	// (0x00015c33) clock_nsta_pane_g1

0x6ffc,	// (0x00015c3c) clock_nsta_pane_t1

0x7018,	// (0x00015c58) cell_indicator_nsta_pane_ParamLimits

0x7018,	// (0x00015c58) cell_indicator_nsta_pane

0x7050,	// (0x00015c90) cell_indicator_nsta_pane_g1

0x705e,	// (0x00015c9e) cell_indicator_nsta_pane_g2

0x0001,

0xfaa6,	// (0x0001e6e6) cell_indicator_nsta_pane_g

0x7074,	// (0x00015cb4) clock_nsta_pane_cp

0x707c,	// (0x00015cbc) indicator_nsta_pane_cp

0x7085,	// (0x00015cc5) nsta_clock_indic_pane_g1

0x2334,	// (0x00010f74) grid_indicator_pane

0x3742,	// (0x00012382) scroll_pane_cp29

0xda4d,	// (0x0001c68d) indicator_nsta_pane_cp2_ParamLimits

0xda4d,	// (0x0001c68d) indicator_nsta_pane_cp2

0x2251,	// (0x00010e91) main_apps_wheel_pane

0x5091,	// (0x00013cd1) form_midp_field_text_pane_ParamLimits

0x51d6,	// (0x00013e16) scroll_bar_cp050_ParamLimits

0x70ee,	// (0x00015d2e) cell_indicator_pane_ParamLimits

0x70ee,	// (0x00015d2e) cell_indicator_pane

0x710b,	// (0x00015d4b) cell_indicator_pane_g1

0x7115,	// (0x00015d55) grid_wheel_folder_pane_ParamLimits

0x7115,	// (0x00015d55) grid_wheel_folder_pane

0x712b,	// (0x00015d6b) list_wheel_apps_pane_ParamLimits

0x712b,	// (0x00015d6b) list_wheel_apps_pane

0x713c,	// (0x00015d7c) main_apps_wheel_pane_g1_ParamLimits

0x713c,	// (0x00015d7c) main_apps_wheel_pane_g1

0x7150,	// (0x00015d90) main_apps_wheel_pane_g2_ParamLimits

0x7150,	// (0x00015d90) main_apps_wheel_pane_g2

0x0001,

0xfac2,	// (0x0001e702) main_apps_wheel_pane_g_ParamLimits

0xfac2,	// (0x0001e702) main_apps_wheel_pane_g

0x7168,	// (0x00015da8) main_apps_wheel_pane_t1_ParamLimits

0x7168,	// (0x00015da8) main_apps_wheel_pane_t1

0x718b,	// (0x00015dcb) list_wheel_apps_pane_g1

0x7193,	// (0x00015dd3) list_wheel_apps_pane_g2

0x719b,	// (0x00015ddb) list_wheel_apps_pane_g3

0x71a3,	// (0x00015de3) list_wheel_apps_pane_g4

0x71ad,	// (0x00015ded) list_wheel_apps_pane_g5

0x0004,

0xfac7,	// (0x0001e707) list_wheel_apps_pane_g

0x3cf3,	// (0x00012933) navi_icon_text_pane

0x47ac,	// (0x000133ec) aid_fill_nsta

0x71d0,	// (0x00015e10) navi_icon_text_pane_g1

0x71df,	// (0x00015e1f) navi_icon_text_pane_t1

0x3b8f,	// (0x000127cf) list_set_graphic_pane_t1_ParamLimits

0x3b8f,	// (0x000127cf) list_set_graphic_pane_t1

0x5918,	// (0x00014558) popup_midp_note_alarm_window_t6_ParamLimits

0x5918,	// (0x00014558) popup_midp_note_alarm_window_t6

0x592a,	// (0x0001456a) popup_midp_note_alarm_window_t7_ParamLimits

0x592a,	// (0x0001456a) popup_midp_note_alarm_window_t7

0x593c,	// (0x0001457c) popup_midp_note_alarm_window_t8_ParamLimits

0x593c,	// (0x0001457c) popup_midp_note_alarm_window_t8

0x594e,	// (0x0001458e) popup_midp_note_alarm_window_t9_ParamLimits

0x594e,	// (0x0001458e) popup_midp_note_alarm_window_t9

0x5960,	// (0x000145a0) popup_midp_note_alarm_window_t10_ParamLimits

0x5960,	// (0x000145a0) popup_midp_note_alarm_window_t10

0x5972,	// (0x000145b2) popup_midp_note_alarm_window_t11_ParamLimits

0x5972,	// (0x000145b2) popup_midp_note_alarm_window_t11

0x5984,	// (0x000145c4) scroll_pane_cp17_ParamLimits

0x5984,	// (0x000145c4) scroll_pane_cp17

0xde90,	// (0x0001cad0) volume_small_pane_cp_g1

0xe1dc,	// (0x0001ce1c) volume_small_pane_cp_g2

0xe1e5,	// (0x0001ce25) volume_small_pane_cp_g3

0xe1ee,	// (0x0001ce2e) volume_small_pane_cp_g4

0xe1f7,	// (0x0001ce37) volume_small_pane_cp_g5

0xe200,	// (0x0001ce40) volume_small_pane_cp_g6

0xe209,	// (0x0001ce49) volume_small_pane_cp_g7

0xe212,	// (0x0001ce52) volume_small_pane_cp_g8

0xe21b,	// (0x0001ce5b) volume_small_pane_cp_g9

0xe224,	// (0x0001ce64) volume_small_pane_cp_g10

0x3f54,	// (0x00012b94) midp_ticker_pane_g1_ParamLimits

0x3f60,	// (0x00012ba0) midp_ticker_pane_g2_ParamLimits

0xf76b,	// (0x0001e3ab) midp_ticker_pane_g_ParamLimits

0x3f6c,	// (0x00012bac) midp_ticker_pane_t1_ParamLimits

0x47c2,	// (0x00013402) aid_fill_nsta_2

0x51c2,	// (0x00013e02) list_form2_midp_pane

0x634b,	// (0x00014f8b) midp_editing_number_pane_ParamLimits

0x635a,	// (0x00014f9a) midp_ticker_pane_ParamLimits

0x71f4,	// (0x00015e34) form2_midp_field_pane

0x7218,	// (0x00015e58) scroll_pane_cp51

0x7238,	// (0x00015e78) form2_midp_button_pane_ParamLimits

0x7238,	// (0x00015e78) form2_midp_button_pane

0x724a,	// (0x00015e8a) form2_midp_content_pane_ParamLimits

0x724a,	// (0x00015e8a) form2_midp_content_pane

0x7264,	// (0x00015ea4) form2_midp_field_choice_group_pane

0x726c,	// (0x00015eac) form2_midp_field_pane_g1

0x7274,	// (0x00015eb4) form2_midp_field_pane_g2

0x727c,	// (0x00015ebc) form2_midp_field_pane_g3

0x7284,	// (0x00015ec4) form2_midp_field_pane_g4

0x0003,

0xfaec,	// (0x0001e72c) form2_midp_field_pane_g

0x728c,	// (0x00015ecc) form2_midp_gauge_slider_pane

0x7294,	// (0x00015ed4) form2_midp_gauge_wait_pane

0x729c,	// (0x00015edc) form2_midp_image_pane_ParamLimits

0x729c,	// (0x00015edc) form2_midp_image_pane

0x72b7,	// (0x00015ef7) form2_midp_label_pane_ParamLimits

0x72b7,	// (0x00015ef7) form2_midp_label_pane

0x72d0,	// (0x00015f10) form2_midp_label_pane_cp_ParamLimits

0x72d0,	// (0x00015f10) form2_midp_label_pane_cp

0x72f1,	// (0x00015f31) form2_midp_string_pane_ParamLimits

0x72f1,	// (0x00015f31) form2_midp_string_pane

0xcf46,	// (0x0001bb86) form2_midp_text_pane_ParamLimits

0xcf46,	// (0x0001bb86) form2_midp_text_pane

0x731c,	// (0x00015f5c) form2_midp_time_pane

0x732c,	// (0x00015f6c) input_focus_pane_cp51_ParamLimits

0x732c,	// (0x00015f6c) input_focus_pane_cp51

0x7344,	// (0x00015f84) form2_midp_label_pane_t1_ParamLimits

0x7344,	// (0x00015f84) form2_midp_label_pane_t1

0xcf5f,	// (0x0001bb9f) form2_mdip_text_pane_t1_ParamLimits

0xcf5f,	// (0x0001bb9f) form2_mdip_text_pane_t1

0xcf7c,	// (0x0001bbbc) form2_midp_time_pane_t1

0x73bb,	// (0x00015ffb) form2_midp_gauge_slider_pane_t1

0x73cd,	// (0x0001600d) form2_midp_gauge_slider_pane_t2

0x73df,	// (0x0001601f) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf5,	// (0x0001e735) form2_midp_gauge_slider_pane_t

0x73f1,	// (0x00016031) form2_midp_slider_pane

0x73fd,	// (0x0001603d) form2_midp_gauge_wait_pane_t1

0x740b,	// (0x0001604b) form2_midp_wait_pane_ParamLimits

0x740b,	// (0x0001604b) form2_midp_wait_pane

0x7436,	// (0x00016076) list_single_2graphic_pane_cp4_ParamLimits

0x7436,	// (0x00016076) list_single_2graphic_pane_cp4

0x4e84,	// (0x00013ac4) list_single_midp_graphic_pane_cp_ParamLimits

0x4e84,	// (0x00013ac4) list_single_midp_graphic_pane_cp

0x2171,	// (0x00010db1) list_highlight_pane_cp20

0x7465,	// (0x000160a5) list_single_2graphic_pane_g1_cp4

0x685f,	// (0x0001549f) list_single_2graphic_pane_g2_cp4

0x746d,	// (0x000160ad) list_single_2graphic_pane_t1_cp4

0x2251,	// (0x00010e91) list_highlight_pane_cp21

0x747c,	// (0x000160bc) list_single_midp_graphic_pane_g4_cp

0x748b,	// (0x000160cb) list_single_midp_graphic_pane_t1_cp

0x74a0,	// (0x000160e0) form2_mdip_string_pane_t1_ParamLimits

0x74a0,	// (0x000160e0) form2_mdip_string_pane_t1

0x2171,	// (0x00010db1) bg_wml_button_pane_cp2

0x2167,	// (0x00010da7) form2_midp_image_pane_g1

0xc623,	// (0x0001b263) list_double_large_graphic_pane_g5_ParamLimits

0xc623,	// (0x0001b263) list_double_large_graphic_pane_g5

0x3e7d,	// (0x00012abd) midp_form_pane_ParamLimits

0x2251,	// (0x00010e91) main_apps_wheel_pane_ParamLimits

0x45a0,	// (0x000131e0) popup_preview_window_ParamLimits

0x45a0,	// (0x000131e0) popup_preview_window

0x4751,	// (0x00013391) popup_touch_info_window_ParamLimits

0x4751,	// (0x00013391) popup_touch_info_window

0x476f,	// (0x000133af) popup_touch_menu_window_ParamLimits

0x476f,	// (0x000133af) popup_touch_menu_window

0x215d,	// (0x00010d9d) bg_popup_sub_pane_cp6

0x75da,	// (0x0001621a) list_touch_menu_pane

0x75e2,	// (0x00016222) list_single_touch_menu_pane_ParamLimits

0x75e2,	// (0x00016222) list_single_touch_menu_pane

0x75f7,	// (0x00016237) list_single_touch_menu_pane_t1

0x2251,	// (0x00010e91) bg_popup_sub_pane_cp7_ParamLimits

0x2251,	// (0x00010e91) bg_popup_sub_pane_cp7

0x7605,	// (0x00016245) heading_sub_pane

0x760d,	// (0x0001624d) list_touch_info_pane_ParamLimits

0x760d,	// (0x0001624d) list_touch_info_pane

0x761c,	// (0x0001625c) list_single_touch_info_pane_ParamLimits

0x761c,	// (0x0001625c) list_single_touch_info_pane

0x762e,	// (0x0001626e) list_single_touch_info_pane_t1

0x763c,	// (0x0001627c) list_single_touch_info_pane_t2

0x0001,

0xfb03,	// (0x0001e743) list_single_touch_info_pane_t

0x3e75,	// (0x00012ab5) bg_popup_heading_pane_cp

0x764a,	// (0x0001628a) heading_sub_pane_t1

0x4dc7,	// (0x00013a07) bg_popup_preview_window_pane_cp_ParamLimits

0x4dc7,	// (0x00013a07) bg_popup_preview_window_pane_cp

0x7605,	// (0x00016245) heading_preview_pane

0x760d,	// (0x0001624d) list_preview_pane_ParamLimits

0x760d,	// (0x0001624d) list_preview_pane

0x7658,	// (0x00016298) popup_preview_window_g1

0x761c,	// (0x0001625c) list_single_preview_pane_ParamLimits

0x761c,	// (0x0001625c) list_single_preview_pane

0x7660,	// (0x000162a0) list_single_preview_pane_g1

0x7668,	// (0x000162a8) list_single_preview_pane_t1

0x762e,	// (0x0001626e) list_single_preview_pane_t2

0x0001,

0xfb08,	// (0x0001e748) list_single_preview_pane_t

0x7676,	// (0x000162b6) bg_popup_heading_pane_cp2_ParamLimits

0x7676,	// (0x000162b6) bg_popup_heading_pane_cp2

0x768c,	// (0x000162cc) heading_preview_pane_g1

0x7694,	// (0x000162d4) heading_preview_pane_t1_ParamLimits

0x7694,	// (0x000162d4) heading_preview_pane_t1

0x2357,	// (0x00010f97) soft_indicator_pane_t1_ParamLimits

0x2a31,	// (0x00011671) scroll_pane_ParamLimits

0x3647,	// (0x00012287) scroll_sc2_left_pane

0x363e,	// (0x0001227e) scroll_sc2_right_pane

0x3666,	// (0x000122a6) scroll_bg_pane_g1_ParamLimits

0x367b,	// (0x000122bb) scroll_bg_pane_g2_ParamLimits

0x3693,	// (0x000122d3) scroll_bg_pane_g3_ParamLimits

0xf6fa,	// (0x0001e33a) scroll_bg_pane_g_ParamLimits

0x3666,	// (0x000122a6) scroll_handle_pane_g1_ParamLimits

0x36b5,	// (0x000122f5) scroll_handle_pane_g2_ParamLimits

0x3693,	// (0x000122d3) scroll_handle_pane_g3_ParamLimits

0xf701,	// (0x0001e341) scroll_handle_pane_g_ParamLimits

0x422b,	// (0x00012e6b) popup_choice_list_window_ParamLimits

0x422b,	// (0x00012e6b) popup_choice_list_window

0x4bd5,	// (0x00013815) choice_list_pane

0x4c79,	// (0x000138b9) cell_toolbar_pane_t1

0x4ca1,	// (0x000138e1) toolbar_button_pane_ParamLimits

0x5e48,	// (0x00014a88) ai_gene_pane_1_t2_ParamLimits

0x5e48,	// (0x00014a88) ai_gene_pane_1_t2

0x0001,

0xf912,	// (0x0001e552) ai_gene_pane_1_t_ParamLimits

0xf912,	// (0x0001e552) ai_gene_pane_1_t

0x76b1,	// (0x000162f1) scroll_sc2_left_pane_g1

0x76b1,	// (0x000162f1) scroll_sc2_right_pane_g1

0x41fb,	// (0x00012e3b) bg_popup_sub_pane_cp10

0x76bb,	// (0x000162fb) list_choice_list_pane

0x76d2,	// (0x00016312) list_single_choice_list_pane_ParamLimits

0x76d2,	// (0x00016312) list_single_choice_list_pane

0x76e6,	// (0x00016326) list_single_choice_list_pane_g1

0x76ee,	// (0x0001632e) list_single_choice_list_pane_t1_ParamLimits

0x76ee,	// (0x0001632e) list_single_choice_list_pane_t1

0x7703,	// (0x00016343) choice_list_pane_g1

0x770b,	// (0x0001634b) choice_list_pane_t1

0x215d,	// (0x00010d9d) input_focus_pane_cp11

0x3517,	// (0x00012157) title_pane_stacon_g2_ParamLimits

0x3517,	// (0x00012157) title_pane_stacon_g2

0x0002,

0xf6e0,	// (0x0001e320) title_pane_stacon_g_ParamLimits

0xf6e0,	// (0x0001e320) title_pane_stacon_g

0x3e75,	// (0x00012ab5) cursor_press_pane

0x42d1,	// (0x00012f11) popup_fep_hwr_window_ParamLimits

0x42d1,	// (0x00012f11) popup_fep_hwr_window

0x4349,	// (0x00012f89) popup_fep_vkb_window_ParamLimits

0x4349,	// (0x00012f89) popup_fep_vkb_window

0x7719,	// (0x00016359) cursor_press_pane_g1

0x0002,

0xfb31,	// (0x0001e771) fep_vkb_side_pane_g_ParamLimits

0xe258,	// (0x0001ce98) fep_hwr_candidate_pane_ParamLimits

0xe258,	// (0x0001ce98) fep_hwr_candidate_pane

0xe282,	// (0x0001cec2) fep_hwr_side_pane_ParamLimits

0xe282,	// (0x0001cec2) fep_hwr_side_pane

0xe2a2,	// (0x0001cee2) fep_hwr_top_pane_ParamLimits

0xe2a2,	// (0x0001cee2) fep_hwr_top_pane

0xe2ba,	// (0x0001cefa) fep_hwr_write_pane_ParamLimits

0xe2ba,	// (0x0001cefa) fep_hwr_write_pane

0xfb31,	// (0x0001e771) fep_vkb_side_pane_g

0x7733,	// (0x00016373) fep_hwr_top_pane_g1

0x7721,	// (0x00016361) fep_hwr_top_pane_g2

0xe2e6,	// (0x0001cf26) fep_hwr_top_pane_g3

0x0002,

0xfb0d,	// (0x0001e74d) fep_hwr_top_pane_g

0xe2fb,	// (0x0001cf3b) fep_hwr_top_text_pane

0x3808,	// (0x00012448) fep_hwr_top_text_pane_g1

0x7769,	// (0x000163a9) fep_hwr_top_text_pane_t1

0xe3f1,	// (0x0001d031) fep_hwr_candidate_pane_g1

0x79c3,	// (0x00016603) fep_vkb_keypad_pane_g3_ParamLimits

0x79c3,	// (0x00016603) fep_vkb_keypad_pane_g3

0x79eb,	// (0x0001662b) fep_vkb_keypad_pane_g4_ParamLimits

0x79eb,	// (0x0001662b) fep_vkb_keypad_pane_g4

0x7a5a,	// (0x0001669a) fep_vkb_bottom_pane_g2_ParamLimits

0x7a5a,	// (0x0001669a) fep_vkb_bottom_pane_g2

0x0001,

0xfb38,	// (0x0001e778) fep_vkb_bottom_pane_g_ParamLimits

0xfb38,	// (0x0001e778) fep_vkb_bottom_pane_g

0x76b1,	// (0x000162f1) cell_vkb_side_pane_g2

0x0001,

0xfb42,	// (0x0001e782) cell_vkb_side_pane_g

0x7ae5,	// (0x00016725) cell_vkb_side_pane_t1

0x7af3,	// (0x00016733) cell_vkb_side_pane_t1_copy1

0x76b1,	// (0x000162f1) bg_fep_vkb_candidate_pane_g2

0x7c25,	// (0x00016865) cell_vkb_candidate_pane_ParamLimits

0x7777,	// (0x000163b7) aid_size_cell_vkb_ParamLimits

0x7777,	// (0x000163b7) aid_size_cell_vkb

0x7c25,	// (0x00016865) cell_vkb_candidate_pane

0xe40b,	// (0x0001d04b) bg_popup_fep_shadow_pane_g1

0x7805,	// (0x00016445) fep_vkb_bottom_pane_ParamLimits

0x7805,	// (0x00016445) fep_vkb_bottom_pane

0x7842,	// (0x00016482) fep_vkb_candidate_pane_ParamLimits

0x7842,	// (0x00016482) fep_vkb_candidate_pane

0x785e,	// (0x0001649e) fep_vkb_keypad_pane_ParamLimits

0x785e,	// (0x0001649e) fep_vkb_keypad_pane

0x78a4,	// (0x000164e4) fep_vkb_side_pane_ParamLimits

0x78a4,	// (0x000164e4) fep_vkb_side_pane

0x78e0,	// (0x00016520) fep_vkb_top_pane_ParamLimits

0x78e0,	// (0x00016520) fep_vkb_top_pane

0x791c,	// (0x0001655c) fep_vkb_top_pane_g1_ParamLimits

0x791c,	// (0x0001655c) fep_vkb_top_pane_g1

0x792b,	// (0x0001656b) fep_vkb_top_pane_g2_ParamLimits

0x792b,	// (0x0001656b) fep_vkb_top_pane_g2

0x793a,	// (0x0001657a) fep_vkb_top_pane_g3_ParamLimits

0x793a,	// (0x0001657a) fep_vkb_top_pane_g3

0x0003,

0xfb28,	// (0x0001e768) fep_vkb_top_pane_g_ParamLimits

0xfb28,	// (0x0001e768) fep_vkb_top_pane_g

0x7958,	// (0x00016598) fep_vkb_top_text_pane_ParamLimits

0x7958,	// (0x00016598) fep_vkb_top_text_pane

0x7969,	// (0x000165a9) fep_vkb_side_pane_g1_ParamLimits

0x7969,	// (0x000165a9) fep_vkb_side_pane_g1

0x79b2,	// (0x000165f2) grid_vkb_side_pane_ParamLimits

0x79b2,	// (0x000165f2) grid_vkb_side_pane

0xe413,	// (0x0001d053) bg_popup_fep_shadow_pane_g2

0xe41c,	// (0x0001d05c) bg_popup_fep_shadow_pane_g3

0xe424,	// (0x0001d064) bg_popup_fep_shadow_pane_g4

0xe42d,	// (0x0001d06d) bg_popup_fep_shadow_pane_g5

0xe437,	// (0x0001d077) bg_popup_fep_shadow_pane_g6

0xe43f,	// (0x0001d07f) bg_popup_fep_shadow_pane_g7

0x3186,	// (0x00011dc6) bg_popup_fep_shadow_pane_g8

0x7a09,	// (0x00016649) grid_vkb_keypad_number_pane_ParamLimits

0x7a09,	// (0x00016649) grid_vkb_keypad_number_pane

0x7a19,	// (0x00016659) grid_vkb_keypad_pane_ParamLimits

0x7a19,	// (0x00016659) grid_vkb_keypad_pane

0x7a3f,	// (0x0001667f) fep_vkb_bottom_pane_g1_ParamLimits

0x7a3f,	// (0x0001667f) fep_vkb_bottom_pane_g1

0x7a68,	// (0x000166a8) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x7a68,	// (0x000166a8) grid_vkb_keypad_bottom_left_pane

0x7a7d,	// (0x000166bd) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x7a7d,	// (0x000166bd) grid_vkb_keypad_bottom_right_pane

0x7a92,	// (0x000166d2) fep_vkb_top_text_pane_g1

0x7aad,	// (0x000166ed) fep_vkb_top_text_pane_t1

0x7ac2,	// (0x00016702) cell_vkb_side_pane_ParamLimits

0x7ac2,	// (0x00016702) cell_vkb_side_pane

0x76b1,	// (0x000162f1) cell_vkb_side_pane_g1

0x7b01,	// (0x00016741) cell_vkb_keypad_pane_ParamLimits

0x7b01,	// (0x00016741) cell_vkb_keypad_pane

0x7b7c,	// (0x000167bc) cell_vkb_keypad_pane_g1

0x0008,

0xfb55,	// (0x0001e795) bg_popup_fep_shadow_pane_g

0x76b1,	// (0x000162f1) cell_hwr_side_pane_g1

0x76b1,	// (0x000162f1) cell_hwr_side_pane_g2

0x7b86,	// (0x000167c6) cell_vkb_keypad_pane_t1

0x7b94,	// (0x000167d4) cell_vkb_keypad_bottom_left_pane_ParamLimits

0x7b94,	// (0x000167d4) cell_vkb_keypad_bottom_left_pane

0x7bb1,	// (0x000167f1) cell_vkb_keypad_bottom_right_pane_ParamLimits

0x7bb1,	// (0x000167f1) cell_vkb_keypad_bottom_right_pane

0x76b1,	// (0x000162f1) cell_vkb_keypad_bottom_left_pane_g1

0x76b1,	// (0x000162f1) cell_vkb_keypad_bottom_right_pane_g1

0x7bea,	// (0x0001682a) cell_vkb_keypad_number_pane_ParamLimits

0x7bea,	// (0x0001682a) cell_vkb_keypad_number_pane

0x7c09,	// (0x00016849) cell_vkb_keypad_number_pane_g1

0x7c13,	// (0x00016853) cell_vkb_keypad_number_pane_g2

0x7c1c,	// (0x0001685c) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb47,	// (0x0001e787) cell_vkb_keypad_number_pane_g

0x7b86,	// (0x000167c6) cell_vkb_keypad_number_pane_t1

0x7c42,	// (0x00016882) fep_vkb_candidate_pane_g1

0x0001,

0xfb42,	// (0x0001e782) cell_hwr_side_pane_g

0x7c5b,	// (0x0001689b) cell_hwr_side_pane_t1

0xe451,	// (0x0001d091) cell_hwr_side_pane_t1_copy1

0x794a,	// (0x0001658a) cell_hwr_candidate_pane_g1

0xe45f,	// (0x0001d09f) cell_hwr_candidate_pane_t1

0x76b1,	// (0x000162f1) cell_vkb_candidate_pane_g2

0x7cef,	// (0x0001692f) cell_vkb_candidate_pane_t1

0x7ce1,	// (0x00016921) bg_popup_fep_shadow_pane_ParamLimits

0x7ce1,	// (0x00016921) bg_popup_fep_shadow_pane

0xac1b,	// (0x0001985b) bg_fep_hwr_top_pane_g4

0x7745,	// (0x00016385) bg_hwr_side_pane_g1_ParamLimits

0x7745,	// (0x00016385) bg_hwr_side_pane_g1

0xe337,	// (0x0001cf77) cell_hwr_side_pane_ParamLimits

0xe337,	// (0x0001cf77) cell_hwr_side_pane

0xe372,	// (0x0001cfb2) fep_hwr_write_pane_g1_ParamLimits

0xe372,	// (0x0001cfb2) fep_hwr_write_pane_g1

0xe37f,	// (0x0001cfbf) fep_hwr_write_pane_g2_ParamLimits

0xe37f,	// (0x0001cfbf) fep_hwr_write_pane_g2

0xe38c,	// (0x0001cfcc) fep_hwr_write_pane_g3_ParamLimits

0xe38c,	// (0x0001cfcc) fep_hwr_write_pane_g3

0xe39a,	// (0x0001cfda) fep_hwr_write_pane_g4_ParamLimits

0xe39a,	// (0x0001cfda) fep_hwr_write_pane_g4

0x0005,

0xfb14,	// (0x0001e754) fep_hwr_write_pane_g_ParamLimits

0xfb14,	// (0x0001e754) fep_hwr_write_pane_g

0xac1b,	// (0x0001985b) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xac1b,	// (0x0001985b) bg_fep_hwr_candidate_pane_g2

0xe3af,	// (0x0001cfef) cell_hwr_candidate_pane_ParamLimits

0xe3af,	// (0x0001cfef) cell_hwr_candidate_pane

0xe3f1,	// (0x0001d031) fep_hwr_candidate_pane_g1_ParamLimits

0x77a5,	// (0x000163e5) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x77a5,	// (0x000163e5) bg_popup_fep_shadow_pane_cp2

0x794a,	// (0x0001658a) fep_vkb_top_pane_g4_ParamLimits

0x794a,	// (0x0001658a) fep_vkb_top_pane_g4

0x7990,	// (0x000165d0) fep_vkb_side_pane_g2_ParamLimits

0x7990,	// (0x000165d0) fep_vkb_side_pane_g2

0xc757,	// (0x0001b397) list_setting_pane_t4_ParamLimits

0xc757,	// (0x0001b397) list_setting_pane_t4

0xc7e9,	// (0x0001b429) list_setting_number_pane_t5_ParamLimits

0xc7e9,	// (0x0001b429) list_setting_number_pane_t5

0x384a,	// (0x0001248a) list_double_heading_pane_cp2_ParamLimits

0x384a,	// (0x0001248a) list_double_heading_pane_cp2

0x3050,	// (0x00011c90) list_double_heading_pane_g1_cp2_ParamLimits

0x3050,	// (0x00011c90) list_double_heading_pane_g1_cp2

0x305c,	// (0x00011c9c) list_double_heading_pane_g2_cp2_ParamLimits

0x305c,	// (0x00011c9c) list_double_heading_pane_g2_cp2

0x7cfd,	// (0x0001693d) list_double_heading_pane_t1_cp2_ParamLimits

0x7cfd,	// (0x0001693d) list_double_heading_pane_t1_cp2

0x7d13,	// (0x00016953) list_double_heading_pane_t2_cp2_ParamLimits

0x7d13,	// (0x00016953) list_double_heading_pane_t2_cp2

0x2145,	// (0x00010d85) aid_value_unit2

0xd5ef,	// (0x0001c22f) popup_preview_fixed_window

0x24f4,	// (0x00011134) bg_popup_preview_window_pane_cp02

0x7d25,	// (0x00016965) list_preview_fixed_pane

0x7d6b,	// (0x000169ab) list_empty_pane_fp_ParamLimits

0x7d6b,	// (0x000169ab) list_empty_pane_fp

0x7d6b,	// (0x000169ab) list_single_cale_day_pane_fp_ParamLimits

0x7d6b,	// (0x000169ab) list_single_cale_day_pane_fp

0x7d6b,	// (0x000169ab) list_single_graphic_heading_pane_fp_ParamLimits

0x7d6b,	// (0x000169ab) list_single_graphic_heading_pane_fp

0x7d6b,	// (0x000169ab) list_single_graphic_pane_fp_ParamLimits

0x7d6b,	// (0x000169ab) list_single_graphic_pane_fp

0x7d6b,	// (0x000169ab) list_single_heading_pane_fp_ParamLimits

0x7d6b,	// (0x000169ab) list_single_heading_pane_fp

0x7d6b,	// (0x000169ab) list_single_pane_fp_ParamLimits

0x7d6b,	// (0x000169ab) list_single_pane_fp

0x7d82,	// (0x000169c2) list_single_pane_fp_g1_ParamLimits

0x7d82,	// (0x000169c2) list_single_pane_fp_g1

0xc5bb,	// (0x0001b1fb) list_single_pane_fp_g2_ParamLimits

0xc5bb,	// (0x0001b1fb) list_single_pane_fp_g2

0xcf8f,	// (0x0001bbcf) list_single_pane_fp_g3_ParamLimits

0xcf8f,	// (0x0001bbcf) list_single_pane_fp_g3

0x7d8e,	// (0x000169ce) list_single_pane_fp_g4_ParamLimits

0x7d8e,	// (0x000169ce) list_single_pane_fp_g4

0x0003,

0xfb76,	// (0x0001e7b6) list_single_pane_fp_g_ParamLimits

0xfb76,	// (0x0001e7b6) list_single_pane_fp_g

0xcfa3,	// (0x0001bbe3) list_single_pane_fp_t1_ParamLimits

0xcfa3,	// (0x0001bbe3) list_single_pane_fp_t1

0xcfba,	// (0x0001bbfa) list_single_graphic_pane_fp_g1_ParamLimits

0xcfba,	// (0x0001bbfa) list_single_graphic_pane_fp_g1

0x7d82,	// (0x000169c2) list_single_graphic_pane_fp_g2_ParamLimits

0x7d82,	// (0x000169c2) list_single_graphic_pane_fp_g2

0xc5bb,	// (0x0001b1fb) list_single_graphic_pane_fp_g3_ParamLimits

0xc5bb,	// (0x0001b1fb) list_single_graphic_pane_fp_g3

0xcf8f,	// (0x0001bbcf) list_single_graphic_pane_fp_g4_ParamLimits

0xcf8f,	// (0x0001bbcf) list_single_graphic_pane_fp_g4

0x7d8e,	// (0x000169ce) list_single_graphic_pane_fp_g5_ParamLimits

0x7d8e,	// (0x000169ce) list_single_graphic_pane_fp_g5

0x0004,

0xfb7f,	// (0x0001e7bf) list_single_graphic_pane_fp_g_ParamLimits

0xfb7f,	// (0x0001e7bf) list_single_graphic_pane_fp_g

0xcfc6,	// (0x0001bc06) list_single_graphic_pane_fp_t1_ParamLimits

0xcfc6,	// (0x0001bc06) list_single_graphic_pane_fp_t1

0xcfba,	// (0x0001bbfa) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xcfba,	// (0x0001bbfa) list_single_graphic_heading_pane_fp_g1

0x7d82,	// (0x000169c2) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x7d82,	// (0x000169c2) list_single_graphic_heading_pane_fp_g2

0xc5bb,	// (0x0001b1fb) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xc5bb,	// (0x0001b1fb) list_single_graphic_heading_pane_fp_g3

0xcf8f,	// (0x0001bbcf) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xcf8f,	// (0x0001bbcf) list_single_graphic_heading_pane_fp_g4

0x7d8e,	// (0x000169ce) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x7d8e,	// (0x000169ce) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb7f,	// (0x0001e7bf) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb7f,	// (0x0001e7bf) list_single_graphic_heading_pane_fp_g

0xcfdc,	// (0x0001bc1c) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xcfdc,	// (0x0001bc1c) list_single_graphic_heading_pane_fp_t1

0xcff2,	// (0x0001bc32) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xcff2,	// (0x0001bc32) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb8a,	// (0x0001e7ca) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb8a,	// (0x0001e7ca) list_single_graphic_heading_pane_fp_t

0xd004,	// (0x0001bc44) list_single_cale_day_pane_fp_g1_ParamLimits

0xd004,	// (0x0001bc44) list_single_cale_day_pane_fp_g1

0x7e33,	// (0x00016a73) list_single_cale_day_pane_fp_g2_ParamLimits

0x7e33,	// (0x00016a73) list_single_cale_day_pane_fp_g2

0xd03c,	// (0x0001bc7c) list_single_cale_day_pane_fp_g3_ParamLimits

0xd03c,	// (0x0001bc7c) list_single_cale_day_pane_fp_g3

0xd064,	// (0x0001bca4) list_single_cale_day_pane_fp_g4_ParamLimits

0xd064,	// (0x0001bca4) list_single_cale_day_pane_fp_g4

0xd088,	// (0x0001bcc8) list_single_cale_day_pane_fp_g5_ParamLimits

0xd088,	// (0x0001bcc8) list_single_cale_day_pane_fp_g5

0x0004,

0xfb8f,	// (0x0001e7cf) list_single_cale_day_pane_fp_g_ParamLimits

0xfb8f,	// (0x0001e7cf) list_single_cale_day_pane_fp_g

0xd0ac,	// (0x0001bcec) list_single_cale_day_pane_fp_t1_ParamLimits

0xd0ac,	// (0x0001bcec) list_single_cale_day_pane_fp_t1

0xd0d2,	// (0x0001bd12) list_single_cale_day_pane_fp_t2_ParamLimits

0xd0d2,	// (0x0001bd12) list_single_cale_day_pane_fp_t2

0xd0eb,	// (0x0001bd2b) list_single_cale_day_pane_fp_t3_ParamLimits

0xd0eb,	// (0x0001bd2b) list_single_cale_day_pane_fp_t3

0x0002,

0xfb9a,	// (0x0001e7da) list_single_cale_day_pane_fp_t_ParamLimits

0xfb9a,	// (0x0001e7da) list_single_cale_day_pane_fp_t

0x7d82,	// (0x000169c2) list_empty_pane_fp_g1_ParamLimits

0x7d82,	// (0x000169c2) list_empty_pane_fp_g1

0xd104,	// (0x0001bd44) list_empty_pane_fp_t1

0xd112,	// (0x0001bd52) list_empty_pane_fp_t2

0x0001,

0xfba1,	// (0x0001e7e1) list_empty_pane_fp_t

0x7d82,	// (0x000169c2) list_single_heading_pane_fp_g1_ParamLimits

0x7d82,	// (0x000169c2) list_single_heading_pane_fp_g1

0xc5bb,	// (0x0001b1fb) list_single_heading_pane_fp_g2_ParamLimits

0xc5bb,	// (0x0001b1fb) list_single_heading_pane_fp_g2

0xcf8f,	// (0x0001bbcf) list_single_heading_pane_fp_g3_ParamLimits

0xcf8f,	// (0x0001bbcf) list_single_heading_pane_fp_g3

0x0002,

0xfba6,	// (0x0001e7e6) list_single_heading_pane_fp_g_ParamLimits

0xfba6,	// (0x0001e7e6) list_single_heading_pane_fp_g

0xd120,	// (0x0001bd60) list_single_heading_pane_fp_t1_ParamLimits

0xd120,	// (0x0001bd60) list_single_heading_pane_fp_t1

0xd132,	// (0x0001bd72) list_single_heading_pane_fp_t2_ParamLimits

0xd132,	// (0x0001bd72) list_single_heading_pane_fp_t2

0x0001,

0xfbad,	// (0x0001e7ed) list_single_heading_pane_fp_t_ParamLimits

0xfbad,	// (0x0001e7ed) list_single_heading_pane_fp_t

0x33ae,	// (0x00011fee) aid_size_cell_fast

0x2464,	// (0x000110a4) soft_indicator_pane_cp1_t1

0x33eb,	// (0x0001202b) cell_app_pane_cp2_ParamLimits

0x33eb,	// (0x0001202b) cell_app_pane_cp2

0xe241,	// (0x0001ce81) fep_hwr_candidate_drop_down_list_pane

0xac52,	// (0x00019892) fep_hwr_candidate_pane_g3_ParamLimits

0xac52,	// (0x00019892) fep_hwr_candidate_pane_g3

0xac5f,	// (0x0001989f) fep_hwr_candidate_pane_g4_ParamLimits

0xac5f,	// (0x0001989f) fep_hwr_candidate_pane_g4

0x0002,

0xfb21,	// (0x0001e761) fep_hwr_candidate_pane_g_ParamLimits

0xfb21,	// (0x0001e761) fep_hwr_candidate_pane_g

0x7831,	// (0x00016471) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x7831,	// (0x00016471) fep_vkb_candidate_drop_down_list_pane

0x7c4a,	// (0x0001688a) fep_vkb_candidate_pane_g3

0x7c52,	// (0x00016892) fep_vkb_candidate_pane_g4

0x0002,

0xfb4e,	// (0x0001e78e) fep_vkb_candidate_pane_g

0x794a,	// (0x0001658a) cell_hwr_candidate_pane_g1_ParamLimits

0x7c9f,	// (0x000168df) cell_hwr_candidate_pane_g3_ParamLimits

0x7c9f,	// (0x000168df) cell_hwr_candidate_pane_g3

0x7cc0,	// (0x00016900) cell_hwr_candidate_pane_g4_ParamLimits

0x7cc0,	// (0x00016900) cell_hwr_candidate_pane_g4

0x0002,

0xfb68,	// (0x0001e7a8) cell_hwr_candidate_pane_g_ParamLimits

0xfb68,	// (0x0001e7a8) cell_hwr_candidate_pane_g

0x7c69,	// (0x000168a9) cell_vkb_candidate_pane_g3_ParamLimits

0x7c69,	// (0x000168a9) cell_vkb_candidate_pane_g3

0x7c84,	// (0x000168c4) cell_vkb_candidate_pane_g4_ParamLimits

0x7c84,	// (0x000168c4) cell_vkb_candidate_pane_g4

0x7f4b,	// (0x00016b8b) cell_app_pane_cp2_g1_ParamLimits

0x7f4b,	// (0x00016b8b) cell_app_pane_cp2_g1

0x7f69,	// (0x00016ba9) cell_app_pane_cp2_g2_ParamLimits

0x7f69,	// (0x00016ba9) cell_app_pane_cp2_g2

0x0001,

0xfbb2,	// (0x0001e7f2) cell_app_pane_cp2_g_ParamLimits

0xfbb2,	// (0x0001e7f2) cell_app_pane_cp2_g

0x7f75,	// (0x00016bb5) cell_app_pane_cp2_t1_ParamLimits

0x7f75,	// (0x00016bb5) cell_app_pane_cp2_t1

0x302a,	// (0x00011c6a) grid_highlight_pane_cp1_ParamLimits

0x302a,	// (0x00011c6a) grid_highlight_pane_cp1

0xe47d,	// (0x0001d0bd) cell_hwr_candidate_pane_cp1_ParamLimits

0xe47d,	// (0x0001d0bd) cell_hwr_candidate_pane_cp1

0x794a,	// (0x0001658a) fep_hwr_candidate_drop_down_list_pane_g1

0x7fa7,	// (0x00016be7) fep_hwr_candidate_drop_down_list_pane_g2

0x7fb4,	// (0x00016bf4) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbb7,	// (0x0001e7f7) fep_hwr_candidate_drop_down_list_pane_g

0xe49c,	// (0x0001d0dc) fep_hwr_candidate_drop_down_list_scroll_pane

0xe4a5,	// (0x0001d0e5) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xe4a5,	// (0x0001d0e5) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0xe4b2,	// (0x0001d0f2) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xe4b2,	// (0x0001d0f2) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0xe4bf,	// (0x0001d0ff) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xe4bf,	// (0x0001d0ff) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x7c69,	// (0x000168a9) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7c69,	// (0x000168a9) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x7c84,	// (0x000168c4) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7c84,	// (0x000168c4) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0xe4cc,	// (0x0001d10c) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xe4cc,	// (0x0001d10c) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0xe4e7,	// (0x0001d127) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xe4e7,	// (0x0001d127) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x8035,	// (0x00016c75) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x8035,	// (0x00016c75) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbbe,	// (0x0001e7fe) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbbe,	// (0x0001e7fe) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x7f87,	// (0x00016bc7) cell_vkb_candidate_pane_cp1_ParamLimits

0x7f87,	// (0x00016bc7) cell_vkb_candidate_pane_cp1

0x794a,	// (0x0001658a) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x794a,	// (0x0001658a) fep_vkb_candidate_drop_down_list_pane_g1

0x7fa7,	// (0x00016be7) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x7fa7,	// (0x00016be7) fep_vkb_candidate_drop_down_list_pane_g2

0x7fb4,	// (0x00016bf4) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x7fb4,	// (0x00016bf4) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbb7,	// (0x0001e7f7) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbb7,	// (0x0001e7f7) fep_vkb_candidate_drop_down_list_pane_g

0x7fc1,	// (0x00016c01) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x7fc1,	// (0x00016c01) fep_vkb_candidate_drop_down_list_scroll_pane

0x7fce,	// (0x00016c0e) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7fce,	// (0x00016c0e) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x7fdb,	// (0x00016c1b) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7fdb,	// (0x00016c1b) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x7fe7,	// (0x00016c27) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7fe7,	// (0x00016c27) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x7c9f,	// (0x000168df) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7c9f,	// (0x000168df) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x7cc0,	// (0x00016900) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7cc0,	// (0x00016900) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x7ff3,	// (0x00016c33) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7ff3,	// (0x00016c33) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x8014,	// (0x00016c54) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x8014,	// (0x00016c54) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x8035,	// (0x00016c75) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x8035,	// (0x00016c75) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbcf,	// (0x0001e80f) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbcf,	// (0x0001e80f) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x217b,	// (0x00010dbb) title_pane_g1_ParamLimits

0x2188,	// (0x00010dc8) title_pane_g2_ParamLimits

0xf56a,	// (0x0001e1aa) title_pane_g_ParamLimits

0x3800,	// (0x00012440) aid_call2_pane

0x37f8,	// (0x00012438) aid_call_pane

0x3808,	// (0x00012448) popup_clock_analogue_window_g1

0x3808,	// (0x00012448) popup_clock_analogue_window_g2

0xd94e,	// (0x0001c58e) popup_clock_analogue_window_g3

0xd957,	// (0x0001c597) popup_clock_analogue_window_g4

0x2167,	// (0x00010da7) popup_clock_analogue_window_g5

0x0004,

0xf70f,	// (0x0001e34f) popup_clock_analogue_window_g

0xd95f,	// (0x0001c59f) popup_clock_analogue_window_t1

0xd96d,	// (0x0001c5ad) clock_digital_number_pane_ParamLimits

0xd96d,	// (0x0001c5ad) clock_digital_number_pane

0xd979,	// (0x0001c5b9) clock_digital_number_pane_cp02_ParamLimits

0xd979,	// (0x0001c5b9) clock_digital_number_pane_cp02

0xd985,	// (0x0001c5c5) clock_digital_number_pane_cp03_ParamLimits

0xd985,	// (0x0001c5c5) clock_digital_number_pane_cp03

0xd991,	// (0x0001c5d1) clock_digital_number_pane_cp04_ParamLimits

0xd991,	// (0x0001c5d1) clock_digital_number_pane_cp04

0xd99d,	// (0x0001c5dd) clock_digital_separator_pane_ParamLimits

0xd99d,	// (0x0001c5dd) clock_digital_separator_pane

0xd9a9,	// (0x0001c5e9) popup_clock_digital_window_t1_ParamLimits

0xd9a9,	// (0x0001c5e9) popup_clock_digital_window_t1

0x2167,	// (0x00010da7) clock_digital_number_pane_g1

0x2167,	// (0x00010da7) clock_digital_number_pane_g2

0x0001,

0xf71a,	// (0x0001e35a) clock_digital_number_pane_g

0x2167,	// (0x00010da7) clock_digital_separator_pane_g1

0x2167,	// (0x00010da7) clock_digital_separator_pane_g2

0x0001,

0xf71a,	// (0x0001e35a) clock_digital_separator_pane_g

0x47ac,	// (0x000133ec) aid_fill_nsta_ParamLimits

0x48f2,	// (0x00013532) indicator_nsta_pane_ParamLimits

0x4a64,	// (0x000136a4) popup_clock_analogue_window

0x4a64,	// (0x000136a4) popup_clock_digital_window

0x2251,	// (0x00010e91) grid_indicator_nsta_pane_ParamLimits

0x700a,	// (0x00015c4a) clock_nsta_pane_t2

0x0001,

0xfaa1,	// (0x0001e6e1) clock_nsta_pane_t

0xd912,	// (0x0001c552) aid_size_max_handle

0xd91c,	// (0x0001c55c) aid_size_min_handle

0x3e75,	// (0x00012ab5) editor_scroll_pane

0x8050,	// (0x00016c90) ex_editor_pane

0x331d,	// (0x00011f5d) scroll_pane_cp13

0x2a5d,	// (0x0001169d) scroll_pane_cp14

0x3832,	// (0x00012472) scroll_pane_cp36

0x385c,	// (0x0001249c) list_single_graphic_hl_pane_cp2_ParamLimits

0x385c,	// (0x0001249c) list_single_graphic_hl_pane_cp2

0x641f,	// (0x0001505f) list_single_graphic_hl_pane_ParamLimits

0x641f,	// (0x0001505f) list_single_graphic_hl_pane

0xd148,	// (0x0001bd88) aid_size_min_hl_cp1

0x8061,	// (0x00016ca1) list_highlight_pane_cp34_ParamLimits

0x8061,	// (0x00016ca1) list_highlight_pane_cp34

0x8072,	// (0x00016cb2) list_single_graphic_hl_pane_g1_ParamLimits

0x8072,	// (0x00016cb2) list_single_graphic_hl_pane_g1

0xd151,	// (0x0001bd91) list_single_graphic_hl_pane_g2_ParamLimits

0xd151,	// (0x0001bd91) list_single_graphic_hl_pane_g2

0xd151,	// (0x0001bd91) list_single_graphic_hl_pane_g3_ParamLimits

0xd151,	// (0x0001bd91) list_single_graphic_hl_pane_g3

0xd15d,	// (0x0001bd9d) list_single_graphic_hl_pane_g4_ParamLimits

0xd15d,	// (0x0001bd9d) list_single_graphic_hl_pane_g4

0xd169,	// (0x0001bda9) list_single_graphic_hl_pane_g5_ParamLimits

0xd169,	// (0x0001bda9) list_single_graphic_hl_pane_g5

0x0004,

0xfbe0,	// (0x0001e820) list_single_graphic_hl_pane_g_ParamLimits

0xfbe0,	// (0x0001e820) list_single_graphic_hl_pane_g

0xd17d,	// (0x0001bdbd) list_single_graphic_hl_pane_t1_ParamLimits

0xd17d,	// (0x0001bdbd) list_single_graphic_hl_pane_t1

0x809f,	// (0x00016cdf) aid_size_min_hl_cp2

0x80a8,	// (0x00016ce8) list_highlight_pane_cp34_cp2_ParamLimits

0x80a8,	// (0x00016ce8) list_highlight_pane_cp34_cp2

0x8072,	// (0x00016cb2) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x8072,	// (0x00016cb2) list_single_graphic_hl_pane_g1_cp2

0x80b5,	// (0x00016cf5) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x80b5,	// (0x00016cf5) list_single_graphic_hl_pane_g2_cp2

0x80c1,	// (0x00016d01) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x80c1,	// (0x00016d01) list_single_graphic_hl_pane_g3_cp2

0x3dac,	// (0x000129ec) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x3dac,	// (0x000129ec) list_single_graphic_hl_pane_g4_cp2

0x808b,	// (0x00016ccb) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x808b,	// (0x00016ccb) list_single_graphic_hl_pane_g5_cp2

0xdc5b,	// (0x0001c89b) control_pane_g4_ParamLimits

0xdc5b,	// (0x0001c89b) control_pane_g4

0x41fb,	// (0x00012e3b) bg_popup_sub_pane_cp10_ParamLimits

0x76bb,	// (0x000162fb) list_choice_list_pane_ParamLimits

0x76ca,	// (0x0001630a) scroll_pane_cp23

0x24f4,	// (0x00011134) bg_popup_preview_window_pane_cp02_ParamLimits

0x7d25,	// (0x00016965) list_preview_fixed_pane_ParamLimits

0x7d3b,	// (0x0001697b) list_preview_fixed_pane_cp_ParamLimits

0x7d3b,	// (0x0001697b) list_preview_fixed_pane_cp

0x7d47,	// (0x00016987) popup_preview_fixed_window_g1_ParamLimits

0x7d47,	// (0x00016987) popup_preview_fixed_window_g1

0x7d53,	// (0x00016993) popup_preview_fixed_window_g2_ParamLimits

0x7d53,	// (0x00016993) popup_preview_fixed_window_g2

0x0002,

0xfb6f,	// (0x0001e7af) popup_preview_fixed_window_g_ParamLimits

0xfb6f,	// (0x0001e7af) popup_preview_fixed_window_g

0xd886,	// (0x0001c4c6) aid_navi_side_left_pane_ParamLimits

0xd89b,	// (0x0001c4db) aid_navi_side_right_pane_ParamLimits

0xd8b3,	// (0x0001c4f3) navi_icon_pane_stacon_ParamLimits

0xd8c7,	// (0x0001c507) navi_navi_pane_stacon_ParamLimits

0xd8b3,	// (0x0001c4f3) navi_text_pane_stacon_ParamLimits

0x215d,	// (0x00010d9d) main_text_info_pane

0x80e5,	// (0x00016d25) listscroll_text_info_pane

0x80ed,	// (0x00016d2d) list_text_info_pane_ParamLimits

0x80ed,	// (0x00016d2d) list_text_info_pane

0x80fc,	// (0x00016d3c) scroll_pane_cp24_ParamLimits

0x80fc,	// (0x00016d3c) scroll_pane_cp24

0x811a,	// (0x00016d5a) list_text_info_pane_t1_ParamLimits

0x811a,	// (0x00016d5a) list_text_info_pane_t1

0x4245,	// (0x00012e85) popup_fast_swap2_window_ParamLimits

0x4245,	// (0x00012e85) popup_fast_swap2_window

0x8153,	// (0x00016d93) aid_size_cell_fast2

0x215d,	// (0x00010d9d) bg_popup_window_pane_cp17

0x51ee,	// (0x00013e2e) heading_pane_cp2

0x2734,	// (0x00011374) listscroll_fast2_pane

0x815d,	// (0x00016d9d) grid_fast2_pane

0x8167,	// (0x00016da7) listscroll_fast2_pane_g1

0x816f,	// (0x00016daf) listscroll_fast2_pane_g2

0x0001,

0xfbeb,	// (0x0001e82b) listscroll_fast2_pane_g

0x331d,	// (0x00011f5d) scroll_pane_cp26

0x8179,	// (0x00016db9) cell_fast2_pane_ParamLimits

0x8179,	// (0x00016db9) cell_fast2_pane

0x818e,	// (0x00016dce) cell_fast2_pane_g1

0x8197,	// (0x00016dd7) cell_fast2_pane_g2

0x81a0,	// (0x00016de0) cell_fast2_pane_g3

0x0002,

0xfbf0,	// (0x0001e830) cell_fast2_pane_g

0x281a,	// (0x0001145a) grid_highlight_pane_cp9

0x282f,	// (0x0001146f) main_eswt_pane_ParamLimits

0x282f,	// (0x0001146f) main_eswt_pane

0x8111,	// (0x00016d51) list_single_text_info_pane

0x81a8,	// (0x00016de8) eswt_ctrl_button_pane

0x81a8,	// (0x00016de8) eswt_ctrl_canvas_pane

0x81b0,	// (0x00016df0) eswt_ctrl_combo_pane

0x81a8,	// (0x00016de8) eswt_ctrl_default_pane

0x81a8,	// (0x00016de8) eswt_ctrl_label_pane

0x81b8,	// (0x00016df8) eswt_ctrl_wait_pane

0x81c0,	// (0x00016e00) eswt_shell_pane

0x215d,	// (0x00010d9d) listscroll_eswt_app_pane

0x81e0,	// (0x00016e20) popup_eswt_tasktip_window_ParamLimits

0x81e0,	// (0x00016e20) popup_eswt_tasktip_window

0x4dc7,	// (0x00013a07) bg_popup_window_pane_cp18

0x81f1,	// (0x00016e31) eswt_control_pane_g1_ParamLimits

0x81f1,	// (0x00016e31) eswt_control_pane_g1

0x81fe,	// (0x00016e3e) eswt_control_pane_g2_ParamLimits

0x81fe,	// (0x00016e3e) eswt_control_pane_g2

0x820b,	// (0x00016e4b) eswt_control_pane_g3_ParamLimits

0x820b,	// (0x00016e4b) eswt_control_pane_g3

0x8218,	// (0x00016e58) eswt_control_pane_g4_ParamLimits

0x8218,	// (0x00016e58) eswt_control_pane_g4

0x0003,

0xfbf7,	// (0x0001e837) eswt_control_pane_g_ParamLimits

0xfbf7,	// (0x0001e837) eswt_control_pane_g

0x302a,	// (0x00011c6a) bg_button_pane_ParamLimits

0x302a,	// (0x00011c6a) bg_button_pane

0x282f,	// (0x0001146f) common_borders_pane_copy2_ParamLimits

0x282f,	// (0x0001146f) common_borders_pane_copy2

0x8225,	// (0x00016e65) control_button_pane_g1_ParamLimits

0x8225,	// (0x00016e65) control_button_pane_g1

0x8231,	// (0x00016e71) control_button_pane_g2_ParamLimits

0x8231,	// (0x00016e71) control_button_pane_g2

0x823d,	// (0x00016e7d) control_button_pane_g3_ParamLimits

0x823d,	// (0x00016e7d) control_button_pane_g3

0x0002,

0xfc00,	// (0x0001e840) control_button_pane_g_ParamLimits

0xfc00,	// (0x0001e840) control_button_pane_g

0x8251,	// (0x00016e91) control_button_pane_t1

0x825f,	// (0x00016e9f) control_button_pane_t2

0x0001,

0xfc07,	// (0x0001e847) control_button_pane_t

0x4cad,	// (0x000138ed) bg_button_pane_g1

0x4cbd,	// (0x000138fd) bg_button_pane_g2

0x4cb5,	// (0x000138f5) bg_button_pane_g3

0x4ccd,	// (0x0001390d) bg_button_pane_g4

0x4cc5,	// (0x00013905) bg_button_pane_g5

0x4cd5,	// (0x00013915) bg_button_pane_g6

0x4cdd,	// (0x0001391d) bg_button_pane_g7

0x4ced,	// (0x0001392d) bg_button_pane_g8

0x4ce5,	// (0x00013925) bg_button_pane_g9

0x0008,

0xf866,	// (0x0001e4a6) bg_button_pane_g

0x7676,	// (0x000162b6) common_borders_pane_ParamLimits

0x7676,	// (0x000162b6) common_borders_pane

0x81f1,	// (0x00016e31) eswt_control_pane_g1_copy1_ParamLimits

0x81f1,	// (0x00016e31) eswt_control_pane_g1_copy1

0x81fe,	// (0x00016e3e) eswt_control_pane_g2_copy1_ParamLimits

0x81fe,	// (0x00016e3e) eswt_control_pane_g2_copy1

0x820b,	// (0x00016e4b) eswt_control_pane_g3_copy1_ParamLimits

0x820b,	// (0x00016e4b) eswt_control_pane_g3_copy1

0x8218,	// (0x00016e58) eswt_control_pane_g4_copy1_ParamLimits

0x8218,	// (0x00016e58) eswt_control_pane_g4_copy1

0x76b1,	// (0x000162f1) bg_eswt_ctrl_canvas_pane_g1

0x7676,	// (0x000162b6) common_borders_pane_cp2_ParamLimits

0x7676,	// (0x000162b6) common_borders_pane_cp2

0x7676,	// (0x000162b6) common_borders_pane_cp3_ParamLimits

0x7676,	// (0x000162b6) common_borders_pane_cp3

0x826d,	// (0x00016ead) separator_horizontal_pane

0x8275,	// (0x00016eb5) separator_vertical_pane

0x81f1,	// (0x00016e31) eswt_control_pane_g1_copy2_ParamLimits

0x81f1,	// (0x00016e31) eswt_control_pane_g1_copy2

0x81fe,	// (0x00016e3e) eswt_control_pane_g2_copy2_ParamLimits

0x81fe,	// (0x00016e3e) eswt_control_pane_g2_copy2

0x820b,	// (0x00016e4b) eswt_control_pane_g3_copy2_ParamLimits

0x820b,	// (0x00016e4b) eswt_control_pane_g3_copy2

0x8218,	// (0x00016e58) eswt_control_pane_g4_copy2_ParamLimits

0x8218,	// (0x00016e58) eswt_control_pane_g4_copy2

0x215d,	// (0x00010d9d) common_borders_pane_cp4

0x827e,	// (0x00016ebe) separator_horizontal_pane_g1

0x8287,	// (0x00016ec7) separator_horizontal_pane_g2

0x8290,	// (0x00016ed0) separator_horizontal_pane_g3

0x0002,

0xfc0c,	// (0x0001e84c) separator_horizontal_pane_g

0x81f1,	// (0x00016e31) eswt_control_pane_g1_copy3_ParamLimits

0x81f1,	// (0x00016e31) eswt_control_pane_g1_copy3

0x81fe,	// (0x00016e3e) eswt_control_pane_g2_copy3_ParamLimits

0x81fe,	// (0x00016e3e) eswt_control_pane_g2_copy3

0x820b,	// (0x00016e4b) eswt_control_pane_g3_copy3_ParamLimits

0x820b,	// (0x00016e4b) eswt_control_pane_g3_copy3

0x8218,	// (0x00016e58) eswt_control_pane_g4_copy3_ParamLimits

0x8218,	// (0x00016e58) eswt_control_pane_g4_copy3

0x215d,	// (0x00010d9d) common_borders_pane_cp5

0x8299,	// (0x00016ed9) separator_vertical_pane_g1

0x82a2,	// (0x00016ee2) separator_vertical_pane_g2

0x82ab,	// (0x00016eeb) separator_vertical_pane_g3

0x0002,

0xfc13,	// (0x0001e853) separator_vertical_pane_g

0x81f1,	// (0x00016e31) eswt_control_pane_g1_copy4_ParamLimits

0x81f1,	// (0x00016e31) eswt_control_pane_g1_copy4

0x81fe,	// (0x00016e3e) eswt_control_pane_g2_copy4_ParamLimits

0x81fe,	// (0x00016e3e) eswt_control_pane_g2_copy4

0x820b,	// (0x00016e4b) eswt_control_pane_g3_copy4_ParamLimits

0x820b,	// (0x00016e4b) eswt_control_pane_g3_copy4

0x8218,	// (0x00016e58) eswt_control_pane_g4_copy4_ParamLimits

0x8218,	// (0x00016e58) eswt_control_pane_g4_copy4

0x82b4,	// (0x00016ef4) eswt_ctrl_combo_button_pane

0x82bc,	// (0x00016efc) eswt_ctrl_input_pane

0x82c4,	// (0x00016f04) popup_choice_list_window_cp70

0x82cc,	// (0x00016f0c) eswt_ctrl_input_pane_t1

0x215d,	// (0x00010d9d) input_focus_pane_cp70

0x7676,	// (0x000162b6) bg_button_pane_cp70_ParamLimits

0x7676,	// (0x000162b6) bg_button_pane_cp70

0x82da,	// (0x00016f1a) eswt_ctrl_combo_button_pane_g1

0x82e2,	// (0x00016f22) wait_bar_pane_cp70

0x4dc7,	// (0x00013a07) bg_popup_window_pane_cp70_ParamLimits

0x4dc7,	// (0x00013a07) bg_popup_window_pane_cp70

0x82ea,	// (0x00016f2a) popup_eswt_tasktip_window_t1

0x8300,	// (0x00016f40) wait_bar_pane_cp71_ParamLimits

0x8300,	// (0x00016f40) wait_bar_pane_cp71

0x830c,	// (0x00016f4c) grid_eswt_app_pane

0x363e,	// (0x0001227e) scroll_pane_cp70

0x8315,	// (0x00016f55) cell_eswt_app_pane_ParamLimits

0x8315,	// (0x00016f55) cell_eswt_app_pane

0x8349,	// (0x00016f89) cell_eswt_app_pane_g1_ParamLimits

0x8349,	// (0x00016f89) cell_eswt_app_pane_g1

0x8378,	// (0x00016fb8) cell_eswt_app_pane_g2_ParamLimits

0x8378,	// (0x00016fb8) cell_eswt_app_pane_g2

0x0001,

0xfc1a,	// (0x0001e85a) cell_eswt_app_pane_g_ParamLimits

0xfc1a,	// (0x0001e85a) cell_eswt_app_pane_g

0x83a1,	// (0x00016fe1) cell_eswt_app_pane_t1_ParamLimits

0x83a1,	// (0x00016fe1) cell_eswt_app_pane_t1

0x83d3,	// (0x00017013) grid_highlight_pane_cp70_ParamLimits

0x83d3,	// (0x00017013) grid_highlight_pane_cp70

0x3d48,	// (0x00012988) set_content_pane_g1

0x411d,	// (0x00012d5d) status_small_volume_pane

0xe502,	// (0x0001d142) status_small_volume_pane_g1

0xe50a,	// (0x0001d14a) volume_small2_pane

0xe513,	// (0x0001d153) volume_small2_pane_g1

0xe51c,	// (0x0001d15c) volume_small2_pane_g2

0xe525,	// (0x0001d165) volume_small2_pane_g3

0xe52e,	// (0x0001d16e) volume_small2_pane_g4

0xe537,	// (0x0001d177) volume_small2_pane_g5

0xe540,	// (0x0001d180) volume_small2_pane_g6

0xe549,	// (0x0001d189) volume_small2_pane_g7

0xe552,	// (0x0001d192) volume_small2_pane_g8

0xe55b,	// (0x0001d19b) volume_small2_pane_g9

0xe564,	// (0x0001d1a4) volume_small2_pane_g10

0x0009,

0xfc1f,	// (0x0001e85f) volume_small2_pane_g

0x7a92,	// (0x000166d2) fep_vkb_top_text_pane_g1_ParamLimits

0x7aad,	// (0x000166ed) fep_vkb_top_text_pane_t1_ParamLimits

0x7d5f,	// (0x0001699f) popup_preview_fixed_window_g3_ParamLimits

0x7d5f,	// (0x0001699f) popup_preview_fixed_window_g3

0x46e4,	// (0x00013324) popup_toolbar_trans_pane

0x6188,	// (0x00014dc8) aid_height_set_list_ParamLimits

0x6199,	// (0x00014dd9) aid_size_parent_ParamLimits

0x41fb,	// (0x00012e3b) list_highlight_pane_cp2_ParamLimits

0x3d48,	// (0x00012988) set_content_pane_g1_ParamLimits

0xccf7,	// (0x0001b937) list_single_image_pane_ParamLimits

0xccf7,	// (0x0001b937) list_single_image_pane

0x83df,	// (0x0001701f) aid_size_cell_image_ParamLimits

0x83df,	// (0x0001701f) aid_size_cell_image

0x83ec,	// (0x0001702c) grid_single_image_pane_ParamLimits

0x83ec,	// (0x0001702c) grid_single_image_pane

0x3050,	// (0x00011c90) list_single_image_pane_g1_ParamLimits

0x3050,	// (0x00011c90) list_single_image_pane_g1

0x305c,	// (0x00011c9c) list_single_image_pane_g2_ParamLimits

0x305c,	// (0x00011c9c) list_single_image_pane_g2

0x0001,

0xfc34,	// (0x0001e874) list_single_image_pane_g_ParamLimits

0xfc34,	// (0x0001e874) list_single_image_pane_g

0x83f8,	// (0x00017038) list_single_image_pane_t1_ParamLimits

0x83f8,	// (0x00017038) list_single_image_pane_t1

0x840e,	// (0x0001704e) cell_image_list_pane_ParamLimits

0x840e,	// (0x0001704e) cell_image_list_pane

0x8422,	// (0x00017062) cell_image_list_pane_g1

0x842b,	// (0x0001706b) cell_image_list_pane_g2

0x0001,

0xfc39,	// (0x0001e879) cell_image_list_pane_g

0x8434,	// (0x00017074) aid_size_cell_tb_trans_pane

0x302a,	// (0x00011c6a) bg_tb_trans_pane

0x8446,	// (0x00017086) grid_tb_trans_pane

0x4cad,	// (0x000138ed) bg_tb_trans_pane_g1

0x4cbd,	// (0x000138fd) bg_tb_trans_pane_g2

0x4cb5,	// (0x000138f5) bg_tb_trans_pane_g3

0x4ccd,	// (0x0001390d) bg_tb_trans_pane_g4

0x4cc5,	// (0x00013905) bg_tb_trans_pane_g5

0x4ced,	// (0x0001392d) bg_tb_trans_pane_g6

0x4ce5,	// (0x00013925) bg_tb_trans_pane_g7

0x4cd5,	// (0x00013915) bg_tb_trans_pane_g8

0x4cdd,	// (0x0001391d) bg_tb_trans_pane_g9

0x0008,

0xfc3e,	// (0x0001e87e) bg_tb_trans_pane_g

0x845a,	// (0x0001709a) cell_toolbar_trans_pane_ParamLimits

0x845a,	// (0x0001709a) cell_toolbar_trans_pane

0x76b1,	// (0x000162f1) cell_toolbar_trans_pane_g1

0x71fc,	// (0x00015e3c) list_form2_midp_pane_t1

0x720a,	// (0x00015e4a) list_form2_midp_pane_t2

0x0001,

0xfae7,	// (0x0001e727) list_form2_midp_pane_t

0x7218,	// (0x00015e58) scroll_pane_cp51_ParamLimits

0x741b,	// (0x0001605b) form2_midp_wait_pane_g1

0x7424,	// (0x00016064) form2_midp_wait_pane_g2

0x742d,	// (0x0001606d) form2_midp_wait_pane_g3

0x0002,

0xfafc,	// (0x0001e73c) form2_midp_wait_pane_g

0x2251,	// (0x00010e91) list_highlight_pane_cp21_ParamLimits

0x747c,	// (0x000160bc) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x748b,	// (0x000160cb) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xcc83,	// (0x0001b8c3) list_single_2graphic_im_pane_ParamLimits

0xcc83,	// (0x0001b8c3) list_single_2graphic_im_pane

0x8480,	// (0x000170c0) list_single_2graphic_im_pane_g1_ParamLimits

0x8480,	// (0x000170c0) list_single_2graphic_im_pane_g1

0x8491,	// (0x000170d1) list_single_2graphic_im_pane_g2_ParamLimits

0x8491,	// (0x000170d1) list_single_2graphic_im_pane_g2

0x849d,	// (0x000170dd) list_single_2graphic_im_pane_g3_ParamLimits

0x849d,	// (0x000170dd) list_single_2graphic_im_pane_g3

0x0003,

0xfc51,	// (0x0001e891) list_single_2graphic_im_pane_g_ParamLimits

0xfc51,	// (0x0001e891) list_single_2graphic_im_pane_g

0x84bd,	// (0x000170fd) list_single_2graphic_im_pane_t1_ParamLimits

0x84bd,	// (0x000170fd) list_single_2graphic_im_pane_t1

0x7d6b,	// (0x000169ab) list_single_graphic_2heading_pane_fp_ParamLimits

0x7d6b,	// (0x000169ab) list_single_graphic_2heading_pane_fp

0xcfba,	// (0x0001bbfa) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xcfba,	// (0x0001bbfa) list_single_graphic_2heading_pane_fp_g1

0x7d82,	// (0x000169c2) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x7d82,	// (0x000169c2) list_single_graphic_2heading_pane_fp_g2

0xc5bb,	// (0x0001b1fb) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xc5bb,	// (0x0001b1fb) list_single_graphic_2heading_pane_fp_g3

0xcf8f,	// (0x0001bbcf) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xcf8f,	// (0x0001bbcf) list_single_graphic_2heading_pane_fp_g4

0x7d8e,	// (0x000169ce) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x7d8e,	// (0x000169ce) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb7f,	// (0x0001e7bf) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb7f,	// (0x0001e7bf) list_single_graphic_2heading_pane_fp_g

0xd193,	// (0x0001bdd3) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xd193,	// (0x0001bdd3) list_single_graphic_2heading_pane_fp_t1

0xcff2,	// (0x0001bc32) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xcff2,	// (0x0001bc32) list_single_graphic_2heading_pane_fp_t2

0xd1a9,	// (0x0001bde9) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xd1a9,	// (0x0001bde9) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc5a,	// (0x0001e89a) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc5a,	// (0x0001e89a) list_single_graphic_2heading_pane_fp_t

0x7751,	// (0x00016391) fep_hwr_write_pane_g5_ParamLimits

0x7751,	// (0x00016391) fep_hwr_write_pane_g5

0x775d,	// (0x0001639d) fep_hwr_write_pane_g6_ParamLimits

0x775d,	// (0x0001639d) fep_hwr_write_pane_g6

0x81c0,	// (0x00016e00) eswt_shell_pane_ParamLimits

0x4dc7,	// (0x00013a07) bg_popup_window_pane_cp18_ParamLimits

0x60bf,	// (0x00014cff) heading_pane_cp70

0x82ea,	// (0x00016f2a) popup_eswt_tasktip_window_t1_ParamLimits

0x4801,	// (0x00013441) aid_touch_tab_arrow_left

0x4810,	// (0x00013450) aid_touch_tab_arrow_right

0x2199,	// (0x00010dd9) title_pane_g3_ParamLimits

0x2199,	// (0x00010dd9) title_pane_g3

0x2f17,	// (0x00011b57) set_value_pane_g1

0x46e4,	// (0x00013324) popup_toolbar_trans_pane_ParamLimits

0x8434,	// (0x00017074) aid_size_cell_tb_trans_pane_ParamLimits

0x302a,	// (0x00011c6a) bg_tb_trans_pane_ParamLimits

0x8446,	// (0x00017086) grid_tb_trans_pane_ParamLimits

0x24f4,	// (0x00011134) cont_note_pane_ParamLimits

0x24f4,	// (0x00011134) cont_note_pane

0x282f,	// (0x0001146f) cont_snote2_single_text_pane_ParamLimits

0x282f,	// (0x0001146f) cont_snote2_single_text_pane

0x282f,	// (0x0001146f) cont_snote2_single_graphic_pane_ParamLimits

0x282f,	// (0x0001146f) cont_snote2_single_graphic_pane

0x5404,	// (0x00014044) cont_note_wait_pane_ParamLimits

0x5404,	// (0x00014044) cont_note_wait_pane

0x5404,	// (0x00014044) cont_note_image_pane_ParamLimits

0x5404,	// (0x00014044) cont_note_image_pane

0x851a,	// (0x0001715a) popup_note2_window_g1_ParamLimits

0x851a,	// (0x0001715a) popup_note2_window_g1

0x854b,	// (0x0001718b) popup_note2_window_t1_ParamLimits

0x854b,	// (0x0001718b) popup_note2_window_t1

0x8590,	// (0x000171d0) popup_note2_window_t2_ParamLimits

0x8590,	// (0x000171d0) popup_note2_window_t2

0x85d5,	// (0x00017215) popup_note2_window_t3_ParamLimits

0x85d5,	// (0x00017215) popup_note2_window_t3

0x861a,	// (0x0001725a) popup_note2_window_t4_ParamLimits

0x861a,	// (0x0001725a) popup_note2_window_t4

0x256c,	// (0x000111ac) popup_note2_window_t5_ParamLimits

0x256c,	// (0x000111ac) popup_note2_window_t5

0x0004,

0xfc66,	// (0x0001e8a6) popup_note2_window_t_ParamLimits

0xfc66,	// (0x0001e8a6) popup_note2_window_t

0x8649,	// (0x00017289) popup_note2_image_window_g1_ParamLimits

0x8649,	// (0x00017289) popup_note2_image_window_g1

0x8655,	// (0x00017295) popup_note2_image_window_g2_ParamLimits

0x8655,	// (0x00017295) popup_note2_image_window_g2

0x0001,

0xfc71,	// (0x0001e8b1) popup_note2_image_window_g_ParamLimits

0xfc71,	// (0x0001e8b1) popup_note2_image_window_g

0x8667,	// (0x000172a7) popup_note2_image_window_t1_ParamLimits

0x8667,	// (0x000172a7) popup_note2_image_window_t1

0x867f,	// (0x000172bf) popup_note2_image_window_t2_ParamLimits

0x867f,	// (0x000172bf) popup_note2_image_window_t2

0x8697,	// (0x000172d7) popup_note2_image_window_t3_ParamLimits

0x8697,	// (0x000172d7) popup_note2_image_window_t3

0x0002,

0xfc76,	// (0x0001e8b6) popup_note2_image_window_t_ParamLimits

0xfc76,	// (0x0001e8b6) popup_note2_image_window_t

0x5412,	// (0x00014052) popup_note2_wait_window_g1_ParamLimits

0x5412,	// (0x00014052) popup_note2_wait_window_g1

0x541e,	// (0x0001405e) popup_note2_wait_window_g2_ParamLimits

0x541e,	// (0x0001405e) popup_note2_wait_window_g2

0x542a,	// (0x0001406a) popup_note2_wait_window_g3_ParamLimits

0x542a,	// (0x0001406a) popup_note2_wait_window_g3

0x0002,

0xf848,	// (0x0001e488) popup_note2_wait_window_g_ParamLimits

0xf848,	// (0x0001e488) popup_note2_wait_window_g

0x86b3,	// (0x000172f3) popup_note2_wait_window_t1_ParamLimits

0x86b3,	// (0x000172f3) popup_note2_wait_window_t1

0x86d1,	// (0x00017311) popup_note2_wait_window_t2_ParamLimits

0x86d1,	// (0x00017311) popup_note2_wait_window_t2

0x86ef,	// (0x0001732f) popup_note2_wait_window_t3_ParamLimits

0x86ef,	// (0x0001732f) popup_note2_wait_window_t3

0x8701,	// (0x00017341) popup_note2_wait_window_t4_ParamLimits

0x8701,	// (0x00017341) popup_note2_wait_window_t4

0x0003,

0xfc7d,	// (0x0001e8bd) popup_note2_wait_window_t_ParamLimits

0xfc7d,	// (0x0001e8bd) popup_note2_wait_window_t

0x8713,	// (0x00017353) wait_bar2_pane_ParamLimits

0x8713,	// (0x00017353) wait_bar2_pane

0x872b,	// (0x0001736b) popup_snote2_single_text_window_g1_ParamLimits

0x872b,	// (0x0001736b) popup_snote2_single_text_window_g1

0x8753,	// (0x00017393) popup_snote2_single_text_window_t1_ParamLimits

0x8753,	// (0x00017393) popup_snote2_single_text_window_t1

0x879f,	// (0x000173df) popup_snote2_single_text_window_t2_ParamLimits

0x879f,	// (0x000173df) popup_snote2_single_text_window_t2

0x87eb,	// (0x0001742b) popup_snote2_single_text_window_t3_ParamLimits

0x87eb,	// (0x0001742b) popup_snote2_single_text_window_t3

0x882c,	// (0x0001746c) popup_snote2_single_text_window_t4_ParamLimits

0x882c,	// (0x0001746c) popup_snote2_single_text_window_t4

0x8862,	// (0x000174a2) popup_snote2_single_text_window_t5_ParamLimits

0x8862,	// (0x000174a2) popup_snote2_single_text_window_t5

0x0004,

0xfc86,	// (0x0001e8c6) popup_snote2_single_text_window_t_ParamLimits

0xfc86,	// (0x0001e8c6) popup_snote2_single_text_window_t

0x888d,	// (0x000174cd) popup_snote2_single_graphic_window_g1_ParamLimits

0x888d,	// (0x000174cd) popup_snote2_single_graphic_window_g1

0x88b5,	// (0x000174f5) popup_snote2_single_graphic_window_g2_ParamLimits

0x88b5,	// (0x000174f5) popup_snote2_single_graphic_window_g2

0x0001,

0xfc91,	// (0x0001e8d1) popup_snote2_single_graphic_window_g_ParamLimits

0xfc91,	// (0x0001e8d1) popup_snote2_single_graphic_window_g

0x88dd,	// (0x0001751d) popup_snote2_single_graphic_window_t1_ParamLimits

0x88dd,	// (0x0001751d) popup_snote2_single_graphic_window_t1

0x8929,	// (0x00017569) popup_snote2_single_graphic_window_t2_ParamLimits

0x8929,	// (0x00017569) popup_snote2_single_graphic_window_t2

0x87eb,	// (0x0001742b) popup_snote2_single_graphic_window_t3_ParamLimits

0x87eb,	// (0x0001742b) popup_snote2_single_graphic_window_t3

0x882c,	// (0x0001746c) popup_snote2_single_graphic_window_t4_ParamLimits

0x882c,	// (0x0001746c) popup_snote2_single_graphic_window_t4

0x8862,	// (0x000174a2) popup_snote2_single_graphic_window_t5_ParamLimits

0x8862,	// (0x000174a2) popup_snote2_single_graphic_window_t5

0x0004,

0xfc96,	// (0x0001e8d6) popup_snote2_single_graphic_window_t_ParamLimits

0xfc96,	// (0x0001e8d6) popup_snote2_single_graphic_window_t

0x70cd,	// (0x00015d0d) clock_nsta_pane_cp2_t1

0x70cd,	// (0x00015d0d) clock_nsta_pane_cp2_t2

0x0001,

0xfabd,	// (0x0001e6fd) clock_nsta_pane_cp2_t

0xc8ee,	// (0x0001b52e) form_field_data_wide_pane_g1_ParamLimits

0x3050,	// (0x00011c90) form_field_data_wide_pane_g2_ParamLimits

0x3050,	// (0x00011c90) form_field_data_wide_pane_g2

0x305c,	// (0x00011c9c) form_field_data_wide_pane_g3_ParamLimits

0x305c,	// (0x00011c9c) form_field_data_wide_pane_g3

0x0002,

0xf692,	// (0x0001e2d2) form_field_data_wide_pane_g_ParamLimits

0xf692,	// (0x0001e2d2) form_field_data_wide_pane_g

0x6fa6,	// (0x00015be6) grid_touch_3_pane_ParamLimits

0x6fa6,	// (0x00015be6) grid_touch_3_pane

0x8975,	// (0x000175b5) cell_touch_3_pane_ParamLimits

0x8975,	// (0x000175b5) cell_touch_3_pane

0x76b1,	// (0x000162f1) cell_touch_3_pane_g1

0x76b1,	// (0x000162f1) cell_touch_3_pane_g2

0x0001,

0xfb42,	// (0x0001e782) cell_touch_3_pane_g

0x259e,	// (0x000111de) cont_query_data_pane

0x25a6,	// (0x000111e6) cont_query_data_pane_cp1

0x89a4,	// (0x000175e4) button_value_adjust_pane_cp7

0x89ac,	// (0x000175ec) query_popup_pane_cp3

0x38c9,	// (0x00012509) bg_popup_sub_pane_cp22_ParamLimits

0xd9c8,	// (0x0001c608) navi_navi_volume_pane_cp2

0xd9e3,	// (0x0001c623) popup_side_volume_key_window_g2

0xd9f2,	// (0x0001c632) popup_side_volume_key_window_g3

0x0002,

0xf724,	// (0x0001e364) popup_side_volume_key_window_g

0xda0f,	// (0x0001c64f) popup_side_volume_key_window_t2

0x0001,

0xf72b,	// (0x0001e36b) popup_side_volume_key_window_t

0x3c12,	// (0x00012852) popup_side_volume_key_window_ParamLimits

0xc587,	// (0x0001b1c7) list_double_graphic_pane_g4_ParamLimits

0xc587,	// (0x0001b1c7) list_double_graphic_pane_g4

0xccd0,	// (0x0001b910) list_single_2heading_msg_pane_ParamLimits

0xccd0,	// (0x0001b910) list_single_2heading_msg_pane

0xd1c9,	// (0x0001be09) list_single_2heading_msg_pane_g1_ParamLimits

0xd1c9,	// (0x0001be09) list_single_2heading_msg_pane_g1

0xc3d8,	// (0x0001b018) list_single_2heading_msg_pane_g2_ParamLimits

0xc3d8,	// (0x0001b018) list_single_2heading_msg_pane_g2

0xcdb6,	// (0x0001b9f6) list_single_2heading_msg_pane_g3_ParamLimits

0xcdb6,	// (0x0001b9f6) list_single_2heading_msg_pane_g3

0xd1d5,	// (0x0001be15) list_single_2heading_msg_pane_g4_ParamLimits

0xd1d5,	// (0x0001be15) list_single_2heading_msg_pane_g4

0x0003,

0xfca1,	// (0x0001e8e1) list_single_2heading_msg_pane_g_ParamLimits

0xfca1,	// (0x0001e8e1) list_single_2heading_msg_pane_g

0xd1ed,	// (0x0001be2d) list_single_2heading_msg_pane_t1_ParamLimits

0xd1ed,	// (0x0001be2d) list_single_2heading_msg_pane_t1

0xd215,	// (0x0001be55) list_single_2heading_msg_pane_t2_ParamLimits

0xd215,	// (0x0001be55) list_single_2heading_msg_pane_t2

0xd249,	// (0x0001be89) list_single_2heading_msg_pane_t3_ParamLimits

0xd249,	// (0x0001be89) list_single_2heading_msg_pane_t3

0xd282,	// (0x0001bec2) list_single_2heading_msg_pane_t4_ParamLimits

0xd282,	// (0x0001bec2) list_single_2heading_msg_pane_t4

0x0003,

0xfcaa,	// (0x0001e8ea) list_single_2heading_msg_pane_t_ParamLimits

0xfcaa,	// (0x0001e8ea) list_single_2heading_msg_pane_t

0x21a5,	// (0x00010de5) title_pane_g4_ParamLimits

0x21a5,	// (0x00010de5) title_pane_g4

0xd7d6,	// (0x0001c416) title_pane_stacon_g3_ParamLimits

0xd7d6,	// (0x0001c416) title_pane_stacon_g3

0x84b1,	// (0x000170f1) list_single_2graphic_im_pane_g4_ParamLimits

0x84b1,	// (0x000170f1) list_single_2graphic_im_pane_g4

0x5e65,	// (0x00014aa5) popup_side_volume_key_window_cp

0x6774,	// (0x000153b4) main_idle_act2_pane_t1

0xdd92,	// (0x0001c9d2) toolbar_button_pane_g10

0x2a27,	// (0x00011667) popup_toolbar_window_cp1

0x70be,	// (0x00015cfe) clock_nsta_pane_cp_t1

0x70be,	// (0x00015cfe) clock_nsta_pane_cp_t2

0x0001,

0xfab8,	// (0x0001e6f8) clock_nsta_pane_cp_t

0xd9c8,	// (0x0001c608) navi_navi_volume_pane_cp2_ParamLimits

0xd9d7,	// (0x0001c617) popup_side_volume_key_window_g1_ParamLimits

0xd9e3,	// (0x0001c623) popup_side_volume_key_window_g2_ParamLimits

0xd9f2,	// (0x0001c632) popup_side_volume_key_window_g3_ParamLimits

0xf724,	// (0x0001e364) popup_side_volume_key_window_g_ParamLimits

0xe22d,	// (0x0001ce6d) fep_hwr_aid_pane

0xac1b,	// (0x0001985b) bg_fep_hwr_top_pane_g4_ParamLimits

0x7733,	// (0x00016373) fep_hwr_top_pane_g1_ParamLimits

0x7721,	// (0x00016361) fep_hwr_top_pane_g2_ParamLimits

0xe2e6,	// (0x0001cf26) fep_hwr_top_pane_g3_ParamLimits

0xfb0d,	// (0x0001e74d) fep_hwr_top_pane_g_ParamLimits

0xe2fb,	// (0x0001cf3b) fep_hwr_top_text_pane_ParamLimits

0x5c2f,	// (0x0001486f) aid_touch_tab_arrow_arrow_2

0x5c26,	// (0x00014866) aid_touch_tab_arrow_left_2

0xe241,	// (0x0001ce81) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0xe278,	// (0x0001ceb8) fep_hwr_prediction_pane

0x789a,	// (0x000164da) fep_vkb_prediction_pane

0x799e,	// (0x000165de) fep_vkb_side_pane_g3_ParamLimits

0x799e,	// (0x000165de) fep_vkb_side_pane_g3

0x794a,	// (0x0001658a) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x7fa7,	// (0x00016be7) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x7fb4,	// (0x00016bf4) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbb7,	// (0x0001e7f7) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x8ac5,	// (0x00017705) fep_hwr_prediction_pane_g1

0xe56d,	// (0x0001d1ad) fep_hwr_prediction_pane_g2

0xe575,	// (0x0001d1b5) fep_hwr_prediction_pane_g3

0xe57d,	// (0x0001d1bd) fep_hwr_prediction_pane_g4

0x0003,

0xfcb3,	// (0x0001e8f3) fep_hwr_prediction_pane_g

0x8ac5,	// (0x00017705) fep_vkb_prediction_pane_g1

0x8acf,	// (0x0001770f) fep_vkb_prediction_pane_g2

0x8ad7,	// (0x00017717) fep_vkb_prediction_pane_g3

0x8adf,	// (0x0001771f) fep_vkb_prediction_pane_g4

0x0003,

0xfcbc,	// (0x0001e8fc) fep_vkb_prediction_pane_g

0xe06a,	// (0x0001ccaa) slider_set_pane_g3

0xe07e,	// (0x0001ccbe) slider_set_pane_g4

0xe096,	// (0x0001ccd6) slider_set_pane_g5

0xe06a,	// (0x0001ccaa) slider_set_pane_g6

0xe0ac,	// (0x0001ccec) slider_set_pane_g7

0x62f6,	// (0x00014f36) slider_form_pane_g3

0x62ff,	// (0x00014f3f) slider_form_pane_g4

0x6307,	// (0x00014f47) slider_form_pane_g5

0x62f6,	// (0x00014f36) slider_form_pane_g6

0x630f,	// (0x00014f4f) slider_form_pane_g7

0x6a48,	// (0x00015688) slider_set_pane_vc_g3

0x6a51,	// (0x00015691) slider_set_pane_vc_g4

0x6a5a,	// (0x0001569a) slider_set_pane_vc_g5

0x6a48,	// (0x00015688) slider_set_pane_vc_g6

0x6a63,	// (0x000156a3) slider_set_pane_vc_g7

0x6a48,	// (0x00015688) slider_form_pane_vc_g1

0x6a51,	// (0x00015691) slider_form_pane_vc_g2

0x6a5a,	// (0x0001569a) slider_form_pane_vc_g3

0x6a48,	// (0x00015688) slider_form_pane_vc_g4

0x6dc4,	// (0x00015a04) slider_form_pane_vc_g5

0x0004,

0xfa91,	// (0x0001e6d1) slider_form_pane_vc_g

0x215d,	// (0x00010d9d) main_idle_act3_pane

0x8ae7,	// (0x00017727) ai3_links_pane

0x8af0,	// (0x00017730) popup_ai3_data_window_ParamLimits

0x8af0,	// (0x00017730) popup_ai3_data_window

0x215d,	// (0x00010d9d) grid_ai3_links_pane

0x8b08,	// (0x00017748) cell_ai3_links_pane_ParamLimits

0x8b08,	// (0x00017748) cell_ai3_links_pane

0x8b20,	// (0x00017760) bg_popup_sub_pane_cp11

0x8b2d,	// (0x0001776d) cell_ai3_links_pane_g1

0x215d,	// (0x00010d9d) bg_popup_sub_pane_cp12

0x8b52,	// (0x00017792) heading_ai3_data_pane

0x8b5a,	// (0x0001779a) list_ai3_gene_pane

0x8b66,	// (0x000177a6) popup_ai3_data_window_g1

0x8b6e,	// (0x000177ae) heading_ai3_data_pane_g1

0x8b76,	// (0x000177b6) heading_ai3_data_pane_t1

0x8b84,	// (0x000177c4) list_double_ai3_gene_pane_ParamLimits

0x8b84,	// (0x000177c4) list_double_ai3_gene_pane

0x8b91,	// (0x000177d1) list_single_ai3_gene_pane_ParamLimits

0x8b91,	// (0x000177d1) list_single_ai3_gene_pane

0x7676,	// (0x000162b6) list_highlight_pane_cp7_ParamLimits

0x7676,	// (0x000162b6) list_highlight_pane_cp7

0x8b9e,	// (0x000177de) list_single_a13_gene_pane_t1_ParamLimits

0x8b9e,	// (0x000177de) list_single_a13_gene_pane_t1

0x8bb5,	// (0x000177f5) list_single_ai3_gene_pane_g1

0x8bbe,	// (0x000177fe) list_single_ai3_gene_pane_g2

0x0001,

0xfcc5,	// (0x0001e905) list_single_ai3_gene_pane_g

0x8bc6,	// (0x00017806) list_double_ai3_gene_pane_g1_ParamLimits

0x8bc6,	// (0x00017806) list_double_ai3_gene_pane_g1

0x8bd2,	// (0x00017812) list_double_ai3_gene_pane_t1_ParamLimits

0x8bd2,	// (0x00017812) list_double_ai3_gene_pane_t1

0x8bee,	// (0x0001782e) list_double_ai3_gene_pane_t2_ParamLimits

0x8bee,	// (0x0001782e) list_double_ai3_gene_pane_t2

0x8c03,	// (0x00017843) list_double_ai3_gene_pane_t3_ParamLimits

0x8c03,	// (0x00017843) list_double_ai3_gene_pane_t3

0x0002,

0xfcca,	// (0x0001e90a) list_double_ai3_gene_pane_t_ParamLimits

0xfcca,	// (0x0001e90a) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xd1bf,	// (0x0001bdff) aid_size_min_col_2

0x89c7,	// (0x00017607) aid_size_min_msg_ParamLimits

0x89c7,	// (0x00017607) aid_size_min_msg

0x7a9e,	// (0x000166de) fep_vkb_top_text_pane_g2_ParamLimits

0x7a9e,	// (0x000166de) fep_vkb_top_text_pane_g2

0x0001,

0xfb3d,	// (0x0001e77d) fep_vkb_top_text_pane_g_ParamLimits

0xfb3d,	// (0x0001e77d) fep_vkb_top_text_pane_g

0x215d,	// (0x00010d9d) main_hc_apps_shell_pane

0x8c20,	// (0x00017860) grid_hc_apps_pane_ParamLimits

0x8c20,	// (0x00017860) grid_hc_apps_pane

0x8c2f,	// (0x0001786f) list_hc_apps_pane

0x8c37,	// (0x00017877) scroll_pane_cp37_ParamLimits

0x8c37,	// (0x00017877) scroll_pane_cp37

0x8c43,	// (0x00017883) cell_hc_apps_pane_ParamLimits

0x8c43,	// (0x00017883) cell_hc_apps_pane

0x8cf3,	// (0x00017933) cell_hc_apps_pane_g1_ParamLimits

0x8cf3,	// (0x00017933) cell_hc_apps_pane_g1

0x8d24,	// (0x00017964) cell_hc_apps_pane_g2_ParamLimits

0x8d24,	// (0x00017964) cell_hc_apps_pane_g2

0x8d40,	// (0x00017980) cell_hc_apps_pane_g3_ParamLimits

0x8d40,	// (0x00017980) cell_hc_apps_pane_g3

0x0002,

0xfcd1,	// (0x0001e911) cell_hc_apps_pane_g_ParamLimits

0xfcd1,	// (0x0001e911) cell_hc_apps_pane_g

0x8d62,	// (0x000179a2) cell_hc_apps_pane_t1_ParamLimits

0x8d62,	// (0x000179a2) cell_hc_apps_pane_t1

0x24f4,	// (0x00011134) grid_highlight_pane_cp10_ParamLimits

0x24f4,	// (0x00011134) grid_highlight_pane_cp10

0x8da2,	// (0x000179e2) list_single_hc_apps_pane_ParamLimits

0x8da2,	// (0x000179e2) list_single_hc_apps_pane

0x8e15,	// (0x00017a55) list_single_hc_apps_pane_g1

0xd2a7,	// (0x0001bee7) list_single_hc_apps_pane_g2

0x0001,

0xfcd8,	// (0x0001e918) list_single_hc_apps_pane_g

0xd2c0,	// (0x0001bf00) list_single_hc_apps_pane_g2_copy1

0xd2dc,	// (0x0001bf1c) list_single_hc_apps_pane_t1

0x2251,	// (0x00010e91) bg_set_opt_pane_cp_ParamLimits

0xd701,	// (0x0001c341) setting_slider_pane_t1_ParamLimits

0xd71a,	// (0x0001c35a) setting_slider_pane_t2_ParamLimits

0xd733,	// (0x0001c373) setting_slider_pane_t3_ParamLimits

0xf57a,	// (0x0001e1ba) setting_slider_pane_t_ParamLimits

0xd74a,	// (0x0001c38a) slider_set_pane_ParamLimits

0xdc70,	// (0x0001c8b0) control_pane_g5_ParamLimits

0xdc70,	// (0x0001c8b0) control_pane_g5

0x6153,	// (0x00014d93) slider_set_pane_g1_ParamLimits

0xe05e,	// (0x0001cc9e) slider_set_pane_g2_ParamLimits

0xe06a,	// (0x0001ccaa) slider_set_pane_g3_ParamLimits

0xe07e,	// (0x0001ccbe) slider_set_pane_g4_ParamLimits

0xe096,	// (0x0001ccd6) slider_set_pane_g5_ParamLimits

0xe06a,	// (0x0001ccaa) slider_set_pane_g6_ParamLimits

0xe0ac,	// (0x0001ccec) slider_set_pane_g7_ParamLimits

0xf964,	// (0x0001e5a4) slider_set_pane_g_ParamLimits

0x3cf3,	// (0x00012933) navi_icon_text_pane_ParamLimits

0x47c2,	// (0x00013402) aid_fill_nsta_2_ParamLimits

0x4801,	// (0x00013441) aid_touch_tab_arrow_left_ParamLimits

0x4810,	// (0x00013450) aid_touch_tab_arrow_right_ParamLimits

0x487d,	// (0x000134bd) clock_nsta_pane_ParamLimits

0x5c02,	// (0x00014842) navi_icon_pane_g1_ParamLimits

0x5c11,	// (0x00014851) navi_text_pane_t1_ParamLimits

0x71d0,	// (0x00015e10) navi_icon_text_pane_g1_ParamLimits

0x71df,	// (0x00015e1f) navi_icon_text_pane_t1_ParamLimits

0x8e15,	// (0x00017a55) list_single_hc_apps_pane_g1_ParamLimits

0xd2a7,	// (0x0001bee7) list_single_hc_apps_pane_g2_ParamLimits

0xfcd8,	// (0x0001e918) list_single_hc_apps_pane_g_ParamLimits

0xd2c0,	// (0x0001bf00) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xd2dc,	// (0x0001bf1c) list_single_hc_apps_pane_t1_ParamLimits

0xd61b,	// (0x0001c25b) popup_toolbar2_fixed_window_ParamLimits

0xd61b,	// (0x0001c25b) popup_toolbar2_fixed_window

0x46da,	// (0x0001331a) popup_toolbar2_float_window

0x215d,	// (0x00010d9d) bg_popup_sub_pane_cp27

0x8e91,	// (0x00017ad1) grid_toolbar2_float_pane

0x215d,	// (0x00010d9d) bg_popup_sub_pane_cp26

0x8e91,	// (0x00017ad1) grid_toolbar2_fixed_pane

0x8e99,	// (0x00017ad9) cell_toolbar2_fixed_pane_ParamLimits

0x8e99,	// (0x00017ad9) cell_toolbar2_fixed_pane

0x8eaa,	// (0x00017aea) cell_toolbar2_fixed_pane_g1

0x8eb3,	// (0x00017af3) toolbar2_fixed_button_pane

0x4cad,	// (0x000138ed) toolbar2_fixed_button_pane_g1

0x4cbd,	// (0x000138fd) toolbar2_fixed_button_pane_g2

0x4cb5,	// (0x000138f5) toolbar2_fixed_button_pane_g3

0x4ccd,	// (0x0001390d) toolbar2_fixed_button_pane_g4

0x4cc5,	// (0x00013905) toolbar2_fixed_button_pane_g5

0x4cd5,	// (0x00013915) toolbar2_fixed_button_pane_g6

0x4cdd,	// (0x0001391d) toolbar2_fixed_button_pane_g7

0x4ced,	// (0x0001392d) toolbar2_fixed_button_pane_g8

0x4ce5,	// (0x00013925) toolbar2_fixed_button_pane_g9

0x0008,

0xf866,	// (0x0001e4a6) toolbar2_fixed_button_pane_g

0x8ebb,	// (0x00017afb) cell_toolbar2_float_pane_ParamLimits

0x8ebb,	// (0x00017afb) cell_toolbar2_float_pane

0x8ecc,	// (0x00017b0c) cell_toolbar2_float_pane_g1

0x8eb3,	// (0x00017af3) toolbar2_fixed_button_pane_cp

0x77f3,	// (0x00016433) fep_vkb_accented_list_pane_ParamLimits

0x77f3,	// (0x00016433) fep_vkb_accented_list_pane

0xe449,	// (0x0001d089) bg_popup_fep_shadow_pane_g9

0x3e75,	// (0x00012ab5) bg_popup_fep_shadow_pane_cp3

0x3304,	// (0x00011f44) list_accented_list_pane

0x8ed5,	// (0x00017b15) list_single_accented_list_pane_ParamLimits

0x8ed5,	// (0x00017b15) list_single_accented_list_pane

0x3e75,	// (0x00012ab5) list_highlight_pane_cp10

0x8ee6,	// (0x00017b26) list_single_accented_list_pane_t1

0x462a,	// (0x0001326a) popup_slider_window_ParamLimits

0x462a,	// (0x0001326a) popup_slider_window

0x89b4,	// (0x000175f4) aid_indentation_list_msg

0x8fa0,	// (0x00017be0) bg_popup_window_pane_cp19

0x900a,	// (0x00017c4a) popup_slider_window_g1

0x9026,	// (0x00017c66) popup_slider_window_g2

0x9042,	// (0x00017c82) popup_slider_window_g3

0x0005,

0xfcdd,	// (0x0001e91d) popup_slider_window_g

0x909e,	// (0x00017cde) popup_slider_window_t1

0x9112,	// (0x00017d52) small_volume_slider_vertical_pane

0x76b1,	// (0x000162f1) small_volume_slider_vertical_pane_g1

0x76b1,	// (0x000162f1) small_volume_slider_vertical_pane_g2

0x912e,	// (0x00017d6e) small_volume_slider_vertical_pane_g3

0x0002,

0xfcef,	// (0x0001e92f) small_volume_slider_vertical_pane_g

0xd3eb,	// (0x0001c02b) area_side_right_pane_ParamLimits

0xd3eb,	// (0x0001c02b) area_side_right_pane

0xe585,	// (0x0001d1c5) aid_size_side_button_ParamLimits

0xe585,	// (0x0001d1c5) aid_size_side_button

0xe599,	// (0x0001d1d9) grid_sctrl_middle_pane_ParamLimits

0xe599,	// (0x0001d1d9) grid_sctrl_middle_pane

0xe5b9,	// (0x0001d1f9) sctrl_sk_bottom_pane

0xe5ca,	// (0x0001d20a) sctrl_sk_top_pane

0xe5dc,	// (0x0001d21c) aid_touch_sctrl_top

0x24f4,	// (0x00011134) bg_sctrl_sk_pane_ParamLimits

0x24f4,	// (0x00011134) bg_sctrl_sk_pane

0xe5e9,	// (0x0001d229) sctrl_sk_top_pane_g1

0xe5f6,	// (0x0001d236) sctrl_sk_top_pane_t1

0xe5dc,	// (0x0001d21c) aid_touch_sctrl_bottom

0x24f4,	// (0x00011134) bg_sctrl_sk_pane_cp_ParamLimits

0x24f4,	// (0x00011134) bg_sctrl_sk_pane_cp

0xe611,	// (0x0001d251) sctrl_sk_bottom_pane_g1

0xe5f6,	// (0x0001d236) sctrl_sk_bottom_pane_t1

0xe61a,	// (0x0001d25a) cell_sctrl_middle_pane_ParamLimits

0xe61a,	// (0x0001d25a) cell_sctrl_middle_pane

0xe635,	// (0x0001d275) aid_touch_sctrl_middle_ParamLimits

0xe635,	// (0x0001d275) aid_touch_sctrl_middle

0x302a,	// (0x00011c6a) bg_sctrl_middle_pane_ParamLimits

0x302a,	// (0x00011c6a) bg_sctrl_middle_pane

0x794a,	// (0x0001658a) cell_sctrl_middle_pane_g1_ParamLimits

0x794a,	// (0x0001658a) cell_sctrl_middle_pane_g1

0xe647,	// (0x0001d287) cell_sctrl_middle_pane_g2_ParamLimits

0xe647,	// (0x0001d287) cell_sctrl_middle_pane_g2

0x0001,

0xfcfb,	// (0x0001e93b) cell_sctrl_middle_pane_g_ParamLimits

0xfcfb,	// (0x0001e93b) cell_sctrl_middle_pane_g

0x4cad,	// (0x000138ed) bg_sctrl_middle_pane_g1

0x4cbd,	// (0x000138fd) bg_sctrl_middle_pane_g2

0x4cb5,	// (0x000138f5) bg_sctrl_middle_pane_g3

0x4ccd,	// (0x0001390d) bg_sctrl_middle_pane_g4

0x4cc5,	// (0x00013905) bg_sctrl_middle_pane_g5

0x4cd5,	// (0x00013915) bg_sctrl_middle_pane_g6

0x4cdd,	// (0x0001391d) bg_sctrl_middle_pane_g7

0x4ced,	// (0x0001392d) bg_sctrl_middle_pane_g8

0x0007,

0xfd00,	// (0x0001e940) bg_sctrl_middle_pane_g

0x4ce5,	// (0x00013925) bg_sctrl_middle_pane_g8_copy1

0x4cad,	// (0x000138ed) bg_sctrl_sk_pane_g1

0x4cbd,	// (0x000138fd) bg_sctrl_sk_pane_g2

0x4cb5,	// (0x000138f5) bg_sctrl_sk_pane_g3

0x0008,

0xf866,	// (0x0001e4a6) bg_sctrl_sk_pane_g

0x29ed,	// (0x0001162d) aid_size_touch_scroll_bar

0x4ccd,	// (0x0001390d) bg_sctrl_sk_pane_g4

0x4cc5,	// (0x00013905) bg_sctrl_sk_pane_g5

0x4cd5,	// (0x00013915) bg_sctrl_sk_pane_g6

0x4cdd,	// (0x0001391d) bg_sctrl_sk_pane_g7

0x4ced,	// (0x0001392d) bg_sctrl_sk_pane_g8

0x4ce5,	// (0x00013925) bg_sctrl_sk_pane_g9

0x42a3,	// (0x00012ee3) popup_fep_china_hwr2_fs_candidate_window

0x42ad,	// (0x00012eed) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x42ad,	// (0x00012eed) popup_fep_china_hwr2_fs_control_window

0x794a,	// (0x0001658a) sctrl_sk_top_pane_g2

0x0001,

0xfcf6,	// (0x0001e936) sctrl_sk_top_pane_g

0x9137,	// (0x00017d77) aid_fep_china_hwr2_fs_cell_ParamLimits

0x9137,	// (0x00017d77) aid_fep_china_hwr2_fs_cell

0x9149,	// (0x00017d89) bg_popup_fep_shadow_pane_cp4_ParamLimits

0x9149,	// (0x00017d89) bg_popup_fep_shadow_pane_cp4

0x9160,	// (0x00017da0) bg_popup_fep_shadow_pane_cp5_ParamLimits

0x9160,	// (0x00017da0) bg_popup_fep_shadow_pane_cp5

0x9172,	// (0x00017db2) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0x9172,	// (0x00017db2) popup_fep_china_hwr2_fs_control_bar_grid

0x9182,	// (0x00017dc2) popup_fep_china_hwr2_fs_control_funtion_grid

0x918a,	// (0x00017dca) aid_fep_china_hwr2_fs_candi_cell

0x215d,	// (0x00010d9d) bg_popup_fep_shadow_pane_cp6

0x9194,	// (0x00017dd4) popup_fep_china_hwr2_fs_candidate_grid

0x919e,	// (0x00017dde) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0x919e,	// (0x00017dde) cell_fep_china_hwr2_fs_funtion_grid

0x76b1,	// (0x000162f1) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x91b6,	// (0x00017df6) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x91b6,	// (0x00017df6) cell_fep_china_hwr2_fs_funtion_grid_g1

0x91c4,	// (0x00017e04) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x91c4,	// (0x00017e04) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd11,	// (0x0001e951) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd11,	// (0x0001e951) cell_fep_china_hwr2_fs_funtion_grid_g

0x91da,	// (0x00017e1a) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0x91da,	// (0x00017e1a) cell_fep_china_hwr2_fs_funtion_grid_t1

0x91ef,	// (0x00017e2f) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0x91ef,	// (0x00017e2f) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd16,	// (0x0001e956) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd16,	// (0x0001e956) cell_fep_china_hwr2_fs_funtion_grid_t

0x920b,	// (0x00017e4b) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x9213,	// (0x00017e53) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x921b,	// (0x00017e5b) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd1b,	// (0x0001e95b) popup_fep_china_hwr2_fs_control_bar_grid_g

0x9223,	// (0x00017e63) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x9223,	// (0x00017e63) cell_fep_china_hwr2_fs_candidate_grid

0x923c,	// (0x00017e7c) popup_fep_china_hwr2_fs_candidate_grid_g20

0x9244,	// (0x00017e84) popup_fep_china_hwr2_fs_candidate_grid_g21

0x76b1,	// (0x000162f1) cell_fep_china_hwr2_fs_candidate_grid_g1

0x76b1,	// (0x000162f1) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb42,	// (0x0001e782) cell_fep_china_hwr2_fs_candidate_grid_g

0x924c,	// (0x00017e8c) cell_fep_china_hwr2_fs_candidate_grid_t1

0x488a,	// (0x000134ca) clock_nsta_pane_cp_24_ParamLimits

0x488a,	// (0x000134ca) clock_nsta_pane_cp_24

0x4908,	// (0x00013548) indicator_nsta_pane_cp_24_ParamLimits

0x4908,	// (0x00013548) indicator_nsta_pane_cp_24

0x5a7e,	// (0x000146be) heading_pane_g1

0x0001,

0xf8cb,	// (0x0001e50b) heading_pane_g

0x65bb,	// (0x000151fb) grid_sct_catagory_button_pane

0x65ed,	// (0x0001522d) scroll_pane_cp5_ParamLimits

0x7224,	// (0x00015e64) button_value_adjust_pane_cp5_ParamLimits

0x7224,	// (0x00015e64) button_value_adjust_pane_cp5

0x731c,	// (0x00015f5c) form2_midp_time_pane_ParamLimits

0x925a,	// (0x00017e9a) cell_sct_catagory_button_pane_ParamLimits

0x925a,	// (0x00017e9a) cell_sct_catagory_button_pane

0x7676,	// (0x000162b6) bg_button_pane_cp01_ParamLimits

0x7676,	// (0x000162b6) bg_button_pane_cp01

0x76b1,	// (0x000162f1) cell_sct_catagory_button_pane_g1

0x4669,	// (0x000132a9) popup_tb_extension_window

0x926c,	// (0x00017eac) aid_size_cell_ext_ParamLimits

0x926c,	// (0x00017eac) aid_size_cell_ext

0x24f4,	// (0x00011134) bg_tb_trans_pane_cp1_ParamLimits

0x24f4,	// (0x00011134) bg_tb_trans_pane_cp1

0x928c,	// (0x00017ecc) grid_tb_ext_pane_ParamLimits

0x928c,	// (0x00017ecc) grid_tb_ext_pane

0x92be,	// (0x00017efe) cell_tb_ext_pane_ParamLimits

0x92be,	// (0x00017efe) cell_tb_ext_pane

0x92d5,	// (0x00017f15) cell_tb_ext_pane_g1_ParamLimits

0x92d5,	// (0x00017f15) cell_tb_ext_pane_g1

0x92f2,	// (0x00017f32) cell_tb_ext_pane_t1

0x24f4,	// (0x00011134) list_highlight_pane_cp11_ParamLimits

0x24f4,	// (0x00011134) list_highlight_pane_cp11

0xd63a,	// (0x0001c27a) popup_uni_indicator_window_ParamLimits

0xd63a,	// (0x0001c27a) popup_uni_indicator_window

0x302a,	// (0x00011c6a) bg_popup_sub_pane_cp14

0x930d,	// (0x00017f4d) list_uniindi_pane

0x9319,	// (0x00017f59) uniindi_top_pane

0x24f4,	// (0x00011134) bg_uniindi_top_pane

0x9338,	// (0x00017f78) uniindi_top_pane_g1

0x934e,	// (0x00017f8e) uniindi_top_pane_g2

0x0003,

0xfd22,	// (0x0001e962) uniindi_top_pane_g

0x9378,	// (0x00017fb8) uniindi_top_pane_t1

0x93a2,	// (0x00017fe2) list_single_uniindi_pane_ParamLimits

0x93a2,	// (0x00017fe2) list_single_uniindi_pane

0x76b1,	// (0x000162f1) bg_uniindi_top_pane_g1

0x93b4,	// (0x00017ff4) list_single_uniindi_pane_g1

0x93c7,	// (0x00018007) list_single_uniindi_pane_t1

0x215d,	// (0x00010d9d) control_bg_pane

0x93ec,	// (0x0001802c) bg_sctrl_sk_pane_cp1

0x93f5,	// (0x00018035) bg_sctrl_sk_pane_cp2

0x93fe,	// (0x0001803e) control_bg_pane_g1

0x9407,	// (0x00018047) control_bg_pane_g2

0x0001,

0xfd2b,	// (0x0001e96b) control_bg_pane_g

0x7050,	// (0x00015c90) cell_indicator_nsta_pane_g1_ParamLimits

0x705e,	// (0x00015c9e) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa6,	// (0x0001e6e6) cell_indicator_nsta_pane_g_ParamLimits

0xcf7c,	// (0x0001bbbc) form2_midp_time_pane_t1_ParamLimits

0x282f,	// (0x0001146f) main_idle_act4_pane_ParamLimits

0x282f,	// (0x0001146f) main_idle_act4_pane

0x4669,	// (0x000132a9) popup_tb_extension_window_ParamLimits

0x92ae,	// (0x00017eee) tb_ext_find_pane_ParamLimits

0x92ae,	// (0x00017eee) tb_ext_find_pane

0x9410,	// (0x00018050) ai_gene_pane_1_cp1

0x3fbe,	// (0x00012bfe) ai_gene_pane_2_cp1

0x9418,	// (0x00018058) list_single_idle_plugin_calendar_pane

0x9421,	// (0x00018061) list_single_idle_plugin_notification_pane

0x942a,	// (0x0001806a) list_single_idle_plugin_player_pane

0x9433,	// (0x00018073) list_single_idle_plugin_shortcut_pane_ParamLimits

0x9433,	// (0x00018073) list_single_idle_plugin_shortcut_pane

0x9455,	// (0x00018095) main_idle_act4_pane_t1

0x9467,	// (0x000180a7) main_idle_act4_pane_t2

0x0001,

0xfd30,	// (0x0001e970) main_idle_act4_pane_t

0x9479,	// (0x000180b9) middle_sk_idle_act4_pane_ParamLimits

0x9479,	// (0x000180b9) middle_sk_idle_act4_pane

0x948f,	// (0x000180cf) popup_clock_digital_analogue_window_cp2

0x94a9,	// (0x000180e9) shortcut_wheel_idle_act4_pane_ParamLimits

0x94a9,	// (0x000180e9) shortcut_wheel_idle_act4_pane

0x76b1,	// (0x000162f1) shortcut_wheel_idle_act4_pane_g1

0x76b1,	// (0x000162f1) shortcut_wheel_idle_act4_pane_g2

0x76b1,	// (0x000162f1) shortcut_wheel_idle_act4_pane_g3

0x76b1,	// (0x000162f1) shortcut_wheel_idle_act4_pane_g4

0x76b1,	// (0x000162f1) shortcut_wheel_idle_act4_pane_g5

0x94bd,	// (0x000180fd) shortcut_wheel_idle_act4_pane_g6

0x94c5,	// (0x00018105) shortcut_wheel_idle_act4_pane_g7

0x94cd,	// (0x0001810d) shortcut_wheel_idle_act4_pane_g8

0x94d5,	// (0x00018115) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd35,	// (0x0001e975) shortcut_wheel_idle_act4_pane_g

0x794a,	// (0x0001658a) middle_sk_idle_act4_pane_g1_ParamLimits

0x794a,	// (0x0001658a) middle_sk_idle_act4_pane_g1

0x9539,	// (0x00018179) middle_sk_idle_act4_pane_g2_ParamLimits

0x9539,	// (0x00018179) middle_sk_idle_act4_pane_g2

0x0001,

0xfd58,	// (0x0001e998) middle_sk_idle_act4_pane_g_ParamLimits

0xfd58,	// (0x0001e998) middle_sk_idle_act4_pane_g

0x9545,	// (0x00018185) middle_sk_idle_act4_pane_t1_ParamLimits

0x9545,	// (0x00018185) middle_sk_idle_act4_pane_t1

0x9562,	// (0x000181a2) grid_ai_shortcut_pane_ParamLimits

0x9562,	// (0x000181a2) grid_ai_shortcut_pane

0x957b,	// (0x000181bb) list_highlight_pane_cp16_ParamLimits

0x957b,	// (0x000181bb) list_highlight_pane_cp16

0x9588,	// (0x000181c8) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0x9588,	// (0x000181c8) list_single_idle_plugin_shortcut_pane_g1

0x9594,	// (0x000181d4) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0x9594,	// (0x000181d4) list_single_idle_plugin_shortcut_pane_g2

0x95ac,	// (0x000181ec) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0x95ac,	// (0x000181ec) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd5d,	// (0x0001e99d) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd5d,	// (0x0001e99d) list_single_idle_plugin_shortcut_pane_g

0x95bf,	// (0x000181ff) cell_ai_shortcut_pane_ParamLimits

0x95bf,	// (0x000181ff) cell_ai_shortcut_pane

0x95e0,	// (0x00018220) cell_ai_shortcut_pane_g1_ParamLimits

0x95e0,	// (0x00018220) cell_ai_shortcut_pane_g1

0x9410,	// (0x00018050) ai_gene_pane_1_cp2

0x9602,	// (0x00018242) ai_gene_pane_2_cp2

0x960a,	// (0x0001824a) list_highlight_pane_cp15

0x9613,	// (0x00018253) list_single_idle_plugin_calendar_pane_g1

0x960a,	// (0x0001824a) list_highlight_pane_cp17

0x961b,	// (0x0001825b) list_single_idle_plugin_calendar_pane_g1_copy1

0x9623,	// (0x00018263) list_single_idle_plugin_player_pane_g1

0x6814,	// (0x00015454) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd64,	// (0x0001e9a4) list_single_idle_plugin_player_pane_g

0x962b,	// (0x0001826b) list_single_idle_plugin_player_pane_t1

0x9639,	// (0x00018279) list_single_idle_plugin_player_pane_t2

0x9647,	// (0x00018287) list_single_idle_plugin_player_pane_t3

0x9655,	// (0x00018295) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd69,	// (0x0001e9a9) list_single_idle_plugin_player_pane_t

0x9663,	// (0x000182a3) wait_bar_pane_cp15

0x966b,	// (0x000182ab) grid_ai_notification_pane

0x6814,	// (0x00015454) list_single_idle_plugin_notification_pane_g1

0x9674,	// (0x000182b4) cell_ai_notification_pane_ParamLimits

0x9674,	// (0x000182b4) cell_ai_notification_pane

0x9681,	// (0x000182c1) cell_ai_notification_pane_g1

0x9689,	// (0x000182c9) cell_ai_notification_pane_t1

0x9697,	// (0x000182d7) tb_ext_find_button_pane

0x969f,	// (0x000182df) tb_ext_find_pane_g1

0x96a7,	// (0x000182e7) tb_ext_find_pane_t1

0x3808,	// (0x00012448) tb_ext_find_button_pane_g1

0x96b5,	// (0x000182f5) tb_ext_find_button_pane_g2

0x0001,

0xfd72,	// (0x0001e9b2) tb_ext_find_button_pane_g

0x9455,	// (0x00018095) main_idle_act4_pane_t1_ParamLimits

0x9467,	// (0x000180a7) main_idle_act4_pane_t2_ParamLimits

0xfd30,	// (0x0001e970) main_idle_act4_pane_t_ParamLimits

0x948f,	// (0x000180cf) popup_clock_digital_analogue_window_cp2_ParamLimits

0x949d,	// (0x000180dd) sat_plugin_idle_act4_pane_ParamLimits

0x949d,	// (0x000180dd) sat_plugin_idle_act4_pane

0x96be,	// (0x000182fe) sat_plugin_idle_act4_pane_t1_ParamLimits

0x96be,	// (0x000182fe) sat_plugin_idle_act4_pane_t1

0x96d1,	// (0x00018311) sat_plugin_idle_act4_pane_t2_ParamLimits

0x96d1,	// (0x00018311) sat_plugin_idle_act4_pane_t2

0x96e4,	// (0x00018324) sat_plugin_idle_act4_pane_t3_ParamLimits

0x96e4,	// (0x00018324) sat_plugin_idle_act4_pane_t3

0x96f7,	// (0x00018337) sat_plugin_idle_act4_pane_t4_ParamLimits

0x96f7,	// (0x00018337) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd77,	// (0x0001e9b7) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd77,	// (0x0001e9b7) sat_plugin_idle_act4_pane_t

0xd583,	// (0x0001c1c3) popup_battery_window_ParamLimits

0xd583,	// (0x0001c1c3) popup_battery_window

0x24f4,	// (0x00011134) bg_popup_sub_pane_cp25_ParamLimits

0x24f4,	// (0x00011134) bg_popup_sub_pane_cp25

0x970a,	// (0x0001834a) popup_battery_window_g1_ParamLimits

0x970a,	// (0x0001834a) popup_battery_window_g1

0x9716,	// (0x00018356) popup_battery_window_t1_ParamLimits

0x9716,	// (0x00018356) popup_battery_window_t1

0x9728,	// (0x00018368) popup_battery_window_t2_ParamLimits

0x9728,	// (0x00018368) popup_battery_window_t2

0x0001,

0xfd80,	// (0x0001e9c0) popup_battery_window_t_ParamLimits

0xfd80,	// (0x0001e9c0) popup_battery_window_t

0x3e89,	// (0x00012ac9) midp_canvas_pane_ParamLimits

0x3f00,	// (0x00012b40) midp_keypad_pane_ParamLimits

0x3f00,	// (0x00012b40) midp_keypad_pane

0x41fb,	// (0x00012e3b) main_midp_pane_ParamLimits

0x70dc,	// (0x00015d1c) signal_pane_g2_cp_ParamLimits

0x9745,	// (0x00018385) aid_size_cell_midp_keypad_ParamLimits

0x9745,	// (0x00018385) aid_size_cell_midp_keypad

0x975f,	// (0x0001839f) midp_keyp_game_grid_pane_ParamLimits

0x975f,	// (0x0001839f) midp_keyp_game_grid_pane

0x977f,	// (0x000183bf) midp_keyp_rocker_pane_ParamLimits

0x977f,	// (0x000183bf) midp_keyp_rocker_pane

0x97b8,	// (0x000183f8) midp_keyp_sk_left_pane_ParamLimits

0x97b8,	// (0x000183f8) midp_keyp_sk_left_pane

0x9812,	// (0x00018452) midp_keyp_sk_right_pane_ParamLimits

0x9812,	// (0x00018452) midp_keyp_sk_right_pane

0x215d,	// (0x00010d9d) bg_button_pane_cp03

0x986c,	// (0x000184ac) midp_keyp_sk_left_pane_g1

0x215d,	// (0x00010d9d) bg_button_pane_cp04

0x986c,	// (0x000184ac) midp_keyp_sk_right_pane_g1

0x76b1,	// (0x000162f1) midp_keyp_rocker_pane_g1

0x9875,	// (0x000184b5) keyp_game_cell_pane_ParamLimits

0x9875,	// (0x000184b5) keyp_game_cell_pane

0x215d,	// (0x00010d9d) bg_button_pane_cp02

0x9888,	// (0x000184c8) keyp_game_cell_pane_g1

0xd5b9,	// (0x0001c1f9) popup_fep_vkb2_window_ParamLimits

0xd5b9,	// (0x0001c1f9) popup_fep_vkb2_window

0xe669,	// (0x0001d2a9) aid_size_cell_vkb2_ParamLimits

0xe669,	// (0x0001d2a9) aid_size_cell_vkb2

0xe6bd,	// (0x0001d2fd) popup_fep_vkb2_window_g1_ParamLimits

0xe6bd,	// (0x0001d2fd) popup_fep_vkb2_window_g1

0xe6fd,	// (0x0001d33d) vkb2_area_bottom_pane_ParamLimits

0xe6fd,	// (0x0001d33d) vkb2_area_bottom_pane

0xe749,	// (0x0001d389) vkb2_area_keypad_pane_ParamLimits

0xe749,	// (0x0001d389) vkb2_area_keypad_pane

0xe78b,	// (0x0001d3cb) vkb2_area_top_pane_ParamLimits

0xe78b,	// (0x0001d3cb) vkb2_area_top_pane

0xe805,	// (0x0001d445) vkb2_top_entry_pane_ParamLimits

0xe805,	// (0x0001d445) vkb2_top_entry_pane

0xe82f,	// (0x0001d46f) vkb2_top_grid_left_pane_ParamLimits

0xe82f,	// (0x0001d46f) vkb2_top_grid_left_pane

0xe84d,	// (0x0001d48d) vkb2_top_grid_right_pane_ParamLimits

0xe84d,	// (0x0001d48d) vkb2_top_grid_right_pane

0xe86b,	// (0x0001d4ab) vkb2_cell_keypad_pane_ParamLimits

0xe86b,	// (0x0001d4ab) vkb2_cell_keypad_pane

0xe93c,	// (0x0001d57c) vkb2_area_bottom_grid_pane_ParamLimits

0xe93c,	// (0x0001d57c) vkb2_area_bottom_grid_pane

0xe962,	// (0x0001d5a2) vkb2_area_bottom_pane_g1_ParamLimits

0xe962,	// (0x0001d5a2) vkb2_area_bottom_pane_g1

0xe986,	// (0x0001d5c6) vkb2_area_bottom_pane_g2_ParamLimits

0xe986,	// (0x0001d5c6) vkb2_area_bottom_pane_g2

0xe9b4,	// (0x0001d5f4) vkb2_area_bottom_pane_g3_ParamLimits

0xe9b4,	// (0x0001d5f4) vkb2_area_bottom_pane_g3

0x0002,

0xfd85,	// (0x0001e9c5) vkb2_area_bottom_pane_g_ParamLimits

0xfd85,	// (0x0001e9c5) vkb2_area_bottom_pane_g

0xea15,	// (0x0001d655) vkb2_top_cell_left_pane_ParamLimits

0xea15,	// (0x0001d655) vkb2_top_cell_left_pane

0x9899,	// (0x000184d9) vkb2_top_entry_pane_g1_ParamLimits

0x9899,	// (0x000184d9) vkb2_top_entry_pane_g1

0x98a7,	// (0x000184e7) vkb2_top_entry_pane_t1_ParamLimits

0x98a7,	// (0x000184e7) vkb2_top_entry_pane_t1

0x98d9,	// (0x00018519) vkb2_top_entry_pane_t2_ParamLimits

0x98d9,	// (0x00018519) vkb2_top_entry_pane_t2

0x990b,	// (0x0001854b) vkb2_top_entry_pane_t3_ParamLimits

0x990b,	// (0x0001854b) vkb2_top_entry_pane_t3

0x0002,

0xfd8c,	// (0x0001e9cc) vkb2_top_entry_pane_t_ParamLimits

0xfd8c,	// (0x0001e9cc) vkb2_top_entry_pane_t

0xea62,	// (0x0001d6a2) vkb2_top_grid_right_pane_g1_ParamLimits

0xea62,	// (0x0001d6a2) vkb2_top_grid_right_pane_g1

0xea78,	// (0x0001d6b8) vkb2_top_grid_right_pane_g2_ParamLimits

0xea78,	// (0x0001d6b8) vkb2_top_grid_right_pane_g2

0xea90,	// (0x0001d6d0) vkb2_top_grid_right_pane_g3_ParamLimits

0xea90,	// (0x0001d6d0) vkb2_top_grid_right_pane_g3

0xeaa8,	// (0x0001d6e8) vkb2_top_grid_right_pane_g4_ParamLimits

0xeaa8,	// (0x0001d6e8) vkb2_top_grid_right_pane_g4

0x0003,

0xfd93,	// (0x0001e9d3) vkb2_top_grid_right_pane_g_ParamLimits

0xfd93,	// (0x0001e9d3) vkb2_top_grid_right_pane_g

0xeabe,	// (0x0001d6fe) vkb2_top_cell_left_pane_g1

0xead5,	// (0x0001d715) vkb2_cell_keypad_pane_g1_ParamLimits

0xead5,	// (0x0001d715) vkb2_cell_keypad_pane_g1

0xac29,	// (0x00019869) vkb2_cell_keypad_pane_t1_ParamLimits

0xac29,	// (0x00019869) vkb2_cell_keypad_pane_t1

0xeae3,	// (0x0001d723) vkb2_cell_bottom_grid_pane_ParamLimits

0xeae3,	// (0x0001d723) vkb2_cell_bottom_grid_pane

0xeb1c,	// (0x0001d75c) vkb2_cell_bottom_grid_pane_g1

0x94dd,	// (0x0001811d) aid_call2_pane_cp02

0x94e5,	// (0x00018125) aid_call_pane_cp02

0x94ed,	// (0x0001812d) clock_digital_number_pane_cp10

0x94f5,	// (0x00018135) clock_digital_number_pane_cp11

0x94fd,	// (0x0001813d) clock_digital_number_pane_cp12

0x9505,	// (0x00018145) clock_digital_number_pane_cp13

0x950d,	// (0x0001814d) clock_digital_separator_pane_cp10

0x3808,	// (0x00012448) popup_clock_digital_analogue_window_cp2_g1

0x3808,	// (0x00012448) popup_clock_digital_analogue_window_cp2_g2

0x9515,	// (0x00018155) popup_clock_digital_analogue_window_cp2_g3

0x3808,	// (0x00012448) popup_clock_digital_analogue_window_cp2_g4

0x9515,	// (0x00018155) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd48,	// (0x0001e988) popup_clock_digital_analogue_window_cp2_g

0x951d,	// (0x0001815d) popup_clock_digital_analogue_window_cp2_t1

0x952b,	// (0x0001816b) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd53,	// (0x0001e993) popup_clock_digital_analogue_window_cp2_t

0x76b1,	// (0x000162f1) clock_digital_number_pane_cp10_g1

0x76b1,	// (0x000162f1) clock_digital_number_pane_cp10_g2

0x0001,

0xfb42,	// (0x0001e782) clock_digital_number_pane_cp10_g

0x76b1,	// (0x000162f1) clock_digital_separator_pane_cp10_g1

0x76b1,	// (0x000162f1) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb42,	// (0x0001e782) clock_digital_separator_pane_cp10_g

0x935a,	// (0x00017f9a) uniindi_top_pane_g3

0x936b,	// (0x00017fab) uniindi_top_pane_g4

0xe8f6,	// (0x0001d536) vkb2_row_keypad_pane_ParamLimits

0xe8f6,	// (0x0001d536) vkb2_row_keypad_pane

0xeb3c,	// (0x0001d77c) vkb2_cell_t_keypad_pane_ParamLimits

0xeb3c,	// (0x0001d77c) vkb2_cell_t_keypad_pane

0xeb4c,	// (0x0001d78c) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0xeb4c,	// (0x0001d78c) vkb2_cell_t_keypad_pane_cp08

0xeb5f,	// (0x0001d79f) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0xeb5f,	// (0x0001d79f) vkb2_cell_t_keypad_pane_cp09

0xeb73,	// (0x0001d7b3) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0xeb73,	// (0x0001d7b3) vkb2_cell_t_keypad_pane_cp01

0xeb84,	// (0x0001d7c4) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0xeb84,	// (0x0001d7c4) vkb2_cell_t_keypad_pane_cp02

0xeb95,	// (0x0001d7d5) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0xeb95,	// (0x0001d7d5) vkb2_cell_t_keypad_pane_cp03

0xeba6,	// (0x0001d7e6) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0xeba6,	// (0x0001d7e6) vkb2_cell_t_keypad_pane_cp04

0xebb7,	// (0x0001d7f7) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0xebb7,	// (0x0001d7f7) vkb2_cell_t_keypad_pane_cp05

0xebc8,	// (0x0001d808) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0xebc8,	// (0x0001d808) vkb2_cell_t_keypad_pane_cp06

0xebd9,	// (0x0001d819) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0xebd9,	// (0x0001d819) vkb2_cell_t_keypad_pane_cp07

0xebea,	// (0x0001d82a) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0xebea,	// (0x0001d82a) vkb2_cell_t_keypad_pane_cp10

0x794a,	// (0x0001658a) vkb2_cell_t_keypad_pane_g1

0xac40,	// (0x00019880) vkb2_cell_t_keypad_pane_t1

0x215d,	// (0x00010d9d) popup_grid_graphic2_window

0xebff,	// (0x0001d83f) aid_size_cell_graphic2_ParamLimits

0xebff,	// (0x0001d83f) aid_size_cell_graphic2

0x7ce1,	// (0x00016921) bg_popup_window_pane_cp21_ParamLimits

0x7ce1,	// (0x00016921) bg_popup_window_pane_cp21

0xec2b,	// (0x0001d86b) graphic2_pages_pane_ParamLimits

0xec2b,	// (0x0001d86b) graphic2_pages_pane

0xec71,	// (0x0001d8b1) grid_graphic2_control_pane_ParamLimits

0xec71,	// (0x0001d8b1) grid_graphic2_control_pane

0xec9f,	// (0x0001d8df) grid_graphic2_pane_ParamLimits

0xec9f,	// (0x0001d8df) grid_graphic2_pane

0xecff,	// (0x0001d93f) cell_graphic2_pane

0x215d,	// (0x00010d9d) main_comp_mode_pane

0x8b5a,	// (0x0001779a) list_ai3_gene_pane_ParamLimits

0x8fa0,	// (0x00017be0) bg_popup_window_pane_cp19_ParamLimits

0x8fac,	// (0x00017bec) bg_touch_area_indi_pane_ParamLimits

0x8fac,	// (0x00017bec) bg_touch_area_indi_pane

0x8fc2,	// (0x00017c02) bg_touch_area_indi_pane_cp01_ParamLimits

0x8fc2,	// (0x00017c02) bg_touch_area_indi_pane_cp01

0x8fd8,	// (0x00017c18) bg_touch_area_indi_pane_cp02_ParamLimits

0x8fd8,	// (0x00017c18) bg_touch_area_indi_pane_cp02

0x8ff0,	// (0x00017c30) bg_touch_area_indi_pane_cp03_ParamLimits

0x8ff0,	// (0x00017c30) bg_touch_area_indi_pane_cp03

0x900a,	// (0x00017c4a) popup_slider_window_g1_ParamLimits

0x9026,	// (0x00017c66) popup_slider_window_g2_ParamLimits

0x9042,	// (0x00017c82) popup_slider_window_g3_ParamLimits

0xfcdd,	// (0x0001e91d) popup_slider_window_g_ParamLimits

0x909e,	// (0x00017cde) popup_slider_window_t1_ParamLimits

0x9112,	// (0x00017d52) small_volume_slider_vertical_pane_ParamLimits

0xecff,	// (0x0001d93f) cell_graphic2_pane_ParamLimits

0xed4e,	// (0x0001d98e) bg_button_pane_cp10_ParamLimits

0xed4e,	// (0x0001d98e) bg_button_pane_cp10

0xed61,	// (0x0001d9a1) bg_button_pane_cp11_ParamLimits

0xed61,	// (0x0001d9a1) bg_button_pane_cp11

0xed74,	// (0x0001d9b4) graphic2_pages_pane_g1_ParamLimits

0xed74,	// (0x0001d9b4) graphic2_pages_pane_g1

0xed8f,	// (0x0001d9cf) graphic2_pages_pane_g2_ParamLimits

0xed8f,	// (0x0001d9cf) graphic2_pages_pane_g2

0x0001,

0xfda1,	// (0x0001e9e1) graphic2_pages_pane_g_ParamLimits

0xfda1,	// (0x0001e9e1) graphic2_pages_pane_g

0xeda7,	// (0x0001d9e7) graphic2_pages_pane_t1_ParamLimits

0xeda7,	// (0x0001d9e7) graphic2_pages_pane_t1

0xedbd,	// (0x0001d9fd) cell_graphic2_control_pane_ParamLimits

0xedbd,	// (0x0001d9fd) cell_graphic2_control_pane

0xedd7,	// (0x0001da17) cell_graphic2_pane_g1_ParamLimits

0xedd7,	// (0x0001da17) cell_graphic2_pane_g1

0xede4,	// (0x0001da24) cell_graphic2_pane_g2_ParamLimits

0xede4,	// (0x0001da24) cell_graphic2_pane_g2

0xedf1,	// (0x0001da31) cell_graphic2_pane_g3_ParamLimits

0xedf1,	// (0x0001da31) cell_graphic2_pane_g3

0xedfe,	// (0x0001da3e) cell_graphic2_pane_g4_ParamLimits

0xedfe,	// (0x0001da3e) cell_graphic2_pane_g4

0xee0b,	// (0x0001da4b) cell_graphic2_pane_g5_ParamLimits

0xee0b,	// (0x0001da4b) cell_graphic2_pane_g5

0x0004,

0xfda6,	// (0x0001e9e6) cell_graphic2_pane_g_ParamLimits

0xfda6,	// (0x0001e9e6) cell_graphic2_pane_g

0xee26,	// (0x0001da66) cell_graphic2_pane_t1_ParamLimits

0xee26,	// (0x0001da66) cell_graphic2_pane_t1

0x4dc7,	// (0x00013a07) grid_highlight_pane_cp11_ParamLimits

0x4dc7,	// (0x00013a07) grid_highlight_pane_cp11

0x302a,	// (0x00011c6a) bg_button_pane_cp05

0xee4f,	// (0x0001da8f) cell_graphic2_control_pane_g1

0x76b1,	// (0x000162f1) bg_touch_area_indi_pane_g1

0xac6c,	// (0x000198ac) aid_cmod_rocker_key_size

0xac76,	// (0x000198b6) aid_cmode_itu_key_size

0xac80,	// (0x000198c0) main_cmode_video_pane

0xac8a,	// (0x000198ca) main_comp_mode_itu_pane

0xac96,	// (0x000198d6) main_comp_mode_rocker_pane

0xaca2,	// (0x000198e2) cell_cmode_rocker_pane_ParamLimits

0xaca2,	// (0x000198e2) cell_cmode_rocker_pane

0xacb4,	// (0x000198f4) cell_cmode_itu_pane_ParamLimits

0xacb4,	// (0x000198f4) cell_cmode_itu_pane

0x302a,	// (0x00011c6a) bg_button_pane_cp06_ParamLimits

0x302a,	// (0x00011c6a) bg_button_pane_cp06

0x794a,	// (0x0001658a) cell_cmode_rocker_pane_g1_ParamLimits

0x794a,	// (0x0001658a) cell_cmode_rocker_pane_g1

0x91b6,	// (0x00017df6) cell_cmode_rocker_pane_g2_ParamLimits

0x91b6,	// (0x00017df6) cell_cmode_rocker_pane_g2

0x0001,

0xfdb6,	// (0x0001e9f6) cell_cmode_rocker_pane_g_ParamLimits

0xfdb6,	// (0x0001e9f6) cell_cmode_rocker_pane_g

0x215d,	// (0x00010d9d) bg_button_pane_cp07

0xacc9,	// (0x00019909) cell_cmode_itu_pane_g1

0xacd2,	// (0x00019912) cell_cmode_itu_pane_t1

0xace0,	// (0x00019920) cell_cmode_itu_pane_t2

0x0001,

0xfdbb,	// (0x0001e9fb) cell_cmode_itu_pane_t

0x93dc,	// (0x0001801c) aid_touch_ctrl_left

0x93e4,	// (0x00018024) aid_touch_ctrl_right

0x215d,	// (0x00010d9d) compa_mode_pane

0xee5c,	// (0x0001da9c) aid_cmod_rocker_key_size_cp

0xee66,	// (0x0001daa6) aid_cmode_itu_key_size_cp

0xacee,	// (0x0001992e) compa_mode_pane_g1

0xacf6,	// (0x00019936) compa_mode_pane_g2

0xacfe,	// (0x0001993e) compa_mode_pane_g3

0x0002,

0xfdc0,	// (0x0001ea00) compa_mode_pane_g

0xee70,	// (0x0001dab0) main_comp_mode_itu_pane_cp

0xee78,	// (0x0001dab8) main_comp_mode_rocker_pane_cp

0xee80,	// (0x0001dac0) cell_cmode_itu_pane_cp_ParamLimits

0xee80,	// (0x0001dac0) cell_cmode_itu_pane_cp

0xee95,	// (0x0001dad5) cell_cmode_rocker_pane_cp_ParamLimits

0xee95,	// (0x0001dad5) cell_cmode_rocker_pane_cp

0x302a,	// (0x00011c6a) bg_button_pane_cp06_cp_ParamLimits

0x302a,	// (0x00011c6a) bg_button_pane_cp06_cp

0x794a,	// (0x0001658a) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x794a,	// (0x0001658a) cell_cmode_rocker_pane_g1_cp

0x76b1,	// (0x000162f1) cell_cmode_rocker_pane_g2_cp

0x215d,	// (0x00010d9d) bg_button_pane_cp07_cp

0xeea7,	// (0x0001dae7) cell_cmode_itu_pane_g1_cp

0xeeb0,	// (0x0001daf0) cell_cmode_itu_pane_t1_cp

0xeeb0,	// (0x0001daf0) cell_cmode_itu_pane_t2_cp

0x62e3,	// (0x00014f23) settings_code_pane_cp2

0x2251,	// (0x00010e91) bg_popup_window_pane_cp3_ParamLimits

0x26c2,	// (0x00011302) heading_pane_cp3_ParamLimits

0x26ce,	// (0x0001130e) listscroll_popup_graphic_pane_ParamLimits

0xe22d,	// (0x0001ce6d) fep_hwr_aid_pane_ParamLimits

0xe5dc,	// (0x0001d21c) aid_touch_sctrl_top_ParamLimits

0xe5e9,	// (0x0001d229) sctrl_sk_top_pane_g1_ParamLimits

0x794a,	// (0x0001658a) sctrl_sk_top_pane_g2_ParamLimits

0xfcf6,	// (0x0001e936) sctrl_sk_top_pane_g_ParamLimits

0xe5f6,	// (0x0001d236) sctrl_sk_top_pane_t1_ParamLimits

0xe5dc,	// (0x0001d21c) aid_touch_sctrl_bottom_ParamLimits

0xe5f6,	// (0x0001d236) sctrl_sk_bottom_pane_t1_ParamLimits

0x9326,	// (0x00017f66) aid_area_touch_clock

0xe7cd,	// (0x0001d40d) aid_vkb2_area_top_pane_cell_ParamLimits

0xe7cd,	// (0x0001d40d) aid_vkb2_area_top_pane_cell

0xe918,	// (0x0001d558) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xe918,	// (0x0001d558) aid_vkb2_area_bottom_pane_cell

0x9891,	// (0x000184d1) popup_char_count_window

0xad06,	// (0x00019946) popup_char_count_window_g1

0xad0f,	// (0x0001994f) popup_char_count_window_g2

0xad18,	// (0x00019958) popup_char_count_window_g3

0x0002,

0xfdc7,	// (0x0001ea07) popup_char_count_window_g

0xad21,	// (0x00019961) popup_char_count_window_t1

0xe69b,	// (0x0001d2db) popup_fep_char_preview_window_ParamLimits

0xe69b,	// (0x0001d2db) popup_fep_char_preview_window

0xe7eb,	// (0x0001d42b) vkb2_top_candi_pane_ParamLimits

0xe7eb,	// (0x0001d42b) vkb2_top_candi_pane

0xeebe,	// (0x0001dafe) cell_vkb2_top_candi_pane_ParamLimits

0xeebe,	// (0x0001dafe) cell_vkb2_top_candi_pane

0x5404,	// (0x00014044) bg_popup_fep_char_preview_window_ParamLimits

0x5404,	// (0x00014044) bg_popup_fep_char_preview_window

0xef0b,	// (0x0001db4b) popup_fep_char_preview_window_t1_ParamLimits

0xef0b,	// (0x0001db4b) popup_fep_char_preview_window_t1

0xad3f,	// (0x0001997f) bg_popup_fep_char_preview_window_g1

0xad37,	// (0x00019977) bg_popup_fep_char_preview_window_g2

0xad2f,	// (0x0001996f) bg_popup_fep_char_preview_window_g3

0xad5f,	// (0x0001999f) bg_popup_fep_char_preview_window_g4

0xad57,	// (0x00019997) bg_popup_fep_char_preview_window_g5

0xef45,	// (0x0001db85) bg_popup_fep_char_preview_window_g6

0xad4f,	// (0x0001998f) bg_popup_fep_char_preview_window_g7

0xad47,	// (0x00019987) bg_popup_fep_char_preview_window_g8

0xad67,	// (0x000199a7) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdce,	// (0x0001ea0e) bg_popup_fep_char_preview_window_g

0x794a,	// (0x0001658a) cell_vkb2_top_candi_pane_g1_ParamLimits

0x794a,	// (0x0001658a) cell_vkb2_top_candi_pane_g1

0x7c9f,	// (0x000168df) cell_vkb2_top_candi_pane_g2_ParamLimits

0x7c9f,	// (0x000168df) cell_vkb2_top_candi_pane_g2

0x7cc0,	// (0x00016900) cell_vkb2_top_candi_pane_g3_ParamLimits

0x7cc0,	// (0x00016900) cell_vkb2_top_candi_pane_g3

0xef4d,	// (0x0001db8d) cell_vkb2_top_candi_pane_g4_ParamLimits

0xef4d,	// (0x0001db8d) cell_vkb2_top_candi_pane_g4

0xabfa,	// (0x0001983a) cell_vkb2_top_candi_pane_g5_ParamLimits

0xabfa,	// (0x0001983a) cell_vkb2_top_candi_pane_g5

0x91b6,	// (0x00017df6) cell_vkb2_top_candi_pane_g6_ParamLimits

0x91b6,	// (0x00017df6) cell_vkb2_top_candi_pane_g6

0x0005,

0xfde1,	// (0x0001ea21) cell_vkb2_top_candi_pane_g_ParamLimits

0xfde1,	// (0x0001ea21) cell_vkb2_top_candi_pane_g

0xef6e,	// (0x0001dbae) cell_vkb2_top_candi_pane_t1

0xe04a,	// (0x0001cc8a) aid_size_touch_slider_mark_ParamLimits

0xe04a,	// (0x0001cc8a) aid_size_touch_slider_mark

0xec61,	// (0x0001d8a1) grid_graphic2_catg_pane_ParamLimits

0xec61,	// (0x0001d8a1) grid_graphic2_catg_pane

0xecdb,	// (0x0001d91b) popup_grid_graphic2_window_t1_ParamLimits

0xecdb,	// (0x0001d91b) popup_grid_graphic2_window_t1

0xeced,	// (0x0001d92d) popup_grid_graphic2_window_t2_ParamLimits

0xeced,	// (0x0001d92d) popup_grid_graphic2_window_t2

0x0001,

0xfd9c,	// (0x0001e9dc) popup_grid_graphic2_window_t_ParamLimits

0xfd9c,	// (0x0001e9dc) popup_grid_graphic2_window_t

0x302a,	// (0x00011c6a) bg_button_pane_cp05_ParamLimits

0xee4f,	// (0x0001da8f) cell_graphic2_control_pane_g1_ParamLimits

0xef8d,	// (0x0001dbcd) cell_graphic2_catg_pane_ParamLimits

0xef8d,	// (0x0001dbcd) cell_graphic2_catg_pane

0x215d,	// (0x00010d9d) bg_button_pane_cp12

0xef9f,	// (0x0001dbdf) cell_graphic2_catg_pane_g1

0x92f2,	// (0x00017f32) cell_tb_ext_pane_t1_ParamLimits

0xea35,	// (0x0001d675) vkb2_top_cell_right_narrow_pane_ParamLimits

0xea35,	// (0x0001d675) vkb2_top_cell_right_narrow_pane

0xea4d,	// (0x0001d68d) vkb2_top_cell_right_wide_pane_ParamLimits

0xea4d,	// (0x0001d68d) vkb2_top_cell_right_wide_pane

0x7ce1,	// (0x00016921) bg_vkb2_func_pane_ParamLimits

0x7ce1,	// (0x00016921) bg_vkb2_func_pane

0xeabe,	// (0x0001d6fe) vkb2_top_cell_left_pane_g1_ParamLimits

0x7ce1,	// (0x00016921) bg_vkb2_fuc_pane_cp03_ParamLimits

0x7ce1,	// (0x00016921) bg_vkb2_fuc_pane_cp03

0xeb1c,	// (0x0001d75c) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x4cbd,	// (0x000138fd) bg_vkb2_func_pane_g1

0x4cb5,	// (0x000138f5) bg_vkb2_func_pane_g2

0x4cc5,	// (0x00013905) bg_vkb2_func_pane_g3

0x4ccd,	// (0x0001390d) bg_vkb2_func_pane_g4

0x4cd5,	// (0x00013915) bg_vkb2_func_pane_g5

0x4cdd,	// (0x0001391d) bg_vkb2_func_pane_g6

0x4ced,	// (0x0001392d) bg_vkb2_func_pane_g7

0x4ce5,	// (0x00013925) bg_vkb2_func_pane_g8

0x4cad,	// (0x000138ed) bg_vkb2_func_pane_g9

0x0008,

0xfdee,	// (0x0001ea2e) bg_vkb2_func_pane_g

0x7ce1,	// (0x00016921) bg_vkb2_fuc_pane_cp01_ParamLimits

0x7ce1,	// (0x00016921) bg_vkb2_fuc_pane_cp01

0xeabe,	// (0x0001d6fe) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0xeabe,	// (0x0001d6fe) vkb2_top_cell_right_wide_pane_g1

0x7ce1,	// (0x00016921) bg_vkb2_fuc_pane_cp02_ParamLimits

0x7ce1,	// (0x00016921) bg_vkb2_fuc_pane_cp02

0xeb1c,	// (0x0001d75c) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0xeb1c,	// (0x0001d75c) vkb2_top_cell_right_narrow_pane_g1

0x8f1e,	// (0x00017b5e) aid_touch_area_decrease_ParamLimits

0x8f1e,	// (0x00017b5e) aid_touch_area_decrease

0x8f42,	// (0x00017b82) aid_touch_area_increase_ParamLimits

0x8f42,	// (0x00017b82) aid_touch_area_increase

0x8f4e,	// (0x00017b8e) aid_touch_area_mute_ParamLimits

0x8f4e,	// (0x00017b8e) aid_touch_area_mute

0x8f72,	// (0x00017bb2) aid_touch_area_slider_ParamLimits

0x8f72,	// (0x00017bb2) aid_touch_area_slider

0x905e,	// (0x00017c9e) popup_slider_window_g4_ParamLimits

0x905e,	// (0x00017c9e) popup_slider_window_g4

0x906a,	// (0x00017caa) popup_slider_window_g5_ParamLimits

0x906a,	// (0x00017caa) popup_slider_window_g5

0x908c,	// (0x00017ccc) popup_slider_window_g6_ParamLimits

0x908c,	// (0x00017ccc) popup_slider_window_g6

0x90cc,	// (0x00017d0c) popup_slider_window_t2_ParamLimits

0x90cc,	// (0x00017d0c) popup_slider_window_t2

0x0001,

0xfcea,	// (0x0001e92a) popup_slider_window_t_ParamLimits

0xfcea,	// (0x0001e92a) popup_slider_window_t

0x90e4,	// (0x00017d24) slider_pane_ParamLimits

0x90e4,	// (0x00017d24) slider_pane

0xad6f,	// (0x000199af) slider_pane_g1_ParamLimits

0xad6f,	// (0x000199af) slider_pane_g1

0xad83,	// (0x000199c3) slider_pane_g2_ParamLimits

0xad83,	// (0x000199c3) slider_pane_g2

0xad99,	// (0x000199d9) slider_pane_g3_ParamLimits

0xad99,	// (0x000199d9) slider_pane_g3

0x0003,

0xfe01,	// (0x0001ea41) slider_pane_g_ParamLimits

0xfe01,	// (0x0001ea41) slider_pane_g

0x46c5,	// (0x00013305) popup_tb_float_extension_window_ParamLimits

0x46c5,	// (0x00013305) popup_tb_float_extension_window

0xadc5,	// (0x00019a05) aid_size_cell_tb_float_ext

0x215d,	// (0x00010d9d) bg_popup_sub_window_cp28

0xadd1,	// (0x00019a11) grid_tb_float_ext_pane

0xaddb,	// (0x00019a1b) cell_tb_float_ext_pane_ParamLimits

0xaddb,	// (0x00019a1b) cell_tb_float_ext_pane

0xadf5,	// (0x00019a35) cell_tb_float_ext_pane_g1

0xadfe,	// (0x00019a3e) grid_highlight_pane_cp12

0xe360,	// (0x0001cfa0) cell_last_hwr_side_pane_ParamLimits

0xe360,	// (0x0001cfa0) cell_last_hwr_side_pane

0x76b1,	// (0x000162f1) cell_last_hwr_side_pane_g1

0xae07,	// (0x00019a47) cell_last_hwr_side_pane_g2

0x0001,

0xfe0a,	// (0x0001ea4a) cell_last_hwr_side_pane_g

0xe9e4,	// (0x0001d624) vkb2_area_bottom_space_btn_pane_ParamLimits

0xe9e4,	// (0x0001d624) vkb2_area_bottom_space_btn_pane

0x794a,	// (0x0001658a) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xac40,	// (0x00019880) vkb2_cell_t_keypad_pane_t1_ParamLimits

0xef6e,	// (0x0001dbae) cell_vkb2_top_candi_pane_t1_ParamLimits

0xefa8,	// (0x0001dbe8) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0xefa8,	// (0x0001dbe8) vkb2_area_bottom_space_btn_pane_g1

0xefe2,	// (0x0001dc22) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0xefe2,	// (0x0001dc22) vkb2_area_bottom_space_btn_pane_g2

0xf018,	// (0x0001dc58) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0xf018,	// (0x0001dc58) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe0f,	// (0x0001ea4f) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe0f,	// (0x0001ea4f) vkb2_area_bottom_space_btn_pane_g

0xe2d4,	// (0x0001cf14) cel_fep_hwr_func_pane_ParamLimits

0xe2d4,	// (0x0001cf14) cel_fep_hwr_func_pane

0xe310,	// (0x0001cf50) cell_hwr_side_button_pane_ParamLimits

0xe310,	// (0x0001cf50) cell_hwr_side_button_pane

0x9326,	// (0x00017f66) aid_area_touch_clock_ParamLimits

0x24f4,	// (0x00011134) bg_uniindi_top_pane_ParamLimits

0x9338,	// (0x00017f78) uniindi_top_pane_g1_ParamLimits

0x934e,	// (0x00017f8e) uniindi_top_pane_g2_ParamLimits

0x935a,	// (0x00017f9a) uniindi_top_pane_g3_ParamLimits

0x936b,	// (0x00017fab) uniindi_top_pane_g4_ParamLimits

0xfd22,	// (0x0001e962) uniindi_top_pane_g_ParamLimits

0x9378,	// (0x00017fb8) uniindi_top_pane_t1_ParamLimits

0x24f4,	// (0x00011134) bg_vkb2_func_pane_cp01_ParamLimits

0x24f4,	// (0x00011134) bg_vkb2_func_pane_cp01

0xae10,	// (0x00019a50) cel_fep_hwr_func_pane_g1_ParamLimits

0xae10,	// (0x00019a50) cel_fep_hwr_func_pane_g1

0x24f4,	// (0x00011134) bg_vkb2_func_pane_cp02_ParamLimits

0x24f4,	// (0x00011134) bg_vkb2_func_pane_cp02

0xae10,	// (0x00019a50) cell_hwr_side_button_pane_g1_ParamLimits

0xae10,	// (0x00019a50) cell_hwr_side_button_pane_g1

0x4b0e,	// (0x0001374e) status_pane_g4_ParamLimits

0x4b0e,	// (0x0001374e) status_pane_g4

0x4b26,	// (0x00013766) status_pane_t1

0x73b3,	// (0x00015ff3) form2_midp_gauge_slider_cont_pane

0x73bb,	// (0x00015ffb) form2_midp_gauge_slider_pane_t1_ParamLimits

0x73cd,	// (0x0001600d) form2_midp_gauge_slider_pane_t2_ParamLimits

0x73df,	// (0x0001601f) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf5,	// (0x0001e735) form2_midp_gauge_slider_pane_t_ParamLimits

0x73f1,	// (0x00016031) form2_midp_slider_pane_ParamLimits

0xe65b,	// (0x0001d29b) aid_size_cell_func_vkb2_ParamLimits

0xe65b,	// (0x0001d29b) aid_size_cell_func_vkb2

0xadb1,	// (0x000199f1) slider_pane_g4_ParamLimits

0xadb1,	// (0x000199f1) slider_pane_g4

0xf062,	// (0x0001dca2) form2_midp_gauge_slider_pane_t2_cp01

0xf070,	// (0x0001dcb0) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xf070,	// (0x0001dcb0) form2_midp_gauge_slider_pane_t3_cp01

0xf08d,	// (0x0001dccd) form2_midp_slider_pane_cp01

0x215d,	// (0x00010d9d) navi_smil_pane

0xae40,	// (0x00019a80) navi_smil_pane_g1

0xae48,	// (0x00019a88) navi_smil_pane_t1

0xae1e,	// (0x00019a5e) form2_midp_slider_pane_g1

0xae27,	// (0x00019a67) form2_midp_slider_pane_g2

0xae2f,	// (0x00019a6f) form2_midp_slider_pane_g3

0xae1e,	// (0x00019a5e) form2_midp_slider_pane_g4

0xf096,	// (0x0001dcd6) form2_midp_slider_pane_g5

0x0004,

0xfe18,	// (0x0001ea58) form2_midp_slider_pane_g

0xf052,	// (0x0001dc92) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0xf052,	// (0x0001dc92) vkb2_area_bottom_space_btn_pane_g4

0x4944,	// (0x00013584) lc0_navi_pane_ParamLimits

0x4944,	// (0x00013584) lc0_navi_pane

0x49ba,	// (0x000135fa) lc0_stat_indi_pane_ParamLimits

0x49ba,	// (0x000135fa) lc0_stat_indi_pane

0x49d1,	// (0x00013611) ls0_title_pane_ParamLimits

0x49d1,	// (0x00013611) ls0_title_pane

0x302a,	// (0x00011c6a) bg_popup_sub_pane_cp14_ParamLimits

0x930d,	// (0x00017f4d) list_uniindi_pane_ParamLimits

0x9319,	// (0x00017f59) uniindi_top_pane_ParamLimits

0x93b4,	// (0x00017ff4) list_single_uniindi_pane_g1_ParamLimits

0x93c7,	// (0x00018007) list_single_uniindi_pane_t1_ParamLimits

0xf09f,	// (0x0001dcdf) lc0_stat_clock_pane_ParamLimits

0xf09f,	// (0x0001dcdf) lc0_stat_clock_pane

0xf0ac,	// (0x0001dcec) lc0_stat_indi_pane_g1_ParamLimits

0xf0ac,	// (0x0001dcec) lc0_stat_indi_pane_g1

0xf0b9,	// (0x0001dcf9) lc0_stat_indi_pane_g2_ParamLimits

0xf0b9,	// (0x0001dcf9) lc0_stat_indi_pane_g2

0x0001,

0xfe23,	// (0x0001ea63) lc0_stat_indi_pane_g_ParamLimits

0xfe23,	// (0x0001ea63) lc0_stat_indi_pane_g

0xf0c6,	// (0x0001dd06) lc0_uni_indicator_pane_ParamLimits

0xf0c6,	// (0x0001dd06) lc0_uni_indicator_pane

0xf0d3,	// (0x0001dd13) ls0_title_pane_g1_ParamLimits

0xf0d3,	// (0x0001dd13) ls0_title_pane_g1

0xf0e7,	// (0x0001dd27) ls0_title_pane_t1_ParamLimits

0xf0e7,	// (0x0001dd27) ls0_title_pane_t1

0xf11d,	// (0x0001dd5d) lc0_uni_indicator_pane_g1_ParamLimits

0xf11d,	// (0x0001dd5d) lc0_uni_indicator_pane_g1

0xae56,	// (0x00019a96) lc0_stat_clock_pane_t1

0x215d,	// (0x00010d9d) main_ai5_pane

0xae64,	// (0x00019aa4) ai5_sk_pane_ParamLimits

0xae64,	// (0x00019aa4) ai5_sk_pane

0xf133,	// (0x0001dd73) cell_ai5_widget_pane_ParamLimits

0xf133,	// (0x0001dd73) cell_ai5_widget_pane

0xae71,	// (0x00019ab1) aid_size_cell_widget_grid

0xae85,	// (0x00019ac5) bg_ai5_widget_pane_ParamLimits

0xae85,	// (0x00019ac5) bg_ai5_widget_pane

0xf1dd,	// (0x0001de1d) cell_ai5_widget_pane_g2

0xf1ed,	// (0x0001de2d) cell_ai5_widget_pane_g3

0xf20c,	// (0x0001de4c) cell_ai5_widget_pane_g4

0xf218,	// (0x0001de58) cell_ai5_widget_pane_g5

0xf224,	// (0x0001de64) cell_ai5_widget_pane_g6

0xf230,	// (0x0001de70) cell_ai5_widget_pane_g7

0xf278,	// (0x0001deb8) cell_ai5_widget_pane_t1_ParamLimits

0xf278,	// (0x0001deb8) cell_ai5_widget_pane_t1

0xf295,	// (0x0001ded5) cell_ai5_widget_pane_t2_ParamLimits

0xf295,	// (0x0001ded5) cell_ai5_widget_pane_t2

0xf2ad,	// (0x0001deed) cell_ai5_widget_pane_t3_ParamLimits

0xf2ad,	// (0x0001deed) cell_ai5_widget_pane_t3

0xf2c5,	// (0x0001df05) cell_ai5_widget_pane_t4_ParamLimits

0xf2c5,	// (0x0001df05) cell_ai5_widget_pane_t4

0xf2df,	// (0x0001df1f) cell_ai5_widget_pane_t5_ParamLimits

0xf2df,	// (0x0001df1f) cell_ai5_widget_pane_t5

0xae91,	// (0x00019ad1) cell_ai5_widget_pane_t6_ParamLimits

0xae91,	// (0x00019ad1) cell_ai5_widget_pane_t6

0xaea3,	// (0x00019ae3) cell_ai5_widget_pane_t7_ParamLimits

0xaea3,	// (0x00019ae3) cell_ai5_widget_pane_t7

0xf2fe,	// (0x0001df3e) cell_ai5_widget_pane_t8_ParamLimits

0xf2fe,	// (0x0001df3e) cell_ai5_widget_pane_t8

0x0009,

0xfe3d,	// (0x0001ea7d) cell_ai5_widget_pane_t_ParamLimits

0xfe3d,	// (0x0001ea7d) cell_ai5_widget_pane_t

0xf34a,	// (0x0001df8a) grid_ai5_widget_pane

0x302a,	// (0x00011c6a) highlight_cell_ai5_widget_pane_ParamLimits

0x302a,	// (0x00011c6a) highlight_cell_ai5_widget_pane

0xf360,	// (0x0001dfa0) ai5_sk_left_pane

0xf36a,	// (0x0001dfaa) ai5_sk_middle_pane

0xf374,	// (0x0001dfb4) ai5_sk_right_pane

0xaebc,	// (0x00019afc) bg_ai5_widget_pane_g1_ParamLimits

0xaebc,	// (0x00019afc) bg_ai5_widget_pane_g1

0xaec8,	// (0x00019b08) bg_ai5_widget_pane_g2_ParamLimits

0xaec8,	// (0x00019b08) bg_ai5_widget_pane_g2

0xaed4,	// (0x00019b14) bg_ai5_widget_pane_g3_ParamLimits

0xaed4,	// (0x00019b14) bg_ai5_widget_pane_g3

0xaee0,	// (0x00019b20) bg_ai5_widget_pane_g4_ParamLimits

0xaee0,	// (0x00019b20) bg_ai5_widget_pane_g4

0xaeec,	// (0x00019b2c) bg_ai5_widget_pane_g5_ParamLimits

0xaeec,	// (0x00019b2c) bg_ai5_widget_pane_g5

0xaef8,	// (0x00019b38) bg_ai5_widget_pane_g6_ParamLimits

0xaef8,	// (0x00019b38) bg_ai5_widget_pane_g6

0xaf04,	// (0x00019b44) bg_ai5_widget_pane_g7_ParamLimits

0xaf04,	// (0x00019b44) bg_ai5_widget_pane_g7

0xaf10,	// (0x00019b50) bg_ai5_widget_pane_g8_ParamLimits

0xaf10,	// (0x00019b50) bg_ai5_widget_pane_g8

0xaf1c,	// (0x00019b5c) bg_ai5_widget_pane_g9_ParamLimits

0xaf1c,	// (0x00019b5c) bg_ai5_widget_pane_g9

0x0008,

0xfe52,	// (0x0001ea92) bg_ai5_widget_pane_g_ParamLimits

0xfe52,	// (0x0001ea92) bg_ai5_widget_pane_g

0xaf4f,	// (0x00019b8f) cell_shortcut_ai5_widget_pane_ParamLimits

0xaf4f,	// (0x00019b8f) cell_shortcut_ai5_widget_pane

0x2334,	// (0x00010f74) bg_cell_shortcut_ai5_widget_pane

0xaf60,	// (0x00019ba0) cell_grid_ai5_widget_pane_g1

0xaf69,	// (0x00019ba9) highlight_cell_shortcut_ai5_widget_pane

0x4cb5,	// (0x000138f5) ai5_sk_left_pane_g1

0xaf71,	// (0x00019bb1) ai5_sk_left_pane_g2

0xaf79,	// (0x00019bb9) ai5_sk_left_pane_g3

0xaf81,	// (0x00019bc1) ai5_sk_left_pane_g4

0x0003,

0xfe65,	// (0x0001eaa5) ai5_sk_left_pane_g

0xaf89,	// (0x00019bc9) ai5_sk_left_pane_t1

0x4cbd,	// (0x000138fd) ai5_sk_right_pane_g1

0xaf97,	// (0x00019bd7) ai5_sk_right_pane_g2

0xaf9f,	// (0x00019bdf) ai5_sk_right_pane_g3

0xafa7,	// (0x00019be7) ai5_sk_right_pane_g4

0x0003,

0xfe6e,	// (0x0001eaae) ai5_sk_right_pane_g

0xafaf,	// (0x00019bef) ai5_sk_right_pane_t1

0x4cbd,	// (0x000138fd) ai5_sk_middle_pane_g1

0x4cb5,	// (0x000138f5) ai5_sk_middle_pane_g2

0x4cd5,	// (0x00013915) ai5_sk_middle_pane_g3

0xaf9f,	// (0x00019bdf) ai5_sk_middle_pane_g4

0xaf79,	// (0x00019bb9) ai5_sk_middle_pane_g5

0xafbd,	// (0x00019bfd) ai5_sk_middle_pane_g6

0xf37e,	// (0x0001dfbe) ai5_sk_middle_pane_g7

0x0006,

0xfe77,	// (0x0001eab7) ai5_sk_middle_pane_g

0x47d0,	// (0x00013410) aid_touch_area_size_lc0_ParamLimits

0x47d0,	// (0x00013410) aid_touch_area_size_lc0

0xe45f,	// (0x0001d09f) cell_hwr_candidate_pane_t1_ParamLimits

0x47ec,	// (0x0001342c) aid_touch_navi_pane

0x4ab8,	// (0x000136f8) status_dt_navi_pane_ParamLimits

0x4ab8,	// (0x000136f8) status_dt_navi_pane

0x4ac5,	// (0x00013705) status_dt_sta_pane_ParamLimits

0x4ac5,	// (0x00013705) status_dt_sta_pane

0xf386,	// (0x0001dfc6) dt_sta_controll_pane

0xf393,	// (0x0001dfd3) dt_sta_indi_pane

0xf3a4,	// (0x0001dfe4) dt_sta_title_pane

0x24f4,	// (0x00011134) bg_dt_sta_indi_pane_ParamLimits

0x24f4,	// (0x00011134) bg_dt_sta_indi_pane

0xf3b7,	// (0x0001dff7) dt_sta_battery_pane

0xf3bf,	// (0x0001dfff) dt_sta_indi_pane_g1

0xafc5,	// (0x00019c05) dt_sta_indi_pane_g2

0xafce,	// (0x00019c0e) dt_sta_indi_pane_g3

0x0002,

0xfe86,	// (0x0001eac6) dt_sta_indi_pane_g

0xafd7,	// (0x00019c17) dt_sta_signal_pane

0x302a,	// (0x00011c6a) bg_dt_sta_title_pane_ParamLimits

0x302a,	// (0x00011c6a) bg_dt_sta_title_pane

0x5bd2,	// (0x00014812) dt_sta_title_pane_g1

0xf3c8,	// (0x0001e008) dt_sta_title_pane_t1_ParamLimits

0xf3c8,	// (0x0001e008) dt_sta_title_pane_t1

0x215d,	// (0x00010d9d) bg_dt_sta_control_pane

0xf3dd,	// (0x0001e01d) dt_sta_controll_pane_g1

0xafe0,	// (0x00019c20) bg_dt_sta_title_pane_g1

0xafe9,	// (0x00019c29) bg_dt_sta_title_pane_g2

0xaff2,	// (0x00019c32) bg_dt_sta_title_pane_g3

0x0002,

0xfe8d,	// (0x0001eacd) bg_dt_sta_title_pane_g

0x76b1,	// (0x000162f1) bg_dt_sta_indi_pane_g1

0xaffb,	// (0x00019c3b) dt_sta_signal_pane_g1

0xb003,	// (0x00019c43) dt_sta_signal_pane_g2

0x0001,

0xfe94,	// (0x0001ead4) dt_sta_signal_pane_g

0xb00b,	// (0x00019c4b) dt_sta_battery_pane_g1

0xb014,	// (0x00019c54) dt_sta_battery_pane_t1

0x76b1,	// (0x000162f1) bg_dt_sta_control_pane_g1

0x38eb,	// (0x0001252b) fep_china_uni_eep_pane

0x38f3,	// (0x00012533) fep_china_uni_entry_pane_ParamLimits

0x3903,	// (0x00012543) popup_fep_china_uni_window_g1_ParamLimits

0x3913,	// (0x00012553) popup_fep_china_uni_window_g2_ParamLimits

0x3913,	// (0x00012553) popup_fep_china_uni_window_g2

0x0001,

0xf730,	// (0x0001e370) popup_fep_china_uni_window_g_ParamLimits

0xf730,	// (0x0001e370) popup_fep_china_uni_window_g

0xb023,	// (0x00019c63) fep_china_uni_eep_pane_g1

0xb02b,	// (0x00019c6b) fep_china_uni_eep_pane_t1

0xae37,	// (0x00019a77) aid_touch_area_size_smil_player

0x493c,	// (0x0001357c) lc0_clock_pane

0x4b1a,	// (0x0001375a) status_pane_g5_ParamLimits

0x4b1a,	// (0x0001375a) status_pane_g5

0x4392,	// (0x00012fd2) popup_keymap_window

0x4ada,	// (0x0001371a) status_icon_pane

0xf1ed,	// (0x0001de2d) cell_ai5_widget_pane_g3_ParamLimits

0xf20c,	// (0x0001de4c) cell_ai5_widget_pane_g4_ParamLimits

0xf218,	// (0x0001de58) cell_ai5_widget_pane_g5_ParamLimits

0xf23c,	// (0x0001de7c) cell_ai5_widget_pane_g8_ParamLimits

0xf23c,	// (0x0001de7c) cell_ai5_widget_pane_g8

0xf250,	// (0x0001de90) cell_ai5_widget_pane_g9_ParamLimits

0xf250,	// (0x0001de90) cell_ai5_widget_pane_g9

0xf264,	// (0x0001dea4) cell_ai5_widget_pane_g10_ParamLimits

0xf264,	// (0x0001dea4) cell_ai5_widget_pane_g10

0xb03a,	// (0x00019c7a) status_icon_pane_g1

0x215d,	// (0x00010d9d) bg_popup_sub_pane_cp13

0xb042,	// (0x00019c82) popup_keymap_window_t1

0x4162,	// (0x00012da2) control_pane_g6_ParamLimits

0x4162,	// (0x00012da2) control_pane_g6

0x4155,	// (0x00012d95) control_pane_g7_ParamLimits

0x4155,	// (0x00012d95) control_pane_g7

0x4148,	// (0x00012d88) control_pane_g8_ParamLimits

0x4148,	// (0x00012d88) control_pane_g8

0xf386,	// (0x0001dfc6) dt_sta_controll_pane_ParamLimits

0xf393,	// (0x0001dfd3) dt_sta_indi_pane_ParamLimits

0xf3a4,	// (0x0001dfe4) dt_sta_title_pane_ParamLimits

0x29f6,	// (0x00011636) aid_size_touch_scroll_bar_cale

0xd597,	// (0x0001c1d7) popup_discreet_window_ParamLimits

0xd597,	// (0x0001c1d7) popup_discreet_window

0xd611,	// (0x0001c251) popup_sk_window

0x5404,	// (0x00014044) bg_popup_sub_pane_cp28_ParamLimits

0x5404,	// (0x00014044) bg_popup_sub_pane_cp28

0xb050,	// (0x00019c90) popup_discreet_window_g1_ParamLimits

0xb050,	// (0x00019c90) popup_discreet_window_g1

0xb070,	// (0x00019cb0) popup_discreet_window_t1_ParamLimits

0xb070,	// (0x00019cb0) popup_discreet_window_t1

0xb08e,	// (0x00019cce) popup_discreet_window_t2_ParamLimits

0xb08e,	// (0x00019cce) popup_discreet_window_t2

0x0002,

0xfe99,	// (0x0001ead9) popup_discreet_window_t_ParamLimits

0xfe99,	// (0x0001ead9) popup_discreet_window_t

0xf3e6,	// (0x0001e026) popup_sk_window_g1

0xf3f0,	// (0x0001e030) popup_sk_window_g2

0x0001,

0xfea0,	// (0x0001eae0) popup_sk_window_g

0xb0ee,	// (0x00019d2e) popup_sk_window_t1

0xb0e0,	// (0x00019d20) popup_sk_window_t1_copy1

0xf1dd,	// (0x0001de1d) cell_ai5_widget_pane_g2_ParamLimits

0xf310,	// (0x0001df50) cell_ai5_widget_pane_t9_ParamLimits

0xf310,	// (0x0001df50) cell_ai5_widget_pane_t9

0x215d,	// (0x00010d9d) main_fep_fshwr2_pane

0xf3fa,	// (0x0001e03a) aid_fshwr2_btn_pane

0xf402,	// (0x0001e042) aid_fshwr2_syb_pane

0xf40a,	// (0x0001e04a) aid_fshwr2_txt_pane

0xf412,	// (0x0001e052) fshwr2_func_candi_pane

0xf41e,	// (0x0001e05e) fshwr2_hwr_syb_pane

0xf42a,	// (0x0001e06a) fshwr2_icf_pane

0x215d,	// (0x00010d9d) fshwr2_icf_bg_pane

0xf434,	// (0x0001e074) fshwr2_icf_pane_t1_ParamLimits

0xf434,	// (0x0001e074) fshwr2_icf_pane_t1

0x76b1,	// (0x000162f1) fshwr2_func_candi_pane_g1

0xb110,	// (0x00019d50) fshwr2_func_candi_row_pane_ParamLimits

0xb110,	// (0x00019d50) fshwr2_func_candi_row_pane

0xf44b,	// (0x0001e08b) cell_fshwr2_syb_pane_ParamLimits

0xf44b,	// (0x0001e08b) cell_fshwr2_syb_pane

0x794a,	// (0x0001658a) fshwr2_hwr_syb_pane_g1_ParamLimits

0x794a,	// (0x0001658a) fshwr2_hwr_syb_pane_g1

0x215d,	// (0x00010d9d) bg_popup_call_pane_cp01

0xb121,	// (0x00019d61) fshwr2_func_candi_cell_pane_ParamLimits

0xb121,	// (0x00019d61) fshwr2_func_candi_cell_pane

0xb152,	// (0x00019d92) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xb152,	// (0x00019d92) fshwr2_func_candi_cell_bg_pane

0xb16c,	// (0x00019dac) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xb16c,	// (0x00019dac) fshwr2_func_candi_cell_pane_g1

0xb18c,	// (0x00019dcc) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xb18c,	// (0x00019dcc) fshwr2_func_candi_cell_pane_t1

0x215d,	// (0x00010d9d) bg_button_pane_cp08

0x3e75,	// (0x00012ab5) cell_fshwr2_syb_bg_pane

0xf467,	// (0x0001e0a7) cell_fshwr2_syb_bg_pane_g1

0xb19f,	// (0x00019ddf) cell_fshwr2_syb_bg_pane_t1

0x302a,	// (0x00011c6a) main_tmo_pane

0x5f15,	// (0x00014b55) uni_indicator_pane_g1_ParamLimits

0x5f2a,	// (0x00014b6a) uni_indicator_pane_g2_ParamLimits

0x5f40,	// (0x00014b80) uni_indicator_pane_g3_ParamLimits

0x5f56,	// (0x00014b96) uni_indicator_pane_g4_ParamLimits

0x5f56,	// (0x00014b96) uni_indicator_pane_g4

0x5f6a,	// (0x00014baa) uni_indicator_pane_g5_ParamLimits

0x5f6a,	// (0x00014baa) uni_indicator_pane_g5

0x5f7e,	// (0x00014bbe) uni_indicator_pane_g6_ParamLimits

0x5f7e,	// (0x00014bbe) uni_indicator_pane_g6

0xf921,	// (0x0001e561) uni_indicator_pane_g_ParamLimits

0x8f00,	// (0x00017b40) popup_tmo_note_window_ParamLimits

0x8f00,	// (0x00017b40) popup_tmo_note_window

0x215d,	// (0x00010d9d) fshwr2_bg_pane

0xb17d,	// (0x00019dbd) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xb17d,	// (0x00019dbd) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfea5,	// (0x0001eae5) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfea5,	// (0x0001eae5) fshwr2_func_candi_cell_pane_g

0x76b1,	// (0x000162f1) bg_popup_window_pane_cp01

0xb1ae,	// (0x00019dee) bg_popup_window_pane_g1_cp01

0xb1b7,	// (0x00019df7) bg_popup_window_pane_cp22_ParamLimits

0xb1b7,	// (0x00019df7) bg_popup_window_pane_cp22

0xb1c5,	// (0x00019e05) listscroll_tmo_link_pane_ParamLimits

0xb1c5,	// (0x00019e05) listscroll_tmo_link_pane

0xb205,	// (0x00019e45) popup_tmo_note_window_g1_ParamLimits

0xb205,	// (0x00019e45) popup_tmo_note_window_g1

0xb212,	// (0x00019e52) tmo_note_info_pane_ParamLimits

0xb212,	// (0x00019e52) tmo_note_info_pane

0xf46f,	// (0x0001e0af) list_tmo_note_info_pane_g1_ParamLimits

0xf46f,	// (0x0001e0af) list_tmo_note_info_pane_g1

0xb22c,	// (0x00019e6c) list_tmo_note_info_pane_g2_ParamLimits

0xb22c,	// (0x00019e6c) list_tmo_note_info_pane_g2

0x0001,

0xfeaa,	// (0x0001eaea) list_tmo_note_info_pane_g_ParamLimits

0xfeaa,	// (0x0001eaea) list_tmo_note_info_pane_g

0xb248,	// (0x00019e88) list_tmo_note_info_text_pane_ParamLimits

0xb248,	// (0x00019e88) list_tmo_note_info_text_pane

0xb28a,	// (0x00019eca) list_tmo_link_pane

0xb297,	// (0x00019ed7) scroll_pane_cp20

0xb2a4,	// (0x00019ee4) list_single_tmo_link_pane_ParamLimits

0xb2a4,	// (0x00019ee4) list_single_tmo_link_pane

0xb2b4,	// (0x00019ef4) list_single_tmo_link_pane_t1

0xb2c2,	// (0x00019f02) list_tmo_note_info_text_pane_t1_ParamLimits

0xb2c2,	// (0x00019f02) list_tmo_note_info_text_pane_t1

0x326d,	// (0x00011ead) aid_size_touch_scroll_bar_cp01_ParamLimits

0x326d,	// (0x00011ead) aid_size_touch_scroll_bar_cp01

0xc953,	// (0x0001b593) aid_size_touch_slider_marker

0xd5f9,	// (0x0001c239) popup_settings_window_ParamLimits

0xd5f9,	// (0x0001c239) popup_settings_window

0xcb1b,	// (0x0001b75b) popup_candi_list_indi_window

0x47ec,	// (0x0001342c) aid_touch_navi_pane_ParamLimits

0xe5b0,	// (0x0001d1f0) rs_clock_indi_pane

0xe5b9,	// (0x0001d1f9) sctrl_sk_bottom_pane_ParamLimits

0xe5ca,	// (0x0001d20a) sctrl_sk_top_pane_ParamLimits

0xe6b5,	// (0x0001d2f5) popup_fep_tooltip_window

0xae71,	// (0x00019ab1) aid_size_cell_widget_grid_ParamLimits

0xf1d1,	// (0x0001de11) cell_ai5_widget_pane_g1_ParamLimits

0xf1d1,	// (0x0001de11) cell_ai5_widget_pane_g1

0xf224,	// (0x0001de64) cell_ai5_widget_pane_g6_ParamLimits

0xf230,	// (0x0001de70) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe28,	// (0x0001ea68) cell_ai5_widget_pane_g_ParamLimits

0xfe28,	// (0x0001ea68) cell_ai5_widget_pane_g

0xf334,	// (0x0001df74) cell_ai5_widget_pane_t10_ParamLimits

0xf334,	// (0x0001df74) cell_ai5_widget_pane_t10

0xf34a,	// (0x0001df8a) grid_ai5_widget_pane_ParamLimits

0xaf28,	// (0x00019b68) cell_contacts_ai5_widget_pane_ParamLimits

0xaf28,	// (0x00019b68) cell_contacts_ai5_widget_pane

0xb0a3,	// (0x00019ce3) popup_discreet_window_t3_ParamLimits

0xb0a3,	// (0x00019ce3) popup_discreet_window_t3

0xb0fc,	// (0x00019d3c) popup_fshwr2_char_preview_window_ParamLimits

0xb0fc,	// (0x00019d3c) popup_fshwr2_char_preview_window

0xf486,	// (0x0001e0c6) tmo_note_info_pane_t1

0xf49b,	// (0x0001e0db) tmo_note_info_pane_t2

0xf4b4,	// (0x0001e0f4) tmo_note_info_pane_t3

0xb266,	// (0x00019ea6) tmo_note_info_pane_t4

0xb278,	// (0x00019eb8) tmo_note_info_pane_t5

0x0004,

0xfeaf,	// (0x0001eaef) tmo_note_info_pane_t

0xb28a,	// (0x00019eca) list_tmo_link_pane_ParamLimits

0xb297,	// (0x00019ed7) scroll_pane_cp20_ParamLimits

0x215d,	// (0x00010d9d) bg_popup_fep_char_preview_window_cp01

0xb2db,	// (0x00019f1b) popup_fshwr2_char_preview_window_t1

0xb2e9,	// (0x00019f29) popup_candi_list_indi_window_g1

0xb2f2,	// (0x00019f32) bg_cell_contacts_ai5_widget_pane

0xb2fe,	// (0x00019f3e) cell_contacts_ai5_widget_pane_g1

0xb312,	// (0x00019f52) cell_contacts_ai5_widget_pane_g2

0xb321,	// (0x00019f61) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeba,	// (0x0001eafa) cell_contacts_ai5_widget_pane_g

0xb334,	// (0x00019f74) cell_contacts_ai5_widget_pane_t1

0x302a,	// (0x00011c6a) highlight_cell_shortcut_ai5_widget_pane_cp01

0xb3ae,	// (0x00019fee) settings_container_pane

0x3e75,	// (0x00012ab5) listscroll_set_pane_copy1

0x6b6c,	// (0x000157ac) scroll_pane_cp121_copy1

0xb3ba,	// (0x00019ffa) set_content_pane_copy1

0xb3c2,	// (0x0001a002) aid_height_set_list_copy1_ParamLimits

0xb3c2,	// (0x0001a002) aid_height_set_list_copy1

0x6199,	// (0x00014dd9) aid_size_parent_copy1_ParamLimits

0x6199,	// (0x00014dd9) aid_size_parent_copy1

0xb3ce,	// (0x0001a00e) button_value_adjust_pane_cp6_copy1_ParamLimits

0xb3ce,	// (0x0001a00e) button_value_adjust_pane_cp6_copy1

0x41fb,	// (0x00012e3b) list_highlight_pane_cp2_copy1_ParamLimits

0x41fb,	// (0x00012e3b) list_highlight_pane_cp2_copy1

0xb3e2,	// (0x0001a022) list_set_pane_copy1_ParamLimits

0xb3e2,	// (0x0001a022) list_set_pane_copy1

0xb349,	// (0x00019f89) main_pane_set_t1_copy1_ParamLimits

0xb349,	// (0x00019f89) main_pane_set_t1_copy1

0xb383,	// (0x00019fc3) main_pane_set_t2_copy1_ParamLimits

0xb383,	// (0x00019fc3) main_pane_set_t2_copy1

0xb48f,	// (0x0001a0cf) main_pane_set_t3_copy1

0xb49d,	// (0x0001a0dd) main_pane_set_t4_copy1

0xb3a2,	// (0x00019fe2) set_content_pane_g1_copy1_ParamLimits

0xb3a2,	// (0x00019fe2) set_content_pane_g1_copy1

0xb4ab,	// (0x0001a0eb) setting_code_pane_copy1

0xb4b5,	// (0x0001a0f5) setting_slider_graphic_pane_copy1

0xb4b5,	// (0x0001a0f5) setting_slider_pane_copy1

0xb4b5,	// (0x0001a0f5) setting_text_pane_copy1

0xb4bf,	// (0x0001a0ff) setting_volume_pane_copy1

0xb4c8,	// (0x0001a108) settings_code_pane_cp2_copy1

0xb4d0,	// (0x0001a110) settings_code_pane_cp_copy1_ParamLimits

0xb4d0,	// (0x0001a110) settings_code_pane_cp_copy1

0xb4e4,	// (0x0001a124) volume_set_pane_copy1

0xb500,	// (0x0001a140) volume_set_pane_g10_copy1

0xb508,	// (0x0001a148) volume_set_pane_g1_copy1

0xb510,	// (0x0001a150) volume_set_pane_g2_copy1

0xb518,	// (0x0001a158) volume_set_pane_g3_copy1

0xb520,	// (0x0001a160) volume_set_pane_g4_copy1

0xb528,	// (0x0001a168) volume_set_pane_g5_copy1

0xb530,	// (0x0001a170) volume_set_pane_g6_copy1

0xb538,	// (0x0001a178) volume_set_pane_g7_copy1

0xb540,	// (0x0001a180) volume_set_pane_g8_copy1

0xb548,	// (0x0001a188) volume_set_pane_g9_copy1

0x2251,	// (0x00010e91) bg_set_opt_pane_cp_copy1_ParamLimits

0x2251,	// (0x00010e91) bg_set_opt_pane_cp_copy1

0xb550,	// (0x0001a190) setting_slider_pane_t1_copy1_ParamLimits

0xb550,	// (0x0001a190) setting_slider_pane_t1_copy1

0xb56e,	// (0x0001a1ae) setting_slider_pane_t2_copy1_ParamLimits

0xb56e,	// (0x0001a1ae) setting_slider_pane_t2_copy1

0xb588,	// (0x0001a1c8) setting_slider_pane_t3_copy1_ParamLimits

0xb588,	// (0x0001a1c8) setting_slider_pane_t3_copy1

0xb5a0,	// (0x0001a1e0) slider_set_pane_copy1_ParamLimits

0xb5a0,	// (0x0001a1e0) slider_set_pane_copy1

0x3166,	// (0x00011da6) set_opt_bg_pane_g1_copy2

0x316e,	// (0x00011dae) set_opt_bg_pane_g2_copy2

0xb5b6,	// (0x0001a1f6) set_opt_bg_pane_g3_copy2

0x317e,	// (0x00011dbe) set_opt_bg_pane_g4_copy2

0x3186,	// (0x00011dc6) set_opt_bg_pane_g5_copy2

0x318e,	// (0x00011dce) set_opt_bg_pane_g6_copy2

0xb5c0,	// (0x0001a200) set_opt_bg_pane_g7_copy2

0xb5c8,	// (0x0001a208) set_opt_bg_pane_g8_copy2

0xb5d2,	// (0x0001a212) set_opt_bg_pane_g9_copy2

0xf4c9,	// (0x0001e109) aid_size_touch_slider_mark_copy1_ParamLimits

0xf4c9,	// (0x0001e109) aid_size_touch_slider_mark_copy1

0xb5dc,	// (0x0001a21c) slider_set_pane_g1_copy1

0xf4dd,	// (0x0001e11d) slider_set_pane_g2_copy1

0xe06a,	// (0x0001ccaa) slider_set_pane_g3_copy1_ParamLimits

0xe06a,	// (0x0001ccaa) slider_set_pane_g3_copy1

0xe07e,	// (0x0001ccbe) slider_set_pane_g4_copy1_ParamLimits

0xe07e,	// (0x0001ccbe) slider_set_pane_g4_copy1

0xe096,	// (0x0001ccd6) slider_set_pane_g5_copy1_ParamLimits

0xe096,	// (0x0001ccd6) slider_set_pane_g5_copy1

0xe06a,	// (0x0001ccaa) slider_set_pane_g6_copy1_ParamLimits

0xe06a,	// (0x0001ccaa) slider_set_pane_g6_copy1

0xf4e5,	// (0x0001e125) slider_set_pane_g7_copy1_ParamLimits

0xf4e5,	// (0x0001e125) slider_set_pane_g7_copy1

0x2171,	// (0x00010db1) bg_set_opt_pane_cp2_copy1

0xb5e5,	// (0x0001a225) setting_slider_graphic_pane_g1_copy1

0xb5ee,	// (0x0001a22e) setting_slider_graphic_pane_t1_copy1

0xb5fe,	// (0x0001a23e) setting_slider_graphic_pane_t2_copy1

0xb60e,	// (0x0001a24e) slider_set_pane_cp_copy1

0xb61e,	// (0x0001a25e) input_focus_pane_cp1_copy1

0xb627,	// (0x0001a267) list_set_text_pane_copy1

0xb62f,	// (0x0001a26f) setting_text_pane_g1_copy1

0xd30a,	// (0x0001bf4a) set_text_pane_t1_copy1

0xb61e,	// (0x0001a25e) input_focus_pane_cp2_copy1

0xb62f,	// (0x0001a26f) setting_code_pane_g1_copy1

0xb655,	// (0x0001a295) setting_code_pane_t1_copy1

0xb4ec,	// (0x0001a12c) list_set_graphic_pane_copy1

0x2171,	// (0x00010db1) bg_set_opt_pane_cp4_copy1

0x3b77,	// (0x000127b7) list_set_graphic_pane_g1_copy1_ParamLimits

0x3b77,	// (0x000127b7) list_set_graphic_pane_g1_copy1

0xb663,	// (0x0001a2a3) list_set_graphic_pane_g2_copy1

0x3b8f,	// (0x000127cf) list_set_graphic_pane_t1_copy1_ParamLimits

0x3b8f,	// (0x000127cf) list_set_graphic_pane_t1_copy1

0x76b1,	// (0x000162f1) rs_clock_indi_pane_g1

0xb66b,	// (0x0001a2ab) rs_clock_indi_pane_t1

0xb679,	// (0x0001a2b9) rs_indi_pane

0xb681,	// (0x0001a2c1) rs_indi_pane_g1

0xb68a,	// (0x0001a2ca) rs_indi_pane_g2

0xb693,	// (0x0001a2d3) rs_indi_pane_g3

0x0002,

0xfec1,	// (0x0001eb01) rs_indi_pane_g

0x3e75,	// (0x00012ab5) bg_popup_preview_window_pane_cp03

0xb69c,	// (0x0001a2dc) popup_fep_tooltip_window_t1

0x853e,	// (0x0001717e) popup_note2_window_g2_ParamLimits

0x853e,	// (0x0001717e) popup_note2_window_g2

0x0001,

0xfc61,	// (0x0001e8a1) popup_note2_window_g_ParamLimits

0xfc61,	// (0x0001e8a1) popup_note2_window_g

0x8b20,	// (0x00017760) bg_popup_sub_pane_cp11_ParamLimits

0x8b2d,	// (0x0001776d) cell_ai3_links_pane_g1_ParamLimits

0x8b44,	// (0x00017784) cell_ai3_links_pane_t1

0xd30a,	// (0x0001bf4a) set_text_pane_t1_copy1_ParamLimits

0x3d84,	// (0x000129c4) cell_graphic_popup_pane_cp2_ParamLimits

0x3d84,	// (0x000129c4) cell_graphic_popup_pane_cp2

0xb6aa,	// (0x0001a2ea) cell_graphic_popup_pane_g1_cp2

0x2809,	// (0x00011449) cell_graphic_popup_pane_g2_cp2

0xb6b2,	// (0x0001a2f2) cell_graphic_popup_pane_g3_cp2

0xb6ba,	// (0x0001a2fa) cell_graphic_popup_pane_t2_cp2

0x281a,	// (0x0001145a) grid_highlight_pane_cp3_cp2

0x354c,	// (0x0001218c) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x302a,	// (0x00011c6a) main_tmo_pane_ParamLimits

0x8ef4,	// (0x00017b34) popup_tmo_big_image_note_window

0xf1c1,	// (0x0001de01) cell_ai5_widget_list_pane

0xf1c9,	// (0x0001de09) cell_ai5_widget_lrg_icon_pane

0xf486,	// (0x0001e0c6) tmo_note_info_pane_t1_ParamLimits

0xf49b,	// (0x0001e0db) tmo_note_info_pane_t2_ParamLimits

0xf4b4,	// (0x0001e0f4) tmo_note_info_pane_t3_ParamLimits

0xb266,	// (0x00019ea6) tmo_note_info_pane_t4_ParamLimits

0xb278,	// (0x00019eb8) tmo_note_info_pane_t5_ParamLimits

0xfeaf,	// (0x0001eaef) tmo_note_info_pane_t_ParamLimits

0xb3ae,	// (0x00019fee) settings_container_pane_ParamLimits

0xb616,	// (0x0001a256) indicator_popup_pane_cp5

0xb616,	// (0x0001a256) indicator_popup_pane_cp6

0xb4ec,	// (0x0001a12c) list_set_graphic_pane_copy1_ParamLimits

0x215d,	// (0x00010d9d) bg_popup_window_pane_cp23

0xb6c8,	// (0x0001a308) popup_tmo_big_image_note_window_g1

0xb6d3,	// (0x0001a313) popup_tmo_big_image_note_window_t1

0xb6e3,	// (0x0001a323) popup_tmo_big_image_note_window_t2

0xb6f3,	// (0x0001a333) popup_tmo_big_image_note_window_t3

0x0002,

0xfec8,	// (0x0001eb08) popup_tmo_big_image_note_window_t

0xf4fb,	// (0x0001e13b) cell_ai5_widget_lrg_icon_pane_g1

0xf503,	// (0x0001e143) cell_ai5_widget_lrg_icon_pane_t1

0xf511,	// (0x0001e151) cell_ai5_widget_list_row_pane_ParamLimits

0xf511,	// (0x0001e151) cell_ai5_widget_list_row_pane

0xf52a,	// (0x0001e16a) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf52a,	// (0x0001e16a) cell_ai5_widget_list_row_pane_g1

0xf537,	// (0x0001e177) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf537,	// (0x0001e177) cell_ai5_widget_list_row_pane_t1

0xf54f,	// (0x0001e18f) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf54f,	// (0x0001e18f) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfecf,	// (0x0001eb0f) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfecf,	// (0x0001eb0f) cell_ai5_widget_list_row_pane_t

0x215d,	// (0x00010d9d) main_fep_vtchi_ss_pane

0xb703,	// (0x0001a343) popup_fep_char_pre_window

0xb70b,	// (0x0001a34b) popup_fep_ituss_window

0xb72c,	// (0x0001a36c) popup_fep_vkbss_window

0xb74b,	// (0x0001a38b) grid_vkbss_keypad_pane_ParamLimits

0xb74b,	// (0x0001a38b) grid_vkbss_keypad_pane

0xb75b,	// (0x0001a39b) ituss_keypad_pane

0xb773,	// (0x0001a3b3) aid_vkbss_key_offset_ParamLimits

0xb773,	// (0x0001a3b3) aid_vkbss_key_offset

0xb77f,	// (0x0001a3bf) cell_vkbss_key_pane_ParamLimits

0xb77f,	// (0x0001a3bf) cell_vkbss_key_pane

0xb795,	// (0x0001a3d5) bg_cell_vkbss_key_g1_ParamLimits

0xb795,	// (0x0001a3d5) bg_cell_vkbss_key_g1

0xb7a1,	// (0x0001a3e1) cell_vkbss_key_3p_pane_ParamLimits

0xb7a1,	// (0x0001a3e1) cell_vkbss_key_3p_pane

0xb7bb,	// (0x0001a3fb) cell_vkbss_key_g1_ParamLimits

0xb7bb,	// (0x0001a3fb) cell_vkbss_key_g1

0xb7d5,	// (0x0001a415) cell_vkbss_key_t1_ParamLimits

0xb7d5,	// (0x0001a415) cell_vkbss_key_t1

0xb800,	// (0x0001a440) cell_ituss_key_pane_ParamLimits

0xb800,	// (0x0001a440) cell_ituss_key_pane

0xb810,	// (0x0001a450) bg_cell_ituss_key_g1_ParamLimits

0xb810,	// (0x0001a450) bg_cell_ituss_key_g1

0xb81c,	// (0x0001a45c) cell_ituss_key_pane_g1_ParamLimits

0xb81c,	// (0x0001a45c) cell_ituss_key_pane_g1

0xb828,	// (0x0001a468) cell_ituss_key_pane_g2_ParamLimits

0xb828,	// (0x0001a468) cell_ituss_key_pane_g2

0x0001,

0xfed4,	// (0x0001eb14) cell_ituss_key_pane_g_ParamLimits

0xfed4,	// (0x0001eb14) cell_ituss_key_pane_g

0xb841,	// (0x0001a481) cell_ituss_key_t1_ParamLimits

0xb841,	// (0x0001a481) cell_ituss_key_t1

0xb86f,	// (0x0001a4af) cell_ituss_key_t2_ParamLimits

0xb86f,	// (0x0001a4af) cell_ituss_key_t2

0xb8a0,	// (0x0001a4e0) cell_ituss_key_t3_ParamLimits

0xb8a0,	// (0x0001a4e0) cell_ituss_key_t3

0xb8d1,	// (0x0001a511) cell_ituss_key_t4_ParamLimits

0xb8d1,	// (0x0001a511) cell_ituss_key_t4

0x0003,

0xfed9,	// (0x0001eb19) cell_ituss_key_t_ParamLimits

0xfed9,	// (0x0001eb19) cell_ituss_key_t

0xb902,	// (0x0001a542) cell_vkbss_key_3p_pane_g1

0xb90a,	// (0x0001a54a) cell_vkbss_key_3p_pane_g2

0xb912,	// (0x0001a552) cell_vkbss_key_3p_pane_g3

0x0002,

0xfee2,	// (0x0001eb22) cell_vkbss_key_3p_pane_g

0x215d,	// (0x00010d9d) bg_popup_fep_char_preview_window_cp02

0xb91a,	// (0x0001a55a) popup_fep_char_pre_window_t1

0xf1b7,	// (0x0001ddf7) main_ai5_sk_pane

0xb2f2,	// (0x00019f32) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xb2fe,	// (0x00019f3e) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xb312,	// (0x00019f52) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xb321,	// (0x00019f61) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeba,	// (0x0001eafa) cell_contacts_ai5_widget_pane_g_ParamLimits

0xb334,	// (0x00019f74) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x302a,	// (0x00011c6a) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf561,	// (0x0001e1a1) main_ai5_sk_pane_g1

0x5242,	// (0x00013e82) popup_query_code_window_g1

0xb721,	// (0x0001a361) popup_fep_vkb_icf_pane

0xb735,	// (0x0001a375) popup_fep_vtchi_icf_pane

0x302a,	// (0x00011c6a) bg_icf_pane

0xb938,	// (0x0001a578) list_vkb_icf_pane

0x302a,	// (0x00011c6a) bg_icf_pane_cp01

0x8eb3,	// (0x00017af3) vtchi_icf_list_pane

0xb958,	// (0x0001a598) list_vkb_icf_pane_t1_ParamLimits

0xb958,	// (0x0001a598) list_vkb_icf_pane_t1

0xb972,	// (0x0001a5b2) vtchi_icf_list_pane_t1_ParamLimits

0xb972,	// (0x0001a5b2) vtchi_icf_list_pane_t1

0xb70b,	// (0x0001a34b) popup_fep_ituss_window_ParamLimits

0xb735,	// (0x0001a375) popup_fep_vtchi_icf_pane_ParamLimits

0xb75b,	// (0x0001a39b) ituss_keypad_pane_ParamLimits

0xb76a,	// (0x0001a3aa) ituss_sks_pane

0x302a,	// (0x00011c6a) bg_icf_pane_ParamLimits

0xb929,	// (0x0001a569) icf_edit_indi_pane_ParamLimits

0xb929,	// (0x0001a569) icf_edit_indi_pane

0xb938,	// (0x0001a578) list_vkb_icf_pane_ParamLimits

0x302a,	// (0x00011c6a) bg_icf_pane_cp01_ParamLimits

0xb944,	// (0x0001a584) icf_edit_indi_pane_cp01_ParamLimits

0xb944,	// (0x0001a584) icf_edit_indi_pane_cp01

0xb950,	// (0x0001a590) vtchi_query_pane

0x794a,	// (0x0001658a) icf_edit_indi_pane_g1_ParamLimits

0x794a,	// (0x0001658a) icf_edit_indi_pane_g1

0xb997,	// (0x0001a5d7) icf_edit_indi_pane_g2_ParamLimits

0xb997,	// (0x0001a5d7) icf_edit_indi_pane_g2

0x0001,

0xfee9,	// (0x0001eb29) icf_edit_indi_pane_g_ParamLimits

0xfee9,	// (0x0001eb29) icf_edit_indi_pane_g

0xb9a3,	// (0x0001a5e3) icf_edit_indi_pane_t1

0xb9b1,	// (0x0001a5f1) bg_input_focus_pane_cp042

0x29ed,	// (0x0001162d) vtchi_button_pane

0xb9ba,	// (0x0001a5fa) vtchi_query_pane_t1

0xb9c8,	// (0x0001a608) vtchi_query_pane_t2

0xb9d6,	// (0x0001a616) vtchi_query_pane_t3

0x0002,

0xfeee,	// (0x0001eb2e) vtchi_query_pane_t

0x215d,	// (0x00010d9d) bg_button_pane_cp13

0xb9e4,	// (0x0001a624) vtchi_button_pane_g1

0x93fe,	// (0x0001803e) ituss_sks_pane_g1

0xb9ec,	// (0x0001a62c) ituss_sks_pane_g2

0x0001,

0xfef5,	// (0x0001eb35) ituss_sks_pane_g

0xb9f5,	// (0x0001a635) ituss_sks_pane_t1

0xba03,	// (0x0001a643) ituss_sks_pane_t2

0x0001,

0xfefa,	// (0x0001eb3a) ituss_sks_pane_t

0x708d,	// (0x00015ccd) indicator_nsta_pane_cp_g1

0x7096,	// (0x00015cd6) indicator_nsta_pane_cp_g2

0x709e,	// (0x00015cde) indicator_nsta_pane_cp_g3

0x70a6,	// (0x00015ce6) indicator_nsta_pane_cp_g4

0x70ae,	// (0x00015cee) indicator_nsta_pane_cp_g5

0x70b6,	// (0x00015cf6) indicator_nsta_pane_cp_g6

0x0005,

0xfaab,	// (0x0001e6eb) indicator_nsta_pane_cp_g

0xee3c,	// (0x0001da7c) cell_graphic2_pane_t2_ParamLimits

0xee3c,	// (0x0001da7c) cell_graphic2_pane_t2

0x0001,

0xfdb1,	// (0x0001e9f1) cell_graphic2_pane_t_ParamLimits

0xfdb1,	// (0x0001e9f1) cell_graphic2_pane_t
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
	};

} // end of namespace AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch_Small

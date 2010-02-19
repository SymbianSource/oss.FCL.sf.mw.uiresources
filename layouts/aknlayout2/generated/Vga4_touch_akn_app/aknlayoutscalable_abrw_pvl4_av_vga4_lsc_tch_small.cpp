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

#include "aknlayoutscalable_abrw_pvl4_av_vga4_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvl4_av_vga4_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x00031aba };

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
0xac8a,	// (0x0003c744) Screen

0xac96,	// (0x0003c750) application_window_ParamLimits

0xac96,	// (0x0003c750) application_window

0xe047,	// (0x0003fb01) screen_g1

0xacce,	// (0x0003c788) area_bottom_pane_ParamLimits

0xacce,	// (0x0003c788) area_bottom_pane

0xeef7,	// (0x000409b1) area_top_pane_ParamLimits

0xeef7,	// (0x000409b1) area_top_pane

0xf35a,	// (0x00040e14) main_pane_ParamLimits

0xf35a,	// (0x00040e14) main_pane

0xe051,	// (0x0003fb0b) misc_graphics

0xce37,	// (0x0003e8f1) battery_pane_ParamLimits

0xce37,	// (0x0003e8f1) battery_pane

0x508a,	// (0x00036b44) bg_status_flat_pane_g8

0x5092,	// (0x00036b4c) bg_status_flat_pane_g9

0x446a,	// (0x00035f24) context_pane_ParamLimits

0x446a,	// (0x00035f24) context_pane

0xcfae,	// (0x0003ea68) navi_pane_ParamLimits

0xcfae,	// (0x0003ea68) navi_pane

0xd038,	// (0x0003eaf2) signal_pane_ParamLimits

0xd038,	// (0x0003eaf2) signal_pane

0x0008,

0xf880,	// (0x0004133a) bg_status_flat_pane_g

0xd0c8,	// (0x0003eb82) status_pane_g1_ParamLimits

0xd0c8,	// (0x0003eb82) status_pane_g1

0xd0de,	// (0x0003eb98) status_pane_g2_ParamLimits

0xd0de,	// (0x0003eb98) status_pane_g2

0x46ab,	// (0x00036165) status_pane_g3_ParamLimits

0x46ab,	// (0x00036165) status_pane_g3

0x0004,

0xf7b3,	// (0x0004126d) status_pane_g_ParamLimits

0xf7b3,	// (0x0004126d) status_pane_g

0xd0ea,	// (0x0003eba4) title_pane_ParamLimits

0xd0ea,	// (0x0003eba4) title_pane

0xd14d,	// (0x0003ec07) uni_indicator_pane_ParamLimits

0xd14d,	// (0x0003ec07) uni_indicator_pane

0x3c97,	// (0x00035751) bg_list_pane_ParamLimits

0x3c97,	// (0x00035751) bg_list_pane

0xb9c3,	// (0x0003d47d) find_pane

0xc67d,	// (0x0003e137) listscroll_app_pane_ParamLimits

0xc67d,	// (0x0003e137) listscroll_app_pane

0x3ccb,	// (0x00035785) listscroll_form_pane

0xb9cb,	// (0x0003d485) listscroll_gen_pane_ParamLimits

0xb9cb,	// (0x0003d485) listscroll_gen_pane

0x3ccb,	// (0x00035785) listscroll_set_pane

0x5c43,	// (0x000376fd) main_idle_act_pane

0x3973,	// (0x0003542d) main_idle_trad_pane

0x3973,	// (0x0003542d) main_list_empty_pane

0x3cf9,	// (0x000357b3) main_midp_pane

0x3d05,	// (0x000357bf) main_pane_g1_ParamLimits

0x3d05,	// (0x000357bf) main_pane_g1

0xc697,	// (0x0003e151) popup_ai_message_window_ParamLimits

0xc697,	// (0x0003e151) popup_ai_message_window

0xc737,	// (0x0003e1f1) popup_fep_china_uni_window_ParamLimits

0xc737,	// (0x0003e1f1) popup_fep_china_uni_window

0x3e23,	// (0x000358dd) popup_fep_japan_candidate_window_ParamLimits

0x3e23,	// (0x000358dd) popup_fep_japan_candidate_window

0x3e4d,	// (0x00035907) popup_fep_japan_predictive_window_ParamLimits

0x3e4d,	// (0x00035907) popup_fep_japan_predictive_window

0xc797,	// (0x0003e251) popup_find_window

0xc7b4,	// (0x0003e26e) popup_grid_graphic_window_ParamLimits

0xc7b4,	// (0x0003e26e) popup_grid_graphic_window

0x3ebe,	// (0x00035978) popup_large_graphic_colour_window

0xc858,	// (0x0003e312) popup_menu_window_ParamLimits

0xc858,	// (0x0003e312) popup_menu_window

0xca44,	// (0x0003e4fe) popup_note_image_window

0xca04,	// (0x0003e4be) popup_note_wait_window_ParamLimits

0xca04,	// (0x0003e4be) popup_note_wait_window

0xca5c,	// (0x0003e516) popup_note_window_ParamLimits

0xca5c,	// (0x0003e516) popup_note_window

0xcb0a,	// (0x0003e5c4) popup_query_code_window_ParamLimits

0xcb0a,	// (0x0003e5c4) popup_query_code_window

0x412a,	// (0x00035be4) popup_query_data_code_window_ParamLimits

0x412a,	// (0x00035be4) popup_query_data_code_window

0xcb4a,	// (0x0003e604) popup_query_data_window_ParamLimits

0xcb4a,	// (0x0003e604) popup_query_data_window

0xcbde,	// (0x0003e698) popup_query_sat_info_window_ParamLimits

0xcbde,	// (0x0003e698) popup_query_sat_info_window

0xcc89,	// (0x0003e743) popup_snote_single_graphic_window_ParamLimits

0xcc89,	// (0x0003e743) popup_snote_single_graphic_window

0xcc89,	// (0x0003e743) popup_snote_single_text_window_ParamLimits

0xcc89,	// (0x0003e743) popup_snote_single_text_window

0x41c5,	// (0x00035c7f) popup_sub_window_general

0x430b,	// (0x00035dc5) popup_window_general_ParamLimits

0x430b,	// (0x00035dc5) popup_window_general

0x4324,	// (0x00035dde) power_save_pane

0xb862,	// (0x0003d31c) control_pane_g1_ParamLimits

0xb862,	// (0x0003d31c) control_pane_g1

0xb88b,	// (0x0003d345) control_pane_g2_ParamLimits

0xb88b,	// (0x0003d345) control_pane_g2

0x3c40,	// (0x000356fa) control_pane_g3_ParamLimits

0x3c40,	// (0x000356fa) control_pane_g3

0x0007,

0xf79b,	// (0x00041255) control_pane_g_ParamLimits

0xf79b,	// (0x00041255) control_pane_g

0xb8c6,	// (0x0003d380) control_pane_t1_ParamLimits

0xb8c6,	// (0x0003d380) control_pane_t1

0xb924,	// (0x0003d3de) control_pane_t2_ParamLimits

0xb924,	// (0x0003d3de) control_pane_t2

0x0002,

0xf7ac,	// (0x00041266) control_pane_t_ParamLimits

0xf7ac,	// (0x00041266) control_pane_t

0x3b61,	// (0x0003561b) navi_navi_volume_pane_cp1

0x3b6a,	// (0x00035624) status_small_icon_pane

0x3b72,	// (0x0003562c) status_small_pane_g1_ParamLimits

0x3b72,	// (0x0003562c) status_small_pane_g1

0x3ba6,	// (0x00035660) status_small_pane_g2_ParamLimits

0x3ba6,	// (0x00035660) status_small_pane_g2

0x3bb2,	// (0x0003566c) status_small_pane_g3_ParamLimits

0x3bb2,	// (0x0003566c) status_small_pane_g3

0x3bbe,	// (0x00035678) status_small_pane_g4_ParamLimits

0x3bbe,	// (0x00035678) status_small_pane_g4

0x3bca,	// (0x00035684) status_small_pane_g5_ParamLimits

0x3bca,	// (0x00035684) status_small_pane_g5

0x3bd9,	// (0x00035693) status_small_pane_g6_ParamLimits

0x3bd9,	// (0x00035693) status_small_pane_g6

0x0007,

0xf78a,	// (0x00041244) status_small_pane_g_ParamLimits

0xf78a,	// (0x00041244) status_small_pane_g

0x3c09,	// (0x000356c3) status_small_pane_t1

0x3c2c,	// (0x000356e6) status_small_wait_pane_ParamLimits

0x3c2c,	// (0x000356e6) status_small_wait_pane

0xc480,	// (0x0003df3a) aid_levels_signal_ParamLimits

0xc480,	// (0x0003df3a) aid_levels_signal

0xc498,	// (0x0003df52) signal_pane_g1_ParamLimits

0xc498,	// (0x0003df52) signal_pane_g1

0xc4b3,	// (0x0003df6d) signal_pane_g2_ParamLimits

0xc4b3,	// (0x0003df6d) signal_pane_g2

0x0003,

0xf71b,	// (0x000411d5) signal_pane_g_ParamLimits

0xf71b,	// (0x000411d5) signal_pane_g

0x3446,	// (0x00034f00) context_pane_g1

0xae4b,	// (0x0003c905) title_pane_g1

0xae82,	// (0x0003c93c) title_pane_t1

0x2282,	// (0x00033d3c) title_pane_t2

0x22a8,	// (0x00033d62) title_pane_t3

0x0002,

0xf56f,	// (0x00041029) title_pane_t

0xd175,	// (0x0003ec2f) aid_levels_battery_ParamLimits

0xd175,	// (0x0003ec2f) aid_levels_battery

0xd191,	// (0x0003ec4b) battery_pane_g1_ParamLimits

0xd191,	// (0x0003ec4b) battery_pane_g1

0xd1ae,	// (0x0003ec68) battery_pane_g2_ParamLimits

0xd1ae,	// (0x0003ec68) battery_pane_g2

0x0001,

0xf7be,	// (0x00041278) battery_pane_g_ParamLimits

0xf7be,	// (0x00041278) battery_pane_g

0xd3f2,	// (0x0003eeac) uni_indicator_pane_g1

0xd407,	// (0x0003eec1) uni_indicator_pane_g2

0xd41c,	// (0x0003eed6) uni_indicator_pane_g3

0x0005,

0xf928,	// (0x000413e2) uni_indicator_pane_g

0x37e1,	// (0x0003529b) navi_icon_pane_ParamLimits

0x37e1,	// (0x0003529b) navi_icon_pane

0x3728,	// (0x000351e2) navi_midp_pane

0x37fd,	// (0x000352b7) navi_navi_pane

0x3807,	// (0x000352c1) navi_text_pane_ParamLimits

0x3807,	// (0x000352c1) navi_text_pane

0xe047,	// (0x0003fb01) status_small_wait_pane_g1

0x26ec,	// (0x000341a6) status_small_wait_pane_g2

0x0001,

0xf923,	// (0x000413dd) status_small_wait_pane_g

0xd391,	// (0x0003ee4b) navi_navi_icon_text_pane

0xd399,	// (0x0003ee53) navi_navi_pane_g1_ParamLimits

0xd399,	// (0x0003ee53) navi_navi_pane_g1

0xd3ab,	// (0x0003ee65) navi_navi_pane_g2_ParamLimits

0xd3ab,	// (0x0003ee65) navi_navi_pane_g2

0x0001,

0xf8f1,	// (0x000413ab) navi_navi_pane_g_ParamLimits

0xf8f1,	// (0x000413ab) navi_navi_pane_g

0x5719,	// (0x000371d3) navi_navi_tabs_pane

0xd3bd,	// (0x0003ee77) navi_navi_text_pane

0xd391,	// (0x0003ee4b) navi_navi_volume_pane

0xd37f,	// (0x0003ee39) navi_text_pane_t1

0xd373,	// (0x0003ee2d) navi_icon_pane_g1

0x560a,	// (0x000370c4) navi_navi_text_pane_t1

0xbbbf,	// (0x0003d679) navi_navi_volume_pane_g1

0xbbc7,	// (0x0003d681) volume_small_pane

0xd2cf,	// (0x0003ed89) navi_navi_icon_text_pane_g1

0xd2d7,	// (0x0003ed91) navi_navi_icon_text_pane_t1

0x37fd,	// (0x000352b7) navi_tabs_2_long_pane

0x37fd,	// (0x000352b7) navi_tabs_2_pane

0x37fd,	// (0x000352b7) navi_tabs_3_long_pane

0x37fd,	// (0x000352b7) navi_tabs_3_pane

0x37fd,	// (0x000352b7) navi_tabs_4_pane

0xbb9f,	// (0x0003d659) tabs_2_active_pane_ParamLimits

0xbb9f,	// (0x0003d659) tabs_2_active_pane

0xbbaf,	// (0x0003d669) tabs_2_passive_pane_ParamLimits

0xbbaf,	// (0x0003d669) tabs_2_passive_pane

0xbb6d,	// (0x0003d627) tabs_3_active_pane_ParamLimits

0xbb6d,	// (0x0003d627) tabs_3_active_pane

0xbb7d,	// (0x0003d637) tabs_3_passive_pane_ParamLimits

0xbb7d,	// (0x0003d637) tabs_3_passive_pane

0xbb8e,	// (0x0003d648) tabs_3_passive_pane_cp_ParamLimits

0xbb8e,	// (0x0003d648) tabs_3_passive_pane_cp

0xbb29,	// (0x0003d5e3) tabs_4_active_pane_ParamLimits

0xbb29,	// (0x0003d5e3) tabs_4_active_pane

0xbb3a,	// (0x0003d5f4) tabs_4_passive_pane_ParamLimits

0xbb3a,	// (0x0003d5f4) tabs_4_passive_pane

0xbb4b,	// (0x0003d605) tabs_4_passive_pane_cp_ParamLimits

0xbb4b,	// (0x0003d605) tabs_4_passive_pane_cp

0xbb5c,	// (0x0003d616) tabs_4_passive_pane_cp2_ParamLimits

0xbb5c,	// (0x0003d616) tabs_4_passive_pane_cp2

0xbb05,	// (0x0003d5bf) tabs_2_long_active_pane_ParamLimits

0xbb05,	// (0x0003d5bf) tabs_2_long_active_pane

0xbb17,	// (0x0003d5d1) tabs_2_long_passive_pane_ParamLimits

0xbb17,	// (0x0003d5d1) tabs_2_long_passive_pane

0xbaba,	// (0x0003d574) tabs_3_long_active_pane_ParamLimits

0xbaba,	// (0x0003d574) tabs_3_long_active_pane

0xbad3,	// (0x0003d58d) tabs_3_long_passive_pane_ParamLimits

0xbad3,	// (0x0003d58d) tabs_3_long_passive_pane

0xbaec,	// (0x0003d5a6) tabs_3_long_passive_pane_cp_ParamLimits

0xbaec,	// (0x0003d5a6) tabs_3_long_passive_pane_cp

0x0c4f,	// (0x00032709) volume_small_pane_g1

0xba69,	// (0x0003d523) volume_small_pane_g2

0xba72,	// (0x0003d52c) volume_small_pane_g3

0xba7b,	// (0x0003d535) volume_small_pane_g4

0xba84,	// (0x0003d53e) volume_small_pane_g5

0xba8d,	// (0x0003d547) volume_small_pane_g6

0xba96,	// (0x0003d550) volume_small_pane_g7

0xba9f,	// (0x0003d559) volume_small_pane_g8

0xbaa8,	// (0x0003d562) volume_small_pane_g9

0xbab1,	// (0x0003d56b) volume_small_pane_g10

0x0009,

0xf8bd,	// (0x00041377) volume_small_pane_g

0x2536,	// (0x00033ff0) bg_active_tab_pane_cp2_ParamLimits

0x2536,	// (0x00033ff0) bg_active_tab_pane_cp2

0xaf0e,	// (0x0003c9c8) tabs_3_active_pane_g1

0xaf16,	// (0x0003c9d0) tabs_3_active_pane_t1

0x2536,	// (0x00033ff0) bg_passive_tab_pane_cp2_ParamLimits

0x2536,	// (0x00033ff0) bg_passive_tab_pane_cp2

0xaf0e,	// (0x0003c9c8) tabs_3_passive_pane_g1

0xaf16,	// (0x0003c9d0) tabs_3_passive_pane_t1

0x2536,	// (0x00033ff0) bg_active_tab_pane_cp3_ParamLimits

0x2536,	// (0x00033ff0) bg_active_tab_pane_cp3

0xaf28,	// (0x0003c9e2) tabs_4_active_pane_g1

0xaf30,	// (0x0003c9ea) tabs_4_active_pane_t1

0x2536,	// (0x00033ff0) bg_passive_tab_pane_cp3_ParamLimits

0x2536,	// (0x00033ff0) bg_passive_tab_pane_cp3

0xaf28,	// (0x0003c9e2) tabs_4_1_passive_pane_g1

0xaf30,	// (0x0003c9ea) tabs_4_1_passive_pane_t1

0x3cf9,	// (0x000357b3) list_highlight_pane_cp2

0xd4da,	// (0x0003ef94) list_set_pane_ParamLimits

0xd4da,	// (0x0003ef94) list_set_pane

0xd5a2,	// (0x0003f05c) main_pane_set_t1_ParamLimits

0xd5a2,	// (0x0003f05c) main_pane_set_t1

0xd5c2,	// (0x0003f07c) main_pane_set_t2_ParamLimits

0xd5c2,	// (0x0003f07c) main_pane_set_t2

0xd5d6,	// (0x0003f090) main_pane_set_t3_ParamLimits

0xd5d6,	// (0x0003f090) main_pane_set_t3

0xd5ea,	// (0x0003f0a4) main_pane_set_t4_ParamLimits

0xd5ea,	// (0x0003f0a4) main_pane_set_t4

0x0003,

0xf98d,	// (0x00041447) main_pane_set_t_ParamLimits

0xf98d,	// (0x00041447) main_pane_set_t

0xd5fe,	// (0x0003f0b8) setting_code_pane

0x5da3,	// (0x0003785d) setting_slider_graphic_pane

0x5da3,	// (0x0003785d) setting_slider_pane

0x5da3,	// (0x0003785d) setting_text_pane

0x5da3,	// (0x0003785d) setting_volume_pane

0xf4d6,	// (0x00040f90) volume_set_pane

0x22ba,	// (0x00033d74) bg_set_opt_pane_cp

0xf4e0,	// (0x00040f9a) setting_slider_pane_t1

0xf4f6,	// (0x00040fb0) setting_slider_pane_t2

0xf510,	// (0x00040fca) setting_slider_pane_t3

0x0002,

0xf576,	// (0x00041030) setting_slider_pane_t

0xf528,	// (0x00040fe2) slider_set_pane

0xe051,	// (0x0003fb0b) bg_set_opt_pane_cp2

0x22fc,	// (0x00033db6) setting_slider_graphic_pane_g1

0xf53e,	// (0x00040ff8) setting_slider_graphic_pane_t1

0xf54e,	// (0x00041008) setting_slider_graphic_pane_t2

0x0001,

0xf57d,	// (0x00041037) setting_slider_graphic_pane_t

0xf55e,	// (0x00041018) slider_set_pane_cp

0xe051,	// (0x0003fb0b) input_focus_pane_cp1

0x5c2a,	// (0x000376e4) list_set_text_pane

0xe047,	// (0x0003fb01) setting_text_pane_g1

0xe051,	// (0x0003fb0b) input_focus_pane_cp2

0xe047,	// (0x0003fb01) setting_code_pane_g1

0x2305,	// (0x00033dbf) setting_code_pane_t1

0xef8b,	// (0x00040a45) set_text_pane_t1_ParamLimits

0xef8b,	// (0x00040a45) set_text_pane_t1

0x2ba8,	// (0x00034662) set_opt_bg_pane_g1

0x2bb0,	// (0x0003466a) set_opt_bg_pane_g2

0x5c02,	// (0x000376bc) set_opt_bg_pane_g3

0x2bc0,	// (0x0003467a) set_opt_bg_pane_g4

0x2bc8,	// (0x00034682) set_opt_bg_pane_g5

0x2bd0,	// (0x0003468a) set_opt_bg_pane_g6

0x5c0c,	// (0x000376c6) set_opt_bg_pane_g7

0x5c16,	// (0x000376d0) set_opt_bg_pane_g8

0x5c20,	// (0x000376da) set_opt_bg_pane_g9

0x0008,

0xf97a,	// (0x00041434) set_opt_bg_pane_g

0x5bf5,	// (0x000376af) slider_set_pane_g1

0x0e5b,	// (0x00032915) slider_set_pane_g2

0x0006,

0xf96b,	// (0x00041425) slider_set_pane_g

0x0dbb,	// (0x00032875) volume_set_pane_g1

0x0dc5,	// (0x0003287f) volume_set_pane_g2

0x0dcf,	// (0x00032889) volume_set_pane_g3

0x0dd9,	// (0x00032893) volume_set_pane_g4

0x0de3,	// (0x0003289d) volume_set_pane_g5

0x0ded,	// (0x000328a7) volume_set_pane_g6

0x0df7,	// (0x000328b1) volume_set_pane_g7

0x0e01,	// (0x000328bb) volume_set_pane_g8

0x0e0b,	// (0x000328c5) volume_set_pane_g9

0x0e15,	// (0x000328cf) volume_set_pane_g10

0x0009,

0xf943,	// (0x000413fd) volume_set_pane_g

0xaf42,	// (0x0003c9fc) indicator_pane_ParamLimits

0xaf42,	// (0x0003c9fc) indicator_pane

0xaf6e,	// (0x0003ca28) main_idle_pane_g2_ParamLimits

0xaf6e,	// (0x0003ca28) main_idle_pane_g2

0xafa6,	// (0x0003ca60) main_pane_idle_g1_ParamLimits

0xafa6,	// (0x0003ca60) main_pane_idle_g1

0x2355,	// (0x00033e0f) popup_clock_digital_analogue_window_ParamLimits

0x2355,	// (0x00033e0f) popup_clock_digital_analogue_window

0xafd4,	// (0x0003ca8e) soft_indicator_pane_ParamLimits

0xafd4,	// (0x0003ca8e) soft_indicator_pane

0xaff0,	// (0x0003caaa) wallpaper_pane_ParamLimits

0xaff0,	// (0x0003caaa) wallpaper_pane

0xe047,	// (0x0003fb01) wallpaper_pane_g1

0xb002,	// (0x0003cabc) indicator_pane_g1_ParamLimits

0xb002,	// (0x0003cabc) indicator_pane_g1

0x6067,	// (0x00037b21) navi_navi_icon_text_pane_srt_g1

0x23a9,	// (0x00033e63) soft_indicator_pane_t1

0x23c3,	// (0x00033e7d) aid_ps_area_pane

0xb01b,	// (0x0003cad5) aid_ps_clock_pane

0x23e2,	// (0x00033e9c) aid_ps_indicator_pane

0x23ee,	// (0x00033ea8) indicator_ps_pane_ParamLimits

0x23ee,	// (0x00033ea8) indicator_ps_pane

0x23fd,	// (0x00033eb7) power_save_pane_g1_ParamLimits

0x23fd,	// (0x00033eb7) power_save_pane_g1

0x2409,	// (0x00033ec3) power_save_pane_g2_ParamLimits

0x2409,	// (0x00033ec3) power_save_pane_g2

0xeed7,	// (0x00040991) aid_navinavi_width_pane

0x23c3,	// (0x00033e7d) aid_ps_area_pane_ParamLimits

0x0001,

0xf582,	// (0x0004103c) power_save_pane_g_ParamLimits

0xf582,	// (0x0004103c) power_save_pane_g

0x2417,	// (0x00033ed1) power_save_pane_t1_ParamLimits

0x2417,	// (0x00033ed1) power_save_pane_t1

0xb01b,	// (0x0003cad5) aid_ps_clock_pane_ParamLimits

0x23e2,	// (0x00033e9c) aid_ps_indicator_pane_ParamLimits

0x2429,	// (0x00033ee3) power_save_pane_t4_ParamLimits

0x2429,	// (0x00033ee3) power_save_pane_t4

0x0001,

0xf587,	// (0x00041041) power_save_pane_t_ParamLimits

0xf587,	// (0x00041041) power_save_pane_t

0x2453,	// (0x00033f0d) power_save_t3_ParamLimits

0x2453,	// (0x00033f0d) power_save_t3

0x243e,	// (0x00033ef8) power_save_t2_ParamLimits

0x243e,	// (0x00033ef8) power_save_t2

0x2468,	// (0x00033f22) indicator_ps_pane_g1

0xb029,	// (0x0003cae3) ai_gene_pane_ParamLimits

0xb029,	// (0x0003cae3) ai_gene_pane

0xb040,	// (0x0003cafa) ai_links_pane_ParamLimits

0xb040,	// (0x0003cafa) ai_links_pane

0xb058,	// (0x0003cb12) indicator_pane_cp1_ParamLimits

0xb058,	// (0x0003cb12) indicator_pane_cp1

0xb067,	// (0x0003cb21) main_pane_idle_g1_cp_ParamLimits

0xb067,	// (0x0003cb21) main_pane_idle_g1_cp

0x24a1,	// (0x00033f5b) popup_ai_links_title_window

0xb07f,	// (0x0003cb39) soft_indicator_pane_cp1_ParamLimits

0xb07f,	// (0x0003cb39) soft_indicator_pane_cp1

0x59c8,	// (0x00037482) ai_links_pane_g1

0x59d1,	// (0x0003748b) grid_ai_links_pane

0xd3e9,	// (0x0003eea3) ai_gene_pane_1

0x59b6,	// (0x00037470) ai_gene_pane_2

0x59bf,	// (0x00037479) list_highlight_pane_cp4

0xd3c5,	// (0x0003ee7f) cell_ai_link_pane_ParamLimits

0xd3c5,	// (0x0003ee7f) cell_ai_link_pane

0x5985,	// (0x0003743f) cell_ai_link_pane_g1

0x26ec,	// (0x000341a6) cell_ai_link_pane_g2

0x0001,

0xf91e,	// (0x000413d8) cell_ai_link_pane_g

0xe051,	// (0x0003fb0b) grid_highlight_cp2

0xe051,	// (0x0003fb0b) bg_popup_sub_pane_cp1

0x24c4,	// (0x00033f7e) popup_ai_links_title_window_t1

0x58d1,	// (0x0003738b) ai_gene_pane_1_g1_ParamLimits

0x58d1,	// (0x0003738b) ai_gene_pane_1_g1

0x58dd,	// (0x00037397) ai_gene_pane_1_g2_ParamLimits

0x58dd,	// (0x00037397) ai_gene_pane_1_g2

0x0001,

0xf914,	// (0x000413ce) ai_gene_pane_1_g_ParamLimits

0xf914,	// (0x000413ce) ai_gene_pane_1_g

0x58ea,	// (0x000373a4) ai_gene_pane_1_t1_ParamLimits

0x58ea,	// (0x000373a4) ai_gene_pane_1_t1

0x591e,	// (0x000373d8) grid_ai_soft_ind_pane

0x58bc,	// (0x00037376) ai_gene_pane_2_t1_ParamLimits

0x58bc,	// (0x00037376) ai_gene_pane_2_t1

0xb093,	// (0x0003cb4d) main_pane_empty_t1_ParamLimits

0xb093,	// (0x0003cb4d) main_pane_empty_t1

0xb0ab,	// (0x0003cb65) main_pane_empty_t2_ParamLimits

0xb0ab,	// (0x0003cb65) main_pane_empty_t2

0xb0c0,	// (0x0003cb7a) main_pane_empty_t3_ParamLimits

0xb0c0,	// (0x0003cb7a) main_pane_empty_t3

0xb0d2,	// (0x0003cb8c) main_pane_empty_t4_ParamLimits

0xb0d2,	// (0x0003cb8c) main_pane_empty_t4

0xb0e4,	// (0x0003cb9e) main_pane_empty_t5_ParamLimits

0xb0e4,	// (0x0003cb9e) main_pane_empty_t5

0x0004,

0xf58c,	// (0x00041046) main_pane_empty_t_ParamLimits

0xf58c,	// (0x00041046) main_pane_empty_t

0x2bf9,	// (0x000346b3) bg_popup_window_pane_ParamLimits

0x2bf9,	// (0x000346b3) bg_popup_window_pane

0x5618,	// (0x000370d2) find_popup_pane_cp2_ParamLimits

0x5618,	// (0x000370d2) find_popup_pane_cp2

0x5624,	// (0x000370de) heading_pane_ParamLimits

0x5624,	// (0x000370de) heading_pane

0xe051,	// (0x0003fb0b) bg_popup_sub_pane

0xd2f4,	// (0x0003edae) bg_popup_window_pane_g1_ParamLimits

0xd2f4,	// (0x0003edae) bg_popup_window_pane_g1

0xd303,	// (0x0003edbd) bg_popup_window_pane_g2_ParamLimits

0xd303,	// (0x0003edbd) bg_popup_window_pane_g2

0xd30f,	// (0x0003edc9) bg_popup_window_pane_g3_ParamLimits

0xd30f,	// (0x0003edc9) bg_popup_window_pane_g3

0xd31b,	// (0x0003edd5) bg_popup_window_pane_g4_ParamLimits

0xd31b,	// (0x0003edd5) bg_popup_window_pane_g4

0xd32a,	// (0x0003ede4) bg_popup_window_pane_g5_ParamLimits

0xd32a,	// (0x0003ede4) bg_popup_window_pane_g5

0xd33a,	// (0x0003edf4) bg_popup_window_pane_g6_ParamLimits

0xd33a,	// (0x0003edf4) bg_popup_window_pane_g6

0xd346,	// (0x0003ee00) bg_popup_window_pane_g7_ParamLimits

0xd346,	// (0x0003ee00) bg_popup_window_pane_g7

0xd355,	// (0x0003ee0f) bg_popup_window_pane_g8_ParamLimits

0xd355,	// (0x0003ee0f) bg_popup_window_pane_g8

0xd364,	// (0x0003ee1e) bg_popup_window_pane_g9_ParamLimits

0xd364,	// (0x0003ee1e) bg_popup_window_pane_g9

0x55fe,	// (0x000370b8) bg_popup_window_pane_g10_ParamLimits

0x55fe,	// (0x000370b8) bg_popup_window_pane_g10

0x0009,

0xf8dc,	// (0x00041396) bg_popup_window_pane_g_ParamLimits

0xf8dc,	// (0x00041396) bg_popup_window_pane_g

0x5527,	// (0x00036fe1) bg_popup_heading_pane_ParamLimits

0x5527,	// (0x00036fe1) bg_popup_heading_pane

0x0f81,	// (0x00032a3b) tabs_4_passive_pane_cp_srt_ParamLimits

0x0f81,	// (0x00032a3b) tabs_4_passive_pane_cp_srt

0x0f93,	// (0x00032a4d) tabs_4_passive_pane_srt_ParamLimits

0x553b,	// (0x00036ff5) heading_pane_g2

0x0f93,	// (0x00032a4d) tabs_4_passive_pane_srt

0x4928,	// (0x000363e2) bg_passive_tab_pane_cp3_srt_ParamLimits

0x4928,	// (0x000363e2) bg_passive_tab_pane_cp3_srt

0x5543,	// (0x00036ffd) heading_pane_t1_ParamLimits

0x5543,	// (0x00036ffd) heading_pane_t1

0x555a,	// (0x00037014) heading_pane_t2_ParamLimits

0x555a,	// (0x00037014) heading_pane_t2

0x0001,

0xf8d7,	// (0x00041391) heading_pane_t_ParamLimits

0xf8d7,	// (0x00041391) heading_pane_t

0x5052,	// (0x00036b0c) bg_popup_heading_pane_g1

0x5101,	// (0x00036bbb) bg_popup_heading_pane_g2

0x510b,	// (0x00036bc5) bg_popup_heading_pane_g3

0x5115,	// (0x00036bcf) bg_popup_heading_pane_g4

0x511f,	// (0x00036bd9) bg_popup_heading_pane_g5

0x5129,	// (0x00036be3) bg_popup_heading_pane_g6

0x5131,	// (0x00036beb) bg_popup_heading_pane_g7

0x5139,	// (0x00036bf3) bg_popup_heading_pane_g8

0x5143,	// (0x00036bfd) bg_popup_heading_pane_g9

0x0008,

0xf893,	// (0x0004134d) bg_popup_heading_pane_g

0x4836,	// (0x000362f0) bg_popup_sub_pane_g1

0x4846,	// (0x00036300) bg_popup_sub_pane_g2

0x483e,	// (0x000362f8) bg_popup_sub_pane_g3

0x4856,	// (0x00036310) bg_popup_sub_pane_g4

0x484e,	// (0x00036308) bg_popup_sub_pane_g5

0x485e,	// (0x00036318) bg_popup_sub_pane_g6

0x4866,	// (0x00036320) bg_popup_sub_pane_g7

0x4876,	// (0x00036330) bg_popup_sub_pane_g8

0x486e,	// (0x00036328) bg_popup_sub_pane_g9

0x0008,

0xf86d,	// (0x00041327) bg_popup_sub_pane_g

0x2536,	// (0x00033ff0) bg_popup_window_pane_cp5_ParamLimits

0x2536,	// (0x00033ff0) bg_popup_window_pane_cp5

0x2552,	// (0x0003400c) popup_note_window_g1_ParamLimits

0x2552,	// (0x0003400c) popup_note_window_g1

0x255e,	// (0x00034018) popup_note_window_t1_ParamLimits

0x255e,	// (0x00034018) popup_note_window_t1

0x2574,	// (0x0003402e) popup_note_window_t2_ParamLimits

0x2574,	// (0x0003402e) popup_note_window_t2

0x258a,	// (0x00034044) popup_note_window_t3_ParamLimits

0x258a,	// (0x00034044) popup_note_window_t3

0x25a0,	// (0x0003405a) popup_note_window_t4_ParamLimits

0x25a0,	// (0x0003405a) popup_note_window_t4

0x25c8,	// (0x00034082) popup_note_window_t5_ParamLimits

0x25c8,	// (0x00034082) popup_note_window_t5

0x0004,

0xf597,	// (0x00041051) popup_note_window_t_ParamLimits

0xf597,	// (0x00041051) popup_note_window_t

0x25ec,	// (0x000340a6) bg_popup_window_pane_cp6_ParamLimits

0x25ec,	// (0x000340a6) bg_popup_window_pane_cp6

0x4fce,	// (0x00036a88) popup_note_image_window_g1_ParamLimits

0x4fce,	// (0x00036a88) popup_note_image_window_g1

0x4fda,	// (0x00036a94) popup_note_image_window_g2_ParamLimits

0x4fda,	// (0x00036a94) popup_note_image_window_g2

0x0001,

0xf861,	// (0x0004131b) popup_note_image_window_g_ParamLimits

0xf861,	// (0x0004131b) popup_note_image_window_g

0x4ff3,	// (0x00036aad) popup_note_image_window_t1_ParamLimits

0x4ff3,	// (0x00036aad) popup_note_image_window_t1

0x500c,	// (0x00036ac6) popup_note_image_window_t2_ParamLimits

0x500c,	// (0x00036ac6) popup_note_image_window_t2

0x5025,	// (0x00036adf) popup_note_image_window_t3_ParamLimits

0x5025,	// (0x00036adf) popup_note_image_window_t3

0x0002,

0xf866,	// (0x00041320) popup_note_image_window_t_ParamLimits

0xf866,	// (0x00041320) popup_note_image_window_t

0x4e8e,	// (0x00036948) bg_popup_window_pane_cp7_ParamLimits

0x4e8e,	// (0x00036948) bg_popup_window_pane_cp7

0x4ebe,	// (0x00036978) popup_note_wait_window_g1_ParamLimits

0x4ebe,	// (0x00036978) popup_note_wait_window_g1

0x4eca,	// (0x00036984) popup_note_wait_window_g2_ParamLimits

0x4eca,	// (0x00036984) popup_note_wait_window_g2

0x0002,

0xf84f,	// (0x00041309) popup_note_wait_window_g_ParamLimits

0xf84f,	// (0x00041309) popup_note_wait_window_g

0x4ee2,	// (0x0003699c) popup_note_wait_window_t1_ParamLimits

0x4ee2,	// (0x0003699c) popup_note_wait_window_t1

0x4f09,	// (0x000369c3) popup_note_wait_window_t2_ParamLimits

0x4f09,	// (0x000369c3) popup_note_wait_window_t2

0x4f27,	// (0x000369e1) popup_note_wait_window_t3_ParamLimits

0x4f27,	// (0x000369e1) popup_note_wait_window_t3

0x4f3a,	// (0x000369f4) popup_note_wait_window_t4_ParamLimits

0x4f3a,	// (0x000369f4) popup_note_wait_window_t4

0x0004,

0xf856,	// (0x00041310) popup_note_wait_window_t_ParamLimits

0xf856,	// (0x00041310) popup_note_wait_window_t

0x4f5f,	// (0x00036a19) wait_bar_pane_ParamLimits

0x4f5f,	// (0x00036a19) wait_bar_pane

0xe051,	// (0x0003fb0b) wait_anim_pane

0xe051,	// (0x0003fb0b) wait_border_pane

0xe047,	// (0x0003fb01) wait_anim_pane_g1

0xe047,	// (0x0003fb01) wait_anim_pane_g2

0x0001,

0xf716,	// (0x000411d0) wait_anim_pane_g

0x4e32,	// (0x000368ec) wait_border_pane_g1

0x4e3d,	// (0x000368f7) wait_border_pane_g2

0x4e46,	// (0x00036900) wait_border_pane_g3

0x0002,

0xf848,	// (0x00041302) wait_border_pane_g

0x4c9c,	// (0x00036756) bg_popup_window_pane_cp16_ParamLimits

0x4c9c,	// (0x00036756) bg_popup_window_pane_cp16

0x4d9c,	// (0x00036856) indicator_popup_pane_cp4_ParamLimits

0x4d9c,	// (0x00036856) indicator_popup_pane_cp4

0x4db0,	// (0x0003686a) popup_query_data_window_t1_ParamLimits

0x4db0,	// (0x0003686a) popup_query_data_window_t1

0x4dc2,	// (0x0003687c) popup_query_data_window_t2_ParamLimits

0x4dc2,	// (0x0003687c) popup_query_data_window_t2

0x4ddb,	// (0x00036895) popup_query_data_window_t3_ParamLimits

0x4ddb,	// (0x00036895) popup_query_data_window_t3

0x0002,

0xf841,	// (0x000412fb) popup_query_data_window_t_ParamLimits

0xf841,	// (0x000412fb) popup_query_data_window_t

0x4df5,	// (0x000368af) query_popup_data_pane_ParamLimits

0x4df5,	// (0x000368af) query_popup_data_pane

0x4e09,	// (0x000368c3) query_popup_data_pane_cp1_ParamLimits

0x4e09,	// (0x000368c3) query_popup_data_pane_cp1

0x4c9c,	// (0x00036756) bg_popup_window_pane_cp10_ParamLimits

0x4c9c,	// (0x00036756) bg_popup_window_pane_cp10

0x4cce,	// (0x00036788) indicator_popup_pane_ParamLimits

0x4cce,	// (0x00036788) indicator_popup_pane

0x4cf0,	// (0x000367aa) popup_query_code_window_t1_ParamLimits

0x4cf0,	// (0x000367aa) popup_query_code_window_t1

0x4d0a,	// (0x000367c4) popup_query_code_window_t2_ParamLimits

0x4d0a,	// (0x000367c4) popup_query_code_window_t2

0x4d53,	// (0x0003680d) popup_query_code_window_t3_ParamLimits

0x4d53,	// (0x0003680d) popup_query_code_window_t3

0x0002,

0xf83a,	// (0x000412f4) popup_query_code_window_t_ParamLimits

0xf83a,	// (0x000412f4) popup_query_code_window_t

0x4d82,	// (0x0003683c) query_popup_pane_ParamLimits

0x4d82,	// (0x0003683c) query_popup_pane

0x25ec,	// (0x000340a6) bg_popup_window_pane_cp15_ParamLimits

0x25ec,	// (0x000340a6) bg_popup_window_pane_cp15

0x260c,	// (0x000340c6) indicator_popup_pane_cp1_ParamLimits

0x260c,	// (0x000340c6) indicator_popup_pane_cp1

0x261f,	// (0x000340d9) indicator_popup_pane_cp2_ParamLimits

0x261f,	// (0x000340d9) indicator_popup_pane_cp2

0x263a,	// (0x000340f4) popup_query_data_code_window_g1_ParamLimits

0x263a,	// (0x000340f4) popup_query_data_code_window_g1

0x264d,	// (0x00034107) popup_query_data_code_window_t1_ParamLimits

0x264d,	// (0x00034107) popup_query_data_code_window_t1

0x265f,	// (0x00034119) popup_query_data_code_window_t2_ParamLimits

0x265f,	// (0x00034119) popup_query_data_code_window_t2

0x2671,	// (0x0003412b) popup_query_data_code_window_t3_ParamLimits

0x2671,	// (0x0003412b) popup_query_data_code_window_t3

0x2687,	// (0x00034141) popup_query_data_code_window_t4_ParamLimits

0x2687,	// (0x00034141) popup_query_data_code_window_t4

0x0003,

0xf5a2,	// (0x0004105c) popup_query_data_code_window_t_ParamLimits

0xf5a2,	// (0x0004105c) popup_query_data_code_window_t

0x0af7,	// (0x000325b1) list_single_midp_graphic_pane_g3

0x26a1,	// (0x0003415b) query_popup_data_pane_cp2_ParamLimits

0x26b4,	// (0x0003416e) query_popup_pane_cp2_ParamLimits

0x26b4,	// (0x0003416e) query_popup_pane_cp2

0xe051,	// (0x0003fb0b) bg_popup_window_pane_cp11

0x4c94,	// (0x0003674e) heading_pane_cp5

0x27a4,	// (0x0003425e) listscroll_popup_info_pane

0xe051,	// (0x0003fb0b) input_focus_pane_cp3

0x26cf,	// (0x00034189) query_popup_pane_t1

0x26dd,	// (0x00034197) list_popup_info_pane_ParamLimits

0x26dd,	// (0x00034197) list_popup_info_pane

0x26ec,	// (0x000341a6) listscroll_popup_info_pane_g1

0x26f4,	// (0x000341ae) scroll_pane_cp7

0x26fe,	// (0x000341b8) popup_info_list_pane_t1_ParamLimits

0x26fe,	// (0x000341b8) popup_info_list_pane_t1

0x2718,	// (0x000341d2) popup_info_list_pane_t2_ParamLimits

0x2718,	// (0x000341d2) popup_info_list_pane_t2

0x0001,

0xf5ab,	// (0x00041065) popup_info_list_pane_t_ParamLimits

0xf5ab,	// (0x00041065) popup_info_list_pane_t

0xe051,	// (0x0003fb0b) bg_popup_window_pane_cp12

0x6081,	// (0x00037b3b) find_popup_pane

0x22ba,	// (0x00033d74) bg_popup_window_pane_cp3

0x2732,	// (0x000341ec) heading_pane_cp3

0x273e,	// (0x000341f8) listscroll_popup_graphic_pane

0xe051,	// (0x0003fb0b) bg_popup_window_pane_cp4

0xb146,	// (0x0003cc00) heading_pane_cp4

0x27a4,	// (0x0003425e) listscroll_popup_colour_pane

0xb150,	// (0x0003cc0a) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xb150,	// (0x0003cc0a) cell_large_graphic_colour_none_popup_pane

0xb164,	// (0x0003cc1e) grid_large_graphic_colour_popup_pane_ParamLimits

0xb164,	// (0x0003cc1e) grid_large_graphic_colour_popup_pane

0xb190,	// (0x0003cc4a) listscroll_popup_colour_pane_g1_ParamLimits

0xb190,	// (0x0003cc4a) listscroll_popup_colour_pane_g1

0xb1a7,	// (0x0003cc61) listscroll_popup_colour_pane_g2_ParamLimits

0xb1a7,	// (0x0003cc61) listscroll_popup_colour_pane_g2

0xb1be,	// (0x0003cc78) listscroll_popup_colour_pane_g3_ParamLimits

0xb1be,	// (0x0003cc78) listscroll_popup_colour_pane_g3

0xb1ce,	// (0x0003cc88) listscroll_popup_colour_pane_g4_ParamLimits

0xb1ce,	// (0x0003cc88) listscroll_popup_colour_pane_g4

0x0003,

0xf5b0,	// (0x0004106a) listscroll_popup_colour_pane_g_ParamLimits

0xf5b0,	// (0x0004106a) listscroll_popup_colour_pane_g

0x283e,	// (0x000342f8) scroll_pane_cp6_ParamLimits

0x283e,	// (0x000342f8) scroll_pane_cp6

0xb1e2,	// (0x0003cc9c) cell_large_graphic_colour_popup_pane_ParamLimits

0xb1e2,	// (0x0003cc9c) cell_large_graphic_colour_popup_pane

0x2875,	// (0x0003432f) cell_large_graphic_colour_none_popup_pane_t1

0xe051,	// (0x0003fb0b) grid_highlight_pane_cp5

0x2884,	// (0x0003433e) cell_large_graphic_colour_popup_pane_g1

0x288c,	// (0x00034346) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5b9,	// (0x00041073) cell_large_graphic_colour_popup_pane_g

0x2894,	// (0x0003434e) cell_large_graphic_colour_popup_pane_g2_copy1

0x289d,	// (0x00034357) grid_highlight_pane_cp4

0x28a5,	// (0x0003435f) bg_popup_window_pane_cp8_ParamLimits

0x28a5,	// (0x0003435f) bg_popup_window_pane_cp8

0x28c0,	// (0x0003437a) popup_snote_single_text_window_g1_ParamLimits

0x28c0,	// (0x0003437a) popup_snote_single_text_window_g1

0x28d2,	// (0x0003438c) popup_snote_single_text_window_t1_ParamLimits

0x28d2,	// (0x0003438c) popup_snote_single_text_window_t1

0x28e5,	// (0x0003439f) popup_snote_single_text_window_t2_ParamLimits

0x28e5,	// (0x0003439f) popup_snote_single_text_window_t2

0x28f8,	// (0x000343b2) popup_snote_single_text_window_t3_ParamLimits

0x28f8,	// (0x000343b2) popup_snote_single_text_window_t3

0x2931,	// (0x000343eb) popup_snote_single_text_window_t4_ParamLimits

0x2931,	// (0x000343eb) popup_snote_single_text_window_t4

0x2965,	// (0x0003441f) popup_snote_single_text_window_t5_ParamLimits

0x2965,	// (0x0003441f) popup_snote_single_text_window_t5

0x0004,

0xf5be,	// (0x00041078) popup_snote_single_text_window_t_ParamLimits

0xf5be,	// (0x00041078) popup_snote_single_text_window_t

0x2994,	// (0x0003444e) bg_popup_window_pane_cp9_ParamLimits

0x2994,	// (0x0003444e) bg_popup_window_pane_cp9

0x28c0,	// (0x0003437a) popup_snote_single_graphic_window_g1_ParamLimits

0x28c0,	// (0x0003437a) popup_snote_single_graphic_window_g1

0x29a2,	// (0x0003445c) popup_snote_single_graphic_window_g2_ParamLimits

0x29a2,	// (0x0003445c) popup_snote_single_graphic_window_g2

0x0001,

0xf5c9,	// (0x00041083) popup_snote_single_graphic_window_g_ParamLimits

0xf5c9,	// (0x00041083) popup_snote_single_graphic_window_g

0x29ae,	// (0x00034468) popup_snote_single_graphic_window_t1_ParamLimits

0x29ae,	// (0x00034468) popup_snote_single_graphic_window_t1

0x29c1,	// (0x0003447b) popup_snote_single_graphic_window_t2_ParamLimits

0x29c1,	// (0x0003447b) popup_snote_single_graphic_window_t2

0x29d4,	// (0x0003448e) popup_snote_single_graphic_window_t3_ParamLimits

0x29d4,	// (0x0003448e) popup_snote_single_graphic_window_t3

0x2a0d,	// (0x000344c7) popup_snote_single_graphic_window_t4_ParamLimits

0x2a0d,	// (0x000344c7) popup_snote_single_graphic_window_t4

0x2a41,	// (0x000344fb) popup_snote_single_graphic_window_t5_ParamLimits

0x2a41,	// (0x000344fb) popup_snote_single_graphic_window_t5

0x0004,

0xf5ce,	// (0x00041088) popup_snote_single_graphic_window_t_ParamLimits

0xf5ce,	// (0x00041088) popup_snote_single_graphic_window_t

0x5fbf,	// (0x00037a79) grid_graphic_popup_pane_ParamLimits

0x5fbf,	// (0x00037a79) grid_graphic_popup_pane

0x5fed,	// (0x00037aa7) listscroll_popup_graphic_pane_g1_ParamLimits

0x5fed,	// (0x00037aa7) listscroll_popup_graphic_pane_g1

0xd6fe,	// (0x0003f1b8) listscroll_popup_graphic_pane_g2_ParamLimits

0xd6fe,	// (0x0003f1b8) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b7,	// (0x00041471) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b7,	// (0x00041471) listscroll_popup_graphic_pane_g

0x6015,	// (0x00037acf) scroll_pane_cp5

0xd6be,	// (0x0003f178) cell_graphic_popup_pane_ParamLimits

0xd6be,	// (0x0003f178) cell_graphic_popup_pane

0x5f48,	// (0x00037a02) cell_graphic_popup_pane_g1

0x5f50,	// (0x00037a0a) cell_graphic_popup_pane_g2

0x2894,	// (0x0003434e) cell_graphic_popup_pane_g3

0x0002,

0xf9b0,	// (0x0004146a) cell_graphic_popup_pane_g

0x5f59,	// (0x00037a13) cell_graphic_popup_pane_t2

0x289d,	// (0x00034357) grid_highlight_pane_cp3

0x2a82,	// (0x0003453c) list_gen_pane_ParamLimits

0x2a82,	// (0x0003453c) list_gen_pane

0x2ab4,	// (0x0003456e) scroll_pane

0xd679,	// (0x0003f133) bg_list_pane_g1_ParamLimits

0xd679,	// (0x0003f133) bg_list_pane_g1

0x5ec5,	// (0x0003797f) bg_list_pane_g2_ParamLimits

0x5ec5,	// (0x0003797f) bg_list_pane_g2

0x5ed8,	// (0x00037992) bg_list_pane_g3_ParamLimits

0x5ed8,	// (0x00037992) bg_list_pane_g3

0x5eea,	// (0x000379a4) bg_list_pane_g4_ParamLimits

0x5eea,	// (0x000379a4) bg_list_pane_g4

0xd694,	// (0x0003f14e) bg_list_pane_g5_ParamLimits

0xd694,	// (0x0003f14e) bg_list_pane_g5

0x0004,

0xf9a5,	// (0x0004145f) bg_list_pane_g_ParamLimits

0xf9a5,	// (0x0004145f) bg_list_pane_g

0xd63c,	// (0x0003f0f6) list_double2_graphic_large_graphic_pane_ParamLimits

0xd63c,	// (0x0003f0f6) list_double2_graphic_large_graphic_pane

0xd63c,	// (0x0003f0f6) list_double2_graphic_pane_ParamLimits

0xd63c,	// (0x0003f0f6) list_double2_graphic_pane

0xd63c,	// (0x0003f0f6) list_double2_large_graphic_pane_ParamLimits

0xd63c,	// (0x0003f0f6) list_double2_large_graphic_pane

0xd63c,	// (0x0003f0f6) list_double2_pane_ParamLimits

0xd63c,	// (0x0003f0f6) list_double2_pane

0xd63c,	// (0x0003f0f6) list_double_graphic_heading_pane_ParamLimits

0xd63c,	// (0x0003f0f6) list_double_graphic_heading_pane

0xd63c,	// (0x0003f0f6) list_double_graphic_pane_ParamLimits

0xd63c,	// (0x0003f0f6) list_double_graphic_pane

0xd63c,	// (0x0003f0f6) list_double_heading_pane_ParamLimits

0xd63c,	// (0x0003f0f6) list_double_heading_pane

0xd63c,	// (0x0003f0f6) list_double_large_graphic_pane_ParamLimits

0xd63c,	// (0x0003f0f6) list_double_large_graphic_pane

0xd63c,	// (0x0003f0f6) list_double_number_pane_ParamLimits

0xd63c,	// (0x0003f0f6) list_double_number_pane

0xd63c,	// (0x0003f0f6) list_double_pane_ParamLimits

0xd63c,	// (0x0003f0f6) list_double_pane

0xd63c,	// (0x0003f0f6) list_double_time_pane_ParamLimits

0xd63c,	// (0x0003f0f6) list_double_time_pane

0xd63c,	// (0x0003f0f6) list_setting_number_pane_ParamLimits

0xd63c,	// (0x0003f0f6) list_setting_number_pane

0xd63c,	// (0x0003f0f6) list_setting_pane_ParamLimits

0xd63c,	// (0x0003f0f6) list_setting_pane

0xbc0e,	// (0x0003d6c8) list_single_2graphic_pane_ParamLimits

0xbc0e,	// (0x0003d6c8) list_single_2graphic_pane

0xbc0e,	// (0x0003d6c8) list_single_graphic_heading_pane_ParamLimits

0xbc0e,	// (0x0003d6c8) list_single_graphic_heading_pane

0xbc0e,	// (0x0003d6c8) list_single_graphic_pane_ParamLimits

0xbc0e,	// (0x0003d6c8) list_single_graphic_pane

0xbc0e,	// (0x0003d6c8) list_single_heading_pane_ParamLimits

0xbc0e,	// (0x0003d6c8) list_single_heading_pane

0xd664,	// (0x0003f11e) list_single_large_graphic_pane_ParamLimits

0xd664,	// (0x0003f11e) list_single_large_graphic_pane

0xbc0e,	// (0x0003d6c8) list_single_number_heading_pane_ParamLimits

0xbc0e,	// (0x0003d6c8) list_single_number_heading_pane

0xbc0e,	// (0x0003d6c8) list_single_number_pane_ParamLimits

0xbc0e,	// (0x0003d6c8) list_single_number_pane

0xbc0e,	// (0x0003d6c8) list_single_pane_ParamLimits

0xbc0e,	// (0x0003d6c8) list_single_pane

0xe051,	// (0x0003fb0b) list_highlight_pane_cp1

0x0b26,	// (0x000325e0) list_single_pane_g1_ParamLimits

0x0b26,	// (0x000325e0) list_single_pane_g1

0x0b32,	// (0x000325ec) list_single_pane_g2_ParamLimits

0x0b32,	// (0x000325ec) list_single_pane_g2

0x0001,

0xf5e0,	// (0x0004109a) list_single_pane_g_ParamLimits

0xf5e0,	// (0x0004109a) list_single_pane_g

0x106e,	// (0x00032b28) list_single_pane_t1_ParamLimits

0x106e,	// (0x00032b28) list_single_pane_t1

0x0b26,	// (0x000325e0) list_single_number_pane_g1_ParamLimits

0x0b26,	// (0x000325e0) list_single_number_pane_g1

0x0b32,	// (0x000325ec) list_single_number_pane_g2_ParamLimits

0x0b32,	// (0x000325ec) list_single_number_pane_g2

0x0001,

0xf5e0,	// (0x0004109a) list_single_number_pane_g_ParamLimits

0xf5e0,	// (0x0004109a) list_single_number_pane_g

0x0abc,	// (0x00032576) list_single_number_pane_t1_ParamLimits

0x0abc,	// (0x00032576) list_single_number_pane_t1

0xbbd0,	// (0x0003d68a) list_single_number_pane_t2_ParamLimits

0xbbd0,	// (0x0003d68a) list_single_number_pane_t2

0x0001,

0xf966,	// (0x00041420) list_single_number_pane_t_ParamLimits

0xf966,	// (0x00041420) list_single_number_pane_t

0xb20d,	// (0x0003ccc7) list_single_graphic_pane_g1_ParamLimits

0xb20d,	// (0x0003ccc7) list_single_graphic_pane_g1

0x0b26,	// (0x000325e0) list_single_graphic_pane_g2_ParamLimits

0x0b26,	// (0x000325e0) list_single_graphic_pane_g2

0x0b32,	// (0x000325ec) list_single_graphic_pane_g3_ParamLimits

0x0b32,	// (0x000325ec) list_single_graphic_pane_g3

0x0002,

0xf5d9,	// (0x00041093) list_single_graphic_pane_g_ParamLimits

0xf5d9,	// (0x00041093) list_single_graphic_pane_g

0xb219,	// (0x0003ccd3) list_single_graphic_pane_t1_ParamLimits

0xb219,	// (0x0003ccd3) list_single_graphic_pane_t1

0x0b26,	// (0x000325e0) list_single_heading_pane_g1_ParamLimits

0x0b26,	// (0x000325e0) list_single_heading_pane_g1

0x0b32,	// (0x000325ec) list_single_heading_pane_g2_ParamLimits

0x0b32,	// (0x000325ec) list_single_heading_pane_g2

0x0001,

0xf5e0,	// (0x0004109a) list_single_heading_pane_g_ParamLimits

0xf5e0,	// (0x0004109a) list_single_heading_pane_g

0xb22f,	// (0x0003cce9) list_single_heading_pane_t1_ParamLimits

0xb22f,	// (0x0003cce9) list_single_heading_pane_t1

0xb245,	// (0x0003ccff) list_single_heading_pane_t2_ParamLimits

0xb245,	// (0x0003ccff) list_single_heading_pane_t2

0x0001,

0xf5e5,	// (0x0004109f) list_single_heading_pane_t_ParamLimits

0xf5e5,	// (0x0004109f) list_single_heading_pane_t

0x0b26,	// (0x000325e0) list_single_number_heading_pane_g1_ParamLimits

0x0b26,	// (0x000325e0) list_single_number_heading_pane_g1

0x0b32,	// (0x000325ec) list_single_number_heading_pane_g2_ParamLimits

0x0b32,	// (0x000325ec) list_single_number_heading_pane_g2

0x0001,

0xf5e0,	// (0x0004109a) list_single_number_heading_pane_g_ParamLimits

0xf5e0,	// (0x0004109a) list_single_number_heading_pane_g

0xb22f,	// (0x0003cce9) list_single_number_heading_pane_t1_ParamLimits

0xb22f,	// (0x0003cce9) list_single_number_heading_pane_t1

0xb257,	// (0x0003cd11) list_single_number_heading_pane_t2_ParamLimits

0xb257,	// (0x0003cd11) list_single_number_heading_pane_t2

0x104a,	// (0x00032b04) list_single_number_heading_pane_t3_ParamLimits

0x104a,	// (0x00032b04) list_single_number_heading_pane_t3

0x0002,

0xf5ea,	// (0x000410a4) list_single_number_heading_pane_t_ParamLimits

0xf5ea,	// (0x000410a4) list_single_number_heading_pane_t

0x0a98,	// (0x00032552) list_single_graphic_heading_pane_g1_ParamLimits

0x0a98,	// (0x00032552) list_single_graphic_heading_pane_g1

0xb269,	// (0x0003cd23) list_single_graphic_heading_pane_g4_ParamLimits

0xb269,	// (0x0003cd23) list_single_graphic_heading_pane_g4

0x0b32,	// (0x000325ec) list_single_graphic_heading_pane_g5_ParamLimits

0x0b32,	// (0x000325ec) list_single_graphic_heading_pane_g5

0x0002,

0xf5f1,	// (0x000410ab) list_single_graphic_heading_pane_g_ParamLimits

0xf5f1,	// (0x000410ab) list_single_graphic_heading_pane_g

0xb22f,	// (0x0003cce9) list_single_graphic_heading_pane_t1_ParamLimits

0xb22f,	// (0x0003cce9) list_single_graphic_heading_pane_t1

0xb27a,	// (0x0003cd34) list_single_graphic_heading_pane_t2_ParamLimits

0xb27a,	// (0x0003cd34) list_single_graphic_heading_pane_t2

0x0001,

0xf5f8,	// (0x000410b2) list_single_graphic_heading_pane_t_ParamLimits

0xf5f8,	// (0x000410b2) list_single_graphic_heading_pane_t

0x1084,	// (0x00032b3e) list_single_large_graphic_pane_g1_ParamLimits

0x1084,	// (0x00032b3e) list_single_large_graphic_pane_g1

0x1090,	// (0x00032b4a) list_single_large_graphic_pane_g2_ParamLimits

0x1090,	// (0x00032b4a) list_single_large_graphic_pane_g2

0x109c,	// (0x00032b56) list_single_large_graphic_pane_g3_ParamLimits

0x109c,	// (0x00032b56) list_single_large_graphic_pane_g3

0x0002,

0xf5fd,	// (0x000410b7) list_single_large_graphic_pane_g_ParamLimits

0xf5fd,	// (0x000410b7) list_single_large_graphic_pane_g

0x4e3d,	// (0x000368f7) wait_border_pane_g2_copy1

0xb28c,	// (0x0003cd46) list_single_large_graphic_pane_g4_cp2

0x10a8,	// (0x00032b62) list_single_large_graphic_pane_t1_ParamLimits

0x10a8,	// (0x00032b62) list_single_large_graphic_pane_t1

0xb294,	// (0x0003cd4e) list_double_pane_g1_ParamLimits

0xb294,	// (0x0003cd4e) list_double_pane_g1

0xb2a0,	// (0x0003cd5a) list_double_pane_g2_ParamLimits

0xb2a0,	// (0x0003cd5a) list_double_pane_g2

0x0001,

0xf604,	// (0x000410be) list_double_pane_g_ParamLimits

0xf604,	// (0x000410be) list_double_pane_g

0xb2ac,	// (0x0003cd66) list_double_pane_t1_ParamLimits

0xb2ac,	// (0x0003cd66) list_double_pane_t1

0xb2c2,	// (0x0003cd7c) list_double_pane_t2_ParamLimits

0xb2c2,	// (0x0003cd7c) list_double_pane_t2

0x0001,

0xf609,	// (0x000410c3) list_double_pane_t_ParamLimits

0xf609,	// (0x000410c3) list_double_pane_t

0xb2d4,	// (0x0003cd8e) list_double2_pane_g1_ParamLimits

0xb2d4,	// (0x0003cd8e) list_double2_pane_g1

0xb2a0,	// (0x0003cd5a) list_double2_pane_g2_ParamLimits

0xb2a0,	// (0x0003cd5a) list_double2_pane_g2

0x0001,

0xf60e,	// (0x000410c8) list_double2_pane_g_ParamLimits

0xf60e,	// (0x000410c8) list_double2_pane_g

0xb2ac,	// (0x0003cd66) list_double2_pane_t1_ParamLimits

0xb2ac,	// (0x0003cd66) list_double2_pane_t1

0xb2e5,	// (0x0003cd9f) list_double2_pane_t2_ParamLimits

0xb2e5,	// (0x0003cd9f) list_double2_pane_t2

0x0001,

0xf613,	// (0x000410cd) list_double2_pane_t_ParamLimits

0xf613,	// (0x000410cd) list_double2_pane_t

0xb294,	// (0x0003cd4e) list_double_number_pane_g1_ParamLimits

0xb294,	// (0x0003cd4e) list_double_number_pane_g1

0xb2a0,	// (0x0003cd5a) list_double_number_pane_g2_ParamLimits

0xb2a0,	// (0x0003cd5a) list_double_number_pane_g2

0x0001,

0xf604,	// (0x000410be) list_double_number_pane_g_ParamLimits

0xf604,	// (0x000410be) list_double_number_pane_g

0xb2f7,	// (0x0003cdb1) list_double_number_pane_t1_ParamLimits

0xb2f7,	// (0x0003cdb1) list_double_number_pane_t1

0xb309,	// (0x0003cdc3) list_double_number_pane_t2_ParamLimits

0xb309,	// (0x0003cdc3) list_double_number_pane_t2

0xb31f,	// (0x0003cdd9) list_double_number_pane_t3_ParamLimits

0xb31f,	// (0x0003cdd9) list_double_number_pane_t3

0x0002,

0xf618,	// (0x000410d2) list_double_number_pane_t_ParamLimits

0xf618,	// (0x000410d2) list_double_number_pane_t

0xb331,	// (0x0003cdeb) list_double_graphic_pane_g1_ParamLimits

0xb331,	// (0x0003cdeb) list_double_graphic_pane_g1

0xb33d,	// (0x0003cdf7) list_double_graphic_pane_g2_ParamLimits

0xb33d,	// (0x0003cdf7) list_double_graphic_pane_g2

0xb34c,	// (0x0003ce06) list_double_graphic_pane_g3_ParamLimits

0xb34c,	// (0x0003ce06) list_double_graphic_pane_g3

0x0003,

0xf61f,	// (0x000410d9) list_double_graphic_pane_g_ParamLimits

0xf61f,	// (0x000410d9) list_double_graphic_pane_g

0xb364,	// (0x0003ce1e) list_double_graphic_pane_t1_ParamLimits

0xb364,	// (0x0003ce1e) list_double_graphic_pane_t1

0xb37a,	// (0x0003ce34) list_double_graphic_pane_t2_ParamLimits

0xb37a,	// (0x0003ce34) list_double_graphic_pane_t2

0x0001,

0xf628,	// (0x000410e2) list_double_graphic_pane_t_ParamLimits

0xf628,	// (0x000410e2) list_double_graphic_pane_t

0xb331,	// (0x0003cdeb) list_double2_graphic_pane_g1_ParamLimits

0xb331,	// (0x0003cdeb) list_double2_graphic_pane_g1

0xb38c,	// (0x0003ce46) list_double2_graphic_pane_g2_ParamLimits

0xb38c,	// (0x0003ce46) list_double2_graphic_pane_g2

0xb398,	// (0x0003ce52) list_double2_graphic_pane_g3_ParamLimits

0xb398,	// (0x0003ce52) list_double2_graphic_pane_g3

0x0002,

0xf62d,	// (0x000410e7) list_double2_graphic_pane_g_ParamLimits

0xf62d,	// (0x000410e7) list_double2_graphic_pane_g

0xb309,	// (0x0003cdc3) list_double2_graphic_pane_t1_ParamLimits

0xb309,	// (0x0003cdc3) list_double2_graphic_pane_t1

0xb3a4,	// (0x0003ce5e) list_double2_graphic_pane_t2_ParamLimits

0xb3a4,	// (0x0003ce5e) list_double2_graphic_pane_t2

0x0001,

0xf634,	// (0x000410ee) list_double2_graphic_pane_t_ParamLimits

0xf634,	// (0x000410ee) list_double2_graphic_pane_t

0xb3b6,	// (0x0003ce70) list_double_large_graphic_pane_g1_ParamLimits

0xb3b6,	// (0x0003ce70) list_double_large_graphic_pane_g1

0xb2d4,	// (0x0003cd8e) list_double_large_graphic_pane_g2_ParamLimits

0xb2d4,	// (0x0003cd8e) list_double_large_graphic_pane_g2

0xb2a0,	// (0x0003cd5a) list_double_large_graphic_pane_g3_ParamLimits

0xb2a0,	// (0x0003cd5a) list_double_large_graphic_pane_g3

0xb3e1,	// (0x0003ce9b) list_double_large_graphic_pane_g4_ParamLimits

0xb3e1,	// (0x0003ce9b) list_double_large_graphic_pane_g4

0x0004,

0xf639,	// (0x000410f3) list_double_large_graphic_pane_g_ParamLimits

0xf639,	// (0x000410f3) list_double_large_graphic_pane_g

0xb3f3,	// (0x0003cead) list_double_large_graphic_pane_t1_ParamLimits

0xb3f3,	// (0x0003cead) list_double_large_graphic_pane_t1

0xb40c,	// (0x0003cec6) list_double_large_graphic_pane_t2_ParamLimits

0xb40c,	// (0x0003cec6) list_double_large_graphic_pane_t2

0x0001,

0xf644,	// (0x000410fe) list_double_large_graphic_pane_t_ParamLimits

0xf644,	// (0x000410fe) list_double_large_graphic_pane_t

0xb41e,	// (0x0003ced8) list_double2_large_graphic_pane_g1_ParamLimits

0xb41e,	// (0x0003ced8) list_double2_large_graphic_pane_g1

0xb2d4,	// (0x0003cd8e) list_double2_large_graphic_pane_g2_ParamLimits

0xb2d4,	// (0x0003cd8e) list_double2_large_graphic_pane_g2

0xb2a0,	// (0x0003cd5a) list_double2_large_graphic_pane_g3_ParamLimits

0xb2a0,	// (0x0003cd5a) list_double2_large_graphic_pane_g3

0x0002,

0xf649,	// (0x00041103) list_double2_large_graphic_pane_g_ParamLimits

0xf649,	// (0x00041103) list_double2_large_graphic_pane_g

0xb42a,	// (0x0003cee4) list_double2_large_graphic_pane_t1_ParamLimits

0xb42a,	// (0x0003cee4) list_double2_large_graphic_pane_t1

0xb440,	// (0x0003cefa) list_double2_large_graphic_pane_t2_ParamLimits

0xb440,	// (0x0003cefa) list_double2_large_graphic_pane_t2

0x0001,

0xf650,	// (0x0004110a) list_double2_large_graphic_pane_t_ParamLimits

0xf650,	// (0x0004110a) list_double2_large_graphic_pane_t

0xb452,	// (0x0003cf0c) list_double_heading_pane_g1_ParamLimits

0xb452,	// (0x0003cf0c) list_double_heading_pane_g1

0xb463,	// (0x0003cf1d) list_double_heading_pane_g2_ParamLimits

0xb463,	// (0x0003cf1d) list_double_heading_pane_g2

0x0001,

0xf655,	// (0x0004110f) list_double_heading_pane_g_ParamLimits

0xf655,	// (0x0004110f) list_double_heading_pane_g

0xb46f,	// (0x0003cf29) list_double_heading_pane_t1_ParamLimits

0xb46f,	// (0x0003cf29) list_double_heading_pane_t1

0xb485,	// (0x0003cf3f) list_double_heading_pane_t2_ParamLimits

0xb485,	// (0x0003cf3f) list_double_heading_pane_t2

0x0001,

0xf65a,	// (0x00041114) list_double_heading_pane_t_ParamLimits

0xf65a,	// (0x00041114) list_double_heading_pane_t

0xb497,	// (0x0003cf51) list_double_graphic_heading_pane_g1_ParamLimits

0xb497,	// (0x0003cf51) list_double_graphic_heading_pane_g1

0xb452,	// (0x0003cf0c) list_double_graphic_heading_pane_g2_ParamLimits

0xb452,	// (0x0003cf0c) list_double_graphic_heading_pane_g2

0xb463,	// (0x0003cf1d) list_double_graphic_heading_pane_g3_ParamLimits

0xb463,	// (0x0003cf1d) list_double_graphic_heading_pane_g3

0x0002,

0xf65f,	// (0x00041119) list_double_graphic_heading_pane_g_ParamLimits

0xf65f,	// (0x00041119) list_double_graphic_heading_pane_g

0xb4a3,	// (0x0003cf5d) list_double_graphic_heading_pane_t1_ParamLimits

0xb4a3,	// (0x0003cf5d) list_double_graphic_heading_pane_t1

0xb4b9,	// (0x0003cf73) list_double_graphic_heading_pane_t2_ParamLimits

0xb4b9,	// (0x0003cf73) list_double_graphic_heading_pane_t2

0x0001,

0xf666,	// (0x00041120) list_double_graphic_heading_pane_t_ParamLimits

0xf666,	// (0x00041120) list_double_graphic_heading_pane_t

0xb2d4,	// (0x0003cd8e) list_double_time_pane_g1_ParamLimits

0xb2d4,	// (0x0003cd8e) list_double_time_pane_g1

0xb2a0,	// (0x0003cd5a) list_double_time_pane_g2_ParamLimits

0xb2a0,	// (0x0003cd5a) list_double_time_pane_g2

0x0001,

0xf60e,	// (0x000410c8) list_double_time_pane_g_ParamLimits

0xf60e,	// (0x000410c8) list_double_time_pane_g

0xb42a,	// (0x0003cee4) list_double_time_pane_t1_ParamLimits

0xb42a,	// (0x0003cee4) list_double_time_pane_t1

0xb4cb,	// (0x0003cf85) list_double_time_pane_t2_ParamLimits

0xb4cb,	// (0x0003cf85) list_double_time_pane_t2

0xb4dd,	// (0x0003cf97) list_double_time_pane_t3_ParamLimits

0xb4dd,	// (0x0003cf97) list_double_time_pane_t3

0xb4ef,	// (0x0003cfa9) list_double_time_pane_t4_ParamLimits

0xb4ef,	// (0x0003cfa9) list_double_time_pane_t4

0x0003,

0xf66b,	// (0x00041125) list_double_time_pane_t_ParamLimits

0xf66b,	// (0x00041125) list_double_time_pane_t

0xb501,	// (0x0003cfbb) list_setting_pane_g1_ParamLimits

0xb501,	// (0x0003cfbb) list_setting_pane_g1

0xb50d,	// (0x0003cfc7) list_setting_pane_g2_ParamLimits

0xb50d,	// (0x0003cfc7) list_setting_pane_g2

0x0001,

0xf674,	// (0x0004112e) list_setting_pane_g_ParamLimits

0xf674,	// (0x0004112e) list_setting_pane_g

0xb519,	// (0x0003cfd3) list_setting_pane_t1_ParamLimits

0xb519,	// (0x0003cfd3) list_setting_pane_t1

0xb533,	// (0x0003cfed) list_setting_pane_t2_ParamLimits

0xb533,	// (0x0003cfed) list_setting_pane_t2

0x0002,

0xf679,	// (0x00041133) list_setting_pane_t_ParamLimits

0xf679,	// (0x00041133) list_setting_pane_t

0xb572,	// (0x0003d02c) set_value_pane_cp_ParamLimits

0xb572,	// (0x0003d02c) set_value_pane_cp

0xb580,	// (0x0003d03a) list_setting_number_pane_g1_ParamLimits

0xb580,	// (0x0003d03a) list_setting_number_pane_g1

0xb58c,	// (0x0003d046) list_setting_number_pane_g2_ParamLimits

0xb58c,	// (0x0003d046) list_setting_number_pane_g2

0x0001,

0xf680,	// (0x0004113a) list_setting_number_pane_g_ParamLimits

0xf680,	// (0x0004113a) list_setting_number_pane_g

0xb598,	// (0x0003d052) list_setting_number_pane_t1_ParamLimits

0xb598,	// (0x0003d052) list_setting_number_pane_t1

0xb5b1,	// (0x0003d06b) list_setting_number_pane_t2_ParamLimits

0xb5b1,	// (0x0003d06b) list_setting_number_pane_t2

0xb5cb,	// (0x0003d085) list_setting_number_pane_t3_ParamLimits

0xb5cb,	// (0x0003d085) list_setting_number_pane_t3

0x0003,

0xf685,	// (0x0004113f) list_setting_number_pane_t_ParamLimits

0xf685,	// (0x0004113f) list_setting_number_pane_t

0xb572,	// (0x0003d02c) set_value_pane_ParamLimits

0xb572,	// (0x0003d02c) set_value_pane

0x2ae8,	// (0x000345a2) bg_set_opt_pane_ParamLimits

0x2ae8,	// (0x000345a2) bg_set_opt_pane

0x018e,	// (0x00031c48) set_value_pane_t1

0x2b09,	// (0x000345c3) slider_set_pane_cp3

0x2b12,	// (0x000345cc) volume_small_pane_cp

0x2b1b,	// (0x000345d5) list_form_gen_pane

0x2b24,	// (0x000345de) scroll_pane_cp8

0xb60e,	// (0x0003d0c8) form_field_data_pane_ParamLimits

0xb60e,	// (0x0003d0c8) form_field_data_pane

0xb629,	// (0x0003d0e3) form_field_data_wide_pane_ParamLimits

0xb629,	// (0x0003d0e3) form_field_data_wide_pane

0x01e9,	// (0x00031ca3) form_field_popup_pane_ParamLimits

0x01e9,	// (0x00031ca3) form_field_popup_pane

0xb64d,	// (0x0003d107) form_field_popup_wide_pane_ParamLimits

0xb64d,	// (0x0003d107) form_field_popup_wide_pane

0x022c,	// (0x00031ce6) form_field_slider_pane_ParamLimits

0x022c,	// (0x00031ce6) form_field_slider_pane

0x023f,	// (0x00031cf9) form_field_slider_wide_pane_ParamLimits

0x023f,	// (0x00031cf9) form_field_slider_wide_pane

0x2b35,	// (0x000345ef) data_form_pane

0xb678,	// (0x0003d132) form_field_data_pane_t1

0x2b41,	// (0x000345fb) input_focus_pane

0x2b4f,	// (0x00034609) data_form_wide_pane

0x0282,	// (0x00031d3c) form_field_data_wide_pane_t1

0x28b2,	// (0x0003436c) input_focus_pane_cp6

0xb692,	// (0x0003d14c) form_field_popup_pane_t1

0x2b41,	// (0x000345fb) input_focus_pane_cp7

0x2b7b,	// (0x00034635) list_form_pane

0x02c6,	// (0x00031d80) form_field_popup_wide_pane_t1

0x2b41,	// (0x000345fb) input_focus_pane_cp8

0x2b87,	// (0x00034641) list_form_wide_pane

0xb6b4,	// (0x0003d16e) form_field_slider_pane_t1_ParamLimits

0xb6b4,	// (0x0003d16e) form_field_slider_pane_t1

0xb6cc,	// (0x0003d186) form_field_slider_pane_t2_ParamLimits

0xb6cc,	// (0x0003d186) form_field_slider_pane_t2

0x0001,

0xf695,	// (0x0004114f) form_field_slider_pane_t_ParamLimits

0xf695,	// (0x0004114f) form_field_slider_pane_t

0x2536,	// (0x00033ff0) input_focus_pane_cp9_ParamLimits

0x2536,	// (0x00033ff0) input_focus_pane_cp9

0xb6e1,	// (0x0003d19b) slider_cont_pane_ParamLimits

0xb6e1,	// (0x0003d19b) slider_cont_pane

0x2b96,	// (0x00034650) form_field_slider_wide_pane_t1_ParamLimits

0x2b96,	// (0x00034650) form_field_slider_wide_pane_t1

0x0324,	// (0x00031dde) form_field_slider_wide_pane_t2_ParamLimits

0x0324,	// (0x00031dde) form_field_slider_wide_pane_t2

0x0001,

0xf69a,	// (0x00041154) form_field_slider_wide_pane_t_ParamLimits

0xf69a,	// (0x00041154) form_field_slider_wide_pane_t

0x2536,	// (0x00033ff0) input_focus_pane_cp10_ParamLimits

0x2536,	// (0x00033ff0) input_focus_pane_cp10

0xb6f5,	// (0x0003d1af) slider_cont_pane_cp1_ParamLimits

0xb6f5,	// (0x0003d1af) slider_cont_pane_cp1

0xb709,	// (0x0003d1c3) slider_form_pane_cp

0x2ba8,	// (0x00034662) input_focus_pane_g1

0x2bb0,	// (0x0003466a) input_focus_pane_g2

0x2bb8,	// (0x00034672) input_focus_pane_g3

0x2bc0,	// (0x0003467a) input_focus_pane_g4

0x2bc8,	// (0x00034682) input_focus_pane_g5

0x2bd0,	// (0x0003468a) input_focus_pane_g6

0x2bd8,	// (0x00034692) input_focus_pane_g7

0x2be0,	// (0x0003469a) input_focus_pane_g8

0x2be8,	// (0x000346a2) input_focus_pane_g9

0xe047,	// (0x0003fb01) input_focus_pane_g10

0x0009,

0xf69f,	// (0x00041159) input_focus_pane_g

0x4e46,	// (0x00036900) wait_border_pane_g3_copy1

0xb711,	// (0x0003d1cb) data_form_pane_t1

0xe047,	// (0x0003fb01) wait_anim_pane_g1_copy1

0xbbe2,	// (0x0003d69c) data_form_wide_pane_t1

0x0384,	// (0x00031e3e) list_form_graphic_pane_cp_ParamLimits

0x0384,	// (0x00031e3e) list_form_graphic_pane_cp

0x5dcb,	// (0x00037885) slider_form_pane_g1

0x5dd4,	// (0x0003788e) slider_form_pane_g2

0x0006,

0xf996,	// (0x00041450) slider_form_pane_g

0x0384,	// (0x00031e3e) list_form_graphic_pane_ParamLimits

0x0384,	// (0x00031e3e) list_form_graphic_pane

0x0396,	// (0x00031e50) list_form_graphic_pane_g1

0x039e,	// (0x00031e58) list_form_graphic_pane_t1_ParamLimits

0x039e,	// (0x00031e58) list_form_graphic_pane_t1

0x22ba,	// (0x00033d74) list_highlight_pane_cp5_ParamLimits

0x22ba,	// (0x00033d74) list_highlight_pane_cp5

0xb72b,	// (0x0003d1e5) find_pane_g1

0x2bf0,	// (0x000346aa) input_find_pane

0xb734,	// (0x0003d1ee) input_find_pane_g1_ParamLimits

0xb734,	// (0x0003d1ee) input_find_pane_g1

0xb740,	// (0x0003d1fa) input_find_pane_t1_ParamLimits

0xb740,	// (0x0003d1fa) input_find_pane_t1

0xb755,	// (0x0003d20f) input_find_pane_t2_ParamLimits

0xb755,	// (0x0003d20f) input_find_pane_t2

0x0001,

0xf6b4,	// (0x0004116e) input_find_pane_t_ParamLimits

0xf6b4,	// (0x0004116e) input_find_pane_t

0x2bf9,	// (0x000346b3) input_focus_pane_cp5_ParamLimits

0x2bf9,	// (0x000346b3) input_focus_pane_cp5

0xb776,	// (0x0003d230) bg_popup_window_pane_cp2_ParamLimits

0xb776,	// (0x0003d230) bg_popup_window_pane_cp2

0xb783,	// (0x0003d23d) listscroll_menu_pane_ParamLimits

0xb783,	// (0x0003d23d) listscroll_menu_pane

0xb78f,	// (0x0003d249) popup_submenu_window_ParamLimits

0xb78f,	// (0x0003d249) popup_submenu_window

0x2c5c,	// (0x00034716) find_popup_pane_g1

0x2c64,	// (0x0003471e) input_popup_find_pane_cp

0x2bf9,	// (0x000346b3) input_focus_pane_cp4_ParamLimits

0x2bf9,	// (0x000346b3) input_focus_pane_cp4

0x2c7c,	// (0x00034736) input_popup_find_pane_t1_ParamLimits

0x2c7c,	// (0x00034736) input_popup_find_pane_t1

0xe051,	// (0x0003fb0b) bg_popup_sub_pane_cp

0x2caa,	// (0x00034764) listscroll_popup_sub_pane

0x2cb2,	// (0x0003476c) list_submenu_pane_ParamLimits

0x2cb2,	// (0x0003476c) list_submenu_pane

0x2cc3,	// (0x0003477d) scroll_pane_cp4

0x2ccb,	// (0x00034785) list_single_popup_submenu_pane_ParamLimits

0x2ccb,	// (0x00034785) list_single_popup_submenu_pane

0x2ce0,	// (0x0003479a) list_single_popup_submenu_pane_g1

0x2ce8,	// (0x000347a2) list_single_popup_submenu_pane_t1_ParamLimits

0x2ce8,	// (0x000347a2) list_single_popup_submenu_pane_t1

0x2536,	// (0x00033ff0) bg_active_tab_pane_cp1_ParamLimits

0x2536,	// (0x00033ff0) bg_active_tab_pane_cp1

0xc2f3,	// (0x0003ddad) tabs_2_active_pane_g1

0xc2fb,	// (0x0003ddb5) tabs_2_active_pane_t1

0x2536,	// (0x00033ff0) bg_passive_tab_pane_cp1_ParamLimits

0x2536,	// (0x00033ff0) bg_passive_tab_pane_cp1

0xc2f3,	// (0x0003ddad) tabs_2_passive_pane_g1

0xc2fb,	// (0x0003ddb5) tabs_2_passive_pane_t1

0x22ba,	// (0x00033d74) bg_active_tab_pane_cp4

0xc30d,	// (0x0003ddc7) tabs_2_long_active_pane_t1

0x3cf9,	// (0x000357b3) bg_passive_tab_pane_cp4

0x0aff,	// (0x000325b9) list_single_midp_graphic_pane_g4_ParamLimits

0x22ba,	// (0x00033d74) bg_active_tab_pane_cp5

0xc320,	// (0x0003ddda) tabs_3_long_active_pane_t1

0x3cf9,	// (0x000357b3) bg_passive_tab_pane_cp5

0x0aff,	// (0x000325b9) list_single_midp_graphic_pane_g4

0x22ba,	// (0x00033d74) bg_popup_window_pane_cp13_ParamLimits

0x22ba,	// (0x00033d74) bg_popup_window_pane_cp13

0x2d5f,	// (0x00034819) listscroll_popup_fast_pane_ParamLimits

0x2d5f,	// (0x00034819) listscroll_popup_fast_pane

0x2d6e,	// (0x00034828) grid_popup_fast_pane_ParamLimits

0x2d6e,	// (0x00034828) grid_popup_fast_pane

0x2d80,	// (0x0003483a) scroll_pane_cp9_ParamLimits

0x2d80,	// (0x0003483a) scroll_pane_cp9

0x766a,	// (0x00039124) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x766a,	// (0x00039124) list_single_graphic_hl_pane_t1_cp2

0x2da4,	// (0x0003485e) input_focus_pane_cp20_ParamLimits

0x2da4,	// (0x0003485e) input_focus_pane_cp20

0x2db2,	// (0x0003486c) query_popup_data_pane_t1_ParamLimits

0x2db2,	// (0x0003486c) query_popup_data_pane_t1

0x2dc5,	// (0x0003487f) query_popup_data_pane_t2_ParamLimits

0x2dc5,	// (0x0003487f) query_popup_data_pane_t2

0x2e0b,	// (0x000348c5) query_popup_data_pane_t3_ParamLimits

0x2e0b,	// (0x000348c5) query_popup_data_pane_t3

0x2e4c,	// (0x00034906) query_popup_data_pane_t4_ParamLimits

0x2e4c,	// (0x00034906) query_popup_data_pane_t4

0x2e88,	// (0x00034942) query_popup_data_pane_t5_ParamLimits

0x2e88,	// (0x00034942) query_popup_data_pane_t5

0x0004,

0xf6b9,	// (0x00041173) query_popup_data_pane_t_ParamLimits

0xf6b9,	// (0x00041173) query_popup_data_pane_t

0x2ba8,	// (0x00034662) bg_set_opt_pane_g1

0x2bb0,	// (0x0003466a) bg_set_opt_pane_g2

0x2bb8,	// (0x00034672) bg_set_opt_pane_g3

0x2bc0,	// (0x0003467a) bg_set_opt_pane_g4

0x2bc8,	// (0x00034682) bg_set_opt_pane_g5

0x2bd0,	// (0x0003468a) bg_set_opt_pane_g6

0x2bd8,	// (0x00034692) bg_set_opt_pane_g7

0x2be0,	// (0x0003469a) bg_set_opt_pane_g8

0x2be8,	// (0x000346a2) bg_set_opt_pane_g9

0x0008,

0xf6c4,	// (0x0004117e) bg_set_opt_pane_g

0x0721,	// (0x000321db) control_top_pane_stacon_ParamLimits

0x0721,	// (0x000321db) control_top_pane_stacon

0x0774,	// (0x0003222e) signal_pane_stacon_ParamLimits

0x0774,	// (0x0003222e) signal_pane_stacon

0x3608,	// (0x000350c2) stacon_top_pane_g1_ParamLimits

0x3608,	// (0x000350c2) stacon_top_pane_g1

0x0799,	// (0x00032253) title_pane_stacon_ParamLimits

0x0799,	// (0x00032253) title_pane_stacon

0x07c3,	// (0x0003227d) uni_indicator_pane_stacon_ParamLimits

0x07c3,	// (0x0003227d) uni_indicator_pane_stacon

0x07db,	// (0x00032295) battery_pane_stacon_ParamLimits

0x07db,	// (0x00032295) battery_pane_stacon

0x081f,	// (0x000322d9) control_bottom_pane_stacon_ParamLimits

0x081f,	// (0x000322d9) control_bottom_pane_stacon

0x0842,	// (0x000322fc) navi_pane_stacon_ParamLimits

0x0842,	// (0x000322fc) navi_pane_stacon

0x362a,	// (0x000350e4) stacon_bottom_pane_g1_ParamLimits

0x362a,	// (0x000350e4) stacon_bottom_pane_g1

0x03f2,	// (0x00031eac) aid_levels_signal_lsc_ParamLimits

0x03f2,	// (0x00031eac) aid_levels_signal_lsc

0x0409,	// (0x00031ec3) signal_pane_stacon_g1_ParamLimits

0x0409,	// (0x00031ec3) signal_pane_stacon_g1

0x041d,	// (0x00031ed7) signal_pane_stacon_g2_ParamLimits

0x041d,	// (0x00031ed7) signal_pane_stacon_g2

0x0001,

0xf6d7,	// (0x00041191) signal_pane_stacon_g_ParamLimits

0xf6d7,	// (0x00041191) signal_pane_stacon_g

0x0452,	// (0x00031f0c) title_pane_stacon_t1_ParamLimits

0x0452,	// (0x00031f0c) title_pane_stacon_t1

0x3075,	// (0x00034b2f) uni_indicator_pane_stacon_g1

0x307f,	// (0x00034b39) uni_indicator_pane_stacon_g2

0x3089,	// (0x00034b43) uni_indicator_pane_stacon_g3

0x3093,	// (0x00034b4d) uni_indicator_pane_stacon_g4

0x0003,

0xf6e3,	// (0x0004119d) uni_indicator_pane_stacon_g

0x0477,	// (0x00031f31) control_top_pane_stacon_g1

0x047f,	// (0x00031f39) control_top_pane_stacon_t1_ParamLimits

0x047f,	// (0x00031f39) control_top_pane_stacon_t1

0x04b6,	// (0x00031f70) aid_levels_battery_lsc_ParamLimits

0x04b6,	// (0x00031f70) aid_levels_battery_lsc

0x04ce,	// (0x00031f88) battery_pane_stacon_g1_ParamLimits

0x04ce,	// (0x00031f88) battery_pane_stacon_g1

0x04e1,	// (0x00031f9b) battery_pane_stacon_g2_ParamLimits

0x04e1,	// (0x00031f9b) battery_pane_stacon_g2

0x0001,

0xf6ec,	// (0x000411a6) battery_pane_stacon_g_ParamLimits

0xf6ec,	// (0x000411a6) battery_pane_stacon_g

0x051f,	// (0x00031fd9) navi_icon_pane_stacon

0x0533,	// (0x00031fed) navi_navi_pane_stacon

0x051f,	// (0x00031fd9) navi_text_pane_stacon

0x0477,	// (0x00031f31) control_bottom_pane_stacon_g1

0x0549,	// (0x00032003) control_bottom_pane_stacon_t1_ParamLimits

0x0549,	// (0x00032003) control_bottom_pane_stacon_t1

0xc332,	// (0x0003ddec) grid_app_pane_ParamLimits

0xc332,	// (0x0003ddec) grid_app_pane

0xc36a,	// (0x0003de24) scroll_pane_cp15_ParamLimits

0xc36a,	// (0x0003de24) scroll_pane_cp15

0xc383,	// (0x0003de3d) cell_app_pane_ParamLimits

0xc383,	// (0x0003de3d) cell_app_pane

0xc3c4,	// (0x0003de7e) cell_app_pane_g1_ParamLimits

0xc3c4,	// (0x0003de7e) cell_app_pane_g1

0x3140,	// (0x00034bfa) cell_app_pane_g2_ParamLimits

0x3140,	// (0x00034bfa) cell_app_pane_g2

0x0001,

0xf6f1,	// (0x000411ab) cell_app_pane_g_ParamLimits

0xf6f1,	// (0x000411ab) cell_app_pane_g

0x314c,	// (0x00034c06) cell_app_pane_t1_ParamLimits

0x314c,	// (0x00034c06) cell_app_pane_t1

0x315e,	// (0x00034c18) grid_highlight_pane_ParamLimits

0x315e,	// (0x00034c18) grid_highlight_pane

0x2ba8,	// (0x00034662) cell_highlight_pane_g1

0x2bb0,	// (0x0003466a) cell_highlight_pane_g2

0x2bb8,	// (0x00034672) cell_highlight_pane_g3

0x2bc0,	// (0x0003467a) cell_highlight_pane_g4

0x2bc8,	// (0x00034682) cell_highlight_pane_g5

0x2bd0,	// (0x0003468a) cell_highlight_pane_g6

0x2bd8,	// (0x00034692) cell_highlight_pane_g7

0x2be0,	// (0x0003469a) cell_highlight_pane_g8

0x2be8,	// (0x000346a2) cell_highlight_pane_g9

0xe047,	// (0x0003fb01) cell_highlight_pane_g10

0x0009,

0xf69f,	// (0x00041159) cell_highlight_pane_g

0x316f,	// (0x00034c29) bg_scroll_pane

0x0593,	// (0x0003204d) scroll_handle_pane

0x31b6,	// (0x00034c70) scroll_bg_pane_g1

0x31cb,	// (0x00034c85) scroll_bg_pane_g2

0x31e3,	// (0x00034c9d) scroll_bg_pane_g3

0x0002,

0xf6f6,	// (0x000411b0) scroll_bg_pane_g

0x31f8,	// (0x00034cb2) scroll_handle_focus_pane_ParamLimits

0x31f8,	// (0x00034cb2) scroll_handle_focus_pane

0x31b6,	// (0x00034c70) scroll_handle_pane_g1

0x3205,	// (0x00034cbf) scroll_handle_pane_g2

0x31e3,	// (0x00034c9d) scroll_handle_pane_g3

0x0002,

0xf6fd,	// (0x000411b7) scroll_handle_pane_g

0x2bf9,	// (0x000346b3) bg_popup_sub_pane_cp21_ParamLimits

0x2bf9,	// (0x000346b3) bg_popup_sub_pane_cp21

0x3219,	// (0x00034cd3) popup_fep_japan_predictive_window_t1_ParamLimits

0x3219,	// (0x00034cd3) popup_fep_japan_predictive_window_t1

0x3230,	// (0x00034cea) popup_fep_japan_predictive_window_t2_ParamLimits

0x3230,	// (0x00034cea) popup_fep_japan_predictive_window_t2

0x3263,	// (0x00034d1d) popup_fep_japan_predictive_window_t3_ParamLimits

0x3263,	// (0x00034d1d) popup_fep_japan_predictive_window_t3

0x0002,

0xf704,	// (0x000411be) popup_fep_japan_predictive_window_t_ParamLimits

0xf704,	// (0x000411be) popup_fep_japan_predictive_window_t

0xe051,	// (0x0003fb0b) bg_popup_sub_pane_cp23

0x329a,	// (0x00034d54) listscroll_japin_cand_pane

0x32a2,	// (0x00034d5c) popup_fep_japan_candidate_window_t1

0x32b0,	// (0x00034d6a) candidate_pane_ParamLimits

0x32b0,	// (0x00034d6a) candidate_pane

0x32c2,	// (0x00034d7c) scroll_pane_cp30

0x32cc,	// (0x00034d86) list_single_popup_jap_candidate_pane_ParamLimits

0x32cc,	// (0x00034d86) list_single_popup_jap_candidate_pane

0xe051,	// (0x0003fb0b) list_highlight_pane_cp30

0x32e0,	// (0x00034d9a) list_single_popup_jap_candidate_pane_t1

0xc3e8,	// (0x0003dea2) level_1_signal

0xc3fa,	// (0x0003deb4) level_2_signal

0xc40d,	// (0x0003dec7) level_3_signal

0xc420,	// (0x0003deda) level_4_signal

0xc433,	// (0x0003deed) level_5_signal

0xc446,	// (0x0003df00) level_6_signal

0xc459,	// (0x0003df13) level_7_signal

0xc3e8,	// (0x0003dea2) level_1_battery

0xc3fa,	// (0x0003deb4) level_2_battery

0xc40d,	// (0x0003dec7) level_3_battery

0xc420,	// (0x0003deda) level_4_battery

0xc433,	// (0x0003deed) level_5_battery

0xc446,	// (0x0003df00) level_6_battery

0xc459,	// (0x0003df13) level_7_battery

0x3362,	// (0x00034e1c) list_menu_pane_ParamLimits

0x3362,	// (0x00034e1c) list_menu_pane

0x3378,	// (0x00034e32) scroll_pane_cp25_ParamLimits

0x3378,	// (0x00034e32) scroll_pane_cp25

0x3391,	// (0x00034e4b) list_double2_graphic_pane_cp2_ParamLimits

0x3391,	// (0x00034e4b) list_double2_graphic_pane_cp2

0x3391,	// (0x00034e4b) list_double2_large_graphic_pane_cp2_ParamLimits

0x3391,	// (0x00034e4b) list_double2_large_graphic_pane_cp2

0x3391,	// (0x00034e4b) list_double2_pane_cp2_ParamLimits

0x3391,	// (0x00034e4b) list_double2_pane_cp2

0x3391,	// (0x00034e4b) list_double_graphic_pane_cp2_ParamLimits

0x3391,	// (0x00034e4b) list_double_graphic_pane_cp2

0x3391,	// (0x00034e4b) list_double_large_graphic_pane_cp2_ParamLimits

0x3391,	// (0x00034e4b) list_double_large_graphic_pane_cp2

0x3391,	// (0x00034e4b) list_double_number_pane_cp2_ParamLimits

0x3391,	// (0x00034e4b) list_double_number_pane_cp2

0x3391,	// (0x00034e4b) list_double_pane_cp2_ParamLimits

0x3391,	// (0x00034e4b) list_double_pane_cp2

0xc46c,	// (0x0003df26) list_single_2graphic_pane_cp2_ParamLimits

0xc46c,	// (0x0003df26) list_single_2graphic_pane_cp2

0xc46c,	// (0x0003df26) list_single_graphic_heading_pane_cp2_ParamLimits

0xc46c,	// (0x0003df26) list_single_graphic_heading_pane_cp2

0xc46c,	// (0x0003df26) list_single_graphic_pane_cp2_ParamLimits

0xc46c,	// (0x0003df26) list_single_graphic_pane_cp2

0xc46c,	// (0x0003df26) list_single_heading_pane_cp2_ParamLimits

0xc46c,	// (0x0003df26) list_single_heading_pane_cp2

0x33d4,	// (0x00034e8e) list_single_large_graphic_pane_cp2_ParamLimits

0x33d4,	// (0x00034e8e) list_single_large_graphic_pane_cp2

0xc46c,	// (0x0003df26) list_single_number_heading_pane_cp2_ParamLimits

0xc46c,	// (0x0003df26) list_single_number_heading_pane_cp2

0xc46c,	// (0x0003df26) list_single_number_pane_cp2_ParamLimits

0xc46c,	// (0x0003df26) list_single_number_pane_cp2

0xc46c,	// (0x0003df26) list_single_pane_cp2_ParamLimits

0xc46c,	// (0x0003df26) list_single_pane_cp2

0x344f,	// (0x00034f09) bg_popup_sub_pane_cp22

0x0645,	// (0x000320ff) popup_side_volume_key_window_g1

0x066f,	// (0x00032129) popup_side_volume_key_window_t1

0x068d,	// (0x00032147) volume_small_pane_cp1

0x2536,	// (0x00033ff0) bg_popup_sub_pane_cp24_ParamLimits

0x2536,	// (0x00033ff0) bg_popup_sub_pane_cp24

0x3465,	// (0x00034f1f) fep_china_uni_candidate_pane_ParamLimits

0x3465,	// (0x00034f1f) fep_china_uni_candidate_pane

0x3479,	// (0x00034f33) fep_china_uni_entry_pane

0x3489,	// (0x00034f43) popup_fep_china_uni_window_g1

0x34a5,	// (0x00034f5f) fep_china_uni_entry_pane_g1

0x34af,	// (0x00034f69) fep_china_uni_entry_pane_g2

0x0001,

0xf735,	// (0x000411ef) fep_china_uni_entry_pane_g

0x34b9,	// (0x00034f73) fep_entry_item_pane

0x34c3,	// (0x00034f7d) fep_candidate_item_pane

0x34cb,	// (0x00034f85) fep_china_uni_candidate_pane_g1

0x34d5,	// (0x00034f8f) fep_china_uni_candidate_pane_g2

0x34dd,	// (0x00034f97) fep_china_uni_candidate_pane_g3

0x34e5,	// (0x00034f9f) fep_china_uni_candidate_pane_g4

0x0003,

0xf73a,	// (0x000411f4) fep_china_uni_candidate_pane_g

0xe047,	// (0x0003fb01) fep_entry_item_pane_g1

0x34ef,	// (0x00034fa9) fep_entry_item_pane_t1_ParamLimits

0x34ef,	// (0x00034fa9) fep_entry_item_pane_t1

0x3505,	// (0x00034fbf) fep_candidate_item_pane_t1_ParamLimits

0x3505,	// (0x00034fbf) fep_candidate_item_pane_t1

0x351a,	// (0x00034fd4) fep_candidate_item_pane_t2_ParamLimits

0x351a,	// (0x00034fd4) fep_candidate_item_pane_t2

0x0001,

0xf743,	// (0x000411fd) fep_candidate_item_pane_t_ParamLimits

0xf743,	// (0x000411fd) fep_candidate_item_pane_t

0x22ba,	// (0x00033d74) list_highlight_pane_cp31_ParamLimits

0x22ba,	// (0x00033d74) list_highlight_pane_cp31

0x352c,	// (0x00034fe6) level_1_signal_lsc

0x3535,	// (0x00034fef) level_2_signal_lsc

0x353e,	// (0x00034ff8) level_3_signal_lsc

0x3547,	// (0x00035001) level_4_signal_lsc

0x3550,	// (0x0003500a) level_5_signal_lsc

0x3559,	// (0x00035013) level_6_signal_lsc

0x3562,	// (0x0003501c) level_7_signal_lsc

0x3562,	// (0x0003501c) level_1_battery_lsc

0x356b,	// (0x00035025) level_2_battery_lsc

0x3574,	// (0x0003502e) level_3_battery_lsc

0x357d,	// (0x00035037) level_4_battery_lsc

0x3586,	// (0x00035040) level_5_battery_lsc

0x358f,	// (0x00035049) level_6_battery_lsc

0x352c,	// (0x00034fe6) level_7_battery_lsc

0x3598,	// (0x00035052) scroll_handle_focus_pane_g1

0x35a1,	// (0x0003505b) scroll_handle_focus_pane_g2

0x35aa,	// (0x00035064) scroll_handle_focus_pane_g3

0x0002,

0xf748,	// (0x00041202) scroll_handle_focus_pane_g

0xb7d6,	// (0x0003d290) list_single_2graphic_pane_g1_ParamLimits

0xb7d6,	// (0x0003d290) list_single_2graphic_pane_g1

0xb269,	// (0x0003cd23) list_single_2graphic_pane_g2_ParamLimits

0xb269,	// (0x0003cd23) list_single_2graphic_pane_g2

0x0b32,	// (0x000325ec) list_single_2graphic_pane_g3_ParamLimits

0x0b32,	// (0x000325ec) list_single_2graphic_pane_g3

0xb7e2,	// (0x0003d29c) list_single_2graphic_pane_g4_ParamLimits

0xb7e2,	// (0x0003d29c) list_single_2graphic_pane_g4

0x0003,

0xf74f,	// (0x00041209) list_single_2graphic_pane_g_ParamLimits

0xf74f,	// (0x00041209) list_single_2graphic_pane_g

0xb7ee,	// (0x0003d2a8) list_single_2graphic_pane_t1_ParamLimits

0xb7ee,	// (0x0003d2a8) list_single_2graphic_pane_t1

0xb81c,	// (0x0003d2d6) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xb81c,	// (0x0003d2d6) list_double2_graphic_large_graphic_pane_g1

0xb2d4,	// (0x0003cd8e) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xb2d4,	// (0x0003cd8e) list_double2_graphic_large_graphic_pane_g2

0xb2a0,	// (0x0003cd5a) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xb2a0,	// (0x0003cd5a) list_double2_graphic_large_graphic_pane_g3

0xb82e,	// (0x0003d2e8) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xb82e,	// (0x0003d2e8) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf758,	// (0x00041212) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf758,	// (0x00041212) list_double2_graphic_large_graphic_pane_g

0xb83a,	// (0x0003d2f4) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xb83a,	// (0x0003d2f4) list_double2_graphic_large_graphic_pane_t1

0xb850,	// (0x0003d30a) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xb850,	// (0x0003d30a) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf761,	// (0x0004121b) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf761,	// (0x0004121b) list_double2_graphic_large_graphic_pane_t

0x36ec,	// (0x000351a6) popup_fast_swap_window_ParamLimits

0x36ec,	// (0x000351a6) popup_fast_swap_window

0x370a,	// (0x000351c4) popup_side_volume_key_window

0x3728,	// (0x000351e2) stacon_top_pane

0x3732,	// (0x000351ec) status_pane_ParamLimits

0x3732,	// (0x000351ec) status_pane

0x3728,	// (0x000351e2) status_small_pane

0xe051,	// (0x0003fb0b) control_pane

0xe051,	// (0x0003fb0b) stacon_bottom_pane

0x2b24,	// (0x000345de) scroll_pane_cp121

0x2b1b,	// (0x000345d5) set_content_pane

0xc4fb,	// (0x0003dfb5) bg_active_tab_pane_g1_cp1

0x35bc,	// (0x00035076) bg_active_tab_pane_g2_cp1

0xc504,	// (0x0003dfbe) bg_active_tab_pane_g3_cp1

0xc4fb,	// (0x0003dfb5) bg_passive_tab_pane_g1_cp1

0x35bc,	// (0x00035076) bg_passive_tab_pane_g2_cp1

0xc504,	// (0x0003dfbe) bg_passive_tab_pane_g3_cp1

0xc50d,	// (0x0003dfc7) bg_active_tab_pane_g1_cp2

0x35bc,	// (0x00035076) bg_active_tab_pane_g2_cp2

0xc516,	// (0x0003dfd0) bg_active_tab_pane_g3_cp2

0xc50d,	// (0x0003dfc7) bg_passive_tab_pane_g1_cp2

0x35bc,	// (0x00035076) bg_passive_tab_pane_g2_cp2

0xc516,	// (0x0003dfd0) bg_passive_tab_pane_g3_cp2

0xc51f,	// (0x0003dfd9) bg_active_tab_pane_g1_cp3

0x35bc,	// (0x00035076) bg_active_tab_pane_g2_cp3

0xc528,	// (0x0003dfe2) bg_active_tab_pane_g3_cp3

0xc51f,	// (0x0003dfd9) bg_passive_tab_pane_g1_cp3

0x35bc,	// (0x00035076) bg_passive_tab_pane_g2_cp3

0xc528,	// (0x0003dfe2) bg_passive_tab_pane_g3_cp3

0xc531,	// (0x0003dfeb) bg_active_tab_pane_g1_cp4

0x35bc,	// (0x00035076) bg_active_tab_pane_g2_cp4

0xc53a,	// (0x0003dff4) bg_active_tab_pane_g3_cp4

0xc531,	// (0x0003dfeb) bg_passive_tab_pane_g1_cp4

0x35bc,	// (0x00035076) bg_passive_tab_pane_g2_cp4

0xc53a,	// (0x0003dff4) bg_passive_tab_pane_g3_cp4

0x3646,	// (0x00035100) bg_active_tab_pane_g1_cp5

0x35bc,	// (0x00035076) bg_active_tab_pane_g2_cp5

0x364f,	// (0x00035109) bg_active_tab_pane_g3_cp5

0x3646,	// (0x00035100) bg_passive_tab_pane_g1_cp5

0x35bc,	// (0x00035076) bg_passive_tab_pane_g2_cp5

0x364f,	// (0x00035109) bg_passive_tab_pane_g3_cp5

0xc543,	// (0x0003dffd) list_set_graphic_pane_ParamLimits

0xc543,	// (0x0003dffd) list_set_graphic_pane

0xe051,	// (0x0003fb0b) bg_set_opt_pane_cp4

0xc558,	// (0x0003e012) list_set_graphic_pane_g1_ParamLimits

0xc558,	// (0x0003e012) list_set_graphic_pane_g1

0xc564,	// (0x0003e01e) list_set_graphic_pane_g2_ParamLimits

0xc564,	// (0x0003e01e) list_set_graphic_pane_g2

0x0001,

0xf766,	// (0x00041220) list_set_graphic_pane_g_ParamLimits

0xf766,	// (0x00041220) list_set_graphic_pane_g

0x0009,

0xfad9,	// (0x00041593) volume_small_pane_cp_g

0x369d,	// (0x00035157) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x369d,	// (0x00035157) list_double2_large_graphic_pane_g1_cp2

0x36ab,	// (0x00035165) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x36ab,	// (0x00035165) list_double2_large_graphic_pane_g2_cp2

0x36bc,	// (0x00035176) list_double2_large_graphic_pane_g3_cp2

0x36c4,	// (0x0003517e) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x36c4,	// (0x0003517e) list_double2_large_graphic_pane_t1_cp2

0x36da,	// (0x00035194) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x36da,	// (0x00035194) list_double2_large_graphic_pane_t2_cp2

0x5930,	// (0x000373ea) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x5930,	// (0x000373ea) list_double_large_graphic_pane_g1_cp2

0x5943,	// (0x000373fd) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x5943,	// (0x000373fd) list_double_large_graphic_pane_g2_cp2

0x3850,	// (0x0003530a) list_double_large_graphic_pane_g3_cp2

0x5954,	// (0x0003740e) list_double_large_graphic_pane_g4_cp

0x595c,	// (0x00037416) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x595c,	// (0x00037416) list_double_large_graphic_pane_t1_cp2

0x5973,	// (0x0003742d) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x5973,	// (0x0003742d) list_double_large_graphic_pane_t2_cp2

0x3740,	// (0x000351fa) list_double2_graphic_pane_g1_cp2_ParamLimits

0x3740,	// (0x000351fa) list_double2_graphic_pane_g1_cp2

0x374e,	// (0x00035208) list_double2_graphic_pane_g2_cp2_ParamLimits

0x374e,	// (0x00035208) list_double2_graphic_pane_g2_cp2

0x375f,	// (0x00035219) list_double2_graphic_pane_g3_cp2

0x3769,	// (0x00035223) list_double2_graphic_pane_t1_cp2_ParamLimits

0x3769,	// (0x00035223) list_double2_graphic_pane_t1_cp2

0x377f,	// (0x00035239) list_double2_graphic_pane_t2_cp2_ParamLimits

0x377f,	// (0x00035239) list_double2_graphic_pane_t2_cp2

0x3791,	// (0x0003524b) list_single_number_heading_pane_g1_cp2_ParamLimits

0x3791,	// (0x0003524b) list_single_number_heading_pane_g1_cp2

0x379d,	// (0x00035257) list_single_number_heading_pane_g2_cp2

0x37a5,	// (0x0003525f) list_single_number_heading_pane_t1_cp2_ParamLimits

0x37a5,	// (0x0003525f) list_single_number_heading_pane_t1_cp2

0x37bb,	// (0x00035275) list_single_number_heading_pane_t2_cp2_ParamLimits

0x37bb,	// (0x00035275) list_single_number_heading_pane_t2_cp2

0x37cf,	// (0x00035289) list_single_number_heading_pane_t3_cp2_ParamLimits

0x37cf,	// (0x00035289) list_single_number_heading_pane_t3_cp2

0x3791,	// (0x0003524b) list_single_heading_pane_g1_cp2_ParamLimits

0x3791,	// (0x0003524b) list_single_heading_pane_g1_cp2

0x379d,	// (0x00035257) list_single_heading_pane_g2_cp2

0x37a5,	// (0x0003525f) list_single_heading_pane_t1_cp2_ParamLimits

0x37a5,	// (0x0003525f) list_single_heading_pane_t1_cp2

0x572a,	// (0x000371e4) list_single_heading_pane_t2_cp2_ParamLimits

0x572a,	// (0x000371e4) list_single_heading_pane_t2_cp2

0x566c,	// (0x00037126) list_double_graphic_pane_g1_cp2_ParamLimits

0x566c,	// (0x00037126) list_double_graphic_pane_g1_cp2

0x5678,	// (0x00037132) list_double_graphic_pane_g2_cp2_ParamLimits

0x5678,	// (0x00037132) list_double_graphic_pane_g2_cp2

0x5687,	// (0x00037141) list_double_graphic_pane_g3_cp2

0x568f,	// (0x00037149) list_double_graphic_pane_t1_cp2_ParamLimits

0x568f,	// (0x00037149) list_double_graphic_pane_t1_cp2

0x56a5,	// (0x0003715f) list_double_graphic_pane_t2_cp2_ParamLimits

0x56a5,	// (0x0003715f) list_double_graphic_pane_t2_cp2

0x3844,	// (0x000352fe) list_double_number_pane_g1_cp2_ParamLimits

0x3844,	// (0x000352fe) list_double_number_pane_g1_cp2

0x3850,	// (0x0003530a) list_double_number_pane_g2_cp2

0x5630,	// (0x000370ea) list_double_number_pane_t1_cp2_ParamLimits

0x5630,	// (0x000370ea) list_double_number_pane_t1_cp2

0x5644,	// (0x000370fe) list_double_number_pane_t2_cp2_ParamLimits

0x5644,	// (0x000370fe) list_double_number_pane_t2_cp2

0x565a,	// (0x00037114) list_double_number_pane_t3_cp2_ParamLimits

0x565a,	// (0x00037114) list_double_number_pane_t3_cp2

0x5519,	// (0x00036fd3) list_single_graphic_pane_g1_cp2_ParamLimits

0x5519,	// (0x00036fd3) list_single_graphic_pane_g1_cp2

0x38aa,	// (0x00035364) list_single_graphic_pane_g2_cp2_ParamLimits

0x38aa,	// (0x00035364) list_single_graphic_pane_g2_cp2

0x38b6,	// (0x00035370) list_single_graphic_pane_g3_cp2

0x54ef,	// (0x00036fa9) list_single_graphic_pane_t1_cp2_ParamLimits

0x54ef,	// (0x00036fa9) list_single_graphic_pane_t1_cp2

0x38aa,	// (0x00035364) list_single_number_pane_g1_cp2_ParamLimits

0x38aa,	// (0x00035364) list_single_number_pane_g1_cp2

0x38b6,	// (0x00035370) list_single_number_pane_g2_cp2

0x54ef,	// (0x00036fa9) list_single_number_pane_t1_cp2_ParamLimits

0x54ef,	// (0x00036fa9) list_single_number_pane_t1_cp2

0x5505,	// (0x00036fbf) list_single_number_pane_t2_cp2_ParamLimits

0x5505,	// (0x00036fbf) list_single_number_pane_t2_cp2

0x36ab,	// (0x00035165) list_double2_pane_g1_cp2_ParamLimits

0x36ab,	// (0x00035165) list_double2_pane_g1_cp2

0x36bc,	// (0x00035176) list_double2_pane_g2_cp2

0x381c,	// (0x000352d6) list_double2_pane_t1_cp2_ParamLimits

0x381c,	// (0x000352d6) list_double2_pane_t1_cp2

0x3832,	// (0x000352ec) list_double2_pane_t2_cp2_ParamLimits

0x3832,	// (0x000352ec) list_double2_pane_t2_cp2

0x3844,	// (0x000352fe) list_double_pane_g1_cp2_ParamLimits

0x3844,	// (0x000352fe) list_double_pane_g1_cp2

0x3850,	// (0x0003530a) list_double_pane_g2_cp2

0x3858,	// (0x00035312) list_double_pane_t1_cp2_ParamLimits

0x3858,	// (0x00035312) list_double_pane_t1_cp2

0x386e,	// (0x00035328) list_double_pane_t2_cp2_ParamLimits

0x386e,	// (0x00035328) list_double_pane_t2_cp2

0x389a,	// (0x00035354) list_single_pane_cp2_g3

0x38aa,	// (0x00035364) list_single_pane_g1_cp2_ParamLimits

0x38aa,	// (0x00035364) list_single_pane_g1_cp2

0x38b6,	// (0x00035370) list_single_pane_g2_cp2

0x38be,	// (0x00035378) list_single_pane_t1_cp2_ParamLimits

0x38be,	// (0x00035378) list_single_pane_t1_cp2

0x38d6,	// (0x00035390) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x38d6,	// (0x00035390) list_single_large_graphic_pane_g1_cp2

0x38e4,	// (0x0003539e) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x38e4,	// (0x0003539e) list_single_large_graphic_pane_g2_cp2

0x38f0,	// (0x000353aa) list_single_large_graphic_pane_g3_cp2

0x38f8,	// (0x000353b2) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x38f8,	// (0x000353b2) list_single_large_graphic_pane_g4_cp1

0x3912,	// (0x000353cc) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x3912,	// (0x000353cc) list_single_large_graphic_pane_t1_cp2

0x54b9,	// (0x00036f73) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x54b9,	// (0x00036f73) list_single_graphic_heading_pane_g1_cp2

0x5486,	// (0x00036f40) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x5486,	// (0x00036f40) list_single_graphic_heading_pane_g4_cp2

0x38b6,	// (0x00035370) list_single_graphic_heading_pane_g5_cp2

0x54c5,	// (0x00036f7f) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x54c5,	// (0x00036f7f) list_single_graphic_heading_pane_t1_cp2

0x54db,	// (0x00036f95) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x54db,	// (0x00036f95) list_single_graphic_heading_pane_t2_cp2

0x547a,	// (0x00036f34) list_single_2graphic_pane_g1_cp2_ParamLimits

0x547a,	// (0x00036f34) list_single_2graphic_pane_g1_cp2

0x5486,	// (0x00036f40) list_single_2graphic_pane_g2_cp2_ParamLimits

0x5486,	// (0x00036f40) list_single_2graphic_pane_g2_cp2

0x38b6,	// (0x00035370) list_single_2graphic_pane_g3_cp2

0x5497,	// (0x00036f51) list_single_2graphic_pane_g4_cp2_ParamLimits

0x5497,	// (0x00036f51) list_single_2graphic_pane_g4_cp2

0x54a3,	// (0x00036f5d) list_single_2graphic_pane_t1_cp2_ParamLimits

0x54a3,	// (0x00036f5d) list_single_2graphic_pane_t1_cp2

0xe047,	// (0x0003fb01) list_highlight_pane_g10_cp1

0x5052,	// (0x00036b0c) list_highlight_pane_g1_cp1

0x505a,	// (0x00036b14) list_highlight_pane_g2_cp1

0x5062,	// (0x00036b1c) list_highlight_pane_g3_cp1

0x506a,	// (0x00036b24) list_highlight_pane_g4_cp1

0x5072,	// (0x00036b2c) list_highlight_pane_g5_cp1

0x507a,	// (0x00036b34) list_highlight_pane_g6_cp1

0x5082,	// (0x00036b3c) list_highlight_pane_g7_cp1

0x508a,	// (0x00036b44) list_highlight_pane_g8_cp1

0x5092,	// (0x00036b4c) list_highlight_pane_g9_cp1

0xd295,	// (0x0003ed4f) form_field_slider_pane_t3

0xd2a3,	// (0x0003ed5d) form_field_slider_pane_t4

0x4f8e,	// (0x00036a48) slider_form_pane_ParamLimits

0x4f8e,	// (0x00036a48) slider_form_pane

0xe051,	// (0x0003fb0b) control_abbreviations

0xe051,	// (0x0003fb0b) control_conventions

0xe051,	// (0x0003fb0b) control_definitions

0xe051,	// (0x0003fb0b) format_table_attribute

0x5780,	// (0x0003723a) bg_popup_preview_window_pane_g9

0xe051,	// (0x0003fb0b) format_table_data2

0xe051,	// (0x0003fb0b) format_table_data3

0xe051,	// (0x0003fb0b) format_table_data_example

0x0008,

0xe051,	// (0x0003fb0b) intro_purpose

0xf8f6,	// (0x000413b0) bg_popup_preview_window_pane_g

0xe051,	// (0x0003fb0b) texts_category

0xe051,	// (0x0003fb0b) texts_graphics

0x3928,	// (0x000353e2) text_digital

0x3937,	// (0x000353f1) text_primary

0x3946,	// (0x00035400) text_primary_small

0x3955,	// (0x0003540f) text_secondary

0x3964,	// (0x0003541e) text_title

0x5f1c,	// (0x000379d6) bg_passive_tab_pane_g1_cp3_srt

0x35bc,	// (0x00035076) bg_passive_tab_pane_g2_cp3_srt

0x5f25,	// (0x000379df) bg_passive_tab_pane_g3_cp3_srt

0x2536,	// (0x00033ff0) bg_active_tab_pane_cp3_srt_ParamLimits

0x2536,	// (0x00033ff0) bg_active_tab_pane_cp3_srt

0x5f2e,	// (0x000379e8) tabs_4_active_pane_srt_g1

0xd6a8,	// (0x0003f162) tabs_4_active_pane_srt_t1_ParamLimits

0xd6a8,	// (0x0003f162) tabs_4_active_pane_srt_t1

0x5f1c,	// (0x000379d6) bg_active_tab_pane_g1_cp3_copy1

0x35bc,	// (0x00035076) bg_active_tab_pane_g2_cp3_copy1

0x5f25,	// (0x000379df) bg_active_tab_pane_g3_cp3_copy1

0x22ba,	// (0x00033d74) tabs_2_long_active_pane_srt_ParamLimits

0x22ba,	// (0x00033d74) tabs_2_long_active_pane_srt

0x22ba,	// (0x00033d74) tabs_2_long_passive_pane_srt_ParamLimits

0x22ba,	// (0x00033d74) tabs_2_long_passive_pane_srt

0x3cf9,	// (0x000357b3) bg_passive_tab_pane_cp4_srt_ParamLimits

0x3cf9,	// (0x000357b3) bg_passive_tab_pane_cp4_srt

0x5bd0,	// (0x0003768a) bg_passive_tab_pane_g1_cp4_srt

0x35bc,	// (0x00035076) bg_passive_tab_pane_g2_cp4_srt

0x5bd9,	// (0x00037693) bg_passive_tab_pane_g3_cp4_srt

0x22ba,	// (0x00033d74) bg_active_tab_pane_cp4_srt_ParamLimits

0x22ba,	// (0x00033d74) bg_active_tab_pane_cp4_srt

0xd49e,	// (0x0003ef58) tabs_2_long_active_pane_srt_t1_ParamLimits

0xd49e,	// (0x0003ef58) tabs_2_long_active_pane_srt_t1

0x5bd0,	// (0x0003768a) bg_active_tab_pane_g1_cp4_srt

0x35bc,	// (0x00035076) bg_active_tab_pane_g2_cp4_srt

0x5bd9,	// (0x00037693) bg_active_tab_pane_g3_cp4_srt

0x2536,	// (0x00033ff0) tabs_3_long_active_pane_srt_ParamLimits

0x2536,	// (0x00033ff0) tabs_3_long_active_pane_srt

0x2536,	// (0x00033ff0) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x2536,	// (0x00033ff0) tabs_3_long_passive_pane_cp_srt

0x2536,	// (0x00033ff0) tabs_3_long_passive_pane_srt_ParamLimits

0x2536,	// (0x00033ff0) tabs_3_long_passive_pane_srt

0x3cf9,	// (0x000357b3) bg_passive_tab_pane_cp5_srt_ParamLimits

0x3cf9,	// (0x000357b3) bg_passive_tab_pane_cp5_srt

0x3646,	// (0x00035100) bg_passive_tab_pane_g1_cp5_srt

0x35bc,	// (0x00035076) bg_passive_tab_pane_g2_cp5_srt

0x364f,	// (0x00035109) bg_passive_tab_pane_g3_cp5_srt

0x22ba,	// (0x00033d74) bg_active_tab_pane_cp5_srt_ParamLimits

0x22ba,	// (0x00033d74) bg_active_tab_pane_cp5_srt

0xd488,	// (0x0003ef42) tabs_3_long_active_pane_srt_t1_ParamLimits

0xd488,	// (0x0003ef42) tabs_3_long_active_pane_srt_t1

0x3646,	// (0x00035100) bg_active_tab_pane_g1_cp5_srt

0x35bc,	// (0x00035076) bg_active_tab_pane_g2_cp5_srt

0x364f,	// (0x00035109) bg_active_tab_pane_g3_cp5_srt

0x5bb0,	// (0x0003766a) navi_text_pane_srt_t1

0x5ba8,	// (0x00037662) navi_icon_pane_srt_g1

0x3b3b,	// (0x000355f5) midp_editing_number_pane_srt

0x3973,	// (0x0003542d) midp_ticker_pane_srt

0x3b43,	// (0x000355fd) midp_ticker_pane_srt_g1

0x3b4b,	// (0x00035605) midp_ticker_pane_srt_g2

0x0001,

0xf785,	// (0x0004123f) midp_ticker_pane_srt_g

0x3b53,	// (0x0003560d) midp_ticker_pane_srt_t1

0x5b99,	// (0x00037653) midp_editing_number_pane_t1_copy1

0xc588,	// (0x0003e042) listscroll_midp_pane

0xc588,	// (0x0003e042) midp_form_pane

0x39e9,	// (0x000354a3) midp_info_popup_window_ParamLimits

0x39e9,	// (0x000354a3) midp_info_popup_window

0x2bf9,	// (0x000346b3) bg_popup_sub_pane_cp50_ParamLimits

0x2bf9,	// (0x000346b3) bg_popup_sub_pane_cp50

0x4c88,	// (0x00036742) listscroll_midp_info_pane_ParamLimits

0x4c88,	// (0x00036742) listscroll_midp_info_pane

0x4c70,	// (0x0003672a) listscroll_form_midp_pane_ParamLimits

0x4c70,	// (0x0003672a) listscroll_form_midp_pane

0x4c7c,	// (0x00036736) scroll_bar_cp050

0xd289,	// (0x0003ed43) list_midp_pane

0x6965,	// (0x0003841f) signal_pane_g2_cp

0x4b8a,	// (0x00036644) listscroll_midp_info_pane_t1_ParamLimits

0x4b8a,	// (0x00036644) listscroll_midp_info_pane_t1

0x4ba2,	// (0x0003665c) listscroll_midp_info_pane_t2_ParamLimits

0x4ba2,	// (0x0003665c) listscroll_midp_info_pane_t2

0x4be0,	// (0x0003669a) listscroll_midp_info_pane_t3_ParamLimits

0x4be0,	// (0x0003669a) listscroll_midp_info_pane_t3

0x4c1a,	// (0x000366d4) listscroll_midp_info_pane_t4_ParamLimits

0x4c1a,	// (0x000366d4) listscroll_midp_info_pane_t4

0x0003,

0xf831,	// (0x000412eb) listscroll_midp_info_pane_t_ParamLimits

0xf831,	// (0x000412eb) listscroll_midp_info_pane_t

0x2cc3,	// (0x0003477d) scroll_pane_cp21

0x4b24,	// (0x000365de) form_midp_field_choice_group_pane

0x4b2d,	// (0x000365e7) form_midp_field_text_pane

0x4b70,	// (0x0003662a) form_midp_field_time_pane

0x4b78,	// (0x00036632) form_midp_gauge_slider_pane

0x4b81,	// (0x0003663b) form_midp_gauge_wait_pane

0xe051,	// (0x0003fb0b) form_midp_image_pane

0xba51,	// (0x0003d50b) list_single_midp_pane_ParamLimits

0xba51,	// (0x0003d50b) list_single_midp_pane

0xd267,	// (0x0003ed21) form_midp_field_text_pane_t1

0x4928,	// (0x000363e2) input_focus_pane_cp050

0x4b13,	// (0x000365cd) list_midp_form_text_pane

0x4ac4,	// (0x0003657e) form_midp_field_choice_group_pane_t1

0x4ad2,	// (0x0003658c) input_focus_pane_cp051

0x4ae6,	// (0x000365a0) list_midp_choice_pane

0xe051,	// (0x0003fb0b) status_idle_pane

0x4aa8,	// (0x00036562) form_midp_field_time_pane_t1

0xe047,	// (0x0003fb01) wait_anim_pane_g2_copy1

0x4ab6,	// (0x00036570) form_midp_field_time_pane_t2

0x0001,

0x3a99,	// (0x00035553) aid_navinavi_width_2_pane

0xf82c,	// (0x000412e6) form_midp_field_time_pane_t

0xe051,	// (0x0003fb0b) input_focus_pane_cp052

0xe051,	// (0x0003fb0b) bg_input_focus_pane_cp040

0x4a68,	// (0x00036522) form_midp_gauge_slider_pane_t1

0x4a76,	// (0x00036530) form_midp_gauge_slider_pane_t2

0xd24b,	// (0x0003ed05) form_midp_gauge_slider_pane_t3

0xd259,	// (0x0003ed13) form_midp_gauge_slider_pane_t4

0x0003,

0xf823,	// (0x000412dd) form_midp_gauge_slider_pane_t

0x4aa0,	// (0x0003655a) form_midp_slider_pane

0x22ba,	// (0x00033d74) bg_input_focus_pane_cp041_ParamLimits

0x22ba,	// (0x00033d74) bg_input_focus_pane_cp041

0x4a35,	// (0x000364ef) form_midp_gauge_wait_pane_t1_ParamLimits

0x4a35,	// (0x000364ef) form_midp_gauge_wait_pane_t1

0x4a47,	// (0x00036501) form_midp_gauge_wait_pane_t2_ParamLimits

0x4a47,	// (0x00036501) form_midp_gauge_wait_pane_t2

0x0001,

0xf81e,	// (0x000412d8) form_midp_gauge_wait_pane_t_ParamLimits

0xf81e,	// (0x000412d8) form_midp_gauge_wait_pane_t

0x4a59,	// (0x00036513) form_midp_wait_pane_ParamLimits

0x4a59,	// (0x00036513) form_midp_wait_pane

0x49ff,	// (0x000364b9) form_midp_image_pane_g1

0x4a08,	// (0x000364c2) form_midp_image_pane_t1

0x4a17,	// (0x000364d1) form_midp_image_pane_t2

0xd23a,	// (0x0003ecf4) form_midp_image_pane_t3

0x0002,

0xf817,	// (0x000412d1) form_midp_image_pane_t

0x49f6,	// (0x000364b0) list_single_midp_pane_g1

0x0c2d,	// (0x000326e7) list_single_midp_pane_t1

0xd227,	// (0x0003ece1) list_midp_form_item_pane_ParamLimits

0xd227,	// (0x0003ece1) list_midp_form_item_pane

0x3a41,	// (0x000354fb) list_midp_form_item_pane_t1

0x3a50,	// (0x0003550a) midp_ticker_pane_g1

0x3a5c,	// (0x00035516) midp_ticker_pane_g2

0x0001,

0xf76b,	// (0x00041225) midp_ticker_pane_g

0xc630,	// (0x0003e0ea) midp_ticker_pane_t1

0xd62d,	// (0x0003f0e7) midp_editing_number_pane_t1

0x5df6,	// (0x000378b0) midp_editing_number_pane

0x5e05,	// (0x000378bf) midp_ticker_pane

0x5b89,	// (0x00037643) ai_message_heading_pane

0xe051,	// (0x0003fb0b) bg_popup_window_pane_cp14

0x5b91,	// (0x0003764b) listscroll_ai_message_pane

0x5b0f,	// (0x000375c9) ai_message_heading_pane_g1_ParamLimits

0x5b0f,	// (0x000375c9) ai_message_heading_pane_g1

0x5b1b,	// (0x000375d5) ai_message_heading_pane_g2_ParamLimits

0x5b1b,	// (0x000375d5) ai_message_heading_pane_g2

0x5b29,	// (0x000375e3) ai_message_heading_pane_g3_ParamLimits

0x5b29,	// (0x000375e3) ai_message_heading_pane_g3

0x5b35,	// (0x000375ef) ai_message_heading_pane_g4_ParamLimits

0x5b35,	// (0x000375ef) ai_message_heading_pane_g4

0x0003,

0xf958,	// (0x00041412) ai_message_heading_pane_g_ParamLimits

0xf958,	// (0x00041412) ai_message_heading_pane_g

0x5b41,	// (0x000375fb) ai_message_heading_pane_t1_ParamLimits

0x5b41,	// (0x000375fb) ai_message_heading_pane_t1

0x5b5b,	// (0x00037615) ai_message_heading_pane_t2_ParamLimits

0x5b5b,	// (0x00037615) ai_message_heading_pane_t2

0x0001,

0xf961,	// (0x0004141b) ai_message_heading_pane_t_ParamLimits

0xf961,	// (0x0004141b) ai_message_heading_pane_t

0x5b6f,	// (0x00037629) bg_popup_heading_pane_cp1_ParamLimits

0x5b6f,	// (0x00037629) bg_popup_heading_pane_cp1

0x5afd,	// (0x000375b7) list_ai_message_pane_ParamLimits

0x5afd,	// (0x000375b7) list_ai_message_pane

0x2cc3,	// (0x0003477d) scroll_pane_cp10

0x5a99,	// (0x00037553) list_ai_message_pane_g1

0x5aa1,	// (0x0003755b) list_ai_message_pane_g2

0x0001,

0xf935,	// (0x000413ef) list_ai_message_pane_g

0x5aa9,	// (0x00037563) list_ai_message_pane_t1_ParamLimits

0x5aa9,	// (0x00037563) list_ai_message_pane_t1

0x5abe,	// (0x00037578) list_ai_message_pane_t2_ParamLimits

0x5abe,	// (0x00037578) list_ai_message_pane_t2

0x5ad3,	// (0x0003758d) list_ai_message_pane_t3_ParamLimits

0x5ad3,	// (0x0003758d) list_ai_message_pane_t3

0x5ae8,	// (0x000375a2) list_ai_message_pane_t4_ParamLimits

0x5ae8,	// (0x000375a2) list_ai_message_pane_t4

0x0003,

0xf93a,	// (0x000413f4) list_ai_message_pane_t_ParamLimits

0xf93a,	// (0x000413f4) list_ai_message_pane_t

0xd46e,	// (0x0003ef28) cell_ai_soft_ind_pane_ParamLimits

0xd46e,	// (0x0003ef28) cell_ai_soft_ind_pane

0x3a7a,	// (0x00035534) cell_ai_soft_ind_pane_g1_ParamLimits

0x3a7a,	// (0x00035534) cell_ai_soft_ind_pane_g1

0xe051,	// (0x0003fb0b) grid_highlight_cp1

0x3a87,	// (0x00035541) text_secondary_cp56_ParamLimits

0x3a87,	// (0x00035541) text_secondary_cp56

0x5a57,	// (0x00037511) example_general_pane_ParamLimits

0x5a57,	// (0x00037511) example_general_pane

0x5a63,	// (0x0003751d) example_parent_pane_g1_ParamLimits

0x5a63,	// (0x0003751d) example_parent_pane_g1

0x5a6f,	// (0x00037529) example_parent_pane_t1_ParamLimits

0x5a6f,	// (0x00037529) example_parent_pane_t1

0xca94,	// (0x0003e54e) popup_preview_text_window_ParamLimits

0xca94,	// (0x0003e54e) popup_preview_text_window

0x38a2,	// (0x0003535c) list_single_pane_cp2_g4

0x25ec,	// (0x000340a6) bg_popup_preview_window_pane_ParamLimits

0x25ec,	// (0x000340a6) bg_popup_preview_window_pane

0x578a,	// (0x00037244) popup_preview_text_window_t1_ParamLimits

0x578a,	// (0x00037244) popup_preview_text_window_t1

0x57a8,	// (0x00037262) popup_preview_text_window_t2_ParamLimits

0x57a8,	// (0x00037262) popup_preview_text_window_t2

0x57f1,	// (0x000372ab) popup_preview_text_window_t3_ParamLimits

0x57f1,	// (0x000372ab) popup_preview_text_window_t3

0x5836,	// (0x000372f0) popup_preview_text_window_t4_ParamLimits

0x5836,	// (0x000372f0) popup_preview_text_window_t4

0x0004,

0xf909,	// (0x000413c3) popup_preview_text_window_t_ParamLimits

0xf909,	// (0x000413c3) popup_preview_text_window_t

0x58b4,	// (0x0003736e) scroll_pane_cp11

0x4836,	// (0x000362f0) bg_popup_preview_window_pane_g1

0x573e,	// (0x000371f8) bg_popup_preview_window_pane_g2

0x5748,	// (0x00037202) bg_popup_preview_window_pane_g3

0x5752,	// (0x0003720c) bg_popup_preview_window_pane_g4

0x575c,	// (0x00037216) bg_popup_preview_window_pane_g5

0x5766,	// (0x00037220) bg_popup_preview_window_pane_g6

0x576e,	// (0x00037228) bg_popup_preview_window_pane_g7

0x5776,	// (0x00037230) bg_popup_preview_window_pane_g8

0xeee3,	// (0x0004099d) aid_popup_width_pane

0xca04,	// (0x0003e4be) popup_midp_note_alarm_window_ParamLimits

0xca04,	// (0x0003e4be) popup_midp_note_alarm_window

0x2b35,	// (0x000345ef) data_form_pane_ParamLimits

0xb66e,	// (0x0003d128) form_field_data_pane_g1

0xb678,	// (0x0003d132) form_field_data_pane_t1_ParamLimits

0x2b41,	// (0x000345fb) input_focus_pane_ParamLimits

0x2b4f,	// (0x00034609) data_form_wide_pane_ParamLimits

0x0276,	// (0x00031d30) form_field_data_wide_pane_g1

0x0282,	// (0x00031d3c) form_field_data_wide_pane_t1_ParamLimits

0x28b2,	// (0x0003436c) input_focus_pane_cp6_ParamLimits

0xb7bf,	// (0x0003d279) input_popup_find_pane_g1_ParamLimits

0xb7bf,	// (0x0003d279) input_popup_find_pane_g1

0x04f2,	// (0x00031fac) aid_navi_side_left_pane

0x0507,	// (0x00031fc1) aid_navi_side_right_pane

0x514d,	// (0x00036c07) bg_popup_window_pane_cp30_ParamLimits

0x514d,	// (0x00036c07) bg_popup_window_pane_cp30

0x51c7,	// (0x00036c81) popup_midp_note_alarm_window_g1_ParamLimits

0x51c7,	// (0x00036c81) popup_midp_note_alarm_window_g1

0x51f7,	// (0x00036cb1) popup_midp_note_alarm_window_t1_ParamLimits

0x51f7,	// (0x00036cb1) popup_midp_note_alarm_window_t1

0x5298,	// (0x00036d52) popup_midp_note_alarm_window_t2_ParamLimits

0x5298,	// (0x00036d52) popup_midp_note_alarm_window_t2

0x5346,	// (0x00036e00) popup_midp_note_alarm_window_t3_ParamLimits

0x5346,	// (0x00036e00) popup_midp_note_alarm_window_t3

0x5378,	// (0x00036e32) popup_midp_note_alarm_window_t4_ParamLimits

0x5378,	// (0x00036e32) popup_midp_note_alarm_window_t4

0x539e,	// (0x00036e58) popup_midp_note_alarm_window_t5_ParamLimits

0x539e,	// (0x00036e58) popup_midp_note_alarm_window_t5

0x000a,

0xf8a6,	// (0x00041360) popup_midp_note_alarm_window_t_ParamLimits

0xf8a6,	// (0x00041360) popup_midp_note_alarm_window_t

0x544a,	// (0x00036f04) wait_bar_pane_cp1_ParamLimits

0x544a,	// (0x00036f04) wait_bar_pane_cp1

0xe051,	// (0x0003fb0b) wait_anim_pane_copy1

0xe051,	// (0x0003fb0b) wait_border_pane_copy1

0x4e32,	// (0x000368ec) wait_border_pane_g1_copy1

0x029c,	// (0x00031d56) form_field_popup_pane_g1

0xb692,	// (0x0003d14c) form_field_popup_pane_t1_ParamLimits

0x2b41,	// (0x000345fb) input_focus_pane_cp7_ParamLimits

0x2b7b,	// (0x00034635) list_form_pane_ParamLimits

0x02be,	// (0x00031d78) form_field_popup_wide_pane_g1

0x02c6,	// (0x00031d80) form_field_popup_wide_pane_t1_ParamLimits

0x2b41,	// (0x000345fb) input_focus_pane_cp8_ParamLimits

0x2b87,	// (0x00034641) list_form_wide_pane_ParamLimits

0x5fa9,	// (0x00037a63) aid_size_cell_graphic_pane

0xb711,	// (0x0003d1cb) data_form_pane_t1_ParamLimits

0xbbe2,	// (0x0003d69c) data_form_wide_pane_t1_ParamLimits

0xce96,	// (0x0003e950) bg_status_flat_pane

0xae82,	// (0x0003c93c) title_pane_t1_ParamLimits

0x2282,	// (0x00033d3c) title_pane_t2_ParamLimits

0x22a8,	// (0x00033d62) title_pane_t3_ParamLimits

0xf56f,	// (0x00041029) title_pane_t_ParamLimits

0xc3e8,	// (0x0003dea2) level_1_signal_ParamLimits

0xc3fa,	// (0x0003deb4) level_2_signal_ParamLimits

0xc40d,	// (0x0003dec7) level_3_signal_ParamLimits

0xc420,	// (0x0003deda) level_4_signal_ParamLimits

0xc433,	// (0x0003deed) level_5_signal_ParamLimits

0xc446,	// (0x0003df00) level_6_signal_ParamLimits

0xc459,	// (0x0003df13) level_7_signal_ParamLimits

0xc3e8,	// (0x0003dea2) level_1_battery_ParamLimits

0xc3fa,	// (0x0003deb4) level_2_battery_ParamLimits

0xc40d,	// (0x0003dec7) level_3_battery_ParamLimits

0xc420,	// (0x0003deda) level_4_battery_ParamLimits

0xc433,	// (0x0003deed) level_5_battery_ParamLimits

0xc446,	// (0x0003df00) level_6_battery_ParamLimits

0xc459,	// (0x0003df13) level_7_battery_ParamLimits

0x5052,	// (0x00036b0c) bg_status_flat_pane_g1

0x505a,	// (0x00036b14) bg_status_flat_pane_g2

0x5062,	// (0x00036b1c) bg_status_flat_pane_g3

0x506a,	// (0x00036b24) bg_status_flat_pane_g4

0x5072,	// (0x00036b2c) bg_status_flat_pane_g5

0x507a,	// (0x00036b34) bg_status_flat_pane_g6

0x5082,	// (0x00036b3c) bg_status_flat_pane_g7

0xaf16,	// (0x0003c9d0) tabs_3_active_pane_t1_ParamLimits

0xaf16,	// (0x0003c9d0) tabs_3_passive_pane_t1_ParamLimits

0xaf30,	// (0x0003c9ea) tabs_4_active_pane_t1_ParamLimits

0xaf30,	// (0x0003c9ea) tabs_4_1_passive_pane_t1_ParamLimits

0xc2fb,	// (0x0003ddb5) tabs_2_active_pane_t1_ParamLimits

0xc2fb,	// (0x0003ddb5) tabs_2_passive_pane_t1_ParamLimits

0x22ba,	// (0x00033d74) bg_active_tab_pane_cp4_ParamLimits

0xc30d,	// (0x0003ddc7) tabs_2_long_active_pane_t1_ParamLimits

0x3cf9,	// (0x000357b3) bg_passive_tab_pane_cp4_ParamLimits

0x0b74,	// (0x0003262e) list_single_midp_graphic_pane_t1_ParamLimits

0x22ba,	// (0x00033d74) bg_active_tab_pane_cp5_ParamLimits

0xc320,	// (0x0003ddda) tabs_3_long_active_pane_t1_ParamLimits

0x3cf9,	// (0x000357b3) bg_passive_tab_pane_cp5_ParamLimits

0x0b74,	// (0x0003262e) list_single_midp_graphic_pane_t1

0xce96,	// (0x0003e950) bg_status_flat_pane_ParamLimits

0x44ae,	// (0x00035f68) indicator_pane_cp2_ParamLimits

0x44ae,	// (0x00035f68) indicator_pane_cp2

0xd02c,	// (0x0003eae6) navi_pane_srt_ParamLimits

0xd02c,	// (0x0003eae6) navi_pane_srt

0x4615,	// (0x000360cf) popup_clock_digital_analogue_window_cp1

0x239a,	// (0x00033e54) indicator_pane_t1

0x3973,	// (0x0003542d) copy_highlight_pane

0x3973,	// (0x0003542d) cursor_graphics_pane

0x3973,	// (0x0003542d) graphic_within_text_pane

0x3973,	// (0x0003542d) link_highlight_pane

0x5877,	// (0x00037331) popup_preview_text_window_t5_ParamLimits

0x5877,	// (0x00037331) popup_preview_text_window_t5

0x3aa3,	// (0x0003555d) cursor_digital_pane

0x3aa3,	// (0x0003555d) cursor_primary_pane

0x3ab4,	// (0x0003556e) cursor_primary_small_pane

0x3abc,	// (0x00035576) cursor_secondary_pane

0x3ac4,	// (0x0003557e) cursor_title_pane

0x3aa3,	// (0x0003555d) link_highlight_digital_pane

0x3aab,	// (0x00035565) link_highlight_primary_pane

0x3ab4,	// (0x0003556e) link_highlight_primary_small_pane

0x3abc,	// (0x00035576) link_highlight_secondary_pane

0x3ac4,	// (0x0003557e) link_highlight_title_pane

0x3aa3,	// (0x0003555d) copy_highlight_digital_pane

0x3aa3,	// (0x0003555d) copy_highlight_primary_pane

0x3ab4,	// (0x0003556e) copy_highlight_primary_small_pane

0x3abc,	// (0x00035576) copy_highlight_secondary_pane

0x3ac4,	// (0x0003557e) copy_highlight_title_pane

0x3abc,	// (0x00035576) graphic_text_digital_pane

0x50f0,	// (0x00036baa) graphic_text_primary_pane

0x50f9,	// (0x00036bb3) graphic_text_primary_small_pane

0x3ab4,	// (0x0003556e) graphic_text_secondary_pane

0x3aa3,	// (0x0003555d) graphic_text_title_pane

0xc642,	// (0x0003e0fc) cursor_primary_pane_g1

0x50e2,	// (0x00036b9c) cursor_text_primary_t1

0xd2c5,	// (0x0003ed7f) cursor_primary_small_pane_g1

0x50d4,	// (0x00036b8e) cursor_text_primary_small_t1

0xd2bb,	// (0x0003ed75) cursor_primary_small_pane_g1_copy1

0x50bc,	// (0x00036b76) cursor_text_primary_small_t1_copy1

0x509a,	// (0x00036b54) cursor_text_title_t1

0xd2b1,	// (0x0003ed6b) cursor_title_pane_g1

0xc642,	// (0x0003e0fc) cursor_digital_pane_g1

0x3ad6,	// (0x00035590) cursor_text_digital_t1

0x3ae4,	// (0x0003559e) link_highlight_primary_pane_g1

0x5043,	// (0x00036afd) link_highlight_primary_pane_t1

0x3ae4,	// (0x0003559e) link_highlight_primary_small_pane_g1

0x3aec,	// (0x000355a6) link_highlight_primary_small_pane_t1

0x3afb,	// (0x000355b5) link_highlight_secondary_pane_g1

0x3b03,	// (0x000355bd) link_highlight_secondary_pane_t1

0x4fb7,	// (0x00036a71) link_highlight_title_pane_g1

0x4fbf,	// (0x00036a79) link_highlight_title_pane_t1

0x4fa0,	// (0x00036a5a) link_highlight_digital_pane_g1

0x4fa8,	// (0x00036a62) link_highlight_digital_pane_t1

0x4e68,	// (0x00036922) copy_highlight_primary_pane_g1

0x4e7f,	// (0x00036939) copy_highlight_primary_pane_t1

0x4e68,	// (0x00036922) copy_highlight_primary_small_pane_g1

0x4e70,	// (0x0003692a) copy_highlight_primary_small_pane_t1

0x3b12,	// (0x000355cc) copy_highlight_secondary_pane_g1

0x3b1a,	// (0x000355d4) copy_highlight_secondary_pane_t1

0x4e51,	// (0x0003690b) copy_highlight_title_pane_g1

0x4e59,	// (0x00036913) copy_highlight_title_pane_t1

0x4e68,	// (0x00036922) copy_highlight_digital_pane_g1

0x6179,	// (0x00037c33) copy_highlight_digital_pane_t1

0x60cd,	// (0x00037b87) graphic_text_primary_pane_g1

0x615d,	// (0x00037c17) graphic_text_primary_pane_t1

0x616b,	// (0x00037c25) graphic_text_primary_pane_t2

0x0001,

0xf9d5,	// (0x0004148f) graphic_text_primary_pane_t

0x6139,	// (0x00037bf3) graphic_text_primary_small_pane_g1

0x6141,	// (0x00037bfb) graphic_text_primary_small_pane_t1

0x614f,	// (0x00037c09) graphic_text_primary_small_pane_t2

0x0001,

0xf9d0,	// (0x0004148a) graphic_text_primary_small_pane_t

0x6115,	// (0x00037bcf) graphic_text_secondary_pane_g1

0x611d,	// (0x00037bd7) graphic_text_secondary_pane_t1

0x612b,	// (0x00037be5) graphic_text_secondary_pane_t2

0x0001,

0xf9cb,	// (0x00041485) graphic_text_secondary_pane_t

0x60f1,	// (0x00037bab) graphic_text_title_pane_g1

0x60f9,	// (0x00037bb3) graphic_text_title_pane_t1

0x6107,	// (0x00037bc1) graphic_text_title_pane_t2

0x0001,

0xf9c6,	// (0x00041480) graphic_text_title_pane_t

0x60cd,	// (0x00037b87) graphic_text_digital_pane_g1

0x60d5,	// (0x00037b8f) graphic_text_digital_pane_t1

0x60e3,	// (0x00037b9d) graphic_text_digital_pane_t2

0x0001,

0xf9c1,	// (0x0004147b) graphic_text_digital_pane_t

0x22ba,	// (0x00033d74) navi_icon_pane_srt_ParamLimits

0x22ba,	// (0x00033d74) navi_icon_pane_srt

0xe051,	// (0x0003fb0b) navi_midp_pane_srt

0xe051,	// (0x0003fb0b) navi_navi_pane_srt

0x22ba,	// (0x00033d74) navi_text_pane_srt_ParamLimits

0x22ba,	// (0x00033d74) navi_text_pane_srt

0x6098,	// (0x00037b52) navi_navi_icon_text_pane_srt

0x60a0,	// (0x00037b5a) navi_navi_pane_srt_g1_ParamLimits

0x60a0,	// (0x00037b5a) navi_navi_pane_srt_g1

0x60b2,	// (0x00037b6c) navi_navi_pane_srt_g2_ParamLimits

0x60b2,	// (0x00037b6c) navi_navi_pane_srt_g2

0x0001,

0xf9bc,	// (0x00041476) navi_navi_pane_srt_g_ParamLimits

0xf9bc,	// (0x00041476) navi_navi_pane_srt_g

0x60c4,	// (0x00037b7e) navi_navi_tabs_pane_srt

0x6098,	// (0x00037b52) navi_navi_text_pane_srt

0x6098,	// (0x00037b52) navi_navi_volume_pane_srt

0x6089,	// (0x00037b43) navi_navi_text_pane_srt_t1

0x0ff8,	// (0x00032ab2) navi_navi_volume_pane_srt_g1

0x1000,	// (0x00032aba) volume_small_pane_srt_ParamLimits

0x1000,	// (0x00032aba) volume_small_pane_srt

0x0865,	// (0x0003231f) volume_small_pane_srt_g1_ParamLimits

0x0865,	// (0x0003231f) volume_small_pane_srt_g1

0x0875,	// (0x0003232f) volume_small_pane_srt_g2_ParamLimits

0x0875,	// (0x0003232f) volume_small_pane_srt_g2

0x0886,	// (0x00032340) volume_small_pane_srt_g3_ParamLimits

0x0886,	// (0x00032340) volume_small_pane_srt_g3

0x0897,	// (0x00032351) volume_small_pane_srt_g4_ParamLimits

0x0897,	// (0x00032351) volume_small_pane_srt_g4

0x08a8,	// (0x00032362) volume_small_pane_srt_g5_ParamLimits

0x08a8,	// (0x00032362) volume_small_pane_srt_g5

0x08b9,	// (0x00032373) volume_small_pane_srt_g6_ParamLimits

0x08b9,	// (0x00032373) volume_small_pane_srt_g6

0x08ca,	// (0x00032384) volume_small_pane_srt_g7_ParamLimits

0x08ca,	// (0x00032384) volume_small_pane_srt_g7

0x08db,	// (0x00032395) volume_small_pane_srt_g8_ParamLimits

0x08db,	// (0x00032395) volume_small_pane_srt_g8

0x08ec,	// (0x000323a6) volume_small_pane_srt_g9_ParamLimits

0x08ec,	// (0x000323a6) volume_small_pane_srt_g9

0x08fd,	// (0x000323b7) volume_small_pane_srt_g10_ParamLimits

0x08fd,	// (0x000323b7) volume_small_pane_srt_g10

0x0009,

0xf770,	// (0x0004122a) volume_small_pane_srt_g_ParamLimits

0xf770,	// (0x0004122a) volume_small_pane_srt_g

0x26a1,	// (0x0003415b) query_popup_data_pane_cp2

0x606f,	// (0x00037b29) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x606f,	// (0x00037b29) navi_navi_icon_text_pane_srt_t1

0x50f0,	// (0x00036baa) navi_tabs_2_long_pane_srt

0x50f0,	// (0x00036baa) navi_tabs_2_pane_srt

0x50f0,	// (0x00036baa) navi_tabs_3_long_pane_srt

0x50f0,	// (0x00036baa) navi_tabs_3_pane_srt

0x50f0,	// (0x00036baa) navi_tabs_4_pane_srt

0x0fd8,	// (0x00032a92) tabs_2_active_pane_srt_ParamLimits

0x0fd8,	// (0x00032a92) tabs_2_active_pane_srt

0x0fe8,	// (0x00032aa2) tabs_2_passive_pane_srt_ParamLimits

0x0fe8,	// (0x00032aa2) tabs_2_passive_pane_srt

0x4928,	// (0x000363e2) bg_passive_tab_pane_cp1_srt_ParamLimits

0x4928,	// (0x000363e2) bg_passive_tab_pane_cp1_srt

0x603b,	// (0x00037af5) bg_passive_tab_pane_g1_cp1_srt

0x35bc,	// (0x00035076) bg_passive_tab_pane_g2_cp1_srt

0x6044,	// (0x00037afe) bg_passive_tab_pane_g3_cp1_srt

0x2536,	// (0x00033ff0) bg_active_tab_pane_cp1_srt_ParamLimits

0x2536,	// (0x00033ff0) bg_active_tab_pane_cp1_srt

0x604d,	// (0x00037b07) tabs_2_active_pane_srt_g1

0xd728,	// (0x0003f1e2) tabs_2_active_pane_srt_t1_ParamLimits

0xd728,	// (0x0003f1e2) tabs_2_active_pane_srt_t1

0x603b,	// (0x00037af5) bg_active_tab_pane_g1_cp1_srt

0x35bc,	// (0x00035076) bg_active_tab_pane_g2_cp1_srt

0x6044,	// (0x00037afe) bg_active_tab_pane_g3_cp1_srt

0x0fa5,	// (0x00032a5f) tabs_3_active_pane_srt_ParamLimits

0x0fa5,	// (0x00032a5f) tabs_3_active_pane_srt

0x0fb6,	// (0x00032a70) tabs_3_passive_pane_cp_srt_ParamLimits

0x0fb6,	// (0x00032a70) tabs_3_passive_pane_cp_srt

0x0fc7,	// (0x00032a81) tabs_3_passive_pane_srt_ParamLimits

0x0fc7,	// (0x00032a81) tabs_3_passive_pane_srt

0x4928,	// (0x000363e2) bg_passive_tab_pane_cp2_srt_ParamLimits

0x4928,	// (0x000363e2) bg_passive_tab_pane_cp2_srt

0x3b29,	// (0x000355e3) bg_passive_tab_pane_g1_cp2_srt

0x35bc,	// (0x00035076) bg_passive_tab_pane_g2_cp2_srt

0x3b32,	// (0x000355ec) bg_passive_tab_pane_g3_cp2_srt

0x2536,	// (0x00033ff0) bg_active_tab_pane_cp2_srt_ParamLimits

0x2536,	// (0x00033ff0) bg_active_tab_pane_cp2_srt

0x6021,	// (0x00037adb) tabs_3_active_pane_srt_g1

0xd712,	// (0x0003f1cc) tabs_3_active_pane_srt_t1_ParamLimits

0xd712,	// (0x0003f1cc) tabs_3_active_pane_srt_t1

0x3b29,	// (0x000355e3) bg_active_tab_pane_g1_cp2_srt

0x35bc,	// (0x00035076) bg_active_tab_pane_g2_cp2_srt

0x3b32,	// (0x000355ec) bg_active_tab_pane_g3_cp2_srt

0x0f5d,	// (0x00032a17) tabs_4_active_pane_srt_ParamLimits

0x0f5d,	// (0x00032a17) tabs_4_active_pane_srt

0x0f6f,	// (0x00032a29) tabs_4_passive_pane_cp2_srt_ParamLimits

0x0f6f,	// (0x00032a29) tabs_4_passive_pane_cp2_srt

0x3c87,	// (0x00035741) aid_size_cell_toolbar

0x5c43,	// (0x000376fd) main_idle_act_pane_ParamLimits

0x3ebe,	// (0x00035978) popup_large_graphic_colour_window_ParamLimits

0xcd5a,	// (0x0003e814) popup_toolbar_window_ParamLimits

0xcd5a,	// (0x0003e814) popup_toolbar_window

0x0f18,	// (0x000329d2) list_single_graphic_2heading_pane_ParamLimits

0x0f18,	// (0x000329d2) list_single_graphic_2heading_pane

0x309d,	// (0x00034b57) aid_size_cell_apps_grid_lsc_pane

0x30af,	// (0x00034b69) aid_size_cell_apps_grid_prt_pane

0x3cf9,	// (0x000357b3) bg_wml_button_pane_cp1_ParamLimits

0x3cf9,	// (0x000357b3) bg_wml_button_pane_cp1

0xd267,	// (0x0003ed21) form_midp_field_text_pane_t1_ParamLimits

0x4928,	// (0x000363e2) input_focus_pane_cp050_ParamLimits

0x4b13,	// (0x000365cd) list_midp_form_text_pane_ParamLimits

0x4ad2,	// (0x0003658c) input_focus_pane_cp051_ParamLimits

0x4ae6,	// (0x000365a0) list_midp_choice_pane_ParamLimits

0xd1f7,	// (0x0003ecb1) list_single_2graphic_pane_cp3_ParamLimits

0xd1f7,	// (0x0003ecb1) list_single_2graphic_pane_cp3

0xd209,	// (0x0003ecc3) list_single_midp_graphic_pane_ParamLimits

0xd209,	// (0x0003ecc3) list_single_midp_graphic_pane

0xefbb,	// (0x00040a75) list_single_graphic_2heading_pane_g1_ParamLimits

0xefbb,	// (0x00040a75) list_single_graphic_2heading_pane_g1

0xefc7,	// (0x00040a81) list_single_graphic_2heading_pane_g4_ParamLimits

0xefc7,	// (0x00040a81) list_single_graphic_2heading_pane_g4

0xefd3,	// (0x00040a8d) list_single_graphic_2heading_pane_g5_ParamLimits

0xefd3,	// (0x00040a8d) list_single_graphic_2heading_pane_g5

0x0002,

0xf7c3,	// (0x0004127d) list_single_graphic_2heading_pane_g_ParamLimits

0xf7c3,	// (0x0004127d) list_single_graphic_2heading_pane_g

0xefdf,	// (0x00040a99) list_single_graphic_2heading_pane_t1_ParamLimits

0xefdf,	// (0x00040a99) list_single_graphic_2heading_pane_t1

0xeff3,	// (0x00040aad) list_single_graphic_2heading_pane_t2_ParamLimits

0xeff3,	// (0x00040aad) list_single_graphic_2heading_pane_t2

0xf00f,	// (0x00040ac9) list_single_graphic_2heading_pane_t3_ParamLimits

0xf00f,	// (0x00040ac9) list_single_graphic_2heading_pane_t3

0x0002,

0xf7ca,	// (0x00041284) list_single_graphic_2heading_pane_t_ParamLimits

0xf7ca,	// (0x00041284) list_single_graphic_2heading_pane_t

0x4774,	// (0x0003622e) bg_popup_sub_pane_cp2

0x479e,	// (0x00036258) grid_toobar_pane

0x0a68,	// (0x00032522) cell_toolbar_pane_ParamLimits

0x0a68,	// (0x00032522) cell_toolbar_pane

0x47da,	// (0x00036294) cell_toolbar_pane_g1_ParamLimits

0x47da,	// (0x00036294) cell_toolbar_pane_g1

0x47ee,	// (0x000362a8) cell_toolbar_pane_g2_ParamLimits

0x47ee,	// (0x000362a8) cell_toolbar_pane_g2

0x0001,

0xf7d8,	// (0x00041292) cell_toolbar_pane_g_ParamLimits

0xf7d8,	// (0x00041292) cell_toolbar_pane_g

0x4810,	// (0x000362ca) grid_highlight_pane_cp2_ParamLimits

0x4810,	// (0x000362ca) grid_highlight_pane_cp2

0x482a,	// (0x000362e4) toolbar_button_pane

0x4836,	// (0x000362f0) toolbar_button_pane_g1

0x483e,	// (0x000362f8) toolbar_button_pane_g2

0x4846,	// (0x00036300) toolbar_button_pane_g3

0x484e,	// (0x00036308) toolbar_button_pane_g4

0x4856,	// (0x00036310) toolbar_button_pane_g5

0x485e,	// (0x00036318) toolbar_button_pane_g6

0x4866,	// (0x00036320) toolbar_button_pane_g7

0x486e,	// (0x00036328) toolbar_button_pane_g8

0x4876,	// (0x00036330) toolbar_button_pane_g9

0x0009,

0xf7dd,	// (0x00041297) toolbar_button_pane_g

0x0ada,	// (0x00032594) list_single_2graphic_pane_g1_cp3_ParamLimits

0x0ada,	// (0x00032594) list_single_2graphic_pane_g1_cp3

0xb9df,	// (0x0003d499) list_single_2graphic_pane_g2_cp3_ParamLimits

0xb9df,	// (0x0003d499) list_single_2graphic_pane_g2_cp3

0x0af7,	// (0x000325b1) list_single_2graphic_pane_g3_cp3

0x0aff,	// (0x000325b9) list_single_2graphic_pane_g4_cp3_ParamLimits

0x0aff,	// (0x000325b9) list_single_2graphic_pane_g4_cp3

0x0b0b,	// (0x000325c5) list_single_2graphic_pane_t1_cp3_ParamLimits

0x0b0b,	// (0x000325c5) list_single_2graphic_pane_t1_cp3

0x0b68,	// (0x00032622) list_single_midp_graphic_pane_g2_ParamLimits

0x0b68,	// (0x00032622) list_single_midp_graphic_pane_g2

0x3c8f,	// (0x00035749) aid_zoom_text_primary

0x0a58,	// (0x00032512) aid_zoom_text_secondary

0x3be6,	// (0x000356a0) status_small_pane_g7_ParamLimits

0x3be6,	// (0x000356a0) status_small_pane_g7

0x3c09,	// (0x000356c3) status_small_pane_t1_ParamLimits

0xae5e,	// (0x0003c918) title_pane_g2

0x0003,

0xf566,	// (0x00041020) title_pane_g

0xb0f6,	// (0x0003cbb0) aid_size_cell_colour_1_pane_ParamLimits

0xb0f6,	// (0x0003cbb0) aid_size_cell_colour_1_pane

0xb10a,	// (0x0003cbc4) aid_size_cell_colour_2_pane_ParamLimits

0xb10a,	// (0x0003cbc4) aid_size_cell_colour_2_pane

0xb11e,	// (0x0003cbd8) aid_size_cell_colour_3_pane_ParamLimits

0xb11e,	// (0x0003cbd8) aid_size_cell_colour_3_pane

0xb132,	// (0x0003cbec) aid_size_cell_colour_4_pane_ParamLimits

0xb132,	// (0x0003cbec) aid_size_cell_colour_4_pane

0x042e,	// (0x00031ee8) title_pane_stacon_g1_ParamLimits

0x042e,	// (0x00031ee8) title_pane_stacon_g1

0x4ed6,	// (0x00036990) popup_note_wait_window_g3_ParamLimits

0x4ed6,	// (0x00036990) popup_note_wait_window_g3

0x4f4d,	// (0x00036a07) popup_note_wait_window_t5_ParamLimits

0x4f4d,	// (0x00036a07) popup_note_wait_window_t5

0xe051,	// (0x0003fb0b) main_feb_china_hwr_fs_writing_pane

0xc6f5,	// (0x0003e1af) popup_feb_china_hwr_fs_window_ParamLimits

0xc6f5,	// (0x0003e1af) popup_feb_china_hwr_fs_window

0xb9f0,	// (0x0003d4aa) aid_size_cell_hwr_fs_ParamLimits

0xb9f0,	// (0x0003d4aa) aid_size_cell_hwr_fs

0x4928,	// (0x000363e2) bg_popup_sub_pane_cp3_ParamLimits

0x4928,	// (0x000363e2) bg_popup_sub_pane_cp3

0xba05,	// (0x0003d4bf) grid_hwr_fs_pane_ParamLimits

0xba05,	// (0x0003d4bf) grid_hwr_fs_pane

0x0bb7,	// (0x00032671) linegrid_hwr_fs_pane_ParamLimits

0x0bb7,	// (0x00032671) linegrid_hwr_fs_pane

0xba1d,	// (0x0003d4d7) cell_hwr_fs_pane_ParamLimits

0xba1d,	// (0x0003d4d7) cell_hwr_fs_pane

0x4934,	// (0x000363ee) linegrid_hwr_fs_pane_g1_ParamLimits

0x4934,	// (0x000363ee) linegrid_hwr_fs_pane_g1

0xd1cb,	// (0x0003ec85) linegrid_hwr_fs_pane_g2_ParamLimits

0xd1cb,	// (0x0003ec85) linegrid_hwr_fs_pane_g2

0x4952,	// (0x0003640c) linegrid_hwr_fs_pane_g3_ParamLimits

0x4952,	// (0x0003640c) linegrid_hwr_fs_pane_g3

0x0beb,	// (0x000326a5) linegrid_hwr_fs_pane_g4_ParamLimits

0x0beb,	// (0x000326a5) linegrid_hwr_fs_pane_g4

0x0c09,	// (0x000326c3) linegrid_hwr_fs_pane_g5_ParamLimits

0x0c09,	// (0x000326c3) linegrid_hwr_fs_pane_g5

0x0004,

0xf803,	// (0x000412bd) linegrid_hwr_fs_pane_g_ParamLimits

0xf803,	// (0x000412bd) linegrid_hwr_fs_pane_g

0x495e,	// (0x00036418) cell_hwr_fs_pane_g1_ParamLimits

0x495e,	// (0x00036418) cell_hwr_fs_pane_g1

0x46ab,	// (0x00036165) cell_hwr_fs_pane_g2_ParamLimits

0x46ab,	// (0x00036165) cell_hwr_fs_pane_g2

0xd1dd,	// (0x0003ec97) cell_hwr_fs_pane_g3_ParamLimits

0xd1dd,	// (0x0003ec97) cell_hwr_fs_pane_g3

0xd1ea,	// (0x0003eca4) cell_hwr_fs_pane_g4_ParamLimits

0xd1ea,	// (0x0003eca4) cell_hwr_fs_pane_g4

0x0003,

0xf80e,	// (0x000412c8) cell_hwr_fs_pane_g_ParamLimits

0xf80e,	// (0x000412c8) cell_hwr_fs_pane_g

0xba43,	// (0x0003d4fd) cell_hwr_fs_pane_t1

0xe051,	// (0x0003fb0b) grid_highlight_pane_cp6

0xe051,	// (0x0003fb0b) main_idle_act2_pane

0x2caa,	// (0x00034764) aid_inside_area_popup_secondary

0xd2e5,	// (0x0003ed9f) aid_inside_area_window_primary_ParamLimits

0xd2e5,	// (0x0003ed9f) aid_inside_area_window_primary

0x6188,	// (0x00037c42) ai2_news_ticker_pane

0x6190,	// (0x00037c4a) aid_size_cell_ai1_link_ParamLimits

0x6190,	// (0x00037c4a) aid_size_cell_ai1_link

0x61aa,	// (0x00037c64) popup_ai2_data_window_ParamLimits

0x61aa,	// (0x00037c64) popup_ai2_data_window

0x61c8,	// (0x00037c82) popup_ai2_link_window_ParamLimits

0x61c8,	// (0x00037c82) popup_ai2_link_window

0x4928,	// (0x000363e2) bg_popup_sub_pane_cp4_ParamLimits

0x4928,	// (0x000363e2) bg_popup_sub_pane_cp4

0x61de,	// (0x00037c98) grid_ai2_link_pane_ParamLimits

0x61de,	// (0x00037c98) grid_ai2_link_pane

0x61f5,	// (0x00037caf) popup_ai2_link_window_g1_ParamLimits

0x61f5,	// (0x00037caf) popup_ai2_link_window_g1

0x6201,	// (0x00037cbb) popup_ai2_link_window_g2_ParamLimits

0x6201,	// (0x00037cbb) popup_ai2_link_window_g2

0x0001,

0xf9da,	// (0x00041494) popup_ai2_link_window_g_ParamLimits

0xf9da,	// (0x00041494) popup_ai2_link_window_g

0x6212,	// (0x00037ccc) ai2_mp_button_pane

0x621a,	// (0x00037cd4) ai2_mp_volume_pane

0x4ad2,	// (0x0003658c) bg_popup_sub_pane_cp5_ParamLimits

0x4ad2,	// (0x0003658c) bg_popup_sub_pane_cp5

0x6222,	// (0x00037cdc) heading_ai2_gene_pane_ParamLimits

0x6222,	// (0x00037cdc) heading_ai2_gene_pane

0x622e,	// (0x00037ce8) list_ai2_gene_pane_ParamLimits

0x622e,	// (0x00037ce8) list_ai2_gene_pane

0x6276,	// (0x00037d30) cell_ai2_link_pane_ParamLimits

0x6276,	// (0x00037d30) cell_ai2_link_pane

0x628c,	// (0x00037d46) cell_ai2_link_pane_g1

0xe051,	// (0x0003fb0b) grid_highlight_pane_cp7

0x1015,	// (0x00032acf) ai2_mp_volume_pane_g1

0x635f,	// (0x00037e19) ai2_mp_volume_pane_g2

0x62d4,	// (0x00037d8e) list_ai2_gene_pane_t1

0x6367,	// (0x00037e21) ai2_mp_volume_pane_g3

0x0002,

0xf9f3,	// (0x000414ad) ai2_mp_volume_pane_g

0x101d,	// (0x00032ad7) volume_small_pane_cp3

0x636f,	// (0x00037e29) aid_size_cell_ai2_button

0x6377,	// (0x00037e31) grid_ai2_button_pane

0x6380,	// (0x00037e3a) cell_ai2_button_pane_ParamLimits

0x6380,	// (0x00037e3a) cell_ai2_button_pane

0xe047,	// (0x0003fb01) cell_ai2_button_pane_g1

0xe051,	// (0x0003fb0b) grid_highlight_pane_cp8

0x631f,	// (0x00037dd9) ai2_gene_pane_t1_ParamLimits

0x631f,	// (0x00037dd9) ai2_gene_pane_t1

0xc673,	// (0x0003e12d) aid_height_parent_landscape

0xd4b5,	// (0x0003ef6f) aid_height_set_list

0x5c43,	// (0x000376fd) aid_size_parent

0x5fa9,	// (0x00037a63) aid_size_cell_graphic_pane_ParamLimits

0x623e,	// (0x00037cf8) popup_ai2_data_window_g1_ParamLimits

0x623e,	// (0x00037cf8) popup_ai2_data_window_g1

0x624a,	// (0x00037d04) ai2_news_ticker_pane_g1

0x6252,	// (0x00037d0c) ai2_news_ticker_pane_g2

0x0001,

0xf9df,	// (0x00041499) ai2_news_ticker_pane_g

0x625a,	// (0x00037d14) ai2_news_ticker_pane_t1

0x6268,	// (0x00037d22) ai2_news_ticker_pane_t2

0x0001,

0xf9e4,	// (0x0004149e) ai2_news_ticker_pane_t

0x6295,	// (0x00037d4f) heading_ai2_gene_pane_g1

0x629d,	// (0x00037d57) heading_ai2_gene_pane_t1_ParamLimits

0x629d,	// (0x00037d57) heading_ai2_gene_pane_t1

0x62b2,	// (0x00037d6c) list_highlight_pane_cp6

0x62ba,	// (0x00037d74) ai2_gene_pane_ParamLimits

0x62ba,	// (0x00037d74) ai2_gene_pane

0x62e2,	// (0x00037d9c) list_ai2_gene_pane_t2

0x0001,

0xf9e9,	// (0x000414a3) list_ai2_gene_pane_t

0x62f0,	// (0x00037daa) list_highlight_pane_cp8_ParamLimits

0x62f0,	// (0x00037daa) list_highlight_pane_cp8

0x6301,	// (0x00037dbb) ai2_gene_pane_g1_ParamLimits

0x6301,	// (0x00037dbb) ai2_gene_pane_g1

0x6313,	// (0x00037dcd) ai2_gene_pane_g2_ParamLimits

0x6313,	// (0x00037dcd) ai2_gene_pane_g2

0x0001,

0xf9ee,	// (0x000414a8) ai2_gene_pane_g_ParamLimits

0xf9ee,	// (0x000414a8) ai2_gene_pane_g

0x2ad7,	// (0x00034591) scroll_pane_cp12

0xb982,	// (0x0003d43c) control_pane_t3_ParamLimits

0xb982,	// (0x0003d43c) control_pane_t3

0x3bfa,	// (0x000356b4) status_small_pane_g8_ParamLimits

0x3bfa,	// (0x000356b4) status_small_pane_g8

0xc797,	// (0x0003e251) popup_find_window_ParamLimits

0xca44,	// (0x0003e4fe) popup_note_image_window_ParamLimits

0x0a98,	// (0x00032552) list_double2_graphic_pane_vc_g1_ParamLimits

0x0a98,	// (0x00032552) list_double2_graphic_pane_vc_g1

0x0aa4,	// (0x0003255e) list_double2_graphic_pane_vc_g2_ParamLimits

0x0aa4,	// (0x0003255e) list_double2_graphic_pane_vc_g2

0x0ab0,	// (0x0003256a) list_double2_graphic_pane_vc_g3_ParamLimits

0x0ab0,	// (0x0003256a) list_double2_graphic_pane_vc_g3

0x0002,

0xf7d1,	// (0x0004128b) list_double2_graphic_pane_vc_g_ParamLimits

0xf7d1,	// (0x0004128b) list_double2_graphic_pane_vc_g

0x0abc,	// (0x00032576) list_double2_graphic_pane_vc_t1_ParamLimits

0x0abc,	// (0x00032576) list_double2_graphic_pane_vc_t1

0x0b26,	// (0x000325e0) list_single_heading_pane_vc_g1_ParamLimits

0x0b26,	// (0x000325e0) list_single_heading_pane_vc_g1

0x0b32,	// (0x000325ec) list_single_heading_pane_vc_g2_ParamLimits

0x0b32,	// (0x000325ec) list_single_heading_pane_vc_g2

0x0001,

0xf5e0,	// (0x0004109a) list_single_heading_pane_vc_g_ParamLimits

0xf5e0,	// (0x0004109a) list_single_heading_pane_vc_g

0x0b3e,	// (0x000325f8) list_single_heading_pane_vc_t1_ParamLimits

0x0b3e,	// (0x000325f8) list_single_heading_pane_vc_t1

0x0b56,	// (0x00032610) list_single_heading_pane_vc_t2_ParamLimits

0x0b56,	// (0x00032610) list_single_heading_pane_vc_t2

0x0001,

0xf7f2,	// (0x000412ac) list_single_heading_pane_vc_t_ParamLimits

0xf7f2,	// (0x000412ac) list_single_heading_pane_vc_t

0x487e,	// (0x00036338) list_setting_number_pane_vc_g1_ParamLimits

0x487e,	// (0x00036338) list_setting_number_pane_vc_g1

0x488a,	// (0x00036344) list_setting_number_pane_vc_g2_ParamLimits

0x488a,	// (0x00036344) list_setting_number_pane_vc_g2

0x0001,

0xf7f7,	// (0x000412b1) list_setting_number_pane_vc_g_ParamLimits

0xf7f7,	// (0x000412b1) list_setting_number_pane_vc_g

0x4896,	// (0x00036350) list_setting_number_pane_vc_t1_ParamLimits

0x4896,	// (0x00036350) list_setting_number_pane_vc_t1

0x48aa,	// (0x00036364) list_setting_number_pane_vc_t2_ParamLimits

0x48aa,	// (0x00036364) list_setting_number_pane_vc_t2

0x48c6,	// (0x00036380) list_setting_number_pane_vc_t3_ParamLimits

0x48c6,	// (0x00036380) list_setting_number_pane_vc_t3

0x0002,

0xf7fc,	// (0x000412b6) list_setting_number_pane_vc_t_ParamLimits

0xf7fc,	// (0x000412b6) list_setting_number_pane_vc_t

0x48ee,	// (0x000363a8) set_value_pane_vc_ParamLimits

0x48ee,	// (0x000363a8) set_value_pane_vc

0x0f18,	// (0x000329d2) list_double2_graphic_pane_vc_ParamLimits

0x0f18,	// (0x000329d2) list_double2_graphic_pane_vc

0x5e27,	// (0x000378e1) list_double2_large_graphic_pane_vc_ParamLimits

0x5e27,	// (0x000378e1) list_double2_large_graphic_pane_vc

0x0f18,	// (0x000329d2) list_double2_pane_vc_ParamLimits

0x0f18,	// (0x000329d2) list_double2_pane_vc

0x0f18,	// (0x000329d2) list_double_graphic_heading_pane_vc_ParamLimits

0x0f18,	// (0x000329d2) list_double_graphic_heading_pane_vc

0x0f18,	// (0x000329d2) list_double_graphic_pane_vc_ParamLimits

0x0f18,	// (0x000329d2) list_double_graphic_pane_vc

0x0f18,	// (0x000329d2) list_double_heading_pane_vc_ParamLimits

0x0f18,	// (0x000329d2) list_double_heading_pane_vc

0x5e27,	// (0x000378e1) list_double_large_graphic_pane_vc_ParamLimits

0x5e27,	// (0x000378e1) list_double_large_graphic_pane_vc

0x0f18,	// (0x000329d2) list_double_number_pane_vc_ParamLimits

0x0f18,	// (0x000329d2) list_double_number_pane_vc

0x0f18,	// (0x000329d2) list_double_pane_vc_ParamLimits

0x0f18,	// (0x000329d2) list_double_pane_vc

0x0f18,	// (0x000329d2) list_double_time_pane_vc_ParamLimits

0x0f18,	// (0x000329d2) list_double_time_pane_vc

0x0f18,	// (0x000329d2) list_setting_number_pane_vc_ParamLimits

0x0f18,	// (0x000329d2) list_setting_number_pane_vc

0x0f18,	// (0x000329d2) list_setting_pane_vc_ParamLimits

0x0f18,	// (0x000329d2) list_setting_pane_vc

0x0f18,	// (0x000329d2) list_single_graphic_heading_pane_vc_ParamLimits

0x0f18,	// (0x000329d2) list_single_graphic_heading_pane_vc

0x0f18,	// (0x000329d2) list_single_heading_pane_vc_ParamLimits

0x0f18,	// (0x000329d2) list_single_heading_pane_vc

0x0f18,	// (0x000329d2) list_single_number_heading_pane_vc_ParamLimits

0x0f18,	// (0x000329d2) list_single_number_heading_pane_vc

0x0a98,	// (0x00032552) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x0a98,	// (0x00032552) list_double_graphic_heading_pane_vc_g1

0x0b26,	// (0x000325e0) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x0b26,	// (0x000325e0) list_double_graphic_heading_pane_vc_g2

0x0b32,	// (0x000325ec) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x0b32,	// (0x000325ec) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9fa,	// (0x000414b4) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9fa,	// (0x000414b4) list_double_graphic_heading_pane_vc_g

0x1026,	// (0x00032ae0) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x1026,	// (0x00032ae0) list_double_graphic_heading_pane_vc_t1

0x0b3e,	// (0x000325f8) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x0b3e,	// (0x000325f8) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa01,	// (0x000414bb) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa01,	// (0x000414bb) list_double_graphic_heading_pane_vc_t

0x487e,	// (0x00036338) list_setting_pane_vc_g1_ParamLimits

0x487e,	// (0x00036338) list_setting_pane_vc_g1

0x488a,	// (0x00036344) list_setting_pane_vc_g2_ParamLimits

0x488a,	// (0x00036344) list_setting_pane_vc_g2

0x0001,

0xf7f7,	// (0x000412b1) list_setting_pane_vc_g_ParamLimits

0xf7f7,	// (0x000412b1) list_setting_pane_vc_g

0x65bc,	// (0x00038076) list_setting_pane_vc_t1_ParamLimits

0x65bc,	// (0x00038076) list_setting_pane_vc_t1

0x65d0,	// (0x0003808a) list_setting_pane_vc_t2_ParamLimits

0x65d0,	// (0x0003808a) list_setting_pane_vc_t2

0x0001,

0xfa44,	// (0x000414fe) list_setting_pane_vc_t_ParamLimits

0xfa44,	// (0x000414fe) list_setting_pane_vc_t

0x48ee,	// (0x000363a8) set_value_pane_cp_vc_ParamLimits

0x48ee,	// (0x000363a8) set_value_pane_cp_vc

0x0b26,	// (0x000325e0) list_single_number_heading_pane_vc_g1_ParamLimits

0x0b26,	// (0x000325e0) list_single_number_heading_pane_vc_g1

0x0b32,	// (0x000325ec) list_single_number_heading_pane_vc_g2_ParamLimits

0x0b32,	// (0x000325ec) list_single_number_heading_pane_vc_g2

0x0001,

0xf5e0,	// (0x0004109a) list_single_number_heading_pane_vc_g_ParamLimits

0xf5e0,	// (0x0004109a) list_single_number_heading_pane_vc_g

0x0b3e,	// (0x000325f8) list_single_number_heading_pane_vc_t1_ParamLimits

0x0b3e,	// (0x000325f8) list_single_number_heading_pane_vc_t1

0x1038,	// (0x00032af2) list_single_number_heading_pane_vc_t2_ParamLimits

0x1038,	// (0x00032af2) list_single_number_heading_pane_vc_t2

0x104a,	// (0x00032b04) list_single_number_heading_pane_vc_t3_ParamLimits

0x104a,	// (0x00032b04) list_single_number_heading_pane_vc_t3

0x0002,

0xfa49,	// (0x00041503) list_single_number_heading_pane_vc_t_ParamLimits

0xfa49,	// (0x00041503) list_single_number_heading_pane_vc_t

0x0a98,	// (0x00032552) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x0a98,	// (0x00032552) list_single_graphic_heading_pane_vc_g1

0x0b26,	// (0x000325e0) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x0b26,	// (0x000325e0) list_single_graphic_heading_pane_vc_g4

0x0b32,	// (0x000325ec) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x0b32,	// (0x000325ec) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf9fa,	// (0x000414b4) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf9fa,	// (0x000414b4) list_single_graphic_heading_pane_vc_g

0x0b3e,	// (0x000325f8) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x0b3e,	// (0x000325f8) list_single_graphic_heading_pane_vc_t1

0x105c,	// (0x00032b16) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x105c,	// (0x00032b16) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa50,	// (0x0004150a) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa50,	// (0x0004150a) list_single_graphic_heading_pane_vc_t

0x0b26,	// (0x000325e0) list_double2_pane_vc_g1_ParamLimits

0x0b26,	// (0x000325e0) list_double2_pane_vc_g1

0x0b32,	// (0x000325ec) list_double2_pane_vc_g2_ParamLimits

0x0b32,	// (0x000325ec) list_double2_pane_vc_g2

0x0001,

0xf5e0,	// (0x0004109a) list_double2_pane_vc_g_ParamLimits

0xf5e0,	// (0x0004109a) list_double2_pane_vc_g

0x106e,	// (0x00032b28) list_double2_pane_vc_t1_ParamLimits

0x106e,	// (0x00032b28) list_double2_pane_vc_t1

0x1084,	// (0x00032b3e) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x1084,	// (0x00032b3e) list_double2_large_graphic_pane_vc_g1

0x1090,	// (0x00032b4a) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x1090,	// (0x00032b4a) list_double2_large_graphic_pane_vc_g2

0x109c,	// (0x00032b56) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x109c,	// (0x00032b56) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5fd,	// (0x000410b7) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5fd,	// (0x000410b7) list_double2_large_graphic_pane_vc_g

0x10a8,	// (0x00032b62) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x10a8,	// (0x00032b62) list_double2_large_graphic_pane_vc_t1

0x10be,	// (0x00032b78) list_double_time_pane_vc_g1_ParamLimits

0x10be,	// (0x00032b78) list_double_time_pane_vc_g1

0x10ca,	// (0x00032b84) list_double_time_pane_vc_g2_ParamLimits

0x10ca,	// (0x00032b84) list_double_time_pane_vc_g2

0x0001,

0xfa55,	// (0x0004150f) list_double_time_pane_vc_g_ParamLimits

0xfa55,	// (0x0004150f) list_double_time_pane_vc_g

0x10d6,	// (0x00032b90) list_double_time_pane_vc_t1_ParamLimits

0x10d6,	// (0x00032b90) list_double_time_pane_vc_t1

0x10f1,	// (0x00032bab) list_double_time_pane_vc_t2_ParamLimits

0x10f1,	// (0x00032bab) list_double_time_pane_vc_t2

0x112f,	// (0x00032be9) list_double_time_pane_vc_t3_ParamLimits

0x112f,	// (0x00032be9) list_double_time_pane_vc_t3

0x1147,	// (0x00032c01) list_double_time_pane_vc_t4_ParamLimits

0x1147,	// (0x00032c01) list_double_time_pane_vc_t4

0x0003,

0xfa5a,	// (0x00041514) list_double_time_pane_vc_t_ParamLimits

0xfa5a,	// (0x00041514) list_double_time_pane_vc_t

0x0b26,	// (0x000325e0) list_double_pane_vc_g1_ParamLimits

0x0b26,	// (0x000325e0) list_double_pane_vc_g1

0x0b32,	// (0x000325ec) list_double_pane_vc_g2_ParamLimits

0x0b32,	// (0x000325ec) list_double_pane_vc_g2

0x0001,

0xf5e0,	// (0x0004109a) list_double_pane_vc_g_ParamLimits

0xf5e0,	// (0x0004109a) list_double_pane_vc_g

0x115b,	// (0x00032c15) list_double_pane_vc_t1_ParamLimits

0x115b,	// (0x00032c15) list_double_pane_vc_t1

0x116f,	// (0x00032c29) list_double_pane_vc_t2_ParamLimits

0x116f,	// (0x00032c29) list_double_pane_vc_t2

0x0001,

0xfa63,	// (0x0004151d) list_double_pane_vc_t_ParamLimits

0xfa63,	// (0x0004151d) list_double_pane_vc_t

0x0b26,	// (0x000325e0) list_double_number_pane_vc_g1_ParamLimits

0x0b26,	// (0x000325e0) list_double_number_pane_vc_g1

0x0b32,	// (0x000325ec) list_double_number_pane_vc_g2_ParamLimits

0x0b32,	// (0x000325ec) list_double_number_pane_vc_g2

0x0001,

0xf5e0,	// (0x0004109a) list_double_number_pane_vc_g_ParamLimits

0xf5e0,	// (0x0004109a) list_double_number_pane_vc_g

0x1185,	// (0x00032c3f) list_double_number_pane_vc_t1_ParamLimits

0x1185,	// (0x00032c3f) list_double_number_pane_vc_t1

0x1199,	// (0x00032c53) list_double_number_pane_vc_t2_ParamLimits

0x1199,	// (0x00032c53) list_double_number_pane_vc_t2

0x116f,	// (0x00032c29) list_double_number_pane_vc_t3_ParamLimits

0x116f,	// (0x00032c29) list_double_number_pane_vc_t3

0x0002,

0xfa68,	// (0x00041522) list_double_number_pane_vc_t_ParamLimits

0xfa68,	// (0x00041522) list_double_number_pane_vc_t

0x11ad,	// (0x00032c67) list_double_large_graphic_pane_vc_g1_ParamLimits

0x11ad,	// (0x00032c67) list_double_large_graphic_pane_vc_g1

0x11b9,	// (0x00032c73) list_double_large_graphic_pane_vc_g2_ParamLimits

0x11b9,	// (0x00032c73) list_double_large_graphic_pane_vc_g2

0x109c,	// (0x00032b56) list_double_large_graphic_pane_vc_g3_ParamLimits

0x109c,	// (0x00032b56) list_double_large_graphic_pane_vc_g3

0x11c8,	// (0x00032c82) list_double_large_graphic_pane_vc_g4_ParamLimits

0x11c8,	// (0x00032c82) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa6f,	// (0x00041529) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa6f,	// (0x00041529) list_double_large_graphic_pane_vc_g

0x11d4,	// (0x00032c8e) list_double_large_graphic_pane_vc_t1_ParamLimits

0x11d4,	// (0x00032c8e) list_double_large_graphic_pane_vc_t1

0x11e8,	// (0x00032ca2) list_double_large_graphic_pane_vc_t2_ParamLimits

0x11e8,	// (0x00032ca2) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa78,	// (0x00041532) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa78,	// (0x00041532) list_double_large_graphic_pane_vc_t

0x0b26,	// (0x000325e0) list_double_heading_pane_vc_g1_ParamLimits

0x0b26,	// (0x000325e0) list_double_heading_pane_vc_g1

0x0b32,	// (0x000325ec) list_double_heading_pane_vc_g2_ParamLimits

0x0b32,	// (0x000325ec) list_double_heading_pane_vc_g2

0x0001,

0xf5e0,	// (0x0004109a) list_double_heading_pane_vc_g_ParamLimits

0xf5e0,	// (0x0004109a) list_double_heading_pane_vc_g

0x11ff,	// (0x00032cb9) list_double_heading_pane_vc_t1_ParamLimits

0x11ff,	// (0x00032cb9) list_double_heading_pane_vc_t1

0x0b3e,	// (0x000325f8) list_double_heading_pane_vc_t2_ParamLimits

0x0b3e,	// (0x000325f8) list_double_heading_pane_vc_t2

0x0001,

0xfa7d,	// (0x00041537) list_double_heading_pane_vc_t_ParamLimits

0xfa7d,	// (0x00041537) list_double_heading_pane_vc_t

0x1211,	// (0x00032ccb) list_double_graphic_pane_vc_g1_ParamLimits

0x1211,	// (0x00032ccb) list_double_graphic_pane_vc_g1

0x1221,	// (0x00032cdb) list_double_graphic_pane_vc_g2_ParamLimits

0x1221,	// (0x00032cdb) list_double_graphic_pane_vc_g2

0x1230,	// (0x00032cea) list_double_graphic_pane_vc_g3_ParamLimits

0x1230,	// (0x00032cea) list_double_graphic_pane_vc_g3

0x0002,

0xfa82,	// (0x0004153c) list_double_graphic_pane_vc_g_ParamLimits

0xfa82,	// (0x0004153c) list_double_graphic_pane_vc_g

0x123c,	// (0x00032cf6) list_double_graphic_pane_vc_t1_ParamLimits

0x123c,	// (0x00032cf6) list_double_graphic_pane_vc_t1

0x116f,	// (0x00032c29) list_double_graphic_pane_vc_t2_ParamLimits

0x116f,	// (0x00032c29) list_double_graphic_pane_vc_t2

0x0001,

0xfa89,	// (0x00041543) list_double_graphic_pane_vc_t_ParamLimits

0xfa89,	// (0x00041543) list_double_graphic_pane_vc_t

0xeeef,	// (0x000409a9) aid_size_cell_fastswap

0xaca6,	// (0x0003c760) aid_size_cell_touch_ParamLimits

0xaca6,	// (0x0003c760) aid_size_cell_touch

0xf43b,	// (0x00040ef5) popup_fast_swap_wide_window_ParamLimits

0xf43b,	// (0x00040ef5) popup_fast_swap_wide_window

0xadf5,	// (0x0003c8af) touch_pane_ParamLimits

0xadf5,	// (0x0003c8af) touch_pane

0x2b2d,	// (0x000345e7) button_value_adjust_pane_cp2

0x2b2d,	// (0x000345e7) button_value_adjust_pane_cp4

0x01ba,	// (0x00031c74) form_field_data_pane_cp2

0xb643,	// (0x0003d0fd) form_field_data_wide_pane_cp2

0x316f,	// (0x00034c29) bg_scroll_pane_ParamLimits

0x0593,	// (0x0003204d) scroll_handle_pane_ParamLimits

0x05a7,	// (0x00032061) scroll_sc2_down_pane_ParamLimits

0x05a7,	// (0x00032061) scroll_sc2_down_pane

0x31a0,	// (0x00034c5a) scroll_sc2_up_pane_ParamLimits

0x31a0,	// (0x00034c5a) scroll_sc2_up_pane

0xd869,	// (0x0003f323) grid_wheel_folder_pane_g1_ParamLimits

0xd869,	// (0x0003f323) grid_wheel_folder_pane_g1

0x07fd,	// (0x000322b7) clock_nsta_pane_cp2_ParamLimits

0x07fd,	// (0x000322b7) clock_nsta_pane_cp2

0xc588,	// (0x0003e042) listscroll_midp_pane_ParamLimits

0xc599,	// (0x0003e053) midp_canvas_pane

0x3c75,	// (0x0003572f) nsta_clock_indic_pane

0x3ccb,	// (0x00035785) listscroll_form_pane_vc

0x3ce7,	// (0x000357a1) listscroll_set_pane_vc_ParamLimits

0x3ce7,	// (0x000357a1) listscroll_set_pane_vc

0xcebe,	// (0x0003e978) clock_nsta_pane

0xcee8,	// (0x0003e9a2) indicator_nsta_pane

0x4774,	// (0x0003622e) bg_popup_sub_pane_cp2_ParamLimits

0x4788,	// (0x00036242) find_pane_cp2_ParamLimits

0x4788,	// (0x00036242) find_pane_cp2

0x479e,	// (0x00036258) grid_toobar_pane_ParamLimits

0x48fc,	// (0x000363b6) list_form_gen_pane_vc_ParamLimits

0x48fc,	// (0x000363b6) list_form_gen_pane_vc

0x4912,	// (0x000363cc) scroll_pane_cp8_vc_ParamLimits

0x4912,	// (0x000363cc) scroll_pane_cp8_vc

0x498e,	// (0x00036448) data_form_wide_pane_vc_ParamLimits

0x498e,	// (0x00036448) data_form_wide_pane_vc

0x499a,	// (0x00036454) form_field_data_wide_pane_vc_g1

0x49a2,	// (0x0003645c) form_field_data_wide_pane_vc_t1_ParamLimits

0x49a2,	// (0x0003645c) form_field_data_wide_pane_vc_t1

0x2b41,	// (0x000345fb) input_focus_pane_cp6_vc_ParamLimits

0x2b41,	// (0x000345fb) input_focus_pane_cp6_vc

0xd289,	// (0x0003ed43) list_midp_pane_ParamLimits

0x6015,	// (0x00037acf) scroll_pane_cp16_ParamLimits

0x6015,	// (0x00037acf) scroll_pane_cp16

0x4caa,	// (0x00036764) button_value_adjust_pane_ParamLimits

0x4caa,	// (0x00036764) button_value_adjust_pane

0xd4c6,	// (0x0003ef80) button_value_adjust_pane_cp6_ParamLimits

0xd4c6,	// (0x0003ef80) button_value_adjust_pane_cp6

0xd608,	// (0x0003f0c2) settings_code_pane_cp_ParamLimits

0xd608,	// (0x0003f0c2) settings_code_pane_cp

0xe047,	// (0x0003fb01) cell_touch_pane_g1

0xe047,	// (0x0003fb01) cell_touch_pane_g2

0x0001,

0xf716,	// (0x000411d0) cell_touch_pane_g

0xd73e,	// (0x0003f1f8) cell_touch_pane_cp_ParamLimits

0xd73e,	// (0x0003f1f8) cell_touch_pane_cp

0xd75a,	// (0x0003f214) cell_touch_pane_ParamLimits

0xd75a,	// (0x0003f214) cell_touch_pane

0xe047,	// (0x0003fb01) scroll_sc2_down_pane_g1

0xe047,	// (0x0003fb01) scroll_sc2_up_pane_g1

0xe051,	// (0x0003fb0b) bg_set_opt_pane_cp4_vc

0x63b3,	// (0x00037e6d) list_set_graphic_pane_vc_g1_ParamLimits

0x63b3,	// (0x00037e6d) list_set_graphic_pane_vc_g1

0x63bf,	// (0x00037e79) list_set_graphic_pane_vc_g2_ParamLimits

0x63bf,	// (0x00037e79) list_set_graphic_pane_vc_g2

0x0001,

0xfa06,	// (0x000414c0) list_set_graphic_pane_vc_g_ParamLimits

0xfa06,	// (0x000414c0) list_set_graphic_pane_vc_g

0x63cb,	// (0x00037e85) text_primary_small_cp13_vc_ParamLimits

0x63cb,	// (0x00037e85) text_primary_small_cp13_vc

0x63e3,	// (0x00037e9d) list_set_graphic_pane_vc_ParamLimits

0x63e3,	// (0x00037e9d) list_set_graphic_pane_vc

0xe051,	// (0x0003fb0b) input_focus_pane_cp2_vc

0xe047,	// (0x0003fb01) setting_code_pane_vc_g1

0x63f7,	// (0x00037eb1) setting_code_pane_vc_t1

0x6405,	// (0x00037ebf) set_text_pane_vc_t1_ParamLimits

0x6405,	// (0x00037ebf) set_text_pane_vc_t1

0xe051,	// (0x0003fb0b) input_focus_pane_cp1_vc

0x6423,	// (0x00037edd) list_set_text_pane_vc

0xe047,	// (0x0003fb01) setting_text_pane_vc_g1

0xe051,	// (0x0003fb0b) bg_set_opt_pane_cp2_vc

0x642d,	// (0x00037ee7) setting_slider_graphic_pane_vc_g1

0x6435,	// (0x00037eef) setting_slider_graphic_pane_vc_t1

0x6443,	// (0x00037efd) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa0b,	// (0x000414c5) setting_slider_graphic_pane_vc_t

0x6451,	// (0x00037f0b) slider_set_pane_cp_vc

0x6459,	// (0x00037f13) slider_set_pane_vc_g1

0x6462,	// (0x00037f1c) slider_set_pane_vc_g2

0x0006,

0xfa10,	// (0x000414ca) slider_set_pane_vc_g

0x2ba8,	// (0x00034662) set_opt_bg_pane_g1_copy1

0x2bb0,	// (0x0003466a) set_opt_bg_pane_g2_copy1

0x648e,	// (0x00037f48) set_opt_bg_pane_g3_copy1

0x2bc0,	// (0x0003467a) set_opt_bg_pane_g4_copy1

0x2bc8,	// (0x00034682) set_opt_bg_pane_g5_copy1

0x2bd0,	// (0x0003468a) set_opt_bg_pane_g6_copy1

0x6498,	// (0x00037f52) set_opt_bg_pane_g7_copy1

0x64a2,	// (0x00037f5c) set_opt_bg_pane_g8_copy1

0x64ac,	// (0x00037f66) set_opt_bg_pane_g9_copy1

0xe051,	// (0x0003fb0b) bg_set_opt_pane_cp_vc

0x64b6,	// (0x00037f70) setting_slider_pane_vc_t1

0x6435,	// (0x00037eef) setting_slider_pane_vc_t2

0x6443,	// (0x00037efd) setting_slider_pane_vc_t3

0x0002,

0xfa1f,	// (0x000414d9) setting_slider_pane_vc_t

0x6451,	// (0x00037f0b) slider_set_pane_vc

0x0c4f,	// (0x00032709) volume_set_pane_vc_g1

0x0c58,	// (0x00032712) volume_set_pane_vc_g2

0x0c61,	// (0x0003271b) volume_set_pane_vc_g3

0x0c6a,	// (0x00032724) volume_set_pane_vc_g4

0x0c73,	// (0x0003272d) volume_set_pane_vc_g5

0x0c7c,	// (0x00032736) volume_set_pane_vc_g6

0x0c85,	// (0x0003273f) volume_set_pane_vc_g7

0x0c8e,	// (0x00032748) volume_set_pane_vc_g8

0x0c97,	// (0x00032751) volume_set_pane_vc_g9

0x0ca0,	// (0x0003275a) volume_set_pane_vc_g10

0x0009,

0xfa26,	// (0x000414e0) volume_set_pane_vc_g

0x64c5,	// (0x00037f7f) volume_set_pane_vc

0x64cd,	// (0x00037f87) button_value_adjust_pane_cp1_vc

0x64d7,	// (0x00037f91) list_highlight_pane_cp2_vc

0x64e0,	// (0x00037f9a) list_set_pane_vc_ParamLimits

0x64e0,	// (0x00037f9a) list_set_pane_vc

0x654a,	// (0x00038004) main_pane_set_vc_t1_ParamLimits

0x654a,	// (0x00038004) main_pane_set_vc_t1

0x655f,	// (0x00038019) main_pane_set_vc_t2_ParamLimits

0x655f,	// (0x00038019) main_pane_set_vc_t2

0x6571,	// (0x0003802b) main_pane_set_vc_t3_ParamLimits

0x6571,	// (0x0003802b) main_pane_set_vc_t3

0x6585,	// (0x0003803f) main_pane_set_vc_t4_ParamLimits

0x6585,	// (0x0003803f) main_pane_set_vc_t4

0x0003,

0xfa3b,	// (0x000414f5) main_pane_set_vc_t_ParamLimits

0xfa3b,	// (0x000414f5) main_pane_set_vc_t

0x6599,	// (0x00038053) setting_code_pane_vc_ParamLimits

0x6599,	// (0x00038053) setting_code_pane_vc

0x65aa,	// (0x00038064) setting_slider_graphic_pane_vc

0x65aa,	// (0x00038064) setting_slider_pane_vc

0x65aa,	// (0x00038064) setting_text_pane_vc

0x65aa,	// (0x00038064) setting_volume_pane_vc

0x65b4,	// (0x0003806e) scroll_pane_cp121_vc

0x2b1b,	// (0x000345d5) set_content_pane_vc

0x65f2,	// (0x000380ac) button_value_adjust_pane_g1

0x65fb,	// (0x000380b5) button_value_adjust_pane_g2

0x0001,

0xfa8e,	// (0x00041548) button_value_adjust_pane_g

0x6604,	// (0x000380be) form_field_slider_wide_pane_vc_t1_ParamLimits

0x6604,	// (0x000380be) form_field_slider_wide_pane_vc_t1

0x6618,	// (0x000380d2) form_field_slider_wide_pane_vc_t2_ParamLimits

0x6618,	// (0x000380d2) form_field_slider_wide_pane_vc_t2

0x0001,

0xfa93,	// (0x0004154d) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa93,	// (0x0004154d) form_field_slider_wide_pane_vc_t

0x2536,	// (0x00033ff0) input_focus_pane_cp10_vc_ParamLimits

0x2536,	// (0x00033ff0) input_focus_pane_cp10_vc

0x662a,	// (0x000380e4) slider_cont_pane_cp1_vc_ParamLimits

0x662a,	// (0x000380e4) slider_cont_pane_cp1_vc

0x6459,	// (0x00037f13) slider_form_pane_g1_cp2

0x6462,	// (0x00037f1c) slider_form_pane_g2_cp2

0x6643,	// (0x000380fd) form_field_slider_pane_vc_t3

0x6651,	// (0x0003810b) form_field_slider_pane_vc_t4

0x665f,	// (0x00038119) slider_form_pane_vc_ParamLimits

0x665f,	// (0x00038119) slider_form_pane_vc

0x666c,	// (0x00038126) form_field_slider_pane_vc_t1_ParamLimits

0x666c,	// (0x00038126) form_field_slider_pane_vc_t1

0x6618,	// (0x000380d2) form_field_slider_pane_vc_t2_ParamLimits

0x6618,	// (0x000380d2) form_field_slider_pane_vc_t2

0x0001,

0xfaa3,	// (0x0004155d) form_field_slider_pane_vc_t_ParamLimits

0xfaa3,	// (0x0004155d) form_field_slider_pane_vc_t

0x2536,	// (0x00033ff0) input_focus_pane_cp9_vc_ParamLimits

0x2536,	// (0x00033ff0) input_focus_pane_cp9_vc

0x6688,	// (0x00038142) slider_cont_pane_vc_ParamLimits

0x6688,	// (0x00038142) slider_cont_pane_vc

0x669a,	// (0x00038154) list_form_graphic_pane_cp_vc_ParamLimits

0x669a,	// (0x00038154) list_form_graphic_pane_cp_vc

0x499a,	// (0x00036454) form_field_popup_wide_pane_vc_g1

0x66af,	// (0x00038169) form_field_popup_wide_pane_vc_t1_ParamLimits

0x66af,	// (0x00038169) form_field_popup_wide_pane_vc_t1

0x2b41,	// (0x000345fb) input_focus_pane_cp8_vc_ParamLimits

0x2b41,	// (0x000345fb) input_focus_pane_cp8_vc

0x66c6,	// (0x00038180) list_form_wide_pane_vc_ParamLimits

0x66c6,	// (0x00038180) list_form_wide_pane_vc

0x66d2,	// (0x0003818c) list_form_graphic_pane_vc_g1

0x66da,	// (0x00038194) list_form_graphic_pane_vc_t1_ParamLimits

0x66da,	// (0x00038194) list_form_graphic_pane_vc_t1

0x22ba,	// (0x00033d74) list_highlight_pane_cp5_vc_ParamLimits

0x22ba,	// (0x00033d74) list_highlight_pane_cp5_vc

0x66f6,	// (0x000381b0) list_form_graphic_pane_vc_ParamLimits

0x66f6,	// (0x000381b0) list_form_graphic_pane_vc

0x499a,	// (0x00036454) form_field_popup_pane_vc_g1

0x670c,	// (0x000381c6) form_field_popup_pane_vc_t1_ParamLimits

0x670c,	// (0x000381c6) form_field_popup_pane_vc_t1

0x2b41,	// (0x000345fb) input_focus_pane_cp7_vc_ParamLimits

0x2b41,	// (0x000345fb) input_focus_pane_cp7_vc

0x6723,	// (0x000381dd) list_form_pane_vc_ParamLimits

0x6723,	// (0x000381dd) list_form_pane_vc

0x672f,	// (0x000381e9) data_form_pane_vc_t1_ParamLimits

0x672f,	// (0x000381e9) data_form_pane_vc_t1

0x2ba8,	// (0x00034662) input_focus_pane_vc_g1

0x2bb0,	// (0x0003466a) input_focus_pane_vc_g2

0x2bb8,	// (0x00034672) input_focus_pane_vc_g3

0x2bc0,	// (0x0003467a) input_focus_pane_vc_g4

0x2bc8,	// (0x00034682) input_focus_pane_vc_g5

0x2bd0,	// (0x0003468a) input_focus_pane_vc_g6

0x2bd8,	// (0x00034692) input_focus_pane_vc_g7

0x2be0,	// (0x0003469a) input_focus_pane_vc_g8

0x2be8,	// (0x000346a2) input_focus_pane_vc_g9

0xe047,	// (0x0003fb01) input_focus_pane_vc_g10

0x0009,

0xf69f,	// (0x00041159) input_focus_pane_vc_g

0x498e,	// (0x00036448) data_form_pane_vc_ParamLimits

0x498e,	// (0x00036448) data_form_pane_vc

0x499a,	// (0x00036454) form_field_data_pane_vc_g1

0x674c,	// (0x00038206) form_field_data_pane_vc_t1_ParamLimits

0x674c,	// (0x00038206) form_field_data_pane_vc_t1

0x2b41,	// (0x000345fb) input_focus_pane_vc_ParamLimits

0x2b41,	// (0x000345fb) input_focus_pane_vc

0x6766,	// (0x00038220) button_value_adjust_pane_cp3_vc

0x676e,	// (0x00038228) button_value_adjust_pane_cp5_vc

0x6776,	// (0x00038230) form_field_data_pane_vc_ParamLimits

0x6776,	// (0x00038230) form_field_data_pane_vc

0x6791,	// (0x0003824b) form_field_data_pane_vc_cp2

0x6799,	// (0x00038253) form_field_data_wide_pane_vc_ParamLimits

0x6799,	// (0x00038253) form_field_data_wide_pane_vc

0x67b3,	// (0x0003826d) form_field_data_wide_pane_vc_cp2

0x67bb,	// (0x00038275) form_field_popup_pane_vc_ParamLimits

0x67bb,	// (0x00038275) form_field_popup_pane_vc

0x67d6,	// (0x00038290) form_field_popup_wide_pane_vc_ParamLimits

0x67d6,	// (0x00038290) form_field_popup_wide_pane_vc

0x67f0,	// (0x000382aa) form_field_slider_pane_vc_ParamLimits

0x67f0,	// (0x000382aa) form_field_slider_pane_vc

0x6803,	// (0x000382bd) form_field_slider_wide_pane_vc_ParamLimits

0x6803,	// (0x000382bd) form_field_slider_wide_pane_vc

0xd778,	// (0x0003f232) grid_touch_1_pane_ParamLimits

0xd778,	// (0x0003f232) grid_touch_1_pane

0xd78c,	// (0x0003f246) grid_touch_2_pane_ParamLimits

0xd78c,	// (0x0003f246) grid_touch_2_pane

0x68da,	// (0x00038394) touch_pane_g1_ParamLimits

0x68da,	// (0x00038394) touch_pane_g1

0x683c,	// (0x000382f6) cell_app_pane_cp_wide_ParamLimits

0x683c,	// (0x000382f6) cell_app_pane_cp_wide

0x684d,	// (0x00038307) grid_popup_fast_wide_pane_ParamLimits

0x684d,	// (0x00038307) grid_popup_fast_wide_pane

0x6861,	// (0x0003831b) scroll_pane_cp19_ParamLimits

0x6861,	// (0x0003831b) scroll_pane_cp19

0xe051,	// (0x0003fb0b) bg_popup_window_pane_cp20

0x6875,	// (0x0003832f) listscroll_popup_fast_wide_pane

0x2d17,	// (0x000347d1) grid_indicator_nsta_pane

0x687d,	// (0x00038337) clock_nsta_pane_g1

0x6886,	// (0x00038340) clock_nsta_pane_t1

0xd7b8,	// (0x0003f272) cell_indicator_nsta_pane_ParamLimits

0xd7b8,	// (0x0003f272) cell_indicator_nsta_pane

0x68da,	// (0x00038394) cell_indicator_nsta_pane_g1

0xd7d5,	// (0x0003f28f) cell_indicator_nsta_pane_g2

0x0001,

0xfaad,	// (0x00041567) cell_indicator_nsta_pane_g

0x68fe,	// (0x000383b8) clock_nsta_pane_cp

0x6906,	// (0x000383c0) indicator_nsta_pane_cp

0x690e,	// (0x000383c8) nsta_clock_indic_pane_g1

0x2386,	// (0x00033e40) grid_indicator_pane

0x3292,	// (0x00034d4c) scroll_pane_cp29

0x0749,	// (0x00032203) indicator_nsta_pane_cp2_ParamLimits

0x0749,	// (0x00032203) indicator_nsta_pane_cp2

0x22ba,	// (0x00033d74) main_apps_wheel_pane

0x4b2d,	// (0x000365e7) form_midp_field_text_pane_ParamLimits

0x4c7c,	// (0x00036736) scroll_bar_cp050_ParamLimits

0x6977,	// (0x00038431) cell_indicator_pane_ParamLimits

0x6977,	// (0x00038431) cell_indicator_pane

0x698f,	// (0x00038449) cell_indicator_pane_g1

0xd7eb,	// (0x0003f2a5) grid_wheel_folder_pane_ParamLimits

0xd7eb,	// (0x0003f2a5) grid_wheel_folder_pane

0xd7f9,	// (0x0003f2b3) list_wheel_apps_pane_ParamLimits

0xd7f9,	// (0x0003f2b3) list_wheel_apps_pane

0xd807,	// (0x0003f2c1) main_apps_wheel_pane_g1_ParamLimits

0xd807,	// (0x0003f2c1) main_apps_wheel_pane_g1

0xd817,	// (0x0003f2d1) main_apps_wheel_pane_g2_ParamLimits

0xd817,	// (0x0003f2d1) main_apps_wheel_pane_g2

0x0001,

0xfac9,	// (0x00041583) main_apps_wheel_pane_g_ParamLimits

0xfac9,	// (0x00041583) main_apps_wheel_pane_g

0xd827,	// (0x0003f2e1) main_apps_wheel_pane_t1_ParamLimits

0xd827,	// (0x0003f2e1) main_apps_wheel_pane_t1

0xd83f,	// (0x0003f2f9) list_wheel_apps_pane_g1

0xd847,	// (0x0003f301) list_wheel_apps_pane_g2

0xd84f,	// (0x0003f309) list_wheel_apps_pane_g3

0xd857,	// (0x0003f311) list_wheel_apps_pane_g4

0xd85f,	// (0x0003f319) list_wheel_apps_pane_g5

0x0004,

0xface,	// (0x00041588) list_wheel_apps_pane_g

0x37ef,	// (0x000352a9) navi_icon_text_pane

0xcdb2,	// (0x0003e86c) aid_fill_nsta

0xd87c,	// (0x0003f336) navi_icon_text_pane_g1

0xd888,	// (0x0003f342) navi_icon_text_pane_t1

0xc570,	// (0x0003e02a) list_set_graphic_pane_t1_ParamLimits

0xc570,	// (0x0003e02a) list_set_graphic_pane_t1

0x53cd,	// (0x00036e87) popup_midp_note_alarm_window_t6_ParamLimits

0x53cd,	// (0x00036e87) popup_midp_note_alarm_window_t6

0x53df,	// (0x00036e99) popup_midp_note_alarm_window_t7_ParamLimits

0x53df,	// (0x00036e99) popup_midp_note_alarm_window_t7

0x53f1,	// (0x00036eab) popup_midp_note_alarm_window_t8_ParamLimits

0x53f1,	// (0x00036eab) popup_midp_note_alarm_window_t8

0x5403,	// (0x00036ebd) popup_midp_note_alarm_window_t9_ParamLimits

0x5403,	// (0x00036ebd) popup_midp_note_alarm_window_t9

0x5415,	// (0x00036ecf) popup_midp_note_alarm_window_t10_ParamLimits

0x5415,	// (0x00036ecf) popup_midp_note_alarm_window_t10

0x5427,	// (0x00036ee1) popup_midp_note_alarm_window_t11_ParamLimits

0x5427,	// (0x00036ee1) popup_midp_note_alarm_window_t11

0x5439,	// (0x00036ef3) scroll_pane_cp17_ParamLimits

0x5439,	// (0x00036ef3) scroll_pane_cp17

0x0c4f,	// (0x00032709) volume_small_pane_cp_g1

0x1250,	// (0x00032d0a) volume_small_pane_cp_g2

0x1259,	// (0x00032d13) volume_small_pane_cp_g3

0x1262,	// (0x00032d1c) volume_small_pane_cp_g4

0x126b,	// (0x00032d25) volume_small_pane_cp_g5

0x1274,	// (0x00032d2e) volume_small_pane_cp_g6

0x127d,	// (0x00032d37) volume_small_pane_cp_g7

0x1286,	// (0x00032d40) volume_small_pane_cp_g8

0x128f,	// (0x00032d49) volume_small_pane_cp_g9

0x1298,	// (0x00032d52) volume_small_pane_cp_g10

0x3a50,	// (0x0003550a) midp_ticker_pane_g1_ParamLimits

0x3a5c,	// (0x00035516) midp_ticker_pane_g2_ParamLimits

0xf76b,	// (0x00041225) midp_ticker_pane_g_ParamLimits

0xc630,	// (0x0003e0ea) midp_ticker_pane_t1_ParamLimits

0xcdd6,	// (0x0003e890) aid_fill_nsta_2

0x4c68,	// (0x00036722) list_form2_midp_pane

0x5df6,	// (0x000378b0) midp_editing_number_pane_ParamLimits

0x5e05,	// (0x000378bf) midp_ticker_pane_ParamLimits

0x6a88,	// (0x00038542) form2_midp_field_pane

0x6aac,	// (0x00038566) scroll_pane_cp51

0x6acc,	// (0x00038586) form2_midp_button_pane_ParamLimits

0x6acc,	// (0x00038586) form2_midp_button_pane

0x6ade,	// (0x00038598) form2_midp_content_pane_ParamLimits

0x6ade,	// (0x00038598) form2_midp_content_pane

0x6af8,	// (0x000385b2) form2_midp_field_choice_group_pane

0x6b00,	// (0x000385ba) form2_midp_field_pane_g1

0x6b08,	// (0x000385c2) form2_midp_field_pane_g2

0x6b10,	// (0x000385ca) form2_midp_field_pane_g3

0x6b18,	// (0x000385d2) form2_midp_field_pane_g4

0x0003,

0xfaf3,	// (0x000415ad) form2_midp_field_pane_g

0x6b20,	// (0x000385da) form2_midp_gauge_slider_pane

0x6b28,	// (0x000385e2) form2_midp_gauge_wait_pane

0x6b30,	// (0x000385ea) form2_midp_image_pane_ParamLimits

0x6b30,	// (0x000385ea) form2_midp_image_pane

0xd8b6,	// (0x0003f370) form2_midp_label_pane_ParamLimits

0xd8b6,	// (0x0003f370) form2_midp_label_pane

0xd8d5,	// (0x0003f38f) form2_midp_label_pane_cp_ParamLimits

0xd8d5,	// (0x0003f38f) form2_midp_label_pane_cp

0x6b83,	// (0x0003863d) form2_midp_string_pane_ParamLimits

0x6b83,	// (0x0003863d) form2_midp_string_pane

0xbc4e,	// (0x0003d708) form2_midp_text_pane_ParamLimits

0xbc4e,	// (0x0003d708) form2_midp_text_pane

0x6b95,	// (0x0003864f) form2_midp_time_pane

0x6ba5,	// (0x0003865f) input_focus_pane_cp51_ParamLimits

0x6ba5,	// (0x0003865f) input_focus_pane_cp51

0xd8f6,	// (0x0003f3b0) form2_midp_label_pane_t1_ParamLimits

0xd8f6,	// (0x0003f3b0) form2_midp_label_pane_t1

0xbc6f,	// (0x0003d729) form2_mdip_text_pane_t1_ParamLimits

0xbc6f,	// (0x0003d729) form2_mdip_text_pane_t1

0x12d2,	// (0x00032d8c) form2_midp_time_pane_t1

0x6bfb,	// (0x000386b5) form2_midp_gauge_slider_pane_t1

0xd933,	// (0x0003f3ed) form2_midp_gauge_slider_pane_t2

0xd945,	// (0x0003f3ff) form2_midp_gauge_slider_pane_t3

0x0002,

0xfafc,	// (0x000415b6) form2_midp_gauge_slider_pane_t

0x6c31,	// (0x000386eb) form2_midp_slider_pane

0x6c3d,	// (0x000386f7) form2_midp_gauge_wait_pane_t1

0x6c4b,	// (0x00038705) form2_midp_wait_pane_ParamLimits

0x6c4b,	// (0x00038705) form2_midp_wait_pane

0xd957,	// (0x0003f411) list_single_2graphic_pane_cp4_ParamLimits

0xd957,	// (0x0003f411) list_single_2graphic_pane_cp4

0xd209,	// (0x0003ecc3) list_single_midp_graphic_pane_cp_ParamLimits

0xd209,	// (0x0003ecc3) list_single_midp_graphic_pane_cp

0xe051,	// (0x0003fb0b) list_highlight_pane_cp20

0x6c87,	// (0x00038741) list_single_2graphic_pane_g1_cp4

0x6295,	// (0x00037d4f) list_single_2graphic_pane_g2_cp4

0x6c8f,	// (0x00038749) list_single_2graphic_pane_t1_cp4

0x22ba,	// (0x00033d74) list_highlight_pane_cp21

0x6c9e,	// (0x00038758) list_single_midp_graphic_pane_g4_cp

0x6cad,	// (0x00038767) list_single_midp_graphic_pane_t1_cp

0xd96a,	// (0x0003f424) form2_mdip_string_pane_t1_ParamLimits

0xd96a,	// (0x0003f424) form2_mdip_string_pane_t1

0xe051,	// (0x0003fb0b) bg_wml_button_pane_cp2

0xe047,	// (0x0003fb01) form2_midp_image_pane_g1

0xefa6,	// (0x00040a60) list_double_large_graphic_pane_g5_ParamLimits

0xefa6,	// (0x00040a60) list_double_large_graphic_pane_g5

0xc588,	// (0x0003e042) midp_form_pane_ParamLimits

0x22ba,	// (0x00033d74) main_apps_wheel_pane_ParamLimits

0xcaca,	// (0x0003e584) popup_preview_window_ParamLimits

0xcaca,	// (0x0003e584) popup_preview_window

0x42bd,	// (0x00035d77) popup_touch_info_window_ParamLimits

0x42bd,	// (0x00035d77) popup_touch_info_window

0x42df,	// (0x00035d99) popup_touch_menu_window_ParamLimits

0x42df,	// (0x00035d99) popup_touch_menu_window

0xe03d,	// (0x0003faf7) bg_popup_sub_pane_cp6

0x6d1c,	// (0x000387d6) list_touch_menu_pane

0x6d24,	// (0x000387de) list_single_touch_menu_pane_ParamLimits

0x6d24,	// (0x000387de) list_single_touch_menu_pane

0x6d3f,	// (0x000387f9) list_single_touch_menu_pane_t1

0x22ba,	// (0x00033d74) bg_popup_sub_pane_cp7_ParamLimits

0x22ba,	// (0x00033d74) bg_popup_sub_pane_cp7

0x6d4d,	// (0x00038807) heading_sub_pane

0x6d55,	// (0x0003880f) list_touch_info_pane_ParamLimits

0x6d55,	// (0x0003880f) list_touch_info_pane

0x6d64,	// (0x0003881e) list_single_touch_info_pane_ParamLimits

0x6d64,	// (0x0003881e) list_single_touch_info_pane

0x6d76,	// (0x00038830) list_single_touch_info_pane_t1

0x6d84,	// (0x0003883e) list_single_touch_info_pane_t2

0x0001,

0xfb0a,	// (0x000415c4) list_single_touch_info_pane_t

0x3973,	// (0x0003542d) bg_popup_heading_pane_cp

0x6d92,	// (0x0003884c) heading_sub_pane_t1

0x4928,	// (0x000363e2) bg_popup_preview_window_pane_cp_ParamLimits

0x4928,	// (0x000363e2) bg_popup_preview_window_pane_cp

0x6d4d,	// (0x00038807) heading_preview_pane

0x6d55,	// (0x0003880f) list_preview_pane_ParamLimits

0x6d55,	// (0x0003880f) list_preview_pane

0x6da0,	// (0x0003885a) popup_preview_window_g1

0x6d64,	// (0x0003881e) list_single_preview_pane_ParamLimits

0x6d64,	// (0x0003881e) list_single_preview_pane

0x6da8,	// (0x00038862) list_single_preview_pane_g1

0x6db0,	// (0x0003886a) list_single_preview_pane_t1

0x6d76,	// (0x00038830) list_single_preview_pane_t2

0x0001,

0xfb0f,	// (0x000415c9) list_single_preview_pane_t

0x6dbe,	// (0x00038878) bg_popup_heading_pane_cp2_ParamLimits

0x6dbe,	// (0x00038878) bg_popup_heading_pane_cp2

0x6dd4,	// (0x0003888e) heading_preview_pane_g1

0x6ddc,	// (0x00038896) heading_preview_pane_t1_ParamLimits

0x6ddc,	// (0x00038896) heading_preview_pane_t1

0x23a9,	// (0x00033e63) soft_indicator_pane_t1_ParamLimits

0x2ab4,	// (0x0003456e) scroll_pane_ParamLimits

0x318e,	// (0x00034c48) scroll_sc2_left_pane

0x3197,	// (0x00034c51) scroll_sc2_right_pane

0x31b6,	// (0x00034c70) scroll_bg_pane_g1_ParamLimits

0x31cb,	// (0x00034c85) scroll_bg_pane_g2_ParamLimits

0x31e3,	// (0x00034c9d) scroll_bg_pane_g3_ParamLimits

0xf6f6,	// (0x000411b0) scroll_bg_pane_g_ParamLimits

0x31b6,	// (0x00034c70) scroll_handle_pane_g1_ParamLimits

0x3205,	// (0x00034cbf) scroll_handle_pane_g2_ParamLimits

0x31e3,	// (0x00034c9d) scroll_handle_pane_g3_ParamLimits

0xf6fd,	// (0x000411b7) scroll_handle_pane_g_ParamLimits

0x3d21,	// (0x000357db) popup_choice_list_window_ParamLimits

0x3d21,	// (0x000357db) popup_choice_list_window

0x4780,	// (0x0003623a) choice_list_pane

0x4802,	// (0x000362bc) cell_toolbar_pane_t1

0x482a,	// (0x000362e4) toolbar_button_pane_ParamLimits

0x5909,	// (0x000373c3) ai_gene_pane_1_t2_ParamLimits

0x5909,	// (0x000373c3) ai_gene_pane_1_t2

0x0001,

0xf919,	// (0x000413d3) ai_gene_pane_1_t_ParamLimits

0xf919,	// (0x000413d3) ai_gene_pane_1_t

0x6df9,	// (0x000388b3) scroll_sc2_left_pane_g1

0x6df9,	// (0x000388b3) scroll_sc2_right_pane_g1

0x3cf9,	// (0x000357b3) bg_popup_sub_pane_cp10

0x6e03,	// (0x000388bd) list_choice_list_pane

0x6e1a,	// (0x000388d4) list_single_choice_list_pane_ParamLimits

0x6e1a,	// (0x000388d4) list_single_choice_list_pane

0x6e2e,	// (0x000388e8) list_single_choice_list_pane_g1

0x6e36,	// (0x000388f0) list_single_choice_list_pane_t1_ParamLimits

0x6e36,	// (0x000388f0) list_single_choice_list_pane_t1

0x6e4b,	// (0x00038905) choice_list_pane_g1

0x6e53,	// (0x0003890d) choice_list_pane_t1

0xe03d,	// (0x0003faf7) input_focus_pane_cp11

0x3068,	// (0x00034b22) title_pane_stacon_g2_ParamLimits

0x3068,	// (0x00034b22) title_pane_stacon_g2

0x0002,

0xf6dc,	// (0x00041196) title_pane_stacon_g_ParamLimits

0xf6dc,	// (0x00041196) title_pane_stacon_g

0x3973,	// (0x0003542d) cursor_press_pane

0xc74b,	// (0x0003e205) popup_fep_hwr_window_ParamLimits

0xc74b,	// (0x0003e205) popup_fep_hwr_window

0x3e61,	// (0x0003591b) popup_fep_vkb_window_ParamLimits

0x3e61,	// (0x0003591b) popup_fep_vkb_window

0x6e61,	// (0x0003891b) cursor_press_pane_g1

0x0002,

0xfb38,	// (0x000415f2) fep_vkb_side_pane_g_ParamLimits

0x131e,	// (0x00032dd8) fep_hwr_candidate_pane_ParamLimits

0x131e,	// (0x00032dd8) fep_hwr_candidate_pane

0x1348,	// (0x00032e02) fep_hwr_side_pane_ParamLimits

0x1348,	// (0x00032e02) fep_hwr_side_pane

0x136a,	// (0x00032e24) fep_hwr_top_pane_ParamLimits

0x136a,	// (0x00032e24) fep_hwr_top_pane

0x1382,	// (0x00032e3c) fep_hwr_write_pane_ParamLimits

0x1382,	// (0x00032e3c) fep_hwr_write_pane

0xfb38,	// (0x000415f2) fep_vkb_side_pane_g

0x6e69,	// (0x00038923) fep_hwr_top_pane_g1

0x6e7b,	// (0x00038935) fep_hwr_top_pane_g2

0x13bc,	// (0x00032e76) fep_hwr_top_pane_g3

0x0002,

0xfb14,	// (0x000415ce) fep_hwr_top_pane_g

0x13d1,	// (0x00032e8b) fep_hwr_top_text_pane

0x335a,	// (0x00034e14) fep_hwr_top_text_pane_g1

0x6eb1,	// (0x0003896b) fep_hwr_top_text_pane_t1

0x14db,	// (0x00032f95) fep_hwr_candidate_pane_g1

0x70fc,	// (0x00038bb6) fep_vkb_keypad_pane_g3_ParamLimits

0x70fc,	// (0x00038bb6) fep_vkb_keypad_pane_g3

0x7128,	// (0x00038be2) fep_vkb_keypad_pane_g4_ParamLimits

0x7128,	// (0x00038be2) fep_vkb_keypad_pane_g4

0x719f,	// (0x00038c59) fep_vkb_bottom_pane_g2_ParamLimits

0x719f,	// (0x00038c59) fep_vkb_bottom_pane_g2

0x0001,

0xfb3f,	// (0x000415f9) fep_vkb_bottom_pane_g_ParamLimits

0xfb3f,	// (0x000415f9) fep_vkb_bottom_pane_g

0x6df9,	// (0x000388b3) cell_vkb_side_pane_g2

0x0001,

0xfb49,	// (0x00041603) cell_vkb_side_pane_g

0x722a,	// (0x00038ce4) cell_vkb_side_pane_t1

0x7238,	// (0x00038cf2) cell_vkb_side_pane_t1_copy1

0x6df9,	// (0x000388b3) bg_fep_vkb_candidate_pane_g2

0x737c,	// (0x00038e36) cell_vkb_candidate_pane_ParamLimits

0x6ebf,	// (0x00038979) aid_size_cell_vkb_ParamLimits

0x6ebf,	// (0x00038979) aid_size_cell_vkb

0x737c,	// (0x00038e36) cell_vkb_candidate_pane

0x1502,	// (0x00032fbc) bg_popup_fep_shadow_pane_g1

0xd9ee,	// (0x0003f4a8) fep_vkb_bottom_pane_ParamLimits

0xd9ee,	// (0x0003f4a8) fep_vkb_bottom_pane

0x6f8e,	// (0x00038a48) fep_vkb_candidate_pane_ParamLimits

0x6f8e,	// (0x00038a48) fep_vkb_candidate_pane

0xda1a,	// (0x0003f4d4) fep_vkb_keypad_pane_ParamLimits

0xda1a,	// (0x0003f4d4) fep_vkb_keypad_pane

0xda41,	// (0x0003f4fb) fep_vkb_side_pane_ParamLimits

0xda41,	// (0x0003f4fb) fep_vkb_side_pane

0xda7d,	// (0x0003f537) fep_vkb_top_pane_ParamLimits

0xda7d,	// (0x0003f537) fep_vkb_top_pane

0x7055,	// (0x00038b0f) fep_vkb_top_pane_g1_ParamLimits

0x7055,	// (0x00038b0f) fep_vkb_top_pane_g1

0x7064,	// (0x00038b1e) fep_vkb_top_pane_g2_ParamLimits

0x7064,	// (0x00038b1e) fep_vkb_top_pane_g2

0x7073,	// (0x00038b2d) fep_vkb_top_pane_g3_ParamLimits

0x7073,	// (0x00038b2d) fep_vkb_top_pane_g3

0x0003,

0xfb2f,	// (0x000415e9) fep_vkb_top_pane_g_ParamLimits

0xfb2f,	// (0x000415e9) fep_vkb_top_pane_g

0x7091,	// (0x00038b4b) fep_vkb_top_text_pane_ParamLimits

0x7091,	// (0x00038b4b) fep_vkb_top_text_pane

0xdab9,	// (0x0003f573) fep_vkb_side_pane_g1_ParamLimits

0xdab9,	// (0x0003f573) fep_vkb_side_pane_g1

0x70eb,	// (0x00038ba5) grid_vkb_side_pane_ParamLimits

0x70eb,	// (0x00038ba5) grid_vkb_side_pane

0x150a,	// (0x00032fc4) bg_popup_fep_shadow_pane_g2

0x1513,	// (0x00032fcd) bg_popup_fep_shadow_pane_g3

0x151b,	// (0x00032fd5) bg_popup_fep_shadow_pane_g4

0x1524,	// (0x00032fde) bg_popup_fep_shadow_pane_g5

0x152e,	// (0x00032fe8) bg_popup_fep_shadow_pane_g6

0x1536,	// (0x00032ff0) bg_popup_fep_shadow_pane_g7

0x2bc0,	// (0x0003467a) bg_popup_fep_shadow_pane_g8

0x714a,	// (0x00038c04) grid_vkb_keypad_number_pane_ParamLimits

0x714a,	// (0x00038c04) grid_vkb_keypad_number_pane

0x715e,	// (0x00038c18) grid_vkb_keypad_pane_ParamLimits

0x715e,	// (0x00038c18) grid_vkb_keypad_pane

0x7184,	// (0x00038c3e) fep_vkb_bottom_pane_g1_ParamLimits

0x7184,	// (0x00038c3e) fep_vkb_bottom_pane_g1

0x71ad,	// (0x00038c67) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x71ad,	// (0x00038c67) grid_vkb_keypad_bottom_left_pane

0x71c2,	// (0x00038c7c) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x71c2,	// (0x00038c7c) grid_vkb_keypad_bottom_right_pane

0x71d7,	// (0x00038c91) fep_vkb_top_text_pane_g1

0xdb00,	// (0x0003f5ba) fep_vkb_top_text_pane_t1

0xdb12,	// (0x0003f5cc) cell_vkb_side_pane_ParamLimits

0xdb12,	// (0x0003f5cc) cell_vkb_side_pane

0x6df9,	// (0x000388b3) cell_vkb_side_pane_g1

0x7246,	// (0x00038d00) cell_vkb_keypad_pane_ParamLimits

0x7246,	// (0x00038d00) cell_vkb_keypad_pane

0x72d3,	// (0x00038d8d) cell_vkb_keypad_pane_g1

0x0008,

0xfb5c,	// (0x00041616) bg_popup_fep_shadow_pane_g

0x1548,	// (0x00033002) cell_hwr_side_pane_g1

0x1548,	// (0x00033002) cell_hwr_side_pane_g2

0x72dd,	// (0x00038d97) cell_vkb_keypad_pane_t1

0xdb28,	// (0x0003f5e2) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xdb28,	// (0x0003f5e2) cell_vkb_keypad_bottom_left_pane

0xdb3d,	// (0x0003f5f7) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xdb3d,	// (0x0003f5f7) cell_vkb_keypad_bottom_right_pane

0x6df9,	// (0x000388b3) cell_vkb_keypad_bottom_left_pane_g1

0x6df9,	// (0x000388b3) cell_vkb_keypad_bottom_right_pane_g1

0x7341,	// (0x00038dfb) cell_vkb_keypad_number_pane_ParamLimits

0x7341,	// (0x00038dfb) cell_vkb_keypad_number_pane

0x7360,	// (0x00038e1a) cell_vkb_keypad_number_pane_g1

0x736a,	// (0x00038e24) cell_vkb_keypad_number_pane_g2

0x7373,	// (0x00038e2d) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb4e,	// (0x00041608) cell_vkb_keypad_number_pane_g

0x72dd,	// (0x00038d97) cell_vkb_keypad_number_pane_t1

0x739d,	// (0x00038e57) fep_vkb_candidate_pane_g1

0x0001,

0xfb6f,	// (0x00041629) cell_hwr_side_pane_g

0x73b6,	// (0x00038e70) cell_hwr_side_pane_t1

0x1552,	// (0x0003300c) cell_hwr_side_pane_t1_copy1

0x1560,	// (0x0003301a) cell_hwr_candidate_pane_g1

0x158f,	// (0x00033049) cell_hwr_candidate_pane_t1

0x6df9,	// (0x000388b3) cell_vkb_candidate_pane_g2

0x73fa,	// (0x00038eb4) cell_vkb_candidate_pane_t1

0x12e5,	// (0x00032d9f) bg_popup_fep_shadow_pane_ParamLimits

0x12e5,	// (0x00032d9f) bg_popup_fep_shadow_pane

0x139c,	// (0x00032e56) bg_fep_hwr_top_pane_g4

0x6e8d,	// (0x00038947) bg_hwr_side_pane_g1_ParamLimits

0x6e8d,	// (0x00038947) bg_hwr_side_pane_g1

0xbca2,	// (0x0003d75c) cell_hwr_side_pane_ParamLimits

0xbca2,	// (0x0003d75c) cell_hwr_side_pane

0x144c,	// (0x00032f06) fep_hwr_write_pane_g1_ParamLimits

0x144c,	// (0x00032f06) fep_hwr_write_pane_g1

0x1459,	// (0x00032f13) fep_hwr_write_pane_g2_ParamLimits

0x1459,	// (0x00032f13) fep_hwr_write_pane_g2

0x1466,	// (0x00032f20) fep_hwr_write_pane_g3_ParamLimits

0x1466,	// (0x00032f20) fep_hwr_write_pane_g3

0xbcc2,	// (0x0003d77c) fep_hwr_write_pane_g4_ParamLimits

0xbcc2,	// (0x0003d77c) fep_hwr_write_pane_g4

0x0005,

0xfb1b,	// (0x000415d5) fep_hwr_write_pane_g_ParamLimits

0xfb1b,	// (0x000415d5) fep_hwr_write_pane_g

0x139c,	// (0x00032e56) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x139c,	// (0x00032e56) bg_fep_hwr_candidate_pane_g2

0x1489,	// (0x00032f43) cell_hwr_candidate_pane_ParamLimits

0x1489,	// (0x00032f43) cell_hwr_candidate_pane

0x14db,	// (0x00032f95) fep_hwr_candidate_pane_g1_ParamLimits

0x6eed,	// (0x000389a7) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x6eed,	// (0x000389a7) bg_popup_fep_shadow_pane_cp2

0x7083,	// (0x00038b3d) fep_vkb_top_pane_g4_ParamLimits

0x7083,	// (0x00038b3d) fep_vkb_top_pane_g4

0x70c9,	// (0x00038b83) fep_vkb_side_pane_g2_ParamLimits

0x70c9,	// (0x00038b83) fep_vkb_side_pane_g2

0xb547,	// (0x0003d001) list_setting_pane_t4_ParamLimits

0xb547,	// (0x0003d001) list_setting_pane_t4

0xb5e3,	// (0x0003d09d) list_setting_number_pane_t5_ParamLimits

0xb5e3,	// (0x0003d09d) list_setting_number_pane_t5

0x3391,	// (0x00034e4b) list_double_heading_pane_cp2_ParamLimits

0x3391,	// (0x00034e4b) list_double_heading_pane_cp2

0x2b5b,	// (0x00034615) list_double_heading_pane_g1_cp2_ParamLimits

0x2b5b,	// (0x00034615) list_double_heading_pane_g1_cp2

0x2b67,	// (0x00034621) list_double_heading_pane_g2_cp2_ParamLimits

0x2b67,	// (0x00034621) list_double_heading_pane_g2_cp2

0x7408,	// (0x00038ec2) list_double_heading_pane_t1_cp2_ParamLimits

0x7408,	// (0x00038ec2) list_double_heading_pane_t1_cp2

0x741e,	// (0x00038ed8) list_double_heading_pane_t2_cp2_ParamLimits

0x741e,	// (0x00038ed8) list_double_heading_pane_t2_cp2

0xe035,	// (0x0003faef) aid_value_unit2

0xf45f,	// (0x00040f19) popup_preview_fixed_window

0x2544,	// (0x00033ffe) bg_popup_preview_window_pane_cp02

0x7430,	// (0x00038eea) list_preview_fixed_pane

0x7476,	// (0x00038f30) list_empty_pane_fp_ParamLimits

0x7476,	// (0x00038f30) list_empty_pane_fp

0x7476,	// (0x00038f30) list_single_cale_day_pane_fp_ParamLimits

0x7476,	// (0x00038f30) list_single_cale_day_pane_fp

0x7476,	// (0x00038f30) list_single_graphic_heading_pane_fp_ParamLimits

0x7476,	// (0x00038f30) list_single_graphic_heading_pane_fp

0x7476,	// (0x00038f30) list_single_graphic_pane_fp_ParamLimits

0x7476,	// (0x00038f30) list_single_graphic_pane_fp

0x7476,	// (0x00038f30) list_single_heading_pane_fp_ParamLimits

0x7476,	// (0x00038f30) list_single_heading_pane_fp

0x7476,	// (0x00038f30) list_single_pane_fp_ParamLimits

0x7476,	// (0x00038f30) list_single_pane_fp

0x748f,	// (0x00038f49) list_single_pane_fp_g1_ParamLimits

0x748f,	// (0x00038f49) list_single_pane_fp_g1

0x15ad,	// (0x00033067) list_single_pane_fp_g2_ParamLimits

0x15ad,	// (0x00033067) list_single_pane_fp_g2

0x15b9,	// (0x00033073) list_single_pane_fp_g3_ParamLimits

0x15b9,	// (0x00033073) list_single_pane_fp_g3

0x749b,	// (0x00038f55) list_single_pane_fp_g4_ParamLimits

0x749b,	// (0x00038f55) list_single_pane_fp_g4

0x0003,

0xfb82,	// (0x0004163c) list_single_pane_fp_g_ParamLimits

0xfb82,	// (0x0004163c) list_single_pane_fp_g

0x15cd,	// (0x00033087) list_single_pane_fp_t1_ParamLimits

0x15cd,	// (0x00033087) list_single_pane_fp_t1

0x15e4,	// (0x0003309e) list_single_graphic_pane_fp_g1_ParamLimits

0x15e4,	// (0x0003309e) list_single_graphic_pane_fp_g1

0x748f,	// (0x00038f49) list_single_graphic_pane_fp_g2_ParamLimits

0x748f,	// (0x00038f49) list_single_graphic_pane_fp_g2

0x15ad,	// (0x00033067) list_single_graphic_pane_fp_g3_ParamLimits

0x15ad,	// (0x00033067) list_single_graphic_pane_fp_g3

0x15b9,	// (0x00033073) list_single_graphic_pane_fp_g4_ParamLimits

0x15b9,	// (0x00033073) list_single_graphic_pane_fp_g4

0x749b,	// (0x00038f55) list_single_graphic_pane_fp_g5_ParamLimits

0x749b,	// (0x00038f55) list_single_graphic_pane_fp_g5

0x0004,

0xfb8b,	// (0x00041645) list_single_graphic_pane_fp_g_ParamLimits

0xfb8b,	// (0x00041645) list_single_graphic_pane_fp_g

0x15f0,	// (0x000330aa) list_single_graphic_pane_fp_t1_ParamLimits

0x15f0,	// (0x000330aa) list_single_graphic_pane_fp_t1

0x15e4,	// (0x0003309e) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x15e4,	// (0x0003309e) list_single_graphic_heading_pane_fp_g1

0x748f,	// (0x00038f49) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x748f,	// (0x00038f49) list_single_graphic_heading_pane_fp_g2

0x15ad,	// (0x00033067) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x15ad,	// (0x00033067) list_single_graphic_heading_pane_fp_g3

0x15b9,	// (0x00033073) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x15b9,	// (0x00033073) list_single_graphic_heading_pane_fp_g4

0x749b,	// (0x00038f55) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x749b,	// (0x00038f55) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb8b,	// (0x00041645) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb8b,	// (0x00041645) list_single_graphic_heading_pane_fp_g

0x1606,	// (0x000330c0) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x1606,	// (0x000330c0) list_single_graphic_heading_pane_fp_t1

0x161c,	// (0x000330d6) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x161c,	// (0x000330d6) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb96,	// (0x00041650) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb96,	// (0x00041650) list_single_graphic_heading_pane_fp_t

0x162e,	// (0x000330e8) list_single_cale_day_pane_fp_g1_ParamLimits

0x162e,	// (0x000330e8) list_single_cale_day_pane_fp_g1

0x74a7,	// (0x00038f61) list_single_cale_day_pane_fp_g2_ParamLimits

0x74a7,	// (0x00038f61) list_single_cale_day_pane_fp_g2

0x1666,	// (0x00033120) list_single_cale_day_pane_fp_g3_ParamLimits

0x1666,	// (0x00033120) list_single_cale_day_pane_fp_g3

0x168e,	// (0x00033148) list_single_cale_day_pane_fp_g4_ParamLimits

0x168e,	// (0x00033148) list_single_cale_day_pane_fp_g4

0x16b2,	// (0x0003316c) list_single_cale_day_pane_fp_g5_ParamLimits

0x16b2,	// (0x0003316c) list_single_cale_day_pane_fp_g5

0x0004,

0xfb9b,	// (0x00041655) list_single_cale_day_pane_fp_g_ParamLimits

0xfb9b,	// (0x00041655) list_single_cale_day_pane_fp_g

0x16d6,	// (0x00033190) list_single_cale_day_pane_fp_t1_ParamLimits

0x16d6,	// (0x00033190) list_single_cale_day_pane_fp_t1

0x16fc,	// (0x000331b6) list_single_cale_day_pane_fp_t2_ParamLimits

0x16fc,	// (0x000331b6) list_single_cale_day_pane_fp_t2

0x1715,	// (0x000331cf) list_single_cale_day_pane_fp_t3_ParamLimits

0x1715,	// (0x000331cf) list_single_cale_day_pane_fp_t3

0x0002,

0xfba6,	// (0x00041660) list_single_cale_day_pane_fp_t_ParamLimits

0xfba6,	// (0x00041660) list_single_cale_day_pane_fp_t

0x748f,	// (0x00038f49) list_empty_pane_fp_g1_ParamLimits

0x748f,	// (0x00038f49) list_empty_pane_fp_g1

0x172e,	// (0x000331e8) list_empty_pane_fp_t1

0x173c,	// (0x000331f6) list_empty_pane_fp_t2

0x0001,

0xfbad,	// (0x00041667) list_empty_pane_fp_t

0x748f,	// (0x00038f49) list_single_heading_pane_fp_g1_ParamLimits

0x748f,	// (0x00038f49) list_single_heading_pane_fp_g1

0x15ad,	// (0x00033067) list_single_heading_pane_fp_g2_ParamLimits

0x15ad,	// (0x00033067) list_single_heading_pane_fp_g2

0x15b9,	// (0x00033073) list_single_heading_pane_fp_g3_ParamLimits

0x15b9,	// (0x00033073) list_single_heading_pane_fp_g3

0x0002,

0xfbb2,	// (0x0004166c) list_single_heading_pane_fp_g_ParamLimits

0xfbb2,	// (0x0004166c) list_single_heading_pane_fp_g

0x174a,	// (0x00033204) list_single_heading_pane_fp_t1_ParamLimits

0x174a,	// (0x00033204) list_single_heading_pane_fp_t1

0x175c,	// (0x00033216) list_single_heading_pane_fp_t2_ParamLimits

0x175c,	// (0x00033216) list_single_heading_pane_fp_t2

0x0001,

0xfbb9,	// (0x00041673) list_single_heading_pane_fp_t_ParamLimits

0xfbb9,	// (0x00041673) list_single_heading_pane_fp_t

0x2d56,	// (0x00034810) aid_size_cell_fast

0x24b6,	// (0x00033f70) soft_indicator_pane_cp1_t1

0x2d93,	// (0x0003484d) cell_app_pane_cp2_ParamLimits

0x2d93,	// (0x0003484d) cell_app_pane_cp2

0x1307,	// (0x00032dc1) fep_hwr_candidate_drop_down_list_pane

0x14f5,	// (0x00032faf) fep_hwr_candidate_pane_g3_ParamLimits

0x14f5,	// (0x00032faf) fep_hwr_candidate_pane_g3

0xe067,	// (0x0003fb21) fep_hwr_candidate_pane_g4_ParamLimits

0xe067,	// (0x0003fb21) fep_hwr_candidate_pane_g4

0x0002,

0xfb28,	// (0x000415e2) fep_hwr_candidate_pane_g_ParamLimits

0xfb28,	// (0x000415e2) fep_hwr_candidate_pane_g

0x6f7d,	// (0x00038a37) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x6f7d,	// (0x00038a37) fep_vkb_candidate_drop_down_list_pane

0x73a5,	// (0x00038e5f) fep_vkb_candidate_pane_g3

0x73ad,	// (0x00038e67) fep_vkb_candidate_pane_g4

0x0002,

0xfb55,	// (0x0004160f) fep_vkb_candidate_pane_g

0x1560,	// (0x0003301a) cell_hwr_candidate_pane_g1_ParamLimits

0x156e,	// (0x00033028) cell_hwr_candidate_pane_g3_ParamLimits

0x156e,	// (0x00033028) cell_hwr_candidate_pane_g3

0x8993,	// (0x0003a44d) cell_hwr_candidate_pane_g4_ParamLimits

0x8993,	// (0x0003a44d) cell_hwr_candidate_pane_g4

0x0002,

0xfb74,	// (0x0004162e) cell_hwr_candidate_pane_g_ParamLimits

0xfb74,	// (0x0004162e) cell_hwr_candidate_pane_g

0x73c4,	// (0x00038e7e) cell_vkb_candidate_pane_g3_ParamLimits

0x73c4,	// (0x00038e7e) cell_vkb_candidate_pane_g3

0x73df,	// (0x00038e99) cell_vkb_candidate_pane_g4_ParamLimits

0x73df,	// (0x00038e99) cell_vkb_candidate_pane_g4

0x74b3,	// (0x00038f6d) cell_app_pane_cp2_g1_ParamLimits

0x74b3,	// (0x00038f6d) cell_app_pane_cp2_g1

0x74d1,	// (0x00038f8b) cell_app_pane_cp2_g2_ParamLimits

0x74d1,	// (0x00038f8b) cell_app_pane_cp2_g2

0x0001,

0xfbbe,	// (0x00041678) cell_app_pane_cp2_g_ParamLimits

0xfbbe,	// (0x00041678) cell_app_pane_cp2_g

0x74dd,	// (0x00038f97) cell_app_pane_cp2_t1_ParamLimits

0x74dd,	// (0x00038f97) cell_app_pane_cp2_t1

0x2b41,	// (0x000345fb) grid_highlight_pane_cp1_ParamLimits

0x2b41,	// (0x000345fb) grid_highlight_pane_cp1

0x1772,	// (0x0003322c) cell_hwr_candidate_pane_cp1_ParamLimits

0x1772,	// (0x0003322c) cell_hwr_candidate_pane_cp1

0x1560,	// (0x0003301a) fep_hwr_candidate_drop_down_list_pane_g1

0x1796,	// (0x00033250) fep_hwr_candidate_drop_down_list_pane_g2

0x17a3,	// (0x0003325d) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbc3,	// (0x0004167d) fep_hwr_candidate_drop_down_list_pane_g

0x17b0,	// (0x0003326a) fep_hwr_candidate_drop_down_list_scroll_pane

0x17b9,	// (0x00033273) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x17b9,	// (0x00033273) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x17c6,	// (0x00033280) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x17c6,	// (0x00033280) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x17d3,	// (0x0003328d) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x17d3,	// (0x0003328d) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x17e0,	// (0x0003329a) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x17e0,	// (0x0003329a) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x17fb,	// (0x000332b5) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x17fb,	// (0x000332b5) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x1816,	// (0x000332d0) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x1816,	// (0x000332d0) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x1831,	// (0x000332eb) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x1831,	// (0x000332eb) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x184c,	// (0x00033306) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x184c,	// (0x00033306) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbca,	// (0x00041684) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbca,	// (0x00041684) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x74ef,	// (0x00038fa9) cell_vkb_candidate_pane_cp1_ParamLimits

0x74ef,	// (0x00038fa9) cell_vkb_candidate_pane_cp1

0x7083,	// (0x00038b3d) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x7083,	// (0x00038b3d) fep_vkb_candidate_drop_down_list_pane_g1

0x7515,	// (0x00038fcf) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x7515,	// (0x00038fcf) fep_vkb_candidate_drop_down_list_pane_g2

0x7522,	// (0x00038fdc) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x7522,	// (0x00038fdc) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbdb,	// (0x00041695) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbdb,	// (0x00041695) fep_vkb_candidate_drop_down_list_pane_g

0x752f,	// (0x00038fe9) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x752f,	// (0x00038fe9) fep_vkb_candidate_drop_down_list_scroll_pane

0x753c,	// (0x00038ff6) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x753c,	// (0x00038ff6) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x7549,	// (0x00039003) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7549,	// (0x00039003) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x7555,	// (0x0003900f) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7555,	// (0x0003900f) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x7561,	// (0x0003901b) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7561,	// (0x0003901b) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x7582,	// (0x0003903c) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7582,	// (0x0003903c) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x75a3,	// (0x0003905d) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x75a3,	// (0x0003905d) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x75c4,	// (0x0003907e) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x75c4,	// (0x0003907e) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x75e5,	// (0x0003909f) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x75e5,	// (0x0003909f) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbe2,	// (0x0004169c) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbe2,	// (0x0004169c) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xae4b,	// (0x0003c905) title_pane_g1_ParamLimits

0xae5e,	// (0x0003c918) title_pane_g2_ParamLimits

0xf566,	// (0x00041020) title_pane_g_ParamLimits

0x334a,	// (0x00034e04) aid_call2_pane

0x3352,	// (0x00034e0c) aid_call_pane

0x335a,	// (0x00034e14) popup_clock_analogue_window_g1

0x335a,	// (0x00034e14) popup_clock_analogue_window_g2

0x05bc,	// (0x00032076) popup_clock_analogue_window_g3

0x05c5,	// (0x0003207f) popup_clock_analogue_window_g4

0xe047,	// (0x0003fb01) popup_clock_analogue_window_g5

0x0004,

0xf70b,	// (0x000411c5) popup_clock_analogue_window_g

0x05cd,	// (0x00032087) popup_clock_analogue_window_t1

0x05db,	// (0x00032095) clock_digital_number_pane_ParamLimits

0x05db,	// (0x00032095) clock_digital_number_pane

0x05e7,	// (0x000320a1) clock_digital_number_pane_cp02_ParamLimits

0x05e7,	// (0x000320a1) clock_digital_number_pane_cp02

0x05f3,	// (0x000320ad) clock_digital_number_pane_cp03_ParamLimits

0x05f3,	// (0x000320ad) clock_digital_number_pane_cp03

0x05ff,	// (0x000320b9) clock_digital_number_pane_cp04_ParamLimits

0x05ff,	// (0x000320b9) clock_digital_number_pane_cp04

0x060b,	// (0x000320c5) clock_digital_separator_pane_ParamLimits

0x060b,	// (0x000320c5) clock_digital_separator_pane

0x0617,	// (0x000320d1) popup_clock_digital_window_t1_ParamLimits

0x0617,	// (0x000320d1) popup_clock_digital_window_t1

0xe047,	// (0x0003fb01) clock_digital_number_pane_g1

0xe047,	// (0x0003fb01) clock_digital_number_pane_g2

0x0001,

0xf716,	// (0x000411d0) clock_digital_number_pane_g

0xe047,	// (0x0003fb01) clock_digital_separator_pane_g1

0xe047,	// (0x0003fb01) clock_digital_separator_pane_g2

0x0001,

0xf716,	// (0x000411d0) clock_digital_separator_pane_g

0xcdb2,	// (0x0003e86c) aid_fill_nsta_ParamLimits

0xcee8,	// (0x0003e9a2) indicator_nsta_pane_ParamLimits

0x460d,	// (0x000360c7) popup_clock_analogue_window

0x460d,	// (0x000360c7) popup_clock_digital_window

0x2d17,	// (0x000347d1) grid_indicator_nsta_pane_ParamLimits

0x6894,	// (0x0003834e) clock_nsta_pane_t2

0x0001,

0xfaa8,	// (0x00041562) clock_nsta_pane_t

0x0580,	// (0x0003203a) aid_size_max_handle

0xb7cd,	// (0x0003d287) aid_size_min_handle

0x3973,	// (0x0003542d) editor_scroll_pane

0x7600,	// (0x000390ba) ex_editor_pane

0x2cc3,	// (0x0003477d) scroll_pane_cp13

0x2ae0,	// (0x0003459a) scroll_pane_cp14

0x3389,	// (0x00034e43) scroll_pane_cp36

0xc46c,	// (0x0003df26) list_single_graphic_hl_pane_cp2_ParamLimits

0xc46c,	// (0x0003df26) list_single_graphic_hl_pane_cp2

0xd650,	// (0x0003f10a) list_single_graphic_hl_pane_ParamLimits

0xd650,	// (0x0003f10a) list_single_graphic_hl_pane

0x1867,	// (0x00033321) aid_size_min_hl_cp1

0x7608,	// (0x000390c2) list_highlight_pane_cp34_ParamLimits

0x7608,	// (0x000390c2) list_highlight_pane_cp34

0x7619,	// (0x000390d3) list_single_graphic_hl_pane_g1_ParamLimits

0x7619,	// (0x000390d3) list_single_graphic_hl_pane_g1

0xbcd7,	// (0x0003d791) list_single_graphic_hl_pane_g2_ParamLimits

0xbcd7,	// (0x0003d791) list_single_graphic_hl_pane_g2

0xbcd7,	// (0x0003d791) list_single_graphic_hl_pane_g3_ParamLimits

0xbcd7,	// (0x0003d791) list_single_graphic_hl_pane_g3

0xf027,	// (0x00040ae1) list_single_graphic_hl_pane_g4_ParamLimits

0xf027,	// (0x00040ae1) list_single_graphic_hl_pane_g4

0xbce3,	// (0x0003d79d) list_single_graphic_hl_pane_g5_ParamLimits

0xbce3,	// (0x0003d79d) list_single_graphic_hl_pane_g5

0x0004,

0xfbf3,	// (0x000416ad) list_single_graphic_hl_pane_g_ParamLimits

0xfbf3,	// (0x000416ad) list_single_graphic_hl_pane_g

0xbcf7,	// (0x0003d7b1) list_single_graphic_hl_pane_t1_ParamLimits

0xbcf7,	// (0x0003d7b1) list_single_graphic_hl_pane_t1

0x7626,	// (0x000390e0) aid_size_min_hl_cp2

0x762f,	// (0x000390e9) list_highlight_pane_cp34_cp2_ParamLimits

0x762f,	// (0x000390e9) list_highlight_pane_cp34_cp2

0x7619,	// (0x000390d3) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x7619,	// (0x000390d3) list_single_graphic_hl_pane_g1_cp2

0x763c,	// (0x000390f6) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x763c,	// (0x000390f6) list_single_graphic_hl_pane_g2_cp2

0x7648,	// (0x00039102) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x7648,	// (0x00039102) list_single_graphic_hl_pane_g3_cp2

0x2ebf,	// (0x00034979) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x2ebf,	// (0x00034979) list_single_graphic_hl_pane_g4_cp2

0x7656,	// (0x00039110) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x7656,	// (0x00039110) list_single_graphic_hl_pane_g5_cp2

0xb8b0,	// (0x0003d36a) control_pane_g4_ParamLimits

0xb8b0,	// (0x0003d36a) control_pane_g4

0x3cf9,	// (0x000357b3) bg_popup_sub_pane_cp10_ParamLimits

0x6e03,	// (0x000388bd) list_choice_list_pane_ParamLimits

0x6e12,	// (0x000388cc) scroll_pane_cp23

0x2544,	// (0x00033ffe) bg_popup_preview_window_pane_cp02_ParamLimits

0x7430,	// (0x00038eea) list_preview_fixed_pane_ParamLimits

0x7446,	// (0x00038f00) list_preview_fixed_pane_cp_ParamLimits

0x7446,	// (0x00038f00) list_preview_fixed_pane_cp

0x7452,	// (0x00038f0c) popup_preview_fixed_window_g1_ParamLimits

0x7452,	// (0x00038f0c) popup_preview_fixed_window_g1

0x745e,	// (0x00038f18) popup_preview_fixed_window_g2_ParamLimits

0x745e,	// (0x00038f18) popup_preview_fixed_window_g2

0x0002,

0xfb7b,	// (0x00041635) popup_preview_fixed_window_g_ParamLimits

0xfb7b,	// (0x00041635) popup_preview_fixed_window_g

0x04f2,	// (0x00031fac) aid_navi_side_left_pane_ParamLimits

0x0507,	// (0x00031fc1) aid_navi_side_right_pane_ParamLimits

0x051f,	// (0x00031fd9) navi_icon_pane_stacon_ParamLimits

0x0533,	// (0x00031fed) navi_navi_pane_stacon_ParamLimits

0x051f,	// (0x00031fd9) navi_text_pane_stacon_ParamLimits

0xe03d,	// (0x0003faf7) main_text_info_pane

0x7680,	// (0x0003913a) listscroll_text_info_pane

0x7688,	// (0x00039142) list_text_info_pane_ParamLimits

0x7688,	// (0x00039142) list_text_info_pane

0x7697,	// (0x00039151) scroll_pane_cp24_ParamLimits

0x7697,	// (0x00039151) scroll_pane_cp24

0xdb58,	// (0x0003f612) list_text_info_pane_t1_ParamLimits

0xdb58,	// (0x0003f612) list_text_info_pane_t1

0xc6af,	// (0x0003e169) popup_fast_swap2_window_ParamLimits

0xc6af,	// (0x0003e169) popup_fast_swap2_window

0x76da,	// (0x00039194) aid_size_cell_fast2

0xe03d,	// (0x0003faf7) bg_popup_window_pane_cp17

0x4c94,	// (0x0003674e) heading_pane_cp2

0x27a4,	// (0x0003425e) listscroll_fast2_pane

0x76e4,	// (0x0003919e) grid_fast2_pane

0x76ee,	// (0x000391a8) listscroll_fast2_pane_g1

0x76f8,	// (0x000391b2) listscroll_fast2_pane_g2

0x0001,

0xfbfe,	// (0x000416b8) listscroll_fast2_pane_g

0x2cc3,	// (0x0003477d) scroll_pane_cp26

0x7702,	// (0x000391bc) cell_fast2_pane_ParamLimits

0x7702,	// (0x000391bc) cell_fast2_pane

0x7719,	// (0x000391d3) cell_fast2_pane_g1

0x7722,	// (0x000391dc) cell_fast2_pane_g2

0x772b,	// (0x000391e5) cell_fast2_pane_g3

0x0002,

0xfc03,	// (0x000416bd) cell_fast2_pane_g

0x289d,	// (0x00034357) grid_highlight_pane_cp9

0x28b2,	// (0x0003436c) main_eswt_pane_ParamLimits

0x28b2,	// (0x0003436c) main_eswt_pane

0x76ac,	// (0x00039166) list_single_text_info_pane

0x7733,	// (0x000391ed) eswt_ctrl_button_pane

0x7733,	// (0x000391ed) eswt_ctrl_canvas_pane

0x773b,	// (0x000391f5) eswt_ctrl_combo_pane

0x7733,	// (0x000391ed) eswt_ctrl_default_pane

0x7733,	// (0x000391ed) eswt_ctrl_label_pane

0x7743,	// (0x000391fd) eswt_ctrl_wait_pane

0x774b,	// (0x00039205) eswt_shell_pane

0xe03d,	// (0x0003faf7) listscroll_eswt_app_pane

0x776b,	// (0x00039225) popup_eswt_tasktip_window_ParamLimits

0x776b,	// (0x00039225) popup_eswt_tasktip_window

0x4928,	// (0x000363e2) bg_popup_window_pane_cp18

0x777c,	// (0x00039236) eswt_control_pane_g1_ParamLimits

0x777c,	// (0x00039236) eswt_control_pane_g1

0x7789,	// (0x00039243) eswt_control_pane_g2_ParamLimits

0x7789,	// (0x00039243) eswt_control_pane_g2

0x7796,	// (0x00039250) eswt_control_pane_g3_ParamLimits

0x7796,	// (0x00039250) eswt_control_pane_g3

0x77a3,	// (0x0003925d) eswt_control_pane_g4_ParamLimits

0x77a3,	// (0x0003925d) eswt_control_pane_g4

0x0003,

0xfc0a,	// (0x000416c4) eswt_control_pane_g_ParamLimits

0xfc0a,	// (0x000416c4) eswt_control_pane_g

0x2b41,	// (0x000345fb) bg_button_pane_ParamLimits

0x2b41,	// (0x000345fb) bg_button_pane

0x28b2,	// (0x0003436c) common_borders_pane_copy2_ParamLimits

0x28b2,	// (0x0003436c) common_borders_pane_copy2

0x77b0,	// (0x0003926a) control_button_pane_g1_ParamLimits

0x77b0,	// (0x0003926a) control_button_pane_g1

0x77bc,	// (0x00039276) control_button_pane_g2_ParamLimits

0x77bc,	// (0x00039276) control_button_pane_g2

0x77c8,	// (0x00039282) control_button_pane_g3_ParamLimits

0x77c8,	// (0x00039282) control_button_pane_g3

0x0002,

0xfc13,	// (0x000416cd) control_button_pane_g_ParamLimits

0xfc13,	// (0x000416cd) control_button_pane_g

0x77dc,	// (0x00039296) control_button_pane_t1

0x77ea,	// (0x000392a4) control_button_pane_t2

0x0001,

0xfc1a,	// (0x000416d4) control_button_pane_t

0x4836,	// (0x000362f0) bg_button_pane_g1

0x4846,	// (0x00036300) bg_button_pane_g2

0x483e,	// (0x000362f8) bg_button_pane_g3

0x4856,	// (0x00036310) bg_button_pane_g4

0x484e,	// (0x00036308) bg_button_pane_g5

0x485e,	// (0x00036318) bg_button_pane_g6

0x4866,	// (0x00036320) bg_button_pane_g7

0x4876,	// (0x00036330) bg_button_pane_g8

0x486e,	// (0x00036328) bg_button_pane_g9

0x0008,

0xf86d,	// (0x00041327) bg_button_pane_g

0x6dbe,	// (0x00038878) common_borders_pane_ParamLimits

0x6dbe,	// (0x00038878) common_borders_pane

0x777c,	// (0x00039236) eswt_control_pane_g1_copy1_ParamLimits

0x777c,	// (0x00039236) eswt_control_pane_g1_copy1

0x7789,	// (0x00039243) eswt_control_pane_g2_copy1_ParamLimits

0x7789,	// (0x00039243) eswt_control_pane_g2_copy1

0x7796,	// (0x00039250) eswt_control_pane_g3_copy1_ParamLimits

0x7796,	// (0x00039250) eswt_control_pane_g3_copy1

0x77a3,	// (0x0003925d) eswt_control_pane_g4_copy1_ParamLimits

0x77a3,	// (0x0003925d) eswt_control_pane_g4_copy1

0x6df9,	// (0x000388b3) bg_eswt_ctrl_canvas_pane_g1

0x6dbe,	// (0x00038878) common_borders_pane_cp2_ParamLimits

0x6dbe,	// (0x00038878) common_borders_pane_cp2

0x6dbe,	// (0x00038878) common_borders_pane_cp3_ParamLimits

0x6dbe,	// (0x00038878) common_borders_pane_cp3

0x77f8,	// (0x000392b2) separator_horizontal_pane

0x7800,	// (0x000392ba) separator_vertical_pane

0x777c,	// (0x00039236) eswt_control_pane_g1_copy2_ParamLimits

0x777c,	// (0x00039236) eswt_control_pane_g1_copy2

0x7789,	// (0x00039243) eswt_control_pane_g2_copy2_ParamLimits

0x7789,	// (0x00039243) eswt_control_pane_g2_copy2

0x7796,	// (0x00039250) eswt_control_pane_g3_copy2_ParamLimits

0x7796,	// (0x00039250) eswt_control_pane_g3_copy2

0x77a3,	// (0x0003925d) eswt_control_pane_g4_copy2_ParamLimits

0x77a3,	// (0x0003925d) eswt_control_pane_g4_copy2

0xe03d,	// (0x0003faf7) common_borders_pane_cp4

0x7809,	// (0x000392c3) separator_horizontal_pane_g1

0x7812,	// (0x000392cc) separator_horizontal_pane_g2

0x781b,	// (0x000392d5) separator_horizontal_pane_g3

0x0002,

0xfc1f,	// (0x000416d9) separator_horizontal_pane_g

0x777c,	// (0x00039236) eswt_control_pane_g1_copy3_ParamLimits

0x777c,	// (0x00039236) eswt_control_pane_g1_copy3

0x7789,	// (0x00039243) eswt_control_pane_g2_copy3_ParamLimits

0x7789,	// (0x00039243) eswt_control_pane_g2_copy3

0x7796,	// (0x00039250) eswt_control_pane_g3_copy3_ParamLimits

0x7796,	// (0x00039250) eswt_control_pane_g3_copy3

0x77a3,	// (0x0003925d) eswt_control_pane_g4_copy3_ParamLimits

0x77a3,	// (0x0003925d) eswt_control_pane_g4_copy3

0xe03d,	// (0x0003faf7) common_borders_pane_cp5

0x7824,	// (0x000392de) separator_vertical_pane_g1

0x782d,	// (0x000392e7) separator_vertical_pane_g2

0x7836,	// (0x000392f0) separator_vertical_pane_g3

0x0002,

0xfc26,	// (0x000416e0) separator_vertical_pane_g

0x777c,	// (0x00039236) eswt_control_pane_g1_copy4_ParamLimits

0x777c,	// (0x00039236) eswt_control_pane_g1_copy4

0x7789,	// (0x00039243) eswt_control_pane_g2_copy4_ParamLimits

0x7789,	// (0x00039243) eswt_control_pane_g2_copy4

0x7796,	// (0x00039250) eswt_control_pane_g3_copy4_ParamLimits

0x7796,	// (0x00039250) eswt_control_pane_g3_copy4

0x77a3,	// (0x0003925d) eswt_control_pane_g4_copy4_ParamLimits

0x77a3,	// (0x0003925d) eswt_control_pane_g4_copy4

0xdb7a,	// (0x0003f634) eswt_ctrl_combo_button_pane

0xdb82,	// (0x0003f63c) eswt_ctrl_input_pane

0xdb8a,	// (0x0003f644) popup_choice_list_window_cp70

0xdb92,	// (0x0003f64c) eswt_ctrl_input_pane_t1

0xe03d,	// (0x0003faf7) input_focus_pane_cp70

0x6dbe,	// (0x00038878) bg_button_pane_cp70_ParamLimits

0x6dbe,	// (0x00038878) bg_button_pane_cp70

0xdba0,	// (0x0003f65a) eswt_ctrl_combo_button_pane_g1

0x786d,	// (0x00039327) wait_bar_pane_cp70

0x4928,	// (0x000363e2) bg_popup_window_pane_cp70_ParamLimits

0x4928,	// (0x000363e2) bg_popup_window_pane_cp70

0x7875,	// (0x0003932f) popup_eswt_tasktip_window_t1

0x788b,	// (0x00039345) wait_bar_pane_cp71_ParamLimits

0x788b,	// (0x00039345) wait_bar_pane_cp71

0x7897,	// (0x00039351) grid_eswt_app_pane

0x318e,	// (0x00034c48) scroll_pane_cp70

0xdba8,	// (0x0003f662) cell_eswt_app_pane_ParamLimits

0xdba8,	// (0x0003f662) cell_eswt_app_pane

0xdbda,	// (0x0003f694) cell_eswt_app_pane_g1_ParamLimits

0xdbda,	// (0x0003f694) cell_eswt_app_pane_g1

0xdc09,	// (0x0003f6c3) cell_eswt_app_pane_g2_ParamLimits

0xdc09,	// (0x0003f6c3) cell_eswt_app_pane_g2

0x0001,

0xfc2d,	// (0x000416e7) cell_eswt_app_pane_g_ParamLimits

0xfc2d,	// (0x000416e7) cell_eswt_app_pane_g

0xdc32,	// (0x0003f6ec) cell_eswt_app_pane_t1_ParamLimits

0xdc32,	// (0x0003f6ec) cell_eswt_app_pane_t1

0x795c,	// (0x00039416) grid_highlight_pane_cp70_ParamLimits

0x795c,	// (0x00039416) grid_highlight_pane_cp70

0x5d8d,	// (0x00037847) set_content_pane_g1

0x3c23,	// (0x000356dd) status_small_volume_pane

0x18a6,	// (0x00033360) status_small_volume_pane_g1

0x18ae,	// (0x00033368) volume_small2_pane

0x18b7,	// (0x00033371) volume_small2_pane_g1

0x18c0,	// (0x0003337a) volume_small2_pane_g2

0x18c9,	// (0x00033383) volume_small2_pane_g3

0x18d2,	// (0x0003338c) volume_small2_pane_g4

0x18db,	// (0x00033395) volume_small2_pane_g5

0x18e4,	// (0x0003339e) volume_small2_pane_g6

0x18ed,	// (0x000333a7) volume_small2_pane_g7

0x18f6,	// (0x000333b0) volume_small2_pane_g8

0x18ff,	// (0x000333b9) volume_small2_pane_g9

0x1908,	// (0x000333c2) volume_small2_pane_g10

0x0009,

0xfc32,	// (0x000416ec) volume_small2_pane_g

0x71d7,	// (0x00038c91) fep_vkb_top_text_pane_g1_ParamLimits

0xdb00,	// (0x0003f5ba) fep_vkb_top_text_pane_t1_ParamLimits

0x746a,	// (0x00038f24) popup_preview_fixed_window_g3_ParamLimits

0x746a,	// (0x00038f24) popup_preview_fixed_window_g3

0xcd45,	// (0x0003e7ff) popup_toolbar_trans_pane

0xd4b5,	// (0x0003ef6f) aid_height_set_list_ParamLimits

0x5c43,	// (0x000376fd) aid_size_parent_ParamLimits

0x3cf9,	// (0x000357b3) list_highlight_pane_cp2_ParamLimits

0x5d8d,	// (0x00037847) set_content_pane_g1_ParamLimits

0xbc3a,	// (0x0003d6f4) list_single_image_pane_ParamLimits

0xbc3a,	// (0x0003d6f4) list_single_image_pane

0xdc64,	// (0x0003f71e) aid_size_cell_image_ParamLimits

0xdc64,	// (0x0003f71e) aid_size_cell_image

0xdc71,	// (0x0003f72b) grid_single_image_pane_ParamLimits

0xdc71,	// (0x0003f72b) grid_single_image_pane

0x2b5b,	// (0x00034615) list_single_image_pane_g1_ParamLimits

0x2b5b,	// (0x00034615) list_single_image_pane_g1

0x2b67,	// (0x00034621) list_single_image_pane_g2_ParamLimits

0x2b67,	// (0x00034621) list_single_image_pane_g2

0x0001,

0xfc47,	// (0x00041701) list_single_image_pane_g_ParamLimits

0xfc47,	// (0x00041701) list_single_image_pane_g

0x7983,	// (0x0003943d) list_single_image_pane_t1_ParamLimits

0x7983,	// (0x0003943d) list_single_image_pane_t1

0xdc7f,	// (0x0003f739) cell_image_list_pane_ParamLimits

0xdc7f,	// (0x0003f739) cell_image_list_pane

0xdc99,	// (0x0003f753) cell_image_list_pane_g1

0xdca2,	// (0x0003f75c) cell_image_list_pane_g2

0x0001,

0xfc4c,	// (0x00041706) cell_image_list_pane_g

0x79c1,	// (0x0003947b) aid_size_cell_tb_trans_pane

0x2b41,	// (0x000345fb) bg_tb_trans_pane

0x79d3,	// (0x0003948d) grid_tb_trans_pane

0x4836,	// (0x000362f0) bg_tb_trans_pane_g1

0x4846,	// (0x00036300) bg_tb_trans_pane_g2

0x483e,	// (0x000362f8) bg_tb_trans_pane_g3

0x4856,	// (0x00036310) bg_tb_trans_pane_g4

0x484e,	// (0x00036308) bg_tb_trans_pane_g5

0x4876,	// (0x00036330) bg_tb_trans_pane_g6

0x486e,	// (0x00036328) bg_tb_trans_pane_g7

0x485e,	// (0x00036318) bg_tb_trans_pane_g8

0x4866,	// (0x00036320) bg_tb_trans_pane_g9

0x0008,

0xfc51,	// (0x0004170b) bg_tb_trans_pane_g

0x79e7,	// (0x000394a1) cell_toolbar_trans_pane_ParamLimits

0x79e7,	// (0x000394a1) cell_toolbar_trans_pane

0x6df9,	// (0x000388b3) cell_toolbar_trans_pane_g1

0xd89a,	// (0x0003f354) list_form2_midp_pane_t1

0xd8a8,	// (0x0003f362) list_form2_midp_pane_t2

0x0001,

0xfaee,	// (0x000415a8) list_form2_midp_pane_t

0x6aac,	// (0x00038566) scroll_pane_cp51_ParamLimits

0x6c5b,	// (0x00038715) form2_midp_wait_pane_g1

0x6c64,	// (0x0003871e) form2_midp_wait_pane_g2

0x6c6d,	// (0x00038727) form2_midp_wait_pane_g3

0x0002,

0xfb03,	// (0x000415bd) form2_midp_wait_pane_g

0x22ba,	// (0x00033d74) list_highlight_pane_cp21_ParamLimits

0x6c9e,	// (0x00038758) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x6cad,	// (0x00038767) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x0f18,	// (0x000329d2) list_single_2graphic_im_pane_ParamLimits

0x0f18,	// (0x000329d2) list_single_2graphic_im_pane

0xdcab,	// (0x0003f765) list_single_2graphic_im_pane_g1_ParamLimits

0xdcab,	// (0x0003f765) list_single_2graphic_im_pane_g1

0xdcbc,	// (0x0003f776) list_single_2graphic_im_pane_g2_ParamLimits

0xdcbc,	// (0x0003f776) list_single_2graphic_im_pane_g2

0xdcc8,	// (0x0003f782) list_single_2graphic_im_pane_g3_ParamLimits

0xdcc8,	// (0x0003f782) list_single_2graphic_im_pane_g3

0x0003,

0xfc64,	// (0x0004171e) list_single_2graphic_im_pane_g_ParamLimits

0xfc64,	// (0x0004171e) list_single_2graphic_im_pane_g

0xdcdc,	// (0x0003f796) list_single_2graphic_im_pane_t1_ParamLimits

0xdcdc,	// (0x0003f796) list_single_2graphic_im_pane_t1

0x7476,	// (0x00038f30) list_single_graphic_2heading_pane_fp_ParamLimits

0x7476,	// (0x00038f30) list_single_graphic_2heading_pane_fp

0x15e4,	// (0x0003309e) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x15e4,	// (0x0003309e) list_single_graphic_2heading_pane_fp_g1

0x748f,	// (0x00038f49) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x748f,	// (0x00038f49) list_single_graphic_2heading_pane_fp_g2

0x15ad,	// (0x00033067) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x15ad,	// (0x00033067) list_single_graphic_2heading_pane_fp_g3

0x15b9,	// (0x00033073) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x15b9,	// (0x00033073) list_single_graphic_2heading_pane_fp_g4

0x749b,	// (0x00038f55) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x749b,	// (0x00038f55) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb8b,	// (0x00041645) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb8b,	// (0x00041645) list_single_graphic_2heading_pane_fp_g

0x2ecb,	// (0x00034985) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x2ecb,	// (0x00034985) list_single_graphic_2heading_pane_fp_t1

0x161c,	// (0x000330d6) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x161c,	// (0x000330d6) list_single_graphic_2heading_pane_fp_t2

0x2ee1,	// (0x0003499b) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x2ee1,	// (0x0003499b) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc6d,	// (0x00041727) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc6d,	// (0x00041727) list_single_graphic_2heading_pane_fp_t

0x6e99,	// (0x00038953) fep_hwr_write_pane_g5_ParamLimits

0x6e99,	// (0x00038953) fep_hwr_write_pane_g5

0x6ea5,	// (0x0003895f) fep_hwr_write_pane_g6_ParamLimits

0x6ea5,	// (0x0003895f) fep_hwr_write_pane_g6

0x774b,	// (0x00039205) eswt_shell_pane_ParamLimits

0x4928,	// (0x000363e2) bg_popup_window_pane_cp18_ParamLimits

0x5b89,	// (0x00037643) heading_pane_cp70

0x7875,	// (0x0003932f) popup_eswt_tasktip_window_t1_ParamLimits

0xce0f,	// (0x0003e8c9) aid_touch_tab_arrow_left

0xce23,	// (0x0003e8dd) aid_touch_tab_arrow_right

0xae76,	// (0x0003c930) title_pane_g3_ParamLimits

0xae76,	// (0x0003c930) title_pane_g3

0x2b00,	// (0x000345ba) set_value_pane_g1

0xcd45,	// (0x0003e7ff) popup_toolbar_trans_pane_ParamLimits

0x79c1,	// (0x0003947b) aid_size_cell_tb_trans_pane_ParamLimits

0x2b41,	// (0x000345fb) bg_tb_trans_pane_ParamLimits

0x79d3,	// (0x0003948d) grid_tb_trans_pane_ParamLimits

0x2544,	// (0x00033ffe) cont_note_pane_ParamLimits

0x2544,	// (0x00033ffe) cont_note_pane

0x28b2,	// (0x0003436c) cont_snote2_single_text_pane_ParamLimits

0x28b2,	// (0x0003436c) cont_snote2_single_text_pane

0x28b2,	// (0x0003436c) cont_snote2_single_graphic_pane_ParamLimits

0x28b2,	// (0x0003436c) cont_snote2_single_graphic_pane

0x4eb0,	// (0x0003696a) cont_note_wait_pane_ParamLimits

0x4eb0,	// (0x0003696a) cont_note_wait_pane

0x4eb0,	// (0x0003696a) cont_note_image_pane_ParamLimits

0x4eb0,	// (0x0003696a) cont_note_image_pane

0x7a7b,	// (0x00039535) popup_note2_window_g1_ParamLimits

0x7a7b,	// (0x00039535) popup_note2_window_g1

0x7aac,	// (0x00039566) popup_note2_window_t1_ParamLimits

0x7aac,	// (0x00039566) popup_note2_window_t1

0x7af1,	// (0x000395ab) popup_note2_window_t2_ParamLimits

0x7af1,	// (0x000395ab) popup_note2_window_t2

0x7b36,	// (0x000395f0) popup_note2_window_t3_ParamLimits

0x7b36,	// (0x000395f0) popup_note2_window_t3

0x7b7b,	// (0x00039635) popup_note2_window_t4_ParamLimits

0x7b7b,	// (0x00039635) popup_note2_window_t4

0x25c8,	// (0x00034082) popup_note2_window_t5_ParamLimits

0x25c8,	// (0x00034082) popup_note2_window_t5

0x0004,

0xfc79,	// (0x00041733) popup_note2_window_t_ParamLimits

0xfc79,	// (0x00041733) popup_note2_window_t

0x7baa,	// (0x00039664) popup_note2_image_window_g1_ParamLimits

0x7baa,	// (0x00039664) popup_note2_image_window_g1

0x7bb6,	// (0x00039670) popup_note2_image_window_g2_ParamLimits

0x7bb6,	// (0x00039670) popup_note2_image_window_g2

0x0001,

0xfc84,	// (0x0004173e) popup_note2_image_window_g_ParamLimits

0xfc84,	// (0x0004173e) popup_note2_image_window_g

0x7bc8,	// (0x00039682) popup_note2_image_window_t1_ParamLimits

0x7bc8,	// (0x00039682) popup_note2_image_window_t1

0x7be0,	// (0x0003969a) popup_note2_image_window_t2_ParamLimits

0x7be0,	// (0x0003969a) popup_note2_image_window_t2

0x7bf8,	// (0x000396b2) popup_note2_image_window_t3_ParamLimits

0x7bf8,	// (0x000396b2) popup_note2_image_window_t3

0x0002,

0xfc89,	// (0x00041743) popup_note2_image_window_t_ParamLimits

0xfc89,	// (0x00041743) popup_note2_image_window_t

0x4ebe,	// (0x00036978) popup_note2_wait_window_g1_ParamLimits

0x4ebe,	// (0x00036978) popup_note2_wait_window_g1

0x7c14,	// (0x000396ce) popup_note2_wait_window_g2_ParamLimits

0x7c14,	// (0x000396ce) popup_note2_wait_window_g2

0x4ed6,	// (0x00036990) popup_note2_wait_window_g3_ParamLimits

0x4ed6,	// (0x00036990) popup_note2_wait_window_g3

0x0002,

0xfc90,	// (0x0004174a) popup_note2_wait_window_g_ParamLimits

0xfc90,	// (0x0004174a) popup_note2_wait_window_g

0x7c20,	// (0x000396da) popup_note2_wait_window_t1_ParamLimits

0x7c20,	// (0x000396da) popup_note2_wait_window_t1

0x7c3e,	// (0x000396f8) popup_note2_wait_window_t2_ParamLimits

0x7c3e,	// (0x000396f8) popup_note2_wait_window_t2

0x7c5c,	// (0x00039716) popup_note2_wait_window_t3_ParamLimits

0x7c5c,	// (0x00039716) popup_note2_wait_window_t3

0x7c6e,	// (0x00039728) popup_note2_wait_window_t4_ParamLimits

0x7c6e,	// (0x00039728) popup_note2_wait_window_t4

0x0003,

0xfc97,	// (0x00041751) popup_note2_wait_window_t_ParamLimits

0xfc97,	// (0x00041751) popup_note2_wait_window_t

0x7c80,	// (0x0003973a) wait_bar2_pane_ParamLimits

0x7c80,	// (0x0003973a) wait_bar2_pane

0x7c98,	// (0x00039752) popup_snote2_single_text_window_g1_ParamLimits

0x7c98,	// (0x00039752) popup_snote2_single_text_window_g1

0x7cc0,	// (0x0003977a) popup_snote2_single_text_window_t1_ParamLimits

0x7cc0,	// (0x0003977a) popup_snote2_single_text_window_t1

0x7d0c,	// (0x000397c6) popup_snote2_single_text_window_t2_ParamLimits

0x7d0c,	// (0x000397c6) popup_snote2_single_text_window_t2

0x7d58,	// (0x00039812) popup_snote2_single_text_window_t3_ParamLimits

0x7d58,	// (0x00039812) popup_snote2_single_text_window_t3

0x7d99,	// (0x00039853) popup_snote2_single_text_window_t4_ParamLimits

0x7d99,	// (0x00039853) popup_snote2_single_text_window_t4

0x7dcf,	// (0x00039889) popup_snote2_single_text_window_t5_ParamLimits

0x7dcf,	// (0x00039889) popup_snote2_single_text_window_t5

0x0004,

0xfca0,	// (0x0004175a) popup_snote2_single_text_window_t_ParamLimits

0xfca0,	// (0x0004175a) popup_snote2_single_text_window_t

0x7dfa,	// (0x000398b4) popup_snote2_single_graphic_window_g1_ParamLimits

0x7dfa,	// (0x000398b4) popup_snote2_single_graphic_window_g1

0x7e22,	// (0x000398dc) popup_snote2_single_graphic_window_g2_ParamLimits

0x7e22,	// (0x000398dc) popup_snote2_single_graphic_window_g2

0x0001,

0xfcab,	// (0x00041765) popup_snote2_single_graphic_window_g_ParamLimits

0xfcab,	// (0x00041765) popup_snote2_single_graphic_window_g

0x7e4a,	// (0x00039904) popup_snote2_single_graphic_window_t1_ParamLimits

0x7e4a,	// (0x00039904) popup_snote2_single_graphic_window_t1

0x7e96,	// (0x00039950) popup_snote2_single_graphic_window_t2_ParamLimits

0x7e96,	// (0x00039950) popup_snote2_single_graphic_window_t2

0x7d58,	// (0x00039812) popup_snote2_single_graphic_window_t3_ParamLimits

0x7d58,	// (0x00039812) popup_snote2_single_graphic_window_t3

0x7d99,	// (0x00039853) popup_snote2_single_graphic_window_t4_ParamLimits

0x7d99,	// (0x00039853) popup_snote2_single_graphic_window_t4

0x7dcf,	// (0x00039889) popup_snote2_single_graphic_window_t5_ParamLimits

0x7dcf,	// (0x00039889) popup_snote2_single_graphic_window_t5

0x0004,

0xfcb0,	// (0x0004176a) popup_snote2_single_graphic_window_t_ParamLimits

0xfcb0,	// (0x0004176a) popup_snote2_single_graphic_window_t

0x6956,	// (0x00038410) clock_nsta_pane_cp2_t1

0x6956,	// (0x00038410) clock_nsta_pane_cp2_t2

0x0001,

0xfac4,	// (0x0004157e) clock_nsta_pane_cp2_t

0x0276,	// (0x00031d30) form_field_data_wide_pane_g1_ParamLimits

0x2b5b,	// (0x00034615) form_field_data_wide_pane_g2_ParamLimits

0x2b5b,	// (0x00034615) form_field_data_wide_pane_g2

0x2b67,	// (0x00034621) form_field_data_wide_pane_g3_ParamLimits

0x2b67,	// (0x00034621) form_field_data_wide_pane_g3

0x0002,

0xf68e,	// (0x00041148) form_field_data_wide_pane_g_ParamLimits

0xf68e,	// (0x00041148) form_field_data_wide_pane_g

0xd7a2,	// (0x0003f25c) grid_touch_3_pane_ParamLimits

0xd7a2,	// (0x0003f25c) grid_touch_3_pane

0xdd0d,	// (0x0003f7c7) cell_touch_3_pane_ParamLimits

0xdd0d,	// (0x0003f7c7) cell_touch_3_pane

0x6df9,	// (0x000388b3) cell_touch_3_pane_g1

0x6df9,	// (0x000388b3) cell_touch_3_pane_g2

0x0001,

0xfb49,	// (0x00041603) cell_touch_3_pane_g

0x25fa,	// (0x000340b4) cont_query_data_pane

0x2602,	// (0x000340bc) cont_query_data_pane_cp1

0x7f15,	// (0x000399cf) button_value_adjust_pane_cp7

0x7f1d,	// (0x000399d7) query_popup_pane_cp3

0x344f,	// (0x00034f09) bg_popup_sub_pane_cp22_ParamLimits

0x0636,	// (0x000320f0) navi_navi_volume_pane_cp2

0x0651,	// (0x0003210b) popup_side_volume_key_window_g2

0x0660,	// (0x0003211a) popup_side_volume_key_window_g3

0x0002,

0xf724,	// (0x000411de) popup_side_volume_key_window_g

0x067d,	// (0x00032137) popup_side_volume_key_window_t2

0x0001,

0xf72b,	// (0x000411e5) popup_side_volume_key_window_t

0x370a,	// (0x000351c4) popup_side_volume_key_window_ParamLimits

0xb358,	// (0x0003ce12) list_double_graphic_pane_g4_ParamLimits

0xb358,	// (0x0003ce12) list_double_graphic_pane_g4

0xbc24,	// (0x0003d6de) list_single_2heading_msg_pane_ParamLimits

0xbc24,	// (0x0003d6de) list_single_2heading_msg_pane

0xbd0d,	// (0x0003d7c7) list_single_2heading_msg_pane_g1_ParamLimits

0xbd0d,	// (0x0003d7c7) list_single_2heading_msg_pane_g1

0xbd19,	// (0x0003d7d3) list_single_2heading_msg_pane_g2_ParamLimits

0xbd19,	// (0x0003d7d3) list_single_2heading_msg_pane_g2

0xbd2c,	// (0x0003d7e6) list_single_2heading_msg_pane_g3_ParamLimits

0xbd2c,	// (0x0003d7e6) list_single_2heading_msg_pane_g3

0xbd38,	// (0x0003d7f2) list_single_2heading_msg_pane_g4_ParamLimits

0xbd38,	// (0x0003d7f2) list_single_2heading_msg_pane_g4

0x0003,

0xfcbb,	// (0x00041775) list_single_2heading_msg_pane_g_ParamLimits

0xfcbb,	// (0x00041775) list_single_2heading_msg_pane_g

0xbd50,	// (0x0003d80a) list_single_2heading_msg_pane_t1_ParamLimits

0xbd50,	// (0x0003d80a) list_single_2heading_msg_pane_t1

0xbd78,	// (0x0003d832) list_single_2heading_msg_pane_t2_ParamLimits

0xbd78,	// (0x0003d832) list_single_2heading_msg_pane_t2

0xbde3,	// (0x0003d89d) list_single_2heading_msg_pane_t3_ParamLimits

0xbde3,	// (0x0003d89d) list_single_2heading_msg_pane_t3

0x2fc6,	// (0x00034a80) list_single_2heading_msg_pane_t4_ParamLimits

0x2fc6,	// (0x00034a80) list_single_2heading_msg_pane_t4

0x0003,

0xfcc4,	// (0x0004177e) list_single_2heading_msg_pane_t_ParamLimits

0xfcc4,	// (0x0004177e) list_single_2heading_msg_pane_t

0xe05b,	// (0x0003fb15) title_pane_g4_ParamLimits

0xe05b,	// (0x0003fb15) title_pane_g4

0x0442,	// (0x00031efc) title_pane_stacon_g3_ParamLimits

0x0442,	// (0x00031efc) title_pane_stacon_g3

0x7a3e,	// (0x000394f8) list_single_2graphic_im_pane_g4_ParamLimits

0x7a3e,	// (0x000394f8) list_single_2graphic_im_pane_g4

0x5926,	// (0x000373e0) popup_side_volume_key_window_cp

0x619c,	// (0x00037c56) main_idle_act2_pane_t1

0x0ad2,	// (0x0003258c) toolbar_button_pane_g10

0xb203,	// (0x0003ccbd) popup_toolbar_window_cp1

0x6947,	// (0x00038401) clock_nsta_pane_cp_t1

0x6947,	// (0x00038401) clock_nsta_pane_cp_t2

0x0001,

0xfabf,	// (0x00041579) clock_nsta_pane_cp_t

0x0636,	// (0x000320f0) navi_navi_volume_pane_cp2_ParamLimits

0x0645,	// (0x000320ff) popup_side_volume_key_window_g1_ParamLimits

0x0651,	// (0x0003210b) popup_side_volume_key_window_g2_ParamLimits

0x0660,	// (0x0003211a) popup_side_volume_key_window_g3_ParamLimits

0xf724,	// (0x000411de) popup_side_volume_key_window_g_ParamLimits

0x12f3,	// (0x00032dad) fep_hwr_aid_pane

0x139c,	// (0x00032e56) bg_fep_hwr_top_pane_g4_ParamLimits

0x6e69,	// (0x00038923) fep_hwr_top_pane_g1_ParamLimits

0x6e7b,	// (0x00038935) fep_hwr_top_pane_g2_ParamLimits

0x13bc,	// (0x00032e76) fep_hwr_top_pane_g3_ParamLimits

0xfb14,	// (0x000415ce) fep_hwr_top_pane_g_ParamLimits

0x13d1,	// (0x00032e8b) fep_hwr_top_text_pane_ParamLimits

0x56db,	// (0x00037195) aid_touch_tab_arrow_arrow_2

0x56e4,	// (0x0003719e) aid_touch_tab_arrow_left_2

0x1307,	// (0x00032dc1) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x133e,	// (0x00032df8) fep_hwr_prediction_pane

0x6fd1,	// (0x00038a8b) fep_vkb_prediction_pane

0xdae0,	// (0x0003f59a) fep_vkb_side_pane_g3_ParamLimits

0xdae0,	// (0x0003f59a) fep_vkb_side_pane_g3

0x1560,	// (0x0003301a) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x1796,	// (0x00033250) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x17a3,	// (0x0003325d) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbc3,	// (0x0004167d) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x1911,	// (0x000333cb) fep_hwr_prediction_pane_g1

0x191b,	// (0x000333d5) fep_hwr_prediction_pane_g2

0x1923,	// (0x000333dd) fep_hwr_prediction_pane_g3

0x192b,	// (0x000333e5) fep_hwr_prediction_pane_g4

0x0003,

0xfccd,	// (0x00041787) fep_hwr_prediction_pane_g

0x7f44,	// (0x000399fe) fep_vkb_prediction_pane_g1

0x7f4e,	// (0x00039a08) fep_vkb_prediction_pane_g2

0x7f56,	// (0x00039a10) fep_vkb_prediction_pane_g3

0x7f5e,	// (0x00039a18) fep_vkb_prediction_pane_g4

0x0003,

0xfcd6,	// (0x00041790) fep_vkb_prediction_pane_g

0x0e67,	// (0x00032921) slider_set_pane_g3

0x0e7b,	// (0x00032935) slider_set_pane_g4

0x0e93,	// (0x0003294d) slider_set_pane_g5

0x0e67,	// (0x00032921) slider_set_pane_g6

0x0ea9,	// (0x00032963) slider_set_pane_g7

0x5dd4,	// (0x0003788e) slider_form_pane_g3

0x5ddd,	// (0x00037897) slider_form_pane_g4

0x5de5,	// (0x0003789f) slider_form_pane_g5

0x5dd4,	// (0x0003788e) slider_form_pane_g6

0xd624,	// (0x0003f0de) slider_form_pane_g7

0x646a,	// (0x00037f24) slider_set_pane_vc_g3

0x6473,	// (0x00037f2d) slider_set_pane_vc_g4

0x647c,	// (0x00037f36) slider_set_pane_vc_g5

0x646a,	// (0x00037f24) slider_set_pane_vc_g6

0x6485,	// (0x00037f3f) slider_set_pane_vc_g7

0x646a,	// (0x00037f24) slider_form_pane_vc_g1

0x6473,	// (0x00037f2d) slider_form_pane_vc_g2

0x647c,	// (0x00037f36) slider_form_pane_vc_g3

0x646a,	// (0x00037f24) slider_form_pane_vc_g4

0x663a,	// (0x000380f4) slider_form_pane_vc_g5

0x0004,

0xfa98,	// (0x00041552) slider_form_pane_vc_g

0xe03d,	// (0x0003faf7) main_idle_act3_pane

0x7f66,	// (0x00039a20) ai3_links_pane

0xdd57,	// (0x0003f811) popup_ai3_data_window_ParamLimits

0xdd57,	// (0x0003f811) popup_ai3_data_window

0xe03d,	// (0x0003faf7) grid_ai3_links_pane

0xdd75,	// (0x0003f82f) cell_ai3_links_pane_ParamLimits

0xdd75,	// (0x0003f82f) cell_ai3_links_pane

0x7fa7,	// (0x00039a61) bg_popup_sub_pane_cp11

0x7fb4,	// (0x00039a6e) cell_ai3_links_pane_g1

0xe03d,	// (0x0003faf7) bg_popup_sub_pane_cp12

0x7fd9,	// (0x00039a93) heading_ai3_data_pane

0x7fe1,	// (0x00039a9b) list_ai3_gene_pane

0x7fed,	// (0x00039aa7) popup_ai3_data_window_g1

0x7ff5,	// (0x00039aaf) heading_ai3_data_pane_g1

0x7ffd,	// (0x00039ab7) heading_ai3_data_pane_t1

0x800b,	// (0x00039ac5) list_double_ai3_gene_pane_ParamLimits

0x800b,	// (0x00039ac5) list_double_ai3_gene_pane

0x8018,	// (0x00039ad2) list_single_ai3_gene_pane_ParamLimits

0x8018,	// (0x00039ad2) list_single_ai3_gene_pane

0x6dbe,	// (0x00038878) list_highlight_pane_cp7_ParamLimits

0x6dbe,	// (0x00038878) list_highlight_pane_cp7

0x8025,	// (0x00039adf) list_single_a13_gene_pane_t1_ParamLimits

0x8025,	// (0x00039adf) list_single_a13_gene_pane_t1

0x803c,	// (0x00039af6) list_single_ai3_gene_pane_g1

0x8045,	// (0x00039aff) list_single_ai3_gene_pane_g2

0x0001,

0xfcdf,	// (0x00041799) list_single_ai3_gene_pane_g

0x804d,	// (0x00039b07) list_double_ai3_gene_pane_g1_ParamLimits

0x804d,	// (0x00039b07) list_double_ai3_gene_pane_g1

0x8059,	// (0x00039b13) list_double_ai3_gene_pane_t1_ParamLimits

0x8059,	// (0x00039b13) list_double_ai3_gene_pane_t1

0x8075,	// (0x00039b2f) list_double_ai3_gene_pane_t2_ParamLimits

0x8075,	// (0x00039b2f) list_double_ai3_gene_pane_t2

0x808a,	// (0x00039b44) list_double_ai3_gene_pane_t3_ParamLimits

0x808a,	// (0x00039b44) list_double_ai3_gene_pane_t3

0x0002,

0xfce4,	// (0x0004179e) list_double_ai3_gene_pane_t_ParamLimits

0xfce4,	// (0x0004179e) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x2ef7,	// (0x000349b1) aid_size_min_col_2

0xdd41,	// (0x0003f7fb) aid_size_min_msg_ParamLimits

0xdd41,	// (0x0003f7fb) aid_size_min_msg

0xdaf4,	// (0x0003f5ae) fep_vkb_top_text_pane_g2_ParamLimits

0xdaf4,	// (0x0003f5ae) fep_vkb_top_text_pane_g2

0x0001,

0xfb44,	// (0x000415fe) fep_vkb_top_text_pane_g_ParamLimits

0xfb44,	// (0x000415fe) fep_vkb_top_text_pane_g

0xe03d,	// (0x0003faf7) main_hc_apps_shell_pane

0x80a7,	// (0x00039b61) grid_hc_apps_pane_ParamLimits

0x80a7,	// (0x00039b61) grid_hc_apps_pane

0x80b6,	// (0x00039b70) list_hc_apps_pane

0x80be,	// (0x00039b78) scroll_pane_cp37_ParamLimits

0x80be,	// (0x00039b78) scroll_pane_cp37

0xdd8f,	// (0x0003f849) cell_hc_apps_pane_ParamLimits

0xdd8f,	// (0x0003f849) cell_hc_apps_pane

0xde59,	// (0x0003f913) cell_hc_apps_pane_g1_ParamLimits

0xde59,	// (0x0003f913) cell_hc_apps_pane_g1

0x81b3,	// (0x00039c6d) cell_hc_apps_pane_g2_ParamLimits

0x81b3,	// (0x00039c6d) cell_hc_apps_pane_g2

0x81cf,	// (0x00039c89) cell_hc_apps_pane_g3_ParamLimits

0x81cf,	// (0x00039c89) cell_hc_apps_pane_g3

0x0002,

0xfceb,	// (0x000417a5) cell_hc_apps_pane_g_ParamLimits

0xfceb,	// (0x000417a5) cell_hc_apps_pane_g

0xde86,	// (0x0003f940) cell_hc_apps_pane_t1_ParamLimits

0xde86,	// (0x0003f940) cell_hc_apps_pane_t1

0x2544,	// (0x00033ffe) grid_highlight_pane_cp10_ParamLimits

0x2544,	// (0x00033ffe) grid_highlight_pane_cp10

0xdec6,	// (0x0003f980) list_single_hc_apps_pane_ParamLimits

0xdec6,	// (0x0003f980) list_single_hc_apps_pane

0xdf00,	// (0x0003f9ba) list_single_hc_apps_pane_g1

0xbe51,	// (0x0003d90b) list_single_hc_apps_pane_g2

0x0001,

0xfcf2,	// (0x000417ac) list_single_hc_apps_pane_g

0xbe6a,	// (0x0003d924) list_single_hc_apps_pane_g2_copy1

0xbe86,	// (0x0003d940) list_single_hc_apps_pane_t1

0x22ba,	// (0x00033d74) bg_set_opt_pane_cp_ParamLimits

0xf4e0,	// (0x00040f9a) setting_slider_pane_t1_ParamLimits

0xf4f6,	// (0x00040fb0) setting_slider_pane_t2_ParamLimits

0xf510,	// (0x00040fca) setting_slider_pane_t3_ParamLimits

0xf576,	// (0x00041030) setting_slider_pane_t_ParamLimits

0xf528,	// (0x00040fe2) slider_set_pane_ParamLimits

0x0970,	// (0x0003242a) control_pane_g5_ParamLimits

0x0970,	// (0x0003242a) control_pane_g5

0x5bf5,	// (0x000376af) slider_set_pane_g1_ParamLimits

0x0e5b,	// (0x00032915) slider_set_pane_g2_ParamLimits

0x0e67,	// (0x00032921) slider_set_pane_g3_ParamLimits

0x0e7b,	// (0x00032935) slider_set_pane_g4_ParamLimits

0x0e93,	// (0x0003294d) slider_set_pane_g5_ParamLimits

0x0e67,	// (0x00032921) slider_set_pane_g6_ParamLimits

0x0ea9,	// (0x00032963) slider_set_pane_g7_ParamLimits

0xf96b,	// (0x00041425) slider_set_pane_g_ParamLimits

0x37ef,	// (0x000352a9) navi_icon_text_pane_ParamLimits

0xcdd6,	// (0x0003e890) aid_fill_nsta_2_ParamLimits

0xce0f,	// (0x0003e8c9) aid_touch_tab_arrow_left_ParamLimits

0xce23,	// (0x0003e8dd) aid_touch_tab_arrow_right_ParamLimits

0xcebe,	// (0x0003e978) clock_nsta_pane_ParamLimits

0xd373,	// (0x0003ee2d) navi_icon_pane_g1_ParamLimits

0xd37f,	// (0x0003ee39) navi_text_pane_t1_ParamLimits

0xd87c,	// (0x0003f336) navi_icon_text_pane_g1_ParamLimits

0xd888,	// (0x0003f342) navi_icon_text_pane_t1_ParamLimits

0xdf00,	// (0x0003f9ba) list_single_hc_apps_pane_g1_ParamLimits

0xbe51,	// (0x0003d90b) list_single_hc_apps_pane_g2_ParamLimits

0xfcf2,	// (0x000417ac) list_single_hc_apps_pane_g_ParamLimits

0xbe6a,	// (0x0003d924) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xbe86,	// (0x0003d940) list_single_hc_apps_pane_t1_ParamLimits

0xade0,	// (0x0003c89a) popup_toolbar2_fixed_window_ParamLimits

0xade0,	// (0x0003c89a) popup_toolbar2_fixed_window

0xcd3b,	// (0x0003e7f5) popup_toolbar2_float_window

0xe03d,	// (0x0003faf7) bg_popup_sub_pane_cp27

0x8289,	// (0x00039d43) grid_toolbar2_float_pane

0xe03d,	// (0x0003faf7) bg_popup_sub_pane_cp26

0x8289,	// (0x00039d43) grid_toolbar2_fixed_pane

0xdf19,	// (0x0003f9d3) cell_toolbar2_fixed_pane_ParamLimits

0xdf19,	// (0x0003f9d3) cell_toolbar2_fixed_pane

0xdf36,	// (0x0003f9f0) cell_toolbar2_fixed_pane_g1

0x82aa,	// (0x00039d64) toolbar2_fixed_button_pane

0x4836,	// (0x000362f0) toolbar2_fixed_button_pane_g1

0x4846,	// (0x00036300) toolbar2_fixed_button_pane_g2

0x483e,	// (0x000362f8) toolbar2_fixed_button_pane_g3

0x4856,	// (0x00036310) toolbar2_fixed_button_pane_g4

0x484e,	// (0x00036308) toolbar2_fixed_button_pane_g5

0x485e,	// (0x00036318) toolbar2_fixed_button_pane_g6

0x4866,	// (0x00036320) toolbar2_fixed_button_pane_g7

0x4876,	// (0x00036330) toolbar2_fixed_button_pane_g8

0x486e,	// (0x00036328) toolbar2_fixed_button_pane_g9

0x0008,

0xf86d,	// (0x00041327) toolbar2_fixed_button_pane_g

0x82b2,	// (0x00039d6c) cell_toolbar2_float_pane_ParamLimits

0x82b2,	// (0x00039d6c) cell_toolbar2_float_pane

0x82c3,	// (0x00039d7d) cell_toolbar2_float_pane_g1

0x82aa,	// (0x00039d64) toolbar2_fixed_button_pane_cp

0xd9dc,	// (0x0003f496) fep_vkb_accented_list_pane_ParamLimits

0xd9dc,	// (0x0003f496) fep_vkb_accented_list_pane

0x1540,	// (0x00032ffa) bg_popup_fep_shadow_pane_g9

0x3973,	// (0x0003542d) bg_popup_fep_shadow_pane_cp3

0x2caa,	// (0x00034764) list_accented_list_pane

0x82cc,	// (0x00039d86) list_single_accented_list_pane_ParamLimits

0x82cc,	// (0x00039d86) list_single_accented_list_pane

0x3973,	// (0x0003542d) list_highlight_pane_cp10

0x82dd,	// (0x00039d97) list_single_accented_list_pane_t1

0xcc57,	// (0x0003e711) popup_slider_window_ParamLimits

0xcc57,	// (0x0003e711) popup_slider_window

0x7f25,	// (0x000399df) aid_indentation_list_msg

0xe0a8,	// (0x0003fb62) bg_popup_window_pane_cp19

0x8417,	// (0x00039ed1) popup_slider_window_g1

0x8433,	// (0x00039eed) popup_slider_window_g2

0x844f,	// (0x00039f09) popup_slider_window_g3

0x0005,

0xfcf7,	// (0x000417b1) popup_slider_window_g

0x84ab,	// (0x00039f65) popup_slider_window_t1

0x851f,	// (0x00039fd9) small_volume_slider_vertical_pane

0x6df9,	// (0x000388b3) small_volume_slider_vertical_pane_g1

0x6df9,	// (0x000388b3) small_volume_slider_vertical_pane_g2

0x853b,	// (0x00039ff5) small_volume_slider_vertical_pane_g3

0x0002,

0xfd09,	// (0x000417c3) small_volume_slider_vertical_pane_g

0xad4a,	// (0x0003c804) area_side_right_pane_ParamLimits

0xad4a,	// (0x0003c804) area_side_right_pane

0xbeb4,	// (0x0003d96e) aid_size_side_button_ParamLimits

0xbeb4,	// (0x0003d96e) aid_size_side_button

0xbecd,	// (0x0003d987) grid_sctrl_middle_pane_ParamLimits

0xbecd,	// (0x0003d987) grid_sctrl_middle_pane

0x1967,	// (0x00033421) sctrl_sk_bottom_pane

0x1978,	// (0x00033432) sctrl_sk_top_pane

0x198a,	// (0x00033444) aid_touch_sctrl_top

0x1997,	// (0x00033451) bg_sctrl_sk_pane_ParamLimits

0x1997,	// (0x00033451) bg_sctrl_sk_pane

0x19a5,	// (0x0003345f) sctrl_sk_top_pane_g1

0x19b2,	// (0x0003346c) sctrl_sk_top_pane_t1

0x198a,	// (0x00033444) aid_touch_sctrl_bottom

0x1997,	// (0x00033451) bg_sctrl_sk_pane_cp_ParamLimits

0x1997,	// (0x00033451) bg_sctrl_sk_pane_cp

0x19cd,	// (0x00033487) sctrl_sk_bottom_pane_g1

0x19b2,	// (0x0003346c) sctrl_sk_bottom_pane_t1

0xbee7,	// (0x0003d9a1) cell_sctrl_middle_pane_ParamLimits

0xbee7,	// (0x0003d9a1) cell_sctrl_middle_pane

0xbefa,	// (0x0003d9b4) aid_touch_sctrl_middle_ParamLimits

0xbefa,	// (0x0003d9b4) aid_touch_sctrl_middle

0xbf07,	// (0x0003d9c1) bg_sctrl_middle_pane_ParamLimits

0xbf07,	// (0x0003d9c1) bg_sctrl_middle_pane

0x2047,	// (0x00033b01) cell_sctrl_middle_pane_g1_ParamLimits

0x2047,	// (0x00033b01) cell_sctrl_middle_pane_g1

0xbf15,	// (0x0003d9cf) cell_sctrl_middle_pane_g2_ParamLimits

0xbf15,	// (0x0003d9cf) cell_sctrl_middle_pane_g2

0x0001,

0xfd15,	// (0x000417cf) cell_sctrl_middle_pane_g_ParamLimits

0xfd15,	// (0x000417cf) cell_sctrl_middle_pane_g

0x4836,	// (0x000362f0) bg_sctrl_middle_pane_g1

0x483e,	// (0x000362f8) bg_sctrl_middle_pane_g2

0x4846,	// (0x00036300) bg_sctrl_middle_pane_g3

0x484e,	// (0x00036308) bg_sctrl_middle_pane_g4

0x4856,	// (0x00036310) bg_sctrl_middle_pane_g5

0x485e,	// (0x00036318) bg_sctrl_middle_pane_g6

0x4866,	// (0x00036320) bg_sctrl_middle_pane_g7

0x486e,	// (0x00036328) bg_sctrl_middle_pane_g8

0x0007,

0xfd1a,	// (0x000417d4) bg_sctrl_middle_pane_g

0x4876,	// (0x00036330) bg_sctrl_middle_pane_g8_copy1

0x4836,	// (0x000362f0) bg_sctrl_sk_pane_g1

0x4846,	// (0x00036300) bg_sctrl_sk_pane_g2

0x483e,	// (0x000362f8) bg_sctrl_sk_pane_g3

0x0008,

0xf86d,	// (0x00041327) bg_sctrl_sk_pane_g

0x2a70,	// (0x0003452a) aid_size_touch_scroll_bar

0x4856,	// (0x00036310) bg_sctrl_sk_pane_g4

0x484e,	// (0x00036308) bg_sctrl_sk_pane_g5

0x485e,	// (0x00036318) bg_sctrl_sk_pane_g6

0x4866,	// (0x00036320) bg_sctrl_sk_pane_g7

0x4876,	// (0x00036330) bg_sctrl_sk_pane_g8

0x486e,	// (0x00036328) bg_sctrl_sk_pane_g9

0x3da3,	// (0x0003585d) popup_fep_china_hwr2_fs_candidate_window

0xc713,	// (0x0003e1cd) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xc713,	// (0x0003e1cd) popup_fep_china_hwr2_fs_control_window

0x1560,	// (0x0003301a) sctrl_sk_top_pane_g2

0x0001,

0xfd10,	// (0x000417ca) sctrl_sk_top_pane_g

0xe160,	// (0x0003fc1a) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe160,	// (0x0003fc1a) aid_fep_china_hwr2_fs_cell

0xe176,	// (0x0003fc30) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe176,	// (0x0003fc30) bg_popup_fep_shadow_pane_cp4

0xe18d,	// (0x0003fc47) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe18d,	// (0x0003fc47) bg_popup_fep_shadow_pane_cp5

0xe19f,	// (0x0003fc59) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe19f,	// (0x0003fc59) popup_fep_china_hwr2_fs_control_bar_grid

0xe1b3,	// (0x0003fc6d) popup_fep_china_hwr2_fs_control_funtion_grid

0x859a,	// (0x0003a054) aid_fep_china_hwr2_fs_candi_cell

0xe03d,	// (0x0003faf7) bg_popup_fep_shadow_pane_cp6

0x85a4,	// (0x0003a05e) popup_fep_china_hwr2_fs_candidate_grid

0xe1bb,	// (0x0003fc75) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe1bb,	// (0x0003fc75) cell_fep_china_hwr2_fs_funtion_grid

0x6df9,	// (0x000388b3) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x85c6,	// (0x0003a080) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x85c6,	// (0x0003a080) cell_fep_china_hwr2_fs_funtion_grid_g1

0x85d4,	// (0x0003a08e) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x85d4,	// (0x0003a08e) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd2b,	// (0x000417e5) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd2b,	// (0x000417e5) cell_fep_china_hwr2_fs_funtion_grid_g

0xe1d3,	// (0x0003fc8d) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe1d3,	// (0x0003fc8d) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe1e8,	// (0x0003fca2) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe1e8,	// (0x0003fca2) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd30,	// (0x000417ea) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd30,	// (0x000417ea) cell_fep_china_hwr2_fs_funtion_grid_t

0x861b,	// (0x0003a0d5) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x8623,	// (0x0003a0dd) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x862b,	// (0x0003a0e5) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd35,	// (0x000417ef) popup_fep_china_hwr2_fs_control_bar_grid_g

0x8633,	// (0x0003a0ed) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x8633,	// (0x0003a0ed) cell_fep_china_hwr2_fs_candidate_grid

0x8652,	// (0x0003a10c) popup_fep_china_hwr2_fs_candidate_grid_g20

0x865a,	// (0x0003a114) popup_fep_china_hwr2_fs_candidate_grid_g21

0x6df9,	// (0x000388b3) cell_fep_china_hwr2_fs_candidate_grid_g1

0x6df9,	// (0x000388b3) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb49,	// (0x00041603) cell_fep_china_hwr2_fs_candidate_grid_g

0x8662,	// (0x0003a11c) cell_fep_china_hwr2_fs_candidate_grid_t1

0x4412,	// (0x00035ecc) clock_nsta_pane_cp_24_ParamLimits

0x4412,	// (0x00035ecc) clock_nsta_pane_cp_24

0x4492,	// (0x00035f4c) indicator_nsta_pane_cp_24_ParamLimits

0x4492,	// (0x00035f4c) indicator_nsta_pane_cp_24

0x5533,	// (0x00036fed) heading_pane_g1

0x0001,

0xf8d2,	// (0x0004138c) heading_pane_g

0x5fe3,	// (0x00037a9d) grid_sct_catagory_button_pane

0x6015,	// (0x00037acf) scroll_pane_cp5_ParamLimits

0x6ab8,	// (0x00038572) button_value_adjust_pane_cp5_ParamLimits

0x6ab8,	// (0x00038572) button_value_adjust_pane_cp5

0x6b95,	// (0x0003864f) form2_midp_time_pane_ParamLimits

0x8670,	// (0x0003a12a) cell_sct_catagory_button_pane_ParamLimits

0x8670,	// (0x0003a12a) cell_sct_catagory_button_pane

0x6dbe,	// (0x00038878) bg_button_pane_cp01_ParamLimits

0x6dbe,	// (0x00038878) bg_button_pane_cp01

0x6df9,	// (0x000388b3) cell_sct_catagory_button_pane_g1

0xccd8,	// (0x0003e792) popup_tb_extension_window

0xe204,	// (0x0003fcbe) aid_size_cell_ext_ParamLimits

0xe204,	// (0x0003fcbe) aid_size_cell_ext

0x28b2,	// (0x0003436c) bg_tb_trans_pane_cp1_ParamLimits

0x28b2,	// (0x0003436c) bg_tb_trans_pane_cp1

0xe22a,	// (0x0003fce4) grid_tb_ext_pane_ParamLimits

0xe22a,	// (0x0003fce4) grid_tb_ext_pane

0xe26a,	// (0x0003fd24) cell_tb_ext_pane_ParamLimits

0xe26a,	// (0x0003fd24) cell_tb_ext_pane

0xe292,	// (0x0003fd4c) cell_tb_ext_pane_g1_ParamLimits

0xe292,	// (0x0003fd4c) cell_tb_ext_pane_g1

0x8706,	// (0x0003a1c0) cell_tb_ext_pane_t1

0x2544,	// (0x00033ffe) list_highlight_pane_cp11_ParamLimits

0x2544,	// (0x00033ffe) list_highlight_pane_cp11

0xf469,	// (0x00040f23) popup_uni_indicator_window_ParamLimits

0xf469,	// (0x00040f23) popup_uni_indicator_window

0x2b41,	// (0x000345fb) bg_popup_sub_pane_cp14

0x8721,	// (0x0003a1db) list_uniindi_pane

0x872d,	// (0x0003a1e7) uniindi_top_pane

0x2544,	// (0x00033ffe) bg_uniindi_top_pane

0x874e,	// (0x0003a208) uniindi_top_pane_g1

0x8764,	// (0x0003a21e) uniindi_top_pane_g2

0x0003,

0xfd3c,	// (0x000417f6) uniindi_top_pane_g

0x878e,	// (0x0003a248) uniindi_top_pane_t1

0x87ba,	// (0x0003a274) list_single_uniindi_pane_ParamLimits

0x87ba,	// (0x0003a274) list_single_uniindi_pane

0x6df9,	// (0x000388b3) bg_uniindi_top_pane_g1

0x87cc,	// (0x0003a286) list_single_uniindi_pane_g1

0x87df,	// (0x0003a299) list_single_uniindi_pane_t1

0xf350,	// (0x00040e0a) control_bg_pane

0x8804,	// (0x0003a2be) bg_sctrl_sk_pane_cp1

0x880d,	// (0x0003a2c7) bg_sctrl_sk_pane_cp2

0x8816,	// (0x0003a2d0) control_bg_pane_g1

0x881f,	// (0x0003a2d9) control_bg_pane_g2

0x0001,

0xfd45,	// (0x000417ff) control_bg_pane_g

0x68da,	// (0x00038394) cell_indicator_nsta_pane_g1_ParamLimits

0xd7d5,	// (0x0003f28f) cell_indicator_nsta_pane_g2_ParamLimits

0xfaad,	// (0x00041567) cell_indicator_nsta_pane_g_ParamLimits

0x12d2,	// (0x00032d8c) form2_midp_time_pane_t1_ParamLimits

0xc689,	// (0x0003e143) main_idle_act4_pane_ParamLimits

0xc689,	// (0x0003e143) main_idle_act4_pane

0xccd8,	// (0x0003e792) popup_tb_extension_window_ParamLimits

0xe252,	// (0x0003fd0c) tb_ext_find_pane_ParamLimits

0xe252,	// (0x0003fd0c) tb_ext_find_pane

0x8828,	// (0x0003a2e2) ai_gene_pane_1_cp1

0x3abc,	// (0x00035576) ai_gene_pane_2_cp1

0x8830,	// (0x0003a2ea) list_single_idle_plugin_calendar_pane

0x8839,	// (0x0003a2f3) list_single_idle_plugin_notification_pane

0x8842,	// (0x0003a2fc) list_single_idle_plugin_player_pane

0xe2af,	// (0x0003fd69) list_single_idle_plugin_shortcut_pane_ParamLimits

0xe2af,	// (0x0003fd69) list_single_idle_plugin_shortcut_pane

0xe2d7,	// (0x0003fd91) main_idle_act4_pane_t1

0xe2ef,	// (0x0003fda9) main_idle_act4_pane_t2

0x0001,

0xfd4a,	// (0x00041804) main_idle_act4_pane_t

0xe307,	// (0x0003fdc1) middle_sk_idle_act4_pane_ParamLimits

0xe307,	// (0x0003fdc1) middle_sk_idle_act4_pane

0xe323,	// (0x0003fddd) popup_clock_digital_analogue_window_cp2

0xe34a,	// (0x0003fe04) shortcut_wheel_idle_act4_pane_ParamLimits

0xe34a,	// (0x0003fe04) shortcut_wheel_idle_act4_pane

0x6df9,	// (0x000388b3) shortcut_wheel_idle_act4_pane_g1

0x6df9,	// (0x000388b3) shortcut_wheel_idle_act4_pane_g2

0x6df9,	// (0x000388b3) shortcut_wheel_idle_act4_pane_g3

0x6df9,	// (0x000388b3) shortcut_wheel_idle_act4_pane_g4

0x6df9,	// (0x000388b3) shortcut_wheel_idle_act4_pane_g5

0x88d5,	// (0x0003a38f) shortcut_wheel_idle_act4_pane_g6

0x88dd,	// (0x0003a397) shortcut_wheel_idle_act4_pane_g7

0x88e5,	// (0x0003a39f) shortcut_wheel_idle_act4_pane_g8

0x88ed,	// (0x0003a3a7) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd4f,	// (0x00041809) shortcut_wheel_idle_act4_pane_g

0xe00d,	// (0x0003fac7) middle_sk_idle_act4_pane_g1_ParamLimits

0xe00d,	// (0x0003fac7) middle_sk_idle_act4_pane_g1

0xe3c7,	// (0x0003fe81) middle_sk_idle_act4_pane_g2_ParamLimits

0xe3c7,	// (0x0003fe81) middle_sk_idle_act4_pane_g2

0x0001,

0xfd72,	// (0x0004182c) middle_sk_idle_act4_pane_g_ParamLimits

0xfd72,	// (0x0004182c) middle_sk_idle_act4_pane_g

0xe3df,	// (0x0003fe99) middle_sk_idle_act4_pane_t1_ParamLimits

0xe3df,	// (0x0003fe99) middle_sk_idle_act4_pane_t1

0xe40e,	// (0x0003fec8) grid_ai_shortcut_pane_ParamLimits

0xe40e,	// (0x0003fec8) grid_ai_shortcut_pane

0xe42b,	// (0x0003fee5) list_highlight_pane_cp16_ParamLimits

0xe42b,	// (0x0003fee5) list_highlight_pane_cp16

0xe438,	// (0x0003fef2) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xe438,	// (0x0003fef2) list_single_idle_plugin_shortcut_pane_g1

0xe444,	// (0x0003fefe) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xe444,	// (0x0003fefe) list_single_idle_plugin_shortcut_pane_g2

0xe462,	// (0x0003ff1c) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xe462,	// (0x0003ff1c) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd77,	// (0x00041831) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd77,	// (0x00041831) list_single_idle_plugin_shortcut_pane_g

0xe477,	// (0x0003ff31) cell_ai_shortcut_pane_ParamLimits

0xe477,	// (0x0003ff31) cell_ai_shortcut_pane

0xe48d,	// (0x0003ff47) cell_ai_shortcut_pane_g1_ParamLimits

0xe48d,	// (0x0003ff47) cell_ai_shortcut_pane_g1

0x8828,	// (0x0003a2e2) ai_gene_pane_1_cp2

0x8a3f,	// (0x0003a4f9) ai_gene_pane_2_cp2

0x8a47,	// (0x0003a501) list_highlight_pane_cp15

0x8a50,	// (0x0003a50a) list_single_idle_plugin_calendar_pane_g1

0x8a47,	// (0x0003a501) list_highlight_pane_cp17

0x8a58,	// (0x0003a512) list_single_idle_plugin_calendar_pane_g1_copy1

0x8a60,	// (0x0003a51a) list_single_idle_plugin_player_pane_g1

0x624a,	// (0x00037d04) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd7e,	// (0x00041838) list_single_idle_plugin_player_pane_g

0x8a68,	// (0x0003a522) list_single_idle_plugin_player_pane_t1

0x8a76,	// (0x0003a530) list_single_idle_plugin_player_pane_t2

0x8a84,	// (0x0003a53e) list_single_idle_plugin_player_pane_t3

0x8a92,	// (0x0003a54c) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd83,	// (0x0004183d) list_single_idle_plugin_player_pane_t

0x8aa0,	// (0x0003a55a) wait_bar_pane_cp15

0x8aa8,	// (0x0003a562) grid_ai_notification_pane

0x624a,	// (0x00037d04) list_single_idle_plugin_notification_pane_g1

0xe4af,	// (0x0003ff69) cell_ai_notification_pane_ParamLimits

0xe4af,	// (0x0003ff69) cell_ai_notification_pane

0x8abe,	// (0x0003a578) cell_ai_notification_pane_g1

0x8ac6,	// (0x0003a580) cell_ai_notification_pane_t1

0xe4bc,	// (0x0003ff76) tb_ext_find_button_pane

0xe4c4,	// (0x0003ff7e) tb_ext_find_pane_g1

0xe4cc,	// (0x0003ff86) tb_ext_find_pane_t1

0x335a,	// (0x00034e14) tb_ext_find_button_pane_g1

0x8af2,	// (0x0003a5ac) tb_ext_find_button_pane_g2

0x0001,

0xfd8c,	// (0x00041846) tb_ext_find_button_pane_g

0xe2d7,	// (0x0003fd91) main_idle_act4_pane_t1_ParamLimits

0xe2ef,	// (0x0003fda9) main_idle_act4_pane_t2_ParamLimits

0xfd4a,	// (0x00041804) main_idle_act4_pane_t_ParamLimits

0xe323,	// (0x0003fddd) popup_clock_digital_analogue_window_cp2_ParamLimits

0xe33a,	// (0x0003fdf4) sat_plugin_idle_act4_pane_ParamLimits

0xe33a,	// (0x0003fdf4) sat_plugin_idle_act4_pane

0xe4da,	// (0x0003ff94) sat_plugin_idle_act4_pane_t1_ParamLimits

0xe4da,	// (0x0003ff94) sat_plugin_idle_act4_pane_t1

0xe4f2,	// (0x0003ffac) sat_plugin_idle_act4_pane_t2_ParamLimits

0xe4f2,	// (0x0003ffac) sat_plugin_idle_act4_pane_t2

0xe50a,	// (0x0003ffc4) sat_plugin_idle_act4_pane_t3_ParamLimits

0xe50a,	// (0x0003ffc4) sat_plugin_idle_act4_pane_t3

0xe522,	// (0x0003ffdc) sat_plugin_idle_act4_pane_t4_ParamLimits

0xe522,	// (0x0003ffdc) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd91,	// (0x0004184b) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd91,	// (0x0004184b) sat_plugin_idle_act4_pane_t

0xf415,	// (0x00040ecf) popup_battery_window_ParamLimits

0xf415,	// (0x00040ecf) popup_battery_window

0x2544,	// (0x00033ffe) bg_popup_sub_pane_cp25_ParamLimits

0x2544,	// (0x00033ffe) bg_popup_sub_pane_cp25

0x8b47,	// (0x0003a601) popup_battery_window_g1_ParamLimits

0x8b47,	// (0x0003a601) popup_battery_window_g1

0x8b53,	// (0x0003a60d) popup_battery_window_t1_ParamLimits

0x8b53,	// (0x0003a60d) popup_battery_window_t1

0x8b65,	// (0x0003a61f) popup_battery_window_t2_ParamLimits

0x8b65,	// (0x0003a61f) popup_battery_window_t2

0x0001,

0xfd9a,	// (0x00041854) popup_battery_window_t_ParamLimits

0xfd9a,	// (0x00041854) popup_battery_window_t

0xc599,	// (0x0003e053) midp_canvas_pane_ParamLimits

0xc5f4,	// (0x0003e0ae) midp_keypad_pane_ParamLimits

0xc5f4,	// (0x0003e0ae) midp_keypad_pane

0x3cf9,	// (0x000357b3) main_midp_pane_ParamLimits

0x6965,	// (0x0003841f) signal_pane_g2_cp_ParamLimits

0xe53a,	// (0x0003fff4) aid_size_cell_midp_keypad_ParamLimits

0xe53a,	// (0x0003fff4) aid_size_cell_midp_keypad

0xe558,	// (0x00040012) midp_keyp_game_grid_pane_ParamLimits

0xe558,	// (0x00040012) midp_keyp_game_grid_pane

0xe57f,	// (0x00040039) midp_keyp_rocker_pane_ParamLimits

0xe57f,	// (0x00040039) midp_keyp_rocker_pane

0xe5c4,	// (0x0004007e) midp_keyp_sk_left_pane_ParamLimits

0xe5c4,	// (0x0004007e) midp_keyp_sk_left_pane

0xe618,	// (0x000400d2) midp_keyp_sk_right_pane_ParamLimits

0xe618,	// (0x000400d2) midp_keyp_sk_right_pane

0xe03d,	// (0x0003faf7) bg_button_pane_cp03

0xe66c,	// (0x00040126) midp_keyp_sk_left_pane_g1

0xe03d,	// (0x0003faf7) bg_button_pane_cp04

0xe66c,	// (0x00040126) midp_keyp_sk_right_pane_g1

0x6df9,	// (0x000388b3) midp_keyp_rocker_pane_g1

0xe675,	// (0x0004012f) keyp_game_cell_pane_ParamLimits

0xe675,	// (0x0004012f) keyp_game_cell_pane

0xe03d,	// (0x0003faf7) bg_button_pane_cp02

0xe69b,	// (0x00040155) keyp_game_cell_pane_g1

0xad8c,	// (0x0003c846) popup_fep_vkb2_window_ParamLimits

0xad8c,	// (0x0003c846) popup_fep_vkb2_window

0xbf21,	// (0x0003d9db) aid_size_cell_vkb2_ParamLimits

0xbf21,	// (0x0003d9db) aid_size_cell_vkb2

0xbf4f,	// (0x0003da09) popup_fep_vkb2_window_g1_ParamLimits

0xbf4f,	// (0x0003da09) popup_fep_vkb2_window_g1

0xbf9f,	// (0x0003da59) vkb2_area_bottom_pane_ParamLimits

0xbf9f,	// (0x0003da59) vkb2_area_bottom_pane

0xbffb,	// (0x0003dab5) vkb2_area_keypad_pane_ParamLimits

0xbffb,	// (0x0003dab5) vkb2_area_keypad_pane

0xc049,	// (0x0003db03) vkb2_area_top_pane_ParamLimits

0xc049,	// (0x0003db03) vkb2_area_top_pane

0xc0cf,	// (0x0003db89) vkb2_top_entry_pane_ParamLimits

0xc0cf,	// (0x0003db89) vkb2_top_entry_pane

0xc0fc,	// (0x0003dbb6) vkb2_top_grid_left_pane_ParamLimits

0xc0fc,	// (0x0003dbb6) vkb2_top_grid_left_pane

0xc11c,	// (0x0003dbd6) vkb2_top_grid_right_pane_ParamLimits

0xc11c,	// (0x0003dbd6) vkb2_top_grid_right_pane

0x1c43,	// (0x000336fd) vkb2_cell_keypad_pane_ParamLimits

0x1c43,	// (0x000336fd) vkb2_cell_keypad_pane

0xc162,	// (0x0003dc1c) vkb2_area_bottom_grid_pane_ParamLimits

0xc162,	// (0x0003dc1c) vkb2_area_bottom_grid_pane

0xc18c,	// (0x0003dc46) vkb2_area_bottom_pane_g1_ParamLimits

0xc18c,	// (0x0003dc46) vkb2_area_bottom_pane_g1

0xc1b2,	// (0x0003dc6c) vkb2_area_bottom_pane_g2_ParamLimits

0xc1b2,	// (0x0003dc6c) vkb2_area_bottom_pane_g2

0xc1e3,	// (0x0003dc9d) vkb2_area_bottom_pane_g3_ParamLimits

0xc1e3,	// (0x0003dc9d) vkb2_area_bottom_pane_g3

0x0002,

0xfd9f,	// (0x00041859) vkb2_area_bottom_pane_g_ParamLimits

0xfd9f,	// (0x00041859) vkb2_area_bottom_pane_g

0x1dd2,	// (0x0003388c) vkb2_top_cell_left_pane_ParamLimits

0x1dd2,	// (0x0003388c) vkb2_top_cell_left_pane

0xe6a4,	// (0x0004015e) vkb2_top_entry_pane_g1_ParamLimits

0xe6a4,	// (0x0004015e) vkb2_top_entry_pane_g1

0xe6b2,	// (0x0004016c) vkb2_top_entry_pane_t1_ParamLimits

0xe6b2,	// (0x0004016c) vkb2_top_entry_pane_t1

0x8cf2,	// (0x0003a7ac) vkb2_top_entry_pane_t2_ParamLimits

0x8cf2,	// (0x0003a7ac) vkb2_top_entry_pane_t2

0x8d0a,	// (0x0003a7c4) vkb2_top_entry_pane_t3_ParamLimits

0x8d0a,	// (0x0003a7c4) vkb2_top_entry_pane_t3

0x0002,

0xfda6,	// (0x00041860) vkb2_top_entry_pane_t_ParamLimits

0xfda6,	// (0x00041860) vkb2_top_entry_pane_t

0xc24d,	// (0x0003dd07) vkb2_top_grid_right_pane_g1_ParamLimits

0xc24d,	// (0x0003dd07) vkb2_top_grid_right_pane_g1

0x1e35,	// (0x000338ef) vkb2_top_grid_right_pane_g2_ParamLimits

0x1e35,	// (0x000338ef) vkb2_top_grid_right_pane_g2

0x1e4d,	// (0x00033907) vkb2_top_grid_right_pane_g3_ParamLimits

0x1e4d,	// (0x00033907) vkb2_top_grid_right_pane_g3

0xc263,	// (0x0003dd1d) vkb2_top_grid_right_pane_g4_ParamLimits

0xc263,	// (0x0003dd1d) vkb2_top_grid_right_pane_g4

0x0003,

0xfdad,	// (0x00041867) vkb2_top_grid_right_pane_g_ParamLimits

0xfdad,	// (0x00041867) vkb2_top_grid_right_pane_g

0x1e7b,	// (0x00033935) vkb2_top_cell_left_pane_g1

0x1e92,	// (0x0003394c) vkb2_cell_keypad_pane_g1_ParamLimits

0x1e92,	// (0x0003394c) vkb2_cell_keypad_pane_g1

0x8d20,	// (0x0003a7da) vkb2_cell_keypad_pane_t1_ParamLimits

0x8d20,	// (0x0003a7da) vkb2_cell_keypad_pane_t1

0x1eb6,	// (0x00033970) vkb2_cell_bottom_grid_pane_ParamLimits

0x1eb6,	// (0x00033970) vkb2_cell_bottom_grid_pane

0x1eef,	// (0x000339a9) vkb2_cell_bottom_grid_pane_g1

0xe36b,	// (0x0003fe25) aid_call2_pane_cp02

0xe373,	// (0x0003fe2d) aid_call_pane_cp02

0xe37b,	// (0x0003fe35) clock_digital_number_pane_cp10

0xe383,	// (0x0003fe3d) clock_digital_number_pane_cp11

0xe38b,	// (0x0003fe45) clock_digital_number_pane_cp12

0xe393,	// (0x0003fe4d) clock_digital_number_pane_cp13

0xe39b,	// (0x0003fe55) clock_digital_separator_pane_cp10

0x335a,	// (0x00034e14) popup_clock_digital_analogue_window_cp2_g1

0x335a,	// (0x00034e14) popup_clock_digital_analogue_window_cp2_g2

0xe3a3,	// (0x0003fe5d) popup_clock_digital_analogue_window_cp2_g3

0x335a,	// (0x00034e14) popup_clock_digital_analogue_window_cp2_g4

0xe3a3,	// (0x0003fe5d) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd62,	// (0x0004181c) popup_clock_digital_analogue_window_cp2_g

0xe3ab,	// (0x0003fe65) popup_clock_digital_analogue_window_cp2_t1

0xe3b9,	// (0x0003fe73) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd6d,	// (0x00041827) popup_clock_digital_analogue_window_cp2_t

0x6df9,	// (0x000388b3) clock_digital_number_pane_cp10_g1

0x6df9,	// (0x000388b3) clock_digital_number_pane_cp10_g2

0x0001,

0xfb49,	// (0x00041603) clock_digital_number_pane_cp10_g

0x6df9,	// (0x000388b3) clock_digital_separator_pane_cp10_g1

0x6df9,	// (0x000388b3) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb49,	// (0x00041603) clock_digital_separator_pane_cp10_g

0x8770,	// (0x0003a22a) uniindi_top_pane_g3

0x8781,	// (0x0003a23b) uniindi_top_pane_g4

0x1cb3,	// (0x0003376d) vkb2_row_keypad_pane_ParamLimits

0x1cb3,	// (0x0003376d) vkb2_row_keypad_pane

0x1f0b,	// (0x000339c5) vkb2_cell_t_keypad_pane_ParamLimits

0x1f0b,	// (0x000339c5) vkb2_cell_t_keypad_pane

0x1f1b,	// (0x000339d5) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x1f1b,	// (0x000339d5) vkb2_cell_t_keypad_pane_cp08

0x1f30,	// (0x000339ea) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x1f30,	// (0x000339ea) vkb2_cell_t_keypad_pane_cp09

0x1f44,	// (0x000339fe) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x1f44,	// (0x000339fe) vkb2_cell_t_keypad_pane_cp01

0x1f55,	// (0x00033a0f) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x1f55,	// (0x00033a0f) vkb2_cell_t_keypad_pane_cp02

0x1f66,	// (0x00033a20) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x1f66,	// (0x00033a20) vkb2_cell_t_keypad_pane_cp03

0x1f77,	// (0x00033a31) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x1f77,	// (0x00033a31) vkb2_cell_t_keypad_pane_cp04

0x1f88,	// (0x00033a42) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x1f88,	// (0x00033a42) vkb2_cell_t_keypad_pane_cp05

0x1f99,	// (0x00033a53) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x1f99,	// (0x00033a53) vkb2_cell_t_keypad_pane_cp06

0x1fac,	// (0x00033a66) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x1fac,	// (0x00033a66) vkb2_cell_t_keypad_pane_cp07

0x1fc1,	// (0x00033a7b) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x1fc1,	// (0x00033a7b) vkb2_cell_t_keypad_pane_cp10

0x1560,	// (0x0003301a) vkb2_cell_t_keypad_pane_g1

0x8d37,	// (0x0003a7f1) vkb2_cell_t_keypad_pane_t1

0xf350,	// (0x00040e0a) popup_grid_graphic2_window

0xe6eb,	// (0x000401a5) aid_size_cell_graphic2_ParamLimits

0xe6eb,	// (0x000401a5) aid_size_cell_graphic2

0xe729,	// (0x000401e3) bg_popup_window_pane_cp21_ParamLimits

0xe729,	// (0x000401e3) bg_popup_window_pane_cp21

0xe737,	// (0x000401f1) graphic2_pages_pane_ParamLimits

0xe737,	// (0x000401f1) graphic2_pages_pane

0xe78f,	// (0x00040249) grid_graphic2_control_pane_ParamLimits

0xe78f,	// (0x00040249) grid_graphic2_control_pane

0xe7d7,	// (0x00040291) grid_graphic2_pane_ParamLimits

0xe7d7,	// (0x00040291) grid_graphic2_pane

0xe862,	// (0x0004031c) cell_graphic2_pane

0xe03d,	// (0x0003faf7) main_comp_mode_pane

0x7fe1,	// (0x00039a9b) list_ai3_gene_pane_ParamLimits

0xe0a8,	// (0x0003fb62) bg_popup_window_pane_cp19_ParamLimits

0x83b5,	// (0x00039e6f) bg_touch_area_indi_pane_ParamLimits

0x83b5,	// (0x00039e6f) bg_touch_area_indi_pane

0x83cb,	// (0x00039e85) bg_touch_area_indi_pane_cp01_ParamLimits

0x83cb,	// (0x00039e85) bg_touch_area_indi_pane_cp01

0x83e3,	// (0x00039e9d) bg_touch_area_indi_pane_cp02_ParamLimits

0x83e3,	// (0x00039e9d) bg_touch_area_indi_pane_cp02

0x83fd,	// (0x00039eb7) bg_touch_area_indi_pane_cp03_ParamLimits

0x83fd,	// (0x00039eb7) bg_touch_area_indi_pane_cp03

0x8417,	// (0x00039ed1) popup_slider_window_g1_ParamLimits

0x8433,	// (0x00039eed) popup_slider_window_g2_ParamLimits

0x844f,	// (0x00039f09) popup_slider_window_g3_ParamLimits

0xfcf7,	// (0x000417b1) popup_slider_window_g_ParamLimits

0x84ab,	// (0x00039f65) popup_slider_window_t1_ParamLimits

0x851f,	// (0x00039fd9) small_volume_slider_vertical_pane_ParamLimits

0xe862,	// (0x0004031c) cell_graphic2_pane_ParamLimits

0xe8c5,	// (0x0004037f) bg_button_pane_cp10_ParamLimits

0xe8c5,	// (0x0004037f) bg_button_pane_cp10

0xe8d8,	// (0x00040392) bg_button_pane_cp11_ParamLimits

0xe8d8,	// (0x00040392) bg_button_pane_cp11

0xe8eb,	// (0x000403a5) graphic2_pages_pane_g1_ParamLimits

0xe8eb,	// (0x000403a5) graphic2_pages_pane_g1

0xe906,	// (0x000403c0) graphic2_pages_pane_g2_ParamLimits

0xe906,	// (0x000403c0) graphic2_pages_pane_g2

0x0001,

0xfdbb,	// (0x00041875) graphic2_pages_pane_g_ParamLimits

0xfdbb,	// (0x00041875) graphic2_pages_pane_g

0xe91e,	// (0x000403d8) graphic2_pages_pane_t1_ParamLimits

0xe91e,	// (0x000403d8) graphic2_pages_pane_t1

0xe936,	// (0x000403f0) cell_graphic2_control_pane_ParamLimits

0xe936,	// (0x000403f0) cell_graphic2_control_pane

0xe952,	// (0x0004040c) cell_graphic2_pane_g1_ParamLimits

0xe952,	// (0x0004040c) cell_graphic2_pane_g1

0xe01b,	// (0x0003fad5) cell_graphic2_pane_g2_ParamLimits

0xe01b,	// (0x0003fad5) cell_graphic2_pane_g2

0xe067,	// (0x0003fb21) cell_graphic2_pane_g3_ParamLimits

0xe067,	// (0x0003fb21) cell_graphic2_pane_g3

0xe028,	// (0x0003fae2) cell_graphic2_pane_g4_ParamLimits

0xe028,	// (0x0003fae2) cell_graphic2_pane_g4

0xe95f,	// (0x00040419) cell_graphic2_pane_g5_ParamLimits

0xe95f,	// (0x00040419) cell_graphic2_pane_g5

0x0004,

0xfdc0,	// (0x0004187a) cell_graphic2_pane_g_ParamLimits

0xfdc0,	// (0x0004187a) cell_graphic2_pane_g

0xe97f,	// (0x00040439) cell_graphic2_pane_t1_ParamLimits

0xe97f,	// (0x00040439) cell_graphic2_pane_t1

0x5527,	// (0x00036fe1) grid_highlight_pane_cp11_ParamLimits

0x5527,	// (0x00036fe1) grid_highlight_pane_cp11

0x2544,	// (0x00033ffe) bg_button_pane_cp05

0xe9b4,	// (0x0004046e) cell_graphic2_control_pane_g1

0x6df9,	// (0x000388b3) bg_touch_area_indi_pane_g1

0x9008,	// (0x0003aac2) aid_cmod_rocker_key_size

0x9012,	// (0x0003aacc) aid_cmode_itu_key_size

0x901c,	// (0x0003aad6) main_cmode_video_pane

0x9026,	// (0x0003aae0) main_comp_mode_itu_pane

0x9032,	// (0x0003aaec) main_comp_mode_rocker_pane

0x903e,	// (0x0003aaf8) cell_cmode_rocker_pane_ParamLimits

0x903e,	// (0x0003aaf8) cell_cmode_rocker_pane

0x9052,	// (0x0003ab0c) cell_cmode_itu_pane_ParamLimits

0x9052,	// (0x0003ab0c) cell_cmode_itu_pane

0x2b41,	// (0x000345fb) bg_button_pane_cp06_ParamLimits

0x2b41,	// (0x000345fb) bg_button_pane_cp06

0x7083,	// (0x00038b3d) cell_cmode_rocker_pane_g1_ParamLimits

0x7083,	// (0x00038b3d) cell_cmode_rocker_pane_g1

0x85c6,	// (0x0003a080) cell_cmode_rocker_pane_g2_ParamLimits

0x85c6,	// (0x0003a080) cell_cmode_rocker_pane_g2

0x0001,

0xfdd0,	// (0x0004188a) cell_cmode_rocker_pane_g_ParamLimits

0xfdd0,	// (0x0004188a) cell_cmode_rocker_pane_g

0xe03d,	// (0x0003faf7) bg_button_pane_cp07

0x9069,	// (0x0003ab23) cell_cmode_itu_pane_g1

0x9072,	// (0x0003ab2c) cell_cmode_itu_pane_t1

0x9080,	// (0x0003ab3a) cell_cmode_itu_pane_t2

0x0001,

0xfdd5,	// (0x0004188f) cell_cmode_itu_pane_t

0x87f4,	// (0x0003a2ae) aid_touch_ctrl_left

0x87fc,	// (0x0003a2b6) aid_touch_ctrl_right

0xe03d,	// (0x0003faf7) compa_mode_pane

0xe9dc,	// (0x00040496) aid_cmod_rocker_key_size_cp

0xe9e6,	// (0x000404a0) aid_cmode_itu_key_size_cp

0x90a2,	// (0x0003ab5c) compa_mode_pane_g1

0x90aa,	// (0x0003ab64) compa_mode_pane_g2

0x90b2,	// (0x0003ab6c) compa_mode_pane_g3

0x0002,

0xfdda,	// (0x00041894) compa_mode_pane_g

0xe9f0,	// (0x000404aa) main_comp_mode_itu_pane_cp

0xe9f8,	// (0x000404b2) main_comp_mode_rocker_pane_cp

0xea00,	// (0x000404ba) cell_cmode_itu_pane_cp_ParamLimits

0xea00,	// (0x000404ba) cell_cmode_itu_pane_cp

0xea15,	// (0x000404cf) cell_cmode_rocker_pane_cp_ParamLimits

0xea15,	// (0x000404cf) cell_cmode_rocker_pane_cp

0x2b41,	// (0x000345fb) bg_button_pane_cp06_cp_ParamLimits

0x2b41,	// (0x000345fb) bg_button_pane_cp06_cp

0x7083,	// (0x00038b3d) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x7083,	// (0x00038b3d) cell_cmode_rocker_pane_g1_cp

0x6df9,	// (0x000388b3) cell_cmode_rocker_pane_g2_cp

0xe03d,	// (0x0003faf7) bg_button_pane_cp07_cp

0xea27,	// (0x000404e1) cell_cmode_itu_pane_g1_cp

0xea30,	// (0x000404ea) cell_cmode_itu_pane_t1_cp

0xea30,	// (0x000404ea) cell_cmode_itu_pane_t2_cp

0xd61c,	// (0x0003f0d6) settings_code_pane_cp2

0x22ba,	// (0x00033d74) bg_popup_window_pane_cp3_ParamLimits

0x2732,	// (0x000341ec) heading_pane_cp3_ParamLimits

0x273e,	// (0x000341f8) listscroll_popup_graphic_pane_ParamLimits

0x12f3,	// (0x00032dad) fep_hwr_aid_pane_ParamLimits

0x198a,	// (0x00033444) aid_touch_sctrl_top_ParamLimits

0x19a5,	// (0x0003345f) sctrl_sk_top_pane_g1_ParamLimits

0x1560,	// (0x0003301a) sctrl_sk_top_pane_g2_ParamLimits

0xfd10,	// (0x000417ca) sctrl_sk_top_pane_g_ParamLimits

0x19b2,	// (0x0003346c) sctrl_sk_top_pane_t1_ParamLimits

0x198a,	// (0x00033444) aid_touch_sctrl_bottom_ParamLimits

0x19b2,	// (0x0003346c) sctrl_sk_bottom_pane_t1_ParamLimits

0x873a,	// (0x0003a1f4) aid_area_touch_clock

0xc091,	// (0x0003db4b) aid_vkb2_area_top_pane_cell_ParamLimits

0xc091,	// (0x0003db4b) aid_vkb2_area_top_pane_cell

0xc13c,	// (0x0003dbf6) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xc13c,	// (0x0003dbf6) aid_vkb2_area_bottom_pane_cell

0x8cc4,	// (0x0003a77e) popup_char_count_window

0x9108,	// (0x0003abc2) popup_char_count_window_g1

0x9111,	// (0x0003abcb) popup_char_count_window_g2

0x911a,	// (0x0003abd4) popup_char_count_window_g3

0x0002,

0xfde1,	// (0x0004189b) popup_char_count_window_g

0x9123,	// (0x0003abdd) popup_char_count_window_t1

0x1a5f,	// (0x00033519) popup_fep_char_preview_window_ParamLimits

0x1a5f,	// (0x00033519) popup_fep_char_preview_window

0xc0b1,	// (0x0003db6b) vkb2_top_candi_pane_ParamLimits

0xc0b1,	// (0x0003db6b) vkb2_top_candi_pane

0xea3e,	// (0x000404f8) cell_vkb2_top_candi_pane_ParamLimits

0xea3e,	// (0x000404f8) cell_vkb2_top_candi_pane

0x1fd6,	// (0x00033a90) bg_popup_fep_char_preview_window_ParamLimits

0x1fd6,	// (0x00033a90) bg_popup_fep_char_preview_window

0x1fe4,	// (0x00033a9e) popup_fep_char_preview_window_t1_ParamLimits

0x1fe4,	// (0x00033a9e) popup_fep_char_preview_window_t1

0x9182,	// (0x0003ac3c) bg_popup_fep_char_preview_window_g1

0x918a,	// (0x0003ac44) bg_popup_fep_char_preview_window_g2

0x9192,	// (0x0003ac4c) bg_popup_fep_char_preview_window_g3

0x919a,	// (0x0003ac54) bg_popup_fep_char_preview_window_g4

0x91a2,	// (0x0003ac5c) bg_popup_fep_char_preview_window_g5

0x201e,	// (0x00033ad8) bg_popup_fep_char_preview_window_g6

0x91aa,	// (0x0003ac64) bg_popup_fep_char_preview_window_g7

0x91b2,	// (0x0003ac6c) bg_popup_fep_char_preview_window_g8

0x91ba,	// (0x0003ac74) bg_popup_fep_char_preview_window_g9

0x0008,

0xfde8,	// (0x000418a2) bg_popup_fep_char_preview_window_g

0x1560,	// (0x0003301a) cell_vkb2_top_candi_pane_g1_ParamLimits

0x1560,	// (0x0003301a) cell_vkb2_top_candi_pane_g1

0x156e,	// (0x00033028) cell_vkb2_top_candi_pane_g2_ParamLimits

0x156e,	// (0x00033028) cell_vkb2_top_candi_pane_g2

0x8993,	// (0x0003a44d) cell_vkb2_top_candi_pane_g3_ParamLimits

0x8993,	// (0x0003a44d) cell_vkb2_top_candi_pane_g3

0x2026,	// (0x00033ae0) cell_vkb2_top_candi_pane_g4_ParamLimits

0x2026,	// (0x00033ae0) cell_vkb2_top_candi_pane_g4

0x7582,	// (0x0003903c) cell_vkb2_top_candi_pane_g5_ParamLimits

0x7582,	// (0x0003903c) cell_vkb2_top_candi_pane_g5

0x2047,	// (0x00033b01) cell_vkb2_top_candi_pane_g6_ParamLimits

0x2047,	// (0x00033b01) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdfb,	// (0x000418b5) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdfb,	// (0x000418b5) cell_vkb2_top_candi_pane_g

0x2055,	// (0x00033b0f) cell_vkb2_top_candi_pane_t1

0x0e47,	// (0x00032901) aid_size_touch_slider_mark_ParamLimits

0x0e47,	// (0x00032901) aid_size_touch_slider_mark

0xe773,	// (0x0004022d) grid_graphic2_catg_pane_ParamLimits

0xe773,	// (0x0004022d) grid_graphic2_catg_pane

0xe831,	// (0x000402eb) popup_grid_graphic2_window_t1_ParamLimits

0xe831,	// (0x000402eb) popup_grid_graphic2_window_t1

0xe847,	// (0x00040301) popup_grid_graphic2_window_t2_ParamLimits

0xe847,	// (0x00040301) popup_grid_graphic2_window_t2

0x0001,

0xfdb6,	// (0x00041870) popup_grid_graphic2_window_t_ParamLimits

0xfdb6,	// (0x00041870) popup_grid_graphic2_window_t

0x2544,	// (0x00033ffe) bg_button_pane_cp05_ParamLimits

0xe9b4,	// (0x0004046e) cell_graphic2_control_pane_g1_ParamLimits

0xea92,	// (0x0004054c) cell_graphic2_catg_pane_ParamLimits

0xea92,	// (0x0004054c) cell_graphic2_catg_pane

0xe03d,	// (0x0003faf7) bg_button_pane_cp12

0xeaa4,	// (0x0004055e) cell_graphic2_catg_pane_g1

0x8706,	// (0x0003a1c0) cell_tb_ext_pane_t1_ParamLimits

0x1df2,	// (0x000338ac) vkb2_top_cell_right_narrow_pane_ParamLimits

0x1df2,	// (0x000338ac) vkb2_top_cell_right_narrow_pane

0x1e0a,	// (0x000338c4) vkb2_top_cell_right_wide_pane_ParamLimits

0x1e0a,	// (0x000338c4) vkb2_top_cell_right_wide_pane

0x12e5,	// (0x00032d9f) bg_vkb2_func_pane_ParamLimits

0x12e5,	// (0x00032d9f) bg_vkb2_func_pane

0x1e7b,	// (0x00033935) vkb2_top_cell_left_pane_g1_ParamLimits

0x12e5,	// (0x00032d9f) bg_vkb2_fuc_pane_cp03_ParamLimits

0x12e5,	// (0x00032d9f) bg_vkb2_fuc_pane_cp03

0x1eef,	// (0x000339a9) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x483e,	// (0x000362f8) bg_vkb2_func_pane_g1

0x4846,	// (0x00036300) bg_vkb2_func_pane_g2

0x4856,	// (0x00036310) bg_vkb2_func_pane_g3

0x484e,	// (0x00036308) bg_vkb2_func_pane_g4

0x485e,	// (0x00036318) bg_vkb2_func_pane_g5

0x4866,	// (0x00036320) bg_vkb2_func_pane_g6

0x486e,	// (0x00036328) bg_vkb2_func_pane_g7

0x4876,	// (0x00036330) bg_vkb2_func_pane_g8

0x4836,	// (0x000362f0) bg_vkb2_func_pane_g9

0x0008,

0xfe08,	// (0x000418c2) bg_vkb2_func_pane_g

0x12e5,	// (0x00032d9f) bg_vkb2_fuc_pane_cp01_ParamLimits

0x12e5,	// (0x00032d9f) bg_vkb2_fuc_pane_cp01

0x1e7b,	// (0x00033935) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x1e7b,	// (0x00033935) vkb2_top_cell_right_wide_pane_g1

0x12e5,	// (0x00032d9f) bg_vkb2_fuc_pane_cp02_ParamLimits

0x12e5,	// (0x00032d9f) bg_vkb2_fuc_pane_cp02

0x1eef,	// (0x000339a9) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x1eef,	// (0x000339a9) vkb2_top_cell_right_narrow_pane_g1

0xdf7b,	// (0x0003fa35) aid_touch_area_decrease_ParamLimits

0xdf7b,	// (0x0003fa35) aid_touch_area_decrease

0xdfb5,	// (0x0003fa6f) aid_touch_area_increase_ParamLimits

0xdfb5,	// (0x0003fa6f) aid_touch_area_increase

0xdfdd,	// (0x0003fa97) aid_touch_area_mute_ParamLimits

0xdfdd,	// (0x0003fa97) aid_touch_area_mute

0xe074,	// (0x0003fb2e) aid_touch_area_slider_ParamLimits

0xe074,	// (0x0003fb2e) aid_touch_area_slider

0xe0b4,	// (0x0003fb6e) popup_slider_window_g4_ParamLimits

0xe0b4,	// (0x0003fb6e) popup_slider_window_g4

0xe0dc,	// (0x0003fb96) popup_slider_window_g5_ParamLimits

0xe0dc,	// (0x0003fb96) popup_slider_window_g5

0xe110,	// (0x0003fbca) popup_slider_window_g6_ParamLimits

0xe110,	// (0x0003fbca) popup_slider_window_g6

0x84d9,	// (0x00039f93) popup_slider_window_t2_ParamLimits

0x84d9,	// (0x00039f93) popup_slider_window_t2

0x0001,

0xfd04,	// (0x000417be) popup_slider_window_t_ParamLimits

0xfd04,	// (0x000417be) popup_slider_window_t

0xe12c,	// (0x0003fbe6) slider_pane_ParamLimits

0xe12c,	// (0x0003fbe6) slider_pane

0x91dd,	// (0x0003ac97) slider_pane_g1_ParamLimits

0x91dd,	// (0x0003ac97) slider_pane_g1

0x91f1,	// (0x0003acab) slider_pane_g2_ParamLimits

0x91f1,	// (0x0003acab) slider_pane_g2

0x9207,	// (0x0003acc1) slider_pane_g3_ParamLimits

0x9207,	// (0x0003acc1) slider_pane_g3

0x0003,

0xfe1b,	// (0x000418d5) slider_pane_g_ParamLimits

0xfe1b,	// (0x000418d5) slider_pane_g

0xcd24,	// (0x0003e7de) popup_tb_float_extension_window_ParamLimits

0xcd24,	// (0x0003e7de) popup_tb_float_extension_window

0x9233,	// (0x0003aced) aid_size_cell_tb_float_ext

0xe03d,	// (0x0003faf7) bg_popup_sub_window_cp28

0x923f,	// (0x0003acf9) grid_tb_float_ext_pane

0x924b,	// (0x0003ad05) cell_tb_float_ext_pane_ParamLimits

0x924b,	// (0x0003ad05) cell_tb_float_ext_pane

0x9267,	// (0x0003ad21) cell_tb_float_ext_pane_g1

0x9270,	// (0x0003ad2a) grid_highlight_pane_cp12

0xbcb5,	// (0x0003d76f) cell_last_hwr_side_pane_ParamLimits

0xbcb5,	// (0x0003d76f) cell_last_hwr_side_pane

0x6df9,	// (0x000388b3) cell_last_hwr_side_pane_g1

0x9279,	// (0x0003ad33) cell_last_hwr_side_pane_g2

0x0001,

0xfe24,	// (0x000418de) cell_last_hwr_side_pane_g

0xc218,	// (0x0003dcd2) vkb2_area_bottom_space_btn_pane_ParamLimits

0xc218,	// (0x0003dcd2) vkb2_area_bottom_space_btn_pane

0x1560,	// (0x0003301a) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x8d37,	// (0x0003a7f1) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x2055,	// (0x00033b0f) cell_vkb2_top_candi_pane_t1_ParamLimits

0x2073,	// (0x00033b2d) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x2073,	// (0x00033b2d) vkb2_area_bottom_space_btn_pane_g1

0x20ad,	// (0x00033b67) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x20ad,	// (0x00033b67) vkb2_area_bottom_space_btn_pane_g2

0x20e3,	// (0x00033b9d) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x20e3,	// (0x00033b9d) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe29,	// (0x000418e3) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe29,	// (0x000418e3) vkb2_area_bottom_space_btn_pane_g

0x13aa,	// (0x00032e64) cel_fep_hwr_func_pane_ParamLimits

0x13aa,	// (0x00032e64) cel_fep_hwr_func_pane

0xbc8a,	// (0x0003d744) cell_hwr_side_button_pane_ParamLimits

0xbc8a,	// (0x0003d744) cell_hwr_side_button_pane

0x873a,	// (0x0003a1f4) aid_area_touch_clock_ParamLimits

0x2544,	// (0x00033ffe) bg_uniindi_top_pane_ParamLimits

0x874e,	// (0x0003a208) uniindi_top_pane_g1_ParamLimits

0x8764,	// (0x0003a21e) uniindi_top_pane_g2_ParamLimits

0x8770,	// (0x0003a22a) uniindi_top_pane_g3_ParamLimits

0x8781,	// (0x0003a23b) uniindi_top_pane_g4_ParamLimits

0xfd3c,	// (0x000417f6) uniindi_top_pane_g_ParamLimits

0x878e,	// (0x0003a248) uniindi_top_pane_t1_ParamLimits

0x2544,	// (0x00033ffe) bg_vkb2_func_pane_cp01_ParamLimits

0x2544,	// (0x00033ffe) bg_vkb2_func_pane_cp01

0x9282,	// (0x0003ad3c) cel_fep_hwr_func_pane_g1_ParamLimits

0x9282,	// (0x0003ad3c) cel_fep_hwr_func_pane_g1

0x2544,	// (0x00033ffe) bg_vkb2_func_pane_cp02_ParamLimits

0x2544,	// (0x00033ffe) bg_vkb2_func_pane_cp02

0x9282,	// (0x0003ad3c) cell_hwr_side_button_pane_g1_ParamLimits

0x9282,	// (0x0003ad3c) cell_hwr_side_button_pane_g1

0x46b7,	// (0x00036171) status_pane_g4_ParamLimits

0x46b7,	// (0x00036171) status_pane_g4

0x46d1,	// (0x0003618b) status_pane_t1

0x6bf3,	// (0x000386ad) form2_midp_gauge_slider_cont_pane

0x6bfb,	// (0x000386b5) form2_midp_gauge_slider_pane_t1_ParamLimits

0xd933,	// (0x0003f3ed) form2_midp_gauge_slider_pane_t2_ParamLimits

0xd945,	// (0x0003f3ff) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfafc,	// (0x000415b6) form2_midp_gauge_slider_pane_t_ParamLimits

0x6c31,	// (0x000386eb) form2_midp_slider_pane_ParamLimits

0x1a27,	// (0x000334e1) aid_size_cell_func_vkb2_ParamLimits

0x1a27,	// (0x000334e1) aid_size_cell_func_vkb2

0x921f,	// (0x0003acd9) slider_pane_g4_ParamLimits

0x921f,	// (0x0003acd9) slider_pane_g4

0xc279,	// (0x0003dd33) form2_midp_gauge_slider_pane_t2_cp01

0xc287,	// (0x0003dd41) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xc287,	// (0x0003dd41) form2_midp_gauge_slider_pane_t3_cp01

0x2158,	// (0x00033c12) form2_midp_slider_pane_cp01

0xe03d,	// (0x0003faf7) navi_smil_pane

0x92bb,	// (0x0003ad75) navi_smil_pane_g1

0x92c3,	// (0x0003ad7d) navi_smil_pane_t1

0x9290,	// (0x0003ad4a) form2_midp_slider_pane_g1

0x9299,	// (0x0003ad53) form2_midp_slider_pane_g2

0x92a1,	// (0x0003ad5b) form2_midp_slider_pane_g3

0x9290,	// (0x0003ad4a) form2_midp_slider_pane_g4

0xeaad,	// (0x00040567) form2_midp_slider_pane_g5

0x0004,

0xfe32,	// (0x000418ec) form2_midp_slider_pane_g

0x211d,	// (0x00033bd7) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x211d,	// (0x00033bd7) vkb2_area_bottom_space_btn_pane_g4

0xcf09,	// (0x0003e9c3) lc0_navi_pane_ParamLimits

0xcf09,	// (0x0003e9c3) lc0_navi_pane

0xcf79,	// (0x0003ea33) lc0_stat_indi_pane_ParamLimits

0xcf79,	// (0x0003ea33) lc0_stat_indi_pane

0xcf8e,	// (0x0003ea48) ls0_title_pane_ParamLimits

0xcf8e,	// (0x0003ea48) ls0_title_pane

0x2b41,	// (0x000345fb) bg_popup_sub_pane_cp14_ParamLimits

0x8721,	// (0x0003a1db) list_uniindi_pane_ParamLimits

0x872d,	// (0x0003a1e7) uniindi_top_pane_ParamLimits

0x87cc,	// (0x0003a286) list_single_uniindi_pane_g1_ParamLimits

0x87df,	// (0x0003a299) list_single_uniindi_pane_t1_ParamLimits

0xc2a4,	// (0x0003dd5e) lc0_stat_clock_pane_ParamLimits

0xc2a4,	// (0x0003dd5e) lc0_stat_clock_pane

0xeab6,	// (0x00040570) lc0_stat_indi_pane_g1_ParamLimits

0xeab6,	// (0x00040570) lc0_stat_indi_pane_g1

0xeac3,	// (0x0004057d) lc0_stat_indi_pane_g2_ParamLimits

0xeac3,	// (0x0004057d) lc0_stat_indi_pane_g2

0x0001,

0xfe3d,	// (0x000418f7) lc0_stat_indi_pane_g_ParamLimits

0xfe3d,	// (0x000418f7) lc0_stat_indi_pane_g

0xc2b1,	// (0x0003dd6b) lc0_uni_indicator_pane_ParamLimits

0xc2b1,	// (0x0003dd6b) lc0_uni_indicator_pane

0xead0,	// (0x0004058a) ls0_title_pane_g1_ParamLimits

0xead0,	// (0x0004058a) ls0_title_pane_g1

0xeae4,	// (0x0004059e) ls0_title_pane_t1_ParamLimits

0xeae4,	// (0x0004059e) ls0_title_pane_t1

0xc2be,	// (0x0003dd78) lc0_uni_indicator_pane_g1_ParamLimits

0xc2be,	// (0x0003dd78) lc0_uni_indicator_pane_g1

0x9335,	// (0x0003adef) lc0_stat_clock_pane_t1

0xe03d,	// (0x0003faf7) main_ai5_pane

0x9343,	// (0x0003adfd) ai5_sk_pane_ParamLimits

0x9343,	// (0x0003adfd) ai5_sk_pane

0xeb12,	// (0x000405cc) cell_ai5_widget_pane_ParamLimits

0xeb12,	// (0x000405cc) cell_ai5_widget_pane

0x93c6,	// (0x0003ae80) aid_size_cell_widget_grid

0x93da,	// (0x0003ae94) bg_ai5_widget_pane_ParamLimits

0x93da,	// (0x0003ae94) bg_ai5_widget_pane

0xeb9f,	// (0x00040659) cell_ai5_widget_pane_g2

0xebaf,	// (0x00040669) cell_ai5_widget_pane_g3

0xebce,	// (0x00040688) cell_ai5_widget_pane_g4

0xebda,	// (0x00040694) cell_ai5_widget_pane_g5

0xebe6,	// (0x000406a0) cell_ai5_widget_pane_g6

0xebf2,	// (0x000406ac) cell_ai5_widget_pane_g7

0xec3a,	// (0x000406f4) cell_ai5_widget_pane_t1_ParamLimits

0xec3a,	// (0x000406f4) cell_ai5_widget_pane_t1

0xec57,	// (0x00040711) cell_ai5_widget_pane_t2_ParamLimits

0xec57,	// (0x00040711) cell_ai5_widget_pane_t2

0xec6f,	// (0x00040729) cell_ai5_widget_pane_t3_ParamLimits

0xec6f,	// (0x00040729) cell_ai5_widget_pane_t3

0xec87,	// (0x00040741) cell_ai5_widget_pane_t4_ParamLimits

0xec87,	// (0x00040741) cell_ai5_widget_pane_t4

0xeca1,	// (0x0004075b) cell_ai5_widget_pane_t5_ParamLimits

0xeca1,	// (0x0004075b) cell_ai5_widget_pane_t5

0x9525,	// (0x0003afdf) cell_ai5_widget_pane_t6_ParamLimits

0x9525,	// (0x0003afdf) cell_ai5_widget_pane_t6

0x9537,	// (0x0003aff1) cell_ai5_widget_pane_t7_ParamLimits

0x9537,	// (0x0003aff1) cell_ai5_widget_pane_t7

0xecc0,	// (0x0004077a) cell_ai5_widget_pane_t8_ParamLimits

0xecc0,	// (0x0004077a) cell_ai5_widget_pane_t8

0x0009,

0xfe57,	// (0x00041911) cell_ai5_widget_pane_t_ParamLimits

0xfe57,	// (0x00041911) cell_ai5_widget_pane_t

0xed0c,	// (0x000407c6) grid_ai5_widget_pane

0x2b41,	// (0x000345fb) highlight_cell_ai5_widget_pane_ParamLimits

0x2b41,	// (0x000345fb) highlight_cell_ai5_widget_pane

0xed23,	// (0x000407dd) ai5_sk_left_pane

0xed2d,	// (0x000407e7) ai5_sk_middle_pane

0xed37,	// (0x000407f1) ai5_sk_right_pane

0x95d1,	// (0x0003b08b) bg_ai5_widget_pane_g1_ParamLimits

0x95d1,	// (0x0003b08b) bg_ai5_widget_pane_g1

0x95dd,	// (0x0003b097) bg_ai5_widget_pane_g2_ParamLimits

0x95dd,	// (0x0003b097) bg_ai5_widget_pane_g2

0x95e9,	// (0x0003b0a3) bg_ai5_widget_pane_g3_ParamLimits

0x95e9,	// (0x0003b0a3) bg_ai5_widget_pane_g3

0x95f5,	// (0x0003b0af) bg_ai5_widget_pane_g4_ParamLimits

0x95f5,	// (0x0003b0af) bg_ai5_widget_pane_g4

0x9601,	// (0x0003b0bb) bg_ai5_widget_pane_g5_ParamLimits

0x9601,	// (0x0003b0bb) bg_ai5_widget_pane_g5

0x960d,	// (0x0003b0c7) bg_ai5_widget_pane_g6_ParamLimits

0x960d,	// (0x0003b0c7) bg_ai5_widget_pane_g6

0x9619,	// (0x0003b0d3) bg_ai5_widget_pane_g7_ParamLimits

0x9619,	// (0x0003b0d3) bg_ai5_widget_pane_g7

0x9625,	// (0x0003b0df) bg_ai5_widget_pane_g8_ParamLimits

0x9625,	// (0x0003b0df) bg_ai5_widget_pane_g8

0x9631,	// (0x0003b0eb) bg_ai5_widget_pane_g9_ParamLimits

0x9631,	// (0x0003b0eb) bg_ai5_widget_pane_g9

0x0008,

0xfe6c,	// (0x00041926) bg_ai5_widget_pane_g_ParamLimits

0xfe6c,	// (0x00041926) bg_ai5_widget_pane_g

0x9658,	// (0x0003b112) cell_shortcut_ai5_widget_pane_ParamLimits

0x9658,	// (0x0003b112) cell_shortcut_ai5_widget_pane

0x2386,	// (0x00033e40) bg_cell_shortcut_ai5_widget_pane

0x966a,	// (0x0003b124) cell_grid_ai5_widget_pane_g1

0x9673,	// (0x0003b12d) highlight_cell_shortcut_ai5_widget_pane

0x483e,	// (0x000362f8) ai5_sk_left_pane_g1

0x967b,	// (0x0003b135) ai5_sk_left_pane_g2

0x9683,	// (0x0003b13d) ai5_sk_left_pane_g3

0x968b,	// (0x0003b145) ai5_sk_left_pane_g4

0x0003,

0xfe7f,	// (0x00041939) ai5_sk_left_pane_g

0x9693,	// (0x0003b14d) ai5_sk_left_pane_t1

0x4846,	// (0x00036300) ai5_sk_right_pane_g1

0x96a1,	// (0x0003b15b) ai5_sk_right_pane_g2

0x96a9,	// (0x0003b163) ai5_sk_right_pane_g3

0x96b1,	// (0x0003b16b) ai5_sk_right_pane_g4

0x0003,

0xfe88,	// (0x00041942) ai5_sk_right_pane_g

0x96b9,	// (0x0003b173) ai5_sk_right_pane_t1

0x4846,	// (0x00036300) ai5_sk_middle_pane_g1

0x483e,	// (0x000362f8) ai5_sk_middle_pane_g2

0x485e,	// (0x00036318) ai5_sk_middle_pane_g3

0x96a9,	// (0x0003b163) ai5_sk_middle_pane_g4

0x9683,	// (0x0003b13d) ai5_sk_middle_pane_g5

0x96c7,	// (0x0003b181) ai5_sk_middle_pane_g6

0xed5c,	// (0x00040816) ai5_sk_middle_pane_g7

0x0006,

0xfe91,	// (0x0004194b) ai5_sk_middle_pane_g

0xcdf5,	// (0x0003e8af) aid_touch_area_size_lc0_ParamLimits

0xcdf5,	// (0x0003e8af) aid_touch_area_size_lc0

0x158f,	// (0x00033049) cell_hwr_candidate_pane_t1_ParamLimits

0x436e,	// (0x00035e28) aid_touch_navi_pane

0xd099,	// (0x0003eb53) status_dt_navi_pane_ParamLimits

0xd099,	// (0x0003eb53) status_dt_navi_pane

0xd0b1,	// (0x0003eb6b) status_dt_sta_pane_ParamLimits

0xd0b1,	// (0x0003eb6b) status_dt_sta_pane

0xed64,	// (0x0004081e) dt_sta_controll_pane

0xed71,	// (0x0004082b) dt_sta_indi_pane

0xed7e,	// (0x00040838) dt_sta_title_pane

0x2544,	// (0x00033ffe) bg_dt_sta_indi_pane_ParamLimits

0x2544,	// (0x00033ffe) bg_dt_sta_indi_pane

0xed90,	// (0x0004084a) dt_sta_battery_pane

0xed98,	// (0x00040852) dt_sta_indi_pane_g1

0xeda1,	// (0x0004085b) dt_sta_indi_pane_g2

0xedaa,	// (0x00040864) dt_sta_indi_pane_g3

0x0002,

0xfea0,	// (0x0004195a) dt_sta_indi_pane_g

0xedb3,	// (0x0004086d) dt_sta_signal_pane

0x2b41,	// (0x000345fb) bg_dt_sta_title_pane_ParamLimits

0x2b41,	// (0x000345fb) bg_dt_sta_title_pane

0xedbc,	// (0x00040876) dt_sta_title_pane_g1

0xedc4,	// (0x0004087e) dt_sta_title_pane_t1_ParamLimits

0xedc4,	// (0x0004087e) dt_sta_title_pane_t1

0xe03d,	// (0x0003faf7) bg_dt_sta_control_pane

0xedd9,	// (0x00040893) dt_sta_controll_pane_g1

0xede2,	// (0x0004089c) bg_dt_sta_title_pane_g1

0xedeb,	// (0x000408a5) bg_dt_sta_title_pane_g2

0xedf4,	// (0x000408ae) bg_dt_sta_title_pane_g3

0x0002,

0xfea7,	// (0x00041961) bg_dt_sta_title_pane_g

0x6df9,	// (0x000388b3) bg_dt_sta_indi_pane_g1

0x9775,	// (0x0003b22f) dt_sta_signal_pane_g1

0x977d,	// (0x0003b237) dt_sta_signal_pane_g2

0x0001,

0xfeae,	// (0x00041968) dt_sta_signal_pane_g

0x9785,	// (0x0003b23f) dt_sta_battery_pane_g1

0x978e,	// (0x0003b248) dt_sta_battery_pane_t1

0x6df9,	// (0x000388b3) bg_dt_sta_control_pane_g1

0x3471,	// (0x00034f2b) fep_china_uni_eep_pane

0x3479,	// (0x00034f33) fep_china_uni_entry_pane_ParamLimits

0x3489,	// (0x00034f43) popup_fep_china_uni_window_g1_ParamLimits

0x3499,	// (0x00034f53) popup_fep_china_uni_window_g2_ParamLimits

0x3499,	// (0x00034f53) popup_fep_china_uni_window_g2

0x0001,

0xf730,	// (0x000411ea) popup_fep_china_uni_window_g_ParamLimits

0xf730,	// (0x000411ea) popup_fep_china_uni_window_g

0x979d,	// (0x0003b257) fep_china_uni_eep_pane_g1

0x97a5,	// (0x0003b25f) fep_china_uni_eep_pane_t1

0x92b2,	// (0x0003ad6c) aid_touch_area_size_smil_player

0x44c6,	// (0x00035f80) lc0_clock_pane

0x46c5,	// (0x0003617f) status_pane_g5_ParamLimits

0x46c5,	// (0x0003617f) status_pane_g5

0xc84e,	// (0x0003e308) popup_keymap_window

0x4683,	// (0x0003613d) status_icon_pane

0xebaf,	// (0x00040669) cell_ai5_widget_pane_g3_ParamLimits

0xebce,	// (0x00040688) cell_ai5_widget_pane_g4_ParamLimits

0xebda,	// (0x00040694) cell_ai5_widget_pane_g5_ParamLimits

0xebfe,	// (0x000406b8) cell_ai5_widget_pane_g8_ParamLimits

0xebfe,	// (0x000406b8) cell_ai5_widget_pane_g8

0xec12,	// (0x000406cc) cell_ai5_widget_pane_g9_ParamLimits

0xec12,	// (0x000406cc) cell_ai5_widget_pane_g9

0xec26,	// (0x000406e0) cell_ai5_widget_pane_g10_ParamLimits

0xec26,	// (0x000406e0) cell_ai5_widget_pane_g10

0x97b4,	// (0x0003b26e) status_icon_pane_g1

0xe03d,	// (0x0003faf7) bg_popup_sub_pane_cp13

0x97bc,	// (0x0003b276) popup_keymap_window_t1

0xc64c,	// (0x0003e106) control_pane_g6_ParamLimits

0xc64c,	// (0x0003e106) control_pane_g6

0xc659,	// (0x0003e113) control_pane_g7_ParamLimits

0xc659,	// (0x0003e113) control_pane_g7

0xc666,	// (0x0003e120) control_pane_g8_ParamLimits

0xc666,	// (0x0003e120) control_pane_g8

0xed64,	// (0x0004081e) dt_sta_controll_pane_ParamLimits

0xed71,	// (0x0004082b) dt_sta_indi_pane_ParamLimits

0xed7e,	// (0x00040838) dt_sta_title_pane_ParamLimits

0x2a79,	// (0x00034533) aid_size_touch_scroll_bar_cale

0xf42d,	// (0x00040ee7) popup_discreet_window_ParamLimits

0xf42d,	// (0x00040ee7) popup_discreet_window

0xadd6,	// (0x0003c890) popup_sk_window

0x4eb0,	// (0x0003696a) bg_popup_sub_pane_cp28_ParamLimits

0x4eb0,	// (0x0003696a) bg_popup_sub_pane_cp28

0x97ca,	// (0x0003b284) popup_discreet_window_g1_ParamLimits

0x97ca,	// (0x0003b284) popup_discreet_window_g1

0x97ea,	// (0x0003b2a4) popup_discreet_window_t1_ParamLimits

0x97ea,	// (0x0003b2a4) popup_discreet_window_t1

0x9808,	// (0x0003b2c2) popup_discreet_window_t2_ParamLimits

0x9808,	// (0x0003b2c2) popup_discreet_window_t2

0x0002,

0xfeb3,	// (0x0004196d) popup_discreet_window_t_ParamLimits

0xfeb3,	// (0x0004196d) popup_discreet_window_t

0x218e,	// (0x00033c48) popup_sk_window_g1

0x2198,	// (0x00033c52) popup_sk_window_g2

0x0001,

0xfeba,	// (0x00041974) popup_sk_window_g

0x985a,	// (0x0003b314) popup_sk_window_t1

0x9868,	// (0x0003b322) popup_sk_window_t1_copy1

0xeb9f,	// (0x00040659) cell_ai5_widget_pane_g2_ParamLimits

0xecd2,	// (0x0004078c) cell_ai5_widget_pane_t9_ParamLimits

0xecd2,	// (0x0004078c) cell_ai5_widget_pane_t9

0xe03d,	// (0x0003faf7) main_fep_fshwr2_pane

0xedfd,	// (0x000408b7) aid_fshwr2_btn_pane

0xee05,	// (0x000408bf) aid_fshwr2_syb_pane

0xee0d,	// (0x000408c7) aid_fshwr2_txt_pane

0xee15,	// (0x000408cf) fshwr2_func_candi_pane

0xee1f,	// (0x000408d9) fshwr2_hwr_syb_pane

0xee2b,	// (0x000408e5) fshwr2_icf_pane

0xe03d,	// (0x0003faf7) fshwr2_icf_bg_pane

0xee35,	// (0x000408ef) fshwr2_icf_pane_t1_ParamLimits

0xee35,	// (0x000408ef) fshwr2_icf_pane_t1

0x6df9,	// (0x000388b3) fshwr2_func_candi_pane_g1

0x98db,	// (0x0003b395) fshwr2_func_candi_row_pane_ParamLimits

0x98db,	// (0x0003b395) fshwr2_func_candi_row_pane

0xee4d,	// (0x00040907) cell_fshwr2_syb_pane_ParamLimits

0xee4d,	// (0x00040907) cell_fshwr2_syb_pane

0x7083,	// (0x00038b3d) fshwr2_hwr_syb_pane_g1_ParamLimits

0x7083,	// (0x00038b3d) fshwr2_hwr_syb_pane_g1

0xe03d,	// (0x0003faf7) bg_popup_call_pane_cp01

0x9906,	// (0x0003b3c0) fshwr2_func_candi_cell_pane_ParamLimits

0x9906,	// (0x0003b3c0) fshwr2_func_candi_cell_pane

0x9938,	// (0x0003b3f2) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x9938,	// (0x0003b3f2) fshwr2_func_candi_cell_bg_pane

0x9952,	// (0x0003b40c) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x9952,	// (0x0003b40c) fshwr2_func_candi_cell_pane_g1

0x9972,	// (0x0003b42c) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x9972,	// (0x0003b42c) fshwr2_func_candi_cell_pane_t1

0xe03d,	// (0x0003faf7) bg_button_pane_cp08

0x3973,	// (0x0003542d) cell_fshwr2_syb_bg_pane

0xee66,	// (0x00040920) cell_fshwr2_syb_bg_pane_g1

0xee6e,	// (0x00040928) cell_fshwr2_syb_bg_pane_t1

0x2b41,	// (0x000345fb) main_tmo_pane

0xd3f2,	// (0x0003eeac) uni_indicator_pane_g1_ParamLimits

0xd407,	// (0x0003eec1) uni_indicator_pane_g2_ParamLimits

0xd41c,	// (0x0003eed6) uni_indicator_pane_g3_ParamLimits

0xd432,	// (0x0003eeec) uni_indicator_pane_g4_ParamLimits

0xd432,	// (0x0003eeec) uni_indicator_pane_g4

0xd446,	// (0x0003ef00) uni_indicator_pane_g5_ParamLimits

0xd446,	// (0x0003ef00) uni_indicator_pane_g5

0xd45a,	// (0x0003ef14) uni_indicator_pane_g6_ParamLimits

0xd45a,	// (0x0003ef14) uni_indicator_pane_g6

0xf928,	// (0x000413e2) uni_indicator_pane_g_ParamLimits

0xdf4b,	// (0x0003fa05) popup_tmo_note_window_ParamLimits

0xdf4b,	// (0x0003fa05) popup_tmo_note_window

0xe03d,	// (0x0003faf7) fshwr2_bg_pane

0x9963,	// (0x0003b41d) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x9963,	// (0x0003b41d) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfebf,	// (0x00041979) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfebf,	// (0x00041979) fshwr2_func_candi_cell_pane_g

0x6df9,	// (0x000388b3) bg_popup_window_pane_cp01

0x999c,	// (0x0003b456) bg_popup_window_pane_g1_cp01

0x99a5,	// (0x0003b45f) bg_popup_window_pane_cp22_ParamLimits

0x99a5,	// (0x0003b45f) bg_popup_window_pane_cp22

0x99b3,	// (0x0003b46d) listscroll_tmo_link_pane_ParamLimits

0x99b3,	// (0x0003b46d) listscroll_tmo_link_pane

0x99f3,	// (0x0003b4ad) popup_tmo_note_window_g1_ParamLimits

0x99f3,	// (0x0003b4ad) popup_tmo_note_window_g1

0x9a00,	// (0x0003b4ba) tmo_note_info_pane_ParamLimits

0x9a00,	// (0x0003b4ba) tmo_note_info_pane

0xee7d,	// (0x00040937) list_tmo_note_info_pane_g1_ParamLimits

0xee7d,	// (0x00040937) list_tmo_note_info_pane_g1

0x9a31,	// (0x0003b4eb) list_tmo_note_info_pane_g2_ParamLimits

0x9a31,	// (0x0003b4eb) list_tmo_note_info_pane_g2

0x0001,

0xfec4,	// (0x0004197e) list_tmo_note_info_pane_g_ParamLimits

0xfec4,	// (0x0004197e) list_tmo_note_info_pane_g

0x9a4d,	// (0x0003b507) list_tmo_note_info_text_pane_ParamLimits

0x9a4d,	// (0x0003b507) list_tmo_note_info_text_pane

0x9ad2,	// (0x0003b58c) list_tmo_link_pane

0x9adf,	// (0x0003b599) scroll_pane_cp20

0x9aec,	// (0x0003b5a6) list_single_tmo_link_pane_ParamLimits

0x9aec,	// (0x0003b5a6) list_single_tmo_link_pane

0x9afc,	// (0x0003b5b6) list_single_tmo_link_pane_t1

0x9b0a,	// (0x0003b5c4) list_tmo_note_info_text_pane_t1_ParamLimits

0x9b0a,	// (0x0003b5c4) list_tmo_note_info_text_pane_t1

0xb76a,	// (0x0003d224) aid_size_touch_scroll_bar_cp01_ParamLimits

0xb76a,	// (0x0003d224) aid_size_touch_scroll_bar_cp01

0xb6ac,	// (0x0003d166) aid_size_touch_slider_marker

0xadc6,	// (0x0003c880) popup_settings_window_ParamLimits

0xadc6,	// (0x0003c880) popup_settings_window

0x0a60,	// (0x0003251a) popup_candi_list_indi_window

0x436e,	// (0x00035e28) aid_touch_navi_pane_ParamLimits

0x195e,	// (0x00033418) rs_clock_indi_pane

0x1967,	// (0x00033421) sctrl_sk_bottom_pane_ParamLimits

0x1978,	// (0x00033432) sctrl_sk_top_pane_ParamLimits

0x1a79,	// (0x00033533) popup_fep_tooltip_window

0x93c6,	// (0x0003ae80) aid_size_cell_widget_grid_ParamLimits

0xeb93,	// (0x0004064d) cell_ai5_widget_pane_g1_ParamLimits

0xeb93,	// (0x0004064d) cell_ai5_widget_pane_g1

0xebe6,	// (0x000406a0) cell_ai5_widget_pane_g6_ParamLimits

0xebf2,	// (0x000406ac) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe42,	// (0x000418fc) cell_ai5_widget_pane_g_ParamLimits

0xfe42,	// (0x000418fc) cell_ai5_widget_pane_g

0xecf6,	// (0x000407b0) cell_ai5_widget_pane_t10_ParamLimits

0xecf6,	// (0x000407b0) cell_ai5_widget_pane_t10

0xed0c,	// (0x000407c6) grid_ai5_widget_pane_ParamLimits

0xed41,	// (0x000407fb) cell_contacts_ai5_widget_pane_ParamLimits

0xed41,	// (0x000407fb) cell_contacts_ai5_widget_pane

0x981d,	// (0x0003b2d7) popup_discreet_window_t3_ParamLimits

0x981d,	// (0x0003b2d7) popup_discreet_window_t3

0x98ac,	// (0x0003b366) popup_fshwr2_char_preview_window_ParamLimits

0x98ac,	// (0x0003b366) popup_fshwr2_char_preview_window

0xee94,	// (0x0004094e) tmo_note_info_pane_t1

0xeea9,	// (0x00040963) tmo_note_info_pane_t2

0xeec2,	// (0x0004097c) tmo_note_info_pane_t3

0x9aae,	// (0x0003b568) tmo_note_info_pane_t4

0x9ac0,	// (0x0003b57a) tmo_note_info_pane_t5

0x0004,

0xfec9,	// (0x00041983) tmo_note_info_pane_t

0x9ad2,	// (0x0003b58c) list_tmo_link_pane_ParamLimits

0x9adf,	// (0x0003b599) scroll_pane_cp20_ParamLimits

0xe03d,	// (0x0003faf7) bg_popup_fep_char_preview_window_cp01

0x9b23,	// (0x0003b5dd) popup_fshwr2_char_preview_window_t1

0x9b31,	// (0x0003b5eb) popup_candi_list_indi_window_g1

0x9b3a,	// (0x0003b5f4) bg_cell_contacts_ai5_widget_pane

0x9b46,	// (0x0003b600) cell_contacts_ai5_widget_pane_g1

0x9b5a,	// (0x0003b614) cell_contacts_ai5_widget_pane_g2

0x9b69,	// (0x0003b623) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfed4,	// (0x0004198e) cell_contacts_ai5_widget_pane_g

0x9b7c,	// (0x0003b636) cell_contacts_ai5_widget_pane_t1

0x2b41,	// (0x000345fb) highlight_cell_shortcut_ai5_widget_pane_cp01

0xf098,	// (0x00040b52) settings_container_pane

0x3973,	// (0x0003542d) listscroll_set_pane_copy1

0x65b4,	// (0x0003806e) scroll_pane_cp121_copy1

0x9c02,	// (0x0003b6bc) set_content_pane_copy1

0xf0a4,	// (0x00040b5e) aid_height_set_list_copy1_ParamLimits

0xf0a4,	// (0x00040b5e) aid_height_set_list_copy1

0x5c43,	// (0x000376fd) aid_size_parent_copy1_ParamLimits

0x5c43,	// (0x000376fd) aid_size_parent_copy1

0xf0b0,	// (0x00040b6a) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf0b0,	// (0x00040b6a) button_value_adjust_pane_cp6_copy1

0x3cf9,	// (0x000357b3) list_highlight_pane_cp2_copy1_ParamLimits

0x3cf9,	// (0x000357b3) list_highlight_pane_cp2_copy1

0xf0c4,	// (0x00040b7e) list_set_pane_copy1_ParamLimits

0xf0c4,	// (0x00040b7e) list_set_pane_copy1

0xf033,	// (0x00040aed) main_pane_set_t1_copy1_ParamLimits

0xf033,	// (0x00040aed) main_pane_set_t1_copy1

0xf06d,	// (0x00040b27) main_pane_set_t2_copy1_ParamLimits

0xf06d,	// (0x00040b27) main_pane_set_t2_copy1

0xf18b,	// (0x00040c45) main_pane_set_t3_copy1

0xf199,	// (0x00040c53) main_pane_set_t4_copy1

0xf08c,	// (0x00040b46) set_content_pane_g1_copy1_ParamLimits

0xf08c,	// (0x00040b46) set_content_pane_g1_copy1

0xf1a7,	// (0x00040c61) setting_code_pane_copy1

0x9d17,	// (0x0003b7d1) setting_slider_graphic_pane_copy1

0x9d17,	// (0x0003b7d1) setting_slider_pane_copy1

0x9d17,	// (0x0003b7d1) setting_text_pane_copy1

0x9d21,	// (0x0003b7db) setting_volume_pane_copy1

0xf1b1,	// (0x00040c6b) settings_code_pane_cp2_copy1

0xf1b9,	// (0x00040c73) settings_code_pane_cp_copy1_ParamLimits

0xf1b9,	// (0x00040c73) settings_code_pane_cp_copy1

0xf1cd,	// (0x00040c87) volume_set_pane_copy1

0xf1d9,	// (0x00040c93) volume_set_pane_g10_copy1

0xf1e5,	// (0x00040c9f) volume_set_pane_g1_copy1

0xf1ef,	// (0x00040ca9) volume_set_pane_g2_copy1

0xf1f9,	// (0x00040cb3) volume_set_pane_g3_copy1

0xf203,	// (0x00040cbd) volume_set_pane_g4_copy1

0xf20d,	// (0x00040cc7) volume_set_pane_g5_copy1

0xf217,	// (0x00040cd1) volume_set_pane_g6_copy1

0xf221,	// (0x00040cdb) volume_set_pane_g7_copy1

0xf22b,	// (0x00040ce5) volume_set_pane_g8_copy1

0xf235,	// (0x00040cef) volume_set_pane_g9_copy1

0x22ba,	// (0x00033d74) bg_set_opt_pane_cp_copy1_ParamLimits

0x22ba,	// (0x00033d74) bg_set_opt_pane_cp_copy1

0x9db8,	// (0x0003b872) setting_slider_pane_t1_copy1_ParamLimits

0x9db8,	// (0x0003b872) setting_slider_pane_t1_copy1

0xf23f,	// (0x00040cf9) setting_slider_pane_t2_copy1_ParamLimits

0xf23f,	// (0x00040cf9) setting_slider_pane_t2_copy1

0xf259,	// (0x00040d13) setting_slider_pane_t3_copy1_ParamLimits

0xf259,	// (0x00040d13) setting_slider_pane_t3_copy1

0xf271,	// (0x00040d2b) slider_set_pane_copy1_ParamLimits

0xf271,	// (0x00040d2b) slider_set_pane_copy1

0x2ba8,	// (0x00034662) set_opt_bg_pane_g1_copy2

0x2bb0,	// (0x0003466a) set_opt_bg_pane_g2_copy2

0x9e1e,	// (0x0003b8d8) set_opt_bg_pane_g3_copy2

0x2bc0,	// (0x0003467a) set_opt_bg_pane_g4_copy2

0x2bc8,	// (0x00034682) set_opt_bg_pane_g5_copy2

0x2bd0,	// (0x0003468a) set_opt_bg_pane_g6_copy2

0xf287,	// (0x00040d41) set_opt_bg_pane_g7_copy2

0x9e32,	// (0x0003b8ec) set_opt_bg_pane_g8_copy2

0x9e3c,	// (0x0003b8f6) set_opt_bg_pane_g9_copy2

0x21a2,	// (0x00033c5c) aid_size_touch_slider_mark_copy1_ParamLimits

0x21a2,	// (0x00033c5c) aid_size_touch_slider_mark_copy1

0x9e46,	// (0x0003b900) slider_set_pane_g1_copy1

0x21b6,	// (0x00033c70) slider_set_pane_g2_copy1

0x0e67,	// (0x00032921) slider_set_pane_g3_copy1_ParamLimits

0x0e67,	// (0x00032921) slider_set_pane_g3_copy1

0x0e7b,	// (0x00032935) slider_set_pane_g4_copy1_ParamLimits

0x0e7b,	// (0x00032935) slider_set_pane_g4_copy1

0x0e93,	// (0x0003294d) slider_set_pane_g5_copy1_ParamLimits

0x0e93,	// (0x0003294d) slider_set_pane_g5_copy1

0x0e67,	// (0x00032921) slider_set_pane_g6_copy1_ParamLimits

0x0e67,	// (0x00032921) slider_set_pane_g6_copy1

0xc2dd,	// (0x0003dd97) slider_set_pane_g7_copy1_ParamLimits

0xc2dd,	// (0x0003dd97) slider_set_pane_g7_copy1

0xe051,	// (0x0003fb0b) bg_set_opt_pane_cp2_copy1

0x9e4f,	// (0x0003b909) setting_slider_graphic_pane_g1_copy1

0xf291,	// (0x00040d4b) setting_slider_graphic_pane_t1_copy1

0xf2a1,	// (0x00040d5b) setting_slider_graphic_pane_t2_copy1

0xf2b1,	// (0x00040d6b) slider_set_pane_cp_copy1

0x9e88,	// (0x0003b942) input_focus_pane_cp1_copy1

0x9e91,	// (0x0003b94b) list_set_text_pane_copy1

0x9e99,	// (0x0003b953) setting_text_pane_g1_copy1

0x304e,	// (0x00034b08) set_text_pane_t1_copy1

0x9e88,	// (0x0003b942) input_focus_pane_cp2_copy1

0x9e99,	// (0x0003b953) setting_code_pane_g1_copy1

0xf2b9,	// (0x00040d73) setting_code_pane_t1_copy1

0xf2c7,	// (0x00040d81) list_set_graphic_pane_copy1

0xe051,	// (0x0003fb0b) bg_set_opt_pane_cp4_copy1

0xc558,	// (0x0003e012) list_set_graphic_pane_g1_copy1_ParamLimits

0xc558,	// (0x0003e012) list_set_graphic_pane_g1_copy1

0xf2d9,	// (0x00040d93) list_set_graphic_pane_g2_copy1

0xc570,	// (0x0003e02a) list_set_graphic_pane_t1_copy1_ParamLimits

0xc570,	// (0x0003e02a) list_set_graphic_pane_t1_copy1

0x6df9,	// (0x000388b3) rs_clock_indi_pane_g1

0x9eca,	// (0x0003b984) rs_clock_indi_pane_t1

0x9ed8,	// (0x0003b992) rs_indi_pane

0x9ee0,	// (0x0003b99a) rs_indi_pane_g1

0x9ee9,	// (0x0003b9a3) rs_indi_pane_g2

0x9ef2,	// (0x0003b9ac) rs_indi_pane_g3

0x0002,

0xfedb,	// (0x00041995) rs_indi_pane_g

0x3973,	// (0x0003542d) bg_popup_preview_window_pane_cp03

0x9efb,	// (0x0003b9b5) popup_fep_tooltip_window_t1

0x7a9f,	// (0x00039559) popup_note2_window_g2_ParamLimits

0x7a9f,	// (0x00039559) popup_note2_window_g2

0x0001,

0xfc74,	// (0x0004172e) popup_note2_window_g_ParamLimits

0xfc74,	// (0x0004172e) popup_note2_window_g

0x7fa7,	// (0x00039a61) bg_popup_sub_pane_cp11_ParamLimits

0x7fb4,	// (0x00039a6e) cell_ai3_links_pane_g1_ParamLimits

0x7fcb,	// (0x00039a85) cell_ai3_links_pane_t1

0x304e,	// (0x00034b08) set_text_pane_t1_copy1_ParamLimits

0x3880,	// (0x0003533a) cell_graphic_popup_pane_cp2_ParamLimits

0x3880,	// (0x0003533a) cell_graphic_popup_pane_cp2

0x9f09,	// (0x0003b9c3) cell_graphic_popup_pane_g1_cp2

0x288c,	// (0x00034346) cell_graphic_popup_pane_g2_cp2

0x9f11,	// (0x0003b9cb) cell_graphic_popup_pane_g3_cp2

0x9f19,	// (0x0003b9d3) cell_graphic_popup_pane_t2_cp2

0x289d,	// (0x00034357) grid_highlight_pane_cp3_cp2

0x309d,	// (0x00034b57) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x2b41,	// (0x000345fb) main_tmo_pane_ParamLimits

0xdf3f,	// (0x0003f9f9) popup_tmo_big_image_note_window

0xeb83,	// (0x0004063d) cell_ai5_widget_list_pane

0xeb8b,	// (0x00040645) cell_ai5_widget_lrg_icon_pane

0xee94,	// (0x0004094e) tmo_note_info_pane_t1_ParamLimits

0xeea9,	// (0x00040963) tmo_note_info_pane_t2_ParamLimits

0xeec2,	// (0x0004097c) tmo_note_info_pane_t3_ParamLimits

0x9aae,	// (0x0003b568) tmo_note_info_pane_t4_ParamLimits

0x9ac0,	// (0x0003b57a) tmo_note_info_pane_t5_ParamLimits

0xfec9,	// (0x00041983) tmo_note_info_pane_t_ParamLimits

0xf098,	// (0x00040b52) settings_container_pane_ParamLimits

0x9e80,	// (0x0003b93a) indicator_popup_pane_cp5

0x9e80,	// (0x0003b93a) indicator_popup_pane_cp6

0xf2c7,	// (0x00040d81) list_set_graphic_pane_copy1_ParamLimits

0xe03d,	// (0x0003faf7) bg_popup_window_pane_cp23

0x9f27,	// (0x0003b9e1) popup_tmo_big_image_note_window_g1

0x9f33,	// (0x0003b9ed) popup_tmo_big_image_note_window_t1

0x9f43,	// (0x0003b9fd) popup_tmo_big_image_note_window_t2

0x9f53,	// (0x0003ba0d) popup_tmo_big_image_note_window_t3

0x0002,

0xfee2,	// (0x0004199c) popup_tmo_big_image_note_window_t

0xf2e1,	// (0x00040d9b) cell_ai5_widget_lrg_icon_pane_g1

0xf2e9,	// (0x00040da3) cell_ai5_widget_lrg_icon_pane_t1

0xf2f7,	// (0x00040db1) cell_ai5_widget_list_row_pane_ParamLimits

0xf2f7,	// (0x00040db1) cell_ai5_widget_list_row_pane

0xf310,	// (0x00040dca) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf310,	// (0x00040dca) cell_ai5_widget_list_row_pane_g1

0xf31d,	// (0x00040dd7) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf31d,	// (0x00040dd7) cell_ai5_widget_list_row_pane_t1

0xf335,	// (0x00040def) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf335,	// (0x00040def) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfee9,	// (0x000419a3) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfee9,	// (0x000419a3) cell_ai5_widget_list_row_pane_t

0xf350,	// (0x00040e0a) main_fep_vtchi_ss_pane

0x9fc9,	// (0x0003ba83) popup_fep_char_pre_window

0x9fd1,	// (0x0003ba8b) popup_fep_ituss_window

0x9feb,	// (0x0003baa5) popup_fep_vkbss_window

0xa00b,	// (0x0003bac5) grid_vkbss_keypad_pane_ParamLimits

0xa00b,	// (0x0003bac5) grid_vkbss_keypad_pane

0xa01b,	// (0x0003bad5) ituss_keypad_pane

0xa031,	// (0x0003baeb) aid_vkbss_key_offset_ParamLimits

0xa031,	// (0x0003baeb) aid_vkbss_key_offset

0xa03d,	// (0x0003baf7) cell_vkbss_key_pane_ParamLimits

0xa03d,	// (0x0003baf7) cell_vkbss_key_pane

0xa053,	// (0x0003bb0d) bg_cell_vkbss_key_g1_ParamLimits

0xa053,	// (0x0003bb0d) bg_cell_vkbss_key_g1

0xa05f,	// (0x0003bb19) cell_vkbss_key_3p_pane_ParamLimits

0xa05f,	// (0x0003bb19) cell_vkbss_key_3p_pane

0xa079,	// (0x0003bb33) cell_vkbss_key_g1_ParamLimits

0xa079,	// (0x0003bb33) cell_vkbss_key_g1

0xa093,	// (0x0003bb4d) cell_vkbss_key_t1_ParamLimits

0xa093,	// (0x0003bb4d) cell_vkbss_key_t1

0xa0be,	// (0x0003bb78) cell_ituss_key_pane_ParamLimits

0xa0be,	// (0x0003bb78) cell_ituss_key_pane

0xa0ce,	// (0x0003bb88) bg_cell_ituss_key_g1_ParamLimits

0xa0ce,	// (0x0003bb88) bg_cell_ituss_key_g1

0xa0da,	// (0x0003bb94) cell_ituss_key_pane_g1_ParamLimits

0xa0da,	// (0x0003bb94) cell_ituss_key_pane_g1

0xa0e6,	// (0x0003bba0) cell_ituss_key_pane_g2_ParamLimits

0xa0e6,	// (0x0003bba0) cell_ituss_key_pane_g2

0x0001,

0xfeee,	// (0x000419a8) cell_ituss_key_pane_g_ParamLimits

0xfeee,	// (0x000419a8) cell_ituss_key_pane_g

0xa0ff,	// (0x0003bbb9) cell_ituss_key_t1_ParamLimits

0xa0ff,	// (0x0003bbb9) cell_ituss_key_t1

0xa12d,	// (0x0003bbe7) cell_ituss_key_t2_ParamLimits

0xa12d,	// (0x0003bbe7) cell_ituss_key_t2

0xa15e,	// (0x0003bc18) cell_ituss_key_t3_ParamLimits

0xa15e,	// (0x0003bc18) cell_ituss_key_t3

0xa18f,	// (0x0003bc49) cell_ituss_key_t4_ParamLimits

0xa18f,	// (0x0003bc49) cell_ituss_key_t4

0x0003,

0xfef3,	// (0x000419ad) cell_ituss_key_t_ParamLimits

0xfef3,	// (0x000419ad) cell_ituss_key_t

0xa1c0,	// (0x0003bc7a) cell_vkbss_key_3p_pane_g1

0xa1c8,	// (0x0003bc82) cell_vkbss_key_3p_pane_g2

0xa1d0,	// (0x0003bc8a) cell_vkbss_key_3p_pane_g3

0x0002,

0xfefc,	// (0x000419b6) cell_vkbss_key_3p_pane_g

0xe03d,	// (0x0003faf7) bg_popup_fep_char_preview_window_cp02

0xa1d8,	// (0x0003bc92) popup_fep_char_pre_window_t1

0xeb79,	// (0x00040633) main_ai5_sk_pane

0x9b3a,	// (0x0003b5f4) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x9b46,	// (0x0003b600) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x9b5a,	// (0x0003b614) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x9b69,	// (0x0003b623) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfed4,	// (0x0004198e) cell_contacts_ai5_widget_pane_g_ParamLimits

0x9b7c,	// (0x0003b636) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x2b41,	// (0x000345fb) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf347,	// (0x00040e01) main_ai5_sk_pane_g1

0x4ce8,	// (0x000367a2) popup_query_code_window_g1

0x9fe0,	// (0x0003ba9a) popup_fep_vkb_icf_pane

0x9ff6,	// (0x0003bab0) popup_fep_vtchi_icf_pane

0x2b41,	// (0x000345fb) bg_icf_pane

0xa1ff,	// (0x0003bcb9) list_vkb_icf_pane

0x2b41,	// (0x000345fb) bg_icf_pane_cp01

0xa217,	// (0x0003bcd1) vtchi_icf_list_pane

0xa227,	// (0x0003bce1) list_vkb_icf_pane_t1_ParamLimits

0xa227,	// (0x0003bce1) list_vkb_icf_pane_t1

0xa23e,	// (0x0003bcf8) vtchi_icf_list_pane_t1_ParamLimits

0xa23e,	// (0x0003bcf8) vtchi_icf_list_pane_t1

0x9fd1,	// (0x0003ba8b) popup_fep_ituss_window_ParamLimits

0x9ff6,	// (0x0003bab0) popup_fep_vtchi_icf_pane_ParamLimits

0xa01b,	// (0x0003bad5) ituss_keypad_pane_ParamLimits

0xa027,	// (0x0003bae1) ituss_sks_pane

0x2b41,	// (0x000345fb) bg_icf_pane_ParamLimits

0xa1f0,	// (0x0003bcaa) icf_edit_indi_pane_ParamLimits

0xa1f0,	// (0x0003bcaa) icf_edit_indi_pane

0xa1ff,	// (0x0003bcb9) list_vkb_icf_pane_ParamLimits

0x2b41,	// (0x000345fb) bg_icf_pane_cp01_ParamLimits

0xa20b,	// (0x0003bcc5) icf_edit_indi_pane_cp01_ParamLimits

0xa20b,	// (0x0003bcc5) icf_edit_indi_pane_cp01

0xa21f,	// (0x0003bcd9) vtchi_query_pane

0x7083,	// (0x00038b3d) icf_edit_indi_pane_g1_ParamLimits

0x7083,	// (0x00038b3d) icf_edit_indi_pane_g1

0xa257,	// (0x0003bd11) icf_edit_indi_pane_g2_ParamLimits

0xa257,	// (0x0003bd11) icf_edit_indi_pane_g2

0x0001,

0xff03,	// (0x000419bd) icf_edit_indi_pane_g_ParamLimits

0xff03,	// (0x000419bd) icf_edit_indi_pane_g

0xa263,	// (0x0003bd1d) icf_edit_indi_pane_t1

0xa271,	// (0x0003bd2b) bg_input_focus_pane_cp042

0x2a70,	// (0x0003452a) vtchi_button_pane

0xa27a,	// (0x0003bd34) vtchi_query_pane_t1

0xa288,	// (0x0003bd42) vtchi_query_pane_t2

0xa296,	// (0x0003bd50) vtchi_query_pane_t3

0x0002,

0xff08,	// (0x000419c2) vtchi_query_pane_t

0xe03d,	// (0x0003faf7) bg_button_pane_cp13

0xa2a4,	// (0x0003bd5e) vtchi_button_pane_g1

0xa2ac,	// (0x0003bd66) ituss_sks_pane_g1

0xa2b7,	// (0x0003bd71) ituss_sks_pane_g2

0x0001,

0xff0f,	// (0x000419c9) ituss_sks_pane_g

0xa2bf,	// (0x0003bd79) ituss_sks_pane_t1

0xa2cd,	// (0x0003bd87) ituss_sks_pane_t2

0x0001,

0xff14,	// (0x000419ce) ituss_sks_pane_t

0x6916,	// (0x000383d0) indicator_nsta_pane_cp_g1

0x691f,	// (0x000383d9) indicator_nsta_pane_cp_g2

0x6927,	// (0x000383e1) indicator_nsta_pane_cp_g3

0x692f,	// (0x000383e9) indicator_nsta_pane_cp_g4

0x6937,	// (0x000383f1) indicator_nsta_pane_cp_g5

0x693f,	// (0x000383f9) indicator_nsta_pane_cp_g6

0x0005,

0xfab2,	// (0x0004156c) indicator_nsta_pane_cp_g

0xe996,	// (0x00040450) cell_graphic2_pane_t2_ParamLimits

0xe996,	// (0x00040450) cell_graphic2_pane_t2

0x0001,

0xfdcb,	// (0x00041885) cell_graphic2_pane_t_ParamLimits

0xfdcb,	// (0x00041885) cell_graphic2_pane_t

0xe9ce,	// (0x00040488) cell_graphic2_control_pane_t1

0xc4cf,	// (0x0003df89) signal_pane_g3_ParamLimits

0xc4cf,	// (0x0003df89) signal_pane_g3

0xc4e3,	// (0x0003df9d) signal_pane_g4_ParamLimits

0xc4e3,	// (0x0003df9d) signal_pane_g4
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
	};

} // end of namespace AknLayoutScalable_Abrw_pvl4_av_vga4_lsc_tch_Small

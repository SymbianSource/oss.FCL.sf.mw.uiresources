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

#include "aknlayoutscalable_elaf_phl_av_qhd_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_phl_av_qhd_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x00000000 };

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
0xb54e,	// (0x0000b54e) Screen

0xb55a,	// (0x0000b55a) application_window_ParamLimits

0xb55a,	// (0x0000b55a) application_window

0x002e,	// (0x0000002e) screen_g1

0xb592,	// (0x0000b592) area_bottom_pane_ParamLimits

0xb592,	// (0x0000b592) area_bottom_pane

0x0144,	// (0x00000144) area_top_pane_ParamLimits

0x0144,	// (0x00000144) area_top_pane

0x01d8,	// (0x000001d8) main_pane_ParamLimits

0x01d8,	// (0x000001d8) main_pane

0x0293,	// (0x00000293) misc_graphics

0xcca6,	// (0x0000cca6) battery_pane_ParamLimits

0xcca6,	// (0x0000cca6) battery_pane

0x4142,	// (0x00004142) bg_status_flat_pane_g8

0x414a,	// (0x0000414a) bg_status_flat_pane_g9

0x329d,	// (0x0000329d) context_pane_ParamLimits

0x329d,	// (0x0000329d) context_pane

0xce11,	// (0x0000ce11) navi_pane_ParamLimits

0xce11,	// (0x0000ce11) navi_pane

0xce8f,	// (0x0000ce8f) signal_pane_ParamLimits

0xce8f,	// (0x0000ce8f) signal_pane

0x0008,

0xaeb9,	// (0x0000aeb9) bg_status_flat_pane_g

0xcf1f,	// (0x0000cf1f) status_pane_g1_ParamLimits

0xcf1f,	// (0x0000cf1f) status_pane_g1

0xcf35,	// (0x0000cf35) status_pane_g2_ParamLimits

0xcf35,	// (0x0000cf35) status_pane_g2

0x34c4,	// (0x000034c4) status_pane_g3_ParamLimits

0x34c4,	// (0x000034c4) status_pane_g3

0x0004,

0xf37d,	// (0x0000f37d) status_pane_g_ParamLimits

0xf37d,	// (0x0000f37d) status_pane_g

0xcf41,	// (0x0000cf41) title_pane_ParamLimits

0xcf41,	// (0x0000cf41) title_pane

0xcfa4,	// (0x0000cfa4) uni_indicator_pane_ParamLimits

0xcfa4,	// (0x0000cfa4) uni_indicator_pane

0x2b36,	// (0x00002b36) bg_list_pane_ParamLimits

0x2b36,	// (0x00002b36) bg_list_pane

0xc54d,	// (0x0000c54d) find_pane

0xc555,	// (0x0000c555) listscroll_app_pane_ParamLimits

0xc555,	// (0x0000c555) listscroll_app_pane

0x2b6a,	// (0x00002b6a) listscroll_form_pane

0xc565,	// (0x0000c565) listscroll_gen_pane_ParamLimits

0xc565,	// (0x0000c565) listscroll_gen_pane

0x2b86,	// (0x00002b86) listscroll_set_pane

0x4f17,	// (0x00004f17) main_idle_act_pane

0x2613,	// (0x00002613) main_idle_trad_pane

0x2613,	// (0x00002613) main_list_empty_pane

0x2ba0,	// (0x00002ba0) main_midp_pane

0x2bac,	// (0x00002bac) main_pane_g1_ParamLimits

0x2bac,	// (0x00002bac) main_pane_g1

0xc579,	// (0x0000c579) popup_ai_message_window_ParamLimits

0xc579,	// (0x0000c579) popup_ai_message_window

0xc60a,	// (0x0000c60a) popup_fep_china_uni_window_ParamLimits

0xc60a,	// (0x0000c60a) popup_fep_china_uni_window

0x2cc4,	// (0x00002cc4) popup_fep_japan_candidate_window_ParamLimits

0x2cc4,	// (0x00002cc4) popup_fep_japan_candidate_window

0x2ce4,	// (0x00002ce4) popup_fep_japan_predictive_window_ParamLimits

0x2ce4,	// (0x00002ce4) popup_fep_japan_predictive_window

0xc666,	// (0x0000c666) popup_find_window

0xc683,	// (0x0000c683) popup_grid_graphic_window_ParamLimits

0xc683,	// (0x0000c683) popup_grid_graphic_window

0x2d4b,	// (0x00002d4b) popup_large_graphic_colour_window

0xc721,	// (0x0000c721) popup_menu_window_ParamLimits

0xc721,	// (0x0000c721) popup_menu_window

0xc8f3,	// (0x0000c8f3) popup_note_image_window

0xc8b9,	// (0x0000c8b9) popup_note_wait_window_ParamLimits

0xc8b9,	// (0x0000c8b9) popup_note_wait_window

0xc90b,	// (0x0000c90b) popup_note_window_ParamLimits

0xc90b,	// (0x0000c90b) popup_note_window

0xc9b1,	// (0x0000c9b1) popup_query_code_window_ParamLimits

0xc9b1,	// (0x0000c9b1) popup_query_code_window

0x2f93,	// (0x00002f93) popup_query_data_code_window_ParamLimits

0x2f93,	// (0x00002f93) popup_query_data_code_window

0xc9eb,	// (0x0000c9eb) popup_query_data_window_ParamLimits

0xc9eb,	// (0x0000c9eb) popup_query_data_window

0xca6d,	// (0x0000ca6d) popup_query_sat_info_window_ParamLimits

0xca6d,	// (0x0000ca6d) popup_query_sat_info_window

0xcb04,	// (0x0000cb04) popup_snote_single_graphic_window_ParamLimits

0xcb04,	// (0x0000cb04) popup_snote_single_graphic_window

0xcb04,	// (0x0000cb04) popup_snote_single_text_window_ParamLimits

0xcb04,	// (0x0000cb04) popup_snote_single_text_window

0x301a,	// (0x0000301a) popup_sub_window_general

0x314a,	// (0x0000314a) popup_window_general_ParamLimits

0x314a,	// (0x0000314a) popup_window_general

0x315f,	// (0x0000315f) power_save_pane

0xc3ab,	// (0x0000c3ab) control_pane_g1_ParamLimits

0xc3ab,	// (0x0000c3ab) control_pane_g1

0xc3d4,	// (0x0000c3d4) control_pane_g2_ParamLimits

0xc3d4,	// (0x0000c3d4) control_pane_g2

0x29d1,	// (0x000029d1) control_pane_g3_ParamLimits

0x29d1,	// (0x000029d1) control_pane_g3

0x0007,

0xf365,	// (0x0000f365) control_pane_g_ParamLimits

0xf365,	// (0x0000f365) control_pane_g

0xc43c,	// (0x0000c43c) control_pane_t1_ParamLimits

0xc43c,	// (0x0000c43c) control_pane_t1

0xc4a2,	// (0x0000c4a2) control_pane_t2_ParamLimits

0xc4a2,	// (0x0000c4a2) control_pane_t2

0x0002,

0xf376,	// (0x0000f376) control_pane_t_ParamLimits

0xf376,	// (0x0000f376) control_pane_t

0xc304,	// (0x0000c304) navi_navi_volume_pane_cp1

0xc30c,	// (0x0000c30c) status_small_icon_pane

0x28b8,	// (0x000028b8) status_small_pane_g1_ParamLimits

0x28b8,	// (0x000028b8) status_small_pane_g1

0xc314,	// (0x0000c314) status_small_pane_g2_ParamLimits

0xc314,	// (0x0000c314) status_small_pane_g2

0xc320,	// (0x0000c320) status_small_pane_g3_ParamLimits

0xc320,	// (0x0000c320) status_small_pane_g3

0xc32c,	// (0x0000c32c) status_small_pane_g4_ParamLimits

0xc32c,	// (0x0000c32c) status_small_pane_g4

0xc338,	// (0x0000c338) status_small_pane_g5_ParamLimits

0xc338,	// (0x0000c338) status_small_pane_g5

0xc346,	// (0x0000c346) status_small_pane_g6_ParamLimits

0xc346,	// (0x0000c346) status_small_pane_g6

0x0007,

0xf354,	// (0x0000f354) status_small_pane_g_ParamLimits

0xf354,	// (0x0000f354) status_small_pane_g

0xc375,	// (0x0000c375) status_small_pane_t1

0xc397,	// (0x0000c397) status_small_wait_pane_ParamLimits

0xc397,	// (0x0000c397) status_small_wait_pane

0xc13e,	// (0x0000c13e) aid_levels_signal_ParamLimits

0xc13e,	// (0x0000c13e) aid_levels_signal

0xc156,	// (0x0000c156) signal_pane_g1_ParamLimits

0xc156,	// (0x0000c156) signal_pane_g1

0xc171,	// (0x0000c171) signal_pane_g2_ParamLimits

0xc171,	// (0x0000c171) signal_pane_g2

0x0003,

0xf334,	// (0x0000f334) signal_pane_g_ParamLimits

0xf334,	// (0x0000f334) signal_pane_g

0x1eba,	// (0x00001eba) context_pane_g1

0xb770,	// (0x0000b770) title_pane_g1

0xb7a7,	// (0x0000b7a7) title_pane_t1

0x04cf,	// (0x000004cf) title_pane_t2

0x04f5,	// (0x000004f5) title_pane_t3

0x0002,

0xf261,	// (0x0000f261) title_pane_t

0xcfcc,	// (0x0000cfcc) aid_levels_battery_ParamLimits

0xcfcc,	// (0x0000cfcc) aid_levels_battery

0xcfe8,	// (0x0000cfe8) battery_pane_g1_ParamLimits

0xcfe8,	// (0x0000cfe8) battery_pane_g1

0xd005,	// (0x0000d005) battery_pane_g2_ParamLimits

0xd005,	// (0x0000d005) battery_pane_g2

0x0001,

0xf388,	// (0x0000f388) battery_pane_g_ParamLimits

0xf388,	// (0x0000f388) battery_pane_g

0xd24e,	// (0x0000d24e) uni_indicator_pane_g1

0xd264,	// (0x0000d264) uni_indicator_pane_g2

0xd27a,	// (0x0000d27a) uni_indicator_pane_g3

0x0005,

0xf3bf,	// (0x0000f3bf) uni_indicator_pane_g

0x2485,	// (0x00002485) navi_icon_pane_ParamLimits

0x2485,	// (0x00002485) navi_icon_pane

0x23c3,	// (0x000023c3) navi_midp_pane

0x24a1,	// (0x000024a1) navi_navi_pane

0x24ab,	// (0x000024ab) navi_text_pane_ParamLimits

0x24ab,	// (0x000024ab) navi_text_pane

0x002e,	// (0x0000002e) status_small_wait_pane_g1

0x09cf,	// (0x000009cf) status_small_wait_pane_g2

0x0001,

0xaf5c,	// (0x0000af5c) status_small_wait_pane_g

0x4901,	// (0x00004901) navi_navi_icon_text_pane

0x4909,	// (0x00004909) navi_navi_pane_g1_ParamLimits

0x4909,	// (0x00004909) navi_navi_pane_g1

0x491b,	// (0x0000491b) navi_navi_pane_g2_ParamLimits

0x491b,	// (0x0000491b) navi_navi_pane_g2

0x0001,

0xaf2a,	// (0x0000af2a) navi_navi_pane_g_ParamLimits

0xaf2a,	// (0x0000af2a) navi_navi_pane_g

0x492d,	// (0x0000492d) navi_navi_tabs_pane

0x4936,	// (0x00004936) navi_navi_text_pane

0x4901,	// (0x00004901) navi_navi_volume_pane

0x48dd,	// (0x000048dd) navi_text_pane_t1

0x48d1,	// (0x000048d1) navi_icon_pane_g1

0x4824,	// (0x00004824) navi_navi_text_pane_t1

0x4813,	// (0x00004813) navi_navi_volume_pane_g1

0x481b,	// (0x0000481b) volume_small_pane

0x4779,	// (0x00004779) navi_navi_icon_text_pane_g1

0x4781,	// (0x00004781) navi_navi_icon_text_pane_t1

0x24a1,	// (0x000024a1) navi_tabs_2_long_pane

0x24a1,	// (0x000024a1) navi_tabs_2_pane

0x24a1,	// (0x000024a1) navi_tabs_3_long_pane

0x24a1,	// (0x000024a1) navi_tabs_3_pane

0x24a1,	// (0x000024a1) navi_tabs_4_pane

0x46d8,	// (0x000046d8) tabs_2_active_pane_ParamLimits

0x46d8,	// (0x000046d8) tabs_2_active_pane

0x46e8,	// (0x000046e8) tabs_2_passive_pane_ParamLimits

0x46e8,	// (0x000046e8) tabs_2_passive_pane

0x46a6,	// (0x000046a6) tabs_3_active_pane_ParamLimits

0x46a6,	// (0x000046a6) tabs_3_active_pane

0x46b6,	// (0x000046b6) tabs_3_passive_pane_ParamLimits

0x46b6,	// (0x000046b6) tabs_3_passive_pane

0x46c7,	// (0x000046c7) tabs_3_passive_pane_cp_ParamLimits

0x46c7,	// (0x000046c7) tabs_3_passive_pane_cp

0x4662,	// (0x00004662) tabs_4_active_pane_ParamLimits

0x4662,	// (0x00004662) tabs_4_active_pane

0x4673,	// (0x00004673) tabs_4_passive_pane_ParamLimits

0x4673,	// (0x00004673) tabs_4_passive_pane

0x4684,	// (0x00004684) tabs_4_passive_pane_cp_ParamLimits

0x4684,	// (0x00004684) tabs_4_passive_pane_cp

0x4695,	// (0x00004695) tabs_4_passive_pane_cp2_ParamLimits

0x4695,	// (0x00004695) tabs_4_passive_pane_cp2

0x463e,	// (0x0000463e) tabs_2_long_active_pane_ParamLimits

0x463e,	// (0x0000463e) tabs_2_long_active_pane

0x4650,	// (0x00004650) tabs_2_long_passive_pane_ParamLimits

0x4650,	// (0x00004650) tabs_2_long_passive_pane

0x45ff,	// (0x000045ff) tabs_3_long_active_pane_ParamLimits

0x45ff,	// (0x000045ff) tabs_3_long_active_pane

0x4612,	// (0x00004612) tabs_3_long_passive_pane_ParamLimits

0x4612,	// (0x00004612) tabs_3_long_passive_pane

0x462b,	// (0x0000462b) tabs_3_long_passive_pane_cp_ParamLimits

0x462b,	// (0x0000462b) tabs_3_long_passive_pane_cp

0x45a5,	// (0x000045a5) volume_small_pane_g1

0x45ae,	// (0x000045ae) volume_small_pane_g2

0x45b7,	// (0x000045b7) volume_small_pane_g3

0x45c0,	// (0x000045c0) volume_small_pane_g4

0x45c9,	// (0x000045c9) volume_small_pane_g5

0x45d2,	// (0x000045d2) volume_small_pane_g6

0x45db,	// (0x000045db) volume_small_pane_g7

0x45e4,	// (0x000045e4) volume_small_pane_g8

0x45ed,	// (0x000045ed) volume_small_pane_g9

0x45f6,	// (0x000045f6) volume_small_pane_g10

0x0009,

0xaef6,	// (0x0000aef6) volume_small_pane_g

0x082d,	// (0x0000082d) bg_active_tab_pane_cp2_ParamLimits

0x082d,	// (0x0000082d) bg_active_tab_pane_cp2

0x0515,	// (0x00000515) tabs_3_active_pane_g1

0xb833,	// (0x0000b833) tabs_3_active_pane_t1

0x082d,	// (0x0000082d) bg_passive_tab_pane_cp2_ParamLimits

0x082d,	// (0x0000082d) bg_passive_tab_pane_cp2

0x0515,	// (0x00000515) tabs_3_passive_pane_g1

0xb833,	// (0x0000b833) tabs_3_passive_pane_t1

0x082d,	// (0x0000082d) bg_active_tab_pane_cp3_ParamLimits

0x082d,	// (0x0000082d) bg_active_tab_pane_cp3

0x052f,	// (0x0000052f) tabs_4_active_pane_g1

0xb845,	// (0x0000b845) tabs_4_active_pane_t1

0x082d,	// (0x0000082d) bg_passive_tab_pane_cp3_ParamLimits

0x082d,	// (0x0000082d) bg_passive_tab_pane_cp3

0x052f,	// (0x0000052f) tabs_4_1_passive_pane_g1

0xb845,	// (0x0000b845) tabs_4_1_passive_pane_t1

0x2ba0,	// (0x00002ba0) list_highlight_pane_cp2

0xd312,	// (0x0000d312) list_set_pane_ParamLimits

0xd312,	// (0x0000d312) list_set_pane

0xd3ac,	// (0x0000d3ac) main_pane_set_t1_ParamLimits

0xd3ac,	// (0x0000d3ac) main_pane_set_t1

0xd3cc,	// (0x0000d3cc) main_pane_set_t2_ParamLimits

0xd3cc,	// (0x0000d3cc) main_pane_set_t2

0xd3e0,	// (0x0000d3e0) main_pane_set_t3_ParamLimits

0xd3e0,	// (0x0000d3e0) main_pane_set_t3

0xd3f2,	// (0x0000d3f2) main_pane_set_t4_ParamLimits

0xd3f2,	// (0x0000d3f2) main_pane_set_t4

0x0003,

0xf3d1,	// (0x0000f3d1) main_pane_set_t_ParamLimits

0xf3d1,	// (0x0000f3d1) main_pane_set_t

0xd404,	// (0x0000d404) setting_code_pane

0xd40e,	// (0x0000d40e) setting_slider_graphic_pane

0xd40e,	// (0x0000d40e) setting_slider_pane

0xd40e,	// (0x0000d40e) setting_text_pane

0xd40e,	// (0x0000d40e) setting_volume_pane

0x0549,	// (0x00000549) volume_set_pane

0x0507,	// (0x00000507) bg_set_opt_pane_cp

0x0551,	// (0x00000551) setting_slider_pane_t1

0x056a,	// (0x0000056a) setting_slider_pane_t2

0x0584,	// (0x00000584) setting_slider_pane_t3

0x0002,

0xabaa,	// (0x0000abaa) setting_slider_pane_t

0x059c,	// (0x0000059c) slider_set_pane

0x0293,	// (0x00000293) bg_set_opt_pane_cp2

0x05b2,	// (0x000005b2) setting_slider_graphic_pane_g1

0x05bb,	// (0x000005bb) setting_slider_graphic_pane_t1

0x05cb,	// (0x000005cb) setting_slider_graphic_pane_t2

0x0001,

0xabb1,	// (0x0000abb1) setting_slider_graphic_pane_t

0x05db,	// (0x000005db) slider_set_pane_cp

0x0293,	// (0x00000293) input_focus_pane_cp1

0x4efe,	// (0x00004efe) list_set_text_pane

0x002e,	// (0x0000002e) setting_text_pane_g1

0x0293,	// (0x00000293) input_focus_pane_cp2

0x002e,	// (0x0000002e) setting_code_pane_g1

0x05e3,	// (0x000005e3) setting_code_pane_t1

0x05f1,	// (0x000005f1) set_text_pane_t1_ParamLimits

0x05f1,	// (0x000005f1) set_text_pane_t1

0x14bf,	// (0x000014bf) set_opt_bg_pane_g1

0x14c7,	// (0x000014c7) set_opt_bg_pane_g2

0x4ed8,	// (0x00004ed8) set_opt_bg_pane_g3

0x14d7,	// (0x000014d7) set_opt_bg_pane_g4

0x14df,	// (0x000014df) set_opt_bg_pane_g5

0x14e7,	// (0x000014e7) set_opt_bg_pane_g6

0x4ee2,	// (0x00004ee2) set_opt_bg_pane_g7

0x4eea,	// (0x00004eea) set_opt_bg_pane_g8

0x4ef4,	// (0x00004ef4) set_opt_bg_pane_g9

0x0008,

0xafb3,	// (0x0000afb3) set_opt_bg_pane_g

0x4e67,	// (0x00004e67) slider_set_pane_g1

0x4e74,	// (0x00004e74) slider_set_pane_g2

0x0006,

0xafa4,	// (0x0000afa4) slider_set_pane_g

0x4ce7,	// (0x00004ce7) volume_set_pane_g1

0x4cef,	// (0x00004cef) volume_set_pane_g2

0x4cf7,	// (0x00004cf7) volume_set_pane_g3

0x4cff,	// (0x00004cff) volume_set_pane_g4

0x4d07,	// (0x00004d07) volume_set_pane_g5

0x4d0f,	// (0x00004d0f) volume_set_pane_g6

0x4d17,	// (0x00004d17) volume_set_pane_g7

0x4d1f,	// (0x00004d1f) volume_set_pane_g8

0x4d27,	// (0x00004d27) volume_set_pane_g9

0x4d2f,	// (0x00004d2f) volume_set_pane_g10

0x0009,

0xaf7c,	// (0x0000af7c) volume_set_pane_g

0xb857,	// (0x0000b857) indicator_pane_ParamLimits

0xb857,	// (0x0000b857) indicator_pane

0xb87f,	// (0x0000b87f) main_idle_pane_g2_ParamLimits

0xb87f,	// (0x0000b87f) main_idle_pane_g2

0xb8b7,	// (0x0000b8b7) main_pane_idle_g1_ParamLimits

0xb8b7,	// (0x0000b8b7) main_pane_idle_g1

0x064c,	// (0x0000064c) popup_clock_digital_analogue_window_ParamLimits

0x064c,	// (0x0000064c) popup_clock_digital_analogue_window

0xb8de,	// (0x0000b8de) soft_indicator_pane_ParamLimits

0xb8de,	// (0x0000b8de) soft_indicator_pane

0xb8f8,	// (0x0000b8f8) wallpaper_pane_ParamLimits

0xb8f8,	// (0x0000b8f8) wallpaper_pane

0x002e,	// (0x0000002e) wallpaper_pane_g1

0xb90a,	// (0x0000b90a) indicator_pane_g1_ParamLimits

0xb90a,	// (0x0000b90a) indicator_pane_g1

0x5466,	// (0x00005466) navi_navi_icon_text_pane_srt_g1

0x069e,	// (0x0000069e) soft_indicator_pane_t1

0x06b8,	// (0x000006b8) aid_ps_area_pane

0xb920,	// (0x0000b920) aid_ps_clock_pane

0x06d7,	// (0x000006d7) aid_ps_indicator_pane

0x06e3,	// (0x000006e3) indicator_ps_pane_ParamLimits

0x06e3,	// (0x000006e3) indicator_ps_pane

0x06f2,	// (0x000006f2) power_save_pane_g1_ParamLimits

0x06f2,	// (0x000006f2) power_save_pane_g1

0x06fe,	// (0x000006fe) power_save_pane_g2_ParamLimits

0x06fe,	// (0x000006fe) power_save_pane_g2

0x0038,	// (0x00000038) aid_navinavi_width_pane

0x06b8,	// (0x000006b8) aid_ps_area_pane_ParamLimits

0x0001,

0xabb6,	// (0x0000abb6) power_save_pane_g_ParamLimits

0xabb6,	// (0x0000abb6) power_save_pane_g

0x070c,	// (0x0000070c) power_save_pane_t1_ParamLimits

0x070c,	// (0x0000070c) power_save_pane_t1

0xb920,	// (0x0000b920) aid_ps_clock_pane_ParamLimits

0x06d7,	// (0x000006d7) aid_ps_indicator_pane_ParamLimits

0x071e,	// (0x0000071e) power_save_pane_t4_ParamLimits

0x071e,	// (0x0000071e) power_save_pane_t4

0x0001,

0xabbb,	// (0x0000abbb) power_save_pane_t_ParamLimits

0xabbb,	// (0x0000abbb) power_save_pane_t

0x0748,	// (0x00000748) power_save_t3_ParamLimits

0x0748,	// (0x00000748) power_save_t3

0x0733,	// (0x00000733) power_save_t2_ParamLimits

0x0733,	// (0x00000733) power_save_t2

0x075d,	// (0x0000075d) indicator_ps_pane_g1

0xb92e,	// (0x0000b92e) ai_gene_pane_ParamLimits

0xb92e,	// (0x0000b92e) ai_gene_pane

0xb945,	// (0x0000b945) ai_links_pane_ParamLimits

0xb945,	// (0x0000b945) ai_links_pane

0xb95d,	// (0x0000b95d) indicator_pane_cp1_ParamLimits

0xb95d,	// (0x0000b95d) indicator_pane_cp1

0xb96c,	// (0x0000b96c) main_pane_idle_g1_cp_ParamLimits

0xb96c,	// (0x0000b96c) main_pane_idle_g1_cp

0x0796,	// (0x00000796) popup_ai_links_title_window

0xb984,	// (0x0000b984) soft_indicator_pane_cp1_ParamLimits

0xb984,	// (0x0000b984) soft_indicator_pane_cp1

0x4bca,	// (0x00004bca) ai_links_pane_g1

0x4bd3,	// (0x00004bd3) grid_ai_links_pane

0xd245,	// (0x0000d245) ai_gene_pane_1

0x4bb8,	// (0x00004bb8) ai_gene_pane_2

0x4bc1,	// (0x00004bc1) list_highlight_pane_cp4

0xd221,	// (0x0000d221) cell_ai_link_pane_ParamLimits

0xd221,	// (0x0000d221) cell_ai_link_pane

0x4b89,	// (0x00004b89) cell_ai_link_pane_g1

0x09cf,	// (0x000009cf) cell_ai_link_pane_g2

0x0001,

0xaf57,	// (0x0000af57) cell_ai_link_pane_g

0x0293,	// (0x00000293) grid_highlight_cp2

0x0293,	// (0x00000293) bg_popup_sub_pane_cp1

0x07b9,	// (0x000007b9) popup_ai_links_title_window_t1

0x4ad7,	// (0x00004ad7) ai_gene_pane_1_g1_ParamLimits

0x4ad7,	// (0x00004ad7) ai_gene_pane_1_g1

0x4ae3,	// (0x00004ae3) ai_gene_pane_1_g2_ParamLimits

0x4ae3,	// (0x00004ae3) ai_gene_pane_1_g2

0x0001,

0xaf4d,	// (0x0000af4d) ai_gene_pane_1_g_ParamLimits

0xaf4d,	// (0x0000af4d) ai_gene_pane_1_g

0x4af0,	// (0x00004af0) ai_gene_pane_1_t1_ParamLimits

0x4af0,	// (0x00004af0) ai_gene_pane_1_t1

0x4b24,	// (0x00004b24) grid_ai_soft_ind_pane

0x4ac2,	// (0x00004ac2) ai_gene_pane_2_t1_ParamLimits

0x4ac2,	// (0x00004ac2) ai_gene_pane_2_t1

0xb998,	// (0x0000b998) main_pane_empty_t1_ParamLimits

0xb998,	// (0x0000b998) main_pane_empty_t1

0xb9b0,	// (0x0000b9b0) main_pane_empty_t2_ParamLimits

0xb9b0,	// (0x0000b9b0) main_pane_empty_t2

0xb9c5,	// (0x0000b9c5) main_pane_empty_t3_ParamLimits

0xb9c5,	// (0x0000b9c5) main_pane_empty_t3

0xb9d7,	// (0x0000b9d7) main_pane_empty_t4_ParamLimits

0xb9d7,	// (0x0000b9d7) main_pane_empty_t4

0xb9e9,	// (0x0000b9e9) main_pane_empty_t5_ParamLimits

0xb9e9,	// (0x0000b9e9) main_pane_empty_t5

0x0004,

0xf268,	// (0x0000f268) main_pane_empty_t_ParamLimits

0xf268,	// (0x0000f268) main_pane_empty_t

0x15bc,	// (0x000015bc) bg_popup_window_pane_ParamLimits

0x15bc,	// (0x000015bc) bg_popup_window_pane

0x4832,	// (0x00004832) find_popup_pane_cp2_ParamLimits

0x4832,	// (0x00004832) find_popup_pane_cp2

0x483e,	// (0x0000483e) heading_pane_ParamLimits

0x483e,	// (0x0000483e) heading_pane

0x0293,	// (0x00000293) bg_popup_sub_pane

0xd1a2,	// (0x0000d1a2) bg_popup_window_pane_g1_ParamLimits

0xd1a2,	// (0x0000d1a2) bg_popup_window_pane_g1

0xd1b1,	// (0x0000d1b1) bg_popup_window_pane_g2_ParamLimits

0xd1b1,	// (0x0000d1b1) bg_popup_window_pane_g2

0xd1bd,	// (0x0000d1bd) bg_popup_window_pane_g3_ParamLimits

0xd1bd,	// (0x0000d1bd) bg_popup_window_pane_g3

0xd1c9,	// (0x0000d1c9) bg_popup_window_pane_g4_ParamLimits

0xd1c9,	// (0x0000d1c9) bg_popup_window_pane_g4

0xd1d8,	// (0x0000d1d8) bg_popup_window_pane_g5_ParamLimits

0xd1d8,	// (0x0000d1d8) bg_popup_window_pane_g5

0xd1e8,	// (0x0000d1e8) bg_popup_window_pane_g6_ParamLimits

0xd1e8,	// (0x0000d1e8) bg_popup_window_pane_g6

0xd1f4,	// (0x0000d1f4) bg_popup_window_pane_g7_ParamLimits

0xd1f4,	// (0x0000d1f4) bg_popup_window_pane_g7

0xd203,	// (0x0000d203) bg_popup_window_pane_g8_ParamLimits

0xd203,	// (0x0000d203) bg_popup_window_pane_g8

0xd212,	// (0x0000d212) bg_popup_window_pane_g9_ParamLimits

0xd212,	// (0x0000d212) bg_popup_window_pane_g9

0x4807,	// (0x00004807) bg_popup_window_pane_g10_ParamLimits

0x4807,	// (0x00004807) bg_popup_window_pane_g10

0x0009,

0xf3aa,	// (0x0000f3aa) bg_popup_window_pane_g_ParamLimits

0xf3aa,	// (0x0000f3aa) bg_popup_window_pane_g

0x4730,	// (0x00004730) bg_popup_heading_pane_ParamLimits

0x4730,	// (0x00004730) bg_popup_heading_pane

0x53a9,	// (0x000053a9) tabs_4_passive_pane_cp_srt_ParamLimits

0x53a9,	// (0x000053a9) tabs_4_passive_pane_cp_srt

0x53bb,	// (0x000053bb) tabs_4_passive_pane_srt_ParamLimits

0x4744,	// (0x00004744) heading_pane_g2

0x53bb,	// (0x000053bb) tabs_4_passive_pane_srt

0x38a3,	// (0x000038a3) bg_passive_tab_pane_cp3_srt_ParamLimits

0x38a3,	// (0x000038a3) bg_passive_tab_pane_cp3_srt

0x474c,	// (0x0000474c) heading_pane_t1_ParamLimits

0x474c,	// (0x0000474c) heading_pane_t1

0x4763,	// (0x00004763) heading_pane_t2_ParamLimits

0x4763,	// (0x00004763) heading_pane_t2

0x0001,

0xaf10,	// (0x0000af10) heading_pane_t_ParamLimits

0xaf10,	// (0x0000af10) heading_pane_t

0x410a,	// (0x0000410a) bg_popup_heading_pane_g1

0x41b9,	// (0x000041b9) bg_popup_heading_pane_g2

0x41c3,	// (0x000041c3) bg_popup_heading_pane_g3

0x41cd,	// (0x000041cd) bg_popup_heading_pane_g4

0x41d7,	// (0x000041d7) bg_popup_heading_pane_g5

0x41e1,	// (0x000041e1) bg_popup_heading_pane_g6

0x41e9,	// (0x000041e9) bg_popup_heading_pane_g7

0x41f1,	// (0x000041f1) bg_popup_heading_pane_g8

0x41fb,	// (0x000041fb) bg_popup_heading_pane_g9

0x0008,

0xaecc,	// (0x0000aecc) bg_popup_heading_pane_g

0x36f5,	// (0x000036f5) bg_popup_sub_pane_g1

0x36fd,	// (0x000036fd) bg_popup_sub_pane_g2

0x3705,	// (0x00003705) bg_popup_sub_pane_g3

0x370d,	// (0x0000370d) bg_popup_sub_pane_g4

0x3715,	// (0x00003715) bg_popup_sub_pane_g5

0x371d,	// (0x0000371d) bg_popup_sub_pane_g6

0x3725,	// (0x00003725) bg_popup_sub_pane_g7

0x372d,	// (0x0000372d) bg_popup_sub_pane_g8

0x3735,	// (0x00003735) bg_popup_sub_pane_g9

0x0008,

0xaea6,	// (0x0000aea6) bg_popup_sub_pane_g

0x082d,	// (0x0000082d) bg_popup_window_pane_cp5_ParamLimits

0x082d,	// (0x0000082d) bg_popup_window_pane_cp5

0x0849,	// (0x00000849) popup_note_window_g1_ParamLimits

0x0849,	// (0x00000849) popup_note_window_g1

0x0855,	// (0x00000855) popup_note_window_t1_ParamLimits

0x0855,	// (0x00000855) popup_note_window_t1

0x086b,	// (0x0000086b) popup_note_window_t2_ParamLimits

0x086b,	// (0x0000086b) popup_note_window_t2

0x0881,	// (0x00000881) popup_note_window_t3_ParamLimits

0x0881,	// (0x00000881) popup_note_window_t3

0x0897,	// (0x00000897) popup_note_window_t4_ParamLimits

0x0897,	// (0x00000897) popup_note_window_t4

0x08bf,	// (0x000008bf) popup_note_window_t5_ParamLimits

0x08bf,	// (0x000008bf) popup_note_window_t5

0x0004,

0xabcb,	// (0x0000abcb) popup_note_window_t_ParamLimits

0xabcb,	// (0x0000abcb) popup_note_window_t

0x08e3,	// (0x000008e3) bg_popup_window_pane_cp6_ParamLimits

0x08e3,	// (0x000008e3) bg_popup_window_pane_cp6

0x4086,	// (0x00004086) popup_note_image_window_g1_ParamLimits

0x4086,	// (0x00004086) popup_note_image_window_g1

0x4092,	// (0x00004092) popup_note_image_window_g2_ParamLimits

0x4092,	// (0x00004092) popup_note_image_window_g2

0x0001,

0xae9a,	// (0x0000ae9a) popup_note_image_window_g_ParamLimits

0xae9a,	// (0x0000ae9a) popup_note_image_window_g

0x40ab,	// (0x000040ab) popup_note_image_window_t1_ParamLimits

0x40ab,	// (0x000040ab) popup_note_image_window_t1

0x40c4,	// (0x000040c4) popup_note_image_window_t2_ParamLimits

0x40c4,	// (0x000040c4) popup_note_image_window_t2

0x40dd,	// (0x000040dd) popup_note_image_window_t3_ParamLimits

0x40dd,	// (0x000040dd) popup_note_image_window_t3

0x0002,

0xae9f,	// (0x0000ae9f) popup_note_image_window_t_ParamLimits

0xae9f,	// (0x0000ae9f) popup_note_image_window_t

0x3f47,	// (0x00003f47) bg_popup_window_pane_cp7_ParamLimits

0x3f47,	// (0x00003f47) bg_popup_window_pane_cp7

0x3f77,	// (0x00003f77) popup_note_wait_window_g1_ParamLimits

0x3f77,	// (0x00003f77) popup_note_wait_window_g1

0x3f83,	// (0x00003f83) popup_note_wait_window_g2_ParamLimits

0x3f83,	// (0x00003f83) popup_note_wait_window_g2

0x0002,

0xae88,	// (0x0000ae88) popup_note_wait_window_g_ParamLimits

0xae88,	// (0x0000ae88) popup_note_wait_window_g

0x3f9b,	// (0x00003f9b) popup_note_wait_window_t1_ParamLimits

0x3f9b,	// (0x00003f9b) popup_note_wait_window_t1

0x3fc2,	// (0x00003fc2) popup_note_wait_window_t2_ParamLimits

0x3fc2,	// (0x00003fc2) popup_note_wait_window_t2

0x3fdf,	// (0x00003fdf) popup_note_wait_window_t3_ParamLimits

0x3fdf,	// (0x00003fdf) popup_note_wait_window_t3

0x3ff2,	// (0x00003ff2) popup_note_wait_window_t4_ParamLimits

0x3ff2,	// (0x00003ff2) popup_note_wait_window_t4

0x0004,

0xae8f,	// (0x0000ae8f) popup_note_wait_window_t_ParamLimits

0xae8f,	// (0x0000ae8f) popup_note_wait_window_t

0x4017,	// (0x00004017) wait_bar_pane_ParamLimits

0x4017,	// (0x00004017) wait_bar_pane

0x0293,	// (0x00000293) wait_anim_pane

0x0293,	// (0x00000293) wait_border_pane

0x002e,	// (0x0000002e) wait_anim_pane_g1

0x002e,	// (0x0000002e) wait_anim_pane_g2

0x0001,

0xad4a,	// (0x0000ad4a) wait_anim_pane_g

0x3eeb,	// (0x00003eeb) wait_border_pane_g1

0x3ef6,	// (0x00003ef6) wait_border_pane_g2

0x3eff,	// (0x00003eff) wait_border_pane_g3

0x0002,

0xae81,	// (0x0000ae81) wait_border_pane_g

0x3d56,	// (0x00003d56) bg_popup_window_pane_cp16_ParamLimits

0x3d56,	// (0x00003d56) bg_popup_window_pane_cp16

0x3e56,	// (0x00003e56) indicator_popup_pane_cp4_ParamLimits

0x3e56,	// (0x00003e56) indicator_popup_pane_cp4

0x3e6a,	// (0x00003e6a) popup_query_data_window_t1_ParamLimits

0x3e6a,	// (0x00003e6a) popup_query_data_window_t1

0x3e7c,	// (0x00003e7c) popup_query_data_window_t2_ParamLimits

0x3e7c,	// (0x00003e7c) popup_query_data_window_t2

0x3e95,	// (0x00003e95) popup_query_data_window_t3_ParamLimits

0x3e95,	// (0x00003e95) popup_query_data_window_t3

0x0002,

0xae7a,	// (0x0000ae7a) popup_query_data_window_t_ParamLimits

0xae7a,	// (0x0000ae7a) popup_query_data_window_t

0x3eaf,	// (0x00003eaf) query_popup_data_pane_ParamLimits

0x3eaf,	// (0x00003eaf) query_popup_data_pane

0x3ec3,	// (0x00003ec3) query_popup_data_pane_cp1_ParamLimits

0x3ec3,	// (0x00003ec3) query_popup_data_pane_cp1

0x3d56,	// (0x00003d56) bg_popup_window_pane_cp10_ParamLimits

0x3d56,	// (0x00003d56) bg_popup_window_pane_cp10

0x3d88,	// (0x00003d88) indicator_popup_pane_ParamLimits

0x3d88,	// (0x00003d88) indicator_popup_pane

0x3daa,	// (0x00003daa) popup_query_code_window_t1_ParamLimits

0x3daa,	// (0x00003daa) popup_query_code_window_t1

0x3dc4,	// (0x00003dc4) popup_query_code_window_t2_ParamLimits

0x3dc4,	// (0x00003dc4) popup_query_code_window_t2

0x3e0d,	// (0x00003e0d) popup_query_code_window_t3_ParamLimits

0x3e0d,	// (0x00003e0d) popup_query_code_window_t3

0x0002,

0xae73,	// (0x0000ae73) popup_query_code_window_t_ParamLimits

0xae73,	// (0x0000ae73) popup_query_code_window_t

0x3e3c,	// (0x00003e3c) query_popup_pane_ParamLimits

0x3e3c,	// (0x00003e3c) query_popup_pane

0x08e3,	// (0x000008e3) bg_popup_window_pane_cp15_ParamLimits

0x08e3,	// (0x000008e3) bg_popup_window_pane_cp15

0x0901,	// (0x00000901) indicator_popup_pane_cp1_ParamLimits

0x0901,	// (0x00000901) indicator_popup_pane_cp1

0x0914,	// (0x00000914) indicator_popup_pane_cp2_ParamLimits

0x0914,	// (0x00000914) indicator_popup_pane_cp2

0x0927,	// (0x00000927) popup_query_data_code_window_g1_ParamLimits

0x0927,	// (0x00000927) popup_query_data_code_window_g1

0x093a,	// (0x0000093a) popup_query_data_code_window_t1_ParamLimits

0x093a,	// (0x0000093a) popup_query_data_code_window_t1

0x094c,	// (0x0000094c) popup_query_data_code_window_t2_ParamLimits

0x094c,	// (0x0000094c) popup_query_data_code_window_t2

0x095e,	// (0x0000095e) popup_query_data_code_window_t3_ParamLimits

0x095e,	// (0x0000095e) popup_query_data_code_window_t3

0x0974,	// (0x00000974) popup_query_data_code_window_t4_ParamLimits

0x0974,	// (0x00000974) popup_query_data_code_window_t4

0x0003,

0xabd6,	// (0x0000abd6) popup_query_data_code_window_t_ParamLimits

0xabd6,	// (0x0000abd6) popup_query_data_code_window_t

0x3762,	// (0x00003762) list_single_midp_graphic_pane_g3

0x098c,	// (0x0000098c) query_popup_data_pane_cp2_ParamLimits

0x099f,	// (0x0000099f) query_popup_pane_cp2_ParamLimits

0x099f,	// (0x0000099f) query_popup_pane_cp2

0x0293,	// (0x00000293) bg_popup_window_pane_cp11

0x3d4e,	// (0x00003d4e) heading_pane_cp5

0x0a8a,	// (0x00000a8a) listscroll_popup_info_pane

0x0293,	// (0x00000293) input_focus_pane_cp3

0x09b2,	// (0x000009b2) query_popup_pane_t1

0x09c0,	// (0x000009c0) list_popup_info_pane_ParamLimits

0x09c0,	// (0x000009c0) list_popup_info_pane

0x09cf,	// (0x000009cf) listscroll_popup_info_pane_g1

0x09d7,	// (0x000009d7) scroll_pane_cp7

0x09e1,	// (0x000009e1) popup_info_list_pane_t1_ParamLimits

0x09e1,	// (0x000009e1) popup_info_list_pane_t1

0x09fb,	// (0x000009fb) popup_info_list_pane_t2_ParamLimits

0x09fb,	// (0x000009fb) popup_info_list_pane_t2

0x0001,

0xabdf,	// (0x0000abdf) popup_info_list_pane_t_ParamLimits

0xabdf,	// (0x0000abdf) popup_info_list_pane_t

0x0293,	// (0x00000293) bg_popup_window_pane_cp12

0x549d,	// (0x0000549d) find_popup_pane

0x0507,	// (0x00000507) bg_popup_window_pane_cp3

0x0a15,	// (0x00000a15) heading_pane_cp3

0x0a21,	// (0x00000a21) listscroll_popup_graphic_pane

0x0293,	// (0x00000293) bg_popup_window_pane_cp4

0xba4b,	// (0x0000ba4b) heading_pane_cp4

0x0a8a,	// (0x00000a8a) listscroll_popup_colour_pane

0x0a92,	// (0x00000a92) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x0a92,	// (0x00000a92) cell_large_graphic_colour_none_popup_pane

0xba53,	// (0x0000ba53) grid_large_graphic_colour_popup_pane_ParamLimits

0xba53,	// (0x0000ba53) grid_large_graphic_colour_popup_pane

0x0ad2,	// (0x00000ad2) listscroll_popup_colour_pane_g1_ParamLimits

0x0ad2,	// (0x00000ad2) listscroll_popup_colour_pane_g1

0x0ae9,	// (0x00000ae9) listscroll_popup_colour_pane_g2_ParamLimits

0x0ae9,	// (0x00000ae9) listscroll_popup_colour_pane_g2

0x0b00,	// (0x00000b00) listscroll_popup_colour_pane_g3_ParamLimits

0x0b00,	// (0x00000b00) listscroll_popup_colour_pane_g3

0xba77,	// (0x0000ba77) listscroll_popup_colour_pane_g4_ParamLimits

0xba77,	// (0x0000ba77) listscroll_popup_colour_pane_g4

0x0003,

0xf273,	// (0x0000f273) listscroll_popup_colour_pane_g_ParamLimits

0xf273,	// (0x0000f273) listscroll_popup_colour_pane_g

0x0b24,	// (0x00000b24) scroll_pane_cp6_ParamLimits

0x0b24,	// (0x00000b24) scroll_pane_cp6

0xba87,	// (0x0000ba87) cell_large_graphic_colour_popup_pane_ParamLimits

0xba87,	// (0x0000ba87) cell_large_graphic_colour_popup_pane

0x0b55,	// (0x00000b55) cell_large_graphic_colour_none_popup_pane_t1

0x0293,	// (0x00000293) grid_highlight_pane_cp5

0x0b64,	// (0x00000b64) cell_large_graphic_colour_popup_pane_g1

0x0b6c,	// (0x00000b6c) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xabed,	// (0x0000abed) cell_large_graphic_colour_popup_pane_g

0x0b74,	// (0x00000b74) cell_large_graphic_colour_popup_pane_g2_copy1

0x0b7d,	// (0x00000b7d) grid_highlight_pane_cp4

0x0b85,	// (0x00000b85) bg_popup_window_pane_cp8_ParamLimits

0x0b85,	// (0x00000b85) bg_popup_window_pane_cp8

0x0ba0,	// (0x00000ba0) popup_snote_single_text_window_g1_ParamLimits

0x0ba0,	// (0x00000ba0) popup_snote_single_text_window_g1

0x0bb2,	// (0x00000bb2) popup_snote_single_text_window_t1_ParamLimits

0x0bb2,	// (0x00000bb2) popup_snote_single_text_window_t1

0x0bc5,	// (0x00000bc5) popup_snote_single_text_window_t2_ParamLimits

0x0bc5,	// (0x00000bc5) popup_snote_single_text_window_t2

0x0bd8,	// (0x00000bd8) popup_snote_single_text_window_t3_ParamLimits

0x0bd8,	// (0x00000bd8) popup_snote_single_text_window_t3

0x0c11,	// (0x00000c11) popup_snote_single_text_window_t4_ParamLimits

0x0c11,	// (0x00000c11) popup_snote_single_text_window_t4

0x0c45,	// (0x00000c45) popup_snote_single_text_window_t5_ParamLimits

0x0c45,	// (0x00000c45) popup_snote_single_text_window_t5

0x0004,

0xabf2,	// (0x0000abf2) popup_snote_single_text_window_t_ParamLimits

0xabf2,	// (0x0000abf2) popup_snote_single_text_window_t

0x0c74,	// (0x00000c74) bg_popup_window_pane_cp9_ParamLimits

0x0c74,	// (0x00000c74) bg_popup_window_pane_cp9

0x0ba0,	// (0x00000ba0) popup_snote_single_graphic_window_g1_ParamLimits

0x0ba0,	// (0x00000ba0) popup_snote_single_graphic_window_g1

0x0c82,	// (0x00000c82) popup_snote_single_graphic_window_g2_ParamLimits

0x0c82,	// (0x00000c82) popup_snote_single_graphic_window_g2

0x0001,

0xabfd,	// (0x0000abfd) popup_snote_single_graphic_window_g_ParamLimits

0xabfd,	// (0x0000abfd) popup_snote_single_graphic_window_g

0x0c8e,	// (0x00000c8e) popup_snote_single_graphic_window_t1_ParamLimits

0x0c8e,	// (0x00000c8e) popup_snote_single_graphic_window_t1

0x0ca1,	// (0x00000ca1) popup_snote_single_graphic_window_t2_ParamLimits

0x0ca1,	// (0x00000ca1) popup_snote_single_graphic_window_t2

0x0cb4,	// (0x00000cb4) popup_snote_single_graphic_window_t3_ParamLimits

0x0cb4,	// (0x00000cb4) popup_snote_single_graphic_window_t3

0x0ced,	// (0x00000ced) popup_snote_single_graphic_window_t4_ParamLimits

0x0ced,	// (0x00000ced) popup_snote_single_graphic_window_t4

0x0d21,	// (0x00000d21) popup_snote_single_graphic_window_t5_ParamLimits

0x0d21,	// (0x00000d21) popup_snote_single_graphic_window_t5

0x0004,

0xac02,	// (0x0000ac02) popup_snote_single_graphic_window_t_ParamLimits

0xac02,	// (0x0000ac02) popup_snote_single_graphic_window_t

0x5327,	// (0x00005327) grid_graphic_popup_pane_ParamLimits

0x5327,	// (0x00005327) grid_graphic_popup_pane

0x5351,	// (0x00005351) listscroll_popup_graphic_pane_g1_ParamLimits

0x5351,	// (0x00005351) listscroll_popup_graphic_pane_g1

0xd55b,	// (0x0000d55b) listscroll_popup_graphic_pane_g2_ParamLimits

0xd55b,	// (0x0000d55b) listscroll_popup_graphic_pane_g2

0x0001,

0xf3f4,	// (0x0000f3f4) listscroll_popup_graphic_pane_g_ParamLimits

0xf3f4,	// (0x0000f3f4) listscroll_popup_graphic_pane_g

0x5379,	// (0x00005379) scroll_pane_cp5

0xd500,	// (0x0000d500) cell_graphic_popup_pane_ParamLimits

0xd500,	// (0x0000d500) cell_graphic_popup_pane

0x52a7,	// (0x000052a7) cell_graphic_popup_pane_g1

0x52af,	// (0x000052af) cell_graphic_popup_pane_g2

0x0b74,	// (0x00000b74) cell_graphic_popup_pane_g3

0x0002,

0xafe9,	// (0x0000afe9) cell_graphic_popup_pane_g

0x52b8,	// (0x000052b8) cell_graphic_popup_pane_t2

0x0b7d,	// (0x00000b7d) grid_highlight_pane_cp3

0x0d62,	// (0x00000d62) list_gen_pane_ParamLimits

0x0d62,	// (0x00000d62) list_gen_pane

0x0d94,	// (0x00000d94) scroll_pane

0xd4b7,	// (0x0000d4b7) bg_list_pane_g1_ParamLimits

0xd4b7,	// (0x0000d4b7) bg_list_pane_g1

0x521c,	// (0x0000521c) bg_list_pane_g2_ParamLimits

0x521c,	// (0x0000521c) bg_list_pane_g2

0x5231,	// (0x00005231) bg_list_pane_g3_ParamLimits

0x5231,	// (0x00005231) bg_list_pane_g3

0x5245,	// (0x00005245) bg_list_pane_g4_ParamLimits

0x5245,	// (0x00005245) bg_list_pane_g4

0xd4d4,	// (0x0000d4d4) bg_list_pane_g5_ParamLimits

0xd4d4,	// (0x0000d4d4) bg_list_pane_g5

0x0004,

0xf3e9,	// (0x0000f3e9) bg_list_pane_g_ParamLimits

0xf3e9,	// (0x0000f3e9) bg_list_pane_g

0xd45d,	// (0x0000d45d) list_double2_graphic_large_graphic_pane_ParamLimits

0xd45d,	// (0x0000d45d) list_double2_graphic_large_graphic_pane

0xd45d,	// (0x0000d45d) list_double2_graphic_pane_ParamLimits

0xd45d,	// (0x0000d45d) list_double2_graphic_pane

0xd45d,	// (0x0000d45d) list_double2_large_graphic_pane_ParamLimits

0xd45d,	// (0x0000d45d) list_double2_large_graphic_pane

0xd45d,	// (0x0000d45d) list_double2_pane_ParamLimits

0xd45d,	// (0x0000d45d) list_double2_pane

0xd45d,	// (0x0000d45d) list_double_graphic_heading_pane_ParamLimits

0xd45d,	// (0x0000d45d) list_double_graphic_heading_pane

0xd45d,	// (0x0000d45d) list_double_graphic_pane_ParamLimits

0xd45d,	// (0x0000d45d) list_double_graphic_pane

0xd45d,	// (0x0000d45d) list_double_heading_pane_ParamLimits

0xd45d,	// (0x0000d45d) list_double_heading_pane

0xd45d,	// (0x0000d45d) list_double_large_graphic_pane_ParamLimits

0xd45d,	// (0x0000d45d) list_double_large_graphic_pane

0xd45d,	// (0x0000d45d) list_double_number_pane_ParamLimits

0xd45d,	// (0x0000d45d) list_double_number_pane

0xd45d,	// (0x0000d45d) list_double_pane_ParamLimits

0xd45d,	// (0x0000d45d) list_double_pane

0xd45d,	// (0x0000d45d) list_double_time_pane_ParamLimits

0xd45d,	// (0x0000d45d) list_double_time_pane

0xd45d,	// (0x0000d45d) list_setting_number_pane_ParamLimits

0xd45d,	// (0x0000d45d) list_setting_number_pane

0xd45d,	// (0x0000d45d) list_setting_pane_ParamLimits

0xd45d,	// (0x0000d45d) list_setting_pane

0xd46f,	// (0x0000d46f) list_single_2graphic_pane_ParamLimits

0xd46f,	// (0x0000d46f) list_single_2graphic_pane

0xd46f,	// (0x0000d46f) list_single_graphic_heading_pane_ParamLimits

0xd46f,	// (0x0000d46f) list_single_graphic_heading_pane

0xd46f,	// (0x0000d46f) list_single_graphic_pane_ParamLimits

0xd46f,	// (0x0000d46f) list_single_graphic_pane

0xd46f,	// (0x0000d46f) list_single_heading_pane_ParamLimits

0xd46f,	// (0x0000d46f) list_single_heading_pane

0xd46f,	// (0x0000d46f) list_single_large_graphic_pane_ParamLimits

0xd46f,	// (0x0000d46f) list_single_large_graphic_pane

0xd46f,	// (0x0000d46f) list_single_number_heading_pane_ParamLimits

0xd46f,	// (0x0000d46f) list_single_number_heading_pane

0xd46f,	// (0x0000d46f) list_single_number_pane_ParamLimits

0xd46f,	// (0x0000d46f) list_single_number_pane

0xd46f,	// (0x0000d46f) list_single_pane_ParamLimits

0xd46f,	// (0x0000d46f) list_single_pane

0x0293,	// (0x00000293) list_highlight_pane_cp1

0x254c,	// (0x0000254c) list_single_pane_g1_ParamLimits

0x254c,	// (0x0000254c) list_single_pane_g1

0x3599,	// (0x00003599) list_single_pane_g2_ParamLimits

0x3599,	// (0x00003599) list_single_pane_g2

0x0001,

0xae1f,	// (0x0000ae1f) list_single_pane_g_ParamLimits

0xae1f,	// (0x0000ae1f) list_single_pane_g

0x5acb,	// (0x00005acb) list_single_pane_t1_ParamLimits

0x5acb,	// (0x00005acb) list_single_pane_t1

0x254c,	// (0x0000254c) list_single_number_pane_g1_ParamLimits

0x254c,	// (0x0000254c) list_single_number_pane_g1

0x3599,	// (0x00003599) list_single_number_pane_g2_ParamLimits

0x3599,	// (0x00003599) list_single_number_pane_g2

0x0001,

0xae1f,	// (0x0000ae1f) list_single_number_pane_g_ParamLimits

0xae1f,	// (0x0000ae1f) list_single_number_pane_g

0x3683,	// (0x00003683) list_single_number_pane_t1_ParamLimits

0x3683,	// (0x00003683) list_single_number_pane_t1

0xd2ae,	// (0x0000d2ae) list_single_number_pane_t2_ParamLimits

0xd2ae,	// (0x0000d2ae) list_single_number_pane_t2

0x0001,

0xf3cc,	// (0x0000f3cc) list_single_number_pane_t_ParamLimits

0xf3cc,	// (0x0000f3cc) list_single_number_pane_t

0xbab0,	// (0x0000bab0) list_single_graphic_pane_g1_ParamLimits

0xbab0,	// (0x0000bab0) list_single_graphic_pane_g1

0x254c,	// (0x0000254c) list_single_graphic_pane_g2_ParamLimits

0x254c,	// (0x0000254c) list_single_graphic_pane_g2

0x3599,	// (0x00003599) list_single_graphic_pane_g3_ParamLimits

0x3599,	// (0x00003599) list_single_graphic_pane_g3

0x0002,

0xf27c,	// (0x0000f27c) list_single_graphic_pane_g_ParamLimits

0xf27c,	// (0x0000f27c) list_single_graphic_pane_g

0xbabc,	// (0x0000babc) list_single_graphic_pane_t1_ParamLimits

0xbabc,	// (0x0000babc) list_single_graphic_pane_t1

0x254c,	// (0x0000254c) list_single_heading_pane_g1_ParamLimits

0x254c,	// (0x0000254c) list_single_heading_pane_g1

0x3599,	// (0x00003599) list_single_heading_pane_g2_ParamLimits

0x3599,	// (0x00003599) list_single_heading_pane_g2

0x0001,

0xae1f,	// (0x0000ae1f) list_single_heading_pane_g_ParamLimits

0xae1f,	// (0x0000ae1f) list_single_heading_pane_g

0xbad2,	// (0x0000bad2) list_single_heading_pane_t1_ParamLimits

0xbad2,	// (0x0000bad2) list_single_heading_pane_t1

0xbae8,	// (0x0000bae8) list_single_heading_pane_t2_ParamLimits

0xbae8,	// (0x0000bae8) list_single_heading_pane_t2

0x0001,

0xf283,	// (0x0000f283) list_single_heading_pane_t_ParamLimits

0xf283,	// (0x0000f283) list_single_heading_pane_t

0x254c,	// (0x0000254c) list_single_number_heading_pane_g1_ParamLimits

0x254c,	// (0x0000254c) list_single_number_heading_pane_g1

0x3599,	// (0x00003599) list_single_number_heading_pane_g2_ParamLimits

0x3599,	// (0x00003599) list_single_number_heading_pane_g2

0x0001,

0xae1f,	// (0x0000ae1f) list_single_number_heading_pane_g_ParamLimits

0xae1f,	// (0x0000ae1f) list_single_number_heading_pane_g

0xbad2,	// (0x0000bad2) list_single_number_heading_pane_t1_ParamLimits

0xbad2,	// (0x0000bad2) list_single_number_heading_pane_t1

0x5a7f,	// (0x00005a7f) list_single_number_heading_pane_t2_ParamLimits

0x5a7f,	// (0x00005a7f) list_single_number_heading_pane_t2

0x5a91,	// (0x00005a91) list_single_number_heading_pane_t3_ParamLimits

0x5a91,	// (0x00005a91) list_single_number_heading_pane_t3

0x0002,

0xf288,	// (0x0000f288) list_single_number_heading_pane_t_ParamLimits

0xf288,	// (0x0000f288) list_single_number_heading_pane_t

0x358d,	// (0x0000358d) list_single_graphic_heading_pane_g1_ParamLimits

0x358d,	// (0x0000358d) list_single_graphic_heading_pane_g1

0xbafa,	// (0x0000bafa) list_single_graphic_heading_pane_g4_ParamLimits

0xbafa,	// (0x0000bafa) list_single_graphic_heading_pane_g4

0x3599,	// (0x00003599) list_single_graphic_heading_pane_g5_ParamLimits

0x3599,	// (0x00003599) list_single_graphic_heading_pane_g5

0x0002,

0xf28f,	// (0x0000f28f) list_single_graphic_heading_pane_g_ParamLimits

0xf28f,	// (0x0000f28f) list_single_graphic_heading_pane_g

0xbad2,	// (0x0000bad2) list_single_graphic_heading_pane_t1_ParamLimits

0xbad2,	// (0x0000bad2) list_single_graphic_heading_pane_t1

0xbb0b,	// (0x0000bb0b) list_single_graphic_heading_pane_t2_ParamLimits

0xbb0b,	// (0x0000bb0b) list_single_graphic_heading_pane_t2

0x0001,

0xf296,	// (0x0000f296) list_single_graphic_heading_pane_t_ParamLimits

0xf296,	// (0x0000f296) list_single_graphic_heading_pane_t

0x5ae1,	// (0x00005ae1) list_single_large_graphic_pane_g1_ParamLimits

0x5ae1,	// (0x00005ae1) list_single_large_graphic_pane_g1

0x254c,	// (0x0000254c) list_single_large_graphic_pane_g2_ParamLimits

0x254c,	// (0x0000254c) list_single_large_graphic_pane_g2

0x3599,	// (0x00003599) list_single_large_graphic_pane_g3_ParamLimits

0x3599,	// (0x00003599) list_single_large_graphic_pane_g3

0x0002,

0xb079,	// (0x0000b079) list_single_large_graphic_pane_g_ParamLimits

0xb079,	// (0x0000b079) list_single_large_graphic_pane_g

0x3ef6,	// (0x00003ef6) wait_border_pane_g2_copy1

0xbb1d,	// (0x0000bb1d) list_single_large_graphic_pane_g4_cp2

0x5aed,	// (0x00005aed) list_single_large_graphic_pane_t1_ParamLimits

0x5aed,	// (0x00005aed) list_single_large_graphic_pane_t1

0x37ba,	// (0x000037ba) list_double_pane_g1_ParamLimits

0x37ba,	// (0x000037ba) list_double_pane_g1

0xbb25,	// (0x0000bb25) list_double_pane_g2_ParamLimits

0xbb25,	// (0x0000bb25) list_double_pane_g2

0x0001,

0xf29b,	// (0x0000f29b) list_double_pane_g_ParamLimits

0xf29b,	// (0x0000f29b) list_double_pane_g

0x7771,	// (0x00007771) list_double_pane_t1_ParamLimits

0x7771,	// (0x00007771) list_double_pane_t1

0xbb31,	// (0x0000bb31) list_double_pane_t2_ParamLimits

0xbb31,	// (0x0000bb31) list_double_pane_t2

0x0001,

0xf2a0,	// (0x0000f2a0) list_double_pane_t_ParamLimits

0xf2a0,	// (0x0000f2a0) list_double_pane_t

0xbb43,	// (0x0000bb43) list_double2_pane_g1_ParamLimits

0xbb43,	// (0x0000bb43) list_double2_pane_g1

0xbb54,	// (0x0000bb54) list_double2_pane_g2_ParamLimits

0xbb54,	// (0x0000bb54) list_double2_pane_g2

0x0001,

0xf2a5,	// (0x0000f2a5) list_double2_pane_g_ParamLimits

0xf2a5,	// (0x0000f2a5) list_double2_pane_g

0xbb60,	// (0x0000bb60) list_double2_pane_t1_ParamLimits

0xbb60,	// (0x0000bb60) list_double2_pane_t1

0xbb76,	// (0x0000bb76) list_double2_pane_t2_ParamLimits

0xbb76,	// (0x0000bb76) list_double2_pane_t2

0x0001,

0xf2aa,	// (0x0000f2aa) list_double2_pane_t_ParamLimits

0xf2aa,	// (0x0000f2aa) list_double2_pane_t

0x37ba,	// (0x000037ba) list_double_number_pane_g1_ParamLimits

0x37ba,	// (0x000037ba) list_double_number_pane_g1

0xbb25,	// (0x0000bb25) list_double_number_pane_g2_ParamLimits

0xbb25,	// (0x0000bb25) list_double_number_pane_g2

0x0001,

0xf29b,	// (0x0000f29b) list_double_number_pane_g_ParamLimits

0xf29b,	// (0x0000f29b) list_double_number_pane_g

0xbb88,	// (0x0000bb88) list_double_number_pane_t1_ParamLimits

0xbb88,	// (0x0000bb88) list_double_number_pane_t1

0xbb9a,	// (0x0000bb9a) list_double_number_pane_t2_ParamLimits

0xbb9a,	// (0x0000bb9a) list_double_number_pane_t2

0xbbb0,	// (0x0000bbb0) list_double_number_pane_t3_ParamLimits

0xbbb0,	// (0x0000bbb0) list_double_number_pane_t3

0x0002,

0xf2af,	// (0x0000f2af) list_double_number_pane_t_ParamLimits

0xf2af,	// (0x0000f2af) list_double_number_pane_t

0xbbc2,	// (0x0000bbc2) list_double_graphic_pane_g1_ParamLimits

0xbbc2,	// (0x0000bbc2) list_double_graphic_pane_g1

0xbbce,	// (0x0000bbce) list_double_graphic_pane_g2_ParamLimits

0xbbce,	// (0x0000bbce) list_double_graphic_pane_g2

0xbbdd,	// (0x0000bbdd) list_double_graphic_pane_g3_ParamLimits

0xbbdd,	// (0x0000bbdd) list_double_graphic_pane_g3

0x0003,

0xf2b6,	// (0x0000f2b6) list_double_graphic_pane_g_ParamLimits

0xf2b6,	// (0x0000f2b6) list_double_graphic_pane_g

0x37c6,	// (0x000037c6) list_double_graphic_pane_t1_ParamLimits

0x37c6,	// (0x000037c6) list_double_graphic_pane_t1

0xbbf5,	// (0x0000bbf5) list_double_graphic_pane_t2_ParamLimits

0xbbf5,	// (0x0000bbf5) list_double_graphic_pane_t2

0x0001,

0xf2bf,	// (0x0000f2bf) list_double_graphic_pane_t_ParamLimits

0xf2bf,	// (0x0000f2bf) list_double_graphic_pane_t

0xbc07,	// (0x0000bc07) list_double2_graphic_pane_g1_ParamLimits

0xbc07,	// (0x0000bc07) list_double2_graphic_pane_g1

0x2437,	// (0x00002437) list_double2_graphic_pane_g2_ParamLimits

0x2437,	// (0x00002437) list_double2_graphic_pane_g2

0xbb54,	// (0x0000bb54) list_double2_graphic_pane_g3_ParamLimits

0xbb54,	// (0x0000bb54) list_double2_graphic_pane_g3

0x0002,

0xf2c4,	// (0x0000f2c4) list_double2_graphic_pane_g_ParamLimits

0xf2c4,	// (0x0000f2c4) list_double2_graphic_pane_g

0xbc13,	// (0x0000bc13) list_double2_graphic_pane_t1_ParamLimits

0xbc13,	// (0x0000bc13) list_double2_graphic_pane_t1

0xbc29,	// (0x0000bc29) list_double2_graphic_pane_t2_ParamLimits

0xbc29,	// (0x0000bc29) list_double2_graphic_pane_t2

0x0001,

0xf2cb,	// (0x0000f2cb) list_double2_graphic_pane_t_ParamLimits

0xf2cb,	// (0x0000f2cb) list_double2_graphic_pane_t

0xbc3b,	// (0x0000bc3b) list_double_large_graphic_pane_g1_ParamLimits

0xbc3b,	// (0x0000bc3b) list_double_large_graphic_pane_g1

0xbc5a,	// (0x0000bc5a) list_double_large_graphic_pane_g2_ParamLimits

0xbc5a,	// (0x0000bc5a) list_double_large_graphic_pane_g2

0xbb25,	// (0x0000bb25) list_double_large_graphic_pane_g3_ParamLimits

0xbb25,	// (0x0000bb25) list_double_large_graphic_pane_g3

0xbc6b,	// (0x0000bc6b) list_double_large_graphic_pane_g4_ParamLimits

0xbc6b,	// (0x0000bc6b) list_double_large_graphic_pane_g4

0x0004,

0xf2d0,	// (0x0000f2d0) list_double_large_graphic_pane_g_ParamLimits

0xf2d0,	// (0x0000f2d0) list_double_large_graphic_pane_g

0xbc7d,	// (0x0000bc7d) list_double_large_graphic_pane_t1_ParamLimits

0xbc7d,	// (0x0000bc7d) list_double_large_graphic_pane_t1

0xbc96,	// (0x0000bc96) list_double_large_graphic_pane_t2_ParamLimits

0xbc96,	// (0x0000bc96) list_double_large_graphic_pane_t2

0x0001,

0xf2db,	// (0x0000f2db) list_double_large_graphic_pane_t_ParamLimits

0xf2db,	// (0x0000f2db) list_double_large_graphic_pane_t

0xbca8,	// (0x0000bca8) list_double2_large_graphic_pane_g1_ParamLimits

0xbca8,	// (0x0000bca8) list_double2_large_graphic_pane_g1

0xbb43,	// (0x0000bb43) list_double2_large_graphic_pane_g2_ParamLimits

0xbb43,	// (0x0000bb43) list_double2_large_graphic_pane_g2

0xbb54,	// (0x0000bb54) list_double2_large_graphic_pane_g3_ParamLimits

0xbb54,	// (0x0000bb54) list_double2_large_graphic_pane_g3

0x0002,

0xf2e0,	// (0x0000f2e0) list_double2_large_graphic_pane_g_ParamLimits

0xf2e0,	// (0x0000f2e0) list_double2_large_graphic_pane_g

0xbcb4,	// (0x0000bcb4) list_double2_large_graphic_pane_t1_ParamLimits

0xbcb4,	// (0x0000bcb4) list_double2_large_graphic_pane_t1

0xbcca,	// (0x0000bcca) list_double2_large_graphic_pane_t2_ParamLimits

0xbcca,	// (0x0000bcca) list_double2_large_graphic_pane_t2

0x0001,

0xf2e7,	// (0x0000f2e7) list_double2_large_graphic_pane_t_ParamLimits

0xf2e7,	// (0x0000f2e7) list_double2_large_graphic_pane_t

0xbcdc,	// (0x0000bcdc) list_double_heading_pane_g1_ParamLimits

0xbcdc,	// (0x0000bcdc) list_double_heading_pane_g1

0xbced,	// (0x0000bced) list_double_heading_pane_g2_ParamLimits

0xbced,	// (0x0000bced) list_double_heading_pane_g2

0x0001,

0xf2ec,	// (0x0000f2ec) list_double_heading_pane_g_ParamLimits

0xf2ec,	// (0x0000f2ec) list_double_heading_pane_g

0xbcf9,	// (0x0000bcf9) list_double_heading_pane_t1_ParamLimits

0xbcf9,	// (0x0000bcf9) list_double_heading_pane_t1

0xbd0f,	// (0x0000bd0f) list_double_heading_pane_t2_ParamLimits

0xbd0f,	// (0x0000bd0f) list_double_heading_pane_t2

0x0001,

0xf2f1,	// (0x0000f2f1) list_double_heading_pane_t_ParamLimits

0xf2f1,	// (0x0000f2f1) list_double_heading_pane_t

0x0f7e,	// (0x00000f7e) list_double_graphic_heading_pane_g1_ParamLimits

0x0f7e,	// (0x00000f7e) list_double_graphic_heading_pane_g1

0xbcdc,	// (0x0000bcdc) list_double_graphic_heading_pane_g2_ParamLimits

0xbcdc,	// (0x0000bcdc) list_double_graphic_heading_pane_g2

0xbced,	// (0x0000bced) list_double_graphic_heading_pane_g3_ParamLimits

0xbced,	// (0x0000bced) list_double_graphic_heading_pane_g3

0x0002,

0xf2f6,	// (0x0000f2f6) list_double_graphic_heading_pane_g_ParamLimits

0xf2f6,	// (0x0000f2f6) list_double_graphic_heading_pane_g

0xbd21,	// (0x0000bd21) list_double_graphic_heading_pane_t1_ParamLimits

0xbd21,	// (0x0000bd21) list_double_graphic_heading_pane_t1

0xbd37,	// (0x0000bd37) list_double_graphic_heading_pane_t2_ParamLimits

0xbd37,	// (0x0000bd37) list_double_graphic_heading_pane_t2

0x0001,

0xf2fd,	// (0x0000f2fd) list_double_graphic_heading_pane_t_ParamLimits

0xf2fd,	// (0x0000f2fd) list_double_graphic_heading_pane_t

0xbc5a,	// (0x0000bc5a) list_double_time_pane_g1_ParamLimits

0xbc5a,	// (0x0000bc5a) list_double_time_pane_g1

0xbb25,	// (0x0000bb25) list_double_time_pane_g2_ParamLimits

0xbb25,	// (0x0000bb25) list_double_time_pane_g2

0x0001,

0xf302,	// (0x0000f302) list_double_time_pane_g_ParamLimits

0xf302,	// (0x0000f302) list_double_time_pane_g

0xbd49,	// (0x0000bd49) list_double_time_pane_t1_ParamLimits

0xbd49,	// (0x0000bd49) list_double_time_pane_t1

0xbd5f,	// (0x0000bd5f) list_double_time_pane_t2_ParamLimits

0xbd5f,	// (0x0000bd5f) list_double_time_pane_t2

0xbd71,	// (0x0000bd71) list_double_time_pane_t3_ParamLimits

0xbd71,	// (0x0000bd71) list_double_time_pane_t3

0xbd83,	// (0x0000bd83) list_double_time_pane_t4_ParamLimits

0xbd83,	// (0x0000bd83) list_double_time_pane_t4

0x0003,

0xf307,	// (0x0000f307) list_double_time_pane_t_ParamLimits

0xf307,	// (0x0000f307) list_double_time_pane_t

0x2437,	// (0x00002437) list_setting_pane_g1_ParamLimits

0x2437,	// (0x00002437) list_setting_pane_g1

0xbb54,	// (0x0000bb54) list_setting_pane_g2_ParamLimits

0xbb54,	// (0x0000bb54) list_setting_pane_g2

0x0001,

0xf310,	// (0x0000f310) list_setting_pane_g_ParamLimits

0xf310,	// (0x0000f310) list_setting_pane_g

0xbd95,	// (0x0000bd95) list_setting_pane_t1_ParamLimits

0xbd95,	// (0x0000bd95) list_setting_pane_t1

0xbdac,	// (0x0000bdac) list_setting_pane_t2_ParamLimits

0xbdac,	// (0x0000bdac) list_setting_pane_t2

0x0002,

0xf315,	// (0x0000f315) list_setting_pane_t_ParamLimits

0xf315,	// (0x0000f315) list_setting_pane_t

0xbdeb,	// (0x0000bdeb) set_value_pane_cp_ParamLimits

0xbdeb,	// (0x0000bdeb) set_value_pane_cp

0x2437,	// (0x00002437) list_setting_number_pane_g1_ParamLimits

0x2437,	// (0x00002437) list_setting_number_pane_g1

0xbb54,	// (0x0000bb54) list_setting_number_pane_g2_ParamLimits

0xbb54,	// (0x0000bb54) list_setting_number_pane_g2

0x0001,

0xf310,	// (0x0000f310) list_setting_number_pane_g_ParamLimits

0xf310,	// (0x0000f310) list_setting_number_pane_g

0xbdf7,	// (0x0000bdf7) list_setting_number_pane_t1_ParamLimits

0xbdf7,	// (0x0000bdf7) list_setting_number_pane_t1

0xbe0b,	// (0x0000be0b) list_setting_number_pane_t2_ParamLimits

0xbe0b,	// (0x0000be0b) list_setting_number_pane_t2

0xbe22,	// (0x0000be22) list_setting_number_pane_t3_ParamLimits

0xbe22,	// (0x0000be22) list_setting_number_pane_t3

0x0003,

0xf31c,	// (0x0000f31c) list_setting_number_pane_t_ParamLimits

0xf31c,	// (0x0000f31c) list_setting_number_pane_t

0xbdeb,	// (0x0000bdeb) set_value_pane_ParamLimits

0xbdeb,	// (0x0000bdeb) set_value_pane

0x1263,	// (0x00001263) bg_set_opt_pane_ParamLimits

0x1263,	// (0x00001263) bg_set_opt_pane

0x1284,	// (0x00001284) set_value_pane_t1

0x1292,	// (0x00001292) slider_set_pane_cp3

0x129b,	// (0x0000129b) volume_small_pane_cp

0x12a4,	// (0x000012a4) list_form_gen_pane

0x12ad,	// (0x000012ad) scroll_pane_cp8

0xbe65,	// (0x0000be65) form_field_data_pane_ParamLimits

0xbe65,	// (0x0000be65) form_field_data_pane

0xbe7c,	// (0x0000be7c) form_field_data_wide_pane_ParamLimits

0xbe7c,	// (0x0000be7c) form_field_data_wide_pane

0xbe9c,	// (0x0000be9c) form_field_popup_pane_ParamLimits

0xbe9c,	// (0x0000be9c) form_field_popup_pane

0xbeb4,	// (0x0000beb4) form_field_popup_wide_pane_ParamLimits

0xbeb4,	// (0x0000beb4) form_field_popup_wide_pane

0x1348,	// (0x00001348) form_field_slider_pane_ParamLimits

0x1348,	// (0x00001348) form_field_slider_pane

0x135b,	// (0x0000135b) form_field_slider_wide_pane_ParamLimits

0x135b,	// (0x0000135b) form_field_slider_wide_pane

0x136e,	// (0x0000136e) data_form_pane

0xbed5,	// (0x0000bed5) form_field_data_pane_t1

0x139c,	// (0x0000139c) input_focus_pane

0x13aa,	// (0x000013aa) data_form_wide_pane

0x13d6,	// (0x000013d6) form_field_data_wide_pane_t1

0x0b92,	// (0x00000b92) input_focus_pane_cp6

0xbeef,	// (0x0000beef) form_field_popup_pane_t1

0x139c,	// (0x0000139c) input_focus_pane_cp7

0x140d,	// (0x0000140d) list_form_pane

0x1421,	// (0x00001421) form_field_popup_wide_pane_t1

0x139c,	// (0x0000139c) input_focus_pane_cp8

0x1433,	// (0x00001433) list_form_wide_pane

0xbf11,	// (0x0000bf11) form_field_slider_pane_t1_ParamLimits

0xbf11,	// (0x0000bf11) form_field_slider_pane_t1

0xbf29,	// (0x0000bf29) form_field_slider_pane_t2_ParamLimits

0xbf29,	// (0x0000bf29) form_field_slider_pane_t2

0x0001,

0xf325,	// (0x0000f325) form_field_slider_pane_t_ParamLimits

0xf325,	// (0x0000f325) form_field_slider_pane_t

0x082d,	// (0x0000082d) input_focus_pane_cp9_ParamLimits

0x082d,	// (0x0000082d) input_focus_pane_cp9

0xbf3e,	// (0x0000bf3e) slider_cont_pane_ParamLimits

0xbf3e,	// (0x0000bf3e) slider_cont_pane

0x147f,	// (0x0000147f) form_field_slider_wide_pane_t1_ParamLimits

0x147f,	// (0x0000147f) form_field_slider_wide_pane_t1

0x1491,	// (0x00001491) form_field_slider_wide_pane_t2_ParamLimits

0x1491,	// (0x00001491) form_field_slider_wide_pane_t2

0x0001,

0xacce,	// (0x0000acce) form_field_slider_wide_pane_t_ParamLimits

0xacce,	// (0x0000acce) form_field_slider_wide_pane_t

0x082d,	// (0x0000082d) input_focus_pane_cp10_ParamLimits

0x082d,	// (0x0000082d) input_focus_pane_cp10

0xbf52,	// (0x0000bf52) slider_cont_pane_cp1_ParamLimits

0xbf52,	// (0x0000bf52) slider_cont_pane_cp1

0xbf66,	// (0x0000bf66) slider_form_pane_cp

0x14bf,	// (0x000014bf) input_focus_pane_g1

0x14c7,	// (0x000014c7) input_focus_pane_g2

0x14cf,	// (0x000014cf) input_focus_pane_g3

0x14d7,	// (0x000014d7) input_focus_pane_g4

0x14df,	// (0x000014df) input_focus_pane_g5

0x14e7,	// (0x000014e7) input_focus_pane_g6

0x14ef,	// (0x000014ef) input_focus_pane_g7

0x14f7,	// (0x000014f7) input_focus_pane_g8

0x14ff,	// (0x000014ff) input_focus_pane_g9

0x002e,	// (0x0000002e) input_focus_pane_g10

0x0009,

0xacd3,	// (0x0000acd3) input_focus_pane_g

0x3eff,	// (0x00003eff) wait_border_pane_g3_copy1

0xbf6e,	// (0x0000bf6e) data_form_pane_t1

0x002e,	// (0x0000002e) wait_anim_pane_g1_copy1

0xd441,	// (0x0000d441) data_form_wide_pane_t1

0xbf88,	// (0x0000bf88) list_form_graphic_pane_cp_ParamLimits

0xbf88,	// (0x0000bf88) list_form_graphic_pane_cp

0x5073,	// (0x00005073) slider_form_pane_g1

0x507c,	// (0x0000507c) slider_form_pane_g2

0x0006,

0xf3da,	// (0x0000f3da) slider_form_pane_g

0xbf88,	// (0x0000bf88) list_form_graphic_pane_ParamLimits

0xbf88,	// (0x0000bf88) list_form_graphic_pane

0x1557,	// (0x00001557) list_form_graphic_pane_g1

0x155f,	// (0x0000155f) list_form_graphic_pane_t1_ParamLimits

0x155f,	// (0x0000155f) list_form_graphic_pane_t1

0x0507,	// (0x00000507) list_highlight_pane_cp5_ParamLimits

0x0507,	// (0x00000507) list_highlight_pane_cp5

0xbf9a,	// (0x0000bf9a) find_pane_g1

0x157d,	// (0x0000157d) input_find_pane

0xbfa3,	// (0x0000bfa3) input_find_pane_g1_ParamLimits

0xbfa3,	// (0x0000bfa3) input_find_pane_g1

0xbfaf,	// (0x0000bfaf) input_find_pane_t1_ParamLimits

0xbfaf,	// (0x0000bfaf) input_find_pane_t1

0xbfc4,	// (0x0000bfc4) input_find_pane_t2_ParamLimits

0xbfc4,	// (0x0000bfc4) input_find_pane_t2

0x0001,

0xf32a,	// (0x0000f32a) input_find_pane_t_ParamLimits

0xf32a,	// (0x0000f32a) input_find_pane_t

0x15bc,	// (0x000015bc) input_focus_pane_cp5_ParamLimits

0x15bc,	// (0x000015bc) input_focus_pane_cp5

0x15d6,	// (0x000015d6) bg_popup_window_pane_cp2_ParamLimits

0x15d6,	// (0x000015d6) bg_popup_window_pane_cp2

0x15e3,	// (0x000015e3) listscroll_menu_pane_ParamLimits

0x15e3,	// (0x000015e3) listscroll_menu_pane

0xbfe5,	// (0x0000bfe5) popup_submenu_window_ParamLimits

0xbfe5,	// (0x0000bfe5) popup_submenu_window

0x161b,	// (0x0000161b) find_popup_pane_g1

0x1623,	// (0x00001623) input_popup_find_pane_cp

0x15bc,	// (0x000015bc) input_focus_pane_cp4_ParamLimits

0x15bc,	// (0x000015bc) input_focus_pane_cp4

0x1639,	// (0x00001639) input_popup_find_pane_t1_ParamLimits

0x1639,	// (0x00001639) input_popup_find_pane_t1

0x0293,	// (0x00000293) bg_popup_sub_pane_cp

0x1667,	// (0x00001667) listscroll_popup_sub_pane

0x166f,	// (0x0000166f) list_submenu_pane_ParamLimits

0x166f,	// (0x0000166f) list_submenu_pane

0x1680,	// (0x00001680) scroll_pane_cp4

0x1688,	// (0x00001688) list_single_popup_submenu_pane_ParamLimits

0x1688,	// (0x00001688) list_single_popup_submenu_pane

0x169c,	// (0x0000169c) list_single_popup_submenu_pane_g1

0x16a4,	// (0x000016a4) list_single_popup_submenu_pane_t1_ParamLimits

0x16a4,	// (0x000016a4) list_single_popup_submenu_pane_t1

0x082d,	// (0x0000082d) bg_active_tab_pane_cp1_ParamLimits

0x082d,	// (0x0000082d) bg_active_tab_pane_cp1

0x16b9,	// (0x000016b9) tabs_2_active_pane_g1

0xc01f,	// (0x0000c01f) tabs_2_active_pane_t1

0x082d,	// (0x0000082d) bg_passive_tab_pane_cp1_ParamLimits

0x082d,	// (0x0000082d) bg_passive_tab_pane_cp1

0x16b9,	// (0x000016b9) tabs_2_passive_pane_g1

0xc01f,	// (0x0000c01f) tabs_2_passive_pane_t1

0x0507,	// (0x00000507) bg_active_tab_pane_cp4

0xc031,	// (0x0000c031) tabs_2_long_active_pane_t1

0x2ba0,	// (0x00002ba0) bg_passive_tab_pane_cp4

0x376a,	// (0x0000376a) list_single_midp_graphic_pane_g4_ParamLimits

0x0507,	// (0x00000507) bg_active_tab_pane_cp5

0xc044,	// (0x0000c044) tabs_3_long_active_pane_t1

0x2ba0,	// (0x00002ba0) bg_passive_tab_pane_cp5

0x376a,	// (0x0000376a) list_single_midp_graphic_pane_g4

0x0507,	// (0x00000507) bg_popup_window_pane_cp13_ParamLimits

0x0507,	// (0x00000507) bg_popup_window_pane_cp13

0x171b,	// (0x0000171b) listscroll_popup_fast_pane_ParamLimits

0x171b,	// (0x0000171b) listscroll_popup_fast_pane

0x172a,	// (0x0000172a) grid_popup_fast_pane_ParamLimits

0x172a,	// (0x0000172a) grid_popup_fast_pane

0x173c,	// (0x0000173c) scroll_pane_cp9_ParamLimits

0x173c,	// (0x0000173c) scroll_pane_cp9

0x73d5,	// (0x000073d5) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x73d5,	// (0x000073d5) list_single_graphic_hl_pane_t1_cp2

0x1760,	// (0x00001760) input_focus_pane_cp20_ParamLimits

0x1760,	// (0x00001760) input_focus_pane_cp20

0x176e,	// (0x0000176e) query_popup_data_pane_t1_ParamLimits

0x176e,	// (0x0000176e) query_popup_data_pane_t1

0x1781,	// (0x00001781) query_popup_data_pane_t2_ParamLimits

0x1781,	// (0x00001781) query_popup_data_pane_t2

0x17c7,	// (0x000017c7) query_popup_data_pane_t3_ParamLimits

0x17c7,	// (0x000017c7) query_popup_data_pane_t3

0x1808,	// (0x00001808) query_popup_data_pane_t4_ParamLimits

0x1808,	// (0x00001808) query_popup_data_pane_t4

0x1844,	// (0x00001844) query_popup_data_pane_t5_ParamLimits

0x1844,	// (0x00001844) query_popup_data_pane_t5

0x0004,

0xaced,	// (0x0000aced) query_popup_data_pane_t_ParamLimits

0xaced,	// (0x0000aced) query_popup_data_pane_t

0x14bf,	// (0x000014bf) bg_set_opt_pane_g1

0x14c7,	// (0x000014c7) bg_set_opt_pane_g2

0x14cf,	// (0x000014cf) bg_set_opt_pane_g3

0x14d7,	// (0x000014d7) bg_set_opt_pane_g4

0x14df,	// (0x000014df) bg_set_opt_pane_g5

0x14e7,	// (0x000014e7) bg_set_opt_pane_g6

0x14ef,	// (0x000014ef) bg_set_opt_pane_g7

0x14f7,	// (0x000014f7) bg_set_opt_pane_g8

0x14ff,	// (0x000014ff) bg_set_opt_pane_g9

0x0008,

0xacf8,	// (0x0000acf8) bg_set_opt_pane_g

0x2160,	// (0x00002160) control_top_pane_stacon_ParamLimits

0x2160,	// (0x00002160) control_top_pane_stacon

0x21b3,	// (0x000021b3) signal_pane_stacon_ParamLimits

0x21b3,	// (0x000021b3) signal_pane_stacon

0x21d8,	// (0x000021d8) stacon_top_pane_g1_ParamLimits

0x21d8,	// (0x000021d8) stacon_top_pane_g1

0x21fa,	// (0x000021fa) title_pane_stacon_ParamLimits

0x21fa,	// (0x000021fa) title_pane_stacon

0x2224,	// (0x00002224) uni_indicator_pane_stacon_ParamLimits

0x2224,	// (0x00002224) uni_indicator_pane_stacon

0x2239,	// (0x00002239) battery_pane_stacon_ParamLimits

0x2239,	// (0x00002239) battery_pane_stacon

0x227d,	// (0x0000227d) control_bottom_pane_stacon_ParamLimits

0x227d,	// (0x0000227d) control_bottom_pane_stacon

0x22a0,	// (0x000022a0) navi_pane_stacon_ParamLimits

0x22a0,	// (0x000022a0) navi_pane_stacon

0x22c3,	// (0x000022c3) stacon_bottom_pane_g1_ParamLimits

0x22c3,	// (0x000022c3) stacon_bottom_pane_g1

0x187b,	// (0x0000187b) aid_levels_signal_lsc_ParamLimits

0x187b,	// (0x0000187b) aid_levels_signal_lsc

0x1891,	// (0x00001891) signal_pane_stacon_g1_ParamLimits

0x1891,	// (0x00001891) signal_pane_stacon_g1

0x18a5,	// (0x000018a5) signal_pane_stacon_g2_ParamLimits

0x18a5,	// (0x000018a5) signal_pane_stacon_g2

0x0001,

0xad0b,	// (0x0000ad0b) signal_pane_stacon_g_ParamLimits

0xad0b,	// (0x0000ad0b) signal_pane_stacon_g

0x18e7,	// (0x000018e7) title_pane_stacon_t1_ParamLimits

0x18e7,	// (0x000018e7) title_pane_stacon_t1

0x190c,	// (0x0000190c) uni_indicator_pane_stacon_g1

0x1916,	// (0x00001916) uni_indicator_pane_stacon_g2

0x1920,	// (0x00001920) uni_indicator_pane_stacon_g3

0x192a,	// (0x0000192a) uni_indicator_pane_stacon_g4

0x0003,

0xad17,	// (0x0000ad17) uni_indicator_pane_stacon_g

0x1934,	// (0x00001934) control_top_pane_stacon_g1

0x193c,	// (0x0000193c) control_top_pane_stacon_t1_ParamLimits

0x193c,	// (0x0000193c) control_top_pane_stacon_t1

0x1973,	// (0x00001973) aid_levels_battery_lsc_ParamLimits

0x1973,	// (0x00001973) aid_levels_battery_lsc

0x198a,	// (0x0000198a) battery_pane_stacon_g1_ParamLimits

0x198a,	// (0x0000198a) battery_pane_stacon_g1

0x199d,	// (0x0000199d) battery_pane_stacon_g2_ParamLimits

0x199d,	// (0x0000199d) battery_pane_stacon_g2

0x0001,

0xad20,	// (0x0000ad20) battery_pane_stacon_g_ParamLimits

0xad20,	// (0x0000ad20) battery_pane_stacon_g

0x19db,	// (0x000019db) navi_icon_pane_stacon

0x19ef,	// (0x000019ef) navi_navi_pane_stacon

0x19db,	// (0x000019db) navi_text_pane_stacon

0x1934,	// (0x00001934) control_bottom_pane_stacon_g1

0x1a03,	// (0x00001a03) control_bottom_pane_stacon_t1_ParamLimits

0x1a03,	// (0x00001a03) control_bottom_pane_stacon_t1

0xc056,	// (0x0000c056) grid_app_pane_ParamLimits

0xc056,	// (0x0000c056) grid_app_pane

0xc08e,	// (0x0000c08e) scroll_pane_cp15_ParamLimits

0xc08e,	// (0x0000c08e) scroll_pane_cp15

0xc0a3,	// (0x0000c0a3) cell_app_pane_ParamLimits

0xc0a3,	// (0x0000c0a3) cell_app_pane

0xc0e8,	// (0x0000c0e8) cell_app_pane_g1_ParamLimits

0xc0e8,	// (0x0000c0e8) cell_app_pane_g1

0x1ad3,	// (0x00001ad3) cell_app_pane_g2_ParamLimits

0x1ad3,	// (0x00001ad3) cell_app_pane_g2

0x0001,

0xf32f,	// (0x0000f32f) cell_app_pane_g_ParamLimits

0xf32f,	// (0x0000f32f) cell_app_pane_g

0xc10c,	// (0x0000c10c) cell_app_pane_t1_ParamLimits

0xc10c,	// (0x0000c10c) cell_app_pane_t1

0x1af6,	// (0x00001af6) grid_highlight_pane_ParamLimits

0x1af6,	// (0x00001af6) grid_highlight_pane

0x14bf,	// (0x000014bf) cell_highlight_pane_g1

0x14c7,	// (0x000014c7) cell_highlight_pane_g2

0x14cf,	// (0x000014cf) cell_highlight_pane_g3

0x14d7,	// (0x000014d7) cell_highlight_pane_g4

0x14df,	// (0x000014df) cell_highlight_pane_g5

0x14e7,	// (0x000014e7) cell_highlight_pane_g6

0x14ef,	// (0x000014ef) cell_highlight_pane_g7

0x14f7,	// (0x000014f7) cell_highlight_pane_g8

0x14ff,	// (0x000014ff) cell_highlight_pane_g9

0x002e,	// (0x0000002e) cell_highlight_pane_g10

0x0009,

0xacd3,	// (0x0000acd3) cell_highlight_pane_g

0x1b1a,	// (0x00001b1a) bg_scroll_pane

0x1b39,	// (0x00001b39) scroll_handle_pane

0x1b8a,	// (0x00001b8a) scroll_bg_pane_g1

0x1b9f,	// (0x00001b9f) scroll_bg_pane_g2

0x1bb7,	// (0x00001bb7) scroll_bg_pane_g3

0x0002,

0xad2a,	// (0x0000ad2a) scroll_bg_pane_g

0x1bcc,	// (0x00001bcc) scroll_handle_focus_pane_ParamLimits

0x1bcc,	// (0x00001bcc) scroll_handle_focus_pane

0x1b8a,	// (0x00001b8a) scroll_handle_pane_g1

0x1bd9,	// (0x00001bd9) scroll_handle_pane_g2

0x1bb7,	// (0x00001bb7) scroll_handle_pane_g3

0x0002,

0xad31,	// (0x0000ad31) scroll_handle_pane_g

0x15bc,	// (0x000015bc) bg_popup_sub_pane_cp21_ParamLimits

0x15bc,	// (0x000015bc) bg_popup_sub_pane_cp21

0x1bed,	// (0x00001bed) popup_fep_japan_predictive_window_t1_ParamLimits

0x1bed,	// (0x00001bed) popup_fep_japan_predictive_window_t1

0x1c07,	// (0x00001c07) popup_fep_japan_predictive_window_t2_ParamLimits

0x1c07,	// (0x00001c07) popup_fep_japan_predictive_window_t2

0x1c3a,	// (0x00001c3a) popup_fep_japan_predictive_window_t3_ParamLimits

0x1c3a,	// (0x00001c3a) popup_fep_japan_predictive_window_t3

0x0002,

0xad38,	// (0x0000ad38) popup_fep_japan_predictive_window_t_ParamLimits

0xad38,	// (0x0000ad38) popup_fep_japan_predictive_window_t

0x0293,	// (0x00000293) bg_popup_sub_pane_cp23

0x1c71,	// (0x00001c71) listscroll_japin_cand_pane

0x1c79,	// (0x00001c79) popup_fep_japan_candidate_window_t1

0x1c87,	// (0x00001c87) candidate_pane_ParamLimits

0x1c87,	// (0x00001c87) candidate_pane

0x1c99,	// (0x00001c99) scroll_pane_cp30

0x1ca1,	// (0x00001ca1) list_single_popup_jap_candidate_pane_ParamLimits

0x1ca1,	// (0x00001ca1) list_single_popup_jap_candidate_pane

0x0293,	// (0x00000293) list_highlight_pane_cp30

0x1cb6,	// (0x00001cb6) list_single_popup_jap_candidate_pane_t1

0x1cc5,	// (0x00001cc5) level_1_signal

0x1cd7,	// (0x00001cd7) level_2_signal

0x1cea,	// (0x00001cea) level_3_signal

0x1cfd,	// (0x00001cfd) level_4_signal

0x1d10,	// (0x00001d10) level_5_signal

0x1d23,	// (0x00001d23) level_6_signal

0x1d36,	// (0x00001d36) level_7_signal

0x1cc5,	// (0x00001cc5) level_1_battery

0x1cd7,	// (0x00001cd7) level_2_battery

0x1cea,	// (0x00001cea) level_3_battery

0x1cfd,	// (0x00001cfd) level_4_battery

0x1d10,	// (0x00001d10) level_5_battery

0x1d23,	// (0x00001d23) level_6_battery

0x1d36,	// (0x00001d36) level_7_battery

0x1d80,	// (0x00001d80) list_menu_pane_ParamLimits

0x1d80,	// (0x00001d80) list_menu_pane

0x1d96,	// (0x00001d96) scroll_pane_cp25_ParamLimits

0x1d96,	// (0x00001d96) scroll_pane_cp25

0x1daf,	// (0x00001daf) list_double2_graphic_pane_cp2_ParamLimits

0x1daf,	// (0x00001daf) list_double2_graphic_pane_cp2

0x1daf,	// (0x00001daf) list_double2_large_graphic_pane_cp2_ParamLimits

0x1daf,	// (0x00001daf) list_double2_large_graphic_pane_cp2

0x1daf,	// (0x00001daf) list_double2_pane_cp2_ParamLimits

0x1daf,	// (0x00001daf) list_double2_pane_cp2

0x1daf,	// (0x00001daf) list_double_graphic_pane_cp2_ParamLimits

0x1daf,	// (0x00001daf) list_double_graphic_pane_cp2

0x1daf,	// (0x00001daf) list_double_large_graphic_pane_cp2_ParamLimits

0x1daf,	// (0x00001daf) list_double_large_graphic_pane_cp2

0x1daf,	// (0x00001daf) list_double_number_pane_cp2_ParamLimits

0x1daf,	// (0x00001daf) list_double_number_pane_cp2

0x1daf,	// (0x00001daf) list_double_pane_cp2_ParamLimits

0x1daf,	// (0x00001daf) list_double_pane_cp2

0xc12c,	// (0x0000c12c) list_single_2graphic_pane_cp2_ParamLimits

0xc12c,	// (0x0000c12c) list_single_2graphic_pane_cp2

0xc12c,	// (0x0000c12c) list_single_graphic_heading_pane_cp2_ParamLimits

0xc12c,	// (0x0000c12c) list_single_graphic_heading_pane_cp2

0xc12c,	// (0x0000c12c) list_single_graphic_pane_cp2_ParamLimits

0xc12c,	// (0x0000c12c) list_single_graphic_pane_cp2

0xc12c,	// (0x0000c12c) list_single_heading_pane_cp2_ParamLimits

0xc12c,	// (0x0000c12c) list_single_heading_pane_cp2

0x1dec,	// (0x00001dec) list_single_large_graphic_pane_cp2_ParamLimits

0x1dec,	// (0x00001dec) list_single_large_graphic_pane_cp2

0xc12c,	// (0x0000c12c) list_single_number_heading_pane_cp2_ParamLimits

0xc12c,	// (0x0000c12c) list_single_number_heading_pane_cp2

0xc12c,	// (0x0000c12c) list_single_number_pane_cp2_ParamLimits

0xc12c,	// (0x0000c12c) list_single_number_pane_cp2

0xc12c,	// (0x0000c12c) list_single_pane_cp2_ParamLimits

0xc12c,	// (0x0000c12c) list_single_pane_cp2

0x1ec3,	// (0x00001ec3) bg_popup_sub_pane_cp22

0x1ee8,	// (0x00001ee8) popup_side_volume_key_window_g1

0x1f12,	// (0x00001f12) popup_side_volume_key_window_t1

0x1f2e,	// (0x00001f2e) volume_small_pane_cp1

0x082d,	// (0x0000082d) bg_popup_sub_pane_cp24_ParamLimits

0x082d,	// (0x0000082d) bg_popup_sub_pane_cp24

0x1f36,	// (0x00001f36) fep_china_uni_candidate_pane_ParamLimits

0x1f36,	// (0x00001f36) fep_china_uni_candidate_pane

0x1f4a,	// (0x00001f4a) fep_china_uni_entry_pane

0x1f5a,	// (0x00001f5a) popup_fep_china_uni_window_g1

0x1f76,	// (0x00001f76) fep_china_uni_entry_pane_g1

0x1f7e,	// (0x00001f7e) fep_china_uni_entry_pane_g2

0x0001,

0xad69,	// (0x0000ad69) fep_china_uni_entry_pane_g

0x1f86,	// (0x00001f86) fep_entry_item_pane

0x1f90,	// (0x00001f90) fep_candidate_item_pane

0x1f98,	// (0x00001f98) fep_china_uni_candidate_pane_g1

0x1fa0,	// (0x00001fa0) fep_china_uni_candidate_pane_g2

0x1fa8,	// (0x00001fa8) fep_china_uni_candidate_pane_g3

0x1fb0,	// (0x00001fb0) fep_china_uni_candidate_pane_g4

0x0003,

0xad6e,	// (0x0000ad6e) fep_china_uni_candidate_pane_g

0x002e,	// (0x0000002e) fep_entry_item_pane_g1

0x1fb8,	// (0x00001fb8) fep_entry_item_pane_t1_ParamLimits

0x1fb8,	// (0x00001fb8) fep_entry_item_pane_t1

0x1fce,	// (0x00001fce) fep_candidate_item_pane_t1_ParamLimits

0x1fce,	// (0x00001fce) fep_candidate_item_pane_t1

0x1fe3,	// (0x00001fe3) fep_candidate_item_pane_t2_ParamLimits

0x1fe3,	// (0x00001fe3) fep_candidate_item_pane_t2

0x0001,

0xad77,	// (0x0000ad77) fep_candidate_item_pane_t_ParamLimits

0xad77,	// (0x0000ad77) fep_candidate_item_pane_t

0x0507,	// (0x00000507) list_highlight_pane_cp31_ParamLimits

0x0507,	// (0x00000507) list_highlight_pane_cp31

0x1ff5,	// (0x00001ff5) level_1_signal_lsc

0x1ffe,	// (0x00001ffe) level_2_signal_lsc

0x2007,	// (0x00002007) level_3_signal_lsc

0x2010,	// (0x00002010) level_4_signal_lsc

0x2019,	// (0x00002019) level_5_signal_lsc

0x2022,	// (0x00002022) level_6_signal_lsc

0x202b,	// (0x0000202b) level_7_signal_lsc

0x202b,	// (0x0000202b) level_1_battery_lsc

0x2034,	// (0x00002034) level_2_battery_lsc

0x203d,	// (0x0000203d) level_3_battery_lsc

0x2046,	// (0x00002046) level_4_battery_lsc

0x204f,	// (0x0000204f) level_5_battery_lsc

0x2058,	// (0x00002058) level_6_battery_lsc

0x1ff5,	// (0x00001ff5) level_7_battery_lsc

0x2061,	// (0x00002061) scroll_handle_focus_pane_g1

0x206a,	// (0x0000206a) scroll_handle_focus_pane_g2

0x2073,	// (0x00002073) scroll_handle_focus_pane_g3

0x0002,

0xad7c,	// (0x0000ad7c) scroll_handle_focus_pane_g

0xc1b9,	// (0x0000c1b9) list_single_2graphic_pane_g1_ParamLimits

0xc1b9,	// (0x0000c1b9) list_single_2graphic_pane_g1

0xbafa,	// (0x0000bafa) list_single_2graphic_pane_g2_ParamLimits

0xbafa,	// (0x0000bafa) list_single_2graphic_pane_g2

0x3599,	// (0x00003599) list_single_2graphic_pane_g3_ParamLimits

0x3599,	// (0x00003599) list_single_2graphic_pane_g3

0xc1c5,	// (0x0000c1c5) list_single_2graphic_pane_g4_ParamLimits

0xc1c5,	// (0x0000c1c5) list_single_2graphic_pane_g4

0x0003,

0xf33d,	// (0x0000f33d) list_single_2graphic_pane_g_ParamLimits

0xf33d,	// (0x0000f33d) list_single_2graphic_pane_g

0xc1d6,	// (0x0000c1d6) list_single_2graphic_pane_t1_ParamLimits

0xc1d6,	// (0x0000c1d6) list_single_2graphic_pane_t1

0xc204,	// (0x0000c204) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xc204,	// (0x0000c204) list_double2_graphic_large_graphic_pane_g1

0xbb43,	// (0x0000bb43) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xbb43,	// (0x0000bb43) list_double2_graphic_large_graphic_pane_g2

0xbb54,	// (0x0000bb54) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xbb54,	// (0x0000bb54) list_double2_graphic_large_graphic_pane_g3

0xc216,	// (0x0000c216) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xc216,	// (0x0000c216) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf346,	// (0x0000f346) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf346,	// (0x0000f346) list_double2_graphic_large_graphic_pane_g

0xc222,	// (0x0000c222) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xc222,	// (0x0000c222) list_double2_graphic_large_graphic_pane_t1

0xc238,	// (0x0000c238) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xc238,	// (0x0000c238) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf34f,	// (0x0000f34f) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf34f,	// (0x0000f34f) list_double2_graphic_large_graphic_pane_t

0x238b,	// (0x0000238b) popup_fast_swap_window_ParamLimits

0x238b,	// (0x0000238b) popup_fast_swap_window

0x23a7,	// (0x000023a7) popup_side_volume_key_window

0x23c3,	// (0x000023c3) stacon_top_pane

0x23cd,	// (0x000023cd) status_pane_ParamLimits

0x23cd,	// (0x000023cd) status_pane

0xc24a,	// (0x0000c24a) status_small_pane

0x0293,	// (0x00000293) control_pane

0x0293,	// (0x00000293) stacon_bottom_pane

0x12ad,	// (0x000012ad) scroll_pane_cp121

0x12a4,	// (0x000012a4) set_content_pane

0x210b,	// (0x0000210b) bg_active_tab_pane_g1_cp1

0x2114,	// (0x00002114) bg_active_tab_pane_g2_cp1

0x211d,	// (0x0000211d) bg_active_tab_pane_g3_cp1

0x210b,	// (0x0000210b) bg_passive_tab_pane_g1_cp1

0x2114,	// (0x00002114) bg_passive_tab_pane_g2_cp1

0x211d,	// (0x0000211d) bg_passive_tab_pane_g3_cp1

0x2126,	// (0x00002126) bg_active_tab_pane_g1_cp2

0x2114,	// (0x00002114) bg_active_tab_pane_g2_cp2

0x212f,	// (0x0000212f) bg_active_tab_pane_g3_cp2

0x2126,	// (0x00002126) bg_passive_tab_pane_g1_cp2

0x2114,	// (0x00002114) bg_passive_tab_pane_g2_cp2

0x212f,	// (0x0000212f) bg_passive_tab_pane_g3_cp2

0x2138,	// (0x00002138) bg_active_tab_pane_g1_cp3

0x2114,	// (0x00002114) bg_active_tab_pane_g2_cp3

0x2141,	// (0x00002141) bg_active_tab_pane_g3_cp3

0x2138,	// (0x00002138) bg_passive_tab_pane_g1_cp3

0x2114,	// (0x00002114) bg_passive_tab_pane_g2_cp3

0x2141,	// (0x00002141) bg_passive_tab_pane_g3_cp3

0x214a,	// (0x0000214a) bg_active_tab_pane_g1_cp4

0x2114,	// (0x00002114) bg_active_tab_pane_g2_cp4

0x2155,	// (0x00002155) bg_active_tab_pane_g3_cp4

0x214a,	// (0x0000214a) bg_passive_tab_pane_g1_cp4

0x2114,	// (0x00002114) bg_passive_tab_pane_g2_cp4

0x2155,	// (0x00002155) bg_passive_tab_pane_g3_cp4

0x22df,	// (0x000022df) bg_active_tab_pane_g1_cp5

0x2114,	// (0x00002114) bg_active_tab_pane_g2_cp5

0x22e8,	// (0x000022e8) bg_active_tab_pane_g3_cp5

0x22df,	// (0x000022df) bg_passive_tab_pane_g1_cp5

0x2114,	// (0x00002114) bg_passive_tab_pane_g2_cp5

0x22e8,	// (0x000022e8) bg_passive_tab_pane_g3_cp5

0x5854,	// (0x00005854) list_set_graphic_pane_ParamLimits

0x5854,	// (0x00005854) list_set_graphic_pane

0x0293,	// (0x00000293) bg_set_opt_pane_cp4

0x230e,	// (0x0000230e) list_set_graphic_pane_g1_ParamLimits

0x230e,	// (0x0000230e) list_set_graphic_pane_g1

0x231a,	// (0x0000231a) list_set_graphic_pane_g2_ParamLimits

0x231a,	// (0x0000231a) list_set_graphic_pane_g2

0x0001,

0xad9a,	// (0x0000ad9a) list_set_graphic_pane_g_ParamLimits

0xad9a,	// (0x0000ad9a) list_set_graphic_pane_g

0x0009,

0xb114,	// (0x0000b114) volume_small_pane_cp_g

0x233e,	// (0x0000233e) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x233e,	// (0x0000233e) list_double2_large_graphic_pane_g1_cp2

0x234a,	// (0x0000234a) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x234a,	// (0x0000234a) list_double2_large_graphic_pane_g2_cp2

0x235b,	// (0x0000235b) list_double2_large_graphic_pane_g3_cp2

0x2363,	// (0x00002363) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x2363,	// (0x00002363) list_double2_large_graphic_pane_t1_cp2

0x2379,	// (0x00002379) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x2379,	// (0x00002379) list_double2_large_graphic_pane_t2_cp2

0x4b36,	// (0x00004b36) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x4b36,	// (0x00004b36) list_double_large_graphic_pane_g1_cp2

0x4b47,	// (0x00004b47) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x4b47,	// (0x00004b47) list_double_large_graphic_pane_g2_cp2

0x24f4,	// (0x000024f4) list_double_large_graphic_pane_g3_cp2

0x4b58,	// (0x00004b58) list_double_large_graphic_pane_g4_cp

0x4b60,	// (0x00004b60) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x4b60,	// (0x00004b60) list_double_large_graphic_pane_t1_cp2

0x4b77,	// (0x00004b77) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x4b77,	// (0x00004b77) list_double_large_graphic_pane_t2_cp2

0x23e6,	// (0x000023e6) list_double2_graphic_pane_g1_cp2_ParamLimits

0x23e6,	// (0x000023e6) list_double2_graphic_pane_g1_cp2

0x23f4,	// (0x000023f4) list_double2_graphic_pane_g2_cp2_ParamLimits

0x23f4,	// (0x000023f4) list_double2_graphic_pane_g2_cp2

0x2405,	// (0x00002405) list_double2_graphic_pane_g3_cp2

0x240f,	// (0x0000240f) list_double2_graphic_pane_t1_cp2_ParamLimits

0x240f,	// (0x0000240f) list_double2_graphic_pane_t1_cp2

0x2425,	// (0x00002425) list_double2_graphic_pane_t2_cp2_ParamLimits

0x2425,	// (0x00002425) list_double2_graphic_pane_t2_cp2

0x2437,	// (0x00002437) list_single_number_heading_pane_g1_cp2_ParamLimits

0x2437,	// (0x00002437) list_single_number_heading_pane_g1_cp2

0x2443,	// (0x00002443) list_single_number_heading_pane_g2_cp2

0x244b,	// (0x0000244b) list_single_number_heading_pane_t1_cp2_ParamLimits

0x244b,	// (0x0000244b) list_single_number_heading_pane_t1_cp2

0x2461,	// (0x00002461) list_single_number_heading_pane_t2_cp2_ParamLimits

0x2461,	// (0x00002461) list_single_number_heading_pane_t2_cp2

0x2473,	// (0x00002473) list_single_number_heading_pane_t3_cp2_ParamLimits

0x2473,	// (0x00002473) list_single_number_heading_pane_t3_cp2

0x2437,	// (0x00002437) list_single_heading_pane_g1_cp2_ParamLimits

0x2437,	// (0x00002437) list_single_heading_pane_g1_cp2

0x2443,	// (0x00002443) list_single_heading_pane_g2_cp2

0x244b,	// (0x0000244b) list_single_heading_pane_t1_cp2_ParamLimits

0x244b,	// (0x0000244b) list_single_heading_pane_t1_cp2

0x493e,	// (0x0000493e) list_single_heading_pane_t2_cp2_ParamLimits

0x493e,	// (0x0000493e) list_single_heading_pane_t2_cp2

0x4886,	// (0x00004886) list_double_graphic_pane_g1_cp2_ParamLimits

0x4886,	// (0x00004886) list_double_graphic_pane_g1_cp2

0x4892,	// (0x00004892) list_double_graphic_pane_g2_cp2_ParamLimits

0x4892,	// (0x00004892) list_double_graphic_pane_g2_cp2

0x48a1,	// (0x000048a1) list_double_graphic_pane_g3_cp2

0x48a9,	// (0x000048a9) list_double_graphic_pane_t1_cp2_ParamLimits

0x48a9,	// (0x000048a9) list_double_graphic_pane_t1_cp2

0x48bf,	// (0x000048bf) list_double_graphic_pane_t2_cp2_ParamLimits

0x48bf,	// (0x000048bf) list_double_graphic_pane_t2_cp2

0x24e8,	// (0x000024e8) list_double_number_pane_g1_cp2_ParamLimits

0x24e8,	// (0x000024e8) list_double_number_pane_g1_cp2

0x24f4,	// (0x000024f4) list_double_number_pane_g2_cp2

0x484a,	// (0x0000484a) list_double_number_pane_t1_cp2_ParamLimits

0x484a,	// (0x0000484a) list_double_number_pane_t1_cp2

0x485e,	// (0x0000485e) list_double_number_pane_t2_cp2_ParamLimits

0x485e,	// (0x0000485e) list_double_number_pane_t2_cp2

0x4874,	// (0x00004874) list_double_number_pane_t3_cp2_ParamLimits

0x4874,	// (0x00004874) list_double_number_pane_t3_cp2

0x4722,	// (0x00004722) list_single_graphic_pane_g1_cp2_ParamLimits

0x4722,	// (0x00004722) list_single_graphic_pane_g1_cp2

0x254c,	// (0x0000254c) list_single_graphic_pane_g2_cp2_ParamLimits

0x254c,	// (0x0000254c) list_single_graphic_pane_g2_cp2

0x2558,	// (0x00002558) list_single_graphic_pane_g3_cp2

0x46f8,	// (0x000046f8) list_single_graphic_pane_t1_cp2_ParamLimits

0x46f8,	// (0x000046f8) list_single_graphic_pane_t1_cp2

0x254c,	// (0x0000254c) list_single_number_pane_g1_cp2_ParamLimits

0x254c,	// (0x0000254c) list_single_number_pane_g1_cp2

0x2558,	// (0x00002558) list_single_number_pane_g2_cp2

0x46f8,	// (0x000046f8) list_single_number_pane_t1_cp2_ParamLimits

0x46f8,	// (0x000046f8) list_single_number_pane_t1_cp2

0x470e,	// (0x0000470e) list_single_number_pane_t2_cp2_ParamLimits

0x470e,	// (0x0000470e) list_single_number_pane_t2_cp2

0x234a,	// (0x0000234a) list_double2_pane_g1_cp2_ParamLimits

0x234a,	// (0x0000234a) list_double2_pane_g1_cp2

0x235b,	// (0x0000235b) list_double2_pane_g2_cp2

0x24c0,	// (0x000024c0) list_double2_pane_t1_cp2_ParamLimits

0x24c0,	// (0x000024c0) list_double2_pane_t1_cp2

0x24d6,	// (0x000024d6) list_double2_pane_t2_cp2_ParamLimits

0x24d6,	// (0x000024d6) list_double2_pane_t2_cp2

0x24e8,	// (0x000024e8) list_double_pane_g1_cp2_ParamLimits

0x24e8,	// (0x000024e8) list_double_pane_g1_cp2

0x24f4,	// (0x000024f4) list_double_pane_g2_cp2

0x24fc,	// (0x000024fc) list_double_pane_t1_cp2_ParamLimits

0x24fc,	// (0x000024fc) list_double_pane_t1_cp2

0x2512,	// (0x00002512) list_double_pane_t2_cp2_ParamLimits

0x2512,	// (0x00002512) list_double_pane_t2_cp2

0x253c,	// (0x0000253c) list_single_pane_cp2_g3

0x254c,	// (0x0000254c) list_single_pane_g1_cp2_ParamLimits

0x254c,	// (0x0000254c) list_single_pane_g1_cp2

0x2558,	// (0x00002558) list_single_pane_g2_cp2

0x2560,	// (0x00002560) list_single_pane_t1_cp2_ParamLimits

0x2560,	// (0x00002560) list_single_pane_t1_cp2

0x2578,	// (0x00002578) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x2578,	// (0x00002578) list_single_large_graphic_pane_g1_cp2

0x2584,	// (0x00002584) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x2584,	// (0x00002584) list_single_large_graphic_pane_g2_cp2

0x2590,	// (0x00002590) list_single_large_graphic_pane_g3_cp2

0x2598,	// (0x00002598) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x2598,	// (0x00002598) list_single_large_graphic_pane_g4_cp1

0x25b2,	// (0x000025b2) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x25b2,	// (0x000025b2) list_single_large_graphic_pane_t1_cp2

0x4571,	// (0x00004571) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x4571,	// (0x00004571) list_single_graphic_heading_pane_g1_cp2

0x453e,	// (0x0000453e) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x453e,	// (0x0000453e) list_single_graphic_heading_pane_g4_cp2

0x2558,	// (0x00002558) list_single_graphic_heading_pane_g5_cp2

0x457d,	// (0x0000457d) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x457d,	// (0x0000457d) list_single_graphic_heading_pane_t1_cp2

0x4593,	// (0x00004593) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x4593,	// (0x00004593) list_single_graphic_heading_pane_t2_cp2

0x4532,	// (0x00004532) list_single_2graphic_pane_g1_cp2_ParamLimits

0x4532,	// (0x00004532) list_single_2graphic_pane_g1_cp2

0x453e,	// (0x0000453e) list_single_2graphic_pane_g2_cp2_ParamLimits

0x453e,	// (0x0000453e) list_single_2graphic_pane_g2_cp2

0x2558,	// (0x00002558) list_single_2graphic_pane_g3_cp2

0x454f,	// (0x0000454f) list_single_2graphic_pane_g4_cp2_ParamLimits

0x454f,	// (0x0000454f) list_single_2graphic_pane_g4_cp2

0x455b,	// (0x0000455b) list_single_2graphic_pane_t1_cp2_ParamLimits

0x455b,	// (0x0000455b) list_single_2graphic_pane_t1_cp2

0x002e,	// (0x0000002e) list_highlight_pane_g10_cp1

0x410a,	// (0x0000410a) list_highlight_pane_g1_cp1

0x4112,	// (0x00004112) list_highlight_pane_g2_cp1

0x411a,	// (0x0000411a) list_highlight_pane_g3_cp1

0x4122,	// (0x00004122) list_highlight_pane_g4_cp1

0x412a,	// (0x0000412a) list_highlight_pane_g5_cp1

0x4132,	// (0x00004132) list_highlight_pane_g6_cp1

0x413a,	// (0x0000413a) list_highlight_pane_g7_cp1

0x4142,	// (0x00004142) list_highlight_pane_g8_cp1

0x414a,	// (0x0000414a) list_highlight_pane_g9_cp1

0xd159,	// (0x0000d159) form_field_slider_pane_t3

0xd167,	// (0x0000d167) form_field_slider_pane_t4

0x4046,	// (0x00004046) slider_form_pane_ParamLimits

0x4046,	// (0x00004046) slider_form_pane

0x0293,	// (0x00000293) control_abbreviations

0x0293,	// (0x00000293) control_conventions

0x0293,	// (0x00000293) control_definitions

0x0293,	// (0x00000293) format_table_attribute

0x4988,	// (0x00004988) bg_popup_preview_window_pane_g9

0x0293,	// (0x00000293) format_table_data2

0x0293,	// (0x00000293) format_table_data3

0x0293,	// (0x00000293) format_table_data_example

0x0008,

0x0293,	// (0x00000293) intro_purpose

0xaf2f,	// (0x0000af2f) bg_popup_preview_window_pane_g

0x0293,	// (0x00000293) texts_category

0x0293,	// (0x00000293) texts_graphics

0x25c8,	// (0x000025c8) text_digital

0x25d7,	// (0x000025d7) text_primary

0x25e6,	// (0x000025e6) text_primary_small

0x25f5,	// (0x000025f5) text_secondary

0x2604,	// (0x00002604) text_title

0x527b,	// (0x0000527b) bg_passive_tab_pane_g1_cp3_srt

0x2114,	// (0x00002114) bg_passive_tab_pane_g2_cp3_srt

0x5284,	// (0x00005284) bg_passive_tab_pane_g3_cp3_srt

0x082d,	// (0x0000082d) bg_active_tab_pane_cp3_srt_ParamLimits

0x082d,	// (0x0000082d) bg_active_tab_pane_cp3_srt

0x528d,	// (0x0000528d) tabs_4_active_pane_srt_g1

0xd4ea,	// (0x0000d4ea) tabs_4_active_pane_srt_t1_ParamLimits

0xd4ea,	// (0x0000d4ea) tabs_4_active_pane_srt_t1

0x527b,	// (0x0000527b) bg_active_tab_pane_g1_cp3_copy1

0x2114,	// (0x00002114) bg_active_tab_pane_g2_cp3_copy1

0x5284,	// (0x00005284) bg_active_tab_pane_g3_cp3_copy1

0x0507,	// (0x00000507) tabs_2_long_active_pane_srt_ParamLimits

0x0507,	// (0x00000507) tabs_2_long_active_pane_srt

0x0507,	// (0x00000507) tabs_2_long_passive_pane_srt_ParamLimits

0x0507,	// (0x00000507) tabs_2_long_passive_pane_srt

0x2ba0,	// (0x00002ba0) bg_passive_tab_pane_cp4_srt_ParamLimits

0x2ba0,	// (0x00002ba0) bg_passive_tab_pane_cp4_srt

0x4e2e,	// (0x00004e2e) bg_passive_tab_pane_g1_cp4_srt

0x2114,	// (0x00002114) bg_passive_tab_pane_g2_cp4_srt

0x4e37,	// (0x00004e37) bg_passive_tab_pane_g3_cp4_srt

0x0507,	// (0x00000507) bg_active_tab_pane_cp4_srt_ParamLimits

0x0507,	// (0x00000507) bg_active_tab_pane_cp4_srt

0xd2d6,	// (0x0000d2d6) tabs_2_long_active_pane_srt_t1_ParamLimits

0xd2d6,	// (0x0000d2d6) tabs_2_long_active_pane_srt_t1

0x4e2e,	// (0x00004e2e) bg_active_tab_pane_g1_cp4_srt

0x2114,	// (0x00002114) bg_active_tab_pane_g2_cp4_srt

0x4e37,	// (0x00004e37) bg_active_tab_pane_g3_cp4_srt

0x082d,	// (0x0000082d) tabs_3_long_active_pane_srt_ParamLimits

0x082d,	// (0x0000082d) tabs_3_long_active_pane_srt

0x082d,	// (0x0000082d) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x082d,	// (0x0000082d) tabs_3_long_passive_pane_cp_srt

0x082d,	// (0x0000082d) tabs_3_long_passive_pane_srt_ParamLimits

0x082d,	// (0x0000082d) tabs_3_long_passive_pane_srt

0x2ba0,	// (0x00002ba0) bg_passive_tab_pane_cp5_srt_ParamLimits

0x2ba0,	// (0x00002ba0) bg_passive_tab_pane_cp5_srt

0x22df,	// (0x000022df) bg_passive_tab_pane_g1_cp5_srt

0x2114,	// (0x00002114) bg_passive_tab_pane_g2_cp5_srt

0x22e8,	// (0x000022e8) bg_passive_tab_pane_g3_cp5_srt

0x0507,	// (0x00000507) bg_active_tab_pane_cp5_srt_ParamLimits

0x0507,	// (0x00000507) bg_active_tab_pane_cp5_srt

0xd2c0,	// (0x0000d2c0) tabs_3_long_active_pane_srt_t1_ParamLimits

0xd2c0,	// (0x0000d2c0) tabs_3_long_active_pane_srt_t1

0x22df,	// (0x000022df) bg_active_tab_pane_g1_cp5_srt

0x2114,	// (0x00002114) bg_active_tab_pane_g2_cp5_srt

0x22e8,	// (0x000022e8) bg_active_tab_pane_g3_cp5_srt

0x4e0e,	// (0x00004e0e) navi_text_pane_srt_t1

0x4e06,	// (0x00004e06) navi_icon_pane_srt_g1

0x2882,	// (0x00002882) midp_editing_number_pane_srt

0x2613,	// (0x00002613) midp_ticker_pane_srt

0x288a,	// (0x0000288a) midp_ticker_pane_srt_g1

0x2892,	// (0x00002892) midp_ticker_pane_srt_g2

0x0001,

0xadb9,	// (0x0000adb9) midp_ticker_pane_srt_g

0x289a,	// (0x0000289a) midp_ticker_pane_srt_t1

0x4df7,	// (0x00004df7) midp_editing_number_pane_t1_copy1

0xc255,	// (0x0000c255) listscroll_midp_pane

0xc255,	// (0x0000c255) midp_form_pane

0x268b,	// (0x0000268b) midp_info_popup_window_ParamLimits

0x268b,	// (0x0000268b) midp_info_popup_window

0x15bc,	// (0x000015bc) bg_popup_sub_pane_cp50_ParamLimits

0x15bc,	// (0x000015bc) bg_popup_sub_pane_cp50

0x3d42,	// (0x00003d42) listscroll_midp_info_pane_ParamLimits

0x3d42,	// (0x00003d42) listscroll_midp_info_pane

0x3d22,	// (0x00003d22) listscroll_form_midp_pane_ParamLimits

0x3d22,	// (0x00003d22) listscroll_form_midp_pane

0x3d2e,	// (0x00003d2e) scroll_bar_cp050

0x3d22,	// (0x00003d22) list_midp_pane

0x60de,	// (0x000060de) signal_pane_g2_cp

0x3c3c,	// (0x00003c3c) listscroll_midp_info_pane_t1_ParamLimits

0x3c3c,	// (0x00003c3c) listscroll_midp_info_pane_t1

0x3c54,	// (0x00003c54) listscroll_midp_info_pane_t2_ParamLimits

0x3c54,	// (0x00003c54) listscroll_midp_info_pane_t2

0x3c92,	// (0x00003c92) listscroll_midp_info_pane_t3_ParamLimits

0x3c92,	// (0x00003c92) listscroll_midp_info_pane_t3

0x3ccc,	// (0x00003ccc) listscroll_midp_info_pane_t4_ParamLimits

0x3ccc,	// (0x00003ccc) listscroll_midp_info_pane_t4

0x0003,

0xae6a,	// (0x0000ae6a) listscroll_midp_info_pane_t_ParamLimits

0xae6a,	// (0x0000ae6a) listscroll_midp_info_pane_t

0x1680,	// (0x00001680) scroll_pane_cp21

0x3bda,	// (0x00003bda) form_midp_field_choice_group_pane

0x3be3,	// (0x00003be3) form_midp_field_text_pane

0x3c22,	// (0x00003c22) form_midp_field_time_pane

0x3c2a,	// (0x00003c2a) form_midp_gauge_slider_pane

0x3c33,	// (0x00003c33) form_midp_gauge_wait_pane

0x0293,	// (0x00000293) form_midp_image_pane

0xd143,	// (0x0000d143) list_single_midp_pane_ParamLimits

0xd143,	// (0x0000d143) list_single_midp_pane

0xd122,	// (0x0000d122) form_midp_field_text_pane_t1

0x38a3,	// (0x000038a3) input_focus_pane_cp050

0x3b9b,	// (0x00003b9b) list_midp_form_text_pane

0x3b36,	// (0x00003b36) form_midp_field_choice_group_pane_t1

0x3b44,	// (0x00003b44) input_focus_pane_cp051

0x3b58,	// (0x00003b58) list_midp_choice_pane

0x0293,	// (0x00000293) status_idle_pane

0x3b1a,	// (0x00003b1a) form_midp_field_time_pane_t1

0x002e,	// (0x0000002e) wait_anim_pane_g2_copy1

0x3b28,	// (0x00003b28) form_midp_field_time_pane_t2

0x0001,

0x2739,	// (0x00002739) aid_navinavi_width_2_pane

0xae65,	// (0x0000ae65) form_midp_field_time_pane_t

0x0293,	// (0x00000293) input_focus_pane_cp052

0x0293,	// (0x00000293) bg_input_focus_pane_cp040

0x3ada,	// (0x00003ada) form_midp_gauge_slider_pane_t1

0x3ae8,	// (0x00003ae8) form_midp_gauge_slider_pane_t2

0xd106,	// (0x0000d106) form_midp_gauge_slider_pane_t3

0xd114,	// (0x0000d114) form_midp_gauge_slider_pane_t4

0x0003,

0xf3a1,	// (0x0000f3a1) form_midp_gauge_slider_pane_t

0x3b12,	// (0x00003b12) form_midp_slider_pane

0x0507,	// (0x00000507) bg_input_focus_pane_cp041_ParamLimits

0x0507,	// (0x00000507) bg_input_focus_pane_cp041

0x3aa7,	// (0x00003aa7) form_midp_gauge_wait_pane_t1_ParamLimits

0x3aa7,	// (0x00003aa7) form_midp_gauge_wait_pane_t1

0x3ab9,	// (0x00003ab9) form_midp_gauge_wait_pane_t2_ParamLimits

0x3ab9,	// (0x00003ab9) form_midp_gauge_wait_pane_t2

0x0001,

0xae57,	// (0x0000ae57) form_midp_gauge_wait_pane_t_ParamLimits

0xae57,	// (0x0000ae57) form_midp_gauge_wait_pane_t

0x3acb,	// (0x00003acb) form_midp_wait_pane_ParamLimits

0x3acb,	// (0x00003acb) form_midp_wait_pane

0x3a71,	// (0x00003a71) form_midp_image_pane_g1

0x3a7a,	// (0x00003a7a) form_midp_image_pane_t1

0x3a89,	// (0x00003a89) form_midp_image_pane_t2

0x3a98,	// (0x00003a98) form_midp_image_pane_t3

0x0002,

0xae50,	// (0x0000ae50) form_midp_image_pane_t

0x3a59,	// (0x00003a59) list_single_midp_pane_g1

0x3a62,	// (0x00003a62) list_single_midp_pane_t1

0xd0f2,	// (0x0000d0f2) list_midp_form_item_pane_ParamLimits

0xd0f2,	// (0x0000d0f2) list_midp_form_item_pane

0x26e1,	// (0x000026e1) list_midp_form_item_pane_t1

0x26f0,	// (0x000026f0) midp_ticker_pane_g1

0x26fc,	// (0x000026fc) midp_ticker_pane_g2

0x0001,

0xad9f,	// (0x0000ad9f) midp_ticker_pane_g

0x2708,	// (0x00002708) midp_ticker_pane_t1

0x50f3,	// (0x000050f3) midp_editing_number_pane_t1

0x50d1,	// (0x000050d1) midp_editing_number_pane

0x50e0,	// (0x000050e0) midp_ticker_pane

0x4dbf,	// (0x00004dbf) ai_message_heading_pane

0x0293,	// (0x00000293) bg_popup_window_pane_cp14

0x4dc7,	// (0x00004dc7) listscroll_ai_message_pane

0x4d49,	// (0x00004d49) ai_message_heading_pane_g1_ParamLimits

0x4d49,	// (0x00004d49) ai_message_heading_pane_g1

0x4d55,	// (0x00004d55) ai_message_heading_pane_g2_ParamLimits

0x4d55,	// (0x00004d55) ai_message_heading_pane_g2

0x4d61,	// (0x00004d61) ai_message_heading_pane_g3_ParamLimits

0x4d61,	// (0x00004d61) ai_message_heading_pane_g3

0x4d6d,	// (0x00004d6d) ai_message_heading_pane_g4_ParamLimits

0x4d6d,	// (0x00004d6d) ai_message_heading_pane_g4

0x0003,

0xaf91,	// (0x0000af91) ai_message_heading_pane_g_ParamLimits

0xaf91,	// (0x0000af91) ai_message_heading_pane_g

0x4d79,	// (0x00004d79) ai_message_heading_pane_t1_ParamLimits

0x4d79,	// (0x00004d79) ai_message_heading_pane_t1

0x4d93,	// (0x00004d93) ai_message_heading_pane_t2_ParamLimits

0x4d93,	// (0x00004d93) ai_message_heading_pane_t2

0x0001,

0xaf9a,	// (0x0000af9a) ai_message_heading_pane_t_ParamLimits

0xaf9a,	// (0x0000af9a) ai_message_heading_pane_t

0x4da5,	// (0x00004da5) bg_popup_heading_pane_cp1_ParamLimits

0x4da5,	// (0x00004da5) bg_popup_heading_pane_cp1

0x4d37,	// (0x00004d37) list_ai_message_pane_ParamLimits

0x4d37,	// (0x00004d37) list_ai_message_pane

0x1680,	// (0x00001680) scroll_pane_cp10

0x4c83,	// (0x00004c83) list_ai_message_pane_g1

0x4c8b,	// (0x00004c8b) list_ai_message_pane_g2

0x0001,

0xaf6e,	// (0x0000af6e) list_ai_message_pane_g

0x4c93,	// (0x00004c93) list_ai_message_pane_t1_ParamLimits

0x4c93,	// (0x00004c93) list_ai_message_pane_t1

0x4ca8,	// (0x00004ca8) list_ai_message_pane_t2_ParamLimits

0x4ca8,	// (0x00004ca8) list_ai_message_pane_t2

0x4cbd,	// (0x00004cbd) list_ai_message_pane_t3_ParamLimits

0x4cbd,	// (0x00004cbd) list_ai_message_pane_t3

0x4cd2,	// (0x00004cd2) list_ai_message_pane_t4_ParamLimits

0x4cd2,	// (0x00004cd2) list_ai_message_pane_t4

0x0003,

0xaf73,	// (0x0000af73) list_ai_message_pane_t_ParamLimits

0xaf73,	// (0x0000af73) list_ai_message_pane_t

0xd28d,	// (0x0000d28d) cell_ai_soft_ind_pane_ParamLimits

0xd28d,	// (0x0000d28d) cell_ai_soft_ind_pane

0x271a,	// (0x0000271a) cell_ai_soft_ind_pane_g1_ParamLimits

0x271a,	// (0x0000271a) cell_ai_soft_ind_pane_g1

0x0293,	// (0x00000293) grid_highlight_cp1

0x2727,	// (0x00002727) text_secondary_cp56_ParamLimits

0x2727,	// (0x00002727) text_secondary_cp56

0x4c43,	// (0x00004c43) example_general_pane_ParamLimits

0x4c43,	// (0x00004c43) example_general_pane

0x4c4f,	// (0x00004c4f) example_parent_pane_g1_ParamLimits

0x4c4f,	// (0x00004c4f) example_parent_pane_g1

0x4c5b,	// (0x00004c5b) example_parent_pane_t1_ParamLimits

0x4c5b,	// (0x00004c5b) example_parent_pane_t1

0xc93d,	// (0x0000c93d) popup_preview_text_window_ParamLimits

0xc93d,	// (0x0000c93d) popup_preview_text_window

0x2544,	// (0x00002544) list_single_pane_cp2_g4

0x08e3,	// (0x000008e3) bg_popup_preview_window_pane_ParamLimits

0x08e3,	// (0x000008e3) bg_popup_preview_window_pane

0x4990,	// (0x00004990) popup_preview_text_window_t1_ParamLimits

0x4990,	// (0x00004990) popup_preview_text_window_t1

0x49ae,	// (0x000049ae) popup_preview_text_window_t2_ParamLimits

0x49ae,	// (0x000049ae) popup_preview_text_window_t2

0x49f7,	// (0x000049f7) popup_preview_text_window_t3_ParamLimits

0x49f7,	// (0x000049f7) popup_preview_text_window_t3

0x4a3c,	// (0x00004a3c) popup_preview_text_window_t4_ParamLimits

0x4a3c,	// (0x00004a3c) popup_preview_text_window_t4

0x0004,

0xaf42,	// (0x0000af42) popup_preview_text_window_t_ParamLimits

0xaf42,	// (0x0000af42) popup_preview_text_window_t

0x4aba,	// (0x00004aba) scroll_pane_cp11

0x36f5,	// (0x000036f5) bg_popup_preview_window_pane_g1

0x4950,	// (0x00004950) bg_popup_preview_window_pane_g2

0x4958,	// (0x00004958) bg_popup_preview_window_pane_g3

0x4960,	// (0x00004960) bg_popup_preview_window_pane_g4

0x4968,	// (0x00004968) bg_popup_preview_window_pane_g5

0x4970,	// (0x00004970) bg_popup_preview_window_pane_g6

0x4978,	// (0x00004978) bg_popup_preview_window_pane_g7

0x4980,	// (0x00004980) bg_popup_preview_window_pane_g8

0x0044,	// (0x00000044) aid_popup_width_pane

0xc8b9,	// (0x0000c8b9) popup_midp_note_alarm_window_ParamLimits

0xc8b9,	// (0x0000c8b9) popup_midp_note_alarm_window

0x136e,	// (0x0000136e) data_form_pane_ParamLimits

0xbecb,	// (0x0000becb) form_field_data_pane_g1

0xbed5,	// (0x0000bed5) form_field_data_pane_t1_ParamLimits

0x139c,	// (0x0000139c) input_focus_pane_ParamLimits

0x13aa,	// (0x000013aa) data_form_wide_pane_ParamLimits

0x13b6,	// (0x000013b6) form_field_data_wide_pane_g1

0x13d6,	// (0x000013d6) form_field_data_wide_pane_t1_ParamLimits

0x0b92,	// (0x00000b92) input_focus_pane_cp6_ParamLimits

0xc011,	// (0x0000c011) input_popup_find_pane_g1_ParamLimits

0xc011,	// (0x0000c011) input_popup_find_pane_g1

0x19ae,	// (0x000019ae) aid_navi_side_left_pane

0x19c3,	// (0x000019c3) aid_navi_side_right_pane

0x4205,	// (0x00004205) bg_popup_window_pane_cp30_ParamLimits

0x4205,	// (0x00004205) bg_popup_window_pane_cp30

0x427f,	// (0x0000427f) popup_midp_note_alarm_window_g1_ParamLimits

0x427f,	// (0x0000427f) popup_midp_note_alarm_window_g1

0x42af,	// (0x000042af) popup_midp_note_alarm_window_t1_ParamLimits

0x42af,	// (0x000042af) popup_midp_note_alarm_window_t1

0x4350,	// (0x00004350) popup_midp_note_alarm_window_t2_ParamLimits

0x4350,	// (0x00004350) popup_midp_note_alarm_window_t2

0x43fe,	// (0x000043fe) popup_midp_note_alarm_window_t3_ParamLimits

0x43fe,	// (0x000043fe) popup_midp_note_alarm_window_t3

0x4430,	// (0x00004430) popup_midp_note_alarm_window_t4_ParamLimits

0x4430,	// (0x00004430) popup_midp_note_alarm_window_t4

0x4456,	// (0x00004456) popup_midp_note_alarm_window_t5_ParamLimits

0x4456,	// (0x00004456) popup_midp_note_alarm_window_t5

0x000a,

0xaedf,	// (0x0000aedf) popup_midp_note_alarm_window_t_ParamLimits

0xaedf,	// (0x0000aedf) popup_midp_note_alarm_window_t

0x4502,	// (0x00004502) wait_bar_pane_cp1_ParamLimits

0x4502,	// (0x00004502) wait_bar_pane_cp1

0x0293,	// (0x00000293) wait_anim_pane_copy1

0x0293,	// (0x00000293) wait_border_pane_copy1

0x3eeb,	// (0x00003eeb) wait_border_pane_g1_copy1

0x13ed,	// (0x000013ed) form_field_popup_pane_g1

0xbeef,	// (0x0000beef) form_field_popup_pane_t1_ParamLimits

0x139c,	// (0x0000139c) input_focus_pane_cp7_ParamLimits

0x140d,	// (0x0000140d) list_form_pane_ParamLimits

0x1419,	// (0x00001419) form_field_popup_wide_pane_g1

0x1421,	// (0x00001421) form_field_popup_wide_pane_t1_ParamLimits

0x139c,	// (0x0000139c) input_focus_pane_cp8_ParamLimits

0x1433,	// (0x00001433) list_form_wide_pane_ParamLimits

0xd543,	// (0x0000d543) aid_size_cell_graphic_pane

0xbf6e,	// (0x0000bf6e) data_form_pane_t1_ParamLimits

0xd441,	// (0x0000d441) data_form_wide_pane_t1_ParamLimits

0xcd05,	// (0x0000cd05) bg_status_flat_pane

0xb7a7,	// (0x0000b7a7) title_pane_t1_ParamLimits

0x04cf,	// (0x000004cf) title_pane_t2_ParamLimits

0x04f5,	// (0x000004f5) title_pane_t3_ParamLimits

0xf261,	// (0x0000f261) title_pane_t_ParamLimits

0x1cc5,	// (0x00001cc5) level_1_signal_ParamLimits

0x1cd7,	// (0x00001cd7) level_2_signal_ParamLimits

0x1cea,	// (0x00001cea) level_3_signal_ParamLimits

0x1cfd,	// (0x00001cfd) level_4_signal_ParamLimits

0x1d10,	// (0x00001d10) level_5_signal_ParamLimits

0x1d23,	// (0x00001d23) level_6_signal_ParamLimits

0x1d36,	// (0x00001d36) level_7_signal_ParamLimits

0x1cc5,	// (0x00001cc5) level_1_battery_ParamLimits

0x1cd7,	// (0x00001cd7) level_2_battery_ParamLimits

0x1cea,	// (0x00001cea) level_3_battery_ParamLimits

0x1cfd,	// (0x00001cfd) level_4_battery_ParamLimits

0x1d10,	// (0x00001d10) level_5_battery_ParamLimits

0x1d23,	// (0x00001d23) level_6_battery_ParamLimits

0x1d36,	// (0x00001d36) level_7_battery_ParamLimits

0x410a,	// (0x0000410a) bg_status_flat_pane_g1

0x4112,	// (0x00004112) bg_status_flat_pane_g2

0x411a,	// (0x0000411a) bg_status_flat_pane_g3

0x4122,	// (0x00004122) bg_status_flat_pane_g4

0x412a,	// (0x0000412a) bg_status_flat_pane_g5

0x4132,	// (0x00004132) bg_status_flat_pane_g6

0x413a,	// (0x0000413a) bg_status_flat_pane_g7

0xb833,	// (0x0000b833) tabs_3_active_pane_t1_ParamLimits

0xb833,	// (0x0000b833) tabs_3_passive_pane_t1_ParamLimits

0xb845,	// (0x0000b845) tabs_4_active_pane_t1_ParamLimits

0xb845,	// (0x0000b845) tabs_4_1_passive_pane_t1_ParamLimits

0xc01f,	// (0x0000c01f) tabs_2_active_pane_t1_ParamLimits

0xc01f,	// (0x0000c01f) tabs_2_passive_pane_t1_ParamLimits

0x0507,	// (0x00000507) bg_active_tab_pane_cp4_ParamLimits

0xc031,	// (0x0000c031) tabs_2_long_active_pane_t1_ParamLimits

0x2ba0,	// (0x00002ba0) bg_passive_tab_pane_cp4_ParamLimits

0x37c6,	// (0x000037c6) list_single_midp_graphic_pane_t1_ParamLimits

0x0507,	// (0x00000507) bg_active_tab_pane_cp5_ParamLimits

0xc044,	// (0x0000c044) tabs_3_long_active_pane_t1_ParamLimits

0x2ba0,	// (0x00002ba0) bg_passive_tab_pane_cp5_ParamLimits

0x37c6,	// (0x000037c6) list_single_midp_graphic_pane_t1

0xcd05,	// (0x0000cd05) bg_status_flat_pane_ParamLimits

0x32df,	// (0x000032df) indicator_pane_cp2_ParamLimits

0x32df,	// (0x000032df) indicator_pane_cp2

0xce83,	// (0x0000ce83) navi_pane_srt_ParamLimits

0xce83,	// (0x0000ce83) navi_pane_srt

0x342e,	// (0x0000342e) popup_clock_digital_analogue_window_cp1

0x068f,	// (0x0000068f) indicator_pane_t1

0x2613,	// (0x00002613) copy_highlight_pane

0x2613,	// (0x00002613) cursor_graphics_pane

0x2613,	// (0x00002613) graphic_within_text_pane

0x2613,	// (0x00002613) link_highlight_pane

0x4a7d,	// (0x00004a7d) popup_preview_text_window_t5_ParamLimits

0x4a7d,	// (0x00004a7d) popup_preview_text_window_t5

0x2741,	// (0x00002741) cursor_digital_pane

0x2741,	// (0x00002741) cursor_primary_pane

0x2752,	// (0x00002752) cursor_primary_small_pane

0x275a,	// (0x0000275a) cursor_secondary_pane

0x2762,	// (0x00002762) cursor_title_pane

0x2741,	// (0x00002741) link_highlight_digital_pane

0x2749,	// (0x00002749) link_highlight_primary_pane

0x2752,	// (0x00002752) link_highlight_primary_small_pane

0x275a,	// (0x0000275a) link_highlight_secondary_pane

0x2762,	// (0x00002762) link_highlight_title_pane

0x2741,	// (0x00002741) copy_highlight_digital_pane

0x2741,	// (0x00002741) copy_highlight_primary_pane

0x2752,	// (0x00002752) copy_highlight_primary_small_pane

0x275a,	// (0x0000275a) copy_highlight_secondary_pane

0x2762,	// (0x00002762) copy_highlight_title_pane

0x275a,	// (0x0000275a) graphic_text_digital_pane

0x41a8,	// (0x000041a8) graphic_text_primary_pane

0x41b1,	// (0x000041b1) graphic_text_primary_small_pane

0x2752,	// (0x00002752) graphic_text_secondary_pane

0x2741,	// (0x00002741) graphic_text_title_pane

0xc2fa,	// (0x0000c2fa) cursor_primary_pane_g1

0x419a,	// (0x0000419a) cursor_text_primary_t1

0xd189,	// (0x0000d189) cursor_primary_small_pane_g1

0x418c,	// (0x0000418c) cursor_text_primary_small_t1

0xd17f,	// (0x0000d17f) cursor_primary_small_pane_g1_copy1

0x4174,	// (0x00004174) cursor_text_primary_small_t1_copy1

0x4152,	// (0x00004152) cursor_text_title_t1

0xd175,	// (0x0000d175) cursor_title_pane_g1

0xc2fa,	// (0x0000c2fa) cursor_digital_pane_g1

0x2774,	// (0x00002774) cursor_text_digital_t1

0x2799,	// (0x00002799) link_highlight_primary_pane_g1

0x40fb,	// (0x000040fb) link_highlight_primary_pane_t1

0x2782,	// (0x00002782) link_highlight_primary_small_pane_g1

0x278a,	// (0x0000278a) link_highlight_primary_small_pane_t1

0x2799,	// (0x00002799) link_highlight_secondary_pane_g1

0x27a1,	// (0x000027a1) link_highlight_secondary_pane_t1

0x406f,	// (0x0000406f) link_highlight_title_pane_g1

0x4077,	// (0x00004077) link_highlight_title_pane_t1

0x4058,	// (0x00004058) link_highlight_digital_pane_g1

0x4060,	// (0x00004060) link_highlight_digital_pane_t1

0x3f30,	// (0x00003f30) copy_highlight_primary_pane_g1

0x3f38,	// (0x00003f38) copy_highlight_primary_pane_t1

0x3f0a,	// (0x00003f0a) copy_highlight_primary_small_pane_g1

0x3f21,	// (0x00003f21) copy_highlight_primary_small_pane_t1

0x27b0,	// (0x000027b0) copy_highlight_secondary_pane_g1

0x27b8,	// (0x000027b8) copy_highlight_secondary_pane_t1

0x3f0a,	// (0x00003f0a) copy_highlight_title_pane_g1

0x3f12,	// (0x00003f12) copy_highlight_title_pane_t1

0x3f30,	// (0x00003f30) copy_highlight_digital_pane_g1

0x5595,	// (0x00005595) copy_highlight_digital_pane_t1

0x54e9,	// (0x000054e9) graphic_text_primary_pane_g1

0x5579,	// (0x00005579) graphic_text_primary_pane_t1

0x5587,	// (0x00005587) graphic_text_primary_pane_t2

0x0001,

0xb00e,	// (0x0000b00e) graphic_text_primary_pane_t

0x5555,	// (0x00005555) graphic_text_primary_small_pane_g1

0x555d,	// (0x0000555d) graphic_text_primary_small_pane_t1

0x556b,	// (0x0000556b) graphic_text_primary_small_pane_t2

0x0001,

0xb009,	// (0x0000b009) graphic_text_primary_small_pane_t

0x5531,	// (0x00005531) graphic_text_secondary_pane_g1

0x5539,	// (0x00005539) graphic_text_secondary_pane_t1

0x5547,	// (0x00005547) graphic_text_secondary_pane_t2

0x0001,

0xb004,	// (0x0000b004) graphic_text_secondary_pane_t

0x550d,	// (0x0000550d) graphic_text_title_pane_g1

0x5515,	// (0x00005515) graphic_text_title_pane_t1

0x5523,	// (0x00005523) graphic_text_title_pane_t2

0x0001,

0xafff,	// (0x0000afff) graphic_text_title_pane_t

0x54e9,	// (0x000054e9) graphic_text_digital_pane_g1

0x54f1,	// (0x000054f1) graphic_text_digital_pane_t1

0x54ff,	// (0x000054ff) graphic_text_digital_pane_t2

0x0001,

0xaffa,	// (0x0000affa) graphic_text_digital_pane_t

0x0507,	// (0x00000507) navi_icon_pane_srt_ParamLimits

0x0507,	// (0x00000507) navi_icon_pane_srt

0x0293,	// (0x00000293) navi_midp_pane_srt

0x0293,	// (0x00000293) navi_navi_pane_srt

0x0507,	// (0x00000507) navi_text_pane_srt_ParamLimits

0x0507,	// (0x00000507) navi_text_pane_srt

0x54b4,	// (0x000054b4) navi_navi_icon_text_pane_srt

0x54bc,	// (0x000054bc) navi_navi_pane_srt_g1_ParamLimits

0x54bc,	// (0x000054bc) navi_navi_pane_srt_g1

0x54ce,	// (0x000054ce) navi_navi_pane_srt_g2_ParamLimits

0x54ce,	// (0x000054ce) navi_navi_pane_srt_g2

0x0001,

0xaff5,	// (0x0000aff5) navi_navi_pane_srt_g_ParamLimits

0xaff5,	// (0x0000aff5) navi_navi_pane_srt_g

0x54e0,	// (0x000054e0) navi_navi_tabs_pane_srt

0x54b4,	// (0x000054b4) navi_navi_text_pane_srt

0x54b4,	// (0x000054b4) navi_navi_volume_pane_srt

0x54a5,	// (0x000054a5) navi_navi_text_pane_srt_t1

0x5480,	// (0x00005480) navi_navi_volume_pane_srt_g1

0x5488,	// (0x00005488) volume_small_pane_srt_ParamLimits

0x5488,	// (0x00005488) volume_small_pane_srt

0x27c7,	// (0x000027c7) volume_small_pane_srt_g1_ParamLimits

0x27c7,	// (0x000027c7) volume_small_pane_srt_g1

0x27d7,	// (0x000027d7) volume_small_pane_srt_g2_ParamLimits

0x27d7,	// (0x000027d7) volume_small_pane_srt_g2

0x27e8,	// (0x000027e8) volume_small_pane_srt_g3_ParamLimits

0x27e8,	// (0x000027e8) volume_small_pane_srt_g3

0x27f9,	// (0x000027f9) volume_small_pane_srt_g4_ParamLimits

0x27f9,	// (0x000027f9) volume_small_pane_srt_g4

0x280a,	// (0x0000280a) volume_small_pane_srt_g5_ParamLimits

0x280a,	// (0x0000280a) volume_small_pane_srt_g5

0x281b,	// (0x0000281b) volume_small_pane_srt_g6_ParamLimits

0x281b,	// (0x0000281b) volume_small_pane_srt_g6

0x282c,	// (0x0000282c) volume_small_pane_srt_g7_ParamLimits

0x282c,	// (0x0000282c) volume_small_pane_srt_g7

0x283d,	// (0x0000283d) volume_small_pane_srt_g8_ParamLimits

0x283d,	// (0x0000283d) volume_small_pane_srt_g8

0x284e,	// (0x0000284e) volume_small_pane_srt_g9_ParamLimits

0x284e,	// (0x0000284e) volume_small_pane_srt_g9

0x285f,	// (0x0000285f) volume_small_pane_srt_g10_ParamLimits

0x285f,	// (0x0000285f) volume_small_pane_srt_g10

0x0009,

0xada4,	// (0x0000ada4) volume_small_pane_srt_g_ParamLimits

0xada4,	// (0x0000ada4) volume_small_pane_srt_g

0x098c,	// (0x0000098c) query_popup_data_pane_cp2

0x546e,	// (0x0000546e) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x546e,	// (0x0000546e) navi_navi_icon_text_pane_srt_t1

0x41a8,	// (0x000041a8) navi_tabs_2_long_pane_srt

0x41a8,	// (0x000041a8) navi_tabs_2_pane_srt

0x41a8,	// (0x000041a8) navi_tabs_3_long_pane_srt

0x41a8,	// (0x000041a8) navi_tabs_3_pane_srt

0x41a8,	// (0x000041a8) navi_tabs_4_pane_srt

0x5446,	// (0x00005446) tabs_2_active_pane_srt_ParamLimits

0x5446,	// (0x00005446) tabs_2_active_pane_srt

0x5456,	// (0x00005456) tabs_2_passive_pane_srt_ParamLimits

0x5456,	// (0x00005456) tabs_2_passive_pane_srt

0x38a3,	// (0x000038a3) bg_passive_tab_pane_cp1_srt_ParamLimits

0x38a3,	// (0x000038a3) bg_passive_tab_pane_cp1_srt

0x541a,	// (0x0000541a) bg_passive_tab_pane_g1_cp1_srt

0x2114,	// (0x00002114) bg_passive_tab_pane_g2_cp1_srt

0x5423,	// (0x00005423) bg_passive_tab_pane_g3_cp1_srt

0x082d,	// (0x0000082d) bg_active_tab_pane_cp1_srt_ParamLimits

0x082d,	// (0x0000082d) bg_active_tab_pane_cp1_srt

0x542c,	// (0x0000542c) tabs_2_active_pane_srt_g1

0xd585,	// (0x0000d585) tabs_2_active_pane_srt_t1_ParamLimits

0xd585,	// (0x0000d585) tabs_2_active_pane_srt_t1

0x541a,	// (0x0000541a) bg_active_tab_pane_g1_cp1_srt

0x2114,	// (0x00002114) bg_active_tab_pane_g2_cp1_srt

0x5423,	// (0x00005423) bg_active_tab_pane_g3_cp1_srt

0x53e7,	// (0x000053e7) tabs_3_active_pane_srt_ParamLimits

0x53e7,	// (0x000053e7) tabs_3_active_pane_srt

0x53f8,	// (0x000053f8) tabs_3_passive_pane_cp_srt_ParamLimits

0x53f8,	// (0x000053f8) tabs_3_passive_pane_cp_srt

0x5409,	// (0x00005409) tabs_3_passive_pane_srt_ParamLimits

0x5409,	// (0x00005409) tabs_3_passive_pane_srt

0x38a3,	// (0x000038a3) bg_passive_tab_pane_cp2_srt_ParamLimits

0x38a3,	// (0x000038a3) bg_passive_tab_pane_cp2_srt

0x2870,	// (0x00002870) bg_passive_tab_pane_g1_cp2_srt

0x2114,	// (0x00002114) bg_passive_tab_pane_g2_cp2_srt

0x2879,	// (0x00002879) bg_passive_tab_pane_g3_cp2_srt

0x082d,	// (0x0000082d) bg_active_tab_pane_cp2_srt_ParamLimits

0x082d,	// (0x0000082d) bg_active_tab_pane_cp2_srt

0x53cd,	// (0x000053cd) tabs_3_active_pane_srt_g1

0xd56f,	// (0x0000d56f) tabs_3_active_pane_srt_t1_ParamLimits

0xd56f,	// (0x0000d56f) tabs_3_active_pane_srt_t1

0x2870,	// (0x00002870) bg_active_tab_pane_g1_cp2_srt

0x2114,	// (0x00002114) bg_active_tab_pane_g2_cp2_srt

0x2879,	// (0x00002879) bg_active_tab_pane_g3_cp2_srt

0x5385,	// (0x00005385) tabs_4_active_pane_srt_ParamLimits

0x5385,	// (0x00005385) tabs_4_active_pane_srt

0x5397,	// (0x00005397) tabs_4_passive_pane_cp2_srt_ParamLimits

0x5397,	// (0x00005397) tabs_4_passive_pane_cp2_srt

0x2b1e,	// (0x00002b1e) aid_size_cell_toolbar

0x4f17,	// (0x00004f17) main_idle_act_pane_ParamLimits

0x2d4b,	// (0x00002d4b) popup_large_graphic_colour_window_ParamLimits

0xcbc9,	// (0x0000cbc9) popup_toolbar_window_ParamLimits

0xcbc9,	// (0x0000cbc9) popup_toolbar_window

0x511d,	// (0x0000511d) list_single_graphic_2heading_pane_ParamLimits

0x511d,	// (0x0000511d) list_single_graphic_2heading_pane

0x1a3a,	// (0x00001a3a) aid_size_cell_apps_grid_lsc_pane

0x1a4c,	// (0x00001a4c) aid_size_cell_apps_grid_prt_pane

0x2ba0,	// (0x00002ba0) bg_wml_button_pane_cp1_ParamLimits

0x2ba0,	// (0x00002ba0) bg_wml_button_pane_cp1

0xd122,	// (0x0000d122) form_midp_field_text_pane_t1_ParamLimits

0x38a3,	// (0x000038a3) input_focus_pane_cp050_ParamLimits

0x3b9b,	// (0x00003b9b) list_midp_form_text_pane_ParamLimits

0x3b44,	// (0x00003b44) input_focus_pane_cp051_ParamLimits

0x3b58,	// (0x00003b58) list_midp_choice_pane_ParamLimits

0xd0c0,	// (0x0000d0c0) list_single_2graphic_pane_cp3_ParamLimits

0xd0c0,	// (0x0000d0c0) list_single_2graphic_pane_cp3

0xd0d3,	// (0x0000d0d3) list_single_midp_graphic_pane_ParamLimits

0xd0d3,	// (0x0000d0d3) list_single_midp_graphic_pane

0x358d,	// (0x0000358d) list_single_graphic_2heading_pane_g1_ParamLimits

0x358d,	// (0x0000358d) list_single_graphic_2heading_pane_g1

0x254c,	// (0x0000254c) list_single_graphic_2heading_pane_g4_ParamLimits

0x254c,	// (0x0000254c) list_single_graphic_2heading_pane_g4

0x3599,	// (0x00003599) list_single_graphic_2heading_pane_g5_ParamLimits

0x3599,	// (0x00003599) list_single_graphic_2heading_pane_g5

0x0002,

0xadf7,	// (0x0000adf7) list_single_graphic_2heading_pane_g_ParamLimits

0xadf7,	// (0x0000adf7) list_single_graphic_2heading_pane_g

0x35a5,	// (0x000035a5) list_single_graphic_2heading_pane_t1_ParamLimits

0x35a5,	// (0x000035a5) list_single_graphic_2heading_pane_t1

0x35b9,	// (0x000035b9) list_single_graphic_2heading_pane_t2_ParamLimits

0x35b9,	// (0x000035b9) list_single_graphic_2heading_pane_t2

0x35d5,	// (0x000035d5) list_single_graphic_2heading_pane_t3_ParamLimits

0x35d5,	// (0x000035d5) list_single_graphic_2heading_pane_t3

0x0002,

0xadfe,	// (0x0000adfe) list_single_graphic_2heading_pane_t_ParamLimits

0xadfe,	// (0x0000adfe) list_single_graphic_2heading_pane_t

0x35ed,	// (0x000035ed) bg_popup_sub_pane_cp2

0x3617,	// (0x00003617) grid_toobar_pane

0x3653,	// (0x00003653) cell_toolbar_pane_ParamLimits

0x3653,	// (0x00003653) cell_toolbar_pane

0x3699,	// (0x00003699) cell_toolbar_pane_g1_ParamLimits

0x3699,	// (0x00003699) cell_toolbar_pane_g1

0x36ad,	// (0x000036ad) cell_toolbar_pane_g2_ParamLimits

0x36ad,	// (0x000036ad) cell_toolbar_pane_g2

0x0001,

0xae05,	// (0x0000ae05) cell_toolbar_pane_g_ParamLimits

0xae05,	// (0x0000ae05) cell_toolbar_pane_g

0x36cf,	// (0x000036cf) grid_highlight_pane_cp2_ParamLimits

0x36cf,	// (0x000036cf) grid_highlight_pane_cp2

0x36e9,	// (0x000036e9) toolbar_button_pane

0x36f5,	// (0x000036f5) toolbar_button_pane_g1

0x36fd,	// (0x000036fd) toolbar_button_pane_g2

0x3705,	// (0x00003705) toolbar_button_pane_g3

0x370d,	// (0x0000370d) toolbar_button_pane_g4

0x3715,	// (0x00003715) toolbar_button_pane_g5

0x371d,	// (0x0000371d) toolbar_button_pane_g6

0x3725,	// (0x00003725) toolbar_button_pane_g7

0x372d,	// (0x0000372d) toolbar_button_pane_g8

0x3735,	// (0x00003735) toolbar_button_pane_g9

0x0009,

0xae0a,	// (0x0000ae0a) toolbar_button_pane_g

0x3745,	// (0x00003745) list_single_2graphic_pane_g1_cp3_ParamLimits

0x3745,	// (0x00003745) list_single_2graphic_pane_g1_cp3

0xd022,	// (0x0000d022) list_single_2graphic_pane_g2_cp3_ParamLimits

0xd022,	// (0x0000d022) list_single_2graphic_pane_g2_cp3

0x3762,	// (0x00003762) list_single_2graphic_pane_g3_cp3

0x376a,	// (0x0000376a) list_single_2graphic_pane_g4_cp3_ParamLimits

0x376a,	// (0x0000376a) list_single_2graphic_pane_g4_cp3

0x3776,	// (0x00003776) list_single_2graphic_pane_t1_cp3_ParamLimits

0x3776,	// (0x00003776) list_single_2graphic_pane_t1_cp3

0x37ba,	// (0x000037ba) list_single_midp_graphic_pane_g2_ParamLimits

0x37ba,	// (0x000037ba) list_single_midp_graphic_pane_g2

0x2b26,	// (0x00002b26) aid_zoom_text_primary

0x2b2e,	// (0x00002b2e) aid_zoom_text_secondary

0xc352,	// (0x0000c352) status_small_pane_g7_ParamLimits

0xc352,	// (0x0000c352) status_small_pane_g7

0xc375,	// (0x0000c375) status_small_pane_t1_ParamLimits

0xb783,	// (0x0000b783) title_pane_g2

0x0003,

0xf258,	// (0x0000f258) title_pane_g

0xb9fb,	// (0x0000b9fb) aid_size_cell_colour_1_pane_ParamLimits

0xb9fb,	// (0x0000b9fb) aid_size_cell_colour_1_pane

0xba0f,	// (0x0000ba0f) aid_size_cell_colour_2_pane_ParamLimits

0xba0f,	// (0x0000ba0f) aid_size_cell_colour_2_pane

0xba23,	// (0x0000ba23) aid_size_cell_colour_3_pane_ParamLimits

0xba23,	// (0x0000ba23) aid_size_cell_colour_3_pane

0xba37,	// (0x0000ba37) aid_size_cell_colour_4_pane_ParamLimits

0xba37,	// (0x0000ba37) aid_size_cell_colour_4_pane

0x18b6,	// (0x000018b6) title_pane_stacon_g1_ParamLimits

0x18b6,	// (0x000018b6) title_pane_stacon_g1

0x3f8f,	// (0x00003f8f) popup_note_wait_window_g3_ParamLimits

0x3f8f,	// (0x00003f8f) popup_note_wait_window_g3

0x4005,	// (0x00004005) popup_note_wait_window_t5_ParamLimits

0x4005,	// (0x00004005) popup_note_wait_window_t5

0x0293,	// (0x00000293) main_feb_china_hwr_fs_writing_pane

0xc5d1,	// (0x0000c5d1) popup_feb_china_hwr_fs_window_ParamLimits

0xc5d1,	// (0x0000c5d1) popup_feb_china_hwr_fs_window

0xd033,	// (0x0000d033) aid_size_cell_hwr_fs_ParamLimits

0xd033,	// (0x0000d033) aid_size_cell_hwr_fs

0x38a3,	// (0x000038a3) bg_popup_sub_pane_cp3_ParamLimits

0x38a3,	// (0x000038a3) bg_popup_sub_pane_cp3

0xd048,	// (0x0000d048) grid_hwr_fs_pane_ParamLimits

0xd048,	// (0x0000d048) grid_hwr_fs_pane

0x38c7,	// (0x000038c7) linegrid_hwr_fs_pane_ParamLimits

0x38c7,	// (0x000038c7) linegrid_hwr_fs_pane

0xd060,	// (0x0000d060) cell_hwr_fs_pane_ParamLimits

0xd060,	// (0x0000d060) cell_hwr_fs_pane

0x38f9,	// (0x000038f9) linegrid_hwr_fs_pane_g1_ParamLimits

0x38f9,	// (0x000038f9) linegrid_hwr_fs_pane_g1

0xd086,	// (0x0000d086) linegrid_hwr_fs_pane_g2_ParamLimits

0xd086,	// (0x0000d086) linegrid_hwr_fs_pane_g2

0x3917,	// (0x00003917) linegrid_hwr_fs_pane_g3_ParamLimits

0x3917,	// (0x00003917) linegrid_hwr_fs_pane_g3

0x3923,	// (0x00003923) linegrid_hwr_fs_pane_g4_ParamLimits

0x3923,	// (0x00003923) linegrid_hwr_fs_pane_g4

0x393d,	// (0x0000393d) linegrid_hwr_fs_pane_g5_ParamLimits

0x393d,	// (0x0000393d) linegrid_hwr_fs_pane_g5

0x0004,

0xf38d,	// (0x0000f38d) linegrid_hwr_fs_pane_g_ParamLimits

0xf38d,	// (0x0000f38d) linegrid_hwr_fs_pane_g

0x3953,	// (0x00003953) cell_hwr_fs_pane_g1_ParamLimits

0x3953,	// (0x00003953) cell_hwr_fs_pane_g1

0x34c4,	// (0x000034c4) cell_hwr_fs_pane_g2_ParamLimits

0x34c4,	// (0x000034c4) cell_hwr_fs_pane_g2

0xd098,	// (0x0000d098) cell_hwr_fs_pane_g3_ParamLimits

0xd098,	// (0x0000d098) cell_hwr_fs_pane_g3

0xd0a5,	// (0x0000d0a5) cell_hwr_fs_pane_g4_ParamLimits

0xd0a5,	// (0x0000d0a5) cell_hwr_fs_pane_g4

0x0003,

0xf398,	// (0x0000f398) cell_hwr_fs_pane_g_ParamLimits

0xf398,	// (0x0000f398) cell_hwr_fs_pane_g

0xd0b2,	// (0x0000d0b2) cell_hwr_fs_pane_t1

0x0293,	// (0x00000293) grid_highlight_pane_cp6

0x0293,	// (0x00000293) main_idle_act2_pane

0x1667,	// (0x00001667) aid_inside_area_popup_secondary

0xd193,	// (0x0000d193) aid_inside_area_window_primary_ParamLimits

0xd193,	// (0x0000d193) aid_inside_area_window_primary

0x55a4,	// (0x000055a4) ai2_news_ticker_pane

0x55ac,	// (0x000055ac) aid_size_cell_ai1_link_ParamLimits

0x55ac,	// (0x000055ac) aid_size_cell_ai1_link

0xd59b,	// (0x0000d59b) popup_ai2_data_window_ParamLimits

0xd59b,	// (0x0000d59b) popup_ai2_data_window

0x55dc,	// (0x000055dc) popup_ai2_link_window_ParamLimits

0x55dc,	// (0x000055dc) popup_ai2_link_window

0x38a3,	// (0x000038a3) bg_popup_sub_pane_cp4_ParamLimits

0x38a3,	// (0x000038a3) bg_popup_sub_pane_cp4

0x55f0,	// (0x000055f0) grid_ai2_link_pane_ParamLimits

0x55f0,	// (0x000055f0) grid_ai2_link_pane

0x5607,	// (0x00005607) popup_ai2_link_window_g1_ParamLimits

0x5607,	// (0x00005607) popup_ai2_link_window_g1

0x5613,	// (0x00005613) popup_ai2_link_window_g2_ParamLimits

0x5613,	// (0x00005613) popup_ai2_link_window_g2

0x0001,

0xb013,	// (0x0000b013) popup_ai2_link_window_g_ParamLimits

0xb013,	// (0x0000b013) popup_ai2_link_window_g

0x5622,	// (0x00005622) ai2_mp_button_pane

0x562a,	// (0x0000562a) ai2_mp_volume_pane

0x3b44,	// (0x00003b44) bg_popup_sub_pane_cp5_ParamLimits

0x3b44,	// (0x00003b44) bg_popup_sub_pane_cp5

0x5632,	// (0x00005632) heading_ai2_gene_pane_ParamLimits

0x5632,	// (0x00005632) heading_ai2_gene_pane

0x563e,	// (0x0000563e) list_ai2_gene_pane_ParamLimits

0x563e,	// (0x0000563e) list_ai2_gene_pane

0x5686,	// (0x00005686) cell_ai2_link_pane_ParamLimits

0x5686,	// (0x00005686) cell_ai2_link_pane

0x569c,	// (0x0000569c) cell_ai2_link_pane_g1

0x0293,	// (0x00000293) grid_highlight_pane_cp7

0x576c,	// (0x0000576c) ai2_mp_volume_pane_g1

0x5774,	// (0x00005774) ai2_mp_volume_pane_g2

0xd5c5,	// (0x0000d5c5) list_ai2_gene_pane_t1

0x577c,	// (0x0000577c) ai2_mp_volume_pane_g3

0x0002,

0xb02c,	// (0x0000b02c) ai2_mp_volume_pane_g

0x5784,	// (0x00005784) volume_small_pane_cp3

0x578d,	// (0x0000578d) aid_size_cell_ai2_button

0x5795,	// (0x00005795) grid_ai2_button_pane

0x579e,	// (0x0000579e) cell_ai2_button_pane_ParamLimits

0x579e,	// (0x0000579e) cell_ai2_button_pane

0x002e,	// (0x0000002e) cell_ai2_button_pane_g1

0x0293,	// (0x00000293) grid_highlight_pane_cp8

0x572c,	// (0x0000572c) ai2_gene_pane_t1_ParamLimits

0x572c,	// (0x0000572c) ai2_gene_pane_t1

0xc543,	// (0x0000c543) aid_height_parent_landscape

0xd2ed,	// (0x0000d2ed) aid_height_set_list

0x4f17,	// (0x00004f17) aid_size_parent

0xd543,	// (0x0000d543) aid_size_cell_graphic_pane_ParamLimits

0x564e,	// (0x0000564e) popup_ai2_data_window_g1_ParamLimits

0x564e,	// (0x0000564e) popup_ai2_data_window_g1

0x565a,	// (0x0000565a) ai2_news_ticker_pane_g1

0x5662,	// (0x00005662) ai2_news_ticker_pane_g2

0x0001,

0xb018,	// (0x0000b018) ai2_news_ticker_pane_g

0x566a,	// (0x0000566a) ai2_news_ticker_pane_t1

0x5678,	// (0x00005678) ai2_news_ticker_pane_t2

0x0001,

0xb01d,	// (0x0000b01d) ai2_news_ticker_pane_t

0x56a5,	// (0x000056a5) heading_ai2_gene_pane_g1

0x56ad,	// (0x000056ad) heading_ai2_gene_pane_t1_ParamLimits

0x56ad,	// (0x000056ad) heading_ai2_gene_pane_t1

0x56c2,	// (0x000056c2) list_highlight_pane_cp6

0xd5af,	// (0x0000d5af) ai2_gene_pane_ParamLimits

0xd5af,	// (0x0000d5af) ai2_gene_pane

0xd5d3,	// (0x0000d5d3) list_ai2_gene_pane_t2

0x0001,

0xf3f9,	// (0x0000f3f9) list_ai2_gene_pane_t

0x56fd,	// (0x000056fd) list_highlight_pane_cp8_ParamLimits

0x56fd,	// (0x000056fd) list_highlight_pane_cp8

0x570e,	// (0x0000570e) ai2_gene_pane_g1_ParamLimits

0x570e,	// (0x0000570e) ai2_gene_pane_g1

0x5720,	// (0x00005720) ai2_gene_pane_g2_ParamLimits

0x5720,	// (0x00005720) ai2_gene_pane_g2

0x0001,

0xb027,	// (0x0000b027) ai2_gene_pane_g_ParamLimits

0xb027,	// (0x0000b027) ai2_gene_pane_g

0x0db7,	// (0x00000db7) scroll_pane_cp12

0xc500,	// (0x0000c500) control_pane_t3_ParamLimits

0xc500,	// (0x0000c500) control_pane_t3

0xc366,	// (0x0000c366) status_small_pane_g8_ParamLimits

0xc366,	// (0x0000c366) status_small_pane_g8

0xc666,	// (0x0000c666) popup_find_window_ParamLimits

0xc8f3,	// (0x0000c8f3) popup_note_image_window_ParamLimits

0x358d,	// (0x0000358d) list_double2_graphic_pane_vc_g1_ParamLimits

0x358d,	// (0x0000358d) list_double2_graphic_pane_vc_g1

0x254c,	// (0x0000254c) list_double2_graphic_pane_vc_g2_ParamLimits

0x254c,	// (0x0000254c) list_double2_graphic_pane_vc_g2

0x3599,	// (0x00003599) list_double2_graphic_pane_vc_g3_ParamLimits

0x3599,	// (0x00003599) list_double2_graphic_pane_vc_g3

0x0002,

0xadf7,	// (0x0000adf7) list_double2_graphic_pane_vc_g_ParamLimits

0xadf7,	// (0x0000adf7) list_double2_graphic_pane_vc_g

0x3683,	// (0x00003683) list_double2_graphic_pane_vc_t1_ParamLimits

0x3683,	// (0x00003683) list_double2_graphic_pane_vc_t1

0x254c,	// (0x0000254c) list_single_heading_pane_vc_g1_ParamLimits

0x254c,	// (0x0000254c) list_single_heading_pane_vc_g1

0x3599,	// (0x00003599) list_single_heading_pane_vc_g2_ParamLimits

0x3599,	// (0x00003599) list_single_heading_pane_vc_g2

0x0001,

0xae1f,	// (0x0000ae1f) list_single_heading_pane_vc_g_ParamLimits

0xae1f,	// (0x0000ae1f) list_single_heading_pane_vc_g

0x3792,	// (0x00003792) list_single_heading_pane_vc_t1_ParamLimits

0x3792,	// (0x00003792) list_single_heading_pane_vc_t1

0x37a8,	// (0x000037a8) list_single_heading_pane_vc_t2_ParamLimits

0x37a8,	// (0x000037a8) list_single_heading_pane_vc_t2

0x0001,

0xae24,	// (0x0000ae24) list_single_heading_pane_vc_t_ParamLimits

0xae24,	// (0x0000ae24) list_single_heading_pane_vc_t

0x37dc,	// (0x000037dc) list_setting_number_pane_vc_g1_ParamLimits

0x37dc,	// (0x000037dc) list_setting_number_pane_vc_g1

0x37e8,	// (0x000037e8) list_setting_number_pane_vc_g2_ParamLimits

0x37e8,	// (0x000037e8) list_setting_number_pane_vc_g2

0x0001,

0xae29,	// (0x0000ae29) list_setting_number_pane_vc_g_ParamLimits

0xae29,	// (0x0000ae29) list_setting_number_pane_vc_g

0x37f4,	// (0x000037f4) list_setting_number_pane_vc_t1_ParamLimits

0x37f4,	// (0x000037f4) list_setting_number_pane_vc_t1

0x3808,	// (0x00003808) list_setting_number_pane_vc_t2_ParamLimits

0x3808,	// (0x00003808) list_setting_number_pane_vc_t2

0x3824,	// (0x00003824) list_setting_number_pane_vc_t3_ParamLimits

0x3824,	// (0x00003824) list_setting_number_pane_vc_t3

0x0002,

0xae2e,	// (0x0000ae2e) list_setting_number_pane_vc_t_ParamLimits

0xae2e,	// (0x0000ae2e) list_setting_number_pane_vc_t

0x3852,	// (0x00003852) set_value_pane_vc_ParamLimits

0x3852,	// (0x00003852) set_value_pane_vc

0x511d,	// (0x0000511d) list_double2_graphic_pane_vc_ParamLimits

0x511d,	// (0x0000511d) list_double2_graphic_pane_vc

0x511d,	// (0x0000511d) list_double2_large_graphic_pane_vc_ParamLimits

0x511d,	// (0x0000511d) list_double2_large_graphic_pane_vc

0x511d,	// (0x0000511d) list_double2_pane_vc_ParamLimits

0x511d,	// (0x0000511d) list_double2_pane_vc

0x511d,	// (0x0000511d) list_double_graphic_heading_pane_vc_ParamLimits

0x511d,	// (0x0000511d) list_double_graphic_heading_pane_vc

0x511d,	// (0x0000511d) list_double_graphic_pane_vc_ParamLimits

0x511d,	// (0x0000511d) list_double_graphic_pane_vc

0x511d,	// (0x0000511d) list_double_heading_pane_vc_ParamLimits

0x511d,	// (0x0000511d) list_double_heading_pane_vc

0x512f,	// (0x0000512f) list_double_large_graphic_pane_vc_ParamLimits

0x512f,	// (0x0000512f) list_double_large_graphic_pane_vc

0x511d,	// (0x0000511d) list_double_number_pane_vc_ParamLimits

0x511d,	// (0x0000511d) list_double_number_pane_vc

0x511d,	// (0x0000511d) list_double_pane_vc_ParamLimits

0x511d,	// (0x0000511d) list_double_pane_vc

0x511d,	// (0x0000511d) list_double_time_pane_vc_ParamLimits

0x511d,	// (0x0000511d) list_double_time_pane_vc

0x511d,	// (0x0000511d) list_setting_number_pane_vc_ParamLimits

0x511d,	// (0x0000511d) list_setting_number_pane_vc

0x511d,	// (0x0000511d) list_setting_pane_vc_ParamLimits

0x511d,	// (0x0000511d) list_setting_pane_vc

0x511d,	// (0x0000511d) list_single_graphic_heading_pane_vc_ParamLimits

0x511d,	// (0x0000511d) list_single_graphic_heading_pane_vc

0x511d,	// (0x0000511d) list_single_heading_pane_vc_ParamLimits

0x511d,	// (0x0000511d) list_single_heading_pane_vc

0x511d,	// (0x0000511d) list_single_number_heading_pane_vc_ParamLimits

0x511d,	// (0x0000511d) list_single_number_heading_pane_vc

0x358d,	// (0x0000358d) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x358d,	// (0x0000358d) list_double_graphic_heading_pane_vc_g1

0x57d2,	// (0x000057d2) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x57d2,	// (0x000057d2) list_double_graphic_heading_pane_vc_g2

0x57de,	// (0x000057de) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x57de,	// (0x000057de) list_double_graphic_heading_pane_vc_g3

0x0002,

0xb033,	// (0x0000b033) list_double_graphic_heading_pane_vc_g_ParamLimits

0xb033,	// (0x0000b033) list_double_graphic_heading_pane_vc_g

0x57ea,	// (0x000057ea) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x57ea,	// (0x000057ea) list_double_graphic_heading_pane_vc_t1

0x5806,	// (0x00005806) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x5806,	// (0x00005806) list_double_graphic_heading_pane_vc_t2

0x0001,

0xb03a,	// (0x0000b03a) list_double_graphic_heading_pane_vc_t_ParamLimits

0xb03a,	// (0x0000b03a) list_double_graphic_heading_pane_vc_t

0x37dc,	// (0x000037dc) list_setting_pane_vc_g1_ParamLimits

0x37dc,	// (0x000037dc) list_setting_pane_vc_g1

0x37e8,	// (0x000037e8) list_setting_pane_vc_g2_ParamLimits

0x37e8,	// (0x000037e8) list_setting_pane_vc_g2

0x0001,

0xae29,	// (0x0000ae29) list_setting_pane_vc_g_ParamLimits

0xae29,	// (0x0000ae29) list_setting_pane_vc_g

0x5a31,	// (0x00005a31) list_setting_pane_vc_t1_ParamLimits

0x5a31,	// (0x00005a31) list_setting_pane_vc_t1

0x5a4d,	// (0x00005a4d) list_setting_pane_vc_t2_ParamLimits

0x5a4d,	// (0x00005a4d) list_setting_pane_vc_t2

0x0001,

0xb068,	// (0x0000b068) list_setting_pane_vc_t_ParamLimits

0xb068,	// (0x0000b068) list_setting_pane_vc_t

0x3852,	// (0x00003852) set_value_pane_cp_vc_ParamLimits

0x3852,	// (0x00003852) set_value_pane_cp_vc

0x254c,	// (0x0000254c) list_single_number_heading_pane_vc_g1_ParamLimits

0x254c,	// (0x0000254c) list_single_number_heading_pane_vc_g1

0x3599,	// (0x00003599) list_single_number_heading_pane_vc_g2_ParamLimits

0x3599,	// (0x00003599) list_single_number_heading_pane_vc_g2

0x0001,

0xae1f,	// (0x0000ae1f) list_single_number_heading_pane_vc_g_ParamLimits

0xae1f,	// (0x0000ae1f) list_single_number_heading_pane_vc_g

0x5a69,	// (0x00005a69) list_single_number_heading_pane_vc_t1_ParamLimits

0x5a69,	// (0x00005a69) list_single_number_heading_pane_vc_t1

0x5a7f,	// (0x00005a7f) list_single_number_heading_pane_vc_t2_ParamLimits

0x5a7f,	// (0x00005a7f) list_single_number_heading_pane_vc_t2

0x5a91,	// (0x00005a91) list_single_number_heading_pane_vc_t3_ParamLimits

0x5a91,	// (0x00005a91) list_single_number_heading_pane_vc_t3

0x0002,

0xb06d,	// (0x0000b06d) list_single_number_heading_pane_vc_t_ParamLimits

0xb06d,	// (0x0000b06d) list_single_number_heading_pane_vc_t

0x358d,	// (0x0000358d) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x358d,	// (0x0000358d) list_single_graphic_heading_pane_vc_g1

0x254c,	// (0x0000254c) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x254c,	// (0x0000254c) list_single_graphic_heading_pane_vc_g4

0x3599,	// (0x00003599) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x3599,	// (0x00003599) list_single_graphic_heading_pane_vc_g5

0x0002,

0xadf7,	// (0x0000adf7) list_single_graphic_heading_pane_vc_g_ParamLimits

0xadf7,	// (0x0000adf7) list_single_graphic_heading_pane_vc_g

0x5aa3,	// (0x00005aa3) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x5aa3,	// (0x00005aa3) list_single_graphic_heading_pane_vc_t1

0x5ab9,	// (0x00005ab9) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x5ab9,	// (0x00005ab9) list_single_graphic_heading_pane_vc_t2

0x0001,

0xb074,	// (0x0000b074) list_single_graphic_heading_pane_vc_t_ParamLimits

0xb074,	// (0x0000b074) list_single_graphic_heading_pane_vc_t

0x254c,	// (0x0000254c) list_double2_pane_vc_g1_ParamLimits

0x254c,	// (0x0000254c) list_double2_pane_vc_g1

0x3599,	// (0x00003599) list_double2_pane_vc_g2_ParamLimits

0x3599,	// (0x00003599) list_double2_pane_vc_g2

0x0001,

0xae1f,	// (0x0000ae1f) list_double2_pane_vc_g_ParamLimits

0xae1f,	// (0x0000ae1f) list_double2_pane_vc_g

0x5acb,	// (0x00005acb) list_double2_pane_vc_t1_ParamLimits

0x5acb,	// (0x00005acb) list_double2_pane_vc_t1

0x5ae1,	// (0x00005ae1) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x5ae1,	// (0x00005ae1) list_double2_large_graphic_pane_vc_g1

0x254c,	// (0x0000254c) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x254c,	// (0x0000254c) list_double2_large_graphic_pane_vc_g2

0x3599,	// (0x00003599) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x3599,	// (0x00003599) list_double2_large_graphic_pane_vc_g3

0x0002,

0xb079,	// (0x0000b079) list_double2_large_graphic_pane_vc_g_ParamLimits

0xb079,	// (0x0000b079) list_double2_large_graphic_pane_vc_g

0x5aed,	// (0x00005aed) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x5aed,	// (0x00005aed) list_double2_large_graphic_pane_vc_t1

0x5b03,	// (0x00005b03) list_double_time_pane_vc_g1_ParamLimits

0x5b03,	// (0x00005b03) list_double_time_pane_vc_g1

0x5b0f,	// (0x00005b0f) list_double_time_pane_vc_g2_ParamLimits

0x5b0f,	// (0x00005b0f) list_double_time_pane_vc_g2

0x0001,

0xb080,	// (0x0000b080) list_double_time_pane_vc_g_ParamLimits

0xb080,	// (0x0000b080) list_double_time_pane_vc_g

0x5b1b,	// (0x00005b1b) list_double_time_pane_vc_t1_ParamLimits

0x5b1b,	// (0x00005b1b) list_double_time_pane_vc_t1

0x5b3f,	// (0x00005b3f) list_double_time_pane_vc_t2_ParamLimits

0x5b3f,	// (0x00005b3f) list_double_time_pane_vc_t2

0x5b6e,	// (0x00005b6e) list_double_time_pane_vc_t3_ParamLimits

0x5b6e,	// (0x00005b6e) list_double_time_pane_vc_t3

0x5b80,	// (0x00005b80) list_double_time_pane_vc_t4_ParamLimits

0x5b80,	// (0x00005b80) list_double_time_pane_vc_t4

0x0003,

0xb085,	// (0x0000b085) list_double_time_pane_vc_t_ParamLimits

0xb085,	// (0x0000b085) list_double_time_pane_vc_t

0x254c,	// (0x0000254c) list_double_pane_vc_g1_ParamLimits

0x254c,	// (0x0000254c) list_double_pane_vc_g1

0x3599,	// (0x00003599) list_double_pane_vc_g2_ParamLimits

0x3599,	// (0x00003599) list_double_pane_vc_g2

0x0001,

0xae1f,	// (0x0000ae1f) list_double_pane_vc_g_ParamLimits

0xae1f,	// (0x0000ae1f) list_double_pane_vc_g

0x5b94,	// (0x00005b94) list_double_pane_vc_t1_ParamLimits

0x5b94,	// (0x00005b94) list_double_pane_vc_t1

0x5ba8,	// (0x00005ba8) list_double_pane_vc_t2_ParamLimits

0x5ba8,	// (0x00005ba8) list_double_pane_vc_t2

0x0001,

0xb08e,	// (0x0000b08e) list_double_pane_vc_t_ParamLimits

0xb08e,	// (0x0000b08e) list_double_pane_vc_t

0x254c,	// (0x0000254c) list_double_number_pane_vc_g1_ParamLimits

0x254c,	// (0x0000254c) list_double_number_pane_vc_g1

0x3599,	// (0x00003599) list_double_number_pane_vc_g2_ParamLimits

0x3599,	// (0x00003599) list_double_number_pane_vc_g2

0x0001,

0xae1f,	// (0x0000ae1f) list_double_number_pane_vc_g_ParamLimits

0xae1f,	// (0x0000ae1f) list_double_number_pane_vc_g

0x5bc0,	// (0x00005bc0) list_double_number_pane_vc_t1_ParamLimits

0x5bc0,	// (0x00005bc0) list_double_number_pane_vc_t1

0x5bd2,	// (0x00005bd2) list_double_number_pane_vc_t2_ParamLimits

0x5bd2,	// (0x00005bd2) list_double_number_pane_vc_t2

0x5be6,	// (0x00005be6) list_double_number_pane_vc_t3_ParamLimits

0x5be6,	// (0x00005be6) list_double_number_pane_vc_t3

0x0002,

0xb093,	// (0x0000b093) list_double_number_pane_vc_t_ParamLimits

0xb093,	// (0x0000b093) list_double_number_pane_vc_t

0x5bfe,	// (0x00005bfe) list_double_large_graphic_pane_vc_g1_ParamLimits

0x5bfe,	// (0x00005bfe) list_double_large_graphic_pane_vc_g1

0x5c20,	// (0x00005c20) list_double_large_graphic_pane_vc_g2_ParamLimits

0x5c20,	// (0x00005c20) list_double_large_graphic_pane_vc_g2

0x5c34,	// (0x00005c34) list_double_large_graphic_pane_vc_g3_ParamLimits

0x5c34,	// (0x00005c34) list_double_large_graphic_pane_vc_g3

0x5c43,	// (0x00005c43) list_double_large_graphic_pane_vc_g4_ParamLimits

0x5c43,	// (0x00005c43) list_double_large_graphic_pane_vc_g4

0x0003,

0xb09a,	// (0x0000b09a) list_double_large_graphic_pane_vc_g_ParamLimits

0xb09a,	// (0x0000b09a) list_double_large_graphic_pane_vc_g

0x5c4f,	// (0x00005c4f) list_double_large_graphic_pane_vc_t1_ParamLimits

0x5c4f,	// (0x00005c4f) list_double_large_graphic_pane_vc_t1

0x5c6b,	// (0x00005c6b) list_double_large_graphic_pane_vc_t2_ParamLimits

0x5c6b,	// (0x00005c6b) list_double_large_graphic_pane_vc_t2

0x0001,

0xb0a3,	// (0x0000b0a3) list_double_large_graphic_pane_vc_t_ParamLimits

0xb0a3,	// (0x0000b0a3) list_double_large_graphic_pane_vc_t

0x57d2,	// (0x000057d2) list_double_heading_pane_vc_g1_ParamLimits

0x57d2,	// (0x000057d2) list_double_heading_pane_vc_g1

0x57de,	// (0x000057de) list_double_heading_pane_vc_g2_ParamLimits

0x57de,	// (0x000057de) list_double_heading_pane_vc_g2

0x0001,

0xb0a8,	// (0x0000b0a8) list_double_heading_pane_vc_g_ParamLimits

0xb0a8,	// (0x0000b0a8) list_double_heading_pane_vc_g

0x5c8d,	// (0x00005c8d) list_double_heading_pane_vc_t1_ParamLimits

0x5c8d,	// (0x00005c8d) list_double_heading_pane_vc_t1

0x5ca1,	// (0x00005ca1) list_double_heading_pane_vc_t2_ParamLimits

0x5ca1,	// (0x00005ca1) list_double_heading_pane_vc_t2

0x0001,

0xb0ad,	// (0x0000b0ad) list_double_heading_pane_vc_t_ParamLimits

0xb0ad,	// (0x0000b0ad) list_double_heading_pane_vc_t

0x5cb9,	// (0x00005cb9) list_double_graphic_pane_vc_g1_ParamLimits

0x5cb9,	// (0x00005cb9) list_double_graphic_pane_vc_g1

0x5cc5,	// (0x00005cc5) list_double_graphic_pane_vc_g2_ParamLimits

0x5cc5,	// (0x00005cc5) list_double_graphic_pane_vc_g2

0x254c,	// (0x0000254c) list_double_graphic_pane_vc_g3_ParamLimits

0x254c,	// (0x0000254c) list_double_graphic_pane_vc_g3

0x0003,

0xb0b2,	// (0x0000b0b2) list_double_graphic_pane_vc_g_ParamLimits

0xb0b2,	// (0x0000b0b2) list_double_graphic_pane_vc_g

0x5ce2,	// (0x00005ce2) list_double_graphic_pane_vc_t1_ParamLimits

0x5ce2,	// (0x00005ce2) list_double_graphic_pane_vc_t1

0x5d0c,	// (0x00005d0c) list_double_graphic_pane_vc_t2_ParamLimits

0x5d0c,	// (0x00005d0c) list_double_graphic_pane_vc_t2

0x0001,

0xb0bb,	// (0x0000b0bb) list_double_graphic_pane_vc_t_ParamLimits

0xb0bb,	// (0x0000b0bb) list_double_graphic_pane_vc_t

0x0050,	// (0x00000050) aid_size_cell_fastswap

0xb56a,	// (0x0000b56a) aid_size_cell_touch_ParamLimits

0xb56a,	// (0x0000b56a) aid_size_cell_touch

0x02bd,	// (0x000002bd) popup_fast_swap_wide_window_ParamLimits

0x02bd,	// (0x000002bd) popup_fast_swap_wide_window

0xb71a,	// (0x0000b71a) touch_pane_ParamLimits

0xb71a,	// (0x0000b71a) touch_pane

0x12b6,	// (0x000012b6) button_value_adjust_pane_cp2

0x12be,	// (0x000012be) button_value_adjust_pane_cp4

0x12e0,	// (0x000012e0) form_field_data_pane_cp2

0xbe92,	// (0x0000be92) form_field_data_wide_pane_cp2

0x1b1a,	// (0x00001b1a) bg_scroll_pane_ParamLimits

0x1b39,	// (0x00001b39) scroll_handle_pane_ParamLimits

0x1b4d,	// (0x00001b4d) scroll_sc2_down_pane_ParamLimits

0x1b4d,	// (0x00001b4d) scroll_sc2_down_pane

0x1b74,	// (0x00001b74) scroll_sc2_up_pane_ParamLimits

0x1b74,	// (0x00001b74) scroll_sc2_up_pane

0xd6f3,	// (0x0000d6f3) grid_wheel_folder_pane_g1_ParamLimits

0xd6f3,	// (0x0000d6f3) grid_wheel_folder_pane_g1

0x225b,	// (0x0000225b) clock_nsta_pane_cp2_ParamLimits

0x225b,	// (0x0000225b) clock_nsta_pane_cp2

0xc255,	// (0x0000c255) listscroll_midp_pane_ParamLimits

0xc261,	// (0x0000c261) midp_canvas_pane

0x2b0c,	// (0x00002b0c) nsta_clock_indic_pane

0x2b6a,	// (0x00002b6a) listscroll_form_pane_vc

0x2b8e,	// (0x00002b8e) listscroll_set_pane_vc_ParamLimits

0x2b8e,	// (0x00002b8e) listscroll_set_pane_vc

0xcd2d,	// (0x0000cd2d) clock_nsta_pane

0xcd57,	// (0x0000cd57) indicator_nsta_pane

0x35ed,	// (0x000035ed) bg_popup_sub_pane_cp2_ParamLimits

0x3601,	// (0x00003601) find_pane_cp2_ParamLimits

0x3601,	// (0x00003601) find_pane_cp2

0x3617,	// (0x00003617) grid_toobar_pane_ParamLimits

0x3862,	// (0x00003862) list_form_gen_pane_vc_ParamLimits

0x3862,	// (0x00003862) list_form_gen_pane_vc

0x3878,	// (0x00003878) scroll_pane_cp8_vc_ParamLimits

0x3878,	// (0x00003878) scroll_pane_cp8_vc

0x3991,	// (0x00003991) data_form_wide_pane_vc_ParamLimits

0x3991,	// (0x00003991) data_form_wide_pane_vc

0x399d,	// (0x0000399d) form_field_data_wide_pane_vc_g1

0x39a5,	// (0x000039a5) form_field_data_wide_pane_vc_t1_ParamLimits

0x39a5,	// (0x000039a5) form_field_data_wide_pane_vc_t1

0x139c,	// (0x0000139c) input_focus_pane_cp6_vc_ParamLimits

0x139c,	// (0x0000139c) input_focus_pane_cp6_vc

0x3d22,	// (0x00003d22) list_midp_pane_ParamLimits

0x5379,	// (0x00005379) scroll_pane_cp16_ParamLimits

0x5379,	// (0x00005379) scroll_pane_cp16

0x3d64,	// (0x00003d64) button_value_adjust_pane_ParamLimits

0x3d64,	// (0x00003d64) button_value_adjust_pane

0xd2fe,	// (0x0000d2fe) button_value_adjust_pane_cp6_ParamLimits

0xd2fe,	// (0x0000d2fe) button_value_adjust_pane_cp6

0xd418,	// (0x0000d418) settings_code_pane_cp_ParamLimits

0xd418,	// (0x0000d418) settings_code_pane_cp

0x002e,	// (0x0000002e) cell_touch_pane_g1

0x002e,	// (0x0000002e) cell_touch_pane_g2

0x0001,

0xad4a,	// (0x0000ad4a) cell_touch_pane_g

0xd5e1,	// (0x0000d5e1) cell_touch_pane_cp_ParamLimits

0xd5e1,	// (0x0000d5e1) cell_touch_pane_cp

0xd5fd,	// (0x0000d5fd) cell_touch_pane_ParamLimits

0xd5fd,	// (0x0000d5fd) cell_touch_pane

0x002e,	// (0x0000002e) scroll_sc2_down_pane_g1

0x002e,	// (0x0000002e) scroll_sc2_up_pane_g1

0x0293,	// (0x00000293) bg_set_opt_pane_cp4_vc

0x5824,	// (0x00005824) list_set_graphic_pane_vc_g1_ParamLimits

0x5824,	// (0x00005824) list_set_graphic_pane_vc_g1

0x5830,	// (0x00005830) list_set_graphic_pane_vc_g2_ParamLimits

0x5830,	// (0x00005830) list_set_graphic_pane_vc_g2

0x0001,

0xb03f,	// (0x0000b03f) list_set_graphic_pane_vc_g_ParamLimits

0xb03f,	// (0x0000b03f) list_set_graphic_pane_vc_g

0x583c,	// (0x0000583c) text_primary_small_cp13_vc_ParamLimits

0x583c,	// (0x0000583c) text_primary_small_cp13_vc

0x5854,	// (0x00005854) list_set_graphic_pane_vc_ParamLimits

0x5854,	// (0x00005854) list_set_graphic_pane_vc

0x0293,	// (0x00000293) input_focus_pane_cp2_vc

0x002e,	// (0x0000002e) setting_code_pane_vc_g1

0x05e3,	// (0x000005e3) setting_code_pane_vc_t1

0x5866,	// (0x00005866) set_text_pane_vc_t1_ParamLimits

0x5866,	// (0x00005866) set_text_pane_vc_t1

0x0293,	// (0x00000293) input_focus_pane_cp1_vc

0x5882,	// (0x00005882) list_set_text_pane_vc

0x002e,	// (0x0000002e) setting_text_pane_vc_g1

0x0293,	// (0x00000293) bg_set_opt_pane_cp2_vc

0x05b2,	// (0x000005b2) setting_slider_graphic_pane_vc_g1

0x588c,	// (0x0000588c) setting_slider_graphic_pane_vc_t1

0x589c,	// (0x0000589c) setting_slider_graphic_pane_vc_t2

0x0001,

0xb044,	// (0x0000b044) setting_slider_graphic_pane_vc_t

0x58ac,	// (0x000058ac) slider_set_pane_cp_vc

0x58b4,	// (0x000058b4) slider_set_pane_vc_g1

0x58bd,	// (0x000058bd) slider_set_pane_vc_g2

0x0006,

0xb049,	// (0x0000b049) slider_set_pane_vc_g

0x14bf,	// (0x000014bf) set_opt_bg_pane_g1_copy1

0x14c7,	// (0x000014c7) set_opt_bg_pane_g2_copy1

0x58e9,	// (0x000058e9) set_opt_bg_pane_g3_copy1

0x14d7,	// (0x000014d7) set_opt_bg_pane_g4_copy1

0x14df,	// (0x000014df) set_opt_bg_pane_g5_copy1

0x14e7,	// (0x000014e7) set_opt_bg_pane_g6_copy1

0x58f3,	// (0x000058f3) set_opt_bg_pane_g7_copy1

0x58fb,	// (0x000058fb) set_opt_bg_pane_g8_copy1

0x5905,	// (0x00005905) set_opt_bg_pane_g9_copy1

0x0293,	// (0x00000293) bg_set_opt_pane_cp_vc

0x590f,	// (0x0000590f) setting_slider_pane_vc_t1

0x591e,	// (0x0000591e) setting_slider_pane_vc_t2

0x592e,	// (0x0000592e) setting_slider_pane_vc_t3

0x0002,

0xb058,	// (0x0000b058) setting_slider_pane_vc_t

0x593e,	// (0x0000593e) slider_set_pane_vc

0x45a5,	// (0x000045a5) volume_set_pane_vc_g1

0x45ae,	// (0x000045ae) volume_set_pane_vc_g2

0x45b7,	// (0x000045b7) volume_set_pane_vc_g3

0x45c0,	// (0x000045c0) volume_set_pane_vc_g4

0x45c9,	// (0x000045c9) volume_set_pane_vc_g5

0x45d2,	// (0x000045d2) volume_set_pane_vc_g6

0x45db,	// (0x000045db) volume_set_pane_vc_g7

0x45e4,	// (0x000045e4) volume_set_pane_vc_g8

0x45ed,	// (0x000045ed) volume_set_pane_vc_g9

0x45f6,	// (0x000045f6) volume_set_pane_vc_g10

0x0009,

0xaef6,	// (0x0000aef6) volume_set_pane_vc_g

0x5946,	// (0x00005946) volume_set_pane_vc

0x594e,	// (0x0000594e) button_value_adjust_pane_cp1_vc

0x5958,	// (0x00005958) list_highlight_pane_cp2_vc

0x5961,	// (0x00005961) list_set_pane_vc_ParamLimits

0x5961,	// (0x00005961) list_set_pane_vc

0x59bf,	// (0x000059bf) main_pane_set_vc_t1_ParamLimits

0x59bf,	// (0x000059bf) main_pane_set_vc_t1

0x59d4,	// (0x000059d4) main_pane_set_vc_t2_ParamLimits

0x59d4,	// (0x000059d4) main_pane_set_vc_t2

0x59e6,	// (0x000059e6) main_pane_set_vc_t3_ParamLimits

0x59e6,	// (0x000059e6) main_pane_set_vc_t3

0x59fa,	// (0x000059fa) main_pane_set_vc_t4_ParamLimits

0x59fa,	// (0x000059fa) main_pane_set_vc_t4

0x0003,

0xb05f,	// (0x0000b05f) main_pane_set_vc_t_ParamLimits

0xb05f,	// (0x0000b05f) main_pane_set_vc_t

0x5a0e,	// (0x00005a0e) setting_code_pane_vc_ParamLimits

0x5a0e,	// (0x00005a0e) setting_code_pane_vc

0x5a1f,	// (0x00005a1f) setting_slider_graphic_pane_vc

0x5a1f,	// (0x00005a1f) setting_slider_pane_vc

0x5a1f,	// (0x00005a1f) setting_text_pane_vc

0x5a1f,	// (0x00005a1f) setting_volume_pane_vc

0x5a29,	// (0x00005a29) scroll_pane_cp121_vc

0x12a4,	// (0x000012a4) set_content_pane_vc

0x5d36,	// (0x00005d36) button_value_adjust_pane_g1

0x5d3f,	// (0x00005d3f) button_value_adjust_pane_g2

0x0001,

0xb0c0,	// (0x0000b0c0) button_value_adjust_pane_g

0x5d48,	// (0x00005d48) form_field_slider_wide_pane_vc_t1_ParamLimits

0x5d48,	// (0x00005d48) form_field_slider_wide_pane_vc_t1

0x5d5c,	// (0x00005d5c) form_field_slider_wide_pane_vc_t2_ParamLimits

0x5d5c,	// (0x00005d5c) form_field_slider_wide_pane_vc_t2

0x0002,

0xb0c5,	// (0x0000b0c5) form_field_slider_wide_pane_vc_t_ParamLimits

0xb0c5,	// (0x0000b0c5) form_field_slider_wide_pane_vc_t

0x082d,	// (0x0000082d) input_focus_pane_cp10_vc_ParamLimits

0x082d,	// (0x0000082d) input_focus_pane_cp10_vc

0x5d8a,	// (0x00005d8a) slider_cont_pane_cp1_vc_ParamLimits

0x5d8a,	// (0x00005d8a) slider_cont_pane_cp1_vc

0x5d9c,	// (0x00005d9c) slider_form_pane_g1_cp2

0x58bd,	// (0x000058bd) slider_form_pane_g2_cp2

0x5dc9,	// (0x00005dc9) form_field_slider_pane_vc_t3

0x5dd7,	// (0x00005dd7) form_field_slider_pane_vc_t4

0x5de5,	// (0x00005de5) slider_form_pane_vc_ParamLimits

0x5de5,	// (0x00005de5) slider_form_pane_vc

0x5df2,	// (0x00005df2) form_field_slider_pane_vc_t1_ParamLimits

0x5df2,	// (0x00005df2) form_field_slider_pane_vc_t1

0x5d5c,	// (0x00005d5c) form_field_slider_pane_vc_t2_ParamLimits

0x5d5c,	// (0x00005d5c) form_field_slider_pane_vc_t2

0x0001,

0xb0d7,	// (0x0000b0d7) form_field_slider_pane_vc_t_ParamLimits

0xb0d7,	// (0x0000b0d7) form_field_slider_pane_vc_t

0x082d,	// (0x0000082d) input_focus_pane_cp9_vc_ParamLimits

0x082d,	// (0x0000082d) input_focus_pane_cp9_vc

0x5e0e,	// (0x00005e0e) slider_cont_pane_vc_ParamLimits

0x5e0e,	// (0x00005e0e) slider_cont_pane_vc

0x5e22,	// (0x00005e22) list_form_graphic_pane_cp_vc_ParamLimits

0x5e22,	// (0x00005e22) list_form_graphic_pane_cp_vc

0x399d,	// (0x0000399d) form_field_popup_wide_pane_vc_g1

0x5e37,	// (0x00005e37) form_field_popup_wide_pane_vc_t1_ParamLimits

0x5e37,	// (0x00005e37) form_field_popup_wide_pane_vc_t1

0x139c,	// (0x0000139c) input_focus_pane_cp8_vc_ParamLimits

0x139c,	// (0x0000139c) input_focus_pane_cp8_vc

0x5e7c,	// (0x00005e7c) list_form_wide_pane_vc_ParamLimits

0x5e7c,	// (0x00005e7c) list_form_wide_pane_vc

0x5e88,	// (0x00005e88) list_form_graphic_pane_vc_g1

0x5e90,	// (0x00005e90) list_form_graphic_pane_vc_t1_ParamLimits

0x5e90,	// (0x00005e90) list_form_graphic_pane_vc_t1

0x0507,	// (0x00000507) list_highlight_pane_cp5_vc_ParamLimits

0x0507,	// (0x00000507) list_highlight_pane_cp5_vc

0x5eac,	// (0x00005eac) list_form_graphic_pane_vc_ParamLimits

0x5eac,	// (0x00005eac) list_form_graphic_pane_vc

0x399d,	// (0x0000399d) form_field_popup_pane_vc_g1

0x5ec2,	// (0x00005ec2) form_field_popup_pane_vc_t1_ParamLimits

0x5ec2,	// (0x00005ec2) form_field_popup_pane_vc_t1

0x139c,	// (0x0000139c) input_focus_pane_cp7_vc_ParamLimits

0x139c,	// (0x0000139c) input_focus_pane_cp7_vc

0x5ed9,	// (0x00005ed9) list_form_pane_vc_ParamLimits

0x5ed9,	// (0x00005ed9) list_form_pane_vc

0x5ee5,	// (0x00005ee5) data_form_pane_vc_t1_ParamLimits

0x5ee5,	// (0x00005ee5) data_form_pane_vc_t1

0x14bf,	// (0x000014bf) input_focus_pane_vc_g1

0x14c7,	// (0x000014c7) input_focus_pane_vc_g2

0x14cf,	// (0x000014cf) input_focus_pane_vc_g3

0x14d7,	// (0x000014d7) input_focus_pane_vc_g4

0x14df,	// (0x000014df) input_focus_pane_vc_g5

0x14e7,	// (0x000014e7) input_focus_pane_vc_g6

0x14ef,	// (0x000014ef) input_focus_pane_vc_g7

0x14f7,	// (0x000014f7) input_focus_pane_vc_g8

0x14ff,	// (0x000014ff) input_focus_pane_vc_g9

0x002e,	// (0x0000002e) input_focus_pane_vc_g10

0x0009,

0xacd3,	// (0x0000acd3) input_focus_pane_vc_g

0x3991,	// (0x00003991) data_form_pane_vc_ParamLimits

0x3991,	// (0x00003991) data_form_pane_vc

0x399d,	// (0x0000399d) form_field_data_pane_vc_g1

0x5f00,	// (0x00005f00) form_field_data_pane_vc_t1_ParamLimits

0x5f00,	// (0x00005f00) form_field_data_pane_vc_t1

0x139c,	// (0x0000139c) input_focus_pane_vc_ParamLimits

0x139c,	// (0x0000139c) input_focus_pane_vc

0x5f1a,	// (0x00005f1a) button_value_adjust_pane_cp3_vc

0x5f22,	// (0x00005f22) button_value_adjust_pane_cp5_vc

0x5f2a,	// (0x00005f2a) form_field_data_pane_vc_ParamLimits

0x5f2a,	// (0x00005f2a) form_field_data_pane_vc

0x5f41,	// (0x00005f41) form_field_data_pane_vc_cp2

0x5f49,	// (0x00005f49) form_field_data_wide_pane_vc_ParamLimits

0x5f49,	// (0x00005f49) form_field_data_wide_pane_vc

0x5f5f,	// (0x00005f5f) form_field_data_wide_pane_vc_cp2

0x5f67,	// (0x00005f67) form_field_popup_pane_vc_ParamLimits

0x5f67,	// (0x00005f67) form_field_popup_pane_vc

0x5f7e,	// (0x00005f7e) form_field_popup_wide_pane_vc_ParamLimits

0x5f7e,	// (0x00005f7e) form_field_popup_wide_pane_vc

0x5f94,	// (0x00005f94) form_field_slider_pane_vc_ParamLimits

0x5f94,	// (0x00005f94) form_field_slider_pane_vc

0x5fa7,	// (0x00005fa7) form_field_slider_wide_pane_vc_ParamLimits

0x5fa7,	// (0x00005fa7) form_field_slider_wide_pane_vc

0xd61b,	// (0x0000d61b) grid_touch_1_pane_ParamLimits

0xd61b,	// (0x0000d61b) grid_touch_1_pane

0xd62f,	// (0x0000d62f) grid_touch_2_pane_ParamLimits

0xd62f,	// (0x0000d62f) grid_touch_2_pane

0x6075,	// (0x00006075) touch_pane_g1_ParamLimits

0x6075,	// (0x00006075) touch_pane_g1

0x5fde,	// (0x00005fde) cell_app_pane_cp_wide_ParamLimits

0x5fde,	// (0x00005fde) cell_app_pane_cp_wide

0x5fef,	// (0x00005fef) grid_popup_fast_wide_pane_ParamLimits

0x5fef,	// (0x00005fef) grid_popup_fast_wide_pane

0x6003,	// (0x00006003) scroll_pane_cp19_ParamLimits

0x6003,	// (0x00006003) scroll_pane_cp19

0x0293,	// (0x00000293) bg_popup_window_pane_cp20

0x6017,	// (0x00006017) listscroll_popup_fast_wide_pane

0x16d3,	// (0x000016d3) grid_indicator_nsta_pane

0x601f,	// (0x0000601f) clock_nsta_pane_g1

0x6028,	// (0x00006028) clock_nsta_pane_t1

0xd659,	// (0x0000d659) cell_indicator_nsta_pane_ParamLimits

0xd659,	// (0x0000d659) cell_indicator_nsta_pane

0x6075,	// (0x00006075) cell_indicator_nsta_pane_g1

0xd670,	// (0x0000d670) cell_indicator_nsta_pane_g2

0x0001,

0xf3fe,	// (0x0000f3fe) cell_indicator_nsta_pane_g

0x6090,	// (0x00006090) clock_nsta_pane_cp

0x6098,	// (0x00006098) indicator_nsta_pane_cp

0x60a0,	// (0x000060a0) nsta_clock_indic_pane_g1

0x067b,	// (0x0000067b) grid_indicator_pane

0x1c69,	// (0x00001c69) scroll_pane_cp29

0x2188,	// (0x00002188) indicator_nsta_pane_cp2_ParamLimits

0x2188,	// (0x00002188) indicator_nsta_pane_cp2

0x0507,	// (0x00000507) main_apps_wheel_pane

0x3be3,	// (0x00003be3) form_midp_field_text_pane_ParamLimits

0x3d2e,	// (0x00003d2e) scroll_bar_cp050_ParamLimits

0x60f0,	// (0x000060f0) cell_indicator_pane_ParamLimits

0x60f0,	// (0x000060f0) cell_indicator_pane

0x6107,	// (0x00006107) cell_indicator_pane_g1

0xd67d,	// (0x0000d67d) grid_wheel_folder_pane_ParamLimits

0xd67d,	// (0x0000d67d) grid_wheel_folder_pane

0xd68b,	// (0x0000d68b) list_wheel_apps_pane_ParamLimits

0xd68b,	// (0x0000d68b) list_wheel_apps_pane

0xd699,	// (0x0000d699) main_apps_wheel_pane_g1_ParamLimits

0xd699,	// (0x0000d699) main_apps_wheel_pane_g1

0xd6a5,	// (0x0000d6a5) main_apps_wheel_pane_g2_ParamLimits

0xd6a5,	// (0x0000d6a5) main_apps_wheel_pane_g2

0x0001,

0xf403,	// (0x0000f403) main_apps_wheel_pane_g_ParamLimits

0xf403,	// (0x0000f403) main_apps_wheel_pane_g

0xd6b3,	// (0x0000d6b3) main_apps_wheel_pane_t1_ParamLimits

0xd6b3,	// (0x0000d6b3) main_apps_wheel_pane_t1

0xd6c7,	// (0x0000d6c7) list_wheel_apps_pane_g1

0xd6cf,	// (0x0000d6cf) list_wheel_apps_pane_g2

0xd6d7,	// (0x0000d6d7) list_wheel_apps_pane_g3

0xd6df,	// (0x0000d6df) list_wheel_apps_pane_g4

0xd6e9,	// (0x0000d6e9) list_wheel_apps_pane_g5

0x0004,

0xf408,	// (0x0000f408) list_wheel_apps_pane_g

0x2493,	// (0x00002493) navi_icon_text_pane

0xcc21,	// (0x0000cc21) aid_fill_nsta

0x61cc,	// (0x000061cc) navi_icon_text_pane_g1

0x61d8,	// (0x000061d8) navi_icon_text_pane_t1

0x2326,	// (0x00002326) list_set_graphic_pane_t1_ParamLimits

0x2326,	// (0x00002326) list_set_graphic_pane_t1

0x4485,	// (0x00004485) popup_midp_note_alarm_window_t6_ParamLimits

0x4485,	// (0x00004485) popup_midp_note_alarm_window_t6

0x4497,	// (0x00004497) popup_midp_note_alarm_window_t7_ParamLimits

0x4497,	// (0x00004497) popup_midp_note_alarm_window_t7

0x44a9,	// (0x000044a9) popup_midp_note_alarm_window_t8_ParamLimits

0x44a9,	// (0x000044a9) popup_midp_note_alarm_window_t8

0x44bb,	// (0x000044bb) popup_midp_note_alarm_window_t9_ParamLimits

0x44bb,	// (0x000044bb) popup_midp_note_alarm_window_t9

0x44cd,	// (0x000044cd) popup_midp_note_alarm_window_t10_ParamLimits

0x44cd,	// (0x000044cd) popup_midp_note_alarm_window_t10

0x44df,	// (0x000044df) popup_midp_note_alarm_window_t11_ParamLimits

0x44df,	// (0x000044df) popup_midp_note_alarm_window_t11

0x44f1,	// (0x000044f1) scroll_pane_cp17_ParamLimits

0x44f1,	// (0x000044f1) scroll_pane_cp17

0x45a5,	// (0x000045a5) volume_small_pane_cp_g1

0x61ea,	// (0x000061ea) volume_small_pane_cp_g2

0x61f3,	// (0x000061f3) volume_small_pane_cp_g3

0x61fc,	// (0x000061fc) volume_small_pane_cp_g4

0x6205,	// (0x00006205) volume_small_pane_cp_g5

0x620e,	// (0x0000620e) volume_small_pane_cp_g6

0x6217,	// (0x00006217) volume_small_pane_cp_g7

0x6220,	// (0x00006220) volume_small_pane_cp_g8

0x6229,	// (0x00006229) volume_small_pane_cp_g9

0x6232,	// (0x00006232) volume_small_pane_cp_g10

0x26f0,	// (0x000026f0) midp_ticker_pane_g1_ParamLimits

0x26fc,	// (0x000026fc) midp_ticker_pane_g2_ParamLimits

0xad9f,	// (0x0000ad9f) midp_ticker_pane_g_ParamLimits

0x2708,	// (0x00002708) midp_ticker_pane_t1_ParamLimits

0xcc45,	// (0x0000cc45) aid_fill_nsta_2

0x3d1a,	// (0x00003d1a) list_form2_midp_pane

0x50d1,	// (0x000050d1) midp_editing_number_pane_ParamLimits

0x50e0,	// (0x000050e0) midp_ticker_pane_ParamLimits

0x623b,	// (0x0000623b) form2_midp_field_pane

0x625f,	// (0x0000625f) scroll_pane_cp51

0x627f,	// (0x0000627f) form2_midp_button_pane_ParamLimits

0x627f,	// (0x0000627f) form2_midp_button_pane

0x6291,	// (0x00006291) form2_midp_content_pane_ParamLimits

0x6291,	// (0x00006291) form2_midp_content_pane

0x62ab,	// (0x000062ab) form2_midp_field_choice_group_pane

0x62b3,	// (0x000062b3) form2_midp_field_pane_g1

0x62bb,	// (0x000062bb) form2_midp_field_pane_g2

0x62c3,	// (0x000062c3) form2_midp_field_pane_g3

0x62cb,	// (0x000062cb) form2_midp_field_pane_g4

0x0003,

0xb12e,	// (0x0000b12e) form2_midp_field_pane_g

0x62d3,	// (0x000062d3) form2_midp_gauge_slider_pane

0x62db,	// (0x000062db) form2_midp_gauge_wait_pane

0x62e3,	// (0x000062e3) form2_midp_image_pane_ParamLimits

0x62e3,	// (0x000062e3) form2_midp_image_pane

0x62fe,	// (0x000062fe) form2_midp_label_pane_ParamLimits

0x62fe,	// (0x000062fe) form2_midp_label_pane

0xd71c,	// (0x0000d71c) form2_midp_label_pane_cp_ParamLimits

0xd71c,	// (0x0000d71c) form2_midp_label_pane_cp

0x6338,	// (0x00006338) form2_midp_string_pane_ParamLimits

0x6338,	// (0x00006338) form2_midp_string_pane

0xd73b,	// (0x0000d73b) form2_midp_text_pane_ParamLimits

0xd73b,	// (0x0000d73b) form2_midp_text_pane

0x6367,	// (0x00006367) form2_midp_time_pane

0x6377,	// (0x00006377) input_focus_pane_cp51_ParamLimits

0x6377,	// (0x00006377) input_focus_pane_cp51

0x638f,	// (0x0000638f) form2_midp_label_pane_t1_ParamLimits

0x638f,	// (0x0000638f) form2_midp_label_pane_t1

0xd754,	// (0x0000d754) form2_mdip_text_pane_t1_ParamLimits

0xd754,	// (0x0000d754) form2_mdip_text_pane_t1

0x63ef,	// (0x000063ef) form2_midp_time_pane_t1

0x640a,	// (0x0000640a) form2_midp_gauge_slider_pane_t1

0xd76f,	// (0x0000d76f) form2_midp_gauge_slider_pane_t2

0xd781,	// (0x0000d781) form2_midp_gauge_slider_pane_t3

0x0002,

0xf418,	// (0x0000f418) form2_midp_gauge_slider_pane_t

0x6440,	// (0x00006440) form2_midp_slider_pane

0x644c,	// (0x0000644c) form2_midp_gauge_wait_pane_t1

0x645a,	// (0x0000645a) form2_midp_wait_pane_ParamLimits

0x645a,	// (0x0000645a) form2_midp_wait_pane

0xd793,	// (0x0000d793) list_single_2graphic_pane_cp4_ParamLimits

0xd793,	// (0x0000d793) list_single_2graphic_pane_cp4

0xd0d3,	// (0x0000d0d3) list_single_midp_graphic_pane_cp_ParamLimits

0xd0d3,	// (0x0000d0d3) list_single_midp_graphic_pane_cp

0x0293,	// (0x00000293) list_highlight_pane_cp20

0x64a9,	// (0x000064a9) list_single_2graphic_pane_g1_cp4

0x64b1,	// (0x000064b1) list_single_2graphic_pane_g2_cp4

0x64b9,	// (0x000064b9) list_single_2graphic_pane_t1_cp4

0x0507,	// (0x00000507) list_highlight_pane_cp21

0x64c8,	// (0x000064c8) list_single_midp_graphic_pane_g4_cp

0x64d7,	// (0x000064d7) list_single_midp_graphic_pane_t1_cp

0xd7a7,	// (0x0000d7a7) form2_mdip_string_pane_t1_ParamLimits

0xd7a7,	// (0x0000d7a7) form2_mdip_string_pane_t1

0x0293,	// (0x00000293) bg_wml_button_pane_cp2

0x002e,	// (0x0000002e) form2_midp_image_pane_g1

0x105a,	// (0x0000105a) list_double_large_graphic_pane_g5_ParamLimits

0x105a,	// (0x0000105a) list_double_large_graphic_pane_g5

0xc255,	// (0x0000c255) midp_form_pane_ParamLimits

0x0507,	// (0x00000507) main_apps_wheel_pane_ParamLimits

0xc971,	// (0x0000c971) popup_preview_window_ParamLimits

0xc971,	// (0x0000c971) popup_preview_window

0x310a,	// (0x0000310a) popup_touch_info_window_ParamLimits

0x310a,	// (0x0000310a) popup_touch_info_window

0x3128,	// (0x00003128) popup_touch_menu_window_ParamLimits

0x3128,	// (0x00003128) popup_touch_menu_window

0x0024,	// (0x00000024) bg_popup_sub_pane_cp6

0x65d6,	// (0x000065d6) list_touch_menu_pane

0x65de,	// (0x000065de) list_single_touch_menu_pane_ParamLimits

0x65de,	// (0x000065de) list_single_touch_menu_pane

0x65f4,	// (0x000065f4) list_single_touch_menu_pane_t1

0x0507,	// (0x00000507) bg_popup_sub_pane_cp7_ParamLimits

0x0507,	// (0x00000507) bg_popup_sub_pane_cp7

0x6602,	// (0x00006602) heading_sub_pane

0x660a,	// (0x0000660a) list_touch_info_pane_ParamLimits

0x660a,	// (0x0000660a) list_touch_info_pane

0x6619,	// (0x00006619) list_single_touch_info_pane_ParamLimits

0x6619,	// (0x00006619) list_single_touch_info_pane

0x662b,	// (0x0000662b) list_single_touch_info_pane_t1

0x6639,	// (0x00006639) list_single_touch_info_pane_t2

0x0001,

0xb145,	// (0x0000b145) list_single_touch_info_pane_t

0x2613,	// (0x00002613) bg_popup_heading_pane_cp

0x6647,	// (0x00006647) heading_sub_pane_t1

0x38a3,	// (0x000038a3) bg_popup_preview_window_pane_cp_ParamLimits

0x38a3,	// (0x000038a3) bg_popup_preview_window_pane_cp

0x6602,	// (0x00006602) heading_preview_pane

0x660a,	// (0x0000660a) list_preview_pane_ParamLimits

0x660a,	// (0x0000660a) list_preview_pane

0x6655,	// (0x00006655) popup_preview_window_g1

0x6619,	// (0x00006619) list_single_preview_pane_ParamLimits

0x6619,	// (0x00006619) list_single_preview_pane

0x665d,	// (0x0000665d) list_single_preview_pane_g1

0x6665,	// (0x00006665) list_single_preview_pane_t1

0x662b,	// (0x0000662b) list_single_preview_pane_t2

0x0001,

0xb14a,	// (0x0000b14a) list_single_preview_pane_t

0x6673,	// (0x00006673) bg_popup_heading_pane_cp2_ParamLimits

0x6673,	// (0x00006673) bg_popup_heading_pane_cp2

0x6689,	// (0x00006689) heading_preview_pane_g1

0x6691,	// (0x00006691) heading_preview_pane_t1_ParamLimits

0x6691,	// (0x00006691) heading_preview_pane_t1

0x069e,	// (0x0000069e) soft_indicator_pane_t1_ParamLimits

0x0d94,	// (0x00000d94) scroll_pane_ParamLimits

0x1b62,	// (0x00001b62) scroll_sc2_left_pane

0x1b6b,	// (0x00001b6b) scroll_sc2_right_pane

0x1b8a,	// (0x00001b8a) scroll_bg_pane_g1_ParamLimits

0x1b9f,	// (0x00001b9f) scroll_bg_pane_g2_ParamLimits

0x1bb7,	// (0x00001bb7) scroll_bg_pane_g3_ParamLimits

0xad2a,	// (0x0000ad2a) scroll_bg_pane_g_ParamLimits

0x1b8a,	// (0x00001b8a) scroll_handle_pane_g1_ParamLimits

0x1bd9,	// (0x00001bd9) scroll_handle_pane_g2_ParamLimits

0x1bb7,	// (0x00001bb7) scroll_handle_pane_g3_ParamLimits

0xad31,	// (0x0000ad31) scroll_handle_pane_g_ParamLimits

0x2bd0,	// (0x00002bd0) popup_choice_list_window_ParamLimits

0x2bd0,	// (0x00002bd0) popup_choice_list_window

0x35f9,	// (0x000035f9) choice_list_pane

0x36c1,	// (0x000036c1) cell_toolbar_pane_t1

0x36e9,	// (0x000036e9) toolbar_button_pane_ParamLimits

0x4b0f,	// (0x00004b0f) ai_gene_pane_1_t2_ParamLimits

0x4b0f,	// (0x00004b0f) ai_gene_pane_1_t2

0x0001,

0xaf52,	// (0x0000af52) ai_gene_pane_1_t_ParamLimits

0xaf52,	// (0x0000af52) ai_gene_pane_1_t

0x66ae,	// (0x000066ae) scroll_sc2_left_pane_g1

0x66ae,	// (0x000066ae) scroll_sc2_right_pane_g1

0x2ba0,	// (0x00002ba0) bg_popup_sub_pane_cp10

0x66b8,	// (0x000066b8) list_choice_list_pane

0x66d1,	// (0x000066d1) list_single_choice_list_pane_ParamLimits

0x66d1,	// (0x000066d1) list_single_choice_list_pane

0x66e4,	// (0x000066e4) list_single_choice_list_pane_g1

0x16a4,	// (0x000016a4) list_single_choice_list_pane_t1_ParamLimits

0x16a4,	// (0x000016a4) list_single_choice_list_pane_t1

0x66ec,	// (0x000066ec) choice_list_pane_g1

0x66f4,	// (0x000066f4) choice_list_pane_t1

0x0024,	// (0x00000024) input_focus_pane_cp11

0x18ca,	// (0x000018ca) title_pane_stacon_g2_ParamLimits

0x18ca,	// (0x000018ca) title_pane_stacon_g2

0x0002,

0xad10,	// (0x0000ad10) title_pane_stacon_g_ParamLimits

0xad10,	// (0x0000ad10) title_pane_stacon_g

0x2613,	// (0x00002613) cursor_press_pane

0xc61e,	// (0x0000c61e) popup_fep_hwr_window_ParamLimits

0xc61e,	// (0x0000c61e) popup_fep_hwr_window

0x2cf6,	// (0x00002cf6) popup_fep_vkb_window_ParamLimits

0x2cf6,	// (0x00002cf6) popup_fep_vkb_window

0x6702,	// (0x00006702) cursor_press_pane_g1

0x0002,

0xf42c,	// (0x0000f42c) fep_vkb_side_pane_g_ParamLimits

0x6743,	// (0x00006743) fep_hwr_candidate_pane_ParamLimits

0x6743,	// (0x00006743) fep_hwr_candidate_pane

0x676d,	// (0x0000676d) fep_hwr_side_pane_ParamLimits

0x676d,	// (0x0000676d) fep_hwr_side_pane

0x678d,	// (0x0000678d) fep_hwr_top_pane_ParamLimits

0x678d,	// (0x0000678d) fep_hwr_top_pane

0x67a5,	// (0x000067a5) fep_hwr_write_pane_ParamLimits

0x67a5,	// (0x000067a5) fep_hwr_write_pane

0xf42c,	// (0x0000f42c) fep_vkb_side_pane_g

0x67df,	// (0x000067df) fep_hwr_top_pane_g1

0x67f1,	// (0x000067f1) fep_hwr_top_pane_g2

0x6803,	// (0x00006803) fep_hwr_top_pane_g3

0x0002,

0xb14f,	// (0x0000b14f) fep_hwr_top_pane_g

0x6818,	// (0x00006818) fep_hwr_top_text_pane

0x1d59,	// (0x00001d59) fep_hwr_top_text_pane_g1

0x68f0,	// (0x000068f0) fep_hwr_top_text_pane_t1

0x6940,	// (0x00006940) fep_hwr_candidate_pane_g1

0x6bb9,	// (0x00006bb9) fep_vkb_keypad_pane_g3_ParamLimits

0x6bb9,	// (0x00006bb9) fep_vkb_keypad_pane_g3

0x6be1,	// (0x00006be1) fep_vkb_keypad_pane_g4_ParamLimits

0x6be1,	// (0x00006be1) fep_vkb_keypad_pane_g4

0x6c50,	// (0x00006c50) fep_vkb_bottom_pane_g2_ParamLimits

0x6c50,	// (0x00006c50) fep_vkb_bottom_pane_g2

0x0001,

0xb17a,	// (0x0000b17a) fep_vkb_bottom_pane_g_ParamLimits

0xb17a,	// (0x0000b17a) fep_vkb_bottom_pane_g

0x66ae,	// (0x000066ae) cell_vkb_side_pane_g2

0x0001,

0xb184,	// (0x0000b184) cell_vkb_side_pane_g

0x6cdb,	// (0x00006cdb) cell_vkb_side_pane_t1

0x6ce9,	// (0x00006ce9) cell_vkb_side_pane_t1_copy1

0x66ae,	// (0x000066ae) bg_fep_vkb_candidate_pane_g2

0x6e15,	// (0x00006e15) cell_vkb_candidate_pane_ParamLimits

0x6974,	// (0x00006974) aid_size_cell_vkb_ParamLimits

0x6974,	// (0x00006974) aid_size_cell_vkb

0x6e15,	// (0x00006e15) cell_vkb_candidate_pane

0x6e49,	// (0x00006e49) bg_popup_fep_shadow_pane_g1

0xd875,	// (0x0000d875) fep_vkb_bottom_pane_ParamLimits

0xd875,	// (0x0000d875) fep_vkb_bottom_pane

0x6a38,	// (0x00006a38) fep_vkb_candidate_pane_ParamLimits

0x6a38,	// (0x00006a38) fep_vkb_candidate_pane

0xd89a,	// (0x0000d89a) fep_vkb_keypad_pane_ParamLimits

0xd89a,	// (0x0000d89a) fep_vkb_keypad_pane

0xd8d6,	// (0x0000d8d6) fep_vkb_side_pane_ParamLimits

0xd8d6,	// (0x0000d8d6) fep_vkb_side_pane

0xd912,	// (0x0000d912) fep_vkb_top_pane_ParamLimits

0xd912,	// (0x0000d912) fep_vkb_top_pane

0x6b12,	// (0x00006b12) fep_vkb_top_pane_g1_ParamLimits

0x6b12,	// (0x00006b12) fep_vkb_top_pane_g1

0x6b21,	// (0x00006b21) fep_vkb_top_pane_g2_ParamLimits

0x6b21,	// (0x00006b21) fep_vkb_top_pane_g2

0x6b30,	// (0x00006b30) fep_vkb_top_pane_g3_ParamLimits

0x6b30,	// (0x00006b30) fep_vkb_top_pane_g3

0x0003,

0xb16a,	// (0x0000b16a) fep_vkb_top_pane_g_ParamLimits

0xb16a,	// (0x0000b16a) fep_vkb_top_pane_g

0x6b4e,	// (0x00006b4e) fep_vkb_top_text_pane_ParamLimits

0x6b4e,	// (0x00006b4e) fep_vkb_top_text_pane

0xd94e,	// (0x0000d94e) fep_vkb_side_pane_g1_ParamLimits

0xd94e,	// (0x0000d94e) fep_vkb_side_pane_g1

0x6ba8,	// (0x00006ba8) grid_vkb_side_pane_ParamLimits

0x6ba8,	// (0x00006ba8) grid_vkb_side_pane

0x6e51,	// (0x00006e51) bg_popup_fep_shadow_pane_g2

0x6e5a,	// (0x00006e5a) bg_popup_fep_shadow_pane_g3

0x6e62,	// (0x00006e62) bg_popup_fep_shadow_pane_g4

0x6e6b,	// (0x00006e6b) bg_popup_fep_shadow_pane_g5

0x6e75,	// (0x00006e75) bg_popup_fep_shadow_pane_g6

0x6e7d,	// (0x00006e7d) bg_popup_fep_shadow_pane_g7

0x14df,	// (0x000014df) bg_popup_fep_shadow_pane_g8

0x6bff,	// (0x00006bff) grid_vkb_keypad_number_pane_ParamLimits

0x6bff,	// (0x00006bff) grid_vkb_keypad_number_pane

0x6c0f,	// (0x00006c0f) grid_vkb_keypad_pane_ParamLimits

0x6c0f,	// (0x00006c0f) grid_vkb_keypad_pane

0x6c35,	// (0x00006c35) fep_vkb_bottom_pane_g1_ParamLimits

0x6c35,	// (0x00006c35) fep_vkb_bottom_pane_g1

0x6c5e,	// (0x00006c5e) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x6c5e,	// (0x00006c5e) grid_vkb_keypad_bottom_left_pane

0x6c73,	// (0x00006c73) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x6c73,	// (0x00006c73) grid_vkb_keypad_bottom_right_pane

0x6c88,	// (0x00006c88) fep_vkb_top_text_pane_g1

0xd995,	// (0x0000d995) fep_vkb_top_text_pane_t1

0xd9a7,	// (0x0000d9a7) cell_vkb_side_pane_ParamLimits

0xd9a7,	// (0x0000d9a7) cell_vkb_side_pane

0x66ae,	// (0x000066ae) cell_vkb_side_pane_g1

0x6cf7,	// (0x00006cf7) cell_vkb_keypad_pane_ParamLimits

0x6cf7,	// (0x00006cf7) cell_vkb_keypad_pane

0x6d6c,	// (0x00006d6c) cell_vkb_keypad_pane_g1

0x0008,

0xb197,	// (0x0000b197) bg_popup_fep_shadow_pane_g

0x66ae,	// (0x000066ae) cell_hwr_side_pane_g1

0x66ae,	// (0x000066ae) cell_hwr_side_pane_g2

0x6d76,	// (0x00006d76) cell_vkb_keypad_pane_t1

0xd9bd,	// (0x0000d9bd) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xd9bd,	// (0x0000d9bd) cell_vkb_keypad_bottom_left_pane

0xd9d2,	// (0x0000d9d2) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xd9d2,	// (0x0000d9d2) cell_vkb_keypad_bottom_right_pane

0x66ae,	// (0x000066ae) cell_vkb_keypad_bottom_left_pane_g1

0x66ae,	// (0x000066ae) cell_vkb_keypad_bottom_right_pane_g1

0x6dda,	// (0x00006dda) cell_vkb_keypad_number_pane_ParamLimits

0x6dda,	// (0x00006dda) cell_vkb_keypad_number_pane

0x6df9,	// (0x00006df9) cell_vkb_keypad_number_pane_g1

0x6e03,	// (0x00006e03) cell_vkb_keypad_number_pane_g2

0x6e0c,	// (0x00006e0c) cell_vkb_keypad_number_pane_g3

0x0002,

0xb189,	// (0x0000b189) cell_vkb_keypad_number_pane_g

0x6d76,	// (0x00006d76) cell_vkb_keypad_number_pane_t1

0x6e30,	// (0x00006e30) fep_vkb_candidate_pane_g1

0x0001,

0xb184,	// (0x0000b184) cell_hwr_side_pane_g

0x6e8f,	// (0x00006e8f) cell_hwr_side_pane_t1

0x6e9d,	// (0x00006e9d) cell_hwr_side_pane_t1_copy1

0x6b40,	// (0x00006b40) cell_hwr_candidate_pane_g1

0x6eed,	// (0x00006eed) cell_hwr_candidate_pane_t1

0x66ae,	// (0x000066ae) cell_vkb_candidate_pane_g2

0x6f41,	// (0x00006f41) cell_vkb_candidate_pane_t1

0x670a,	// (0x0000670a) bg_popup_fep_shadow_pane_ParamLimits

0x670a,	// (0x0000670a) bg_popup_fep_shadow_pane

0x67bf,	// (0x000067bf) bg_fep_hwr_top_pane_g4

0x682d,	// (0x0000682d) bg_hwr_side_pane_g1_ParamLimits

0x682d,	// (0x0000682d) bg_hwr_side_pane_g1

0xd82e,	// (0x0000d82e) cell_hwr_side_pane_ParamLimits

0xd82e,	// (0x0000d82e) cell_hwr_side_pane

0x689b,	// (0x0000689b) fep_hwr_write_pane_g1_ParamLimits

0x689b,	// (0x0000689b) fep_hwr_write_pane_g1

0x68a8,	// (0x000068a8) fep_hwr_write_pane_g2_ParamLimits

0x68a8,	// (0x000068a8) fep_hwr_write_pane_g2

0x68b5,	// (0x000068b5) fep_hwr_write_pane_g3_ParamLimits

0x68b5,	// (0x000068b5) fep_hwr_write_pane_g3

0xd84e,	// (0x0000d84e) fep_hwr_write_pane_g4_ParamLimits

0xd84e,	// (0x0000d84e) fep_hwr_write_pane_g4

0x0005,

0xf41f,	// (0x0000f41f) fep_hwr_write_pane_g_ParamLimits

0xf41f,	// (0x0000f41f) fep_hwr_write_pane_g

0x67bf,	// (0x000067bf) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x67bf,	// (0x000067bf) bg_fep_hwr_candidate_pane_g2

0x68fe,	// (0x000068fe) cell_hwr_candidate_pane_ParamLimits

0x68fe,	// (0x000068fe) cell_hwr_candidate_pane

0x6940,	// (0x00006940) fep_hwr_candidate_pane_g1_ParamLimits

0x69a2,	// (0x000069a2) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x69a2,	// (0x000069a2) bg_popup_fep_shadow_pane_cp2

0x6b40,	// (0x00006b40) fep_vkb_top_pane_g4_ParamLimits

0x6b40,	// (0x00006b40) fep_vkb_top_pane_g4

0x6b86,	// (0x00006b86) fep_vkb_side_pane_g2_ParamLimits

0x6b86,	// (0x00006b86) fep_vkb_side_pane_g2

0xbdc0,	// (0x0000bdc0) list_setting_pane_t4_ParamLimits

0xbdc0,	// (0x0000bdc0) list_setting_pane_t4

0xbe3a,	// (0x0000be3a) list_setting_number_pane_t5_ParamLimits

0xbe3a,	// (0x0000be3a) list_setting_number_pane_t5

0x1daf,	// (0x00001daf) list_double_heading_pane_cp2_ParamLimits

0x1daf,	// (0x00001daf) list_double_heading_pane_cp2

0x0fe5,	// (0x00000fe5) list_double_heading_pane_g1_cp2_ParamLimits

0x0fe5,	// (0x00000fe5) list_double_heading_pane_g1_cp2

0x13c2,	// (0x000013c2) list_double_heading_pane_g2_cp2_ParamLimits

0x13c2,	// (0x000013c2) list_double_heading_pane_g2_cp2

0x6f4f,	// (0x00006f4f) list_double_heading_pane_t1_cp2_ParamLimits

0x6f4f,	// (0x00006f4f) list_double_heading_pane_t1_cp2

0x6f65,	// (0x00006f65) list_double_heading_pane_t2_cp2_ParamLimits

0x6f65,	// (0x00006f65) list_double_heading_pane_t2_cp2

0x000c,	// (0x0000000c) aid_value_unit2

0x0317,	// (0x00000317) popup_preview_fixed_window

0x083b,	// (0x0000083b) bg_popup_preview_window_pane_cp02

0x6f77,	// (0x00006f77) list_preview_fixed_pane

0x6fbd,	// (0x00006fbd) list_empty_pane_fp_ParamLimits

0x6fbd,	// (0x00006fbd) list_empty_pane_fp

0x6fbd,	// (0x00006fbd) list_single_cale_day_pane_fp_ParamLimits

0x6fbd,	// (0x00006fbd) list_single_cale_day_pane_fp

0x6fbd,	// (0x00006fbd) list_single_graphic_heading_pane_fp_ParamLimits

0x6fbd,	// (0x00006fbd) list_single_graphic_heading_pane_fp

0x6fbd,	// (0x00006fbd) list_single_graphic_pane_fp_ParamLimits

0x6fbd,	// (0x00006fbd) list_single_graphic_pane_fp

0x6fbd,	// (0x00006fbd) list_single_heading_pane_fp_ParamLimits

0x6fbd,	// (0x00006fbd) list_single_heading_pane_fp

0x6fbd,	// (0x00006fbd) list_single_pane_fp_ParamLimits

0x6fbd,	// (0x00006fbd) list_single_pane_fp

0x6fd2,	// (0x00006fd2) list_single_pane_fp_g1_ParamLimits

0x6fd2,	// (0x00006fd2) list_single_pane_fp_g1

0x0fe5,	// (0x00000fe5) list_single_pane_fp_g2_ParamLimits

0x0fe5,	// (0x00000fe5) list_single_pane_fp_g2

0x13c2,	// (0x000013c2) list_single_pane_fp_g3_ParamLimits

0x13c2,	// (0x000013c2) list_single_pane_fp_g3

0x6fde,	// (0x00006fde) list_single_pane_fp_g4_ParamLimits

0x6fde,	// (0x00006fde) list_single_pane_fp_g4

0x0003,

0xb1b8,	// (0x0000b1b8) list_single_pane_fp_g_ParamLimits

0xb1b8,	// (0x0000b1b8) list_single_pane_fp_g

0x6fea,	// (0x00006fea) list_single_pane_fp_t1_ParamLimits

0x6fea,	// (0x00006fea) list_single_pane_fp_t1

0x7001,	// (0x00007001) list_single_graphic_pane_fp_g1_ParamLimits

0x7001,	// (0x00007001) list_single_graphic_pane_fp_g1

0x6fd2,	// (0x00006fd2) list_single_graphic_pane_fp_g2_ParamLimits

0x6fd2,	// (0x00006fd2) list_single_graphic_pane_fp_g2

0x0fe5,	// (0x00000fe5) list_single_graphic_pane_fp_g3_ParamLimits

0x0fe5,	// (0x00000fe5) list_single_graphic_pane_fp_g3

0x13c2,	// (0x000013c2) list_single_graphic_pane_fp_g4_ParamLimits

0x13c2,	// (0x000013c2) list_single_graphic_pane_fp_g4

0x6fde,	// (0x00006fde) list_single_graphic_pane_fp_g5_ParamLimits

0x6fde,	// (0x00006fde) list_single_graphic_pane_fp_g5

0x0004,

0xb1c1,	// (0x0000b1c1) list_single_graphic_pane_fp_g_ParamLimits

0xb1c1,	// (0x0000b1c1) list_single_graphic_pane_fp_g

0x700d,	// (0x0000700d) list_single_graphic_pane_fp_t1_ParamLimits

0x700d,	// (0x0000700d) list_single_graphic_pane_fp_t1

0x7001,	// (0x00007001) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x7001,	// (0x00007001) list_single_graphic_heading_pane_fp_g1

0x6fd2,	// (0x00006fd2) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x6fd2,	// (0x00006fd2) list_single_graphic_heading_pane_fp_g2

0x0fe5,	// (0x00000fe5) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x0fe5,	// (0x00000fe5) list_single_graphic_heading_pane_fp_g3

0x13c2,	// (0x000013c2) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x13c2,	// (0x000013c2) list_single_graphic_heading_pane_fp_g4

0x6fde,	// (0x00006fde) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x6fde,	// (0x00006fde) list_single_graphic_heading_pane_fp_g5

0x0004,

0xb1c1,	// (0x0000b1c1) list_single_graphic_heading_pane_fp_g_ParamLimits

0xb1c1,	// (0x0000b1c1) list_single_graphic_heading_pane_fp_g

0x7023,	// (0x00007023) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x7023,	// (0x00007023) list_single_graphic_heading_pane_fp_t1

0x7039,	// (0x00007039) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x7039,	// (0x00007039) list_single_graphic_heading_pane_fp_t2

0x0001,

0xb1cc,	// (0x0000b1cc) list_single_graphic_heading_pane_fp_t_ParamLimits

0xb1cc,	// (0x0000b1cc) list_single_graphic_heading_pane_fp_t

0x704b,	// (0x0000704b) list_single_cale_day_pane_fp_g1_ParamLimits

0x704b,	// (0x0000704b) list_single_cale_day_pane_fp_g1

0x7083,	// (0x00007083) list_single_cale_day_pane_fp_g2_ParamLimits

0x7083,	// (0x00007083) list_single_cale_day_pane_fp_g2

0x708f,	// (0x0000708f) list_single_cale_day_pane_fp_g3_ParamLimits

0x708f,	// (0x0000708f) list_single_cale_day_pane_fp_g3

0x70b7,	// (0x000070b7) list_single_cale_day_pane_fp_g4_ParamLimits

0x70b7,	// (0x000070b7) list_single_cale_day_pane_fp_g4

0x70db,	// (0x000070db) list_single_cale_day_pane_fp_g5_ParamLimits

0x70db,	// (0x000070db) list_single_cale_day_pane_fp_g5

0x0004,

0xb1d1,	// (0x0000b1d1) list_single_cale_day_pane_fp_g_ParamLimits

0xb1d1,	// (0x0000b1d1) list_single_cale_day_pane_fp_g

0x70ff,	// (0x000070ff) list_single_cale_day_pane_fp_t1_ParamLimits

0x70ff,	// (0x000070ff) list_single_cale_day_pane_fp_t1

0x7125,	// (0x00007125) list_single_cale_day_pane_fp_t2_ParamLimits

0x7125,	// (0x00007125) list_single_cale_day_pane_fp_t2

0x713e,	// (0x0000713e) list_single_cale_day_pane_fp_t3_ParamLimits

0x713e,	// (0x0000713e) list_single_cale_day_pane_fp_t3

0x0002,

0xb1dc,	// (0x0000b1dc) list_single_cale_day_pane_fp_t_ParamLimits

0xb1dc,	// (0x0000b1dc) list_single_cale_day_pane_fp_t

0x6fd2,	// (0x00006fd2) list_empty_pane_fp_g1_ParamLimits

0x6fd2,	// (0x00006fd2) list_empty_pane_fp_g1

0x7157,	// (0x00007157) list_empty_pane_fp_t1

0x7165,	// (0x00007165) list_empty_pane_fp_t2

0x0001,

0xb1e3,	// (0x0000b1e3) list_empty_pane_fp_t

0x6fd2,	// (0x00006fd2) list_single_heading_pane_fp_g1_ParamLimits

0x6fd2,	// (0x00006fd2) list_single_heading_pane_fp_g1

0x0fe5,	// (0x00000fe5) list_single_heading_pane_fp_g2_ParamLimits

0x0fe5,	// (0x00000fe5) list_single_heading_pane_fp_g2

0x13c2,	// (0x000013c2) list_single_heading_pane_fp_g3_ParamLimits

0x13c2,	// (0x000013c2) list_single_heading_pane_fp_g3

0x0002,

0xb1e8,	// (0x0000b1e8) list_single_heading_pane_fp_g_ParamLimits

0xb1e8,	// (0x0000b1e8) list_single_heading_pane_fp_g

0x7173,	// (0x00007173) list_single_heading_pane_fp_t1_ParamLimits

0x7173,	// (0x00007173) list_single_heading_pane_fp_t1

0x7185,	// (0x00007185) list_single_heading_pane_fp_t2_ParamLimits

0x7185,	// (0x00007185) list_single_heading_pane_fp_t2

0x0001,

0xb1ef,	// (0x0000b1ef) list_single_heading_pane_fp_t_ParamLimits

0xb1ef,	// (0x0000b1ef) list_single_heading_pane_fp_t

0x1712,	// (0x00001712) aid_size_cell_fast

0x07ab,	// (0x000007ab) soft_indicator_pane_cp1_t1

0x174f,	// (0x0000174f) cell_app_pane_cp2_ParamLimits

0x174f,	// (0x0000174f) cell_app_pane_cp2

0x672c,	// (0x0000672c) fep_hwr_candidate_drop_down_list_pane

0x695a,	// (0x0000695a) fep_hwr_candidate_pane_g3_ParamLimits

0x695a,	// (0x0000695a) fep_hwr_candidate_pane_g3

0x6967,	// (0x00006967) fep_hwr_candidate_pane_g4_ParamLimits

0x6967,	// (0x00006967) fep_hwr_candidate_pane_g4

0x0002,

0xb163,	// (0x0000b163) fep_hwr_candidate_pane_g_ParamLimits

0xb163,	// (0x0000b163) fep_hwr_candidate_pane_g

0x6a27,	// (0x00006a27) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x6a27,	// (0x00006a27) fep_vkb_candidate_drop_down_list_pane

0x6e38,	// (0x00006e38) fep_vkb_candidate_pane_g3

0x6e40,	// (0x00006e40) fep_vkb_candidate_pane_g4

0x0002,

0xb190,	// (0x0000b190) fep_vkb_candidate_pane_g

0x6b40,	// (0x00006b40) cell_hwr_candidate_pane_g1_ParamLimits

0x6eab,	// (0x00006eab) cell_hwr_candidate_pane_g3_ParamLimits

0x6eab,	// (0x00006eab) cell_hwr_candidate_pane_g3

0x6ecc,	// (0x00006ecc) cell_hwr_candidate_pane_g4_ParamLimits

0x6ecc,	// (0x00006ecc) cell_hwr_candidate_pane_g4

0x0002,

0xb1aa,	// (0x0000b1aa) cell_hwr_candidate_pane_g_ParamLimits

0xb1aa,	// (0x0000b1aa) cell_hwr_candidate_pane_g

0x6f0b,	// (0x00006f0b) cell_vkb_candidate_pane_g3_ParamLimits

0x6f0b,	// (0x00006f0b) cell_vkb_candidate_pane_g3

0x6f26,	// (0x00006f26) cell_vkb_candidate_pane_g4_ParamLimits

0x6f26,	// (0x00006f26) cell_vkb_candidate_pane_g4

0x719b,	// (0x0000719b) cell_app_pane_cp2_g1_ParamLimits

0x719b,	// (0x0000719b) cell_app_pane_cp2_g1

0x71b9,	// (0x000071b9) cell_app_pane_cp2_g2_ParamLimits

0x71b9,	// (0x000071b9) cell_app_pane_cp2_g2

0x0001,

0xb1f4,	// (0x0000b1f4) cell_app_pane_cp2_g_ParamLimits

0xb1f4,	// (0x0000b1f4) cell_app_pane_cp2_g

0x71c5,	// (0x000071c5) cell_app_pane_cp2_t1_ParamLimits

0x71c5,	// (0x000071c5) cell_app_pane_cp2_t1

0x139c,	// (0x0000139c) grid_highlight_pane_cp1_ParamLimits

0x139c,	// (0x0000139c) grid_highlight_pane_cp1

0x71d7,	// (0x000071d7) cell_hwr_candidate_pane_cp1_ParamLimits

0x71d7,	// (0x000071d7) cell_hwr_candidate_pane_cp1

0x6b40,	// (0x00006b40) fep_hwr_candidate_drop_down_list_pane_g1

0x71f6,	// (0x000071f6) fep_hwr_candidate_drop_down_list_pane_g2

0x7203,	// (0x00007203) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xb1f9,	// (0x0000b1f9) fep_hwr_candidate_drop_down_list_pane_g

0x7210,	// (0x00007210) fep_hwr_candidate_drop_down_list_scroll_pane

0x7219,	// (0x00007219) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7219,	// (0x00007219) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x7226,	// (0x00007226) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7226,	// (0x00007226) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x7233,	// (0x00007233) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7233,	// (0x00007233) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x6f0b,	// (0x00006f0b) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6f0b,	// (0x00006f0b) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x6f26,	// (0x00006f26) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6f26,	// (0x00006f26) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x7240,	// (0x00007240) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7240,	// (0x00007240) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x725b,	// (0x0000725b) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x725b,	// (0x0000725b) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x7276,	// (0x00007276) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7276,	// (0x00007276) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xb200,	// (0x0000b200) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xb200,	// (0x0000b200) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x7291,	// (0x00007291) cell_vkb_candidate_pane_cp1_ParamLimits

0x7291,	// (0x00007291) cell_vkb_candidate_pane_cp1

0x6b40,	// (0x00006b40) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x6b40,	// (0x00006b40) fep_vkb_candidate_drop_down_list_pane_g1

0x71f6,	// (0x000071f6) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x71f6,	// (0x000071f6) fep_vkb_candidate_drop_down_list_pane_g2

0x7203,	// (0x00007203) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x7203,	// (0x00007203) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xb1f9,	// (0x0000b1f9) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xb1f9,	// (0x0000b1f9) fep_vkb_candidate_drop_down_list_pane_g

0x72b1,	// (0x000072b1) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x72b1,	// (0x000072b1) fep_vkb_candidate_drop_down_list_scroll_pane

0x72be,	// (0x000072be) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x72be,	// (0x000072be) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x72cb,	// (0x000072cb) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x72cb,	// (0x000072cb) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x72d7,	// (0x000072d7) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x72d7,	// (0x000072d7) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x6eab,	// (0x00006eab) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6eab,	// (0x00006eab) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x6ecc,	// (0x00006ecc) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6ecc,	// (0x00006ecc) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x72e3,	// (0x000072e3) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x72e3,	// (0x000072e3) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x7304,	// (0x00007304) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7304,	// (0x00007304) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x7325,	// (0x00007325) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7325,	// (0x00007325) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xb211,	// (0x0000b211) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xb211,	// (0x0000b211) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xb770,	// (0x0000b770) title_pane_g1_ParamLimits

0xb783,	// (0x0000b783) title_pane_g2_ParamLimits

0xf258,	// (0x0000f258) title_pane_g_ParamLimits

0x1d49,	// (0x00001d49) aid_call2_pane

0x1d51,	// (0x00001d51) aid_call_pane

0x1d59,	// (0x00001d59) popup_clock_analogue_window_g1

0x1d59,	// (0x00001d59) popup_clock_analogue_window_g2

0x1d61,	// (0x00001d61) popup_clock_analogue_window_g3

0x1d6a,	// (0x00001d6a) popup_clock_analogue_window_g4

0x002e,	// (0x0000002e) popup_clock_analogue_window_g5

0x0004,

0xad3f,	// (0x0000ad3f) popup_clock_analogue_window_g

0x1d72,	// (0x00001d72) popup_clock_analogue_window_t1

0x1dfd,	// (0x00001dfd) clock_digital_number_pane_ParamLimits

0x1dfd,	// (0x00001dfd) clock_digital_number_pane

0x1e09,	// (0x00001e09) clock_digital_number_pane_cp02_ParamLimits

0x1e09,	// (0x00001e09) clock_digital_number_pane_cp02

0x1e15,	// (0x00001e15) clock_digital_number_pane_cp03_ParamLimits

0x1e15,	// (0x00001e15) clock_digital_number_pane_cp03

0x1e21,	// (0x00001e21) clock_digital_number_pane_cp04_ParamLimits

0x1e21,	// (0x00001e21) clock_digital_number_pane_cp04

0x1e2d,	// (0x00001e2d) clock_digital_separator_pane_ParamLimits

0x1e2d,	// (0x00001e2d) clock_digital_separator_pane

0x1e39,	// (0x00001e39) popup_clock_digital_window_t1_ParamLimits

0x1e39,	// (0x00001e39) popup_clock_digital_window_t1

0x002e,	// (0x0000002e) clock_digital_number_pane_g1

0x002e,	// (0x0000002e) clock_digital_number_pane_g2

0x0001,

0xad4a,	// (0x0000ad4a) clock_digital_number_pane_g

0x002e,	// (0x0000002e) clock_digital_separator_pane_g1

0x002e,	// (0x0000002e) clock_digital_separator_pane_g2

0x0001,

0xad4a,	// (0x0000ad4a) clock_digital_separator_pane_g

0xcc21,	// (0x0000cc21) aid_fill_nsta_ParamLimits

0xcd57,	// (0x0000cd57) indicator_nsta_pane_ParamLimits

0x3426,	// (0x00003426) popup_clock_analogue_window

0x3426,	// (0x00003426) popup_clock_digital_window

0x16d3,	// (0x000016d3) grid_indicator_nsta_pane_ParamLimits

0x6036,	// (0x00006036) clock_nsta_pane_t2

0x0001,

0xb0e3,	// (0x0000b0e3) clock_nsta_pane_t

0x1b07,	// (0x00001b07) aid_size_max_handle

0xc123,	// (0x0000c123) aid_size_min_handle

0x2613,	// (0x00002613) editor_scroll_pane

0x7340,	// (0x00007340) ex_editor_pane

0x1680,	// (0x00001680) scroll_pane_cp13

0x0dc0,	// (0x00000dc0) scroll_pane_cp14

0x1da7,	// (0x00001da7) scroll_pane_cp36

0xc12c,	// (0x0000c12c) list_single_graphic_hl_pane_cp2_ParamLimits

0xc12c,	// (0x0000c12c) list_single_graphic_hl_pane_cp2

0xd495,	// (0x0000d495) list_single_graphic_hl_pane_ParamLimits

0xd495,	// (0x0000d495) list_single_graphic_hl_pane

0x7348,	// (0x00007348) aid_size_min_hl_cp1

0x7351,	// (0x00007351) list_highlight_pane_cp34_ParamLimits

0x7351,	// (0x00007351) list_highlight_pane_cp34

0x7362,	// (0x00007362) list_single_graphic_hl_pane_g1_ParamLimits

0x7362,	// (0x00007362) list_single_graphic_hl_pane_g1

0xd9ed,	// (0x0000d9ed) list_single_graphic_hl_pane_g2_ParamLimits

0xd9ed,	// (0x0000d9ed) list_single_graphic_hl_pane_g2

0xd9ed,	// (0x0000d9ed) list_single_graphic_hl_pane_g3_ParamLimits

0xd9ed,	// (0x0000d9ed) list_single_graphic_hl_pane_g3

0x2584,	// (0x00002584) list_single_graphic_hl_pane_g4_ParamLimits

0x2584,	// (0x00002584) list_single_graphic_hl_pane_g4

0xd9f9,	// (0x0000d9f9) list_single_graphic_hl_pane_g5_ParamLimits

0xd9f9,	// (0x0000d9f9) list_single_graphic_hl_pane_g5

0x0004,

0xf438,	// (0x0000f438) list_single_graphic_hl_pane_g_ParamLimits

0xf438,	// (0x0000f438) list_single_graphic_hl_pane_g

0xda0d,	// (0x0000da0d) list_single_graphic_hl_pane_t1_ParamLimits

0xda0d,	// (0x0000da0d) list_single_graphic_hl_pane_t1

0x73a5,	// (0x000073a5) aid_size_min_hl_cp2

0x73ae,	// (0x000073ae) list_highlight_pane_cp34_cp2_ParamLimits

0x73ae,	// (0x000073ae) list_highlight_pane_cp34_cp2

0x7362,	// (0x00007362) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x7362,	// (0x00007362) list_single_graphic_hl_pane_g1_cp2

0x73bb,	// (0x000073bb) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x73bb,	// (0x000073bb) list_single_graphic_hl_pane_g2_cp2

0x73c7,	// (0x000073c7) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x73c7,	// (0x000073c7) list_single_graphic_hl_pane_g3_cp2

0x57d2,	// (0x000057d2) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x57d2,	// (0x000057d2) list_single_graphic_hl_pane_g4_cp2

0x737b,	// (0x0000737b) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x737b,	// (0x0000737b) list_single_graphic_hl_pane_g5_cp2

0xc3fd,	// (0x0000c3fd) control_pane_g4_ParamLimits

0xc3fd,	// (0x0000c3fd) control_pane_g4

0x2ba0,	// (0x00002ba0) bg_popup_sub_pane_cp10_ParamLimits

0x66b8,	// (0x000066b8) list_choice_list_pane_ParamLimits

0x66c7,	// (0x000066c7) scroll_pane_cp23

0x083b,	// (0x0000083b) bg_popup_preview_window_pane_cp02_ParamLimits

0x6f77,	// (0x00006f77) list_preview_fixed_pane_ParamLimits

0x6f8d,	// (0x00006f8d) list_preview_fixed_pane_cp_ParamLimits

0x6f8d,	// (0x00006f8d) list_preview_fixed_pane_cp

0x6f99,	// (0x00006f99) popup_preview_fixed_window_g1_ParamLimits

0x6f99,	// (0x00006f99) popup_preview_fixed_window_g1

0x6fa5,	// (0x00006fa5) popup_preview_fixed_window_g2_ParamLimits

0x6fa5,	// (0x00006fa5) popup_preview_fixed_window_g2

0x0002,

0xb1b1,	// (0x0000b1b1) popup_preview_fixed_window_g_ParamLimits

0xb1b1,	// (0x0000b1b1) popup_preview_fixed_window_g

0x19ae,	// (0x000019ae) aid_navi_side_left_pane_ParamLimits

0x19c3,	// (0x000019c3) aid_navi_side_right_pane_ParamLimits

0x19db,	// (0x000019db) navi_icon_pane_stacon_ParamLimits

0x19ef,	// (0x000019ef) navi_navi_pane_stacon_ParamLimits

0x19db,	// (0x000019db) navi_text_pane_stacon_ParamLimits

0x0024,	// (0x00000024) main_text_info_pane

0x73eb,	// (0x000073eb) listscroll_text_info_pane

0x73f3,	// (0x000073f3) list_text_info_pane_ParamLimits

0x73f3,	// (0x000073f3) list_text_info_pane

0x7402,	// (0x00007402) scroll_pane_cp24_ParamLimits

0x7402,	// (0x00007402) scroll_pane_cp24

0xda23,	// (0x0000da23) list_text_info_pane_t1_ParamLimits

0xda23,	// (0x0000da23) list_text_info_pane_t1

0xc591,	// (0x0000c591) popup_fast_swap2_window_ParamLimits

0xc591,	// (0x0000c591) popup_fast_swap2_window

0x7451,	// (0x00007451) aid_size_cell_fast2

0x0024,	// (0x00000024) bg_popup_window_pane_cp17

0x3d4e,	// (0x00003d4e) heading_pane_cp2

0x0a8a,	// (0x00000a8a) listscroll_fast2_pane

0x745b,	// (0x0000745b) grid_fast2_pane

0x7465,	// (0x00007465) listscroll_fast2_pane_g1

0x746d,	// (0x0000746d) listscroll_fast2_pane_g2

0x0001,

0xb22d,	// (0x0000b22d) listscroll_fast2_pane_g

0x1680,	// (0x00001680) scroll_pane_cp26

0x7477,	// (0x00007477) cell_fast2_pane_ParamLimits

0x7477,	// (0x00007477) cell_fast2_pane

0x748c,	// (0x0000748c) cell_fast2_pane_g1

0x7495,	// (0x00007495) cell_fast2_pane_g2

0x749e,	// (0x0000749e) cell_fast2_pane_g3

0x0002,

0xb232,	// (0x0000b232) cell_fast2_pane_g

0x0b7d,	// (0x00000b7d) grid_highlight_pane_cp9

0x0b92,	// (0x00000b92) main_eswt_pane_ParamLimits

0x0b92,	// (0x00000b92) main_eswt_pane

0x7417,	// (0x00007417) list_single_text_info_pane

0x74a6,	// (0x000074a6) eswt_ctrl_button_pane

0x74a6,	// (0x000074a6) eswt_ctrl_canvas_pane

0x74ae,	// (0x000074ae) eswt_ctrl_combo_pane

0x74a6,	// (0x000074a6) eswt_ctrl_default_pane

0x74a6,	// (0x000074a6) eswt_ctrl_label_pane

0x74b6,	// (0x000074b6) eswt_ctrl_wait_pane

0x74be,	// (0x000074be) eswt_shell_pane

0x0024,	// (0x00000024) listscroll_eswt_app_pane

0x74de,	// (0x000074de) popup_eswt_tasktip_window_ParamLimits

0x74de,	// (0x000074de) popup_eswt_tasktip_window

0x38a3,	// (0x000038a3) bg_popup_window_pane_cp18

0x74ef,	// (0x000074ef) eswt_control_pane_g1_ParamLimits

0x74ef,	// (0x000074ef) eswt_control_pane_g1

0x74fc,	// (0x000074fc) eswt_control_pane_g2_ParamLimits

0x74fc,	// (0x000074fc) eswt_control_pane_g2

0x7509,	// (0x00007509) eswt_control_pane_g3_ParamLimits

0x7509,	// (0x00007509) eswt_control_pane_g3

0x7516,	// (0x00007516) eswt_control_pane_g4_ParamLimits

0x7516,	// (0x00007516) eswt_control_pane_g4

0x0003,

0xb239,	// (0x0000b239) eswt_control_pane_g_ParamLimits

0xb239,	// (0x0000b239) eswt_control_pane_g

0x139c,	// (0x0000139c) bg_button_pane_ParamLimits

0x139c,	// (0x0000139c) bg_button_pane

0x0b92,	// (0x00000b92) common_borders_pane_copy2_ParamLimits

0x0b92,	// (0x00000b92) common_borders_pane_copy2

0x7523,	// (0x00007523) control_button_pane_g1_ParamLimits

0x7523,	// (0x00007523) control_button_pane_g1

0x752f,	// (0x0000752f) control_button_pane_g2_ParamLimits

0x752f,	// (0x0000752f) control_button_pane_g2

0x753b,	// (0x0000753b) control_button_pane_g3_ParamLimits

0x753b,	// (0x0000753b) control_button_pane_g3

0x0002,

0xb242,	// (0x0000b242) control_button_pane_g_ParamLimits

0xb242,	// (0x0000b242) control_button_pane_g

0x754f,	// (0x0000754f) control_button_pane_t1

0x755d,	// (0x0000755d) control_button_pane_t2

0x0001,

0xb249,	// (0x0000b249) control_button_pane_t

0x36f5,	// (0x000036f5) bg_button_pane_g1

0x36fd,	// (0x000036fd) bg_button_pane_g2

0x3705,	// (0x00003705) bg_button_pane_g3

0x370d,	// (0x0000370d) bg_button_pane_g4

0x3715,	// (0x00003715) bg_button_pane_g5

0x371d,	// (0x0000371d) bg_button_pane_g6

0x3725,	// (0x00003725) bg_button_pane_g7

0x372d,	// (0x0000372d) bg_button_pane_g8

0x3735,	// (0x00003735) bg_button_pane_g9

0x0008,

0xaea6,	// (0x0000aea6) bg_button_pane_g

0x6673,	// (0x00006673) common_borders_pane_ParamLimits

0x6673,	// (0x00006673) common_borders_pane

0x74ef,	// (0x000074ef) eswt_control_pane_g1_copy1_ParamLimits

0x74ef,	// (0x000074ef) eswt_control_pane_g1_copy1

0x74fc,	// (0x000074fc) eswt_control_pane_g2_copy1_ParamLimits

0x74fc,	// (0x000074fc) eswt_control_pane_g2_copy1

0x7509,	// (0x00007509) eswt_control_pane_g3_copy1_ParamLimits

0x7509,	// (0x00007509) eswt_control_pane_g3_copy1

0x7516,	// (0x00007516) eswt_control_pane_g4_copy1_ParamLimits

0x7516,	// (0x00007516) eswt_control_pane_g4_copy1

0x66ae,	// (0x000066ae) bg_eswt_ctrl_canvas_pane_g1

0x6673,	// (0x00006673) common_borders_pane_cp2_ParamLimits

0x6673,	// (0x00006673) common_borders_pane_cp2

0x6673,	// (0x00006673) common_borders_pane_cp3_ParamLimits

0x6673,	// (0x00006673) common_borders_pane_cp3

0x756b,	// (0x0000756b) separator_horizontal_pane

0x7573,	// (0x00007573) separator_vertical_pane

0x74ef,	// (0x000074ef) eswt_control_pane_g1_copy2_ParamLimits

0x74ef,	// (0x000074ef) eswt_control_pane_g1_copy2

0x74fc,	// (0x000074fc) eswt_control_pane_g2_copy2_ParamLimits

0x74fc,	// (0x000074fc) eswt_control_pane_g2_copy2

0x7509,	// (0x00007509) eswt_control_pane_g3_copy2_ParamLimits

0x7509,	// (0x00007509) eswt_control_pane_g3_copy2

0x7516,	// (0x00007516) eswt_control_pane_g4_copy2_ParamLimits

0x7516,	// (0x00007516) eswt_control_pane_g4_copy2

0x0024,	// (0x00000024) common_borders_pane_cp4

0x757c,	// (0x0000757c) separator_horizontal_pane_g1

0x7585,	// (0x00007585) separator_horizontal_pane_g2

0x758e,	// (0x0000758e) separator_horizontal_pane_g3

0x0002,

0xb24e,	// (0x0000b24e) separator_horizontal_pane_g

0x74ef,	// (0x000074ef) eswt_control_pane_g1_copy3_ParamLimits

0x74ef,	// (0x000074ef) eswt_control_pane_g1_copy3

0x74fc,	// (0x000074fc) eswt_control_pane_g2_copy3_ParamLimits

0x74fc,	// (0x000074fc) eswt_control_pane_g2_copy3

0x7509,	// (0x00007509) eswt_control_pane_g3_copy3_ParamLimits

0x7509,	// (0x00007509) eswt_control_pane_g3_copy3

0x7516,	// (0x00007516) eswt_control_pane_g4_copy3_ParamLimits

0x7516,	// (0x00007516) eswt_control_pane_g4_copy3

0x0024,	// (0x00000024) common_borders_pane_cp5

0x7597,	// (0x00007597) separator_vertical_pane_g1

0x75a0,	// (0x000075a0) separator_vertical_pane_g2

0x75a9,	// (0x000075a9) separator_vertical_pane_g3

0x0002,

0xb255,	// (0x0000b255) separator_vertical_pane_g

0x74ef,	// (0x000074ef) eswt_control_pane_g1_copy4_ParamLimits

0x74ef,	// (0x000074ef) eswt_control_pane_g1_copy4

0x74fc,	// (0x000074fc) eswt_control_pane_g2_copy4_ParamLimits

0x74fc,	// (0x000074fc) eswt_control_pane_g2_copy4

0x7509,	// (0x00007509) eswt_control_pane_g3_copy4_ParamLimits

0x7509,	// (0x00007509) eswt_control_pane_g3_copy4

0x7516,	// (0x00007516) eswt_control_pane_g4_copy4_ParamLimits

0x7516,	// (0x00007516) eswt_control_pane_g4_copy4

0xda3e,	// (0x0000da3e) eswt_ctrl_combo_button_pane

0xda46,	// (0x0000da46) eswt_ctrl_input_pane

0xda4e,	// (0x0000da4e) popup_choice_list_window_cp70

0xda56,	// (0x0000da56) eswt_ctrl_input_pane_t1

0x0024,	// (0x00000024) input_focus_pane_cp70

0x6673,	// (0x00006673) bg_button_pane_cp70_ParamLimits

0x6673,	// (0x00006673) bg_button_pane_cp70

0xda64,	// (0x0000da64) eswt_ctrl_combo_button_pane_g1

0x75e0,	// (0x000075e0) wait_bar_pane_cp70

0x38a3,	// (0x000038a3) bg_popup_window_pane_cp70_ParamLimits

0x38a3,	// (0x000038a3) bg_popup_window_pane_cp70

0x75e8,	// (0x000075e8) popup_eswt_tasktip_window_t1

0x75fe,	// (0x000075fe) wait_bar_pane_cp71_ParamLimits

0x75fe,	// (0x000075fe) wait_bar_pane_cp71

0x760a,	// (0x0000760a) grid_eswt_app_pane

0x1b6b,	// (0x00001b6b) scroll_pane_cp70

0xda6c,	// (0x0000da6c) cell_eswt_app_pane_ParamLimits

0xda6c,	// (0x0000da6c) cell_eswt_app_pane

0xda96,	// (0x0000da96) cell_eswt_app_pane_g1_ParamLimits

0xda96,	// (0x0000da96) cell_eswt_app_pane_g1

0xdac5,	// (0x0000dac5) cell_eswt_app_pane_g2_ParamLimits

0xdac5,	// (0x0000dac5) cell_eswt_app_pane_g2

0x0001,

0xf443,	// (0x0000f443) cell_eswt_app_pane_g_ParamLimits

0xf443,	// (0x0000f443) cell_eswt_app_pane_g

0xdaee,	// (0x0000daee) cell_eswt_app_pane_t1_ParamLimits

0xdaee,	// (0x0000daee) cell_eswt_app_pane_t1

0x76cd,	// (0x000076cd) grid_highlight_pane_cp70_ParamLimits

0x76cd,	// (0x000076cd) grid_highlight_pane_cp70

0x24e8,	// (0x000024e8) set_content_pane_g1

0xc38f,	// (0x0000c38f) status_small_volume_pane

0x76d9,	// (0x000076d9) status_small_volume_pane_g1

0x76e1,	// (0x000076e1) volume_small2_pane

0x76ea,	// (0x000076ea) volume_small2_pane_g1

0x76f3,	// (0x000076f3) volume_small2_pane_g2

0x76fc,	// (0x000076fc) volume_small2_pane_g3

0x7705,	// (0x00007705) volume_small2_pane_g4

0x770e,	// (0x0000770e) volume_small2_pane_g5

0x7717,	// (0x00007717) volume_small2_pane_g6

0x7720,	// (0x00007720) volume_small2_pane_g7

0x7729,	// (0x00007729) volume_small2_pane_g8

0x7732,	// (0x00007732) volume_small2_pane_g9

0x773b,	// (0x0000773b) volume_small2_pane_g10

0x0009,

0xb261,	// (0x0000b261) volume_small2_pane_g

0x6c88,	// (0x00006c88) fep_vkb_top_text_pane_g1_ParamLimits

0xd995,	// (0x0000d995) fep_vkb_top_text_pane_t1_ParamLimits

0x6fb1,	// (0x00006fb1) popup_preview_fixed_window_g3_ParamLimits

0x6fb1,	// (0x00006fb1) popup_preview_fixed_window_g3

0xcbb4,	// (0x0000cbb4) popup_toolbar_trans_pane

0xd2ed,	// (0x0000d2ed) aid_height_set_list_ParamLimits

0x4f17,	// (0x00004f17) aid_size_parent_ParamLimits

0x2ba0,	// (0x00002ba0) list_highlight_pane_cp2_ParamLimits

0x24e8,	// (0x000024e8) set_content_pane_g1_ParamLimits

0xd4a6,	// (0x0000d4a6) list_single_image_pane_ParamLimits

0xd4a6,	// (0x0000d4a6) list_single_image_pane

0xdb20,	// (0x0000db20) aid_size_cell_image_ParamLimits

0xdb20,	// (0x0000db20) aid_size_cell_image

0xdb2d,	// (0x0000db2d) grid_single_image_pane_ParamLimits

0xdb2d,	// (0x0000db2d) grid_single_image_pane

0x37ba,	// (0x000037ba) list_single_image_pane_g1_ParamLimits

0x37ba,	// (0x000037ba) list_single_image_pane_g1

0x775d,	// (0x0000775d) list_single_image_pane_g2_ParamLimits

0x775d,	// (0x0000775d) list_single_image_pane_g2

0x0001,

0xb276,	// (0x0000b276) list_single_image_pane_g_ParamLimits

0xb276,	// (0x0000b276) list_single_image_pane_g

0x7771,	// (0x00007771) list_single_image_pane_t1_ParamLimits

0x7771,	// (0x00007771) list_single_image_pane_t1

0xdb3b,	// (0x0000db3b) cell_image_list_pane_ParamLimits

0xdb3b,	// (0x0000db3b) cell_image_list_pane

0xdb51,	// (0x0000db51) cell_image_list_pane_g1

0xdb5a,	// (0x0000db5a) cell_image_list_pane_g2

0x0001,

0xf448,	// (0x0000f448) cell_image_list_pane_g

0x77ad,	// (0x000077ad) aid_size_cell_tb_trans_pane

0x139c,	// (0x0000139c) bg_tb_trans_pane

0x77bf,	// (0x000077bf) grid_tb_trans_pane

0x36f5,	// (0x000036f5) bg_tb_trans_pane_g1

0x36fd,	// (0x000036fd) bg_tb_trans_pane_g2

0x3705,	// (0x00003705) bg_tb_trans_pane_g3

0x370d,	// (0x0000370d) bg_tb_trans_pane_g4

0x3715,	// (0x00003715) bg_tb_trans_pane_g5

0x372d,	// (0x0000372d) bg_tb_trans_pane_g6

0x3735,	// (0x00003735) bg_tb_trans_pane_g7

0x371d,	// (0x0000371d) bg_tb_trans_pane_g8

0x3725,	// (0x00003725) bg_tb_trans_pane_g9

0x0008,

0xb280,	// (0x0000b280) bg_tb_trans_pane_g

0x77d3,	// (0x000077d3) cell_toolbar_trans_pane_ParamLimits

0x77d3,	// (0x000077d3) cell_toolbar_trans_pane

0x66ae,	// (0x000066ae) cell_toolbar_trans_pane_g1

0xd700,	// (0x0000d700) list_form2_midp_pane_t1

0xd70e,	// (0x0000d70e) list_form2_midp_pane_t2

0x0001,

0xf413,	// (0x0000f413) list_form2_midp_pane_t

0x625f,	// (0x0000625f) scroll_pane_cp51_ParamLimits

0x646a,	// (0x0000646a) form2_midp_wait_pane_g1

0x6473,	// (0x00006473) form2_midp_wait_pane_g2

0x647c,	// (0x0000647c) form2_midp_wait_pane_g3

0x0002,

0xb13e,	// (0x0000b13e) form2_midp_wait_pane_g

0x0507,	// (0x00000507) list_highlight_pane_cp21_ParamLimits

0x64c8,	// (0x000064c8) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x64d7,	// (0x000064d7) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x511d,	// (0x0000511d) list_single_2graphic_im_pane_ParamLimits

0x511d,	// (0x0000511d) list_single_2graphic_im_pane

0xdb63,	// (0x0000db63) list_single_2graphic_im_pane_g1_ParamLimits

0xdb63,	// (0x0000db63) list_single_2graphic_im_pane_g1

0xdb74,	// (0x0000db74) list_single_2graphic_im_pane_g2_ParamLimits

0xdb74,	// (0x0000db74) list_single_2graphic_im_pane_g2

0xdb80,	// (0x0000db80) list_single_2graphic_im_pane_g3_ParamLimits

0xdb80,	// (0x0000db80) list_single_2graphic_im_pane_g3

0x0003,

0xf44d,	// (0x0000f44d) list_single_2graphic_im_pane_g_ParamLimits

0xf44d,	// (0x0000f44d) list_single_2graphic_im_pane_g

0xdb94,	// (0x0000db94) list_single_2graphic_im_pane_t1_ParamLimits

0xdb94,	// (0x0000db94) list_single_2graphic_im_pane_t1

0x6fbd,	// (0x00006fbd) list_single_graphic_2heading_pane_fp_ParamLimits

0x6fbd,	// (0x00006fbd) list_single_graphic_2heading_pane_fp

0x7001,	// (0x00007001) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x7001,	// (0x00007001) list_single_graphic_2heading_pane_fp_g1

0x6fd2,	// (0x00006fd2) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x6fd2,	// (0x00006fd2) list_single_graphic_2heading_pane_fp_g2

0x0fe5,	// (0x00000fe5) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x0fe5,	// (0x00000fe5) list_single_graphic_2heading_pane_fp_g3

0x13c2,	// (0x000013c2) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x13c2,	// (0x000013c2) list_single_graphic_2heading_pane_fp_g4

0x6fde,	// (0x00006fde) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x6fde,	// (0x00006fde) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xb1c1,	// (0x0000b1c1) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xb1c1,	// (0x0000b1c1) list_single_graphic_2heading_pane_fp_g

0x7867,	// (0x00007867) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x7867,	// (0x00007867) list_single_graphic_2heading_pane_fp_t1

0x7039,	// (0x00007039) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x7039,	// (0x00007039) list_single_graphic_2heading_pane_fp_t2

0x787d,	// (0x0000787d) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x787d,	// (0x0000787d) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xb29c,	// (0x0000b29c) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xb29c,	// (0x0000b29c) list_single_graphic_2heading_pane_fp_t

0x68d8,	// (0x000068d8) fep_hwr_write_pane_g5_ParamLimits

0x68d8,	// (0x000068d8) fep_hwr_write_pane_g5

0x68e4,	// (0x000068e4) fep_hwr_write_pane_g6_ParamLimits

0x68e4,	// (0x000068e4) fep_hwr_write_pane_g6

0x74be,	// (0x000074be) eswt_shell_pane_ParamLimits

0x38a3,	// (0x000038a3) bg_popup_window_pane_cp18_ParamLimits

0x4dbf,	// (0x00004dbf) heading_pane_cp70

0x75e8,	// (0x000075e8) popup_eswt_tasktip_window_t1_ParamLimits

0xcc7c,	// (0x0000cc7c) aid_touch_tab_arrow_left

0xcc92,	// (0x0000cc92) aid_touch_tab_arrow_right

0xb79b,	// (0x0000b79b) title_pane_g3_ParamLimits

0xb79b,	// (0x0000b79b) title_pane_g3

0x127b,	// (0x0000127b) set_value_pane_g1

0xcbb4,	// (0x0000cbb4) popup_toolbar_trans_pane_ParamLimits

0x77ad,	// (0x000077ad) aid_size_cell_tb_trans_pane_ParamLimits

0x139c,	// (0x0000139c) bg_tb_trans_pane_ParamLimits

0x77bf,	// (0x000077bf) grid_tb_trans_pane_ParamLimits

0x083b,	// (0x0000083b) cont_note_pane_ParamLimits

0x083b,	// (0x0000083b) cont_note_pane

0x0b92,	// (0x00000b92) cont_snote2_single_text_pane_ParamLimits

0x0b92,	// (0x00000b92) cont_snote2_single_text_pane

0x0b92,	// (0x00000b92) cont_snote2_single_graphic_pane_ParamLimits

0x0b92,	// (0x00000b92) cont_snote2_single_graphic_pane

0x3f69,	// (0x00003f69) cont_note_wait_pane_ParamLimits

0x3f69,	// (0x00003f69) cont_note_wait_pane

0x3f69,	// (0x00003f69) cont_note_image_pane_ParamLimits

0x3f69,	// (0x00003f69) cont_note_image_pane

0x7893,	// (0x00007893) popup_note2_window_g1_ParamLimits

0x7893,	// (0x00007893) popup_note2_window_g1

0x78c4,	// (0x000078c4) popup_note2_window_t1_ParamLimits

0x78c4,	// (0x000078c4) popup_note2_window_t1

0x7909,	// (0x00007909) popup_note2_window_t2_ParamLimits

0x7909,	// (0x00007909) popup_note2_window_t2

0x794e,	// (0x0000794e) popup_note2_window_t3_ParamLimits

0x794e,	// (0x0000794e) popup_note2_window_t3

0x7993,	// (0x00007993) popup_note2_window_t4_ParamLimits

0x7993,	// (0x00007993) popup_note2_window_t4

0x08bf,	// (0x000008bf) popup_note2_window_t5_ParamLimits

0x08bf,	// (0x000008bf) popup_note2_window_t5

0x0004,

0xb2a8,	// (0x0000b2a8) popup_note2_window_t_ParamLimits

0xb2a8,	// (0x0000b2a8) popup_note2_window_t

0x79c2,	// (0x000079c2) popup_note2_image_window_g1_ParamLimits

0x79c2,	// (0x000079c2) popup_note2_image_window_g1

0x79ce,	// (0x000079ce) popup_note2_image_window_g2_ParamLimits

0x79ce,	// (0x000079ce) popup_note2_image_window_g2

0x0001,

0xb2b3,	// (0x0000b2b3) popup_note2_image_window_g_ParamLimits

0xb2b3,	// (0x0000b2b3) popup_note2_image_window_g

0x79e0,	// (0x000079e0) popup_note2_image_window_t1_ParamLimits

0x79e0,	// (0x000079e0) popup_note2_image_window_t1

0x79f8,	// (0x000079f8) popup_note2_image_window_t2_ParamLimits

0x79f8,	// (0x000079f8) popup_note2_image_window_t2

0x7a10,	// (0x00007a10) popup_note2_image_window_t3_ParamLimits

0x7a10,	// (0x00007a10) popup_note2_image_window_t3

0x0002,

0xb2b8,	// (0x0000b2b8) popup_note2_image_window_t_ParamLimits

0xb2b8,	// (0x0000b2b8) popup_note2_image_window_t

0x3f77,	// (0x00003f77) popup_note2_wait_window_g1_ParamLimits

0x3f77,	// (0x00003f77) popup_note2_wait_window_g1

0x7a2c,	// (0x00007a2c) popup_note2_wait_window_g2_ParamLimits

0x7a2c,	// (0x00007a2c) popup_note2_wait_window_g2

0x3f8f,	// (0x00003f8f) popup_note2_wait_window_g3_ParamLimits

0x3f8f,	// (0x00003f8f) popup_note2_wait_window_g3

0x0002,

0xb2bf,	// (0x0000b2bf) popup_note2_wait_window_g_ParamLimits

0xb2bf,	// (0x0000b2bf) popup_note2_wait_window_g

0x7a38,	// (0x00007a38) popup_note2_wait_window_t1_ParamLimits

0x7a38,	// (0x00007a38) popup_note2_wait_window_t1

0x7a56,	// (0x00007a56) popup_note2_wait_window_t2_ParamLimits

0x7a56,	// (0x00007a56) popup_note2_wait_window_t2

0x7a74,	// (0x00007a74) popup_note2_wait_window_t3_ParamLimits

0x7a74,	// (0x00007a74) popup_note2_wait_window_t3

0x7a86,	// (0x00007a86) popup_note2_wait_window_t4_ParamLimits

0x7a86,	// (0x00007a86) popup_note2_wait_window_t4

0x0003,

0xb2c6,	// (0x0000b2c6) popup_note2_wait_window_t_ParamLimits

0xb2c6,	// (0x0000b2c6) popup_note2_wait_window_t

0x7a98,	// (0x00007a98) wait_bar2_pane_ParamLimits

0x7a98,	// (0x00007a98) wait_bar2_pane

0x7ab0,	// (0x00007ab0) popup_snote2_single_text_window_g1_ParamLimits

0x7ab0,	// (0x00007ab0) popup_snote2_single_text_window_g1

0x7ad8,	// (0x00007ad8) popup_snote2_single_text_window_t1_ParamLimits

0x7ad8,	// (0x00007ad8) popup_snote2_single_text_window_t1

0x7b24,	// (0x00007b24) popup_snote2_single_text_window_t2_ParamLimits

0x7b24,	// (0x00007b24) popup_snote2_single_text_window_t2

0x7b70,	// (0x00007b70) popup_snote2_single_text_window_t3_ParamLimits

0x7b70,	// (0x00007b70) popup_snote2_single_text_window_t3

0x7bb1,	// (0x00007bb1) popup_snote2_single_text_window_t4_ParamLimits

0x7bb1,	// (0x00007bb1) popup_snote2_single_text_window_t4

0x7be7,	// (0x00007be7) popup_snote2_single_text_window_t5_ParamLimits

0x7be7,	// (0x00007be7) popup_snote2_single_text_window_t5

0x0004,

0xb2cf,	// (0x0000b2cf) popup_snote2_single_text_window_t_ParamLimits

0xb2cf,	// (0x0000b2cf) popup_snote2_single_text_window_t

0x7c12,	// (0x00007c12) popup_snote2_single_graphic_window_g1_ParamLimits

0x7c12,	// (0x00007c12) popup_snote2_single_graphic_window_g1

0x7c3a,	// (0x00007c3a) popup_snote2_single_graphic_window_g2_ParamLimits

0x7c3a,	// (0x00007c3a) popup_snote2_single_graphic_window_g2

0x0001,

0xb2da,	// (0x0000b2da) popup_snote2_single_graphic_window_g_ParamLimits

0xb2da,	// (0x0000b2da) popup_snote2_single_graphic_window_g

0x7c62,	// (0x00007c62) popup_snote2_single_graphic_window_t1_ParamLimits

0x7c62,	// (0x00007c62) popup_snote2_single_graphic_window_t1

0x7cae,	// (0x00007cae) popup_snote2_single_graphic_window_t2_ParamLimits

0x7cae,	// (0x00007cae) popup_snote2_single_graphic_window_t2

0x7b70,	// (0x00007b70) popup_snote2_single_graphic_window_t3_ParamLimits

0x7b70,	// (0x00007b70) popup_snote2_single_graphic_window_t3

0x7bb1,	// (0x00007bb1) popup_snote2_single_graphic_window_t4_ParamLimits

0x7bb1,	// (0x00007bb1) popup_snote2_single_graphic_window_t4

0x7be7,	// (0x00007be7) popup_snote2_single_graphic_window_t5_ParamLimits

0x7be7,	// (0x00007be7) popup_snote2_single_graphic_window_t5

0x0004,

0xb2df,	// (0x0000b2df) popup_snote2_single_graphic_window_t_ParamLimits

0xb2df,	// (0x0000b2df) popup_snote2_single_graphic_window_t

0x60cf,	// (0x000060cf) clock_nsta_pane_cp2_t1

0x60cf,	// (0x000060cf) clock_nsta_pane_cp2_t2

0x0001,

0xb0ff,	// (0x0000b0ff) clock_nsta_pane_cp2_t

0x13b6,	// (0x000013b6) form_field_data_wide_pane_g1_ParamLimits

0x0fe5,	// (0x00000fe5) form_field_data_wide_pane_g2_ParamLimits

0x0fe5,	// (0x00000fe5) form_field_data_wide_pane_g2

0x13c2,	// (0x000013c2) form_field_data_wide_pane_g3_ParamLimits

0x13c2,	// (0x000013c2) form_field_data_wide_pane_g3

0x0002,

0xacc2,	// (0x0000acc2) form_field_data_wide_pane_g_ParamLimits

0xacc2,	// (0x0000acc2) form_field_data_wide_pane_g

0xd643,	// (0x0000d643) grid_touch_3_pane_ParamLimits

0xd643,	// (0x0000d643) grid_touch_3_pane

0xdbc5,	// (0x0000dbc5) cell_touch_3_pane_ParamLimits

0xdbc5,	// (0x0000dbc5) cell_touch_3_pane

0x66ae,	// (0x000066ae) cell_touch_3_pane_g1

0x66ae,	// (0x000066ae) cell_touch_3_pane_g2

0x0001,

0xb184,	// (0x0000b184) cell_touch_3_pane_g

0x08f1,	// (0x000008f1) cont_query_data_pane

0x08f9,	// (0x000008f9) cont_query_data_pane_cp1

0x7d28,	// (0x00007d28) button_value_adjust_pane_cp7

0x7d30,	// (0x00007d30) query_popup_pane_cp3

0x1ec3,	// (0x00001ec3) bg_popup_sub_pane_cp22_ParamLimits

0x1ed9,	// (0x00001ed9) navi_navi_volume_pane_cp2

0x1ef4,	// (0x00001ef4) popup_side_volume_key_window_g2

0x1f03,	// (0x00001f03) popup_side_volume_key_window_g3

0x0002,

0xad58,	// (0x0000ad58) popup_side_volume_key_window_g

0x1f20,	// (0x00001f20) popup_side_volume_key_window_t2

0x0001,

0xad5f,	// (0x0000ad5f) popup_side_volume_key_window_t

0x23a7,	// (0x000023a7) popup_side_volume_key_window_ParamLimits

0xbbe9,	// (0x0000bbe9) list_double_graphic_pane_g4_ParamLimits

0xbbe9,	// (0x0000bbe9) list_double_graphic_pane_g4

0xd482,	// (0x0000d482) list_single_2heading_msg_pane_ParamLimits

0xd482,	// (0x0000d482) list_single_2heading_msg_pane

0xdc0d,	// (0x0000dc0d) list_single_2heading_msg_pane_g1_ParamLimits

0xdc0d,	// (0x0000dc0d) list_single_2heading_msg_pane_g1

0xdc19,	// (0x0000dc19) list_single_2heading_msg_pane_g2_ParamLimits

0xdc19,	// (0x0000dc19) list_single_2heading_msg_pane_g2

0xdc2c,	// (0x0000dc2c) list_single_2heading_msg_pane_g3_ParamLimits

0xdc2c,	// (0x0000dc2c) list_single_2heading_msg_pane_g3

0xdc38,	// (0x0000dc38) list_single_2heading_msg_pane_g4_ParamLimits

0xdc38,	// (0x0000dc38) list_single_2heading_msg_pane_g4

0x0003,

0xf456,	// (0x0000f456) list_single_2heading_msg_pane_g_ParamLimits

0xf456,	// (0x0000f456) list_single_2heading_msg_pane_g

0xdc50,	// (0x0000dc50) list_single_2heading_msg_pane_t1_ParamLimits

0xdc50,	// (0x0000dc50) list_single_2heading_msg_pane_t1

0xdc78,	// (0x0000dc78) list_single_2heading_msg_pane_t2_ParamLimits

0xdc78,	// (0x0000dc78) list_single_2heading_msg_pane_t2

0xdce3,	// (0x0000dce3) list_single_2heading_msg_pane_t3_ParamLimits

0xdce3,	// (0x0000dce3) list_single_2heading_msg_pane_t3

0x7e13,	// (0x00007e13) list_single_2heading_msg_pane_t4_ParamLimits

0x7e13,	// (0x00007e13) list_single_2heading_msg_pane_t4

0x0003,

0xf45f,	// (0x0000f45f) list_single_2heading_msg_pane_t_ParamLimits

0xf45f,	// (0x0000f45f) list_single_2heading_msg_pane_t

0x045b,	// (0x0000045b) title_pane_g4_ParamLimits

0x045b,	// (0x0000045b) title_pane_g4

0x18d7,	// (0x000018d7) title_pane_stacon_g3_ParamLimits

0x18d7,	// (0x000018d7) title_pane_stacon_g3

0x782a,	// (0x0000782a) list_single_2graphic_im_pane_g4_ParamLimits

0x782a,	// (0x0000782a) list_single_2graphic_im_pane_g4

0x4b2c,	// (0x00004b2c) popup_side_volume_key_window_cp

0x55b8,	// (0x000055b8) main_idle_act2_pane_t1

0x373d,	// (0x0000373d) toolbar_button_pane_g10

0xbaa6,	// (0x0000baa6) popup_toolbar_window_cp1

0x60c0,	// (0x000060c0) clock_nsta_pane_cp_t1

0x60c0,	// (0x000060c0) clock_nsta_pane_cp_t2

0x0001,

0xb0fa,	// (0x0000b0fa) clock_nsta_pane_cp_t

0x1ed9,	// (0x00001ed9) navi_navi_volume_pane_cp2_ParamLimits

0x1ee8,	// (0x00001ee8) popup_side_volume_key_window_g1_ParamLimits

0x1ef4,	// (0x00001ef4) popup_side_volume_key_window_g2_ParamLimits

0x1f03,	// (0x00001f03) popup_side_volume_key_window_g3_ParamLimits

0xad58,	// (0x0000ad58) popup_side_volume_key_window_g_ParamLimits

0x6718,	// (0x00006718) fep_hwr_aid_pane

0x67bf,	// (0x000067bf) bg_fep_hwr_top_pane_g4_ParamLimits

0x67df,	// (0x000067df) fep_hwr_top_pane_g1_ParamLimits

0x67f1,	// (0x000067f1) fep_hwr_top_pane_g2_ParamLimits

0x6803,	// (0x00006803) fep_hwr_top_pane_g3_ParamLimits

0xb14f,	// (0x0000b14f) fep_hwr_top_pane_g_ParamLimits

0x6818,	// (0x00006818) fep_hwr_top_text_pane_ParamLimits

0x48ef,	// (0x000048ef) aid_touch_tab_arrow_arrow_2

0x48f8,	// (0x000048f8) aid_touch_tab_arrow_left_2

0x672c,	// (0x0000672c) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x6763,	// (0x00006763) fep_hwr_prediction_pane

0x6a90,	// (0x00006a90) fep_vkb_prediction_pane

0xd975,	// (0x0000d975) fep_vkb_side_pane_g3_ParamLimits

0xd975,	// (0x0000d975) fep_vkb_side_pane_g3

0x6b40,	// (0x00006b40) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x71f6,	// (0x000071f6) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x7203,	// (0x00007203) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xb1f9,	// (0x0000b1f9) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x7e38,	// (0x00007e38) fep_hwr_prediction_pane_g1

0x7e42,	// (0x00007e42) fep_hwr_prediction_pane_g2

0x7e4a,	// (0x00007e4a) fep_hwr_prediction_pane_g3

0x7e52,	// (0x00007e52) fep_hwr_prediction_pane_g4

0x0003,

0xb2fc,	// (0x0000b2fc) fep_hwr_prediction_pane_g

0x7e38,	// (0x00007e38) fep_vkb_prediction_pane_g1

0x7e5a,	// (0x00007e5a) fep_vkb_prediction_pane_g2

0x7e62,	// (0x00007e62) fep_vkb_prediction_pane_g3

0x7e6a,	// (0x00007e6a) fep_vkb_prediction_pane_g4

0x0003,

0xb305,	// (0x0000b305) fep_vkb_prediction_pane_g

0x4e80,	// (0x00004e80) slider_set_pane_g3

0x4e94,	// (0x00004e94) slider_set_pane_g4

0x4eac,	// (0x00004eac) slider_set_pane_g5

0x4e80,	// (0x00004e80) slider_set_pane_g6

0x4ec2,	// (0x00004ec2) slider_set_pane_g7

0x507c,	// (0x0000507c) slider_form_pane_g3

0x5085,	// (0x00005085) slider_form_pane_g4

0x508d,	// (0x0000508d) slider_form_pane_g5

0x507c,	// (0x0000507c) slider_form_pane_g6

0xd438,	// (0x0000d438) slider_form_pane_g7

0x58c5,	// (0x000058c5) slider_set_pane_vc_g3

0x58ce,	// (0x000058ce) slider_set_pane_vc_g4

0x58d7,	// (0x000058d7) slider_set_pane_vc_g5

0x58c5,	// (0x000058c5) slider_set_pane_vc_g6

0x58e0,	// (0x000058e0) slider_set_pane_vc_g7

0x5da5,	// (0x00005da5) slider_form_pane_vc_g1

0x5dae,	// (0x00005dae) slider_form_pane_vc_g2

0x5db7,	// (0x00005db7) slider_form_pane_vc_g3

0x5da5,	// (0x00005da5) slider_form_pane_vc_g4

0x5dc0,	// (0x00005dc0) slider_form_pane_vc_g5

0x0004,

0xb0cc,	// (0x0000b0cc) slider_form_pane_vc_g

0x0024,	// (0x00000024) main_idle_act3_pane

0x7e72,	// (0x00007e72) ai3_links_pane

0xdd51,	// (0x0000dd51) popup_ai3_data_window_ParamLimits

0xdd51,	// (0x0000dd51) popup_ai3_data_window

0x0024,	// (0x00000024) grid_ai3_links_pane

0xdd6b,	// (0x0000dd6b) cell_ai3_links_pane_ParamLimits

0xdd6b,	// (0x0000dd6b) cell_ai3_links_pane

0x7ead,	// (0x00007ead) bg_popup_sub_pane_cp11

0x7eba,	// (0x00007eba) cell_ai3_links_pane_g1

0x0024,	// (0x00000024) bg_popup_sub_pane_cp12

0x7edf,	// (0x00007edf) heading_ai3_data_pane

0x7ee7,	// (0x00007ee7) list_ai3_gene_pane

0x7ef3,	// (0x00007ef3) popup_ai3_data_window_g1

0x7efb,	// (0x00007efb) heading_ai3_data_pane_g1

0x7f03,	// (0x00007f03) heading_ai3_data_pane_t1

0x7f11,	// (0x00007f11) list_double_ai3_gene_pane_ParamLimits

0x7f11,	// (0x00007f11) list_double_ai3_gene_pane

0x7f1e,	// (0x00007f1e) list_single_ai3_gene_pane_ParamLimits

0x7f1e,	// (0x00007f1e) list_single_ai3_gene_pane

0x6673,	// (0x00006673) list_highlight_pane_cp7_ParamLimits

0x6673,	// (0x00006673) list_highlight_pane_cp7

0x7f2b,	// (0x00007f2b) list_single_a13_gene_pane_t1_ParamLimits

0x7f2b,	// (0x00007f2b) list_single_a13_gene_pane_t1

0x7f42,	// (0x00007f42) list_single_ai3_gene_pane_g1

0x7f4b,	// (0x00007f4b) list_single_ai3_gene_pane_g2

0x0001,

0xb30e,	// (0x0000b30e) list_single_ai3_gene_pane_g

0x7f53,	// (0x00007f53) list_double_ai3_gene_pane_g1_ParamLimits

0x7f53,	// (0x00007f53) list_double_ai3_gene_pane_g1

0x7f5f,	// (0x00007f5f) list_double_ai3_gene_pane_t1_ParamLimits

0x7f5f,	// (0x00007f5f) list_double_ai3_gene_pane_t1

0x7f7b,	// (0x00007f7b) list_double_ai3_gene_pane_t2_ParamLimits

0x7f7b,	// (0x00007f7b) list_double_ai3_gene_pane_t2

0x7f91,	// (0x00007f91) list_double_ai3_gene_pane_t3_ParamLimits

0x7f91,	// (0x00007f91) list_double_ai3_gene_pane_t3

0x0002,

0xb313,	// (0x0000b313) list_double_ai3_gene_pane_t_ParamLimits

0xb313,	// (0x0000b313) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x7d41,	// (0x00007d41) aid_size_min_col_2

0xdbf7,	// (0x0000dbf7) aid_size_min_msg_ParamLimits

0xdbf7,	// (0x0000dbf7) aid_size_min_msg

0xd989,	// (0x0000d989) fep_vkb_top_text_pane_g2_ParamLimits

0xd989,	// (0x0000d989) fep_vkb_top_text_pane_g2

0x0001,

0xf433,	// (0x0000f433) fep_vkb_top_text_pane_g_ParamLimits

0xf433,	// (0x0000f433) fep_vkb_top_text_pane_g

0x0024,	// (0x00000024) main_hc_apps_shell_pane

0x7fae,	// (0x00007fae) grid_hc_apps_pane_ParamLimits

0x7fae,	// (0x00007fae) grid_hc_apps_pane

0x7fbd,	// (0x00007fbd) list_hc_apps_pane

0x7fc5,	// (0x00007fc5) scroll_pane_cp37_ParamLimits

0x7fc5,	// (0x00007fc5) scroll_pane_cp37

0xdd85,	// (0x0000dd85) cell_hc_apps_pane_ParamLimits

0xdd85,	// (0x0000dd85) cell_hc_apps_pane

0xde43,	// (0x0000de43) cell_hc_apps_pane_g1_ParamLimits

0xde43,	// (0x0000de43) cell_hc_apps_pane_g1

0x80b0,	// (0x000080b0) cell_hc_apps_pane_g2_ParamLimits

0x80b0,	// (0x000080b0) cell_hc_apps_pane_g2

0x80cc,	// (0x000080cc) cell_hc_apps_pane_g3_ParamLimits

0x80cc,	// (0x000080cc) cell_hc_apps_pane_g3

0x0002,

0xf468,	// (0x0000f468) cell_hc_apps_pane_g_ParamLimits

0xf468,	// (0x0000f468) cell_hc_apps_pane_g

0xde70,	// (0x0000de70) cell_hc_apps_pane_t1_ParamLimits

0xde70,	// (0x0000de70) cell_hc_apps_pane_t1

0x083b,	// (0x0000083b) grid_highlight_pane_cp10_ParamLimits

0x083b,	// (0x0000083b) grid_highlight_pane_cp10

0xdeae,	// (0x0000deae) list_single_hc_apps_pane_ParamLimits

0xdeae,	// (0x0000deae) list_single_hc_apps_pane

0xdedb,	// (0x0000dedb) list_single_hc_apps_pane_g1

0xdef4,	// (0x0000def4) list_single_hc_apps_pane_g2

0x0001,

0xf46f,	// (0x0000f46f) list_single_hc_apps_pane_g

0xdf0d,	// (0x0000df0d) list_single_hc_apps_pane_g2_copy1

0x81d8,	// (0x000081d8) list_single_hc_apps_pane_t1

0x0507,	// (0x00000507) bg_set_opt_pane_cp_ParamLimits

0x0551,	// (0x00000551) setting_slider_pane_t1_ParamLimits

0x056a,	// (0x0000056a) setting_slider_pane_t2_ParamLimits

0x0584,	// (0x00000584) setting_slider_pane_t3_ParamLimits

0xabaa,	// (0x0000abaa) setting_slider_pane_t_ParamLimits

0x059c,	// (0x0000059c) slider_set_pane_ParamLimits

0x29f3,	// (0x000029f3) control_pane_g5_ParamLimits

0x29f3,	// (0x000029f3) control_pane_g5

0x4e67,	// (0x00004e67) slider_set_pane_g1_ParamLimits

0x4e74,	// (0x00004e74) slider_set_pane_g2_ParamLimits

0x4e80,	// (0x00004e80) slider_set_pane_g3_ParamLimits

0x4e94,	// (0x00004e94) slider_set_pane_g4_ParamLimits

0x4eac,	// (0x00004eac) slider_set_pane_g5_ParamLimits

0x4e80,	// (0x00004e80) slider_set_pane_g6_ParamLimits

0x4ec2,	// (0x00004ec2) slider_set_pane_g7_ParamLimits

0xafa4,	// (0x0000afa4) slider_set_pane_g_ParamLimits

0x2493,	// (0x00002493) navi_icon_text_pane_ParamLimits

0xcc45,	// (0x0000cc45) aid_fill_nsta_2_ParamLimits

0xcc7c,	// (0x0000cc7c) aid_touch_tab_arrow_left_ParamLimits

0xcc92,	// (0x0000cc92) aid_touch_tab_arrow_right_ParamLimits

0xcd2d,	// (0x0000cd2d) clock_nsta_pane_ParamLimits

0x48d1,	// (0x000048d1) navi_icon_pane_g1_ParamLimits

0x48dd,	// (0x000048dd) navi_text_pane_t1_ParamLimits

0x61cc,	// (0x000061cc) navi_icon_text_pane_g1_ParamLimits

0x61d8,	// (0x000061d8) navi_icon_text_pane_t1_ParamLimits

0xdedb,	// (0x0000dedb) list_single_hc_apps_pane_g1_ParamLimits

0xdef4,	// (0x0000def4) list_single_hc_apps_pane_g2_ParamLimits

0xf46f,	// (0x0000f46f) list_single_hc_apps_pane_g_ParamLimits

0xdf0d,	// (0x0000df0d) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x81d8,	// (0x000081d8) list_single_hc_apps_pane_t1_ParamLimits

0xb6a0,	// (0x0000b6a0) popup_toolbar2_fixed_window_ParamLimits

0xb6a0,	// (0x0000b6a0) popup_toolbar2_fixed_window

0xcbaa,	// (0x0000cbaa) popup_toolbar2_float_window

0x0024,	// (0x00000024) bg_popup_sub_pane_cp27

0x8206,	// (0x00008206) grid_toolbar2_float_pane

0x0024,	// (0x00000024) bg_popup_sub_pane_cp26

0x8206,	// (0x00008206) grid_toolbar2_fixed_pane

0xdf29,	// (0x0000df29) cell_toolbar2_fixed_pane_ParamLimits

0xdf29,	// (0x0000df29) cell_toolbar2_fixed_pane

0xdf43,	// (0x0000df43) cell_toolbar2_fixed_pane_g1

0x8227,	// (0x00008227) toolbar2_fixed_button_pane

0x36f5,	// (0x000036f5) toolbar2_fixed_button_pane_g1

0x36fd,	// (0x000036fd) toolbar2_fixed_button_pane_g2

0x3705,	// (0x00003705) toolbar2_fixed_button_pane_g3

0x370d,	// (0x0000370d) toolbar2_fixed_button_pane_g4

0x3715,	// (0x00003715) toolbar2_fixed_button_pane_g5

0x371d,	// (0x0000371d) toolbar2_fixed_button_pane_g6

0x3725,	// (0x00003725) toolbar2_fixed_button_pane_g7

0x372d,	// (0x0000372d) toolbar2_fixed_button_pane_g8

0x3735,	// (0x00003735) toolbar2_fixed_button_pane_g9

0x0008,

0xaea6,	// (0x0000aea6) toolbar2_fixed_button_pane_g

0x822f,	// (0x0000822f) cell_toolbar2_float_pane_ParamLimits

0x822f,	// (0x0000822f) cell_toolbar2_float_pane

0x8240,	// (0x00008240) cell_toolbar2_float_pane_g1

0x8227,	// (0x00008227) toolbar2_fixed_button_pane_cp

0xd863,	// (0x0000d863) fep_vkb_accented_list_pane_ParamLimits

0xd863,	// (0x0000d863) fep_vkb_accented_list_pane

0x6e87,	// (0x00006e87) bg_popup_fep_shadow_pane_g9

0x2613,	// (0x00002613) bg_popup_fep_shadow_pane_cp3

0x1667,	// (0x00001667) list_accented_list_pane

0x8249,	// (0x00008249) list_single_accented_list_pane_ParamLimits

0x8249,	// (0x00008249) list_single_accented_list_pane

0x2613,	// (0x00002613) list_highlight_pane_cp10

0x825a,	// (0x0000825a) list_single_accented_list_pane_t1

0xcad4,	// (0x0000cad4) popup_slider_window_ParamLimits

0xcad4,	// (0x0000cad4) popup_slider_window

0x7d38,	// (0x00007d38) aid_indentation_list_msg

0xe03c,	// (0x0000e03c) bg_popup_window_pane_cp19

0x837e,	// (0x0000837e) popup_slider_window_g1

0x839a,	// (0x0000839a) popup_slider_window_g2

0x83b6,	// (0x000083b6) popup_slider_window_g3

0x0005,

0xf474,	// (0x0000f474) popup_slider_window_g

0x8412,	// (0x00008412) popup_slider_window_t1

0x8486,	// (0x00008486) small_volume_slider_vertical_pane

0x66ae,	// (0x000066ae) small_volume_slider_vertical_pane_g1

0x66ae,	// (0x000066ae) small_volume_slider_vertical_pane_g2

0x84a2,	// (0x000084a2) small_volume_slider_vertical_pane_g3

0x0002,

0xb338,	// (0x0000b338) small_volume_slider_vertical_pane_g

0xb60e,	// (0x0000b60e) area_side_right_pane_ParamLimits

0xb60e,	// (0x0000b60e) area_side_right_pane

0xe0f4,	// (0x0000e0f4) aid_size_side_button_ParamLimits

0xe0f4,	// (0x0000e0f4) aid_size_side_button

0xe10d,	// (0x0000e10d) grid_sctrl_middle_pane_ParamLimits

0xe10d,	// (0x0000e10d) grid_sctrl_middle_pane

0x84de,	// (0x000084de) sctrl_sk_bottom_pane

0x84ef,	// (0x000084ef) sctrl_sk_top_pane

0x8501,	// (0x00008501) aid_touch_sctrl_top

0x083b,	// (0x0000083b) bg_sctrl_sk_pane_ParamLimits

0x083b,	// (0x0000083b) bg_sctrl_sk_pane

0x850e,	// (0x0000850e) sctrl_sk_top_pane_g1

0x851b,	// (0x0000851b) sctrl_sk_top_pane_t1

0x8501,	// (0x00008501) aid_touch_sctrl_bottom

0x083b,	// (0x0000083b) bg_sctrl_sk_pane_cp_ParamLimits

0x083b,	// (0x0000083b) bg_sctrl_sk_pane_cp

0x8536,	// (0x00008536) sctrl_sk_bottom_pane_g1

0x851b,	// (0x0000851b) sctrl_sk_bottom_pane_t1

0xe127,	// (0x0000e127) cell_sctrl_middle_pane_ParamLimits

0xe127,	// (0x0000e127) cell_sctrl_middle_pane

0xe138,	// (0x0000e138) aid_touch_sctrl_middle_ParamLimits

0xe138,	// (0x0000e138) aid_touch_sctrl_middle

0xe145,	// (0x0000e145) bg_sctrl_middle_pane_ParamLimits

0xe145,	// (0x0000e145) bg_sctrl_middle_pane

0x85fb,	// (0x000085fb) cell_sctrl_middle_pane_g1_ParamLimits

0x85fb,	// (0x000085fb) cell_sctrl_middle_pane_g1

0xe153,	// (0x0000e153) cell_sctrl_middle_pane_g2_ParamLimits

0xe153,	// (0x0000e153) cell_sctrl_middle_pane_g2

0x0001,

0xf481,	// (0x0000f481) cell_sctrl_middle_pane_g_ParamLimits

0xf481,	// (0x0000f481) cell_sctrl_middle_pane_g

0x36f5,	// (0x000036f5) bg_sctrl_middle_pane_g1

0x36fd,	// (0x000036fd) bg_sctrl_middle_pane_g2

0x3705,	// (0x00003705) bg_sctrl_middle_pane_g3

0x370d,	// (0x0000370d) bg_sctrl_middle_pane_g4

0x3715,	// (0x00003715) bg_sctrl_middle_pane_g5

0x371d,	// (0x0000371d) bg_sctrl_middle_pane_g6

0x3725,	// (0x00003725) bg_sctrl_middle_pane_g7

0x372d,	// (0x0000372d) bg_sctrl_middle_pane_g8

0x0007,

0xb349,	// (0x0000b349) bg_sctrl_middle_pane_g

0x3735,	// (0x00003735) bg_sctrl_middle_pane_g8_copy1

0x36f5,	// (0x000036f5) bg_sctrl_sk_pane_g1

0x36fd,	// (0x000036fd) bg_sctrl_sk_pane_g2

0x3705,	// (0x00003705) bg_sctrl_sk_pane_g3

0x0008,

0xaea6,	// (0x0000aea6) bg_sctrl_sk_pane_g

0x0d50,	// (0x00000d50) aid_size_touch_scroll_bar

0x370d,	// (0x0000370d) bg_sctrl_sk_pane_g4

0x3715,	// (0x00003715) bg_sctrl_sk_pane_g5

0x371d,	// (0x0000371d) bg_sctrl_sk_pane_g6

0x3725,	// (0x00003725) bg_sctrl_sk_pane_g7

0x372d,	// (0x0000372d) bg_sctrl_sk_pane_g8

0x3735,	// (0x00003735) bg_sctrl_sk_pane_g9

0x2c4c,	// (0x00002c4c) popup_fep_china_hwr2_fs_candidate_window

0xc5ee,	// (0x0000c5ee) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xc5ee,	// (0x0000c5ee) popup_fep_china_hwr2_fs_control_window

0x6b40,	// (0x00006b40) sctrl_sk_top_pane_g2

0x0001,

0xb33f,	// (0x0000b33f) sctrl_sk_top_pane_g

0xe15f,	// (0x0000e15f) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe15f,	// (0x0000e15f) aid_fep_china_hwr2_fs_cell

0xe173,	// (0x0000e173) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe173,	// (0x0000e173) bg_popup_fep_shadow_pane_cp4

0xe18a,	// (0x0000e18a) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe18a,	// (0x0000e18a) bg_popup_fep_shadow_pane_cp5

0xe19c,	// (0x0000e19c) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe19c,	// (0x0000e19c) popup_fep_china_hwr2_fs_control_bar_grid

0xe1b0,	// (0x0000e1b0) popup_fep_china_hwr2_fs_control_funtion_grid

0x85cf,	// (0x000085cf) aid_fep_china_hwr2_fs_candi_cell

0x0024,	// (0x00000024) bg_popup_fep_shadow_pane_cp6

0x85d9,	// (0x000085d9) popup_fep_china_hwr2_fs_candidate_grid

0xe1b8,	// (0x0000e1b8) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe1b8,	// (0x0000e1b8) cell_fep_china_hwr2_fs_funtion_grid

0x66ae,	// (0x000066ae) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x85fb,	// (0x000085fb) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x85fb,	// (0x000085fb) cell_fep_china_hwr2_fs_funtion_grid_g1

0x8609,	// (0x00008609) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x8609,	// (0x00008609) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xb35a,	// (0x0000b35a) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xb35a,	// (0x0000b35a) cell_fep_china_hwr2_fs_funtion_grid_g

0xe1d0,	// (0x0000e1d0) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe1d0,	// (0x0000e1d0) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe1e5,	// (0x0000e1e5) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe1e5,	// (0x0000e1e5) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xf486,	// (0x0000f486) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xf486,	// (0x0000f486) cell_fep_china_hwr2_fs_funtion_grid_t

0x8650,	// (0x00008650) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x8658,	// (0x00008658) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x8660,	// (0x00008660) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xb364,	// (0x0000b364) popup_fep_china_hwr2_fs_control_bar_grid_g

0x8668,	// (0x00008668) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x8668,	// (0x00008668) cell_fep_china_hwr2_fs_candidate_grid

0x8681,	// (0x00008681) popup_fep_china_hwr2_fs_candidate_grid_g20

0x8689,	// (0x00008689) popup_fep_china_hwr2_fs_candidate_grid_g21

0x66ae,	// (0x000066ae) cell_fep_china_hwr2_fs_candidate_grid_g1

0x66ae,	// (0x000066ae) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xb184,	// (0x0000b184) cell_fep_china_hwr2_fs_candidate_grid_g

0x8691,	// (0x00008691) cell_fep_china_hwr2_fs_candidate_grid_t1

0x3245,	// (0x00003245) clock_nsta_pane_cp_24_ParamLimits

0x3245,	// (0x00003245) clock_nsta_pane_cp_24

0x32c3,	// (0x000032c3) indicator_nsta_pane_cp_24_ParamLimits

0x32c3,	// (0x000032c3) indicator_nsta_pane_cp_24

0x473c,	// (0x0000473c) heading_pane_g1

0x0001,

0xaf0b,	// (0x0000af0b) heading_pane_g

0x5349,	// (0x00005349) grid_sct_catagory_button_pane

0x5379,	// (0x00005379) scroll_pane_cp5_ParamLimits

0x626b,	// (0x0000626b) button_value_adjust_pane_cp5_ParamLimits

0x626b,	// (0x0000626b) button_value_adjust_pane_cp5

0x6367,	// (0x00006367) form2_midp_time_pane_ParamLimits

0x869f,	// (0x0000869f) cell_sct_catagory_button_pane_ParamLimits

0x869f,	// (0x0000869f) cell_sct_catagory_button_pane

0x6673,	// (0x00006673) bg_button_pane_cp01_ParamLimits

0x6673,	// (0x00006673) bg_button_pane_cp01

0x66ae,	// (0x000066ae) cell_sct_catagory_button_pane_g1

0xcb4d,	// (0x0000cb4d) popup_tb_extension_window

0xe201,	// (0x0000e201) aid_size_cell_ext_ParamLimits

0xe201,	// (0x0000e201) aid_size_cell_ext

0x0b92,	// (0x00000b92) bg_tb_trans_pane_cp1_ParamLimits

0x0b92,	// (0x00000b92) bg_tb_trans_pane_cp1

0xe227,	// (0x0000e227) grid_tb_ext_pane_ParamLimits

0xe227,	// (0x0000e227) grid_tb_ext_pane

0xe262,	// (0x0000e262) cell_tb_ext_pane_ParamLimits

0xe262,	// (0x0000e262) cell_tb_ext_pane

0xe28a,	// (0x0000e28a) cell_tb_ext_pane_g1_ParamLimits

0xe28a,	// (0x0000e28a) cell_tb_ext_pane_g1

0x8733,	// (0x00008733) cell_tb_ext_pane_t1

0x083b,	// (0x0000083b) list_highlight_pane_cp11_ParamLimits

0x083b,	// (0x0000083b) list_highlight_pane_cp11

0xb6b5,	// (0x0000b6b5) popup_uni_indicator_window_ParamLimits

0xb6b5,	// (0x0000b6b5) popup_uni_indicator_window

0x139c,	// (0x0000139c) bg_popup_sub_pane_cp14

0x874e,	// (0x0000874e) list_uniindi_pane

0x875a,	// (0x0000875a) uniindi_top_pane

0x083b,	// (0x0000083b) bg_uniindi_top_pane

0x8779,	// (0x00008779) uniindi_top_pane_g1

0x878f,	// (0x0000878f) uniindi_top_pane_g2

0x0003,

0xb36b,	// (0x0000b36b) uniindi_top_pane_g

0x87b9,	// (0x000087b9) uniindi_top_pane_t1

0x87e3,	// (0x000087e3) list_single_uniindi_pane_ParamLimits

0x87e3,	// (0x000087e3) list_single_uniindi_pane

0x66ae,	// (0x000066ae) bg_uniindi_top_pane_g1

0x87f6,	// (0x000087f6) list_single_uniindi_pane_g1

0x8809,	// (0x00008809) list_single_uniindi_pane_t1

0x0024,	// (0x00000024) control_bg_pane

0x882e,	// (0x0000882e) bg_sctrl_sk_pane_cp1

0x8837,	// (0x00008837) bg_sctrl_sk_pane_cp2

0x8840,	// (0x00008840) control_bg_pane_g1

0x8849,	// (0x00008849) control_bg_pane_g2

0x0001,

0xb374,	// (0x0000b374) control_bg_pane_g

0x6075,	// (0x00006075) cell_indicator_nsta_pane_g1_ParamLimits

0xd670,	// (0x0000d670) cell_indicator_nsta_pane_g2_ParamLimits

0xf3fe,	// (0x0000f3fe) cell_indicator_nsta_pane_g_ParamLimits

0x63ef,	// (0x000063ef) form2_midp_time_pane_t1_ParamLimits

0x670a,	// (0x0000670a) main_idle_act4_pane_ParamLimits

0x670a,	// (0x0000670a) main_idle_act4_pane

0xcb4d,	// (0x0000cb4d) popup_tb_extension_window_ParamLimits

0xe249,	// (0x0000e249) tb_ext_find_pane_ParamLimits

0xe249,	// (0x0000e249) tb_ext_find_pane

0x8852,	// (0x00008852) ai_gene_pane_1_cp1

0x275a,	// (0x0000275a) ai_gene_pane_2_cp1

0x885a,	// (0x0000885a) list_single_idle_plugin_calendar_pane

0x8863,	// (0x00008863) list_single_idle_plugin_notification_pane

0x886c,	// (0x0000886c) list_single_idle_plugin_player_pane

0xe2a7,	// (0x0000e2a7) list_single_idle_plugin_shortcut_pane_ParamLimits

0xe2a7,	// (0x0000e2a7) list_single_idle_plugin_shortcut_pane

0xe2cf,	// (0x0000e2cf) main_idle_act4_pane_t1

0xe2e5,	// (0x0000e2e5) main_idle_act4_pane_t2

0x0001,

0xf48b,	// (0x0000f48b) main_idle_act4_pane_t

0xe2fb,	// (0x0000e2fb) middle_sk_idle_act4_pane_ParamLimits

0xe2fb,	// (0x0000e2fb) middle_sk_idle_act4_pane

0xe317,	// (0x0000e317) popup_clock_digital_analogue_window_cp2

0xe33f,	// (0x0000e33f) shortcut_wheel_idle_act4_pane_ParamLimits

0xe33f,	// (0x0000e33f) shortcut_wheel_idle_act4_pane

0x66ae,	// (0x000066ae) shortcut_wheel_idle_act4_pane_g1

0x66ae,	// (0x000066ae) shortcut_wheel_idle_act4_pane_g2

0x66ae,	// (0x000066ae) shortcut_wheel_idle_act4_pane_g3

0x66ae,	// (0x000066ae) shortcut_wheel_idle_act4_pane_g4

0x66ae,	// (0x000066ae) shortcut_wheel_idle_act4_pane_g5

0x88ff,	// (0x000088ff) shortcut_wheel_idle_act4_pane_g6

0x8907,	// (0x00008907) shortcut_wheel_idle_act4_pane_g7

0x890f,	// (0x0000890f) shortcut_wheel_idle_act4_pane_g8

0x8917,	// (0x00008917) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xb37e,	// (0x0000b37e) shortcut_wheel_idle_act4_pane_g

0x67bf,	// (0x000067bf) middle_sk_idle_act4_pane_g1_ParamLimits

0x67bf,	// (0x000067bf) middle_sk_idle_act4_pane_g1

0xe3bc,	// (0x0000e3bc) middle_sk_idle_act4_pane_g2_ParamLimits

0xe3bc,	// (0x0000e3bc) middle_sk_idle_act4_pane_g2

0x0001,

0xf4a0,	// (0x0000f4a0) middle_sk_idle_act4_pane_g_ParamLimits

0xf4a0,	// (0x0000f4a0) middle_sk_idle_act4_pane_g

0xe3d4,	// (0x0000e3d4) middle_sk_idle_act4_pane_t1_ParamLimits

0xe3d4,	// (0x0000e3d4) middle_sk_idle_act4_pane_t1

0xe403,	// (0x0000e403) grid_ai_shortcut_pane_ParamLimits

0xe403,	// (0x0000e403) grid_ai_shortcut_pane

0xe420,	// (0x0000e420) list_highlight_pane_cp16_ParamLimits

0xe420,	// (0x0000e420) list_highlight_pane_cp16

0xe42d,	// (0x0000e42d) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xe42d,	// (0x0000e42d) list_single_idle_plugin_shortcut_pane_g1

0xe439,	// (0x0000e439) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xe439,	// (0x0000e439) list_single_idle_plugin_shortcut_pane_g2

0xe455,	// (0x0000e455) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xe455,	// (0x0000e455) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xf4a5,	// (0x0000f4a5) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xf4a5,	// (0x0000f4a5) list_single_idle_plugin_shortcut_pane_g

0xe46a,	// (0x0000e46a) cell_ai_shortcut_pane_ParamLimits

0xe46a,	// (0x0000e46a) cell_ai_shortcut_pane

0xe480,	// (0x0000e480) cell_ai_shortcut_pane_g1_ParamLimits

0xe480,	// (0x0000e480) cell_ai_shortcut_pane_g1

0x8852,	// (0x00008852) ai_gene_pane_1_cp2

0x8a47,	// (0x00008a47) ai_gene_pane_2_cp2

0x8a4f,	// (0x00008a4f) list_highlight_pane_cp15

0x8a58,	// (0x00008a58) list_single_idle_plugin_calendar_pane_g1

0x8a4f,	// (0x00008a4f) list_highlight_pane_cp17

0x8a60,	// (0x00008a60) list_single_idle_plugin_calendar_pane_g1_copy1

0x8a68,	// (0x00008a68) list_single_idle_plugin_player_pane_g1

0x565a,	// (0x0000565a) list_single_idle_plugin_player_pane_g2

0x0001,

0xb3ad,	// (0x0000b3ad) list_single_idle_plugin_player_pane_g

0x8a70,	// (0x00008a70) list_single_idle_plugin_player_pane_t1

0x8a7e,	// (0x00008a7e) list_single_idle_plugin_player_pane_t2

0x8a8c,	// (0x00008a8c) list_single_idle_plugin_player_pane_t3

0x8a9a,	// (0x00008a9a) list_single_idle_plugin_player_pane_t4

0x0003,

0xb3b2,	// (0x0000b3b2) list_single_idle_plugin_player_pane_t

0x8aa8,	// (0x00008aa8) wait_bar_pane_cp15

0x8ab0,	// (0x00008ab0) grid_ai_notification_pane

0x565a,	// (0x0000565a) list_single_idle_plugin_notification_pane_g1

0xe4a2,	// (0x0000e4a2) cell_ai_notification_pane_ParamLimits

0xe4a2,	// (0x0000e4a2) cell_ai_notification_pane

0x8ac6,	// (0x00008ac6) cell_ai_notification_pane_g1

0x8ace,	// (0x00008ace) cell_ai_notification_pane_t1

0xe4af,	// (0x0000e4af) tb_ext_find_button_pane

0xe4b7,	// (0x0000e4b7) tb_ext_find_pane_g1

0xe4bf,	// (0x0000e4bf) tb_ext_find_pane_t1

0x1d59,	// (0x00001d59) tb_ext_find_button_pane_g1

0x8afa,	// (0x00008afa) tb_ext_find_button_pane_g2

0x0001,

0xb3bb,	// (0x0000b3bb) tb_ext_find_button_pane_g

0xe2cf,	// (0x0000e2cf) main_idle_act4_pane_t1_ParamLimits

0xe2e5,	// (0x0000e2e5) main_idle_act4_pane_t2_ParamLimits

0xf48b,	// (0x0000f48b) main_idle_act4_pane_t_ParamLimits

0xe317,	// (0x0000e317) popup_clock_digital_analogue_window_cp2_ParamLimits

0xe32f,	// (0x0000e32f) sat_plugin_idle_act4_pane_ParamLimits

0xe32f,	// (0x0000e32f) sat_plugin_idle_act4_pane

0xe4cd,	// (0x0000e4cd) sat_plugin_idle_act4_pane_t1_ParamLimits

0xe4cd,	// (0x0000e4cd) sat_plugin_idle_act4_pane_t1

0xe4e5,	// (0x0000e4e5) sat_plugin_idle_act4_pane_t2_ParamLimits

0xe4e5,	// (0x0000e4e5) sat_plugin_idle_act4_pane_t2

0xe4fd,	// (0x0000e4fd) sat_plugin_idle_act4_pane_t3_ParamLimits

0xe4fd,	// (0x0000e4fd) sat_plugin_idle_act4_pane_t3

0xe515,	// (0x0000e515) sat_plugin_idle_act4_pane_t4_ParamLimits

0xe515,	// (0x0000e515) sat_plugin_idle_act4_pane_t4

0x0003,

0xf4ac,	// (0x0000f4ac) sat_plugin_idle_act4_pane_t_ParamLimits

0xf4ac,	// (0x0000f4ac) sat_plugin_idle_act4_pane_t

0x029d,	// (0x0000029d) popup_battery_window_ParamLimits

0x029d,	// (0x0000029d) popup_battery_window

0x083b,	// (0x0000083b) bg_popup_sub_pane_cp25_ParamLimits

0x083b,	// (0x0000083b) bg_popup_sub_pane_cp25

0x8b4f,	// (0x00008b4f) popup_battery_window_g1_ParamLimits

0x8b4f,	// (0x00008b4f) popup_battery_window_g1

0x8b5b,	// (0x00008b5b) popup_battery_window_t1_ParamLimits

0x8b5b,	// (0x00008b5b) popup_battery_window_t1

0x8b6d,	// (0x00008b6d) popup_battery_window_t2_ParamLimits

0x8b6d,	// (0x00008b6d) popup_battery_window_t2

0x0001,

0xb3c9,	// (0x0000b3c9) popup_battery_window_t_ParamLimits

0xb3c9,	// (0x0000b3c9) popup_battery_window_t

0xc261,	// (0x0000c261) midp_canvas_pane_ParamLimits

0xc2be,	// (0x0000c2be) midp_keypad_pane_ParamLimits

0xc2be,	// (0x0000c2be) midp_keypad_pane

0x2ba0,	// (0x00002ba0) main_midp_pane_ParamLimits

0x60de,	// (0x000060de) signal_pane_g2_cp_ParamLimits

0xe52d,	// (0x0000e52d) aid_size_cell_midp_keypad_ParamLimits

0xe52d,	// (0x0000e52d) aid_size_cell_midp_keypad

0xe54b,	// (0x0000e54b) midp_keyp_game_grid_pane_ParamLimits

0xe54b,	// (0x0000e54b) midp_keyp_game_grid_pane

0xe572,	// (0x0000e572) midp_keyp_rocker_pane_ParamLimits

0xe572,	// (0x0000e572) midp_keyp_rocker_pane

0xe5c3,	// (0x0000e5c3) midp_keyp_sk_left_pane_ParamLimits

0xe5c3,	// (0x0000e5c3) midp_keyp_sk_left_pane

0xe617,	// (0x0000e617) midp_keyp_sk_right_pane_ParamLimits

0xe617,	// (0x0000e617) midp_keyp_sk_right_pane

0x0024,	// (0x00000024) bg_button_pane_cp03

0xe66b,	// (0x0000e66b) midp_keyp_sk_left_pane_g1

0x0024,	// (0x00000024) bg_button_pane_cp04

0xe66b,	// (0x0000e66b) midp_keyp_sk_right_pane_g1

0x66ae,	// (0x000066ae) midp_keyp_rocker_pane_g1

0xe674,	// (0x0000e674) keyp_game_cell_pane_ParamLimits

0xe674,	// (0x0000e674) keyp_game_cell_pane

0x0024,	// (0x00000024) bg_button_pane_cp02

0xe698,	// (0x0000e698) keyp_game_cell_pane_g1

0xb650,	// (0x0000b650) popup_fep_vkb2_window_ParamLimits

0xb650,	// (0x0000b650) popup_fep_vkb2_window

0xe6a1,	// (0x0000e6a1) aid_size_cell_vkb2_ParamLimits

0xe6a1,	// (0x0000e6a1) aid_size_cell_vkb2

0xe6d7,	// (0x0000e6d7) popup_fep_vkb2_window_g1_ParamLimits

0xe6d7,	// (0x0000e6d7) popup_fep_vkb2_window_g1

0xe727,	// (0x0000e727) vkb2_area_bottom_pane_ParamLimits

0xe727,	// (0x0000e727) vkb2_area_bottom_pane

0xe77b,	// (0x0000e77b) vkb2_area_keypad_pane_ParamLimits

0xe77b,	// (0x0000e77b) vkb2_area_keypad_pane

0xe7c3,	// (0x0000e7c3) vkb2_area_top_pane_ParamLimits

0xe7c3,	// (0x0000e7c3) vkb2_area_top_pane

0xe849,	// (0x0000e849) vkb2_top_entry_pane_ParamLimits

0xe849,	// (0x0000e849) vkb2_top_entry_pane

0xe876,	// (0x0000e876) vkb2_top_grid_left_pane_ParamLimits

0xe876,	// (0x0000e876) vkb2_top_grid_left_pane

0xe896,	// (0x0000e896) vkb2_top_grid_right_pane_ParamLimits

0xe896,	// (0x0000e896) vkb2_top_grid_right_pane

0x8eee,	// (0x00008eee) vkb2_cell_keypad_pane_ParamLimits

0x8eee,	// (0x00008eee) vkb2_cell_keypad_pane

0xe8dc,	// (0x0000e8dc) vkb2_area_bottom_grid_pane_ParamLimits

0xe8dc,	// (0x0000e8dc) vkb2_area_bottom_grid_pane

0xe906,	// (0x0000e906) vkb2_area_bottom_pane_g1_ParamLimits

0xe906,	// (0x0000e906) vkb2_area_bottom_pane_g1

0xe92c,	// (0x0000e92c) vkb2_area_bottom_pane_g2_ParamLimits

0xe92c,	// (0x0000e92c) vkb2_area_bottom_pane_g2

0xe95d,	// (0x0000e95d) vkb2_area_bottom_pane_g3_ParamLimits

0xe95d,	// (0x0000e95d) vkb2_area_bottom_pane_g3

0x0002,

0xf4b5,	// (0x0000f4b5) vkb2_area_bottom_pane_g_ParamLimits

0xf4b5,	// (0x0000f4b5) vkb2_area_bottom_pane_g

0x9098,	// (0x00009098) vkb2_top_cell_left_pane_ParamLimits

0x9098,	// (0x00009098) vkb2_top_cell_left_pane

0xe9c7,	// (0x0000e9c7) vkb2_top_entry_pane_g1_ParamLimits

0xe9c7,	// (0x0000e9c7) vkb2_top_entry_pane_g1

0xe9d5,	// (0x0000e9d5) vkb2_top_entry_pane_t1_ParamLimits

0xe9d5,	// (0x0000e9d5) vkb2_top_entry_pane_t1

0x9100,	// (0x00009100) vkb2_top_entry_pane_t2_ParamLimits

0x9100,	// (0x00009100) vkb2_top_entry_pane_t2

0x9132,	// (0x00009132) vkb2_top_entry_pane_t3_ParamLimits

0x9132,	// (0x00009132) vkb2_top_entry_pane_t3

0x0002,

0xf4bc,	// (0x0000f4bc) vkb2_top_entry_pane_t_ParamLimits

0xf4bc,	// (0x0000f4bc) vkb2_top_entry_pane_t

0xea0e,	// (0x0000ea0e) vkb2_top_grid_right_pane_g1_ParamLimits

0xea0e,	// (0x0000ea0e) vkb2_top_grid_right_pane_g1

0x9199,	// (0x00009199) vkb2_top_grid_right_pane_g2_ParamLimits

0x9199,	// (0x00009199) vkb2_top_grid_right_pane_g2

0x91b1,	// (0x000091b1) vkb2_top_grid_right_pane_g3_ParamLimits

0x91b1,	// (0x000091b1) vkb2_top_grid_right_pane_g3

0xea24,	// (0x0000ea24) vkb2_top_grid_right_pane_g4_ParamLimits

0xea24,	// (0x0000ea24) vkb2_top_grid_right_pane_g4

0x0003,

0xf4c3,	// (0x0000f4c3) vkb2_top_grid_right_pane_g_ParamLimits

0xf4c3,	// (0x0000f4c3) vkb2_top_grid_right_pane_g

0x91df,	// (0x000091df) vkb2_top_cell_left_pane_g1

0x91f6,	// (0x000091f6) vkb2_cell_keypad_pane_g1_ParamLimits

0x91f6,	// (0x000091f6) vkb2_cell_keypad_pane_g1

0x9204,	// (0x00009204) vkb2_cell_keypad_pane_t1_ParamLimits

0x9204,	// (0x00009204) vkb2_cell_keypad_pane_t1

0x921b,	// (0x0000921b) vkb2_cell_bottom_grid_pane_ParamLimits

0x921b,	// (0x0000921b) vkb2_cell_bottom_grid_pane

0x9254,	// (0x00009254) vkb2_cell_bottom_grid_pane_g1

0xe360,	// (0x0000e360) aid_call2_pane_cp02

0xe368,	// (0x0000e368) aid_call_pane_cp02

0xe370,	// (0x0000e370) clock_digital_number_pane_cp10

0xe378,	// (0x0000e378) clock_digital_number_pane_cp11

0xe380,	// (0x0000e380) clock_digital_number_pane_cp12

0xe388,	// (0x0000e388) clock_digital_number_pane_cp13

0xe390,	// (0x0000e390) clock_digital_separator_pane_cp10

0x1d59,	// (0x00001d59) popup_clock_digital_analogue_window_cp2_g1

0x1d59,	// (0x00001d59) popup_clock_digital_analogue_window_cp2_g2

0xe398,	// (0x0000e398) popup_clock_digital_analogue_window_cp2_g3

0x1d59,	// (0x00001d59) popup_clock_digital_analogue_window_cp2_g4

0xe398,	// (0x0000e398) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xf490,	// (0x0000f490) popup_clock_digital_analogue_window_cp2_g

0xe3a0,	// (0x0000e3a0) popup_clock_digital_analogue_window_cp2_t1

0xe3ae,	// (0x0000e3ae) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xf49b,	// (0x0000f49b) popup_clock_digital_analogue_window_cp2_t

0x66ae,	// (0x000066ae) clock_digital_number_pane_cp10_g1

0x66ae,	// (0x000066ae) clock_digital_number_pane_cp10_g2

0x0001,

0xb184,	// (0x0000b184) clock_digital_number_pane_cp10_g

0x66ae,	// (0x000066ae) clock_digital_separator_pane_cp10_g1

0x66ae,	// (0x000066ae) clock_digital_separator_pane_cp10_g2

0x0001,

0xb184,	// (0x0000b184) clock_digital_separator_pane_cp10_g

0x879b,	// (0x0000879b) uniindi_top_pane_g3

0x87ac,	// (0x000087ac) uniindi_top_pane_g4

0x8f79,	// (0x00008f79) vkb2_row_keypad_pane_ParamLimits

0x8f79,	// (0x00008f79) vkb2_row_keypad_pane

0x9270,	// (0x00009270) vkb2_cell_t_keypad_pane_ParamLimits

0x9270,	// (0x00009270) vkb2_cell_t_keypad_pane

0x9280,	// (0x00009280) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x9280,	// (0x00009280) vkb2_cell_t_keypad_pane_cp08

0x9293,	// (0x00009293) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x9293,	// (0x00009293) vkb2_cell_t_keypad_pane_cp09

0x92a7,	// (0x000092a7) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x92a7,	// (0x000092a7) vkb2_cell_t_keypad_pane_cp01

0x92b8,	// (0x000092b8) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x92b8,	// (0x000092b8) vkb2_cell_t_keypad_pane_cp02

0x92c9,	// (0x000092c9) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x92c9,	// (0x000092c9) vkb2_cell_t_keypad_pane_cp03

0x92da,	// (0x000092da) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x92da,	// (0x000092da) vkb2_cell_t_keypad_pane_cp04

0x92eb,	// (0x000092eb) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x92eb,	// (0x000092eb) vkb2_cell_t_keypad_pane_cp05

0x92fc,	// (0x000092fc) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x92fc,	// (0x000092fc) vkb2_cell_t_keypad_pane_cp06

0x930d,	// (0x0000930d) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x930d,	// (0x0000930d) vkb2_cell_t_keypad_pane_cp07

0x931e,	// (0x0000931e) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x931e,	// (0x0000931e) vkb2_cell_t_keypad_pane_cp10

0x6b40,	// (0x00006b40) vkb2_cell_t_keypad_pane_g1

0x9333,	// (0x00009333) vkb2_cell_t_keypad_pane_t1

0x0024,	// (0x00000024) popup_grid_graphic2_window

0xea3a,	// (0x0000ea3a) aid_size_cell_graphic2_ParamLimits

0xea3a,	// (0x0000ea3a) aid_size_cell_graphic2

0xea78,	// (0x0000ea78) bg_popup_window_pane_cp21_ParamLimits

0xea78,	// (0x0000ea78) bg_popup_window_pane_cp21

0xea86,	// (0x0000ea86) graphic2_pages_pane_ParamLimits

0xea86,	// (0x0000ea86) graphic2_pages_pane

0xeadc,	// (0x0000eadc) grid_graphic2_control_pane_ParamLimits

0xeadc,	// (0x0000eadc) grid_graphic2_control_pane

0xeb24,	// (0x0000eb24) grid_graphic2_pane_ParamLimits

0xeb24,	// (0x0000eb24) grid_graphic2_pane

0xebab,	// (0x0000ebab) cell_graphic2_pane

0x0024,	// (0x00000024) main_comp_mode_pane

0x7ee7,	// (0x00007ee7) list_ai3_gene_pane_ParamLimits

0xe03c,	// (0x0000e03c) bg_popup_window_pane_cp19_ParamLimits

0x8320,	// (0x00008320) bg_touch_area_indi_pane_ParamLimits

0x8320,	// (0x00008320) bg_touch_area_indi_pane

0x8336,	// (0x00008336) bg_touch_area_indi_pane_cp01_ParamLimits

0x8336,	// (0x00008336) bg_touch_area_indi_pane_cp01

0x834c,	// (0x0000834c) bg_touch_area_indi_pane_cp02_ParamLimits

0x834c,	// (0x0000834c) bg_touch_area_indi_pane_cp02

0x8364,	// (0x00008364) bg_touch_area_indi_pane_cp03_ParamLimits

0x8364,	// (0x00008364) bg_touch_area_indi_pane_cp03

0x837e,	// (0x0000837e) popup_slider_window_g1_ParamLimits

0x839a,	// (0x0000839a) popup_slider_window_g2_ParamLimits

0x83b6,	// (0x000083b6) popup_slider_window_g3_ParamLimits

0xf474,	// (0x0000f474) popup_slider_window_g_ParamLimits

0x8412,	// (0x00008412) popup_slider_window_t1_ParamLimits

0x8486,	// (0x00008486) small_volume_slider_vertical_pane_ParamLimits

0xebab,	// (0x0000ebab) cell_graphic2_pane_ParamLimits

0xec06,	// (0x0000ec06) bg_button_pane_cp10_ParamLimits

0xec06,	// (0x0000ec06) bg_button_pane_cp10

0xec19,	// (0x0000ec19) bg_button_pane_cp11_ParamLimits

0xec19,	// (0x0000ec19) bg_button_pane_cp11

0xec2c,	// (0x0000ec2c) graphic2_pages_pane_g1_ParamLimits

0xec2c,	// (0x0000ec2c) graphic2_pages_pane_g1

0xec47,	// (0x0000ec47) graphic2_pages_pane_g2_ParamLimits

0xec47,	// (0x0000ec47) graphic2_pages_pane_g2

0x0001,

0xf4d1,	// (0x0000f4d1) graphic2_pages_pane_g_ParamLimits

0xf4d1,	// (0x0000f4d1) graphic2_pages_pane_g

0xec5f,	// (0x0000ec5f) graphic2_pages_pane_t1_ParamLimits

0xec5f,	// (0x0000ec5f) graphic2_pages_pane_t1

0xec77,	// (0x0000ec77) cell_graphic2_control_pane_ParamLimits

0xec77,	// (0x0000ec77) cell_graphic2_control_pane

0xeca9,	// (0x0000eca9) cell_graphic2_pane_g1_ParamLimits

0xeca9,	// (0x0000eca9) cell_graphic2_pane_g1

0x695a,	// (0x0000695a) cell_graphic2_pane_g2_ParamLimits

0x695a,	// (0x0000695a) cell_graphic2_pane_g2

0xecb6,	// (0x0000ecb6) cell_graphic2_pane_g3_ParamLimits

0xecb6,	// (0x0000ecb6) cell_graphic2_pane_g3

0x6967,	// (0x00006967) cell_graphic2_pane_g4_ParamLimits

0x6967,	// (0x00006967) cell_graphic2_pane_g4

0xecc3,	// (0x0000ecc3) cell_graphic2_pane_g5_ParamLimits

0xecc3,	// (0x0000ecc3) cell_graphic2_pane_g5

0x0004,

0xf4d6,	// (0x0000f4d6) cell_graphic2_pane_g_ParamLimits

0xf4d6,	// (0x0000f4d6) cell_graphic2_pane_g

0xece3,	// (0x0000ece3) cell_graphic2_pane_t1_ParamLimits

0xece3,	// (0x0000ece3) cell_graphic2_pane_t1

0x4730,	// (0x00004730) grid_highlight_pane_cp11_ParamLimits

0x4730,	// (0x00004730) grid_highlight_pane_cp11

0x083b,	// (0x0000083b) bg_button_pane_cp05

0xed2c,	// (0x0000ed2c) cell_graphic2_control_pane_g1

0x66ae,	// (0x000066ae) bg_touch_area_indi_pane_g1

0x960f,	// (0x0000960f) aid_cmod_rocker_key_size

0x9619,	// (0x00009619) aid_cmode_itu_key_size

0x9623,	// (0x00009623) main_cmode_video_pane

0x962d,	// (0x0000962d) main_comp_mode_itu_pane

0x9639,	// (0x00009639) main_comp_mode_rocker_pane

0x9645,	// (0x00009645) cell_cmode_rocker_pane_ParamLimits

0x9645,	// (0x00009645) cell_cmode_rocker_pane

0x9657,	// (0x00009657) cell_cmode_itu_pane_ParamLimits

0x9657,	// (0x00009657) cell_cmode_itu_pane

0x139c,	// (0x0000139c) bg_button_pane_cp06_ParamLimits

0x139c,	// (0x0000139c) bg_button_pane_cp06

0x6b40,	// (0x00006b40) cell_cmode_rocker_pane_g1_ParamLimits

0x6b40,	// (0x00006b40) cell_cmode_rocker_pane_g1

0x85fb,	// (0x000085fb) cell_cmode_rocker_pane_g2_ParamLimits

0x85fb,	// (0x000085fb) cell_cmode_rocker_pane_g2

0x0001,

0xb3ff,	// (0x0000b3ff) cell_cmode_rocker_pane_g_ParamLimits

0xb3ff,	// (0x0000b3ff) cell_cmode_rocker_pane_g

0x0024,	// (0x00000024) bg_button_pane_cp07

0x966c,	// (0x0000966c) cell_cmode_itu_pane_g1

0x9675,	// (0x00009675) cell_cmode_itu_pane_t1

0x9683,	// (0x00009683) cell_cmode_itu_pane_t2

0x0001,

0xb404,	// (0x0000b404) cell_cmode_itu_pane_t

0x881e,	// (0x0000881e) aid_touch_ctrl_left

0x8826,	// (0x00008826) aid_touch_ctrl_right

0x0024,	// (0x00000024) compa_mode_pane

0xed50,	// (0x0000ed50) aid_cmod_rocker_key_size_cp

0xed5a,	// (0x0000ed5a) aid_cmode_itu_key_size_cp

0x96a5,	// (0x000096a5) compa_mode_pane_g1

0x96ad,	// (0x000096ad) compa_mode_pane_g2

0x96b5,	// (0x000096b5) compa_mode_pane_g3

0x0002,

0xb409,	// (0x0000b409) compa_mode_pane_g

0xed64,	// (0x0000ed64) main_comp_mode_itu_pane_cp

0xed6c,	// (0x0000ed6c) main_comp_mode_rocker_pane_cp

0xed74,	// (0x0000ed74) cell_cmode_itu_pane_cp_ParamLimits

0xed74,	// (0x0000ed74) cell_cmode_itu_pane_cp

0xed89,	// (0x0000ed89) cell_cmode_rocker_pane_cp_ParamLimits

0xed89,	// (0x0000ed89) cell_cmode_rocker_pane_cp

0x139c,	// (0x0000139c) bg_button_pane_cp06_cp_ParamLimits

0x139c,	// (0x0000139c) bg_button_pane_cp06_cp

0x6b40,	// (0x00006b40) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x6b40,	// (0x00006b40) cell_cmode_rocker_pane_g1_cp

0x66ae,	// (0x000066ae) cell_cmode_rocker_pane_g2_cp

0x0024,	// (0x00000024) bg_button_pane_cp07_cp

0xed9b,	// (0x0000ed9b) cell_cmode_itu_pane_g1_cp

0xeda4,	// (0x0000eda4) cell_cmode_itu_pane_t1_cp

0xeda4,	// (0x0000eda4) cell_cmode_itu_pane_t2_cp

0xd42e,	// (0x0000d42e) settings_code_pane_cp2

0x0507,	// (0x00000507) bg_popup_window_pane_cp3_ParamLimits

0x0a15,	// (0x00000a15) heading_pane_cp3_ParamLimits

0x0a21,	// (0x00000a21) listscroll_popup_graphic_pane_ParamLimits

0x6718,	// (0x00006718) fep_hwr_aid_pane_ParamLimits

0x8501,	// (0x00008501) aid_touch_sctrl_top_ParamLimits

0x850e,	// (0x0000850e) sctrl_sk_top_pane_g1_ParamLimits

0x6b40,	// (0x00006b40) sctrl_sk_top_pane_g2_ParamLimits

0xb33f,	// (0x0000b33f) sctrl_sk_top_pane_g_ParamLimits

0x851b,	// (0x0000851b) sctrl_sk_top_pane_t1_ParamLimits

0x8501,	// (0x00008501) aid_touch_sctrl_bottom_ParamLimits

0x851b,	// (0x0000851b) sctrl_sk_bottom_pane_t1_ParamLimits

0x8767,	// (0x00008767) aid_area_touch_clock

0xe80b,	// (0x0000e80b) aid_vkb2_area_top_pane_cell_ParamLimits

0xe80b,	// (0x0000e80b) aid_vkb2_area_top_pane_cell

0xe8b6,	// (0x0000e8b6) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xe8b6,	// (0x0000e8b6) aid_vkb2_area_bottom_pane_cell

0x90b8,	// (0x000090b8) popup_char_count_window

0x9702,	// (0x00009702) popup_char_count_window_g1

0x970b,	// (0x0000970b) popup_char_count_window_g2

0x9714,	// (0x00009714) popup_char_count_window_g3

0x0002,

0xb410,	// (0x0000b410) popup_char_count_window_g

0x971d,	// (0x0000971d) popup_char_count_window_t1

0x8d16,	// (0x00008d16) popup_fep_char_preview_window_ParamLimits

0x8d16,	// (0x00008d16) popup_fep_char_preview_window

0xe82b,	// (0x0000e82b) vkb2_top_candi_pane_ParamLimits

0xe82b,	// (0x0000e82b) vkb2_top_candi_pane

0xedb2,	// (0x0000edb2) cell_vkb2_top_candi_pane_ParamLimits

0xedb2,	// (0x0000edb2) cell_vkb2_top_candi_pane

0x3f69,	// (0x00003f69) bg_popup_fep_char_preview_window_ParamLimits

0x3f69,	// (0x00003f69) bg_popup_fep_char_preview_window

0x9778,	// (0x00009778) popup_fep_char_preview_window_t1_ParamLimits

0x9778,	// (0x00009778) popup_fep_char_preview_window_t1

0x97b2,	// (0x000097b2) bg_popup_fep_char_preview_window_g1

0x97ba,	// (0x000097ba) bg_popup_fep_char_preview_window_g2

0x97c2,	// (0x000097c2) bg_popup_fep_char_preview_window_g3

0x97ca,	// (0x000097ca) bg_popup_fep_char_preview_window_g4

0x97d2,	// (0x000097d2) bg_popup_fep_char_preview_window_g5

0x97da,	// (0x000097da) bg_popup_fep_char_preview_window_g6

0x97e2,	// (0x000097e2) bg_popup_fep_char_preview_window_g7

0x97ea,	// (0x000097ea) bg_popup_fep_char_preview_window_g8

0x97f2,	// (0x000097f2) bg_popup_fep_char_preview_window_g9

0x0008,

0xb417,	// (0x0000b417) bg_popup_fep_char_preview_window_g

0x6b40,	// (0x00006b40) cell_vkb2_top_candi_pane_g1_ParamLimits

0x6b40,	// (0x00006b40) cell_vkb2_top_candi_pane_g1

0x6eab,	// (0x00006eab) cell_vkb2_top_candi_pane_g2_ParamLimits

0x6eab,	// (0x00006eab) cell_vkb2_top_candi_pane_g2

0x6ecc,	// (0x00006ecc) cell_vkb2_top_candi_pane_g3_ParamLimits

0x6ecc,	// (0x00006ecc) cell_vkb2_top_candi_pane_g3

0x97fa,	// (0x000097fa) cell_vkb2_top_candi_pane_g4_ParamLimits

0x97fa,	// (0x000097fa) cell_vkb2_top_candi_pane_g4

0x981b,	// (0x0000981b) cell_vkb2_top_candi_pane_g5_ParamLimits

0x981b,	// (0x0000981b) cell_vkb2_top_candi_pane_g5

0x85fb,	// (0x000085fb) cell_vkb2_top_candi_pane_g6_ParamLimits

0x85fb,	// (0x000085fb) cell_vkb2_top_candi_pane_g6

0x0005,

0xb42a,	// (0x0000b42a) cell_vkb2_top_candi_pane_g_ParamLimits

0xb42a,	// (0x0000b42a) cell_vkb2_top_candi_pane_g

0x983c,	// (0x0000983c) cell_vkb2_top_candi_pane_t1

0x4e53,	// (0x00004e53) aid_size_touch_slider_mark_ParamLimits

0x4e53,	// (0x00004e53) aid_size_touch_slider_mark

0xeac2,	// (0x0000eac2) grid_graphic2_catg_pane_ParamLimits

0xeac2,	// (0x0000eac2) grid_graphic2_catg_pane

0xeb7e,	// (0x0000eb7e) popup_grid_graphic2_window_t1_ParamLimits

0xeb7e,	// (0x0000eb7e) popup_grid_graphic2_window_t1

0xeb94,	// (0x0000eb94) popup_grid_graphic2_window_t2_ParamLimits

0xeb94,	// (0x0000eb94) popup_grid_graphic2_window_t2

0x0001,

0xf4cc,	// (0x0000f4cc) popup_grid_graphic2_window_t_ParamLimits

0xf4cc,	// (0x0000f4cc) popup_grid_graphic2_window_t

0x083b,	// (0x0000083b) bg_button_pane_cp05_ParamLimits

0xed2c,	// (0x0000ed2c) cell_graphic2_control_pane_g1_ParamLimits

0xee18,	// (0x0000ee18) cell_graphic2_catg_pane_ParamLimits

0xee18,	// (0x0000ee18) cell_graphic2_catg_pane

0x0024,	// (0x00000024) bg_button_pane_cp12

0xee2a,	// (0x0000ee2a) cell_graphic2_catg_pane_g1

0x8733,	// (0x00008733) cell_tb_ext_pane_t1_ParamLimits

0x9156,	// (0x00009156) vkb2_top_cell_right_narrow_pane_ParamLimits

0x9156,	// (0x00009156) vkb2_top_cell_right_narrow_pane

0x916e,	// (0x0000916e) vkb2_top_cell_right_wide_pane_ParamLimits

0x916e,	// (0x0000916e) vkb2_top_cell_right_wide_pane

0x670a,	// (0x0000670a) bg_vkb2_func_pane_ParamLimits

0x670a,	// (0x0000670a) bg_vkb2_func_pane

0x91df,	// (0x000091df) vkb2_top_cell_left_pane_g1_ParamLimits

0x670a,	// (0x0000670a) bg_vkb2_fuc_pane_cp03_ParamLimits

0x670a,	// (0x0000670a) bg_vkb2_fuc_pane_cp03

0x9254,	// (0x00009254) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x36fd,	// (0x000036fd) bg_vkb2_func_pane_g1

0x3705,	// (0x00003705) bg_vkb2_func_pane_g2

0x3715,	// (0x00003715) bg_vkb2_func_pane_g3

0x370d,	// (0x0000370d) bg_vkb2_func_pane_g4

0x371d,	// (0x0000371d) bg_vkb2_func_pane_g5

0x3725,	// (0x00003725) bg_vkb2_func_pane_g6

0x372d,	// (0x0000372d) bg_vkb2_func_pane_g7

0x3735,	// (0x00003735) bg_vkb2_func_pane_g8

0x36f5,	// (0x000036f5) bg_vkb2_func_pane_g9

0x0008,

0xb437,	// (0x0000b437) bg_vkb2_func_pane_g

0x670a,	// (0x0000670a) bg_vkb2_fuc_pane_cp01_ParamLimits

0x670a,	// (0x0000670a) bg_vkb2_fuc_pane_cp01

0x91df,	// (0x000091df) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x91df,	// (0x000091df) vkb2_top_cell_right_wide_pane_g1

0x670a,	// (0x0000670a) bg_vkb2_fuc_pane_cp02_ParamLimits

0x670a,	// (0x0000670a) bg_vkb2_fuc_pane_cp02

0x9254,	// (0x00009254) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x9254,	// (0x00009254) vkb2_top_cell_right_narrow_pane_g1

0xdf7c,	// (0x0000df7c) aid_touch_area_decrease_ParamLimits

0xdf7c,	// (0x0000df7c) aid_touch_area_decrease

0xdfb0,	// (0x0000dfb0) aid_touch_area_increase_ParamLimits

0xdfb0,	// (0x0000dfb0) aid_touch_area_increase

0xdfd8,	// (0x0000dfd8) aid_touch_area_mute_ParamLimits

0xdfd8,	// (0x0000dfd8) aid_touch_area_mute

0xe008,	// (0x0000e008) aid_touch_area_slider_ParamLimits

0xe008,	// (0x0000e008) aid_touch_area_slider

0xe048,	// (0x0000e048) popup_slider_window_g4_ParamLimits

0xe048,	// (0x0000e048) popup_slider_window_g4

0xe070,	// (0x0000e070) popup_slider_window_g5_ParamLimits

0xe070,	// (0x0000e070) popup_slider_window_g5

0xe0a4,	// (0x0000e0a4) popup_slider_window_g6_ParamLimits

0xe0a4,	// (0x0000e0a4) popup_slider_window_g6

0x8440,	// (0x00008440) popup_slider_window_t2_ParamLimits

0x8440,	// (0x00008440) popup_slider_window_t2

0x0001,

0xb333,	// (0x0000b333) popup_slider_window_t_ParamLimits

0xb333,	// (0x0000b333) popup_slider_window_t

0xe0c0,	// (0x0000e0c0) slider_pane_ParamLimits

0xe0c0,	// (0x0000e0c0) slider_pane

0x9876,	// (0x00009876) slider_pane_g1_ParamLimits

0x9876,	// (0x00009876) slider_pane_g1

0x988a,	// (0x0000988a) slider_pane_g2_ParamLimits

0x988a,	// (0x0000988a) slider_pane_g2

0x98a0,	// (0x000098a0) slider_pane_g3_ParamLimits

0x98a0,	// (0x000098a0) slider_pane_g3

0x0003,

0xb44a,	// (0x0000b44a) slider_pane_g_ParamLimits

0xb44a,	// (0x0000b44a) slider_pane_g

0xcb95,	// (0x0000cb95) popup_tb_float_extension_window_ParamLimits

0xcb95,	// (0x0000cb95) popup_tb_float_extension_window

0x98cc,	// (0x000098cc) aid_size_cell_tb_float_ext

0x0024,	// (0x00000024) bg_popup_sub_window_cp28

0x98d8,	// (0x000098d8) grid_tb_float_ext_pane

0x98e2,	// (0x000098e2) cell_tb_float_ext_pane_ParamLimits

0x98e2,	// (0x000098e2) cell_tb_float_ext_pane

0x98fc,	// (0x000098fc) cell_tb_float_ext_pane_g1

0x9905,	// (0x00009905) grid_highlight_pane_cp12

0xd841,	// (0x0000d841) cell_last_hwr_side_pane_ParamLimits

0xd841,	// (0x0000d841) cell_last_hwr_side_pane

0x66ae,	// (0x000066ae) cell_last_hwr_side_pane_g1

0x990e,	// (0x0000990e) cell_last_hwr_side_pane_g2

0x0001,

0xb453,	// (0x0000b453) cell_last_hwr_side_pane_g

0xe992,	// (0x0000e992) vkb2_area_bottom_space_btn_pane_ParamLimits

0xe992,	// (0x0000e992) vkb2_area_bottom_space_btn_pane

0x6b40,	// (0x00006b40) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x9333,	// (0x00009333) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x983c,	// (0x0000983c) cell_vkb2_top_candi_pane_t1_ParamLimits

0x9917,	// (0x00009917) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x9917,	// (0x00009917) vkb2_area_bottom_space_btn_pane_g1

0x9951,	// (0x00009951) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x9951,	// (0x00009951) vkb2_area_bottom_space_btn_pane_g2

0x9987,	// (0x00009987) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x9987,	// (0x00009987) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xb458,	// (0x0000b458) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xb458,	// (0x0000b458) vkb2_area_bottom_space_btn_pane_g

0x67cd,	// (0x000067cd) cel_fep_hwr_func_pane_ParamLimits

0x67cd,	// (0x000067cd) cel_fep_hwr_func_pane

0xd816,	// (0x0000d816) cell_hwr_side_button_pane_ParamLimits

0xd816,	// (0x0000d816) cell_hwr_side_button_pane

0x8767,	// (0x00008767) aid_area_touch_clock_ParamLimits

0x083b,	// (0x0000083b) bg_uniindi_top_pane_ParamLimits

0x8779,	// (0x00008779) uniindi_top_pane_g1_ParamLimits

0x878f,	// (0x0000878f) uniindi_top_pane_g2_ParamLimits

0x879b,	// (0x0000879b) uniindi_top_pane_g3_ParamLimits

0x87ac,	// (0x000087ac) uniindi_top_pane_g4_ParamLimits

0xb36b,	// (0x0000b36b) uniindi_top_pane_g_ParamLimits

0x87b9,	// (0x000087b9) uniindi_top_pane_t1_ParamLimits

0x083b,	// (0x0000083b) bg_vkb2_func_pane_cp01_ParamLimits

0x083b,	// (0x0000083b) bg_vkb2_func_pane_cp01

0x99d1,	// (0x000099d1) cel_fep_hwr_func_pane_g1_ParamLimits

0x99d1,	// (0x000099d1) cel_fep_hwr_func_pane_g1

0x083b,	// (0x0000083b) bg_vkb2_func_pane_cp02_ParamLimits

0x083b,	// (0x0000083b) bg_vkb2_func_pane_cp02

0x99d1,	// (0x000099d1) cell_hwr_side_button_pane_g1_ParamLimits

0x99d1,	// (0x000099d1) cell_hwr_side_button_pane_g1

0x34d0,	// (0x000034d0) status_pane_g4_ParamLimits

0x34d0,	// (0x000034d0) status_pane_g4

0x34ea,	// (0x000034ea) status_pane_t1

0x6402,	// (0x00006402) form2_midp_gauge_slider_cont_pane

0x640a,	// (0x0000640a) form2_midp_gauge_slider_pane_t1_ParamLimits

0xd76f,	// (0x0000d76f) form2_midp_gauge_slider_pane_t2_ParamLimits

0xd781,	// (0x0000d781) form2_midp_gauge_slider_pane_t3_ParamLimits

0xf418,	// (0x0000f418) form2_midp_gauge_slider_pane_t_ParamLimits

0x6440,	// (0x00006440) form2_midp_slider_pane_ParamLimits

0x8cd6,	// (0x00008cd6) aid_size_cell_func_vkb2_ParamLimits

0x8cd6,	// (0x00008cd6) aid_size_cell_func_vkb2

0x98b8,	// (0x000098b8) slider_pane_g4_ParamLimits

0x98b8,	// (0x000098b8) slider_pane_g4

0xee33,	// (0x0000ee33) form2_midp_gauge_slider_pane_t2_cp01

0xee41,	// (0x0000ee41) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xee41,	// (0x0000ee41) form2_midp_gauge_slider_pane_t3_cp01

0x9a0a,	// (0x00009a0a) form2_midp_slider_pane_cp01

0x0024,	// (0x00000024) navi_smil_pane

0x9a3e,	// (0x00009a3e) navi_smil_pane_g1

0x9a46,	// (0x00009a46) navi_smil_pane_t1

0x9a13,	// (0x00009a13) form2_midp_slider_pane_g1

0x9a1c,	// (0x00009a1c) form2_midp_slider_pane_g2

0x9a24,	// (0x00009a24) form2_midp_slider_pane_g3

0x9a13,	// (0x00009a13) form2_midp_slider_pane_g4

0xee5e,	// (0x0000ee5e) form2_midp_slider_pane_g5

0x0004,

0xf4e6,	// (0x0000f4e6) form2_midp_slider_pane_g

0x99c1,	// (0x000099c1) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x99c1,	// (0x000099c1) vkb2_area_bottom_space_btn_pane_g4

0xcd78,	// (0x0000cd78) lc0_navi_pane_ParamLimits

0xcd78,	// (0x0000cd78) lc0_navi_pane

0xcde2,	// (0x0000cde2) lc0_stat_indi_pane_ParamLimits

0xcde2,	// (0x0000cde2) lc0_stat_indi_pane

0xcdf7,	// (0x0000cdf7) ls0_title_pane_ParamLimits

0xcdf7,	// (0x0000cdf7) ls0_title_pane

0x139c,	// (0x0000139c) bg_popup_sub_pane_cp14_ParamLimits

0x874e,	// (0x0000874e) list_uniindi_pane_ParamLimits

0x875a,	// (0x0000875a) uniindi_top_pane_ParamLimits

0x87f6,	// (0x000087f6) list_single_uniindi_pane_g1_ParamLimits

0x8809,	// (0x00008809) list_single_uniindi_pane_t1_ParamLimits

0xee69,	// (0x0000ee69) lc0_stat_clock_pane_ParamLimits

0xee69,	// (0x0000ee69) lc0_stat_clock_pane

0xee76,	// (0x0000ee76) lc0_stat_indi_pane_g1_ParamLimits

0xee76,	// (0x0000ee76) lc0_stat_indi_pane_g1

0xee83,	// (0x0000ee83) lc0_stat_indi_pane_g2_ParamLimits

0xee83,	// (0x0000ee83) lc0_stat_indi_pane_g2

0x0001,

0xf4f1,	// (0x0000f4f1) lc0_stat_indi_pane_g_ParamLimits

0xf4f1,	// (0x0000f4f1) lc0_stat_indi_pane_g

0xee90,	// (0x0000ee90) lc0_uni_indicator_pane_ParamLimits

0xee90,	// (0x0000ee90) lc0_uni_indicator_pane

0xee9d,	// (0x0000ee9d) ls0_title_pane_g1_ParamLimits

0xee9d,	// (0x0000ee9d) ls0_title_pane_g1

0xeeb1,	// (0x0000eeb1) ls0_title_pane_t1_ParamLimits

0xeeb1,	// (0x0000eeb1) ls0_title_pane_t1

0xeedf,	// (0x0000eedf) lc0_uni_indicator_pane_g1_ParamLimits

0xeedf,	// (0x0000eedf) lc0_uni_indicator_pane_g1

0x9ae6,	// (0x00009ae6) lc0_stat_clock_pane_t1

0x0024,	// (0x00000024) main_ai5_pane

0x9af4,	// (0x00009af4) ai5_sk_pane_ParamLimits

0x9af4,	// (0x00009af4) ai5_sk_pane

0xef06,	// (0x0000ef06) cell_ai5_widget_pane_ParamLimits

0xef06,	// (0x0000ef06) cell_ai5_widget_pane

0x9bb3,	// (0x00009bb3) aid_size_cell_widget_grid

0x9bc9,	// (0x00009bc9) bg_ai5_widget_pane_ParamLimits

0x9bc9,	// (0x00009bc9) bg_ai5_widget_pane

0x9c3d,	// (0x00009c3d) cell_ai5_widget_pane_g2

0x9c4d,	// (0x00009c4d) cell_ai5_widget_pane_g3

0x9c64,	// (0x00009c64) cell_ai5_widget_pane_g4

0x9c70,	// (0x00009c70) cell_ai5_widget_pane_g5

0x9c7c,	// (0x00009c7c) cell_ai5_widget_pane_g6

0x9c88,	// (0x00009c88) cell_ai5_widget_pane_g7

0x9cd0,	// (0x00009cd0) cell_ai5_widget_pane_t1_ParamLimits

0x9cd0,	// (0x00009cd0) cell_ai5_widget_pane_t1

0x9ced,	// (0x00009ced) cell_ai5_widget_pane_t2_ParamLimits

0x9ced,	// (0x00009ced) cell_ai5_widget_pane_t2

0x9d05,	// (0x00009d05) cell_ai5_widget_pane_t3_ParamLimits

0x9d05,	// (0x00009d05) cell_ai5_widget_pane_t3

0x9d1d,	// (0x00009d1d) cell_ai5_widget_pane_t4_ParamLimits

0x9d1d,	// (0x00009d1d) cell_ai5_widget_pane_t4

0x9d3a,	// (0x00009d3a) cell_ai5_widget_pane_t5_ParamLimits

0x9d3a,	// (0x00009d3a) cell_ai5_widget_pane_t5

0x9d59,	// (0x00009d59) cell_ai5_widget_pane_t6_ParamLimits

0x9d59,	// (0x00009d59) cell_ai5_widget_pane_t6

0x9d6b,	// (0x00009d6b) cell_ai5_widget_pane_t7_ParamLimits

0x9d6b,	// (0x00009d6b) cell_ai5_widget_pane_t7

0x9d84,	// (0x00009d84) cell_ai5_widget_pane_t8_ParamLimits

0x9d84,	// (0x00009d84) cell_ai5_widget_pane_t8

0x0009,

0xb486,	// (0x0000b486) cell_ai5_widget_pane_t_ParamLimits

0xb486,	// (0x0000b486) cell_ai5_widget_pane_t

0x9dd8,	// (0x00009dd8) grid_ai5_widget_pane

0x139c,	// (0x0000139c) highlight_cell_ai5_widget_pane_ParamLimits

0x139c,	// (0x0000139c) highlight_cell_ai5_widget_pane

0xef6c,	// (0x0000ef6c) ai5_sk_left_pane

0xef76,	// (0x0000ef76) ai5_sk_middle_pane

0xef80,	// (0x0000ef80) ai5_sk_right_pane

0x9e0d,	// (0x00009e0d) bg_ai5_widget_pane_g1_ParamLimits

0x9e0d,	// (0x00009e0d) bg_ai5_widget_pane_g1

0x9e19,	// (0x00009e19) bg_ai5_widget_pane_g2_ParamLimits

0x9e19,	// (0x00009e19) bg_ai5_widget_pane_g2

0x9e25,	// (0x00009e25) bg_ai5_widget_pane_g3_ParamLimits

0x9e25,	// (0x00009e25) bg_ai5_widget_pane_g3

0x9e31,	// (0x00009e31) bg_ai5_widget_pane_g4_ParamLimits

0x9e31,	// (0x00009e31) bg_ai5_widget_pane_g4

0x9e3d,	// (0x00009e3d) bg_ai5_widget_pane_g5_ParamLimits

0x9e3d,	// (0x00009e3d) bg_ai5_widget_pane_g5

0x9e49,	// (0x00009e49) bg_ai5_widget_pane_g6_ParamLimits

0x9e49,	// (0x00009e49) bg_ai5_widget_pane_g6

0x9e55,	// (0x00009e55) bg_ai5_widget_pane_g7_ParamLimits

0x9e55,	// (0x00009e55) bg_ai5_widget_pane_g7

0x9e61,	// (0x00009e61) bg_ai5_widget_pane_g8_ParamLimits

0x9e61,	// (0x00009e61) bg_ai5_widget_pane_g8

0x9e6d,	// (0x00009e6d) bg_ai5_widget_pane_g9_ParamLimits

0x9e6d,	// (0x00009e6d) bg_ai5_widget_pane_g9

0x0008,

0xb49b,	// (0x0000b49b) bg_ai5_widget_pane_g_ParamLimits

0xb49b,	// (0x0000b49b) bg_ai5_widget_pane_g

0x9e9f,	// (0x00009e9f) cell_shortcut_ai5_widget_pane_ParamLimits

0x9e9f,	// (0x00009e9f) cell_shortcut_ai5_widget_pane

0x2613,	// (0x00002613) bg_cell_shortcut_ai5_widget_pane

0x9eb0,	// (0x00009eb0) cell_grid_ai5_widget_pane_g1

0x2613,	// (0x00002613) highlight_cell_shortcut_ai5_widget_pane

0x3705,	// (0x00003705) ai5_sk_left_pane_g1

0x9eb9,	// (0x00009eb9) ai5_sk_left_pane_g2

0x9ec1,	// (0x00009ec1) ai5_sk_left_pane_g3

0x9ec9,	// (0x00009ec9) ai5_sk_left_pane_g4

0x0003,

0xb4ae,	// (0x0000b4ae) ai5_sk_left_pane_g

0x9ed1,	// (0x00009ed1) ai5_sk_left_pane_t1

0x36fd,	// (0x000036fd) ai5_sk_right_pane_g1

0x9edf,	// (0x00009edf) ai5_sk_right_pane_g2

0x9ee7,	// (0x00009ee7) ai5_sk_right_pane_g3

0x9eef,	// (0x00009eef) ai5_sk_right_pane_g4

0x0003,

0xb4b7,	// (0x0000b4b7) ai5_sk_right_pane_g

0x9ef7,	// (0x00009ef7) ai5_sk_right_pane_t1

0x36fd,	// (0x000036fd) ai5_sk_middle_pane_g1

0x3705,	// (0x00003705) ai5_sk_middle_pane_g2

0x371d,	// (0x0000371d) ai5_sk_middle_pane_g3

0x9ee7,	// (0x00009ee7) ai5_sk_middle_pane_g4

0x9ec1,	// (0x00009ec1) ai5_sk_middle_pane_g5

0x9f05,	// (0x00009f05) ai5_sk_middle_pane_g6

0xef8a,	// (0x0000ef8a) ai5_sk_middle_pane_g7

0x0006,

0xf4f6,	// (0x0000f4f6) ai5_sk_middle_pane_g

0xcc64,	// (0x0000cc64) aid_touch_area_size_lc0_ParamLimits

0xcc64,	// (0x0000cc64) aid_touch_area_size_lc0

0x6eed,	// (0x00006eed) cell_hwr_candidate_pane_t1_ParamLimits

0x31a7,	// (0x000031a7) aid_touch_navi_pane

0xcef0,	// (0x0000cef0) status_dt_navi_pane_ParamLimits

0xcef0,	// (0x0000cef0) status_dt_navi_pane

0xcf08,	// (0x0000cf08) status_dt_sta_pane_ParamLimits

0xcf08,	// (0x0000cf08) status_dt_sta_pane

0xef92,	// (0x0000ef92) dt_sta_controll_pane

0xef9f,	// (0x0000ef9f) dt_sta_indi_pane

0xefac,	// (0x0000efac) dt_sta_title_pane

0x083b,	// (0x0000083b) bg_dt_sta_indi_pane_ParamLimits

0x083b,	// (0x0000083b) bg_dt_sta_indi_pane

0xefbe,	// (0x0000efbe) dt_sta_battery_pane

0xefc6,	// (0x0000efc6) dt_sta_indi_pane_g1

0x9f57,	// (0x00009f57) dt_sta_indi_pane_g2

0x9f60,	// (0x00009f60) dt_sta_indi_pane_g3

0x0002,

0xf505,	// (0x0000f505) dt_sta_indi_pane_g

0x9f69,	// (0x00009f69) dt_sta_signal_pane

0x139c,	// (0x0000139c) bg_dt_sta_title_pane_ParamLimits

0x139c,	// (0x0000139c) bg_dt_sta_title_pane

0x9f72,	// (0x00009f72) dt_sta_title_pane_g1

0x9f7a,	// (0x00009f7a) dt_sta_title_pane_t1_ParamLimits

0x9f7a,	// (0x00009f7a) dt_sta_title_pane_t1

0x0024,	// (0x00000024) bg_dt_sta_control_pane

0xefcf,	// (0x0000efcf) dt_sta_controll_pane_g1

0x9f98,	// (0x00009f98) bg_dt_sta_title_pane_g1

0x9fa1,	// (0x00009fa1) bg_dt_sta_title_pane_g2

0x9faa,	// (0x00009faa) bg_dt_sta_title_pane_g3

0x0002,

0xb4d6,	// (0x0000b4d6) bg_dt_sta_title_pane_g

0x66ae,	// (0x000066ae) bg_dt_sta_indi_pane_g1

0x9fb3,	// (0x00009fb3) dt_sta_signal_pane_g1

0x9fbb,	// (0x00009fbb) dt_sta_signal_pane_g2

0x0001,

0xb4dd,	// (0x0000b4dd) dt_sta_signal_pane_g

0x9fc3,	// (0x00009fc3) dt_sta_battery_pane_g1

0x9fcc,	// (0x00009fcc) dt_sta_battery_pane_t1

0x66ae,	// (0x000066ae) bg_dt_sta_control_pane_g1

0x1f42,	// (0x00001f42) fep_china_uni_eep_pane

0x1f4a,	// (0x00001f4a) fep_china_uni_entry_pane_ParamLimits

0x1f5a,	// (0x00001f5a) popup_fep_china_uni_window_g1_ParamLimits

0x1f6a,	// (0x00001f6a) popup_fep_china_uni_window_g2_ParamLimits

0x1f6a,	// (0x00001f6a) popup_fep_china_uni_window_g2

0x0001,

0xad64,	// (0x0000ad64) popup_fep_china_uni_window_g_ParamLimits

0xad64,	// (0x0000ad64) popup_fep_china_uni_window_g

0x9fdb,	// (0x00009fdb) fep_china_uni_eep_pane_g1

0x9fe3,	// (0x00009fe3) fep_china_uni_eep_pane_t1

0x9a35,	// (0x00009a35) aid_touch_area_size_smil_player

0x32f7,	// (0x000032f7) lc0_clock_pane

0x34de,	// (0x000034de) status_pane_g5_ParamLimits

0x34de,	// (0x000034de) status_pane_g5

0xc717,	// (0x0000c717) popup_keymap_window

0x349c,	// (0x0000349c) status_icon_pane

0x9c4d,	// (0x00009c4d) cell_ai5_widget_pane_g3_ParamLimits

0x9c64,	// (0x00009c64) cell_ai5_widget_pane_g4_ParamLimits

0x9c70,	// (0x00009c70) cell_ai5_widget_pane_g5_ParamLimits

0x9c94,	// (0x00009c94) cell_ai5_widget_pane_g8_ParamLimits

0x9c94,	// (0x00009c94) cell_ai5_widget_pane_g8

0x9ca8,	// (0x00009ca8) cell_ai5_widget_pane_g9_ParamLimits

0x9ca8,	// (0x00009ca8) cell_ai5_widget_pane_g9

0x9cbc,	// (0x00009cbc) cell_ai5_widget_pane_g10_ParamLimits

0x9cbc,	// (0x00009cbc) cell_ai5_widget_pane_g10

0x9ff2,	// (0x00009ff2) status_icon_pane_g1

0x0024,	// (0x00000024) bg_popup_sub_pane_cp13

0x9ffa,	// (0x00009ffa) popup_keymap_window_t1

0xc415,	// (0x0000c415) control_pane_g6_ParamLimits

0xc415,	// (0x0000c415) control_pane_g6

0xc422,	// (0x0000c422) control_pane_g7_ParamLimits

0xc422,	// (0x0000c422) control_pane_g7

0xc42f,	// (0x0000c42f) control_pane_g8_ParamLimits

0xc42f,	// (0x0000c42f) control_pane_g8

0xef92,	// (0x0000ef92) dt_sta_controll_pane_ParamLimits

0xef9f,	// (0x0000ef9f) dt_sta_indi_pane_ParamLimits

0xefac,	// (0x0000efac) dt_sta_title_pane_ParamLimits

0x0d59,	// (0x00000d59) aid_size_touch_scroll_bar_cale

0x02b1,	// (0x000002b1) popup_discreet_window_ParamLimits

0x02b1,	// (0x000002b1) popup_discreet_window

0xb696,	// (0x0000b696) popup_sk_window

0x3f69,	// (0x00003f69) bg_popup_sub_pane_cp28_ParamLimits

0x3f69,	// (0x00003f69) bg_popup_sub_pane_cp28

0xa008,	// (0x0000a008) popup_discreet_window_g1_ParamLimits

0xa008,	// (0x0000a008) popup_discreet_window_g1

0xa028,	// (0x0000a028) popup_discreet_window_t1_ParamLimits

0xa028,	// (0x0000a028) popup_discreet_window_t1

0xa046,	// (0x0000a046) popup_discreet_window_t2_ParamLimits

0xa046,	// (0x0000a046) popup_discreet_window_t2

0x0002,

0xb4e2,	// (0x0000b4e2) popup_discreet_window_t_ParamLimits

0xb4e2,	// (0x0000b4e2) popup_discreet_window_t

0xa098,	// (0x0000a098) popup_sk_window_g1

0xa0a2,	// (0x0000a0a2) popup_sk_window_g2

0x0001,

0xb4e9,	// (0x0000b4e9) popup_sk_window_g

0xa0aa,	// (0x0000a0aa) popup_sk_window_t1

0xa0b8,	// (0x0000a0b8) popup_sk_window_t1_copy1

0x9c3d,	// (0x00009c3d) cell_ai5_widget_pane_g2_ParamLimits

0x9d96,	// (0x00009d96) cell_ai5_widget_pane_t9_ParamLimits

0x9d96,	// (0x00009d96) cell_ai5_widget_pane_t9

0x0024,	// (0x00000024) main_fep_fshwr2_pane

0xefd8,	// (0x0000efd8) aid_fshwr2_btn_pane

0xefe9,	// (0x0000efe9) aid_fshwr2_syb_pane

0xeffa,	// (0x0000effa) aid_fshwr2_txt_pane

0xf006,	// (0x0000f006) fshwr2_func_candi_pane

0xf025,	// (0x0000f025) fshwr2_hwr_syb_pane

0xf040,	// (0x0000f040) fshwr2_icf_pane

0x0024,	// (0x00000024) fshwr2_icf_bg_pane

0xa138,	// (0x0000a138) fshwr2_icf_pane_t1_ParamLimits

0xa138,	// (0x0000a138) fshwr2_icf_pane_t1

0x1d59,	// (0x00001d59) fshwr2_func_candi_pane_g1

0xf06c,	// (0x0000f06c) fshwr2_func_candi_row_pane_ParamLimits

0xf06c,	// (0x0000f06c) fshwr2_func_candi_row_pane

0xf08f,	// (0x0000f08f) cell_fshwr2_syb_pane_ParamLimits

0xf08f,	// (0x0000f08f) cell_fshwr2_syb_pane

0x6b40,	// (0x00006b40) fshwr2_hwr_syb_pane_g1_ParamLimits

0x6b40,	// (0x00006b40) fshwr2_hwr_syb_pane_g1

0x0024,	// (0x00000024) bg_popup_call_pane_cp01

0xf0a5,	// (0x0000f0a5) fshwr2_func_candi_cell_pane_ParamLimits

0xf0a5,	// (0x0000f0a5) fshwr2_func_candi_cell_pane

0xf0f0,	// (0x0000f0f0) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xf0f0,	// (0x0000f0f0) fshwr2_func_candi_cell_bg_pane

0xf0fc,	// (0x0000f0fc) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xf0fc,	// (0x0000f0fc) fshwr2_func_candi_cell_pane_g1

0xf133,	// (0x0000f133) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xf133,	// (0x0000f133) fshwr2_func_candi_cell_pane_t1

0x0024,	// (0x00000024) bg_button_pane_cp08

0xa208,	// (0x0000a208) cell_fshwr2_syb_bg_pane

0xf14e,	// (0x0000f14e) cell_fshwr2_syb_bg_pane_g1

0xf156,	// (0x0000f156) cell_fshwr2_syb_bg_pane_t1

0x139c,	// (0x0000139c) main_tmo_pane

0xd24e,	// (0x0000d24e) uni_indicator_pane_g1_ParamLimits

0xd264,	// (0x0000d264) uni_indicator_pane_g2_ParamLimits

0xd27a,	// (0x0000d27a) uni_indicator_pane_g3_ParamLimits

0x4c1b,	// (0x00004c1b) uni_indicator_pane_g4_ParamLimits

0x4c1b,	// (0x00004c1b) uni_indicator_pane_g4

0x4c2f,	// (0x00004c2f) uni_indicator_pane_g5_ParamLimits

0x4c2f,	// (0x00004c2f) uni_indicator_pane_g5

0x4c2f,	// (0x00004c2f) uni_indicator_pane_g6_ParamLimits

0x4c2f,	// (0x00004c2f) uni_indicator_pane_g6

0xf3bf,	// (0x0000f3bf) uni_indicator_pane_g_ParamLimits

0xdf58,	// (0x0000df58) popup_tmo_note_window_ParamLimits

0xdf58,	// (0x0000df58) popup_tmo_note_window

0x139c,	// (0x0000139c) fshwr2_bg_pane

0xf124,	// (0x0000f124) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xf124,	// (0x0000f124) fshwr2_func_candi_cell_pane_g2

0x0001,

0xf50c,	// (0x0000f50c) fshwr2_func_candi_cell_pane_g_ParamLimits

0xf50c,	// (0x0000f50c) fshwr2_func_candi_cell_pane_g

0x66ae,	// (0x000066ae) bg_popup_window_pane_cp01

0xa227,	// (0x0000a227) bg_popup_window_pane_g1_cp01

0xa230,	// (0x0000a230) bg_popup_window_pane_cp22_ParamLimits

0xa230,	// (0x0000a230) bg_popup_window_pane_cp22

0xa23e,	// (0x0000a23e) listscroll_tmo_link_pane_ParamLimits

0xa23e,	// (0x0000a23e) listscroll_tmo_link_pane

0xa27e,	// (0x0000a27e) popup_tmo_note_window_g1_ParamLimits

0xa27e,	// (0x0000a27e) popup_tmo_note_window_g1

0xa28b,	// (0x0000a28b) tmo_note_info_pane_ParamLimits

0xa28b,	// (0x0000a28b) tmo_note_info_pane

0xf165,	// (0x0000f165) list_tmo_note_info_pane_g1_ParamLimits

0xf165,	// (0x0000f165) list_tmo_note_info_pane_g1

0xa2bc,	// (0x0000a2bc) list_tmo_note_info_pane_g2_ParamLimits

0xa2bc,	// (0x0000a2bc) list_tmo_note_info_pane_g2

0x0001,

0xf511,	// (0x0000f511) list_tmo_note_info_pane_g_ParamLimits

0xf511,	// (0x0000f511) list_tmo_note_info_pane_g

0xa2d8,	// (0x0000a2d8) list_tmo_note_info_text_pane_ParamLimits

0xa2d8,	// (0x0000a2d8) list_tmo_note_info_text_pane

0xa359,	// (0x0000a359) list_tmo_link_pane

0xa366,	// (0x0000a366) scroll_pane_cp20

0xa373,	// (0x0000a373) list_single_tmo_link_pane_ParamLimits

0xa373,	// (0x0000a373) list_single_tmo_link_pane

0xa383,	// (0x0000a383) list_single_tmo_link_pane_t1

0xa391,	// (0x0000a391) list_tmo_note_info_text_pane_t1_ParamLimits

0xa391,	// (0x0000a391) list_tmo_note_info_text_pane_t1

0xbfd9,	// (0x0000bfd9) aid_size_touch_scroll_bar_cp01_ParamLimits

0xbfd9,	// (0x0000bfd9) aid_size_touch_scroll_bar_cp01

0xbf09,	// (0x0000bf09) aid_size_touch_slider_marker

0xb686,	// (0x0000b686) popup_settings_window_ParamLimits

0xb686,	// (0x0000b686) popup_settings_window

0x2bc8,	// (0x00002bc8) popup_candi_list_indi_window

0x31a7,	// (0x000031a7) aid_touch_navi_pane_ParamLimits

0x84d5,	// (0x000084d5) rs_clock_indi_pane

0x84de,	// (0x000084de) sctrl_sk_bottom_pane_ParamLimits

0x84ef,	// (0x000084ef) sctrl_sk_top_pane_ParamLimits

0x8d30,	// (0x00008d30) popup_fep_tooltip_window

0x9bb3,	// (0x00009bb3) aid_size_cell_widget_grid_ParamLimits

0x9c28,	// (0x00009c28) cell_ai5_widget_pane_g1_ParamLimits

0x9c28,	// (0x00009c28) cell_ai5_widget_pane_g1

0x9c7c,	// (0x00009c7c) cell_ai5_widget_pane_g6_ParamLimits

0x9c88,	// (0x00009c88) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xb471,	// (0x0000b471) cell_ai5_widget_pane_g_ParamLimits

0xb471,	// (0x0000b471) cell_ai5_widget_pane_g

0x9dba,	// (0x00009dba) cell_ai5_widget_pane_t10_ParamLimits

0x9dba,	// (0x00009dba) cell_ai5_widget_pane_t10

0x9dd8,	// (0x00009dd8) grid_ai5_widget_pane_ParamLimits

0x9e79,	// (0x00009e79) cell_contacts_ai5_widget_pane_ParamLimits

0x9e79,	// (0x00009e79) cell_contacts_ai5_widget_pane

0xa05b,	// (0x0000a05b) popup_discreet_window_t3_ParamLimits

0xa05b,	// (0x0000a05b) popup_discreet_window_t3

0xf058,	// (0x0000f058) popup_fshwr2_char_preview_window_ParamLimits

0xf058,	// (0x0000f058) popup_fshwr2_char_preview_window

0xf17c,	// (0x0000f17c) tmo_note_info_pane_t1

0xf191,	// (0x0000f191) tmo_note_info_pane_t2

0xf1a8,	// (0x0000f1a8) tmo_note_info_pane_t3

0xa335,	// (0x0000a335) tmo_note_info_pane_t4

0xa347,	// (0x0000a347) tmo_note_info_pane_t5

0x0004,

0xf516,	// (0x0000f516) tmo_note_info_pane_t

0xa359,	// (0x0000a359) list_tmo_link_pane_ParamLimits

0xa366,	// (0x0000a366) scroll_pane_cp20_ParamLimits

0x0024,	// (0x00000024) bg_popup_fep_char_preview_window_cp01

0xa3aa,	// (0x0000a3aa) popup_fshwr2_char_preview_window_t1

0xa3b8,	// (0x0000a3b8) popup_candi_list_indi_window_g1

0xa3c1,	// (0x0000a3c1) bg_cell_contacts_ai5_widget_pane

0xa3cd,	// (0x0000a3cd) cell_contacts_ai5_widget_pane_g1

0x71b9,	// (0x000071b9) cell_contacts_ai5_widget_pane_g2

0xa3e2,	// (0x0000a3e2) cell_contacts_ai5_widget_pane_g3

0x0002,

0xb503,	// (0x0000b503) cell_contacts_ai5_widget_pane_g

0xa3ee,	// (0x0000a3ee) cell_contacts_ai5_widget_pane_t1

0x139c,	// (0x0000139c) highlight_cell_shortcut_ai5_widget_pane_cp01

0xa465,	// (0x0000a465) settings_container_pane

0x2613,	// (0x00002613) listscroll_set_pane_copy1

0x5a29,	// (0x00005a29) scroll_pane_cp121_copy1

0x3d1a,	// (0x00003d1a) set_content_pane_copy1

0xa471,	// (0x0000a471) aid_height_set_list_copy1_ParamLimits

0xa471,	// (0x0000a471) aid_height_set_list_copy1

0x4f17,	// (0x00004f17) aid_size_parent_copy1_ParamLimits

0x4f17,	// (0x00004f17) aid_size_parent_copy1

0xa47d,	// (0x0000a47d) button_value_adjust_pane_cp6_copy1_ParamLimits

0xa47d,	// (0x0000a47d) button_value_adjust_pane_cp6_copy1

0x2ba0,	// (0x00002ba0) list_highlight_pane_cp2_copy1_ParamLimits

0x2ba0,	// (0x00002ba0) list_highlight_pane_cp2_copy1

0xa491,	// (0x0000a491) list_set_pane_copy1_ParamLimits

0xa491,	// (0x0000a491) list_set_pane_copy1

0xa400,	// (0x0000a400) main_pane_set_t1_copy1_ParamLimits

0xa400,	// (0x0000a400) main_pane_set_t1_copy1

0xa43a,	// (0x0000a43a) main_pane_set_t2_copy1_ParamLimits

0xa43a,	// (0x0000a43a) main_pane_set_t2_copy1

0xa53e,	// (0x0000a53e) main_pane_set_t3_copy1

0xa54c,	// (0x0000a54c) main_pane_set_t4_copy1

0xa459,	// (0x0000a459) set_content_pane_g1_copy1_ParamLimits

0xa459,	// (0x0000a459) set_content_pane_g1_copy1

0xa55a,	// (0x0000a55a) setting_code_pane_copy1

0xa562,	// (0x0000a562) setting_slider_graphic_pane_copy1

0xa562,	// (0x0000a562) setting_slider_pane_copy1

0xa562,	// (0x0000a562) setting_text_pane_copy1

0xa562,	// (0x0000a562) setting_volume_pane_copy1

0xa55a,	// (0x0000a55a) settings_code_pane_cp2_copy1

0xa56a,	// (0x0000a56a) settings_code_pane_cp_copy1_ParamLimits

0xa56a,	// (0x0000a56a) settings_code_pane_cp_copy1

0xa57e,	// (0x0000a57e) volume_set_pane_copy1

0xa586,	// (0x0000a586) volume_set_pane_g10_copy1

0xa58e,	// (0x0000a58e) volume_set_pane_g1_copy1

0xa596,	// (0x0000a596) volume_set_pane_g2_copy1

0xa59e,	// (0x0000a59e) volume_set_pane_g3_copy1

0xa5a6,	// (0x0000a5a6) volume_set_pane_g4_copy1

0xa5ae,	// (0x0000a5ae) volume_set_pane_g5_copy1

0xa5b6,	// (0x0000a5b6) volume_set_pane_g6_copy1

0xa5be,	// (0x0000a5be) volume_set_pane_g7_copy1

0xa5c6,	// (0x0000a5c6) volume_set_pane_g8_copy1

0xa5ce,	// (0x0000a5ce) volume_set_pane_g9_copy1

0x0507,	// (0x00000507) bg_set_opt_pane_cp_copy1_ParamLimits

0x0507,	// (0x00000507) bg_set_opt_pane_cp_copy1

0xa5d6,	// (0x0000a5d6) setting_slider_pane_t1_copy1_ParamLimits

0xa5d6,	// (0x0000a5d6) setting_slider_pane_t1_copy1

0xa5f4,	// (0x0000a5f4) setting_slider_pane_t2_copy1_ParamLimits

0xa5f4,	// (0x0000a5f4) setting_slider_pane_t2_copy1

0xa60e,	// (0x0000a60e) setting_slider_pane_t3_copy1_ParamLimits

0xa60e,	// (0x0000a60e) setting_slider_pane_t3_copy1

0xa626,	// (0x0000a626) slider_set_pane_copy1_ParamLimits

0xa626,	// (0x0000a626) slider_set_pane_copy1

0x14bf,	// (0x000014bf) set_opt_bg_pane_g1_copy2

0x14c7,	// (0x000014c7) set_opt_bg_pane_g2_copy2

0xa63c,	// (0x0000a63c) set_opt_bg_pane_g3_copy2

0x14d7,	// (0x000014d7) set_opt_bg_pane_g4_copy2

0x14df,	// (0x000014df) set_opt_bg_pane_g5_copy2

0x14e7,	// (0x000014e7) set_opt_bg_pane_g6_copy2

0xa646,	// (0x0000a646) set_opt_bg_pane_g7_copy2

0xa64e,	// (0x0000a64e) set_opt_bg_pane_g8_copy2

0xa658,	// (0x0000a658) set_opt_bg_pane_g9_copy2

0xa662,	// (0x0000a662) aid_size_touch_slider_mark_copy1_ParamLimits

0xa662,	// (0x0000a662) aid_size_touch_slider_mark_copy1

0xa676,	// (0x0000a676) slider_set_pane_g1_copy1

0xa67f,	// (0x0000a67f) slider_set_pane_g2_copy1

0x4e80,	// (0x00004e80) slider_set_pane_g3_copy1_ParamLimits

0x4e80,	// (0x00004e80) slider_set_pane_g3_copy1

0x4e94,	// (0x00004e94) slider_set_pane_g4_copy1_ParamLimits

0x4e94,	// (0x00004e94) slider_set_pane_g4_copy1

0x4eac,	// (0x00004eac) slider_set_pane_g5_copy1_ParamLimits

0x4eac,	// (0x00004eac) slider_set_pane_g5_copy1

0x4e80,	// (0x00004e80) slider_set_pane_g6_copy1_ParamLimits

0x4e80,	// (0x00004e80) slider_set_pane_g6_copy1

0xa687,	// (0x0000a687) slider_set_pane_g7_copy1_ParamLimits

0xa687,	// (0x0000a687) slider_set_pane_g7_copy1

0x0293,	// (0x00000293) bg_set_opt_pane_cp2_copy1

0xa69d,	// (0x0000a69d) setting_slider_graphic_pane_g1_copy1

0xa6a6,	// (0x0000a6a6) setting_slider_graphic_pane_t1_copy1

0xa6b6,	// (0x0000a6b6) setting_slider_graphic_pane_t2_copy1

0xa6c6,	// (0x0000a6c6) slider_set_pane_cp_copy1

0xa6d6,	// (0x0000a6d6) input_focus_pane_cp1_copy1

0xa6df,	// (0x0000a6df) list_set_text_pane_copy1

0xa6e7,	// (0x0000a6e7) setting_text_pane_g1_copy1

0x05f1,	// (0x000005f1) set_text_pane_t1_copy1

0xa6d6,	// (0x0000a6d6) input_focus_pane_cp2_copy1

0xa6e7,	// (0x0000a6e7) setting_code_pane_g1_copy1

0xa6f0,	// (0x0000a6f0) setting_code_pane_t1_copy1

0xa6fe,	// (0x0000a6fe) list_set_graphic_pane_copy1

0x0293,	// (0x00000293) bg_set_opt_pane_cp4_copy1

0x230e,	// (0x0000230e) list_set_graphic_pane_g1_copy1_ParamLimits

0x230e,	// (0x0000230e) list_set_graphic_pane_g1_copy1

0xa711,	// (0x0000a711) list_set_graphic_pane_g2_copy1

0x2326,	// (0x00002326) list_set_graphic_pane_t1_copy1_ParamLimits

0x2326,	// (0x00002326) list_set_graphic_pane_t1_copy1

0x66ae,	// (0x000066ae) rs_clock_indi_pane_g1

0xa719,	// (0x0000a719) rs_clock_indi_pane_t1

0xa727,	// (0x0000a727) rs_indi_pane

0xa72f,	// (0x0000a72f) rs_indi_pane_g1

0xa738,	// (0x0000a738) rs_indi_pane_g2

0xa741,	// (0x0000a741) rs_indi_pane_g3

0x0002,

0xb50a,	// (0x0000b50a) rs_indi_pane_g

0x2613,	// (0x00002613) bg_popup_preview_window_pane_cp03

0xa74a,	// (0x0000a74a) popup_fep_tooltip_window_t1

0x78b7,	// (0x000078b7) popup_note2_window_g2_ParamLimits

0x78b7,	// (0x000078b7) popup_note2_window_g2

0x0001,

0xb2a3,	// (0x0000b2a3) popup_note2_window_g_ParamLimits

0xb2a3,	// (0x0000b2a3) popup_note2_window_g

0x7ead,	// (0x00007ead) bg_popup_sub_pane_cp11_ParamLimits

0x7eba,	// (0x00007eba) cell_ai3_links_pane_g1_ParamLimits

0x7ed1,	// (0x00007ed1) cell_ai3_links_pane_t1

0x05f1,	// (0x000005f1) set_text_pane_t1_copy1_ParamLimits

0x2524,	// (0x00002524) cell_graphic_popup_pane_cp2_ParamLimits

0x2524,	// (0x00002524) cell_graphic_popup_pane_cp2

0xa758,	// (0x0000a758) cell_graphic_popup_pane_g1_cp2

0x0b6c,	// (0x00000b6c) cell_graphic_popup_pane_g2_cp2

0xa760,	// (0x0000a760) cell_graphic_popup_pane_g3_cp2

0xa768,	// (0x0000a768) cell_graphic_popup_pane_t2_cp2

0x0b7d,	// (0x00000b7d) grid_highlight_pane_cp3_cp2

0x1a3a,	// (0x00001a3a) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x139c,	// (0x0000139c) main_tmo_pane_ParamLimits

0xdf4c,	// (0x0000df4c) popup_tmo_big_image_note_window

0x9c17,	// (0x00009c17) cell_ai5_widget_list_pane

0x9c1f,	// (0x00009c1f) cell_ai5_widget_lrg_icon_pane

0xf17c,	// (0x0000f17c) tmo_note_info_pane_t1_ParamLimits

0xf191,	// (0x0000f191) tmo_note_info_pane_t2_ParamLimits

0xf1a8,	// (0x0000f1a8) tmo_note_info_pane_t3_ParamLimits

0xa335,	// (0x0000a335) tmo_note_info_pane_t4_ParamLimits

0xa347,	// (0x0000a347) tmo_note_info_pane_t5_ParamLimits

0xf516,	// (0x0000f516) tmo_note_info_pane_t_ParamLimits

0xa465,	// (0x0000a465) settings_container_pane_ParamLimits

0xa6ce,	// (0x0000a6ce) indicator_popup_pane_cp5

0xa6ce,	// (0x0000a6ce) indicator_popup_pane_cp6

0xa6fe,	// (0x0000a6fe) list_set_graphic_pane_copy1_ParamLimits

0x0024,	// (0x00000024) bg_popup_window_pane_cp23

0xa776,	// (0x0000a776) popup_tmo_big_image_note_window_g1

0xa780,	// (0x0000a780) popup_tmo_big_image_note_window_t1

0xa790,	// (0x0000a790) popup_tmo_big_image_note_window_t2

0xa7a0,	// (0x0000a7a0) popup_tmo_big_image_note_window_t3

0x0002,

0xb511,	// (0x0000b511) popup_tmo_big_image_note_window_t

0x66ae,	// (0x000066ae) cell_ai5_widget_lrg_icon_pane_g1

0xa7b0,	// (0x0000a7b0) cell_ai5_widget_lrg_icon_pane_t1

0xa7be,	// (0x0000a7be) cell_ai5_widget_list_row_pane_ParamLimits

0xa7be,	// (0x0000a7be) cell_ai5_widget_list_row_pane

0xa7d5,	// (0x0000a7d5) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xa7d5,	// (0x0000a7d5) cell_ai5_widget_list_row_pane_g1

0xa7e2,	// (0x0000a7e2) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xa7e2,	// (0x0000a7e2) cell_ai5_widget_list_row_pane_t1

0xa813,	// (0x0000a813) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xa813,	// (0x0000a813) cell_ai5_widget_list_row_pane_t2

0x0002,

0xb518,	// (0x0000b518) cell_ai5_widget_list_row_pane_t_ParamLimits

0xb518,	// (0x0000b518) cell_ai5_widget_list_row_pane_t

0x0024,	// (0x00000024) main_fep_vtchi_ss_pane

0xa857,	// (0x0000a857) popup_fep_char_pre_window

0xa85f,	// (0x0000a85f) popup_fep_ituss_window

0xf1bd,	// (0x0000f1bd) popup_fep_vkbss_window

0xf1ca,	// (0x0000f1ca) grid_vkbss_keypad_pane_ParamLimits

0xf1ca,	// (0x0000f1ca) grid_vkbss_keypad_pane

0xa8b6,	// (0x0000a8b6) ituss_keypad_pane

0xa8d1,	// (0x0000a8d1) aid_vkbss_key_offset_ParamLimits

0xa8d1,	// (0x0000a8d1) aid_vkbss_key_offset

0xf1da,	// (0x0000f1da) cell_vkbss_key_pane_ParamLimits

0xf1da,	// (0x0000f1da) cell_vkbss_key_pane

0xa8f3,	// (0x0000a8f3) bg_cell_vkbss_key_g1_ParamLimits

0xa8f3,	// (0x0000a8f3) bg_cell_vkbss_key_g1

0xf1f0,	// (0x0000f1f0) cell_vkbss_key_3p_pane_ParamLimits

0xf1f0,	// (0x0000f1f0) cell_vkbss_key_3p_pane

0xf20a,	// (0x0000f20a) cell_vkbss_key_g1_ParamLimits

0xf20a,	// (0x0000f20a) cell_vkbss_key_g1

0xf224,	// (0x0000f224) cell_vkbss_key_t1_ParamLimits

0xf224,	// (0x0000f224) cell_vkbss_key_t1

0xa952,	// (0x0000a952) cell_ituss_key_pane_ParamLimits

0xa952,	// (0x0000a952) cell_ituss_key_pane

0xa963,	// (0x0000a963) bg_cell_ituss_key_g1_ParamLimits

0xa963,	// (0x0000a963) bg_cell_ituss_key_g1

0xa96f,	// (0x0000a96f) cell_ituss_key_pane_g1_ParamLimits

0xa96f,	// (0x0000a96f) cell_ituss_key_pane_g1

0xa989,	// (0x0000a989) cell_ituss_key_pane_g2_ParamLimits

0xa989,	// (0x0000a989) cell_ituss_key_pane_g2

0x0002,

0xb51f,	// (0x0000b51f) cell_ituss_key_pane_g_ParamLimits

0xb51f,	// (0x0000b51f) cell_ituss_key_pane_g

0xa9c7,	// (0x0000a9c7) cell_ituss_key_t1_ParamLimits

0xa9c7,	// (0x0000a9c7) cell_ituss_key_t1

0xaa01,	// (0x0000aa01) cell_ituss_key_t2_ParamLimits

0xaa01,	// (0x0000aa01) cell_ituss_key_t2

0xaa32,	// (0x0000aa32) cell_ituss_key_t3_ParamLimits

0xaa32,	// (0x0000aa32) cell_ituss_key_t3

0xaa01,	// (0x0000aa01) cell_ituss_key_t4_ParamLimits

0xaa01,	// (0x0000aa01) cell_ituss_key_t4

0x0004,

0xb526,	// (0x0000b526) cell_ituss_key_t_ParamLimits

0xb526,	// (0x0000b526) cell_ituss_key_t

0xaa75,	// (0x0000aa75) cell_vkbss_key_3p_pane_g1

0xaa7d,	// (0x0000aa7d) cell_vkbss_key_3p_pane_g2

0xaa85,	// (0x0000aa85) cell_vkbss_key_3p_pane_g3

0x0002,

0xb531,	// (0x0000b531) cell_vkbss_key_3p_pane_g

0x0024,	// (0x00000024) bg_popup_fep_char_preview_window_cp02

0xaa8d,	// (0x0000aa8d) popup_fep_char_pre_window_t1

0xef62,	// (0x0000ef62) main_ai5_sk_pane

0xa3c1,	// (0x0000a3c1) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xa3cd,	// (0x0000a3cd) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x71b9,	// (0x000071b9) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa3e2,	// (0x0000a3e2) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xb503,	// (0x0000b503) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa3ee,	// (0x0000a3ee) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x139c,	// (0x0000139c) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf24f,	// (0x0000f24f) main_ai5_sk_pane_g1

0x3da2,	// (0x00003da2) popup_query_code_window_g1

0xa875,	// (0x0000a875) popup_fep_vkb_icf_pane

0xa894,	// (0x0000a894) popup_fep_vtchi_icf_pane

0xaaa5,	// (0x0000aaa5) bg_icf_pane

0xaab1,	// (0x0000aab1) list_vkb_icf_pane

0xaac0,	// (0x0000aac0) bg_icf_pane_cp01

0xaad3,	// (0x0000aad3) vtchi_icf_list_pane

0xaae3,	// (0x0000aae3) list_vkb_icf_pane_t1_ParamLimits

0xaae3,	// (0x0000aae3) list_vkb_icf_pane_t1

0xaaf9,	// (0x0000aaf9) vtchi_icf_list_pane_t1_ParamLimits

0xaaf9,	// (0x0000aaf9) vtchi_icf_list_pane_t1

0xa85f,	// (0x0000a85f) popup_fep_ituss_window_ParamLimits

0xa894,	// (0x0000a894) popup_fep_vtchi_icf_pane_ParamLimits

0xa8b6,	// (0x0000a8b6) ituss_keypad_pane_ParamLimits

0xa8c5,	// (0x0000a8c5) ituss_sks_pane

0xaaa5,	// (0x0000aaa5) bg_icf_pane_ParamLimits

0xa83b,	// (0x0000a83b) icf_edit_indi_pane_ParamLimits

0xa83b,	// (0x0000a83b) icf_edit_indi_pane

0xaab1,	// (0x0000aab1) list_vkb_icf_pane_ParamLimits

0xaac0,	// (0x0000aac0) bg_icf_pane_cp01_ParamLimits

0xa84a,	// (0x0000a84a) icf_edit_indi_pane_cp01_ParamLimits

0xa84a,	// (0x0000a84a) icf_edit_indi_pane_cp01

0xaadb,	// (0x0000aadb) vtchi_query_pane

0x6b40,	// (0x00006b40) icf_edit_indi_pane_g1_ParamLimits

0x6b40,	// (0x00006b40) icf_edit_indi_pane_g1

0xab7d,	// (0x0000ab7d) icf_edit_indi_pane_g2_ParamLimits

0xab7d,	// (0x0000ab7d) icf_edit_indi_pane_g2

0x0001,

0xb549,	// (0x0000b549) icf_edit_indi_pane_g_ParamLimits

0xb549,	// (0x0000b549) icf_edit_indi_pane_g

0xab8c,	// (0x0000ab8c) icf_edit_indi_pane_t1

0xab13,	// (0x0000ab13) bg_input_focus_pane_cp042

0x0d50,	// (0x00000d50) vtchi_button_pane

0xab1c,	// (0x0000ab1c) vtchi_query_pane_t1

0xab2a,	// (0x0000ab2a) vtchi_query_pane_t2

0xab38,	// (0x0000ab38) vtchi_query_pane_t3

0x0002,

0xb538,	// (0x0000b538) vtchi_query_pane_t

0x0024,	// (0x00000024) bg_button_pane_cp13

0xab46,	// (0x0000ab46) vtchi_button_pane_g1

0xab4e,	// (0x0000ab4e) ituss_sks_pane_g1

0xab59,	// (0x0000ab59) ituss_sks_pane_g2

0x0001,

0xb53f,	// (0x0000b53f) ituss_sks_pane_g

0xab61,	// (0x0000ab61) ituss_sks_pane_t1

0xab6f,	// (0x0000ab6f) ituss_sks_pane_t2

0x0001,

0xb544,	// (0x0000b544) ituss_sks_pane_t

0x60a8,	// (0x000060a8) indicator_nsta_pane_cp_g1

0x60b0,	// (0x000060b0) indicator_nsta_pane_cp_g2

0x60b8,	// (0x000060b8) indicator_nsta_pane_cp_g3

0x60a8,	// (0x000060a8) indicator_nsta_pane_cp_g4

0x60b0,	// (0x000060b0) indicator_nsta_pane_cp_g5

0x60b8,	// (0x000060b8) indicator_nsta_pane_cp_g6

0x0005,

0xb0ed,	// (0x0000b0ed) indicator_nsta_pane_cp_g

0xed0e,	// (0x0000ed0e) cell_graphic2_pane_t2_ParamLimits

0xed0e,	// (0x0000ed0e) cell_graphic2_pane_t2

0x0001,

0xf4e1,	// (0x0000f4e1) cell_graphic2_pane_t_ParamLimits

0xf4e1,	// (0x0000f4e1) cell_graphic2_pane_t

0xed42,	// (0x0000ed42) cell_graphic2_control_pane_t1

0xc18d,	// (0x0000c18d) signal_pane_g3_ParamLimits

0xc18d,	// (0x0000c18d) signal_pane_g3

0xc1a1,	// (0x0000c1a1) signal_pane_g4_ParamLimits

0xc1a1,	// (0x0000c1a1) signal_pane_g4

0xa825,	// (0x0000a825) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xa825,	// (0x0000a825) cell_ai5_widget_list_row_pane_t3

0xa9b5,	// (0x0000a9b5) cell_ituss_key_pane_t1_ParamLimits

0xa9b5,	// (0x0000a9b5) cell_ituss_key_pane_t1

0x39bc,	// (0x000039bc) form_field_data_wide_pane_vc_t2_ParamLimits

0x39bc,	// (0x000039bc) form_field_data_wide_pane_vc_t2

0x39d0,	// (0x000039d0) form_field_data_wide_pane_vc_t3_ParamLimits

0x39d0,	// (0x000039d0) form_field_data_wide_pane_vc_t3

0x0002,

0xae49,	// (0x0000ae49) form_field_data_wide_pane_vc_t_ParamLimits

0xae49,	// (0x0000ae49) form_field_data_wide_pane_vc_t

0x5d70,	// (0x00005d70) form_field_slider_wide_pane_vc_t3_ParamLimits

0x5d70,	// (0x00005d70) form_field_slider_wide_pane_vc_t3

0x5e4e,	// (0x00005e4e) form_field_popup_wide_pane_vc_t2_ParamLimits

0x5e4e,	// (0x00005e4e) form_field_popup_wide_pane_vc_t2

0x5e65,	// (0x00005e65) form_field_popup_wide_pane_vc_t3_ParamLimits

0x5e65,	// (0x00005e65) form_field_popup_wide_pane_vc_t3

0x0002,

0xb0dc,	// (0x0000b0dc) form_field_popup_wide_pane_vc_t_ParamLimits

0xb0dc,	// (0x0000b0dc) form_field_popup_wide_pane_vc_t

0xefd8,	// (0x0000efd8) aid_fshwr2_btn_pane_ParamLimits

0xefe9,	// (0x0000efe9) aid_fshwr2_syb_pane_ParamLimits

0xeffa,	// (0x0000effa) aid_fshwr2_txt_pane_ParamLimits

0x139c,	// (0x0000139c) fshwr2_bg_pane_ParamLimits

0xf006,	// (0x0000f006) fshwr2_func_candi_pane_ParamLimits

0xf025,	// (0x0000f025) fshwr2_hwr_syb_pane_ParamLimits

0xf040,	// (0x0000f040) fshwr2_icf_pane_ParamLimits

0x5cd6,	// (0x00005cd6) list_double_graphic_pane_vc_g4_ParamLimits

0x5cd6,	// (0x00005cd6) list_double_graphic_pane_vc_g4

0xa9a9,	// (0x0000a9a9) cell_ituss_key_pane_g3_ParamLimits

0xa9a9,	// (0x0000a9a9) cell_ituss_key_pane_g3

0xaa63,	// (0x0000aa63) cell_ituss_key_t5_ParamLimits

0xaa63,	// (0x0000aa63) cell_ituss_key_t5

0xf1bd,	// (0x0000f1bd) popup_fep_vkbss_window_ParamLimits
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

} // end of namespace AknLayoutScalable_Elaf_phl_av_qhd_lsc_tch_Normal

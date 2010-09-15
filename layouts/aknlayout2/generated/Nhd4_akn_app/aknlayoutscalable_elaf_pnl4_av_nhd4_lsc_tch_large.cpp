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

#include "aknlayoutscalable_elaf_pnl4_av_nhd4_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnl4_av_nhd4_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x0004b78a };

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
0x8e94,	// (0x0005461e) Screen

0x8ea8,	// (0x00054632) application_window_ParamLimits

0x8ea8,	// (0x00054632) application_window

0x8ec2,	// (0x0005464c) screen_g1

0x8ef4,	// (0x0005467e) area_bottom_pane_ParamLimits

0x8ef4,	// (0x0005467e) area_bottom_pane

0x8fb2,	// (0x0005473c) area_top_pane_ParamLimits

0x8fb2,	// (0x0005473c) area_top_pane

0x9046,	// (0x000547d0) main_pane_ParamLimits

0x9046,	// (0x000547d0) main_pane

0x9101,	// (0x0005488b) misc_graphics

0xb020,	// (0x000567aa) battery_pane_ParamLimits

0xb020,	// (0x000567aa) battery_pane

0x2a53,	// (0x0004e1dd) bg_status_flat_pane_g8

0x2a5b,	// (0x0004e1e5) bg_status_flat_pane_g9

0x0759,	// (0x0004bee3) context_pane_ParamLimits

0x0759,	// (0x0004bee3) context_pane

0xb18b,	// (0x00056915) navi_pane_ParamLimits

0xb18b,	// (0x00056915) navi_pane

0xb209,	// (0x00056993) signal_pane_ParamLimits

0xb209,	// (0x00056993) signal_pane

0x0008,

0xf83e,	// (0x0005afc8) bg_status_flat_pane_g

0xb299,	// (0x00056a23) status_pane_g1_ParamLimits

0xb299,	// (0x00056a23) status_pane_g1

0xb2af,	// (0x00056a39) status_pane_g2_ParamLimits

0xb2af,	// (0x00056a39) status_pane_g2

0x2054,	// (0x0004d7de) status_pane_g3_ParamLimits

0x2054,	// (0x0004d7de) status_pane_g3

0x0004,

0xf771,	// (0x0005aefb) status_pane_g_ParamLimits

0xf771,	// (0x0005aefb) status_pane_g

0xb2bb,	// (0x00056a45) title_pane_ParamLimits

0xb2bb,	// (0x00056a45) title_pane

0xb31e,	// (0x00056aa8) uni_indicator_pane_ParamLimits

0xb31e,	// (0x00056aa8) uni_indicator_pane

0xc5ec,	// (0x00057d76) bg_list_pane_ParamLimits

0xc5ec,	// (0x00057d76) bg_list_pane

0xa80e,	// (0x00055f98) find_pane

0x2268,	// (0x0004d9f2) listscroll_app_pane_ParamLimits

0x2268,	// (0x0004d9f2) listscroll_app_pane

0xc60c,	// (0x00057d96) listscroll_form_pane

0xa816,	// (0x00055fa0) listscroll_gen_pane_ParamLimits

0xa816,	// (0x00055fa0) listscroll_gen_pane

0x0072,	// (0x0004b7fc) listscroll_set_pane

0x35b7,	// (0x0004ed41) main_idle_act_pane

0xc480,	// (0x00057c0a) main_idle_trad_pane

0xc480,	// (0x00057c0a) main_list_empty_pane

0x9ec6,	// (0x00055650) main_midp_pane

0xc626,	// (0x00057db0) main_pane_g1_ParamLimits

0xc626,	// (0x00057db0) main_pane_g1

0xa82a,	// (0x00055fb4) popup_ai_message_window_ParamLimits

0xa82a,	// (0x00055fb4) popup_ai_message_window

0xa8db,	// (0x00056065) popup_fep_china_uni_window_ParamLimits

0xa8db,	// (0x00056065) popup_fep_china_uni_window

0xa935,	// (0x000560bf) popup_fep_japan_candidate_window_ParamLimits

0xa935,	// (0x000560bf) popup_fep_japan_candidate_window

0xa953,	// (0x000560dd) popup_fep_japan_predictive_window_ParamLimits

0xa953,	// (0x000560dd) popup_fep_japan_predictive_window

0xa965,	// (0x000560ef) popup_find_window

0xa982,	// (0x0005610c) popup_grid_graphic_window_ParamLimits

0xa982,	// (0x0005610c) popup_grid_graphic_window

0x01fd,	// (0x0004b987) popup_large_graphic_colour_window

0xaa20,	// (0x000561aa) popup_menu_window_ParamLimits

0xaa20,	// (0x000561aa) popup_menu_window

0xabf2,	// (0x0005637c) popup_note_image_window

0xabb8,	// (0x00056342) popup_note_wait_window_ParamLimits

0xabb8,	// (0x00056342) popup_note_wait_window

0xac0a,	// (0x00056394) popup_note_window_ParamLimits

0xac0a,	// (0x00056394) popup_note_window

0xacb9,	// (0x00056443) popup_query_code_window_ParamLimits

0xacb9,	// (0x00056443) popup_query_code_window

0xacf3,	// (0x0005647d) popup_query_data_code_window_ParamLimits

0xacf3,	// (0x0005647d) popup_query_data_code_window

0xad10,	// (0x0005649a) popup_query_data_window_ParamLimits

0xad10,	// (0x0005649a) popup_query_data_window

0xad92,	// (0x0005651c) popup_query_sat_info_window_ParamLimits

0xad92,	// (0x0005651c) popup_query_sat_info_window

0xae29,	// (0x000565b3) popup_snote_single_graphic_window_ParamLimits

0xae29,	// (0x000565b3) popup_snote_single_graphic_window

0xae29,	// (0x000565b3) popup_snote_single_text_window_ParamLimits

0xae29,	// (0x000565b3) popup_snote_single_text_window

0x04d0,	// (0x0004bc5a) popup_sub_window_general

0xaf86,	// (0x00056710) popup_window_general_ParamLimits

0xaf86,	// (0x00056710) popup_window_general

0x0615,	// (0x0004bd9f) power_save_pane

0xa668,	// (0x00055df2) control_pane_g1_ParamLimits

0xa668,	// (0x00055df2) control_pane_g1

0xa691,	// (0x00055e1b) control_pane_g2_ParamLimits

0xa691,	// (0x00055e1b) control_pane_g2

0xc5d6,	// (0x00057d60) control_pane_g3_ParamLimits

0xc5d6,	// (0x00057d60) control_pane_g3

0x0007,

0xf759,	// (0x0005aee3) control_pane_g_ParamLimits

0xf759,	// (0x0005aee3) control_pane_g

0xa6f9,	// (0x00055e83) control_pane_t1_ParamLimits

0xa6f9,	// (0x00055e83) control_pane_t1

0xa761,	// (0x00055eeb) control_pane_t2_ParamLimits

0xa761,	// (0x00055eeb) control_pane_t2

0x0002,

0xf76a,	// (0x0005aef4) control_pane_t_ParamLimits

0xf76a,	// (0x0005aef4) control_pane_t

0xa5df,	// (0x00055d69) navi_navi_volume_pane_cp1

0xa5e7,	// (0x00055d71) status_small_icon_pane

0xc582,	// (0x00057d0c) status_small_pane_g1_ParamLimits

0xc582,	// (0x00057d0c) status_small_pane_g1

0xa5ef,	// (0x00055d79) status_small_pane_g2_ParamLimits

0xa5ef,	// (0x00055d79) status_small_pane_g2

0xc5b6,	// (0x00057d40) status_small_pane_g3_ParamLimits

0xc5b6,	// (0x00057d40) status_small_pane_g3

0xa5fb,	// (0x00055d85) status_small_pane_g4_ParamLimits

0xa5fb,	// (0x00055d85) status_small_pane_g4

0xa609,	// (0x00055d93) status_small_pane_g5_ParamLimits

0xa609,	// (0x00055d93) status_small_pane_g5

0xa617,	// (0x00055da1) status_small_pane_g6_ParamLimits

0xa617,	// (0x00055da1) status_small_pane_g6

0x0007,

0xf748,	// (0x0005aed2) status_small_pane_g_ParamLimits

0xf748,	// (0x0005aed2) status_small_pane_g

0xa632,	// (0x00055dbc) status_small_pane_t1

0xa654,	// (0x00055dde) status_small_wait_pane_ParamLimits

0xa654,	// (0x00055dde) status_small_wait_pane

0xa352,	// (0x00055adc) aid_levels_signal_ParamLimits

0xa352,	// (0x00055adc) aid_levels_signal

0xa36a,	// (0x00055af4) signal_pane_g1_ParamLimits

0xa36a,	// (0x00055af4) signal_pane_g1

0xa385,	// (0x00055b0f) signal_pane_g2_ParamLimits

0xa385,	// (0x00055b0f) signal_pane_g2

0x0003,

0xf6d9,	// (0x0005ae63) signal_pane_g_ParamLimits

0xf6d9,	// (0x0005ae63) signal_pane_g

0xc07a,	// (0x00057804) context_pane_g1

0x924b,	// (0x000549d5) title_pane_g1

0x928e,	// (0x00054a18) title_pane_t1

0x931a,	// (0x00054aa4) title_pane_t2

0x9340,	// (0x00054aca) title_pane_t3

0x0002,

0xf532,	// (0x0005acbc) title_pane_t

0xb346,	// (0x00056ad0) aid_levels_battery_ParamLimits

0xb346,	// (0x00056ad0) aid_levels_battery

0xb362,	// (0x00056aec) battery_pane_g1_ParamLimits

0xb362,	// (0x00056aec) battery_pane_g1

0xb37f,	// (0x00056b09) battery_pane_g2_ParamLimits

0xb37f,	// (0x00056b09) battery_pane_g2

0x0001,

0xf77c,	// (0x0005af06) battery_pane_g_ParamLimits

0xf77c,	// (0x0005af06) battery_pane_g

0xc9f5,	// (0x0005817f) uni_indicator_pane_g1

0xca0b,	// (0x00058195) uni_indicator_pane_g2

0xca21,	// (0x000581ab) uni_indicator_pane_g3

0x0005,

0xf8e6,	// (0x0005b070) uni_indicator_pane_g

0xc323,	// (0x00057aad) navi_icon_pane_ParamLimits

0xc323,	// (0x00057aad) navi_icon_pane

0xc26c,	// (0x000579f6) navi_midp_pane

0xc33f,	// (0x00057ac9) navi_navi_pane

0xc349,	// (0x00057ad3) navi_text_pane_ParamLimits

0xc349,	// (0x00057ad3) navi_text_pane

0x8ec2,	// (0x0005464c) status_small_wait_pane_g1

0x98c0,	// (0x0005504a) status_small_wait_pane_g2

0x0001,

0xf8e1,	// (0x0005b06b) status_small_wait_pane_g

0xc94e,	// (0x000580d8) navi_navi_icon_text_pane

0x30a6,	// (0x0004e830) navi_navi_pane_g1_ParamLimits

0x30a6,	// (0x0004e830) navi_navi_pane_g1

0x30b8,	// (0x0004e842) navi_navi_pane_g2_ParamLimits

0x30b8,	// (0x0004e842) navi_navi_pane_g2

0x0001,

0xf8af,	// (0x0005b039) navi_navi_pane_g_ParamLimits

0xf8af,	// (0x0005b039) navi_navi_pane_g

0x30ca,	// (0x0004e854) navi_navi_tabs_pane

0x30d3,	// (0x0004e85d) navi_navi_text_pane

0xc94e,	// (0x000580d8) navi_navi_volume_pane

0x307a,	// (0x0004e804) navi_text_pane_t1

0x306e,	// (0x0004e7f8) navi_icon_pane_g1

0x2fc1,	// (0x0004e74b) navi_navi_text_pane_t1

0xb62c,	// (0x00056db6) navi_navi_volume_pane_g1

0x0bd3,	// (0x0004c35d) volume_small_pane

0x2f27,	// (0x0004e6b1) navi_navi_icon_text_pane_g1

0xc8a6,	// (0x00058030) navi_navi_icon_text_pane_t1

0xc33f,	// (0x00057ac9) navi_tabs_2_long_pane

0xc33f,	// (0x00057ac9) navi_tabs_2_pane

0xc33f,	// (0x00057ac9) navi_tabs_3_long_pane

0xc33f,	// (0x00057ac9) navi_tabs_3_pane

0xc33f,	// (0x00057ac9) navi_tabs_4_pane

0x0bab,	// (0x0004c335) tabs_2_active_pane_ParamLimits

0x0bab,	// (0x0004c335) tabs_2_active_pane

0x0bbb,	// (0x0004c345) tabs_2_passive_pane_ParamLimits

0x0bbb,	// (0x0004c345) tabs_2_passive_pane

0x0b79,	// (0x0004c303) tabs_3_active_pane_ParamLimits

0x0b79,	// (0x0004c303) tabs_3_active_pane

0x0b89,	// (0x0004c313) tabs_3_passive_pane_ParamLimits

0x0b89,	// (0x0004c313) tabs_3_passive_pane

0x0b9a,	// (0x0004c324) tabs_3_passive_pane_cp_ParamLimits

0x0b9a,	// (0x0004c324) tabs_3_passive_pane_cp

0x0b35,	// (0x0004c2bf) tabs_4_active_pane_ParamLimits

0x0b35,	// (0x0004c2bf) tabs_4_active_pane

0x0b46,	// (0x0004c2d0) tabs_4_passive_pane_ParamLimits

0x0b46,	// (0x0004c2d0) tabs_4_passive_pane

0x0b57,	// (0x0004c2e1) tabs_4_passive_pane_cp_ParamLimits

0x0b57,	// (0x0004c2e1) tabs_4_passive_pane_cp

0x0b68,	// (0x0004c2f2) tabs_4_passive_pane_cp2_ParamLimits

0x0b68,	// (0x0004c2f2) tabs_4_passive_pane_cp2

0x0b11,	// (0x0004c29b) tabs_2_long_active_pane_ParamLimits

0x0b11,	// (0x0004c29b) tabs_2_long_active_pane

0x0b23,	// (0x0004c2ad) tabs_2_long_passive_pane_ParamLimits

0x0b23,	// (0x0004c2ad) tabs_2_long_passive_pane

0x0acc,	// (0x0004c256) tabs_3_long_active_pane_ParamLimits

0x0acc,	// (0x0004c256) tabs_3_long_active_pane

0x0ae5,	// (0x0004c26f) tabs_3_long_passive_pane_ParamLimits

0x0ae5,	// (0x0004c26f) tabs_3_long_passive_pane

0x0af8,	// (0x0004c282) tabs_3_long_passive_pane_cp_ParamLimits

0x0af8,	// (0x0004c282) tabs_3_long_passive_pane_cp

0x0a72,	// (0x0004c1fc) volume_small_pane_g1

0x0a7b,	// (0x0004c205) volume_small_pane_g2

0x0a84,	// (0x0004c20e) volume_small_pane_g3

0x0a8d,	// (0x0004c217) volume_small_pane_g4

0x0a96,	// (0x0004c220) volume_small_pane_g5

0x0a9f,	// (0x0004c229) volume_small_pane_g6

0x0aa8,	// (0x0004c232) volume_small_pane_g7

0x0ab1,	// (0x0004c23b) volume_small_pane_g8

0x0aba,	// (0x0004c244) volume_small_pane_g9

0x0ac3,	// (0x0004c24d) volume_small_pane_g10

0x0009,

0xf87b,	// (0x0005b005) volume_small_pane_g

0x9352,	// (0x00054adc) bg_active_tab_pane_cp2_ParamLimits

0x9352,	// (0x00054adc) bg_active_tab_pane_cp2

0x9360,	// (0x00054aea) tabs_3_active_pane_g1

0x9368,	// (0x00054af2) tabs_3_active_pane_t1

0x9352,	// (0x00054adc) bg_passive_tab_pane_cp2_ParamLimits

0x9352,	// (0x00054adc) bg_passive_tab_pane_cp2

0x9360,	// (0x00054aea) tabs_3_passive_pane_g1

0x9368,	// (0x00054af2) tabs_3_passive_pane_t1

0x9352,	// (0x00054adc) bg_active_tab_pane_cp3_ParamLimits

0x9352,	// (0x00054adc) bg_active_tab_pane_cp3

0x937a,	// (0x00054b04) tabs_4_active_pane_g1

0x9382,	// (0x00054b0c) tabs_4_active_pane_t1

0x9352,	// (0x00054adc) bg_passive_tab_pane_cp3_ParamLimits

0x9352,	// (0x00054adc) bg_passive_tab_pane_cp3

0x937a,	// (0x00054b04) tabs_4_1_passive_pane_g1

0x9382,	// (0x00054b0c) tabs_4_1_passive_pane_t1

0x9ec6,	// (0x00055650) list_highlight_pane_cp2

0xcb2f,	// (0x000582b9) list_set_pane_ParamLimits

0xcb2f,	// (0x000582b9) list_set_pane

0xcbc9,	// (0x00058353) main_pane_set_t1_ParamLimits

0xcbc9,	// (0x00058353) main_pane_set_t1

0xcbe9,	// (0x00058373) main_pane_set_t2_ParamLimits

0xcbe9,	// (0x00058373) main_pane_set_t2

0xcbfd,	// (0x00058387) main_pane_set_t3_ParamLimits

0xcbfd,	// (0x00058387) main_pane_set_t3

0xcc0f,	// (0x00058399) main_pane_set_t4_ParamLimits

0xcc0f,	// (0x00058399) main_pane_set_t4

0x0003,

0xf94b,	// (0x0005b0d5) main_pane_set_t_ParamLimits

0xf94b,	// (0x0005b0d5) main_pane_set_t

0xcc21,	// (0x000583ab) setting_code_pane

0xcc2b,	// (0x000583b5) setting_slider_graphic_pane

0xcc2b,	// (0x000583b5) setting_slider_pane

0xcc2b,	// (0x000583b5) setting_text_pane

0xcc2b,	// (0x000583b5) setting_volume_pane

0x9394,	// (0x00054b1e) volume_set_pane

0x939c,	// (0x00054b26) bg_set_opt_pane_cp

0x93aa,	// (0x00054b34) setting_slider_pane_t1

0x93c3,	// (0x00054b4d) setting_slider_pane_t2

0x93dd,	// (0x00054b67) setting_slider_pane_t3

0x0002,

0xf539,	// (0x0005acc3) setting_slider_pane_t

0x93f5,	// (0x00054b7f) slider_set_pane

0x9101,	// (0x0005488b) bg_set_opt_pane_cp2

0x940b,	// (0x00054b95) setting_slider_graphic_pane_g1

0x9414,	// (0x00054b9e) setting_slider_graphic_pane_t1

0x9424,	// (0x00054bae) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x0005acca) setting_slider_graphic_pane_t

0x9434,	// (0x00054bbe) slider_set_pane_cp

0x9101,	// (0x0005488b) input_focus_pane_cp1

0x359e,	// (0x0004ed28) list_set_text_pane

0x8ec2,	// (0x0005464c) setting_text_pane_g1

0x9101,	// (0x0005488b) input_focus_pane_cp2

0x8ec2,	// (0x0005464c) setting_code_pane_g1

0x943c,	// (0x00054bc6) setting_code_pane_t1

0xe7de,	// (0x00059f68) set_text_pane_t1_ParamLimits

0xe7de,	// (0x00059f68) set_text_pane_t1

0x9d3a,	// (0x000554c4) set_opt_bg_pane_g1

0x9d42,	// (0x000554cc) set_opt_bg_pane_g2

0xcae4,	// (0x0005826e) set_opt_bg_pane_g3

0x9d52,	// (0x000554dc) set_opt_bg_pane_g4

0x9d5a,	// (0x000554e4) set_opt_bg_pane_g5

0x9d62,	// (0x000554ec) set_opt_bg_pane_g6

0xcaee,	// (0x00058278) set_opt_bg_pane_g7

0xcaf6,	// (0x00058280) set_opt_bg_pane_g8

0xcb00,	// (0x0005828a) set_opt_bg_pane_g9

0x0008,

0xf938,	// (0x0005b0c2) set_opt_bg_pane_g

0xcad7,	// (0x00058261) slider_set_pane_g1

0x0c40,	// (0x0004c3ca) slider_set_pane_g2

0x0006,

0xf929,	// (0x0005b0b3) slider_set_pane_g

0xb634,	// (0x00056dbe) volume_set_pane_g1

0xb63c,	// (0x00056dc6) volume_set_pane_g2

0xb644,	// (0x00056dce) volume_set_pane_g3

0xb64c,	// (0x00056dd6) volume_set_pane_g4

0xb654,	// (0x00056dde) volume_set_pane_g5

0xb65c,	// (0x00056de6) volume_set_pane_g6

0xb664,	// (0x00056dee) volume_set_pane_g7

0xb66c,	// (0x00056df6) volume_set_pane_g8

0xb674,	// (0x00056dfe) volume_set_pane_g9

0xb67c,	// (0x00056e06) volume_set_pane_g10

0x0009,

0xf901,	// (0x0005b08b) volume_set_pane_g

0x944a,	// (0x00054bd4) indicator_pane_ParamLimits

0x944a,	// (0x00054bd4) indicator_pane

0x9472,	// (0x00054bfc) main_idle_pane_g2_ParamLimits

0x9472,	// (0x00054bfc) main_idle_pane_g2

0x94aa,	// (0x00054c34) main_pane_idle_g1_ParamLimits

0x94aa,	// (0x00054c34) main_pane_idle_g1

0x94d1,	// (0x00054c5b) popup_clock_digital_analogue_window_ParamLimits

0x94d1,	// (0x00054c5b) popup_clock_digital_analogue_window

0x94e8,	// (0x00054c72) soft_indicator_pane_ParamLimits

0x94e8,	// (0x00054c72) soft_indicator_pane

0x950c,	// (0x00054c96) wallpaper_pane_ParamLimits

0x950c,	// (0x00054c96) wallpaper_pane

0x8ec2,	// (0x0005464c) wallpaper_pane_g1

0x9526,	// (0x00054cb0) indicator_pane_g1_ParamLimits

0x9526,	// (0x00054cb0) indicator_pane_g1

0x3953,	// (0x0004f0dd) navi_navi_icon_text_pane_srt_g1

0x954b,	// (0x00054cd5) soft_indicator_pane_t1

0x9565,	// (0x00054cef) aid_ps_area_pane

0x9576,	// (0x00054d00) aid_ps_clock_pane

0x9584,	// (0x00054d0e) aid_ps_indicator_pane

0x9590,	// (0x00054d1a) indicator_ps_pane_ParamLimits

0x9590,	// (0x00054d1a) indicator_ps_pane

0x959f,	// (0x00054d29) power_save_pane_g1_ParamLimits

0x959f,	// (0x00054d29) power_save_pane_g1

0x95ab,	// (0x00054d35) power_save_pane_g2_ParamLimits

0x95ab,	// (0x00054d35) power_save_pane_g2

0xe79e,	// (0x00059f28) aid_navinavi_width_pane

0x9565,	// (0x00054cef) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x0005accf) power_save_pane_g_ParamLimits

0xf545,	// (0x0005accf) power_save_pane_g

0x95b9,	// (0x00054d43) power_save_pane_t1_ParamLimits

0x95b9,	// (0x00054d43) power_save_pane_t1

0x9576,	// (0x00054d00) aid_ps_clock_pane_ParamLimits

0x9584,	// (0x00054d0e) aid_ps_indicator_pane_ParamLimits

0x95cb,	// (0x00054d55) power_save_pane_t4_ParamLimits

0x95cb,	// (0x00054d55) power_save_pane_t4

0x0001,

0xf54a,	// (0x0005acd4) power_save_pane_t_ParamLimits

0xf54a,	// (0x0005acd4) power_save_pane_t

0x95f5,	// (0x00054d7f) power_save_t3_ParamLimits

0x95f5,	// (0x00054d7f) power_save_t3

0x95e0,	// (0x00054d6a) power_save_t2_ParamLimits

0x95e0,	// (0x00054d6a) power_save_t2

0x960a,	// (0x00054d94) indicator_ps_pane_g1

0x9613,	// (0x00054d9d) ai_gene_pane_ParamLimits

0x9613,	// (0x00054d9d) ai_gene_pane

0x962a,	// (0x00054db4) ai_links_pane_ParamLimits

0x962a,	// (0x00054db4) ai_links_pane

0x9642,	// (0x00054dcc) indicator_pane_cp1_ParamLimits

0x9642,	// (0x00054dcc) indicator_pane_cp1

0x9651,	// (0x00054ddb) main_pane_idle_g1_cp_ParamLimits

0x9651,	// (0x00054ddb) main_pane_idle_g1_cp

0x9669,	// (0x00054df3) popup_ai_links_title_window

0x9672,	// (0x00054dfc) soft_indicator_pane_cp1_ParamLimits

0x9672,	// (0x00054dfc) soft_indicator_pane_cp1

0x3365,	// (0x0004eaef) ai_links_pane_g1

0x336e,	// (0x0004eaf8) grid_ai_links_pane

0xc9ec,	// (0x00058176) ai_gene_pane_1

0x3353,	// (0x0004eadd) ai_gene_pane_2

0x335c,	// (0x0004eae6) list_highlight_pane_cp4

0xc9c8,	// (0x00058152) cell_ai_link_pane_ParamLimits

0xc9c8,	// (0x00058152) cell_ai_link_pane

0x3324,	// (0x0004eaae) cell_ai_link_pane_g1

0x98c0,	// (0x0005504a) cell_ai_link_pane_g2

0x0001,

0xf8dc,	// (0x0005b066) cell_ai_link_pane_g

0x9101,	// (0x0005488b) grid_highlight_cp2

0x9101,	// (0x0005488b) bg_popup_sub_pane_cp1

0x9694,	// (0x00054e1e) popup_ai_links_title_window_t1

0x3274,	// (0x0004e9fe) ai_gene_pane_1_g1_ParamLimits

0x3274,	// (0x0004e9fe) ai_gene_pane_1_g1

0x3280,	// (0x0004ea0a) ai_gene_pane_1_g2_ParamLimits

0x3280,	// (0x0004ea0a) ai_gene_pane_1_g2

0x0001,

0xf8d2,	// (0x0005b05c) ai_gene_pane_1_g_ParamLimits

0xf8d2,	// (0x0005b05c) ai_gene_pane_1_g

0x328d,	// (0x0004ea17) ai_gene_pane_1_t1_ParamLimits

0x328d,	// (0x0004ea17) ai_gene_pane_1_t1

0x32c1,	// (0x0004ea4b) grid_ai_soft_ind_pane

0x325f,	// (0x0004e9e9) ai_gene_pane_2_t1_ParamLimits

0x325f,	// (0x0004e9e9) ai_gene_pane_2_t1

0x96a3,	// (0x00054e2d) main_pane_empty_t1_ParamLimits

0x96a3,	// (0x00054e2d) main_pane_empty_t1

0x96bb,	// (0x00054e45) main_pane_empty_t2_ParamLimits

0x96bb,	// (0x00054e45) main_pane_empty_t2

0x96d0,	// (0x00054e5a) main_pane_empty_t3_ParamLimits

0x96d0,	// (0x00054e5a) main_pane_empty_t3

0x96e2,	// (0x00054e6c) main_pane_empty_t4_ParamLimits

0x96e2,	// (0x00054e6c) main_pane_empty_t4

0x96f4,	// (0x00054e7e) main_pane_empty_t5_ParamLimits

0x96f4,	// (0x00054e7e) main_pane_empty_t5

0x0004,

0xf54f,	// (0x0005acd9) main_pane_empty_t_ParamLimits

0xf54f,	// (0x0005acd9) main_pane_empty_t

0x9dfd,	// (0x00055587) bg_popup_window_pane_ParamLimits

0x9dfd,	// (0x00055587) bg_popup_window_pane

0xc942,	// (0x000580cc) find_popup_pane_cp2_ParamLimits

0xc942,	// (0x000580cc) find_popup_pane_cp2

0x2fdb,	// (0x0004e765) heading_pane_ParamLimits

0x2fdb,	// (0x0004e765) heading_pane

0x9101,	// (0x0005488b) bg_popup_sub_pane

0xc8c3,	// (0x0005804d) bg_popup_window_pane_g1_ParamLimits

0xc8c3,	// (0x0005804d) bg_popup_window_pane_g1

0xc8d2,	// (0x0005805c) bg_popup_window_pane_g2_ParamLimits

0xc8d2,	// (0x0005805c) bg_popup_window_pane_g2

0xc8de,	// (0x00058068) bg_popup_window_pane_g3_ParamLimits

0xc8de,	// (0x00058068) bg_popup_window_pane_g3

0xc8ea,	// (0x00058074) bg_popup_window_pane_g4_ParamLimits

0xc8ea,	// (0x00058074) bg_popup_window_pane_g4

0xc8f9,	// (0x00058083) bg_popup_window_pane_g5_ParamLimits

0xc8f9,	// (0x00058083) bg_popup_window_pane_g5

0xc909,	// (0x00058093) bg_popup_window_pane_g6_ParamLimits

0xc909,	// (0x00058093) bg_popup_window_pane_g6

0xc915,	// (0x0005809f) bg_popup_window_pane_g7_ParamLimits

0xc915,	// (0x0005809f) bg_popup_window_pane_g7

0xc924,	// (0x000580ae) bg_popup_window_pane_g8_ParamLimits

0xc924,	// (0x000580ae) bg_popup_window_pane_g8

0xc933,	// (0x000580bd) bg_popup_window_pane_g9_ParamLimits

0xc933,	// (0x000580bd) bg_popup_window_pane_g9

0x2fb5,	// (0x0004e73f) bg_popup_window_pane_g10_ParamLimits

0x2fb5,	// (0x0004e73f) bg_popup_window_pane_g10

0x0009,

0xf89a,	// (0x0005b024) bg_popup_window_pane_g_ParamLimits

0xf89a,	// (0x0005b024) bg_popup_window_pane_g

0x2ede,	// (0x0004e668) bg_popup_heading_pane_ParamLimits

0x2ede,	// (0x0004e668) bg_popup_heading_pane

0x0d73,	// (0x0004c4fd) tabs_4_passive_pane_cp_srt_ParamLimits

0x0d73,	// (0x0004c4fd) tabs_4_passive_pane_cp_srt

0x0d85,	// (0x0004c50f) tabs_4_passive_pane_srt_ParamLimits

0x2ef2,	// (0x0004e67c) heading_pane_g2

0x0d85,	// (0x0004c50f) tabs_4_passive_pane_srt

0x2268,	// (0x0004d9f2) bg_passive_tab_pane_cp3_srt_ParamLimits

0x2268,	// (0x0004d9f2) bg_passive_tab_pane_cp3_srt

0x2efa,	// (0x0004e684) heading_pane_t1_ParamLimits

0x2efa,	// (0x0004e684) heading_pane_t1

0x2f11,	// (0x0004e69b) heading_pane_t2_ParamLimits

0x2f11,	// (0x0004e69b) heading_pane_t2

0x0001,

0xf895,	// (0x0005b01f) heading_pane_t_ParamLimits

0xf895,	// (0x0005b01f) heading_pane_t

0x2a1b,	// (0x0004e1a5) bg_popup_heading_pane_g1

0x2aca,	// (0x0004e254) bg_popup_heading_pane_g2

0x2ad4,	// (0x0004e25e) bg_popup_heading_pane_g3

0x2ade,	// (0x0004e268) bg_popup_heading_pane_g4

0x2ae8,	// (0x0004e272) bg_popup_heading_pane_g5

0x2af2,	// (0x0004e27c) bg_popup_heading_pane_g6

0x2afa,	// (0x0004e284) bg_popup_heading_pane_g7

0x2b02,	// (0x0004e28c) bg_popup_heading_pane_g8

0x2b0c,	// (0x0004e296) bg_popup_heading_pane_g9

0x0008,

0xf851,	// (0x0005afdb) bg_popup_heading_pane_g

0x21dc,	// (0x0004d966) bg_popup_sub_pane_g1

0x21e4,	// (0x0004d96e) bg_popup_sub_pane_g2

0x21ec,	// (0x0004d976) bg_popup_sub_pane_g3

0x21f4,	// (0x0004d97e) bg_popup_sub_pane_g4

0x21fc,	// (0x0004d986) bg_popup_sub_pane_g5

0x2204,	// (0x0004d98e) bg_popup_sub_pane_g6

0x220c,	// (0x0004d996) bg_popup_sub_pane_g7

0x2214,	// (0x0004d99e) bg_popup_sub_pane_g8

0x221c,	// (0x0004d9a6) bg_popup_sub_pane_g9

0x0008,

0xf82b,	// (0x0005afb5) bg_popup_sub_pane_g

0x9352,	// (0x00054adc) bg_popup_window_pane_cp5_ParamLimits

0x9352,	// (0x00054adc) bg_popup_window_pane_cp5

0x9714,	// (0x00054e9e) popup_note_window_g1_ParamLimits

0x9714,	// (0x00054e9e) popup_note_window_g1

0x9720,	// (0x00054eaa) popup_note_window_t1_ParamLimits

0x9720,	// (0x00054eaa) popup_note_window_t1

0x9736,	// (0x00054ec0) popup_note_window_t2_ParamLimits

0x9736,	// (0x00054ec0) popup_note_window_t2

0x974c,	// (0x00054ed6) popup_note_window_t3_ParamLimits

0x974c,	// (0x00054ed6) popup_note_window_t3

0x9762,	// (0x00054eec) popup_note_window_t4_ParamLimits

0x9762,	// (0x00054eec) popup_note_window_t4

0x978a,	// (0x00054f14) popup_note_window_t5_ParamLimits

0x978a,	// (0x00054f14) popup_note_window_t5

0x0004,

0xf55a,	// (0x0005ace4) popup_note_window_t_ParamLimits

0xf55a,	// (0x0005ace4) popup_note_window_t

0x97d4,	// (0x00054f5e) bg_popup_window_pane_cp6_ParamLimits

0x97d4,	// (0x00054f5e) bg_popup_window_pane_cp6

0x2997,	// (0x0004e121) popup_note_image_window_g1_ParamLimits

0x2997,	// (0x0004e121) popup_note_image_window_g1

0xc768,	// (0x00057ef2) popup_note_image_window_g2_ParamLimits

0xc768,	// (0x00057ef2) popup_note_image_window_g2

0x0001,

0xf81f,	// (0x0005afa9) popup_note_image_window_g_ParamLimits

0xf81f,	// (0x0005afa9) popup_note_image_window_g

0x29bc,	// (0x0004e146) popup_note_image_window_t1_ParamLimits

0x29bc,	// (0x0004e146) popup_note_image_window_t1

0x29d5,	// (0x0004e15f) popup_note_image_window_t2_ParamLimits

0x29d5,	// (0x0004e15f) popup_note_image_window_t2

0x29ee,	// (0x0004e178) popup_note_image_window_t3_ParamLimits

0x29ee,	// (0x0004e178) popup_note_image_window_t3

0x0002,

0xf824,	// (0x0005afae) popup_note_image_window_t_ParamLimits

0xf824,	// (0x0005afae) popup_note_image_window_t

0x2860,	// (0x0004dfea) bg_popup_window_pane_cp7_ParamLimits

0x2860,	// (0x0004dfea) bg_popup_window_pane_cp7

0x2890,	// (0x0004e01a) popup_note_wait_window_g1_ParamLimits

0x2890,	// (0x0004e01a) popup_note_wait_window_g1

0x289c,	// (0x0004e026) popup_note_wait_window_g2_ParamLimits

0x289c,	// (0x0004e026) popup_note_wait_window_g2

0x0002,

0xf80d,	// (0x0005af97) popup_note_wait_window_g_ParamLimits

0xf80d,	// (0x0005af97) popup_note_wait_window_g

0x28b4,	// (0x0004e03e) popup_note_wait_window_t1_ParamLimits

0x28b4,	// (0x0004e03e) popup_note_wait_window_t1

0xc709,	// (0x00057e93) popup_note_wait_window_t2_ParamLimits

0xc709,	// (0x00057e93) popup_note_wait_window_t2

0xc726,	// (0x00057eb0) popup_note_wait_window_t3_ParamLimits

0xc726,	// (0x00057eb0) popup_note_wait_window_t3

0xc739,	// (0x00057ec3) popup_note_wait_window_t4_ParamLimits

0xc739,	// (0x00057ec3) popup_note_wait_window_t4

0x0004,

0xf814,	// (0x0005af9e) popup_note_wait_window_t_ParamLimits

0xf814,	// (0x0005af9e) popup_note_wait_window_t

0x2930,	// (0x0004e0ba) wait_bar_pane_ParamLimits

0x2930,	// (0x0004e0ba) wait_bar_pane

0x9101,	// (0x0005488b) wait_anim_pane

0x9101,	// (0x0005488b) wait_border_pane

0x8ec2,	// (0x0005464c) wait_anim_pane_g1

0x8ec2,	// (0x0005464c) wait_anim_pane_g2

0x0001,

0xf6d4,	// (0x0005ae5e) wait_anim_pane_g

0x280c,	// (0x0004df96) wait_border_pane_g1

0x2817,	// (0x0004dfa1) wait_border_pane_g2

0x2820,	// (0x0004dfaa) wait_border_pane_g3

0x0002,

0xf806,	// (0x0005af90) wait_border_pane_g

0x2677,	// (0x0004de01) bg_popup_window_pane_cp16_ParamLimits

0x2677,	// (0x0004de01) bg_popup_window_pane_cp16

0xc6b9,	// (0x00057e43) indicator_popup_pane_cp4_ParamLimits

0xc6b9,	// (0x00057e43) indicator_popup_pane_cp4

0x278b,	// (0x0004df15) popup_query_data_window_t1_ParamLimits

0x278b,	// (0x0004df15) popup_query_data_window_t1

0x279d,	// (0x0004df27) popup_query_data_window_t2_ParamLimits

0x279d,	// (0x0004df27) popup_query_data_window_t2

0x27b6,	// (0x0004df40) popup_query_data_window_t3_ParamLimits

0x27b6,	// (0x0004df40) popup_query_data_window_t3

0x0002,

0xf7ff,	// (0x0005af89) popup_query_data_window_t_ParamLimits

0xf7ff,	// (0x0005af89) popup_query_data_window_t

0xc6cd,	// (0x00057e57) query_popup_data_pane_ParamLimits

0xc6cd,	// (0x00057e57) query_popup_data_pane

0xc6e1,	// (0x00057e6b) query_popup_data_pane_cp1_ParamLimits

0xc6e1,	// (0x00057e6b) query_popup_data_pane_cp1

0x2677,	// (0x0004de01) bg_popup_window_pane_cp10_ParamLimits

0x2677,	// (0x0004de01) bg_popup_window_pane_cp10

0xc634,	// (0x00057dbe) indicator_popup_pane_ParamLimits

0xc634,	// (0x00057dbe) indicator_popup_pane

0xc656,	// (0x00057de0) popup_query_code_window_t1_ParamLimits

0xc656,	// (0x00057de0) popup_query_code_window_t1

0xc670,	// (0x00057dfa) popup_query_code_window_t2_ParamLimits

0xc670,	// (0x00057dfa) popup_query_code_window_t2

0x272e,	// (0x0004deb8) popup_query_code_window_t3_ParamLimits

0x272e,	// (0x0004deb8) popup_query_code_window_t3

0x0002,

0xf7f8,	// (0x0005af82) popup_query_code_window_t_ParamLimits

0xf7f8,	// (0x0005af82) popup_query_code_window_t

0x275d,	// (0x0004dee7) query_popup_pane_ParamLimits

0x275d,	// (0x0004dee7) query_popup_pane

0x97d4,	// (0x00054f5e) bg_popup_window_pane_cp15_ParamLimits

0x97d4,	// (0x00054f5e) bg_popup_window_pane_cp15

0x97f2,	// (0x00054f7c) indicator_popup_pane_cp1_ParamLimits

0x97f2,	// (0x00054f7c) indicator_popup_pane_cp1

0x9805,	// (0x00054f8f) indicator_popup_pane_cp2_ParamLimits

0x9805,	// (0x00054f8f) indicator_popup_pane_cp2

0x9818,	// (0x00054fa2) popup_query_data_code_window_g1_ParamLimits

0x9818,	// (0x00054fa2) popup_query_data_code_window_g1

0x982b,	// (0x00054fb5) popup_query_data_code_window_t1_ParamLimits

0x982b,	// (0x00054fb5) popup_query_data_code_window_t1

0x983d,	// (0x00054fc7) popup_query_data_code_window_t2_ParamLimits

0x983d,	// (0x00054fc7) popup_query_data_code_window_t2

0x984f,	// (0x00054fd9) popup_query_data_code_window_t3_ParamLimits

0x984f,	// (0x00054fd9) popup_query_data_code_window_t3

0x9865,	// (0x00054fef) popup_query_data_code_window_t4_ParamLimits

0x9865,	// (0x00054fef) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x0005acef) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x0005acef) popup_query_data_code_window_t

0xc2e1,	// (0x00057a6b) list_single_midp_graphic_pane_g3

0x987d,	// (0x00055007) query_popup_data_pane_cp2_ParamLimits

0x9890,	// (0x0005501a) query_popup_pane_cp2_ParamLimits

0x9890,	// (0x0005501a) query_popup_pane_cp2

0x9101,	// (0x0005488b) bg_popup_window_pane_cp11

0x265b,	// (0x0004dde5) heading_pane_cp5

0x2663,	// (0x0004dded) listscroll_popup_info_pane

0x9101,	// (0x0005488b) input_focus_pane_cp3

0x98a3,	// (0x0005502d) query_popup_pane_t1

0x98b1,	// (0x0005503b) list_popup_info_pane_ParamLimits

0x98b1,	// (0x0005503b) list_popup_info_pane

0x98c0,	// (0x0005504a) listscroll_popup_info_pane_g1

0x98c8,	// (0x00055052) scroll_pane_cp7

0x98d2,	// (0x0005505c) popup_info_list_pane_t1_ParamLimits

0x98d2,	// (0x0005505c) popup_info_list_pane_t1

0x98ec,	// (0x00055076) popup_info_list_pane_t2_ParamLimits

0x98ec,	// (0x00055076) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x0005acf8) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x0005acf8) popup_info_list_pane_t

0x9101,	// (0x0005488b) bg_popup_window_pane_cp12

0xcdd0,	// (0x0005855a) find_popup_pane

0x939c,	// (0x00054b26) bg_popup_window_pane_cp3

0x9906,	// (0x00055090) heading_pane_cp3

0x9915,	// (0x0005509f) listscroll_popup_graphic_pane

0x9101,	// (0x0005488b) bg_popup_window_pane_cp4

0x9975,	// (0x000550ff) heading_pane_cp4

0x997f,	// (0x00055109) listscroll_popup_colour_pane

0x9987,	// (0x00055111) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x9987,	// (0x00055111) cell_large_graphic_colour_none_popup_pane

0x999b,	// (0x00055125) grid_large_graphic_colour_popup_pane_ParamLimits

0x999b,	// (0x00055125) grid_large_graphic_colour_popup_pane

0x99bf,	// (0x00055149) listscroll_popup_colour_pane_g1_ParamLimits

0x99bf,	// (0x00055149) listscroll_popup_colour_pane_g1

0x99d6,	// (0x00055160) listscroll_popup_colour_pane_g2_ParamLimits

0x99d6,	// (0x00055160) listscroll_popup_colour_pane_g2

0x99ea,	// (0x00055174) listscroll_popup_colour_pane_g3_ParamLimits

0x99ea,	// (0x00055174) listscroll_popup_colour_pane_g3

0x99fa,	// (0x00055184) listscroll_popup_colour_pane_g4_ParamLimits

0x99fa,	// (0x00055184) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x0005acfd) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x0005acfd) listscroll_popup_colour_pane_g

0x9a0a,	// (0x00055194) scroll_pane_cp6_ParamLimits

0x9a0a,	// (0x00055194) scroll_pane_cp6

0x9a1c,	// (0x000551a6) cell_large_graphic_colour_popup_pane_ParamLimits

0x9a1c,	// (0x000551a6) cell_large_graphic_colour_popup_pane

0x9a3b,	// (0x000551c5) cell_large_graphic_colour_none_popup_pane_t1

0x9101,	// (0x0005488b) grid_highlight_pane_cp5

0x9a4a,	// (0x000551d4) cell_large_graphic_colour_popup_pane_g1

0x9a52,	// (0x000551dc) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x0005ad06) cell_large_graphic_colour_popup_pane_g

0x9a5a,	// (0x000551e4) cell_large_graphic_colour_popup_pane_g2_copy1

0x9a63,	// (0x000551ed) grid_highlight_pane_cp4

0x9a6b,	// (0x000551f5) bg_popup_window_pane_cp8_ParamLimits

0x9a6b,	// (0x000551f5) bg_popup_window_pane_cp8

0x9a86,	// (0x00055210) popup_snote_single_text_window_g1_ParamLimits

0x9a86,	// (0x00055210) popup_snote_single_text_window_g1

0x9a98,	// (0x00055222) popup_snote_single_text_window_t1_ParamLimits

0x9a98,	// (0x00055222) popup_snote_single_text_window_t1

0x9aab,	// (0x00055235) popup_snote_single_text_window_t2_ParamLimits

0x9aab,	// (0x00055235) popup_snote_single_text_window_t2

0x9abe,	// (0x00055248) popup_snote_single_text_window_t3_ParamLimits

0x9abe,	// (0x00055248) popup_snote_single_text_window_t3

0x9af7,	// (0x00055281) popup_snote_single_text_window_t4_ParamLimits

0x9af7,	// (0x00055281) popup_snote_single_text_window_t4

0x9b2b,	// (0x000552b5) popup_snote_single_text_window_t5_ParamLimits

0x9b2b,	// (0x000552b5) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x0005ad0b) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x0005ad0b) popup_snote_single_text_window_t

0x9b5a,	// (0x000552e4) bg_popup_window_pane_cp9_ParamLimits

0x9b5a,	// (0x000552e4) bg_popup_window_pane_cp9

0x9a86,	// (0x00055210) popup_snote_single_graphic_window_g1_ParamLimits

0x9a86,	// (0x00055210) popup_snote_single_graphic_window_g1

0x9b68,	// (0x000552f2) popup_snote_single_graphic_window_g2_ParamLimits

0x9b68,	// (0x000552f2) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x0005ad16) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x0005ad16) popup_snote_single_graphic_window_g

0x9b74,	// (0x000552fe) popup_snote_single_graphic_window_t1_ParamLimits

0x9b74,	// (0x000552fe) popup_snote_single_graphic_window_t1

0x9b87,	// (0x00055311) popup_snote_single_graphic_window_t2_ParamLimits

0x9b87,	// (0x00055311) popup_snote_single_graphic_window_t2

0x9abe,	// (0x00055248) popup_snote_single_graphic_window_t3_ParamLimits

0x9abe,	// (0x00055248) popup_snote_single_graphic_window_t3

0x9af7,	// (0x00055281) popup_snote_single_graphic_window_t4_ParamLimits

0x9af7,	// (0x00055281) popup_snote_single_graphic_window_t4

0x9b9a,	// (0x00055324) popup_snote_single_graphic_window_t5_ParamLimits

0x9b9a,	// (0x00055324) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x0005ad1b) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x0005ad1b) popup_snote_single_graphic_window_t

0x38af,	// (0x0004f039) grid_graphic_popup_pane_ParamLimits

0x38af,	// (0x0004f039) grid_graphic_popup_pane

0x38d9,	// (0x0004f063) listscroll_popup_graphic_pane_g1_ParamLimits

0x38d9,	// (0x0004f063) listscroll_popup_graphic_pane_g1

0xcd6e,	// (0x000584f8) listscroll_popup_graphic_pane_g2_ParamLimits

0xcd6e,	// (0x000584f8) listscroll_popup_graphic_pane_g2

0x0001,

0xf975,	// (0x0005b0ff) listscroll_popup_graphic_pane_g_ParamLimits

0xf975,	// (0x0005b0ff) listscroll_popup_graphic_pane_g

0x3901,	// (0x0004f08b) scroll_pane_cp5

0xcd2d,	// (0x000584b7) cell_graphic_popup_pane_ParamLimits

0xcd2d,	// (0x000584b7) cell_graphic_popup_pane

0x3826,	// (0x0004efb0) cell_graphic_popup_pane_g1

0x382e,	// (0x0004efb8) cell_graphic_popup_pane_g2

0x9a5a,	// (0x000551e4) cell_graphic_popup_pane_g3

0x0002,

0xf96e,	// (0x0005b0f8) cell_graphic_popup_pane_g

0x3837,	// (0x0004efc1) cell_graphic_popup_pane_t2

0x9a63,	// (0x000551ed) grid_highlight_pane_cp3

0x9bdb,	// (0x00055365) list_gen_pane_ParamLimits

0x9bdb,	// (0x00055365) list_gen_pane

0x9c0d,	// (0x00055397) scroll_pane

0xcc97,	// (0x00058421) bg_list_pane_g1_ParamLimits

0xcc97,	// (0x00058421) bg_list_pane_g1

0xccb2,	// (0x0005843c) bg_list_pane_g2_ParamLimits

0xccb2,	// (0x0005843c) bg_list_pane_g2

0xccc5,	// (0x0005844f) bg_list_pane_g3_ParamLimits

0xccc5,	// (0x0005844f) bg_list_pane_g3

0xccd7,	// (0x00058461) bg_list_pane_g4_ParamLimits

0xccd7,	// (0x00058461) bg_list_pane_g4

0xcce9,	// (0x00058473) bg_list_pane_g5_ParamLimits

0xcce9,	// (0x00058473) bg_list_pane_g5

0x0004,

0xf963,	// (0x0005b0ed) bg_list_pane_g_ParamLimits

0xf963,	// (0x0005b0ed) bg_list_pane_g

0xb6f0,	// (0x00056e7a) list_double2_graphic_large_graphic_pane_ParamLimits

0xb6f0,	// (0x00056e7a) list_double2_graphic_large_graphic_pane

0xb6f0,	// (0x00056e7a) list_double2_graphic_pane_ParamLimits

0xb6f0,	// (0x00056e7a) list_double2_graphic_pane

0xb6f0,	// (0x00056e7a) list_double2_large_graphic_pane_ParamLimits

0xb6f0,	// (0x00056e7a) list_double2_large_graphic_pane

0xb6f0,	// (0x00056e7a) list_double2_pane_ParamLimits

0xb6f0,	// (0x00056e7a) list_double2_pane

0xb6f0,	// (0x00056e7a) list_double_graphic_heading_pane_ParamLimits

0xb6f0,	// (0x00056e7a) list_double_graphic_heading_pane

0xb6f0,	// (0x00056e7a) list_double_graphic_pane_ParamLimits

0xb6f0,	// (0x00056e7a) list_double_graphic_pane

0xb6f0,	// (0x00056e7a) list_double_heading_pane_ParamLimits

0xb6f0,	// (0x00056e7a) list_double_heading_pane

0xb6f0,	// (0x00056e7a) list_double_large_graphic_pane_ParamLimits

0xb6f0,	// (0x00056e7a) list_double_large_graphic_pane

0xb6f0,	// (0x00056e7a) list_double_number_pane_ParamLimits

0xb6f0,	// (0x00056e7a) list_double_number_pane

0xb6f0,	// (0x00056e7a) list_double_pane_ParamLimits

0xb6f0,	// (0x00056e7a) list_double_pane

0xb6f0,	// (0x00056e7a) list_double_time_pane_ParamLimits

0xb6f0,	// (0x00056e7a) list_double_time_pane

0xb6f0,	// (0x00056e7a) list_setting_number_pane_ParamLimits

0xb6f0,	// (0x00056e7a) list_setting_number_pane

0xb6f0,	// (0x00056e7a) list_setting_pane_ParamLimits

0xb6f0,	// (0x00056e7a) list_setting_pane

0x9e68,	// (0x000555f2) list_single_2graphic_pane_ParamLimits

0x9e68,	// (0x000555f2) list_single_2graphic_pane

0x9e68,	// (0x000555f2) list_single_graphic_heading_pane_ParamLimits

0x9e68,	// (0x000555f2) list_single_graphic_heading_pane

0x9e68,	// (0x000555f2) list_single_graphic_pane_ParamLimits

0x9e68,	// (0x000555f2) list_single_graphic_pane

0x9e68,	// (0x000555f2) list_single_heading_pane_ParamLimits

0x9e68,	// (0x000555f2) list_single_heading_pane

0xcc84,	// (0x0005840e) list_single_large_graphic_pane_ParamLimits

0xcc84,	// (0x0005840e) list_single_large_graphic_pane

0x9e68,	// (0x000555f2) list_single_number_heading_pane_ParamLimits

0x9e68,	// (0x000555f2) list_single_number_heading_pane

0x9e68,	// (0x000555f2) list_single_number_pane_ParamLimits

0x9e68,	// (0x000555f2) list_single_number_pane

0x9e68,	// (0x000555f2) list_single_pane_ParamLimits

0x9e68,	// (0x000555f2) list_single_pane

0x9101,	// (0x0005488b) list_highlight_pane_cp1

0xbfab,	// (0x00057735) list_single_pane_g1_ParamLimits

0xbfab,	// (0x00057735) list_single_pane_g1

0x0966,	// (0x0004c0f0) list_single_pane_g2_ParamLimits

0x0966,	// (0x0004c0f0) list_single_pane_g2

0x0001,

0xf5ad,	// (0x0005ad37) list_single_pane_g_ParamLimits

0xf5ad,	// (0x0005ad37) list_single_pane_g

0x8cf1,	// (0x0005447b) list_single_pane_t1_ParamLimits

0x8cf1,	// (0x0005447b) list_single_pane_t1

0xbfab,	// (0x00057735) list_single_number_pane_g1_ParamLimits

0xbfab,	// (0x00057735) list_single_number_pane_g1

0x0966,	// (0x0004c0f0) list_single_number_pane_g2_ParamLimits

0x0966,	// (0x0004c0f0) list_single_number_pane_g2

0x0001,

0xf5ad,	// (0x0005ad37) list_single_number_pane_g_ParamLimits

0xf5ad,	// (0x0005ad37) list_single_number_pane_g

0xe803,	// (0x00059f8d) list_single_number_pane_t1_ParamLimits

0xe803,	// (0x00059f8d) list_single_number_pane_t1

0x8cb1,	// (0x0005443b) list_single_number_pane_t2_ParamLimits

0x8cb1,	// (0x0005443b) list_single_number_pane_t2

0x0001,

0xf924,	// (0x0005b0ae) list_single_number_pane_t_ParamLimits

0xf924,	// (0x0005b0ae) list_single_number_pane_t

0xe7f7,	// (0x00059f81) list_single_graphic_pane_g1_ParamLimits

0xe7f7,	// (0x00059f81) list_single_graphic_pane_g1

0xbfab,	// (0x00057735) list_single_graphic_pane_g2_ParamLimits

0xbfab,	// (0x00057735) list_single_graphic_pane_g2

0x0966,	// (0x0004c0f0) list_single_graphic_pane_g3_ParamLimits

0x0966,	// (0x0004c0f0) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x0005ad26) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x0005ad26) list_single_graphic_pane_g

0xe803,	// (0x00059f8d) list_single_graphic_pane_t1_ParamLimits

0xe803,	// (0x00059f8d) list_single_graphic_pane_t1

0x86a5,	// (0x00053e2f) list_single_heading_pane_g1_ParamLimits

0x86a5,	// (0x00053e2f) list_single_heading_pane_g1

0x0966,	// (0x0004c0f0) list_single_heading_pane_g2_ParamLimits

0x0966,	// (0x0004c0f0) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x0005ad2d) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x0005ad2d) list_single_heading_pane_g

0x86b8,	// (0x00053e42) list_single_heading_pane_t1_ParamLimits

0x86b8,	// (0x00053e42) list_single_heading_pane_t1

0x9c41,	// (0x000553cb) list_single_heading_pane_t2_ParamLimits

0x9c41,	// (0x000553cb) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x0005ad32) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x0005ad32) list_single_heading_pane_t

0xbfab,	// (0x00057735) list_single_number_heading_pane_g1_ParamLimits

0xbfab,	// (0x00057735) list_single_number_heading_pane_g1

0x0966,	// (0x0004c0f0) list_single_number_heading_pane_g2_ParamLimits

0x0966,	// (0x0004c0f0) list_single_number_heading_pane_g2

0x0001,

0xf5ad,	// (0x0005ad37) list_single_number_heading_pane_g_ParamLimits

0xf5ad,	// (0x0005ad37) list_single_number_heading_pane_g

0xe819,	// (0x00059fa3) list_single_number_heading_pane_t1_ParamLimits

0xe819,	// (0x00059fa3) list_single_number_heading_pane_t1

0x86ce,	// (0x00053e58) list_single_number_heading_pane_t2_ParamLimits

0x86ce,	// (0x00053e58) list_single_number_heading_pane_t2

0x86e0,	// (0x00053e6a) list_single_number_heading_pane_t3_ParamLimits

0x86e0,	// (0x00053e6a) list_single_number_heading_pane_t3

0x0002,

0xf5b2,	// (0x0005ad3c) list_single_number_heading_pane_t_ParamLimits

0xf5b2,	// (0x0005ad3c) list_single_number_heading_pane_t

0x86f2,	// (0x00053e7c) list_single_graphic_heading_pane_g1_ParamLimits

0x86f2,	// (0x00053e7c) list_single_graphic_heading_pane_g1

0x9c53,	// (0x000553dd) list_single_graphic_heading_pane_g4_ParamLimits

0x9c53,	// (0x000553dd) list_single_graphic_heading_pane_g4

0x0966,	// (0x0004c0f0) list_single_graphic_heading_pane_g5_ParamLimits

0x0966,	// (0x0004c0f0) list_single_graphic_heading_pane_g5

0x0002,

0xf5b9,	// (0x0005ad43) list_single_graphic_heading_pane_g_ParamLimits

0xf5b9,	// (0x0005ad43) list_single_graphic_heading_pane_g

0xe819,	// (0x00059fa3) list_single_graphic_heading_pane_t1_ParamLimits

0xe819,	// (0x00059fa3) list_single_graphic_heading_pane_t1

0x86fe,	// (0x00053e88) list_single_graphic_heading_pane_t2_ParamLimits

0x86fe,	// (0x00053e88) list_single_graphic_heading_pane_t2

0x0001,

0xf5c0,	// (0x0005ad4a) list_single_graphic_heading_pane_t_ParamLimits

0xf5c0,	// (0x0005ad4a) list_single_graphic_heading_pane_t

0x0e69,	// (0x0004c5f3) list_single_large_graphic_pane_g1_ParamLimits

0x0e69,	// (0x0004c5f3) list_single_large_graphic_pane_g1

0xf0ba,	// (0x0005a844) list_single_large_graphic_pane_g2_ParamLimits

0xf0ba,	// (0x0005a844) list_single_large_graphic_pane_g2

0xf0c6,	// (0x0005a850) list_single_large_graphic_pane_g3_ParamLimits

0xf0c6,	// (0x0005a850) list_single_large_graphic_pane_g3

0x0002,

0xf5c5,	// (0x0005ad4f) list_single_large_graphic_pane_g_ParamLimits

0xf5c5,	// (0x0005ad4f) list_single_large_graphic_pane_g

0x2817,	// (0x0004dfa1) wait_border_pane_g2_copy1

0x9c64,	// (0x000553ee) list_single_large_graphic_pane_g4_cp2

0xe82f,	// (0x00059fb9) list_single_large_graphic_pane_t1_ParamLimits

0xe82f,	// (0x00059fb9) list_single_large_graphic_pane_t1

0x8710,	// (0x00053e9a) list_double_pane_g1_ParamLimits

0x8710,	// (0x00053e9a) list_double_pane_g1

0x871c,	// (0x00053ea6) list_double_pane_g2_ParamLimits

0x871c,	// (0x00053ea6) list_double_pane_g2

0x0001,

0xf5cc,	// (0x0005ad56) list_double_pane_g_ParamLimits

0xf5cc,	// (0x0005ad56) list_double_pane_g

0x8728,	// (0x00053eb2) list_double_pane_t1_ParamLimits

0x8728,	// (0x00053eb2) list_double_pane_t1

0x873e,	// (0x00053ec8) list_double_pane_t2_ParamLimits

0x873e,	// (0x00053ec8) list_double_pane_t2

0x0001,

0xf5d1,	// (0x0005ad5b) list_double_pane_t_ParamLimits

0xf5d1,	// (0x0005ad5b) list_double_pane_t

0x8750,	// (0x00053eda) list_double2_pane_g1_ParamLimits

0x8750,	// (0x00053eda) list_double2_pane_g1

0x8761,	// (0x00053eeb) list_double2_pane_g2_ParamLimits

0x8761,	// (0x00053eeb) list_double2_pane_g2

0x0001,

0xf5d6,	// (0x0005ad60) list_double2_pane_g_ParamLimits

0xf5d6,	// (0x0005ad60) list_double2_pane_g

0x876d,	// (0x00053ef7) list_double2_pane_t1_ParamLimits

0x876d,	// (0x00053ef7) list_double2_pane_t1

0x8783,	// (0x00053f0d) list_double2_pane_t2_ParamLimits

0x8783,	// (0x00053f0d) list_double2_pane_t2

0x0001,

0xf5db,	// (0x0005ad65) list_double2_pane_t_ParamLimits

0xf5db,	// (0x0005ad65) list_double2_pane_t

0x8710,	// (0x00053e9a) list_double_number_pane_g1_ParamLimits

0x8710,	// (0x00053e9a) list_double_number_pane_g1

0x871c,	// (0x00053ea6) list_double_number_pane_g2_ParamLimits

0x871c,	// (0x00053ea6) list_double_number_pane_g2

0x0001,

0xf5cc,	// (0x0005ad56) list_double_number_pane_g_ParamLimits

0xf5cc,	// (0x0005ad56) list_double_number_pane_g

0x8795,	// (0x00053f1f) list_double_number_pane_t1_ParamLimits

0x8795,	// (0x00053f1f) list_double_number_pane_t1

0x87a7,	// (0x00053f31) list_double_number_pane_t2_ParamLimits

0x87a7,	// (0x00053f31) list_double_number_pane_t2

0x87bd,	// (0x00053f47) list_double_number_pane_t3_ParamLimits

0x87bd,	// (0x00053f47) list_double_number_pane_t3

0x0002,

0xf5e0,	// (0x0005ad6a) list_double_number_pane_t_ParamLimits

0xf5e0,	// (0x0005ad6a) list_double_number_pane_t

0x87cf,	// (0x00053f59) list_double_graphic_pane_g1_ParamLimits

0x87cf,	// (0x00053f59) list_double_graphic_pane_g1

0x87db,	// (0x00053f65) list_double_graphic_pane_g2_ParamLimits

0x87db,	// (0x00053f65) list_double_graphic_pane_g2

0x3c9d,	// (0x0004f427) list_double_graphic_pane_g3_ParamLimits

0x3c9d,	// (0x0004f427) list_double_graphic_pane_g3

0x0003,

0xf5e7,	// (0x0005ad71) list_double_graphic_pane_g_ParamLimits

0xf5e7,	// (0x0005ad71) list_double_graphic_pane_g

0x8728,	// (0x00053eb2) list_double_graphic_pane_t1_ParamLimits

0x8728,	// (0x00053eb2) list_double_graphic_pane_t1

0x873e,	// (0x00053ec8) list_double_graphic_pane_t2_ParamLimits

0x873e,	// (0x00053ec8) list_double_graphic_pane_t2

0x0001,

0xf5d1,	// (0x0005ad5b) list_double_graphic_pane_t_ParamLimits

0xf5d1,	// (0x0005ad5b) list_double_graphic_pane_t

0x87f6,	// (0x00053f80) list_double2_graphic_pane_g1_ParamLimits

0x87f6,	// (0x00053f80) list_double2_graphic_pane_g1

0x8802,	// (0x00053f8c) list_double2_graphic_pane_g2_ParamLimits

0x8802,	// (0x00053f8c) list_double2_graphic_pane_g2

0x9c6c,	// (0x000553f6) list_double2_graphic_pane_g3_ParamLimits

0x9c6c,	// (0x000553f6) list_double2_graphic_pane_g3

0x0002,

0xf5f0,	// (0x0005ad7a) list_double2_graphic_pane_g_ParamLimits

0xf5f0,	// (0x0005ad7a) list_double2_graphic_pane_g

0x880e,	// (0x00053f98) list_double2_graphic_pane_t1_ParamLimits

0x880e,	// (0x00053f98) list_double2_graphic_pane_t1

0x8824,	// (0x00053fae) list_double2_graphic_pane_t2_ParamLimits

0x8824,	// (0x00053fae) list_double2_graphic_pane_t2

0x0001,

0xf5f7,	// (0x0005ad81) list_double2_graphic_pane_t_ParamLimits

0xf5f7,	// (0x0005ad81) list_double2_graphic_pane_t

0x8836,	// (0x00053fc0) list_double_large_graphic_pane_g1_ParamLimits

0x8836,	// (0x00053fc0) list_double_large_graphic_pane_g1

0x8855,	// (0x00053fdf) list_double_large_graphic_pane_g2_ParamLimits

0x8855,	// (0x00053fdf) list_double_large_graphic_pane_g2

0x871c,	// (0x00053ea6) list_double_large_graphic_pane_g3_ParamLimits

0x871c,	// (0x00053ea6) list_double_large_graphic_pane_g3

0x886b,	// (0x00053ff5) list_double_large_graphic_pane_g4_ParamLimits

0x886b,	// (0x00053ff5) list_double_large_graphic_pane_g4

0x0004,

0xf5fc,	// (0x0005ad86) list_double_large_graphic_pane_g_ParamLimits

0xf5fc,	// (0x0005ad86) list_double_large_graphic_pane_g

0x887e,	// (0x00054008) list_double_large_graphic_pane_t1_ParamLimits

0x887e,	// (0x00054008) list_double_large_graphic_pane_t1

0x8897,	// (0x00054021) list_double_large_graphic_pane_t2_ParamLimits

0x8897,	// (0x00054021) list_double_large_graphic_pane_t2

0x0001,

0xf607,	// (0x0005ad91) list_double_large_graphic_pane_t_ParamLimits

0xf607,	// (0x0005ad91) list_double_large_graphic_pane_t

0x88a9,	// (0x00054033) list_double2_large_graphic_pane_g1_ParamLimits

0x88a9,	// (0x00054033) list_double2_large_graphic_pane_g1

0x9c78,	// (0x00055402) list_double2_large_graphic_pane_g2_ParamLimits

0x9c78,	// (0x00055402) list_double2_large_graphic_pane_g2

0x9c6c,	// (0x000553f6) list_double2_large_graphic_pane_g3_ParamLimits

0x9c6c,	// (0x000553f6) list_double2_large_graphic_pane_g3

0x0002,

0xf60c,	// (0x0005ad96) list_double2_large_graphic_pane_g_ParamLimits

0xf60c,	// (0x0005ad96) list_double2_large_graphic_pane_g

0x880e,	// (0x00053f98) list_double2_large_graphic_pane_t1_ParamLimits

0x880e,	// (0x00053f98) list_double2_large_graphic_pane_t1

0x8824,	// (0x00053fae) list_double2_large_graphic_pane_t2_ParamLimits

0x8824,	// (0x00053fae) list_double2_large_graphic_pane_t2

0x0001,

0xf5f7,	// (0x0005ad81) list_double2_large_graphic_pane_t_ParamLimits

0xf5f7,	// (0x0005ad81) list_double2_large_graphic_pane_t

0x88b5,	// (0x0005403f) list_double_heading_pane_g1_ParamLimits

0x88b5,	// (0x0005403f) list_double_heading_pane_g1

0xf0e7,	// (0x0005a871) list_double_heading_pane_g2_ParamLimits

0xf0e7,	// (0x0005a871) list_double_heading_pane_g2

0x0001,

0xf613,	// (0x0005ad9d) list_double_heading_pane_g_ParamLimits

0xf613,	// (0x0005ad9d) list_double_heading_pane_g

0x88c6,	// (0x00054050) list_double_heading_pane_t1_ParamLimits

0x88c6,	// (0x00054050) list_double_heading_pane_t1

0x8824,	// (0x00053fae) list_double_heading_pane_t2_ParamLimits

0x8824,	// (0x00053fae) list_double_heading_pane_t2

0x0001,

0xf618,	// (0x0005ada2) list_double_heading_pane_t_ParamLimits

0xf618,	// (0x0005ada2) list_double_heading_pane_t

0x88dc,	// (0x00054066) list_double_graphic_heading_pane_g1_ParamLimits

0x88dc,	// (0x00054066) list_double_graphic_heading_pane_g1

0x88b5,	// (0x0005403f) list_double_graphic_heading_pane_g2_ParamLimits

0x88b5,	// (0x0005403f) list_double_graphic_heading_pane_g2

0xf0e7,	// (0x0005a871) list_double_graphic_heading_pane_g3_ParamLimits

0xf0e7,	// (0x0005a871) list_double_graphic_heading_pane_g3

0x0002,

0xf61d,	// (0x0005ada7) list_double_graphic_heading_pane_g_ParamLimits

0xf61d,	// (0x0005ada7) list_double_graphic_heading_pane_g

0x88c6,	// (0x00054050) list_double_graphic_heading_pane_t1_ParamLimits

0x88c6,	// (0x00054050) list_double_graphic_heading_pane_t1

0x8824,	// (0x00053fae) list_double_graphic_heading_pane_t2_ParamLimits

0x8824,	// (0x00053fae) list_double_graphic_heading_pane_t2

0x0001,

0xf618,	// (0x0005ada2) list_double_graphic_heading_pane_t_ParamLimits

0xf618,	// (0x0005ada2) list_double_graphic_heading_pane_t

0x88e8,	// (0x00054072) list_double_time_pane_g1_ParamLimits

0x88e8,	// (0x00054072) list_double_time_pane_g1

0xe845,	// (0x00059fcf) list_double_time_pane_g2_ParamLimits

0xe845,	// (0x00059fcf) list_double_time_pane_g2

0x0001,

0xf624,	// (0x0005adae) list_double_time_pane_g_ParamLimits

0xf624,	// (0x0005adae) list_double_time_pane_g

0x88f9,	// (0x00054083) list_double_time_pane_t1_ParamLimits

0x88f9,	// (0x00054083) list_double_time_pane_t1

0x890f,	// (0x00054099) list_double_time_pane_t2_ParamLimits

0x890f,	// (0x00054099) list_double_time_pane_t2

0x8921,	// (0x000540ab) list_double_time_pane_t3_ParamLimits

0x8921,	// (0x000540ab) list_double_time_pane_t3

0x8933,	// (0x000540bd) list_double_time_pane_t4_ParamLimits

0x8933,	// (0x000540bd) list_double_time_pane_t4

0x0003,

0xf629,	// (0x0005adb3) list_double_time_pane_t_ParamLimits

0xf629,	// (0x0005adb3) list_double_time_pane_t

0x8945,	// (0x000540cf) list_setting_pane_g1_ParamLimits

0x8945,	// (0x000540cf) list_setting_pane_g1

0x8951,	// (0x000540db) list_setting_pane_g2_ParamLimits

0x8951,	// (0x000540db) list_setting_pane_g2

0x0001,

0xf632,	// (0x0005adbc) list_setting_pane_g_ParamLimits

0xf632,	// (0x0005adbc) list_setting_pane_g

0x895d,	// (0x000540e7) list_setting_pane_t1_ParamLimits

0x895d,	// (0x000540e7) list_setting_pane_t1

0x8977,	// (0x00054101) list_setting_pane_t2_ParamLimits

0x8977,	// (0x00054101) list_setting_pane_t2

0x0002,

0xf637,	// (0x0005adc1) list_setting_pane_t_ParamLimits

0xf637,	// (0x0005adc1) list_setting_pane_t

0x89b6,	// (0x00054140) set_value_pane_cp_ParamLimits

0x89b6,	// (0x00054140) set_value_pane_cp

0x89c2,	// (0x0005414c) list_setting_number_pane_g1_ParamLimits

0x89c2,	// (0x0005414c) list_setting_number_pane_g1

0x89ce,	// (0x00054158) list_setting_number_pane_g2_ParamLimits

0x89ce,	// (0x00054158) list_setting_number_pane_g2

0x0001,

0xf63e,	// (0x0005adc8) list_setting_number_pane_g_ParamLimits

0xf63e,	// (0x0005adc8) list_setting_number_pane_g

0x89da,	// (0x00054164) list_setting_number_pane_t1_ParamLimits

0x89da,	// (0x00054164) list_setting_number_pane_t1

0x89f3,	// (0x0005417d) list_setting_number_pane_t2_ParamLimits

0x89f3,	// (0x0005417d) list_setting_number_pane_t2

0x8a0d,	// (0x00054197) list_setting_number_pane_t3_ParamLimits

0x8a0d,	// (0x00054197) list_setting_number_pane_t3

0x0003,

0xf643,	// (0x0005adcd) list_setting_number_pane_t_ParamLimits

0xf643,	// (0x0005adcd) list_setting_number_pane_t

0x89b6,	// (0x00054140) set_value_pane_ParamLimits

0x89b6,	// (0x00054140) set_value_pane

0x9c89,	// (0x00055413) bg_set_opt_pane_ParamLimits

0x9c89,	// (0x00055413) bg_set_opt_pane

0xe851,	// (0x00059fdb) set_value_pane_t1

0x9caa,	// (0x00055434) slider_set_pane_cp3

0x9cb3,	// (0x0005543d) volume_small_pane_cp

0x9cbc,	// (0x00055446) list_form_gen_pane

0x9cc5,	// (0x0005544f) scroll_pane_cp8

0x8a50,	// (0x000541da) form_field_data_pane_ParamLimits

0x8a50,	// (0x000541da) form_field_data_pane

0x8a67,	// (0x000541f1) form_field_data_wide_pane_ParamLimits

0x8a67,	// (0x000541f1) form_field_data_wide_pane

0x8a87,	// (0x00054211) form_field_popup_pane_ParamLimits

0x8a87,	// (0x00054211) form_field_popup_pane

0x8aa7,	// (0x00054231) form_field_popup_wide_pane_ParamLimits

0x8aa7,	// (0x00054231) form_field_popup_wide_pane

0xe86f,	// (0x00059ff9) form_field_slider_pane_ParamLimits

0xe86f,	// (0x00059ff9) form_field_slider_pane

0x8abe,	// (0x00054248) form_field_slider_wide_pane_ParamLimits

0x8abe,	// (0x00054248) form_field_slider_wide_pane

0x9cd6,	// (0x00055460) data_form_pane

0x8adb,	// (0x00054265) form_field_data_pane_t1

0x9ce2,	// (0x0005546c) input_focus_pane

0xe882,	// (0x0005a00c) data_form_wide_pane

0xe89f,	// (0x0005a029) form_field_data_wide_pane_t1

0x9a78,	// (0x00055202) input_focus_pane_cp6

0x8af5,	// (0x0005427f) form_field_popup_pane_t1

0x9ce2,	// (0x0005546c) input_focus_pane_cp7

0x9d10,	// (0x0005549a) list_form_pane

0xe8c9,	// (0x0005a053) form_field_popup_wide_pane_t1

0x9ce2,	// (0x0005546c) input_focus_pane_cp8

0x9d1c,	// (0x000554a6) list_form_wide_pane

0x8b17,	// (0x000542a1) form_field_slider_pane_t1_ParamLimits

0x8b17,	// (0x000542a1) form_field_slider_pane_t1

0x8b2f,	// (0x000542b9) form_field_slider_pane_t2_ParamLimits

0x8b2f,	// (0x000542b9) form_field_slider_pane_t2

0x0001,

0xf653,	// (0x0005addd) form_field_slider_pane_t_ParamLimits

0xf653,	// (0x0005addd) form_field_slider_pane_t

0x9352,	// (0x00054adc) input_focus_pane_cp9_ParamLimits

0x9352,	// (0x00054adc) input_focus_pane_cp9

0x8b44,	// (0x000542ce) slider_cont_pane_ParamLimits

0x8b44,	// (0x000542ce) slider_cont_pane

0x9d28,	// (0x000554b2) form_field_slider_wide_pane_t1_ParamLimits

0x9d28,	// (0x000554b2) form_field_slider_wide_pane_t1

0xe8de,	// (0x0005a068) form_field_slider_wide_pane_t2_ParamLimits

0xe8de,	// (0x0005a068) form_field_slider_wide_pane_t2

0x0001,

0xf658,	// (0x0005ade2) form_field_slider_wide_pane_t_ParamLimits

0xf658,	// (0x0005ade2) form_field_slider_wide_pane_t

0x9352,	// (0x00054adc) input_focus_pane_cp10_ParamLimits

0x9352,	// (0x00054adc) input_focus_pane_cp10

0x8b58,	// (0x000542e2) slider_cont_pane_cp1_ParamLimits

0x8b58,	// (0x000542e2) slider_cont_pane_cp1

0x8b6c,	// (0x000542f6) slider_form_pane_cp

0x9d3a,	// (0x000554c4) input_focus_pane_g1

0x9d42,	// (0x000554cc) input_focus_pane_g2

0x9d4a,	// (0x000554d4) input_focus_pane_g3

0x9d52,	// (0x000554dc) input_focus_pane_g4

0x9d5a,	// (0x000554e4) input_focus_pane_g5

0x9d62,	// (0x000554ec) input_focus_pane_g6

0x9d6a,	// (0x000554f4) input_focus_pane_g7

0x9d72,	// (0x000554fc) input_focus_pane_g8

0x9d7a,	// (0x00055504) input_focus_pane_g9

0x8ec2,	// (0x0005464c) input_focus_pane_g10

0x0009,

0xf65d,	// (0x0005ade7) input_focus_pane_g

0x2820,	// (0x0004dfaa) wait_border_pane_g3_copy1

0x8b74,	// (0x000542fe) data_form_pane_t1

0x8ec2,	// (0x0005464c) wait_anim_pane_g1_copy1

0x8cc3,	// (0x0005444d) data_form_wide_pane_t1

0x8b8e,	// (0x00054318) list_form_graphic_pane_cp_ParamLimits

0x8b8e,	// (0x00054318) list_form_graphic_pane_cp

0x370f,	// (0x0004ee99) slider_form_pane_g1

0x3718,	// (0x0004eea2) slider_form_pane_g2

0x0006,

0xf954,	// (0x0005b0de) slider_form_pane_g

0x8ba0,	// (0x0005432a) list_form_graphic_pane_ParamLimits

0x8ba0,	// (0x0005432a) list_form_graphic_pane

0x8bb3,	// (0x0005433d) list_form_graphic_pane_g1

0x8bbb,	// (0x00054345) list_form_graphic_pane_t1_ParamLimits

0x8bbb,	// (0x00054345) list_form_graphic_pane_t1

0x939c,	// (0x00054b26) list_highlight_pane_cp5_ParamLimits

0x939c,	// (0x00054b26) list_highlight_pane_cp5

0x8bd0,	// (0x0005435a) find_pane_g1

0x9d82,	// (0x0005550c) input_find_pane

0x8bd9,	// (0x00054363) input_find_pane_g1_ParamLimits

0x8bd9,	// (0x00054363) input_find_pane_g1

0x8be5,	// (0x0005436f) input_find_pane_t1_ParamLimits

0x8be5,	// (0x0005436f) input_find_pane_t1

0x8bfa,	// (0x00054384) input_find_pane_t2_ParamLimits

0x8bfa,	// (0x00054384) input_find_pane_t2

0x0001,

0xf672,	// (0x0005adfc) input_find_pane_t_ParamLimits

0xf672,	// (0x0005adfc) input_find_pane_t

0x9d8b,	// (0x00055515) input_focus_pane_cp5_ParamLimits

0x9d8b,	// (0x00055515) input_focus_pane_cp5

0x9daa,	// (0x00055534) bg_popup_window_pane_cp2_ParamLimits

0x9daa,	// (0x00055534) bg_popup_window_pane_cp2

0x9db7,	// (0x00055541) listscroll_menu_pane_ParamLimits

0x9db7,	// (0x00055541) listscroll_menu_pane

0x9dc3,	// (0x0005554d) popup_submenu_window_ParamLimits

0x9dc3,	// (0x0005554d) popup_submenu_window

0x9deb,	// (0x00055575) find_popup_pane_g1

0x9df3,	// (0x0005557d) input_popup_find_pane_cp

0x9dfd,	// (0x00055587) input_focus_pane_cp4_ParamLimits

0x9dfd,	// (0x00055587) input_focus_pane_cp4

0x9e19,	// (0x000555a3) input_popup_find_pane_t1_ParamLimits

0x9e19,	// (0x000555a3) input_popup_find_pane_t1

0x9101,	// (0x0005488b) bg_popup_sub_pane_cp

0x9e47,	// (0x000555d1) listscroll_popup_sub_pane

0x9e4f,	// (0x000555d9) list_submenu_pane_ParamLimits

0x9e4f,	// (0x000555d9) list_submenu_pane

0x9e60,	// (0x000555ea) scroll_pane_cp4

0x9e68,	// (0x000555f2) list_single_popup_submenu_pane_ParamLimits

0x9e68,	// (0x000555f2) list_single_popup_submenu_pane

0x9e7c,	// (0x00055606) list_single_popup_submenu_pane_g1

0x9e84,	// (0x0005560e) list_single_popup_submenu_pane_t1_ParamLimits

0x9e84,	// (0x0005560e) list_single_popup_submenu_pane_t1

0x9352,	// (0x00054adc) bg_active_tab_pane_cp1_ParamLimits

0x9352,	// (0x00054adc) bg_active_tab_pane_cp1

0x9e99,	// (0x00055623) tabs_2_active_pane_g1

0x9ea1,	// (0x0005562b) tabs_2_active_pane_t1

0x9352,	// (0x00054adc) bg_passive_tab_pane_cp1_ParamLimits

0x9352,	// (0x00054adc) bg_passive_tab_pane_cp1

0x9e99,	// (0x00055623) tabs_2_passive_pane_g1

0x9ea1,	// (0x0005562b) tabs_2_passive_pane_t1

0x939c,	// (0x00054b26) bg_active_tab_pane_cp4

0x9eb3,	// (0x0005563d) tabs_2_long_active_pane_t1

0x9ec6,	// (0x00055650) bg_passive_tab_pane_cp4

0x0997,	// (0x0004c121) list_single_midp_graphic_pane_g4_ParamLimits

0x939c,	// (0x00054b26) bg_active_tab_pane_cp5

0x9ed2,	// (0x0005565c) tabs_3_long_active_pane_t1

0x9ec6,	// (0x00055650) bg_passive_tab_pane_cp5

0x0997,	// (0x0004c121) list_single_midp_graphic_pane_g4

0x939c,	// (0x00054b26) bg_popup_window_pane_cp13_ParamLimits

0x939c,	// (0x00054b26) bg_popup_window_pane_cp13

0x9eed,	// (0x00055677) listscroll_popup_fast_pane_ParamLimits

0x9eed,	// (0x00055677) listscroll_popup_fast_pane

0x9ef9,	// (0x00055683) grid_popup_fast_pane_ParamLimits

0x9ef9,	// (0x00055683) grid_popup_fast_pane

0x9f0b,	// (0x00055695) scroll_pane_cp9_ParamLimits

0x9f0b,	// (0x00055695) scroll_pane_cp9

0x501f,	// (0x000507a9) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x501f,	// (0x000507a9) list_single_graphic_hl_pane_t1_cp2

0x9f2f,	// (0x000556b9) input_focus_pane_cp20_ParamLimits

0x9f2f,	// (0x000556b9) input_focus_pane_cp20

0x9f3d,	// (0x000556c7) query_popup_data_pane_t1_ParamLimits

0x9f3d,	// (0x000556c7) query_popup_data_pane_t1

0x9f50,	// (0x000556da) query_popup_data_pane_t2_ParamLimits

0x9f50,	// (0x000556da) query_popup_data_pane_t2

0x9f96,	// (0x00055720) query_popup_data_pane_t3_ParamLimits

0x9f96,	// (0x00055720) query_popup_data_pane_t3

0x9fd7,	// (0x00055761) query_popup_data_pane_t4_ParamLimits

0x9fd7,	// (0x00055761) query_popup_data_pane_t4

0xa013,	// (0x0005579d) query_popup_data_pane_t5_ParamLimits

0xa013,	// (0x0005579d) query_popup_data_pane_t5

0x0004,

0xf677,	// (0x0005ae01) query_popup_data_pane_t_ParamLimits

0xf677,	// (0x0005ae01) query_popup_data_pane_t

0x9d3a,	// (0x000554c4) bg_set_opt_pane_g1

0x9d42,	// (0x000554cc) bg_set_opt_pane_g2

0x9d4a,	// (0x000554d4) bg_set_opt_pane_g3

0x9d52,	// (0x000554dc) bg_set_opt_pane_g4

0x9d5a,	// (0x000554e4) bg_set_opt_pane_g5

0x9d62,	// (0x000554ec) bg_set_opt_pane_g6

0x9d6a,	// (0x000554f4) bg_set_opt_pane_g7

0x9d72,	// (0x000554fc) bg_set_opt_pane_g8

0x9d7a,	// (0x00055504) bg_set_opt_pane_g9

0x0008,

0xf682,	// (0x0005ae0c) bg_set_opt_pane_g

0xf330,	// (0x0005aaba) control_top_pane_stacon_ParamLimits

0xf330,	// (0x0005aaba) control_top_pane_stacon

0xf383,	// (0x0005ab0d) signal_pane_stacon_ParamLimits

0xf383,	// (0x0005ab0d) signal_pane_stacon

0xc1bf,	// (0x00057949) stacon_top_pane_g1_ParamLimits

0xc1bf,	// (0x00057949) stacon_top_pane_g1

0xf3a8,	// (0x0005ab32) title_pane_stacon_ParamLimits

0xf3a8,	// (0x0005ab32) title_pane_stacon

0xf3d2,	// (0x0005ab5c) uni_indicator_pane_stacon_ParamLimits

0xf3d2,	// (0x0005ab5c) uni_indicator_pane_stacon

0xf3e7,	// (0x0005ab71) battery_pane_stacon_ParamLimits

0xf3e7,	// (0x0005ab71) battery_pane_stacon

0xf42b,	// (0x0005abb5) control_bottom_pane_stacon_ParamLimits

0xf42b,	// (0x0005abb5) control_bottom_pane_stacon

0xf44e,	// (0x0005abd8) navi_pane_stacon_ParamLimits

0xf44e,	// (0x0005abd8) navi_pane_stacon

0xc1e1,	// (0x0005796b) stacon_bottom_pane_g1_ParamLimits

0xc1e1,	// (0x0005796b) stacon_bottom_pane_g1

0xf0f3,	// (0x0005a87d) aid_levels_signal_lsc_ParamLimits

0xf0f3,	// (0x0005a87d) aid_levels_signal_lsc

0xf109,	// (0x0005a893) signal_pane_stacon_g1_ParamLimits

0xf109,	// (0x0005a893) signal_pane_stacon_g1

0xf11d,	// (0x0005a8a7) signal_pane_stacon_g2_ParamLimits

0xf11d,	// (0x0005a8a7) signal_pane_stacon_g2

0x0001,

0xf695,	// (0x0005ae1f) signal_pane_stacon_g_ParamLimits

0xf695,	// (0x0005ae1f) signal_pane_stacon_g

0xf152,	// (0x0005a8dc) title_pane_stacon_t1_ParamLimits

0xf152,	// (0x0005a8dc) title_pane_stacon_t1

0xa057,	// (0x000557e1) uni_indicator_pane_stacon_g1

0xa061,	// (0x000557eb) uni_indicator_pane_stacon_g2

0xa06b,	// (0x000557f5) uni_indicator_pane_stacon_g3

0xa075,	// (0x000557ff) uni_indicator_pane_stacon_g4

0x0003,

0xf6a1,	// (0x0005ae2b) uni_indicator_pane_stacon_g

0xf177,	// (0x0005a901) control_top_pane_stacon_g1

0xf17f,	// (0x0005a909) control_top_pane_stacon_t1_ParamLimits

0xf17f,	// (0x0005a909) control_top_pane_stacon_t1

0xf1b6,	// (0x0005a940) aid_levels_battery_lsc_ParamLimits

0xf1b6,	// (0x0005a940) aid_levels_battery_lsc

0xf1cd,	// (0x0005a957) battery_pane_stacon_g1_ParamLimits

0xf1cd,	// (0x0005a957) battery_pane_stacon_g1

0xf1e0,	// (0x0005a96a) battery_pane_stacon_g2_ParamLimits

0xf1e0,	// (0x0005a96a) battery_pane_stacon_g2

0x0001,

0xf6aa,	// (0x0005ae34) battery_pane_stacon_g_ParamLimits

0xf6aa,	// (0x0005ae34) battery_pane_stacon_g

0xf21e,	// (0x0005a9a8) navi_icon_pane_stacon

0xf232,	// (0x0005a9bc) navi_navi_pane_stacon

0xf21e,	// (0x0005a9a8) navi_text_pane_stacon

0xf177,	// (0x0005a901) control_bottom_pane_stacon_g1

0xf246,	// (0x0005a9d0) control_bottom_pane_stacon_t1_ParamLimits

0xf246,	// (0x0005a9d0) control_bottom_pane_stacon_t1

0xa099,	// (0x00055823) grid_app_pane_ParamLimits

0xa099,	// (0x00055823) grid_app_pane

0xa0d1,	// (0x0005585b) scroll_pane_cp15_ParamLimits

0xa0d1,	// (0x0005585b) scroll_pane_cp15

0xa0e6,	// (0x00055870) cell_app_pane_ParamLimits

0xa0e6,	// (0x00055870) cell_app_pane

0xa12b,	// (0x000558b5) cell_app_pane_g1_ParamLimits

0xa12b,	// (0x000558b5) cell_app_pane_g1

0xa14f,	// (0x000558d9) cell_app_pane_g2_ParamLimits

0xa14f,	// (0x000558d9) cell_app_pane_g2

0x0001,

0xf6af,	// (0x0005ae39) cell_app_pane_g_ParamLimits

0xf6af,	// (0x0005ae39) cell_app_pane_g

0xa15b,	// (0x000558e5) cell_app_pane_t1_ParamLimits

0xa15b,	// (0x000558e5) cell_app_pane_t1

0xa172,	// (0x000558fc) grid_highlight_pane_ParamLimits

0xa172,	// (0x000558fc) grid_highlight_pane

0x9d3a,	// (0x000554c4) cell_highlight_pane_g1

0x9d42,	// (0x000554cc) cell_highlight_pane_g2

0x9d4a,	// (0x000554d4) cell_highlight_pane_g3

0x9d52,	// (0x000554dc) cell_highlight_pane_g4

0x9d5a,	// (0x000554e4) cell_highlight_pane_g5

0x9d62,	// (0x000554ec) cell_highlight_pane_g6

0x9d6a,	// (0x000554f4) cell_highlight_pane_g7

0x9d72,	// (0x000554fc) cell_highlight_pane_g8

0x9d7a,	// (0x00055504) cell_highlight_pane_g9

0x8ec2,	// (0x0005464c) cell_highlight_pane_g10

0x0009,

0xf65d,	// (0x0005ade7) cell_highlight_pane_g

0xa18c,	// (0x00055916) bg_scroll_pane

0xa1ab,	// (0x00055935) scroll_handle_pane

0xa1e7,	// (0x00055971) scroll_bg_pane_g1

0xa1fc,	// (0x00055986) scroll_bg_pane_g2

0xa214,	// (0x0005599e) scroll_bg_pane_g3

0x0002,

0xf6b4,	// (0x0005ae3e) scroll_bg_pane_g

0xa229,	// (0x000559b3) scroll_handle_focus_pane_ParamLimits

0xa229,	// (0x000559b3) scroll_handle_focus_pane

0xa1e7,	// (0x00055971) scroll_handle_pane_g1

0xa236,	// (0x000559c0) scroll_handle_pane_g2

0xa214,	// (0x0005599e) scroll_handle_pane_g3

0x0002,

0xf6bb,	// (0x0005ae45) scroll_handle_pane_g

0x9dfd,	// (0x00055587) bg_popup_sub_pane_cp21_ParamLimits

0x9dfd,	// (0x00055587) bg_popup_sub_pane_cp21

0xa24a,	// (0x000559d4) popup_fep_japan_predictive_window_t1_ParamLimits

0xa24a,	// (0x000559d4) popup_fep_japan_predictive_window_t1

0xa261,	// (0x000559eb) popup_fep_japan_predictive_window_t2_ParamLimits

0xa261,	// (0x000559eb) popup_fep_japan_predictive_window_t2

0xa294,	// (0x00055a1e) popup_fep_japan_predictive_window_t3_ParamLimits

0xa294,	// (0x00055a1e) popup_fep_japan_predictive_window_t3

0x0002,

0xf6c2,	// (0x0005ae4c) popup_fep_japan_predictive_window_t_ParamLimits

0xf6c2,	// (0x0005ae4c) popup_fep_japan_predictive_window_t

0x9101,	// (0x0005488b) bg_popup_sub_pane_cp23

0xa2cb,	// (0x00055a55) listscroll_japin_cand_pane

0xa2d3,	// (0x00055a5d) popup_fep_japan_candidate_window_t1

0xa2e1,	// (0x00055a6b) candidate_pane_ParamLimits

0xa2e1,	// (0x00055a6b) candidate_pane

0xa2f3,	// (0x00055a7d) scroll_pane_cp30

0xa2fb,	// (0x00055a85) list_single_popup_jap_candidate_pane_ParamLimits

0xa2fb,	// (0x00055a85) list_single_popup_jap_candidate_pane

0x9101,	// (0x0005488b) list_highlight_pane_cp30

0xa310,	// (0x00055a9a) list_single_popup_jap_candidate_pane_t1

0xbfb7,	// (0x00057741) level_1_signal

0xbfc4,	// (0x0005774e) level_2_signal

0xbfd1,	// (0x0005775b) level_3_signal

0xbfde,	// (0x00057768) level_4_signal

0xbfeb,	// (0x00057775) level_5_signal

0xbff8,	// (0x00057782) level_6_signal

0xc005,	// (0x0005778f) level_7_signal

0xbfb7,	// (0x00057741) level_1_battery

0xbfc4,	// (0x0005774e) level_2_battery

0xbfd1,	// (0x0005775b) level_3_battery

0xbfde,	// (0x00057768) level_4_battery

0xbfeb,	// (0x00057775) level_5_battery

0xbff8,	// (0x00057782) level_6_battery

0xc005,	// (0x0005778f) level_7_battery

0xc02a,	// (0x000577b4) list_menu_pane_ParamLimits

0xc02a,	// (0x000577b4) list_menu_pane

0xc040,	// (0x000577ca) scroll_pane_cp25_ParamLimits

0xc040,	// (0x000577ca) scroll_pane_cp25

0xa31f,	// (0x00055aa9) list_double2_graphic_pane_cp2_ParamLimits

0xa31f,	// (0x00055aa9) list_double2_graphic_pane_cp2

0xa31f,	// (0x00055aa9) list_double2_large_graphic_pane_cp2_ParamLimits

0xa31f,	// (0x00055aa9) list_double2_large_graphic_pane_cp2

0xa31f,	// (0x00055aa9) list_double2_pane_cp2_ParamLimits

0xa31f,	// (0x00055aa9) list_double2_pane_cp2

0xa31f,	// (0x00055aa9) list_double_graphic_pane_cp2_ParamLimits

0xa31f,	// (0x00055aa9) list_double_graphic_pane_cp2

0xa31f,	// (0x00055aa9) list_double_large_graphic_pane_cp2_ParamLimits

0xa31f,	// (0x00055aa9) list_double_large_graphic_pane_cp2

0xa31f,	// (0x00055aa9) list_double_number_pane_cp2_ParamLimits

0xa31f,	// (0x00055aa9) list_double_number_pane_cp2

0xa31f,	// (0x00055aa9) list_double_pane_cp2_ParamLimits

0xa31f,	// (0x00055aa9) list_double_pane_cp2

0xa32e,	// (0x00055ab8) list_single_2graphic_pane_cp2_ParamLimits

0xa32e,	// (0x00055ab8) list_single_2graphic_pane_cp2

0xa32e,	// (0x00055ab8) list_single_graphic_heading_pane_cp2_ParamLimits

0xa32e,	// (0x00055ab8) list_single_graphic_heading_pane_cp2

0xa32e,	// (0x00055ab8) list_single_graphic_pane_cp2_ParamLimits

0xa32e,	// (0x00055ab8) list_single_graphic_pane_cp2

0xa32e,	// (0x00055ab8) list_single_heading_pane_cp2_ParamLimits

0xa32e,	// (0x00055ab8) list_single_heading_pane_cp2

0xc069,	// (0x000577f3) list_single_large_graphic_pane_cp2_ParamLimits

0xc069,	// (0x000577f3) list_single_large_graphic_pane_cp2

0xa32e,	// (0x00055ab8) list_single_number_heading_pane_cp2_ParamLimits

0xa32e,	// (0x00055ab8) list_single_number_heading_pane_cp2

0xa32e,	// (0x00055ab8) list_single_number_pane_cp2_ParamLimits

0xa32e,	// (0x00055ab8) list_single_number_pane_cp2

0xa340,	// (0x00055aca) list_single_pane_cp2_ParamLimits

0xa340,	// (0x00055aca) list_single_pane_cp2

0xc083,	// (0x0005780d) bg_popup_sub_pane_cp22

0xf316,	// (0x0005aaa0) popup_side_volume_key_window_g1

0xf322,	// (0x0005aaac) popup_side_volume_key_window_t1

0xa408,	// (0x00055b92) volume_small_pane_cp1

0x9352,	// (0x00054adc) bg_popup_sub_pane_cp24_ParamLimits

0x9352,	// (0x00054adc) bg_popup_sub_pane_cp24

0xc099,	// (0x00057823) fep_china_uni_candidate_pane_ParamLimits

0xc099,	// (0x00057823) fep_china_uni_candidate_pane

0xc0ad,	// (0x00057837) fep_china_uni_entry_pane

0xc0bd,	// (0x00057847) popup_fep_china_uni_window_g1

0xa410,	// (0x00055b9a) fep_china_uni_entry_pane_g1

0xa418,	// (0x00055ba2) fep_china_uni_entry_pane_g2

0x0001,

0xf6f3,	// (0x0005ae7d) fep_china_uni_entry_pane_g

0xc0d9,	// (0x00057863) fep_entry_item_pane

0xc0e3,	// (0x0005786d) fep_candidate_item_pane

0xa420,	// (0x00055baa) fep_china_uni_candidate_pane_g1

0xc0eb,	// (0x00057875) fep_china_uni_candidate_pane_g2

0xc0f3,	// (0x0005787d) fep_china_uni_candidate_pane_g3

0xa428,	// (0x00055bb2) fep_china_uni_candidate_pane_g4

0x0003,

0xf6f8,	// (0x0005ae82) fep_china_uni_candidate_pane_g

0x8ec2,	// (0x0005464c) fep_entry_item_pane_g1

0xc0fb,	// (0x00057885) fep_entry_item_pane_t1_ParamLimits

0xc0fb,	// (0x00057885) fep_entry_item_pane_t1

0xc111,	// (0x0005789b) fep_candidate_item_pane_t1_ParamLimits

0xc111,	// (0x0005789b) fep_candidate_item_pane_t1

0xc126,	// (0x000578b0) fep_candidate_item_pane_t2_ParamLimits

0xc126,	// (0x000578b0) fep_candidate_item_pane_t2

0x0001,

0xf701,	// (0x0005ae8b) fep_candidate_item_pane_t_ParamLimits

0xf701,	// (0x0005ae8b) fep_candidate_item_pane_t

0x939c,	// (0x00054b26) list_highlight_pane_cp31_ParamLimits

0x939c,	// (0x00054b26) list_highlight_pane_cp31

0xc138,	// (0x000578c2) level_1_signal_lsc

0xc141,	// (0x000578cb) level_2_signal_lsc

0xc14a,	// (0x000578d4) level_3_signal_lsc

0xc153,	// (0x000578dd) level_4_signal_lsc

0xc15c,	// (0x000578e6) level_5_signal_lsc

0xc165,	// (0x000578ef) level_6_signal_lsc

0xc16e,	// (0x000578f8) level_7_signal_lsc

0xc16e,	// (0x000578f8) level_1_battery_lsc

0xc177,	// (0x00057901) level_2_battery_lsc

0xc180,	// (0x0005790a) level_3_battery_lsc

0xc189,	// (0x00057913) level_4_battery_lsc

0xc192,	// (0x0005791c) level_5_battery_lsc

0xc19b,	// (0x00057925) level_6_battery_lsc

0xc138,	// (0x000578c2) level_7_battery_lsc

0xc1a4,	// (0x0005792e) scroll_handle_focus_pane_g1

0xc1ad,	// (0x00057937) scroll_handle_focus_pane_g2

0xc1b6,	// (0x00057940) scroll_handle_focus_pane_g3

0x0002,

0xf706,	// (0x0005ae90) scroll_handle_focus_pane_g

0x8c0f,	// (0x00054399) list_single_2graphic_pane_g1_ParamLimits

0x8c0f,	// (0x00054399) list_single_2graphic_pane_g1

0x9c53,	// (0x000553dd) list_single_2graphic_pane_g2_ParamLimits

0x9c53,	// (0x000553dd) list_single_2graphic_pane_g2

0x0966,	// (0x0004c0f0) list_single_2graphic_pane_g3_ParamLimits

0x0966,	// (0x0004c0f0) list_single_2graphic_pane_g3

0x8c1b,	// (0x000543a5) list_single_2graphic_pane_g4_ParamLimits

0x8c1b,	// (0x000543a5) list_single_2graphic_pane_g4

0x0003,

0xf70d,	// (0x0005ae97) list_single_2graphic_pane_g_ParamLimits

0xf70d,	// (0x0005ae97) list_single_2graphic_pane_g

0x8c27,	// (0x000543b1) list_single_2graphic_pane_t1_ParamLimits

0x8c27,	// (0x000543b1) list_single_2graphic_pane_t1

0x8c55,	// (0x000543df) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x8c55,	// (0x000543df) list_double2_graphic_large_graphic_pane_g1

0x9c78,	// (0x00055402) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x9c78,	// (0x00055402) list_double2_graphic_large_graphic_pane_g2

0x9c6c,	// (0x000553f6) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x9c6c,	// (0x000553f6) list_double2_graphic_large_graphic_pane_g3

0x8c67,	// (0x000543f1) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x8c67,	// (0x000543f1) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf716,	// (0x0005aea0) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf716,	// (0x0005aea0) list_double2_graphic_large_graphic_pane_g

0x8c73,	// (0x000543fd) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x8c73,	// (0x000543fd) list_double2_graphic_large_graphic_pane_t1

0x8c89,	// (0x00054413) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x8c89,	// (0x00054413) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf71f,	// (0x0005aea9) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf71f,	// (0x0005aea9) list_double2_graphic_large_graphic_pane_t

0xa4a3,	// (0x00055c2d) popup_fast_swap_window_ParamLimits

0xa4a3,	// (0x00055c2d) popup_fast_swap_window

0xa4bf,	// (0x00055c49) popup_side_volume_key_window

0xc26c,	// (0x000579f6) stacon_top_pane

0xc276,	// (0x00057a00) status_pane_ParamLimits

0xc276,	// (0x00057a00) status_pane

0x8eb8,	// (0x00054642) status_small_pane

0x9101,	// (0x0005488b) control_pane

0x9101,	// (0x0005488b) stacon_bottom_pane

0x9cc5,	// (0x0005544f) scroll_pane_cp121

0x9cbc,	// (0x00055446) set_content_pane

0xa430,	// (0x00055bba) bg_active_tab_pane_g1_cp1

0xa439,	// (0x00055bc3) bg_active_tab_pane_g2_cp1

0xa442,	// (0x00055bcc) bg_active_tab_pane_g3_cp1

0xa430,	// (0x00055bba) bg_passive_tab_pane_g1_cp1

0xa439,	// (0x00055bc3) bg_passive_tab_pane_g2_cp1

0xa442,	// (0x00055bcc) bg_passive_tab_pane_g3_cp1

0xa44b,	// (0x00055bd5) bg_active_tab_pane_g1_cp2

0xa439,	// (0x00055bc3) bg_active_tab_pane_g2_cp2

0xa454,	// (0x00055bde) bg_active_tab_pane_g3_cp2

0xa44b,	// (0x00055bd5) bg_passive_tab_pane_g1_cp2

0xa439,	// (0x00055bc3) bg_passive_tab_pane_g2_cp2

0xa454,	// (0x00055bde) bg_passive_tab_pane_g3_cp2

0xa45d,	// (0x00055be7) bg_active_tab_pane_g1_cp3

0xa439,	// (0x00055bc3) bg_active_tab_pane_g2_cp3

0xa466,	// (0x00055bf0) bg_active_tab_pane_g3_cp3

0xa45d,	// (0x00055be7) bg_passive_tab_pane_g1_cp3

0xa439,	// (0x00055bc3) bg_passive_tab_pane_g2_cp3

0xa466,	// (0x00055bf0) bg_passive_tab_pane_g3_cp3

0xa46f,	// (0x00055bf9) bg_active_tab_pane_g1_cp4

0xa439,	// (0x00055bc3) bg_active_tab_pane_g2_cp4

0xa47a,	// (0x00055c04) bg_active_tab_pane_g3_cp4

0xa46f,	// (0x00055bf9) bg_passive_tab_pane_g1_cp4

0xa439,	// (0x00055bc3) bg_passive_tab_pane_g2_cp4

0xa47a,	// (0x00055c04) bg_passive_tab_pane_g3_cp4

0xa485,	// (0x00055c0f) bg_active_tab_pane_g1_cp5

0xa439,	// (0x00055bc3) bg_active_tab_pane_g2_cp5

0xa48e,	// (0x00055c18) bg_active_tab_pane_g3_cp5

0xa485,	// (0x00055c0f) bg_passive_tab_pane_g1_cp5

0xa439,	// (0x00055bc3) bg_passive_tab_pane_g2_cp5

0xa48e,	// (0x00055c18) bg_passive_tab_pane_g3_cp5

0x3cc1,	// (0x0004f44b) list_set_graphic_pane_ParamLimits

0x3cc1,	// (0x0004f44b) list_set_graphic_pane

0x9101,	// (0x0005488b) bg_set_opt_pane_cp4

0xc1fd,	// (0x00057987) list_set_graphic_pane_g1_ParamLimits

0xc1fd,	// (0x00057987) list_set_graphic_pane_g1

0xc209,	// (0x00057993) list_set_graphic_pane_g2_ParamLimits

0xc209,	// (0x00057993) list_set_graphic_pane_g2

0x0001,

0xf724,	// (0x0005aeae) list_set_graphic_pane_g_ParamLimits

0xf724,	// (0x0005aeae) list_set_graphic_pane_g

0x0009,

0xfaa9,	// (0x0005b233) volume_small_pane_cp_g

0xa497,	// (0x00055c21) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xa497,	// (0x00055c21) list_double2_large_graphic_pane_g1_cp2

0xc22b,	// (0x000579b5) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xc22b,	// (0x000579b5) list_double2_large_graphic_pane_g2_cp2

0xc23c,	// (0x000579c6) list_double2_large_graphic_pane_g3_cp2

0xc244,	// (0x000579ce) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xc244,	// (0x000579ce) list_double2_large_graphic_pane_t1_cp2

0xc25a,	// (0x000579e4) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xc25a,	// (0x000579e4) list_double2_large_graphic_pane_t2_cp2

0xc9b7,	// (0x00058141) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xc9b7,	// (0x00058141) list_double_large_graphic_pane_g1_cp2

0x32e2,	// (0x0004ea6c) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x32e2,	// (0x0004ea6c) list_double_large_graphic_pane_g2_cp2

0xc392,	// (0x00057b1c) list_double_large_graphic_pane_g3_cp2

0x32f3,	// (0x0004ea7d) list_double_large_graphic_pane_g4_cp

0x32fb,	// (0x0004ea85) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x32fb,	// (0x0004ea85) list_double_large_graphic_pane_t1_cp2

0x3312,	// (0x0004ea9c) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x3312,	// (0x0004ea9c) list_double_large_graphic_pane_t2_cp2

0xc284,	// (0x00057a0e) list_double2_graphic_pane_g1_cp2_ParamLimits

0xc284,	// (0x00057a0e) list_double2_graphic_pane_g1_cp2

0xc292,	// (0x00057a1c) list_double2_graphic_pane_g2_cp2_ParamLimits

0xc292,	// (0x00057a1c) list_double2_graphic_pane_g2_cp2

0xc2a3,	// (0x00057a2d) list_double2_graphic_pane_g3_cp2

0xc2ad,	// (0x00057a37) list_double2_graphic_pane_t1_cp2_ParamLimits

0xc2ad,	// (0x00057a37) list_double2_graphic_pane_t1_cp2

0xc2c3,	// (0x00057a4d) list_double2_graphic_pane_t2_cp2_ParamLimits

0xc2c3,	// (0x00057a4d) list_double2_graphic_pane_t2_cp2

0xc2d5,	// (0x00057a5f) list_single_number_heading_pane_g1_cp2_ParamLimits

0xc2d5,	// (0x00057a5f) list_single_number_heading_pane_g1_cp2

0xc2e1,	// (0x00057a6b) list_single_number_heading_pane_g2_cp2

0xc2e9,	// (0x00057a73) list_single_number_heading_pane_t1_cp2_ParamLimits

0xc2e9,	// (0x00057a73) list_single_number_heading_pane_t1_cp2

0xc2ff,	// (0x00057a89) list_single_number_heading_pane_t2_cp2_ParamLimits

0xc2ff,	// (0x00057a89) list_single_number_heading_pane_t2_cp2

0xc311,	// (0x00057a9b) list_single_number_heading_pane_t3_cp2_ParamLimits

0xc311,	// (0x00057a9b) list_single_number_heading_pane_t3_cp2

0xc2d5,	// (0x00057a5f) list_single_heading_pane_g1_cp2_ParamLimits

0xc2d5,	// (0x00057a5f) list_single_heading_pane_g1_cp2

0xc2e1,	// (0x00057a6b) list_single_heading_pane_g2_cp2

0xc2e9,	// (0x00057a73) list_single_heading_pane_t1_cp2_ParamLimits

0xc2e9,	// (0x00057a73) list_single_heading_pane_t1_cp2

0x30db,	// (0x0004e865) list_single_heading_pane_t2_cp2_ParamLimits

0x30db,	// (0x0004e865) list_single_heading_pane_t2_cp2

0x3023,	// (0x0004e7ad) list_double_graphic_pane_g1_cp2_ParamLimits

0x3023,	// (0x0004e7ad) list_double_graphic_pane_g1_cp2

0x302f,	// (0x0004e7b9) list_double_graphic_pane_g2_cp2_ParamLimits

0x302f,	// (0x0004e7b9) list_double_graphic_pane_g2_cp2

0x303e,	// (0x0004e7c8) list_double_graphic_pane_g3_cp2

0x3046,	// (0x0004e7d0) list_double_graphic_pane_t1_cp2_ParamLimits

0x3046,	// (0x0004e7d0) list_double_graphic_pane_t1_cp2

0x305c,	// (0x0004e7e6) list_double_graphic_pane_t2_cp2_ParamLimits

0x305c,	// (0x0004e7e6) list_double_graphic_pane_t2_cp2

0xc386,	// (0x00057b10) list_double_number_pane_g1_cp2_ParamLimits

0xc386,	// (0x00057b10) list_double_number_pane_g1_cp2

0xc392,	// (0x00057b1c) list_double_number_pane_g2_cp2

0x2fe7,	// (0x0004e771) list_double_number_pane_t1_cp2_ParamLimits

0x2fe7,	// (0x0004e771) list_double_number_pane_t1_cp2

0x2ffb,	// (0x0004e785) list_double_number_pane_t2_cp2_ParamLimits

0x2ffb,	// (0x0004e785) list_double_number_pane_t2_cp2

0x3011,	// (0x0004e79b) list_double_number_pane_t3_cp2_ParamLimits

0x3011,	// (0x0004e79b) list_double_number_pane_t3_cp2

0x2ed0,	// (0x0004e65a) list_single_graphic_pane_g1_cp2_ParamLimits

0x2ed0,	// (0x0004e65a) list_single_graphic_pane_g1_cp2

0xbfab,	// (0x00057735) list_single_graphic_pane_g2_cp2_ParamLimits

0xbfab,	// (0x00057735) list_single_graphic_pane_g2_cp2

0xc3eb,	// (0x00057b75) list_single_graphic_pane_g3_cp2

0x2ea6,	// (0x0004e630) list_single_graphic_pane_t1_cp2_ParamLimits

0x2ea6,	// (0x0004e630) list_single_graphic_pane_t1_cp2

0xbfab,	// (0x00057735) list_single_number_pane_g1_cp2_ParamLimits

0xbfab,	// (0x00057735) list_single_number_pane_g1_cp2

0xc3eb,	// (0x00057b75) list_single_number_pane_g2_cp2

0x2ea6,	// (0x0004e630) list_single_number_pane_t1_cp2_ParamLimits

0x2ea6,	// (0x0004e630) list_single_number_pane_t1_cp2

0x2ebc,	// (0x0004e646) list_single_number_pane_t2_cp2_ParamLimits

0x2ebc,	// (0x0004e646) list_single_number_pane_t2_cp2

0xc22b,	// (0x000579b5) list_double2_pane_g1_cp2_ParamLimits

0xc22b,	// (0x000579b5) list_double2_pane_g1_cp2

0xc23c,	// (0x000579c6) list_double2_pane_g2_cp2

0xc35e,	// (0x00057ae8) list_double2_pane_t1_cp2_ParamLimits

0xc35e,	// (0x00057ae8) list_double2_pane_t1_cp2

0xc374,	// (0x00057afe) list_double2_pane_t2_cp2_ParamLimits

0xc374,	// (0x00057afe) list_double2_pane_t2_cp2

0xc386,	// (0x00057b10) list_double_pane_g1_cp2_ParamLimits

0xc386,	// (0x00057b10) list_double_pane_g1_cp2

0xc392,	// (0x00057b1c) list_double_pane_g2_cp2

0xc39a,	// (0x00057b24) list_double_pane_t1_cp2_ParamLimits

0xc39a,	// (0x00057b24) list_double_pane_t1_cp2

0xc3b0,	// (0x00057b3a) list_double_pane_t2_cp2_ParamLimits

0xc3b0,	// (0x00057b3a) list_double_pane_t2_cp2

0xa4d9,	// (0x00055c63) list_single_pane_cp2_g3

0xbfab,	// (0x00057735) list_single_pane_g1_cp2_ParamLimits

0xbfab,	// (0x00057735) list_single_pane_g1_cp2

0xc3eb,	// (0x00057b75) list_single_pane_g2_cp2

0xc3f3,	// (0x00057b7d) list_single_pane_t1_cp2_ParamLimits

0xc3f3,	// (0x00057b7d) list_single_pane_t1_cp2

0xa4e1,	// (0x00055c6b) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xa4e1,	// (0x00055c6b) list_single_large_graphic_pane_g1_cp2

0xc40b,	// (0x00057b95) list_single_large_graphic_pane_g2_cp2_ParamLimits

0xc40b,	// (0x00057b95) list_single_large_graphic_pane_g2_cp2

0xc417,	// (0x00057ba1) list_single_large_graphic_pane_g3_cp2

0xa4ed,	// (0x00055c77) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xa4ed,	// (0x00055c77) list_single_large_graphic_pane_g4_cp1

0xc41f,	// (0x00057ba9) list_single_large_graphic_pane_t1_cp2_ParamLimits

0xc41f,	// (0x00057ba9) list_single_large_graphic_pane_t1_cp2

0x2e72,	// (0x0004e5fc) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x2e72,	// (0x0004e5fc) list_single_graphic_heading_pane_g1_cp2

0x2e3f,	// (0x0004e5c9) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x2e3f,	// (0x0004e5c9) list_single_graphic_heading_pane_g4_cp2

0xc3eb,	// (0x00057b75) list_single_graphic_heading_pane_g5_cp2

0x2e7e,	// (0x0004e608) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x2e7e,	// (0x0004e608) list_single_graphic_heading_pane_t1_cp2

0x2e94,	// (0x0004e61e) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x2e94,	// (0x0004e61e) list_single_graphic_heading_pane_t2_cp2

0x2e33,	// (0x0004e5bd) list_single_2graphic_pane_g1_cp2_ParamLimits

0x2e33,	// (0x0004e5bd) list_single_2graphic_pane_g1_cp2

0x2e3f,	// (0x0004e5c9) list_single_2graphic_pane_g2_cp2_ParamLimits

0x2e3f,	// (0x0004e5c9) list_single_2graphic_pane_g2_cp2

0xc3eb,	// (0x00057b75) list_single_2graphic_pane_g3_cp2

0x2e50,	// (0x0004e5da) list_single_2graphic_pane_g4_cp2_ParamLimits

0x2e50,	// (0x0004e5da) list_single_2graphic_pane_g4_cp2

0x2e5c,	// (0x0004e5e6) list_single_2graphic_pane_t1_cp2_ParamLimits

0x2e5c,	// (0x0004e5e6) list_single_2graphic_pane_t1_cp2

0x8ec2,	// (0x0005464c) list_highlight_pane_g10_cp1

0x2a1b,	// (0x0004e1a5) list_highlight_pane_g1_cp1

0x2a23,	// (0x0004e1ad) list_highlight_pane_g2_cp1

0x2a2b,	// (0x0004e1b5) list_highlight_pane_g3_cp1

0x2a33,	// (0x0004e1bd) list_highlight_pane_g4_cp1

0x2a3b,	// (0x0004e1c5) list_highlight_pane_g5_cp1

0x2a43,	// (0x0004e1cd) list_highlight_pane_g6_cp1

0x2a4b,	// (0x0004e1d5) list_highlight_pane_g7_cp1

0x2a53,	// (0x0004e1dd) list_highlight_pane_g8_cp1

0x2a5b,	// (0x0004e1e5) list_highlight_pane_g9_cp1

0xc74c,	// (0x00057ed6) form_field_slider_pane_t3

0xc75a,	// (0x00057ee4) form_field_slider_pane_t4

0x295f,	// (0x0004e0e9) slider_form_pane_ParamLimits

0x295f,	// (0x0004e0e9) slider_form_pane

0x9101,	// (0x0005488b) control_abbreviations

0x9101,	// (0x0005488b) control_conventions

0x9101,	// (0x0005488b) control_definitions

0x9101,	// (0x0005488b) format_table_attribute

0xc98e,	// (0x00058118) bg_popup_preview_window_pane_g9

0x9101,	// (0x0005488b) format_table_data2

0x9101,	// (0x0005488b) format_table_data3

0x9101,	// (0x0005488b) format_table_data_example

0x0008,

0x9101,	// (0x0005488b) intro_purpose

0xf8b4,	// (0x0005b03e) bg_popup_preview_window_pane_g

0x9101,	// (0x0005488b) texts_category

0x9101,	// (0x0005488b) texts_graphics

0xc435,	// (0x00057bbf) text_digital

0xc444,	// (0x00057bce) text_primary

0xc453,	// (0x00057bdd) text_primary_small

0xc462,	// (0x00057bec) text_secondary

0xc471,	// (0x00057bfb) text_title

0xccfd,	// (0x00058487) bg_passive_tab_pane_g1_cp3_srt

0xa439,	// (0x00055bc3) bg_passive_tab_pane_g2_cp3_srt

0xcd06,	// (0x00058490) bg_passive_tab_pane_g3_cp3_srt

0x9352,	// (0x00054adc) bg_active_tab_pane_cp3_srt_ParamLimits

0x9352,	// (0x00054adc) bg_active_tab_pane_cp3_srt

0xcd0f,	// (0x00058499) tabs_4_active_pane_srt_g1

0xcd17,	// (0x000584a1) tabs_4_active_pane_srt_t1_ParamLimits

0xcd17,	// (0x000584a1) tabs_4_active_pane_srt_t1

0xccfd,	// (0x00058487) bg_active_tab_pane_g1_cp3_copy1

0xa439,	// (0x00055bc3) bg_active_tab_pane_g2_cp3_copy1

0xcd06,	// (0x00058490) bg_active_tab_pane_g3_cp3_copy1

0x939c,	// (0x00054b26) tabs_2_long_active_pane_srt_ParamLimits

0x939c,	// (0x00054b26) tabs_2_long_active_pane_srt

0x939c,	// (0x00054b26) tabs_2_long_passive_pane_srt_ParamLimits

0x939c,	// (0x00054b26) tabs_2_long_passive_pane_srt

0x9ec6,	// (0x00055650) bg_passive_tab_pane_cp4_srt_ParamLimits

0x9ec6,	// (0x00055650) bg_passive_tab_pane_cp4_srt

0xcaae,	// (0x00058238) bg_passive_tab_pane_g1_cp4_srt

0xa439,	// (0x00055bc3) bg_passive_tab_pane_g2_cp4_srt

0xcab7,	// (0x00058241) bg_passive_tab_pane_g3_cp4_srt

0x939c,	// (0x00054b26) bg_active_tab_pane_cp4_srt_ParamLimits

0x939c,	// (0x00054b26) bg_active_tab_pane_cp4_srt

0xcac0,	// (0x0005824a) tabs_2_long_active_pane_srt_t1_ParamLimits

0xcac0,	// (0x0005824a) tabs_2_long_active_pane_srt_t1

0xcaae,	// (0x00058238) bg_active_tab_pane_g1_cp4_srt

0xa439,	// (0x00055bc3) bg_active_tab_pane_g2_cp4_srt

0xcab7,	// (0x00058241) bg_active_tab_pane_g3_cp4_srt

0x9352,	// (0x00054adc) tabs_3_long_active_pane_srt_ParamLimits

0x9352,	// (0x00054adc) tabs_3_long_active_pane_srt

0x9352,	// (0x00054adc) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x9352,	// (0x00054adc) tabs_3_long_passive_pane_cp_srt

0x9352,	// (0x00054adc) tabs_3_long_passive_pane_srt_ParamLimits

0x9352,	// (0x00054adc) tabs_3_long_passive_pane_srt

0x9ec6,	// (0x00055650) bg_passive_tab_pane_cp5_srt_ParamLimits

0x9ec6,	// (0x00055650) bg_passive_tab_pane_cp5_srt

0xa485,	// (0x00055c0f) bg_passive_tab_pane_g1_cp5_srt

0xa439,	// (0x00055bc3) bg_passive_tab_pane_g2_cp5_srt

0xa48e,	// (0x00055c18) bg_passive_tab_pane_g3_cp5_srt

0x939c,	// (0x00054b26) bg_active_tab_pane_cp5_srt_ParamLimits

0x939c,	// (0x00054b26) bg_active_tab_pane_cp5_srt

0xca98,	// (0x00058222) tabs_3_long_active_pane_srt_t1_ParamLimits

0xca98,	// (0x00058222) tabs_3_long_active_pane_srt_t1

0xa485,	// (0x00055c0f) bg_active_tab_pane_g1_cp5_srt

0xa439,	// (0x00055bc3) bg_active_tab_pane_g2_cp5_srt

0xa48e,	// (0x00055c18) bg_active_tab_pane_g3_cp5_srt

0x3526,	// (0x0004ecb0) navi_text_pane_srt_t1

0x351e,	// (0x0004eca8) navi_icon_pane_srt_g1

0xc55c,	// (0x00057ce6) midp_editing_number_pane_srt

0xc480,	// (0x00057c0a) midp_ticker_pane_srt

0xc564,	// (0x00057cee) midp_ticker_pane_srt_g1

0xc56c,	// (0x00057cf6) midp_ticker_pane_srt_g2

0x0001,

0xf743,	// (0x0005aecd) midp_ticker_pane_srt_g

0xc574,	// (0x00057cfe) midp_ticker_pane_srt_t1

0x350f,	// (0x0004ec99) midp_editing_number_pane_t1_copy1

0xa507,	// (0x00055c91) listscroll_midp_pane

0xa507,	// (0x00055c91) midp_form_pane

0xa572,	// (0x00055cfc) midp_info_popup_window_ParamLimits

0xa572,	// (0x00055cfc) midp_info_popup_window

0x9dfd,	// (0x00055587) bg_popup_sub_pane_cp50_ParamLimits

0x9dfd,	// (0x00055587) bg_popup_sub_pane_cp50

0x264f,	// (0x0004ddd9) listscroll_midp_info_pane_ParamLimits

0x264f,	// (0x0004ddd9) listscroll_midp_info_pane

0x262f,	// (0x0004ddb9) listscroll_form_midp_pane_ParamLimits

0x262f,	// (0x0004ddb9) listscroll_form_midp_pane

0x263b,	// (0x0004ddc5) scroll_bar_cp050

0x262f,	// (0x0004ddb9) list_midp_pane

0xcea1,	// (0x0005862b) signal_pane_g2_cp

0x2549,	// (0x0004dcd3) listscroll_midp_info_pane_t1_ParamLimits

0x2549,	// (0x0004dcd3) listscroll_midp_info_pane_t1

0xb57e,	// (0x00056d08) listscroll_midp_info_pane_t2_ParamLimits

0xb57e,	// (0x00056d08) listscroll_midp_info_pane_t2

0xb5bc,	// (0x00056d46) listscroll_midp_info_pane_t3_ParamLimits

0xb5bc,	// (0x00056d46) listscroll_midp_info_pane_t3

0xb5f6,	// (0x00056d80) listscroll_midp_info_pane_t4_ParamLimits

0xb5f6,	// (0x00056d80) listscroll_midp_info_pane_t4

0x0003,

0xf7ef,	// (0x0005af79) listscroll_midp_info_pane_t_ParamLimits

0xf7ef,	// (0x0005af79) listscroll_midp_info_pane_t

0x9e60,	// (0x000555ea) scroll_pane_cp21

0x24e9,	// (0x0004dc73) form_midp_field_choice_group_pane

0xb541,	// (0x00056ccb) form_midp_field_text_pane

0x252f,	// (0x0004dcb9) form_midp_field_time_pane

0x2537,	// (0x0004dcc1) form_midp_gauge_slider_pane

0x2540,	// (0x0004dcca) form_midp_gauge_wait_pane

0x9101,	// (0x0005488b) form_midp_image_pane

0x8c9b,	// (0x00054425) list_single_midp_pane_ParamLimits

0x8c9b,	// (0x00054425) list_single_midp_pane

0xb51f,	// (0x00056ca9) form_midp_field_text_pane_t1

0x2268,	// (0x0004d9f2) input_focus_pane_cp050

0x24d8,	// (0x0004dc62) list_midp_form_text_pane

0x246d,	// (0x0004dbf7) form_midp_field_choice_group_pane_t1

0x247b,	// (0x0004dc05) input_focus_pane_cp051

0x248f,	// (0x0004dc19) list_midp_choice_pane

0x9101,	// (0x0005488b) status_idle_pane

0x2451,	// (0x0004dbdb) form_midp_field_time_pane_t1

0x8ec2,	// (0x0005464c) wait_anim_pane_g2_copy1

0x245f,	// (0x0004dbe9) form_midp_field_time_pane_t2

0x0001,

0xc4e0,	// (0x00057c6a) aid_navinavi_width_2_pane

0xf7ea,	// (0x0005af74) form_midp_field_time_pane_t

0x9101,	// (0x0005488b) input_focus_pane_cp052

0x9101,	// (0x0005488b) bg_input_focus_pane_cp040

0x2411,	// (0x0004db9b) form_midp_gauge_slider_pane_t1

0x241f,	// (0x0004dba9) form_midp_gauge_slider_pane_t2

0xb503,	// (0x00056c8d) form_midp_gauge_slider_pane_t3

0xb511,	// (0x00056c9b) form_midp_gauge_slider_pane_t4

0x0003,

0xf7e1,	// (0x0005af6b) form_midp_gauge_slider_pane_t

0x2449,	// (0x0004dbd3) form_midp_slider_pane

0x939c,	// (0x00054b26) bg_input_focus_pane_cp041_ParamLimits

0x939c,	// (0x00054b26) bg_input_focus_pane_cp041

0x23de,	// (0x0004db68) form_midp_gauge_wait_pane_t1_ParamLimits

0x23de,	// (0x0004db68) form_midp_gauge_wait_pane_t1

0x23f0,	// (0x0004db7a) form_midp_gauge_wait_pane_t2_ParamLimits

0x23f0,	// (0x0004db7a) form_midp_gauge_wait_pane_t2

0x0001,

0xf7dc,	// (0x0005af66) form_midp_gauge_wait_pane_t_ParamLimits

0xf7dc,	// (0x0005af66) form_midp_gauge_wait_pane_t

0x2402,	// (0x0004db8c) form_midp_wait_pane_ParamLimits

0x2402,	// (0x0004db8c) form_midp_wait_pane

0xb4cd,	// (0x00056c57) form_midp_image_pane_g1

0xb4d6,	// (0x00056c60) form_midp_image_pane_t1

0xb4e5,	// (0x00056c6f) form_midp_image_pane_t2

0xb4f4,	// (0x00056c7e) form_midp_image_pane_t3

0x0002,

0xf7d5,	// (0x0005af5f) form_midp_image_pane_t

0x239f,	// (0x0004db29) list_single_midp_pane_g1

0xe9fc,	// (0x0005a186) list_single_midp_pane_t1

0xb4b8,	// (0x00056c42) list_midp_form_item_pane_ParamLimits

0xb4b8,	// (0x00056c42) list_midp_form_item_pane

0xc488,	// (0x00057c12) list_midp_form_item_pane_t1

0xc497,	// (0x00057c21) midp_ticker_pane_g1

0xc4a3,	// (0x00057c2d) midp_ticker_pane_g2

0x0001,

0xf729,	// (0x0005aeb3) midp_ticker_pane_g

0xc4af,	// (0x00057c39) midp_ticker_pane_t1

0x375c,	// (0x0004eee6) midp_editing_number_pane_t1

0x373a,	// (0x0004eec4) midp_editing_number_pane

0x3749,	// (0x0004eed3) midp_ticker_pane

0x34ff,	// (0x0004ec89) ai_message_heading_pane

0x9101,	// (0x0005488b) bg_popup_window_pane_cp14

0x3507,	// (0x0004ec91) listscroll_ai_message_pane

0x3489,	// (0x0004ec13) ai_message_heading_pane_g1_ParamLimits

0x3489,	// (0x0004ec13) ai_message_heading_pane_g1

0xca60,	// (0x000581ea) ai_message_heading_pane_g2_ParamLimits

0xca60,	// (0x000581ea) ai_message_heading_pane_g2

0x34a1,	// (0x0004ec2b) ai_message_heading_pane_g3_ParamLimits

0x34a1,	// (0x0004ec2b) ai_message_heading_pane_g3

0x34ad,	// (0x0004ec37) ai_message_heading_pane_g4_ParamLimits

0x34ad,	// (0x0004ec37) ai_message_heading_pane_g4

0x0003,

0xf916,	// (0x0005b0a0) ai_message_heading_pane_g_ParamLimits

0xf916,	// (0x0005b0a0) ai_message_heading_pane_g

0xca6c,	// (0x000581f6) ai_message_heading_pane_t1_ParamLimits

0xca6c,	// (0x000581f6) ai_message_heading_pane_t1

0xca86,	// (0x00058210) ai_message_heading_pane_t2_ParamLimits

0xca86,	// (0x00058210) ai_message_heading_pane_t2

0x0001,

0xf91f,	// (0x0005b0a9) ai_message_heading_pane_t_ParamLimits

0xf91f,	// (0x0005b0a9) ai_message_heading_pane_t

0x34e5,	// (0x0004ec6f) bg_popup_heading_pane_cp1_ParamLimits

0x34e5,	// (0x0004ec6f) bg_popup_heading_pane_cp1

0x3477,	// (0x0004ec01) list_ai_message_pane_ParamLimits

0x3477,	// (0x0004ec01) list_ai_message_pane

0x9e60,	// (0x000555ea) scroll_pane_cp10

0xca58,	// (0x000581e2) list_ai_message_pane_g1

0x341b,	// (0x0004eba5) list_ai_message_pane_g2

0x0001,

0xf8f3,	// (0x0005b07d) list_ai_message_pane_g

0x3423,	// (0x0004ebad) list_ai_message_pane_t1_ParamLimits

0x3423,	// (0x0004ebad) list_ai_message_pane_t1

0x3438,	// (0x0004ebc2) list_ai_message_pane_t2_ParamLimits

0x3438,	// (0x0004ebc2) list_ai_message_pane_t2

0x344d,	// (0x0004ebd7) list_ai_message_pane_t3_ParamLimits

0x344d,	// (0x0004ebd7) list_ai_message_pane_t3

0x3462,	// (0x0004ebec) list_ai_message_pane_t4_ParamLimits

0x3462,	// (0x0004ebec) list_ai_message_pane_t4

0x0003,

0xf8f8,	// (0x0005b082) list_ai_message_pane_t_ParamLimits

0xf8f8,	// (0x0005b082) list_ai_message_pane_t

0xca34,	// (0x000581be) cell_ai_soft_ind_pane_ParamLimits

0xca34,	// (0x000581be) cell_ai_soft_ind_pane

0xc4c1,	// (0x00057c4b) cell_ai_soft_ind_pane_g1_ParamLimits

0xc4c1,	// (0x00057c4b) cell_ai_soft_ind_pane_g1

0x9101,	// (0x0005488b) grid_highlight_cp1

0xc4ce,	// (0x00057c58) text_secondary_cp56_ParamLimits

0xc4ce,	// (0x00057c58) text_secondary_cp56

0x33d3,	// (0x0004eb5d) example_general_pane_ParamLimits

0x33d3,	// (0x0004eb5d) example_general_pane

0x33df,	// (0x0004eb69) example_parent_pane_g1_ParamLimits

0x33df,	// (0x0004eb69) example_parent_pane_g1

0x33eb,	// (0x0004eb75) example_parent_pane_t1_ParamLimits

0x33eb,	// (0x0004eb75) example_parent_pane_t1

0xac3c,	// (0x000563c6) popup_preview_text_window_ParamLimits

0xac3c,	// (0x000563c6) popup_preview_text_window

0xc3e3,	// (0x00057b6d) list_single_pane_cp2_g4

0x97d4,	// (0x00054f5e) bg_popup_preview_window_pane_ParamLimits

0x97d4,	// (0x00054f5e) bg_popup_preview_window_pane

0xc996,	// (0x00058120) popup_preview_text_window_t1_ParamLimits

0xc996,	// (0x00058120) popup_preview_text_window_t1

0x314b,	// (0x0004e8d5) popup_preview_text_window_t2_ParamLimits

0x314b,	// (0x0004e8d5) popup_preview_text_window_t2

0x3194,	// (0x0004e91e) popup_preview_text_window_t3_ParamLimits

0x3194,	// (0x0004e91e) popup_preview_text_window_t3

0x31d9,	// (0x0004e963) popup_preview_text_window_t4_ParamLimits

0x31d9,	// (0x0004e963) popup_preview_text_window_t4

0x0004,

0xf8c7,	// (0x0005b051) popup_preview_text_window_t_ParamLimits

0xf8c7,	// (0x0005b051) popup_preview_text_window_t

0x3257,	// (0x0004e9e1) scroll_pane_cp11

0x21dc,	// (0x0004d966) bg_popup_preview_window_pane_g1

0xc956,	// (0x000580e0) bg_popup_preview_window_pane_g2

0xc95e,	// (0x000580e8) bg_popup_preview_window_pane_g3

0xc966,	// (0x000580f0) bg_popup_preview_window_pane_g4

0xc96e,	// (0x000580f8) bg_popup_preview_window_pane_g5

0xc976,	// (0x00058100) bg_popup_preview_window_pane_g6

0xc97e,	// (0x00058108) bg_popup_preview_window_pane_g7

0xc986,	// (0x00058110) bg_popup_preview_window_pane_g8

0xe7aa,	// (0x00059f34) aid_popup_width_pane

0xabb8,	// (0x00056342) popup_midp_note_alarm_window_ParamLimits

0xabb8,	// (0x00056342) popup_midp_note_alarm_window

0x9cd6,	// (0x00055460) data_form_pane_ParamLimits

0x8ad1,	// (0x0005425b) form_field_data_pane_g1

0x8adb,	// (0x00054265) form_field_data_pane_t1_ParamLimits

0x9ce2,	// (0x0005546c) input_focus_pane_ParamLimits

0xe882,	// (0x0005a00c) data_form_wide_pane_ParamLimits

0xe893,	// (0x0005a01d) form_field_data_wide_pane_g1

0xe89f,	// (0x0005a029) form_field_data_wide_pane_t1_ParamLimits

0x9a78,	// (0x00055202) input_focus_pane_cp6_ParamLimits

0x9e0b,	// (0x00055595) input_popup_find_pane_g1_ParamLimits

0x9e0b,	// (0x00055595) input_popup_find_pane_g1

0xf1f1,	// (0x0005a97b) aid_navi_side_left_pane

0xf206,	// (0x0005a990) aid_navi_side_right_pane

0x2b16,	// (0x0004e2a0) bg_popup_window_pane_cp30_ParamLimits

0x2b16,	// (0x0004e2a0) bg_popup_window_pane_cp30

0x2b90,	// (0x0004e31a) popup_midp_note_alarm_window_g1_ParamLimits

0x2b90,	// (0x0004e31a) popup_midp_note_alarm_window_g1

0x2bc0,	// (0x0004e34a) popup_midp_note_alarm_window_t1_ParamLimits

0x2bc0,	// (0x0004e34a) popup_midp_note_alarm_window_t1

0xc79f,	// (0x00057f29) popup_midp_note_alarm_window_t2_ParamLimits

0xc79f,	// (0x00057f29) popup_midp_note_alarm_window_t2

0xc84d,	// (0x00057fd7) popup_midp_note_alarm_window_t3_ParamLimits

0xc84d,	// (0x00057fd7) popup_midp_note_alarm_window_t3

0xc875,	// (0x00057fff) popup_midp_note_alarm_window_t4_ParamLimits

0xc875,	// (0x00057fff) popup_midp_note_alarm_window_t4

0x2d57,	// (0x0004e4e1) popup_midp_note_alarm_window_t5_ParamLimits

0x2d57,	// (0x0004e4e1) popup_midp_note_alarm_window_t5

0x000a,

0xf864,	// (0x0005afee) popup_midp_note_alarm_window_t_ParamLimits

0xf864,	// (0x0005afee) popup_midp_note_alarm_window_t

0x2e03,	// (0x0004e58d) wait_bar_pane_cp1_ParamLimits

0x2e03,	// (0x0004e58d) wait_bar_pane_cp1

0x9101,	// (0x0005488b) wait_anim_pane_copy1

0x9101,	// (0x0005488b) wait_border_pane_copy1

0x280c,	// (0x0004df96) wait_border_pane_g1_copy1

0xe8b9,	// (0x0005a043) form_field_popup_pane_g1

0x8af5,	// (0x0005427f) form_field_popup_pane_t1_ParamLimits

0x9ce2,	// (0x0005546c) input_focus_pane_cp7_ParamLimits

0x9d10,	// (0x0005549a) list_form_pane_ParamLimits

0xe8c1,	// (0x0005a04b) form_field_popup_wide_pane_g1

0xe8c9,	// (0x0005a053) form_field_popup_wide_pane_t1_ParamLimits

0x9ce2,	// (0x0005546c) input_focus_pane_cp8_ParamLimits

0x9d1c,	// (0x000554a6) list_form_wide_pane_ParamLimits

0x3897,	// (0x0004f021) aid_size_cell_graphic_pane

0x8b74,	// (0x000542fe) data_form_pane_t1_ParamLimits

0x8cc3,	// (0x0005444d) data_form_wide_pane_t1_ParamLimits

0xb07f,	// (0x00056809) bg_status_flat_pane

0x928e,	// (0x00054a18) title_pane_t1_ParamLimits

0x931a,	// (0x00054aa4) title_pane_t2_ParamLimits

0x9340,	// (0x00054aca) title_pane_t3_ParamLimits

0xf532,	// (0x0005acbc) title_pane_t_ParamLimits

0xbfb7,	// (0x00057741) level_1_signal_ParamLimits

0xbfc4,	// (0x0005774e) level_2_signal_ParamLimits

0xbfd1,	// (0x0005775b) level_3_signal_ParamLimits

0xbfde,	// (0x00057768) level_4_signal_ParamLimits

0xbfeb,	// (0x00057775) level_5_signal_ParamLimits

0xbff8,	// (0x00057782) level_6_signal_ParamLimits

0xc005,	// (0x0005778f) level_7_signal_ParamLimits

0xbfb7,	// (0x00057741) level_1_battery_ParamLimits

0xbfc4,	// (0x0005774e) level_2_battery_ParamLimits

0xbfd1,	// (0x0005775b) level_3_battery_ParamLimits

0xbfde,	// (0x00057768) level_4_battery_ParamLimits

0xbfeb,	// (0x00057775) level_5_battery_ParamLimits

0xbff8,	// (0x00057782) level_6_battery_ParamLimits

0xc005,	// (0x0005778f) level_7_battery_ParamLimits

0x2a1b,	// (0x0004e1a5) bg_status_flat_pane_g1

0x2a23,	// (0x0004e1ad) bg_status_flat_pane_g2

0x2a2b,	// (0x0004e1b5) bg_status_flat_pane_g3

0x2a33,	// (0x0004e1bd) bg_status_flat_pane_g4

0x2a3b,	// (0x0004e1c5) bg_status_flat_pane_g5

0x2a43,	// (0x0004e1cd) bg_status_flat_pane_g6

0x2a4b,	// (0x0004e1d5) bg_status_flat_pane_g7

0x9368,	// (0x00054af2) tabs_3_active_pane_t1_ParamLimits

0x9368,	// (0x00054af2) tabs_3_passive_pane_t1_ParamLimits

0x9382,	// (0x00054b0c) tabs_4_active_pane_t1_ParamLimits

0x9382,	// (0x00054b0c) tabs_4_1_passive_pane_t1_ParamLimits

0x9ea1,	// (0x0005562b) tabs_2_active_pane_t1_ParamLimits

0x9ea1,	// (0x0005562b) tabs_2_passive_pane_t1_ParamLimits

0x939c,	// (0x00054b26) bg_active_tab_pane_cp4_ParamLimits

0x9eb3,	// (0x0005563d) tabs_2_long_active_pane_t1_ParamLimits

0x9ec6,	// (0x00055650) bg_passive_tab_pane_cp4_ParamLimits

0x09bf,	// (0x0004c149) list_single_midp_graphic_pane_t1_ParamLimits

0x939c,	// (0x00054b26) bg_active_tab_pane_cp5_ParamLimits

0x9ed2,	// (0x0005565c) tabs_3_long_active_pane_t1_ParamLimits

0x9ec6,	// (0x00055650) bg_passive_tab_pane_cp5_ParamLimits

0x09bf,	// (0x0004c149) list_single_midp_graphic_pane_t1

0xb07f,	// (0x00056809) bg_status_flat_pane_ParamLimits

0x079b,	// (0x0004bf25) indicator_pane_cp2_ParamLimits

0x079b,	// (0x0004bf25) indicator_pane_cp2

0xb1fd,	// (0x00056987) navi_pane_srt_ParamLimits

0xb1fd,	// (0x00056987) navi_pane_srt

0x08ea,	// (0x0004c074) popup_clock_digital_analogue_window_cp1

0x953c,	// (0x00054cc6) indicator_pane_t1

0xc480,	// (0x00057c0a) copy_highlight_pane

0xc480,	// (0x00057c0a) cursor_graphics_pane

0xc480,	// (0x00057c0a) graphic_within_text_pane

0xc480,	// (0x00057c0a) link_highlight_pane

0x321a,	// (0x0004e9a4) popup_preview_text_window_t5_ParamLimits

0x321a,	// (0x0004e9a4) popup_preview_text_window_t5

0xc4e8,	// (0x00057c72) cursor_digital_pane

0xc4e8,	// (0x00057c72) cursor_primary_pane

0xc4f9,	// (0x00057c83) cursor_primary_small_pane

0xc501,	// (0x00057c8b) cursor_secondary_pane

0xc509,	// (0x00057c93) cursor_title_pane

0xc4e8,	// (0x00057c72) link_highlight_digital_pane

0xc4f0,	// (0x00057c7a) link_highlight_primary_pane

0xc4f9,	// (0x00057c83) link_highlight_primary_small_pane

0xc501,	// (0x00057c8b) link_highlight_secondary_pane

0xc509,	// (0x00057c93) link_highlight_title_pane

0xc4e8,	// (0x00057c72) copy_highlight_digital_pane

0xc4e8,	// (0x00057c72) copy_highlight_primary_pane

0xc4f9,	// (0x00057c83) copy_highlight_primary_small_pane

0xc501,	// (0x00057c8b) copy_highlight_secondary_pane

0xc509,	// (0x00057c93) copy_highlight_title_pane

0xc501,	// (0x00057c8b) graphic_text_digital_pane

0x2ab9,	// (0x0004e243) graphic_text_primary_pane

0x2ac2,	// (0x0004e24c) graphic_text_primary_small_pane

0xc4f9,	// (0x00057c83) graphic_text_secondary_pane

0xc4e8,	// (0x00057c72) graphic_text_title_pane

0xa5c3,	// (0x00055d4d) cursor_primary_pane_g1

0x2aab,	// (0x0004e235) cursor_text_primary_t1

0xc795,	// (0x00057f1f) cursor_primary_small_pane_g1

0x2a9d,	// (0x0004e227) cursor_text_primary_small_t1

0xc78b,	// (0x00057f15) cursor_primary_small_pane_g1_copy1

0x2a85,	// (0x0004e20f) cursor_text_primary_small_t1_copy1

0x2a63,	// (0x0004e1ed) cursor_text_title_t1

0xc781,	// (0x00057f0b) cursor_title_pane_g1

0xa5c3,	// (0x00055d4d) cursor_digital_pane_g1

0xc511,	// (0x00057c9b) cursor_text_digital_t1

0xc51f,	// (0x00057ca9) link_highlight_primary_pane_g1

0x2a0c,	// (0x0004e196) link_highlight_primary_pane_t1

0xc51f,	// (0x00057ca9) link_highlight_primary_small_pane_g1

0xc527,	// (0x00057cb1) link_highlight_primary_small_pane_t1

0xc51f,	// (0x00057ca9) link_highlight_secondary_pane_g1

0xc536,	// (0x00057cc0) link_highlight_secondary_pane_t1

0x2971,	// (0x0004e0fb) link_highlight_title_pane_g1

0x2988,	// (0x0004e112) link_highlight_title_pane_t1

0x2971,	// (0x0004e0fb) link_highlight_digital_pane_g1

0x2979,	// (0x0004e103) link_highlight_digital_pane_t1

0x282b,	// (0x0004dfb5) copy_highlight_primary_pane_g1

0x2851,	// (0x0004dfdb) copy_highlight_primary_pane_t1

0x282b,	// (0x0004dfb5) copy_highlight_primary_small_pane_g1

0x2842,	// (0x0004dfcc) copy_highlight_primary_small_pane_t1

0xc545,	// (0x00057ccf) copy_highlight_secondary_pane_g1

0xc54d,	// (0x00057cd7) copy_highlight_secondary_pane_t1

0x282b,	// (0x0004dfb5) copy_highlight_title_pane_g1

0x2833,	// (0x0004dfbd) copy_highlight_title_pane_t1

0x282b,	// (0x0004dfb5) copy_highlight_digital_pane_g1

0x3a65,	// (0x0004f1ef) copy_highlight_digital_pane_t1

0x39b9,	// (0x0004f143) graphic_text_primary_pane_g1

0x3a49,	// (0x0004f1d3) graphic_text_primary_pane_t1

0x3a57,	// (0x0004f1e1) graphic_text_primary_pane_t2

0x0001,

0xf993,	// (0x0005b11d) graphic_text_primary_pane_t

0x3a25,	// (0x0004f1af) graphic_text_primary_small_pane_g1

0x3a2d,	// (0x0004f1b7) graphic_text_primary_small_pane_t1

0x3a3b,	// (0x0004f1c5) graphic_text_primary_small_pane_t2

0x0001,

0xf98e,	// (0x0005b118) graphic_text_primary_small_pane_t

0x3a01,	// (0x0004f18b) graphic_text_secondary_pane_g1

0x3a09,	// (0x0004f193) graphic_text_secondary_pane_t1

0x3a17,	// (0x0004f1a1) graphic_text_secondary_pane_t2

0x0001,

0xf989,	// (0x0005b113) graphic_text_secondary_pane_t

0x39dd,	// (0x0004f167) graphic_text_title_pane_g1

0x39e5,	// (0x0004f16f) graphic_text_title_pane_t1

0x39f3,	// (0x0004f17d) graphic_text_title_pane_t2

0x0001,

0xf984,	// (0x0005b10e) graphic_text_title_pane_t

0x39b9,	// (0x0004f143) graphic_text_digital_pane_g1

0x39c1,	// (0x0004f14b) graphic_text_digital_pane_t1

0x39cf,	// (0x0004f159) graphic_text_digital_pane_t2

0x0001,

0xf97f,	// (0x0005b109) graphic_text_digital_pane_t

0x939c,	// (0x00054b26) navi_icon_pane_srt_ParamLimits

0x939c,	// (0x00054b26) navi_icon_pane_srt

0x9101,	// (0x0005488b) navi_midp_pane_srt

0x9101,	// (0x0005488b) navi_navi_pane_srt

0x939c,	// (0x00054b26) navi_text_pane_srt_ParamLimits

0x939c,	// (0x00054b26) navi_text_pane_srt

0x3984,	// (0x0004f10e) navi_navi_icon_text_pane_srt

0x398c,	// (0x0004f116) navi_navi_pane_srt_g1_ParamLimits

0x398c,	// (0x0004f116) navi_navi_pane_srt_g1

0x399e,	// (0x0004f128) navi_navi_pane_srt_g2_ParamLimits

0x399e,	// (0x0004f128) navi_navi_pane_srt_g2

0x0001,

0xf97a,	// (0x0005b104) navi_navi_pane_srt_g_ParamLimits

0xf97a,	// (0x0005b104) navi_navi_pane_srt_g

0x39b0,	// (0x0004f13a) navi_navi_tabs_pane_srt

0x3984,	// (0x0004f10e) navi_navi_text_pane_srt

0x3984,	// (0x0004f10e) navi_navi_volume_pane_srt

0x3975,	// (0x0004f0ff) navi_navi_text_pane_srt_t1

0x0dea,	// (0x0004c574) navi_navi_volume_pane_srt_g1

0x0df2,	// (0x0004c57c) volume_small_pane_srt_ParamLimits

0x0df2,	// (0x0004c57c) volume_small_pane_srt

0xf471,	// (0x0005abfb) volume_small_pane_srt_g1_ParamLimits

0xf471,	// (0x0005abfb) volume_small_pane_srt_g1

0xf481,	// (0x0005ac0b) volume_small_pane_srt_g2_ParamLimits

0xf481,	// (0x0005ac0b) volume_small_pane_srt_g2

0xf492,	// (0x0005ac1c) volume_small_pane_srt_g3_ParamLimits

0xf492,	// (0x0005ac1c) volume_small_pane_srt_g3

0xf4a3,	// (0x0005ac2d) volume_small_pane_srt_g4_ParamLimits

0xf4a3,	// (0x0005ac2d) volume_small_pane_srt_g4

0xf4b4,	// (0x0005ac3e) volume_small_pane_srt_g5_ParamLimits

0xf4b4,	// (0x0005ac3e) volume_small_pane_srt_g5

0xf4c5,	// (0x0005ac4f) volume_small_pane_srt_g6_ParamLimits

0xf4c5,	// (0x0005ac4f) volume_small_pane_srt_g6

0xf4d6,	// (0x0005ac60) volume_small_pane_srt_g7_ParamLimits

0xf4d6,	// (0x0005ac60) volume_small_pane_srt_g7

0xf4e7,	// (0x0005ac71) volume_small_pane_srt_g8_ParamLimits

0xf4e7,	// (0x0005ac71) volume_small_pane_srt_g8

0xf4f8,	// (0x0005ac82) volume_small_pane_srt_g9_ParamLimits

0xf4f8,	// (0x0005ac82) volume_small_pane_srt_g9

0xf509,	// (0x0005ac93) volume_small_pane_srt_g10_ParamLimits

0xf509,	// (0x0005ac93) volume_small_pane_srt_g10

0x0009,

0xf72e,	// (0x0005aeb8) volume_small_pane_srt_g_ParamLimits

0xf72e,	// (0x0005aeb8) volume_small_pane_srt_g

0x987d,	// (0x00055007) query_popup_data_pane_cp2

0x395b,	// (0x0004f0e5) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x395b,	// (0x0004f0e5) navi_navi_icon_text_pane_srt_t1

0x2ab9,	// (0x0004e243) navi_tabs_2_long_pane_srt

0x2ab9,	// (0x0004e243) navi_tabs_2_pane_srt

0x2ab9,	// (0x0004e243) navi_tabs_3_long_pane_srt

0x2ab9,	// (0x0004e243) navi_tabs_3_pane_srt

0x2ab9,	// (0x0004e243) navi_tabs_4_pane_srt

0xb747,	// (0x00056ed1) tabs_2_active_pane_srt_ParamLimits

0xb747,	// (0x00056ed1) tabs_2_active_pane_srt

0xb757,	// (0x00056ee1) tabs_2_passive_pane_srt_ParamLimits

0xb757,	// (0x00056ee1) tabs_2_passive_pane_srt

0x2268,	// (0x0004d9f2) bg_passive_tab_pane_cp1_srt_ParamLimits

0x2268,	// (0x0004d9f2) bg_passive_tab_pane_cp1_srt

0xcda0,	// (0x0005852a) bg_passive_tab_pane_g1_cp1_srt

0xa439,	// (0x00055bc3) bg_passive_tab_pane_g2_cp1_srt

0xcda9,	// (0x00058533) bg_passive_tab_pane_g3_cp1_srt

0x9352,	// (0x00054adc) bg_active_tab_pane_cp1_srt_ParamLimits

0x9352,	// (0x00054adc) bg_active_tab_pane_cp1_srt

0xcdb2,	// (0x0005853c) tabs_2_active_pane_srt_g1

0xcdba,	// (0x00058544) tabs_2_active_pane_srt_t1_ParamLimits

0xcdba,	// (0x00058544) tabs_2_active_pane_srt_t1

0xcda0,	// (0x0005852a) bg_active_tab_pane_g1_cp1_srt

0xa439,	// (0x00055bc3) bg_active_tab_pane_g2_cp1_srt

0xcda9,	// (0x00058533) bg_active_tab_pane_g3_cp1_srt

0xb714,	// (0x00056e9e) tabs_3_active_pane_srt_ParamLimits

0xb714,	// (0x00056e9e) tabs_3_active_pane_srt

0xb725,	// (0x00056eaf) tabs_3_passive_pane_cp_srt_ParamLimits

0xb725,	// (0x00056eaf) tabs_3_passive_pane_cp_srt

0xb736,	// (0x00056ec0) tabs_3_passive_pane_srt_ParamLimits

0xb736,	// (0x00056ec0) tabs_3_passive_pane_srt

0x2268,	// (0x0004d9f2) bg_passive_tab_pane_cp2_srt_ParamLimits

0x2268,	// (0x0004d9f2) bg_passive_tab_pane_cp2_srt

0xa5cd,	// (0x00055d57) bg_passive_tab_pane_g1_cp2_srt

0xa439,	// (0x00055bc3) bg_passive_tab_pane_g2_cp2_srt

0xa5d6,	// (0x00055d60) bg_passive_tab_pane_g3_cp2_srt

0x9352,	// (0x00054adc) bg_active_tab_pane_cp2_srt_ParamLimits

0x9352,	// (0x00054adc) bg_active_tab_pane_cp2_srt

0xcd82,	// (0x0005850c) tabs_3_active_pane_srt_g1

0xcd8a,	// (0x00058514) tabs_3_active_pane_srt_t1_ParamLimits

0xcd8a,	// (0x00058514) tabs_3_active_pane_srt_t1

0xa5cd,	// (0x00055d57) bg_active_tab_pane_g1_cp2_srt

0xa439,	// (0x00055bc3) bg_active_tab_pane_g2_cp2_srt

0xa5d6,	// (0x00055d60) bg_active_tab_pane_g3_cp2_srt

0x0d4f,	// (0x0004c4d9) tabs_4_active_pane_srt_ParamLimits

0x0d4f,	// (0x0004c4d9) tabs_4_active_pane_srt

0x0d61,	// (0x0004c4eb) tabs_4_passive_pane_cp2_srt_ParamLimits

0x0d61,	// (0x0004c4eb) tabs_4_passive_pane_cp2_srt

0x0046,	// (0x0004b7d0) aid_size_cell_toolbar

0x35b7,	// (0x0004ed41) main_idle_act_pane_ParamLimits

0x01fd,	// (0x0004b987) popup_large_graphic_colour_window_ParamLimits

0xaeee,	// (0x00056678) popup_toolbar_window_ParamLimits

0xaeee,	// (0x00056678) popup_toolbar_window

0x376b,	// (0x0004eef5) list_single_graphic_2heading_pane_ParamLimits

0x376b,	// (0x0004eef5) list_single_graphic_2heading_pane

0xa07f,	// (0x00055809) aid_size_cell_apps_grid_lsc_pane

0xa091,	// (0x0005581b) aid_size_cell_apps_grid_prt_pane

0x9ec6,	// (0x00055650) bg_wml_button_pane_cp1_ParamLimits

0x9ec6,	// (0x00055650) bg_wml_button_pane_cp1

0xb51f,	// (0x00056ca9) form_midp_field_text_pane_t1_ParamLimits

0x2268,	// (0x0004d9f2) input_focus_pane_cp050_ParamLimits

0x24d8,	// (0x0004dc62) list_midp_form_text_pane_ParamLimits

0x247b,	// (0x0004dc05) input_focus_pane_cp051_ParamLimits

0x248f,	// (0x0004dc19) list_midp_choice_pane_ParamLimits

0xb484,	// (0x00056c0e) list_single_2graphic_pane_cp3_ParamLimits

0xb484,	// (0x00056c0e) list_single_2graphic_pane_cp3

0xb498,	// (0x00056c22) list_single_midp_graphic_pane_ParamLimits

0xb498,	// (0x00056c22) list_single_midp_graphic_pane

0xe900,	// (0x0005a08a) list_single_graphic_2heading_pane_g1_ParamLimits

0xe900,	// (0x0005a08a) list_single_graphic_2heading_pane_g1

0xe90c,	// (0x0005a096) list_single_graphic_2heading_pane_g4_ParamLimits

0xe90c,	// (0x0005a096) list_single_graphic_2heading_pane_g4

0xe918,	// (0x0005a0a2) list_single_graphic_2heading_pane_g5_ParamLimits

0xe918,	// (0x0005a0a2) list_single_graphic_2heading_pane_g5

0x0002,

0xf781,	// (0x0005af0b) list_single_graphic_2heading_pane_g_ParamLimits

0xf781,	// (0x0005af0b) list_single_graphic_2heading_pane_g

0xe924,	// (0x0005a0ae) list_single_graphic_2heading_pane_t1_ParamLimits

0xe924,	// (0x0005a0ae) list_single_graphic_2heading_pane_t1

0xe938,	// (0x0005a0c2) list_single_graphic_2heading_pane_t2_ParamLimits

0xe938,	// (0x0005a0c2) list_single_graphic_2heading_pane_t2

0xe952,	// (0x0005a0dc) list_single_graphic_2heading_pane_t3_ParamLimits

0xe952,	// (0x0005a0dc) list_single_graphic_2heading_pane_t3

0x0002,

0xf788,	// (0x0005af12) list_single_graphic_2heading_pane_t_ParamLimits

0xf788,	// (0x0005af12) list_single_graphic_2heading_pane_t

0x211a,	// (0x0004d8a4) bg_popup_sub_pane_cp2

0x2144,	// (0x0004d8ce) grid_toobar_pane

0x0936,	// (0x0004c0c0) cell_toolbar_pane_ParamLimits

0x0936,	// (0x0004c0c0) cell_toolbar_pane

0x2180,	// (0x0004d90a) cell_toolbar_pane_g1_ParamLimits

0x2180,	// (0x0004d90a) cell_toolbar_pane_g1

0xb39c,	// (0x00056b26) cell_toolbar_pane_g2_ParamLimits

0xb39c,	// (0x00056b26) cell_toolbar_pane_g2

0x0001,

0xf78f,	// (0x0005af19) cell_toolbar_pane_g_ParamLimits

0xf78f,	// (0x0005af19) cell_toolbar_pane_g

0x21b6,	// (0x0004d940) grid_highlight_pane_cp2_ParamLimits

0x21b6,	// (0x0004d940) grid_highlight_pane_cp2

0x21d0,	// (0x0004d95a) toolbar_button_pane

0x21dc,	// (0x0004d966) toolbar_button_pane_g1

0x21e4,	// (0x0004d96e) toolbar_button_pane_g2

0x21ec,	// (0x0004d976) toolbar_button_pane_g3

0x21f4,	// (0x0004d97e) toolbar_button_pane_g4

0x21fc,	// (0x0004d986) toolbar_button_pane_g5

0x2204,	// (0x0004d98e) toolbar_button_pane_g6

0x220c,	// (0x0004d996) toolbar_button_pane_g7

0x2214,	// (0x0004d99e) toolbar_button_pane_g8

0x221c,	// (0x0004d9a6) toolbar_button_pane_g9

0x0009,

0xf794,	// (0x0005af1e) toolbar_button_pane_g

0x097a,	// (0x0004c104) list_single_2graphic_pane_g1_cp3_ParamLimits

0x097a,	// (0x0004c104) list_single_2graphic_pane_g1_cp3

0xb3b0,	// (0x00056b3a) list_single_2graphic_pane_g2_cp3_ParamLimits

0xb3b0,	// (0x00056b3a) list_single_2graphic_pane_g2_cp3

0xc2e1,	// (0x00057a6b) list_single_2graphic_pane_g3_cp3

0x0997,	// (0x0004c121) list_single_2graphic_pane_g4_cp3_ParamLimits

0x0997,	// (0x0004c121) list_single_2graphic_pane_g4_cp3

0xb3c1,	// (0x00056b4b) list_single_2graphic_pane_t1_cp3_ParamLimits

0xb3c1,	// (0x00056b4b) list_single_2graphic_pane_t1_cp3

0xc2d5,	// (0x00057a5f) list_single_midp_graphic_pane_g2_ParamLimits

0xc2d5,	// (0x00057a5f) list_single_midp_graphic_pane_g2

0xe8f0,	// (0x0005a07a) aid_zoom_text_primary

0x004e,	// (0x0004b7d8) aid_zoom_text_secondary

0xc5c2,	// (0x00057d4c) status_small_pane_g7_ParamLimits

0xc5c2,	// (0x00057d4c) status_small_pane_g7

0xa632,	// (0x00055dbc) status_small_pane_t1_ParamLimits

0x925e,	// (0x000549e8) title_pane_g2

0x0003,

0xf529,	// (0x0005acb3) title_pane_g

0x9925,	// (0x000550af) aid_size_cell_colour_1_pane_ParamLimits

0x9925,	// (0x000550af) aid_size_cell_colour_1_pane

0x9939,	// (0x000550c3) aid_size_cell_colour_2_pane_ParamLimits

0x9939,	// (0x000550c3) aid_size_cell_colour_2_pane

0x994d,	// (0x000550d7) aid_size_cell_colour_3_pane_ParamLimits

0x994d,	// (0x000550d7) aid_size_cell_colour_3_pane

0x9961,	// (0x000550eb) aid_size_cell_colour_4_pane_ParamLimits

0x9961,	// (0x000550eb) aid_size_cell_colour_4_pane

0xf12e,	// (0x0005a8b8) title_pane_stacon_g1_ParamLimits

0xf12e,	// (0x0005a8b8) title_pane_stacon_g1

0x28a8,	// (0x0004e032) popup_note_wait_window_g3_ParamLimits

0x28a8,	// (0x0004e032) popup_note_wait_window_g3

0x291e,	// (0x0004e0a8) popup_note_wait_window_t5_ParamLimits

0x291e,	// (0x0004e0a8) popup_note_wait_window_t5

0x9101,	// (0x0005488b) main_feb_china_hwr_fs_writing_pane

0xa8a2,	// (0x0005602c) popup_feb_china_hwr_fs_window_ParamLimits

0xa8a2,	// (0x0005602c) popup_feb_china_hwr_fs_window

0xb3dd,	// (0x00056b67) aid_size_cell_hwr_fs_ParamLimits

0xb3dd,	// (0x00056b67) aid_size_cell_hwr_fs

0x2268,	// (0x0004d9f2) bg_popup_sub_pane_cp3_ParamLimits

0x2268,	// (0x0004d9f2) bg_popup_sub_pane_cp3

0xb3f2,	// (0x00056b7c) grid_hwr_fs_pane_ParamLimits

0xb3f2,	// (0x00056b7c) grid_hwr_fs_pane

0x0a02,	// (0x0004c18c) linegrid_hwr_fs_pane_ParamLimits

0x0a02,	// (0x0004c18c) linegrid_hwr_fs_pane

0xb40a,	// (0x00056b94) cell_hwr_fs_pane_ParamLimits

0xb40a,	// (0x00056b94) cell_hwr_fs_pane

0x2274,	// (0x0004d9fe) linegrid_hwr_fs_pane_g1_ParamLimits

0x2274,	// (0x0004d9fe) linegrid_hwr_fs_pane_g1

0xb430,	// (0x00056bba) linegrid_hwr_fs_pane_g2_ParamLimits

0xb430,	// (0x00056bba) linegrid_hwr_fs_pane_g2

0x2292,	// (0x0004da1c) linegrid_hwr_fs_pane_g3_ParamLimits

0x2292,	// (0x0004da1c) linegrid_hwr_fs_pane_g3

0xb442,	// (0x00056bcc) linegrid_hwr_fs_pane_g4_ParamLimits

0xb442,	// (0x00056bcc) linegrid_hwr_fs_pane_g4

0x0a4e,	// (0x0004c1d8) linegrid_hwr_fs_pane_g5_ParamLimits

0x0a4e,	// (0x0004c1d8) linegrid_hwr_fs_pane_g5

0x0004,

0xf7ba,	// (0x0005af44) linegrid_hwr_fs_pane_g_ParamLimits

0xf7ba,	// (0x0005af44) linegrid_hwr_fs_pane_g

0x229e,	// (0x0004da28) cell_hwr_fs_pane_g1_ParamLimits

0x229e,	// (0x0004da28) cell_hwr_fs_pane_g1

0x2054,	// (0x0004d7de) cell_hwr_fs_pane_g2_ParamLimits

0x2054,	// (0x0004d7de) cell_hwr_fs_pane_g2

0xb45c,	// (0x00056be6) cell_hwr_fs_pane_g3_ParamLimits

0xb45c,	// (0x00056be6) cell_hwr_fs_pane_g3

0xb469,	// (0x00056bf3) cell_hwr_fs_pane_g4_ParamLimits

0xb469,	// (0x00056bf3) cell_hwr_fs_pane_g4

0x0003,

0xf7c5,	// (0x0005af4f) cell_hwr_fs_pane_g_ParamLimits

0xf7c5,	// (0x0005af4f) cell_hwr_fs_pane_g

0xb476,	// (0x00056c00) cell_hwr_fs_pane_t1

0x9101,	// (0x0005488b) grid_highlight_pane_cp6

0x9101,	// (0x0005488b) main_idle_act2_pane

0x9e47,	// (0x000555d1) aid_inside_area_popup_secondary

0xc8b4,	// (0x0005803e) aid_inside_area_window_primary_ParamLimits

0xc8b4,	// (0x0005803e) aid_inside_area_window_primary

0xcdd8,	// (0x00058562) ai2_news_ticker_pane

0x3a7c,	// (0x0004f206) aid_size_cell_ai1_link_ParamLimits

0x3a7c,	// (0x0004f206) aid_size_cell_ai1_link

0xcde0,	// (0x0005856a) popup_ai2_data_window_ParamLimits

0xcde0,	// (0x0005856a) popup_ai2_data_window

0x3aac,	// (0x0004f236) popup_ai2_link_window_ParamLimits

0x3aac,	// (0x0004f236) popup_ai2_link_window

0x2268,	// (0x0004d9f2) bg_popup_sub_pane_cp4_ParamLimits

0x2268,	// (0x0004d9f2) bg_popup_sub_pane_cp4

0x3ac0,	// (0x0004f24a) grid_ai2_link_pane_ParamLimits

0x3ac0,	// (0x0004f24a) grid_ai2_link_pane

0x3ad7,	// (0x0004f261) popup_ai2_link_window_g1_ParamLimits

0x3ad7,	// (0x0004f261) popup_ai2_link_window_g1

0x3ae3,	// (0x0004f26d) popup_ai2_link_window_g2_ParamLimits

0x3ae3,	// (0x0004f26d) popup_ai2_link_window_g2

0x0001,

0xf998,	// (0x0005b122) popup_ai2_link_window_g_ParamLimits

0xf998,	// (0x0005b122) popup_ai2_link_window_g

0x3af2,	// (0x0004f27c) ai2_mp_button_pane

0x3afa,	// (0x0004f284) ai2_mp_volume_pane

0x247b,	// (0x0004dc05) bg_popup_sub_pane_cp5_ParamLimits

0x247b,	// (0x0004dc05) bg_popup_sub_pane_cp5

0x3b02,	// (0x0004f28c) heading_ai2_gene_pane_ParamLimits

0x3b02,	// (0x0004f28c) heading_ai2_gene_pane

0x3b0e,	// (0x0004f298) list_ai2_gene_pane_ParamLimits

0x3b0e,	// (0x0004f298) list_ai2_gene_pane

0x3b56,	// (0x0004f2e0) cell_ai2_link_pane_ParamLimits

0x3b56,	// (0x0004f2e0) cell_ai2_link_pane

0x3b6c,	// (0x0004f2f6) cell_ai2_link_pane_g1

0x9101,	// (0x0005488b) grid_highlight_pane_cp7

0x0e07,	// (0x0004c591) ai2_mp_volume_pane_g1

0x3c3c,	// (0x0004f3c6) ai2_mp_volume_pane_g2

0x3bb1,	// (0x0004f33b) list_ai2_gene_pane_t1

0x3c44,	// (0x0004f3ce) ai2_mp_volume_pane_g3

0x0002,

0xf9b1,	// (0x0005b13b) ai2_mp_volume_pane_g

0xb767,	// (0x00056ef1) volume_small_pane_cp3

0x3c4c,	// (0x0004f3d6) aid_size_cell_ai2_button

0x3c54,	// (0x0004f3de) grid_ai2_button_pane

0x3c5d,	// (0x0004f3e7) cell_ai2_button_pane_ParamLimits

0x3c5d,	// (0x0004f3e7) cell_ai2_button_pane

0x8ec2,	// (0x0005464c) cell_ai2_button_pane_g1

0x9101,	// (0x0005488b) grid_highlight_pane_cp8

0x3bfc,	// (0x0004f386) ai2_gene_pane_t1_ParamLimits

0x3bfc,	// (0x0004f386) ai2_gene_pane_t1

0xa804,	// (0x00055f8e) aid_height_parent_landscape

0xcb0a,	// (0x00058294) aid_height_set_list

0x35b7,	// (0x0004ed41) aid_size_parent

0x3897,	// (0x0004f021) aid_size_cell_graphic_pane_ParamLimits

0x3b1e,	// (0x0004f2a8) popup_ai2_data_window_g1_ParamLimits

0x3b1e,	// (0x0004f2a8) popup_ai2_data_window_g1

0x3b2a,	// (0x0004f2b4) ai2_news_ticker_pane_g1

0x3b32,	// (0x0004f2bc) ai2_news_ticker_pane_g2

0x0001,

0xf99d,	// (0x0005b127) ai2_news_ticker_pane_g

0x3b3a,	// (0x0004f2c4) ai2_news_ticker_pane_t1

0x3b48,	// (0x0004f2d2) ai2_news_ticker_pane_t2

0x0001,

0xf9a2,	// (0x0005b12c) ai2_news_ticker_pane_t

0x3b75,	// (0x0004f2ff) heading_ai2_gene_pane_g1

0x3b7d,	// (0x0004f307) heading_ai2_gene_pane_t1_ParamLimits

0x3b7d,	// (0x0004f307) heading_ai2_gene_pane_t1

0x3b92,	// (0x0004f31c) list_highlight_pane_cp6

0x3b9a,	// (0x0004f324) ai2_gene_pane_ParamLimits

0x3b9a,	// (0x0004f324) ai2_gene_pane

0x3bbf,	// (0x0004f349) list_ai2_gene_pane_t2

0x0001,

0xf9a7,	// (0x0005b131) list_ai2_gene_pane_t

0x3bcd,	// (0x0004f357) list_highlight_pane_cp8_ParamLimits

0x3bcd,	// (0x0004f357) list_highlight_pane_cp8

0x3bde,	// (0x0004f368) ai2_gene_pane_g1_ParamLimits

0x3bde,	// (0x0004f368) ai2_gene_pane_g1

0x3bf0,	// (0x0004f37a) ai2_gene_pane_g2_ParamLimits

0x3bf0,	// (0x0004f37a) ai2_gene_pane_g2

0x0001,

0xf9ac,	// (0x0005b136) ai2_gene_pane_g_ParamLimits

0xf9ac,	// (0x0005b136) ai2_gene_pane_g

0x9c30,	// (0x000553ba) scroll_pane_cp12

0xa7c1,	// (0x00055f4b) control_pane_t3_ParamLimits

0xa7c1,	// (0x00055f4b) control_pane_t3

0xa623,	// (0x00055dad) status_small_pane_g8_ParamLimits

0xa623,	// (0x00055dad) status_small_pane_g8

0xa965,	// (0x000560ef) popup_find_window_ParamLimits

0xabf2,	// (0x0005637c) popup_note_image_window_ParamLimits

0xe7f7,	// (0x00059f81) list_double2_graphic_pane_vc_g1_ParamLimits

0xe7f7,	// (0x00059f81) list_double2_graphic_pane_vc_g1

0xbfab,	// (0x00057735) list_double2_graphic_pane_vc_g2_ParamLimits

0xbfab,	// (0x00057735) list_double2_graphic_pane_vc_g2

0x0966,	// (0x0004c0f0) list_double2_graphic_pane_vc_g3_ParamLimits

0x0966,	// (0x0004c0f0) list_double2_graphic_pane_vc_g3

0x0002,

0xf59c,	// (0x0005ad26) list_double2_graphic_pane_vc_g_ParamLimits

0xf59c,	// (0x0005ad26) list_double2_graphic_pane_vc_g

0xe803,	// (0x00059f8d) list_double2_graphic_pane_vc_t1_ParamLimits

0xe803,	// (0x00059f8d) list_double2_graphic_pane_vc_t1

0xbfab,	// (0x00057735) list_single_heading_pane_vc_g1_ParamLimits

0xbfab,	// (0x00057735) list_single_heading_pane_vc_g1

0x0966,	// (0x0004c0f0) list_single_heading_pane_vc_g2_ParamLimits

0x0966,	// (0x0004c0f0) list_single_heading_pane_vc_g2

0x0001,

0xf5ad,	// (0x0005ad37) list_single_heading_pane_vc_g_ParamLimits

0xf5ad,	// (0x0005ad37) list_single_heading_pane_vc_g

0xe96a,	// (0x0005a0f4) list_single_heading_pane_vc_t1_ParamLimits

0xe96a,	// (0x0005a0f4) list_single_heading_pane_vc_t1

0xe980,	// (0x0005a10a) list_single_heading_pane_vc_t2_ParamLimits

0xe980,	// (0x0005a10a) list_single_heading_pane_vc_t2

0x0001,

0xf7a9,	// (0x0005af33) list_single_heading_pane_vc_t_ParamLimits

0xf7a9,	// (0x0005af33) list_single_heading_pane_vc_t

0x2224,	// (0x0004d9ae) list_setting_number_pane_vc_g1_ParamLimits

0x2224,	// (0x0004d9ae) list_setting_number_pane_vc_g1

0x2230,	// (0x0004d9ba) list_setting_number_pane_vc_g2_ParamLimits

0x2230,	// (0x0004d9ba) list_setting_number_pane_vc_g2

0x0001,

0xf7ae,	// (0x0005af38) list_setting_number_pane_vc_g_ParamLimits

0xf7ae,	// (0x0005af38) list_setting_number_pane_vc_g

0xe992,	// (0x0005a11c) list_setting_number_pane_vc_t1_ParamLimits

0xe992,	// (0x0005a11c) list_setting_number_pane_vc_t1

0xe9a6,	// (0x0005a130) list_setting_number_pane_vc_t2_ParamLimits

0xe9a6,	// (0x0005a130) list_setting_number_pane_vc_t2

0xe9c2,	// (0x0005a14c) list_setting_number_pane_vc_t3_ParamLimits

0xe9c2,	// (0x0005a14c) list_setting_number_pane_vc_t3

0x0002,

0xf7b3,	// (0x0005af3d) list_setting_number_pane_vc_t_ParamLimits

0xf7b3,	// (0x0005af3d) list_setting_number_pane_vc_t

0xe9ec,	// (0x0005a176) set_value_pane_vc_ParamLimits

0xe9ec,	// (0x0005a176) set_value_pane_vc

0x376b,	// (0x0004eef5) list_double2_graphic_pane_vc_ParamLimits

0x376b,	// (0x0004eef5) list_double2_graphic_pane_vc

0x0cc0,	// (0x0004c44a) list_double2_large_graphic_pane_vc_ParamLimits

0x0cc0,	// (0x0004c44a) list_double2_large_graphic_pane_vc

0x376b,	// (0x0004eef5) list_double2_pane_vc_ParamLimits

0x376b,	// (0x0004eef5) list_double2_pane_vc

0x376b,	// (0x0004eef5) list_double_graphic_heading_pane_vc_ParamLimits

0x376b,	// (0x0004eef5) list_double_graphic_heading_pane_vc

0x376b,	// (0x0004eef5) list_double_graphic_pane_vc_ParamLimits

0x376b,	// (0x0004eef5) list_double_graphic_pane_vc

0x376b,	// (0x0004eef5) list_double_heading_pane_vc_ParamLimits

0x376b,	// (0x0004eef5) list_double_heading_pane_vc

0x0cd2,	// (0x0004c45c) list_double_large_graphic_pane_vc_ParamLimits

0x0cd2,	// (0x0004c45c) list_double_large_graphic_pane_vc

0x376b,	// (0x0004eef5) list_double_number_pane_vc_ParamLimits

0x376b,	// (0x0004eef5) list_double_number_pane_vc

0x376b,	// (0x0004eef5) list_double_pane_vc_ParamLimits

0x376b,	// (0x0004eef5) list_double_pane_vc

0x376b,	// (0x0004eef5) list_double_time_pane_vc_ParamLimits

0x376b,	// (0x0004eef5) list_double_time_pane_vc

0x376b,	// (0x0004eef5) list_setting_number_pane_vc_ParamLimits

0x376b,	// (0x0004eef5) list_setting_number_pane_vc

0x376b,	// (0x0004eef5) list_setting_pane_vc_ParamLimits

0x376b,	// (0x0004eef5) list_setting_pane_vc

0x376b,	// (0x0004eef5) list_single_graphic_heading_pane_vc_ParamLimits

0x376b,	// (0x0004eef5) list_single_graphic_heading_pane_vc

0x376b,	// (0x0004eef5) list_single_heading_pane_vc_ParamLimits

0x376b,	// (0x0004eef5) list_single_heading_pane_vc

0x376b,	// (0x0004eef5) list_single_number_heading_pane_vc_ParamLimits

0x376b,	// (0x0004eef5) list_single_number_heading_pane_vc

0xea0b,	// (0x0005a195) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xea0b,	// (0x0005a195) list_double_graphic_heading_pane_vc_g1

0xbfab,	// (0x00057735) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xbfab,	// (0x00057735) list_double_graphic_heading_pane_vc_g2

0x0966,	// (0x0004c0f0) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x0966,	// (0x0004c0f0) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9b8,	// (0x0005b142) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9b8,	// (0x0005b142) list_double_graphic_heading_pane_vc_g

0xea17,	// (0x0005a1a1) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xea17,	// (0x0005a1a1) list_double_graphic_heading_pane_vc_t1

0xea2b,	// (0x0005a1b5) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xea2b,	// (0x0005a1b5) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9bf,	// (0x0005b149) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9bf,	// (0x0005b149) list_double_graphic_heading_pane_vc_t

0x2224,	// (0x0004d9ae) list_setting_pane_vc_g1_ParamLimits

0x2224,	// (0x0004d9ae) list_setting_pane_vc_g1

0x2230,	// (0x0004d9ba) list_setting_pane_vc_g2_ParamLimits

0x2230,	// (0x0004d9ba) list_setting_pane_vc_g2

0x0001,

0xf7ae,	// (0x0005af38) list_setting_pane_vc_g_ParamLimits

0xf7ae,	// (0x0005af38) list_setting_pane_vc_g

0xea43,	// (0x0005a1cd) list_setting_pane_vc_t1_ParamLimits

0xea43,	// (0x0005a1cd) list_setting_pane_vc_t1

0xea5f,	// (0x0005a1e9) list_setting_pane_vc_t2_ParamLimits

0xea5f,	// (0x0005a1e9) list_setting_pane_vc_t2

0x0001,

0xfa02,	// (0x0005b18c) list_setting_pane_vc_t_ParamLimits

0xfa02,	// (0x0005b18c) list_setting_pane_vc_t

0xe9ec,	// (0x0005a176) set_value_pane_cp_vc_ParamLimits

0xe9ec,	// (0x0005a176) set_value_pane_cp_vc

0xbfab,	// (0x00057735) list_single_number_heading_pane_vc_g1_ParamLimits

0xbfab,	// (0x00057735) list_single_number_heading_pane_vc_g1

0x0966,	// (0x0004c0f0) list_single_number_heading_pane_vc_g2_ParamLimits

0x0966,	// (0x0004c0f0) list_single_number_heading_pane_vc_g2

0x0001,

0xf5ad,	// (0x0005ad37) list_single_number_heading_pane_vc_g_ParamLimits

0xf5ad,	// (0x0005ad37) list_single_number_heading_pane_vc_g

0xe819,	// (0x00059fa3) list_single_number_heading_pane_vc_t1_ParamLimits

0xe819,	// (0x00059fa3) list_single_number_heading_pane_vc_t1

0xea79,	// (0x0005a203) list_single_number_heading_pane_vc_t2_ParamLimits

0xea79,	// (0x0005a203) list_single_number_heading_pane_vc_t2

0xea8f,	// (0x0005a219) list_single_number_heading_pane_vc_t3_ParamLimits

0xea8f,	// (0x0005a219) list_single_number_heading_pane_vc_t3

0x0002,

0xfa07,	// (0x0005b191) list_single_number_heading_pane_vc_t_ParamLimits

0xfa07,	// (0x0005b191) list_single_number_heading_pane_vc_t

0xeaa1,	// (0x0005a22b) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xeaa1,	// (0x0005a22b) list_single_graphic_heading_pane_vc_g1

0xbfab,	// (0x00057735) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xbfab,	// (0x00057735) list_single_graphic_heading_pane_vc_g4

0x0966,	// (0x0004c0f0) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x0966,	// (0x0004c0f0) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa0e,	// (0x0005b198) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa0e,	// (0x0005b198) list_single_graphic_heading_pane_vc_g

0xe819,	// (0x00059fa3) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xe819,	// (0x00059fa3) list_single_graphic_heading_pane_vc_t1

0xeaad,	// (0x0005a237) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xeaad,	// (0x0005a237) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa15,	// (0x0005b19f) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa15,	// (0x0005b19f) list_single_graphic_heading_pane_vc_t

0xbfab,	// (0x00057735) list_double2_pane_vc_g1_ParamLimits

0xbfab,	// (0x00057735) list_double2_pane_vc_g1

0x0966,	// (0x0004c0f0) list_double2_pane_vc_g2_ParamLimits

0x0966,	// (0x0004c0f0) list_double2_pane_vc_g2

0x0001,

0xf5ad,	// (0x0005ad37) list_double2_pane_vc_g_ParamLimits

0xf5ad,	// (0x0005ad37) list_double2_pane_vc_g

0xeabf,	// (0x0005a249) list_double2_pane_vc_t1_ParamLimits

0xeabf,	// (0x0005a249) list_double2_pane_vc_t1

0x0e69,	// (0x0004c5f3) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x0e69,	// (0x0004c5f3) list_double2_large_graphic_pane_vc_g1

0xf0ba,	// (0x0005a844) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xf0ba,	// (0x0005a844) list_double2_large_graphic_pane_vc_g2

0xf0c6,	// (0x0005a850) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xf0c6,	// (0x0005a850) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5c5,	// (0x0005ad4f) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5c5,	// (0x0005ad4f) list_double2_large_graphic_pane_vc_g

0xe82f,	// (0x00059fb9) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xe82f,	// (0x00059fb9) list_double2_large_graphic_pane_vc_t1

0x0e75,	// (0x0004c5ff) list_double_time_pane_vc_g1_ParamLimits

0x0e75,	// (0x0004c5ff) list_double_time_pane_vc_g1

0x0e81,	// (0x0004c60b) list_double_time_pane_vc_g2_ParamLimits

0x0e81,	// (0x0004c60b) list_double_time_pane_vc_g2

0x0001,

0xfa1a,	// (0x0005b1a4) list_double_time_pane_vc_g_ParamLimits

0xfa1a,	// (0x0005b1a4) list_double_time_pane_vc_g

0xead7,	// (0x0005a261) list_double_time_pane_vc_t1_ParamLimits

0xead7,	// (0x0005a261) list_double_time_pane_vc_t1

0xeafb,	// (0x0005a285) list_double_time_pane_vc_t2_ParamLimits

0xeafb,	// (0x0005a285) list_double_time_pane_vc_t2

0xeb4a,	// (0x0005a2d4) list_double_time_pane_vc_t3_ParamLimits

0xeb4a,	// (0x0005a2d4) list_double_time_pane_vc_t3

0xeb5c,	// (0x0005a2e6) list_double_time_pane_vc_t4_ParamLimits

0xeb5c,	// (0x0005a2e6) list_double_time_pane_vc_t4

0x0003,

0xfa1f,	// (0x0005b1a9) list_double_time_pane_vc_t_ParamLimits

0xfa1f,	// (0x0005b1a9) list_double_time_pane_vc_t

0xbfab,	// (0x00057735) list_double_pane_vc_g1_ParamLimits

0xbfab,	// (0x00057735) list_double_pane_vc_g1

0x0966,	// (0x0004c0f0) list_double_pane_vc_g2_ParamLimits

0x0966,	// (0x0004c0f0) list_double_pane_vc_g2

0x0001,

0xf5ad,	// (0x0005ad37) list_double_pane_vc_g_ParamLimits

0xf5ad,	// (0x0005ad37) list_double_pane_vc_g

0xeb70,	// (0x0005a2fa) list_double_pane_vc_t1_ParamLimits

0xeb70,	// (0x0005a2fa) list_double_pane_vc_t1

0xeb84,	// (0x0005a30e) list_double_pane_vc_t2_ParamLimits

0xeb84,	// (0x0005a30e) list_double_pane_vc_t2

0x0001,

0xfa28,	// (0x0005b1b2) list_double_pane_vc_t_ParamLimits

0xfa28,	// (0x0005b1b2) list_double_pane_vc_t

0xbfab,	// (0x00057735) list_double_number_pane_vc_g1_ParamLimits

0xbfab,	// (0x00057735) list_double_number_pane_vc_g1

0x0966,	// (0x0004c0f0) list_double_number_pane_vc_g2_ParamLimits

0x0966,	// (0x0004c0f0) list_double_number_pane_vc_g2

0x0001,

0xf5ad,	// (0x0005ad37) list_double_number_pane_vc_g_ParamLimits

0xf5ad,	// (0x0005ad37) list_double_number_pane_vc_g

0xeb9c,	// (0x0005a326) list_double_number_pane_vc_t1_ParamLimits

0xeb9c,	// (0x0005a326) list_double_number_pane_vc_t1

0xeb70,	// (0x0005a2fa) list_double_number_pane_vc_t2_ParamLimits

0xeb70,	// (0x0005a2fa) list_double_number_pane_vc_t2

0xebae,	// (0x0005a338) list_double_number_pane_vc_t3_ParamLimits

0xebae,	// (0x0005a338) list_double_number_pane_vc_t3

0x0002,

0xfa2d,	// (0x0005b1b7) list_double_number_pane_vc_t_ParamLimits

0xfa2d,	// (0x0005b1b7) list_double_number_pane_vc_t

0x0e8d,	// (0x0004c617) list_double_large_graphic_pane_vc_g1_ParamLimits

0x0e8d,	// (0x0004c617) list_double_large_graphic_pane_vc_g1

0x0ea9,	// (0x0004c633) list_double_large_graphic_pane_vc_g2_ParamLimits

0x0ea9,	// (0x0004c633) list_double_large_graphic_pane_vc_g2

0x0ebd,	// (0x0004c647) list_double_large_graphic_pane_vc_g3_ParamLimits

0x0ebd,	// (0x0004c647) list_double_large_graphic_pane_vc_g3

0xebc6,	// (0x0005a350) list_double_large_graphic_pane_vc_g4_ParamLimits

0xebc6,	// (0x0005a350) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa34,	// (0x0005b1be) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa34,	// (0x0005b1be) list_double_large_graphic_pane_vc_g

0xebd5,	// (0x0005a35f) list_double_large_graphic_pane_vc_t1_ParamLimits

0xebd5,	// (0x0005a35f) list_double_large_graphic_pane_vc_t1

0xebf1,	// (0x0005a37b) list_double_large_graphic_pane_vc_t2_ParamLimits

0xebf1,	// (0x0005a37b) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa3d,	// (0x0005b1c7) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa3d,	// (0x0005b1c7) list_double_large_graphic_pane_vc_t

0xbfab,	// (0x00057735) list_double_heading_pane_vc_g1_ParamLimits

0xbfab,	// (0x00057735) list_double_heading_pane_vc_g1

0x0966,	// (0x0004c0f0) list_double_heading_pane_vc_g2_ParamLimits

0x0966,	// (0x0004c0f0) list_double_heading_pane_vc_g2

0x0001,

0xf5ad,	// (0x0005ad37) list_double_heading_pane_vc_g_ParamLimits

0xf5ad,	// (0x0005ad37) list_double_heading_pane_vc_g

0xec13,	// (0x0005a39d) list_double_heading_pane_vc_t1_ParamLimits

0xec13,	// (0x0005a39d) list_double_heading_pane_vc_t1

0xec27,	// (0x0005a3b1) list_double_heading_pane_vc_t2_ParamLimits

0xec27,	// (0x0005a3b1) list_double_heading_pane_vc_t2

0x0001,

0xfa42,	// (0x0005b1cc) list_double_heading_pane_vc_t_ParamLimits

0xfa42,	// (0x0005b1cc) list_double_heading_pane_vc_t

0xec3f,	// (0x0005a3c9) list_double_graphic_pane_vc_g1_ParamLimits

0xec3f,	// (0x0005a3c9) list_double_graphic_pane_vc_g1

0x0ecc,	// (0x0004c656) list_double_graphic_pane_vc_g2_ParamLimits

0x0ecc,	// (0x0004c656) list_double_graphic_pane_vc_g2

0xbfab,	// (0x00057735) list_double_graphic_pane_vc_g3_ParamLimits

0xbfab,	// (0x00057735) list_double_graphic_pane_vc_g3

0x0003,

0xfa47,	// (0x0005b1d1) list_double_graphic_pane_vc_g_ParamLimits

0xfa47,	// (0x0005b1d1) list_double_graphic_pane_vc_g

0xec52,	// (0x0005a3dc) list_double_graphic_pane_vc_t1_ParamLimits

0xec52,	// (0x0005a3dc) list_double_graphic_pane_vc_t1

0xec71,	// (0x0005a3fb) list_double_graphic_pane_vc_t2_ParamLimits

0xec71,	// (0x0005a3fb) list_double_graphic_pane_vc_t2

0x0001,

0xfa50,	// (0x0005b1da) list_double_graphic_pane_vc_t_ParamLimits

0xfa50,	// (0x0005b1da) list_double_graphic_pane_vc_t

0xe7b6,	// (0x00059f40) aid_size_cell_fastswap

0x8ecc,	// (0x00054656) aid_size_cell_touch_ParamLimits

0x8ecc,	// (0x00054656) aid_size_cell_touch

0xe7be,	// (0x00059f48) popup_fast_swap_wide_window_ParamLimits

0xe7be,	// (0x00059f48) popup_fast_swap_wide_window

0x91f5,	// (0x0005497f) touch_pane_ParamLimits

0x91f5,	// (0x0005497f) touch_pane

0x9cce,	// (0x00055458) button_value_adjust_pane_cp2

0xe85f,	// (0x00059fe9) button_value_adjust_pane_cp4

0xe867,	// (0x00059ff1) form_field_data_pane_cp2

0x8a7d,	// (0x00054207) form_field_data_wide_pane_cp2

0xa18c,	// (0x00055916) bg_scroll_pane_ParamLimits

0xa1ab,	// (0x00055935) scroll_handle_pane_ParamLimits

0xf287,	// (0x0005aa11) scroll_sc2_down_pane_ParamLimits

0xf287,	// (0x0005aa11) scroll_sc2_down_pane

0xa1d1,	// (0x0005595b) scroll_sc2_up_pane_ParamLimits

0xa1d1,	// (0x0005595b) scroll_sc2_up_pane

0xcf29,	// (0x000586b3) grid_wheel_folder_pane_g1_ParamLimits

0xcf29,	// (0x000586b3) grid_wheel_folder_pane_g1

0xf409,	// (0x0005ab93) clock_nsta_pane_cp2_ParamLimits

0xf409,	// (0x0005ab93) clock_nsta_pane_cp2

0xa507,	// (0x00055c91) listscroll_midp_pane_ParamLimits

0xa513,	// (0x00055c9d) midp_canvas_pane

0xc5e4,	// (0x00057d6e) nsta_clock_indic_pane

0xc60c,	// (0x00057d96) listscroll_form_pane_vc

0xc614,	// (0x00057d9e) listscroll_set_pane_vc_ParamLimits

0xc614,	// (0x00057d9e) listscroll_set_pane_vc

0xb0a7,	// (0x00056831) clock_nsta_pane

0xb0d1,	// (0x0005685b) indicator_nsta_pane

0x211a,	// (0x0004d8a4) bg_popup_sub_pane_cp2_ParamLimits

0x212e,	// (0x0004d8b8) find_pane_cp2_ParamLimits

0x212e,	// (0x0004d8b8) find_pane_cp2

0x2144,	// (0x0004d8ce) grid_toobar_pane_ParamLimits

0x223c,	// (0x0004d9c6) list_form_gen_pane_vc_ParamLimits

0x223c,	// (0x0004d9c6) list_form_gen_pane_vc

0x2252,	// (0x0004d9dc) scroll_pane_cp8_vc_ParamLimits

0x2252,	// (0x0004d9dc) scroll_pane_cp8_vc

0x22ce,	// (0x0004da58) data_form_wide_pane_vc_ParamLimits

0x22ce,	// (0x0004da58) data_form_wide_pane_vc

0x22da,	// (0x0004da64) form_field_data_wide_pane_vc_g1

0x22e2,	// (0x0004da6c) form_field_data_wide_pane_vc_t1_ParamLimits

0x22e2,	// (0x0004da6c) form_field_data_wide_pane_vc_t1

0x9ce2,	// (0x0005546c) input_focus_pane_cp6_vc_ParamLimits

0x9ce2,	// (0x0005546c) input_focus_pane_cp6_vc

0x262f,	// (0x0004ddb9) list_midp_pane_ParamLimits

0x3901,	// (0x0004f08b) scroll_pane_cp16_ParamLimits

0x3901,	// (0x0004f08b) scroll_pane_cp16

0x2685,	// (0x0004de0f) button_value_adjust_pane_ParamLimits

0x2685,	// (0x0004de0f) button_value_adjust_pane

0xcb1b,	// (0x000582a5) button_value_adjust_pane_cp6_ParamLimits

0xcb1b,	// (0x000582a5) button_value_adjust_pane_cp6

0xcc35,	// (0x000583bf) settings_code_pane_cp_ParamLimits

0xcc35,	// (0x000583bf) settings_code_pane_cp

0x8ec2,	// (0x0005464c) cell_touch_pane_g1

0x8ec2,	// (0x0005464c) cell_touch_pane_g2

0x0001,

0xf6d4,	// (0x0005ae5e) cell_touch_pane_g

0xcdf6,	// (0x00058580) cell_touch_pane_cp_ParamLimits

0xcdf6,	// (0x00058580) cell_touch_pane_cp

0xce12,	// (0x0005859c) cell_touch_pane_ParamLimits

0xce12,	// (0x0005859c) cell_touch_pane

0x8ec2,	// (0x0005464c) scroll_sc2_down_pane_g1

0x8ec2,	// (0x0005464c) scroll_sc2_up_pane_g1

0x9101,	// (0x0005488b) bg_set_opt_pane_cp4_vc

0x3c91,	// (0x0004f41b) list_set_graphic_pane_vc_g1_ParamLimits

0x3c91,	// (0x0004f41b) list_set_graphic_pane_vc_g1

0x3c9d,	// (0x0004f427) list_set_graphic_pane_vc_g2_ParamLimits

0x3c9d,	// (0x0004f427) list_set_graphic_pane_vc_g2

0x0001,

0xf9c4,	// (0x0005b14e) list_set_graphic_pane_vc_g_ParamLimits

0xf9c4,	// (0x0005b14e) list_set_graphic_pane_vc_g

0x3ca9,	// (0x0004f433) text_primary_small_cp13_vc_ParamLimits

0x3ca9,	// (0x0004f433) text_primary_small_cp13_vc

0x3cc1,	// (0x0004f44b) list_set_graphic_pane_vc_ParamLimits

0x3cc1,	// (0x0004f44b) list_set_graphic_pane_vc

0x9101,	// (0x0005488b) input_focus_pane_cp2_vc

0x8ec2,	// (0x0005464c) setting_code_pane_vc_g1

0x943c,	// (0x00054bc6) setting_code_pane_vc_t1

0x3cd4,	// (0x0004f45e) set_text_pane_vc_t1_ParamLimits

0x3cd4,	// (0x0004f45e) set_text_pane_vc_t1

0x9101,	// (0x0005488b) input_focus_pane_cp1_vc

0x3cf1,	// (0x0004f47b) list_set_text_pane_vc

0x8ec2,	// (0x0005464c) setting_text_pane_vc_g1

0x9101,	// (0x0005488b) bg_set_opt_pane_cp2_vc

0x940b,	// (0x00054b95) setting_slider_graphic_pane_vc_g1

0x3cfb,	// (0x0004f485) setting_slider_graphic_pane_vc_t1

0x3d0b,	// (0x0004f495) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9c9,	// (0x0005b153) setting_slider_graphic_pane_vc_t

0x3d1b,	// (0x0004f4a5) slider_set_pane_cp_vc

0x3d23,	// (0x0004f4ad) slider_set_pane_vc_g1

0x3d2c,	// (0x0004f4b6) slider_set_pane_vc_g2

0x0006,

0xf9ce,	// (0x0005b158) slider_set_pane_vc_g

0x9d3a,	// (0x000554c4) set_opt_bg_pane_g1_copy1

0x9d42,	// (0x000554cc) set_opt_bg_pane_g2_copy1

0x3d58,	// (0x0004f4e2) set_opt_bg_pane_g3_copy1

0x9d52,	// (0x000554dc) set_opt_bg_pane_g4_copy1

0x9d5a,	// (0x000554e4) set_opt_bg_pane_g5_copy1

0x9d62,	// (0x000554ec) set_opt_bg_pane_g6_copy1

0x3d60,	// (0x0004f4ea) set_opt_bg_pane_g7_copy1

0x3d6a,	// (0x0004f4f4) set_opt_bg_pane_g8_copy1

0x3d72,	// (0x0004f4fc) set_opt_bg_pane_g9_copy1

0x9101,	// (0x0005488b) bg_set_opt_pane_cp_vc

0x3d7a,	// (0x0004f504) setting_slider_pane_vc_t1

0x3d89,	// (0x0004f513) setting_slider_pane_vc_t2

0x3d99,	// (0x0004f523) setting_slider_pane_vc_t3

0x0002,

0xf9dd,	// (0x0005b167) setting_slider_pane_vc_t

0x3da9,	// (0x0004f533) slider_set_pane_vc

0x0a72,	// (0x0004c1fc) volume_set_pane_vc_g1

0x0e18,	// (0x0004c5a2) volume_set_pane_vc_g2

0x0e21,	// (0x0004c5ab) volume_set_pane_vc_g3

0x0e2a,	// (0x0004c5b4) volume_set_pane_vc_g4

0x0e33,	// (0x0004c5bd) volume_set_pane_vc_g5

0x0e3c,	// (0x0004c5c6) volume_set_pane_vc_g6

0x0e45,	// (0x0004c5cf) volume_set_pane_vc_g7

0x0e4e,	// (0x0004c5d8) volume_set_pane_vc_g8

0x0e57,	// (0x0004c5e1) volume_set_pane_vc_g9

0x0e60,	// (0x0004c5ea) volume_set_pane_vc_g10

0x0009,

0xf9e4,	// (0x0005b16e) volume_set_pane_vc_g

0x3db1,	// (0x0004f53b) volume_set_pane_vc

0x3dbb,	// (0x0004f545) button_value_adjust_pane_cp1_vc

0x3dc5,	// (0x0004f54f) list_highlight_pane_cp2_vc

0x3dce,	// (0x0004f558) list_set_pane_vc_ParamLimits

0x3dce,	// (0x0004f558) list_set_pane_vc

0x3e2c,	// (0x0004f5b6) main_pane_set_vc_t1_ParamLimits

0x3e2c,	// (0x0004f5b6) main_pane_set_vc_t1

0x3e41,	// (0x0004f5cb) main_pane_set_vc_t2_ParamLimits

0x3e41,	// (0x0004f5cb) main_pane_set_vc_t2

0x3e53,	// (0x0004f5dd) main_pane_set_vc_t3_ParamLimits

0x3e53,	// (0x0004f5dd) main_pane_set_vc_t3

0x3e65,	// (0x0004f5ef) main_pane_set_vc_t4_ParamLimits

0x3e65,	// (0x0004f5ef) main_pane_set_vc_t4

0x0003,

0xf9f9,	// (0x0005b183) main_pane_set_vc_t_ParamLimits

0xf9f9,	// (0x0005b183) main_pane_set_vc_t

0x3e77,	// (0x0004f601) setting_code_pane_vc_ParamLimits

0x3e77,	// (0x0004f601) setting_code_pane_vc

0x3e86,	// (0x0004f610) setting_slider_graphic_pane_vc

0x3e86,	// (0x0004f610) setting_slider_pane_vc

0x3e86,	// (0x0004f610) setting_text_pane_vc

0x3e86,	// (0x0004f610) setting_volume_pane_vc

0x3e8e,	// (0x0004f618) scroll_pane_cp121_vc

0x9cbc,	// (0x00055446) set_content_pane_vc

0x3e96,	// (0x0004f620) button_value_adjust_pane_g1

0x3e9f,	// (0x0004f629) button_value_adjust_pane_g2

0x0001,

0xfa55,	// (0x0005b1df) button_value_adjust_pane_g

0x3ea8,	// (0x0004f632) form_field_slider_wide_pane_vc_t1_ParamLimits

0x3ea8,	// (0x0004f632) form_field_slider_wide_pane_vc_t1

0x3ebc,	// (0x0004f646) form_field_slider_wide_pane_vc_t2_ParamLimits

0x3ebc,	// (0x0004f646) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa5a,	// (0x0005b1e4) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa5a,	// (0x0005b1e4) form_field_slider_wide_pane_vc_t

0x9352,	// (0x00054adc) input_focus_pane_cp10_vc_ParamLimits

0x9352,	// (0x00054adc) input_focus_pane_cp10_vc

0x3eea,	// (0x0004f674) slider_cont_pane_cp1_vc_ParamLimits

0x3eea,	// (0x0004f674) slider_cont_pane_cp1_vc

0x3efc,	// (0x0004f686) slider_form_pane_g1_cp2

0x3d2c,	// (0x0004f4b6) slider_form_pane_g2_cp2

0x3f29,	// (0x0004f6b3) form_field_slider_pane_vc_t3

0x3f37,	// (0x0004f6c1) form_field_slider_pane_vc_t4

0x3f45,	// (0x0004f6cf) slider_form_pane_vc_ParamLimits

0x3f45,	// (0x0004f6cf) slider_form_pane_vc

0x3f52,	// (0x0004f6dc) form_field_slider_pane_vc_t1_ParamLimits

0x3f52,	// (0x0004f6dc) form_field_slider_pane_vc_t1

0x3ebc,	// (0x0004f646) form_field_slider_pane_vc_t2_ParamLimits

0x3ebc,	// (0x0004f646) form_field_slider_pane_vc_t2

0x0001,

0xfa6c,	// (0x0005b1f6) form_field_slider_pane_vc_t_ParamLimits

0xfa6c,	// (0x0005b1f6) form_field_slider_pane_vc_t

0x9352,	// (0x00054adc) input_focus_pane_cp9_vc_ParamLimits

0x9352,	// (0x00054adc) input_focus_pane_cp9_vc

0x3f6e,	// (0x0004f6f8) slider_cont_pane_vc_ParamLimits

0x3f6e,	// (0x0004f6f8) slider_cont_pane_vc

0x3f82,	// (0x0004f70c) list_form_graphic_pane_cp_vc_ParamLimits

0x3f82,	// (0x0004f70c) list_form_graphic_pane_cp_vc

0x22da,	// (0x0004da64) form_field_popup_wide_pane_vc_g1

0x3f97,	// (0x0004f721) form_field_popup_wide_pane_vc_t1_ParamLimits

0x3f97,	// (0x0004f721) form_field_popup_wide_pane_vc_t1

0x9ce2,	// (0x0005546c) input_focus_pane_cp8_vc_ParamLimits

0x9ce2,	// (0x0005546c) input_focus_pane_cp8_vc

0x3fdc,	// (0x0004f766) list_form_wide_pane_vc_ParamLimits

0x3fdc,	// (0x0004f766) list_form_wide_pane_vc

0x3fe8,	// (0x0004f772) list_form_graphic_pane_vc_g1

0x3ff0,	// (0x0004f77a) list_form_graphic_pane_vc_t1_ParamLimits

0x3ff0,	// (0x0004f77a) list_form_graphic_pane_vc_t1

0x939c,	// (0x00054b26) list_highlight_pane_cp5_vc_ParamLimits

0x939c,	// (0x00054b26) list_highlight_pane_cp5_vc

0x400c,	// (0x0004f796) list_form_graphic_pane_vc_ParamLimits

0x400c,	// (0x0004f796) list_form_graphic_pane_vc

0x22da,	// (0x0004da64) form_field_popup_pane_vc_g1

0x4022,	// (0x0004f7ac) form_field_popup_pane_vc_t1_ParamLimits

0x4022,	// (0x0004f7ac) form_field_popup_pane_vc_t1

0x9ce2,	// (0x0005546c) input_focus_pane_cp7_vc_ParamLimits

0x9ce2,	// (0x0005546c) input_focus_pane_cp7_vc

0x4039,	// (0x0004f7c3) list_form_pane_vc_ParamLimits

0x4039,	// (0x0004f7c3) list_form_pane_vc

0x4045,	// (0x0004f7cf) data_form_pane_vc_t1_ParamLimits

0x4045,	// (0x0004f7cf) data_form_pane_vc_t1

0x9d3a,	// (0x000554c4) input_focus_pane_vc_g1

0x9d42,	// (0x000554cc) input_focus_pane_vc_g2

0x9d4a,	// (0x000554d4) input_focus_pane_vc_g3

0x9d52,	// (0x000554dc) input_focus_pane_vc_g4

0x9d5a,	// (0x000554e4) input_focus_pane_vc_g5

0x9d62,	// (0x000554ec) input_focus_pane_vc_g6

0x9d6a,	// (0x000554f4) input_focus_pane_vc_g7

0x9d72,	// (0x000554fc) input_focus_pane_vc_g8

0x9d7a,	// (0x00055504) input_focus_pane_vc_g9

0x8ec2,	// (0x0005464c) input_focus_pane_vc_g10

0x0009,

0xf65d,	// (0x0005ade7) input_focus_pane_vc_g

0x22ce,	// (0x0004da58) data_form_pane_vc_ParamLimits

0x22ce,	// (0x0004da58) data_form_pane_vc

0x22da,	// (0x0004da64) form_field_data_pane_vc_g1

0x4060,	// (0x0004f7ea) form_field_data_pane_vc_t1_ParamLimits

0x4060,	// (0x0004f7ea) form_field_data_pane_vc_t1

0x9ce2,	// (0x0005546c) input_focus_pane_vc_ParamLimits

0x9ce2,	// (0x0005546c) input_focus_pane_vc

0x407a,	// (0x0004f804) button_value_adjust_pane_cp3_vc

0x4082,	// (0x0004f80c) button_value_adjust_pane_cp5_vc

0x408a,	// (0x0004f814) form_field_data_pane_vc_ParamLimits

0x408a,	// (0x0004f814) form_field_data_pane_vc

0x40a1,	// (0x0004f82b) form_field_data_pane_vc_cp2

0x40a9,	// (0x0004f833) form_field_data_wide_pane_vc_ParamLimits

0x40a9,	// (0x0004f833) form_field_data_wide_pane_vc

0x40bf,	// (0x0004f849) form_field_data_wide_pane_vc_cp2

0x40c7,	// (0x0004f851) form_field_popup_pane_vc_ParamLimits

0x40c7,	// (0x0004f851) form_field_popup_pane_vc

0x40de,	// (0x0004f868) form_field_popup_wide_pane_vc_ParamLimits

0x40de,	// (0x0004f868) form_field_popup_wide_pane_vc

0x40f4,	// (0x0004f87e) form_field_slider_pane_vc_ParamLimits

0x40f4,	// (0x0004f87e) form_field_slider_pane_vc

0x4107,	// (0x0004f891) form_field_slider_wide_pane_vc_ParamLimits

0x4107,	// (0x0004f891) form_field_slider_wide_pane_vc

0xce2f,	// (0x000585b9) grid_touch_1_pane_ParamLimits

0xce2f,	// (0x000585b9) grid_touch_1_pane

0xce43,	// (0x000585cd) grid_touch_2_pane_ParamLimits

0xce43,	// (0x000585cd) grid_touch_2_pane

0x41eb,	// (0x0004f975) touch_pane_g1_ParamLimits

0x41eb,	// (0x0004f975) touch_pane_g1

0x413e,	// (0x0004f8c8) cell_app_pane_cp_wide_ParamLimits

0x413e,	// (0x0004f8c8) cell_app_pane_cp_wide

0x414f,	// (0x0004f8d9) grid_popup_fast_wide_pane_ParamLimits

0x414f,	// (0x0004f8d9) grid_popup_fast_wide_pane

0x4163,	// (0x0004f8ed) scroll_pane_cp19_ParamLimits

0x4163,	// (0x0004f8ed) scroll_pane_cp19

0x9101,	// (0x0005488b) bg_popup_window_pane_cp20

0x4177,	// (0x0004f901) listscroll_popup_fast_wide_pane

0xce6d,	// (0x000585f7) grid_indicator_nsta_pane

0x4191,	// (0x0004f91b) clock_nsta_pane_g1

0x419a,	// (0x0004f924) clock_nsta_pane_t1

0xce79,	// (0x00058603) cell_indicator_nsta_pane_ParamLimits

0xce79,	// (0x00058603) cell_indicator_nsta_pane

0x41eb,	// (0x0004f975) cell_indicator_nsta_pane_g1

0xce94,	// (0x0005861e) cell_indicator_nsta_pane_g2

0x0001,

0xfa7d,	// (0x0005b207) cell_indicator_nsta_pane_g

0x420b,	// (0x0004f995) clock_nsta_pane_cp

0x4214,	// (0x0004f99e) indicator_nsta_pane_cp

0x421e,	// (0x0004f9a8) nsta_clock_indic_pane_g1

0x951e,	// (0x00054ca8) grid_indicator_pane

0xa2c3,	// (0x00055a4d) scroll_pane_cp29

0xf358,	// (0x0005aae2) indicator_nsta_pane_cp2_ParamLimits

0xf358,	// (0x0005aae2) indicator_nsta_pane_cp2

0x939c,	// (0x00054b26) main_apps_wheel_pane

0xb541,	// (0x00056ccb) form_midp_field_text_pane_ParamLimits

0x263b,	// (0x0004ddc5) scroll_bar_cp050_ParamLimits

0x4277,	// (0x0004fa01) cell_indicator_pane_ParamLimits

0x4277,	// (0x0004fa01) cell_indicator_pane

0x4290,	// (0x0004fa1a) cell_indicator_pane_g1

0xceb3,	// (0x0005863d) grid_wheel_folder_pane_ParamLimits

0xceb3,	// (0x0005863d) grid_wheel_folder_pane

0xcec1,	// (0x0005864b) list_wheel_apps_pane_ParamLimits

0xcec1,	// (0x0005864b) list_wheel_apps_pane

0xcecf,	// (0x00058659) main_apps_wheel_pane_g1_ParamLimits

0xcecf,	// (0x00058659) main_apps_wheel_pane_g1

0xcedb,	// (0x00058665) main_apps_wheel_pane_g2_ParamLimits

0xcedb,	// (0x00058665) main_apps_wheel_pane_g2

0x0001,

0xfa99,	// (0x0005b223) main_apps_wheel_pane_g_ParamLimits

0xfa99,	// (0x0005b223) main_apps_wheel_pane_g

0xcee9,	// (0x00058673) main_apps_wheel_pane_t1_ParamLimits

0xcee9,	// (0x00058673) main_apps_wheel_pane_t1

0xcefd,	// (0x00058687) list_wheel_apps_pane_g1

0xcf05,	// (0x0005868f) list_wheel_apps_pane_g2

0xcf0d,	// (0x00058697) list_wheel_apps_pane_g3

0xcf15,	// (0x0005869f) list_wheel_apps_pane_g4

0xcf1f,	// (0x000586a9) list_wheel_apps_pane_g5

0x0004,

0xfa9e,	// (0x0005b228) list_wheel_apps_pane_g

0xc331,	// (0x00057abb) navi_icon_text_pane

0xaf9b,	// (0x00056725) aid_fill_nsta

0x4357,	// (0x0004fae1) navi_icon_text_pane_g1

0x4363,	// (0x0004faed) navi_icon_text_pane_t1

0xc215,	// (0x0005799f) list_set_graphic_pane_t1_ParamLimits

0xc215,	// (0x0005799f) list_set_graphic_pane_t1

0x2d86,	// (0x0004e510) popup_midp_note_alarm_window_t6_ParamLimits

0x2d86,	// (0x0004e510) popup_midp_note_alarm_window_t6

0x2d98,	// (0x0004e522) popup_midp_note_alarm_window_t7_ParamLimits

0x2d98,	// (0x0004e522) popup_midp_note_alarm_window_t7

0x2daa,	// (0x0004e534) popup_midp_note_alarm_window_t8_ParamLimits

0x2daa,	// (0x0004e534) popup_midp_note_alarm_window_t8

0x2dbc,	// (0x0004e546) popup_midp_note_alarm_window_t9_ParamLimits

0x2dbc,	// (0x0004e546) popup_midp_note_alarm_window_t9

0x2dce,	// (0x0004e558) popup_midp_note_alarm_window_t10_ParamLimits

0x2dce,	// (0x0004e558) popup_midp_note_alarm_window_t10

0x2de0,	// (0x0004e56a) popup_midp_note_alarm_window_t11_ParamLimits

0x2de0,	// (0x0004e56a) popup_midp_note_alarm_window_t11

0xc895,	// (0x0005801f) scroll_pane_cp17_ParamLimits

0xc895,	// (0x0005801f) scroll_pane_cp17

0x0a72,	// (0x0004c1fc) volume_small_pane_cp_g1

0x0ee9,	// (0x0004c673) volume_small_pane_cp_g2

0x0ef2,	// (0x0004c67c) volume_small_pane_cp_g3

0x0efb,	// (0x0004c685) volume_small_pane_cp_g4

0x0f04,	// (0x0004c68e) volume_small_pane_cp_g5

0x0e33,	// (0x0004c5bd) volume_small_pane_cp_g6

0x0f0d,	// (0x0004c697) volume_small_pane_cp_g7

0x0f16,	// (0x0004c6a0) volume_small_pane_cp_g8

0x0f1f,	// (0x0004c6a9) volume_small_pane_cp_g9

0x0f28,	// (0x0004c6b2) volume_small_pane_cp_g10

0xc497,	// (0x00057c21) midp_ticker_pane_g1_ParamLimits

0xc4a3,	// (0x00057c2d) midp_ticker_pane_g2_ParamLimits

0xf729,	// (0x0005aeb3) midp_ticker_pane_g_ParamLimits

0xc4af,	// (0x00057c39) midp_ticker_pane_t1_ParamLimits

0xafbf,	// (0x00056749) aid_fill_nsta_2

0x2627,	// (0x0004ddb1) list_form2_midp_pane

0x373a,	// (0x0004eec4) midp_editing_number_pane_ParamLimits

0x3749,	// (0x0004eed3) midp_ticker_pane_ParamLimits

0x4375,	// (0x0004faff) form2_midp_field_pane

0x4399,	// (0x0004fb23) scroll_pane_cp51

0x43b9,	// (0x0004fb43) form2_midp_button_pane_ParamLimits

0x43b9,	// (0x0004fb43) form2_midp_button_pane

0x43cb,	// (0x0004fb55) form2_midp_content_pane_ParamLimits

0x43cb,	// (0x0004fb55) form2_midp_content_pane

0x43e5,	// (0x0004fb6f) form2_midp_field_choice_group_pane

0x43ed,	// (0x0004fb77) form2_midp_field_pane_g1

0x43f5,	// (0x0004fb7f) form2_midp_field_pane_g2

0x43fd,	// (0x0004fb87) form2_midp_field_pane_g3

0x4405,	// (0x0004fb8f) form2_midp_field_pane_g4

0x0003,

0xfac3,	// (0x0005b24d) form2_midp_field_pane_g

0x440d,	// (0x0004fb97) form2_midp_gauge_slider_pane

0x4415,	// (0x0004fb9f) form2_midp_gauge_wait_pane

0x441d,	// (0x0004fba7) form2_midp_image_pane_ParamLimits

0x441d,	// (0x0004fba7) form2_midp_image_pane

0xcf52,	// (0x000586dc) form2_midp_label_pane_ParamLimits

0xcf52,	// (0x000586dc) form2_midp_label_pane

0xcf6b,	// (0x000586f5) form2_midp_label_pane_cp_ParamLimits

0xcf6b,	// (0x000586f5) form2_midp_label_pane_cp

0x4472,	// (0x0004fbfc) form2_midp_string_pane_ParamLimits

0x4472,	// (0x0004fbfc) form2_midp_string_pane

0x8d07,	// (0x00054491) form2_midp_text_pane_ParamLimits

0x8d07,	// (0x00054491) form2_midp_text_pane

0x4484,	// (0x0004fc0e) form2_midp_time_pane

0x4494,	// (0x0004fc1e) input_focus_pane_cp51_ParamLimits

0x4494,	// (0x0004fc1e) input_focus_pane_cp51

0xcf8a,	// (0x00058714) form2_midp_label_pane_t1_ParamLimits

0xcf8a,	// (0x00058714) form2_midp_label_pane_t1

0x8d20,	// (0x000544aa) form2_mdip_text_pane_t1_ParamLimits

0x8d20,	// (0x000544aa) form2_mdip_text_pane_t1

0xec9b,	// (0x0005a425) form2_midp_time_pane_t1

0x44f5,	// (0x0004fc7f) form2_midp_gauge_slider_pane_t1

0xcfca,	// (0x00058754) form2_midp_gauge_slider_pane_t2

0xcfdc,	// (0x00058766) form2_midp_gauge_slider_pane_t3

0x0002,

0xfacc,	// (0x0005b256) form2_midp_gauge_slider_pane_t

0x452b,	// (0x0004fcb5) form2_midp_slider_pane

0x4537,	// (0x0004fcc1) form2_midp_gauge_wait_pane_t1

0x4545,	// (0x0004fccf) form2_midp_wait_pane_ParamLimits

0x4545,	// (0x0004fccf) form2_midp_wait_pane

0xcfee,	// (0x00058778) list_single_2graphic_pane_cp4_ParamLimits

0xcfee,	// (0x00058778) list_single_2graphic_pane_cp4

0xb498,	// (0x00056c22) list_single_midp_graphic_pane_cp_ParamLimits

0xb498,	// (0x00056c22) list_single_midp_graphic_pane_cp

0x9101,	// (0x0005488b) list_highlight_pane_cp20

0x4598,	// (0x0004fd22) list_single_2graphic_pane_g1_cp4

0x3b75,	// (0x0004f2ff) list_single_2graphic_pane_g2_cp4

0x45a0,	// (0x0004fd2a) list_single_2graphic_pane_t1_cp4

0x939c,	// (0x00054b26) list_highlight_pane_cp21

0x45af,	// (0x0004fd39) list_single_midp_graphic_pane_g4_cp

0x45be,	// (0x0004fd48) list_single_midp_graphic_pane_t1_cp

0xd003,	// (0x0005878d) form2_mdip_string_pane_t1_ParamLimits

0xd003,	// (0x0005878d) form2_mdip_string_pane_t1

0x9101,	// (0x0005488b) bg_wml_button_pane_cp2

0x8ec2,	// (0x0005464c) form2_midp_image_pane_g1

0xf0d2,	// (0x0005a85c) list_double_large_graphic_pane_g5_ParamLimits

0xf0d2,	// (0x0005a85c) list_double_large_graphic_pane_g5

0xa507,	// (0x00055c91) midp_form_pane_ParamLimits

0x939c,	// (0x00054b26) main_apps_wheel_pane_ParamLimits

0xac79,	// (0x00056403) popup_preview_window_ParamLimits

0xac79,	// (0x00056403) popup_preview_window

0xaf46,	// (0x000566d0) popup_touch_info_window_ParamLimits

0xaf46,	// (0x000566d0) popup_touch_info_window

0xaf64,	// (0x000566ee) popup_touch_menu_window_ParamLimits

0xaf64,	// (0x000566ee) popup_touch_menu_window

0x8eb8,	// (0x00054642) bg_popup_sub_pane_cp6

0x46da,	// (0x0004fe64) list_touch_menu_pane

0xd079,	// (0x00058803) list_single_touch_menu_pane_ParamLimits

0xd079,	// (0x00058803) list_single_touch_menu_pane

0xd08d,	// (0x00058817) list_single_touch_menu_pane_t1

0x939c,	// (0x00054b26) bg_popup_sub_pane_cp7_ParamLimits

0x939c,	// (0x00054b26) bg_popup_sub_pane_cp7

0x4706,	// (0x0004fe90) heading_sub_pane

0x470e,	// (0x0004fe98) list_touch_info_pane_ParamLimits

0x470e,	// (0x0004fe98) list_touch_info_pane

0x471d,	// (0x0004fea7) list_single_touch_info_pane_ParamLimits

0x471d,	// (0x0004fea7) list_single_touch_info_pane

0x472f,	// (0x0004feb9) list_single_touch_info_pane_t1

0x473d,	// (0x0004fec7) list_single_touch_info_pane_t2

0x0001,

0xfada,	// (0x0005b264) list_single_touch_info_pane_t

0xc480,	// (0x00057c0a) bg_popup_heading_pane_cp

0x474b,	// (0x0004fed5) heading_sub_pane_t1

0x2268,	// (0x0004d9f2) bg_popup_preview_window_pane_cp_ParamLimits

0x2268,	// (0x0004d9f2) bg_popup_preview_window_pane_cp

0x4706,	// (0x0004fe90) heading_preview_pane

0x470e,	// (0x0004fe98) list_preview_pane_ParamLimits

0x470e,	// (0x0004fe98) list_preview_pane

0x4759,	// (0x0004fee3) popup_preview_window_g1

0x471d,	// (0x0004fea7) list_single_preview_pane_ParamLimits

0x471d,	// (0x0004fea7) list_single_preview_pane

0x4761,	// (0x0004feeb) list_single_preview_pane_g1

0x4769,	// (0x0004fef3) list_single_preview_pane_t1

0x472f,	// (0x0004feb9) list_single_preview_pane_t2

0x0001,

0xfadf,	// (0x0005b269) list_single_preview_pane_t

0x4777,	// (0x0004ff01) bg_popup_heading_pane_cp2_ParamLimits

0x4777,	// (0x0004ff01) bg_popup_heading_pane_cp2

0x478d,	// (0x0004ff17) heading_preview_pane_g1

0x4795,	// (0x0004ff1f) heading_preview_pane_t1_ParamLimits

0x4795,	// (0x0004ff1f) heading_preview_pane_t1

0x954b,	// (0x00054cd5) soft_indicator_pane_t1_ParamLimits

0x9c0d,	// (0x00055397) scroll_pane_ParamLimits

0xa1bf,	// (0x00055949) scroll_sc2_left_pane

0xa1c8,	// (0x00055952) scroll_sc2_right_pane

0xa1e7,	// (0x00055971) scroll_bg_pane_g1_ParamLimits

0xa1fc,	// (0x00055986) scroll_bg_pane_g2_ParamLimits

0xa214,	// (0x0005599e) scroll_bg_pane_g3_ParamLimits

0xf6b4,	// (0x0005ae3e) scroll_bg_pane_g_ParamLimits

0xa1e7,	// (0x00055971) scroll_handle_pane_g1_ParamLimits

0xa236,	// (0x000559c0) scroll_handle_pane_g2_ParamLimits

0xa214,	// (0x0005599e) scroll_handle_pane_g3_ParamLimits

0xf6bb,	// (0x0005ae45) scroll_handle_pane_g_ParamLimits

0xa846,	// (0x00055fd0) popup_choice_list_window_ParamLimits

0xa846,	// (0x00055fd0) popup_choice_list_window

0x2126,	// (0x0004d8b0) choice_list_pane

0x21a8,	// (0x0004d932) cell_toolbar_pane_t1

0x21d0,	// (0x0004d95a) toolbar_button_pane_ParamLimits

0x32ac,	// (0x0004ea36) ai_gene_pane_1_t2_ParamLimits

0x32ac,	// (0x0004ea36) ai_gene_pane_1_t2

0x0001,

0xf8d7,	// (0x0005b061) ai_gene_pane_1_t_ParamLimits

0xf8d7,	// (0x0005b061) ai_gene_pane_1_t

0x47b2,	// (0x0004ff3c) scroll_sc2_left_pane_g1

0x47b2,	// (0x0004ff3c) scroll_sc2_right_pane_g1

0x9ec6,	// (0x00055650) bg_popup_sub_pane_cp10

0x47bc,	// (0x0004ff46) list_choice_list_pane

0xcc5e,	// (0x000583e8) list_single_choice_list_pane_ParamLimits

0xcc5e,	// (0x000583e8) list_single_choice_list_pane

0xd09b,	// (0x00058825) list_single_choice_list_pane_g1

0x9e84,	// (0x0005560e) list_single_choice_list_pane_t1_ParamLimits

0x9e84,	// (0x0005560e) list_single_choice_list_pane_t1

0x47f0,	// (0x0004ff7a) choice_list_pane_g1

0xd0a3,	// (0x0005882d) choice_list_pane_t1

0x8eb8,	// (0x00054642) input_focus_pane_cp11

0xa04a,	// (0x000557d4) title_pane_stacon_g2_ParamLimits

0xa04a,	// (0x000557d4) title_pane_stacon_g2

0x0002,

0xf69a,	// (0x0005ae24) title_pane_stacon_g_ParamLimits

0xf69a,	// (0x0005ae24) title_pane_stacon_g

0xc480,	// (0x00057c0a) cursor_press_pane

0xa8ed,	// (0x00056077) popup_fep_hwr_window_ParamLimits

0xa8ed,	// (0x00056077) popup_fep_hwr_window

0x01a8,	// (0x0004b932) popup_fep_vkb_window_ParamLimits

0x01a8,	// (0x0004b932) popup_fep_vkb_window

0xd0b1,	// (0x0005883b) cursor_press_pane_g1

0x0002,

0xfb08,	// (0x0005b292) fep_vkb_side_pane_g_ParamLimits

0x0f6a,	// (0x0004c6f4) fep_hwr_candidate_pane_ParamLimits

0x0f6a,	// (0x0004c6f4) fep_hwr_candidate_pane

0x0f94,	// (0x0004c71e) fep_hwr_side_pane_ParamLimits

0x0f94,	// (0x0004c71e) fep_hwr_side_pane

0x0fb4,	// (0x0004c73e) fep_hwr_top_pane_ParamLimits

0x0fb4,	// (0x0004c73e) fep_hwr_top_pane

0x0fcc,	// (0x0004c756) fep_hwr_write_pane_ParamLimits

0x0fcc,	// (0x0004c756) fep_hwr_write_pane

0xfb08,	// (0x0005b292) fep_vkb_side_pane_g

0x480e,	// (0x0004ff98) fep_hwr_top_pane_g1

0x4820,	// (0x0004ffaa) fep_hwr_top_pane_g2

0x0ff8,	// (0x0004c782) fep_hwr_top_pane_g3

0x0002,

0xfae4,	// (0x0005b26e) fep_hwr_top_pane_g

0x100d,	// (0x0004c797) fep_hwr_top_text_pane

0xc022,	// (0x000577ac) fep_hwr_top_text_pane_g1

0x4856,	// (0x0004ffe0) fep_hwr_top_text_pane_t1

0x1103,	// (0x0004c88d) fep_hwr_candidate_pane_g1

0x4a9b,	// (0x00050225) fep_vkb_keypad_pane_g3_ParamLimits

0x4a9b,	// (0x00050225) fep_vkb_keypad_pane_g3

0x4ac3,	// (0x0005024d) fep_vkb_keypad_pane_g4_ParamLimits

0x4ac3,	// (0x0005024d) fep_vkb_keypad_pane_g4

0x4b32,	// (0x000502bc) fep_vkb_bottom_pane_g2_ParamLimits

0x4b32,	// (0x000502bc) fep_vkb_bottom_pane_g2

0x0001,

0xfb0f,	// (0x0005b299) fep_vkb_bottom_pane_g_ParamLimits

0xfb0f,	// (0x0005b299) fep_vkb_bottom_pane_g

0x47b2,	// (0x0004ff3c) cell_vkb_side_pane_g2

0x0001,

0xfb19,	// (0x0005b2a3) cell_vkb_side_pane_g

0x4bbd,	// (0x00050347) cell_vkb_side_pane_t1

0x4bcb,	// (0x00050355) cell_vkb_side_pane_t1_copy1

0x47b2,	// (0x0004ff3c) bg_fep_vkb_candidate_pane_g2

0x4cf7,	// (0x00050481) cell_vkb_candidate_pane_ParamLimits

0x4864,	// (0x0004ffee) aid_size_cell_vkb_ParamLimits

0x4864,	// (0x0004ffee) aid_size_cell_vkb

0x4cf7,	// (0x00050481) cell_vkb_candidate_pane

0x111d,	// (0x0004c8a7) bg_popup_fep_shadow_pane_g1

0xd0f3,	// (0x0005887d) fep_vkb_bottom_pane_ParamLimits

0xd0f3,	// (0x0005887d) fep_vkb_bottom_pane

0x4928,	// (0x000500b2) fep_vkb_candidate_pane_ParamLimits

0x4928,	// (0x000500b2) fep_vkb_candidate_pane

0xd118,	// (0x000588a2) fep_vkb_keypad_pane_ParamLimits

0xd118,	// (0x000588a2) fep_vkb_keypad_pane

0xd14d,	// (0x000588d7) fep_vkb_side_pane_ParamLimits

0xd14d,	// (0x000588d7) fep_vkb_side_pane

0xd189,	// (0x00058913) fep_vkb_top_pane_ParamLimits

0xd189,	// (0x00058913) fep_vkb_top_pane

0x49f4,	// (0x0005017e) fep_vkb_top_pane_g1_ParamLimits

0x49f4,	// (0x0005017e) fep_vkb_top_pane_g1

0x4a03,	// (0x0005018d) fep_vkb_top_pane_g2_ParamLimits

0x4a03,	// (0x0005018d) fep_vkb_top_pane_g2

0x4a12,	// (0x0005019c) fep_vkb_top_pane_g3_ParamLimits

0x4a12,	// (0x0005019c) fep_vkb_top_pane_g3

0x0003,

0xfaff,	// (0x0005b289) fep_vkb_top_pane_g_ParamLimits

0xfaff,	// (0x0005b289) fep_vkb_top_pane_g

0x4a30,	// (0x000501ba) fep_vkb_top_text_pane_ParamLimits

0x4a30,	// (0x000501ba) fep_vkb_top_text_pane

0xd1be,	// (0x00058948) fep_vkb_side_pane_g1_ParamLimits

0xd1be,	// (0x00058948) fep_vkb_side_pane_g1

0x4a8a,	// (0x00050214) grid_vkb_side_pane_ParamLimits

0x4a8a,	// (0x00050214) grid_vkb_side_pane

0x1125,	// (0x0004c8af) bg_popup_fep_shadow_pane_g2

0x112e,	// (0x0004c8b8) bg_popup_fep_shadow_pane_g3

0x1136,	// (0x0004c8c0) bg_popup_fep_shadow_pane_g4

0x113f,	// (0x0004c8c9) bg_popup_fep_shadow_pane_g5

0x1149,	// (0x0004c8d3) bg_popup_fep_shadow_pane_g6

0x1151,	// (0x0004c8db) bg_popup_fep_shadow_pane_g7

0x9d5a,	// (0x000554e4) bg_popup_fep_shadow_pane_g8

0x4ae1,	// (0x0005026b) grid_vkb_keypad_number_pane_ParamLimits

0x4ae1,	// (0x0005026b) grid_vkb_keypad_number_pane

0x4af1,	// (0x0005027b) grid_vkb_keypad_pane_ParamLimits

0x4af1,	// (0x0005027b) grid_vkb_keypad_pane

0x4b17,	// (0x000502a1) fep_vkb_bottom_pane_g1_ParamLimits

0x4b17,	// (0x000502a1) fep_vkb_bottom_pane_g1

0x4b40,	// (0x000502ca) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x4b40,	// (0x000502ca) grid_vkb_keypad_bottom_left_pane

0x4b55,	// (0x000502df) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x4b55,	// (0x000502df) grid_vkb_keypad_bottom_right_pane

0x4b6a,	// (0x000502f4) fep_vkb_top_text_pane_g1

0xd205,	// (0x0005898f) fep_vkb_top_text_pane_t1

0xd217,	// (0x000589a1) cell_vkb_side_pane_ParamLimits

0xd217,	// (0x000589a1) cell_vkb_side_pane

0x47b2,	// (0x0004ff3c) cell_vkb_side_pane_g1

0x4bd9,	// (0x00050363) cell_vkb_keypad_pane_ParamLimits

0x4bd9,	// (0x00050363) cell_vkb_keypad_pane

0x4c4e,	// (0x000503d8) cell_vkb_keypad_pane_g1

0x0008,

0xfb2c,	// (0x0005b2b6) bg_popup_fep_shadow_pane_g

0x47b2,	// (0x0004ff3c) cell_hwr_side_pane_g1

0x47b2,	// (0x0004ff3c) cell_hwr_side_pane_g2

0x4c58,	// (0x000503e2) cell_vkb_keypad_pane_t1

0xd22d,	// (0x000589b7) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xd22d,	// (0x000589b7) cell_vkb_keypad_bottom_left_pane

0xd242,	// (0x000589cc) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xd242,	// (0x000589cc) cell_vkb_keypad_bottom_right_pane

0x47b2,	// (0x0004ff3c) cell_vkb_keypad_bottom_left_pane_g1

0x47b2,	// (0x0004ff3c) cell_vkb_keypad_bottom_right_pane_g1

0x4cbc,	// (0x00050446) cell_vkb_keypad_number_pane_ParamLimits

0x4cbc,	// (0x00050446) cell_vkb_keypad_number_pane

0x4cdb,	// (0x00050465) cell_vkb_keypad_number_pane_g1

0x4ce5,	// (0x0005046f) cell_vkb_keypad_number_pane_g2

0x4cee,	// (0x00050478) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb1e,	// (0x0005b2a8) cell_vkb_keypad_number_pane_g

0x4c58,	// (0x000503e2) cell_vkb_keypad_number_pane_t1

0x4d12,	// (0x0005049c) fep_vkb_candidate_pane_g1

0x0001,

0xfb19,	// (0x0005b2a3) cell_hwr_side_pane_g

0x4d2b,	// (0x000504b5) cell_hwr_side_pane_t1

0x1163,	// (0x0004c8ed) cell_hwr_side_pane_t1_copy1

0x4a22,	// (0x000501ac) cell_hwr_candidate_pane_g1

0x1171,	// (0x0004c8fb) cell_hwr_candidate_pane_t1

0x47b2,	// (0x0004ff3c) cell_vkb_candidate_pane_g2

0x4db1,	// (0x0005053b) cell_vkb_candidate_pane_t1

0x0f31,	// (0x0004c6bb) bg_popup_fep_shadow_pane_ParamLimits

0x0f31,	// (0x0004c6bb) bg_popup_fep_shadow_pane

0xd0b9,	// (0x00058843) bg_fep_hwr_top_pane_g4

0x4832,	// (0x0004ffbc) bg_hwr_side_pane_g1_ParamLimits

0x4832,	// (0x0004ffbc) bg_hwr_side_pane_g1

0xb788,	// (0x00056f12) cell_hwr_side_pane_ParamLimits

0xb788,	// (0x00056f12) cell_hwr_side_pane

0x1084,	// (0x0004c80e) fep_hwr_write_pane_g1_ParamLimits

0x1084,	// (0x0004c80e) fep_hwr_write_pane_g1

0x1091,	// (0x0004c81b) fep_hwr_write_pane_g2_ParamLimits

0x1091,	// (0x0004c81b) fep_hwr_write_pane_g2

0x109e,	// (0x0004c828) fep_hwr_write_pane_g3_ParamLimits

0x109e,	// (0x0004c828) fep_hwr_write_pane_g3

0xb7a8,	// (0x00056f32) fep_hwr_write_pane_g4_ParamLimits

0xb7a8,	// (0x00056f32) fep_hwr_write_pane_g4

0x0005,

0xfaeb,	// (0x0005b275) fep_hwr_write_pane_g_ParamLimits

0xfaeb,	// (0x0005b275) fep_hwr_write_pane_g

0xd0b9,	// (0x00058843) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xd0b9,	// (0x00058843) bg_fep_hwr_candidate_pane_g2

0x10c1,	// (0x0004c84b) cell_hwr_candidate_pane_ParamLimits

0x10c1,	// (0x0004c84b) cell_hwr_candidate_pane

0x1103,	// (0x0004c88d) fep_hwr_candidate_pane_g1_ParamLimits

0x4892,	// (0x0005001c) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x4892,	// (0x0005001c) bg_popup_fep_shadow_pane_cp2

0x4a22,	// (0x000501ac) fep_vkb_top_pane_g4_ParamLimits

0x4a22,	// (0x000501ac) fep_vkb_top_pane_g4

0x4a68,	// (0x000501f2) fep_vkb_side_pane_g2_ParamLimits

0x4a68,	// (0x000501f2) fep_vkb_side_pane_g2

0x898b,	// (0x00054115) list_setting_pane_t4_ParamLimits

0x898b,	// (0x00054115) list_setting_pane_t4

0x8a25,	// (0x000541af) list_setting_number_pane_t5_ParamLimits

0x8a25,	// (0x000541af) list_setting_number_pane_t5

0xc059,	// (0x000577e3) list_double_heading_pane_cp2_ParamLimits

0xc059,	// (0x000577e3) list_double_heading_pane_cp2

0xd25d,	// (0x000589e7) list_double_heading_pane_g1_cp2_ParamLimits

0xd25d,	// (0x000589e7) list_double_heading_pane_g1_cp2

0x4dbf,	// (0x00050549) list_double_heading_pane_g2_cp2_ParamLimits

0x4dbf,	// (0x00050549) list_double_heading_pane_g2_cp2

0x4dd3,	// (0x0005055d) list_double_heading_pane_t1_cp2_ParamLimits

0x4dd3,	// (0x0005055d) list_double_heading_pane_t1_cp2

0x4de9,	// (0x00050573) list_double_heading_pane_t2_cp2_ParamLimits

0x4de9,	// (0x00050573) list_double_heading_pane_t2_cp2

0x8ea0,	// (0x0005462a) aid_value_unit2

0xe7d4,	// (0x00059f5e) popup_preview_fixed_window

0x9706,	// (0x00054e90) bg_popup_preview_window_pane_cp02

0x4dfb,	// (0x00050585) list_preview_fixed_pane

0x4e41,	// (0x000505cb) list_empty_pane_fp_ParamLimits

0x4e41,	// (0x000505cb) list_empty_pane_fp

0x4e41,	// (0x000505cb) list_single_cale_day_pane_fp_ParamLimits

0x4e41,	// (0x000505cb) list_single_cale_day_pane_fp

0x4e41,	// (0x000505cb) list_single_graphic_heading_pane_fp_ParamLimits

0x4e41,	// (0x000505cb) list_single_graphic_heading_pane_fp

0x4e41,	// (0x000505cb) list_single_graphic_pane_fp_ParamLimits

0x4e41,	// (0x000505cb) list_single_graphic_pane_fp

0x4e41,	// (0x000505cb) list_single_heading_pane_fp_ParamLimits

0x4e41,	// (0x000505cb) list_single_heading_pane_fp

0x4e41,	// (0x000505cb) list_single_pane_fp_ParamLimits

0x4e41,	// (0x000505cb) list_single_pane_fp

0x4e57,	// (0x000505e1) list_single_pane_fp_g1_ParamLimits

0x4e57,	// (0x000505e1) list_single_pane_fp_g1

0xd269,	// (0x000589f3) list_single_pane_fp_g2_ParamLimits

0xd269,	// (0x000589f3) list_single_pane_fp_g2

0x4f44,	// (0x000506ce) list_single_pane_fp_g3_ParamLimits

0x4f44,	// (0x000506ce) list_single_pane_fp_g3

0x4e63,	// (0x000505ed) list_single_pane_fp_g4_ParamLimits

0x4e63,	// (0x000505ed) list_single_pane_fp_g4

0x0003,

0xfb4d,	// (0x0005b2d7) list_single_pane_fp_g_ParamLimits

0xfb4d,	// (0x0005b2d7) list_single_pane_fp_g

0xecae,	// (0x0005a438) list_single_pane_fp_t1_ParamLimits

0xecae,	// (0x0005a438) list_single_pane_fp_t1

0xecc5,	// (0x0005a44f) list_single_graphic_pane_fp_g1_ParamLimits

0xecc5,	// (0x0005a44f) list_single_graphic_pane_fp_g1

0x4e57,	// (0x000505e1) list_single_graphic_pane_fp_g2_ParamLimits

0x4e57,	// (0x000505e1) list_single_graphic_pane_fp_g2

0xd269,	// (0x000589f3) list_single_graphic_pane_fp_g3_ParamLimits

0xd269,	// (0x000589f3) list_single_graphic_pane_fp_g3

0x4f44,	// (0x000506ce) list_single_graphic_pane_fp_g4_ParamLimits

0x4f44,	// (0x000506ce) list_single_graphic_pane_fp_g4

0x4e63,	// (0x000505ed) list_single_graphic_pane_fp_g5_ParamLimits

0x4e63,	// (0x000505ed) list_single_graphic_pane_fp_g5

0x0004,

0xfb56,	// (0x0005b2e0) list_single_graphic_pane_fp_g_ParamLimits

0xfb56,	// (0x0005b2e0) list_single_graphic_pane_fp_g

0xecd1,	// (0x0005a45b) list_single_graphic_pane_fp_t1_ParamLimits

0xecd1,	// (0x0005a45b) list_single_graphic_pane_fp_t1

0xecc5,	// (0x0005a44f) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xecc5,	// (0x0005a44f) list_single_graphic_heading_pane_fp_g1

0x4e57,	// (0x000505e1) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x4e57,	// (0x000505e1) list_single_graphic_heading_pane_fp_g2

0xd269,	// (0x000589f3) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xd269,	// (0x000589f3) list_single_graphic_heading_pane_fp_g3

0x4f44,	// (0x000506ce) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x4f44,	// (0x000506ce) list_single_graphic_heading_pane_fp_g4

0x4e63,	// (0x000505ed) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x4e63,	// (0x000505ed) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb56,	// (0x0005b2e0) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb56,	// (0x0005b2e0) list_single_graphic_heading_pane_fp_g

0xece7,	// (0x0005a471) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xece7,	// (0x0005a471) list_single_graphic_heading_pane_fp_t1

0xecfd,	// (0x0005a487) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xecfd,	// (0x0005a487) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb61,	// (0x0005b2eb) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb61,	// (0x0005b2eb) list_single_graphic_heading_pane_fp_t

0xed0f,	// (0x0005a499) list_single_cale_day_pane_fp_g1_ParamLimits

0xed0f,	// (0x0005a499) list_single_cale_day_pane_fp_g1

0x4e6f,	// (0x000505f9) list_single_cale_day_pane_fp_g2_ParamLimits

0x4e6f,	// (0x000505f9) list_single_cale_day_pane_fp_g2

0x118f,	// (0x0004c919) list_single_cale_day_pane_fp_g3_ParamLimits

0x118f,	// (0x0004c919) list_single_cale_day_pane_fp_g3

0x11b7,	// (0x0004c941) list_single_cale_day_pane_fp_g4_ParamLimits

0x11b7,	// (0x0004c941) list_single_cale_day_pane_fp_g4

0x11db,	// (0x0004c965) list_single_cale_day_pane_fp_g5_ParamLimits

0x11db,	// (0x0004c965) list_single_cale_day_pane_fp_g5

0x0004,

0xfb66,	// (0x0005b2f0) list_single_cale_day_pane_fp_g_ParamLimits

0xfb66,	// (0x0005b2f0) list_single_cale_day_pane_fp_g

0xed47,	// (0x0005a4d1) list_single_cale_day_pane_fp_t1_ParamLimits

0xed47,	// (0x0005a4d1) list_single_cale_day_pane_fp_t1

0xed6d,	// (0x0005a4f7) list_single_cale_day_pane_fp_t2_ParamLimits

0xed6d,	// (0x0005a4f7) list_single_cale_day_pane_fp_t2

0xed86,	// (0x0005a510) list_single_cale_day_pane_fp_t3_ParamLimits

0xed86,	// (0x0005a510) list_single_cale_day_pane_fp_t3

0x0002,

0xfb71,	// (0x0005b2fb) list_single_cale_day_pane_fp_t_ParamLimits

0xfb71,	// (0x0005b2fb) list_single_cale_day_pane_fp_t

0x4e57,	// (0x000505e1) list_empty_pane_fp_g1_ParamLimits

0x4e57,	// (0x000505e1) list_empty_pane_fp_g1

0xed9f,	// (0x0005a529) list_empty_pane_fp_t1

0xedad,	// (0x0005a537) list_empty_pane_fp_t2

0x0001,

0xfb78,	// (0x0005b302) list_empty_pane_fp_t

0x4e57,	// (0x000505e1) list_single_heading_pane_fp_g1_ParamLimits

0x4e57,	// (0x000505e1) list_single_heading_pane_fp_g1

0xd269,	// (0x000589f3) list_single_heading_pane_fp_g2_ParamLimits

0xd269,	// (0x000589f3) list_single_heading_pane_fp_g2

0x4f44,	// (0x000506ce) list_single_heading_pane_fp_g3_ParamLimits

0x4f44,	// (0x000506ce) list_single_heading_pane_fp_g3

0x0002,

0xfb7d,	// (0x0005b307) list_single_heading_pane_fp_g_ParamLimits

0xfb7d,	// (0x0005b307) list_single_heading_pane_fp_g

0xedbb,	// (0x0005a545) list_single_heading_pane_fp_t1_ParamLimits

0xedbb,	// (0x0005a545) list_single_heading_pane_fp_t1

0xedcd,	// (0x0005a557) list_single_heading_pane_fp_t2_ParamLimits

0xedcd,	// (0x0005a557) list_single_heading_pane_fp_t2

0x0001,

0xfb84,	// (0x0005b30e) list_single_heading_pane_fp_t_ParamLimits

0xfb84,	// (0x0005b30e) list_single_heading_pane_fp_t

0x9ee4,	// (0x0005566e) aid_size_cell_fast

0x9686,	// (0x00054e10) soft_indicator_pane_cp1_t1

0x9f1e,	// (0x000556a8) cell_app_pane_cp2_ParamLimits

0x9f1e,	// (0x000556a8) cell_app_pane_cp2

0x0f53,	// (0x0004c6dd) fep_hwr_candidate_drop_down_list_pane

0xd0c7,	// (0x00058851) fep_hwr_candidate_pane_g3_ParamLimits

0xd0c7,	// (0x00058851) fep_hwr_candidate_pane_g3

0xd0d4,	// (0x0005885e) fep_hwr_candidate_pane_g4_ParamLimits

0xd0d4,	// (0x0005885e) fep_hwr_candidate_pane_g4

0x0002,

0xfaf8,	// (0x0005b282) fep_hwr_candidate_pane_g_ParamLimits

0xfaf8,	// (0x0005b282) fep_hwr_candidate_pane_g

0x4917,	// (0x000500a1) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x4917,	// (0x000500a1) fep_vkb_candidate_drop_down_list_pane

0x4d1a,	// (0x000504a4) fep_vkb_candidate_pane_g3

0x4d22,	// (0x000504ac) fep_vkb_candidate_pane_g4

0x0002,

0xfb25,	// (0x0005b2af) fep_vkb_candidate_pane_g

0x4a22,	// (0x000501ac) cell_hwr_candidate_pane_g1_ParamLimits

0x4d39,	// (0x000504c3) cell_hwr_candidate_pane_g3_ParamLimits

0x4d39,	// (0x000504c3) cell_hwr_candidate_pane_g3

0x4d5a,	// (0x000504e4) cell_hwr_candidate_pane_g4_ParamLimits

0x4d5a,	// (0x000504e4) cell_hwr_candidate_pane_g4

0x0002,

0xfb3f,	// (0x0005b2c9) cell_hwr_candidate_pane_g_ParamLimits

0xfb3f,	// (0x0005b2c9) cell_hwr_candidate_pane_g

0x4d7b,	// (0x00050505) cell_vkb_candidate_pane_g3_ParamLimits

0x4d7b,	// (0x00050505) cell_vkb_candidate_pane_g3

0x4d96,	// (0x00050520) cell_vkb_candidate_pane_g4_ParamLimits

0x4d96,	// (0x00050520) cell_vkb_candidate_pane_g4

0xd275,	// (0x000589ff) cell_app_pane_cp2_g1_ParamLimits

0xd275,	// (0x000589ff) cell_app_pane_cp2_g1

0x4e99,	// (0x00050623) cell_app_pane_cp2_g2_ParamLimits

0x4e99,	// (0x00050623) cell_app_pane_cp2_g2

0x0001,

0xfb89,	// (0x0005b313) cell_app_pane_cp2_g_ParamLimits

0xfb89,	// (0x0005b313) cell_app_pane_cp2_g

0x4ea5,	// (0x0005062f) cell_app_pane_cp2_t1_ParamLimits

0x4ea5,	// (0x0005062f) cell_app_pane_cp2_t1

0x9ce2,	// (0x0005546c) grid_highlight_pane_cp1_ParamLimits

0x9ce2,	// (0x0005546c) grid_highlight_pane_cp1

0x11ff,	// (0x0004c989) cell_hwr_candidate_pane_cp1_ParamLimits

0x11ff,	// (0x0004c989) cell_hwr_candidate_pane_cp1

0x4a22,	// (0x000501ac) fep_hwr_candidate_drop_down_list_pane_g1

0x4eb7,	// (0x00050641) fep_hwr_candidate_drop_down_list_pane_g2

0x4ec4,	// (0x0005064e) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb8e,	// (0x0005b318) fep_hwr_candidate_drop_down_list_pane_g

0x121e,	// (0x0004c9a8) fep_hwr_candidate_drop_down_list_scroll_pane

0x1227,	// (0x0004c9b1) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x1227,	// (0x0004c9b1) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x1234,	// (0x0004c9be) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x1234,	// (0x0004c9be) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x1241,	// (0x0004c9cb) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x1241,	// (0x0004c9cb) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x4d7b,	// (0x00050505) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x4d7b,	// (0x00050505) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x4d96,	// (0x00050520) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x4d96,	// (0x00050520) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x124e,	// (0x0004c9d8) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x124e,	// (0x0004c9d8) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x1269,	// (0x0004c9f3) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x1269,	// (0x0004c9f3) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x1284,	// (0x0004ca0e) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x1284,	// (0x0004ca0e) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb95,	// (0x0005b31f) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb95,	// (0x0005b31f) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x4ed1,	// (0x0005065b) cell_vkb_candidate_pane_cp1_ParamLimits

0x4ed1,	// (0x0005065b) cell_vkb_candidate_pane_cp1

0x4a22,	// (0x000501ac) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x4a22,	// (0x000501ac) fep_vkb_candidate_drop_down_list_pane_g1

0x4eb7,	// (0x00050641) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x4eb7,	// (0x00050641) fep_vkb_candidate_drop_down_list_pane_g2

0x4ec4,	// (0x0005064e) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x4ec4,	// (0x0005064e) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfb8e,	// (0x0005b318) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfb8e,	// (0x0005b318) fep_vkb_candidate_drop_down_list_pane_g

0x4ef1,	// (0x0005067b) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x4ef1,	// (0x0005067b) fep_vkb_candidate_drop_down_list_scroll_pane

0x4efe,	// (0x00050688) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x4efe,	// (0x00050688) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x4f0b,	// (0x00050695) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x4f0b,	// (0x00050695) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x4f17,	// (0x000506a1) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x4f17,	// (0x000506a1) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x4d39,	// (0x000504c3) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x4d39,	// (0x000504c3) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x4d5a,	// (0x000504e4) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x4d5a,	// (0x000504e4) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x4f58,	// (0x000506e2) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x4f58,	// (0x000506e2) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x4f79,	// (0x00050703) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x4f79,	// (0x00050703) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x4f9a,	// (0x00050724) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x4f9a,	// (0x00050724) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfba6,	// (0x0005b330) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfba6,	// (0x0005b330) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x924b,	// (0x000549d5) title_pane_g1_ParamLimits

0x925e,	// (0x000549e8) title_pane_g2_ParamLimits

0xf529,	// (0x0005acb3) title_pane_g_ParamLimits

0xc012,	// (0x0005779c) aid_call2_pane

0xc01a,	// (0x000577a4) aid_call_pane

0xc022,	// (0x000577ac) popup_clock_analogue_window_g1

0xc022,	// (0x000577ac) popup_clock_analogue_window_g2

0xf29c,	// (0x0005aa26) popup_clock_analogue_window_g3

0xf2a5,	// (0x0005aa2f) popup_clock_analogue_window_g4

0x8ec2,	// (0x0005464c) popup_clock_analogue_window_g5

0x0004,

0xf6c9,	// (0x0005ae53) popup_clock_analogue_window_g

0xf2ad,	// (0x0005aa37) popup_clock_analogue_window_t1

0xf2bb,	// (0x0005aa45) clock_digital_number_pane_ParamLimits

0xf2bb,	// (0x0005aa45) clock_digital_number_pane

0xf2c7,	// (0x0005aa51) clock_digital_number_pane_cp02_ParamLimits

0xf2c7,	// (0x0005aa51) clock_digital_number_pane_cp02

0xf2d3,	// (0x0005aa5d) clock_digital_number_pane_cp03_ParamLimits

0xf2d3,	// (0x0005aa5d) clock_digital_number_pane_cp03

0xf2df,	// (0x0005aa69) clock_digital_number_pane_cp04_ParamLimits

0xf2df,	// (0x0005aa69) clock_digital_number_pane_cp04

0xf2eb,	// (0x0005aa75) clock_digital_separator_pane_ParamLimits

0xf2eb,	// (0x0005aa75) clock_digital_separator_pane

0xf2f7,	// (0x0005aa81) popup_clock_digital_window_t1_ParamLimits

0xf2f7,	// (0x0005aa81) popup_clock_digital_window_t1

0x8ec2,	// (0x0005464c) clock_digital_number_pane_g1

0x8ec2,	// (0x0005464c) clock_digital_number_pane_g2

0x0001,

0xf6d4,	// (0x0005ae5e) clock_digital_number_pane_g

0x8ec2,	// (0x0005464c) clock_digital_separator_pane_g1

0x8ec2,	// (0x0005464c) clock_digital_separator_pane_g2

0x0001,

0xf6d4,	// (0x0005ae5e) clock_digital_separator_pane_g

0xaf9b,	// (0x00056725) aid_fill_nsta_ParamLimits

0xb0d1,	// (0x0005685b) indicator_nsta_pane_ParamLimits

0x08e2,	// (0x0004c06c) popup_clock_analogue_window

0x08e2,	// (0x0004c06c) popup_clock_digital_window

0xce6d,	// (0x000585f7) grid_indicator_nsta_pane_ParamLimits

0x41a8,	// (0x0004f932) clock_nsta_pane_t2

0x0001,

0xfa78,	// (0x0005b202) clock_nsta_pane_t

0xf27d,	// (0x0005aa07) aid_size_max_handle

0xa183,	// (0x0005590d) aid_size_min_handle

0xc480,	// (0x00057c0a) editor_scroll_pane

0x4fb5,	// (0x0005073f) ex_editor_pane

0x9e60,	// (0x000555ea) scroll_pane_cp13

0x9c39,	// (0x000553c3) scroll_pane_cp14

0xc051,	// (0x000577db) scroll_pane_cp36

0xa32e,	// (0x00055ab8) list_single_graphic_hl_pane_cp2_ParamLimits

0xa32e,	// (0x00055ab8) list_single_graphic_hl_pane_cp2

0xb702,	// (0x00056e8c) list_single_graphic_hl_pane_ParamLimits

0xb702,	// (0x00056e8c) list_single_graphic_hl_pane

0x8d3a,	// (0x000544c4) aid_size_min_hl_cp1

0x4fbd,	// (0x00050747) list_highlight_pane_cp34_ParamLimits

0x4fbd,	// (0x00050747) list_highlight_pane_cp34

0x4fce,	// (0x00050758) list_single_graphic_hl_pane_g1_ParamLimits

0x4fce,	// (0x00050758) list_single_graphic_hl_pane_g1

0x8d43,	// (0x000544cd) list_single_graphic_hl_pane_g2_ParamLimits

0x8d43,	// (0x000544cd) list_single_graphic_hl_pane_g2

0x8d43,	// (0x000544cd) list_single_graphic_hl_pane_g3_ParamLimits

0x8d43,	// (0x000544cd) list_single_graphic_hl_pane_g3

0xc40b,	// (0x00057b95) list_single_graphic_hl_pane_g4_ParamLimits

0xc40b,	// (0x00057b95) list_single_graphic_hl_pane_g4

0xb7bd,	// (0x00056f47) list_single_graphic_hl_pane_g5_ParamLimits

0xb7bd,	// (0x00056f47) list_single_graphic_hl_pane_g5

0x0004,

0xfbb7,	// (0x0005b341) list_single_graphic_hl_pane_g_ParamLimits

0xfbb7,	// (0x0005b341) list_single_graphic_hl_pane_g

0x8d4f,	// (0x000544d9) list_single_graphic_hl_pane_t1_ParamLimits

0x8d4f,	// (0x000544d9) list_single_graphic_hl_pane_t1

0x4fdb,	// (0x00050765) aid_size_min_hl_cp2

0x4fe4,	// (0x0005076e) list_highlight_pane_cp34_cp2_ParamLimits

0x4fe4,	// (0x0005076e) list_highlight_pane_cp34_cp2

0x4fce,	// (0x00050758) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x4fce,	// (0x00050758) list_single_graphic_hl_pane_g1_cp2

0x4ff1,	// (0x0005077b) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x4ff1,	// (0x0005077b) list_single_graphic_hl_pane_g2_cp2

0xd293,	// (0x00058a1d) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xd293,	// (0x00058a1d) list_single_graphic_hl_pane_g3_cp2

0xbfab,	// (0x00057735) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xbfab,	// (0x00057735) list_single_graphic_hl_pane_g4_cp2

0x500b,	// (0x00050795) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x500b,	// (0x00050795) list_single_graphic_hl_pane_g5_cp2

0xa6ba,	// (0x00055e44) control_pane_g4_ParamLimits

0xa6ba,	// (0x00055e44) control_pane_g4

0x9ec6,	// (0x00055650) bg_popup_sub_pane_cp10_ParamLimits

0x47bc,	// (0x0004ff46) list_choice_list_pane_ParamLimits

0x47cb,	// (0x0004ff55) scroll_pane_cp23

0x9706,	// (0x00054e90) bg_popup_preview_window_pane_cp02_ParamLimits

0x4dfb,	// (0x00050585) list_preview_fixed_pane_ParamLimits

0x4e11,	// (0x0005059b) list_preview_fixed_pane_cp_ParamLimits

0x4e11,	// (0x0005059b) list_preview_fixed_pane_cp

0x4e1d,	// (0x000505a7) popup_preview_fixed_window_g1_ParamLimits

0x4e1d,	// (0x000505a7) popup_preview_fixed_window_g1

0x4e29,	// (0x000505b3) popup_preview_fixed_window_g2_ParamLimits

0x4e29,	// (0x000505b3) popup_preview_fixed_window_g2

0x0002,

0xfb46,	// (0x0005b2d0) popup_preview_fixed_window_g_ParamLimits

0xfb46,	// (0x0005b2d0) popup_preview_fixed_window_g

0xf1f1,	// (0x0005a97b) aid_navi_side_left_pane_ParamLimits

0xf206,	// (0x0005a990) aid_navi_side_right_pane_ParamLimits

0xf21e,	// (0x0005a9a8) navi_icon_pane_stacon_ParamLimits

0xf232,	// (0x0005a9bc) navi_navi_pane_stacon_ParamLimits

0xf21e,	// (0x0005a9a8) navi_text_pane_stacon_ParamLimits

0x8eb8,	// (0x00054642) main_text_info_pane

0x5035,	// (0x000507bf) listscroll_text_info_pane

0x503d,	// (0x000507c7) list_text_info_pane_ParamLimits

0x503d,	// (0x000507c7) list_text_info_pane

0x504c,	// (0x000507d6) scroll_pane_cp24_ParamLimits

0x504c,	// (0x000507d6) scroll_pane_cp24

0xd2a1,	// (0x00058a2b) list_text_info_pane_t1_ParamLimits

0xd2a1,	// (0x00058a2b) list_text_info_pane_t1

0xa862,	// (0x00055fec) popup_fast_swap2_window_ParamLimits

0xa862,	// (0x00055fec) popup_fast_swap2_window

0x509e,	// (0x00050828) aid_size_cell_fast2

0x8eb8,	// (0x00054642) bg_popup_window_pane_cp17

0x50a8,	// (0x00050832) heading_pane_cp2

0x50b0,	// (0x0005083a) listscroll_fast2_pane

0x50b8,	// (0x00050842) grid_fast2_pane

0x50c2,	// (0x0005084c) listscroll_fast2_pane_g1

0x50ca,	// (0x00050854) listscroll_fast2_pane_g2

0x0001,

0xfbc2,	// (0x0005b34c) listscroll_fast2_pane_g

0x9e60,	// (0x000555ea) scroll_pane_cp26

0x50d4,	// (0x0005085e) cell_fast2_pane_ParamLimits

0x50d4,	// (0x0005085e) cell_fast2_pane

0x50e9,	// (0x00050873) cell_fast2_pane_g1

0x50f2,	// (0x0005087c) cell_fast2_pane_g2

0x50fb,	// (0x00050885) cell_fast2_pane_g3

0x0002,

0xfbc7,	// (0x0005b351) cell_fast2_pane_g

0x9a63,	// (0x000551ed) grid_highlight_pane_cp9

0x9a78,	// (0x00055202) main_eswt_pane_ParamLimits

0x9a78,	// (0x00055202) main_eswt_pane

0x5061,	// (0x000507eb) list_single_text_info_pane

0x5103,	// (0x0005088d) eswt_ctrl_button_pane

0x5103,	// (0x0005088d) eswt_ctrl_canvas_pane

0xd2bd,	// (0x00058a47) eswt_ctrl_combo_pane

0x5103,	// (0x0005088d) eswt_ctrl_default_pane

0x5103,	// (0x0005088d) eswt_ctrl_label_pane

0x5113,	// (0x0005089d) eswt_ctrl_wait_pane

0xd2c5,	// (0x00058a4f) eswt_shell_pane

0x8eb8,	// (0x00054642) listscroll_eswt_app_pane

0x513b,	// (0x000508c5) popup_eswt_tasktip_window_ParamLimits

0x513b,	// (0x000508c5) popup_eswt_tasktip_window

0x2268,	// (0x0004d9f2) bg_popup_window_pane_cp18

0x5154,	// (0x000508de) eswt_control_pane_g1_ParamLimits

0x5154,	// (0x000508de) eswt_control_pane_g1

0x5161,	// (0x000508eb) eswt_control_pane_g2_ParamLimits

0x5161,	// (0x000508eb) eswt_control_pane_g2

0x516e,	// (0x000508f8) eswt_control_pane_g3_ParamLimits

0x516e,	// (0x000508f8) eswt_control_pane_g3

0x517b,	// (0x00050905) eswt_control_pane_g4_ParamLimits

0x517b,	// (0x00050905) eswt_control_pane_g4

0x0003,

0xfbce,	// (0x0005b358) eswt_control_pane_g_ParamLimits

0xfbce,	// (0x0005b358) eswt_control_pane_g

0x9ce2,	// (0x0005546c) bg_button_pane_ParamLimits

0x9ce2,	// (0x0005546c) bg_button_pane

0x9a78,	// (0x00055202) common_borders_pane_copy2_ParamLimits

0x9a78,	// (0x00055202) common_borders_pane_copy2

0x5188,	// (0x00050912) control_button_pane_g1_ParamLimits

0x5188,	// (0x00050912) control_button_pane_g1

0x5194,	// (0x0005091e) control_button_pane_g2_ParamLimits

0x5194,	// (0x0005091e) control_button_pane_g2

0x51a0,	// (0x0005092a) control_button_pane_g3_ParamLimits

0x51a0,	// (0x0005092a) control_button_pane_g3

0x0002,

0xfbd7,	// (0x0005b361) control_button_pane_g_ParamLimits

0xfbd7,	// (0x0005b361) control_button_pane_g

0x51b4,	// (0x0005093e) control_button_pane_t1

0x51c2,	// (0x0005094c) control_button_pane_t2

0x0001,

0xfbde,	// (0x0005b368) control_button_pane_t

0x21dc,	// (0x0004d966) bg_button_pane_g1

0x21e4,	// (0x0004d96e) bg_button_pane_g2

0x21ec,	// (0x0004d976) bg_button_pane_g3

0x21f4,	// (0x0004d97e) bg_button_pane_g4

0x21fc,	// (0x0004d986) bg_button_pane_g5

0x2204,	// (0x0004d98e) bg_button_pane_g6

0x220c,	// (0x0004d996) bg_button_pane_g7

0x2214,	// (0x0004d99e) bg_button_pane_g8

0x221c,	// (0x0004d9a6) bg_button_pane_g9

0x0008,

0xf82b,	// (0x0005afb5) bg_button_pane_g

0x4777,	// (0x0004ff01) common_borders_pane_ParamLimits

0x4777,	// (0x0004ff01) common_borders_pane

0x5154,	// (0x000508de) eswt_control_pane_g1_copy1_ParamLimits

0x5154,	// (0x000508de) eswt_control_pane_g1_copy1

0x5161,	// (0x000508eb) eswt_control_pane_g2_copy1_ParamLimits

0x5161,	// (0x000508eb) eswt_control_pane_g2_copy1

0x516e,	// (0x000508f8) eswt_control_pane_g3_copy1_ParamLimits

0x516e,	// (0x000508f8) eswt_control_pane_g3_copy1

0x517b,	// (0x00050905) eswt_control_pane_g4_copy1_ParamLimits

0x517b,	// (0x00050905) eswt_control_pane_g4_copy1

0x47b2,	// (0x0004ff3c) bg_eswt_ctrl_canvas_pane_g1

0x4777,	// (0x0004ff01) common_borders_pane_cp2_ParamLimits

0x4777,	// (0x0004ff01) common_borders_pane_cp2

0x4777,	// (0x0004ff01) common_borders_pane_cp3_ParamLimits

0x4777,	// (0x0004ff01) common_borders_pane_cp3

0x51d0,	// (0x0005095a) separator_horizontal_pane

0x51d8,	// (0x00050962) separator_vertical_pane

0x5154,	// (0x000508de) eswt_control_pane_g1_copy2_ParamLimits

0x5154,	// (0x000508de) eswt_control_pane_g1_copy2

0x5161,	// (0x000508eb) eswt_control_pane_g2_copy2_ParamLimits

0x5161,	// (0x000508eb) eswt_control_pane_g2_copy2

0x516e,	// (0x000508f8) eswt_control_pane_g3_copy2_ParamLimits

0x516e,	// (0x000508f8) eswt_control_pane_g3_copy2

0x517b,	// (0x00050905) eswt_control_pane_g4_copy2_ParamLimits

0x517b,	// (0x00050905) eswt_control_pane_g4_copy2

0x8eb8,	// (0x00054642) common_borders_pane_cp4

0x51e1,	// (0x0005096b) separator_horizontal_pane_g1

0x51ea,	// (0x00050974) separator_horizontal_pane_g2

0x51f3,	// (0x0005097d) separator_horizontal_pane_g3

0x0002,

0xfbe3,	// (0x0005b36d) separator_horizontal_pane_g

0x5154,	// (0x000508de) eswt_control_pane_g1_copy3_ParamLimits

0x5154,	// (0x000508de) eswt_control_pane_g1_copy3

0x5161,	// (0x000508eb) eswt_control_pane_g2_copy3_ParamLimits

0x5161,	// (0x000508eb) eswt_control_pane_g2_copy3

0x516e,	// (0x000508f8) eswt_control_pane_g3_copy3_ParamLimits

0x516e,	// (0x000508f8) eswt_control_pane_g3_copy3

0x517b,	// (0x00050905) eswt_control_pane_g4_copy3_ParamLimits

0x517b,	// (0x00050905) eswt_control_pane_g4_copy3

0x8eb8,	// (0x00054642) common_borders_pane_cp5

0x51fc,	// (0x00050986) separator_vertical_pane_g1

0x5205,	// (0x0005098f) separator_vertical_pane_g2

0x520e,	// (0x00050998) separator_vertical_pane_g3

0x0002,

0xfbea,	// (0x0005b374) separator_vertical_pane_g

0x5154,	// (0x000508de) eswt_control_pane_g1_copy4_ParamLimits

0x5154,	// (0x000508de) eswt_control_pane_g1_copy4

0x5161,	// (0x000508eb) eswt_control_pane_g2_copy4_ParamLimits

0x5161,	// (0x000508eb) eswt_control_pane_g2_copy4

0x516e,	// (0x000508f8) eswt_control_pane_g3_copy4_ParamLimits

0x516e,	// (0x000508f8) eswt_control_pane_g3_copy4

0x517b,	// (0x00050905) eswt_control_pane_g4_copy4_ParamLimits

0x517b,	// (0x00050905) eswt_control_pane_g4_copy4

0xd2e5,	// (0x00058a6f) eswt_ctrl_combo_button_pane

0xd2ed,	// (0x00058a77) eswt_ctrl_input_pane

0xd2f5,	// (0x00058a7f) popup_choice_list_window_cp70

0xd2fd,	// (0x00058a87) eswt_ctrl_input_pane_t1

0x8eb8,	// (0x00054642) input_focus_pane_cp70

0x4777,	// (0x0004ff01) bg_button_pane_cp70_ParamLimits

0x4777,	// (0x0004ff01) bg_button_pane_cp70

0xd30b,	// (0x00058a95) eswt_ctrl_combo_button_pane_g1

0x5245,	// (0x000509cf) wait_bar_pane_cp70

0x2268,	// (0x0004d9f2) bg_popup_window_pane_cp70_ParamLimits

0x2268,	// (0x0004d9f2) bg_popup_window_pane_cp70

0x524d,	// (0x000509d7) popup_eswt_tasktip_window_t1

0x5263,	// (0x000509ed) wait_bar_pane_cp71_ParamLimits

0x5263,	// (0x000509ed) wait_bar_pane_cp71

0x526f,	// (0x000509f9) grid_eswt_app_pane

0xa1c8,	// (0x00055952) scroll_pane_cp70

0xd313,	// (0x00058a9d) cell_eswt_app_pane_ParamLimits

0xd313,	// (0x00058a9d) cell_eswt_app_pane

0xd33d,	// (0x00058ac7) cell_eswt_app_pane_g1_ParamLimits

0xd33d,	// (0x00058ac7) cell_eswt_app_pane_g1

0xd36c,	// (0x00058af6) cell_eswt_app_pane_g2_ParamLimits

0xd36c,	// (0x00058af6) cell_eswt_app_pane_g2

0x0001,

0xfbf1,	// (0x0005b37b) cell_eswt_app_pane_g_ParamLimits

0xfbf1,	// (0x0005b37b) cell_eswt_app_pane_g

0xd390,	// (0x00058b1a) cell_eswt_app_pane_t1_ParamLimits

0xd390,	// (0x00058b1a) cell_eswt_app_pane_t1

0x532d,	// (0x00050ab7) grid_highlight_pane_cp70_ParamLimits

0x532d,	// (0x00050ab7) grid_highlight_pane_cp70

0xc386,	// (0x00057b10) set_content_pane_g1

0xa64c,	// (0x00055dd6) status_small_volume_pane

0xb7d1,	// (0x00056f5b) status_small_volume_pane_g1

0xb7d9,	// (0x00056f63) volume_small2_pane

0xb7e2,	// (0x00056f6c) volume_small2_pane_g1

0xb7eb,	// (0x00056f75) volume_small2_pane_g2

0xb7f4,	// (0x00056f7e) volume_small2_pane_g3

0xb7fd,	// (0x00056f87) volume_small2_pane_g4

0xb806,	// (0x00056f90) volume_small2_pane_g5

0xb80f,	// (0x00056f99) volume_small2_pane_g6

0xb818,	// (0x00056fa2) volume_small2_pane_g7

0xb821,	// (0x00056fab) volume_small2_pane_g8

0xb82a,	// (0x00056fb4) volume_small2_pane_g9

0xb833,	// (0x00056fbd) volume_small2_pane_g10

0x0009,

0xfbf6,	// (0x0005b380) volume_small2_pane_g

0x4b6a,	// (0x000502f4) fep_vkb_top_text_pane_g1_ParamLimits

0xd205,	// (0x0005898f) fep_vkb_top_text_pane_t1_ParamLimits

0x4e35,	// (0x000505bf) popup_preview_fixed_window_g3_ParamLimits

0x4e35,	// (0x000505bf) popup_preview_fixed_window_g3

0xaed9,	// (0x00056663) popup_toolbar_trans_pane

0xcb0a,	// (0x00058294) aid_height_set_list_ParamLimits

0x35b7,	// (0x0004ed41) aid_size_parent_ParamLimits

0x9ec6,	// (0x00055650) list_highlight_pane_cp2_ParamLimits

0xc386,	// (0x00057b10) set_content_pane_g1_ParamLimits

0xcc72,	// (0x000583fc) list_single_image_pane_ParamLimits

0xcc72,	// (0x000583fc) list_single_image_pane

0xd3c2,	// (0x00058b4c) aid_size_cell_image_ParamLimits

0xd3c2,	// (0x00058b4c) aid_size_cell_image

0xd3cf,	// (0x00058b59) grid_single_image_pane_ParamLimits

0xd3cf,	// (0x00058b59) grid_single_image_pane

0xd269,	// (0x000589f3) list_single_image_pane_g1_ParamLimits

0xd269,	// (0x000589f3) list_single_image_pane_g1

0x4f44,	// (0x000506ce) list_single_image_pane_g2_ParamLimits

0x4f44,	// (0x000506ce) list_single_image_pane_g2

0x0001,

0xfc0b,	// (0x0005b395) list_single_image_pane_g_ParamLimits

0xfc0b,	// (0x0005b395) list_single_image_pane_g

0x5352,	// (0x00050adc) list_single_image_pane_t1_ParamLimits

0x5352,	// (0x00050adc) list_single_image_pane_t1

0xd3db,	// (0x00058b65) cell_image_list_pane_ParamLimits

0xd3db,	// (0x00058b65) cell_image_list_pane

0xd3ef,	// (0x00058b79) cell_image_list_pane_g1

0xd3f8,	// (0x00058b82) cell_image_list_pane_g2

0x0001,

0xfc10,	// (0x0005b39a) cell_image_list_pane_g

0xd401,	// (0x00058b8b) aid_size_cell_tb_trans_pane

0x9ce2,	// (0x0005546c) bg_tb_trans_pane

0xd413,	// (0x00058b9d) grid_tb_trans_pane

0x21dc,	// (0x0004d966) bg_tb_trans_pane_g1

0x21e4,	// (0x0004d96e) bg_tb_trans_pane_g2

0x21ec,	// (0x0004d976) bg_tb_trans_pane_g3

0x21f4,	// (0x0004d97e) bg_tb_trans_pane_g4

0x21fc,	// (0x0004d986) bg_tb_trans_pane_g5

0x2214,	// (0x0004d99e) bg_tb_trans_pane_g6

0x221c,	// (0x0004d9a6) bg_tb_trans_pane_g7

0x2204,	// (0x0004d98e) bg_tb_trans_pane_g8

0x220c,	// (0x0004d996) bg_tb_trans_pane_g9

0x0008,

0xfc15,	// (0x0005b39f) bg_tb_trans_pane_g

0xd427,	// (0x00058bb1) cell_toolbar_trans_pane_ParamLimits

0xd427,	// (0x00058bb1) cell_toolbar_trans_pane

0x47b2,	// (0x0004ff3c) cell_toolbar_trans_pane_g1

0xcf36,	// (0x000586c0) list_form2_midp_pane_t1

0xcf44,	// (0x000586ce) list_form2_midp_pane_t2

0x0001,

0xfabe,	// (0x0005b248) list_form2_midp_pane_t

0x4399,	// (0x0004fb23) scroll_pane_cp51_ParamLimits

0x4555,	// (0x0004fcdf) form2_midp_wait_pane_g1

0x455e,	// (0x0004fce8) form2_midp_wait_pane_g2

0x4567,	// (0x0004fcf1) form2_midp_wait_pane_g3

0x0002,

0xfad3,	// (0x0005b25d) form2_midp_wait_pane_g

0x939c,	// (0x00054b26) list_highlight_pane_cp21_ParamLimits

0x45af,	// (0x0004fd39) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x45be,	// (0x0004fd48) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x376b,	// (0x0004eef5) list_single_2graphic_im_pane_ParamLimits

0x376b,	// (0x0004eef5) list_single_2graphic_im_pane

0xd44d,	// (0x00058bd7) list_single_2graphic_im_pane_g1_ParamLimits

0xd44d,	// (0x00058bd7) list_single_2graphic_im_pane_g1

0xd45e,	// (0x00058be8) list_single_2graphic_im_pane_g2_ParamLimits

0xd45e,	// (0x00058be8) list_single_2graphic_im_pane_g2

0xd46a,	// (0x00058bf4) list_single_2graphic_im_pane_g3_ParamLimits

0xd46a,	// (0x00058bf4) list_single_2graphic_im_pane_g3

0x0003,

0xfc28,	// (0x0005b3b2) list_single_2graphic_im_pane_g_ParamLimits

0xfc28,	// (0x0005b3b2) list_single_2graphic_im_pane_g

0xd47e,	// (0x00058c08) list_single_2graphic_im_pane_t1_ParamLimits

0xd47e,	// (0x00058c08) list_single_2graphic_im_pane_t1

0x4e41,	// (0x000505cb) list_single_graphic_2heading_pane_fp_ParamLimits

0x4e41,	// (0x000505cb) list_single_graphic_2heading_pane_fp

0xecc5,	// (0x0005a44f) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xecc5,	// (0x0005a44f) list_single_graphic_2heading_pane_fp_g1

0x4e57,	// (0x000505e1) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x4e57,	// (0x000505e1) list_single_graphic_2heading_pane_fp_g2

0xd269,	// (0x000589f3) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xd269,	// (0x000589f3) list_single_graphic_2heading_pane_fp_g3

0x4f44,	// (0x000506ce) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x4f44,	// (0x000506ce) list_single_graphic_2heading_pane_fp_g4

0x4e63,	// (0x000505ed) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x4e63,	// (0x000505ed) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb56,	// (0x0005b2e0) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb56,	// (0x0005b2e0) list_single_graphic_2heading_pane_fp_g

0xede3,	// (0x0005a56d) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xede3,	// (0x0005a56d) list_single_graphic_2heading_pane_fp_t1

0xecfd,	// (0x0005a487) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xecfd,	// (0x0005a487) list_single_graphic_2heading_pane_fp_t2

0xedf9,	// (0x0005a583) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xedf9,	// (0x0005a583) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc31,	// (0x0005b3bb) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc31,	// (0x0005b3bb) list_single_graphic_2heading_pane_fp_t

0x483e,	// (0x0004ffc8) fep_hwr_write_pane_g5_ParamLimits

0x483e,	// (0x0004ffc8) fep_hwr_write_pane_g5

0x484a,	// (0x0004ffd4) fep_hwr_write_pane_g6_ParamLimits

0x484a,	// (0x0004ffd4) fep_hwr_write_pane_g6

0xd2c5,	// (0x00058a4f) eswt_shell_pane_ParamLimits

0x2268,	// (0x0004d9f2) bg_popup_window_pane_cp18_ParamLimits

0x514c,	// (0x000508d6) heading_pane_cp70

0x524d,	// (0x000509d7) popup_eswt_tasktip_window_t1_ParamLimits

0xaff6,	// (0x00056780) aid_touch_tab_arrow_left

0xb00c,	// (0x00056796) aid_touch_tab_arrow_right

0x9276,	// (0x00054a00) title_pane_g3_ParamLimits

0x9276,	// (0x00054a00) title_pane_g3

0x9ca1,	// (0x0005542b) set_value_pane_g1

0xaed9,	// (0x00056663) popup_toolbar_trans_pane_ParamLimits

0xd401,	// (0x00058b8b) aid_size_cell_tb_trans_pane_ParamLimits

0x9ce2,	// (0x0005546c) bg_tb_trans_pane_ParamLimits

0xd413,	// (0x00058b9d) grid_tb_trans_pane_ParamLimits

0x9706,	// (0x00054e90) cont_note_pane_ParamLimits

0x9706,	// (0x00054e90) cont_note_pane

0x9a78,	// (0x00055202) cont_snote2_single_text_pane_ParamLimits

0x9a78,	// (0x00055202) cont_snote2_single_text_pane

0x9a78,	// (0x00055202) cont_snote2_single_graphic_pane_ParamLimits

0x9a78,	// (0x00055202) cont_snote2_single_graphic_pane

0x2882,	// (0x0004e00c) cont_note_wait_pane_ParamLimits

0x2882,	// (0x0004e00c) cont_note_wait_pane

0x2882,	// (0x0004e00c) cont_note_image_pane_ParamLimits

0x2882,	// (0x0004e00c) cont_note_image_pane

0x5448,	// (0x00050bd2) popup_note2_window_g1_ParamLimits

0x5448,	// (0x00050bd2) popup_note2_window_g1

0xd4bc,	// (0x00058c46) popup_note2_window_t1_ParamLimits

0xd4bc,	// (0x00058c46) popup_note2_window_t1

0xd501,	// (0x00058c8b) popup_note2_window_t2_ParamLimits

0xd501,	// (0x00058c8b) popup_note2_window_t2

0xd546,	// (0x00058cd0) popup_note2_window_t3_ParamLimits

0xd546,	// (0x00058cd0) popup_note2_window_t3

0x5548,	// (0x00050cd2) popup_note2_window_t4_ParamLimits

0x5548,	// (0x00050cd2) popup_note2_window_t4

0x978a,	// (0x00054f14) popup_note2_window_t5_ParamLimits

0x978a,	// (0x00054f14) popup_note2_window_t5

0x0004,

0xfc3d,	// (0x0005b3c7) popup_note2_window_t_ParamLimits

0xfc3d,	// (0x0005b3c7) popup_note2_window_t

0x5577,	// (0x00050d01) popup_note2_image_window_g1_ParamLimits

0x5577,	// (0x00050d01) popup_note2_image_window_g1

0xd58b,	// (0x00058d15) popup_note2_image_window_g2_ParamLimits

0xd58b,	// (0x00058d15) popup_note2_image_window_g2

0x0001,

0xfc48,	// (0x0005b3d2) popup_note2_image_window_g_ParamLimits

0xfc48,	// (0x0005b3d2) popup_note2_image_window_g

0x5595,	// (0x00050d1f) popup_note2_image_window_t1_ParamLimits

0x5595,	// (0x00050d1f) popup_note2_image_window_t1

0x55ad,	// (0x00050d37) popup_note2_image_window_t2_ParamLimits

0x55ad,	// (0x00050d37) popup_note2_image_window_t2

0x55c5,	// (0x00050d4f) popup_note2_image_window_t3_ParamLimits

0x55c5,	// (0x00050d4f) popup_note2_image_window_t3

0x0002,

0xfc4d,	// (0x0005b3d7) popup_note2_image_window_t_ParamLimits

0xfc4d,	// (0x0005b3d7) popup_note2_image_window_t

0x2890,	// (0x0004e01a) popup_note2_wait_window_g1_ParamLimits

0x2890,	// (0x0004e01a) popup_note2_wait_window_g1

0x289c,	// (0x0004e026) popup_note2_wait_window_g2_ParamLimits

0x289c,	// (0x0004e026) popup_note2_wait_window_g2

0x28a8,	// (0x0004e032) popup_note2_wait_window_g3_ParamLimits

0x28a8,	// (0x0004e032) popup_note2_wait_window_g3

0x0002,

0xf80d,	// (0x0005af97) popup_note2_wait_window_g_ParamLimits

0xf80d,	// (0x0005af97) popup_note2_wait_window_g

0x55e1,	// (0x00050d6b) popup_note2_wait_window_t1_ParamLimits

0x55e1,	// (0x00050d6b) popup_note2_wait_window_t1

0x55ff,	// (0x00050d89) popup_note2_wait_window_t2_ParamLimits

0x55ff,	// (0x00050d89) popup_note2_wait_window_t2

0x561d,	// (0x00050da7) popup_note2_wait_window_t3_ParamLimits

0x561d,	// (0x00050da7) popup_note2_wait_window_t3

0x562f,	// (0x00050db9) popup_note2_wait_window_t4_ParamLimits

0x562f,	// (0x00050db9) popup_note2_wait_window_t4

0x0003,

0xfc54,	// (0x0005b3de) popup_note2_wait_window_t_ParamLimits

0xfc54,	// (0x0005b3de) popup_note2_wait_window_t

0x5641,	// (0x00050dcb) wait_bar2_pane_ParamLimits

0x5641,	// (0x00050dcb) wait_bar2_pane

0x5659,	// (0x00050de3) popup_snote2_single_text_window_g1_ParamLimits

0x5659,	// (0x00050de3) popup_snote2_single_text_window_g1

0x5681,	// (0x00050e0b) popup_snote2_single_text_window_t1_ParamLimits

0x5681,	// (0x00050e0b) popup_snote2_single_text_window_t1

0x56cd,	// (0x00050e57) popup_snote2_single_text_window_t2_ParamLimits

0x56cd,	// (0x00050e57) popup_snote2_single_text_window_t2

0x5719,	// (0x00050ea3) popup_snote2_single_text_window_t3_ParamLimits

0x5719,	// (0x00050ea3) popup_snote2_single_text_window_t3

0x575a,	// (0x00050ee4) popup_snote2_single_text_window_t4_ParamLimits

0x575a,	// (0x00050ee4) popup_snote2_single_text_window_t4

0x5790,	// (0x00050f1a) popup_snote2_single_text_window_t5_ParamLimits

0x5790,	// (0x00050f1a) popup_snote2_single_text_window_t5

0x0004,

0xfc5d,	// (0x0005b3e7) popup_snote2_single_text_window_t_ParamLimits

0xfc5d,	// (0x0005b3e7) popup_snote2_single_text_window_t

0xd59d,	// (0x00058d27) popup_snote2_single_graphic_window_g1_ParamLimits

0xd59d,	// (0x00058d27) popup_snote2_single_graphic_window_g1

0x57e3,	// (0x00050f6d) popup_snote2_single_graphic_window_g2_ParamLimits

0x57e3,	// (0x00050f6d) popup_snote2_single_graphic_window_g2

0x0001,

0xfc68,	// (0x0005b3f2) popup_snote2_single_graphic_window_g_ParamLimits

0xfc68,	// (0x0005b3f2) popup_snote2_single_graphic_window_g

0x580b,	// (0x00050f95) popup_snote2_single_graphic_window_t1_ParamLimits

0x580b,	// (0x00050f95) popup_snote2_single_graphic_window_t1

0x5857,	// (0x00050fe1) popup_snote2_single_graphic_window_t2_ParamLimits

0x5857,	// (0x00050fe1) popup_snote2_single_graphic_window_t2

0x5719,	// (0x00050ea3) popup_snote2_single_graphic_window_t3_ParamLimits

0x5719,	// (0x00050ea3) popup_snote2_single_graphic_window_t3

0x575a,	// (0x00050ee4) popup_snote2_single_graphic_window_t4_ParamLimits

0x575a,	// (0x00050ee4) popup_snote2_single_graphic_window_t4

0x5790,	// (0x00050f1a) popup_snote2_single_graphic_window_t5_ParamLimits

0x5790,	// (0x00050f1a) popup_snote2_single_graphic_window_t5

0x0004,

0xfc6d,	// (0x0005b3f7) popup_snote2_single_graphic_window_t_ParamLimits

0xfc6d,	// (0x0005b3f7) popup_snote2_single_graphic_window_t

0x4256,	// (0x0004f9e0) clock_nsta_pane_cp2_t1

0x4256,	// (0x0004f9e0) clock_nsta_pane_cp2_t2

0x0001,

0xfa94,	// (0x0005b21e) clock_nsta_pane_cp2_t

0xe893,	// (0x0005a01d) form_field_data_wide_pane_g1_ParamLimits

0x9cf0,	// (0x0005547a) form_field_data_wide_pane_g2_ParamLimits

0x9cf0,	// (0x0005547a) form_field_data_wide_pane_g2

0x9cfc,	// (0x00055486) form_field_data_wide_pane_g3_ParamLimits

0x9cfc,	// (0x00055486) form_field_data_wide_pane_g3

0x0002,

0xf64c,	// (0x0005add6) form_field_data_wide_pane_g_ParamLimits

0xf64c,	// (0x0005add6) form_field_data_wide_pane_g

0xce57,	// (0x000585e1) grid_touch_3_pane_ParamLimits

0xce57,	// (0x000585e1) grid_touch_3_pane

0xd5c5,	// (0x00058d4f) cell_touch_3_pane_ParamLimits

0xd5c5,	// (0x00058d4f) cell_touch_3_pane

0x47b2,	// (0x0004ff3c) cell_touch_3_pane_g1

0x47b2,	// (0x0004ff3c) cell_touch_3_pane_g2

0x0001,

0xfb19,	// (0x0005b2a3) cell_touch_3_pane_g

0x97e2,	// (0x00054f6c) cont_query_data_pane

0x97ea,	// (0x00054f74) cont_query_data_pane_cp1

0x58d1,	// (0x0005105b) button_value_adjust_pane_cp7

0x58d9,	// (0x00051063) query_popup_pane_cp3

0xc083,	// (0x0005780d) bg_popup_sub_pane_cp22_ParamLimits

0xa3cd,	// (0x00055b57) navi_navi_volume_pane_cp2

0xa3dc,	// (0x00055b66) popup_side_volume_key_window_g2

0xa3eb,	// (0x00055b75) popup_side_volume_key_window_g3

0x0002,

0xf6e2,	// (0x0005ae6c) popup_side_volume_key_window_g

0xa3fa,	// (0x00055b84) popup_side_volume_key_window_t2

0x0001,

0xf6e9,	// (0x0005ae73) popup_side_volume_key_window_t

0xa4bf,	// (0x00055c49) popup_side_volume_key_window_ParamLimits

0x87ea,	// (0x00053f74) list_double_graphic_pane_g4_ParamLimits

0x87ea,	// (0x00053f74) list_double_graphic_pane_g4

0xcc5e,	// (0x000583e8) list_single_2heading_msg_pane_ParamLimits

0xcc5e,	// (0x000583e8) list_single_2heading_msg_pane

0xb83c,	// (0x00056fc6) list_single_2heading_msg_pane_g1_ParamLimits

0xb83c,	// (0x00056fc6) list_single_2heading_msg_pane_g1

0xb848,	// (0x00056fd2) list_single_2heading_msg_pane_g2_ParamLimits

0xb848,	// (0x00056fd2) list_single_2heading_msg_pane_g2

0xb85b,	// (0x00056fe5) list_single_2heading_msg_pane_g3_ParamLimits

0xb85b,	// (0x00056fe5) list_single_2heading_msg_pane_g3

0xb867,	// (0x00056ff1) list_single_2heading_msg_pane_g4_ParamLimits

0xb867,	// (0x00056ff1) list_single_2heading_msg_pane_g4

0x0003,

0xfc78,	// (0x0005b402) list_single_2heading_msg_pane_g_ParamLimits

0xfc78,	// (0x0005b402) list_single_2heading_msg_pane_g

0x8d65,	// (0x000544ef) list_single_2heading_msg_pane_t1_ParamLimits

0x8d65,	// (0x000544ef) list_single_2heading_msg_pane_t1

0x8d8d,	// (0x00054517) list_single_2heading_msg_pane_t2_ParamLimits

0x8d8d,	// (0x00054517) list_single_2heading_msg_pane_t2

0x8df8,	// (0x00054582) list_single_2heading_msg_pane_t3_ParamLimits

0x8df8,	// (0x00054582) list_single_2heading_msg_pane_t3

0xee19,	// (0x0005a5a3) list_single_2heading_msg_pane_t4_ParamLimits

0xee19,	// (0x0005a5a3) list_single_2heading_msg_pane_t4

0x0003,

0xfc81,	// (0x0005b40b) list_single_2heading_msg_pane_t_ParamLimits

0xfc81,	// (0x0005b40b) list_single_2heading_msg_pane_t

0x9282,	// (0x00054a0c) title_pane_g4_ParamLimits

0x9282,	// (0x00054a0c) title_pane_g4

0xf142,	// (0x0005a8cc) title_pane_stacon_g3_ParamLimits

0xf142,	// (0x0005a8cc) title_pane_stacon_g3

0x540b,	// (0x00050b95) list_single_2graphic_im_pane_g4_ParamLimits

0x540b,	// (0x00050b95) list_single_2graphic_im_pane_g4

0xc9af,	// (0x00058139) popup_side_volume_key_window_cp

0x3a88,	// (0x0004f212) main_idle_act2_pane_t1

0x0972,	// (0x0004c0fc) toolbar_button_pane_g10

0x9c03,	// (0x0005538d) popup_toolbar_window_cp1

0x4247,	// (0x0004f9d1) clock_nsta_pane_cp_t1

0x4247,	// (0x0004f9d1) clock_nsta_pane_cp_t2

0x0001,

0xfa8f,	// (0x0005b219) clock_nsta_pane_cp_t

0xa3cd,	// (0x00055b57) navi_navi_volume_pane_cp2_ParamLimits

0xf316,	// (0x0005aaa0) popup_side_volume_key_window_g1_ParamLimits

0xa3dc,	// (0x00055b66) popup_side_volume_key_window_g2_ParamLimits

0xa3eb,	// (0x00055b75) popup_side_volume_key_window_g3_ParamLimits

0xf6e2,	// (0x0005ae6c) popup_side_volume_key_window_g_ParamLimits

0x0f3f,	// (0x0004c6c9) fep_hwr_aid_pane

0xd0b9,	// (0x00058843) bg_fep_hwr_top_pane_g4_ParamLimits

0x480e,	// (0x0004ff98) fep_hwr_top_pane_g1_ParamLimits

0x4820,	// (0x0004ffaa) fep_hwr_top_pane_g2_ParamLimits

0x0ff8,	// (0x0004c782) fep_hwr_top_pane_g3_ParamLimits

0xfae4,	// (0x0005b26e) fep_hwr_top_pane_g_ParamLimits

0x100d,	// (0x0004c797) fep_hwr_top_text_pane_ParamLimits

0x308c,	// (0x0004e816) aid_touch_tab_arrow_arrow_2

0x3095,	// (0x0004e81f) aid_touch_tab_arrow_left_2

0x0f53,	// (0x0004c6dd) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x0f8a,	// (0x0004c714) fep_hwr_prediction_pane

0x4979,	// (0x00050103) fep_vkb_prediction_pane

0xd1e5,	// (0x0005896f) fep_vkb_side_pane_g3_ParamLimits

0xd1e5,	// (0x0005896f) fep_vkb_side_pane_g3

0x4a22,	// (0x000501ac) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x4eb7,	// (0x00050641) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x4ec4,	// (0x0005064e) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb8e,	// (0x0005b318) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x58fe,	// (0x00051088) fep_hwr_prediction_pane_g1

0x133a,	// (0x0004cac4) fep_hwr_prediction_pane_g2

0x1342,	// (0x0004cacc) fep_hwr_prediction_pane_g3

0x134a,	// (0x0004cad4) fep_hwr_prediction_pane_g4

0x0003,

0xfc8a,	// (0x0005b414) fep_hwr_prediction_pane_g

0x58fe,	// (0x00051088) fep_vkb_prediction_pane_g1

0x5908,	// (0x00051092) fep_vkb_prediction_pane_g2

0x5910,	// (0x0005109a) fep_vkb_prediction_pane_g3

0x5918,	// (0x000510a2) fep_vkb_prediction_pane_g4

0x0003,

0xfc93,	// (0x0005b41d) fep_vkb_prediction_pane_g

0xb698,	// (0x00056e22) slider_set_pane_g3

0xb6ac,	// (0x00056e36) slider_set_pane_g4

0xb6c4,	// (0x00056e4e) slider_set_pane_g5

0xb698,	// (0x00056e22) slider_set_pane_g6

0xb6da,	// (0x00056e64) slider_set_pane_g7

0x3718,	// (0x0004eea2) slider_form_pane_g3

0x3721,	// (0x0004eeab) slider_form_pane_g4

0x3729,	// (0x0004eeb3) slider_form_pane_g5

0x3718,	// (0x0004eea2) slider_form_pane_g6

0xcc55,	// (0x000583df) slider_form_pane_g7

0x3d34,	// (0x0004f4be) slider_set_pane_vc_g3

0x3d3d,	// (0x0004f4c7) slider_set_pane_vc_g4

0x3d46,	// (0x0004f4d0) slider_set_pane_vc_g5

0x3d34,	// (0x0004f4be) slider_set_pane_vc_g6

0x3d4f,	// (0x0004f4d9) slider_set_pane_vc_g7

0x3f05,	// (0x0004f68f) slider_form_pane_vc_g1

0x3f0e,	// (0x0004f698) slider_form_pane_vc_g2

0x3f17,	// (0x0004f6a1) slider_form_pane_vc_g3

0x3f05,	// (0x0004f68f) slider_form_pane_vc_g4

0x3f20,	// (0x0004f6aa) slider_form_pane_vc_g5

0x0004,

0xfa61,	// (0x0005b1eb) slider_form_pane_vc_g

0x8eb8,	// (0x00054642) main_idle_act3_pane

0x5920,	// (0x000510aa) ai3_links_pane

0xd60e,	// (0x00058d98) popup_ai3_data_window_ParamLimits

0xd60e,	// (0x00058d98) popup_ai3_data_window

0x8eb8,	// (0x00054642) grid_ai3_links_pane

0xd626,	// (0x00058db0) cell_ai3_links_pane_ParamLimits

0xd626,	// (0x00058db0) cell_ai3_links_pane

0x5959,	// (0x000510e3) bg_popup_sub_pane_cp11

0x5966,	// (0x000510f0) cell_ai3_links_pane_g1

0x8eb8,	// (0x00054642) bg_popup_sub_pane_cp12

0x598b,	// (0x00051115) heading_ai3_data_pane

0x5993,	// (0x0005111d) list_ai3_gene_pane

0x599f,	// (0x00051129) popup_ai3_data_window_g1

0x59a7,	// (0x00051131) heading_ai3_data_pane_g1

0x59af,	// (0x00051139) heading_ai3_data_pane_t1

0xd640,	// (0x00058dca) list_double_ai3_gene_pane_ParamLimits

0xd640,	// (0x00058dca) list_double_ai3_gene_pane

0x59ca,	// (0x00051154) list_single_ai3_gene_pane_ParamLimits

0x59ca,	// (0x00051154) list_single_ai3_gene_pane

0x4777,	// (0x0004ff01) list_highlight_pane_cp7_ParamLimits

0x4777,	// (0x0004ff01) list_highlight_pane_cp7

0x59d7,	// (0x00051161) list_single_a13_gene_pane_t1_ParamLimits

0x59d7,	// (0x00051161) list_single_a13_gene_pane_t1

0x59ee,	// (0x00051178) list_single_ai3_gene_pane_g1

0x59f7,	// (0x00051181) list_single_ai3_gene_pane_g2

0x0001,

0xfc9c,	// (0x0005b426) list_single_ai3_gene_pane_g

0x59ff,	// (0x00051189) list_double_ai3_gene_pane_g1_ParamLimits

0x59ff,	// (0x00051189) list_double_ai3_gene_pane_g1

0xd64d,	// (0x00058dd7) list_double_ai3_gene_pane_t1_ParamLimits

0xd64d,	// (0x00058dd7) list_double_ai3_gene_pane_t1

0x5a27,	// (0x000511b1) list_double_ai3_gene_pane_t2_ParamLimits

0x5a27,	// (0x000511b1) list_double_ai3_gene_pane_t2

0x5a3c,	// (0x000511c6) list_double_ai3_gene_pane_t3_ParamLimits

0x5a3c,	// (0x000511c6) list_double_ai3_gene_pane_t3

0x0002,

0xfca1,	// (0x0005b42b) list_double_ai3_gene_pane_t_ParamLimits

0xfca1,	// (0x0005b42b) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xee0f,	// (0x0005a599) aid_size_min_col_2

0xd5f8,	// (0x00058d82) aid_size_min_msg_ParamLimits

0xd5f8,	// (0x00058d82) aid_size_min_msg

0xd1f9,	// (0x00058983) fep_vkb_top_text_pane_g2_ParamLimits

0xd1f9,	// (0x00058983) fep_vkb_top_text_pane_g2

0x0001,

0xfb14,	// (0x0005b29e) fep_vkb_top_text_pane_g_ParamLimits

0xfb14,	// (0x0005b29e) fep_vkb_top_text_pane_g

0x8eb8,	// (0x00054642) main_hc_apps_shell_pane

0x5a59,	// (0x000511e3) grid_hc_apps_pane_ParamLimits

0x5a59,	// (0x000511e3) grid_hc_apps_pane

0x5a6b,	// (0x000511f5) list_hc_apps_pane

0x5a73,	// (0x000511fd) scroll_pane_cp37_ParamLimits

0x5a73,	// (0x000511fd) scroll_pane_cp37

0xd669,	// (0x00058df3) cell_hc_apps_pane_ParamLimits

0xd669,	// (0x00058df3) cell_hc_apps_pane

0xd727,	// (0x00058eb1) cell_hc_apps_pane_g1_ParamLimits

0xd727,	// (0x00058eb1) cell_hc_apps_pane_g1

0x5b5d,	// (0x000512e7) cell_hc_apps_pane_g2_ParamLimits

0x5b5d,	// (0x000512e7) cell_hc_apps_pane_g2

0x5b79,	// (0x00051303) cell_hc_apps_pane_g3_ParamLimits

0x5b79,	// (0x00051303) cell_hc_apps_pane_g3

0x0002,

0xfca8,	// (0x0005b432) cell_hc_apps_pane_g_ParamLimits

0xfca8,	// (0x0005b432) cell_hc_apps_pane_g

0xd753,	// (0x00058edd) cell_hc_apps_pane_t1_ParamLimits

0xd753,	// (0x00058edd) cell_hc_apps_pane_t1

0x9706,	// (0x00054e90) grid_highlight_pane_cp10_ParamLimits

0x9706,	// (0x00054e90) grid_highlight_pane_cp10

0xd791,	// (0x00058f1b) list_single_hc_apps_pane_ParamLimits

0xd791,	// (0x00058f1b) list_single_hc_apps_pane

0xd7c1,	// (0x00058f4b) list_single_hc_apps_pane_g1

0xb87f,	// (0x00057009) list_single_hc_apps_pane_g2

0x0001,

0xfcaf,	// (0x0005b439) list_single_hc_apps_pane_g

0xb898,	// (0x00057022) list_single_hc_apps_pane_g2_copy1

0x8e66,	// (0x000545f0) list_single_hc_apps_pane_t1

0x939c,	// (0x00054b26) bg_set_opt_pane_cp_ParamLimits

0x93aa,	// (0x00054b34) setting_slider_pane_t1_ParamLimits

0x93c3,	// (0x00054b4d) setting_slider_pane_t2_ParamLimits

0x93dd,	// (0x00054b67) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x0005acc3) setting_slider_pane_t_ParamLimits

0x93f5,	// (0x00054b7f) slider_set_pane_ParamLimits

0xf51a,	// (0x0005aca4) control_pane_g5_ParamLimits

0xf51a,	// (0x0005aca4) control_pane_g5

0xcad7,	// (0x00058261) slider_set_pane_g1_ParamLimits

0x0c40,	// (0x0004c3ca) slider_set_pane_g2_ParamLimits

0xb698,	// (0x00056e22) slider_set_pane_g3_ParamLimits

0xb6ac,	// (0x00056e36) slider_set_pane_g4_ParamLimits

0xb6c4,	// (0x00056e4e) slider_set_pane_g5_ParamLimits

0xb698,	// (0x00056e22) slider_set_pane_g6_ParamLimits

0xb6da,	// (0x00056e64) slider_set_pane_g7_ParamLimits

0xf929,	// (0x0005b0b3) slider_set_pane_g_ParamLimits

0xc331,	// (0x00057abb) navi_icon_text_pane_ParamLimits

0xafbf,	// (0x00056749) aid_fill_nsta_2_ParamLimits

0xaff6,	// (0x00056780) aid_touch_tab_arrow_left_ParamLimits

0xb00c,	// (0x00056796) aid_touch_tab_arrow_right_ParamLimits

0xb0a7,	// (0x00056831) clock_nsta_pane_ParamLimits

0x306e,	// (0x0004e7f8) navi_icon_pane_g1_ParamLimits

0x307a,	// (0x0004e804) navi_text_pane_t1_ParamLimits

0x4357,	// (0x0004fae1) navi_icon_text_pane_g1_ParamLimits

0x4363,	// (0x0004faed) navi_icon_text_pane_t1_ParamLimits

0xd7c1,	// (0x00058f4b) list_single_hc_apps_pane_g1_ParamLimits

0xb87f,	// (0x00057009) list_single_hc_apps_pane_g2_ParamLimits

0xfcaf,	// (0x0005b439) list_single_hc_apps_pane_g_ParamLimits

0xb898,	// (0x00057022) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x8e66,	// (0x000545f0) list_single_hc_apps_pane_t1_ParamLimits

0x917b,	// (0x00054905) popup_toolbar2_fixed_window_ParamLimits

0x917b,	// (0x00054905) popup_toolbar2_fixed_window

0xaecf,	// (0x00056659) popup_toolbar2_float_window

0x8eb8,	// (0x00054642) bg_popup_sub_pane_cp27

0x5c57,	// (0x000513e1) grid_toolbar2_float_pane

0x8eb8,	// (0x00054642) bg_popup_sub_pane_cp26

0x5c57,	// (0x000513e1) grid_toolbar2_fixed_pane

0xd7da,	// (0x00058f64) cell_toolbar2_fixed_pane_ParamLimits

0xd7da,	// (0x00058f64) cell_toolbar2_fixed_pane

0xd7f4,	// (0x00058f7e) cell_toolbar2_fixed_pane_g1

0x215c,	// (0x0004d8e6) toolbar2_fixed_button_pane

0x21dc,	// (0x0004d966) toolbar2_fixed_button_pane_g1

0x21e4,	// (0x0004d96e) toolbar2_fixed_button_pane_g2

0x21ec,	// (0x0004d976) toolbar2_fixed_button_pane_g3

0x21f4,	// (0x0004d97e) toolbar2_fixed_button_pane_g4

0x21fc,	// (0x0004d986) toolbar2_fixed_button_pane_g5

0x2204,	// (0x0004d98e) toolbar2_fixed_button_pane_g6

0x220c,	// (0x0004d996) toolbar2_fixed_button_pane_g7

0x2214,	// (0x0004d99e) toolbar2_fixed_button_pane_g8

0x221c,	// (0x0004d9a6) toolbar2_fixed_button_pane_g9

0x0008,

0xf82b,	// (0x0005afb5) toolbar2_fixed_button_pane_g

0x5c78,	// (0x00051402) cell_toolbar2_float_pane_ParamLimits

0x5c78,	// (0x00051402) cell_toolbar2_float_pane

0x5c89,	// (0x00051413) cell_toolbar2_float_pane_g1

0x215c,	// (0x0004d8e6) toolbar2_fixed_button_pane_cp

0xd0e1,	// (0x0005886b) fep_vkb_accented_list_pane_ParamLimits

0xd0e1,	// (0x0005886b) fep_vkb_accented_list_pane

0x115b,	// (0x0004c8e5) bg_popup_fep_shadow_pane_g9

0xc480,	// (0x00057c0a) bg_popup_fep_shadow_pane_cp3

0x9e47,	// (0x000555d1) list_accented_list_pane

0x5c92,	// (0x0005141c) list_single_accented_list_pane_ParamLimits

0x5c92,	// (0x0005141c) list_single_accented_list_pane

0xc480,	// (0x00057c0a) list_highlight_pane_cp10

0x5ca3,	// (0x0005142d) list_single_accented_list_pane_t1

0xadf9,	// (0x00056583) popup_slider_window_ParamLimits

0xadf9,	// (0x00056583) popup_slider_window

0x58e1,	// (0x0005106b) aid_indentation_list_msg

0xd8e5,	// (0x0005906f) bg_popup_window_pane_cp19

0x5dc9,	// (0x00051553) popup_slider_window_g1

0x5de5,	// (0x0005156f) popup_slider_window_g2

0x5e01,	// (0x0005158b) popup_slider_window_g3

0x0005,

0xfcb4,	// (0x0005b43e) popup_slider_window_g

0x5e67,	// (0x000515f1) popup_slider_window_t1

0x5edb,	// (0x00051665) small_volume_slider_vertical_pane

0x47b2,	// (0x0004ff3c) small_volume_slider_vertical_pane_g1

0x47b2,	// (0x0004ff3c) small_volume_slider_vertical_pane_g2

0x5ef7,	// (0x00051681) small_volume_slider_vertical_pane_g3

0x0002,

0xfcc6,	// (0x0005b450) small_volume_slider_vertical_pane_g

0x8f70,	// (0x000546fa) area_side_right_pane_ParamLimits

0x8f70,	// (0x000546fa) area_side_right_pane

0xb8b4,	// (0x0005703e) aid_size_side_button_ParamLimits

0xb8b4,	// (0x0005703e) aid_size_side_button

0xb8cd,	// (0x00057057) grid_sctrl_middle_pane_ParamLimits

0xb8cd,	// (0x00057057) grid_sctrl_middle_pane

0x13ba,	// (0x0004cb44) sctrl_sk_bottom_pane

0x13cb,	// (0x0004cb55) sctrl_sk_top_pane

0x13dd,	// (0x0004cb67) aid_touch_sctrl_top

0x9706,	// (0x00054e90) bg_sctrl_sk_pane_ParamLimits

0x9706,	// (0x00054e90) bg_sctrl_sk_pane

0x13ea,	// (0x0004cb74) sctrl_sk_top_pane_g1

0x13f7,	// (0x0004cb81) sctrl_sk_top_pane_t1

0x13dd,	// (0x0004cb67) aid_touch_sctrl_bottom

0x9706,	// (0x00054e90) bg_sctrl_sk_pane_cp_ParamLimits

0x9706,	// (0x00054e90) bg_sctrl_sk_pane_cp

0x1412,	// (0x0004cb9c) sctrl_sk_bottom_pane_g1

0x13f7,	// (0x0004cb81) sctrl_sk_bottom_pane_t1

0xb8e7,	// (0x00057071) cell_sctrl_middle_pane_ParamLimits

0xb8e7,	// (0x00057071) cell_sctrl_middle_pane

0xb8f8,	// (0x00057082) aid_touch_sctrl_middle_ParamLimits

0xb8f8,	// (0x00057082) aid_touch_sctrl_middle

0xb905,	// (0x0005708f) bg_sctrl_middle_pane_ParamLimits

0xb905,	// (0x0005708f) bg_sctrl_middle_pane

0x5f7f,	// (0x00051709) cell_sctrl_middle_pane_g1_ParamLimits

0x5f7f,	// (0x00051709) cell_sctrl_middle_pane_g1

0xb913,	// (0x0005709d) cell_sctrl_middle_pane_g2_ParamLimits

0xb913,	// (0x0005709d) cell_sctrl_middle_pane_g2

0x0001,

0xfcd2,	// (0x0005b45c) cell_sctrl_middle_pane_g_ParamLimits

0xfcd2,	// (0x0005b45c) cell_sctrl_middle_pane_g

0x21dc,	// (0x0004d966) bg_sctrl_middle_pane_g1

0x21e4,	// (0x0004d96e) bg_sctrl_middle_pane_g2

0x21ec,	// (0x0004d976) bg_sctrl_middle_pane_g3

0x21f4,	// (0x0004d97e) bg_sctrl_middle_pane_g4

0x21fc,	// (0x0004d986) bg_sctrl_middle_pane_g5

0x2204,	// (0x0004d98e) bg_sctrl_middle_pane_g6

0x220c,	// (0x0004d996) bg_sctrl_middle_pane_g7

0x2214,	// (0x0004d99e) bg_sctrl_middle_pane_g8

0x0007,

0xfcd7,	// (0x0005b461) bg_sctrl_middle_pane_g

0x221c,	// (0x0004d9a6) bg_sctrl_middle_pane_g8_copy1

0x21dc,	// (0x0004d966) bg_sctrl_sk_pane_g1

0x21e4,	// (0x0004d96e) bg_sctrl_sk_pane_g2

0x21ec,	// (0x0004d976) bg_sctrl_sk_pane_g3

0x0008,

0xf82b,	// (0x0005afb5) bg_sctrl_sk_pane_g

0x9bc9,	// (0x00055353) aid_size_touch_scroll_bar

0x21f4,	// (0x0004d97e) bg_sctrl_sk_pane_g4

0x21fc,	// (0x0004d986) bg_sctrl_sk_pane_g5

0x2204,	// (0x0004d98e) bg_sctrl_sk_pane_g6

0x220c,	// (0x0004d996) bg_sctrl_sk_pane_g7

0x2214,	// (0x0004d99e) bg_sctrl_sk_pane_g8

0x221c,	// (0x0004d9a6) bg_sctrl_sk_pane_g9

0x0102,	// (0x0004b88c) popup_fep_china_hwr2_fs_candidate_window

0xa8bf,	// (0x00056049) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xa8bf,	// (0x00056049) popup_fep_china_hwr2_fs_control_window

0x4a22,	// (0x000501ac) sctrl_sk_top_pane_g2

0x0001,

0xfccd,	// (0x0005b457) sctrl_sk_top_pane_g

0xd97b,	// (0x00059105) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd97b,	// (0x00059105) aid_fep_china_hwr2_fs_cell

0xd98f,	// (0x00059119) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd98f,	// (0x00059119) bg_popup_fep_shadow_pane_cp4

0xd9a6,	// (0x00059130) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd9a6,	// (0x00059130) bg_popup_fep_shadow_pane_cp5

0xd9b8,	// (0x00059142) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd9b8,	// (0x00059142) popup_fep_china_hwr2_fs_control_bar_grid

0xd9cc,	// (0x00059156) popup_fep_china_hwr2_fs_control_funtion_grid

0x5f53,	// (0x000516dd) aid_fep_china_hwr2_fs_candi_cell

0x8eb8,	// (0x00054642) bg_popup_fep_shadow_pane_cp6

0x5f5d,	// (0x000516e7) popup_fep_china_hwr2_fs_candidate_grid

0xd9d4,	// (0x0005915e) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd9d4,	// (0x0005915e) cell_fep_china_hwr2_fs_funtion_grid

0x47b2,	// (0x0004ff3c) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x5f7f,	// (0x00051709) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x5f7f,	// (0x00051709) cell_fep_china_hwr2_fs_funtion_grid_g1

0x5f8d,	// (0x00051717) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x5f8d,	// (0x00051717) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfce8,	// (0x0005b472) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfce8,	// (0x0005b472) cell_fep_china_hwr2_fs_funtion_grid_g

0xd9ec,	// (0x00059176) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd9ec,	// (0x00059176) cell_fep_china_hwr2_fs_funtion_grid_t1

0xda01,	// (0x0005918b) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xda01,	// (0x0005918b) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfced,	// (0x0005b477) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfced,	// (0x0005b477) cell_fep_china_hwr2_fs_funtion_grid_t

0x5fd4,	// (0x0005175e) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x5fdc,	// (0x00051766) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x5fe4,	// (0x0005176e) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfcf2,	// (0x0005b47c) popup_fep_china_hwr2_fs_control_bar_grid_g

0x5fec,	// (0x00051776) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x5fec,	// (0x00051776) cell_fep_china_hwr2_fs_candidate_grid

0x6005,	// (0x0005178f) popup_fep_china_hwr2_fs_candidate_grid_g20

0x600d,	// (0x00051797) popup_fep_china_hwr2_fs_candidate_grid_g21

0x47b2,	// (0x0004ff3c) cell_fep_china_hwr2_fs_candidate_grid_g1

0x47b2,	// (0x0004ff3c) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb19,	// (0x0005b2a3) cell_fep_china_hwr2_fs_candidate_grid_g

0x6015,	// (0x0005179f) cell_fep_china_hwr2_fs_candidate_grid_t1

0x0701,	// (0x0004be8b) clock_nsta_pane_cp_24_ParamLimits

0x0701,	// (0x0004be8b) clock_nsta_pane_cp_24

0x077f,	// (0x0004bf09) indicator_nsta_pane_cp_24_ParamLimits

0x077f,	// (0x0004bf09) indicator_nsta_pane_cp_24

0x2eea,	// (0x0004e674) heading_pane_g1

0x0001,

0xf890,	// (0x0005b01a) heading_pane_g

0x38d1,	// (0x0004f05b) grid_sct_catagory_button_pane

0x3901,	// (0x0004f08b) scroll_pane_cp5_ParamLimits

0x43a5,	// (0x0004fb2f) button_value_adjust_pane_cp5_ParamLimits

0x43a5,	// (0x0004fb2f) button_value_adjust_pane_cp5

0x4484,	// (0x0004fc0e) form2_midp_time_pane_ParamLimits

0x6023,	// (0x000517ad) cell_sct_catagory_button_pane_ParamLimits

0x6023,	// (0x000517ad) cell_sct_catagory_button_pane

0x4777,	// (0x0004ff01) bg_button_pane_cp01_ParamLimits

0x4777,	// (0x0004ff01) bg_button_pane_cp01

0x47b2,	// (0x0004ff3c) cell_sct_catagory_button_pane_g1

0xae72,	// (0x000565fc) popup_tb_extension_window

0xda1d,	// (0x000591a7) aid_size_cell_ext_ParamLimits

0xda1d,	// (0x000591a7) aid_size_cell_ext

0x9a78,	// (0x00055202) bg_tb_trans_pane_cp1_ParamLimits

0x9a78,	// (0x00055202) bg_tb_trans_pane_cp1

0xda43,	// (0x000591cd) grid_tb_ext_pane_ParamLimits

0xda43,	// (0x000591cd) grid_tb_ext_pane

0xda82,	// (0x0005920c) cell_tb_ext_pane_ParamLimits

0xda82,	// (0x0005920c) cell_tb_ext_pane

0xdaaa,	// (0x00059234) cell_tb_ext_pane_g1_ParamLimits

0xdaaa,	// (0x00059234) cell_tb_ext_pane_g1

0x60b9,	// (0x00051843) cell_tb_ext_pane_t1

0x9706,	// (0x00054e90) list_highlight_pane_cp11_ParamLimits

0x9706,	// (0x00054e90) list_highlight_pane_cp11

0x9190,	// (0x0005491a) popup_uni_indicator_window_ParamLimits

0x9190,	// (0x0005491a) popup_uni_indicator_window

0x9ce2,	// (0x0005546c) bg_popup_sub_pane_cp14

0xdac7,	// (0x00059251) list_uniindi_pane

0xdad3,	// (0x0005925d) uniindi_top_pane

0x9706,	// (0x00054e90) bg_uniindi_top_pane

0xdaf2,	// (0x0005927c) uniindi_top_pane_g1

0xdb08,	// (0x00059292) uniindi_top_pane_g2

0x0003,

0xfcf9,	// (0x0005b483) uniindi_top_pane_g

0xdb25,	// (0x000592af) uniindi_top_pane_t1

0x616a,	// (0x000518f4) list_single_uniindi_pane_ParamLimits

0x616a,	// (0x000518f4) list_single_uniindi_pane

0x47b2,	// (0x0004ff3c) bg_uniindi_top_pane_g1

0x617d,	// (0x00051907) list_single_uniindi_pane_g1

0x6190,	// (0x0005191a) list_single_uniindi_pane_t1

0x8eb8,	// (0x00054642) control_bg_pane

0x61b5,	// (0x0005193f) bg_sctrl_sk_pane_cp1

0x61be,	// (0x00051948) bg_sctrl_sk_pane_cp2

0x61c7,	// (0x00051951) control_bg_pane_g1

0x61d0,	// (0x0005195a) control_bg_pane_g2

0x0001,

0xfd02,	// (0x0005b48c) control_bg_pane_g

0x41eb,	// (0x0004f975) cell_indicator_nsta_pane_g1_ParamLimits

0xce94,	// (0x0005861e) cell_indicator_nsta_pane_g2_ParamLimits

0xfa7d,	// (0x0005b207) cell_indicator_nsta_pane_g_ParamLimits

0xec9b,	// (0x0005a425) form2_midp_time_pane_t1_ParamLimits

0x0f31,	// (0x0004c6bb) main_idle_act4_pane_ParamLimits

0x0f31,	// (0x0004c6bb) main_idle_act4_pane

0xae72,	// (0x000565fc) popup_tb_extension_window_ParamLimits

0xda68,	// (0x000591f2) tb_ext_find_pane_ParamLimits

0xda68,	// (0x000591f2) tb_ext_find_pane

0x61d9,	// (0x00051963) ai_gene_pane_1_cp1

0xc501,	// (0x00057c8b) ai_gene_pane_2_cp1

0xdb4f,	// (0x000592d9) list_single_idle_plugin_calendar_pane

0x61ea,	// (0x00051974) list_single_idle_plugin_notification_pane

0x61f3,	// (0x0005197d) list_single_idle_plugin_player_pane

0xdb58,	// (0x000592e2) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdb58,	// (0x000592e2) list_single_idle_plugin_shortcut_pane

0xdb80,	// (0x0005930a) main_idle_act4_pane_t1

0xdb97,	// (0x00059321) main_idle_act4_pane_t2

0x0001,

0xfd07,	// (0x0005b491) main_idle_act4_pane_t

0xdbae,	// (0x00059338) middle_sk_idle_act4_pane_ParamLimits

0xdbae,	// (0x00059338) middle_sk_idle_act4_pane

0xdbca,	// (0x00059354) popup_clock_digital_analogue_window_cp2

0xdbf6,	// (0x00059380) shortcut_wheel_idle_act4_pane_ParamLimits

0xdbf6,	// (0x00059380) shortcut_wheel_idle_act4_pane

0x47b2,	// (0x0004ff3c) shortcut_wheel_idle_act4_pane_g1

0x47b2,	// (0x0004ff3c) shortcut_wheel_idle_act4_pane_g2

0x47b2,	// (0x0004ff3c) shortcut_wheel_idle_act4_pane_g3

0x47b2,	// (0x0004ff3c) shortcut_wheel_idle_act4_pane_g4

0x47b2,	// (0x0004ff3c) shortcut_wheel_idle_act4_pane_g5

0x6286,	// (0x00051a10) shortcut_wheel_idle_act4_pane_g6

0x628e,	// (0x00051a18) shortcut_wheel_idle_act4_pane_g7

0x6296,	// (0x00051a20) shortcut_wheel_idle_act4_pane_g8

0x629e,	// (0x00051a28) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd0c,	// (0x0005b496) shortcut_wheel_idle_act4_pane_g

0xd0b9,	// (0x00058843) middle_sk_idle_act4_pane_g1_ParamLimits

0xd0b9,	// (0x00058843) middle_sk_idle_act4_pane_g1

0xdc73,	// (0x000593fd) middle_sk_idle_act4_pane_g2_ParamLimits

0xdc73,	// (0x000593fd) middle_sk_idle_act4_pane_g2

0x0001,

0xfd2f,	// (0x0005b4b9) middle_sk_idle_act4_pane_g_ParamLimits

0xfd2f,	// (0x0005b4b9) middle_sk_idle_act4_pane_g

0xdc8b,	// (0x00059415) middle_sk_idle_act4_pane_t1_ParamLimits

0xdc8b,	// (0x00059415) middle_sk_idle_act4_pane_t1

0xdcba,	// (0x00059444) grid_ai_shortcut_pane_ParamLimits

0xdcba,	// (0x00059444) grid_ai_shortcut_pane

0xdcd7,	// (0x00059461) list_highlight_pane_cp16_ParamLimits

0xdcd7,	// (0x00059461) list_highlight_pane_cp16

0xdce4,	// (0x0005946e) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdce4,	// (0x0005946e) list_single_idle_plugin_shortcut_pane_g1

0xdcf0,	// (0x0005947a) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdcf0,	// (0x0005947a) list_single_idle_plugin_shortcut_pane_g2

0xdd0c,	// (0x00059496) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdd0c,	// (0x00059496) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd34,	// (0x0005b4be) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd34,	// (0x0005b4be) list_single_idle_plugin_shortcut_pane_g

0xdd21,	// (0x000594ab) cell_ai_shortcut_pane_ParamLimits

0xdd21,	// (0x000594ab) cell_ai_shortcut_pane

0xdd37,	// (0x000594c1) cell_ai_shortcut_pane_g1_ParamLimits

0xdd37,	// (0x000594c1) cell_ai_shortcut_pane_g1

0x61d9,	// (0x00051963) ai_gene_pane_1_cp2

0x63ce,	// (0x00051b58) ai_gene_pane_2_cp2

0x63d6,	// (0x00051b60) list_highlight_pane_cp15

0xdd59,	// (0x000594e3) list_single_idle_plugin_calendar_pane_g1

0x63d6,	// (0x00051b60) list_highlight_pane_cp17

0x63e7,	// (0x00051b71) list_single_idle_plugin_calendar_pane_g1_copy1

0x63ef,	// (0x00051b79) list_single_idle_plugin_player_pane_g1

0x3b2a,	// (0x0004f2b4) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd3b,	// (0x0005b4c5) list_single_idle_plugin_player_pane_g

0x63f7,	// (0x00051b81) list_single_idle_plugin_player_pane_t1

0x6405,	// (0x00051b8f) list_single_idle_plugin_player_pane_t2

0x6413,	// (0x00051b9d) list_single_idle_plugin_player_pane_t3

0x6421,	// (0x00051bab) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd40,	// (0x0005b4ca) list_single_idle_plugin_player_pane_t

0x642f,	// (0x00051bb9) wait_bar_pane_cp15

0x6437,	// (0x00051bc1) grid_ai_notification_pane

0x3b2a,	// (0x0004f2b4) list_single_idle_plugin_notification_pane_g1

0xdd61,	// (0x000594eb) cell_ai_notification_pane_ParamLimits

0xdd61,	// (0x000594eb) cell_ai_notification_pane

0x644d,	// (0x00051bd7) cell_ai_notification_pane_g1

0x6455,	// (0x00051bdf) cell_ai_notification_pane_t1

0xdd6e,	// (0x000594f8) tb_ext_find_button_pane

0xdd76,	// (0x00059500) tb_ext_find_pane_g1

0xdd7e,	// (0x00059508) tb_ext_find_pane_t1

0xc022,	// (0x000577ac) tb_ext_find_button_pane_g1

0xdd8c,	// (0x00059516) tb_ext_find_button_pane_g2

0x0001,

0xfd49,	// (0x0005b4d3) tb_ext_find_button_pane_g

0xdb80,	// (0x0005930a) main_idle_act4_pane_t1_ParamLimits

0xdb97,	// (0x00059321) main_idle_act4_pane_t2_ParamLimits

0xfd07,	// (0x0005b491) main_idle_act4_pane_t_ParamLimits

0xdbca,	// (0x00059354) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdbe2,	// (0x0005936c) sat_plugin_idle_act4_pane_ParamLimits

0xdbe2,	// (0x0005936c) sat_plugin_idle_act4_pane

0xdd95,	// (0x0005951f) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdd95,	// (0x0005951f) sat_plugin_idle_act4_pane_t1

0xddad,	// (0x00059537) sat_plugin_idle_act4_pane_t2_ParamLimits

0xddad,	// (0x00059537) sat_plugin_idle_act4_pane_t2

0xddc5,	// (0x0005954f) sat_plugin_idle_act4_pane_t3_ParamLimits

0xddc5,	// (0x0005954f) sat_plugin_idle_act4_pane_t3

0xdddd,	// (0x00059567) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdddd,	// (0x00059567) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd4e,	// (0x0005b4d8) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd4e,	// (0x0005b4d8) sat_plugin_idle_act4_pane_t

0x910b,	// (0x00054895) popup_battery_window_ParamLimits

0x910b,	// (0x00054895) popup_battery_window

0x9706,	// (0x00054e90) bg_popup_sub_pane_cp25_ParamLimits

0x9706,	// (0x00054e90) bg_popup_sub_pane_cp25

0x64d6,	// (0x00051c60) popup_battery_window_g1_ParamLimits

0x64d6,	// (0x00051c60) popup_battery_window_g1

0x64e2,	// (0x00051c6c) popup_battery_window_t1_ParamLimits

0x64e2,	// (0x00051c6c) popup_battery_window_t1

0x64f4,	// (0x00051c7e) popup_battery_window_t2_ParamLimits

0x64f4,	// (0x00051c7e) popup_battery_window_t2

0x0001,

0xfd57,	// (0x0005b4e1) popup_battery_window_t_ParamLimits

0xfd57,	// (0x0005b4e1) popup_battery_window_t

0xa513,	// (0x00055c9d) midp_canvas_pane_ParamLimits

0xa585,	// (0x00055d0f) midp_keypad_pane_ParamLimits

0xa585,	// (0x00055d0f) midp_keypad_pane

0x9ec6,	// (0x00055650) main_midp_pane_ParamLimits

0xcea1,	// (0x0005862b) signal_pane_g2_cp_ParamLimits

0xddf5,	// (0x0005957f) aid_size_cell_midp_keypad_ParamLimits

0xddf5,	// (0x0005957f) aid_size_cell_midp_keypad

0xde13,	// (0x0005959d) midp_keyp_game_grid_pane_ParamLimits

0xde13,	// (0x0005959d) midp_keyp_game_grid_pane

0xde3a,	// (0x000595c4) midp_keyp_rocker_pane_ParamLimits

0xde3a,	// (0x000595c4) midp_keyp_rocker_pane

0xde8b,	// (0x00059615) midp_keyp_sk_left_pane_ParamLimits

0xde8b,	// (0x00059615) midp_keyp_sk_left_pane

0xdedf,	// (0x00059669) midp_keyp_sk_right_pane_ParamLimits

0xdedf,	// (0x00059669) midp_keyp_sk_right_pane

0x8eb8,	// (0x00054642) bg_button_pane_cp03

0xdf33,	// (0x000596bd) midp_keyp_sk_left_pane_g1

0x8eb8,	// (0x00054642) bg_button_pane_cp04

0xdf33,	// (0x000596bd) midp_keyp_sk_right_pane_g1

0x47b2,	// (0x0004ff3c) midp_keyp_rocker_pane_g1

0xdf3c,	// (0x000596c6) keyp_game_cell_pane_ParamLimits

0xdf3c,	// (0x000596c6) keyp_game_cell_pane

0x8eb8,	// (0x00054642) bg_button_pane_cp02

0xdf60,	// (0x000596ea) keyp_game_cell_pane_g1

0x912b,	// (0x000548b5) popup_fep_vkb2_window_ParamLimits

0x912b,	// (0x000548b5) popup_fep_vkb2_window

0xb91f,	// (0x000570a9) aid_size_cell_vkb2_ParamLimits

0xb91f,	// (0x000570a9) aid_size_cell_vkb2

0xb953,	// (0x000570dd) popup_fep_vkb2_window_g1_ParamLimits

0xb953,	// (0x000570dd) popup_fep_vkb2_window_g1

0xb9a3,	// (0x0005712d) vkb2_area_bottom_pane_ParamLimits

0xb9a3,	// (0x0005712d) vkb2_area_bottom_pane

0xb9f7,	// (0x00057181) vkb2_area_keypad_pane_ParamLimits

0xb9f7,	// (0x00057181) vkb2_area_keypad_pane

0xba3f,	// (0x000571c9) vkb2_area_top_pane_ParamLimits

0xba3f,	// (0x000571c9) vkb2_area_top_pane

0xbacb,	// (0x00057255) vkb2_top_entry_pane_ParamLimits

0xbacb,	// (0x00057255) vkb2_top_entry_pane

0xbaf8,	// (0x00057282) vkb2_top_grid_left_pane_ParamLimits

0xbaf8,	// (0x00057282) vkb2_top_grid_left_pane

0xbb19,	// (0x000572a3) vkb2_top_grid_right_pane_ParamLimits

0xbb19,	// (0x000572a3) vkb2_top_grid_right_pane

0x166f,	// (0x0004cdf9) vkb2_cell_keypad_pane_ParamLimits

0x166f,	// (0x0004cdf9) vkb2_cell_keypad_pane

0xbb61,	// (0x000572eb) vkb2_area_bottom_grid_pane_ParamLimits

0xbb61,	// (0x000572eb) vkb2_area_bottom_grid_pane

0xbb8b,	// (0x00057315) vkb2_area_bottom_pane_g1_ParamLimits

0xbb8b,	// (0x00057315) vkb2_area_bottom_pane_g1

0xbbb1,	// (0x0005733b) vkb2_area_bottom_pane_g2_ParamLimits

0xbbb1,	// (0x0005733b) vkb2_area_bottom_pane_g2

0xbbe2,	// (0x0005736c) vkb2_area_bottom_pane_g3_ParamLimits

0xbbe2,	// (0x0005736c) vkb2_area_bottom_pane_g3

0x0002,

0xfd5c,	// (0x0005b4e6) vkb2_area_bottom_pane_g_ParamLimits

0xfd5c,	// (0x0005b4e6) vkb2_area_bottom_pane_g

0x1819,	// (0x0004cfa3) vkb2_top_cell_left_pane_ParamLimits

0x1819,	// (0x0004cfa3) vkb2_top_cell_left_pane

0xdf69,	// (0x000596f3) vkb2_top_entry_pane_g1_ParamLimits

0xdf69,	// (0x000596f3) vkb2_top_entry_pane_g1

0xdf77,	// (0x00059701) vkb2_top_entry_pane_t1_ParamLimits

0xdf77,	// (0x00059701) vkb2_top_entry_pane_t1

0x66a5,	// (0x00051e2f) vkb2_top_entry_pane_t2_ParamLimits

0x66a5,	// (0x00051e2f) vkb2_top_entry_pane_t2

0x66d7,	// (0x00051e61) vkb2_top_entry_pane_t3_ParamLimits

0x66d7,	// (0x00051e61) vkb2_top_entry_pane_t3

0x0002,

0xfd63,	// (0x0005b4ed) vkb2_top_entry_pane_t_ParamLimits

0xfd63,	// (0x0005b4ed) vkb2_top_entry_pane_t

0xbc4c,	// (0x000573d6) vkb2_top_grid_right_pane_g1_ParamLimits

0xbc4c,	// (0x000573d6) vkb2_top_grid_right_pane_g1

0x187c,	// (0x0004d006) vkb2_top_grid_right_pane_g2_ParamLimits

0x187c,	// (0x0004d006) vkb2_top_grid_right_pane_g2

0x1894,	// (0x0004d01e) vkb2_top_grid_right_pane_g3_ParamLimits

0x1894,	// (0x0004d01e) vkb2_top_grid_right_pane_g3

0xbc62,	// (0x000573ec) vkb2_top_grid_right_pane_g4_ParamLimits

0xbc62,	// (0x000573ec) vkb2_top_grid_right_pane_g4

0x0003,

0xfd6a,	// (0x0005b4f4) vkb2_top_grid_right_pane_g_ParamLimits

0xfd6a,	// (0x0005b4f4) vkb2_top_grid_right_pane_g

0x18c2,	// (0x0004d04c) vkb2_top_cell_left_pane_g1

0x18d9,	// (0x0004d063) vkb2_cell_keypad_pane_g1_ParamLimits

0x18d9,	// (0x0004d063) vkb2_cell_keypad_pane_g1

0x66fb,	// (0x00051e85) vkb2_cell_keypad_pane_t1_ParamLimits

0x66fb,	// (0x00051e85) vkb2_cell_keypad_pane_t1

0x18e7,	// (0x0004d071) vkb2_cell_bottom_grid_pane_ParamLimits

0x18e7,	// (0x0004d071) vkb2_cell_bottom_grid_pane

0x1920,	// (0x0004d0aa) vkb2_cell_bottom_grid_pane_g1

0xdc17,	// (0x000593a1) aid_call2_pane_cp02

0xdc1f,	// (0x000593a9) aid_call_pane_cp02

0xdc27,	// (0x000593b1) clock_digital_number_pane_cp10

0xdc2f,	// (0x000593b9) clock_digital_number_pane_cp11

0xdc37,	// (0x000593c1) clock_digital_number_pane_cp12

0xdc3f,	// (0x000593c9) clock_digital_number_pane_cp13

0xdc47,	// (0x000593d1) clock_digital_separator_pane_cp10

0xc022,	// (0x000577ac) popup_clock_digital_analogue_window_cp2_g1

0xc022,	// (0x000577ac) popup_clock_digital_analogue_window_cp2_g2

0xdc4f,	// (0x000593d9) popup_clock_digital_analogue_window_cp2_g3

0xc022,	// (0x000577ac) popup_clock_digital_analogue_window_cp2_g4

0xdc4f,	// (0x000593d9) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd1f,	// (0x0005b4a9) popup_clock_digital_analogue_window_cp2_g

0xdc57,	// (0x000593e1) popup_clock_digital_analogue_window_cp2_t1

0xdc65,	// (0x000593ef) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd2a,	// (0x0005b4b4) popup_clock_digital_analogue_window_cp2_t

0x47b2,	// (0x0004ff3c) clock_digital_number_pane_cp10_g1

0x47b2,	// (0x0004ff3c) clock_digital_number_pane_cp10_g2

0x0001,

0xfb19,	// (0x0005b2a3) clock_digital_number_pane_cp10_g

0x47b2,	// (0x0004ff3c) clock_digital_separator_pane_cp10_g1

0x47b2,	// (0x0004ff3c) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb19,	// (0x0005b2a3) clock_digital_separator_pane_cp10_g

0xdb14,	// (0x0005929e) uniindi_top_pane_g3

0x6133,	// (0x000518bd) uniindi_top_pane_g4

0x16fa,	// (0x0004ce84) vkb2_row_keypad_pane_ParamLimits

0x16fa,	// (0x0004ce84) vkb2_row_keypad_pane

0x1940,	// (0x0004d0ca) vkb2_cell_t_keypad_pane_ParamLimits

0x1940,	// (0x0004d0ca) vkb2_cell_t_keypad_pane

0x1950,	// (0x0004d0da) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x1950,	// (0x0004d0da) vkb2_cell_t_keypad_pane_cp08

0x1963,	// (0x0004d0ed) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x1963,	// (0x0004d0ed) vkb2_cell_t_keypad_pane_cp09

0x1977,	// (0x0004d101) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x1977,	// (0x0004d101) vkb2_cell_t_keypad_pane_cp01

0x1988,	// (0x0004d112) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x1988,	// (0x0004d112) vkb2_cell_t_keypad_pane_cp02

0x1999,	// (0x0004d123) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x1999,	// (0x0004d123) vkb2_cell_t_keypad_pane_cp03

0x19aa,	// (0x0004d134) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x19aa,	// (0x0004d134) vkb2_cell_t_keypad_pane_cp04

0x19bb,	// (0x0004d145) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x19bb,	// (0x0004d145) vkb2_cell_t_keypad_pane_cp05

0x19cc,	// (0x0004d156) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x19cc,	// (0x0004d156) vkb2_cell_t_keypad_pane_cp06

0x19dd,	// (0x0004d167) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x19dd,	// (0x0004d167) vkb2_cell_t_keypad_pane_cp07

0x19ee,	// (0x0004d178) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x19ee,	// (0x0004d178) vkb2_cell_t_keypad_pane_cp10

0x4a22,	// (0x000501ac) vkb2_cell_t_keypad_pane_g1

0x6712,	// (0x00051e9c) vkb2_cell_t_keypad_pane_t1

0x8eb8,	// (0x00054642) popup_grid_graphic2_window

0xdfb0,	// (0x0005973a) aid_size_cell_graphic2_ParamLimits

0xdfb0,	// (0x0005973a) aid_size_cell_graphic2

0xdfee,	// (0x00059778) bg_popup_window_pane_cp21_ParamLimits

0xdfee,	// (0x00059778) bg_popup_window_pane_cp21

0xdffc,	// (0x00059786) graphic2_pages_pane_ParamLimits

0xdffc,	// (0x00059786) graphic2_pages_pane

0xe052,	// (0x000597dc) grid_graphic2_control_pane_ParamLimits

0xe052,	// (0x000597dc) grid_graphic2_control_pane

0xe09a,	// (0x00059824) grid_graphic2_pane_ParamLimits

0xe09a,	// (0x00059824) grid_graphic2_pane

0xe121,	// (0x000598ab) cell_graphic2_pane

0x8eb8,	// (0x00054642) main_comp_mode_pane

0x5993,	// (0x0005111d) list_ai3_gene_pane_ParamLimits

0xd8e5,	// (0x0005906f) bg_popup_window_pane_cp19_ParamLimits

0x5d6d,	// (0x000514f7) bg_touch_area_indi_pane_ParamLimits

0x5d6d,	// (0x000514f7) bg_touch_area_indi_pane

0x5d83,	// (0x0005150d) bg_touch_area_indi_pane_cp01_ParamLimits

0x5d83,	// (0x0005150d) bg_touch_area_indi_pane_cp01

0x5d99,	// (0x00051523) bg_touch_area_indi_pane_cp02_ParamLimits

0x5d99,	// (0x00051523) bg_touch_area_indi_pane_cp02

0x5daf,	// (0x00051539) bg_touch_area_indi_pane_cp03_ParamLimits

0x5daf,	// (0x00051539) bg_touch_area_indi_pane_cp03

0x5dc9,	// (0x00051553) popup_slider_window_g1_ParamLimits

0x5de5,	// (0x0005156f) popup_slider_window_g2_ParamLimits

0x5e01,	// (0x0005158b) popup_slider_window_g3_ParamLimits

0xfcb4,	// (0x0005b43e) popup_slider_window_g_ParamLimits

0x5e67,	// (0x000515f1) popup_slider_window_t1_ParamLimits

0x5edb,	// (0x00051665) small_volume_slider_vertical_pane_ParamLimits

0xe121,	// (0x000598ab) cell_graphic2_pane_ParamLimits

0xe17c,	// (0x00059906) bg_button_pane_cp10_ParamLimits

0xe17c,	// (0x00059906) bg_button_pane_cp10

0xe18f,	// (0x00059919) bg_button_pane_cp11_ParamLimits

0xe18f,	// (0x00059919) bg_button_pane_cp11

0xe1a2,	// (0x0005992c) graphic2_pages_pane_g1_ParamLimits

0xe1a2,	// (0x0005992c) graphic2_pages_pane_g1

0xe1bd,	// (0x00059947) graphic2_pages_pane_g2_ParamLimits

0xe1bd,	// (0x00059947) graphic2_pages_pane_g2

0x0001,

0xfd78,	// (0x0005b502) graphic2_pages_pane_g_ParamLimits

0xfd78,	// (0x0005b502) graphic2_pages_pane_g

0xe1d5,	// (0x0005995f) graphic2_pages_pane_t1_ParamLimits

0xe1d5,	// (0x0005995f) graphic2_pages_pane_t1

0xe1ed,	// (0x00059977) cell_graphic2_control_pane_ParamLimits

0xe1ed,	// (0x00059977) cell_graphic2_control_pane

0xe21f,	// (0x000599a9) cell_graphic2_pane_g1_ParamLimits

0xe21f,	// (0x000599a9) cell_graphic2_pane_g1

0xd0c7,	// (0x00058851) cell_graphic2_pane_g2_ParamLimits

0xd0c7,	// (0x00058851) cell_graphic2_pane_g2

0xe22c,	// (0x000599b6) cell_graphic2_pane_g3_ParamLimits

0xe22c,	// (0x000599b6) cell_graphic2_pane_g3

0xd0d4,	// (0x0005885e) cell_graphic2_pane_g4_ParamLimits

0xd0d4,	// (0x0005885e) cell_graphic2_pane_g4

0xe239,	// (0x000599c3) cell_graphic2_pane_g5_ParamLimits

0xe239,	// (0x000599c3) cell_graphic2_pane_g5

0x0004,

0xfd7d,	// (0x0005b507) cell_graphic2_pane_g_ParamLimits

0xfd7d,	// (0x0005b507) cell_graphic2_pane_g

0xe256,	// (0x000599e0) cell_graphic2_pane_t1_ParamLimits

0xe256,	// (0x000599e0) cell_graphic2_pane_t1

0x2ede,	// (0x0004e668) grid_highlight_pane_cp11_ParamLimits

0x2ede,	// (0x0004e668) grid_highlight_pane_cp11

0x9706,	// (0x00054e90) bg_button_pane_cp05

0xe2a0,	// (0x00059a2a) cell_graphic2_control_pane_g1

0x47b2,	// (0x0004ff3c) bg_touch_area_indi_pane_g1

0x69eb,	// (0x00052175) aid_cmod_rocker_key_size

0x69f5,	// (0x0005217f) aid_cmode_itu_key_size

0x69ff,	// (0x00052189) main_cmode_video_pane

0x6a09,	// (0x00052193) main_comp_mode_itu_pane

0x6a15,	// (0x0005219f) main_comp_mode_rocker_pane

0x6a21,	// (0x000521ab) cell_cmode_rocker_pane_ParamLimits

0x6a21,	// (0x000521ab) cell_cmode_rocker_pane

0x6a33,	// (0x000521bd) cell_cmode_itu_pane_ParamLimits

0x6a33,	// (0x000521bd) cell_cmode_itu_pane

0x9ce2,	// (0x0005546c) bg_button_pane_cp06_ParamLimits

0x9ce2,	// (0x0005546c) bg_button_pane_cp06

0x4a22,	// (0x000501ac) cell_cmode_rocker_pane_g1_ParamLimits

0x4a22,	// (0x000501ac) cell_cmode_rocker_pane_g1

0x5f7f,	// (0x00051709) cell_cmode_rocker_pane_g2_ParamLimits

0x5f7f,	// (0x00051709) cell_cmode_rocker_pane_g2

0x0001,

0xfd8d,	// (0x0005b517) cell_cmode_rocker_pane_g_ParamLimits

0xfd8d,	// (0x0005b517) cell_cmode_rocker_pane_g

0x8eb8,	// (0x00054642) bg_button_pane_cp07

0x6a48,	// (0x000521d2) cell_cmode_itu_pane_g1

0x6a51,	// (0x000521db) cell_cmode_itu_pane_t1

0x6a5f,	// (0x000521e9) cell_cmode_itu_pane_t2

0x0001,

0xfd92,	// (0x0005b51c) cell_cmode_itu_pane_t

0x61a5,	// (0x0005192f) aid_touch_ctrl_left

0x61ad,	// (0x00051937) aid_touch_ctrl_right

0x8eb8,	// (0x00054642) compa_mode_pane

0xe2c6,	// (0x00059a50) aid_cmod_rocker_key_size_cp

0xe2d0,	// (0x00059a5a) aid_cmode_itu_key_size_cp

0x6a81,	// (0x0005220b) compa_mode_pane_g1

0x6a89,	// (0x00052213) compa_mode_pane_g2

0x6a91,	// (0x0005221b) compa_mode_pane_g3

0x0002,

0xfd97,	// (0x0005b521) compa_mode_pane_g

0xe2da,	// (0x00059a64) main_comp_mode_itu_pane_cp

0xe2e2,	// (0x00059a6c) main_comp_mode_rocker_pane_cp

0xe2ea,	// (0x00059a74) cell_cmode_itu_pane_cp_ParamLimits

0xe2ea,	// (0x00059a74) cell_cmode_itu_pane_cp

0xe2ff,	// (0x00059a89) cell_cmode_rocker_pane_cp_ParamLimits

0xe2ff,	// (0x00059a89) cell_cmode_rocker_pane_cp

0x9ce2,	// (0x0005546c) bg_button_pane_cp06_cp_ParamLimits

0x9ce2,	// (0x0005546c) bg_button_pane_cp06_cp

0x4a22,	// (0x000501ac) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x4a22,	// (0x000501ac) cell_cmode_rocker_pane_g1_cp

0x47b2,	// (0x0004ff3c) cell_cmode_rocker_pane_g2_cp

0x8eb8,	// (0x00054642) bg_button_pane_cp07_cp

0xe311,	// (0x00059a9b) cell_cmode_itu_pane_g1_cp

0xe31a,	// (0x00059aa4) cell_cmode_itu_pane_t1_cp

0xe31a,	// (0x00059aa4) cell_cmode_itu_pane_t2_cp

0xcc4b,	// (0x000583d5) settings_code_pane_cp2

0x939c,	// (0x00054b26) bg_popup_window_pane_cp3_ParamLimits

0x9906,	// (0x00055090) heading_pane_cp3_ParamLimits

0x9915,	// (0x0005509f) listscroll_popup_graphic_pane_ParamLimits

0x0f3f,	// (0x0004c6c9) fep_hwr_aid_pane_ParamLimits

0x13dd,	// (0x0004cb67) aid_touch_sctrl_top_ParamLimits

0x13ea,	// (0x0004cb74) sctrl_sk_top_pane_g1_ParamLimits

0x4a22,	// (0x000501ac) sctrl_sk_top_pane_g2_ParamLimits

0xfccd,	// (0x0005b457) sctrl_sk_top_pane_g_ParamLimits

0x13f7,	// (0x0004cb81) sctrl_sk_top_pane_t1_ParamLimits

0x13dd,	// (0x0004cb67) aid_touch_sctrl_bottom_ParamLimits

0x13f7,	// (0x0004cb81) sctrl_sk_bottom_pane_t1_ParamLimits

0xdae0,	// (0x0005926a) aid_area_touch_clock

0xba8b,	// (0x00057215) aid_vkb2_area_top_pane_cell_ParamLimits

0xba8b,	// (0x00057215) aid_vkb2_area_top_pane_cell

0xbb3a,	// (0x000572c4) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xbb3a,	// (0x000572c4) aid_vkb2_area_bottom_pane_cell

0x665d,	// (0x00051de7) popup_char_count_window

0x6ae7,	// (0x00052271) popup_char_count_window_g1

0x6af0,	// (0x0005227a) popup_char_count_window_g2

0x6af9,	// (0x00052283) popup_char_count_window_g3

0x0002,

0xfd9e,	// (0x0005b528) popup_char_count_window_g

0x6b02,	// (0x0005228c) popup_char_count_window_t1

0x1490,	// (0x0004cc1a) popup_fep_char_preview_window_ParamLimits

0x1490,	// (0x0004cc1a) popup_fep_char_preview_window

0xbaab,	// (0x00057235) vkb2_top_candi_pane_ParamLimits

0xbaab,	// (0x00057235) vkb2_top_candi_pane

0xe328,	// (0x00059ab2) cell_vkb2_top_candi_pane_ParamLimits

0xe328,	// (0x00059ab2) cell_vkb2_top_candi_pane

0x2882,	// (0x0004e00c) bg_popup_fep_char_preview_window_ParamLimits

0x2882,	// (0x0004e00c) bg_popup_fep_char_preview_window

0x1a03,	// (0x0004d18d) popup_fep_char_preview_window_t1_ParamLimits

0x1a03,	// (0x0004d18d) popup_fep_char_preview_window_t1

0x6b5a,	// (0x000522e4) bg_popup_fep_char_preview_window_g1

0x6b62,	// (0x000522ec) bg_popup_fep_char_preview_window_g2

0x6b6a,	// (0x000522f4) bg_popup_fep_char_preview_window_g3

0x6b72,	// (0x000522fc) bg_popup_fep_char_preview_window_g4

0x6b7a,	// (0x00052304) bg_popup_fep_char_preview_window_g5

0x6b82,	// (0x0005230c) bg_popup_fep_char_preview_window_g6

0x6b8a,	// (0x00052314) bg_popup_fep_char_preview_window_g7

0x6b92,	// (0x0005231c) bg_popup_fep_char_preview_window_g8

0x6b9a,	// (0x00052324) bg_popup_fep_char_preview_window_g9

0x0009,

0xfda5,	// (0x0005b52f) bg_popup_fep_char_preview_window_g

0x4a22,	// (0x000501ac) cell_vkb2_top_candi_pane_g1_ParamLimits

0x4a22,	// (0x000501ac) cell_vkb2_top_candi_pane_g1

0x4d39,	// (0x000504c3) cell_vkb2_top_candi_pane_g2_ParamLimits

0x4d39,	// (0x000504c3) cell_vkb2_top_candi_pane_g2

0x4d5a,	// (0x000504e4) cell_vkb2_top_candi_pane_g3_ParamLimits

0x4d5a,	// (0x000504e4) cell_vkb2_top_candi_pane_g3

0x1a45,	// (0x0004d1cf) cell_vkb2_top_candi_pane_g4_ParamLimits

0x1a45,	// (0x0004d1cf) cell_vkb2_top_candi_pane_g4

0x4f23,	// (0x000506ad) cell_vkb2_top_candi_pane_g5_ParamLimits

0x4f23,	// (0x000506ad) cell_vkb2_top_candi_pane_g5

0x5f7f,	// (0x00051709) cell_vkb2_top_candi_pane_g6_ParamLimits

0x5f7f,	// (0x00051709) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdba,	// (0x0005b544) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdba,	// (0x0005b544) cell_vkb2_top_candi_pane_g

0x1a66,	// (0x0004d1f0) cell_vkb2_top_candi_pane_t1

0xb684,	// (0x00056e0e) aid_size_touch_slider_mark_ParamLimits

0xb684,	// (0x00056e0e) aid_size_touch_slider_mark

0xe038,	// (0x000597c2) grid_graphic2_catg_pane_ParamLimits

0xe038,	// (0x000597c2) grid_graphic2_catg_pane

0xe0f4,	// (0x0005987e) popup_grid_graphic2_window_t1_ParamLimits

0xe0f4,	// (0x0005987e) popup_grid_graphic2_window_t1

0xe10a,	// (0x00059894) popup_grid_graphic2_window_t2_ParamLimits

0xe10a,	// (0x00059894) popup_grid_graphic2_window_t2

0x0001,

0xfd73,	// (0x0005b4fd) popup_grid_graphic2_window_t_ParamLimits

0xfd73,	// (0x0005b4fd) popup_grid_graphic2_window_t

0x9706,	// (0x00054e90) bg_button_pane_cp05_ParamLimits

0xe2a0,	// (0x00059a2a) cell_graphic2_control_pane_g1_ParamLimits

0xe388,	// (0x00059b12) cell_graphic2_catg_pane_ParamLimits

0xe388,	// (0x00059b12) cell_graphic2_catg_pane

0x8eb8,	// (0x00054642) bg_button_pane_cp12

0xe39a,	// (0x00059b24) cell_graphic2_catg_pane_g1

0x60b9,	// (0x00051843) cell_tb_ext_pane_t1_ParamLimits

0x1839,	// (0x0004cfc3) vkb2_top_cell_right_narrow_pane_ParamLimits

0x1839,	// (0x0004cfc3) vkb2_top_cell_right_narrow_pane

0x1851,	// (0x0004cfdb) vkb2_top_cell_right_wide_pane_ParamLimits

0x1851,	// (0x0004cfdb) vkb2_top_cell_right_wide_pane

0x0f31,	// (0x0004c6bb) bg_vkb2_func_pane_ParamLimits

0x0f31,	// (0x0004c6bb) bg_vkb2_func_pane

0x18c2,	// (0x0004d04c) vkb2_top_cell_left_pane_g1_ParamLimits

0x0f31,	// (0x0004c6bb) bg_vkb2_fuc_pane_cp03_ParamLimits

0x0f31,	// (0x0004c6bb) bg_vkb2_fuc_pane_cp03

0x1920,	// (0x0004d0aa) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x21e4,	// (0x0004d96e) bg_vkb2_func_pane_g1

0x21ec,	// (0x0004d976) bg_vkb2_func_pane_g2

0x21fc,	// (0x0004d986) bg_vkb2_func_pane_g3

0x21f4,	// (0x0004d97e) bg_vkb2_func_pane_g4

0x2204,	// (0x0004d98e) bg_vkb2_func_pane_g5

0x220c,	// (0x0004d996) bg_vkb2_func_pane_g6

0x2214,	// (0x0004d99e) bg_vkb2_func_pane_g7

0x221c,	// (0x0004d9a6) bg_vkb2_func_pane_g8

0x21dc,	// (0x0004d966) bg_vkb2_func_pane_g9

0x0008,

0xfdc7,	// (0x0005b551) bg_vkb2_func_pane_g

0x0f31,	// (0x0004c6bb) bg_vkb2_fuc_pane_cp01_ParamLimits

0x0f31,	// (0x0004c6bb) bg_vkb2_fuc_pane_cp01

0x18c2,	// (0x0004d04c) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x18c2,	// (0x0004d04c) vkb2_top_cell_right_wide_pane_g1

0x0f31,	// (0x0004c6bb) bg_vkb2_fuc_pane_cp02_ParamLimits

0x0f31,	// (0x0004c6bb) bg_vkb2_fuc_pane_cp02

0x1a85,	// (0x0004d20f) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x1a85,	// (0x0004d20f) vkb2_top_cell_right_narrow_pane_g1

0xd827,	// (0x00058fb1) aid_touch_area_decrease_ParamLimits

0xd827,	// (0x00058fb1) aid_touch_area_decrease

0xd861,	// (0x00058feb) aid_touch_area_increase_ParamLimits

0xd861,	// (0x00058feb) aid_touch_area_increase

0xd889,	// (0x00059013) aid_touch_area_mute_ParamLimits

0xd889,	// (0x00059013) aid_touch_area_mute

0xd8b1,	// (0x0005903b) aid_touch_area_slider_ParamLimits

0xd8b1,	// (0x0005903b) aid_touch_area_slider

0xd8f1,	// (0x0005907b) popup_slider_window_g4_ParamLimits

0xd8f1,	// (0x0005907b) popup_slider_window_g4

0xd90b,	// (0x00059095) popup_slider_window_g5_ParamLimits

0xd90b,	// (0x00059095) popup_slider_window_g5

0xd931,	// (0x000590bb) popup_slider_window_g6_ParamLimits

0xd931,	// (0x000590bb) popup_slider_window_g6

0x5e95,	// (0x0005161f) popup_slider_window_t2_ParamLimits

0x5e95,	// (0x0005161f) popup_slider_window_t2

0x0001,

0xfcc1,	// (0x0005b44b) popup_slider_window_t_ParamLimits

0xfcc1,	// (0x0005b44b) popup_slider_window_t

0xd947,	// (0x000590d1) slider_pane_ParamLimits

0xd947,	// (0x000590d1) slider_pane

0x6bbd,	// (0x00052347) slider_pane_g1_ParamLimits

0x6bbd,	// (0x00052347) slider_pane_g1

0x6bd1,	// (0x0005235b) slider_pane_g2_ParamLimits

0x6bd1,	// (0x0005235b) slider_pane_g2

0x6be7,	// (0x00052371) slider_pane_g3_ParamLimits

0x6be7,	// (0x00052371) slider_pane_g3

0x0003,

0xfdda,	// (0x0005b564) slider_pane_g_ParamLimits

0xfdda,	// (0x0005b564) slider_pane_g

0xaeba,	// (0x00056644) popup_tb_float_extension_window_ParamLimits

0xaeba,	// (0x00056644) popup_tb_float_extension_window

0x6c13,	// (0x0005239d) aid_size_cell_tb_float_ext

0x8eb8,	// (0x00054642) bg_popup_sub_window_cp28

0xe3a3,	// (0x00059b2d) grid_tb_float_ext_pane

0xe3ad,	// (0x00059b37) cell_tb_float_ext_pane_ParamLimits

0xe3ad,	// (0x00059b37) cell_tb_float_ext_pane

0xe3c7,	// (0x00059b51) cell_tb_float_ext_pane_g1

0xe3d0,	// (0x00059b5a) grid_highlight_pane_cp12

0xb79b,	// (0x00056f25) cell_last_hwr_side_pane_ParamLimits

0xb79b,	// (0x00056f25) cell_last_hwr_side_pane

0x47b2,	// (0x0004ff3c) cell_last_hwr_side_pane_g1

0x6c55,	// (0x000523df) cell_last_hwr_side_pane_g2

0x0001,

0xfde3,	// (0x0005b56d) cell_last_hwr_side_pane_g

0xbc17,	// (0x000573a1) vkb2_area_bottom_space_btn_pane_ParamLimits

0xbc17,	// (0x000573a1) vkb2_area_bottom_space_btn_pane

0x4a22,	// (0x000501ac) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x6712,	// (0x00051e9c) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x1a66,	// (0x0004d1f0) cell_vkb2_top_candi_pane_t1_ParamLimits

0x1aa5,	// (0x0004d22f) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x1aa5,	// (0x0004d22f) vkb2_area_bottom_space_btn_pane_g1

0x1adf,	// (0x0004d269) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x1adf,	// (0x0004d269) vkb2_area_bottom_space_btn_pane_g2

0x1b15,	// (0x0004d29f) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x1b15,	// (0x0004d29f) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfde8,	// (0x0005b572) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfde8,	// (0x0005b572) vkb2_area_bottom_space_btn_pane_g

0x0fe6,	// (0x0004c770) cel_fep_hwr_func_pane_ParamLimits

0x0fe6,	// (0x0004c770) cel_fep_hwr_func_pane

0xb770,	// (0x00056efa) cell_hwr_side_button_pane_ParamLimits

0xb770,	// (0x00056efa) cell_hwr_side_button_pane

0xdae0,	// (0x0005926a) aid_area_touch_clock_ParamLimits

0x9706,	// (0x00054e90) bg_uniindi_top_pane_ParamLimits

0xdaf2,	// (0x0005927c) uniindi_top_pane_g1_ParamLimits

0xdb08,	// (0x00059292) uniindi_top_pane_g2_ParamLimits

0xdb14,	// (0x0005929e) uniindi_top_pane_g3_ParamLimits

0x6133,	// (0x000518bd) uniindi_top_pane_g4_ParamLimits

0xfcf9,	// (0x0005b483) uniindi_top_pane_g_ParamLimits

0xdb25,	// (0x000592af) uniindi_top_pane_t1_ParamLimits

0x9706,	// (0x00054e90) bg_vkb2_func_pane_cp01_ParamLimits

0x9706,	// (0x00054e90) bg_vkb2_func_pane_cp01

0x6c5e,	// (0x000523e8) cel_fep_hwr_func_pane_g1_ParamLimits

0x6c5e,	// (0x000523e8) cel_fep_hwr_func_pane_g1

0x9706,	// (0x00054e90) bg_vkb2_func_pane_cp02_ParamLimits

0x9706,	// (0x00054e90) bg_vkb2_func_pane_cp02

0x6c5e,	// (0x000523e8) cell_hwr_side_button_pane_g1_ParamLimits

0x6c5e,	// (0x000523e8) cell_hwr_side_button_pane_g1

0x2060,	// (0x0004d7ea) status_pane_g4_ParamLimits

0x2060,	// (0x0004d7ea) status_pane_g4

0x207a,	// (0x0004d804) status_pane_t1

0x44ed,	// (0x0004fc77) form2_midp_gauge_slider_cont_pane

0x44f5,	// (0x0004fc7f) form2_midp_gauge_slider_pane_t1_ParamLimits

0xcfca,	// (0x00058754) form2_midp_gauge_slider_pane_t2_ParamLimits

0xcfdc,	// (0x00058766) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfacc,	// (0x0005b256) form2_midp_gauge_slider_pane_t_ParamLimits

0x452b,	// (0x0004fcb5) form2_midp_slider_pane_ParamLimits

0x1458,	// (0x0004cbe2) aid_size_cell_func_vkb2_ParamLimits

0x1458,	// (0x0004cbe2) aid_size_cell_func_vkb2

0x6bff,	// (0x00052389) slider_pane_g4_ParamLimits

0x6bff,	// (0x00052389) slider_pane_g4

0xbc80,	// (0x0005740a) form2_midp_gauge_slider_pane_t2_cp01

0xbc8e,	// (0x00057418) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xbc8e,	// (0x00057418) form2_midp_gauge_slider_pane_t3_cp01

0x1b8a,	// (0x0004d314) form2_midp_slider_pane_cp01

0x8eb8,	// (0x00054642) navi_smil_pane

0x6c97,	// (0x00052421) navi_smil_pane_g1

0x6c9f,	// (0x00052429) navi_smil_pane_t1

0x6c6c,	// (0x000523f6) form2_midp_slider_pane_g1

0x6c75,	// (0x000523ff) form2_midp_slider_pane_g2

0x6c7d,	// (0x00052407) form2_midp_slider_pane_g3

0x6c6c,	// (0x000523f6) form2_midp_slider_pane_g4

0xe3d9,	// (0x00059b63) form2_midp_slider_pane_g5

0x0004,

0xfdf1,	// (0x0005b57b) form2_midp_slider_pane_g

0x1b4f,	// (0x0004d2d9) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x1b4f,	// (0x0004d2d9) vkb2_area_bottom_space_btn_pane_g4

0xb0f2,	// (0x0005687c) lc0_navi_pane_ParamLimits

0xb0f2,	// (0x0005687c) lc0_navi_pane

0xb15c,	// (0x000568e6) lc0_stat_indi_pane_ParamLimits

0xb15c,	// (0x000568e6) lc0_stat_indi_pane

0xb171,	// (0x000568fb) ls0_title_pane_ParamLimits

0xb171,	// (0x000568fb) ls0_title_pane

0x9ce2,	// (0x0005546c) bg_popup_sub_pane_cp14_ParamLimits

0xdac7,	// (0x00059251) list_uniindi_pane_ParamLimits

0xdad3,	// (0x0005925d) uniindi_top_pane_ParamLimits

0x617d,	// (0x00051907) list_single_uniindi_pane_g1_ParamLimits

0x6190,	// (0x0005191a) list_single_uniindi_pane_t1_ParamLimits

0xbcab,	// (0x00057435) lc0_stat_clock_pane_ParamLimits

0xbcab,	// (0x00057435) lc0_stat_clock_pane

0xe3e4,	// (0x00059b6e) lc0_stat_indi_pane_g1_ParamLimits

0xe3e4,	// (0x00059b6e) lc0_stat_indi_pane_g1

0xe3f1,	// (0x00059b7b) lc0_stat_indi_pane_g2_ParamLimits

0xe3f1,	// (0x00059b7b) lc0_stat_indi_pane_g2

0x0001,

0xfdfc,	// (0x0005b586) lc0_stat_indi_pane_g_ParamLimits

0xfdfc,	// (0x0005b586) lc0_stat_indi_pane_g

0xbcbb,	// (0x00057445) lc0_uni_indicator_pane_ParamLimits

0xbcbb,	// (0x00057445) lc0_uni_indicator_pane

0xe3fe,	// (0x00059b88) ls0_title_pane_g1_ParamLimits

0xe3fe,	// (0x00059b88) ls0_title_pane_g1

0xe412,	// (0x00059b9c) ls0_title_pane_t1_ParamLimits

0xe412,	// (0x00059b9c) ls0_title_pane_t1

0xbccb,	// (0x00057455) lc0_uni_indicator_pane_g1_ParamLimits

0xbccb,	// (0x00057455) lc0_uni_indicator_pane_g1

0x6d11,	// (0x0005249b) lc0_stat_clock_pane_t1

0x8eb8,	// (0x00054642) main_ai5_pane

0x6d1f,	// (0x000524a9) ai5_sk_pane_ParamLimits

0x6d1f,	// (0x000524a9) ai5_sk_pane

0xe440,	// (0x00059bca) cell_ai5_widget_pane_ParamLimits

0xe440,	// (0x00059bca) cell_ai5_widget_pane

0x6df5,	// (0x0005257f) aid_size_cell_widget_grid

0x6e03,	// (0x0005258d) bg_ai5_widget_pane_ParamLimits

0x6e03,	// (0x0005258d) bg_ai5_widget_pane

0x6e7f,	// (0x00052609) cell_ai5_widget_pane_g2

0x6e93,	// (0x0005261d) cell_ai5_widget_pane_g3

0x6ead,	// (0x00052637) cell_ai5_widget_pane_g4

0x6ebd,	// (0x00052647) cell_ai5_widget_pane_g5

0x6ecd,	// (0x00052657) cell_ai5_widget_pane_g6

0x6ed9,	// (0x00052663) cell_ai5_widget_pane_g7

0x6f45,	// (0x000526cf) cell_ai5_widget_pane_t1_ParamLimits

0x6f45,	// (0x000526cf) cell_ai5_widget_pane_t1

0x6f62,	// (0x000526ec) cell_ai5_widget_pane_t2_ParamLimits

0x6f62,	// (0x000526ec) cell_ai5_widget_pane_t2

0x6f7a,	// (0x00052704) cell_ai5_widget_pane_t3_ParamLimits

0x6f7a,	// (0x00052704) cell_ai5_widget_pane_t3

0x6f92,	// (0x0005271c) cell_ai5_widget_pane_t4_ParamLimits

0x6f92,	// (0x0005271c) cell_ai5_widget_pane_t4

0xe4ac,	// (0x00059c36) cell_ai5_widget_pane_t5_ParamLimits

0xe4ac,	// (0x00059c36) cell_ai5_widget_pane_t5

0x6fd7,	// (0x00052761) cell_ai5_widget_pane_t6_ParamLimits

0x6fd7,	// (0x00052761) cell_ai5_widget_pane_t6

0x6fe9,	// (0x00052773) cell_ai5_widget_pane_t7_ParamLimits

0x6fe9,	// (0x00052773) cell_ai5_widget_pane_t7

0x7008,	// (0x00052792) cell_ai5_widget_pane_t8_ParamLimits

0x7008,	// (0x00052792) cell_ai5_widget_pane_t8

0x000b,

0xfe1c,	// (0x0005b5a6) cell_ai5_widget_pane_t_ParamLimits

0xfe1c,	// (0x0005b5a6) cell_ai5_widget_pane_t

0x708c,	// (0x00052816) grid_ai5_widget_pane

0x9ce2,	// (0x0005546c) highlight_cell_ai5_widget_pane_ParamLimits

0x9ce2,	// (0x0005546c) highlight_cell_ai5_widget_pane

0xe4cc,	// (0x00059c56) ai5_sk_left_pane

0xe4d6,	// (0x00059c60) ai5_sk_middle_pane

0xe4e0,	// (0x00059c6a) ai5_sk_right_pane

0x70b8,	// (0x00052842) bg_ai5_widget_pane_g1_ParamLimits

0x70b8,	// (0x00052842) bg_ai5_widget_pane_g1

0x70c4,	// (0x0005284e) bg_ai5_widget_pane_g2_ParamLimits

0x70c4,	// (0x0005284e) bg_ai5_widget_pane_g2

0x70d0,	// (0x0005285a) bg_ai5_widget_pane_g3_ParamLimits

0x70d0,	// (0x0005285a) bg_ai5_widget_pane_g3

0x70dc,	// (0x00052866) bg_ai5_widget_pane_g4_ParamLimits

0x70dc,	// (0x00052866) bg_ai5_widget_pane_g4

0x70e8,	// (0x00052872) bg_ai5_widget_pane_g5_ParamLimits

0x70e8,	// (0x00052872) bg_ai5_widget_pane_g5

0x70f4,	// (0x0005287e) bg_ai5_widget_pane_g6_ParamLimits

0x70f4,	// (0x0005287e) bg_ai5_widget_pane_g6

0x7100,	// (0x0005288a) bg_ai5_widget_pane_g7_ParamLimits

0x7100,	// (0x0005288a) bg_ai5_widget_pane_g7

0x710c,	// (0x00052896) bg_ai5_widget_pane_g8_ParamLimits

0x710c,	// (0x00052896) bg_ai5_widget_pane_g8

0x7118,	// (0x000528a2) bg_ai5_widget_pane_g9_ParamLimits

0x7118,	// (0x000528a2) bg_ai5_widget_pane_g9

0x0008,

0xfe35,	// (0x0005b5bf) bg_ai5_widget_pane_g_ParamLimits

0xfe35,	// (0x0005b5bf) bg_ai5_widget_pane_g

0x714a,	// (0x000528d4) cell_shortcut_ai5_widget_pane_ParamLimits

0x714a,	// (0x000528d4) cell_shortcut_ai5_widget_pane

0xc480,	// (0x00057c0a) bg_cell_shortcut_ai5_widget_pane

0x715b,	// (0x000528e5) cell_grid_ai5_widget_pane_g1

0xc480,	// (0x00057c0a) highlight_cell_shortcut_ai5_widget_pane

0x21ec,	// (0x0004d976) ai5_sk_left_pane_g1

0x7164,	// (0x000528ee) ai5_sk_left_pane_g2

0x716c,	// (0x000528f6) ai5_sk_left_pane_g3

0x7174,	// (0x000528fe) ai5_sk_left_pane_g4

0x0003,

0xfe48,	// (0x0005b5d2) ai5_sk_left_pane_g

0x717c,	// (0x00052906) ai5_sk_left_pane_t1

0x21e4,	// (0x0004d96e) ai5_sk_right_pane_g1

0x718a,	// (0x00052914) ai5_sk_right_pane_g2

0x7192,	// (0x0005291c) ai5_sk_right_pane_g3

0x719a,	// (0x00052924) ai5_sk_right_pane_g4

0x0003,

0xfe51,	// (0x0005b5db) ai5_sk_right_pane_g

0x71a2,	// (0x0005292c) ai5_sk_right_pane_t1

0x21e4,	// (0x0004d96e) ai5_sk_middle_pane_g1

0x21ec,	// (0x0004d976) ai5_sk_middle_pane_g2

0x2204,	// (0x0004d98e) ai5_sk_middle_pane_g3

0x7192,	// (0x0005291c) ai5_sk_middle_pane_g4

0x716c,	// (0x000528f6) ai5_sk_middle_pane_g5

0x71b0,	// (0x0005293a) ai5_sk_middle_pane_g6

0xe4ea,	// (0x00059c74) ai5_sk_middle_pane_g7

0x0006,

0xfe5a,	// (0x0005b5e4) ai5_sk_middle_pane_g

0xafde,	// (0x00056768) aid_touch_area_size_lc0_ParamLimits

0xafde,	// (0x00056768) aid_touch_area_size_lc0

0x1171,	// (0x0004c8fb) cell_hwr_candidate_pane_t1_ParamLimits

0x065d,	// (0x0004bde7) aid_touch_navi_pane

0xb26a,	// (0x000569f4) status_dt_navi_pane_ParamLimits

0xb26a,	// (0x000569f4) status_dt_navi_pane

0xb282,	// (0x00056a0c) status_dt_sta_pane_ParamLimits

0xb282,	// (0x00056a0c) status_dt_sta_pane

0xe4f2,	// (0x00059c7c) dt_sta_controll_pane

0xe4ff,	// (0x00059c89) dt_sta_indi_pane

0xe50c,	// (0x00059c96) dt_sta_title_pane

0x9706,	// (0x00054e90) bg_dt_sta_indi_pane_ParamLimits

0x9706,	// (0x00054e90) bg_dt_sta_indi_pane

0xe51e,	// (0x00059ca8) dt_sta_battery_pane

0xe526,	// (0x00059cb0) dt_sta_indi_pane_g1

0x7202,	// (0x0005298c) dt_sta_indi_pane_g2

0x720b,	// (0x00052995) dt_sta_indi_pane_g3

0x0002,

0xfe69,	// (0x0005b5f3) dt_sta_indi_pane_g

0x7214,	// (0x0005299e) dt_sta_signal_pane

0x9ce2,	// (0x0005546c) bg_dt_sta_title_pane_ParamLimits

0x9ce2,	// (0x0005546c) bg_dt_sta_title_pane

0x303e,	// (0x0004e7c8) dt_sta_title_pane_g1

0xe52f,	// (0x00059cb9) dt_sta_title_pane_t1_ParamLimits

0xe52f,	// (0x00059cb9) dt_sta_title_pane_t1

0x8eb8,	// (0x00054642) bg_dt_sta_control_pane

0xe544,	// (0x00059cce) dt_sta_controll_pane_g1

0xe54d,	// (0x00059cd7) bg_dt_sta_title_pane_g1

0xe556,	// (0x00059ce0) bg_dt_sta_title_pane_g2

0xe55f,	// (0x00059ce9) bg_dt_sta_title_pane_g3

0x0002,

0xfe70,	// (0x0005b5fa) bg_dt_sta_title_pane_g

0x47b2,	// (0x0004ff3c) bg_dt_sta_indi_pane_g1

0x7256,	// (0x000529e0) dt_sta_signal_pane_g1

0x725e,	// (0x000529e8) dt_sta_signal_pane_g2

0x0001,

0xfe77,	// (0x0005b601) dt_sta_signal_pane_g

0x7266,	// (0x000529f0) dt_sta_battery_pane_g1

0x726f,	// (0x000529f9) dt_sta_battery_pane_t1

0x47b2,	// (0x0004ff3c) bg_dt_sta_control_pane_g1

0xc0a5,	// (0x0005782f) fep_china_uni_eep_pane

0xc0ad,	// (0x00057837) fep_china_uni_entry_pane_ParamLimits

0xc0bd,	// (0x00057847) popup_fep_china_uni_window_g1_ParamLimits

0xc0cd,	// (0x00057857) popup_fep_china_uni_window_g2_ParamLimits

0xc0cd,	// (0x00057857) popup_fep_china_uni_window_g2

0x0001,

0xf6ee,	// (0x0005ae78) popup_fep_china_uni_window_g_ParamLimits

0xf6ee,	// (0x0005ae78) popup_fep_china_uni_window_g

0x727e,	// (0x00052a08) fep_china_uni_eep_pane_g1

0x7286,	// (0x00052a10) fep_china_uni_eep_pane_t1

0x6c8e,	// (0x00052418) aid_touch_area_size_smil_player

0x07b3,	// (0x0004bf3d) lc0_clock_pane

0x206e,	// (0x0004d7f8) status_pane_g5_ParamLimits

0x206e,	// (0x0004d7f8) status_pane_g5

0xaa16,	// (0x000561a0) popup_keymap_window

0x202c,	// (0x0004d7b6) status_icon_pane

0x6e93,	// (0x0005261d) cell_ai5_widget_pane_g3_ParamLimits

0x6ead,	// (0x00052637) cell_ai5_widget_pane_g4_ParamLimits

0x6ebd,	// (0x00052647) cell_ai5_widget_pane_g5_ParamLimits

0x6ee5,	// (0x0005266f) cell_ai5_widget_pane_g8_ParamLimits

0x6ee5,	// (0x0005266f) cell_ai5_widget_pane_g8

0x6ef9,	// (0x00052683) cell_ai5_widget_pane_g9_ParamLimits

0x6ef9,	// (0x00052683) cell_ai5_widget_pane_g9

0x6f0d,	// (0x00052697) cell_ai5_widget_pane_g10_ParamLimits

0x6f0d,	// (0x00052697) cell_ai5_widget_pane_g10

0x7295,	// (0x00052a1f) status_icon_pane_g1

0x8eb8,	// (0x00054642) bg_popup_sub_pane_cp13

0x729d,	// (0x00052a27) popup_keymap_window_t1

0xa6d2,	// (0x00055e5c) control_pane_g6_ParamLimits

0xa6d2,	// (0x00055e5c) control_pane_g6

0xa6df,	// (0x00055e69) control_pane_g7_ParamLimits

0xa6df,	// (0x00055e69) control_pane_g7

0xa6ec,	// (0x00055e76) control_pane_g8_ParamLimits

0xa6ec,	// (0x00055e76) control_pane_g8

0xe4f2,	// (0x00059c7c) dt_sta_controll_pane_ParamLimits

0xe4ff,	// (0x00059c89) dt_sta_indi_pane_ParamLimits

0xe50c,	// (0x00059c96) dt_sta_title_pane_ParamLimits

0x9bd2,	// (0x0005535c) aid_size_touch_scroll_bar_cale

0x911f,	// (0x000548a9) popup_discreet_window_ParamLimits

0x911f,	// (0x000548a9) popup_discreet_window

0x9171,	// (0x000548fb) popup_sk_window

0x2882,	// (0x0004e00c) bg_popup_sub_pane_cp28_ParamLimits

0x2882,	// (0x0004e00c) bg_popup_sub_pane_cp28

0x72ab,	// (0x00052a35) popup_discreet_window_g1_ParamLimits

0x72ab,	// (0x00052a35) popup_discreet_window_g1

0xe568,	// (0x00059cf2) popup_discreet_window_t1_ParamLimits

0xe568,	// (0x00059cf2) popup_discreet_window_t1

0x72e9,	// (0x00052a73) popup_discreet_window_t2_ParamLimits

0x72e9,	// (0x00052a73) popup_discreet_window_t2

0x0002,

0xfe7c,	// (0x0005b606) popup_discreet_window_t_ParamLimits

0xfe7c,	// (0x0005b606) popup_discreet_window_t

0x1bc1,	// (0x0004d34b) popup_sk_window_g1

0x1bcb,	// (0x0004d355) popup_sk_window_g2

0x0001,

0xfe83,	// (0x0005b60d) popup_sk_window_g

0xbcf6,	// (0x00057480) popup_sk_window_t1

0xbd04,	// (0x0005748e) popup_sk_window_t1_copy1

0x6e7f,	// (0x00052609) cell_ai5_widget_pane_g2_ParamLimits

0x701a,	// (0x000527a4) cell_ai5_widget_pane_t9_ParamLimits

0x701a,	// (0x000527a4) cell_ai5_widget_pane_t9

0x8eb8,	// (0x00054642) main_fep_fshwr2_pane

0xbd12,	// (0x0005749c) aid_fshwr2_btn_pane

0xbd26,	// (0x000574b0) aid_fshwr2_syb_pane

0xbd3a,	// (0x000574c4) aid_fshwr2_txt_pane

0xbd4a,	// (0x000574d4) fshwr2_func_candi_pane

0xbd6a,	// (0x000574f4) fshwr2_hwr_syb_pane

0xbd8c,	// (0x00057516) fshwr2_icf_pane

0x8eb8,	// (0x00054642) fshwr2_icf_bg_pane

0x1c93,	// (0x0004d41d) fshwr2_icf_pane_t1_ParamLimits

0x1c93,	// (0x0004d41d) fshwr2_icf_pane_t1

0xc022,	// (0x000577ac) fshwr2_func_candi_pane_g1

0xe586,	// (0x00059d10) fshwr2_func_candi_row_pane_ParamLimits

0xe586,	// (0x00059d10) fshwr2_func_candi_row_pane

0xbdbc,	// (0x00057546) cell_fshwr2_syb_pane_ParamLimits

0xbdbc,	// (0x00057546) cell_fshwr2_syb_pane

0x6c5e,	// (0x000523e8) fshwr2_hwr_syb_pane_g1_ParamLimits

0x6c5e,	// (0x000523e8) fshwr2_hwr_syb_pane_g1

0x8eb8,	// (0x00054642) bg_popup_call_pane_cp01

0xbde2,	// (0x0005756c) fshwr2_func_candi_cell_pane_ParamLimits

0xbde2,	// (0x0005756c) fshwr2_func_candi_cell_pane

0x266b,	// (0x0004ddf5) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x266b,	// (0x0004ddf5) fshwr2_func_candi_cell_bg_pane

0xbe2d,	// (0x000575b7) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xbe2d,	// (0x000575b7) fshwr2_func_candi_cell_pane_g1

0xbe64,	// (0x000575ee) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xbe64,	// (0x000575ee) fshwr2_func_candi_cell_pane_t1

0x8eb8,	// (0x00054642) bg_button_pane_cp08

0x9ec6,	// (0x00055650) cell_fshwr2_syb_bg_pane

0xbe7f,	// (0x00057609) cell_fshwr2_syb_bg_pane_g1

0xbe92,	// (0x0005761c) cell_fshwr2_syb_bg_pane_t1

0x9ce2,	// (0x0005546c) main_tmo_pane

0xc9f5,	// (0x0005817f) uni_indicator_pane_g1_ParamLimits

0xca0b,	// (0x00058195) uni_indicator_pane_g2_ParamLimits

0xca21,	// (0x000581ab) uni_indicator_pane_g3_ParamLimits

0x33ab,	// (0x0004eb35) uni_indicator_pane_g4_ParamLimits

0x33ab,	// (0x0004eb35) uni_indicator_pane_g4

0x33bf,	// (0x0004eb49) uni_indicator_pane_g5_ParamLimits

0x33bf,	// (0x0004eb49) uni_indicator_pane_g5

0x33bf,	// (0x0004eb49) uni_indicator_pane_g6_ParamLimits

0x33bf,	// (0x0004eb49) uni_indicator_pane_g6

0xf8e6,	// (0x0005b070) uni_indicator_pane_g_ParamLimits

0xd809,	// (0x00058f93) popup_tmo_note_window_ParamLimits

0xd809,	// (0x00058f93) popup_tmo_note_window

0x9ce2,	// (0x0005546c) fshwr2_bg_pane

0xbe55,	// (0x000575df) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xbe55,	// (0x000575df) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe88,	// (0x0005b612) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe88,	// (0x0005b612) fshwr2_func_candi_cell_pane_g

0x47b2,	// (0x0004ff3c) bg_popup_window_pane_cp01

0x1d77,	// (0x0004d501) bg_popup_window_pane_g1_cp01

0x7362,	// (0x00052aec) bg_popup_window_pane_cp22_ParamLimits

0x7362,	// (0x00052aec) bg_popup_window_pane_cp22

0xe5a9,	// (0x00059d33) listscroll_tmo_link_pane_ParamLimits

0xe5a9,	// (0x00059d33) listscroll_tmo_link_pane

0x73b0,	// (0x00052b3a) popup_tmo_note_window_g1_ParamLimits

0x73b0,	// (0x00052b3a) popup_tmo_note_window_g1

0xe5e9,	// (0x00059d73) tmo_note_info_pane_ParamLimits

0xe5e9,	// (0x00059d73) tmo_note_info_pane

0xe603,	// (0x00059d8d) list_tmo_note_info_pane_g1_ParamLimits

0xe603,	// (0x00059d8d) list_tmo_note_info_pane_g1

0x73ee,	// (0x00052b78) list_tmo_note_info_pane_g2_ParamLimits

0x73ee,	// (0x00052b78) list_tmo_note_info_pane_g2

0x0001,

0xfe8d,	// (0x0005b617) list_tmo_note_info_pane_g_ParamLimits

0xfe8d,	// (0x0005b617) list_tmo_note_info_pane_g

0x740a,	// (0x00052b94) list_tmo_note_info_text_pane_ParamLimits

0x740a,	// (0x00052b94) list_tmo_note_info_text_pane

0x748b,	// (0x00052c15) list_tmo_link_pane

0x7498,	// (0x00052c22) scroll_pane_cp20

0x74a5,	// (0x00052c2f) list_single_tmo_link_pane_ParamLimits

0x74a5,	// (0x00052c2f) list_single_tmo_link_pane

0x74b5,	// (0x00052c3f) list_single_tmo_link_pane_t1

0x74c3,	// (0x00052c4d) list_tmo_note_info_text_pane_t1_ParamLimits

0x74c3,	// (0x00052c4d) list_tmo_note_info_text_pane_t1

0x9d9e,	// (0x00055528) aid_size_touch_scroll_bar_cp01_ParamLimits

0x9d9e,	// (0x00055528) aid_size_touch_scroll_bar_cp01

0x8b0f,	// (0x00054299) aid_size_touch_slider_marker

0x9161,	// (0x000548eb) popup_settings_window_ParamLimits

0x9161,	// (0x000548eb) popup_settings_window

0xe8f8,	// (0x0005a082) popup_candi_list_indi_window

0x065d,	// (0x0004bde7) aid_touch_navi_pane_ParamLimits

0x13b1,	// (0x0004cb3b) rs_clock_indi_pane

0x13ba,	// (0x0004cb44) sctrl_sk_bottom_pane_ParamLimits

0x13cb,	// (0x0004cb55) sctrl_sk_top_pane_ParamLimits

0xb94b,	// (0x000570d5) popup_fep_tooltip_window

0x6df5,	// (0x0005257f) aid_size_cell_widget_grid_ParamLimits

0x6e6a,	// (0x000525f4) cell_ai5_widget_pane_g1_ParamLimits

0x6e6a,	// (0x000525f4) cell_ai5_widget_pane_g1

0x6ecd,	// (0x00052657) cell_ai5_widget_pane_g6_ParamLimits

0x6ed9,	// (0x00052663) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe01,	// (0x0005b58b) cell_ai5_widget_pane_g_ParamLimits

0xfe01,	// (0x0005b58b) cell_ai5_widget_pane_g

0x7049,	// (0x000527d3) cell_ai5_widget_pane_t10_ParamLimits

0x7049,	// (0x000527d3) cell_ai5_widget_pane_t10

0x708c,	// (0x00052816) grid_ai5_widget_pane_ParamLimits

0x7124,	// (0x000528ae) cell_contacts_ai5_widget_pane_ParamLimits

0x7124,	// (0x000528ae) cell_contacts_ai5_widget_pane

0x72fe,	// (0x00052a88) popup_discreet_window_t3_ParamLimits

0x72fe,	// (0x00052a88) popup_discreet_window_t3

0xbda8,	// (0x00057532) popup_fshwr2_char_preview_window_ParamLimits

0xbda8,	// (0x00057532) popup_fshwr2_char_preview_window

0xe61a,	// (0x00059da4) tmo_note_info_pane_t1

0xe62f,	// (0x00059db9) tmo_note_info_pane_t2

0xe646,	// (0x00059dd0) tmo_note_info_pane_t3

0x7467,	// (0x00052bf1) tmo_note_info_pane_t4

0x7479,	// (0x00052c03) tmo_note_info_pane_t5

0x0004,

0xfe92,	// (0x0005b61c) tmo_note_info_pane_t

0x748b,	// (0x00052c15) list_tmo_link_pane_ParamLimits

0x7498,	// (0x00052c22) scroll_pane_cp20_ParamLimits

0x8eb8,	// (0x00054642) bg_popup_fep_char_preview_window_cp01

0xe65b,	// (0x00059de5) popup_fshwr2_char_preview_window_t1

0x74ea,	// (0x00052c74) popup_candi_list_indi_window_g1

0x74f3,	// (0x00052c7d) bg_cell_contacts_ai5_widget_pane

0x74ff,	// (0x00052c89) cell_contacts_ai5_widget_pane_g1

0x4e99,	// (0x00050623) cell_contacts_ai5_widget_pane_g2

0x7514,	// (0x00052c9e) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfe9d,	// (0x0005b627) cell_contacts_ai5_widget_pane_g

0x7520,	// (0x00052caa) cell_contacts_ai5_widget_pane_t1

0x9ce2,	// (0x0005546c) highlight_cell_shortcut_ai5_widget_pane_cp01

0x7597,	// (0x00052d21) settings_container_pane

0xc480,	// (0x00057c0a) listscroll_set_pane_copy1

0x3e8e,	// (0x0004f618) scroll_pane_cp121_copy1

0x2627,	// (0x0004ddb1) set_content_pane_copy1

0xe669,	// (0x00059df3) aid_height_set_list_copy1_ParamLimits

0xe669,	// (0x00059df3) aid_height_set_list_copy1

0x35b7,	// (0x0004ed41) aid_size_parent_copy1_ParamLimits

0x35b7,	// (0x0004ed41) aid_size_parent_copy1

0xe675,	// (0x00059dff) button_value_adjust_pane_cp6_copy1_ParamLimits

0xe675,	// (0x00059dff) button_value_adjust_pane_cp6_copy1

0x9ec6,	// (0x00055650) list_highlight_pane_cp2_copy1_ParamLimits

0x9ec6,	// (0x00055650) list_highlight_pane_cp2_copy1

0xe689,	// (0x00059e13) list_set_pane_copy1_ParamLimits

0xe689,	// (0x00059e13) list_set_pane_copy1

0x7532,	// (0x00052cbc) main_pane_set_t1_copy1_ParamLimits

0x7532,	// (0x00052cbc) main_pane_set_t1_copy1

0x756c,	// (0x00052cf6) main_pane_set_t2_copy1_ParamLimits

0x756c,	// (0x00052cf6) main_pane_set_t2_copy1

0xe736,	// (0x00059ec0) main_pane_set_t3_copy1

0xe744,	// (0x00059ece) main_pane_set_t4_copy1

0x758b,	// (0x00052d15) set_content_pane_g1_copy1_ParamLimits

0x758b,	// (0x00052d15) set_content_pane_g1_copy1

0xe752,	// (0x00059edc) setting_code_pane_copy1

0x7694,	// (0x00052e1e) setting_slider_graphic_pane_copy1

0x7694,	// (0x00052e1e) setting_slider_pane_copy1

0x769c,	// (0x00052e26) setting_text_pane_copy1

0x769c,	// (0x00052e26) setting_volume_pane_copy1

0xe752,	// (0x00059edc) settings_code_pane_cp2_copy1

0xe75a,	// (0x00059ee4) settings_code_pane_cp_copy1_ParamLimits

0xe75a,	// (0x00059ee4) settings_code_pane_cp_copy1

0xbea8,	// (0x00057632) volume_set_pane_copy1

0xe76e,	// (0x00059ef8) volume_set_pane_g10_copy1

0xe776,	// (0x00059f00) volume_set_pane_g1_copy1

0xe77e,	// (0x00059f08) volume_set_pane_g2_copy1

0xe786,	// (0x00059f10) volume_set_pane_g3_copy1

0xe78e,	// (0x00059f18) volume_set_pane_g4_copy1

0xe796,	// (0x00059f20) volume_set_pane_g5_copy1

0xee3e,	// (0x0005a5c8) volume_set_pane_g6_copy1

0xee46,	// (0x0005a5d0) volume_set_pane_g7_copy1

0xee4e,	// (0x0005a5d8) volume_set_pane_g8_copy1

0xee56,	// (0x0005a5e0) volume_set_pane_g9_copy1

0x939c,	// (0x00054b26) bg_set_opt_pane_cp_copy1_ParamLimits

0x939c,	// (0x00054b26) bg_set_opt_pane_cp_copy1

0xbeb0,	// (0x0005763a) setting_slider_pane_t1_copy1_ParamLimits

0xbeb0,	// (0x0005763a) setting_slider_pane_t1_copy1

0xbecf,	// (0x00057659) setting_slider_pane_t2_copy1_ParamLimits

0xbecf,	// (0x00057659) setting_slider_pane_t2_copy1

0xbee9,	// (0x00057673) setting_slider_pane_t3_copy1_ParamLimits

0xbee9,	// (0x00057673) setting_slider_pane_t3_copy1

0xbf01,	// (0x0005768b) slider_set_pane_copy1_ParamLimits

0xbf01,	// (0x0005768b) slider_set_pane_copy1

0x9d3a,	// (0x000554c4) set_opt_bg_pane_g1_copy2

0x9d42,	// (0x000554cc) set_opt_bg_pane_g2_copy2

0x7708,	// (0x00052e92) set_opt_bg_pane_g3_copy2

0x9d52,	// (0x000554dc) set_opt_bg_pane_g4_copy2

0x9d5a,	// (0x000554e4) set_opt_bg_pane_g5_copy2

0x9d62,	// (0x000554ec) set_opt_bg_pane_g6_copy2

0xee5e,	// (0x0005a5e8) set_opt_bg_pane_g7_copy2

0x771a,	// (0x00052ea4) set_opt_bg_pane_g8_copy2

0x7724,	// (0x00052eae) set_opt_bg_pane_g9_copy2

0xbf17,	// (0x000576a1) aid_size_touch_slider_mark_copy1_ParamLimits

0xbf17,	// (0x000576a1) aid_size_touch_slider_mark_copy1

0xee66,	// (0x0005a5f0) slider_set_pane_g1_copy1

0x1e03,	// (0x0004d58d) slider_set_pane_g2_copy1

0xb698,	// (0x00056e22) slider_set_pane_g3_copy1_ParamLimits

0xb698,	// (0x00056e22) slider_set_pane_g3_copy1

0xb6ac,	// (0x00056e36) slider_set_pane_g4_copy1_ParamLimits

0xb6ac,	// (0x00056e36) slider_set_pane_g4_copy1

0xb6c4,	// (0x00056e4e) slider_set_pane_g5_copy1_ParamLimits

0xb6c4,	// (0x00056e4e) slider_set_pane_g5_copy1

0xb698,	// (0x00056e22) slider_set_pane_g6_copy1_ParamLimits

0xb698,	// (0x00056e22) slider_set_pane_g6_copy1

0xbf2b,	// (0x000576b5) slider_set_pane_g7_copy1_ParamLimits

0xbf2b,	// (0x000576b5) slider_set_pane_g7_copy1

0x9101,	// (0x0005488b) bg_set_opt_pane_cp2_copy1

0xee6f,	// (0x0005a5f9) setting_slider_graphic_pane_g1_copy1

0xee78,	// (0x0005a602) setting_slider_graphic_pane_t1_copy1

0xee88,	// (0x0005a612) setting_slider_graphic_pane_t2_copy1

0xee98,	// (0x0005a622) slider_set_pane_cp_copy1

0x7770,	// (0x00052efa) input_focus_pane_cp1_copy1

0x7779,	// (0x00052f03) list_set_text_pane_copy1

0x7781,	// (0x00052f0b) setting_text_pane_g1_copy1

0xeea8,	// (0x0005a632) set_text_pane_t1_copy1

0x7770,	// (0x00052efa) input_focus_pane_cp2_copy1

0x7781,	// (0x00052f0b) setting_code_pane_g1_copy1

0x778a,	// (0x00052f14) setting_code_pane_t1_copy1

0x7798,	// (0x00052f22) list_set_graphic_pane_copy1

0x9101,	// (0x0005488b) bg_set_opt_pane_cp4_copy1

0xc1fd,	// (0x00057987) list_set_graphic_pane_g1_copy1_ParamLimits

0xc1fd,	// (0x00057987) list_set_graphic_pane_g1_copy1

0x77ac,	// (0x00052f36) list_set_graphic_pane_g2_copy1

0xc215,	// (0x0005799f) list_set_graphic_pane_t1_copy1_ParamLimits

0xc215,	// (0x0005799f) list_set_graphic_pane_t1_copy1

0x47b2,	// (0x0004ff3c) rs_clock_indi_pane_g1

0x77b4,	// (0x00052f3e) rs_clock_indi_pane_t1

0x77c2,	// (0x00052f4c) rs_indi_pane

0x77ca,	// (0x00052f54) rs_indi_pane_g1

0x77d3,	// (0x00052f5d) rs_indi_pane_g2

0x74ea,	// (0x00052c74) rs_indi_pane_g3

0x0002,

0xfea4,	// (0x0005b62e) rs_indi_pane_g

0xc480,	// (0x00057c0a) bg_popup_preview_window_pane_cp03

0x77dc,	// (0x00052f66) popup_fep_tooltip_window_t1

0xd4af,	// (0x00058c39) popup_note2_window_g2_ParamLimits

0xd4af,	// (0x00058c39) popup_note2_window_g2

0x0001,

0xfc38,	// (0x0005b3c2) popup_note2_window_g_ParamLimits

0xfc38,	// (0x0005b3c2) popup_note2_window_g

0x5959,	// (0x000510e3) bg_popup_sub_pane_cp11_ParamLimits

0x5966,	// (0x000510f0) cell_ai3_links_pane_g1_ParamLimits

0x597d,	// (0x00051107) cell_ai3_links_pane_t1

0xeea8,	// (0x0005a632) set_text_pane_t1_copy1_ParamLimits

0xc3c2,	// (0x00057b4c) cell_graphic_popup_pane_cp2_ParamLimits

0xc3c2,	// (0x00057b4c) cell_graphic_popup_pane_cp2

0xeec2,	// (0x0005a64c) cell_graphic_popup_pane_g1_cp2

0x9a52,	// (0x000551dc) cell_graphic_popup_pane_g2_cp2

0x77f2,	// (0x00052f7c) cell_graphic_popup_pane_g3_cp2

0xeeca,	// (0x0005a654) cell_graphic_popup_pane_t2_cp2

0x9a63,	// (0x000551ed) grid_highlight_pane_cp3_cp2

0xa07f,	// (0x00055809) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x9ce2,	// (0x0005546c) main_tmo_pane_ParamLimits

0xd7fd,	// (0x00058f87) popup_tmo_big_image_note_window

0x6e59,	// (0x000525e3) cell_ai5_widget_list_pane

0x6e61,	// (0x000525eb) cell_ai5_widget_lrg_icon_pane

0xe61a,	// (0x00059da4) tmo_note_info_pane_t1_ParamLimits

0xe62f,	// (0x00059db9) tmo_note_info_pane_t2_ParamLimits

0xe646,	// (0x00059dd0) tmo_note_info_pane_t3_ParamLimits

0x7467,	// (0x00052bf1) tmo_note_info_pane_t4_ParamLimits

0x7479,	// (0x00052c03) tmo_note_info_pane_t5_ParamLimits

0xfe92,	// (0x0005b61c) tmo_note_info_pane_t_ParamLimits

0x7597,	// (0x00052d21) settings_container_pane_ParamLimits

0xeea0,	// (0x0005a62a) indicator_popup_pane_cp5

0xeea0,	// (0x0005a62a) indicator_popup_pane_cp6

0x7798,	// (0x00052f22) list_set_graphic_pane_copy1_ParamLimits

0x8eb8,	// (0x00054642) bg_popup_window_pane_cp23

0x7808,	// (0x00052f92) popup_tmo_big_image_note_window_g1

0x7811,	// (0x00052f9b) popup_tmo_big_image_note_window_t1

0x7821,	// (0x00052fab) popup_tmo_big_image_note_window_t2

0x7831,	// (0x00052fbb) popup_tmo_big_image_note_window_t3

0x0002,

0xfeab,	// (0x0005b635) popup_tmo_big_image_note_window_t

0x47b2,	// (0x0004ff3c) cell_ai5_widget_lrg_icon_pane_g1

0x7841,	// (0x00052fcb) cell_ai5_widget_lrg_icon_pane_t1

0x784f,	// (0x00052fd9) cell_ai5_widget_list_row_pane_ParamLimits

0x784f,	// (0x00052fd9) cell_ai5_widget_list_row_pane

0x7866,	// (0x00052ff0) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x7866,	// (0x00052ff0) cell_ai5_widget_list_row_pane_g1

0xeed8,	// (0x0005a662) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xeed8,	// (0x0005a662) cell_ai5_widget_list_row_pane_t1

0x789e,	// (0x00053028) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x789e,	// (0x00053028) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfeb2,	// (0x0005b63c) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeb2,	// (0x0005b63c) cell_ai5_widget_list_row_pane_t

0x8eb8,	// (0x00054642) main_fep_vtchi_ss_pane

0x78ee,	// (0x00053078) popup_fep_char_pre_window

0x78f6,	// (0x00053080) popup_fep_ituss_window

0xef33,	// (0x0005a6bd) popup_fep_vkbss_window

0x9ec6,	// (0x00055650) grid_vkbss_keypad_pane_ParamLimits

0x9ec6,	// (0x00055650) grid_vkbss_keypad_pane

0x7962,	// (0x000530ec) ituss_keypad_pane

0x1e2b,	// (0x0004d5b5) aid_vkbss_key_offset_ParamLimits

0x1e2b,	// (0x0004d5b5) aid_vkbss_key_offset

0xbf41,	// (0x000576cb) cell_vkbss_key_pane_ParamLimits

0xbf41,	// (0x000576cb) cell_vkbss_key_pane

0x7972,	// (0x000530fc) bg_cell_vkbss_key_g1_ParamLimits

0x7972,	// (0x000530fc) bg_cell_vkbss_key_g1

0xef40,	// (0x0005a6ca) cell_vkbss_key_3p_pane_ParamLimits

0xef40,	// (0x0005a6ca) cell_vkbss_key_3p_pane

0xef76,	// (0x0005a700) cell_vkbss_key_g1_ParamLimits

0xef76,	// (0x0005a700) cell_vkbss_key_g1

0xefac,	// (0x0005a736) cell_vkbss_key_t1_ParamLimits

0xefac,	// (0x0005a736) cell_vkbss_key_t1

0x1e82,	// (0x0004d60c) cell_ituss_key_pane_ParamLimits

0x1e82,	// (0x0004d60c) cell_ituss_key_pane

0x7a46,	// (0x000531d0) bg_cell_ituss_key_g1_ParamLimits

0x7a46,	// (0x000531d0) bg_cell_ituss_key_g1

0x7a52,	// (0x000531dc) cell_ituss_key_pane_g1_ParamLimits

0x7a52,	// (0x000531dc) cell_ituss_key_pane_g1

0x1e93,	// (0x0004d61d) cell_ituss_key_pane_g2_ParamLimits

0x1e93,	// (0x0004d61d) cell_ituss_key_pane_g2

0x0005,

0xfeb9,	// (0x0005b643) cell_ituss_key_pane_g_ParamLimits

0xfeb9,	// (0x0005b643) cell_ituss_key_pane_g

0x1f17,	// (0x0004d6a1) cell_ituss_key_t1_ParamLimits

0x1f17,	// (0x0004d6a1) cell_ituss_key_t1

0x1f51,	// (0x0004d6db) cell_ituss_key_t2_ParamLimits

0x1f51,	// (0x0004d6db) cell_ituss_key_t2

0x1f83,	// (0x0004d70d) cell_ituss_key_t3_ParamLimits

0x1f83,	// (0x0004d70d) cell_ituss_key_t3

0x1fb4,	// (0x0004d73e) cell_ituss_key_t4_ParamLimits

0x1fb4,	// (0x0004d73e) cell_ituss_key_t4

0x0004,

0xfec6,	// (0x0005b650) cell_ituss_key_t_ParamLimits

0xfec6,	// (0x0005b650) cell_ituss_key_t

0xf008,	// (0x0005a792) cell_vkbss_key_3p_pane_g1

0xf010,	// (0x0005a79a) cell_vkbss_key_3p_pane_g2

0xf018,	// (0x0005a7a2) cell_vkbss_key_3p_pane_g3

0x0002,

0xfed1,	// (0x0005b65b) cell_vkbss_key_3p_pane_g

0xc480,	// (0x00057c0a) bg_popup_fep_char_preview_window_cp02

0x7a90,	// (0x0005321a) popup_fep_char_pre_window_t1

0xe4a2,	// (0x00059c2c) main_ai5_sk_pane

0x74f3,	// (0x00052c7d) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x74ff,	// (0x00052c89) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x4e99,	// (0x00050623) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x7514,	// (0x00052c9e) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfe9d,	// (0x0005b627) cell_contacts_ai5_widget_pane_g_ParamLimits

0x7520,	// (0x00052caa) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x9ce2,	// (0x0005546c) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf020,	// (0x0005a7aa) main_ai5_sk_pane_g1

0xc64e,	// (0x00057dd8) popup_query_code_window_g1

0xef24,	// (0x0005a6ae) popup_fep_vkb_icf_pane

0x7939,	// (0x000530c3) popup_fep_vtchi_icf_pane

0x7aa7,	// (0x00053231) bg_icf_pane

0x7aa7,	// (0x00053231) list_vkb_icf_pane

0x7ab3,	// (0x0005323d) bg_icf_pane_cp01

0x7ac6,	// (0x00053250) vtchi_icf_list_pane

0xf075,	// (0x0005a7ff) list_vkb_icf_pane_t1_ParamLimits

0xf075,	// (0x0005a7ff) list_vkb_icf_pane_t1

0x7b4b,	// (0x000532d5) vtchi_icf_list_pane_t1_ParamLimits

0x7b4b,	// (0x000532d5) vtchi_icf_list_pane_t1

0x78f6,	// (0x00053080) popup_fep_ituss_window_ParamLimits

0x7939,	// (0x000530c3) popup_fep_vtchi_icf_pane_ParamLimits

0x7962,	// (0x000530ec) ituss_keypad_pane_ParamLimits

0x1e21,	// (0x0004d5ab) ituss_sks_pane

0x7aa7,	// (0x00053231) bg_icf_pane_ParamLimits

0xef09,	// (0x0005a693) icf_edit_indi_pane_ParamLimits

0xef09,	// (0x0005a693) icf_edit_indi_pane

0x7aa7,	// (0x00053231) list_vkb_icf_pane_ParamLimits

0x7ab3,	// (0x0005323d) bg_icf_pane_cp01_ParamLimits

0x78e1,	// (0x0005306b) icf_edit_indi_pane_cp01_ParamLimits

0x78e1,	// (0x0005306b) icf_edit_indi_pane_cp01

0x7ac6,	// (0x00053250) vtchi_query_pane

0x6c5e,	// (0x000523e8) icf_edit_indi_pane_g1_ParamLimits

0x6c5e,	// (0x000523e8) icf_edit_indi_pane_g1

0xf08d,	// (0x0005a817) icf_edit_indi_pane_g2_ParamLimits

0xf08d,	// (0x0005a817) icf_edit_indi_pane_g2

0x0001,

0xfefc,	// (0x0005b686) icf_edit_indi_pane_g_ParamLimits

0xfefc,	// (0x0005b686) icf_edit_indi_pane_g

0xf0a1,	// (0x0005a82b) icf_edit_indi_pane_t1

0x7b6f,	// (0x000532f9) bg_input_focus_pane_cp042

0x9bc9,	// (0x00055353) vtchi_button_pane

0x7b78,	// (0x00053302) vtchi_query_pane_t1

0x7b86,	// (0x00053310) vtchi_query_pane_t2

0x7b94,	// (0x0005331e) vtchi_query_pane_t3

0x0002,

0xfeeb,	// (0x0005b675) vtchi_query_pane_t

0x8eb8,	// (0x00054642) bg_button_pane_cp13

0x7ba2,	// (0x0005332c) vtchi_button_pane_g1

0x1ff7,	// (0x0004d781) ituss_sks_pane_g1

0x2002,	// (0x0004d78c) ituss_sks_pane_g2

0x0001,

0xfef2,	// (0x0005b67c) ituss_sks_pane_g

0x7baa,	// (0x00053334) ituss_sks_pane_t1

0x7bb8,	// (0x00053342) ituss_sks_pane_t2

0x0001,

0xfef7,	// (0x0005b681) ituss_sks_pane_t

0x4226,	// (0x0004f9b0) indicator_nsta_pane_cp_g1

0x422f,	// (0x0004f9b9) indicator_nsta_pane_cp_g2

0x4237,	// (0x0004f9c1) indicator_nsta_pane_cp_g3

0x423f,	// (0x0004f9c9) indicator_nsta_pane_cp_g4

0x422f,	// (0x0004f9b9) indicator_nsta_pane_cp_g5

0x4237,	// (0x0004f9c1) indicator_nsta_pane_cp_g6

0x0005,

0xfa82,	// (0x0005b20c) indicator_nsta_pane_cp_g

0xe281,	// (0x00059a0b) cell_graphic2_pane_t2_ParamLimits

0xe281,	// (0x00059a0b) cell_graphic2_pane_t2

0x0001,

0xfd88,	// (0x0005b512) cell_graphic2_pane_t_ParamLimits

0xfd88,	// (0x0005b512) cell_graphic2_pane_t

0xe2b8,	// (0x00059a42) cell_graphic2_control_pane_t1

0xa3a1,	// (0x00055b2b) signal_pane_g3_ParamLimits

0xa3a1,	// (0x00055b2b) signal_pane_g3

0xa3b5,	// (0x00055b3f) signal_pane_g4_ParamLimits

0xa3b5,	// (0x00055b3f) signal_pane_g4

0x78b0,	// (0x0005303a) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x78b0,	// (0x0005303a) cell_ai5_widget_list_row_pane_t3

0x7a66,	// (0x000531f0) cell_ituss_key_pane_t1_ParamLimits

0x7a66,	// (0x000531f0) cell_ituss_key_pane_t1

0x22f6,	// (0x0004da80) form_field_data_wide_pane_vc_t2_ParamLimits

0x22f6,	// (0x0004da80) form_field_data_wide_pane_vc_t2

0x230a,	// (0x0004da94) form_field_data_wide_pane_vc_t3_ParamLimits

0x230a,	// (0x0004da94) form_field_data_wide_pane_vc_t3

0x0002,

0xf7ce,	// (0x0005af58) form_field_data_wide_pane_vc_t_ParamLimits

0xf7ce,	// (0x0005af58) form_field_data_wide_pane_vc_t

0x3ed0,	// (0x0004f65a) form_field_slider_wide_pane_vc_t3_ParamLimits

0x3ed0,	// (0x0004f65a) form_field_slider_wide_pane_vc_t3

0x3fae,	// (0x0004f738) form_field_popup_wide_pane_vc_t2_ParamLimits

0x3fae,	// (0x0004f738) form_field_popup_wide_pane_vc_t2

0x3fc5,	// (0x0004f74f) form_field_popup_wide_pane_vc_t3_ParamLimits

0x3fc5,	// (0x0004f74f) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa71,	// (0x0005b1fb) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa71,	// (0x0005b1fb) form_field_popup_wide_pane_vc_t

0xbd12,	// (0x0005749c) aid_fshwr2_btn_pane_ParamLimits

0xbd26,	// (0x000574b0) aid_fshwr2_syb_pane_ParamLimits

0xbd3a,	// (0x000574c4) aid_fshwr2_txt_pane_ParamLimits

0x9ce2,	// (0x0005546c) fshwr2_bg_pane_ParamLimits

0xbd4a,	// (0x000574d4) fshwr2_func_candi_pane_ParamLimits

0xbd6a,	// (0x000574f4) fshwr2_hwr_syb_pane_ParamLimits

0xbd8c,	// (0x00057516) fshwr2_icf_pane_ParamLimits

0x0edd,	// (0x0004c667) list_double_graphic_pane_vc_g4_ParamLimits

0x0edd,	// (0x0004c667) list_double_graphic_pane_vc_g4

0x1eb3,	// (0x0004d63d) cell_ituss_key_pane_g3_ParamLimits

0x1eb3,	// (0x0004d63d) cell_ituss_key_pane_g3

0x1fe5,	// (0x0004d76f) cell_ituss_key_t5_ParamLimits

0x1fe5,	// (0x0004d76f) cell_ituss_key_t5

0xef33,	// (0x0005a6bd) popup_fep_vkbss_window_ParamLimits

0x6dec,	// (0x00052576) aid_cell_ai5_quarter

0xf0a1,	// (0x0005a82b) icf_edit_indi_pane_t1_ParamLimits

0x97ae,	// (0x00054f38) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x97ae,	// (0x00054f38) aid_tch_indicator_popup_pane_cp2

0x97c1,	// (0x00054f4b) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x97c1,	// (0x00054f4b) aid_tch_query_popup_data_pane_cp2

0x266b,	// (0x0004ddf5) aid_tch_query_popup_pane_ParamLimits

0x266b,	// (0x0004ddf5) aid_tch_query_popup_pane

0x266b,	// (0x0004ddf5) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x266b,	// (0x0004ddf5) aid_tch_query_popup_data_pane_cp1

0x9ec6,	// (0x00055650) cell_fshwr2_syb_bg_pane_ParamLimits

0xbe7f,	// (0x00057609) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0xbe92,	// (0x0005761c) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xef24,	// (0x0005a6ae) popup_fep_vkb_icf_pane_ParamLimits

0xbc78,	// (0x00057402) bg_popup_fep_char_preview_window_g10

0x6f21,	// (0x000526ab) cell_ai5_widget_pane_g11_ParamLimits

0x6f21,	// (0x000526ab) cell_ai5_widget_pane_g11

0x6f2d,	// (0x000526b7) cell_ai5_widget_pane_g12_ParamLimits

0x6f2d,	// (0x000526b7) cell_ai5_widget_pane_g12

0x6f39,	// (0x000526c3) cell_ai5_widget_pane_g13_ParamLimits

0x6f39,	// (0x000526c3) cell_ai5_widget_pane_g13

0x7068,	// (0x000527f2) cell_ai5_widget_pane_t11_ParamLimits

0x7068,	// (0x000527f2) cell_ai5_widget_pane_t11

0x707a,	// (0x00052804) cell_ai5_widget_pane_t12_ParamLimits

0x707a,	// (0x00052804) cell_ai5_widget_pane_t12

0x1ebf,	// (0x0004d649) cell_ituss_key_pane_g4_ParamLimits

0x1ebf,	// (0x0004d649) cell_ituss_key_pane_g4

0x1edb,	// (0x0004d665) cell_ituss_key_pane_g5_ParamLimits

0x1edb,	// (0x0004d665) cell_ituss_key_pane_g5

0x1ef7,	// (0x0004d681) cell_ituss_key_pane_g6_ParamLimits

0x1ef7,	// (0x0004d681) cell_ituss_key_pane_g6

0x21dc,	// (0x0004d966) bg_icf_pane_g1

0xf029,	// (0x0005a7b3) bg_icf_pane_g2

0xf033,	// (0x0005a7bd) bg_icf_pane_g3

0xf03b,	// (0x0005a7c5) bg_icf_pane_g4

0xf045,	// (0x0005a7cf) bg_icf_pane_g5

0xf04f,	// (0x0005a7d9) bg_icf_pane_g6

0xf059,	// (0x0005a7e3) bg_icf_pane_g7

0xf061,	// (0x0005a7eb) bg_icf_pane_g8

0xf06b,	// (0x0005a7f5) bg_icf_pane_g9

0x0008,

0xfed8,	// (0x0005b662) bg_icf_pane_g

0x794f,	// (0x000530d9) popup_hyb_candi_window_ParamLimits

0x794f,	// (0x000530d9) popup_hyb_candi_window

0x2268,	// (0x0004d9f2) bg_popup_sub_pane_cp01_ParamLimits

0x2268,	// (0x0004d9f2) bg_popup_sub_pane_cp01

0x7bf3,	// (0x0005337d) entry_hyb_candi_pane_ParamLimits

0x7bf3,	// (0x0005337d) entry_hyb_candi_pane

0x7c02,	// (0x0005338c) grid_hyb_candi_pane_ParamLimits

0x7c02,	// (0x0005338c) grid_hyb_candi_pane

0x7c17,	// (0x000533a1) grid_hyb_phrase_pane_ParamLimits

0x7c17,	// (0x000533a1) grid_hyb_phrase_pane

0x7c26,	// (0x000533b0) cell_hyb_candi_pane_ParamLimits

0x7c26,	// (0x000533b0) cell_hyb_candi_pane

0x7c49,	// (0x000533d3) cell_hyb_candi_scroll_pane

0xc022,	// (0x000577ac) cell_hyb_candi_pane_g1

0x7c52,	// (0x000533dc) cell_hyb_candi_pane_t1

0x7c60,	// (0x000533ea) cell_hyb_phrase_pane

0xc022,	// (0x000577ac) cell_hyb_phrase_pane_g1

0x7c69,	// (0x000533f3) cell_hyb_phrase_pane_t1

0x7c77,	// (0x00053401) entry_hyb_candi_pane_t1

0xc480,	// (0x00057c0a) input_focus_pane_cp06

0x7c85,	// (0x0005340f) cell_hyb_candi_scroll_pane_g1

0x7c8d,	// (0x00053417) cell_hyb_candi_scroll_pane_g1_aid

0x7c95,	// (0x0005341f) cell_hyb_candi_scroll_pane_g2

0x7c9d,	// (0x00053427) cell_hyb_candi_scroll_pane_g2_aid

0x7ca5,	// (0x0005342f) cell_hyb_candi_scroll_pane_g3

0x7cad,	// (0x00053437) cell_hyb_candi_scroll_pane_g4
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

} // end of namespace AknLayoutScalable_Elaf_pnl4_av_nhd4_lsc_tch_Large

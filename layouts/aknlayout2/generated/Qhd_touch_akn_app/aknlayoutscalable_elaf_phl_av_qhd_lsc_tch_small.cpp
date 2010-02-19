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

#include "aknlayoutscalable_elaf_phl_av_qhd_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_phl_av_qhd_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0001854e };

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
0x267b,	// (0x0001abc9) Screen

0x2687,	// (0x0001abd5) application_window_ParamLimits

0x2687,	// (0x0001abd5) application_window

0x8a3a,	// (0x00020f88) screen_g1

0x8a6c,	// (0x00020fba) area_bottom_pane_ParamLimits

0x8a6c,	// (0x00020fba) area_bottom_pane

0x59ab,	// (0x0001def9) area_top_pane_ParamLimits

0x59ab,	// (0x0001def9) area_top_pane

0x5a3f,	// (0x0001df8d) main_pane_ParamLimits

0x5a3f,	// (0x0001df8d) main_pane

0x8b2a,	// (0x00021078) misc_graphics

0x3a4d,	// (0x0001bf9b) battery_pane_ParamLimits

0x3a4d,	// (0x0001bf9b) battery_pane

0xcbd1,	// (0x0002511f) bg_status_flat_pane_g8

0xcbd9,	// (0x00025127) bg_status_flat_pane_g9

0xc293,	// (0x000247e1) context_pane_ParamLimits

0xc293,	// (0x000247e1) context_pane

0x3bb8,	// (0x0001c106) navi_pane_ParamLimits

0x3bb8,	// (0x0001c106) navi_pane

0x3c30,	// (0x0001c17e) signal_pane_ParamLimits

0x3c30,	// (0x0001c17e) signal_pane

0x0008,

0xf885,	// (0x00027dd3) bg_status_flat_pane_g

0x3cc0,	// (0x0001c20e) status_pane_g1_ParamLimits

0x3cc0,	// (0x0001c20e) status_pane_g1

0x3cd6,	// (0x0001c224) status_pane_g2_ParamLimits

0x3cd6,	// (0x0001c224) status_pane_g2

0xc2f8,	// (0x00024846) status_pane_g3_ParamLimits

0xc2f8,	// (0x00024846) status_pane_g3

0x0004,

0xf7b8,	// (0x00027d06) status_pane_g_ParamLimits

0xf7b8,	// (0x00027d06) status_pane_g

0x3ce2,	// (0x0001c230) title_pane_ParamLimits

0x3ce2,	// (0x0001c230) title_pane

0x3d45,	// (0x0001c293) uni_indicator_pane_ParamLimits

0x3d45,	// (0x0001c293) uni_indicator_pane

0xc0be,	// (0x0002460c) bg_list_pane_ParamLimits

0xc0be,	// (0x0002460c) bg_list_pane

0x3322,	// (0x0001b870) find_pane

0x332a,	// (0x0001b878) listscroll_app_pane_ParamLimits

0x332a,	// (0x0001b878) listscroll_app_pane

0xc0de,	// (0x0002462c) listscroll_form_pane

0x3336,	// (0x0001b884) listscroll_gen_pane_ParamLimits

0x3336,	// (0x0001b884) listscroll_gen_pane

0xc0de,	// (0x0002462c) listscroll_set_pane

0xcb35,	// (0x00025083) main_idle_act_pane

0xbe8a,	// (0x000243d8) main_idle_trad_pane

0xbe8a,	// (0x000243d8) main_list_empty_pane

0xb5ca,	// (0x00023b18) main_midp_pane

0xc0f8,	// (0x00024646) main_pane_g1_ParamLimits

0xc0f8,	// (0x00024646) main_pane_g1

0x334a,	// (0x0001b898) popup_ai_message_window_ParamLimits

0x334a,	// (0x0001b898) popup_ai_message_window

0x33db,	// (0x0001b929) popup_fep_china_uni_window_ParamLimits

0x33db,	// (0x0001b929) popup_fep_china_uni_window

0xc12e,	// (0x0002467c) popup_fep_japan_candidate_window_ParamLimits

0xc12e,	// (0x0002467c) popup_fep_japan_candidate_window

0xc14e,	// (0x0002469c) popup_fep_japan_predictive_window_ParamLimits

0xc14e,	// (0x0002469c) popup_fep_japan_predictive_window

0x3437,	// (0x0001b985) popup_find_window

0x3454,	// (0x0001b9a2) popup_grid_graphic_window_ParamLimits

0x3454,	// (0x0001b9a2) popup_grid_graphic_window

0xc17e,	// (0x000246cc) popup_large_graphic_colour_window

0x34ec,	// (0x0001ba3a) popup_menu_window_ParamLimits

0x34ec,	// (0x0001ba3a) popup_menu_window

0x36a6,	// (0x0001bbf4) popup_note_image_window

0x366c,	// (0x0001bbba) popup_note_wait_window_ParamLimits

0x366c,	// (0x0001bbba) popup_note_wait_window

0x36be,	// (0x0001bc0c) popup_note_window_ParamLimits

0x36be,	// (0x0001bc0c) popup_note_window

0x3764,	// (0x0001bcb2) popup_query_code_window_ParamLimits

0x3764,	// (0x0001bcb2) popup_query_code_window

0xc1a4,	// (0x000246f2) popup_query_data_code_window_ParamLimits

0xc1a4,	// (0x000246f2) popup_query_data_code_window

0x379e,	// (0x0001bcec) popup_query_data_window_ParamLimits

0x379e,	// (0x0001bcec) popup_query_data_window

0x3814,	// (0x0001bd62) popup_query_sat_info_window_ParamLimits

0x3814,	// (0x0001bd62) popup_query_sat_info_window

0x38ab,	// (0x0001bdf9) popup_snote_single_graphic_window_ParamLimits

0x38ab,	// (0x0001bdf9) popup_snote_single_graphic_window

0x38ab,	// (0x0001bdf9) popup_snote_single_text_window_ParamLimits

0x38ab,	// (0x0001bdf9) popup_snote_single_text_window

0xc1c1,	// (0x0002470f) popup_sub_window_general

0xc209,	// (0x00024757) popup_window_general_ParamLimits

0xc209,	// (0x00024757) popup_window_general

0xc21e,	// (0x0002476c) power_save_pane

0x91f2,	// (0x00021740) control_pane_g1_ParamLimits

0x91f2,	// (0x00021740) control_pane_g1

0x921b,	// (0x00021769) control_pane_g2_ParamLimits

0x921b,	// (0x00021769) control_pane_g2

0xc098,	// (0x000245e6) control_pane_g3_ParamLimits

0xc098,	// (0x000245e6) control_pane_g3

0x0007,

0xf7a0,	// (0x00027cee) control_pane_g_ParamLimits

0xf7a0,	// (0x00027cee) control_pane_g

0x9258,	// (0x000217a6) control_pane_t1_ParamLimits

0x9258,	// (0x000217a6) control_pane_t1

0x92b6,	// (0x00021804) control_pane_t2_ParamLimits

0x92b6,	// (0x00021804) control_pane_t2

0x0002,

0xf7b1,	// (0x00027cff) control_pane_t_ParamLimits

0xf7b1,	// (0x00027cff) control_pane_t

0xbfb9,	// (0x00024507) navi_navi_volume_pane_cp1

0xbfc2,	// (0x00024510) status_small_icon_pane

0xbfca,	// (0x00024518) status_small_pane_g1_ParamLimits

0xbfca,	// (0x00024518) status_small_pane_g1

0xbffe,	// (0x0002454c) status_small_pane_g2_ParamLimits

0xbffe,	// (0x0002454c) status_small_pane_g2

0xc00a,	// (0x00024558) status_small_pane_g3_ParamLimits

0xc00a,	// (0x00024558) status_small_pane_g3

0xc016,	// (0x00024564) status_small_pane_g4_ParamLimits

0xc016,	// (0x00024564) status_small_pane_g4

0xc022,	// (0x00024570) status_small_pane_g5_ParamLimits

0xc022,	// (0x00024570) status_small_pane_g5

0xc031,	// (0x0002457f) status_small_pane_g6_ParamLimits

0xc031,	// (0x0002457f) status_small_pane_g6

0x0007,

0xf78f,	// (0x00027cdd) status_small_pane_g_ParamLimits

0xf78f,	// (0x00027cdd) status_small_pane_g

0xc061,	// (0x000245af) status_small_pane_t1

0xc084,	// (0x000245d2) status_small_wait_pane_ParamLimits

0xc084,	// (0x000245d2) status_small_wait_pane

0x30d1,	// (0x0001b61f) aid_levels_signal_ParamLimits

0x30d1,	// (0x0001b61f) aid_levels_signal

0x30e9,	// (0x0001b637) signal_pane_g1_ParamLimits

0x30e9,	// (0x0001b637) signal_pane_g1

0x3104,	// (0x0001b652) signal_pane_g2_ParamLimits

0x3104,	// (0x0001b652) signal_pane_g2

0x0003,

0xf720,	// (0x00027c6e) signal_pane_g_ParamLimits

0xf720,	// (0x00027c6e) signal_pane_g

0xb9f0,	// (0x00023f3e) context_pane_g1

0x2697,	// (0x0001abe5) title_pane_g1

0x26ce,	// (0x0001ac1c) title_pane_t1

0x8bfb,	// (0x00021149) title_pane_t2

0x8c21,	// (0x0002116f) title_pane_t3

0x0002,

0xf56f,	// (0x00027abd) title_pane_t

0x3d6d,	// (0x0001c2bb) aid_levels_battery_ParamLimits

0x3d6d,	// (0x0001c2bb) aid_levels_battery

0x3d89,	// (0x0001c2d7) battery_pane_g1_ParamLimits

0x3d89,	// (0x0001c2d7) battery_pane_g1

0x3da6,	// (0x0001c2f4) battery_pane_g2_ParamLimits

0x3da6,	// (0x0001c2f4) battery_pane_g2

0x0001,

0xf7c3,	// (0x00027d11) battery_pane_g_ParamLimits

0xf7c3,	// (0x00027d11) battery_pane_g

0xd434,	// (0x00025982) uni_indicator_pane_g1

0xd449,	// (0x00025997) uni_indicator_pane_g2

0xd45f,	// (0x000259ad) uni_indicator_pane_g3

0x0005,

0xf92d,	// (0x00027e7b) uni_indicator_pane_g

0xbcfc,	// (0x0002424a) navi_icon_pane_ParamLimits

0xbcfc,	// (0x0002424a) navi_icon_pane

0xbc45,	// (0x00024193) navi_midp_pane

0xbd18,	// (0x00024266) navi_navi_pane

0xbd22,	// (0x00024270) navi_text_pane_ParamLimits

0xbd22,	// (0x00024270) navi_text_pane

0x8a3a,	// (0x00020f88) status_small_wait_pane_g1

0x8f08,	// (0x00021456) status_small_wait_pane_g2

0x0001,

0xf928,	// (0x00027e76) status_small_wait_pane_g

0xd180,	// (0x000256ce) navi_navi_icon_text_pane

0xd188,	// (0x000256d6) navi_navi_pane_g1_ParamLimits

0xd188,	// (0x000256d6) navi_navi_pane_g1

0xd19a,	// (0x000256e8) navi_navi_pane_g2_ParamLimits

0xd19a,	// (0x000256e8) navi_navi_pane_g2

0x0001,

0xf8f6,	// (0x00027e44) navi_navi_pane_g_ParamLimits

0xf8f6,	// (0x00027e44) navi_navi_pane_g

0xd1ac,	// (0x000256fa) navi_navi_tabs_pane

0xd1b5,	// (0x00025703) navi_navi_text_pane

0xd180,	// (0x000256ce) navi_navi_volume_pane

0xd15c,	// (0x000256aa) navi_text_pane_t1

0xd150,	// (0x0002569e) navi_icon_pane_g1

0xd0a3,	// (0x000255f1) navi_navi_text_pane_t1

0x95a5,	// (0x00021af3) navi_navi_volume_pane_g1

0x95ad,	// (0x00021afb) volume_small_pane

0x9501,	// (0x00021a4f) navi_navi_icon_text_pane_g1

0x9509,	// (0x00021a57) navi_navi_icon_text_pane_t1

0xbd18,	// (0x00024266) navi_tabs_2_long_pane

0xbd18,	// (0x00024266) navi_tabs_2_pane

0xbd18,	// (0x00024266) navi_tabs_3_long_pane

0xbd18,	// (0x00024266) navi_tabs_3_pane

0xbd18,	// (0x00024266) navi_tabs_4_pane

0x94e1,	// (0x00021a2f) tabs_2_active_pane_ParamLimits

0x94e1,	// (0x00021a2f) tabs_2_active_pane

0x94f1,	// (0x00021a3f) tabs_2_passive_pane_ParamLimits

0x94f1,	// (0x00021a3f) tabs_2_passive_pane

0x94af,	// (0x000219fd) tabs_3_active_pane_ParamLimits

0x94af,	// (0x000219fd) tabs_3_active_pane

0x94bf,	// (0x00021a0d) tabs_3_passive_pane_ParamLimits

0x94bf,	// (0x00021a0d) tabs_3_passive_pane

0x94d0,	// (0x00021a1e) tabs_3_passive_pane_cp_ParamLimits

0x94d0,	// (0x00021a1e) tabs_3_passive_pane_cp

0x946b,	// (0x000219b9) tabs_4_active_pane_ParamLimits

0x946b,	// (0x000219b9) tabs_4_active_pane

0x947c,	// (0x000219ca) tabs_4_passive_pane_ParamLimits

0x947c,	// (0x000219ca) tabs_4_passive_pane

0x948d,	// (0x000219db) tabs_4_passive_pane_cp_ParamLimits

0x948d,	// (0x000219db) tabs_4_passive_pane_cp

0x949e,	// (0x000219ec) tabs_4_passive_pane_cp2_ParamLimits

0x949e,	// (0x000219ec) tabs_4_passive_pane_cp2

0x944b,	// (0x00021999) tabs_2_long_active_pane_ParamLimits

0x944b,	// (0x00021999) tabs_2_long_active_pane

0x945b,	// (0x000219a9) tabs_2_long_passive_pane_ParamLimits

0x945b,	// (0x000219a9) tabs_2_long_passive_pane

0x9418,	// (0x00021966) tabs_3_long_active_pane_ParamLimits

0x9418,	// (0x00021966) tabs_3_long_active_pane

0x9429,	// (0x00021977) tabs_3_long_passive_pane_ParamLimits

0x9429,	// (0x00021977) tabs_3_long_passive_pane

0x943a,	// (0x00021988) tabs_3_long_passive_pane_cp_ParamLimits

0x943a,	// (0x00021988) tabs_3_long_passive_pane_cp

0x6410,	// (0x0001e95e) volume_small_pane_g1

0x93c7,	// (0x00021915) volume_small_pane_g2

0x93d0,	// (0x0002191e) volume_small_pane_g3

0x93d9,	// (0x00021927) volume_small_pane_g4

0x93e2,	// (0x00021930) volume_small_pane_g5

0x93eb,	// (0x00021939) volume_small_pane_g6

0x93f4,	// (0x00021942) volume_small_pane_g7

0x93fd,	// (0x0002194b) volume_small_pane_g8

0x9406,	// (0x00021954) volume_small_pane_g9

0x940f,	// (0x0002195d) volume_small_pane_g10

0x0009,

0xf8c2,	// (0x00027e10) volume_small_pane_g

0x8c33,	// (0x00021181) bg_active_tab_pane_cp2_ParamLimits

0x8c33,	// (0x00021181) bg_active_tab_pane_cp2

0x275a,	// (0x0001aca8) tabs_3_active_pane_g1

0x2762,	// (0x0001acb0) tabs_3_active_pane_t1

0x8c33,	// (0x00021181) bg_passive_tab_pane_cp2_ParamLimits

0x8c33,	// (0x00021181) bg_passive_tab_pane_cp2

0x275a,	// (0x0001aca8) tabs_3_passive_pane_g1

0x2762,	// (0x0001acb0) tabs_3_passive_pane_t1

0x8c33,	// (0x00021181) bg_active_tab_pane_cp3_ParamLimits

0x8c33,	// (0x00021181) bg_active_tab_pane_cp3

0x2774,	// (0x0001acc2) tabs_4_active_pane_g1

0x277c,	// (0x0001acca) tabs_4_active_pane_t1

0x8c33,	// (0x00021181) bg_passive_tab_pane_cp3_ParamLimits

0x8c33,	// (0x00021181) bg_passive_tab_pane_cp3

0x2774,	// (0x0001acc2) tabs_4_1_passive_pane_g1

0x277c,	// (0x0001acca) tabs_4_1_passive_pane_t1

0xb5ca,	// (0x00023b18) list_highlight_pane_cp2

0x9656,	// (0x00021ba4) list_set_pane_ParamLimits

0x9656,	// (0x00021ba4) list_set_pane

0x96f0,	// (0x00021c3e) main_pane_set_t1_ParamLimits

0x96f0,	// (0x00021c3e) main_pane_set_t1

0x9710,	// (0x00021c5e) main_pane_set_t2_ParamLimits

0x9710,	// (0x00021c5e) main_pane_set_t2

0x9724,	// (0x00021c72) main_pane_set_t3_ParamLimits

0x9724,	// (0x00021c72) main_pane_set_t3

0x9736,	// (0x00021c84) main_pane_set_t4_ParamLimits

0x9736,	// (0x00021c84) main_pane_set_t4

0x0003,

0xf992,	// (0x00027ee0) main_pane_set_t_ParamLimits

0xf992,	// (0x00027ee0) main_pane_set_t

0x9748,	// (0x00021c96) setting_code_pane

0x9752,	// (0x00021ca0) setting_slider_graphic_pane

0x9752,	// (0x00021ca0) setting_slider_pane

0x9752,	// (0x00021ca0) setting_text_pane

0x9752,	// (0x00021ca0) setting_volume_pane

0x5c84,	// (0x0001e1d2) volume_set_pane

0x8c41,	// (0x0002118f) bg_set_opt_pane_cp

0x5c8c,	// (0x0001e1da) setting_slider_pane_t1

0x5ca5,	// (0x0001e1f3) setting_slider_pane_t2

0x5cbf,	// (0x0001e20d) setting_slider_pane_t3

0x0002,

0xf576,	// (0x00027ac4) setting_slider_pane_t

0x5cd7,	// (0x0001e225) slider_set_pane

0x8b2a,	// (0x00021078) bg_set_opt_pane_cp2

0x8c4f,	// (0x0002119d) setting_slider_graphic_pane_g1

0x5ced,	// (0x0001e23b) setting_slider_graphic_pane_t1

0x5cfd,	// (0x0001e24b) setting_slider_graphic_pane_t2

0x0001,

0xf57d,	// (0x00027acb) setting_slider_graphic_pane_t

0x5d0d,	// (0x0001e25b) slider_set_pane_cp

0x8b2a,	// (0x00021078) input_focus_pane_cp1

0xd642,	// (0x00025b90) list_set_text_pane

0x8a3a,	// (0x00020f88) setting_text_pane_g1

0x8b2a,	// (0x00021078) input_focus_pane_cp2

0x8a3a,	// (0x00020f88) setting_code_pane_g1

0x8c58,	// (0x000211a6) setting_code_pane_t1

0x4883,	// (0x0001cdd1) set_text_pane_t1_ParamLimits

0x4883,	// (0x0001cdd1) set_text_pane_t1

0xb4d9,	// (0x00023a27) set_opt_bg_pane_g1

0xb4e1,	// (0x00023a2f) set_opt_bg_pane_g2

0xd61c,	// (0x00025b6a) set_opt_bg_pane_g3

0xb4f1,	// (0x00023a3f) set_opt_bg_pane_g4

0xb4f9,	// (0x00023a47) set_opt_bg_pane_g5

0xb501,	// (0x00023a4f) set_opt_bg_pane_g6

0xd626,	// (0x00025b74) set_opt_bg_pane_g7

0xd62e,	// (0x00025b7c) set_opt_bg_pane_g8

0xd638,	// (0x00025b86) set_opt_bg_pane_g9

0x0008,

0xf97f,	// (0x00027ecd) set_opt_bg_pane_g

0xd60f,	// (0x00025b5d) slider_set_pane_g1

0x65d8,	// (0x0001eb26) slider_set_pane_g2

0x0006,

0xf970,	// (0x00027ebe) slider_set_pane_g

0x6574,	// (0x0001eac2) volume_set_pane_g1

0x657c,	// (0x0001eaca) volume_set_pane_g2

0x6584,	// (0x0001ead2) volume_set_pane_g3

0x658c,	// (0x0001eada) volume_set_pane_g4

0x6594,	// (0x0001eae2) volume_set_pane_g5

0x659c,	// (0x0001eaea) volume_set_pane_g6

0x65a4,	// (0x0001eaf2) volume_set_pane_g7

0x65ac,	// (0x0001eafa) volume_set_pane_g8

0x65b4,	// (0x0001eb02) volume_set_pane_g9

0x65bc,	// (0x0001eb0a) volume_set_pane_g10

0x0009,

0xf948,	// (0x00027e96) volume_set_pane_g

0x278e,	// (0x0001acdc) indicator_pane_ParamLimits

0x278e,	// (0x0001acdc) indicator_pane

0x27b6,	// (0x0001ad04) main_idle_pane_g2_ParamLimits

0x27b6,	// (0x0001ad04) main_idle_pane_g2

0x27ee,	// (0x0001ad3c) main_pane_idle_g1_ParamLimits

0x27ee,	// (0x0001ad3c) main_pane_idle_g1

0x8c66,	// (0x000211b4) popup_clock_digital_analogue_window_ParamLimits

0x8c66,	// (0x000211b4) popup_clock_digital_analogue_window

0x2815,	// (0x0001ad63) soft_indicator_pane_ParamLimits

0x2815,	// (0x0001ad63) soft_indicator_pane

0x282f,	// (0x0001ad7d) wallpaper_pane_ParamLimits

0x282f,	// (0x0001ad7d) wallpaper_pane

0x8a3a,	// (0x00020f88) wallpaper_pane_g1

0x2841,	// (0x0001ad8f) indicator_pane_g1_ParamLimits

0x2841,	// (0x0001ad8f) indicator_pane_g1

0xd799,	// (0x00025ce7) navi_navi_icon_text_pane_srt_g1

0x8c94,	// (0x000211e2) soft_indicator_pane_t1

0x8cae,	// (0x000211fc) aid_ps_area_pane

0x2857,	// (0x0001ada5) aid_ps_clock_pane

0x8cbf,	// (0x0002120d) aid_ps_indicator_pane

0x8ccb,	// (0x00021219) indicator_ps_pane_ParamLimits

0x8ccb,	// (0x00021219) indicator_ps_pane

0x8cda,	// (0x00021228) power_save_pane_g1_ParamLimits

0x8cda,	// (0x00021228) power_save_pane_g1

0x8ce6,	// (0x00021234) power_save_pane_g2_ParamLimits

0x8ce6,	// (0x00021234) power_save_pane_g2

0x589f,	// (0x0001dded) aid_navinavi_width_pane

0x8cae,	// (0x000211fc) aid_ps_area_pane_ParamLimits

0x0001,

0xf582,	// (0x00027ad0) power_save_pane_g_ParamLimits

0xf582,	// (0x00027ad0) power_save_pane_g

0x8cf4,	// (0x00021242) power_save_pane_t1_ParamLimits

0x8cf4,	// (0x00021242) power_save_pane_t1

0x2857,	// (0x0001ada5) aid_ps_clock_pane_ParamLimits

0x8cbf,	// (0x0002120d) aid_ps_indicator_pane_ParamLimits

0x8d06,	// (0x00021254) power_save_pane_t4_ParamLimits

0x8d06,	// (0x00021254) power_save_pane_t4

0x0001,

0xf587,	// (0x00027ad5) power_save_pane_t_ParamLimits

0xf587,	// (0x00027ad5) power_save_pane_t

0x8d30,	// (0x0002127e) power_save_t3_ParamLimits

0x8d30,	// (0x0002127e) power_save_t3

0x8d1b,	// (0x00021269) power_save_t2_ParamLimits

0x8d1b,	// (0x00021269) power_save_t2

0x8d45,	// (0x00021293) indicator_ps_pane_g1

0x2865,	// (0x0001adb3) ai_gene_pane_ParamLimits

0x2865,	// (0x0001adb3) ai_gene_pane

0x287c,	// (0x0001adca) ai_links_pane_ParamLimits

0x287c,	// (0x0001adca) ai_links_pane

0x2894,	// (0x0001ade2) indicator_pane_cp1_ParamLimits

0x2894,	// (0x0001ade2) indicator_pane_cp1

0x28a3,	// (0x0001adf1) main_pane_idle_g1_cp_ParamLimits

0x28a3,	// (0x0001adf1) main_pane_idle_g1_cp

0x8d4e,	// (0x0002129c) popup_ai_links_title_window

0x28bb,	// (0x0001ae09) soft_indicator_pane_cp1_ParamLimits

0x28bb,	// (0x0001ae09) soft_indicator_pane_cp1

0xd422,	// (0x00025970) ai_links_pane_g1

0xd42b,	// (0x00025979) grid_ai_links_pane

0x95da,	// (0x00021b28) ai_gene_pane_1

0xd410,	// (0x0002595e) ai_gene_pane_2

0xd419,	// (0x00025967) list_highlight_pane_cp4

0x95b6,	// (0x00021b04) cell_ai_link_pane_ParamLimits

0x95b6,	// (0x00021b04) cell_ai_link_pane

0xd408,	// (0x00025956) cell_ai_link_pane_g1

0x8f08,	// (0x00021456) cell_ai_link_pane_g2

0x0001,

0xf923,	// (0x00027e71) cell_ai_link_pane_g

0x8b2a,	// (0x00021078) grid_highlight_cp2

0x8b2a,	// (0x00021078) bg_popup_sub_pane_cp1

0x8d65,	// (0x000212b3) popup_ai_links_title_window_t1

0xd356,	// (0x000258a4) ai_gene_pane_1_g1_ParamLimits

0xd356,	// (0x000258a4) ai_gene_pane_1_g1

0xd362,	// (0x000258b0) ai_gene_pane_1_g2_ParamLimits

0xd362,	// (0x000258b0) ai_gene_pane_1_g2

0x0001,

0xf919,	// (0x00027e67) ai_gene_pane_1_g_ParamLimits

0xf919,	// (0x00027e67) ai_gene_pane_1_g

0xd36f,	// (0x000258bd) ai_gene_pane_1_t1_ParamLimits

0xd36f,	// (0x000258bd) ai_gene_pane_1_t1

0xd3a3,	// (0x000258f1) grid_ai_soft_ind_pane

0xd341,	// (0x0002588f) ai_gene_pane_2_t1_ParamLimits

0xd341,	// (0x0002588f) ai_gene_pane_2_t1

0x28cf,	// (0x0001ae1d) main_pane_empty_t1_ParamLimits

0x28cf,	// (0x0001ae1d) main_pane_empty_t1

0x28e7,	// (0x0001ae35) main_pane_empty_t2_ParamLimits

0x28e7,	// (0x0001ae35) main_pane_empty_t2

0x28fc,	// (0x0001ae4a) main_pane_empty_t3_ParamLimits

0x28fc,	// (0x0001ae4a) main_pane_empty_t3

0x290e,	// (0x0001ae5c) main_pane_empty_t4_ParamLimits

0x290e,	// (0x0001ae5c) main_pane_empty_t4

0x2920,	// (0x0001ae6e) main_pane_empty_t5_ParamLimits

0x2920,	// (0x0001ae6e) main_pane_empty_t5

0x0004,

0xf58c,	// (0x00027ada) main_pane_empty_t_ParamLimits

0xf58c,	// (0x00027ada) main_pane_empty_t

0xb52a,	// (0x00023a78) bg_popup_window_pane_ParamLimits

0xb52a,	// (0x00023a78) bg_popup_window_pane

0xd0b1,	// (0x000255ff) find_popup_pane_cp2_ParamLimits

0xd0b1,	// (0x000255ff) find_popup_pane_cp2

0xd0bd,	// (0x0002560b) heading_pane_ParamLimits

0xd0bd,	// (0x0002560b) heading_pane

0x8b2a,	// (0x00021078) bg_popup_sub_pane

0x9526,	// (0x00021a74) bg_popup_window_pane_g1_ParamLimits

0x9526,	// (0x00021a74) bg_popup_window_pane_g1

0x9535,	// (0x00021a83) bg_popup_window_pane_g2_ParamLimits

0x9535,	// (0x00021a83) bg_popup_window_pane_g2

0x9541,	// (0x00021a8f) bg_popup_window_pane_g3_ParamLimits

0x9541,	// (0x00021a8f) bg_popup_window_pane_g3

0x954d,	// (0x00021a9b) bg_popup_window_pane_g4_ParamLimits

0x954d,	// (0x00021a9b) bg_popup_window_pane_g4

0x955c,	// (0x00021aaa) bg_popup_window_pane_g5_ParamLimits

0x955c,	// (0x00021aaa) bg_popup_window_pane_g5

0x956c,	// (0x00021aba) bg_popup_window_pane_g6_ParamLimits

0x956c,	// (0x00021aba) bg_popup_window_pane_g6

0x9578,	// (0x00021ac6) bg_popup_window_pane_g7_ParamLimits

0x9578,	// (0x00021ac6) bg_popup_window_pane_g7

0x9587,	// (0x00021ad5) bg_popup_window_pane_g8_ParamLimits

0x9587,	// (0x00021ad5) bg_popup_window_pane_g8

0x9596,	// (0x00021ae4) bg_popup_window_pane_g9_ParamLimits

0x9596,	// (0x00021ae4) bg_popup_window_pane_g9

0xd097,	// (0x000255e5) bg_popup_window_pane_g10_ParamLimits

0xd097,	// (0x000255e5) bg_popup_window_pane_g10

0x0009,

0xf8e1,	// (0x00027e2f) bg_popup_window_pane_g_ParamLimits

0xf8e1,	// (0x00027e2f) bg_popup_window_pane_g

0xd04e,	// (0x0002559c) bg_popup_heading_pane_ParamLimits

0xd04e,	// (0x0002559c) bg_popup_heading_pane

0x6660,	// (0x0001ebae) tabs_4_passive_pane_cp_srt_ParamLimits

0x6660,	// (0x0001ebae) tabs_4_passive_pane_cp_srt

0x6672,	// (0x0001ebc0) tabs_4_passive_pane_srt_ParamLimits

0xd062,	// (0x000255b0) heading_pane_g2

0x6672,	// (0x0001ebc0) tabs_4_passive_pane_srt

0xc4fe,	// (0x00024a4c) bg_passive_tab_pane_cp3_srt_ParamLimits

0xc4fe,	// (0x00024a4c) bg_passive_tab_pane_cp3_srt

0xd06a,	// (0x000255b8) heading_pane_t1_ParamLimits

0xd06a,	// (0x000255b8) heading_pane_t1

0xd081,	// (0x000255cf) heading_pane_t2_ParamLimits

0xd081,	// (0x000255cf) heading_pane_t2

0x0001,

0xf8dc,	// (0x00027e2a) heading_pane_t_ParamLimits

0xf8dc,	// (0x00027e2a) heading_pane_t

0xcb99,	// (0x000250e7) bg_popup_heading_pane_g1

0xcc2a,	// (0x00025178) bg_popup_heading_pane_g2

0xcc34,	// (0x00025182) bg_popup_heading_pane_g3

0xcc3e,	// (0x0002518c) bg_popup_heading_pane_g4

0xcc48,	// (0x00025196) bg_popup_heading_pane_g5

0xcc52,	// (0x000251a0) bg_popup_heading_pane_g6

0xcc5a,	// (0x000251a8) bg_popup_heading_pane_g7

0xcc62,	// (0x000251b0) bg_popup_heading_pane_g8

0xcc6c,	// (0x000251ba) bg_popup_heading_pane_g9

0x0008,

0xf898,	// (0x00027de6) bg_popup_heading_pane_g

0xc3ee,	// (0x0002493c) bg_popup_sub_pane_g1

0xc3f6,	// (0x00024944) bg_popup_sub_pane_g2

0xc3fe,	// (0x0002494c) bg_popup_sub_pane_g3

0xc406,	// (0x00024954) bg_popup_sub_pane_g4

0xc40e,	// (0x0002495c) bg_popup_sub_pane_g5

0xc416,	// (0x00024964) bg_popup_sub_pane_g6

0xc41e,	// (0x0002496c) bg_popup_sub_pane_g7

0xc426,	// (0x00024974) bg_popup_sub_pane_g8

0xc42e,	// (0x0002497c) bg_popup_sub_pane_g9

0x0008,

0xf872,	// (0x00027dc0) bg_popup_sub_pane_g

0x8c33,	// (0x00021181) bg_popup_window_pane_cp5_ParamLimits

0x8c33,	// (0x00021181) bg_popup_window_pane_cp5

0x8d82,	// (0x000212d0) popup_note_window_g1_ParamLimits

0x8d82,	// (0x000212d0) popup_note_window_g1

0x8d8e,	// (0x000212dc) popup_note_window_t1_ParamLimits

0x8d8e,	// (0x000212dc) popup_note_window_t1

0x8da4,	// (0x000212f2) popup_note_window_t2_ParamLimits

0x8da4,	// (0x000212f2) popup_note_window_t2

0x8dba,	// (0x00021308) popup_note_window_t3_ParamLimits

0x8dba,	// (0x00021308) popup_note_window_t3

0x8dd0,	// (0x0002131e) popup_note_window_t4_ParamLimits

0x8dd0,	// (0x0002131e) popup_note_window_t4

0x8df8,	// (0x00021346) popup_note_window_t5_ParamLimits

0x8df8,	// (0x00021346) popup_note_window_t5

0x0004,

0xf597,	// (0x00027ae5) popup_note_window_t_ParamLimits

0xf597,	// (0x00027ae5) popup_note_window_t

0x8e1c,	// (0x0002136a) bg_popup_window_pane_cp6_ParamLimits

0x8e1c,	// (0x0002136a) bg_popup_window_pane_cp6

0xcac7,	// (0x00025015) popup_note_image_window_g1_ParamLimits

0xcac7,	// (0x00025015) popup_note_image_window_g1

0xcad3,	// (0x00025021) popup_note_image_window_g2_ParamLimits

0xcad3,	// (0x00025021) popup_note_image_window_g2

0x0001,

0xf866,	// (0x00027db4) popup_note_image_window_g_ParamLimits

0xf866,	// (0x00027db4) popup_note_image_window_g

0xcaec,	// (0x0002503a) popup_note_image_window_t1_ParamLimits

0xcaec,	// (0x0002503a) popup_note_image_window_t1

0xcb53,	// (0x000250a1) popup_note_image_window_t2_ParamLimits

0xcb53,	// (0x000250a1) popup_note_image_window_t2

0xcb6c,	// (0x000250ba) popup_note_image_window_t3_ParamLimits

0xcb6c,	// (0x000250ba) popup_note_image_window_t3

0x0002,

0xf86b,	// (0x00027db9) popup_note_image_window_t_ParamLimits

0xf86b,	// (0x00027db9) popup_note_image_window_t

0xc9a4,	// (0x00024ef2) bg_popup_window_pane_cp7_ParamLimits

0xc9a4,	// (0x00024ef2) bg_popup_window_pane_cp7

0xc9d4,	// (0x00024f22) popup_note_wait_window_g1_ParamLimits

0xc9d4,	// (0x00024f22) popup_note_wait_window_g1

0xc9e0,	// (0x00024f2e) popup_note_wait_window_g2_ParamLimits

0xc9e0,	// (0x00024f2e) popup_note_wait_window_g2

0x0002,

0xf854,	// (0x00027da2) popup_note_wait_window_g_ParamLimits

0xf854,	// (0x00027da2) popup_note_wait_window_g

0xc9f8,	// (0x00024f46) popup_note_wait_window_t1_ParamLimits

0xc9f8,	// (0x00024f46) popup_note_wait_window_t1

0xca1f,	// (0x00024f6d) popup_note_wait_window_t2_ParamLimits

0xca1f,	// (0x00024f6d) popup_note_wait_window_t2

0xca3c,	// (0x00024f8a) popup_note_wait_window_t3_ParamLimits

0xca3c,	// (0x00024f8a) popup_note_wait_window_t3

0xca4f,	// (0x00024f9d) popup_note_wait_window_t4_ParamLimits

0xca4f,	// (0x00024f9d) popup_note_wait_window_t4

0x0004,

0xf85b,	// (0x00027da9) popup_note_wait_window_t_ParamLimits

0xf85b,	// (0x00027da9) popup_note_wait_window_t

0xca74,	// (0x00024fc2) wait_bar_pane_ParamLimits

0xca74,	// (0x00024fc2) wait_bar_pane

0x8b2a,	// (0x00021078) wait_anim_pane

0x8b2a,	// (0x00021078) wait_border_pane

0x8a3a,	// (0x00020f88) wait_anim_pane_g1

0x8a3a,	// (0x00020f88) wait_anim_pane_g2

0x0001,

0xf71b,	// (0x00027c69) wait_anim_pane_g

0xc948,	// (0x00024e96) wait_border_pane_g1

0xc953,	// (0x00024ea1) wait_border_pane_g2

0xc95c,	// (0x00024eaa) wait_border_pane_g3

0x0002,

0xf84d,	// (0x00027d9b) wait_border_pane_g

0xc7b3,	// (0x00024d01) bg_popup_window_pane_cp16_ParamLimits

0xc7b3,	// (0x00024d01) bg_popup_window_pane_cp16

0xc8b3,	// (0x00024e01) indicator_popup_pane_cp4_ParamLimits

0xc8b3,	// (0x00024e01) indicator_popup_pane_cp4

0xc8c7,	// (0x00024e15) popup_query_data_window_t1_ParamLimits

0xc8c7,	// (0x00024e15) popup_query_data_window_t1

0xc8d9,	// (0x00024e27) popup_query_data_window_t2_ParamLimits

0xc8d9,	// (0x00024e27) popup_query_data_window_t2

0xc8f2,	// (0x00024e40) popup_query_data_window_t3_ParamLimits

0xc8f2,	// (0x00024e40) popup_query_data_window_t3

0x0002,

0xf846,	// (0x00027d94) popup_query_data_window_t_ParamLimits

0xf846,	// (0x00027d94) popup_query_data_window_t

0xc90c,	// (0x00024e5a) query_popup_data_pane_ParamLimits

0xc90c,	// (0x00024e5a) query_popup_data_pane

0xc920,	// (0x00024e6e) query_popup_data_pane_cp1_ParamLimits

0xc920,	// (0x00024e6e) query_popup_data_pane_cp1

0xc7b3,	// (0x00024d01) bg_popup_window_pane_cp10_ParamLimits

0xc7b3,	// (0x00024d01) bg_popup_window_pane_cp10

0xc7e5,	// (0x00024d33) indicator_popup_pane_ParamLimits

0xc7e5,	// (0x00024d33) indicator_popup_pane

0xc807,	// (0x00024d55) popup_query_code_window_t1_ParamLimits

0xc807,	// (0x00024d55) popup_query_code_window_t1

0xc821,	// (0x00024d6f) popup_query_code_window_t2_ParamLimits

0xc821,	// (0x00024d6f) popup_query_code_window_t2

0xc86a,	// (0x00024db8) popup_query_code_window_t3_ParamLimits

0xc86a,	// (0x00024db8) popup_query_code_window_t3

0x0002,

0xf83f,	// (0x00027d8d) popup_query_code_window_t_ParamLimits

0xf83f,	// (0x00027d8d) popup_query_code_window_t

0xc899,	// (0x00024de7) query_popup_pane_ParamLimits

0xc899,	// (0x00024de7) query_popup_pane

0x8e1c,	// (0x0002136a) bg_popup_window_pane_cp15_ParamLimits

0x8e1c,	// (0x0002136a) bg_popup_window_pane_cp15

0x8e3a,	// (0x00021388) indicator_popup_pane_cp1_ParamLimits

0x8e3a,	// (0x00021388) indicator_popup_pane_cp1

0x8e4d,	// (0x0002139b) indicator_popup_pane_cp2_ParamLimits

0x8e4d,	// (0x0002139b) indicator_popup_pane_cp2

0x8e60,	// (0x000213ae) popup_query_data_code_window_g1_ParamLimits

0x8e60,	// (0x000213ae) popup_query_data_code_window_g1

0x8e73,	// (0x000213c1) popup_query_data_code_window_t1_ParamLimits

0x8e73,	// (0x000213c1) popup_query_data_code_window_t1

0x8e85,	// (0x000213d3) popup_query_data_code_window_t2_ParamLimits

0x8e85,	// (0x000213d3) popup_query_data_code_window_t2

0x8e97,	// (0x000213e5) popup_query_data_code_window_t3_ParamLimits

0x8e97,	// (0x000213e5) popup_query_data_code_window_t3

0x8ead,	// (0x000213fb) popup_query_data_code_window_t4_ParamLimits

0x8ead,	// (0x000213fb) popup_query_data_code_window_t4

0x0003,

0xf5a2,	// (0x00027af0) popup_query_data_code_window_t_ParamLimits

0xf5a2,	// (0x00027af0) popup_query_data_code_window_t

0x6339,	// (0x0001e887) list_single_midp_graphic_pane_g3

0x8ec5,	// (0x00021413) query_popup_data_pane_cp2_ParamLimits

0x8ed8,	// (0x00021426) query_popup_pane_cp2_ParamLimits

0x8ed8,	// (0x00021426) query_popup_pane_cp2

0x8b2a,	// (0x00021078) bg_popup_window_pane_cp11

0xc7ab,	// (0x00024cf9) heading_pane_cp5

0x8f66,	// (0x000214b4) listscroll_popup_info_pane

0x8b2a,	// (0x00021078) input_focus_pane_cp3

0x8eeb,	// (0x00021439) query_popup_pane_t1

0x8ef9,	// (0x00021447) list_popup_info_pane_ParamLimits

0x8ef9,	// (0x00021447) list_popup_info_pane

0x8f08,	// (0x00021456) listscroll_popup_info_pane_g1

0x8f10,	// (0x0002145e) scroll_pane_cp7

0x8f1a,	// (0x00021468) popup_info_list_pane_t1_ParamLimits

0x8f1a,	// (0x00021468) popup_info_list_pane_t1

0x8f34,	// (0x00021482) popup_info_list_pane_t2_ParamLimits

0x8f34,	// (0x00021482) popup_info_list_pane_t2

0x0001,

0xf5ab,	// (0x00027af9) popup_info_list_pane_t_ParamLimits

0xf5ab,	// (0x00027af9) popup_info_list_pane_t

0x8b2a,	// (0x00021078) bg_popup_window_pane_cp12

0xd7b3,	// (0x00025d01) find_popup_pane

0x8c41,	// (0x0002118f) bg_popup_window_pane_cp3

0x8f4e,	// (0x0002149c) heading_pane_cp3

0x8f5a,	// (0x000214a8) listscroll_popup_graphic_pane

0x8b2a,	// (0x00021078) bg_popup_window_pane_cp4

0x2982,	// (0x0001aed0) heading_pane_cp4

0x8f66,	// (0x000214b4) listscroll_popup_colour_pane

0x298a,	// (0x0001aed8) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x298a,	// (0x0001aed8) cell_large_graphic_colour_none_popup_pane

0x299e,	// (0x0001aeec) grid_large_graphic_colour_popup_pane_ParamLimits

0x299e,	// (0x0001aeec) grid_large_graphic_colour_popup_pane

0x29c2,	// (0x0001af10) listscroll_popup_colour_pane_g1_ParamLimits

0x29c2,	// (0x0001af10) listscroll_popup_colour_pane_g1

0x29d9,	// (0x0001af27) listscroll_popup_colour_pane_g2_ParamLimits

0x29d9,	// (0x0001af27) listscroll_popup_colour_pane_g2

0x29f0,	// (0x0001af3e) listscroll_popup_colour_pane_g3_ParamLimits

0x29f0,	// (0x0001af3e) listscroll_popup_colour_pane_g3

0x2a00,	// (0x0001af4e) listscroll_popup_colour_pane_g4_ParamLimits

0x2a00,	// (0x0001af4e) listscroll_popup_colour_pane_g4

0x0003,

0xf5b0,	// (0x00027afe) listscroll_popup_colour_pane_g_ParamLimits

0xf5b0,	// (0x00027afe) listscroll_popup_colour_pane_g

0x8f6e,	// (0x000214bc) scroll_pane_cp6_ParamLimits

0x8f6e,	// (0x000214bc) scroll_pane_cp6

0x2a10,	// (0x0001af5e) cell_large_graphic_colour_popup_pane_ParamLimits

0x2a10,	// (0x0001af5e) cell_large_graphic_colour_popup_pane

0x8f80,	// (0x000214ce) cell_large_graphic_colour_none_popup_pane_t1

0x8b2a,	// (0x00021078) grid_highlight_pane_cp5

0x8f8f,	// (0x000214dd) cell_large_graphic_colour_popup_pane_g1

0x8f97,	// (0x000214e5) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5b9,	// (0x00027b07) cell_large_graphic_colour_popup_pane_g

0x8f9f,	// (0x000214ed) cell_large_graphic_colour_popup_pane_g2_copy1

0x8fa8,	// (0x000214f6) grid_highlight_pane_cp4

0x8fb0,	// (0x000214fe) bg_popup_window_pane_cp8_ParamLimits

0x8fb0,	// (0x000214fe) bg_popup_window_pane_cp8

0x8fcb,	// (0x00021519) popup_snote_single_text_window_g1_ParamLimits

0x8fcb,	// (0x00021519) popup_snote_single_text_window_g1

0x8fdd,	// (0x0002152b) popup_snote_single_text_window_t1_ParamLimits

0x8fdd,	// (0x0002152b) popup_snote_single_text_window_t1

0x8ff0,	// (0x0002153e) popup_snote_single_text_window_t2_ParamLimits

0x8ff0,	// (0x0002153e) popup_snote_single_text_window_t2

0x9003,	// (0x00021551) popup_snote_single_text_window_t3_ParamLimits

0x9003,	// (0x00021551) popup_snote_single_text_window_t3

0x903c,	// (0x0002158a) popup_snote_single_text_window_t4_ParamLimits

0x903c,	// (0x0002158a) popup_snote_single_text_window_t4

0x9070,	// (0x000215be) popup_snote_single_text_window_t5_ParamLimits

0x9070,	// (0x000215be) popup_snote_single_text_window_t5

0x0004,

0xf5be,	// (0x00027b0c) popup_snote_single_text_window_t_ParamLimits

0xf5be,	// (0x00027b0c) popup_snote_single_text_window_t

0x909f,	// (0x000215ed) bg_popup_window_pane_cp9_ParamLimits

0x909f,	// (0x000215ed) bg_popup_window_pane_cp9

0x8fcb,	// (0x00021519) popup_snote_single_graphic_window_g1_ParamLimits

0x8fcb,	// (0x00021519) popup_snote_single_graphic_window_g1

0x90ad,	// (0x000215fb) popup_snote_single_graphic_window_g2_ParamLimits

0x90ad,	// (0x000215fb) popup_snote_single_graphic_window_g2

0x0001,

0xf5c9,	// (0x00027b17) popup_snote_single_graphic_window_g_ParamLimits

0xf5c9,	// (0x00027b17) popup_snote_single_graphic_window_g

0x90b9,	// (0x00021607) popup_snote_single_graphic_window_t1_ParamLimits

0x90b9,	// (0x00021607) popup_snote_single_graphic_window_t1

0x90cc,	// (0x0002161a) popup_snote_single_graphic_window_t2_ParamLimits

0x90cc,	// (0x0002161a) popup_snote_single_graphic_window_t2

0x90df,	// (0x0002162d) popup_snote_single_graphic_window_t3_ParamLimits

0x90df,	// (0x0002162d) popup_snote_single_graphic_window_t3

0x9118,	// (0x00021666) popup_snote_single_graphic_window_t4_ParamLimits

0x9118,	// (0x00021666) popup_snote_single_graphic_window_t4

0x914c,	// (0x0002169a) popup_snote_single_graphic_window_t5_ParamLimits

0x914c,	// (0x0002169a) popup_snote_single_graphic_window_t5

0x0004,

0xf5ce,	// (0x00027b1c) popup_snote_single_graphic_window_t_ParamLimits

0xf5ce,	// (0x00027b1c) popup_snote_single_graphic_window_t

0xd73b,	// (0x00025c89) grid_graphic_popup_pane_ParamLimits

0xd73b,	// (0x00025c89) grid_graphic_popup_pane

0xd763,	// (0x00025cb1) listscroll_popup_graphic_pane_g1_ParamLimits

0xd763,	// (0x00025cb1) listscroll_popup_graphic_pane_g1

0x9842,	// (0x00021d90) listscroll_popup_graphic_pane_g2_ParamLimits

0x9842,	// (0x00021d90) listscroll_popup_graphic_pane_g2

0x0001,

0xf9bc,	// (0x00027f0a) listscroll_popup_graphic_pane_g_ParamLimits

0xf9bc,	// (0x00027f0a) listscroll_popup_graphic_pane_g

0xcb47,	// (0x00025095) scroll_pane_cp5

0x9806,	// (0x00021d54) cell_graphic_popup_pane_ParamLimits

0x9806,	// (0x00021d54) cell_graphic_popup_pane

0xd706,	// (0x00025c54) cell_graphic_popup_pane_g1

0xd70e,	// (0x00025c5c) cell_graphic_popup_pane_g2

0x8f9f,	// (0x000214ed) cell_graphic_popup_pane_g3

0x0002,

0xf9b5,	// (0x00027f03) cell_graphic_popup_pane_g

0xd717,	// (0x00025c65) cell_graphic_popup_pane_t2

0x8fa8,	// (0x000214f6) grid_highlight_pane_cp3

0x918d,	// (0x000216db) list_gen_pane_ParamLimits

0x918d,	// (0x000216db) list_gen_pane

0x91b5,	// (0x00021703) scroll_pane

0x97bd,	// (0x00021d0b) bg_list_pane_g1_ParamLimits

0x97bd,	// (0x00021d0b) bg_list_pane_g1

0xd6af,	// (0x00025bfd) bg_list_pane_g2_ParamLimits

0xd6af,	// (0x00025bfd) bg_list_pane_g2

0xd6c4,	// (0x00025c12) bg_list_pane_g3_ParamLimits

0xd6c4,	// (0x00025c12) bg_list_pane_g3

0xd6d8,	// (0x00025c26) bg_list_pane_g4_ParamLimits

0xd6d8,	// (0x00025c26) bg_list_pane_g4

0x97da,	// (0x00021d28) bg_list_pane_g5_ParamLimits

0x97da,	// (0x00021d28) bg_list_pane_g5

0x0004,

0xf9aa,	// (0x00027ef8) bg_list_pane_g_ParamLimits

0xf9aa,	// (0x00027ef8) bg_list_pane_g

0x9785,	// (0x00021cd3) list_double2_graphic_large_graphic_pane_ParamLimits

0x9785,	// (0x00021cd3) list_double2_graphic_large_graphic_pane

0x9785,	// (0x00021cd3) list_double2_graphic_pane_ParamLimits

0x9785,	// (0x00021cd3) list_double2_graphic_pane

0x9785,	// (0x00021cd3) list_double2_large_graphic_pane_ParamLimits

0x9785,	// (0x00021cd3) list_double2_large_graphic_pane

0x9785,	// (0x00021cd3) list_double2_pane_ParamLimits

0x9785,	// (0x00021cd3) list_double2_pane

0x9785,	// (0x00021cd3) list_double_graphic_heading_pane_ParamLimits

0x9785,	// (0x00021cd3) list_double_graphic_heading_pane

0x9785,	// (0x00021cd3) list_double_graphic_pane_ParamLimits

0x9785,	// (0x00021cd3) list_double_graphic_pane

0x9785,	// (0x00021cd3) list_double_heading_pane_ParamLimits

0x9785,	// (0x00021cd3) list_double_heading_pane

0x9785,	// (0x00021cd3) list_double_large_graphic_pane_ParamLimits

0x9785,	// (0x00021cd3) list_double_large_graphic_pane

0x9785,	// (0x00021cd3) list_double_number_pane_ParamLimits

0x9785,	// (0x00021cd3) list_double_number_pane

0x9785,	// (0x00021cd3) list_double_pane_ParamLimits

0x9785,	// (0x00021cd3) list_double_pane

0x9785,	// (0x00021cd3) list_double_time_pane_ParamLimits

0x9785,	// (0x00021cd3) list_double_time_pane

0x9785,	// (0x00021cd3) list_setting_number_pane_ParamLimits

0x9785,	// (0x00021cd3) list_setting_number_pane

0x9785,	// (0x00021cd3) list_setting_pane_ParamLimits

0x9785,	// (0x00021cd3) list_setting_pane

0x9797,	// (0x00021ce5) list_single_2graphic_pane_ParamLimits

0x9797,	// (0x00021ce5) list_single_2graphic_pane

0x9797,	// (0x00021ce5) list_single_graphic_heading_pane_ParamLimits

0x9797,	// (0x00021ce5) list_single_graphic_heading_pane

0x9797,	// (0x00021ce5) list_single_graphic_pane_ParamLimits

0x9797,	// (0x00021ce5) list_single_graphic_pane

0x9797,	// (0x00021ce5) list_single_heading_pane_ParamLimits

0x9797,	// (0x00021ce5) list_single_heading_pane

0x9797,	// (0x00021ce5) list_single_large_graphic_pane_ParamLimits

0x9797,	// (0x00021ce5) list_single_large_graphic_pane

0x9797,	// (0x00021ce5) list_single_number_heading_pane_ParamLimits

0x9797,	// (0x00021ce5) list_single_number_heading_pane

0x9797,	// (0x00021ce5) list_single_number_pane_ParamLimits

0x9797,	// (0x00021ce5) list_single_number_pane

0x9797,	// (0x00021ce5) list_single_pane_ParamLimits

0x9797,	// (0x00021ce5) list_single_pane

0x8b2a,	// (0x00021078) list_highlight_pane_cp1

0x5086,	// (0x0001d5d4) list_single_pane_g1_ParamLimits

0x5086,	// (0x0001d5d4) list_single_pane_g1

0x5092,	// (0x0001d5e0) list_single_pane_g2_ParamLimits

0x5092,	// (0x0001d5e0) list_single_pane_g2

0x0001,

0xf5e0,	// (0x00027b2e) list_single_pane_g_ParamLimits

0xf5e0,	// (0x00027b2e) list_single_pane_g

0x52ff,	// (0x0001d84d) list_single_pane_t1_ParamLimits

0x52ff,	// (0x0001d84d) list_single_pane_t1

0x5086,	// (0x0001d5d4) list_single_number_pane_g1_ParamLimits

0x5086,	// (0x0001d5d4) list_single_number_pane_g1

0x5092,	// (0x0001d5e0) list_single_number_pane_g2_ParamLimits

0x5092,	// (0x0001d5e0) list_single_number_pane_g2

0x0001,

0xf5e0,	// (0x00027b2e) list_single_number_pane_g_ParamLimits

0xf5e0,	// (0x00027b2e) list_single_number_pane_g

0x50fe,	// (0x0001d64c) list_single_number_pane_t1_ParamLimits

0x50fe,	// (0x0001d64c) list_single_number_pane_t1

0x878d,	// (0x00020cdb) list_single_number_pane_t2_ParamLimits

0x878d,	// (0x00020cdb) list_single_number_pane_t2

0x0001,

0xf96b,	// (0x00027eb9) list_single_number_pane_t_ParamLimits

0xf96b,	// (0x00027eb9) list_single_number_pane_t

0x56e6,	// (0x0001dc34) list_single_graphic_pane_g1_ParamLimits

0x56e6,	// (0x0001dc34) list_single_graphic_pane_g1

0x5086,	// (0x0001d5d4) list_single_graphic_pane_g2_ParamLimits

0x5086,	// (0x0001d5d4) list_single_graphic_pane_g2

0x5092,	// (0x0001d5e0) list_single_graphic_pane_g3_ParamLimits

0x5092,	// (0x0001d5e0) list_single_graphic_pane_g3

0x0002,

0xf5d9,	// (0x00027b27) list_single_graphic_pane_g_ParamLimits

0xf5d9,	// (0x00027b27) list_single_graphic_pane_g

0x81b3,	// (0x00020701) list_single_graphic_pane_t1_ParamLimits

0x81b3,	// (0x00020701) list_single_graphic_pane_t1

0x5086,	// (0x0001d5d4) list_single_heading_pane_g1_ParamLimits

0x5086,	// (0x0001d5d4) list_single_heading_pane_g1

0x5092,	// (0x0001d5e0) list_single_heading_pane_g2_ParamLimits

0x5092,	// (0x0001d5e0) list_single_heading_pane_g2

0x0001,

0xf5e0,	// (0x00027b2e) list_single_heading_pane_g_ParamLimits

0xf5e0,	// (0x00027b2e) list_single_heading_pane_g

0x5321,	// (0x0001d86f) list_single_heading_pane_t1_ParamLimits

0x5321,	// (0x0001d86f) list_single_heading_pane_t1

0x81c9,	// (0x00020717) list_single_heading_pane_t2_ParamLimits

0x81c9,	// (0x00020717) list_single_heading_pane_t2

0x0001,

0xf5e5,	// (0x00027b33) list_single_heading_pane_t_ParamLimits

0xf5e5,	// (0x00027b33) list_single_heading_pane_t

0x5086,	// (0x0001d5d4) list_single_number_heading_pane_g1_ParamLimits

0x5086,	// (0x0001d5d4) list_single_number_heading_pane_g1

0x5092,	// (0x0001d5e0) list_single_number_heading_pane_g2_ParamLimits

0x5092,	// (0x0001d5e0) list_single_number_heading_pane_g2

0x0001,

0xf5e0,	// (0x00027b2e) list_single_number_heading_pane_g_ParamLimits

0xf5e0,	// (0x00027b2e) list_single_number_heading_pane_g

0x5321,	// (0x0001d86f) list_single_number_heading_pane_t1_ParamLimits

0x5321,	// (0x0001d86f) list_single_number_heading_pane_t1

0x81db,	// (0x00020729) list_single_number_heading_pane_t2_ParamLimits

0x81db,	// (0x00020729) list_single_number_heading_pane_t2

0x52d9,	// (0x0001d827) list_single_number_heading_pane_t3_ParamLimits

0x52d9,	// (0x0001d827) list_single_number_heading_pane_t3

0x0002,

0xf5ea,	// (0x00027b38) list_single_number_heading_pane_t_ParamLimits

0xf5ea,	// (0x00027b38) list_single_number_heading_pane_t

0x507a,	// (0x0001d5c8) list_single_graphic_heading_pane_g1_ParamLimits

0x507a,	// (0x0001d5c8) list_single_graphic_heading_pane_g1

0x81ed,	// (0x0002073b) list_single_graphic_heading_pane_g4_ParamLimits

0x81ed,	// (0x0002073b) list_single_graphic_heading_pane_g4

0x5092,	// (0x0001d5e0) list_single_graphic_heading_pane_g5_ParamLimits

0x5092,	// (0x0001d5e0) list_single_graphic_heading_pane_g5

0x0002,

0xf5f1,	// (0x00027b3f) list_single_graphic_heading_pane_g_ParamLimits

0xf5f1,	// (0x00027b3f) list_single_graphic_heading_pane_g

0x5321,	// (0x0001d86f) list_single_graphic_heading_pane_t1_ParamLimits

0x5321,	// (0x0001d86f) list_single_graphic_heading_pane_t1

0x81fe,	// (0x0002074c) list_single_graphic_heading_pane_t2_ParamLimits

0x81fe,	// (0x0002074c) list_single_graphic_heading_pane_t2

0x0001,

0xf5f8,	// (0x00027b46) list_single_graphic_heading_pane_t_ParamLimits

0xf5f8,	// (0x00027b46) list_single_graphic_heading_pane_t

0x5315,	// (0x0001d863) list_single_large_graphic_pane_g1_ParamLimits

0x5315,	// (0x0001d863) list_single_large_graphic_pane_g1

0x5086,	// (0x0001d5d4) list_single_large_graphic_pane_g2_ParamLimits

0x5086,	// (0x0001d5d4) list_single_large_graphic_pane_g2

0x5092,	// (0x0001d5e0) list_single_large_graphic_pane_g3_ParamLimits

0x5092,	// (0x0001d5e0) list_single_large_graphic_pane_g3

0x0002,

0xf5fd,	// (0x00027b4b) list_single_large_graphic_pane_g_ParamLimits

0xf5fd,	// (0x00027b4b) list_single_large_graphic_pane_g

0xc953,	// (0x00024ea1) wait_border_pane_g2_copy1

0x8210,	// (0x0002075e) list_single_large_graphic_pane_g4_cp2

0x5321,	// (0x0001d86f) list_single_large_graphic_pane_t1_ParamLimits

0x5321,	// (0x0001d86f) list_single_large_graphic_pane_t1

0x5518,	// (0x0001da66) list_double_pane_g1_ParamLimits

0x5518,	// (0x0001da66) list_double_pane_g1

0x8218,	// (0x00020766) list_double_pane_g2_ParamLimits

0x8218,	// (0x00020766) list_double_pane_g2

0x0001,

0xf604,	// (0x00027b52) list_double_pane_g_ParamLimits

0xf604,	// (0x00027b52) list_double_pane_g

0x8224,	// (0x00020772) list_double_pane_t1_ParamLimits

0x8224,	// (0x00020772) list_double_pane_t1

0x823a,	// (0x00020788) list_double_pane_t2_ParamLimits

0x823a,	// (0x00020788) list_double_pane_t2

0x0001,

0xf609,	// (0x00027b57) list_double_pane_t_ParamLimits

0xf609,	// (0x00027b57) list_double_pane_t

0x824c,	// (0x0002079a) list_double2_pane_g1_ParamLimits

0x824c,	// (0x0002079a) list_double2_pane_g1

0x4bdb,	// (0x0001d129) list_double2_pane_g2_ParamLimits

0x4bdb,	// (0x0001d129) list_double2_pane_g2

0x0001,

0xf60e,	// (0x00027b5c) list_double2_pane_g_ParamLimits

0xf60e,	// (0x00027b5c) list_double2_pane_g

0x825d,	// (0x000207ab) list_double2_pane_t1_ParamLimits

0x825d,	// (0x000207ab) list_double2_pane_t1

0x8273,	// (0x000207c1) list_double2_pane_t2_ParamLimits

0x8273,	// (0x000207c1) list_double2_pane_t2

0x0001,

0xf613,	// (0x00027b61) list_double2_pane_t_ParamLimits

0xf613,	// (0x00027b61) list_double2_pane_t

0x5518,	// (0x0001da66) list_double_number_pane_g1_ParamLimits

0x5518,	// (0x0001da66) list_double_number_pane_g1

0x8218,	// (0x00020766) list_double_number_pane_g2_ParamLimits

0x8218,	// (0x00020766) list_double_number_pane_g2

0x0001,

0xf604,	// (0x00027b52) list_double_number_pane_g_ParamLimits

0xf604,	// (0x00027b52) list_double_number_pane_g

0x8285,	// (0x000207d3) list_double_number_pane_t1_ParamLimits

0x8285,	// (0x000207d3) list_double_number_pane_t1

0x8297,	// (0x000207e5) list_double_number_pane_t2_ParamLimits

0x8297,	// (0x000207e5) list_double_number_pane_t2

0x82ad,	// (0x000207fb) list_double_number_pane_t3_ParamLimits

0x82ad,	// (0x000207fb) list_double_number_pane_t3

0x0002,

0xf618,	// (0x00027b66) list_double_number_pane_t_ParamLimits

0xf618,	// (0x00027b66) list_double_number_pane_t

0x82bf,	// (0x0002080d) list_double_graphic_pane_g1_ParamLimits

0x82bf,	// (0x0002080d) list_double_graphic_pane_g1

0x82cb,	// (0x00020819) list_double_graphic_pane_g2_ParamLimits

0x82cb,	// (0x00020819) list_double_graphic_pane_g2

0x82da,	// (0x00020828) list_double_graphic_pane_g3_ParamLimits

0x82da,	// (0x00020828) list_double_graphic_pane_g3

0x0003,

0xf61f,	// (0x00027b6d) list_double_graphic_pane_g_ParamLimits

0xf61f,	// (0x00027b6d) list_double_graphic_pane_g

0x82f2,	// (0x00020840) list_double_graphic_pane_t1_ParamLimits

0x82f2,	// (0x00020840) list_double_graphic_pane_t1

0x8308,	// (0x00020856) list_double_graphic_pane_t2_ParamLimits

0x8308,	// (0x00020856) list_double_graphic_pane_t2

0x0001,

0xf628,	// (0x00027b76) list_double_graphic_pane_t_ParamLimits

0xf628,	// (0x00027b76) list_double_graphic_pane_t

0x831a,	// (0x00020868) list_double2_graphic_pane_g1_ParamLimits

0x831a,	// (0x00020868) list_double2_graphic_pane_g1

0x8326,	// (0x00020874) list_double2_graphic_pane_g2_ParamLimits

0x8326,	// (0x00020874) list_double2_graphic_pane_g2

0x4bdb,	// (0x0001d129) list_double2_graphic_pane_g3_ParamLimits

0x4bdb,	// (0x0001d129) list_double2_graphic_pane_g3

0x0002,

0xf62d,	// (0x00027b7b) list_double2_graphic_pane_g_ParamLimits

0xf62d,	// (0x00027b7b) list_double2_graphic_pane_g

0x8332,	// (0x00020880) list_double2_graphic_pane_t1_ParamLimits

0x8332,	// (0x00020880) list_double2_graphic_pane_t1

0x8348,	// (0x00020896) list_double2_graphic_pane_t2_ParamLimits

0x8348,	// (0x00020896) list_double2_graphic_pane_t2

0x0001,

0xf634,	// (0x00027b82) list_double2_graphic_pane_t_ParamLimits

0xf634,	// (0x00027b82) list_double2_graphic_pane_t

0x835a,	// (0x000208a8) list_double_large_graphic_pane_g1_ParamLimits

0x835a,	// (0x000208a8) list_double_large_graphic_pane_g1

0x8385,	// (0x000208d3) list_double_large_graphic_pane_g2_ParamLimits

0x8385,	// (0x000208d3) list_double_large_graphic_pane_g2

0x8218,	// (0x00020766) list_double_large_graphic_pane_g3_ParamLimits

0x8218,	// (0x00020766) list_double_large_graphic_pane_g3

0x8396,	// (0x000208e4) list_double_large_graphic_pane_g4_ParamLimits

0x8396,	// (0x000208e4) list_double_large_graphic_pane_g4

0x0004,

0xf639,	// (0x00027b87) list_double_large_graphic_pane_g_ParamLimits

0xf639,	// (0x00027b87) list_double_large_graphic_pane_g

0x83a8,	// (0x000208f6) list_double_large_graphic_pane_t1_ParamLimits

0x83a8,	// (0x000208f6) list_double_large_graphic_pane_t1

0x83c1,	// (0x0002090f) list_double_large_graphic_pane_t2_ParamLimits

0x83c1,	// (0x0002090f) list_double_large_graphic_pane_t2

0x0001,

0xf644,	// (0x00027b92) list_double_large_graphic_pane_t_ParamLimits

0xf644,	// (0x00027b92) list_double_large_graphic_pane_t

0x83d3,	// (0x00020921) list_double2_large_graphic_pane_g1_ParamLimits

0x83d3,	// (0x00020921) list_double2_large_graphic_pane_g1

0x824c,	// (0x0002079a) list_double2_large_graphic_pane_g2_ParamLimits

0x824c,	// (0x0002079a) list_double2_large_graphic_pane_g2

0x4bdb,	// (0x0001d129) list_double2_large_graphic_pane_g3_ParamLimits

0x4bdb,	// (0x0001d129) list_double2_large_graphic_pane_g3

0x0002,

0xf649,	// (0x00027b97) list_double2_large_graphic_pane_g_ParamLimits

0xf649,	// (0x00027b97) list_double2_large_graphic_pane_g

0x83df,	// (0x0002092d) list_double2_large_graphic_pane_t1_ParamLimits

0x83df,	// (0x0002092d) list_double2_large_graphic_pane_t1

0x83f5,	// (0x00020943) list_double2_large_graphic_pane_t2_ParamLimits

0x83f5,	// (0x00020943) list_double2_large_graphic_pane_t2

0x0001,

0xf650,	// (0x00027b9e) list_double2_large_graphic_pane_t_ParamLimits

0xf650,	// (0x00027b9e) list_double2_large_graphic_pane_t

0x8407,	// (0x00020955) list_double_heading_pane_g1_ParamLimits

0x8407,	// (0x00020955) list_double_heading_pane_g1

0x49e6,	// (0x0001cf34) list_double_heading_pane_g2_ParamLimits

0x49e6,	// (0x0001cf34) list_double_heading_pane_g2

0x0001,

0xf655,	// (0x00027ba3) list_double_heading_pane_g_ParamLimits

0xf655,	// (0x00027ba3) list_double_heading_pane_g

0x8418,	// (0x00020966) list_double_heading_pane_t1_ParamLimits

0x8418,	// (0x00020966) list_double_heading_pane_t1

0x8273,	// (0x000207c1) list_double_heading_pane_t2_ParamLimits

0x8273,	// (0x000207c1) list_double_heading_pane_t2

0x0001,

0xf65a,	// (0x00027ba8) list_double_heading_pane_t_ParamLimits

0xf65a,	// (0x00027ba8) list_double_heading_pane_t

0x82bf,	// (0x0002080d) list_double_graphic_heading_pane_g1_ParamLimits

0x82bf,	// (0x0002080d) list_double_graphic_heading_pane_g1

0x8407,	// (0x00020955) list_double_graphic_heading_pane_g2_ParamLimits

0x8407,	// (0x00020955) list_double_graphic_heading_pane_g2

0x49e6,	// (0x0001cf34) list_double_graphic_heading_pane_g3_ParamLimits

0x49e6,	// (0x0001cf34) list_double_graphic_heading_pane_g3

0x0002,

0xf65f,	// (0x00027bad) list_double_graphic_heading_pane_g_ParamLimits

0xf65f,	// (0x00027bad) list_double_graphic_heading_pane_g

0x842e,	// (0x0002097c) list_double_graphic_heading_pane_t1_ParamLimits

0x842e,	// (0x0002097c) list_double_graphic_heading_pane_t1

0x8348,	// (0x00020896) list_double_graphic_heading_pane_t2_ParamLimits

0x8348,	// (0x00020896) list_double_graphic_heading_pane_t2

0x0001,

0xf666,	// (0x00027bb4) list_double_graphic_heading_pane_t_ParamLimits

0xf666,	// (0x00027bb4) list_double_graphic_heading_pane_t

0x8385,	// (0x000208d3) list_double_time_pane_g1_ParamLimits

0x8385,	// (0x000208d3) list_double_time_pane_g1

0x8218,	// (0x00020766) list_double_time_pane_g2_ParamLimits

0x8218,	// (0x00020766) list_double_time_pane_g2

0x0001,

0xf66b,	// (0x00027bb9) list_double_time_pane_g_ParamLimits

0xf66b,	// (0x00027bb9) list_double_time_pane_g

0x8444,	// (0x00020992) list_double_time_pane_t1_ParamLimits

0x8444,	// (0x00020992) list_double_time_pane_t1

0x845a,	// (0x000209a8) list_double_time_pane_t2_ParamLimits

0x845a,	// (0x000209a8) list_double_time_pane_t2

0x846c,	// (0x000209ba) list_double_time_pane_t3_ParamLimits

0x846c,	// (0x000209ba) list_double_time_pane_t3

0x847e,	// (0x000209cc) list_double_time_pane_t4_ParamLimits

0x847e,	// (0x000209cc) list_double_time_pane_t4

0x0003,

0xf670,	// (0x00027bbe) list_double_time_pane_t_ParamLimits

0xf670,	// (0x00027bbe) list_double_time_pane_t

0x8326,	// (0x00020874) list_setting_pane_g1_ParamLimits

0x8326,	// (0x00020874) list_setting_pane_g1

0x4bdb,	// (0x0001d129) list_setting_pane_g2_ParamLimits

0x4bdb,	// (0x0001d129) list_setting_pane_g2

0x0001,

0xf679,	// (0x00027bc7) list_setting_pane_g_ParamLimits

0xf679,	// (0x00027bc7) list_setting_pane_g

0x8490,	// (0x000209de) list_setting_pane_t1_ParamLimits

0x8490,	// (0x000209de) list_setting_pane_t1

0x84aa,	// (0x000209f8) list_setting_pane_t2_ParamLimits

0x84aa,	// (0x000209f8) list_setting_pane_t2

0x0002,

0xf67e,	// (0x00027bcc) list_setting_pane_t_ParamLimits

0xf67e,	// (0x00027bcc) list_setting_pane_t

0x84e9,	// (0x00020a37) set_value_pane_cp_ParamLimits

0x84e9,	// (0x00020a37) set_value_pane_cp

0x84f5,	// (0x00020a43) list_setting_number_pane_g1_ParamLimits

0x84f5,	// (0x00020a43) list_setting_number_pane_g1

0x8501,	// (0x00020a4f) list_setting_number_pane_g2_ParamLimits

0x8501,	// (0x00020a4f) list_setting_number_pane_g2

0x0001,

0xf685,	// (0x00027bd3) list_setting_number_pane_g_ParamLimits

0xf685,	// (0x00027bd3) list_setting_number_pane_g

0x850d,	// (0x00020a5b) list_setting_number_pane_t1_ParamLimits

0x850d,	// (0x00020a5b) list_setting_number_pane_t1

0x8526,	// (0x00020a74) list_setting_number_pane_t2_ParamLimits

0x8526,	// (0x00020a74) list_setting_number_pane_t2

0x8540,	// (0x00020a8e) list_setting_number_pane_t3_ParamLimits

0x8540,	// (0x00020a8e) list_setting_number_pane_t3

0x0003,

0xf68a,	// (0x00027bd8) list_setting_number_pane_t_ParamLimits

0xf68a,	// (0x00027bd8) list_setting_number_pane_t

0x84e9,	// (0x00020a37) set_value_pane_ParamLimits

0x84e9,	// (0x00020a37) set_value_pane

0xb419,	// (0x00023967) bg_set_opt_pane_ParamLimits

0xb419,	// (0x00023967) bg_set_opt_pane

0x4d64,	// (0x0001d2b2) set_value_pane_t1

0xb43a,	// (0x00023988) slider_set_pane_cp3

0xb443,	// (0x00023991) volume_small_pane_cp

0xb44c,	// (0x0002399a) list_form_gen_pane

0xb455,	// (0x000239a3) scroll_pane_cp8

0x8583,	// (0x00020ad1) form_field_data_pane_ParamLimits

0x8583,	// (0x00020ad1) form_field_data_pane

0x859a,	// (0x00020ae8) form_field_data_wide_pane_ParamLimits

0x859a,	// (0x00020ae8) form_field_data_wide_pane

0x85ba,	// (0x00020b08) form_field_popup_pane_ParamLimits

0x85ba,	// (0x00020b08) form_field_popup_pane

0x85d2,	// (0x00020b20) form_field_popup_wide_pane_ParamLimits

0x85d2,	// (0x00020b20) form_field_popup_wide_pane

0x4df8,	// (0x0001d346) form_field_slider_pane_ParamLimits

0x4df8,	// (0x0001d346) form_field_slider_pane

0x4e0b,	// (0x0001d359) form_field_slider_wide_pane_ParamLimits

0x4e0b,	// (0x0001d359) form_field_slider_wide_pane

0xb466,	// (0x000239b4) data_form_pane

0x85f3,	// (0x00020b41) form_field_data_pane_t1

0xb472,	// (0x000239c0) input_focus_pane

0xb480,	// (0x000239ce) data_form_wide_pane

0x4e4c,	// (0x0001d39a) form_field_data_wide_pane_t1

0x8fbd,	// (0x0002150b) input_focus_pane_cp6

0x860d,	// (0x00020b5b) form_field_popup_pane_t1

0xb472,	// (0x000239c0) input_focus_pane_cp7

0xb4ac,	// (0x000239fa) list_form_pane

0x4e8e,	// (0x0001d3dc) form_field_popup_wide_pane_t1

0xb472,	// (0x000239c0) input_focus_pane_cp8

0xb4b8,	// (0x00023a06) list_form_wide_pane

0x862f,	// (0x00020b7d) form_field_slider_pane_t1_ParamLimits

0x862f,	// (0x00020b7d) form_field_slider_pane_t1

0x8647,	// (0x00020b95) form_field_slider_pane_t2_ParamLimits

0x8647,	// (0x00020b95) form_field_slider_pane_t2

0x0001,

0xf69a,	// (0x00027be8) form_field_slider_pane_t_ParamLimits

0xf69a,	// (0x00027be8) form_field_slider_pane_t

0x8c33,	// (0x00021181) input_focus_pane_cp9_ParamLimits

0x8c33,	// (0x00021181) input_focus_pane_cp9

0x865c,	// (0x00020baa) slider_cont_pane_ParamLimits

0x865c,	// (0x00020baa) slider_cont_pane

0xb4c7,	// (0x00023a15) form_field_slider_wide_pane_t1_ParamLimits

0xb4c7,	// (0x00023a15) form_field_slider_wide_pane_t1

0x4eea,	// (0x0001d438) form_field_slider_wide_pane_t2_ParamLimits

0x4eea,	// (0x0001d438) form_field_slider_wide_pane_t2

0x0001,

0xf69f,	// (0x00027bed) form_field_slider_wide_pane_t_ParamLimits

0xf69f,	// (0x00027bed) form_field_slider_wide_pane_t

0x8c33,	// (0x00021181) input_focus_pane_cp10_ParamLimits

0x8c33,	// (0x00021181) input_focus_pane_cp10

0x8670,	// (0x00020bbe) slider_cont_pane_cp1_ParamLimits

0x8670,	// (0x00020bbe) slider_cont_pane_cp1

0x8684,	// (0x00020bd2) slider_form_pane_cp

0xb4d9,	// (0x00023a27) input_focus_pane_g1

0xb4e1,	// (0x00023a2f) input_focus_pane_g2

0xb4e9,	// (0x00023a37) input_focus_pane_g3

0xb4f1,	// (0x00023a3f) input_focus_pane_g4

0xb4f9,	// (0x00023a47) input_focus_pane_g5

0xb501,	// (0x00023a4f) input_focus_pane_g6

0xb509,	// (0x00023a57) input_focus_pane_g7

0xb511,	// (0x00023a5f) input_focus_pane_g8

0xb519,	// (0x00023a67) input_focus_pane_g9

0x8a3a,	// (0x00020f88) input_focus_pane_g10

0x0009,

0xf6a4,	// (0x00027bf2) input_focus_pane_g

0xc95c,	// (0x00024eaa) wait_border_pane_g3_copy1

0x868c,	// (0x00020bda) data_form_pane_t1

0x8a3a,	// (0x00020f88) wait_anim_pane_g1_copy1

0x879f,	// (0x00020ced) data_form_wide_pane_t1

0x320e,	// (0x0001b75c) list_form_graphic_pane_cp_ParamLimits

0x320e,	// (0x0001b75c) list_form_graphic_pane_cp

0xd64a,	// (0x00025b98) slider_form_pane_g1

0xd653,	// (0x00025ba1) slider_form_pane_g2

0x0006,

0xf99b,	// (0x00027ee9) slider_form_pane_g

0x320e,	// (0x0001b75c) list_form_graphic_pane_ParamLimits

0x320e,	// (0x0001b75c) list_form_graphic_pane

0x4f68,	// (0x0001d4b6) list_form_graphic_pane_g1

0x4f70,	// (0x0001d4be) list_form_graphic_pane_t1_ParamLimits

0x4f70,	// (0x0001d4be) list_form_graphic_pane_t1

0x8c41,	// (0x0002118f) list_highlight_pane_cp5_ParamLimits

0x8c41,	// (0x0002118f) list_highlight_pane_cp5

0x86a6,	// (0x00020bf4) find_pane_g1

0xb521,	// (0x00023a6f) input_find_pane

0x86af,	// (0x00020bfd) input_find_pane_g1_ParamLimits

0x86af,	// (0x00020bfd) input_find_pane_g1

0x86bb,	// (0x00020c09) input_find_pane_t1_ParamLimits

0x86bb,	// (0x00020c09) input_find_pane_t1

0x86d0,	// (0x00020c1e) input_find_pane_t2_ParamLimits

0x86d0,	// (0x00020c1e) input_find_pane_t2

0x0001,

0xf6b9,	// (0x00027c07) input_find_pane_t_ParamLimits

0xf6b9,	// (0x00027c07) input_find_pane_t

0xb52a,	// (0x00023a78) input_focus_pane_cp5_ParamLimits

0xb52a,	// (0x00023a78) input_focus_pane_cp5

0x2f52,	// (0x0001b4a0) bg_popup_window_pane_cp2_ParamLimits

0x2f52,	// (0x0001b4a0) bg_popup_window_pane_cp2

0x2f5f,	// (0x0001b4ad) listscroll_menu_pane_ParamLimits

0x2f5f,	// (0x0001b4ad) listscroll_menu_pane

0x2f6b,	// (0x0001b4b9) popup_submenu_window_ParamLimits

0x2f6b,	// (0x0001b4b9) popup_submenu_window

0xb538,	// (0x00023a86) find_popup_pane_g1

0xb540,	// (0x00023a8e) input_popup_find_pane_cp

0xb52a,	// (0x00023a78) input_focus_pane_cp4_ParamLimits

0xb52a,	// (0x00023a78) input_focus_pane_cp4

0xb54a,	// (0x00023a98) input_popup_find_pane_t1_ParamLimits

0xb54a,	// (0x00023a98) input_popup_find_pane_t1

0x8b2a,	// (0x00021078) bg_popup_sub_pane_cp

0xb578,	// (0x00023ac6) listscroll_popup_sub_pane

0xb580,	// (0x00023ace) list_submenu_pane_ParamLimits

0xb580,	// (0x00023ace) list_submenu_pane

0xb591,	// (0x00023adf) scroll_pane_cp4

0xb599,	// (0x00023ae7) list_single_popup_submenu_pane_ParamLimits

0xb599,	// (0x00023ae7) list_single_popup_submenu_pane

0xb5ad,	// (0x00023afb) list_single_popup_submenu_pane_g1

0xb5b5,	// (0x00023b03) list_single_popup_submenu_pane_t1_ParamLimits

0xb5b5,	// (0x00023b03) list_single_popup_submenu_pane_t1

0x8c33,	// (0x00021181) bg_active_tab_pane_cp1_ParamLimits

0x8c33,	// (0x00021181) bg_active_tab_pane_cp1

0x2fa5,	// (0x0001b4f3) tabs_2_active_pane_g1

0x2fad,	// (0x0001b4fb) tabs_2_active_pane_t1

0x8c33,	// (0x00021181) bg_passive_tab_pane_cp1_ParamLimits

0x8c33,	// (0x00021181) bg_passive_tab_pane_cp1

0x2fa5,	// (0x0001b4f3) tabs_2_passive_pane_g1

0x2fad,	// (0x0001b4fb) tabs_2_passive_pane_t1

0x8c41,	// (0x0002118f) bg_active_tab_pane_cp4

0x2fbf,	// (0x0001b50d) tabs_2_long_active_pane_t1

0xb5ca,	// (0x00023b18) bg_passive_tab_pane_cp4

0xc436,	// (0x00024984) list_single_midp_graphic_pane_g4_ParamLimits

0x8c41,	// (0x0002118f) bg_active_tab_pane_cp5

0x2fd2,	// (0x0001b520) tabs_3_long_active_pane_t1

0xb5ca,	// (0x00023b18) bg_passive_tab_pane_cp5

0xc436,	// (0x00024984) list_single_midp_graphic_pane_g4

0x8c41,	// (0x0002118f) bg_popup_window_pane_cp13_ParamLimits

0x8c41,	// (0x0002118f) bg_popup_window_pane_cp13

0xb5df,	// (0x00023b2d) listscroll_popup_fast_pane_ParamLimits

0xb5df,	// (0x00023b2d) listscroll_popup_fast_pane

0xb5ee,	// (0x00023b3c) grid_popup_fast_pane_ParamLimits

0xb5ee,	// (0x00023b3c) grid_popup_fast_pane

0xb600,	// (0x00023b4e) scroll_pane_cp9_ParamLimits

0xb600,	// (0x00023b4e) scroll_pane_cp9

0xe910,	// (0x00026e5e) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xe910,	// (0x00026e5e) list_single_graphic_hl_pane_t1_cp2

0xb624,	// (0x00023b72) input_focus_pane_cp20_ParamLimits

0xb624,	// (0x00023b72) input_focus_pane_cp20

0xb632,	// (0x00023b80) query_popup_data_pane_t1_ParamLimits

0xb632,	// (0x00023b80) query_popup_data_pane_t1

0xb645,	// (0x00023b93) query_popup_data_pane_t2_ParamLimits

0xb645,	// (0x00023b93) query_popup_data_pane_t2

0xb68b,	// (0x00023bd9) query_popup_data_pane_t3_ParamLimits

0xb68b,	// (0x00023bd9) query_popup_data_pane_t3

0xb6cc,	// (0x00023c1a) query_popup_data_pane_t4_ParamLimits

0xb6cc,	// (0x00023c1a) query_popup_data_pane_t4

0xb708,	// (0x00023c56) query_popup_data_pane_t5_ParamLimits

0xb708,	// (0x00023c56) query_popup_data_pane_t5

0x0004,

0xf6be,	// (0x00027c0c) query_popup_data_pane_t_ParamLimits

0xf6be,	// (0x00027c0c) query_popup_data_pane_t

0xb4d9,	// (0x00023a27) bg_set_opt_pane_g1

0xb4e1,	// (0x00023a2f) bg_set_opt_pane_g2

0xb4e9,	// (0x00023a37) bg_set_opt_pane_g3

0xb4f1,	// (0x00023a3f) bg_set_opt_pane_g4

0xb4f9,	// (0x00023a47) bg_set_opt_pane_g5

0xb501,	// (0x00023a4f) bg_set_opt_pane_g6

0xb509,	// (0x00023a57) bg_set_opt_pane_g7

0xb511,	// (0x00023a5f) bg_set_opt_pane_g8

0xb519,	// (0x00023a67) bg_set_opt_pane_g9

0x0008,

0xf6c9,	// (0x00027c17) bg_set_opt_pane_g

0x5fb4,	// (0x0001e502) control_top_pane_stacon_ParamLimits

0x5fb4,	// (0x0001e502) control_top_pane_stacon

0x6007,	// (0x0001e555) signal_pane_stacon_ParamLimits

0x6007,	// (0x0001e555) signal_pane_stacon

0xbb70,	// (0x000240be) stacon_top_pane_g1_ParamLimits

0xbb70,	// (0x000240be) stacon_top_pane_g1

0x602c,	// (0x0001e57a) title_pane_stacon_ParamLimits

0x602c,	// (0x0001e57a) title_pane_stacon

0x6056,	// (0x0001e5a4) uni_indicator_pane_stacon_ParamLimits

0x6056,	// (0x0001e5a4) uni_indicator_pane_stacon

0x606b,	// (0x0001e5b9) battery_pane_stacon_ParamLimits

0x606b,	// (0x0001e5b9) battery_pane_stacon

0x60af,	// (0x0001e5fd) control_bottom_pane_stacon_ParamLimits

0x60af,	// (0x0001e5fd) control_bottom_pane_stacon

0x60d2,	// (0x0001e620) navi_pane_stacon_ParamLimits

0x60d2,	// (0x0001e620) navi_pane_stacon

0xbb92,	// (0x000240e0) stacon_bottom_pane_g1_ParamLimits

0xbb92,	// (0x000240e0) stacon_bottom_pane_g1

0x5d15,	// (0x0001e263) aid_levels_signal_lsc_ParamLimits

0x5d15,	// (0x0001e263) aid_levels_signal_lsc

0x5d2c,	// (0x0001e27a) signal_pane_stacon_g1_ParamLimits

0x5d2c,	// (0x0001e27a) signal_pane_stacon_g1

0x5d40,	// (0x0001e28e) signal_pane_stacon_g2_ParamLimits

0x5d40,	// (0x0001e28e) signal_pane_stacon_g2

0x0001,

0xf6dc,	// (0x00027c2a) signal_pane_stacon_g_ParamLimits

0xf6dc,	// (0x00027c2a) signal_pane_stacon_g

0x5d75,	// (0x0001e2c3) title_pane_stacon_t1_ParamLimits

0x5d75,	// (0x0001e2c3) title_pane_stacon_t1

0xb74c,	// (0x00023c9a) uni_indicator_pane_stacon_g1

0xb756,	// (0x00023ca4) uni_indicator_pane_stacon_g2

0xb760,	// (0x00023cae) uni_indicator_pane_stacon_g3

0xb76a,	// (0x00023cb8) uni_indicator_pane_stacon_g4

0x0003,

0xf6e8,	// (0x00027c36) uni_indicator_pane_stacon_g

0x5d9a,	// (0x0001e2e8) control_top_pane_stacon_g1

0x5da2,	// (0x0001e2f0) control_top_pane_stacon_t1_ParamLimits

0x5da2,	// (0x0001e2f0) control_top_pane_stacon_t1

0x5dd9,	// (0x0001e327) aid_levels_battery_lsc_ParamLimits

0x5dd9,	// (0x0001e327) aid_levels_battery_lsc

0x5df1,	// (0x0001e33f) battery_pane_stacon_g1_ParamLimits

0x5df1,	// (0x0001e33f) battery_pane_stacon_g1

0x5e04,	// (0x0001e352) battery_pane_stacon_g2_ParamLimits

0x5e04,	// (0x0001e352) battery_pane_stacon_g2

0x0001,

0xf6f1,	// (0x00027c3f) battery_pane_stacon_g_ParamLimits

0xf6f1,	// (0x00027c3f) battery_pane_stacon_g

0x5e42,	// (0x0001e390) navi_icon_pane_stacon

0x5e56,	// (0x0001e3a4) navi_navi_pane_stacon

0x5e42,	// (0x0001e390) navi_text_pane_stacon

0x5d9a,	// (0x0001e2e8) control_bottom_pane_stacon_g1

0x5e6a,	// (0x0001e3b8) control_bottom_pane_stacon_t1_ParamLimits

0x5e6a,	// (0x0001e3b8) control_bottom_pane_stacon_t1

0x2fe4,	// (0x0001b532) grid_app_pane_ParamLimits

0x2fe4,	// (0x0001b532) grid_app_pane

0x301c,	// (0x0001b56a) scroll_pane_cp15_ParamLimits

0x301c,	// (0x0001b56a) scroll_pane_cp15

0x3035,	// (0x0001b583) cell_app_pane_ParamLimits

0x3035,	// (0x0001b583) cell_app_pane

0x307a,	// (0x0001b5c8) cell_app_pane_g1_ParamLimits

0x307a,	// (0x0001b5c8) cell_app_pane_g1

0xb78e,	// (0x00023cdc) cell_app_pane_g2_ParamLimits

0xb78e,	// (0x00023cdc) cell_app_pane_g2

0x0001,

0xf6f6,	// (0x00027c44) cell_app_pane_g_ParamLimits

0xf6f6,	// (0x00027c44) cell_app_pane_g

0x309a,	// (0x0001b5e8) cell_app_pane_t1_ParamLimits

0x309a,	// (0x0001b5e8) cell_app_pane_t1

0xb79a,	// (0x00023ce8) grid_highlight_pane_ParamLimits

0xb79a,	// (0x00023ce8) grid_highlight_pane

0xb4d9,	// (0x00023a27) cell_highlight_pane_g1

0xb4e1,	// (0x00023a2f) cell_highlight_pane_g2

0xb4e9,	// (0x00023a37) cell_highlight_pane_g3

0xb4f1,	// (0x00023a3f) cell_highlight_pane_g4

0xb4f9,	// (0x00023a47) cell_highlight_pane_g5

0xb501,	// (0x00023a4f) cell_highlight_pane_g6

0xb509,	// (0x00023a57) cell_highlight_pane_g7

0xb511,	// (0x00023a5f) cell_highlight_pane_g8

0xb519,	// (0x00023a67) cell_highlight_pane_g9

0x8a3a,	// (0x00020f88) cell_highlight_pane_g10

0x0009,

0xf6a4,	// (0x00027bf2) cell_highlight_pane_g

0xb7ab,	// (0x00023cf9) bg_scroll_pane

0x5eb4,	// (0x0001e402) scroll_handle_pane

0xb7f2,	// (0x00023d40) scroll_bg_pane_g1

0xb807,	// (0x00023d55) scroll_bg_pane_g2

0xb81f,	// (0x00023d6d) scroll_bg_pane_g3

0x0002,

0xf6fb,	// (0x00027c49) scroll_bg_pane_g

0xb834,	// (0x00023d82) scroll_handle_focus_pane_ParamLimits

0xb834,	// (0x00023d82) scroll_handle_focus_pane

0xb7f2,	// (0x00023d40) scroll_handle_pane_g1

0xb841,	// (0x00023d8f) scroll_handle_pane_g2

0xb81f,	// (0x00023d6d) scroll_handle_pane_g3

0x0002,

0xf702,	// (0x00027c50) scroll_handle_pane_g

0xb52a,	// (0x00023a78) bg_popup_sub_pane_cp21_ParamLimits

0xb52a,	// (0x00023a78) bg_popup_sub_pane_cp21

0xb855,	// (0x00023da3) popup_fep_japan_predictive_window_t1_ParamLimits

0xb855,	// (0x00023da3) popup_fep_japan_predictive_window_t1

0xb86f,	// (0x00023dbd) popup_fep_japan_predictive_window_t2_ParamLimits

0xb86f,	// (0x00023dbd) popup_fep_japan_predictive_window_t2

0xb8a2,	// (0x00023df0) popup_fep_japan_predictive_window_t3_ParamLimits

0xb8a2,	// (0x00023df0) popup_fep_japan_predictive_window_t3

0x0002,

0xf709,	// (0x00027c57) popup_fep_japan_predictive_window_t_ParamLimits

0xf709,	// (0x00027c57) popup_fep_japan_predictive_window_t

0x8b2a,	// (0x00021078) bg_popup_sub_pane_cp23

0xb8d9,	// (0x00023e27) listscroll_japin_cand_pane

0xb8e1,	// (0x00023e2f) popup_fep_japan_candidate_window_t1

0xb8ef,	// (0x00023e3d) candidate_pane_ParamLimits

0xb8ef,	// (0x00023e3d) candidate_pane

0xb901,	// (0x00023e4f) scroll_pane_cp30

0xb909,	// (0x00023e57) list_single_popup_jap_candidate_pane_ParamLimits

0xb909,	// (0x00023e57) list_single_popup_jap_candidate_pane

0x8b2a,	// (0x00021078) list_highlight_pane_cp30

0xb91e,	// (0x00023e6c) list_single_popup_jap_candidate_pane_t1

0xb92d,	// (0x00023e7b) level_1_signal

0xb93a,	// (0x00023e88) level_2_signal

0xb947,	// (0x00023e95) level_3_signal

0xb954,	// (0x00023ea2) level_4_signal

0xb961,	// (0x00023eaf) level_5_signal

0xb96e,	// (0x00023ebc) level_6_signal

0xb97b,	// (0x00023ec9) level_7_signal

0xb92d,	// (0x00023e7b) level_1_battery

0xb93a,	// (0x00023e88) level_2_battery

0xb947,	// (0x00023e95) level_3_battery

0xb954,	// (0x00023ea2) level_4_battery

0xb961,	// (0x00023eaf) level_5_battery

0xb96e,	// (0x00023ebc) level_6_battery

0xb97b,	// (0x00023ec9) level_7_battery

0xb9a0,	// (0x00023eee) list_menu_pane_ParamLimits

0xb9a0,	// (0x00023eee) list_menu_pane

0xb9b6,	// (0x00023f04) scroll_pane_cp25_ParamLimits

0xb9b6,	// (0x00023f04) scroll_pane_cp25

0xb9cf,	// (0x00023f1d) list_double2_graphic_pane_cp2_ParamLimits

0xb9cf,	// (0x00023f1d) list_double2_graphic_pane_cp2

0xb9cf,	// (0x00023f1d) list_double2_large_graphic_pane_cp2_ParamLimits

0xb9cf,	// (0x00023f1d) list_double2_large_graphic_pane_cp2

0xb9cf,	// (0x00023f1d) list_double2_pane_cp2_ParamLimits

0xb9cf,	// (0x00023f1d) list_double2_pane_cp2

0xb9cf,	// (0x00023f1d) list_double_graphic_pane_cp2_ParamLimits

0xb9cf,	// (0x00023f1d) list_double_graphic_pane_cp2

0xb9cf,	// (0x00023f1d) list_double_large_graphic_pane_cp2_ParamLimits

0xb9cf,	// (0x00023f1d) list_double_large_graphic_pane_cp2

0xb9cf,	// (0x00023f1d) list_double_number_pane_cp2_ParamLimits

0xb9cf,	// (0x00023f1d) list_double_number_pane_cp2

0xb9cf,	// (0x00023f1d) list_double_pane_cp2_ParamLimits

0xb9cf,	// (0x00023f1d) list_double_pane_cp2

0x30c0,	// (0x0001b60e) list_single_2graphic_pane_cp2_ParamLimits

0x30c0,	// (0x0001b60e) list_single_2graphic_pane_cp2

0x30c0,	// (0x0001b60e) list_single_graphic_heading_pane_cp2_ParamLimits

0x30c0,	// (0x0001b60e) list_single_graphic_heading_pane_cp2

0x30c0,	// (0x0001b60e) list_single_graphic_pane_cp2_ParamLimits

0x30c0,	// (0x0001b60e) list_single_graphic_pane_cp2

0x30c0,	// (0x0001b60e) list_single_heading_pane_cp2_ParamLimits

0x30c0,	// (0x0001b60e) list_single_heading_pane_cp2

0xb9df,	// (0x00023f2d) list_single_large_graphic_pane_cp2_ParamLimits

0xb9df,	// (0x00023f2d) list_single_large_graphic_pane_cp2

0x30c0,	// (0x0001b60e) list_single_number_heading_pane_cp2_ParamLimits

0x30c0,	// (0x0001b60e) list_single_number_heading_pane_cp2

0x30c0,	// (0x0001b60e) list_single_number_pane_cp2_ParamLimits

0x30c0,	// (0x0001b60e) list_single_number_pane_cp2

0x30c0,	// (0x0001b60e) list_single_pane_cp2_ParamLimits

0x30c0,	// (0x0001b60e) list_single_pane_cp2

0xb9f9,	// (0x00023f47) bg_popup_sub_pane_cp22

0x5f66,	// (0x0001e4b4) popup_side_volume_key_window_g1

0x5f90,	// (0x0001e4de) popup_side_volume_key_window_t1

0x5fac,	// (0x0001e4fa) volume_small_pane_cp1

0x8c33,	// (0x00021181) bg_popup_sub_pane_cp24_ParamLimits

0x8c33,	// (0x00021181) bg_popup_sub_pane_cp24

0xba0f,	// (0x00023f5d) fep_china_uni_candidate_pane_ParamLimits

0xba0f,	// (0x00023f5d) fep_china_uni_candidate_pane

0xba23,	// (0x00023f71) fep_china_uni_entry_pane

0xba33,	// (0x00023f81) popup_fep_china_uni_window_g1

0xba4f,	// (0x00023f9d) fep_china_uni_entry_pane_g1

0xba57,	// (0x00023fa5) fep_china_uni_entry_pane_g2

0x0001,

0xf73a,	// (0x00027c88) fep_china_uni_entry_pane_g

0xba5f,	// (0x00023fad) fep_entry_item_pane

0xba69,	// (0x00023fb7) fep_candidate_item_pane

0xba71,	// (0x00023fbf) fep_china_uni_candidate_pane_g1

0xba79,	// (0x00023fc7) fep_china_uni_candidate_pane_g2

0xba81,	// (0x00023fcf) fep_china_uni_candidate_pane_g3

0xba89,	// (0x00023fd7) fep_china_uni_candidate_pane_g4

0x0003,

0xf73f,	// (0x00027c8d) fep_china_uni_candidate_pane_g

0x8a3a,	// (0x00020f88) fep_entry_item_pane_g1

0xba91,	// (0x00023fdf) fep_entry_item_pane_t1_ParamLimits

0xba91,	// (0x00023fdf) fep_entry_item_pane_t1

0xbaa7,	// (0x00023ff5) fep_candidate_item_pane_t1_ParamLimits

0xbaa7,	// (0x00023ff5) fep_candidate_item_pane_t1

0xbabc,	// (0x0002400a) fep_candidate_item_pane_t2_ParamLimits

0xbabc,	// (0x0002400a) fep_candidate_item_pane_t2

0x0001,

0xf748,	// (0x00027c96) fep_candidate_item_pane_t_ParamLimits

0xf748,	// (0x00027c96) fep_candidate_item_pane_t

0x8c41,	// (0x0002118f) list_highlight_pane_cp31_ParamLimits

0x8c41,	// (0x0002118f) list_highlight_pane_cp31

0xbace,	// (0x0002401c) level_1_signal_lsc

0xbad7,	// (0x00024025) level_2_signal_lsc

0xbae0,	// (0x0002402e) level_3_signal_lsc

0xbae9,	// (0x00024037) level_4_signal_lsc

0xbaf2,	// (0x00024040) level_5_signal_lsc

0xbafb,	// (0x00024049) level_6_signal_lsc

0xbb04,	// (0x00024052) level_7_signal_lsc

0xbb04,	// (0x00024052) level_1_battery_lsc

0xbb0d,	// (0x0002405b) level_2_battery_lsc

0xbb16,	// (0x00024064) level_3_battery_lsc

0xbb1f,	// (0x0002406d) level_4_battery_lsc

0xbb28,	// (0x00024076) level_5_battery_lsc

0xbb31,	// (0x0002407f) level_6_battery_lsc

0xbace,	// (0x0002401c) level_7_battery_lsc

0xbb3a,	// (0x00024088) scroll_handle_focus_pane_g1

0xbb43,	// (0x00024091) scroll_handle_focus_pane_g2

0xbb4c,	// (0x0002409a) scroll_handle_focus_pane_g3

0x0002,

0xf74d,	// (0x00027c9b) scroll_handle_focus_pane_g

0x86e5,	// (0x00020c33) list_single_2graphic_pane_g1_ParamLimits

0x86e5,	// (0x00020c33) list_single_2graphic_pane_g1

0x81ed,	// (0x0002073b) list_single_2graphic_pane_g2_ParamLimits

0x81ed,	// (0x0002073b) list_single_2graphic_pane_g2

0x5092,	// (0x0001d5e0) list_single_2graphic_pane_g3_ParamLimits

0x5092,	// (0x0001d5e0) list_single_2graphic_pane_g3

0x86f1,	// (0x00020c3f) list_single_2graphic_pane_g4_ParamLimits

0x86f1,	// (0x00020c3f) list_single_2graphic_pane_g4

0x0003,

0xf754,	// (0x00027ca2) list_single_2graphic_pane_g_ParamLimits

0xf754,	// (0x00027ca2) list_single_2graphic_pane_g

0x8702,	// (0x00020c50) list_single_2graphic_pane_t1_ParamLimits

0x8702,	// (0x00020c50) list_single_2graphic_pane_t1

0x8730,	// (0x00020c7e) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x8730,	// (0x00020c7e) list_double2_graphic_large_graphic_pane_g1

0x824c,	// (0x0002079a) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x824c,	// (0x0002079a) list_double2_graphic_large_graphic_pane_g2

0x4bdb,	// (0x0001d129) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x4bdb,	// (0x0001d129) list_double2_graphic_large_graphic_pane_g3

0x8742,	// (0x00020c90) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x8742,	// (0x00020c90) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf75d,	// (0x00027cab) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf75d,	// (0x00027cab) list_double2_graphic_large_graphic_pane_g

0x874e,	// (0x00020c9c) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x874e,	// (0x00020c9c) list_double2_graphic_large_graphic_pane_t1

0x8764,	// (0x00020cb2) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x8764,	// (0x00020cb2) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf766,	// (0x00027cb4) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf766,	// (0x00027cb4) list_double2_graphic_large_graphic_pane_t

0xbc0d,	// (0x0002415b) popup_fast_swap_window_ParamLimits

0xbc0d,	// (0x0002415b) popup_fast_swap_window

0xbc29,	// (0x00024177) popup_side_volume_key_window

0xbc45,	// (0x00024193) stacon_top_pane

0xbc4f,	// (0x0002419d) status_pane_ParamLimits

0xbc4f,	// (0x0002419d) status_pane

0xbc45,	// (0x00024193) status_small_pane

0x8b2a,	// (0x00021078) control_pane

0x8b2a,	// (0x00021078) stacon_bottom_pane

0xb455,	// (0x000239a3) scroll_pane_cp121

0xb44c,	// (0x0002399a) set_content_pane

0xbb55,	// (0x000240a3) bg_active_tab_pane_g1_cp1

0xbb5e,	// (0x000240ac) bg_active_tab_pane_g2_cp1

0xbb67,	// (0x000240b5) bg_active_tab_pane_g3_cp1

0xbb55,	// (0x000240a3) bg_passive_tab_pane_g1_cp1

0xbb5e,	// (0x000240ac) bg_passive_tab_pane_g2_cp1

0xbb67,	// (0x000240b5) bg_passive_tab_pane_g3_cp1

0x31e1,	// (0x0001b72f) bg_active_tab_pane_g1_cp2

0xbb5e,	// (0x000240ac) bg_active_tab_pane_g2_cp2

0x31d8,	// (0x0001b726) bg_active_tab_pane_g3_cp2

0x31e1,	// (0x0001b72f) bg_passive_tab_pane_g1_cp2

0xbb5e,	// (0x000240ac) bg_passive_tab_pane_g2_cp2

0x31d8,	// (0x0001b726) bg_passive_tab_pane_g3_cp2

0x31f3,	// (0x0001b741) bg_active_tab_pane_g1_cp3

0xbb5e,	// (0x000240ac) bg_active_tab_pane_g2_cp3

0x31ea,	// (0x0001b738) bg_active_tab_pane_g3_cp3

0x31f3,	// (0x0001b741) bg_passive_tab_pane_g1_cp3

0xbb5e,	// (0x000240ac) bg_passive_tab_pane_g2_cp3

0x31ea,	// (0x0001b738) bg_passive_tab_pane_g3_cp3

0x3205,	// (0x0001b753) bg_active_tab_pane_g1_cp4

0xbb5e,	// (0x000240ac) bg_active_tab_pane_g2_cp4

0x31fc,	// (0x0001b74a) bg_active_tab_pane_g3_cp4

0x3205,	// (0x0001b753) bg_passive_tab_pane_g1_cp4

0xbb5e,	// (0x000240ac) bg_passive_tab_pane_g2_cp4

0x31fc,	// (0x0001b74a) bg_passive_tab_pane_g3_cp4

0xbbae,	// (0x000240fc) bg_active_tab_pane_g1_cp5

0xbb5e,	// (0x000240ac) bg_active_tab_pane_g2_cp5

0xbbb7,	// (0x00024105) bg_active_tab_pane_g3_cp5

0xbbae,	// (0x000240fc) bg_passive_tab_pane_g1_cp5

0xbb5e,	// (0x000240ac) bg_passive_tab_pane_g2_cp5

0xbbb7,	// (0x00024105) bg_passive_tab_pane_g3_cp5

0x320e,	// (0x0001b75c) list_set_graphic_pane_ParamLimits

0x320e,	// (0x0001b75c) list_set_graphic_pane

0x8b2a,	// (0x00021078) bg_set_opt_pane_cp4

0x3220,	// (0x0001b76e) list_set_graphic_pane_g1_ParamLimits

0x3220,	// (0x0001b76e) list_set_graphic_pane_g1

0x322c,	// (0x0001b77a) list_set_graphic_pane_g2_ParamLimits

0x322c,	// (0x0001b77a) list_set_graphic_pane_g2

0x0001,

0xf76b,	// (0x00027cb9) list_set_graphic_pane_g_ParamLimits

0xf76b,	// (0x00027cb9) list_set_graphic_pane_g

0x0009,

0xfade,	// (0x0002802c) volume_small_pane_cp_g

0xbbc0,	// (0x0002410e) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xbbc0,	// (0x0002410e) list_double2_large_graphic_pane_g1_cp2

0xbbcc,	// (0x0002411a) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xbbcc,	// (0x0002411a) list_double2_large_graphic_pane_g2_cp2

0xbbdd,	// (0x0002412b) list_double2_large_graphic_pane_g3_cp2

0xbbe5,	// (0x00024133) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xbbe5,	// (0x00024133) list_double2_large_graphic_pane_t1_cp2

0xbbfb,	// (0x00024149) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xbbfb,	// (0x00024149) list_double2_large_graphic_pane_t2_cp2

0xd3b5,	// (0x00025903) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xd3b5,	// (0x00025903) list_double_large_graphic_pane_g1_cp2

0xd3c6,	// (0x00025914) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xd3c6,	// (0x00025914) list_double_large_graphic_pane_g2_cp2

0xbd6b,	// (0x000242b9) list_double_large_graphic_pane_g3_cp2

0xd3d7,	// (0x00025925) list_double_large_graphic_pane_g4_cp

0xd3df,	// (0x0002592d) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xd3df,	// (0x0002592d) list_double_large_graphic_pane_t1_cp2

0xd3f6,	// (0x00025944) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xd3f6,	// (0x00025944) list_double_large_graphic_pane_t2_cp2

0xbc5d,	// (0x000241ab) list_double2_graphic_pane_g1_cp2_ParamLimits

0xbc5d,	// (0x000241ab) list_double2_graphic_pane_g1_cp2

0xbc6b,	// (0x000241b9) list_double2_graphic_pane_g2_cp2_ParamLimits

0xbc6b,	// (0x000241b9) list_double2_graphic_pane_g2_cp2

0xbc7c,	// (0x000241ca) list_double2_graphic_pane_g3_cp2

0xbc86,	// (0x000241d4) list_double2_graphic_pane_t1_cp2_ParamLimits

0xbc86,	// (0x000241d4) list_double2_graphic_pane_t1_cp2

0xbc9c,	// (0x000241ea) list_double2_graphic_pane_t2_cp2_ParamLimits

0xbc9c,	// (0x000241ea) list_double2_graphic_pane_t2_cp2

0xbcae,	// (0x000241fc) list_single_number_heading_pane_g1_cp2_ParamLimits

0xbcae,	// (0x000241fc) list_single_number_heading_pane_g1_cp2

0xbcba,	// (0x00024208) list_single_number_heading_pane_g2_cp2

0xbcc2,	// (0x00024210) list_single_number_heading_pane_t1_cp2_ParamLimits

0xbcc2,	// (0x00024210) list_single_number_heading_pane_t1_cp2

0xbcd8,	// (0x00024226) list_single_number_heading_pane_t2_cp2_ParamLimits

0xbcd8,	// (0x00024226) list_single_number_heading_pane_t2_cp2

0xbcea,	// (0x00024238) list_single_number_heading_pane_t3_cp2_ParamLimits

0xbcea,	// (0x00024238) list_single_number_heading_pane_t3_cp2

0xbcae,	// (0x000241fc) list_single_heading_pane_g1_cp2_ParamLimits

0xbcae,	// (0x000241fc) list_single_heading_pane_g1_cp2

0xbcba,	// (0x00024208) list_single_heading_pane_g2_cp2

0xbcc2,	// (0x00024210) list_single_heading_pane_t1_cp2_ParamLimits

0xbcc2,	// (0x00024210) list_single_heading_pane_t1_cp2

0xd1bd,	// (0x0002570b) list_single_heading_pane_t2_cp2_ParamLimits

0xd1bd,	// (0x0002570b) list_single_heading_pane_t2_cp2

0xd105,	// (0x00025653) list_double_graphic_pane_g1_cp2_ParamLimits

0xd105,	// (0x00025653) list_double_graphic_pane_g1_cp2

0xd111,	// (0x0002565f) list_double_graphic_pane_g2_cp2_ParamLimits

0xd111,	// (0x0002565f) list_double_graphic_pane_g2_cp2

0xd120,	// (0x0002566e) list_double_graphic_pane_g3_cp2

0xd128,	// (0x00025676) list_double_graphic_pane_t1_cp2_ParamLimits

0xd128,	// (0x00025676) list_double_graphic_pane_t1_cp2

0xd13e,	// (0x0002568c) list_double_graphic_pane_t2_cp2_ParamLimits

0xd13e,	// (0x0002568c) list_double_graphic_pane_t2_cp2

0xbd5f,	// (0x000242ad) list_double_number_pane_g1_cp2_ParamLimits

0xbd5f,	// (0x000242ad) list_double_number_pane_g1_cp2

0xbd6b,	// (0x000242b9) list_double_number_pane_g2_cp2

0xd0c9,	// (0x00025617) list_double_number_pane_t1_cp2_ParamLimits

0xd0c9,	// (0x00025617) list_double_number_pane_t1_cp2

0xd0dd,	// (0x0002562b) list_double_number_pane_t2_cp2_ParamLimits

0xd0dd,	// (0x0002562b) list_double_number_pane_t2_cp2

0xd0f3,	// (0x00025641) list_double_number_pane_t3_cp2_ParamLimits

0xd0f3,	// (0x00025641) list_double_number_pane_t3_cp2

0xd040,	// (0x0002558e) list_single_graphic_pane_g1_cp2_ParamLimits

0xd040,	// (0x0002558e) list_single_graphic_pane_g1_cp2

0xbdc3,	// (0x00024311) list_single_graphic_pane_g2_cp2_ParamLimits

0xbdc3,	// (0x00024311) list_single_graphic_pane_g2_cp2

0xbdcf,	// (0x0002431d) list_single_graphic_pane_g3_cp2

0xd016,	// (0x00025564) list_single_graphic_pane_t1_cp2_ParamLimits

0xd016,	// (0x00025564) list_single_graphic_pane_t1_cp2

0xbdc3,	// (0x00024311) list_single_number_pane_g1_cp2_ParamLimits

0xbdc3,	// (0x00024311) list_single_number_pane_g1_cp2

0xbdcf,	// (0x0002431d) list_single_number_pane_g2_cp2

0xd016,	// (0x00025564) list_single_number_pane_t1_cp2_ParamLimits

0xd016,	// (0x00025564) list_single_number_pane_t1_cp2

0xd02c,	// (0x0002557a) list_single_number_pane_t2_cp2_ParamLimits

0xd02c,	// (0x0002557a) list_single_number_pane_t2_cp2

0xbbcc,	// (0x0002411a) list_double2_pane_g1_cp2_ParamLimits

0xbbcc,	// (0x0002411a) list_double2_pane_g1_cp2

0xbbdd,	// (0x0002412b) list_double2_pane_g2_cp2

0xbd37,	// (0x00024285) list_double2_pane_t1_cp2_ParamLimits

0xbd37,	// (0x00024285) list_double2_pane_t1_cp2

0xbd4d,	// (0x0002429b) list_double2_pane_t2_cp2_ParamLimits

0xbd4d,	// (0x0002429b) list_double2_pane_t2_cp2

0xbd5f,	// (0x000242ad) list_double_pane_g1_cp2_ParamLimits

0xbd5f,	// (0x000242ad) list_double_pane_g1_cp2

0xbd6b,	// (0x000242b9) list_double_pane_g2_cp2

0xbd73,	// (0x000242c1) list_double_pane_t1_cp2_ParamLimits

0xbd73,	// (0x000242c1) list_double_pane_t1_cp2

0xbd89,	// (0x000242d7) list_double_pane_t2_cp2_ParamLimits

0xbd89,	// (0x000242d7) list_double_pane_t2_cp2

0xbdb3,	// (0x00024301) list_single_pane_cp2_g3

0xbdc3,	// (0x00024311) list_single_pane_g1_cp2_ParamLimits

0xbdc3,	// (0x00024311) list_single_pane_g1_cp2

0xbdcf,	// (0x0002431d) list_single_pane_g2_cp2

0xbdd7,	// (0x00024325) list_single_pane_t1_cp2_ParamLimits

0xbdd7,	// (0x00024325) list_single_pane_t1_cp2

0xbdef,	// (0x0002433d) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xbdef,	// (0x0002433d) list_single_large_graphic_pane_g1_cp2

0xbdfb,	// (0x00024349) list_single_large_graphic_pane_g2_cp2_ParamLimits

0xbdfb,	// (0x00024349) list_single_large_graphic_pane_g2_cp2

0xbe07,	// (0x00024355) list_single_large_graphic_pane_g3_cp2

0xbe0f,	// (0x0002435d) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xbe0f,	// (0x0002435d) list_single_large_graphic_pane_g4_cp1

0xbe29,	// (0x00024377) list_single_large_graphic_pane_t1_cp2_ParamLimits

0xbe29,	// (0x00024377) list_single_large_graphic_pane_t1_cp2

0xcfe2,	// (0x00025530) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xcfe2,	// (0x00025530) list_single_graphic_heading_pane_g1_cp2

0xcfaf,	// (0x000254fd) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xcfaf,	// (0x000254fd) list_single_graphic_heading_pane_g4_cp2

0xbdcf,	// (0x0002431d) list_single_graphic_heading_pane_g5_cp2

0xcfee,	// (0x0002553c) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xcfee,	// (0x0002553c) list_single_graphic_heading_pane_t1_cp2

0xd004,	// (0x00025552) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xd004,	// (0x00025552) list_single_graphic_heading_pane_t2_cp2

0xcfa3,	// (0x000254f1) list_single_2graphic_pane_g1_cp2_ParamLimits

0xcfa3,	// (0x000254f1) list_single_2graphic_pane_g1_cp2

0xcfaf,	// (0x000254fd) list_single_2graphic_pane_g2_cp2_ParamLimits

0xcfaf,	// (0x000254fd) list_single_2graphic_pane_g2_cp2

0xbdcf,	// (0x0002431d) list_single_2graphic_pane_g3_cp2

0xcfc0,	// (0x0002550e) list_single_2graphic_pane_g4_cp2_ParamLimits

0xcfc0,	// (0x0002550e) list_single_2graphic_pane_g4_cp2

0xcfcc,	// (0x0002551a) list_single_2graphic_pane_t1_cp2_ParamLimits

0xcfcc,	// (0x0002551a) list_single_2graphic_pane_t1_cp2

0x8a3a,	// (0x00020f88) list_highlight_pane_g10_cp1

0xcb99,	// (0x000250e7) list_highlight_pane_g1_cp1

0xcba1,	// (0x000250ef) list_highlight_pane_g2_cp1

0xcba9,	// (0x000250f7) list_highlight_pane_g3_cp1

0xcbb1,	// (0x000250ff) list_highlight_pane_g4_cp1

0xcbb9,	// (0x00025107) list_highlight_pane_g5_cp1

0xcbc1,	// (0x0002510f) list_highlight_pane_g6_cp1

0xcbc9,	// (0x00025117) list_highlight_pane_g7_cp1

0xcbd1,	// (0x0002511f) list_highlight_pane_g8_cp1

0xcbd9,	// (0x00025127) list_highlight_pane_g9_cp1

0x3e96,	// (0x0001c3e4) form_field_slider_pane_t3

0x3ea4,	// (0x0001c3f2) form_field_slider_pane_t4

0xca87,	// (0x00024fd5) slider_form_pane_ParamLimits

0xca87,	// (0x00024fd5) slider_form_pane

0x8b2a,	// (0x00021078) control_abbreviations

0x8b2a,	// (0x00021078) control_conventions

0x8b2a,	// (0x00021078) control_definitions

0x8b2a,	// (0x00021078) format_table_attribute

0xd207,	// (0x00025755) bg_popup_preview_window_pane_g9

0x8b2a,	// (0x00021078) format_table_data2

0x8b2a,	// (0x00021078) format_table_data3

0x8b2a,	// (0x00021078) format_table_data_example

0x0008,

0x8b2a,	// (0x00021078) intro_purpose

0xf8fb,	// (0x00027e49) bg_popup_preview_window_pane_g

0x8b2a,	// (0x00021078) texts_category

0x8b2a,	// (0x00021078) texts_graphics

0xbe3f,	// (0x0002438d) text_digital

0xbe4e,	// (0x0002439c) text_primary

0xbe5d,	// (0x000243ab) text_primary_small

0xbe6c,	// (0x000243ba) text_secondary

0xbe7b,	// (0x000243c9) text_title

0xd6ec,	// (0x00025c3a) bg_passive_tab_pane_g1_cp3_srt

0xbb5e,	// (0x000240ac) bg_passive_tab_pane_g2_cp3_srt

0xd6f5,	// (0x00025c43) bg_passive_tab_pane_g3_cp3_srt

0x8c33,	// (0x00021181) bg_active_tab_pane_cp3_srt_ParamLimits

0x8c33,	// (0x00021181) bg_active_tab_pane_cp3_srt

0xd6fe,	// (0x00025c4c) tabs_4_active_pane_srt_g1

0x97f0,	// (0x00021d3e) tabs_4_active_pane_srt_t1_ParamLimits

0x97f0,	// (0x00021d3e) tabs_4_active_pane_srt_t1

0xd6ec,	// (0x00025c3a) bg_active_tab_pane_g1_cp3_copy1

0xbb5e,	// (0x000240ac) bg_active_tab_pane_g2_cp3_copy1

0xd6f5,	// (0x00025c43) bg_active_tab_pane_g3_cp3_copy1

0x8c41,	// (0x0002118f) tabs_2_long_active_pane_srt_ParamLimits

0x8c41,	// (0x0002118f) tabs_2_long_active_pane_srt

0x8c41,	// (0x0002118f) tabs_2_long_passive_pane_srt_ParamLimits

0x8c41,	// (0x0002118f) tabs_2_long_passive_pane_srt

0xb5ca,	// (0x00023b18) bg_passive_tab_pane_cp4_srt_ParamLimits

0xb5ca,	// (0x00023b18) bg_passive_tab_pane_cp4_srt

0xd5fd,	// (0x00025b4b) bg_passive_tab_pane_g1_cp4_srt

0xbb5e,	// (0x000240ac) bg_passive_tab_pane_g2_cp4_srt

0xd606,	// (0x00025b54) bg_passive_tab_pane_g3_cp4_srt

0x8c41,	// (0x0002118f) bg_active_tab_pane_cp4_srt_ParamLimits

0x8c41,	// (0x0002118f) bg_active_tab_pane_cp4_srt

0x961a,	// (0x00021b68) tabs_2_long_active_pane_srt_t1_ParamLimits

0x961a,	// (0x00021b68) tabs_2_long_active_pane_srt_t1

0xd5fd,	// (0x00025b4b) bg_active_tab_pane_g1_cp4_srt

0xbb5e,	// (0x000240ac) bg_active_tab_pane_g2_cp4_srt

0xd606,	// (0x00025b54) bg_active_tab_pane_g3_cp4_srt

0x8c33,	// (0x00021181) tabs_3_long_active_pane_srt_ParamLimits

0x8c33,	// (0x00021181) tabs_3_long_active_pane_srt

0x8c33,	// (0x00021181) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x8c33,	// (0x00021181) tabs_3_long_passive_pane_cp_srt

0x8c33,	// (0x00021181) tabs_3_long_passive_pane_srt_ParamLimits

0x8c33,	// (0x00021181) tabs_3_long_passive_pane_srt

0xb5ca,	// (0x00023b18) bg_passive_tab_pane_cp5_srt_ParamLimits

0xb5ca,	// (0x00023b18) bg_passive_tab_pane_cp5_srt

0xbbae,	// (0x000240fc) bg_passive_tab_pane_g1_cp5_srt

0xbb5e,	// (0x000240ac) bg_passive_tab_pane_g2_cp5_srt

0xbbb7,	// (0x00024105) bg_passive_tab_pane_g3_cp5_srt

0x8c41,	// (0x0002118f) bg_active_tab_pane_cp5_srt_ParamLimits

0x8c41,	// (0x0002118f) bg_active_tab_pane_cp5_srt

0x9604,	// (0x00021b52) tabs_3_long_active_pane_srt_t1_ParamLimits

0x9604,	// (0x00021b52) tabs_3_long_active_pane_srt_t1

0xbbae,	// (0x000240fc) bg_active_tab_pane_g1_cp5_srt

0xbb5e,	// (0x000240ac) bg_active_tab_pane_g2_cp5_srt

0xbbb7,	// (0x00024105) bg_active_tab_pane_g3_cp5_srt

0xd5ef,	// (0x00025b3d) navi_text_pane_srt_t1

0xd5e7,	// (0x00025b35) navi_icon_pane_srt_g1

0xbf93,	// (0x000244e1) midp_editing_number_pane_srt

0xbe8a,	// (0x000243d8) midp_ticker_pane_srt

0xbf9b,	// (0x000244e9) midp_ticker_pane_srt_g1

0xbfa3,	// (0x000244f1) midp_ticker_pane_srt_g2

0x0001,

0xf78a,	// (0x00027cd8) midp_ticker_pane_srt_g

0xbfab,	// (0x000244f9) midp_ticker_pane_srt_t1

0xd5d8,	// (0x00025b26) midp_editing_number_pane_t1_copy1

0xb5ca,	// (0x00023b18) listscroll_midp_pane

0xb5ca,	// (0x00023b18) midp_form_pane

0xbe92,	// (0x000243e0) midp_info_popup_window_ParamLimits

0xbe92,	// (0x000243e0) midp_info_popup_window

0xb52a,	// (0x00023a78) bg_popup_sub_pane_cp50_ParamLimits

0xb52a,	// (0x00023a78) bg_popup_sub_pane_cp50

0xc79f,	// (0x00024ced) listscroll_midp_info_pane_ParamLimits

0xc79f,	// (0x00024ced) listscroll_midp_info_pane

0xc787,	// (0x00024cd5) listscroll_form_midp_pane_ParamLimits

0xc787,	// (0x00024cd5) listscroll_form_midp_pane

0xc793,	// (0x00024ce1) scroll_bar_cp050

0x3e8a,	// (0x0001c3d8) list_midp_pane

0xdf9c,	// (0x000264ea) signal_pane_g2_cp

0xc6b9,	// (0x00024c07) listscroll_midp_info_pane_t1_ParamLimits

0xc6b9,	// (0x00024c07) listscroll_midp_info_pane_t1

0xc6d1,	// (0x00024c1f) listscroll_midp_info_pane_t2_ParamLimits

0xc6d1,	// (0x00024c1f) listscroll_midp_info_pane_t2

0xc70f,	// (0x00024c5d) listscroll_midp_info_pane_t3_ParamLimits

0xc70f,	// (0x00024c5d) listscroll_midp_info_pane_t3

0xc749,	// (0x00024c97) listscroll_midp_info_pane_t4_ParamLimits

0xc749,	// (0x00024c97) listscroll_midp_info_pane_t4

0x0003,

0xf836,	// (0x00027d84) listscroll_midp_info_pane_t_ParamLimits

0xf836,	// (0x00027d84) listscroll_midp_info_pane_t

0xb591,	// (0x00023adf) scroll_pane_cp21

0xc657,	// (0x00024ba5) form_midp_field_choice_group_pane

0xc660,	// (0x00024bae) form_midp_field_text_pane

0xc69f,	// (0x00024bed) form_midp_field_time_pane

0xc6a7,	// (0x00024bf5) form_midp_gauge_slider_pane

0xc6b0,	// (0x00024bfe) form_midp_gauge_wait_pane

0x8b2a,	// (0x00021078) form_midp_image_pane

0x8776,	// (0x00020cc4) list_single_midp_pane_ParamLimits

0x8776,	// (0x00020cc4) list_single_midp_pane

0x3e52,	// (0x0001c3a0) form_midp_field_text_pane_t1

0xc4fe,	// (0x00024a4c) input_focus_pane_cp050

0xc646,	// (0x00024b94) list_midp_form_text_pane

0xc615,	// (0x00024b63) form_midp_field_choice_group_pane_t1

0xc623,	// (0x00024b71) input_focus_pane_cp051

0xc637,	// (0x00024b85) list_midp_choice_pane

0x8b2a,	// (0x00021078) status_idle_pane

0xc5f9,	// (0x00024b47) form_midp_field_time_pane_t1

0x8a3a,	// (0x00020f88) wait_anim_pane_g2_copy1

0xc607,	// (0x00024b55) form_midp_field_time_pane_t2

0x0001,

0xbefd,	// (0x0002444b) aid_navinavi_width_2_pane

0xf831,	// (0x00027d7f) form_midp_field_time_pane_t

0x8b2a,	// (0x00021078) input_focus_pane_cp052

0x8b2a,	// (0x00021078) bg_input_focus_pane_cp040

0xc5d5,	// (0x00024b23) form_midp_gauge_slider_pane_t1

0xc5e3,	// (0x00024b31) form_midp_gauge_slider_pane_t2

0x3e36,	// (0x0001c384) form_midp_gauge_slider_pane_t3

0x3e44,	// (0x0001c392) form_midp_gauge_slider_pane_t4

0x0003,

0xf828,	// (0x00027d76) form_midp_gauge_slider_pane_t

0xc5f1,	// (0x00024b3f) form_midp_slider_pane

0x8c41,	// (0x0002118f) bg_input_focus_pane_cp041_ParamLimits

0x8c41,	// (0x0002118f) bg_input_focus_pane_cp041

0xc5a2,	// (0x00024af0) form_midp_gauge_wait_pane_t1_ParamLimits

0xc5a2,	// (0x00024af0) form_midp_gauge_wait_pane_t1

0xc5b4,	// (0x00024b02) form_midp_gauge_wait_pane_t2_ParamLimits

0xc5b4,	// (0x00024b02) form_midp_gauge_wait_pane_t2

0x0001,

0xf823,	// (0x00027d71) form_midp_gauge_wait_pane_t_ParamLimits

0xf823,	// (0x00027d71) form_midp_gauge_wait_pane_t

0xc5c6,	// (0x00024b14) form_midp_wait_pane_ParamLimits

0xc5c6,	// (0x00024b14) form_midp_wait_pane

0xc56c,	// (0x00024aba) form_midp_image_pane_g1

0xc575,	// (0x00024ac3) form_midp_image_pane_t1

0xc584,	// (0x00024ad2) form_midp_image_pane_t2

0xc593,	// (0x00024ae1) form_midp_image_pane_t3

0x0002,

0xf81c,	// (0x00027d6a) form_midp_image_pane_t

0xc563,	// (0x00024ab1) list_single_midp_pane_g1

0x5140,	// (0x0001d68e) list_single_midp_pane_t1

0x3e21,	// (0x0001c36f) list_midp_form_item_pane_ParamLimits

0x3e21,	// (0x0001c36f) list_midp_form_item_pane

0xbea5,	// (0x000243f3) list_midp_form_item_pane_t1

0xbeb4,	// (0x00024402) midp_ticker_pane_g1

0xbec0,	// (0x0002440e) midp_ticker_pane_g2

0x0001,

0xf770,	// (0x00027cbe) midp_ticker_pane_g

0xbecc,	// (0x0002441a) midp_ticker_pane_t1

0xd68e,	// (0x00025bdc) midp_editing_number_pane_t1

0xd66c,	// (0x00025bba) midp_editing_number_pane

0xd67b,	// (0x00025bc9) midp_ticker_pane

0xd5c8,	// (0x00025b16) ai_message_heading_pane

0x8b2a,	// (0x00021078) bg_popup_window_pane_cp14

0xd5d0,	// (0x00025b1e) listscroll_ai_message_pane

0xd552,	// (0x00025aa0) ai_message_heading_pane_g1_ParamLimits

0xd552,	// (0x00025aa0) ai_message_heading_pane_g1

0xd55e,	// (0x00025aac) ai_message_heading_pane_g2_ParamLimits

0xd55e,	// (0x00025aac) ai_message_heading_pane_g2

0xd56a,	// (0x00025ab8) ai_message_heading_pane_g3_ParamLimits

0xd56a,	// (0x00025ab8) ai_message_heading_pane_g3

0xd576,	// (0x00025ac4) ai_message_heading_pane_g4_ParamLimits

0xd576,	// (0x00025ac4) ai_message_heading_pane_g4

0x0003,

0xf95d,	// (0x00027eab) ai_message_heading_pane_g_ParamLimits

0xf95d,	// (0x00027eab) ai_message_heading_pane_g

0xd582,	// (0x00025ad0) ai_message_heading_pane_t1_ParamLimits

0xd582,	// (0x00025ad0) ai_message_heading_pane_t1

0xd59c,	// (0x00025aea) ai_message_heading_pane_t2_ParamLimits

0xd59c,	// (0x00025aea) ai_message_heading_pane_t2

0x0001,

0xf966,	// (0x00027eb4) ai_message_heading_pane_t_ParamLimits

0xf966,	// (0x00027eb4) ai_message_heading_pane_t

0xd5ae,	// (0x00025afc) bg_popup_heading_pane_cp1_ParamLimits

0xd5ae,	// (0x00025afc) bg_popup_heading_pane_cp1

0xd540,	// (0x00025a8e) list_ai_message_pane_ParamLimits

0xd540,	// (0x00025a8e) list_ai_message_pane

0xb591,	// (0x00023adf) scroll_pane_cp10

0xd4dc,	// (0x00025a2a) list_ai_message_pane_g1

0xd4e4,	// (0x00025a32) list_ai_message_pane_g2

0x0001,

0xf93a,	// (0x00027e88) list_ai_message_pane_g

0xd4ec,	// (0x00025a3a) list_ai_message_pane_t1_ParamLimits

0xd4ec,	// (0x00025a3a) list_ai_message_pane_t1

0xd501,	// (0x00025a4f) list_ai_message_pane_t2_ParamLimits

0xd501,	// (0x00025a4f) list_ai_message_pane_t2

0xd516,	// (0x00025a64) list_ai_message_pane_t3_ParamLimits

0xd516,	// (0x00025a64) list_ai_message_pane_t3

0xd52b,	// (0x00025a79) list_ai_message_pane_t4_ParamLimits

0xd52b,	// (0x00025a79) list_ai_message_pane_t4

0x0003,

0xf93f,	// (0x00027e8d) list_ai_message_pane_t_ParamLimits

0xf93f,	// (0x00027e8d) list_ai_message_pane_t

0x95e3,	// (0x00021b31) cell_ai_soft_ind_pane_ParamLimits

0x95e3,	// (0x00021b31) cell_ai_soft_ind_pane

0xbede,	// (0x0002442c) cell_ai_soft_ind_pane_g1_ParamLimits

0xbede,	// (0x0002442c) cell_ai_soft_ind_pane_g1

0x8b2a,	// (0x00021078) grid_highlight_cp1

0xbeeb,	// (0x00024439) text_secondary_cp56_ParamLimits

0xbeeb,	// (0x00024439) text_secondary_cp56

0xd4b1,	// (0x000259ff) example_general_pane_ParamLimits

0xd4b1,	// (0x000259ff) example_general_pane

0xd4bd,	// (0x00025a0b) example_parent_pane_g1_ParamLimits

0xd4bd,	// (0x00025a0b) example_parent_pane_g1

0xd4c9,	// (0x00025a17) example_parent_pane_t1_ParamLimits

0xd4c9,	// (0x00025a17) example_parent_pane_t1

0x36f0,	// (0x0001bc3e) popup_preview_text_window_ParamLimits

0x36f0,	// (0x0001bc3e) popup_preview_text_window

0xbdbb,	// (0x00024309) list_single_pane_cp2_g4

0x8e1c,	// (0x0002136a) bg_popup_preview_window_pane_ParamLimits

0x8e1c,	// (0x0002136a) bg_popup_preview_window_pane

0xd20f,	// (0x0002575d) popup_preview_text_window_t1_ParamLimits

0xd20f,	// (0x0002575d) popup_preview_text_window_t1

0xd22d,	// (0x0002577b) popup_preview_text_window_t2_ParamLimits

0xd22d,	// (0x0002577b) popup_preview_text_window_t2

0xd276,	// (0x000257c4) popup_preview_text_window_t3_ParamLimits

0xd276,	// (0x000257c4) popup_preview_text_window_t3

0xd2bb,	// (0x00025809) popup_preview_text_window_t4_ParamLimits

0xd2bb,	// (0x00025809) popup_preview_text_window_t4

0x0004,

0xf90e,	// (0x00027e5c) popup_preview_text_window_t_ParamLimits

0xf90e,	// (0x00027e5c) popup_preview_text_window_t

0xd339,	// (0x00025887) scroll_pane_cp11

0xc3ee,	// (0x0002493c) bg_popup_preview_window_pane_g1

0xd1cf,	// (0x0002571d) bg_popup_preview_window_pane_g2

0xd1d7,	// (0x00025725) bg_popup_preview_window_pane_g3

0xd1df,	// (0x0002572d) bg_popup_preview_window_pane_g4

0xd1e7,	// (0x00025735) bg_popup_preview_window_pane_g5

0xd1ef,	// (0x0002573d) bg_popup_preview_window_pane_g6

0xd1f7,	// (0x00025745) bg_popup_preview_window_pane_g7

0xd1ff,	// (0x0002574d) bg_popup_preview_window_pane_g8

0x58ab,	// (0x0001ddf9) aid_popup_width_pane

0x366c,	// (0x0001bbba) popup_midp_note_alarm_window_ParamLimits

0x366c,	// (0x0001bbba) popup_midp_note_alarm_window

0xb466,	// (0x000239b4) data_form_pane_ParamLimits

0x85e9,	// (0x00020b37) form_field_data_pane_g1

0x85f3,	// (0x00020b41) form_field_data_pane_t1_ParamLimits

0xb472,	// (0x000239c0) input_focus_pane_ParamLimits

0xb480,	// (0x000239ce) data_form_wide_pane_ParamLimits

0x4e40,	// (0x0001d38e) form_field_data_wide_pane_g1

0x4e4c,	// (0x0001d39a) form_field_data_wide_pane_t1_ParamLimits

0x8fbd,	// (0x0002150b) input_focus_pane_cp6_ParamLimits

0x2f97,	// (0x0001b4e5) input_popup_find_pane_g1_ParamLimits

0x2f97,	// (0x0001b4e5) input_popup_find_pane_g1

0x5e15,	// (0x0001e363) aid_navi_side_left_pane

0x5e2a,	// (0x0001e378) aid_navi_side_right_pane

0xcc76,	// (0x000251c4) bg_popup_window_pane_cp30_ParamLimits

0xcc76,	// (0x000251c4) bg_popup_window_pane_cp30

0xccf0,	// (0x0002523e) popup_midp_note_alarm_window_g1_ParamLimits

0xccf0,	// (0x0002523e) popup_midp_note_alarm_window_g1

0xcd20,	// (0x0002526e) popup_midp_note_alarm_window_t1_ParamLimits

0xcd20,	// (0x0002526e) popup_midp_note_alarm_window_t1

0xcdc1,	// (0x0002530f) popup_midp_note_alarm_window_t2_ParamLimits

0xcdc1,	// (0x0002530f) popup_midp_note_alarm_window_t2

0xce6f,	// (0x000253bd) popup_midp_note_alarm_window_t3_ParamLimits

0xce6f,	// (0x000253bd) popup_midp_note_alarm_window_t3

0xcea1,	// (0x000253ef) popup_midp_note_alarm_window_t4_ParamLimits

0xcea1,	// (0x000253ef) popup_midp_note_alarm_window_t4

0xcec7,	// (0x00025415) popup_midp_note_alarm_window_t5_ParamLimits

0xcec7,	// (0x00025415) popup_midp_note_alarm_window_t5

0x000a,

0xf8ab,	// (0x00027df9) popup_midp_note_alarm_window_t_ParamLimits

0xf8ab,	// (0x00027df9) popup_midp_note_alarm_window_t

0xcf73,	// (0x000254c1) wait_bar_pane_cp1_ParamLimits

0xcf73,	// (0x000254c1) wait_bar_pane_cp1

0x8b2a,	// (0x00021078) wait_anim_pane_copy1

0x8b2a,	// (0x00021078) wait_border_pane_copy1

0xc948,	// (0x00024e96) wait_border_pane_g1_copy1

0x4e66,	// (0x0001d3b4) form_field_popup_pane_g1

0x860d,	// (0x00020b5b) form_field_popup_pane_t1_ParamLimits

0xb472,	// (0x000239c0) input_focus_pane_cp7_ParamLimits

0xb4ac,	// (0x000239fa) list_form_pane_ParamLimits

0x4e86,	// (0x0001d3d4) form_field_popup_wide_pane_g1

0x4e8e,	// (0x0001d3dc) form_field_popup_wide_pane_t1_ParamLimits

0xb472,	// (0x000239c0) input_focus_pane_cp8_ParamLimits

0xb4b8,	// (0x00023a06) list_form_wide_pane_ParamLimits

0xd725,	// (0x00025c73) aid_size_cell_graphic_pane

0x868c,	// (0x00020bda) data_form_pane_t1_ParamLimits

0x879f,	// (0x00020ced) data_form_wide_pane_t1_ParamLimits

0x3aac,	// (0x0001bffa) bg_status_flat_pane

0x26ce,	// (0x0001ac1c) title_pane_t1_ParamLimits

0x8bfb,	// (0x00021149) title_pane_t2_ParamLimits

0x8c21,	// (0x0002116f) title_pane_t3_ParamLimits

0xf56f,	// (0x00027abd) title_pane_t_ParamLimits

0xb92d,	// (0x00023e7b) level_1_signal_ParamLimits

0xb93a,	// (0x00023e88) level_2_signal_ParamLimits

0xb947,	// (0x00023e95) level_3_signal_ParamLimits

0xb954,	// (0x00023ea2) level_4_signal_ParamLimits

0xb961,	// (0x00023eaf) level_5_signal_ParamLimits

0xb96e,	// (0x00023ebc) level_6_signal_ParamLimits

0xb97b,	// (0x00023ec9) level_7_signal_ParamLimits

0xb92d,	// (0x00023e7b) level_1_battery_ParamLimits

0xb93a,	// (0x00023e88) level_2_battery_ParamLimits

0xb947,	// (0x00023e95) level_3_battery_ParamLimits

0xb954,	// (0x00023ea2) level_4_battery_ParamLimits

0xb961,	// (0x00023eaf) level_5_battery_ParamLimits

0xb96e,	// (0x00023ebc) level_6_battery_ParamLimits

0xb97b,	// (0x00023ec9) level_7_battery_ParamLimits

0xcb99,	// (0x000250e7) bg_status_flat_pane_g1

0xcba1,	// (0x000250ef) bg_status_flat_pane_g2

0xcba9,	// (0x000250f7) bg_status_flat_pane_g3

0xcbb1,	// (0x000250ff) bg_status_flat_pane_g4

0xcbb9,	// (0x00025107) bg_status_flat_pane_g5

0xcbc1,	// (0x0002510f) bg_status_flat_pane_g6

0xcbc9,	// (0x00025117) bg_status_flat_pane_g7

0x2762,	// (0x0001acb0) tabs_3_active_pane_t1_ParamLimits

0x2762,	// (0x0001acb0) tabs_3_passive_pane_t1_ParamLimits

0x277c,	// (0x0001acca) tabs_4_active_pane_t1_ParamLimits

0x277c,	// (0x0001acca) tabs_4_1_passive_pane_t1_ParamLimits

0x2fad,	// (0x0001b4fb) tabs_2_active_pane_t1_ParamLimits

0x2fad,	// (0x0001b4fb) tabs_2_passive_pane_t1_ParamLimits

0x8c41,	// (0x0002118f) bg_active_tab_pane_cp4_ParamLimits

0x2fbf,	// (0x0001b50d) tabs_2_long_active_pane_t1_ParamLimits

0xb5ca,	// (0x00023b18) bg_passive_tab_pane_cp4_ParamLimits

0x635d,	// (0x0001e8ab) list_single_midp_graphic_pane_t1_ParamLimits

0x8c41,	// (0x0002118f) bg_active_tab_pane_cp5_ParamLimits

0x2fd2,	// (0x0001b520) tabs_3_long_active_pane_t1_ParamLimits

0xb5ca,	// (0x00023b18) bg_passive_tab_pane_cp5_ParamLimits

0x635d,	// (0x0001e8ab) list_single_midp_graphic_pane_t1

0x3aac,	// (0x0001bffa) bg_status_flat_pane_ParamLimits

0xc2bf,	// (0x0002480d) indicator_pane_cp2_ParamLimits

0xc2bf,	// (0x0002480d) indicator_pane_cp2

0x3c24,	// (0x0001c172) navi_pane_srt_ParamLimits

0x3c24,	// (0x0001c172) navi_pane_srt

0xc2e7,	// (0x00024835) popup_clock_digital_analogue_window_cp1

0x8c85,	// (0x000211d3) indicator_pane_t1

0xbe8a,	// (0x000243d8) copy_highlight_pane

0xbe8a,	// (0x000243d8) cursor_graphics_pane

0xbe8a,	// (0x000243d8) graphic_within_text_pane

0xbe8a,	// (0x000243d8) link_highlight_pane

0xd2fc,	// (0x0002584a) popup_preview_text_window_t5_ParamLimits

0xd2fc,	// (0x0002584a) popup_preview_text_window_t5

0xbf05,	// (0x00024453) cursor_digital_pane

0xbf05,	// (0x00024453) cursor_primary_pane

0xbf16,	// (0x00024464) cursor_primary_small_pane

0xbf1e,	// (0x0002446c) cursor_secondary_pane

0xbf26,	// (0x00024474) cursor_title_pane

0xbf05,	// (0x00024453) link_highlight_digital_pane

0xbf0d,	// (0x0002445b) link_highlight_primary_pane

0xbf16,	// (0x00024464) link_highlight_primary_small_pane

0xbf1e,	// (0x0002446c) link_highlight_secondary_pane

0xbf26,	// (0x00024474) link_highlight_title_pane

0xbf05,	// (0x00024453) copy_highlight_digital_pane

0xbf05,	// (0x00024453) copy_highlight_primary_pane

0xbf16,	// (0x00024464) copy_highlight_primary_small_pane

0xbf1e,	// (0x0002446c) copy_highlight_secondary_pane

0xbf26,	// (0x00024474) copy_highlight_title_pane

0xbf1e,	// (0x0002446c) graphic_text_digital_pane

0xcc19,	// (0x00025167) graphic_text_primary_pane

0xcc22,	// (0x00025170) graphic_text_primary_small_pane

0xbf16,	// (0x00024464) graphic_text_secondary_pane

0xbf05,	// (0x00024453) graphic_text_title_pane

0x32e7,	// (0x0001b835) cursor_primary_pane_g1

0xcc0b,	// (0x00025159) cursor_text_primary_t1

0x3ec6,	// (0x0001c414) cursor_primary_small_pane_g1

0xcbfd,	// (0x0002514b) cursor_text_primary_small_t1

0x3ebc,	// (0x0001c40a) cursor_primary_small_pane_g1_copy1

0xcbef,	// (0x0002513d) cursor_text_primary_small_t1_copy1

0xcbe1,	// (0x0002512f) cursor_text_title_t1

0x3eb2,	// (0x0001c400) cursor_title_pane_g1

0x32e7,	// (0x0001b835) cursor_digital_pane_g1

0xbf2e,	// (0x0002447c) cursor_text_digital_t1

0xbf53,	// (0x000244a1) link_highlight_primary_pane_g1

0xcb8a,	// (0x000250d8) link_highlight_primary_pane_t1

0xbf3c,	// (0x0002448a) link_highlight_primary_small_pane_g1

0xbf44,	// (0x00024492) link_highlight_primary_small_pane_t1

0xbf53,	// (0x000244a1) link_highlight_secondary_pane_g1

0xbf5b,	// (0x000244a9) link_highlight_secondary_pane_t1

0xcab0,	// (0x00024ffe) link_highlight_title_pane_g1

0xcab8,	// (0x00025006) link_highlight_title_pane_t1

0xca99,	// (0x00024fe7) link_highlight_digital_pane_g1

0xcaa1,	// (0x00024fef) link_highlight_digital_pane_t1

0xc98d,	// (0x00024edb) copy_highlight_primary_pane_g1

0xc995,	// (0x00024ee3) copy_highlight_primary_pane_t1

0xc967,	// (0x00024eb5) copy_highlight_primary_small_pane_g1

0xc97e,	// (0x00024ecc) copy_highlight_primary_small_pane_t1

0xbf6a,	// (0x000244b8) copy_highlight_secondary_pane_g1

0xbf72,	// (0x000244c0) copy_highlight_secondary_pane_t1

0xc967,	// (0x00024eb5) copy_highlight_title_pane_g1

0xc96f,	// (0x00024ebd) copy_highlight_title_pane_t1

0xc98d,	// (0x00024edb) copy_highlight_digital_pane_g1

0xd8ab,	// (0x00025df9) copy_highlight_digital_pane_t1

0xd7ff,	// (0x00025d4d) graphic_text_primary_pane_g1

0xd88f,	// (0x00025ddd) graphic_text_primary_pane_t1

0xd89d,	// (0x00025deb) graphic_text_primary_pane_t2

0x0001,

0xf9da,	// (0x00027f28) graphic_text_primary_pane_t

0xd86b,	// (0x00025db9) graphic_text_primary_small_pane_g1

0xd873,	// (0x00025dc1) graphic_text_primary_small_pane_t1

0xd881,	// (0x00025dcf) graphic_text_primary_small_pane_t2

0x0001,

0xf9d5,	// (0x00027f23) graphic_text_primary_small_pane_t

0xd847,	// (0x00025d95) graphic_text_secondary_pane_g1

0xd84f,	// (0x00025d9d) graphic_text_secondary_pane_t1

0xd85d,	// (0x00025dab) graphic_text_secondary_pane_t2

0x0001,

0xf9d0,	// (0x00027f1e) graphic_text_secondary_pane_t

0xd823,	// (0x00025d71) graphic_text_title_pane_g1

0xd82b,	// (0x00025d79) graphic_text_title_pane_t1

0xd839,	// (0x00025d87) graphic_text_title_pane_t2

0x0001,

0xf9cb,	// (0x00027f19) graphic_text_title_pane_t

0xd7ff,	// (0x00025d4d) graphic_text_digital_pane_g1

0xd807,	// (0x00025d55) graphic_text_digital_pane_t1

0xd815,	// (0x00025d63) graphic_text_digital_pane_t2

0x0001,

0xf9c6,	// (0x00027f14) graphic_text_digital_pane_t

0x8c41,	// (0x0002118f) navi_icon_pane_srt_ParamLimits

0x8c41,	// (0x0002118f) navi_icon_pane_srt

0x8b2a,	// (0x00021078) navi_midp_pane_srt

0x8b2a,	// (0x00021078) navi_navi_pane_srt

0x8c41,	// (0x0002118f) navi_text_pane_srt_ParamLimits

0x8c41,	// (0x0002118f) navi_text_pane_srt

0xd7ca,	// (0x00025d18) navi_navi_icon_text_pane_srt

0xd7d2,	// (0x00025d20) navi_navi_pane_srt_g1_ParamLimits

0xd7d2,	// (0x00025d20) navi_navi_pane_srt_g1

0xd7e4,	// (0x00025d32) navi_navi_pane_srt_g2_ParamLimits

0xd7e4,	// (0x00025d32) navi_navi_pane_srt_g2

0x0001,

0xf9c1,	// (0x00027f0f) navi_navi_pane_srt_g_ParamLimits

0xf9c1,	// (0x00027f0f) navi_navi_pane_srt_g

0xd7f6,	// (0x00025d44) navi_navi_tabs_pane_srt

0xd7ca,	// (0x00025d18) navi_navi_text_pane_srt

0xd7ca,	// (0x00025d18) navi_navi_volume_pane_srt

0xd7bb,	// (0x00025d09) navi_navi_text_pane_srt_t1

0x66d7,	// (0x0001ec25) navi_navi_volume_pane_srt_g1

0x66df,	// (0x0001ec2d) volume_small_pane_srt_ParamLimits

0x66df,	// (0x0001ec2d) volume_small_pane_srt

0x60f5,	// (0x0001e643) volume_small_pane_srt_g1_ParamLimits

0x60f5,	// (0x0001e643) volume_small_pane_srt_g1

0x6105,	// (0x0001e653) volume_small_pane_srt_g2_ParamLimits

0x6105,	// (0x0001e653) volume_small_pane_srt_g2

0x6116,	// (0x0001e664) volume_small_pane_srt_g3_ParamLimits

0x6116,	// (0x0001e664) volume_small_pane_srt_g3

0x6127,	// (0x0001e675) volume_small_pane_srt_g4_ParamLimits

0x6127,	// (0x0001e675) volume_small_pane_srt_g4

0x6138,	// (0x0001e686) volume_small_pane_srt_g5_ParamLimits

0x6138,	// (0x0001e686) volume_small_pane_srt_g5

0x6149,	// (0x0001e697) volume_small_pane_srt_g6_ParamLimits

0x6149,	// (0x0001e697) volume_small_pane_srt_g6

0x615a,	// (0x0001e6a8) volume_small_pane_srt_g7_ParamLimits

0x615a,	// (0x0001e6a8) volume_small_pane_srt_g7

0x616b,	// (0x0001e6b9) volume_small_pane_srt_g8_ParamLimits

0x616b,	// (0x0001e6b9) volume_small_pane_srt_g8

0x617c,	// (0x0001e6ca) volume_small_pane_srt_g9_ParamLimits

0x617c,	// (0x0001e6ca) volume_small_pane_srt_g9

0x618d,	// (0x0001e6db) volume_small_pane_srt_g10_ParamLimits

0x618d,	// (0x0001e6db) volume_small_pane_srt_g10

0x0009,

0xf775,	// (0x00027cc3) volume_small_pane_srt_g_ParamLimits

0xf775,	// (0x00027cc3) volume_small_pane_srt_g

0x8ec5,	// (0x00021413) query_popup_data_pane_cp2

0xd7a1,	// (0x00025cef) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xd7a1,	// (0x00025cef) navi_navi_icon_text_pane_srt_t1

0xcc19,	// (0x00025167) navi_tabs_2_long_pane_srt

0xcc19,	// (0x00025167) navi_tabs_2_pane_srt

0xcc19,	// (0x00025167) navi_tabs_3_long_pane_srt

0xcc19,	// (0x00025167) navi_tabs_3_pane_srt

0xcc19,	// (0x00025167) navi_tabs_4_pane_srt

0x66b7,	// (0x0001ec05) tabs_2_active_pane_srt_ParamLimits

0x66b7,	// (0x0001ec05) tabs_2_active_pane_srt

0x66c7,	// (0x0001ec15) tabs_2_passive_pane_srt_ParamLimits

0x66c7,	// (0x0001ec15) tabs_2_passive_pane_srt

0xc4fe,	// (0x00024a4c) bg_passive_tab_pane_cp1_srt_ParamLimits

0xc4fe,	// (0x00024a4c) bg_passive_tab_pane_cp1_srt

0xd77f,	// (0x00025ccd) bg_passive_tab_pane_g1_cp1_srt

0xbb5e,	// (0x000240ac) bg_passive_tab_pane_g2_cp1_srt

0xd788,	// (0x00025cd6) bg_passive_tab_pane_g3_cp1_srt

0x8c33,	// (0x00021181) bg_active_tab_pane_cp1_srt_ParamLimits

0x8c33,	// (0x00021181) bg_active_tab_pane_cp1_srt

0xd791,	// (0x00025cdf) tabs_2_active_pane_srt_g1

0x986c,	// (0x00021dba) tabs_2_active_pane_srt_t1_ParamLimits

0x986c,	// (0x00021dba) tabs_2_active_pane_srt_t1

0xd77f,	// (0x00025ccd) bg_active_tab_pane_g1_cp1_srt

0xbb5e,	// (0x000240ac) bg_active_tab_pane_g2_cp1_srt

0xd788,	// (0x00025cd6) bg_active_tab_pane_g3_cp1_srt

0x6684,	// (0x0001ebd2) tabs_3_active_pane_srt_ParamLimits

0x6684,	// (0x0001ebd2) tabs_3_active_pane_srt

0x6695,	// (0x0001ebe3) tabs_3_passive_pane_cp_srt_ParamLimits

0x6695,	// (0x0001ebe3) tabs_3_passive_pane_cp_srt

0x66a6,	// (0x0001ebf4) tabs_3_passive_pane_srt_ParamLimits

0x66a6,	// (0x0001ebf4) tabs_3_passive_pane_srt

0xc4fe,	// (0x00024a4c) bg_passive_tab_pane_cp2_srt_ParamLimits

0xc4fe,	// (0x00024a4c) bg_passive_tab_pane_cp2_srt

0xbf81,	// (0x000244cf) bg_passive_tab_pane_g1_cp2_srt

0xbb5e,	// (0x000240ac) bg_passive_tab_pane_g2_cp2_srt

0xbf8a,	// (0x000244d8) bg_passive_tab_pane_g3_cp2_srt

0x8c33,	// (0x00021181) bg_active_tab_pane_cp2_srt_ParamLimits

0x8c33,	// (0x00021181) bg_active_tab_pane_cp2_srt

0xd777,	// (0x00025cc5) tabs_3_active_pane_srt_g1

0x9856,	// (0x00021da4) tabs_3_active_pane_srt_t1_ParamLimits

0x9856,	// (0x00021da4) tabs_3_active_pane_srt_t1

0xbf81,	// (0x000244cf) bg_active_tab_pane_g1_cp2_srt

0xbb5e,	// (0x000240ac) bg_active_tab_pane_g2_cp2_srt

0xbf8a,	// (0x000244d8) bg_active_tab_pane_g3_cp2_srt

0x663c,	// (0x0001eb8a) tabs_4_active_pane_srt_ParamLimits

0x663c,	// (0x0001eb8a) tabs_4_active_pane_srt

0x664e,	// (0x0001eb9c) tabs_4_passive_pane_cp2_srt_ParamLimits

0x664e,	// (0x0001eb9c) tabs_4_passive_pane_cp2_srt

0xc0ae,	// (0x000245fc) aid_size_cell_toolbar

0xcb35,	// (0x00025083) main_idle_act_pane_ParamLimits

0xc17e,	// (0x000246cc) popup_large_graphic_colour_window_ParamLimits

0x3970,	// (0x0001bebe) popup_toolbar_window_ParamLimits

0x3970,	// (0x0001bebe) popup_toolbar_window

0xd69d,	// (0x00025beb) list_single_graphic_2heading_pane_ParamLimits

0xd69d,	// (0x00025beb) list_single_graphic_2heading_pane

0xb774,	// (0x00023cc2) aid_size_cell_apps_grid_lsc_pane

0xb786,	// (0x00023cd4) aid_size_cell_apps_grid_prt_pane

0xb5ca,	// (0x00023b18) bg_wml_button_pane_cp1_ParamLimits

0xb5ca,	// (0x00023b18) bg_wml_button_pane_cp1

0x3e52,	// (0x0001c3a0) form_midp_field_text_pane_t1_ParamLimits

0xc4fe,	// (0x00024a4c) input_focus_pane_cp050_ParamLimits

0xc646,	// (0x00024b94) list_midp_form_text_pane_ParamLimits

0xc623,	// (0x00024b71) input_focus_pane_cp051_ParamLimits

0xc637,	// (0x00024b85) list_midp_choice_pane_ParamLimits

0x3def,	// (0x0001c33d) list_single_2graphic_pane_cp3_ParamLimits

0x3def,	// (0x0001c33d) list_single_2graphic_pane_cp3

0x3e02,	// (0x0001c350) list_single_midp_graphic_pane_ParamLimits

0x3e02,	// (0x0001c350) list_single_midp_graphic_pane

0x507a,	// (0x0001d5c8) list_single_graphic_2heading_pane_g1_ParamLimits

0x507a,	// (0x0001d5c8) list_single_graphic_2heading_pane_g1

0x5086,	// (0x0001d5d4) list_single_graphic_2heading_pane_g4_ParamLimits

0x5086,	// (0x0001d5d4) list_single_graphic_2heading_pane_g4

0x5092,	// (0x0001d5e0) list_single_graphic_2heading_pane_g5_ParamLimits

0x5092,	// (0x0001d5e0) list_single_graphic_2heading_pane_g5

0x0002,

0xf7c8,	// (0x00027d16) list_single_graphic_2heading_pane_g_ParamLimits

0xf7c8,	// (0x00027d16) list_single_graphic_2heading_pane_g

0x509e,	// (0x0001d5ec) list_single_graphic_2heading_pane_t1_ParamLimits

0x509e,	// (0x0001d5ec) list_single_graphic_2heading_pane_t1

0x50b2,	// (0x0001d600) list_single_graphic_2heading_pane_t2_ParamLimits

0x50b2,	// (0x0001d600) list_single_graphic_2heading_pane_t2

0x50ce,	// (0x0001d61c) list_single_graphic_2heading_pane_t3_ParamLimits

0x50ce,	// (0x0001d61c) list_single_graphic_2heading_pane_t3

0x0002,

0xf7cf,	// (0x00027d1d) list_single_graphic_2heading_pane_t_ParamLimits

0xf7cf,	// (0x00027d1d) list_single_graphic_2heading_pane_t

0xc32c,	// (0x0002487a) bg_popup_sub_pane_cp2

0xc356,	// (0x000248a4) grid_toobar_pane

0x62e4,	// (0x0001e832) cell_toolbar_pane_ParamLimits

0x62e4,	// (0x0001e832) cell_toolbar_pane

0xc392,	// (0x000248e0) cell_toolbar_pane_g1_ParamLimits

0xc392,	// (0x000248e0) cell_toolbar_pane_g1

0xc3a6,	// (0x000248f4) cell_toolbar_pane_g2_ParamLimits

0xc3a6,	// (0x000248f4) cell_toolbar_pane_g2

0x0001,

0xf7dd,	// (0x00027d2b) cell_toolbar_pane_g_ParamLimits

0xf7dd,	// (0x00027d2b) cell_toolbar_pane_g

0xc3c8,	// (0x00024916) grid_highlight_pane_cp2_ParamLimits

0xc3c8,	// (0x00024916) grid_highlight_pane_cp2

0xc3e2,	// (0x00024930) toolbar_button_pane

0xc3ee,	// (0x0002493c) toolbar_button_pane_g1

0xc3f6,	// (0x00024944) toolbar_button_pane_g2

0xc3fe,	// (0x0002494c) toolbar_button_pane_g3

0xc406,	// (0x00024954) toolbar_button_pane_g4

0xc40e,	// (0x0002495c) toolbar_button_pane_g5

0xc416,	// (0x00024964) toolbar_button_pane_g6

0xc41e,	// (0x0002496c) toolbar_button_pane_g7

0xc426,	// (0x00024974) toolbar_button_pane_g8

0xc42e,	// (0x0002497c) toolbar_button_pane_g9

0x0009,

0xf7e2,	// (0x00027d30) toolbar_button_pane_g

0x631c,	// (0x0001e86a) list_single_2graphic_pane_g1_cp3_ParamLimits

0x631c,	// (0x0001e86a) list_single_2graphic_pane_g1_cp3

0x9355,	// (0x000218a3) list_single_2graphic_pane_g2_cp3_ParamLimits

0x9355,	// (0x000218a3) list_single_2graphic_pane_g2_cp3

0x6339,	// (0x0001e887) list_single_2graphic_pane_g3_cp3

0xc436,	// (0x00024984) list_single_2graphic_pane_g4_cp3_ParamLimits

0xc436,	// (0x00024984) list_single_2graphic_pane_g4_cp3

0x6341,	// (0x0001e88f) list_single_2graphic_pane_t1_cp3_ParamLimits

0x6341,	// (0x0001e88f) list_single_2graphic_pane_t1_cp3

0xc442,	// (0x00024990) list_single_midp_graphic_pane_g2_ParamLimits

0xc442,	// (0x00024990) list_single_midp_graphic_pane_g2

0xc0b6,	// (0x00024604) aid_zoom_text_primary

0x504e,	// (0x0001d59c) aid_zoom_text_secondary

0xc03e,	// (0x0002458c) status_small_pane_g7_ParamLimits

0xc03e,	// (0x0002458c) status_small_pane_g7

0xc061,	// (0x000245af) status_small_pane_t1_ParamLimits

0x26aa,	// (0x0001abf8) title_pane_g2

0x0003,

0xf566,	// (0x00027ab4) title_pane_g

0x2932,	// (0x0001ae80) aid_size_cell_colour_1_pane_ParamLimits

0x2932,	// (0x0001ae80) aid_size_cell_colour_1_pane

0x2946,	// (0x0001ae94) aid_size_cell_colour_2_pane_ParamLimits

0x2946,	// (0x0001ae94) aid_size_cell_colour_2_pane

0x295a,	// (0x0001aea8) aid_size_cell_colour_3_pane_ParamLimits

0x295a,	// (0x0001aea8) aid_size_cell_colour_3_pane

0x296e,	// (0x0001aebc) aid_size_cell_colour_4_pane_ParamLimits

0x296e,	// (0x0001aebc) aid_size_cell_colour_4_pane

0x5d51,	// (0x0001e29f) title_pane_stacon_g1_ParamLimits

0x5d51,	// (0x0001e29f) title_pane_stacon_g1

0xc9ec,	// (0x00024f3a) popup_note_wait_window_g3_ParamLimits

0xc9ec,	// (0x00024f3a) popup_note_wait_window_g3

0xca62,	// (0x00024fb0) popup_note_wait_window_t5_ParamLimits

0xca62,	// (0x00024fb0) popup_note_wait_window_t5

0x8b2a,	// (0x00021078) main_feb_china_hwr_fs_writing_pane

0x33a2,	// (0x0001b8f0) popup_feb_china_hwr_fs_window_ParamLimits

0x33a2,	// (0x0001b8f0) popup_feb_china_hwr_fs_window

0x9366,	// (0x000218b4) aid_size_cell_hwr_fs_ParamLimits

0x9366,	// (0x000218b4) aid_size_cell_hwr_fs

0xc4fe,	// (0x00024a4c) bg_popup_sub_pane_cp3_ParamLimits

0xc4fe,	// (0x00024a4c) bg_popup_sub_pane_cp3

0x937b,	// (0x000218c9) grid_hwr_fs_pane_ParamLimits

0x937b,	// (0x000218c9) grid_hwr_fs_pane

0x63a0,	// (0x0001e8ee) linegrid_hwr_fs_pane_ParamLimits

0x63a0,	// (0x0001e8ee) linegrid_hwr_fs_pane

0x9393,	// (0x000218e1) cell_hwr_fs_pane_ParamLimits

0x9393,	// (0x000218e1) cell_hwr_fs_pane

0xc50a,	// (0x00024a58) linegrid_hwr_fs_pane_g1_ParamLimits

0xc50a,	// (0x00024a58) linegrid_hwr_fs_pane_g1

0x3dc3,	// (0x0001c311) linegrid_hwr_fs_pane_g2_ParamLimits

0x3dc3,	// (0x0001c311) linegrid_hwr_fs_pane_g2

0xc516,	// (0x00024a64) linegrid_hwr_fs_pane_g3_ParamLimits

0xc516,	// (0x00024a64) linegrid_hwr_fs_pane_g3

0x63d2,	// (0x0001e920) linegrid_hwr_fs_pane_g4_ParamLimits

0x63d2,	// (0x0001e920) linegrid_hwr_fs_pane_g4

0x63ec,	// (0x0001e93a) linegrid_hwr_fs_pane_g5_ParamLimits

0x63ec,	// (0x0001e93a) linegrid_hwr_fs_pane_g5

0x0004,

0xf808,	// (0x00027d56) linegrid_hwr_fs_pane_g_ParamLimits

0xf808,	// (0x00027d56) linegrid_hwr_fs_pane_g

0xc522,	// (0x00024a70) cell_hwr_fs_pane_g1_ParamLimits

0xc522,	// (0x00024a70) cell_hwr_fs_pane_g1

0xc2f8,	// (0x00024846) cell_hwr_fs_pane_g2_ParamLimits

0xc2f8,	// (0x00024846) cell_hwr_fs_pane_g2

0x3dd5,	// (0x0001c323) cell_hwr_fs_pane_g3_ParamLimits

0x3dd5,	// (0x0001c323) cell_hwr_fs_pane_g3

0x3de2,	// (0x0001c330) cell_hwr_fs_pane_g4_ParamLimits

0x3de2,	// (0x0001c330) cell_hwr_fs_pane_g4

0x0003,

0xf813,	// (0x00027d61) cell_hwr_fs_pane_g_ParamLimits

0xf813,	// (0x00027d61) cell_hwr_fs_pane_g

0x93b9,	// (0x00021907) cell_hwr_fs_pane_t1

0x8b2a,	// (0x00021078) grid_highlight_pane_cp6

0x8b2a,	// (0x00021078) main_idle_act2_pane

0xb578,	// (0x00023ac6) aid_inside_area_popup_secondary

0x9517,	// (0x00021a65) aid_inside_area_window_primary_ParamLimits

0x9517,	// (0x00021a65) aid_inside_area_window_primary

0xd8ba,	// (0x00025e08) ai2_news_ticker_pane

0xd8c2,	// (0x00025e10) aid_size_cell_ai1_link_ParamLimits

0xd8c2,	// (0x00025e10) aid_size_cell_ai1_link

0x9882,	// (0x00021dd0) popup_ai2_data_window_ParamLimits

0x9882,	// (0x00021dd0) popup_ai2_data_window

0xd8dc,	// (0x00025e2a) popup_ai2_link_window_ParamLimits

0xd8dc,	// (0x00025e2a) popup_ai2_link_window

0xc4fe,	// (0x00024a4c) bg_popup_sub_pane_cp4_ParamLimits

0xc4fe,	// (0x00024a4c) bg_popup_sub_pane_cp4

0xd8f0,	// (0x00025e3e) grid_ai2_link_pane_ParamLimits

0xd8f0,	// (0x00025e3e) grid_ai2_link_pane

0xd907,	// (0x00025e55) popup_ai2_link_window_g1_ParamLimits

0xd907,	// (0x00025e55) popup_ai2_link_window_g1

0xd913,	// (0x00025e61) popup_ai2_link_window_g2_ParamLimits

0xd913,	// (0x00025e61) popup_ai2_link_window_g2

0x0001,

0xf9df,	// (0x00027f2d) popup_ai2_link_window_g_ParamLimits

0xf9df,	// (0x00027f2d) popup_ai2_link_window_g

0xd922,	// (0x00025e70) ai2_mp_button_pane

0xd92a,	// (0x00025e78) ai2_mp_volume_pane

0xc623,	// (0x00024b71) bg_popup_sub_pane_cp5_ParamLimits

0xc623,	// (0x00024b71) bg_popup_sub_pane_cp5

0xd932,	// (0x00025e80) heading_ai2_gene_pane_ParamLimits

0xd932,	// (0x00025e80) heading_ai2_gene_pane

0xd93e,	// (0x00025e8c) list_ai2_gene_pane_ParamLimits

0xd93e,	// (0x00025e8c) list_ai2_gene_pane

0xd986,	// (0x00025ed4) cell_ai2_link_pane_ParamLimits

0xd986,	// (0x00025ed4) cell_ai2_link_pane

0xd99c,	// (0x00025eea) cell_ai2_link_pane_g1

0x8b2a,	// (0x00021078) grid_highlight_pane_cp7

0x66f4,	// (0x0001ec42) ai2_mp_volume_pane_g1

0xda39,	// (0x00025f87) ai2_mp_volume_pane_g2

0x98ac,	// (0x00021dfa) list_ai2_gene_pane_t1

0xda41,	// (0x00025f8f) ai2_mp_volume_pane_g3

0x0002,

0xf9f8,	// (0x00027f46) ai2_mp_volume_pane_g

0x66fc,	// (0x0001ec4a) volume_small_pane_cp3

0xda49,	// (0x00025f97) aid_size_cell_ai2_button

0xda51,	// (0x00025f9f) grid_ai2_button_pane

0xda5a,	// (0x00025fa8) cell_ai2_button_pane_ParamLimits

0xda5a,	// (0x00025fa8) cell_ai2_button_pane

0x8a3a,	// (0x00020f88) cell_ai2_button_pane_g1

0x8b2a,	// (0x00021078) grid_highlight_pane_cp8

0xd9f9,	// (0x00025f47) ai2_gene_pane_t1_ParamLimits

0xd9f9,	// (0x00025f47) ai2_gene_pane_t1

0x3318,	// (0x0001b866) aid_height_parent_landscape

0x9631,	// (0x00021b7f) aid_height_set_list

0xcb35,	// (0x00025083) aid_size_parent

0xd725,	// (0x00025c73) aid_size_cell_graphic_pane_ParamLimits

0xd94e,	// (0x00025e9c) popup_ai2_data_window_g1_ParamLimits

0xd94e,	// (0x00025e9c) popup_ai2_data_window_g1

0xd95a,	// (0x00025ea8) ai2_news_ticker_pane_g1

0xd962,	// (0x00025eb0) ai2_news_ticker_pane_g2

0x0001,

0xf9e4,	// (0x00027f32) ai2_news_ticker_pane_g

0xd96a,	// (0x00025eb8) ai2_news_ticker_pane_t1

0xd978,	// (0x00025ec6) ai2_news_ticker_pane_t2

0x0001,

0xf9e9,	// (0x00027f37) ai2_news_ticker_pane_t

0xd9a5,	// (0x00025ef3) heading_ai2_gene_pane_g1

0xd9ad,	// (0x00025efb) heading_ai2_gene_pane_t1_ParamLimits

0xd9ad,	// (0x00025efb) heading_ai2_gene_pane_t1

0xd9c2,	// (0x00025f10) list_highlight_pane_cp6

0x9896,	// (0x00021de4) ai2_gene_pane_ParamLimits

0x9896,	// (0x00021de4) ai2_gene_pane

0x98ba,	// (0x00021e08) list_ai2_gene_pane_t2

0x0001,

0xf9ee,	// (0x00027f3c) list_ai2_gene_pane_t

0xd9ca,	// (0x00025f18) list_highlight_pane_cp8_ParamLimits

0xd9ca,	// (0x00025f18) list_highlight_pane_cp8

0xd9db,	// (0x00025f29) ai2_gene_pane_g1_ParamLimits

0xd9db,	// (0x00025f29) ai2_gene_pane_g1

0xd9ed,	// (0x00025f3b) ai2_gene_pane_g2_ParamLimits

0xd9ed,	// (0x00025f3b) ai2_gene_pane_g2

0x0001,

0xf9f3,	// (0x00027f41) ai2_gene_pane_g_ParamLimits

0xf9f3,	// (0x00027f41) ai2_gene_pane_g

0x91d8,	// (0x00021726) scroll_pane_cp12

0x9314,	// (0x00021862) control_pane_t3_ParamLimits

0x9314,	// (0x00021862) control_pane_t3

0xc052,	// (0x000245a0) status_small_pane_g8_ParamLimits

0xc052,	// (0x000245a0) status_small_pane_g8

0x3437,	// (0x0001b985) popup_find_window_ParamLimits

0x36a6,	// (0x0001bbf4) popup_note_image_window_ParamLimits

0x507a,	// (0x0001d5c8) list_double2_graphic_pane_vc_g1_ParamLimits

0x507a,	// (0x0001d5c8) list_double2_graphic_pane_vc_g1

0x50e6,	// (0x0001d634) list_double2_graphic_pane_vc_g2_ParamLimits

0x50e6,	// (0x0001d634) list_double2_graphic_pane_vc_g2

0x50f2,	// (0x0001d640) list_double2_graphic_pane_vc_g3_ParamLimits

0x50f2,	// (0x0001d640) list_double2_graphic_pane_vc_g3

0x0002,

0xf7d6,	// (0x00027d24) list_double2_graphic_pane_vc_g_ParamLimits

0xf7d6,	// (0x00027d24) list_double2_graphic_pane_vc_g

0x50fe,	// (0x0001d64c) list_double2_graphic_pane_vc_t1_ParamLimits

0x50fe,	// (0x0001d64c) list_double2_graphic_pane_vc_t1

0x5086,	// (0x0001d5d4) list_single_heading_pane_vc_g1_ParamLimits

0x5086,	// (0x0001d5d4) list_single_heading_pane_vc_g1

0x5092,	// (0x0001d5e0) list_single_heading_pane_vc_g2_ParamLimits

0x5092,	// (0x0001d5e0) list_single_heading_pane_vc_g2

0x0001,

0xf5e0,	// (0x00027b2e) list_single_heading_pane_vc_g_ParamLimits

0xf5e0,	// (0x00027b2e) list_single_heading_pane_vc_g

0x5114,	// (0x0001d662) list_single_heading_pane_vc_t1_ParamLimits

0x5114,	// (0x0001d662) list_single_heading_pane_vc_t1

0x512c,	// (0x0001d67a) list_single_heading_pane_vc_t2_ParamLimits

0x512c,	// (0x0001d67a) list_single_heading_pane_vc_t2

0x0001,

0xf7f7,	// (0x00027d45) list_single_heading_pane_vc_t_ParamLimits

0xf7f7,	// (0x00027d45) list_single_heading_pane_vc_t

0xc44e,	// (0x0002499c) list_setting_number_pane_vc_g1_ParamLimits

0xc44e,	// (0x0002499c) list_setting_number_pane_vc_g1

0xc45a,	// (0x000249a8) list_setting_number_pane_vc_g2_ParamLimits

0xc45a,	// (0x000249a8) list_setting_number_pane_vc_g2

0x0001,

0xf7fc,	// (0x00027d4a) list_setting_number_pane_vc_g_ParamLimits

0xf7fc,	// (0x00027d4a) list_setting_number_pane_vc_g

0xc466,	// (0x000249b4) list_setting_number_pane_vc_t1_ParamLimits

0xc466,	// (0x000249b4) list_setting_number_pane_vc_t1

0xc47a,	// (0x000249c8) list_setting_number_pane_vc_t2_ParamLimits

0xc47a,	// (0x000249c8) list_setting_number_pane_vc_t2

0xc496,	// (0x000249e4) list_setting_number_pane_vc_t3_ParamLimits

0xc496,	// (0x000249e4) list_setting_number_pane_vc_t3

0x0002,

0xf801,	// (0x00027d4f) list_setting_number_pane_vc_t_ParamLimits

0xf801,	// (0x00027d4f) list_setting_number_pane_vc_t

0xc4c2,	// (0x00024a10) set_value_pane_vc_ParamLimits

0xc4c2,	// (0x00024a10) set_value_pane_vc

0xd69d,	// (0x00025beb) list_double2_graphic_pane_vc_ParamLimits

0xd69d,	// (0x00025beb) list_double2_graphic_pane_vc

0xd69d,	// (0x00025beb) list_double2_large_graphic_pane_vc_ParamLimits

0xd69d,	// (0x00025beb) list_double2_large_graphic_pane_vc

0xd69d,	// (0x00025beb) list_double2_pane_vc_ParamLimits

0xd69d,	// (0x00025beb) list_double2_pane_vc

0xd69d,	// (0x00025beb) list_double_graphic_heading_pane_vc_ParamLimits

0xd69d,	// (0x00025beb) list_double_graphic_heading_pane_vc

0xd69d,	// (0x00025beb) list_double_graphic_pane_vc_ParamLimits

0xd69d,	// (0x00025beb) list_double_graphic_pane_vc

0xd69d,	// (0x00025beb) list_double_heading_pane_vc_ParamLimits

0xd69d,	// (0x00025beb) list_double_heading_pane_vc

0xd69d,	// (0x00025beb) list_double_large_graphic_pane_vc_ParamLimits

0xd69d,	// (0x00025beb) list_double_large_graphic_pane_vc

0xd69d,	// (0x00025beb) list_double_number_pane_vc_ParamLimits

0xd69d,	// (0x00025beb) list_double_number_pane_vc

0xd69d,	// (0x00025beb) list_double_pane_vc_ParamLimits

0xd69d,	// (0x00025beb) list_double_pane_vc

0xd69d,	// (0x00025beb) list_double_time_pane_vc_ParamLimits

0xd69d,	// (0x00025beb) list_double_time_pane_vc

0xd69d,	// (0x00025beb) list_setting_number_pane_vc_ParamLimits

0xd69d,	// (0x00025beb) list_setting_number_pane_vc

0xd69d,	// (0x00025beb) list_setting_pane_vc_ParamLimits

0xd69d,	// (0x00025beb) list_setting_pane_vc

0xd69d,	// (0x00025beb) list_single_graphic_heading_pane_vc_ParamLimits

0xd69d,	// (0x00025beb) list_single_graphic_heading_pane_vc

0xd69d,	// (0x00025beb) list_single_heading_pane_vc_ParamLimits

0xd69d,	// (0x00025beb) list_single_heading_pane_vc

0xd69d,	// (0x00025beb) list_single_number_heading_pane_vc_ParamLimits

0xd69d,	// (0x00025beb) list_single_number_heading_pane_vc

0x52a5,	// (0x0001d7f3) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x52a5,	// (0x0001d7f3) list_double_graphic_heading_pane_vc_g1

0x5086,	// (0x0001d5d4) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x5086,	// (0x0001d5d4) list_double_graphic_heading_pane_vc_g2

0x5092,	// (0x0001d5e0) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x5092,	// (0x0001d5e0) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9ff,	// (0x00027f4d) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9ff,	// (0x00027f4d) list_double_graphic_heading_pane_vc_g

0x52b1,	// (0x0001d7ff) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x52b1,	// (0x0001d7ff) list_double_graphic_heading_pane_vc_t1

0x5114,	// (0x0001d662) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x5114,	// (0x0001d662) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa06,	// (0x00027f54) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa06,	// (0x00027f54) list_double_graphic_heading_pane_vc_t

0xc44e,	// (0x0002499c) list_setting_pane_vc_g1_ParamLimits

0xc44e,	// (0x0002499c) list_setting_pane_vc_g1

0xc45a,	// (0x000249a8) list_setting_pane_vc_g2_ParamLimits

0xc45a,	// (0x000249a8) list_setting_pane_vc_g2

0x0001,

0xf7fc,	// (0x00027d4a) list_setting_pane_vc_g_ParamLimits

0xf7fc,	// (0x00027d4a) list_setting_pane_vc_g

0xdc70,	// (0x000261be) list_setting_pane_vc_t1_ParamLimits

0xdc70,	// (0x000261be) list_setting_pane_vc_t1

0xdc8c,	// (0x000261da) list_setting_pane_vc_t2_ParamLimits

0xdc8c,	// (0x000261da) list_setting_pane_vc_t2

0x0001,

0xfa49,	// (0x00027f97) list_setting_pane_vc_t_ParamLimits

0xfa49,	// (0x00027f97) list_setting_pane_vc_t

0xc4c2,	// (0x00024a10) set_value_pane_cp_vc_ParamLimits

0xc4c2,	// (0x00024a10) set_value_pane_cp_vc

0x5086,	// (0x0001d5d4) list_single_number_heading_pane_vc_g1_ParamLimits

0x5086,	// (0x0001d5d4) list_single_number_heading_pane_vc_g1

0x5092,	// (0x0001d5e0) list_single_number_heading_pane_vc_g2_ParamLimits

0x5092,	// (0x0001d5e0) list_single_number_heading_pane_vc_g2

0x0001,

0xf5e0,	// (0x00027b2e) list_single_number_heading_pane_vc_g_ParamLimits

0xf5e0,	// (0x00027b2e) list_single_number_heading_pane_vc_g

0x5114,	// (0x0001d662) list_single_number_heading_pane_vc_t1_ParamLimits

0x5114,	// (0x0001d662) list_single_number_heading_pane_vc_t1

0x52c5,	// (0x0001d813) list_single_number_heading_pane_vc_t2_ParamLimits

0x52c5,	// (0x0001d813) list_single_number_heading_pane_vc_t2

0x52d9,	// (0x0001d827) list_single_number_heading_pane_vc_t3_ParamLimits

0x52d9,	// (0x0001d827) list_single_number_heading_pane_vc_t3

0x0002,

0xfa4e,	// (0x00027f9c) list_single_number_heading_pane_vc_t_ParamLimits

0xfa4e,	// (0x00027f9c) list_single_number_heading_pane_vc_t

0x507a,	// (0x0001d5c8) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x507a,	// (0x0001d5c8) list_single_graphic_heading_pane_vc_g1

0x5086,	// (0x0001d5d4) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x5086,	// (0x0001d5d4) list_single_graphic_heading_pane_vc_g4

0x5092,	// (0x0001d5e0) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x5092,	// (0x0001d5e0) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7c8,	// (0x00027d16) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7c8,	// (0x00027d16) list_single_graphic_heading_pane_vc_g

0x5114,	// (0x0001d662) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x5114,	// (0x0001d662) list_single_graphic_heading_pane_vc_t1

0x52eb,	// (0x0001d839) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x52eb,	// (0x0001d839) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa55,	// (0x00027fa3) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa55,	// (0x00027fa3) list_single_graphic_heading_pane_vc_t

0x5086,	// (0x0001d5d4) list_double2_pane_vc_g1_ParamLimits

0x5086,	// (0x0001d5d4) list_double2_pane_vc_g1

0x5092,	// (0x0001d5e0) list_double2_pane_vc_g2_ParamLimits

0x5092,	// (0x0001d5e0) list_double2_pane_vc_g2

0x0001,

0xf5e0,	// (0x00027b2e) list_double2_pane_vc_g_ParamLimits

0xf5e0,	// (0x00027b2e) list_double2_pane_vc_g

0x52ff,	// (0x0001d84d) list_double2_pane_vc_t1_ParamLimits

0x52ff,	// (0x0001d84d) list_double2_pane_vc_t1

0x5315,	// (0x0001d863) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x5315,	// (0x0001d863) list_double2_large_graphic_pane_vc_g1

0x5086,	// (0x0001d5d4) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x5086,	// (0x0001d5d4) list_double2_large_graphic_pane_vc_g2

0x5092,	// (0x0001d5e0) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x5092,	// (0x0001d5e0) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5fd,	// (0x00027b4b) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5fd,	// (0x00027b4b) list_double2_large_graphic_pane_vc_g

0x5321,	// (0x0001d86f) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x5321,	// (0x0001d86f) list_double2_large_graphic_pane_vc_t1

0x5337,	// (0x0001d885) list_double_time_pane_vc_g1_ParamLimits

0x5337,	// (0x0001d885) list_double_time_pane_vc_g1

0x5343,	// (0x0001d891) list_double_time_pane_vc_g2_ParamLimits

0x5343,	// (0x0001d891) list_double_time_pane_vc_g2

0x0001,

0xfa5a,	// (0x00027fa8) list_double_time_pane_vc_g_ParamLimits

0xfa5a,	// (0x00027fa8) list_double_time_pane_vc_g

0x534f,	// (0x0001d89d) list_double_time_pane_vc_t1_ParamLimits

0x534f,	// (0x0001d89d) list_double_time_pane_vc_t1

0x536a,	// (0x0001d8b8) list_double_time_pane_vc_t2_ParamLimits

0x536a,	// (0x0001d8b8) list_double_time_pane_vc_t2

0x53a5,	// (0x0001d8f3) list_double_time_pane_vc_t3_ParamLimits

0x53a5,	// (0x0001d8f3) list_double_time_pane_vc_t3

0x53bd,	// (0x0001d90b) list_double_time_pane_vc_t4_ParamLimits

0x53bd,	// (0x0001d90b) list_double_time_pane_vc_t4

0x0003,

0xfa5f,	// (0x00027fad) list_double_time_pane_vc_t_ParamLimits

0xfa5f,	// (0x00027fad) list_double_time_pane_vc_t

0x5086,	// (0x0001d5d4) list_double_pane_vc_g1_ParamLimits

0x5086,	// (0x0001d5d4) list_double_pane_vc_g1

0x5092,	// (0x0001d5e0) list_double_pane_vc_g2_ParamLimits

0x5092,	// (0x0001d5e0) list_double_pane_vc_g2

0x0001,

0xf5e0,	// (0x00027b2e) list_double_pane_vc_g_ParamLimits

0xf5e0,	// (0x00027b2e) list_double_pane_vc_g

0x53d1,	// (0x0001d91f) list_double_pane_vc_t1_ParamLimits

0x53d1,	// (0x0001d91f) list_double_pane_vc_t1

0x53e5,	// (0x0001d933) list_double_pane_vc_t2_ParamLimits

0x53e5,	// (0x0001d933) list_double_pane_vc_t2

0x0001,

0xfa68,	// (0x00027fb6) list_double_pane_vc_t_ParamLimits

0xfa68,	// (0x00027fb6) list_double_pane_vc_t

0x5086,	// (0x0001d5d4) list_double_number_pane_vc_g1_ParamLimits

0x5086,	// (0x0001d5d4) list_double_number_pane_vc_g1

0x5092,	// (0x0001d5e0) list_double_number_pane_vc_g2_ParamLimits

0x5092,	// (0x0001d5e0) list_double_number_pane_vc_g2

0x0001,

0xf5e0,	// (0x00027b2e) list_double_number_pane_vc_g_ParamLimits

0xf5e0,	// (0x00027b2e) list_double_number_pane_vc_g

0x53fd,	// (0x0001d94b) list_double_number_pane_vc_t1_ParamLimits

0x53fd,	// (0x0001d94b) list_double_number_pane_vc_t1

0x5411,	// (0x0001d95f) list_double_number_pane_vc_t2_ParamLimits

0x5411,	// (0x0001d95f) list_double_number_pane_vc_t2

0x53e5,	// (0x0001d933) list_double_number_pane_vc_t3_ParamLimits

0x53e5,	// (0x0001d933) list_double_number_pane_vc_t3

0x0002,

0xfa6d,	// (0x00027fbb) list_double_number_pane_vc_t_ParamLimits

0xfa6d,	// (0x00027fbb) list_double_number_pane_vc_t

0x5425,	// (0x0001d973) list_double_large_graphic_pane_vc_g1_ParamLimits

0x5425,	// (0x0001d973) list_double_large_graphic_pane_vc_g1

0x5431,	// (0x0001d97f) list_double_large_graphic_pane_vc_g2_ParamLimits

0x5431,	// (0x0001d97f) list_double_large_graphic_pane_vc_g2

0x5092,	// (0x0001d5e0) list_double_large_graphic_pane_vc_g3_ParamLimits

0x5092,	// (0x0001d5e0) list_double_large_graphic_pane_vc_g3

0x5440,	// (0x0001d98e) list_double_large_graphic_pane_vc_g4_ParamLimits

0x5440,	// (0x0001d98e) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa74,	// (0x00027fc2) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa74,	// (0x00027fc2) list_double_large_graphic_pane_vc_g

0x544c,	// (0x0001d99a) list_double_large_graphic_pane_vc_t1_ParamLimits

0x544c,	// (0x0001d99a) list_double_large_graphic_pane_vc_t1

0x5460,	// (0x0001d9ae) list_double_large_graphic_pane_vc_t2_ParamLimits

0x5460,	// (0x0001d9ae) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa7d,	// (0x00027fcb) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa7d,	// (0x00027fcb) list_double_large_graphic_pane_vc_t

0x5086,	// (0x0001d5d4) list_double_heading_pane_vc_g1_ParamLimits

0x5086,	// (0x0001d5d4) list_double_heading_pane_vc_g1

0x5092,	// (0x0001d5e0) list_double_heading_pane_vc_g2_ParamLimits

0x5092,	// (0x0001d5e0) list_double_heading_pane_vc_g2

0x0001,

0xf5e0,	// (0x00027b2e) list_double_heading_pane_vc_g_ParamLimits

0xf5e0,	// (0x00027b2e) list_double_heading_pane_vc_g

0x5479,	// (0x0001d9c7) list_double_heading_pane_vc_t1_ParamLimits

0x5479,	// (0x0001d9c7) list_double_heading_pane_vc_t1

0x5114,	// (0x0001d662) list_double_heading_pane_vc_t2_ParamLimits

0x5114,	// (0x0001d662) list_double_heading_pane_vc_t2

0x0001,

0xfa82,	// (0x00027fd0) list_double_heading_pane_vc_t_ParamLimits

0xfa82,	// (0x00027fd0) list_double_heading_pane_vc_t

0x548d,	// (0x0001d9db) list_double_graphic_pane_vc_g1_ParamLimits

0x548d,	// (0x0001d9db) list_double_graphic_pane_vc_g1

0x549d,	// (0x0001d9eb) list_double_graphic_pane_vc_g2_ParamLimits

0x549d,	// (0x0001d9eb) list_double_graphic_pane_vc_g2

0x54ac,	// (0x0001d9fa) list_double_graphic_pane_vc_g3_ParamLimits

0x54ac,	// (0x0001d9fa) list_double_graphic_pane_vc_g3

0x0002,

0xfa87,	// (0x00027fd5) list_double_graphic_pane_vc_g_ParamLimits

0xfa87,	// (0x00027fd5) list_double_graphic_pane_vc_g

0x54b8,	// (0x0001da06) list_double_graphic_pane_vc_t1_ParamLimits

0x54b8,	// (0x0001da06) list_double_graphic_pane_vc_t1

0x53e5,	// (0x0001d933) list_double_graphic_pane_vc_t2_ParamLimits

0x53e5,	// (0x0001d933) list_double_graphic_pane_vc_t2

0x0001,

0xfa8e,	// (0x00027fdc) list_double_graphic_pane_vc_t_ParamLimits

0xfa8e,	// (0x00027fdc) list_double_graphic_pane_vc_t

0x58b7,	// (0x0001de05) aid_size_cell_fastswap

0x8a44,	// (0x00020f92) aid_size_cell_touch_ParamLimits

0x8a44,	// (0x00020f92) aid_size_cell_touch

0x5b1a,	// (0x0001e068) popup_fast_swap_wide_window_ParamLimits

0x5b1a,	// (0x0001e068) popup_fast_swap_wide_window

0x8b99,	// (0x000210e7) touch_pane_ParamLimits

0x8b99,	// (0x000210e7) touch_pane

0xb45e,	// (0x000239ac) button_value_adjust_pane_cp2

0x4d72,	// (0x0001d2c0) button_value_adjust_pane_cp4

0x4d92,	// (0x0001d2e0) form_field_data_pane_cp2

0x85b0,	// (0x00020afe) form_field_data_wide_pane_cp2

0xb7ab,	// (0x00023cf9) bg_scroll_pane_ParamLimits

0x5eb4,	// (0x0001e402) scroll_handle_pane_ParamLimits

0x5ec8,	// (0x0001e416) scroll_sc2_down_pane_ParamLimits

0x5ec8,	// (0x0001e416) scroll_sc2_down_pane

0xb7dc,	// (0x00023d2a) scroll_sc2_up_pane_ParamLimits

0xb7dc,	// (0x00023d2a) scroll_sc2_up_pane

0x99e4,	// (0x00021f32) grid_wheel_folder_pane_g1_ParamLimits

0x99e4,	// (0x00021f32) grid_wheel_folder_pane_g1

0x608d,	// (0x0001e5db) clock_nsta_pane_cp2_ParamLimits

0x608d,	// (0x0001e5db) clock_nsta_pane_cp2

0xb5ca,	// (0x00023b18) listscroll_midp_pane_ParamLimits

0x3250,	// (0x0001b79e) midp_canvas_pane

0xc0a6,	// (0x000245f4) nsta_clock_indic_pane

0xc0de,	// (0x0002462c) listscroll_form_pane_vc

0xc0e6,	// (0x00024634) listscroll_set_pane_vc_ParamLimits

0xc0e6,	// (0x00024634) listscroll_set_pane_vc

0x3ad4,	// (0x0001c022) clock_nsta_pane

0x3afe,	// (0x0001c04c) indicator_nsta_pane

0xc32c,	// (0x0002487a) bg_popup_sub_pane_cp2_ParamLimits

0xc340,	// (0x0002488e) find_pane_cp2_ParamLimits

0xc340,	// (0x0002488e) find_pane_cp2

0xc356,	// (0x000248a4) grid_toobar_pane_ParamLimits

0xc4d2,	// (0x00024a20) list_form_gen_pane_vc_ParamLimits

0xc4d2,	// (0x00024a20) list_form_gen_pane_vc

0xc4e8,	// (0x00024a36) scroll_pane_cp8_vc_ParamLimits

0xc4e8,	// (0x00024a36) scroll_pane_cp8_vc

0xc538,	// (0x00024a86) data_form_wide_pane_vc_ParamLimits

0xc538,	// (0x00024a86) data_form_wide_pane_vc

0xc544,	// (0x00024a92) form_field_data_wide_pane_vc_g1

0xc54c,	// (0x00024a9a) form_field_data_wide_pane_vc_t1_ParamLimits

0xc54c,	// (0x00024a9a) form_field_data_wide_pane_vc_t1

0xb472,	// (0x000239c0) input_focus_pane_cp6_vc_ParamLimits

0xb472,	// (0x000239c0) input_focus_pane_cp6_vc

0x3e8a,	// (0x0001c3d8) list_midp_pane_ParamLimits

0xcb47,	// (0x00025095) scroll_pane_cp16_ParamLimits

0xcb47,	// (0x00025095) scroll_pane_cp16

0xc7c1,	// (0x00024d0f) button_value_adjust_pane_ParamLimits

0xc7c1,	// (0x00024d0f) button_value_adjust_pane

0x9642,	// (0x00021b90) button_value_adjust_pane_cp6_ParamLimits

0x9642,	// (0x00021b90) button_value_adjust_pane_cp6

0x975c,	// (0x00021caa) settings_code_pane_cp_ParamLimits

0x975c,	// (0x00021caa) settings_code_pane_cp

0x8a3a,	// (0x00020f88) cell_touch_pane_g1

0x8a3a,	// (0x00020f88) cell_touch_pane_g2

0x0001,

0xf71b,	// (0x00027c69) cell_touch_pane_g

0x98c8,	// (0x00021e16) cell_touch_pane_cp_ParamLimits

0x98c8,	// (0x00021e16) cell_touch_pane_cp

0x98e4,	// (0x00021e32) cell_touch_pane_ParamLimits

0x98e4,	// (0x00021e32) cell_touch_pane

0x8a3a,	// (0x00020f88) scroll_sc2_down_pane_g1

0x8a3a,	// (0x00020f88) scroll_sc2_up_pane_g1

0x8b2a,	// (0x00021078) bg_set_opt_pane_cp4_vc

0xda6c,	// (0x00025fba) list_set_graphic_pane_vc_g1_ParamLimits

0xda6c,	// (0x00025fba) list_set_graphic_pane_vc_g1

0xda78,	// (0x00025fc6) list_set_graphic_pane_vc_g2_ParamLimits

0xda78,	// (0x00025fc6) list_set_graphic_pane_vc_g2

0x0001,

0xfa0b,	// (0x00027f59) list_set_graphic_pane_vc_g_ParamLimits

0xfa0b,	// (0x00027f59) list_set_graphic_pane_vc_g

0xda84,	// (0x00025fd2) text_primary_small_cp13_vc_ParamLimits

0xda84,	// (0x00025fd2) text_primary_small_cp13_vc

0xda9c,	// (0x00025fea) list_set_graphic_pane_vc_ParamLimits

0xda9c,	// (0x00025fea) list_set_graphic_pane_vc

0x8b2a,	// (0x00021078) input_focus_pane_cp2_vc

0x8a3a,	// (0x00020f88) setting_code_pane_vc_g1

0xdab0,	// (0x00025ffe) setting_code_pane_vc_t1

0xdabe,	// (0x0002600c) set_text_pane_vc_t1_ParamLimits

0xdabe,	// (0x0002600c) set_text_pane_vc_t1

0x8b2a,	// (0x00021078) input_focus_pane_cp1_vc

0xdad9,	// (0x00026027) list_set_text_pane_vc

0x8a3a,	// (0x00020f88) setting_text_pane_vc_g1

0x8b2a,	// (0x00021078) bg_set_opt_pane_cp2_vc

0xdae3,	// (0x00026031) setting_slider_graphic_pane_vc_g1

0xdaeb,	// (0x00026039) setting_slider_graphic_pane_vc_t1

0xdaf9,	// (0x00026047) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa10,	// (0x00027f5e) setting_slider_graphic_pane_vc_t

0xdb07,	// (0x00026055) slider_set_pane_cp_vc

0xdb0f,	// (0x0002605d) slider_set_pane_vc_g1

0xdb18,	// (0x00026066) slider_set_pane_vc_g2

0x0006,

0xfa15,	// (0x00027f63) slider_set_pane_vc_g

0xb4d9,	// (0x00023a27) set_opt_bg_pane_g1_copy1

0xb4e1,	// (0x00023a2f) set_opt_bg_pane_g2_copy1

0xdb44,	// (0x00026092) set_opt_bg_pane_g3_copy1

0xb4f1,	// (0x00023a3f) set_opt_bg_pane_g4_copy1

0xb4f9,	// (0x00023a47) set_opt_bg_pane_g5_copy1

0xb501,	// (0x00023a4f) set_opt_bg_pane_g6_copy1

0xdb4e,	// (0x0002609c) set_opt_bg_pane_g7_copy1

0xdb56,	// (0x000260a4) set_opt_bg_pane_g8_copy1

0xdb60,	// (0x000260ae) set_opt_bg_pane_g9_copy1

0x8b2a,	// (0x00021078) bg_set_opt_pane_cp_vc

0xdb6a,	// (0x000260b8) setting_slider_pane_vc_t1

0xdaeb,	// (0x00026039) setting_slider_pane_vc_t2

0xdaf9,	// (0x00026047) setting_slider_pane_vc_t3

0x0002,

0xfa24,	// (0x00027f72) setting_slider_pane_vc_t

0xdb07,	// (0x00026055) slider_set_pane_vc

0x6410,	// (0x0001e95e) volume_set_pane_vc_g1

0x6419,	// (0x0001e967) volume_set_pane_vc_g2

0x6422,	// (0x0001e970) volume_set_pane_vc_g3

0x642b,	// (0x0001e979) volume_set_pane_vc_g4

0x6434,	// (0x0001e982) volume_set_pane_vc_g5

0x643d,	// (0x0001e98b) volume_set_pane_vc_g6

0x6446,	// (0x0001e994) volume_set_pane_vc_g7

0x644f,	// (0x0001e99d) volume_set_pane_vc_g8

0x6458,	// (0x0001e9a6) volume_set_pane_vc_g9

0x6461,	// (0x0001e9af) volume_set_pane_vc_g10

0x0009,

0xfa2b,	// (0x00027f79) volume_set_pane_vc_g

0xdb79,	// (0x000260c7) volume_set_pane_vc

0xdb81,	// (0x000260cf) button_value_adjust_pane_cp1_vc

0xdb8b,	// (0x000260d9) list_highlight_pane_cp2_vc

0xdb94,	// (0x000260e2) list_set_pane_vc_ParamLimits

0xdb94,	// (0x000260e2) list_set_pane_vc

0xdbfe,	// (0x0002614c) main_pane_set_vc_t1_ParamLimits

0xdbfe,	// (0x0002614c) main_pane_set_vc_t1

0xdc13,	// (0x00026161) main_pane_set_vc_t2_ParamLimits

0xdc13,	// (0x00026161) main_pane_set_vc_t2

0xdc25,	// (0x00026173) main_pane_set_vc_t3_ParamLimits

0xdc25,	// (0x00026173) main_pane_set_vc_t3

0xdc39,	// (0x00026187) main_pane_set_vc_t4_ParamLimits

0xdc39,	// (0x00026187) main_pane_set_vc_t4

0x0003,

0xfa40,	// (0x00027f8e) main_pane_set_vc_t_ParamLimits

0xfa40,	// (0x00027f8e) main_pane_set_vc_t

0xdc4d,	// (0x0002619b) setting_code_pane_vc_ParamLimits

0xdc4d,	// (0x0002619b) setting_code_pane_vc

0xdc5e,	// (0x000261ac) setting_slider_graphic_pane_vc

0xdc5e,	// (0x000261ac) setting_slider_pane_vc

0xdc5e,	// (0x000261ac) setting_text_pane_vc

0xdc5e,	// (0x000261ac) setting_volume_pane_vc

0xdc68,	// (0x000261b6) scroll_pane_cp121_vc

0xb44c,	// (0x0002399a) set_content_pane_vc

0xdca8,	// (0x000261f6) button_value_adjust_pane_g1

0xdcb1,	// (0x000261ff) button_value_adjust_pane_g2

0x0001,

0xfa93,	// (0x00027fe1) button_value_adjust_pane_g

0xdcba,	// (0x00026208) form_field_slider_wide_pane_vc_t1_ParamLimits

0xdcba,	// (0x00026208) form_field_slider_wide_pane_vc_t1

0xdcce,	// (0x0002621c) form_field_slider_wide_pane_vc_t2_ParamLimits

0xdcce,	// (0x0002621c) form_field_slider_wide_pane_vc_t2

0x0001,

0xfa98,	// (0x00027fe6) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa98,	// (0x00027fe6) form_field_slider_wide_pane_vc_t

0x8c33,	// (0x00021181) input_focus_pane_cp10_vc_ParamLimits

0x8c33,	// (0x00021181) input_focus_pane_cp10_vc

0xdce2,	// (0x00026230) slider_cont_pane_cp1_vc_ParamLimits

0xdce2,	// (0x00026230) slider_cont_pane_cp1_vc

0xdb0f,	// (0x0002605d) slider_form_pane_g1_cp2

0xdb18,	// (0x00026066) slider_form_pane_g2_cp2

0xdcfd,	// (0x0002624b) form_field_slider_pane_vc_t3

0xdd0b,	// (0x00026259) form_field_slider_pane_vc_t4

0xdd19,	// (0x00026267) slider_form_pane_vc_ParamLimits

0xdd19,	// (0x00026267) slider_form_pane_vc

0xdd26,	// (0x00026274) form_field_slider_pane_vc_t1_ParamLimits

0xdd26,	// (0x00026274) form_field_slider_pane_vc_t1

0xdcce,	// (0x0002621c) form_field_slider_pane_vc_t2_ParamLimits

0xdcce,	// (0x0002621c) form_field_slider_pane_vc_t2

0x0001,

0xfaa8,	// (0x00027ff6) form_field_slider_pane_vc_t_ParamLimits

0xfaa8,	// (0x00027ff6) form_field_slider_pane_vc_t

0x8c33,	// (0x00021181) input_focus_pane_cp9_vc_ParamLimits

0x8c33,	// (0x00021181) input_focus_pane_cp9_vc

0xdd42,	// (0x00026290) slider_cont_pane_vc_ParamLimits

0xdd42,	// (0x00026290) slider_cont_pane_vc

0xdd56,	// (0x000262a4) list_form_graphic_pane_cp_vc_ParamLimits

0xdd56,	// (0x000262a4) list_form_graphic_pane_cp_vc

0xc544,	// (0x00024a92) form_field_popup_wide_pane_vc_g1

0xdd6b,	// (0x000262b9) form_field_popup_wide_pane_vc_t1_ParamLimits

0xdd6b,	// (0x000262b9) form_field_popup_wide_pane_vc_t1

0xb472,	// (0x000239c0) input_focus_pane_cp8_vc_ParamLimits

0xb472,	// (0x000239c0) input_focus_pane_cp8_vc

0xdd82,	// (0x000262d0) list_form_wide_pane_vc_ParamLimits

0xdd82,	// (0x000262d0) list_form_wide_pane_vc

0xdd8e,	// (0x000262dc) list_form_graphic_pane_vc_g1

0xdd96,	// (0x000262e4) list_form_graphic_pane_vc_t1_ParamLimits

0xdd96,	// (0x000262e4) list_form_graphic_pane_vc_t1

0x8c41,	// (0x0002118f) list_highlight_pane_cp5_vc_ParamLimits

0x8c41,	// (0x0002118f) list_highlight_pane_cp5_vc

0xddb2,	// (0x00026300) list_form_graphic_pane_vc_ParamLimits

0xddb2,	// (0x00026300) list_form_graphic_pane_vc

0xc544,	// (0x00024a92) form_field_popup_pane_vc_g1

0xddc8,	// (0x00026316) form_field_popup_pane_vc_t1_ParamLimits

0xddc8,	// (0x00026316) form_field_popup_pane_vc_t1

0xb472,	// (0x000239c0) input_focus_pane_cp7_vc_ParamLimits

0xb472,	// (0x000239c0) input_focus_pane_cp7_vc

0xdddf,	// (0x0002632d) list_form_pane_vc_ParamLimits

0xdddf,	// (0x0002632d) list_form_pane_vc

0xddeb,	// (0x00026339) data_form_pane_vc_t1_ParamLimits

0xddeb,	// (0x00026339) data_form_pane_vc_t1

0xb4d9,	// (0x00023a27) input_focus_pane_vc_g1

0xb4e1,	// (0x00023a2f) input_focus_pane_vc_g2

0xb4e9,	// (0x00023a37) input_focus_pane_vc_g3

0xb4f1,	// (0x00023a3f) input_focus_pane_vc_g4

0xb4f9,	// (0x00023a47) input_focus_pane_vc_g5

0xb501,	// (0x00023a4f) input_focus_pane_vc_g6

0xb509,	// (0x00023a57) input_focus_pane_vc_g7

0xb511,	// (0x00023a5f) input_focus_pane_vc_g8

0xb519,	// (0x00023a67) input_focus_pane_vc_g9

0x8a3a,	// (0x00020f88) input_focus_pane_vc_g10

0x0009,

0xf6a4,	// (0x00027bf2) input_focus_pane_vc_g

0xc538,	// (0x00024a86) data_form_pane_vc_ParamLimits

0xc538,	// (0x00024a86) data_form_pane_vc

0xc544,	// (0x00024a92) form_field_data_pane_vc_g1

0xde06,	// (0x00026354) form_field_data_pane_vc_t1_ParamLimits

0xde06,	// (0x00026354) form_field_data_pane_vc_t1

0xb472,	// (0x000239c0) input_focus_pane_vc_ParamLimits

0xb472,	// (0x000239c0) input_focus_pane_vc

0xde20,	// (0x0002636e) button_value_adjust_pane_cp3_vc

0xde28,	// (0x00026376) button_value_adjust_pane_cp5_vc

0xde30,	// (0x0002637e) form_field_data_pane_vc_ParamLimits

0xde30,	// (0x0002637e) form_field_data_pane_vc

0xde47,	// (0x00026395) form_field_data_pane_vc_cp2

0xde4f,	// (0x0002639d) form_field_data_wide_pane_vc_ParamLimits

0xde4f,	// (0x0002639d) form_field_data_wide_pane_vc

0xde65,	// (0x000263b3) form_field_data_wide_pane_vc_cp2

0xde6d,	// (0x000263bb) form_field_popup_pane_vc_ParamLimits

0xde6d,	// (0x000263bb) form_field_popup_pane_vc

0xde84,	// (0x000263d2) form_field_popup_wide_pane_vc_ParamLimits

0xde84,	// (0x000263d2) form_field_popup_wide_pane_vc

0xde9a,	// (0x000263e8) form_field_slider_pane_vc_ParamLimits

0xde9a,	// (0x000263e8) form_field_slider_pane_vc

0xdead,	// (0x000263fb) form_field_slider_wide_pane_vc_ParamLimits

0xdead,	// (0x000263fb) form_field_slider_wide_pane_vc

0x9902,	// (0x00021e50) grid_touch_1_pane_ParamLimits

0x9902,	// (0x00021e50) grid_touch_1_pane

0x9916,	// (0x00021e64) grid_touch_2_pane_ParamLimits

0x9916,	// (0x00021e64) grid_touch_2_pane

0xdec0,	// (0x0002640e) touch_pane_g1_ParamLimits

0xdec0,	// (0x0002640e) touch_pane_g1

0xdece,	// (0x0002641c) cell_app_pane_cp_wide_ParamLimits

0xdece,	// (0x0002641c) cell_app_pane_cp_wide

0xdedf,	// (0x0002642d) grid_popup_fast_wide_pane_ParamLimits

0xdedf,	// (0x0002642d) grid_popup_fast_wide_pane

0xdef3,	// (0x00026441) scroll_pane_cp19_ParamLimits

0xdef3,	// (0x00026441) scroll_pane_cp19

0x8b2a,	// (0x00021078) bg_popup_window_pane_cp20

0xdf07,	// (0x00026455) listscroll_popup_fast_wide_pane

0xcb05,	// (0x00025053) grid_indicator_nsta_pane

0xdf0f,	// (0x0002645d) clock_nsta_pane_g1

0xdf18,	// (0x00026466) clock_nsta_pane_t1

0x9940,	// (0x00021e8e) cell_indicator_nsta_pane_ParamLimits

0x9940,	// (0x00021e8e) cell_indicator_nsta_pane

0xdec0,	// (0x0002640e) cell_indicator_nsta_pane_g1

0x9959,	// (0x00021ea7) cell_indicator_nsta_pane_g2

0x0001,

0xfab2,	// (0x00028000) cell_indicator_nsta_pane_g

0xdf34,	// (0x00026482) clock_nsta_pane_cp

0xdf3c,	// (0x0002648a) indicator_nsta_pane_cp

0xdf45,	// (0x00026493) nsta_clock_indic_pane_g1

0x8c7d,	// (0x000211cb) grid_indicator_pane

0xb8d1,	// (0x00023e1f) scroll_pane_cp29

0x5fdc,	// (0x0001e52a) indicator_nsta_pane_cp2_ParamLimits

0x5fdc,	// (0x0001e52a) indicator_nsta_pane_cp2

0x8c41,	// (0x0002118f) main_apps_wheel_pane

0xc660,	// (0x00024bae) form_midp_field_text_pane_ParamLimits

0xc793,	// (0x00024ce1) scroll_bar_cp050_ParamLimits

0xdfae,	// (0x000264fc) cell_indicator_pane_ParamLimits

0xdfae,	// (0x000264fc) cell_indicator_pane

0xdfc5,	// (0x00026513) cell_indicator_pane_g1

0x996e,	// (0x00021ebc) grid_wheel_folder_pane_ParamLimits

0x996e,	// (0x00021ebc) grid_wheel_folder_pane

0x997c,	// (0x00021eca) list_wheel_apps_pane_ParamLimits

0x997c,	// (0x00021eca) list_wheel_apps_pane

0x998a,	// (0x00021ed8) main_apps_wheel_pane_g1_ParamLimits

0x998a,	// (0x00021ed8) main_apps_wheel_pane_g1

0x9996,	// (0x00021ee4) main_apps_wheel_pane_g2_ParamLimits

0x9996,	// (0x00021ee4) main_apps_wheel_pane_g2

0x0001,

0xface,	// (0x0002801c) main_apps_wheel_pane_g_ParamLimits

0xface,	// (0x0002801c) main_apps_wheel_pane_g

0x99a4,	// (0x00021ef2) main_apps_wheel_pane_t1_ParamLimits

0x99a4,	// (0x00021ef2) main_apps_wheel_pane_t1

0x99b8,	// (0x00021f06) list_wheel_apps_pane_g1

0x99c0,	// (0x00021f0e) list_wheel_apps_pane_g2

0x99c8,	// (0x00021f16) list_wheel_apps_pane_g3

0x99d0,	// (0x00021f1e) list_wheel_apps_pane_g4

0x99da,	// (0x00021f28) list_wheel_apps_pane_g5

0x0004,

0xfad3,	// (0x00028021) list_wheel_apps_pane_g

0xbd0a,	// (0x00024258) navi_icon_text_pane

0x39c8,	// (0x0001bf16) aid_fill_nsta

0xdfcf,	// (0x0002651d) navi_icon_text_pane_g1

0xdfdb,	// (0x00026529) navi_icon_text_pane_t1

0x3238,	// (0x0001b786) list_set_graphic_pane_t1_ParamLimits

0x3238,	// (0x0001b786) list_set_graphic_pane_t1

0xcef6,	// (0x00025444) popup_midp_note_alarm_window_t6_ParamLimits

0xcef6,	// (0x00025444) popup_midp_note_alarm_window_t6

0xcf08,	// (0x00025456) popup_midp_note_alarm_window_t7_ParamLimits

0xcf08,	// (0x00025456) popup_midp_note_alarm_window_t7

0xcf1a,	// (0x00025468) popup_midp_note_alarm_window_t8_ParamLimits

0xcf1a,	// (0x00025468) popup_midp_note_alarm_window_t8

0xcf2c,	// (0x0002547a) popup_midp_note_alarm_window_t9_ParamLimits

0xcf2c,	// (0x0002547a) popup_midp_note_alarm_window_t9

0xcf3e,	// (0x0002548c) popup_midp_note_alarm_window_t10_ParamLimits

0xcf3e,	// (0x0002548c) popup_midp_note_alarm_window_t10

0xcf50,	// (0x0002549e) popup_midp_note_alarm_window_t11_ParamLimits

0xcf50,	// (0x0002549e) popup_midp_note_alarm_window_t11

0xcf62,	// (0x000254b0) scroll_pane_cp17_ParamLimits

0xcf62,	// (0x000254b0) scroll_pane_cp17

0x6410,	// (0x0001e95e) volume_small_pane_cp_g1

0x6705,	// (0x0001ec53) volume_small_pane_cp_g2

0x670e,	// (0x0001ec5c) volume_small_pane_cp_g3

0x6717,	// (0x0001ec65) volume_small_pane_cp_g4

0x6720,	// (0x0001ec6e) volume_small_pane_cp_g5

0x6729,	// (0x0001ec77) volume_small_pane_cp_g6

0x6732,	// (0x0001ec80) volume_small_pane_cp_g7

0x673b,	// (0x0001ec89) volume_small_pane_cp_g8

0x6744,	// (0x0001ec92) volume_small_pane_cp_g9

0x674d,	// (0x0001ec9b) volume_small_pane_cp_g10

0xbeb4,	// (0x00024402) midp_ticker_pane_g1_ParamLimits

0xbec0,	// (0x0002440e) midp_ticker_pane_g2_ParamLimits

0xf770,	// (0x00027cbe) midp_ticker_pane_g_ParamLimits

0xbecc,	// (0x0002441a) midp_ticker_pane_t1_ParamLimits

0x39ec,	// (0x0001bf3a) aid_fill_nsta_2

0xc77f,	// (0x00024ccd) list_form2_midp_pane

0xd66c,	// (0x00025bba) midp_editing_number_pane_ParamLimits

0xd67b,	// (0x00025bc9) midp_ticker_pane_ParamLimits

0xdfed,	// (0x0002653b) form2_midp_field_pane

0xdff5,	// (0x00026543) scroll_pane_cp51

0xe015,	// (0x00026563) form2_midp_button_pane_ParamLimits

0xe015,	// (0x00026563) form2_midp_button_pane

0xe027,	// (0x00026575) form2_midp_content_pane_ParamLimits

0xe027,	// (0x00026575) form2_midp_content_pane

0xe041,	// (0x0002658f) form2_midp_field_choice_group_pane

0xe049,	// (0x00026597) form2_midp_field_pane_g1

0xe051,	// (0x0002659f) form2_midp_field_pane_g2

0xe059,	// (0x000265a7) form2_midp_field_pane_g3

0xe061,	// (0x000265af) form2_midp_field_pane_g4

0x0003,

0xfaf8,	// (0x00028046) form2_midp_field_pane_g

0xe069,	// (0x000265b7) form2_midp_gauge_slider_pane

0xe071,	// (0x000265bf) form2_midp_gauge_wait_pane

0xe079,	// (0x000265c7) form2_midp_image_pane_ParamLimits

0xe079,	// (0x000265c7) form2_midp_image_pane

0xe094,	// (0x000265e2) form2_midp_label_pane_ParamLimits

0xe094,	// (0x000265e2) form2_midp_label_pane

0x9a0d,	// (0x00021f5b) form2_midp_label_pane_cp_ParamLimits

0x9a0d,	// (0x00021f5b) form2_midp_label_pane_cp

0xe0ad,	// (0x000265fb) form2_midp_string_pane_ParamLimits

0xe0ad,	// (0x000265fb) form2_midp_string_pane

0x87ef,	// (0x00020d3d) form2_midp_text_pane_ParamLimits

0x87ef,	// (0x00020d3d) form2_midp_text_pane

0xe0bf,	// (0x0002660d) form2_midp_time_pane

0xe0cf,	// (0x0002661d) input_focus_pane_cp51_ParamLimits

0xe0cf,	// (0x0002661d) input_focus_pane_cp51

0xe0e7,	// (0x00026635) form2_midp_label_pane_t1_ParamLimits

0xe0e7,	// (0x00026635) form2_midp_label_pane_t1

0x8808,	// (0x00020d56) form2_mdip_text_pane_t1_ParamLimits

0x8808,	// (0x00020d56) form2_mdip_text_pane_t1

0x5505,	// (0x0001da53) form2_midp_time_pane_t1

0xe130,	// (0x0002667e) form2_midp_gauge_slider_pane_t1

0x9a2c,	// (0x00021f7a) form2_midp_gauge_slider_pane_t2

0x9a3e,	// (0x00021f8c) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb01,	// (0x0002804f) form2_midp_gauge_slider_pane_t

0xe142,	// (0x00026690) form2_midp_slider_pane

0xe14e,	// (0x0002669c) form2_midp_gauge_wait_pane_t1

0xe15c,	// (0x000266aa) form2_midp_wait_pane_ParamLimits

0xe15c,	// (0x000266aa) form2_midp_wait_pane

0x9a50,	// (0x00021f9e) list_single_2graphic_pane_cp4_ParamLimits

0x9a50,	// (0x00021f9e) list_single_2graphic_pane_cp4

0x3e02,	// (0x0001c350) list_single_midp_graphic_pane_cp_ParamLimits

0x3e02,	// (0x0001c350) list_single_midp_graphic_pane_cp

0x8b2a,	// (0x00021078) list_highlight_pane_cp20

0xe187,	// (0x000266d5) list_single_2graphic_pane_g1_cp4

0xe18f,	// (0x000266dd) list_single_2graphic_pane_g2_cp4

0xe197,	// (0x000266e5) list_single_2graphic_pane_t1_cp4

0x8c41,	// (0x0002118f) list_highlight_pane_cp21

0xe1a6,	// (0x000266f4) list_single_midp_graphic_pane_g4_cp

0xe1b5,	// (0x00026703) list_single_midp_graphic_pane_t1_cp

0x9a64,	// (0x00021fb2) form2_mdip_string_pane_t1_ParamLimits

0x9a64,	// (0x00021fb2) form2_mdip_string_pane_t1

0x8b2a,	// (0x00021078) bg_wml_button_pane_cp2

0x8a3a,	// (0x00020f88) form2_midp_image_pane_g1

0x4b45,	// (0x0001d093) list_double_large_graphic_pane_g5_ParamLimits

0x4b45,	// (0x0001d093) list_double_large_graphic_pane_g5

0xb5ca,	// (0x00023b18) midp_form_pane_ParamLimits

0x8c41,	// (0x0002118f) main_apps_wheel_pane_ParamLimits

0x3724,	// (0x0001bc72) popup_preview_window_ParamLimits

0x3724,	// (0x0001bc72) popup_preview_window

0xc1c9,	// (0x00024717) popup_touch_info_window_ParamLimits

0xc1c9,	// (0x00024717) popup_touch_info_window

0xc1e7,	// (0x00024735) popup_touch_menu_window_ParamLimits

0xc1e7,	// (0x00024735) popup_touch_menu_window

0x8a30,	// (0x00020f7e) bg_popup_sub_pane_cp6

0xe1ca,	// (0x00026718) list_touch_menu_pane

0xe1d2,	// (0x00026720) list_single_touch_menu_pane_ParamLimits

0xe1d2,	// (0x00026720) list_single_touch_menu_pane

0xe1e8,	// (0x00026736) list_single_touch_menu_pane_t1

0x8c41,	// (0x0002118f) bg_popup_sub_pane_cp7_ParamLimits

0x8c41,	// (0x0002118f) bg_popup_sub_pane_cp7

0xe1f6,	// (0x00026744) heading_sub_pane

0xe1fe,	// (0x0002674c) list_touch_info_pane_ParamLimits

0xe1fe,	// (0x0002674c) list_touch_info_pane

0xe20d,	// (0x0002675b) list_single_touch_info_pane_ParamLimits

0xe20d,	// (0x0002675b) list_single_touch_info_pane

0xe21f,	// (0x0002676d) list_single_touch_info_pane_t1

0xe22d,	// (0x0002677b) list_single_touch_info_pane_t2

0x0001,

0xfb0f,	// (0x0002805d) list_single_touch_info_pane_t

0xbe8a,	// (0x000243d8) bg_popup_heading_pane_cp

0xe23b,	// (0x00026789) heading_sub_pane_t1

0xc4fe,	// (0x00024a4c) bg_popup_preview_window_pane_cp_ParamLimits

0xc4fe,	// (0x00024a4c) bg_popup_preview_window_pane_cp

0xe1f6,	// (0x00026744) heading_preview_pane

0xe1fe,	// (0x0002674c) list_preview_pane_ParamLimits

0xe1fe,	// (0x0002674c) list_preview_pane

0xe249,	// (0x00026797) popup_preview_window_g1

0xe20d,	// (0x0002675b) list_single_preview_pane_ParamLimits

0xe20d,	// (0x0002675b) list_single_preview_pane

0xe251,	// (0x0002679f) list_single_preview_pane_g1

0xe259,	// (0x000267a7) list_single_preview_pane_t1

0xe21f,	// (0x0002676d) list_single_preview_pane_t2

0x0001,

0xfb14,	// (0x00028062) list_single_preview_pane_t

0xe267,	// (0x000267b5) bg_popup_heading_pane_cp2_ParamLimits

0xe267,	// (0x000267b5) bg_popup_heading_pane_cp2

0xe27d,	// (0x000267cb) heading_preview_pane_g1

0xe285,	// (0x000267d3) heading_preview_pane_t1_ParamLimits

0xe285,	// (0x000267d3) heading_preview_pane_t1

0x8c94,	// (0x000211e2) soft_indicator_pane_t1_ParamLimits

0x91b5,	// (0x00021703) scroll_pane_ParamLimits

0xb7ca,	// (0x00023d18) scroll_sc2_left_pane

0xb7d3,	// (0x00023d21) scroll_sc2_right_pane

0xb7f2,	// (0x00023d40) scroll_bg_pane_g1_ParamLimits

0xb807,	// (0x00023d55) scroll_bg_pane_g2_ParamLimits

0xb81f,	// (0x00023d6d) scroll_bg_pane_g3_ParamLimits

0xf6fb,	// (0x00027c49) scroll_bg_pane_g_ParamLimits

0xb7f2,	// (0x00023d40) scroll_handle_pane_g1_ParamLimits

0xb841,	// (0x00023d8f) scroll_handle_pane_g2_ParamLimits

0xb81f,	// (0x00023d6d) scroll_handle_pane_g3_ParamLimits

0xf702,	// (0x00027c50) scroll_handle_pane_g_ParamLimits

0xc106,	// (0x00024654) popup_choice_list_window_ParamLimits

0xc106,	// (0x00024654) popup_choice_list_window

0xc338,	// (0x00024886) choice_list_pane

0xc3ba,	// (0x00024908) cell_toolbar_pane_t1

0xc3e2,	// (0x00024930) toolbar_button_pane_ParamLimits

0xd38e,	// (0x000258dc) ai_gene_pane_1_t2_ParamLimits

0xd38e,	// (0x000258dc) ai_gene_pane_1_t2

0x0001,

0xf91e,	// (0x00027e6c) ai_gene_pane_1_t_ParamLimits

0xf91e,	// (0x00027e6c) ai_gene_pane_1_t

0xe2a2,	// (0x000267f0) scroll_sc2_left_pane_g1

0xe2a2,	// (0x000267f0) scroll_sc2_right_pane_g1

0xb5ca,	// (0x00023b18) bg_popup_sub_pane_cp10

0xe2ac,	// (0x000267fa) list_choice_list_pane

0xe2c5,	// (0x00026813) list_single_choice_list_pane_ParamLimits

0xe2c5,	// (0x00026813) list_single_choice_list_pane

0xe2d8,	// (0x00026826) list_single_choice_list_pane_g1

0xb5b5,	// (0x00023b03) list_single_choice_list_pane_t1_ParamLimits

0xb5b5,	// (0x00023b03) list_single_choice_list_pane_t1

0xe2e0,	// (0x0002682e) choice_list_pane_g1

0xe2e8,	// (0x00026836) choice_list_pane_t1

0x8a30,	// (0x00020f7e) input_focus_pane_cp11

0xb73f,	// (0x00023c8d) title_pane_stacon_g2_ParamLimits

0xb73f,	// (0x00023c8d) title_pane_stacon_g2

0x0002,

0xf6e1,	// (0x00027c2f) title_pane_stacon_g_ParamLimits

0xf6e1,	// (0x00027c2f) title_pane_stacon_g

0xbe8a,	// (0x000243d8) cursor_press_pane

0x33ef,	// (0x0001b93d) popup_fep_hwr_window_ParamLimits

0x33ef,	// (0x0001b93d) popup_fep_hwr_window

0xc160,	// (0x000246ae) popup_fep_vkb_window_ParamLimits

0xc160,	// (0x000246ae) popup_fep_vkb_window

0xe2f6,	// (0x00026844) cursor_press_pane_g1

0x0002,

0xfb3d,	// (0x0002808b) fep_vkb_side_pane_g_ParamLimits

0x6781,	// (0x0001eccf) fep_hwr_candidate_pane_ParamLimits

0x6781,	// (0x0001eccf) fep_hwr_candidate_pane

0x67ab,	// (0x0001ecf9) fep_hwr_side_pane_ParamLimits

0x67ab,	// (0x0001ecf9) fep_hwr_side_pane

0x67cb,	// (0x0001ed19) fep_hwr_top_pane_ParamLimits

0x67cb,	// (0x0001ed19) fep_hwr_top_pane

0x67e3,	// (0x0001ed31) fep_hwr_write_pane_ParamLimits

0x67e3,	// (0x0001ed31) fep_hwr_write_pane

0xfb3d,	// (0x0002808b) fep_vkb_side_pane_g

0xe2fe,	// (0x0002684c) fep_hwr_top_pane_g1

0xe310,	// (0x0002685e) fep_hwr_top_pane_g2

0x680f,	// (0x0001ed5d) fep_hwr_top_pane_g3

0x0002,

0xfb19,	// (0x00028067) fep_hwr_top_pane_g

0x6824,	// (0x0001ed72) fep_hwr_top_text_pane

0xb998,	// (0x00023ee6) fep_hwr_top_text_pane_g1

0xe346,	// (0x00026894) fep_hwr_top_text_pane_t1

0x691a,	// (0x0001ee68) fep_hwr_candidate_pane_g1

0xe473,	// (0x000269c1) fep_vkb_keypad_pane_g3_ParamLimits

0xe473,	// (0x000269c1) fep_vkb_keypad_pane_g3

0xe49b,	// (0x000269e9) fep_vkb_keypad_pane_g4_ParamLimits

0xe49b,	// (0x000269e9) fep_vkb_keypad_pane_g4

0xe50a,	// (0x00026a58) fep_vkb_bottom_pane_g2_ParamLimits

0xe50a,	// (0x00026a58) fep_vkb_bottom_pane_g2

0x0001,

0xfb44,	// (0x00028092) fep_vkb_bottom_pane_g_ParamLimits

0xfb44,	// (0x00028092) fep_vkb_bottom_pane_g

0xe2a2,	// (0x000267f0) cell_vkb_side_pane_g2

0x0001,

0xfb4e,	// (0x0002809c) cell_vkb_side_pane_g

0xe54e,	// (0x00026a9c) cell_vkb_side_pane_t1

0xe55c,	// (0x00026aaa) cell_vkb_side_pane_t1_copy1

0xe2a2,	// (0x000267f0) bg_fep_vkb_candidate_pane_g2

0xe632,	// (0x00026b80) cell_vkb_candidate_pane_ParamLimits

0xe354,	// (0x000268a2) aid_size_cell_vkb_ParamLimits

0xe354,	// (0x000268a2) aid_size_cell_vkb

0xe632,	// (0x00026b80) cell_vkb_candidate_pane

0x6934,	// (0x0001ee82) bg_popup_fep_shadow_pane_g1

0x9b35,	// (0x00022083) fep_vkb_bottom_pane_ParamLimits

0x9b35,	// (0x00022083) fep_vkb_bottom_pane

0xe3e1,	// (0x0002692f) fep_vkb_candidate_pane_ParamLimits

0xe3e1,	// (0x0002692f) fep_vkb_candidate_pane

0x9b5a,	// (0x000220a8) fep_vkb_keypad_pane_ParamLimits

0x9b5a,	// (0x000220a8) fep_vkb_keypad_pane

0x9b96,	// (0x000220e4) fep_vkb_side_pane_ParamLimits

0x9b96,	// (0x000220e4) fep_vkb_side_pane

0x9bd2,	// (0x00022120) fep_vkb_top_pane_ParamLimits

0x9bd2,	// (0x00022120) fep_vkb_top_pane

0xe407,	// (0x00026955) fep_vkb_top_pane_g1_ParamLimits

0xe407,	// (0x00026955) fep_vkb_top_pane_g1

0xe416,	// (0x00026964) fep_vkb_top_pane_g2_ParamLimits

0xe416,	// (0x00026964) fep_vkb_top_pane_g2

0xe425,	// (0x00026973) fep_vkb_top_pane_g3_ParamLimits

0xe425,	// (0x00026973) fep_vkb_top_pane_g3

0x0003,

0xfb34,	// (0x00028082) fep_vkb_top_pane_g_ParamLimits

0xfb34,	// (0x00028082) fep_vkb_top_pane_g

0xe443,	// (0x00026991) fep_vkb_top_text_pane_ParamLimits

0xe443,	// (0x00026991) fep_vkb_top_text_pane

0x9c0e,	// (0x0002215c) fep_vkb_side_pane_g1_ParamLimits

0x9c0e,	// (0x0002215c) fep_vkb_side_pane_g1

0xe462,	// (0x000269b0) grid_vkb_side_pane_ParamLimits

0xe462,	// (0x000269b0) grid_vkb_side_pane

0x693c,	// (0x0001ee8a) bg_popup_fep_shadow_pane_g2

0x6945,	// (0x0001ee93) bg_popup_fep_shadow_pane_g3

0x694d,	// (0x0001ee9b) bg_popup_fep_shadow_pane_g4

0x6956,	// (0x0001eea4) bg_popup_fep_shadow_pane_g5

0x6960,	// (0x0001eeae) bg_popup_fep_shadow_pane_g6

0x6968,	// (0x0001eeb6) bg_popup_fep_shadow_pane_g7

0xb4f9,	// (0x00023a47) bg_popup_fep_shadow_pane_g8

0xe4b9,	// (0x00026a07) grid_vkb_keypad_number_pane_ParamLimits

0xe4b9,	// (0x00026a07) grid_vkb_keypad_number_pane

0xe4c9,	// (0x00026a17) grid_vkb_keypad_pane_ParamLimits

0xe4c9,	// (0x00026a17) grid_vkb_keypad_pane

0xe4ef,	// (0x00026a3d) fep_vkb_bottom_pane_g1_ParamLimits

0xe4ef,	// (0x00026a3d) fep_vkb_bottom_pane_g1

0xe518,	// (0x00026a66) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xe518,	// (0x00026a66) grid_vkb_keypad_bottom_left_pane

0xe52d,	// (0x00026a7b) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xe52d,	// (0x00026a7b) grid_vkb_keypad_bottom_right_pane

0xe542,	// (0x00026a90) fep_vkb_top_text_pane_g1

0x9c55,	// (0x000221a3) fep_vkb_top_text_pane_t1

0x9c67,	// (0x000221b5) cell_vkb_side_pane_ParamLimits

0x9c67,	// (0x000221b5) cell_vkb_side_pane

0xe2a2,	// (0x000267f0) cell_vkb_side_pane_g1

0xe56a,	// (0x00026ab8) cell_vkb_keypad_pane_ParamLimits

0xe56a,	// (0x00026ab8) cell_vkb_keypad_pane

0xe5df,	// (0x00026b2d) cell_vkb_keypad_pane_g1

0x0008,

0xfb61,	// (0x000280af) bg_popup_fep_shadow_pane_g

0xe2a2,	// (0x000267f0) cell_hwr_side_pane_g1

0xe2a2,	// (0x000267f0) cell_hwr_side_pane_g2

0xe5e9,	// (0x00026b37) cell_vkb_keypad_pane_t1

0x9c7d,	// (0x000221cb) cell_vkb_keypad_bottom_left_pane_ParamLimits

0x9c7d,	// (0x000221cb) cell_vkb_keypad_bottom_left_pane

0x9c92,	// (0x000221e0) cell_vkb_keypad_bottom_right_pane_ParamLimits

0x9c92,	// (0x000221e0) cell_vkb_keypad_bottom_right_pane

0xe2a2,	// (0x000267f0) cell_vkb_keypad_bottom_left_pane_g1

0xe2a2,	// (0x000267f0) cell_vkb_keypad_bottom_right_pane_g1

0xe5f7,	// (0x00026b45) cell_vkb_keypad_number_pane_ParamLimits

0xe5f7,	// (0x00026b45) cell_vkb_keypad_number_pane

0xe616,	// (0x00026b64) cell_vkb_keypad_number_pane_g1

0xe620,	// (0x00026b6e) cell_vkb_keypad_number_pane_g2

0xe629,	// (0x00026b77) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb53,	// (0x000280a1) cell_vkb_keypad_number_pane_g

0xe5e9,	// (0x00026b37) cell_vkb_keypad_number_pane_t1

0xe64d,	// (0x00026b9b) fep_vkb_candidate_pane_g1

0x0001,

0xfb4e,	// (0x0002809c) cell_hwr_side_pane_g

0xe666,	// (0x00026bb4) cell_hwr_side_pane_t1

0x697a,	// (0x0001eec8) cell_hwr_side_pane_t1_copy1

0xe435,	// (0x00026983) cell_hwr_candidate_pane_g1

0x6988,	// (0x0001eed6) cell_hwr_candidate_pane_t1

0xe2a2,	// (0x000267f0) cell_vkb_candidate_pane_g2

0xe6aa,	// (0x00026bf8) cell_vkb_candidate_pane_t1

0x1ab2,	// (0x0001a000) bg_popup_fep_shadow_pane_ParamLimits

0x1ab2,	// (0x0001a000) bg_popup_fep_shadow_pane

0x1ac0,	// (0x0001a00e) bg_fep_hwr_top_pane_g4

0xe322,	// (0x00026870) bg_hwr_side_pane_g1_ParamLimits

0xe322,	// (0x00026870) bg_hwr_side_pane_g1

0x9aee,	// (0x0002203c) cell_hwr_side_pane_ParamLimits

0x9aee,	// (0x0002203c) cell_hwr_side_pane

0x689b,	// (0x0001ede9) fep_hwr_write_pane_g1_ParamLimits

0x689b,	// (0x0001ede9) fep_hwr_write_pane_g1

0x68a8,	// (0x0001edf6) fep_hwr_write_pane_g2_ParamLimits

0x68a8,	// (0x0001edf6) fep_hwr_write_pane_g2

0x68b5,	// (0x0001ee03) fep_hwr_write_pane_g3_ParamLimits

0x68b5,	// (0x0001ee03) fep_hwr_write_pane_g3

0x9b0e,	// (0x0002205c) fep_hwr_write_pane_g4_ParamLimits

0x9b0e,	// (0x0002205c) fep_hwr_write_pane_g4

0x0005,

0xfb20,	// (0x0002806e) fep_hwr_write_pane_g_ParamLimits

0xfb20,	// (0x0002806e) fep_hwr_write_pane_g

0x1ac0,	// (0x0001a00e) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x1ac0,	// (0x0001a00e) bg_fep_hwr_candidate_pane_g2

0x68d8,	// (0x0001ee26) cell_hwr_candidate_pane_ParamLimits

0x68d8,	// (0x0001ee26) cell_hwr_candidate_pane

0x691a,	// (0x0001ee68) fep_hwr_candidate_pane_g1_ParamLimits

0xe382,	// (0x000268d0) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xe382,	// (0x000268d0) bg_popup_fep_shadow_pane_cp2

0xe435,	// (0x00026983) fep_vkb_top_pane_g4_ParamLimits

0xe435,	// (0x00026983) fep_vkb_top_pane_g4

0xe454,	// (0x000269a2) fep_vkb_side_pane_g2_ParamLimits

0xe454,	// (0x000269a2) fep_vkb_side_pane_g2

0x84be,	// (0x00020a0c) list_setting_pane_t4_ParamLimits

0x84be,	// (0x00020a0c) list_setting_pane_t4

0x8558,	// (0x00020aa6) list_setting_number_pane_t5_ParamLimits

0x8558,	// (0x00020aa6) list_setting_number_pane_t5

0x30b1,	// (0x0001b5ff) list_double_heading_pane_cp2_ParamLimits

0x30b1,	// (0x0001b5ff) list_double_heading_pane_cp2

0xb48c,	// (0x000239da) list_double_heading_pane_g1_cp2_ParamLimits

0xb48c,	// (0x000239da) list_double_heading_pane_g1_cp2

0xb498,	// (0x000239e6) list_double_heading_pane_g2_cp2_ParamLimits

0xb498,	// (0x000239e6) list_double_heading_pane_g2_cp2

0xe6b8,	// (0x00026c06) list_double_heading_pane_t1_cp2_ParamLimits

0xe6b8,	// (0x00026c06) list_double_heading_pane_t1_cp2

0xe6ce,	// (0x00026c1c) list_double_heading_pane_t2_cp2_ParamLimits

0xe6ce,	// (0x00026c1c) list_double_heading_pane_t2_cp2

0x8a28,	// (0x00020f76) aid_value_unit2

0x5b74,	// (0x0001e0c2) popup_preview_fixed_window

0x8d74,	// (0x000212c2) bg_popup_preview_window_pane_cp02

0xe6e0,	// (0x00026c2e) list_preview_fixed_pane

0xe726,	// (0x00026c74) list_empty_pane_fp_ParamLimits

0xe726,	// (0x00026c74) list_empty_pane_fp

0xe726,	// (0x00026c74) list_single_cale_day_pane_fp_ParamLimits

0xe726,	// (0x00026c74) list_single_cale_day_pane_fp

0xe726,	// (0x00026c74) list_single_graphic_heading_pane_fp_ParamLimits

0xe726,	// (0x00026c74) list_single_graphic_heading_pane_fp

0xe726,	// (0x00026c74) list_single_graphic_pane_fp_ParamLimits

0xe726,	// (0x00026c74) list_single_graphic_pane_fp

0xe726,	// (0x00026c74) list_single_heading_pane_fp_ParamLimits

0xe726,	// (0x00026c74) list_single_heading_pane_fp

0xe726,	// (0x00026c74) list_single_pane_fp_ParamLimits

0xe726,	// (0x00026c74) list_single_pane_fp

0xe73b,	// (0x00026c89) list_single_pane_fp_g1_ParamLimits

0xe73b,	// (0x00026c89) list_single_pane_fp_g1

0x5518,	// (0x0001da66) list_single_pane_fp_g2_ParamLimits

0x5518,	// (0x0001da66) list_single_pane_fp_g2

0x5524,	// (0x0001da72) list_single_pane_fp_g3_ParamLimits

0x5524,	// (0x0001da72) list_single_pane_fp_g3

0xe747,	// (0x00026c95) list_single_pane_fp_g4_ParamLimits

0xe747,	// (0x00026c95) list_single_pane_fp_g4

0x0003,

0xfb82,	// (0x000280d0) list_single_pane_fp_g_ParamLimits

0xfb82,	// (0x000280d0) list_single_pane_fp_g

0x5538,	// (0x0001da86) list_single_pane_fp_t1_ParamLimits

0x5538,	// (0x0001da86) list_single_pane_fp_t1

0x554f,	// (0x0001da9d) list_single_graphic_pane_fp_g1_ParamLimits

0x554f,	// (0x0001da9d) list_single_graphic_pane_fp_g1

0xe73b,	// (0x00026c89) list_single_graphic_pane_fp_g2_ParamLimits

0xe73b,	// (0x00026c89) list_single_graphic_pane_fp_g2

0x5518,	// (0x0001da66) list_single_graphic_pane_fp_g3_ParamLimits

0x5518,	// (0x0001da66) list_single_graphic_pane_fp_g3

0x5524,	// (0x0001da72) list_single_graphic_pane_fp_g4_ParamLimits

0x5524,	// (0x0001da72) list_single_graphic_pane_fp_g4

0xe747,	// (0x00026c95) list_single_graphic_pane_fp_g5_ParamLimits

0xe747,	// (0x00026c95) list_single_graphic_pane_fp_g5

0x0004,

0xfb8b,	// (0x000280d9) list_single_graphic_pane_fp_g_ParamLimits

0xfb8b,	// (0x000280d9) list_single_graphic_pane_fp_g

0x555b,	// (0x0001daa9) list_single_graphic_pane_fp_t1_ParamLimits

0x555b,	// (0x0001daa9) list_single_graphic_pane_fp_t1

0x554f,	// (0x0001da9d) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x554f,	// (0x0001da9d) list_single_graphic_heading_pane_fp_g1

0xe73b,	// (0x00026c89) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xe73b,	// (0x00026c89) list_single_graphic_heading_pane_fp_g2

0x5518,	// (0x0001da66) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x5518,	// (0x0001da66) list_single_graphic_heading_pane_fp_g3

0x5524,	// (0x0001da72) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x5524,	// (0x0001da72) list_single_graphic_heading_pane_fp_g4

0xe747,	// (0x00026c95) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xe747,	// (0x00026c95) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb8b,	// (0x000280d9) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb8b,	// (0x000280d9) list_single_graphic_heading_pane_fp_g

0x5571,	// (0x0001dabf) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x5571,	// (0x0001dabf) list_single_graphic_heading_pane_fp_t1

0x5587,	// (0x0001dad5) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x5587,	// (0x0001dad5) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb96,	// (0x000280e4) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb96,	// (0x000280e4) list_single_graphic_heading_pane_fp_t

0x5599,	// (0x0001dae7) list_single_cale_day_pane_fp_g1_ParamLimits

0x5599,	// (0x0001dae7) list_single_cale_day_pane_fp_g1

0xe753,	// (0x00026ca1) list_single_cale_day_pane_fp_g2_ParamLimits

0xe753,	// (0x00026ca1) list_single_cale_day_pane_fp_g2

0x55d1,	// (0x0001db1f) list_single_cale_day_pane_fp_g3_ParamLimits

0x55d1,	// (0x0001db1f) list_single_cale_day_pane_fp_g3

0x55f9,	// (0x0001db47) list_single_cale_day_pane_fp_g4_ParamLimits

0x55f9,	// (0x0001db47) list_single_cale_day_pane_fp_g4

0x561d,	// (0x0001db6b) list_single_cale_day_pane_fp_g5_ParamLimits

0x561d,	// (0x0001db6b) list_single_cale_day_pane_fp_g5

0x0004,

0xfb9b,	// (0x000280e9) list_single_cale_day_pane_fp_g_ParamLimits

0xfb9b,	// (0x000280e9) list_single_cale_day_pane_fp_g

0x5641,	// (0x0001db8f) list_single_cale_day_pane_fp_t1_ParamLimits

0x5641,	// (0x0001db8f) list_single_cale_day_pane_fp_t1

0x5667,	// (0x0001dbb5) list_single_cale_day_pane_fp_t2_ParamLimits

0x5667,	// (0x0001dbb5) list_single_cale_day_pane_fp_t2

0x5680,	// (0x0001dbce) list_single_cale_day_pane_fp_t3_ParamLimits

0x5680,	// (0x0001dbce) list_single_cale_day_pane_fp_t3

0x0002,

0xfba6,	// (0x000280f4) list_single_cale_day_pane_fp_t_ParamLimits

0xfba6,	// (0x000280f4) list_single_cale_day_pane_fp_t

0xe73b,	// (0x00026c89) list_empty_pane_fp_g1_ParamLimits

0xe73b,	// (0x00026c89) list_empty_pane_fp_g1

0x5699,	// (0x0001dbe7) list_empty_pane_fp_t1

0x56a7,	// (0x0001dbf5) list_empty_pane_fp_t2

0x0001,

0xfbad,	// (0x000280fb) list_empty_pane_fp_t

0xe73b,	// (0x00026c89) list_single_heading_pane_fp_g1_ParamLimits

0xe73b,	// (0x00026c89) list_single_heading_pane_fp_g1

0x5518,	// (0x0001da66) list_single_heading_pane_fp_g2_ParamLimits

0x5518,	// (0x0001da66) list_single_heading_pane_fp_g2

0x5524,	// (0x0001da72) list_single_heading_pane_fp_g3_ParamLimits

0x5524,	// (0x0001da72) list_single_heading_pane_fp_g3

0x0002,

0xfbb2,	// (0x00028100) list_single_heading_pane_fp_g_ParamLimits

0xfbb2,	// (0x00028100) list_single_heading_pane_fp_g

0x56b5,	// (0x0001dc03) list_single_heading_pane_fp_t1_ParamLimits

0x56b5,	// (0x0001dc03) list_single_heading_pane_fp_t1

0x56c7,	// (0x0001dc15) list_single_heading_pane_fp_t2_ParamLimits

0x56c7,	// (0x0001dc15) list_single_heading_pane_fp_t2

0x0001,

0xfbb9,	// (0x00028107) list_single_heading_pane_fp_t_ParamLimits

0xfbb9,	// (0x00028107) list_single_heading_pane_fp_t

0xb5d6,	// (0x00023b24) aid_size_cell_fast

0x8d57,	// (0x000212a5) soft_indicator_pane_cp1_t1

0xb613,	// (0x00023b61) cell_app_pane_cp2_ParamLimits

0xb613,	// (0x00023b61) cell_app_pane_cp2

0x676a,	// (0x0001ecb8) fep_hwr_candidate_drop_down_list_pane

0x1ace,	// (0x0001a01c) fep_hwr_candidate_pane_g3_ParamLimits

0x1ace,	// (0x0001a01c) fep_hwr_candidate_pane_g3

0x1adb,	// (0x0001a029) fep_hwr_candidate_pane_g4_ParamLimits

0x1adb,	// (0x0001a029) fep_hwr_candidate_pane_g4

0x0002,

0xfb2d,	// (0x0002807b) fep_hwr_candidate_pane_g_ParamLimits

0xfb2d,	// (0x0002807b) fep_hwr_candidate_pane_g

0xe3d0,	// (0x0002691e) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xe3d0,	// (0x0002691e) fep_vkb_candidate_drop_down_list_pane

0xe655,	// (0x00026ba3) fep_vkb_candidate_pane_g3

0xe65d,	// (0x00026bab) fep_vkb_candidate_pane_g4

0x0002,

0xfb5a,	// (0x000280a8) fep_vkb_candidate_pane_g

0xe435,	// (0x00026983) cell_hwr_candidate_pane_g1_ParamLimits

0xe75f,	// (0x00026cad) cell_hwr_candidate_pane_g3_ParamLimits

0xe75f,	// (0x00026cad) cell_hwr_candidate_pane_g3

0xe780,	// (0x00026cce) cell_hwr_candidate_pane_g4_ParamLimits

0xe780,	// (0x00026cce) cell_hwr_candidate_pane_g4

0x0002,

0xfb74,	// (0x000280c2) cell_hwr_candidate_pane_g_ParamLimits

0xfb74,	// (0x000280c2) cell_hwr_candidate_pane_g

0xe674,	// (0x00026bc2) cell_vkb_candidate_pane_g3_ParamLimits

0xe674,	// (0x00026bc2) cell_vkb_candidate_pane_g3

0xe68f,	// (0x00026bdd) cell_vkb_candidate_pane_g4_ParamLimits

0xe68f,	// (0x00026bdd) cell_vkb_candidate_pane_g4

0xe7a1,	// (0x00026cef) cell_app_pane_cp2_g1_ParamLimits

0xe7a1,	// (0x00026cef) cell_app_pane_cp2_g1

0xe7bf,	// (0x00026d0d) cell_app_pane_cp2_g2_ParamLimits

0xe7bf,	// (0x00026d0d) cell_app_pane_cp2_g2

0x0001,

0xfbbe,	// (0x0002810c) cell_app_pane_cp2_g_ParamLimits

0xfbbe,	// (0x0002810c) cell_app_pane_cp2_g

0xe7cb,	// (0x00026d19) cell_app_pane_cp2_t1_ParamLimits

0xe7cb,	// (0x00026d19) cell_app_pane_cp2_t1

0xb472,	// (0x000239c0) grid_highlight_pane_cp1_ParamLimits

0xb472,	// (0x000239c0) grid_highlight_pane_cp1

0x69a6,	// (0x0001eef4) cell_hwr_candidate_pane_cp1_ParamLimits

0x69a6,	// (0x0001eef4) cell_hwr_candidate_pane_cp1

0xe435,	// (0x00026983) fep_hwr_candidate_drop_down_list_pane_g1

0xe7dd,	// (0x00026d2b) fep_hwr_candidate_drop_down_list_pane_g2

0xe7ea,	// (0x00026d38) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbc3,	// (0x00028111) fep_hwr_candidate_drop_down_list_pane_g

0x69c5,	// (0x0001ef13) fep_hwr_candidate_drop_down_list_scroll_pane

0x69ce,	// (0x0001ef1c) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x69ce,	// (0x0001ef1c) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x69db,	// (0x0001ef29) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x69db,	// (0x0001ef29) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x69e8,	// (0x0001ef36) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x69e8,	// (0x0001ef36) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xe674,	// (0x00026bc2) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xe674,	// (0x00026bc2) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xe68f,	// (0x00026bdd) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xe68f,	// (0x00026bdd) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x69f5,	// (0x0001ef43) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x69f5,	// (0x0001ef43) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x6a10,	// (0x0001ef5e) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x6a10,	// (0x0001ef5e) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x6a2b,	// (0x0001ef79) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x6a2b,	// (0x0001ef79) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbca,	// (0x00028118) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbca,	// (0x00028118) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xe7f7,	// (0x00026d45) cell_vkb_candidate_pane_cp1_ParamLimits

0xe7f7,	// (0x00026d45) cell_vkb_candidate_pane_cp1

0xe435,	// (0x00026983) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xe435,	// (0x00026983) fep_vkb_candidate_drop_down_list_pane_g1

0xe7dd,	// (0x00026d2b) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xe7dd,	// (0x00026d2b) fep_vkb_candidate_drop_down_list_pane_g2

0xe7ea,	// (0x00026d38) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xe7ea,	// (0x00026d38) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbc3,	// (0x00028111) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbc3,	// (0x00028111) fep_vkb_candidate_drop_down_list_pane_g

0xe817,	// (0x00026d65) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xe817,	// (0x00026d65) fep_vkb_candidate_drop_down_list_scroll_pane

0xe824,	// (0x00026d72) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xe824,	// (0x00026d72) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xe831,	// (0x00026d7f) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xe831,	// (0x00026d7f) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xe83d,	// (0x00026d8b) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xe83d,	// (0x00026d8b) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xe75f,	// (0x00026cad) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xe75f,	// (0x00026cad) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xe780,	// (0x00026cce) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xe780,	// (0x00026cce) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xe849,	// (0x00026d97) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xe849,	// (0x00026d97) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xe86a,	// (0x00026db8) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xe86a,	// (0x00026db8) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xe88b,	// (0x00026dd9) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xe88b,	// (0x00026dd9) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbdb,	// (0x00028129) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbdb,	// (0x00028129) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x2697,	// (0x0001abe5) title_pane_g1_ParamLimits

0x26aa,	// (0x0001abf8) title_pane_g2_ParamLimits

0xf566,	// (0x00027ab4) title_pane_g_ParamLimits

0xb988,	// (0x00023ed6) aid_call2_pane

0xb990,	// (0x00023ede) aid_call_pane

0xb998,	// (0x00023ee6) popup_clock_analogue_window_g1

0xb998,	// (0x00023ee6) popup_clock_analogue_window_g2

0x5edd,	// (0x0001e42b) popup_clock_analogue_window_g3

0x5ee6,	// (0x0001e434) popup_clock_analogue_window_g4

0x8a3a,	// (0x00020f88) popup_clock_analogue_window_g5

0x0004,

0xf710,	// (0x00027c5e) popup_clock_analogue_window_g

0x5eee,	// (0x0001e43c) popup_clock_analogue_window_t1

0x5efc,	// (0x0001e44a) clock_digital_number_pane_ParamLimits

0x5efc,	// (0x0001e44a) clock_digital_number_pane

0x5f08,	// (0x0001e456) clock_digital_number_pane_cp02_ParamLimits

0x5f08,	// (0x0001e456) clock_digital_number_pane_cp02

0x5f14,	// (0x0001e462) clock_digital_number_pane_cp03_ParamLimits

0x5f14,	// (0x0001e462) clock_digital_number_pane_cp03

0x5f20,	// (0x0001e46e) clock_digital_number_pane_cp04_ParamLimits

0x5f20,	// (0x0001e46e) clock_digital_number_pane_cp04

0x5f2c,	// (0x0001e47a) clock_digital_separator_pane_ParamLimits

0x5f2c,	// (0x0001e47a) clock_digital_separator_pane

0x5f38,	// (0x0001e486) popup_clock_digital_window_t1_ParamLimits

0x5f38,	// (0x0001e486) popup_clock_digital_window_t1

0x8a3a,	// (0x00020f88) clock_digital_number_pane_g1

0x8a3a,	// (0x00020f88) clock_digital_number_pane_g2

0x0001,

0xf71b,	// (0x00027c69) clock_digital_number_pane_g

0x8a3a,	// (0x00020f88) clock_digital_separator_pane_g1

0x8a3a,	// (0x00020f88) clock_digital_separator_pane_g2

0x0001,

0xf71b,	// (0x00027c69) clock_digital_separator_pane_g

0x39c8,	// (0x0001bf16) aid_fill_nsta_ParamLimits

0x3afe,	// (0x0001c04c) indicator_nsta_pane_ParamLimits

0xc2df,	// (0x0002482d) popup_clock_analogue_window

0xc2df,	// (0x0002482d) popup_clock_digital_window

0xcb05,	// (0x00025053) grid_indicator_nsta_pane_ParamLimits

0xdf26,	// (0x00026474) clock_nsta_pane_t2

0x0001,

0xfaad,	// (0x00027ffb) clock_nsta_pane_t

0x5ea1,	// (0x0001e3ef) aid_size_max_handle

0x91e9,	// (0x00021737) aid_size_min_handle

0xbe8a,	// (0x000243d8) editor_scroll_pane

0xe8a6,	// (0x00026df4) ex_editor_pane

0xb591,	// (0x00023adf) scroll_pane_cp13

0x91e1,	// (0x0002172f) scroll_pane_cp14

0xb9c7,	// (0x00023f15) scroll_pane_cp36

0x30c0,	// (0x0001b60e) list_single_graphic_hl_pane_cp2_ParamLimits

0x30c0,	// (0x0001b60e) list_single_graphic_hl_pane_cp2

0x87cb,	// (0x00020d19) list_single_graphic_hl_pane_ParamLimits

0x87cb,	// (0x00020d19) list_single_graphic_hl_pane

0x56dd,	// (0x0001dc2b) aid_size_min_hl_cp1

0xe8ae,	// (0x00026dfc) list_highlight_pane_cp34_ParamLimits

0xe8ae,	// (0x00026dfc) list_highlight_pane_cp34

0xe8bf,	// (0x00026e0d) list_single_graphic_hl_pane_g1_ParamLimits

0xe8bf,	// (0x00026e0d) list_single_graphic_hl_pane_g1

0x8825,	// (0x00020d73) list_single_graphic_hl_pane_g2_ParamLimits

0x8825,	// (0x00020d73) list_single_graphic_hl_pane_g2

0x8825,	// (0x00020d73) list_single_graphic_hl_pane_g3_ParamLimits

0x8825,	// (0x00020d73) list_single_graphic_hl_pane_g3

0x8831,	// (0x00020d7f) list_single_graphic_hl_pane_g4_ParamLimits

0x8831,	// (0x00020d7f) list_single_graphic_hl_pane_g4

0x883d,	// (0x00020d8b) list_single_graphic_hl_pane_g5_ParamLimits

0x883d,	// (0x00020d8b) list_single_graphic_hl_pane_g5

0x0004,

0xfbec,	// (0x0002813a) list_single_graphic_hl_pane_g_ParamLimits

0xfbec,	// (0x0002813a) list_single_graphic_hl_pane_g

0x8851,	// (0x00020d9f) list_single_graphic_hl_pane_t1_ParamLimits

0x8851,	// (0x00020d9f) list_single_graphic_hl_pane_t1

0xe8cc,	// (0x00026e1a) aid_size_min_hl_cp2

0xe8d5,	// (0x00026e23) list_highlight_pane_cp34_cp2_ParamLimits

0xe8d5,	// (0x00026e23) list_highlight_pane_cp34_cp2

0xe8bf,	// (0x00026e0d) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xe8bf,	// (0x00026e0d) list_single_graphic_hl_pane_g1_cp2

0xe8e2,	// (0x00026e30) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xe8e2,	// (0x00026e30) list_single_graphic_hl_pane_g2_cp2

0xe8ee,	// (0x00026e3c) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xe8ee,	// (0x00026e3c) list_single_graphic_hl_pane_g3_cp2

0xcb13,	// (0x00025061) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xcb13,	// (0x00025061) list_single_graphic_hl_pane_g4_cp2

0xe8fc,	// (0x00026e4a) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xe8fc,	// (0x00026e4a) list_single_graphic_hl_pane_g5_cp2

0x9240,	// (0x0002178e) control_pane_g4_ParamLimits

0x9240,	// (0x0002178e) control_pane_g4

0xb5ca,	// (0x00023b18) bg_popup_sub_pane_cp10_ParamLimits

0xe2ac,	// (0x000267fa) list_choice_list_pane_ParamLimits

0xe2bb,	// (0x00026809) scroll_pane_cp23

0x8d74,	// (0x000212c2) bg_popup_preview_window_pane_cp02_ParamLimits

0xe6e0,	// (0x00026c2e) list_preview_fixed_pane_ParamLimits

0xe6f6,	// (0x00026c44) list_preview_fixed_pane_cp_ParamLimits

0xe6f6,	// (0x00026c44) list_preview_fixed_pane_cp

0xe702,	// (0x00026c50) popup_preview_fixed_window_g1_ParamLimits

0xe702,	// (0x00026c50) popup_preview_fixed_window_g1

0xe70e,	// (0x00026c5c) popup_preview_fixed_window_g2_ParamLimits

0xe70e,	// (0x00026c5c) popup_preview_fixed_window_g2

0x0002,

0xfb7b,	// (0x000280c9) popup_preview_fixed_window_g_ParamLimits

0xfb7b,	// (0x000280c9) popup_preview_fixed_window_g

0x5e15,	// (0x0001e363) aid_navi_side_left_pane_ParamLimits

0x5e2a,	// (0x0001e378) aid_navi_side_right_pane_ParamLimits

0x5e42,	// (0x0001e390) navi_icon_pane_stacon_ParamLimits

0x5e56,	// (0x0001e3a4) navi_navi_pane_stacon_ParamLimits

0x5e42,	// (0x0001e390) navi_text_pane_stacon_ParamLimits

0x8a30,	// (0x00020f7e) main_text_info_pane

0xe926,	// (0x00026e74) listscroll_text_info_pane

0xe92e,	// (0x00026e7c) list_text_info_pane_ParamLimits

0xe92e,	// (0x00026e7c) list_text_info_pane

0xe93d,	// (0x00026e8b) scroll_pane_cp24_ParamLimits

0xe93d,	// (0x00026e8b) scroll_pane_cp24

0x9cad,	// (0x000221fb) list_text_info_pane_t1_ParamLimits

0x9cad,	// (0x000221fb) list_text_info_pane_t1

0x3362,	// (0x0001b8b0) popup_fast_swap2_window_ParamLimits

0x3362,	// (0x0001b8b0) popup_fast_swap2_window

0xe95b,	// (0x00026ea9) aid_size_cell_fast2

0x8a30,	// (0x00020f7e) bg_popup_window_pane_cp17

0xc7ab,	// (0x00024cf9) heading_pane_cp2

0x8f66,	// (0x000214b4) listscroll_fast2_pane

0xe965,	// (0x00026eb3) grid_fast2_pane

0xe96f,	// (0x00026ebd) listscroll_fast2_pane_g1

0xe977,	// (0x00026ec5) listscroll_fast2_pane_g2

0x0001,

0xfbf7,	// (0x00028145) listscroll_fast2_pane_g

0xb591,	// (0x00023adf) scroll_pane_cp26

0xe981,	// (0x00026ecf) cell_fast2_pane_ParamLimits

0xe981,	// (0x00026ecf) cell_fast2_pane

0xe996,	// (0x00026ee4) cell_fast2_pane_g1

0xe99f,	// (0x00026eed) cell_fast2_pane_g2

0xe9a8,	// (0x00026ef6) cell_fast2_pane_g3

0x0002,

0xfbfc,	// (0x0002814a) cell_fast2_pane_g

0x8fa8,	// (0x000214f6) grid_highlight_pane_cp9

0x8fbd,	// (0x0002150b) main_eswt_pane_ParamLimits

0x8fbd,	// (0x0002150b) main_eswt_pane

0xe952,	// (0x00026ea0) list_single_text_info_pane

0xe9b0,	// (0x00026efe) eswt_ctrl_button_pane

0xe9b0,	// (0x00026efe) eswt_ctrl_canvas_pane

0xe9b8,	// (0x00026f06) eswt_ctrl_combo_pane

0xe9b0,	// (0x00026efe) eswt_ctrl_default_pane

0xe9b0,	// (0x00026efe) eswt_ctrl_label_pane

0xe9c0,	// (0x00026f0e) eswt_ctrl_wait_pane

0xe9c8,	// (0x00026f16) eswt_shell_pane

0x8a30,	// (0x00020f7e) listscroll_eswt_app_pane

0xe9e8,	// (0x00026f36) popup_eswt_tasktip_window_ParamLimits

0xe9e8,	// (0x00026f36) popup_eswt_tasktip_window

0xc4fe,	// (0x00024a4c) bg_popup_window_pane_cp18

0xe9f9,	// (0x00026f47) eswt_control_pane_g1_ParamLimits

0xe9f9,	// (0x00026f47) eswt_control_pane_g1

0xea06,	// (0x00026f54) eswt_control_pane_g2_ParamLimits

0xea06,	// (0x00026f54) eswt_control_pane_g2

0xea13,	// (0x00026f61) eswt_control_pane_g3_ParamLimits

0xea13,	// (0x00026f61) eswt_control_pane_g3

0xea20,	// (0x00026f6e) eswt_control_pane_g4_ParamLimits

0xea20,	// (0x00026f6e) eswt_control_pane_g4

0x0003,

0xfc03,	// (0x00028151) eswt_control_pane_g_ParamLimits

0xfc03,	// (0x00028151) eswt_control_pane_g

0xb472,	// (0x000239c0) bg_button_pane_ParamLimits

0xb472,	// (0x000239c0) bg_button_pane

0x8fbd,	// (0x0002150b) common_borders_pane_copy2_ParamLimits

0x8fbd,	// (0x0002150b) common_borders_pane_copy2

0xea2d,	// (0x00026f7b) control_button_pane_g1_ParamLimits

0xea2d,	// (0x00026f7b) control_button_pane_g1

0xea39,	// (0x00026f87) control_button_pane_g2_ParamLimits

0xea39,	// (0x00026f87) control_button_pane_g2

0xea45,	// (0x00026f93) control_button_pane_g3_ParamLimits

0xea45,	// (0x00026f93) control_button_pane_g3

0x0002,

0xfc0c,	// (0x0002815a) control_button_pane_g_ParamLimits

0xfc0c,	// (0x0002815a) control_button_pane_g

0xea59,	// (0x00026fa7) control_button_pane_t1

0xea67,	// (0x00026fb5) control_button_pane_t2

0x0001,

0xfc13,	// (0x00028161) control_button_pane_t

0xc3ee,	// (0x0002493c) bg_button_pane_g1

0xc3f6,	// (0x00024944) bg_button_pane_g2

0xc3fe,	// (0x0002494c) bg_button_pane_g3

0xc406,	// (0x00024954) bg_button_pane_g4

0xc40e,	// (0x0002495c) bg_button_pane_g5

0xc416,	// (0x00024964) bg_button_pane_g6

0xc41e,	// (0x0002496c) bg_button_pane_g7

0xc426,	// (0x00024974) bg_button_pane_g8

0xc42e,	// (0x0002497c) bg_button_pane_g9

0x0008,

0xf872,	// (0x00027dc0) bg_button_pane_g

0xe267,	// (0x000267b5) common_borders_pane_ParamLimits

0xe267,	// (0x000267b5) common_borders_pane

0xe9f9,	// (0x00026f47) eswt_control_pane_g1_copy1_ParamLimits

0xe9f9,	// (0x00026f47) eswt_control_pane_g1_copy1

0xea06,	// (0x00026f54) eswt_control_pane_g2_copy1_ParamLimits

0xea06,	// (0x00026f54) eswt_control_pane_g2_copy1

0xea13,	// (0x00026f61) eswt_control_pane_g3_copy1_ParamLimits

0xea13,	// (0x00026f61) eswt_control_pane_g3_copy1

0xea20,	// (0x00026f6e) eswt_control_pane_g4_copy1_ParamLimits

0xea20,	// (0x00026f6e) eswt_control_pane_g4_copy1

0xe2a2,	// (0x000267f0) bg_eswt_ctrl_canvas_pane_g1

0xe267,	// (0x000267b5) common_borders_pane_cp2_ParamLimits

0xe267,	// (0x000267b5) common_borders_pane_cp2

0xe267,	// (0x000267b5) common_borders_pane_cp3_ParamLimits

0xe267,	// (0x000267b5) common_borders_pane_cp3

0xea75,	// (0x00026fc3) separator_horizontal_pane

0xea7d,	// (0x00026fcb) separator_vertical_pane

0xe9f9,	// (0x00026f47) eswt_control_pane_g1_copy2_ParamLimits

0xe9f9,	// (0x00026f47) eswt_control_pane_g1_copy2

0xea06,	// (0x00026f54) eswt_control_pane_g2_copy2_ParamLimits

0xea06,	// (0x00026f54) eswt_control_pane_g2_copy2

0xea13,	// (0x00026f61) eswt_control_pane_g3_copy2_ParamLimits

0xea13,	// (0x00026f61) eswt_control_pane_g3_copy2

0xea20,	// (0x00026f6e) eswt_control_pane_g4_copy2_ParamLimits

0xea20,	// (0x00026f6e) eswt_control_pane_g4_copy2

0x8a30,	// (0x00020f7e) common_borders_pane_cp4

0xea86,	// (0x00026fd4) separator_horizontal_pane_g1

0xea8f,	// (0x00026fdd) separator_horizontal_pane_g2

0xea98,	// (0x00026fe6) separator_horizontal_pane_g3

0x0002,

0xfc18,	// (0x00028166) separator_horizontal_pane_g

0xe9f9,	// (0x00026f47) eswt_control_pane_g1_copy3_ParamLimits

0xe9f9,	// (0x00026f47) eswt_control_pane_g1_copy3

0xea06,	// (0x00026f54) eswt_control_pane_g2_copy3_ParamLimits

0xea06,	// (0x00026f54) eswt_control_pane_g2_copy3

0xea13,	// (0x00026f61) eswt_control_pane_g3_copy3_ParamLimits

0xea13,	// (0x00026f61) eswt_control_pane_g3_copy3

0xea20,	// (0x00026f6e) eswt_control_pane_g4_copy3_ParamLimits

0xea20,	// (0x00026f6e) eswt_control_pane_g4_copy3

0x8a30,	// (0x00020f7e) common_borders_pane_cp5

0xeaa1,	// (0x00026fef) separator_vertical_pane_g1

0xeaaa,	// (0x00026ff8) separator_vertical_pane_g2

0xeab3,	// (0x00027001) separator_vertical_pane_g3

0x0002,

0xfc1f,	// (0x0002816d) separator_vertical_pane_g

0xe9f9,	// (0x00026f47) eswt_control_pane_g1_copy4_ParamLimits

0xe9f9,	// (0x00026f47) eswt_control_pane_g1_copy4

0xea06,	// (0x00026f54) eswt_control_pane_g2_copy4_ParamLimits

0xea06,	// (0x00026f54) eswt_control_pane_g2_copy4

0xea13,	// (0x00026f61) eswt_control_pane_g3_copy4_ParamLimits

0xea13,	// (0x00026f61) eswt_control_pane_g3_copy4

0xea20,	// (0x00026f6e) eswt_control_pane_g4_copy4_ParamLimits

0xea20,	// (0x00026f6e) eswt_control_pane_g4_copy4

0x9cc8,	// (0x00022216) eswt_ctrl_combo_button_pane

0x9cd0,	// (0x0002221e) eswt_ctrl_input_pane

0x9cd8,	// (0x00022226) popup_choice_list_window_cp70

0x9ce0,	// (0x0002222e) eswt_ctrl_input_pane_t1

0x8a30,	// (0x00020f7e) input_focus_pane_cp70

0xe267,	// (0x000267b5) bg_button_pane_cp70_ParamLimits

0xe267,	// (0x000267b5) bg_button_pane_cp70

0x9cee,	// (0x0002223c) eswt_ctrl_combo_button_pane_g1

0xeabc,	// (0x0002700a) wait_bar_pane_cp70

0xc4fe,	// (0x00024a4c) bg_popup_window_pane_cp70_ParamLimits

0xc4fe,	// (0x00024a4c) bg_popup_window_pane_cp70

0xeac4,	// (0x00027012) popup_eswt_tasktip_window_t1

0xeada,	// (0x00027028) wait_bar_pane_cp71_ParamLimits

0xeada,	// (0x00027028) wait_bar_pane_cp71

0xeae6,	// (0x00027034) grid_eswt_app_pane

0xb7d3,	// (0x00023d21) scroll_pane_cp70

0x9cf6,	// (0x00022244) cell_eswt_app_pane_ParamLimits

0x9cf6,	// (0x00022244) cell_eswt_app_pane

0x9d20,	// (0x0002226e) cell_eswt_app_pane_g1_ParamLimits

0x9d20,	// (0x0002226e) cell_eswt_app_pane_g1

0x9d4f,	// (0x0002229d) cell_eswt_app_pane_g2_ParamLimits

0x9d4f,	// (0x0002229d) cell_eswt_app_pane_g2

0x0001,

0xfc26,	// (0x00028174) cell_eswt_app_pane_g_ParamLimits

0xfc26,	// (0x00028174) cell_eswt_app_pane_g

0x9d78,	// (0x000222c6) cell_eswt_app_pane_t1_ParamLimits

0x9d78,	// (0x000222c6) cell_eswt_app_pane_t1

0xeaef,	// (0x0002703d) grid_highlight_pane_cp70_ParamLimits

0xeaef,	// (0x0002703d) grid_highlight_pane_cp70

0xbd5f,	// (0x000242ad) set_content_pane_g1

0xc07b,	// (0x000245c9) status_small_volume_pane

0x6a46,	// (0x0001ef94) status_small_volume_pane_g1

0x6a4e,	// (0x0001ef9c) volume_small2_pane

0x6a57,	// (0x0001efa5) volume_small2_pane_g1

0x6a60,	// (0x0001efae) volume_small2_pane_g2

0x6a69,	// (0x0001efb7) volume_small2_pane_g3

0x6a72,	// (0x0001efc0) volume_small2_pane_g4

0x6a7b,	// (0x0001efc9) volume_small2_pane_g5

0x6a84,	// (0x0001efd2) volume_small2_pane_g6

0x6a8d,	// (0x0001efdb) volume_small2_pane_g7

0x6a96,	// (0x0001efe4) volume_small2_pane_g8

0x6a9f,	// (0x0001efed) volume_small2_pane_g9

0x6aa8,	// (0x0001eff6) volume_small2_pane_g10

0x0009,

0xfc2b,	// (0x00028179) volume_small2_pane_g

0xe542,	// (0x00026a90) fep_vkb_top_text_pane_g1_ParamLimits

0x9c55,	// (0x000221a3) fep_vkb_top_text_pane_t1_ParamLimits

0xe71a,	// (0x00026c68) popup_preview_fixed_window_g3_ParamLimits

0xe71a,	// (0x00026c68) popup_preview_fixed_window_g3

0x395b,	// (0x0001bea9) popup_toolbar_trans_pane

0x9631,	// (0x00021b7f) aid_height_set_list_ParamLimits

0xcb35,	// (0x00025083) aid_size_parent_ParamLimits

0xb5ca,	// (0x00023b18) list_highlight_pane_cp2_ParamLimits

0xbd5f,	// (0x000242ad) set_content_pane_g1_ParamLimits

0x87dd,	// (0x00020d2b) list_single_image_pane_ParamLimits

0x87dd,	// (0x00020d2b) list_single_image_pane

0x9daa,	// (0x000222f8) aid_size_cell_image_ParamLimits

0x9daa,	// (0x000222f8) aid_size_cell_image

0x9db7,	// (0x00022305) grid_single_image_pane_ParamLimits

0x9db7,	// (0x00022305) grid_single_image_pane

0xc442,	// (0x00024990) list_single_image_pane_g1_ParamLimits

0xc442,	// (0x00024990) list_single_image_pane_g1

0xeafb,	// (0x00027049) list_single_image_pane_g2_ParamLimits

0xeafb,	// (0x00027049) list_single_image_pane_g2

0x0001,

0xfc40,	// (0x0002818e) list_single_image_pane_g_ParamLimits

0xfc40,	// (0x0002818e) list_single_image_pane_g

0xcb1f,	// (0x0002506d) list_single_image_pane_t1_ParamLimits

0xcb1f,	// (0x0002506d) list_single_image_pane_t1

0x9dc5,	// (0x00022313) cell_image_list_pane_ParamLimits

0x9dc5,	// (0x00022313) cell_image_list_pane

0x9ddb,	// (0x00022329) cell_image_list_pane_g1

0x9de4,	// (0x00022332) cell_image_list_pane_g2

0x0001,

0xfc45,	// (0x00028193) cell_image_list_pane_g

0xeb0f,	// (0x0002705d) aid_size_cell_tb_trans_pane

0xb472,	// (0x000239c0) bg_tb_trans_pane

0xeb21,	// (0x0002706f) grid_tb_trans_pane

0xc3ee,	// (0x0002493c) bg_tb_trans_pane_g1

0xc3f6,	// (0x00024944) bg_tb_trans_pane_g2

0xc3fe,	// (0x0002494c) bg_tb_trans_pane_g3

0xc406,	// (0x00024954) bg_tb_trans_pane_g4

0xc40e,	// (0x0002495c) bg_tb_trans_pane_g5

0xc426,	// (0x00024974) bg_tb_trans_pane_g6

0xc42e,	// (0x0002497c) bg_tb_trans_pane_g7

0xc416,	// (0x00024964) bg_tb_trans_pane_g8

0xc41e,	// (0x0002496c) bg_tb_trans_pane_g9

0x0008,

0xfc4a,	// (0x00028198) bg_tb_trans_pane_g

0xeb35,	// (0x00027083) cell_toolbar_trans_pane_ParamLimits

0xeb35,	// (0x00027083) cell_toolbar_trans_pane

0xe2a2,	// (0x000267f0) cell_toolbar_trans_pane_g1

0x99f1,	// (0x00021f3f) list_form2_midp_pane_t1

0x99ff,	// (0x00021f4d) list_form2_midp_pane_t2

0x0001,

0xfaf3,	// (0x00028041) list_form2_midp_pane_t

0xdff5,	// (0x00026543) scroll_pane_cp51_ParamLimits

0xe16c,	// (0x000266ba) form2_midp_wait_pane_g1

0xe175,	// (0x000266c3) form2_midp_wait_pane_g2

0xe17e,	// (0x000266cc) form2_midp_wait_pane_g3

0x0002,

0xfb08,	// (0x00028056) form2_midp_wait_pane_g

0x8c41,	// (0x0002118f) list_highlight_pane_cp21_ParamLimits

0xe1a6,	// (0x000266f4) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xe1b5,	// (0x00026703) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xd69d,	// (0x00025beb) list_single_2graphic_im_pane_ParamLimits

0xd69d,	// (0x00025beb) list_single_2graphic_im_pane

0x9ded,	// (0x0002233b) list_single_2graphic_im_pane_g1_ParamLimits

0x9ded,	// (0x0002233b) list_single_2graphic_im_pane_g1

0x9dfe,	// (0x0002234c) list_single_2graphic_im_pane_g2_ParamLimits

0x9dfe,	// (0x0002234c) list_single_2graphic_im_pane_g2

0x9e0a,	// (0x00022358) list_single_2graphic_im_pane_g3_ParamLimits

0x9e0a,	// (0x00022358) list_single_2graphic_im_pane_g3

0x0003,

0xfc5d,	// (0x000281ab) list_single_2graphic_im_pane_g_ParamLimits

0xfc5d,	// (0x000281ab) list_single_2graphic_im_pane_g

0x9e1e,	// (0x0002236c) list_single_2graphic_im_pane_t1_ParamLimits

0x9e1e,	// (0x0002236c) list_single_2graphic_im_pane_t1

0xe726,	// (0x00026c74) list_single_graphic_2heading_pane_fp_ParamLimits

0xe726,	// (0x00026c74) list_single_graphic_2heading_pane_fp

0x554f,	// (0x0001da9d) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x554f,	// (0x0001da9d) list_single_graphic_2heading_pane_fp_g1

0xe73b,	// (0x00026c89) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xe73b,	// (0x00026c89) list_single_graphic_2heading_pane_fp_g2

0x5518,	// (0x0001da66) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x5518,	// (0x0001da66) list_single_graphic_2heading_pane_fp_g3

0x5524,	// (0x0001da72) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x5524,	// (0x0001da72) list_single_graphic_2heading_pane_fp_g4

0xe747,	// (0x00026c95) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xe747,	// (0x00026c95) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb8b,	// (0x000280d9) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb8b,	// (0x000280d9) list_single_graphic_2heading_pane_fp_g

0x571c,	// (0x0001dc6a) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x571c,	// (0x0001dc6a) list_single_graphic_2heading_pane_fp_t1

0x5587,	// (0x0001dad5) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x5587,	// (0x0001dad5) list_single_graphic_2heading_pane_fp_t2

0x5732,	// (0x0001dc80) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x5732,	// (0x0001dc80) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc66,	// (0x000281b4) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc66,	// (0x000281b4) list_single_graphic_2heading_pane_fp_t

0xe32e,	// (0x0002687c) fep_hwr_write_pane_g5_ParamLimits

0xe32e,	// (0x0002687c) fep_hwr_write_pane_g5

0xe33a,	// (0x00026888) fep_hwr_write_pane_g6_ParamLimits

0xe33a,	// (0x00026888) fep_hwr_write_pane_g6

0xe9c8,	// (0x00026f16) eswt_shell_pane_ParamLimits

0xc4fe,	// (0x00024a4c) bg_popup_window_pane_cp18_ParamLimits

0xd5c8,	// (0x00025b16) heading_pane_cp70

0xeac4,	// (0x00027012) popup_eswt_tasktip_window_t1_ParamLimits

0x3a23,	// (0x0001bf71) aid_touch_tab_arrow_left

0x3a39,	// (0x0001bf87) aid_touch_tab_arrow_right

0x26c2,	// (0x0001ac10) title_pane_g3_ParamLimits

0x26c2,	// (0x0001ac10) title_pane_g3

0xb431,	// (0x0002397f) set_value_pane_g1

0x395b,	// (0x0001bea9) popup_toolbar_trans_pane_ParamLimits

0xeb0f,	// (0x0002705d) aid_size_cell_tb_trans_pane_ParamLimits

0xb472,	// (0x000239c0) bg_tb_trans_pane_ParamLimits

0xeb21,	// (0x0002706f) grid_tb_trans_pane_ParamLimits

0x8d74,	// (0x000212c2) cont_note_pane_ParamLimits

0x8d74,	// (0x000212c2) cont_note_pane

0x8fbd,	// (0x0002150b) cont_snote2_single_text_pane_ParamLimits

0x8fbd,	// (0x0002150b) cont_snote2_single_text_pane

0x8fbd,	// (0x0002150b) cont_snote2_single_graphic_pane_ParamLimits

0x8fbd,	// (0x0002150b) cont_snote2_single_graphic_pane

0xc9c6,	// (0x00024f14) cont_note_wait_pane_ParamLimits

0xc9c6,	// (0x00024f14) cont_note_wait_pane

0xc9c6,	// (0x00024f14) cont_note_image_pane_ParamLimits

0xc9c6,	// (0x00024f14) cont_note_image_pane

0xeb67,	// (0x000270b5) popup_note2_window_g1_ParamLimits

0xeb67,	// (0x000270b5) popup_note2_window_g1

0xeb98,	// (0x000270e6) popup_note2_window_t1_ParamLimits

0xeb98,	// (0x000270e6) popup_note2_window_t1

0xebdd,	// (0x0002712b) popup_note2_window_t2_ParamLimits

0xebdd,	// (0x0002712b) popup_note2_window_t2

0xec22,	// (0x00027170) popup_note2_window_t3_ParamLimits

0xec22,	// (0x00027170) popup_note2_window_t3

0xec67,	// (0x000271b5) popup_note2_window_t4_ParamLimits

0xec67,	// (0x000271b5) popup_note2_window_t4

0x8df8,	// (0x00021346) popup_note2_window_t5_ParamLimits

0x8df8,	// (0x00021346) popup_note2_window_t5

0x0004,

0xfc72,	// (0x000281c0) popup_note2_window_t_ParamLimits

0xfc72,	// (0x000281c0) popup_note2_window_t

0xec96,	// (0x000271e4) popup_note2_image_window_g1_ParamLimits

0xec96,	// (0x000271e4) popup_note2_image_window_g1

0xeca2,	// (0x000271f0) popup_note2_image_window_g2_ParamLimits

0xeca2,	// (0x000271f0) popup_note2_image_window_g2

0x0001,

0xfc7d,	// (0x000281cb) popup_note2_image_window_g_ParamLimits

0xfc7d,	// (0x000281cb) popup_note2_image_window_g

0xecb4,	// (0x00027202) popup_note2_image_window_t1_ParamLimits

0xecb4,	// (0x00027202) popup_note2_image_window_t1

0xeccc,	// (0x0002721a) popup_note2_image_window_t2_ParamLimits

0xeccc,	// (0x0002721a) popup_note2_image_window_t2

0xece4,	// (0x00027232) popup_note2_image_window_t3_ParamLimits

0xece4,	// (0x00027232) popup_note2_image_window_t3

0x0002,

0xfc82,	// (0x000281d0) popup_note2_image_window_t_ParamLimits

0xfc82,	// (0x000281d0) popup_note2_image_window_t

0xc9d4,	// (0x00024f22) popup_note2_wait_window_g1_ParamLimits

0xc9d4,	// (0x00024f22) popup_note2_wait_window_g1

0xed00,	// (0x0002724e) popup_note2_wait_window_g2_ParamLimits

0xed00,	// (0x0002724e) popup_note2_wait_window_g2

0xc9ec,	// (0x00024f3a) popup_note2_wait_window_g3_ParamLimits

0xc9ec,	// (0x00024f3a) popup_note2_wait_window_g3

0x0002,

0xfc89,	// (0x000281d7) popup_note2_wait_window_g_ParamLimits

0xfc89,	// (0x000281d7) popup_note2_wait_window_g

0xed0c,	// (0x0002725a) popup_note2_wait_window_t1_ParamLimits

0xed0c,	// (0x0002725a) popup_note2_wait_window_t1

0xed2a,	// (0x00027278) popup_note2_wait_window_t2_ParamLimits

0xed2a,	// (0x00027278) popup_note2_wait_window_t2

0xed48,	// (0x00027296) popup_note2_wait_window_t3_ParamLimits

0xed48,	// (0x00027296) popup_note2_wait_window_t3

0xed5a,	// (0x000272a8) popup_note2_wait_window_t4_ParamLimits

0xed5a,	// (0x000272a8) popup_note2_wait_window_t4

0x0003,

0xfc90,	// (0x000281de) popup_note2_wait_window_t_ParamLimits

0xfc90,	// (0x000281de) popup_note2_wait_window_t

0xed6c,	// (0x000272ba) wait_bar2_pane_ParamLimits

0xed6c,	// (0x000272ba) wait_bar2_pane

0xed84,	// (0x000272d2) popup_snote2_single_text_window_g1_ParamLimits

0xed84,	// (0x000272d2) popup_snote2_single_text_window_g1

0xedac,	// (0x000272fa) popup_snote2_single_text_window_t1_ParamLimits

0xedac,	// (0x000272fa) popup_snote2_single_text_window_t1

0xedf8,	// (0x00027346) popup_snote2_single_text_window_t2_ParamLimits

0xedf8,	// (0x00027346) popup_snote2_single_text_window_t2

0xee44,	// (0x00027392) popup_snote2_single_text_window_t3_ParamLimits

0xee44,	// (0x00027392) popup_snote2_single_text_window_t3

0xee85,	// (0x000273d3) popup_snote2_single_text_window_t4_ParamLimits

0xee85,	// (0x000273d3) popup_snote2_single_text_window_t4

0xeebb,	// (0x00027409) popup_snote2_single_text_window_t5_ParamLimits

0xeebb,	// (0x00027409) popup_snote2_single_text_window_t5

0x0004,

0xfc99,	// (0x000281e7) popup_snote2_single_text_window_t_ParamLimits

0xfc99,	// (0x000281e7) popup_snote2_single_text_window_t

0xeee6,	// (0x00027434) popup_snote2_single_graphic_window_g1_ParamLimits

0xeee6,	// (0x00027434) popup_snote2_single_graphic_window_g1

0xef0e,	// (0x0002745c) popup_snote2_single_graphic_window_g2_ParamLimits

0xef0e,	// (0x0002745c) popup_snote2_single_graphic_window_g2

0x0001,

0xfca4,	// (0x000281f2) popup_snote2_single_graphic_window_g_ParamLimits

0xfca4,	// (0x000281f2) popup_snote2_single_graphic_window_g

0xef36,	// (0x00027484) popup_snote2_single_graphic_window_t1_ParamLimits

0xef36,	// (0x00027484) popup_snote2_single_graphic_window_t1

0xef82,	// (0x000274d0) popup_snote2_single_graphic_window_t2_ParamLimits

0xef82,	// (0x000274d0) popup_snote2_single_graphic_window_t2

0xee44,	// (0x00027392) popup_snote2_single_graphic_window_t3_ParamLimits

0xee44,	// (0x00027392) popup_snote2_single_graphic_window_t3

0xee85,	// (0x000273d3) popup_snote2_single_graphic_window_t4_ParamLimits

0xee85,	// (0x000273d3) popup_snote2_single_graphic_window_t4

0xeebb,	// (0x00027409) popup_snote2_single_graphic_window_t5_ParamLimits

0xeebb,	// (0x00027409) popup_snote2_single_graphic_window_t5

0x0004,

0xfca9,	// (0x000281f7) popup_snote2_single_graphic_window_t_ParamLimits

0xfca9,	// (0x000281f7) popup_snote2_single_graphic_window_t

0xdf8d,	// (0x000264db) clock_nsta_pane_cp2_t1

0xdf8d,	// (0x000264db) clock_nsta_pane_cp2_t2

0x0001,

0xfac9,	// (0x00028017) clock_nsta_pane_cp2_t

0x4e40,	// (0x0001d38e) form_field_data_wide_pane_g1_ParamLimits

0xb48c,	// (0x000239da) form_field_data_wide_pane_g2_ParamLimits

0xb48c,	// (0x000239da) form_field_data_wide_pane_g2

0xb498,	// (0x000239e6) form_field_data_wide_pane_g3_ParamLimits

0xb498,	// (0x000239e6) form_field_data_wide_pane_g3

0x0002,

0xf693,	// (0x00027be1) form_field_data_wide_pane_g_ParamLimits

0xf693,	// (0x00027be1) form_field_data_wide_pane_g

0x992a,	// (0x00021e78) grid_touch_3_pane_ParamLimits

0x992a,	// (0x00021e78) grid_touch_3_pane

0x9e4f,	// (0x0002239d) cell_touch_3_pane_ParamLimits

0x9e4f,	// (0x0002239d) cell_touch_3_pane

0xe2a2,	// (0x000267f0) cell_touch_3_pane_g1

0xe2a2,	// (0x000267f0) cell_touch_3_pane_g2

0x0001,

0xfb4e,	// (0x0002809c) cell_touch_3_pane_g

0x8e2a,	// (0x00021378) cont_query_data_pane

0x8e32,	// (0x00021380) cont_query_data_pane_cp1

0xefce,	// (0x0002751c) button_value_adjust_pane_cp7

0xefd6,	// (0x00027524) query_popup_pane_cp3

0xb9f9,	// (0x00023f47) bg_popup_sub_pane_cp22_ParamLimits

0x5f57,	// (0x0001e4a5) navi_navi_volume_pane_cp2

0x5f72,	// (0x0001e4c0) popup_side_volume_key_window_g2

0x5f81,	// (0x0001e4cf) popup_side_volume_key_window_g3

0x0002,

0xf729,	// (0x00027c77) popup_side_volume_key_window_g

0x5f9e,	// (0x0001e4ec) popup_side_volume_key_window_t2

0x0001,

0xf730,	// (0x00027c7e) popup_side_volume_key_window_t

0xbc29,	// (0x00024177) popup_side_volume_key_window_ParamLimits

0x82e6,	// (0x00020834) list_double_graphic_pane_g4_ParamLimits

0x82e6,	// (0x00020834) list_double_graphic_pane_g4

0x97aa,	// (0x00021cf8) list_single_2heading_msg_pane_ParamLimits

0x97aa,	// (0x00021cf8) list_single_2heading_msg_pane

0x8867,	// (0x00020db5) list_single_2heading_msg_pane_g1_ParamLimits

0x8867,	// (0x00020db5) list_single_2heading_msg_pane_g1

0x8873,	// (0x00020dc1) list_single_2heading_msg_pane_g2_ParamLimits

0x8873,	// (0x00020dc1) list_single_2heading_msg_pane_g2

0x8886,	// (0x00020dd4) list_single_2heading_msg_pane_g3_ParamLimits

0x8886,	// (0x00020dd4) list_single_2heading_msg_pane_g3

0x8892,	// (0x00020de0) list_single_2heading_msg_pane_g4_ParamLimits

0x8892,	// (0x00020de0) list_single_2heading_msg_pane_g4

0x0003,

0xfcb4,	// (0x00028202) list_single_2heading_msg_pane_g_ParamLimits

0xfcb4,	// (0x00028202) list_single_2heading_msg_pane_g

0x88aa,	// (0x00020df8) list_single_2heading_msg_pane_t1_ParamLimits

0x88aa,	// (0x00020df8) list_single_2heading_msg_pane_t1

0x88d2,	// (0x00020e20) list_single_2heading_msg_pane_t2_ParamLimits

0x88d2,	// (0x00020e20) list_single_2heading_msg_pane_t2

0x893d,	// (0x00020e8b) list_single_2heading_msg_pane_t3_ParamLimits

0x893d,	// (0x00020e8b) list_single_2heading_msg_pane_t3

0x5817,	// (0x0001dd65) list_single_2heading_msg_pane_t4_ParamLimits

0x5817,	// (0x0001dd65) list_single_2heading_msg_pane_t4

0x0003,

0xfcbd,	// (0x0002820b) list_single_2heading_msg_pane_t_ParamLimits

0xfcbd,	// (0x0002820b) list_single_2heading_msg_pane_t

0x8bef,	// (0x0002113d) title_pane_g4_ParamLimits

0x8bef,	// (0x0002113d) title_pane_g4

0x5d65,	// (0x0001e2b3) title_pane_stacon_g3_ParamLimits

0x5d65,	// (0x0001e2b3) title_pane_stacon_g3

0xeb5b,	// (0x000270a9) list_single_2graphic_im_pane_g4_ParamLimits

0xeb5b,	// (0x000270a9) list_single_2graphic_im_pane_g4

0xd3ab,	// (0x000258f9) popup_side_volume_key_window_cp

0xd8ce,	// (0x00025e1c) main_idle_act2_pane_t1

0x6314,	// (0x0001e862) toolbar_button_pane_g10

0x2a2f,	// (0x0001af7d) popup_toolbar_window_cp1

0xdf7e,	// (0x000264cc) clock_nsta_pane_cp_t1

0xdf7e,	// (0x000264cc) clock_nsta_pane_cp_t2

0x0001,

0xfac4,	// (0x00028012) clock_nsta_pane_cp_t

0x5f57,	// (0x0001e4a5) navi_navi_volume_pane_cp2_ParamLimits

0x5f66,	// (0x0001e4b4) popup_side_volume_key_window_g1_ParamLimits

0x5f72,	// (0x0001e4c0) popup_side_volume_key_window_g2_ParamLimits

0x5f81,	// (0x0001e4cf) popup_side_volume_key_window_g3_ParamLimits

0xf729,	// (0x00027c77) popup_side_volume_key_window_g_ParamLimits

0x6756,	// (0x0001eca4) fep_hwr_aid_pane

0x1ac0,	// (0x0001a00e) bg_fep_hwr_top_pane_g4_ParamLimits

0xe2fe,	// (0x0002684c) fep_hwr_top_pane_g1_ParamLimits

0xe310,	// (0x0002685e) fep_hwr_top_pane_g2_ParamLimits

0x680f,	// (0x0001ed5d) fep_hwr_top_pane_g3_ParamLimits

0xfb19,	// (0x00028067) fep_hwr_top_pane_g_ParamLimits

0x6824,	// (0x0001ed72) fep_hwr_top_text_pane_ParamLimits

0xd16e,	// (0x000256bc) aid_touch_tab_arrow_arrow_2

0xd177,	// (0x000256c5) aid_touch_tab_arrow_left_2

0x676a,	// (0x0001ecb8) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x67a1,	// (0x0001ecef) fep_hwr_prediction_pane

0xe3fd,	// (0x0002694b) fep_vkb_prediction_pane

0x9c35,	// (0x00022183) fep_vkb_side_pane_g3_ParamLimits

0x9c35,	// (0x00022183) fep_vkb_side_pane_g3

0xe435,	// (0x00026983) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xe7dd,	// (0x00026d2b) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xe7ea,	// (0x00026d38) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbc3,	// (0x00028111) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xefe7,	// (0x00027535) fep_hwr_prediction_pane_g1

0x6ab1,	// (0x0001efff) fep_hwr_prediction_pane_g2

0x6ab9,	// (0x0001f007) fep_hwr_prediction_pane_g3

0x6ac1,	// (0x0001f00f) fep_hwr_prediction_pane_g4

0x0003,

0xfcc6,	// (0x00028214) fep_hwr_prediction_pane_g

0xefe7,	// (0x00027535) fep_vkb_prediction_pane_g1

0xeff1,	// (0x0002753f) fep_vkb_prediction_pane_g2

0xeff9,	// (0x00027547) fep_vkb_prediction_pane_g3

0xf001,	// (0x0002754f) fep_vkb_prediction_pane_g4

0x0003,

0xfccf,	// (0x0002821d) fep_vkb_prediction_pane_g

0x65e4,	// (0x0001eb32) slider_set_pane_g3

0x65f8,	// (0x0001eb46) slider_set_pane_g4

0x6610,	// (0x0001eb5e) slider_set_pane_g5

0x65e4,	// (0x0001eb32) slider_set_pane_g6

0x6626,	// (0x0001eb74) slider_set_pane_g7

0xd653,	// (0x00025ba1) slider_form_pane_g3

0xd65c,	// (0x00025baa) slider_form_pane_g4

0xd664,	// (0x00025bb2) slider_form_pane_g5

0xd653,	// (0x00025ba1) slider_form_pane_g6

0x977c,	// (0x00021cca) slider_form_pane_g7

0xdb20,	// (0x0002606e) slider_set_pane_vc_g3

0xdb29,	// (0x00026077) slider_set_pane_vc_g4

0xdb32,	// (0x00026080) slider_set_pane_vc_g5

0xdb20,	// (0x0002606e) slider_set_pane_vc_g6

0xdb3b,	// (0x00026089) slider_set_pane_vc_g7

0xdb20,	// (0x0002606e) slider_form_pane_vc_g1

0xdb29,	// (0x00026077) slider_form_pane_vc_g2

0xdb32,	// (0x00026080) slider_form_pane_vc_g3

0xdb20,	// (0x0002606e) slider_form_pane_vc_g4

0xdcf4,	// (0x00026242) slider_form_pane_vc_g5

0x0004,

0xfa9d,	// (0x00027feb) slider_form_pane_vc_g

0x8a30,	// (0x00020f7e) main_idle_act3_pane

0xf009,	// (0x00027557) ai3_links_pane

0x9e99,	// (0x000223e7) popup_ai3_data_window_ParamLimits

0x9e99,	// (0x000223e7) popup_ai3_data_window

0x8a30,	// (0x00020f7e) grid_ai3_links_pane

0x9eb3,	// (0x00022401) cell_ai3_links_pane_ParamLimits

0x9eb3,	// (0x00022401) cell_ai3_links_pane

0xf012,	// (0x00027560) bg_popup_sub_pane_cp11

0xf01f,	// (0x0002756d) cell_ai3_links_pane_g1

0x8a30,	// (0x00020f7e) bg_popup_sub_pane_cp12

0xf044,	// (0x00027592) heading_ai3_data_pane

0xf04c,	// (0x0002759a) list_ai3_gene_pane

0xf058,	// (0x000275a6) popup_ai3_data_window_g1

0xf060,	// (0x000275ae) heading_ai3_data_pane_g1

0xf068,	// (0x000275b6) heading_ai3_data_pane_t1

0xf076,	// (0x000275c4) list_double_ai3_gene_pane_ParamLimits

0xf076,	// (0x000275c4) list_double_ai3_gene_pane

0xf083,	// (0x000275d1) list_single_ai3_gene_pane_ParamLimits

0xf083,	// (0x000275d1) list_single_ai3_gene_pane

0xe267,	// (0x000267b5) list_highlight_pane_cp7_ParamLimits

0xe267,	// (0x000267b5) list_highlight_pane_cp7

0xf090,	// (0x000275de) list_single_a13_gene_pane_t1_ParamLimits

0xf090,	// (0x000275de) list_single_a13_gene_pane_t1

0xf0a7,	// (0x000275f5) list_single_ai3_gene_pane_g1

0xf0b0,	// (0x000275fe) list_single_ai3_gene_pane_g2

0x0001,

0xfcd8,	// (0x00028226) list_single_ai3_gene_pane_g

0xf0b8,	// (0x00027606) list_double_ai3_gene_pane_g1_ParamLimits

0xf0b8,	// (0x00027606) list_double_ai3_gene_pane_g1

0xf0c4,	// (0x00027612) list_double_ai3_gene_pane_t1_ParamLimits

0xf0c4,	// (0x00027612) list_double_ai3_gene_pane_t1

0xf0e0,	// (0x0002762e) list_double_ai3_gene_pane_t2_ParamLimits

0xf0e0,	// (0x0002762e) list_double_ai3_gene_pane_t2

0xf0f6,	// (0x00027644) list_double_ai3_gene_pane_t3_ParamLimits

0xf0f6,	// (0x00027644) list_double_ai3_gene_pane_t3

0x0002,

0xfcdd,	// (0x0002822b) list_double_ai3_gene_pane_t_ParamLimits

0xfcdd,	// (0x0002822b) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x5748,	// (0x0001dc96) aid_size_min_col_2

0x9e83,	// (0x000223d1) aid_size_min_msg_ParamLimits

0x9e83,	// (0x000223d1) aid_size_min_msg

0x9c49,	// (0x00022197) fep_vkb_top_text_pane_g2_ParamLimits

0x9c49,	// (0x00022197) fep_vkb_top_text_pane_g2

0x0001,

0xfb49,	// (0x00028097) fep_vkb_top_text_pane_g_ParamLimits

0xfb49,	// (0x00028097) fep_vkb_top_text_pane_g

0x8a30,	// (0x00020f7e) main_hc_apps_shell_pane

0xf113,	// (0x00027661) grid_hc_apps_pane_ParamLimits

0xf113,	// (0x00027661) grid_hc_apps_pane

0xf122,	// (0x00027670) list_hc_apps_pane

0xf12a,	// (0x00027678) scroll_pane_cp37_ParamLimits

0xf12a,	// (0x00027678) scroll_pane_cp37

0x9ecd,	// (0x0002241b) cell_hc_apps_pane_ParamLimits

0x9ecd,	// (0x0002241b) cell_hc_apps_pane

0x9f8b,	// (0x000224d9) cell_hc_apps_pane_g1_ParamLimits

0x9f8b,	// (0x000224d9) cell_hc_apps_pane_g1

0xf136,	// (0x00027684) cell_hc_apps_pane_g2_ParamLimits

0xf136,	// (0x00027684) cell_hc_apps_pane_g2

0xf152,	// (0x000276a0) cell_hc_apps_pane_g3_ParamLimits

0xf152,	// (0x000276a0) cell_hc_apps_pane_g3

0x0002,

0xfce4,	// (0x00028232) cell_hc_apps_pane_g_ParamLimits

0xfce4,	// (0x00028232) cell_hc_apps_pane_g

0x9fb8,	// (0x00022506) cell_hc_apps_pane_t1_ParamLimits

0x9fb8,	// (0x00022506) cell_hc_apps_pane_t1

0x8d74,	// (0x000212c2) grid_highlight_pane_cp10_ParamLimits

0x8d74,	// (0x000212c2) grid_highlight_pane_cp10

0x9ff6,	// (0x00022544) list_single_hc_apps_pane_ParamLimits

0x9ff6,	// (0x00022544) list_single_hc_apps_pane

0xa023,	// (0x00022571) list_single_hc_apps_pane_g1

0x89ab,	// (0x00020ef9) list_single_hc_apps_pane_g2

0x0001,

0xfceb,	// (0x00028239) list_single_hc_apps_pane_g

0x89c4,	// (0x00020f12) list_single_hc_apps_pane_g2_copy1

0x89e0,	// (0x00020f2e) list_single_hc_apps_pane_t1

0x8c41,	// (0x0002118f) bg_set_opt_pane_cp_ParamLimits

0x5c8c,	// (0x0001e1da) setting_slider_pane_t1_ParamLimits

0x5ca5,	// (0x0001e1f3) setting_slider_pane_t2_ParamLimits

0x5cbf,	// (0x0001e20d) setting_slider_pane_t3_ParamLimits

0xf576,	// (0x00027ac4) setting_slider_pane_t_ParamLimits

0x5cd7,	// (0x0001e225) slider_set_pane_ParamLimits

0x61fc,	// (0x0001e74a) control_pane_g5_ParamLimits

0x61fc,	// (0x0001e74a) control_pane_g5

0xd60f,	// (0x00025b5d) slider_set_pane_g1_ParamLimits

0x65d8,	// (0x0001eb26) slider_set_pane_g2_ParamLimits

0x65e4,	// (0x0001eb32) slider_set_pane_g3_ParamLimits

0x65f8,	// (0x0001eb46) slider_set_pane_g4_ParamLimits

0x6610,	// (0x0001eb5e) slider_set_pane_g5_ParamLimits

0x65e4,	// (0x0001eb32) slider_set_pane_g6_ParamLimits

0x6626,	// (0x0001eb74) slider_set_pane_g7_ParamLimits

0xf970,	// (0x00027ebe) slider_set_pane_g_ParamLimits

0xbd0a,	// (0x00024258) navi_icon_text_pane_ParamLimits

0x39ec,	// (0x0001bf3a) aid_fill_nsta_2_ParamLimits

0x3a23,	// (0x0001bf71) aid_touch_tab_arrow_left_ParamLimits

0x3a39,	// (0x0001bf87) aid_touch_tab_arrow_right_ParamLimits

0x3ad4,	// (0x0001c022) clock_nsta_pane_ParamLimits

0xd150,	// (0x0002569e) navi_icon_pane_g1_ParamLimits

0xd15c,	// (0x000256aa) navi_text_pane_t1_ParamLimits

0xdfcf,	// (0x0002651d) navi_icon_text_pane_g1_ParamLimits

0xdfdb,	// (0x00026529) navi_icon_text_pane_t1_ParamLimits

0xa023,	// (0x00022571) list_single_hc_apps_pane_g1_ParamLimits

0x89ab,	// (0x00020ef9) list_single_hc_apps_pane_g2_ParamLimits

0xfceb,	// (0x00028239) list_single_hc_apps_pane_g_ParamLimits

0x89c4,	// (0x00020f12) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x89e0,	// (0x00020f2e) list_single_hc_apps_pane_t1_ParamLimits

0x8b84,	// (0x000210d2) popup_toolbar2_fixed_window_ParamLimits

0x8b84,	// (0x000210d2) popup_toolbar2_fixed_window

0x3951,	// (0x0001be9f) popup_toolbar2_float_window

0x8a30,	// (0x00020f7e) bg_popup_sub_pane_cp27

0xf174,	// (0x000276c2) grid_toolbar2_float_pane

0x8a30,	// (0x00020f7e) bg_popup_sub_pane_cp26

0xf174,	// (0x000276c2) grid_toolbar2_fixed_pane

0xa03c,	// (0x0002258a) cell_toolbar2_fixed_pane_ParamLimits

0xa03c,	// (0x0002258a) cell_toolbar2_fixed_pane

0xa057,	// (0x000225a5) cell_toolbar2_fixed_pane_g1

0xf17c,	// (0x000276ca) toolbar2_fixed_button_pane

0xc3ee,	// (0x0002493c) toolbar2_fixed_button_pane_g1

0xc3f6,	// (0x00024944) toolbar2_fixed_button_pane_g2

0xc3fe,	// (0x0002494c) toolbar2_fixed_button_pane_g3

0xc406,	// (0x00024954) toolbar2_fixed_button_pane_g4

0xc40e,	// (0x0002495c) toolbar2_fixed_button_pane_g5

0xc416,	// (0x00024964) toolbar2_fixed_button_pane_g6

0xc41e,	// (0x0002496c) toolbar2_fixed_button_pane_g7

0xc426,	// (0x00024974) toolbar2_fixed_button_pane_g8

0xc42e,	// (0x0002497c) toolbar2_fixed_button_pane_g9

0x0008,

0xf872,	// (0x00027dc0) toolbar2_fixed_button_pane_g

0xf184,	// (0x000276d2) cell_toolbar2_float_pane_ParamLimits

0xf184,	// (0x000276d2) cell_toolbar2_float_pane

0xf195,	// (0x000276e3) cell_toolbar2_float_pane_g1

0xf17c,	// (0x000276ca) toolbar2_fixed_button_pane_cp

0x9b23,	// (0x00022071) fep_vkb_accented_list_pane_ParamLimits

0x9b23,	// (0x00022071) fep_vkb_accented_list_pane

0x6972,	// (0x0001eec0) bg_popup_fep_shadow_pane_g9

0xbe8a,	// (0x000243d8) bg_popup_fep_shadow_pane_cp3

0xb578,	// (0x00023ac6) list_accented_list_pane

0xf19e,	// (0x000276ec) list_single_accented_list_pane_ParamLimits

0xf19e,	// (0x000276ec) list_single_accented_list_pane

0xbe8a,	// (0x000243d8) list_highlight_pane_cp10

0xf1af,	// (0x000276fd) list_single_accented_list_pane_t1

0x387b,	// (0x0001bdc9) popup_slider_window_ParamLimits

0x387b,	// (0x0001bdc9) popup_slider_window

0xefde,	// (0x0002752c) aid_indentation_list_msg

0xa150,	// (0x0002269e) bg_popup_window_pane_cp19

0xf21b,	// (0x00027769) popup_slider_window_g1

0xf237,	// (0x00027785) popup_slider_window_g2

0xf253,	// (0x000277a1) popup_slider_window_g3

0x0005,

0xfcf0,	// (0x0002823e) popup_slider_window_g

0xf26f,	// (0x000277bd) popup_slider_window_t1

0xf2b5,	// (0x00027803) small_volume_slider_vertical_pane

0xe2a2,	// (0x000267f0) small_volume_slider_vertical_pane_g1

0xe2a2,	// (0x000267f0) small_volume_slider_vertical_pane_g2

0xf2d1,	// (0x0002781f) small_volume_slider_vertical_pane_g3

0x0002,

0xfd02,	// (0x00028250) small_volume_slider_vertical_pane_g

0x8ae8,	// (0x00021036) area_side_right_pane_ParamLimits

0x8ae8,	// (0x00021036) area_side_right_pane

0xa208,	// (0x00022756) aid_size_side_button_ParamLimits

0xa208,	// (0x00022756) aid_size_side_button

0xa221,	// (0x0002276f) grid_sctrl_middle_pane_ParamLimits

0xa221,	// (0x0002276f) grid_sctrl_middle_pane

0x6afd,	// (0x0001f04b) sctrl_sk_bottom_pane

0x6b0e,	// (0x0001f05c) sctrl_sk_top_pane

0x6b20,	// (0x0001f06e) aid_touch_sctrl_top

0x8d74,	// (0x000212c2) bg_sctrl_sk_pane_ParamLimits

0x8d74,	// (0x000212c2) bg_sctrl_sk_pane

0x6b2d,	// (0x0001f07b) sctrl_sk_top_pane_g1

0x6b3a,	// (0x0001f088) sctrl_sk_top_pane_t1

0x6b20,	// (0x0001f06e) aid_touch_sctrl_bottom

0x8d74,	// (0x000212c2) bg_sctrl_sk_pane_cp_ParamLimits

0x8d74,	// (0x000212c2) bg_sctrl_sk_pane_cp

0x6b55,	// (0x0001f0a3) sctrl_sk_bottom_pane_g1

0x6b3a,	// (0x0001f088) sctrl_sk_bottom_pane_t1

0xa23b,	// (0x00022789) cell_sctrl_middle_pane_ParamLimits

0xa23b,	// (0x00022789) cell_sctrl_middle_pane

0xa24c,	// (0x0002279a) aid_touch_sctrl_middle_ParamLimits

0xa24c,	// (0x0002279a) aid_touch_sctrl_middle

0xa259,	// (0x000227a7) bg_sctrl_middle_pane_ParamLimits

0xa259,	// (0x000227a7) bg_sctrl_middle_pane

0xf2da,	// (0x00027828) cell_sctrl_middle_pane_g1_ParamLimits

0xf2da,	// (0x00027828) cell_sctrl_middle_pane_g1

0xa267,	// (0x000227b5) cell_sctrl_middle_pane_g2_ParamLimits

0xa267,	// (0x000227b5) cell_sctrl_middle_pane_g2

0x0001,

0xfd0e,	// (0x0002825c) cell_sctrl_middle_pane_g_ParamLimits

0xfd0e,	// (0x0002825c) cell_sctrl_middle_pane_g

0xc3ee,	// (0x0002493c) bg_sctrl_middle_pane_g1

0xc3f6,	// (0x00024944) bg_sctrl_middle_pane_g2

0xc3fe,	// (0x0002494c) bg_sctrl_middle_pane_g3

0xc406,	// (0x00024954) bg_sctrl_middle_pane_g4

0xc40e,	// (0x0002495c) bg_sctrl_middle_pane_g5

0xc416,	// (0x00024964) bg_sctrl_middle_pane_g6

0xc41e,	// (0x0002496c) bg_sctrl_middle_pane_g7

0xc426,	// (0x00024974) bg_sctrl_middle_pane_g8

0x0007,

0xfd13,	// (0x00028261) bg_sctrl_middle_pane_g

0xc42e,	// (0x0002497c) bg_sctrl_middle_pane_g8_copy1

0xc3ee,	// (0x0002493c) bg_sctrl_sk_pane_g1

0xc3f6,	// (0x00024944) bg_sctrl_sk_pane_g2

0xc3fe,	// (0x0002494c) bg_sctrl_sk_pane_g3

0x0008,

0xf872,	// (0x00027dc0) bg_sctrl_sk_pane_g

0x917b,	// (0x000216c9) aid_size_touch_scroll_bar

0xc406,	// (0x00024954) bg_sctrl_sk_pane_g4

0xc40e,	// (0x0002495c) bg_sctrl_sk_pane_g5

0xc416,	// (0x00024964) bg_sctrl_sk_pane_g6

0xc41e,	// (0x0002496c) bg_sctrl_sk_pane_g7

0xc426,	// (0x00024974) bg_sctrl_sk_pane_g8

0xc42e,	// (0x0002497c) bg_sctrl_sk_pane_g9

0xc124,	// (0x00024672) popup_fep_china_hwr2_fs_candidate_window

0x33bf,	// (0x0001b90d) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x33bf,	// (0x0001b90d) popup_fep_china_hwr2_fs_control_window

0xe435,	// (0x00026983) sctrl_sk_top_pane_g2

0x0001,

0xfd09,	// (0x00028257) sctrl_sk_top_pane_g

0xa273,	// (0x000227c1) aid_fep_china_hwr2_fs_cell_ParamLimits

0xa273,	// (0x000227c1) aid_fep_china_hwr2_fs_cell

0xa287,	// (0x000227d5) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xa287,	// (0x000227d5) bg_popup_fep_shadow_pane_cp4

0xa29e,	// (0x000227ec) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xa29e,	// (0x000227ec) bg_popup_fep_shadow_pane_cp5

0xa2b0,	// (0x000227fe) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xa2b0,	// (0x000227fe) popup_fep_china_hwr2_fs_control_bar_grid

0xa2c4,	// (0x00022812) popup_fep_china_hwr2_fs_control_funtion_grid

0xf2e8,	// (0x00027836) aid_fep_china_hwr2_fs_candi_cell

0x8a30,	// (0x00020f7e) bg_popup_fep_shadow_pane_cp6

0xf2f2,	// (0x00027840) popup_fep_china_hwr2_fs_candidate_grid

0xa2cc,	// (0x0002281a) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xa2cc,	// (0x0002281a) cell_fep_china_hwr2_fs_funtion_grid

0xe2a2,	// (0x000267f0) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xf2da,	// (0x00027828) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xf2da,	// (0x00027828) cell_fep_china_hwr2_fs_funtion_grid_g1

0xf2fc,	// (0x0002784a) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xf2fc,	// (0x0002784a) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd24,	// (0x00028272) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd24,	// (0x00028272) cell_fep_china_hwr2_fs_funtion_grid_g

0xa2e4,	// (0x00022832) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xa2e4,	// (0x00022832) cell_fep_china_hwr2_fs_funtion_grid_t1

0xa2f9,	// (0x00022847) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xa2f9,	// (0x00022847) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd29,	// (0x00028277) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd29,	// (0x00028277) cell_fep_china_hwr2_fs_funtion_grid_t

0xf312,	// (0x00027860) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xf31a,	// (0x00027868) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xf322,	// (0x00027870) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd2e,	// (0x0002827c) popup_fep_china_hwr2_fs_control_bar_grid_g

0xf32a,	// (0x00027878) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xf32a,	// (0x00027878) cell_fep_china_hwr2_fs_candidate_grid

0xf343,	// (0x00027891) popup_fep_china_hwr2_fs_candidate_grid_g20

0xf34b,	// (0x00027899) popup_fep_china_hwr2_fs_candidate_grid_g21

0xe2a2,	// (0x000267f0) cell_fep_china_hwr2_fs_candidate_grid_g1

0xe2a2,	// (0x000267f0) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb4e,	// (0x0002809c) cell_fep_china_hwr2_fs_candidate_grid_g

0xf353,	// (0x000278a1) cell_fep_china_hwr2_fs_candidate_grid_t1

0xc23b,	// (0x00024789) clock_nsta_pane_cp_24_ParamLimits

0xc23b,	// (0x00024789) clock_nsta_pane_cp_24

0xc2a3,	// (0x000247f1) indicator_nsta_pane_cp_24_ParamLimits

0xc2a3,	// (0x000247f1) indicator_nsta_pane_cp_24

0xd05a,	// (0x000255a8) heading_pane_g1

0x0001,

0xf8d7,	// (0x00027e25) heading_pane_g

0xd75b,	// (0x00025ca9) grid_sct_catagory_button_pane

0xcb47,	// (0x00025095) scroll_pane_cp5_ParamLimits

0xe001,	// (0x0002654f) button_value_adjust_pane_cp5_ParamLimits

0xe001,	// (0x0002654f) button_value_adjust_pane_cp5

0xe0bf,	// (0x0002660d) form2_midp_time_pane_ParamLimits

0xf361,	// (0x000278af) cell_sct_catagory_button_pane_ParamLimits

0xf361,	// (0x000278af) cell_sct_catagory_button_pane

0xe267,	// (0x000267b5) bg_button_pane_cp01_ParamLimits

0xe267,	// (0x000267b5) bg_button_pane_cp01

0xe2a2,	// (0x000267f0) cell_sct_catagory_button_pane_g1

0x38f4,	// (0x0001be42) popup_tb_extension_window

0xa315,	// (0x00022863) aid_size_cell_ext_ParamLimits

0xa315,	// (0x00022863) aid_size_cell_ext

0x8fbd,	// (0x0002150b) bg_tb_trans_pane_cp1_ParamLimits

0x8fbd,	// (0x0002150b) bg_tb_trans_pane_cp1

0xa33b,	// (0x00022889) grid_tb_ext_pane_ParamLimits

0xa33b,	// (0x00022889) grid_tb_ext_pane

0xa379,	// (0x000228c7) cell_tb_ext_pane_ParamLimits

0xa379,	// (0x000228c7) cell_tb_ext_pane

0xa3a1,	// (0x000228ef) cell_tb_ext_pane_g1_ParamLimits

0xa3a1,	// (0x000228ef) cell_tb_ext_pane_g1

0xf373,	// (0x000278c1) cell_tb_ext_pane_t1

0x8d74,	// (0x000212c2) list_highlight_pane_cp11_ParamLimits

0x8d74,	// (0x000212c2) list_highlight_pane_cp11

0x5bbf,	// (0x0001e10d) popup_uni_indicator_window_ParamLimits

0x5bbf,	// (0x0001e10d) popup_uni_indicator_window

0xb472,	// (0x000239c0) bg_popup_sub_pane_cp14

0xf38e,	// (0x000278dc) list_uniindi_pane

0xf39a,	// (0x000278e8) uniindi_top_pane

0x8d74,	// (0x000212c2) bg_uniindi_top_pane

0xf3b9,	// (0x00027907) uniindi_top_pane_g1

0xf3cf,	// (0x0002791d) uniindi_top_pane_g2

0x0003,

0xfd35,	// (0x00028283) uniindi_top_pane_g

0xf3f9,	// (0x00027947) uniindi_top_pane_t1

0xf423,	// (0x00027971) list_single_uniindi_pane_ParamLimits

0xf423,	// (0x00027971) list_single_uniindi_pane

0xe2a2,	// (0x000267f0) bg_uniindi_top_pane_g1

0xf436,	// (0x00027984) list_single_uniindi_pane_g1

0xf449,	// (0x00027997) list_single_uniindi_pane_t1

0x8a30,	// (0x00020f7e) control_bg_pane

0xf46e,	// (0x000279bc) bg_sctrl_sk_pane_cp1

0xf477,	// (0x000279c5) bg_sctrl_sk_pane_cp2

0xf480,	// (0x000279ce) control_bg_pane_g1

0xf489,	// (0x000279d7) control_bg_pane_g2

0x0001,

0xfd3e,	// (0x0002828c) control_bg_pane_g

0xdec0,	// (0x0002640e) cell_indicator_nsta_pane_g1_ParamLimits

0x9959,	// (0x00021ea7) cell_indicator_nsta_pane_g2_ParamLimits

0xfab2,	// (0x00028000) cell_indicator_nsta_pane_g_ParamLimits

0x5505,	// (0x0001da53) form2_midp_time_pane_t1_ParamLimits

0x1ab2,	// (0x0001a000) main_idle_act4_pane_ParamLimits

0x1ab2,	// (0x0001a000) main_idle_act4_pane

0x38f4,	// (0x0001be42) popup_tb_extension_window_ParamLimits

0xa360,	// (0x000228ae) tb_ext_find_pane_ParamLimits

0xa360,	// (0x000228ae) tb_ext_find_pane

0xf492,	// (0x000279e0) ai_gene_pane_1_cp1

0xbf1e,	// (0x0002446c) ai_gene_pane_2_cp1

0xf49a,	// (0x000279e8) list_single_idle_plugin_calendar_pane

0xf4a3,	// (0x000279f1) list_single_idle_plugin_notification_pane

0xf4ac,	// (0x000279fa) list_single_idle_plugin_player_pane

0xa3be,	// (0x0002290c) list_single_idle_plugin_shortcut_pane_ParamLimits

0xa3be,	// (0x0002290c) list_single_idle_plugin_shortcut_pane

0xa3e6,	// (0x00022934) main_idle_act4_pane_t1

0xa3fc,	// (0x0002294a) main_idle_act4_pane_t2

0x0001,

0xfd43,	// (0x00028291) main_idle_act4_pane_t

0xa412,	// (0x00022960) middle_sk_idle_act4_pane_ParamLimits

0xa412,	// (0x00022960) middle_sk_idle_act4_pane

0xa42e,	// (0x0002297c) popup_clock_digital_analogue_window_cp2

0xa456,	// (0x000229a4) shortcut_wheel_idle_act4_pane_ParamLimits

0xa456,	// (0x000229a4) shortcut_wheel_idle_act4_pane

0xe2a2,	// (0x000267f0) shortcut_wheel_idle_act4_pane_g1

0xe2a2,	// (0x000267f0) shortcut_wheel_idle_act4_pane_g2

0xe2a2,	// (0x000267f0) shortcut_wheel_idle_act4_pane_g3

0xe2a2,	// (0x000267f0) shortcut_wheel_idle_act4_pane_g4

0xe2a2,	// (0x000267f0) shortcut_wheel_idle_act4_pane_g5

0xf4b5,	// (0x00027a03) shortcut_wheel_idle_act4_pane_g6

0xf4bd,	// (0x00027a0b) shortcut_wheel_idle_act4_pane_g7

0xf4c5,	// (0x00027a13) shortcut_wheel_idle_act4_pane_g8

0xf4cd,	// (0x00027a1b) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd48,	// (0x00028296) shortcut_wheel_idle_act4_pane_g

0x1ac0,	// (0x0001a00e) middle_sk_idle_act4_pane_g1_ParamLimits

0x1ac0,	// (0x0001a00e) middle_sk_idle_act4_pane_g1

0xa4d3,	// (0x00022a21) middle_sk_idle_act4_pane_g2_ParamLimits

0xa4d3,	// (0x00022a21) middle_sk_idle_act4_pane_g2

0x0001,

0xfd6b,	// (0x000282b9) middle_sk_idle_act4_pane_g_ParamLimits

0xfd6b,	// (0x000282b9) middle_sk_idle_act4_pane_g

0xa4eb,	// (0x00022a39) middle_sk_idle_act4_pane_t1_ParamLimits

0xa4eb,	// (0x00022a39) middle_sk_idle_act4_pane_t1

0xa51a,	// (0x00022a68) grid_ai_shortcut_pane_ParamLimits

0xa51a,	// (0x00022a68) grid_ai_shortcut_pane

0xa537,	// (0x00022a85) list_highlight_pane_cp16_ParamLimits

0xa537,	// (0x00022a85) list_highlight_pane_cp16

0xa544,	// (0x00022a92) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xa544,	// (0x00022a92) list_single_idle_plugin_shortcut_pane_g1

0xa550,	// (0x00022a9e) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xa550,	// (0x00022a9e) list_single_idle_plugin_shortcut_pane_g2

0xa56c,	// (0x00022aba) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xa56c,	// (0x00022aba) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd70,	// (0x000282be) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd70,	// (0x000282be) list_single_idle_plugin_shortcut_pane_g

0xa581,	// (0x00022acf) cell_ai_shortcut_pane_ParamLimits

0xa581,	// (0x00022acf) cell_ai_shortcut_pane

0xa597,	// (0x00022ae5) cell_ai_shortcut_pane_g1_ParamLimits

0xa597,	// (0x00022ae5) cell_ai_shortcut_pane_g1

0xf492,	// (0x000279e0) ai_gene_pane_1_cp2

0xf4d5,	// (0x00027a23) ai_gene_pane_2_cp2

0xf4dd,	// (0x00027a2b) list_highlight_pane_cp15

0xf4e6,	// (0x00027a34) list_single_idle_plugin_calendar_pane_g1

0xf4dd,	// (0x00027a2b) list_highlight_pane_cp17

0xf4ee,	// (0x00027a3c) list_single_idle_plugin_calendar_pane_g1_copy1

0xf4f6,	// (0x00027a44) list_single_idle_plugin_player_pane_g1

0xd95a,	// (0x00025ea8) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd77,	// (0x000282c5) list_single_idle_plugin_player_pane_g

0xf4fe,	// (0x00027a4c) list_single_idle_plugin_player_pane_t1

0xf50c,	// (0x00027a5a) list_single_idle_plugin_player_pane_t2

0xf51a,	// (0x00027a68) list_single_idle_plugin_player_pane_t3

0xf528,	// (0x00027a76) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd7c,	// (0x000282ca) list_single_idle_plugin_player_pane_t

0xf536,	// (0x00027a84) wait_bar_pane_cp15

0xf53e,	// (0x00027a8c) grid_ai_notification_pane

0xd95a,	// (0x00025ea8) list_single_idle_plugin_notification_pane_g1

0xa5b9,	// (0x00022b07) cell_ai_notification_pane_ParamLimits

0xa5b9,	// (0x00022b07) cell_ai_notification_pane

0xf547,	// (0x00027a95) cell_ai_notification_pane_g1

0xf54f,	// (0x00027a9d) cell_ai_notification_pane_t1

0xa5c6,	// (0x00022b14) tb_ext_find_button_pane

0xa5ce,	// (0x00022b1c) tb_ext_find_pane_g1

0xa5d6,	// (0x00022b24) tb_ext_find_pane_t1

0xb998,	// (0x00023ee6) tb_ext_find_button_pane_g1

0xf55d,	// (0x00027aab) tb_ext_find_button_pane_g2

0x0001,

0xfd85,	// (0x000282d3) tb_ext_find_button_pane_g

0xa3e6,	// (0x00022934) main_idle_act4_pane_t1_ParamLimits

0xa3fc,	// (0x0002294a) main_idle_act4_pane_t2_ParamLimits

0xfd43,	// (0x00028291) main_idle_act4_pane_t_ParamLimits

0xa42e,	// (0x0002297c) popup_clock_digital_analogue_window_cp2_ParamLimits

0xa446,	// (0x00022994) sat_plugin_idle_act4_pane_ParamLimits

0xa446,	// (0x00022994) sat_plugin_idle_act4_pane

0xa5e4,	// (0x00022b32) sat_plugin_idle_act4_pane_t1_ParamLimits

0xa5e4,	// (0x00022b32) sat_plugin_idle_act4_pane_t1

0xa5fc,	// (0x00022b4a) sat_plugin_idle_act4_pane_t2_ParamLimits

0xa5fc,	// (0x00022b4a) sat_plugin_idle_act4_pane_t2

0xa614,	// (0x00022b62) sat_plugin_idle_act4_pane_t3_ParamLimits

0xa614,	// (0x00022b62) sat_plugin_idle_act4_pane_t3

0xa62c,	// (0x00022b7a) sat_plugin_idle_act4_pane_t4_ParamLimits

0xa62c,	// (0x00022b7a) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd8a,	// (0x000282d8) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd8a,	// (0x000282d8) sat_plugin_idle_act4_pane_t

0x5afa,	// (0x0001e048) popup_battery_window_ParamLimits

0x5afa,	// (0x0001e048) popup_battery_window

0x8d74,	// (0x000212c2) bg_popup_sub_pane_cp25_ParamLimits

0x8d74,	// (0x000212c2) bg_popup_sub_pane_cp25

0x002e,	// (0x0001857c) popup_battery_window_g1_ParamLimits

0x002e,	// (0x0001857c) popup_battery_window_g1

0x003a,	// (0x00018588) popup_battery_window_t1_ParamLimits

0x003a,	// (0x00018588) popup_battery_window_t1

0x004c,	// (0x0001859a) popup_battery_window_t2_ParamLimits

0x004c,	// (0x0001859a) popup_battery_window_t2

0x0001,

0xfd93,	// (0x000282e1) popup_battery_window_t_ParamLimits

0xfd93,	// (0x000282e1) popup_battery_window_t

0x3250,	// (0x0001b79e) midp_canvas_pane_ParamLimits

0x32ab,	// (0x0001b7f9) midp_keypad_pane_ParamLimits

0x32ab,	// (0x0001b7f9) midp_keypad_pane

0xb5ca,	// (0x00023b18) main_midp_pane_ParamLimits

0xdf9c,	// (0x000264ea) signal_pane_g2_cp_ParamLimits

0xa644,	// (0x00022b92) aid_size_cell_midp_keypad_ParamLimits

0xa644,	// (0x00022b92) aid_size_cell_midp_keypad

0xa662,	// (0x00022bb0) midp_keyp_game_grid_pane_ParamLimits

0xa662,	// (0x00022bb0) midp_keyp_game_grid_pane

0xa689,	// (0x00022bd7) midp_keyp_rocker_pane_ParamLimits

0xa689,	// (0x00022bd7) midp_keyp_rocker_pane

0xa6ca,	// (0x00022c18) midp_keyp_sk_left_pane_ParamLimits

0xa6ca,	// (0x00022c18) midp_keyp_sk_left_pane

0xa71e,	// (0x00022c6c) midp_keyp_sk_right_pane_ParamLimits

0xa71e,	// (0x00022c6c) midp_keyp_sk_right_pane

0x8a30,	// (0x00020f7e) bg_button_pane_cp03

0xa772,	// (0x00022cc0) midp_keyp_sk_left_pane_g1

0x8a30,	// (0x00020f7e) bg_button_pane_cp04

0xa772,	// (0x00022cc0) midp_keyp_sk_right_pane_g1

0xe2a2,	// (0x000267f0) midp_keyp_rocker_pane_g1

0xa77b,	// (0x00022cc9) keyp_game_cell_pane_ParamLimits

0xa77b,	// (0x00022cc9) keyp_game_cell_pane

0x8a30,	// (0x00020f7e) bg_button_pane_cp02

0xa79f,	// (0x00022ced) keyp_game_cell_pane_g1

0x8b34,	// (0x00021082) popup_fep_vkb2_window_ParamLimits

0x8b34,	// (0x00021082) popup_fep_vkb2_window

0xa7a8,	// (0x00022cf6) aid_size_cell_vkb2_ParamLimits

0xa7a8,	// (0x00022cf6) aid_size_cell_vkb2

0xa7de,	// (0x00022d2c) popup_fep_vkb2_window_g1_ParamLimits

0xa7de,	// (0x00022d2c) popup_fep_vkb2_window_g1

0xa82e,	// (0x00022d7c) vkb2_area_bottom_pane_ParamLimits

0xa82e,	// (0x00022d7c) vkb2_area_bottom_pane

0xa882,	// (0x00022dd0) vkb2_area_keypad_pane_ParamLimits

0xa882,	// (0x00022dd0) vkb2_area_keypad_pane

0xa8ca,	// (0x00022e18) vkb2_area_top_pane_ParamLimits

0xa8ca,	// (0x00022e18) vkb2_area_top_pane

0xa950,	// (0x00022e9e) vkb2_top_entry_pane_ParamLimits

0xa950,	// (0x00022e9e) vkb2_top_entry_pane

0xa97d,	// (0x00022ecb) vkb2_top_grid_left_pane_ParamLimits

0xa97d,	// (0x00022ecb) vkb2_top_grid_left_pane

0xa99d,	// (0x00022eeb) vkb2_top_grid_right_pane_ParamLimits

0xa99d,	// (0x00022eeb) vkb2_top_grid_right_pane

0x6db3,	// (0x0001f301) vkb2_cell_keypad_pane_ParamLimits

0x6db3,	// (0x0001f301) vkb2_cell_keypad_pane

0xa9e3,	// (0x00022f31) vkb2_area_bottom_grid_pane_ParamLimits

0xa9e3,	// (0x00022f31) vkb2_area_bottom_grid_pane

0xaa0d,	// (0x00022f5b) vkb2_area_bottom_pane_g1_ParamLimits

0xaa0d,	// (0x00022f5b) vkb2_area_bottom_pane_g1

0xaa33,	// (0x00022f81) vkb2_area_bottom_pane_g2_ParamLimits

0xaa33,	// (0x00022f81) vkb2_area_bottom_pane_g2

0xaa64,	// (0x00022fb2) vkb2_area_bottom_pane_g3_ParamLimits

0xaa64,	// (0x00022fb2) vkb2_area_bottom_pane_g3

0x0002,

0xfd98,	// (0x000282e6) vkb2_area_bottom_pane_g_ParamLimits

0xfd98,	// (0x000282e6) vkb2_area_bottom_pane_g

0x6f5d,	// (0x0001f4ab) vkb2_top_cell_left_pane_ParamLimits

0x6f5d,	// (0x0001f4ab) vkb2_top_cell_left_pane

0xaace,	// (0x0002301c) vkb2_top_entry_pane_g1_ParamLimits

0xaace,	// (0x0002301c) vkb2_top_entry_pane_g1

0xaadc,	// (0x0002302a) vkb2_top_entry_pane_t1_ParamLimits

0xaadc,	// (0x0002302a) vkb2_top_entry_pane_t1

0x01ef,	// (0x0001873d) vkb2_top_entry_pane_t2_ParamLimits

0x01ef,	// (0x0001873d) vkb2_top_entry_pane_t2

0x0221,	// (0x0001876f) vkb2_top_entry_pane_t3_ParamLimits

0x0221,	// (0x0001876f) vkb2_top_entry_pane_t3

0x0002,

0xfd9f,	// (0x000282ed) vkb2_top_entry_pane_t_ParamLimits

0xfd9f,	// (0x000282ed) vkb2_top_entry_pane_t

0xab15,	// (0x00023063) vkb2_top_grid_right_pane_g1_ParamLimits

0xab15,	// (0x00023063) vkb2_top_grid_right_pane_g1

0x6fc0,	// (0x0001f50e) vkb2_top_grid_right_pane_g2_ParamLimits

0x6fc0,	// (0x0001f50e) vkb2_top_grid_right_pane_g2

0x6fd8,	// (0x0001f526) vkb2_top_grid_right_pane_g3_ParamLimits

0x6fd8,	// (0x0001f526) vkb2_top_grid_right_pane_g3

0xab2b,	// (0x00023079) vkb2_top_grid_right_pane_g4_ParamLimits

0xab2b,	// (0x00023079) vkb2_top_grid_right_pane_g4

0x0003,

0xfda6,	// (0x000282f4) vkb2_top_grid_right_pane_g_ParamLimits

0xfda6,	// (0x000282f4) vkb2_top_grid_right_pane_g

0x7006,	// (0x0001f554) vkb2_top_cell_left_pane_g1

0x701d,	// (0x0001f56b) vkb2_cell_keypad_pane_g1_ParamLimits

0x701d,	// (0x0001f56b) vkb2_cell_keypad_pane_g1

0x0245,	// (0x00018793) vkb2_cell_keypad_pane_t1_ParamLimits

0x0245,	// (0x00018793) vkb2_cell_keypad_pane_t1

0x702b,	// (0x0001f579) vkb2_cell_bottom_grid_pane_ParamLimits

0x702b,	// (0x0001f579) vkb2_cell_bottom_grid_pane

0x7064,	// (0x0001f5b2) vkb2_cell_bottom_grid_pane_g1

0xa477,	// (0x000229c5) aid_call2_pane_cp02

0xa47f,	// (0x000229cd) aid_call_pane_cp02

0xa487,	// (0x000229d5) clock_digital_number_pane_cp10

0xa48f,	// (0x000229dd) clock_digital_number_pane_cp11

0xa497,	// (0x000229e5) clock_digital_number_pane_cp12

0xa49f,	// (0x000229ed) clock_digital_number_pane_cp13

0xa4a7,	// (0x000229f5) clock_digital_separator_pane_cp10

0xb998,	// (0x00023ee6) popup_clock_digital_analogue_window_cp2_g1

0xb998,	// (0x00023ee6) popup_clock_digital_analogue_window_cp2_g2

0xa4af,	// (0x000229fd) popup_clock_digital_analogue_window_cp2_g3

0xb998,	// (0x00023ee6) popup_clock_digital_analogue_window_cp2_g4

0xa4af,	// (0x000229fd) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd5b,	// (0x000282a9) popup_clock_digital_analogue_window_cp2_g

0xa4b7,	// (0x00022a05) popup_clock_digital_analogue_window_cp2_t1

0xa4c5,	// (0x00022a13) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd66,	// (0x000282b4) popup_clock_digital_analogue_window_cp2_t

0xe2a2,	// (0x000267f0) clock_digital_number_pane_cp10_g1

0xe2a2,	// (0x000267f0) clock_digital_number_pane_cp10_g2

0x0001,

0xfb4e,	// (0x0002809c) clock_digital_number_pane_cp10_g

0xe2a2,	// (0x000267f0) clock_digital_separator_pane_cp10_g1

0xe2a2,	// (0x000267f0) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb4e,	// (0x0002809c) clock_digital_separator_pane_cp10_g

0xf3db,	// (0x00027929) uniindi_top_pane_g3

0xf3ec,	// (0x0002793a) uniindi_top_pane_g4

0x6e3e,	// (0x0001f38c) vkb2_row_keypad_pane_ParamLimits

0x6e3e,	// (0x0001f38c) vkb2_row_keypad_pane

0x7080,	// (0x0001f5ce) vkb2_cell_t_keypad_pane_ParamLimits

0x7080,	// (0x0001f5ce) vkb2_cell_t_keypad_pane

0x7090,	// (0x0001f5de) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x7090,	// (0x0001f5de) vkb2_cell_t_keypad_pane_cp08

0x70a3,	// (0x0001f5f1) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x70a3,	// (0x0001f5f1) vkb2_cell_t_keypad_pane_cp09

0x70b7,	// (0x0001f605) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x70b7,	// (0x0001f605) vkb2_cell_t_keypad_pane_cp01

0x70c8,	// (0x0001f616) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x70c8,	// (0x0001f616) vkb2_cell_t_keypad_pane_cp02

0x70d9,	// (0x0001f627) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x70d9,	// (0x0001f627) vkb2_cell_t_keypad_pane_cp03

0x70ea,	// (0x0001f638) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x70ea,	// (0x0001f638) vkb2_cell_t_keypad_pane_cp04

0x70fb,	// (0x0001f649) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x70fb,	// (0x0001f649) vkb2_cell_t_keypad_pane_cp05

0x710c,	// (0x0001f65a) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x710c,	// (0x0001f65a) vkb2_cell_t_keypad_pane_cp06

0x711d,	// (0x0001f66b) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x711d,	// (0x0001f66b) vkb2_cell_t_keypad_pane_cp07

0x712e,	// (0x0001f67c) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x712e,	// (0x0001f67c) vkb2_cell_t_keypad_pane_cp10

0xe435,	// (0x00026983) vkb2_cell_t_keypad_pane_g1

0x025c,	// (0x000187aa) vkb2_cell_t_keypad_pane_t1

0x8a30,	// (0x00020f7e) popup_grid_graphic2_window

0xab41,	// (0x0002308f) aid_size_cell_graphic2_ParamLimits

0xab41,	// (0x0002308f) aid_size_cell_graphic2

0xab7f,	// (0x000230cd) bg_popup_window_pane_cp21_ParamLimits

0xab7f,	// (0x000230cd) bg_popup_window_pane_cp21

0xab8d,	// (0x000230db) graphic2_pages_pane_ParamLimits

0xab8d,	// (0x000230db) graphic2_pages_pane

0xabe3,	// (0x00023131) grid_graphic2_control_pane_ParamLimits

0xabe3,	// (0x00023131) grid_graphic2_control_pane

0xac2b,	// (0x00023179) grid_graphic2_pane_ParamLimits

0xac2b,	// (0x00023179) grid_graphic2_pane

0xacb2,	// (0x00023200) cell_graphic2_pane

0x8a30,	// (0x00020f7e) main_comp_mode_pane

0xf04c,	// (0x0002759a) list_ai3_gene_pane_ParamLimits

0xa150,	// (0x0002269e) bg_popup_window_pane_cp19_ParamLimits

0xf1bd,	// (0x0002770b) bg_touch_area_indi_pane_ParamLimits

0xf1bd,	// (0x0002770b) bg_touch_area_indi_pane

0xf1d3,	// (0x00027721) bg_touch_area_indi_pane_cp01_ParamLimits

0xf1d3,	// (0x00027721) bg_touch_area_indi_pane_cp01

0xf1e9,	// (0x00027737) bg_touch_area_indi_pane_cp02_ParamLimits

0xf1e9,	// (0x00027737) bg_touch_area_indi_pane_cp02

0xf201,	// (0x0002774f) bg_touch_area_indi_pane_cp03_ParamLimits

0xf201,	// (0x0002774f) bg_touch_area_indi_pane_cp03

0xf21b,	// (0x00027769) popup_slider_window_g1_ParamLimits

0xf237,	// (0x00027785) popup_slider_window_g2_ParamLimits

0xf253,	// (0x000277a1) popup_slider_window_g3_ParamLimits

0xfcf0,	// (0x0002823e) popup_slider_window_g_ParamLimits

0xf26f,	// (0x000277bd) popup_slider_window_t1_ParamLimits

0xf2b5,	// (0x00027803) small_volume_slider_vertical_pane_ParamLimits

0xacb2,	// (0x00023200) cell_graphic2_pane_ParamLimits

0xad0f,	// (0x0002325d) bg_button_pane_cp10_ParamLimits

0xad0f,	// (0x0002325d) bg_button_pane_cp10

0xad22,	// (0x00023270) bg_button_pane_cp11_ParamLimits

0xad22,	// (0x00023270) bg_button_pane_cp11

0xad35,	// (0x00023283) graphic2_pages_pane_g1_ParamLimits

0xad35,	// (0x00023283) graphic2_pages_pane_g1

0xad50,	// (0x0002329e) graphic2_pages_pane_g2_ParamLimits

0xad50,	// (0x0002329e) graphic2_pages_pane_g2

0x0001,

0xfdb4,	// (0x00028302) graphic2_pages_pane_g_ParamLimits

0xfdb4,	// (0x00028302) graphic2_pages_pane_g

0xad68,	// (0x000232b6) graphic2_pages_pane_t1_ParamLimits

0xad68,	// (0x000232b6) graphic2_pages_pane_t1

0xad80,	// (0x000232ce) cell_graphic2_control_pane_ParamLimits

0xad80,	// (0x000232ce) cell_graphic2_control_pane

0xadb2,	// (0x00023300) cell_graphic2_pane_g1_ParamLimits

0xadb2,	// (0x00023300) cell_graphic2_pane_g1

0x1ace,	// (0x0001a01c) cell_graphic2_pane_g2_ParamLimits

0x1ace,	// (0x0001a01c) cell_graphic2_pane_g2

0xadbf,	// (0x0002330d) cell_graphic2_pane_g3_ParamLimits

0xadbf,	// (0x0002330d) cell_graphic2_pane_g3

0x1adb,	// (0x0001a029) cell_graphic2_pane_g4_ParamLimits

0x1adb,	// (0x0001a029) cell_graphic2_pane_g4

0xadcc,	// (0x0002331a) cell_graphic2_pane_g5_ParamLimits

0xadcc,	// (0x0002331a) cell_graphic2_pane_g5

0x0004,

0xfdb9,	// (0x00028307) cell_graphic2_pane_g_ParamLimits

0xfdb9,	// (0x00028307) cell_graphic2_pane_g

0xadec,	// (0x0002333a) cell_graphic2_pane_t1_ParamLimits

0xadec,	// (0x0002333a) cell_graphic2_pane_t1

0xd04e,	// (0x0002559c) grid_highlight_pane_cp11_ParamLimits

0xd04e,	// (0x0002559c) grid_highlight_pane_cp11

0x8d74,	// (0x000212c2) bg_button_pane_cp05

0xae21,	// (0x0002336f) cell_graphic2_control_pane_g1

0xe2a2,	// (0x000267f0) bg_touch_area_indi_pane_g1

0x052c,	// (0x00018a7a) aid_cmod_rocker_key_size

0x0536,	// (0x00018a84) aid_cmode_itu_key_size

0x0540,	// (0x00018a8e) main_cmode_video_pane

0x054a,	// (0x00018a98) main_comp_mode_itu_pane

0x0556,	// (0x00018aa4) main_comp_mode_rocker_pane

0x0562,	// (0x00018ab0) cell_cmode_rocker_pane_ParamLimits

0x0562,	// (0x00018ab0) cell_cmode_rocker_pane

0x0574,	// (0x00018ac2) cell_cmode_itu_pane_ParamLimits

0x0574,	// (0x00018ac2) cell_cmode_itu_pane

0xb472,	// (0x000239c0) bg_button_pane_cp06_ParamLimits

0xb472,	// (0x000239c0) bg_button_pane_cp06

0xe435,	// (0x00026983) cell_cmode_rocker_pane_g1_ParamLimits

0xe435,	// (0x00026983) cell_cmode_rocker_pane_g1

0xf2da,	// (0x00027828) cell_cmode_rocker_pane_g2_ParamLimits

0xf2da,	// (0x00027828) cell_cmode_rocker_pane_g2

0x0001,

0xfdc9,	// (0x00028317) cell_cmode_rocker_pane_g_ParamLimits

0xfdc9,	// (0x00028317) cell_cmode_rocker_pane_g

0x8a30,	// (0x00020f7e) bg_button_pane_cp07

0x0589,	// (0x00018ad7) cell_cmode_itu_pane_g1

0x0592,	// (0x00018ae0) cell_cmode_itu_pane_t1

0x05a0,	// (0x00018aee) cell_cmode_itu_pane_t2

0x0001,

0xfdce,	// (0x0002831c) cell_cmode_itu_pane_t

0xf45e,	// (0x000279ac) aid_touch_ctrl_left

0xf466,	// (0x000279b4) aid_touch_ctrl_right

0x8a30,	// (0x00020f7e) compa_mode_pane

0xae47,	// (0x00023395) aid_cmod_rocker_key_size_cp

0xae51,	// (0x0002339f) aid_cmode_itu_key_size_cp

0x05c2,	// (0x00018b10) compa_mode_pane_g1

0x05ca,	// (0x00018b18) compa_mode_pane_g2

0x05d2,	// (0x00018b20) compa_mode_pane_g3

0x0002,

0xfdd3,	// (0x00028321) compa_mode_pane_g

0xae5b,	// (0x000233a9) main_comp_mode_itu_pane_cp

0xae63,	// (0x000233b1) main_comp_mode_rocker_pane_cp

0xae6b,	// (0x000233b9) cell_cmode_itu_pane_cp_ParamLimits

0xae6b,	// (0x000233b9) cell_cmode_itu_pane_cp

0xae80,	// (0x000233ce) cell_cmode_rocker_pane_cp_ParamLimits

0xae80,	// (0x000233ce) cell_cmode_rocker_pane_cp

0xb472,	// (0x000239c0) bg_button_pane_cp06_cp_ParamLimits

0xb472,	// (0x000239c0) bg_button_pane_cp06_cp

0xe435,	// (0x00026983) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xe435,	// (0x00026983) cell_cmode_rocker_pane_g1_cp

0xe2a2,	// (0x000267f0) cell_cmode_rocker_pane_g2_cp

0x8a30,	// (0x00020f7e) bg_button_pane_cp07_cp

0xae92,	// (0x000233e0) cell_cmode_itu_pane_g1_cp

0xae9b,	// (0x000233e9) cell_cmode_itu_pane_t1_cp

0xae9b,	// (0x000233e9) cell_cmode_itu_pane_t2_cp

0x9772,	// (0x00021cc0) settings_code_pane_cp2

0x8c41,	// (0x0002118f) bg_popup_window_pane_cp3_ParamLimits

0x8f4e,	// (0x0002149c) heading_pane_cp3_ParamLimits

0x8f5a,	// (0x000214a8) listscroll_popup_graphic_pane_ParamLimits

0x6756,	// (0x0001eca4) fep_hwr_aid_pane_ParamLimits

0x6b20,	// (0x0001f06e) aid_touch_sctrl_top_ParamLimits

0x6b2d,	// (0x0001f07b) sctrl_sk_top_pane_g1_ParamLimits

0xe435,	// (0x00026983) sctrl_sk_top_pane_g2_ParamLimits

0xfd09,	// (0x00028257) sctrl_sk_top_pane_g_ParamLimits

0x6b3a,	// (0x0001f088) sctrl_sk_top_pane_t1_ParamLimits

0x6b20,	// (0x0001f06e) aid_touch_sctrl_bottom_ParamLimits

0x6b3a,	// (0x0001f088) sctrl_sk_bottom_pane_t1_ParamLimits

0xf3a7,	// (0x000278f5) aid_area_touch_clock

0xa912,	// (0x00022e60) aid_vkb2_area_top_pane_cell_ParamLimits

0xa912,	// (0x00022e60) aid_vkb2_area_top_pane_cell

0xa9bd,	// (0x00022f0b) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xa9bd,	// (0x00022f0b) aid_vkb2_area_bottom_pane_cell

0x01a7,	// (0x000186f5) popup_char_count_window

0x061f,	// (0x00018b6d) popup_char_count_window_g1

0x0628,	// (0x00018b76) popup_char_count_window_g2

0x0631,	// (0x00018b7f) popup_char_count_window_g3

0x0002,

0xfdda,	// (0x00028328) popup_char_count_window_g

0x063a,	// (0x00018b88) popup_char_count_window_t1

0x6bdb,	// (0x0001f129) popup_fep_char_preview_window_ParamLimits

0x6bdb,	// (0x0001f129) popup_fep_char_preview_window

0xa932,	// (0x00022e80) vkb2_top_candi_pane_ParamLimits

0xa932,	// (0x00022e80) vkb2_top_candi_pane

0xaea9,	// (0x000233f7) cell_vkb2_top_candi_pane_ParamLimits

0xaea9,	// (0x000233f7) cell_vkb2_top_candi_pane

0xc9c6,	// (0x00024f14) bg_popup_fep_char_preview_window_ParamLimits

0xc9c6,	// (0x00024f14) bg_popup_fep_char_preview_window

0x7143,	// (0x0001f691) popup_fep_char_preview_window_t1_ParamLimits

0x7143,	// (0x0001f691) popup_fep_char_preview_window_t1

0x06a5,	// (0x00018bf3) bg_popup_fep_char_preview_window_g1

0x069d,	// (0x00018beb) bg_popup_fep_char_preview_window_g2

0x0695,	// (0x00018be3) bg_popup_fep_char_preview_window_g3

0x06ad,	// (0x00018bfb) bg_popup_fep_char_preview_window_g4

0x06e6,	// (0x00018c34) bg_popup_fep_char_preview_window_g5

0x717d,	// (0x0001f6cb) bg_popup_fep_char_preview_window_g6

0x06de,	// (0x00018c2c) bg_popup_fep_char_preview_window_g7

0x06d6,	// (0x00018c24) bg_popup_fep_char_preview_window_g8

0x06ee,	// (0x00018c3c) bg_popup_fep_char_preview_window_g9

0x0008,

0xfde1,	// (0x0002832f) bg_popup_fep_char_preview_window_g

0xe435,	// (0x00026983) cell_vkb2_top_candi_pane_g1_ParamLimits

0xe435,	// (0x00026983) cell_vkb2_top_candi_pane_g1

0xe75f,	// (0x00026cad) cell_vkb2_top_candi_pane_g2_ParamLimits

0xe75f,	// (0x00026cad) cell_vkb2_top_candi_pane_g2

0xe780,	// (0x00026cce) cell_vkb2_top_candi_pane_g3_ParamLimits

0xe780,	// (0x00026cce) cell_vkb2_top_candi_pane_g3

0x7185,	// (0x0001f6d3) cell_vkb2_top_candi_pane_g4_ParamLimits

0x7185,	// (0x0001f6d3) cell_vkb2_top_candi_pane_g4

0x06b5,	// (0x00018c03) cell_vkb2_top_candi_pane_g5_ParamLimits

0x06b5,	// (0x00018c03) cell_vkb2_top_candi_pane_g5

0xf2da,	// (0x00027828) cell_vkb2_top_candi_pane_g6_ParamLimits

0xf2da,	// (0x00027828) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdf4,	// (0x00028342) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdf4,	// (0x00028342) cell_vkb2_top_candi_pane_g

0x71a6,	// (0x0001f6f4) cell_vkb2_top_candi_pane_t1

0x65c4,	// (0x0001eb12) aid_size_touch_slider_mark_ParamLimits

0x65c4,	// (0x0001eb12) aid_size_touch_slider_mark

0xabc9,	// (0x00023117) grid_graphic2_catg_pane_ParamLimits

0xabc9,	// (0x00023117) grid_graphic2_catg_pane

0xac85,	// (0x000231d3) popup_grid_graphic2_window_t1_ParamLimits

0xac85,	// (0x000231d3) popup_grid_graphic2_window_t1

0xac9b,	// (0x000231e9) popup_grid_graphic2_window_t2_ParamLimits

0xac9b,	// (0x000231e9) popup_grid_graphic2_window_t2

0x0001,

0xfdaf,	// (0x000282fd) popup_grid_graphic2_window_t_ParamLimits

0xfdaf,	// (0x000282fd) popup_grid_graphic2_window_t

0x8d74,	// (0x000212c2) bg_button_pane_cp05_ParamLimits

0xae21,	// (0x0002336f) cell_graphic2_control_pane_g1_ParamLimits

0xaf0f,	// (0x0002345d) cell_graphic2_catg_pane_ParamLimits

0xaf0f,	// (0x0002345d) cell_graphic2_catg_pane

0x8a30,	// (0x00020f7e) bg_button_pane_cp12

0xaf21,	// (0x0002346f) cell_graphic2_catg_pane_g1

0xf373,	// (0x000278c1) cell_tb_ext_pane_t1_ParamLimits

0x6f7d,	// (0x0001f4cb) vkb2_top_cell_right_narrow_pane_ParamLimits

0x6f7d,	// (0x0001f4cb) vkb2_top_cell_right_narrow_pane

0x6f95,	// (0x0001f4e3) vkb2_top_cell_right_wide_pane_ParamLimits

0x6f95,	// (0x0001f4e3) vkb2_top_cell_right_wide_pane

0x1ab2,	// (0x0001a000) bg_vkb2_func_pane_ParamLimits

0x1ab2,	// (0x0001a000) bg_vkb2_func_pane

0x7006,	// (0x0001f554) vkb2_top_cell_left_pane_g1_ParamLimits

0x1ab2,	// (0x0001a000) bg_vkb2_fuc_pane_cp03_ParamLimits

0x1ab2,	// (0x0001a000) bg_vkb2_fuc_pane_cp03

0x7064,	// (0x0001f5b2) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0xc3f6,	// (0x00024944) bg_vkb2_func_pane_g1

0xc3fe,	// (0x0002494c) bg_vkb2_func_pane_g2

0xc40e,	// (0x0002495c) bg_vkb2_func_pane_g3

0xc406,	// (0x00024954) bg_vkb2_func_pane_g4

0xc416,	// (0x00024964) bg_vkb2_func_pane_g5

0xc41e,	// (0x0002496c) bg_vkb2_func_pane_g6

0xc426,	// (0x00024974) bg_vkb2_func_pane_g7

0xc42e,	// (0x0002497c) bg_vkb2_func_pane_g8

0xc3ee,	// (0x0002493c) bg_vkb2_func_pane_g9

0x0008,

0xfe01,	// (0x0002834f) bg_vkb2_func_pane_g

0x1ab2,	// (0x0001a000) bg_vkb2_fuc_pane_cp01_ParamLimits

0x1ab2,	// (0x0001a000) bg_vkb2_fuc_pane_cp01

0x7006,	// (0x0001f554) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x7006,	// (0x0001f554) vkb2_top_cell_right_wide_pane_g1

0x1ab2,	// (0x0001a000) bg_vkb2_fuc_pane_cp02_ParamLimits

0x1ab2,	// (0x0001a000) bg_vkb2_fuc_pane_cp02

0x7064,	// (0x0001f5b2) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x7064,	// (0x0001f5b2) vkb2_top_cell_right_narrow_pane_g1

0xa090,	// (0x000225de) aid_touch_area_decrease_ParamLimits

0xa090,	// (0x000225de) aid_touch_area_decrease

0xa0c4,	// (0x00022612) aid_touch_area_increase_ParamLimits

0xa0c4,	// (0x00022612) aid_touch_area_increase

0xa0ec,	// (0x0002263a) aid_touch_area_mute_ParamLimits

0xa0ec,	// (0x0002263a) aid_touch_area_mute

0xa11c,	// (0x0002266a) aid_touch_area_slider_ParamLimits

0xa11c,	// (0x0002266a) aid_touch_area_slider

0xa15c,	// (0x000226aa) popup_slider_window_g4_ParamLimits

0xa15c,	// (0x000226aa) popup_slider_window_g4

0xa184,	// (0x000226d2) popup_slider_window_g5_ParamLimits

0xa184,	// (0x000226d2) popup_slider_window_g5

0xa1b8,	// (0x00022706) popup_slider_window_g6_ParamLimits

0xa1b8,	// (0x00022706) popup_slider_window_g6

0xf29d,	// (0x000277eb) popup_slider_window_t2_ParamLimits

0xf29d,	// (0x000277eb) popup_slider_window_t2

0x0001,

0xfcfd,	// (0x0002824b) popup_slider_window_t_ParamLimits

0xfcfd,	// (0x0002824b) popup_slider_window_t

0xa1d4,	// (0x00022722) slider_pane_ParamLimits

0xa1d4,	// (0x00022722) slider_pane

0x0711,	// (0x00018c5f) slider_pane_g1_ParamLimits

0x0711,	// (0x00018c5f) slider_pane_g1

0x0725,	// (0x00018c73) slider_pane_g2_ParamLimits

0x0725,	// (0x00018c73) slider_pane_g2

0x073b,	// (0x00018c89) slider_pane_g3_ParamLimits

0x073b,	// (0x00018c89) slider_pane_g3

0x0003,

0xfe14,	// (0x00028362) slider_pane_g_ParamLimits

0xfe14,	// (0x00028362) slider_pane_g

0x393c,	// (0x0001be8a) popup_tb_float_extension_window_ParamLimits

0x393c,	// (0x0001be8a) popup_tb_float_extension_window

0x0767,	// (0x00018cb5) aid_size_cell_tb_float_ext

0x8a30,	// (0x00020f7e) bg_popup_sub_window_cp28

0x0773,	// (0x00018cc1) grid_tb_float_ext_pane

0x077d,	// (0x00018ccb) cell_tb_float_ext_pane_ParamLimits

0x077d,	// (0x00018ccb) cell_tb_float_ext_pane

0x0797,	// (0x00018ce5) cell_tb_float_ext_pane_g1

0x07a0,	// (0x00018cee) grid_highlight_pane_cp12

0x9b01,	// (0x0002204f) cell_last_hwr_side_pane_ParamLimits

0x9b01,	// (0x0002204f) cell_last_hwr_side_pane

0xe2a2,	// (0x000267f0) cell_last_hwr_side_pane_g1

0x07a9,	// (0x00018cf7) cell_last_hwr_side_pane_g2

0x0001,

0xfe1d,	// (0x0002836b) cell_last_hwr_side_pane_g

0xaa99,	// (0x00022fe7) vkb2_area_bottom_space_btn_pane_ParamLimits

0xaa99,	// (0x00022fe7) vkb2_area_bottom_space_btn_pane

0xe435,	// (0x00026983) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x025c,	// (0x000187aa) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x71a6,	// (0x0001f6f4) cell_vkb2_top_candi_pane_t1_ParamLimits

0x71c5,	// (0x0001f713) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x71c5,	// (0x0001f713) vkb2_area_bottom_space_btn_pane_g1

0x71ff,	// (0x0001f74d) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x71ff,	// (0x0001f74d) vkb2_area_bottom_space_btn_pane_g2

0x7235,	// (0x0001f783) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x7235,	// (0x0001f783) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe22,	// (0x00028370) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe22,	// (0x00028370) vkb2_area_bottom_space_btn_pane_g

0x67fd,	// (0x0001ed4b) cel_fep_hwr_func_pane_ParamLimits

0x67fd,	// (0x0001ed4b) cel_fep_hwr_func_pane

0x9ad6,	// (0x00022024) cell_hwr_side_button_pane_ParamLimits

0x9ad6,	// (0x00022024) cell_hwr_side_button_pane

0xf3a7,	// (0x000278f5) aid_area_touch_clock_ParamLimits

0x8d74,	// (0x000212c2) bg_uniindi_top_pane_ParamLimits

0xf3b9,	// (0x00027907) uniindi_top_pane_g1_ParamLimits

0xf3cf,	// (0x0002791d) uniindi_top_pane_g2_ParamLimits

0xf3db,	// (0x00027929) uniindi_top_pane_g3_ParamLimits

0xf3ec,	// (0x0002793a) uniindi_top_pane_g4_ParamLimits

0xfd35,	// (0x00028283) uniindi_top_pane_g_ParamLimits

0xf3f9,	// (0x00027947) uniindi_top_pane_t1_ParamLimits

0x8d74,	// (0x000212c2) bg_vkb2_func_pane_cp01_ParamLimits

0x8d74,	// (0x000212c2) bg_vkb2_func_pane_cp01

0x1ae8,	// (0x0001a036) cel_fep_hwr_func_pane_g1_ParamLimits

0x1ae8,	// (0x0001a036) cel_fep_hwr_func_pane_g1

0x8d74,	// (0x000212c2) bg_vkb2_func_pane_cp02_ParamLimits

0x8d74,	// (0x000212c2) bg_vkb2_func_pane_cp02

0x1ae8,	// (0x0001a036) cell_hwr_side_button_pane_g1_ParamLimits

0x1ae8,	// (0x0001a036) cell_hwr_side_button_pane_g1

0xc304,	// (0x00024852) status_pane_g4_ParamLimits

0xc304,	// (0x00024852) status_pane_g4

0xc31e,	// (0x0002486c) status_pane_t1

0xe128,	// (0x00026676) form2_midp_gauge_slider_cont_pane

0xe130,	// (0x0002667e) form2_midp_gauge_slider_pane_t1_ParamLimits

0x9a2c,	// (0x00021f7a) form2_midp_gauge_slider_pane_t2_ParamLimits

0x9a3e,	// (0x00021f8c) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb01,	// (0x0002804f) form2_midp_gauge_slider_pane_t_ParamLimits

0xe142,	// (0x00026690) form2_midp_slider_pane_ParamLimits

0x6b9b,	// (0x0001f0e9) aid_size_cell_func_vkb2_ParamLimits

0x6b9b,	// (0x0001f0e9) aid_size_cell_func_vkb2

0x0753,	// (0x00018ca1) slider_pane_g4_ParamLimits

0x0753,	// (0x00018ca1) slider_pane_g4

0xaf2a,	// (0x00023478) form2_midp_gauge_slider_pane_t2_cp01

0xaf38,	// (0x00023486) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xaf38,	// (0x00023486) form2_midp_gauge_slider_pane_t3_cp01

0x72aa,	// (0x0001f7f8) form2_midp_slider_pane_cp01

0x8a30,	// (0x00020f7e) navi_smil_pane

0x1b18,	// (0x0001a066) navi_smil_pane_g1

0x1b20,	// (0x0001a06e) navi_smil_pane_t1

0x1af6,	// (0x0001a044) form2_midp_slider_pane_g1

0x1aff,	// (0x0001a04d) form2_midp_slider_pane_g2

0x1b07,	// (0x0001a055) form2_midp_slider_pane_g3

0x1af6,	// (0x0001a044) form2_midp_slider_pane_g4

0xaf55,	// (0x000234a3) form2_midp_slider_pane_g5

0x0004,

0xfe2b,	// (0x00028379) form2_midp_slider_pane_g

0x726f,	// (0x0001f7bd) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x726f,	// (0x0001f7bd) vkb2_area_bottom_space_btn_pane_g4

0x3b1f,	// (0x0001c06d) lc0_navi_pane_ParamLimits

0x3b1f,	// (0x0001c06d) lc0_navi_pane

0x3b89,	// (0x0001c0d7) lc0_stat_indi_pane_ParamLimits

0x3b89,	// (0x0001c0d7) lc0_stat_indi_pane

0x3b9e,	// (0x0001c0ec) ls0_title_pane_ParamLimits

0x3b9e,	// (0x0001c0ec) ls0_title_pane

0xb472,	// (0x000239c0) bg_popup_sub_pane_cp14_ParamLimits

0xf38e,	// (0x000278dc) list_uniindi_pane_ParamLimits

0xf39a,	// (0x000278e8) uniindi_top_pane_ParamLimits

0xf436,	// (0x00027984) list_single_uniindi_pane_g1_ParamLimits

0xf449,	// (0x00027997) list_single_uniindi_pane_t1_ParamLimits

0xaf60,	// (0x000234ae) lc0_stat_clock_pane_ParamLimits

0xaf60,	// (0x000234ae) lc0_stat_clock_pane

0xaf6d,	// (0x000234bb) lc0_stat_indi_pane_g1_ParamLimits

0xaf6d,	// (0x000234bb) lc0_stat_indi_pane_g1

0xaf7a,	// (0x000234c8) lc0_stat_indi_pane_g2_ParamLimits

0xaf7a,	// (0x000234c8) lc0_stat_indi_pane_g2

0x0001,

0xfe36,	// (0x00028384) lc0_stat_indi_pane_g_ParamLimits

0xfe36,	// (0x00028384) lc0_stat_indi_pane_g

0xaf87,	// (0x000234d5) lc0_uni_indicator_pane_ParamLimits

0xaf87,	// (0x000234d5) lc0_uni_indicator_pane

0xaf94,	// (0x000234e2) ls0_title_pane_g1_ParamLimits

0xaf94,	// (0x000234e2) ls0_title_pane_g1

0xafa8,	// (0x000234f6) ls0_title_pane_t1_ParamLimits

0xafa8,	// (0x000234f6) ls0_title_pane_t1

0xafd6,	// (0x00023524) lc0_uni_indicator_pane_g1_ParamLimits

0xafd6,	// (0x00023524) lc0_uni_indicator_pane_g1

0x1b2e,	// (0x0001a07c) lc0_stat_clock_pane_t1

0x8a30,	// (0x00020f7e) main_ai5_pane

0x1b3c,	// (0x0001a08a) ai5_sk_pane_ParamLimits

0x1b3c,	// (0x0001a08a) ai5_sk_pane

0xaffd,	// (0x0002354b) cell_ai5_widget_pane_ParamLimits

0xaffd,	// (0x0002354b) cell_ai5_widget_pane

0x1b49,	// (0x0001a097) aid_size_cell_widget_grid

0x1b5d,	// (0x0001a0ab) bg_ai5_widget_pane_ParamLimits

0x1b5d,	// (0x0001a0ab) bg_ai5_widget_pane

0x1ba7,	// (0x0001a0f5) cell_ai5_widget_pane_g2

0x1bb7,	// (0x0001a105) cell_ai5_widget_pane_g3

0x1bd6,	// (0x0001a124) cell_ai5_widget_pane_g4

0x1be2,	// (0x0001a130) cell_ai5_widget_pane_g5

0x1bee,	// (0x0001a13c) cell_ai5_widget_pane_g6

0x1bfa,	// (0x0001a148) cell_ai5_widget_pane_g7

0x1c42,	// (0x0001a190) cell_ai5_widget_pane_t1_ParamLimits

0x1c42,	// (0x0001a190) cell_ai5_widget_pane_t1

0x1c5f,	// (0x0001a1ad) cell_ai5_widget_pane_t2_ParamLimits

0x1c5f,	// (0x0001a1ad) cell_ai5_widget_pane_t2

0x1c77,	// (0x0001a1c5) cell_ai5_widget_pane_t3_ParamLimits

0x1c77,	// (0x0001a1c5) cell_ai5_widget_pane_t3

0x1c8f,	// (0x0001a1dd) cell_ai5_widget_pane_t4_ParamLimits

0x1c8f,	// (0x0001a1dd) cell_ai5_widget_pane_t4

0x1ca9,	// (0x0001a1f7) cell_ai5_widget_pane_t5_ParamLimits

0x1ca9,	// (0x0001a1f7) cell_ai5_widget_pane_t5

0x1cc8,	// (0x0001a216) cell_ai5_widget_pane_t6_ParamLimits

0x1cc8,	// (0x0001a216) cell_ai5_widget_pane_t6

0x1cda,	// (0x0001a228) cell_ai5_widget_pane_t7_ParamLimits

0x1cda,	// (0x0001a228) cell_ai5_widget_pane_t7

0x1cf3,	// (0x0001a241) cell_ai5_widget_pane_t8_ParamLimits

0x1cf3,	// (0x0001a241) cell_ai5_widget_pane_t8

0x0009,

0xfe50,	// (0x0002839e) cell_ai5_widget_pane_t_ParamLimits

0xfe50,	// (0x0002839e) cell_ai5_widget_pane_t

0x1d3f,	// (0x0001a28d) grid_ai5_widget_pane

0xb472,	// (0x000239c0) highlight_cell_ai5_widget_pane_ParamLimits

0xb472,	// (0x000239c0) highlight_cell_ai5_widget_pane

0xb067,	// (0x000235b5) ai5_sk_left_pane

0xb071,	// (0x000235bf) ai5_sk_middle_pane

0xb07b,	// (0x000235c9) ai5_sk_right_pane

0x1d57,	// (0x0001a2a5) bg_ai5_widget_pane_g1_ParamLimits

0x1d57,	// (0x0001a2a5) bg_ai5_widget_pane_g1

0x1d63,	// (0x0001a2b1) bg_ai5_widget_pane_g2_ParamLimits

0x1d63,	// (0x0001a2b1) bg_ai5_widget_pane_g2

0x1d6f,	// (0x0001a2bd) bg_ai5_widget_pane_g3_ParamLimits

0x1d6f,	// (0x0001a2bd) bg_ai5_widget_pane_g3

0x1d7b,	// (0x0001a2c9) bg_ai5_widget_pane_g4_ParamLimits

0x1d7b,	// (0x0001a2c9) bg_ai5_widget_pane_g4

0x1d87,	// (0x0001a2d5) bg_ai5_widget_pane_g5_ParamLimits

0x1d87,	// (0x0001a2d5) bg_ai5_widget_pane_g5

0x1d93,	// (0x0001a2e1) bg_ai5_widget_pane_g6_ParamLimits

0x1d93,	// (0x0001a2e1) bg_ai5_widget_pane_g6

0x1d9f,	// (0x0001a2ed) bg_ai5_widget_pane_g7_ParamLimits

0x1d9f,	// (0x0001a2ed) bg_ai5_widget_pane_g7

0x1dab,	// (0x0001a2f9) bg_ai5_widget_pane_g8_ParamLimits

0x1dab,	// (0x0001a2f9) bg_ai5_widget_pane_g8

0x1db7,	// (0x0001a305) bg_ai5_widget_pane_g9_ParamLimits

0x1db7,	// (0x0001a305) bg_ai5_widget_pane_g9

0x0008,

0xfe65,	// (0x000283b3) bg_ai5_widget_pane_g_ParamLimits

0xfe65,	// (0x000283b3) bg_ai5_widget_pane_g

0x1dea,	// (0x0001a338) cell_shortcut_ai5_widget_pane_ParamLimits

0x1dea,	// (0x0001a338) cell_shortcut_ai5_widget_pane

0x8c7d,	// (0x000211cb) bg_cell_shortcut_ai5_widget_pane

0x1dfb,	// (0x0001a349) cell_grid_ai5_widget_pane_g1

0x1e04,	// (0x0001a352) highlight_cell_shortcut_ai5_widget_pane

0xc3fe,	// (0x0002494c) ai5_sk_left_pane_g1

0x1e0c,	// (0x0001a35a) ai5_sk_left_pane_g2

0x1e14,	// (0x0001a362) ai5_sk_left_pane_g3

0x1e1c,	// (0x0001a36a) ai5_sk_left_pane_g4

0x0003,

0xfe78,	// (0x000283c6) ai5_sk_left_pane_g

0x1e24,	// (0x0001a372) ai5_sk_left_pane_t1

0xc3f6,	// (0x00024944) ai5_sk_right_pane_g1

0x1e32,	// (0x0001a380) ai5_sk_right_pane_g2

0x1e3a,	// (0x0001a388) ai5_sk_right_pane_g3

0x1e42,	// (0x0001a390) ai5_sk_right_pane_g4

0x0003,

0xfe81,	// (0x000283cf) ai5_sk_right_pane_g

0x1e4a,	// (0x0001a398) ai5_sk_right_pane_t1

0xc3f6,	// (0x00024944) ai5_sk_middle_pane_g1

0xc3fe,	// (0x0002494c) ai5_sk_middle_pane_g2

0xc416,	// (0x00024964) ai5_sk_middle_pane_g3

0x1e3a,	// (0x0001a388) ai5_sk_middle_pane_g4

0x1e14,	// (0x0001a362) ai5_sk_middle_pane_g5

0x1e58,	// (0x0001a3a6) ai5_sk_middle_pane_g6

0xb085,	// (0x000235d3) ai5_sk_middle_pane_g7

0x0006,

0xfe8a,	// (0x000283d8) ai5_sk_middle_pane_g

0x3a0b,	// (0x0001bf59) aid_touch_area_size_lc0_ParamLimits

0x3a0b,	// (0x0001bf59) aid_touch_area_size_lc0

0x6988,	// (0x0001eed6) cell_hwr_candidate_pane_t1_ParamLimits

0xc226,	// (0x00024774) aid_touch_navi_pane

0x3c91,	// (0x0001c1df) status_dt_navi_pane_ParamLimits

0x3c91,	// (0x0001c1df) status_dt_navi_pane

0x3ca9,	// (0x0001c1f7) status_dt_sta_pane_ParamLimits

0x3ca9,	// (0x0001c1f7) status_dt_sta_pane

0xb08d,	// (0x000235db) dt_sta_controll_pane

0xb09a,	// (0x000235e8) dt_sta_indi_pane

0xb0a7,	// (0x000235f5) dt_sta_title_pane

0x8d74,	// (0x000212c2) bg_dt_sta_indi_pane_ParamLimits

0x8d74,	// (0x000212c2) bg_dt_sta_indi_pane

0x1e60,	// (0x0001a3ae) dt_sta_battery_pane

0x1e68,	// (0x0001a3b6) dt_sta_indi_pane_g1

0x1e71,	// (0x0001a3bf) dt_sta_indi_pane_g2

0x1e7a,	// (0x0001a3c8) dt_sta_indi_pane_g3

0x0002,

0xfe99,	// (0x000283e7) dt_sta_indi_pane_g

0x1e83,	// (0x0001a3d1) dt_sta_signal_pane

0xb472,	// (0x000239c0) bg_dt_sta_title_pane_ParamLimits

0xb472,	// (0x000239c0) bg_dt_sta_title_pane

0x1e8c,	// (0x0001a3da) dt_sta_title_pane_g1

0x1e94,	// (0x0001a3e2) dt_sta_title_pane_t1_ParamLimits

0x1e94,	// (0x0001a3e2) dt_sta_title_pane_t1

0x8a30,	// (0x00020f7e) bg_dt_sta_control_pane

0x1ea9,	// (0x0001a3f7) dt_sta_controll_pane_g1

0x1eb2,	// (0x0001a400) bg_dt_sta_title_pane_g1

0x1ebb,	// (0x0001a409) bg_dt_sta_title_pane_g2

0x1ec4,	// (0x0001a412) bg_dt_sta_title_pane_g3

0x0002,

0xfea0,	// (0x000283ee) bg_dt_sta_title_pane_g

0xe2a2,	// (0x000267f0) bg_dt_sta_indi_pane_g1

0x1ecd,	// (0x0001a41b) dt_sta_signal_pane_g1

0x1ed5,	// (0x0001a423) dt_sta_signal_pane_g2

0x0001,

0xfea7,	// (0x000283f5) dt_sta_signal_pane_g

0x1edd,	// (0x0001a42b) dt_sta_battery_pane_g1

0x1ee6,	// (0x0001a434) dt_sta_battery_pane_t1

0xe2a2,	// (0x000267f0) bg_dt_sta_control_pane_g1

0xba1b,	// (0x00023f69) fep_china_uni_eep_pane

0xba23,	// (0x00023f71) fep_china_uni_entry_pane_ParamLimits

0xba33,	// (0x00023f81) popup_fep_china_uni_window_g1_ParamLimits

0xba43,	// (0x00023f91) popup_fep_china_uni_window_g2_ParamLimits

0xba43,	// (0x00023f91) popup_fep_china_uni_window_g2

0x0001,

0xf735,	// (0x00027c83) popup_fep_china_uni_window_g_ParamLimits

0xf735,	// (0x00027c83) popup_fep_china_uni_window_g

0x1ef5,	// (0x0001a443) fep_china_uni_eep_pane_g1

0x1efd,	// (0x0001a44b) fep_china_uni_eep_pane_t1

0x1b0f,	// (0x0001a05d) aid_touch_area_size_smil_player

0xc2d7,	// (0x00024825) lc0_clock_pane

0xc312,	// (0x00024860) status_pane_g5_ParamLimits

0xc312,	// (0x00024860) status_pane_g5

0x34e2,	// (0x0001ba30) popup_keymap_window

0xc2f0,	// (0x0002483e) status_icon_pane

0x1bb7,	// (0x0001a105) cell_ai5_widget_pane_g3_ParamLimits

0x1bd6,	// (0x0001a124) cell_ai5_widget_pane_g4_ParamLimits

0x1be2,	// (0x0001a130) cell_ai5_widget_pane_g5_ParamLimits

0x1c06,	// (0x0001a154) cell_ai5_widget_pane_g8_ParamLimits

0x1c06,	// (0x0001a154) cell_ai5_widget_pane_g8

0x1c1a,	// (0x0001a168) cell_ai5_widget_pane_g9_ParamLimits

0x1c1a,	// (0x0001a168) cell_ai5_widget_pane_g9

0x1c2e,	// (0x0001a17c) cell_ai5_widget_pane_g10_ParamLimits

0x1c2e,	// (0x0001a17c) cell_ai5_widget_pane_g10

0x1f0c,	// (0x0001a45a) status_icon_pane_g1

0x8a30,	// (0x00020f7e) bg_popup_sub_pane_cp13

0x1f14,	// (0x0001a462) popup_keymap_window_t1

0x330b,	// (0x0001b859) control_pane_g6_ParamLimits

0x330b,	// (0x0001b859) control_pane_g6

0x32fe,	// (0x0001b84c) control_pane_g7_ParamLimits

0x32fe,	// (0x0001b84c) control_pane_g7

0x32f1,	// (0x0001b83f) control_pane_g8_ParamLimits

0x32f1,	// (0x0001b83f) control_pane_g8

0xb08d,	// (0x000235db) dt_sta_controll_pane_ParamLimits

0xb09a,	// (0x000235e8) dt_sta_indi_pane_ParamLimits

0xb0a7,	// (0x000235f5) dt_sta_title_pane_ParamLimits

0x9184,	// (0x000216d2) aid_size_touch_scroll_bar_cale

0x5b0e,	// (0x0001e05c) popup_discreet_window_ParamLimits

0x5b0e,	// (0x0001e05c) popup_discreet_window

0x8b7a,	// (0x000210c8) popup_sk_window

0xc9c6,	// (0x00024f14) bg_popup_sub_pane_cp28_ParamLimits

0xc9c6,	// (0x00024f14) bg_popup_sub_pane_cp28

0x1f22,	// (0x0001a470) popup_discreet_window_g1_ParamLimits

0x1f22,	// (0x0001a470) popup_discreet_window_g1

0x1f42,	// (0x0001a490) popup_discreet_window_t1_ParamLimits

0x1f42,	// (0x0001a490) popup_discreet_window_t1

0x1f60,	// (0x0001a4ae) popup_discreet_window_t2_ParamLimits

0x1f60,	// (0x0001a4ae) popup_discreet_window_t2

0x0002,

0xfeac,	// (0x000283fa) popup_discreet_window_t_ParamLimits

0xfeac,	// (0x000283fa) popup_discreet_window_t

0x7455,	// (0x0001f9a3) popup_sk_window_g1

0x745f,	// (0x0001f9ad) popup_sk_window_g2

0x0001,

0xfeb3,	// (0x00028401) popup_sk_window_g

0x7469,	// (0x0001f9b7) popup_sk_window_t1

0x7477,	// (0x0001f9c5) popup_sk_window_t1_copy1

0x1ba7,	// (0x0001a0f5) cell_ai5_widget_pane_g2_ParamLimits

0x1d05,	// (0x0001a253) cell_ai5_widget_pane_t9_ParamLimits

0x1d05,	// (0x0001a253) cell_ai5_widget_pane_t9

0x8a30,	// (0x00020f7e) main_fep_fshwr2_pane

0xb0b9,	// (0x00023607) aid_fshwr2_btn_pane

0xb0c1,	// (0x0002360f) aid_fshwr2_syb_pane

0xb0c9,	// (0x00023617) aid_fshwr2_txt_pane

0xb0d1,	// (0x0002361f) fshwr2_func_candi_pane

0xb0db,	// (0x00023629) fshwr2_hwr_syb_pane

0xb0e9,	// (0x00023637) fshwr2_icf_pane

0x8a30,	// (0x00020f7e) fshwr2_icf_bg_pane

0xb0f3,	// (0x00023641) fshwr2_icf_pane_t1_ParamLimits

0xb0f3,	// (0x00023641) fshwr2_icf_pane_t1

0xe2a2,	// (0x000267f0) fshwr2_func_candi_pane_g1

0x1fc6,	// (0x0001a514) fshwr2_func_candi_row_pane_ParamLimits

0x1fc6,	// (0x0001a514) fshwr2_func_candi_row_pane

0xb10b,	// (0x00023659) cell_fshwr2_syb_pane_ParamLimits

0xb10b,	// (0x00023659) cell_fshwr2_syb_pane

0xe435,	// (0x00026983) fshwr2_hwr_syb_pane_g1_ParamLimits

0xe435,	// (0x00026983) fshwr2_hwr_syb_pane_g1

0x8a30,	// (0x00020f7e) bg_popup_call_pane_cp01

0x1fd7,	// (0x0001a525) fshwr2_func_candi_cell_pane_ParamLimits

0x1fd7,	// (0x0001a525) fshwr2_func_candi_cell_pane

0x2008,	// (0x0001a556) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x2008,	// (0x0001a556) fshwr2_func_candi_cell_bg_pane

0x2022,	// (0x0001a570) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x2022,	// (0x0001a570) fshwr2_func_candi_cell_pane_g1

0x204a,	// (0x0001a598) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x204a,	// (0x0001a598) fshwr2_func_candi_cell_pane_t1

0x8a30,	// (0x00020f7e) bg_button_pane_cp08

0xbe8a,	// (0x000243d8) cell_fshwr2_syb_bg_pane

0xb125,	// (0x00023673) cell_fshwr2_syb_bg_pane_g1

0xb12d,	// (0x0002367b) cell_fshwr2_syb_bg_pane_t1

0xb472,	// (0x000239c0) main_tmo_pane

0xd434,	// (0x00025982) uni_indicator_pane_g1_ParamLimits

0xd449,	// (0x00025997) uni_indicator_pane_g2_ParamLimits

0xd45f,	// (0x000259ad) uni_indicator_pane_g3_ParamLimits

0xd475,	// (0x000259c3) uni_indicator_pane_g4_ParamLimits

0xd475,	// (0x000259c3) uni_indicator_pane_g4

0xd489,	// (0x000259d7) uni_indicator_pane_g5_ParamLimits

0xd489,	// (0x000259d7) uni_indicator_pane_g5

0xd49d,	// (0x000259eb) uni_indicator_pane_g6_ParamLimits

0xd49d,	// (0x000259eb) uni_indicator_pane_g6

0xf92d,	// (0x00027e7b) uni_indicator_pane_g_ParamLimits

0xa06c,	// (0x000225ba) popup_tmo_note_window_ParamLimits

0xa06c,	// (0x000225ba) popup_tmo_note_window

0x8a30,	// (0x00020f7e) fshwr2_bg_pane

0x203b,	// (0x0001a589) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x203b,	// (0x0001a589) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeb8,	// (0x00028406) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeb8,	// (0x00028406) fshwr2_func_candi_cell_pane_g

0xe2a2,	// (0x000267f0) bg_popup_window_pane_cp01

0x205d,	// (0x0001a5ab) bg_popup_window_pane_g1_cp01

0x2066,	// (0x0001a5b4) bg_popup_window_pane_cp22_ParamLimits

0x2066,	// (0x0001a5b4) bg_popup_window_pane_cp22

0x2074,	// (0x0001a5c2) listscroll_tmo_link_pane_ParamLimits

0x2074,	// (0x0001a5c2) listscroll_tmo_link_pane

0x20b4,	// (0x0001a602) popup_tmo_note_window_g1_ParamLimits

0x20b4,	// (0x0001a602) popup_tmo_note_window_g1

0x20c1,	// (0x0001a60f) tmo_note_info_pane_ParamLimits

0x20c1,	// (0x0001a60f) tmo_note_info_pane

0xb13c,	// (0x0002368a) list_tmo_note_info_pane_g1_ParamLimits

0xb13c,	// (0x0002368a) list_tmo_note_info_pane_g1

0x20db,	// (0x0001a629) list_tmo_note_info_pane_g2_ParamLimits

0x20db,	// (0x0001a629) list_tmo_note_info_pane_g2

0x0001,

0xfebd,	// (0x0002840b) list_tmo_note_info_pane_g_ParamLimits

0xfebd,	// (0x0002840b) list_tmo_note_info_pane_g

0x20f7,	// (0x0001a645) list_tmo_note_info_text_pane_ParamLimits

0x20f7,	// (0x0001a645) list_tmo_note_info_text_pane

0x2139,	// (0x0001a687) list_tmo_link_pane

0x2146,	// (0x0001a694) scroll_pane_cp20

0x2153,	// (0x0001a6a1) list_single_tmo_link_pane_ParamLimits

0x2153,	// (0x0001a6a1) list_single_tmo_link_pane

0x2163,	// (0x0001a6b1) list_single_tmo_link_pane_t1

0x2171,	// (0x0001a6bf) list_tmo_note_info_text_pane_t1_ParamLimits

0x2171,	// (0x0001a6bf) list_tmo_note_info_text_pane_t1

0x2f46,	// (0x0001b494) aid_size_touch_scroll_bar_cp01_ParamLimits

0x2f46,	// (0x0001b494) aid_size_touch_scroll_bar_cp01

0x8627,	// (0x00020b75) aid_size_touch_slider_marker

0x8b6a,	// (0x000210b8) popup_settings_window_ParamLimits

0x8b6a,	// (0x000210b8) popup_settings_window

0x5072,	// (0x0001d5c0) popup_candi_list_indi_window

0xc226,	// (0x00024774) aid_touch_navi_pane_ParamLimits

0x6af4,	// (0x0001f042) rs_clock_indi_pane

0x6afd,	// (0x0001f04b) sctrl_sk_bottom_pane_ParamLimits

0x6b0e,	// (0x0001f05c) sctrl_sk_top_pane_ParamLimits

0x6bf5,	// (0x0001f143) popup_fep_tooltip_window

0x1b49,	// (0x0001a097) aid_size_cell_widget_grid_ParamLimits

0x1b9b,	// (0x0001a0e9) cell_ai5_widget_pane_g1_ParamLimits

0x1b9b,	// (0x0001a0e9) cell_ai5_widget_pane_g1

0x1bee,	// (0x0001a13c) cell_ai5_widget_pane_g6_ParamLimits

0x1bfa,	// (0x0001a148) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe3b,	// (0x00028389) cell_ai5_widget_pane_g_ParamLimits

0xfe3b,	// (0x00028389) cell_ai5_widget_pane_g

0x1d29,	// (0x0001a277) cell_ai5_widget_pane_t10_ParamLimits

0x1d29,	// (0x0001a277) cell_ai5_widget_pane_t10

0x1d3f,	// (0x0001a28d) grid_ai5_widget_pane_ParamLimits

0x1dc3,	// (0x0001a311) cell_contacts_ai5_widget_pane_ParamLimits

0x1dc3,	// (0x0001a311) cell_contacts_ai5_widget_pane

0x1f75,	// (0x0001a4c3) popup_discreet_window_t3_ParamLimits

0x1f75,	// (0x0001a4c3) popup_discreet_window_t3

0x1fb2,	// (0x0001a500) popup_fshwr2_char_preview_window_ParamLimits

0x1fb2,	// (0x0001a500) popup_fshwr2_char_preview_window

0xb153,	// (0x000236a1) tmo_note_info_pane_t1

0xb168,	// (0x000236b6) tmo_note_info_pane_t2

0xb17f,	// (0x000236cd) tmo_note_info_pane_t3

0x2115,	// (0x0001a663) tmo_note_info_pane_t4

0x2127,	// (0x0001a675) tmo_note_info_pane_t5

0x0004,

0xfec2,	// (0x00028410) tmo_note_info_pane_t

0x2139,	// (0x0001a687) list_tmo_link_pane_ParamLimits

0x2146,	// (0x0001a694) scroll_pane_cp20_ParamLimits

0x8a30,	// (0x00020f7e) bg_popup_fep_char_preview_window_cp01

0x218a,	// (0x0001a6d8) popup_fshwr2_char_preview_window_t1

0x2198,	// (0x0001a6e6) popup_candi_list_indi_window_g1

0x21a1,	// (0x0001a6ef) bg_cell_contacts_ai5_widget_pane

0x21ad,	// (0x0001a6fb) cell_contacts_ai5_widget_pane_g1

0x21c1,	// (0x0001a70f) cell_contacts_ai5_widget_pane_g2

0x21d0,	// (0x0001a71e) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfecd,	// (0x0002841b) cell_contacts_ai5_widget_pane_g

0x21e3,	// (0x0001a731) cell_contacts_ai5_widget_pane_t1

0xb472,	// (0x000239c0) highlight_cell_shortcut_ai5_widget_pane_cp01

0xb1f9,	// (0x00023747) settings_container_pane

0xbe8a,	// (0x000243d8) listscroll_set_pane_copy1

0xdc68,	// (0x000261b6) scroll_pane_cp121_copy1

0x21f5,	// (0x0001a743) set_content_pane_copy1

0xb205,	// (0x00023753) aid_height_set_list_copy1_ParamLimits

0xb205,	// (0x00023753) aid_height_set_list_copy1

0xcb35,	// (0x00025083) aid_size_parent_copy1_ParamLimits

0xcb35,	// (0x00025083) aid_size_parent_copy1

0xb211,	// (0x0002375f) button_value_adjust_pane_cp6_copy1_ParamLimits

0xb211,	// (0x0002375f) button_value_adjust_pane_cp6_copy1

0xb5ca,	// (0x00023b18) list_highlight_pane_cp2_copy1_ParamLimits

0xb5ca,	// (0x00023b18) list_highlight_pane_cp2_copy1

0xb225,	// (0x00023773) list_set_pane_copy1_ParamLimits

0xb225,	// (0x00023773) list_set_pane_copy1

0xb194,	// (0x000236e2) main_pane_set_t1_copy1_ParamLimits

0xb194,	// (0x000236e2) main_pane_set_t1_copy1

0xb1ce,	// (0x0002371c) main_pane_set_t2_copy1_ParamLimits

0xb1ce,	// (0x0002371c) main_pane_set_t2_copy1

0xb2d2,	// (0x00023820) main_pane_set_t3_copy1

0xb2e0,	// (0x0002382e) main_pane_set_t4_copy1

0xb1ed,	// (0x0002373b) set_content_pane_g1_copy1_ParamLimits

0xb1ed,	// (0x0002373b) set_content_pane_g1_copy1

0xb2ee,	// (0x0002383c) setting_code_pane_copy1

0x21fd,	// (0x0001a74b) setting_slider_graphic_pane_copy1

0x21fd,	// (0x0001a74b) setting_slider_pane_copy1

0x21fd,	// (0x0001a74b) setting_text_pane_copy1

0x2207,	// (0x0001a755) setting_volume_pane_copy1

0xb2f8,	// (0x00023846) settings_code_pane_cp2_copy1

0xb300,	// (0x0002384e) settings_code_pane_cp_copy1_ParamLimits

0xb300,	// (0x0002384e) settings_code_pane_cp_copy1

0xb314,	// (0x00023862) volume_set_pane_copy1

0xb31c,	// (0x0002386a) volume_set_pane_g10_copy1

0xb324,	// (0x00023872) volume_set_pane_g1_copy1

0xb32c,	// (0x0002387a) volume_set_pane_g2_copy1

0xb334,	// (0x00023882) volume_set_pane_g3_copy1

0xb33c,	// (0x0002388a) volume_set_pane_g4_copy1

0xb344,	// (0x00023892) volume_set_pane_g5_copy1

0xb34c,	// (0x0002389a) volume_set_pane_g6_copy1

0xb354,	// (0x000238a2) volume_set_pane_g7_copy1

0xb35c,	// (0x000238aa) volume_set_pane_g8_copy1

0xb364,	// (0x000238b2) volume_set_pane_g9_copy1

0x8c41,	// (0x0002118f) bg_set_opt_pane_cp_copy1_ParamLimits

0x8c41,	// (0x0002118f) bg_set_opt_pane_cp_copy1

0x2210,	// (0x0001a75e) setting_slider_pane_t1_copy1_ParamLimits

0x2210,	// (0x0001a75e) setting_slider_pane_t1_copy1

0xb36c,	// (0x000238ba) setting_slider_pane_t2_copy1_ParamLimits

0xb36c,	// (0x000238ba) setting_slider_pane_t2_copy1

0xb386,	// (0x000238d4) setting_slider_pane_t3_copy1_ParamLimits

0xb386,	// (0x000238d4) setting_slider_pane_t3_copy1

0xb39e,	// (0x000238ec) slider_set_pane_copy1_ParamLimits

0xb39e,	// (0x000238ec) slider_set_pane_copy1

0xb4d9,	// (0x00023a27) set_opt_bg_pane_g1_copy2

0xb4e1,	// (0x00023a2f) set_opt_bg_pane_g2_copy2

0x222e,	// (0x0001a77c) set_opt_bg_pane_g3_copy2

0xb4f1,	// (0x00023a3f) set_opt_bg_pane_g4_copy2

0xb4f9,	// (0x00023a47) set_opt_bg_pane_g5_copy2

0xb501,	// (0x00023a4f) set_opt_bg_pane_g6_copy2

0xb3b4,	// (0x00023902) set_opt_bg_pane_g7_copy2

0x2238,	// (0x0001a786) set_opt_bg_pane_g8_copy2

0x2242,	// (0x0001a790) set_opt_bg_pane_g9_copy2

0x7785,	// (0x0001fcd3) aid_size_touch_slider_mark_copy1_ParamLimits

0x7785,	// (0x0001fcd3) aid_size_touch_slider_mark_copy1

0x224c,	// (0x0001a79a) slider_set_pane_g1_copy1

0x7799,	// (0x0001fce7) slider_set_pane_g2_copy1

0x65e4,	// (0x0001eb32) slider_set_pane_g3_copy1_ParamLimits

0x65e4,	// (0x0001eb32) slider_set_pane_g3_copy1

0x65f8,	// (0x0001eb46) slider_set_pane_g4_copy1_ParamLimits

0x65f8,	// (0x0001eb46) slider_set_pane_g4_copy1

0x6610,	// (0x0001eb5e) slider_set_pane_g5_copy1_ParamLimits

0x6610,	// (0x0001eb5e) slider_set_pane_g5_copy1

0x65e4,	// (0x0001eb32) slider_set_pane_g6_copy1_ParamLimits

0x65e4,	// (0x0001eb32) slider_set_pane_g6_copy1

0xb3bc,	// (0x0002390a) slider_set_pane_g7_copy1_ParamLimits

0xb3bc,	// (0x0002390a) slider_set_pane_g7_copy1

0x8b2a,	// (0x00021078) bg_set_opt_pane_cp2_copy1

0x2255,	// (0x0001a7a3) setting_slider_graphic_pane_g1_copy1

0xb3d2,	// (0x00023920) setting_slider_graphic_pane_t1_copy1

0xb3e2,	// (0x00023930) setting_slider_graphic_pane_t2_copy1

0xb3f2,	// (0x00023940) slider_set_pane_cp_copy1

0x2266,	// (0x0001a7b4) input_focus_pane_cp1_copy1

0x226f,	// (0x0001a7bd) list_set_text_pane_copy1

0x2277,	// (0x0001a7c5) setting_text_pane_g1_copy1

0x8a0e,	// (0x00020f5c) set_text_pane_t1_copy1

0x2266,	// (0x0001a7b4) input_focus_pane_cp2_copy1

0x2277,	// (0x0001a7c5) setting_code_pane_g1_copy1

0xb3fa,	// (0x00023948) setting_code_pane_t1_copy1

0x320e,	// (0x0001b75c) list_set_graphic_pane_copy1

0x8b2a,	// (0x00021078) bg_set_opt_pane_cp4_copy1

0x3220,	// (0x0001b76e) list_set_graphic_pane_g1_copy1_ParamLimits

0x3220,	// (0x0001b76e) list_set_graphic_pane_g1_copy1

0xb408,	// (0x00023956) list_set_graphic_pane_g2_copy1

0x3238,	// (0x0001b786) list_set_graphic_pane_t1_copy1_ParamLimits

0x3238,	// (0x0001b786) list_set_graphic_pane_t1_copy1

0xe2a2,	// (0x000267f0) rs_clock_indi_pane_g1

0x2280,	// (0x0001a7ce) rs_clock_indi_pane_t1

0x228e,	// (0x0001a7dc) rs_indi_pane

0x2296,	// (0x0001a7e4) rs_indi_pane_g1

0x229f,	// (0x0001a7ed) rs_indi_pane_g2

0x22a8,	// (0x0001a7f6) rs_indi_pane_g3

0x0002,

0xfed4,	// (0x00028422) rs_indi_pane_g

0xbe8a,	// (0x000243d8) bg_popup_preview_window_pane_cp03

0x22b1,	// (0x0001a7ff) popup_fep_tooltip_window_t1

0xeb8b,	// (0x000270d9) popup_note2_window_g2_ParamLimits

0xeb8b,	// (0x000270d9) popup_note2_window_g2

0x0001,

0xfc6d,	// (0x000281bb) popup_note2_window_g_ParamLimits

0xfc6d,	// (0x000281bb) popup_note2_window_g

0xf012,	// (0x00027560) bg_popup_sub_pane_cp11_ParamLimits

0xf01f,	// (0x0002756d) cell_ai3_links_pane_g1_ParamLimits

0xf036,	// (0x00027584) cell_ai3_links_pane_t1

0x8a0e,	// (0x00020f5c) set_text_pane_t1_copy1_ParamLimits

0xbd9b,	// (0x000242e9) cell_graphic_popup_pane_cp2_ParamLimits

0xbd9b,	// (0x000242e9) cell_graphic_popup_pane_cp2

0x22bf,	// (0x0001a80d) cell_graphic_popup_pane_g1_cp2

0x8f97,	// (0x000214e5) cell_graphic_popup_pane_g2_cp2

0x22c7,	// (0x0001a815) cell_graphic_popup_pane_g3_cp2

0x22cf,	// (0x0001a81d) cell_graphic_popup_pane_t2_cp2

0x8fa8,	// (0x000214f6) grid_highlight_pane_cp3_cp2

0xb774,	// (0x00023cc2) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xb472,	// (0x000239c0) main_tmo_pane_ParamLimits

0xa060,	// (0x000225ae) popup_tmo_big_image_note_window

0x1b8b,	// (0x0001a0d9) cell_ai5_widget_list_pane

0x1b93,	// (0x0001a0e1) cell_ai5_widget_lrg_icon_pane

0xb153,	// (0x000236a1) tmo_note_info_pane_t1_ParamLimits

0xb168,	// (0x000236b6) tmo_note_info_pane_t2_ParamLimits

0xb17f,	// (0x000236cd) tmo_note_info_pane_t3_ParamLimits

0x2115,	// (0x0001a663) tmo_note_info_pane_t4_ParamLimits

0x2127,	// (0x0001a675) tmo_note_info_pane_t5_ParamLimits

0xfec2,	// (0x00028410) tmo_note_info_pane_t_ParamLimits

0xb1f9,	// (0x00023747) settings_container_pane_ParamLimits

0x225e,	// (0x0001a7ac) indicator_popup_pane_cp5

0x225e,	// (0x0001a7ac) indicator_popup_pane_cp6

0x320e,	// (0x0001b75c) list_set_graphic_pane_copy1_ParamLimits

0x8a30,	// (0x00020f7e) bg_popup_window_pane_cp23

0x22dd,	// (0x0001a82b) popup_tmo_big_image_note_window_g1

0x22e7,	// (0x0001a835) popup_tmo_big_image_note_window_t1

0x22f7,	// (0x0001a845) popup_tmo_big_image_note_window_t2

0x2307,	// (0x0001a855) popup_tmo_big_image_note_window_t3

0x0002,

0xfedb,	// (0x00028429) popup_tmo_big_image_note_window_t

0x2317,	// (0x0001a865) cell_ai5_widget_lrg_icon_pane_g1

0x231f,	// (0x0001a86d) cell_ai5_widget_lrg_icon_pane_t1

0x232d,	// (0x0001a87b) cell_ai5_widget_list_row_pane_ParamLimits

0x232d,	// (0x0001a87b) cell_ai5_widget_list_row_pane

0x2346,	// (0x0001a894) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x2346,	// (0x0001a894) cell_ai5_widget_list_row_pane_g1

0x2353,	// (0x0001a8a1) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x2353,	// (0x0001a8a1) cell_ai5_widget_list_row_pane_t1

0x236b,	// (0x0001a8b9) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x236b,	// (0x0001a8b9) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfee2,	// (0x00028430) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfee2,	// (0x00028430) cell_ai5_widget_list_row_pane_t

0x8a30,	// (0x00020f7e) main_fep_vtchi_ss_pane

0x237d,	// (0x0001a8cb) popup_fep_char_pre_window

0x2385,	// (0x0001a8d3) popup_fep_ituss_window

0x239f,	// (0x0001a8ed) popup_fep_vkbss_window

0x23bd,	// (0x0001a90b) grid_vkbss_keypad_pane_ParamLimits

0x23bd,	// (0x0001a90b) grid_vkbss_keypad_pane

0x23cd,	// (0x0001a91b) ituss_keypad_pane

0x23e3,	// (0x0001a931) aid_vkbss_key_offset_ParamLimits

0x23e3,	// (0x0001a931) aid_vkbss_key_offset

0x23ef,	// (0x0001a93d) cell_vkbss_key_pane_ParamLimits

0x23ef,	// (0x0001a93d) cell_vkbss_key_pane

0x2405,	// (0x0001a953) bg_cell_vkbss_key_g1_ParamLimits

0x2405,	// (0x0001a953) bg_cell_vkbss_key_g1

0x2411,	// (0x0001a95f) cell_vkbss_key_3p_pane_ParamLimits

0x2411,	// (0x0001a95f) cell_vkbss_key_3p_pane

0x242b,	// (0x0001a979) cell_vkbss_key_g1_ParamLimits

0x242b,	// (0x0001a979) cell_vkbss_key_g1

0x2445,	// (0x0001a993) cell_vkbss_key_t1_ParamLimits

0x2445,	// (0x0001a993) cell_vkbss_key_t1

0x2470,	// (0x0001a9be) cell_ituss_key_pane_ParamLimits

0x2470,	// (0x0001a9be) cell_ituss_key_pane

0x2480,	// (0x0001a9ce) bg_cell_ituss_key_g1_ParamLimits

0x2480,	// (0x0001a9ce) bg_cell_ituss_key_g1

0x248c,	// (0x0001a9da) cell_ituss_key_pane_g1_ParamLimits

0x248c,	// (0x0001a9da) cell_ituss_key_pane_g1

0x2498,	// (0x0001a9e6) cell_ituss_key_pane_g2_ParamLimits

0x2498,	// (0x0001a9e6) cell_ituss_key_pane_g2

0x0001,

0xfee7,	// (0x00028435) cell_ituss_key_pane_g_ParamLimits

0xfee7,	// (0x00028435) cell_ituss_key_pane_g

0x24b1,	// (0x0001a9ff) cell_ituss_key_t1_ParamLimits

0x24b1,	// (0x0001a9ff) cell_ituss_key_t1

0x24df,	// (0x0001aa2d) cell_ituss_key_t2_ParamLimits

0x24df,	// (0x0001aa2d) cell_ituss_key_t2

0x2510,	// (0x0001aa5e) cell_ituss_key_t3_ParamLimits

0x2510,	// (0x0001aa5e) cell_ituss_key_t3

0x2541,	// (0x0001aa8f) cell_ituss_key_t4_ParamLimits

0x2541,	// (0x0001aa8f) cell_ituss_key_t4

0x0003,

0xfeec,	// (0x0002843a) cell_ituss_key_t_ParamLimits

0xfeec,	// (0x0002843a) cell_ituss_key_t

0x2572,	// (0x0001aac0) cell_vkbss_key_3p_pane_g1

0x257a,	// (0x0001aac8) cell_vkbss_key_3p_pane_g2

0x2582,	// (0x0001aad0) cell_vkbss_key_3p_pane_g3

0x0002,

0xfef5,	// (0x00028443) cell_vkbss_key_3p_pane_g

0x8a30,	// (0x00020f7e) bg_popup_fep_char_preview_window_cp02

0x258a,	// (0x0001aad8) popup_fep_char_pre_window_t1

0xb05d,	// (0x000235ab) main_ai5_sk_pane

0x21a1,	// (0x0001a6ef) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x21ad,	// (0x0001a6fb) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x21c1,	// (0x0001a70f) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x21d0,	// (0x0001a71e) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfecd,	// (0x0002841b) cell_contacts_ai5_widget_pane_g_ParamLimits

0x21e3,	// (0x0001a731) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xb472,	// (0x000239c0) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xb410,	// (0x0002395e) main_ai5_sk_pane_g1

0xc7ff,	// (0x00024d4d) popup_query_code_window_g1

0x2394,	// (0x0001a8e2) popup_fep_vkb_icf_pane

0x23a8,	// (0x0001a8f6) popup_fep_vtchi_icf_pane

0xb472,	// (0x000239c0) bg_icf_pane

0x23cd,	// (0x0001a91b) list_vkb_icf_pane

0xb472,	// (0x000239c0) bg_icf_pane_cp01

0x25b4,	// (0x0001ab02) vtchi_icf_list_pane

0x25c4,	// (0x0001ab12) list_vkb_icf_pane_t1_ParamLimits

0x25c4,	// (0x0001ab12) list_vkb_icf_pane_t1

0x25db,	// (0x0001ab29) vtchi_icf_list_pane_t1_ParamLimits

0x25db,	// (0x0001ab29) vtchi_icf_list_pane_t1

0x2385,	// (0x0001a8d3) popup_fep_ituss_window_ParamLimits

0x23a8,	// (0x0001a8f6) popup_fep_vtchi_icf_pane_ParamLimits

0x23cd,	// (0x0001a91b) ituss_keypad_pane_ParamLimits

0x23d9,	// (0x0001a927) ituss_sks_pane

0xb472,	// (0x000239c0) bg_icf_pane_ParamLimits

0x2599,	// (0x0001aae7) icf_edit_indi_pane_ParamLimits

0x2599,	// (0x0001aae7) icf_edit_indi_pane

0x23cd,	// (0x0001a91b) list_vkb_icf_pane_ParamLimits

0xb472,	// (0x000239c0) bg_icf_pane_cp01_ParamLimits

0x25a8,	// (0x0001aaf6) icf_edit_indi_pane_cp01_ParamLimits

0x25a8,	// (0x0001aaf6) icf_edit_indi_pane_cp01

0x25bc,	// (0x0001ab0a) vtchi_query_pane

0xe435,	// (0x00026983) icf_edit_indi_pane_g1_ParamLimits

0xe435,	// (0x00026983) icf_edit_indi_pane_g1

0x25f7,	// (0x0001ab45) icf_edit_indi_pane_g2_ParamLimits

0x25f7,	// (0x0001ab45) icf_edit_indi_pane_g2

0x0001,

0xfefc,	// (0x0002844a) icf_edit_indi_pane_g_ParamLimits

0xfefc,	// (0x0002844a) icf_edit_indi_pane_g

0x2603,	// (0x0001ab51) icf_edit_indi_pane_t1

0x2611,	// (0x0001ab5f) bg_input_focus_pane_cp042

0x917b,	// (0x000216c9) vtchi_button_pane

0x261a,	// (0x0001ab68) vtchi_query_pane_t1

0x2628,	// (0x0001ab76) vtchi_query_pane_t2

0x2636,	// (0x0001ab84) vtchi_query_pane_t3

0x0002,

0xff01,	// (0x0002844f) vtchi_query_pane_t

0x8a30,	// (0x00020f7e) bg_button_pane_cp13

0x2644,	// (0x0001ab92) vtchi_button_pane_g1

0x264c,	// (0x0001ab9a) ituss_sks_pane_g1

0x2657,	// (0x0001aba5) ituss_sks_pane_g2

0x0001,

0xff08,	// (0x00028456) ituss_sks_pane_g

0x265f,	// (0x0001abad) ituss_sks_pane_t1

0x266d,	// (0x0001abbb) ituss_sks_pane_t2

0x0001,

0xff0d,	// (0x0002845b) ituss_sks_pane_t

0xdf4d,	// (0x0002649b) indicator_nsta_pane_cp_g1

0xdf56,	// (0x000264a4) indicator_nsta_pane_cp_g2

0xdf5e,	// (0x000264ac) indicator_nsta_pane_cp_g3

0xdf66,	// (0x000264b4) indicator_nsta_pane_cp_g4

0xdf6e,	// (0x000264bc) indicator_nsta_pane_cp_g5

0xdf76,	// (0x000264c4) indicator_nsta_pane_cp_g6

0x0005,

0xfab7,	// (0x00028005) indicator_nsta_pane_cp_g

0xae03,	// (0x00023351) cell_graphic2_pane_t2_ParamLimits

0xae03,	// (0x00023351) cell_graphic2_pane_t2

0x0001,

0xfdc4,	// (0x00028312) cell_graphic2_pane_t_ParamLimits

0xfdc4,	// (0x00028312) cell_graphic2_pane_t

0xae39,	// (0x00023387) cell_graphic2_control_pane_t1

0x3120,	// (0x0001b66e) signal_pane_g3_ParamLimits

0x3120,	// (0x0001b66e) signal_pane_g3

0x3134,	// (0x0001b682) signal_pane_g4_ParamLimits

0x3134,	// (0x0001b682) signal_pane_g4
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

} // end of namespace AknLayoutScalable_Elaf_phl_av_qhd_lsc_tch_Small

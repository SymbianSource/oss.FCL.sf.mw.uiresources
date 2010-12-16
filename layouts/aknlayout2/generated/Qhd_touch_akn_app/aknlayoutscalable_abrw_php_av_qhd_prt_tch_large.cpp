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

#include "aknlayoutscalable_abrw_php_av_qhd_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_php_av_qhd_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0004d593 };

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
0x77d5,	// (0x00054d68) Screen

0x77e1,	// (0x00054d74) application_window_ParamLimits

0x77e1,	// (0x00054d74) application_window

0x19e0,	// (0x0004ef73) screen_g1

0x451b,	// (0x00051aae) area_bottom_pane_ParamLimits

0x451b,	// (0x00051aae) area_bottom_pane

0x45e1,	// (0x00051b74) area_top_pane_ParamLimits

0x45e1,	// (0x00051b74) area_top_pane

0x467f,	// (0x00051c12) main_pane_ParamLimits

0x467f,	// (0x00051c12) main_pane

0x19ea,	// (0x0004ef7d) misc_graphics

0x9585,	// (0x00056b18) battery_pane_ParamLimits

0x9585,	// (0x00056b18) battery_pane

0xa267,	// (0x000577fa) bg_status_flat_pane_g8

0xa26f,	// (0x00057802) bg_status_flat_pane_g9

0x964d,	// (0x00056be0) context_pane_ParamLimits

0x964d,	// (0x00056be0) context_pane

0x9763,	// (0x00056cf6) navi_pane_ParamLimits

0x9763,	// (0x00056cf6) navi_pane

0x97e7,	// (0x00056d7a) signal_pane_ParamLimits

0x97e7,	// (0x00056d7a) signal_pane

0x0008,

0xf852,	// (0x0005cde5) bg_status_flat_pane_g

0x9854,	// (0x00056de7) status_pane_g1_ParamLimits

0x9854,	// (0x00056de7) status_pane_g1

0x9868,	// (0x00056dfb) status_pane_g2_ParamLimits

0x9868,	// (0x00056dfb) status_pane_g2

0x9874,	// (0x00056e07) status_pane_g3_ParamLimits

0x9874,	// (0x00056e07) status_pane_g3

0x0004,

0xf77e,	// (0x0005cd11) status_pane_g_ParamLimits

0xf77e,	// (0x0005cd11) status_pane_g

0x98a8,	// (0x00056e3b) title_pane_ParamLimits

0x98a8,	// (0x00056e3b) title_pane

0x98e5,	// (0x00056e78) uni_indicator_pane_ParamLimits

0x98e5,	// (0x00056e78) uni_indicator_pane

0x94b5,	// (0x00056a48) bg_list_pane_ParamLimits

0x94b5,	// (0x00056a48) bg_list_pane

0x82c1,	// (0x00055854) find_pane

0x94d5,	// (0x00056a68) listscroll_app_pane_ParamLimits

0x94d5,	// (0x00056a68) listscroll_app_pane

0x94e1,	// (0x00056a74) listscroll_form_pane

0x55bd,	// (0x00052b50) listscroll_gen_pane_ParamLimits

0x55bd,	// (0x00052b50) listscroll_gen_pane

0x55d1,	// (0x00052b64) listscroll_set_pane

0x86eb,	// (0x00055c7e) main_idle_act_pane

0x91b1,	// (0x00056744) main_idle_trad_pane

0x91b1,	// (0x00056744) main_list_empty_pane

0x94d5,	// (0x00056a68) main_midp_pane

0x94fb,	// (0x00056a8e) main_pane_g1_ParamLimits

0x94fb,	// (0x00056a8e) main_pane_g1

0x55e7,	// (0x00052b7a) popup_ai_message_window_ParamLimits

0x55e7,	// (0x00052b7a) popup_ai_message_window

0x5695,	// (0x00052c28) popup_fep_china_uni_window_ParamLimits

0x5695,	// (0x00052c28) popup_fep_china_uni_window

0x56f1,	// (0x00052c84) popup_fep_japan_candidate_window_ParamLimits

0x56f1,	// (0x00052c84) popup_fep_japan_candidate_window

0x5711,	// (0x00052ca4) popup_fep_japan_predictive_window_ParamLimits

0x5711,	// (0x00052ca4) popup_fep_japan_predictive_window

0x5741,	// (0x00052cd4) popup_find_window

0x574e,	// (0x00052ce1) popup_grid_graphic_window_ParamLimits

0x574e,	// (0x00052ce1) popup_grid_graphic_window

0x577a,	// (0x00052d0d) popup_large_graphic_colour_window

0x57a0,	// (0x00052d33) popup_menu_window_ParamLimits

0x57a0,	// (0x00052d33) popup_menu_window

0x5958,	// (0x00052eeb) popup_note_image_window

0x5944,	// (0x00052ed7) popup_note_wait_window_ParamLimits

0x5944,	// (0x00052ed7) popup_note_wait_window

0x5944,	// (0x00052ed7) popup_note_window_ParamLimits

0x5944,	// (0x00052ed7) popup_note_window

0x59ae,	// (0x00052f41) popup_query_code_window_ParamLimits

0x59ae,	// (0x00052f41) popup_query_code_window

0x59c2,	// (0x00052f55) popup_query_data_code_window_ParamLimits

0x59c2,	// (0x00052f55) popup_query_data_code_window

0x59df,	// (0x00052f72) popup_query_data_window_ParamLimits

0x59df,	// (0x00052f72) popup_query_data_window

0x59fb,	// (0x00052f8e) popup_query_sat_info_window_ParamLimits

0x59fb,	// (0x00052f8e) popup_query_sat_info_window

0x5a34,	// (0x00052fc7) popup_snote_single_graphic_window_ParamLimits

0x5a34,	// (0x00052fc7) popup_snote_single_graphic_window

0x5a34,	// (0x00052fc7) popup_snote_single_text_window_ParamLimits

0x5a34,	// (0x00052fc7) popup_snote_single_text_window

0x5a49,	// (0x00052fdc) popup_sub_window_general

0x5b79,	// (0x0005310c) popup_window_general_ParamLimits

0x5b79,	// (0x0005310c) popup_window_general

0x9509,	// (0x00056a9c) power_save_pane

0x544b,	// (0x000529de) control_pane_g1_ParamLimits

0x544b,	// (0x000529de) control_pane_g1

0x5472,	// (0x00052a05) control_pane_g2_ParamLimits

0x5472,	// (0x00052a05) control_pane_g2

0x9478,	// (0x00056a0b) control_pane_g3_ParamLimits

0x9478,	// (0x00056a0b) control_pane_g3

0x0007,

0xf766,	// (0x0005ccf9) control_pane_g_ParamLimits

0xf766,	// (0x0005ccf9) control_pane_g

0x54bc,	// (0x00052a4f) control_pane_t1_ParamLimits

0x54bc,	// (0x00052a4f) control_pane_t1

0x5512,	// (0x00052aa5) control_pane_t2_ParamLimits

0x5512,	// (0x00052aa5) control_pane_t2

0x0002,

0xf777,	// (0x0005cd0a) control_pane_t_ParamLimits

0xf777,	// (0x0005cd0a) control_pane_t

0x939d,	// (0x00056930) navi_navi_volume_pane_cp1

0x93a5,	// (0x00056938) status_small_icon_pane

0x93ad,	// (0x00056940) status_small_pane_g1_ParamLimits

0x93ad,	// (0x00056940) status_small_pane_g1

0x93e1,	// (0x00056974) status_small_pane_g2_ParamLimits

0x93e1,	// (0x00056974) status_small_pane_g2

0x93ed,	// (0x00056980) status_small_pane_g3_ParamLimits

0x93ed,	// (0x00056980) status_small_pane_g3

0x93f9,	// (0x0005698c) status_small_pane_g4_ParamLimits

0x93f9,	// (0x0005698c) status_small_pane_g4

0x9405,	// (0x00056998) status_small_pane_g5_ParamLimits

0x9405,	// (0x00056998) status_small_pane_g5

0x9413,	// (0x000569a6) status_small_pane_g6_ParamLimits

0x9413,	// (0x000569a6) status_small_pane_g6

0x0007,

0xf755,	// (0x0005cce8) status_small_pane_g_ParamLimits

0xf755,	// (0x0005cce8) status_small_pane_g

0x9442,	// (0x000569d5) status_small_pane_t1

0x9464,	// (0x000569f7) status_small_wait_pane_ParamLimits

0x9464,	// (0x000569f7) status_small_wait_pane

0x8c2a,	// (0x000561bd) aid_levels_signal_ParamLimits

0x8c2a,	// (0x000561bd) aid_levels_signal

0x8c3c,	// (0x000561cf) signal_pane_g1_ParamLimits

0x8c3c,	// (0x000561cf) signal_pane_g1

0x8c51,	// (0x000561e4) signal_pane_g2_ParamLimits

0x8c51,	// (0x000561e4) signal_pane_g2

0x0003,

0xf6e6,	// (0x0005cc79) signal_pane_g_ParamLimits

0xf6e6,	// (0x0005cc79) signal_pane_g

0x8c8c,	// (0x0005621f) context_pane_g1

0x77f1,	// (0x00054d84) title_pane_g1

0x7827,	// (0x00054dba) title_pane_t1

0x788f,	// (0x00054e22) title_pane_t2

0x78b5,	// (0x00054e48) title_pane_t3

0x0002,

0xf530,	// (0x0005cac3) title_pane_t

0x98fd,	// (0x00056e90) aid_levels_battery_ParamLimits

0x98fd,	// (0x00056e90) aid_levels_battery

0x9911,	// (0x00056ea4) battery_pane_g1_ParamLimits

0x9911,	// (0x00056ea4) battery_pane_g1

0x9927,	// (0x00056eba) battery_pane_g2_ParamLimits

0x9927,	// (0x00056eba) battery_pane_g2

0x0001,

0xf789,	// (0x0005cd1c) battery_pane_g_ParamLimits

0xf789,	// (0x0005cd1c) battery_pane_g

0xab9d,	// (0x00058130) uni_indicator_pane_g1

0xabb3,	// (0x00058146) uni_indicator_pane_g2

0xabc9,	// (0x0005815c) uni_indicator_pane_g3

0x0005,

0xf8fa,	// (0x0005ce8d) uni_indicator_pane_g

0x9022,	// (0x000565b5) navi_icon_pane_ParamLimits

0x9022,	// (0x000565b5) navi_icon_pane

0x8f6b,	// (0x000564fe) navi_midp_pane

0x903e,	// (0x000565d1) navi_navi_pane

0x9048,	// (0x000565db) navi_text_pane_ParamLimits

0x9048,	// (0x000565db) navi_text_pane

0x19e0,	// (0x0004ef73) status_small_wait_pane_g1

0x7d0a,	// (0x0005529d) status_small_wait_pane_g2

0x0001,

0xf8f5,	// (0x0005ce88) status_small_wait_pane_g

0xa8c2,	// (0x00057e55) navi_navi_icon_text_pane

0xa8ca,	// (0x00057e5d) navi_navi_pane_g1_ParamLimits

0xa8ca,	// (0x00057e5d) navi_navi_pane_g1

0xa8dc,	// (0x00057e6f) navi_navi_pane_g2_ParamLimits

0xa8dc,	// (0x00057e6f) navi_navi_pane_g2

0x0001,

0xf8c3,	// (0x0005ce56) navi_navi_pane_g_ParamLimits

0xf8c3,	// (0x0005ce56) navi_navi_pane_g

0xa8ee,	// (0x00057e81) navi_navi_tabs_pane

0xa8f7,	// (0x00057e8a) navi_navi_text_pane

0xa8c2,	// (0x00057e55) navi_navi_volume_pane

0xa89e,	// (0x00057e31) navi_text_pane_t1

0xa892,	// (0x00057e25) navi_icon_pane_g1

0xa7e5,	// (0x00057d78) navi_navi_text_pane_t1

0x5f0c,	// (0x0005349f) navi_navi_volume_pane_g1

0x5f14,	// (0x000534a7) volume_small_pane

0xa74b,	// (0x00057cde) navi_navi_icon_text_pane_g1

0xa753,	// (0x00057ce6) navi_navi_icon_text_pane_t1

0x903e,	// (0x000565d1) navi_tabs_2_long_pane

0x903e,	// (0x000565d1) navi_tabs_2_pane

0x903e,	// (0x000565d1) navi_tabs_3_long_pane

0x903e,	// (0x000565d1) navi_tabs_3_pane

0x903e,	// (0x000565d1) navi_tabs_4_pane

0x5eec,	// (0x0005347f) tabs_2_active_pane_ParamLimits

0x5eec,	// (0x0005347f) tabs_2_active_pane

0x5efc,	// (0x0005348f) tabs_2_passive_pane_ParamLimits

0x5efc,	// (0x0005348f) tabs_2_passive_pane

0x5eba,	// (0x0005344d) tabs_3_active_pane_ParamLimits

0x5eba,	// (0x0005344d) tabs_3_active_pane

0x5eca,	// (0x0005345d) tabs_3_passive_pane_ParamLimits

0x5eca,	// (0x0005345d) tabs_3_passive_pane

0x5edb,	// (0x0005346e) tabs_3_passive_pane_cp_ParamLimits

0x5edb,	// (0x0005346e) tabs_3_passive_pane_cp

0x5e76,	// (0x00053409) tabs_4_active_pane_ParamLimits

0x5e76,	// (0x00053409) tabs_4_active_pane

0x5e87,	// (0x0005341a) tabs_4_passive_pane_ParamLimits

0x5e87,	// (0x0005341a) tabs_4_passive_pane

0x5e98,	// (0x0005342b) tabs_4_passive_pane_cp_ParamLimits

0x5e98,	// (0x0005342b) tabs_4_passive_pane_cp

0x5ea9,	// (0x0005343c) tabs_4_passive_pane_cp2_ParamLimits

0x5ea9,	// (0x0005343c) tabs_4_passive_pane_cp2

0x5e52,	// (0x000533e5) tabs_2_long_active_pane_ParamLimits

0x5e52,	// (0x000533e5) tabs_2_long_active_pane

0x5e64,	// (0x000533f7) tabs_2_long_passive_pane_ParamLimits

0x5e64,	// (0x000533f7) tabs_2_long_passive_pane

0x5e13,	// (0x000533a6) tabs_3_long_active_pane_ParamLimits

0x5e13,	// (0x000533a6) tabs_3_long_active_pane

0x5e26,	// (0x000533b9) tabs_3_long_passive_pane_ParamLimits

0x5e26,	// (0x000533b9) tabs_3_long_passive_pane

0x5e3f,	// (0x000533d2) tabs_3_long_passive_pane_cp_ParamLimits

0x5e3f,	// (0x000533d2) tabs_3_long_passive_pane_cp

0x5db9,	// (0x0005334c) volume_small_pane_g1

0x5dc2,	// (0x00053355) volume_small_pane_g2

0x5dcb,	// (0x0005335e) volume_small_pane_g3

0x5dd4,	// (0x00053367) volume_small_pane_g4

0x5ddd,	// (0x00053370) volume_small_pane_g5

0x5de6,	// (0x00053379) volume_small_pane_g6

0x5def,	// (0x00053382) volume_small_pane_g7

0x5df8,	// (0x0005338b) volume_small_pane_g8

0x5e01,	// (0x00053394) volume_small_pane_g9

0x5e0a,	// (0x0005339d) volume_small_pane_g10

0x0009,

0xf88f,	// (0x0005ce22) volume_small_pane_g

0x78c7,	// (0x00054e5a) bg_active_tab_pane_cp2_ParamLimits

0x78c7,	// (0x00054e5a) bg_active_tab_pane_cp2

0x78d5,	// (0x00054e68) tabs_3_active_pane_g1

0x78dd,	// (0x00054e70) tabs_3_active_pane_t1

0x78c7,	// (0x00054e5a) bg_passive_tab_pane_cp2_ParamLimits

0x78c7,	// (0x00054e5a) bg_passive_tab_pane_cp2

0x78d5,	// (0x00054e68) tabs_3_passive_pane_g1

0x78dd,	// (0x00054e70) tabs_3_passive_pane_t1

0x78c7,	// (0x00054e5a) bg_active_tab_pane_cp3_ParamLimits

0x78c7,	// (0x00054e5a) bg_active_tab_pane_cp3

0x78ef,	// (0x00054e82) tabs_4_active_pane_g1

0x78f7,	// (0x00054e8a) tabs_4_active_pane_t1

0x78c7,	// (0x00054e5a) bg_passive_tab_pane_cp3_ParamLimits

0x78c7,	// (0x00054e5a) bg_passive_tab_pane_cp3

0x78ef,	// (0x00054e82) tabs_4_1_passive_pane_g1

0x78f7,	// (0x00054e8a) tabs_4_1_passive_pane_t1

0x94d5,	// (0x00056a68) list_highlight_pane_cp2

0xae00,	// (0x00058393) list_set_pane_ParamLimits

0xae00,	// (0x00058393) list_set_pane

0xaea6,	// (0x00058439) main_pane_set_t1_ParamLimits

0xaea6,	// (0x00058439) main_pane_set_t1

0xaec6,	// (0x00058459) main_pane_set_t2_ParamLimits

0xaec6,	// (0x00058459) main_pane_set_t2

0xaeda,	// (0x0005846d) main_pane_set_t3_ParamLimits

0xaeda,	// (0x0005846d) main_pane_set_t3

0xaeec,	// (0x0005847f) main_pane_set_t4_ParamLimits

0xaeec,	// (0x0005847f) main_pane_set_t4

0x0003,

0xf95f,	// (0x0005cef2) main_pane_set_t_ParamLimits

0xf95f,	// (0x0005cef2) main_pane_set_t

0xaefe,	// (0x00058491) setting_code_pane

0xaf0a,	// (0x0005849d) setting_slider_graphic_pane

0xaf0a,	// (0x0005849d) setting_slider_pane

0xaf0a,	// (0x0005849d) setting_text_pane

0xaf0a,	// (0x0005849d) setting_volume_pane

0x48ce,	// (0x00051e61) volume_set_pane

0x78c7,	// (0x00054e5a) bg_set_opt_pane_cp

0x48d6,	// (0x00051e69) setting_slider_pane_t1

0x48ef,	// (0x00051e82) setting_slider_pane_t2

0x4909,	// (0x00051e9c) setting_slider_pane_t3

0x0002,

0xf537,	// (0x0005caca) setting_slider_pane_t

0x4921,	// (0x00051eb4) slider_set_pane

0x19ea,	// (0x0004ef7d) bg_set_opt_pane_cp2

0x7909,	// (0x00054e9c) setting_slider_graphic_pane_g1

0x4937,	// (0x00051eca) setting_slider_graphic_pane_t1

0x4947,	// (0x00051eda) setting_slider_graphic_pane_t2

0x0001,

0xf53e,	// (0x0005cad1) setting_slider_graphic_pane_t

0x4957,	// (0x00051eea) slider_set_pane_cp

0x19ea,	// (0x0004ef7d) input_focus_pane_cp1

0xadbf,	// (0x00058352) list_set_text_pane

0x19e0,	// (0x0004ef73) setting_text_pane_g1

0x19ea,	// (0x0004ef7d) input_focus_pane_cp2

0x19e0,	// (0x0004ef73) setting_code_pane_g1

0x7912,	// (0x00054ea5) setting_code_pane_t1

0x397f,	// (0x00050f12) set_text_pane_t1_ParamLimits

0x397f,	// (0x00050f12) set_text_pane_t1

0x8241,	// (0x000557d4) set_opt_bg_pane_g1

0x8249,	// (0x000557dc) set_opt_bg_pane_g2

0xad99,	// (0x0005832c) set_opt_bg_pane_g3

0x8259,	// (0x000557ec) set_opt_bg_pane_g4

0x8261,	// (0x000557f4) set_opt_bg_pane_g5

0x8269,	// (0x000557fc) set_opt_bg_pane_g6

0xada3,	// (0x00058336) set_opt_bg_pane_g7

0xadab,	// (0x0005833e) set_opt_bg_pane_g8

0xadb5,	// (0x00058348) set_opt_bg_pane_g9

0x0008,

0xf94c,	// (0x0005cedf) set_opt_bg_pane_g

0xad8c,	// (0x0005831f) slider_set_pane_g1

0x5f93,	// (0x00053526) slider_set_pane_g2

0x0006,

0xf93d,	// (0x0005ced0) slider_set_pane_g

0x5f1d,	// (0x000534b0) volume_set_pane_g1

0x5f25,	// (0x000534b8) volume_set_pane_g2

0x5f2d,	// (0x000534c0) volume_set_pane_g3

0x5f35,	// (0x000534c8) volume_set_pane_g4

0x5f3d,	// (0x000534d0) volume_set_pane_g5

0x5f45,	// (0x000534d8) volume_set_pane_g6

0x5f4d,	// (0x000534e0) volume_set_pane_g7

0x5f55,	// (0x000534e8) volume_set_pane_g8

0x5f5d,	// (0x000534f0) volume_set_pane_g9

0x5f65,	// (0x000534f8) volume_set_pane_g10

0x0009,

0xf915,	// (0x0005cea8) volume_set_pane_g

0x7920,	// (0x00054eb3) indicator_pane_ParamLimits

0x7920,	// (0x00054eb3) indicator_pane

0x792c,	// (0x00054ebf) main_idle_pane_g2_ParamLimits

0x792c,	// (0x00054ebf) main_idle_pane_g2

0x7954,	// (0x00054ee7) main_pane_idle_g1_ParamLimits

0x7954,	// (0x00054ee7) main_pane_idle_g1

0x7961,	// (0x00054ef4) popup_clock_digital_analogue_window_ParamLimits

0x7961,	// (0x00054ef4) popup_clock_digital_analogue_window

0x7978,	// (0x00054f0b) soft_indicator_pane_ParamLimits

0x7978,	// (0x00054f0b) soft_indicator_pane

0x7984,	// (0x00054f17) wallpaper_pane_ParamLimits

0x7984,	// (0x00054f17) wallpaper_pane

0x19e0,	// (0x0004ef73) wallpaper_pane_g1

0x7998,	// (0x00054f2b) indicator_pane_g1_ParamLimits

0x7998,	// (0x00054f2b) indicator_pane_g1

0xb1bb,	// (0x0005874e) navi_navi_icon_text_pane_srt_g1

0x79b3,	// (0x00054f46) soft_indicator_pane_t1

0x79cd,	// (0x00054f60) aid_ps_area_pane

0x79de,	// (0x00054f71) aid_ps_clock_pane

0x79ec,	// (0x00054f7f) aid_ps_indicator_pane

0x79f8,	// (0x00054f8b) indicator_ps_pane_ParamLimits

0x79f8,	// (0x00054f8b) indicator_ps_pane

0x7a07,	// (0x00054f9a) power_save_pane_g1_ParamLimits

0x7a07,	// (0x00054f9a) power_save_pane_g1

0x7a13,	// (0x00054fa6) power_save_pane_g2_ParamLimits

0x7a13,	// (0x00054fa6) power_save_pane_g2

0x44cf,	// (0x00051a62) aid_navinavi_width_pane

0x79cd,	// (0x00054f60) aid_ps_area_pane_ParamLimits

0x0001,

0xf543,	// (0x0005cad6) power_save_pane_g_ParamLimits

0xf543,	// (0x0005cad6) power_save_pane_g

0x7a21,	// (0x00054fb4) power_save_pane_t1_ParamLimits

0x7a21,	// (0x00054fb4) power_save_pane_t1

0x79de,	// (0x00054f71) aid_ps_clock_pane_ParamLimits

0x79ec,	// (0x00054f7f) aid_ps_indicator_pane_ParamLimits

0x7a33,	// (0x00054fc6) power_save_pane_t4_ParamLimits

0x7a33,	// (0x00054fc6) power_save_pane_t4

0x0001,

0xf548,	// (0x0005cadb) power_save_pane_t_ParamLimits

0xf548,	// (0x0005cadb) power_save_pane_t

0x7a5d,	// (0x00054ff0) power_save_t3_ParamLimits

0x7a5d,	// (0x00054ff0) power_save_t3

0x7a48,	// (0x00054fdb) power_save_t2_ParamLimits

0x7a48,	// (0x00054fdb) power_save_t2

0x7a72,	// (0x00055005) indicator_ps_pane_g1

0x7a7b,	// (0x0005500e) ai_gene_pane_ParamLimits

0x7a7b,	// (0x0005500e) ai_gene_pane

0x7a87,	// (0x0005501a) ai_links_pane_ParamLimits

0x7a87,	// (0x0005501a) ai_links_pane

0x7a93,	// (0x00055026) indicator_pane_cp1_ParamLimits

0x7a93,	// (0x00055026) indicator_pane_cp1

0x7a9f,	// (0x00055032) main_pane_idle_g1_cp_ParamLimits

0x7a9f,	// (0x00055032) main_pane_idle_g1_cp

0x7aab,	// (0x0005503e) popup_ai_links_title_window

0x7ab4,	// (0x00055047) soft_indicator_pane_cp1_ParamLimits

0x7ab4,	// (0x00055047) soft_indicator_pane_cp1

0xab8b,	// (0x0005811e) ai_links_pane_g1

0xab94,	// (0x00058127) grid_ai_links_pane

0xab6e,	// (0x00058101) ai_gene_pane_1

0xab79,	// (0x0005810c) ai_gene_pane_2

0xab82,	// (0x00058115) list_highlight_pane_cp4

0xab52,	// (0x000580e5) cell_ai_link_pane_ParamLimits

0xab52,	// (0x000580e5) cell_ai_link_pane

0xab4a,	// (0x000580dd) cell_ai_link_pane_g1

0x7d0a,	// (0x0005529d) cell_ai_link_pane_g2

0x0001,

0xf8f0,	// (0x0005ce83) cell_ai_link_pane_g

0x19ea,	// (0x0004ef7d) grid_highlight_cp2

0x19ea,	// (0x0004ef7d) bg_popup_sub_pane_cp1

0x7ace,	// (0x00055061) popup_ai_links_title_window_t1

0xaa98,	// (0x0005802b) ai_gene_pane_1_g1_ParamLimits

0xaa98,	// (0x0005802b) ai_gene_pane_1_g1

0xaaa4,	// (0x00058037) ai_gene_pane_1_g2_ParamLimits

0xaaa4,	// (0x00058037) ai_gene_pane_1_g2

0x0001,

0xf8e6,	// (0x0005ce79) ai_gene_pane_1_g_ParamLimits

0xf8e6,	// (0x0005ce79) ai_gene_pane_1_g

0xaab1,	// (0x00058044) ai_gene_pane_1_t1_ParamLimits

0xaab1,	// (0x00058044) ai_gene_pane_1_t1

0xaae5,	// (0x00058078) grid_ai_soft_ind_pane

0xaa83,	// (0x00058016) ai_gene_pane_2_t1_ParamLimits

0xaa83,	// (0x00058016) ai_gene_pane_2_t1

0x7add,	// (0x00055070) main_pane_empty_t1_ParamLimits

0x7add,	// (0x00055070) main_pane_empty_t1

0x7af5,	// (0x00055088) main_pane_empty_t2_ParamLimits

0x7af5,	// (0x00055088) main_pane_empty_t2

0x7b0a,	// (0x0005509d) main_pane_empty_t3_ParamLimits

0x7b0a,	// (0x0005509d) main_pane_empty_t3

0x7b1c,	// (0x000550af) main_pane_empty_t4_ParamLimits

0x7b1c,	// (0x000550af) main_pane_empty_t4

0x7b2e,	// (0x000550c1) main_pane_empty_t5_ParamLimits

0x7b2e,	// (0x000550c1) main_pane_empty_t5

0x0004,

0xf54d,	// (0x0005cae0) main_pane_empty_t_ParamLimits

0xf54d,	// (0x0005cae0) main_pane_empty_t

0x8616,	// (0x00055ba9) bg_popup_window_pane_ParamLimits

0x8616,	// (0x00055ba9) bg_popup_window_pane

0xa7f3,	// (0x00057d86) find_popup_pane_cp2_ParamLimits

0xa7f3,	// (0x00057d86) find_popup_pane_cp2

0xa7ff,	// (0x00057d92) heading_pane_ParamLimits

0xa7ff,	// (0x00057d92) heading_pane

0x19ea,	// (0x0004ef7d) bg_popup_sub_pane

0xa76d,	// (0x00057d00) bg_popup_window_pane_g1_ParamLimits

0xa76d,	// (0x00057d00) bg_popup_window_pane_g1

0xa779,	// (0x00057d0c) bg_popup_window_pane_g2_ParamLimits

0xa779,	// (0x00057d0c) bg_popup_window_pane_g2

0xa785,	// (0x00057d18) bg_popup_window_pane_g3_ParamLimits

0xa785,	// (0x00057d18) bg_popup_window_pane_g3

0xa791,	// (0x00057d24) bg_popup_window_pane_g4_ParamLimits

0xa791,	// (0x00057d24) bg_popup_window_pane_g4

0xa79d,	// (0x00057d30) bg_popup_window_pane_g5_ParamLimits

0xa79d,	// (0x00057d30) bg_popup_window_pane_g5

0xa7a9,	// (0x00057d3c) bg_popup_window_pane_g6_ParamLimits

0xa7a9,	// (0x00057d3c) bg_popup_window_pane_g6

0xa7b5,	// (0x00057d48) bg_popup_window_pane_g7_ParamLimits

0xa7b5,	// (0x00057d48) bg_popup_window_pane_g7

0xa7c1,	// (0x00057d54) bg_popup_window_pane_g8_ParamLimits

0xa7c1,	// (0x00057d54) bg_popup_window_pane_g8

0xa7cd,	// (0x00057d60) bg_popup_window_pane_g9_ParamLimits

0xa7cd,	// (0x00057d60) bg_popup_window_pane_g9

0xa7d9,	// (0x00057d6c) bg_popup_window_pane_g10_ParamLimits

0xa7d9,	// (0x00057d6c) bg_popup_window_pane_g10

0x0009,

0xf8ae,	// (0x0005ce41) bg_popup_window_pane_g_ParamLimits

0xf8ae,	// (0x0005ce41) bg_popup_window_pane_g

0xa702,	// (0x00057c95) bg_popup_heading_pane_ParamLimits

0xa702,	// (0x00057c95) bg_popup_heading_pane

0x6098,	// (0x0005362b) tabs_4_passive_pane_cp_srt_ParamLimits

0x6098,	// (0x0005362b) tabs_4_passive_pane_cp_srt

0x60aa,	// (0x0005363d) tabs_4_passive_pane_srt_ParamLimits

0xa716,	// (0x00057ca9) heading_pane_g2

0x60aa,	// (0x0005363d) tabs_4_passive_pane_srt

0x94d5,	// (0x00056a68) bg_passive_tab_pane_cp3_srt_ParamLimits

0x94d5,	// (0x00056a68) bg_passive_tab_pane_cp3_srt

0xa71e,	// (0x00057cb1) heading_pane_t1_ParamLimits

0xa71e,	// (0x00057cb1) heading_pane_t1

0xa735,	// (0x00057cc8) heading_pane_t2_ParamLimits

0xa735,	// (0x00057cc8) heading_pane_t2

0x0001,

0xf8a9,	// (0x0005ce3c) heading_pane_t_ParamLimits

0xf8a9,	// (0x0005ce3c) heading_pane_t

0xa22f,	// (0x000577c2) bg_popup_heading_pane_g1

0xa2de,	// (0x00057871) bg_popup_heading_pane_g2

0xa2e8,	// (0x0005787b) bg_popup_heading_pane_g3

0xa2f2,	// (0x00057885) bg_popup_heading_pane_g4

0xa2fc,	// (0x0005788f) bg_popup_heading_pane_g5

0xa306,	// (0x00057899) bg_popup_heading_pane_g6

0xa30e,	// (0x000578a1) bg_popup_heading_pane_g7

0xa316,	// (0x000578a9) bg_popup_heading_pane_g8

0xa320,	// (0x000578b3) bg_popup_heading_pane_g9

0x0008,

0xf865,	// (0x0005cdf8) bg_popup_heading_pane_g

0x99ff,	// (0x00056f92) bg_popup_sub_pane_g1

0x9a0f,	// (0x00056fa2) bg_popup_sub_pane_g2

0x9a07,	// (0x00056f9a) bg_popup_sub_pane_g3

0x9a1f,	// (0x00056fb2) bg_popup_sub_pane_g4

0x9a17,	// (0x00056faa) bg_popup_sub_pane_g5

0x9a27,	// (0x00056fba) bg_popup_sub_pane_g6

0x9a2f,	// (0x00056fc2) bg_popup_sub_pane_g7

0x9a3f,	// (0x00056fd2) bg_popup_sub_pane_g8

0x9a37,	// (0x00056fca) bg_popup_sub_pane_g9

0x0008,

0xf83f,	// (0x0005cdd2) bg_popup_sub_pane_g

0x7b42,	// (0x000550d5) bg_popup_window_pane_cp5_ParamLimits

0x7b42,	// (0x000550d5) bg_popup_window_pane_cp5

0x7b5e,	// (0x000550f1) popup_note_window_g1_ParamLimits

0x7b5e,	// (0x000550f1) popup_note_window_g1

0x7b6a,	// (0x000550fd) popup_note_window_t1_ParamLimits

0x7b6a,	// (0x000550fd) popup_note_window_t1

0x7b80,	// (0x00055113) popup_note_window_t2_ParamLimits

0x7b80,	// (0x00055113) popup_note_window_t2

0x7b96,	// (0x00055129) popup_note_window_t3_ParamLimits

0x7b96,	// (0x00055129) popup_note_window_t3

0x7bac,	// (0x0005513f) popup_note_window_t4_ParamLimits

0x7bac,	// (0x0005513f) popup_note_window_t4

0x7bd4,	// (0x00055167) popup_note_window_t5_ParamLimits

0x7bd4,	// (0x00055167) popup_note_window_t5

0x0004,

0xf558,	// (0x0005caeb) popup_note_window_t_ParamLimits

0xf558,	// (0x0005caeb) popup_note_window_t

0x7c1e,	// (0x000551b1) bg_popup_window_pane_cp6_ParamLimits

0x7c1e,	// (0x000551b1) bg_popup_window_pane_cp6

0xa1ab,	// (0x0005773e) popup_note_image_window_g1_ParamLimits

0xa1ab,	// (0x0005773e) popup_note_image_window_g1

0xa1b7,	// (0x0005774a) popup_note_image_window_g2_ParamLimits

0xa1b7,	// (0x0005774a) popup_note_image_window_g2

0x0001,

0xf833,	// (0x0005cdc6) popup_note_image_window_g_ParamLimits

0xf833,	// (0x0005cdc6) popup_note_image_window_g

0xa1d0,	// (0x00057763) popup_note_image_window_t1_ParamLimits

0xa1d0,	// (0x00057763) popup_note_image_window_t1

0xa1e9,	// (0x0005777c) popup_note_image_window_t2_ParamLimits

0xa1e9,	// (0x0005777c) popup_note_image_window_t2

0xa202,	// (0x00057795) popup_note_image_window_t3_ParamLimits

0xa202,	// (0x00057795) popup_note_image_window_t3

0x0002,

0xf838,	// (0x0005cdcb) popup_note_image_window_t_ParamLimits

0xf838,	// (0x0005cdcb) popup_note_image_window_t

0xa06c,	// (0x000575ff) bg_popup_window_pane_cp7_ParamLimits

0xa06c,	// (0x000575ff) bg_popup_window_pane_cp7

0xa09c,	// (0x0005762f) popup_note_wait_window_g1_ParamLimits

0xa09c,	// (0x0005762f) popup_note_wait_window_g1

0xa0a8,	// (0x0005763b) popup_note_wait_window_g2_ParamLimits

0xa0a8,	// (0x0005763b) popup_note_wait_window_g2

0x0002,

0xf821,	// (0x0005cdb4) popup_note_wait_window_g_ParamLimits

0xf821,	// (0x0005cdb4) popup_note_wait_window_g

0xa0c0,	// (0x00057653) popup_note_wait_window_t1_ParamLimits

0xa0c0,	// (0x00057653) popup_note_wait_window_t1

0xa0e7,	// (0x0005767a) popup_note_wait_window_t2_ParamLimits

0xa0e7,	// (0x0005767a) popup_note_wait_window_t2

0xa104,	// (0x00057697) popup_note_wait_window_t3_ParamLimits

0xa104,	// (0x00057697) popup_note_wait_window_t3

0xa117,	// (0x000576aa) popup_note_wait_window_t4_ParamLimits

0xa117,	// (0x000576aa) popup_note_wait_window_t4

0x0004,

0xf828,	// (0x0005cdbb) popup_note_wait_window_t_ParamLimits

0xf828,	// (0x0005cdbb) popup_note_wait_window_t

0xa13c,	// (0x000576cf) wait_bar_pane_ParamLimits

0xa13c,	// (0x000576cf) wait_bar_pane

0x19ea,	// (0x0004ef7d) wait_anim_pane

0x19ea,	// (0x0004ef7d) wait_border_pane

0x19e0,	// (0x0004ef73) wait_anim_pane_g1

0x19e0,	// (0x0004ef73) wait_anim_pane_g2

0x0001,

0xf6e1,	// (0x0005cc74) wait_anim_pane_g

0xa010,	// (0x000575a3) wait_border_pane_g1

0xa01b,	// (0x000575ae) wait_border_pane_g2

0xa024,	// (0x000575b7) wait_border_pane_g3

0x0002,

0xf81a,	// (0x0005cdad) wait_border_pane_g

0x9e7b,	// (0x0005740e) bg_popup_window_pane_cp16_ParamLimits

0x9e7b,	// (0x0005740e) bg_popup_window_pane_cp16

0x9f7b,	// (0x0005750e) indicator_popup_pane_cp4_ParamLimits

0x9f7b,	// (0x0005750e) indicator_popup_pane_cp4

0x9f8f,	// (0x00057522) popup_query_data_window_t1_ParamLimits

0x9f8f,	// (0x00057522) popup_query_data_window_t1

0x9fa1,	// (0x00057534) popup_query_data_window_t2_ParamLimits

0x9fa1,	// (0x00057534) popup_query_data_window_t2

0x9fba,	// (0x0005754d) popup_query_data_window_t3_ParamLimits

0x9fba,	// (0x0005754d) popup_query_data_window_t3

0x0002,

0xf813,	// (0x0005cda6) popup_query_data_window_t_ParamLimits

0xf813,	// (0x0005cda6) popup_query_data_window_t

0x9fd4,	// (0x00057567) query_popup_data_pane_ParamLimits

0x9fd4,	// (0x00057567) query_popup_data_pane

0x9fe8,	// (0x0005757b) query_popup_data_pane_cp1_ParamLimits

0x9fe8,	// (0x0005757b) query_popup_data_pane_cp1

0x9e7b,	// (0x0005740e) bg_popup_window_pane_cp10_ParamLimits

0x9e7b,	// (0x0005740e) bg_popup_window_pane_cp10

0x9ead,	// (0x00057440) indicator_popup_pane_ParamLimits

0x9ead,	// (0x00057440) indicator_popup_pane

0x9ecf,	// (0x00057462) popup_query_code_window_t1_ParamLimits

0x9ecf,	// (0x00057462) popup_query_code_window_t1

0x9ee9,	// (0x0005747c) popup_query_code_window_t2_ParamLimits

0x9ee9,	// (0x0005747c) popup_query_code_window_t2

0x9f32,	// (0x000574c5) popup_query_code_window_t3_ParamLimits

0x9f32,	// (0x000574c5) popup_query_code_window_t3

0x0002,

0xf80c,	// (0x0005cd9f) popup_query_code_window_t_ParamLimits

0xf80c,	// (0x0005cd9f) popup_query_code_window_t

0x9f61,	// (0x000574f4) query_popup_pane_ParamLimits

0x9f61,	// (0x000574f4) query_popup_pane

0x7c1e,	// (0x000551b1) bg_popup_window_pane_cp15_ParamLimits

0x7c1e,	// (0x000551b1) bg_popup_window_pane_cp15

0x7c3c,	// (0x000551cf) indicator_popup_pane_cp1_ParamLimits

0x7c3c,	// (0x000551cf) indicator_popup_pane_cp1

0x7c4f,	// (0x000551e2) indicator_popup_pane_cp2_ParamLimits

0x7c4f,	// (0x000551e2) indicator_popup_pane_cp2

0x7c62,	// (0x000551f5) popup_query_data_code_window_g1_ParamLimits

0x7c62,	// (0x000551f5) popup_query_data_code_window_g1

0x7c75,	// (0x00055208) popup_query_data_code_window_t1_ParamLimits

0x7c75,	// (0x00055208) popup_query_data_code_window_t1

0x7c87,	// (0x0005521a) popup_query_data_code_window_t2_ParamLimits

0x7c87,	// (0x0005521a) popup_query_data_code_window_t2

0x7c99,	// (0x0005522c) popup_query_data_code_window_t3_ParamLimits

0x7c99,	// (0x0005522c) popup_query_data_code_window_t3

0x7caf,	// (0x00055242) popup_query_data_code_window_t4_ParamLimits

0x7caf,	// (0x00055242) popup_query_data_code_window_t4

0x0003,

0xf563,	// (0x0005caf6) popup_query_data_code_window_t_ParamLimits

0xf563,	// (0x0005caf6) popup_query_data_code_window_t

0x5bf9,	// (0x0005318c) list_single_midp_graphic_pane_g3

0x7cc7,	// (0x0005525a) query_popup_data_pane_cp2_ParamLimits

0x7cda,	// (0x0005526d) query_popup_pane_cp2_ParamLimits

0x7cda,	// (0x0005526d) query_popup_pane_cp2

0x19ea,	// (0x0004ef7d) bg_popup_window_pane_cp11

0x9e5f,	// (0x000573f2) heading_pane_cp5

0x9e67,	// (0x000573fa) listscroll_popup_info_pane

0x19ea,	// (0x0004ef7d) input_focus_pane_cp3

0x7ced,	// (0x00055280) query_popup_pane_t1

0x7cfb,	// (0x0005528e) list_popup_info_pane_ParamLimits

0x7cfb,	// (0x0005528e) list_popup_info_pane

0x7d0a,	// (0x0005529d) listscroll_popup_info_pane_g1

0x7d12,	// (0x000552a5) scroll_pane_cp7

0x7d1c,	// (0x000552af) popup_info_list_pane_t1_ParamLimits

0x7d1c,	// (0x000552af) popup_info_list_pane_t1

0x7d36,	// (0x000552c9) popup_info_list_pane_t2_ParamLimits

0x7d36,	// (0x000552c9) popup_info_list_pane_t2

0x0001,

0xf56c,	// (0x0005caff) popup_info_list_pane_t_ParamLimits

0xf56c,	// (0x0005caff) popup_info_list_pane_t

0x19ea,	// (0x0004ef7d) bg_popup_window_pane_cp12

0xb1d5,	// (0x00058768) find_popup_pane

0x78c7,	// (0x00054e5a) bg_popup_window_pane_cp3

0x7d50,	// (0x000552e3) heading_pane_cp3

0x7d5f,	// (0x000552f2) listscroll_popup_graphic_pane

0x19ea,	// (0x0004ef7d) bg_popup_window_pane_cp4

0x7dbf,	// (0x00055352) heading_pane_cp4

0x7dc9,	// (0x0005535c) listscroll_popup_colour_pane

0x7dd1,	// (0x00055364) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x7dd1,	// (0x00055364) cell_large_graphic_colour_none_popup_pane

0x7de5,	// (0x00055378) grid_large_graphic_colour_popup_pane_ParamLimits

0x7de5,	// (0x00055378) grid_large_graphic_colour_popup_pane

0x7e09,	// (0x0005539c) listscroll_popup_colour_pane_g1_ParamLimits

0x7e09,	// (0x0005539c) listscroll_popup_colour_pane_g1

0x7e20,	// (0x000553b3) listscroll_popup_colour_pane_g2_ParamLimits

0x7e20,	// (0x000553b3) listscroll_popup_colour_pane_g2

0x7e37,	// (0x000553ca) listscroll_popup_colour_pane_g3_ParamLimits

0x7e37,	// (0x000553ca) listscroll_popup_colour_pane_g3

0x7e47,	// (0x000553da) listscroll_popup_colour_pane_g4_ParamLimits

0x7e47,	// (0x000553da) listscroll_popup_colour_pane_g4

0x0003,

0xf571,	// (0x0005cb04) listscroll_popup_colour_pane_g_ParamLimits

0xf571,	// (0x0005cb04) listscroll_popup_colour_pane_g

0x7e57,	// (0x000553ea) scroll_pane_cp6_ParamLimits

0x7e57,	// (0x000553ea) scroll_pane_cp6

0x7e69,	// (0x000553fc) cell_large_graphic_colour_popup_pane_ParamLimits

0x7e69,	// (0x000553fc) cell_large_graphic_colour_popup_pane

0x7e88,	// (0x0005541b) cell_large_graphic_colour_none_popup_pane_t1

0x19ea,	// (0x0004ef7d) grid_highlight_pane_cp5

0x7e97,	// (0x0005542a) cell_large_graphic_colour_popup_pane_g1

0x7e9f,	// (0x00055432) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57a,	// (0x0005cb0d) cell_large_graphic_colour_popup_pane_g

0x7ea7,	// (0x0005543a) cell_large_graphic_colour_popup_pane_g2_copy1

0x7eb0,	// (0x00055443) grid_highlight_pane_cp4

0x7eb8,	// (0x0005544b) bg_popup_window_pane_cp8_ParamLimits

0x7eb8,	// (0x0005544b) bg_popup_window_pane_cp8

0x7ed3,	// (0x00055466) popup_snote_single_text_window_g1_ParamLimits

0x7ed3,	// (0x00055466) popup_snote_single_text_window_g1

0x7ee5,	// (0x00055478) popup_snote_single_text_window_t1_ParamLimits

0x7ee5,	// (0x00055478) popup_snote_single_text_window_t1

0x7ef8,	// (0x0005548b) popup_snote_single_text_window_t2_ParamLimits

0x7ef8,	// (0x0005548b) popup_snote_single_text_window_t2

0x7f0b,	// (0x0005549e) popup_snote_single_text_window_t3_ParamLimits

0x7f0b,	// (0x0005549e) popup_snote_single_text_window_t3

0x7f44,	// (0x000554d7) popup_snote_single_text_window_t4_ParamLimits

0x7f44,	// (0x000554d7) popup_snote_single_text_window_t4

0x7f78,	// (0x0005550b) popup_snote_single_text_window_t5_ParamLimits

0x7f78,	// (0x0005550b) popup_snote_single_text_window_t5

0x0004,

0xf57f,	// (0x0005cb12) popup_snote_single_text_window_t_ParamLimits

0xf57f,	// (0x0005cb12) popup_snote_single_text_window_t

0x7fa7,	// (0x0005553a) bg_popup_window_pane_cp9_ParamLimits

0x7fa7,	// (0x0005553a) bg_popup_window_pane_cp9

0x7ed3,	// (0x00055466) popup_snote_single_graphic_window_g1_ParamLimits

0x7ed3,	// (0x00055466) popup_snote_single_graphic_window_g1

0x7fb5,	// (0x00055548) popup_snote_single_graphic_window_g2_ParamLimits

0x7fb5,	// (0x00055548) popup_snote_single_graphic_window_g2

0x0001,

0xf58a,	// (0x0005cb1d) popup_snote_single_graphic_window_g_ParamLimits

0xf58a,	// (0x0005cb1d) popup_snote_single_graphic_window_g

0x7fc1,	// (0x00055554) popup_snote_single_graphic_window_t1_ParamLimits

0x7fc1,	// (0x00055554) popup_snote_single_graphic_window_t1

0x7fd4,	// (0x00055567) popup_snote_single_graphic_window_t2_ParamLimits

0x7fd4,	// (0x00055567) popup_snote_single_graphic_window_t2

0x7fe7,	// (0x0005557a) popup_snote_single_graphic_window_t3_ParamLimits

0x7fe7,	// (0x0005557a) popup_snote_single_graphic_window_t3

0x8020,	// (0x000555b3) popup_snote_single_graphic_window_t4_ParamLimits

0x8020,	// (0x000555b3) popup_snote_single_graphic_window_t4

0x8054,	// (0x000555e7) popup_snote_single_graphic_window_t5_ParamLimits

0x8054,	// (0x000555e7) popup_snote_single_graphic_window_t5

0x0004,

0xf58f,	// (0x0005cb22) popup_snote_single_graphic_window_t_ParamLimits

0xf58f,	// (0x0005cb22) popup_snote_single_graphic_window_t

0xb117,	// (0x000586aa) grid_graphic_popup_pane_ParamLimits

0xb117,	// (0x000586aa) grid_graphic_popup_pane

0xb141,	// (0x000586d4) listscroll_popup_graphic_pane_g1_ParamLimits

0xb141,	// (0x000586d4) listscroll_popup_graphic_pane_g1

0xb155,	// (0x000586e8) listscroll_popup_graphic_pane_g2_ParamLimits

0xb155,	// (0x000586e8) listscroll_popup_graphic_pane_g2

0x0001,

0xf989,	// (0x0005cf1c) listscroll_popup_graphic_pane_g_ParamLimits

0xf989,	// (0x0005cf1c) listscroll_popup_graphic_pane_g

0xb169,	// (0x000586fc) scroll_pane_cp5

0xb0a5,	// (0x00058638) cell_graphic_popup_pane_ParamLimits

0xb0a5,	// (0x00058638) cell_graphic_popup_pane

0xb086,	// (0x00058619) cell_graphic_popup_pane_g1

0xb08e,	// (0x00058621) cell_graphic_popup_pane_g2

0x7ea7,	// (0x0005543a) cell_graphic_popup_pane_g3

0x0002,

0xf982,	// (0x0005cf15) cell_graphic_popup_pane_g

0xb097,	// (0x0005862a) cell_graphic_popup_pane_t2

0x7eb0,	// (0x00055443) grid_highlight_pane_cp3

0x8095,	// (0x00055628) list_gen_pane_ParamLimits

0x8095,	// (0x00055628) list_gen_pane

0x80c7,	// (0x0005565a) scroll_pane

0xafde,	// (0x00058571) bg_list_pane_g1_ParamLimits

0xafde,	// (0x00058571) bg_list_pane_g1

0xaffb,	// (0x0005858e) bg_list_pane_g2_ParamLimits

0xaffb,	// (0x0005858e) bg_list_pane_g2

0xb010,	// (0x000585a3) bg_list_pane_g3_ParamLimits

0xb010,	// (0x000585a3) bg_list_pane_g3

0xb024,	// (0x000585b7) bg_list_pane_g4_ParamLimits

0xb024,	// (0x000585b7) bg_list_pane_g4

0xb038,	// (0x000585cb) bg_list_pane_g5_ParamLimits

0xb038,	// (0x000585cb) bg_list_pane_g5

0x0004,

0xf977,	// (0x0005cf0a) bg_list_pane_g_ParamLimits

0xf977,	// (0x0005cf0a) bg_list_pane_g

0x82e1,	// (0x00055874) list_double2_graphic_large_graphic_pane_ParamLimits

0x82e1,	// (0x00055874) list_double2_graphic_large_graphic_pane

0x82e1,	// (0x00055874) list_double2_graphic_pane_ParamLimits

0x82e1,	// (0x00055874) list_double2_graphic_pane

0x82e1,	// (0x00055874) list_double2_large_graphic_pane_ParamLimits

0x82e1,	// (0x00055874) list_double2_large_graphic_pane

0x82e1,	// (0x00055874) list_double2_pane_ParamLimits

0x82e1,	// (0x00055874) list_double2_pane

0x82e1,	// (0x00055874) list_double_graphic_heading_pane_ParamLimits

0x82e1,	// (0x00055874) list_double_graphic_heading_pane

0x82e1,	// (0x00055874) list_double_graphic_pane_ParamLimits

0x82e1,	// (0x00055874) list_double_graphic_pane

0x82e1,	// (0x00055874) list_double_heading_pane_ParamLimits

0x82e1,	// (0x00055874) list_double_heading_pane

0x82e1,	// (0x00055874) list_double_large_graphic_pane_ParamLimits

0x82e1,	// (0x00055874) list_double_large_graphic_pane

0x82e1,	// (0x00055874) list_double_number_pane_ParamLimits

0x82e1,	// (0x00055874) list_double_number_pane

0x82e1,	// (0x00055874) list_double_pane_ParamLimits

0x82e1,	// (0x00055874) list_double_pane

0x82e1,	// (0x00055874) list_double_time_pane_ParamLimits

0x82e1,	// (0x00055874) list_double_time_pane

0x82e1,	// (0x00055874) list_setting_number_pane_ParamLimits

0x82e1,	// (0x00055874) list_setting_number_pane

0x82e1,	// (0x00055874) list_setting_pane_ParamLimits

0x82e1,	// (0x00055874) list_setting_pane

0x831a,	// (0x000558ad) list_single_2graphic_pane_ParamLimits

0x831a,	// (0x000558ad) list_single_2graphic_pane

0x831a,	// (0x000558ad) list_single_graphic_heading_pane_ParamLimits

0x831a,	// (0x000558ad) list_single_graphic_heading_pane

0x831a,	// (0x000558ad) list_single_graphic_pane_ParamLimits

0x831a,	// (0x000558ad) list_single_graphic_pane

0x831a,	// (0x000558ad) list_single_heading_pane_ParamLimits

0x831a,	// (0x000558ad) list_single_heading_pane

0x6055,	// (0x000535e8) list_single_large_graphic_pane_ParamLimits

0x6055,	// (0x000535e8) list_single_large_graphic_pane

0x831a,	// (0x000558ad) list_single_number_heading_pane_ParamLimits

0x831a,	// (0x000558ad) list_single_number_heading_pane

0x831a,	// (0x000558ad) list_single_number_pane_ParamLimits

0x831a,	// (0x000558ad) list_single_number_pane

0x831a,	// (0x000558ad) list_single_pane_ParamLimits

0x831a,	// (0x000558ad) list_single_pane

0x19ea,	// (0x0004ef7d) list_highlight_pane_cp1

0x85a7,	// (0x00055b3a) list_single_pane_g1_ParamLimits

0x85a7,	// (0x00055b3a) list_single_pane_g1

0x80fb,	// (0x0005568e) list_single_pane_g2_ParamLimits

0x80fb,	// (0x0005568e) list_single_pane_g2

0x0001,

0xf5ab,	// (0x0005cb3e) list_single_pane_g_ParamLimits

0xf5ab,	// (0x0005cb3e) list_single_pane_g

0x6027,	// (0x000535ba) list_single_pane_t1_ParamLimits

0x6027,	// (0x000535ba) list_single_pane_t1

0x85a7,	// (0x00055b3a) list_single_number_pane_g1_ParamLimits

0x85a7,	// (0x00055b3a) list_single_number_pane_g1

0x80fb,	// (0x0005568e) list_single_number_pane_g2_ParamLimits

0x80fb,	// (0x0005568e) list_single_number_pane_g2

0x0001,

0xf5ab,	// (0x0005cb3e) list_single_number_pane_g_ParamLimits

0xf5ab,	// (0x0005cb3e) list_single_number_pane_g

0x5bbe,	// (0x00053151) list_single_number_pane_t1_ParamLimits

0x5bbe,	// (0x00053151) list_single_number_pane_t1

0x5f6d,	// (0x00053500) list_single_number_pane_t2_ParamLimits

0x5f6d,	// (0x00053500) list_single_number_pane_t2

0x0001,

0xf938,	// (0x0005cecb) list_single_number_pane_t_ParamLimits

0xf938,	// (0x0005cecb) list_single_number_pane_t

0x3998,	// (0x00050f2b) list_single_graphic_pane_g1_ParamLimits

0x3998,	// (0x00050f2b) list_single_graphic_pane_g1

0x85a7,	// (0x00055b3a) list_single_graphic_pane_g2_ParamLimits

0x85a7,	// (0x00055b3a) list_single_graphic_pane_g2

0x80fb,	// (0x0005568e) list_single_graphic_pane_g3_ParamLimits

0x80fb,	// (0x0005568e) list_single_graphic_pane_g3

0x0002,

0xf59a,	// (0x0005cb2d) list_single_graphic_pane_g_ParamLimits

0xf59a,	// (0x0005cb2d) list_single_graphic_pane_g

0x39a4,	// (0x00050f37) list_single_graphic_pane_t1_ParamLimits

0x39a4,	// (0x00050f37) list_single_graphic_pane_t1

0x39ba,	// (0x00050f4d) list_single_heading_pane_g1_ParamLimits

0x39ba,	// (0x00050f4d) list_single_heading_pane_g1

0x80fb,	// (0x0005568e) list_single_heading_pane_g2_ParamLimits

0x80fb,	// (0x0005568e) list_single_heading_pane_g2

0x0001,

0xf5a1,	// (0x0005cb34) list_single_heading_pane_g_ParamLimits

0xf5a1,	// (0x0005cb34) list_single_heading_pane_g

0x39cd,	// (0x00050f60) list_single_heading_pane_t1_ParamLimits

0x39cd,	// (0x00050f60) list_single_heading_pane_t1

0x8107,	// (0x0005569a) list_single_heading_pane_t2_ParamLimits

0x8107,	// (0x0005569a) list_single_heading_pane_t2

0x0001,

0xf5a6,	// (0x0005cb39) list_single_heading_pane_t_ParamLimits

0xf5a6,	// (0x0005cb39) list_single_heading_pane_t

0x85a7,	// (0x00055b3a) list_single_number_heading_pane_g1_ParamLimits

0x85a7,	// (0x00055b3a) list_single_number_heading_pane_g1

0x80fb,	// (0x0005568e) list_single_number_heading_pane_g2_ParamLimits

0x80fb,	// (0x0005568e) list_single_number_heading_pane_g2

0x0001,

0xf5ab,	// (0x0005cb3e) list_single_number_heading_pane_g_ParamLimits

0xf5ab,	// (0x0005cb3e) list_single_number_heading_pane_g

0x39e3,	// (0x00050f76) list_single_number_heading_pane_t1_ParamLimits

0x39e3,	// (0x00050f76) list_single_number_heading_pane_t1

0x39f9,	// (0x00050f8c) list_single_number_heading_pane_t2_ParamLimits

0x39f9,	// (0x00050f8c) list_single_number_heading_pane_t2

0x3a0b,	// (0x00050f9e) list_single_number_heading_pane_t3_ParamLimits

0x3a0b,	// (0x00050f9e) list_single_number_heading_pane_t3

0x0002,

0xf5b0,	// (0x0005cb43) list_single_number_heading_pane_t_ParamLimits

0xf5b0,	// (0x0005cb43) list_single_number_heading_pane_t

0x3a1d,	// (0x00050fb0) list_single_graphic_heading_pane_g1_ParamLimits

0x3a1d,	// (0x00050fb0) list_single_graphic_heading_pane_g1

0x8119,	// (0x000556ac) list_single_graphic_heading_pane_g4_ParamLimits

0x8119,	// (0x000556ac) list_single_graphic_heading_pane_g4

0x80fb,	// (0x0005568e) list_single_graphic_heading_pane_g5_ParamLimits

0x80fb,	// (0x0005568e) list_single_graphic_heading_pane_g5

0x0002,

0xf5b7,	// (0x0005cb4a) list_single_graphic_heading_pane_g_ParamLimits

0xf5b7,	// (0x0005cb4a) list_single_graphic_heading_pane_g

0x39e3,	// (0x00050f76) list_single_graphic_heading_pane_t1_ParamLimits

0x39e3,	// (0x00050f76) list_single_graphic_heading_pane_t1

0x812a,	// (0x000556bd) list_single_graphic_heading_pane_t2_ParamLimits

0x812a,	// (0x000556bd) list_single_graphic_heading_pane_t2

0x0001,

0xf5be,	// (0x0005cb51) list_single_graphic_heading_pane_t_ParamLimits

0xf5be,	// (0x0005cb51) list_single_graphic_heading_pane_t

0x495f,	// (0x00051ef2) list_single_large_graphic_pane_g1_ParamLimits

0x495f,	// (0x00051ef2) list_single_large_graphic_pane_g1

0x496b,	// (0x00051efe) list_single_large_graphic_pane_g2_ParamLimits

0x496b,	// (0x00051efe) list_single_large_graphic_pane_g2

0x4977,	// (0x00051f0a) list_single_large_graphic_pane_g3_ParamLimits

0x4977,	// (0x00051f0a) list_single_large_graphic_pane_g3

0x0002,

0xf5c3,	// (0x0005cb56) list_single_large_graphic_pane_g_ParamLimits

0xf5c3,	// (0x0005cb56) list_single_large_graphic_pane_g

0xa01b,	// (0x000575ae) wait_border_pane_g2_copy1

0x4983,	// (0x00051f16) list_single_large_graphic_pane_g4_cp2

0x498b,	// (0x00051f1e) list_single_large_graphic_pane_t1_ParamLimits

0x498b,	// (0x00051f1e) list_single_large_graphic_pane_t1

0x813c,	// (0x000556cf) list_double_pane_g1_ParamLimits

0x813c,	// (0x000556cf) list_double_pane_g1

0x8148,	// (0x000556db) list_double_pane_g2_ParamLimits

0x8148,	// (0x000556db) list_double_pane_g2

0x0001,

0xf5ca,	// (0x0005cb5d) list_double_pane_g_ParamLimits

0xf5ca,	// (0x0005cb5d) list_double_pane_g

0x49a1,	// (0x00051f34) list_double_pane_t1_ParamLimits

0x49a1,	// (0x00051f34) list_double_pane_t1

0x49b7,	// (0x00051f4a) list_double_pane_t2_ParamLimits

0x49b7,	// (0x00051f4a) list_double_pane_t2

0x0001,

0xf5cf,	// (0x0005cb62) list_double_pane_t_ParamLimits

0xf5cf,	// (0x0005cb62) list_double_pane_t

0x49c9,	// (0x00051f5c) list_double2_pane_g1_ParamLimits

0x49c9,	// (0x00051f5c) list_double2_pane_g1

0x3a4b,	// (0x00050fde) list_double2_pane_g2_ParamLimits

0x3a4b,	// (0x00050fde) list_double2_pane_g2

0x0001,

0xf5d4,	// (0x0005cb67) list_double2_pane_g_ParamLimits

0xf5d4,	// (0x0005cb67) list_double2_pane_g

0x49da,	// (0x00051f6d) list_double2_pane_t1_ParamLimits

0x49da,	// (0x00051f6d) list_double2_pane_t1

0x49f0,	// (0x00051f83) list_double2_pane_t2_ParamLimits

0x49f0,	// (0x00051f83) list_double2_pane_t2

0x0001,

0xf5d9,	// (0x0005cb6c) list_double2_pane_t_ParamLimits

0xf5d9,	// (0x0005cb6c) list_double2_pane_t

0x813c,	// (0x000556cf) list_double_number_pane_g1_ParamLimits

0x813c,	// (0x000556cf) list_double_number_pane_g1

0x8148,	// (0x000556db) list_double_number_pane_g2_ParamLimits

0x8148,	// (0x000556db) list_double_number_pane_g2

0x0001,

0xf5ca,	// (0x0005cb5d) list_double_number_pane_g_ParamLimits

0xf5ca,	// (0x0005cb5d) list_double_number_pane_g

0x4a02,	// (0x00051f95) list_double_number_pane_t1_ParamLimits

0x4a02,	// (0x00051f95) list_double_number_pane_t1

0x4a14,	// (0x00051fa7) list_double_number_pane_t2_ParamLimits

0x4a14,	// (0x00051fa7) list_double_number_pane_t2

0x4a2a,	// (0x00051fbd) list_double_number_pane_t3_ParamLimits

0x4a2a,	// (0x00051fbd) list_double_number_pane_t3

0x0002,

0xf5de,	// (0x0005cb71) list_double_number_pane_t_ParamLimits

0xf5de,	// (0x0005cb71) list_double_number_pane_t

0x4a3c,	// (0x00051fcf) list_double_graphic_pane_g1_ParamLimits

0x4a3c,	// (0x00051fcf) list_double_graphic_pane_g1

0x8154,	// (0x000556e7) list_double_graphic_pane_g2_ParamLimits

0x8154,	// (0x000556e7) list_double_graphic_pane_g2

0x8163,	// (0x000556f6) list_double_graphic_pane_g3_ParamLimits

0x8163,	// (0x000556f6) list_double_graphic_pane_g3

0x0003,

0xf5e5,	// (0x0005cb78) list_double_graphic_pane_g_ParamLimits

0xf5e5,	// (0x0005cb78) list_double_graphic_pane_g

0x4a54,	// (0x00051fe7) list_double_graphic_pane_t1_ParamLimits

0x4a54,	// (0x00051fe7) list_double_graphic_pane_t1

0x4a6a,	// (0x00051ffd) list_double_graphic_pane_t2_ParamLimits

0x4a6a,	// (0x00051ffd) list_double_graphic_pane_t2

0x0001,

0xf5ee,	// (0x0005cb81) list_double_graphic_pane_t_ParamLimits

0xf5ee,	// (0x0005cb81) list_double_graphic_pane_t

0x3a3f,	// (0x00050fd2) list_double2_graphic_pane_g1_ParamLimits

0x3a3f,	// (0x00050fd2) list_double2_graphic_pane_g1

0x816f,	// (0x00055702) list_double2_graphic_pane_g2_ParamLimits

0x816f,	// (0x00055702) list_double2_graphic_pane_g2

0x817b,	// (0x0005570e) list_double2_graphic_pane_g3_ParamLimits

0x817b,	// (0x0005570e) list_double2_graphic_pane_g3

0x0002,

0xf5f3,	// (0x0005cb86) list_double2_graphic_pane_g_ParamLimits

0xf5f3,	// (0x0005cb86) list_double2_graphic_pane_g

0x3a29,	// (0x00050fbc) list_double2_graphic_pane_t1_ParamLimits

0x3a29,	// (0x00050fbc) list_double2_graphic_pane_t1

0x4a7c,	// (0x0005200f) list_double2_graphic_pane_t2_ParamLimits

0x4a7c,	// (0x0005200f) list_double2_graphic_pane_t2

0x0001,

0xf5fa,	// (0x0005cb8d) list_double2_graphic_pane_t_ParamLimits

0xf5fa,	// (0x0005cb8d) list_double2_graphic_pane_t

0x4a8e,	// (0x00052021) list_double_large_graphic_pane_g1_ParamLimits

0x4a8e,	// (0x00052021) list_double_large_graphic_pane_g1

0x4aa1,	// (0x00052034) list_double_large_graphic_pane_g2_ParamLimits

0x4aa1,	// (0x00052034) list_double_large_graphic_pane_g2

0x8148,	// (0x000556db) list_double_large_graphic_pane_g3_ParamLimits

0x8148,	// (0x000556db) list_double_large_graphic_pane_g3

0x4ab7,	// (0x0005204a) list_double_large_graphic_pane_g4_ParamLimits

0x4ab7,	// (0x0005204a) list_double_large_graphic_pane_g4

0x0004,

0xf5ff,	// (0x0005cb92) list_double_large_graphic_pane_g_ParamLimits

0xf5ff,	// (0x0005cb92) list_double_large_graphic_pane_g

0x4ac8,	// (0x0005205b) list_double_large_graphic_pane_t1_ParamLimits

0x4ac8,	// (0x0005205b) list_double_large_graphic_pane_t1

0x4ae1,	// (0x00052074) list_double_large_graphic_pane_t2_ParamLimits

0x4ae1,	// (0x00052074) list_double_large_graphic_pane_t2

0x0001,

0xf60a,	// (0x0005cb9d) list_double_large_graphic_pane_t_ParamLimits

0xf60a,	// (0x0005cb9d) list_double_large_graphic_pane_t

0x4af3,	// (0x00052086) list_double2_large_graphic_pane_g1_ParamLimits

0x4af3,	// (0x00052086) list_double2_large_graphic_pane_g1

0x4aff,	// (0x00052092) list_double2_large_graphic_pane_g2_ParamLimits

0x4aff,	// (0x00052092) list_double2_large_graphic_pane_g2

0x817b,	// (0x0005570e) list_double2_large_graphic_pane_g3_ParamLimits

0x817b,	// (0x0005570e) list_double2_large_graphic_pane_g3

0x0002,

0xf60f,	// (0x0005cba2) list_double2_large_graphic_pane_g_ParamLimits

0xf60f,	// (0x0005cba2) list_double2_large_graphic_pane_g

0x4b10,	// (0x000520a3) list_double2_large_graphic_pane_t1_ParamLimits

0x4b10,	// (0x000520a3) list_double2_large_graphic_pane_t1

0x4b26,	// (0x000520b9) list_double2_large_graphic_pane_t2_ParamLimits

0x4b26,	// (0x000520b9) list_double2_large_graphic_pane_t2

0x0001,

0xf616,	// (0x0005cba9) list_double2_large_graphic_pane_t_ParamLimits

0xf616,	// (0x0005cba9) list_double2_large_graphic_pane_t

0x4b38,	// (0x000520cb) list_double_heading_pane_g1_ParamLimits

0x4b38,	// (0x000520cb) list_double_heading_pane_g1

0x4b49,	// (0x000520dc) list_double_heading_pane_g2_ParamLimits

0x4b49,	// (0x000520dc) list_double_heading_pane_g2

0x0001,

0xf61b,	// (0x0005cbae) list_double_heading_pane_g_ParamLimits

0xf61b,	// (0x0005cbae) list_double_heading_pane_g

0x4b55,	// (0x000520e8) list_double_heading_pane_t1_ParamLimits

0x4b55,	// (0x000520e8) list_double_heading_pane_t1

0x49f0,	// (0x00051f83) list_double_heading_pane_t2_ParamLimits

0x49f0,	// (0x00051f83) list_double_heading_pane_t2

0x0001,

0xf620,	// (0x0005cbb3) list_double_heading_pane_t_ParamLimits

0xf620,	// (0x0005cbb3) list_double_heading_pane_t

0x3a63,	// (0x00050ff6) list_double_graphic_heading_pane_g1_ParamLimits

0x3a63,	// (0x00050ff6) list_double_graphic_heading_pane_g1

0x4b38,	// (0x000520cb) list_double_graphic_heading_pane_g2_ParamLimits

0x4b38,	// (0x000520cb) list_double_graphic_heading_pane_g2

0x4b49,	// (0x000520dc) list_double_graphic_heading_pane_g3_ParamLimits

0x4b49,	// (0x000520dc) list_double_graphic_heading_pane_g3

0x0002,

0xf625,	// (0x0005cbb8) list_double_graphic_heading_pane_g_ParamLimits

0xf625,	// (0x0005cbb8) list_double_graphic_heading_pane_g

0x4b6b,	// (0x000520fe) list_double_graphic_heading_pane_t1_ParamLimits

0x4b6b,	// (0x000520fe) list_double_graphic_heading_pane_t1

0x4a7c,	// (0x0005200f) list_double_graphic_heading_pane_t2_ParamLimits

0x4a7c,	// (0x0005200f) list_double_graphic_heading_pane_t2

0x0001,

0xf62c,	// (0x0005cbbf) list_double_graphic_heading_pane_t_ParamLimits

0xf62c,	// (0x0005cbbf) list_double_graphic_heading_pane_t

0x4b81,	// (0x00052114) list_double_time_pane_g1_ParamLimits

0x4b81,	// (0x00052114) list_double_time_pane_g1

0x4b92,	// (0x00052125) list_double_time_pane_g2_ParamLimits

0x4b92,	// (0x00052125) list_double_time_pane_g2

0x0001,

0xf631,	// (0x0005cbc4) list_double_time_pane_g_ParamLimits

0xf631,	// (0x0005cbc4) list_double_time_pane_g

0x4b9e,	// (0x00052131) list_double_time_pane_t1_ParamLimits

0x4b9e,	// (0x00052131) list_double_time_pane_t1

0x4bb4,	// (0x00052147) list_double_time_pane_t2_ParamLimits

0x4bb4,	// (0x00052147) list_double_time_pane_t2

0x4bc6,	// (0x00052159) list_double_time_pane_t3_ParamLimits

0x4bc6,	// (0x00052159) list_double_time_pane_t3

0x4bd8,	// (0x0005216b) list_double_time_pane_t4_ParamLimits

0x4bd8,	// (0x0005216b) list_double_time_pane_t4

0x0003,

0xf636,	// (0x0005cbc9) list_double_time_pane_t_ParamLimits

0xf636,	// (0x0005cbc9) list_double_time_pane_t

0x3a6f,	// (0x00051002) list_setting_pane_g1_ParamLimits

0x3a6f,	// (0x00051002) list_setting_pane_g1

0x3a57,	// (0x00050fea) list_setting_pane_g2_ParamLimits

0x3a57,	// (0x00050fea) list_setting_pane_g2

0x0001,

0xf63f,	// (0x0005cbd2) list_setting_pane_g_ParamLimits

0xf63f,	// (0x0005cbd2) list_setting_pane_g

0x4bea,	// (0x0005217d) list_setting_pane_t1_ParamLimits

0x4bea,	// (0x0005217d) list_setting_pane_t1

0x4c04,	// (0x00052197) list_setting_pane_t2_ParamLimits

0x4c04,	// (0x00052197) list_setting_pane_t2

0x0002,

0xf644,	// (0x0005cbd7) list_setting_pane_t_ParamLimits

0xf644,	// (0x0005cbd7) list_setting_pane_t

0x4c43,	// (0x000521d6) set_value_pane_cp_ParamLimits

0x4c43,	// (0x000521d6) set_value_pane_cp

0x4c4f,	// (0x000521e2) list_setting_number_pane_g1_ParamLimits

0x4c4f,	// (0x000521e2) list_setting_number_pane_g1

0x4c5b,	// (0x000521ee) list_setting_number_pane_g2_ParamLimits

0x4c5b,	// (0x000521ee) list_setting_number_pane_g2

0x0001,

0xf64b,	// (0x0005cbde) list_setting_number_pane_g_ParamLimits

0xf64b,	// (0x0005cbde) list_setting_number_pane_g

0x4c67,	// (0x000521fa) list_setting_number_pane_t1_ParamLimits

0x4c67,	// (0x000521fa) list_setting_number_pane_t1

0x4c80,	// (0x00052213) list_setting_number_pane_t2_ParamLimits

0x4c80,	// (0x00052213) list_setting_number_pane_t2

0x4c9a,	// (0x0005222d) list_setting_number_pane_t3_ParamLimits

0x4c9a,	// (0x0005222d) list_setting_number_pane_t3

0x0003,

0xf650,	// (0x0005cbe3) list_setting_number_pane_t_ParamLimits

0xf650,	// (0x0005cbe3) list_setting_number_pane_t

0x4c43,	// (0x000521d6) set_value_pane_ParamLimits

0x4c43,	// (0x000521d6) set_value_pane

0x819c,	// (0x0005572f) bg_set_opt_pane_ParamLimits

0x819c,	// (0x0005572f) bg_set_opt_pane

0x4cdd,	// (0x00052270) set_value_pane_t1

0x81bd,	// (0x00055750) slider_set_pane_cp3

0x81c6,	// (0x00055759) volume_small_pane_cp

0x81cf,	// (0x00055762) list_form_gen_pane

0x81d8,	// (0x0005576b) scroll_pane_cp8

0x4cf3,	// (0x00052286) form_field_data_pane_ParamLimits

0x4cf3,	// (0x00052286) form_field_data_pane

0x4d17,	// (0x000522aa) form_field_data_wide_pane_ParamLimits

0x4d17,	// (0x000522aa) form_field_data_wide_pane

0x4d3a,	// (0x000522cd) form_field_popup_pane_ParamLimits

0x4d3a,	// (0x000522cd) form_field_popup_pane

0x4d5a,	// (0x000522ed) form_field_popup_wide_pane_ParamLimits

0x4d5a,	// (0x000522ed) form_field_popup_wide_pane

0x4d79,	// (0x0005230c) form_field_slider_pane_ParamLimits

0x4d79,	// (0x0005230c) form_field_slider_pane

0x4d8c,	// (0x0005231f) form_field_slider_wide_pane_ParamLimits

0x4d8c,	// (0x0005231f) form_field_slider_wide_pane

0x81e9,	// (0x0005577c) data_form_pane

0x4da9,	// (0x0005233c) form_field_data_pane_t1

0x81f5,	// (0x00055788) input_focus_pane

0x4dc1,	// (0x00052354) data_form_wide_pane

0x4dde,	// (0x00052371) form_field_data_wide_pane_t1

0x7ec5,	// (0x00055458) input_focus_pane_cp6

0x4e00,	// (0x00052393) form_field_popup_pane_t1

0x81f5,	// (0x00055788) input_focus_pane_cp7

0x8217,	// (0x000557aa) list_form_pane

0x4e20,	// (0x000523b3) form_field_popup_wide_pane_t1

0x81f5,	// (0x00055788) input_focus_pane_cp8

0x8223,	// (0x000557b6) list_form_wide_pane

0x4e3d,	// (0x000523d0) form_field_slider_pane_t1_ParamLimits

0x4e3d,	// (0x000523d0) form_field_slider_pane_t1

0x4e53,	// (0x000523e6) form_field_slider_pane_t2_ParamLimits

0x4e53,	// (0x000523e6) form_field_slider_pane_t2

0x0001,

0xf660,	// (0x0005cbf3) form_field_slider_pane_t_ParamLimits

0xf660,	// (0x0005cbf3) form_field_slider_pane_t

0x7b42,	// (0x000550d5) input_focus_pane_cp9_ParamLimits

0x7b42,	// (0x000550d5) input_focus_pane_cp9

0x4e68,	// (0x000523fb) slider_cont_pane_ParamLimits

0x4e68,	// (0x000523fb) slider_cont_pane

0x822f,	// (0x000557c2) form_field_slider_wide_pane_t1_ParamLimits

0x822f,	// (0x000557c2) form_field_slider_wide_pane_t1

0x4e7c,	// (0x0005240f) form_field_slider_wide_pane_t2_ParamLimits

0x4e7c,	// (0x0005240f) form_field_slider_wide_pane_t2

0x0001,

0xf665,	// (0x0005cbf8) form_field_slider_wide_pane_t_ParamLimits

0xf665,	// (0x0005cbf8) form_field_slider_wide_pane_t

0x7b42,	// (0x000550d5) input_focus_pane_cp10_ParamLimits

0x7b42,	// (0x000550d5) input_focus_pane_cp10

0x4e8e,	// (0x00052421) slider_cont_pane_cp1_ParamLimits

0x4e8e,	// (0x00052421) slider_cont_pane_cp1

0x4ea2,	// (0x00052435) slider_form_pane_cp

0x8241,	// (0x000557d4) input_focus_pane_g1

0x8249,	// (0x000557dc) input_focus_pane_g2

0x8251,	// (0x000557e4) input_focus_pane_g3

0x8259,	// (0x000557ec) input_focus_pane_g4

0x8261,	// (0x000557f4) input_focus_pane_g5

0x8269,	// (0x000557fc) input_focus_pane_g6

0x8271,	// (0x00055804) input_focus_pane_g7

0x8279,	// (0x0005580c) input_focus_pane_g8

0x8281,	// (0x00055814) input_focus_pane_g9

0x19e0,	// (0x0004ef73) input_focus_pane_g10

0x0009,

0xf66a,	// (0x0005cbfd) input_focus_pane_g

0xa024,	// (0x000575b7) wait_border_pane_g3_copy1

0x4eaa,	// (0x0005243d) data_form_pane_t1

0x19e0,	// (0x0004ef73) wait_anim_pane_g1_copy1

0x5ff7,	// (0x0005358a) data_form_wide_pane_t1

0x4ec5,	// (0x00052458) list_form_graphic_pane_cp_ParamLimits

0x4ec5,	// (0x00052458) list_form_graphic_pane_cp

0xaf34,	// (0x000584c7) slider_form_pane_g1

0xaf3d,	// (0x000584d0) slider_form_pane_g2

0x0006,

0xf968,	// (0x0005cefb) slider_form_pane_g

0x4ede,	// (0x00052471) list_form_graphic_pane_ParamLimits

0x4ede,	// (0x00052471) list_form_graphic_pane

0x4efa,	// (0x0005248d) list_form_graphic_pane_g1

0x4f02,	// (0x00052495) list_form_graphic_pane_t1_ParamLimits

0x4f02,	// (0x00052495) list_form_graphic_pane_t1

0x78c7,	// (0x00054e5a) list_highlight_pane_cp5_ParamLimits

0x78c7,	// (0x00054e5a) list_highlight_pane_cp5

0x4f17,	// (0x000524aa) find_pane_g1

0x8289,	// (0x0005581c) input_find_pane

0x4f20,	// (0x000524b3) input_find_pane_g1_ParamLimits

0x4f20,	// (0x000524b3) input_find_pane_g1

0x4f2c,	// (0x000524bf) input_find_pane_t1_ParamLimits

0x4f2c,	// (0x000524bf) input_find_pane_t1

0x4f41,	// (0x000524d4) input_find_pane_t2_ParamLimits

0x4f41,	// (0x000524d4) input_find_pane_t2

0x0001,

0xf67f,	// (0x0005cc12) input_find_pane_t_ParamLimits

0xf67f,	// (0x0005cc12) input_find_pane_t

0x8292,	// (0x00055825) input_focus_pane_cp5_ParamLimits

0x8292,	// (0x00055825) input_focus_pane_cp5

0x85bf,	// (0x00055b52) bg_popup_window_pane_cp2_ParamLimits

0x85bf,	// (0x00055b52) bg_popup_window_pane_cp2

0x85cc,	// (0x00055b5f) listscroll_menu_pane_ParamLimits

0x85cc,	// (0x00055b5f) listscroll_menu_pane

0x85d8,	// (0x00055b6b) popup_submenu_window_ParamLimits

0x85d8,	// (0x00055b6b) popup_submenu_window

0x8604,	// (0x00055b97) find_popup_pane_g1

0x860c,	// (0x00055b9f) input_popup_find_pane_cp

0x8616,	// (0x00055ba9) input_focus_pane_cp4_ParamLimits

0x8616,	// (0x00055ba9) input_focus_pane_cp4

0x8630,	// (0x00055bc3) input_popup_find_pane_t1_ParamLimits

0x8630,	// (0x00055bc3) input_popup_find_pane_t1

0x19ea,	// (0x0004ef7d) bg_popup_sub_pane_cp

0x865e,	// (0x00055bf1) listscroll_popup_sub_pane

0x8666,	// (0x00055bf9) list_submenu_pane_ParamLimits

0x8666,	// (0x00055bf9) list_submenu_pane

0x8677,	// (0x00055c0a) scroll_pane_cp4

0x867f,	// (0x00055c12) list_single_popup_submenu_pane_ParamLimits

0x867f,	// (0x00055c12) list_single_popup_submenu_pane

0x8693,	// (0x00055c26) list_single_popup_submenu_pane_g1

0x869b,	// (0x00055c2e) list_single_popup_submenu_pane_t1_ParamLimits

0x869b,	// (0x00055c2e) list_single_popup_submenu_pane_t1

0x78c7,	// (0x00054e5a) bg_active_tab_pane_cp1_ParamLimits

0x78c7,	// (0x00054e5a) bg_active_tab_pane_cp1

0x86b0,	// (0x00055c43) tabs_2_active_pane_g1

0x86b8,	// (0x00055c4b) tabs_2_active_pane_t1

0x78c7,	// (0x00054e5a) bg_passive_tab_pane_cp1_ParamLimits

0x78c7,	// (0x00054e5a) bg_passive_tab_pane_cp1

0x86b0,	// (0x00055c43) tabs_2_passive_pane_g1

0x86b8,	// (0x00055c4b) tabs_2_passive_pane_t1

0x86ca,	// (0x00055c5d) bg_active_tab_pane_cp4

0x86d8,	// (0x00055c6b) tabs_2_long_active_pane_t1

0x86eb,	// (0x00055c7e) bg_passive_tab_pane_cp4

0x5c01,	// (0x00053194) list_single_midp_graphic_pane_g4_ParamLimits

0x86ca,	// (0x00055c5d) bg_active_tab_pane_cp5

0x86f7,	// (0x00055c8a) tabs_3_long_active_pane_t1

0x86eb,	// (0x00055c7e) bg_passive_tab_pane_cp5

0x5c01,	// (0x00053194) list_single_midp_graphic_pane_g4

0x78c7,	// (0x00054e5a) bg_popup_window_pane_cp13_ParamLimits

0x78c7,	// (0x00054e5a) bg_popup_window_pane_cp13

0x8712,	// (0x00055ca5) listscroll_popup_fast_pane_ParamLimits

0x8712,	// (0x00055ca5) listscroll_popup_fast_pane

0x8721,	// (0x00055cb4) grid_popup_fast_pane_ParamLimits

0x8721,	// (0x00055cb4) grid_popup_fast_pane

0x8733,	// (0x00055cc6) scroll_pane_cp9_ParamLimits

0x8733,	// (0x00055cc6) scroll_pane_cp9

0xc859,	// (0x00059dec) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc859,	// (0x00059dec) list_single_graphic_hl_pane_t1_cp2

0x8757,	// (0x00055cea) input_focus_pane_cp20_ParamLimits

0x8757,	// (0x00055cea) input_focus_pane_cp20

0x8765,	// (0x00055cf8) query_popup_data_pane_t1_ParamLimits

0x8765,	// (0x00055cf8) query_popup_data_pane_t1

0x8778,	// (0x00055d0b) query_popup_data_pane_t2_ParamLimits

0x8778,	// (0x00055d0b) query_popup_data_pane_t2

0x87be,	// (0x00055d51) query_popup_data_pane_t3_ParamLimits

0x87be,	// (0x00055d51) query_popup_data_pane_t3

0x87ff,	// (0x00055d92) query_popup_data_pane_t4_ParamLimits

0x87ff,	// (0x00055d92) query_popup_data_pane_t4

0x883b,	// (0x00055dce) query_popup_data_pane_t5_ParamLimits

0x883b,	// (0x00055dce) query_popup_data_pane_t5

0x0004,

0xf684,	// (0x0005cc17) query_popup_data_pane_t_ParamLimits

0xf684,	// (0x0005cc17) query_popup_data_pane_t

0x8241,	// (0x000557d4) bg_set_opt_pane_g1

0x8249,	// (0x000557dc) bg_set_opt_pane_g2

0x8251,	// (0x000557e4) bg_set_opt_pane_g3

0x8259,	// (0x000557ec) bg_set_opt_pane_g4

0x8261,	// (0x000557f4) bg_set_opt_pane_g5

0x8269,	// (0x000557fc) bg_set_opt_pane_g6

0x8271,	// (0x00055804) bg_set_opt_pane_g7

0x8279,	// (0x0005580c) bg_set_opt_pane_g8

0x8281,	// (0x00055814) bg_set_opt_pane_g9

0x0008,

0xf68f,	// (0x0005cc22) bg_set_opt_pane_g

0x5261,	// (0x000527f4) control_top_pane_stacon_ParamLimits

0x5261,	// (0x000527f4) control_top_pane_stacon

0x52b4,	// (0x00052847) signal_pane_stacon_ParamLimits

0x52b4,	// (0x00052847) signal_pane_stacon

0x8e46,	// (0x000563d9) stacon_top_pane_g1_ParamLimits

0x8e46,	// (0x000563d9) stacon_top_pane_g1

0x52d9,	// (0x0005286c) title_pane_stacon_ParamLimits

0x52d9,	// (0x0005286c) title_pane_stacon

0x5303,	// (0x00052896) uni_indicator_pane_stacon_ParamLimits

0x5303,	// (0x00052896) uni_indicator_pane_stacon

0x5318,	// (0x000528ab) battery_pane_stacon_ParamLimits

0x5318,	// (0x000528ab) battery_pane_stacon

0x535c,	// (0x000528ef) control_bottom_pane_stacon_ParamLimits

0x535c,	// (0x000528ef) control_bottom_pane_stacon

0x537f,	// (0x00052912) navi_pane_stacon_ParamLimits

0x537f,	// (0x00052912) navi_pane_stacon

0x8e68,	// (0x000563fb) stacon_bottom_pane_g1_ParamLimits

0x8e68,	// (0x000563fb) stacon_bottom_pane_g1

0x4f56,	// (0x000524e9) aid_levels_signal_lsc_ParamLimits

0x4f56,	// (0x000524e9) aid_levels_signal_lsc

0x4f6c,	// (0x000524ff) signal_pane_stacon_g1_ParamLimits

0x4f6c,	// (0x000524ff) signal_pane_stacon_g1

0x4f80,	// (0x00052513) signal_pane_stacon_g2_ParamLimits

0x4f80,	// (0x00052513) signal_pane_stacon_g2

0x0001,

0xf6a2,	// (0x0005cc35) signal_pane_stacon_g_ParamLimits

0xf6a2,	// (0x0005cc35) signal_pane_stacon_g

0x4fb5,	// (0x00052548) title_pane_stacon_t1_ParamLimits

0x4fb5,	// (0x00052548) title_pane_stacon_t1

0x887f,	// (0x00055e12) uni_indicator_pane_stacon_g1

0x8889,	// (0x00055e1c) uni_indicator_pane_stacon_g2

0x8893,	// (0x00055e26) uni_indicator_pane_stacon_g3

0x889d,	// (0x00055e30) uni_indicator_pane_stacon_g4

0x0003,

0xf6ae,	// (0x0005cc41) uni_indicator_pane_stacon_g

0x4fda,	// (0x0005256d) control_top_pane_stacon_g1

0x4fe2,	// (0x00052575) control_top_pane_stacon_t1_ParamLimits

0x4fe2,	// (0x00052575) control_top_pane_stacon_t1

0x5019,	// (0x000525ac) aid_levels_battery_lsc_ParamLimits

0x5019,	// (0x000525ac) aid_levels_battery_lsc

0x5030,	// (0x000525c3) battery_pane_stacon_g1_ParamLimits

0x5030,	// (0x000525c3) battery_pane_stacon_g1

0x5043,	// (0x000525d6) battery_pane_stacon_g2_ParamLimits

0x5043,	// (0x000525d6) battery_pane_stacon_g2

0x0001,

0xf6b7,	// (0x0005cc4a) battery_pane_stacon_g_ParamLimits

0xf6b7,	// (0x0005cc4a) battery_pane_stacon_g

0x5081,	// (0x00052614) navi_icon_pane_stacon

0x5095,	// (0x00052628) navi_navi_pane_stacon

0x5081,	// (0x00052614) navi_text_pane_stacon

0x4fda,	// (0x0005256d) control_bottom_pane_stacon_g1

0x50a9,	// (0x0005263c) control_bottom_pane_stacon_t1_ParamLimits

0x50a9,	// (0x0005263c) control_bottom_pane_stacon_t1

0x88c1,	// (0x00055e54) grid_app_pane_ParamLimits

0x88c1,	// (0x00055e54) grid_app_pane

0x88e3,	// (0x00055e76) scroll_pane_cp15_ParamLimits

0x88e3,	// (0x00055e76) scroll_pane_cp15

0x88f6,	// (0x00055e89) cell_app_pane_ParamLimits

0x88f6,	// (0x00055e89) cell_app_pane

0x891e,	// (0x00055eb1) cell_app_pane_g1_ParamLimits

0x891e,	// (0x00055eb1) cell_app_pane_g1

0x8942,	// (0x00055ed5) cell_app_pane_g2_ParamLimits

0x8942,	// (0x00055ed5) cell_app_pane_g2

0x0001,

0xf6bc,	// (0x0005cc4f) cell_app_pane_g_ParamLimits

0xf6bc,	// (0x0005cc4f) cell_app_pane_g

0x894e,	// (0x00055ee1) cell_app_pane_t1_ParamLimits

0x894e,	// (0x00055ee1) cell_app_pane_t1

0x8965,	// (0x00055ef8) grid_highlight_pane_ParamLimits

0x8965,	// (0x00055ef8) grid_highlight_pane

0x8241,	// (0x000557d4) cell_highlight_pane_g1

0x8249,	// (0x000557dc) cell_highlight_pane_g2

0x8251,	// (0x000557e4) cell_highlight_pane_g3

0x8259,	// (0x000557ec) cell_highlight_pane_g4

0x8261,	// (0x000557f4) cell_highlight_pane_g5

0x8269,	// (0x000557fc) cell_highlight_pane_g6

0x8271,	// (0x00055804) cell_highlight_pane_g7

0x8279,	// (0x0005580c) cell_highlight_pane_g8

0x8281,	// (0x00055814) cell_highlight_pane_g9

0x19e0,	// (0x0004ef73) cell_highlight_pane_g10

0x0009,

0xf66a,	// (0x0005cbfd) cell_highlight_pane_g

0x8976,	// (0x00055f09) bg_scroll_pane

0x50f3,	// (0x00052686) scroll_handle_pane

0x89bd,	// (0x00055f50) scroll_bg_pane_g1

0x89d2,	// (0x00055f65) scroll_bg_pane_g2

0x89ea,	// (0x00055f7d) scroll_bg_pane_g3

0x0002,

0xf6c1,	// (0x0005cc54) scroll_bg_pane_g

0x89ff,	// (0x00055f92) scroll_handle_focus_pane_ParamLimits

0x89ff,	// (0x00055f92) scroll_handle_focus_pane

0x89bd,	// (0x00055f50) scroll_handle_pane_g1

0x8a0c,	// (0x00055f9f) scroll_handle_pane_g2

0x89ea,	// (0x00055f7d) scroll_handle_pane_g3

0x0002,

0xf6c8,	// (0x0005cc5b) scroll_handle_pane_g

0x8616,	// (0x00055ba9) bg_popup_sub_pane_cp21_ParamLimits

0x8616,	// (0x00055ba9) bg_popup_sub_pane_cp21

0x8a20,	// (0x00055fb3) popup_fep_japan_predictive_window_t1_ParamLimits

0x8a20,	// (0x00055fb3) popup_fep_japan_predictive_window_t1

0x8a3a,	// (0x00055fcd) popup_fep_japan_predictive_window_t2_ParamLimits

0x8a3a,	// (0x00055fcd) popup_fep_japan_predictive_window_t2

0x8a6d,	// (0x00056000) popup_fep_japan_predictive_window_t3_ParamLimits

0x8a6d,	// (0x00056000) popup_fep_japan_predictive_window_t3

0x0002,

0xf6cf,	// (0x0005cc62) popup_fep_japan_predictive_window_t_ParamLimits

0xf6cf,	// (0x0005cc62) popup_fep_japan_predictive_window_t

0x19ea,	// (0x0004ef7d) bg_popup_sub_pane_cp23

0x8aa4,	// (0x00056037) listscroll_japin_cand_pane

0x8aac,	// (0x0005603f) popup_fep_japan_candidate_window_t1

0x8aba,	// (0x0005604d) candidate_pane_ParamLimits

0x8aba,	// (0x0005604d) candidate_pane

0x8acc,	// (0x0005605f) scroll_pane_cp30

0x8ad4,	// (0x00056067) list_single_popup_jap_candidate_pane_ParamLimits

0x8ad4,	// (0x00056067) list_single_popup_jap_candidate_pane

0x19ea,	// (0x0004ef7d) list_highlight_pane_cp30

0x8ae9,	// (0x0005607c) list_single_popup_jap_candidate_pane_t1

0x8af8,	// (0x0005608b) level_1_signal

0x8b0a,	// (0x0005609d) level_2_signal

0x8b1d,	// (0x000560b0) level_3_signal

0x8b30,	// (0x000560c3) level_4_signal

0x8b43,	// (0x000560d6) level_5_signal

0x8b56,	// (0x000560e9) level_6_signal

0x8b69,	// (0x000560fc) level_7_signal

0x8af8,	// (0x0005608b) level_1_battery

0x8b0a,	// (0x0005609d) level_2_battery

0x8b1d,	// (0x000560b0) level_3_battery

0x8b30,	// (0x000560c3) level_4_battery

0x8b43,	// (0x000560d6) level_5_battery

0x8b56,	// (0x000560e9) level_6_battery

0x8b69,	// (0x000560fc) level_7_battery

0x8b94,	// (0x00056127) list_menu_pane_ParamLimits

0x8b94,	// (0x00056127) list_menu_pane

0x8baa,	// (0x0005613d) scroll_pane_cp25_ParamLimits

0x8baa,	// (0x0005613d) scroll_pane_cp25

0x8bc3,	// (0x00056156) list_double2_graphic_pane_cp2_ParamLimits

0x8bc3,	// (0x00056156) list_double2_graphic_pane_cp2

0x8bc3,	// (0x00056156) list_double2_large_graphic_pane_cp2_ParamLimits

0x8bc3,	// (0x00056156) list_double2_large_graphic_pane_cp2

0x8bc3,	// (0x00056156) list_double2_pane_cp2_ParamLimits

0x8bc3,	// (0x00056156) list_double2_pane_cp2

0x8bc3,	// (0x00056156) list_double_graphic_pane_cp2_ParamLimits

0x8bc3,	// (0x00056156) list_double_graphic_pane_cp2

0x8bc3,	// (0x00056156) list_double_large_graphic_pane_cp2_ParamLimits

0x8bc3,	// (0x00056156) list_double_large_graphic_pane_cp2

0x8bc3,	// (0x00056156) list_double_number_pane_cp2_ParamLimits

0x8bc3,	// (0x00056156) list_double_number_pane_cp2

0x8bc3,	// (0x00056156) list_double_pane_cp2_ParamLimits

0x8bc3,	// (0x00056156) list_double_pane_cp2

0x8be7,	// (0x0005617a) list_single_2graphic_pane_cp2_ParamLimits

0x8be7,	// (0x0005617a) list_single_2graphic_pane_cp2

0x8be7,	// (0x0005617a) list_single_graphic_heading_pane_cp2_ParamLimits

0x8be7,	// (0x0005617a) list_single_graphic_heading_pane_cp2

0x8be7,	// (0x0005617a) list_single_graphic_pane_cp2_ParamLimits

0x8be7,	// (0x0005617a) list_single_graphic_pane_cp2

0x8be7,	// (0x0005617a) list_single_heading_pane_cp2_ParamLimits

0x8be7,	// (0x0005617a) list_single_heading_pane_cp2

0x8c00,	// (0x00056193) list_single_large_graphic_pane_cp2_ParamLimits

0x8c00,	// (0x00056193) list_single_large_graphic_pane_cp2

0x8be7,	// (0x0005617a) list_single_number_heading_pane_cp2_ParamLimits

0x8be7,	// (0x0005617a) list_single_number_heading_pane_cp2

0x8be7,	// (0x0005617a) list_single_number_pane_cp2_ParamLimits

0x8be7,	// (0x0005617a) list_single_number_pane_cp2

0x8c11,	// (0x000561a4) list_single_pane_cp2_ParamLimits

0x8c11,	// (0x000561a4) list_single_pane_cp2

0x8c95,	// (0x00056228) bg_popup_sub_pane_cp22

0x51a5,	// (0x00052738) popup_side_volume_key_window_g1

0x51cf,	// (0x00052762) popup_side_volume_key_window_t1

0x51eb,	// (0x0005277e) volume_small_pane_cp1

0x7b42,	// (0x000550d5) bg_popup_sub_pane_cp24_ParamLimits

0x7b42,	// (0x000550d5) bg_popup_sub_pane_cp24

0x8cab,	// (0x0005623e) fep_china_uni_candidate_pane_ParamLimits

0x8cab,	// (0x0005623e) fep_china_uni_candidate_pane

0x8cbf,	// (0x00056252) fep_china_uni_entry_pane

0x8ccf,	// (0x00056262) popup_fep_china_uni_window_g1

0x8ceb,	// (0x0005627e) fep_china_uni_entry_pane_g1

0x8cf3,	// (0x00056286) fep_china_uni_entry_pane_g2

0x0001,

0xf700,	// (0x0005cc93) fep_china_uni_entry_pane_g

0x8cfb,	// (0x0005628e) fep_entry_item_pane

0x8d05,	// (0x00056298) fep_candidate_item_pane

0x8d0d,	// (0x000562a0) fep_china_uni_candidate_pane_g1

0x8d15,	// (0x000562a8) fep_china_uni_candidate_pane_g2

0x8d1d,	// (0x000562b0) fep_china_uni_candidate_pane_g3

0x8d25,	// (0x000562b8) fep_china_uni_candidate_pane_g4

0x0003,

0xf705,	// (0x0005cc98) fep_china_uni_candidate_pane_g

0x19e0,	// (0x0004ef73) fep_entry_item_pane_g1

0x8d2d,	// (0x000562c0) fep_entry_item_pane_t1_ParamLimits

0x8d2d,	// (0x000562c0) fep_entry_item_pane_t1

0x8d43,	// (0x000562d6) fep_candidate_item_pane_t1_ParamLimits

0x8d43,	// (0x000562d6) fep_candidate_item_pane_t1

0x8d58,	// (0x000562eb) fep_candidate_item_pane_t2_ParamLimits

0x8d58,	// (0x000562eb) fep_candidate_item_pane_t2

0x0001,

0xf70e,	// (0x0005cca1) fep_candidate_item_pane_t_ParamLimits

0xf70e,	// (0x0005cca1) fep_candidate_item_pane_t

0x78c7,	// (0x00054e5a) list_highlight_pane_cp31_ParamLimits

0x78c7,	// (0x00054e5a) list_highlight_pane_cp31

0x8d6a,	// (0x000562fd) level_1_signal_lsc

0x8d73,	// (0x00056306) level_2_signal_lsc

0x8d7c,	// (0x0005630f) level_3_signal_lsc

0x8d85,	// (0x00056318) level_4_signal_lsc

0x8d8e,	// (0x00056321) level_5_signal_lsc

0x8d97,	// (0x0005632a) level_6_signal_lsc

0x8da0,	// (0x00056333) level_7_signal_lsc

0x8da0,	// (0x00056333) level_1_battery_lsc

0x8da9,	// (0x0005633c) level_2_battery_lsc

0x8db2,	// (0x00056345) level_3_battery_lsc

0x8dbb,	// (0x0005634e) level_4_battery_lsc

0x8dc4,	// (0x00056357) level_5_battery_lsc

0x8dcd,	// (0x00056360) level_6_battery_lsc

0x8d6a,	// (0x000562fd) level_7_battery_lsc

0x8dd6,	// (0x00056369) scroll_handle_focus_pane_g1

0x8ddf,	// (0x00056372) scroll_handle_focus_pane_g2

0x8de8,	// (0x0005637b) scroll_handle_focus_pane_g3

0x0002,

0xf713,	// (0x0005cca6) scroll_handle_focus_pane_g

0x51f3,	// (0x00052786) list_single_2graphic_pane_g1_ParamLimits

0x51f3,	// (0x00052786) list_single_2graphic_pane_g1

0x8119,	// (0x000556ac) list_single_2graphic_pane_g2_ParamLimits

0x8119,	// (0x000556ac) list_single_2graphic_pane_g2

0x80fb,	// (0x0005568e) list_single_2graphic_pane_g3_ParamLimits

0x80fb,	// (0x0005568e) list_single_2graphic_pane_g3

0x51ff,	// (0x00052792) list_single_2graphic_pane_g4_ParamLimits

0x51ff,	// (0x00052792) list_single_2graphic_pane_g4

0x0003,

0xf71a,	// (0x0005ccad) list_single_2graphic_pane_g_ParamLimits

0xf71a,	// (0x0005ccad) list_single_2graphic_pane_g

0x520b,	// (0x0005279e) list_single_2graphic_pane_t1_ParamLimits

0x520b,	// (0x0005279e) list_single_2graphic_pane_t1

0x82a5,	// (0x00055838) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x82a5,	// (0x00055838) list_double2_graphic_large_graphic_pane_g1

0x4aff,	// (0x00052092) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x4aff,	// (0x00052092) list_double2_graphic_large_graphic_pane_g2

0x817b,	// (0x0005570e) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x817b,	// (0x0005570e) list_double2_graphic_large_graphic_pane_g3

0x82b5,	// (0x00055848) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x82b5,	// (0x00055848) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf723,	// (0x0005ccb6) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf723,	// (0x0005ccb6) list_double2_graphic_large_graphic_pane_g

0x5239,	// (0x000527cc) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x5239,	// (0x000527cc) list_double2_graphic_large_graphic_pane_t1

0x524f,	// (0x000527e2) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x524f,	// (0x000527e2) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf72c,	// (0x0005ccbf) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf72c,	// (0x0005ccbf) list_double2_graphic_large_graphic_pane_t

0x8f33,	// (0x000564c6) popup_fast_swap_window_ParamLimits

0x8f33,	// (0x000564c6) popup_fast_swap_window

0x8f4f,	// (0x000564e2) popup_side_volume_key_window

0x8f6b,	// (0x000564fe) stacon_top_pane

0x8f75,	// (0x00056508) status_pane_ParamLimits

0x8f75,	// (0x00056508) status_pane

0x19d6,	// (0x0004ef69) status_small_pane

0x19ea,	// (0x0004ef7d) control_pane

0x19ea,	// (0x0004ef7d) stacon_bottom_pane

0x81d8,	// (0x0005576b) scroll_pane_cp121

0x81cf,	// (0x00055762) set_content_pane

0x8df1,	// (0x00056384) bg_active_tab_pane_g1_cp1

0x8dfa,	// (0x0005638d) bg_active_tab_pane_g2_cp1

0x8e03,	// (0x00056396) bg_active_tab_pane_g3_cp1

0x8df1,	// (0x00056384) bg_passive_tab_pane_g1_cp1

0x8dfa,	// (0x0005638d) bg_passive_tab_pane_g2_cp1

0x8e03,	// (0x00056396) bg_passive_tab_pane_g3_cp1

0x8e0c,	// (0x0005639f) bg_active_tab_pane_g1_cp2

0x8dfa,	// (0x0005638d) bg_active_tab_pane_g2_cp2

0x8e15,	// (0x000563a8) bg_active_tab_pane_g3_cp2

0x8e0c,	// (0x0005639f) bg_passive_tab_pane_g1_cp2

0x8dfa,	// (0x0005638d) bg_passive_tab_pane_g2_cp2

0x8e15,	// (0x000563a8) bg_passive_tab_pane_g3_cp2

0x8e1e,	// (0x000563b1) bg_active_tab_pane_g1_cp3

0x8dfa,	// (0x0005638d) bg_active_tab_pane_g2_cp3

0x8e27,	// (0x000563ba) bg_active_tab_pane_g3_cp3

0x8e1e,	// (0x000563b1) bg_passive_tab_pane_g1_cp3

0x8dfa,	// (0x0005638d) bg_passive_tab_pane_g2_cp3

0x8e27,	// (0x000563ba) bg_passive_tab_pane_g3_cp3

0x8e30,	// (0x000563c3) bg_active_tab_pane_g1_cp4

0x8dfa,	// (0x0005638d) bg_active_tab_pane_g2_cp4

0x8e3b,	// (0x000563ce) bg_active_tab_pane_g3_cp4

0x8e30,	// (0x000563c3) bg_passive_tab_pane_g1_cp4

0x8dfa,	// (0x0005638d) bg_passive_tab_pane_g2_cp4

0x8e3b,	// (0x000563ce) bg_passive_tab_pane_g3_cp4

0x8e84,	// (0x00056417) bg_active_tab_pane_g1_cp5

0x8dfa,	// (0x0005638d) bg_active_tab_pane_g2_cp5

0x8e8d,	// (0x00056420) bg_active_tab_pane_g3_cp5

0x8e84,	// (0x00056417) bg_passive_tab_pane_g1_cp5

0x8dfa,	// (0x0005638d) bg_passive_tab_pane_g2_cp5

0x8e8d,	// (0x00056420) bg_passive_tab_pane_g3_cp5

0x8e96,	// (0x00056429) list_set_graphic_pane_ParamLimits

0x8e96,	// (0x00056429) list_set_graphic_pane

0x19ea,	// (0x0004ef7d) bg_set_opt_pane_cp4

0x8eb6,	// (0x00056449) list_set_graphic_pane_g1_ParamLimits

0x8eb6,	// (0x00056449) list_set_graphic_pane_g1

0x8ec2,	// (0x00056455) list_set_graphic_pane_g2_ParamLimits

0x8ec2,	// (0x00056455) list_set_graphic_pane_g2

0x0001,

0xf731,	// (0x0005ccc4) list_set_graphic_pane_g_ParamLimits

0xf731,	// (0x0005ccc4) list_set_graphic_pane_g

0x0009,

0xfaad,	// (0x0005d040) volume_small_pane_cp_g

0x8ee6,	// (0x00056479) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x8ee6,	// (0x00056479) list_double2_large_graphic_pane_g1_cp2

0x8ef2,	// (0x00056485) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x8ef2,	// (0x00056485) list_double2_large_graphic_pane_g2_cp2

0x8f03,	// (0x00056496) list_double2_large_graphic_pane_g3_cp2

0x8f0b,	// (0x0005649e) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x8f0b,	// (0x0005649e) list_double2_large_graphic_pane_t1_cp2

0x8f21,	// (0x000564b4) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x8f21,	// (0x000564b4) list_double2_large_graphic_pane_t2_cp2

0xaaf7,	// (0x0005808a) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xaaf7,	// (0x0005808a) list_double_large_graphic_pane_g1_cp2

0xab08,	// (0x0005809b) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xab08,	// (0x0005809b) list_double_large_graphic_pane_g2_cp2

0x9091,	// (0x00056624) list_double_large_graphic_pane_g3_cp2

0xab19,	// (0x000580ac) list_double_large_graphic_pane_g4_cp

0xab21,	// (0x000580b4) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xab21,	// (0x000580b4) list_double_large_graphic_pane_t1_cp2

0xab38,	// (0x000580cb) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xab38,	// (0x000580cb) list_double_large_graphic_pane_t2_cp2

0x8f83,	// (0x00056516) list_double2_graphic_pane_g1_cp2_ParamLimits

0x8f83,	// (0x00056516) list_double2_graphic_pane_g1_cp2

0x8f91,	// (0x00056524) list_double2_graphic_pane_g2_cp2_ParamLimits

0x8f91,	// (0x00056524) list_double2_graphic_pane_g2_cp2

0x8fa2,	// (0x00056535) list_double2_graphic_pane_g3_cp2

0x8fac,	// (0x0005653f) list_double2_graphic_pane_t1_cp2_ParamLimits

0x8fac,	// (0x0005653f) list_double2_graphic_pane_t1_cp2

0x8fc2,	// (0x00056555) list_double2_graphic_pane_t2_cp2_ParamLimits

0x8fc2,	// (0x00056555) list_double2_graphic_pane_t2_cp2

0x8fd4,	// (0x00056567) list_single_number_heading_pane_g1_cp2_ParamLimits

0x8fd4,	// (0x00056567) list_single_number_heading_pane_g1_cp2

0x8fe0,	// (0x00056573) list_single_number_heading_pane_g2_cp2

0x8fe8,	// (0x0005657b) list_single_number_heading_pane_t1_cp2_ParamLimits

0x8fe8,	// (0x0005657b) list_single_number_heading_pane_t1_cp2

0x8ffe,	// (0x00056591) list_single_number_heading_pane_t2_cp2_ParamLimits

0x8ffe,	// (0x00056591) list_single_number_heading_pane_t2_cp2

0x9010,	// (0x000565a3) list_single_number_heading_pane_t3_cp2_ParamLimits

0x9010,	// (0x000565a3) list_single_number_heading_pane_t3_cp2

0x8fd4,	// (0x00056567) list_single_heading_pane_g1_cp2_ParamLimits

0x8fd4,	// (0x00056567) list_single_heading_pane_g1_cp2

0x8fe0,	// (0x00056573) list_single_heading_pane_g2_cp2

0x8fe8,	// (0x0005657b) list_single_heading_pane_t1_cp2_ParamLimits

0x8fe8,	// (0x0005657b) list_single_heading_pane_t1_cp2

0xa8ff,	// (0x00057e92) list_single_heading_pane_t2_cp2_ParamLimits

0xa8ff,	// (0x00057e92) list_single_heading_pane_t2_cp2

0xa847,	// (0x00057dda) list_double_graphic_pane_g1_cp2_ParamLimits

0xa847,	// (0x00057dda) list_double_graphic_pane_g1_cp2

0xa853,	// (0x00057de6) list_double_graphic_pane_g2_cp2_ParamLimits

0xa853,	// (0x00057de6) list_double_graphic_pane_g2_cp2

0xa862,	// (0x00057df5) list_double_graphic_pane_g3_cp2

0xa86a,	// (0x00057dfd) list_double_graphic_pane_t1_cp2_ParamLimits

0xa86a,	// (0x00057dfd) list_double_graphic_pane_t1_cp2

0xa880,	// (0x00057e13) list_double_graphic_pane_t2_cp2_ParamLimits

0xa880,	// (0x00057e13) list_double_graphic_pane_t2_cp2

0x9085,	// (0x00056618) list_double_number_pane_g1_cp2_ParamLimits

0x9085,	// (0x00056618) list_double_number_pane_g1_cp2

0x9091,	// (0x00056624) list_double_number_pane_g2_cp2

0xa80b,	// (0x00057d9e) list_double_number_pane_t1_cp2_ParamLimits

0xa80b,	// (0x00057d9e) list_double_number_pane_t1_cp2

0xa81f,	// (0x00057db2) list_double_number_pane_t2_cp2_ParamLimits

0xa81f,	// (0x00057db2) list_double_number_pane_t2_cp2

0xa835,	// (0x00057dc8) list_double_number_pane_t3_cp2_ParamLimits

0xa835,	// (0x00057dc8) list_double_number_pane_t3_cp2

0xa6f4,	// (0x00057c87) list_single_graphic_pane_g1_cp2_ParamLimits

0xa6f4,	// (0x00057c87) list_single_graphic_pane_g1_cp2

0x90f6,	// (0x00056689) list_single_graphic_pane_g2_cp2_ParamLimits

0x90f6,	// (0x00056689) list_single_graphic_pane_g2_cp2

0x9102,	// (0x00056695) list_single_graphic_pane_g3_cp2

0xa6ca,	// (0x00057c5d) list_single_graphic_pane_t1_cp2_ParamLimits

0xa6ca,	// (0x00057c5d) list_single_graphic_pane_t1_cp2

0x90f6,	// (0x00056689) list_single_number_pane_g1_cp2_ParamLimits

0x90f6,	// (0x00056689) list_single_number_pane_g1_cp2

0x9102,	// (0x00056695) list_single_number_pane_g2_cp2

0xa6ca,	// (0x00057c5d) list_single_number_pane_t1_cp2_ParamLimits

0xa6ca,	// (0x00057c5d) list_single_number_pane_t1_cp2

0xa6e0,	// (0x00057c73) list_single_number_pane_t2_cp2_ParamLimits

0xa6e0,	// (0x00057c73) list_single_number_pane_t2_cp2

0x8ef2,	// (0x00056485) list_double2_pane_g1_cp2_ParamLimits

0x8ef2,	// (0x00056485) list_double2_pane_g1_cp2

0x8f03,	// (0x00056496) list_double2_pane_g2_cp2

0x905d,	// (0x000565f0) list_double2_pane_t1_cp2_ParamLimits

0x905d,	// (0x000565f0) list_double2_pane_t1_cp2

0x9073,	// (0x00056606) list_double2_pane_t2_cp2_ParamLimits

0x9073,	// (0x00056606) list_double2_pane_t2_cp2

0x9085,	// (0x00056618) list_double_pane_g1_cp2_ParamLimits

0x9085,	// (0x00056618) list_double_pane_g1_cp2

0x9091,	// (0x00056624) list_double_pane_g2_cp2

0x9099,	// (0x0005662c) list_double_pane_t1_cp2_ParamLimits

0x9099,	// (0x0005662c) list_double_pane_t1_cp2

0x90af,	// (0x00056642) list_double_pane_t2_cp2_ParamLimits

0x90af,	// (0x00056642) list_double_pane_t2_cp2

0x90e6,	// (0x00056679) list_single_pane_cp2_g3

0x90f6,	// (0x00056689) list_single_pane_g1_cp2_ParamLimits

0x90f6,	// (0x00056689) list_single_pane_g1_cp2

0x9102,	// (0x00056695) list_single_pane_g2_cp2

0x910a,	// (0x0005669d) list_single_pane_t1_cp2_ParamLimits

0x910a,	// (0x0005669d) list_single_pane_t1_cp2

0x9122,	// (0x000566b5) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x9122,	// (0x000566b5) list_single_large_graphic_pane_g1_cp2

0x85a7,	// (0x00055b3a) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x85a7,	// (0x00055b3a) list_single_large_graphic_pane_g2_cp2

0x912e,	// (0x000566c1) list_single_large_graphic_pane_g3_cp2

0x9136,	// (0x000566c9) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x9136,	// (0x000566c9) list_single_large_graphic_pane_g4_cp1

0x9150,	// (0x000566e3) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x9150,	// (0x000566e3) list_single_large_graphic_pane_t1_cp2

0xa696,	// (0x00057c29) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa696,	// (0x00057c29) list_single_graphic_heading_pane_g1_cp2

0xa663,	// (0x00057bf6) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa663,	// (0x00057bf6) list_single_graphic_heading_pane_g4_cp2

0x9102,	// (0x00056695) list_single_graphic_heading_pane_g5_cp2

0xa6a2,	// (0x00057c35) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa6a2,	// (0x00057c35) list_single_graphic_heading_pane_t1_cp2

0xa6b8,	// (0x00057c4b) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa6b8,	// (0x00057c4b) list_single_graphic_heading_pane_t2_cp2

0xa657,	// (0x00057bea) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa657,	// (0x00057bea) list_single_2graphic_pane_g1_cp2

0xa663,	// (0x00057bf6) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa663,	// (0x00057bf6) list_single_2graphic_pane_g2_cp2

0x9102,	// (0x00056695) list_single_2graphic_pane_g3_cp2

0xa674,	// (0x00057c07) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa674,	// (0x00057c07) list_single_2graphic_pane_g4_cp2

0xa680,	// (0x00057c13) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa680,	// (0x00057c13) list_single_2graphic_pane_t1_cp2

0x19e0,	// (0x0004ef73) list_highlight_pane_g10_cp1

0xa22f,	// (0x000577c2) list_highlight_pane_g1_cp1

0xa237,	// (0x000577ca) list_highlight_pane_g2_cp1

0xa23f,	// (0x000577d2) list_highlight_pane_g3_cp1

0xa247,	// (0x000577da) list_highlight_pane_g4_cp1

0xa24f,	// (0x000577e2) list_highlight_pane_g5_cp1

0xa257,	// (0x000577ea) list_highlight_pane_g6_cp1

0xa25f,	// (0x000577f2) list_highlight_pane_g7_cp1

0xa267,	// (0x000577fa) list_highlight_pane_g8_cp1

0xa26f,	// (0x00057802) list_highlight_pane_g9_cp1

0xa14f,	// (0x000576e2) form_field_slider_pane_t3

0xa15d,	// (0x000576f0) form_field_slider_pane_t4

0xa16b,	// (0x000576fe) slider_form_pane_ParamLimits

0xa16b,	// (0x000576fe) slider_form_pane

0x19ea,	// (0x0004ef7d) control_abbreviations

0x19ea,	// (0x0004ef7d) control_conventions

0x19ea,	// (0x0004ef7d) control_definitions

0x19ea,	// (0x0004ef7d) format_table_attribute

0xa949,	// (0x00057edc) bg_popup_preview_window_pane_g9

0x19ea,	// (0x0004ef7d) format_table_data2

0x19ea,	// (0x0004ef7d) format_table_data3

0x19ea,	// (0x0004ef7d) format_table_data_example

0x0008,

0x19ea,	// (0x0004ef7d) intro_purpose

0xf8c8,	// (0x0005ce5b) bg_popup_preview_window_pane_g

0x19ea,	// (0x0004ef7d) texts_category

0x19ea,	// (0x0004ef7d) texts_graphics

0x9166,	// (0x000566f9) text_digital

0x9175,	// (0x00056708) text_primary

0x9184,	// (0x00056717) text_primary_small

0x9193,	// (0x00056726) text_secondary

0x91a2,	// (0x00056735) text_title

0xb05a,	// (0x000585ed) bg_passive_tab_pane_g1_cp3_srt

0x8dfa,	// (0x0005638d) bg_passive_tab_pane_g2_cp3_srt

0xb063,	// (0x000585f6) bg_passive_tab_pane_g3_cp3_srt

0x78c7,	// (0x00054e5a) bg_active_tab_pane_cp3_srt_ParamLimits

0x78c7,	// (0x00054e5a) bg_active_tab_pane_cp3_srt

0xb06c,	// (0x000585ff) tabs_4_active_pane_srt_g1

0xb074,	// (0x00058607) tabs_4_active_pane_srt_t1_ParamLimits

0xb074,	// (0x00058607) tabs_4_active_pane_srt_t1

0xb05a,	// (0x000585ed) bg_active_tab_pane_g1_cp3_copy1

0x8dfa,	// (0x0005638d) bg_active_tab_pane_g2_cp3_copy1

0xb063,	// (0x000585f6) bg_active_tab_pane_g3_cp3_copy1

0x78c7,	// (0x00054e5a) tabs_2_long_active_pane_srt_ParamLimits

0x78c7,	// (0x00054e5a) tabs_2_long_active_pane_srt

0x78c7,	// (0x00054e5a) tabs_2_long_passive_pane_srt_ParamLimits

0x78c7,	// (0x00054e5a) tabs_2_long_passive_pane_srt

0x86eb,	// (0x00055c7e) bg_passive_tab_pane_cp4_srt_ParamLimits

0x86eb,	// (0x00055c7e) bg_passive_tab_pane_cp4_srt

0xad67,	// (0x000582fa) bg_passive_tab_pane_g1_cp4_srt

0x8dfa,	// (0x0005638d) bg_passive_tab_pane_g2_cp4_srt

0xad70,	// (0x00058303) bg_passive_tab_pane_g3_cp4_srt

0x86ca,	// (0x00055c5d) bg_active_tab_pane_cp4_srt_ParamLimits

0x86ca,	// (0x00055c5d) bg_active_tab_pane_cp4_srt

0xad79,	// (0x0005830c) tabs_2_long_active_pane_srt_t1_ParamLimits

0xad79,	// (0x0005830c) tabs_2_long_active_pane_srt_t1

0xad67,	// (0x000582fa) bg_active_tab_pane_g1_cp4_srt

0x8dfa,	// (0x0005638d) bg_active_tab_pane_g2_cp4_srt

0xad70,	// (0x00058303) bg_active_tab_pane_g3_cp4_srt

0x7b42,	// (0x000550d5) tabs_3_long_active_pane_srt_ParamLimits

0x7b42,	// (0x000550d5) tabs_3_long_active_pane_srt

0x7b42,	// (0x000550d5) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x7b42,	// (0x000550d5) tabs_3_long_passive_pane_cp_srt

0x7b42,	// (0x000550d5) tabs_3_long_passive_pane_srt_ParamLimits

0x7b42,	// (0x000550d5) tabs_3_long_passive_pane_srt

0x86eb,	// (0x00055c7e) bg_passive_tab_pane_cp5_srt_ParamLimits

0x86eb,	// (0x00055c7e) bg_passive_tab_pane_cp5_srt

0x8e84,	// (0x00056417) bg_passive_tab_pane_g1_cp5_srt

0x8dfa,	// (0x0005638d) bg_passive_tab_pane_g2_cp5_srt

0x8e8d,	// (0x00056420) bg_passive_tab_pane_g3_cp5_srt

0x86ca,	// (0x00055c5d) bg_active_tab_pane_cp5_srt_ParamLimits

0x86ca,	// (0x00055c5d) bg_active_tab_pane_cp5_srt

0xad55,	// (0x000582e8) tabs_3_long_active_pane_srt_t1_ParamLimits

0xad55,	// (0x000582e8) tabs_3_long_active_pane_srt_t1

0x8e84,	// (0x00056417) bg_active_tab_pane_g1_cp5_srt

0x8dfa,	// (0x0005638d) bg_active_tab_pane_g2_cp5_srt

0x8e8d,	// (0x00056420) bg_active_tab_pane_g3_cp5_srt

0xad47,	// (0x000582da) navi_text_pane_srt_t1

0xad3f,	// (0x000582d2) navi_icon_pane_srt_g1

0x9377,	// (0x0005690a) midp_editing_number_pane_srt

0x91b1,	// (0x00056744) midp_ticker_pane_srt

0x937f,	// (0x00056912) midp_ticker_pane_srt_g1

0x9387,	// (0x0005691a) midp_ticker_pane_srt_g2

0x0001,

0xf750,	// (0x0005cce3) midp_ticker_pane_srt_g

0x938f,	// (0x00056922) midp_ticker_pane_srt_t1

0xad30,	// (0x000582c3) midp_editing_number_pane_t1_copy1

0x91b9,	// (0x0005674c) listscroll_midp_pane

0x91b9,	// (0x0005674c) midp_form_pane

0x9229,	// (0x000567bc) midp_info_popup_window_ParamLimits

0x9229,	// (0x000567bc) midp_info_popup_window

0x8616,	// (0x00055ba9) bg_popup_sub_pane_cp50_ParamLimits

0x8616,	// (0x00055ba9) bg_popup_sub_pane_cp50

0x9e53,	// (0x000573e6) listscroll_midp_info_pane_ParamLimits

0x9e53,	// (0x000573e6) listscroll_midp_info_pane

0x9e33,	// (0x000573c6) listscroll_form_midp_pane_ParamLimits

0x9e33,	// (0x000573c6) listscroll_form_midp_pane

0x9e3f,	// (0x000573d2) scroll_bar_cp050

0x9e13,	// (0x000573a6) list_midp_pane

0xbad8,	// (0x0005906b) signal_pane_g2_cp

0x9d4d,	// (0x000572e0) listscroll_midp_info_pane_t1_ParamLimits

0x9d4d,	// (0x000572e0) listscroll_midp_info_pane_t1

0x9d65,	// (0x000572f8) listscroll_midp_info_pane_t2_ParamLimits

0x9d65,	// (0x000572f8) listscroll_midp_info_pane_t2

0x9da3,	// (0x00057336) listscroll_midp_info_pane_t3_ParamLimits

0x9da3,	// (0x00057336) listscroll_midp_info_pane_t3

0x9ddd,	// (0x00057370) listscroll_midp_info_pane_t4_ParamLimits

0x9ddd,	// (0x00057370) listscroll_midp_info_pane_t4

0x0003,

0xf803,	// (0x0005cd96) listscroll_midp_info_pane_t_ParamLimits

0xf803,	// (0x0005cd96) listscroll_midp_info_pane_t

0x8677,	// (0x00055c0a) scroll_pane_cp21

0x9ceb,	// (0x0005727e) form_midp_field_choice_group_pane

0x9cf4,	// (0x00057287) form_midp_field_text_pane

0x9d33,	// (0x000572c6) form_midp_field_time_pane

0x9d3b,	// (0x000572ce) form_midp_gauge_slider_pane

0x9d44,	// (0x000572d7) form_midp_gauge_wait_pane

0x19ea,	// (0x0004ef7d) form_midp_image_pane

0x5d8f,	// (0x00053322) list_single_midp_pane_ParamLimits

0x5d8f,	// (0x00053322) list_single_midp_pane

0x9ca3,	// (0x00057236) form_midp_field_text_pane_t1

0x9a73,	// (0x00057006) input_focus_pane_cp050

0x9cda,	// (0x0005726d) list_midp_form_text_pane

0x9c72,	// (0x00057205) form_midp_field_choice_group_pane_t1

0x9c80,	// (0x00057213) input_focus_pane_cp051

0x9c94,	// (0x00057227) list_midp_choice_pane

0x19ea,	// (0x0004ef7d) status_idle_pane

0x9c56,	// (0x000571e9) form_midp_field_time_pane_t1

0x19e0,	// (0x0004ef73) wait_anim_pane_g2_copy1

0x9c64,	// (0x000571f7) form_midp_field_time_pane_t2

0x0001,

0x92d7,	// (0x0005686a) aid_navinavi_width_2_pane

0xf7fe,	// (0x0005cd91) form_midp_field_time_pane_t

0x19ea,	// (0x0004ef7d) input_focus_pane_cp052

0x19ea,	// (0x0004ef7d) bg_input_focus_pane_cp040

0x9c16,	// (0x000571a9) form_midp_gauge_slider_pane_t1

0x9c24,	// (0x000571b7) form_midp_gauge_slider_pane_t2

0x9c32,	// (0x000571c5) form_midp_gauge_slider_pane_t3

0x9c40,	// (0x000571d3) form_midp_gauge_slider_pane_t4

0x0003,

0xf7f5,	// (0x0005cd88) form_midp_gauge_slider_pane_t

0x9c4e,	// (0x000571e1) form_midp_slider_pane

0x78c7,	// (0x00054e5a) bg_input_focus_pane_cp041_ParamLimits

0x78c7,	// (0x00054e5a) bg_input_focus_pane_cp041

0x9be3,	// (0x00057176) form_midp_gauge_wait_pane_t1_ParamLimits

0x9be3,	// (0x00057176) form_midp_gauge_wait_pane_t1

0x9bf5,	// (0x00057188) form_midp_gauge_wait_pane_t2_ParamLimits

0x9bf5,	// (0x00057188) form_midp_gauge_wait_pane_t2

0x0001,

0xf7f0,	// (0x0005cd83) form_midp_gauge_wait_pane_t_ParamLimits

0xf7f0,	// (0x0005cd83) form_midp_gauge_wait_pane_t

0x9c07,	// (0x0005719a) form_midp_wait_pane_ParamLimits

0x9c07,	// (0x0005719a) form_midp_wait_pane

0x9bad,	// (0x00057140) form_midp_image_pane_g1

0x9bb6,	// (0x00057149) form_midp_image_pane_t1

0x9bc5,	// (0x00057158) form_midp_image_pane_t2

0x9bd4,	// (0x00057167) form_midp_image_pane_t3

0x0002,

0xf7e9,	// (0x0005cd7c) form_midp_image_pane_t

0x9ba4,	// (0x00057137) list_single_midp_pane_g1

0x5d80,	// (0x00053313) list_single_midp_pane_t1

0x9b7c,	// (0x0005710f) list_midp_form_item_pane_ParamLimits

0x9b7c,	// (0x0005710f) list_midp_form_item_pane

0x927f,	// (0x00056812) list_midp_form_item_pane_t1

0x928e,	// (0x00056821) midp_ticker_pane_g1

0x929a,	// (0x0005682d) midp_ticker_pane_g2

0x0001,

0xf736,	// (0x0005ccc9) midp_ticker_pane_g

0x92a6,	// (0x00056839) midp_ticker_pane_t1

0xaf81,	// (0x00058514) midp_editing_number_pane_t1

0xaf5f,	// (0x000584f2) midp_editing_number_pane

0xaf6e,	// (0x00058501) midp_ticker_pane

0x9e5f,	// (0x000573f2) ai_message_heading_pane

0x19ea,	// (0x0004ef7d) bg_popup_window_pane_cp14

0x9e67,	// (0x000573fa) listscroll_ai_message_pane

0xacba,	// (0x0005824d) ai_message_heading_pane_g1_ParamLimits

0xacba,	// (0x0005824d) ai_message_heading_pane_g1

0xacc6,	// (0x00058259) ai_message_heading_pane_g2_ParamLimits

0xacc6,	// (0x00058259) ai_message_heading_pane_g2

0xacd2,	// (0x00058265) ai_message_heading_pane_g3_ParamLimits

0xacd2,	// (0x00058265) ai_message_heading_pane_g3

0xacde,	// (0x00058271) ai_message_heading_pane_g4_ParamLimits

0xacde,	// (0x00058271) ai_message_heading_pane_g4

0x0003,

0xf92a,	// (0x0005cebd) ai_message_heading_pane_g_ParamLimits

0xf92a,	// (0x0005cebd) ai_message_heading_pane_g

0xacea,	// (0x0005827d) ai_message_heading_pane_t1_ParamLimits

0xacea,	// (0x0005827d) ai_message_heading_pane_t1

0xad04,	// (0x00058297) ai_message_heading_pane_t2_ParamLimits

0xad04,	// (0x00058297) ai_message_heading_pane_t2

0x0001,

0xf933,	// (0x0005cec6) ai_message_heading_pane_t_ParamLimits

0xf933,	// (0x0005cec6) ai_message_heading_pane_t

0xad16,	// (0x000582a9) bg_popup_heading_pane_cp1_ParamLimits

0xad16,	// (0x000582a9) bg_popup_heading_pane_cp1

0xaca8,	// (0x0005823b) list_ai_message_pane_ParamLimits

0xaca8,	// (0x0005823b) list_ai_message_pane

0x8677,	// (0x00055c0a) scroll_pane_cp10

0xac44,	// (0x000581d7) list_ai_message_pane_g1

0xac4c,	// (0x000581df) list_ai_message_pane_g2

0x0001,

0xf907,	// (0x0005ce9a) list_ai_message_pane_g

0xac54,	// (0x000581e7) list_ai_message_pane_t1_ParamLimits

0xac54,	// (0x000581e7) list_ai_message_pane_t1

0xac69,	// (0x000581fc) list_ai_message_pane_t2_ParamLimits

0xac69,	// (0x000581fc) list_ai_message_pane_t2

0xac7e,	// (0x00058211) list_ai_message_pane_t3_ParamLimits

0xac7e,	// (0x00058211) list_ai_message_pane_t3

0xac93,	// (0x00058226) list_ai_message_pane_t4_ParamLimits

0xac93,	// (0x00058226) list_ai_message_pane_t4

0x0003,

0xf90c,	// (0x0005ce9f) list_ai_message_pane_t_ParamLimits

0xf90c,	// (0x0005ce9f) list_ai_message_pane_t

0xac2f,	// (0x000581c2) cell_ai_soft_ind_pane_ParamLimits

0xac2f,	// (0x000581c2) cell_ai_soft_ind_pane

0x92b8,	// (0x0005684b) cell_ai_soft_ind_pane_g1_ParamLimits

0x92b8,	// (0x0005684b) cell_ai_soft_ind_pane_g1

0x19ea,	// (0x0004ef7d) grid_highlight_cp1

0x92c5,	// (0x00056858) text_secondary_cp56_ParamLimits

0x92c5,	// (0x00056858) text_secondary_cp56

0xac04,	// (0x00058197) example_general_pane_ParamLimits

0xac04,	// (0x00058197) example_general_pane

0xac10,	// (0x000581a3) example_parent_pane_g1_ParamLimits

0xac10,	// (0x000581a3) example_parent_pane_g1

0xac1c,	// (0x000581af) example_parent_pane_t1_ParamLimits

0xac1c,	// (0x000581af) example_parent_pane_t1

0x5966,	// (0x00052ef9) popup_preview_text_window_ParamLimits

0x5966,	// (0x00052ef9) popup_preview_text_window

0x90ee,	// (0x00056681) list_single_pane_cp2_g4

0x7c1e,	// (0x000551b1) bg_popup_preview_window_pane_ParamLimits

0x7c1e,	// (0x000551b1) bg_popup_preview_window_pane

0xa951,	// (0x00057ee4) popup_preview_text_window_t1_ParamLimits

0xa951,	// (0x00057ee4) popup_preview_text_window_t1

0xa96f,	// (0x00057f02) popup_preview_text_window_t2_ParamLimits

0xa96f,	// (0x00057f02) popup_preview_text_window_t2

0xa9b8,	// (0x00057f4b) popup_preview_text_window_t3_ParamLimits

0xa9b8,	// (0x00057f4b) popup_preview_text_window_t3

0xa9fd,	// (0x00057f90) popup_preview_text_window_t4_ParamLimits

0xa9fd,	// (0x00057f90) popup_preview_text_window_t4

0x0004,

0xf8db,	// (0x0005ce6e) popup_preview_text_window_t_ParamLimits

0xf8db,	// (0x0005ce6e) popup_preview_text_window_t

0xaa7b,	// (0x0005800e) scroll_pane_cp11

0x99ff,	// (0x00056f92) bg_popup_preview_window_pane_g1

0xa911,	// (0x00057ea4) bg_popup_preview_window_pane_g2

0xa919,	// (0x00057eac) bg_popup_preview_window_pane_g3

0xa921,	// (0x00057eb4) bg_popup_preview_window_pane_g4

0xa929,	// (0x00057ebc) bg_popup_preview_window_pane_g5

0xa931,	// (0x00057ec4) bg_popup_preview_window_pane_g6

0xa939,	// (0x00057ecc) bg_popup_preview_window_pane_g7

0xa941,	// (0x00057ed4) bg_popup_preview_window_pane_g8

0x44db,	// (0x00051a6e) aid_popup_width_pane

0x5944,	// (0x00052ed7) popup_midp_note_alarm_window_ParamLimits

0x5944,	// (0x00052ed7) popup_midp_note_alarm_window

0x81e9,	// (0x0005577c) data_form_pane_ParamLimits

0x4d9f,	// (0x00052332) form_field_data_pane_g1

0x4da9,	// (0x0005233c) form_field_data_pane_t1_ParamLimits

0x81f5,	// (0x00055788) input_focus_pane_ParamLimits

0x4dc1,	// (0x00052354) data_form_wide_pane_ParamLimits

0x4dd2,	// (0x00052365) form_field_data_wide_pane_g1

0x4dde,	// (0x00052371) form_field_data_wide_pane_t1_ParamLimits

0x7ec5,	// (0x00055458) input_focus_pane_cp6_ParamLimits

0x8624,	// (0x00055bb7) input_popup_find_pane_g1_ParamLimits

0x8624,	// (0x00055bb7) input_popup_find_pane_g1

0x5054,	// (0x000525e7) aid_navi_side_left_pane

0x5069,	// (0x000525fc) aid_navi_side_right_pane

0xa32a,	// (0x000578bd) bg_popup_window_pane_cp30_ParamLimits

0xa32a,	// (0x000578bd) bg_popup_window_pane_cp30

0xa3a4,	// (0x00057937) popup_midp_note_alarm_window_g1_ParamLimits

0xa3a4,	// (0x00057937) popup_midp_note_alarm_window_g1

0xa3d4,	// (0x00057967) popup_midp_note_alarm_window_t1_ParamLimits

0xa3d4,	// (0x00057967) popup_midp_note_alarm_window_t1

0xa475,	// (0x00057a08) popup_midp_note_alarm_window_t2_ParamLimits

0xa475,	// (0x00057a08) popup_midp_note_alarm_window_t2

0xa523,	// (0x00057ab6) popup_midp_note_alarm_window_t3_ParamLimits

0xa523,	// (0x00057ab6) popup_midp_note_alarm_window_t3

0xa555,	// (0x00057ae8) popup_midp_note_alarm_window_t4_ParamLimits

0xa555,	// (0x00057ae8) popup_midp_note_alarm_window_t4

0xa57b,	// (0x00057b0e) popup_midp_note_alarm_window_t5_ParamLimits

0xa57b,	// (0x00057b0e) popup_midp_note_alarm_window_t5

0x000a,

0xf878,	// (0x0005ce0b) popup_midp_note_alarm_window_t_ParamLimits

0xf878,	// (0x0005ce0b) popup_midp_note_alarm_window_t

0xa627,	// (0x00057bba) wait_bar_pane_cp1_ParamLimits

0xa627,	// (0x00057bba) wait_bar_pane_cp1

0x19ea,	// (0x0004ef7d) wait_anim_pane_copy1

0x19ea,	// (0x0004ef7d) wait_border_pane_copy1

0xa010,	// (0x000575a3) wait_border_pane_g1_copy1

0x4df8,	// (0x0005238b) form_field_popup_pane_g1

0x4e00,	// (0x00052393) form_field_popup_pane_t1_ParamLimits

0x81f5,	// (0x00055788) input_focus_pane_cp7_ParamLimits

0x8217,	// (0x000557aa) list_form_pane_ParamLimits

0x4e18,	// (0x000523ab) form_field_popup_wide_pane_g1

0x4e20,	// (0x000523b3) form_field_popup_wide_pane_t1_ParamLimits

0x81f5,	// (0x00055788) input_focus_pane_cp8_ParamLimits

0x8223,	// (0x000557b6) list_form_wide_pane_ParamLimits

0xb0ff,	// (0x00058692) aid_size_cell_graphic_pane

0x4eaa,	// (0x0005243d) data_form_pane_t1_ParamLimits

0x5ff7,	// (0x0005358a) data_form_wide_pane_t1_ParamLimits

0x95c6,	// (0x00056b59) bg_status_flat_pane

0x7827,	// (0x00054dba) title_pane_t1_ParamLimits

0x788f,	// (0x00054e22) title_pane_t2_ParamLimits

0x78b5,	// (0x00054e48) title_pane_t3_ParamLimits

0xf530,	// (0x0005cac3) title_pane_t_ParamLimits

0x8af8,	// (0x0005608b) level_1_signal_ParamLimits

0x8b0a,	// (0x0005609d) level_2_signal_ParamLimits

0x8b1d,	// (0x000560b0) level_3_signal_ParamLimits

0x8b30,	// (0x000560c3) level_4_signal_ParamLimits

0x8b43,	// (0x000560d6) level_5_signal_ParamLimits

0x8b56,	// (0x000560e9) level_6_signal_ParamLimits

0x8b69,	// (0x000560fc) level_7_signal_ParamLimits

0x8af8,	// (0x0005608b) level_1_battery_ParamLimits

0x8b0a,	// (0x0005609d) level_2_battery_ParamLimits

0x8b1d,	// (0x000560b0) level_3_battery_ParamLimits

0x8b30,	// (0x000560c3) level_4_battery_ParamLimits

0x8b43,	// (0x000560d6) level_5_battery_ParamLimits

0x8b56,	// (0x000560e9) level_6_battery_ParamLimits

0x8b69,	// (0x000560fc) level_7_battery_ParamLimits

0xa22f,	// (0x000577c2) bg_status_flat_pane_g1

0xa237,	// (0x000577ca) bg_status_flat_pane_g2

0xa23f,	// (0x000577d2) bg_status_flat_pane_g3

0xa247,	// (0x000577da) bg_status_flat_pane_g4

0xa24f,	// (0x000577e2) bg_status_flat_pane_g5

0xa257,	// (0x000577ea) bg_status_flat_pane_g6

0xa25f,	// (0x000577f2) bg_status_flat_pane_g7

0x78dd,	// (0x00054e70) tabs_3_active_pane_t1_ParamLimits

0x78dd,	// (0x00054e70) tabs_3_passive_pane_t1_ParamLimits

0x78f7,	// (0x00054e8a) tabs_4_active_pane_t1_ParamLimits

0x78f7,	// (0x00054e8a) tabs_4_1_passive_pane_t1_ParamLimits

0x86b8,	// (0x00055c4b) tabs_2_active_pane_t1_ParamLimits

0x86b8,	// (0x00055c4b) tabs_2_passive_pane_t1_ParamLimits

0x86ca,	// (0x00055c5d) bg_active_tab_pane_cp4_ParamLimits

0x86d8,	// (0x00055c6b) tabs_2_long_active_pane_t1_ParamLimits

0x86eb,	// (0x00055c7e) bg_passive_tab_pane_cp4_ParamLimits

0x5c61,	// (0x000531f4) list_single_midp_graphic_pane_t1_ParamLimits

0x86ca,	// (0x00055c5d) bg_active_tab_pane_cp5_ParamLimits

0x86f7,	// (0x00055c8a) tabs_3_long_active_pane_t1_ParamLimits

0x86eb,	// (0x00055c7e) bg_passive_tab_pane_cp5_ParamLimits

0x5c61,	// (0x000531f4) list_single_midp_graphic_pane_t1

0x95c6,	// (0x00056b59) bg_status_flat_pane_ParamLimits

0x968f,	// (0x00056c22) indicator_pane_cp2_ParamLimits

0x968f,	// (0x00056c22) indicator_pane_cp2

0x97ba,	// (0x00056d4d) navi_pane_srt_ParamLimits

0x97ba,	// (0x00056d4d) navi_pane_srt

0x97de,	// (0x00056d71) popup_clock_digital_analogue_window_cp1

0x79a4,	// (0x00054f37) indicator_pane_t1

0x91b1,	// (0x00056744) copy_highlight_pane

0x91b1,	// (0x00056744) cursor_graphics_pane

0x91b1,	// (0x00056744) graphic_within_text_pane

0x91b1,	// (0x00056744) link_highlight_pane

0xaa3e,	// (0x00057fd1) popup_preview_text_window_t5_ParamLimits

0xaa3e,	// (0x00057fd1) popup_preview_text_window_t5

0x92df,	// (0x00056872) cursor_digital_pane

0x92df,	// (0x00056872) cursor_primary_pane

0x92f0,	// (0x00056883) cursor_primary_small_pane

0x92f8,	// (0x0005688b) cursor_secondary_pane

0x9300,	// (0x00056893) cursor_title_pane

0x92df,	// (0x00056872) link_highlight_digital_pane

0x92e7,	// (0x0005687a) link_highlight_primary_pane

0x92f0,	// (0x00056883) link_highlight_primary_small_pane

0x92f8,	// (0x0005688b) link_highlight_secondary_pane

0x9300,	// (0x00056893) link_highlight_title_pane

0x92df,	// (0x00056872) copy_highlight_digital_pane

0x92df,	// (0x00056872) copy_highlight_primary_pane

0x92f0,	// (0x00056883) copy_highlight_primary_small_pane

0x92f8,	// (0x0005688b) copy_highlight_secondary_pane

0x9300,	// (0x00056893) copy_highlight_title_pane

0x92f8,	// (0x0005688b) graphic_text_digital_pane

0xa2cd,	// (0x00057860) graphic_text_primary_pane

0xa2d6,	// (0x00057869) graphic_text_primary_small_pane

0x92f0,	// (0x00056883) graphic_text_secondary_pane

0x92df,	// (0x00056872) graphic_text_title_pane

0x9308,	// (0x0005689b) cursor_primary_pane_g1

0xa2bf,	// (0x00057852) cursor_text_primary_t1

0xa2a7,	// (0x0005783a) cursor_primary_small_pane_g1

0xa2b1,	// (0x00057844) cursor_text_primary_small_t1

0xa28f,	// (0x00057822) cursor_primary_small_pane_g1_copy1

0xa299,	// (0x0005782c) cursor_text_primary_small_t1_copy1

0xa277,	// (0x0005780a) cursor_text_title_t1

0xa285,	// (0x00057818) cursor_title_pane_g1

0x9308,	// (0x0005689b) cursor_digital_pane_g1

0x9312,	// (0x000568a5) cursor_text_digital_t1

0x9337,	// (0x000568ca) link_highlight_primary_pane_g1

0xa220,	// (0x000577b3) link_highlight_primary_pane_t1

0x9320,	// (0x000568b3) link_highlight_primary_small_pane_g1

0x9328,	// (0x000568bb) link_highlight_primary_small_pane_t1

0x9337,	// (0x000568ca) link_highlight_secondary_pane_g1

0x933f,	// (0x000568d2) link_highlight_secondary_pane_t1

0xa194,	// (0x00057727) link_highlight_title_pane_g1

0xa19c,	// (0x0005772f) link_highlight_title_pane_t1

0xa17d,	// (0x00057710) link_highlight_digital_pane_g1

0xa185,	// (0x00057718) link_highlight_digital_pane_t1

0xa055,	// (0x000575e8) copy_highlight_primary_pane_g1

0xa05d,	// (0x000575f0) copy_highlight_primary_pane_t1

0xa02f,	// (0x000575c2) copy_highlight_primary_small_pane_g1

0xa046,	// (0x000575d9) copy_highlight_primary_small_pane_t1

0x934e,	// (0x000568e1) copy_highlight_secondary_pane_g1

0x9356,	// (0x000568e9) copy_highlight_secondary_pane_t1

0xa02f,	// (0x000575c2) copy_highlight_title_pane_g1

0xa037,	// (0x000575ca) copy_highlight_title_pane_t1

0xa055,	// (0x000575e8) copy_highlight_digital_pane_g1

0xb2cd,	// (0x00058860) copy_highlight_digital_pane_t1

0xb221,	// (0x000587b4) graphic_text_primary_pane_g1

0xb2b1,	// (0x00058844) graphic_text_primary_pane_t1

0xb2bf,	// (0x00058852) graphic_text_primary_pane_t2

0x0001,

0xf9a7,	// (0x0005cf3a) graphic_text_primary_pane_t

0xb28d,	// (0x00058820) graphic_text_primary_small_pane_g1

0xb295,	// (0x00058828) graphic_text_primary_small_pane_t1

0xb2a3,	// (0x00058836) graphic_text_primary_small_pane_t2

0x0001,

0xf9a2,	// (0x0005cf35) graphic_text_primary_small_pane_t

0xb269,	// (0x000587fc) graphic_text_secondary_pane_g1

0xb271,	// (0x00058804) graphic_text_secondary_pane_t1

0xb27f,	// (0x00058812) graphic_text_secondary_pane_t2

0x0001,

0xf99d,	// (0x0005cf30) graphic_text_secondary_pane_t

0xb245,	// (0x000587d8) graphic_text_title_pane_g1

0xb24d,	// (0x000587e0) graphic_text_title_pane_t1

0xb25b,	// (0x000587ee) graphic_text_title_pane_t2

0x0001,

0xf998,	// (0x0005cf2b) graphic_text_title_pane_t

0xb221,	// (0x000587b4) graphic_text_digital_pane_g1

0xb229,	// (0x000587bc) graphic_text_digital_pane_t1

0xb237,	// (0x000587ca) graphic_text_digital_pane_t2

0x0001,

0xf993,	// (0x0005cf26) graphic_text_digital_pane_t

0x78c7,	// (0x00054e5a) navi_icon_pane_srt_ParamLimits

0x78c7,	// (0x00054e5a) navi_icon_pane_srt

0x19ea,	// (0x0004ef7d) navi_midp_pane_srt

0x19ea,	// (0x0004ef7d) navi_navi_pane_srt

0x78c7,	// (0x00054e5a) navi_text_pane_srt_ParamLimits

0x78c7,	// (0x00054e5a) navi_text_pane_srt

0xb1ec,	// (0x0005877f) navi_navi_icon_text_pane_srt

0xb1f4,	// (0x00058787) navi_navi_pane_srt_g1_ParamLimits

0xb1f4,	// (0x00058787) navi_navi_pane_srt_g1

0xb206,	// (0x00058799) navi_navi_pane_srt_g2_ParamLimits

0xb206,	// (0x00058799) navi_navi_pane_srt_g2

0x0001,

0xf98e,	// (0x0005cf21) navi_navi_pane_srt_g_ParamLimits

0xf98e,	// (0x0005cf21) navi_navi_pane_srt_g

0xb218,	// (0x000587ab) navi_navi_tabs_pane_srt

0xb1ec,	// (0x0005877f) navi_navi_text_pane_srt

0xb1ec,	// (0x0005877f) navi_navi_volume_pane_srt

0xb1dd,	// (0x00058770) navi_navi_text_pane_srt_t1

0x610f,	// (0x000536a2) navi_navi_volume_pane_srt_g1

0x6117,	// (0x000536aa) volume_small_pane_srt_ParamLimits

0x6117,	// (0x000536aa) volume_small_pane_srt

0x53a2,	// (0x00052935) volume_small_pane_srt_g1_ParamLimits

0x53a2,	// (0x00052935) volume_small_pane_srt_g1

0x53b2,	// (0x00052945) volume_small_pane_srt_g2_ParamLimits

0x53b2,	// (0x00052945) volume_small_pane_srt_g2

0x53c3,	// (0x00052956) volume_small_pane_srt_g3_ParamLimits

0x53c3,	// (0x00052956) volume_small_pane_srt_g3

0x53d4,	// (0x00052967) volume_small_pane_srt_g4_ParamLimits

0x53d4,	// (0x00052967) volume_small_pane_srt_g4

0x53e5,	// (0x00052978) volume_small_pane_srt_g5_ParamLimits

0x53e5,	// (0x00052978) volume_small_pane_srt_g5

0x53f6,	// (0x00052989) volume_small_pane_srt_g6_ParamLimits

0x53f6,	// (0x00052989) volume_small_pane_srt_g6

0x5407,	// (0x0005299a) volume_small_pane_srt_g7_ParamLimits

0x5407,	// (0x0005299a) volume_small_pane_srt_g7

0x5418,	// (0x000529ab) volume_small_pane_srt_g8_ParamLimits

0x5418,	// (0x000529ab) volume_small_pane_srt_g8

0x5429,	// (0x000529bc) volume_small_pane_srt_g9_ParamLimits

0x5429,	// (0x000529bc) volume_small_pane_srt_g9

0x543a,	// (0x000529cd) volume_small_pane_srt_g10_ParamLimits

0x543a,	// (0x000529cd) volume_small_pane_srt_g10

0x0009,

0xf73b,	// (0x0005ccce) volume_small_pane_srt_g_ParamLimits

0xf73b,	// (0x0005ccce) volume_small_pane_srt_g

0x7cc7,	// (0x0005525a) query_popup_data_pane_cp2

0xb1c3,	// (0x00058756) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb1c3,	// (0x00058756) navi_navi_icon_text_pane_srt_t1

0xa2cd,	// (0x00057860) navi_tabs_2_long_pane_srt

0xa2cd,	// (0x00057860) navi_tabs_2_pane_srt

0xa2cd,	// (0x00057860) navi_tabs_3_long_pane_srt

0xa2cd,	// (0x00057860) navi_tabs_3_pane_srt

0xa2cd,	// (0x00057860) navi_tabs_4_pane_srt

0x60ef,	// (0x00053682) tabs_2_active_pane_srt_ParamLimits

0x60ef,	// (0x00053682) tabs_2_active_pane_srt

0x60ff,	// (0x00053692) tabs_2_passive_pane_srt_ParamLimits

0x60ff,	// (0x00053692) tabs_2_passive_pane_srt

0x94d5,	// (0x00056a68) bg_passive_tab_pane_cp1_srt_ParamLimits

0x94d5,	// (0x00056a68) bg_passive_tab_pane_cp1_srt

0xb18f,	// (0x00058722) bg_passive_tab_pane_g1_cp1_srt

0x8dfa,	// (0x0005638d) bg_passive_tab_pane_g2_cp1_srt

0xb198,	// (0x0005872b) bg_passive_tab_pane_g3_cp1_srt

0x78c7,	// (0x00054e5a) bg_active_tab_pane_cp1_srt_ParamLimits

0x78c7,	// (0x00054e5a) bg_active_tab_pane_cp1_srt

0xb1a1,	// (0x00058734) tabs_2_active_pane_srt_g1

0xb1a9,	// (0x0005873c) tabs_2_active_pane_srt_t1_ParamLimits

0xb1a9,	// (0x0005873c) tabs_2_active_pane_srt_t1

0xb18f,	// (0x00058722) bg_active_tab_pane_g1_cp1_srt

0x8dfa,	// (0x0005638d) bg_active_tab_pane_g2_cp1_srt

0xb198,	// (0x0005872b) bg_active_tab_pane_g3_cp1_srt

0x60bc,	// (0x0005364f) tabs_3_active_pane_srt_ParamLimits

0x60bc,	// (0x0005364f) tabs_3_active_pane_srt

0x60cd,	// (0x00053660) tabs_3_passive_pane_cp_srt_ParamLimits

0x60cd,	// (0x00053660) tabs_3_passive_pane_cp_srt

0x60de,	// (0x00053671) tabs_3_passive_pane_srt_ParamLimits

0x60de,	// (0x00053671) tabs_3_passive_pane_srt

0x94d5,	// (0x00056a68) bg_passive_tab_pane_cp2_srt_ParamLimits

0x94d5,	// (0x00056a68) bg_passive_tab_pane_cp2_srt

0x936e,	// (0x00056901) bg_passive_tab_pane_g1_cp2_srt

0x8dfa,	// (0x0005638d) bg_passive_tab_pane_g2_cp2_srt

0x9365,	// (0x000568f8) bg_passive_tab_pane_g3_cp2_srt

0x78c7,	// (0x00054e5a) bg_active_tab_pane_cp2_srt_ParamLimits

0x78c7,	// (0x00054e5a) bg_active_tab_pane_cp2_srt

0xb175,	// (0x00058708) tabs_3_active_pane_srt_g1

0xb17d,	// (0x00058710) tabs_3_active_pane_srt_t1_ParamLimits

0xb17d,	// (0x00058710) tabs_3_active_pane_srt_t1

0x936e,	// (0x00056901) bg_active_tab_pane_g1_cp2_srt

0x8dfa,	// (0x0005638d) bg_active_tab_pane_g2_cp2_srt

0x9365,	// (0x000568f8) bg_active_tab_pane_g3_cp2_srt

0x6074,	// (0x00053607) tabs_4_active_pane_srt_ParamLimits

0x6074,	// (0x00053607) tabs_4_active_pane_srt

0x6086,	// (0x00053619) tabs_4_passive_pane_cp2_srt_ParamLimits

0x6086,	// (0x00053619) tabs_4_passive_pane_cp2_srt

0x55ad,	// (0x00052b40) aid_size_cell_toolbar

0x86eb,	// (0x00055c7e) main_idle_act_pane_ParamLimits

0x577a,	// (0x00052d0d) popup_large_graphic_colour_window_ParamLimits

0x5ae1,	// (0x00053074) popup_toolbar_window_ParamLimits

0x5ae1,	// (0x00053074) popup_toolbar_window

0xaf90,	// (0x00058523) list_single_graphic_2heading_pane_ParamLimits

0xaf90,	// (0x00058523) list_single_graphic_2heading_pane

0x88a7,	// (0x00055e3a) aid_size_cell_apps_grid_lsc_pane

0x88b9,	// (0x00055e4c) aid_size_cell_apps_grid_prt_pane

0x94d5,	// (0x00056a68) bg_wml_button_pane_cp1_ParamLimits

0x94d5,	// (0x00056a68) bg_wml_button_pane_cp1

0x9ca3,	// (0x00057236) form_midp_field_text_pane_t1_ParamLimits

0x9a73,	// (0x00057006) input_focus_pane_cp050_ParamLimits

0x9cda,	// (0x0005726d) list_midp_form_text_pane_ParamLimits

0x9c80,	// (0x00057213) input_focus_pane_cp051_ParamLimits

0x9c94,	// (0x00057227) list_midp_choice_pane_ParamLimits

0x9b2c,	// (0x000570bf) list_single_2graphic_pane_cp3_ParamLimits

0x9b2c,	// (0x000570bf) list_single_2graphic_pane_cp3

0x9b4d,	// (0x000570e0) list_single_midp_graphic_pane_ParamLimits

0x9b4d,	// (0x000570e0) list_single_midp_graphic_pane

0x4463,	// (0x000519f6) list_single_graphic_2heading_pane_g1_ParamLimits

0x4463,	// (0x000519f6) list_single_graphic_2heading_pane_g1

0x446f,	// (0x00051a02) list_single_graphic_2heading_pane_g4_ParamLimits

0x446f,	// (0x00051a02) list_single_graphic_2heading_pane_g4

0x447b,	// (0x00051a0e) list_single_graphic_2heading_pane_g5_ParamLimits

0x447b,	// (0x00051a0e) list_single_graphic_2heading_pane_g5

0x0002,

0xf78e,	// (0x0005cd21) list_single_graphic_2heading_pane_g_ParamLimits

0xf78e,	// (0x0005cd21) list_single_graphic_2heading_pane_g

0x4487,	// (0x00051a1a) list_single_graphic_2heading_pane_t1_ParamLimits

0x4487,	// (0x00051a1a) list_single_graphic_2heading_pane_t1

0x449b,	// (0x00051a2e) list_single_graphic_2heading_pane_t2_ParamLimits

0x449b,	// (0x00051a2e) list_single_graphic_2heading_pane_t2

0x44b7,	// (0x00051a4a) list_single_graphic_2heading_pane_t3_ParamLimits

0x44b7,	// (0x00051a4a) list_single_graphic_2heading_pane_t3

0x0002,

0xf795,	// (0x0005cd28) list_single_graphic_2heading_pane_t_ParamLimits

0xf795,	// (0x0005cd28) list_single_graphic_2heading_pane_t

0x993d,	// (0x00056ed0) bg_popup_sub_pane_cp2

0x9967,	// (0x00056efa) grid_toobar_pane

0x5b8e,	// (0x00053121) cell_toolbar_pane_ParamLimits

0x5b8e,	// (0x00053121) cell_toolbar_pane

0x99a3,	// (0x00056f36) cell_toolbar_pane_g1_ParamLimits

0x99a3,	// (0x00056f36) cell_toolbar_pane_g1

0x99b7,	// (0x00056f4a) cell_toolbar_pane_g2_ParamLimits

0x99b7,	// (0x00056f4a) cell_toolbar_pane_g2

0x0001,

0xf7a3,	// (0x0005cd36) cell_toolbar_pane_g_ParamLimits

0xf7a3,	// (0x0005cd36) cell_toolbar_pane_g

0x99d9,	// (0x00056f6c) grid_highlight_pane_cp2_ParamLimits

0x99d9,	// (0x00056f6c) grid_highlight_pane_cp2

0x99f3,	// (0x00056f86) toolbar_button_pane

0x99ff,	// (0x00056f92) toolbar_button_pane_g1

0x9a07,	// (0x00056f9a) toolbar_button_pane_g2

0x9a0f,	// (0x00056fa2) toolbar_button_pane_g3

0x9a17,	// (0x00056faa) toolbar_button_pane_g4

0x9a1f,	// (0x00056fb2) toolbar_button_pane_g5

0x9a27,	// (0x00056fba) toolbar_button_pane_g6

0x9a2f,	// (0x00056fc2) toolbar_button_pane_g7

0x9a37,	// (0x00056fca) toolbar_button_pane_g8

0x9a3f,	// (0x00056fd2) toolbar_button_pane_g9

0x0009,

0xf7a8,	// (0x0005cd3b) toolbar_button_pane_g

0x5bdc,	// (0x0005316f) list_single_2graphic_pane_g1_cp3_ParamLimits

0x5bdc,	// (0x0005316f) list_single_2graphic_pane_g1_cp3

0x5be8,	// (0x0005317b) list_single_2graphic_pane_g2_cp3_ParamLimits

0x5be8,	// (0x0005317b) list_single_2graphic_pane_g2_cp3

0x5bf9,	// (0x0005318c) list_single_2graphic_pane_g3_cp3

0x5c01,	// (0x00053194) list_single_2graphic_pane_g4_cp3_ParamLimits

0x5c01,	// (0x00053194) list_single_2graphic_pane_g4_cp3

0x5c0d,	// (0x000531a0) list_single_2graphic_pane_t1_cp3_ParamLimits

0x5c0d,	// (0x000531a0) list_single_2graphic_pane_t1_cp3

0x5c55,	// (0x000531e8) list_single_midp_graphic_pane_g2_ParamLimits

0x5c55,	// (0x000531e8) list_single_midp_graphic_pane_g2

0x445b,	// (0x000519ee) aid_zoom_text_primary

0x55b5,	// (0x00052b48) aid_zoom_text_secondary

0x941f,	// (0x000569b2) status_small_pane_g7_ParamLimits

0x941f,	// (0x000569b2) status_small_pane_g7

0x9442,	// (0x000569d5) status_small_pane_t1_ParamLimits

0x77fe,	// (0x00054d91) title_pane_g2

0x0003,

0xf527,	// (0x0005caba) title_pane_g

0x7d6f,	// (0x00055302) aid_size_cell_colour_1_pane_ParamLimits

0x7d6f,	// (0x00055302) aid_size_cell_colour_1_pane

0x7d83,	// (0x00055316) aid_size_cell_colour_2_pane_ParamLimits

0x7d83,	// (0x00055316) aid_size_cell_colour_2_pane

0x7d97,	// (0x0005532a) aid_size_cell_colour_3_pane_ParamLimits

0x7d97,	// (0x0005532a) aid_size_cell_colour_3_pane

0x7dab,	// (0x0005533e) aid_size_cell_colour_4_pane_ParamLimits

0x7dab,	// (0x0005533e) aid_size_cell_colour_4_pane

0x4f91,	// (0x00052524) title_pane_stacon_g1_ParamLimits

0x4f91,	// (0x00052524) title_pane_stacon_g1

0xa0b4,	// (0x00057647) popup_note_wait_window_g3_ParamLimits

0xa0b4,	// (0x00057647) popup_note_wait_window_g3

0xa12a,	// (0x000576bd) popup_note_wait_window_t5_ParamLimits

0xa12a,	// (0x000576bd) popup_note_wait_window_t5

0x19ea,	// (0x0004ef7d) main_feb_china_hwr_fs_writing_pane

0x565b,	// (0x00052bee) popup_feb_china_hwr_fs_window_ParamLimits

0x565b,	// (0x00052bee) popup_feb_china_hwr_fs_window

0x5ce3,	// (0x00053276) aid_size_cell_hwr_fs_ParamLimits

0x5ce3,	// (0x00053276) aid_size_cell_hwr_fs

0x9a73,	// (0x00057006) bg_popup_sub_pane_cp3_ParamLimits

0x9a73,	// (0x00057006) bg_popup_sub_pane_cp3

0x5cf8,	// (0x0005328b) grid_hwr_fs_pane_ParamLimits

0x5cf8,	// (0x0005328b) grid_hwr_fs_pane

0x5d10,	// (0x000532a3) linegrid_hwr_fs_pane_ParamLimits

0x5d10,	// (0x000532a3) linegrid_hwr_fs_pane

0x5d20,	// (0x000532b3) cell_hwr_fs_pane_ParamLimits

0x5d20,	// (0x000532b3) cell_hwr_fs_pane

0x9a7f,	// (0x00057012) linegrid_hwr_fs_pane_g1_ParamLimits

0x9a7f,	// (0x00057012) linegrid_hwr_fs_pane_g1

0x9a8b,	// (0x0005701e) linegrid_hwr_fs_pane_g2_ParamLimits

0x9a8b,	// (0x0005701e) linegrid_hwr_fs_pane_g2

0x9a9d,	// (0x00057030) linegrid_hwr_fs_pane_g3_ParamLimits

0x9a9d,	// (0x00057030) linegrid_hwr_fs_pane_g3

0x5d42,	// (0x000532d5) linegrid_hwr_fs_pane_g4_ParamLimits

0x5d42,	// (0x000532d5) linegrid_hwr_fs_pane_g4

0x5d5c,	// (0x000532ef) linegrid_hwr_fs_pane_g5_ParamLimits

0x5d5c,	// (0x000532ef) linegrid_hwr_fs_pane_g5

0x0004,

0xf7ce,	// (0x0005cd61) linegrid_hwr_fs_pane_g_ParamLimits

0xf7ce,	// (0x0005cd61) linegrid_hwr_fs_pane_g

0x9aa9,	// (0x0005703c) cell_hwr_fs_pane_g1_ParamLimits

0x9aa9,	// (0x0005703c) cell_hwr_fs_pane_g1

0x9874,	// (0x00056e07) cell_hwr_fs_pane_g2_ParamLimits

0x9874,	// (0x00056e07) cell_hwr_fs_pane_g2

0x9abf,	// (0x00057052) cell_hwr_fs_pane_g3_ParamLimits

0x9abf,	// (0x00057052) cell_hwr_fs_pane_g3

0x9acc,	// (0x0005705f) cell_hwr_fs_pane_g4_ParamLimits

0x9acc,	// (0x0005705f) cell_hwr_fs_pane_g4

0x0003,

0xf7d9,	// (0x0005cd6c) cell_hwr_fs_pane_g_ParamLimits

0xf7d9,	// (0x0005cd6c) cell_hwr_fs_pane_g

0x5d72,	// (0x00053305) cell_hwr_fs_pane_t1

0x19ea,	// (0x0004ef7d) grid_highlight_pane_cp6

0x19ea,	// (0x0004ef7d) main_idle_act2_pane

0x865e,	// (0x00055bf1) aid_inside_area_popup_secondary

0xa761,	// (0x00057cf4) aid_inside_area_window_primary_ParamLimits

0xa761,	// (0x00057cf4) aid_inside_area_window_primary

0xb2dc,	// (0x0005886f) ai2_news_ticker_pane

0xb2e4,	// (0x00058877) aid_size_cell_ai1_link_ParamLimits

0xb2e4,	// (0x00058877) aid_size_cell_ai1_link

0xb2fe,	// (0x00058891) popup_ai2_data_window_ParamLimits

0xb2fe,	// (0x00058891) popup_ai2_data_window

0xb314,	// (0x000588a7) popup_ai2_link_window_ParamLimits

0xb314,	// (0x000588a7) popup_ai2_link_window

0x9a73,	// (0x00057006) bg_popup_sub_pane_cp4_ParamLimits

0x9a73,	// (0x00057006) bg_popup_sub_pane_cp4

0xb328,	// (0x000588bb) grid_ai2_link_pane_ParamLimits

0xb328,	// (0x000588bb) grid_ai2_link_pane

0xb33f,	// (0x000588d2) popup_ai2_link_window_g1_ParamLimits

0xb33f,	// (0x000588d2) popup_ai2_link_window_g1

0xb34b,	// (0x000588de) popup_ai2_link_window_g2_ParamLimits

0xb34b,	// (0x000588de) popup_ai2_link_window_g2

0x0001,

0xf9ac,	// (0x0005cf3f) popup_ai2_link_window_g_ParamLimits

0xf9ac,	// (0x0005cf3f) popup_ai2_link_window_g

0xb35a,	// (0x000588ed) ai2_mp_button_pane

0xb362,	// (0x000588f5) ai2_mp_volume_pane

0x9c80,	// (0x00057213) bg_popup_sub_pane_cp5_ParamLimits

0x9c80,	// (0x00057213) bg_popup_sub_pane_cp5

0xb36a,	// (0x000588fd) heading_ai2_gene_pane_ParamLimits

0xb36a,	// (0x000588fd) heading_ai2_gene_pane

0xb376,	// (0x00058909) list_ai2_gene_pane_ParamLimits

0xb376,	// (0x00058909) list_ai2_gene_pane

0xb3be,	// (0x00058951) cell_ai2_link_pane_ParamLimits

0xb3be,	// (0x00058951) cell_ai2_link_pane

0xb3d4,	// (0x00058967) cell_ai2_link_pane_g1

0x19ea,	// (0x0004ef7d) grid_highlight_pane_cp7

0x612c,	// (0x000536bf) ai2_mp_volume_pane_g1

0xb4a4,	// (0x00058a37) ai2_mp_volume_pane_g2

0xb419,	// (0x000589ac) list_ai2_gene_pane_t1

0xb4ac,	// (0x00058a3f) ai2_mp_volume_pane_g3

0x0002,

0xf9c5,	// (0x0005cf58) ai2_mp_volume_pane_g

0x6134,	// (0x000536c7) volume_small_pane_cp3

0xb4b4,	// (0x00058a47) aid_size_cell_ai2_button

0xb4bc,	// (0x00058a4f) grid_ai2_button_pane

0xb4c5,	// (0x00058a58) cell_ai2_button_pane_ParamLimits

0xb4c5,	// (0x00058a58) cell_ai2_button_pane

0x19e0,	// (0x0004ef73) cell_ai2_button_pane_g1

0x19ea,	// (0x0004ef7d) grid_highlight_pane_cp8

0xb464,	// (0x000589f7) ai2_gene_pane_t1_ParamLimits

0xb464,	// (0x000589f7) ai2_gene_pane_t1

0x55a3,	// (0x00052b36) aid_height_parent_landscape

0xadc7,	// (0x0005835a) aid_height_set_list

0xadd8,	// (0x0005836b) aid_size_parent

0xb0ff,	// (0x00058692) aid_size_cell_graphic_pane_ParamLimits

0xb386,	// (0x00058919) popup_ai2_data_window_g1_ParamLimits

0xb386,	// (0x00058919) popup_ai2_data_window_g1

0xb392,	// (0x00058925) ai2_news_ticker_pane_g1

0xb39a,	// (0x0005892d) ai2_news_ticker_pane_g2

0x0001,

0xf9b1,	// (0x0005cf44) ai2_news_ticker_pane_g

0xb3a2,	// (0x00058935) ai2_news_ticker_pane_t1

0xb3b0,	// (0x00058943) ai2_news_ticker_pane_t2

0x0001,

0xf9b6,	// (0x0005cf49) ai2_news_ticker_pane_t

0xb3dd,	// (0x00058970) heading_ai2_gene_pane_g1

0xb3e5,	// (0x00058978) heading_ai2_gene_pane_t1_ParamLimits

0xb3e5,	// (0x00058978) heading_ai2_gene_pane_t1

0xb3fa,	// (0x0005898d) list_highlight_pane_cp6

0xb402,	// (0x00058995) ai2_gene_pane_ParamLimits

0xb402,	// (0x00058995) ai2_gene_pane

0xb427,	// (0x000589ba) list_ai2_gene_pane_t2

0x0001,

0xf9bb,	// (0x0005cf4e) list_ai2_gene_pane_t

0xb435,	// (0x000589c8) list_highlight_pane_cp8_ParamLimits

0xb435,	// (0x000589c8) list_highlight_pane_cp8

0xb446,	// (0x000589d9) ai2_gene_pane_g1_ParamLimits

0xb446,	// (0x000589d9) ai2_gene_pane_g1

0xb458,	// (0x000589eb) ai2_gene_pane_g2_ParamLimits

0xb458,	// (0x000589eb) ai2_gene_pane_g2

0x0001,

0xf9c0,	// (0x0005cf53) ai2_gene_pane_g_ParamLimits

0xf9c0,	// (0x0005cf53) ai2_gene_pane_g

0x80ea,	// (0x0005567d) scroll_pane_cp12

0x5560,	// (0x00052af3) control_pane_t3_ParamLimits

0x5560,	// (0x00052af3) control_pane_t3

0x9433,	// (0x000569c6) status_small_pane_g8_ParamLimits

0x9433,	// (0x000569c6) status_small_pane_g8

0x5741,	// (0x00052cd4) popup_find_window_ParamLimits

0x5958,	// (0x00052eeb) popup_note_image_window_ParamLimits

0x3a1d,	// (0x00050fb0) list_double2_graphic_pane_vc_g1_ParamLimits

0x3a1d,	// (0x00050fb0) list_double2_graphic_pane_vc_g1

0x85a7,	// (0x00055b3a) list_double2_graphic_pane_vc_g2_ParamLimits

0x85a7,	// (0x00055b3a) list_double2_graphic_pane_vc_g2

0x80fb,	// (0x0005568e) list_double2_graphic_pane_vc_g3_ParamLimits

0x80fb,	// (0x0005568e) list_double2_graphic_pane_vc_g3

0x0002,

0xf79c,	// (0x0005cd2f) list_double2_graphic_pane_vc_g_ParamLimits

0xf79c,	// (0x0005cd2f) list_double2_graphic_pane_vc_g

0x5bbe,	// (0x00053151) list_double2_graphic_pane_vc_t1_ParamLimits

0x5bbe,	// (0x00053151) list_double2_graphic_pane_vc_t1

0x85a7,	// (0x00055b3a) list_single_heading_pane_vc_g1_ParamLimits

0x85a7,	// (0x00055b3a) list_single_heading_pane_vc_g1

0x80fb,	// (0x0005568e) list_single_heading_pane_vc_g2_ParamLimits

0x80fb,	// (0x0005568e) list_single_heading_pane_vc_g2

0x0001,

0xf5ab,	// (0x0005cb3e) list_single_heading_pane_vc_g_ParamLimits

0xf5ab,	// (0x0005cb3e) list_single_heading_pane_vc_g

0x5c29,	// (0x000531bc) list_single_heading_pane_vc_t1_ParamLimits

0x5c29,	// (0x000531bc) list_single_heading_pane_vc_t1

0x5c3f,	// (0x000531d2) list_single_heading_pane_vc_t2_ParamLimits

0x5c3f,	// (0x000531d2) list_single_heading_pane_vc_t2

0x0001,

0xf7bd,	// (0x0005cd50) list_single_heading_pane_vc_t_ParamLimits

0xf7bd,	// (0x0005cd50) list_single_heading_pane_vc_t

0x82c9,	// (0x0005585c) list_setting_number_pane_vc_g1_ParamLimits

0x82c9,	// (0x0005585c) list_setting_number_pane_vc_g1

0x82d5,	// (0x00055868) list_setting_number_pane_vc_g2_ParamLimits

0x82d5,	// (0x00055868) list_setting_number_pane_vc_g2

0x0001,

0xf7c2,	// (0x0005cd55) list_setting_number_pane_vc_g_ParamLimits

0xf7c2,	// (0x0005cd55) list_setting_number_pane_vc_g

0x5c77,	// (0x0005320a) list_setting_number_pane_vc_t1_ParamLimits

0x5c77,	// (0x0005320a) list_setting_number_pane_vc_t1

0x5c8b,	// (0x0005321e) list_setting_number_pane_vc_t2_ParamLimits

0x5c8b,	// (0x0005321e) list_setting_number_pane_vc_t2

0x5ca7,	// (0x0005323a) list_setting_number_pane_vc_t3_ParamLimits

0x5ca7,	// (0x0005323a) list_setting_number_pane_vc_t3

0x0002,

0xf7c7,	// (0x0005cd5a) list_setting_number_pane_vc_t_ParamLimits

0xf7c7,	// (0x0005cd5a) list_setting_number_pane_vc_t

0x5cd3,	// (0x00053266) set_value_pane_vc_ParamLimits

0x5cd3,	// (0x00053266) set_value_pane_vc

0xaf90,	// (0x00058523) list_double2_graphic_pane_vc_ParamLimits

0xaf90,	// (0x00058523) list_double2_graphic_pane_vc

0xaf90,	// (0x00058523) list_double2_large_graphic_pane_vc_ParamLimits

0xaf90,	// (0x00058523) list_double2_large_graphic_pane_vc

0xaf90,	// (0x00058523) list_double2_pane_vc_ParamLimits

0xaf90,	// (0x00058523) list_double2_pane_vc

0xaf90,	// (0x00058523) list_double_graphic_heading_pane_vc_ParamLimits

0xaf90,	// (0x00058523) list_double_graphic_heading_pane_vc

0xaf90,	// (0x00058523) list_double_graphic_pane_vc_ParamLimits

0xaf90,	// (0x00058523) list_double_graphic_pane_vc

0xaf90,	// (0x00058523) list_double_heading_pane_vc_ParamLimits

0xaf90,	// (0x00058523) list_double_heading_pane_vc

0xafa2,	// (0x00058535) list_double_large_graphic_pane_vc_ParamLimits

0xafa2,	// (0x00058535) list_double_large_graphic_pane_vc

0xaf90,	// (0x00058523) list_double_number_pane_vc_ParamLimits

0xaf90,	// (0x00058523) list_double_number_pane_vc

0xaf90,	// (0x00058523) list_double_pane_vc_ParamLimits

0xaf90,	// (0x00058523) list_double_pane_vc

0xaf90,	// (0x00058523) list_double_time_pane_vc_ParamLimits

0xaf90,	// (0x00058523) list_double_time_pane_vc

0xaf90,	// (0x00058523) list_setting_number_pane_vc_ParamLimits

0xaf90,	// (0x00058523) list_setting_number_pane_vc

0xaf90,	// (0x00058523) list_setting_pane_vc_ParamLimits

0xaf90,	// (0x00058523) list_setting_pane_vc

0xaf90,	// (0x00058523) list_single_graphic_heading_pane_vc_ParamLimits

0xaf90,	// (0x00058523) list_single_graphic_heading_pane_vc

0xaf90,	// (0x00058523) list_single_heading_pane_vc_ParamLimits

0xaf90,	// (0x00058523) list_single_heading_pane_vc

0x82fc,	// (0x0005588f) list_single_number_heading_pane_vc_ParamLimits

0x82fc,	// (0x0005588f) list_single_number_heading_pane_vc

0x613d,	// (0x000536d0) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x613d,	// (0x000536d0) list_double_graphic_heading_pane_vc_g1

0x6149,	// (0x000536dc) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x6149,	// (0x000536dc) list_double_graphic_heading_pane_vc_g2

0x6155,	// (0x000536e8) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x6155,	// (0x000536e8) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9cc,	// (0x0005cf5f) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9cc,	// (0x0005cf5f) list_double_graphic_heading_pane_vc_g

0x6161,	// (0x000536f4) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x6161,	// (0x000536f4) list_double_graphic_heading_pane_vc_t1

0x617d,	// (0x00053710) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x617d,	// (0x00053710) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9d3,	// (0x0005cf66) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9d3,	// (0x0005cf66) list_double_graphic_heading_pane_vc_t

0x82c9,	// (0x0005585c) list_setting_pane_vc_g1_ParamLimits

0x82c9,	// (0x0005585c) list_setting_pane_vc_g1

0x82d5,	// (0x00055868) list_setting_pane_vc_g2_ParamLimits

0x82d5,	// (0x00055868) list_setting_pane_vc_g2

0x0001,

0xf7c2,	// (0x0005cd55) list_setting_pane_vc_g_ParamLimits

0xf7c2,	// (0x0005cd55) list_setting_pane_vc_g

0x619b,	// (0x0005372e) list_setting_pane_vc_t1_ParamLimits

0x619b,	// (0x0005372e) list_setting_pane_vc_t1

0x61b7,	// (0x0005374a) list_setting_pane_vc_t2_ParamLimits

0x61b7,	// (0x0005374a) list_setting_pane_vc_t2

0x0001,

0xfa01,	// (0x0005cf94) list_setting_pane_vc_t_ParamLimits

0xfa01,	// (0x0005cf94) list_setting_pane_vc_t

0x5cd3,	// (0x00053266) set_value_pane_cp_vc_ParamLimits

0x5cd3,	// (0x00053266) set_value_pane_cp_vc

0x85a7,	// (0x00055b3a) list_single_number_heading_pane_vc_g1_ParamLimits

0x85a7,	// (0x00055b3a) list_single_number_heading_pane_vc_g1

0x80fb,	// (0x0005568e) list_single_number_heading_pane_vc_g2_ParamLimits

0x80fb,	// (0x0005568e) list_single_number_heading_pane_vc_g2

0x0001,

0xf5ab,	// (0x0005cb3e) list_single_number_heading_pane_vc_g_ParamLimits

0xf5ab,	// (0x0005cb3e) list_single_number_heading_pane_vc_g

0x39e3,	// (0x00050f76) list_single_number_heading_pane_vc_t1_ParamLimits

0x39e3,	// (0x00050f76) list_single_number_heading_pane_vc_t1

0x61d3,	// (0x00053766) list_single_number_heading_pane_vc_t2_ParamLimits

0x61d3,	// (0x00053766) list_single_number_heading_pane_vc_t2

0x61e9,	// (0x0005377c) list_single_number_heading_pane_vc_t3_ParamLimits

0x61e9,	// (0x0005377c) list_single_number_heading_pane_vc_t3

0x0002,

0xfa06,	// (0x0005cf99) list_single_number_heading_pane_vc_t_ParamLimits

0xfa06,	// (0x0005cf99) list_single_number_heading_pane_vc_t

0x3a1d,	// (0x00050fb0) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x3a1d,	// (0x00050fb0) list_single_graphic_heading_pane_vc_g1

0x85a7,	// (0x00055b3a) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x85a7,	// (0x00055b3a) list_single_graphic_heading_pane_vc_g4

0x80fb,	// (0x0005568e) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x80fb,	// (0x0005568e) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf79c,	// (0x0005cd2f) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf79c,	// (0x0005cd2f) list_single_graphic_heading_pane_vc_g

0x39e3,	// (0x00050f76) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x39e3,	// (0x00050f76) list_single_graphic_heading_pane_vc_t1

0x61fb,	// (0x0005378e) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x61fb,	// (0x0005378e) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa0d,	// (0x0005cfa0) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa0d,	// (0x0005cfa0) list_single_graphic_heading_pane_vc_t

0x85a7,	// (0x00055b3a) list_double2_pane_vc_g1_ParamLimits

0x85a7,	// (0x00055b3a) list_double2_pane_vc_g1

0x80fb,	// (0x0005568e) list_double2_pane_vc_g2_ParamLimits

0x80fb,	// (0x0005568e) list_double2_pane_vc_g2

0x0001,

0xf5ab,	// (0x0005cb3e) list_double2_pane_vc_g_ParamLimits

0xf5ab,	// (0x0005cb3e) list_double2_pane_vc_g

0x6027,	// (0x000535ba) list_double2_pane_vc_t1_ParamLimits

0x6027,	// (0x000535ba) list_double2_pane_vc_t1

0x8358,	// (0x000558eb) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x8358,	// (0x000558eb) list_double2_large_graphic_pane_vc_g1

0x85a7,	// (0x00055b3a) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x85a7,	// (0x00055b3a) list_double2_large_graphic_pane_vc_g2

0x80fb,	// (0x0005568e) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x80fb,	// (0x0005568e) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa12,	// (0x0005cfa5) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa12,	// (0x0005cfa5) list_double2_large_graphic_pane_vc_g

0x620d,	// (0x000537a0) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x620d,	// (0x000537a0) list_double2_large_graphic_pane_vc_t1

0x8364,	// (0x000558f7) list_double_time_pane_vc_g1_ParamLimits

0x8364,	// (0x000558f7) list_double_time_pane_vc_g1

0x8370,	// (0x00055903) list_double_time_pane_vc_g2_ParamLimits

0x8370,	// (0x00055903) list_double_time_pane_vc_g2

0x0001,

0xfa19,	// (0x0005cfac) list_double_time_pane_vc_g_ParamLimits

0xfa19,	// (0x0005cfac) list_double_time_pane_vc_g

0x6223,	// (0x000537b6) list_double_time_pane_vc_t1_ParamLimits

0x6223,	// (0x000537b6) list_double_time_pane_vc_t1

0x6247,	// (0x000537da) list_double_time_pane_vc_t2_ParamLimits

0x6247,	// (0x000537da) list_double_time_pane_vc_t2

0x6296,	// (0x00053829) list_double_time_pane_vc_t3_ParamLimits

0x6296,	// (0x00053829) list_double_time_pane_vc_t3

0x62a8,	// (0x0005383b) list_double_time_pane_vc_t4_ParamLimits

0x62a8,	// (0x0005383b) list_double_time_pane_vc_t4

0x0003,

0xfa1e,	// (0x0005cfb1) list_double_time_pane_vc_t_ParamLimits

0xfa1e,	// (0x0005cfb1) list_double_time_pane_vc_t

0x85a7,	// (0x00055b3a) list_double_pane_vc_g1_ParamLimits

0x85a7,	// (0x00055b3a) list_double_pane_vc_g1

0x80fb,	// (0x0005568e) list_double_pane_vc_g2_ParamLimits

0x80fb,	// (0x0005568e) list_double_pane_vc_g2

0x0001,

0xf5ab,	// (0x0005cb3e) list_double_pane_vc_g_ParamLimits

0xf5ab,	// (0x0005cb3e) list_double_pane_vc_g

0x62bc,	// (0x0005384f) list_double_pane_vc_t1_ParamLimits

0x62bc,	// (0x0005384f) list_double_pane_vc_t1

0x62d0,	// (0x00053863) list_double_pane_vc_t2_ParamLimits

0x62d0,	// (0x00053863) list_double_pane_vc_t2

0x0001,

0xfa27,	// (0x0005cfba) list_double_pane_vc_t_ParamLimits

0xfa27,	// (0x0005cfba) list_double_pane_vc_t

0x85a7,	// (0x00055b3a) list_double_number_pane_vc_g1_ParamLimits

0x85a7,	// (0x00055b3a) list_double_number_pane_vc_g1

0x80fb,	// (0x0005568e) list_double_number_pane_vc_g2_ParamLimits

0x80fb,	// (0x0005568e) list_double_number_pane_vc_g2

0x0001,

0xf5ab,	// (0x0005cb3e) list_double_number_pane_vc_g_ParamLimits

0xf5ab,	// (0x0005cb3e) list_double_number_pane_vc_g

0x62e8,	// (0x0005387b) list_double_number_pane_vc_t1_ParamLimits

0x62e8,	// (0x0005387b) list_double_number_pane_vc_t1

0x62fa,	// (0x0005388d) list_double_number_pane_vc_t2_ParamLimits

0x62fa,	// (0x0005388d) list_double_number_pane_vc_t2

0x630e,	// (0x000538a1) list_double_number_pane_vc_t3_ParamLimits

0x630e,	// (0x000538a1) list_double_number_pane_vc_t3

0x0002,

0xfa2c,	// (0x0005cfbf) list_double_number_pane_vc_t_ParamLimits

0xfa2c,	// (0x0005cfbf) list_double_number_pane_vc_t

0x837c,	// (0x0005590f) list_double_large_graphic_pane_vc_g1_ParamLimits

0x837c,	// (0x0005590f) list_double_large_graphic_pane_vc_g1

0x8398,	// (0x0005592b) list_double_large_graphic_pane_vc_g2_ParamLimits

0x8398,	// (0x0005592b) list_double_large_graphic_pane_vc_g2

0x83ac,	// (0x0005593f) list_double_large_graphic_pane_vc_g3_ParamLimits

0x83ac,	// (0x0005593f) list_double_large_graphic_pane_vc_g3

0x6328,	// (0x000538bb) list_double_large_graphic_pane_vc_g4_ParamLimits

0x6328,	// (0x000538bb) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa33,	// (0x0005cfc6) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa33,	// (0x0005cfc6) list_double_large_graphic_pane_vc_g

0x6337,	// (0x000538ca) list_double_large_graphic_pane_vc_t1_ParamLimits

0x6337,	// (0x000538ca) list_double_large_graphic_pane_vc_t1

0x6353,	// (0x000538e6) list_double_large_graphic_pane_vc_t2_ParamLimits

0x6353,	// (0x000538e6) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa3c,	// (0x0005cfcf) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa3c,	// (0x0005cfcf) list_double_large_graphic_pane_vc_t

0x6149,	// (0x000536dc) list_double_heading_pane_vc_g1_ParamLimits

0x6149,	// (0x000536dc) list_double_heading_pane_vc_g1

0x6155,	// (0x000536e8) list_double_heading_pane_vc_g2_ParamLimits

0x6155,	// (0x000536e8) list_double_heading_pane_vc_g2

0x0001,

0xfa41,	// (0x0005cfd4) list_double_heading_pane_vc_g_ParamLimits

0xfa41,	// (0x0005cfd4) list_double_heading_pane_vc_g

0x6375,	// (0x00053908) list_double_heading_pane_vc_t1_ParamLimits

0x6375,	// (0x00053908) list_double_heading_pane_vc_t1

0x6389,	// (0x0005391c) list_double_heading_pane_vc_t2_ParamLimits

0x6389,	// (0x0005391c) list_double_heading_pane_vc_t2

0x0001,

0xfa46,	// (0x0005cfd9) list_double_heading_pane_vc_t_ParamLimits

0xfa46,	// (0x0005cfd9) list_double_heading_pane_vc_t

0x63a1,	// (0x00053934) list_double_graphic_pane_vc_g1_ParamLimits

0x63a1,	// (0x00053934) list_double_graphic_pane_vc_g1

0x83bb,	// (0x0005594e) list_double_graphic_pane_vc_g2_ParamLimits

0x83bb,	// (0x0005594e) list_double_graphic_pane_vc_g2

0x85a7,	// (0x00055b3a) list_double_graphic_pane_vc_g3_ParamLimits

0x85a7,	// (0x00055b3a) list_double_graphic_pane_vc_g3

0x0003,

0xfa4b,	// (0x0005cfde) list_double_graphic_pane_vc_g_ParamLimits

0xfa4b,	// (0x0005cfde) list_double_graphic_pane_vc_g

0x63ad,	// (0x00053940) list_double_graphic_pane_vc_t1_ParamLimits

0x63ad,	// (0x00053940) list_double_graphic_pane_vc_t1

0x63d7,	// (0x0005396a) list_double_graphic_pane_vc_t2_ParamLimits

0x63d7,	// (0x0005396a) list_double_graphic_pane_vc_t2

0x0001,

0xfa54,	// (0x0005cfe7) list_double_graphic_pane_vc_t_ParamLimits

0xfa54,	// (0x0005cfe7) list_double_graphic_pane_vc_t

0x44e7,	// (0x00051a7a) aid_size_cell_fastswap

0x44ef,	// (0x00051a82) aid_size_cell_touch_ParamLimits

0x44ef,	// (0x00051a82) aid_size_cell_touch

0x475a,	// (0x00051ced) popup_fast_swap_wide_window_ParamLimits

0x475a,	// (0x00051ced) popup_fast_swap_wide_window

0x486e,	// (0x00051e01) touch_pane_ParamLimits

0x486e,	// (0x00051e01) touch_pane

0x81e1,	// (0x00055774) button_value_adjust_pane_cp2

0x4ceb,	// (0x0005227e) button_value_adjust_pane_cp4

0x4d0f,	// (0x000522a2) form_field_data_pane_cp2

0x4d30,	// (0x000522c3) form_field_data_wide_pane_cp2

0x8976,	// (0x00055f09) bg_scroll_pane_ParamLimits

0x50f3,	// (0x00052686) scroll_handle_pane_ParamLimits

0x5107,	// (0x0005269a) scroll_sc2_down_pane_ParamLimits

0x5107,	// (0x0005269a) scroll_sc2_down_pane

0x89a7,	// (0x00055f3a) scroll_sc2_up_pane_ParamLimits

0x89a7,	// (0x00055f3a) scroll_sc2_up_pane

0xbbad,	// (0x00059140) grid_wheel_folder_pane_g1_ParamLimits

0xbbad,	// (0x00059140) grid_wheel_folder_pane_g1

0x533a,	// (0x000528cd) clock_nsta_pane_cp2_ParamLimits

0x533a,	// (0x000528cd) clock_nsta_pane_cp2

0x91b9,	// (0x0005674c) listscroll_midp_pane_ParamLimits

0x91c5,	// (0x00056758) midp_canvas_pane

0x94ad,	// (0x00056a40) nsta_clock_indic_pane

0x94e1,	// (0x00056a74) listscroll_form_pane_vc

0x94e9,	// (0x00056a7c) listscroll_set_pane_vc_ParamLimits

0x94e9,	// (0x00056a7c) listscroll_set_pane_vc

0x95e2,	// (0x00056b75) clock_nsta_pane

0x965d,	// (0x00056bf0) indicator_nsta_pane

0x993d,	// (0x00056ed0) bg_popup_sub_pane_cp2_ParamLimits

0x9951,	// (0x00056ee4) find_pane_cp2_ParamLimits

0x9951,	// (0x00056ee4) find_pane_cp2

0x9967,	// (0x00056efa) grid_toobar_pane_ParamLimits

0x9a47,	// (0x00056fda) list_form_gen_pane_vc_ParamLimits

0x9a47,	// (0x00056fda) list_form_gen_pane_vc

0x9a5d,	// (0x00056ff0) scroll_pane_cp8_vc_ParamLimits

0x9a5d,	// (0x00056ff0) scroll_pane_cp8_vc

0x9ad9,	// (0x0005706c) data_form_wide_pane_vc_ParamLimits

0x9ad9,	// (0x0005706c) data_form_wide_pane_vc

0x9ae5,	// (0x00057078) form_field_data_wide_pane_vc_g1

0x9aed,	// (0x00057080) form_field_data_wide_pane_vc_t1_ParamLimits

0x9aed,	// (0x00057080) form_field_data_wide_pane_vc_t1

0x81f5,	// (0x00055788) input_focus_pane_cp6_vc_ParamLimits

0x81f5,	// (0x00055788) input_focus_pane_cp6_vc

0x9e13,	// (0x000573a6) list_midp_pane_ParamLimits

0x9e1f,	// (0x000573b2) scroll_pane_cp16_ParamLimits

0x9e1f,	// (0x000573b2) scroll_pane_cp16

0x9e89,	// (0x0005741c) button_value_adjust_pane_ParamLimits

0x9e89,	// (0x0005741c) button_value_adjust_pane

0xadea,	// (0x0005837d) button_value_adjust_pane_cp6_ParamLimits

0xadea,	// (0x0005837d) button_value_adjust_pane_cp6

0xaf14,	// (0x000584a7) settings_code_pane_cp_ParamLimits

0xaf14,	// (0x000584a7) settings_code_pane_cp

0x19e0,	// (0x0004ef73) cell_touch_pane_g1

0x19e0,	// (0x0004ef73) cell_touch_pane_g2

0x0001,

0xf6e1,	// (0x0005cc74) cell_touch_pane_g

0xb4d7,	// (0x00058a6a) cell_touch_pane_cp_ParamLimits

0xb4d7,	// (0x00058a6a) cell_touch_pane_cp

0xb4e7,	// (0x00058a7a) cell_touch_pane_ParamLimits

0xb4e7,	// (0x00058a7a) cell_touch_pane

0x19e0,	// (0x0004ef73) scroll_sc2_down_pane_g1

0x19e0,	// (0x0004ef73) scroll_sc2_up_pane_g1

0x19ea,	// (0x0004ef7d) bg_set_opt_pane_cp4_vc

0xb4f9,	// (0x00058a8c) list_set_graphic_pane_vc_g1_ParamLimits

0xb4f9,	// (0x00058a8c) list_set_graphic_pane_vc_g1

0xb505,	// (0x00058a98) list_set_graphic_pane_vc_g2_ParamLimits

0xb505,	// (0x00058a98) list_set_graphic_pane_vc_g2

0x0001,

0xf9d8,	// (0x0005cf6b) list_set_graphic_pane_vc_g_ParamLimits

0xf9d8,	// (0x0005cf6b) list_set_graphic_pane_vc_g

0xb511,	// (0x00058aa4) text_primary_small_cp13_vc_ParamLimits

0xb511,	// (0x00058aa4) text_primary_small_cp13_vc

0xb529,	// (0x00058abc) list_set_graphic_pane_vc_ParamLimits

0xb529,	// (0x00058abc) list_set_graphic_pane_vc

0x19ea,	// (0x0004ef7d) input_focus_pane_cp2_vc

0x19e0,	// (0x0004ef73) setting_code_pane_vc_g1

0x7912,	// (0x00054ea5) setting_code_pane_vc_t1

0xb53c,	// (0x00058acf) set_text_pane_vc_t1_ParamLimits

0xb53c,	// (0x00058acf) set_text_pane_vc_t1

0x19ea,	// (0x0004ef7d) input_focus_pane_cp1_vc

0xb558,	// (0x00058aeb) list_set_text_pane_vc

0x19e0,	// (0x0004ef73) setting_text_pane_vc_g1

0x19ea,	// (0x0004ef7d) bg_set_opt_pane_cp2_vc

0x7909,	// (0x00054e9c) setting_slider_graphic_pane_vc_g1

0xb562,	// (0x00058af5) setting_slider_graphic_pane_vc_t1

0xb572,	// (0x00058b05) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9dd,	// (0x0005cf70) setting_slider_graphic_pane_vc_t

0xb582,	// (0x00058b15) slider_set_pane_cp_vc

0xb58a,	// (0x00058b1d) slider_set_pane_vc_g1

0xb593,	// (0x00058b26) slider_set_pane_vc_g2

0x0006,

0xf9e2,	// (0x0005cf75) slider_set_pane_vc_g

0x8241,	// (0x000557d4) set_opt_bg_pane_g1_copy1

0x8249,	// (0x000557dc) set_opt_bg_pane_g2_copy1

0xb5bf,	// (0x00058b52) set_opt_bg_pane_g3_copy1

0x8259,	// (0x000557ec) set_opt_bg_pane_g4_copy1

0x8261,	// (0x000557f4) set_opt_bg_pane_g5_copy1

0x8269,	// (0x000557fc) set_opt_bg_pane_g6_copy1

0xb5c9,	// (0x00058b5c) set_opt_bg_pane_g7_copy1

0xb5d3,	// (0x00058b66) set_opt_bg_pane_g8_copy1

0xb5dd,	// (0x00058b70) set_opt_bg_pane_g9_copy1

0x19ea,	// (0x0004ef7d) bg_set_opt_pane_cp_vc

0xb5e7,	// (0x00058b7a) setting_slider_pane_vc_t1

0xb5f6,	// (0x00058b89) setting_slider_pane_vc_t2

0xb606,	// (0x00058b99) setting_slider_pane_vc_t3

0x0002,

0xf9f1,	// (0x0005cf84) setting_slider_pane_vc_t

0xb616,	// (0x00058ba9) slider_set_pane_vc

0x5db9,	// (0x0005334c) volume_set_pane_vc_g1

0x5dc2,	// (0x00053355) volume_set_pane_vc_g2

0x5dcb,	// (0x0005335e) volume_set_pane_vc_g3

0x5dd4,	// (0x00053367) volume_set_pane_vc_g4

0x5ddd,	// (0x00053370) volume_set_pane_vc_g5

0x5de6,	// (0x00053379) volume_set_pane_vc_g6

0x5def,	// (0x00053382) volume_set_pane_vc_g7

0x5df8,	// (0x0005338b) volume_set_pane_vc_g8

0x5e01,	// (0x00053394) volume_set_pane_vc_g9

0x5e0a,	// (0x0005339d) volume_set_pane_vc_g10

0x0009,

0xf88f,	// (0x0005ce22) volume_set_pane_vc_g

0xb61e,	// (0x00058bb1) volume_set_pane_vc

0xb626,	// (0x00058bb9) button_value_adjust_pane_cp1_vc

0xb630,	// (0x00058bc3) list_highlight_pane_cp2_vc

0xb639,	// (0x00058bcc) list_set_pane_vc_ParamLimits

0xb639,	// (0x00058bcc) list_set_pane_vc

0xb697,	// (0x00058c2a) main_pane_set_vc_t1_ParamLimits

0xb697,	// (0x00058c2a) main_pane_set_vc_t1

0xb6ac,	// (0x00058c3f) main_pane_set_vc_t2_ParamLimits

0xb6ac,	// (0x00058c3f) main_pane_set_vc_t2

0xb6be,	// (0x00058c51) main_pane_set_vc_t3_ParamLimits

0xb6be,	// (0x00058c51) main_pane_set_vc_t3

0xb6d2,	// (0x00058c65) main_pane_set_vc_t4_ParamLimits

0xb6d2,	// (0x00058c65) main_pane_set_vc_t4

0x0003,

0xf9f8,	// (0x0005cf8b) main_pane_set_vc_t_ParamLimits

0xf9f8,	// (0x0005cf8b) main_pane_set_vc_t

0xb6e6,	// (0x00058c79) setting_code_pane_vc_ParamLimits

0xb6e6,	// (0x00058c79) setting_code_pane_vc

0xb6f7,	// (0x00058c8a) setting_slider_graphic_pane_vc

0xb6f7,	// (0x00058c8a) setting_slider_pane_vc

0xb6f7,	// (0x00058c8a) setting_text_pane_vc

0xb6f7,	// (0x00058c8a) setting_volume_pane_vc

0xb701,	// (0x00058c94) scroll_pane_cp121_vc

0x81cf,	// (0x00055762) set_content_pane_vc

0xb709,	// (0x00058c9c) button_value_adjust_pane_g1

0xb712,	// (0x00058ca5) button_value_adjust_pane_g2

0x0001,

0xfa59,	// (0x0005cfec) button_value_adjust_pane_g

0xb71b,	// (0x00058cae) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb71b,	// (0x00058cae) form_field_slider_wide_pane_vc_t1

0xb72f,	// (0x00058cc2) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb72f,	// (0x00058cc2) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa5e,	// (0x0005cff1) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa5e,	// (0x0005cff1) form_field_slider_wide_pane_vc_t

0x7b42,	// (0x000550d5) input_focus_pane_cp10_vc_ParamLimits

0x7b42,	// (0x000550d5) input_focus_pane_cp10_vc

0xb75d,	// (0x00058cf0) slider_cont_pane_cp1_vc_ParamLimits

0xb75d,	// (0x00058cf0) slider_cont_pane_cp1_vc

0xb76f,	// (0x00058d02) slider_form_pane_g1_cp2

0xb593,	// (0x00058b26) slider_form_pane_g2_cp2

0xb79c,	// (0x00058d2f) form_field_slider_pane_vc_t3

0xb7aa,	// (0x00058d3d) form_field_slider_pane_vc_t4

0xb7b8,	// (0x00058d4b) slider_form_pane_vc_ParamLimits

0xb7b8,	// (0x00058d4b) slider_form_pane_vc

0xb7c5,	// (0x00058d58) form_field_slider_pane_vc_t1_ParamLimits

0xb7c5,	// (0x00058d58) form_field_slider_pane_vc_t1

0xb72f,	// (0x00058cc2) form_field_slider_pane_vc_t2_ParamLimits

0xb72f,	// (0x00058cc2) form_field_slider_pane_vc_t2

0x0001,

0xfa70,	// (0x0005d003) form_field_slider_pane_vc_t_ParamLimits

0xfa70,	// (0x0005d003) form_field_slider_pane_vc_t

0x7b42,	// (0x000550d5) input_focus_pane_cp9_vc_ParamLimits

0x7b42,	// (0x000550d5) input_focus_pane_cp9_vc

0xb7e1,	// (0x00058d74) slider_cont_pane_vc_ParamLimits

0xb7e1,	// (0x00058d74) slider_cont_pane_vc

0xb7f5,	// (0x00058d88) list_form_graphic_pane_cp_vc_ParamLimits

0xb7f5,	// (0x00058d88) list_form_graphic_pane_cp_vc

0x9ae5,	// (0x00057078) form_field_popup_wide_pane_vc_g1

0xb80a,	// (0x00058d9d) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb80a,	// (0x00058d9d) form_field_popup_wide_pane_vc_t1

0x81f5,	// (0x00055788) input_focus_pane_cp8_vc_ParamLimits

0x81f5,	// (0x00055788) input_focus_pane_cp8_vc

0xb84f,	// (0x00058de2) list_form_wide_pane_vc_ParamLimits

0xb84f,	// (0x00058de2) list_form_wide_pane_vc

0xb85b,	// (0x00058dee) list_form_graphic_pane_vc_g1

0xb863,	// (0x00058df6) list_form_graphic_pane_vc_t1_ParamLimits

0xb863,	// (0x00058df6) list_form_graphic_pane_vc_t1

0x78c7,	// (0x00054e5a) list_highlight_pane_cp5_vc_ParamLimits

0x78c7,	// (0x00054e5a) list_highlight_pane_cp5_vc

0xb87f,	// (0x00058e12) list_form_graphic_pane_vc_ParamLimits

0xb87f,	// (0x00058e12) list_form_graphic_pane_vc

0x9ae5,	// (0x00057078) form_field_popup_pane_vc_g1

0xb895,	// (0x00058e28) form_field_popup_pane_vc_t1_ParamLimits

0xb895,	// (0x00058e28) form_field_popup_pane_vc_t1

0x81f5,	// (0x00055788) input_focus_pane_cp7_vc_ParamLimits

0x81f5,	// (0x00055788) input_focus_pane_cp7_vc

0xb8ac,	// (0x00058e3f) list_form_pane_vc_ParamLimits

0xb8ac,	// (0x00058e3f) list_form_pane_vc

0xb8b8,	// (0x00058e4b) data_form_pane_vc_t1_ParamLimits

0xb8b8,	// (0x00058e4b) data_form_pane_vc_t1

0x8241,	// (0x000557d4) input_focus_pane_vc_g1

0x8249,	// (0x000557dc) input_focus_pane_vc_g2

0x8251,	// (0x000557e4) input_focus_pane_vc_g3

0x8259,	// (0x000557ec) input_focus_pane_vc_g4

0x8261,	// (0x000557f4) input_focus_pane_vc_g5

0x8269,	// (0x000557fc) input_focus_pane_vc_g6

0x8271,	// (0x00055804) input_focus_pane_vc_g7

0x8279,	// (0x0005580c) input_focus_pane_vc_g8

0x8281,	// (0x00055814) input_focus_pane_vc_g9

0x19e0,	// (0x0004ef73) input_focus_pane_vc_g10

0x0009,

0xf66a,	// (0x0005cbfd) input_focus_pane_vc_g

0x9ad9,	// (0x0005706c) data_form_pane_vc_ParamLimits

0x9ad9,	// (0x0005706c) data_form_pane_vc

0x9ae5,	// (0x00057078) form_field_data_pane_vc_g1

0xb8d3,	// (0x00058e66) form_field_data_pane_vc_t1_ParamLimits

0xb8d3,	// (0x00058e66) form_field_data_pane_vc_t1

0x81f5,	// (0x00055788) input_focus_pane_vc_ParamLimits

0x81f5,	// (0x00055788) input_focus_pane_vc

0xb8ed,	// (0x00058e80) button_value_adjust_pane_cp3_vc

0xb8f5,	// (0x00058e88) button_value_adjust_pane_cp5_vc

0xb8fd,	// (0x00058e90) form_field_data_pane_vc_ParamLimits

0xb8fd,	// (0x00058e90) form_field_data_pane_vc

0xb914,	// (0x00058ea7) form_field_data_pane_vc_cp2

0xb91c,	// (0x00058eaf) form_field_data_wide_pane_vc_ParamLimits

0xb91c,	// (0x00058eaf) form_field_data_wide_pane_vc

0xb932,	// (0x00058ec5) form_field_data_wide_pane_vc_cp2

0xb93a,	// (0x00058ecd) form_field_popup_pane_vc_ParamLimits

0xb93a,	// (0x00058ecd) form_field_popup_pane_vc

0xb951,	// (0x00058ee4) form_field_popup_wide_pane_vc_ParamLimits

0xb951,	// (0x00058ee4) form_field_popup_wide_pane_vc

0xb967,	// (0x00058efa) form_field_slider_pane_vc_ParamLimits

0xb967,	// (0x00058efa) form_field_slider_pane_vc

0xb97a,	// (0x00058f0d) form_field_slider_wide_pane_vc_ParamLimits

0xb97a,	// (0x00058f0d) form_field_slider_wide_pane_vc

0xb98d,	// (0x00058f20) grid_touch_1_pane_ParamLimits

0xb98d,	// (0x00058f20) grid_touch_1_pane

0xb999,	// (0x00058f2c) grid_touch_2_pane_ParamLimits

0xb999,	// (0x00058f2c) grid_touch_2_pane

0x9478,	// (0x00056a0b) touch_pane_g1_ParamLimits

0x9478,	// (0x00056a0b) touch_pane_g1

0xb9b1,	// (0x00058f44) cell_app_pane_cp_wide_ParamLimits

0xb9b1,	// (0x00058f44) cell_app_pane_cp_wide

0xb9c2,	// (0x00058f55) grid_popup_fast_wide_pane_ParamLimits

0xb9c2,	// (0x00058f55) grid_popup_fast_wide_pane

0xb9d6,	// (0x00058f69) scroll_pane_cp19_ParamLimits

0xb9d6,	// (0x00058f69) scroll_pane_cp19

0x19ea,	// (0x0004ef7d) bg_popup_window_pane_cp20

0xb9ea,	// (0x00058f7d) listscroll_popup_fast_wide_pane

0xb9f2,	// (0x00058f85) grid_indicator_nsta_pane

0xba04,	// (0x00058f97) clock_nsta_pane_g1

0xba0d,	// (0x00058fa0) clock_nsta_pane_t1

0xba29,	// (0x00058fbc) cell_indicator_nsta_pane_ParamLimits

0xba29,	// (0x00058fbc) cell_indicator_nsta_pane

0xba5e,	// (0x00058ff1) cell_indicator_nsta_pane_g1

0xba6c,	// (0x00058fff) cell_indicator_nsta_pane_g2

0x0001,

0xfa81,	// (0x0005d014) cell_indicator_nsta_pane_g

0xba7e,	// (0x00059011) clock_nsta_pane_cp

0xba87,	// (0x0005901a) indicator_nsta_pane_cp

0xba91,	// (0x00059024) nsta_clock_indic_pane_g1

0x7990,	// (0x00054f23) grid_indicator_pane

0x8a9c,	// (0x0005602f) scroll_pane_cp29

0x5289,	// (0x0005281c) indicator_nsta_pane_cp2_ParamLimits

0x5289,	// (0x0005281c) indicator_nsta_pane_cp2

0x78c7,	// (0x00054e5a) main_apps_wheel_pane

0x9cf4,	// (0x00057287) form_midp_field_text_pane_ParamLimits

0x9e3f,	// (0x000573d2) scroll_bar_cp050_ParamLimits

0xbaea,	// (0x0005907d) cell_indicator_pane_ParamLimits

0xbaea,	// (0x0005907d) cell_indicator_pane

0xbb01,	// (0x00059094) cell_indicator_pane_g1

0xbb0b,	// (0x0005909e) grid_wheel_folder_pane_ParamLimits

0xbb0b,	// (0x0005909e) grid_wheel_folder_pane

0xbb21,	// (0x000590b4) list_wheel_apps_pane_ParamLimits

0xbb21,	// (0x000590b4) list_wheel_apps_pane

0xbb32,	// (0x000590c5) main_apps_wheel_pane_g1_ParamLimits

0xbb32,	// (0x000590c5) main_apps_wheel_pane_g1

0xbb46,	// (0x000590d9) main_apps_wheel_pane_g2_ParamLimits

0xbb46,	// (0x000590d9) main_apps_wheel_pane_g2

0x0001,

0xfa9d,	// (0x0005d030) main_apps_wheel_pane_g_ParamLimits

0xfa9d,	// (0x0005d030) main_apps_wheel_pane_g

0xbb5e,	// (0x000590f1) main_apps_wheel_pane_t1_ParamLimits

0xbb5e,	// (0x000590f1) main_apps_wheel_pane_t1

0xbb81,	// (0x00059114) list_wheel_apps_pane_g1

0xbb89,	// (0x0005911c) list_wheel_apps_pane_g2

0xbb91,	// (0x00059124) list_wheel_apps_pane_g3

0xbb99,	// (0x0005912c) list_wheel_apps_pane_g4

0xbba3,	// (0x00059136) list_wheel_apps_pane_g5

0x0004,

0xfaa2,	// (0x0005d035) list_wheel_apps_pane_g

0x9030,	// (0x000565c3) navi_icon_text_pane

0x9511,	// (0x00056aa4) aid_fill_nsta

0xbbc6,	// (0x00059159) navi_icon_text_pane_g1

0xbbd2,	// (0x00059165) navi_icon_text_pane_t1

0x8ece,	// (0x00056461) list_set_graphic_pane_t1_ParamLimits

0x8ece,	// (0x00056461) list_set_graphic_pane_t1

0xa5aa,	// (0x00057b3d) popup_midp_note_alarm_window_t6_ParamLimits

0xa5aa,	// (0x00057b3d) popup_midp_note_alarm_window_t6

0xa5bc,	// (0x00057b4f) popup_midp_note_alarm_window_t7_ParamLimits

0xa5bc,	// (0x00057b4f) popup_midp_note_alarm_window_t7

0xa5ce,	// (0x00057b61) popup_midp_note_alarm_window_t8_ParamLimits

0xa5ce,	// (0x00057b61) popup_midp_note_alarm_window_t8

0xa5e0,	// (0x00057b73) popup_midp_note_alarm_window_t9_ParamLimits

0xa5e0,	// (0x00057b73) popup_midp_note_alarm_window_t9

0xa5f2,	// (0x00057b85) popup_midp_note_alarm_window_t10_ParamLimits

0xa5f2,	// (0x00057b85) popup_midp_note_alarm_window_t10

0xa604,	// (0x00057b97) popup_midp_note_alarm_window_t11_ParamLimits

0xa604,	// (0x00057b97) popup_midp_note_alarm_window_t11

0xa616,	// (0x00057ba9) scroll_pane_cp17_ParamLimits

0xa616,	// (0x00057ba9) scroll_pane_cp17

0x5db9,	// (0x0005334c) volume_small_pane_cp_g1

0x6406,	// (0x00053999) volume_small_pane_cp_g2

0x640f,	// (0x000539a2) volume_small_pane_cp_g3

0x6418,	// (0x000539ab) volume_small_pane_cp_g4

0x6421,	// (0x000539b4) volume_small_pane_cp_g5

0x642a,	// (0x000539bd) volume_small_pane_cp_g6

0x6433,	// (0x000539c6) volume_small_pane_cp_g7

0x643c,	// (0x000539cf) volume_small_pane_cp_g8

0x6445,	// (0x000539d8) volume_small_pane_cp_g9

0x644e,	// (0x000539e1) volume_small_pane_cp_g10

0x928e,	// (0x00056821) midp_ticker_pane_g1_ParamLimits

0x929a,	// (0x0005682d) midp_ticker_pane_g2_ParamLimits

0xf736,	// (0x0005ccc9) midp_ticker_pane_g_ParamLimits

0x92a6,	// (0x00056839) midp_ticker_pane_t1_ParamLimits

0x9527,	// (0x00056aba) aid_fill_nsta_2

0x9e2b,	// (0x000573be) list_form2_midp_pane

0xaf5f,	// (0x000584f2) midp_editing_number_pane_ParamLimits

0xaf6e,	// (0x00058501) midp_ticker_pane_ParamLimits

0xbbe4,	// (0x00059177) form2_midp_field_pane

0xbc08,	// (0x0005919b) scroll_pane_cp51

0xbc28,	// (0x000591bb) form2_midp_button_pane_ParamLimits

0xbc28,	// (0x000591bb) form2_midp_button_pane

0xbc3a,	// (0x000591cd) form2_midp_content_pane_ParamLimits

0xbc3a,	// (0x000591cd) form2_midp_content_pane

0xbc54,	// (0x000591e7) form2_midp_field_choice_group_pane

0xbc5c,	// (0x000591ef) form2_midp_field_pane_g1

0xbc64,	// (0x000591f7) form2_midp_field_pane_g2

0xbc6c,	// (0x000591ff) form2_midp_field_pane_g3

0xbc74,	// (0x00059207) form2_midp_field_pane_g4

0x0003,

0xfac7,	// (0x0005d05a) form2_midp_field_pane_g

0xbc7c,	// (0x0005920f) form2_midp_gauge_slider_pane

0xbc84,	// (0x00059217) form2_midp_gauge_wait_pane

0xbc8c,	// (0x0005921f) form2_midp_image_pane_ParamLimits

0xbc8c,	// (0x0005921f) form2_midp_image_pane

0xbca7,	// (0x0005923a) form2_midp_label_pane_ParamLimits

0xbca7,	// (0x0005923a) form2_midp_label_pane

0xbcc0,	// (0x00059253) form2_midp_label_pane_cp_ParamLimits

0xbcc0,	// (0x00059253) form2_midp_label_pane_cp

0xbced,	// (0x00059280) form2_midp_string_pane_ParamLimits

0xbced,	// (0x00059280) form2_midp_string_pane

0x6457,	// (0x000539ea) form2_midp_text_pane_ParamLimits

0x6457,	// (0x000539ea) form2_midp_text_pane

0xbcff,	// (0x00059292) form2_midp_time_pane

0xbd0f,	// (0x000592a2) input_focus_pane_cp51_ParamLimits

0xbd0f,	// (0x000592a2) input_focus_pane_cp51

0xbd27,	// (0x000592ba) form2_midp_label_pane_t1_ParamLimits

0xbd27,	// (0x000592ba) form2_midp_label_pane_t1

0x6476,	// (0x00053a09) form2_mdip_text_pane_t1_ParamLimits

0x6476,	// (0x00053a09) form2_mdip_text_pane_t1

0x6494,	// (0x00053a27) form2_midp_time_pane_t1

0xbd70,	// (0x00059303) form2_midp_gauge_slider_pane_t1

0xbd82,	// (0x00059315) form2_midp_gauge_slider_pane_t2

0xbd94,	// (0x00059327) form2_midp_gauge_slider_pane_t3

0x0002,

0xfad0,	// (0x0005d063) form2_midp_gauge_slider_pane_t

0xbda6,	// (0x00059339) form2_midp_slider_pane

0xbdb2,	// (0x00059345) form2_midp_gauge_wait_pane_t1

0xbdc0,	// (0x00059353) form2_midp_wait_pane_ParamLimits

0xbdc0,	// (0x00059353) form2_midp_wait_pane

0xbdeb,	// (0x0005937e) list_single_2graphic_pane_cp4_ParamLimits

0xbdeb,	// (0x0005937e) list_single_2graphic_pane_cp4

0x9b4d,	// (0x000570e0) list_single_midp_graphic_pane_cp_ParamLimits

0x9b4d,	// (0x000570e0) list_single_midp_graphic_pane_cp

0x19ea,	// (0x0004ef7d) list_highlight_pane_cp20

0xbe0f,	// (0x000593a2) list_single_2graphic_pane_g1_cp4

0xbe17,	// (0x000593aa) list_single_2graphic_pane_g2_cp4

0xbe1f,	// (0x000593b2) list_single_2graphic_pane_t1_cp4

0x78c7,	// (0x00054e5a) list_highlight_pane_cp21

0xbe2e,	// (0x000593c1) list_single_midp_graphic_pane_g4_cp

0xbe3d,	// (0x000593d0) list_single_midp_graphic_pane_t1_cp

0xbe52,	// (0x000593e5) form2_mdip_string_pane_t1_ParamLimits

0xbe52,	// (0x000593e5) form2_mdip_string_pane_t1

0x19ea,	// (0x0004ef7d) bg_wml_button_pane_cp2

0x19e0,	// (0x0004ef73) form2_midp_image_pane_g1

0x8187,	// (0x0005571a) list_double_large_graphic_pane_g5_ParamLimits

0x8187,	// (0x0005571a) list_double_large_graphic_pane_g5

0x91b9,	// (0x0005674c) midp_form_pane_ParamLimits

0x78c7,	// (0x00054e5a) main_apps_wheel_pane_ParamLimits

0x597e,	// (0x00052f11) popup_preview_window_ParamLimits

0x597e,	// (0x00052f11) popup_preview_window

0x5b39,	// (0x000530cc) popup_touch_info_window_ParamLimits

0x5b39,	// (0x000530cc) popup_touch_info_window

0x5b57,	// (0x000530ea) popup_touch_menu_window_ParamLimits

0x5b57,	// (0x000530ea) popup_touch_menu_window

0x19d6,	// (0x0004ef69) bg_popup_sub_pane_cp6

0xbf4b,	// (0x000594de) list_touch_menu_pane

0xbf53,	// (0x000594e6) list_single_touch_menu_pane_ParamLimits

0xbf53,	// (0x000594e6) list_single_touch_menu_pane

0xbf69,	// (0x000594fc) list_single_touch_menu_pane_t1

0x78c7,	// (0x00054e5a) bg_popup_sub_pane_cp7_ParamLimits

0x78c7,	// (0x00054e5a) bg_popup_sub_pane_cp7

0x9e5f,	// (0x000573f2) heading_sub_pane

0xbf77,	// (0x0005950a) list_touch_info_pane_ParamLimits

0xbf77,	// (0x0005950a) list_touch_info_pane

0xbf87,	// (0x0005951a) list_single_touch_info_pane_ParamLimits

0xbf87,	// (0x0005951a) list_single_touch_info_pane

0xbf99,	// (0x0005952c) list_single_touch_info_pane_t1

0xbfa7,	// (0x0005953a) list_single_touch_info_pane_t2

0x0001,

0xfade,	// (0x0005d071) list_single_touch_info_pane_t

0x91b1,	// (0x00056744) bg_popup_heading_pane_cp

0xbfb5,	// (0x00059548) heading_sub_pane_t1

0x9a73,	// (0x00057006) bg_popup_preview_window_pane_cp_ParamLimits

0x9a73,	// (0x00057006) bg_popup_preview_window_pane_cp

0x9e5f,	// (0x000573f2) heading_preview_pane

0xbf77,	// (0x0005950a) list_preview_pane_ParamLimits

0xbf77,	// (0x0005950a) list_preview_pane

0xbfc3,	// (0x00059556) popup_preview_window_g1

0xbf87,	// (0x0005951a) list_single_preview_pane_ParamLimits

0xbf87,	// (0x0005951a) list_single_preview_pane

0xbfcb,	// (0x0005955e) list_single_preview_pane_g1

0xbfd3,	// (0x00059566) list_single_preview_pane_t1

0xbf99,	// (0x0005952c) list_single_preview_pane_t2

0x0001,

0xfae3,	// (0x0005d076) list_single_preview_pane_t

0xbfe1,	// (0x00059574) bg_popup_heading_pane_cp2_ParamLimits

0xbfe1,	// (0x00059574) bg_popup_heading_pane_cp2

0xbff7,	// (0x0005958a) heading_preview_pane_g1

0xbfff,	// (0x00059592) heading_preview_pane_t1_ParamLimits

0xbfff,	// (0x00059592) heading_preview_pane_t1

0x79b3,	// (0x00054f46) soft_indicator_pane_t1_ParamLimits

0x80c7,	// (0x0005565a) scroll_pane_ParamLimits

0x8995,	// (0x00055f28) scroll_sc2_left_pane

0x899e,	// (0x00055f31) scroll_sc2_right_pane

0x89bd,	// (0x00055f50) scroll_bg_pane_g1_ParamLimits

0x89d2,	// (0x00055f65) scroll_bg_pane_g2_ParamLimits

0x89ea,	// (0x00055f7d) scroll_bg_pane_g3_ParamLimits

0xf6c1,	// (0x0005cc54) scroll_bg_pane_g_ParamLimits

0x89bd,	// (0x00055f50) scroll_handle_pane_g1_ParamLimits

0x8a0c,	// (0x00055f9f) scroll_handle_pane_g2_ParamLimits

0x89ea,	// (0x00055f7d) scroll_handle_pane_g3_ParamLimits

0xf6c8,	// (0x0005cc5b) scroll_handle_pane_g_ParamLimits

0x55fd,	// (0x00052b90) popup_choice_list_window_ParamLimits

0x55fd,	// (0x00052b90) popup_choice_list_window

0x9949,	// (0x00056edc) choice_list_pane

0x99cb,	// (0x00056f5e) cell_toolbar_pane_t1

0x99f3,	// (0x00056f86) toolbar_button_pane_ParamLimits

0xaad0,	// (0x00058063) ai_gene_pane_1_t2_ParamLimits

0xaad0,	// (0x00058063) ai_gene_pane_1_t2

0x0001,

0xf8eb,	// (0x0005ce7e) ai_gene_pane_1_t_ParamLimits

0xf8eb,	// (0x0005ce7e) ai_gene_pane_1_t

0xc01c,	// (0x000595af) scroll_sc2_left_pane_g1

0xc01c,	// (0x000595af) scroll_sc2_right_pane_g1

0x94d5,	// (0x00056a68) bg_popup_sub_pane_cp10

0xc026,	// (0x000595b9) list_choice_list_pane

0xc03f,	// (0x000595d2) list_single_choice_list_pane_ParamLimits

0xc03f,	// (0x000595d2) list_single_choice_list_pane

0xc052,	// (0x000595e5) list_single_choice_list_pane_g1

0x869b,	// (0x00055c2e) list_single_choice_list_pane_t1_ParamLimits

0x869b,	// (0x00055c2e) list_single_choice_list_pane_t1

0xc05a,	// (0x000595ed) choice_list_pane_g1

0xc062,	// (0x000595f5) choice_list_pane_t1

0x19d6,	// (0x0004ef69) input_focus_pane_cp11

0x8872,	// (0x00055e05) title_pane_stacon_g2_ParamLimits

0x8872,	// (0x00055e05) title_pane_stacon_g2

0x0002,

0xf6a7,	// (0x0005cc3a) title_pane_stacon_g_ParamLimits

0xf6a7,	// (0x0005cc3a) title_pane_stacon_g

0x91b1,	// (0x00056744) cursor_press_pane

0x56a9,	// (0x00052c3c) popup_fep_hwr_window_ParamLimits

0x56a9,	// (0x00052c3c) popup_fep_hwr_window

0x5723,	// (0x00052cb6) popup_fep_vkb_window_ParamLimits

0x5723,	// (0x00052cb6) popup_fep_vkb_window

0xc070,	// (0x00059603) cursor_press_pane_g1

0x0002,

0xfb0c,	// (0x0005d09f) fep_vkb_side_pane_g_ParamLimits

0x64e0,	// (0x00053a73) fep_hwr_candidate_pane_ParamLimits

0x64e0,	// (0x00053a73) fep_hwr_candidate_pane

0x650a,	// (0x00053a9d) fep_hwr_side_pane_ParamLimits

0x650a,	// (0x00053a9d) fep_hwr_side_pane

0x652a,	// (0x00053abd) fep_hwr_top_pane_ParamLimits

0x652a,	// (0x00053abd) fep_hwr_top_pane

0x6542,	// (0x00053ad5) fep_hwr_write_pane_ParamLimits

0x6542,	// (0x00053ad5) fep_hwr_write_pane

0xfb0c,	// (0x0005d09f) fep_vkb_side_pane_g

0xc078,	// (0x0005960b) fep_hwr_top_pane_g1

0xc08a,	// (0x0005961d) fep_hwr_top_pane_g2

0x657c,	// (0x00053b0f) fep_hwr_top_pane_g3

0x0002,

0xfae8,	// (0x0005d07b) fep_hwr_top_pane_g

0x6591,	// (0x00053b24) fep_hwr_top_text_pane

0x8b8c,	// (0x0005611f) fep_hwr_top_text_pane_g1

0xc0c0,	// (0x00059653) fep_hwr_top_text_pane_t1

0x6687,	// (0x00053c1a) fep_hwr_candidate_pane_g1

0xc313,	// (0x000598a6) fep_vkb_keypad_pane_g3_ParamLimits

0xc313,	// (0x000598a6) fep_vkb_keypad_pane_g3

0xc33b,	// (0x000598ce) fep_vkb_keypad_pane_g4_ParamLimits

0xc33b,	// (0x000598ce) fep_vkb_keypad_pane_g4

0xc3aa,	// (0x0005993d) fep_vkb_bottom_pane_g2_ParamLimits

0xc3aa,	// (0x0005993d) fep_vkb_bottom_pane_g2

0x0001,

0xfb13,	// (0x0005d0a6) fep_vkb_bottom_pane_g_ParamLimits

0xfb13,	// (0x0005d0a6) fep_vkb_bottom_pane_g

0xc01c,	// (0x000595af) cell_vkb_side_pane_g2

0x0001,

0xfb1d,	// (0x0005d0b0) cell_vkb_side_pane_g

0xc435,	// (0x000599c8) cell_vkb_side_pane_t1

0xc443,	// (0x000599d6) cell_vkb_side_pane_t1_copy1

0xc01c,	// (0x000595af) bg_fep_vkb_candidate_pane_g2

0xc56f,	// (0x00059b02) cell_vkb_candidate_pane_ParamLimits

0xc0ce,	// (0x00059661) aid_size_cell_vkb_ParamLimits

0xc0ce,	// (0x00059661) aid_size_cell_vkb

0xc56f,	// (0x00059b02) cell_vkb_candidate_pane

0x66ae,	// (0x00053c41) bg_popup_fep_shadow_pane_g1

0xc15c,	// (0x000596ef) fep_vkb_bottom_pane_ParamLimits

0xc15c,	// (0x000596ef) fep_vkb_bottom_pane

0xc192,	// (0x00059725) fep_vkb_candidate_pane_ParamLimits

0xc192,	// (0x00059725) fep_vkb_candidate_pane

0xc1ae,	// (0x00059741) fep_vkb_keypad_pane_ParamLimits

0xc1ae,	// (0x00059741) fep_vkb_keypad_pane

0xc1f4,	// (0x00059787) fep_vkb_side_pane_ParamLimits

0xc1f4,	// (0x00059787) fep_vkb_side_pane

0xc230,	// (0x000597c3) fep_vkb_top_pane_ParamLimits

0xc230,	// (0x000597c3) fep_vkb_top_pane

0xc26c,	// (0x000597ff) fep_vkb_top_pane_g1_ParamLimits

0xc26c,	// (0x000597ff) fep_vkb_top_pane_g1

0xc27b,	// (0x0005980e) fep_vkb_top_pane_g2_ParamLimits

0xc27b,	// (0x0005980e) fep_vkb_top_pane_g2

0xc28a,	// (0x0005981d) fep_vkb_top_pane_g3_ParamLimits

0xc28a,	// (0x0005981d) fep_vkb_top_pane_g3

0x0003,

0xfb03,	// (0x0005d096) fep_vkb_top_pane_g_ParamLimits

0xfb03,	// (0x0005d096) fep_vkb_top_pane_g

0xc2a8,	// (0x0005983b) fep_vkb_top_text_pane_ParamLimits

0xc2a8,	// (0x0005983b) fep_vkb_top_text_pane

0xc2b9,	// (0x0005984c) fep_vkb_side_pane_g1_ParamLimits

0xc2b9,	// (0x0005984c) fep_vkb_side_pane_g1

0xc302,	// (0x00059895) grid_vkb_side_pane_ParamLimits

0xc302,	// (0x00059895) grid_vkb_side_pane

0x66b6,	// (0x00053c49) bg_popup_fep_shadow_pane_g2

0x66bf,	// (0x00053c52) bg_popup_fep_shadow_pane_g3

0x66c7,	// (0x00053c5a) bg_popup_fep_shadow_pane_g4

0x66d0,	// (0x00053c63) bg_popup_fep_shadow_pane_g5

0x66da,	// (0x00053c6d) bg_popup_fep_shadow_pane_g6

0x66e2,	// (0x00053c75) bg_popup_fep_shadow_pane_g7

0x8259,	// (0x000557ec) bg_popup_fep_shadow_pane_g8

0xc359,	// (0x000598ec) grid_vkb_keypad_number_pane_ParamLimits

0xc359,	// (0x000598ec) grid_vkb_keypad_number_pane

0xc369,	// (0x000598fc) grid_vkb_keypad_pane_ParamLimits

0xc369,	// (0x000598fc) grid_vkb_keypad_pane

0xc38f,	// (0x00059922) fep_vkb_bottom_pane_g1_ParamLimits

0xc38f,	// (0x00059922) fep_vkb_bottom_pane_g1

0xc3b8,	// (0x0005994b) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc3b8,	// (0x0005994b) grid_vkb_keypad_bottom_left_pane

0xc3cd,	// (0x00059960) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc3cd,	// (0x00059960) grid_vkb_keypad_bottom_right_pane

0xc3e2,	// (0x00059975) fep_vkb_top_text_pane_g1

0xc3fd,	// (0x00059990) fep_vkb_top_text_pane_t1

0xc412,	// (0x000599a5) cell_vkb_side_pane_ParamLimits

0xc412,	// (0x000599a5) cell_vkb_side_pane

0xc01c,	// (0x000595af) cell_vkb_side_pane_g1

0xc451,	// (0x000599e4) cell_vkb_keypad_pane_ParamLimits

0xc451,	// (0x000599e4) cell_vkb_keypad_pane

0xc4c6,	// (0x00059a59) cell_vkb_keypad_pane_g1

0x0008,

0xfb30,	// (0x0005d0c3) bg_popup_fep_shadow_pane_g

0x66f4,	// (0x00053c87) cell_hwr_side_pane_g1

0x66f4,	// (0x00053c87) cell_hwr_side_pane_g2

0xc4d0,	// (0x00059a63) cell_vkb_keypad_pane_t1

0xc4de,	// (0x00059a71) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc4de,	// (0x00059a71) cell_vkb_keypad_bottom_left_pane

0xc4fb,	// (0x00059a8e) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc4fb,	// (0x00059a8e) cell_vkb_keypad_bottom_right_pane

0xc01c,	// (0x000595af) cell_vkb_keypad_bottom_left_pane_g1

0xc01c,	// (0x000595af) cell_vkb_keypad_bottom_right_pane_g1

0xc534,	// (0x00059ac7) cell_vkb_keypad_number_pane_ParamLimits

0xc534,	// (0x00059ac7) cell_vkb_keypad_number_pane

0xc553,	// (0x00059ae6) cell_vkb_keypad_number_pane_g1

0xc55d,	// (0x00059af0) cell_vkb_keypad_number_pane_g2

0xc566,	// (0x00059af9) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb22,	// (0x0005d0b5) cell_vkb_keypad_number_pane_g

0xc4d0,	// (0x00059a63) cell_vkb_keypad_number_pane_t1

0xc58a,	// (0x00059b1d) fep_vkb_candidate_pane_g1

0x0001,

0xfb43,	// (0x0005d0d6) cell_hwr_side_pane_g

0xc5a3,	// (0x00059b36) cell_hwr_side_pane_t1

0x66fe,	// (0x00053c91) cell_hwr_side_pane_t1_copy1

0x670c,	// (0x00053c9f) cell_hwr_candidate_pane_g1

0x673b,	// (0x00053cce) cell_hwr_candidate_pane_t1

0xc01c,	// (0x000595af) cell_vkb_candidate_pane_g2

0xc5e7,	// (0x00059b7a) cell_vkb_candidate_pane_t1

0x64a7,	// (0x00053a3a) bg_popup_fep_shadow_pane_ParamLimits

0x64a7,	// (0x00053a3a) bg_popup_fep_shadow_pane

0x655c,	// (0x00053aef) bg_fep_hwr_top_pane_g4

0xc09c,	// (0x0005962f) bg_hwr_side_pane_g1_ParamLimits

0xc09c,	// (0x0005962f) bg_hwr_side_pane_g1

0x65cd,	// (0x00053b60) cell_hwr_side_pane_ParamLimits

0x65cd,	// (0x00053b60) cell_hwr_side_pane

0x6608,	// (0x00053b9b) fep_hwr_write_pane_g1_ParamLimits

0x6608,	// (0x00053b9b) fep_hwr_write_pane_g1

0x6615,	// (0x00053ba8) fep_hwr_write_pane_g2_ParamLimits

0x6615,	// (0x00053ba8) fep_hwr_write_pane_g2

0x6622,	// (0x00053bb5) fep_hwr_write_pane_g3_ParamLimits

0x6622,	// (0x00053bb5) fep_hwr_write_pane_g3

0x6630,	// (0x00053bc3) fep_hwr_write_pane_g4_ParamLimits

0x6630,	// (0x00053bc3) fep_hwr_write_pane_g4

0x0005,

0xfaef,	// (0x0005d082) fep_hwr_write_pane_g_ParamLimits

0xfaef,	// (0x0005d082) fep_hwr_write_pane_g

0x655c,	// (0x00053aef) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x655c,	// (0x00053aef) bg_fep_hwr_candidate_pane_g2

0x6645,	// (0x00053bd8) cell_hwr_candidate_pane_ParamLimits

0x6645,	// (0x00053bd8) cell_hwr_candidate_pane

0x6687,	// (0x00053c1a) fep_hwr_candidate_pane_g1_ParamLimits

0xc0fc,	// (0x0005968f) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc0fc,	// (0x0005968f) bg_popup_fep_shadow_pane_cp2

0xc29a,	// (0x0005982d) fep_vkb_top_pane_g4_ParamLimits

0xc29a,	// (0x0005982d) fep_vkb_top_pane_g4

0xc2e0,	// (0x00059873) fep_vkb_side_pane_g2_ParamLimits

0xc2e0,	// (0x00059873) fep_vkb_side_pane_g2

0x4c18,	// (0x000521ab) list_setting_pane_t4_ParamLimits

0x4c18,	// (0x000521ab) list_setting_pane_t4

0x4cb2,	// (0x00052245) list_setting_number_pane_t5_ParamLimits

0x4cb2,	// (0x00052245) list_setting_number_pane_t5

0x8bd3,	// (0x00056166) list_double_heading_pane_cp2_ParamLimits

0x8bd3,	// (0x00056166) list_double_heading_pane_cp2

0x816f,	// (0x00055702) list_double_heading_pane_g1_cp2_ParamLimits

0x816f,	// (0x00055702) list_double_heading_pane_g1_cp2

0x8203,	// (0x00055796) list_double_heading_pane_g2_cp2_ParamLimits

0x8203,	// (0x00055796) list_double_heading_pane_g2_cp2

0xc5f5,	// (0x00059b88) list_double_heading_pane_t1_cp2_ParamLimits

0xc5f5,	// (0x00059b88) list_double_heading_pane_t1_cp2

0xc60b,	// (0x00059b9e) list_double_heading_pane_t2_cp2_ParamLimits

0xc60b,	// (0x00059b9e) list_double_heading_pane_t2_cp2

0x19ce,	// (0x0004ef61) aid_value_unit2

0x47b4,	// (0x00051d47) popup_preview_fixed_window

0x7b50,	// (0x000550e3) bg_popup_preview_window_pane_cp02

0xc61d,	// (0x00059bb0) list_preview_fixed_pane

0xc663,	// (0x00059bf6) list_empty_pane_fp_ParamLimits

0xc663,	// (0x00059bf6) list_empty_pane_fp

0xc663,	// (0x00059bf6) list_single_cale_day_pane_fp_ParamLimits

0xc663,	// (0x00059bf6) list_single_cale_day_pane_fp

0xc663,	// (0x00059bf6) list_single_graphic_heading_pane_fp_ParamLimits

0xc663,	// (0x00059bf6) list_single_graphic_heading_pane_fp

0xc663,	// (0x00059bf6) list_single_graphic_pane_fp_ParamLimits

0xc663,	// (0x00059bf6) list_single_graphic_pane_fp

0xc663,	// (0x00059bf6) list_single_heading_pane_fp_ParamLimits

0xc663,	// (0x00059bf6) list_single_heading_pane_fp

0xc663,	// (0x00059bf6) list_single_pane_fp_ParamLimits

0xc663,	// (0x00059bf6) list_single_pane_fp

0xc678,	// (0x00059c0b) list_single_pane_fp_g1_ParamLimits

0xc678,	// (0x00059c0b) list_single_pane_fp_g1

0x816f,	// (0x00055702) list_single_pane_fp_g2_ParamLimits

0x816f,	// (0x00055702) list_single_pane_fp_g2

0x8203,	// (0x00055796) list_single_pane_fp_g3_ParamLimits

0x8203,	// (0x00055796) list_single_pane_fp_g3

0xc684,	// (0x00059c17) list_single_pane_fp_g4_ParamLimits

0xc684,	// (0x00059c17) list_single_pane_fp_g4

0x0003,

0xfb56,	// (0x0005d0e9) list_single_pane_fp_g_ParamLimits

0xfb56,	// (0x0005d0e9) list_single_pane_fp_g

0x6759,	// (0x00053cec) list_single_pane_fp_t1_ParamLimits

0x6759,	// (0x00053cec) list_single_pane_fp_t1

0x6770,	// (0x00053d03) list_single_graphic_pane_fp_g1_ParamLimits

0x6770,	// (0x00053d03) list_single_graphic_pane_fp_g1

0xc678,	// (0x00059c0b) list_single_graphic_pane_fp_g2_ParamLimits

0xc678,	// (0x00059c0b) list_single_graphic_pane_fp_g2

0x816f,	// (0x00055702) list_single_graphic_pane_fp_g3_ParamLimits

0x816f,	// (0x00055702) list_single_graphic_pane_fp_g3

0x8203,	// (0x00055796) list_single_graphic_pane_fp_g4_ParamLimits

0x8203,	// (0x00055796) list_single_graphic_pane_fp_g4

0xc684,	// (0x00059c17) list_single_graphic_pane_fp_g5_ParamLimits

0xc684,	// (0x00059c17) list_single_graphic_pane_fp_g5

0x0004,

0xfb5f,	// (0x0005d0f2) list_single_graphic_pane_fp_g_ParamLimits

0xfb5f,	// (0x0005d0f2) list_single_graphic_pane_fp_g

0x677c,	// (0x00053d0f) list_single_graphic_pane_fp_t1_ParamLimits

0x677c,	// (0x00053d0f) list_single_graphic_pane_fp_t1

0x6770,	// (0x00053d03) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x6770,	// (0x00053d03) list_single_graphic_heading_pane_fp_g1

0xc678,	// (0x00059c0b) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc678,	// (0x00059c0b) list_single_graphic_heading_pane_fp_g2

0x816f,	// (0x00055702) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x816f,	// (0x00055702) list_single_graphic_heading_pane_fp_g3

0x8203,	// (0x00055796) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x8203,	// (0x00055796) list_single_graphic_heading_pane_fp_g4

0xc684,	// (0x00059c17) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc684,	// (0x00059c17) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb5f,	// (0x0005d0f2) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb5f,	// (0x0005d0f2) list_single_graphic_heading_pane_fp_g

0x6792,	// (0x00053d25) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x6792,	// (0x00053d25) list_single_graphic_heading_pane_fp_t1

0x67a8,	// (0x00053d3b) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x67a8,	// (0x00053d3b) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb6a,	// (0x0005d0fd) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb6a,	// (0x0005d0fd) list_single_graphic_heading_pane_fp_t

0x67ba,	// (0x00053d4d) list_single_cale_day_pane_fp_g1_ParamLimits

0x67ba,	// (0x00053d4d) list_single_cale_day_pane_fp_g1

0xc690,	// (0x00059c23) list_single_cale_day_pane_fp_g2_ParamLimits

0xc690,	// (0x00059c23) list_single_cale_day_pane_fp_g2

0x83d8,	// (0x0005596b) list_single_cale_day_pane_fp_g3_ParamLimits

0x83d8,	// (0x0005596b) list_single_cale_day_pane_fp_g3

0x8400,	// (0x00055993) list_single_cale_day_pane_fp_g4_ParamLimits

0x8400,	// (0x00055993) list_single_cale_day_pane_fp_g4

0x8424,	// (0x000559b7) list_single_cale_day_pane_fp_g5_ParamLimits

0x8424,	// (0x000559b7) list_single_cale_day_pane_fp_g5

0x0004,

0xfb6f,	// (0x0005d102) list_single_cale_day_pane_fp_g_ParamLimits

0xfb6f,	// (0x0005d102) list_single_cale_day_pane_fp_g

0x67f2,	// (0x00053d85) list_single_cale_day_pane_fp_t1_ParamLimits

0x67f2,	// (0x00053d85) list_single_cale_day_pane_fp_t1

0x6818,	// (0x00053dab) list_single_cale_day_pane_fp_t2_ParamLimits

0x6818,	// (0x00053dab) list_single_cale_day_pane_fp_t2

0x6831,	// (0x00053dc4) list_single_cale_day_pane_fp_t3_ParamLimits

0x6831,	// (0x00053dc4) list_single_cale_day_pane_fp_t3

0x0002,

0xfb7a,	// (0x0005d10d) list_single_cale_day_pane_fp_t_ParamLimits

0xfb7a,	// (0x0005d10d) list_single_cale_day_pane_fp_t

0xc678,	// (0x00059c0b) list_empty_pane_fp_g1_ParamLimits

0xc678,	// (0x00059c0b) list_empty_pane_fp_g1

0x684a,	// (0x00053ddd) list_empty_pane_fp_t1

0x6858,	// (0x00053deb) list_empty_pane_fp_t2

0x0001,

0xfb81,	// (0x0005d114) list_empty_pane_fp_t

0xc678,	// (0x00059c0b) list_single_heading_pane_fp_g1_ParamLimits

0xc678,	// (0x00059c0b) list_single_heading_pane_fp_g1

0x816f,	// (0x00055702) list_single_heading_pane_fp_g2_ParamLimits

0x816f,	// (0x00055702) list_single_heading_pane_fp_g2

0x8203,	// (0x00055796) list_single_heading_pane_fp_g3_ParamLimits

0x8203,	// (0x00055796) list_single_heading_pane_fp_g3

0x0002,

0xfb86,	// (0x0005d119) list_single_heading_pane_fp_g_ParamLimits

0xfb86,	// (0x0005d119) list_single_heading_pane_fp_g

0x6866,	// (0x00053df9) list_single_heading_pane_fp_t1_ParamLimits

0x6866,	// (0x00053df9) list_single_heading_pane_fp_t1

0x6878,	// (0x00053e0b) list_single_heading_pane_fp_t2_ParamLimits

0x6878,	// (0x00053e0b) list_single_heading_pane_fp_t2

0x0001,

0xfb8d,	// (0x0005d120) list_single_heading_pane_fp_t_ParamLimits

0xfb8d,	// (0x0005d120) list_single_heading_pane_fp_t

0x8709,	// (0x00055c9c) aid_size_cell_fast

0x7ac0,	// (0x00055053) soft_indicator_pane_cp1_t1

0x8746,	// (0x00055cd9) cell_app_pane_cp2_ParamLimits

0x8746,	// (0x00055cd9) cell_app_pane_cp2

0x64c9,	// (0x00053a5c) fep_hwr_candidate_drop_down_list_pane

0x66a1,	// (0x00053c34) fep_hwr_candidate_pane_g3_ParamLimits

0x66a1,	// (0x00053c34) fep_hwr_candidate_pane_g3

0x34a3,	// (0x00050a36) fep_hwr_candidate_pane_g4_ParamLimits

0x34a3,	// (0x00050a36) fep_hwr_candidate_pane_g4

0x0002,

0xfafc,	// (0x0005d08f) fep_hwr_candidate_pane_g_ParamLimits

0xfafc,	// (0x0005d08f) fep_hwr_candidate_pane_g

0xc181,	// (0x00059714) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc181,	// (0x00059714) fep_vkb_candidate_drop_down_list_pane

0xc592,	// (0x00059b25) fep_vkb_candidate_pane_g3

0xc59a,	// (0x00059b2d) fep_vkb_candidate_pane_g4

0x0002,

0xfb29,	// (0x0005d0bc) fep_vkb_candidate_pane_g

0x670c,	// (0x00053c9f) cell_hwr_candidate_pane_g1_ParamLimits

0x671a,	// (0x00053cad) cell_hwr_candidate_pane_g3_ParamLimits

0x671a,	// (0x00053cad) cell_hwr_candidate_pane_g3

0xcacf,	// (0x0005a062) cell_hwr_candidate_pane_g4_ParamLimits

0xcacf,	// (0x0005a062) cell_hwr_candidate_pane_g4

0x0002,

0xfb48,	// (0x0005d0db) cell_hwr_candidate_pane_g_ParamLimits

0xfb48,	// (0x0005d0db) cell_hwr_candidate_pane_g

0xc5b1,	// (0x00059b44) cell_vkb_candidate_pane_g3_ParamLimits

0xc5b1,	// (0x00059b44) cell_vkb_candidate_pane_g3

0xc5cc,	// (0x00059b5f) cell_vkb_candidate_pane_g4_ParamLimits

0xc5cc,	// (0x00059b5f) cell_vkb_candidate_pane_g4

0xc69c,	// (0x00059c2f) cell_app_pane_cp2_g1_ParamLimits

0xc69c,	// (0x00059c2f) cell_app_pane_cp2_g1

0xc6ba,	// (0x00059c4d) cell_app_pane_cp2_g2_ParamLimits

0xc6ba,	// (0x00059c4d) cell_app_pane_cp2_g2

0x0001,

0xfb92,	// (0x0005d125) cell_app_pane_cp2_g_ParamLimits

0xfb92,	// (0x0005d125) cell_app_pane_cp2_g

0xc6c6,	// (0x00059c59) cell_app_pane_cp2_t1_ParamLimits

0xc6c6,	// (0x00059c59) cell_app_pane_cp2_t1

0x81f5,	// (0x00055788) grid_highlight_pane_cp1_ParamLimits

0x81f5,	// (0x00055788) grid_highlight_pane_cp1

0x688e,	// (0x00053e21) cell_hwr_candidate_pane_cp1_ParamLimits

0x688e,	// (0x00053e21) cell_hwr_candidate_pane_cp1

0x670c,	// (0x00053c9f) fep_hwr_candidate_drop_down_list_pane_g1

0x68ad,	// (0x00053e40) fep_hwr_candidate_drop_down_list_pane_g2

0x68ba,	// (0x00053e4d) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb97,	// (0x0005d12a) fep_hwr_candidate_drop_down_list_pane_g

0x68c7,	// (0x00053e5a) fep_hwr_candidate_drop_down_list_scroll_pane

0x68d0,	// (0x00053e63) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x68d0,	// (0x00053e63) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x68dd,	// (0x00053e70) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x68dd,	// (0x00053e70) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x68ea,	// (0x00053e7d) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x68ea,	// (0x00053e7d) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x68f7,	// (0x00053e8a) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x68f7,	// (0x00053e8a) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x6912,	// (0x00053ea5) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6912,	// (0x00053ea5) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x692d,	// (0x00053ec0) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x692d,	// (0x00053ec0) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x6948,	// (0x00053edb) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x6948,	// (0x00053edb) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x6963,	// (0x00053ef6) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x6963,	// (0x00053ef6) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb9e,	// (0x0005d131) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb9e,	// (0x0005d131) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc6d8,	// (0x00059c6b) cell_vkb_candidate_pane_cp1_ParamLimits

0xc6d8,	// (0x00059c6b) cell_vkb_candidate_pane_cp1

0xc29a,	// (0x0005982d) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc29a,	// (0x0005982d) fep_vkb_candidate_drop_down_list_pane_g1

0xc6f8,	// (0x00059c8b) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc6f8,	// (0x00059c8b) fep_vkb_candidate_drop_down_list_pane_g2

0xc705,	// (0x00059c98) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc705,	// (0x00059c98) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbaf,	// (0x0005d142) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbaf,	// (0x0005d142) fep_vkb_candidate_drop_down_list_pane_g

0xc712,	// (0x00059ca5) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc712,	// (0x00059ca5) fep_vkb_candidate_drop_down_list_scroll_pane

0xc71f,	// (0x00059cb2) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc71f,	// (0x00059cb2) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc72c,	// (0x00059cbf) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc72c,	// (0x00059cbf) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc738,	// (0x00059ccb) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc738,	// (0x00059ccb) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc744,	// (0x00059cd7) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc744,	// (0x00059cd7) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc765,	// (0x00059cf8) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc765,	// (0x00059cf8) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc786,	// (0x00059d19) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc786,	// (0x00059d19) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc7a7,	// (0x00059d3a) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc7a7,	// (0x00059d3a) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc7c8,	// (0x00059d5b) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc7c8,	// (0x00059d5b) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbb6,	// (0x0005d149) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbb6,	// (0x0005d149) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x77f1,	// (0x00054d84) title_pane_g1_ParamLimits

0x77fe,	// (0x00054d91) title_pane_g2_ParamLimits

0xf527,	// (0x0005caba) title_pane_g_ParamLimits

0x8b7c,	// (0x0005610f) aid_call2_pane

0x8b84,	// (0x00056117) aid_call_pane

0x8b8c,	// (0x0005611f) popup_clock_analogue_window_g1

0x8b8c,	// (0x0005611f) popup_clock_analogue_window_g2

0x511c,	// (0x000526af) popup_clock_analogue_window_g3

0x5125,	// (0x000526b8) popup_clock_analogue_window_g4

0x19e0,	// (0x0004ef73) popup_clock_analogue_window_g5

0x0004,

0xf6d6,	// (0x0005cc69) popup_clock_analogue_window_g

0x512d,	// (0x000526c0) popup_clock_analogue_window_t1

0x513b,	// (0x000526ce) clock_digital_number_pane_ParamLimits

0x513b,	// (0x000526ce) clock_digital_number_pane

0x5147,	// (0x000526da) clock_digital_number_pane_cp02_ParamLimits

0x5147,	// (0x000526da) clock_digital_number_pane_cp02

0x5153,	// (0x000526e6) clock_digital_number_pane_cp03_ParamLimits

0x5153,	// (0x000526e6) clock_digital_number_pane_cp03

0x515f,	// (0x000526f2) clock_digital_number_pane_cp04_ParamLimits

0x515f,	// (0x000526f2) clock_digital_number_pane_cp04

0x516b,	// (0x000526fe) clock_digital_separator_pane_ParamLimits

0x516b,	// (0x000526fe) clock_digital_separator_pane

0x5177,	// (0x0005270a) popup_clock_digital_window_t1_ParamLimits

0x5177,	// (0x0005270a) popup_clock_digital_window_t1

0x19e0,	// (0x0004ef73) clock_digital_number_pane_g1

0x19e0,	// (0x0004ef73) clock_digital_number_pane_g2

0x0001,

0xf6e1,	// (0x0005cc74) clock_digital_number_pane_g

0x19e0,	// (0x0004ef73) clock_digital_separator_pane_g1

0x19e0,	// (0x0004ef73) clock_digital_separator_pane_g2

0x0001,

0xf6e1,	// (0x0005cc74) clock_digital_separator_pane_g

0x9511,	// (0x00056aa4) aid_fill_nsta_ParamLimits

0x965d,	// (0x00056bf0) indicator_nsta_pane_ParamLimits

0x97d6,	// (0x00056d69) popup_clock_analogue_window

0x97d6,	// (0x00056d69) popup_clock_digital_window

0xb9f2,	// (0x00058f85) grid_indicator_nsta_pane_ParamLimits

0xba1b,	// (0x00058fae) clock_nsta_pane_t2

0x0001,

0xfa7c,	// (0x0005d00f) clock_nsta_pane_t

0x50e0,	// (0x00052673) aid_size_max_handle

0x50ea,	// (0x0005267d) aid_size_min_handle

0x91b1,	// (0x00056744) editor_scroll_pane

0xc7e3,	// (0x00059d76) ex_editor_pane

0x8677,	// (0x00055c0a) scroll_pane_cp13

0x80f3,	// (0x00055686) scroll_pane_cp14

0x8bbb,	// (0x0005614e) scroll_pane_cp36

0x8be7,	// (0x0005617a) list_single_graphic_hl_pane_cp2_ParamLimits

0x8be7,	// (0x0005617a) list_single_graphic_hl_pane_cp2

0xafc0,	// (0x00058553) list_single_graphic_hl_pane_ParamLimits

0xafc0,	// (0x00058553) list_single_graphic_hl_pane

0x697e,	// (0x00053f11) aid_size_min_hl_cp1

0xc7eb,	// (0x00059d7e) list_highlight_pane_cp34_ParamLimits

0xc7eb,	// (0x00059d7e) list_highlight_pane_cp34

0xc7fc,	// (0x00059d8f) list_single_graphic_hl_pane_g1_ParamLimits

0xc7fc,	// (0x00059d8f) list_single_graphic_hl_pane_g1

0x6987,	// (0x00053f1a) list_single_graphic_hl_pane_g2_ParamLimits

0x6987,	// (0x00053f1a) list_single_graphic_hl_pane_g2

0x6987,	// (0x00053f1a) list_single_graphic_hl_pane_g3_ParamLimits

0x6987,	// (0x00053f1a) list_single_graphic_hl_pane_g3

0x90f6,	// (0x00056689) list_single_graphic_hl_pane_g4_ParamLimits

0x90f6,	// (0x00056689) list_single_graphic_hl_pane_g4

0x8448,	// (0x000559db) list_single_graphic_hl_pane_g5_ParamLimits

0x8448,	// (0x000559db) list_single_graphic_hl_pane_g5

0x0004,

0xfbc7,	// (0x0005d15a) list_single_graphic_hl_pane_g_ParamLimits

0xfbc7,	// (0x0005d15a) list_single_graphic_hl_pane_g

0x6993,	// (0x00053f26) list_single_graphic_hl_pane_t1_ParamLimits

0x6993,	// (0x00053f26) list_single_graphic_hl_pane_t1

0xc809,	// (0x00059d9c) aid_size_min_hl_cp2

0xc812,	// (0x00059da5) list_highlight_pane_cp34_cp2_ParamLimits

0xc812,	// (0x00059da5) list_highlight_pane_cp34_cp2

0xc7fc,	// (0x00059d8f) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc7fc,	// (0x00059d8f) list_single_graphic_hl_pane_g1_cp2

0xc81f,	// (0x00059db2) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc81f,	// (0x00059db2) list_single_graphic_hl_pane_g2_cp2

0xc82b,	// (0x00059dbe) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc82b,	// (0x00059dbe) list_single_graphic_hl_pane_g3_cp2

0xc839,	// (0x00059dcc) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xc839,	// (0x00059dcc) list_single_graphic_hl_pane_g4_cp2

0xc845,	// (0x00059dd8) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc845,	// (0x00059dd8) list_single_graphic_hl_pane_g5_cp2

0x5499,	// (0x00052a2c) control_pane_g4_ParamLimits

0x5499,	// (0x00052a2c) control_pane_g4

0x94d5,	// (0x00056a68) bg_popup_sub_pane_cp10_ParamLimits

0xc026,	// (0x000595b9) list_choice_list_pane_ParamLimits

0xc035,	// (0x000595c8) scroll_pane_cp23

0x7b50,	// (0x000550e3) bg_popup_preview_window_pane_cp02_ParamLimits

0xc61d,	// (0x00059bb0) list_preview_fixed_pane_ParamLimits

0xc633,	// (0x00059bc6) list_preview_fixed_pane_cp_ParamLimits

0xc633,	// (0x00059bc6) list_preview_fixed_pane_cp

0xc63f,	// (0x00059bd2) popup_preview_fixed_window_g1_ParamLimits

0xc63f,	// (0x00059bd2) popup_preview_fixed_window_g1

0xc64b,	// (0x00059bde) popup_preview_fixed_window_g2_ParamLimits

0xc64b,	// (0x00059bde) popup_preview_fixed_window_g2

0x0002,

0xfb4f,	// (0x0005d0e2) popup_preview_fixed_window_g_ParamLimits

0xfb4f,	// (0x0005d0e2) popup_preview_fixed_window_g

0x5054,	// (0x000525e7) aid_navi_side_left_pane_ParamLimits

0x5069,	// (0x000525fc) aid_navi_side_right_pane_ParamLimits

0x5081,	// (0x00052614) navi_icon_pane_stacon_ParamLimits

0x5095,	// (0x00052628) navi_navi_pane_stacon_ParamLimits

0x5081,	// (0x00052614) navi_text_pane_stacon_ParamLimits

0x4675,	// (0x00051c08) main_text_info_pane

0xc86f,	// (0x00059e02) listscroll_text_info_pane

0xc877,	// (0x00059e0a) list_text_info_pane_ParamLimits

0xc877,	// (0x00059e0a) list_text_info_pane

0xc886,	// (0x00059e19) scroll_pane_cp24_ParamLimits

0xc886,	// (0x00059e19) scroll_pane_cp24

0xc8a4,	// (0x00059e37) list_text_info_pane_t1_ParamLimits

0xc8a4,	// (0x00059e37) list_text_info_pane_t1

0x561b,	// (0x00052bae) popup_fast_swap2_window_ParamLimits

0x561b,	// (0x00052bae) popup_fast_swap2_window

0xc8d5,	// (0x00059e68) aid_size_cell_fast2

0x19d6,	// (0x0004ef69) bg_popup_window_pane_cp17

0x9e5f,	// (0x000573f2) heading_pane_cp2

0xc8df,	// (0x00059e72) listscroll_fast2_pane

0xc8e7,	// (0x00059e7a) grid_fast2_pane

0xc8f1,	// (0x00059e84) listscroll_fast2_pane_g1

0xc8f9,	// (0x00059e8c) listscroll_fast2_pane_g2

0x0001,

0xfbd2,	// (0x0005d165) listscroll_fast2_pane_g

0x8677,	// (0x00055c0a) scroll_pane_cp26

0xc903,	// (0x00059e96) cell_fast2_pane_ParamLimits

0xc903,	// (0x00059e96) cell_fast2_pane

0xc918,	// (0x00059eab) cell_fast2_pane_g1

0xc921,	// (0x00059eb4) cell_fast2_pane_g2

0xc92a,	// (0x00059ebd) cell_fast2_pane_g3

0x0002,

0xfbd7,	// (0x0005d16a) cell_fast2_pane_g

0x7eb0,	// (0x00055443) grid_highlight_pane_cp9

0x55d9,	// (0x00052b6c) main_eswt_pane_ParamLimits

0x55d9,	// (0x00052b6c) main_eswt_pane

0xc89b,	// (0x00059e2e) list_single_text_info_pane

0xc932,	// (0x00059ec5) eswt_ctrl_button_pane

0xc932,	// (0x00059ec5) eswt_ctrl_canvas_pane

0xc93a,	// (0x00059ecd) eswt_ctrl_combo_pane

0xc932,	// (0x00059ec5) eswt_ctrl_default_pane

0xc932,	// (0x00059ec5) eswt_ctrl_label_pane

0xc942,	// (0x00059ed5) eswt_ctrl_wait_pane

0xc94a,	// (0x00059edd) eswt_shell_pane

0x19d6,	// (0x0004ef69) listscroll_eswt_app_pane

0xc96a,	// (0x00059efd) popup_eswt_tasktip_window_ParamLimits

0xc96a,	// (0x00059efd) popup_eswt_tasktip_window

0x9a73,	// (0x00057006) bg_popup_window_pane_cp18

0xc97b,	// (0x00059f0e) eswt_control_pane_g1_ParamLimits

0xc97b,	// (0x00059f0e) eswt_control_pane_g1

0xc988,	// (0x00059f1b) eswt_control_pane_g2_ParamLimits

0xc988,	// (0x00059f1b) eswt_control_pane_g2

0xc995,	// (0x00059f28) eswt_control_pane_g3_ParamLimits

0xc995,	// (0x00059f28) eswt_control_pane_g3

0xc9a2,	// (0x00059f35) eswt_control_pane_g4_ParamLimits

0xc9a2,	// (0x00059f35) eswt_control_pane_g4

0x0003,

0xfbde,	// (0x0005d171) eswt_control_pane_g_ParamLimits

0xfbde,	// (0x0005d171) eswt_control_pane_g

0x81f5,	// (0x00055788) bg_button_pane_ParamLimits

0x81f5,	// (0x00055788) bg_button_pane

0x7ec5,	// (0x00055458) common_borders_pane_copy2_ParamLimits

0x7ec5,	// (0x00055458) common_borders_pane_copy2

0xc9af,	// (0x00059f42) control_button_pane_g1_ParamLimits

0xc9af,	// (0x00059f42) control_button_pane_g1

0xc9bb,	// (0x00059f4e) control_button_pane_g2_ParamLimits

0xc9bb,	// (0x00059f4e) control_button_pane_g2

0xc9c7,	// (0x00059f5a) control_button_pane_g3_ParamLimits

0xc9c7,	// (0x00059f5a) control_button_pane_g3

0x0002,

0xfbe7,	// (0x0005d17a) control_button_pane_g_ParamLimits

0xfbe7,	// (0x0005d17a) control_button_pane_g

0xc9db,	// (0x00059f6e) control_button_pane_t1

0xc9e9,	// (0x00059f7c) control_button_pane_t2

0x0001,

0xfbee,	// (0x0005d181) control_button_pane_t

0x99ff,	// (0x00056f92) bg_button_pane_g1

0x9a0f,	// (0x00056fa2) bg_button_pane_g2

0x9a07,	// (0x00056f9a) bg_button_pane_g3

0x9a1f,	// (0x00056fb2) bg_button_pane_g4

0x9a17,	// (0x00056faa) bg_button_pane_g5

0x9a27,	// (0x00056fba) bg_button_pane_g6

0x9a2f,	// (0x00056fc2) bg_button_pane_g7

0x9a3f,	// (0x00056fd2) bg_button_pane_g8

0x9a37,	// (0x00056fca) bg_button_pane_g9

0x0008,

0xf83f,	// (0x0005cdd2) bg_button_pane_g

0xbfe1,	// (0x00059574) common_borders_pane_ParamLimits

0xbfe1,	// (0x00059574) common_borders_pane

0xc97b,	// (0x00059f0e) eswt_control_pane_g1_copy1_ParamLimits

0xc97b,	// (0x00059f0e) eswt_control_pane_g1_copy1

0xc988,	// (0x00059f1b) eswt_control_pane_g2_copy1_ParamLimits

0xc988,	// (0x00059f1b) eswt_control_pane_g2_copy1

0xc995,	// (0x00059f28) eswt_control_pane_g3_copy1_ParamLimits

0xc995,	// (0x00059f28) eswt_control_pane_g3_copy1

0xc9a2,	// (0x00059f35) eswt_control_pane_g4_copy1_ParamLimits

0xc9a2,	// (0x00059f35) eswt_control_pane_g4_copy1

0xc01c,	// (0x000595af) bg_eswt_ctrl_canvas_pane_g1

0xbfe1,	// (0x00059574) common_borders_pane_cp2_ParamLimits

0xbfe1,	// (0x00059574) common_borders_pane_cp2

0xbfe1,	// (0x00059574) common_borders_pane_cp3_ParamLimits

0xbfe1,	// (0x00059574) common_borders_pane_cp3

0xc9f7,	// (0x00059f8a) separator_horizontal_pane

0xc9ff,	// (0x00059f92) separator_vertical_pane

0xc97b,	// (0x00059f0e) eswt_control_pane_g1_copy2_ParamLimits

0xc97b,	// (0x00059f0e) eswt_control_pane_g1_copy2

0xc988,	// (0x00059f1b) eswt_control_pane_g2_copy2_ParamLimits

0xc988,	// (0x00059f1b) eswt_control_pane_g2_copy2

0xc995,	// (0x00059f28) eswt_control_pane_g3_copy2_ParamLimits

0xc995,	// (0x00059f28) eswt_control_pane_g3_copy2

0xc9a2,	// (0x00059f35) eswt_control_pane_g4_copy2_ParamLimits

0xc9a2,	// (0x00059f35) eswt_control_pane_g4_copy2

0x19d6,	// (0x0004ef69) common_borders_pane_cp4

0xca08,	// (0x00059f9b) separator_horizontal_pane_g1

0xca11,	// (0x00059fa4) separator_horizontal_pane_g2

0xca1a,	// (0x00059fad) separator_horizontal_pane_g3

0x0002,

0xfbf3,	// (0x0005d186) separator_horizontal_pane_g

0xc97b,	// (0x00059f0e) eswt_control_pane_g1_copy3_ParamLimits

0xc97b,	// (0x00059f0e) eswt_control_pane_g1_copy3

0xc988,	// (0x00059f1b) eswt_control_pane_g2_copy3_ParamLimits

0xc988,	// (0x00059f1b) eswt_control_pane_g2_copy3

0xc995,	// (0x00059f28) eswt_control_pane_g3_copy3_ParamLimits

0xc995,	// (0x00059f28) eswt_control_pane_g3_copy3

0xc9a2,	// (0x00059f35) eswt_control_pane_g4_copy3_ParamLimits

0xc9a2,	// (0x00059f35) eswt_control_pane_g4_copy3

0x19d6,	// (0x0004ef69) common_borders_pane_cp5

0xca23,	// (0x00059fb6) separator_vertical_pane_g1

0xca2c,	// (0x00059fbf) separator_vertical_pane_g2

0xca35,	// (0x00059fc8) separator_vertical_pane_g3

0x0002,

0xfbfa,	// (0x0005d18d) separator_vertical_pane_g

0xc97b,	// (0x00059f0e) eswt_control_pane_g1_copy4_ParamLimits

0xc97b,	// (0x00059f0e) eswt_control_pane_g1_copy4

0xc988,	// (0x00059f1b) eswt_control_pane_g2_copy4_ParamLimits

0xc988,	// (0x00059f1b) eswt_control_pane_g2_copy4

0xc995,	// (0x00059f28) eswt_control_pane_g3_copy4_ParamLimits

0xc995,	// (0x00059f28) eswt_control_pane_g3_copy4

0xc9a2,	// (0x00059f35) eswt_control_pane_g4_copy4_ParamLimits

0xc9a2,	// (0x00059f35) eswt_control_pane_g4_copy4

0xca3e,	// (0x00059fd1) eswt_ctrl_combo_button_pane

0xca46,	// (0x00059fd9) eswt_ctrl_input_pane

0xca4e,	// (0x00059fe1) popup_choice_list_window_cp70

0xca56,	// (0x00059fe9) eswt_ctrl_input_pane_t1

0x19d6,	// (0x0004ef69) input_focus_pane_cp70

0xbfe1,	// (0x00059574) bg_button_pane_cp70_ParamLimits

0xbfe1,	// (0x00059574) bg_button_pane_cp70

0xca64,	// (0x00059ff7) eswt_ctrl_combo_button_pane_g1

0xca6c,	// (0x00059fff) wait_bar_pane_cp70

0x9a73,	// (0x00057006) bg_popup_window_pane_cp70_ParamLimits

0x9a73,	// (0x00057006) bg_popup_window_pane_cp70

0xca74,	// (0x0005a007) popup_eswt_tasktip_window_t1

0xca8a,	// (0x0005a01d) wait_bar_pane_cp71_ParamLimits

0xca8a,	// (0x0005a01d) wait_bar_pane_cp71

0xca96,	// (0x0005a029) grid_eswt_app_pane

0x8995,	// (0x00055f28) scroll_pane_cp70

0xca9f,	// (0x0005a032) cell_eswt_app_pane_ParamLimits

0xca9f,	// (0x0005a032) cell_eswt_app_pane

0xcaf0,	// (0x0005a083) cell_eswt_app_pane_g1_ParamLimits

0xcaf0,	// (0x0005a083) cell_eswt_app_pane_g1

0xcb1f,	// (0x0005a0b2) cell_eswt_app_pane_g2_ParamLimits

0xcb1f,	// (0x0005a0b2) cell_eswt_app_pane_g2

0x0001,

0xfc01,	// (0x0005d194) cell_eswt_app_pane_g_ParamLimits

0xfc01,	// (0x0005d194) cell_eswt_app_pane_g

0xcb48,	// (0x0005a0db) cell_eswt_app_pane_t1_ParamLimits

0xcb48,	// (0x0005a0db) cell_eswt_app_pane_t1

0xcb7a,	// (0x0005a10d) grid_highlight_pane_cp70_ParamLimits

0xcb7a,	// (0x0005a10d) grid_highlight_pane_cp70

0x9085,	// (0x00056618) set_content_pane_g1

0x945c,	// (0x000569ef) status_small_volume_pane

0x69a9,	// (0x00053f3c) status_small_volume_pane_g1

0x69b1,	// (0x00053f44) volume_small2_pane

0x69ba,	// (0x00053f4d) volume_small2_pane_g1

0x69c3,	// (0x00053f56) volume_small2_pane_g2

0x69cc,	// (0x00053f5f) volume_small2_pane_g3

0x69d5,	// (0x00053f68) volume_small2_pane_g4

0x69de,	// (0x00053f71) volume_small2_pane_g5

0x69e7,	// (0x00053f7a) volume_small2_pane_g6

0x69f0,	// (0x00053f83) volume_small2_pane_g7

0x69f9,	// (0x00053f8c) volume_small2_pane_g8

0x6a02,	// (0x00053f95) volume_small2_pane_g9

0x6a0b,	// (0x00053f9e) volume_small2_pane_g10

0x0009,

0xfc06,	// (0x0005d199) volume_small2_pane_g

0xc3e2,	// (0x00059975) fep_vkb_top_text_pane_g1_ParamLimits

0xc3fd,	// (0x00059990) fep_vkb_top_text_pane_t1_ParamLimits

0xc657,	// (0x00059bea) popup_preview_fixed_window_g3_ParamLimits

0xc657,	// (0x00059bea) popup_preview_fixed_window_g3

0x5acc,	// (0x0005305f) popup_toolbar_trans_pane

0xadc7,	// (0x0005835a) aid_height_set_list_ParamLimits

0xadd8,	// (0x0005836b) aid_size_parent_ParamLimits

0x94d5,	// (0x00056a68) list_highlight_pane_cp2_ParamLimits

0x9085,	// (0x00056618) set_content_pane_g1_ParamLimits

0x603d,	// (0x000535d0) list_single_image_pane_ParamLimits

0x603d,	// (0x000535d0) list_single_image_pane

0xcb86,	// (0x0005a119) aid_size_cell_image_ParamLimits

0xcb86,	// (0x0005a119) aid_size_cell_image

0xcb93,	// (0x0005a126) grid_single_image_pane_ParamLimits

0xcb93,	// (0x0005a126) grid_single_image_pane

0xbce1,	// (0x00059274) list_single_image_pane_g1_ParamLimits

0xbce1,	// (0x00059274) list_single_image_pane_g1

0xcb9f,	// (0x0005a132) list_single_image_pane_g2_ParamLimits

0xcb9f,	// (0x0005a132) list_single_image_pane_g2

0x0001,

0xfc1b,	// (0x0005d1ae) list_single_image_pane_g_ParamLimits

0xfc1b,	// (0x0005d1ae) list_single_image_pane_g

0xcbb3,	// (0x0005a146) list_single_image_pane_t1_ParamLimits

0xcbb3,	// (0x0005a146) list_single_image_pane_t1

0xcbc9,	// (0x0005a15c) cell_image_list_pane_ParamLimits

0xcbc9,	// (0x0005a15c) cell_image_list_pane

0xcbdd,	// (0x0005a170) cell_image_list_pane_g1

0xcbe6,	// (0x0005a179) cell_image_list_pane_g2

0x0001,

0xfc20,	// (0x0005d1b3) cell_image_list_pane_g

0xcbef,	// (0x0005a182) aid_size_cell_tb_trans_pane

0x81f5,	// (0x00055788) bg_tb_trans_pane

0xcc01,	// (0x0005a194) grid_tb_trans_pane

0x99ff,	// (0x00056f92) bg_tb_trans_pane_g1

0x9a0f,	// (0x00056fa2) bg_tb_trans_pane_g2

0x9a07,	// (0x00056f9a) bg_tb_trans_pane_g3

0x9a1f,	// (0x00056fb2) bg_tb_trans_pane_g4

0x9a17,	// (0x00056faa) bg_tb_trans_pane_g5

0x9a3f,	// (0x00056fd2) bg_tb_trans_pane_g6

0x9a37,	// (0x00056fca) bg_tb_trans_pane_g7

0x9a27,	// (0x00056fba) bg_tb_trans_pane_g8

0x9a2f,	// (0x00056fc2) bg_tb_trans_pane_g9

0x0008,

0xfc25,	// (0x0005d1b8) bg_tb_trans_pane_g

0xcc15,	// (0x0005a1a8) cell_toolbar_trans_pane_ParamLimits

0xcc15,	// (0x0005a1a8) cell_toolbar_trans_pane

0xc01c,	// (0x000595af) cell_toolbar_trans_pane_g1

0xbbec,	// (0x0005917f) list_form2_midp_pane_t1

0xbbfa,	// (0x0005918d) list_form2_midp_pane_t2

0x0001,

0xfac2,	// (0x0005d055) list_form2_midp_pane_t

0xbc08,	// (0x0005919b) scroll_pane_cp51_ParamLimits

0xbdd0,	// (0x00059363) form2_midp_wait_pane_g1

0xbdd9,	// (0x0005936c) form2_midp_wait_pane_g2

0xbde2,	// (0x00059375) form2_midp_wait_pane_g3

0x0002,

0xfad7,	// (0x0005d06a) form2_midp_wait_pane_g

0x78c7,	// (0x00054e5a) list_highlight_pane_cp21_ParamLimits

0xbe2e,	// (0x000593c1) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xbe3d,	// (0x000593d0) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x82fc,	// (0x0005588f) list_single_2graphic_im_pane_ParamLimits

0x82fc,	// (0x0005588f) list_single_2graphic_im_pane

0xcc3b,	// (0x0005a1ce) list_single_2graphic_im_pane_g1_ParamLimits

0xcc3b,	// (0x0005a1ce) list_single_2graphic_im_pane_g1

0xcc4c,	// (0x0005a1df) list_single_2graphic_im_pane_g2_ParamLimits

0xcc4c,	// (0x0005a1df) list_single_2graphic_im_pane_g2

0xcc58,	// (0x0005a1eb) list_single_2graphic_im_pane_g3_ParamLimits

0xcc58,	// (0x0005a1eb) list_single_2graphic_im_pane_g3

0x0003,

0xfc38,	// (0x0005d1cb) list_single_2graphic_im_pane_g_ParamLimits

0xfc38,	// (0x0005d1cb) list_single_2graphic_im_pane_g

0xcc78,	// (0x0005a20b) list_single_2graphic_im_pane_t1_ParamLimits

0xcc78,	// (0x0005a20b) list_single_2graphic_im_pane_t1

0xc663,	// (0x00059bf6) list_single_graphic_2heading_pane_fp_ParamLimits

0xc663,	// (0x00059bf6) list_single_graphic_2heading_pane_fp

0x6770,	// (0x00053d03) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x6770,	// (0x00053d03) list_single_graphic_2heading_pane_fp_g1

0xc678,	// (0x00059c0b) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc678,	// (0x00059c0b) list_single_graphic_2heading_pane_fp_g2

0x816f,	// (0x00055702) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x816f,	// (0x00055702) list_single_graphic_2heading_pane_fp_g3

0x8203,	// (0x00055796) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x8203,	// (0x00055796) list_single_graphic_2heading_pane_fp_g4

0xc684,	// (0x00059c17) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc684,	// (0x00059c17) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb5f,	// (0x0005d0f2) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb5f,	// (0x0005d0f2) list_single_graphic_2heading_pane_fp_g

0x6a14,	// (0x00053fa7) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x6a14,	// (0x00053fa7) list_single_graphic_2heading_pane_fp_t1

0x67a8,	// (0x00053d3b) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x67a8,	// (0x00053d3b) list_single_graphic_2heading_pane_fp_t2

0x6a2a,	// (0x00053fbd) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x6a2a,	// (0x00053fbd) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc41,	// (0x0005d1d4) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc41,	// (0x0005d1d4) list_single_graphic_2heading_pane_fp_t

0xc0a8,	// (0x0005963b) fep_hwr_write_pane_g5_ParamLimits

0xc0a8,	// (0x0005963b) fep_hwr_write_pane_g5

0xc0b4,	// (0x00059647) fep_hwr_write_pane_g6_ParamLimits

0xc0b4,	// (0x00059647) fep_hwr_write_pane_g6

0xc94a,	// (0x00059edd) eswt_shell_pane_ParamLimits

0x9a73,	// (0x00057006) bg_popup_window_pane_cp18_ParamLimits

0x9e5f,	// (0x000573f2) heading_pane_cp70

0xca74,	// (0x0005a007) popup_eswt_tasktip_window_t1_ParamLimits

0x9566,	// (0x00056af9) aid_touch_tab_arrow_left

0x9575,	// (0x00056b08) aid_touch_tab_arrow_right

0x780f,	// (0x00054da2) title_pane_g3_ParamLimits

0x780f,	// (0x00054da2) title_pane_g3

0x81b4,	// (0x00055747) set_value_pane_g1

0x5acc,	// (0x0005305f) popup_toolbar_trans_pane_ParamLimits

0xcbef,	// (0x0005a182) aid_size_cell_tb_trans_pane_ParamLimits

0x81f5,	// (0x00055788) bg_tb_trans_pane_ParamLimits

0xcc01,	// (0x0005a194) grid_tb_trans_pane_ParamLimits

0x7b50,	// (0x000550e3) cont_note_pane_ParamLimits

0x7b50,	// (0x000550e3) cont_note_pane

0x7ec5,	// (0x00055458) cont_snote2_single_text_pane_ParamLimits

0x7ec5,	// (0x00055458) cont_snote2_single_text_pane

0x7ec5,	// (0x00055458) cont_snote2_single_graphic_pane_ParamLimits

0x7ec5,	// (0x00055458) cont_snote2_single_graphic_pane

0xa08e,	// (0x00057621) cont_note_wait_pane_ParamLimits

0xa08e,	// (0x00057621) cont_note_wait_pane

0xa08e,	// (0x00057621) cont_note_image_pane_ParamLimits

0xa08e,	// (0x00057621) cont_note_image_pane

0xcca9,	// (0x0005a23c) popup_note2_window_g1_ParamLimits

0xcca9,	// (0x0005a23c) popup_note2_window_g1

0xccda,	// (0x0005a26d) popup_note2_window_t1_ParamLimits

0xccda,	// (0x0005a26d) popup_note2_window_t1

0xcd1f,	// (0x0005a2b2) popup_note2_window_t2_ParamLimits

0xcd1f,	// (0x0005a2b2) popup_note2_window_t2

0xcd64,	// (0x0005a2f7) popup_note2_window_t3_ParamLimits

0xcd64,	// (0x0005a2f7) popup_note2_window_t3

0xcda9,	// (0x0005a33c) popup_note2_window_t4_ParamLimits

0xcda9,	// (0x0005a33c) popup_note2_window_t4

0x7bd4,	// (0x00055167) popup_note2_window_t5_ParamLimits

0x7bd4,	// (0x00055167) popup_note2_window_t5

0x0004,

0xfc4d,	// (0x0005d1e0) popup_note2_window_t_ParamLimits

0xfc4d,	// (0x0005d1e0) popup_note2_window_t

0xcdd8,	// (0x0005a36b) popup_note2_image_window_g1_ParamLimits

0xcdd8,	// (0x0005a36b) popup_note2_image_window_g1

0xcde4,	// (0x0005a377) popup_note2_image_window_g2_ParamLimits

0xcde4,	// (0x0005a377) popup_note2_image_window_g2

0x0001,

0xfc58,	// (0x0005d1eb) popup_note2_image_window_g_ParamLimits

0xfc58,	// (0x0005d1eb) popup_note2_image_window_g

0xcdf6,	// (0x0005a389) popup_note2_image_window_t1_ParamLimits

0xcdf6,	// (0x0005a389) popup_note2_image_window_t1

0xce0e,	// (0x0005a3a1) popup_note2_image_window_t2_ParamLimits

0xce0e,	// (0x0005a3a1) popup_note2_image_window_t2

0xce26,	// (0x0005a3b9) popup_note2_image_window_t3_ParamLimits

0xce26,	// (0x0005a3b9) popup_note2_image_window_t3

0x0002,

0xfc5d,	// (0x0005d1f0) popup_note2_image_window_t_ParamLimits

0xfc5d,	// (0x0005d1f0) popup_note2_image_window_t

0xa09c,	// (0x0005762f) popup_note2_wait_window_g1_ParamLimits

0xa09c,	// (0x0005762f) popup_note2_wait_window_g1

0xce42,	// (0x0005a3d5) popup_note2_wait_window_g2_ParamLimits

0xce42,	// (0x0005a3d5) popup_note2_wait_window_g2

0xa0b4,	// (0x00057647) popup_note2_wait_window_g3_ParamLimits

0xa0b4,	// (0x00057647) popup_note2_wait_window_g3

0x0002,

0xfc64,	// (0x0005d1f7) popup_note2_wait_window_g_ParamLimits

0xfc64,	// (0x0005d1f7) popup_note2_wait_window_g

0xce4e,	// (0x0005a3e1) popup_note2_wait_window_t1_ParamLimits

0xce4e,	// (0x0005a3e1) popup_note2_wait_window_t1

0xce6c,	// (0x0005a3ff) popup_note2_wait_window_t2_ParamLimits

0xce6c,	// (0x0005a3ff) popup_note2_wait_window_t2

0xce8a,	// (0x0005a41d) popup_note2_wait_window_t3_ParamLimits

0xce8a,	// (0x0005a41d) popup_note2_wait_window_t3

0xce9c,	// (0x0005a42f) popup_note2_wait_window_t4_ParamLimits

0xce9c,	// (0x0005a42f) popup_note2_wait_window_t4

0x0003,

0xfc6b,	// (0x0005d1fe) popup_note2_wait_window_t_ParamLimits

0xfc6b,	// (0x0005d1fe) popup_note2_wait_window_t

0xceae,	// (0x0005a441) wait_bar2_pane_ParamLimits

0xceae,	// (0x0005a441) wait_bar2_pane

0xcec6,	// (0x0005a459) popup_snote2_single_text_window_g1_ParamLimits

0xcec6,	// (0x0005a459) popup_snote2_single_text_window_g1

0xceee,	// (0x0005a481) popup_snote2_single_text_window_t1_ParamLimits

0xceee,	// (0x0005a481) popup_snote2_single_text_window_t1

0xcf3a,	// (0x0005a4cd) popup_snote2_single_text_window_t2_ParamLimits

0xcf3a,	// (0x0005a4cd) popup_snote2_single_text_window_t2

0xcf86,	// (0x0005a519) popup_snote2_single_text_window_t3_ParamLimits

0xcf86,	// (0x0005a519) popup_snote2_single_text_window_t3

0xcfc7,	// (0x0005a55a) popup_snote2_single_text_window_t4_ParamLimits

0xcfc7,	// (0x0005a55a) popup_snote2_single_text_window_t4

0xcffd,	// (0x0005a590) popup_snote2_single_text_window_t5_ParamLimits

0xcffd,	// (0x0005a590) popup_snote2_single_text_window_t5

0x0004,

0xfc74,	// (0x0005d207) popup_snote2_single_text_window_t_ParamLimits

0xfc74,	// (0x0005d207) popup_snote2_single_text_window_t

0xd028,	// (0x0005a5bb) popup_snote2_single_graphic_window_g1_ParamLimits

0xd028,	// (0x0005a5bb) popup_snote2_single_graphic_window_g1

0xd050,	// (0x0005a5e3) popup_snote2_single_graphic_window_g2_ParamLimits

0xd050,	// (0x0005a5e3) popup_snote2_single_graphic_window_g2

0x0001,

0xfc7f,	// (0x0005d212) popup_snote2_single_graphic_window_g_ParamLimits

0xfc7f,	// (0x0005d212) popup_snote2_single_graphic_window_g

0xd078,	// (0x0005a60b) popup_snote2_single_graphic_window_t1_ParamLimits

0xd078,	// (0x0005a60b) popup_snote2_single_graphic_window_t1

0xd0c4,	// (0x0005a657) popup_snote2_single_graphic_window_t2_ParamLimits

0xd0c4,	// (0x0005a657) popup_snote2_single_graphic_window_t2

0xcf86,	// (0x0005a519) popup_snote2_single_graphic_window_t3_ParamLimits

0xcf86,	// (0x0005a519) popup_snote2_single_graphic_window_t3

0xcfc7,	// (0x0005a55a) popup_snote2_single_graphic_window_t4_ParamLimits

0xcfc7,	// (0x0005a55a) popup_snote2_single_graphic_window_t4

0xcffd,	// (0x0005a590) popup_snote2_single_graphic_window_t5_ParamLimits

0xcffd,	// (0x0005a590) popup_snote2_single_graphic_window_t5

0x0004,

0xfc84,	// (0x0005d217) popup_snote2_single_graphic_window_t_ParamLimits

0xfc84,	// (0x0005d217) popup_snote2_single_graphic_window_t

0xbac9,	// (0x0005905c) clock_nsta_pane_cp2_t1

0xbac9,	// (0x0005905c) clock_nsta_pane_cp2_t2

0x0001,

0xfa98,	// (0x0005d02b) clock_nsta_pane_cp2_t

0x4dd2,	// (0x00052365) form_field_data_wide_pane_g1_ParamLimits

0x816f,	// (0x00055702) form_field_data_wide_pane_g2_ParamLimits

0x816f,	// (0x00055702) form_field_data_wide_pane_g2

0x8203,	// (0x00055796) form_field_data_wide_pane_g3_ParamLimits

0x8203,	// (0x00055796) form_field_data_wide_pane_g3

0x0002,

0xf659,	// (0x0005cbec) form_field_data_wide_pane_g_ParamLimits

0xf659,	// (0x0005cbec) form_field_data_wide_pane_g

0xb9a5,	// (0x00058f38) grid_touch_3_pane_ParamLimits

0xb9a5,	// (0x00058f38) grid_touch_3_pane

0xd110,	// (0x0005a6a3) cell_touch_3_pane_ParamLimits

0xd110,	// (0x0005a6a3) cell_touch_3_pane

0xc01c,	// (0x000595af) cell_touch_3_pane_g1

0xc01c,	// (0x000595af) cell_touch_3_pane_g2

0x0001,

0xfb1d,	// (0x0005d0b0) cell_touch_3_pane_g

0x7c2c,	// (0x000551bf) cont_query_data_pane

0x7c34,	// (0x000551c7) cont_query_data_pane_cp1

0xd13e,	// (0x0005a6d1) button_value_adjust_pane_cp7

0xd146,	// (0x0005a6d9) query_popup_pane_cp3

0x8c95,	// (0x00056228) bg_popup_sub_pane_cp22_ParamLimits

0x5196,	// (0x00052729) navi_navi_volume_pane_cp2

0x51b1,	// (0x00052744) popup_side_volume_key_window_g2

0x51c0,	// (0x00052753) popup_side_volume_key_window_g3

0x0002,

0xf6ef,	// (0x0005cc82) popup_side_volume_key_window_g

0x51dd,	// (0x00052770) popup_side_volume_key_window_t2

0x0001,

0xf6f6,	// (0x0005cc89) popup_side_volume_key_window_t

0x8f4f,	// (0x000564e2) popup_side_volume_key_window_ParamLimits

0x4a48,	// (0x00051fdb) list_double_graphic_pane_g4_ParamLimits

0x4a48,	// (0x00051fdb) list_double_graphic_pane_g4

0x8339,	// (0x000558cc) list_single_2heading_msg_pane_ParamLimits

0x8339,	// (0x000558cc) list_single_2heading_msg_pane

0x845c,	// (0x000559ef) list_single_2heading_msg_pane_g1_ParamLimits

0x845c,	// (0x000559ef) list_single_2heading_msg_pane_g1

0x8468,	// (0x000559fb) list_single_2heading_msg_pane_g2_ParamLimits

0x8468,	// (0x000559fb) list_single_2heading_msg_pane_g2

0x8474,	// (0x00055a07) list_single_2heading_msg_pane_g3_ParamLimits

0x8474,	// (0x00055a07) list_single_2heading_msg_pane_g3

0x8480,	// (0x00055a13) list_single_2heading_msg_pane_g4_ParamLimits

0x8480,	// (0x00055a13) list_single_2heading_msg_pane_g4

0x0003,

0xfc8f,	// (0x0005d222) list_single_2heading_msg_pane_g_ParamLimits

0xfc8f,	// (0x0005d222) list_single_2heading_msg_pane_g

0x6a4a,	// (0x00053fdd) list_single_2heading_msg_pane_t1_ParamLimits

0x6a4a,	// (0x00053fdd) list_single_2heading_msg_pane_t1

0x8498,	// (0x00055a2b) list_single_2heading_msg_pane_t2_ParamLimits

0x8498,	// (0x00055a2b) list_single_2heading_msg_pane_t2

0x84cc,	// (0x00055a5f) list_single_2heading_msg_pane_t3_ParamLimits

0x84cc,	// (0x00055a5f) list_single_2heading_msg_pane_t3

0x8505,	// (0x00055a98) list_single_2heading_msg_pane_t4_ParamLimits

0x8505,	// (0x00055a98) list_single_2heading_msg_pane_t4

0x0003,

0xfc98,	// (0x0005d22b) list_single_2heading_msg_pane_t_ParamLimits

0xfc98,	// (0x0005d22b) list_single_2heading_msg_pane_t

0x781b,	// (0x00054dae) title_pane_g4_ParamLimits

0x781b,	// (0x00054dae) title_pane_g4

0x4fa5,	// (0x00052538) title_pane_stacon_g3_ParamLimits

0x4fa5,	// (0x00052538) title_pane_stacon_g3

0xcc6c,	// (0x0005a1ff) list_single_2graphic_im_pane_g4_ParamLimits

0xcc6c,	// (0x0005a1ff) list_single_2graphic_im_pane_g4

0xaaed,	// (0x00058080) popup_side_volume_key_window_cp

0xb2f0,	// (0x00058883) main_idle_act2_pane_t1

0x5bd4,	// (0x00053167) toolbar_button_pane_g10

0x80bd,	// (0x00055650) popup_toolbar_window_cp1

0xbaba,	// (0x0005904d) clock_nsta_pane_cp_t1

0xbaba,	// (0x0005904d) clock_nsta_pane_cp_t2

0x0001,

0xfa93,	// (0x0005d026) clock_nsta_pane_cp_t

0x5196,	// (0x00052729) navi_navi_volume_pane_cp2_ParamLimits

0x51a5,	// (0x00052738) popup_side_volume_key_window_g1_ParamLimits

0x51b1,	// (0x00052744) popup_side_volume_key_window_g2_ParamLimits

0x51c0,	// (0x00052753) popup_side_volume_key_window_g3_ParamLimits

0xf6ef,	// (0x0005cc82) popup_side_volume_key_window_g_ParamLimits

0x64b5,	// (0x00053a48) fep_hwr_aid_pane

0x655c,	// (0x00053aef) bg_fep_hwr_top_pane_g4_ParamLimits

0xc078,	// (0x0005960b) fep_hwr_top_pane_g1_ParamLimits

0xc08a,	// (0x0005961d) fep_hwr_top_pane_g2_ParamLimits

0x657c,	// (0x00053b0f) fep_hwr_top_pane_g3_ParamLimits

0xfae8,	// (0x0005d07b) fep_hwr_top_pane_g_ParamLimits

0x6591,	// (0x00053b24) fep_hwr_top_text_pane_ParamLimits

0xa8b0,	// (0x00057e43) aid_touch_tab_arrow_arrow_2

0xa8b9,	// (0x00057e4c) aid_touch_tab_arrow_left_2

0x64c9,	// (0x00053a5c) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x6500,	// (0x00053a93) fep_hwr_prediction_pane

0xc1ea,	// (0x0005977d) fep_vkb_prediction_pane

0xc2ee,	// (0x00059881) fep_vkb_side_pane_g3_ParamLimits

0xc2ee,	// (0x00059881) fep_vkb_side_pane_g3

0x670c,	// (0x00053c9f) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x68ad,	// (0x00053e40) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x68ba,	// (0x00053e4d) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb97,	// (0x0005d12a) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x6a72,	// (0x00054005) fep_hwr_prediction_pane_g1

0x6a7c,	// (0x0005400f) fep_hwr_prediction_pane_g2

0x6a84,	// (0x00054017) fep_hwr_prediction_pane_g3

0x6a8c,	// (0x0005401f) fep_hwr_prediction_pane_g4

0x0003,

0xfca1,	// (0x0005d234) fep_hwr_prediction_pane_g

0xd16b,	// (0x0005a6fe) fep_vkb_prediction_pane_g1

0xd175,	// (0x0005a708) fep_vkb_prediction_pane_g2

0xd17d,	// (0x0005a710) fep_vkb_prediction_pane_g3

0xd185,	// (0x0005a718) fep_vkb_prediction_pane_g4

0x0003,

0xfcaa,	// (0x0005d23d) fep_vkb_prediction_pane_g

0x5f9f,	// (0x00053532) slider_set_pane_g3

0x5fb3,	// (0x00053546) slider_set_pane_g4

0x5fcb,	// (0x0005355e) slider_set_pane_g5

0x5f9f,	// (0x00053532) slider_set_pane_g6

0x5fe1,	// (0x00053574) slider_set_pane_g7

0xaf3d,	// (0x000584d0) slider_form_pane_g3

0xaf46,	// (0x000584d9) slider_form_pane_g4

0xaf4e,	// (0x000584e1) slider_form_pane_g5

0xaf3d,	// (0x000584d0) slider_form_pane_g6

0xaf56,	// (0x000584e9) slider_form_pane_g7

0xb59b,	// (0x00058b2e) slider_set_pane_vc_g3

0xb5a4,	// (0x00058b37) slider_set_pane_vc_g4

0xb5ad,	// (0x00058b40) slider_set_pane_vc_g5

0xb59b,	// (0x00058b2e) slider_set_pane_vc_g6

0xb5b6,	// (0x00058b49) slider_set_pane_vc_g7

0xb778,	// (0x00058d0b) slider_form_pane_vc_g1

0xb781,	// (0x00058d14) slider_form_pane_vc_g2

0xb78a,	// (0x00058d1d) slider_form_pane_vc_g3

0xb778,	// (0x00058d0b) slider_form_pane_vc_g4

0xb793,	// (0x00058d26) slider_form_pane_vc_g5

0x0004,

0xfa65,	// (0x0005cff8) slider_form_pane_vc_g

0x4675,	// (0x00051c08) main_idle_act3_pane

0xd18d,	// (0x0005a720) ai3_links_pane

0xd196,	// (0x0005a729) popup_ai3_data_window_ParamLimits

0xd196,	// (0x0005a729) popup_ai3_data_window

0x19d6,	// (0x0004ef69) grid_ai3_links_pane

0xd1b0,	// (0x0005a743) cell_ai3_links_pane_ParamLimits

0xd1b0,	// (0x0005a743) cell_ai3_links_pane

0xd1c8,	// (0x0005a75b) bg_popup_sub_pane_cp11

0xd1d5,	// (0x0005a768) cell_ai3_links_pane_g1

0x19d6,	// (0x0004ef69) bg_popup_sub_pane_cp12

0xd1fa,	// (0x0005a78d) heading_ai3_data_pane

0xd202,	// (0x0005a795) list_ai3_gene_pane

0xd20e,	// (0x0005a7a1) popup_ai3_data_window_g1

0xd216,	// (0x0005a7a9) heading_ai3_data_pane_g1

0xd21e,	// (0x0005a7b1) heading_ai3_data_pane_t1

0xd22c,	// (0x0005a7bf) list_double_ai3_gene_pane_ParamLimits

0xd22c,	// (0x0005a7bf) list_double_ai3_gene_pane

0xd239,	// (0x0005a7cc) list_single_ai3_gene_pane_ParamLimits

0xd239,	// (0x0005a7cc) list_single_ai3_gene_pane

0xbfe1,	// (0x00059574) list_highlight_pane_cp7_ParamLimits

0xbfe1,	// (0x00059574) list_highlight_pane_cp7

0xd246,	// (0x0005a7d9) list_single_a13_gene_pane_t1_ParamLimits

0xd246,	// (0x0005a7d9) list_single_a13_gene_pane_t1

0xd25d,	// (0x0005a7f0) list_single_ai3_gene_pane_g1

0xd266,	// (0x0005a7f9) list_single_ai3_gene_pane_g2

0x0001,

0xfcb3,	// (0x0005d246) list_single_ai3_gene_pane_g

0xd26e,	// (0x0005a801) list_double_ai3_gene_pane_g1_ParamLimits

0xd26e,	// (0x0005a801) list_double_ai3_gene_pane_g1

0xd27a,	// (0x0005a80d) list_double_ai3_gene_pane_t1_ParamLimits

0xd27a,	// (0x0005a80d) list_double_ai3_gene_pane_t1

0xd296,	// (0x0005a829) list_double_ai3_gene_pane_t2_ParamLimits

0xd296,	// (0x0005a829) list_double_ai3_gene_pane_t2

0xd2ac,	// (0x0005a83f) list_double_ai3_gene_pane_t3_ParamLimits

0xd2ac,	// (0x0005a83f) list_double_ai3_gene_pane_t3

0x0002,

0xfcb8,	// (0x0005d24b) list_double_ai3_gene_pane_t_ParamLimits

0xfcb8,	// (0x0005d24b) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x6a40,	// (0x00053fd3) aid_size_min_col_2

0xd157,	// (0x0005a6ea) aid_size_min_msg_ParamLimits

0xd157,	// (0x0005a6ea) aid_size_min_msg

0xc3ee,	// (0x00059981) fep_vkb_top_text_pane_g2_ParamLimits

0xc3ee,	// (0x00059981) fep_vkb_top_text_pane_g2

0x0001,

0xfb18,	// (0x0005d0ab) fep_vkb_top_text_pane_g_ParamLimits

0xfb18,	// (0x0005d0ab) fep_vkb_top_text_pane_g

0x4675,	// (0x00051c08) main_hc_apps_shell_pane

0xd2c9,	// (0x0005a85c) grid_hc_apps_pane_ParamLimits

0xd2c9,	// (0x0005a85c) grid_hc_apps_pane

0xd2db,	// (0x0005a86e) list_hc_apps_pane

0xd2e3,	// (0x0005a876) scroll_pane_cp37_ParamLimits

0xd2e3,	// (0x0005a876) scroll_pane_cp37

0xd2ef,	// (0x0005a882) cell_hc_apps_pane_ParamLimits

0xd2ef,	// (0x0005a882) cell_hc_apps_pane

0xd39d,	// (0x0005a930) cell_hc_apps_pane_g1_ParamLimits

0xd39d,	// (0x0005a930) cell_hc_apps_pane_g1

0xd3cd,	// (0x0005a960) cell_hc_apps_pane_g2_ParamLimits

0xd3cd,	// (0x0005a960) cell_hc_apps_pane_g2

0xd3e9,	// (0x0005a97c) cell_hc_apps_pane_g3_ParamLimits

0xd3e9,	// (0x0005a97c) cell_hc_apps_pane_g3

0x0002,

0xfcbf,	// (0x0005d252) cell_hc_apps_pane_g_ParamLimits

0xfcbf,	// (0x0005d252) cell_hc_apps_pane_g

0xd40b,	// (0x0005a99e) cell_hc_apps_pane_t1_ParamLimits

0xd40b,	// (0x0005a99e) cell_hc_apps_pane_t1

0x7b50,	// (0x000550e3) grid_highlight_pane_cp10_ParamLimits

0x7b50,	// (0x000550e3) grid_highlight_pane_cp10

0xd44b,	// (0x0005a9de) list_single_hc_apps_pane_ParamLimits

0xd44b,	// (0x0005a9de) list_single_hc_apps_pane

0xd4a7,	// (0x0005aa3a) list_single_hc_apps_pane_g1

0x852a,	// (0x00055abd) list_single_hc_apps_pane_g2

0x0001,

0xfcc6,	// (0x0005d259) list_single_hc_apps_pane_g

0x8543,	// (0x00055ad6) list_single_hc_apps_pane_g2_copy1

0x855f,	// (0x00055af2) list_single_hc_apps_pane_t1

0x78c7,	// (0x00054e5a) bg_set_opt_pane_cp_ParamLimits

0x48d6,	// (0x00051e69) setting_slider_pane_t1_ParamLimits

0x48ef,	// (0x00051e82) setting_slider_pane_t2_ParamLimits

0x4909,	// (0x00051e9c) setting_slider_pane_t3_ParamLimits

0xf537,	// (0x0005caca) setting_slider_pane_t_ParamLimits

0x4921,	// (0x00051eb4) slider_set_pane_ParamLimits

0x54ad,	// (0x00052a40) control_pane_g5_ParamLimits

0x54ad,	// (0x00052a40) control_pane_g5

0xad8c,	// (0x0005831f) slider_set_pane_g1_ParamLimits

0x5f93,	// (0x00053526) slider_set_pane_g2_ParamLimits

0x5f9f,	// (0x00053532) slider_set_pane_g3_ParamLimits

0x5fb3,	// (0x00053546) slider_set_pane_g4_ParamLimits

0x5fcb,	// (0x0005355e) slider_set_pane_g5_ParamLimits

0x5f9f,	// (0x00053532) slider_set_pane_g6_ParamLimits

0x5fe1,	// (0x00053574) slider_set_pane_g7_ParamLimits

0xf93d,	// (0x0005ced0) slider_set_pane_g_ParamLimits

0x9030,	// (0x000565c3) navi_icon_text_pane_ParamLimits

0x9527,	// (0x00056aba) aid_fill_nsta_2_ParamLimits

0x9566,	// (0x00056af9) aid_touch_tab_arrow_left_ParamLimits

0x9575,	// (0x00056b08) aid_touch_tab_arrow_right_ParamLimits

0x95e2,	// (0x00056b75) clock_nsta_pane_ParamLimits

0xa892,	// (0x00057e25) navi_icon_pane_g1_ParamLimits

0xa89e,	// (0x00057e31) navi_text_pane_t1_ParamLimits

0xbbc6,	// (0x00059159) navi_icon_text_pane_g1_ParamLimits

0xbbd2,	// (0x00059165) navi_icon_text_pane_t1_ParamLimits

0xd4a7,	// (0x0005aa3a) list_single_hc_apps_pane_g1_ParamLimits

0x852a,	// (0x00055abd) list_single_hc_apps_pane_g2_ParamLimits

0xfcc6,	// (0x0005d259) list_single_hc_apps_pane_g_ParamLimits

0x8543,	// (0x00055ad6) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x855f,	// (0x00055af2) list_single_hc_apps_pane_t1_ParamLimits

0x47e0,	// (0x00051d73) popup_toolbar2_fixed_window_ParamLimits

0x47e0,	// (0x00051d73) popup_toolbar2_fixed_window

0x5ac2,	// (0x00053055) popup_toolbar2_float_window

0x19d6,	// (0x0004ef69) bg_popup_sub_pane_cp27

0xd4c0,	// (0x0005aa53) grid_toolbar2_float_pane

0x19d6,	// (0x0004ef69) bg_popup_sub_pane_cp26

0xd4c0,	// (0x0005aa53) grid_toolbar2_fixed_pane

0xd4c8,	// (0x0005aa5b) cell_toolbar2_fixed_pane_ParamLimits

0xd4c8,	// (0x0005aa5b) cell_toolbar2_fixed_pane

0xd4d8,	// (0x0005aa6b) cell_toolbar2_fixed_pane_g1

0xd4e1,	// (0x0005aa74) toolbar2_fixed_button_pane

0x99ff,	// (0x00056f92) toolbar2_fixed_button_pane_g1

0x9a0f,	// (0x00056fa2) toolbar2_fixed_button_pane_g2

0x9a07,	// (0x00056f9a) toolbar2_fixed_button_pane_g3

0x9a1f,	// (0x00056fb2) toolbar2_fixed_button_pane_g4

0x9a17,	// (0x00056faa) toolbar2_fixed_button_pane_g5

0x9a27,	// (0x00056fba) toolbar2_fixed_button_pane_g6

0x9a2f,	// (0x00056fc2) toolbar2_fixed_button_pane_g7

0x9a3f,	// (0x00056fd2) toolbar2_fixed_button_pane_g8

0x9a37,	// (0x00056fca) toolbar2_fixed_button_pane_g9

0x0008,

0xf83f,	// (0x0005cdd2) toolbar2_fixed_button_pane_g

0xd4e9,	// (0x0005aa7c) cell_toolbar2_float_pane_ParamLimits

0xd4e9,	// (0x0005aa7c) cell_toolbar2_float_pane

0xd4fa,	// (0x0005aa8d) cell_toolbar2_float_pane_g1

0xd4e1,	// (0x0005aa74) toolbar2_fixed_button_pane_cp

0xc14a,	// (0x000596dd) fep_vkb_accented_list_pane_ParamLimits

0xc14a,	// (0x000596dd) fep_vkb_accented_list_pane

0x66ec,	// (0x00053c7f) bg_popup_fep_shadow_pane_g9

0x91b1,	// (0x00056744) bg_popup_fep_shadow_pane_cp3

0x865e,	// (0x00055bf1) list_accented_list_pane

0xd503,	// (0x0005aa96) list_single_accented_list_pane_ParamLimits

0xd503,	// (0x0005aa96) list_single_accented_list_pane

0x91b1,	// (0x00056744) list_highlight_pane_cp10

0xd514,	// (0x0005aaa7) list_single_accented_list_pane_t1

0x5a12,	// (0x00052fa5) popup_slider_window_ParamLimits

0x5a12,	// (0x00052fa5) popup_slider_window

0xd14e,	// (0x0005a6e1) aid_indentation_list_msg

0xd5d8,	// (0x0005ab6b) bg_popup_window_pane_cp19

0xd640,	// (0x0005abd3) popup_slider_window_g1

0xd65c,	// (0x0005abef) popup_slider_window_g2

0xd678,	// (0x0005ac0b) popup_slider_window_g3

0x0005,

0xfccb,	// (0x0005d25e) popup_slider_window_g

0xd6de,	// (0x0005ac71) popup_slider_window_t1

0xd752,	// (0x0005ace5) small_volume_slider_vertical_pane

0xc01c,	// (0x000595af) small_volume_slider_vertical_pane_g1

0xc01c,	// (0x000595af) small_volume_slider_vertical_pane_g2

0xd76e,	// (0x0005ad01) small_volume_slider_vertical_pane_g3

0x0002,

0xfcdd,	// (0x0005d270) small_volume_slider_vertical_pane_g

0x4592,	// (0x00051b25) area_side_right_pane_ParamLimits

0x4592,	// (0x00051b25) area_side_right_pane

0x6a94,	// (0x00054027) aid_size_side_button_ParamLimits

0x6a94,	// (0x00054027) aid_size_side_button

0x6aa8,	// (0x0005403b) grid_sctrl_middle_pane_ParamLimits

0x6aa8,	// (0x0005403b) grid_sctrl_middle_pane

0x6ac7,	// (0x0005405a) sctrl_sk_bottom_pane

0x6ad8,	// (0x0005406b) sctrl_sk_top_pane

0x6aea,	// (0x0005407d) aid_touch_sctrl_top

0x6af7,	// (0x0005408a) bg_sctrl_sk_pane_ParamLimits

0x6af7,	// (0x0005408a) bg_sctrl_sk_pane

0x6b05,	// (0x00054098) sctrl_sk_top_pane_g1

0x6b12,	// (0x000540a5) sctrl_sk_top_pane_t1

0x6aea,	// (0x0005407d) aid_touch_sctrl_bottom

0x6af7,	// (0x0005408a) bg_sctrl_sk_pane_cp_ParamLimits

0x6af7,	// (0x0005408a) bg_sctrl_sk_pane_cp

0x6b2d,	// (0x000540c0) sctrl_sk_bottom_pane_g1

0x6b12,	// (0x000540a5) sctrl_sk_bottom_pane_t1

0x6b36,	// (0x000540c9) cell_sctrl_middle_pane_ParamLimits

0x6b36,	// (0x000540c9) cell_sctrl_middle_pane

0x6b51,	// (0x000540e4) aid_touch_sctrl_middle_ParamLimits

0x6b51,	// (0x000540e4) aid_touch_sctrl_middle

0x6b63,	// (0x000540f6) bg_sctrl_middle_pane_ParamLimits

0x6b63,	// (0x000540f6) bg_sctrl_middle_pane

0x670c,	// (0x00053c9f) cell_sctrl_middle_pane_g1_ParamLimits

0x670c,	// (0x00053c9f) cell_sctrl_middle_pane_g1

0x6b71,	// (0x00054104) cell_sctrl_middle_pane_g2_ParamLimits

0x6b71,	// (0x00054104) cell_sctrl_middle_pane_g2

0x0001,

0xfce9,	// (0x0005d27c) cell_sctrl_middle_pane_g_ParamLimits

0xfce9,	// (0x0005d27c) cell_sctrl_middle_pane_g

0x99ff,	// (0x00056f92) bg_sctrl_middle_pane_g1

0x9a07,	// (0x00056f9a) bg_sctrl_middle_pane_g2

0x9a0f,	// (0x00056fa2) bg_sctrl_middle_pane_g3

0x9a17,	// (0x00056faa) bg_sctrl_middle_pane_g4

0x9a1f,	// (0x00056fb2) bg_sctrl_middle_pane_g5

0x9a27,	// (0x00056fba) bg_sctrl_middle_pane_g6

0x9a2f,	// (0x00056fc2) bg_sctrl_middle_pane_g7

0x9a37,	// (0x00056fca) bg_sctrl_middle_pane_g8

0x0007,

0xfcee,	// (0x0005d281) bg_sctrl_middle_pane_g

0x9a3f,	// (0x00056fd2) bg_sctrl_middle_pane_g8_copy1

0x99ff,	// (0x00056f92) bg_sctrl_sk_pane_g1

0x9a0f,	// (0x00056fa2) bg_sctrl_sk_pane_g2

0x9a07,	// (0x00056f9a) bg_sctrl_sk_pane_g3

0x0008,

0xf83f,	// (0x0005cdd2) bg_sctrl_sk_pane_g

0x8083,	// (0x00055616) aid_size_touch_scroll_bar

0x9a1f,	// (0x00056fb2) bg_sctrl_sk_pane_g4

0x9a17,	// (0x00056faa) bg_sctrl_sk_pane_g5

0x9a27,	// (0x00056fba) bg_sctrl_sk_pane_g6

0x9a2f,	// (0x00056fc2) bg_sctrl_sk_pane_g7

0x9a3f,	// (0x00056fd2) bg_sctrl_sk_pane_g8

0x9a37,	// (0x00056fca) bg_sctrl_sk_pane_g9

0x5679,	// (0x00052c0c) popup_fep_china_hwr2_fs_candidate_window

0x5683,	// (0x00052c16) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x5683,	// (0x00052c16) popup_fep_china_hwr2_fs_control_window

0x670c,	// (0x00053c9f) sctrl_sk_top_pane_g2

0x0001,

0xfce4,	// (0x0005d277) sctrl_sk_top_pane_g

0xd777,	// (0x0005ad0a) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd777,	// (0x0005ad0a) aid_fep_china_hwr2_fs_cell

0xd789,	// (0x0005ad1c) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd789,	// (0x0005ad1c) bg_popup_fep_shadow_pane_cp4

0xd7a0,	// (0x0005ad33) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd7a0,	// (0x0005ad33) bg_popup_fep_shadow_pane_cp5

0xd7b2,	// (0x0005ad45) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd7b2,	// (0x0005ad45) popup_fep_china_hwr2_fs_control_bar_grid

0xd7c2,	// (0x0005ad55) popup_fep_china_hwr2_fs_control_funtion_grid

0xd7ca,	// (0x0005ad5d) aid_fep_china_hwr2_fs_candi_cell

0x19d6,	// (0x0004ef69) bg_popup_fep_shadow_pane_cp6

0xd7d4,	// (0x0005ad67) popup_fep_china_hwr2_fs_candidate_grid

0xd7de,	// (0x0005ad71) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd7de,	// (0x0005ad71) cell_fep_china_hwr2_fs_funtion_grid

0xc01c,	// (0x000595af) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd7f6,	// (0x0005ad89) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd7f6,	// (0x0005ad89) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd804,	// (0x0005ad97) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd804,	// (0x0005ad97) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfcff,	// (0x0005d292) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfcff,	// (0x0005d292) cell_fep_china_hwr2_fs_funtion_grid_g

0xd81a,	// (0x0005adad) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd81a,	// (0x0005adad) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd82f,	// (0x0005adc2) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd82f,	// (0x0005adc2) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd04,	// (0x0005d297) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd04,	// (0x0005d297) cell_fep_china_hwr2_fs_funtion_grid_t

0xd84b,	// (0x0005adde) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd853,	// (0x0005ade6) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd85b,	// (0x0005adee) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd09,	// (0x0005d29c) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd863,	// (0x0005adf6) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd863,	// (0x0005adf6) cell_fep_china_hwr2_fs_candidate_grid

0xd87c,	// (0x0005ae0f) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd884,	// (0x0005ae17) popup_fep_china_hwr2_fs_candidate_grid_g21

0xc01c,	// (0x000595af) cell_fep_china_hwr2_fs_candidate_grid_g1

0xc01c,	// (0x000595af) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb1d,	// (0x0005d0b0) cell_fep_china_hwr2_fs_candidate_grid_g

0xd88c,	// (0x0005ae1f) cell_fep_china_hwr2_fs_candidate_grid_t1

0x95f5,	// (0x00056b88) clock_nsta_pane_cp_24_ParamLimits

0x95f5,	// (0x00056b88) clock_nsta_pane_cp_24

0x9673,	// (0x00056c06) indicator_nsta_pane_cp_24_ParamLimits

0x9673,	// (0x00056c06) indicator_nsta_pane_cp_24

0xa70e,	// (0x00057ca1) heading_pane_g1

0x0001,

0xf8a4,	// (0x0005ce37) heading_pane_g

0xb139,	// (0x000586cc) grid_sct_catagory_button_pane

0xb169,	// (0x000586fc) scroll_pane_cp5_ParamLimits

0xbc14,	// (0x000591a7) button_value_adjust_pane_cp5_ParamLimits

0xbc14,	// (0x000591a7) button_value_adjust_pane_cp5

0xbcff,	// (0x00059292) form2_midp_time_pane_ParamLimits

0xd89a,	// (0x0005ae2d) cell_sct_catagory_button_pane_ParamLimits

0xd89a,	// (0x0005ae2d) cell_sct_catagory_button_pane

0xbfe1,	// (0x00059574) bg_button_pane_cp01_ParamLimits

0xbfe1,	// (0x00059574) bg_button_pane_cp01

0xc01c,	// (0x000595af) cell_sct_catagory_button_pane_g1

0x5a51,	// (0x00052fe4) popup_tb_extension_window

0xd8ac,	// (0x0005ae3f) aid_size_cell_ext_ParamLimits

0xd8ac,	// (0x0005ae3f) aid_size_cell_ext

0x7b50,	// (0x000550e3) bg_tb_trans_pane_cp1_ParamLimits

0x7b50,	// (0x000550e3) bg_tb_trans_pane_cp1

0xd8cc,	// (0x0005ae5f) grid_tb_ext_pane_ParamLimits

0xd8cc,	// (0x0005ae5f) grid_tb_ext_pane

0xd8fa,	// (0x0005ae8d) cell_tb_ext_pane_ParamLimits

0xd8fa,	// (0x0005ae8d) cell_tb_ext_pane

0xd911,	// (0x0005aea4) cell_tb_ext_pane_g1_ParamLimits

0xd911,	// (0x0005aea4) cell_tb_ext_pane_g1

0xd92e,	// (0x0005aec1) cell_tb_ext_pane_t1

0x7b50,	// (0x000550e3) list_highlight_pane_cp11_ParamLimits

0x7b50,	// (0x000550e3) list_highlight_pane_cp11

0x47ff,	// (0x00051d92) popup_uni_indicator_window_ParamLimits

0x47ff,	// (0x00051d92) popup_uni_indicator_window

0x81f5,	// (0x00055788) bg_popup_sub_pane_cp14

0xd949,	// (0x0005aedc) list_uniindi_pane

0xd955,	// (0x0005aee8) uniindi_top_pane

0x7b50,	// (0x000550e3) bg_uniindi_top_pane

0xd974,	// (0x0005af07) uniindi_top_pane_g1

0xd98a,	// (0x0005af1d) uniindi_top_pane_g2

0x0003,

0xfd10,	// (0x0005d2a3) uniindi_top_pane_g

0xd9b4,	// (0x0005af47) uniindi_top_pane_t1

0xd9de,	// (0x0005af71) list_single_uniindi_pane_ParamLimits

0xd9de,	// (0x0005af71) list_single_uniindi_pane

0xc01c,	// (0x000595af) bg_uniindi_top_pane_g1

0xd9f1,	// (0x0005af84) list_single_uniindi_pane_g1

0xda04,	// (0x0005af97) list_single_uniindi_pane_t1

0x4675,	// (0x00051c08) control_bg_pane

0xda29,	// (0x0005afbc) bg_sctrl_sk_pane_cp1

0xda32,	// (0x0005afc5) bg_sctrl_sk_pane_cp2

0xda3b,	// (0x0005afce) control_bg_pane_g1

0xda44,	// (0x0005afd7) control_bg_pane_g2

0x0001,

0xfd19,	// (0x0005d2ac) control_bg_pane_g

0xba5e,	// (0x00058ff1) cell_indicator_nsta_pane_g1_ParamLimits

0xba6c,	// (0x00058fff) cell_indicator_nsta_pane_g2_ParamLimits

0xfa81,	// (0x0005d014) cell_indicator_nsta_pane_g_ParamLimits

0x6494,	// (0x00053a27) form2_midp_time_pane_t1_ParamLimits

0x55d9,	// (0x00052b6c) main_idle_act4_pane_ParamLimits

0x55d9,	// (0x00052b6c) main_idle_act4_pane

0x5a51,	// (0x00052fe4) popup_tb_extension_window_ParamLimits

0xd8ea,	// (0x0005ae7d) tb_ext_find_pane_ParamLimits

0xd8ea,	// (0x0005ae7d) tb_ext_find_pane

0xda4d,	// (0x0005afe0) ai_gene_pane_1_cp1

0x92f8,	// (0x0005688b) ai_gene_pane_2_cp1

0xda55,	// (0x0005afe8) list_single_idle_plugin_calendar_pane

0xda5e,	// (0x0005aff1) list_single_idle_plugin_notification_pane

0xda67,	// (0x0005affa) list_single_idle_plugin_player_pane

0xda70,	// (0x0005b003) list_single_idle_plugin_shortcut_pane_ParamLimits

0xda70,	// (0x0005b003) list_single_idle_plugin_shortcut_pane

0xda92,	// (0x0005b025) main_idle_act4_pane_t1

0xdaa4,	// (0x0005b037) main_idle_act4_pane_t2

0x0001,

0xfd1e,	// (0x0005d2b1) main_idle_act4_pane_t

0xdab6,	// (0x0005b049) middle_sk_idle_act4_pane_ParamLimits

0xdab6,	// (0x0005b049) middle_sk_idle_act4_pane

0xdacc,	// (0x0005b05f) popup_clock_digital_analogue_window_cp2

0xdae6,	// (0x0005b079) shortcut_wheel_idle_act4_pane_ParamLimits

0xdae6,	// (0x0005b079) shortcut_wheel_idle_act4_pane

0xc01c,	// (0x000595af) shortcut_wheel_idle_act4_pane_g1

0xc01c,	// (0x000595af) shortcut_wheel_idle_act4_pane_g2

0xc01c,	// (0x000595af) shortcut_wheel_idle_act4_pane_g3

0xc01c,	// (0x000595af) shortcut_wheel_idle_act4_pane_g4

0xc01c,	// (0x000595af) shortcut_wheel_idle_act4_pane_g5

0xdafa,	// (0x0005b08d) shortcut_wheel_idle_act4_pane_g6

0xdb02,	// (0x0005b095) shortcut_wheel_idle_act4_pane_g7

0xdb0a,	// (0x0005b09d) shortcut_wheel_idle_act4_pane_g8

0xdb12,	// (0x0005b0a5) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd23,	// (0x0005d2b6) shortcut_wheel_idle_act4_pane_g

0xc29a,	// (0x0005982d) middle_sk_idle_act4_pane_g1_ParamLimits

0xc29a,	// (0x0005982d) middle_sk_idle_act4_pane_g1

0xdb76,	// (0x0005b109) middle_sk_idle_act4_pane_g2_ParamLimits

0xdb76,	// (0x0005b109) middle_sk_idle_act4_pane_g2

0x0001,

0xfd46,	// (0x0005d2d9) middle_sk_idle_act4_pane_g_ParamLimits

0xfd46,	// (0x0005d2d9) middle_sk_idle_act4_pane_g

0xdb82,	// (0x0005b115) middle_sk_idle_act4_pane_t1_ParamLimits

0xdb82,	// (0x0005b115) middle_sk_idle_act4_pane_t1

0xdb9f,	// (0x0005b132) grid_ai_shortcut_pane_ParamLimits

0xdb9f,	// (0x0005b132) grid_ai_shortcut_pane

0xdbb8,	// (0x0005b14b) list_highlight_pane_cp16_ParamLimits

0xdbb8,	// (0x0005b14b) list_highlight_pane_cp16

0xdbc5,	// (0x0005b158) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdbc5,	// (0x0005b158) list_single_idle_plugin_shortcut_pane_g1

0xdbd1,	// (0x0005b164) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdbd1,	// (0x0005b164) list_single_idle_plugin_shortcut_pane_g2

0xdbe9,	// (0x0005b17c) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdbe9,	// (0x0005b17c) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd4b,	// (0x0005d2de) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd4b,	// (0x0005d2de) list_single_idle_plugin_shortcut_pane_g

0xdbfc,	// (0x0005b18f) cell_ai_shortcut_pane_ParamLimits

0xdbfc,	// (0x0005b18f) cell_ai_shortcut_pane

0xdc20,	// (0x0005b1b3) cell_ai_shortcut_pane_g1_ParamLimits

0xdc20,	// (0x0005b1b3) cell_ai_shortcut_pane_g1

0xda4d,	// (0x0005afe0) ai_gene_pane_1_cp2

0xdc42,	// (0x0005b1d5) ai_gene_pane_2_cp2

0xdc4a,	// (0x0005b1dd) list_highlight_pane_cp15

0xdc53,	// (0x0005b1e6) list_single_idle_plugin_calendar_pane_g1

0xdc4a,	// (0x0005b1dd) list_highlight_pane_cp17

0xdc5b,	// (0x0005b1ee) list_single_idle_plugin_calendar_pane_g1_copy1

0xdc63,	// (0x0005b1f6) list_single_idle_plugin_player_pane_g1

0xb392,	// (0x00058925) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd52,	// (0x0005d2e5) list_single_idle_plugin_player_pane_g

0xdc6b,	// (0x0005b1fe) list_single_idle_plugin_player_pane_t1

0xdc79,	// (0x0005b20c) list_single_idle_plugin_player_pane_t2

0xdc87,	// (0x0005b21a) list_single_idle_plugin_player_pane_t3

0xdc95,	// (0x0005b228) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd57,	// (0x0005d2ea) list_single_idle_plugin_player_pane_t

0xdca3,	// (0x0005b236) wait_bar_pane_cp15

0xdcab,	// (0x0005b23e) grid_ai_notification_pane

0xb392,	// (0x00058925) list_single_idle_plugin_notification_pane_g1

0xdcb4,	// (0x0005b247) cell_ai_notification_pane_ParamLimits

0xdcb4,	// (0x0005b247) cell_ai_notification_pane

0xdcc1,	// (0x0005b254) cell_ai_notification_pane_g1

0xdcc9,	// (0x0005b25c) cell_ai_notification_pane_t1

0xdcd7,	// (0x0005b26a) tb_ext_find_button_pane

0xdcdf,	// (0x0005b272) tb_ext_find_pane_g1

0xdce7,	// (0x0005b27a) tb_ext_find_pane_t1

0x8b8c,	// (0x0005611f) tb_ext_find_button_pane_g1

0xdcf5,	// (0x0005b288) tb_ext_find_button_pane_g2

0x0001,

0xfd60,	// (0x0005d2f3) tb_ext_find_button_pane_g

0xda92,	// (0x0005b025) main_idle_act4_pane_t1_ParamLimits

0xdaa4,	// (0x0005b037) main_idle_act4_pane_t2_ParamLimits

0xfd1e,	// (0x0005d2b1) main_idle_act4_pane_t_ParamLimits

0xdacc,	// (0x0005b05f) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdada,	// (0x0005b06d) sat_plugin_idle_act4_pane_ParamLimits

0xdada,	// (0x0005b06d) sat_plugin_idle_act4_pane

0xdcfe,	// (0x0005b291) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdcfe,	// (0x0005b291) sat_plugin_idle_act4_pane_t1

0xdd11,	// (0x0005b2a4) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdd11,	// (0x0005b2a4) sat_plugin_idle_act4_pane_t2

0xdd24,	// (0x0005b2b7) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdd24,	// (0x0005b2b7) sat_plugin_idle_act4_pane_t3

0xdd37,	// (0x0005b2ca) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdd37,	// (0x0005b2ca) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd65,	// (0x0005d2f8) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd65,	// (0x0005d2f8) sat_plugin_idle_act4_pane_t

0x473a,	// (0x00051ccd) popup_battery_window_ParamLimits

0x473a,	// (0x00051ccd) popup_battery_window

0x7b50,	// (0x000550e3) bg_popup_sub_pane_cp25_ParamLimits

0x7b50,	// (0x000550e3) bg_popup_sub_pane_cp25

0xdd4a,	// (0x0005b2dd) popup_battery_window_g1_ParamLimits

0xdd4a,	// (0x0005b2dd) popup_battery_window_g1

0xdd56,	// (0x0005b2e9) popup_battery_window_t1_ParamLimits

0xdd56,	// (0x0005b2e9) popup_battery_window_t1

0xdd68,	// (0x0005b2fb) popup_battery_window_t2_ParamLimits

0xdd68,	// (0x0005b2fb) popup_battery_window_t2

0x0001,

0xfd6e,	// (0x0005d301) popup_battery_window_t_ParamLimits

0xfd6e,	// (0x0005d301) popup_battery_window_t

0x91c5,	// (0x00056758) midp_canvas_pane_ParamLimits

0x923c,	// (0x000567cf) midp_keypad_pane_ParamLimits

0x923c,	// (0x000567cf) midp_keypad_pane

0x94d5,	// (0x00056a68) main_midp_pane_ParamLimits

0xbad8,	// (0x0005906b) signal_pane_g2_cp_ParamLimits

0xdd85,	// (0x0005b318) aid_size_cell_midp_keypad_ParamLimits

0xdd85,	// (0x0005b318) aid_size_cell_midp_keypad

0xdd9f,	// (0x0005b332) midp_keyp_game_grid_pane_ParamLimits

0xdd9f,	// (0x0005b332) midp_keyp_game_grid_pane

0xddbf,	// (0x0005b352) midp_keyp_rocker_pane_ParamLimits

0xddbf,	// (0x0005b352) midp_keyp_rocker_pane

0xddf8,	// (0x0005b38b) midp_keyp_sk_left_pane_ParamLimits

0xddf8,	// (0x0005b38b) midp_keyp_sk_left_pane

0xde52,	// (0x0005b3e5) midp_keyp_sk_right_pane_ParamLimits

0xde52,	// (0x0005b3e5) midp_keyp_sk_right_pane

0x19d6,	// (0x0004ef69) bg_button_pane_cp03

0xdeac,	// (0x0005b43f) midp_keyp_sk_left_pane_g1

0x19d6,	// (0x0004ef69) bg_button_pane_cp04

0xdeac,	// (0x0005b43f) midp_keyp_sk_right_pane_g1

0xc01c,	// (0x000595af) midp_keyp_rocker_pane_g1

0xdeb5,	// (0x0005b448) keyp_game_cell_pane_ParamLimits

0xdeb5,	// (0x0005b448) keyp_game_cell_pane

0x19d6,	// (0x0004ef69) bg_button_pane_cp02

0xdec8,	// (0x0005b45b) keyp_game_cell_pane_g1

0x477e,	// (0x00051d11) popup_fep_vkb2_window_ParamLimits

0x477e,	// (0x00051d11) popup_fep_vkb2_window

0x6b8f,	// (0x00054122) aid_size_cell_vkb2_ParamLimits

0x6b8f,	// (0x00054122) aid_size_cell_vkb2

0x6bdb,	// (0x0005416e) popup_fep_vkb2_window_g1_ParamLimits

0x6bdb,	// (0x0005416e) popup_fep_vkb2_window_g1

0x6c23,	// (0x000541b6) vkb2_area_bottom_pane_ParamLimits

0x6c23,	// (0x000541b6) vkb2_area_bottom_pane

0x6c6f,	// (0x00054202) vkb2_area_keypad_pane_ParamLimits

0x6c6f,	// (0x00054202) vkb2_area_keypad_pane

0x6cb1,	// (0x00054244) vkb2_area_top_pane_ParamLimits

0x6cb1,	// (0x00054244) vkb2_area_top_pane

0x6d30,	// (0x000542c3) vkb2_top_entry_pane_ParamLimits

0x6d30,	// (0x000542c3) vkb2_top_entry_pane

0x6d5a,	// (0x000542ed) vkb2_top_grid_left_pane_ParamLimits

0x6d5a,	// (0x000542ed) vkb2_top_grid_left_pane

0x6d79,	// (0x0005430c) vkb2_top_grid_right_pane_ParamLimits

0x6d79,	// (0x0005430c) vkb2_top_grid_right_pane

0x6d98,	// (0x0005432b) vkb2_cell_keypad_pane_ParamLimits

0x6d98,	// (0x0005432b) vkb2_cell_keypad_pane

0x6e69,	// (0x000543fc) vkb2_area_bottom_grid_pane_ParamLimits

0x6e69,	// (0x000543fc) vkb2_area_bottom_grid_pane

0x6e8f,	// (0x00054422) vkb2_area_bottom_pane_g1_ParamLimits

0x6e8f,	// (0x00054422) vkb2_area_bottom_pane_g1

0x6eb3,	// (0x00054446) vkb2_area_bottom_pane_g2_ParamLimits

0x6eb3,	// (0x00054446) vkb2_area_bottom_pane_g2

0x6ee1,	// (0x00054474) vkb2_area_bottom_pane_g3_ParamLimits

0x6ee1,	// (0x00054474) vkb2_area_bottom_pane_g3

0x0002,

0xfd73,	// (0x0005d306) vkb2_area_bottom_pane_g_ParamLimits

0xfd73,	// (0x0005d306) vkb2_area_bottom_pane_g

0x6f42,	// (0x000544d5) vkb2_top_cell_left_pane_ParamLimits

0x6f42,	// (0x000544d5) vkb2_top_cell_left_pane

0xded9,	// (0x0005b46c) vkb2_top_entry_pane_g1_ParamLimits

0xded9,	// (0x0005b46c) vkb2_top_entry_pane_g1

0xdee7,	// (0x0005b47a) vkb2_top_entry_pane_t1_ParamLimits

0xdee7,	// (0x0005b47a) vkb2_top_entry_pane_t1

0xdf19,	// (0x0005b4ac) vkb2_top_entry_pane_t2_ParamLimits

0xdf19,	// (0x0005b4ac) vkb2_top_entry_pane_t2

0xdf4b,	// (0x0005b4de) vkb2_top_entry_pane_t3_ParamLimits

0xdf4b,	// (0x0005b4de) vkb2_top_entry_pane_t3

0x0002,

0xfd7a,	// (0x0005d30d) vkb2_top_entry_pane_t_ParamLimits

0xfd7a,	// (0x0005d30d) vkb2_top_entry_pane_t

0x6f8f,	// (0x00054522) vkb2_top_grid_right_pane_g1_ParamLimits

0x6f8f,	// (0x00054522) vkb2_top_grid_right_pane_g1

0x6fa5,	// (0x00054538) vkb2_top_grid_right_pane_g2_ParamLimits

0x6fa5,	// (0x00054538) vkb2_top_grid_right_pane_g2

0x6fbd,	// (0x00054550) vkb2_top_grid_right_pane_g3_ParamLimits

0x6fbd,	// (0x00054550) vkb2_top_grid_right_pane_g3

0x6fd5,	// (0x00054568) vkb2_top_grid_right_pane_g4_ParamLimits

0x6fd5,	// (0x00054568) vkb2_top_grid_right_pane_g4

0x0003,

0xfd81,	// (0x0005d314) vkb2_top_grid_right_pane_g_ParamLimits

0xfd81,	// (0x0005d314) vkb2_top_grid_right_pane_g

0x6feb,	// (0x0005457e) vkb2_top_cell_left_pane_g1

0x7002,	// (0x00054595) vkb2_cell_keypad_pane_g1_ParamLimits

0x7002,	// (0x00054595) vkb2_cell_keypad_pane_g1

0xdf6f,	// (0x0005b502) vkb2_cell_keypad_pane_t1_ParamLimits

0xdf6f,	// (0x0005b502) vkb2_cell_keypad_pane_t1

0x7010,	// (0x000545a3) vkb2_cell_bottom_grid_pane_ParamLimits

0x7010,	// (0x000545a3) vkb2_cell_bottom_grid_pane

0x7049,	// (0x000545dc) vkb2_cell_bottom_grid_pane_g1

0xdb1a,	// (0x0005b0ad) aid_call2_pane_cp02

0xdb22,	// (0x0005b0b5) aid_call_pane_cp02

0xdb2a,	// (0x0005b0bd) clock_digital_number_pane_cp10

0xdb32,	// (0x0005b0c5) clock_digital_number_pane_cp11

0xdb3a,	// (0x0005b0cd) clock_digital_number_pane_cp12

0xdb42,	// (0x0005b0d5) clock_digital_number_pane_cp13

0xdb4a,	// (0x0005b0dd) clock_digital_separator_pane_cp10

0x8b8c,	// (0x0005611f) popup_clock_digital_analogue_window_cp2_g1

0x8b8c,	// (0x0005611f) popup_clock_digital_analogue_window_cp2_g2

0xdb52,	// (0x0005b0e5) popup_clock_digital_analogue_window_cp2_g3

0x8b8c,	// (0x0005611f) popup_clock_digital_analogue_window_cp2_g4

0xdb52,	// (0x0005b0e5) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd36,	// (0x0005d2c9) popup_clock_digital_analogue_window_cp2_g

0xdb5a,	// (0x0005b0ed) popup_clock_digital_analogue_window_cp2_t1

0xdb68,	// (0x0005b0fb) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd41,	// (0x0005d2d4) popup_clock_digital_analogue_window_cp2_t

0xc01c,	// (0x000595af) clock_digital_number_pane_cp10_g1

0xc01c,	// (0x000595af) clock_digital_number_pane_cp10_g2

0x0001,

0xfb1d,	// (0x0005d0b0) clock_digital_number_pane_cp10_g

0xc01c,	// (0x000595af) clock_digital_separator_pane_cp10_g1

0xc01c,	// (0x000595af) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb1d,	// (0x0005d0b0) clock_digital_separator_pane_cp10_g

0xd996,	// (0x0005af29) uniindi_top_pane_g3

0xd9a7,	// (0x0005af3a) uniindi_top_pane_g4

0x6e23,	// (0x000543b6) vkb2_row_keypad_pane_ParamLimits

0x6e23,	// (0x000543b6) vkb2_row_keypad_pane

0x7069,	// (0x000545fc) vkb2_cell_t_keypad_pane_ParamLimits

0x7069,	// (0x000545fc) vkb2_cell_t_keypad_pane

0x7079,	// (0x0005460c) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x7079,	// (0x0005460c) vkb2_cell_t_keypad_pane_cp08

0x708c,	// (0x0005461f) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x708c,	// (0x0005461f) vkb2_cell_t_keypad_pane_cp09

0x70a0,	// (0x00054633) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x70a0,	// (0x00054633) vkb2_cell_t_keypad_pane_cp01

0x70b1,	// (0x00054644) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x70b1,	// (0x00054644) vkb2_cell_t_keypad_pane_cp02

0x70c2,	// (0x00054655) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x70c2,	// (0x00054655) vkb2_cell_t_keypad_pane_cp03

0x70d3,	// (0x00054666) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x70d3,	// (0x00054666) vkb2_cell_t_keypad_pane_cp04

0x70e4,	// (0x00054677) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x70e4,	// (0x00054677) vkb2_cell_t_keypad_pane_cp05

0x70f5,	// (0x00054688) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x70f5,	// (0x00054688) vkb2_cell_t_keypad_pane_cp06

0x7106,	// (0x00054699) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x7106,	// (0x00054699) vkb2_cell_t_keypad_pane_cp07

0x7117,	// (0x000546aa) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x7117,	// (0x000546aa) vkb2_cell_t_keypad_pane_cp10

0x670c,	// (0x00053c9f) vkb2_cell_t_keypad_pane_g1

0xdf86,	// (0x0005b519) vkb2_cell_t_keypad_pane_t1

0x4675,	// (0x00051c08) popup_grid_graphic2_window

0xdf98,	// (0x0005b52b) aid_size_cell_graphic2_ParamLimits

0xdf98,	// (0x0005b52b) aid_size_cell_graphic2

0xdfd0,	// (0x0005b563) bg_popup_window_pane_cp21_ParamLimits

0xdfd0,	// (0x0005b563) bg_popup_window_pane_cp21

0xdfde,	// (0x0005b571) graphic2_pages_pane_ParamLimits

0xdfde,	// (0x0005b571) graphic2_pages_pane

0xe024,	// (0x0005b5b7) grid_graphic2_control_pane_ParamLimits

0xe024,	// (0x0005b5b7) grid_graphic2_control_pane

0xe062,	// (0x0005b5f5) grid_graphic2_pane_ParamLimits

0xe062,	// (0x0005b5f5) grid_graphic2_pane

0xe0d6,	// (0x0005b669) cell_graphic2_pane

0x4675,	// (0x00051c08) main_comp_mode_pane

0xd202,	// (0x0005a795) list_ai3_gene_pane_ParamLimits

0xd5d8,	// (0x0005ab6b) bg_popup_window_pane_cp19_ParamLimits

0xd5e4,	// (0x0005ab77) bg_touch_area_indi_pane_ParamLimits

0xd5e4,	// (0x0005ab77) bg_touch_area_indi_pane

0xd5fa,	// (0x0005ab8d) bg_touch_area_indi_pane_cp01_ParamLimits

0xd5fa,	// (0x0005ab8d) bg_touch_area_indi_pane_cp01

0xd610,	// (0x0005aba3) bg_touch_area_indi_pane_cp02_ParamLimits

0xd610,	// (0x0005aba3) bg_touch_area_indi_pane_cp02

0xd626,	// (0x0005abb9) bg_touch_area_indi_pane_cp03_ParamLimits

0xd626,	// (0x0005abb9) bg_touch_area_indi_pane_cp03

0xd640,	// (0x0005abd3) popup_slider_window_g1_ParamLimits

0xd65c,	// (0x0005abef) popup_slider_window_g2_ParamLimits

0xd678,	// (0x0005ac0b) popup_slider_window_g3_ParamLimits

0xfccb,	// (0x0005d25e) popup_slider_window_g_ParamLimits

0xd6de,	// (0x0005ac71) popup_slider_window_t1_ParamLimits

0xd752,	// (0x0005ace5) small_volume_slider_vertical_pane_ParamLimits

0xe0d6,	// (0x0005b669) cell_graphic2_pane_ParamLimits

0xe125,	// (0x0005b6b8) bg_button_pane_cp10_ParamLimits

0xe125,	// (0x0005b6b8) bg_button_pane_cp10

0xe138,	// (0x0005b6cb) bg_button_pane_cp11_ParamLimits

0xe138,	// (0x0005b6cb) bg_button_pane_cp11

0xe14b,	// (0x0005b6de) graphic2_pages_pane_g1_ParamLimits

0xe14b,	// (0x0005b6de) graphic2_pages_pane_g1

0xe166,	// (0x0005b6f9) graphic2_pages_pane_g2_ParamLimits

0xe166,	// (0x0005b6f9) graphic2_pages_pane_g2

0x0001,

0xfd8f,	// (0x0005d322) graphic2_pages_pane_g_ParamLimits

0xfd8f,	// (0x0005d322) graphic2_pages_pane_g

0xe17e,	// (0x0005b711) graphic2_pages_pane_t1_ParamLimits

0xe17e,	// (0x0005b711) graphic2_pages_pane_t1

0xe196,	// (0x0005b729) cell_graphic2_control_pane_ParamLimits

0xe196,	// (0x0005b729) cell_graphic2_control_pane

0xe1b4,	// (0x0005b747) cell_graphic2_pane_g1_ParamLimits

0xe1b4,	// (0x0005b747) cell_graphic2_pane_g1

0xe1c1,	// (0x0005b754) cell_graphic2_pane_g2_ParamLimits

0xe1c1,	// (0x0005b754) cell_graphic2_pane_g2

0xe1ce,	// (0x0005b761) cell_graphic2_pane_g3_ParamLimits

0xe1ce,	// (0x0005b761) cell_graphic2_pane_g3

0xe1db,	// (0x0005b76e) cell_graphic2_pane_g4_ParamLimits

0xe1db,	// (0x0005b76e) cell_graphic2_pane_g4

0xe1e8,	// (0x0005b77b) cell_graphic2_pane_g5_ParamLimits

0xe1e8,	// (0x0005b77b) cell_graphic2_pane_g5

0x0004,

0xfd94,	// (0x0005d327) cell_graphic2_pane_g_ParamLimits

0xfd94,	// (0x0005d327) cell_graphic2_pane_g

0xe201,	// (0x0005b794) cell_graphic2_pane_t1_ParamLimits

0xe201,	// (0x0005b794) cell_graphic2_pane_t1

0x9a73,	// (0x00057006) grid_highlight_pane_cp11_ParamLimits

0x9a73,	// (0x00057006) grid_highlight_pane_cp11

0x7b50,	// (0x000550e3) bg_button_pane_cp05

0xe237,	// (0x0005b7ca) cell_graphic2_control_pane_g1

0xc01c,	// (0x000595af) bg_touch_area_indi_pane_g1

0xe25f,	// (0x0005b7f2) aid_cmod_rocker_key_size

0xe269,	// (0x0005b7fc) aid_cmode_itu_key_size

0xe273,	// (0x0005b806) main_cmode_video_pane

0xe27d,	// (0x0005b810) main_comp_mode_itu_pane

0xe289,	// (0x0005b81c) main_comp_mode_rocker_pane

0xe295,	// (0x0005b828) cell_cmode_rocker_pane_ParamLimits

0xe295,	// (0x0005b828) cell_cmode_rocker_pane

0xe2a7,	// (0x0005b83a) cell_cmode_itu_pane_ParamLimits

0xe2a7,	// (0x0005b83a) cell_cmode_itu_pane

0x81f5,	// (0x00055788) bg_button_pane_cp06_ParamLimits

0x81f5,	// (0x00055788) bg_button_pane_cp06

0xc29a,	// (0x0005982d) cell_cmode_rocker_pane_g1_ParamLimits

0xc29a,	// (0x0005982d) cell_cmode_rocker_pane_g1

0xd7f6,	// (0x0005ad89) cell_cmode_rocker_pane_g2_ParamLimits

0xd7f6,	// (0x0005ad89) cell_cmode_rocker_pane_g2

0x0001,

0xfda4,	// (0x0005d337) cell_cmode_rocker_pane_g_ParamLimits

0xfda4,	// (0x0005d337) cell_cmode_rocker_pane_g

0x19d6,	// (0x0004ef69) bg_button_pane_cp07

0xe2bc,	// (0x0005b84f) cell_cmode_itu_pane_g1

0xe2c5,	// (0x0005b858) cell_cmode_itu_pane_t1

0xe2d3,	// (0x0005b866) cell_cmode_itu_pane_t2

0x0001,

0xfda9,	// (0x0005d33c) cell_cmode_itu_pane_t

0xda19,	// (0x0005afac) aid_touch_ctrl_left

0xda21,	// (0x0005afb4) aid_touch_ctrl_right

0x19d6,	// (0x0004ef69) compa_mode_pane

0xe2e1,	// (0x0005b874) aid_cmod_rocker_key_size_cp

0xe2eb,	// (0x0005b87e) aid_cmode_itu_key_size_cp

0xe2f5,	// (0x0005b888) compa_mode_pane_g1

0xe2fd,	// (0x0005b890) compa_mode_pane_g2

0xe305,	// (0x0005b898) compa_mode_pane_g3

0x0002,

0xfdae,	// (0x0005d341) compa_mode_pane_g

0xe30d,	// (0x0005b8a0) main_comp_mode_itu_pane_cp

0xe315,	// (0x0005b8a8) main_comp_mode_rocker_pane_cp

0xe31d,	// (0x0005b8b0) cell_cmode_itu_pane_cp_ParamLimits

0xe31d,	// (0x0005b8b0) cell_cmode_itu_pane_cp

0xe332,	// (0x0005b8c5) cell_cmode_rocker_pane_cp_ParamLimits

0xe332,	// (0x0005b8c5) cell_cmode_rocker_pane_cp

0x81f5,	// (0x00055788) bg_button_pane_cp06_cp_ParamLimits

0x81f5,	// (0x00055788) bg_button_pane_cp06_cp

0xc29a,	// (0x0005982d) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc29a,	// (0x0005982d) cell_cmode_rocker_pane_g1_cp

0xc01c,	// (0x000595af) cell_cmode_rocker_pane_g2_cp

0x19d6,	// (0x0004ef69) bg_button_pane_cp07_cp

0xaf3d,	// (0x000584d0) cell_cmode_itu_pane_g1_cp

0xe344,	// (0x0005b8d7) cell_cmode_itu_pane_t1_cp

0xe344,	// (0x0005b8d7) cell_cmode_itu_pane_t2_cp

0xaf2a,	// (0x000584bd) settings_code_pane_cp2

0x78c7,	// (0x00054e5a) bg_popup_window_pane_cp3_ParamLimits

0x7d50,	// (0x000552e3) heading_pane_cp3_ParamLimits

0x7d5f,	// (0x000552f2) listscroll_popup_graphic_pane_ParamLimits

0x64b5,	// (0x00053a48) fep_hwr_aid_pane_ParamLimits

0x6aea,	// (0x0005407d) aid_touch_sctrl_top_ParamLimits

0x6b05,	// (0x00054098) sctrl_sk_top_pane_g1_ParamLimits

0x670c,	// (0x00053c9f) sctrl_sk_top_pane_g2_ParamLimits

0xfce4,	// (0x0005d277) sctrl_sk_top_pane_g_ParamLimits

0x6b12,	// (0x000540a5) sctrl_sk_top_pane_t1_ParamLimits

0x6aea,	// (0x0005407d) aid_touch_sctrl_bottom_ParamLimits

0x6b12,	// (0x000540a5) sctrl_sk_bottom_pane_t1_ParamLimits

0xd962,	// (0x0005aef5) aid_area_touch_clock

0x6cf7,	// (0x0005428a) aid_vkb2_area_top_pane_cell_ParamLimits

0x6cf7,	// (0x0005428a) aid_vkb2_area_top_pane_cell

0x6e45,	// (0x000543d8) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x6e45,	// (0x000543d8) aid_vkb2_area_bottom_pane_cell

0xded1,	// (0x0005b464) popup_char_count_window

0xe352,	// (0x0005b8e5) popup_char_count_window_g1

0xe35b,	// (0x0005b8ee) popup_char_count_window_g2

0xe364,	// (0x0005b8f7) popup_char_count_window_g3

0x0002,

0xfdb5,	// (0x0005d348) popup_char_count_window_g

0xe36d,	// (0x0005b900) popup_char_count_window_t1

0x6bb9,	// (0x0005414c) popup_fep_char_preview_window_ParamLimits

0x6bb9,	// (0x0005414c) popup_fep_char_preview_window

0x6d15,	// (0x000542a8) vkb2_top_candi_pane_ParamLimits

0x6d15,	// (0x000542a8) vkb2_top_candi_pane

0xe37b,	// (0x0005b90e) cell_vkb2_top_candi_pane_ParamLimits

0xe37b,	// (0x0005b90e) cell_vkb2_top_candi_pane

0x712c,	// (0x000546bf) bg_popup_fep_char_preview_window_ParamLimits

0x712c,	// (0x000546bf) bg_popup_fep_char_preview_window

0x713a,	// (0x000546cd) popup_fep_char_preview_window_t1_ParamLimits

0x713a,	// (0x000546cd) popup_fep_char_preview_window_t1

0xe3c5,	// (0x0005b958) bg_popup_fep_char_preview_window_g1

0xe3cd,	// (0x0005b960) bg_popup_fep_char_preview_window_g2

0xe3d5,	// (0x0005b968) bg_popup_fep_char_preview_window_g3

0xe3dd,	// (0x0005b970) bg_popup_fep_char_preview_window_g4

0xe3e5,	// (0x0005b978) bg_popup_fep_char_preview_window_g5

0xe3ed,	// (0x0005b980) bg_popup_fep_char_preview_window_g6

0xe3f5,	// (0x0005b988) bg_popup_fep_char_preview_window_g7

0xe3fd,	// (0x0005b990) bg_popup_fep_char_preview_window_g8

0xe405,	// (0x0005b998) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdbc,	// (0x0005d34f) bg_popup_fep_char_preview_window_g

0x670c,	// (0x00053c9f) cell_vkb2_top_candi_pane_g1_ParamLimits

0x670c,	// (0x00053c9f) cell_vkb2_top_candi_pane_g1

0x671a,	// (0x00053cad) cell_vkb2_top_candi_pane_g2_ParamLimits

0x671a,	// (0x00053cad) cell_vkb2_top_candi_pane_g2

0xcacf,	// (0x0005a062) cell_vkb2_top_candi_pane_g3_ParamLimits

0xcacf,	// (0x0005a062) cell_vkb2_top_candi_pane_g3

0x717c,	// (0x0005470f) cell_vkb2_top_candi_pane_g4_ParamLimits

0x717c,	// (0x0005470f) cell_vkb2_top_candi_pane_g4

0xc765,	// (0x00059cf8) cell_vkb2_top_candi_pane_g5_ParamLimits

0xc765,	// (0x00059cf8) cell_vkb2_top_candi_pane_g5

0x719d,	// (0x00054730) cell_vkb2_top_candi_pane_g6_ParamLimits

0x719d,	// (0x00054730) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdd1,	// (0x0005d364) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdd1,	// (0x0005d364) cell_vkb2_top_candi_pane_g

0x71ab,	// (0x0005473e) cell_vkb2_top_candi_pane_t1

0x5f7f,	// (0x00053512) aid_size_touch_slider_mark_ParamLimits

0x5f7f,	// (0x00053512) aid_size_touch_slider_mark

0xe014,	// (0x0005b5a7) grid_graphic2_catg_pane_ParamLimits

0xe014,	// (0x0005b5a7) grid_graphic2_catg_pane

0xe0b2,	// (0x0005b645) popup_grid_graphic2_window_t1_ParamLimits

0xe0b2,	// (0x0005b645) popup_grid_graphic2_window_t1

0xe0c4,	// (0x0005b657) popup_grid_graphic2_window_t2_ParamLimits

0xe0c4,	// (0x0005b657) popup_grid_graphic2_window_t2

0x0001,

0xfd8a,	// (0x0005d31d) popup_grid_graphic2_window_t_ParamLimits

0xfd8a,	// (0x0005d31d) popup_grid_graphic2_window_t

0x7b50,	// (0x000550e3) bg_button_pane_cp05_ParamLimits

0xe237,	// (0x0005b7ca) cell_graphic2_control_pane_g1_ParamLimits

0xe40d,	// (0x0005b9a0) cell_graphic2_catg_pane_ParamLimits

0xe40d,	// (0x0005b9a0) cell_graphic2_catg_pane

0x19d6,	// (0x0004ef69) bg_button_pane_cp12

0xe41f,	// (0x0005b9b2) cell_graphic2_catg_pane_g1

0xd92e,	// (0x0005aec1) cell_tb_ext_pane_t1_ParamLimits

0x6f62,	// (0x000544f5) vkb2_top_cell_right_narrow_pane_ParamLimits

0x6f62,	// (0x000544f5) vkb2_top_cell_right_narrow_pane

0x6f7a,	// (0x0005450d) vkb2_top_cell_right_wide_pane_ParamLimits

0x6f7a,	// (0x0005450d) vkb2_top_cell_right_wide_pane

0x64a7,	// (0x00053a3a) bg_vkb2_func_pane_ParamLimits

0x64a7,	// (0x00053a3a) bg_vkb2_func_pane

0x6feb,	// (0x0005457e) vkb2_top_cell_left_pane_g1_ParamLimits

0x64a7,	// (0x00053a3a) bg_vkb2_fuc_pane_cp03_ParamLimits

0x64a7,	// (0x00053a3a) bg_vkb2_fuc_pane_cp03

0x7049,	// (0x000545dc) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x9a07,	// (0x00056f9a) bg_vkb2_func_pane_g1

0x9a0f,	// (0x00056fa2) bg_vkb2_func_pane_g2

0x9a1f,	// (0x00056fb2) bg_vkb2_func_pane_g3

0x9a17,	// (0x00056faa) bg_vkb2_func_pane_g4

0x9a27,	// (0x00056fba) bg_vkb2_func_pane_g5

0x9a2f,	// (0x00056fc2) bg_vkb2_func_pane_g6

0x9a37,	// (0x00056fca) bg_vkb2_func_pane_g7

0x9a3f,	// (0x00056fd2) bg_vkb2_func_pane_g8

0x99ff,	// (0x00056f92) bg_vkb2_func_pane_g9

0x0008,

0xfdde,	// (0x0005d371) bg_vkb2_func_pane_g

0x64a7,	// (0x00053a3a) bg_vkb2_fuc_pane_cp01_ParamLimits

0x64a7,	// (0x00053a3a) bg_vkb2_fuc_pane_cp01

0x6feb,	// (0x0005457e) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x6feb,	// (0x0005457e) vkb2_top_cell_right_wide_pane_g1

0x64a7,	// (0x00053a3a) bg_vkb2_fuc_pane_cp02_ParamLimits

0x64a7,	// (0x00053a3a) bg_vkb2_fuc_pane_cp02

0x71ca,	// (0x0005475d) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x71ca,	// (0x0005475d) vkb2_top_cell_right_narrow_pane_g1

0xd552,	// (0x0005aae5) aid_touch_area_decrease_ParamLimits

0xd552,	// (0x0005aae5) aid_touch_area_decrease

0xd576,	// (0x0005ab09) aid_touch_area_increase_ParamLimits

0xd576,	// (0x0005ab09) aid_touch_area_increase

0xd58e,	// (0x0005ab21) aid_touch_area_mute_ParamLimits

0xd58e,	// (0x0005ab21) aid_touch_area_mute

0xd5aa,	// (0x0005ab3d) aid_touch_area_slider_ParamLimits

0xd5aa,	// (0x0005ab3d) aid_touch_area_slider

0xd694,	// (0x0005ac27) popup_slider_window_g4_ParamLimits

0xd694,	// (0x0005ac27) popup_slider_window_g4

0xd6ac,	// (0x0005ac3f) popup_slider_window_g5_ParamLimits

0xd6ac,	// (0x0005ac3f) popup_slider_window_g5

0xd6ce,	// (0x0005ac61) popup_slider_window_g6_ParamLimits

0xd6ce,	// (0x0005ac61) popup_slider_window_g6

0xd70c,	// (0x0005ac9f) popup_slider_window_t2_ParamLimits

0xd70c,	// (0x0005ac9f) popup_slider_window_t2

0x0001,

0xfcd8,	// (0x0005d26b) popup_slider_window_t_ParamLimits

0xfcd8,	// (0x0005d26b) popup_slider_window_t

0xd724,	// (0x0005acb7) slider_pane_ParamLimits

0xd724,	// (0x0005acb7) slider_pane

0xe428,	// (0x0005b9bb) slider_pane_g1_ParamLimits

0xe428,	// (0x0005b9bb) slider_pane_g1

0xe43c,	// (0x0005b9cf) slider_pane_g2_ParamLimits

0xe43c,	// (0x0005b9cf) slider_pane_g2

0xe452,	// (0x0005b9e5) slider_pane_g3_ParamLimits

0xe452,	// (0x0005b9e5) slider_pane_g3

0x0003,

0xfdf1,	// (0x0005d384) slider_pane_g_ParamLimits

0xfdf1,	// (0x0005d384) slider_pane_g

0x5aad,	// (0x00053040) popup_tb_float_extension_window_ParamLimits

0x5aad,	// (0x00053040) popup_tb_float_extension_window

0xe47e,	// (0x0005ba11) aid_size_cell_tb_float_ext

0x19d6,	// (0x0004ef69) bg_popup_sub_window_cp28

0xe48a,	// (0x0005ba1d) grid_tb_float_ext_pane

0xe494,	// (0x0005ba27) cell_tb_float_ext_pane_ParamLimits

0xe494,	// (0x0005ba27) cell_tb_float_ext_pane

0xe4ae,	// (0x0005ba41) cell_tb_float_ext_pane_g1

0xe4b7,	// (0x0005ba4a) grid_highlight_pane_cp12

0x65f6,	// (0x00053b89) cell_last_hwr_side_pane_ParamLimits

0x65f6,	// (0x00053b89) cell_last_hwr_side_pane

0xc01c,	// (0x000595af) cell_last_hwr_side_pane_g1

0xe4c0,	// (0x0005ba53) cell_last_hwr_side_pane_g2

0x0001,

0xfdfa,	// (0x0005d38d) cell_last_hwr_side_pane_g

0x6f11,	// (0x000544a4) vkb2_area_bottom_space_btn_pane_ParamLimits

0x6f11,	// (0x000544a4) vkb2_area_bottom_space_btn_pane

0x670c,	// (0x00053c9f) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xdf86,	// (0x0005b519) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x71ab,	// (0x0005473e) cell_vkb2_top_candi_pane_t1_ParamLimits

0x71ea,	// (0x0005477d) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x71ea,	// (0x0005477d) vkb2_area_bottom_space_btn_pane_g1

0x7224,	// (0x000547b7) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x7224,	// (0x000547b7) vkb2_area_bottom_space_btn_pane_g2

0x725a,	// (0x000547ed) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x725a,	// (0x000547ed) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfdff,	// (0x0005d392) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfdff,	// (0x0005d392) vkb2_area_bottom_space_btn_pane_g

0x656a,	// (0x00053afd) cel_fep_hwr_func_pane_ParamLimits

0x656a,	// (0x00053afd) cel_fep_hwr_func_pane

0x65a6,	// (0x00053b39) cell_hwr_side_button_pane_ParamLimits

0x65a6,	// (0x00053b39) cell_hwr_side_button_pane

0xd962,	// (0x0005aef5) aid_area_touch_clock_ParamLimits

0x7b50,	// (0x000550e3) bg_uniindi_top_pane_ParamLimits

0xd974,	// (0x0005af07) uniindi_top_pane_g1_ParamLimits

0xd98a,	// (0x0005af1d) uniindi_top_pane_g2_ParamLimits

0xd996,	// (0x0005af29) uniindi_top_pane_g3_ParamLimits

0xd9a7,	// (0x0005af3a) uniindi_top_pane_g4_ParamLimits

0xfd10,	// (0x0005d2a3) uniindi_top_pane_g_ParamLimits

0xd9b4,	// (0x0005af47) uniindi_top_pane_t1_ParamLimits

0x7b50,	// (0x000550e3) bg_vkb2_func_pane_cp01_ParamLimits

0x7b50,	// (0x000550e3) bg_vkb2_func_pane_cp01

0xe4c9,	// (0x0005ba5c) cel_fep_hwr_func_pane_g1_ParamLimits

0xe4c9,	// (0x0005ba5c) cel_fep_hwr_func_pane_g1

0x7b50,	// (0x000550e3) bg_vkb2_func_pane_cp02_ParamLimits

0x7b50,	// (0x000550e3) bg_vkb2_func_pane_cp02

0xe4c9,	// (0x0005ba5c) cell_hwr_side_button_pane_g1_ParamLimits

0xe4c9,	// (0x0005ba5c) cell_hwr_side_button_pane_g1

0x9880,	// (0x00056e13) status_pane_g4_ParamLimits

0x9880,	// (0x00056e13) status_pane_g4

0x989a,	// (0x00056e2d) status_pane_t1

0xbd68,	// (0x000592fb) form2_midp_gauge_slider_cont_pane

0xbd70,	// (0x00059303) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbd82,	// (0x00059315) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbd94,	// (0x00059327) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfad0,	// (0x0005d063) form2_midp_gauge_slider_pane_t_ParamLimits

0xbda6,	// (0x00059339) form2_midp_slider_pane_ParamLimits

0x6b81,	// (0x00054114) aid_size_cell_func_vkb2_ParamLimits

0x6b81,	// (0x00054114) aid_size_cell_func_vkb2

0xe46a,	// (0x0005b9fd) slider_pane_g4_ParamLimits

0xe46a,	// (0x0005b9fd) slider_pane_g4

0x72a4,	// (0x00054837) form2_midp_gauge_slider_pane_t2_cp01

0x72b2,	// (0x00054845) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x72b2,	// (0x00054845) form2_midp_gauge_slider_pane_t3_cp01

0x72cf,	// (0x00054862) form2_midp_slider_pane_cp01

0x19d6,	// (0x0004ef69) navi_smil_pane

0xe502,	// (0x0005ba95) navi_smil_pane_g1

0xe50a,	// (0x0005ba9d) navi_smil_pane_t1

0xe4d7,	// (0x0005ba6a) form2_midp_slider_pane_g1

0xe4e0,	// (0x0005ba73) form2_midp_slider_pane_g2

0xe4e8,	// (0x0005ba7b) form2_midp_slider_pane_g3

0xe4d7,	// (0x0005ba6a) form2_midp_slider_pane_g4

0xe4f0,	// (0x0005ba83) form2_midp_slider_pane_g5

0x0004,

0xfe08,	// (0x0005d39b) form2_midp_slider_pane_g

0x7294,	// (0x00054827) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x7294,	// (0x00054827) vkb2_area_bottom_space_btn_pane_g4

0x96af,	// (0x00056c42) lc0_navi_pane_ParamLimits

0x96af,	// (0x00056c42) lc0_navi_pane

0x9725,	// (0x00056cb8) lc0_stat_indi_pane_ParamLimits

0x9725,	// (0x00056cb8) lc0_stat_indi_pane

0x973c,	// (0x00056ccf) ls0_title_pane_ParamLimits

0x973c,	// (0x00056ccf) ls0_title_pane

0x81f5,	// (0x00055788) bg_popup_sub_pane_cp14_ParamLimits

0xd949,	// (0x0005aedc) list_uniindi_pane_ParamLimits

0xd955,	// (0x0005aee8) uniindi_top_pane_ParamLimits

0xd9f1,	// (0x0005af84) list_single_uniindi_pane_g1_ParamLimits

0xda04,	// (0x0005af97) list_single_uniindi_pane_t1_ParamLimits

0x72d8,	// (0x0005486b) lc0_stat_clock_pane_ParamLimits

0x72d8,	// (0x0005486b) lc0_stat_clock_pane

0xe518,	// (0x0005baab) lc0_stat_indi_pane_g1_ParamLimits

0xe518,	// (0x0005baab) lc0_stat_indi_pane_g1

0xe525,	// (0x0005bab8) lc0_stat_indi_pane_g2_ParamLimits

0xe525,	// (0x0005bab8) lc0_stat_indi_pane_g2

0x0001,

0xfe13,	// (0x0005d3a6) lc0_stat_indi_pane_g_ParamLimits

0xfe13,	// (0x0005d3a6) lc0_stat_indi_pane_g

0x72e5,	// (0x00054878) lc0_uni_indicator_pane_ParamLimits

0x72e5,	// (0x00054878) lc0_uni_indicator_pane

0xe532,	// (0x0005bac5) ls0_title_pane_g1_ParamLimits

0xe532,	// (0x0005bac5) ls0_title_pane_g1

0xe546,	// (0x0005bad9) ls0_title_pane_t1_ParamLimits

0xe546,	// (0x0005bad9) ls0_title_pane_t1

0x72f2,	// (0x00054885) lc0_uni_indicator_pane_g1_ParamLimits

0x72f2,	// (0x00054885) lc0_uni_indicator_pane_g1

0xe57c,	// (0x0005bb0f) lc0_stat_clock_pane_t1

0x4675,	// (0x00051c08) main_ai5_pane

0xe592,	// (0x0005bb25) ai5_sk_pane_ParamLimits

0xe592,	// (0x0005bb25) ai5_sk_pane

0xe59f,	// (0x0005bb32) cell_ai5_widget_pane_ParamLimits

0xe59f,	// (0x0005bb32) cell_ai5_widget_pane

0xe668,	// (0x0005bbfb) aid_size_cell_widget_grid

0xe676,	// (0x0005bc09) bg_ai5_widget_pane_ParamLimits

0xe676,	// (0x0005bc09) bg_ai5_widget_pane

0xe6f2,	// (0x0005bc85) cell_ai5_widget_pane_g2

0xe706,	// (0x0005bc99) cell_ai5_widget_pane_g3

0xe720,	// (0x0005bcb3) cell_ai5_widget_pane_g4

0xe730,	// (0x0005bcc3) cell_ai5_widget_pane_g5

0xe740,	// (0x0005bcd3) cell_ai5_widget_pane_g6

0xe74c,	// (0x0005bcdf) cell_ai5_widget_pane_g7

0xe7b8,	// (0x0005bd4b) cell_ai5_widget_pane_t1_ParamLimits

0xe7b8,	// (0x0005bd4b) cell_ai5_widget_pane_t1

0xe7d5,	// (0x0005bd68) cell_ai5_widget_pane_t2_ParamLimits

0xe7d5,	// (0x0005bd68) cell_ai5_widget_pane_t2

0xe7ed,	// (0x0005bd80) cell_ai5_widget_pane_t3_ParamLimits

0xe7ed,	// (0x0005bd80) cell_ai5_widget_pane_t3

0xe805,	// (0x0005bd98) cell_ai5_widget_pane_t4_ParamLimits

0xe805,	// (0x0005bd98) cell_ai5_widget_pane_t4

0xe82b,	// (0x0005bdbe) cell_ai5_widget_pane_t5_ParamLimits

0xe82b,	// (0x0005bdbe) cell_ai5_widget_pane_t5

0xe84a,	// (0x0005bddd) cell_ai5_widget_pane_t6_ParamLimits

0xe84a,	// (0x0005bddd) cell_ai5_widget_pane_t6

0xe85c,	// (0x0005bdef) cell_ai5_widget_pane_t7_ParamLimits

0xe85c,	// (0x0005bdef) cell_ai5_widget_pane_t7

0xe87b,	// (0x0005be0e) cell_ai5_widget_pane_t8_ParamLimits

0xe87b,	// (0x0005be0e) cell_ai5_widget_pane_t8

0x000b,

0xfe33,	// (0x0005d3c6) cell_ai5_widget_pane_t_ParamLimits

0xfe33,	// (0x0005d3c6) cell_ai5_widget_pane_t

0xe8ff,	// (0x0005be92) grid_ai5_widget_pane

0x81f5,	// (0x00055788) highlight_cell_ai5_widget_pane_ParamLimits

0x81f5,	// (0x00055788) highlight_cell_ai5_widget_pane

0xe913,	// (0x0005bea6) ai5_sk_left_pane

0xe91d,	// (0x0005beb0) ai5_sk_middle_pane

0xe927,	// (0x0005beba) ai5_sk_right_pane

0xe931,	// (0x0005bec4) bg_ai5_widget_pane_g1_ParamLimits

0xe931,	// (0x0005bec4) bg_ai5_widget_pane_g1

0xe93d,	// (0x0005bed0) bg_ai5_widget_pane_g2_ParamLimits

0xe93d,	// (0x0005bed0) bg_ai5_widget_pane_g2

0xe949,	// (0x0005bedc) bg_ai5_widget_pane_g3_ParamLimits

0xe949,	// (0x0005bedc) bg_ai5_widget_pane_g3

0xe955,	// (0x0005bee8) bg_ai5_widget_pane_g4_ParamLimits

0xe955,	// (0x0005bee8) bg_ai5_widget_pane_g4

0xe961,	// (0x0005bef4) bg_ai5_widget_pane_g5_ParamLimits

0xe961,	// (0x0005bef4) bg_ai5_widget_pane_g5

0xe96d,	// (0x0005bf00) bg_ai5_widget_pane_g6_ParamLimits

0xe96d,	// (0x0005bf00) bg_ai5_widget_pane_g6

0xe979,	// (0x0005bf0c) bg_ai5_widget_pane_g7_ParamLimits

0xe979,	// (0x0005bf0c) bg_ai5_widget_pane_g7

0xe985,	// (0x0005bf18) bg_ai5_widget_pane_g8_ParamLimits

0xe985,	// (0x0005bf18) bg_ai5_widget_pane_g8

0xe991,	// (0x0005bf24) bg_ai5_widget_pane_g9_ParamLimits

0xe991,	// (0x0005bf24) bg_ai5_widget_pane_g9

0x0008,

0xfe4c,	// (0x0005d3df) bg_ai5_widget_pane_g_ParamLimits

0xfe4c,	// (0x0005d3df) bg_ai5_widget_pane_g

0xe9c3,	// (0x0005bf56) cell_shortcut_ai5_widget_pane_ParamLimits

0xe9c3,	// (0x0005bf56) cell_shortcut_ai5_widget_pane

0x91b1,	// (0x00056744) bg_cell_shortcut_ai5_widget_pane

0xe9d4,	// (0x0005bf67) cell_grid_ai5_widget_pane_g1

0x91b1,	// (0x00056744) highlight_cell_shortcut_ai5_widget_pane

0x9a07,	// (0x00056f9a) ai5_sk_left_pane_g1

0xe9dd,	// (0x0005bf70) ai5_sk_left_pane_g2

0xe9e5,	// (0x0005bf78) ai5_sk_left_pane_g3

0xe9ed,	// (0x0005bf80) ai5_sk_left_pane_g4

0x0003,

0xfe5f,	// (0x0005d3f2) ai5_sk_left_pane_g

0xe9f5,	// (0x0005bf88) ai5_sk_left_pane_t1

0x9a0f,	// (0x00056fa2) ai5_sk_right_pane_g1

0xea03,	// (0x0005bf96) ai5_sk_right_pane_g2

0xea0b,	// (0x0005bf9e) ai5_sk_right_pane_g3

0xea13,	// (0x0005bfa6) ai5_sk_right_pane_g4

0x0003,

0xfe68,	// (0x0005d3fb) ai5_sk_right_pane_g

0xea1b,	// (0x0005bfae) ai5_sk_right_pane_t1

0x9a0f,	// (0x00056fa2) ai5_sk_middle_pane_g1

0x9a07,	// (0x00056f9a) ai5_sk_middle_pane_g2

0x9a27,	// (0x00056fba) ai5_sk_middle_pane_g3

0xea0b,	// (0x0005bf9e) ai5_sk_middle_pane_g4

0xe9e5,	// (0x0005bf78) ai5_sk_middle_pane_g5

0xea29,	// (0x0005bfbc) ai5_sk_middle_pane_g6

0xea31,	// (0x0005bfc4) ai5_sk_middle_pane_g7

0x0006,

0xfe71,	// (0x0005d404) ai5_sk_middle_pane_g

0x9535,	// (0x00056ac8) aid_touch_area_size_lc0_ParamLimits

0x9535,	// (0x00056ac8) aid_touch_area_size_lc0

0x673b,	// (0x00053cce) cell_hwr_candidate_pane_t1_ParamLimits

0x9551,	// (0x00056ae4) aid_touch_navi_pane

0x982a,	// (0x00056dbd) status_dt_navi_pane_ParamLimits

0x982a,	// (0x00056dbd) status_dt_navi_pane

0x9837,	// (0x00056dca) status_dt_sta_pane_ParamLimits

0x9837,	// (0x00056dca) status_dt_sta_pane

0xea39,	// (0x0005bfcc) dt_sta_controll_pane

0xea46,	// (0x0005bfd9) dt_sta_indi_pane

0xea57,	// (0x0005bfea) dt_sta_title_pane

0x7b50,	// (0x000550e3) bg_dt_sta_indi_pane_ParamLimits

0x7b50,	// (0x000550e3) bg_dt_sta_indi_pane

0xea6a,	// (0x0005bffd) dt_sta_battery_pane

0xea72,	// (0x0005c005) dt_sta_indi_pane_g1

0xea7b,	// (0x0005c00e) dt_sta_indi_pane_g2

0xea84,	// (0x0005c017) dt_sta_indi_pane_g3

0x0002,

0xfe80,	// (0x0005d413) dt_sta_indi_pane_g

0xea8d,	// (0x0005c020) dt_sta_signal_pane

0x81f5,	// (0x00055788) bg_dt_sta_title_pane_ParamLimits

0x81f5,	// (0x00055788) bg_dt_sta_title_pane

0xea96,	// (0x0005c029) dt_sta_title_pane_g1

0xea9e,	// (0x0005c031) dt_sta_title_pane_t1_ParamLimits

0xea9e,	// (0x0005c031) dt_sta_title_pane_t1

0x19d6,	// (0x0004ef69) bg_dt_sta_control_pane

0xeab3,	// (0x0005c046) dt_sta_controll_pane_g1

0xeabc,	// (0x0005c04f) bg_dt_sta_title_pane_g1

0xeac5,	// (0x0005c058) bg_dt_sta_title_pane_g2

0xeace,	// (0x0005c061) bg_dt_sta_title_pane_g3

0x0002,

0xfe87,	// (0x0005d41a) bg_dt_sta_title_pane_g

0xc01c,	// (0x000595af) bg_dt_sta_indi_pane_g1

0xead7,	// (0x0005c06a) dt_sta_signal_pane_g1

0xeadf,	// (0x0005c072) dt_sta_signal_pane_g2

0x0001,

0xfe8e,	// (0x0005d421) dt_sta_signal_pane_g

0xeae7,	// (0x0005c07a) dt_sta_battery_pane_g1

0xeaf0,	// (0x0005c083) dt_sta_battery_pane_t1

0xc01c,	// (0x000595af) bg_dt_sta_control_pane_g1

0x8cb7,	// (0x0005624a) fep_china_uni_eep_pane

0x8cbf,	// (0x00056252) fep_china_uni_entry_pane_ParamLimits

0x8ccf,	// (0x00056262) popup_fep_china_uni_window_g1_ParamLimits

0x8cdf,	// (0x00056272) popup_fep_china_uni_window_g2_ParamLimits

0x8cdf,	// (0x00056272) popup_fep_china_uni_window_g2

0x0001,

0xf6fb,	// (0x0005cc8e) popup_fep_china_uni_window_g_ParamLimits

0xf6fb,	// (0x0005cc8e) popup_fep_china_uni_window_g

0xeaff,	// (0x0005c092) fep_china_uni_eep_pane_g1

0xeb07,	// (0x0005c09a) fep_china_uni_eep_pane_t1

0xe4f9,	// (0x0005ba8c) aid_touch_area_size_smil_player

0x96a7,	// (0x00056c3a) lc0_clock_pane

0x988e,	// (0x00056e21) status_pane_g5_ParamLimits

0x988e,	// (0x00056e21) status_pane_g5

0x5772,	// (0x00052d05) popup_keymap_window

0x984c,	// (0x00056ddf) status_icon_pane

0xe706,	// (0x0005bc99) cell_ai5_widget_pane_g3_ParamLimits

0xe720,	// (0x0005bcb3) cell_ai5_widget_pane_g4_ParamLimits

0xe730,	// (0x0005bcc3) cell_ai5_widget_pane_g5_ParamLimits

0xe758,	// (0x0005bceb) cell_ai5_widget_pane_g8_ParamLimits

0xe758,	// (0x0005bceb) cell_ai5_widget_pane_g8

0xe76c,	// (0x0005bcff) cell_ai5_widget_pane_g9_ParamLimits

0xe76c,	// (0x0005bcff) cell_ai5_widget_pane_g9

0xe780,	// (0x0005bd13) cell_ai5_widget_pane_g10_ParamLimits

0xe780,	// (0x0005bd13) cell_ai5_widget_pane_g10

0xeb16,	// (0x0005c0a9) status_icon_pane_g1

0x19d6,	// (0x0004ef69) bg_popup_sub_pane_cp13

0xeb1e,	// (0x0005c0b1) popup_keymap_window_t1

0x9486,	// (0x00056a19) control_pane_g6_ParamLimits

0x9486,	// (0x00056a19) control_pane_g6

0x9493,	// (0x00056a26) control_pane_g7_ParamLimits

0x9493,	// (0x00056a26) control_pane_g7

0x94a0,	// (0x00056a33) control_pane_g8_ParamLimits

0x94a0,	// (0x00056a33) control_pane_g8

0xea39,	// (0x0005bfcc) dt_sta_controll_pane_ParamLimits

0xea46,	// (0x0005bfd9) dt_sta_indi_pane_ParamLimits

0xea57,	// (0x0005bfea) dt_sta_title_pane_ParamLimits

0x808c,	// (0x0005561f) aid_size_touch_scroll_bar_cale

0x474e,	// (0x00051ce1) popup_discreet_window_ParamLimits

0x474e,	// (0x00051ce1) popup_discreet_window

0x47d6,	// (0x00051d69) popup_sk_window

0xa08e,	// (0x00057621) bg_popup_sub_pane_cp28_ParamLimits

0xa08e,	// (0x00057621) bg_popup_sub_pane_cp28

0xeb2c,	// (0x0005c0bf) popup_discreet_window_g1_ParamLimits

0xeb2c,	// (0x0005c0bf) popup_discreet_window_g1

0xeb4c,	// (0x0005c0df) popup_discreet_window_t1_ParamLimits

0xeb4c,	// (0x0005c0df) popup_discreet_window_t1

0xeb6a,	// (0x0005c0fd) popup_discreet_window_t2_ParamLimits

0xeb6a,	// (0x0005c0fd) popup_discreet_window_t2

0x0002,

0xfe93,	// (0x0005d426) popup_discreet_window_t_ParamLimits

0xfe93,	// (0x0005d426) popup_discreet_window_t

0x7306,	// (0x00054899) popup_sk_window_g1

0x7310,	// (0x000548a3) popup_sk_window_g2

0x0001,

0xfe9a,	// (0x0005d42d) popup_sk_window_g

0x7318,	// (0x000548ab) popup_sk_window_t1

0x7326,	// (0x000548b9) popup_sk_window_t1_copy1

0xe6f2,	// (0x0005bc85) cell_ai5_widget_pane_g2_ParamLimits

0xe88d,	// (0x0005be20) cell_ai5_widget_pane_t9_ParamLimits

0xe88d,	// (0x0005be20) cell_ai5_widget_pane_t9

0x19d6,	// (0x0004ef69) main_fep_fshwr2_pane

0x7334,	// (0x000548c7) aid_fshwr2_btn_pane

0x7344,	// (0x000548d7) aid_fshwr2_syb_pane

0x7358,	// (0x000548eb) aid_fshwr2_txt_pane

0x7368,	// (0x000548fb) fshwr2_func_candi_pane

0x738c,	// (0x0005491f) fshwr2_hwr_syb_pane

0x73a6,	// (0x00054939) fshwr2_icf_pane

0x4675,	// (0x00051c08) fshwr2_icf_bg_pane

0x73d4,	// (0x00054967) fshwr2_icf_pane_t1_ParamLimits

0x73d4,	// (0x00054967) fshwr2_icf_pane_t1

0x8b8c,	// (0x0005611f) fshwr2_func_candi_pane_g1

0xebbc,	// (0x0005c14f) fshwr2_func_candi_row_pane_ParamLimits

0xebbc,	// (0x0005c14f) fshwr2_func_candi_row_pane

0x73ec,	// (0x0005497f) cell_fshwr2_syb_pane_ParamLimits

0x73ec,	// (0x0005497f) cell_fshwr2_syb_pane

0x740f,	// (0x000549a2) fshwr2_hwr_syb_pane_g1_ParamLimits

0x740f,	// (0x000549a2) fshwr2_hwr_syb_pane_g1

0x4675,	// (0x00051c08) bg_popup_call_pane_cp01

0x741d,	// (0x000549b0) fshwr2_func_candi_cell_pane_ParamLimits

0x741d,	// (0x000549b0) fshwr2_func_candi_cell_pane

0xa702,	// (0x00057c95) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xa702,	// (0x00057c95) fshwr2_func_candi_cell_bg_pane

0x7468,	// (0x000549fb) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x7468,	// (0x000549fb) fshwr2_func_candi_cell_pane_g1

0x7493,	// (0x00054a26) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x7493,	// (0x00054a26) fshwr2_func_candi_cell_pane_t1

0x4675,	// (0x00051c08) bg_button_pane_cp08

0x94d5,	// (0x00056a68) cell_fshwr2_syb_bg_pane

0x74a6,	// (0x00054a39) cell_fshwr2_syb_bg_pane_g1

0x74ba,	// (0x00054a4d) cell_fshwr2_syb_bg_pane_t1

0x81f5,	// (0x00055788) main_tmo_pane

0xab9d,	// (0x00058130) uni_indicator_pane_g1_ParamLimits

0xabb3,	// (0x00058146) uni_indicator_pane_g2_ParamLimits

0xabc9,	// (0x0005815c) uni_indicator_pane_g3_ParamLimits

0xabdc,	// (0x0005816f) uni_indicator_pane_g4_ParamLimits

0xabdc,	// (0x0005816f) uni_indicator_pane_g4

0xabf0,	// (0x00058183) uni_indicator_pane_g5_ParamLimits

0xabf0,	// (0x00058183) uni_indicator_pane_g5

0xabf0,	// (0x00058183) uni_indicator_pane_g6_ParamLimits

0xabf0,	// (0x00058183) uni_indicator_pane_g6

0xf8fa,	// (0x0005ce8d) uni_indicator_pane_g_ParamLimits

0xd52e,	// (0x0005aac1) popup_tmo_note_window_ParamLimits

0xd52e,	// (0x0005aac1) popup_tmo_note_window

0x6b63,	// (0x000540f6) fshwr2_bg_pane

0x7484,	// (0x00054a17) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x7484,	// (0x00054a17) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe9f,	// (0x0005d432) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe9f,	// (0x0005d432) fshwr2_func_candi_cell_pane_g

0x66f4,	// (0x00053c87) bg_popup_window_pane_cp01

0x74d0,	// (0x00054a63) bg_popup_window_pane_g1_cp01

0xebe3,	// (0x0005c176) bg_popup_window_pane_cp22_ParamLimits

0xebe3,	// (0x0005c176) bg_popup_window_pane_cp22

0xebf1,	// (0x0005c184) listscroll_tmo_link_pane_ParamLimits

0xebf1,	// (0x0005c184) listscroll_tmo_link_pane

0xec31,	// (0x0005c1c4) popup_tmo_note_window_g1_ParamLimits

0xec31,	// (0x0005c1c4) popup_tmo_note_window_g1

0xec3e,	// (0x0005c1d1) tmo_note_info_pane_ParamLimits

0xec3e,	// (0x0005c1d1) tmo_note_info_pane

0xec58,	// (0x0005c1eb) list_tmo_note_info_pane_g1_ParamLimits

0xec58,	// (0x0005c1eb) list_tmo_note_info_pane_g1

0xec6f,	// (0x0005c202) list_tmo_note_info_pane_g2_ParamLimits

0xec6f,	// (0x0005c202) list_tmo_note_info_pane_g2

0x0001,

0xfea4,	// (0x0005d437) list_tmo_note_info_pane_g_ParamLimits

0xfea4,	// (0x0005d437) list_tmo_note_info_pane_g

0xec8b,	// (0x0005c21e) list_tmo_note_info_text_pane_ParamLimits

0xec8b,	// (0x0005c21e) list_tmo_note_info_text_pane

0xed0c,	// (0x0005c29f) list_tmo_link_pane

0xed19,	// (0x0005c2ac) scroll_pane_cp20

0xed26,	// (0x0005c2b9) list_single_tmo_link_pane_ParamLimits

0xed26,	// (0x0005c2b9) list_single_tmo_link_pane

0xed36,	// (0x0005c2c9) list_single_tmo_link_pane_t1

0xed44,	// (0x0005c2d7) list_tmo_note_info_text_pane_t1_ParamLimits

0xed44,	// (0x0005c2d7) list_tmo_note_info_text_pane_t1

0x85b3,	// (0x00055b46) aid_size_touch_scroll_bar_cp01_ParamLimits

0x85b3,	// (0x00055b46) aid_size_touch_scroll_bar_cp01

0x4e35,	// (0x000523c8) aid_size_touch_slider_marker

0x47be,	// (0x00051d51) popup_settings_window_ParamLimits

0x47be,	// (0x00051d51) popup_settings_window

0x55f5,	// (0x00052b88) popup_candi_list_indi_window

0x9551,	// (0x00056ae4) aid_touch_navi_pane_ParamLimits

0x6abe,	// (0x00054051) rs_clock_indi_pane

0x6ac7,	// (0x0005405a) sctrl_sk_bottom_pane_ParamLimits

0x6ad8,	// (0x0005406b) sctrl_sk_top_pane_ParamLimits

0x6bd3,	// (0x00054166) popup_fep_tooltip_window

0xe668,	// (0x0005bbfb) aid_size_cell_widget_grid_ParamLimits

0xe6dd,	// (0x0005bc70) cell_ai5_widget_pane_g1_ParamLimits

0xe6dd,	// (0x0005bc70) cell_ai5_widget_pane_g1

0xe740,	// (0x0005bcd3) cell_ai5_widget_pane_g6_ParamLimits

0xe74c,	// (0x0005bcdf) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe18,	// (0x0005d3ab) cell_ai5_widget_pane_g_ParamLimits

0xfe18,	// (0x0005d3ab) cell_ai5_widget_pane_g

0xe8bc,	// (0x0005be4f) cell_ai5_widget_pane_t10_ParamLimits

0xe8bc,	// (0x0005be4f) cell_ai5_widget_pane_t10

0xe8ff,	// (0x0005be92) grid_ai5_widget_pane_ParamLimits

0xe99d,	// (0x0005bf30) cell_contacts_ai5_widget_pane_ParamLimits

0xe99d,	// (0x0005bf30) cell_contacts_ai5_widget_pane

0xeb7f,	// (0x0005c112) popup_discreet_window_t3_ParamLimits

0xeb7f,	// (0x0005c112) popup_discreet_window_t3

0x73be,	// (0x00054951) popup_fshwr2_char_preview_window_ParamLimits

0x73be,	// (0x00054951) popup_fshwr2_char_preview_window

0xeca9,	// (0x0005c23c) tmo_note_info_pane_t1

0xecbe,	// (0x0005c251) tmo_note_info_pane_t2

0xecd3,	// (0x0005c266) tmo_note_info_pane_t3

0xece8,	// (0x0005c27b) tmo_note_info_pane_t4

0xecfa,	// (0x0005c28d) tmo_note_info_pane_t5

0x0004,

0xfea9,	// (0x0005d43c) tmo_note_info_pane_t

0xed0c,	// (0x0005c29f) list_tmo_link_pane_ParamLimits

0xed19,	// (0x0005c2ac) scroll_pane_cp20_ParamLimits

0x4675,	// (0x00051c08) bg_popup_fep_char_preview_window_cp01

0xed5d,	// (0x0005c2f0) popup_fshwr2_char_preview_window_t1

0xed6b,	// (0x0005c2fe) popup_candi_list_indi_window_g1

0xed74,	// (0x0005c307) bg_cell_contacts_ai5_widget_pane

0xed80,	// (0x0005c313) cell_contacts_ai5_widget_pane_g1

0xc6ba,	// (0x00059c4d) cell_contacts_ai5_widget_pane_g2

0xed95,	// (0x0005c328) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeb4,	// (0x0005d447) cell_contacts_ai5_widget_pane_g

0xeda1,	// (0x0005c334) cell_contacts_ai5_widget_pane_t1

0x81f5,	// (0x00055788) highlight_cell_shortcut_ai5_widget_pane_cp01

0xee18,	// (0x0005c3ab) settings_container_pane

0x91b1,	// (0x00056744) listscroll_set_pane_copy1

0xb701,	// (0x00058c94) scroll_pane_cp121_copy1

0x9e2b,	// (0x000573be) set_content_pane_copy1

0xee24,	// (0x0005c3b7) aid_height_set_list_copy1_ParamLimits

0xee24,	// (0x0005c3b7) aid_height_set_list_copy1

0xadd8,	// (0x0005836b) aid_size_parent_copy1_ParamLimits

0xadd8,	// (0x0005836b) aid_size_parent_copy1

0xee30,	// (0x0005c3c3) button_value_adjust_pane_cp6_copy1_ParamLimits

0xee30,	// (0x0005c3c3) button_value_adjust_pane_cp6_copy1

0x94d5,	// (0x00056a68) list_highlight_pane_cp2_copy1_ParamLimits

0x94d5,	// (0x00056a68) list_highlight_pane_cp2_copy1

0xee44,	// (0x0005c3d7) list_set_pane_copy1_ParamLimits

0xee44,	// (0x0005c3d7) list_set_pane_copy1

0xedb3,	// (0x0005c346) main_pane_set_t1_copy1_ParamLimits

0xedb3,	// (0x0005c346) main_pane_set_t1_copy1

0xeded,	// (0x0005c380) main_pane_set_t2_copy1_ParamLimits

0xeded,	// (0x0005c380) main_pane_set_t2_copy1

0xeef1,	// (0x0005c484) main_pane_set_t3_copy1

0xeeff,	// (0x0005c492) main_pane_set_t4_copy1

0xee0c,	// (0x0005c39f) set_content_pane_g1_copy1_ParamLimits

0xee0c,	// (0x0005c39f) set_content_pane_g1_copy1

0xef0d,	// (0x0005c4a0) setting_code_pane_copy1

0xef15,	// (0x0005c4a8) setting_slider_graphic_pane_copy1

0xef15,	// (0x0005c4a8) setting_slider_pane_copy1

0xef1d,	// (0x0005c4b0) setting_text_pane_copy1

0xef1d,	// (0x0005c4b0) setting_volume_pane_copy1

0xef0d,	// (0x0005c4a0) settings_code_pane_cp2_copy1

0xef25,	// (0x0005c4b8) settings_code_pane_cp_copy1_ParamLimits

0xef25,	// (0x0005c4b8) settings_code_pane_cp_copy1

0x74d9,	// (0x00054a6c) volume_set_pane_copy1

0xef39,	// (0x0005c4cc) volume_set_pane_g10_copy1

0xef41,	// (0x0005c4d4) volume_set_pane_g1_copy1

0xef49,	// (0x0005c4dc) volume_set_pane_g2_copy1

0xef51,	// (0x0005c4e4) volume_set_pane_g3_copy1

0xef59,	// (0x0005c4ec) volume_set_pane_g4_copy1

0xef61,	// (0x0005c4f4) volume_set_pane_g5_copy1

0xef69,	// (0x0005c4fc) volume_set_pane_g6_copy1

0xef71,	// (0x0005c504) volume_set_pane_g7_copy1

0xef79,	// (0x0005c50c) volume_set_pane_g8_copy1

0xef81,	// (0x0005c514) volume_set_pane_g9_copy1

0x78c7,	// (0x00054e5a) bg_set_opt_pane_cp_copy1_ParamLimits

0x78c7,	// (0x00054e5a) bg_set_opt_pane_cp_copy1

0x74e1,	// (0x00054a74) setting_slider_pane_t1_copy1_ParamLimits

0x74e1,	// (0x00054a74) setting_slider_pane_t1_copy1

0x7500,	// (0x00054a93) setting_slider_pane_t2_copy1_ParamLimits

0x7500,	// (0x00054a93) setting_slider_pane_t2_copy1

0x751a,	// (0x00054aad) setting_slider_pane_t3_copy1_ParamLimits

0x751a,	// (0x00054aad) setting_slider_pane_t3_copy1

0x7532,	// (0x00054ac5) slider_set_pane_copy1_ParamLimits

0x7532,	// (0x00054ac5) slider_set_pane_copy1

0x8241,	// (0x000557d4) set_opt_bg_pane_g1_copy2

0x8249,	// (0x000557dc) set_opt_bg_pane_g2_copy2

0xef89,	// (0x0005c51c) set_opt_bg_pane_g3_copy2

0x8259,	// (0x000557ec) set_opt_bg_pane_g4_copy2

0x8261,	// (0x000557f4) set_opt_bg_pane_g5_copy2

0x8269,	// (0x000557fc) set_opt_bg_pane_g6_copy2

0xef93,	// (0x0005c526) set_opt_bg_pane_g7_copy2

0xef9b,	// (0x0005c52e) set_opt_bg_pane_g8_copy2

0xefa5,	// (0x0005c538) set_opt_bg_pane_g9_copy2

0x7548,	// (0x00054adb) aid_size_touch_slider_mark_copy1_ParamLimits

0x7548,	// (0x00054adb) aid_size_touch_slider_mark_copy1

0xefaf,	// (0x0005c542) slider_set_pane_g1_copy1

0x755c,	// (0x00054aef) slider_set_pane_g2_copy1

0x5f9f,	// (0x00053532) slider_set_pane_g3_copy1_ParamLimits

0x5f9f,	// (0x00053532) slider_set_pane_g3_copy1

0x5fb3,	// (0x00053546) slider_set_pane_g4_copy1_ParamLimits

0x5fb3,	// (0x00053546) slider_set_pane_g4_copy1

0x5fcb,	// (0x0005355e) slider_set_pane_g5_copy1_ParamLimits

0x5fcb,	// (0x0005355e) slider_set_pane_g5_copy1

0x5f9f,	// (0x00053532) slider_set_pane_g6_copy1_ParamLimits

0x5f9f,	// (0x00053532) slider_set_pane_g6_copy1

0x7564,	// (0x00054af7) slider_set_pane_g7_copy1_ParamLimits

0x7564,	// (0x00054af7) slider_set_pane_g7_copy1

0x19ea,	// (0x0004ef7d) bg_set_opt_pane_cp2_copy1

0xefb8,	// (0x0005c54b) setting_slider_graphic_pane_g1_copy1

0xefc1,	// (0x0005c554) setting_slider_graphic_pane_t1_copy1

0xefd1,	// (0x0005c564) setting_slider_graphic_pane_t2_copy1

0xefe1,	// (0x0005c574) slider_set_pane_cp_copy1

0xeff1,	// (0x0005c584) input_focus_pane_cp1_copy1

0xeffa,	// (0x0005c58d) list_set_text_pane_copy1

0xf002,	// (0x0005c595) setting_text_pane_g1_copy1

0x858d,	// (0x00055b20) set_text_pane_t1_copy1

0xeff1,	// (0x0005c584) input_focus_pane_cp2_copy1

0xf002,	// (0x0005c595) setting_code_pane_g1_copy1

0xf00b,	// (0x0005c59e) setting_code_pane_t1_copy1

0xb529,	// (0x00058abc) list_set_graphic_pane_copy1

0x19ea,	// (0x0004ef7d) bg_set_opt_pane_cp4_copy1

0x8eb6,	// (0x00056449) list_set_graphic_pane_g1_copy1_ParamLimits

0x8eb6,	// (0x00056449) list_set_graphic_pane_g1_copy1

0xf019,	// (0x0005c5ac) list_set_graphic_pane_g2_copy1

0x8ece,	// (0x00056461) list_set_graphic_pane_t1_copy1_ParamLimits

0x8ece,	// (0x00056461) list_set_graphic_pane_t1_copy1

0xc01c,	// (0x000595af) rs_clock_indi_pane_g1

0xf021,	// (0x0005c5b4) rs_clock_indi_pane_t1

0xf02f,	// (0x0005c5c2) rs_indi_pane

0xf037,	// (0x0005c5ca) rs_indi_pane_g1

0xf040,	// (0x0005c5d3) rs_indi_pane_g2

0xf049,	// (0x0005c5dc) rs_indi_pane_g3

0x0002,

0xfebb,	// (0x0005d44e) rs_indi_pane_g

0x91b1,	// (0x00056744) bg_popup_preview_window_pane_cp03

0xf052,	// (0x0005c5e5) popup_fep_tooltip_window_t1

0xcccd,	// (0x0005a260) popup_note2_window_g2_ParamLimits

0xcccd,	// (0x0005a260) popup_note2_window_g2

0x0001,

0xfc48,	// (0x0005d1db) popup_note2_window_g_ParamLimits

0xfc48,	// (0x0005d1db) popup_note2_window_g

0xd1c8,	// (0x0005a75b) bg_popup_sub_pane_cp11_ParamLimits

0xd1d5,	// (0x0005a768) cell_ai3_links_pane_g1_ParamLimits

0xd1ec,	// (0x0005a77f) cell_ai3_links_pane_t1

0x858d,	// (0x00055b20) set_text_pane_t1_copy1_ParamLimits

0x90c1,	// (0x00056654) cell_graphic_popup_pane_cp2_ParamLimits

0x90c1,	// (0x00056654) cell_graphic_popup_pane_cp2

0xf060,	// (0x0005c5f3) cell_graphic_popup_pane_g1_cp2

0x7e9f,	// (0x00055432) cell_graphic_popup_pane_g2_cp2

0xf068,	// (0x0005c5fb) cell_graphic_popup_pane_g3_cp2

0xf070,	// (0x0005c603) cell_graphic_popup_pane_t2_cp2

0x7eb0,	// (0x00055443) grid_highlight_pane_cp3_cp2

0x88a7,	// (0x00055e3a) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x81f5,	// (0x00055788) main_tmo_pane_ParamLimits

0xd522,	// (0x0005aab5) popup_tmo_big_image_note_window

0xe6cc,	// (0x0005bc5f) cell_ai5_widget_list_pane

0xe6d4,	// (0x0005bc67) cell_ai5_widget_lrg_icon_pane

0xeca9,	// (0x0005c23c) tmo_note_info_pane_t1_ParamLimits

0xecbe,	// (0x0005c251) tmo_note_info_pane_t2_ParamLimits

0xecd3,	// (0x0005c266) tmo_note_info_pane_t3_ParamLimits

0xece8,	// (0x0005c27b) tmo_note_info_pane_t4_ParamLimits

0xecfa,	// (0x0005c28d) tmo_note_info_pane_t5_ParamLimits

0xfea9,	// (0x0005d43c) tmo_note_info_pane_t_ParamLimits

0xee18,	// (0x0005c3ab) settings_container_pane_ParamLimits

0xefe9,	// (0x0005c57c) indicator_popup_pane_cp5

0xefe9,	// (0x0005c57c) indicator_popup_pane_cp6

0xb529,	// (0x00058abc) list_set_graphic_pane_copy1_ParamLimits

0x19d6,	// (0x0004ef69) bg_popup_window_pane_cp23

0xf07e,	// (0x0005c611) popup_tmo_big_image_note_window_g1

0xf088,	// (0x0005c61b) popup_tmo_big_image_note_window_t1

0xf098,	// (0x0005c62b) popup_tmo_big_image_note_window_t2

0xf0a8,	// (0x0005c63b) popup_tmo_big_image_note_window_t3

0x0002,

0xfec2,	// (0x0005d455) popup_tmo_big_image_note_window_t

0xc01c,	// (0x000595af) cell_ai5_widget_lrg_icon_pane_g1

0xf0b8,	// (0x0005c64b) cell_ai5_widget_lrg_icon_pane_t1

0xf0c6,	// (0x0005c659) cell_ai5_widget_list_row_pane_ParamLimits

0xf0c6,	// (0x0005c659) cell_ai5_widget_list_row_pane

0xf0dd,	// (0x0005c670) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf0dd,	// (0x0005c670) cell_ai5_widget_list_row_pane_g1

0xf0ea,	// (0x0005c67d) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf0ea,	// (0x0005c67d) cell_ai5_widget_list_row_pane_t1

0xf115,	// (0x0005c6a8) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf115,	// (0x0005c6a8) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfec9,	// (0x0005d45c) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfec9,	// (0x0005d45c) cell_ai5_widget_list_row_pane_t

0x4675,	// (0x00051c08) main_fep_vtchi_ss_pane

0xf165,	// (0x0005c6f8) popup_fep_char_pre_window

0xf16d,	// (0x0005c700) popup_fep_ituss_window

0xf19f,	// (0x0005c732) popup_fep_vkbss_window

0x94d5,	// (0x00056a68) grid_vkbss_keypad_pane_ParamLimits

0x94d5,	// (0x00056a68) grid_vkbss_keypad_pane

0xf1e5,	// (0x0005c778) ituss_keypad_pane

0x75a5,	// (0x00054b38) aid_vkbss_key_offset_ParamLimits

0x75a5,	// (0x00054b38) aid_vkbss_key_offset

0x75b1,	// (0x00054b44) cell_vkbss_key_pane_ParamLimits

0x75b1,	// (0x00054b44) cell_vkbss_key_pane

0xf1f1,	// (0x0005c784) bg_cell_vkbss_key_g1_ParamLimits

0xf1f1,	// (0x0005c784) bg_cell_vkbss_key_g1

0xf1fd,	// (0x0005c790) cell_vkbss_key_3p_pane_ParamLimits

0xf1fd,	// (0x0005c790) cell_vkbss_key_3p_pane

0xf233,	// (0x0005c7c6) cell_vkbss_key_g1_ParamLimits

0xf233,	// (0x0005c7c6) cell_vkbss_key_g1

0xf269,	// (0x0005c7fc) cell_vkbss_key_t1_ParamLimits

0xf269,	// (0x0005c7fc) cell_vkbss_key_t1

0x760f,	// (0x00054ba2) cell_ituss_key_pane_ParamLimits

0x760f,	// (0x00054ba2) cell_ituss_key_pane

0xf2c5,	// (0x0005c858) bg_cell_ituss_key_g1_ParamLimits

0xf2c5,	// (0x0005c858) bg_cell_ituss_key_g1

0xf2d1,	// (0x0005c864) cell_ituss_key_pane_g1_ParamLimits

0xf2d1,	// (0x0005c864) cell_ituss_key_pane_g1

0x7620,	// (0x00054bb3) cell_ituss_key_pane_g2_ParamLimits

0x7620,	// (0x00054bb3) cell_ituss_key_pane_g2

0x0005,

0xfed0,	// (0x0005d463) cell_ituss_key_pane_g_ParamLimits

0xfed0,	// (0x0005d463) cell_ituss_key_pane_g

0x76a4,	// (0x00054c37) cell_ituss_key_t1_ParamLimits

0x76a4,	// (0x00054c37) cell_ituss_key_t1

0x76de,	// (0x00054c71) cell_ituss_key_t2_ParamLimits

0x76de,	// (0x00054c71) cell_ituss_key_t2

0x7710,	// (0x00054ca3) cell_ituss_key_t3_ParamLimits

0x7710,	// (0x00054ca3) cell_ituss_key_t3

0x7741,	// (0x00054cd4) cell_ituss_key_t4_ParamLimits

0x7741,	// (0x00054cd4) cell_ituss_key_t4

0x0005,

0xfedd,	// (0x0005d470) cell_ituss_key_t_ParamLimits

0xfedd,	// (0x0005d470) cell_ituss_key_t

0xf2f7,	// (0x0005c88a) cell_vkbss_key_3p_pane_g1

0xf2ff,	// (0x0005c892) cell_vkbss_key_3p_pane_g2

0xf307,	// (0x0005c89a) cell_vkbss_key_3p_pane_g3

0x0002,

0xfeea,	// (0x0005d47d) cell_vkbss_key_3p_pane_g

0x91b1,	// (0x00056744) bg_popup_fep_char_preview_window_cp02

0xf30f,	// (0x0005c8a2) popup_fep_char_pre_window_t1

0xe655,	// (0x0005bbe8) main_ai5_sk_pane

0xed74,	// (0x0005c307) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xed80,	// (0x0005c313) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xc6ba,	// (0x00059c4d) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xed95,	// (0x0005c328) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeb4,	// (0x0005d447) cell_contacts_ai5_widget_pane_g_ParamLimits

0xeda1,	// (0x0005c334) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x81f5,	// (0x00055788) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf31d,	// (0x0005c8b0) main_ai5_sk_pane_g1

0x9ec7,	// (0x0005745a) popup_query_code_window_g1

0xf186,	// (0x0005c719) popup_fep_vkb_icf_pane

0xf1b9,	// (0x0005c74c) popup_fep_vtchi_icf_pane

0xf326,	// (0x0005c8b9) bg_icf_pane

0xf326,	// (0x0005c8b9) list_vkb_icf_pane

0xf332,	// (0x0005c8c5) bg_icf_pane_cp01

0xf345,	// (0x0005c8d8) vtchi_icf_list_pane

0xf3a5,	// (0x0005c938) list_vkb_icf_pane_t1_ParamLimits

0xf3a5,	// (0x0005c938) list_vkb_icf_pane_t1

0xf3c3,	// (0x0005c956) vtchi_icf_list_pane_t1_ParamLimits

0xf3c3,	// (0x0005c956) vtchi_icf_list_pane_t1

0xf16d,	// (0x0005c700) popup_fep_ituss_window_ParamLimits

0xf1b9,	// (0x0005c74c) popup_fep_vtchi_icf_pane_ParamLimits

0xf1e5,	// (0x0005c778) ituss_keypad_pane_ParamLimits

0x759b,	// (0x00054b2e) ituss_sks_pane

0xf326,	// (0x0005c8b9) bg_icf_pane_ParamLimits

0xf13d,	// (0x0005c6d0) icf_edit_indi_pane_ParamLimits

0xf13d,	// (0x0005c6d0) icf_edit_indi_pane

0xf326,	// (0x0005c8b9) list_vkb_icf_pane_ParamLimits

0xf332,	// (0x0005c8c5) bg_icf_pane_cp01_ParamLimits

0xf158,	// (0x0005c6eb) icf_edit_indi_pane_cp01_ParamLimits

0xf158,	// (0x0005c6eb) icf_edit_indi_pane_cp01

0xf345,	// (0x0005c8d8) vtchi_query_pane

0xe4c9,	// (0x0005ba5c) icf_edit_indi_pane_g1_ParamLimits

0xe4c9,	// (0x0005ba5c) icf_edit_indi_pane_g1

0xf438,	// (0x0005c9cb) icf_edit_indi_pane_g2_ParamLimits

0xf438,	// (0x0005c9cb) icf_edit_indi_pane_g2

0x0001,

0xff15,	// (0x0005d4a8) icf_edit_indi_pane_g_ParamLimits

0xff15,	// (0x0005d4a8) icf_edit_indi_pane_g

0xf44c,	// (0x0005c9df) icf_edit_indi_pane_t1

0xf3e1,	// (0x0005c974) bg_input_focus_pane_cp042

0x8083,	// (0x00055616) vtchi_button_pane

0xf3ea,	// (0x0005c97d) vtchi_query_pane_t1

0xf3f8,	// (0x0005c98b) vtchi_query_pane_t2

0xf406,	// (0x0005c999) vtchi_query_pane_t3

0x0002,

0xff04,	// (0x0005d497) vtchi_query_pane_t

0x4675,	// (0x00051c08) bg_button_pane_cp13

0xf414,	// (0x0005c9a7) vtchi_button_pane_g1

0x77c2,	// (0x00054d55) ituss_sks_pane_g1

0x77cd,	// (0x00054d60) ituss_sks_pane_g2

0x0001,

0xff0b,	// (0x0005d49e) ituss_sks_pane_g

0xf42a,	// (0x0005c9bd) ituss_sks_pane_t1

0xf41c,	// (0x0005c9af) ituss_sks_pane_t2

0x0001,

0xff10,	// (0x0005d4a3) ituss_sks_pane_t

0xba99,	// (0x0005902c) indicator_nsta_pane_cp_g1

0xbaa2,	// (0x00059035) indicator_nsta_pane_cp_g2

0xbaaa,	// (0x0005903d) indicator_nsta_pane_cp_g3

0xbab2,	// (0x00059045) indicator_nsta_pane_cp_g4

0xbaa2,	// (0x00059035) indicator_nsta_pane_cp_g5

0xbaaa,	// (0x0005903d) indicator_nsta_pane_cp_g6

0x0005,

0xfa86,	// (0x0005d019) indicator_nsta_pane_cp_g

0xe225,	// (0x0005b7b8) cell_graphic2_pane_t2_ParamLimits

0xe225,	// (0x0005b7b8) cell_graphic2_pane_t2

0x0001,

0xfd9f,	// (0x0005d332) cell_graphic2_pane_t_ParamLimits

0xfd9f,	// (0x0005d332) cell_graphic2_pane_t

0xe251,	// (0x0005b7e4) cell_graphic2_control_pane_t1

0x8c66,	// (0x000561f9) signal_pane_g3_ParamLimits

0x8c66,	// (0x000561f9) signal_pane_g3

0x8c78,	// (0x0005620b) signal_pane_g4_ParamLimits

0x8c78,	// (0x0005620b) signal_pane_g4

0xf127,	// (0x0005c6ba) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf127,	// (0x0005c6ba) cell_ai5_widget_list_row_pane_t3

0xf2e5,	// (0x0005c878) cell_ituss_key_pane_t1_ParamLimits

0xf2e5,	// (0x0005c878) cell_ituss_key_pane_t1

0x9b04,	// (0x00057097) form_field_data_wide_pane_vc_t2_ParamLimits

0x9b04,	// (0x00057097) form_field_data_wide_pane_vc_t2

0x9b18,	// (0x000570ab) form_field_data_wide_pane_vc_t3_ParamLimits

0x9b18,	// (0x000570ab) form_field_data_wide_pane_vc_t3

0x0002,

0xf7e2,	// (0x0005cd75) form_field_data_wide_pane_vc_t_ParamLimits

0xf7e2,	// (0x0005cd75) form_field_data_wide_pane_vc_t

0xb743,	// (0x00058cd6) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb743,	// (0x00058cd6) form_field_slider_wide_pane_vc_t3

0xb821,	// (0x00058db4) form_field_popup_wide_pane_vc_t2_ParamLimits

0xb821,	// (0x00058db4) form_field_popup_wide_pane_vc_t2

0xb838,	// (0x00058dcb) form_field_popup_wide_pane_vc_t3_ParamLimits

0xb838,	// (0x00058dcb) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa75,	// (0x0005d008) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa75,	// (0x0005d008) form_field_popup_wide_pane_vc_t

0x7334,	// (0x000548c7) aid_fshwr2_btn_pane_ParamLimits

0x7344,	// (0x000548d7) aid_fshwr2_syb_pane_ParamLimits

0x7358,	// (0x000548eb) aid_fshwr2_txt_pane_ParamLimits

0x6b63,	// (0x000540f6) fshwr2_bg_pane_ParamLimits

0x7368,	// (0x000548fb) fshwr2_func_candi_pane_ParamLimits

0x738c,	// (0x0005491f) fshwr2_hwr_syb_pane_ParamLimits

0x73a6,	// (0x00054939) fshwr2_icf_pane_ParamLimits

0x83cc,	// (0x0005595f) list_double_graphic_pane_vc_g4_ParamLimits

0x83cc,	// (0x0005595f) list_double_graphic_pane_vc_g4

0x7640,	// (0x00054bd3) cell_ituss_key_pane_g3_ParamLimits

0x7640,	// (0x00054bd3) cell_ituss_key_pane_g3

0x7772,	// (0x00054d05) cell_ituss_key_t5_ParamLimits

0x7772,	// (0x00054d05) cell_ituss_key_t5

0xf19f,	// (0x0005c732) popup_fep_vkbss_window_ParamLimits

0xe65f,	// (0x0005bbf2) aid_cell_ai5_quarter

0xf44c,	// (0x0005c9df) icf_edit_indi_pane_t1_ParamLimits

0x7bf8,	// (0x0005518b) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x7bf8,	// (0x0005518b) aid_tch_indicator_popup_pane_cp2

0x7c0b,	// (0x0005519e) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x7c0b,	// (0x0005519e) aid_tch_query_popup_data_pane_cp2

0x9e6f,	// (0x00057402) aid_tch_query_popup_pane_ParamLimits

0x9e6f,	// (0x00057402) aid_tch_query_popup_pane

0x9e6f,	// (0x00057402) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x9e6f,	// (0x00057402) aid_tch_query_popup_data_pane_cp1

0x94d5,	// (0x00056a68) cell_fshwr2_syb_bg_pane_ParamLimits

0x74a6,	// (0x00054a39) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0x74ba,	// (0x00054a4d) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xf186,	// (0x0005c719) popup_fep_vkb_icf_pane_ParamLimits

0x7174,	// (0x00054707) bg_popup_fep_char_preview_window_g10

0xe794,	// (0x0005bd27) cell_ai5_widget_pane_g11_ParamLimits

0xe794,	// (0x0005bd27) cell_ai5_widget_pane_g11

0xe7a0,	// (0x0005bd33) cell_ai5_widget_pane_g12_ParamLimits

0xe7a0,	// (0x0005bd33) cell_ai5_widget_pane_g12

0xe7ac,	// (0x0005bd3f) cell_ai5_widget_pane_g13_ParamLimits

0xe7ac,	// (0x0005bd3f) cell_ai5_widget_pane_g13

0xe8db,	// (0x0005be6e) cell_ai5_widget_pane_t11_ParamLimits

0xe8db,	// (0x0005be6e) cell_ai5_widget_pane_t11

0xe8ed,	// (0x0005be80) cell_ai5_widget_pane_t12_ParamLimits

0xe8ed,	// (0x0005be80) cell_ai5_widget_pane_t12

0x764c,	// (0x00054bdf) cell_ituss_key_pane_g4_ParamLimits

0x764c,	// (0x00054bdf) cell_ituss_key_pane_g4

0x7668,	// (0x00054bfb) cell_ituss_key_pane_g5_ParamLimits

0x7668,	// (0x00054bfb) cell_ituss_key_pane_g5

0x7684,	// (0x00054c17) cell_ituss_key_pane_g6_ParamLimits

0x7684,	// (0x00054c17) cell_ituss_key_pane_g6

0x99ff,	// (0x00056f92) bg_icf_pane_g1

0xf34d,	// (0x0005c8e0) bg_icf_pane_g2

0xf359,	// (0x0005c8ec) bg_icf_pane_g3

0xf363,	// (0x0005c8f6) bg_icf_pane_g4

0xf36f,	// (0x0005c902) bg_icf_pane_g5

0xf379,	// (0x0005c90c) bg_icf_pane_g6

0xf385,	// (0x0005c918) bg_icf_pane_g7

0xf38f,	// (0x0005c922) bg_icf_pane_g8

0xf39b,	// (0x0005c92e) bg_icf_pane_g9

0x0008,

0xfef1,	// (0x0005d484) bg_icf_pane_g

0xf1d2,	// (0x0005c765) popup_hyb_candi_window_ParamLimits

0xf1d2,	// (0x0005c765) popup_hyb_candi_window

0x9a73,	// (0x00057006) bg_popup_sub_pane_cp01_ParamLimits

0x9a73,	// (0x00057006) bg_popup_sub_pane_cp01

0xf465,	// (0x0005c9f8) entry_hyb_candi_pane_ParamLimits

0xf465,	// (0x0005c9f8) entry_hyb_candi_pane

0xf474,	// (0x0005ca07) grid_hyb_candi_pane_ParamLimits

0xf474,	// (0x0005ca07) grid_hyb_candi_pane

0xf489,	// (0x0005ca1c) grid_hyb_phrase_pane_ParamLimits

0xf489,	// (0x0005ca1c) grid_hyb_phrase_pane

0xf498,	// (0x0005ca2b) cell_hyb_candi_pane_ParamLimits

0xf498,	// (0x0005ca2b) cell_hyb_candi_pane

0xf4bb,	// (0x0005ca4e) cell_hyb_candi_scroll_pane

0x8b8c,	// (0x0005611f) cell_hyb_candi_pane_g1

0xf4c4,	// (0x0005ca57) cell_hyb_candi_pane_t1

0xf4d2,	// (0x0005ca65) cell_hyb_phrase_pane

0x8b8c,	// (0x0005611f) cell_hyb_phrase_pane_g1

0xf4db,	// (0x0005ca6e) cell_hyb_phrase_pane_t1

0xf4e9,	// (0x0005ca7c) entry_hyb_candi_pane_t1

0x91b1,	// (0x00056744) input_focus_pane_cp06

0xf4f7,	// (0x0005ca8a) cell_hyb_candi_scroll_pane_g1

0xf4ff,	// (0x0005ca92) cell_hyb_candi_scroll_pane_g1_aid

0xf507,	// (0x0005ca9a) cell_hyb_candi_scroll_pane_g2

0xf50f,	// (0x0005caa2) cell_hyb_candi_scroll_pane_g2_aid

0xf517,	// (0x0005caaa) cell_hyb_candi_scroll_pane_g3

0xf51f,	// (0x0005cab2) cell_hyb_candi_scroll_pane_g4

0xe58a,	// (0x0005bb1d) ai5_page_g1

0x7784,	// (0x00054d17) cell_ituss_key_t6_ParamLimits

0x7784,	// (0x00054d17) cell_ituss_key_t6

0x757a,	// (0x00054b0d) icf_edit_indi_pane_cp02_ParamLimits

0x757a,	// (0x00054b0d) icf_edit_indi_pane_cp02

0x758e,	// (0x00054b21) icf_edit_indi_pane_cp03_ParamLimits

0x758e,	// (0x00054b21) icf_edit_indi_pane_cp03
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	};

} // end of namespace AknLayoutScalable_Abrw_php_av_qhd_prt_tch_Large

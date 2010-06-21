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

#include "aknlayoutscalable_elaf_php_av_qhd_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_php_av_qhd_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0003a6f9 };

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
0x7e0d,	// (0x00042506) Screen

0x7e21,	// (0x0004251a) application_window_ParamLimits

0x7e21,	// (0x0004251a) application_window

0x7e3b,	// (0x00042534) screen_g1

0x5845,	// (0x0003ff3e) area_bottom_pane_ParamLimits

0x5845,	// (0x0003ff3e) area_bottom_pane

0x5905,	// (0x0003fffe) area_top_pane_ParamLimits

0x5905,	// (0x0003fffe) area_top_pane

0x5999,	// (0x00040092) main_pane_ParamLimits

0x5999,	// (0x00040092) main_pane

0x7e45,	// (0x0004253e) misc_graphics

0x9823,	// (0x00043f1c) battery_pane_ParamLimits

0x9823,	// (0x00043f1c) battery_pane

0xa503,	// (0x00044bfc) bg_status_flat_pane_g8

0xa50b,	// (0x00044c04) bg_status_flat_pane_g9

0x98e5,	// (0x00043fde) context_pane_ParamLimits

0x98e5,	// (0x00043fde) context_pane

0x9a07,	// (0x00044100) navi_pane_ParamLimits

0x9a07,	// (0x00044100) navi_pane

0x9a8b,	// (0x00044184) signal_pane_ParamLimits

0x9a8b,	// (0x00044184) signal_pane

0x0008,

0xf87e,	// (0x00049f77) bg_status_flat_pane_g

0x9af8,	// (0x000441f1) status_pane_g1_ParamLimits

0x9af8,	// (0x000441f1) status_pane_g1

0x9b0c,	// (0x00044205) status_pane_g2_ParamLimits

0x9b0c,	// (0x00044205) status_pane_g2

0x9b18,	// (0x00044211) status_pane_g3_ParamLimits

0x9b18,	// (0x00044211) status_pane_g3

0x0004,

0xf7a5,	// (0x00049e9e) status_pane_g_ParamLimits

0xf7a5,	// (0x00049e9e) status_pane_g

0x9b4c,	// (0x00044245) title_pane_ParamLimits

0x9b4c,	// (0x00044245) title_pane

0x9b89,	// (0x00044282) uni_indicator_pane_ParamLimits

0x9b89,	// (0x00044282) uni_indicator_pane

0x9753,	// (0x00043e4c) bg_list_pane_ParamLimits

0x9753,	// (0x00043e4c) bg_list_pane

0x6336,	// (0x00040a2f) find_pane

0x9773,	// (0x00043e6c) listscroll_app_pane_ParamLimits

0x9773,	// (0x00043e6c) listscroll_app_pane

0x977f,	// (0x00043e78) listscroll_form_pane

0x633e,	// (0x00040a37) listscroll_gen_pane_ParamLimits

0x633e,	// (0x00040a37) listscroll_gen_pane

0x6352,	// (0x00040a4b) listscroll_set_pane

0x899b,	// (0x00043094) main_idle_act_pane

0x944f,	// (0x00043b48) main_idle_trad_pane

0x944f,	// (0x00043b48) main_list_empty_pane

0x9773,	// (0x00043e6c) main_midp_pane

0x9799,	// (0x00043e92) main_pane_g1_ParamLimits

0x9799,	// (0x00043e92) main_pane_g1

0x635a,	// (0x00040a53) popup_ai_message_window_ParamLimits

0x635a,	// (0x00040a53) popup_ai_message_window

0x6400,	// (0x00040af9) popup_fep_china_uni_window_ParamLimits

0x6400,	// (0x00040af9) popup_fep_china_uni_window

0x645c,	// (0x00040b55) popup_fep_japan_candidate_window_ParamLimits

0x645c,	// (0x00040b55) popup_fep_japan_candidate_window

0x647c,	// (0x00040b75) popup_fep_japan_predictive_window_ParamLimits

0x647c,	// (0x00040b75) popup_fep_japan_predictive_window

0x64ac,	// (0x00040ba5) popup_find_window

0x64b9,	// (0x00040bb2) popup_grid_graphic_window_ParamLimits

0x64b9,	// (0x00040bb2) popup_grid_graphic_window

0x64e3,	// (0x00040bdc) popup_large_graphic_colour_window

0x6509,	// (0x00040c02) popup_menu_window_ParamLimits

0x6509,	// (0x00040c02) popup_menu_window

0x66c1,	// (0x00040dba) popup_note_image_window

0x66ad,	// (0x00040da6) popup_note_wait_window_ParamLimits

0x66ad,	// (0x00040da6) popup_note_wait_window

0x66ad,	// (0x00040da6) popup_note_window_ParamLimits

0x66ad,	// (0x00040da6) popup_note_window

0x6717,	// (0x00040e10) popup_query_code_window_ParamLimits

0x6717,	// (0x00040e10) popup_query_code_window

0x672b,	// (0x00040e24) popup_query_data_code_window_ParamLimits

0x672b,	// (0x00040e24) popup_query_data_code_window

0x6748,	// (0x00040e41) popup_query_data_window_ParamLimits

0x6748,	// (0x00040e41) popup_query_data_window

0x6764,	// (0x00040e5d) popup_query_sat_info_window_ParamLimits

0x6764,	// (0x00040e5d) popup_query_sat_info_window

0x679d,	// (0x00040e96) popup_snote_single_graphic_window_ParamLimits

0x679d,	// (0x00040e96) popup_snote_single_graphic_window

0x679d,	// (0x00040e96) popup_snote_single_text_window_ParamLimits

0x679d,	// (0x00040e96) popup_snote_single_text_window

0x67b2,	// (0x00040eab) popup_sub_window_general

0x68e2,	// (0x00040fdb) popup_window_general_ParamLimits

0x68e2,	// (0x00040fdb) popup_window_general

0x97a7,	// (0x00043ea0) power_save_pane

0x61c8,	// (0x000408c1) control_pane_g1_ParamLimits

0x61c8,	// (0x000408c1) control_pane_g1

0x61ef,	// (0x000408e8) control_pane_g2_ParamLimits

0x61ef,	// (0x000408e8) control_pane_g2

0x9716,	// (0x00043e0f) control_pane_g3_ParamLimits

0x9716,	// (0x00043e0f) control_pane_g3

0x0007,

0xf78d,	// (0x00049e86) control_pane_g_ParamLimits

0xf78d,	// (0x00049e86) control_pane_g

0x6239,	// (0x00040932) control_pane_t1_ParamLimits

0x6239,	// (0x00040932) control_pane_t1

0x628d,	// (0x00040986) control_pane_t2_ParamLimits

0x628d,	// (0x00040986) control_pane_t2

0x0002,

0xf79e,	// (0x00049e97) control_pane_t_ParamLimits

0xf79e,	// (0x00049e97) control_pane_t

0x963b,	// (0x00043d34) navi_navi_volume_pane_cp1

0x9643,	// (0x00043d3c) status_small_icon_pane

0x964b,	// (0x00043d44) status_small_pane_g1_ParamLimits

0x964b,	// (0x00043d44) status_small_pane_g1

0x967f,	// (0x00043d78) status_small_pane_g2_ParamLimits

0x967f,	// (0x00043d78) status_small_pane_g2

0x968b,	// (0x00043d84) status_small_pane_g3_ParamLimits

0x968b,	// (0x00043d84) status_small_pane_g3

0x9697,	// (0x00043d90) status_small_pane_g4_ParamLimits

0x9697,	// (0x00043d90) status_small_pane_g4

0x96a3,	// (0x00043d9c) status_small_pane_g5_ParamLimits

0x96a3,	// (0x00043d9c) status_small_pane_g5

0x96b1,	// (0x00043daa) status_small_pane_g6_ParamLimits

0x96b1,	// (0x00043daa) status_small_pane_g6

0x0007,

0xf77c,	// (0x00049e75) status_small_pane_g_ParamLimits

0xf77c,	// (0x00049e75) status_small_pane_g

0x96e0,	// (0x00043dd9) status_small_pane_t1

0x9702,	// (0x00043dfb) status_small_wait_pane_ParamLimits

0x9702,	// (0x00043dfb) status_small_wait_pane

0x8ec1,	// (0x000435ba) aid_levels_signal_ParamLimits

0x8ec1,	// (0x000435ba) aid_levels_signal

0x8ed3,	// (0x000435cc) signal_pane_g1_ParamLimits

0x8ed3,	// (0x000435cc) signal_pane_g1

0x8ee8,	// (0x000435e1) signal_pane_g2_ParamLimits

0x8ee8,	// (0x000435e1) signal_pane_g2

0x0003,

0xf70d,	// (0x00049e06) signal_pane_g_ParamLimits

0xf70d,	// (0x00049e06) signal_pane_g

0x8f23,	// (0x0004361c) context_pane_g1

0x7e4f,	// (0x00042548) title_pane_g1

0x7e85,	// (0x0004257e) title_pane_t1

0x7eed,	// (0x000425e6) title_pane_t2

0x7f13,	// (0x0004260c) title_pane_t3

0x0002,

0xf557,	// (0x00049c50) title_pane_t

0x9ba1,	// (0x0004429a) aid_levels_battery_ParamLimits

0x9ba1,	// (0x0004429a) aid_levels_battery

0x9bb5,	// (0x000442ae) battery_pane_g1_ParamLimits

0x9bb5,	// (0x000442ae) battery_pane_g1

0x9bcb,	// (0x000442c4) battery_pane_g2_ParamLimits

0x9bcb,	// (0x000442c4) battery_pane_g2

0x0001,

0xf7b0,	// (0x00049ea9) battery_pane_g_ParamLimits

0xf7b0,	// (0x00049ea9) battery_pane_g

0xae39,	// (0x00045532) uni_indicator_pane_g1

0xae4c,	// (0x00045545) uni_indicator_pane_g2

0xae5e,	// (0x00045557) uni_indicator_pane_g3

0x0005,

0xf926,	// (0x0004a01f) uni_indicator_pane_g

0x92c1,	// (0x000439ba) navi_icon_pane_ParamLimits

0x92c1,	// (0x000439ba) navi_icon_pane

0x91ff,	// (0x000438f8) navi_midp_pane

0x92dd,	// (0x000439d6) navi_navi_pane

0x92e7,	// (0x000439e0) navi_text_pane_ParamLimits

0x92e7,	// (0x000439e0) navi_text_pane

0x7e3b,	// (0x00042534) status_small_wait_pane_g1

0x8368,	// (0x00042a61) status_small_wait_pane_g2

0x0001,

0xf921,	// (0x0004a01a) status_small_wait_pane_g

0xab5e,	// (0x00045257) navi_navi_icon_text_pane

0xab66,	// (0x0004525f) navi_navi_pane_g1_ParamLimits

0xab66,	// (0x0004525f) navi_navi_pane_g1

0xab78,	// (0x00045271) navi_navi_pane_g2_ParamLimits

0xab78,	// (0x00045271) navi_navi_pane_g2

0x0001,

0xf8ef,	// (0x00049fe8) navi_navi_pane_g_ParamLimits

0xf8ef,	// (0x00049fe8) navi_navi_pane_g

0xab8a,	// (0x00045283) navi_navi_tabs_pane

0xab93,	// (0x0004528c) navi_navi_text_pane

0xab5e,	// (0x00045257) navi_navi_volume_pane

0xab3a,	// (0x00045233) navi_text_pane_t1

0xab2e,	// (0x00045227) navi_icon_pane_g1

0xaa81,	// (0x0004517a) navi_navi_text_pane_t1

0x6b9a,	// (0x00041293) navi_navi_volume_pane_g1

0x6ba2,	// (0x0004129b) volume_small_pane

0xa9e7,	// (0x000450e0) navi_navi_icon_text_pane_g1

0xa9ef,	// (0x000450e8) navi_navi_icon_text_pane_t1

0x92dd,	// (0x000439d6) navi_tabs_2_long_pane

0x92dd,	// (0x000439d6) navi_tabs_2_pane

0x92dd,	// (0x000439d6) navi_tabs_3_long_pane

0x92dd,	// (0x000439d6) navi_tabs_3_pane

0x92dd,	// (0x000439d6) navi_tabs_4_pane

0x6b7a,	// (0x00041273) tabs_2_active_pane_ParamLimits

0x6b7a,	// (0x00041273) tabs_2_active_pane

0x6b8a,	// (0x00041283) tabs_2_passive_pane_ParamLimits

0x6b8a,	// (0x00041283) tabs_2_passive_pane

0x6b48,	// (0x00041241) tabs_3_active_pane_ParamLimits

0x6b48,	// (0x00041241) tabs_3_active_pane

0x6b58,	// (0x00041251) tabs_3_passive_pane_ParamLimits

0x6b58,	// (0x00041251) tabs_3_passive_pane

0x6b69,	// (0x00041262) tabs_3_passive_pane_cp_ParamLimits

0x6b69,	// (0x00041262) tabs_3_passive_pane_cp

0x6b04,	// (0x000411fd) tabs_4_active_pane_ParamLimits

0x6b04,	// (0x000411fd) tabs_4_active_pane

0x6b15,	// (0x0004120e) tabs_4_passive_pane_ParamLimits

0x6b15,	// (0x0004120e) tabs_4_passive_pane

0x6b26,	// (0x0004121f) tabs_4_passive_pane_cp_ParamLimits

0x6b26,	// (0x0004121f) tabs_4_passive_pane_cp

0x6b37,	// (0x00041230) tabs_4_passive_pane_cp2_ParamLimits

0x6b37,	// (0x00041230) tabs_4_passive_pane_cp2

0x6ae0,	// (0x000411d9) tabs_2_long_active_pane_ParamLimits

0x6ae0,	// (0x000411d9) tabs_2_long_active_pane

0x6af2,	// (0x000411eb) tabs_2_long_passive_pane_ParamLimits

0x6af2,	// (0x000411eb) tabs_2_long_passive_pane

0x6aa1,	// (0x0004119a) tabs_3_long_active_pane_ParamLimits

0x6aa1,	// (0x0004119a) tabs_3_long_active_pane

0x6ab4,	// (0x000411ad) tabs_3_long_passive_pane_ParamLimits

0x6ab4,	// (0x000411ad) tabs_3_long_passive_pane

0x6acd,	// (0x000411c6) tabs_3_long_passive_pane_cp_ParamLimits

0x6acd,	// (0x000411c6) tabs_3_long_passive_pane_cp

0x6a47,	// (0x00041140) volume_small_pane_g1

0x6a50,	// (0x00041149) volume_small_pane_g2

0x6a59,	// (0x00041152) volume_small_pane_g3

0x6a62,	// (0x0004115b) volume_small_pane_g4

0x6a6b,	// (0x00041164) volume_small_pane_g5

0x6a74,	// (0x0004116d) volume_small_pane_g6

0x6a7d,	// (0x00041176) volume_small_pane_g7

0x6a86,	// (0x0004117f) volume_small_pane_g8

0x6a8f,	// (0x00041188) volume_small_pane_g9

0x6a98,	// (0x00041191) volume_small_pane_g10

0x0009,

0xf8bb,	// (0x00049fb4) volume_small_pane_g

0x7f25,	// (0x0004261e) bg_active_tab_pane_cp2_ParamLimits

0x7f25,	// (0x0004261e) bg_active_tab_pane_cp2

0x7f33,	// (0x0004262c) tabs_3_active_pane_g1

0x7f3b,	// (0x00042634) tabs_3_active_pane_t1

0x7f25,	// (0x0004261e) bg_passive_tab_pane_cp2_ParamLimits

0x7f25,	// (0x0004261e) bg_passive_tab_pane_cp2

0x7f33,	// (0x0004262c) tabs_3_passive_pane_g1

0x7f3b,	// (0x00042634) tabs_3_passive_pane_t1

0x7f25,	// (0x0004261e) bg_active_tab_pane_cp3_ParamLimits

0x7f25,	// (0x0004261e) bg_active_tab_pane_cp3

0x7f4d,	// (0x00042646) tabs_4_active_pane_g1

0x7f55,	// (0x0004264e) tabs_4_active_pane_t1

0x7f25,	// (0x0004261e) bg_passive_tab_pane_cp3_ParamLimits

0x7f25,	// (0x0004261e) bg_passive_tab_pane_cp3

0x7f4d,	// (0x00042646) tabs_4_1_passive_pane_g1

0x7f55,	// (0x0004264e) tabs_4_1_passive_pane_t1

0x9773,	// (0x00043e6c) list_highlight_pane_cp2

0xb0a1,	// (0x0004579a) list_set_pane_ParamLimits

0xb0a1,	// (0x0004579a) list_set_pane

0xb147,	// (0x00045840) main_pane_set_t1_ParamLimits

0xb147,	// (0x00045840) main_pane_set_t1

0xb167,	// (0x00045860) main_pane_set_t2_ParamLimits

0xb167,	// (0x00045860) main_pane_set_t2

0xb17b,	// (0x00045874) main_pane_set_t3_ParamLimits

0xb17b,	// (0x00045874) main_pane_set_t3

0xb18d,	// (0x00045886) main_pane_set_t4_ParamLimits

0xb18d,	// (0x00045886) main_pane_set_t4

0x0003,

0xf98b,	// (0x0004a084) main_pane_set_t_ParamLimits

0xf98b,	// (0x0004a084) main_pane_set_t

0xb19f,	// (0x00045898) setting_code_pane

0xb1ab,	// (0x000458a4) setting_slider_graphic_pane

0xb1ab,	// (0x000458a4) setting_slider_pane

0xb1ab,	// (0x000458a4) setting_text_pane

0xb1ab,	// (0x000458a4) setting_volume_pane

0x5be8,	// (0x000402e1) volume_set_pane

0x7f25,	// (0x0004261e) bg_set_opt_pane_cp

0x5bf0,	// (0x000402e9) setting_slider_pane_t1

0x5c09,	// (0x00040302) setting_slider_pane_t2

0x5c23,	// (0x0004031c) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x00049c57) setting_slider_pane_t

0x5c3b,	// (0x00040334) slider_set_pane

0x7e45,	// (0x0004253e) bg_set_opt_pane_cp2

0x7f67,	// (0x00042660) setting_slider_graphic_pane_g1

0x5c51,	// (0x0004034a) setting_slider_graphic_pane_t1

0x5c61,	// (0x0004035a) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x00049c5e) setting_slider_graphic_pane_t

0x5c71,	// (0x0004036a) slider_set_pane_cp

0x7e45,	// (0x0004253e) input_focus_pane_cp1

0xb060,	// (0x00045759) list_set_text_pane

0x7e3b,	// (0x00042534) setting_text_pane_g1

0x7e45,	// (0x0004253e) input_focus_pane_cp2

0x7e3b,	// (0x00042534) setting_code_pane_g1

0x7f70,	// (0x00042669) setting_code_pane_t1

0x4852,	// (0x0003ef4b) set_text_pane_t1_ParamLimits

0x4852,	// (0x0003ef4b) set_text_pane_t1

0x8812,	// (0x00042f0b) set_opt_bg_pane_g1

0x881a,	// (0x00042f13) set_opt_bg_pane_g2

0xb03a,	// (0x00045733) set_opt_bg_pane_g3

0x882a,	// (0x00042f23) set_opt_bg_pane_g4

0x8832,	// (0x00042f2b) set_opt_bg_pane_g5

0x883a,	// (0x00042f33) set_opt_bg_pane_g6

0xb044,	// (0x0004573d) set_opt_bg_pane_g7

0xb04c,	// (0x00045745) set_opt_bg_pane_g8

0xb056,	// (0x0004574f) set_opt_bg_pane_g9

0x0008,

0xf978,	// (0x0004a071) set_opt_bg_pane_g

0xb02d,	// (0x00045726) slider_set_pane_g1

0x6c0f,	// (0x00041308) slider_set_pane_g2

0x0006,

0xf969,	// (0x0004a062) slider_set_pane_g

0x6bab,	// (0x000412a4) volume_set_pane_g1

0x6bb3,	// (0x000412ac) volume_set_pane_g2

0x6bbb,	// (0x000412b4) volume_set_pane_g3

0x6bc3,	// (0x000412bc) volume_set_pane_g4

0x6bcb,	// (0x000412c4) volume_set_pane_g5

0x6bd3,	// (0x000412cc) volume_set_pane_g6

0x6bdb,	// (0x000412d4) volume_set_pane_g7

0x6be3,	// (0x000412dc) volume_set_pane_g8

0x6beb,	// (0x000412e4) volume_set_pane_g9

0x6bf3,	// (0x000412ec) volume_set_pane_g10

0x0009,

0xf941,	// (0x0004a03a) volume_set_pane_g

0x7f7e,	// (0x00042677) indicator_pane_ParamLimits

0x7f7e,	// (0x00042677) indicator_pane

0x7f8a,	// (0x00042683) main_idle_pane_g2_ParamLimits

0x7f8a,	// (0x00042683) main_idle_pane_g2

0x7fb2,	// (0x000426ab) main_pane_idle_g1_ParamLimits

0x7fb2,	// (0x000426ab) main_pane_idle_g1

0x7fbf,	// (0x000426b8) popup_clock_digital_analogue_window_ParamLimits

0x7fbf,	// (0x000426b8) popup_clock_digital_analogue_window

0x7fd6,	// (0x000426cf) soft_indicator_pane_ParamLimits

0x7fd6,	// (0x000426cf) soft_indicator_pane

0x7fe2,	// (0x000426db) wallpaper_pane_ParamLimits

0x7fe2,	// (0x000426db) wallpaper_pane

0x7e3b,	// (0x00042534) wallpaper_pane_g1

0x7ff6,	// (0x000426ef) indicator_pane_g1_ParamLimits

0x7ff6,	// (0x000426ef) indicator_pane_g1

0xb40f,	// (0x00045b08) navi_navi_icon_text_pane_srt_g1

0x8011,	// (0x0004270a) soft_indicator_pane_t1

0x802b,	// (0x00042724) aid_ps_area_pane

0x803c,	// (0x00042735) aid_ps_clock_pane

0x804a,	// (0x00042743) aid_ps_indicator_pane

0x8056,	// (0x0004274f) indicator_ps_pane_ParamLimits

0x8056,	// (0x0004274f) indicator_ps_pane

0x8065,	// (0x0004275e) power_save_pane_g1_ParamLimits

0x8065,	// (0x0004275e) power_save_pane_g1

0x8071,	// (0x0004276a) power_save_pane_g2_ParamLimits

0x8071,	// (0x0004276a) power_save_pane_g2

0x57f9,	// (0x0003fef2) aid_navinavi_width_pane

0x802b,	// (0x00042724) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x00049c63) power_save_pane_g_ParamLimits

0xf56a,	// (0x00049c63) power_save_pane_g

0x807f,	// (0x00042778) power_save_pane_t1_ParamLimits

0x807f,	// (0x00042778) power_save_pane_t1

0x803c,	// (0x00042735) aid_ps_clock_pane_ParamLimits

0x804a,	// (0x00042743) aid_ps_indicator_pane_ParamLimits

0x8091,	// (0x0004278a) power_save_pane_t4_ParamLimits

0x8091,	// (0x0004278a) power_save_pane_t4

0x0001,

0xf56f,	// (0x00049c68) power_save_pane_t_ParamLimits

0xf56f,	// (0x00049c68) power_save_pane_t

0x80bb,	// (0x000427b4) power_save_t3_ParamLimits

0x80bb,	// (0x000427b4) power_save_t3

0x80a6,	// (0x0004279f) power_save_t2_ParamLimits

0x80a6,	// (0x0004279f) power_save_t2

0x80d0,	// (0x000427c9) indicator_ps_pane_g1

0x80d9,	// (0x000427d2) ai_gene_pane_ParamLimits

0x80d9,	// (0x000427d2) ai_gene_pane

0x80e5,	// (0x000427de) ai_links_pane_ParamLimits

0x80e5,	// (0x000427de) ai_links_pane

0x80f1,	// (0x000427ea) indicator_pane_cp1_ParamLimits

0x80f1,	// (0x000427ea) indicator_pane_cp1

0x80fd,	// (0x000427f6) main_pane_idle_g1_cp_ParamLimits

0x80fd,	// (0x000427f6) main_pane_idle_g1_cp

0x8109,	// (0x00042802) popup_ai_links_title_window

0x8112,	// (0x0004280b) soft_indicator_pane_cp1_ParamLimits

0x8112,	// (0x0004280b) soft_indicator_pane_cp1

0xae27,	// (0x00045520) ai_links_pane_g1

0xae30,	// (0x00045529) grid_ai_links_pane

0xae0a,	// (0x00045503) ai_gene_pane_1

0xae15,	// (0x0004550e) ai_gene_pane_2

0xae1e,	// (0x00045517) list_highlight_pane_cp4

0xadee,	// (0x000454e7) cell_ai_link_pane_ParamLimits

0xadee,	// (0x000454e7) cell_ai_link_pane

0xade6,	// (0x000454df) cell_ai_link_pane_g1

0x8368,	// (0x00042a61) cell_ai_link_pane_g2

0x0001,

0xf91c,	// (0x0004a015) cell_ai_link_pane_g

0x7e45,	// (0x0004253e) grid_highlight_cp2

0x7e45,	// (0x0004253e) bg_popup_sub_pane_cp1

0x812c,	// (0x00042825) popup_ai_links_title_window_t1

0xad34,	// (0x0004542d) ai_gene_pane_1_g1_ParamLimits

0xad34,	// (0x0004542d) ai_gene_pane_1_g1

0xad40,	// (0x00045439) ai_gene_pane_1_g2_ParamLimits

0xad40,	// (0x00045439) ai_gene_pane_1_g2

0x0001,

0xf912,	// (0x0004a00b) ai_gene_pane_1_g_ParamLimits

0xf912,	// (0x0004a00b) ai_gene_pane_1_g

0xad4d,	// (0x00045446) ai_gene_pane_1_t1_ParamLimits

0xad4d,	// (0x00045446) ai_gene_pane_1_t1

0xad81,	// (0x0004547a) grid_ai_soft_ind_pane

0xad1f,	// (0x00045418) ai_gene_pane_2_t1_ParamLimits

0xad1f,	// (0x00045418) ai_gene_pane_2_t1

0x813b,	// (0x00042834) main_pane_empty_t1_ParamLimits

0x813b,	// (0x00042834) main_pane_empty_t1

0x8153,	// (0x0004284c) main_pane_empty_t2_ParamLimits

0x8153,	// (0x0004284c) main_pane_empty_t2

0x8168,	// (0x00042861) main_pane_empty_t3_ParamLimits

0x8168,	// (0x00042861) main_pane_empty_t3

0x817a,	// (0x00042873) main_pane_empty_t4_ParamLimits

0x817a,	// (0x00042873) main_pane_empty_t4

0x818c,	// (0x00042885) main_pane_empty_t5_ParamLimits

0x818c,	// (0x00042885) main_pane_empty_t5

0x0004,

0xf574,	// (0x00049c6d) main_pane_empty_t_ParamLimits

0xf574,	// (0x00049c6d) main_pane_empty_t

0x8863,	// (0x00042f5c) bg_popup_window_pane_ParamLimits

0x8863,	// (0x00042f5c) bg_popup_window_pane

0xaa8f,	// (0x00045188) find_popup_pane_cp2_ParamLimits

0xaa8f,	// (0x00045188) find_popup_pane_cp2

0xaa9b,	// (0x00045194) heading_pane_ParamLimits

0xaa9b,	// (0x00045194) heading_pane

0x7e45,	// (0x0004253e) bg_popup_sub_pane

0xaa09,	// (0x00045102) bg_popup_window_pane_g1_ParamLimits

0xaa09,	// (0x00045102) bg_popup_window_pane_g1

0xaa15,	// (0x0004510e) bg_popup_window_pane_g2_ParamLimits

0xaa15,	// (0x0004510e) bg_popup_window_pane_g2

0xaa21,	// (0x0004511a) bg_popup_window_pane_g3_ParamLimits

0xaa21,	// (0x0004511a) bg_popup_window_pane_g3

0xaa2d,	// (0x00045126) bg_popup_window_pane_g4_ParamLimits

0xaa2d,	// (0x00045126) bg_popup_window_pane_g4

0xaa39,	// (0x00045132) bg_popup_window_pane_g5_ParamLimits

0xaa39,	// (0x00045132) bg_popup_window_pane_g5

0xaa45,	// (0x0004513e) bg_popup_window_pane_g6_ParamLimits

0xaa45,	// (0x0004513e) bg_popup_window_pane_g6

0xaa51,	// (0x0004514a) bg_popup_window_pane_g7_ParamLimits

0xaa51,	// (0x0004514a) bg_popup_window_pane_g7

0xaa5d,	// (0x00045156) bg_popup_window_pane_g8_ParamLimits

0xaa5d,	// (0x00045156) bg_popup_window_pane_g8

0xaa69,	// (0x00045162) bg_popup_window_pane_g9_ParamLimits

0xaa69,	// (0x00045162) bg_popup_window_pane_g9

0xaa75,	// (0x0004516e) bg_popup_window_pane_g10_ParamLimits

0xaa75,	// (0x0004516e) bg_popup_window_pane_g10

0x0009,

0xf8da,	// (0x00049fd3) bg_popup_window_pane_g_ParamLimits

0xf8da,	// (0x00049fd3) bg_popup_window_pane_g

0xa99e,	// (0x00045097) bg_popup_heading_pane_ParamLimits

0xa99e,	// (0x00045097) bg_popup_heading_pane

0x6d2d,	// (0x00041426) tabs_4_passive_pane_cp_srt_ParamLimits

0x6d2d,	// (0x00041426) tabs_4_passive_pane_cp_srt

0x6d3f,	// (0x00041438) tabs_4_passive_pane_srt_ParamLimits

0xa9b2,	// (0x000450ab) heading_pane_g2

0x6d3f,	// (0x00041438) tabs_4_passive_pane_srt

0x9773,	// (0x00043e6c) bg_passive_tab_pane_cp3_srt_ParamLimits

0x9773,	// (0x00043e6c) bg_passive_tab_pane_cp3_srt

0xa9ba,	// (0x000450b3) heading_pane_t1_ParamLimits

0xa9ba,	// (0x000450b3) heading_pane_t1

0xa9d1,	// (0x000450ca) heading_pane_t2_ParamLimits

0xa9d1,	// (0x000450ca) heading_pane_t2

0x0001,

0xf8d5,	// (0x00049fce) heading_pane_t_ParamLimits

0xf8d5,	// (0x00049fce) heading_pane_t

0xa4cb,	// (0x00044bc4) bg_popup_heading_pane_g1

0xa57a,	// (0x00044c73) bg_popup_heading_pane_g2

0xa584,	// (0x00044c7d) bg_popup_heading_pane_g3

0xa58e,	// (0x00044c87) bg_popup_heading_pane_g4

0xa598,	// (0x00044c91) bg_popup_heading_pane_g5

0xa5a2,	// (0x00044c9b) bg_popup_heading_pane_g6

0xa5aa,	// (0x00044ca3) bg_popup_heading_pane_g7

0xa5b2,	// (0x00044cab) bg_popup_heading_pane_g8

0xa5bc,	// (0x00044cb5) bg_popup_heading_pane_g9

0x0008,

0xf891,	// (0x00049f8a) bg_popup_heading_pane_g

0x9ca3,	// (0x0004439c) bg_popup_sub_pane_g1

0x9cab,	// (0x000443a4) bg_popup_sub_pane_g2

0x9cb3,	// (0x000443ac) bg_popup_sub_pane_g3

0x9cbb,	// (0x000443b4) bg_popup_sub_pane_g4

0x9cc3,	// (0x000443bc) bg_popup_sub_pane_g5

0x9ccb,	// (0x000443c4) bg_popup_sub_pane_g6

0x9cd3,	// (0x000443cc) bg_popup_sub_pane_g7

0x9cdb,	// (0x000443d4) bg_popup_sub_pane_g8

0x9ce3,	// (0x000443dc) bg_popup_sub_pane_g9

0x0008,

0xf86b,	// (0x00049f64) bg_popup_sub_pane_g

0x81a0,	// (0x00042899) bg_popup_window_pane_cp5_ParamLimits

0x81a0,	// (0x00042899) bg_popup_window_pane_cp5

0x81bc,	// (0x000428b5) popup_note_window_g1_ParamLimits

0x81bc,	// (0x000428b5) popup_note_window_g1

0x81c8,	// (0x000428c1) popup_note_window_t1_ParamLimits

0x81c8,	// (0x000428c1) popup_note_window_t1

0x81de,	// (0x000428d7) popup_note_window_t2_ParamLimits

0x81de,	// (0x000428d7) popup_note_window_t2

0x81f4,	// (0x000428ed) popup_note_window_t3_ParamLimits

0x81f4,	// (0x000428ed) popup_note_window_t3

0x820a,	// (0x00042903) popup_note_window_t4_ParamLimits

0x820a,	// (0x00042903) popup_note_window_t4

0x8232,	// (0x0004292b) popup_note_window_t5_ParamLimits

0x8232,	// (0x0004292b) popup_note_window_t5

0x0004,

0xf57f,	// (0x00049c78) popup_note_window_t_ParamLimits

0xf57f,	// (0x00049c78) popup_note_window_t

0x827c,	// (0x00042975) bg_popup_window_pane_cp6_ParamLimits

0x827c,	// (0x00042975) bg_popup_window_pane_cp6

0xa447,	// (0x00044b40) popup_note_image_window_g1_ParamLimits

0xa447,	// (0x00044b40) popup_note_image_window_g1

0xa453,	// (0x00044b4c) popup_note_image_window_g2_ParamLimits

0xa453,	// (0x00044b4c) popup_note_image_window_g2

0x0001,

0xf85f,	// (0x00049f58) popup_note_image_window_g_ParamLimits

0xf85f,	// (0x00049f58) popup_note_image_window_g

0xa46c,	// (0x00044b65) popup_note_image_window_t1_ParamLimits

0xa46c,	// (0x00044b65) popup_note_image_window_t1

0xa485,	// (0x00044b7e) popup_note_image_window_t2_ParamLimits

0xa485,	// (0x00044b7e) popup_note_image_window_t2

0xa49e,	// (0x00044b97) popup_note_image_window_t3_ParamLimits

0xa49e,	// (0x00044b97) popup_note_image_window_t3

0x0002,

0xf864,	// (0x00049f5d) popup_note_image_window_t_ParamLimits

0xf864,	// (0x00049f5d) popup_note_image_window_t

0xa308,	// (0x00044a01) bg_popup_window_pane_cp7_ParamLimits

0xa308,	// (0x00044a01) bg_popup_window_pane_cp7

0xa338,	// (0x00044a31) popup_note_wait_window_g1_ParamLimits

0xa338,	// (0x00044a31) popup_note_wait_window_g1

0xa344,	// (0x00044a3d) popup_note_wait_window_g2_ParamLimits

0xa344,	// (0x00044a3d) popup_note_wait_window_g2

0x0002,

0xf84d,	// (0x00049f46) popup_note_wait_window_g_ParamLimits

0xf84d,	// (0x00049f46) popup_note_wait_window_g

0xa35c,	// (0x00044a55) popup_note_wait_window_t1_ParamLimits

0xa35c,	// (0x00044a55) popup_note_wait_window_t1

0xa383,	// (0x00044a7c) popup_note_wait_window_t2_ParamLimits

0xa383,	// (0x00044a7c) popup_note_wait_window_t2

0xa3a0,	// (0x00044a99) popup_note_wait_window_t3_ParamLimits

0xa3a0,	// (0x00044a99) popup_note_wait_window_t3

0xa3b3,	// (0x00044aac) popup_note_wait_window_t4_ParamLimits

0xa3b3,	// (0x00044aac) popup_note_wait_window_t4

0x0004,

0xf854,	// (0x00049f4d) popup_note_wait_window_t_ParamLimits

0xf854,	// (0x00049f4d) popup_note_wait_window_t

0xa3d8,	// (0x00044ad1) wait_bar_pane_ParamLimits

0xa3d8,	// (0x00044ad1) wait_bar_pane

0x7e45,	// (0x0004253e) wait_anim_pane

0x7e45,	// (0x0004253e) wait_border_pane

0x7e3b,	// (0x00042534) wait_anim_pane_g1

0x7e3b,	// (0x00042534) wait_anim_pane_g2

0x0001,

0xf708,	// (0x00049e01) wait_anim_pane_g

0xa2ac,	// (0x000449a5) wait_border_pane_g1

0xa2b7,	// (0x000449b0) wait_border_pane_g2

0xa2c0,	// (0x000449b9) wait_border_pane_g3

0x0002,

0xf846,	// (0x00049f3f) wait_border_pane_g

0xa117,	// (0x00044810) bg_popup_window_pane_cp16_ParamLimits

0xa117,	// (0x00044810) bg_popup_window_pane_cp16

0xa217,	// (0x00044910) indicator_popup_pane_cp4_ParamLimits

0xa217,	// (0x00044910) indicator_popup_pane_cp4

0xa22b,	// (0x00044924) popup_query_data_window_t1_ParamLimits

0xa22b,	// (0x00044924) popup_query_data_window_t1

0xa23d,	// (0x00044936) popup_query_data_window_t2_ParamLimits

0xa23d,	// (0x00044936) popup_query_data_window_t2

0xa256,	// (0x0004494f) popup_query_data_window_t3_ParamLimits

0xa256,	// (0x0004494f) popup_query_data_window_t3

0x0002,

0xf83f,	// (0x00049f38) popup_query_data_window_t_ParamLimits

0xf83f,	// (0x00049f38) popup_query_data_window_t

0xa270,	// (0x00044969) query_popup_data_pane_ParamLimits

0xa270,	// (0x00044969) query_popup_data_pane

0xa284,	// (0x0004497d) query_popup_data_pane_cp1_ParamLimits

0xa284,	// (0x0004497d) query_popup_data_pane_cp1

0xa117,	// (0x00044810) bg_popup_window_pane_cp10_ParamLimits

0xa117,	// (0x00044810) bg_popup_window_pane_cp10

0xa149,	// (0x00044842) indicator_popup_pane_ParamLimits

0xa149,	// (0x00044842) indicator_popup_pane

0xa16b,	// (0x00044864) popup_query_code_window_t1_ParamLimits

0xa16b,	// (0x00044864) popup_query_code_window_t1

0xa185,	// (0x0004487e) popup_query_code_window_t2_ParamLimits

0xa185,	// (0x0004487e) popup_query_code_window_t2

0xa1ce,	// (0x000448c7) popup_query_code_window_t3_ParamLimits

0xa1ce,	// (0x000448c7) popup_query_code_window_t3

0x0002,

0xf838,	// (0x00049f31) popup_query_code_window_t_ParamLimits

0xf838,	// (0x00049f31) popup_query_code_window_t

0xa1fd,	// (0x000448f6) query_popup_pane_ParamLimits

0xa1fd,	// (0x000448f6) query_popup_pane

0x827c,	// (0x00042975) bg_popup_window_pane_cp15_ParamLimits

0x827c,	// (0x00042975) bg_popup_window_pane_cp15

0x829a,	// (0x00042993) indicator_popup_pane_cp1_ParamLimits

0x829a,	// (0x00042993) indicator_popup_pane_cp1

0x82ad,	// (0x000429a6) indicator_popup_pane_cp2_ParamLimits

0x82ad,	// (0x000429a6) indicator_popup_pane_cp2

0x82c0,	// (0x000429b9) popup_query_data_code_window_g1_ParamLimits

0x82c0,	// (0x000429b9) popup_query_data_code_window_g1

0x82d3,	// (0x000429cc) popup_query_data_code_window_t1_ParamLimits

0x82d3,	// (0x000429cc) popup_query_data_code_window_t1

0x82e5,	// (0x000429de) popup_query_data_code_window_t2_ParamLimits

0x82e5,	// (0x000429de) popup_query_data_code_window_t2

0x82f7,	// (0x000429f0) popup_query_data_code_window_t3_ParamLimits

0x82f7,	// (0x000429f0) popup_query_data_code_window_t3

0x830d,	// (0x00042a06) popup_query_data_code_window_t4_ParamLimits

0x830d,	// (0x00042a06) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x00049c83) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x00049c83) popup_query_data_code_window_t

0x6958,	// (0x00041051) list_single_midp_graphic_pane_g3

0x8325,	// (0x00042a1e) query_popup_data_pane_cp2_ParamLimits

0x8338,	// (0x00042a31) query_popup_pane_cp2_ParamLimits

0x8338,	// (0x00042a31) query_popup_pane_cp2

0x7e45,	// (0x0004253e) bg_popup_window_pane_cp11

0xa103,	// (0x000447fc) heading_pane_cp5

0x8423,	// (0x00042b1c) listscroll_popup_info_pane

0x7e45,	// (0x0004253e) input_focus_pane_cp3

0x834b,	// (0x00042a44) query_popup_pane_t1

0x8359,	// (0x00042a52) list_popup_info_pane_ParamLimits

0x8359,	// (0x00042a52) list_popup_info_pane

0x8368,	// (0x00042a61) listscroll_popup_info_pane_g1

0x8370,	// (0x00042a69) scroll_pane_cp7

0x837a,	// (0x00042a73) popup_info_list_pane_t1_ParamLimits

0x837a,	// (0x00042a73) popup_info_list_pane_t1

0x8394,	// (0x00042a8d) popup_info_list_pane_t2_ParamLimits

0x8394,	// (0x00042a8d) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x00049c8c) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x00049c8c) popup_info_list_pane_t

0x7e45,	// (0x0004253e) bg_popup_window_pane_cp12

0xb429,	// (0x00045b22) find_popup_pane

0x7f25,	// (0x0004261e) bg_popup_window_pane_cp3

0x83ae,	// (0x00042aa7) heading_pane_cp3

0x83ba,	// (0x00042ab3) listscroll_popup_graphic_pane

0x7e45,	// (0x0004253e) bg_popup_window_pane_cp4

0x8419,	// (0x00042b12) heading_pane_cp4

0x8423,	// (0x00042b1c) listscroll_popup_colour_pane

0x842b,	// (0x00042b24) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x842b,	// (0x00042b24) cell_large_graphic_colour_none_popup_pane

0x843f,	// (0x00042b38) grid_large_graphic_colour_popup_pane_ParamLimits

0x843f,	// (0x00042b38) grid_large_graphic_colour_popup_pane

0x846b,	// (0x00042b64) listscroll_popup_colour_pane_g1_ParamLimits

0x846b,	// (0x00042b64) listscroll_popup_colour_pane_g1

0x8482,	// (0x00042b7b) listscroll_popup_colour_pane_g2_ParamLimits

0x8482,	// (0x00042b7b) listscroll_popup_colour_pane_g2

0x8499,	// (0x00042b92) listscroll_popup_colour_pane_g3_ParamLimits

0x8499,	// (0x00042b92) listscroll_popup_colour_pane_g3

0x84a9,	// (0x00042ba2) listscroll_popup_colour_pane_g4_ParamLimits

0x84a9,	// (0x00042ba2) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x00049c91) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x00049c91) listscroll_popup_colour_pane_g

0x84bd,	// (0x00042bb6) scroll_pane_cp6_ParamLimits

0x84bd,	// (0x00042bb6) scroll_pane_cp6

0x84cf,	// (0x00042bc8) cell_large_graphic_colour_popup_pane_ParamLimits

0x84cf,	// (0x00042bc8) cell_large_graphic_colour_popup_pane

0x84ee,	// (0x00042be7) cell_large_graphic_colour_none_popup_pane_t1

0x7e45,	// (0x0004253e) grid_highlight_pane_cp5

0x84fd,	// (0x00042bf6) cell_large_graphic_colour_popup_pane_g1

0x8505,	// (0x00042bfe) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x00049c9a) cell_large_graphic_colour_popup_pane_g

0x850d,	// (0x00042c06) cell_large_graphic_colour_popup_pane_g2_copy1

0x8516,	// (0x00042c0f) grid_highlight_pane_cp4

0x851e,	// (0x00042c17) bg_popup_window_pane_cp8_ParamLimits

0x851e,	// (0x00042c17) bg_popup_window_pane_cp8

0x8539,	// (0x00042c32) popup_snote_single_text_window_g1_ParamLimits

0x8539,	// (0x00042c32) popup_snote_single_text_window_g1

0x854b,	// (0x00042c44) popup_snote_single_text_window_t1_ParamLimits

0x854b,	// (0x00042c44) popup_snote_single_text_window_t1

0x855e,	// (0x00042c57) popup_snote_single_text_window_t2_ParamLimits

0x855e,	// (0x00042c57) popup_snote_single_text_window_t2

0x8571,	// (0x00042c6a) popup_snote_single_text_window_t3_ParamLimits

0x8571,	// (0x00042c6a) popup_snote_single_text_window_t3

0x85aa,	// (0x00042ca3) popup_snote_single_text_window_t4_ParamLimits

0x85aa,	// (0x00042ca3) popup_snote_single_text_window_t4

0x85de,	// (0x00042cd7) popup_snote_single_text_window_t5_ParamLimits

0x85de,	// (0x00042cd7) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x00049c9f) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x00049c9f) popup_snote_single_text_window_t

0x860d,	// (0x00042d06) bg_popup_window_pane_cp9_ParamLimits

0x860d,	// (0x00042d06) bg_popup_window_pane_cp9

0x8539,	// (0x00042c32) popup_snote_single_graphic_window_g1_ParamLimits

0x8539,	// (0x00042c32) popup_snote_single_graphic_window_g1

0x861b,	// (0x00042d14) popup_snote_single_graphic_window_g2_ParamLimits

0x861b,	// (0x00042d14) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x00049caa) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x00049caa) popup_snote_single_graphic_window_g

0x8627,	// (0x00042d20) popup_snote_single_graphic_window_t1_ParamLimits

0x8627,	// (0x00042d20) popup_snote_single_graphic_window_t1

0x863a,	// (0x00042d33) popup_snote_single_graphic_window_t2_ParamLimits

0x863a,	// (0x00042d33) popup_snote_single_graphic_window_t2

0x864d,	// (0x00042d46) popup_snote_single_graphic_window_t3_ParamLimits

0x864d,	// (0x00042d46) popup_snote_single_graphic_window_t3

0x8686,	// (0x00042d7f) popup_snote_single_graphic_window_t4_ParamLimits

0x8686,	// (0x00042d7f) popup_snote_single_graphic_window_t4

0x86ba,	// (0x00042db3) popup_snote_single_graphic_window_t5_ParamLimits

0x86ba,	// (0x00042db3) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x00049caf) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x00049caf) popup_snote_single_graphic_window_t

0xb36b,	// (0x00045a64) grid_graphic_popup_pane_ParamLimits

0xb36b,	// (0x00045a64) grid_graphic_popup_pane

0xb395,	// (0x00045a8e) listscroll_popup_graphic_pane_g1_ParamLimits

0xb395,	// (0x00045a8e) listscroll_popup_graphic_pane_g1

0xb3a9,	// (0x00045aa2) listscroll_popup_graphic_pane_g2_ParamLimits

0xb3a9,	// (0x00045aa2) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b5,	// (0x0004a0ae) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b5,	// (0x0004a0ae) listscroll_popup_graphic_pane_g

0xb3bd,	// (0x00045ab6) scroll_pane_cp5

0xb30a,	// (0x00045a03) cell_graphic_popup_pane_ParamLimits

0xb30a,	// (0x00045a03) cell_graphic_popup_pane

0xb2eb,	// (0x000459e4) cell_graphic_popup_pane_g1

0xb2f3,	// (0x000459ec) cell_graphic_popup_pane_g2

0x850d,	// (0x00042c06) cell_graphic_popup_pane_g3

0x0002,

0xf9ae,	// (0x0004a0a7) cell_graphic_popup_pane_g

0xb2fc,	// (0x000459f5) cell_graphic_popup_pane_t2

0x8516,	// (0x00042c0f) grid_highlight_pane_cp3

0x86fb,	// (0x00042df4) list_gen_pane_ParamLimits

0x86fb,	// (0x00042df4) list_gen_pane

0x872d,	// (0x00042e26) scroll_pane

0xb243,	// (0x0004593c) bg_list_pane_g1_ParamLimits

0xb243,	// (0x0004593c) bg_list_pane_g1

0xb260,	// (0x00045959) bg_list_pane_g2_ParamLimits

0xb260,	// (0x00045959) bg_list_pane_g2

0xb275,	// (0x0004596e) bg_list_pane_g3_ParamLimits

0xb275,	// (0x0004596e) bg_list_pane_g3

0xb289,	// (0x00045982) bg_list_pane_g4_ParamLimits

0xb289,	// (0x00045982) bg_list_pane_g4

0xb29d,	// (0x00045996) bg_list_pane_g5_ParamLimits

0xb29d,	// (0x00045996) bg_list_pane_g5

0x0004,

0xf9a3,	// (0x0004a09c) bg_list_pane_g_ParamLimits

0xf9a3,	// (0x0004a09c) bg_list_pane_g

0x6c73,	// (0x0004136c) list_double2_graphic_large_graphic_pane_ParamLimits

0x6c73,	// (0x0004136c) list_double2_graphic_large_graphic_pane

0x6c73,	// (0x0004136c) list_double2_graphic_pane_ParamLimits

0x6c73,	// (0x0004136c) list_double2_graphic_pane

0x6c73,	// (0x0004136c) list_double2_large_graphic_pane_ParamLimits

0x6c73,	// (0x0004136c) list_double2_large_graphic_pane

0x6c73,	// (0x0004136c) list_double2_pane_ParamLimits

0x6c73,	// (0x0004136c) list_double2_pane

0x6c73,	// (0x0004136c) list_double_graphic_heading_pane_ParamLimits

0x6c73,	// (0x0004136c) list_double_graphic_heading_pane

0x6c73,	// (0x0004136c) list_double_graphic_pane_ParamLimits

0x6c73,	// (0x0004136c) list_double_graphic_pane

0x6c73,	// (0x0004136c) list_double_heading_pane_ParamLimits

0x6c73,	// (0x0004136c) list_double_heading_pane

0x6c73,	// (0x0004136c) list_double_large_graphic_pane_ParamLimits

0x6c73,	// (0x0004136c) list_double_large_graphic_pane

0x6c73,	// (0x0004136c) list_double_number_pane_ParamLimits

0x6c73,	// (0x0004136c) list_double_number_pane

0x6c73,	// (0x0004136c) list_double_pane_ParamLimits

0x6c73,	// (0x0004136c) list_double_pane

0x6c73,	// (0x0004136c) list_double_time_pane_ParamLimits

0x6c73,	// (0x0004136c) list_double_time_pane

0x6c73,	// (0x0004136c) list_setting_number_pane_ParamLimits

0x6c73,	// (0x0004136c) list_setting_number_pane

0x6c73,	// (0x0004136c) list_setting_pane_ParamLimits

0x6c73,	// (0x0004136c) list_setting_pane

0x6cac,	// (0x000413a5) list_single_2graphic_pane_ParamLimits

0x6cac,	// (0x000413a5) list_single_2graphic_pane

0x6cac,	// (0x000413a5) list_single_graphic_heading_pane_ParamLimits

0x6cac,	// (0x000413a5) list_single_graphic_heading_pane

0x6cac,	// (0x000413a5) list_single_graphic_pane_ParamLimits

0x6cac,	// (0x000413a5) list_single_graphic_pane

0x6cac,	// (0x000413a5) list_single_heading_pane_ParamLimits

0x6cac,	// (0x000413a5) list_single_heading_pane

0x6cea,	// (0x000413e3) list_single_large_graphic_pane_ParamLimits

0x6cea,	// (0x000413e3) list_single_large_graphic_pane

0x6cac,	// (0x000413a5) list_single_number_heading_pane_ParamLimits

0x6cac,	// (0x000413a5) list_single_number_heading_pane

0x6cac,	// (0x000413a5) list_single_number_pane_ParamLimits

0x6cac,	// (0x000413a5) list_single_number_pane

0x6cac,	// (0x000413a5) list_single_pane_ParamLimits

0x6cac,	// (0x000413a5) list_single_pane

0x7e45,	// (0x0004253e) list_highlight_pane_cp1

0x5c79,	// (0x00040372) list_single_pane_g1_ParamLimits

0x5c79,	// (0x00040372) list_single_pane_g1

0x5c85,	// (0x0004037e) list_single_pane_g2_ParamLimits

0x5c85,	// (0x0004037e) list_single_pane_g2

0x0001,

0xf5d2,	// (0x00049ccb) list_single_pane_g_ParamLimits

0xf5d2,	// (0x00049ccb) list_single_pane_g

0x516f,	// (0x0003f868) list_single_pane_t1_ParamLimits

0x516f,	// (0x0003f868) list_single_pane_t1

0x5c79,	// (0x00040372) list_single_number_pane_g1_ParamLimits

0x5c79,	// (0x00040372) list_single_number_pane_g1

0x5c85,	// (0x0004037e) list_single_number_pane_g2_ParamLimits

0x5c85,	// (0x0004037e) list_single_number_pane_g2

0x0001,

0xf5d2,	// (0x00049ccb) list_single_number_pane_g_ParamLimits

0xf5d2,	// (0x00049ccb) list_single_number_pane_g

0x5117,	// (0x0003f810) list_single_number_pane_t1_ParamLimits

0x5117,	// (0x0003f810) list_single_number_pane_t1

0x512d,	// (0x0003f826) list_single_number_pane_t2_ParamLimits

0x512d,	// (0x0003f826) list_single_number_pane_t2

0x0001,

0xf964,	// (0x0004a05d) list_single_number_pane_t_ParamLimits

0xf964,	// (0x0004a05d) list_single_number_pane_t

0x486b,	// (0x0003ef64) list_single_graphic_pane_g1_ParamLimits

0x486b,	// (0x0003ef64) list_single_graphic_pane_g1

0x5c79,	// (0x00040372) list_single_graphic_pane_g2_ParamLimits

0x5c79,	// (0x00040372) list_single_graphic_pane_g2

0x5c85,	// (0x0004037e) list_single_graphic_pane_g3_ParamLimits

0x5c85,	// (0x0004037e) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x00049cba) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x00049cba) list_single_graphic_pane_g

0x4877,	// (0x0003ef70) list_single_graphic_pane_t1_ParamLimits

0x4877,	// (0x0003ef70) list_single_graphic_pane_t1

0x488d,	// (0x0003ef86) list_single_heading_pane_g1_ParamLimits

0x488d,	// (0x0003ef86) list_single_heading_pane_g1

0x5c85,	// (0x0004037e) list_single_heading_pane_g2_ParamLimits

0x5c85,	// (0x0004037e) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x00049cc1) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x00049cc1) list_single_heading_pane_g

0x48a0,	// (0x0003ef99) list_single_heading_pane_t1_ParamLimits

0x48a0,	// (0x0003ef99) list_single_heading_pane_t1

0x5c91,	// (0x0004038a) list_single_heading_pane_t2_ParamLimits

0x5c91,	// (0x0004038a) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x00049cc6) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x00049cc6) list_single_heading_pane_t

0x5c79,	// (0x00040372) list_single_number_heading_pane_g1_ParamLimits

0x5c79,	// (0x00040372) list_single_number_heading_pane_g1

0x5c85,	// (0x0004037e) list_single_number_heading_pane_g2_ParamLimits

0x5c85,	// (0x0004037e) list_single_number_heading_pane_g2

0x0001,

0xf5d2,	// (0x00049ccb) list_single_number_heading_pane_g_ParamLimits

0xf5d2,	// (0x00049ccb) list_single_number_heading_pane_g

0x48b6,	// (0x0003efaf) list_single_number_heading_pane_t1_ParamLimits

0x48b6,	// (0x0003efaf) list_single_number_heading_pane_t1

0x48cc,	// (0x0003efc5) list_single_number_heading_pane_t2_ParamLimits

0x48cc,	// (0x0003efc5) list_single_number_heading_pane_t2

0x48de,	// (0x0003efd7) list_single_number_heading_pane_t3_ParamLimits

0x48de,	// (0x0003efd7) list_single_number_heading_pane_t3

0x0002,

0xf5d7,	// (0x00049cd0) list_single_number_heading_pane_t_ParamLimits

0xf5d7,	// (0x00049cd0) list_single_number_heading_pane_t

0x48f0,	// (0x0003efe9) list_single_graphic_heading_pane_g1_ParamLimits

0x48f0,	// (0x0003efe9) list_single_graphic_heading_pane_g1

0x5ca3,	// (0x0004039c) list_single_graphic_heading_pane_g4_ParamLimits

0x5ca3,	// (0x0004039c) list_single_graphic_heading_pane_g4

0x5c85,	// (0x0004037e) list_single_graphic_heading_pane_g5_ParamLimits

0x5c85,	// (0x0004037e) list_single_graphic_heading_pane_g5

0x0002,

0xf5de,	// (0x00049cd7) list_single_graphic_heading_pane_g_ParamLimits

0xf5de,	// (0x00049cd7) list_single_graphic_heading_pane_g

0x48b6,	// (0x0003efaf) list_single_graphic_heading_pane_t1_ParamLimits

0x48b6,	// (0x0003efaf) list_single_graphic_heading_pane_t1

0x4908,	// (0x0003f001) list_single_graphic_heading_pane_t2_ParamLimits

0x4908,	// (0x0003f001) list_single_graphic_heading_pane_t2

0x0001,

0xf5e5,	// (0x00049cde) list_single_graphic_heading_pane_t_ParamLimits

0xf5e5,	// (0x00049cde) list_single_graphic_heading_pane_t

0x5cb4,	// (0x000403ad) list_single_large_graphic_pane_g1_ParamLimits

0x5cb4,	// (0x000403ad) list_single_large_graphic_pane_g1

0x5cc0,	// (0x000403b9) list_single_large_graphic_pane_g2_ParamLimits

0x5cc0,	// (0x000403b9) list_single_large_graphic_pane_g2

0x5ccc,	// (0x000403c5) list_single_large_graphic_pane_g3_ParamLimits

0x5ccc,	// (0x000403c5) list_single_large_graphic_pane_g3

0x0002,

0xf5ea,	// (0x00049ce3) list_single_large_graphic_pane_g_ParamLimits

0xf5ea,	// (0x00049ce3) list_single_large_graphic_pane_g

0xa2b7,	// (0x000449b0) wait_border_pane_g2_copy1

0x5cd8,	// (0x000403d1) list_single_large_graphic_pane_g4_cp2

0x491e,	// (0x0003f017) list_single_large_graphic_pane_t1_ParamLimits

0x491e,	// (0x0003f017) list_single_large_graphic_pane_t1

0x8761,	// (0x00042e5a) list_double_pane_g1_ParamLimits

0x8761,	// (0x00042e5a) list_double_pane_g1

0x5ce0,	// (0x000403d9) list_double_pane_g2_ParamLimits

0x5ce0,	// (0x000403d9) list_double_pane_g2

0x0001,

0xf5f1,	// (0x00049cea) list_double_pane_g_ParamLimits

0xf5f1,	// (0x00049cea) list_double_pane_g

0x4934,	// (0x0003f02d) list_double_pane_t1_ParamLimits

0x4934,	// (0x0003f02d) list_double_pane_t1

0x494a,	// (0x0003f043) list_double_pane_t2_ParamLimits

0x494a,	// (0x0003f043) list_double_pane_t2

0x0001,

0xf5f6,	// (0x00049cef) list_double_pane_t_ParamLimits

0xf5f6,	// (0x00049cef) list_double_pane_t

0x495c,	// (0x0003f055) list_double2_pane_g1_ParamLimits

0x495c,	// (0x0003f055) list_double2_pane_g1

0x496d,	// (0x0003f066) list_double2_pane_g2_ParamLimits

0x496d,	// (0x0003f066) list_double2_pane_g2

0x0001,

0xf5fb,	// (0x00049cf4) list_double2_pane_g_ParamLimits

0xf5fb,	// (0x00049cf4) list_double2_pane_g

0x4979,	// (0x0003f072) list_double2_pane_t1_ParamLimits

0x4979,	// (0x0003f072) list_double2_pane_t1

0x498f,	// (0x0003f088) list_double2_pane_t2_ParamLimits

0x498f,	// (0x0003f088) list_double2_pane_t2

0x0001,

0xf600,	// (0x00049cf9) list_double2_pane_t_ParamLimits

0xf600,	// (0x00049cf9) list_double2_pane_t

0x8761,	// (0x00042e5a) list_double_number_pane_g1_ParamLimits

0x8761,	// (0x00042e5a) list_double_number_pane_g1

0x5ce0,	// (0x000403d9) list_double_number_pane_g2_ParamLimits

0x5ce0,	// (0x000403d9) list_double_number_pane_g2

0x0001,

0xf5f1,	// (0x00049cea) list_double_number_pane_g_ParamLimits

0xf5f1,	// (0x00049cea) list_double_number_pane_g

0x49a1,	// (0x0003f09a) list_double_number_pane_t1_ParamLimits

0x49a1,	// (0x0003f09a) list_double_number_pane_t1

0x49b3,	// (0x0003f0ac) list_double_number_pane_t2_ParamLimits

0x49b3,	// (0x0003f0ac) list_double_number_pane_t2

0x49c9,	// (0x0003f0c2) list_double_number_pane_t3_ParamLimits

0x49c9,	// (0x0003f0c2) list_double_number_pane_t3

0x0002,

0xf605,	// (0x00049cfe) list_double_number_pane_t_ParamLimits

0xf605,	// (0x00049cfe) list_double_number_pane_t

0x49db,	// (0x0003f0d4) list_double_graphic_pane_g1_ParamLimits

0x49db,	// (0x0003f0d4) list_double_graphic_pane_g1

0x49e7,	// (0x0003f0e0) list_double_graphic_pane_g2_ParamLimits

0x49e7,	// (0x0003f0e0) list_double_graphic_pane_g2

0x49f6,	// (0x0003f0ef) list_double_graphic_pane_g3_ParamLimits

0x49f6,	// (0x0003f0ef) list_double_graphic_pane_g3

0x0003,

0xf60c,	// (0x00049d05) list_double_graphic_pane_g_ParamLimits

0xf60c,	// (0x00049d05) list_double_graphic_pane_g

0x4a0e,	// (0x0003f107) list_double_graphic_pane_t1_ParamLimits

0x4a0e,	// (0x0003f107) list_double_graphic_pane_t1

0x4a24,	// (0x0003f11d) list_double_graphic_pane_t2_ParamLimits

0x4a24,	// (0x0003f11d) list_double_graphic_pane_t2

0x0001,

0xf615,	// (0x00049d0e) list_double_graphic_pane_t_ParamLimits

0xf615,	// (0x00049d0e) list_double_graphic_pane_t

0x4a36,	// (0x0003f12f) list_double2_graphic_pane_g1_ParamLimits

0x4a36,	// (0x0003f12f) list_double2_graphic_pane_g1

0x99fb,	// (0x000440f4) list_double2_graphic_pane_g2_ParamLimits

0x99fb,	// (0x000440f4) list_double2_graphic_pane_g2

0x5cec,	// (0x000403e5) list_double2_graphic_pane_g3_ParamLimits

0x5cec,	// (0x000403e5) list_double2_graphic_pane_g3

0x0002,

0xf61a,	// (0x00049d13) list_double2_graphic_pane_g_ParamLimits

0xf61a,	// (0x00049d13) list_double2_graphic_pane_g

0x4a42,	// (0x0003f13b) list_double2_graphic_pane_t1_ParamLimits

0x4a42,	// (0x0003f13b) list_double2_graphic_pane_t1

0x4a58,	// (0x0003f151) list_double2_graphic_pane_t2_ParamLimits

0x4a58,	// (0x0003f151) list_double2_graphic_pane_t2

0x0001,

0xf621,	// (0x00049d1a) list_double2_graphic_pane_t_ParamLimits

0xf621,	// (0x00049d1a) list_double2_graphic_pane_t

0x4a6a,	// (0x0003f163) list_double_large_graphic_pane_g1_ParamLimits

0x4a6a,	// (0x0003f163) list_double_large_graphic_pane_g1

0x4a89,	// (0x0003f182) list_double_large_graphic_pane_g2_ParamLimits

0x4a89,	// (0x0003f182) list_double_large_graphic_pane_g2

0x5ce0,	// (0x000403d9) list_double_large_graphic_pane_g3_ParamLimits

0x5ce0,	// (0x000403d9) list_double_large_graphic_pane_g3

0x4a9f,	// (0x0003f198) list_double_large_graphic_pane_g4_ParamLimits

0x4a9f,	// (0x0003f198) list_double_large_graphic_pane_g4

0x0004,

0xf626,	// (0x00049d1f) list_double_large_graphic_pane_g_ParamLimits

0xf626,	// (0x00049d1f) list_double_large_graphic_pane_g

0x4ab0,	// (0x0003f1a9) list_double_large_graphic_pane_t1_ParamLimits

0x4ab0,	// (0x0003f1a9) list_double_large_graphic_pane_t1

0x4ac9,	// (0x0003f1c2) list_double_large_graphic_pane_t2_ParamLimits

0x4ac9,	// (0x0003f1c2) list_double_large_graphic_pane_t2

0x0001,

0xf631,	// (0x00049d2a) list_double_large_graphic_pane_t_ParamLimits

0xf631,	// (0x00049d2a) list_double_large_graphic_pane_t

0x5d0d,	// (0x00040406) list_double2_large_graphic_pane_g1_ParamLimits

0x5d0d,	// (0x00040406) list_double2_large_graphic_pane_g1

0x4adb,	// (0x0003f1d4) list_double2_large_graphic_pane_g2_ParamLimits

0x4adb,	// (0x0003f1d4) list_double2_large_graphic_pane_g2

0x5cec,	// (0x000403e5) list_double2_large_graphic_pane_g3_ParamLimits

0x5cec,	// (0x000403e5) list_double2_large_graphic_pane_g3

0x0002,

0xf636,	// (0x00049d2f) list_double2_large_graphic_pane_g_ParamLimits

0xf636,	// (0x00049d2f) list_double2_large_graphic_pane_g

0x4aec,	// (0x0003f1e5) list_double2_large_graphic_pane_t1_ParamLimits

0x4aec,	// (0x0003f1e5) list_double2_large_graphic_pane_t1

0x4b02,	// (0x0003f1fb) list_double2_large_graphic_pane_t2_ParamLimits

0x4b02,	// (0x0003f1fb) list_double2_large_graphic_pane_t2

0x0001,

0xf63d,	// (0x00049d36) list_double2_large_graphic_pane_t_ParamLimits

0xf63d,	// (0x00049d36) list_double2_large_graphic_pane_t

0x4b14,	// (0x0003f20d) list_double_heading_pane_g1_ParamLimits

0x4b14,	// (0x0003f20d) list_double_heading_pane_g1

0x5d19,	// (0x00040412) list_double_heading_pane_g2_ParamLimits

0x5d19,	// (0x00040412) list_double_heading_pane_g2

0x0001,

0xf642,	// (0x00049d3b) list_double_heading_pane_g_ParamLimits

0xf642,	// (0x00049d3b) list_double_heading_pane_g

0x4b25,	// (0x0003f21e) list_double_heading_pane_t1_ParamLimits

0x4b25,	// (0x0003f21e) list_double_heading_pane_t1

0x498f,	// (0x0003f088) list_double_heading_pane_t2_ParamLimits

0x498f,	// (0x0003f088) list_double_heading_pane_t2

0x0001,

0xf647,	// (0x00049d40) list_double_heading_pane_t_ParamLimits

0xf647,	// (0x00049d40) list_double_heading_pane_t

0x4b3b,	// (0x0003f234) list_double_graphic_heading_pane_g1_ParamLimits

0x4b3b,	// (0x0003f234) list_double_graphic_heading_pane_g1

0x4b14,	// (0x0003f20d) list_double_graphic_heading_pane_g2_ParamLimits

0x4b14,	// (0x0003f20d) list_double_graphic_heading_pane_g2

0x5d19,	// (0x00040412) list_double_graphic_heading_pane_g3_ParamLimits

0x5d19,	// (0x00040412) list_double_graphic_heading_pane_g3

0x0002,

0xf64c,	// (0x00049d45) list_double_graphic_heading_pane_g_ParamLimits

0xf64c,	// (0x00049d45) list_double_graphic_heading_pane_g

0x4b47,	// (0x0003f240) list_double_graphic_heading_pane_t1_ParamLimits

0x4b47,	// (0x0003f240) list_double_graphic_heading_pane_t1

0x4a58,	// (0x0003f151) list_double_graphic_heading_pane_t2_ParamLimits

0x4a58,	// (0x0003f151) list_double_graphic_heading_pane_t2

0x0001,

0xf653,	// (0x00049d4c) list_double_graphic_heading_pane_t_ParamLimits

0xf653,	// (0x00049d4c) list_double_graphic_heading_pane_t

0x4b5d,	// (0x0003f256) list_double_time_pane_g1_ParamLimits

0x4b5d,	// (0x0003f256) list_double_time_pane_g1

0x4b6e,	// (0x0003f267) list_double_time_pane_g2_ParamLimits

0x4b6e,	// (0x0003f267) list_double_time_pane_g2

0x0001,

0xf658,	// (0x00049d51) list_double_time_pane_g_ParamLimits

0xf658,	// (0x00049d51) list_double_time_pane_g

0x4b7a,	// (0x0003f273) list_double_time_pane_t1_ParamLimits

0x4b7a,	// (0x0003f273) list_double_time_pane_t1

0x4b90,	// (0x0003f289) list_double_time_pane_t2_ParamLimits

0x4b90,	// (0x0003f289) list_double_time_pane_t2

0x4ba2,	// (0x0003f29b) list_double_time_pane_t3_ParamLimits

0x4ba2,	// (0x0003f29b) list_double_time_pane_t3

0x4bb4,	// (0x0003f2ad) list_double_time_pane_t4_ParamLimits

0x4bb4,	// (0x0003f2ad) list_double_time_pane_t4

0x0003,

0xf65d,	// (0x00049d56) list_double_time_pane_t_ParamLimits

0xf65d,	// (0x00049d56) list_double_time_pane_t

0x4bc6,	// (0x0003f2bf) list_setting_pane_g1_ParamLimits

0x4bc6,	// (0x0003f2bf) list_setting_pane_g1

0x496d,	// (0x0003f066) list_setting_pane_g2_ParamLimits

0x496d,	// (0x0003f066) list_setting_pane_g2

0x0001,

0xf666,	// (0x00049d5f) list_setting_pane_g_ParamLimits

0xf666,	// (0x00049d5f) list_setting_pane_g

0x4bd2,	// (0x0003f2cb) list_setting_pane_t1_ParamLimits

0x4bd2,	// (0x0003f2cb) list_setting_pane_t1

0x4bec,	// (0x0003f2e5) list_setting_pane_t2_ParamLimits

0x4bec,	// (0x0003f2e5) list_setting_pane_t2

0x0002,

0xf66b,	// (0x00049d64) list_setting_pane_t_ParamLimits

0xf66b,	// (0x00049d64) list_setting_pane_t

0x4c2b,	// (0x0003f324) set_value_pane_cp_ParamLimits

0x4c2b,	// (0x0003f324) set_value_pane_cp

0x4c37,	// (0x0003f330) list_setting_number_pane_g1_ParamLimits

0x4c37,	// (0x0003f330) list_setting_number_pane_g1

0x4c43,	// (0x0003f33c) list_setting_number_pane_g2_ParamLimits

0x4c43,	// (0x0003f33c) list_setting_number_pane_g2

0x0001,

0xf672,	// (0x00049d6b) list_setting_number_pane_g_ParamLimits

0xf672,	// (0x00049d6b) list_setting_number_pane_g

0x4c4f,	// (0x0003f348) list_setting_number_pane_t1_ParamLimits

0x4c4f,	// (0x0003f348) list_setting_number_pane_t1

0x4c68,	// (0x0003f361) list_setting_number_pane_t2_ParamLimits

0x4c68,	// (0x0003f361) list_setting_number_pane_t2

0x4c82,	// (0x0003f37b) list_setting_number_pane_t3_ParamLimits

0x4c82,	// (0x0003f37b) list_setting_number_pane_t3

0x0003,

0xf677,	// (0x00049d70) list_setting_number_pane_t_ParamLimits

0xf677,	// (0x00049d70) list_setting_number_pane_t

0x4c2b,	// (0x0003f324) set_value_pane_ParamLimits

0x4c2b,	// (0x0003f324) set_value_pane

0x876d,	// (0x00042e66) bg_set_opt_pane_ParamLimits

0x876d,	// (0x00042e66) bg_set_opt_pane

0x4cc5,	// (0x0003f3be) set_value_pane_t1

0x878e,	// (0x00042e87) slider_set_pane_cp3

0x8797,	// (0x00042e90) volume_small_pane_cp

0x87a0,	// (0x00042e99) list_form_gen_pane

0x87a9,	// (0x00042ea2) scroll_pane_cp8

0x4cdb,	// (0x0003f3d4) form_field_data_pane_ParamLimits

0x4cdb,	// (0x0003f3d4) form_field_data_pane

0x4cff,	// (0x0003f3f8) form_field_data_wide_pane_ParamLimits

0x4cff,	// (0x0003f3f8) form_field_data_wide_pane

0x4d22,	// (0x0003f41b) form_field_popup_pane_ParamLimits

0x4d22,	// (0x0003f41b) form_field_popup_pane

0x4d42,	// (0x0003f43b) form_field_popup_wide_pane_ParamLimits

0x4d42,	// (0x0003f43b) form_field_popup_wide_pane

0x4d61,	// (0x0003f45a) form_field_slider_pane_ParamLimits

0x4d61,	// (0x0003f45a) form_field_slider_pane

0x4d74,	// (0x0003f46d) form_field_slider_wide_pane_ParamLimits

0x4d74,	// (0x0003f46d) form_field_slider_wide_pane

0x87ba,	// (0x00042eb3) data_form_pane

0x4d91,	// (0x0003f48a) form_field_data_pane_t1

0x87c6,	// (0x00042ebf) input_focus_pane

0x4da9,	// (0x0003f4a2) data_form_wide_pane

0x4dc6,	// (0x0003f4bf) form_field_data_wide_pane_t1

0x852b,	// (0x00042c24) input_focus_pane_cp6

0x4de8,	// (0x0003f4e1) form_field_popup_pane_t1

0x87c6,	// (0x00042ebf) input_focus_pane_cp7

0x87e8,	// (0x00042ee1) list_form_pane

0x4e08,	// (0x0003f501) form_field_popup_wide_pane_t1

0x87c6,	// (0x00042ebf) input_focus_pane_cp8

0x87f4,	// (0x00042eed) list_form_wide_pane

0x4e25,	// (0x0003f51e) form_field_slider_pane_t1_ParamLimits

0x4e25,	// (0x0003f51e) form_field_slider_pane_t1

0x4e3b,	// (0x0003f534) form_field_slider_pane_t2_ParamLimits

0x4e3b,	// (0x0003f534) form_field_slider_pane_t2

0x0001,

0xf687,	// (0x00049d80) form_field_slider_pane_t_ParamLimits

0xf687,	// (0x00049d80) form_field_slider_pane_t

0x81a0,	// (0x00042899) input_focus_pane_cp9_ParamLimits

0x81a0,	// (0x00042899) input_focus_pane_cp9

0x4e50,	// (0x0003f549) slider_cont_pane_ParamLimits

0x4e50,	// (0x0003f549) slider_cont_pane

0x8800,	// (0x00042ef9) form_field_slider_wide_pane_t1_ParamLimits

0x8800,	// (0x00042ef9) form_field_slider_wide_pane_t1

0x4e64,	// (0x0003f55d) form_field_slider_wide_pane_t2_ParamLimits

0x4e64,	// (0x0003f55d) form_field_slider_wide_pane_t2

0x0001,

0xf68c,	// (0x00049d85) form_field_slider_wide_pane_t_ParamLimits

0xf68c,	// (0x00049d85) form_field_slider_wide_pane_t

0x81a0,	// (0x00042899) input_focus_pane_cp10_ParamLimits

0x81a0,	// (0x00042899) input_focus_pane_cp10

0x4e76,	// (0x0003f56f) slider_cont_pane_cp1_ParamLimits

0x4e76,	// (0x0003f56f) slider_cont_pane_cp1

0x4e8a,	// (0x0003f583) slider_form_pane_cp

0x8812,	// (0x00042f0b) input_focus_pane_g1

0x881a,	// (0x00042f13) input_focus_pane_g2

0x8822,	// (0x00042f1b) input_focus_pane_g3

0x882a,	// (0x00042f23) input_focus_pane_g4

0x8832,	// (0x00042f2b) input_focus_pane_g5

0x883a,	// (0x00042f33) input_focus_pane_g6

0x8842,	// (0x00042f3b) input_focus_pane_g7

0x884a,	// (0x00042f43) input_focus_pane_g8

0x8852,	// (0x00042f4b) input_focus_pane_g9

0x7e3b,	// (0x00042534) input_focus_pane_g10

0x0009,

0xf691,	// (0x00049d8a) input_focus_pane_g

0xa2c0,	// (0x000449b9) wait_border_pane_g3_copy1

0x4e92,	// (0x0003f58b) data_form_pane_t1

0x7e3b,	// (0x00042534) wait_anim_pane_g1_copy1

0x513f,	// (0x0003f838) data_form_wide_pane_t1

0x4ead,	// (0x0003f5a6) list_form_graphic_pane_cp_ParamLimits

0x4ead,	// (0x0003f5a6) list_form_graphic_pane_cp

0xb1d5,	// (0x000458ce) slider_form_pane_g1

0xb1de,	// (0x000458d7) slider_form_pane_g2

0x0006,

0xf994,	// (0x0004a08d) slider_form_pane_g

0x4ec6,	// (0x0003f5bf) list_form_graphic_pane_ParamLimits

0x4ec6,	// (0x0003f5bf) list_form_graphic_pane

0x4ee2,	// (0x0003f5db) list_form_graphic_pane_g1

0x4eea,	// (0x0003f5e3) list_form_graphic_pane_t1_ParamLimits

0x4eea,	// (0x0003f5e3) list_form_graphic_pane_t1

0x7f25,	// (0x0004261e) list_highlight_pane_cp5_ParamLimits

0x7f25,	// (0x0004261e) list_highlight_pane_cp5

0x4eff,	// (0x0003f5f8) find_pane_g1

0x885a,	// (0x00042f53) input_find_pane

0x4f08,	// (0x0003f601) input_find_pane_g1_ParamLimits

0x4f08,	// (0x0003f601) input_find_pane_g1

0x4f14,	// (0x0003f60d) input_find_pane_t1_ParamLimits

0x4f14,	// (0x0003f60d) input_find_pane_t1

0x4f29,	// (0x0003f622) input_find_pane_t2_ParamLimits

0x4f29,	// (0x0003f622) input_find_pane_t2

0x0001,

0xf6a6,	// (0x00049d9f) input_find_pane_t_ParamLimits

0xf6a6,	// (0x00049d9f) input_find_pane_t

0x8863,	// (0x00042f5c) input_focus_pane_cp5_ParamLimits

0x8863,	// (0x00042f5c) input_focus_pane_cp5

0x887d,	// (0x00042f76) bg_popup_window_pane_cp2_ParamLimits

0x887d,	// (0x00042f76) bg_popup_window_pane_cp2

0x888a,	// (0x00042f83) listscroll_menu_pane_ParamLimits

0x888a,	// (0x00042f83) listscroll_menu_pane

0x8896,	// (0x00042f8f) popup_submenu_window_ParamLimits

0x8896,	// (0x00042f8f) popup_submenu_window

0x88c2,	// (0x00042fbb) find_popup_pane_g1

0x88ca,	// (0x00042fc3) input_popup_find_pane_cp

0x8863,	// (0x00042f5c) input_focus_pane_cp4_ParamLimits

0x8863,	// (0x00042f5c) input_focus_pane_cp4

0x88e0,	// (0x00042fd9) input_popup_find_pane_t1_ParamLimits

0x88e0,	// (0x00042fd9) input_popup_find_pane_t1

0x7e45,	// (0x0004253e) bg_popup_sub_pane_cp

0x890e,	// (0x00043007) listscroll_popup_sub_pane

0x8916,	// (0x0004300f) list_submenu_pane_ParamLimits

0x8916,	// (0x0004300f) list_submenu_pane

0x8927,	// (0x00043020) scroll_pane_cp4

0x892f,	// (0x00043028) list_single_popup_submenu_pane_ParamLimits

0x892f,	// (0x00043028) list_single_popup_submenu_pane

0x8943,	// (0x0004303c) list_single_popup_submenu_pane_g1

0x894b,	// (0x00043044) list_single_popup_submenu_pane_t1_ParamLimits

0x894b,	// (0x00043044) list_single_popup_submenu_pane_t1

0x7f25,	// (0x0004261e) bg_active_tab_pane_cp1_ParamLimits

0x7f25,	// (0x0004261e) bg_active_tab_pane_cp1

0x8960,	// (0x00043059) tabs_2_active_pane_g1

0x8968,	// (0x00043061) tabs_2_active_pane_t1

0x7f25,	// (0x0004261e) bg_passive_tab_pane_cp1_ParamLimits

0x7f25,	// (0x0004261e) bg_passive_tab_pane_cp1

0x8960,	// (0x00043059) tabs_2_passive_pane_g1

0x8968,	// (0x00043061) tabs_2_passive_pane_t1

0x897a,	// (0x00043073) bg_active_tab_pane_cp4

0x8988,	// (0x00043081) tabs_2_long_active_pane_t1

0x899b,	// (0x00043094) bg_passive_tab_pane_cp4

0x5fd2,	// (0x000406cb) list_single_midp_graphic_pane_g4_ParamLimits

0x897a,	// (0x00043073) bg_active_tab_pane_cp5

0x89a7,	// (0x000430a0) tabs_3_long_active_pane_t1

0x899b,	// (0x00043094) bg_passive_tab_pane_cp5

0x5fd2,	// (0x000406cb) list_single_midp_graphic_pane_g4

0x7f25,	// (0x0004261e) bg_popup_window_pane_cp13_ParamLimits

0x7f25,	// (0x0004261e) bg_popup_window_pane_cp13

0x89c2,	// (0x000430bb) listscroll_popup_fast_pane_ParamLimits

0x89c2,	// (0x000430bb) listscroll_popup_fast_pane

0x89d1,	// (0x000430ca) grid_popup_fast_pane_ParamLimits

0x89d1,	// (0x000430ca) grid_popup_fast_pane

0x89e3,	// (0x000430dc) scroll_pane_cp9_ParamLimits

0x89e3,	// (0x000430dc) scroll_pane_cp9

0xca7f,	// (0x00047178) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xca7f,	// (0x00047178) list_single_graphic_hl_pane_t1_cp2

0x8a07,	// (0x00043100) input_focus_pane_cp20_ParamLimits

0x8a07,	// (0x00043100) input_focus_pane_cp20

0x8a15,	// (0x0004310e) query_popup_data_pane_t1_ParamLimits

0x8a15,	// (0x0004310e) query_popup_data_pane_t1

0x8a28,	// (0x00043121) query_popup_data_pane_t2_ParamLimits

0x8a28,	// (0x00043121) query_popup_data_pane_t2

0x8a6e,	// (0x00043167) query_popup_data_pane_t3_ParamLimits

0x8a6e,	// (0x00043167) query_popup_data_pane_t3

0x8aaf,	// (0x000431a8) query_popup_data_pane_t4_ParamLimits

0x8aaf,	// (0x000431a8) query_popup_data_pane_t4

0x8aeb,	// (0x000431e4) query_popup_data_pane_t5_ParamLimits

0x8aeb,	// (0x000431e4) query_popup_data_pane_t5

0x0004,

0xf6ab,	// (0x00049da4) query_popup_data_pane_t_ParamLimits

0xf6ab,	// (0x00049da4) query_popup_data_pane_t

0x8812,	// (0x00042f0b) bg_set_opt_pane_g1

0x881a,	// (0x00042f13) bg_set_opt_pane_g2

0x8822,	// (0x00042f1b) bg_set_opt_pane_g3

0x882a,	// (0x00042f23) bg_set_opt_pane_g4

0x8832,	// (0x00042f2b) bg_set_opt_pane_g5

0x883a,	// (0x00042f33) bg_set_opt_pane_g6

0x8842,	// (0x00042f3b) bg_set_opt_pane_g7

0x884a,	// (0x00042f43) bg_set_opt_pane_g8

0x8852,	// (0x00042f4b) bg_set_opt_pane_g9

0x0008,

0xf6b6,	// (0x00049daf) bg_set_opt_pane_g

0x5fde,	// (0x000406d7) control_top_pane_stacon_ParamLimits

0x5fde,	// (0x000406d7) control_top_pane_stacon

0x6031,	// (0x0004072a) signal_pane_stacon_ParamLimits

0x6031,	// (0x0004072a) signal_pane_stacon

0x90dd,	// (0x000437d6) stacon_top_pane_g1_ParamLimits

0x90dd,	// (0x000437d6) stacon_top_pane_g1

0x6056,	// (0x0004074f) title_pane_stacon_ParamLimits

0x6056,	// (0x0004074f) title_pane_stacon

0x6080,	// (0x00040779) uni_indicator_pane_stacon_ParamLimits

0x6080,	// (0x00040779) uni_indicator_pane_stacon

0x6095,	// (0x0004078e) battery_pane_stacon_ParamLimits

0x6095,	// (0x0004078e) battery_pane_stacon

0x60d9,	// (0x000407d2) control_bottom_pane_stacon_ParamLimits

0x60d9,	// (0x000407d2) control_bottom_pane_stacon

0x60fc,	// (0x000407f5) navi_pane_stacon_ParamLimits

0x60fc,	// (0x000407f5) navi_pane_stacon

0x90ff,	// (0x000437f8) stacon_bottom_pane_g1_ParamLimits

0x90ff,	// (0x000437f8) stacon_bottom_pane_g1

0x5d25,	// (0x0004041e) aid_levels_signal_lsc_ParamLimits

0x5d25,	// (0x0004041e) aid_levels_signal_lsc

0x5d3b,	// (0x00040434) signal_pane_stacon_g1_ParamLimits

0x5d3b,	// (0x00040434) signal_pane_stacon_g1

0x5d4f,	// (0x00040448) signal_pane_stacon_g2_ParamLimits

0x5d4f,	// (0x00040448) signal_pane_stacon_g2

0x0001,

0xf6c9,	// (0x00049dc2) signal_pane_stacon_g_ParamLimits

0xf6c9,	// (0x00049dc2) signal_pane_stacon_g

0x5d84,	// (0x0004047d) title_pane_stacon_t1_ParamLimits

0x5d84,	// (0x0004047d) title_pane_stacon_t1

0x8b2f,	// (0x00043228) uni_indicator_pane_stacon_g1

0x8b39,	// (0x00043232) uni_indicator_pane_stacon_g2

0x8b43,	// (0x0004323c) uni_indicator_pane_stacon_g3

0x8b4d,	// (0x00043246) uni_indicator_pane_stacon_g4

0x0003,

0xf6d5,	// (0x00049dce) uni_indicator_pane_stacon_g

0x5da9,	// (0x000404a2) control_top_pane_stacon_g1

0x5db1,	// (0x000404aa) control_top_pane_stacon_t1_ParamLimits

0x5db1,	// (0x000404aa) control_top_pane_stacon_t1

0x5de8,	// (0x000404e1) aid_levels_battery_lsc_ParamLimits

0x5de8,	// (0x000404e1) aid_levels_battery_lsc

0x5dff,	// (0x000404f8) battery_pane_stacon_g1_ParamLimits

0x5dff,	// (0x000404f8) battery_pane_stacon_g1

0x5e12,	// (0x0004050b) battery_pane_stacon_g2_ParamLimits

0x5e12,	// (0x0004050b) battery_pane_stacon_g2

0x0001,

0xf6de,	// (0x00049dd7) battery_pane_stacon_g_ParamLimits

0xf6de,	// (0x00049dd7) battery_pane_stacon_g

0x5e50,	// (0x00040549) navi_icon_pane_stacon

0x5e64,	// (0x0004055d) navi_navi_pane_stacon

0x5e50,	// (0x00040549) navi_text_pane_stacon

0x5da9,	// (0x000404a2) control_bottom_pane_stacon_g1

0x5e78,	// (0x00040571) control_bottom_pane_stacon_t1_ParamLimits

0x5e78,	// (0x00040571) control_bottom_pane_stacon_t1

0x8b71,	// (0x0004326a) grid_app_pane_ParamLimits

0x8b71,	// (0x0004326a) grid_app_pane

0x8b93,	// (0x0004328c) scroll_pane_cp15_ParamLimits

0x8b93,	// (0x0004328c) scroll_pane_cp15

0x8ba6,	// (0x0004329f) cell_app_pane_ParamLimits

0x8ba6,	// (0x0004329f) cell_app_pane

0x8bce,	// (0x000432c7) cell_app_pane_g1_ParamLimits

0x8bce,	// (0x000432c7) cell_app_pane_g1

0x8bf2,	// (0x000432eb) cell_app_pane_g2_ParamLimits

0x8bf2,	// (0x000432eb) cell_app_pane_g2

0x0001,

0xf6e3,	// (0x00049ddc) cell_app_pane_g_ParamLimits

0xf6e3,	// (0x00049ddc) cell_app_pane_g

0x8bfe,	// (0x000432f7) cell_app_pane_t1_ParamLimits

0x8bfe,	// (0x000432f7) cell_app_pane_t1

0x8c15,	// (0x0004330e) grid_highlight_pane_ParamLimits

0x8c15,	// (0x0004330e) grid_highlight_pane

0x8812,	// (0x00042f0b) cell_highlight_pane_g1

0x881a,	// (0x00042f13) cell_highlight_pane_g2

0x8822,	// (0x00042f1b) cell_highlight_pane_g3

0x882a,	// (0x00042f23) cell_highlight_pane_g4

0x8832,	// (0x00042f2b) cell_highlight_pane_g5

0x883a,	// (0x00042f33) cell_highlight_pane_g6

0x8842,	// (0x00042f3b) cell_highlight_pane_g7

0x884a,	// (0x00042f43) cell_highlight_pane_g8

0x8852,	// (0x00042f4b) cell_highlight_pane_g9

0x7e3b,	// (0x00042534) cell_highlight_pane_g10

0x0009,

0xf691,	// (0x00049d8a) cell_highlight_pane_g

0x8c26,	// (0x0004331f) bg_scroll_pane

0x5ec2,	// (0x000405bb) scroll_handle_pane

0x8c6d,	// (0x00043366) scroll_bg_pane_g1

0x8c82,	// (0x0004337b) scroll_bg_pane_g2

0x8c9a,	// (0x00043393) scroll_bg_pane_g3

0x0002,

0xf6e8,	// (0x00049de1) scroll_bg_pane_g

0x8caf,	// (0x000433a8) scroll_handle_focus_pane_ParamLimits

0x8caf,	// (0x000433a8) scroll_handle_focus_pane

0x8c6d,	// (0x00043366) scroll_handle_pane_g1

0x8cbc,	// (0x000433b5) scroll_handle_pane_g2

0x8c9a,	// (0x00043393) scroll_handle_pane_g3

0x0002,

0xf6ef,	// (0x00049de8) scroll_handle_pane_g

0x8863,	// (0x00042f5c) bg_popup_sub_pane_cp21_ParamLimits

0x8863,	// (0x00042f5c) bg_popup_sub_pane_cp21

0x8cd0,	// (0x000433c9) popup_fep_japan_predictive_window_t1_ParamLimits

0x8cd0,	// (0x000433c9) popup_fep_japan_predictive_window_t1

0x8cea,	// (0x000433e3) popup_fep_japan_predictive_window_t2_ParamLimits

0x8cea,	// (0x000433e3) popup_fep_japan_predictive_window_t2

0x8d1d,	// (0x00043416) popup_fep_japan_predictive_window_t3_ParamLimits

0x8d1d,	// (0x00043416) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f6,	// (0x00049def) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f6,	// (0x00049def) popup_fep_japan_predictive_window_t

0x7e45,	// (0x0004253e) bg_popup_sub_pane_cp23

0x8d54,	// (0x0004344d) listscroll_japin_cand_pane

0x8d5c,	// (0x00043455) popup_fep_japan_candidate_window_t1

0x8d6a,	// (0x00043463) candidate_pane_ParamLimits

0x8d6a,	// (0x00043463) candidate_pane

0x8d7c,	// (0x00043475) scroll_pane_cp30

0x8d84,	// (0x0004347d) list_single_popup_jap_candidate_pane_ParamLimits

0x8d84,	// (0x0004347d) list_single_popup_jap_candidate_pane

0x7e45,	// (0x0004253e) list_highlight_pane_cp30

0x8d99,	// (0x00043492) list_single_popup_jap_candidate_pane_t1

0x8da8,	// (0x000434a1) level_1_signal

0x8dba,	// (0x000434b3) level_2_signal

0x8dcd,	// (0x000434c6) level_3_signal

0x8de0,	// (0x000434d9) level_4_signal

0x8df3,	// (0x000434ec) level_5_signal

0x8e06,	// (0x000434ff) level_6_signal

0x8e19,	// (0x00043512) level_7_signal

0x8da8,	// (0x000434a1) level_1_battery

0x8dba,	// (0x000434b3) level_2_battery

0x8dcd,	// (0x000434c6) level_3_battery

0x8de0,	// (0x000434d9) level_4_battery

0x8df3,	// (0x000434ec) level_5_battery

0x8e06,	// (0x000434ff) level_6_battery

0x8e19,	// (0x00043512) level_7_battery

0x8e44,	// (0x0004353d) list_menu_pane_ParamLimits

0x8e44,	// (0x0004353d) list_menu_pane

0x8e5a,	// (0x00043553) scroll_pane_cp25_ParamLimits

0x8e5a,	// (0x00043553) scroll_pane_cp25

0x8e73,	// (0x0004356c) list_double2_graphic_pane_cp2_ParamLimits

0x8e73,	// (0x0004356c) list_double2_graphic_pane_cp2

0x8e73,	// (0x0004356c) list_double2_large_graphic_pane_cp2_ParamLimits

0x8e73,	// (0x0004356c) list_double2_large_graphic_pane_cp2

0x8e73,	// (0x0004356c) list_double2_pane_cp2_ParamLimits

0x8e73,	// (0x0004356c) list_double2_pane_cp2

0x8e73,	// (0x0004356c) list_double_graphic_pane_cp2_ParamLimits

0x8e73,	// (0x0004356c) list_double_graphic_pane_cp2

0x8e73,	// (0x0004356c) list_double_large_graphic_pane_cp2_ParamLimits

0x8e73,	// (0x0004356c) list_double_large_graphic_pane_cp2

0x8e73,	// (0x0004356c) list_double_number_pane_cp2_ParamLimits

0x8e73,	// (0x0004356c) list_double_number_pane_cp2

0x8e73,	// (0x0004356c) list_double_pane_cp2_ParamLimits

0x8e73,	// (0x0004356c) list_double_pane_cp2

0x8e97,	// (0x00043590) list_single_2graphic_pane_cp2_ParamLimits

0x8e97,	// (0x00043590) list_single_2graphic_pane_cp2

0x8e97,	// (0x00043590) list_single_graphic_heading_pane_cp2_ParamLimits

0x8e97,	// (0x00043590) list_single_graphic_heading_pane_cp2

0x8e97,	// (0x00043590) list_single_graphic_pane_cp2_ParamLimits

0x8e97,	// (0x00043590) list_single_graphic_pane_cp2

0x8e97,	// (0x00043590) list_single_heading_pane_cp2_ParamLimits

0x8e97,	// (0x00043590) list_single_heading_pane_cp2

0x8eb0,	// (0x000435a9) list_single_large_graphic_pane_cp2_ParamLimits

0x8eb0,	// (0x000435a9) list_single_large_graphic_pane_cp2

0x8e97,	// (0x00043590) list_single_number_heading_pane_cp2_ParamLimits

0x8e97,	// (0x00043590) list_single_number_heading_pane_cp2

0x8e97,	// (0x00043590) list_single_number_pane_cp2_ParamLimits

0x8e97,	// (0x00043590) list_single_number_pane_cp2

0x8e97,	// (0x00043590) list_single_pane_cp2_ParamLimits

0x8e97,	// (0x00043590) list_single_pane_cp2

0x8f2c,	// (0x00043625) bg_popup_sub_pane_cp22

0x5f74,	// (0x0004066d) popup_side_volume_key_window_g1

0x5f9e,	// (0x00040697) popup_side_volume_key_window_t1

0x5fba,	// (0x000406b3) volume_small_pane_cp1

0x81a0,	// (0x00042899) bg_popup_sub_pane_cp24_ParamLimits

0x81a0,	// (0x00042899) bg_popup_sub_pane_cp24

0x8f42,	// (0x0004363b) fep_china_uni_candidate_pane_ParamLimits

0x8f42,	// (0x0004363b) fep_china_uni_candidate_pane

0x8f56,	// (0x0004364f) fep_china_uni_entry_pane

0x8f66,	// (0x0004365f) popup_fep_china_uni_window_g1

0x8f82,	// (0x0004367b) fep_china_uni_entry_pane_g1

0x8f8a,	// (0x00043683) fep_china_uni_entry_pane_g2

0x0001,

0xf727,	// (0x00049e20) fep_china_uni_entry_pane_g

0x8f92,	// (0x0004368b) fep_entry_item_pane

0x8f9c,	// (0x00043695) fep_candidate_item_pane

0x8fa4,	// (0x0004369d) fep_china_uni_candidate_pane_g1

0x8fac,	// (0x000436a5) fep_china_uni_candidate_pane_g2

0x8fb4,	// (0x000436ad) fep_china_uni_candidate_pane_g3

0x8fbc,	// (0x000436b5) fep_china_uni_candidate_pane_g4

0x0003,

0xf72c,	// (0x00049e25) fep_china_uni_candidate_pane_g

0x7e3b,	// (0x00042534) fep_entry_item_pane_g1

0x8fc4,	// (0x000436bd) fep_entry_item_pane_t1_ParamLimits

0x8fc4,	// (0x000436bd) fep_entry_item_pane_t1

0x8fda,	// (0x000436d3) fep_candidate_item_pane_t1_ParamLimits

0x8fda,	// (0x000436d3) fep_candidate_item_pane_t1

0x8fef,	// (0x000436e8) fep_candidate_item_pane_t2_ParamLimits

0x8fef,	// (0x000436e8) fep_candidate_item_pane_t2

0x0001,

0xf735,	// (0x00049e2e) fep_candidate_item_pane_t_ParamLimits

0xf735,	// (0x00049e2e) fep_candidate_item_pane_t

0x7f25,	// (0x0004261e) list_highlight_pane_cp31_ParamLimits

0x7f25,	// (0x0004261e) list_highlight_pane_cp31

0x9001,	// (0x000436fa) level_1_signal_lsc

0x900a,	// (0x00043703) level_2_signal_lsc

0x9013,	// (0x0004370c) level_3_signal_lsc

0x901c,	// (0x00043715) level_4_signal_lsc

0x9025,	// (0x0004371e) level_5_signal_lsc

0x902e,	// (0x00043727) level_6_signal_lsc

0x9037,	// (0x00043730) level_7_signal_lsc

0x9037,	// (0x00043730) level_1_battery_lsc

0x9040,	// (0x00043739) level_2_battery_lsc

0x9049,	// (0x00043742) level_3_battery_lsc

0x9052,	// (0x0004374b) level_4_battery_lsc

0x905b,	// (0x00043754) level_5_battery_lsc

0x9064,	// (0x0004375d) level_6_battery_lsc

0x9001,	// (0x000436fa) level_7_battery_lsc

0x906d,	// (0x00043766) scroll_handle_focus_pane_g1

0x9076,	// (0x0004376f) scroll_handle_focus_pane_g2

0x907f,	// (0x00043778) scroll_handle_focus_pane_g3

0x0002,

0xf73a,	// (0x00049e33) scroll_handle_focus_pane_g

0x4f3e,	// (0x0003f637) list_single_2graphic_pane_g1_ParamLimits

0x4f3e,	// (0x0003f637) list_single_2graphic_pane_g1

0x5ca3,	// (0x0004039c) list_single_2graphic_pane_g2_ParamLimits

0x5ca3,	// (0x0004039c) list_single_2graphic_pane_g2

0x5c85,	// (0x0004037e) list_single_2graphic_pane_g3_ParamLimits

0x5c85,	// (0x0004037e) list_single_2graphic_pane_g3

0x4f4a,	// (0x0003f643) list_single_2graphic_pane_g4_ParamLimits

0x4f4a,	// (0x0003f643) list_single_2graphic_pane_g4

0x0003,

0xf741,	// (0x00049e3a) list_single_2graphic_pane_g_ParamLimits

0xf741,	// (0x00049e3a) list_single_2graphic_pane_g

0x4f56,	// (0x0003f64f) list_single_2graphic_pane_t1_ParamLimits

0x4f56,	// (0x0003f64f) list_single_2graphic_pane_t1

0x5fc2,	// (0x000406bb) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x5fc2,	// (0x000406bb) list_double2_graphic_large_graphic_pane_g1

0x4adb,	// (0x0003f1d4) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x4adb,	// (0x0003f1d4) list_double2_graphic_large_graphic_pane_g2

0x5cec,	// (0x000403e5) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x5cec,	// (0x000403e5) list_double2_graphic_large_graphic_pane_g3

0x5fd2,	// (0x000406cb) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x5fd2,	// (0x000406cb) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf74a,	// (0x00049e43) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf74a,	// (0x00049e43) list_double2_graphic_large_graphic_pane_g

0x4f84,	// (0x0003f67d) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x4f84,	// (0x0003f67d) list_double2_graphic_large_graphic_pane_t1

0x4f9a,	// (0x0003f693) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x4f9a,	// (0x0003f693) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf753,	// (0x00049e4c) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf753,	// (0x00049e4c) list_double2_graphic_large_graphic_pane_t

0x91c7,	// (0x000438c0) popup_fast_swap_window_ParamLimits

0x91c7,	// (0x000438c0) popup_fast_swap_window

0x91e3,	// (0x000438dc) popup_side_volume_key_window

0x91ff,	// (0x000438f8) stacon_top_pane

0x9209,	// (0x00043902) status_pane_ParamLimits

0x9209,	// (0x00043902) status_pane

0x9217,	// (0x00043910) status_small_pane

0x7e45,	// (0x0004253e) control_pane

0x7e45,	// (0x0004253e) stacon_bottom_pane

0x87a9,	// (0x00042ea2) scroll_pane_cp121

0x87a0,	// (0x00042e99) set_content_pane

0x909a,	// (0x00043793) bg_active_tab_pane_g1_cp1

0x9088,	// (0x00043781) bg_active_tab_pane_g2_cp1

0x9091,	// (0x0004378a) bg_active_tab_pane_g3_cp1

0x909a,	// (0x00043793) bg_passive_tab_pane_g1_cp1

0x9088,	// (0x00043781) bg_passive_tab_pane_g2_cp1

0x9091,	// (0x0004378a) bg_passive_tab_pane_g3_cp1

0x90a3,	// (0x0004379c) bg_active_tab_pane_g1_cp2

0x9088,	// (0x00043781) bg_active_tab_pane_g2_cp2

0x90ac,	// (0x000437a5) bg_active_tab_pane_g3_cp2

0x90a3,	// (0x0004379c) bg_passive_tab_pane_g1_cp2

0x9088,	// (0x00043781) bg_passive_tab_pane_g2_cp2

0x90ac,	// (0x000437a5) bg_passive_tab_pane_g3_cp2

0x90b5,	// (0x000437ae) bg_active_tab_pane_g1_cp3

0x9088,	// (0x00043781) bg_active_tab_pane_g2_cp3

0x90be,	// (0x000437b7) bg_active_tab_pane_g3_cp3

0x90b5,	// (0x000437ae) bg_passive_tab_pane_g1_cp3

0x9088,	// (0x00043781) bg_passive_tab_pane_g2_cp3

0x90be,	// (0x000437b7) bg_passive_tab_pane_g3_cp3

0x90c7,	// (0x000437c0) bg_active_tab_pane_g1_cp4

0x9088,	// (0x00043781) bg_active_tab_pane_g2_cp4

0x90d2,	// (0x000437cb) bg_active_tab_pane_g3_cp4

0x90c7,	// (0x000437c0) bg_passive_tab_pane_g1_cp4

0x9088,	// (0x00043781) bg_passive_tab_pane_g2_cp4

0x90d2,	// (0x000437cb) bg_passive_tab_pane_g3_cp4

0x911b,	// (0x00043814) bg_active_tab_pane_g1_cp5

0x9088,	// (0x00043781) bg_active_tab_pane_g2_cp5

0x9124,	// (0x0004381d) bg_active_tab_pane_g3_cp5

0x911b,	// (0x00043814) bg_passive_tab_pane_g1_cp5

0x9088,	// (0x00043781) bg_passive_tab_pane_g2_cp5

0x9124,	// (0x0004381d) bg_passive_tab_pane_g3_cp5

0x912d,	// (0x00043826) list_set_graphic_pane_ParamLimits

0x912d,	// (0x00043826) list_set_graphic_pane

0x7e45,	// (0x0004253e) bg_set_opt_pane_cp4

0x914a,	// (0x00043843) list_set_graphic_pane_g1_ParamLimits

0x914a,	// (0x00043843) list_set_graphic_pane_g1

0x9156,	// (0x0004384f) list_set_graphic_pane_g2_ParamLimits

0x9156,	// (0x0004384f) list_set_graphic_pane_g2

0x0001,

0xf758,	// (0x00049e51) list_set_graphic_pane_g_ParamLimits

0xf758,	// (0x00049e51) list_set_graphic_pane_g

0x0009,

0xfacd,	// (0x0004a1c6) volume_small_pane_cp_g

0x917a,	// (0x00043873) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x917a,	// (0x00043873) list_double2_large_graphic_pane_g1_cp2

0x9186,	// (0x0004387f) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x9186,	// (0x0004387f) list_double2_large_graphic_pane_g2_cp2

0x9197,	// (0x00043890) list_double2_large_graphic_pane_g3_cp2

0x919f,	// (0x00043898) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x919f,	// (0x00043898) list_double2_large_graphic_pane_t1_cp2

0x91b5,	// (0x000438ae) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x91b5,	// (0x000438ae) list_double2_large_graphic_pane_t2_cp2

0xad93,	// (0x0004548c) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xad93,	// (0x0004548c) list_double_large_graphic_pane_g1_cp2

0xada4,	// (0x0004549d) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xada4,	// (0x0004549d) list_double_large_graphic_pane_g2_cp2

0x9330,	// (0x00043a29) list_double_large_graphic_pane_g3_cp2

0xadb5,	// (0x000454ae) list_double_large_graphic_pane_g4_cp

0xadbd,	// (0x000454b6) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xadbd,	// (0x000454b6) list_double_large_graphic_pane_t1_cp2

0xadd4,	// (0x000454cd) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xadd4,	// (0x000454cd) list_double_large_graphic_pane_t2_cp2

0x9222,	// (0x0004391b) list_double2_graphic_pane_g1_cp2_ParamLimits

0x9222,	// (0x0004391b) list_double2_graphic_pane_g1_cp2

0x9230,	// (0x00043929) list_double2_graphic_pane_g2_cp2_ParamLimits

0x9230,	// (0x00043929) list_double2_graphic_pane_g2_cp2

0x9241,	// (0x0004393a) list_double2_graphic_pane_g3_cp2

0x924b,	// (0x00043944) list_double2_graphic_pane_t1_cp2_ParamLimits

0x924b,	// (0x00043944) list_double2_graphic_pane_t1_cp2

0x9261,	// (0x0004395a) list_double2_graphic_pane_t2_cp2_ParamLimits

0x9261,	// (0x0004395a) list_double2_graphic_pane_t2_cp2

0x9273,	// (0x0004396c) list_single_number_heading_pane_g1_cp2_ParamLimits

0x9273,	// (0x0004396c) list_single_number_heading_pane_g1_cp2

0x927f,	// (0x00043978) list_single_number_heading_pane_g2_cp2

0x9287,	// (0x00043980) list_single_number_heading_pane_t1_cp2_ParamLimits

0x9287,	// (0x00043980) list_single_number_heading_pane_t1_cp2

0x929d,	// (0x00043996) list_single_number_heading_pane_t2_cp2_ParamLimits

0x929d,	// (0x00043996) list_single_number_heading_pane_t2_cp2

0x92af,	// (0x000439a8) list_single_number_heading_pane_t3_cp2_ParamLimits

0x92af,	// (0x000439a8) list_single_number_heading_pane_t3_cp2

0x9273,	// (0x0004396c) list_single_heading_pane_g1_cp2_ParamLimits

0x9273,	// (0x0004396c) list_single_heading_pane_g1_cp2

0x927f,	// (0x00043978) list_single_heading_pane_g2_cp2

0x9287,	// (0x00043980) list_single_heading_pane_t1_cp2_ParamLimits

0x9287,	// (0x00043980) list_single_heading_pane_t1_cp2

0xab9b,	// (0x00045294) list_single_heading_pane_t2_cp2_ParamLimits

0xab9b,	// (0x00045294) list_single_heading_pane_t2_cp2

0xaae3,	// (0x000451dc) list_double_graphic_pane_g1_cp2_ParamLimits

0xaae3,	// (0x000451dc) list_double_graphic_pane_g1_cp2

0xaaef,	// (0x000451e8) list_double_graphic_pane_g2_cp2_ParamLimits

0xaaef,	// (0x000451e8) list_double_graphic_pane_g2_cp2

0xaafe,	// (0x000451f7) list_double_graphic_pane_g3_cp2

0xab06,	// (0x000451ff) list_double_graphic_pane_t1_cp2_ParamLimits

0xab06,	// (0x000451ff) list_double_graphic_pane_t1_cp2

0xab1c,	// (0x00045215) list_double_graphic_pane_t2_cp2_ParamLimits

0xab1c,	// (0x00045215) list_double_graphic_pane_t2_cp2

0x9324,	// (0x00043a1d) list_double_number_pane_g1_cp2_ParamLimits

0x9324,	// (0x00043a1d) list_double_number_pane_g1_cp2

0x9330,	// (0x00043a29) list_double_number_pane_g2_cp2

0xaaa7,	// (0x000451a0) list_double_number_pane_t1_cp2_ParamLimits

0xaaa7,	// (0x000451a0) list_double_number_pane_t1_cp2

0xaabb,	// (0x000451b4) list_double_number_pane_t2_cp2_ParamLimits

0xaabb,	// (0x000451b4) list_double_number_pane_t2_cp2

0xaad1,	// (0x000451ca) list_double_number_pane_t3_cp2_ParamLimits

0xaad1,	// (0x000451ca) list_double_number_pane_t3_cp2

0xa990,	// (0x00045089) list_single_graphic_pane_g1_cp2_ParamLimits

0xa990,	// (0x00045089) list_single_graphic_pane_g1_cp2

0x9388,	// (0x00043a81) list_single_graphic_pane_g2_cp2_ParamLimits

0x9388,	// (0x00043a81) list_single_graphic_pane_g2_cp2

0x9394,	// (0x00043a8d) list_single_graphic_pane_g3_cp2

0xa966,	// (0x0004505f) list_single_graphic_pane_t1_cp2_ParamLimits

0xa966,	// (0x0004505f) list_single_graphic_pane_t1_cp2

0x9388,	// (0x00043a81) list_single_number_pane_g1_cp2_ParamLimits

0x9388,	// (0x00043a81) list_single_number_pane_g1_cp2

0x9394,	// (0x00043a8d) list_single_number_pane_g2_cp2

0xa966,	// (0x0004505f) list_single_number_pane_t1_cp2_ParamLimits

0xa966,	// (0x0004505f) list_single_number_pane_t1_cp2

0xa97c,	// (0x00045075) list_single_number_pane_t2_cp2_ParamLimits

0xa97c,	// (0x00045075) list_single_number_pane_t2_cp2

0x9186,	// (0x0004387f) list_double2_pane_g1_cp2_ParamLimits

0x9186,	// (0x0004387f) list_double2_pane_g1_cp2

0x9197,	// (0x00043890) list_double2_pane_g2_cp2

0x92fc,	// (0x000439f5) list_double2_pane_t1_cp2_ParamLimits

0x92fc,	// (0x000439f5) list_double2_pane_t1_cp2

0x9312,	// (0x00043a0b) list_double2_pane_t2_cp2_ParamLimits

0x9312,	// (0x00043a0b) list_double2_pane_t2_cp2

0x9324,	// (0x00043a1d) list_double_pane_g1_cp2_ParamLimits

0x9324,	// (0x00043a1d) list_double_pane_g1_cp2

0x9330,	// (0x00043a29) list_double_pane_g2_cp2

0x9338,	// (0x00043a31) list_double_pane_t1_cp2_ParamLimits

0x9338,	// (0x00043a31) list_double_pane_t1_cp2

0x934e,	// (0x00043a47) list_double_pane_t2_cp2_ParamLimits

0x934e,	// (0x00043a47) list_double_pane_t2_cp2

0x9378,	// (0x00043a71) list_single_pane_cp2_g3

0x9388,	// (0x00043a81) list_single_pane_g1_cp2_ParamLimits

0x9388,	// (0x00043a81) list_single_pane_g1_cp2

0x9394,	// (0x00043a8d) list_single_pane_g2_cp2

0x939c,	// (0x00043a95) list_single_pane_t1_cp2_ParamLimits

0x939c,	// (0x00043a95) list_single_pane_t1_cp2

0x93b4,	// (0x00043aad) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x93b4,	// (0x00043aad) list_single_large_graphic_pane_g1_cp2

0x93c0,	// (0x00043ab9) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x93c0,	// (0x00043ab9) list_single_large_graphic_pane_g2_cp2

0x93cc,	// (0x00043ac5) list_single_large_graphic_pane_g3_cp2

0x93d4,	// (0x00043acd) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x93d4,	// (0x00043acd) list_single_large_graphic_pane_g4_cp1

0x93ee,	// (0x00043ae7) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x93ee,	// (0x00043ae7) list_single_large_graphic_pane_t1_cp2

0xa932,	// (0x0004502b) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa932,	// (0x0004502b) list_single_graphic_heading_pane_g1_cp2

0xa8ff,	// (0x00044ff8) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa8ff,	// (0x00044ff8) list_single_graphic_heading_pane_g4_cp2

0x9394,	// (0x00043a8d) list_single_graphic_heading_pane_g5_cp2

0xa93e,	// (0x00045037) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa93e,	// (0x00045037) list_single_graphic_heading_pane_t1_cp2

0xa954,	// (0x0004504d) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa954,	// (0x0004504d) list_single_graphic_heading_pane_t2_cp2

0xa8f3,	// (0x00044fec) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa8f3,	// (0x00044fec) list_single_2graphic_pane_g1_cp2

0xa8ff,	// (0x00044ff8) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa8ff,	// (0x00044ff8) list_single_2graphic_pane_g2_cp2

0x9394,	// (0x00043a8d) list_single_2graphic_pane_g3_cp2

0xa910,	// (0x00045009) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa910,	// (0x00045009) list_single_2graphic_pane_g4_cp2

0xa91c,	// (0x00045015) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa91c,	// (0x00045015) list_single_2graphic_pane_t1_cp2

0x7e3b,	// (0x00042534) list_highlight_pane_g10_cp1

0xa4cb,	// (0x00044bc4) list_highlight_pane_g1_cp1

0xa4d3,	// (0x00044bcc) list_highlight_pane_g2_cp1

0xa4db,	// (0x00044bd4) list_highlight_pane_g3_cp1

0xa4e3,	// (0x00044bdc) list_highlight_pane_g4_cp1

0xa4eb,	// (0x00044be4) list_highlight_pane_g5_cp1

0xa4f3,	// (0x00044bec) list_highlight_pane_g6_cp1

0xa4fb,	// (0x00044bf4) list_highlight_pane_g7_cp1

0xa503,	// (0x00044bfc) list_highlight_pane_g8_cp1

0xa50b,	// (0x00044c04) list_highlight_pane_g9_cp1

0xa3eb,	// (0x00044ae4) form_field_slider_pane_t3

0xa3f9,	// (0x00044af2) form_field_slider_pane_t4

0xa407,	// (0x00044b00) slider_form_pane_ParamLimits

0xa407,	// (0x00044b00) slider_form_pane

0x7e45,	// (0x0004253e) control_abbreviations

0x7e45,	// (0x0004253e) control_conventions

0x7e45,	// (0x0004253e) control_definitions

0x7e45,	// (0x0004253e) format_table_attribute

0xabe5,	// (0x000452de) bg_popup_preview_window_pane_g9

0x7e45,	// (0x0004253e) format_table_data2

0x7e45,	// (0x0004253e) format_table_data3

0x7e45,	// (0x0004253e) format_table_data_example

0x0008,

0x7e45,	// (0x0004253e) intro_purpose

0xf8f4,	// (0x00049fed) bg_popup_preview_window_pane_g

0x7e45,	// (0x0004253e) texts_category

0x7e45,	// (0x0004253e) texts_graphics

0x9404,	// (0x00043afd) text_digital

0x9413,	// (0x00043b0c) text_primary

0x9422,	// (0x00043b1b) text_primary_small

0x9431,	// (0x00043b2a) text_secondary

0x9440,	// (0x00043b39) text_title

0xb2bf,	// (0x000459b8) bg_passive_tab_pane_g1_cp3_srt

0x9088,	// (0x00043781) bg_passive_tab_pane_g2_cp3_srt

0xb2c8,	// (0x000459c1) bg_passive_tab_pane_g3_cp3_srt

0x7f25,	// (0x0004261e) bg_active_tab_pane_cp3_srt_ParamLimits

0x7f25,	// (0x0004261e) bg_active_tab_pane_cp3_srt

0xb2d1,	// (0x000459ca) tabs_4_active_pane_srt_g1

0xb2d9,	// (0x000459d2) tabs_4_active_pane_srt_t1_ParamLimits

0xb2d9,	// (0x000459d2) tabs_4_active_pane_srt_t1

0xb2bf,	// (0x000459b8) bg_active_tab_pane_g1_cp3_copy1

0x9088,	// (0x00043781) bg_active_tab_pane_g2_cp3_copy1

0xb2c8,	// (0x000459c1) bg_active_tab_pane_g3_cp3_copy1

0x7f25,	// (0x0004261e) tabs_2_long_active_pane_srt_ParamLimits

0x7f25,	// (0x0004261e) tabs_2_long_active_pane_srt

0x7f25,	// (0x0004261e) tabs_2_long_passive_pane_srt_ParamLimits

0x7f25,	// (0x0004261e) tabs_2_long_passive_pane_srt

0x899b,	// (0x00043094) bg_passive_tab_pane_cp4_srt_ParamLimits

0x899b,	// (0x00043094) bg_passive_tab_pane_cp4_srt

0xb008,	// (0x00045701) bg_passive_tab_pane_g1_cp4_srt

0x9088,	// (0x00043781) bg_passive_tab_pane_g2_cp4_srt

0xb011,	// (0x0004570a) bg_passive_tab_pane_g3_cp4_srt

0x897a,	// (0x00043073) bg_active_tab_pane_cp4_srt_ParamLimits

0x897a,	// (0x00043073) bg_active_tab_pane_cp4_srt

0xb01a,	// (0x00045713) tabs_2_long_active_pane_srt_t1_ParamLimits

0xb01a,	// (0x00045713) tabs_2_long_active_pane_srt_t1

0xb008,	// (0x00045701) bg_active_tab_pane_g1_cp4_srt

0x9088,	// (0x00043781) bg_active_tab_pane_g2_cp4_srt

0xb011,	// (0x0004570a) bg_active_tab_pane_g3_cp4_srt

0x81a0,	// (0x00042899) tabs_3_long_active_pane_srt_ParamLimits

0x81a0,	// (0x00042899) tabs_3_long_active_pane_srt

0x81a0,	// (0x00042899) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x81a0,	// (0x00042899) tabs_3_long_passive_pane_cp_srt

0x81a0,	// (0x00042899) tabs_3_long_passive_pane_srt_ParamLimits

0x81a0,	// (0x00042899) tabs_3_long_passive_pane_srt

0x899b,	// (0x00043094) bg_passive_tab_pane_cp5_srt_ParamLimits

0x899b,	// (0x00043094) bg_passive_tab_pane_cp5_srt

0x911b,	// (0x00043814) bg_passive_tab_pane_g1_cp5_srt

0x9088,	// (0x00043781) bg_passive_tab_pane_g2_cp5_srt

0x9124,	// (0x0004381d) bg_passive_tab_pane_g3_cp5_srt

0x897a,	// (0x00043073) bg_active_tab_pane_cp5_srt_ParamLimits

0x897a,	// (0x00043073) bg_active_tab_pane_cp5_srt

0xaff6,	// (0x000456ef) tabs_3_long_active_pane_srt_t1_ParamLimits

0xaff6,	// (0x000456ef) tabs_3_long_active_pane_srt_t1

0x911b,	// (0x00043814) bg_active_tab_pane_g1_cp5_srt

0x9088,	// (0x00043781) bg_active_tab_pane_g2_cp5_srt

0x9124,	// (0x0004381d) bg_active_tab_pane_g3_cp5_srt

0xafe8,	// (0x000456e1) navi_text_pane_srt_t1

0xafe0,	// (0x000456d9) navi_icon_pane_srt_g1

0x9615,	// (0x00043d0e) midp_editing_number_pane_srt

0x944f,	// (0x00043b48) midp_ticker_pane_srt

0x961d,	// (0x00043d16) midp_ticker_pane_srt_g1

0x9625,	// (0x00043d1e) midp_ticker_pane_srt_g2

0x0001,

0xf777,	// (0x00049e70) midp_ticker_pane_srt_g

0x962d,	// (0x00043d26) midp_ticker_pane_srt_t1

0xafd1,	// (0x000456ca) midp_editing_number_pane_t1_copy1

0x9457,	// (0x00043b50) listscroll_midp_pane

0x9457,	// (0x00043b50) midp_form_pane

0x94c7,	// (0x00043bc0) midp_info_popup_window_ParamLimits

0x94c7,	// (0x00043bc0) midp_info_popup_window

0x8863,	// (0x00042f5c) bg_popup_sub_pane_cp50_ParamLimits

0x8863,	// (0x00042f5c) bg_popup_sub_pane_cp50

0xa0f7,	// (0x000447f0) listscroll_midp_info_pane_ParamLimits

0xa0f7,	// (0x000447f0) listscroll_midp_info_pane

0xa0d7,	// (0x000447d0) listscroll_form_midp_pane_ParamLimits

0xa0d7,	// (0x000447d0) listscroll_form_midp_pane

0xa0e3,	// (0x000447dc) scroll_bar_cp050

0xa0b7,	// (0x000447b0) list_midp_pane

0xbd03,	// (0x000463fc) signal_pane_g2_cp

0x9ff1,	// (0x000446ea) listscroll_midp_info_pane_t1_ParamLimits

0x9ff1,	// (0x000446ea) listscroll_midp_info_pane_t1

0xa009,	// (0x00044702) listscroll_midp_info_pane_t2_ParamLimits

0xa009,	// (0x00044702) listscroll_midp_info_pane_t2

0xa047,	// (0x00044740) listscroll_midp_info_pane_t3_ParamLimits

0xa047,	// (0x00044740) listscroll_midp_info_pane_t3

0xa081,	// (0x0004477a) listscroll_midp_info_pane_t4_ParamLimits

0xa081,	// (0x0004477a) listscroll_midp_info_pane_t4

0x0003,

0xf82f,	// (0x00049f28) listscroll_midp_info_pane_t_ParamLimits

0xf82f,	// (0x00049f28) listscroll_midp_info_pane_t

0x8927,	// (0x00043020) scroll_pane_cp21

0x9f8f,	// (0x00044688) form_midp_field_choice_group_pane

0x9f98,	// (0x00044691) form_midp_field_text_pane

0x9fd7,	// (0x000446d0) form_midp_field_time_pane

0x9fdf,	// (0x000446d8) form_midp_gauge_slider_pane

0x9fe8,	// (0x000446e1) form_midp_gauge_wait_pane

0x7e45,	// (0x0004253e) form_midp_image_pane

0x50ed,	// (0x0003f7e6) list_single_midp_pane_ParamLimits

0x50ed,	// (0x0003f7e6) list_single_midp_pane

0x9f47,	// (0x00044640) form_midp_field_text_pane_t1

0x9d17,	// (0x00044410) input_focus_pane_cp050

0x9f7e,	// (0x00044677) list_midp_form_text_pane

0x9f16,	// (0x0004460f) form_midp_field_choice_group_pane_t1

0x9f24,	// (0x0004461d) input_focus_pane_cp051

0x9f38,	// (0x00044631) list_midp_choice_pane

0x7e45,	// (0x0004253e) status_idle_pane

0x9efa,	// (0x000445f3) form_midp_field_time_pane_t1

0x7e3b,	// (0x00042534) wait_anim_pane_g2_copy1

0x9f08,	// (0x00044601) form_midp_field_time_pane_t2

0x0001,

0x9575,	// (0x00043c6e) aid_navinavi_width_2_pane

0xf82a,	// (0x00049f23) form_midp_field_time_pane_t

0x7e45,	// (0x0004253e) input_focus_pane_cp052

0x7e45,	// (0x0004253e) bg_input_focus_pane_cp040

0x9eba,	// (0x000445b3) form_midp_gauge_slider_pane_t1

0x9ec8,	// (0x000445c1) form_midp_gauge_slider_pane_t2

0x9ed6,	// (0x000445cf) form_midp_gauge_slider_pane_t3

0x9ee4,	// (0x000445dd) form_midp_gauge_slider_pane_t4

0x0003,

0xf821,	// (0x00049f1a) form_midp_gauge_slider_pane_t

0x9ef2,	// (0x000445eb) form_midp_slider_pane

0x7f25,	// (0x0004261e) bg_input_focus_pane_cp041_ParamLimits

0x7f25,	// (0x0004261e) bg_input_focus_pane_cp041

0x9e87,	// (0x00044580) form_midp_gauge_wait_pane_t1_ParamLimits

0x9e87,	// (0x00044580) form_midp_gauge_wait_pane_t1

0x9e99,	// (0x00044592) form_midp_gauge_wait_pane_t2_ParamLimits

0x9e99,	// (0x00044592) form_midp_gauge_wait_pane_t2

0x0001,

0xf81c,	// (0x00049f15) form_midp_gauge_wait_pane_t_ParamLimits

0xf81c,	// (0x00049f15) form_midp_gauge_wait_pane_t

0x9eab,	// (0x000445a4) form_midp_wait_pane_ParamLimits

0x9eab,	// (0x000445a4) form_midp_wait_pane

0x9e51,	// (0x0004454a) form_midp_image_pane_g1

0x9e5a,	// (0x00044553) form_midp_image_pane_t1

0x9e69,	// (0x00044562) form_midp_image_pane_t2

0x9e78,	// (0x00044571) form_midp_image_pane_t3

0x0002,

0xf815,	// (0x00049f0e) form_midp_image_pane_t

0x9e48,	// (0x00044541) list_single_midp_pane_g1

0x50de,	// (0x0003f7d7) list_single_midp_pane_t1

0x9e20,	// (0x00044519) list_midp_form_item_pane_ParamLimits

0x9e20,	// (0x00044519) list_midp_form_item_pane

0x951d,	// (0x00043c16) list_midp_form_item_pane_t1

0x952c,	// (0x00043c25) midp_ticker_pane_g1

0x9538,	// (0x00043c31) midp_ticker_pane_g2

0x0001,

0xf75d,	// (0x00049e56) midp_ticker_pane_g

0x9544,	// (0x00043c3d) midp_ticker_pane_t1

0xb222,	// (0x0004591b) midp_editing_number_pane_t1

0xb200,	// (0x000458f9) midp_editing_number_pane

0xb20f,	// (0x00045908) midp_ticker_pane

0xafc1,	// (0x000456ba) ai_message_heading_pane

0x7e45,	// (0x0004253e) bg_popup_window_pane_cp14

0xafc9,	// (0x000456c2) listscroll_ai_message_pane

0xaf4b,	// (0x00045644) ai_message_heading_pane_g1_ParamLimits

0xaf4b,	// (0x00045644) ai_message_heading_pane_g1

0xaf57,	// (0x00045650) ai_message_heading_pane_g2_ParamLimits

0xaf57,	// (0x00045650) ai_message_heading_pane_g2

0xaf63,	// (0x0004565c) ai_message_heading_pane_g3_ParamLimits

0xaf63,	// (0x0004565c) ai_message_heading_pane_g3

0xaf6f,	// (0x00045668) ai_message_heading_pane_g4_ParamLimits

0xaf6f,	// (0x00045668) ai_message_heading_pane_g4

0x0003,

0xf956,	// (0x0004a04f) ai_message_heading_pane_g_ParamLimits

0xf956,	// (0x0004a04f) ai_message_heading_pane_g

0xaf7b,	// (0x00045674) ai_message_heading_pane_t1_ParamLimits

0xaf7b,	// (0x00045674) ai_message_heading_pane_t1

0xaf95,	// (0x0004568e) ai_message_heading_pane_t2_ParamLimits

0xaf95,	// (0x0004568e) ai_message_heading_pane_t2

0x0001,

0xf95f,	// (0x0004a058) ai_message_heading_pane_t_ParamLimits

0xf95f,	// (0x0004a058) ai_message_heading_pane_t

0xafa7,	// (0x000456a0) bg_popup_heading_pane_cp1_ParamLimits

0xafa7,	// (0x000456a0) bg_popup_heading_pane_cp1

0xaf39,	// (0x00045632) list_ai_message_pane_ParamLimits

0xaf39,	// (0x00045632) list_ai_message_pane

0x8927,	// (0x00043020) scroll_pane_cp10

0xaed5,	// (0x000455ce) list_ai_message_pane_g1

0xaedd,	// (0x000455d6) list_ai_message_pane_g2

0x0001,

0xf933,	// (0x0004a02c) list_ai_message_pane_g

0xaee5,	// (0x000455de) list_ai_message_pane_t1_ParamLimits

0xaee5,	// (0x000455de) list_ai_message_pane_t1

0xaefa,	// (0x000455f3) list_ai_message_pane_t2_ParamLimits

0xaefa,	// (0x000455f3) list_ai_message_pane_t2

0xaf0f,	// (0x00045608) list_ai_message_pane_t3_ParamLimits

0xaf0f,	// (0x00045608) list_ai_message_pane_t3

0xaf24,	// (0x0004561d) list_ai_message_pane_t4_ParamLimits

0xaf24,	// (0x0004561d) list_ai_message_pane_t4

0x0003,

0xf938,	// (0x0004a031) list_ai_message_pane_t_ParamLimits

0xf938,	// (0x0004a031) list_ai_message_pane_t

0xaec0,	// (0x000455b9) cell_ai_soft_ind_pane_ParamLimits

0xaec0,	// (0x000455b9) cell_ai_soft_ind_pane

0x9556,	// (0x00043c4f) cell_ai_soft_ind_pane_g1_ParamLimits

0x9556,	// (0x00043c4f) cell_ai_soft_ind_pane_g1

0x7e45,	// (0x0004253e) grid_highlight_cp1

0x9563,	// (0x00043c5c) text_secondary_cp56_ParamLimits

0x9563,	// (0x00043c5c) text_secondary_cp56

0xae95,	// (0x0004558e) example_general_pane_ParamLimits

0xae95,	// (0x0004558e) example_general_pane

0xaea1,	// (0x0004559a) example_parent_pane_g1_ParamLimits

0xaea1,	// (0x0004559a) example_parent_pane_g1

0xaead,	// (0x000455a6) example_parent_pane_t1_ParamLimits

0xaead,	// (0x000455a6) example_parent_pane_t1

0x66cf,	// (0x00040dc8) popup_preview_text_window_ParamLimits

0x66cf,	// (0x00040dc8) popup_preview_text_window

0x9380,	// (0x00043a79) list_single_pane_cp2_g4

0x827c,	// (0x00042975) bg_popup_preview_window_pane_ParamLimits

0x827c,	// (0x00042975) bg_popup_preview_window_pane

0xabed,	// (0x000452e6) popup_preview_text_window_t1_ParamLimits

0xabed,	// (0x000452e6) popup_preview_text_window_t1

0xac0b,	// (0x00045304) popup_preview_text_window_t2_ParamLimits

0xac0b,	// (0x00045304) popup_preview_text_window_t2

0xac54,	// (0x0004534d) popup_preview_text_window_t3_ParamLimits

0xac54,	// (0x0004534d) popup_preview_text_window_t3

0xac99,	// (0x00045392) popup_preview_text_window_t4_ParamLimits

0xac99,	// (0x00045392) popup_preview_text_window_t4

0x0004,

0xf907,	// (0x0004a000) popup_preview_text_window_t_ParamLimits

0xf907,	// (0x0004a000) popup_preview_text_window_t

0xad17,	// (0x00045410) scroll_pane_cp11

0x9ca3,	// (0x0004439c) bg_popup_preview_window_pane_g1

0xabad,	// (0x000452a6) bg_popup_preview_window_pane_g2

0xabb5,	// (0x000452ae) bg_popup_preview_window_pane_g3

0xabbd,	// (0x000452b6) bg_popup_preview_window_pane_g4

0xabc5,	// (0x000452be) bg_popup_preview_window_pane_g5

0xabcd,	// (0x000452c6) bg_popup_preview_window_pane_g6

0xabd5,	// (0x000452ce) bg_popup_preview_window_pane_g7

0xabdd,	// (0x000452d6) bg_popup_preview_window_pane_g8

0x5805,	// (0x0003fefe) aid_popup_width_pane

0x66ad,	// (0x00040da6) popup_midp_note_alarm_window_ParamLimits

0x66ad,	// (0x00040da6) popup_midp_note_alarm_window

0x87ba,	// (0x00042eb3) data_form_pane_ParamLimits

0x4d87,	// (0x0003f480) form_field_data_pane_g1

0x4d91,	// (0x0003f48a) form_field_data_pane_t1_ParamLimits

0x87c6,	// (0x00042ebf) input_focus_pane_ParamLimits

0x4da9,	// (0x0003f4a2) data_form_wide_pane_ParamLimits

0x4dba,	// (0x0003f4b3) form_field_data_wide_pane_g1

0x4dc6,	// (0x0003f4bf) form_field_data_wide_pane_t1_ParamLimits

0x852b,	// (0x00042c24) input_focus_pane_cp6_ParamLimits

0x88d4,	// (0x00042fcd) input_popup_find_pane_g1_ParamLimits

0x88d4,	// (0x00042fcd) input_popup_find_pane_g1

0x5e23,	// (0x0004051c) aid_navi_side_left_pane

0x5e38,	// (0x00040531) aid_navi_side_right_pane

0xa5c6,	// (0x00044cbf) bg_popup_window_pane_cp30_ParamLimits

0xa5c6,	// (0x00044cbf) bg_popup_window_pane_cp30

0xa640,	// (0x00044d39) popup_midp_note_alarm_window_g1_ParamLimits

0xa640,	// (0x00044d39) popup_midp_note_alarm_window_g1

0xa670,	// (0x00044d69) popup_midp_note_alarm_window_t1_ParamLimits

0xa670,	// (0x00044d69) popup_midp_note_alarm_window_t1

0xa711,	// (0x00044e0a) popup_midp_note_alarm_window_t2_ParamLimits

0xa711,	// (0x00044e0a) popup_midp_note_alarm_window_t2

0xa7bf,	// (0x00044eb8) popup_midp_note_alarm_window_t3_ParamLimits

0xa7bf,	// (0x00044eb8) popup_midp_note_alarm_window_t3

0xa7f1,	// (0x00044eea) popup_midp_note_alarm_window_t4_ParamLimits

0xa7f1,	// (0x00044eea) popup_midp_note_alarm_window_t4

0xa817,	// (0x00044f10) popup_midp_note_alarm_window_t5_ParamLimits

0xa817,	// (0x00044f10) popup_midp_note_alarm_window_t5

0x000a,

0xf8a4,	// (0x00049f9d) popup_midp_note_alarm_window_t_ParamLimits

0xf8a4,	// (0x00049f9d) popup_midp_note_alarm_window_t

0xa8c3,	// (0x00044fbc) wait_bar_pane_cp1_ParamLimits

0xa8c3,	// (0x00044fbc) wait_bar_pane_cp1

0x7e45,	// (0x0004253e) wait_anim_pane_copy1

0x7e45,	// (0x0004253e) wait_border_pane_copy1

0xa2ac,	// (0x000449a5) wait_border_pane_g1_copy1

0x4de0,	// (0x0003f4d9) form_field_popup_pane_g1

0x4de8,	// (0x0003f4e1) form_field_popup_pane_t1_ParamLimits

0x87c6,	// (0x00042ebf) input_focus_pane_cp7_ParamLimits

0x87e8,	// (0x00042ee1) list_form_pane_ParamLimits

0x4e00,	// (0x0003f4f9) form_field_popup_wide_pane_g1

0x4e08,	// (0x0003f501) form_field_popup_wide_pane_t1_ParamLimits

0x87c6,	// (0x00042ebf) input_focus_pane_cp8_ParamLimits

0x87f4,	// (0x00042eed) list_form_wide_pane_ParamLimits

0xb353,	// (0x00045a4c) aid_size_cell_graphic_pane

0x4e92,	// (0x0003f58b) data_form_pane_t1_ParamLimits

0x513f,	// (0x0003f838) data_form_wide_pane_t1_ParamLimits

0x9864,	// (0x00043f5d) bg_status_flat_pane

0x7e85,	// (0x0004257e) title_pane_t1_ParamLimits

0x7eed,	// (0x000425e6) title_pane_t2_ParamLimits

0x7f13,	// (0x0004260c) title_pane_t3_ParamLimits

0xf557,	// (0x00049c50) title_pane_t_ParamLimits

0x8da8,	// (0x000434a1) level_1_signal_ParamLimits

0x8dba,	// (0x000434b3) level_2_signal_ParamLimits

0x8dcd,	// (0x000434c6) level_3_signal_ParamLimits

0x8de0,	// (0x000434d9) level_4_signal_ParamLimits

0x8df3,	// (0x000434ec) level_5_signal_ParamLimits

0x8e06,	// (0x000434ff) level_6_signal_ParamLimits

0x8e19,	// (0x00043512) level_7_signal_ParamLimits

0x8da8,	// (0x000434a1) level_1_battery_ParamLimits

0x8dba,	// (0x000434b3) level_2_battery_ParamLimits

0x8dcd,	// (0x000434c6) level_3_battery_ParamLimits

0x8de0,	// (0x000434d9) level_4_battery_ParamLimits

0x8df3,	// (0x000434ec) level_5_battery_ParamLimits

0x8e06,	// (0x000434ff) level_6_battery_ParamLimits

0x8e19,	// (0x00043512) level_7_battery_ParamLimits

0xa4cb,	// (0x00044bc4) bg_status_flat_pane_g1

0xa4d3,	// (0x00044bcc) bg_status_flat_pane_g2

0xa4db,	// (0x00044bd4) bg_status_flat_pane_g3

0xa4e3,	// (0x00044bdc) bg_status_flat_pane_g4

0xa4eb,	// (0x00044be4) bg_status_flat_pane_g5

0xa4f3,	// (0x00044bec) bg_status_flat_pane_g6

0xa4fb,	// (0x00044bf4) bg_status_flat_pane_g7

0x7f3b,	// (0x00042634) tabs_3_active_pane_t1_ParamLimits

0x7f3b,	// (0x00042634) tabs_3_passive_pane_t1_ParamLimits

0x7f55,	// (0x0004264e) tabs_4_active_pane_t1_ParamLimits

0x7f55,	// (0x0004264e) tabs_4_1_passive_pane_t1_ParamLimits

0x8968,	// (0x00043061) tabs_2_active_pane_t1_ParamLimits

0x8968,	// (0x00043061) tabs_2_passive_pane_t1_ParamLimits

0x897a,	// (0x00043073) bg_active_tab_pane_cp4_ParamLimits

0x8988,	// (0x00043081) tabs_2_long_active_pane_t1_ParamLimits

0x899b,	// (0x00043094) bg_passive_tab_pane_cp4_ParamLimits

0x697c,	// (0x00041075) list_single_midp_graphic_pane_t1_ParamLimits

0x897a,	// (0x00043073) bg_active_tab_pane_cp5_ParamLimits

0x89a7,	// (0x000430a0) tabs_3_long_active_pane_t1_ParamLimits

0x899b,	// (0x00043094) bg_passive_tab_pane_cp5_ParamLimits

0x697c,	// (0x00041075) list_single_midp_graphic_pane_t1

0x9864,	// (0x00043f5d) bg_status_flat_pane_ParamLimits

0x9927,	// (0x00044020) indicator_pane_cp2_ParamLimits

0x9927,	// (0x00044020) indicator_pane_cp2

0x9a5e,	// (0x00044157) navi_pane_srt_ParamLimits

0x9a5e,	// (0x00044157) navi_pane_srt

0x9a82,	// (0x0004417b) popup_clock_digital_analogue_window_cp1

0x8002,	// (0x000426fb) indicator_pane_t1

0x944f,	// (0x00043b48) copy_highlight_pane

0x944f,	// (0x00043b48) cursor_graphics_pane

0x944f,	// (0x00043b48) graphic_within_text_pane

0x944f,	// (0x00043b48) link_highlight_pane

0xacda,	// (0x000453d3) popup_preview_text_window_t5_ParamLimits

0xacda,	// (0x000453d3) popup_preview_text_window_t5

0x957d,	// (0x00043c76) cursor_digital_pane

0x957d,	// (0x00043c76) cursor_primary_pane

0x958e,	// (0x00043c87) cursor_primary_small_pane

0x9596,	// (0x00043c8f) cursor_secondary_pane

0x959e,	// (0x00043c97) cursor_title_pane

0x957d,	// (0x00043c76) link_highlight_digital_pane

0x9585,	// (0x00043c7e) link_highlight_primary_pane

0x958e,	// (0x00043c87) link_highlight_primary_small_pane

0x9596,	// (0x00043c8f) link_highlight_secondary_pane

0x959e,	// (0x00043c97) link_highlight_title_pane

0x957d,	// (0x00043c76) copy_highlight_digital_pane

0x957d,	// (0x00043c76) copy_highlight_primary_pane

0x958e,	// (0x00043c87) copy_highlight_primary_small_pane

0x9596,	// (0x00043c8f) copy_highlight_secondary_pane

0x959e,	// (0x00043c97) copy_highlight_title_pane

0x9596,	// (0x00043c8f) graphic_text_digital_pane

0xa569,	// (0x00044c62) graphic_text_primary_pane

0xa572,	// (0x00044c6b) graphic_text_primary_small_pane

0x958e,	// (0x00043c87) graphic_text_secondary_pane

0x957d,	// (0x00043c76) graphic_text_title_pane

0x95a6,	// (0x00043c9f) cursor_primary_pane_g1

0xa55b,	// (0x00044c54) cursor_text_primary_t1

0xa543,	// (0x00044c3c) cursor_primary_small_pane_g1

0xa54d,	// (0x00044c46) cursor_text_primary_small_t1

0xa52b,	// (0x00044c24) cursor_primary_small_pane_g1_copy1

0xa535,	// (0x00044c2e) cursor_text_primary_small_t1_copy1

0xa513,	// (0x00044c0c) cursor_text_title_t1

0xa521,	// (0x00044c1a) cursor_title_pane_g1

0x95a6,	// (0x00043c9f) cursor_digital_pane_g1

0x95b0,	// (0x00043ca9) cursor_text_digital_t1

0x95d5,	// (0x00043cce) link_highlight_primary_pane_g1

0xa4bc,	// (0x00044bb5) link_highlight_primary_pane_t1

0x95be,	// (0x00043cb7) link_highlight_primary_small_pane_g1

0x95c6,	// (0x00043cbf) link_highlight_primary_small_pane_t1

0x95d5,	// (0x00043cce) link_highlight_secondary_pane_g1

0x95dd,	// (0x00043cd6) link_highlight_secondary_pane_t1

0xa430,	// (0x00044b29) link_highlight_title_pane_g1

0xa438,	// (0x00044b31) link_highlight_title_pane_t1

0xa419,	// (0x00044b12) link_highlight_digital_pane_g1

0xa421,	// (0x00044b1a) link_highlight_digital_pane_t1

0xa2f1,	// (0x000449ea) copy_highlight_primary_pane_g1

0xa2f9,	// (0x000449f2) copy_highlight_primary_pane_t1

0xa2cb,	// (0x000449c4) copy_highlight_primary_small_pane_g1

0xa2e2,	// (0x000449db) copy_highlight_primary_small_pane_t1

0x95ec,	// (0x00043ce5) copy_highlight_secondary_pane_g1

0x95f4,	// (0x00043ced) copy_highlight_secondary_pane_t1

0xa2cb,	// (0x000449c4) copy_highlight_title_pane_g1

0xa2d3,	// (0x000449cc) copy_highlight_title_pane_t1

0xa2f1,	// (0x000449ea) copy_highlight_digital_pane_g1

0xb521,	// (0x00045c1a) copy_highlight_digital_pane_t1

0xb475,	// (0x00045b6e) graphic_text_primary_pane_g1

0xb505,	// (0x00045bfe) graphic_text_primary_pane_t1

0xb513,	// (0x00045c0c) graphic_text_primary_pane_t2

0x0001,

0xf9d3,	// (0x0004a0cc) graphic_text_primary_pane_t

0xb4e1,	// (0x00045bda) graphic_text_primary_small_pane_g1

0xb4e9,	// (0x00045be2) graphic_text_primary_small_pane_t1

0xb4f7,	// (0x00045bf0) graphic_text_primary_small_pane_t2

0x0001,

0xf9ce,	// (0x0004a0c7) graphic_text_primary_small_pane_t

0xb4bd,	// (0x00045bb6) graphic_text_secondary_pane_g1

0xb4c5,	// (0x00045bbe) graphic_text_secondary_pane_t1

0xb4d3,	// (0x00045bcc) graphic_text_secondary_pane_t2

0x0001,

0xf9c9,	// (0x0004a0c2) graphic_text_secondary_pane_t

0xb499,	// (0x00045b92) graphic_text_title_pane_g1

0xb4a1,	// (0x00045b9a) graphic_text_title_pane_t1

0xb4af,	// (0x00045ba8) graphic_text_title_pane_t2

0x0001,

0xf9c4,	// (0x0004a0bd) graphic_text_title_pane_t

0xb475,	// (0x00045b6e) graphic_text_digital_pane_g1

0xb47d,	// (0x00045b76) graphic_text_digital_pane_t1

0xb48b,	// (0x00045b84) graphic_text_digital_pane_t2

0x0001,

0xf9bf,	// (0x0004a0b8) graphic_text_digital_pane_t

0x7f25,	// (0x0004261e) navi_icon_pane_srt_ParamLimits

0x7f25,	// (0x0004261e) navi_icon_pane_srt

0x7e45,	// (0x0004253e) navi_midp_pane_srt

0x7e45,	// (0x0004253e) navi_navi_pane_srt

0x7f25,	// (0x0004261e) navi_text_pane_srt_ParamLimits

0x7f25,	// (0x0004261e) navi_text_pane_srt

0xb440,	// (0x00045b39) navi_navi_icon_text_pane_srt

0xb448,	// (0x00045b41) navi_navi_pane_srt_g1_ParamLimits

0xb448,	// (0x00045b41) navi_navi_pane_srt_g1

0xb45a,	// (0x00045b53) navi_navi_pane_srt_g2_ParamLimits

0xb45a,	// (0x00045b53) navi_navi_pane_srt_g2

0x0001,

0xf9ba,	// (0x0004a0b3) navi_navi_pane_srt_g_ParamLimits

0xf9ba,	// (0x0004a0b3) navi_navi_pane_srt_g

0xb46c,	// (0x00045b65) navi_navi_tabs_pane_srt

0xb440,	// (0x00045b39) navi_navi_text_pane_srt

0xb440,	// (0x00045b39) navi_navi_volume_pane_srt

0xb431,	// (0x00045b2a) navi_navi_text_pane_srt_t1

0x6da4,	// (0x0004149d) navi_navi_volume_pane_srt_g1

0x6dac,	// (0x000414a5) volume_small_pane_srt_ParamLimits

0x6dac,	// (0x000414a5) volume_small_pane_srt

0x611f,	// (0x00040818) volume_small_pane_srt_g1_ParamLimits

0x611f,	// (0x00040818) volume_small_pane_srt_g1

0x612f,	// (0x00040828) volume_small_pane_srt_g2_ParamLimits

0x612f,	// (0x00040828) volume_small_pane_srt_g2

0x6140,	// (0x00040839) volume_small_pane_srt_g3_ParamLimits

0x6140,	// (0x00040839) volume_small_pane_srt_g3

0x6151,	// (0x0004084a) volume_small_pane_srt_g4_ParamLimits

0x6151,	// (0x0004084a) volume_small_pane_srt_g4

0x6162,	// (0x0004085b) volume_small_pane_srt_g5_ParamLimits

0x6162,	// (0x0004085b) volume_small_pane_srt_g5

0x6173,	// (0x0004086c) volume_small_pane_srt_g6_ParamLimits

0x6173,	// (0x0004086c) volume_small_pane_srt_g6

0x6184,	// (0x0004087d) volume_small_pane_srt_g7_ParamLimits

0x6184,	// (0x0004087d) volume_small_pane_srt_g7

0x6195,	// (0x0004088e) volume_small_pane_srt_g8_ParamLimits

0x6195,	// (0x0004088e) volume_small_pane_srt_g8

0x61a6,	// (0x0004089f) volume_small_pane_srt_g9_ParamLimits

0x61a6,	// (0x0004089f) volume_small_pane_srt_g9

0x61b7,	// (0x000408b0) volume_small_pane_srt_g10_ParamLimits

0x61b7,	// (0x000408b0) volume_small_pane_srt_g10

0x0009,

0xf762,	// (0x00049e5b) volume_small_pane_srt_g_ParamLimits

0xf762,	// (0x00049e5b) volume_small_pane_srt_g

0x8325,	// (0x00042a1e) query_popup_data_pane_cp2

0xb417,	// (0x00045b10) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb417,	// (0x00045b10) navi_navi_icon_text_pane_srt_t1

0xa569,	// (0x00044c62) navi_tabs_2_long_pane_srt

0xa569,	// (0x00044c62) navi_tabs_2_pane_srt

0xa569,	// (0x00044c62) navi_tabs_3_long_pane_srt

0xa569,	// (0x00044c62) navi_tabs_3_pane_srt

0xa569,	// (0x00044c62) navi_tabs_4_pane_srt

0x6d84,	// (0x0004147d) tabs_2_active_pane_srt_ParamLimits

0x6d84,	// (0x0004147d) tabs_2_active_pane_srt

0x6d94,	// (0x0004148d) tabs_2_passive_pane_srt_ParamLimits

0x6d94,	// (0x0004148d) tabs_2_passive_pane_srt

0x9773,	// (0x00043e6c) bg_passive_tab_pane_cp1_srt_ParamLimits

0x9773,	// (0x00043e6c) bg_passive_tab_pane_cp1_srt

0xb3e3,	// (0x00045adc) bg_passive_tab_pane_g1_cp1_srt

0x9088,	// (0x00043781) bg_passive_tab_pane_g2_cp1_srt

0xb3ec,	// (0x00045ae5) bg_passive_tab_pane_g3_cp1_srt

0x7f25,	// (0x0004261e) bg_active_tab_pane_cp1_srt_ParamLimits

0x7f25,	// (0x0004261e) bg_active_tab_pane_cp1_srt

0xb3f5,	// (0x00045aee) tabs_2_active_pane_srt_g1

0xb3fd,	// (0x00045af6) tabs_2_active_pane_srt_t1_ParamLimits

0xb3fd,	// (0x00045af6) tabs_2_active_pane_srt_t1

0xb3e3,	// (0x00045adc) bg_active_tab_pane_g1_cp1_srt

0x9088,	// (0x00043781) bg_active_tab_pane_g2_cp1_srt

0xb3ec,	// (0x00045ae5) bg_active_tab_pane_g3_cp1_srt

0x6d51,	// (0x0004144a) tabs_3_active_pane_srt_ParamLimits

0x6d51,	// (0x0004144a) tabs_3_active_pane_srt

0x6d62,	// (0x0004145b) tabs_3_passive_pane_cp_srt_ParamLimits

0x6d62,	// (0x0004145b) tabs_3_passive_pane_cp_srt

0x6d73,	// (0x0004146c) tabs_3_passive_pane_srt_ParamLimits

0x6d73,	// (0x0004146c) tabs_3_passive_pane_srt

0x9773,	// (0x00043e6c) bg_passive_tab_pane_cp2_srt_ParamLimits

0x9773,	// (0x00043e6c) bg_passive_tab_pane_cp2_srt

0x9603,	// (0x00043cfc) bg_passive_tab_pane_g1_cp2_srt

0x9088,	// (0x00043781) bg_passive_tab_pane_g2_cp2_srt

0x960c,	// (0x00043d05) bg_passive_tab_pane_g3_cp2_srt

0x7f25,	// (0x0004261e) bg_active_tab_pane_cp2_srt_ParamLimits

0x7f25,	// (0x0004261e) bg_active_tab_pane_cp2_srt

0xb3c9,	// (0x00045ac2) tabs_3_active_pane_srt_g1

0xb3d1,	// (0x00045aca) tabs_3_active_pane_srt_t1_ParamLimits

0xb3d1,	// (0x00045aca) tabs_3_active_pane_srt_t1

0x9603,	// (0x00043cfc) bg_active_tab_pane_g1_cp2_srt

0x9088,	// (0x00043781) bg_active_tab_pane_g2_cp2_srt

0x960c,	// (0x00043d05) bg_active_tab_pane_g3_cp2_srt

0x6d09,	// (0x00041402) tabs_4_active_pane_srt_ParamLimits

0x6d09,	// (0x00041402) tabs_4_active_pane_srt

0x6d1b,	// (0x00041414) tabs_4_passive_pane_cp2_srt_ParamLimits

0x6d1b,	// (0x00041414) tabs_4_passive_pane_cp2_srt

0x6326,	// (0x00040a1f) aid_size_cell_toolbar

0x899b,	// (0x00043094) main_idle_act_pane_ParamLimits

0x64e3,	// (0x00040bdc) popup_large_graphic_colour_window_ParamLimits

0x684a,	// (0x00040f43) popup_toolbar_window_ParamLimits

0x684a,	// (0x00040f43) popup_toolbar_window

0xb231,	// (0x0004592a) list_single_graphic_2heading_pane_ParamLimits

0xb231,	// (0x0004592a) list_single_graphic_2heading_pane

0x8b57,	// (0x00043250) aid_size_cell_apps_grid_lsc_pane

0x8b69,	// (0x00043262) aid_size_cell_apps_grid_prt_pane

0x9773,	// (0x00043e6c) bg_wml_button_pane_cp1_ParamLimits

0x9773,	// (0x00043e6c) bg_wml_button_pane_cp1

0x9f47,	// (0x00044640) form_midp_field_text_pane_t1_ParamLimits

0x9d17,	// (0x00044410) input_focus_pane_cp050_ParamLimits

0x9f7e,	// (0x00044677) list_midp_form_text_pane_ParamLimits

0x9f24,	// (0x0004461d) input_focus_pane_cp051_ParamLimits

0x9f38,	// (0x00044631) list_midp_choice_pane_ParamLimits

0x9dd0,	// (0x000444c9) list_single_2graphic_pane_cp3_ParamLimits

0x9dd0,	// (0x000444c9) list_single_2graphic_pane_cp3

0x9df1,	// (0x000444ea) list_single_midp_graphic_pane_ParamLimits

0x9df1,	// (0x000444ea) list_single_midp_graphic_pane

0x4fbc,	// (0x0003f6b5) list_single_graphic_2heading_pane_g1_ParamLimits

0x4fbc,	// (0x0003f6b5) list_single_graphic_2heading_pane_g1

0x4fc8,	// (0x0003f6c1) list_single_graphic_2heading_pane_g4_ParamLimits

0x4fc8,	// (0x0003f6c1) list_single_graphic_2heading_pane_g4

0x4fd4,	// (0x0003f6cd) list_single_graphic_2heading_pane_g5_ParamLimits

0x4fd4,	// (0x0003f6cd) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b5,	// (0x00049eae) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b5,	// (0x00049eae) list_single_graphic_2heading_pane_g

0x4fe0,	// (0x0003f6d9) list_single_graphic_2heading_pane_t1_ParamLimits

0x4fe0,	// (0x0003f6d9) list_single_graphic_2heading_pane_t1

0x4ff4,	// (0x0003f6ed) list_single_graphic_2heading_pane_t2_ParamLimits

0x4ff4,	// (0x0003f6ed) list_single_graphic_2heading_pane_t2

0x5010,	// (0x0003f709) list_single_graphic_2heading_pane_t3_ParamLimits

0x5010,	// (0x0003f709) list_single_graphic_2heading_pane_t3

0x0002,

0xf7bc,	// (0x00049eb5) list_single_graphic_2heading_pane_t_ParamLimits

0xf7bc,	// (0x00049eb5) list_single_graphic_2heading_pane_t

0x9be1,	// (0x000442da) bg_popup_sub_pane_cp2

0x9c0b,	// (0x00044304) grid_toobar_pane

0x68f7,	// (0x00040ff0) cell_toolbar_pane_ParamLimits

0x68f7,	// (0x00040ff0) cell_toolbar_pane

0x9c47,	// (0x00044340) cell_toolbar_pane_g1_ParamLimits

0x9c47,	// (0x00044340) cell_toolbar_pane_g1

0x9c5b,	// (0x00044354) cell_toolbar_pane_g2_ParamLimits

0x9c5b,	// (0x00044354) cell_toolbar_pane_g2

0x0001,

0xf7ca,	// (0x00049ec3) cell_toolbar_pane_g_ParamLimits

0xf7ca,	// (0x00049ec3) cell_toolbar_pane_g

0x9c7d,	// (0x00044376) grid_highlight_pane_cp2_ParamLimits

0x9c7d,	// (0x00044376) grid_highlight_pane_cp2

0x9c97,	// (0x00044390) toolbar_button_pane

0x9ca3,	// (0x0004439c) toolbar_button_pane_g1

0x9cab,	// (0x000443a4) toolbar_button_pane_g2

0x9cb3,	// (0x000443ac) toolbar_button_pane_g3

0x9cbb,	// (0x000443b4) toolbar_button_pane_g4

0x9cc3,	// (0x000443bc) toolbar_button_pane_g5

0x9ccb,	// (0x000443c4) toolbar_button_pane_g6

0x9cd3,	// (0x000443cc) toolbar_button_pane_g7

0x9cdb,	// (0x000443d4) toolbar_button_pane_g8

0x9ce3,	// (0x000443dc) toolbar_button_pane_g9

0x0009,

0xf7cf,	// (0x00049ec8) toolbar_button_pane_g

0x693b,	// (0x00041034) list_single_2graphic_pane_g1_cp3_ParamLimits

0x693b,	// (0x00041034) list_single_2graphic_pane_g1_cp3

0x6947,	// (0x00041040) list_single_2graphic_pane_g2_cp3_ParamLimits

0x6947,	// (0x00041040) list_single_2graphic_pane_g2_cp3

0x6958,	// (0x00041051) list_single_2graphic_pane_g3_cp3

0x5fd2,	// (0x000406cb) list_single_2graphic_pane_g4_cp3_ParamLimits

0x5fd2,	// (0x000406cb) list_single_2graphic_pane_g4_cp3

0x6960,	// (0x00041059) list_single_2graphic_pane_t1_cp3_ParamLimits

0x6960,	// (0x00041059) list_single_2graphic_pane_t1_cp3

0x99fb,	// (0x000440f4) list_single_midp_graphic_pane_g2_ParamLimits

0x99fb,	// (0x000440f4) list_single_midp_graphic_pane_g2

0x4fac,	// (0x0003f6a5) aid_zoom_text_primary

0x632e,	// (0x00040a27) aid_zoom_text_secondary

0x96bd,	// (0x00043db6) status_small_pane_g7_ParamLimits

0x96bd,	// (0x00043db6) status_small_pane_g7

0x96e0,	// (0x00043dd9) status_small_pane_t1_ParamLimits

0x7e5c,	// (0x00042555) title_pane_g2

0x0003,

0xf54e,	// (0x00049c47) title_pane_g

0x83c9,	// (0x00042ac2) aid_size_cell_colour_1_pane_ParamLimits

0x83c9,	// (0x00042ac2) aid_size_cell_colour_1_pane

0x83dd,	// (0x00042ad6) aid_size_cell_colour_2_pane_ParamLimits

0x83dd,	// (0x00042ad6) aid_size_cell_colour_2_pane

0x83f1,	// (0x00042aea) aid_size_cell_colour_3_pane_ParamLimits

0x83f1,	// (0x00042aea) aid_size_cell_colour_3_pane

0x8405,	// (0x00042afe) aid_size_cell_colour_4_pane_ParamLimits

0x8405,	// (0x00042afe) aid_size_cell_colour_4_pane

0x5d60,	// (0x00040459) title_pane_stacon_g1_ParamLimits

0x5d60,	// (0x00040459) title_pane_stacon_g1

0xa350,	// (0x00044a49) popup_note_wait_window_g3_ParamLimits

0xa350,	// (0x00044a49) popup_note_wait_window_g3

0xa3c6,	// (0x00044abf) popup_note_wait_window_t5_ParamLimits

0xa3c6,	// (0x00044abf) popup_note_wait_window_t5

0x7e45,	// (0x0004253e) main_feb_china_hwr_fs_writing_pane

0x63c6,	// (0x00040abf) popup_feb_china_hwr_fs_window_ParamLimits

0x63c6,	// (0x00040abf) popup_feb_china_hwr_fs_window

0x69aa,	// (0x000410a3) aid_size_cell_hwr_fs_ParamLimits

0x69aa,	// (0x000410a3) aid_size_cell_hwr_fs

0x9d17,	// (0x00044410) bg_popup_sub_pane_cp3_ParamLimits

0x9d17,	// (0x00044410) bg_popup_sub_pane_cp3

0x69bf,	// (0x000410b8) grid_hwr_fs_pane_ParamLimits

0x69bf,	// (0x000410b8) grid_hwr_fs_pane

0x69d7,	// (0x000410d0) linegrid_hwr_fs_pane_ParamLimits

0x69d7,	// (0x000410d0) linegrid_hwr_fs_pane

0x69e7,	// (0x000410e0) cell_hwr_fs_pane_ParamLimits

0x69e7,	// (0x000410e0) cell_hwr_fs_pane

0x9d23,	// (0x0004441c) linegrid_hwr_fs_pane_g1_ParamLimits

0x9d23,	// (0x0004441c) linegrid_hwr_fs_pane_g1

0x9d2f,	// (0x00044428) linegrid_hwr_fs_pane_g2_ParamLimits

0x9d2f,	// (0x00044428) linegrid_hwr_fs_pane_g2

0x9d41,	// (0x0004443a) linegrid_hwr_fs_pane_g3_ParamLimits

0x9d41,	// (0x0004443a) linegrid_hwr_fs_pane_g3

0x6a09,	// (0x00041102) linegrid_hwr_fs_pane_g4_ParamLimits

0x6a09,	// (0x00041102) linegrid_hwr_fs_pane_g4

0x6a23,	// (0x0004111c) linegrid_hwr_fs_pane_g5_ParamLimits

0x6a23,	// (0x0004111c) linegrid_hwr_fs_pane_g5

0x0004,

0xf7fa,	// (0x00049ef3) linegrid_hwr_fs_pane_g_ParamLimits

0xf7fa,	// (0x00049ef3) linegrid_hwr_fs_pane_g

0x9d4d,	// (0x00044446) cell_hwr_fs_pane_g1_ParamLimits

0x9d4d,	// (0x00044446) cell_hwr_fs_pane_g1

0x9b18,	// (0x00044211) cell_hwr_fs_pane_g2_ParamLimits

0x9b18,	// (0x00044211) cell_hwr_fs_pane_g2

0x9d63,	// (0x0004445c) cell_hwr_fs_pane_g3_ParamLimits

0x9d63,	// (0x0004445c) cell_hwr_fs_pane_g3

0x9d70,	// (0x00044469) cell_hwr_fs_pane_g4_ParamLimits

0x9d70,	// (0x00044469) cell_hwr_fs_pane_g4

0x0003,

0xf805,	// (0x00049efe) cell_hwr_fs_pane_g_ParamLimits

0xf805,	// (0x00049efe) cell_hwr_fs_pane_g

0x6a39,	// (0x00041132) cell_hwr_fs_pane_t1

0x7e45,	// (0x0004253e) grid_highlight_pane_cp6

0x7e45,	// (0x0004253e) main_idle_act2_pane

0x890e,	// (0x00043007) aid_inside_area_popup_secondary

0xa9fd,	// (0x000450f6) aid_inside_area_window_primary_ParamLimits

0xa9fd,	// (0x000450f6) aid_inside_area_window_primary

0xb530,	// (0x00045c29) ai2_news_ticker_pane

0xb538,	// (0x00045c31) aid_size_cell_ai1_link_ParamLimits

0xb538,	// (0x00045c31) aid_size_cell_ai1_link

0xb552,	// (0x00045c4b) popup_ai2_data_window_ParamLimits

0xb552,	// (0x00045c4b) popup_ai2_data_window

0xb568,	// (0x00045c61) popup_ai2_link_window_ParamLimits

0xb568,	// (0x00045c61) popup_ai2_link_window

0x9d17,	// (0x00044410) bg_popup_sub_pane_cp4_ParamLimits

0x9d17,	// (0x00044410) bg_popup_sub_pane_cp4

0xb57c,	// (0x00045c75) grid_ai2_link_pane_ParamLimits

0xb57c,	// (0x00045c75) grid_ai2_link_pane

0xb593,	// (0x00045c8c) popup_ai2_link_window_g1_ParamLimits

0xb593,	// (0x00045c8c) popup_ai2_link_window_g1

0xb59f,	// (0x00045c98) popup_ai2_link_window_g2_ParamLimits

0xb59f,	// (0x00045c98) popup_ai2_link_window_g2

0x0001,

0xf9d8,	// (0x0004a0d1) popup_ai2_link_window_g_ParamLimits

0xf9d8,	// (0x0004a0d1) popup_ai2_link_window_g

0xb5ae,	// (0x00045ca7) ai2_mp_button_pane

0xb5b6,	// (0x00045caf) ai2_mp_volume_pane

0x9f24,	// (0x0004461d) bg_popup_sub_pane_cp5_ParamLimits

0x9f24,	// (0x0004461d) bg_popup_sub_pane_cp5

0xb5be,	// (0x00045cb7) heading_ai2_gene_pane_ParamLimits

0xb5be,	// (0x00045cb7) heading_ai2_gene_pane

0xb5ca,	// (0x00045cc3) list_ai2_gene_pane_ParamLimits

0xb5ca,	// (0x00045cc3) list_ai2_gene_pane

0xb612,	// (0x00045d0b) cell_ai2_link_pane_ParamLimits

0xb612,	// (0x00045d0b) cell_ai2_link_pane

0xb628,	// (0x00045d21) cell_ai2_link_pane_g1

0x7e45,	// (0x0004253e) grid_highlight_pane_cp7

0x6dc1,	// (0x000414ba) ai2_mp_volume_pane_g1

0xb6f8,	// (0x00045df1) ai2_mp_volume_pane_g2

0xb66d,	// (0x00045d66) list_ai2_gene_pane_t1

0xb700,	// (0x00045df9) ai2_mp_volume_pane_g3

0x0002,

0xf9f1,	// (0x0004a0ea) ai2_mp_volume_pane_g

0x6dc9,	// (0x000414c2) volume_small_pane_cp3

0xb708,	// (0x00045e01) aid_size_cell_ai2_button

0xb710,	// (0x00045e09) grid_ai2_button_pane

0xb719,	// (0x00045e12) cell_ai2_button_pane_ParamLimits

0xb719,	// (0x00045e12) cell_ai2_button_pane

0x7e3b,	// (0x00042534) cell_ai2_button_pane_g1

0x7e45,	// (0x0004253e) grid_highlight_pane_cp8

0xb6b8,	// (0x00045db1) ai2_gene_pane_t1_ParamLimits

0xb6b8,	// (0x00045db1) ai2_gene_pane_t1

0x631c,	// (0x00040a15) aid_height_parent_landscape

0xb068,	// (0x00045761) aid_height_set_list

0xb079,	// (0x00045772) aid_size_parent

0xb353,	// (0x00045a4c) aid_size_cell_graphic_pane_ParamLimits

0xb5da,	// (0x00045cd3) popup_ai2_data_window_g1_ParamLimits

0xb5da,	// (0x00045cd3) popup_ai2_data_window_g1

0xb5e6,	// (0x00045cdf) ai2_news_ticker_pane_g1

0xb5ee,	// (0x00045ce7) ai2_news_ticker_pane_g2

0x0001,

0xf9dd,	// (0x0004a0d6) ai2_news_ticker_pane_g

0xb5f6,	// (0x00045cef) ai2_news_ticker_pane_t1

0xb604,	// (0x00045cfd) ai2_news_ticker_pane_t2

0x0001,

0xf9e2,	// (0x0004a0db) ai2_news_ticker_pane_t

0xb631,	// (0x00045d2a) heading_ai2_gene_pane_g1

0xb639,	// (0x00045d32) heading_ai2_gene_pane_t1_ParamLimits

0xb639,	// (0x00045d32) heading_ai2_gene_pane_t1

0xb64e,	// (0x00045d47) list_highlight_pane_cp6

0xb656,	// (0x00045d4f) ai2_gene_pane_ParamLimits

0xb656,	// (0x00045d4f) ai2_gene_pane

0xb67b,	// (0x00045d74) list_ai2_gene_pane_t2

0x0001,

0xf9e7,	// (0x0004a0e0) list_ai2_gene_pane_t

0xb689,	// (0x00045d82) list_highlight_pane_cp8_ParamLimits

0xb689,	// (0x00045d82) list_highlight_pane_cp8

0xb69a,	// (0x00045d93) ai2_gene_pane_g1_ParamLimits

0xb69a,	// (0x00045d93) ai2_gene_pane_g1

0xb6ac,	// (0x00045da5) ai2_gene_pane_g2_ParamLimits

0xb6ac,	// (0x00045da5) ai2_gene_pane_g2

0x0001,

0xf9ec,	// (0x0004a0e5) ai2_gene_pane_g_ParamLimits

0xf9ec,	// (0x0004a0e5) ai2_gene_pane_g

0x8750,	// (0x00042e49) scroll_pane_cp12

0x62d9,	// (0x000409d2) control_pane_t3_ParamLimits

0x62d9,	// (0x000409d2) control_pane_t3

0x96d1,	// (0x00043dca) status_small_pane_g8_ParamLimits

0x96d1,	// (0x00043dca) status_small_pane_g8

0x64ac,	// (0x00040ba5) popup_find_window_ParamLimits

0x66c1,	// (0x00040dba) popup_note_image_window_ParamLimits

0x5028,	// (0x0003f721) list_double2_graphic_pane_vc_g1_ParamLimits

0x5028,	// (0x0003f721) list_double2_graphic_pane_vc_g1

0x9388,	// (0x00043a81) list_double2_graphic_pane_vc_g2_ParamLimits

0x9388,	// (0x00043a81) list_double2_graphic_pane_vc_g2

0x6927,	// (0x00041020) list_double2_graphic_pane_vc_g3_ParamLimits

0x6927,	// (0x00041020) list_double2_graphic_pane_vc_g3

0x0002,

0xf7c3,	// (0x00049ebc) list_double2_graphic_pane_vc_g_ParamLimits

0xf7c3,	// (0x00049ebc) list_double2_graphic_pane_vc_g

0x5034,	// (0x0003f72d) list_double2_graphic_pane_vc_t1_ParamLimits

0x5034,	// (0x0003f72d) list_double2_graphic_pane_vc_t1

0x9388,	// (0x00043a81) list_single_heading_pane_vc_g1_ParamLimits

0x9388,	// (0x00043a81) list_single_heading_pane_vc_g1

0x6927,	// (0x00041020) list_single_heading_pane_vc_g2_ParamLimits

0x6927,	// (0x00041020) list_single_heading_pane_vc_g2

0x0001,

0xf7e4,	// (0x00049edd) list_single_heading_pane_vc_g_ParamLimits

0xf7e4,	// (0x00049edd) list_single_heading_pane_vc_g

0x504a,	// (0x0003f743) list_single_heading_pane_vc_t1_ParamLimits

0x504a,	// (0x0003f743) list_single_heading_pane_vc_t1

0x5060,	// (0x0003f759) list_single_heading_pane_vc_t2_ParamLimits

0x5060,	// (0x0003f759) list_single_heading_pane_vc_t2

0x0001,

0xf7e9,	// (0x00049ee2) list_single_heading_pane_vc_t_ParamLimits

0xf7e9,	// (0x00049ee2) list_single_heading_pane_vc_t

0x6992,	// (0x0004108b) list_setting_number_pane_vc_g1_ParamLimits

0x6992,	// (0x0004108b) list_setting_number_pane_vc_g1

0x699e,	// (0x00041097) list_setting_number_pane_vc_g2_ParamLimits

0x699e,	// (0x00041097) list_setting_number_pane_vc_g2

0x0001,

0xf7ee,	// (0x00049ee7) list_setting_number_pane_vc_g_ParamLimits

0xf7ee,	// (0x00049ee7) list_setting_number_pane_vc_g

0x5072,	// (0x0003f76b) list_setting_number_pane_vc_t1_ParamLimits

0x5072,	// (0x0003f76b) list_setting_number_pane_vc_t1

0x5086,	// (0x0003f77f) list_setting_number_pane_vc_t2_ParamLimits

0x5086,	// (0x0003f77f) list_setting_number_pane_vc_t2

0x50a2,	// (0x0003f79b) list_setting_number_pane_vc_t3_ParamLimits

0x50a2,	// (0x0003f79b) list_setting_number_pane_vc_t3

0x0002,

0xf7f3,	// (0x00049eec) list_setting_number_pane_vc_t_ParamLimits

0xf7f3,	// (0x00049eec) list_setting_number_pane_vc_t

0x50ce,	// (0x0003f7c7) set_value_pane_vc_ParamLimits

0x50ce,	// (0x0003f7c7) set_value_pane_vc

0xb231,	// (0x0004592a) list_double2_graphic_pane_vc_ParamLimits

0xb231,	// (0x0004592a) list_double2_graphic_pane_vc

0x5185,	// (0x0003f87e) list_double2_large_graphic_pane_vc_ParamLimits

0x5185,	// (0x0003f87e) list_double2_large_graphic_pane_vc

0xb231,	// (0x0004592a) list_double2_pane_vc_ParamLimits

0xb231,	// (0x0004592a) list_double2_pane_vc

0xb231,	// (0x0004592a) list_double_graphic_heading_pane_vc_ParamLimits

0xb231,	// (0x0004592a) list_double_graphic_heading_pane_vc

0xb231,	// (0x0004592a) list_double_graphic_pane_vc_ParamLimits

0xb231,	// (0x0004592a) list_double_graphic_pane_vc

0xb231,	// (0x0004592a) list_double_heading_pane_vc_ParamLimits

0xb231,	// (0x0004592a) list_double_heading_pane_vc

0x5196,	// (0x0003f88f) list_double_large_graphic_pane_vc_ParamLimits

0x5196,	// (0x0003f88f) list_double_large_graphic_pane_vc

0xb231,	// (0x0004592a) list_double_number_pane_vc_ParamLimits

0xb231,	// (0x0004592a) list_double_number_pane_vc

0xb231,	// (0x0004592a) list_double_pane_vc_ParamLimits

0xb231,	// (0x0004592a) list_double_pane_vc

0xb231,	// (0x0004592a) list_double_time_pane_vc_ParamLimits

0xb231,	// (0x0004592a) list_double_time_pane_vc

0xb231,	// (0x0004592a) list_setting_number_pane_vc_ParamLimits

0xb231,	// (0x0004592a) list_setting_number_pane_vc

0xb231,	// (0x0004592a) list_setting_pane_vc_ParamLimits

0xb231,	// (0x0004592a) list_setting_pane_vc

0xb231,	// (0x0004592a) list_single_graphic_heading_pane_vc_ParamLimits

0xb231,	// (0x0004592a) list_single_graphic_heading_pane_vc

0xb231,	// (0x0004592a) list_single_heading_pane_vc_ParamLimits

0xb231,	// (0x0004592a) list_single_heading_pane_vc

0x6c8e,	// (0x00041387) list_single_number_heading_pane_vc_ParamLimits

0x6c8e,	// (0x00041387) list_single_number_heading_pane_vc

0x5028,	// (0x0003f721) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x5028,	// (0x0003f721) list_double_graphic_heading_pane_vc_g1

0x9388,	// (0x00043a81) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x9388,	// (0x00043a81) list_double_graphic_heading_pane_vc_g2

0x6927,	// (0x00041020) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x6927,	// (0x00041020) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7c3,	// (0x00049ebc) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7c3,	// (0x00049ebc) list_double_graphic_heading_pane_vc_g

0x51e5,	// (0x0003f8de) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x51e5,	// (0x0003f8de) list_double_graphic_heading_pane_vc_t1

0x5201,	// (0x0003f8fa) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x5201,	// (0x0003f8fa) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f8,	// (0x0004a0f1) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f8,	// (0x0004a0f1) list_double_graphic_heading_pane_vc_t

0x6992,	// (0x0004108b) list_setting_pane_vc_g1_ParamLimits

0x6992,	// (0x0004108b) list_setting_pane_vc_g1

0x699e,	// (0x00041097) list_setting_pane_vc_g2_ParamLimits

0x699e,	// (0x00041097) list_setting_pane_vc_g2

0x0001,

0xf7ee,	// (0x00049ee7) list_setting_pane_vc_g_ParamLimits

0xf7ee,	// (0x00049ee7) list_setting_pane_vc_g

0x521f,	// (0x0003f918) list_setting_pane_vc_t1_ParamLimits

0x521f,	// (0x0003f918) list_setting_pane_vc_t1

0x523b,	// (0x0003f934) list_setting_pane_vc_t2_ParamLimits

0x523b,	// (0x0003f934) list_setting_pane_vc_t2

0x0001,

0xfa26,	// (0x0004a11f) list_setting_pane_vc_t_ParamLimits

0xfa26,	// (0x0004a11f) list_setting_pane_vc_t

0x50ce,	// (0x0003f7c7) set_value_pane_cp_vc_ParamLimits

0x50ce,	// (0x0003f7c7) set_value_pane_cp_vc

0x9388,	// (0x00043a81) list_single_number_heading_pane_vc_g1_ParamLimits

0x9388,	// (0x00043a81) list_single_number_heading_pane_vc_g1

0x6927,	// (0x00041020) list_single_number_heading_pane_vc_g2_ParamLimits

0x6927,	// (0x00041020) list_single_number_heading_pane_vc_g2

0x0001,

0xf7e4,	// (0x00049edd) list_single_number_heading_pane_vc_g_ParamLimits

0xf7e4,	// (0x00049edd) list_single_number_heading_pane_vc_g

0x5257,	// (0x0003f950) list_single_number_heading_pane_vc_t1_ParamLimits

0x5257,	// (0x0003f950) list_single_number_heading_pane_vc_t1

0x526d,	// (0x0003f966) list_single_number_heading_pane_vc_t2_ParamLimits

0x526d,	// (0x0003f966) list_single_number_heading_pane_vc_t2

0x527f,	// (0x0003f978) list_single_number_heading_pane_vc_t3_ParamLimits

0x527f,	// (0x0003f978) list_single_number_heading_pane_vc_t3

0x0002,

0xfa2b,	// (0x0004a124) list_single_number_heading_pane_vc_t_ParamLimits

0xfa2b,	// (0x0004a124) list_single_number_heading_pane_vc_t

0x5028,	// (0x0003f721) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x5028,	// (0x0003f721) list_single_graphic_heading_pane_vc_g1

0x9388,	// (0x00043a81) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x9388,	// (0x00043a81) list_single_graphic_heading_pane_vc_g4

0x6927,	// (0x00041020) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x6927,	// (0x00041020) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7c3,	// (0x00049ebc) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7c3,	// (0x00049ebc) list_single_graphic_heading_pane_vc_g

0x5257,	// (0x0003f950) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x5257,	// (0x0003f950) list_single_graphic_heading_pane_vc_t1

0x5291,	// (0x0003f98a) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x5291,	// (0x0003f98a) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa32,	// (0x0004a12b) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa32,	// (0x0004a12b) list_single_graphic_heading_pane_vc_t

0x9388,	// (0x00043a81) list_double2_pane_vc_g1_ParamLimits

0x9388,	// (0x00043a81) list_double2_pane_vc_g1

0x6927,	// (0x00041020) list_double2_pane_vc_g2_ParamLimits

0x6927,	// (0x00041020) list_double2_pane_vc_g2

0x0001,

0xf7e4,	// (0x00049edd) list_double2_pane_vc_g_ParamLimits

0xf7e4,	// (0x00049edd) list_double2_pane_vc_g

0x52a3,	// (0x0003f99c) list_double2_pane_vc_t1_ParamLimits

0x52a3,	// (0x0003f99c) list_double2_pane_vc_t1

0x52b9,	// (0x0003f9b2) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x52b9,	// (0x0003f9b2) list_double2_large_graphic_pane_vc_g1

0x52c5,	// (0x0003f9be) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x52c5,	// (0x0003f9be) list_double2_large_graphic_pane_vc_g2

0x52d1,	// (0x0003f9ca) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x52d1,	// (0x0003f9ca) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa37,	// (0x0004a130) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa37,	// (0x0004a130) list_double2_large_graphic_pane_vc_g

0x52dd,	// (0x0003f9d6) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x52dd,	// (0x0003f9d6) list_double2_large_graphic_pane_vc_t1

0x6dd2,	// (0x000414cb) list_double_time_pane_vc_g1_ParamLimits

0x6dd2,	// (0x000414cb) list_double_time_pane_vc_g1

0x6dde,	// (0x000414d7) list_double_time_pane_vc_g2_ParamLimits

0x6dde,	// (0x000414d7) list_double_time_pane_vc_g2

0x0001,

0xfa3e,	// (0x0004a137) list_double_time_pane_vc_g_ParamLimits

0xfa3e,	// (0x0004a137) list_double_time_pane_vc_g

0x52f3,	// (0x0003f9ec) list_double_time_pane_vc_t1_ParamLimits

0x52f3,	// (0x0003f9ec) list_double_time_pane_vc_t1

0x5317,	// (0x0003fa10) list_double_time_pane_vc_t2_ParamLimits

0x5317,	// (0x0003fa10) list_double_time_pane_vc_t2

0x5366,	// (0x0003fa5f) list_double_time_pane_vc_t3_ParamLimits

0x5366,	// (0x0003fa5f) list_double_time_pane_vc_t3

0x5378,	// (0x0003fa71) list_double_time_pane_vc_t4_ParamLimits

0x5378,	// (0x0003fa71) list_double_time_pane_vc_t4

0x0003,

0xfa43,	// (0x0004a13c) list_double_time_pane_vc_t_ParamLimits

0xfa43,	// (0x0004a13c) list_double_time_pane_vc_t

0x9388,	// (0x00043a81) list_double_pane_vc_g1_ParamLimits

0x9388,	// (0x00043a81) list_double_pane_vc_g1

0x6927,	// (0x00041020) list_double_pane_vc_g2_ParamLimits

0x6927,	// (0x00041020) list_double_pane_vc_g2

0x0001,

0xf7e4,	// (0x00049edd) list_double_pane_vc_g_ParamLimits

0xf7e4,	// (0x00049edd) list_double_pane_vc_g

0x538c,	// (0x0003fa85) list_double_pane_vc_t1_ParamLimits

0x538c,	// (0x0003fa85) list_double_pane_vc_t1

0x53a0,	// (0x0003fa99) list_double_pane_vc_t2_ParamLimits

0x53a0,	// (0x0003fa99) list_double_pane_vc_t2

0x0001,

0xfa4c,	// (0x0004a145) list_double_pane_vc_t_ParamLimits

0xfa4c,	// (0x0004a145) list_double_pane_vc_t

0x9388,	// (0x00043a81) list_double_number_pane_vc_g1_ParamLimits

0x9388,	// (0x00043a81) list_double_number_pane_vc_g1

0x6927,	// (0x00041020) list_double_number_pane_vc_g2_ParamLimits

0x6927,	// (0x00041020) list_double_number_pane_vc_g2

0x0001,

0xf7e4,	// (0x00049edd) list_double_number_pane_vc_g_ParamLimits

0xf7e4,	// (0x00049edd) list_double_number_pane_vc_g

0x53b8,	// (0x0003fab1) list_double_number_pane_vc_t1_ParamLimits

0x53b8,	// (0x0003fab1) list_double_number_pane_vc_t1

0x53ca,	// (0x0003fac3) list_double_number_pane_vc_t2_ParamLimits

0x53ca,	// (0x0003fac3) list_double_number_pane_vc_t2

0x53de,	// (0x0003fad7) list_double_number_pane_vc_t3_ParamLimits

0x53de,	// (0x0003fad7) list_double_number_pane_vc_t3

0x0002,

0xfa51,	// (0x0004a14a) list_double_number_pane_vc_t_ParamLimits

0xfa51,	// (0x0004a14a) list_double_number_pane_vc_t

0x53f6,	// (0x0003faef) list_double_large_graphic_pane_vc_g1_ParamLimits

0x53f6,	// (0x0003faef) list_double_large_graphic_pane_vc_g1

0x5418,	// (0x0003fb11) list_double_large_graphic_pane_vc_g2_ParamLimits

0x5418,	// (0x0003fb11) list_double_large_graphic_pane_vc_g2

0x542c,	// (0x0003fb25) list_double_large_graphic_pane_vc_g3_ParamLimits

0x542c,	// (0x0003fb25) list_double_large_graphic_pane_vc_g3

0x543b,	// (0x0003fb34) list_double_large_graphic_pane_vc_g4_ParamLimits

0x543b,	// (0x0003fb34) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa58,	// (0x0004a151) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa58,	// (0x0004a151) list_double_large_graphic_pane_vc_g

0x5447,	// (0x0003fb40) list_double_large_graphic_pane_vc_t1_ParamLimits

0x5447,	// (0x0003fb40) list_double_large_graphic_pane_vc_t1

0x5463,	// (0x0003fb5c) list_double_large_graphic_pane_vc_t2_ParamLimits

0x5463,	// (0x0003fb5c) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa61,	// (0x0004a15a) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa61,	// (0x0004a15a) list_double_large_graphic_pane_vc_t

0x9388,	// (0x00043a81) list_double_heading_pane_vc_g1_ParamLimits

0x9388,	// (0x00043a81) list_double_heading_pane_vc_g1

0x6927,	// (0x00041020) list_double_heading_pane_vc_g2_ParamLimits

0x6927,	// (0x00041020) list_double_heading_pane_vc_g2

0x0001,

0xf7e4,	// (0x00049edd) list_double_heading_pane_vc_g_ParamLimits

0xf7e4,	// (0x00049edd) list_double_heading_pane_vc_g

0x5485,	// (0x0003fb7e) list_double_heading_pane_vc_t1_ParamLimits

0x5485,	// (0x0003fb7e) list_double_heading_pane_vc_t1

0x5499,	// (0x0003fb92) list_double_heading_pane_vc_t2_ParamLimits

0x5499,	// (0x0003fb92) list_double_heading_pane_vc_t2

0x0001,

0xfa66,	// (0x0004a15f) list_double_heading_pane_vc_t_ParamLimits

0xfa66,	// (0x0004a15f) list_double_heading_pane_vc_t

0x54b1,	// (0x0003fbaa) list_double_graphic_pane_vc_g1_ParamLimits

0x54b1,	// (0x0003fbaa) list_double_graphic_pane_vc_g1

0x6dea,	// (0x000414e3) list_double_graphic_pane_vc_g2_ParamLimits

0x6dea,	// (0x000414e3) list_double_graphic_pane_vc_g2

0x9388,	// (0x00043a81) list_double_graphic_pane_vc_g3_ParamLimits

0x9388,	// (0x00043a81) list_double_graphic_pane_vc_g3

0x0003,

0xfa6b,	// (0x0004a164) list_double_graphic_pane_vc_g_ParamLimits

0xfa6b,	// (0x0004a164) list_double_graphic_pane_vc_g

0x54bd,	// (0x0003fbb6) list_double_graphic_pane_vc_t1_ParamLimits

0x54bd,	// (0x0003fbb6) list_double_graphic_pane_vc_t1

0x54e7,	// (0x0003fbe0) list_double_graphic_pane_vc_t2_ParamLimits

0x54e7,	// (0x0003fbe0) list_double_graphic_pane_vc_t2

0x0001,

0xfa74,	// (0x0004a16d) list_double_graphic_pane_vc_t_ParamLimits

0xfa74,	// (0x0004a16d) list_double_graphic_pane_vc_t

0x5811,	// (0x0003ff0a) aid_size_cell_fastswap

0x5819,	// (0x0003ff12) aid_size_cell_touch_ParamLimits

0x5819,	// (0x0003ff12) aid_size_cell_touch

0x5a74,	// (0x0004016d) popup_fast_swap_wide_window_ParamLimits

0x5a74,	// (0x0004016d) popup_fast_swap_wide_window

0x5b88,	// (0x00040281) touch_pane_ParamLimits

0x5b88,	// (0x00040281) touch_pane

0x87b2,	// (0x00042eab) button_value_adjust_pane_cp2

0x4cd3,	// (0x0003f3cc) button_value_adjust_pane_cp4

0x4cf7,	// (0x0003f3f0) form_field_data_pane_cp2

0x4d18,	// (0x0003f411) form_field_data_wide_pane_cp2

0x8c26,	// (0x0004331f) bg_scroll_pane_ParamLimits

0x5ec2,	// (0x000405bb) scroll_handle_pane_ParamLimits

0x5ed6,	// (0x000405cf) scroll_sc2_down_pane_ParamLimits

0x5ed6,	// (0x000405cf) scroll_sc2_down_pane

0x8c57,	// (0x00043350) scroll_sc2_up_pane_ParamLimits

0x8c57,	// (0x00043350) scroll_sc2_up_pane

0xbdd8,	// (0x000464d1) grid_wheel_folder_pane_g1_ParamLimits

0xbdd8,	// (0x000464d1) grid_wheel_folder_pane_g1

0x60b7,	// (0x000407b0) clock_nsta_pane_cp2_ParamLimits

0x60b7,	// (0x000407b0) clock_nsta_pane_cp2

0x9457,	// (0x00043b50) listscroll_midp_pane_ParamLimits

0x9463,	// (0x00043b5c) midp_canvas_pane

0x974b,	// (0x00043e44) nsta_clock_indic_pane

0x977f,	// (0x00043e78) listscroll_form_pane_vc

0x9787,	// (0x00043e80) listscroll_set_pane_vc_ParamLimits

0x9787,	// (0x00043e80) listscroll_set_pane_vc

0x9880,	// (0x00043f79) clock_nsta_pane

0x98f5,	// (0x00043fee) indicator_nsta_pane

0x9be1,	// (0x000442da) bg_popup_sub_pane_cp2_ParamLimits

0x9bf5,	// (0x000442ee) find_pane_cp2_ParamLimits

0x9bf5,	// (0x000442ee) find_pane_cp2

0x9c0b,	// (0x00044304) grid_toobar_pane_ParamLimits

0x9ceb,	// (0x000443e4) list_form_gen_pane_vc_ParamLimits

0x9ceb,	// (0x000443e4) list_form_gen_pane_vc

0x9d01,	// (0x000443fa) scroll_pane_cp8_vc_ParamLimits

0x9d01,	// (0x000443fa) scroll_pane_cp8_vc

0x9d7d,	// (0x00044476) data_form_wide_pane_vc_ParamLimits

0x9d7d,	// (0x00044476) data_form_wide_pane_vc

0x9d89,	// (0x00044482) form_field_data_wide_pane_vc_g1

0x9d91,	// (0x0004448a) form_field_data_wide_pane_vc_t1_ParamLimits

0x9d91,	// (0x0004448a) form_field_data_wide_pane_vc_t1

0x87c6,	// (0x00042ebf) input_focus_pane_cp6_vc_ParamLimits

0x87c6,	// (0x00042ebf) input_focus_pane_cp6_vc

0xa0b7,	// (0x000447b0) list_midp_pane_ParamLimits

0xa0c3,	// (0x000447bc) scroll_pane_cp16_ParamLimits

0xa0c3,	// (0x000447bc) scroll_pane_cp16

0xa125,	// (0x0004481e) button_value_adjust_pane_ParamLimits

0xa125,	// (0x0004481e) button_value_adjust_pane

0xb08b,	// (0x00045784) button_value_adjust_pane_cp6_ParamLimits

0xb08b,	// (0x00045784) button_value_adjust_pane_cp6

0xb1b5,	// (0x000458ae) settings_code_pane_cp_ParamLimits

0xb1b5,	// (0x000458ae) settings_code_pane_cp

0x7e3b,	// (0x00042534) cell_touch_pane_g1

0x7e3b,	// (0x00042534) cell_touch_pane_g2

0x0001,

0xf708,	// (0x00049e01) cell_touch_pane_g

0xb72b,	// (0x00045e24) cell_touch_pane_cp_ParamLimits

0xb72b,	// (0x00045e24) cell_touch_pane_cp

0xb73b,	// (0x00045e34) cell_touch_pane_ParamLimits

0xb73b,	// (0x00045e34) cell_touch_pane

0x7e3b,	// (0x00042534) scroll_sc2_down_pane_g1

0x7e3b,	// (0x00042534) scroll_sc2_up_pane_g1

0x7e45,	// (0x0004253e) bg_set_opt_pane_cp4_vc

0xb74d,	// (0x00045e46) list_set_graphic_pane_vc_g1_ParamLimits

0xb74d,	// (0x00045e46) list_set_graphic_pane_vc_g1

0xb759,	// (0x00045e52) list_set_graphic_pane_vc_g2_ParamLimits

0xb759,	// (0x00045e52) list_set_graphic_pane_vc_g2

0x0001,

0xf9fd,	// (0x0004a0f6) list_set_graphic_pane_vc_g_ParamLimits

0xf9fd,	// (0x0004a0f6) list_set_graphic_pane_vc_g

0xb765,	// (0x00045e5e) text_primary_small_cp13_vc_ParamLimits

0xb765,	// (0x00045e5e) text_primary_small_cp13_vc

0xb77d,	// (0x00045e76) list_set_graphic_pane_vc_ParamLimits

0xb77d,	// (0x00045e76) list_set_graphic_pane_vc

0x7e45,	// (0x0004253e) input_focus_pane_cp2_vc

0x7e3b,	// (0x00042534) setting_code_pane_vc_g1

0x7f70,	// (0x00042669) setting_code_pane_vc_t1

0xb78f,	// (0x00045e88) set_text_pane_vc_t1_ParamLimits

0xb78f,	// (0x00045e88) set_text_pane_vc_t1

0x7e45,	// (0x0004253e) input_focus_pane_cp1_vc

0xb7ab,	// (0x00045ea4) list_set_text_pane_vc

0x7e3b,	// (0x00042534) setting_text_pane_vc_g1

0x7e45,	// (0x0004253e) bg_set_opt_pane_cp2_vc

0x7f67,	// (0x00042660) setting_slider_graphic_pane_vc_g1

0xb7b5,	// (0x00045eae) setting_slider_graphic_pane_vc_t1

0xb7c5,	// (0x00045ebe) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa02,	// (0x0004a0fb) setting_slider_graphic_pane_vc_t

0xb7d5,	// (0x00045ece) slider_set_pane_cp_vc

0xb7dd,	// (0x00045ed6) slider_set_pane_vc_g1

0xb7e6,	// (0x00045edf) slider_set_pane_vc_g2

0x0006,

0xfa07,	// (0x0004a100) slider_set_pane_vc_g

0x8812,	// (0x00042f0b) set_opt_bg_pane_g1_copy1

0x881a,	// (0x00042f13) set_opt_bg_pane_g2_copy1

0xb812,	// (0x00045f0b) set_opt_bg_pane_g3_copy1

0x882a,	// (0x00042f23) set_opt_bg_pane_g4_copy1

0x8832,	// (0x00042f2b) set_opt_bg_pane_g5_copy1

0x883a,	// (0x00042f33) set_opt_bg_pane_g6_copy1

0xb81c,	// (0x00045f15) set_opt_bg_pane_g7_copy1

0xb824,	// (0x00045f1d) set_opt_bg_pane_g8_copy1

0xb82e,	// (0x00045f27) set_opt_bg_pane_g9_copy1

0x7e45,	// (0x0004253e) bg_set_opt_pane_cp_vc

0xb838,	// (0x00045f31) setting_slider_pane_vc_t1

0xb847,	// (0x00045f40) setting_slider_pane_vc_t2

0xb857,	// (0x00045f50) setting_slider_pane_vc_t3

0x0002,

0xfa16,	// (0x0004a10f) setting_slider_pane_vc_t

0xb867,	// (0x00045f60) slider_set_pane_vc

0x6a47,	// (0x00041140) volume_set_pane_vc_g1

0x6a50,	// (0x00041149) volume_set_pane_vc_g2

0x6a59,	// (0x00041152) volume_set_pane_vc_g3

0x6a62,	// (0x0004115b) volume_set_pane_vc_g4

0x6a6b,	// (0x00041164) volume_set_pane_vc_g5

0x6a74,	// (0x0004116d) volume_set_pane_vc_g6

0x6a7d,	// (0x00041176) volume_set_pane_vc_g7

0x6a86,	// (0x0004117f) volume_set_pane_vc_g8

0x6a8f,	// (0x00041188) volume_set_pane_vc_g9

0x6a98,	// (0x00041191) volume_set_pane_vc_g10

0x0009,

0xf8bb,	// (0x00049fb4) volume_set_pane_vc_g

0xb86f,	// (0x00045f68) volume_set_pane_vc

0xb877,	// (0x00045f70) button_value_adjust_pane_cp1_vc

0xb881,	// (0x00045f7a) list_highlight_pane_cp2_vc

0xb88a,	// (0x00045f83) list_set_pane_vc_ParamLimits

0xb88a,	// (0x00045f83) list_set_pane_vc

0xb8e8,	// (0x00045fe1) main_pane_set_vc_t1_ParamLimits

0xb8e8,	// (0x00045fe1) main_pane_set_vc_t1

0xb8fd,	// (0x00045ff6) main_pane_set_vc_t2_ParamLimits

0xb8fd,	// (0x00045ff6) main_pane_set_vc_t2

0xb90f,	// (0x00046008) main_pane_set_vc_t3_ParamLimits

0xb90f,	// (0x00046008) main_pane_set_vc_t3

0xb923,	// (0x0004601c) main_pane_set_vc_t4_ParamLimits

0xb923,	// (0x0004601c) main_pane_set_vc_t4

0x0003,

0xfa1d,	// (0x0004a116) main_pane_set_vc_t_ParamLimits

0xfa1d,	// (0x0004a116) main_pane_set_vc_t

0xb937,	// (0x00046030) setting_code_pane_vc_ParamLimits

0xb937,	// (0x00046030) setting_code_pane_vc

0xb948,	// (0x00046041) setting_slider_graphic_pane_vc

0xb948,	// (0x00046041) setting_slider_pane_vc

0xb948,	// (0x00046041) setting_text_pane_vc

0xb948,	// (0x00046041) setting_volume_pane_vc

0xb952,	// (0x0004604b) scroll_pane_cp121_vc

0x87a0,	// (0x00042e99) set_content_pane_vc

0xb95a,	// (0x00046053) button_value_adjust_pane_g1

0xb963,	// (0x0004605c) button_value_adjust_pane_g2

0x0001,

0xfa79,	// (0x0004a172) button_value_adjust_pane_g

0xb96c,	// (0x00046065) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb96c,	// (0x00046065) form_field_slider_wide_pane_vc_t1

0xb980,	// (0x00046079) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb980,	// (0x00046079) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa7e,	// (0x0004a177) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa7e,	// (0x0004a177) form_field_slider_wide_pane_vc_t

0x81a0,	// (0x00042899) input_focus_pane_cp10_vc_ParamLimits

0x81a0,	// (0x00042899) input_focus_pane_cp10_vc

0xb9ae,	// (0x000460a7) slider_cont_pane_cp1_vc_ParamLimits

0xb9ae,	// (0x000460a7) slider_cont_pane_cp1_vc

0xb9c0,	// (0x000460b9) slider_form_pane_g1_cp2

0xb7e6,	// (0x00045edf) slider_form_pane_g2_cp2

0xb9ed,	// (0x000460e6) form_field_slider_pane_vc_t3

0xb9fb,	// (0x000460f4) form_field_slider_pane_vc_t4

0xba09,	// (0x00046102) slider_form_pane_vc_ParamLimits

0xba09,	// (0x00046102) slider_form_pane_vc

0xba16,	// (0x0004610f) form_field_slider_pane_vc_t1_ParamLimits

0xba16,	// (0x0004610f) form_field_slider_pane_vc_t1

0xb980,	// (0x00046079) form_field_slider_pane_vc_t2_ParamLimits

0xb980,	// (0x00046079) form_field_slider_pane_vc_t2

0x0001,

0xfa90,	// (0x0004a189) form_field_slider_pane_vc_t_ParamLimits

0xfa90,	// (0x0004a189) form_field_slider_pane_vc_t

0x81a0,	// (0x00042899) input_focus_pane_cp9_vc_ParamLimits

0x81a0,	// (0x00042899) input_focus_pane_cp9_vc

0xba32,	// (0x0004612b) slider_cont_pane_vc_ParamLimits

0xba32,	// (0x0004612b) slider_cont_pane_vc

0xba46,	// (0x0004613f) list_form_graphic_pane_cp_vc_ParamLimits

0xba46,	// (0x0004613f) list_form_graphic_pane_cp_vc

0x9d89,	// (0x00044482) form_field_popup_wide_pane_vc_g1

0xba5b,	// (0x00046154) form_field_popup_wide_pane_vc_t1_ParamLimits

0xba5b,	// (0x00046154) form_field_popup_wide_pane_vc_t1

0x87c6,	// (0x00042ebf) input_focus_pane_cp8_vc_ParamLimits

0x87c6,	// (0x00042ebf) input_focus_pane_cp8_vc

0xbaa0,	// (0x00046199) list_form_wide_pane_vc_ParamLimits

0xbaa0,	// (0x00046199) list_form_wide_pane_vc

0xbaac,	// (0x000461a5) list_form_graphic_pane_vc_g1

0xbab4,	// (0x000461ad) list_form_graphic_pane_vc_t1_ParamLimits

0xbab4,	// (0x000461ad) list_form_graphic_pane_vc_t1

0x7f25,	// (0x0004261e) list_highlight_pane_cp5_vc_ParamLimits

0x7f25,	// (0x0004261e) list_highlight_pane_cp5_vc

0xbad0,	// (0x000461c9) list_form_graphic_pane_vc_ParamLimits

0xbad0,	// (0x000461c9) list_form_graphic_pane_vc

0x9d89,	// (0x00044482) form_field_popup_pane_vc_g1

0xbae6,	// (0x000461df) form_field_popup_pane_vc_t1_ParamLimits

0xbae6,	// (0x000461df) form_field_popup_pane_vc_t1

0x87c6,	// (0x00042ebf) input_focus_pane_cp7_vc_ParamLimits

0x87c6,	// (0x00042ebf) input_focus_pane_cp7_vc

0xbafd,	// (0x000461f6) list_form_pane_vc_ParamLimits

0xbafd,	// (0x000461f6) list_form_pane_vc

0xbb09,	// (0x00046202) data_form_pane_vc_t1_ParamLimits

0xbb09,	// (0x00046202) data_form_pane_vc_t1

0x8812,	// (0x00042f0b) input_focus_pane_vc_g1

0x881a,	// (0x00042f13) input_focus_pane_vc_g2

0x8822,	// (0x00042f1b) input_focus_pane_vc_g3

0x882a,	// (0x00042f23) input_focus_pane_vc_g4

0x8832,	// (0x00042f2b) input_focus_pane_vc_g5

0x883a,	// (0x00042f33) input_focus_pane_vc_g6

0x8842,	// (0x00042f3b) input_focus_pane_vc_g7

0x884a,	// (0x00042f43) input_focus_pane_vc_g8

0x8852,	// (0x00042f4b) input_focus_pane_vc_g9

0x7e3b,	// (0x00042534) input_focus_pane_vc_g10

0x0009,

0xf691,	// (0x00049d8a) input_focus_pane_vc_g

0x9d7d,	// (0x00044476) data_form_pane_vc_ParamLimits

0x9d7d,	// (0x00044476) data_form_pane_vc

0x9d89,	// (0x00044482) form_field_data_pane_vc_g1

0xbb24,	// (0x0004621d) form_field_data_pane_vc_t1_ParamLimits

0xbb24,	// (0x0004621d) form_field_data_pane_vc_t1

0x87c6,	// (0x00042ebf) input_focus_pane_vc_ParamLimits

0x87c6,	// (0x00042ebf) input_focus_pane_vc

0xbb3e,	// (0x00046237) button_value_adjust_pane_cp3_vc

0xbb46,	// (0x0004623f) button_value_adjust_pane_cp5_vc

0xbb4e,	// (0x00046247) form_field_data_pane_vc_ParamLimits

0xbb4e,	// (0x00046247) form_field_data_pane_vc

0xbb65,	// (0x0004625e) form_field_data_pane_vc_cp2

0xbb6d,	// (0x00046266) form_field_data_wide_pane_vc_ParamLimits

0xbb6d,	// (0x00046266) form_field_data_wide_pane_vc

0xbb83,	// (0x0004627c) form_field_data_wide_pane_vc_cp2

0xbb8b,	// (0x00046284) form_field_popup_pane_vc_ParamLimits

0xbb8b,	// (0x00046284) form_field_popup_pane_vc

0xbba2,	// (0x0004629b) form_field_popup_wide_pane_vc_ParamLimits

0xbba2,	// (0x0004629b) form_field_popup_wide_pane_vc

0xbbb8,	// (0x000462b1) form_field_slider_pane_vc_ParamLimits

0xbbb8,	// (0x000462b1) form_field_slider_pane_vc

0xbbcb,	// (0x000462c4) form_field_slider_wide_pane_vc_ParamLimits

0xbbcb,	// (0x000462c4) form_field_slider_wide_pane_vc

0xbbde,	// (0x000462d7) grid_touch_1_pane_ParamLimits

0xbbde,	// (0x000462d7) grid_touch_1_pane

0xbbea,	// (0x000462e3) grid_touch_2_pane_ParamLimits

0xbbea,	// (0x000462e3) grid_touch_2_pane

0x9716,	// (0x00043e0f) touch_pane_g1_ParamLimits

0x9716,	// (0x00043e0f) touch_pane_g1

0xbc02,	// (0x000462fb) cell_app_pane_cp_wide_ParamLimits

0xbc02,	// (0x000462fb) cell_app_pane_cp_wide

0xbc13,	// (0x0004630c) grid_popup_fast_wide_pane_ParamLimits

0xbc13,	// (0x0004630c) grid_popup_fast_wide_pane

0xbc27,	// (0x00046320) scroll_pane_cp19_ParamLimits

0xbc27,	// (0x00046320) scroll_pane_cp19

0x7e45,	// (0x0004253e) bg_popup_window_pane_cp20

0xbc3b,	// (0x00046334) listscroll_popup_fast_wide_pane

0x7f25,	// (0x0004261e) grid_indicator_nsta_pane

0xbc43,	// (0x0004633c) clock_nsta_pane_g1

0xbc4c,	// (0x00046345) clock_nsta_pane_t1

0xbc68,	// (0x00046361) cell_indicator_nsta_pane_ParamLimits

0xbc68,	// (0x00046361) cell_indicator_nsta_pane

0xbc99,	// (0x00046392) cell_indicator_nsta_pane_g1

0xbca7,	// (0x000463a0) cell_indicator_nsta_pane_g2

0x0001,

0xfaa1,	// (0x0004a19a) cell_indicator_nsta_pane_g

0xbcb4,	// (0x000463ad) clock_nsta_pane_cp

0xbcbd,	// (0x000463b6) indicator_nsta_pane_cp

0xbcc5,	// (0x000463be) nsta_clock_indic_pane_g1

0x7fee,	// (0x000426e7) grid_indicator_pane

0x8d4c,	// (0x00043445) scroll_pane_cp29

0x6006,	// (0x000406ff) indicator_nsta_pane_cp2_ParamLimits

0x6006,	// (0x000406ff) indicator_nsta_pane_cp2

0x7f25,	// (0x0004261e) main_apps_wheel_pane

0x9f98,	// (0x00044691) form_midp_field_text_pane_ParamLimits

0xa0e3,	// (0x000447dc) scroll_bar_cp050_ParamLimits

0xbd15,	// (0x0004640e) cell_indicator_pane_ParamLimits

0xbd15,	// (0x0004640e) cell_indicator_pane

0xbd2c,	// (0x00046425) cell_indicator_pane_g1

0xbd36,	// (0x0004642f) grid_wheel_folder_pane_ParamLimits

0xbd36,	// (0x0004642f) grid_wheel_folder_pane

0xbd4c,	// (0x00046445) list_wheel_apps_pane_ParamLimits

0xbd4c,	// (0x00046445) list_wheel_apps_pane

0xbd5d,	// (0x00046456) main_apps_wheel_pane_g1_ParamLimits

0xbd5d,	// (0x00046456) main_apps_wheel_pane_g1

0xbd71,	// (0x0004646a) main_apps_wheel_pane_g2_ParamLimits

0xbd71,	// (0x0004646a) main_apps_wheel_pane_g2

0x0001,

0xfabd,	// (0x0004a1b6) main_apps_wheel_pane_g_ParamLimits

0xfabd,	// (0x0004a1b6) main_apps_wheel_pane_g

0xbd89,	// (0x00046482) main_apps_wheel_pane_t1_ParamLimits

0xbd89,	// (0x00046482) main_apps_wheel_pane_t1

0xbdac,	// (0x000464a5) list_wheel_apps_pane_g1

0xbdb4,	// (0x000464ad) list_wheel_apps_pane_g2

0xbdbc,	// (0x000464b5) list_wheel_apps_pane_g3

0xbdc4,	// (0x000464bd) list_wheel_apps_pane_g4

0xbdce,	// (0x000464c7) list_wheel_apps_pane_g5

0x0004,

0xfac2,	// (0x0004a1bb) list_wheel_apps_pane_g

0x92cf,	// (0x000439c8) navi_icon_text_pane

0x97af,	// (0x00043ea8) aid_fill_nsta

0xbdf1,	// (0x000464ea) navi_icon_text_pane_g1

0xbdfd,	// (0x000464f6) navi_icon_text_pane_t1

0x9162,	// (0x0004385b) list_set_graphic_pane_t1_ParamLimits

0x9162,	// (0x0004385b) list_set_graphic_pane_t1

0xa846,	// (0x00044f3f) popup_midp_note_alarm_window_t6_ParamLimits

0xa846,	// (0x00044f3f) popup_midp_note_alarm_window_t6

0xa858,	// (0x00044f51) popup_midp_note_alarm_window_t7_ParamLimits

0xa858,	// (0x00044f51) popup_midp_note_alarm_window_t7

0xa86a,	// (0x00044f63) popup_midp_note_alarm_window_t8_ParamLimits

0xa86a,	// (0x00044f63) popup_midp_note_alarm_window_t8

0xa87c,	// (0x00044f75) popup_midp_note_alarm_window_t9_ParamLimits

0xa87c,	// (0x00044f75) popup_midp_note_alarm_window_t9

0xa88e,	// (0x00044f87) popup_midp_note_alarm_window_t10_ParamLimits

0xa88e,	// (0x00044f87) popup_midp_note_alarm_window_t10

0xa8a0,	// (0x00044f99) popup_midp_note_alarm_window_t11_ParamLimits

0xa8a0,	// (0x00044f99) popup_midp_note_alarm_window_t11

0xa8b2,	// (0x00044fab) scroll_pane_cp17_ParamLimits

0xa8b2,	// (0x00044fab) scroll_pane_cp17

0x6a47,	// (0x00041140) volume_small_pane_cp_g1

0x6e07,	// (0x00041500) volume_small_pane_cp_g2

0x6e10,	// (0x00041509) volume_small_pane_cp_g3

0x6e19,	// (0x00041512) volume_small_pane_cp_g4

0x6e22,	// (0x0004151b) volume_small_pane_cp_g5

0x6e2b,	// (0x00041524) volume_small_pane_cp_g6

0x6e34,	// (0x0004152d) volume_small_pane_cp_g7

0x6e3d,	// (0x00041536) volume_small_pane_cp_g8

0x6e46,	// (0x0004153f) volume_small_pane_cp_g9

0x6e4f,	// (0x00041548) volume_small_pane_cp_g10

0x952c,	// (0x00043c25) midp_ticker_pane_g1_ParamLimits

0x9538,	// (0x00043c31) midp_ticker_pane_g2_ParamLimits

0xf75d,	// (0x00049e56) midp_ticker_pane_g_ParamLimits

0x9544,	// (0x00043c3d) midp_ticker_pane_t1_ParamLimits

0x97c5,	// (0x00043ebe) aid_fill_nsta_2

0xa0cf,	// (0x000447c8) list_form2_midp_pane

0xb200,	// (0x000458f9) midp_editing_number_pane_ParamLimits

0xb20f,	// (0x00045908) midp_ticker_pane_ParamLimits

0xbe0f,	// (0x00046508) form2_midp_field_pane

0xbe33,	// (0x0004652c) scroll_pane_cp51

0xbe53,	// (0x0004654c) form2_midp_button_pane_ParamLimits

0xbe53,	// (0x0004654c) form2_midp_button_pane

0xbe65,	// (0x0004655e) form2_midp_content_pane_ParamLimits

0xbe65,	// (0x0004655e) form2_midp_content_pane

0xbe7f,	// (0x00046578) form2_midp_field_choice_group_pane

0xbe87,	// (0x00046580) form2_midp_field_pane_g1

0xbe8f,	// (0x00046588) form2_midp_field_pane_g2

0xbe97,	// (0x00046590) form2_midp_field_pane_g3

0xbe9f,	// (0x00046598) form2_midp_field_pane_g4

0x0003,

0xfae7,	// (0x0004a1e0) form2_midp_field_pane_g

0xbea7,	// (0x000465a0) form2_midp_gauge_slider_pane

0xbeaf,	// (0x000465a8) form2_midp_gauge_wait_pane

0xbeb7,	// (0x000465b0) form2_midp_image_pane_ParamLimits

0xbeb7,	// (0x000465b0) form2_midp_image_pane

0xbed2,	// (0x000465cb) form2_midp_label_pane_ParamLimits

0xbed2,	// (0x000465cb) form2_midp_label_pane

0xbeeb,	// (0x000465e4) form2_midp_label_pane_cp_ParamLimits

0xbeeb,	// (0x000465e4) form2_midp_label_pane_cp

0xbf0c,	// (0x00046605) form2_midp_string_pane_ParamLimits

0xbf0c,	// (0x00046605) form2_midp_string_pane

0x5511,	// (0x0003fc0a) form2_midp_text_pane_ParamLimits

0x5511,	// (0x0003fc0a) form2_midp_text_pane

0xbf1e,	// (0x00046617) form2_midp_time_pane

0xbf2e,	// (0x00046627) input_focus_pane_cp51_ParamLimits

0xbf2e,	// (0x00046627) input_focus_pane_cp51

0xbf46,	// (0x0004663f) form2_midp_label_pane_t1_ParamLimits

0xbf46,	// (0x0004663f) form2_midp_label_pane_t1

0x5530,	// (0x0003fc29) form2_mdip_text_pane_t1_ParamLimits

0x5530,	// (0x0003fc29) form2_mdip_text_pane_t1

0x554e,	// (0x0003fc47) form2_midp_time_pane_t1

0xbf8f,	// (0x00046688) form2_midp_gauge_slider_pane_t1

0xbfa1,	// (0x0004669a) form2_midp_gauge_slider_pane_t2

0xbfb3,	// (0x000466ac) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf0,	// (0x0004a1e9) form2_midp_gauge_slider_pane_t

0xbfc5,	// (0x000466be) form2_midp_slider_pane

0xbfd1,	// (0x000466ca) form2_midp_gauge_wait_pane_t1

0xbfdf,	// (0x000466d8) form2_midp_wait_pane_ParamLimits

0xbfdf,	// (0x000466d8) form2_midp_wait_pane

0xc00a,	// (0x00046703) list_single_2graphic_pane_cp4_ParamLimits

0xc00a,	// (0x00046703) list_single_2graphic_pane_cp4

0x9df1,	// (0x000444ea) list_single_midp_graphic_pane_cp_ParamLimits

0x9df1,	// (0x000444ea) list_single_midp_graphic_pane_cp

0x7e45,	// (0x0004253e) list_highlight_pane_cp20

0xc02e,	// (0x00046727) list_single_2graphic_pane_g1_cp4

0xc036,	// (0x0004672f) list_single_2graphic_pane_g2_cp4

0xc03e,	// (0x00046737) list_single_2graphic_pane_t1_cp4

0x7f25,	// (0x0004261e) list_highlight_pane_cp21

0xc04d,	// (0x00046746) list_single_midp_graphic_pane_g4_cp

0xc05c,	// (0x00046755) list_single_midp_graphic_pane_t1_cp

0xc071,	// (0x0004676a) form2_mdip_string_pane_t1_ParamLimits

0xc071,	// (0x0004676a) form2_mdip_string_pane_t1

0x7e45,	// (0x0004253e) bg_wml_button_pane_cp2

0x7e3b,	// (0x00042534) form2_midp_image_pane_g1

0x5cf8,	// (0x000403f1) list_double_large_graphic_pane_g5_ParamLimits

0x5cf8,	// (0x000403f1) list_double_large_graphic_pane_g5

0x9457,	// (0x00043b50) midp_form_pane_ParamLimits

0x7f25,	// (0x0004261e) main_apps_wheel_pane_ParamLimits

0x66e7,	// (0x00040de0) popup_preview_window_ParamLimits

0x66e7,	// (0x00040de0) popup_preview_window

0x68a2,	// (0x00040f9b) popup_touch_info_window_ParamLimits

0x68a2,	// (0x00040f9b) popup_touch_info_window

0x68c0,	// (0x00040fb9) popup_touch_menu_window_ParamLimits

0x68c0,	// (0x00040fb9) popup_touch_menu_window

0x7e31,	// (0x0004252a) bg_popup_sub_pane_cp6

0xc16a,	// (0x00046863) list_touch_menu_pane

0xc172,	// (0x0004686b) list_single_touch_menu_pane_ParamLimits

0xc172,	// (0x0004686b) list_single_touch_menu_pane

0xc188,	// (0x00046881) list_single_touch_menu_pane_t1

0x7f25,	// (0x0004261e) bg_popup_sub_pane_cp7_ParamLimits

0x7f25,	// (0x0004261e) bg_popup_sub_pane_cp7

0xc196,	// (0x0004688f) heading_sub_pane

0xc19e,	// (0x00046897) list_touch_info_pane_ParamLimits

0xc19e,	// (0x00046897) list_touch_info_pane

0xc1ad,	// (0x000468a6) list_single_touch_info_pane_ParamLimits

0xc1ad,	// (0x000468a6) list_single_touch_info_pane

0xc1bf,	// (0x000468b8) list_single_touch_info_pane_t1

0xc1cd,	// (0x000468c6) list_single_touch_info_pane_t2

0x0001,

0xfafe,	// (0x0004a1f7) list_single_touch_info_pane_t

0x944f,	// (0x00043b48) bg_popup_heading_pane_cp

0xc1db,	// (0x000468d4) heading_sub_pane_t1

0x9d17,	// (0x00044410) bg_popup_preview_window_pane_cp_ParamLimits

0x9d17,	// (0x00044410) bg_popup_preview_window_pane_cp

0xc196,	// (0x0004688f) heading_preview_pane

0xc19e,	// (0x00046897) list_preview_pane_ParamLimits

0xc19e,	// (0x00046897) list_preview_pane

0xc1e9,	// (0x000468e2) popup_preview_window_g1

0xc1ad,	// (0x000468a6) list_single_preview_pane_ParamLimits

0xc1ad,	// (0x000468a6) list_single_preview_pane

0xc1f1,	// (0x000468ea) list_single_preview_pane_g1

0xc1f9,	// (0x000468f2) list_single_preview_pane_t1

0xc1bf,	// (0x000468b8) list_single_preview_pane_t2

0x0001,

0xfb03,	// (0x0004a1fc) list_single_preview_pane_t

0xc207,	// (0x00046900) bg_popup_heading_pane_cp2_ParamLimits

0xc207,	// (0x00046900) bg_popup_heading_pane_cp2

0xc21d,	// (0x00046916) heading_preview_pane_g1

0xc225,	// (0x0004691e) heading_preview_pane_t1_ParamLimits

0xc225,	// (0x0004691e) heading_preview_pane_t1

0x8011,	// (0x0004270a) soft_indicator_pane_t1_ParamLimits

0x872d,	// (0x00042e26) scroll_pane_ParamLimits

0x8c45,	// (0x0004333e) scroll_sc2_left_pane

0x8c4e,	// (0x00043347) scroll_sc2_right_pane

0x8c6d,	// (0x00043366) scroll_bg_pane_g1_ParamLimits

0x8c82,	// (0x0004337b) scroll_bg_pane_g2_ParamLimits

0x8c9a,	// (0x00043393) scroll_bg_pane_g3_ParamLimits

0xf6e8,	// (0x00049de1) scroll_bg_pane_g_ParamLimits

0x8c6d,	// (0x00043366) scroll_handle_pane_g1_ParamLimits

0x8cbc,	// (0x000433b5) scroll_handle_pane_g2_ParamLimits

0x8c9a,	// (0x00043393) scroll_handle_pane_g3_ParamLimits

0xf6ef,	// (0x00049de8) scroll_handle_pane_g_ParamLimits

0x6368,	// (0x00040a61) popup_choice_list_window_ParamLimits

0x6368,	// (0x00040a61) popup_choice_list_window

0x9bed,	// (0x000442e6) choice_list_pane

0x9c6f,	// (0x00044368) cell_toolbar_pane_t1

0x9c97,	// (0x00044390) toolbar_button_pane_ParamLimits

0xad6c,	// (0x00045465) ai_gene_pane_1_t2_ParamLimits

0xad6c,	// (0x00045465) ai_gene_pane_1_t2

0x0001,

0xf917,	// (0x0004a010) ai_gene_pane_1_t_ParamLimits

0xf917,	// (0x0004a010) ai_gene_pane_1_t

0xc242,	// (0x0004693b) scroll_sc2_left_pane_g1

0xc242,	// (0x0004693b) scroll_sc2_right_pane_g1

0x9773,	// (0x00043e6c) bg_popup_sub_pane_cp10

0xc24c,	// (0x00046945) list_choice_list_pane

0xc265,	// (0x0004695e) list_single_choice_list_pane_ParamLimits

0xc265,	// (0x0004695e) list_single_choice_list_pane

0xc278,	// (0x00046971) list_single_choice_list_pane_g1

0x894b,	// (0x00043044) list_single_choice_list_pane_t1_ParamLimits

0x894b,	// (0x00043044) list_single_choice_list_pane_t1

0xc280,	// (0x00046979) choice_list_pane_g1

0xc288,	// (0x00046981) choice_list_pane_t1

0x7e31,	// (0x0004252a) input_focus_pane_cp11

0x8b22,	// (0x0004321b) title_pane_stacon_g2_ParamLimits

0x8b22,	// (0x0004321b) title_pane_stacon_g2

0x0002,

0xf6ce,	// (0x00049dc7) title_pane_stacon_g_ParamLimits

0xf6ce,	// (0x00049dc7) title_pane_stacon_g

0x944f,	// (0x00043b48) cursor_press_pane

0x6414,	// (0x00040b0d) popup_fep_hwr_window_ParamLimits

0x6414,	// (0x00040b0d) popup_fep_hwr_window

0x648e,	// (0x00040b87) popup_fep_vkb_window_ParamLimits

0x648e,	// (0x00040b87) popup_fep_vkb_window

0xc296,	// (0x0004698f) cursor_press_pane_g1

0x0002,

0xfb2c,	// (0x0004a225) fep_vkb_side_pane_g_ParamLimits

0x6e91,	// (0x0004158a) fep_hwr_candidate_pane_ParamLimits

0x6e91,	// (0x0004158a) fep_hwr_candidate_pane

0x6ebb,	// (0x000415b4) fep_hwr_side_pane_ParamLimits

0x6ebb,	// (0x000415b4) fep_hwr_side_pane

0x6edb,	// (0x000415d4) fep_hwr_top_pane_ParamLimits

0x6edb,	// (0x000415d4) fep_hwr_top_pane

0x6ef3,	// (0x000415ec) fep_hwr_write_pane_ParamLimits

0x6ef3,	// (0x000415ec) fep_hwr_write_pane

0xfb2c,	// (0x0004a225) fep_vkb_side_pane_g

0xc29e,	// (0x00046997) fep_hwr_top_pane_g1

0xc2b0,	// (0x000469a9) fep_hwr_top_pane_g2

0x6f1f,	// (0x00041618) fep_hwr_top_pane_g3

0x0002,

0xfb08,	// (0x0004a201) fep_hwr_top_pane_g

0x6f34,	// (0x0004162d) fep_hwr_top_text_pane

0x8e3c,	// (0x00043535) fep_hwr_top_text_pane_g1

0xc2e6,	// (0x000469df) fep_hwr_top_text_pane_t1

0x702a,	// (0x00041723) fep_hwr_candidate_pane_g1

0xc539,	// (0x00046c32) fep_vkb_keypad_pane_g3_ParamLimits

0xc539,	// (0x00046c32) fep_vkb_keypad_pane_g3

0xc561,	// (0x00046c5a) fep_vkb_keypad_pane_g4_ParamLimits

0xc561,	// (0x00046c5a) fep_vkb_keypad_pane_g4

0xc5d0,	// (0x00046cc9) fep_vkb_bottom_pane_g2_ParamLimits

0xc5d0,	// (0x00046cc9) fep_vkb_bottom_pane_g2

0x0001,

0xfb33,	// (0x0004a22c) fep_vkb_bottom_pane_g_ParamLimits

0xfb33,	// (0x0004a22c) fep_vkb_bottom_pane_g

0xc242,	// (0x0004693b) cell_vkb_side_pane_g2

0x0001,

0xfb3d,	// (0x0004a236) cell_vkb_side_pane_g

0xc65b,	// (0x00046d54) cell_vkb_side_pane_t1

0xc669,	// (0x00046d62) cell_vkb_side_pane_t1_copy1

0xc242,	// (0x0004693b) bg_fep_vkb_candidate_pane_g2

0xc7a1,	// (0x00046e9a) cell_vkb_candidate_pane_ParamLimits

0xc2f4,	// (0x000469ed) aid_size_cell_vkb_ParamLimits

0xc2f4,	// (0x000469ed) aid_size_cell_vkb

0xc7a1,	// (0x00046e9a) cell_vkb_candidate_pane

0x7044,	// (0x0004173d) bg_popup_fep_shadow_pane_g1

0xc382,	// (0x00046a7b) fep_vkb_bottom_pane_ParamLimits

0xc382,	// (0x00046a7b) fep_vkb_bottom_pane

0xc3b8,	// (0x00046ab1) fep_vkb_candidate_pane_ParamLimits

0xc3b8,	// (0x00046ab1) fep_vkb_candidate_pane

0xc3d4,	// (0x00046acd) fep_vkb_keypad_pane_ParamLimits

0xc3d4,	// (0x00046acd) fep_vkb_keypad_pane

0xc41a,	// (0x00046b13) fep_vkb_side_pane_ParamLimits

0xc41a,	// (0x00046b13) fep_vkb_side_pane

0xc456,	// (0x00046b4f) fep_vkb_top_pane_ParamLimits

0xc456,	// (0x00046b4f) fep_vkb_top_pane

0xc492,	// (0x00046b8b) fep_vkb_top_pane_g1_ParamLimits

0xc492,	// (0x00046b8b) fep_vkb_top_pane_g1

0xc4a1,	// (0x00046b9a) fep_vkb_top_pane_g2_ParamLimits

0xc4a1,	// (0x00046b9a) fep_vkb_top_pane_g2

0xc4b0,	// (0x00046ba9) fep_vkb_top_pane_g3_ParamLimits

0xc4b0,	// (0x00046ba9) fep_vkb_top_pane_g3

0x0003,

0xfb23,	// (0x0004a21c) fep_vkb_top_pane_g_ParamLimits

0xfb23,	// (0x0004a21c) fep_vkb_top_pane_g

0xc4ce,	// (0x00046bc7) fep_vkb_top_text_pane_ParamLimits

0xc4ce,	// (0x00046bc7) fep_vkb_top_text_pane

0xc4df,	// (0x00046bd8) fep_vkb_side_pane_g1_ParamLimits

0xc4df,	// (0x00046bd8) fep_vkb_side_pane_g1

0xc528,	// (0x00046c21) grid_vkb_side_pane_ParamLimits

0xc528,	// (0x00046c21) grid_vkb_side_pane

0x704c,	// (0x00041745) bg_popup_fep_shadow_pane_g2

0x7055,	// (0x0004174e) bg_popup_fep_shadow_pane_g3

0x705d,	// (0x00041756) bg_popup_fep_shadow_pane_g4

0x7066,	// (0x0004175f) bg_popup_fep_shadow_pane_g5

0x7070,	// (0x00041769) bg_popup_fep_shadow_pane_g6

0x7078,	// (0x00041771) bg_popup_fep_shadow_pane_g7

0x8832,	// (0x00042f2b) bg_popup_fep_shadow_pane_g8

0xc57f,	// (0x00046c78) grid_vkb_keypad_number_pane_ParamLimits

0xc57f,	// (0x00046c78) grid_vkb_keypad_number_pane

0xc58f,	// (0x00046c88) grid_vkb_keypad_pane_ParamLimits

0xc58f,	// (0x00046c88) grid_vkb_keypad_pane

0xc5b5,	// (0x00046cae) fep_vkb_bottom_pane_g1_ParamLimits

0xc5b5,	// (0x00046cae) fep_vkb_bottom_pane_g1

0xc5de,	// (0x00046cd7) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc5de,	// (0x00046cd7) grid_vkb_keypad_bottom_left_pane

0xc5f3,	// (0x00046cec) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc5f3,	// (0x00046cec) grid_vkb_keypad_bottom_right_pane

0xc608,	// (0x00046d01) fep_vkb_top_text_pane_g1

0xc623,	// (0x00046d1c) fep_vkb_top_text_pane_t1

0xc638,	// (0x00046d31) cell_vkb_side_pane_ParamLimits

0xc638,	// (0x00046d31) cell_vkb_side_pane

0xc242,	// (0x0004693b) cell_vkb_side_pane_g1

0xc677,	// (0x00046d70) cell_vkb_keypad_pane_ParamLimits

0xc677,	// (0x00046d70) cell_vkb_keypad_pane

0xc6ec,	// (0x00046de5) cell_vkb_keypad_pane_g1

0x0008,

0xfb50,	// (0x0004a249) bg_popup_fep_shadow_pane_g

0xc242,	// (0x0004693b) cell_hwr_side_pane_g1

0xc242,	// (0x0004693b) cell_hwr_side_pane_g2

0xc6f6,	// (0x00046def) cell_vkb_keypad_pane_t1

0xc704,	// (0x00046dfd) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc704,	// (0x00046dfd) cell_vkb_keypad_bottom_left_pane

0xc721,	// (0x00046e1a) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc721,	// (0x00046e1a) cell_vkb_keypad_bottom_right_pane

0xc242,	// (0x0004693b) cell_vkb_keypad_bottom_left_pane_g1

0xc242,	// (0x0004693b) cell_vkb_keypad_bottom_right_pane_g1

0xc75a,	// (0x00046e53) cell_vkb_keypad_number_pane_ParamLimits

0xc75a,	// (0x00046e53) cell_vkb_keypad_number_pane

0xc785,	// (0x00046e7e) cell_vkb_keypad_number_pane_g1

0xc78f,	// (0x00046e88) cell_vkb_keypad_number_pane_g2

0xc798,	// (0x00046e91) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb42,	// (0x0004a23b) cell_vkb_keypad_number_pane_g

0xc6f6,	// (0x00046def) cell_vkb_keypad_number_pane_t1

0xc7bc,	// (0x00046eb5) fep_vkb_candidate_pane_g1

0x0001,

0xfb3d,	// (0x0004a236) cell_hwr_side_pane_g

0xc7d5,	// (0x00046ece) cell_hwr_side_pane_t1

0x708a,	// (0x00041783) cell_hwr_side_pane_t1_copy1

0xc4c0,	// (0x00046bb9) cell_hwr_candidate_pane_g1

0x7098,	// (0x00041791) cell_hwr_candidate_pane_t1

0xc242,	// (0x0004693b) cell_vkb_candidate_pane_g2

0xc85b,	// (0x00046f54) cell_vkb_candidate_pane_t1

0x6e58,	// (0x00041551) bg_popup_fep_shadow_pane_ParamLimits

0x6e58,	// (0x00041551) bg_popup_fep_shadow_pane

0x2ccc,	// (0x0003d3c5) bg_fep_hwr_top_pane_g4

0xc2c2,	// (0x000469bb) bg_hwr_side_pane_g1_ParamLimits

0xc2c2,	// (0x000469bb) bg_hwr_side_pane_g1

0x6f70,	// (0x00041669) cell_hwr_side_pane_ParamLimits

0x6f70,	// (0x00041669) cell_hwr_side_pane

0x6fab,	// (0x000416a4) fep_hwr_write_pane_g1_ParamLimits

0x6fab,	// (0x000416a4) fep_hwr_write_pane_g1

0x6fb8,	// (0x000416b1) fep_hwr_write_pane_g2_ParamLimits

0x6fb8,	// (0x000416b1) fep_hwr_write_pane_g2

0x6fc5,	// (0x000416be) fep_hwr_write_pane_g3_ParamLimits

0x6fc5,	// (0x000416be) fep_hwr_write_pane_g3

0x6fd3,	// (0x000416cc) fep_hwr_write_pane_g4_ParamLimits

0x6fd3,	// (0x000416cc) fep_hwr_write_pane_g4

0x0005,

0xfb0f,	// (0x0004a208) fep_hwr_write_pane_g_ParamLimits

0xfb0f,	// (0x0004a208) fep_hwr_write_pane_g

0x2ccc,	// (0x0003d3c5) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x2ccc,	// (0x0003d3c5) bg_fep_hwr_candidate_pane_g2

0x6fe8,	// (0x000416e1) cell_hwr_candidate_pane_ParamLimits

0x6fe8,	// (0x000416e1) cell_hwr_candidate_pane

0x702a,	// (0x00041723) fep_hwr_candidate_pane_g1_ParamLimits

0xc322,	// (0x00046a1b) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc322,	// (0x00046a1b) bg_popup_fep_shadow_pane_cp2

0xc4c0,	// (0x00046bb9) fep_vkb_top_pane_g4_ParamLimits

0xc4c0,	// (0x00046bb9) fep_vkb_top_pane_g4

0xc506,	// (0x00046bff) fep_vkb_side_pane_g2_ParamLimits

0xc506,	// (0x00046bff) fep_vkb_side_pane_g2

0x4c00,	// (0x0003f2f9) list_setting_pane_t4_ParamLimits

0x4c00,	// (0x0003f2f9) list_setting_pane_t4

0x4c9a,	// (0x0003f393) list_setting_number_pane_t5_ParamLimits

0x4c9a,	// (0x0003f393) list_setting_number_pane_t5

0x8e83,	// (0x0004357c) list_double_heading_pane_cp2_ParamLimits

0x8e83,	// (0x0004357c) list_double_heading_pane_cp2

0x8761,	// (0x00042e5a) list_double_heading_pane_g1_cp2_ParamLimits

0x8761,	// (0x00042e5a) list_double_heading_pane_g1_cp2

0x87d4,	// (0x00042ecd) list_double_heading_pane_g2_cp2_ParamLimits

0x87d4,	// (0x00042ecd) list_double_heading_pane_g2_cp2

0xc869,	// (0x00046f62) list_double_heading_pane_t1_cp2_ParamLimits

0xc869,	// (0x00046f62) list_double_heading_pane_t1_cp2

0xc87f,	// (0x00046f78) list_double_heading_pane_t2_cp2_ParamLimits

0xc87f,	// (0x00046f78) list_double_heading_pane_t2_cp2

0x7e19,	// (0x00042512) aid_value_unit2

0x5ace,	// (0x000401c7) popup_preview_fixed_window

0x81ae,	// (0x000428a7) bg_popup_preview_window_pane_cp02

0xc891,	// (0x00046f8a) list_preview_fixed_pane

0xc8d7,	// (0x00046fd0) list_empty_pane_fp_ParamLimits

0xc8d7,	// (0x00046fd0) list_empty_pane_fp

0xc8d7,	// (0x00046fd0) list_single_cale_day_pane_fp_ParamLimits

0xc8d7,	// (0x00046fd0) list_single_cale_day_pane_fp

0xc8d7,	// (0x00046fd0) list_single_graphic_heading_pane_fp_ParamLimits

0xc8d7,	// (0x00046fd0) list_single_graphic_heading_pane_fp

0xc8d7,	// (0x00046fd0) list_single_graphic_pane_fp_ParamLimits

0xc8d7,	// (0x00046fd0) list_single_graphic_pane_fp

0xc8d7,	// (0x00046fd0) list_single_heading_pane_fp_ParamLimits

0xc8d7,	// (0x00046fd0) list_single_heading_pane_fp

0xc8d7,	// (0x00046fd0) list_single_pane_fp_ParamLimits

0xc8d7,	// (0x00046fd0) list_single_pane_fp

0xc8ec,	// (0x00046fe5) list_single_pane_fp_g1_ParamLimits

0xc8ec,	// (0x00046fe5) list_single_pane_fp_g1

0x8761,	// (0x00042e5a) list_single_pane_fp_g2_ParamLimits

0x8761,	// (0x00042e5a) list_single_pane_fp_g2

0x87d4,	// (0x00042ecd) list_single_pane_fp_g3_ParamLimits

0x87d4,	// (0x00042ecd) list_single_pane_fp_g3

0xc8f8,	// (0x00046ff1) list_single_pane_fp_g4_ParamLimits

0xc8f8,	// (0x00046ff1) list_single_pane_fp_g4

0x0003,

0xfb71,	// (0x0004a26a) list_single_pane_fp_g_ParamLimits

0xfb71,	// (0x0004a26a) list_single_pane_fp_g

0x5561,	// (0x0003fc5a) list_single_pane_fp_t1_ParamLimits

0x5561,	// (0x0003fc5a) list_single_pane_fp_t1

0x5578,	// (0x0003fc71) list_single_graphic_pane_fp_g1_ParamLimits

0x5578,	// (0x0003fc71) list_single_graphic_pane_fp_g1

0xc8ec,	// (0x00046fe5) list_single_graphic_pane_fp_g2_ParamLimits

0xc8ec,	// (0x00046fe5) list_single_graphic_pane_fp_g2

0x8761,	// (0x00042e5a) list_single_graphic_pane_fp_g3_ParamLimits

0x8761,	// (0x00042e5a) list_single_graphic_pane_fp_g3

0x87d4,	// (0x00042ecd) list_single_graphic_pane_fp_g4_ParamLimits

0x87d4,	// (0x00042ecd) list_single_graphic_pane_fp_g4

0xc8f8,	// (0x00046ff1) list_single_graphic_pane_fp_g5_ParamLimits

0xc8f8,	// (0x00046ff1) list_single_graphic_pane_fp_g5

0x0004,

0xfb7a,	// (0x0004a273) list_single_graphic_pane_fp_g_ParamLimits

0xfb7a,	// (0x0004a273) list_single_graphic_pane_fp_g

0x5584,	// (0x0003fc7d) list_single_graphic_pane_fp_t1_ParamLimits

0x5584,	// (0x0003fc7d) list_single_graphic_pane_fp_t1

0x5578,	// (0x0003fc71) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x5578,	// (0x0003fc71) list_single_graphic_heading_pane_fp_g1

0xc8ec,	// (0x00046fe5) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc8ec,	// (0x00046fe5) list_single_graphic_heading_pane_fp_g2

0x8761,	// (0x00042e5a) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x8761,	// (0x00042e5a) list_single_graphic_heading_pane_fp_g3

0x87d4,	// (0x00042ecd) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x87d4,	// (0x00042ecd) list_single_graphic_heading_pane_fp_g4

0xc8f8,	// (0x00046ff1) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc8f8,	// (0x00046ff1) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb7a,	// (0x0004a273) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb7a,	// (0x0004a273) list_single_graphic_heading_pane_fp_g

0x559a,	// (0x0003fc93) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x559a,	// (0x0003fc93) list_single_graphic_heading_pane_fp_t1

0x55b0,	// (0x0003fca9) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x55b0,	// (0x0003fca9) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb85,	// (0x0004a27e) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb85,	// (0x0004a27e) list_single_graphic_heading_pane_fp_t

0x55c2,	// (0x0003fcbb) list_single_cale_day_pane_fp_g1_ParamLimits

0x55c2,	// (0x0003fcbb) list_single_cale_day_pane_fp_g1

0xc904,	// (0x00046ffd) list_single_cale_day_pane_fp_g2_ParamLimits

0xc904,	// (0x00046ffd) list_single_cale_day_pane_fp_g2

0x70b6,	// (0x000417af) list_single_cale_day_pane_fp_g3_ParamLimits

0x70b6,	// (0x000417af) list_single_cale_day_pane_fp_g3

0x70de,	// (0x000417d7) list_single_cale_day_pane_fp_g4_ParamLimits

0x70de,	// (0x000417d7) list_single_cale_day_pane_fp_g4

0x7102,	// (0x000417fb) list_single_cale_day_pane_fp_g5_ParamLimits

0x7102,	// (0x000417fb) list_single_cale_day_pane_fp_g5

0x0004,

0xfb8a,	// (0x0004a283) list_single_cale_day_pane_fp_g_ParamLimits

0xfb8a,	// (0x0004a283) list_single_cale_day_pane_fp_g

0x55fa,	// (0x0003fcf3) list_single_cale_day_pane_fp_t1_ParamLimits

0x55fa,	// (0x0003fcf3) list_single_cale_day_pane_fp_t1

0x5620,	// (0x0003fd19) list_single_cale_day_pane_fp_t2_ParamLimits

0x5620,	// (0x0003fd19) list_single_cale_day_pane_fp_t2

0x5639,	// (0x0003fd32) list_single_cale_day_pane_fp_t3_ParamLimits

0x5639,	// (0x0003fd32) list_single_cale_day_pane_fp_t3

0x0002,

0xfb95,	// (0x0004a28e) list_single_cale_day_pane_fp_t_ParamLimits

0xfb95,	// (0x0004a28e) list_single_cale_day_pane_fp_t

0xc8ec,	// (0x00046fe5) list_empty_pane_fp_g1_ParamLimits

0xc8ec,	// (0x00046fe5) list_empty_pane_fp_g1

0x5652,	// (0x0003fd4b) list_empty_pane_fp_t1

0x5660,	// (0x0003fd59) list_empty_pane_fp_t2

0x0001,

0xfb9c,	// (0x0004a295) list_empty_pane_fp_t

0xc8ec,	// (0x00046fe5) list_single_heading_pane_fp_g1_ParamLimits

0xc8ec,	// (0x00046fe5) list_single_heading_pane_fp_g1

0x8761,	// (0x00042e5a) list_single_heading_pane_fp_g2_ParamLimits

0x8761,	// (0x00042e5a) list_single_heading_pane_fp_g2

0x87d4,	// (0x00042ecd) list_single_heading_pane_fp_g3_ParamLimits

0x87d4,	// (0x00042ecd) list_single_heading_pane_fp_g3

0x0002,

0xfba1,	// (0x0004a29a) list_single_heading_pane_fp_g_ParamLimits

0xfba1,	// (0x0004a29a) list_single_heading_pane_fp_g

0x566e,	// (0x0003fd67) list_single_heading_pane_fp_t1_ParamLimits

0x566e,	// (0x0003fd67) list_single_heading_pane_fp_t1

0x5680,	// (0x0003fd79) list_single_heading_pane_fp_t2_ParamLimits

0x5680,	// (0x0003fd79) list_single_heading_pane_fp_t2

0x0001,

0xfba8,	// (0x0004a2a1) list_single_heading_pane_fp_t_ParamLimits

0xfba8,	// (0x0004a2a1) list_single_heading_pane_fp_t

0x89b9,	// (0x000430b2) aid_size_cell_fast

0x811e,	// (0x00042817) soft_indicator_pane_cp1_t1

0x89f6,	// (0x000430ef) cell_app_pane_cp2_ParamLimits

0x89f6,	// (0x000430ef) cell_app_pane_cp2

0x6e7a,	// (0x00041573) fep_hwr_candidate_drop_down_list_pane

0x2cda,	// (0x0003d3d3) fep_hwr_candidate_pane_g3_ParamLimits

0x2cda,	// (0x0003d3d3) fep_hwr_candidate_pane_g3

0x2ce7,	// (0x0003d3e0) fep_hwr_candidate_pane_g4_ParamLimits

0x2ce7,	// (0x0003d3e0) fep_hwr_candidate_pane_g4

0x0002,

0xfb1c,	// (0x0004a215) fep_hwr_candidate_pane_g_ParamLimits

0xfb1c,	// (0x0004a215) fep_hwr_candidate_pane_g

0xc3a7,	// (0x00046aa0) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc3a7,	// (0x00046aa0) fep_vkb_candidate_drop_down_list_pane

0xc7c4,	// (0x00046ebd) fep_vkb_candidate_pane_g3

0xc7cc,	// (0x00046ec5) fep_vkb_candidate_pane_g4

0x0002,

0xfb49,	// (0x0004a242) fep_vkb_candidate_pane_g

0xc4c0,	// (0x00046bb9) cell_hwr_candidate_pane_g1_ParamLimits

0xc7e3,	// (0x00046edc) cell_hwr_candidate_pane_g3_ParamLimits

0xc7e3,	// (0x00046edc) cell_hwr_candidate_pane_g3

0xc804,	// (0x00046efd) cell_hwr_candidate_pane_g4_ParamLimits

0xc804,	// (0x00046efd) cell_hwr_candidate_pane_g4

0x0002,

0xfb63,	// (0x0004a25c) cell_hwr_candidate_pane_g_ParamLimits

0xfb63,	// (0x0004a25c) cell_hwr_candidate_pane_g

0xc825,	// (0x00046f1e) cell_vkb_candidate_pane_g3_ParamLimits

0xc825,	// (0x00046f1e) cell_vkb_candidate_pane_g3

0xc840,	// (0x00046f39) cell_vkb_candidate_pane_g4_ParamLimits

0xc840,	// (0x00046f39) cell_vkb_candidate_pane_g4

0xc910,	// (0x00047009) cell_app_pane_cp2_g1_ParamLimits

0xc910,	// (0x00047009) cell_app_pane_cp2_g1

0xc92e,	// (0x00047027) cell_app_pane_cp2_g2_ParamLimits

0xc92e,	// (0x00047027) cell_app_pane_cp2_g2

0x0001,

0xfbad,	// (0x0004a2a6) cell_app_pane_cp2_g_ParamLimits

0xfbad,	// (0x0004a2a6) cell_app_pane_cp2_g

0xc93a,	// (0x00047033) cell_app_pane_cp2_t1_ParamLimits

0xc93a,	// (0x00047033) cell_app_pane_cp2_t1

0x87c6,	// (0x00042ebf) grid_highlight_pane_cp1_ParamLimits

0x87c6,	// (0x00042ebf) grid_highlight_pane_cp1

0x7126,	// (0x0004181f) cell_hwr_candidate_pane_cp1_ParamLimits

0x7126,	// (0x0004181f) cell_hwr_candidate_pane_cp1

0xc4c0,	// (0x00046bb9) fep_hwr_candidate_drop_down_list_pane_g1

0xc94c,	// (0x00047045) fep_hwr_candidate_drop_down_list_pane_g2

0xc959,	// (0x00047052) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbb2,	// (0x0004a2ab) fep_hwr_candidate_drop_down_list_pane_g

0x7145,	// (0x0004183e) fep_hwr_candidate_drop_down_list_scroll_pane

0x714e,	// (0x00041847) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x714e,	// (0x00041847) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x715b,	// (0x00041854) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x715b,	// (0x00041854) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x7168,	// (0x00041861) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7168,	// (0x00041861) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xc825,	// (0x00046f1e) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc825,	// (0x00046f1e) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xc840,	// (0x00046f39) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc840,	// (0x00046f39) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x7175,	// (0x0004186e) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7175,	// (0x0004186e) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x7190,	// (0x00041889) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7190,	// (0x00041889) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x71ab,	// (0x000418a4) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x71ab,	// (0x000418a4) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbb9,	// (0x0004a2b2) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbb9,	// (0x0004a2b2) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc966,	// (0x0004705f) cell_vkb_candidate_pane_cp1_ParamLimits

0xc966,	// (0x0004705f) cell_vkb_candidate_pane_cp1

0xc4c0,	// (0x00046bb9) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc4c0,	// (0x00046bb9) fep_vkb_candidate_drop_down_list_pane_g1

0xc94c,	// (0x00047045) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc94c,	// (0x00047045) fep_vkb_candidate_drop_down_list_pane_g2

0xc959,	// (0x00047052) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc959,	// (0x00047052) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbb2,	// (0x0004a2ab) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbb2,	// (0x0004a2ab) fep_vkb_candidate_drop_down_list_pane_g

0xc986,	// (0x0004707f) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc986,	// (0x0004707f) fep_vkb_candidate_drop_down_list_scroll_pane

0xc993,	// (0x0004708c) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc993,	// (0x0004708c) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc9a0,	// (0x00047099) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc9a0,	// (0x00047099) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc9ac,	// (0x000470a5) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc9ac,	// (0x000470a5) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc7e3,	// (0x00046edc) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc7e3,	// (0x00046edc) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc804,	// (0x00046efd) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc804,	// (0x00046efd) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc9b8,	// (0x000470b1) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc9b8,	// (0x000470b1) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc9d9,	// (0x000470d2) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc9d9,	// (0x000470d2) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc9fa,	// (0x000470f3) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc9fa,	// (0x000470f3) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbca,	// (0x0004a2c3) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbca,	// (0x0004a2c3) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x7e4f,	// (0x00042548) title_pane_g1_ParamLimits

0x7e5c,	// (0x00042555) title_pane_g2_ParamLimits

0xf54e,	// (0x00049c47) title_pane_g_ParamLimits

0x8e2c,	// (0x00043525) aid_call2_pane

0x8e34,	// (0x0004352d) aid_call_pane

0x8e3c,	// (0x00043535) popup_clock_analogue_window_g1

0x8e3c,	// (0x00043535) popup_clock_analogue_window_g2

0x5eeb,	// (0x000405e4) popup_clock_analogue_window_g3

0x5ef4,	// (0x000405ed) popup_clock_analogue_window_g4

0x7e3b,	// (0x00042534) popup_clock_analogue_window_g5

0x0004,

0xf6fd,	// (0x00049df6) popup_clock_analogue_window_g

0x5efc,	// (0x000405f5) popup_clock_analogue_window_t1

0x5f0a,	// (0x00040603) clock_digital_number_pane_ParamLimits

0x5f0a,	// (0x00040603) clock_digital_number_pane

0x5f16,	// (0x0004060f) clock_digital_number_pane_cp02_ParamLimits

0x5f16,	// (0x0004060f) clock_digital_number_pane_cp02

0x5f22,	// (0x0004061b) clock_digital_number_pane_cp03_ParamLimits

0x5f22,	// (0x0004061b) clock_digital_number_pane_cp03

0x5f2e,	// (0x00040627) clock_digital_number_pane_cp04_ParamLimits

0x5f2e,	// (0x00040627) clock_digital_number_pane_cp04

0x5f3a,	// (0x00040633) clock_digital_separator_pane_ParamLimits

0x5f3a,	// (0x00040633) clock_digital_separator_pane

0x5f46,	// (0x0004063f) popup_clock_digital_window_t1_ParamLimits

0x5f46,	// (0x0004063f) popup_clock_digital_window_t1

0x7e3b,	// (0x00042534) clock_digital_number_pane_g1

0x7e3b,	// (0x00042534) clock_digital_number_pane_g2

0x0001,

0xf708,	// (0x00049e01) clock_digital_number_pane_g

0x7e3b,	// (0x00042534) clock_digital_separator_pane_g1

0x7e3b,	// (0x00042534) clock_digital_separator_pane_g2

0x0001,

0xf708,	// (0x00049e01) clock_digital_separator_pane_g

0x97af,	// (0x00043ea8) aid_fill_nsta_ParamLimits

0x98f5,	// (0x00043fee) indicator_nsta_pane_ParamLimits

0x9a7a,	// (0x00044173) popup_clock_analogue_window

0x9a7a,	// (0x00044173) popup_clock_digital_window

0x7f25,	// (0x0004261e) grid_indicator_nsta_pane_ParamLimits

0xbc5a,	// (0x00046353) clock_nsta_pane_t2

0x0001,

0xfa9c,	// (0x0004a195) clock_nsta_pane_t

0x5eaf,	// (0x000405a8) aid_size_max_handle

0x5eb9,	// (0x000405b2) aid_size_min_handle

0x944f,	// (0x00043b48) editor_scroll_pane

0xca15,	// (0x0004710e) ex_editor_pane

0x8927,	// (0x00043020) scroll_pane_cp13

0x8759,	// (0x00042e52) scroll_pane_cp14

0x8e6b,	// (0x00043564) scroll_pane_cp36

0x8e97,	// (0x00043590) list_single_graphic_hl_pane_cp2_ParamLimits

0x8e97,	// (0x00043590) list_single_graphic_hl_pane_cp2

0x51b2,	// (0x0003f8ab) list_single_graphic_hl_pane_ParamLimits

0x51b2,	// (0x0003f8ab) list_single_graphic_hl_pane

0x5696,	// (0x0003fd8f) aid_size_min_hl_cp1

0xca1d,	// (0x00047116) list_highlight_pane_cp34_ParamLimits

0xca1d,	// (0x00047116) list_highlight_pane_cp34

0xca2e,	// (0x00047127) list_single_graphic_hl_pane_g1_ParamLimits

0xca2e,	// (0x00047127) list_single_graphic_hl_pane_g1

0x569f,	// (0x0003fd98) list_single_graphic_hl_pane_g2_ParamLimits

0x569f,	// (0x0003fd98) list_single_graphic_hl_pane_g2

0x569f,	// (0x0003fd98) list_single_graphic_hl_pane_g3_ParamLimits

0x569f,	// (0x0003fd98) list_single_graphic_hl_pane_g3

0x93c0,	// (0x00043ab9) list_single_graphic_hl_pane_g4_ParamLimits

0x93c0,	// (0x00043ab9) list_single_graphic_hl_pane_g4

0x71c6,	// (0x000418bf) list_single_graphic_hl_pane_g5_ParamLimits

0x71c6,	// (0x000418bf) list_single_graphic_hl_pane_g5

0x0004,

0xfbdb,	// (0x0004a2d4) list_single_graphic_hl_pane_g_ParamLimits

0xfbdb,	// (0x0004a2d4) list_single_graphic_hl_pane_g

0x56ab,	// (0x0003fda4) list_single_graphic_hl_pane_t1_ParamLimits

0x56ab,	// (0x0003fda4) list_single_graphic_hl_pane_t1

0xca3b,	// (0x00047134) aid_size_min_hl_cp2

0xca44,	// (0x0004713d) list_highlight_pane_cp34_cp2_ParamLimits

0xca44,	// (0x0004713d) list_highlight_pane_cp34_cp2

0xca2e,	// (0x00047127) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xca2e,	// (0x00047127) list_single_graphic_hl_pane_g1_cp2

0xca51,	// (0x0004714a) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xca51,	// (0x0004714a) list_single_graphic_hl_pane_g2_cp2

0xca5d,	// (0x00047156) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xca5d,	// (0x00047156) list_single_graphic_hl_pane_g3_cp2

0xc779,	// (0x00046e72) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xc779,	// (0x00046e72) list_single_graphic_hl_pane_g4_cp2

0xca6b,	// (0x00047164) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xca6b,	// (0x00047164) list_single_graphic_hl_pane_g5_cp2

0x6216,	// (0x0004090f) control_pane_g4_ParamLimits

0x6216,	// (0x0004090f) control_pane_g4

0x9773,	// (0x00043e6c) bg_popup_sub_pane_cp10_ParamLimits

0xc24c,	// (0x00046945) list_choice_list_pane_ParamLimits

0xc25b,	// (0x00046954) scroll_pane_cp23

0x81ae,	// (0x000428a7) bg_popup_preview_window_pane_cp02_ParamLimits

0xc891,	// (0x00046f8a) list_preview_fixed_pane_ParamLimits

0xc8a7,	// (0x00046fa0) list_preview_fixed_pane_cp_ParamLimits

0xc8a7,	// (0x00046fa0) list_preview_fixed_pane_cp

0xc8b3,	// (0x00046fac) popup_preview_fixed_window_g1_ParamLimits

0xc8b3,	// (0x00046fac) popup_preview_fixed_window_g1

0xc8bf,	// (0x00046fb8) popup_preview_fixed_window_g2_ParamLimits

0xc8bf,	// (0x00046fb8) popup_preview_fixed_window_g2

0x0002,

0xfb6a,	// (0x0004a263) popup_preview_fixed_window_g_ParamLimits

0xfb6a,	// (0x0004a263) popup_preview_fixed_window_g

0x5e23,	// (0x0004051c) aid_navi_side_left_pane_ParamLimits

0x5e38,	// (0x00040531) aid_navi_side_right_pane_ParamLimits

0x5e50,	// (0x00040549) navi_icon_pane_stacon_ParamLimits

0x5e64,	// (0x0004055d) navi_navi_pane_stacon_ParamLimits

0x5e50,	// (0x00040549) navi_text_pane_stacon_ParamLimits

0x7e31,	// (0x0004252a) main_text_info_pane

0xca95,	// (0x0004718e) listscroll_text_info_pane

0xca9d,	// (0x00047196) list_text_info_pane_ParamLimits

0xca9d,	// (0x00047196) list_text_info_pane

0xcaac,	// (0x000471a5) scroll_pane_cp24_ParamLimits

0xcaac,	// (0x000471a5) scroll_pane_cp24

0xcaca,	// (0x000471c3) list_text_info_pane_t1_ParamLimits

0xcaca,	// (0x000471c3) list_text_info_pane_t1

0x6386,	// (0x00040a7f) popup_fast_swap2_window_ParamLimits

0x6386,	// (0x00040a7f) popup_fast_swap2_window

0xcafb,	// (0x000471f4) aid_size_cell_fast2

0x7e31,	// (0x0004252a) bg_popup_window_pane_cp17

0xa103,	// (0x000447fc) heading_pane_cp2

0x8423,	// (0x00042b1c) listscroll_fast2_pane

0xcb05,	// (0x000471fe) grid_fast2_pane

0xcb0f,	// (0x00047208) listscroll_fast2_pane_g1

0xcb17,	// (0x00047210) listscroll_fast2_pane_g2

0x0001,

0xfbe6,	// (0x0004a2df) listscroll_fast2_pane_g

0x8927,	// (0x00043020) scroll_pane_cp26

0xcb21,	// (0x0004721a) cell_fast2_pane_ParamLimits

0xcb21,	// (0x0004721a) cell_fast2_pane

0xcb36,	// (0x0004722f) cell_fast2_pane_g1

0xcb3f,	// (0x00047238) cell_fast2_pane_g2

0xcb48,	// (0x00047241) cell_fast2_pane_g3

0x0002,

0xfbeb,	// (0x0004a2e4) cell_fast2_pane_g

0x8516,	// (0x00042c0f) grid_highlight_pane_cp9

0x852b,	// (0x00042c24) main_eswt_pane_ParamLimits

0x852b,	// (0x00042c24) main_eswt_pane

0xcac1,	// (0x000471ba) list_single_text_info_pane

0xcb50,	// (0x00047249) eswt_ctrl_button_pane

0xcb50,	// (0x00047249) eswt_ctrl_canvas_pane

0xcb58,	// (0x00047251) eswt_ctrl_combo_pane

0xcb50,	// (0x00047249) eswt_ctrl_default_pane

0xcb50,	// (0x00047249) eswt_ctrl_label_pane

0xcb60,	// (0x00047259) eswt_ctrl_wait_pane

0xcb68,	// (0x00047261) eswt_shell_pane

0x7e31,	// (0x0004252a) listscroll_eswt_app_pane

0xcb88,	// (0x00047281) popup_eswt_tasktip_window_ParamLimits

0xcb88,	// (0x00047281) popup_eswt_tasktip_window

0x9d17,	// (0x00044410) bg_popup_window_pane_cp18

0xcb99,	// (0x00047292) eswt_control_pane_g1_ParamLimits

0xcb99,	// (0x00047292) eswt_control_pane_g1

0xcba6,	// (0x0004729f) eswt_control_pane_g2_ParamLimits

0xcba6,	// (0x0004729f) eswt_control_pane_g2

0xcbb3,	// (0x000472ac) eswt_control_pane_g3_ParamLimits

0xcbb3,	// (0x000472ac) eswt_control_pane_g3

0xcbc0,	// (0x000472b9) eswt_control_pane_g4_ParamLimits

0xcbc0,	// (0x000472b9) eswt_control_pane_g4

0x0003,

0xfbf2,	// (0x0004a2eb) eswt_control_pane_g_ParamLimits

0xfbf2,	// (0x0004a2eb) eswt_control_pane_g

0x87c6,	// (0x00042ebf) bg_button_pane_ParamLimits

0x87c6,	// (0x00042ebf) bg_button_pane

0x852b,	// (0x00042c24) common_borders_pane_copy2_ParamLimits

0x852b,	// (0x00042c24) common_borders_pane_copy2

0xcbcd,	// (0x000472c6) control_button_pane_g1_ParamLimits

0xcbcd,	// (0x000472c6) control_button_pane_g1

0xcbd9,	// (0x000472d2) control_button_pane_g2_ParamLimits

0xcbd9,	// (0x000472d2) control_button_pane_g2

0xcbe5,	// (0x000472de) control_button_pane_g3_ParamLimits

0xcbe5,	// (0x000472de) control_button_pane_g3

0x0002,

0xfbfb,	// (0x0004a2f4) control_button_pane_g_ParamLimits

0xfbfb,	// (0x0004a2f4) control_button_pane_g

0xcbf9,	// (0x000472f2) control_button_pane_t1

0xcc07,	// (0x00047300) control_button_pane_t2

0x0001,

0xfc02,	// (0x0004a2fb) control_button_pane_t

0x9ca3,	// (0x0004439c) bg_button_pane_g1

0x9cab,	// (0x000443a4) bg_button_pane_g2

0x9cb3,	// (0x000443ac) bg_button_pane_g3

0x9cbb,	// (0x000443b4) bg_button_pane_g4

0x9cc3,	// (0x000443bc) bg_button_pane_g5

0x9ccb,	// (0x000443c4) bg_button_pane_g6

0x9cd3,	// (0x000443cc) bg_button_pane_g7

0x9cdb,	// (0x000443d4) bg_button_pane_g8

0x9ce3,	// (0x000443dc) bg_button_pane_g9

0x0008,

0xf86b,	// (0x00049f64) bg_button_pane_g

0xc207,	// (0x00046900) common_borders_pane_ParamLimits

0xc207,	// (0x00046900) common_borders_pane

0xcb99,	// (0x00047292) eswt_control_pane_g1_copy1_ParamLimits

0xcb99,	// (0x00047292) eswt_control_pane_g1_copy1

0xcba6,	// (0x0004729f) eswt_control_pane_g2_copy1_ParamLimits

0xcba6,	// (0x0004729f) eswt_control_pane_g2_copy1

0xcbb3,	// (0x000472ac) eswt_control_pane_g3_copy1_ParamLimits

0xcbb3,	// (0x000472ac) eswt_control_pane_g3_copy1

0xcbc0,	// (0x000472b9) eswt_control_pane_g4_copy1_ParamLimits

0xcbc0,	// (0x000472b9) eswt_control_pane_g4_copy1

0xc242,	// (0x0004693b) bg_eswt_ctrl_canvas_pane_g1

0xc207,	// (0x00046900) common_borders_pane_cp2_ParamLimits

0xc207,	// (0x00046900) common_borders_pane_cp2

0xc207,	// (0x00046900) common_borders_pane_cp3_ParamLimits

0xc207,	// (0x00046900) common_borders_pane_cp3

0xcc15,	// (0x0004730e) separator_horizontal_pane

0xcc1d,	// (0x00047316) separator_vertical_pane

0xcb99,	// (0x00047292) eswt_control_pane_g1_copy2_ParamLimits

0xcb99,	// (0x00047292) eswt_control_pane_g1_copy2

0xcba6,	// (0x0004729f) eswt_control_pane_g2_copy2_ParamLimits

0xcba6,	// (0x0004729f) eswt_control_pane_g2_copy2

0xcbb3,	// (0x000472ac) eswt_control_pane_g3_copy2_ParamLimits

0xcbb3,	// (0x000472ac) eswt_control_pane_g3_copy2

0xcbc0,	// (0x000472b9) eswt_control_pane_g4_copy2_ParamLimits

0xcbc0,	// (0x000472b9) eswt_control_pane_g4_copy2

0x7e31,	// (0x0004252a) common_borders_pane_cp4

0xcc26,	// (0x0004731f) separator_horizontal_pane_g1

0xcc2f,	// (0x00047328) separator_horizontal_pane_g2

0xcc38,	// (0x00047331) separator_horizontal_pane_g3

0x0002,

0xfc07,	// (0x0004a300) separator_horizontal_pane_g

0xcb99,	// (0x00047292) eswt_control_pane_g1_copy3_ParamLimits

0xcb99,	// (0x00047292) eswt_control_pane_g1_copy3

0xcba6,	// (0x0004729f) eswt_control_pane_g2_copy3_ParamLimits

0xcba6,	// (0x0004729f) eswt_control_pane_g2_copy3

0xcbb3,	// (0x000472ac) eswt_control_pane_g3_copy3_ParamLimits

0xcbb3,	// (0x000472ac) eswt_control_pane_g3_copy3

0xcbc0,	// (0x000472b9) eswt_control_pane_g4_copy3_ParamLimits

0xcbc0,	// (0x000472b9) eswt_control_pane_g4_copy3

0x7e31,	// (0x0004252a) common_borders_pane_cp5

0xcc41,	// (0x0004733a) separator_vertical_pane_g1

0xcc4a,	// (0x00047343) separator_vertical_pane_g2

0xcc53,	// (0x0004734c) separator_vertical_pane_g3

0x0002,

0xfc0e,	// (0x0004a307) separator_vertical_pane_g

0xcb99,	// (0x00047292) eswt_control_pane_g1_copy4_ParamLimits

0xcb99,	// (0x00047292) eswt_control_pane_g1_copy4

0xcba6,	// (0x0004729f) eswt_control_pane_g2_copy4_ParamLimits

0xcba6,	// (0x0004729f) eswt_control_pane_g2_copy4

0xcbb3,	// (0x000472ac) eswt_control_pane_g3_copy4_ParamLimits

0xcbb3,	// (0x000472ac) eswt_control_pane_g3_copy4

0xcbc0,	// (0x000472b9) eswt_control_pane_g4_copy4_ParamLimits

0xcbc0,	// (0x000472b9) eswt_control_pane_g4_copy4

0xcc5c,	// (0x00047355) eswt_ctrl_combo_button_pane

0xcc64,	// (0x0004735d) eswt_ctrl_input_pane

0xcc6c,	// (0x00047365) popup_choice_list_window_cp70

0xcc74,	// (0x0004736d) eswt_ctrl_input_pane_t1

0x7e31,	// (0x0004252a) input_focus_pane_cp70

0xc207,	// (0x00046900) bg_button_pane_cp70_ParamLimits

0xc207,	// (0x00046900) bg_button_pane_cp70

0xcc82,	// (0x0004737b) eswt_ctrl_combo_button_pane_g1

0xcc8a,	// (0x00047383) wait_bar_pane_cp70

0x9d17,	// (0x00044410) bg_popup_window_pane_cp70_ParamLimits

0x9d17,	// (0x00044410) bg_popup_window_pane_cp70

0xcc92,	// (0x0004738b) popup_eswt_tasktip_window_t1

0xcca8,	// (0x000473a1) wait_bar_pane_cp71_ParamLimits

0xcca8,	// (0x000473a1) wait_bar_pane_cp71

0xccb4,	// (0x000473ad) grid_eswt_app_pane

0x8c4e,	// (0x00043347) scroll_pane_cp70

0xccbd,	// (0x000473b6) cell_eswt_app_pane_ParamLimits

0xccbd,	// (0x000473b6) cell_eswt_app_pane

0xcced,	// (0x000473e6) cell_eswt_app_pane_g1_ParamLimits

0xcced,	// (0x000473e6) cell_eswt_app_pane_g1

0xcd1c,	// (0x00047415) cell_eswt_app_pane_g2_ParamLimits

0xcd1c,	// (0x00047415) cell_eswt_app_pane_g2

0x0001,

0xfc15,	// (0x0004a30e) cell_eswt_app_pane_g_ParamLimits

0xfc15,	// (0x0004a30e) cell_eswt_app_pane_g

0xcd45,	// (0x0004743e) cell_eswt_app_pane_t1_ParamLimits

0xcd45,	// (0x0004743e) cell_eswt_app_pane_t1

0xcd77,	// (0x00047470) grid_highlight_pane_cp70_ParamLimits

0xcd77,	// (0x00047470) grid_highlight_pane_cp70

0x9324,	// (0x00043a1d) set_content_pane_g1

0x96fa,	// (0x00043df3) status_small_volume_pane

0x71da,	// (0x000418d3) status_small_volume_pane_g1

0x71e2,	// (0x000418db) volume_small2_pane

0x71eb,	// (0x000418e4) volume_small2_pane_g1

0x71f4,	// (0x000418ed) volume_small2_pane_g2

0x71fd,	// (0x000418f6) volume_small2_pane_g3

0x7206,	// (0x000418ff) volume_small2_pane_g4

0x720f,	// (0x00041908) volume_small2_pane_g5

0x7218,	// (0x00041911) volume_small2_pane_g6

0x7221,	// (0x0004191a) volume_small2_pane_g7

0x722a,	// (0x00041923) volume_small2_pane_g8

0x7233,	// (0x0004192c) volume_small2_pane_g9

0x723c,	// (0x00041935) volume_small2_pane_g10

0x0009,

0xfc1a,	// (0x0004a313) volume_small2_pane_g

0xc608,	// (0x00046d01) fep_vkb_top_text_pane_g1_ParamLimits

0xc623,	// (0x00046d1c) fep_vkb_top_text_pane_t1_ParamLimits

0xc8cb,	// (0x00046fc4) popup_preview_fixed_window_g3_ParamLimits

0xc8cb,	// (0x00046fc4) popup_preview_fixed_window_g3

0x6835,	// (0x00040f2e) popup_toolbar_trans_pane

0xb068,	// (0x00045761) aid_height_set_list_ParamLimits

0xb079,	// (0x00045772) aid_size_parent_ParamLimits

0x9773,	// (0x00043e6c) list_highlight_pane_cp2_ParamLimits

0x9324,	// (0x00043a1d) set_content_pane_g1_ParamLimits

0x51cd,	// (0x0003f8c6) list_single_image_pane_ParamLimits

0x51cd,	// (0x0003f8c6) list_single_image_pane

0xcd83,	// (0x0004747c) aid_size_cell_image_ParamLimits

0xcd83,	// (0x0004747c) aid_size_cell_image

0xcd90,	// (0x00047489) grid_single_image_pane_ParamLimits

0xcd90,	// (0x00047489) grid_single_image_pane

0x99fb,	// (0x000440f4) list_single_image_pane_g1_ParamLimits

0x99fb,	// (0x000440f4) list_single_image_pane_g1

0xcd9c,	// (0x00047495) list_single_image_pane_g2_ParamLimits

0xcd9c,	// (0x00047495) list_single_image_pane_g2

0x0001,

0xfc2f,	// (0x0004a328) list_single_image_pane_g_ParamLimits

0xfc2f,	// (0x0004a328) list_single_image_pane_g

0xcdb0,	// (0x000474a9) list_single_image_pane_t1_ParamLimits

0xcdb0,	// (0x000474a9) list_single_image_pane_t1

0xcdc6,	// (0x000474bf) cell_image_list_pane_ParamLimits

0xcdc6,	// (0x000474bf) cell_image_list_pane

0xcdda,	// (0x000474d3) cell_image_list_pane_g1

0xcde3,	// (0x000474dc) cell_image_list_pane_g2

0x0001,

0xfc34,	// (0x0004a32d) cell_image_list_pane_g

0xcdec,	// (0x000474e5) aid_size_cell_tb_trans_pane

0x87c6,	// (0x00042ebf) bg_tb_trans_pane

0xcdfe,	// (0x000474f7) grid_tb_trans_pane

0x9ca3,	// (0x0004439c) bg_tb_trans_pane_g1

0x9cab,	// (0x000443a4) bg_tb_trans_pane_g2

0x9cb3,	// (0x000443ac) bg_tb_trans_pane_g3

0x9cbb,	// (0x000443b4) bg_tb_trans_pane_g4

0x9cc3,	// (0x000443bc) bg_tb_trans_pane_g5

0x9cdb,	// (0x000443d4) bg_tb_trans_pane_g6

0x9ce3,	// (0x000443dc) bg_tb_trans_pane_g7

0x9ccb,	// (0x000443c4) bg_tb_trans_pane_g8

0x9cd3,	// (0x000443cc) bg_tb_trans_pane_g9

0x0008,

0xfc39,	// (0x0004a332) bg_tb_trans_pane_g

0xce12,	// (0x0004750b) cell_toolbar_trans_pane_ParamLimits

0xce12,	// (0x0004750b) cell_toolbar_trans_pane

0xc242,	// (0x0004693b) cell_toolbar_trans_pane_g1

0xbe17,	// (0x00046510) list_form2_midp_pane_t1

0xbe25,	// (0x0004651e) list_form2_midp_pane_t2

0x0001,

0xfae2,	// (0x0004a1db) list_form2_midp_pane_t

0xbe33,	// (0x0004652c) scroll_pane_cp51_ParamLimits

0xbfef,	// (0x000466e8) form2_midp_wait_pane_g1

0xbff8,	// (0x000466f1) form2_midp_wait_pane_g2

0xc001,	// (0x000466fa) form2_midp_wait_pane_g3

0x0002,

0xfaf7,	// (0x0004a1f0) form2_midp_wait_pane_g

0x7f25,	// (0x0004261e) list_highlight_pane_cp21_ParamLimits

0xc04d,	// (0x00046746) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xc05c,	// (0x00046755) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x6c8e,	// (0x00041387) list_single_2graphic_im_pane_ParamLimits

0x6c8e,	// (0x00041387) list_single_2graphic_im_pane

0xce38,	// (0x00047531) list_single_2graphic_im_pane_g1_ParamLimits

0xce38,	// (0x00047531) list_single_2graphic_im_pane_g1

0xce49,	// (0x00047542) list_single_2graphic_im_pane_g2_ParamLimits

0xce49,	// (0x00047542) list_single_2graphic_im_pane_g2

0xce55,	// (0x0004754e) list_single_2graphic_im_pane_g3_ParamLimits

0xce55,	// (0x0004754e) list_single_2graphic_im_pane_g3

0x0003,

0xfc4c,	// (0x0004a345) list_single_2graphic_im_pane_g_ParamLimits

0xfc4c,	// (0x0004a345) list_single_2graphic_im_pane_g

0xce75,	// (0x0004756e) list_single_2graphic_im_pane_t1_ParamLimits

0xce75,	// (0x0004756e) list_single_2graphic_im_pane_t1

0xc8d7,	// (0x00046fd0) list_single_graphic_2heading_pane_fp_ParamLimits

0xc8d7,	// (0x00046fd0) list_single_graphic_2heading_pane_fp

0x5578,	// (0x0003fc71) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x5578,	// (0x0003fc71) list_single_graphic_2heading_pane_fp_g1

0xc8ec,	// (0x00046fe5) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc8ec,	// (0x00046fe5) list_single_graphic_2heading_pane_fp_g2

0x8761,	// (0x00042e5a) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x8761,	// (0x00042e5a) list_single_graphic_2heading_pane_fp_g3

0x87d4,	// (0x00042ecd) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x87d4,	// (0x00042ecd) list_single_graphic_2heading_pane_fp_g4

0xc8f8,	// (0x00046ff1) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc8f8,	// (0x00046ff1) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb7a,	// (0x0004a273) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb7a,	// (0x0004a273) list_single_graphic_2heading_pane_fp_g

0x56c1,	// (0x0003fdba) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x56c1,	// (0x0003fdba) list_single_graphic_2heading_pane_fp_t1

0x55b0,	// (0x0003fca9) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x55b0,	// (0x0003fca9) list_single_graphic_2heading_pane_fp_t2

0x56d7,	// (0x0003fdd0) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x56d7,	// (0x0003fdd0) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc55,	// (0x0004a34e) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc55,	// (0x0004a34e) list_single_graphic_2heading_pane_fp_t

0xc2ce,	// (0x000469c7) fep_hwr_write_pane_g5_ParamLimits

0xc2ce,	// (0x000469c7) fep_hwr_write_pane_g5

0xc2da,	// (0x000469d3) fep_hwr_write_pane_g6_ParamLimits

0xc2da,	// (0x000469d3) fep_hwr_write_pane_g6

0xcb68,	// (0x00047261) eswt_shell_pane_ParamLimits

0x9d17,	// (0x00044410) bg_popup_window_pane_cp18_ParamLimits

0xafc1,	// (0x000456ba) heading_pane_cp70

0xcc92,	// (0x0004738b) popup_eswt_tasktip_window_t1_ParamLimits

0x9804,	// (0x00043efd) aid_touch_tab_arrow_left

0x9813,	// (0x00043f0c) aid_touch_tab_arrow_right

0x7e6d,	// (0x00042566) title_pane_g3_ParamLimits

0x7e6d,	// (0x00042566) title_pane_g3

0x8785,	// (0x00042e7e) set_value_pane_g1

0x6835,	// (0x00040f2e) popup_toolbar_trans_pane_ParamLimits

0xcdec,	// (0x000474e5) aid_size_cell_tb_trans_pane_ParamLimits

0x87c6,	// (0x00042ebf) bg_tb_trans_pane_ParamLimits

0xcdfe,	// (0x000474f7) grid_tb_trans_pane_ParamLimits

0x81ae,	// (0x000428a7) cont_note_pane_ParamLimits

0x81ae,	// (0x000428a7) cont_note_pane

0x852b,	// (0x00042c24) cont_snote2_single_text_pane_ParamLimits

0x852b,	// (0x00042c24) cont_snote2_single_text_pane

0x852b,	// (0x00042c24) cont_snote2_single_graphic_pane_ParamLimits

0x852b,	// (0x00042c24) cont_snote2_single_graphic_pane

0xa32a,	// (0x00044a23) cont_note_wait_pane_ParamLimits

0xa32a,	// (0x00044a23) cont_note_wait_pane

0xa32a,	// (0x00044a23) cont_note_image_pane_ParamLimits

0xa32a,	// (0x00044a23) cont_note_image_pane

0xcea6,	// (0x0004759f) popup_note2_window_g1_ParamLimits

0xcea6,	// (0x0004759f) popup_note2_window_g1

0xced7,	// (0x000475d0) popup_note2_window_t1_ParamLimits

0xced7,	// (0x000475d0) popup_note2_window_t1

0xcf1c,	// (0x00047615) popup_note2_window_t2_ParamLimits

0xcf1c,	// (0x00047615) popup_note2_window_t2

0xcf61,	// (0x0004765a) popup_note2_window_t3_ParamLimits

0xcf61,	// (0x0004765a) popup_note2_window_t3

0xcfa6,	// (0x0004769f) popup_note2_window_t4_ParamLimits

0xcfa6,	// (0x0004769f) popup_note2_window_t4

0x8232,	// (0x0004292b) popup_note2_window_t5_ParamLimits

0x8232,	// (0x0004292b) popup_note2_window_t5

0x0004,

0xfc61,	// (0x0004a35a) popup_note2_window_t_ParamLimits

0xfc61,	// (0x0004a35a) popup_note2_window_t

0xcfd5,	// (0x000476ce) popup_note2_image_window_g1_ParamLimits

0xcfd5,	// (0x000476ce) popup_note2_image_window_g1

0xcfe1,	// (0x000476da) popup_note2_image_window_g2_ParamLimits

0xcfe1,	// (0x000476da) popup_note2_image_window_g2

0x0001,

0xfc6c,	// (0x0004a365) popup_note2_image_window_g_ParamLimits

0xfc6c,	// (0x0004a365) popup_note2_image_window_g

0xcff3,	// (0x000476ec) popup_note2_image_window_t1_ParamLimits

0xcff3,	// (0x000476ec) popup_note2_image_window_t1

0xd00b,	// (0x00047704) popup_note2_image_window_t2_ParamLimits

0xd00b,	// (0x00047704) popup_note2_image_window_t2

0xd023,	// (0x0004771c) popup_note2_image_window_t3_ParamLimits

0xd023,	// (0x0004771c) popup_note2_image_window_t3

0x0002,

0xfc71,	// (0x0004a36a) popup_note2_image_window_t_ParamLimits

0xfc71,	// (0x0004a36a) popup_note2_image_window_t

0xa338,	// (0x00044a31) popup_note2_wait_window_g1_ParamLimits

0xa338,	// (0x00044a31) popup_note2_wait_window_g1

0xd03f,	// (0x00047738) popup_note2_wait_window_g2_ParamLimits

0xd03f,	// (0x00047738) popup_note2_wait_window_g2

0xa350,	// (0x00044a49) popup_note2_wait_window_g3_ParamLimits

0xa350,	// (0x00044a49) popup_note2_wait_window_g3

0x0002,

0xfc78,	// (0x0004a371) popup_note2_wait_window_g_ParamLimits

0xfc78,	// (0x0004a371) popup_note2_wait_window_g

0xd04b,	// (0x00047744) popup_note2_wait_window_t1_ParamLimits

0xd04b,	// (0x00047744) popup_note2_wait_window_t1

0xd069,	// (0x00047762) popup_note2_wait_window_t2_ParamLimits

0xd069,	// (0x00047762) popup_note2_wait_window_t2

0xd087,	// (0x00047780) popup_note2_wait_window_t3_ParamLimits

0xd087,	// (0x00047780) popup_note2_wait_window_t3

0xd099,	// (0x00047792) popup_note2_wait_window_t4_ParamLimits

0xd099,	// (0x00047792) popup_note2_wait_window_t4

0x0003,

0xfc7f,	// (0x0004a378) popup_note2_wait_window_t_ParamLimits

0xfc7f,	// (0x0004a378) popup_note2_wait_window_t

0xd0ab,	// (0x000477a4) wait_bar2_pane_ParamLimits

0xd0ab,	// (0x000477a4) wait_bar2_pane

0xd0c3,	// (0x000477bc) popup_snote2_single_text_window_g1_ParamLimits

0xd0c3,	// (0x000477bc) popup_snote2_single_text_window_g1

0xd0eb,	// (0x000477e4) popup_snote2_single_text_window_t1_ParamLimits

0xd0eb,	// (0x000477e4) popup_snote2_single_text_window_t1

0xd137,	// (0x00047830) popup_snote2_single_text_window_t2_ParamLimits

0xd137,	// (0x00047830) popup_snote2_single_text_window_t2

0xd183,	// (0x0004787c) popup_snote2_single_text_window_t3_ParamLimits

0xd183,	// (0x0004787c) popup_snote2_single_text_window_t3

0xd1c4,	// (0x000478bd) popup_snote2_single_text_window_t4_ParamLimits

0xd1c4,	// (0x000478bd) popup_snote2_single_text_window_t4

0xd1fa,	// (0x000478f3) popup_snote2_single_text_window_t5_ParamLimits

0xd1fa,	// (0x000478f3) popup_snote2_single_text_window_t5

0x0004,

0xfc88,	// (0x0004a381) popup_snote2_single_text_window_t_ParamLimits

0xfc88,	// (0x0004a381) popup_snote2_single_text_window_t

0xd225,	// (0x0004791e) popup_snote2_single_graphic_window_g1_ParamLimits

0xd225,	// (0x0004791e) popup_snote2_single_graphic_window_g1

0xd24d,	// (0x00047946) popup_snote2_single_graphic_window_g2_ParamLimits

0xd24d,	// (0x00047946) popup_snote2_single_graphic_window_g2

0x0001,

0xfc93,	// (0x0004a38c) popup_snote2_single_graphic_window_g_ParamLimits

0xfc93,	// (0x0004a38c) popup_snote2_single_graphic_window_g

0xd275,	// (0x0004796e) popup_snote2_single_graphic_window_t1_ParamLimits

0xd275,	// (0x0004796e) popup_snote2_single_graphic_window_t1

0xd2c1,	// (0x000479ba) popup_snote2_single_graphic_window_t2_ParamLimits

0xd2c1,	// (0x000479ba) popup_snote2_single_graphic_window_t2

0xd183,	// (0x0004787c) popup_snote2_single_graphic_window_t3_ParamLimits

0xd183,	// (0x0004787c) popup_snote2_single_graphic_window_t3

0xd1c4,	// (0x000478bd) popup_snote2_single_graphic_window_t4_ParamLimits

0xd1c4,	// (0x000478bd) popup_snote2_single_graphic_window_t4

0xd1fa,	// (0x000478f3) popup_snote2_single_graphic_window_t5_ParamLimits

0xd1fa,	// (0x000478f3) popup_snote2_single_graphic_window_t5

0x0004,

0xfc98,	// (0x0004a391) popup_snote2_single_graphic_window_t_ParamLimits

0xfc98,	// (0x0004a391) popup_snote2_single_graphic_window_t

0xbcf4,	// (0x000463ed) clock_nsta_pane_cp2_t1

0xbcf4,	// (0x000463ed) clock_nsta_pane_cp2_t2

0x0001,

0xfab8,	// (0x0004a1b1) clock_nsta_pane_cp2_t

0x4dba,	// (0x0003f4b3) form_field_data_wide_pane_g1_ParamLimits

0x8761,	// (0x00042e5a) form_field_data_wide_pane_g2_ParamLimits

0x8761,	// (0x00042e5a) form_field_data_wide_pane_g2

0x87d4,	// (0x00042ecd) form_field_data_wide_pane_g3_ParamLimits

0x87d4,	// (0x00042ecd) form_field_data_wide_pane_g3

0x0002,

0xf680,	// (0x00049d79) form_field_data_wide_pane_g_ParamLimits

0xf680,	// (0x00049d79) form_field_data_wide_pane_g

0xbbf6,	// (0x000462ef) grid_touch_3_pane_ParamLimits

0xbbf6,	// (0x000462ef) grid_touch_3_pane

0xd30d,	// (0x00047a06) cell_touch_3_pane_ParamLimits

0xd30d,	// (0x00047a06) cell_touch_3_pane

0xc242,	// (0x0004693b) cell_touch_3_pane_g1

0xc242,	// (0x0004693b) cell_touch_3_pane_g2

0x0001,

0xfb3d,	// (0x0004a236) cell_touch_3_pane_g

0x828a,	// (0x00042983) cont_query_data_pane

0x8292,	// (0x0004298b) cont_query_data_pane_cp1

0xd33b,	// (0x00047a34) button_value_adjust_pane_cp7

0xd343,	// (0x00047a3c) query_popup_pane_cp3

0x8f2c,	// (0x00043625) bg_popup_sub_pane_cp22_ParamLimits

0x5f65,	// (0x0004065e) navi_navi_volume_pane_cp2

0x5f80,	// (0x00040679) popup_side_volume_key_window_g2

0x5f8f,	// (0x00040688) popup_side_volume_key_window_g3

0x0002,

0xf716,	// (0x00049e0f) popup_side_volume_key_window_g

0x5fac,	// (0x000406a5) popup_side_volume_key_window_t2

0x0001,

0xf71d,	// (0x00049e16) popup_side_volume_key_window_t

0x91e3,	// (0x000438dc) popup_side_volume_key_window_ParamLimits

0x4a02,	// (0x0003f0fb) list_double_graphic_pane_g4_ParamLimits

0x4a02,	// (0x0003f0fb) list_double_graphic_pane_g4

0x6ccb,	// (0x000413c4) list_single_2heading_msg_pane_ParamLimits

0x6ccb,	// (0x000413c4) list_single_2heading_msg_pane

0x7245,	// (0x0004193e) list_single_2heading_msg_pane_g1_ParamLimits

0x7245,	// (0x0004193e) list_single_2heading_msg_pane_g1

0x9388,	// (0x00043a81) list_single_2heading_msg_pane_g2_ParamLimits

0x9388,	// (0x00043a81) list_single_2heading_msg_pane_g2

0x6dd2,	// (0x000414cb) list_single_2heading_msg_pane_g3_ParamLimits

0x6dd2,	// (0x000414cb) list_single_2heading_msg_pane_g3

0x7251,	// (0x0004194a) list_single_2heading_msg_pane_g4_ParamLimits

0x7251,	// (0x0004194a) list_single_2heading_msg_pane_g4

0x0003,

0xfca3,	// (0x0004a39c) list_single_2heading_msg_pane_g_ParamLimits

0xfca3,	// (0x0004a39c) list_single_2heading_msg_pane_g

0x56f7,	// (0x0003fdf0) list_single_2heading_msg_pane_t1_ParamLimits

0x56f7,	// (0x0003fdf0) list_single_2heading_msg_pane_t1

0x571f,	// (0x0003fe18) list_single_2heading_msg_pane_t2_ParamLimits

0x571f,	// (0x0003fe18) list_single_2heading_msg_pane_t2

0x5753,	// (0x0003fe4c) list_single_2heading_msg_pane_t3_ParamLimits

0x5753,	// (0x0003fe4c) list_single_2heading_msg_pane_t3

0x578c,	// (0x0003fe85) list_single_2heading_msg_pane_t4_ParamLimits

0x578c,	// (0x0003fe85) list_single_2heading_msg_pane_t4

0x0003,

0xfcac,	// (0x0004a3a5) list_single_2heading_msg_pane_t_ParamLimits

0xfcac,	// (0x0004a3a5) list_single_2heading_msg_pane_t

0x7e79,	// (0x00042572) title_pane_g4_ParamLimits

0x7e79,	// (0x00042572) title_pane_g4

0x5d74,	// (0x0004046d) title_pane_stacon_g3_ParamLimits

0x5d74,	// (0x0004046d) title_pane_stacon_g3

0xce69,	// (0x00047562) list_single_2graphic_im_pane_g4_ParamLimits

0xce69,	// (0x00047562) list_single_2graphic_im_pane_g4

0xad89,	// (0x00045482) popup_side_volume_key_window_cp

0xb544,	// (0x00045c3d) main_idle_act2_pane_t1

0x6933,	// (0x0004102c) toolbar_button_pane_g10

0x8723,	// (0x00042e1c) popup_toolbar_window_cp1

0xbce5,	// (0x000463de) clock_nsta_pane_cp_t1

0xbce5,	// (0x000463de) clock_nsta_pane_cp_t2

0x0001,

0xfab3,	// (0x0004a1ac) clock_nsta_pane_cp_t

0x5f65,	// (0x0004065e) navi_navi_volume_pane_cp2_ParamLimits

0x5f74,	// (0x0004066d) popup_side_volume_key_window_g1_ParamLimits

0x5f80,	// (0x00040679) popup_side_volume_key_window_g2_ParamLimits

0x5f8f,	// (0x00040688) popup_side_volume_key_window_g3_ParamLimits

0xf716,	// (0x00049e0f) popup_side_volume_key_window_g_ParamLimits

0x6e66,	// (0x0004155f) fep_hwr_aid_pane

0x2ccc,	// (0x0003d3c5) bg_fep_hwr_top_pane_g4_ParamLimits

0xc29e,	// (0x00046997) fep_hwr_top_pane_g1_ParamLimits

0xc2b0,	// (0x000469a9) fep_hwr_top_pane_g2_ParamLimits

0x6f1f,	// (0x00041618) fep_hwr_top_pane_g3_ParamLimits

0xfb08,	// (0x0004a201) fep_hwr_top_pane_g_ParamLimits

0x6f34,	// (0x0004162d) fep_hwr_top_text_pane_ParamLimits

0xab4c,	// (0x00045245) aid_touch_tab_arrow_arrow_2

0xab55,	// (0x0004524e) aid_touch_tab_arrow_left_2

0x6e7a,	// (0x00041573) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x6eb1,	// (0x000415aa) fep_hwr_prediction_pane

0xc410,	// (0x00046b09) fep_vkb_prediction_pane

0xc514,	// (0x00046c0d) fep_vkb_side_pane_g3_ParamLimits

0xc514,	// (0x00046c0d) fep_vkb_side_pane_g3

0xc4c0,	// (0x00046bb9) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xc94c,	// (0x00047045) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xc959,	// (0x00047052) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbb2,	// (0x0004a2ab) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xd368,	// (0x00047a61) fep_hwr_prediction_pane_g1

0x7269,	// (0x00041962) fep_hwr_prediction_pane_g2

0x7271,	// (0x0004196a) fep_hwr_prediction_pane_g3

0x7279,	// (0x00041972) fep_hwr_prediction_pane_g4

0x0003,

0xfcb5,	// (0x0004a3ae) fep_hwr_prediction_pane_g

0xd368,	// (0x00047a61) fep_vkb_prediction_pane_g1

0xd372,	// (0x00047a6b) fep_vkb_prediction_pane_g2

0xd37a,	// (0x00047a73) fep_vkb_prediction_pane_g3

0xd382,	// (0x00047a7b) fep_vkb_prediction_pane_g4

0x0003,

0xfcbe,	// (0x0004a3b7) fep_vkb_prediction_pane_g

0x6c1b,	// (0x00041314) slider_set_pane_g3

0x6c2f,	// (0x00041328) slider_set_pane_g4

0x6c47,	// (0x00041340) slider_set_pane_g5

0x6c1b,	// (0x00041314) slider_set_pane_g6

0x6c5d,	// (0x00041356) slider_set_pane_g7

0xb1de,	// (0x000458d7) slider_form_pane_g3

0xb1e7,	// (0x000458e0) slider_form_pane_g4

0xb1ef,	// (0x000458e8) slider_form_pane_g5

0xb1de,	// (0x000458d7) slider_form_pane_g6

0xb1f7,	// (0x000458f0) slider_form_pane_g7

0xb7ee,	// (0x00045ee7) slider_set_pane_vc_g3

0xb7f7,	// (0x00045ef0) slider_set_pane_vc_g4

0xb800,	// (0x00045ef9) slider_set_pane_vc_g5

0xb7ee,	// (0x00045ee7) slider_set_pane_vc_g6

0xb809,	// (0x00045f02) slider_set_pane_vc_g7

0xb9c9,	// (0x000460c2) slider_form_pane_vc_g1

0xb9d2,	// (0x000460cb) slider_form_pane_vc_g2

0xb9db,	// (0x000460d4) slider_form_pane_vc_g3

0xb9c9,	// (0x000460c2) slider_form_pane_vc_g4

0xb9e4,	// (0x000460dd) slider_form_pane_vc_g5

0x0004,

0xfa85,	// (0x0004a17e) slider_form_pane_vc_g

0x7e31,	// (0x0004252a) main_idle_act3_pane

0xd38a,	// (0x00047a83) ai3_links_pane

0xd393,	// (0x00047a8c) popup_ai3_data_window_ParamLimits

0xd393,	// (0x00047a8c) popup_ai3_data_window

0x7e31,	// (0x0004252a) grid_ai3_links_pane

0xd3ad,	// (0x00047aa6) cell_ai3_links_pane_ParamLimits

0xd3ad,	// (0x00047aa6) cell_ai3_links_pane

0xd3c5,	// (0x00047abe) bg_popup_sub_pane_cp11

0xd3d2,	// (0x00047acb) cell_ai3_links_pane_g1

0x7e31,	// (0x0004252a) bg_popup_sub_pane_cp12

0xd3f7,	// (0x00047af0) heading_ai3_data_pane

0xd3ff,	// (0x00047af8) list_ai3_gene_pane

0xd40b,	// (0x00047b04) popup_ai3_data_window_g1

0xd413,	// (0x00047b0c) heading_ai3_data_pane_g1

0xd41b,	// (0x00047b14) heading_ai3_data_pane_t1

0xd429,	// (0x00047b22) list_double_ai3_gene_pane_ParamLimits

0xd429,	// (0x00047b22) list_double_ai3_gene_pane

0xd436,	// (0x00047b2f) list_single_ai3_gene_pane_ParamLimits

0xd436,	// (0x00047b2f) list_single_ai3_gene_pane

0xc207,	// (0x00046900) list_highlight_pane_cp7_ParamLimits

0xc207,	// (0x00046900) list_highlight_pane_cp7

0xd443,	// (0x00047b3c) list_single_a13_gene_pane_t1_ParamLimits

0xd443,	// (0x00047b3c) list_single_a13_gene_pane_t1

0xd45a,	// (0x00047b53) list_single_ai3_gene_pane_g1

0xd463,	// (0x00047b5c) list_single_ai3_gene_pane_g2

0x0001,

0xfcc7,	// (0x0004a3c0) list_single_ai3_gene_pane_g

0xd46b,	// (0x00047b64) list_double_ai3_gene_pane_g1_ParamLimits

0xd46b,	// (0x00047b64) list_double_ai3_gene_pane_g1

0xd477,	// (0x00047b70) list_double_ai3_gene_pane_t1_ParamLimits

0xd477,	// (0x00047b70) list_double_ai3_gene_pane_t1

0xd493,	// (0x00047b8c) list_double_ai3_gene_pane_t2_ParamLimits

0xd493,	// (0x00047b8c) list_double_ai3_gene_pane_t2

0xd4a9,	// (0x00047ba2) list_double_ai3_gene_pane_t3_ParamLimits

0xd4a9,	// (0x00047ba2) list_double_ai3_gene_pane_t3

0x0002,

0xfccc,	// (0x0004a3c5) list_double_ai3_gene_pane_t_ParamLimits

0xfccc,	// (0x0004a3c5) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x56ed,	// (0x0003fde6) aid_size_min_col_2

0xd354,	// (0x00047a4d) aid_size_min_msg_ParamLimits

0xd354,	// (0x00047a4d) aid_size_min_msg

0xc614,	// (0x00046d0d) fep_vkb_top_text_pane_g2_ParamLimits

0xc614,	// (0x00046d0d) fep_vkb_top_text_pane_g2

0x0001,

0xfb38,	// (0x0004a231) fep_vkb_top_text_pane_g_ParamLimits

0xfb38,	// (0x0004a231) fep_vkb_top_text_pane_g

0x7e31,	// (0x0004252a) main_hc_apps_shell_pane

0xd4c6,	// (0x00047bbf) grid_hc_apps_pane_ParamLimits

0xd4c6,	// (0x00047bbf) grid_hc_apps_pane

0xd4d5,	// (0x00047bce) list_hc_apps_pane

0xd4dd,	// (0x00047bd6) scroll_pane_cp37_ParamLimits

0xd4dd,	// (0x00047bd6) scroll_pane_cp37

0xd4e9,	// (0x00047be2) cell_hc_apps_pane_ParamLimits

0xd4e9,	// (0x00047be2) cell_hc_apps_pane

0xd597,	// (0x00047c90) cell_hc_apps_pane_g1_ParamLimits

0xd597,	// (0x00047c90) cell_hc_apps_pane_g1

0xd5c8,	// (0x00047cc1) cell_hc_apps_pane_g2_ParamLimits

0xd5c8,	// (0x00047cc1) cell_hc_apps_pane_g2

0xd5e4,	// (0x00047cdd) cell_hc_apps_pane_g3_ParamLimits

0xd5e4,	// (0x00047cdd) cell_hc_apps_pane_g3

0x0002,

0xfcd3,	// (0x0004a3cc) cell_hc_apps_pane_g_ParamLimits

0xfcd3,	// (0x0004a3cc) cell_hc_apps_pane_g

0xd606,	// (0x00047cff) cell_hc_apps_pane_t1_ParamLimits

0xd606,	// (0x00047cff) cell_hc_apps_pane_t1

0x81ae,	// (0x000428a7) grid_highlight_pane_cp10_ParamLimits

0x81ae,	// (0x000428a7) grid_highlight_pane_cp10

0xd646,	// (0x00047d3f) list_single_hc_apps_pane_ParamLimits

0xd646,	// (0x00047d3f) list_single_hc_apps_pane

0xd6a2,	// (0x00047d9b) list_single_hc_apps_pane_g1

0x7281,	// (0x0004197a) list_single_hc_apps_pane_g2

0x0001,

0xfcda,	// (0x0004a3d3) list_single_hc_apps_pane_g

0x729a,	// (0x00041993) list_single_hc_apps_pane_g2_copy1

0x57b1,	// (0x0003feaa) list_single_hc_apps_pane_t1

0x7f25,	// (0x0004261e) bg_set_opt_pane_cp_ParamLimits

0x5bf0,	// (0x000402e9) setting_slider_pane_t1_ParamLimits

0x5c09,	// (0x00040302) setting_slider_pane_t2_ParamLimits

0x5c23,	// (0x0004031c) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x00049c57) setting_slider_pane_t_ParamLimits

0x5c3b,	// (0x00040334) slider_set_pane_ParamLimits

0x622a,	// (0x00040923) control_pane_g5_ParamLimits

0x622a,	// (0x00040923) control_pane_g5

0xb02d,	// (0x00045726) slider_set_pane_g1_ParamLimits

0x6c0f,	// (0x00041308) slider_set_pane_g2_ParamLimits

0x6c1b,	// (0x00041314) slider_set_pane_g3_ParamLimits

0x6c2f,	// (0x00041328) slider_set_pane_g4_ParamLimits

0x6c47,	// (0x00041340) slider_set_pane_g5_ParamLimits

0x6c1b,	// (0x00041314) slider_set_pane_g6_ParamLimits

0x6c5d,	// (0x00041356) slider_set_pane_g7_ParamLimits

0xf969,	// (0x0004a062) slider_set_pane_g_ParamLimits

0x92cf,	// (0x000439c8) navi_icon_text_pane_ParamLimits

0x97c5,	// (0x00043ebe) aid_fill_nsta_2_ParamLimits

0x9804,	// (0x00043efd) aid_touch_tab_arrow_left_ParamLimits

0x9813,	// (0x00043f0c) aid_touch_tab_arrow_right_ParamLimits

0x9880,	// (0x00043f79) clock_nsta_pane_ParamLimits

0xab2e,	// (0x00045227) navi_icon_pane_g1_ParamLimits

0xab3a,	// (0x00045233) navi_text_pane_t1_ParamLimits

0xbdf1,	// (0x000464ea) navi_icon_text_pane_g1_ParamLimits

0xbdfd,	// (0x000464f6) navi_icon_text_pane_t1_ParamLimits

0xd6a2,	// (0x00047d9b) list_single_hc_apps_pane_g1_ParamLimits

0x7281,	// (0x0004197a) list_single_hc_apps_pane_g2_ParamLimits

0xfcda,	// (0x0004a3d3) list_single_hc_apps_pane_g_ParamLimits

0x729a,	// (0x00041993) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x57b1,	// (0x0003feaa) list_single_hc_apps_pane_t1_ParamLimits

0x5afa,	// (0x000401f3) popup_toolbar2_fixed_window_ParamLimits

0x5afa,	// (0x000401f3) popup_toolbar2_fixed_window

0x682b,	// (0x00040f24) popup_toolbar2_float_window

0x7e31,	// (0x0004252a) bg_popup_sub_pane_cp27

0xd6bb,	// (0x00047db4) grid_toolbar2_float_pane

0x7e31,	// (0x0004252a) bg_popup_sub_pane_cp26

0xd6bb,	// (0x00047db4) grid_toolbar2_fixed_pane

0xd6c3,	// (0x00047dbc) cell_toolbar2_fixed_pane_ParamLimits

0xd6c3,	// (0x00047dbc) cell_toolbar2_fixed_pane

0xd6d3,	// (0x00047dcc) cell_toolbar2_fixed_pane_g1

0xd6dc,	// (0x00047dd5) toolbar2_fixed_button_pane

0x9ca3,	// (0x0004439c) toolbar2_fixed_button_pane_g1

0x9cab,	// (0x000443a4) toolbar2_fixed_button_pane_g2

0x9cb3,	// (0x000443ac) toolbar2_fixed_button_pane_g3

0x9cbb,	// (0x000443b4) toolbar2_fixed_button_pane_g4

0x9cc3,	// (0x000443bc) toolbar2_fixed_button_pane_g5

0x9ccb,	// (0x000443c4) toolbar2_fixed_button_pane_g6

0x9cd3,	// (0x000443cc) toolbar2_fixed_button_pane_g7

0x9cdb,	// (0x000443d4) toolbar2_fixed_button_pane_g8

0x9ce3,	// (0x000443dc) toolbar2_fixed_button_pane_g9

0x0008,

0xf86b,	// (0x00049f64) toolbar2_fixed_button_pane_g

0xd6e4,	// (0x00047ddd) cell_toolbar2_float_pane_ParamLimits

0xd6e4,	// (0x00047ddd) cell_toolbar2_float_pane

0xd6f5,	// (0x00047dee) cell_toolbar2_float_pane_g1

0xd6dc,	// (0x00047dd5) toolbar2_fixed_button_pane_cp

0xc370,	// (0x00046a69) fep_vkb_accented_list_pane_ParamLimits

0xc370,	// (0x00046a69) fep_vkb_accented_list_pane

0x7082,	// (0x0004177b) bg_popup_fep_shadow_pane_g9

0x944f,	// (0x00043b48) bg_popup_fep_shadow_pane_cp3

0x890e,	// (0x00043007) list_accented_list_pane

0xd6fe,	// (0x00047df7) list_single_accented_list_pane_ParamLimits

0xd6fe,	// (0x00047df7) list_single_accented_list_pane

0x944f,	// (0x00043b48) list_highlight_pane_cp10

0xd70f,	// (0x00047e08) list_single_accented_list_pane_t1

0x677b,	// (0x00040e74) popup_slider_window_ParamLimits

0x677b,	// (0x00040e74) popup_slider_window

0xd34b,	// (0x00047a44) aid_indentation_list_msg

0xd7d3,	// (0x00047ecc) bg_popup_window_pane_cp19

0xd83b,	// (0x00047f34) popup_slider_window_g1

0xd857,	// (0x00047f50) popup_slider_window_g2

0xd873,	// (0x00047f6c) popup_slider_window_g3

0x0005,

0xfcdf,	// (0x0004a3d8) popup_slider_window_g

0xd8d9,	// (0x00047fd2) popup_slider_window_t1

0xd94d,	// (0x00048046) small_volume_slider_vertical_pane

0xc242,	// (0x0004693b) small_volume_slider_vertical_pane_g1

0xc242,	// (0x0004693b) small_volume_slider_vertical_pane_g2

0xd969,	// (0x00048062) small_volume_slider_vertical_pane_g3

0x0002,

0xfcf1,	// (0x0004a3ea) small_volume_slider_vertical_pane_g

0x58bc,	// (0x0003ffb5) area_side_right_pane_ParamLimits

0x58bc,	// (0x0003ffb5) area_side_right_pane

0x72b6,	// (0x000419af) aid_size_side_button_ParamLimits

0x72b6,	// (0x000419af) aid_size_side_button

0x72ca,	// (0x000419c3) grid_sctrl_middle_pane_ParamLimits

0x72ca,	// (0x000419c3) grid_sctrl_middle_pane

0x72e9,	// (0x000419e2) sctrl_sk_bottom_pane

0x72fa,	// (0x000419f3) sctrl_sk_top_pane

0x730c,	// (0x00041a05) aid_touch_sctrl_top

0x81ae,	// (0x000428a7) bg_sctrl_sk_pane_ParamLimits

0x81ae,	// (0x000428a7) bg_sctrl_sk_pane

0x7319,	// (0x00041a12) sctrl_sk_top_pane_g1

0x7326,	// (0x00041a1f) sctrl_sk_top_pane_t1

0x730c,	// (0x00041a05) aid_touch_sctrl_bottom

0x81ae,	// (0x000428a7) bg_sctrl_sk_pane_cp_ParamLimits

0x81ae,	// (0x000428a7) bg_sctrl_sk_pane_cp

0x7341,	// (0x00041a3a) sctrl_sk_bottom_pane_g1

0x7326,	// (0x00041a1f) sctrl_sk_bottom_pane_t1

0x734a,	// (0x00041a43) cell_sctrl_middle_pane_ParamLimits

0x734a,	// (0x00041a43) cell_sctrl_middle_pane

0x7365,	// (0x00041a5e) aid_touch_sctrl_middle_ParamLimits

0x7365,	// (0x00041a5e) aid_touch_sctrl_middle

0x87c6,	// (0x00042ebf) bg_sctrl_middle_pane_ParamLimits

0x87c6,	// (0x00042ebf) bg_sctrl_middle_pane

0xc4c0,	// (0x00046bb9) cell_sctrl_middle_pane_g1_ParamLimits

0xc4c0,	// (0x00046bb9) cell_sctrl_middle_pane_g1

0x7377,	// (0x00041a70) cell_sctrl_middle_pane_g2_ParamLimits

0x7377,	// (0x00041a70) cell_sctrl_middle_pane_g2

0x0001,

0xfcfd,	// (0x0004a3f6) cell_sctrl_middle_pane_g_ParamLimits

0xfcfd,	// (0x0004a3f6) cell_sctrl_middle_pane_g

0x9ca3,	// (0x0004439c) bg_sctrl_middle_pane_g1

0x9cab,	// (0x000443a4) bg_sctrl_middle_pane_g2

0x9cb3,	// (0x000443ac) bg_sctrl_middle_pane_g3

0x9cbb,	// (0x000443b4) bg_sctrl_middle_pane_g4

0x9cc3,	// (0x000443bc) bg_sctrl_middle_pane_g5

0x9ccb,	// (0x000443c4) bg_sctrl_middle_pane_g6

0x9cd3,	// (0x000443cc) bg_sctrl_middle_pane_g7

0x9cdb,	// (0x000443d4) bg_sctrl_middle_pane_g8

0x0007,

0xfd02,	// (0x0004a3fb) bg_sctrl_middle_pane_g

0x9ce3,	// (0x000443dc) bg_sctrl_middle_pane_g8_copy1

0x9ca3,	// (0x0004439c) bg_sctrl_sk_pane_g1

0x9cab,	// (0x000443a4) bg_sctrl_sk_pane_g2

0x9cb3,	// (0x000443ac) bg_sctrl_sk_pane_g3

0x0008,

0xf86b,	// (0x00049f64) bg_sctrl_sk_pane_g

0x86e9,	// (0x00042de2) aid_size_touch_scroll_bar

0x9cbb,	// (0x000443b4) bg_sctrl_sk_pane_g4

0x9cc3,	// (0x000443bc) bg_sctrl_sk_pane_g5

0x9ccb,	// (0x000443c4) bg_sctrl_sk_pane_g6

0x9cd3,	// (0x000443cc) bg_sctrl_sk_pane_g7

0x9cdb,	// (0x000443d4) bg_sctrl_sk_pane_g8

0x9ce3,	// (0x000443dc) bg_sctrl_sk_pane_g9

0x63e4,	// (0x00040add) popup_fep_china_hwr2_fs_candidate_window

0x63ee,	// (0x00040ae7) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x63ee,	// (0x00040ae7) popup_fep_china_hwr2_fs_control_window

0xc4c0,	// (0x00046bb9) sctrl_sk_top_pane_g2

0x0001,

0xfcf8,	// (0x0004a3f1) sctrl_sk_top_pane_g

0xd972,	// (0x0004806b) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd972,	// (0x0004806b) aid_fep_china_hwr2_fs_cell

0xd984,	// (0x0004807d) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd984,	// (0x0004807d) bg_popup_fep_shadow_pane_cp4

0xd99b,	// (0x00048094) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd99b,	// (0x00048094) bg_popup_fep_shadow_pane_cp5

0xd9ad,	// (0x000480a6) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd9ad,	// (0x000480a6) popup_fep_china_hwr2_fs_control_bar_grid

0xd9bd,	// (0x000480b6) popup_fep_china_hwr2_fs_control_funtion_grid

0xd9c5,	// (0x000480be) aid_fep_china_hwr2_fs_candi_cell

0x7e31,	// (0x0004252a) bg_popup_fep_shadow_pane_cp6

0xd9cf,	// (0x000480c8) popup_fep_china_hwr2_fs_candidate_grid

0xd9d9,	// (0x000480d2) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd9d9,	// (0x000480d2) cell_fep_china_hwr2_fs_funtion_grid

0xc242,	// (0x0004693b) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd9f1,	// (0x000480ea) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd9f1,	// (0x000480ea) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd9ff,	// (0x000480f8) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd9ff,	// (0x000480f8) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd13,	// (0x0004a40c) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd13,	// (0x0004a40c) cell_fep_china_hwr2_fs_funtion_grid_g

0xda15,	// (0x0004810e) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xda15,	// (0x0004810e) cell_fep_china_hwr2_fs_funtion_grid_t1

0xda2a,	// (0x00048123) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xda2a,	// (0x00048123) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd18,	// (0x0004a411) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd18,	// (0x0004a411) cell_fep_china_hwr2_fs_funtion_grid_t

0xda46,	// (0x0004813f) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xda4e,	// (0x00048147) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xda56,	// (0x0004814f) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd1d,	// (0x0004a416) popup_fep_china_hwr2_fs_control_bar_grid_g

0xda5e,	// (0x00048157) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xda5e,	// (0x00048157) cell_fep_china_hwr2_fs_candidate_grid

0xda77,	// (0x00048170) popup_fep_china_hwr2_fs_candidate_grid_g20

0xda7f,	// (0x00048178) popup_fep_china_hwr2_fs_candidate_grid_g21

0xc242,	// (0x0004693b) cell_fep_china_hwr2_fs_candidate_grid_g1

0xc242,	// (0x0004693b) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb3d,	// (0x0004a236) cell_fep_china_hwr2_fs_candidate_grid_g

0xda87,	// (0x00048180) cell_fep_china_hwr2_fs_candidate_grid_t1

0x988d,	// (0x00043f86) clock_nsta_pane_cp_24_ParamLimits

0x988d,	// (0x00043f86) clock_nsta_pane_cp_24

0x990b,	// (0x00044004) indicator_nsta_pane_cp_24_ParamLimits

0x990b,	// (0x00044004) indicator_nsta_pane_cp_24

0xa9aa,	// (0x000450a3) heading_pane_g1

0x0001,

0xf8d0,	// (0x00049fc9) heading_pane_g

0xb38d,	// (0x00045a86) grid_sct_catagory_button_pane

0xb3bd,	// (0x00045ab6) scroll_pane_cp5_ParamLimits

0xbe3f,	// (0x00046538) button_value_adjust_pane_cp5_ParamLimits

0xbe3f,	// (0x00046538) button_value_adjust_pane_cp5

0xbf1e,	// (0x00046617) form2_midp_time_pane_ParamLimits

0xda95,	// (0x0004818e) cell_sct_catagory_button_pane_ParamLimits

0xda95,	// (0x0004818e) cell_sct_catagory_button_pane

0xc207,	// (0x00046900) bg_button_pane_cp01_ParamLimits

0xc207,	// (0x00046900) bg_button_pane_cp01

0xc242,	// (0x0004693b) cell_sct_catagory_button_pane_g1

0x67ba,	// (0x00040eb3) popup_tb_extension_window

0xdaa7,	// (0x000481a0) aid_size_cell_ext_ParamLimits

0xdaa7,	// (0x000481a0) aid_size_cell_ext

0x81ae,	// (0x000428a7) bg_tb_trans_pane_cp1_ParamLimits

0x81ae,	// (0x000428a7) bg_tb_trans_pane_cp1

0xdac7,	// (0x000481c0) grid_tb_ext_pane_ParamLimits

0xdac7,	// (0x000481c0) grid_tb_ext_pane

0xdaf5,	// (0x000481ee) cell_tb_ext_pane_ParamLimits

0xdaf5,	// (0x000481ee) cell_tb_ext_pane

0xdb0c,	// (0x00048205) cell_tb_ext_pane_g1_ParamLimits

0xdb0c,	// (0x00048205) cell_tb_ext_pane_g1

0xdb29,	// (0x00048222) cell_tb_ext_pane_t1

0x81ae,	// (0x000428a7) list_highlight_pane_cp11_ParamLimits

0x81ae,	// (0x000428a7) list_highlight_pane_cp11

0x5b19,	// (0x00040212) popup_uni_indicator_window_ParamLimits

0x5b19,	// (0x00040212) popup_uni_indicator_window

0x87c6,	// (0x00042ebf) bg_popup_sub_pane_cp14

0xdb44,	// (0x0004823d) list_uniindi_pane

0xdb50,	// (0x00048249) uniindi_top_pane

0x81ae,	// (0x000428a7) bg_uniindi_top_pane

0xdb6f,	// (0x00048268) uniindi_top_pane_g1

0xdb85,	// (0x0004827e) uniindi_top_pane_g2

0x0003,

0xfd24,	// (0x0004a41d) uniindi_top_pane_g

0xdbaf,	// (0x000482a8) uniindi_top_pane_t1

0xdbd9,	// (0x000482d2) list_single_uniindi_pane_ParamLimits

0xdbd9,	// (0x000482d2) list_single_uniindi_pane

0xc242,	// (0x0004693b) bg_uniindi_top_pane_g1

0xdbec,	// (0x000482e5) list_single_uniindi_pane_g1

0xdbff,	// (0x000482f8) list_single_uniindi_pane_t1

0x7e31,	// (0x0004252a) control_bg_pane

0xdc24,	// (0x0004831d) bg_sctrl_sk_pane_cp1

0xdc2d,	// (0x00048326) bg_sctrl_sk_pane_cp2

0xdc36,	// (0x0004832f) control_bg_pane_g1

0xdc3f,	// (0x00048338) control_bg_pane_g2

0x0001,

0xfd2d,	// (0x0004a426) control_bg_pane_g

0xbc99,	// (0x00046392) cell_indicator_nsta_pane_g1_ParamLimits

0xbca7,	// (0x000463a0) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa1,	// (0x0004a19a) cell_indicator_nsta_pane_g_ParamLimits

0x554e,	// (0x0003fc47) form2_midp_time_pane_t1_ParamLimits

0x852b,	// (0x00042c24) main_idle_act4_pane_ParamLimits

0x852b,	// (0x00042c24) main_idle_act4_pane

0x67ba,	// (0x00040eb3) popup_tb_extension_window_ParamLimits

0xdae5,	// (0x000481de) tb_ext_find_pane_ParamLimits

0xdae5,	// (0x000481de) tb_ext_find_pane

0xdc48,	// (0x00048341) ai_gene_pane_1_cp1

0x9596,	// (0x00043c8f) ai_gene_pane_2_cp1

0xdc50,	// (0x00048349) list_single_idle_plugin_calendar_pane

0xdc59,	// (0x00048352) list_single_idle_plugin_notification_pane

0xdc62,	// (0x0004835b) list_single_idle_plugin_player_pane

0xdc6b,	// (0x00048364) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdc6b,	// (0x00048364) list_single_idle_plugin_shortcut_pane

0xdc8d,	// (0x00048386) main_idle_act4_pane_t1

0xdc9f,	// (0x00048398) main_idle_act4_pane_t2

0x0001,

0xfd32,	// (0x0004a42b) main_idle_act4_pane_t

0xdcb1,	// (0x000483aa) middle_sk_idle_act4_pane_ParamLimits

0xdcb1,	// (0x000483aa) middle_sk_idle_act4_pane

0xdcc7,	// (0x000483c0) popup_clock_digital_analogue_window_cp2

0xdce1,	// (0x000483da) shortcut_wheel_idle_act4_pane_ParamLimits

0xdce1,	// (0x000483da) shortcut_wheel_idle_act4_pane

0xc242,	// (0x0004693b) shortcut_wheel_idle_act4_pane_g1

0xc242,	// (0x0004693b) shortcut_wheel_idle_act4_pane_g2

0xc242,	// (0x0004693b) shortcut_wheel_idle_act4_pane_g3

0xc242,	// (0x0004693b) shortcut_wheel_idle_act4_pane_g4

0xc242,	// (0x0004693b) shortcut_wheel_idle_act4_pane_g5

0xdcf5,	// (0x000483ee) shortcut_wheel_idle_act4_pane_g6

0xdcfd,	// (0x000483f6) shortcut_wheel_idle_act4_pane_g7

0xdd05,	// (0x000483fe) shortcut_wheel_idle_act4_pane_g8

0xdd0d,	// (0x00048406) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd37,	// (0x0004a430) shortcut_wheel_idle_act4_pane_g

0xc4c0,	// (0x00046bb9) middle_sk_idle_act4_pane_g1_ParamLimits

0xc4c0,	// (0x00046bb9) middle_sk_idle_act4_pane_g1

0xdd71,	// (0x0004846a) middle_sk_idle_act4_pane_g2_ParamLimits

0xdd71,	// (0x0004846a) middle_sk_idle_act4_pane_g2

0x0001,

0xfd5a,	// (0x0004a453) middle_sk_idle_act4_pane_g_ParamLimits

0xfd5a,	// (0x0004a453) middle_sk_idle_act4_pane_g

0xdd7d,	// (0x00048476) middle_sk_idle_act4_pane_t1_ParamLimits

0xdd7d,	// (0x00048476) middle_sk_idle_act4_pane_t1

0xdd9a,	// (0x00048493) grid_ai_shortcut_pane_ParamLimits

0xdd9a,	// (0x00048493) grid_ai_shortcut_pane

0xddb3,	// (0x000484ac) list_highlight_pane_cp16_ParamLimits

0xddb3,	// (0x000484ac) list_highlight_pane_cp16

0xddc0,	// (0x000484b9) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xddc0,	// (0x000484b9) list_single_idle_plugin_shortcut_pane_g1

0xddcc,	// (0x000484c5) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xddcc,	// (0x000484c5) list_single_idle_plugin_shortcut_pane_g2

0xdde4,	// (0x000484dd) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdde4,	// (0x000484dd) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd5f,	// (0x0004a458) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd5f,	// (0x0004a458) list_single_idle_plugin_shortcut_pane_g

0xddf7,	// (0x000484f0) cell_ai_shortcut_pane_ParamLimits

0xddf7,	// (0x000484f0) cell_ai_shortcut_pane

0xde1b,	// (0x00048514) cell_ai_shortcut_pane_g1_ParamLimits

0xde1b,	// (0x00048514) cell_ai_shortcut_pane_g1

0xdc48,	// (0x00048341) ai_gene_pane_1_cp2

0xde3d,	// (0x00048536) ai_gene_pane_2_cp2

0xde45,	// (0x0004853e) list_highlight_pane_cp15

0xde4e,	// (0x00048547) list_single_idle_plugin_calendar_pane_g1

0xde45,	// (0x0004853e) list_highlight_pane_cp17

0xde56,	// (0x0004854f) list_single_idle_plugin_calendar_pane_g1_copy1

0xde5e,	// (0x00048557) list_single_idle_plugin_player_pane_g1

0xb5e6,	// (0x00045cdf) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd66,	// (0x0004a45f) list_single_idle_plugin_player_pane_g

0xde66,	// (0x0004855f) list_single_idle_plugin_player_pane_t1

0xde74,	// (0x0004856d) list_single_idle_plugin_player_pane_t2

0xde82,	// (0x0004857b) list_single_idle_plugin_player_pane_t3

0xde90,	// (0x00048589) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd6b,	// (0x0004a464) list_single_idle_plugin_player_pane_t

0xde9e,	// (0x00048597) wait_bar_pane_cp15

0xdea6,	// (0x0004859f) grid_ai_notification_pane

0xb5e6,	// (0x00045cdf) list_single_idle_plugin_notification_pane_g1

0xdeaf,	// (0x000485a8) cell_ai_notification_pane_ParamLimits

0xdeaf,	// (0x000485a8) cell_ai_notification_pane

0xdebc,	// (0x000485b5) cell_ai_notification_pane_g1

0xdec4,	// (0x000485bd) cell_ai_notification_pane_t1

0xded2,	// (0x000485cb) tb_ext_find_button_pane

0xdeda,	// (0x000485d3) tb_ext_find_pane_g1

0xdee2,	// (0x000485db) tb_ext_find_pane_t1

0x8e3c,	// (0x00043535) tb_ext_find_button_pane_g1

0xdef0,	// (0x000485e9) tb_ext_find_button_pane_g2

0x0001,

0xfd74,	// (0x0004a46d) tb_ext_find_button_pane_g

0xdc8d,	// (0x00048386) main_idle_act4_pane_t1_ParamLimits

0xdc9f,	// (0x00048398) main_idle_act4_pane_t2_ParamLimits

0xfd32,	// (0x0004a42b) main_idle_act4_pane_t_ParamLimits

0xdcc7,	// (0x000483c0) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdcd5,	// (0x000483ce) sat_plugin_idle_act4_pane_ParamLimits

0xdcd5,	// (0x000483ce) sat_plugin_idle_act4_pane

0xdef9,	// (0x000485f2) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdef9,	// (0x000485f2) sat_plugin_idle_act4_pane_t1

0xdf0c,	// (0x00048605) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdf0c,	// (0x00048605) sat_plugin_idle_act4_pane_t2

0xdf1f,	// (0x00048618) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdf1f,	// (0x00048618) sat_plugin_idle_act4_pane_t3

0xdf32,	// (0x0004862b) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdf32,	// (0x0004862b) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd79,	// (0x0004a472) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd79,	// (0x0004a472) sat_plugin_idle_act4_pane_t

0x5a54,	// (0x0004014d) popup_battery_window_ParamLimits

0x5a54,	// (0x0004014d) popup_battery_window

0x81ae,	// (0x000428a7) bg_popup_sub_pane_cp25_ParamLimits

0x81ae,	// (0x000428a7) bg_popup_sub_pane_cp25

0xdf45,	// (0x0004863e) popup_battery_window_g1_ParamLimits

0xdf45,	// (0x0004863e) popup_battery_window_g1

0xdf51,	// (0x0004864a) popup_battery_window_t1_ParamLimits

0xdf51,	// (0x0004864a) popup_battery_window_t1

0xdf63,	// (0x0004865c) popup_battery_window_t2_ParamLimits

0xdf63,	// (0x0004865c) popup_battery_window_t2

0x0001,

0xfd82,	// (0x0004a47b) popup_battery_window_t_ParamLimits

0xfd82,	// (0x0004a47b) popup_battery_window_t

0x9463,	// (0x00043b5c) midp_canvas_pane_ParamLimits

0x94da,	// (0x00043bd3) midp_keypad_pane_ParamLimits

0x94da,	// (0x00043bd3) midp_keypad_pane

0x9773,	// (0x00043e6c) main_midp_pane_ParamLimits

0xbd03,	// (0x000463fc) signal_pane_g2_cp_ParamLimits

0xdf80,	// (0x00048679) aid_size_cell_midp_keypad_ParamLimits

0xdf80,	// (0x00048679) aid_size_cell_midp_keypad

0xdf9a,	// (0x00048693) midp_keyp_game_grid_pane_ParamLimits

0xdf9a,	// (0x00048693) midp_keyp_game_grid_pane

0xdfba,	// (0x000486b3) midp_keyp_rocker_pane_ParamLimits

0xdfba,	// (0x000486b3) midp_keyp_rocker_pane

0xdff3,	// (0x000486ec) midp_keyp_sk_left_pane_ParamLimits

0xdff3,	// (0x000486ec) midp_keyp_sk_left_pane

0xe04d,	// (0x00048746) midp_keyp_sk_right_pane_ParamLimits

0xe04d,	// (0x00048746) midp_keyp_sk_right_pane

0x7e31,	// (0x0004252a) bg_button_pane_cp03

0xe0a7,	// (0x000487a0) midp_keyp_sk_left_pane_g1

0x7e31,	// (0x0004252a) bg_button_pane_cp04

0xe0a7,	// (0x000487a0) midp_keyp_sk_right_pane_g1

0xc242,	// (0x0004693b) midp_keyp_rocker_pane_g1

0xe0b0,	// (0x000487a9) keyp_game_cell_pane_ParamLimits

0xe0b0,	// (0x000487a9) keyp_game_cell_pane

0x7e31,	// (0x0004252a) bg_button_pane_cp02

0xe0c3,	// (0x000487bc) keyp_game_cell_pane_g1

0x5a98,	// (0x00040191) popup_fep_vkb2_window_ParamLimits

0x5a98,	// (0x00040191) popup_fep_vkb2_window

0x7395,	// (0x00041a8e) aid_size_cell_vkb2_ParamLimits

0x7395,	// (0x00041a8e) aid_size_cell_vkb2

0x73e9,	// (0x00041ae2) popup_fep_vkb2_window_g1_ParamLimits

0x73e9,	// (0x00041ae2) popup_fep_vkb2_window_g1

0x7431,	// (0x00041b2a) vkb2_area_bottom_pane_ParamLimits

0x7431,	// (0x00041b2a) vkb2_area_bottom_pane

0x747d,	// (0x00041b76) vkb2_area_keypad_pane_ParamLimits

0x747d,	// (0x00041b76) vkb2_area_keypad_pane

0x74bf,	// (0x00041bb8) vkb2_area_top_pane_ParamLimits

0x74bf,	// (0x00041bb8) vkb2_area_top_pane

0x7539,	// (0x00041c32) vkb2_top_entry_pane_ParamLimits

0x7539,	// (0x00041c32) vkb2_top_entry_pane

0x7563,	// (0x00041c5c) vkb2_top_grid_left_pane_ParamLimits

0x7563,	// (0x00041c5c) vkb2_top_grid_left_pane

0x7581,	// (0x00041c7a) vkb2_top_grid_right_pane_ParamLimits

0x7581,	// (0x00041c7a) vkb2_top_grid_right_pane

0x759f,	// (0x00041c98) vkb2_cell_keypad_pane_ParamLimits

0x759f,	// (0x00041c98) vkb2_cell_keypad_pane

0x7670,	// (0x00041d69) vkb2_area_bottom_grid_pane_ParamLimits

0x7670,	// (0x00041d69) vkb2_area_bottom_grid_pane

0x7696,	// (0x00041d8f) vkb2_area_bottom_pane_g1_ParamLimits

0x7696,	// (0x00041d8f) vkb2_area_bottom_pane_g1

0x76ba,	// (0x00041db3) vkb2_area_bottom_pane_g2_ParamLimits

0x76ba,	// (0x00041db3) vkb2_area_bottom_pane_g2

0x76e8,	// (0x00041de1) vkb2_area_bottom_pane_g3_ParamLimits

0x76e8,	// (0x00041de1) vkb2_area_bottom_pane_g3

0x0002,

0xfd87,	// (0x0004a480) vkb2_area_bottom_pane_g_ParamLimits

0xfd87,	// (0x0004a480) vkb2_area_bottom_pane_g

0x7749,	// (0x00041e42) vkb2_top_cell_left_pane_ParamLimits

0x7749,	// (0x00041e42) vkb2_top_cell_left_pane

0xe0d4,	// (0x000487cd) vkb2_top_entry_pane_g1_ParamLimits

0xe0d4,	// (0x000487cd) vkb2_top_entry_pane_g1

0xe0e2,	// (0x000487db) vkb2_top_entry_pane_t1_ParamLimits

0xe0e2,	// (0x000487db) vkb2_top_entry_pane_t1

0xe114,	// (0x0004880d) vkb2_top_entry_pane_t2_ParamLimits

0xe114,	// (0x0004880d) vkb2_top_entry_pane_t2

0xe146,	// (0x0004883f) vkb2_top_entry_pane_t3_ParamLimits

0xe146,	// (0x0004883f) vkb2_top_entry_pane_t3

0x0002,

0xfd8e,	// (0x0004a487) vkb2_top_entry_pane_t_ParamLimits

0xfd8e,	// (0x0004a487) vkb2_top_entry_pane_t

0x7796,	// (0x00041e8f) vkb2_top_grid_right_pane_g1_ParamLimits

0x7796,	// (0x00041e8f) vkb2_top_grid_right_pane_g1

0x77ac,	// (0x00041ea5) vkb2_top_grid_right_pane_g2_ParamLimits

0x77ac,	// (0x00041ea5) vkb2_top_grid_right_pane_g2

0x77c4,	// (0x00041ebd) vkb2_top_grid_right_pane_g3_ParamLimits

0x77c4,	// (0x00041ebd) vkb2_top_grid_right_pane_g3

0x77dc,	// (0x00041ed5) vkb2_top_grid_right_pane_g4_ParamLimits

0x77dc,	// (0x00041ed5) vkb2_top_grid_right_pane_g4

0x0003,

0xfd95,	// (0x0004a48e) vkb2_top_grid_right_pane_g_ParamLimits

0xfd95,	// (0x0004a48e) vkb2_top_grid_right_pane_g

0x77f2,	// (0x00041eeb) vkb2_top_cell_left_pane_g1

0x7809,	// (0x00041f02) vkb2_cell_keypad_pane_g1_ParamLimits

0x7809,	// (0x00041f02) vkb2_cell_keypad_pane_g1

0xe16a,	// (0x00048863) vkb2_cell_keypad_pane_t1_ParamLimits

0xe16a,	// (0x00048863) vkb2_cell_keypad_pane_t1

0x7817,	// (0x00041f10) vkb2_cell_bottom_grid_pane_ParamLimits

0x7817,	// (0x00041f10) vkb2_cell_bottom_grid_pane

0x7850,	// (0x00041f49) vkb2_cell_bottom_grid_pane_g1

0xdd15,	// (0x0004840e) aid_call2_pane_cp02

0xdd1d,	// (0x00048416) aid_call_pane_cp02

0xdd25,	// (0x0004841e) clock_digital_number_pane_cp10

0xdd2d,	// (0x00048426) clock_digital_number_pane_cp11

0xdd35,	// (0x0004842e) clock_digital_number_pane_cp12

0xdd3d,	// (0x00048436) clock_digital_number_pane_cp13

0xdd45,	// (0x0004843e) clock_digital_separator_pane_cp10

0x8e3c,	// (0x00043535) popup_clock_digital_analogue_window_cp2_g1

0x8e3c,	// (0x00043535) popup_clock_digital_analogue_window_cp2_g2

0xdd4d,	// (0x00048446) popup_clock_digital_analogue_window_cp2_g3

0x8e3c,	// (0x00043535) popup_clock_digital_analogue_window_cp2_g4

0xdd4d,	// (0x00048446) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd4a,	// (0x0004a443) popup_clock_digital_analogue_window_cp2_g

0xdd55,	// (0x0004844e) popup_clock_digital_analogue_window_cp2_t1

0xdd63,	// (0x0004845c) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd55,	// (0x0004a44e) popup_clock_digital_analogue_window_cp2_t

0xc242,	// (0x0004693b) clock_digital_number_pane_cp10_g1

0xc242,	// (0x0004693b) clock_digital_number_pane_cp10_g2

0x0001,

0xfb3d,	// (0x0004a236) clock_digital_number_pane_cp10_g

0xc242,	// (0x0004693b) clock_digital_separator_pane_cp10_g1

0xc242,	// (0x0004693b) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb3d,	// (0x0004a236) clock_digital_separator_pane_cp10_g

0xdb91,	// (0x0004828a) uniindi_top_pane_g3

0xdba2,	// (0x0004829b) uniindi_top_pane_g4

0x762a,	// (0x00041d23) vkb2_row_keypad_pane_ParamLimits

0x762a,	// (0x00041d23) vkb2_row_keypad_pane

0x786c,	// (0x00041f65) vkb2_cell_t_keypad_pane_ParamLimits

0x786c,	// (0x00041f65) vkb2_cell_t_keypad_pane

0x787c,	// (0x00041f75) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x787c,	// (0x00041f75) vkb2_cell_t_keypad_pane_cp08

0x788f,	// (0x00041f88) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x788f,	// (0x00041f88) vkb2_cell_t_keypad_pane_cp09

0x78a3,	// (0x00041f9c) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x78a3,	// (0x00041f9c) vkb2_cell_t_keypad_pane_cp01

0x78b4,	// (0x00041fad) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x78b4,	// (0x00041fad) vkb2_cell_t_keypad_pane_cp02

0x78c5,	// (0x00041fbe) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x78c5,	// (0x00041fbe) vkb2_cell_t_keypad_pane_cp03

0x78d6,	// (0x00041fcf) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x78d6,	// (0x00041fcf) vkb2_cell_t_keypad_pane_cp04

0x78e7,	// (0x00041fe0) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x78e7,	// (0x00041fe0) vkb2_cell_t_keypad_pane_cp05

0x78f8,	// (0x00041ff1) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x78f8,	// (0x00041ff1) vkb2_cell_t_keypad_pane_cp06

0x7909,	// (0x00042002) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x7909,	// (0x00042002) vkb2_cell_t_keypad_pane_cp07

0x791a,	// (0x00042013) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x791a,	// (0x00042013) vkb2_cell_t_keypad_pane_cp10

0xc4c0,	// (0x00046bb9) vkb2_cell_t_keypad_pane_g1

0xe181,	// (0x0004887a) vkb2_cell_t_keypad_pane_t1

0x7e31,	// (0x0004252a) popup_grid_graphic2_window

0xe193,	// (0x0004888c) aid_size_cell_graphic2_ParamLimits

0xe193,	// (0x0004888c) aid_size_cell_graphic2

0xe1cb,	// (0x000488c4) bg_popup_window_pane_cp21_ParamLimits

0xe1cb,	// (0x000488c4) bg_popup_window_pane_cp21

0xe1d9,	// (0x000488d2) graphic2_pages_pane_ParamLimits

0xe1d9,	// (0x000488d2) graphic2_pages_pane

0xe21f,	// (0x00048918) grid_graphic2_control_pane_ParamLimits

0xe21f,	// (0x00048918) grid_graphic2_control_pane

0xe25d,	// (0x00048956) grid_graphic2_pane_ParamLimits

0xe25d,	// (0x00048956) grid_graphic2_pane

0xe2d1,	// (0x000489ca) cell_graphic2_pane

0x7e31,	// (0x0004252a) main_comp_mode_pane

0xd3ff,	// (0x00047af8) list_ai3_gene_pane_ParamLimits

0xd7d3,	// (0x00047ecc) bg_popup_window_pane_cp19_ParamLimits

0xd7df,	// (0x00047ed8) bg_touch_area_indi_pane_ParamLimits

0xd7df,	// (0x00047ed8) bg_touch_area_indi_pane

0xd7f5,	// (0x00047eee) bg_touch_area_indi_pane_cp01_ParamLimits

0xd7f5,	// (0x00047eee) bg_touch_area_indi_pane_cp01

0xd80b,	// (0x00047f04) bg_touch_area_indi_pane_cp02_ParamLimits

0xd80b,	// (0x00047f04) bg_touch_area_indi_pane_cp02

0xd821,	// (0x00047f1a) bg_touch_area_indi_pane_cp03_ParamLimits

0xd821,	// (0x00047f1a) bg_touch_area_indi_pane_cp03

0xd83b,	// (0x00047f34) popup_slider_window_g1_ParamLimits

0xd857,	// (0x00047f50) popup_slider_window_g2_ParamLimits

0xd873,	// (0x00047f6c) popup_slider_window_g3_ParamLimits

0xfcdf,	// (0x0004a3d8) popup_slider_window_g_ParamLimits

0xd8d9,	// (0x00047fd2) popup_slider_window_t1_ParamLimits

0xd94d,	// (0x00048046) small_volume_slider_vertical_pane_ParamLimits

0xe2d1,	// (0x000489ca) cell_graphic2_pane_ParamLimits

0xe320,	// (0x00048a19) bg_button_pane_cp10_ParamLimits

0xe320,	// (0x00048a19) bg_button_pane_cp10

0xe333,	// (0x00048a2c) bg_button_pane_cp11_ParamLimits

0xe333,	// (0x00048a2c) bg_button_pane_cp11

0xe346,	// (0x00048a3f) graphic2_pages_pane_g1_ParamLimits

0xe346,	// (0x00048a3f) graphic2_pages_pane_g1

0xe361,	// (0x00048a5a) graphic2_pages_pane_g2_ParamLimits

0xe361,	// (0x00048a5a) graphic2_pages_pane_g2

0x0001,

0xfda3,	// (0x0004a49c) graphic2_pages_pane_g_ParamLimits

0xfda3,	// (0x0004a49c) graphic2_pages_pane_g

0xe379,	// (0x00048a72) graphic2_pages_pane_t1_ParamLimits

0xe379,	// (0x00048a72) graphic2_pages_pane_t1

0xe391,	// (0x00048a8a) cell_graphic2_control_pane_ParamLimits

0xe391,	// (0x00048a8a) cell_graphic2_control_pane

0xe3af,	// (0x00048aa8) cell_graphic2_pane_g1_ParamLimits

0xe3af,	// (0x00048aa8) cell_graphic2_pane_g1

0xe3bc,	// (0x00048ab5) cell_graphic2_pane_g2_ParamLimits

0xe3bc,	// (0x00048ab5) cell_graphic2_pane_g2

0xe3c9,	// (0x00048ac2) cell_graphic2_pane_g3_ParamLimits

0xe3c9,	// (0x00048ac2) cell_graphic2_pane_g3

0xe3d6,	// (0x00048acf) cell_graphic2_pane_g4_ParamLimits

0xe3d6,	// (0x00048acf) cell_graphic2_pane_g4

0xe3e3,	// (0x00048adc) cell_graphic2_pane_g5_ParamLimits

0xe3e3,	// (0x00048adc) cell_graphic2_pane_g5

0x0004,

0xfda8,	// (0x0004a4a1) cell_graphic2_pane_g_ParamLimits

0xfda8,	// (0x0004a4a1) cell_graphic2_pane_g

0xe3fe,	// (0x00048af7) cell_graphic2_pane_t1_ParamLimits

0xe3fe,	// (0x00048af7) cell_graphic2_pane_t1

0x9d17,	// (0x00044410) grid_highlight_pane_cp11_ParamLimits

0x9d17,	// (0x00044410) grid_highlight_pane_cp11

0x81ae,	// (0x000428a7) bg_button_pane_cp05

0xe435,	// (0x00048b2e) cell_graphic2_control_pane_g1

0xc242,	// (0x0004693b) bg_touch_area_indi_pane_g1

0xe45d,	// (0x00048b56) aid_cmod_rocker_key_size

0xe467,	// (0x00048b60) aid_cmode_itu_key_size

0xe471,	// (0x00048b6a) main_cmode_video_pane

0xe47b,	// (0x00048b74) main_comp_mode_itu_pane

0xe487,	// (0x00048b80) main_comp_mode_rocker_pane

0xe493,	// (0x00048b8c) cell_cmode_rocker_pane_ParamLimits

0xe493,	// (0x00048b8c) cell_cmode_rocker_pane

0xe4a5,	// (0x00048b9e) cell_cmode_itu_pane_ParamLimits

0xe4a5,	// (0x00048b9e) cell_cmode_itu_pane

0x87c6,	// (0x00042ebf) bg_button_pane_cp06_ParamLimits

0x87c6,	// (0x00042ebf) bg_button_pane_cp06

0xc4c0,	// (0x00046bb9) cell_cmode_rocker_pane_g1_ParamLimits

0xc4c0,	// (0x00046bb9) cell_cmode_rocker_pane_g1

0xd9f1,	// (0x000480ea) cell_cmode_rocker_pane_g2_ParamLimits

0xd9f1,	// (0x000480ea) cell_cmode_rocker_pane_g2

0x0001,

0xfdb8,	// (0x0004a4b1) cell_cmode_rocker_pane_g_ParamLimits

0xfdb8,	// (0x0004a4b1) cell_cmode_rocker_pane_g

0x7e31,	// (0x0004252a) bg_button_pane_cp07

0xe4ba,	// (0x00048bb3) cell_cmode_itu_pane_g1

0xe4c3,	// (0x00048bbc) cell_cmode_itu_pane_t1

0xe4d1,	// (0x00048bca) cell_cmode_itu_pane_t2

0x0001,

0xfdbd,	// (0x0004a4b6) cell_cmode_itu_pane_t

0xdc14,	// (0x0004830d) aid_touch_ctrl_left

0xdc1c,	// (0x00048315) aid_touch_ctrl_right

0x7e31,	// (0x0004252a) compa_mode_pane

0xe4df,	// (0x00048bd8) aid_cmod_rocker_key_size_cp

0xe4e9,	// (0x00048be2) aid_cmode_itu_key_size_cp

0xe4f3,	// (0x00048bec) compa_mode_pane_g1

0xe4fb,	// (0x00048bf4) compa_mode_pane_g2

0xe503,	// (0x00048bfc) compa_mode_pane_g3

0x0002,

0xfdc2,	// (0x0004a4bb) compa_mode_pane_g

0xe50b,	// (0x00048c04) main_comp_mode_itu_pane_cp

0xe513,	// (0x00048c0c) main_comp_mode_rocker_pane_cp

0xe51b,	// (0x00048c14) cell_cmode_itu_pane_cp_ParamLimits

0xe51b,	// (0x00048c14) cell_cmode_itu_pane_cp

0xe530,	// (0x00048c29) cell_cmode_rocker_pane_cp_ParamLimits

0xe530,	// (0x00048c29) cell_cmode_rocker_pane_cp

0x87c6,	// (0x00042ebf) bg_button_pane_cp06_cp_ParamLimits

0x87c6,	// (0x00042ebf) bg_button_pane_cp06_cp

0xc4c0,	// (0x00046bb9) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc4c0,	// (0x00046bb9) cell_cmode_rocker_pane_g1_cp

0xc242,	// (0x0004693b) cell_cmode_rocker_pane_g2_cp

0x7e31,	// (0x0004252a) bg_button_pane_cp07_cp

0xb1de,	// (0x000458d7) cell_cmode_itu_pane_g1_cp

0xe542,	// (0x00048c3b) cell_cmode_itu_pane_t1_cp

0xe542,	// (0x00048c3b) cell_cmode_itu_pane_t2_cp

0xb1cb,	// (0x000458c4) settings_code_pane_cp2

0x7f25,	// (0x0004261e) bg_popup_window_pane_cp3_ParamLimits

0x83ae,	// (0x00042aa7) heading_pane_cp3_ParamLimits

0x83ba,	// (0x00042ab3) listscroll_popup_graphic_pane_ParamLimits

0x6e66,	// (0x0004155f) fep_hwr_aid_pane_ParamLimits

0x730c,	// (0x00041a05) aid_touch_sctrl_top_ParamLimits

0x7319,	// (0x00041a12) sctrl_sk_top_pane_g1_ParamLimits

0xc4c0,	// (0x00046bb9) sctrl_sk_top_pane_g2_ParamLimits

0xfcf8,	// (0x0004a3f1) sctrl_sk_top_pane_g_ParamLimits

0x7326,	// (0x00041a1f) sctrl_sk_top_pane_t1_ParamLimits

0x730c,	// (0x00041a05) aid_touch_sctrl_bottom_ParamLimits

0x7326,	// (0x00041a1f) sctrl_sk_bottom_pane_t1_ParamLimits

0xdb5d,	// (0x00048256) aid_area_touch_clock

0x7501,	// (0x00041bfa) aid_vkb2_area_top_pane_cell_ParamLimits

0x7501,	// (0x00041bfa) aid_vkb2_area_top_pane_cell

0x764c,	// (0x00041d45) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x764c,	// (0x00041d45) aid_vkb2_area_bottom_pane_cell

0xe0cc,	// (0x000487c5) popup_char_count_window

0xe550,	// (0x00048c49) popup_char_count_window_g1

0xe559,	// (0x00048c52) popup_char_count_window_g2

0xe562,	// (0x00048c5b) popup_char_count_window_g3

0x0002,

0xfdc9,	// (0x0004a4c2) popup_char_count_window_g

0xe56b,	// (0x00048c64) popup_char_count_window_t1

0x73c7,	// (0x00041ac0) popup_fep_char_preview_window_ParamLimits

0x73c7,	// (0x00041ac0) popup_fep_char_preview_window

0x751f,	// (0x00041c18) vkb2_top_candi_pane_ParamLimits

0x751f,	// (0x00041c18) vkb2_top_candi_pane

0xe579,	// (0x00048c72) cell_vkb2_top_candi_pane_ParamLimits

0xe579,	// (0x00048c72) cell_vkb2_top_candi_pane

0xa32a,	// (0x00044a23) bg_popup_fep_char_preview_window_ParamLimits

0xa32a,	// (0x00044a23) bg_popup_fep_char_preview_window

0x792f,	// (0x00042028) popup_fep_char_preview_window_t1_ParamLimits

0x792f,	// (0x00042028) popup_fep_char_preview_window_t1

0xe5c6,	// (0x00048cbf) bg_popup_fep_char_preview_window_g1

0xe5ce,	// (0x00048cc7) bg_popup_fep_char_preview_window_g2

0xe5d6,	// (0x00048ccf) bg_popup_fep_char_preview_window_g3

0xe5de,	// (0x00048cd7) bg_popup_fep_char_preview_window_g4

0xe5e6,	// (0x00048cdf) bg_popup_fep_char_preview_window_g5

0x7969,	// (0x00042062) bg_popup_fep_char_preview_window_g6

0xe5ee,	// (0x00048ce7) bg_popup_fep_char_preview_window_g7

0xe5f6,	// (0x00048cef) bg_popup_fep_char_preview_window_g8

0xe5fe,	// (0x00048cf7) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdd0,	// (0x0004a4c9) bg_popup_fep_char_preview_window_g

0xc4c0,	// (0x00046bb9) cell_vkb2_top_candi_pane_g1_ParamLimits

0xc4c0,	// (0x00046bb9) cell_vkb2_top_candi_pane_g1

0xc7e3,	// (0x00046edc) cell_vkb2_top_candi_pane_g2_ParamLimits

0xc7e3,	// (0x00046edc) cell_vkb2_top_candi_pane_g2

0xc804,	// (0x00046efd) cell_vkb2_top_candi_pane_g3_ParamLimits

0xc804,	// (0x00046efd) cell_vkb2_top_candi_pane_g3

0x7971,	// (0x0004206a) cell_vkb2_top_candi_pane_g4_ParamLimits

0x7971,	// (0x0004206a) cell_vkb2_top_candi_pane_g4

0xe606,	// (0x00048cff) cell_vkb2_top_candi_pane_g5_ParamLimits

0xe606,	// (0x00048cff) cell_vkb2_top_candi_pane_g5

0xd9f1,	// (0x000480ea) cell_vkb2_top_candi_pane_g6_ParamLimits

0xd9f1,	// (0x000480ea) cell_vkb2_top_candi_pane_g6

0x0005,

0xfde3,	// (0x0004a4dc) cell_vkb2_top_candi_pane_g_ParamLimits

0xfde3,	// (0x0004a4dc) cell_vkb2_top_candi_pane_g

0x7992,	// (0x0004208b) cell_vkb2_top_candi_pane_t1

0x6bfb,	// (0x000412f4) aid_size_touch_slider_mark_ParamLimits

0x6bfb,	// (0x000412f4) aid_size_touch_slider_mark

0xe20f,	// (0x00048908) grid_graphic2_catg_pane_ParamLimits

0xe20f,	// (0x00048908) grid_graphic2_catg_pane

0xe2ad,	// (0x000489a6) popup_grid_graphic2_window_t1_ParamLimits

0xe2ad,	// (0x000489a6) popup_grid_graphic2_window_t1

0xe2bf,	// (0x000489b8) popup_grid_graphic2_window_t2_ParamLimits

0xe2bf,	// (0x000489b8) popup_grid_graphic2_window_t2

0x0001,

0xfd9e,	// (0x0004a497) popup_grid_graphic2_window_t_ParamLimits

0xfd9e,	// (0x0004a497) popup_grid_graphic2_window_t

0x81ae,	// (0x000428a7) bg_button_pane_cp05_ParamLimits

0xe435,	// (0x00048b2e) cell_graphic2_control_pane_g1_ParamLimits

0xe627,	// (0x00048d20) cell_graphic2_catg_pane_ParamLimits

0xe627,	// (0x00048d20) cell_graphic2_catg_pane

0x7e31,	// (0x0004252a) bg_button_pane_cp12

0xe639,	// (0x00048d32) cell_graphic2_catg_pane_g1

0xdb29,	// (0x00048222) cell_tb_ext_pane_t1_ParamLimits

0x7769,	// (0x00041e62) vkb2_top_cell_right_narrow_pane_ParamLimits

0x7769,	// (0x00041e62) vkb2_top_cell_right_narrow_pane

0x7781,	// (0x00041e7a) vkb2_top_cell_right_wide_pane_ParamLimits

0x7781,	// (0x00041e7a) vkb2_top_cell_right_wide_pane

0x6e58,	// (0x00041551) bg_vkb2_func_pane_ParamLimits

0x6e58,	// (0x00041551) bg_vkb2_func_pane

0x77f2,	// (0x00041eeb) vkb2_top_cell_left_pane_g1_ParamLimits

0x6e58,	// (0x00041551) bg_vkb2_fuc_pane_cp03_ParamLimits

0x6e58,	// (0x00041551) bg_vkb2_fuc_pane_cp03

0x7850,	// (0x00041f49) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x9cab,	// (0x000443a4) bg_vkb2_func_pane_g1

0x9cb3,	// (0x000443ac) bg_vkb2_func_pane_g2

0x9cc3,	// (0x000443bc) bg_vkb2_func_pane_g3

0x9cbb,	// (0x000443b4) bg_vkb2_func_pane_g4

0x9ccb,	// (0x000443c4) bg_vkb2_func_pane_g5

0x9cd3,	// (0x000443cc) bg_vkb2_func_pane_g6

0x9cdb,	// (0x000443d4) bg_vkb2_func_pane_g7

0x9ce3,	// (0x000443dc) bg_vkb2_func_pane_g8

0x9ca3,	// (0x0004439c) bg_vkb2_func_pane_g9

0x0008,

0xfdf0,	// (0x0004a4e9) bg_vkb2_func_pane_g

0x6e58,	// (0x00041551) bg_vkb2_fuc_pane_cp01_ParamLimits

0x6e58,	// (0x00041551) bg_vkb2_fuc_pane_cp01

0x77f2,	// (0x00041eeb) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x77f2,	// (0x00041eeb) vkb2_top_cell_right_wide_pane_g1

0x6e58,	// (0x00041551) bg_vkb2_fuc_pane_cp02_ParamLimits

0x6e58,	// (0x00041551) bg_vkb2_fuc_pane_cp02

0x7850,	// (0x00041f49) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x7850,	// (0x00041f49) vkb2_top_cell_right_narrow_pane_g1

0xd74d,	// (0x00047e46) aid_touch_area_decrease_ParamLimits

0xd74d,	// (0x00047e46) aid_touch_area_decrease

0xd771,	// (0x00047e6a) aid_touch_area_increase_ParamLimits

0xd771,	// (0x00047e6a) aid_touch_area_increase

0xd789,	// (0x00047e82) aid_touch_area_mute_ParamLimits

0xd789,	// (0x00047e82) aid_touch_area_mute

0xd7a5,	// (0x00047e9e) aid_touch_area_slider_ParamLimits

0xd7a5,	// (0x00047e9e) aid_touch_area_slider

0xd88f,	// (0x00047f88) popup_slider_window_g4_ParamLimits

0xd88f,	// (0x00047f88) popup_slider_window_g4

0xd8a7,	// (0x00047fa0) popup_slider_window_g5_ParamLimits

0xd8a7,	// (0x00047fa0) popup_slider_window_g5

0xd8c9,	// (0x00047fc2) popup_slider_window_g6_ParamLimits

0xd8c9,	// (0x00047fc2) popup_slider_window_g6

0xd907,	// (0x00048000) popup_slider_window_t2_ParamLimits

0xd907,	// (0x00048000) popup_slider_window_t2

0x0001,

0xfcec,	// (0x0004a3e5) popup_slider_window_t_ParamLimits

0xfcec,	// (0x0004a3e5) popup_slider_window_t

0xd91f,	// (0x00048018) slider_pane_ParamLimits

0xd91f,	// (0x00048018) slider_pane

0xe642,	// (0x00048d3b) slider_pane_g1_ParamLimits

0xe642,	// (0x00048d3b) slider_pane_g1

0xe656,	// (0x00048d4f) slider_pane_g2_ParamLimits

0xe656,	// (0x00048d4f) slider_pane_g2

0xe66c,	// (0x00048d65) slider_pane_g3_ParamLimits

0xe66c,	// (0x00048d65) slider_pane_g3

0x0003,

0xfe03,	// (0x0004a4fc) slider_pane_g_ParamLimits

0xfe03,	// (0x0004a4fc) slider_pane_g

0x6816,	// (0x00040f0f) popup_tb_float_extension_window_ParamLimits

0x6816,	// (0x00040f0f) popup_tb_float_extension_window

0xe698,	// (0x00048d91) aid_size_cell_tb_float_ext

0x7e31,	// (0x0004252a) bg_popup_sub_window_cp28

0xe6a4,	// (0x00048d9d) grid_tb_float_ext_pane

0xe6ae,	// (0x00048da7) cell_tb_float_ext_pane_ParamLimits

0xe6ae,	// (0x00048da7) cell_tb_float_ext_pane

0xe6c8,	// (0x00048dc1) cell_tb_float_ext_pane_g1

0xe6d1,	// (0x00048dca) grid_highlight_pane_cp12

0x6f99,	// (0x00041692) cell_last_hwr_side_pane_ParamLimits

0x6f99,	// (0x00041692) cell_last_hwr_side_pane

0xc242,	// (0x0004693b) cell_last_hwr_side_pane_g1

0xe6da,	// (0x00048dd3) cell_last_hwr_side_pane_g2

0x0001,

0xfe0c,	// (0x0004a505) cell_last_hwr_side_pane_g

0x7718,	// (0x00041e11) vkb2_area_bottom_space_btn_pane_ParamLimits

0x7718,	// (0x00041e11) vkb2_area_bottom_space_btn_pane

0xc4c0,	// (0x00046bb9) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xe181,	// (0x0004887a) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x7992,	// (0x0004208b) cell_vkb2_top_candi_pane_t1_ParamLimits

0x79b1,	// (0x000420aa) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x79b1,	// (0x000420aa) vkb2_area_bottom_space_btn_pane_g1

0x79eb,	// (0x000420e4) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x79eb,	// (0x000420e4) vkb2_area_bottom_space_btn_pane_g2

0x7a21,	// (0x0004211a) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x7a21,	// (0x0004211a) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe11,	// (0x0004a50a) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe11,	// (0x0004a50a) vkb2_area_bottom_space_btn_pane_g

0x6f0d,	// (0x00041606) cel_fep_hwr_func_pane_ParamLimits

0x6f0d,	// (0x00041606) cel_fep_hwr_func_pane

0x6f49,	// (0x00041642) cell_hwr_side_button_pane_ParamLimits

0x6f49,	// (0x00041642) cell_hwr_side_button_pane

0xdb5d,	// (0x00048256) aid_area_touch_clock_ParamLimits

0x81ae,	// (0x000428a7) bg_uniindi_top_pane_ParamLimits

0xdb6f,	// (0x00048268) uniindi_top_pane_g1_ParamLimits

0xdb85,	// (0x0004827e) uniindi_top_pane_g2_ParamLimits

0xdb91,	// (0x0004828a) uniindi_top_pane_g3_ParamLimits

0xdba2,	// (0x0004829b) uniindi_top_pane_g4_ParamLimits

0xfd24,	// (0x0004a41d) uniindi_top_pane_g_ParamLimits

0xdbaf,	// (0x000482a8) uniindi_top_pane_t1_ParamLimits

0x81ae,	// (0x000428a7) bg_vkb2_func_pane_cp01_ParamLimits

0x81ae,	// (0x000428a7) bg_vkb2_func_pane_cp01

0xe6e3,	// (0x00048ddc) cel_fep_hwr_func_pane_g1_ParamLimits

0xe6e3,	// (0x00048ddc) cel_fep_hwr_func_pane_g1

0x81ae,	// (0x000428a7) bg_vkb2_func_pane_cp02_ParamLimits

0x81ae,	// (0x000428a7) bg_vkb2_func_pane_cp02

0xe6e3,	// (0x00048ddc) cell_hwr_side_button_pane_g1_ParamLimits

0xe6e3,	// (0x00048ddc) cell_hwr_side_button_pane_g1

0x9b24,	// (0x0004421d) status_pane_g4_ParamLimits

0x9b24,	// (0x0004421d) status_pane_g4

0x9b3e,	// (0x00044237) status_pane_t1

0xbf87,	// (0x00046680) form2_midp_gauge_slider_cont_pane

0xbf8f,	// (0x00046688) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbfa1,	// (0x0004669a) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbfb3,	// (0x000466ac) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf0,	// (0x0004a1e9) form2_midp_gauge_slider_pane_t_ParamLimits

0xbfc5,	// (0x000466be) form2_midp_slider_pane_ParamLimits

0x7387,	// (0x00041a80) aid_size_cell_func_vkb2_ParamLimits

0x7387,	// (0x00041a80) aid_size_cell_func_vkb2

0xe684,	// (0x00048d7d) slider_pane_g4_ParamLimits

0xe684,	// (0x00048d7d) slider_pane_g4

0x7a6b,	// (0x00042164) form2_midp_gauge_slider_pane_t2_cp01

0x7a79,	// (0x00042172) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x7a79,	// (0x00042172) form2_midp_gauge_slider_pane_t3_cp01

0x7a96,	// (0x0004218f) form2_midp_slider_pane_cp01

0x7e31,	// (0x0004252a) navi_smil_pane

0xe71c,	// (0x00048e15) navi_smil_pane_g1

0xe724,	// (0x00048e1d) navi_smil_pane_t1

0xe6f1,	// (0x00048dea) form2_midp_slider_pane_g1

0xe6fa,	// (0x00048df3) form2_midp_slider_pane_g2

0xe702,	// (0x00048dfb) form2_midp_slider_pane_g3

0xe6f1,	// (0x00048dea) form2_midp_slider_pane_g4

0xe70a,	// (0x00048e03) form2_midp_slider_pane_g5

0x0004,

0xfe1a,	// (0x0004a513) form2_midp_slider_pane_g

0x7a5b,	// (0x00042154) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x7a5b,	// (0x00042154) vkb2_area_bottom_space_btn_pane_g4

0x9947,	// (0x00044040) lc0_navi_pane_ParamLimits

0x9947,	// (0x00044040) lc0_navi_pane

0x99bd,	// (0x000440b6) lc0_stat_indi_pane_ParamLimits

0x99bd,	// (0x000440b6) lc0_stat_indi_pane

0x99d4,	// (0x000440cd) ls0_title_pane_ParamLimits

0x99d4,	// (0x000440cd) ls0_title_pane

0x87c6,	// (0x00042ebf) bg_popup_sub_pane_cp14_ParamLimits

0xdb44,	// (0x0004823d) list_uniindi_pane_ParamLimits

0xdb50,	// (0x00048249) uniindi_top_pane_ParamLimits

0xdbec,	// (0x000482e5) list_single_uniindi_pane_g1_ParamLimits

0xdbff,	// (0x000482f8) list_single_uniindi_pane_t1_ParamLimits

0x7a9f,	// (0x00042198) lc0_stat_clock_pane_ParamLimits

0x7a9f,	// (0x00042198) lc0_stat_clock_pane

0xe732,	// (0x00048e2b) lc0_stat_indi_pane_g1_ParamLimits

0xe732,	// (0x00048e2b) lc0_stat_indi_pane_g1

0xe73f,	// (0x00048e38) lc0_stat_indi_pane_g2_ParamLimits

0xe73f,	// (0x00048e38) lc0_stat_indi_pane_g2

0x0001,

0xfe25,	// (0x0004a51e) lc0_stat_indi_pane_g_ParamLimits

0xfe25,	// (0x0004a51e) lc0_stat_indi_pane_g

0x7aac,	// (0x000421a5) lc0_uni_indicator_pane_ParamLimits

0x7aac,	// (0x000421a5) lc0_uni_indicator_pane

0xe74c,	// (0x00048e45) ls0_title_pane_g1_ParamLimits

0xe74c,	// (0x00048e45) ls0_title_pane_g1

0xe760,	// (0x00048e59) ls0_title_pane_t1_ParamLimits

0xe760,	// (0x00048e59) ls0_title_pane_t1

0x7ab9,	// (0x000421b2) lc0_uni_indicator_pane_g1_ParamLimits

0x7ab9,	// (0x000421b2) lc0_uni_indicator_pane_g1

0xe796,	// (0x00048e8f) lc0_stat_clock_pane_t1

0x7e31,	// (0x0004252a) main_ai5_pane

0xe7a4,	// (0x00048e9d) ai5_sk_pane_ParamLimits

0xe7a4,	// (0x00048e9d) ai5_sk_pane

0xe7b1,	// (0x00048eaa) cell_ai5_widget_pane_ParamLimits

0xe7b1,	// (0x00048eaa) cell_ai5_widget_pane

0xe86c,	// (0x00048f65) aid_size_cell_widget_grid

0xe882,	// (0x00048f7b) bg_ai5_widget_pane_ParamLimits

0xe882,	// (0x00048f7b) bg_ai5_widget_pane

0xe8fa,	// (0x00048ff3) cell_ai5_widget_pane_g2

0xe90e,	// (0x00049007) cell_ai5_widget_pane_g3

0xe928,	// (0x00049021) cell_ai5_widget_pane_g4

0xe938,	// (0x00049031) cell_ai5_widget_pane_g5

0xe948,	// (0x00049041) cell_ai5_widget_pane_g6

0xe954,	// (0x0004904d) cell_ai5_widget_pane_g7

0xe99c,	// (0x00049095) cell_ai5_widget_pane_t1_ParamLimits

0xe99c,	// (0x00049095) cell_ai5_widget_pane_t1

0xe9b9,	// (0x000490b2) cell_ai5_widget_pane_t2_ParamLimits

0xe9b9,	// (0x000490b2) cell_ai5_widget_pane_t2

0xe9d1,	// (0x000490ca) cell_ai5_widget_pane_t3_ParamLimits

0xe9d1,	// (0x000490ca) cell_ai5_widget_pane_t3

0xe9e9,	// (0x000490e2) cell_ai5_widget_pane_t4_ParamLimits

0xe9e9,	// (0x000490e2) cell_ai5_widget_pane_t4

0xea0f,	// (0x00049108) cell_ai5_widget_pane_t5_ParamLimits

0xea0f,	// (0x00049108) cell_ai5_widget_pane_t5

0xea2f,	// (0x00049128) cell_ai5_widget_pane_t6_ParamLimits

0xea2f,	// (0x00049128) cell_ai5_widget_pane_t6

0xea41,	// (0x0004913a) cell_ai5_widget_pane_t7_ParamLimits

0xea41,	// (0x0004913a) cell_ai5_widget_pane_t7

0xea5a,	// (0x00049153) cell_ai5_widget_pane_t8_ParamLimits

0xea5a,	// (0x00049153) cell_ai5_widget_pane_t8

0x0009,

0x000b,	// (0x0003a704) cell_ai5_widget_pane_t_ParamLimits

0x000b,	// (0x0003a704) cell_ai5_widget_pane_t

0xeab9,	// (0x000491b2) grid_ai5_widget_pane

0x87c6,	// (0x00042ebf) highlight_cell_ai5_widget_pane_ParamLimits

0x87c6,	// (0x00042ebf) highlight_cell_ai5_widget_pane

0xead0,	// (0x000491c9) ai5_sk_left_pane

0xeada,	// (0x000491d3) ai5_sk_middle_pane

0xeae4,	// (0x000491dd) ai5_sk_right_pane

0xeaee,	// (0x000491e7) bg_ai5_widget_pane_g1_ParamLimits

0xeaee,	// (0x000491e7) bg_ai5_widget_pane_g1

0xeafa,	// (0x000491f3) bg_ai5_widget_pane_g2_ParamLimits

0xeafa,	// (0x000491f3) bg_ai5_widget_pane_g2

0xeb06,	// (0x000491ff) bg_ai5_widget_pane_g3_ParamLimits

0xeb06,	// (0x000491ff) bg_ai5_widget_pane_g3

0xeb12,	// (0x0004920b) bg_ai5_widget_pane_g4_ParamLimits

0xeb12,	// (0x0004920b) bg_ai5_widget_pane_g4

0xeb1e,	// (0x00049217) bg_ai5_widget_pane_g5_ParamLimits

0xeb1e,	// (0x00049217) bg_ai5_widget_pane_g5

0xeb2a,	// (0x00049223) bg_ai5_widget_pane_g6_ParamLimits

0xeb2a,	// (0x00049223) bg_ai5_widget_pane_g6

0xeb36,	// (0x0004922f) bg_ai5_widget_pane_g7_ParamLimits

0xeb36,	// (0x0004922f) bg_ai5_widget_pane_g7

0xeb42,	// (0x0004923b) bg_ai5_widget_pane_g8_ParamLimits

0xeb42,	// (0x0004923b) bg_ai5_widget_pane_g8

0xeb4e,	// (0x00049247) bg_ai5_widget_pane_g9_ParamLimits

0xeb4e,	// (0x00049247) bg_ai5_widget_pane_g9

0x0008,

0x0020,	// (0x0003a719) bg_ai5_widget_pane_g_ParamLimits

0x0020,	// (0x0003a719) bg_ai5_widget_pane_g

0xeb80,	// (0x00049279) cell_shortcut_ai5_widget_pane_ParamLimits

0xeb80,	// (0x00049279) cell_shortcut_ai5_widget_pane

0x944f,	// (0x00043b48) bg_cell_shortcut_ai5_widget_pane

0xeb91,	// (0x0004928a) cell_grid_ai5_widget_pane_g1

0x944f,	// (0x00043b48) highlight_cell_shortcut_ai5_widget_pane

0x9cb3,	// (0x000443ac) ai5_sk_left_pane_g1

0xeb9a,	// (0x00049293) ai5_sk_left_pane_g2

0xeba2,	// (0x0004929b) ai5_sk_left_pane_g3

0xebaa,	// (0x000492a3) ai5_sk_left_pane_g4

0x0003,

0xfe3f,	// (0x0004a538) ai5_sk_left_pane_g

0xebb2,	// (0x000492ab) ai5_sk_left_pane_t1

0x9cab,	// (0x000443a4) ai5_sk_right_pane_g1

0xebc0,	// (0x000492b9) ai5_sk_right_pane_g2

0xebc8,	// (0x000492c1) ai5_sk_right_pane_g3

0xebd0,	// (0x000492c9) ai5_sk_right_pane_g4

0x0003,

0xfe48,	// (0x0004a541) ai5_sk_right_pane_g

0xebd8,	// (0x000492d1) ai5_sk_right_pane_t1

0x9cab,	// (0x000443a4) ai5_sk_middle_pane_g1

0x9cb3,	// (0x000443ac) ai5_sk_middle_pane_g2

0x9ccb,	// (0x000443c4) ai5_sk_middle_pane_g3

0xebc8,	// (0x000492c1) ai5_sk_middle_pane_g4

0xeba2,	// (0x0004929b) ai5_sk_middle_pane_g5

0xebe6,	// (0x000492df) ai5_sk_middle_pane_g6

0xebee,	// (0x000492e7) ai5_sk_middle_pane_g7

0x0006,

0xfe51,	// (0x0004a54a) ai5_sk_middle_pane_g

0x97d3,	// (0x00043ecc) aid_touch_area_size_lc0_ParamLimits

0x97d3,	// (0x00043ecc) aid_touch_area_size_lc0

0x7098,	// (0x00041791) cell_hwr_candidate_pane_t1_ParamLimits

0x97ef,	// (0x00043ee8) aid_touch_navi_pane

0x9ace,	// (0x000441c7) status_dt_navi_pane_ParamLimits

0x9ace,	// (0x000441c7) status_dt_navi_pane

0x9adb,	// (0x000441d4) status_dt_sta_pane_ParamLimits

0x9adb,	// (0x000441d4) status_dt_sta_pane

0xebf6,	// (0x000492ef) dt_sta_controll_pane

0xec03,	// (0x000492fc) dt_sta_indi_pane

0xec14,	// (0x0004930d) dt_sta_title_pane

0x81ae,	// (0x000428a7) bg_dt_sta_indi_pane_ParamLimits

0x81ae,	// (0x000428a7) bg_dt_sta_indi_pane

0xec27,	// (0x00049320) dt_sta_battery_pane

0xec2f,	// (0x00049328) dt_sta_indi_pane_g1

0xec38,	// (0x00049331) dt_sta_indi_pane_g2

0xec41,	// (0x0004933a) dt_sta_indi_pane_g3

0x0002,

0x0054,	// (0x0003a74d) dt_sta_indi_pane_g

0xec4a,	// (0x00049343) dt_sta_signal_pane

0x87c6,	// (0x00042ebf) bg_dt_sta_title_pane_ParamLimits

0x87c6,	// (0x00042ebf) bg_dt_sta_title_pane

0xec53,	// (0x0004934c) dt_sta_title_pane_g1

0xec5b,	// (0x00049354) dt_sta_title_pane_t1_ParamLimits

0xec5b,	// (0x00049354) dt_sta_title_pane_t1

0x7e31,	// (0x0004252a) bg_dt_sta_control_pane

0xec70,	// (0x00049369) dt_sta_controll_pane_g1

0xec79,	// (0x00049372) bg_dt_sta_title_pane_g1

0xec82,	// (0x0004937b) bg_dt_sta_title_pane_g2

0xec8b,	// (0x00049384) bg_dt_sta_title_pane_g3

0x0002,

0x005b,	// (0x0003a754) bg_dt_sta_title_pane_g

0xc242,	// (0x0004693b) bg_dt_sta_indi_pane_g1

0xec94,	// (0x0004938d) dt_sta_signal_pane_g1

0xec9c,	// (0x00049395) dt_sta_signal_pane_g2

0x0001,

0x0062,	// (0x0003a75b) dt_sta_signal_pane_g

0xeca4,	// (0x0004939d) dt_sta_battery_pane_g1

0xecad,	// (0x000493a6) dt_sta_battery_pane_t1

0xc242,	// (0x0004693b) bg_dt_sta_control_pane_g1

0x8f4e,	// (0x00043647) fep_china_uni_eep_pane

0x8f56,	// (0x0004364f) fep_china_uni_entry_pane_ParamLimits

0x8f66,	// (0x0004365f) popup_fep_china_uni_window_g1_ParamLimits

0x8f76,	// (0x0004366f) popup_fep_china_uni_window_g2_ParamLimits

0x8f76,	// (0x0004366f) popup_fep_china_uni_window_g2

0x0001,

0xf722,	// (0x00049e1b) popup_fep_china_uni_window_g_ParamLimits

0xf722,	// (0x00049e1b) popup_fep_china_uni_window_g

0xecbc,	// (0x000493b5) fep_china_uni_eep_pane_g1

0xecc4,	// (0x000493bd) fep_china_uni_eep_pane_t1

0xe713,	// (0x00048e0c) aid_touch_area_size_smil_player

0x993f,	// (0x00044038) lc0_clock_pane

0x9b32,	// (0x0004422b) status_pane_g5_ParamLimits

0x9b32,	// (0x0004422b) status_pane_g5

0x64db,	// (0x00040bd4) popup_keymap_window

0x9af0,	// (0x000441e9) status_icon_pane

0xe90e,	// (0x00049007) cell_ai5_widget_pane_g3_ParamLimits

0xe928,	// (0x00049021) cell_ai5_widget_pane_g4_ParamLimits

0xe938,	// (0x00049031) cell_ai5_widget_pane_g5_ParamLimits

0xe960,	// (0x00049059) cell_ai5_widget_pane_g8_ParamLimits

0xe960,	// (0x00049059) cell_ai5_widget_pane_g8

0xe974,	// (0x0004906d) cell_ai5_widget_pane_g9_ParamLimits

0xe974,	// (0x0004906d) cell_ai5_widget_pane_g9

0xe988,	// (0x00049081) cell_ai5_widget_pane_g10_ParamLimits

0xe988,	// (0x00049081) cell_ai5_widget_pane_g10

0xecd3,	// (0x000493cc) status_icon_pane_g1

0x7e31,	// (0x0004252a) bg_popup_sub_pane_cp13

0xecdb,	// (0x000493d4) popup_keymap_window_t1

0x9724,	// (0x00043e1d) control_pane_g6_ParamLimits

0x9724,	// (0x00043e1d) control_pane_g6

0x9731,	// (0x00043e2a) control_pane_g7_ParamLimits

0x9731,	// (0x00043e2a) control_pane_g7

0x973e,	// (0x00043e37) control_pane_g8_ParamLimits

0x973e,	// (0x00043e37) control_pane_g8

0xebf6,	// (0x000492ef) dt_sta_controll_pane_ParamLimits

0xec03,	// (0x000492fc) dt_sta_indi_pane_ParamLimits

0xec14,	// (0x0004930d) dt_sta_title_pane_ParamLimits

0x86f2,	// (0x00042deb) aid_size_touch_scroll_bar_cale

0x5a68,	// (0x00040161) popup_discreet_window_ParamLimits

0x5a68,	// (0x00040161) popup_discreet_window

0x5af0,	// (0x000401e9) popup_sk_window

0xa32a,	// (0x00044a23) bg_popup_sub_pane_cp28_ParamLimits

0xa32a,	// (0x00044a23) bg_popup_sub_pane_cp28

0xece9,	// (0x000493e2) popup_discreet_window_g1_ParamLimits

0xece9,	// (0x000493e2) popup_discreet_window_g1

0xed09,	// (0x00049402) popup_discreet_window_t1_ParamLimits

0xed09,	// (0x00049402) popup_discreet_window_t1

0xed27,	// (0x00049420) popup_discreet_window_t2_ParamLimits

0xed27,	// (0x00049420) popup_discreet_window_t2

0x0002,

0x0067,	// (0x0003a760) popup_discreet_window_t_ParamLimits

0x0067,	// (0x0003a760) popup_discreet_window_t

0x7acd,	// (0x000421c6) popup_sk_window_g1

0x7ad7,	// (0x000421d0) popup_sk_window_g2

0x0001,

0xfe60,	// (0x0004a559) popup_sk_window_g

0x7adf,	// (0x000421d8) popup_sk_window_t1

0x7aed,	// (0x000421e6) popup_sk_window_t1_copy1

0xe8fa,	// (0x00048ff3) cell_ai5_widget_pane_g2_ParamLimits

0xea6c,	// (0x00049165) cell_ai5_widget_pane_t9_ParamLimits

0xea6c,	// (0x00049165) cell_ai5_widget_pane_t9

0x7e31,	// (0x0004252a) main_fep_fshwr2_pane

0x7afb,	// (0x000421f4) aid_fshwr2_btn_pane

0x7b07,	// (0x00042200) aid_fshwr2_syb_pane

0x7b13,	// (0x0004220c) aid_fshwr2_txt_pane

0x7b1f,	// (0x00042218) fshwr2_func_candi_pane

0x7b34,	// (0x0004222d) fshwr2_hwr_syb_pane

0x7b44,	// (0x0004223d) fshwr2_icf_pane

0x7e31,	// (0x0004252a) fshwr2_icf_bg_pane

0x7b6d,	// (0x00042266) fshwr2_icf_pane_t1_ParamLimits

0x7b6d,	// (0x00042266) fshwr2_icf_pane_t1

0x8e3c,	// (0x00043535) fshwr2_func_candi_pane_g1

0xed79,	// (0x00049472) fshwr2_func_candi_row_pane_ParamLimits

0xed79,	// (0x00049472) fshwr2_func_candi_row_pane

0x7b85,	// (0x0004227e) cell_fshwr2_syb_pane_ParamLimits

0x7b85,	// (0x0004227e) cell_fshwr2_syb_pane

0xc4c0,	// (0x00046bb9) fshwr2_hwr_syb_pane_g1_ParamLimits

0xc4c0,	// (0x00046bb9) fshwr2_hwr_syb_pane_g1

0x7e31,	// (0x0004252a) bg_popup_call_pane_cp01

0x7b9b,	// (0x00042294) fshwr2_func_candi_cell_pane_ParamLimits

0x7b9b,	// (0x00042294) fshwr2_func_candi_cell_pane

0xed89,	// (0x00049482) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xed89,	// (0x00049482) fshwr2_func_candi_cell_bg_pane

0x7be6,	// (0x000422df) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x7be6,	// (0x000422df) fshwr2_func_candi_cell_pane_g1

0x7c0e,	// (0x00042307) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x7c0e,	// (0x00042307) fshwr2_func_candi_cell_pane_t1

0x7e31,	// (0x0004252a) bg_button_pane_cp08

0xed95,	// (0x0004948e) cell_fshwr2_syb_bg_pane

0x7c21,	// (0x0004231a) cell_fshwr2_syb_bg_pane_g1

0x7c29,	// (0x00042322) cell_fshwr2_syb_bg_pane_t1

0x87c6,	// (0x00042ebf) main_tmo_pane

0xae39,	// (0x00045532) uni_indicator_pane_g1_ParamLimits

0xae4c,	// (0x00045545) uni_indicator_pane_g2_ParamLimits

0xae5e,	// (0x00045557) uni_indicator_pane_g3_ParamLimits

0xae6d,	// (0x00045566) uni_indicator_pane_g4_ParamLimits

0xae6d,	// (0x00045566) uni_indicator_pane_g4

0xae81,	// (0x0004557a) uni_indicator_pane_g5_ParamLimits

0xae81,	// (0x0004557a) uni_indicator_pane_g5

0xae81,	// (0x0004557a) uni_indicator_pane_g6_ParamLimits

0xae81,	// (0x0004557a) uni_indicator_pane_g6

0xf926,	// (0x0004a01f) uni_indicator_pane_g_ParamLimits

0xd729,	// (0x00047e22) popup_tmo_note_window_ParamLimits

0xd729,	// (0x00047e22) popup_tmo_note_window

0x87c6,	// (0x00042ebf) fshwr2_bg_pane

0x7bff,	// (0x000422f8) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x7bff,	// (0x000422f8) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe65,	// (0x0004a55e) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe65,	// (0x0004a55e) fshwr2_func_candi_cell_pane_g

0xc242,	// (0x0004693b) bg_popup_window_pane_cp01

0x7c38,	// (0x00042331) bg_popup_window_pane_g1_cp01

0xed9d,	// (0x00049496) bg_popup_window_pane_cp22_ParamLimits

0xed9d,	// (0x00049496) bg_popup_window_pane_cp22

0xedab,	// (0x000494a4) listscroll_tmo_link_pane_ParamLimits

0xedab,	// (0x000494a4) listscroll_tmo_link_pane

0xedeb,	// (0x000494e4) popup_tmo_note_window_g1_ParamLimits

0xedeb,	// (0x000494e4) popup_tmo_note_window_g1

0xedf8,	// (0x000494f1) tmo_note_info_pane_ParamLimits

0xedf8,	// (0x000494f1) tmo_note_info_pane

0xee12,	// (0x0004950b) list_tmo_note_info_pane_g1_ParamLimits

0xee12,	// (0x0004950b) list_tmo_note_info_pane_g1

0xee29,	// (0x00049522) list_tmo_note_info_pane_g2_ParamLimits

0xee29,	// (0x00049522) list_tmo_note_info_pane_g2

0x0001,

0x0078,	// (0x0003a771) list_tmo_note_info_pane_g_ParamLimits

0x0078,	// (0x0003a771) list_tmo_note_info_pane_g

0xee45,	// (0x0004953e) list_tmo_note_info_text_pane_ParamLimits

0xee45,	// (0x0004953e) list_tmo_note_info_text_pane

0xeec6,	// (0x000495bf) list_tmo_link_pane

0xeed3,	// (0x000495cc) scroll_pane_cp20

0xeee0,	// (0x000495d9) list_single_tmo_link_pane_ParamLimits

0xeee0,	// (0x000495d9) list_single_tmo_link_pane

0xeef0,	// (0x000495e9) list_single_tmo_link_pane_t1

0xeefe,	// (0x000495f7) list_tmo_note_info_text_pane_t1_ParamLimits

0xeefe,	// (0x000495f7) list_tmo_note_info_text_pane_t1

0x8871,	// (0x00042f6a) aid_size_touch_scroll_bar_cp01_ParamLimits

0x8871,	// (0x00042f6a) aid_size_touch_scroll_bar_cp01

0x4e1d,	// (0x0003f516) aid_size_touch_slider_marker

0x5ad8,	// (0x000401d1) popup_settings_window_ParamLimits

0x5ad8,	// (0x000401d1) popup_settings_window

0x4fb4,	// (0x0003f6ad) popup_candi_list_indi_window

0x97ef,	// (0x00043ee8) aid_touch_navi_pane_ParamLimits

0x72e0,	// (0x000419d9) rs_clock_indi_pane

0x72e9,	// (0x000419e2) sctrl_sk_bottom_pane_ParamLimits

0x72fa,	// (0x000419f3) sctrl_sk_top_pane_ParamLimits

0x73e1,	// (0x00041ada) popup_fep_tooltip_window

0xe86c,	// (0x00048f65) aid_size_cell_widget_grid_ParamLimits

0xe8e5,	// (0x00048fde) cell_ai5_widget_pane_g1_ParamLimits

0xe8e5,	// (0x00048fde) cell_ai5_widget_pane_g1

0xe948,	// (0x00049041) cell_ai5_widget_pane_g6_ParamLimits

0xe954,	// (0x0004904d) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe2a,	// (0x0004a523) cell_ai5_widget_pane_g_ParamLimits

0xfe2a,	// (0x0004a523) cell_ai5_widget_pane_g

0xea9b,	// (0x00049194) cell_ai5_widget_pane_t10_ParamLimits

0xea9b,	// (0x00049194) cell_ai5_widget_pane_t10

0xeab9,	// (0x000491b2) grid_ai5_widget_pane_ParamLimits

0xeb5a,	// (0x00049253) cell_contacts_ai5_widget_pane_ParamLimits

0xeb5a,	// (0x00049253) cell_contacts_ai5_widget_pane

0xed3c,	// (0x00049435) popup_discreet_window_t3_ParamLimits

0xed3c,	// (0x00049435) popup_discreet_window_t3

0x7b59,	// (0x00042252) popup_fshwr2_char_preview_window_ParamLimits

0x7b59,	// (0x00042252) popup_fshwr2_char_preview_window

0xee63,	// (0x0004955c) tmo_note_info_pane_t1

0xee78,	// (0x00049571) tmo_note_info_pane_t2

0xee8d,	// (0x00049586) tmo_note_info_pane_t3

0xeea2,	// (0x0004959b) tmo_note_info_pane_t4

0xeeb4,	// (0x000495ad) tmo_note_info_pane_t5

0x0004,

0x007d,	// (0x0003a776) tmo_note_info_pane_t

0xeec6,	// (0x000495bf) list_tmo_link_pane_ParamLimits

0xeed3,	// (0x000495cc) scroll_pane_cp20_ParamLimits

0x7e31,	// (0x0004252a) bg_popup_fep_char_preview_window_cp01

0xef17,	// (0x00049610) popup_fshwr2_char_preview_window_t1

0xef25,	// (0x0004961e) popup_candi_list_indi_window_g1

0xef2e,	// (0x00049627) bg_cell_contacts_ai5_widget_pane

0xef3a,	// (0x00049633) cell_contacts_ai5_widget_pane_g1

0xc92e,	// (0x00047027) cell_contacts_ai5_widget_pane_g2

0xef4f,	// (0x00049648) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfe6a,	// (0x0004a563) cell_contacts_ai5_widget_pane_g

0xef5b,	// (0x00049654) cell_contacts_ai5_widget_pane_t1

0x87c6,	// (0x00042ebf) highlight_cell_shortcut_ai5_widget_pane_cp01

0xefd2,	// (0x000496cb) settings_container_pane

0x944f,	// (0x00043b48) listscroll_set_pane_copy1

0xb952,	// (0x0004604b) scroll_pane_cp121_copy1

0xa0cf,	// (0x000447c8) set_content_pane_copy1

0xefde,	// (0x000496d7) aid_height_set_list_copy1_ParamLimits

0xefde,	// (0x000496d7) aid_height_set_list_copy1

0xb079,	// (0x00045772) aid_size_parent_copy1_ParamLimits

0xb079,	// (0x00045772) aid_size_parent_copy1

0xefea,	// (0x000496e3) button_value_adjust_pane_cp6_copy1_ParamLimits

0xefea,	// (0x000496e3) button_value_adjust_pane_cp6_copy1

0x9773,	// (0x00043e6c) list_highlight_pane_cp2_copy1_ParamLimits

0x9773,	// (0x00043e6c) list_highlight_pane_cp2_copy1

0xeffe,	// (0x000496f7) list_set_pane_copy1_ParamLimits

0xeffe,	// (0x000496f7) list_set_pane_copy1

0xef6d,	// (0x00049666) main_pane_set_t1_copy1_ParamLimits

0xef6d,	// (0x00049666) main_pane_set_t1_copy1

0xefa7,	// (0x000496a0) main_pane_set_t2_copy1_ParamLimits

0xefa7,	// (0x000496a0) main_pane_set_t2_copy1

0xf0ab,	// (0x000497a4) main_pane_set_t3_copy1

0xf0b9,	// (0x000497b2) main_pane_set_t4_copy1

0xefc6,	// (0x000496bf) set_content_pane_g1_copy1_ParamLimits

0xefc6,	// (0x000496bf) set_content_pane_g1_copy1

0xf0c7,	// (0x000497c0) setting_code_pane_copy1

0xf0cf,	// (0x000497c8) setting_slider_graphic_pane_copy1

0xf0cf,	// (0x000497c8) setting_slider_pane_copy1

0xf0cf,	// (0x000497c8) setting_text_pane_copy1

0xf0cf,	// (0x000497c8) setting_volume_pane_copy1

0xf0c7,	// (0x000497c0) settings_code_pane_cp2_copy1

0xf0d7,	// (0x000497d0) settings_code_pane_cp_copy1_ParamLimits

0xf0d7,	// (0x000497d0) settings_code_pane_cp_copy1

0x7c41,	// (0x0004233a) volume_set_pane_copy1

0xf0eb,	// (0x000497e4) volume_set_pane_g10_copy1

0xf0f3,	// (0x000497ec) volume_set_pane_g1_copy1

0xf0fb,	// (0x000497f4) volume_set_pane_g2_copy1

0xf103,	// (0x000497fc) volume_set_pane_g3_copy1

0xf10b,	// (0x00049804) volume_set_pane_g4_copy1

0xf113,	// (0x0004980c) volume_set_pane_g5_copy1

0xf11b,	// (0x00049814) volume_set_pane_g6_copy1

0xf123,	// (0x0004981c) volume_set_pane_g7_copy1

0xf12b,	// (0x00049824) volume_set_pane_g8_copy1

0xf133,	// (0x0004982c) volume_set_pane_g9_copy1

0x7f25,	// (0x0004261e) bg_set_opt_pane_cp_copy1_ParamLimits

0x7f25,	// (0x0004261e) bg_set_opt_pane_cp_copy1

0x7c49,	// (0x00042342) setting_slider_pane_t1_copy1_ParamLimits

0x7c49,	// (0x00042342) setting_slider_pane_t1_copy1

0x7c67,	// (0x00042360) setting_slider_pane_t2_copy1_ParamLimits

0x7c67,	// (0x00042360) setting_slider_pane_t2_copy1

0x7c81,	// (0x0004237a) setting_slider_pane_t3_copy1_ParamLimits

0x7c81,	// (0x0004237a) setting_slider_pane_t3_copy1

0x7c99,	// (0x00042392) slider_set_pane_copy1_ParamLimits

0x7c99,	// (0x00042392) slider_set_pane_copy1

0x8812,	// (0x00042f0b) set_opt_bg_pane_g1_copy2

0x881a,	// (0x00042f13) set_opt_bg_pane_g2_copy2

0xf13b,	// (0x00049834) set_opt_bg_pane_g3_copy2

0x882a,	// (0x00042f23) set_opt_bg_pane_g4_copy2

0x8832,	// (0x00042f2b) set_opt_bg_pane_g5_copy2

0x883a,	// (0x00042f33) set_opt_bg_pane_g6_copy2

0xf145,	// (0x0004983e) set_opt_bg_pane_g7_copy2

0xf14d,	// (0x00049846) set_opt_bg_pane_g8_copy2

0xf157,	// (0x00049850) set_opt_bg_pane_g9_copy2

0x7caf,	// (0x000423a8) aid_size_touch_slider_mark_copy1_ParamLimits

0x7caf,	// (0x000423a8) aid_size_touch_slider_mark_copy1

0xf161,	// (0x0004985a) slider_set_pane_g1_copy1

0x7cc3,	// (0x000423bc) slider_set_pane_g2_copy1

0x6c1b,	// (0x00041314) slider_set_pane_g3_copy1_ParamLimits

0x6c1b,	// (0x00041314) slider_set_pane_g3_copy1

0x6c2f,	// (0x00041328) slider_set_pane_g4_copy1_ParamLimits

0x6c2f,	// (0x00041328) slider_set_pane_g4_copy1

0x6c47,	// (0x00041340) slider_set_pane_g5_copy1_ParamLimits

0x6c47,	// (0x00041340) slider_set_pane_g5_copy1

0x6c1b,	// (0x00041314) slider_set_pane_g6_copy1_ParamLimits

0x6c1b,	// (0x00041314) slider_set_pane_g6_copy1

0x7ccb,	// (0x000423c4) slider_set_pane_g7_copy1_ParamLimits

0x7ccb,	// (0x000423c4) slider_set_pane_g7_copy1

0x7e45,	// (0x0004253e) bg_set_opt_pane_cp2_copy1

0xf16a,	// (0x00049863) setting_slider_graphic_pane_g1_copy1

0xf173,	// (0x0004986c) setting_slider_graphic_pane_t1_copy1

0xf183,	// (0x0004987c) setting_slider_graphic_pane_t2_copy1

0xf193,	// (0x0004988c) slider_set_pane_cp_copy1

0xf1a3,	// (0x0004989c) input_focus_pane_cp1_copy1

0xf1ac,	// (0x000498a5) list_set_text_pane_copy1

0xf1b4,	// (0x000498ad) setting_text_pane_g1_copy1

0x57df,	// (0x0003fed8) set_text_pane_t1_copy1

0xf1a3,	// (0x0004989c) input_focus_pane_cp2_copy1

0xf1b4,	// (0x000498ad) setting_code_pane_g1_copy1

0xf1bd,	// (0x000498b6) setting_code_pane_t1_copy1

0xf1cb,	// (0x000498c4) list_set_graphic_pane_copy1

0x7e45,	// (0x0004253e) bg_set_opt_pane_cp4_copy1

0x914a,	// (0x00043843) list_set_graphic_pane_g1_copy1_ParamLimits

0x914a,	// (0x00043843) list_set_graphic_pane_g1_copy1

0xf1de,	// (0x000498d7) list_set_graphic_pane_g2_copy1

0x9162,	// (0x0004385b) list_set_graphic_pane_t1_copy1_ParamLimits

0x9162,	// (0x0004385b) list_set_graphic_pane_t1_copy1

0xc242,	// (0x0004693b) rs_clock_indi_pane_g1

0xf1e6,	// (0x000498df) rs_clock_indi_pane_t1

0xf1f4,	// (0x000498ed) rs_indi_pane

0xf1fc,	// (0x000498f5) rs_indi_pane_g1

0xf205,	// (0x000498fe) rs_indi_pane_g2

0xf20e,	// (0x00049907) rs_indi_pane_g3

0x0002,

0x008f,	// (0x0003a788) rs_indi_pane_g

0x944f,	// (0x00043b48) bg_popup_preview_window_pane_cp03

0xf217,	// (0x00049910) popup_fep_tooltip_window_t1

0xceca,	// (0x000475c3) popup_note2_window_g2_ParamLimits

0xceca,	// (0x000475c3) popup_note2_window_g2

0x0001,

0xfc5c,	// (0x0004a355) popup_note2_window_g_ParamLimits

0xfc5c,	// (0x0004a355) popup_note2_window_g

0xd3c5,	// (0x00047abe) bg_popup_sub_pane_cp11_ParamLimits

0xd3d2,	// (0x00047acb) cell_ai3_links_pane_g1_ParamLimits

0xd3e9,	// (0x00047ae2) cell_ai3_links_pane_t1

0x57df,	// (0x0003fed8) set_text_pane_t1_copy1_ParamLimits

0x9360,	// (0x00043a59) cell_graphic_popup_pane_cp2_ParamLimits

0x9360,	// (0x00043a59) cell_graphic_popup_pane_cp2

0xf225,	// (0x0004991e) cell_graphic_popup_pane_g1_cp2

0x8505,	// (0x00042bfe) cell_graphic_popup_pane_g2_cp2

0xf22d,	// (0x00049926) cell_graphic_popup_pane_g3_cp2

0xf235,	// (0x0004992e) cell_graphic_popup_pane_t2_cp2

0x8516,	// (0x00042c0f) grid_highlight_pane_cp3_cp2

0x8b57,	// (0x00043250) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x87c6,	// (0x00042ebf) main_tmo_pane_ParamLimits

0xd71d,	// (0x00047e16) popup_tmo_big_image_note_window

0xe8d4,	// (0x00048fcd) cell_ai5_widget_list_pane

0xe8dc,	// (0x00048fd5) cell_ai5_widget_lrg_icon_pane

0xee63,	// (0x0004955c) tmo_note_info_pane_t1_ParamLimits

0xee78,	// (0x00049571) tmo_note_info_pane_t2_ParamLimits

0xee8d,	// (0x00049586) tmo_note_info_pane_t3_ParamLimits

0xeea2,	// (0x0004959b) tmo_note_info_pane_t4_ParamLimits

0xeeb4,	// (0x000495ad) tmo_note_info_pane_t5_ParamLimits

0x007d,	// (0x0003a776) tmo_note_info_pane_t_ParamLimits

0xefd2,	// (0x000496cb) settings_container_pane_ParamLimits

0xf19b,	// (0x00049894) indicator_popup_pane_cp5

0xf19b,	// (0x00049894) indicator_popup_pane_cp6

0xf1cb,	// (0x000498c4) list_set_graphic_pane_copy1_ParamLimits

0x7e31,	// (0x0004252a) bg_popup_window_pane_cp23

0xf243,	// (0x0004993c) popup_tmo_big_image_note_window_g1

0xf24d,	// (0x00049946) popup_tmo_big_image_note_window_t1

0xf25d,	// (0x00049956) popup_tmo_big_image_note_window_t2

0xf26d,	// (0x00049966) popup_tmo_big_image_note_window_t3

0x0002,

0x0096,	// (0x0003a78f) popup_tmo_big_image_note_window_t

0xc242,	// (0x0004693b) cell_ai5_widget_lrg_icon_pane_g1

0xf27d,	// (0x00049976) cell_ai5_widget_lrg_icon_pane_t1

0xf28b,	// (0x00049984) cell_ai5_widget_list_row_pane_ParamLimits

0xf28b,	// (0x00049984) cell_ai5_widget_list_row_pane

0xf2a2,	// (0x0004999b) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf2a2,	// (0x0004999b) cell_ai5_widget_list_row_pane_g1

0xf2af,	// (0x000499a8) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf2af,	// (0x000499a8) cell_ai5_widget_list_row_pane_t1

0xf2e0,	// (0x000499d9) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf2e0,	// (0x000499d9) cell_ai5_widget_list_row_pane_t2

0x0002,

0x009d,	// (0x0003a796) cell_ai5_widget_list_row_pane_t_ParamLimits

0x009d,	// (0x0003a796) cell_ai5_widget_list_row_pane_t

0x7e31,	// (0x0004252a) main_fep_vtchi_ss_pane

0xf328,	// (0x00049a21) popup_fep_char_pre_window

0xf330,	// (0x00049a29) popup_fep_ituss_window

0xf351,	// (0x00049a4a) popup_fep_vkbss_window

0xf37b,	// (0x00049a74) grid_vkbss_keypad_pane_ParamLimits

0xf37b,	// (0x00049a74) grid_vkbss_keypad_pane

0xf38b,	// (0x00049a84) ituss_keypad_pane

0x7ced,	// (0x000423e6) aid_vkbss_key_offset_ParamLimits

0x7ced,	// (0x000423e6) aid_vkbss_key_offset

0x7cf9,	// (0x000423f2) cell_vkbss_key_pane_ParamLimits

0x7cf9,	// (0x000423f2) cell_vkbss_key_pane

0xf39a,	// (0x00049a93) bg_cell_vkbss_key_g1_ParamLimits

0xf39a,	// (0x00049a93) bg_cell_vkbss_key_g1

0xf3a6,	// (0x00049a9f) cell_vkbss_key_3p_pane_ParamLimits

0xf3a6,	// (0x00049a9f) cell_vkbss_key_3p_pane

0xf3ba,	// (0x00049ab3) cell_vkbss_key_g1_ParamLimits

0xf3ba,	// (0x00049ab3) cell_vkbss_key_g1

0xf3ce,	// (0x00049ac7) cell_vkbss_key_t1_ParamLimits

0xf3ce,	// (0x00049ac7) cell_vkbss_key_t1

0x7d0f,	// (0x00042408) cell_ituss_key_pane_ParamLimits

0x7d0f,	// (0x00042408) cell_ituss_key_pane

0xf3f9,	// (0x00049af2) bg_cell_ituss_key_g1_ParamLimits

0xf3f9,	// (0x00049af2) bg_cell_ituss_key_g1

0xf405,	// (0x00049afe) cell_ituss_key_pane_g1_ParamLimits

0xf405,	// (0x00049afe) cell_ituss_key_pane_g1

0x7d20,	// (0x00042419) cell_ituss_key_pane_g2_ParamLimits

0x7d20,	// (0x00042419) cell_ituss_key_pane_g2

0x0002,

0xfe71,	// (0x0004a56a) cell_ituss_key_pane_g_ParamLimits

0xfe71,	// (0x0004a56a) cell_ituss_key_pane_g

0x7d4c,	// (0x00042445) cell_ituss_key_t1_ParamLimits

0x7d4c,	// (0x00042445) cell_ituss_key_t1

0x7d86,	// (0x0004247f) cell_ituss_key_t2_ParamLimits

0x7d86,	// (0x0004247f) cell_ituss_key_t2

0x7db7,	// (0x000424b0) cell_ituss_key_t3_ParamLimits

0x7db7,	// (0x000424b0) cell_ituss_key_t3

0x7d86,	// (0x0004247f) cell_ituss_key_t4_ParamLimits

0x7d86,	// (0x0004247f) cell_ituss_key_t4

0x0004,

0xfe78,	// (0x0004a571) cell_ituss_key_t_ParamLimits

0xfe78,	// (0x0004a571) cell_ituss_key_t

0xf431,	// (0x00049b2a) cell_vkbss_key_3p_pane_g1

0xf439,	// (0x00049b32) cell_vkbss_key_3p_pane_g2

0xf441,	// (0x00049b3a) cell_vkbss_key_3p_pane_g3

0x0002,

0x00b6,	// (0x0003a7af) cell_vkbss_key_3p_pane_g

0x944f,	// (0x00043b48) bg_popup_fep_char_preview_window_cp02

0xf449,	// (0x00049b42) popup_fep_char_pre_window_t1

0xe859,	// (0x00048f52) main_ai5_sk_pane

0xef2e,	// (0x00049627) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xef3a,	// (0x00049633) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xc92e,	// (0x00047027) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xef4f,	// (0x00049648) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfe6a,	// (0x0004a563) cell_contacts_ai5_widget_pane_g_ParamLimits

0xef5b,	// (0x00049654) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x87c6,	// (0x00042ebf) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf457,	// (0x00049b50) main_ai5_sk_pane_g1

0xa163,	// (0x0004485c) popup_query_code_window_g1

0xf346,	// (0x00049a3f) popup_fep_vkb_icf_pane

0xf365,	// (0x00049a5e) popup_fep_vtchi_icf_pane

0xf460,	// (0x00049b59) bg_icf_pane

0xf46c,	// (0x00049b65) list_vkb_icf_pane

0xf47b,	// (0x00049b74) bg_icf_pane_cp01

0xf48e,	// (0x00049b87) vtchi_icf_list_pane

0xf49e,	// (0x00049b97) list_vkb_icf_pane_t1_ParamLimits

0xf49e,	// (0x00049b97) list_vkb_icf_pane_t1

0xf4b4,	// (0x00049bad) vtchi_icf_list_pane_t1_ParamLimits

0xf4b4,	// (0x00049bad) vtchi_icf_list_pane_t1

0xf330,	// (0x00049a29) popup_fep_ituss_window_ParamLimits

0xf365,	// (0x00049a5e) popup_fep_vtchi_icf_pane_ParamLimits

0xf38b,	// (0x00049a84) ituss_keypad_pane_ParamLimits

0x7ce1,	// (0x000423da) ituss_sks_pane

0xf460,	// (0x00049b59) bg_icf_pane_ParamLimits

0xf308,	// (0x00049a01) icf_edit_indi_pane_ParamLimits

0xf308,	// (0x00049a01) icf_edit_indi_pane

0xf46c,	// (0x00049b65) list_vkb_icf_pane_ParamLimits

0xf47b,	// (0x00049b74) bg_icf_pane_cp01_ParamLimits

0xf31b,	// (0x00049a14) icf_edit_indi_pane_cp01_ParamLimits

0xf31b,	// (0x00049a14) icf_edit_indi_pane_cp01

0xf496,	// (0x00049b8f) vtchi_query_pane

0xe6e3,	// (0x00048ddc) icf_edit_indi_pane_g1_ParamLimits

0xe6e3,	// (0x00048ddc) icf_edit_indi_pane_g1

0xf525,	// (0x00049c1e) icf_edit_indi_pane_g2_ParamLimits

0xf525,	// (0x00049c1e) icf_edit_indi_pane_g2

0x0001,

0x00ce,	// (0x0003a7c7) icf_edit_indi_pane_g_ParamLimits

0x00ce,	// (0x0003a7c7) icf_edit_indi_pane_g

0xf537,	// (0x00049c30) icf_edit_indi_pane_t1

0xf4ce,	// (0x00049bc7) bg_input_focus_pane_cp042

0x86e9,	// (0x00042de2) vtchi_button_pane

0xf4d7,	// (0x00049bd0) vtchi_query_pane_t1

0xf4e5,	// (0x00049bde) vtchi_query_pane_t2

0xf4f3,	// (0x00049bec) vtchi_query_pane_t3

0x0002,

0x00bd,	// (0x0003a7b6) vtchi_query_pane_t

0x7e31,	// (0x0004252a) bg_button_pane_cp13

0xf501,	// (0x00049bfa) vtchi_button_pane_g1

0x7dfa,	// (0x000424f3) ituss_sks_pane_g1

0x7e05,	// (0x000424fe) ituss_sks_pane_g2

0x0001,

0xfe83,	// (0x0004a57c) ituss_sks_pane_g

0xf509,	// (0x00049c02) ituss_sks_pane_t1

0xf517,	// (0x00049c10) ituss_sks_pane_t2

0x0001,

0x00c9,	// (0x0003a7c2) ituss_sks_pane_t

0xbccd,	// (0x000463c6) indicator_nsta_pane_cp_g1

0xbcd5,	// (0x000463ce) indicator_nsta_pane_cp_g2

0xbcdd,	// (0x000463d6) indicator_nsta_pane_cp_g3

0xbccd,	// (0x000463c6) indicator_nsta_pane_cp_g4

0xbcd5,	// (0x000463ce) indicator_nsta_pane_cp_g5

0xbcdd,	// (0x000463d6) indicator_nsta_pane_cp_g6

0x0005,

0xfaa6,	// (0x0004a19f) indicator_nsta_pane_cp_g

0xe422,	// (0x00048b1b) cell_graphic2_pane_t2_ParamLimits

0xe422,	// (0x00048b1b) cell_graphic2_pane_t2

0x0001,

0xfdb3,	// (0x0004a4ac) cell_graphic2_pane_t_ParamLimits

0xfdb3,	// (0x0004a4ac) cell_graphic2_pane_t

0xe44f,	// (0x00048b48) cell_graphic2_control_pane_t1

0x8efd,	// (0x000435f6) signal_pane_g3_ParamLimits

0x8efd,	// (0x000435f6) signal_pane_g3

0x8f0f,	// (0x00043608) signal_pane_g4_ParamLimits

0x8f0f,	// (0x00043608) signal_pane_g4

0xf2f2,	// (0x000499eb) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf2f2,	// (0x000499eb) cell_ai5_widget_list_row_pane_t3

0xf41f,	// (0x00049b18) cell_ituss_key_pane_t1_ParamLimits

0xf41f,	// (0x00049b18) cell_ituss_key_pane_t1

0x9da8,	// (0x000444a1) form_field_data_wide_pane_vc_t2_ParamLimits

0x9da8,	// (0x000444a1) form_field_data_wide_pane_vc_t2

0x9dbc,	// (0x000444b5) form_field_data_wide_pane_vc_t3_ParamLimits

0x9dbc,	// (0x000444b5) form_field_data_wide_pane_vc_t3

0x0002,

0xf80e,	// (0x00049f07) form_field_data_wide_pane_vc_t_ParamLimits

0xf80e,	// (0x00049f07) form_field_data_wide_pane_vc_t

0xb994,	// (0x0004608d) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb994,	// (0x0004608d) form_field_slider_wide_pane_vc_t3

0xba72,	// (0x0004616b) form_field_popup_wide_pane_vc_t2_ParamLimits

0xba72,	// (0x0004616b) form_field_popup_wide_pane_vc_t2

0xba89,	// (0x00046182) form_field_popup_wide_pane_vc_t3_ParamLimits

0xba89,	// (0x00046182) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa95,	// (0x0004a18e) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa95,	// (0x0004a18e) form_field_popup_wide_pane_vc_t

0x7afb,	// (0x000421f4) aid_fshwr2_btn_pane_ParamLimits

0x7b07,	// (0x00042200) aid_fshwr2_syb_pane_ParamLimits

0x7b13,	// (0x0004220c) aid_fshwr2_txt_pane_ParamLimits

0x87c6,	// (0x00042ebf) fshwr2_bg_pane_ParamLimits

0x7b1f,	// (0x00042218) fshwr2_func_candi_pane_ParamLimits

0x7b34,	// (0x0004222d) fshwr2_hwr_syb_pane_ParamLimits

0x7b44,	// (0x0004223d) fshwr2_icf_pane_ParamLimits

0x6dfb,	// (0x000414f4) list_double_graphic_pane_vc_g4_ParamLimits

0x6dfb,	// (0x000414f4) list_double_graphic_pane_vc_g4

0x7d40,	// (0x00042439) cell_ituss_key_pane_g3_ParamLimits

0x7d40,	// (0x00042439) cell_ituss_key_pane_g3

0x7de8,	// (0x000424e1) cell_ituss_key_t5_ParamLimits

0x7de8,	// (0x000424e1) cell_ituss_key_t5

0xf351,	// (0x00049a4a) popup_fep_vkbss_window_ParamLimits

0xe863,	// (0x00048f5c) aid_cell_ai5_quarter

0xf537,	// (0x00049c30) icf_edit_indi_pane_t1_ParamLimits

0x8256,	// (0x0004294f) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x8256,	// (0x0004294f) aid_tch_indicator_popup_pane_cp2

0x8269,	// (0x00042962) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x8269,	// (0x00042962) aid_tch_query_popup_data_pane_cp2

0xa10b,	// (0x00044804) aid_tch_query_popup_pane_ParamLimits

0xa10b,	// (0x00044804) aid_tch_query_popup_pane

0xa10b,	// (0x00044804) aid_tch_query_popup_data_pane_cp1_ParamLimits

0xa10b,	// (0x00044804) aid_tch_query_popup_data_pane_cp1
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
	};

} // end of namespace AknLayoutScalable_Elaf_php_av_qhd_prt_tch_Large

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

#include "aknlayoutscalable_elaf_phl_av_qhd_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_phl_av_qhd_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x00036f2e };

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
0x7ad1,	// (0x0003e9ff) Screen

0x7add,	// (0x0003ea0b) application_window_ParamLimits

0x7add,	// (0x0003ea0b) application_window

0xac1a,	// (0x00041b48) screen_g1

0x7b15,	// (0x0003ea43) area_bottom_pane_ParamLimits

0x7b15,	// (0x0003ea43) area_bottom_pane

0x12f3,	// (0x00038221) area_top_pane_ParamLimits

0x12f3,	// (0x00038221) area_top_pane

0x1387,	// (0x000382b5) main_pane_ParamLimits

0x1387,	// (0x000382b5) main_pane

0xac24,	// (0x00041b52) misc_graphics

0x9304,	// (0x00040232) battery_pane_ParamLimits

0x9304,	// (0x00040232) battery_pane

0xd1f5,	// (0x00044123) bg_status_flat_pane_g8

0xd1fd,	// (0x0004412b) bg_status_flat_pane_g9

0xc926,	// (0x00043854) context_pane_ParamLimits

0xc926,	// (0x00043854) context_pane

0x946f,	// (0x0004039d) navi_pane_ParamLimits

0x946f,	// (0x0004039d) navi_pane

0x94e6,	// (0x00040414) signal_pane_ParamLimits

0x94e6,	// (0x00040414) signal_pane

0x0008,

0xf8a1,	// (0x000467cf) bg_status_flat_pane_g

0x9576,	// (0x000404a4) status_pane_g1_ParamLimits

0x9576,	// (0x000404a4) status_pane_g1

0x958c,	// (0x000404ba) status_pane_g2_ParamLimits

0x958c,	// (0x000404ba) status_pane_g2

0xc98b,	// (0x000438b9) status_pane_g3_ParamLimits

0xc98b,	// (0x000438b9) status_pane_g3

0x0004,

0xf7db,	// (0x00046709) status_pane_g_ParamLimits

0xf7db,	// (0x00046709) status_pane_g

0x9598,	// (0x000404c6) title_pane_ParamLimits

0x9598,	// (0x000404c6) title_pane

0x95f9,	// (0x00040527) uni_indicator_pane_ParamLimits

0x95f9,	// (0x00040527) uni_indicator_pane

0xc755,	// (0x00043683) bg_list_pane_ParamLimits

0xc755,	// (0x00043683) bg_list_pane

0x8be0,	// (0x0003fb0e) find_pane

0x8be8,	// (0x0003fb16) listscroll_app_pane_ParamLimits

0x8be8,	// (0x0003fb16) listscroll_app_pane

0xc775,	// (0x000436a3) listscroll_form_pane

0x8bf4,	// (0x0003fb22) listscroll_gen_pane_ParamLimits

0x8bf4,	// (0x0003fb22) listscroll_gen_pane

0xc775,	// (0x000436a3) listscroll_set_pane

0xd6e1,	// (0x0004460f) main_idle_act_pane

0xc53b,	// (0x00043469) main_idle_trad_pane

0xc53b,	// (0x00043469) main_list_empty_pane

0xbc6e,	// (0x00042b9c) main_midp_pane

0xc78f,	// (0x000436bd) main_pane_g1_ParamLimits

0xc78f,	// (0x000436bd) main_pane_g1

0x8c08,	// (0x0003fb36) popup_ai_message_window_ParamLimits

0x8c08,	// (0x0003fb36) popup_ai_message_window

0x8c99,	// (0x0003fbc7) popup_fep_china_uni_window_ParamLimits

0x8c99,	// (0x0003fbc7) popup_fep_china_uni_window

0xc7c1,	// (0x000436ef) popup_fep_japan_candidate_window_ParamLimits

0xc7c1,	// (0x000436ef) popup_fep_japan_candidate_window

0xc7e1,	// (0x0004370f) popup_fep_japan_predictive_window_ParamLimits

0xc7e1,	// (0x0004370f) popup_fep_japan_predictive_window

0x8cf5,	// (0x0003fc23) popup_find_window

0x8d12,	// (0x0003fc40) popup_grid_graphic_window_ParamLimits

0x8d12,	// (0x0003fc40) popup_grid_graphic_window

0xc811,	// (0x0004373f) popup_large_graphic_colour_window

0x8daa,	// (0x0003fcd8) popup_menu_window_ParamLimits

0x8daa,	// (0x0003fcd8) popup_menu_window

0x8f64,	// (0x0003fe92) popup_note_image_window

0x8f2a,	// (0x0003fe58) popup_note_wait_window_ParamLimits

0x8f2a,	// (0x0003fe58) popup_note_wait_window

0x8f7c,	// (0x0003feaa) popup_note_window_ParamLimits

0x8f7c,	// (0x0003feaa) popup_note_window

0x9022,	// (0x0003ff50) popup_query_code_window_ParamLimits

0x9022,	// (0x0003ff50) popup_query_code_window

0xc837,	// (0x00043765) popup_query_data_code_window_ParamLimits

0xc837,	// (0x00043765) popup_query_data_code_window

0x905c,	// (0x0003ff8a) popup_query_data_window_ParamLimits

0x905c,	// (0x0003ff8a) popup_query_data_window

0x90d2,	// (0x00040000) popup_query_sat_info_window_ParamLimits

0x90d2,	// (0x00040000) popup_query_sat_info_window

0x9169,	// (0x00040097) popup_snote_single_graphic_window_ParamLimits

0x9169,	// (0x00040097) popup_snote_single_graphic_window

0x9169,	// (0x00040097) popup_snote_single_text_window_ParamLimits

0x9169,	// (0x00040097) popup_snote_single_text_window

0xc854,	// (0x00043782) popup_sub_window_general

0xc89c,	// (0x000437ca) popup_window_general_ParamLimits

0xc89c,	// (0x000437ca) popup_window_general

0xc8b1,	// (0x000437df) power_save_pane

0x7cda,	// (0x0003ec08) control_pane_g1_ParamLimits

0x7cda,	// (0x0003ec08) control_pane_g1

0x215e,	// (0x0003908c) control_pane_g2_ParamLimits

0x215e,	// (0x0003908c) control_pane_g2

0xc737,	// (0x00043665) control_pane_g3_ParamLimits

0xc737,	// (0x00043665) control_pane_g3

0x0007,

0xf7c3,	// (0x000466f1) control_pane_g_ParamLimits

0xf7c3,	// (0x000466f1) control_pane_g

0x7d11,	// (0x0003ec3f) control_pane_t1_ParamLimits

0x7d11,	// (0x0003ec3f) control_pane_t1

0x7d6f,	// (0x0003ec9d) control_pane_t2_ParamLimits

0x7d6f,	// (0x0003ec9d) control_pane_t2

0x0002,

0xf7d4,	// (0x00046702) control_pane_t_ParamLimits

0xf7d4,	// (0x00046702) control_pane_t

0xc658,	// (0x00043586) navi_navi_volume_pane_cp1

0xc661,	// (0x0004358f) status_small_icon_pane

0xc669,	// (0x00043597) status_small_pane_g1_ParamLimits

0xc669,	// (0x00043597) status_small_pane_g1

0xc69d,	// (0x000435cb) status_small_pane_g2_ParamLimits

0xc69d,	// (0x000435cb) status_small_pane_g2

0xc6a9,	// (0x000435d7) status_small_pane_g3_ParamLimits

0xc6a9,	// (0x000435d7) status_small_pane_g3

0xc6b5,	// (0x000435e3) status_small_pane_g4_ParamLimits

0xc6b5,	// (0x000435e3) status_small_pane_g4

0xc6c1,	// (0x000435ef) status_small_pane_g5_ParamLimits

0xc6c1,	// (0x000435ef) status_small_pane_g5

0xc6d0,	// (0x000435fe) status_small_pane_g6_ParamLimits

0xc6d0,	// (0x000435fe) status_small_pane_g6

0x0007,

0xf7b2,	// (0x000466e0) status_small_pane_g_ParamLimits

0xf7b2,	// (0x000466e0) status_small_pane_g

0xc700,	// (0x0004362e) status_small_pane_t1

0xc723,	// (0x00043651) status_small_wait_pane_ParamLimits

0xc723,	// (0x00043651) status_small_wait_pane

0x8a0a,	// (0x0003f938) aid_levels_signal_ParamLimits

0x8a0a,	// (0x0003f938) aid_levels_signal

0x8a22,	// (0x0003f950) signal_pane_g1_ParamLimits

0x8a22,	// (0x0003f950) signal_pane_g1

0x8a3d,	// (0x0003f96b) signal_pane_g2_ParamLimits

0x8a3d,	// (0x0003f96b) signal_pane_g2

0x0001,

0xf747,	// (0x00046675) signal_pane_g_ParamLimits

0xf747,	// (0x00046675) signal_pane_g

0xc0a1,	// (0x00042fcf) context_pane_g1

0x84f0,	// (0x0003f41e) title_pane_g1

0x8525,	// (0x0003f453) title_pane_t1

0xac3a,	// (0x00041b68) title_pane_t2

0xac60,	// (0x00041b8e) title_pane_t3

0x0002,

0xf59b,	// (0x000464c9) title_pane_t

0x9621,	// (0x0004054f) aid_levels_battery_ParamLimits

0x9621,	// (0x0004054f) aid_levels_battery

0x963d,	// (0x0004056b) battery_pane_g1_ParamLimits

0x963d,	// (0x0004056b) battery_pane_g1

0x965a,	// (0x00040588) battery_pane_g2_ParamLimits

0x965a,	// (0x00040588) battery_pane_g2

0x0001,

0xf7e6,	// (0x00046714) battery_pane_g_ParamLimits

0xf7e6,	// (0x00046714) battery_pane_g

0x985f,	// (0x0004078d) uni_indicator_pane_g1

0x9874,	// (0x000407a2) uni_indicator_pane_g2

0x9889,	// (0x000407b7) uni_indicator_pane_g3

0x0005,

0xf949,	// (0x00046877) uni_indicator_pane_g

0xc3ad,	// (0x000432db) navi_icon_pane_ParamLimits

0xc3ad,	// (0x000432db) navi_icon_pane

0xc2f6,	// (0x00043224) navi_midp_pane

0xc3c9,	// (0x000432f7) navi_navi_pane

0xc3d3,	// (0x00043301) navi_text_pane_ParamLimits

0xc3d3,	// (0x00043301) navi_text_pane

0xac1a,	// (0x00041b48) status_small_wait_pane_g1

0xb7dc,	// (0x0004270a) status_small_wait_pane_g2

0x0001,

0xf944,	// (0x00046872) status_small_wait_pane_g

0xd7a4,	// (0x000446d2) navi_navi_icon_text_pane

0xd7ac,	// (0x000446da) navi_navi_pane_g1_ParamLimits

0xd7ac,	// (0x000446da) navi_navi_pane_g1

0xd7be,	// (0x000446ec) navi_navi_pane_g2_ParamLimits

0xd7be,	// (0x000446ec) navi_navi_pane_g2

0x0001,

0xf912,	// (0x00046840) navi_navi_pane_g_ParamLimits

0xf912,	// (0x00046840) navi_navi_pane_g

0xd7d0,	// (0x000446fe) navi_navi_tabs_pane

0xd7d9,	// (0x00044707) navi_navi_text_pane

0xd7a4,	// (0x000446d2) navi_navi_volume_pane

0x9820,	// (0x0004074e) navi_text_pane_t1

0x9814,	// (0x00040742) navi_icon_pane_g1

0xd6c7,	// (0x000445f5) navi_navi_text_pane_t1

0x7fbc,	// (0x0003eeea) navi_navi_volume_pane_g1

0x7fc4,	// (0x0003eef2) volume_small_pane

0x9770,	// (0x0004069e) navi_navi_icon_text_pane_g1

0x9778,	// (0x000406a6) navi_navi_icon_text_pane_t1

0xc3c9,	// (0x000432f7) navi_tabs_2_long_pane

0xc3c9,	// (0x000432f7) navi_tabs_2_pane

0xc3c9,	// (0x000432f7) navi_tabs_3_long_pane

0xc3c9,	// (0x000432f7) navi_tabs_3_pane

0xc3c9,	// (0x000432f7) navi_tabs_4_pane

0x7f9c,	// (0x0003eeca) tabs_2_active_pane_ParamLimits

0x7f9c,	// (0x0003eeca) tabs_2_active_pane

0x7fac,	// (0x0003eeda) tabs_2_passive_pane_ParamLimits

0x7fac,	// (0x0003eeda) tabs_2_passive_pane

0x7f6a,	// (0x0003ee98) tabs_3_active_pane_ParamLimits

0x7f6a,	// (0x0003ee98) tabs_3_active_pane

0x7f7a,	// (0x0003eea8) tabs_3_passive_pane_ParamLimits

0x7f7a,	// (0x0003eea8) tabs_3_passive_pane

0x7f8b,	// (0x0003eeb9) tabs_3_passive_pane_cp_ParamLimits

0x7f8b,	// (0x0003eeb9) tabs_3_passive_pane_cp

0x7f26,	// (0x0003ee54) tabs_4_active_pane_ParamLimits

0x7f26,	// (0x0003ee54) tabs_4_active_pane

0x7f37,	// (0x0003ee65) tabs_4_passive_pane_ParamLimits

0x7f37,	// (0x0003ee65) tabs_4_passive_pane

0x7f48,	// (0x0003ee76) tabs_4_passive_pane_cp_ParamLimits

0x7f48,	// (0x0003ee76) tabs_4_passive_pane_cp

0x7f59,	// (0x0003ee87) tabs_4_passive_pane_cp2_ParamLimits

0x7f59,	// (0x0003ee87) tabs_4_passive_pane_cp2

0x7f06,	// (0x0003ee34) tabs_2_long_active_pane_ParamLimits

0x7f06,	// (0x0003ee34) tabs_2_long_active_pane

0x7f16,	// (0x0003ee44) tabs_2_long_passive_pane_ParamLimits

0x7f16,	// (0x0003ee44) tabs_2_long_passive_pane

0x7ed3,	// (0x0003ee01) tabs_3_long_active_pane_ParamLimits

0x7ed3,	// (0x0003ee01) tabs_3_long_active_pane

0x7ee4,	// (0x0003ee12) tabs_3_long_passive_pane_ParamLimits

0x7ee4,	// (0x0003ee12) tabs_3_long_passive_pane

0x7ef5,	// (0x0003ee23) tabs_3_long_passive_pane_cp_ParamLimits

0x7ef5,	// (0x0003ee23) tabs_3_long_passive_pane_cp

0x27c1,	// (0x000396ef) volume_small_pane_g1

0x7e82,	// (0x0003edb0) volume_small_pane_g2

0x7e8b,	// (0x0003edb9) volume_small_pane_g3

0x7e94,	// (0x0003edc2) volume_small_pane_g4

0x7e9d,	// (0x0003edcb) volume_small_pane_g5

0x7ea6,	// (0x0003edd4) volume_small_pane_g6

0x7eaf,	// (0x0003eddd) volume_small_pane_g7

0x7eb8,	// (0x0003ede6) volume_small_pane_g8

0x7ec1,	// (0x0003edef) volume_small_pane_g9

0x7eca,	// (0x0003edf8) volume_small_pane_g10

0x0009,

0xf8de,	// (0x0004680c) volume_small_pane_g

0xac72,	// (0x00041ba0) bg_active_tab_pane_cp2_ParamLimits

0xac72,	// (0x00041ba0) bg_active_tab_pane_cp2

0x85b1,	// (0x0003f4df) tabs_3_active_pane_g1

0x85b9,	// (0x0003f4e7) tabs_3_active_pane_t1

0xac72,	// (0x00041ba0) bg_passive_tab_pane_cp2_ParamLimits

0xac72,	// (0x00041ba0) bg_passive_tab_pane_cp2

0x85b1,	// (0x0003f4df) tabs_3_passive_pane_g1

0x85b9,	// (0x0003f4e7) tabs_3_passive_pane_t1

0xac72,	// (0x00041ba0) bg_active_tab_pane_cp3_ParamLimits

0xac72,	// (0x00041ba0) bg_active_tab_pane_cp3

0x85cb,	// (0x0003f4f9) tabs_4_active_pane_g1

0x85d3,	// (0x0003f501) tabs_4_active_pane_t1

0xac72,	// (0x00041ba0) bg_passive_tab_pane_cp3_ParamLimits

0xac72,	// (0x00041ba0) bg_passive_tab_pane_cp3

0x85cb,	// (0x0003f4f9) tabs_4_1_passive_pane_g1

0x85d3,	// (0x0003f501) tabs_4_1_passive_pane_t1

0xbc6e,	// (0x00042b9c) list_highlight_pane_cp2

0x9912,	// (0x00040840) list_set_pane_ParamLimits

0x9912,	// (0x00040840) list_set_pane

0x99ac,	// (0x000408da) main_pane_set_t1_ParamLimits

0x99ac,	// (0x000408da) main_pane_set_t1

0x99cc,	// (0x000408fa) main_pane_set_t2_ParamLimits

0x99cc,	// (0x000408fa) main_pane_set_t2

0x99e0,	// (0x0004090e) main_pane_set_t3_ParamLimits

0x99e0,	// (0x0004090e) main_pane_set_t3

0x99f2,	// (0x00040920) main_pane_set_t4_ParamLimits

0x99f2,	// (0x00040920) main_pane_set_t4

0x0003,

0xf9ae,	// (0x000468dc) main_pane_set_t_ParamLimits

0xf9ae,	// (0x000468dc) main_pane_set_t

0x9a04,	// (0x00040932) setting_code_pane

0x9a0e,	// (0x0004093c) setting_slider_graphic_pane

0x9a0e,	// (0x0004093c) setting_slider_pane

0x9a0e,	// (0x0004093c) setting_text_pane

0x9a0e,	// (0x0004093c) setting_volume_pane

0x1692,	// (0x000385c0) volume_set_pane

0xac80,	// (0x00041bae) bg_set_opt_pane_cp

0x169a,	// (0x000385c8) setting_slider_pane_t1

0x16b3,	// (0x000385e1) setting_slider_pane_t2

0x16cd,	// (0x000385fb) setting_slider_pane_t3

0x0002,

0xf5a2,	// (0x000464d0) setting_slider_pane_t

0x16e5,	// (0x00038613) slider_set_pane

0xac24,	// (0x00041b52) bg_set_opt_pane_cp2

0xac8e,	// (0x00041bbc) setting_slider_graphic_pane_g1

0x16fb,	// (0x00038629) setting_slider_graphic_pane_t1

0x170b,	// (0x00038639) setting_slider_graphic_pane_t2

0x0001,

0xf5a9,	// (0x000464d7) setting_slider_graphic_pane_t

0x171b,	// (0x00038649) slider_set_pane_cp

0xac24,	// (0x00041b52) input_focus_pane_cp1

0xdc25,	// (0x00044b53) list_set_text_pane

0xac1a,	// (0x00041b48) setting_text_pane_g1

0xac24,	// (0x00041b52) input_focus_pane_cp2

0xac1a,	// (0x00041b48) setting_code_pane_g1

0xac97,	// (0x00041bc5) setting_code_pane_t1

0x03e6,	// (0x00037314) set_text_pane_t1_ParamLimits

0x03e6,	// (0x00037314) set_text_pane_t1

0xbb7d,	// (0x00042aab) set_opt_bg_pane_g1

0xbb85,	// (0x00042ab3) set_opt_bg_pane_g2

0xdbff,	// (0x00044b2d) set_opt_bg_pane_g3

0xbb95,	// (0x00042ac3) set_opt_bg_pane_g4

0xbb9d,	// (0x00042acb) set_opt_bg_pane_g5

0xbba5,	// (0x00042ad3) set_opt_bg_pane_g6

0xdc09,	// (0x00044b37) set_opt_bg_pane_g7

0xdc11,	// (0x00044b3f) set_opt_bg_pane_g8

0xdc1b,	// (0x00044b49) set_opt_bg_pane_g9

0x0008,

0xf99b,	// (0x000468c9) set_opt_bg_pane_g

0xdbf2,	// (0x00044b20) slider_set_pane_g1

0x2989,	// (0x000398b7) slider_set_pane_g2

0x0006,

0xf98c,	// (0x000468ba) slider_set_pane_g

0x2925,	// (0x00039853) volume_set_pane_g1

0x292d,	// (0x0003985b) volume_set_pane_g2

0x2935,	// (0x00039863) volume_set_pane_g3

0x293d,	// (0x0003986b) volume_set_pane_g4

0x2945,	// (0x00039873) volume_set_pane_g5

0x294d,	// (0x0003987b) volume_set_pane_g6

0x2955,	// (0x00039883) volume_set_pane_g7

0x295d,	// (0x0003988b) volume_set_pane_g8

0x2965,	// (0x00039893) volume_set_pane_g9

0x296d,	// (0x0003989b) volume_set_pane_g10

0x0009,

0xf964,	// (0x00046892) volume_set_pane_g

0x85e5,	// (0x0003f513) indicator_pane_ParamLimits

0x85e5,	// (0x0003f513) indicator_pane

0x860d,	// (0x0003f53b) main_idle_pane_g2_ParamLimits

0x860d,	// (0x0003f53b) main_idle_pane_g2

0x8645,	// (0x0003f573) main_pane_idle_g1_ParamLimits

0x8645,	// (0x0003f573) main_pane_idle_g1

0xb161,	// (0x0004208f) popup_clock_digital_analogue_window_ParamLimits

0xb161,	// (0x0004208f) popup_clock_digital_analogue_window

0x866c,	// (0x0003f59a) soft_indicator_pane_ParamLimits

0x866c,	// (0x0003f59a) soft_indicator_pane

0x8686,	// (0x0003f5b4) wallpaper_pane_ParamLimits

0x8686,	// (0x0003f5b4) wallpaper_pane

0xac1a,	// (0x00041b48) wallpaper_pane_g1

0x8698,	// (0x0003f5c6) indicator_pane_g1_ParamLimits

0x8698,	// (0x0003f5c6) indicator_pane_g1

0xdd73,	// (0x00044ca1) navi_navi_icon_text_pane_srt_g1

0xb18f,	// (0x000420bd) soft_indicator_pane_t1

0xb1a9,	// (0x000420d7) aid_ps_area_pane

0x86ae,	// (0x0003f5dc) aid_ps_clock_pane

0xb1ba,	// (0x000420e8) aid_ps_indicator_pane

0xb1c6,	// (0x000420f4) indicator_ps_pane_ParamLimits

0xb1c6,	// (0x000420f4) indicator_ps_pane

0xb1d5,	// (0x00042103) power_save_pane_g1_ParamLimits

0xb1d5,	// (0x00042103) power_save_pane_g1

0xb1e1,	// (0x0004210f) power_save_pane_g2_ParamLimits

0xb1e1,	// (0x0004210f) power_save_pane_g2

0x11e7,	// (0x00038115) aid_navinavi_width_pane

0xb1a9,	// (0x000420d7) aid_ps_area_pane_ParamLimits

0x0001,

0xf5ae,	// (0x000464dc) power_save_pane_g_ParamLimits

0xf5ae,	// (0x000464dc) power_save_pane_g

0xb1ef,	// (0x0004211d) power_save_pane_t1_ParamLimits

0xb1ef,	// (0x0004211d) power_save_pane_t1

0x86ae,	// (0x0003f5dc) aid_ps_clock_pane_ParamLimits

0xb1ba,	// (0x000420e8) aid_ps_indicator_pane_ParamLimits

0xb201,	// (0x0004212f) power_save_pane_t4_ParamLimits

0xb201,	// (0x0004212f) power_save_pane_t4

0x0001,

0xf5b3,	// (0x000464e1) power_save_pane_t_ParamLimits

0xf5b3,	// (0x000464e1) power_save_pane_t

0xb22b,	// (0x00042159) power_save_t3_ParamLimits

0xb22b,	// (0x00042159) power_save_t3

0xb216,	// (0x00042144) power_save_t2_ParamLimits

0xb216,	// (0x00042144) power_save_t2

0xb240,	// (0x0004216e) indicator_ps_pane_g1

0x86bc,	// (0x0003f5ea) ai_gene_pane_ParamLimits

0x86bc,	// (0x0003f5ea) ai_gene_pane

0x86d3,	// (0x0003f601) ai_links_pane_ParamLimits

0x86d3,	// (0x0003f601) ai_links_pane

0x86eb,	// (0x0003f619) indicator_pane_cp1_ParamLimits

0x86eb,	// (0x0003f619) indicator_pane_cp1

0x86fa,	// (0x0003f628) main_pane_idle_g1_cp_ParamLimits

0x86fa,	// (0x0003f628) main_pane_idle_g1_cp

0xb249,	// (0x00042177) popup_ai_links_title_window

0x8712,	// (0x0003f640) soft_indicator_pane_cp1_ParamLimits

0x8712,	// (0x0003f640) soft_indicator_pane_cp1

0xda46,	// (0x00044974) ai_links_pane_g1

0xda4f,	// (0x0004497d) grid_ai_links_pane

0x9856,	// (0x00040784) ai_gene_pane_1

0xda34,	// (0x00044962) ai_gene_pane_2

0xda3d,	// (0x0004496b) list_highlight_pane_cp4

0x9832,	// (0x00040760) cell_ai_link_pane_ParamLimits

0x9832,	// (0x00040760) cell_ai_link_pane

0xda2c,	// (0x0004495a) cell_ai_link_pane_g1

0xb7dc,	// (0x0004270a) cell_ai_link_pane_g2

0x0001,

0xf93f,	// (0x0004686d) cell_ai_link_pane_g

0xac24,	// (0x00041b52) grid_highlight_cp2

0xac24,	// (0x00041b52) bg_popup_sub_pane_cp1

0xb260,	// (0x0004218e) popup_ai_links_title_window_t1

0xd97a,	// (0x000448a8) ai_gene_pane_1_g1_ParamLimits

0xd97a,	// (0x000448a8) ai_gene_pane_1_g1

0xd986,	// (0x000448b4) ai_gene_pane_1_g2_ParamLimits

0xd986,	// (0x000448b4) ai_gene_pane_1_g2

0x0001,

0xf935,	// (0x00046863) ai_gene_pane_1_g_ParamLimits

0xf935,	// (0x00046863) ai_gene_pane_1_g

0xd993,	// (0x000448c1) ai_gene_pane_1_t1_ParamLimits

0xd993,	// (0x000448c1) ai_gene_pane_1_t1

0xd9c7,	// (0x000448f5) grid_ai_soft_ind_pane

0xd965,	// (0x00044893) ai_gene_pane_2_t1_ParamLimits

0xd965,	// (0x00044893) ai_gene_pane_2_t1

0x8726,	// (0x0003f654) main_pane_empty_t1_ParamLimits

0x8726,	// (0x0003f654) main_pane_empty_t1

0x873e,	// (0x0003f66c) main_pane_empty_t2_ParamLimits

0x873e,	// (0x0003f66c) main_pane_empty_t2

0x8753,	// (0x0003f681) main_pane_empty_t3_ParamLimits

0x8753,	// (0x0003f681) main_pane_empty_t3

0x8765,	// (0x0003f693) main_pane_empty_t4_ParamLimits

0x8765,	// (0x0003f693) main_pane_empty_t4

0x8777,	// (0x0003f6a5) main_pane_empty_t5_ParamLimits

0x8777,	// (0x0003f6a5) main_pane_empty_t5

0x0004,

0xf5b8,	// (0x000464e6) main_pane_empty_t_ParamLimits

0xf5b8,	// (0x000464e6) main_pane_empty_t

0xbbce,	// (0x00042afc) bg_popup_window_pane_ParamLimits

0xbbce,	// (0x00042afc) bg_popup_window_pane

0xd6d5,	// (0x00044603) find_popup_pane_cp2_ParamLimits

0xd6d5,	// (0x00044603) find_popup_pane_cp2

0xd6ff,	// (0x0004462d) heading_pane_ParamLimits

0xd6ff,	// (0x0004462d) heading_pane

0xac24,	// (0x00041b52) bg_popup_sub_pane

0x9795,	// (0x000406c3) bg_popup_window_pane_g1_ParamLimits

0x9795,	// (0x000406c3) bg_popup_window_pane_g1

0x97a4,	// (0x000406d2) bg_popup_window_pane_g2_ParamLimits

0x97a4,	// (0x000406d2) bg_popup_window_pane_g2

0x97b0,	// (0x000406de) bg_popup_window_pane_g3_ParamLimits

0x97b0,	// (0x000406de) bg_popup_window_pane_g3

0x97bc,	// (0x000406ea) bg_popup_window_pane_g4_ParamLimits

0x97bc,	// (0x000406ea) bg_popup_window_pane_g4

0x97cb,	// (0x000406f9) bg_popup_window_pane_g5_ParamLimits

0x97cb,	// (0x000406f9) bg_popup_window_pane_g5

0x97db,	// (0x00040709) bg_popup_window_pane_g6_ParamLimits

0x97db,	// (0x00040709) bg_popup_window_pane_g6

0x97e7,	// (0x00040715) bg_popup_window_pane_g7_ParamLimits

0x97e7,	// (0x00040715) bg_popup_window_pane_g7

0x97f6,	// (0x00040724) bg_popup_window_pane_g8_ParamLimits

0x97f6,	// (0x00040724) bg_popup_window_pane_g8

0x9805,	// (0x00040733) bg_popup_window_pane_g9_ParamLimits

0x9805,	// (0x00040733) bg_popup_window_pane_g9

0xd6bb,	// (0x000445e9) bg_popup_window_pane_g10_ParamLimits

0xd6bb,	// (0x000445e9) bg_popup_window_pane_g10

0x0009,

0xf8fd,	// (0x0004682b) bg_popup_window_pane_g_ParamLimits

0xf8fd,	// (0x0004682b) bg_popup_window_pane_g

0xd672,	// (0x000445a0) bg_popup_heading_pane_ParamLimits

0xd672,	// (0x000445a0) bg_popup_heading_pane

0x2ab5,	// (0x000399e3) tabs_4_passive_pane_cp_srt_ParamLimits

0x2ab5,	// (0x000399e3) tabs_4_passive_pane_cp_srt

0x2ac7,	// (0x000399f5) tabs_4_passive_pane_srt_ParamLimits

0xd686,	// (0x000445b4) heading_pane_g2

0x2ac7,	// (0x000399f5) tabs_4_passive_pane_srt

0xcb7d,	// (0x00043aab) bg_passive_tab_pane_cp3_srt_ParamLimits

0xcb7d,	// (0x00043aab) bg_passive_tab_pane_cp3_srt

0xd68e,	// (0x000445bc) heading_pane_t1_ParamLimits

0xd68e,	// (0x000445bc) heading_pane_t1

0xd6a5,	// (0x000445d3) heading_pane_t2_ParamLimits

0xd6a5,	// (0x000445d3) heading_pane_t2

0x0001,

0xf8f8,	// (0x00046826) heading_pane_t_ParamLimits

0xf8f8,	// (0x00046826) heading_pane_t

0xd1bd,	// (0x000440eb) bg_popup_heading_pane_g1

0xd24e,	// (0x0004417c) bg_popup_heading_pane_g2

0xd258,	// (0x00044186) bg_popup_heading_pane_g3

0xd262,	// (0x00044190) bg_popup_heading_pane_g4

0xd26c,	// (0x0004419a) bg_popup_heading_pane_g5

0xd276,	// (0x000441a4) bg_popup_heading_pane_g6

0xd27e,	// (0x000441ac) bg_popup_heading_pane_g7

0xd286,	// (0x000441b4) bg_popup_heading_pane_g8

0xd290,	// (0x000441be) bg_popup_heading_pane_g9

0x0008,

0xf8b4,	// (0x000467e2) bg_popup_heading_pane_g

0xca81,	// (0x000439af) bg_popup_sub_pane_g1

0xca89,	// (0x000439b7) bg_popup_sub_pane_g2

0xca91,	// (0x000439bf) bg_popup_sub_pane_g3

0xca99,	// (0x000439c7) bg_popup_sub_pane_g4

0xcaa1,	// (0x000439cf) bg_popup_sub_pane_g5

0xcaa9,	// (0x000439d7) bg_popup_sub_pane_g6

0xcab1,	// (0x000439df) bg_popup_sub_pane_g7

0xcab9,	// (0x000439e7) bg_popup_sub_pane_g8

0xcac1,	// (0x000439ef) bg_popup_sub_pane_g9

0x0008,

0xf88e,	// (0x000467bc) bg_popup_sub_pane_g

0xac72,	// (0x00041ba0) bg_popup_window_pane_cp5_ParamLimits

0xac72,	// (0x00041ba0) bg_popup_window_pane_cp5

0xb27d,	// (0x000421ab) popup_note_window_g1_ParamLimits

0xb27d,	// (0x000421ab) popup_note_window_g1

0xb289,	// (0x000421b7) popup_note_window_t1_ParamLimits

0xb289,	// (0x000421b7) popup_note_window_t1

0xb29f,	// (0x000421cd) popup_note_window_t2_ParamLimits

0xb29f,	// (0x000421cd) popup_note_window_t2

0xb2b5,	// (0x000421e3) popup_note_window_t3_ParamLimits

0xb2b5,	// (0x000421e3) popup_note_window_t3

0xb2cb,	// (0x000421f9) popup_note_window_t4_ParamLimits

0xb2cb,	// (0x000421f9) popup_note_window_t4

0xb6cc,	// (0x000425fa) popup_note_window_t5_ParamLimits

0xb6cc,	// (0x000425fa) popup_note_window_t5

0x0004,

0xf5c3,	// (0x000464f1) popup_note_window_t_ParamLimits

0xf5c3,	// (0x000464f1) popup_note_window_t

0xb6f0,	// (0x0004261e) bg_popup_window_pane_cp6_ParamLimits

0xb6f0,	// (0x0004261e) bg_popup_window_pane_cp6

0xd139,	// (0x00044067) popup_note_image_window_g1_ParamLimits

0xd139,	// (0x00044067) popup_note_image_window_g1

0xd145,	// (0x00044073) popup_note_image_window_g2_ParamLimits

0xd145,	// (0x00044073) popup_note_image_window_g2

0x0001,

0xf882,	// (0x000467b0) popup_note_image_window_g_ParamLimits

0xf882,	// (0x000467b0) popup_note_image_window_g

0xd15e,	// (0x0004408c) popup_note_image_window_t1_ParamLimits

0xd15e,	// (0x0004408c) popup_note_image_window_t1

0xd177,	// (0x000440a5) popup_note_image_window_t2_ParamLimits

0xd177,	// (0x000440a5) popup_note_image_window_t2

0xd190,	// (0x000440be) popup_note_image_window_t3_ParamLimits

0xd190,	// (0x000440be) popup_note_image_window_t3

0x0002,

0xf887,	// (0x000467b5) popup_note_image_window_t_ParamLimits

0xf887,	// (0x000467b5) popup_note_image_window_t

0xd016,	// (0x00043f44) bg_popup_window_pane_cp7_ParamLimits

0xd016,	// (0x00043f44) bg_popup_window_pane_cp7

0xd046,	// (0x00043f74) popup_note_wait_window_g1_ParamLimits

0xd046,	// (0x00043f74) popup_note_wait_window_g1

0xd052,	// (0x00043f80) popup_note_wait_window_g2_ParamLimits

0xd052,	// (0x00043f80) popup_note_wait_window_g2

0x0002,

0xf870,	// (0x0004679e) popup_note_wait_window_g_ParamLimits

0xf870,	// (0x0004679e) popup_note_wait_window_g

0xd06a,	// (0x00043f98) popup_note_wait_window_t1_ParamLimits

0xd06a,	// (0x00043f98) popup_note_wait_window_t1

0xd091,	// (0x00043fbf) popup_note_wait_window_t2_ParamLimits

0xd091,	// (0x00043fbf) popup_note_wait_window_t2

0xd0ae,	// (0x00043fdc) popup_note_wait_window_t3_ParamLimits

0xd0ae,	// (0x00043fdc) popup_note_wait_window_t3

0xd0c1,	// (0x00043fef) popup_note_wait_window_t4_ParamLimits

0xd0c1,	// (0x00043fef) popup_note_wait_window_t4

0x0004,

0xf877,	// (0x000467a5) popup_note_wait_window_t_ParamLimits

0xf877,	// (0x000467a5) popup_note_wait_window_t

0xd0e6,	// (0x00044014) wait_bar_pane_ParamLimits

0xd0e6,	// (0x00044014) wait_bar_pane

0xac24,	// (0x00041b52) wait_anim_pane

0xac24,	// (0x00041b52) wait_border_pane

0xac1a,	// (0x00041b48) wait_anim_pane_g1

0xac1a,	// (0x00041b48) wait_anim_pane_g2

0x0001,

0xf742,	// (0x00046670) wait_anim_pane_g

0xcfba,	// (0x00043ee8) wait_border_pane_g1

0xcfc5,	// (0x00043ef3) wait_border_pane_g2

0xcfce,	// (0x00043efc) wait_border_pane_g3

0x0002,

0xf869,	// (0x00046797) wait_border_pane_g

0xcf17,	// (0x00043e45) bg_popup_window_pane_cp16_ParamLimits

0xcf17,	// (0x00043e45) bg_popup_window_pane_cp16

0xcf25,	// (0x00043e53) indicator_popup_pane_cp4_ParamLimits

0xcf25,	// (0x00043e53) indicator_popup_pane_cp4

0xcf39,	// (0x00043e67) popup_query_data_window_t1_ParamLimits

0xcf39,	// (0x00043e67) popup_query_data_window_t1

0xcf4b,	// (0x00043e79) popup_query_data_window_t2_ParamLimits

0xcf4b,	// (0x00043e79) popup_query_data_window_t2

0xcf64,	// (0x00043e92) popup_query_data_window_t3_ParamLimits

0xcf64,	// (0x00043e92) popup_query_data_window_t3

0x0002,

0xf862,	// (0x00046790) popup_query_data_window_t_ParamLimits

0xf862,	// (0x00046790) popup_query_data_window_t

0xcf7e,	// (0x00043eac) query_popup_data_pane_ParamLimits

0xcf7e,	// (0x00043eac) query_popup_data_pane

0xcf92,	// (0x00043ec0) query_popup_data_pane_cp1_ParamLimits

0xcf92,	// (0x00043ec0) query_popup_data_pane_cp1

0xb6f0,	// (0x0004261e) bg_popup_window_pane_cp10_ParamLimits

0xb6f0,	// (0x0004261e) bg_popup_window_pane_cp10

0xce7a,	// (0x00043da8) indicator_popup_pane_ParamLimits

0xce7a,	// (0x00043da8) indicator_popup_pane

0xb747,	// (0x00042675) popup_query_code_window_t1_ParamLimits

0xb747,	// (0x00042675) popup_query_code_window_t1

0xce92,	// (0x00043dc0) popup_query_code_window_t2_ParamLimits

0xce92,	// (0x00043dc0) popup_query_code_window_t2

0xced0,	// (0x00043dfe) popup_query_code_window_t3_ParamLimits

0xced0,	// (0x00043dfe) popup_query_code_window_t3

0x0002,

0xf85b,	// (0x00046789) popup_query_code_window_t_ParamLimits

0xf85b,	// (0x00046789) popup_query_code_window_t

0xceff,	// (0x00043e2d) query_popup_pane_ParamLimits

0xceff,	// (0x00043e2d) query_popup_pane

0xb6f0,	// (0x0004261e) bg_popup_window_pane_cp15_ParamLimits

0xb6f0,	// (0x0004261e) bg_popup_window_pane_cp15

0xb70e,	// (0x0004263c) indicator_popup_pane_cp1_ParamLimits

0xb70e,	// (0x0004263c) indicator_popup_pane_cp1

0xb721,	// (0x0004264f) indicator_popup_pane_cp2_ParamLimits

0xb721,	// (0x0004264f) indicator_popup_pane_cp2

0xb734,	// (0x00042662) popup_query_data_code_window_g1_ParamLimits

0xb734,	// (0x00042662) popup_query_data_code_window_g1

0xb747,	// (0x00042675) popup_query_data_code_window_t1_ParamLimits

0xb747,	// (0x00042675) popup_query_data_code_window_t1

0xb759,	// (0x00042687) popup_query_data_code_window_t2_ParamLimits

0xb759,	// (0x00042687) popup_query_data_code_window_t2

0xb76b,	// (0x00042699) popup_query_data_code_window_t3_ParamLimits

0xb76b,	// (0x00042699) popup_query_data_code_window_t3

0xb781,	// (0x000426af) popup_query_data_code_window_t4_ParamLimits

0xb781,	// (0x000426af) popup_query_data_code_window_t4

0x0003,

0xf5ce,	// (0x000464fc) popup_query_data_code_window_t_ParamLimits

0xf5ce,	// (0x000464fc) popup_query_data_code_window_t

0x26de,	// (0x0003960c) list_single_midp_graphic_pane_g3

0xb799,	// (0x000426c7) query_popup_data_pane_cp2_ParamLimits

0xb7ac,	// (0x000426da) query_popup_pane_cp2_ParamLimits

0xb7ac,	// (0x000426da) query_popup_pane_cp2

0xac24,	// (0x00041b52) bg_popup_window_pane_cp11

0xce4e,	// (0x00043d7c) heading_pane_cp5

0xb83a,	// (0x00042768) listscroll_popup_info_pane

0xac24,	// (0x00041b52) input_focus_pane_cp3

0xb7bf,	// (0x000426ed) query_popup_pane_t1

0xb7cd,	// (0x000426fb) list_popup_info_pane_ParamLimits

0xb7cd,	// (0x000426fb) list_popup_info_pane

0xb7dc,	// (0x0004270a) listscroll_popup_info_pane_g1

0xb7e4,	// (0x00042712) scroll_pane_cp7

0xb7ee,	// (0x0004271c) popup_info_list_pane_t1_ParamLimits

0xb7ee,	// (0x0004271c) popup_info_list_pane_t1

0xb808,	// (0x00042736) popup_info_list_pane_t2_ParamLimits

0xb808,	// (0x00042736) popup_info_list_pane_t2

0x0001,

0xf5d7,	// (0x00046505) popup_info_list_pane_t_ParamLimits

0xf5d7,	// (0x00046505) popup_info_list_pane_t

0xac24,	// (0x00041b52) bg_popup_window_pane_cp12

0xdd8d,	// (0x00044cbb) find_popup_pane

0xac80,	// (0x00041bae) bg_popup_window_pane_cp3

0xb822,	// (0x00042750) heading_pane_cp3

0xb82e,	// (0x0004275c) listscroll_popup_graphic_pane

0xac24,	// (0x00041b52) bg_popup_window_pane_cp4

0x87d9,	// (0x0003f707) heading_pane_cp4

0xb83a,	// (0x00042768) listscroll_popup_colour_pane

0x87e1,	// (0x0003f70f) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x87e1,	// (0x0003f70f) cell_large_graphic_colour_none_popup_pane

0x87f5,	// (0x0003f723) grid_large_graphic_colour_popup_pane_ParamLimits

0x87f5,	// (0x0003f723) grid_large_graphic_colour_popup_pane

0x8819,	// (0x0003f747) listscroll_popup_colour_pane_g1_ParamLimits

0x8819,	// (0x0003f747) listscroll_popup_colour_pane_g1

0x8830,	// (0x0003f75e) listscroll_popup_colour_pane_g2_ParamLimits

0x8830,	// (0x0003f75e) listscroll_popup_colour_pane_g2

0x8847,	// (0x0003f775) listscroll_popup_colour_pane_g3_ParamLimits

0x8847,	// (0x0003f775) listscroll_popup_colour_pane_g3

0x8857,	// (0x0003f785) listscroll_popup_colour_pane_g4_ParamLimits

0x8857,	// (0x0003f785) listscroll_popup_colour_pane_g4

0x0003,

0xf5dc,	// (0x0004650a) listscroll_popup_colour_pane_g_ParamLimits

0xf5dc,	// (0x0004650a) listscroll_popup_colour_pane_g

0xb842,	// (0x00042770) scroll_pane_cp6_ParamLimits

0xb842,	// (0x00042770) scroll_pane_cp6

0x8867,	// (0x0003f795) cell_large_graphic_colour_popup_pane_ParamLimits

0x8867,	// (0x0003f795) cell_large_graphic_colour_popup_pane

0xb854,	// (0x00042782) cell_large_graphic_colour_none_popup_pane_t1

0xac24,	// (0x00041b52) grid_highlight_pane_cp5

0xb863,	// (0x00042791) cell_large_graphic_colour_popup_pane_g1

0xb86b,	// (0x00042799) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5e5,	// (0x00046513) cell_large_graphic_colour_popup_pane_g

0xb873,	// (0x000427a1) cell_large_graphic_colour_popup_pane_g2_copy1

0xb87c,	// (0x000427aa) grid_highlight_pane_cp4

0xb884,	// (0x000427b2) bg_popup_window_pane_cp8_ParamLimits

0xb884,	// (0x000427b2) bg_popup_window_pane_cp8

0xb89f,	// (0x000427cd) popup_snote_single_text_window_g1_ParamLimits

0xb89f,	// (0x000427cd) popup_snote_single_text_window_g1

0xb8b1,	// (0x000427df) popup_snote_single_text_window_t1_ParamLimits

0xb8b1,	// (0x000427df) popup_snote_single_text_window_t1

0xb8c4,	// (0x000427f2) popup_snote_single_text_window_t2_ParamLimits

0xb8c4,	// (0x000427f2) popup_snote_single_text_window_t2

0xb8d7,	// (0x00042805) popup_snote_single_text_window_t3_ParamLimits

0xb8d7,	// (0x00042805) popup_snote_single_text_window_t3

0xb910,	// (0x0004283e) popup_snote_single_text_window_t4_ParamLimits

0xb910,	// (0x0004283e) popup_snote_single_text_window_t4

0xb944,	// (0x00042872) popup_snote_single_text_window_t5_ParamLimits

0xb944,	// (0x00042872) popup_snote_single_text_window_t5

0x0004,

0xf5ea,	// (0x00046518) popup_snote_single_text_window_t_ParamLimits

0xf5ea,	// (0x00046518) popup_snote_single_text_window_t

0xb973,	// (0x000428a1) bg_popup_window_pane_cp9_ParamLimits

0xb973,	// (0x000428a1) bg_popup_window_pane_cp9

0xb89f,	// (0x000427cd) popup_snote_single_graphic_window_g1_ParamLimits

0xb89f,	// (0x000427cd) popup_snote_single_graphic_window_g1

0xb981,	// (0x000428af) popup_snote_single_graphic_window_g2_ParamLimits

0xb981,	// (0x000428af) popup_snote_single_graphic_window_g2

0x0001,

0xf5f5,	// (0x00046523) popup_snote_single_graphic_window_g_ParamLimits

0xf5f5,	// (0x00046523) popup_snote_single_graphic_window_g

0xb98d,	// (0x000428bb) popup_snote_single_graphic_window_t1_ParamLimits

0xb98d,	// (0x000428bb) popup_snote_single_graphic_window_t1

0xb9a0,	// (0x000428ce) popup_snote_single_graphic_window_t2_ParamLimits

0xb9a0,	// (0x000428ce) popup_snote_single_graphic_window_t2

0xb9b3,	// (0x000428e1) popup_snote_single_graphic_window_t3_ParamLimits

0xb9b3,	// (0x000428e1) popup_snote_single_graphic_window_t3

0xb9ec,	// (0x0004291a) popup_snote_single_graphic_window_t4_ParamLimits

0xb9ec,	// (0x0004291a) popup_snote_single_graphic_window_t4

0xba20,	// (0x0004294e) popup_snote_single_graphic_window_t5_ParamLimits

0xba20,	// (0x0004294e) popup_snote_single_graphic_window_t5

0x0004,

0xf5fa,	// (0x00046528) popup_snote_single_graphic_window_t_ParamLimits

0xf5fa,	// (0x00046528) popup_snote_single_graphic_window_t

0xdd15,	// (0x00044c43) grid_graphic_popup_pane_ParamLimits

0xdd15,	// (0x00044c43) grid_graphic_popup_pane

0xdd3d,	// (0x00044c6b) listscroll_popup_graphic_pane_g1_ParamLimits

0xdd3d,	// (0x00044c6b) listscroll_popup_graphic_pane_g1

0x9b1a,	// (0x00040a48) listscroll_popup_graphic_pane_g2_ParamLimits

0x9b1a,	// (0x00040a48) listscroll_popup_graphic_pane_g2

0x0001,

0xf9d8,	// (0x00046906) listscroll_popup_graphic_pane_g_ParamLimits

0xf9d8,	// (0x00046906) listscroll_popup_graphic_pane_g

0xd6f3,	// (0x00044621) scroll_pane_cp5

0x9ade,	// (0x00040a0c) cell_graphic_popup_pane_ParamLimits

0x9ade,	// (0x00040a0c) cell_graphic_popup_pane

0xdce0,	// (0x00044c0e) cell_graphic_popup_pane_g1

0xdce8,	// (0x00044c16) cell_graphic_popup_pane_g2

0xb873,	// (0x000427a1) cell_graphic_popup_pane_g3

0x0002,

0xf9d1,	// (0x000468ff) cell_graphic_popup_pane_g

0xdcf1,	// (0x00044c1f) cell_graphic_popup_pane_t2

0xb87c,	// (0x000427aa) grid_highlight_pane_cp3

0xba61,	// (0x0004298f) list_gen_pane_ParamLimits

0xba61,	// (0x0004298f) list_gen_pane

0xba89,	// (0x000429b7) scroll_pane

0x9a99,	// (0x000409c7) bg_list_pane_g1_ParamLimits

0x9a99,	// (0x000409c7) bg_list_pane_g1

0xdc8f,	// (0x00044bbd) bg_list_pane_g2_ParamLimits

0xdc8f,	// (0x00044bbd) bg_list_pane_g2

0xdca2,	// (0x00044bd0) bg_list_pane_g3_ParamLimits

0xdca2,	// (0x00044bd0) bg_list_pane_g3

0xdcb4,	// (0x00044be2) bg_list_pane_g4_ParamLimits

0xdcb4,	// (0x00044be2) bg_list_pane_g4

0x9ab4,	// (0x000409e2) bg_list_pane_g5_ParamLimits

0x9ab4,	// (0x000409e2) bg_list_pane_g5

0x0004,

0xf9c6,	// (0x000468f4) bg_list_pane_g_ParamLimits

0xf9c6,	// (0x000468f4) bg_list_pane_g

0x7986,	// (0x0003e8b4) list_double2_graphic_large_graphic_pane_ParamLimits

0x7986,	// (0x0003e8b4) list_double2_graphic_large_graphic_pane

0x7986,	// (0x0003e8b4) list_double2_graphic_pane_ParamLimits

0x7986,	// (0x0003e8b4) list_double2_graphic_pane

0x7986,	// (0x0003e8b4) list_double2_large_graphic_pane_ParamLimits

0x7986,	// (0x0003e8b4) list_double2_large_graphic_pane

0x7986,	// (0x0003e8b4) list_double2_pane_ParamLimits

0x7986,	// (0x0003e8b4) list_double2_pane

0x7986,	// (0x0003e8b4) list_double_graphic_heading_pane_ParamLimits

0x7986,	// (0x0003e8b4) list_double_graphic_heading_pane

0x7986,	// (0x0003e8b4) list_double_graphic_pane_ParamLimits

0x7986,	// (0x0003e8b4) list_double_graphic_pane

0x7986,	// (0x0003e8b4) list_double_heading_pane_ParamLimits

0x7986,	// (0x0003e8b4) list_double_heading_pane

0x7986,	// (0x0003e8b4) list_double_large_graphic_pane_ParamLimits

0x7986,	// (0x0003e8b4) list_double_large_graphic_pane

0x7986,	// (0x0003e8b4) list_double_number_pane_ParamLimits

0x7986,	// (0x0003e8b4) list_double_number_pane

0x7986,	// (0x0003e8b4) list_double_pane_ParamLimits

0x7986,	// (0x0003e8b4) list_double_pane

0x7986,	// (0x0003e8b4) list_double_time_pane_ParamLimits

0x7986,	// (0x0003e8b4) list_double_time_pane

0x7986,	// (0x0003e8b4) list_setting_number_pane_ParamLimits

0x7986,	// (0x0003e8b4) list_setting_number_pane

0x7986,	// (0x0003e8b4) list_setting_pane_ParamLimits

0x7986,	// (0x0003e8b4) list_setting_pane

0x9a50,	// (0x0004097e) list_single_2graphic_pane_ParamLimits

0x9a50,	// (0x0004097e) list_single_2graphic_pane

0x9a50,	// (0x0004097e) list_single_graphic_heading_pane_ParamLimits

0x9a50,	// (0x0004097e) list_single_graphic_heading_pane

0x9a50,	// (0x0004097e) list_single_graphic_pane_ParamLimits

0x9a50,	// (0x0004097e) list_single_graphic_pane

0x9a50,	// (0x0004097e) list_single_heading_pane_ParamLimits

0x9a50,	// (0x0004097e) list_single_heading_pane

0x9a87,	// (0x000409b5) list_single_large_graphic_pane_ParamLimits

0x9a87,	// (0x000409b5) list_single_large_graphic_pane

0x9a50,	// (0x0004097e) list_single_number_heading_pane_ParamLimits

0x9a50,	// (0x0004097e) list_single_number_heading_pane

0x9a50,	// (0x0004097e) list_single_number_pane_ParamLimits

0x9a50,	// (0x0004097e) list_single_number_pane

0x9a50,	// (0x0004097e) list_single_pane_ParamLimits

0x9a50,	// (0x0004097e) list_single_pane

0xac24,	// (0x00041b52) list_highlight_pane_cp1

0xdc36,	// (0x00044b64) list_single_pane_g1_ParamLimits

0xdc36,	// (0x00044b64) list_single_pane_g1

0x26ad,	// (0x000395db) list_single_pane_g2_ParamLimits

0x26ad,	// (0x000395db) list_single_pane_g2

0x0001,

0xf616,	// (0x00046544) list_single_pane_g_ParamLimits

0xf616,	// (0x00046544) list_single_pane_g

0x0d85,	// (0x00037cb3) list_single_pane_t1_ParamLimits

0x0d85,	// (0x00037cb3) list_single_pane_t1

0xdc36,	// (0x00044b64) list_single_number_pane_g1_ParamLimits

0xdc36,	// (0x00044b64) list_single_number_pane_g1

0x26ad,	// (0x000395db) list_single_number_pane_g2_ParamLimits

0x26ad,	// (0x000395db) list_single_number_pane_g2

0x0001,

0xf616,	// (0x00046544) list_single_number_pane_g_ParamLimits

0xf616,	// (0x00046544) list_single_number_pane_g

0x0c1c,	// (0x00037b4a) list_single_number_pane_t1_ParamLimits

0x0c1c,	// (0x00037b4a) list_single_number_pane_t1

0x7948,	// (0x0003e876) list_single_number_pane_t2_ParamLimits

0x7948,	// (0x0003e876) list_single_number_pane_t2

0x0001,

0xf987,	// (0x000468b5) list_single_number_pane_t_ParamLimits

0xf987,	// (0x000468b5) list_single_number_pane_t

0x73aa,	// (0x0003e2d8) list_single_graphic_pane_g1_ParamLimits

0x73aa,	// (0x0003e2d8) list_single_graphic_pane_g1

0xdc36,	// (0x00044b64) list_single_graphic_pane_g2_ParamLimits

0xdc36,	// (0x00044b64) list_single_graphic_pane_g2

0x26ad,	// (0x000395db) list_single_graphic_pane_g3_ParamLimits

0x26ad,	// (0x000395db) list_single_graphic_pane_g3

0x0002,

0xf605,	// (0x00046533) list_single_graphic_pane_g_ParamLimits

0xf605,	// (0x00046533) list_single_graphic_pane_g

0x73b6,	// (0x0003e2e4) list_single_graphic_pane_t1_ParamLimits

0x73b6,	// (0x0003e2e4) list_single_graphic_pane_t1

0x73cc,	// (0x0003e2fa) list_single_heading_pane_g1_ParamLimits

0x73cc,	// (0x0003e2fa) list_single_heading_pane_g1

0x26ad,	// (0x000395db) list_single_heading_pane_g2_ParamLimits

0x26ad,	// (0x000395db) list_single_heading_pane_g2

0x0001,

0xf60c,	// (0x0004653a) list_single_heading_pane_g_ParamLimits

0xf60c,	// (0x0004653a) list_single_heading_pane_g

0x73df,	// (0x0003e30d) list_single_heading_pane_t1_ParamLimits

0x73df,	// (0x0003e30d) list_single_heading_pane_t1

0x7c8e,	// (0x0003ebbc) list_single_heading_pane_t2_ParamLimits

0x7c8e,	// (0x0003ebbc) list_single_heading_pane_t2

0x0001,

0xf611,	// (0x0004653f) list_single_heading_pane_t_ParamLimits

0xf611,	// (0x0004653f) list_single_heading_pane_t

0xdc36,	// (0x00044b64) list_single_number_heading_pane_g1_ParamLimits

0xdc36,	// (0x00044b64) list_single_number_heading_pane_g1

0x26ad,	// (0x000395db) list_single_number_heading_pane_g2_ParamLimits

0x26ad,	// (0x000395db) list_single_number_heading_pane_g2

0x0001,

0xf616,	// (0x00046544) list_single_number_heading_pane_g_ParamLimits

0xf616,	// (0x00046544) list_single_number_heading_pane_g

0x73f5,	// (0x0003e323) list_single_number_heading_pane_t1_ParamLimits

0x73f5,	// (0x0003e323) list_single_number_heading_pane_t1

0x740b,	// (0x0003e339) list_single_number_heading_pane_t2_ParamLimits

0x740b,	// (0x0003e339) list_single_number_heading_pane_t2

0x0d5f,	// (0x00037c8d) list_single_number_heading_pane_t3_ParamLimits

0x0d5f,	// (0x00037c8d) list_single_number_heading_pane_t3

0x0002,

0xf61b,	// (0x00046549) list_single_number_heading_pane_t_ParamLimits

0xf61b,	// (0x00046549) list_single_number_heading_pane_t

0x741d,	// (0x0003e34b) list_single_graphic_heading_pane_g1_ParamLimits

0x741d,	// (0x0003e34b) list_single_graphic_heading_pane_g1

0x7ca0,	// (0x0003ebce) list_single_graphic_heading_pane_g4_ParamLimits

0x7ca0,	// (0x0003ebce) list_single_graphic_heading_pane_g4

0x26ad,	// (0x000395db) list_single_graphic_heading_pane_g5_ParamLimits

0x26ad,	// (0x000395db) list_single_graphic_heading_pane_g5

0x0002,

0xf622,	// (0x00046550) list_single_graphic_heading_pane_g_ParamLimits

0xf622,	// (0x00046550) list_single_graphic_heading_pane_g

0x73f5,	// (0x0003e323) list_single_graphic_heading_pane_t1_ParamLimits

0x73f5,	// (0x0003e323) list_single_graphic_heading_pane_t1

0x7433,	// (0x0003e361) list_single_graphic_heading_pane_t2_ParamLimits

0x7433,	// (0x0003e361) list_single_graphic_heading_pane_t2

0x0001,

0xf629,	// (0x00046557) list_single_graphic_heading_pane_t_ParamLimits

0xf629,	// (0x00046557) list_single_graphic_heading_pane_t

0x2b5a,	// (0x00039a88) list_single_large_graphic_pane_g1_ParamLimits

0x2b5a,	// (0x00039a88) list_single_large_graphic_pane_g1

0x2b66,	// (0x00039a94) list_single_large_graphic_pane_g2_ParamLimits

0x2b66,	// (0x00039a94) list_single_large_graphic_pane_g2

0x2b72,	// (0x00039aa0) list_single_large_graphic_pane_g3_ParamLimits

0x2b72,	// (0x00039aa0) list_single_large_graphic_pane_g3

0x0002,

0xf62e,	// (0x0004655c) list_single_large_graphic_pane_g_ParamLimits

0xf62e,	// (0x0004655c) list_single_large_graphic_pane_g

0xcfc5,	// (0x00043ef3) wait_border_pane_g2_copy1

0x7cb1,	// (0x0003ebdf) list_single_large_graphic_pane_g4_cp2

0x0d9b,	// (0x00037cc9) list_single_large_graphic_pane_t1_ParamLimits

0x0d9b,	// (0x00037cc9) list_single_large_graphic_pane_t1

0xdc36,	// (0x00044b64) list_double_pane_g1_ParamLimits

0xdc36,	// (0x00044b64) list_double_pane_g1

0x26ad,	// (0x000395db) list_double_pane_g2_ParamLimits

0x26ad,	// (0x000395db) list_double_pane_g2

0x0001,

0xf616,	// (0x00046544) list_double_pane_g_ParamLimits

0xf616,	// (0x00046544) list_double_pane_g

0x0d85,	// (0x00037cb3) list_double_pane_t1_ParamLimits

0x0d85,	// (0x00037cb3) list_double_pane_t1

0x7449,	// (0x0003e377) list_double_pane_t2_ParamLimits

0x7449,	// (0x0003e377) list_double_pane_t2

0x0001,

0xf635,	// (0x00046563) list_double_pane_t_ParamLimits

0xf635,	// (0x00046563) list_double_pane_t

0x745b,	// (0x0003e389) list_double2_pane_g1_ParamLimits

0x745b,	// (0x0003e389) list_double2_pane_g1

0x0bbc,	// (0x00037aea) list_double2_pane_g2_ParamLimits

0x0bbc,	// (0x00037aea) list_double2_pane_g2

0x0001,

0xf63a,	// (0x00046568) list_double2_pane_g_ParamLimits

0xf63a,	// (0x00046568) list_double2_pane_g

0x746c,	// (0x0003e39a) list_double2_pane_t1_ParamLimits

0x746c,	// (0x0003e39a) list_double2_pane_t1

0x7482,	// (0x0003e3b0) list_double2_pane_t2_ParamLimits

0x7482,	// (0x0003e3b0) list_double2_pane_t2

0x0001,

0xf63f,	// (0x0004656d) list_double2_pane_t_ParamLimits

0xf63f,	// (0x0004656d) list_double2_pane_t

0xdc36,	// (0x00044b64) list_double_number_pane_g1_ParamLimits

0xdc36,	// (0x00044b64) list_double_number_pane_g1

0x26ad,	// (0x000395db) list_double_number_pane_g2_ParamLimits

0x26ad,	// (0x000395db) list_double_number_pane_g2

0x0001,

0xf616,	// (0x00046544) list_double_number_pane_g_ParamLimits

0xf616,	// (0x00046544) list_double_number_pane_g

0x7494,	// (0x0003e3c2) list_double_number_pane_t1_ParamLimits

0x7494,	// (0x0003e3c2) list_double_number_pane_t1

0x0c1c,	// (0x00037b4a) list_double_number_pane_t2_ParamLimits

0x0c1c,	// (0x00037b4a) list_double_number_pane_t2

0x74a6,	// (0x0003e3d4) list_double_number_pane_t3_ParamLimits

0x74a6,	// (0x0003e3d4) list_double_number_pane_t3

0x0002,

0xf644,	// (0x00046572) list_double_number_pane_t_ParamLimits

0xf644,	// (0x00046572) list_double_number_pane_t

0x0c10,	// (0x00037b3e) list_double_graphic_pane_g1_ParamLimits

0x0c10,	// (0x00037b3e) list_double_graphic_pane_g1

0x2bb1,	// (0x00039adf) list_double_graphic_pane_g2_ParamLimits

0x2bb1,	// (0x00039adf) list_double_graphic_pane_g2

0x2bc0,	// (0x00039aee) list_double_graphic_pane_g3_ParamLimits

0x2bc0,	// (0x00039aee) list_double_graphic_pane_g3

0x0003,

0xf64b,	// (0x00046579) list_double_graphic_pane_g_ParamLimits

0xf64b,	// (0x00046579) list_double_graphic_pane_g

0x73b6,	// (0x0003e2e4) list_double_graphic_pane_t1_ParamLimits

0x73b6,	// (0x0003e2e4) list_double_graphic_pane_t1

0x74c4,	// (0x0003e3f2) list_double_graphic_pane_t2_ParamLimits

0x74c4,	// (0x0003e3f2) list_double_graphic_pane_t2

0x0001,

0xf654,	// (0x00046582) list_double_graphic_pane_t_ParamLimits

0xf654,	// (0x00046582) list_double_graphic_pane_t

0x0c10,	// (0x00037b3e) list_double2_graphic_pane_g1_ParamLimits

0x0c10,	// (0x00037b3e) list_double2_graphic_pane_g1

0xdc36,	// (0x00044b64) list_double2_graphic_pane_g2_ParamLimits

0xdc36,	// (0x00044b64) list_double2_graphic_pane_g2

0x26ad,	// (0x000395db) list_double2_graphic_pane_g3_ParamLimits

0x26ad,	// (0x000395db) list_double2_graphic_pane_g3

0x0002,

0xf659,	// (0x00046587) list_double2_graphic_pane_g_ParamLimits

0xf659,	// (0x00046587) list_double2_graphic_pane_g

0x0c1c,	// (0x00037b4a) list_double2_graphic_pane_t1_ParamLimits

0x0c1c,	// (0x00037b4a) list_double2_graphic_pane_t1

0x74d6,	// (0x0003e404) list_double2_graphic_pane_t2_ParamLimits

0x74d6,	// (0x0003e404) list_double2_graphic_pane_t2

0x0001,

0xf660,	// (0x0004658e) list_double2_graphic_pane_t_ParamLimits

0xf660,	// (0x0004658e) list_double2_graphic_pane_t

0x74e8,	// (0x0003e416) list_double_large_graphic_pane_g1_ParamLimits

0x74e8,	// (0x0003e416) list_double_large_graphic_pane_g1

0x750e,	// (0x0003e43c) list_double_large_graphic_pane_g2_ParamLimits

0x750e,	// (0x0003e43c) list_double_large_graphic_pane_g2

0x26ad,	// (0x000395db) list_double_large_graphic_pane_g3_ParamLimits

0x26ad,	// (0x000395db) list_double_large_graphic_pane_g3

0x7524,	// (0x0003e452) list_double_large_graphic_pane_g4_ParamLimits

0x7524,	// (0x0003e452) list_double_large_graphic_pane_g4

0x0004,

0xf665,	// (0x00046593) list_double_large_graphic_pane_g_ParamLimits

0xf665,	// (0x00046593) list_double_large_graphic_pane_g

0x7537,	// (0x0003e465) list_double_large_graphic_pane_t1_ParamLimits

0x7537,	// (0x0003e465) list_double_large_graphic_pane_t1

0x7550,	// (0x0003e47e) list_double_large_graphic_pane_t2_ParamLimits

0x7550,	// (0x0003e47e) list_double_large_graphic_pane_t2

0x0001,

0xf670,	// (0x0004659e) list_double_large_graphic_pane_t_ParamLimits

0xf670,	// (0x0004659e) list_double_large_graphic_pane_t

0x7562,	// (0x0003e490) list_double2_large_graphic_pane_g1_ParamLimits

0x7562,	// (0x0003e490) list_double2_large_graphic_pane_g1

0x7ca0,	// (0x0003ebce) list_double2_large_graphic_pane_g2_ParamLimits

0x7ca0,	// (0x0003ebce) list_double2_large_graphic_pane_g2

0x26ad,	// (0x000395db) list_double2_large_graphic_pane_g3_ParamLimits

0x26ad,	// (0x000395db) list_double2_large_graphic_pane_g3

0x0002,

0xf675,	// (0x000465a3) list_double2_large_graphic_pane_g_ParamLimits

0xf675,	// (0x000465a3) list_double2_large_graphic_pane_g

0x73f5,	// (0x0003e323) list_double2_large_graphic_pane_t1_ParamLimits

0x73f5,	// (0x0003e323) list_double2_large_graphic_pane_t1

0x756e,	// (0x0003e49c) list_double2_large_graphic_pane_t2_ParamLimits

0x756e,	// (0x0003e49c) list_double2_large_graphic_pane_t2

0x0001,

0xf67c,	// (0x000465aa) list_double2_large_graphic_pane_t_ParamLimits

0xf67c,	// (0x000465aa) list_double2_large_graphic_pane_t

0x7580,	// (0x0003e4ae) list_double_heading_pane_g1_ParamLimits

0x7580,	// (0x0003e4ae) list_double_heading_pane_g1

0x7cb9,	// (0x0003ebe7) list_double_heading_pane_g2_ParamLimits

0x7cb9,	// (0x0003ebe7) list_double_heading_pane_g2

0x0001,

0xf681,	// (0x000465af) list_double_heading_pane_g_ParamLimits

0xf681,	// (0x000465af) list_double_heading_pane_g

0x7591,	// (0x0003e4bf) list_double_heading_pane_t1_ParamLimits

0x7591,	// (0x0003e4bf) list_double_heading_pane_t1

0x75a7,	// (0x0003e4d5) list_double_heading_pane_t2_ParamLimits

0x75a7,	// (0x0003e4d5) list_double_heading_pane_t2

0x0001,

0xf686,	// (0x000465b4) list_double_heading_pane_t_ParamLimits

0xf686,	// (0x000465b4) list_double_heading_pane_t

0x05c7,	// (0x000374f5) list_double_graphic_heading_pane_g1_ParamLimits

0x05c7,	// (0x000374f5) list_double_graphic_heading_pane_g1

0x7580,	// (0x0003e4ae) list_double_graphic_heading_pane_g2_ParamLimits

0x7580,	// (0x0003e4ae) list_double_graphic_heading_pane_g2

0x7cb9,	// (0x0003ebe7) list_double_graphic_heading_pane_g3_ParamLimits

0x7cb9,	// (0x0003ebe7) list_double_graphic_heading_pane_g3

0x0002,

0xf68b,	// (0x000465b9) list_double_graphic_heading_pane_g_ParamLimits

0xf68b,	// (0x000465b9) list_double_graphic_heading_pane_g

0x75b9,	// (0x0003e4e7) list_double_graphic_heading_pane_t1_ParamLimits

0x75b9,	// (0x0003e4e7) list_double_graphic_heading_pane_t1

0x75cf,	// (0x0003e4fd) list_double_graphic_heading_pane_t2_ParamLimits

0x75cf,	// (0x0003e4fd) list_double_graphic_heading_pane_t2

0x0001,

0xf692,	// (0x000465c0) list_double_graphic_heading_pane_t_ParamLimits

0xf692,	// (0x000465c0) list_double_graphic_heading_pane_t

0x745b,	// (0x0003e389) list_double_time_pane_g1_ParamLimits

0x745b,	// (0x0003e389) list_double_time_pane_g1

0x0bbc,	// (0x00037aea) list_double_time_pane_g2_ParamLimits

0x0bbc,	// (0x00037aea) list_double_time_pane_g2

0x0001,

0xf63a,	// (0x00046568) list_double_time_pane_g_ParamLimits

0xf63a,	// (0x00046568) list_double_time_pane_g

0x75e1,	// (0x0003e50f) list_double_time_pane_t1_ParamLimits

0x75e1,	// (0x0003e50f) list_double_time_pane_t1

0x75f7,	// (0x0003e525) list_double_time_pane_t2_ParamLimits

0x75f7,	// (0x0003e525) list_double_time_pane_t2

0x7609,	// (0x0003e537) list_double_time_pane_t3_ParamLimits

0x7609,	// (0x0003e537) list_double_time_pane_t3

0x761b,	// (0x0003e549) list_double_time_pane_t4_ParamLimits

0x761b,	// (0x0003e549) list_double_time_pane_t4

0x0003,

0xf697,	// (0x000465c5) list_double_time_pane_t_ParamLimits

0xf697,	// (0x000465c5) list_double_time_pane_t

0x762d,	// (0x0003e55b) list_setting_pane_g1_ParamLimits

0x762d,	// (0x0003e55b) list_setting_pane_g1

0x073f,	// (0x0003766d) list_setting_pane_g2_ParamLimits

0x073f,	// (0x0003766d) list_setting_pane_g2

0x0001,

0xf6a0,	// (0x000465ce) list_setting_pane_g_ParamLimits

0xf6a0,	// (0x000465ce) list_setting_pane_g

0x7639,	// (0x0003e567) list_setting_pane_t1_ParamLimits

0x7639,	// (0x0003e567) list_setting_pane_t1

0x7653,	// (0x0003e581) list_setting_pane_t2_ParamLimits

0x7653,	// (0x0003e581) list_setting_pane_t2

0x0002,

0xf6a5,	// (0x000465d3) list_setting_pane_t_ParamLimits

0xf6a5,	// (0x000465d3) list_setting_pane_t

0x7692,	// (0x0003e5c0) set_value_pane_cp_ParamLimits

0x7692,	// (0x0003e5c0) set_value_pane_cp

0x769e,	// (0x0003e5cc) list_setting_number_pane_g1_ParamLimits

0x769e,	// (0x0003e5cc) list_setting_number_pane_g1

0x76aa,	// (0x0003e5d8) list_setting_number_pane_g2_ParamLimits

0x76aa,	// (0x0003e5d8) list_setting_number_pane_g2

0x0001,

0xf6ac,	// (0x000465da) list_setting_number_pane_g_ParamLimits

0xf6ac,	// (0x000465da) list_setting_number_pane_g

0x76b6,	// (0x0003e5e4) list_setting_number_pane_t1_ParamLimits

0x76b6,	// (0x0003e5e4) list_setting_number_pane_t1

0x76cf,	// (0x0003e5fd) list_setting_number_pane_t2_ParamLimits

0x76cf,	// (0x0003e5fd) list_setting_number_pane_t2

0x76e9,	// (0x0003e617) list_setting_number_pane_t3_ParamLimits

0x76e9,	// (0x0003e617) list_setting_number_pane_t3

0x0003,

0xf6b1,	// (0x000465df) list_setting_number_pane_t_ParamLimits

0xf6b1,	// (0x000465df) list_setting_number_pane_t

0x7692,	// (0x0003e5c0) set_value_pane_ParamLimits

0x7692,	// (0x0003e5c0) set_value_pane

0xbabd,	// (0x000429eb) bg_set_opt_pane_ParamLimits

0xbabd,	// (0x000429eb) bg_set_opt_pane

0x08a2,	// (0x000377d0) set_value_pane_t1

0xbade,	// (0x00042a0c) slider_set_pane_cp3

0xbae7,	// (0x00042a15) volume_small_pane_cp

0xbaf0,	// (0x00042a1e) list_form_gen_pane

0xbaf9,	// (0x00042a27) scroll_pane_cp8

0x772c,	// (0x0003e65a) form_field_data_pane_ParamLimits

0x772c,	// (0x0003e65a) form_field_data_pane

0x7743,	// (0x0003e671) form_field_data_wide_pane_ParamLimits

0x7743,	// (0x0003e671) form_field_data_wide_pane

0x7763,	// (0x0003e691) form_field_popup_pane_ParamLimits

0x7763,	// (0x0003e691) form_field_popup_pane

0x777b,	// (0x0003e6a9) form_field_popup_wide_pane_ParamLimits

0x777b,	// (0x0003e6a9) form_field_popup_wide_pane

0x093e,	// (0x0003786c) form_field_slider_pane_ParamLimits

0x093e,	// (0x0003786c) form_field_slider_pane

0x0951,	// (0x0003787f) form_field_slider_wide_pane_ParamLimits

0x0951,	// (0x0003787f) form_field_slider_wide_pane

0xbb0a,	// (0x00042a38) data_form_pane

0x779c,	// (0x0003e6ca) form_field_data_pane_t1

0xbb16,	// (0x00042a44) input_focus_pane

0xbb24,	// (0x00042a52) data_form_wide_pane

0x0992,	// (0x000378c0) form_field_data_wide_pane_t1

0xb891,	// (0x000427bf) input_focus_pane_cp6

0x77b6,	// (0x0003e6e4) form_field_popup_pane_t1

0xbb16,	// (0x00042a44) input_focus_pane_cp7

0xbb50,	// (0x00042a7e) list_form_pane

0x09d4,	// (0x00037902) form_field_popup_wide_pane_t1

0xbb16,	// (0x00042a44) input_focus_pane_cp8

0xbb5c,	// (0x00042a8a) list_form_wide_pane

0x77d8,	// (0x0003e706) form_field_slider_pane_t1_ParamLimits

0x77d8,	// (0x0003e706) form_field_slider_pane_t1

0x77f0,	// (0x0003e71e) form_field_slider_pane_t2_ParamLimits

0x77f0,	// (0x0003e71e) form_field_slider_pane_t2

0x0001,

0xf6c1,	// (0x000465ef) form_field_slider_pane_t_ParamLimits

0xf6c1,	// (0x000465ef) form_field_slider_pane_t

0xac72,	// (0x00041ba0) input_focus_pane_cp9_ParamLimits

0xac72,	// (0x00041ba0) input_focus_pane_cp9

0x7805,	// (0x0003e733) slider_cont_pane_ParamLimits

0x7805,	// (0x0003e733) slider_cont_pane

0xbb6b,	// (0x00042a99) form_field_slider_wide_pane_t1_ParamLimits

0xbb6b,	// (0x00042a99) form_field_slider_wide_pane_t1

0x0a30,	// (0x0003795e) form_field_slider_wide_pane_t2_ParamLimits

0x0a30,	// (0x0003795e) form_field_slider_wide_pane_t2

0x0001,

0xf6c6,	// (0x000465f4) form_field_slider_wide_pane_t_ParamLimits

0xf6c6,	// (0x000465f4) form_field_slider_wide_pane_t

0xac72,	// (0x00041ba0) input_focus_pane_cp10_ParamLimits

0xac72,	// (0x00041ba0) input_focus_pane_cp10

0x7819,	// (0x0003e747) slider_cont_pane_cp1_ParamLimits

0x7819,	// (0x0003e747) slider_cont_pane_cp1

0x782d,	// (0x0003e75b) slider_form_pane_cp

0xbb7d,	// (0x00042aab) input_focus_pane_g1

0xbb85,	// (0x00042ab3) input_focus_pane_g2

0xbb8d,	// (0x00042abb) input_focus_pane_g3

0xbb95,	// (0x00042ac3) input_focus_pane_g4

0xbb9d,	// (0x00042acb) input_focus_pane_g5

0xbba5,	// (0x00042ad3) input_focus_pane_g6

0xbbad,	// (0x00042adb) input_focus_pane_g7

0xbbb5,	// (0x00042ae3) input_focus_pane_g8

0xbbbd,	// (0x00042aeb) input_focus_pane_g9

0xac1a,	// (0x00041b48) input_focus_pane_g10

0x0009,

0xf6cb,	// (0x000465f9) input_focus_pane_g

0xcfce,	// (0x00043efc) wait_border_pane_g3_copy1

0x7835,	// (0x0003e763) data_form_pane_t1

0xac1a,	// (0x00041b48) wait_anim_pane_g1_copy1

0x795a,	// (0x0003e888) data_form_wide_pane_t1

0x784e,	// (0x0003e77c) list_form_graphic_pane_cp_ParamLimits

0x784e,	// (0x0003e77c) list_form_graphic_pane_cp

0xdc2d,	// (0x00044b5b) slider_form_pane_g1

0xdc42,	// (0x00044b70) slider_form_pane_g2

0x0006,

0xf9b7,	// (0x000468e5) slider_form_pane_g

0x785f,	// (0x0003e78d) list_form_graphic_pane_ParamLimits

0x785f,	// (0x0003e78d) list_form_graphic_pane

0x0aae,	// (0x000379dc) list_form_graphic_pane_g1

0x0ab6,	// (0x000379e4) list_form_graphic_pane_t1_ParamLimits

0x0ab6,	// (0x000379e4) list_form_graphic_pane_t1

0xac80,	// (0x00041bae) list_highlight_pane_cp5_ParamLimits

0xac80,	// (0x00041bae) list_highlight_pane_cp5

0x7871,	// (0x0003e79f) find_pane_g1

0xbbc5,	// (0x00042af3) input_find_pane

0x787a,	// (0x0003e7a8) input_find_pane_g1_ParamLimits

0x787a,	// (0x0003e7a8) input_find_pane_g1

0x7886,	// (0x0003e7b4) input_find_pane_t1_ParamLimits

0x7886,	// (0x0003e7b4) input_find_pane_t1

0x789b,	// (0x0003e7c9) input_find_pane_t2_ParamLimits

0x789b,	// (0x0003e7c9) input_find_pane_t2

0x0001,

0xf6e0,	// (0x0004660e) input_find_pane_t_ParamLimits

0xf6e0,	// (0x0004660e) input_find_pane_t

0xbbce,	// (0x00042afc) input_focus_pane_cp5_ParamLimits

0xbbce,	// (0x00042afc) input_focus_pane_cp5

0x889c,	// (0x0003f7ca) bg_popup_window_pane_cp2_ParamLimits

0x889c,	// (0x0003f7ca) bg_popup_window_pane_cp2

0x88a9,	// (0x0003f7d7) listscroll_menu_pane_ParamLimits

0x88a9,	// (0x0003f7d7) listscroll_menu_pane

0x88b5,	// (0x0003f7e3) popup_submenu_window_ParamLimits

0x88b5,	// (0x0003f7e3) popup_submenu_window

0xbbdc,	// (0x00042b0a) find_popup_pane_g1

0xbbe4,	// (0x00042b12) input_popup_find_pane_cp

0xbbce,	// (0x00042afc) input_focus_pane_cp4_ParamLimits

0xbbce,	// (0x00042afc) input_focus_pane_cp4

0xbbee,	// (0x00042b1c) input_popup_find_pane_t1_ParamLimits

0xbbee,	// (0x00042b1c) input_popup_find_pane_t1

0xac24,	// (0x00041b52) bg_popup_sub_pane_cp

0xbc1c,	// (0x00042b4a) listscroll_popup_sub_pane

0xbc24,	// (0x00042b52) list_submenu_pane_ParamLimits

0xbc24,	// (0x00042b52) list_submenu_pane

0xbc35,	// (0x00042b63) scroll_pane_cp4

0xbc3d,	// (0x00042b6b) list_single_popup_submenu_pane_ParamLimits

0xbc3d,	// (0x00042b6b) list_single_popup_submenu_pane

0xbc51,	// (0x00042b7f) list_single_popup_submenu_pane_g1

0xbc59,	// (0x00042b87) list_single_popup_submenu_pane_t1_ParamLimits

0xbc59,	// (0x00042b87) list_single_popup_submenu_pane_t1

0xac72,	// (0x00041ba0) bg_active_tab_pane_cp1_ParamLimits

0xac72,	// (0x00041ba0) bg_active_tab_pane_cp1

0x88ed,	// (0x0003f81b) tabs_2_active_pane_g1

0x88f5,	// (0x0003f823) tabs_2_active_pane_t1

0xac72,	// (0x00041ba0) bg_passive_tab_pane_cp1_ParamLimits

0xac72,	// (0x00041ba0) bg_passive_tab_pane_cp1

0x88ed,	// (0x0003f81b) tabs_2_passive_pane_g1

0x88f5,	// (0x0003f823) tabs_2_passive_pane_t1

0xac80,	// (0x00041bae) bg_active_tab_pane_cp4

0x8907,	// (0x0003f835) tabs_2_long_active_pane_t1

0xbc6e,	// (0x00042b9c) bg_passive_tab_pane_cp4

0x26e6,	// (0x00039614) list_single_midp_graphic_pane_g4_ParamLimits

0xac80,	// (0x00041bae) bg_active_tab_pane_cp5

0x891a,	// (0x0003f848) tabs_3_long_active_pane_t1

0xbc6e,	// (0x00042b9c) bg_passive_tab_pane_cp5

0x26e6,	// (0x00039614) list_single_midp_graphic_pane_g4

0xac80,	// (0x00041bae) bg_popup_window_pane_cp13_ParamLimits

0xac80,	// (0x00041bae) bg_popup_window_pane_cp13

0xbc83,	// (0x00042bb1) listscroll_popup_fast_pane_ParamLimits

0xbc83,	// (0x00042bb1) listscroll_popup_fast_pane

0xbc92,	// (0x00042bc0) grid_popup_fast_pane_ParamLimits

0xbc92,	// (0x00042bc0) grid_popup_fast_pane

0xbca4,	// (0x00042bd2) scroll_pane_cp9_ParamLimits

0xbca4,	// (0x00042bd2) scroll_pane_cp9

0xeec9,	// (0x00045df7) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xeec9,	// (0x00045df7) list_single_graphic_hl_pane_t1_cp2

0xbcc8,	// (0x00042bf6) input_focus_pane_cp20_ParamLimits

0xbcc8,	// (0x00042bf6) input_focus_pane_cp20

0xbcd6,	// (0x00042c04) query_popup_data_pane_t1_ParamLimits

0xbcd6,	// (0x00042c04) query_popup_data_pane_t1

0xbce9,	// (0x00042c17) query_popup_data_pane_t2_ParamLimits

0xbce9,	// (0x00042c17) query_popup_data_pane_t2

0xbd2f,	// (0x00042c5d) query_popup_data_pane_t3_ParamLimits

0xbd2f,	// (0x00042c5d) query_popup_data_pane_t3

0xbd70,	// (0x00042c9e) query_popup_data_pane_t4_ParamLimits

0xbd70,	// (0x00042c9e) query_popup_data_pane_t4

0xbdac,	// (0x00042cda) query_popup_data_pane_t5_ParamLimits

0xbdac,	// (0x00042cda) query_popup_data_pane_t5

0x0004,

0xf6e5,	// (0x00046613) query_popup_data_pane_t_ParamLimits

0xf6e5,	// (0x00046613) query_popup_data_pane_t

0xbb7d,	// (0x00042aab) bg_set_opt_pane_g1

0xbb85,	// (0x00042ab3) bg_set_opt_pane_g2

0xbb8d,	// (0x00042abb) bg_set_opt_pane_g3

0xbb95,	// (0x00042ac3) bg_set_opt_pane_g4

0xbb9d,	// (0x00042acb) bg_set_opt_pane_g5

0xbba5,	// (0x00042ad3) bg_set_opt_pane_g6

0xbbad,	// (0x00042adb) bg_set_opt_pane_g7

0xbbb5,	// (0x00042ae3) bg_set_opt_pane_g8

0xbbbd,	// (0x00042aeb) bg_set_opt_pane_g9

0x0008,

0xf6f0,	// (0x0004661e) bg_set_opt_pane_g

0x1e31,	// (0x00038d5f) control_top_pane_stacon_ParamLimits

0x1e31,	// (0x00038d5f) control_top_pane_stacon

0x1e84,	// (0x00038db2) signal_pane_stacon_ParamLimits

0x1e84,	// (0x00038db2) signal_pane_stacon

0xc221,	// (0x0004314f) stacon_top_pane_g1_ParamLimits

0xc221,	// (0x0004314f) stacon_top_pane_g1

0x1ea9,	// (0x00038dd7) title_pane_stacon_ParamLimits

0x1ea9,	// (0x00038dd7) title_pane_stacon

0x1ed3,	// (0x00038e01) uni_indicator_pane_stacon_ParamLimits

0x1ed3,	// (0x00038e01) uni_indicator_pane_stacon

0x1ee8,	// (0x00038e16) battery_pane_stacon_ParamLimits

0x1ee8,	// (0x00038e16) battery_pane_stacon

0x1f2c,	// (0x00038e5a) control_bottom_pane_stacon_ParamLimits

0x1f2c,	// (0x00038e5a) control_bottom_pane_stacon

0x1f4f,	// (0x00038e7d) navi_pane_stacon_ParamLimits

0x1f4f,	// (0x00038e7d) navi_pane_stacon

0xc243,	// (0x00043171) stacon_bottom_pane_g1_ParamLimits

0xc243,	// (0x00043171) stacon_bottom_pane_g1

0x1a6e,	// (0x0003899c) aid_levels_signal_lsc_ParamLimits

0x1a6e,	// (0x0003899c) aid_levels_signal_lsc

0x1a85,	// (0x000389b3) signal_pane_stacon_g1_ParamLimits

0x1a85,	// (0x000389b3) signal_pane_stacon_g1

0x1a99,	// (0x000389c7) signal_pane_stacon_g2_ParamLimits

0x1a99,	// (0x000389c7) signal_pane_stacon_g2

0x0001,

0xf703,	// (0x00046631) signal_pane_stacon_g_ParamLimits

0xf703,	// (0x00046631) signal_pane_stacon_g

0x1ace,	// (0x000389fc) title_pane_stacon_t1_ParamLimits

0x1ace,	// (0x000389fc) title_pane_stacon_t1

0xbdf0,	// (0x00042d1e) uni_indicator_pane_stacon_g1

0xbdfa,	// (0x00042d28) uni_indicator_pane_stacon_g2

0xbe04,	// (0x00042d32) uni_indicator_pane_stacon_g3

0xbe0e,	// (0x00042d3c) uni_indicator_pane_stacon_g4

0x0003,

0xf70f,	// (0x0004663d) uni_indicator_pane_stacon_g

0x1af3,	// (0x00038a21) control_top_pane_stacon_g1

0x1afb,	// (0x00038a29) control_top_pane_stacon_t1_ParamLimits

0x1afb,	// (0x00038a29) control_top_pane_stacon_t1

0x1b32,	// (0x00038a60) aid_levels_battery_lsc_ParamLimits

0x1b32,	// (0x00038a60) aid_levels_battery_lsc

0x1b4a,	// (0x00038a78) battery_pane_stacon_g1_ParamLimits

0x1b4a,	// (0x00038a78) battery_pane_stacon_g1

0x1b5d,	// (0x00038a8b) battery_pane_stacon_g2_ParamLimits

0x1b5d,	// (0x00038a8b) battery_pane_stacon_g2

0x0001,

0xf718,	// (0x00046646) battery_pane_stacon_g_ParamLimits

0xf718,	// (0x00046646) battery_pane_stacon_g

0x1b9b,	// (0x00038ac9) navi_icon_pane_stacon

0x1baf,	// (0x00038add) navi_navi_pane_stacon

0x1b9b,	// (0x00038ac9) navi_text_pane_stacon

0x1af3,	// (0x00038a21) control_bottom_pane_stacon_g1

0x1bc3,	// (0x00038af1) control_bottom_pane_stacon_t1_ParamLimits

0x1bc3,	// (0x00038af1) control_bottom_pane_stacon_t1

0x892c,	// (0x0003f85a) grid_app_pane_ParamLimits

0x892c,	// (0x0003f85a) grid_app_pane

0x8964,	// (0x0003f892) scroll_pane_cp15_ParamLimits

0x8964,	// (0x0003f892) scroll_pane_cp15

0x8981,	// (0x0003f8af) cell_app_pane_ParamLimits

0x8981,	// (0x0003f8af) cell_app_pane

0x89c6,	// (0x0003f8f4) cell_app_pane_g1_ParamLimits

0x89c6,	// (0x0003f8f4) cell_app_pane_g1

0xbe32,	// (0x00042d60) cell_app_pane_g2_ParamLimits

0xbe32,	// (0x00042d60) cell_app_pane_g2

0x0001,

0xf71d,	// (0x0004664b) cell_app_pane_g_ParamLimits

0xf71d,	// (0x0004664b) cell_app_pane_g

0xbe3e,	// (0x00042d6c) cell_app_pane_t1_ParamLimits

0xbe3e,	// (0x00042d6c) cell_app_pane_t1

0xbe50,	// (0x00042d7e) grid_highlight_pane_ParamLimits

0xbe50,	// (0x00042d7e) grid_highlight_pane

0xbb7d,	// (0x00042aab) cell_highlight_pane_g1

0xbb85,	// (0x00042ab3) cell_highlight_pane_g2

0xbb8d,	// (0x00042abb) cell_highlight_pane_g3

0xbb95,	// (0x00042ac3) cell_highlight_pane_g4

0xbb9d,	// (0x00042acb) cell_highlight_pane_g5

0xbba5,	// (0x00042ad3) cell_highlight_pane_g6

0xbbad,	// (0x00042adb) cell_highlight_pane_g7

0xbbb5,	// (0x00042ae3) cell_highlight_pane_g8

0xbbbd,	// (0x00042aeb) cell_highlight_pane_g9

0xac1a,	// (0x00041b48) cell_highlight_pane_g10

0x0009,

0xf6cb,	// (0x000465f9) cell_highlight_pane_g

0xbe61,	// (0x00042d8f) bg_scroll_pane

0x1c8e,	// (0x00038bbc) scroll_handle_pane

0xbea8,	// (0x00042dd6) scroll_bg_pane_g1

0xbebd,	// (0x00042deb) scroll_bg_pane_g2

0xbed5,	// (0x00042e03) scroll_bg_pane_g3

0x0002,

0xf722,	// (0x00046650) scroll_bg_pane_g

0xbeea,	// (0x00042e18) scroll_handle_focus_pane_ParamLimits

0xbeea,	// (0x00042e18) scroll_handle_focus_pane

0xbea8,	// (0x00042dd6) scroll_handle_pane_g1

0xbef7,	// (0x00042e25) scroll_handle_pane_g2

0xbed5,	// (0x00042e03) scroll_handle_pane_g3

0x0002,

0xf729,	// (0x00046657) scroll_handle_pane_g

0xbbce,	// (0x00042afc) bg_popup_sub_pane_cp21_ParamLimits

0xbbce,	// (0x00042afc) bg_popup_sub_pane_cp21

0xbf0b,	// (0x00042e39) popup_fep_japan_predictive_window_t1_ParamLimits

0xbf0b,	// (0x00042e39) popup_fep_japan_predictive_window_t1

0xbf25,	// (0x00042e53) popup_fep_japan_predictive_window_t2_ParamLimits

0xbf25,	// (0x00042e53) popup_fep_japan_predictive_window_t2

0xbf58,	// (0x00042e86) popup_fep_japan_predictive_window_t3_ParamLimits

0xbf58,	// (0x00042e86) popup_fep_japan_predictive_window_t3

0x0002,

0xf730,	// (0x0004665e) popup_fep_japan_predictive_window_t_ParamLimits

0xf730,	// (0x0004665e) popup_fep_japan_predictive_window_t

0xac24,	// (0x00041b52) bg_popup_sub_pane_cp23

0xbf8f,	// (0x00042ebd) listscroll_japin_cand_pane

0xbf97,	// (0x00042ec5) popup_fep_japan_candidate_window_t1

0xbfa5,	// (0x00042ed3) candidate_pane_ParamLimits

0xbfa5,	// (0x00042ed3) candidate_pane

0xbfb7,	// (0x00042ee5) scroll_pane_cp30

0xbfbf,	// (0x00042eed) list_single_popup_jap_candidate_pane_ParamLimits

0xbfbf,	// (0x00042eed) list_single_popup_jap_candidate_pane

0xac24,	// (0x00041b52) list_highlight_pane_cp30

0xbfd4,	// (0x00042f02) list_single_popup_jap_candidate_pane_t1

0xbfe3,	// (0x00042f11) level_1_signal

0xbff0,	// (0x00042f1e) level_2_signal

0xbffd,	// (0x00042f2b) level_3_signal

0xc00a,	// (0x00042f38) level_4_signal

0xc017,	// (0x00042f45) level_5_signal

0xc024,	// (0x00042f52) level_6_signal

0xc031,	// (0x00042f5f) level_7_signal

0xbfe3,	// (0x00042f11) level_1_battery

0xbff0,	// (0x00042f1e) level_2_battery

0xbffd,	// (0x00042f2b) level_3_battery

0xc00a,	// (0x00042f38) level_4_battery

0xc017,	// (0x00042f45) level_5_battery

0xc024,	// (0x00042f52) level_6_battery

0xc031,	// (0x00042f5f) level_7_battery

0xc056,	// (0x00042f84) list_menu_pane_ParamLimits

0xc056,	// (0x00042f84) list_menu_pane

0xc067,	// (0x00042f95) scroll_pane_cp25_ParamLimits

0xc067,	// (0x00042f95) scroll_pane_cp25

0xc080,	// (0x00042fae) list_double2_graphic_pane_cp2_ParamLimits

0xc080,	// (0x00042fae) list_double2_graphic_pane_cp2

0xc080,	// (0x00042fae) list_double2_large_graphic_pane_cp2_ParamLimits

0xc080,	// (0x00042fae) list_double2_large_graphic_pane_cp2

0xc080,	// (0x00042fae) list_double2_pane_cp2_ParamLimits

0xc080,	// (0x00042fae) list_double2_pane_cp2

0xc080,	// (0x00042fae) list_double_graphic_pane_cp2_ParamLimits

0xc080,	// (0x00042fae) list_double_graphic_pane_cp2

0xc080,	// (0x00042fae) list_double_large_graphic_pane_cp2_ParamLimits

0xc080,	// (0x00042fae) list_double_large_graphic_pane_cp2

0xc080,	// (0x00042fae) list_double_number_pane_cp2_ParamLimits

0xc080,	// (0x00042fae) list_double_number_pane_cp2

0xc080,	// (0x00042fae) list_double_pane_cp2_ParamLimits

0xc080,	// (0x00042fae) list_double_pane_cp2

0x89f9,	// (0x0003f927) list_single_2graphic_pane_cp2_ParamLimits

0x89f9,	// (0x0003f927) list_single_2graphic_pane_cp2

0x89f9,	// (0x0003f927) list_single_graphic_heading_pane_cp2_ParamLimits

0x89f9,	// (0x0003f927) list_single_graphic_heading_pane_cp2

0x89f9,	// (0x0003f927) list_single_graphic_pane_cp2_ParamLimits

0x89f9,	// (0x0003f927) list_single_graphic_pane_cp2

0x89f9,	// (0x0003f927) list_single_heading_pane_cp2_ParamLimits

0x89f9,	// (0x0003f927) list_single_heading_pane_cp2

0xc090,	// (0x00042fbe) list_single_large_graphic_pane_cp2_ParamLimits

0xc090,	// (0x00042fbe) list_single_large_graphic_pane_cp2

0x89f9,	// (0x0003f927) list_single_number_heading_pane_cp2_ParamLimits

0x89f9,	// (0x0003f927) list_single_number_heading_pane_cp2

0x89f9,	// (0x0003f927) list_single_number_pane_cp2_ParamLimits

0x89f9,	// (0x0003f927) list_single_number_pane_cp2

0x89f9,	// (0x0003f927) list_single_pane_cp2_ParamLimits

0x89f9,	// (0x0003f927) list_single_pane_cp2

0xc0aa,	// (0x00042fd8) bg_popup_sub_pane_cp22

0x1da9,	// (0x00038cd7) popup_side_volume_key_window_g1

0x1dd3,	// (0x00038d01) popup_side_volume_key_window_t1

0x1def,	// (0x00038d1d) volume_small_pane_cp1

0xac72,	// (0x00041ba0) bg_popup_sub_pane_cp24_ParamLimits

0xac72,	// (0x00041ba0) bg_popup_sub_pane_cp24

0xc0c0,	// (0x00042fee) fep_china_uni_candidate_pane_ParamLimits

0xc0c0,	// (0x00042fee) fep_china_uni_candidate_pane

0xc0d4,	// (0x00043002) fep_china_uni_entry_pane

0xc0e4,	// (0x00043012) popup_fep_china_uni_window_g1

0xc100,	// (0x0004302e) fep_china_uni_entry_pane_g1

0xc108,	// (0x00043036) fep_china_uni_entry_pane_g2

0x0001,

0xf75d,	// (0x0004668b) fep_china_uni_entry_pane_g

0xc110,	// (0x0004303e) fep_entry_item_pane

0xc11a,	// (0x00043048) fep_candidate_item_pane

0xc122,	// (0x00043050) fep_china_uni_candidate_pane_g1

0xc12a,	// (0x00043058) fep_china_uni_candidate_pane_g2

0xc132,	// (0x00043060) fep_china_uni_candidate_pane_g3

0xc13a,	// (0x00043068) fep_china_uni_candidate_pane_g4

0x0003,

0xf762,	// (0x00046690) fep_china_uni_candidate_pane_g

0xac1a,	// (0x00041b48) fep_entry_item_pane_g1

0xc142,	// (0x00043070) fep_entry_item_pane_t1_ParamLimits

0xc142,	// (0x00043070) fep_entry_item_pane_t1

0xc158,	// (0x00043086) fep_candidate_item_pane_t1_ParamLimits

0xc158,	// (0x00043086) fep_candidate_item_pane_t1

0xc16d,	// (0x0004309b) fep_candidate_item_pane_t2_ParamLimits

0xc16d,	// (0x0004309b) fep_candidate_item_pane_t2

0x0001,

0xf76b,	// (0x00046699) fep_candidate_item_pane_t_ParamLimits

0xf76b,	// (0x00046699) fep_candidate_item_pane_t

0xac80,	// (0x00041bae) list_highlight_pane_cp31_ParamLimits

0xac80,	// (0x00041bae) list_highlight_pane_cp31

0xc17f,	// (0x000430ad) level_1_signal_lsc

0xc188,	// (0x000430b6) level_2_signal_lsc

0xc191,	// (0x000430bf) level_3_signal_lsc

0xc19a,	// (0x000430c8) level_4_signal_lsc

0xc1a3,	// (0x000430d1) level_5_signal_lsc

0xc1ac,	// (0x000430da) level_6_signal_lsc

0xc1b5,	// (0x000430e3) level_7_signal_lsc

0xc1b5,	// (0x000430e3) level_1_battery_lsc

0xc1be,	// (0x000430ec) level_2_battery_lsc

0xc1c7,	// (0x000430f5) level_3_battery_lsc

0xc1d0,	// (0x000430fe) level_4_battery_lsc

0xc1d9,	// (0x00043107) level_5_battery_lsc

0xc1e2,	// (0x00043110) level_6_battery_lsc

0xc17f,	// (0x000430ad) level_7_battery_lsc

0xc1eb,	// (0x00043119) scroll_handle_focus_pane_g1

0xc1f4,	// (0x00043122) scroll_handle_focus_pane_g2

0xc1fd,	// (0x0004312b) scroll_handle_focus_pane_g3

0x0002,

0xf770,	// (0x0004669e) scroll_handle_focus_pane_g

0x78b0,	// (0x0003e7de) list_single_2graphic_pane_g1_ParamLimits

0x78b0,	// (0x0003e7de) list_single_2graphic_pane_g1

0x7ca0,	// (0x0003ebce) list_single_2graphic_pane_g2_ParamLimits

0x7ca0,	// (0x0003ebce) list_single_2graphic_pane_g2

0x26ad,	// (0x000395db) list_single_2graphic_pane_g3_ParamLimits

0x26ad,	// (0x000395db) list_single_2graphic_pane_g3

0x7cce,	// (0x0003ebfc) list_single_2graphic_pane_g4_ParamLimits

0x7cce,	// (0x0003ebfc) list_single_2graphic_pane_g4

0x0003,

0xf777,	// (0x000466a5) list_single_2graphic_pane_g_ParamLimits

0xf777,	// (0x000466a5) list_single_2graphic_pane_g

0x78bc,	// (0x0003e7ea) list_single_2graphic_pane_t1_ParamLimits

0x78bc,	// (0x0003e7ea) list_single_2graphic_pane_t1

0x78ea,	// (0x0003e818) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x78ea,	// (0x0003e818) list_double2_graphic_large_graphic_pane_g1

0x7ca0,	// (0x0003ebce) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x7ca0,	// (0x0003ebce) list_double2_graphic_large_graphic_pane_g2

0x26ad,	// (0x000395db) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x26ad,	// (0x000395db) list_double2_graphic_large_graphic_pane_g3

0x78fc,	// (0x0003e82a) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x78fc,	// (0x0003e82a) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf780,	// (0x000466ae) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf780,	// (0x000466ae) list_double2_graphic_large_graphic_pane_g

0x7908,	// (0x0003e836) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x7908,	// (0x0003e836) list_double2_graphic_large_graphic_pane_t1

0x791e,	// (0x0003e84c) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x791e,	// (0x0003e84c) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf789,	// (0x000466b7) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf789,	// (0x000466b7) list_double2_graphic_large_graphic_pane_t

0xc2be,	// (0x000431ec) popup_fast_swap_window_ParamLimits

0xc2be,	// (0x000431ec) popup_fast_swap_window

0xc2da,	// (0x00043208) popup_side_volume_key_window

0xc2f6,	// (0x00043224) stacon_top_pane

0xc300,	// (0x0004322e) status_pane_ParamLimits

0xc300,	// (0x0004322e) status_pane

0xc2f6,	// (0x00043224) status_small_pane

0xac24,	// (0x00041b52) control_pane

0xac24,	// (0x00041b52) stacon_bottom_pane

0xbaf9,	// (0x00042a27) scroll_pane_cp121

0xbaf0,	// (0x00042a1e) set_content_pane

0xc206,	// (0x00043134) bg_active_tab_pane_g1_cp1

0xc20f,	// (0x0004313d) bg_active_tab_pane_g2_cp1

0xc218,	// (0x00043146) bg_active_tab_pane_g3_cp1

0xc206,	// (0x00043134) bg_passive_tab_pane_g1_cp1

0xc20f,	// (0x0004313d) bg_passive_tab_pane_g2_cp1

0xc218,	// (0x00043146) bg_passive_tab_pane_g3_cp1

0x8a59,	// (0x0003f987) bg_active_tab_pane_g1_cp2

0xc20f,	// (0x0004313d) bg_active_tab_pane_g2_cp2

0x8a62,	// (0x0003f990) bg_active_tab_pane_g3_cp2

0x8a59,	// (0x0003f987) bg_passive_tab_pane_g1_cp2

0xc20f,	// (0x0004313d) bg_passive_tab_pane_g2_cp2

0x8a62,	// (0x0003f990) bg_passive_tab_pane_g3_cp2

0x8a6b,	// (0x0003f999) bg_active_tab_pane_g1_cp3

0xc20f,	// (0x0004313d) bg_active_tab_pane_g2_cp3

0x8a74,	// (0x0003f9a2) bg_active_tab_pane_g3_cp3

0x8a6b,	// (0x0003f999) bg_passive_tab_pane_g1_cp3

0xc20f,	// (0x0004313d) bg_passive_tab_pane_g2_cp3

0x8a74,	// (0x0003f9a2) bg_passive_tab_pane_g3_cp3

0x8a7d,	// (0x0003f9ab) bg_active_tab_pane_g1_cp4

0xc20f,	// (0x0004313d) bg_active_tab_pane_g2_cp4

0x8a86,	// (0x0003f9b4) bg_active_tab_pane_g3_cp4

0x8a7d,	// (0x0003f9ab) bg_passive_tab_pane_g1_cp4

0xc20f,	// (0x0004313d) bg_passive_tab_pane_g2_cp4

0x8a86,	// (0x0003f9b4) bg_passive_tab_pane_g3_cp4

0xc25f,	// (0x0004318d) bg_active_tab_pane_g1_cp5

0xc20f,	// (0x0004313d) bg_active_tab_pane_g2_cp5

0xc268,	// (0x00043196) bg_active_tab_pane_g3_cp5

0xc25f,	// (0x0004318d) bg_passive_tab_pane_g1_cp5

0xc20f,	// (0x0004313d) bg_passive_tab_pane_g2_cp5

0xc268,	// (0x00043196) bg_passive_tab_pane_g3_cp5

0x8a8f,	// (0x0003f9bd) list_set_graphic_pane_ParamLimits

0x8a8f,	// (0x0003f9bd) list_set_graphic_pane

0xac24,	// (0x00041b52) bg_set_opt_pane_cp4

0x8aa1,	// (0x0003f9cf) list_set_graphic_pane_g1_ParamLimits

0x8aa1,	// (0x0003f9cf) list_set_graphic_pane_g1

0x8aad,	// (0x0003f9db) list_set_graphic_pane_g2_ParamLimits

0x8aad,	// (0x0003f9db) list_set_graphic_pane_g2

0x0001,

0xf78e,	// (0x000466bc) list_set_graphic_pane_g_ParamLimits

0xf78e,	// (0x000466bc) list_set_graphic_pane_g

0x0009,

0xfae6,	// (0x00046a14) volume_small_pane_cp_g

0xc271,	// (0x0004319f) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xc271,	// (0x0004319f) list_double2_large_graphic_pane_g1_cp2

0xc27d,	// (0x000431ab) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xc27d,	// (0x000431ab) list_double2_large_graphic_pane_g2_cp2

0xc28e,	// (0x000431bc) list_double2_large_graphic_pane_g3_cp2

0xc296,	// (0x000431c4) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xc296,	// (0x000431c4) list_double2_large_graphic_pane_t1_cp2

0xc2ac,	// (0x000431da) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xc2ac,	// (0x000431da) list_double2_large_graphic_pane_t2_cp2

0xd9d9,	// (0x00044907) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xd9d9,	// (0x00044907) list_double_large_graphic_pane_g1_cp2

0xd9ea,	// (0x00044918) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xd9ea,	// (0x00044918) list_double_large_graphic_pane_g2_cp2

0xc41c,	// (0x0004334a) list_double_large_graphic_pane_g3_cp2

0xd9fb,	// (0x00044929) list_double_large_graphic_pane_g4_cp

0xda03,	// (0x00044931) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xda03,	// (0x00044931) list_double_large_graphic_pane_t1_cp2

0xda1a,	// (0x00044948) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xda1a,	// (0x00044948) list_double_large_graphic_pane_t2_cp2

0xc30e,	// (0x0004323c) list_double2_graphic_pane_g1_cp2_ParamLimits

0xc30e,	// (0x0004323c) list_double2_graphic_pane_g1_cp2

0xc31c,	// (0x0004324a) list_double2_graphic_pane_g2_cp2_ParamLimits

0xc31c,	// (0x0004324a) list_double2_graphic_pane_g2_cp2

0xc32d,	// (0x0004325b) list_double2_graphic_pane_g3_cp2

0xc337,	// (0x00043265) list_double2_graphic_pane_t1_cp2_ParamLimits

0xc337,	// (0x00043265) list_double2_graphic_pane_t1_cp2

0xc34d,	// (0x0004327b) list_double2_graphic_pane_t2_cp2_ParamLimits

0xc34d,	// (0x0004327b) list_double2_graphic_pane_t2_cp2

0xc35f,	// (0x0004328d) list_single_number_heading_pane_g1_cp2_ParamLimits

0xc35f,	// (0x0004328d) list_single_number_heading_pane_g1_cp2

0xc36b,	// (0x00043299) list_single_number_heading_pane_g2_cp2

0xc373,	// (0x000432a1) list_single_number_heading_pane_t1_cp2_ParamLimits

0xc373,	// (0x000432a1) list_single_number_heading_pane_t1_cp2

0xc389,	// (0x000432b7) list_single_number_heading_pane_t2_cp2_ParamLimits

0xc389,	// (0x000432b7) list_single_number_heading_pane_t2_cp2

0xc39b,	// (0x000432c9) list_single_number_heading_pane_t3_cp2_ParamLimits

0xc39b,	// (0x000432c9) list_single_number_heading_pane_t3_cp2

0xc35f,	// (0x0004328d) list_single_heading_pane_g1_cp2_ParamLimits

0xc35f,	// (0x0004328d) list_single_heading_pane_g1_cp2

0xc36b,	// (0x00043299) list_single_heading_pane_g2_cp2

0xc373,	// (0x000432a1) list_single_heading_pane_t1_cp2_ParamLimits

0xc373,	// (0x000432a1) list_single_heading_pane_t1_cp2

0xd7e1,	// (0x0004470f) list_single_heading_pane_t2_cp2_ParamLimits

0xd7e1,	// (0x0004470f) list_single_heading_pane_t2_cp2

0xd747,	// (0x00044675) list_double_graphic_pane_g1_cp2_ParamLimits

0xd747,	// (0x00044675) list_double_graphic_pane_g1_cp2

0xd753,	// (0x00044681) list_double_graphic_pane_g2_cp2_ParamLimits

0xd753,	// (0x00044681) list_double_graphic_pane_g2_cp2

0xd762,	// (0x00044690) list_double_graphic_pane_g3_cp2

0xd76a,	// (0x00044698) list_double_graphic_pane_t1_cp2_ParamLimits

0xd76a,	// (0x00044698) list_double_graphic_pane_t1_cp2

0xd780,	// (0x000446ae) list_double_graphic_pane_t2_cp2_ParamLimits

0xd780,	// (0x000446ae) list_double_graphic_pane_t2_cp2

0xc410,	// (0x0004333e) list_double_number_pane_g1_cp2_ParamLimits

0xc410,	// (0x0004333e) list_double_number_pane_g1_cp2

0xc41c,	// (0x0004334a) list_double_number_pane_g2_cp2

0xd70b,	// (0x00044639) list_double_number_pane_t1_cp2_ParamLimits

0xd70b,	// (0x00044639) list_double_number_pane_t1_cp2

0xd71f,	// (0x0004464d) list_double_number_pane_t2_cp2_ParamLimits

0xd71f,	// (0x0004464d) list_double_number_pane_t2_cp2

0xd735,	// (0x00044663) list_double_number_pane_t3_cp2_ParamLimits

0xd735,	// (0x00044663) list_double_number_pane_t3_cp2

0xd664,	// (0x00044592) list_single_graphic_pane_g1_cp2_ParamLimits

0xd664,	// (0x00044592) list_single_graphic_pane_g1_cp2

0xc474,	// (0x000433a2) list_single_graphic_pane_g2_cp2_ParamLimits

0xc474,	// (0x000433a2) list_single_graphic_pane_g2_cp2

0xc480,	// (0x000433ae) list_single_graphic_pane_g3_cp2

0xd63a,	// (0x00044568) list_single_graphic_pane_t1_cp2_ParamLimits

0xd63a,	// (0x00044568) list_single_graphic_pane_t1_cp2

0xc474,	// (0x000433a2) list_single_number_pane_g1_cp2_ParamLimits

0xc474,	// (0x000433a2) list_single_number_pane_g1_cp2

0xc480,	// (0x000433ae) list_single_number_pane_g2_cp2

0xd63a,	// (0x00044568) list_single_number_pane_t1_cp2_ParamLimits

0xd63a,	// (0x00044568) list_single_number_pane_t1_cp2

0xd650,	// (0x0004457e) list_single_number_pane_t2_cp2_ParamLimits

0xd650,	// (0x0004457e) list_single_number_pane_t2_cp2

0xc27d,	// (0x000431ab) list_double2_pane_g1_cp2_ParamLimits

0xc27d,	// (0x000431ab) list_double2_pane_g1_cp2

0xc28e,	// (0x000431bc) list_double2_pane_g2_cp2

0xc3e8,	// (0x00043316) list_double2_pane_t1_cp2_ParamLimits

0xc3e8,	// (0x00043316) list_double2_pane_t1_cp2

0xc3fe,	// (0x0004332c) list_double2_pane_t2_cp2_ParamLimits

0xc3fe,	// (0x0004332c) list_double2_pane_t2_cp2

0xc410,	// (0x0004333e) list_double_pane_g1_cp2_ParamLimits

0xc410,	// (0x0004333e) list_double_pane_g1_cp2

0xc41c,	// (0x0004334a) list_double_pane_g2_cp2

0xc424,	// (0x00043352) list_double_pane_t1_cp2_ParamLimits

0xc424,	// (0x00043352) list_double_pane_t1_cp2

0xc43a,	// (0x00043368) list_double_pane_t2_cp2_ParamLimits

0xc43a,	// (0x00043368) list_double_pane_t2_cp2

0xc464,	// (0x00043392) list_single_pane_cp2_g3

0xc474,	// (0x000433a2) list_single_pane_g1_cp2_ParamLimits

0xc474,	// (0x000433a2) list_single_pane_g1_cp2

0xc480,	// (0x000433ae) list_single_pane_g2_cp2

0xc488,	// (0x000433b6) list_single_pane_t1_cp2_ParamLimits

0xc488,	// (0x000433b6) list_single_pane_t1_cp2

0xc4a0,	// (0x000433ce) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xc4a0,	// (0x000433ce) list_single_large_graphic_pane_g1_cp2

0xc4ac,	// (0x000433da) list_single_large_graphic_pane_g2_cp2_ParamLimits

0xc4ac,	// (0x000433da) list_single_large_graphic_pane_g2_cp2

0xc4b8,	// (0x000433e6) list_single_large_graphic_pane_g3_cp2

0xc4c0,	// (0x000433ee) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xc4c0,	// (0x000433ee) list_single_large_graphic_pane_g4_cp1

0xc4da,	// (0x00043408) list_single_large_graphic_pane_t1_cp2_ParamLimits

0xc4da,	// (0x00043408) list_single_large_graphic_pane_t1_cp2

0xd606,	// (0x00044534) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xd606,	// (0x00044534) list_single_graphic_heading_pane_g1_cp2

0xd5d3,	// (0x00044501) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xd5d3,	// (0x00044501) list_single_graphic_heading_pane_g4_cp2

0xc480,	// (0x000433ae) list_single_graphic_heading_pane_g5_cp2

0xd612,	// (0x00044540) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xd612,	// (0x00044540) list_single_graphic_heading_pane_t1_cp2

0xd628,	// (0x00044556) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xd628,	// (0x00044556) list_single_graphic_heading_pane_t2_cp2

0xd5c7,	// (0x000444f5) list_single_2graphic_pane_g1_cp2_ParamLimits

0xd5c7,	// (0x000444f5) list_single_2graphic_pane_g1_cp2

0xd5d3,	// (0x00044501) list_single_2graphic_pane_g2_cp2_ParamLimits

0xd5d3,	// (0x00044501) list_single_2graphic_pane_g2_cp2

0xc480,	// (0x000433ae) list_single_2graphic_pane_g3_cp2

0xd5e4,	// (0x00044512) list_single_2graphic_pane_g4_cp2_ParamLimits

0xd5e4,	// (0x00044512) list_single_2graphic_pane_g4_cp2

0xd5f0,	// (0x0004451e) list_single_2graphic_pane_t1_cp2_ParamLimits

0xd5f0,	// (0x0004451e) list_single_2graphic_pane_t1_cp2

0xac1a,	// (0x00041b48) list_highlight_pane_g10_cp1

0xd1bd,	// (0x000440eb) list_highlight_pane_g1_cp1

0xd1c5,	// (0x000440f3) list_highlight_pane_g2_cp1

0xd1cd,	// (0x000440fb) list_highlight_pane_g3_cp1

0xd1d5,	// (0x00044103) list_highlight_pane_g4_cp1

0xd1dd,	// (0x0004410b) list_highlight_pane_g5_cp1

0xd1e5,	// (0x00044113) list_highlight_pane_g6_cp1

0xd1ed,	// (0x0004411b) list_highlight_pane_g7_cp1

0xd1f5,	// (0x00044123) list_highlight_pane_g8_cp1

0xd1fd,	// (0x0004412b) list_highlight_pane_g9_cp1

0x9736,	// (0x00040664) form_field_slider_pane_t3

0x9744,	// (0x00040672) form_field_slider_pane_t4

0xd0f9,	// (0x00044027) slider_form_pane_ParamLimits

0xd0f9,	// (0x00044027) slider_form_pane

0xac24,	// (0x00041b52) control_abbreviations

0xac24,	// (0x00041b52) control_conventions

0xac24,	// (0x00041b52) control_definitions

0xac24,	// (0x00041b52) format_table_attribute

0xd82b,	// (0x00044759) bg_popup_preview_window_pane_g9

0xac24,	// (0x00041b52) format_table_data2

0xac24,	// (0x00041b52) format_table_data3

0xac24,	// (0x00041b52) format_table_data_example

0x0008,

0xac24,	// (0x00041b52) intro_purpose

0xf917,	// (0x00046845) bg_popup_preview_window_pane_g

0xac24,	// (0x00041b52) texts_category

0xac24,	// (0x00041b52) texts_graphics

0xc4f0,	// (0x0004341e) text_digital

0xc4ff,	// (0x0004342d) text_primary

0xc50e,	// (0x0004343c) text_primary_small

0xc51d,	// (0x0004344b) text_secondary

0xc52c,	// (0x0004345a) text_title

0xdcc6,	// (0x00044bf4) bg_passive_tab_pane_g1_cp3_srt

0xc20f,	// (0x0004313d) bg_passive_tab_pane_g2_cp3_srt

0xdccf,	// (0x00044bfd) bg_passive_tab_pane_g3_cp3_srt

0xac72,	// (0x00041ba0) bg_active_tab_pane_cp3_srt_ParamLimits

0xac72,	// (0x00041ba0) bg_active_tab_pane_cp3_srt

0xdcd8,	// (0x00044c06) tabs_4_active_pane_srt_g1

0x9ac8,	// (0x000409f6) tabs_4_active_pane_srt_t1_ParamLimits

0x9ac8,	// (0x000409f6) tabs_4_active_pane_srt_t1

0xdcc6,	// (0x00044bf4) bg_active_tab_pane_g1_cp3_copy1

0xc20f,	// (0x0004313d) bg_active_tab_pane_g2_cp3_copy1

0xdccf,	// (0x00044bfd) bg_active_tab_pane_g3_cp3_copy1

0xac80,	// (0x00041bae) tabs_2_long_active_pane_srt_ParamLimits

0xac80,	// (0x00041bae) tabs_2_long_active_pane_srt

0xac80,	// (0x00041bae) tabs_2_long_passive_pane_srt_ParamLimits

0xac80,	// (0x00041bae) tabs_2_long_passive_pane_srt

0xbc6e,	// (0x00042b9c) bg_passive_tab_pane_cp4_srt_ParamLimits

0xbc6e,	// (0x00042b9c) bg_passive_tab_pane_cp4_srt

0xdbe0,	// (0x00044b0e) bg_passive_tab_pane_g1_cp4_srt

0xc20f,	// (0x0004313d) bg_passive_tab_pane_g2_cp4_srt

0xdbe9,	// (0x00044b17) bg_passive_tab_pane_g3_cp4_srt

0xac80,	// (0x00041bae) bg_active_tab_pane_cp4_srt_ParamLimits

0xac80,	// (0x00041bae) bg_active_tab_pane_cp4_srt

0x98d6,	// (0x00040804) tabs_2_long_active_pane_srt_t1_ParamLimits

0x98d6,	// (0x00040804) tabs_2_long_active_pane_srt_t1

0xdbe0,	// (0x00044b0e) bg_active_tab_pane_g1_cp4_srt

0xc20f,	// (0x0004313d) bg_active_tab_pane_g2_cp4_srt

0xdbe9,	// (0x00044b17) bg_active_tab_pane_g3_cp4_srt

0xac72,	// (0x00041ba0) tabs_3_long_active_pane_srt_ParamLimits

0xac72,	// (0x00041ba0) tabs_3_long_active_pane_srt

0xac72,	// (0x00041ba0) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xac72,	// (0x00041ba0) tabs_3_long_passive_pane_cp_srt

0xac72,	// (0x00041ba0) tabs_3_long_passive_pane_srt_ParamLimits

0xac72,	// (0x00041ba0) tabs_3_long_passive_pane_srt

0xbc6e,	// (0x00042b9c) bg_passive_tab_pane_cp5_srt_ParamLimits

0xbc6e,	// (0x00042b9c) bg_passive_tab_pane_cp5_srt

0xc25f,	// (0x0004318d) bg_passive_tab_pane_g1_cp5_srt

0xc20f,	// (0x0004313d) bg_passive_tab_pane_g2_cp5_srt

0xc268,	// (0x00043196) bg_passive_tab_pane_g3_cp5_srt

0xac80,	// (0x00041bae) bg_active_tab_pane_cp5_srt_ParamLimits

0xac80,	// (0x00041bae) bg_active_tab_pane_cp5_srt

0x98c0,	// (0x000407ee) tabs_3_long_active_pane_srt_t1_ParamLimits

0x98c0,	// (0x000407ee) tabs_3_long_active_pane_srt_t1

0xc25f,	// (0x0004318d) bg_active_tab_pane_g1_cp5_srt

0xc20f,	// (0x0004313d) bg_active_tab_pane_g2_cp5_srt

0xc268,	// (0x00043196) bg_active_tab_pane_g3_cp5_srt

0xdbd2,	// (0x00044b00) navi_text_pane_srt_t1

0xdbca,	// (0x00044af8) navi_icon_pane_srt_g1

0xc632,	// (0x00043560) midp_editing_number_pane_srt

0xc53b,	// (0x00043469) midp_ticker_pane_srt

0xc63a,	// (0x00043568) midp_ticker_pane_srt_g1

0xc642,	// (0x00043570) midp_ticker_pane_srt_g2

0x0001,

0xf7ad,	// (0x000466db) midp_ticker_pane_srt_g

0xc64a,	// (0x00043578) midp_ticker_pane_srt_t1

0xdbbb,	// (0x00044ae9) midp_editing_number_pane_t1_copy1

0x8ad1,	// (0x0003f9ff) listscroll_midp_pane

0x8ad1,	// (0x0003f9ff) midp_form_pane

0xc543,	// (0x00043471) midp_info_popup_window_ParamLimits

0xc543,	// (0x00043471) midp_info_popup_window

0xbbce,	// (0x00042afc) bg_popup_sub_pane_cp50_ParamLimits

0xbbce,	// (0x00042afc) bg_popup_sub_pane_cp50

0xce42,	// (0x00043d70) listscroll_midp_info_pane_ParamLimits

0xce42,	// (0x00043d70) listscroll_midp_info_pane

0xce2a,	// (0x00043d58) listscroll_form_midp_pane_ParamLimits

0xce2a,	// (0x00043d58) listscroll_form_midp_pane

0xce36,	// (0x00043d64) scroll_bar_cp050

0x972a,	// (0x00040658) list_midp_pane

0xe54a,	// (0x00045478) signal_pane_g2_cp

0xcd5c,	// (0x00043c8a) listscroll_midp_info_pane_t1_ParamLimits

0xcd5c,	// (0x00043c8a) listscroll_midp_info_pane_t1

0xcd74,	// (0x00043ca2) listscroll_midp_info_pane_t2_ParamLimits

0xcd74,	// (0x00043ca2) listscroll_midp_info_pane_t2

0xcdb2,	// (0x00043ce0) listscroll_midp_info_pane_t3_ParamLimits

0xcdb2,	// (0x00043ce0) listscroll_midp_info_pane_t3

0xcdec,	// (0x00043d1a) listscroll_midp_info_pane_t4_ParamLimits

0xcdec,	// (0x00043d1a) listscroll_midp_info_pane_t4

0x0003,

0xf852,	// (0x00046780) listscroll_midp_info_pane_t_ParamLimits

0xf852,	// (0x00046780) listscroll_midp_info_pane_t

0xbc35,	// (0x00042b63) scroll_pane_cp21

0xccfa,	// (0x00043c28) form_midp_field_choice_group_pane

0xcd03,	// (0x00043c31) form_midp_field_text_pane

0xcd42,	// (0x00043c70) form_midp_field_time_pane

0xcd4a,	// (0x00043c78) form_midp_gauge_slider_pane

0xcd53,	// (0x00043c81) form_midp_gauge_wait_pane

0xac24,	// (0x00041b52) form_midp_image_pane

0x7930,	// (0x0003e85e) list_single_midp_pane_ParamLimits

0x7930,	// (0x0003e85e) list_single_midp_pane

0x9708,	// (0x00040636) form_midp_field_text_pane_t1

0xcb7d,	// (0x00043aab) input_focus_pane_cp050

0xcce9,	// (0x00043c17) list_midp_form_text_pane

0xccb8,	// (0x00043be6) form_midp_field_choice_group_pane_t1

0xccc6,	// (0x00043bf4) input_focus_pane_cp051

0xccda,	// (0x00043c08) list_midp_choice_pane

0xac24,	// (0x00041b52) status_idle_pane

0xcc9c,	// (0x00043bca) form_midp_field_time_pane_t1

0xac1a,	// (0x00041b48) wait_anim_pane_g2_copy1

0xccaa,	// (0x00043bd8) form_midp_field_time_pane_t2

0x0001,

0xc59c,	// (0x000434ca) aid_navinavi_width_2_pane

0xf84d,	// (0x0004677b) form_midp_field_time_pane_t

0xac24,	// (0x00041b52) input_focus_pane_cp052

0xac24,	// (0x00041b52) bg_input_focus_pane_cp040

0xcc78,	// (0x00043ba6) form_midp_gauge_slider_pane_t1

0xcc86,	// (0x00043bb4) form_midp_gauge_slider_pane_t2

0x96ec,	// (0x0004061a) form_midp_gauge_slider_pane_t3

0x96fa,	// (0x00040628) form_midp_gauge_slider_pane_t4

0x0003,

0xf844,	// (0x00046772) form_midp_gauge_slider_pane_t

0xcc94,	// (0x00043bc2) form_midp_slider_pane

0xac80,	// (0x00041bae) bg_input_focus_pane_cp041_ParamLimits

0xac80,	// (0x00041bae) bg_input_focus_pane_cp041

0xcc45,	// (0x00043b73) form_midp_gauge_wait_pane_t1_ParamLimits

0xcc45,	// (0x00043b73) form_midp_gauge_wait_pane_t1

0xcc57,	// (0x00043b85) form_midp_gauge_wait_pane_t2_ParamLimits

0xcc57,	// (0x00043b85) form_midp_gauge_wait_pane_t2

0x0001,

0xf83f,	// (0x0004676d) form_midp_gauge_wait_pane_t_ParamLimits

0xf83f,	// (0x0004676d) form_midp_gauge_wait_pane_t

0xcc69,	// (0x00043b97) form_midp_wait_pane_ParamLimits

0xcc69,	// (0x00043b97) form_midp_wait_pane

0xcbeb,	// (0x00043b19) form_midp_image_pane_g1

0xcbf4,	// (0x00043b22) form_midp_image_pane_t1

0xcc03,	// (0x00043b31) form_midp_image_pane_t2

0xcc36,	// (0x00043b64) form_midp_image_pane_t3

0x0002,

0xf838,	// (0x00046766) form_midp_image_pane_t

0xcbe2,	// (0x00043b10) list_single_midp_pane_g1

0x0c5c,	// (0x00037b8a) list_single_midp_pane_t1

0x96d7,	// (0x00040605) list_midp_form_item_pane_ParamLimits

0x96d7,	// (0x00040605) list_midp_form_item_pane

0xc556,	// (0x00043484) list_midp_form_item_pane_t1

0xc565,	// (0x00043493) midp_ticker_pane_g1

0xc571,	// (0x0004349f) midp_ticker_pane_g2

0x0001,

0xf793,	// (0x000466c1) midp_ticker_pane_g

0x8b79,	// (0x0003faa7) midp_ticker_pane_t1

0x9a41,	// (0x0004096f) midp_editing_number_pane_t1

0xdc5b,	// (0x00044b89) midp_editing_number_pane

0xdc6a,	// (0x00044b98) midp_ticker_pane

0xdbab,	// (0x00044ad9) ai_message_heading_pane

0xac24,	// (0x00041b52) bg_popup_window_pane_cp14

0xdbb3,	// (0x00044ae1) listscroll_ai_message_pane

0xdb35,	// (0x00044a63) ai_message_heading_pane_g1_ParamLimits

0xdb35,	// (0x00044a63) ai_message_heading_pane_g1

0xdb41,	// (0x00044a6f) ai_message_heading_pane_g2_ParamLimits

0xdb41,	// (0x00044a6f) ai_message_heading_pane_g2

0xdb4d,	// (0x00044a7b) ai_message_heading_pane_g3_ParamLimits

0xdb4d,	// (0x00044a7b) ai_message_heading_pane_g3

0xdb59,	// (0x00044a87) ai_message_heading_pane_g4_ParamLimits

0xdb59,	// (0x00044a87) ai_message_heading_pane_g4

0x0003,

0xf979,	// (0x000468a7) ai_message_heading_pane_g_ParamLimits

0xf979,	// (0x000468a7) ai_message_heading_pane_g

0xdb65,	// (0x00044a93) ai_message_heading_pane_t1_ParamLimits

0xdb65,	// (0x00044a93) ai_message_heading_pane_t1

0xdb7f,	// (0x00044aad) ai_message_heading_pane_t2_ParamLimits

0xdb7f,	// (0x00044aad) ai_message_heading_pane_t2

0x0001,

0xf982,	// (0x000468b0) ai_message_heading_pane_t_ParamLimits

0xf982,	// (0x000468b0) ai_message_heading_pane_t

0xdb91,	// (0x00044abf) bg_popup_heading_pane_cp1_ParamLimits

0xdb91,	// (0x00044abf) bg_popup_heading_pane_cp1

0xdb23,	// (0x00044a51) list_ai_message_pane_ParamLimits

0xdb23,	// (0x00044a51) list_ai_message_pane

0xbc35,	// (0x00042b63) scroll_pane_cp10

0xdabf,	// (0x000449ed) list_ai_message_pane_g1

0xdac7,	// (0x000449f5) list_ai_message_pane_g2

0x0001,

0xf956,	// (0x00046884) list_ai_message_pane_g

0xdacf,	// (0x000449fd) list_ai_message_pane_t1_ParamLimits

0xdacf,	// (0x000449fd) list_ai_message_pane_t1

0xdae4,	// (0x00044a12) list_ai_message_pane_t2_ParamLimits

0xdae4,	// (0x00044a12) list_ai_message_pane_t2

0xdaf9,	// (0x00044a27) list_ai_message_pane_t3_ParamLimits

0xdaf9,	// (0x00044a27) list_ai_message_pane_t3

0xdb0e,	// (0x00044a3c) list_ai_message_pane_t4_ParamLimits

0xdb0e,	// (0x00044a3c) list_ai_message_pane_t4

0x0003,

0xf95b,	// (0x00046889) list_ai_message_pane_t_ParamLimits

0xf95b,	// (0x00046889) list_ai_message_pane_t

0x989f,	// (0x000407cd) cell_ai_soft_ind_pane_ParamLimits

0x989f,	// (0x000407cd) cell_ai_soft_ind_pane

0xc57d,	// (0x000434ab) cell_ai_soft_ind_pane_g1_ParamLimits

0xc57d,	// (0x000434ab) cell_ai_soft_ind_pane_g1

0xac24,	// (0x00041b52) grid_highlight_cp1

0xc58a,	// (0x000434b8) text_secondary_cp56_ParamLimits

0xc58a,	// (0x000434b8) text_secondary_cp56

0xda94,	// (0x000449c2) example_general_pane_ParamLimits

0xda94,	// (0x000449c2) example_general_pane

0xdaa0,	// (0x000449ce) example_parent_pane_g1_ParamLimits

0xdaa0,	// (0x000449ce) example_parent_pane_g1

0xdaac,	// (0x000449da) example_parent_pane_t1_ParamLimits

0xdaac,	// (0x000449da) example_parent_pane_t1

0x8fae,	// (0x0003fedc) popup_preview_text_window_ParamLimits

0x8fae,	// (0x0003fedc) popup_preview_text_window

0xc46c,	// (0x0004339a) list_single_pane_cp2_g4

0xb6f0,	// (0x0004261e) bg_popup_preview_window_pane_ParamLimits

0xb6f0,	// (0x0004261e) bg_popup_preview_window_pane

0xd833,	// (0x00044761) popup_preview_text_window_t1_ParamLimits

0xd833,	// (0x00044761) popup_preview_text_window_t1

0xd851,	// (0x0004477f) popup_preview_text_window_t2_ParamLimits

0xd851,	// (0x0004477f) popup_preview_text_window_t2

0xd89a,	// (0x000447c8) popup_preview_text_window_t3_ParamLimits

0xd89a,	// (0x000447c8) popup_preview_text_window_t3

0xd8df,	// (0x0004480d) popup_preview_text_window_t4_ParamLimits

0xd8df,	// (0x0004480d) popup_preview_text_window_t4

0x0004,

0xf92a,	// (0x00046858) popup_preview_text_window_t_ParamLimits

0xf92a,	// (0x00046858) popup_preview_text_window_t

0xd95d,	// (0x0004488b) scroll_pane_cp11

0xca81,	// (0x000439af) bg_popup_preview_window_pane_g1

0xd7f3,	// (0x00044721) bg_popup_preview_window_pane_g2

0xd7fb,	// (0x00044729) bg_popup_preview_window_pane_g3

0xd803,	// (0x00044731) bg_popup_preview_window_pane_g4

0xd80b,	// (0x00044739) bg_popup_preview_window_pane_g5

0xd813,	// (0x00044741) bg_popup_preview_window_pane_g6

0xd81b,	// (0x00044749) bg_popup_preview_window_pane_g7

0xd823,	// (0x00044751) bg_popup_preview_window_pane_g8

0x11f3,	// (0x00038121) aid_popup_width_pane

0x8f2a,	// (0x0003fe58) popup_midp_note_alarm_window_ParamLimits

0x8f2a,	// (0x0003fe58) popup_midp_note_alarm_window

0xbb0a,	// (0x00042a38) data_form_pane_ParamLimits

0x7792,	// (0x0003e6c0) form_field_data_pane_g1

0x779c,	// (0x0003e6ca) form_field_data_pane_t1_ParamLimits

0xbb16,	// (0x00042a44) input_focus_pane_ParamLimits

0xbb24,	// (0x00042a52) data_form_wide_pane_ParamLimits

0x0986,	// (0x000378b4) form_field_data_wide_pane_g1

0x0992,	// (0x000378c0) form_field_data_wide_pane_t1_ParamLimits

0xb891,	// (0x000427bf) input_focus_pane_cp6_ParamLimits

0x88df,	// (0x0003f80d) input_popup_find_pane_g1_ParamLimits

0x88df,	// (0x0003f80d) input_popup_find_pane_g1

0x1b6e,	// (0x00038a9c) aid_navi_side_left_pane

0x1b83,	// (0x00038ab1) aid_navi_side_right_pane

0xd29a,	// (0x000441c8) bg_popup_window_pane_cp30_ParamLimits

0xd29a,	// (0x000441c8) bg_popup_window_pane_cp30

0xd314,	// (0x00044242) popup_midp_note_alarm_window_g1_ParamLimits

0xd314,	// (0x00044242) popup_midp_note_alarm_window_g1

0xd344,	// (0x00044272) popup_midp_note_alarm_window_t1_ParamLimits

0xd344,	// (0x00044272) popup_midp_note_alarm_window_t1

0xd3e5,	// (0x00044313) popup_midp_note_alarm_window_t2_ParamLimits

0xd3e5,	// (0x00044313) popup_midp_note_alarm_window_t2

0xd493,	// (0x000443c1) popup_midp_note_alarm_window_t3_ParamLimits

0xd493,	// (0x000443c1) popup_midp_note_alarm_window_t3

0xd4c5,	// (0x000443f3) popup_midp_note_alarm_window_t4_ParamLimits

0xd4c5,	// (0x000443f3) popup_midp_note_alarm_window_t4

0xd4eb,	// (0x00044419) popup_midp_note_alarm_window_t5_ParamLimits

0xd4eb,	// (0x00044419) popup_midp_note_alarm_window_t5

0x000a,

0xf8c7,	// (0x000467f5) popup_midp_note_alarm_window_t_ParamLimits

0xf8c7,	// (0x000467f5) popup_midp_note_alarm_window_t

0xd597,	// (0x000444c5) wait_bar_pane_cp1_ParamLimits

0xd597,	// (0x000444c5) wait_bar_pane_cp1

0xac24,	// (0x00041b52) wait_anim_pane_copy1

0xac24,	// (0x00041b52) wait_border_pane_copy1

0xcfba,	// (0x00043ee8) wait_border_pane_g1_copy1

0x09ac,	// (0x000378da) form_field_popup_pane_g1

0x77b6,	// (0x0003e6e4) form_field_popup_pane_t1_ParamLimits

0xbb16,	// (0x00042a44) input_focus_pane_cp7_ParamLimits

0xbb50,	// (0x00042a7e) list_form_pane_ParamLimits

0x09cc,	// (0x000378fa) form_field_popup_wide_pane_g1

0x09d4,	// (0x00037902) form_field_popup_wide_pane_t1_ParamLimits

0xbb16,	// (0x00042a44) input_focus_pane_cp8_ParamLimits

0xbb5c,	// (0x00042a8a) list_form_wide_pane_ParamLimits

0xdcff,	// (0x00044c2d) aid_size_cell_graphic_pane

0x7835,	// (0x0003e763) data_form_pane_t1_ParamLimits

0x795a,	// (0x0003e888) data_form_wide_pane_t1_ParamLimits

0x9363,	// (0x00040291) bg_status_flat_pane

0x8525,	// (0x0003f453) title_pane_t1_ParamLimits

0xac3a,	// (0x00041b68) title_pane_t2_ParamLimits

0xac60,	// (0x00041b8e) title_pane_t3_ParamLimits

0xf59b,	// (0x000464c9) title_pane_t_ParamLimits

0xbfe3,	// (0x00042f11) level_1_signal_ParamLimits

0xbff0,	// (0x00042f1e) level_2_signal_ParamLimits

0xbffd,	// (0x00042f2b) level_3_signal_ParamLimits

0xc00a,	// (0x00042f38) level_4_signal_ParamLimits

0xc017,	// (0x00042f45) level_5_signal_ParamLimits

0xc024,	// (0x00042f52) level_6_signal_ParamLimits

0xc031,	// (0x00042f5f) level_7_signal_ParamLimits

0xbfe3,	// (0x00042f11) level_1_battery_ParamLimits

0xbff0,	// (0x00042f1e) level_2_battery_ParamLimits

0xbffd,	// (0x00042f2b) level_3_battery_ParamLimits

0xc00a,	// (0x00042f38) level_4_battery_ParamLimits

0xc017,	// (0x00042f45) level_5_battery_ParamLimits

0xc024,	// (0x00042f52) level_6_battery_ParamLimits

0xc031,	// (0x00042f5f) level_7_battery_ParamLimits

0xd1bd,	// (0x000440eb) bg_status_flat_pane_g1

0xd1c5,	// (0x000440f3) bg_status_flat_pane_g2

0xd1cd,	// (0x000440fb) bg_status_flat_pane_g3

0xd1d5,	// (0x00044103) bg_status_flat_pane_g4

0xd1dd,	// (0x0004410b) bg_status_flat_pane_g5

0xd1e5,	// (0x00044113) bg_status_flat_pane_g6

0xd1ed,	// (0x0004411b) bg_status_flat_pane_g7

0x85b9,	// (0x0003f4e7) tabs_3_active_pane_t1_ParamLimits

0x85b9,	// (0x0003f4e7) tabs_3_passive_pane_t1_ParamLimits

0x85d3,	// (0x0003f501) tabs_4_active_pane_t1_ParamLimits

0x85d3,	// (0x0003f501) tabs_4_1_passive_pane_t1_ParamLimits

0x88f5,	// (0x0003f823) tabs_2_active_pane_t1_ParamLimits

0x88f5,	// (0x0003f823) tabs_2_passive_pane_t1_ParamLimits

0xac80,	// (0x00041bae) bg_active_tab_pane_cp4_ParamLimits

0x8907,	// (0x0003f835) tabs_2_long_active_pane_t1_ParamLimits

0xbc6e,	// (0x00042b9c) bg_passive_tab_pane_cp4_ParamLimits

0x270e,	// (0x0003963c) list_single_midp_graphic_pane_t1_ParamLimits

0xac80,	// (0x00041bae) bg_active_tab_pane_cp5_ParamLimits

0x891a,	// (0x0003f848) tabs_3_long_active_pane_t1_ParamLimits

0xbc6e,	// (0x00042b9c) bg_passive_tab_pane_cp5_ParamLimits

0x270e,	// (0x0003963c) list_single_midp_graphic_pane_t1

0x9363,	// (0x00040291) bg_status_flat_pane_ParamLimits

0xc952,	// (0x00043880) indicator_pane_cp2_ParamLimits

0xc952,	// (0x00043880) indicator_pane_cp2

0x94da,	// (0x00040408) navi_pane_srt_ParamLimits

0x94da,	// (0x00040408) navi_pane_srt

0xc97a,	// (0x000438a8) popup_clock_digital_analogue_window_cp1

0xb180,	// (0x000420ae) indicator_pane_t1

0xc53b,	// (0x00043469) copy_highlight_pane

0xc53b,	// (0x00043469) cursor_graphics_pane

0xc53b,	// (0x00043469) graphic_within_text_pane

0xc53b,	// (0x00043469) link_highlight_pane

0xd920,	// (0x0004484e) popup_preview_text_window_t5_ParamLimits

0xd920,	// (0x0004484e) popup_preview_text_window_t5

0xc5a4,	// (0x000434d2) cursor_digital_pane

0xc5a4,	// (0x000434d2) cursor_primary_pane

0xc5b5,	// (0x000434e3) cursor_primary_small_pane

0xc5bd,	// (0x000434eb) cursor_secondary_pane

0xc5c5,	// (0x000434f3) cursor_title_pane

0xc5a4,	// (0x000434d2) link_highlight_digital_pane

0xc5ac,	// (0x000434da) link_highlight_primary_pane

0xc5b5,	// (0x000434e3) link_highlight_primary_small_pane

0xc5bd,	// (0x000434eb) link_highlight_secondary_pane

0xc5c5,	// (0x000434f3) link_highlight_title_pane

0xc5a4,	// (0x000434d2) copy_highlight_digital_pane

0xc5a4,	// (0x000434d2) copy_highlight_primary_pane

0xc5b5,	// (0x000434e3) copy_highlight_primary_small_pane

0xc5bd,	// (0x000434eb) copy_highlight_secondary_pane

0xc5c5,	// (0x000434f3) copy_highlight_title_pane

0xc5bd,	// (0x000434eb) graphic_text_digital_pane

0xd23d,	// (0x0004416b) graphic_text_primary_pane

0xd246,	// (0x00044174) graphic_text_primary_small_pane

0xc5b5,	// (0x000434e3) graphic_text_secondary_pane

0xc5a4,	// (0x000434d2) graphic_text_title_pane

0x8b8b,	// (0x0003fab9) cursor_primary_pane_g1

0xd22f,	// (0x0004415d) cursor_text_primary_t1

0x9766,	// (0x00040694) cursor_primary_small_pane_g1

0xd221,	// (0x0004414f) cursor_text_primary_small_t1

0x975c,	// (0x0004068a) cursor_primary_small_pane_g1_copy1

0xd213,	// (0x00044141) cursor_text_primary_small_t1_copy1

0xd205,	// (0x00044133) cursor_text_title_t1

0x9752,	// (0x00040680) cursor_title_pane_g1

0x8b8b,	// (0x0003fab9) cursor_digital_pane_g1

0xc5cd,	// (0x000434fb) cursor_text_digital_t1

0xc5f2,	// (0x00043520) link_highlight_primary_pane_g1

0xd1ae,	// (0x000440dc) link_highlight_primary_pane_t1

0xc5db,	// (0x00043509) link_highlight_primary_small_pane_g1

0xc5e3,	// (0x00043511) link_highlight_primary_small_pane_t1

0xc5f2,	// (0x00043520) link_highlight_secondary_pane_g1

0xc5fa,	// (0x00043528) link_highlight_secondary_pane_t1

0xd122,	// (0x00044050) link_highlight_title_pane_g1

0xd12a,	// (0x00044058) link_highlight_title_pane_t1

0xd10b,	// (0x00044039) link_highlight_digital_pane_g1

0xd113,	// (0x00044041) link_highlight_digital_pane_t1

0xcfff,	// (0x00043f2d) copy_highlight_primary_pane_g1

0xd007,	// (0x00043f35) copy_highlight_primary_pane_t1

0xcfd9,	// (0x00043f07) copy_highlight_primary_small_pane_g1

0xcff0,	// (0x00043f1e) copy_highlight_primary_small_pane_t1

0xc609,	// (0x00043537) copy_highlight_secondary_pane_g1

0xc611,	// (0x0004353f) copy_highlight_secondary_pane_t1

0xcfd9,	// (0x00043f07) copy_highlight_title_pane_g1

0xcfe1,	// (0x00043f0f) copy_highlight_title_pane_t1

0xcfff,	// (0x00043f2d) copy_highlight_digital_pane_g1

0xde85,	// (0x00044db3) copy_highlight_digital_pane_t1

0xddd9,	// (0x00044d07) graphic_text_primary_pane_g1

0xde69,	// (0x00044d97) graphic_text_primary_pane_t1

0xde77,	// (0x00044da5) graphic_text_primary_pane_t2

0x0001,

0xf9f6,	// (0x00046924) graphic_text_primary_pane_t

0xde45,	// (0x00044d73) graphic_text_primary_small_pane_g1

0xde4d,	// (0x00044d7b) graphic_text_primary_small_pane_t1

0xde5b,	// (0x00044d89) graphic_text_primary_small_pane_t2

0x0001,

0xf9f1,	// (0x0004691f) graphic_text_primary_small_pane_t

0xde21,	// (0x00044d4f) graphic_text_secondary_pane_g1

0xde29,	// (0x00044d57) graphic_text_secondary_pane_t1

0xde37,	// (0x00044d65) graphic_text_secondary_pane_t2

0x0001,

0xf9ec,	// (0x0004691a) graphic_text_secondary_pane_t

0xddfd,	// (0x00044d2b) graphic_text_title_pane_g1

0xde05,	// (0x00044d33) graphic_text_title_pane_t1

0xde13,	// (0x00044d41) graphic_text_title_pane_t2

0x0001,

0xf9e7,	// (0x00046915) graphic_text_title_pane_t

0xddd9,	// (0x00044d07) graphic_text_digital_pane_g1

0xdde1,	// (0x00044d0f) graphic_text_digital_pane_t1

0xddef,	// (0x00044d1d) graphic_text_digital_pane_t2

0x0001,

0xf9e2,	// (0x00046910) graphic_text_digital_pane_t

0xac80,	// (0x00041bae) navi_icon_pane_srt_ParamLimits

0xac80,	// (0x00041bae) navi_icon_pane_srt

0xac24,	// (0x00041b52) navi_midp_pane_srt

0xac24,	// (0x00041b52) navi_navi_pane_srt

0xac80,	// (0x00041bae) navi_text_pane_srt_ParamLimits

0xac80,	// (0x00041bae) navi_text_pane_srt

0xdda4,	// (0x00044cd2) navi_navi_icon_text_pane_srt

0xddac,	// (0x00044cda) navi_navi_pane_srt_g1_ParamLimits

0xddac,	// (0x00044cda) navi_navi_pane_srt_g1

0xddbe,	// (0x00044cec) navi_navi_pane_srt_g2_ParamLimits

0xddbe,	// (0x00044cec) navi_navi_pane_srt_g2

0x0001,

0xf9dd,	// (0x0004690b) navi_navi_pane_srt_g_ParamLimits

0xf9dd,	// (0x0004690b) navi_navi_pane_srt_g

0xddd0,	// (0x00044cfe) navi_navi_tabs_pane_srt

0xdda4,	// (0x00044cd2) navi_navi_text_pane_srt

0xdda4,	// (0x00044cd2) navi_navi_volume_pane_srt

0xdd95,	// (0x00044cc3) navi_navi_text_pane_srt_t1

0x2b2c,	// (0x00039a5a) navi_navi_volume_pane_srt_g1

0x2b34,	// (0x00039a62) volume_small_pane_srt_ParamLimits

0x2b34,	// (0x00039a62) volume_small_pane_srt

0x208c,	// (0x00038fba) volume_small_pane_srt_g1_ParamLimits

0x208c,	// (0x00038fba) volume_small_pane_srt_g1

0x209c,	// (0x00038fca) volume_small_pane_srt_g2_ParamLimits

0x209c,	// (0x00038fca) volume_small_pane_srt_g2

0x20ad,	// (0x00038fdb) volume_small_pane_srt_g3_ParamLimits

0x20ad,	// (0x00038fdb) volume_small_pane_srt_g3

0x20be,	// (0x00038fec) volume_small_pane_srt_g4_ParamLimits

0x20be,	// (0x00038fec) volume_small_pane_srt_g4

0x20cf,	// (0x00038ffd) volume_small_pane_srt_g5_ParamLimits

0x20cf,	// (0x00038ffd) volume_small_pane_srt_g5

0x20e0,	// (0x0003900e) volume_small_pane_srt_g6_ParamLimits

0x20e0,	// (0x0003900e) volume_small_pane_srt_g6

0x20f1,	// (0x0003901f) volume_small_pane_srt_g7_ParamLimits

0x20f1,	// (0x0003901f) volume_small_pane_srt_g7

0x2102,	// (0x00039030) volume_small_pane_srt_g8_ParamLimits

0x2102,	// (0x00039030) volume_small_pane_srt_g8

0x2113,	// (0x00039041) volume_small_pane_srt_g9_ParamLimits

0x2113,	// (0x00039041) volume_small_pane_srt_g9

0x2124,	// (0x00039052) volume_small_pane_srt_g10_ParamLimits

0x2124,	// (0x00039052) volume_small_pane_srt_g10

0x0009,

0xf798,	// (0x000466c6) volume_small_pane_srt_g_ParamLimits

0xf798,	// (0x000466c6) volume_small_pane_srt_g

0xb799,	// (0x000426c7) query_popup_data_pane_cp2

0xdd7b,	// (0x00044ca9) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xdd7b,	// (0x00044ca9) navi_navi_icon_text_pane_srt_t1

0xd23d,	// (0x0004416b) navi_tabs_2_long_pane_srt

0xd23d,	// (0x0004416b) navi_tabs_2_pane_srt

0xd23d,	// (0x0004416b) navi_tabs_3_long_pane_srt

0xd23d,	// (0x0004416b) navi_tabs_3_pane_srt

0xd23d,	// (0x0004416b) navi_tabs_4_pane_srt

0x2b0c,	// (0x00039a3a) tabs_2_active_pane_srt_ParamLimits

0x2b0c,	// (0x00039a3a) tabs_2_active_pane_srt

0x2b1c,	// (0x00039a4a) tabs_2_passive_pane_srt_ParamLimits

0x2b1c,	// (0x00039a4a) tabs_2_passive_pane_srt

0xcb7d,	// (0x00043aab) bg_passive_tab_pane_cp1_srt_ParamLimits

0xcb7d,	// (0x00043aab) bg_passive_tab_pane_cp1_srt

0xdd59,	// (0x00044c87) bg_passive_tab_pane_g1_cp1_srt

0xc20f,	// (0x0004313d) bg_passive_tab_pane_g2_cp1_srt

0xdd62,	// (0x00044c90) bg_passive_tab_pane_g3_cp1_srt

0xac72,	// (0x00041ba0) bg_active_tab_pane_cp1_srt_ParamLimits

0xac72,	// (0x00041ba0) bg_active_tab_pane_cp1_srt

0xdd6b,	// (0x00044c99) tabs_2_active_pane_srt_g1

0x9b44,	// (0x00040a72) tabs_2_active_pane_srt_t1_ParamLimits

0x9b44,	// (0x00040a72) tabs_2_active_pane_srt_t1

0xdd59,	// (0x00044c87) bg_active_tab_pane_g1_cp1_srt

0xc20f,	// (0x0004313d) bg_active_tab_pane_g2_cp1_srt

0xdd62,	// (0x00044c90) bg_active_tab_pane_g3_cp1_srt

0x2ad9,	// (0x00039a07) tabs_3_active_pane_srt_ParamLimits

0x2ad9,	// (0x00039a07) tabs_3_active_pane_srt

0x2aea,	// (0x00039a18) tabs_3_passive_pane_cp_srt_ParamLimits

0x2aea,	// (0x00039a18) tabs_3_passive_pane_cp_srt

0x2afb,	// (0x00039a29) tabs_3_passive_pane_srt_ParamLimits

0x2afb,	// (0x00039a29) tabs_3_passive_pane_srt

0xcb7d,	// (0x00043aab) bg_passive_tab_pane_cp2_srt_ParamLimits

0xcb7d,	// (0x00043aab) bg_passive_tab_pane_cp2_srt

0xc620,	// (0x0004354e) bg_passive_tab_pane_g1_cp2_srt

0xc20f,	// (0x0004313d) bg_passive_tab_pane_g2_cp2_srt

0xc629,	// (0x00043557) bg_passive_tab_pane_g3_cp2_srt

0xac72,	// (0x00041ba0) bg_active_tab_pane_cp2_srt_ParamLimits

0xac72,	// (0x00041ba0) bg_active_tab_pane_cp2_srt

0xdd51,	// (0x00044c7f) tabs_3_active_pane_srt_g1

0x9b2e,	// (0x00040a5c) tabs_3_active_pane_srt_t1_ParamLimits

0x9b2e,	// (0x00040a5c) tabs_3_active_pane_srt_t1

0xc620,	// (0x0004354e) bg_active_tab_pane_g1_cp2_srt

0xc20f,	// (0x0004313d) bg_active_tab_pane_g2_cp2_srt

0xc629,	// (0x00043557) bg_active_tab_pane_g3_cp2_srt

0x2a91,	// (0x000399bf) tabs_4_active_pane_srt_ParamLimits

0x2a91,	// (0x000399bf) tabs_4_active_pane_srt

0x2aa3,	// (0x000399d1) tabs_4_passive_pane_cp2_srt_ParamLimits

0x2aa3,	// (0x000399d1) tabs_4_passive_pane_cp2_srt

0xc74d,	// (0x0004367b) aid_size_cell_toolbar

0xd6e1,	// (0x0004460f) main_idle_act_pane_ParamLimits

0xc811,	// (0x0004373f) popup_large_graphic_colour_window_ParamLimits

0x922e,	// (0x0004015c) popup_toolbar_window_ParamLimits

0x922e,	// (0x0004015c) popup_toolbar_window

0xdc7d,	// (0x00044bab) list_single_graphic_2heading_pane_ParamLimits

0xdc7d,	// (0x00044bab) list_single_graphic_2heading_pane

0xbe18,	// (0x00042d46) aid_size_cell_apps_grid_lsc_pane

0xbe2a,	// (0x00042d58) aid_size_cell_apps_grid_prt_pane

0xbc6e,	// (0x00042b9c) bg_wml_button_pane_cp1_ParamLimits

0xbc6e,	// (0x00042b9c) bg_wml_button_pane_cp1

0x9708,	// (0x00040636) form_midp_field_text_pane_t1_ParamLimits

0xcb7d,	// (0x00043aab) input_focus_pane_cp050_ParamLimits

0xcce9,	// (0x00043c17) list_midp_form_text_pane_ParamLimits

0xccc6,	// (0x00043bf4) input_focus_pane_cp051_ParamLimits

0xccda,	// (0x00043c08) list_midp_choice_pane_ParamLimits

0x96a3,	// (0x000405d1) list_single_2graphic_pane_cp3_ParamLimits

0x96a3,	// (0x000405d1) list_single_2graphic_pane_cp3

0x96b7,	// (0x000405e5) list_single_midp_graphic_pane_ParamLimits

0x96b7,	// (0x000405e5) list_single_midp_graphic_pane

0x0ba4,	// (0x00037ad2) list_single_graphic_2heading_pane_g1_ParamLimits

0x0ba4,	// (0x00037ad2) list_single_graphic_2heading_pane_g1

0x0bb0,	// (0x00037ade) list_single_graphic_2heading_pane_g4_ParamLimits

0x0bb0,	// (0x00037ade) list_single_graphic_2heading_pane_g4

0x0bbc,	// (0x00037aea) list_single_graphic_2heading_pane_g5_ParamLimits

0x0bbc,	// (0x00037aea) list_single_graphic_2heading_pane_g5

0x0002,

0xf7eb,	// (0x00046719) list_single_graphic_2heading_pane_g_ParamLimits

0xf7eb,	// (0x00046719) list_single_graphic_2heading_pane_g

0x0bc8,	// (0x00037af6) list_single_graphic_2heading_pane_t1_ParamLimits

0x0bc8,	// (0x00037af6) list_single_graphic_2heading_pane_t1

0x0bdc,	// (0x00037b0a) list_single_graphic_2heading_pane_t2_ParamLimits

0x0bdc,	// (0x00037b0a) list_single_graphic_2heading_pane_t2

0x0bf8,	// (0x00037b26) list_single_graphic_2heading_pane_t3_ParamLimits

0x0bf8,	// (0x00037b26) list_single_graphic_2heading_pane_t3

0x0002,

0xf7f2,	// (0x00046720) list_single_graphic_2heading_pane_t_ParamLimits

0xf7f2,	// (0x00046720) list_single_graphic_2heading_pane_t

0xc9bf,	// (0x000438ed) bg_popup_sub_pane_cp2

0xc9e9,	// (0x00043917) grid_toobar_pane

0x267d,	// (0x000395ab) cell_toolbar_pane_ParamLimits

0x267d,	// (0x000395ab) cell_toolbar_pane

0xca25,	// (0x00043953) cell_toolbar_pane_g1_ParamLimits

0xca25,	// (0x00043953) cell_toolbar_pane_g1

0xca39,	// (0x00043967) cell_toolbar_pane_g2_ParamLimits

0xca39,	// (0x00043967) cell_toolbar_pane_g2

0x0001,

0xf7f9,	// (0x00046727) cell_toolbar_pane_g_ParamLimits

0xf7f9,	// (0x00046727) cell_toolbar_pane_g

0xca5b,	// (0x00043989) grid_highlight_pane_cp2_ParamLimits

0xca5b,	// (0x00043989) grid_highlight_pane_cp2

0xca75,	// (0x000439a3) toolbar_button_pane

0xca81,	// (0x000439af) toolbar_button_pane_g1

0xca89,	// (0x000439b7) toolbar_button_pane_g2

0xca91,	// (0x000439bf) toolbar_button_pane_g3

0xca99,	// (0x000439c7) toolbar_button_pane_g4

0xcaa1,	// (0x000439cf) toolbar_button_pane_g5

0xcaa9,	// (0x000439d7) toolbar_button_pane_g6

0xcab1,	// (0x000439df) toolbar_button_pane_g7

0xcab9,	// (0x000439e7) toolbar_button_pane_g8

0xcac1,	// (0x000439ef) toolbar_button_pane_g9

0x0009,

0xf7fe,	// (0x0004672c) toolbar_button_pane_g

0x26c1,	// (0x000395ef) list_single_2graphic_pane_g1_cp3_ParamLimits

0x26c1,	// (0x000395ef) list_single_2graphic_pane_g1_cp3

0x7e10,	// (0x0003ed3e) list_single_2graphic_pane_g2_cp3_ParamLimits

0x7e10,	// (0x0003ed3e) list_single_2graphic_pane_g2_cp3

0x26de,	// (0x0003960c) list_single_2graphic_pane_g3_cp3

0x26e6,	// (0x00039614) list_single_2graphic_pane_g4_cp3_ParamLimits

0x26e6,	// (0x00039614) list_single_2graphic_pane_g4_cp3

0x26f2,	// (0x00039620) list_single_2graphic_pane_t1_cp3_ParamLimits

0x26f2,	// (0x00039620) list_single_2graphic_pane_t1_cp3

0xcac9,	// (0x000439f7) list_single_midp_graphic_pane_g2_ParamLimits

0xcac9,	// (0x000439f7) list_single_midp_graphic_pane_g2

0x0b94,	// (0x00037ac2) aid_zoom_text_primary

0x22b2,	// (0x000391e0) aid_zoom_text_secondary

0xc6dd,	// (0x0004360b) status_small_pane_g7_ParamLimits

0xc6dd,	// (0x0004360b) status_small_pane_g7

0xc700,	// (0x0004362e) status_small_pane_t1_ParamLimits

0x8501,	// (0x0003f42f) title_pane_g2

0x0003,

0xf592,	// (0x000464c0) title_pane_g

0x8789,	// (0x0003f6b7) aid_size_cell_colour_1_pane_ParamLimits

0x8789,	// (0x0003f6b7) aid_size_cell_colour_1_pane

0x879d,	// (0x0003f6cb) aid_size_cell_colour_2_pane_ParamLimits

0x879d,	// (0x0003f6cb) aid_size_cell_colour_2_pane

0x87b1,	// (0x0003f6df) aid_size_cell_colour_3_pane_ParamLimits

0x87b1,	// (0x0003f6df) aid_size_cell_colour_3_pane

0x87c5,	// (0x0003f6f3) aid_size_cell_colour_4_pane_ParamLimits

0x87c5,	// (0x0003f6f3) aid_size_cell_colour_4_pane

0x1aaa,	// (0x000389d8) title_pane_stacon_g1_ParamLimits

0x1aaa,	// (0x000389d8) title_pane_stacon_g1

0xd05e,	// (0x00043f8c) popup_note_wait_window_g3_ParamLimits

0xd05e,	// (0x00043f8c) popup_note_wait_window_g3

0xd0d4,	// (0x00044002) popup_note_wait_window_t5_ParamLimits

0xd0d4,	// (0x00044002) popup_note_wait_window_t5

0xac24,	// (0x00041b52) main_feb_china_hwr_fs_writing_pane

0x8c60,	// (0x0003fb8e) popup_feb_china_hwr_fs_window_ParamLimits

0x8c60,	// (0x0003fb8e) popup_feb_china_hwr_fs_window

0x7e21,	// (0x0003ed4f) aid_size_cell_hwr_fs_ParamLimits

0x7e21,	// (0x0003ed4f) aid_size_cell_hwr_fs

0xcb7d,	// (0x00043aab) bg_popup_sub_pane_cp3_ParamLimits

0xcb7d,	// (0x00043aab) bg_popup_sub_pane_cp3

0x7e36,	// (0x0003ed64) grid_hwr_fs_pane_ParamLimits

0x7e36,	// (0x0003ed64) grid_hwr_fs_pane

0x2751,	// (0x0003967f) linegrid_hwr_fs_pane_ParamLimits

0x2751,	// (0x0003967f) linegrid_hwr_fs_pane

0x7e4e,	// (0x0003ed7c) cell_hwr_fs_pane_ParamLimits

0x7e4e,	// (0x0003ed7c) cell_hwr_fs_pane

0xcb89,	// (0x00043ab7) linegrid_hwr_fs_pane_g1_ParamLimits

0xcb89,	// (0x00043ab7) linegrid_hwr_fs_pane_g1

0x9677,	// (0x000405a5) linegrid_hwr_fs_pane_g2_ParamLimits

0x9677,	// (0x000405a5) linegrid_hwr_fs_pane_g2

0xcb95,	// (0x00043ac3) linegrid_hwr_fs_pane_g3_ParamLimits

0xcb95,	// (0x00043ac3) linegrid_hwr_fs_pane_g3

0x2783,	// (0x000396b1) linegrid_hwr_fs_pane_g4_ParamLimits

0x2783,	// (0x000396b1) linegrid_hwr_fs_pane_g4

0x279d,	// (0x000396cb) linegrid_hwr_fs_pane_g5_ParamLimits

0x279d,	// (0x000396cb) linegrid_hwr_fs_pane_g5

0x0004,

0xf824,	// (0x00046752) linegrid_hwr_fs_pane_g_ParamLimits

0xf824,	// (0x00046752) linegrid_hwr_fs_pane_g

0xcba1,	// (0x00043acf) cell_hwr_fs_pane_g1_ParamLimits

0xcba1,	// (0x00043acf) cell_hwr_fs_pane_g1

0xc98b,	// (0x000438b9) cell_hwr_fs_pane_g2_ParamLimits

0xc98b,	// (0x000438b9) cell_hwr_fs_pane_g2

0x9689,	// (0x000405b7) cell_hwr_fs_pane_g3_ParamLimits

0x9689,	// (0x000405b7) cell_hwr_fs_pane_g3

0x9696,	// (0x000405c4) cell_hwr_fs_pane_g4_ParamLimits

0x9696,	// (0x000405c4) cell_hwr_fs_pane_g4

0x0003,

0xf82f,	// (0x0004675d) cell_hwr_fs_pane_g_ParamLimits

0xf82f,	// (0x0004675d) cell_hwr_fs_pane_g

0x7e74,	// (0x0003eda2) cell_hwr_fs_pane_t1

0xac24,	// (0x00041b52) grid_highlight_pane_cp6

0xac24,	// (0x00041b52) main_idle_act2_pane

0xbc1c,	// (0x00042b4a) aid_inside_area_popup_secondary

0x9786,	// (0x000406b4) aid_inside_area_window_primary_ParamLimits

0x9786,	// (0x000406b4) aid_inside_area_window_primary

0xde94,	// (0x00044dc2) ai2_news_ticker_pane

0xde9c,	// (0x00044dca) aid_size_cell_ai1_link_ParamLimits

0xde9c,	// (0x00044dca) aid_size_cell_ai1_link

0x9b5a,	// (0x00040a88) popup_ai2_data_window_ParamLimits

0x9b5a,	// (0x00040a88) popup_ai2_data_window

0xdeb6,	// (0x00044de4) popup_ai2_link_window_ParamLimits

0xdeb6,	// (0x00044de4) popup_ai2_link_window

0xcb7d,	// (0x00043aab) bg_popup_sub_pane_cp4_ParamLimits

0xcb7d,	// (0x00043aab) bg_popup_sub_pane_cp4

0xdeca,	// (0x00044df8) grid_ai2_link_pane_ParamLimits

0xdeca,	// (0x00044df8) grid_ai2_link_pane

0xdee1,	// (0x00044e0f) popup_ai2_link_window_g1_ParamLimits

0xdee1,	// (0x00044e0f) popup_ai2_link_window_g1

0xdeed,	// (0x00044e1b) popup_ai2_link_window_g2_ParamLimits

0xdeed,	// (0x00044e1b) popup_ai2_link_window_g2

0x0001,

0xf9fb,	// (0x00046929) popup_ai2_link_window_g_ParamLimits

0xf9fb,	// (0x00046929) popup_ai2_link_window_g

0xdefc,	// (0x00044e2a) ai2_mp_button_pane

0xdf04,	// (0x00044e32) ai2_mp_volume_pane

0xccc6,	// (0x00043bf4) bg_popup_sub_pane_cp5_ParamLimits

0xccc6,	// (0x00043bf4) bg_popup_sub_pane_cp5

0xdf0c,	// (0x00044e3a) heading_ai2_gene_pane_ParamLimits

0xdf0c,	// (0x00044e3a) heading_ai2_gene_pane

0xdf18,	// (0x00044e46) list_ai2_gene_pane_ParamLimits

0xdf18,	// (0x00044e46) list_ai2_gene_pane

0xdf60,	// (0x00044e8e) cell_ai2_link_pane_ParamLimits

0xdf60,	// (0x00044e8e) cell_ai2_link_pane

0xdf76,	// (0x00044ea4) cell_ai2_link_pane_g1

0xac24,	// (0x00041b52) grid_highlight_pane_cp7

0x2b49,	// (0x00039a77) ai2_mp_volume_pane_g1

0xe013,	// (0x00044f41) ai2_mp_volume_pane_g2

0x9b84,	// (0x00040ab2) list_ai2_gene_pane_t1

0xe01b,	// (0x00044f49) ai2_mp_volume_pane_g3

0x0002,

0xfa14,	// (0x00046942) ai2_mp_volume_pane_g

0x2b51,	// (0x00039a7f) volume_small_pane_cp3

0xe023,	// (0x00044f51) aid_size_cell_ai2_button

0xe02b,	// (0x00044f59) grid_ai2_button_pane

0xe034,	// (0x00044f62) cell_ai2_button_pane_ParamLimits

0xe034,	// (0x00044f62) cell_ai2_button_pane

0xac1a,	// (0x00041b48) cell_ai2_button_pane_g1

0xac24,	// (0x00041b52) grid_highlight_pane_cp8

0xdfd3,	// (0x00044f01) ai2_gene_pane_t1_ParamLimits

0xdfd3,	// (0x00044f01) ai2_gene_pane_t1

0x8bd6,	// (0x0003fb04) aid_height_parent_landscape

0x98ed,	// (0x0004081b) aid_height_set_list

0xd6e1,	// (0x0004460f) aid_size_parent

0xdcff,	// (0x00044c2d) aid_size_cell_graphic_pane_ParamLimits

0xdf28,	// (0x00044e56) popup_ai2_data_window_g1_ParamLimits

0xdf28,	// (0x00044e56) popup_ai2_data_window_g1

0xdf34,	// (0x00044e62) ai2_news_ticker_pane_g1

0xdf3c,	// (0x00044e6a) ai2_news_ticker_pane_g2

0x0001,

0xfa00,	// (0x0004692e) ai2_news_ticker_pane_g

0xdf44,	// (0x00044e72) ai2_news_ticker_pane_t1

0xdf52,	// (0x00044e80) ai2_news_ticker_pane_t2

0x0001,

0xfa05,	// (0x00046933) ai2_news_ticker_pane_t

0xdf7f,	// (0x00044ead) heading_ai2_gene_pane_g1

0xdf87,	// (0x00044eb5) heading_ai2_gene_pane_t1_ParamLimits

0xdf87,	// (0x00044eb5) heading_ai2_gene_pane_t1

0xdf9c,	// (0x00044eca) list_highlight_pane_cp6

0x9b6e,	// (0x00040a9c) ai2_gene_pane_ParamLimits

0x9b6e,	// (0x00040a9c) ai2_gene_pane

0x9b92,	// (0x00040ac0) list_ai2_gene_pane_t2

0x0001,

0xfa0a,	// (0x00046938) list_ai2_gene_pane_t

0xdfa4,	// (0x00044ed2) list_highlight_pane_cp8_ParamLimits

0xdfa4,	// (0x00044ed2) list_highlight_pane_cp8

0xdfb5,	// (0x00044ee3) ai2_gene_pane_g1_ParamLimits

0xdfb5,	// (0x00044ee3) ai2_gene_pane_g1

0xdfc7,	// (0x00044ef5) ai2_gene_pane_g2_ParamLimits

0xdfc7,	// (0x00044ef5) ai2_gene_pane_g2

0x0001,

0xfa0f,	// (0x0004693d) ai2_gene_pane_g_ParamLimits

0xfa0f,	// (0x0004693d) ai2_gene_pane_g

0xbaac,	// (0x000429da) scroll_pane_cp12

0x7dcd,	// (0x0003ecfb) control_pane_t3_ParamLimits

0x7dcd,	// (0x0003ecfb) control_pane_t3

0xc6f1,	// (0x0004361f) status_small_pane_g8_ParamLimits

0xc6f1,	// (0x0004361f) status_small_pane_g8

0x8cf5,	// (0x0003fc23) popup_find_window_ParamLimits

0x8f64,	// (0x0003fe92) popup_note_image_window_ParamLimits

0x0c10,	// (0x00037b3e) list_double2_graphic_pane_vc_g1_ParamLimits

0x0c10,	// (0x00037b3e) list_double2_graphic_pane_vc_g1

0xdc36,	// (0x00044b64) list_double2_graphic_pane_vc_g2_ParamLimits

0xdc36,	// (0x00044b64) list_double2_graphic_pane_vc_g2

0x26ad,	// (0x000395db) list_double2_graphic_pane_vc_g3_ParamLimits

0x26ad,	// (0x000395db) list_double2_graphic_pane_vc_g3

0x0002,

0xf659,	// (0x00046587) list_double2_graphic_pane_vc_g_ParamLimits

0xf659,	// (0x00046587) list_double2_graphic_pane_vc_g

0x0c1c,	// (0x00037b4a) list_double2_graphic_pane_vc_t1_ParamLimits

0x0c1c,	// (0x00037b4a) list_double2_graphic_pane_vc_t1

0xdc36,	// (0x00044b64) list_single_heading_pane_vc_g1_ParamLimits

0xdc36,	// (0x00044b64) list_single_heading_pane_vc_g1

0x26ad,	// (0x000395db) list_single_heading_pane_vc_g2_ParamLimits

0x26ad,	// (0x000395db) list_single_heading_pane_vc_g2

0x0001,

0xf616,	// (0x00046544) list_single_heading_pane_vc_g_ParamLimits

0xf616,	// (0x00046544) list_single_heading_pane_vc_g

0x0c32,	// (0x00037b60) list_single_heading_pane_vc_t1_ParamLimits

0x0c32,	// (0x00037b60) list_single_heading_pane_vc_t1

0x0c48,	// (0x00037b76) list_single_heading_pane_vc_t2_ParamLimits

0x0c48,	// (0x00037b76) list_single_heading_pane_vc_t2

0x0001,

0xf813,	// (0x00046741) list_single_heading_pane_vc_t_ParamLimits

0xf813,	// (0x00046741) list_single_heading_pane_vc_t

0xcad5,	// (0x00043a03) list_setting_number_pane_vc_g1_ParamLimits

0xcad5,	// (0x00043a03) list_setting_number_pane_vc_g1

0xcae1,	// (0x00043a0f) list_setting_number_pane_vc_g2_ParamLimits

0xcae1,	// (0x00043a0f) list_setting_number_pane_vc_g2

0x0001,

0xf818,	// (0x00046746) list_setting_number_pane_vc_g_ParamLimits

0xf818,	// (0x00046746) list_setting_number_pane_vc_g

0xcaed,	// (0x00043a1b) list_setting_number_pane_vc_t1_ParamLimits

0xcaed,	// (0x00043a1b) list_setting_number_pane_vc_t1

0xcb01,	// (0x00043a2f) list_setting_number_pane_vc_t2_ParamLimits

0xcb01,	// (0x00043a2f) list_setting_number_pane_vc_t2

0xcb1d,	// (0x00043a4b) list_setting_number_pane_vc_t3_ParamLimits

0xcb1d,	// (0x00043a4b) list_setting_number_pane_vc_t3

0x0002,

0xf81d,	// (0x0004674b) list_setting_number_pane_vc_t_ParamLimits

0xf81d,	// (0x0004674b) list_setting_number_pane_vc_t

0xcb43,	// (0x00043a71) set_value_pane_vc_ParamLimits

0xcb43,	// (0x00043a71) set_value_pane_vc

0xdc7d,	// (0x00044bab) list_double2_graphic_pane_vc_ParamLimits

0xdc7d,	// (0x00044bab) list_double2_graphic_pane_vc

0x29ed,	// (0x0003991b) list_double2_large_graphic_pane_vc_ParamLimits

0x29ed,	// (0x0003991b) list_double2_large_graphic_pane_vc

0xdc7d,	// (0x00044bab) list_double2_pane_vc_ParamLimits

0xdc7d,	// (0x00044bab) list_double2_pane_vc

0xdc7d,	// (0x00044bab) list_double_graphic_heading_pane_vc_ParamLimits

0xdc7d,	// (0x00044bab) list_double_graphic_heading_pane_vc

0xdc7d,	// (0x00044bab) list_double_graphic_pane_vc_ParamLimits

0xdc7d,	// (0x00044bab) list_double_graphic_pane_vc

0xdc7d,	// (0x00044bab) list_double_heading_pane_vc_ParamLimits

0xdc7d,	// (0x00044bab) list_double_heading_pane_vc

0x29ed,	// (0x0003991b) list_double_large_graphic_pane_vc_ParamLimits

0x29ed,	// (0x0003991b) list_double_large_graphic_pane_vc

0xdc7d,	// (0x00044bab) list_double_number_pane_vc_ParamLimits

0xdc7d,	// (0x00044bab) list_double_number_pane_vc

0xdc7d,	// (0x00044bab) list_double_pane_vc_ParamLimits

0xdc7d,	// (0x00044bab) list_double_pane_vc

0xdc7d,	// (0x00044bab) list_double_time_pane_vc_ParamLimits

0xdc7d,	// (0x00044bab) list_double_time_pane_vc

0xdc7d,	// (0x00044bab) list_setting_number_pane_vc_ParamLimits

0xdc7d,	// (0x00044bab) list_setting_number_pane_vc

0xdc7d,	// (0x00044bab) list_setting_pane_vc_ParamLimits

0xdc7d,	// (0x00044bab) list_setting_pane_vc

0xdc7d,	// (0x00044bab) list_single_graphic_heading_pane_vc_ParamLimits

0xdc7d,	// (0x00044bab) list_single_graphic_heading_pane_vc

0xdc7d,	// (0x00044bab) list_single_heading_pane_vc_ParamLimits

0xdc7d,	// (0x00044bab) list_single_heading_pane_vc

0xdc7d,	// (0x00044bab) list_single_number_heading_pane_vc_ParamLimits

0xdc7d,	// (0x00044bab) list_single_number_heading_pane_vc

0x0c10,	// (0x00037b3e) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x0c10,	// (0x00037b3e) list_double_graphic_heading_pane_vc_g1

0xdc36,	// (0x00044b64) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xdc36,	// (0x00044b64) list_double_graphic_heading_pane_vc_g2

0x26ad,	// (0x000395db) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x26ad,	// (0x000395db) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf659,	// (0x00046587) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf659,	// (0x00046587) list_double_graphic_heading_pane_vc_g

0x0d37,	// (0x00037c65) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x0d37,	// (0x00037c65) list_double_graphic_heading_pane_vc_t1

0x0c32,	// (0x00037b60) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x0c32,	// (0x00037b60) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa1b,	// (0x00046949) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa1b,	// (0x00046949) list_double_graphic_heading_pane_vc_t

0xcad5,	// (0x00043a03) list_setting_pane_vc_g1_ParamLimits

0xcad5,	// (0x00043a03) list_setting_pane_vc_g1

0xcae1,	// (0x00043a0f) list_setting_pane_vc_g2_ParamLimits

0xcae1,	// (0x00043a0f) list_setting_pane_vc_g2

0x0001,

0xf818,	// (0x00046746) list_setting_pane_vc_g_ParamLimits

0xf818,	// (0x00046746) list_setting_pane_vc_g

0xe258,	// (0x00045186) list_setting_pane_vc_t1_ParamLimits

0xe258,	// (0x00045186) list_setting_pane_vc_t1

0xe26c,	// (0x0004519a) list_setting_pane_vc_t2_ParamLimits

0xe26c,	// (0x0004519a) list_setting_pane_vc_t2

0x0001,

0xfa5e,	// (0x0004698c) list_setting_pane_vc_t_ParamLimits

0xfa5e,	// (0x0004698c) list_setting_pane_vc_t

0xcb43,	// (0x00043a71) set_value_pane_cp_vc_ParamLimits

0xcb43,	// (0x00043a71) set_value_pane_cp_vc

0xdc36,	// (0x00044b64) list_single_number_heading_pane_vc_g1_ParamLimits

0xdc36,	// (0x00044b64) list_single_number_heading_pane_vc_g1

0x26ad,	// (0x000395db) list_single_number_heading_pane_vc_g2_ParamLimits

0x26ad,	// (0x000395db) list_single_number_heading_pane_vc_g2

0x0001,

0xf616,	// (0x00046544) list_single_number_heading_pane_vc_g_ParamLimits

0xf616,	// (0x00046544) list_single_number_heading_pane_vc_g

0x0c32,	// (0x00037b60) list_single_number_heading_pane_vc_t1_ParamLimits

0x0c32,	// (0x00037b60) list_single_number_heading_pane_vc_t1

0x0d4b,	// (0x00037c79) list_single_number_heading_pane_vc_t2_ParamLimits

0x0d4b,	// (0x00037c79) list_single_number_heading_pane_vc_t2

0x0d5f,	// (0x00037c8d) list_single_number_heading_pane_vc_t3_ParamLimits

0x0d5f,	// (0x00037c8d) list_single_number_heading_pane_vc_t3

0x0002,

0xfa63,	// (0x00046991) list_single_number_heading_pane_vc_t_ParamLimits

0xfa63,	// (0x00046991) list_single_number_heading_pane_vc_t

0x0c10,	// (0x00037b3e) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x0c10,	// (0x00037b3e) list_single_graphic_heading_pane_vc_g1

0xdc36,	// (0x00044b64) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xdc36,	// (0x00044b64) list_single_graphic_heading_pane_vc_g4

0x26ad,	// (0x000395db) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x26ad,	// (0x000395db) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf659,	// (0x00046587) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf659,	// (0x00046587) list_single_graphic_heading_pane_vc_g

0x0c32,	// (0x00037b60) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x0c32,	// (0x00037b60) list_single_graphic_heading_pane_vc_t1

0x0d71,	// (0x00037c9f) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x0d71,	// (0x00037c9f) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa6a,	// (0x00046998) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa6a,	// (0x00046998) list_single_graphic_heading_pane_vc_t

0xdc36,	// (0x00044b64) list_double2_pane_vc_g1_ParamLimits

0xdc36,	// (0x00044b64) list_double2_pane_vc_g1

0x26ad,	// (0x000395db) list_double2_pane_vc_g2_ParamLimits

0x26ad,	// (0x000395db) list_double2_pane_vc_g2

0x0001,

0xf616,	// (0x00046544) list_double2_pane_vc_g_ParamLimits

0xf616,	// (0x00046544) list_double2_pane_vc_g

0x0d85,	// (0x00037cb3) list_double2_pane_vc_t1_ParamLimits

0x0d85,	// (0x00037cb3) list_double2_pane_vc_t1

0x2b5a,	// (0x00039a88) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x2b5a,	// (0x00039a88) list_double2_large_graphic_pane_vc_g1

0x2b66,	// (0x00039a94) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x2b66,	// (0x00039a94) list_double2_large_graphic_pane_vc_g2

0x2b72,	// (0x00039aa0) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x2b72,	// (0x00039aa0) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf62e,	// (0x0004655c) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf62e,	// (0x0004655c) list_double2_large_graphic_pane_vc_g

0x0d9b,	// (0x00037cc9) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x0d9b,	// (0x00037cc9) list_double2_large_graphic_pane_vc_t1

0x2b7e,	// (0x00039aac) list_double_time_pane_vc_g1_ParamLimits

0x2b7e,	// (0x00039aac) list_double_time_pane_vc_g1

0x2b8a,	// (0x00039ab8) list_double_time_pane_vc_g2_ParamLimits

0x2b8a,	// (0x00039ab8) list_double_time_pane_vc_g2

0x0001,

0xfa6f,	// (0x0004699d) list_double_time_pane_vc_g_ParamLimits

0xfa6f,	// (0x0004699d) list_double_time_pane_vc_g

0x0db1,	// (0x00037cdf) list_double_time_pane_vc_t1_ParamLimits

0x0db1,	// (0x00037cdf) list_double_time_pane_vc_t1

0x0dca,	// (0x00037cf8) list_double_time_pane_vc_t2_ParamLimits

0x0dca,	// (0x00037cf8) list_double_time_pane_vc_t2

0x0e0a,	// (0x00037d38) list_double_time_pane_vc_t3_ParamLimits

0x0e0a,	// (0x00037d38) list_double_time_pane_vc_t3

0x0e22,	// (0x00037d50) list_double_time_pane_vc_t4_ParamLimits

0x0e22,	// (0x00037d50) list_double_time_pane_vc_t4

0x0003,

0xfa74,	// (0x000469a2) list_double_time_pane_vc_t_ParamLimits

0xfa74,	// (0x000469a2) list_double_time_pane_vc_t

0xdc36,	// (0x00044b64) list_double_pane_vc_g1_ParamLimits

0xdc36,	// (0x00044b64) list_double_pane_vc_g1

0x26ad,	// (0x000395db) list_double_pane_vc_g2_ParamLimits

0x26ad,	// (0x000395db) list_double_pane_vc_g2

0x0001,

0xf616,	// (0x00046544) list_double_pane_vc_g_ParamLimits

0xf616,	// (0x00046544) list_double_pane_vc_g

0x0e36,	// (0x00037d64) list_double_pane_vc_t1_ParamLimits

0x0e36,	// (0x00037d64) list_double_pane_vc_t1

0x0e48,	// (0x00037d76) list_double_pane_vc_t2_ParamLimits

0x0e48,	// (0x00037d76) list_double_pane_vc_t2

0x0001,

0xfa7d,	// (0x000469ab) list_double_pane_vc_t_ParamLimits

0xfa7d,	// (0x000469ab) list_double_pane_vc_t

0xdc36,	// (0x00044b64) list_double_number_pane_vc_g1_ParamLimits

0xdc36,	// (0x00044b64) list_double_number_pane_vc_g1

0x26ad,	// (0x000395db) list_double_number_pane_vc_g2_ParamLimits

0x26ad,	// (0x000395db) list_double_number_pane_vc_g2

0x0001,

0xf616,	// (0x00046544) list_double_number_pane_vc_g_ParamLimits

0xf616,	// (0x00046544) list_double_number_pane_vc_g

0x0e60,	// (0x00037d8e) list_double_number_pane_vc_t1_ParamLimits

0x0e60,	// (0x00037d8e) list_double_number_pane_vc_t1

0x0e74,	// (0x00037da2) list_double_number_pane_vc_t2_ParamLimits

0x0e74,	// (0x00037da2) list_double_number_pane_vc_t2

0x0e48,	// (0x00037d76) list_double_number_pane_vc_t3_ParamLimits

0x0e48,	// (0x00037d76) list_double_number_pane_vc_t3

0x0002,

0xfa82,	// (0x000469b0) list_double_number_pane_vc_t_ParamLimits

0xfa82,	// (0x000469b0) list_double_number_pane_vc_t

0x2b96,	// (0x00039ac4) list_double_large_graphic_pane_vc_g1_ParamLimits

0x2b96,	// (0x00039ac4) list_double_large_graphic_pane_vc_g1

0x2ba2,	// (0x00039ad0) list_double_large_graphic_pane_vc_g2_ParamLimits

0x2ba2,	// (0x00039ad0) list_double_large_graphic_pane_vc_g2

0x2b72,	// (0x00039aa0) list_double_large_graphic_pane_vc_g3_ParamLimits

0x2b72,	// (0x00039aa0) list_double_large_graphic_pane_vc_g3

0x0e86,	// (0x00037db4) list_double_large_graphic_pane_vc_g4_ParamLimits

0x0e86,	// (0x00037db4) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa89,	// (0x000469b7) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa89,	// (0x000469b7) list_double_large_graphic_pane_vc_g

0x0e92,	// (0x00037dc0) list_double_large_graphic_pane_vc_t1_ParamLimits

0x0e92,	// (0x00037dc0) list_double_large_graphic_pane_vc_t1

0x0ea4,	// (0x00037dd2) list_double_large_graphic_pane_vc_t2_ParamLimits

0x0ea4,	// (0x00037dd2) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa92,	// (0x000469c0) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa92,	// (0x000469c0) list_double_large_graphic_pane_vc_t

0xdc36,	// (0x00044b64) list_double_heading_pane_vc_g1_ParamLimits

0xdc36,	// (0x00044b64) list_double_heading_pane_vc_g1

0x26ad,	// (0x000395db) list_double_heading_pane_vc_g2_ParamLimits

0x26ad,	// (0x000395db) list_double_heading_pane_vc_g2

0x0001,

0xf616,	// (0x00046544) list_double_heading_pane_vc_g_ParamLimits

0xf616,	// (0x00046544) list_double_heading_pane_vc_g

0x0ebd,	// (0x00037deb) list_double_heading_pane_vc_t1_ParamLimits

0x0ebd,	// (0x00037deb) list_double_heading_pane_vc_t1

0x0c32,	// (0x00037b60) list_double_heading_pane_vc_t2_ParamLimits

0x0c32,	// (0x00037b60) list_double_heading_pane_vc_t2

0x0001,

0xfa97,	// (0x000469c5) list_double_heading_pane_vc_t_ParamLimits

0xfa97,	// (0x000469c5) list_double_heading_pane_vc_t

0x0c10,	// (0x00037b3e) list_double_graphic_pane_vc_g1_ParamLimits

0x0c10,	// (0x00037b3e) list_double_graphic_pane_vc_g1

0x2bb1,	// (0x00039adf) list_double_graphic_pane_vc_g2_ParamLimits

0x2bb1,	// (0x00039adf) list_double_graphic_pane_vc_g2

0x2bc0,	// (0x00039aee) list_double_graphic_pane_vc_g3_ParamLimits

0x2bc0,	// (0x00039aee) list_double_graphic_pane_vc_g3

0x0002,

0xfa9c,	// (0x000469ca) list_double_graphic_pane_vc_g_ParamLimits

0xfa9c,	// (0x000469ca) list_double_graphic_pane_vc_g

0x0ed1,	// (0x00037dff) list_double_graphic_pane_vc_t1_ParamLimits

0x0ed1,	// (0x00037dff) list_double_graphic_pane_vc_t1

0x0e48,	// (0x00037d76) list_double_graphic_pane_vc_t2_ParamLimits

0x0e48,	// (0x00037d76) list_double_graphic_pane_vc_t2

0x0001,

0xfaa3,	// (0x000469d1) list_double_graphic_pane_vc_t_ParamLimits

0xfaa3,	// (0x000469d1) list_double_graphic_pane_vc_t

0x11ff,	// (0x0003812d) aid_size_cell_fastswap

0x7aed,	// (0x0003ea1b) aid_size_cell_touch_ParamLimits

0x7aed,	// (0x0003ea1b) aid_size_cell_touch

0x1462,	// (0x00038390) popup_fast_swap_wide_window_ParamLimits

0x1462,	// (0x00038390) popup_fast_swap_wide_window

0x7c38,	// (0x0003eb66) touch_pane_ParamLimits

0x7c38,	// (0x0003eb66) touch_pane

0xbb02,	// (0x00042a30) button_value_adjust_pane_cp2

0x08b0,	// (0x000377de) button_value_adjust_pane_cp4

0x08d4,	// (0x00037802) form_field_data_pane_cp2

0x7759,	// (0x0003e687) form_field_data_wide_pane_cp2

0xbe61,	// (0x00042d8f) bg_scroll_pane_ParamLimits

0x1c8e,	// (0x00038bbc) scroll_handle_pane_ParamLimits

0x1ca2,	// (0x00038bd0) scroll_sc2_down_pane_ParamLimits

0x1ca2,	// (0x00038bd0) scroll_sc2_down_pane

0xbe92,	// (0x00042dc0) scroll_sc2_up_pane_ParamLimits

0xbe92,	// (0x00042dc0) scroll_sc2_up_pane

0x9cbd,	// (0x00040beb) grid_wheel_folder_pane_g1_ParamLimits

0x9cbd,	// (0x00040beb) grid_wheel_folder_pane_g1

0x1f0a,	// (0x00038e38) clock_nsta_pane_cp2_ParamLimits

0x1f0a,	// (0x00038e38) clock_nsta_pane_cp2

0x8ad1,	// (0x0003f9ff) listscroll_midp_pane_ParamLimits

0x8ae2,	// (0x0003fa10) midp_canvas_pane

0xc745,	// (0x00043673) nsta_clock_indic_pane

0xc775,	// (0x000436a3) listscroll_form_pane_vc

0xc77d,	// (0x000436ab) listscroll_set_pane_vc_ParamLimits

0xc77d,	// (0x000436ab) listscroll_set_pane_vc

0x938b,	// (0x000402b9) clock_nsta_pane

0x93b5,	// (0x000402e3) indicator_nsta_pane

0xc9bf,	// (0x000438ed) bg_popup_sub_pane_cp2_ParamLimits

0xc9d3,	// (0x00043901) find_pane_cp2_ParamLimits

0xc9d3,	// (0x00043901) find_pane_cp2

0xc9e9,	// (0x00043917) grid_toobar_pane_ParamLimits

0xcb51,	// (0x00043a7f) list_form_gen_pane_vc_ParamLimits

0xcb51,	// (0x00043a7f) list_form_gen_pane_vc

0xcb67,	// (0x00043a95) scroll_pane_cp8_vc_ParamLimits

0xcb67,	// (0x00043a95) scroll_pane_cp8_vc

0xcbb7,	// (0x00043ae5) data_form_wide_pane_vc_ParamLimits

0xcbb7,	// (0x00043ae5) data_form_wide_pane_vc

0xcbc3,	// (0x00043af1) form_field_data_wide_pane_vc_g1

0xcbcb,	// (0x00043af9) form_field_data_wide_pane_vc_t1_ParamLimits

0xcbcb,	// (0x00043af9) form_field_data_wide_pane_vc_t1

0xbb16,	// (0x00042a44) input_focus_pane_cp6_vc_ParamLimits

0xbb16,	// (0x00042a44) input_focus_pane_cp6_vc

0x972a,	// (0x00040658) list_midp_pane_ParamLimits

0xd6f3,	// (0x00044621) scroll_pane_cp16_ParamLimits

0xd6f3,	// (0x00044621) scroll_pane_cp16

0xce56,	// (0x00043d84) button_value_adjust_pane_ParamLimits

0xce56,	// (0x00043d84) button_value_adjust_pane

0x98fe,	// (0x0004082c) button_value_adjust_pane_cp6_ParamLimits

0x98fe,	// (0x0004082c) button_value_adjust_pane_cp6

0x9a18,	// (0x00040946) settings_code_pane_cp_ParamLimits

0x9a18,	// (0x00040946) settings_code_pane_cp

0xac1a,	// (0x00041b48) cell_touch_pane_g1

0xac1a,	// (0x00041b48) cell_touch_pane_g2

0x0001,

0xf742,	// (0x00046670) cell_touch_pane_g

0x9ba0,	// (0x00040ace) cell_touch_pane_cp_ParamLimits

0x9ba0,	// (0x00040ace) cell_touch_pane_cp

0x9bbc,	// (0x00040aea) cell_touch_pane_ParamLimits

0x9bbc,	// (0x00040aea) cell_touch_pane

0xac1a,	// (0x00041b48) scroll_sc2_down_pane_g1

0xac1a,	// (0x00041b48) scroll_sc2_up_pane_g1

0xac24,	// (0x00041b52) bg_set_opt_pane_cp4_vc

0xe046,	// (0x00044f74) list_set_graphic_pane_vc_g1_ParamLimits

0xe046,	// (0x00044f74) list_set_graphic_pane_vc_g1

0xe052,	// (0x00044f80) list_set_graphic_pane_vc_g2_ParamLimits

0xe052,	// (0x00044f80) list_set_graphic_pane_vc_g2

0x0001,

0xfa20,	// (0x0004694e) list_set_graphic_pane_vc_g_ParamLimits

0xfa20,	// (0x0004694e) list_set_graphic_pane_vc_g

0xe05e,	// (0x00044f8c) text_primary_small_cp13_vc_ParamLimits

0xe05e,	// (0x00044f8c) text_primary_small_cp13_vc

0xe076,	// (0x00044fa4) list_set_graphic_pane_vc_ParamLimits

0xe076,	// (0x00044fa4) list_set_graphic_pane_vc

0xac24,	// (0x00041b52) input_focus_pane_cp2_vc

0xac1a,	// (0x00041b48) setting_code_pane_vc_g1

0xe08a,	// (0x00044fb8) setting_code_pane_vc_t1

0xe098,	// (0x00044fc6) set_text_pane_vc_t1_ParamLimits

0xe098,	// (0x00044fc6) set_text_pane_vc_t1

0xac24,	// (0x00041b52) input_focus_pane_cp1_vc

0xe0b3,	// (0x00044fe1) list_set_text_pane_vc

0xac1a,	// (0x00041b48) setting_text_pane_vc_g1

0xac24,	// (0x00041b52) bg_set_opt_pane_cp2_vc

0xe0bd,	// (0x00044feb) setting_slider_graphic_pane_vc_g1

0xe0c5,	// (0x00044ff3) setting_slider_graphic_pane_vc_t1

0xe0d3,	// (0x00045001) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa25,	// (0x00046953) setting_slider_graphic_pane_vc_t

0xe0e1,	// (0x0004500f) slider_set_pane_cp_vc

0xe0e9,	// (0x00045017) slider_set_pane_vc_g1

0xe0f2,	// (0x00045020) slider_set_pane_vc_g2

0x0006,

0xfa2a,	// (0x00046958) slider_set_pane_vc_g

0xbb7d,	// (0x00042aab) set_opt_bg_pane_g1_copy1

0xbb85,	// (0x00042ab3) set_opt_bg_pane_g2_copy1

0xe11e,	// (0x0004504c) set_opt_bg_pane_g3_copy1

0xbb95,	// (0x00042ac3) set_opt_bg_pane_g4_copy1

0xbb9d,	// (0x00042acb) set_opt_bg_pane_g5_copy1

0xbba5,	// (0x00042ad3) set_opt_bg_pane_g6_copy1

0xe128,	// (0x00045056) set_opt_bg_pane_g7_copy1

0xe130,	// (0x0004505e) set_opt_bg_pane_g8_copy1

0xe13a,	// (0x00045068) set_opt_bg_pane_g9_copy1

0xac24,	// (0x00041b52) bg_set_opt_pane_cp_vc

0xe144,	// (0x00045072) setting_slider_pane_vc_t1

0xe0c5,	// (0x00044ff3) setting_slider_pane_vc_t2

0xe0d3,	// (0x00045001) setting_slider_pane_vc_t3

0x0002,

0xfa39,	// (0x00046967) setting_slider_pane_vc_t

0xe0e1,	// (0x0004500f) slider_set_pane_vc

0x27c1,	// (0x000396ef) volume_set_pane_vc_g1

0x27ca,	// (0x000396f8) volume_set_pane_vc_g2

0x27d3,	// (0x00039701) volume_set_pane_vc_g3

0x27dc,	// (0x0003970a) volume_set_pane_vc_g4

0x27e5,	// (0x00039713) volume_set_pane_vc_g5

0x27ee,	// (0x0003971c) volume_set_pane_vc_g6

0x27f7,	// (0x00039725) volume_set_pane_vc_g7

0x2800,	// (0x0003972e) volume_set_pane_vc_g8

0x2809,	// (0x00039737) volume_set_pane_vc_g9

0x2812,	// (0x00039740) volume_set_pane_vc_g10

0x0009,

0xfa40,	// (0x0004696e) volume_set_pane_vc_g

0xe153,	// (0x00045081) volume_set_pane_vc

0xe15b,	// (0x00045089) button_value_adjust_pane_cp1_vc

0xe165,	// (0x00045093) list_highlight_pane_cp2_vc

0xe16e,	// (0x0004509c) list_set_pane_vc_ParamLimits

0xe16e,	// (0x0004509c) list_set_pane_vc

0xe1e6,	// (0x00045114) main_pane_set_vc_t1_ParamLimits

0xe1e6,	// (0x00045114) main_pane_set_vc_t1

0xe1fb,	// (0x00045129) main_pane_set_vc_t2_ParamLimits

0xe1fb,	// (0x00045129) main_pane_set_vc_t2

0xe20d,	// (0x0004513b) main_pane_set_vc_t3_ParamLimits

0xe20d,	// (0x0004513b) main_pane_set_vc_t3

0xe221,	// (0x0004514f) main_pane_set_vc_t4_ParamLimits

0xe221,	// (0x0004514f) main_pane_set_vc_t4

0x0003,

0xfa55,	// (0x00046983) main_pane_set_vc_t_ParamLimits

0xfa55,	// (0x00046983) main_pane_set_vc_t

0xe235,	// (0x00045163) setting_code_pane_vc_ParamLimits

0xe235,	// (0x00045163) setting_code_pane_vc

0xe246,	// (0x00045174) setting_slider_graphic_pane_vc

0xe246,	// (0x00045174) setting_slider_pane_vc

0xe246,	// (0x00045174) setting_text_pane_vc

0xe246,	// (0x00045174) setting_volume_pane_vc

0xe250,	// (0x0004517e) scroll_pane_cp121_vc

0xbaf0,	// (0x00042a1e) set_content_pane_vc

0xe28e,	// (0x000451bc) button_value_adjust_pane_g1

0xe297,	// (0x000451c5) button_value_adjust_pane_g2

0x0001,

0xfaa8,	// (0x000469d6) button_value_adjust_pane_g

0xe2a0,	// (0x000451ce) form_field_slider_wide_pane_vc_t1_ParamLimits

0xe2a0,	// (0x000451ce) form_field_slider_wide_pane_vc_t1

0xe2b4,	// (0x000451e2) form_field_slider_wide_pane_vc_t2_ParamLimits

0xe2b4,	// (0x000451e2) form_field_slider_wide_pane_vc_t2

0x0001,

0xfaad,	// (0x000469db) form_field_slider_wide_pane_vc_t_ParamLimits

0xfaad,	// (0x000469db) form_field_slider_wide_pane_vc_t

0xac72,	// (0x00041ba0) input_focus_pane_cp10_vc_ParamLimits

0xac72,	// (0x00041ba0) input_focus_pane_cp10_vc

0xe2c6,	// (0x000451f4) slider_cont_pane_cp1_vc_ParamLimits

0xe2c6,	// (0x000451f4) slider_cont_pane_cp1_vc

0xe0e9,	// (0x00045017) slider_form_pane_g1_cp2

0xe0f2,	// (0x00045020) slider_form_pane_g2_cp2

0xe2df,	// (0x0004520d) form_field_slider_pane_vc_t3

0xe2ed,	// (0x0004521b) form_field_slider_pane_vc_t4

0xe2fb,	// (0x00045229) slider_form_pane_vc_ParamLimits

0xe2fb,	// (0x00045229) slider_form_pane_vc

0xe308,	// (0x00045236) form_field_slider_pane_vc_t1_ParamLimits

0xe308,	// (0x00045236) form_field_slider_pane_vc_t1

0xe2b4,	// (0x000451e2) form_field_slider_pane_vc_t2_ParamLimits

0xe2b4,	// (0x000451e2) form_field_slider_pane_vc_t2

0x0001,

0xfabd,	// (0x000469eb) form_field_slider_pane_vc_t_ParamLimits

0xfabd,	// (0x000469eb) form_field_slider_pane_vc_t

0xac72,	// (0x00041ba0) input_focus_pane_cp9_vc_ParamLimits

0xac72,	// (0x00041ba0) input_focus_pane_cp9_vc

0xe324,	// (0x00045252) slider_cont_pane_vc_ParamLimits

0xe324,	// (0x00045252) slider_cont_pane_vc

0xe336,	// (0x00045264) list_form_graphic_pane_cp_vc_ParamLimits

0xe336,	// (0x00045264) list_form_graphic_pane_cp_vc

0xcbc3,	// (0x00043af1) form_field_popup_wide_pane_vc_g1

0xe34b,	// (0x00045279) form_field_popup_wide_pane_vc_t1_ParamLimits

0xe34b,	// (0x00045279) form_field_popup_wide_pane_vc_t1

0xbb16,	// (0x00042a44) input_focus_pane_cp8_vc_ParamLimits

0xbb16,	// (0x00042a44) input_focus_pane_cp8_vc

0xe362,	// (0x00045290) list_form_wide_pane_vc_ParamLimits

0xe362,	// (0x00045290) list_form_wide_pane_vc

0xe36e,	// (0x0004529c) list_form_graphic_pane_vc_g1

0xe376,	// (0x000452a4) list_form_graphic_pane_vc_t1_ParamLimits

0xe376,	// (0x000452a4) list_form_graphic_pane_vc_t1

0xac80,	// (0x00041bae) list_highlight_pane_cp5_vc_ParamLimits

0xac80,	// (0x00041bae) list_highlight_pane_cp5_vc

0xe392,	// (0x000452c0) list_form_graphic_pane_vc_ParamLimits

0xe392,	// (0x000452c0) list_form_graphic_pane_vc

0xcbc3,	// (0x00043af1) form_field_popup_pane_vc_g1

0xe3a8,	// (0x000452d6) form_field_popup_pane_vc_t1_ParamLimits

0xe3a8,	// (0x000452d6) form_field_popup_pane_vc_t1

0xbb16,	// (0x00042a44) input_focus_pane_cp7_vc_ParamLimits

0xbb16,	// (0x00042a44) input_focus_pane_cp7_vc

0xe3bf,	// (0x000452ed) list_form_pane_vc_ParamLimits

0xe3bf,	// (0x000452ed) list_form_pane_vc

0xe3cb,	// (0x000452f9) data_form_pane_vc_t1_ParamLimits

0xe3cb,	// (0x000452f9) data_form_pane_vc_t1

0xbb7d,	// (0x00042aab) input_focus_pane_vc_g1

0xbb85,	// (0x00042ab3) input_focus_pane_vc_g2

0xbb8d,	// (0x00042abb) input_focus_pane_vc_g3

0xbb95,	// (0x00042ac3) input_focus_pane_vc_g4

0xbb9d,	// (0x00042acb) input_focus_pane_vc_g5

0xbba5,	// (0x00042ad3) input_focus_pane_vc_g6

0xbbad,	// (0x00042adb) input_focus_pane_vc_g7

0xbbb5,	// (0x00042ae3) input_focus_pane_vc_g8

0xbbbd,	// (0x00042aeb) input_focus_pane_vc_g9

0xac1a,	// (0x00041b48) input_focus_pane_vc_g10

0x0009,

0xf6cb,	// (0x000465f9) input_focus_pane_vc_g

0xcbb7,	// (0x00043ae5) data_form_pane_vc_ParamLimits

0xcbb7,	// (0x00043ae5) data_form_pane_vc

0xcbc3,	// (0x00043af1) form_field_data_pane_vc_g1

0xe3e6,	// (0x00045314) form_field_data_pane_vc_t1_ParamLimits

0xe3e6,	// (0x00045314) form_field_data_pane_vc_t1

0xbb16,	// (0x00042a44) input_focus_pane_vc_ParamLimits

0xbb16,	// (0x00042a44) input_focus_pane_vc

0xe400,	// (0x0004532e) button_value_adjust_pane_cp3_vc

0xe408,	// (0x00045336) button_value_adjust_pane_cp5_vc

0xe410,	// (0x0004533e) form_field_data_pane_vc_ParamLimits

0xe410,	// (0x0004533e) form_field_data_pane_vc

0xe427,	// (0x00045355) form_field_data_pane_vc_cp2

0xe42f,	// (0x0004535d) form_field_data_wide_pane_vc_ParamLimits

0xe42f,	// (0x0004535d) form_field_data_wide_pane_vc

0xe445,	// (0x00045373) form_field_data_wide_pane_vc_cp2

0xe44d,	// (0x0004537b) form_field_popup_pane_vc_ParamLimits

0xe44d,	// (0x0004537b) form_field_popup_pane_vc

0xe464,	// (0x00045392) form_field_popup_wide_pane_vc_ParamLimits

0xe464,	// (0x00045392) form_field_popup_wide_pane_vc

0xe47a,	// (0x000453a8) form_field_slider_pane_vc_ParamLimits

0xe47a,	// (0x000453a8) form_field_slider_pane_vc

0xe48d,	// (0x000453bb) form_field_slider_wide_pane_vc_ParamLimits

0xe48d,	// (0x000453bb) form_field_slider_wide_pane_vc

0x9bda,	// (0x00040b08) grid_touch_1_pane_ParamLimits

0x9bda,	// (0x00040b08) grid_touch_1_pane

0x9bee,	// (0x00040b1c) grid_touch_2_pane_ParamLimits

0x9bee,	// (0x00040b1c) grid_touch_2_pane

0xe4a0,	// (0x000453ce) touch_pane_g1_ParamLimits

0xe4a0,	// (0x000453ce) touch_pane_g1

0xe4ae,	// (0x000453dc) cell_app_pane_cp_wide_ParamLimits

0xe4ae,	// (0x000453dc) cell_app_pane_cp_wide

0xe4bf,	// (0x000453ed) grid_popup_fast_wide_pane_ParamLimits

0xe4bf,	// (0x000453ed) grid_popup_fast_wide_pane

0xe4d3,	// (0x00045401) scroll_pane_cp19_ParamLimits

0xe4d3,	// (0x00045401) scroll_pane_cp19

0xac24,	// (0x00041b52) bg_popup_window_pane_cp20

0xe4e7,	// (0x00045415) listscroll_popup_fast_wide_pane

0xcc12,	// (0x00043b40) grid_indicator_nsta_pane

0xe4ef,	// (0x0004541d) clock_nsta_pane_g1

0xe4f8,	// (0x00045426) clock_nsta_pane_t1

0x9c18,	// (0x00040b46) cell_indicator_nsta_pane_ParamLimits

0x9c18,	// (0x00040b46) cell_indicator_nsta_pane

0xe4a0,	// (0x000453ce) cell_indicator_nsta_pane_g1

0x9c31,	// (0x00040b5f) cell_indicator_nsta_pane_g2

0x0001,

0xfac7,	// (0x000469f5) cell_indicator_nsta_pane_g

0xe514,	// (0x00045442) clock_nsta_pane_cp

0xe51c,	// (0x0004544a) indicator_nsta_pane_cp

0xe524,	// (0x00045452) nsta_clock_indic_pane_g1

0xb178,	// (0x000420a6) grid_indicator_pane

0xbf87,	// (0x00042eb5) scroll_pane_cp29

0x1e59,	// (0x00038d87) indicator_nsta_pane_cp2_ParamLimits

0x1e59,	// (0x00038d87) indicator_nsta_pane_cp2

0xac80,	// (0x00041bae) main_apps_wheel_pane

0xcd03,	// (0x00043c31) form_midp_field_text_pane_ParamLimits

0xce36,	// (0x00043d64) scroll_bar_cp050_ParamLimits

0xe55c,	// (0x0004548a) cell_indicator_pane_ParamLimits

0xe55c,	// (0x0004548a) cell_indicator_pane

0xe573,	// (0x000454a1) cell_indicator_pane_g1

0x9c47,	// (0x00040b75) grid_wheel_folder_pane_ParamLimits

0x9c47,	// (0x00040b75) grid_wheel_folder_pane

0x9c55,	// (0x00040b83) list_wheel_apps_pane_ParamLimits

0x9c55,	// (0x00040b83) list_wheel_apps_pane

0x9c63,	// (0x00040b91) main_apps_wheel_pane_g1_ParamLimits

0x9c63,	// (0x00040b91) main_apps_wheel_pane_g1

0x9c6f,	// (0x00040b9d) main_apps_wheel_pane_g2_ParamLimits

0x9c6f,	// (0x00040b9d) main_apps_wheel_pane_g2

0x0001,

0xfad6,	// (0x00046a04) main_apps_wheel_pane_g_ParamLimits

0xfad6,	// (0x00046a04) main_apps_wheel_pane_g

0x9c7d,	// (0x00040bab) main_apps_wheel_pane_t1_ParamLimits

0x9c7d,	// (0x00040bab) main_apps_wheel_pane_t1

0x9c91,	// (0x00040bbf) list_wheel_apps_pane_g1

0x9c99,	// (0x00040bc7) list_wheel_apps_pane_g2

0x9ca1,	// (0x00040bcf) list_wheel_apps_pane_g3

0x9ca9,	// (0x00040bd7) list_wheel_apps_pane_g4

0x9cb3,	// (0x00040be1) list_wheel_apps_pane_g5

0x0004,

0xfadb,	// (0x00046a09) list_wheel_apps_pane_g

0xc3bb,	// (0x000432e9) navi_icon_text_pane

0x9286,	// (0x000401b4) aid_fill_nsta

0x9cca,	// (0x00040bf8) navi_icon_text_pane_g1

0x9cd6,	// (0x00040c04) navi_icon_text_pane_t1

0x8ab9,	// (0x0003f9e7) list_set_graphic_pane_t1_ParamLimits

0x8ab9,	// (0x0003f9e7) list_set_graphic_pane_t1

0xd51a,	// (0x00044448) popup_midp_note_alarm_window_t6_ParamLimits

0xd51a,	// (0x00044448) popup_midp_note_alarm_window_t6

0xd52c,	// (0x0004445a) popup_midp_note_alarm_window_t7_ParamLimits

0xd52c,	// (0x0004445a) popup_midp_note_alarm_window_t7

0xd53e,	// (0x0004446c) popup_midp_note_alarm_window_t8_ParamLimits

0xd53e,	// (0x0004446c) popup_midp_note_alarm_window_t8

0xd550,	// (0x0004447e) popup_midp_note_alarm_window_t9_ParamLimits

0xd550,	// (0x0004447e) popup_midp_note_alarm_window_t9

0xd562,	// (0x00044490) popup_midp_note_alarm_window_t10_ParamLimits

0xd562,	// (0x00044490) popup_midp_note_alarm_window_t10

0xd574,	// (0x000444a2) popup_midp_note_alarm_window_t11_ParamLimits

0xd574,	// (0x000444a2) popup_midp_note_alarm_window_t11

0xd586,	// (0x000444b4) scroll_pane_cp17_ParamLimits

0xd586,	// (0x000444b4) scroll_pane_cp17

0x27c1,	// (0x000396ef) volume_small_pane_cp_g1

0x2bcc,	// (0x00039afa) volume_small_pane_cp_g2

0x2bd5,	// (0x00039b03) volume_small_pane_cp_g3

0x2bde,	// (0x00039b0c) volume_small_pane_cp_g4

0x2be7,	// (0x00039b15) volume_small_pane_cp_g5

0x2bf0,	// (0x00039b1e) volume_small_pane_cp_g6

0x2bf9,	// (0x00039b27) volume_small_pane_cp_g7

0x2c02,	// (0x00039b30) volume_small_pane_cp_g8

0x2c0b,	// (0x00039b39) volume_small_pane_cp_g9

0x2c14,	// (0x00039b42) volume_small_pane_cp_g10

0xc565,	// (0x00043493) midp_ticker_pane_g1_ParamLimits

0xc571,	// (0x0004349f) midp_ticker_pane_g2_ParamLimits

0xf793,	// (0x000466c1) midp_ticker_pane_g_ParamLimits

0x8b79,	// (0x0003faa7) midp_ticker_pane_t1_ParamLimits

0x92a6,	// (0x000401d4) aid_fill_nsta_2

0xce22,	// (0x00043d50) list_form2_midp_pane

0xdc5b,	// (0x00044b89) midp_editing_number_pane_ParamLimits

0xdc6a,	// (0x00044b98) midp_ticker_pane_ParamLimits

0xe57d,	// (0x000454ab) form2_midp_field_pane

0xe585,	// (0x000454b3) scroll_pane_cp51

0xe5a5,	// (0x000454d3) form2_midp_button_pane_ParamLimits

0xe5a5,	// (0x000454d3) form2_midp_button_pane

0xe5b7,	// (0x000454e5) form2_midp_content_pane_ParamLimits

0xe5b7,	// (0x000454e5) form2_midp_content_pane

0xe5d1,	// (0x000454ff) form2_midp_field_choice_group_pane

0xe5d9,	// (0x00045507) form2_midp_field_pane_g1

0xe5e1,	// (0x0004550f) form2_midp_field_pane_g2

0xe5e9,	// (0x00045517) form2_midp_field_pane_g3

0xe5f1,	// (0x0004551f) form2_midp_field_pane_g4

0x0003,

0x003b,	// (0x00036f69) form2_midp_field_pane_g

0xe5f9,	// (0x00045527) form2_midp_gauge_slider_pane

0xe601,	// (0x0004552f) form2_midp_gauge_wait_pane

0xe609,	// (0x00045537) form2_midp_image_pane_ParamLimits

0xe609,	// (0x00045537) form2_midp_image_pane

0xe624,	// (0x00045552) form2_midp_label_pane_ParamLimits

0xe624,	// (0x00045552) form2_midp_label_pane

0x9d04,	// (0x00040c32) form2_midp_label_pane_cp_ParamLimits

0x9d04,	// (0x00040c32) form2_midp_label_pane_cp

0xe63d,	// (0x0004556b) form2_midp_string_pane_ParamLimits

0xe63d,	// (0x0004556b) form2_midp_string_pane

0x7997,	// (0x0003e8c5) form2_midp_text_pane_ParamLimits

0x7997,	// (0x0003e8c5) form2_midp_text_pane

0xe64f,	// (0x0004557d) form2_midp_time_pane

0xe65f,	// (0x0004558d) input_focus_pane_cp51_ParamLimits

0xe65f,	// (0x0004558d) input_focus_pane_cp51

0xe677,	// (0x000455a5) form2_midp_label_pane_t1_ParamLimits

0xe677,	// (0x000455a5) form2_midp_label_pane_t1

0x79b6,	// (0x0003e8e4) form2_mdip_text_pane_t1_ParamLimits

0x79b6,	// (0x0003e8e4) form2_mdip_text_pane_t1

0x0f20,	// (0x00037e4e) form2_midp_time_pane_t1

0xe6c0,	// (0x000455ee) form2_midp_gauge_slider_pane_t1

0x9d25,	// (0x00040c53) form2_midp_gauge_slider_pane_t2

0x9d37,	// (0x00040c65) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb00,	// (0x00046a2e) form2_midp_gauge_slider_pane_t

0xe6d2,	// (0x00045600) form2_midp_slider_pane

0xe6de,	// (0x0004560c) form2_midp_gauge_wait_pane_t1

0xe6ec,	// (0x0004561a) form2_midp_wait_pane_ParamLimits

0xe6ec,	// (0x0004561a) form2_midp_wait_pane

0x9d49,	// (0x00040c77) list_single_2graphic_pane_cp4_ParamLimits

0x9d49,	// (0x00040c77) list_single_2graphic_pane_cp4

0x96b7,	// (0x000405e5) list_single_midp_graphic_pane_cp_ParamLimits

0x96b7,	// (0x000405e5) list_single_midp_graphic_pane_cp

0xac24,	// (0x00041b52) list_highlight_pane_cp20

0xe717,	// (0x00045645) list_single_2graphic_pane_g1_cp4

0xe71f,	// (0x0004564d) list_single_2graphic_pane_g2_cp4

0xe727,	// (0x00045655) list_single_2graphic_pane_t1_cp4

0xac80,	// (0x00041bae) list_highlight_pane_cp21

0xe736,	// (0x00045664) list_single_midp_graphic_pane_g4_cp

0xe745,	// (0x00045673) list_single_midp_graphic_pane_t1_cp

0x9d5e,	// (0x00040c8c) form2_mdip_string_pane_t1_ParamLimits

0x9d5e,	// (0x00040c8c) form2_mdip_string_pane_t1

0xac24,	// (0x00041b52) bg_wml_button_pane_cp2

0xac1a,	// (0x00041b48) form2_midp_image_pane_g1

0x19b3,	// (0x000388e1) list_double_large_graphic_pane_g5_ParamLimits

0x19b3,	// (0x000388e1) list_double_large_graphic_pane_g5

0x8ad1,	// (0x0003f9ff) midp_form_pane_ParamLimits

0xac80,	// (0x00041bae) main_apps_wheel_pane_ParamLimits

0x8fe2,	// (0x0003ff10) popup_preview_window_ParamLimits

0x8fe2,	// (0x0003ff10) popup_preview_window

0xc85c,	// (0x0004378a) popup_touch_info_window_ParamLimits

0xc85c,	// (0x0004378a) popup_touch_info_window

0xc87a,	// (0x000437a8) popup_touch_menu_window_ParamLimits

0xc87a,	// (0x000437a8) popup_touch_menu_window

0xac10,	// (0x00041b3e) bg_popup_sub_pane_cp6

0xe75a,	// (0x00045688) list_touch_menu_pane

0xe762,	// (0x00045690) list_single_touch_menu_pane_ParamLimits

0xe762,	// (0x00045690) list_single_touch_menu_pane

0xe779,	// (0x000456a7) list_single_touch_menu_pane_t1

0xac80,	// (0x00041bae) bg_popup_sub_pane_cp7_ParamLimits

0xac80,	// (0x00041bae) bg_popup_sub_pane_cp7

0xe787,	// (0x000456b5) heading_sub_pane

0xe78f,	// (0x000456bd) list_touch_info_pane_ParamLimits

0xe78f,	// (0x000456bd) list_touch_info_pane

0xe79e,	// (0x000456cc) list_single_touch_info_pane_ParamLimits

0xe79e,	// (0x000456cc) list_single_touch_info_pane

0xe7b0,	// (0x000456de) list_single_touch_info_pane_t1

0xe7be,	// (0x000456ec) list_single_touch_info_pane_t2

0x0001,

0x0052,	// (0x00036f80) list_single_touch_info_pane_t

0xc53b,	// (0x00043469) bg_popup_heading_pane_cp

0xe7cc,	// (0x000456fa) heading_sub_pane_t1

0xcb7d,	// (0x00043aab) bg_popup_preview_window_pane_cp_ParamLimits

0xcb7d,	// (0x00043aab) bg_popup_preview_window_pane_cp

0xe787,	// (0x000456b5) heading_preview_pane

0xe78f,	// (0x000456bd) list_preview_pane_ParamLimits

0xe78f,	// (0x000456bd) list_preview_pane

0xe7da,	// (0x00045708) popup_preview_window_g1

0xe79e,	// (0x000456cc) list_single_preview_pane_ParamLimits

0xe79e,	// (0x000456cc) list_single_preview_pane

0xe7e2,	// (0x00045710) list_single_preview_pane_g1

0xe7ea,	// (0x00045718) list_single_preview_pane_t1

0xe7b0,	// (0x000456de) list_single_preview_pane_t2

0x0001,

0x0057,	// (0x00036f85) list_single_preview_pane_t

0xe7f8,	// (0x00045726) bg_popup_heading_pane_cp2_ParamLimits

0xe7f8,	// (0x00045726) bg_popup_heading_pane_cp2

0xe80e,	// (0x0004573c) heading_preview_pane_g1

0xe816,	// (0x00045744) heading_preview_pane_t1_ParamLimits

0xe816,	// (0x00045744) heading_preview_pane_t1

0xb18f,	// (0x000420bd) soft_indicator_pane_t1_ParamLimits

0xba89,	// (0x000429b7) scroll_pane_ParamLimits

0xbe80,	// (0x00042dae) scroll_sc2_left_pane

0xbe89,	// (0x00042db7) scroll_sc2_right_pane

0xbea8,	// (0x00042dd6) scroll_bg_pane_g1_ParamLimits

0xbebd,	// (0x00042deb) scroll_bg_pane_g2_ParamLimits

0xbed5,	// (0x00042e03) scroll_bg_pane_g3_ParamLimits

0xf722,	// (0x00046650) scroll_bg_pane_g_ParamLimits

0xbea8,	// (0x00042dd6) scroll_handle_pane_g1_ParamLimits

0xbef7,	// (0x00042e25) scroll_handle_pane_g2_ParamLimits

0xbed5,	// (0x00042e03) scroll_handle_pane_g3_ParamLimits

0xf729,	// (0x00046657) scroll_handle_pane_g_ParamLimits

0xc79d,	// (0x000436cb) popup_choice_list_window_ParamLimits

0xc79d,	// (0x000436cb) popup_choice_list_window

0xc9cb,	// (0x000438f9) choice_list_pane

0xca4d,	// (0x0004397b) cell_toolbar_pane_t1

0xca75,	// (0x000439a3) toolbar_button_pane_ParamLimits

0xd9b2,	// (0x000448e0) ai_gene_pane_1_t2_ParamLimits

0xd9b2,	// (0x000448e0) ai_gene_pane_1_t2

0x0001,

0xf93a,	// (0x00046868) ai_gene_pane_1_t_ParamLimits

0xf93a,	// (0x00046868) ai_gene_pane_1_t

0xe833,	// (0x00045761) scroll_sc2_left_pane_g1

0xe833,	// (0x00045761) scroll_sc2_right_pane_g1

0xbc6e,	// (0x00042b9c) bg_popup_sub_pane_cp10

0xe83d,	// (0x0004576b) list_choice_list_pane

0xe854,	// (0x00045782) list_single_choice_list_pane_ParamLimits

0xe854,	// (0x00045782) list_single_choice_list_pane

0xe868,	// (0x00045796) list_single_choice_list_pane_g1

0xe870,	// (0x0004579e) list_single_choice_list_pane_t1_ParamLimits

0xe870,	// (0x0004579e) list_single_choice_list_pane_t1

0xe885,	// (0x000457b3) choice_list_pane_g1

0xe88d,	// (0x000457bb) choice_list_pane_t1

0xac10,	// (0x00041b3e) input_focus_pane_cp11

0xbde3,	// (0x00042d11) title_pane_stacon_g2_ParamLimits

0xbde3,	// (0x00042d11) title_pane_stacon_g2

0x0002,

0xf708,	// (0x00046636) title_pane_stacon_g_ParamLimits

0xf708,	// (0x00046636) title_pane_stacon_g

0xc53b,	// (0x00043469) cursor_press_pane

0x8cad,	// (0x0003fbdb) popup_fep_hwr_window_ParamLimits

0x8cad,	// (0x0003fbdb) popup_fep_hwr_window

0xc7f3,	// (0x00043721) popup_fep_vkb_window_ParamLimits

0xc7f3,	// (0x00043721) popup_fep_vkb_window

0xe89b,	// (0x000457c9) cursor_press_pane_g1

0x0002,

0xfb22,	// (0x00046a50) fep_vkb_side_pane_g_ParamLimits

0x2c48,	// (0x00039b76) fep_hwr_candidate_pane_ParamLimits

0x2c48,	// (0x00039b76) fep_hwr_candidate_pane

0x2c72,	// (0x00039ba0) fep_hwr_side_pane_ParamLimits

0x2c72,	// (0x00039ba0) fep_hwr_side_pane

0x2c92,	// (0x00039bc0) fep_hwr_top_pane_ParamLimits

0x2c92,	// (0x00039bc0) fep_hwr_top_pane

0x2caa,	// (0x00039bd8) fep_hwr_write_pane_ParamLimits

0x2caa,	// (0x00039bd8) fep_hwr_write_pane

0xfb22,	// (0x00046a50) fep_vkb_side_pane_g

0xe8a3,	// (0x000457d1) fep_hwr_top_pane_g1

0xe8b5,	// (0x000457e3) fep_hwr_top_pane_g2

0x2cd6,	// (0x00039c04) fep_hwr_top_pane_g3

0x0002,

0xfb07,	// (0x00046a35) fep_hwr_top_pane_g

0x2ceb,	// (0x00039c19) fep_hwr_top_text_pane

0xc04e,	// (0x00042f7c) fep_hwr_top_text_pane_g1

0xe8eb,	// (0x00045819) fep_hwr_top_text_pane_t1

0x2de1,	// (0x00039d0f) fep_hwr_candidate_pane_g1

0xea18,	// (0x00045946) fep_vkb_keypad_pane_g3_ParamLimits

0xea18,	// (0x00045946) fep_vkb_keypad_pane_g3

0xea40,	// (0x0004596e) fep_vkb_keypad_pane_g4_ParamLimits

0xea40,	// (0x0004596e) fep_vkb_keypad_pane_g4

0xeaaf,	// (0x000459dd) fep_vkb_bottom_pane_g2_ParamLimits

0xeaaf,	// (0x000459dd) fep_vkb_bottom_pane_g2

0x0001,

0x0087,	// (0x00036fb5) fep_vkb_bottom_pane_g_ParamLimits

0x0087,	// (0x00036fb5) fep_vkb_bottom_pane_g

0xe833,	// (0x00045761) cell_vkb_side_pane_g2

0x0001,

0x0091,	// (0x00036fbf) cell_vkb_side_pane_g

0xeaf3,	// (0x00045a21) cell_vkb_side_pane_t1

0xeb01,	// (0x00045a2f) cell_vkb_side_pane_t1_copy1

0xe833,	// (0x00045761) bg_fep_vkb_candidate_pane_g2

0xebd7,	// (0x00045b05) cell_vkb_candidate_pane_ParamLimits

0xe8f9,	// (0x00045827) aid_size_cell_vkb_ParamLimits

0xe8f9,	// (0x00045827) aid_size_cell_vkb

0xebd7,	// (0x00045b05) cell_vkb_candidate_pane

0x2dfb,	// (0x00039d29) bg_popup_fep_shadow_pane_g1

0x9dec,	// (0x00040d1a) fep_vkb_bottom_pane_ParamLimits

0x9dec,	// (0x00040d1a) fep_vkb_bottom_pane

0xe986,	// (0x000458b4) fep_vkb_candidate_pane_ParamLimits

0xe986,	// (0x000458b4) fep_vkb_candidate_pane

0x9e11,	// (0x00040d3f) fep_vkb_keypad_pane_ParamLimits

0x9e11,	// (0x00040d3f) fep_vkb_keypad_pane

0x9e4d,	// (0x00040d7b) fep_vkb_side_pane_ParamLimits

0x9e4d,	// (0x00040d7b) fep_vkb_side_pane

0x9e89,	// (0x00040db7) fep_vkb_top_pane_ParamLimits

0x9e89,	// (0x00040db7) fep_vkb_top_pane

0xe9ac,	// (0x000458da) fep_vkb_top_pane_g1_ParamLimits

0xe9ac,	// (0x000458da) fep_vkb_top_pane_g1

0xe9bb,	// (0x000458e9) fep_vkb_top_pane_g2_ParamLimits

0xe9bb,	// (0x000458e9) fep_vkb_top_pane_g2

0xe9ca,	// (0x000458f8) fep_vkb_top_pane_g3_ParamLimits

0xe9ca,	// (0x000458f8) fep_vkb_top_pane_g3

0x0003,

0x0077,	// (0x00036fa5) fep_vkb_top_pane_g_ParamLimits

0x0077,	// (0x00036fa5) fep_vkb_top_pane_g

0xe9e8,	// (0x00045916) fep_vkb_top_text_pane_ParamLimits

0xe9e8,	// (0x00045916) fep_vkb_top_text_pane

0x9ec5,	// (0x00040df3) fep_vkb_side_pane_g1_ParamLimits

0x9ec5,	// (0x00040df3) fep_vkb_side_pane_g1

0xea07,	// (0x00045935) grid_vkb_side_pane_ParamLimits

0xea07,	// (0x00045935) grid_vkb_side_pane

0x2e03,	// (0x00039d31) bg_popup_fep_shadow_pane_g2

0x2e0c,	// (0x00039d3a) bg_popup_fep_shadow_pane_g3

0x2e14,	// (0x00039d42) bg_popup_fep_shadow_pane_g4

0x2e1d,	// (0x00039d4b) bg_popup_fep_shadow_pane_g5

0x2e27,	// (0x00039d55) bg_popup_fep_shadow_pane_g6

0x2e2f,	// (0x00039d5d) bg_popup_fep_shadow_pane_g7

0xbb9d,	// (0x00042acb) bg_popup_fep_shadow_pane_g8

0xea5e,	// (0x0004598c) grid_vkb_keypad_number_pane_ParamLimits

0xea5e,	// (0x0004598c) grid_vkb_keypad_number_pane

0xea6e,	// (0x0004599c) grid_vkb_keypad_pane_ParamLimits

0xea6e,	// (0x0004599c) grid_vkb_keypad_pane

0xea94,	// (0x000459c2) fep_vkb_bottom_pane_g1_ParamLimits

0xea94,	// (0x000459c2) fep_vkb_bottom_pane_g1

0xeabd,	// (0x000459eb) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xeabd,	// (0x000459eb) grid_vkb_keypad_bottom_left_pane

0xead2,	// (0x00045a00) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xead2,	// (0x00045a00) grid_vkb_keypad_bottom_right_pane

0xeae7,	// (0x00045a15) fep_vkb_top_text_pane_g1

0x9f0c,	// (0x00040e3a) fep_vkb_top_text_pane_t1

0x9f1e,	// (0x00040e4c) cell_vkb_side_pane_ParamLimits

0x9f1e,	// (0x00040e4c) cell_vkb_side_pane

0xe833,	// (0x00045761) cell_vkb_side_pane_g1

0xeb0f,	// (0x00045a3d) cell_vkb_keypad_pane_ParamLimits

0xeb0f,	// (0x00045a3d) cell_vkb_keypad_pane

0xeb84,	// (0x00045ab2) cell_vkb_keypad_pane_g1

0x0008,

0xfb2e,	// (0x00046a5c) bg_popup_fep_shadow_pane_g

0xe833,	// (0x00045761) cell_hwr_side_pane_g1

0xe833,	// (0x00045761) cell_hwr_side_pane_g2

0xeb8e,	// (0x00045abc) cell_vkb_keypad_pane_t1

0x9f34,	// (0x00040e62) cell_vkb_keypad_bottom_left_pane_ParamLimits

0x9f34,	// (0x00040e62) cell_vkb_keypad_bottom_left_pane

0x9f49,	// (0x00040e77) cell_vkb_keypad_bottom_right_pane_ParamLimits

0x9f49,	// (0x00040e77) cell_vkb_keypad_bottom_right_pane

0xe833,	// (0x00045761) cell_vkb_keypad_bottom_left_pane_g1

0xe833,	// (0x00045761) cell_vkb_keypad_bottom_right_pane_g1

0xeb9c,	// (0x00045aca) cell_vkb_keypad_number_pane_ParamLimits

0xeb9c,	// (0x00045aca) cell_vkb_keypad_number_pane

0xebbb,	// (0x00045ae9) cell_vkb_keypad_number_pane_g1

0xebc5,	// (0x00045af3) cell_vkb_keypad_number_pane_g2

0xebce,	// (0x00045afc) cell_vkb_keypad_number_pane_g3

0x0002,

0x0096,	// (0x00036fc4) cell_vkb_keypad_number_pane_g

0xeb8e,	// (0x00045abc) cell_vkb_keypad_number_pane_t1

0xebf2,	// (0x00045b20) fep_vkb_candidate_pane_g1

0x0001,

0x0091,	// (0x00036fbf) cell_hwr_side_pane_g

0xec0b,	// (0x00045b39) cell_hwr_side_pane_t1

0x2e41,	// (0x00039d6f) cell_hwr_side_pane_t1_copy1

0xe9da,	// (0x00045908) cell_hwr_candidate_pane_g1

0x2e4f,	// (0x00039d7d) cell_hwr_candidate_pane_t1

0xe833,	// (0x00045761) cell_vkb_candidate_pane_g2

0xec70,	// (0x00045b9e) cell_vkb_candidate_pane_t1

0xe1d8,	// (0x00045106) bg_popup_fep_shadow_pane_ParamLimits

0xe1d8,	// (0x00045106) bg_popup_fep_shadow_pane

0x7fde,	// (0x0003ef0c) bg_fep_hwr_top_pane_g4

0xe8c7,	// (0x000457f5) bg_hwr_side_pane_g1_ParamLimits

0xe8c7,	// (0x000457f5) bg_hwr_side_pane_g1

0x8004,	// (0x0003ef32) cell_hwr_side_pane_ParamLimits

0x8004,	// (0x0003ef32) cell_hwr_side_pane

0x2d62,	// (0x00039c90) fep_hwr_write_pane_g1_ParamLimits

0x2d62,	// (0x00039c90) fep_hwr_write_pane_g1

0x2d6f,	// (0x00039c9d) fep_hwr_write_pane_g2_ParamLimits

0x2d6f,	// (0x00039c9d) fep_hwr_write_pane_g2

0x2d7c,	// (0x00039caa) fep_hwr_write_pane_g3_ParamLimits

0x2d7c,	// (0x00039caa) fep_hwr_write_pane_g3

0x8024,	// (0x0003ef52) fep_hwr_write_pane_g4_ParamLimits

0x8024,	// (0x0003ef52) fep_hwr_write_pane_g4

0x0005,

0xfb0e,	// (0x00046a3c) fep_hwr_write_pane_g_ParamLimits

0xfb0e,	// (0x00046a3c) fep_hwr_write_pane_g

0x7fde,	// (0x0003ef0c) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x7fde,	// (0x0003ef0c) bg_fep_hwr_candidate_pane_g2

0x2d9f,	// (0x00039ccd) cell_hwr_candidate_pane_ParamLimits

0x2d9f,	// (0x00039ccd) cell_hwr_candidate_pane

0x2de1,	// (0x00039d0f) fep_hwr_candidate_pane_g1_ParamLimits

0xe927,	// (0x00045855) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xe927,	// (0x00045855) bg_popup_fep_shadow_pane_cp2

0xe9da,	// (0x00045908) fep_vkb_top_pane_g4_ParamLimits

0xe9da,	// (0x00045908) fep_vkb_top_pane_g4

0xe9f9,	// (0x00045927) fep_vkb_side_pane_g2_ParamLimits

0xe9f9,	// (0x00045927) fep_vkb_side_pane_g2

0x7667,	// (0x0003e595) list_setting_pane_t4_ParamLimits

0x7667,	// (0x0003e595) list_setting_pane_t4

0x7701,	// (0x0003e62f) list_setting_number_pane_t5_ParamLimits

0x7701,	// (0x0003e62f) list_setting_number_pane_t5

0x89ea,	// (0x0003f918) list_double_heading_pane_cp2_ParamLimits

0x89ea,	// (0x0003f918) list_double_heading_pane_cp2

0xbb30,	// (0x00042a5e) list_double_heading_pane_g1_cp2_ParamLimits

0xbb30,	// (0x00042a5e) list_double_heading_pane_g1_cp2

0xbb3c,	// (0x00042a6a) list_double_heading_pane_g2_cp2_ParamLimits

0xbb3c,	// (0x00042a6a) list_double_heading_pane_g2_cp2

0xec7e,	// (0x00045bac) list_double_heading_pane_t1_cp2_ParamLimits

0xec7e,	// (0x00045bac) list_double_heading_pane_t1_cp2

0xecb5,	// (0x00045be3) list_double_heading_pane_t2_cp2_ParamLimits

0xecb5,	// (0x00045be3) list_double_heading_pane_t2_cp2

0xac08,	// (0x00041b36) aid_value_unit2

0x14bc,	// (0x000383ea) popup_preview_fixed_window

0xb26f,	// (0x0004219d) bg_popup_preview_window_pane_cp02

0xecc7,	// (0x00045bf5) list_preview_fixed_pane

0xed0d,	// (0x00045c3b) list_empty_pane_fp_ParamLimits

0xed0d,	// (0x00045c3b) list_empty_pane_fp

0xed0d,	// (0x00045c3b) list_single_cale_day_pane_fp_ParamLimits

0xed0d,	// (0x00045c3b) list_single_cale_day_pane_fp

0xed0d,	// (0x00045c3b) list_single_graphic_heading_pane_fp_ParamLimits

0xed0d,	// (0x00045c3b) list_single_graphic_heading_pane_fp

0xed0d,	// (0x00045c3b) list_single_graphic_pane_fp_ParamLimits

0xed0d,	// (0x00045c3b) list_single_graphic_pane_fp

0xed0d,	// (0x00045c3b) list_single_heading_pane_fp_ParamLimits

0xed0d,	// (0x00045c3b) list_single_heading_pane_fp

0xed0d,	// (0x00045c3b) list_single_pane_fp_ParamLimits

0xed0d,	// (0x00045c3b) list_single_pane_fp

0xed22,	// (0x00045c50) list_single_pane_fp_g1_ParamLimits

0xed22,	// (0x00045c50) list_single_pane_fp_g1

0xcac9,	// (0x000439f7) list_single_pane_fp_g2_ParamLimits

0xcac9,	// (0x000439f7) list_single_pane_fp_g2

0xed2e,	// (0x00045c5c) list_single_pane_fp_g3_ParamLimits

0xed2e,	// (0x00045c5c) list_single_pane_fp_g3

0xed42,	// (0x00045c70) list_single_pane_fp_g4_ParamLimits

0xed42,	// (0x00045c70) list_single_pane_fp_g4

0x0003,

0xfb48,	// (0x00046a76) list_single_pane_fp_g_ParamLimits

0xfb48,	// (0x00046a76) list_single_pane_fp_g

0x0f33,	// (0x00037e61) list_single_pane_fp_t1_ParamLimits

0x0f33,	// (0x00037e61) list_single_pane_fp_t1

0x0f4a,	// (0x00037e78) list_single_graphic_pane_fp_g1_ParamLimits

0x0f4a,	// (0x00037e78) list_single_graphic_pane_fp_g1

0xed22,	// (0x00045c50) list_single_graphic_pane_fp_g2_ParamLimits

0xed22,	// (0x00045c50) list_single_graphic_pane_fp_g2

0xcac9,	// (0x000439f7) list_single_graphic_pane_fp_g3_ParamLimits

0xcac9,	// (0x000439f7) list_single_graphic_pane_fp_g3

0xed2e,	// (0x00045c5c) list_single_graphic_pane_fp_g4_ParamLimits

0xed2e,	// (0x00045c5c) list_single_graphic_pane_fp_g4

0xed42,	// (0x00045c70) list_single_graphic_pane_fp_g5_ParamLimits

0xed42,	// (0x00045c70) list_single_graphic_pane_fp_g5

0x0004,

0xfb51,	// (0x00046a7f) list_single_graphic_pane_fp_g_ParamLimits

0xfb51,	// (0x00046a7f) list_single_graphic_pane_fp_g

0x0f56,	// (0x00037e84) list_single_graphic_pane_fp_t1_ParamLimits

0x0f56,	// (0x00037e84) list_single_graphic_pane_fp_t1

0x0f4a,	// (0x00037e78) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x0f4a,	// (0x00037e78) list_single_graphic_heading_pane_fp_g1

0xed22,	// (0x00045c50) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xed22,	// (0x00045c50) list_single_graphic_heading_pane_fp_g2

0xcac9,	// (0x000439f7) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xcac9,	// (0x000439f7) list_single_graphic_heading_pane_fp_g3

0xed2e,	// (0x00045c5c) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xed2e,	// (0x00045c5c) list_single_graphic_heading_pane_fp_g4

0xed42,	// (0x00045c70) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xed42,	// (0x00045c70) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb51,	// (0x00046a7f) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb51,	// (0x00046a7f) list_single_graphic_heading_pane_fp_g

0x0f6c,	// (0x00037e9a) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x0f6c,	// (0x00037e9a) list_single_graphic_heading_pane_fp_t1

0x0f82,	// (0x00037eb0) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x0f82,	// (0x00037eb0) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb5c,	// (0x00046a8a) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb5c,	// (0x00046a8a) list_single_graphic_heading_pane_fp_t

0x0f94,	// (0x00037ec2) list_single_cale_day_pane_fp_g1_ParamLimits

0x0f94,	// (0x00037ec2) list_single_cale_day_pane_fp_g1

0xed4e,	// (0x00045c7c) list_single_cale_day_pane_fp_g2_ParamLimits

0xed4e,	// (0x00045c7c) list_single_cale_day_pane_fp_g2

0x2e6d,	// (0x00039d9b) list_single_cale_day_pane_fp_g3_ParamLimits

0x2e6d,	// (0x00039d9b) list_single_cale_day_pane_fp_g3

0x2e95,	// (0x00039dc3) list_single_cale_day_pane_fp_g4_ParamLimits

0x2e95,	// (0x00039dc3) list_single_cale_day_pane_fp_g4

0x2eb9,	// (0x00039de7) list_single_cale_day_pane_fp_g5_ParamLimits

0x2eb9,	// (0x00039de7) list_single_cale_day_pane_fp_g5

0x0004,

0xfb61,	// (0x00046a8f) list_single_cale_day_pane_fp_g_ParamLimits

0xfb61,	// (0x00046a8f) list_single_cale_day_pane_fp_g

0x0fcc,	// (0x00037efa) list_single_cale_day_pane_fp_t1_ParamLimits

0x0fcc,	// (0x00037efa) list_single_cale_day_pane_fp_t1

0x0ff2,	// (0x00037f20) list_single_cale_day_pane_fp_t2_ParamLimits

0x0ff2,	// (0x00037f20) list_single_cale_day_pane_fp_t2

0x100b,	// (0x00037f39) list_single_cale_day_pane_fp_t3_ParamLimits

0x100b,	// (0x00037f39) list_single_cale_day_pane_fp_t3

0x0002,

0xfb6c,	// (0x00046a9a) list_single_cale_day_pane_fp_t_ParamLimits

0xfb6c,	// (0x00046a9a) list_single_cale_day_pane_fp_t

0xed22,	// (0x00045c50) list_empty_pane_fp_g1_ParamLimits

0xed22,	// (0x00045c50) list_empty_pane_fp_g1

0x1024,	// (0x00037f52) list_empty_pane_fp_t1

0x1032,	// (0x00037f60) list_empty_pane_fp_t2

0x0001,

0xfb73,	// (0x00046aa1) list_empty_pane_fp_t

0xed22,	// (0x00045c50) list_single_heading_pane_fp_g1_ParamLimits

0xed22,	// (0x00045c50) list_single_heading_pane_fp_g1

0xcac9,	// (0x000439f7) list_single_heading_pane_fp_g2_ParamLimits

0xcac9,	// (0x000439f7) list_single_heading_pane_fp_g2

0xed2e,	// (0x00045c5c) list_single_heading_pane_fp_g3_ParamLimits

0xed2e,	// (0x00045c5c) list_single_heading_pane_fp_g3

0x0002,

0xfb78,	// (0x00046aa6) list_single_heading_pane_fp_g_ParamLimits

0xfb78,	// (0x00046aa6) list_single_heading_pane_fp_g

0x1040,	// (0x00037f6e) list_single_heading_pane_fp_t1_ParamLimits

0x1040,	// (0x00037f6e) list_single_heading_pane_fp_t1

0x1052,	// (0x00037f80) list_single_heading_pane_fp_t2_ParamLimits

0x1052,	// (0x00037f80) list_single_heading_pane_fp_t2

0x0001,

0xfb7f,	// (0x00046aad) list_single_heading_pane_fp_t_ParamLimits

0xfb7f,	// (0x00046aad) list_single_heading_pane_fp_t

0xbc7a,	// (0x00042ba8) aid_size_cell_fast

0xb252,	// (0x00042180) soft_indicator_pane_cp1_t1

0xbcb7,	// (0x00042be5) cell_app_pane_cp2_ParamLimits

0xbcb7,	// (0x00042be5) cell_app_pane_cp2

0x2c31,	// (0x00039b5f) fep_hwr_candidate_drop_down_list_pane

0x8baf,	// (0x0003fadd) fep_hwr_candidate_pane_g3_ParamLimits

0x8baf,	// (0x0003fadd) fep_hwr_candidate_pane_g3

0x8bbc,	// (0x0003faea) fep_hwr_candidate_pane_g4_ParamLimits

0x8bbc,	// (0x0003faea) fep_hwr_candidate_pane_g4

0x0002,

0xfb1b,	// (0x00046a49) fep_hwr_candidate_pane_g_ParamLimits

0xfb1b,	// (0x00046a49) fep_hwr_candidate_pane_g

0xe975,	// (0x000458a3) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xe975,	// (0x000458a3) fep_vkb_candidate_drop_down_list_pane

0xebfa,	// (0x00045b28) fep_vkb_candidate_pane_g3

0xec02,	// (0x00045b30) fep_vkb_candidate_pane_g4

0x0002,

0x009d,	// (0x00036fcb) fep_vkb_candidate_pane_g

0xe9da,	// (0x00045908) cell_hwr_candidate_pane_g1_ParamLimits

0xec19,	// (0x00045b47) cell_hwr_candidate_pane_g3_ParamLimits

0xec19,	// (0x00045b47) cell_hwr_candidate_pane_g3

0xec94,	// (0x00045bc2) cell_hwr_candidate_pane_g4_ParamLimits

0xec94,	// (0x00045bc2) cell_hwr_candidate_pane_g4

0x0002,

0xfb41,	// (0x00046a6f) cell_hwr_candidate_pane_g_ParamLimits

0xfb41,	// (0x00046a6f) cell_hwr_candidate_pane_g

0xec3a,	// (0x00045b68) cell_vkb_candidate_pane_g3_ParamLimits

0xec3a,	// (0x00045b68) cell_vkb_candidate_pane_g3

0xec55,	// (0x00045b83) cell_vkb_candidate_pane_g4_ParamLimits

0xec55,	// (0x00045b83) cell_vkb_candidate_pane_g4

0xed5a,	// (0x00045c88) cell_app_pane_cp2_g1_ParamLimits

0xed5a,	// (0x00045c88) cell_app_pane_cp2_g1

0xed78,	// (0x00045ca6) cell_app_pane_cp2_g2_ParamLimits

0xed78,	// (0x00045ca6) cell_app_pane_cp2_g2

0x0001,

0xfb84,	// (0x00046ab2) cell_app_pane_cp2_g_ParamLimits

0xfb84,	// (0x00046ab2) cell_app_pane_cp2_g

0xed84,	// (0x00045cb2) cell_app_pane_cp2_t1_ParamLimits

0xed84,	// (0x00045cb2) cell_app_pane_cp2_t1

0xbb16,	// (0x00042a44) grid_highlight_pane_cp1_ParamLimits

0xbb16,	// (0x00042a44) grid_highlight_pane_cp1

0x2edd,	// (0x00039e0b) cell_hwr_candidate_pane_cp1_ParamLimits

0x2edd,	// (0x00039e0b) cell_hwr_candidate_pane_cp1

0xe9da,	// (0x00045908) fep_hwr_candidate_drop_down_list_pane_g1

0xed96,	// (0x00045cc4) fep_hwr_candidate_drop_down_list_pane_g2

0xeda3,	// (0x00045cd1) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb89,	// (0x00046ab7) fep_hwr_candidate_drop_down_list_pane_g

0x2efc,	// (0x00039e2a) fep_hwr_candidate_drop_down_list_scroll_pane

0x2f05,	// (0x00039e33) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x2f05,	// (0x00039e33) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x2f12,	// (0x00039e40) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x2f12,	// (0x00039e40) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x2f1f,	// (0x00039e4d) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x2f1f,	// (0x00039e4d) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xec3a,	// (0x00045b68) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xec3a,	// (0x00045b68) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xec55,	// (0x00045b83) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xec55,	// (0x00045b83) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x2f2c,	// (0x00039e5a) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x2f2c,	// (0x00039e5a) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x2f47,	// (0x00039e75) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x2f47,	// (0x00039e75) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x2f62,	// (0x00039e90) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x2f62,	// (0x00039e90) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb90,	// (0x00046abe) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb90,	// (0x00046abe) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xedb0,	// (0x00045cde) cell_vkb_candidate_pane_cp1_ParamLimits

0xedb0,	// (0x00045cde) cell_vkb_candidate_pane_cp1

0xe9da,	// (0x00045908) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xe9da,	// (0x00045908) fep_vkb_candidate_drop_down_list_pane_g1

0xed96,	// (0x00045cc4) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xed96,	// (0x00045cc4) fep_vkb_candidate_drop_down_list_pane_g2

0xeda3,	// (0x00045cd1) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xeda3,	// (0x00045cd1) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfb89,	// (0x00046ab7) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfb89,	// (0x00046ab7) fep_vkb_candidate_drop_down_list_pane_g

0xedd0,	// (0x00045cfe) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xedd0,	// (0x00045cfe) fep_vkb_candidate_drop_down_list_scroll_pane

0xeddd,	// (0x00045d0b) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xeddd,	// (0x00045d0b) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xedea,	// (0x00045d18) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xedea,	// (0x00045d18) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xedf6,	// (0x00045d24) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xedf6,	// (0x00045d24) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xec19,	// (0x00045b47) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xec19,	// (0x00045b47) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xec94,	// (0x00045bc2) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xec94,	// (0x00045bc2) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xee02,	// (0x00045d30) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xee02,	// (0x00045d30) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xee23,	// (0x00045d51) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xee23,	// (0x00045d51) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xee44,	// (0x00045d72) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xee44,	// (0x00045d72) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfba1,	// (0x00046acf) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfba1,	// (0x00046acf) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x84f0,	// (0x0003f41e) title_pane_g1_ParamLimits

0x8501,	// (0x0003f42f) title_pane_g2_ParamLimits

0xf592,	// (0x000464c0) title_pane_g_ParamLimits

0xc03e,	// (0x00042f6c) aid_call2_pane

0xc046,	// (0x00042f74) aid_call_pane

0xc04e,	// (0x00042f7c) popup_clock_analogue_window_g1

0xc04e,	// (0x00042f7c) popup_clock_analogue_window_g2

0x1cb7,	// (0x00038be5) popup_clock_analogue_window_g3

0x1cc0,	// (0x00038bee) popup_clock_analogue_window_g4

0xac1a,	// (0x00041b48) popup_clock_analogue_window_g5

0x0004,

0xf737,	// (0x00046665) popup_clock_analogue_window_g

0x1cc8,	// (0x00038bf6) popup_clock_analogue_window_t1

0x1d03,	// (0x00038c31) clock_digital_number_pane_ParamLimits

0x1d03,	// (0x00038c31) clock_digital_number_pane

0x1d0f,	// (0x00038c3d) clock_digital_number_pane_cp02_ParamLimits

0x1d0f,	// (0x00038c3d) clock_digital_number_pane_cp02

0x1d1b,	// (0x00038c49) clock_digital_number_pane_cp03_ParamLimits

0x1d1b,	// (0x00038c49) clock_digital_number_pane_cp03

0x1d27,	// (0x00038c55) clock_digital_number_pane_cp04_ParamLimits

0x1d27,	// (0x00038c55) clock_digital_number_pane_cp04

0x1d33,	// (0x00038c61) clock_digital_separator_pane_ParamLimits

0x1d33,	// (0x00038c61) clock_digital_separator_pane

0x1d3f,	// (0x00038c6d) popup_clock_digital_window_t1_ParamLimits

0x1d3f,	// (0x00038c6d) popup_clock_digital_window_t1

0xac1a,	// (0x00041b48) clock_digital_number_pane_g1

0xac1a,	// (0x00041b48) clock_digital_number_pane_g2

0x0001,

0xf742,	// (0x00046670) clock_digital_number_pane_g

0xac1a,	// (0x00041b48) clock_digital_separator_pane_g1

0xac1a,	// (0x00041b48) clock_digital_separator_pane_g2

0x0001,

0xf742,	// (0x00046670) clock_digital_separator_pane_g

0x9286,	// (0x000401b4) aid_fill_nsta_ParamLimits

0x93b5,	// (0x000402e3) indicator_nsta_pane_ParamLimits

0xc972,	// (0x000438a0) popup_clock_analogue_window

0xc972,	// (0x000438a0) popup_clock_digital_window

0xcc12,	// (0x00043b40) grid_indicator_nsta_pane_ParamLimits

0xe506,	// (0x00045434) clock_nsta_pane_t2

0x0001,

0xfac2,	// (0x000469f0) clock_nsta_pane_t

0x1c7b,	// (0x00038ba9) aid_size_max_handle

0x7cc5,	// (0x0003ebf3) aid_size_min_handle

0xc53b,	// (0x00043469) editor_scroll_pane

0xee5f,	// (0x00045d8d) ex_editor_pane

0xbc35,	// (0x00042b63) scroll_pane_cp13

0xbab5,	// (0x000429e3) scroll_pane_cp14

0xc078,	// (0x00042fa6) scroll_pane_cp36

0x89f9,	// (0x0003f927) list_single_graphic_hl_pane_cp2_ParamLimits

0x89f9,	// (0x0003f927) list_single_graphic_hl_pane_cp2

0x7fcd,	// (0x0003eefb) list_single_graphic_hl_pane_ParamLimits

0x7fcd,	// (0x0003eefb) list_single_graphic_hl_pane

0x1068,	// (0x00037f96) aid_size_min_hl_cp1

0xee67,	// (0x00045d95) list_highlight_pane_cp34_ParamLimits

0xee67,	// (0x00045d95) list_highlight_pane_cp34

0xee78,	// (0x00045da6) list_single_graphic_hl_pane_g1_ParamLimits

0xee78,	// (0x00045da6) list_single_graphic_hl_pane_g1

0x1071,	// (0x00037f9f) list_single_graphic_hl_pane_g2_ParamLimits

0x1071,	// (0x00037f9f) list_single_graphic_hl_pane_g2

0x1071,	// (0x00037f9f) list_single_graphic_hl_pane_g3_ParamLimits

0x1071,	// (0x00037f9f) list_single_graphic_hl_pane_g3

0xc4ac,	// (0x000433da) list_single_graphic_hl_pane_g4_ParamLimits

0xc4ac,	// (0x000433da) list_single_graphic_hl_pane_g4

0x2f7d,	// (0x00039eab) list_single_graphic_hl_pane_g5_ParamLimits

0x2f7d,	// (0x00039eab) list_single_graphic_hl_pane_g5

0x0004,

0xfbb2,	// (0x00046ae0) list_single_graphic_hl_pane_g_ParamLimits

0xfbb2,	// (0x00046ae0) list_single_graphic_hl_pane_g

0x107d,	// (0x00037fab) list_single_graphic_hl_pane_t1_ParamLimits

0x107d,	// (0x00037fab) list_single_graphic_hl_pane_t1

0xee85,	// (0x00045db3) aid_size_min_hl_cp2

0xee8e,	// (0x00045dbc) list_highlight_pane_cp34_cp2_ParamLimits

0xee8e,	// (0x00045dbc) list_highlight_pane_cp34_cp2

0xee78,	// (0x00045da6) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xee78,	// (0x00045da6) list_single_graphic_hl_pane_g1_cp2

0xee9b,	// (0x00045dc9) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xee9b,	// (0x00045dc9) list_single_graphic_hl_pane_g2_cp2

0xeea7,	// (0x00045dd5) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xeea7,	// (0x00045dd5) list_single_graphic_hl_pane_g3_cp2

0xdc36,	// (0x00044b64) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xdc36,	// (0x00044b64) list_single_graphic_hl_pane_g4_cp2

0xeeb5,	// (0x00045de3) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xeeb5,	// (0x00045de3) list_single_graphic_hl_pane_g5_cp2

0x7d03,	// (0x0003ec31) control_pane_g4_ParamLimits

0x7d03,	// (0x0003ec31) control_pane_g4

0xbc6e,	// (0x00042b9c) bg_popup_sub_pane_cp10_ParamLimits

0xe83d,	// (0x0004576b) list_choice_list_pane_ParamLimits

0xe84c,	// (0x0004577a) scroll_pane_cp23

0xb26f,	// (0x0004219d) bg_popup_preview_window_pane_cp02_ParamLimits

0xecc7,	// (0x00045bf5) list_preview_fixed_pane_ParamLimits

0xecdd,	// (0x00045c0b) list_preview_fixed_pane_cp_ParamLimits

0xecdd,	// (0x00045c0b) list_preview_fixed_pane_cp

0xece9,	// (0x00045c17) popup_preview_fixed_window_g1_ParamLimits

0xece9,	// (0x00045c17) popup_preview_fixed_window_g1

0xecf5,	// (0x00045c23) popup_preview_fixed_window_g2_ParamLimits

0xecf5,	// (0x00045c23) popup_preview_fixed_window_g2

0x0002,

0x00c3,	// (0x00036ff1) popup_preview_fixed_window_g_ParamLimits

0x00c3,	// (0x00036ff1) popup_preview_fixed_window_g

0x1b6e,	// (0x00038a9c) aid_navi_side_left_pane_ParamLimits

0x1b83,	// (0x00038ab1) aid_navi_side_right_pane_ParamLimits

0x1b9b,	// (0x00038ac9) navi_icon_pane_stacon_ParamLimits

0x1baf,	// (0x00038add) navi_navi_pane_stacon_ParamLimits

0x1b9b,	// (0x00038ac9) navi_text_pane_stacon_ParamLimits

0xac10,	// (0x00041b3e) main_text_info_pane

0xeedf,	// (0x00045e0d) listscroll_text_info_pane

0xeee7,	// (0x00045e15) list_text_info_pane_ParamLimits

0xeee7,	// (0x00045e15) list_text_info_pane

0xeef6,	// (0x00045e24) scroll_pane_cp24_ParamLimits

0xeef6,	// (0x00045e24) scroll_pane_cp24

0x9f64,	// (0x00040e92) list_text_info_pane_t1_ParamLimits

0x9f64,	// (0x00040e92) list_text_info_pane_t1

0x8c20,	// (0x0003fb4e) popup_fast_swap2_window_ParamLimits

0x8c20,	// (0x0003fb4e) popup_fast_swap2_window

0xef14,	// (0x00045e42) aid_size_cell_fast2

0xac10,	// (0x00041b3e) bg_popup_window_pane_cp17

0xce4e,	// (0x00043d7c) heading_pane_cp2

0xb83a,	// (0x00042768) listscroll_fast2_pane

0xef1e,	// (0x00045e4c) grid_fast2_pane

0xef28,	// (0x00045e56) listscroll_fast2_pane_g1

0xef30,	// (0x00045e5e) listscroll_fast2_pane_g2

0x0001,

0xfbbd,	// (0x00046aeb) listscroll_fast2_pane_g

0xbc35,	// (0x00042b63) scroll_pane_cp26

0xef3a,	// (0x00045e68) cell_fast2_pane_ParamLimits

0xef3a,	// (0x00045e68) cell_fast2_pane

0xef4f,	// (0x00045e7d) cell_fast2_pane_g1

0xef58,	// (0x00045e86) cell_fast2_pane_g2

0xef61,	// (0x00045e8f) cell_fast2_pane_g3

0x0002,

0xfbc2,	// (0x00046af0) cell_fast2_pane_g

0xb87c,	// (0x000427aa) grid_highlight_pane_cp9

0xb891,	// (0x000427bf) main_eswt_pane_ParamLimits

0xb891,	// (0x000427bf) main_eswt_pane

0xef0b,	// (0x00045e39) list_single_text_info_pane

0xef69,	// (0x00045e97) eswt_ctrl_button_pane

0xef69,	// (0x00045e97) eswt_ctrl_canvas_pane

0xef71,	// (0x00045e9f) eswt_ctrl_combo_pane

0xef69,	// (0x00045e97) eswt_ctrl_default_pane

0xef69,	// (0x00045e97) eswt_ctrl_label_pane

0xef79,	// (0x00045ea7) eswt_ctrl_wait_pane

0xef81,	// (0x00045eaf) eswt_shell_pane

0xac10,	// (0x00041b3e) listscroll_eswt_app_pane

0xefa1,	// (0x00045ecf) popup_eswt_tasktip_window_ParamLimits

0xefa1,	// (0x00045ecf) popup_eswt_tasktip_window

0xcb7d,	// (0x00043aab) bg_popup_window_pane_cp18

0xefb2,	// (0x00045ee0) eswt_control_pane_g1_ParamLimits

0xefb2,	// (0x00045ee0) eswt_control_pane_g1

0xefbf,	// (0x00045eed) eswt_control_pane_g2_ParamLimits

0xefbf,	// (0x00045eed) eswt_control_pane_g2

0xefcc,	// (0x00045efa) eswt_control_pane_g3_ParamLimits

0xefcc,	// (0x00045efa) eswt_control_pane_g3

0xefd9,	// (0x00045f07) eswt_control_pane_g4_ParamLimits

0xefd9,	// (0x00045f07) eswt_control_pane_g4

0x0003,

0xfbc9,	// (0x00046af7) eswt_control_pane_g_ParamLimits

0xfbc9,	// (0x00046af7) eswt_control_pane_g

0xbb16,	// (0x00042a44) bg_button_pane_ParamLimits

0xbb16,	// (0x00042a44) bg_button_pane

0xb891,	// (0x000427bf) common_borders_pane_copy2_ParamLimits

0xb891,	// (0x000427bf) common_borders_pane_copy2

0xefe6,	// (0x00045f14) control_button_pane_g1_ParamLimits

0xefe6,	// (0x00045f14) control_button_pane_g1

0xeff2,	// (0x00045f20) control_button_pane_g2_ParamLimits

0xeff2,	// (0x00045f20) control_button_pane_g2

0xeffe,	// (0x00045f2c) control_button_pane_g3_ParamLimits

0xeffe,	// (0x00045f2c) control_button_pane_g3

0x0002,

0xfbd2,	// (0x00046b00) control_button_pane_g_ParamLimits

0xfbd2,	// (0x00046b00) control_button_pane_g

0xf012,	// (0x00045f40) control_button_pane_t1

0xf020,	// (0x00045f4e) control_button_pane_t2

0x0001,

0xfbd9,	// (0x00046b07) control_button_pane_t

0xca81,	// (0x000439af) bg_button_pane_g1

0xca89,	// (0x000439b7) bg_button_pane_g2

0xca91,	// (0x000439bf) bg_button_pane_g3

0xca99,	// (0x000439c7) bg_button_pane_g4

0xcaa1,	// (0x000439cf) bg_button_pane_g5

0xcaa9,	// (0x000439d7) bg_button_pane_g6

0xcab1,	// (0x000439df) bg_button_pane_g7

0xcab9,	// (0x000439e7) bg_button_pane_g8

0xcac1,	// (0x000439ef) bg_button_pane_g9

0x0008,

0xf88e,	// (0x000467bc) bg_button_pane_g

0xe7f8,	// (0x00045726) common_borders_pane_ParamLimits

0xe7f8,	// (0x00045726) common_borders_pane

0xefb2,	// (0x00045ee0) eswt_control_pane_g1_copy1_ParamLimits

0xefb2,	// (0x00045ee0) eswt_control_pane_g1_copy1

0xefbf,	// (0x00045eed) eswt_control_pane_g2_copy1_ParamLimits

0xefbf,	// (0x00045eed) eswt_control_pane_g2_copy1

0xefcc,	// (0x00045efa) eswt_control_pane_g3_copy1_ParamLimits

0xefcc,	// (0x00045efa) eswt_control_pane_g3_copy1

0xefd9,	// (0x00045f07) eswt_control_pane_g4_copy1_ParamLimits

0xefd9,	// (0x00045f07) eswt_control_pane_g4_copy1

0xe833,	// (0x00045761) bg_eswt_ctrl_canvas_pane_g1

0xe7f8,	// (0x00045726) common_borders_pane_cp2_ParamLimits

0xe7f8,	// (0x00045726) common_borders_pane_cp2

0xe7f8,	// (0x00045726) common_borders_pane_cp3_ParamLimits

0xe7f8,	// (0x00045726) common_borders_pane_cp3

0xf02e,	// (0x00045f5c) separator_horizontal_pane

0xf036,	// (0x00045f64) separator_vertical_pane

0xefb2,	// (0x00045ee0) eswt_control_pane_g1_copy2_ParamLimits

0xefb2,	// (0x00045ee0) eswt_control_pane_g1_copy2

0xefbf,	// (0x00045eed) eswt_control_pane_g2_copy2_ParamLimits

0xefbf,	// (0x00045eed) eswt_control_pane_g2_copy2

0xefcc,	// (0x00045efa) eswt_control_pane_g3_copy2_ParamLimits

0xefcc,	// (0x00045efa) eswt_control_pane_g3_copy2

0xefd9,	// (0x00045f07) eswt_control_pane_g4_copy2_ParamLimits

0xefd9,	// (0x00045f07) eswt_control_pane_g4_copy2

0xac10,	// (0x00041b3e) common_borders_pane_cp4

0xf03f,	// (0x00045f6d) separator_horizontal_pane_g1

0xf048,	// (0x00045f76) separator_horizontal_pane_g2

0xf051,	// (0x00045f7f) separator_horizontal_pane_g3

0x0002,

0xfbde,	// (0x00046b0c) separator_horizontal_pane_g

0xefb2,	// (0x00045ee0) eswt_control_pane_g1_copy3_ParamLimits

0xefb2,	// (0x00045ee0) eswt_control_pane_g1_copy3

0xefbf,	// (0x00045eed) eswt_control_pane_g2_copy3_ParamLimits

0xefbf,	// (0x00045eed) eswt_control_pane_g2_copy3

0xefcc,	// (0x00045efa) eswt_control_pane_g3_copy3_ParamLimits

0xefcc,	// (0x00045efa) eswt_control_pane_g3_copy3

0xefd9,	// (0x00045f07) eswt_control_pane_g4_copy3_ParamLimits

0xefd9,	// (0x00045f07) eswt_control_pane_g4_copy3

0xac10,	// (0x00041b3e) common_borders_pane_cp5

0xf05a,	// (0x00045f88) separator_vertical_pane_g1

0xf063,	// (0x00045f91) separator_vertical_pane_g2

0xf06c,	// (0x00045f9a) separator_vertical_pane_g3

0x0002,

0xfbe5,	// (0x00046b13) separator_vertical_pane_g

0xefb2,	// (0x00045ee0) eswt_control_pane_g1_copy4_ParamLimits

0xefb2,	// (0x00045ee0) eswt_control_pane_g1_copy4

0xefbf,	// (0x00045eed) eswt_control_pane_g2_copy4_ParamLimits

0xefbf,	// (0x00045eed) eswt_control_pane_g2_copy4

0xefcc,	// (0x00045efa) eswt_control_pane_g3_copy4_ParamLimits

0xefcc,	// (0x00045efa) eswt_control_pane_g3_copy4

0xefd9,	// (0x00045f07) eswt_control_pane_g4_copy4_ParamLimits

0xefd9,	// (0x00045f07) eswt_control_pane_g4_copy4

0x9f7f,	// (0x00040ead) eswt_ctrl_combo_button_pane

0x9f87,	// (0x00040eb5) eswt_ctrl_input_pane

0x9f8f,	// (0x00040ebd) popup_choice_list_window_cp70

0x9f97,	// (0x00040ec5) eswt_ctrl_input_pane_t1

0xac10,	// (0x00041b3e) input_focus_pane_cp70

0xe7f8,	// (0x00045726) bg_button_pane_cp70_ParamLimits

0xe7f8,	// (0x00045726) bg_button_pane_cp70

0x9fa5,	// (0x00040ed3) eswt_ctrl_combo_button_pane_g1

0xf075,	// (0x00045fa3) wait_bar_pane_cp70

0xcb7d,	// (0x00043aab) bg_popup_window_pane_cp70_ParamLimits

0xcb7d,	// (0x00043aab) bg_popup_window_pane_cp70

0xf07d,	// (0x00045fab) popup_eswt_tasktip_window_t1

0xf093,	// (0x00045fc1) wait_bar_pane_cp71_ParamLimits

0xf093,	// (0x00045fc1) wait_bar_pane_cp71

0xf09f,	// (0x00045fcd) grid_eswt_app_pane

0xbe89,	// (0x00042db7) scroll_pane_cp70

0x9fad,	// (0x00040edb) cell_eswt_app_pane_ParamLimits

0x9fad,	// (0x00040edb) cell_eswt_app_pane

0x9fd7,	// (0x00040f05) cell_eswt_app_pane_g1_ParamLimits

0x9fd7,	// (0x00040f05) cell_eswt_app_pane_g1

0xa006,	// (0x00040f34) cell_eswt_app_pane_g2_ParamLimits

0xa006,	// (0x00040f34) cell_eswt_app_pane_g2

0x0001,

0xfbec,	// (0x00046b1a) cell_eswt_app_pane_g_ParamLimits

0xfbec,	// (0x00046b1a) cell_eswt_app_pane_g

0xa02f,	// (0x00040f5d) cell_eswt_app_pane_t1_ParamLimits

0xa02f,	// (0x00040f5d) cell_eswt_app_pane_t1

0xf0a8,	// (0x00045fd6) grid_highlight_pane_cp70_ParamLimits

0xf0a8,	// (0x00045fd6) grid_highlight_pane_cp70

0xc410,	// (0x0004333e) set_content_pane_g1

0xc71a,	// (0x00043648) status_small_volume_pane

0x2f91,	// (0x00039ebf) status_small_volume_pane_g1

0x2f99,	// (0x00039ec7) volume_small2_pane

0x2fa2,	// (0x00039ed0) volume_small2_pane_g1

0x2fab,	// (0x00039ed9) volume_small2_pane_g2

0x2fb4,	// (0x00039ee2) volume_small2_pane_g3

0x2fbd,	// (0x00039eeb) volume_small2_pane_g4

0x2fc6,	// (0x00039ef4) volume_small2_pane_g5

0x2fcf,	// (0x00039efd) volume_small2_pane_g6

0x2fd8,	// (0x00039f06) volume_small2_pane_g7

0x2fe1,	// (0x00039f0f) volume_small2_pane_g8

0x2fea,	// (0x00039f18) volume_small2_pane_g9

0x2ff3,	// (0x00039f21) volume_small2_pane_g10

0x0009,

0xfbf1,	// (0x00046b1f) volume_small2_pane_g

0xeae7,	// (0x00045a15) fep_vkb_top_text_pane_g1_ParamLimits

0x9f0c,	// (0x00040e3a) fep_vkb_top_text_pane_t1_ParamLimits

0xed01,	// (0x00045c2f) popup_preview_fixed_window_g3_ParamLimits

0xed01,	// (0x00045c2f) popup_preview_fixed_window_g3

0x9219,	// (0x00040147) popup_toolbar_trans_pane

0x98ed,	// (0x0004081b) aid_height_set_list_ParamLimits

0xd6e1,	// (0x0004460f) aid_size_parent_ParamLimits

0xbc6e,	// (0x00042b9c) list_highlight_pane_cp2_ParamLimits

0xc410,	// (0x0004333e) set_content_pane_g1_ParamLimits

0x9a76,	// (0x000409a4) list_single_image_pane_ParamLimits

0x9a76,	// (0x000409a4) list_single_image_pane

0xf0b4,	// (0x00045fe2) aid_size_cell_image_ParamLimits

0xf0b4,	// (0x00045fe2) aid_size_cell_image

0xa061,	// (0x00040f8f) grid_single_image_pane_ParamLimits

0xa061,	// (0x00040f8f) grid_single_image_pane

0xcac9,	// (0x000439f7) list_single_image_pane_g1_ParamLimits

0xcac9,	// (0x000439f7) list_single_image_pane_g1

0xed2e,	// (0x00045c5c) list_single_image_pane_g2_ParamLimits

0xed2e,	// (0x00045c5c) list_single_image_pane_g2

0x0001,

0xfc06,	// (0x00046b34) list_single_image_pane_g_ParamLimits

0xfc06,	// (0x00046b34) list_single_image_pane_g

0xcc20,	// (0x00043b4e) list_single_image_pane_t1_ParamLimits

0xcc20,	// (0x00043b4e) list_single_image_pane_t1

0xa06f,	// (0x00040f9d) cell_image_list_pane_ParamLimits

0xa06f,	// (0x00040f9d) cell_image_list_pane

0xf0c1,	// (0x00045fef) cell_image_list_pane_g1

0xf0ca,	// (0x00045ff8) cell_image_list_pane_g2

0x0001,

0x0194,	// (0x000370c2) cell_image_list_pane_g

0xf0d3,	// (0x00046001) aid_size_cell_tb_trans_pane

0xbb16,	// (0x00042a44) bg_tb_trans_pane

0xf0e5,	// (0x00046013) grid_tb_trans_pane

0xca81,	// (0x000439af) bg_tb_trans_pane_g1

0xca89,	// (0x000439b7) bg_tb_trans_pane_g2

0xca91,	// (0x000439bf) bg_tb_trans_pane_g3

0xca99,	// (0x000439c7) bg_tb_trans_pane_g4

0xcaa1,	// (0x000439cf) bg_tb_trans_pane_g5

0xcab9,	// (0x000439e7) bg_tb_trans_pane_g6

0xcac1,	// (0x000439ef) bg_tb_trans_pane_g7

0xcaa9,	// (0x000439d7) bg_tb_trans_pane_g8

0xcab1,	// (0x000439df) bg_tb_trans_pane_g9

0x0008,

0xfc0b,	// (0x00046b39) bg_tb_trans_pane_g

0xf0f9,	// (0x00046027) cell_toolbar_trans_pane_ParamLimits

0xf0f9,	// (0x00046027) cell_toolbar_trans_pane

0xe833,	// (0x00045761) cell_toolbar_trans_pane_g1

0x9ce8,	// (0x00040c16) list_form2_midp_pane_t1

0x9cf6,	// (0x00040c24) list_form2_midp_pane_t2

0x0001,

0xfafb,	// (0x00046a29) list_form2_midp_pane_t

0xe585,	// (0x000454b3) scroll_pane_cp51_ParamLimits

0xe6fc,	// (0x0004562a) form2_midp_wait_pane_g1

0xe705,	// (0x00045633) form2_midp_wait_pane_g2

0xe70e,	// (0x0004563c) form2_midp_wait_pane_g3

0x0002,

0x004b,	// (0x00036f79) form2_midp_wait_pane_g

0xac80,	// (0x00041bae) list_highlight_pane_cp21_ParamLimits

0xe736,	// (0x00045664) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xe745,	// (0x00045673) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xdc7d,	// (0x00044bab) list_single_2graphic_im_pane_ParamLimits

0xdc7d,	// (0x00044bab) list_single_2graphic_im_pane

0xa085,	// (0x00040fb3) list_single_2graphic_im_pane_g1_ParamLimits

0xa085,	// (0x00040fb3) list_single_2graphic_im_pane_g1

0xa096,	// (0x00040fc4) list_single_2graphic_im_pane_g2_ParamLimits

0xa096,	// (0x00040fc4) list_single_2graphic_im_pane_g2

0xa0a2,	// (0x00040fd0) list_single_2graphic_im_pane_g3_ParamLimits

0xa0a2,	// (0x00040fd0) list_single_2graphic_im_pane_g3

0x0003,

0xfc1e,	// (0x00046b4c) list_single_2graphic_im_pane_g_ParamLimits

0xfc1e,	// (0x00046b4c) list_single_2graphic_im_pane_g

0xa0b6,	// (0x00040fe4) list_single_2graphic_im_pane_t1_ParamLimits

0xa0b6,	// (0x00040fe4) list_single_2graphic_im_pane_t1

0xed0d,	// (0x00045c3b) list_single_graphic_2heading_pane_fp_ParamLimits

0xed0d,	// (0x00045c3b) list_single_graphic_2heading_pane_fp

0x0f4a,	// (0x00037e78) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x0f4a,	// (0x00037e78) list_single_graphic_2heading_pane_fp_g1

0xed22,	// (0x00045c50) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xed22,	// (0x00045c50) list_single_graphic_2heading_pane_fp_g2

0xcac9,	// (0x000439f7) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xcac9,	// (0x000439f7) list_single_graphic_2heading_pane_fp_g3

0xed2e,	// (0x00045c5c) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xed2e,	// (0x00045c5c) list_single_graphic_2heading_pane_fp_g4

0xed42,	// (0x00045c70) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xed42,	// (0x00045c70) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb51,	// (0x00046a7f) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb51,	// (0x00046a7f) list_single_graphic_2heading_pane_fp_g

0x1093,	// (0x00037fc1) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x1093,	// (0x00037fc1) list_single_graphic_2heading_pane_fp_t1

0x0f82,	// (0x00037eb0) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x0f82,	// (0x00037eb0) list_single_graphic_2heading_pane_fp_t2

0x10a9,	// (0x00037fd7) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x10a9,	// (0x00037fd7) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc27,	// (0x00046b55) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc27,	// (0x00046b55) list_single_graphic_2heading_pane_fp_t

0xe8d3,	// (0x00045801) fep_hwr_write_pane_g5_ParamLimits

0xe8d3,	// (0x00045801) fep_hwr_write_pane_g5

0xe8df,	// (0x0004580d) fep_hwr_write_pane_g6_ParamLimits

0xe8df,	// (0x0004580d) fep_hwr_write_pane_g6

0xef81,	// (0x00045eaf) eswt_shell_pane_ParamLimits

0xcb7d,	// (0x00043aab) bg_popup_window_pane_cp18_ParamLimits

0xdbab,	// (0x00044ad9) heading_pane_cp70

0xf07d,	// (0x00045fab) popup_eswt_tasktip_window_t1_ParamLimits

0x92da,	// (0x00040208) aid_touch_tab_arrow_left

0x92f0,	// (0x0004021e) aid_touch_tab_arrow_right

0x8519,	// (0x0003f447) title_pane_g3_ParamLimits

0x8519,	// (0x0003f447) title_pane_g3

0xbad5,	// (0x00042a03) set_value_pane_g1

0x9219,	// (0x00040147) popup_toolbar_trans_pane_ParamLimits

0xf0d3,	// (0x00046001) aid_size_cell_tb_trans_pane_ParamLimits

0xbb16,	// (0x00042a44) bg_tb_trans_pane_ParamLimits

0xf0e5,	// (0x00046013) grid_tb_trans_pane_ParamLimits

0xb26f,	// (0x0004219d) cont_note_pane_ParamLimits

0xb26f,	// (0x0004219d) cont_note_pane

0xb891,	// (0x000427bf) cont_snote2_single_text_pane_ParamLimits

0xb891,	// (0x000427bf) cont_snote2_single_text_pane

0xb891,	// (0x000427bf) cont_snote2_single_graphic_pane_ParamLimits

0xb891,	// (0x000427bf) cont_snote2_single_graphic_pane

0xd038,	// (0x00043f66) cont_note_wait_pane_ParamLimits

0xd038,	// (0x00043f66) cont_note_wait_pane

0xd038,	// (0x00043f66) cont_note_image_pane_ParamLimits

0xd038,	// (0x00043f66) cont_note_image_pane

0xf12b,	// (0x00046059) popup_note2_window_g1_ParamLimits

0xf12b,	// (0x00046059) popup_note2_window_g1

0xf15c,	// (0x0004608a) popup_note2_window_t1_ParamLimits

0xf15c,	// (0x0004608a) popup_note2_window_t1

0xf1a1,	// (0x000460cf) popup_note2_window_t2_ParamLimits

0xf1a1,	// (0x000460cf) popup_note2_window_t2

0xf1e6,	// (0x00046114) popup_note2_window_t3_ParamLimits

0xf1e6,	// (0x00046114) popup_note2_window_t3

0xf22b,	// (0x00046159) popup_note2_window_t4_ParamLimits

0xf22b,	// (0x00046159) popup_note2_window_t4

0xb6cc,	// (0x000425fa) popup_note2_window_t5_ParamLimits

0xb6cc,	// (0x000425fa) popup_note2_window_t5

0x0004,

0xfc33,	// (0x00046b61) popup_note2_window_t_ParamLimits

0xfc33,	// (0x00046b61) popup_note2_window_t

0xf25a,	// (0x00046188) popup_note2_image_window_g1_ParamLimits

0xf25a,	// (0x00046188) popup_note2_image_window_g1

0xf266,	// (0x00046194) popup_note2_image_window_g2_ParamLimits

0xf266,	// (0x00046194) popup_note2_image_window_g2

0x0001,

0xfc3e,	// (0x00046b6c) popup_note2_image_window_g_ParamLimits

0xfc3e,	// (0x00046b6c) popup_note2_image_window_g

0xf278,	// (0x000461a6) popup_note2_image_window_t1_ParamLimits

0xf278,	// (0x000461a6) popup_note2_image_window_t1

0xf290,	// (0x000461be) popup_note2_image_window_t2_ParamLimits

0xf290,	// (0x000461be) popup_note2_image_window_t2

0xf2a8,	// (0x000461d6) popup_note2_image_window_t3_ParamLimits

0xf2a8,	// (0x000461d6) popup_note2_image_window_t3

0x0002,

0xfc43,	// (0x00046b71) popup_note2_image_window_t_ParamLimits

0xfc43,	// (0x00046b71) popup_note2_image_window_t

0xd046,	// (0x00043f74) popup_note2_wait_window_g1_ParamLimits

0xd046,	// (0x00043f74) popup_note2_wait_window_g1

0xf2c4,	// (0x000461f2) popup_note2_wait_window_g2_ParamLimits

0xf2c4,	// (0x000461f2) popup_note2_wait_window_g2

0xd05e,	// (0x00043f8c) popup_note2_wait_window_g3_ParamLimits

0xd05e,	// (0x00043f8c) popup_note2_wait_window_g3

0x0002,

0xfc4a,	// (0x00046b78) popup_note2_wait_window_g_ParamLimits

0xfc4a,	// (0x00046b78) popup_note2_wait_window_g

0xf2d0,	// (0x000461fe) popup_note2_wait_window_t1_ParamLimits

0xf2d0,	// (0x000461fe) popup_note2_wait_window_t1

0xf2ee,	// (0x0004621c) popup_note2_wait_window_t2_ParamLimits

0xf2ee,	// (0x0004621c) popup_note2_wait_window_t2

0xf30c,	// (0x0004623a) popup_note2_wait_window_t3_ParamLimits

0xf30c,	// (0x0004623a) popup_note2_wait_window_t3

0xf31e,	// (0x0004624c) popup_note2_wait_window_t4_ParamLimits

0xf31e,	// (0x0004624c) popup_note2_wait_window_t4

0x0003,

0xfc51,	// (0x00046b7f) popup_note2_wait_window_t_ParamLimits

0xfc51,	// (0x00046b7f) popup_note2_wait_window_t

0xf330,	// (0x0004625e) wait_bar2_pane_ParamLimits

0xf330,	// (0x0004625e) wait_bar2_pane

0xf348,	// (0x00046276) popup_snote2_single_text_window_g1_ParamLimits

0xf348,	// (0x00046276) popup_snote2_single_text_window_g1

0xf370,	// (0x0004629e) popup_snote2_single_text_window_t1_ParamLimits

0xf370,	// (0x0004629e) popup_snote2_single_text_window_t1

0xf3bc,	// (0x000462ea) popup_snote2_single_text_window_t2_ParamLimits

0xf3bc,	// (0x000462ea) popup_snote2_single_text_window_t2

0xf408,	// (0x00046336) popup_snote2_single_text_window_t3_ParamLimits

0xf408,	// (0x00046336) popup_snote2_single_text_window_t3

0xf449,	// (0x00046377) popup_snote2_single_text_window_t4_ParamLimits

0xf449,	// (0x00046377) popup_snote2_single_text_window_t4

0xf47f,	// (0x000463ad) popup_snote2_single_text_window_t5_ParamLimits

0xf47f,	// (0x000463ad) popup_snote2_single_text_window_t5

0x0004,

0xfc5a,	// (0x00046b88) popup_snote2_single_text_window_t_ParamLimits

0xfc5a,	// (0x00046b88) popup_snote2_single_text_window_t

0xf4aa,	// (0x000463d8) popup_snote2_single_graphic_window_g1_ParamLimits

0xf4aa,	// (0x000463d8) popup_snote2_single_graphic_window_g1

0xf4d2,	// (0x00046400) popup_snote2_single_graphic_window_g2_ParamLimits

0xf4d2,	// (0x00046400) popup_snote2_single_graphic_window_g2

0x0001,

0xfc65,	// (0x00046b93) popup_snote2_single_graphic_window_g_ParamLimits

0xfc65,	// (0x00046b93) popup_snote2_single_graphic_window_g

0xf4fa,	// (0x00046428) popup_snote2_single_graphic_window_t1_ParamLimits

0xf4fa,	// (0x00046428) popup_snote2_single_graphic_window_t1

0xf546,	// (0x00046474) popup_snote2_single_graphic_window_t2_ParamLimits

0xf546,	// (0x00046474) popup_snote2_single_graphic_window_t2

0xf408,	// (0x00046336) popup_snote2_single_graphic_window_t3_ParamLimits

0xf408,	// (0x00046336) popup_snote2_single_graphic_window_t3

0xf449,	// (0x00046377) popup_snote2_single_graphic_window_t4_ParamLimits

0xf449,	// (0x00046377) popup_snote2_single_graphic_window_t4

0xf47f,	// (0x000463ad) popup_snote2_single_graphic_window_t5_ParamLimits

0xf47f,	// (0x000463ad) popup_snote2_single_graphic_window_t5

0x0004,

0xfc6a,	// (0x00046b98) popup_snote2_single_graphic_window_t_ParamLimits

0xfc6a,	// (0x00046b98) popup_snote2_single_graphic_window_t

0xe53b,	// (0x00045469) clock_nsta_pane_cp2_t1

0xe53b,	// (0x00045469) clock_nsta_pane_cp2_t2

0x0001,

0xfad1,	// (0x000469ff) clock_nsta_pane_cp2_t

0x0986,	// (0x000378b4) form_field_data_wide_pane_g1_ParamLimits

0xbb30,	// (0x00042a5e) form_field_data_wide_pane_g2_ParamLimits

0xbb30,	// (0x00042a5e) form_field_data_wide_pane_g2

0xbb3c,	// (0x00042a6a) form_field_data_wide_pane_g3_ParamLimits

0xbb3c,	// (0x00042a6a) form_field_data_wide_pane_g3

0x0002,

0xf6ba,	// (0x000465e8) form_field_data_wide_pane_g_ParamLimits

0xf6ba,	// (0x000465e8) form_field_data_wide_pane_g

0x9c02,	// (0x00040b30) grid_touch_3_pane_ParamLimits

0x9c02,	// (0x00040b30) grid_touch_3_pane

0xa0e7,	// (0x00041015) cell_touch_3_pane_ParamLimits

0xa0e7,	// (0x00041015) cell_touch_3_pane

0xe833,	// (0x00045761) cell_touch_3_pane_g1

0xe833,	// (0x00045761) cell_touch_3_pane_g2

0x0001,

0x0091,	// (0x00036fbf) cell_touch_3_pane_g

0xb6fe,	// (0x0004262c) cont_query_data_pane

0xb706,	// (0x00042634) cont_query_data_pane_cp1

0x489e,	// (0x0003b7cc) button_value_adjust_pane_cp7

0x48a6,	// (0x0003b7d4) query_popup_pane_cp3

0xc0aa,	// (0x00042fd8) bg_popup_sub_pane_cp22_ParamLimits

0x1d9a,	// (0x00038cc8) navi_navi_volume_pane_cp2

0x1db5,	// (0x00038ce3) popup_side_volume_key_window_g2

0x1dc4,	// (0x00038cf2) popup_side_volume_key_window_g3

0x0002,

0xf74c,	// (0x0004667a) popup_side_volume_key_window_g

0x1de1,	// (0x00038d0f) popup_side_volume_key_window_t2

0x0001,

0xf753,	// (0x00046681) popup_side_volume_key_window_t

0xc2da,	// (0x00043208) popup_side_volume_key_window_ParamLimits

0x74b8,	// (0x0003e3e6) list_double_graphic_pane_g4_ParamLimits

0x74b8,	// (0x0003e3e6) list_double_graphic_pane_g4

0x9a63,	// (0x00040991) list_single_2heading_msg_pane_ParamLimits

0x9a63,	// (0x00040991) list_single_2heading_msg_pane

0x8039,	// (0x0003ef67) list_single_2heading_msg_pane_g1_ParamLimits

0x8039,	// (0x0003ef67) list_single_2heading_msg_pane_g1

0x8045,	// (0x0003ef73) list_single_2heading_msg_pane_g2_ParamLimits

0x8045,	// (0x0003ef73) list_single_2heading_msg_pane_g2

0x8058,	// (0x0003ef86) list_single_2heading_msg_pane_g3_ParamLimits

0x8058,	// (0x0003ef86) list_single_2heading_msg_pane_g3

0x8064,	// (0x0003ef92) list_single_2heading_msg_pane_g4_ParamLimits

0x8064,	// (0x0003ef92) list_single_2heading_msg_pane_g4

0x0003,

0xfc75,	// (0x00046ba3) list_single_2heading_msg_pane_g_ParamLimits

0xfc75,	// (0x00046ba3) list_single_2heading_msg_pane_g

0x79d0,	// (0x0003e8fe) list_single_2heading_msg_pane_t1_ParamLimits

0x79d0,	// (0x0003e8fe) list_single_2heading_msg_pane_t1

0x79f8,	// (0x0003e926) list_single_2heading_msg_pane_t2_ParamLimits

0x79f8,	// (0x0003e926) list_single_2heading_msg_pane_t2

0x7a63,	// (0x0003e991) list_single_2heading_msg_pane_t3_ParamLimits

0x7a63,	// (0x0003e991) list_single_2heading_msg_pane_t3

0x115e,	// (0x0003808c) list_single_2heading_msg_pane_t4_ParamLimits

0x115e,	// (0x0003808c) list_single_2heading_msg_pane_t4

0x0003,

0xfc7e,	// (0x00046bac) list_single_2heading_msg_pane_t_ParamLimits

0xfc7e,	// (0x00046bac) list_single_2heading_msg_pane_t

0xac2e,	// (0x00041b5c) title_pane_g4_ParamLimits

0xac2e,	// (0x00041b5c) title_pane_g4

0x1abe,	// (0x000389ec) title_pane_stacon_g3_ParamLimits

0x1abe,	// (0x000389ec) title_pane_stacon_g3

0xf11f,	// (0x0004604d) list_single_2graphic_im_pane_g4_ParamLimits

0xf11f,	// (0x0004604d) list_single_2graphic_im_pane_g4

0xd9cf,	// (0x000448fd) popup_side_volume_key_window_cp

0xdea8,	// (0x00044dd6) main_idle_act2_pane_t1

0x26b9,	// (0x000395e7) toolbar_button_pane_g10

0x8886,	// (0x0003f7b4) popup_toolbar_window_cp1

0xe52c,	// (0x0004545a) clock_nsta_pane_cp_t1

0xe52c,	// (0x0004545a) clock_nsta_pane_cp_t2

0x0001,

0xfacc,	// (0x000469fa) clock_nsta_pane_cp_t

0x1d9a,	// (0x00038cc8) navi_navi_volume_pane_cp2_ParamLimits

0x1da9,	// (0x00038cd7) popup_side_volume_key_window_g1_ParamLimits

0x1db5,	// (0x00038ce3) popup_side_volume_key_window_g2_ParamLimits

0x1dc4,	// (0x00038cf2) popup_side_volume_key_window_g3_ParamLimits

0xf74c,	// (0x0004667a) popup_side_volume_key_window_g_ParamLimits

0x2c1d,	// (0x00039b4b) fep_hwr_aid_pane

0x7fde,	// (0x0003ef0c) bg_fep_hwr_top_pane_g4_ParamLimits

0xe8a3,	// (0x000457d1) fep_hwr_top_pane_g1_ParamLimits

0xe8b5,	// (0x000457e3) fep_hwr_top_pane_g2_ParamLimits

0x2cd6,	// (0x00039c04) fep_hwr_top_pane_g3_ParamLimits

0xfb07,	// (0x00046a35) fep_hwr_top_pane_g_ParamLimits

0x2ceb,	// (0x00039c19) fep_hwr_top_text_pane_ParamLimits

0xd792,	// (0x000446c0) aid_touch_tab_arrow_arrow_2

0xd79b,	// (0x000446c9) aid_touch_tab_arrow_left_2

0x2c31,	// (0x00039b5f) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x2c68,	// (0x00039b96) fep_hwr_prediction_pane

0xe9a2,	// (0x000458d0) fep_vkb_prediction_pane

0x9eec,	// (0x00040e1a) fep_vkb_side_pane_g3_ParamLimits

0x9eec,	// (0x00040e1a) fep_vkb_side_pane_g3

0xe9da,	// (0x00045908) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xed96,	// (0x00045cc4) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xeda3,	// (0x00045cd1) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb89,	// (0x00046ab7) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x48cb,	// (0x0003b7f9) fep_hwr_prediction_pane_g1

0x302c,	// (0x00039f5a) fep_hwr_prediction_pane_g2

0x3034,	// (0x00039f62) fep_hwr_prediction_pane_g3

0x303c,	// (0x00039f6a) fep_hwr_prediction_pane_g4

0x0003,

0xfc87,	// (0x00046bb5) fep_hwr_prediction_pane_g

0x48cb,	// (0x0003b7f9) fep_vkb_prediction_pane_g1

0x48d5,	// (0x0003b803) fep_vkb_prediction_pane_g2

0x48dd,	// (0x0003b80b) fep_vkb_prediction_pane_g3

0x48e5,	// (0x0003b813) fep_vkb_prediction_pane_g4

0x0003,

0xfc90,	// (0x00046bbe) fep_vkb_prediction_pane_g

0x2995,	// (0x000398c3) slider_set_pane_g3

0x29a9,	// (0x000398d7) slider_set_pane_g4

0x29c1,	// (0x000398ef) slider_set_pane_g5

0x2995,	// (0x000398c3) slider_set_pane_g6

0x29d7,	// (0x00039905) slider_set_pane_g7

0xdc42,	// (0x00044b70) slider_form_pane_g3

0xdc4b,	// (0x00044b79) slider_form_pane_g4

0xdc53,	// (0x00044b81) slider_form_pane_g5

0xdc42,	// (0x00044b70) slider_form_pane_g6

0x9a38,	// (0x00040966) slider_form_pane_g7

0xe0fa,	// (0x00045028) slider_set_pane_vc_g3

0xe103,	// (0x00045031) slider_set_pane_vc_g4

0xe10c,	// (0x0004503a) slider_set_pane_vc_g5

0xe0fa,	// (0x00045028) slider_set_pane_vc_g6

0xe115,	// (0x00045043) slider_set_pane_vc_g7

0xe0fa,	// (0x00045028) slider_form_pane_vc_g1

0xe103,	// (0x00045031) slider_form_pane_vc_g2

0xe10c,	// (0x0004503a) slider_form_pane_vc_g3

0xe0fa,	// (0x00045028) slider_form_pane_vc_g4

0xe2d6,	// (0x00045204) slider_form_pane_vc_g5

0x0004,

0xfab2,	// (0x000469e0) slider_form_pane_vc_g

0xac10,	// (0x00041b3e) main_idle_act3_pane

0x48ed,	// (0x0003b81b) ai3_links_pane

0xa130,	// (0x0004105e) popup_ai3_data_window_ParamLimits

0xa130,	// (0x0004105e) popup_ai3_data_window

0xac10,	// (0x00041b3e) grid_ai3_links_pane

0xa14a,	// (0x00041078) cell_ai3_links_pane_ParamLimits

0xa14a,	// (0x00041078) cell_ai3_links_pane

0x4928,	// (0x0003b856) bg_popup_sub_pane_cp11

0x4935,	// (0x0003b863) cell_ai3_links_pane_g1

0xac10,	// (0x00041b3e) bg_popup_sub_pane_cp12

0x495a,	// (0x0003b888) heading_ai3_data_pane

0x4962,	// (0x0003b890) list_ai3_gene_pane

0x496e,	// (0x0003b89c) popup_ai3_data_window_g1

0x4976,	// (0x0003b8a4) heading_ai3_data_pane_g1

0x497e,	// (0x0003b8ac) heading_ai3_data_pane_t1

0x498c,	// (0x0003b8ba) list_double_ai3_gene_pane_ParamLimits

0x498c,	// (0x0003b8ba) list_double_ai3_gene_pane

0x4999,	// (0x0003b8c7) list_single_ai3_gene_pane_ParamLimits

0x4999,	// (0x0003b8c7) list_single_ai3_gene_pane

0xe7f8,	// (0x00045726) list_highlight_pane_cp7_ParamLimits

0xe7f8,	// (0x00045726) list_highlight_pane_cp7

0x49a6,	// (0x0003b8d4) list_single_a13_gene_pane_t1_ParamLimits

0x49a6,	// (0x0003b8d4) list_single_a13_gene_pane_t1

0x49bd,	// (0x0003b8eb) list_single_ai3_gene_pane_g1

0x49c6,	// (0x0003b8f4) list_single_ai3_gene_pane_g2

0x0001,

0xfc99,	// (0x00046bc7) list_single_ai3_gene_pane_g

0x49ce,	// (0x0003b8fc) list_double_ai3_gene_pane_g1_ParamLimits

0x49ce,	// (0x0003b8fc) list_double_ai3_gene_pane_g1

0x49da,	// (0x0003b908) list_double_ai3_gene_pane_t1_ParamLimits

0x49da,	// (0x0003b908) list_double_ai3_gene_pane_t1

0x49f6,	// (0x0003b924) list_double_ai3_gene_pane_t2_ParamLimits

0x49f6,	// (0x0003b924) list_double_ai3_gene_pane_t2

0x4a0c,	// (0x0003b93a) list_double_ai3_gene_pane_t3_ParamLimits

0x4a0c,	// (0x0003b93a) list_double_ai3_gene_pane_t3

0x0002,

0xfc9e,	// (0x00046bcc) list_double_ai3_gene_pane_t_ParamLimits

0xfc9e,	// (0x00046bcc) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x10bf,	// (0x00037fed) aid_size_min_col_2

0xa11a,	// (0x00041048) aid_size_min_msg_ParamLimits

0xa11a,	// (0x00041048) aid_size_min_msg

0x9f00,	// (0x00040e2e) fep_vkb_top_text_pane_g2_ParamLimits

0x9f00,	// (0x00040e2e) fep_vkb_top_text_pane_g2

0x0001,

0xfb29,	// (0x00046a57) fep_vkb_top_text_pane_g_ParamLimits

0xfb29,	// (0x00046a57) fep_vkb_top_text_pane_g

0xac10,	// (0x00041b3e) main_hc_apps_shell_pane

0x4a29,	// (0x0003b957) grid_hc_apps_pane_ParamLimits

0x4a29,	// (0x0003b957) grid_hc_apps_pane

0x4a38,	// (0x0003b966) list_hc_apps_pane

0x4a40,	// (0x0003b96e) scroll_pane_cp37_ParamLimits

0x4a40,	// (0x0003b96e) scroll_pane_cp37

0xa164,	// (0x00041092) cell_hc_apps_pane_ParamLimits

0xa164,	// (0x00041092) cell_hc_apps_pane

0xa222,	// (0x00041150) cell_hc_apps_pane_g1_ParamLimits

0xa222,	// (0x00041150) cell_hc_apps_pane_g1

0x4b2b,	// (0x0003ba59) cell_hc_apps_pane_g2_ParamLimits

0x4b2b,	// (0x0003ba59) cell_hc_apps_pane_g2

0x4b47,	// (0x0003ba75) cell_hc_apps_pane_g3_ParamLimits

0x4b47,	// (0x0003ba75) cell_hc_apps_pane_g3

0x0002,

0xfca5,	// (0x00046bd3) cell_hc_apps_pane_g_ParamLimits

0xfca5,	// (0x00046bd3) cell_hc_apps_pane_g

0xa24f,	// (0x0004117d) cell_hc_apps_pane_t1_ParamLimits

0xa24f,	// (0x0004117d) cell_hc_apps_pane_t1

0xb26f,	// (0x0004219d) grid_highlight_pane_cp10_ParamLimits

0xb26f,	// (0x0004219d) grid_highlight_pane_cp10

0xa28d,	// (0x000411bb) list_single_hc_apps_pane_ParamLimits

0xa28d,	// (0x000411bb) list_single_hc_apps_pane

0xa2ba,	// (0x000411e8) list_single_hc_apps_pane_g1

0x807c,	// (0x0003efaa) list_single_hc_apps_pane_g2

0x0001,

0xfcac,	// (0x00046bda) list_single_hc_apps_pane_g

0x8095,	// (0x0003efc3) list_single_hc_apps_pane_g2_copy1

0x1183,	// (0x000380b1) list_single_hc_apps_pane_t1

0xac80,	// (0x00041bae) bg_set_opt_pane_cp_ParamLimits

0x169a,	// (0x000385c8) setting_slider_pane_t1_ParamLimits

0x16b3,	// (0x000385e1) setting_slider_pane_t2_ParamLimits

0x16cd,	// (0x000385fb) setting_slider_pane_t3_ParamLimits

0xf5a2,	// (0x000464d0) setting_slider_pane_t_ParamLimits

0x16e5,	// (0x00038613) slider_set_pane_ParamLimits

0x218d,	// (0x000390bb) control_pane_g5_ParamLimits

0x218d,	// (0x000390bb) control_pane_g5

0xdbf2,	// (0x00044b20) slider_set_pane_g1_ParamLimits

0x2989,	// (0x000398b7) slider_set_pane_g2_ParamLimits

0x2995,	// (0x000398c3) slider_set_pane_g3_ParamLimits

0x29a9,	// (0x000398d7) slider_set_pane_g4_ParamLimits

0x29c1,	// (0x000398ef) slider_set_pane_g5_ParamLimits

0x2995,	// (0x000398c3) slider_set_pane_g6_ParamLimits

0x29d7,	// (0x00039905) slider_set_pane_g7_ParamLimits

0xf98c,	// (0x000468ba) slider_set_pane_g_ParamLimits

0xc3bb,	// (0x000432e9) navi_icon_text_pane_ParamLimits

0x92a6,	// (0x000401d4) aid_fill_nsta_2_ParamLimits

0x92da,	// (0x00040208) aid_touch_tab_arrow_left_ParamLimits

0x92f0,	// (0x0004021e) aid_touch_tab_arrow_right_ParamLimits

0x938b,	// (0x000402b9) clock_nsta_pane_ParamLimits

0x9814,	// (0x00040742) navi_icon_pane_g1_ParamLimits

0x9820,	// (0x0004074e) navi_text_pane_t1_ParamLimits

0x9cca,	// (0x00040bf8) navi_icon_text_pane_g1_ParamLimits

0x9cd6,	// (0x00040c04) navi_icon_text_pane_t1_ParamLimits

0xa2ba,	// (0x000411e8) list_single_hc_apps_pane_g1_ParamLimits

0x807c,	// (0x0003efaa) list_single_hc_apps_pane_g2_ParamLimits

0xfcac,	// (0x00046bda) list_single_hc_apps_pane_g_ParamLimits

0x8095,	// (0x0003efc3) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x1183,	// (0x000380b1) list_single_hc_apps_pane_t1_ParamLimits

0x7c23,	// (0x0003eb51) popup_toolbar2_fixed_window_ParamLimits

0x7c23,	// (0x0003eb51) popup_toolbar2_fixed_window

0x920f,	// (0x0004013d) popup_toolbar2_float_window

0xac10,	// (0x00041b3e) bg_popup_sub_pane_cp27

0x4c1e,	// (0x0003bb4c) grid_toolbar2_float_pane

0xac10,	// (0x00041b3e) bg_popup_sub_pane_cp26

0x4c1e,	// (0x0003bb4c) grid_toolbar2_fixed_pane

0xa2d3,	// (0x00041201) cell_toolbar2_fixed_pane_ParamLimits

0xa2d3,	// (0x00041201) cell_toolbar2_fixed_pane

0xa2ee,	// (0x0004121c) cell_toolbar2_fixed_pane_g1

0x4c3f,	// (0x0003bb6d) toolbar2_fixed_button_pane

0xca81,	// (0x000439af) toolbar2_fixed_button_pane_g1

0xca89,	// (0x000439b7) toolbar2_fixed_button_pane_g2

0xca91,	// (0x000439bf) toolbar2_fixed_button_pane_g3

0xca99,	// (0x000439c7) toolbar2_fixed_button_pane_g4

0xcaa1,	// (0x000439cf) toolbar2_fixed_button_pane_g5

0xcaa9,	// (0x000439d7) toolbar2_fixed_button_pane_g6

0xcab1,	// (0x000439df) toolbar2_fixed_button_pane_g7

0xcab9,	// (0x000439e7) toolbar2_fixed_button_pane_g8

0xcac1,	// (0x000439ef) toolbar2_fixed_button_pane_g9

0x0008,

0xf88e,	// (0x000467bc) toolbar2_fixed_button_pane_g

0x4c47,	// (0x0003bb75) cell_toolbar2_float_pane_ParamLimits

0x4c47,	// (0x0003bb75) cell_toolbar2_float_pane

0x4c58,	// (0x0003bb86) cell_toolbar2_float_pane_g1

0x4c3f,	// (0x0003bb6d) toolbar2_fixed_button_pane_cp

0x9dda,	// (0x00040d08) fep_vkb_accented_list_pane_ParamLimits

0x9dda,	// (0x00040d08) fep_vkb_accented_list_pane

0x2e39,	// (0x00039d67) bg_popup_fep_shadow_pane_g9

0xc53b,	// (0x00043469) bg_popup_fep_shadow_pane_cp3

0xbc1c,	// (0x00042b4a) list_accented_list_pane

0x4c61,	// (0x0003bb8f) list_single_accented_list_pane_ParamLimits

0x4c61,	// (0x0003bb8f) list_single_accented_list_pane

0xc53b,	// (0x00043469) list_highlight_pane_cp10

0x4c72,	// (0x0003bba0) list_single_accented_list_pane_t1

0x9139,	// (0x00040067) popup_slider_window_ParamLimits

0x9139,	// (0x00040067) popup_slider_window

0x48ae,	// (0x0003b7dc) aid_indentation_list_msg

0xa3e7,	// (0x00041315) bg_popup_window_pane_cp19

0x4d96,	// (0x0003bcc4) popup_slider_window_g1

0x4db2,	// (0x0003bce0) popup_slider_window_g2

0x4dce,	// (0x0003bcfc) popup_slider_window_g3

0x0005,

0xfcb1,	// (0x00046bdf) popup_slider_window_g

0x4e2a,	// (0x0003bd58) popup_slider_window_t1

0x4e9e,	// (0x0003bdcc) small_volume_slider_vertical_pane

0xe833,	// (0x00045761) small_volume_slider_vertical_pane_g1

0xe833,	// (0x00045761) small_volume_slider_vertical_pane_g2

0x4eba,	// (0x0003bde8) small_volume_slider_vertical_pane_g3

0x0002,

0xfcc3,	// (0x00046bf1) small_volume_slider_vertical_pane_g

0x7b91,	// (0x0003eabf) area_side_right_pane_ParamLimits

0x7b91,	// (0x0003eabf) area_side_right_pane

0x80b1,	// (0x0003efdf) aid_size_side_button_ParamLimits

0x80b1,	// (0x0003efdf) aid_size_side_button

0x80ca,	// (0x0003eff8) grid_sctrl_middle_pane_ParamLimits

0x80ca,	// (0x0003eff8) grid_sctrl_middle_pane

0x30ad,	// (0x00039fdb) sctrl_sk_bottom_pane

0x30be,	// (0x00039fec) sctrl_sk_top_pane

0x30d0,	// (0x00039ffe) aid_touch_sctrl_top

0xb26f,	// (0x0004219d) bg_sctrl_sk_pane_ParamLimits

0xb26f,	// (0x0004219d) bg_sctrl_sk_pane

0x30dd,	// (0x0003a00b) sctrl_sk_top_pane_g1

0x30ea,	// (0x0003a018) sctrl_sk_top_pane_t1

0x30d0,	// (0x00039ffe) aid_touch_sctrl_bottom

0xb26f,	// (0x0004219d) bg_sctrl_sk_pane_cp_ParamLimits

0xb26f,	// (0x0004219d) bg_sctrl_sk_pane_cp

0x3105,	// (0x0003a033) sctrl_sk_bottom_pane_g1

0x30ea,	// (0x0003a018) sctrl_sk_bottom_pane_t1

0x80e4,	// (0x0003f012) cell_sctrl_middle_pane_ParamLimits

0x80e4,	// (0x0003f012) cell_sctrl_middle_pane

0x80f5,	// (0x0003f023) aid_touch_sctrl_middle_ParamLimits

0x80f5,	// (0x0003f023) aid_touch_sctrl_middle

0x8102,	// (0x0003f030) bg_sctrl_middle_pane_ParamLimits

0x8102,	// (0x0003f030) bg_sctrl_middle_pane

0x4f42,	// (0x0003be70) cell_sctrl_middle_pane_g1_ParamLimits

0x4f42,	// (0x0003be70) cell_sctrl_middle_pane_g1

0x8110,	// (0x0003f03e) cell_sctrl_middle_pane_g2_ParamLimits

0x8110,	// (0x0003f03e) cell_sctrl_middle_pane_g2

0x0001,

0xfccf,	// (0x00046bfd) cell_sctrl_middle_pane_g_ParamLimits

0xfccf,	// (0x00046bfd) cell_sctrl_middle_pane_g

0xca81,	// (0x000439af) bg_sctrl_middle_pane_g1

0xca89,	// (0x000439b7) bg_sctrl_middle_pane_g2

0xca91,	// (0x000439bf) bg_sctrl_middle_pane_g3

0xca99,	// (0x000439c7) bg_sctrl_middle_pane_g4

0xcaa1,	// (0x000439cf) bg_sctrl_middle_pane_g5

0xcaa9,	// (0x000439d7) bg_sctrl_middle_pane_g6

0xcab1,	// (0x000439df) bg_sctrl_middle_pane_g7

0xcab9,	// (0x000439e7) bg_sctrl_middle_pane_g8

0x0007,

0xfcd4,	// (0x00046c02) bg_sctrl_middle_pane_g

0xcac1,	// (0x000439ef) bg_sctrl_middle_pane_g8_copy1

0xca81,	// (0x000439af) bg_sctrl_sk_pane_g1

0xca89,	// (0x000439b7) bg_sctrl_sk_pane_g2

0xca91,	// (0x000439bf) bg_sctrl_sk_pane_g3

0x0008,

0xf88e,	// (0x000467bc) bg_sctrl_sk_pane_g

0xba4f,	// (0x0004297d) aid_size_touch_scroll_bar

0xca99,	// (0x000439c7) bg_sctrl_sk_pane_g4

0xcaa1,	// (0x000439cf) bg_sctrl_sk_pane_g5

0xcaa9,	// (0x000439d7) bg_sctrl_sk_pane_g6

0xcab1,	// (0x000439df) bg_sctrl_sk_pane_g7

0xcab9,	// (0x000439e7) bg_sctrl_sk_pane_g8

0xcac1,	// (0x000439ef) bg_sctrl_sk_pane_g9

0xc7b7,	// (0x000436e5) popup_fep_china_hwr2_fs_candidate_window

0x8c7d,	// (0x0003fbab) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x8c7d,	// (0x0003fbab) popup_fep_china_hwr2_fs_control_window

0xe9da,	// (0x00045908) sctrl_sk_top_pane_g2

0x0001,

0xfcca,	// (0x00046bf8) sctrl_sk_top_pane_g

0xa49f,	// (0x000413cd) aid_fep_china_hwr2_fs_cell_ParamLimits

0xa49f,	// (0x000413cd) aid_fep_china_hwr2_fs_cell

0xa4b3,	// (0x000413e1) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xa4b3,	// (0x000413e1) bg_popup_fep_shadow_pane_cp4

0xa4ca,	// (0x000413f8) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xa4ca,	// (0x000413f8) bg_popup_fep_shadow_pane_cp5

0xa4dc,	// (0x0004140a) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xa4dc,	// (0x0004140a) popup_fep_china_hwr2_fs_control_bar_grid

0xa4f0,	// (0x0004141e) popup_fep_china_hwr2_fs_control_funtion_grid

0x4f16,	// (0x0003be44) aid_fep_china_hwr2_fs_candi_cell

0xac10,	// (0x00041b3e) bg_popup_fep_shadow_pane_cp6

0x4f20,	// (0x0003be4e) popup_fep_china_hwr2_fs_candidate_grid

0xa4f8,	// (0x00041426) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xa4f8,	// (0x00041426) cell_fep_china_hwr2_fs_funtion_grid

0xe833,	// (0x00045761) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x4f42,	// (0x0003be70) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x4f42,	// (0x0003be70) cell_fep_china_hwr2_fs_funtion_grid_g1

0x4f50,	// (0x0003be7e) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x4f50,	// (0x0003be7e) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfce5,	// (0x00046c13) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfce5,	// (0x00046c13) cell_fep_china_hwr2_fs_funtion_grid_g

0xa510,	// (0x0004143e) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xa510,	// (0x0004143e) cell_fep_china_hwr2_fs_funtion_grid_t1

0xa525,	// (0x00041453) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xa525,	// (0x00041453) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfcea,	// (0x00046c18) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfcea,	// (0x00046c18) cell_fep_china_hwr2_fs_funtion_grid_t

0x4f97,	// (0x0003bec5) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x4f9f,	// (0x0003becd) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x4fa7,	// (0x0003bed5) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfcef,	// (0x00046c1d) popup_fep_china_hwr2_fs_control_bar_grid_g

0x4faf,	// (0x0003bedd) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x4faf,	// (0x0003bedd) cell_fep_china_hwr2_fs_candidate_grid

0x4fc8,	// (0x0003bef6) popup_fep_china_hwr2_fs_candidate_grid_g20

0x4fd0,	// (0x0003befe) popup_fep_china_hwr2_fs_candidate_grid_g21

0xe833,	// (0x00045761) cell_fep_china_hwr2_fs_candidate_grid_g1

0xe833,	// (0x00045761) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0x0091,	// (0x00036fbf) cell_fep_china_hwr2_fs_candidate_grid_g

0x4fd8,	// (0x0003bf06) cell_fep_china_hwr2_fs_candidate_grid_t1

0xc8ce,	// (0x000437fc) clock_nsta_pane_cp_24_ParamLimits

0xc8ce,	// (0x000437fc) clock_nsta_pane_cp_24

0xc936,	// (0x00043864) indicator_nsta_pane_cp_24_ParamLimits

0xc936,	// (0x00043864) indicator_nsta_pane_cp_24

0xd67e,	// (0x000445ac) heading_pane_g1

0x0001,

0xf8f3,	// (0x00046821) heading_pane_g

0xdd35,	// (0x00044c63) grid_sct_catagory_button_pane

0xd6f3,	// (0x00044621) scroll_pane_cp5_ParamLimits

0xe591,	// (0x000454bf) button_value_adjust_pane_cp5_ParamLimits

0xe591,	// (0x000454bf) button_value_adjust_pane_cp5

0xe64f,	// (0x0004557d) form2_midp_time_pane_ParamLimits

0x4fe6,	// (0x0003bf14) cell_sct_catagory_button_pane_ParamLimits

0x4fe6,	// (0x0003bf14) cell_sct_catagory_button_pane

0xe7f8,	// (0x00045726) bg_button_pane_cp01_ParamLimits

0xe7f8,	// (0x00045726) bg_button_pane_cp01

0xe833,	// (0x00045761) cell_sct_catagory_button_pane_g1

0x91b2,	// (0x000400e0) popup_tb_extension_window

0xa541,	// (0x0004146f) aid_size_cell_ext_ParamLimits

0xa541,	// (0x0004146f) aid_size_cell_ext

0xb891,	// (0x000427bf) bg_tb_trans_pane_cp1_ParamLimits

0xb891,	// (0x000427bf) bg_tb_trans_pane_cp1

0xa567,	// (0x00041495) grid_tb_ext_pane_ParamLimits

0xa567,	// (0x00041495) grid_tb_ext_pane

0xa5a2,	// (0x000414d0) cell_tb_ext_pane_ParamLimits

0xa5a2,	// (0x000414d0) cell_tb_ext_pane

0xa5ca,	// (0x000414f8) cell_tb_ext_pane_g1_ParamLimits

0xa5ca,	// (0x000414f8) cell_tb_ext_pane_g1

0x507a,	// (0x0003bfa8) cell_tb_ext_pane_t1

0xb26f,	// (0x0004219d) list_highlight_pane_cp11_ParamLimits

0xb26f,	// (0x0004219d) list_highlight_pane_cp11

0x1507,	// (0x00038435) popup_uni_indicator_window_ParamLimits

0x1507,	// (0x00038435) popup_uni_indicator_window

0xbb16,	// (0x00042a44) bg_popup_sub_pane_cp14

0x5095,	// (0x0003bfc3) list_uniindi_pane

0x50a1,	// (0x0003bfcf) uniindi_top_pane

0xb26f,	// (0x0004219d) bg_uniindi_top_pane

0x50c0,	// (0x0003bfee) uniindi_top_pane_g1

0x50d6,	// (0x0003c004) uniindi_top_pane_g2

0x0003,

0xfcf6,	// (0x00046c24) uniindi_top_pane_g

0x5100,	// (0x0003c02e) uniindi_top_pane_t1

0x512a,	// (0x0003c058) list_single_uniindi_pane_ParamLimits

0x512a,	// (0x0003c058) list_single_uniindi_pane

0xe833,	// (0x00045761) bg_uniindi_top_pane_g1

0x513d,	// (0x0003c06b) list_single_uniindi_pane_g1

0x5150,	// (0x0003c07e) list_single_uniindi_pane_t1

0xac10,	// (0x00041b3e) control_bg_pane

0x5175,	// (0x0003c0a3) bg_sctrl_sk_pane_cp1

0x517e,	// (0x0003c0ac) bg_sctrl_sk_pane_cp2

0x5187,	// (0x0003c0b5) control_bg_pane_g1

0x5190,	// (0x0003c0be) control_bg_pane_g2

0x0001,

0xfcff,	// (0x00046c2d) control_bg_pane_g

0xe4a0,	// (0x000453ce) cell_indicator_nsta_pane_g1_ParamLimits

0x9c31,	// (0x00040b5f) cell_indicator_nsta_pane_g2_ParamLimits

0xfac7,	// (0x000469f5) cell_indicator_nsta_pane_g_ParamLimits

0x0f20,	// (0x00037e4e) form2_midp_time_pane_t1_ParamLimits

0xe1d8,	// (0x00045106) main_idle_act4_pane_ParamLimits

0xe1d8,	// (0x00045106) main_idle_act4_pane

0x91b2,	// (0x000400e0) popup_tb_extension_window_ParamLimits

0xa589,	// (0x000414b7) tb_ext_find_pane_ParamLimits

0xa589,	// (0x000414b7) tb_ext_find_pane

0x5199,	// (0x0003c0c7) ai_gene_pane_1_cp1

0xc5bd,	// (0x000434eb) ai_gene_pane_2_cp1

0x51a1,	// (0x0003c0cf) list_single_idle_plugin_calendar_pane

0x51aa,	// (0x0003c0d8) list_single_idle_plugin_notification_pane

0x51b3,	// (0x0003c0e1) list_single_idle_plugin_player_pane

0xa5e7,	// (0x00041515) list_single_idle_plugin_shortcut_pane_ParamLimits

0xa5e7,	// (0x00041515) list_single_idle_plugin_shortcut_pane

0xa60f,	// (0x0004153d) main_idle_act4_pane_t1

0xa625,	// (0x00041553) main_idle_act4_pane_t2

0x0001,

0xfd04,	// (0x00046c32) main_idle_act4_pane_t

0xa63b,	// (0x00041569) middle_sk_idle_act4_pane_ParamLimits

0xa63b,	// (0x00041569) middle_sk_idle_act4_pane

0xa657,	// (0x00041585) popup_clock_digital_analogue_window_cp2

0xa67f,	// (0x000415ad) shortcut_wheel_idle_act4_pane_ParamLimits

0xa67f,	// (0x000415ad) shortcut_wheel_idle_act4_pane

0xe833,	// (0x00045761) shortcut_wheel_idle_act4_pane_g1

0xe833,	// (0x00045761) shortcut_wheel_idle_act4_pane_g2

0xe833,	// (0x00045761) shortcut_wheel_idle_act4_pane_g3

0xe833,	// (0x00045761) shortcut_wheel_idle_act4_pane_g4

0xe833,	// (0x00045761) shortcut_wheel_idle_act4_pane_g5

0x5246,	// (0x0003c174) shortcut_wheel_idle_act4_pane_g6

0x524e,	// (0x0003c17c) shortcut_wheel_idle_act4_pane_g7

0x5256,	// (0x0003c184) shortcut_wheel_idle_act4_pane_g8

0x525e,	// (0x0003c18c) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd09,	// (0x00046c37) shortcut_wheel_idle_act4_pane_g

0x7fde,	// (0x0003ef0c) middle_sk_idle_act4_pane_g1_ParamLimits

0x7fde,	// (0x0003ef0c) middle_sk_idle_act4_pane_g1

0xa6fc,	// (0x0004162a) middle_sk_idle_act4_pane_g2_ParamLimits

0xa6fc,	// (0x0004162a) middle_sk_idle_act4_pane_g2

0x0001,

0xfd2c,	// (0x00046c5a) middle_sk_idle_act4_pane_g_ParamLimits

0xfd2c,	// (0x00046c5a) middle_sk_idle_act4_pane_g

0xa714,	// (0x00041642) middle_sk_idle_act4_pane_t1_ParamLimits

0xa714,	// (0x00041642) middle_sk_idle_act4_pane_t1

0xa743,	// (0x00041671) grid_ai_shortcut_pane_ParamLimits

0xa743,	// (0x00041671) grid_ai_shortcut_pane

0xa760,	// (0x0004168e) list_highlight_pane_cp16_ParamLimits

0xa760,	// (0x0004168e) list_highlight_pane_cp16

0xa76d,	// (0x0004169b) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xa76d,	// (0x0004169b) list_single_idle_plugin_shortcut_pane_g1

0xa779,	// (0x000416a7) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xa779,	// (0x000416a7) list_single_idle_plugin_shortcut_pane_g2

0xa795,	// (0x000416c3) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xa795,	// (0x000416c3) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd31,	// (0x00046c5f) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd31,	// (0x00046c5f) list_single_idle_plugin_shortcut_pane_g

0xa7aa,	// (0x000416d8) cell_ai_shortcut_pane_ParamLimits

0xa7aa,	// (0x000416d8) cell_ai_shortcut_pane

0xa7c0,	// (0x000416ee) cell_ai_shortcut_pane_g1_ParamLimits

0xa7c0,	// (0x000416ee) cell_ai_shortcut_pane_g1

0x5199,	// (0x0003c0c7) ai_gene_pane_1_cp2

0x538e,	// (0x0003c2bc) ai_gene_pane_2_cp2

0x5396,	// (0x0003c2c4) list_highlight_pane_cp15

0x539f,	// (0x0003c2cd) list_single_idle_plugin_calendar_pane_g1

0x5396,	// (0x0003c2c4) list_highlight_pane_cp17

0x53a7,	// (0x0003c2d5) list_single_idle_plugin_calendar_pane_g1_copy1

0x53af,	// (0x0003c2dd) list_single_idle_plugin_player_pane_g1

0xdf34,	// (0x00044e62) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd38,	// (0x00046c66) list_single_idle_plugin_player_pane_g

0x53b7,	// (0x0003c2e5) list_single_idle_plugin_player_pane_t1

0x53c5,	// (0x0003c2f3) list_single_idle_plugin_player_pane_t2

0x53d3,	// (0x0003c301) list_single_idle_plugin_player_pane_t3

0x53e1,	// (0x0003c30f) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd3d,	// (0x00046c6b) list_single_idle_plugin_player_pane_t

0x53ef,	// (0x0003c31d) wait_bar_pane_cp15

0x53f7,	// (0x0003c325) grid_ai_notification_pane

0xdf34,	// (0x00044e62) list_single_idle_plugin_notification_pane_g1

0xa7e2,	// (0x00041710) cell_ai_notification_pane_ParamLimits

0xa7e2,	// (0x00041710) cell_ai_notification_pane

0x540d,	// (0x0003c33b) cell_ai_notification_pane_g1

0x5415,	// (0x0003c343) cell_ai_notification_pane_t1

0xa7ef,	// (0x0004171d) tb_ext_find_button_pane

0xa7f7,	// (0x00041725) tb_ext_find_pane_g1

0xa7ff,	// (0x0004172d) tb_ext_find_pane_t1

0xc04e,	// (0x00042f7c) tb_ext_find_button_pane_g1

0x5441,	// (0x0003c36f) tb_ext_find_button_pane_g2

0x0001,

0xfd46,	// (0x00046c74) tb_ext_find_button_pane_g

0xa60f,	// (0x0004153d) main_idle_act4_pane_t1_ParamLimits

0xa625,	// (0x00041553) main_idle_act4_pane_t2_ParamLimits

0xfd04,	// (0x00046c32) main_idle_act4_pane_t_ParamLimits

0xa657,	// (0x00041585) popup_clock_digital_analogue_window_cp2_ParamLimits

0xa66f,	// (0x0004159d) sat_plugin_idle_act4_pane_ParamLimits

0xa66f,	// (0x0004159d) sat_plugin_idle_act4_pane

0xa80d,	// (0x0004173b) sat_plugin_idle_act4_pane_t1_ParamLimits

0xa80d,	// (0x0004173b) sat_plugin_idle_act4_pane_t1

0xa825,	// (0x00041753) sat_plugin_idle_act4_pane_t2_ParamLimits

0xa825,	// (0x00041753) sat_plugin_idle_act4_pane_t2

0xa83d,	// (0x0004176b) sat_plugin_idle_act4_pane_t3_ParamLimits

0xa83d,	// (0x0004176b) sat_plugin_idle_act4_pane_t3

0xa855,	// (0x00041783) sat_plugin_idle_act4_pane_t4_ParamLimits

0xa855,	// (0x00041783) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd4b,	// (0x00046c79) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd4b,	// (0x00046c79) sat_plugin_idle_act4_pane_t

0x1442,	// (0x00038370) popup_battery_window_ParamLimits

0x1442,	// (0x00038370) popup_battery_window

0xb26f,	// (0x0004219d) bg_popup_sub_pane_cp25_ParamLimits

0xb26f,	// (0x0004219d) bg_popup_sub_pane_cp25

0x5496,	// (0x0003c3c4) popup_battery_window_g1_ParamLimits

0x5496,	// (0x0003c3c4) popup_battery_window_g1

0x54a2,	// (0x0003c3d0) popup_battery_window_t1_ParamLimits

0x54a2,	// (0x0003c3d0) popup_battery_window_t1

0x54b4,	// (0x0003c3e2) popup_battery_window_t2_ParamLimits

0x54b4,	// (0x0003c3e2) popup_battery_window_t2

0x0001,

0xfd54,	// (0x00046c82) popup_battery_window_t_ParamLimits

0xfd54,	// (0x00046c82) popup_battery_window_t

0x8ae2,	// (0x0003fa10) midp_canvas_pane_ParamLimits

0x8b3d,	// (0x0003fa6b) midp_keypad_pane_ParamLimits

0x8b3d,	// (0x0003fa6b) midp_keypad_pane

0xbc6e,	// (0x00042b9c) main_midp_pane_ParamLimits

0xe54a,	// (0x00045478) signal_pane_g2_cp_ParamLimits

0xa86d,	// (0x0004179b) aid_size_cell_midp_keypad_ParamLimits

0xa86d,	// (0x0004179b) aid_size_cell_midp_keypad

0xa88b,	// (0x000417b9) midp_keyp_game_grid_pane_ParamLimits

0xa88b,	// (0x000417b9) midp_keyp_game_grid_pane

0xa8b2,	// (0x000417e0) midp_keyp_rocker_pane_ParamLimits

0xa8b2,	// (0x000417e0) midp_keyp_rocker_pane

0xa90b,	// (0x00041839) midp_keyp_sk_left_pane_ParamLimits

0xa90b,	// (0x00041839) midp_keyp_sk_left_pane

0xa95f,	// (0x0004188d) midp_keyp_sk_right_pane_ParamLimits

0xa95f,	// (0x0004188d) midp_keyp_sk_right_pane

0xac10,	// (0x00041b3e) bg_button_pane_cp03

0xa9b3,	// (0x000418e1) midp_keyp_sk_left_pane_g1

0xac10,	// (0x00041b3e) bg_button_pane_cp04

0xa9b3,	// (0x000418e1) midp_keyp_sk_right_pane_g1

0xe833,	// (0x00045761) midp_keyp_rocker_pane_g1

0xa9bc,	// (0x000418ea) keyp_game_cell_pane_ParamLimits

0xa9bc,	// (0x000418ea) keyp_game_cell_pane

0xac10,	// (0x00041b3e) bg_button_pane_cp02

0xa9e0,	// (0x0004190e) keyp_game_cell_pane_g1

0x7bd3,	// (0x0003eb01) popup_fep_vkb2_window_ParamLimits

0x7bd3,	// (0x0003eb01) popup_fep_vkb2_window

0x811c,	// (0x0003f04a) aid_size_cell_vkb2_ParamLimits

0x811c,	// (0x0003f04a) aid_size_cell_vkb2

0x8152,	// (0x0003f080) popup_fep_vkb2_window_g1_ParamLimits

0x8152,	// (0x0003f080) popup_fep_vkb2_window_g1

0x81a2,	// (0x0003f0d0) vkb2_area_bottom_pane_ParamLimits

0x81a2,	// (0x0003f0d0) vkb2_area_bottom_pane

0x81f6,	// (0x0003f124) vkb2_area_keypad_pane_ParamLimits

0x81f6,	// (0x0003f124) vkb2_area_keypad_pane

0x823e,	// (0x0003f16c) vkb2_area_top_pane_ParamLimits

0x823e,	// (0x0003f16c) vkb2_area_top_pane

0x82c4,	// (0x0003f1f2) vkb2_top_entry_pane_ParamLimits

0x82c4,	// (0x0003f1f2) vkb2_top_entry_pane

0x82f1,	// (0x0003f21f) vkb2_top_grid_left_pane_ParamLimits

0x82f1,	// (0x0003f21f) vkb2_top_grid_left_pane

0x8311,	// (0x0003f23f) vkb2_top_grid_right_pane_ParamLimits

0x8311,	// (0x0003f23f) vkb2_top_grid_right_pane

0x3366,	// (0x0003a294) vkb2_cell_keypad_pane_ParamLimits

0x3366,	// (0x0003a294) vkb2_cell_keypad_pane

0x8357,	// (0x0003f285) vkb2_area_bottom_grid_pane_ParamLimits

0x8357,	// (0x0003f285) vkb2_area_bottom_grid_pane

0x8381,	// (0x0003f2af) vkb2_area_bottom_pane_g1_ParamLimits

0x8381,	// (0x0003f2af) vkb2_area_bottom_pane_g1

0x83a7,	// (0x0003f2d5) vkb2_area_bottom_pane_g2_ParamLimits

0x83a7,	// (0x0003f2d5) vkb2_area_bottom_pane_g2

0x83d8,	// (0x0003f306) vkb2_area_bottom_pane_g3_ParamLimits

0x83d8,	// (0x0003f306) vkb2_area_bottom_pane_g3

0x0002,

0xfd59,	// (0x00046c87) vkb2_area_bottom_pane_g_ParamLimits

0xfd59,	// (0x00046c87) vkb2_area_bottom_pane_g

0x3510,	// (0x0003a43e) vkb2_top_cell_left_pane_ParamLimits

0x3510,	// (0x0003a43e) vkb2_top_cell_left_pane

0xa9e9,	// (0x00041917) vkb2_top_entry_pane_g1_ParamLimits

0xa9e9,	// (0x00041917) vkb2_top_entry_pane_g1

0xa9f7,	// (0x00041925) vkb2_top_entry_pane_t1_ParamLimits

0xa9f7,	// (0x00041925) vkb2_top_entry_pane_t1

0x5665,	// (0x0003c593) vkb2_top_entry_pane_t2_ParamLimits

0x5665,	// (0x0003c593) vkb2_top_entry_pane_t2

0x5697,	// (0x0003c5c5) vkb2_top_entry_pane_t3_ParamLimits

0x5697,	// (0x0003c5c5) vkb2_top_entry_pane_t3

0x0002,

0xfd60,	// (0x00046c8e) vkb2_top_entry_pane_t_ParamLimits

0xfd60,	// (0x00046c8e) vkb2_top_entry_pane_t

0x8442,	// (0x0003f370) vkb2_top_grid_right_pane_g1_ParamLimits

0x8442,	// (0x0003f370) vkb2_top_grid_right_pane_g1

0x3573,	// (0x0003a4a1) vkb2_top_grid_right_pane_g2_ParamLimits

0x3573,	// (0x0003a4a1) vkb2_top_grid_right_pane_g2

0x358b,	// (0x0003a4b9) vkb2_top_grid_right_pane_g3_ParamLimits

0x358b,	// (0x0003a4b9) vkb2_top_grid_right_pane_g3

0x8458,	// (0x0003f386) vkb2_top_grid_right_pane_g4_ParamLimits

0x8458,	// (0x0003f386) vkb2_top_grid_right_pane_g4

0x0003,

0xfd67,	// (0x00046c95) vkb2_top_grid_right_pane_g_ParamLimits

0xfd67,	// (0x00046c95) vkb2_top_grid_right_pane_g

0x35b9,	// (0x0003a4e7) vkb2_top_cell_left_pane_g1

0x35d0,	// (0x0003a4fe) vkb2_cell_keypad_pane_g1_ParamLimits

0x35d0,	// (0x0003a4fe) vkb2_cell_keypad_pane_g1

0x56ad,	// (0x0003c5db) vkb2_cell_keypad_pane_t1_ParamLimits

0x56ad,	// (0x0003c5db) vkb2_cell_keypad_pane_t1

0x35de,	// (0x0003a50c) vkb2_cell_bottom_grid_pane_ParamLimits

0x35de,	// (0x0003a50c) vkb2_cell_bottom_grid_pane

0x3617,	// (0x0003a545) vkb2_cell_bottom_grid_pane_g1

0xa6a0,	// (0x000415ce) aid_call2_pane_cp02

0xa6a8,	// (0x000415d6) aid_call_pane_cp02

0xa6b0,	// (0x000415de) clock_digital_number_pane_cp10

0xa6b8,	// (0x000415e6) clock_digital_number_pane_cp11

0xa6c0,	// (0x000415ee) clock_digital_number_pane_cp12

0xa6c8,	// (0x000415f6) clock_digital_number_pane_cp13

0xa6d0,	// (0x000415fe) clock_digital_separator_pane_cp10

0xc04e,	// (0x00042f7c) popup_clock_digital_analogue_window_cp2_g1

0xc04e,	// (0x00042f7c) popup_clock_digital_analogue_window_cp2_g2

0xa6d8,	// (0x00041606) popup_clock_digital_analogue_window_cp2_g3

0xc04e,	// (0x00042f7c) popup_clock_digital_analogue_window_cp2_g4

0xa6d8,	// (0x00041606) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd1c,	// (0x00046c4a) popup_clock_digital_analogue_window_cp2_g

0xa6e0,	// (0x0004160e) popup_clock_digital_analogue_window_cp2_t1

0xa6ee,	// (0x0004161c) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd27,	// (0x00046c55) popup_clock_digital_analogue_window_cp2_t

0xe833,	// (0x00045761) clock_digital_number_pane_cp10_g1

0xe833,	// (0x00045761) clock_digital_number_pane_cp10_g2

0x0001,

0x0091,	// (0x00036fbf) clock_digital_number_pane_cp10_g

0xe833,	// (0x00045761) clock_digital_separator_pane_cp10_g1

0xe833,	// (0x00045761) clock_digital_separator_pane_cp10_g2

0x0001,

0x0091,	// (0x00036fbf) clock_digital_separator_pane_cp10_g

0x50e2,	// (0x0003c010) uniindi_top_pane_g3

0x50f3,	// (0x0003c021) uniindi_top_pane_g4

0x33f1,	// (0x0003a31f) vkb2_row_keypad_pane_ParamLimits

0x33f1,	// (0x0003a31f) vkb2_row_keypad_pane

0x3633,	// (0x0003a561) vkb2_cell_t_keypad_pane_ParamLimits

0x3633,	// (0x0003a561) vkb2_cell_t_keypad_pane

0x3643,	// (0x0003a571) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x3643,	// (0x0003a571) vkb2_cell_t_keypad_pane_cp08

0x3656,	// (0x0003a584) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x3656,	// (0x0003a584) vkb2_cell_t_keypad_pane_cp09

0x366a,	// (0x0003a598) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x366a,	// (0x0003a598) vkb2_cell_t_keypad_pane_cp01

0x367b,	// (0x0003a5a9) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x367b,	// (0x0003a5a9) vkb2_cell_t_keypad_pane_cp02

0x368c,	// (0x0003a5ba) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x368c,	// (0x0003a5ba) vkb2_cell_t_keypad_pane_cp03

0x369d,	// (0x0003a5cb) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x369d,	// (0x0003a5cb) vkb2_cell_t_keypad_pane_cp04

0x36ae,	// (0x0003a5dc) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x36ae,	// (0x0003a5dc) vkb2_cell_t_keypad_pane_cp05

0x36bf,	// (0x0003a5ed) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x36bf,	// (0x0003a5ed) vkb2_cell_t_keypad_pane_cp06

0x36d0,	// (0x0003a5fe) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x36d0,	// (0x0003a5fe) vkb2_cell_t_keypad_pane_cp07

0x36e1,	// (0x0003a60f) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x36e1,	// (0x0003a60f) vkb2_cell_t_keypad_pane_cp10

0xe9da,	// (0x00045908) vkb2_cell_t_keypad_pane_g1

0x56c4,	// (0x0003c5f2) vkb2_cell_t_keypad_pane_t1

0xac10,	// (0x00041b3e) popup_grid_graphic2_window

0xaa30,	// (0x0004195e) aid_size_cell_graphic2_ParamLimits

0xaa30,	// (0x0004195e) aid_size_cell_graphic2

0xd038,	// (0x00043f66) bg_popup_window_pane_cp21_ParamLimits

0xd038,	// (0x00043f66) bg_popup_window_pane_cp21

0xaa62,	// (0x00041990) graphic2_pages_pane_ParamLimits

0xaa62,	// (0x00041990) graphic2_pages_pane

0xaab8,	// (0x000419e6) grid_graphic2_control_pane_ParamLimits

0xaab8,	// (0x000419e6) grid_graphic2_control_pane

0xaaec,	// (0x00041a1a) grid_graphic2_pane_ParamLimits

0xaaec,	// (0x00041a1a) grid_graphic2_pane

0xab5f,	// (0x00041a8d) cell_graphic2_pane

0xac10,	// (0x00041b3e) main_comp_mode_pane

0x4962,	// (0x0003b890) list_ai3_gene_pane_ParamLimits

0xa3e7,	// (0x00041315) bg_popup_window_pane_cp19_ParamLimits

0x4d38,	// (0x0003bc66) bg_touch_area_indi_pane_ParamLimits

0x4d38,	// (0x0003bc66) bg_touch_area_indi_pane

0x4d4e,	// (0x0003bc7c) bg_touch_area_indi_pane_cp01_ParamLimits

0x4d4e,	// (0x0003bc7c) bg_touch_area_indi_pane_cp01

0x4d64,	// (0x0003bc92) bg_touch_area_indi_pane_cp02_ParamLimits

0x4d64,	// (0x0003bc92) bg_touch_area_indi_pane_cp02

0x4d7c,	// (0x0003bcaa) bg_touch_area_indi_pane_cp03_ParamLimits

0x4d7c,	// (0x0003bcaa) bg_touch_area_indi_pane_cp03

0x4d96,	// (0x0003bcc4) popup_slider_window_g1_ParamLimits

0x4db2,	// (0x0003bce0) popup_slider_window_g2_ParamLimits

0x4dce,	// (0x0003bcfc) popup_slider_window_g3_ParamLimits

0xfcb1,	// (0x00046bdf) popup_slider_window_g_ParamLimits

0x4e2a,	// (0x0003bd58) popup_slider_window_t1_ParamLimits

0x4e9e,	// (0x0003bdcc) small_volume_slider_vertical_pane_ParamLimits

0xab5f,	// (0x00041a8d) cell_graphic2_pane_ParamLimits

0xabba,	// (0x00041ae8) bg_button_pane_cp10_ParamLimits

0xabba,	// (0x00041ae8) bg_button_pane_cp10

0xabcd,	// (0x00041afb) bg_button_pane_cp11_ParamLimits

0xabcd,	// (0x00041afb) bg_button_pane_cp11

0xabe0,	// (0x00041b0e) graphic2_pages_pane_g1_ParamLimits

0xabe0,	// (0x00041b0e) graphic2_pages_pane_g1

0xaca5,	// (0x00041bd3) graphic2_pages_pane_g2_ParamLimits

0xaca5,	// (0x00041bd3) graphic2_pages_pane_g2

0x0001,

0xfd75,	// (0x00046ca3) graphic2_pages_pane_g_ParamLimits

0xfd75,	// (0x00046ca3) graphic2_pages_pane_g

0xacbd,	// (0x00041beb) graphic2_pages_pane_t1_ParamLimits

0xacbd,	// (0x00041beb) graphic2_pages_pane_t1

0xacd5,	// (0x00041c03) cell_graphic2_control_pane_ParamLimits

0xacd5,	// (0x00041c03) cell_graphic2_control_pane

0xacef,	// (0x00041c1d) cell_graphic2_pane_g1_ParamLimits

0xacef,	// (0x00041c1d) cell_graphic2_pane_g1

0x8baf,	// (0x0003fadd) cell_graphic2_pane_g2_ParamLimits

0x8baf,	// (0x0003fadd) cell_graphic2_pane_g2

0xabfb,	// (0x00041b29) cell_graphic2_pane_g3_ParamLimits

0xabfb,	// (0x00041b29) cell_graphic2_pane_g3

0x8bbc,	// (0x0003faea) cell_graphic2_pane_g4_ParamLimits

0x8bbc,	// (0x0003faea) cell_graphic2_pane_g4

0xacfc,	// (0x00041c2a) cell_graphic2_pane_g5_ParamLimits

0xacfc,	// (0x00041c2a) cell_graphic2_pane_g5

0x0004,

0xfd7a,	// (0x00046ca8) cell_graphic2_pane_g_ParamLimits

0xfd7a,	// (0x00046ca8) cell_graphic2_pane_g

0xad1c,	// (0x00041c4a) cell_graphic2_pane_t1_ParamLimits

0xad1c,	// (0x00041c4a) cell_graphic2_pane_t1

0xd672,	// (0x000445a0) grid_highlight_pane_cp11_ParamLimits

0xd672,	// (0x000445a0) grid_highlight_pane_cp11

0xbb16,	// (0x00042a44) bg_button_pane_cp05

0xad33,	// (0x00041c61) cell_graphic2_control_pane_g1

0xe833,	// (0x00045761) bg_touch_area_indi_pane_g1

0x5943,	// (0x0003c871) aid_cmod_rocker_key_size

0x594d,	// (0x0003c87b) aid_cmode_itu_key_size

0x5957,	// (0x0003c885) main_cmode_video_pane

0x5961,	// (0x0003c88f) main_comp_mode_itu_pane

0x596d,	// (0x0003c89b) main_comp_mode_rocker_pane

0x5979,	// (0x0003c8a7) cell_cmode_rocker_pane_ParamLimits

0x5979,	// (0x0003c8a7) cell_cmode_rocker_pane

0x598b,	// (0x0003c8b9) cell_cmode_itu_pane_ParamLimits

0x598b,	// (0x0003c8b9) cell_cmode_itu_pane

0xbb16,	// (0x00042a44) bg_button_pane_cp06_ParamLimits

0xbb16,	// (0x00042a44) bg_button_pane_cp06

0xe9da,	// (0x00045908) cell_cmode_rocker_pane_g1_ParamLimits

0xe9da,	// (0x00045908) cell_cmode_rocker_pane_g1

0x4f42,	// (0x0003be70) cell_cmode_rocker_pane_g2_ParamLimits

0x4f42,	// (0x0003be70) cell_cmode_rocker_pane_g2

0x0001,

0xfd85,	// (0x00046cb3) cell_cmode_rocker_pane_g_ParamLimits

0xfd85,	// (0x00046cb3) cell_cmode_rocker_pane_g

0xac10,	// (0x00041b3e) bg_button_pane_cp07

0x59a0,	// (0x0003c8ce) cell_cmode_itu_pane_g1

0x59a9,	// (0x0003c8d7) cell_cmode_itu_pane_t1

0x59b7,	// (0x0003c8e5) cell_cmode_itu_pane_t2

0x0001,

0xfd8a,	// (0x00046cb8) cell_cmode_itu_pane_t

0x5165,	// (0x0003c093) aid_touch_ctrl_left

0x516d,	// (0x0003c09b) aid_touch_ctrl_right

0xac10,	// (0x00041b3e) compa_mode_pane

0xad40,	// (0x00041c6e) aid_cmod_rocker_key_size_cp

0xad4a,	// (0x00041c78) aid_cmode_itu_key_size_cp

0x59d9,	// (0x0003c907) compa_mode_pane_g1

0x59e1,	// (0x0003c90f) compa_mode_pane_g2

0x59e9,	// (0x0003c917) compa_mode_pane_g3

0x0002,

0xfd8f,	// (0x00046cbd) compa_mode_pane_g

0xad54,	// (0x00041c82) main_comp_mode_itu_pane_cp

0xad5c,	// (0x00041c8a) main_comp_mode_rocker_pane_cp

0xad64,	// (0x00041c92) cell_cmode_itu_pane_cp_ParamLimits

0xad64,	// (0x00041c92) cell_cmode_itu_pane_cp

0xad79,	// (0x00041ca7) cell_cmode_rocker_pane_cp_ParamLimits

0xad79,	// (0x00041ca7) cell_cmode_rocker_pane_cp

0xbb16,	// (0x00042a44) bg_button_pane_cp06_cp_ParamLimits

0xbb16,	// (0x00042a44) bg_button_pane_cp06_cp

0xe9da,	// (0x00045908) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xe9da,	// (0x00045908) cell_cmode_rocker_pane_g1_cp

0xe833,	// (0x00045761) cell_cmode_rocker_pane_g2_cp

0xac10,	// (0x00041b3e) bg_button_pane_cp07_cp

0xad8b,	// (0x00041cb9) cell_cmode_itu_pane_g1_cp

0xad94,	// (0x00041cc2) cell_cmode_itu_pane_t1_cp

0xad94,	// (0x00041cc2) cell_cmode_itu_pane_t2_cp

0x9a2e,	// (0x0004095c) settings_code_pane_cp2

0xac80,	// (0x00041bae) bg_popup_window_pane_cp3_ParamLimits

0xb822,	// (0x00042750) heading_pane_cp3_ParamLimits

0xb82e,	// (0x0004275c) listscroll_popup_graphic_pane_ParamLimits

0x2c1d,	// (0x00039b4b) fep_hwr_aid_pane_ParamLimits

0x30d0,	// (0x00039ffe) aid_touch_sctrl_top_ParamLimits

0x30dd,	// (0x0003a00b) sctrl_sk_top_pane_g1_ParamLimits

0xe9da,	// (0x00045908) sctrl_sk_top_pane_g2_ParamLimits

0xfcca,	// (0x00046bf8) sctrl_sk_top_pane_g_ParamLimits

0x30ea,	// (0x0003a018) sctrl_sk_top_pane_t1_ParamLimits

0x30d0,	// (0x00039ffe) aid_touch_sctrl_bottom_ParamLimits

0x30ea,	// (0x0003a018) sctrl_sk_bottom_pane_t1_ParamLimits

0x50ae,	// (0x0003bfdc) aid_area_touch_clock

0x8286,	// (0x0003f1b4) aid_vkb2_area_top_pane_cell_ParamLimits

0x8286,	// (0x0003f1b4) aid_vkb2_area_top_pane_cell

0x8331,	// (0x0003f25f) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x8331,	// (0x0003f25f) aid_vkb2_area_bottom_pane_cell

0x561d,	// (0x0003c54b) popup_char_count_window

0x5a36,	// (0x0003c964) popup_char_count_window_g1

0x5a3f,	// (0x0003c96d) popup_char_count_window_g2

0x5a48,	// (0x0003c976) popup_char_count_window_g3

0x0002,

0xfd96,	// (0x00046cc4) popup_char_count_window_g

0x5a51,	// (0x0003c97f) popup_char_count_window_t1

0x318e,	// (0x0003a0bc) popup_fep_char_preview_window_ParamLimits

0x318e,	// (0x0003a0bc) popup_fep_char_preview_window

0x82a6,	// (0x0003f1d4) vkb2_top_candi_pane_ParamLimits

0x82a6,	// (0x0003f1d4) vkb2_top_candi_pane

0xada2,	// (0x00041cd0) cell_vkb2_top_candi_pane_ParamLimits

0xada2,	// (0x00041cd0) cell_vkb2_top_candi_pane

0xd038,	// (0x00043f66) bg_popup_fep_char_preview_window_ParamLimits

0xd038,	// (0x00043f66) bg_popup_fep_char_preview_window

0x36f6,	// (0x0003a624) popup_fep_char_preview_window_t1_ParamLimits

0x36f6,	// (0x0003a624) popup_fep_char_preview_window_t1

0x5aac,	// (0x0003c9da) bg_popup_fep_char_preview_window_g1

0x5ab4,	// (0x0003c9e2) bg_popup_fep_char_preview_window_g2

0x5abc,	// (0x0003c9ea) bg_popup_fep_char_preview_window_g3

0x5ac4,	// (0x0003c9f2) bg_popup_fep_char_preview_window_g4

0x5acc,	// (0x0003c9fa) bg_popup_fep_char_preview_window_g5

0x3730,	// (0x0003a65e) bg_popup_fep_char_preview_window_g6

0x5ad4,	// (0x0003ca02) bg_popup_fep_char_preview_window_g7

0x5adc,	// (0x0003ca0a) bg_popup_fep_char_preview_window_g8

0x5ae4,	// (0x0003ca12) bg_popup_fep_char_preview_window_g9

0x0008,

0xfd9d,	// (0x00046ccb) bg_popup_fep_char_preview_window_g

0xe9da,	// (0x00045908) cell_vkb2_top_candi_pane_g1_ParamLimits

0xe9da,	// (0x00045908) cell_vkb2_top_candi_pane_g1

0xec19,	// (0x00045b47) cell_vkb2_top_candi_pane_g2_ParamLimits

0xec19,	// (0x00045b47) cell_vkb2_top_candi_pane_g2

0xec94,	// (0x00045bc2) cell_vkb2_top_candi_pane_g3_ParamLimits

0xec94,	// (0x00045bc2) cell_vkb2_top_candi_pane_g3

0x3738,	// (0x0003a666) cell_vkb2_top_candi_pane_g4_ParamLimits

0x3738,	// (0x0003a666) cell_vkb2_top_candi_pane_g4

0x5776,	// (0x0003c6a4) cell_vkb2_top_candi_pane_g5_ParamLimits

0x5776,	// (0x0003c6a4) cell_vkb2_top_candi_pane_g5

0x4f42,	// (0x0003be70) cell_vkb2_top_candi_pane_g6_ParamLimits

0x4f42,	// (0x0003be70) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdb0,	// (0x00046cde) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdb0,	// (0x00046cde) cell_vkb2_top_candi_pane_g

0x3759,	// (0x0003a687) cell_vkb2_top_candi_pane_t1

0x2975,	// (0x000398a3) aid_size_touch_slider_mark_ParamLimits

0x2975,	// (0x000398a3) aid_size_touch_slider_mark

0xaa9e,	// (0x000419cc) grid_graphic2_catg_pane_ParamLimits

0xaa9e,	// (0x000419cc) grid_graphic2_catg_pane

0xab32,	// (0x00041a60) popup_grid_graphic2_window_t1_ParamLimits

0xab32,	// (0x00041a60) popup_grid_graphic2_window_t1

0xab48,	// (0x00041a76) popup_grid_graphic2_window_t2_ParamLimits

0xab48,	// (0x00041a76) popup_grid_graphic2_window_t2

0x0001,

0xfd70,	// (0x00046c9e) popup_grid_graphic2_window_t_ParamLimits

0xfd70,	// (0x00046c9e) popup_grid_graphic2_window_t

0xbb16,	// (0x00042a44) bg_button_pane_cp05_ParamLimits

0xad33,	// (0x00041c61) cell_graphic2_control_pane_g1_ParamLimits

0xae08,	// (0x00041d36) cell_graphic2_catg_pane_ParamLimits

0xae08,	// (0x00041d36) cell_graphic2_catg_pane

0xac10,	// (0x00041b3e) bg_button_pane_cp12

0xae1a,	// (0x00041d48) cell_graphic2_catg_pane_g1

0x507a,	// (0x0003bfa8) cell_tb_ext_pane_t1_ParamLimits

0x3530,	// (0x0003a45e) vkb2_top_cell_right_narrow_pane_ParamLimits

0x3530,	// (0x0003a45e) vkb2_top_cell_right_narrow_pane

0x3548,	// (0x0003a476) vkb2_top_cell_right_wide_pane_ParamLimits

0x3548,	// (0x0003a476) vkb2_top_cell_right_wide_pane

0xe1d8,	// (0x00045106) bg_vkb2_func_pane_ParamLimits

0xe1d8,	// (0x00045106) bg_vkb2_func_pane

0x35b9,	// (0x0003a4e7) vkb2_top_cell_left_pane_g1_ParamLimits

0xe1d8,	// (0x00045106) bg_vkb2_fuc_pane_cp03_ParamLimits

0xe1d8,	// (0x00045106) bg_vkb2_fuc_pane_cp03

0x3617,	// (0x0003a545) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0xca89,	// (0x000439b7) bg_vkb2_func_pane_g1

0xca91,	// (0x000439bf) bg_vkb2_func_pane_g2

0xcaa1,	// (0x000439cf) bg_vkb2_func_pane_g3

0xca99,	// (0x000439c7) bg_vkb2_func_pane_g4

0xcaa9,	// (0x000439d7) bg_vkb2_func_pane_g5

0xcab1,	// (0x000439df) bg_vkb2_func_pane_g6

0xcab9,	// (0x000439e7) bg_vkb2_func_pane_g7

0xcac1,	// (0x000439ef) bg_vkb2_func_pane_g8

0xca81,	// (0x000439af) bg_vkb2_func_pane_g9

0x0008,

0xfdbd,	// (0x00046ceb) bg_vkb2_func_pane_g

0xe1d8,	// (0x00045106) bg_vkb2_fuc_pane_cp01_ParamLimits

0xe1d8,	// (0x00045106) bg_vkb2_fuc_pane_cp01

0x35b9,	// (0x0003a4e7) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x35b9,	// (0x0003a4e7) vkb2_top_cell_right_wide_pane_g1

0xe1d8,	// (0x00045106) bg_vkb2_fuc_pane_cp02_ParamLimits

0xe1d8,	// (0x00045106) bg_vkb2_fuc_pane_cp02

0x3617,	// (0x0003a545) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x3617,	// (0x0003a545) vkb2_top_cell_right_narrow_pane_g1

0xa327,	// (0x00041255) aid_touch_area_decrease_ParamLimits

0xa327,	// (0x00041255) aid_touch_area_decrease

0xa35b,	// (0x00041289) aid_touch_area_increase_ParamLimits

0xa35b,	// (0x00041289) aid_touch_area_increase

0xa383,	// (0x000412b1) aid_touch_area_mute_ParamLimits

0xa383,	// (0x000412b1) aid_touch_area_mute

0xa3b3,	// (0x000412e1) aid_touch_area_slider_ParamLimits

0xa3b3,	// (0x000412e1) aid_touch_area_slider

0xa3f3,	// (0x00041321) popup_slider_window_g4_ParamLimits

0xa3f3,	// (0x00041321) popup_slider_window_g4

0xa41b,	// (0x00041349) popup_slider_window_g5_ParamLimits

0xa41b,	// (0x00041349) popup_slider_window_g5

0xa44f,	// (0x0004137d) popup_slider_window_g6_ParamLimits

0xa44f,	// (0x0004137d) popup_slider_window_g6

0x4e58,	// (0x0003bd86) popup_slider_window_t2_ParamLimits

0x4e58,	// (0x0003bd86) popup_slider_window_t2

0x0001,

0xfcbe,	// (0x00046bec) popup_slider_window_t_ParamLimits

0xfcbe,	// (0x00046bec) popup_slider_window_t

0xa46b,	// (0x00041399) slider_pane_ParamLimits

0xa46b,	// (0x00041399) slider_pane

0x5b07,	// (0x0003ca35) slider_pane_g1_ParamLimits

0x5b07,	// (0x0003ca35) slider_pane_g1

0x5b1b,	// (0x0003ca49) slider_pane_g2_ParamLimits

0x5b1b,	// (0x0003ca49) slider_pane_g2

0x5b31,	// (0x0003ca5f) slider_pane_g3_ParamLimits

0x5b31,	// (0x0003ca5f) slider_pane_g3

0x0003,

0xfdd0,	// (0x00046cfe) slider_pane_g_ParamLimits

0xfdd0,	// (0x00046cfe) slider_pane_g

0x91fa,	// (0x00040128) popup_tb_float_extension_window_ParamLimits

0x91fa,	// (0x00040128) popup_tb_float_extension_window

0x5b5d,	// (0x0003ca8b) aid_size_cell_tb_float_ext

0xac10,	// (0x00041b3e) bg_popup_sub_window_cp28

0x5b69,	// (0x0003ca97) grid_tb_float_ext_pane

0x5b73,	// (0x0003caa1) cell_tb_float_ext_pane_ParamLimits

0x5b73,	// (0x0003caa1) cell_tb_float_ext_pane

0x5b8d,	// (0x0003cabb) cell_tb_float_ext_pane_g1

0x5b96,	// (0x0003cac4) grid_highlight_pane_cp12

0x8017,	// (0x0003ef45) cell_last_hwr_side_pane_ParamLimits

0x8017,	// (0x0003ef45) cell_last_hwr_side_pane

0xe833,	// (0x00045761) cell_last_hwr_side_pane_g1

0x5b9f,	// (0x0003cacd) cell_last_hwr_side_pane_g2

0x0001,

0xfdd9,	// (0x00046d07) cell_last_hwr_side_pane_g

0x840d,	// (0x0003f33b) vkb2_area_bottom_space_btn_pane_ParamLimits

0x840d,	// (0x0003f33b) vkb2_area_bottom_space_btn_pane

0xe9da,	// (0x00045908) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x56c4,	// (0x0003c5f2) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x3759,	// (0x0003a687) cell_vkb2_top_candi_pane_t1_ParamLimits

0x3778,	// (0x0003a6a6) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x3778,	// (0x0003a6a6) vkb2_area_bottom_space_btn_pane_g1

0x37b2,	// (0x0003a6e0) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x37b2,	// (0x0003a6e0) vkb2_area_bottom_space_btn_pane_g2

0x37e8,	// (0x0003a716) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x37e8,	// (0x0003a716) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfdde,	// (0x00046d0c) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfdde,	// (0x00046d0c) vkb2_area_bottom_space_btn_pane_g

0x2cc4,	// (0x00039bf2) cel_fep_hwr_func_pane_ParamLimits

0x2cc4,	// (0x00039bf2) cel_fep_hwr_func_pane

0x7fec,	// (0x0003ef1a) cell_hwr_side_button_pane_ParamLimits

0x7fec,	// (0x0003ef1a) cell_hwr_side_button_pane

0x50ae,	// (0x0003bfdc) aid_area_touch_clock_ParamLimits

0xb26f,	// (0x0004219d) bg_uniindi_top_pane_ParamLimits

0x50c0,	// (0x0003bfee) uniindi_top_pane_g1_ParamLimits

0x50d6,	// (0x0003c004) uniindi_top_pane_g2_ParamLimits

0x50e2,	// (0x0003c010) uniindi_top_pane_g3_ParamLimits

0x50f3,	// (0x0003c021) uniindi_top_pane_g4_ParamLimits

0xfcf6,	// (0x00046c24) uniindi_top_pane_g_ParamLimits

0x5100,	// (0x0003c02e) uniindi_top_pane_t1_ParamLimits

0xb26f,	// (0x0004219d) bg_vkb2_func_pane_cp01_ParamLimits

0xb26f,	// (0x0004219d) bg_vkb2_func_pane_cp01

0x5ba8,	// (0x0003cad6) cel_fep_hwr_func_pane_g1_ParamLimits

0x5ba8,	// (0x0003cad6) cel_fep_hwr_func_pane_g1

0xb26f,	// (0x0004219d) bg_vkb2_func_pane_cp02_ParamLimits

0xb26f,	// (0x0004219d) bg_vkb2_func_pane_cp02

0x5ba8,	// (0x0003cad6) cell_hwr_side_button_pane_g1_ParamLimits

0x5ba8,	// (0x0003cad6) cell_hwr_side_button_pane_g1

0xc997,	// (0x000438c5) status_pane_g4_ParamLimits

0xc997,	// (0x000438c5) status_pane_g4

0xc9b1,	// (0x000438df) status_pane_t1

0xe6b8,	// (0x000455e6) form2_midp_gauge_slider_cont_pane

0xe6c0,	// (0x000455ee) form2_midp_gauge_slider_pane_t1_ParamLimits

0x9d25,	// (0x00040c53) form2_midp_gauge_slider_pane_t2_ParamLimits

0x9d37,	// (0x00040c65) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb00,	// (0x00046a2e) form2_midp_gauge_slider_pane_t_ParamLimits

0xe6d2,	// (0x00045600) form2_midp_slider_pane_ParamLimits

0x314e,	// (0x0003a07c) aid_size_cell_func_vkb2_ParamLimits

0x314e,	// (0x0003a07c) aid_size_cell_func_vkb2

0x5b49,	// (0x0003ca77) slider_pane_g4_ParamLimits

0x5b49,	// (0x0003ca77) slider_pane_g4

0x846e,	// (0x0003f39c) form2_midp_gauge_slider_pane_t2_cp01

0x847c,	// (0x0003f3aa) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x847c,	// (0x0003f3aa) form2_midp_gauge_slider_pane_t3_cp01

0x385d,	// (0x0003a78b) form2_midp_slider_pane_cp01

0xac10,	// (0x00041b3e) navi_smil_pane

0x5bd8,	// (0x0003cb06) navi_smil_pane_g1

0x5be0,	// (0x0003cb0e) navi_smil_pane_t1

0x5bb6,	// (0x0003cae4) form2_midp_slider_pane_g1

0x5bbf,	// (0x0003caed) form2_midp_slider_pane_g2

0x5bc7,	// (0x0003caf5) form2_midp_slider_pane_g3

0x5bb6,	// (0x0003cae4) form2_midp_slider_pane_g4

0xae23,	// (0x00041d51) form2_midp_slider_pane_g5

0x0004,

0xfde7,	// (0x00046d15) form2_midp_slider_pane_g

0x3822,	// (0x0003a750) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x3822,	// (0x0003a750) vkb2_area_bottom_space_btn_pane_g4

0x93d6,	// (0x00040304) lc0_navi_pane_ParamLimits

0x93d6,	// (0x00040304) lc0_navi_pane

0x9440,	// (0x0004036e) lc0_stat_indi_pane_ParamLimits

0x9440,	// (0x0004036e) lc0_stat_indi_pane

0x9455,	// (0x00040383) ls0_title_pane_ParamLimits

0x9455,	// (0x00040383) ls0_title_pane

0xbb16,	// (0x00042a44) bg_popup_sub_pane_cp14_ParamLimits

0x5095,	// (0x0003bfc3) list_uniindi_pane_ParamLimits

0x50a1,	// (0x0003bfcf) uniindi_top_pane_ParamLimits

0x513d,	// (0x0003c06b) list_single_uniindi_pane_g1_ParamLimits

0x5150,	// (0x0003c07e) list_single_uniindi_pane_t1_ParamLimits

0x8499,	// (0x0003f3c7) lc0_stat_clock_pane_ParamLimits

0x8499,	// (0x0003f3c7) lc0_stat_clock_pane

0xae2c,	// (0x00041d5a) lc0_stat_indi_pane_g1_ParamLimits

0xae2c,	// (0x00041d5a) lc0_stat_indi_pane_g1

0xae39,	// (0x00041d67) lc0_stat_indi_pane_g2_ParamLimits

0xae39,	// (0x00041d67) lc0_stat_indi_pane_g2

0x0001,

0xfdf2,	// (0x00046d20) lc0_stat_indi_pane_g_ParamLimits

0xfdf2,	// (0x00046d20) lc0_stat_indi_pane_g

0x84a6,	// (0x0003f3d4) lc0_uni_indicator_pane_ParamLimits

0x84a6,	// (0x0003f3d4) lc0_uni_indicator_pane

0x5bee,	// (0x0003cb1c) ls0_title_pane_g1_ParamLimits

0x5bee,	// (0x0003cb1c) ls0_title_pane_g1

0xae46,	// (0x00041d74) ls0_title_pane_t1_ParamLimits

0xae46,	// (0x00041d74) ls0_title_pane_t1

0x84b3,	// (0x0003f3e1) lc0_uni_indicator_pane_g1_ParamLimits

0x84b3,	// (0x0003f3e1) lc0_uni_indicator_pane_g1

0x5c02,	// (0x0003cb30) lc0_stat_clock_pane_t1

0xac10,	// (0x00041b3e) main_ai5_pane

0x5c10,	// (0x0003cb3e) ai5_sk_pane_ParamLimits

0x5c10,	// (0x0003cb3e) ai5_sk_pane

0xae74,	// (0x00041da2) cell_ai5_widget_pane_ParamLimits

0xae74,	// (0x00041da2) cell_ai5_widget_pane

0x5c1d,	// (0x0003cb4b) aid_size_cell_widget_grid

0x5c2f,	// (0x0003cb5d) bg_ai5_widget_pane_ParamLimits

0x5c2f,	// (0x0003cb5d) bg_ai5_widget_pane

0xaefd,	// (0x00041e2b) cell_ai5_widget_pane_g2

0xaf0d,	// (0x00041e3b) cell_ai5_widget_pane_g3

0xaf21,	// (0x00041e4f) cell_ai5_widget_pane_g4

0xaf2d,	// (0x00041e5b) cell_ai5_widget_pane_g5

0xaf39,	// (0x00041e67) cell_ai5_widget_pane_g6

0xaf45,	// (0x00041e73) cell_ai5_widget_pane_g7

0xaf8d,	// (0x00041ebb) cell_ai5_widget_pane_t1_ParamLimits

0xaf8d,	// (0x00041ebb) cell_ai5_widget_pane_t1

0xafaa,	// (0x00041ed8) cell_ai5_widget_pane_t2_ParamLimits

0xafaa,	// (0x00041ed8) cell_ai5_widget_pane_t2

0xafc2,	// (0x00041ef0) cell_ai5_widget_pane_t3_ParamLimits

0xafc2,	// (0x00041ef0) cell_ai5_widget_pane_t3

0xafda,	// (0x00041f08) cell_ai5_widget_pane_t4_ParamLimits

0xafda,	// (0x00041f08) cell_ai5_widget_pane_t4

0xaff4,	// (0x00041f22) cell_ai5_widget_pane_t5_ParamLimits

0xaff4,	// (0x00041f22) cell_ai5_widget_pane_t5

0x5c3b,	// (0x0003cb69) cell_ai5_widget_pane_t6_ParamLimits

0x5c3b,	// (0x0003cb69) cell_ai5_widget_pane_t6

0x5c4d,	// (0x0003cb7b) cell_ai5_widget_pane_t7_ParamLimits

0x5c4d,	// (0x0003cb7b) cell_ai5_widget_pane_t7

0xb013,	// (0x00041f41) cell_ai5_widget_pane_t8_ParamLimits

0xb013,	// (0x00041f41) cell_ai5_widget_pane_t8

0x0009,

0xfe0c,	// (0x00046d3a) cell_ai5_widget_pane_t_ParamLimits

0xfe0c,	// (0x00046d3a) cell_ai5_widget_pane_t

0xb05b,	// (0x00041f89) grid_ai5_widget_pane

0xbb16,	// (0x00042a44) highlight_cell_ai5_widget_pane_ParamLimits

0xbb16,	// (0x00042a44) highlight_cell_ai5_widget_pane

0xb073,	// (0x00041fa1) ai5_sk_left_pane

0xb07d,	// (0x00041fab) ai5_sk_middle_pane

0xb087,	// (0x00041fb5) ai5_sk_right_pane

0x5c66,	// (0x0003cb94) bg_ai5_widget_pane_g1_ParamLimits

0x5c66,	// (0x0003cb94) bg_ai5_widget_pane_g1

0x5c72,	// (0x0003cba0) bg_ai5_widget_pane_g2_ParamLimits

0x5c72,	// (0x0003cba0) bg_ai5_widget_pane_g2

0x5c7e,	// (0x0003cbac) bg_ai5_widget_pane_g3_ParamLimits

0x5c7e,	// (0x0003cbac) bg_ai5_widget_pane_g3

0x5c8a,	// (0x0003cbb8) bg_ai5_widget_pane_g4_ParamLimits

0x5c8a,	// (0x0003cbb8) bg_ai5_widget_pane_g4

0x5c96,	// (0x0003cbc4) bg_ai5_widget_pane_g5_ParamLimits

0x5c96,	// (0x0003cbc4) bg_ai5_widget_pane_g5

0x5ca2,	// (0x0003cbd0) bg_ai5_widget_pane_g6_ParamLimits

0x5ca2,	// (0x0003cbd0) bg_ai5_widget_pane_g6

0x5cae,	// (0x0003cbdc) bg_ai5_widget_pane_g7_ParamLimits

0x5cae,	// (0x0003cbdc) bg_ai5_widget_pane_g7

0x5cba,	// (0x0003cbe8) bg_ai5_widget_pane_g8_ParamLimits

0x5cba,	// (0x0003cbe8) bg_ai5_widget_pane_g8

0x5cc6,	// (0x0003cbf4) bg_ai5_widget_pane_g9_ParamLimits

0x5cc6,	// (0x0003cbf4) bg_ai5_widget_pane_g9

0x0008,

0xfe21,	// (0x00046d4f) bg_ai5_widget_pane_g_ParamLimits

0xfe21,	// (0x00046d4f) bg_ai5_widget_pane_g

0x5cd2,	// (0x0003cc00) cell_shortcut_ai5_widget_pane_ParamLimits

0x5cd2,	// (0x0003cc00) cell_shortcut_ai5_widget_pane

0xb178,	// (0x000420a6) bg_cell_shortcut_ai5_widget_pane

0x5ce4,	// (0x0003cc12) cell_grid_ai5_widget_pane_g1

0x5ced,	// (0x0003cc1b) highlight_cell_shortcut_ai5_widget_pane

0xca91,	// (0x000439bf) ai5_sk_left_pane_g1

0x5cf5,	// (0x0003cc23) ai5_sk_left_pane_g2

0x5cfd,	// (0x0003cc2b) ai5_sk_left_pane_g3

0x5d05,	// (0x0003cc33) ai5_sk_left_pane_g4

0x0003,

0xfe34,	// (0x00046d62) ai5_sk_left_pane_g

0x5d0d,	// (0x0003cc3b) ai5_sk_left_pane_t1

0xca89,	// (0x000439b7) ai5_sk_right_pane_g1

0x5d1b,	// (0x0003cc49) ai5_sk_right_pane_g2

0x5d23,	// (0x0003cc51) ai5_sk_right_pane_g3

0x5d2b,	// (0x0003cc59) ai5_sk_right_pane_g4

0x0003,

0xfe3d,	// (0x00046d6b) ai5_sk_right_pane_g

0x5d33,	// (0x0003cc61) ai5_sk_right_pane_t1

0xca89,	// (0x000439b7) ai5_sk_middle_pane_g1

0xca91,	// (0x000439bf) ai5_sk_middle_pane_g2

0xcaa9,	// (0x000439d7) ai5_sk_middle_pane_g3

0x5d23,	// (0x0003cc51) ai5_sk_middle_pane_g4

0x5cfd,	// (0x0003cc2b) ai5_sk_middle_pane_g5

0x5d41,	// (0x0003cc6f) ai5_sk_middle_pane_g6

0xb0ae,	// (0x00041fdc) ai5_sk_middle_pane_g7

0x0006,

0xfe46,	// (0x00046d74) ai5_sk_middle_pane_g

0x92c2,	// (0x000401f0) aid_touch_area_size_lc0_ParamLimits

0x92c2,	// (0x000401f0) aid_touch_area_size_lc0

0x2e4f,	// (0x00039d7d) cell_hwr_candidate_pane_t1_ParamLimits

0xc8b9,	// (0x000437e7) aid_touch_navi_pane

0x9547,	// (0x00040475) status_dt_navi_pane_ParamLimits

0x9547,	// (0x00040475) status_dt_navi_pane

0x955f,	// (0x0004048d) status_dt_sta_pane_ParamLimits

0x955f,	// (0x0004048d) status_dt_sta_pane

0xb0b6,	// (0x00041fe4) dt_sta_controll_pane

0xb0c3,	// (0x00041ff1) dt_sta_indi_pane

0xb0d0,	// (0x00041ffe) dt_sta_title_pane

0xb26f,	// (0x0004219d) bg_dt_sta_indi_pane_ParamLimits

0xb26f,	// (0x0004219d) bg_dt_sta_indi_pane

0x5d49,	// (0x0003cc77) dt_sta_battery_pane

0xb0e2,	// (0x00042010) dt_sta_indi_pane_g1

0xb0eb,	// (0x00042019) dt_sta_indi_pane_g2

0xb0f4,	// (0x00042022) dt_sta_indi_pane_g3

0x0002,

0xfe55,	// (0x00046d83) dt_sta_indi_pane_g

0xb0fd,	// (0x0004202b) dt_sta_signal_pane

0xbb16,	// (0x00042a44) bg_dt_sta_title_pane_ParamLimits

0xbb16,	// (0x00042a44) bg_dt_sta_title_pane

0xd762,	// (0x00044690) dt_sta_title_pane_g1

0xb106,	// (0x00042034) dt_sta_title_pane_t1_ParamLimits

0xb106,	// (0x00042034) dt_sta_title_pane_t1

0xac10,	// (0x00041b3e) bg_dt_sta_control_pane

0xb11b,	// (0x00042049) dt_sta_controll_pane_g1

0xb124,	// (0x00042052) bg_dt_sta_title_pane_g1

0xb12d,	// (0x0004205b) bg_dt_sta_title_pane_g2

0xb136,	// (0x00042064) bg_dt_sta_title_pane_g3

0x0002,

0xfe5c,	// (0x00046d8a) bg_dt_sta_title_pane_g

0xe833,	// (0x00045761) bg_dt_sta_indi_pane_g1

0x5d51,	// (0x0003cc7f) dt_sta_signal_pane_g1

0x5d59,	// (0x0003cc87) dt_sta_signal_pane_g2

0x0001,

0xfe63,	// (0x00046d91) dt_sta_signal_pane_g

0x5d61,	// (0x0003cc8f) dt_sta_battery_pane_g1

0x5d6a,	// (0x0003cc98) dt_sta_battery_pane_t1

0xe833,	// (0x00045761) bg_dt_sta_control_pane_g1

0xc0cc,	// (0x00042ffa) fep_china_uni_eep_pane

0xc0d4,	// (0x00043002) fep_china_uni_entry_pane_ParamLimits

0xc0e4,	// (0x00043012) popup_fep_china_uni_window_g1_ParamLimits

0xc0f4,	// (0x00043022) popup_fep_china_uni_window_g2_ParamLimits

0xc0f4,	// (0x00043022) popup_fep_china_uni_window_g2

0x0001,

0xf758,	// (0x00046686) popup_fep_china_uni_window_g_ParamLimits

0xf758,	// (0x00046686) popup_fep_china_uni_window_g

0x5d79,	// (0x0003cca7) fep_china_uni_eep_pane_g1

0x5d81,	// (0x0003ccaf) fep_china_uni_eep_pane_t1

0x5bcf,	// (0x0003cafd) aid_touch_area_size_smil_player

0xc96a,	// (0x00043898) lc0_clock_pane

0xc9a5,	// (0x000438d3) status_pane_g5_ParamLimits

0xc9a5,	// (0x000438d3) status_pane_g5

0x8da0,	// (0x0003fcce) popup_keymap_window

0xc983,	// (0x000438b1) status_icon_pane

0xaf0d,	// (0x00041e3b) cell_ai5_widget_pane_g3_ParamLimits

0xaf21,	// (0x00041e4f) cell_ai5_widget_pane_g4_ParamLimits

0xaf2d,	// (0x00041e5b) cell_ai5_widget_pane_g5_ParamLimits

0xaf51,	// (0x00041e7f) cell_ai5_widget_pane_g8_ParamLimits

0xaf51,	// (0x00041e7f) cell_ai5_widget_pane_g8

0xaf65,	// (0x00041e93) cell_ai5_widget_pane_g9_ParamLimits

0xaf65,	// (0x00041e93) cell_ai5_widget_pane_g9

0xaf79,	// (0x00041ea7) cell_ai5_widget_pane_g10_ParamLimits

0xaf79,	// (0x00041ea7) cell_ai5_widget_pane_g10

0x5d90,	// (0x0003ccbe) status_icon_pane_g1

0xac10,	// (0x00041b3e) bg_popup_sub_pane_cp13

0x5d98,	// (0x0003ccc6) popup_keymap_window_t1

0x8bc9,	// (0x0003faf7) control_pane_g6_ParamLimits

0x8bc9,	// (0x0003faf7) control_pane_g6

0x8b95,	// (0x0003fac3) control_pane_g7_ParamLimits

0x8b95,	// (0x0003fac3) control_pane_g7

0x8ba2,	// (0x0003fad0) control_pane_g8_ParamLimits

0x8ba2,	// (0x0003fad0) control_pane_g8

0xb0b6,	// (0x00041fe4) dt_sta_controll_pane_ParamLimits

0xb0c3,	// (0x00041ff1) dt_sta_indi_pane_ParamLimits

0xb0d0,	// (0x00041ffe) dt_sta_title_pane_ParamLimits

0xba58,	// (0x00042986) aid_size_touch_scroll_bar_cale

0x1456,	// (0x00038384) popup_discreet_window_ParamLimits

0x1456,	// (0x00038384) popup_discreet_window

0x7c19,	// (0x0003eb47) popup_sk_window

0xd038,	// (0x00043f66) bg_popup_sub_pane_cp28_ParamLimits

0xd038,	// (0x00043f66) bg_popup_sub_pane_cp28

0x5da6,	// (0x0003ccd4) popup_discreet_window_g1_ParamLimits

0x5da6,	// (0x0003ccd4) popup_discreet_window_g1

0x5e97,	// (0x0003cdc5) popup_discreet_window_t1_ParamLimits

0x5e97,	// (0x0003cdc5) popup_discreet_window_t1

0x5eb5,	// (0x0003cde3) popup_discreet_window_t2_ParamLimits

0x5eb5,	// (0x0003cde3) popup_discreet_window_t2

0x0002,

0xfe68,	// (0x00046d96) popup_discreet_window_t_ParamLimits

0xfe68,	// (0x00046d96) popup_discreet_window_t

0x3894,	// (0x0003a7c2) popup_sk_window_g1

0x389e,	// (0x0003a7cc) popup_sk_window_g2

0x0001,

0xfe6f,	// (0x00046d9d) popup_sk_window_g

0x5f07,	// (0x0003ce35) popup_sk_window_t1

0x5f15,	// (0x0003ce43) popup_sk_window_t1_copy1

0xaefd,	// (0x00041e2b) cell_ai5_widget_pane_g2_ParamLimits

0xb025,	// (0x00041f53) cell_ai5_widget_pane_t9_ParamLimits

0xb025,	// (0x00041f53) cell_ai5_widget_pane_t9

0xac10,	// (0x00041b3e) main_fep_fshwr2_pane

0xb13f,	// (0x0004206d) aid_fshwr2_btn_pane

0xb147,	// (0x00042075) aid_fshwr2_syb_pane

0xb14f,	// (0x0004207d) aid_fshwr2_txt_pane

0xb157,	// (0x00042085) fshwr2_func_candi_pane

0xb2f3,	// (0x00042221) fshwr2_hwr_syb_pane

0xb301,	// (0x0004222f) fshwr2_icf_pane

0xac10,	// (0x00041b3e) fshwr2_icf_bg_pane

0xb30b,	// (0x00042239) fshwr2_icf_pane_t1_ParamLimits

0xb30b,	// (0x00042239) fshwr2_icf_pane_t1

0xe833,	// (0x00045761) fshwr2_func_candi_pane_g1

0x5f37,	// (0x0003ce65) fshwr2_func_candi_row_pane_ParamLimits

0x5f37,	// (0x0003ce65) fshwr2_func_candi_row_pane

0xb323,	// (0x00042251) cell_fshwr2_syb_pane_ParamLimits

0xb323,	// (0x00042251) cell_fshwr2_syb_pane

0xe9da,	// (0x00045908) fshwr2_hwr_syb_pane_g1_ParamLimits

0xe9da,	// (0x00045908) fshwr2_hwr_syb_pane_g1

0xac10,	// (0x00041b3e) bg_popup_call_pane_cp01

0x5f48,	// (0x0003ce76) fshwr2_func_candi_cell_pane_ParamLimits

0x5f48,	// (0x0003ce76) fshwr2_func_candi_cell_pane

0x5f79,	// (0x0003cea7) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x5f79,	// (0x0003cea7) fshwr2_func_candi_cell_bg_pane

0x5f93,	// (0x0003cec1) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x5f93,	// (0x0003cec1) fshwr2_func_candi_cell_pane_g1

0x5fbb,	// (0x0003cee9) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x5fbb,	// (0x0003cee9) fshwr2_func_candi_cell_pane_t1

0xac10,	// (0x00041b3e) bg_button_pane_cp08

0xc53b,	// (0x00043469) cell_fshwr2_syb_bg_pane

0xb33d,	// (0x0004226b) cell_fshwr2_syb_bg_pane_g1

0xb345,	// (0x00042273) cell_fshwr2_syb_bg_pane_t1

0xbb16,	// (0x00042a44) main_tmo_pane

0x985f,	// (0x0004078d) uni_indicator_pane_g1_ParamLimits

0x9874,	// (0x000407a2) uni_indicator_pane_g2_ParamLimits

0x9889,	// (0x000407b7) uni_indicator_pane_g3_ParamLimits

0xda58,	// (0x00044986) uni_indicator_pane_g4_ParamLimits

0xda58,	// (0x00044986) uni_indicator_pane_g4

0xda6c,	// (0x0004499a) uni_indicator_pane_g5_ParamLimits

0xda6c,	// (0x0004499a) uni_indicator_pane_g5

0xda80,	// (0x000449ae) uni_indicator_pane_g6_ParamLimits

0xda80,	// (0x000449ae) uni_indicator_pane_g6

0xf949,	// (0x00046877) uni_indicator_pane_g_ParamLimits

0xa303,	// (0x00041231) popup_tmo_note_window_ParamLimits

0xa303,	// (0x00041231) popup_tmo_note_window

0xac10,	// (0x00041b3e) fshwr2_bg_pane

0x5fac,	// (0x0003ceda) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x5fac,	// (0x0003ceda) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe74,	// (0x00046da2) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe74,	// (0x00046da2) fshwr2_func_candi_cell_pane_g

0xe833,	// (0x00045761) bg_popup_window_pane_cp01

0x5fce,	// (0x0003cefc) bg_popup_window_pane_g1_cp01

0x5fd7,	// (0x0003cf05) bg_popup_window_pane_cp22_ParamLimits

0x5fd7,	// (0x0003cf05) bg_popup_window_pane_cp22

0x5fe5,	// (0x0003cf13) listscroll_tmo_link_pane_ParamLimits

0x5fe5,	// (0x0003cf13) listscroll_tmo_link_pane

0x6025,	// (0x0003cf53) popup_tmo_note_window_g1_ParamLimits

0x6025,	// (0x0003cf53) popup_tmo_note_window_g1

0x6032,	// (0x0003cf60) tmo_note_info_pane_ParamLimits

0x6032,	// (0x0003cf60) tmo_note_info_pane

0xb354,	// (0x00042282) list_tmo_note_info_pane_g1_ParamLimits

0xb354,	// (0x00042282) list_tmo_note_info_pane_g1

0x604c,	// (0x0003cf7a) list_tmo_note_info_pane_g2_ParamLimits

0x604c,	// (0x0003cf7a) list_tmo_note_info_pane_g2

0x0001,

0xfe79,	// (0x00046da7) list_tmo_note_info_pane_g_ParamLimits

0xfe79,	// (0x00046da7) list_tmo_note_info_pane_g

0x6068,	// (0x0003cf96) list_tmo_note_info_text_pane_ParamLimits

0x6068,	// (0x0003cf96) list_tmo_note_info_text_pane

0x60aa,	// (0x0003cfd8) list_tmo_link_pane

0x60b7,	// (0x0003cfe5) scroll_pane_cp20

0x60c4,	// (0x0003cff2) list_single_tmo_link_pane_ParamLimits

0x60c4,	// (0x0003cff2) list_single_tmo_link_pane

0x60d4,	// (0x0003d002) list_single_tmo_link_pane_t1

0x60e2,	// (0x0003d010) list_tmo_note_info_text_pane_t1_ParamLimits

0x60e2,	// (0x0003d010) list_tmo_note_info_text_pane_t1

0x8890,	// (0x0003f7be) aid_size_touch_scroll_bar_cp01_ParamLimits

0x8890,	// (0x0003f7be) aid_size_touch_scroll_bar_cp01

0x77d0,	// (0x0003e6fe) aid_size_touch_slider_marker

0x7c09,	// (0x0003eb37) popup_settings_window_ParamLimits

0x7c09,	// (0x0003eb37) popup_settings_window

0x0b9c,	// (0x00037aca) popup_candi_list_indi_window

0xc8b9,	// (0x000437e7) aid_touch_navi_pane_ParamLimits

0x30a4,	// (0x00039fd2) rs_clock_indi_pane

0x30ad,	// (0x00039fdb) sctrl_sk_bottom_pane_ParamLimits

0x30be,	// (0x00039fec) sctrl_sk_top_pane_ParamLimits

0x31a8,	// (0x0003a0d6) popup_fep_tooltip_window

0x5c1d,	// (0x0003cb4b) aid_size_cell_widget_grid_ParamLimits

0xaef1,	// (0x00041e1f) cell_ai5_widget_pane_g1_ParamLimits

0xaef1,	// (0x00041e1f) cell_ai5_widget_pane_g1

0xaf39,	// (0x00041e67) cell_ai5_widget_pane_g6_ParamLimits

0xaf45,	// (0x00041e73) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfdf7,	// (0x00046d25) cell_ai5_widget_pane_g_ParamLimits

0xfdf7,	// (0x00046d25) cell_ai5_widget_pane_g

0xb049,	// (0x00041f77) cell_ai5_widget_pane_t10_ParamLimits

0xb049,	// (0x00041f77) cell_ai5_widget_pane_t10

0xb05b,	// (0x00041f89) grid_ai5_widget_pane_ParamLimits

0xb091,	// (0x00041fbf) cell_contacts_ai5_widget_pane_ParamLimits

0xb091,	// (0x00041fbf) cell_contacts_ai5_widget_pane

0x5eca,	// (0x0003cdf8) popup_discreet_window_t3_ParamLimits

0x5eca,	// (0x0003cdf8) popup_discreet_window_t3

0x5f23,	// (0x0003ce51) popup_fshwr2_char_preview_window_ParamLimits

0x5f23,	// (0x0003ce51) popup_fshwr2_char_preview_window

0xb36b,	// (0x00042299) tmo_note_info_pane_t1

0xb380,	// (0x000422ae) tmo_note_info_pane_t2

0xb397,	// (0x000422c5) tmo_note_info_pane_t3

0x6086,	// (0x0003cfb4) tmo_note_info_pane_t4

0x6098,	// (0x0003cfc6) tmo_note_info_pane_t5

0x0004,

0xfe7e,	// (0x00046dac) tmo_note_info_pane_t

0x60aa,	// (0x0003cfd8) list_tmo_link_pane_ParamLimits

0x60b7,	// (0x0003cfe5) scroll_pane_cp20_ParamLimits

0xac10,	// (0x00041b3e) bg_popup_fep_char_preview_window_cp01

0x60fb,	// (0x0003d029) popup_fshwr2_char_preview_window_t1

0x6109,	// (0x0003d037) popup_candi_list_indi_window_g1

0x6112,	// (0x0003d040) bg_cell_contacts_ai5_widget_pane

0xb3ac,	// (0x000422da) cell_contacts_ai5_widget_pane_g1

0xb3c0,	// (0x000422ee) cell_contacts_ai5_widget_pane_g2

0xb3cf,	// (0x000422fd) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfe89,	// (0x00046db7) cell_contacts_ai5_widget_pane_g

0xb3e2,	// (0x00042310) cell_contacts_ai5_widget_pane_t1

0xbb16,	// (0x00042a44) highlight_cell_shortcut_ai5_widget_pane_cp01

0xb45c,	// (0x0004238a) settings_container_pane

0xc53b,	// (0x00043469) listscroll_set_pane_copy1

0xe250,	// (0x0004517e) scroll_pane_cp121_copy1

0x611e,	// (0x0003d04c) set_content_pane_copy1

0xb468,	// (0x00042396) aid_height_set_list_copy1_ParamLimits

0xb468,	// (0x00042396) aid_height_set_list_copy1

0xd6e1,	// (0x0004460f) aid_size_parent_copy1_ParamLimits

0xd6e1,	// (0x0004460f) aid_size_parent_copy1

0xb474,	// (0x000423a2) button_value_adjust_pane_cp6_copy1_ParamLimits

0xb474,	// (0x000423a2) button_value_adjust_pane_cp6_copy1

0xbc6e,	// (0x00042b9c) list_highlight_pane_cp2_copy1_ParamLimits

0xbc6e,	// (0x00042b9c) list_highlight_pane_cp2_copy1

0xb488,	// (0x000423b6) list_set_pane_copy1_ParamLimits

0xb488,	// (0x000423b6) list_set_pane_copy1

0xb3f7,	// (0x00042325) main_pane_set_t1_copy1_ParamLimits

0xb3f7,	// (0x00042325) main_pane_set_t1_copy1

0xb431,	// (0x0004235f) main_pane_set_t2_copy1_ParamLimits

0xb431,	// (0x0004235f) main_pane_set_t2_copy1

0xb535,	// (0x00042463) main_pane_set_t3_copy1

0xb543,	// (0x00042471) main_pane_set_t4_copy1

0xb450,	// (0x0004237e) set_content_pane_g1_copy1_ParamLimits

0xb450,	// (0x0004237e) set_content_pane_g1_copy1

0xb551,	// (0x0004247f) setting_code_pane_copy1

0x6126,	// (0x0003d054) setting_slider_graphic_pane_copy1

0x6126,	// (0x0003d054) setting_slider_pane_copy1

0x6130,	// (0x0003d05e) setting_text_pane_copy1

0x613a,	// (0x0003d068) setting_volume_pane_copy1

0xb55b,	// (0x00042489) settings_code_pane_cp2_copy1

0xb563,	// (0x00042491) settings_code_pane_cp_copy1_ParamLimits

0xb563,	// (0x00042491) settings_code_pane_cp_copy1

0xb577,	// (0x000424a5) volume_set_pane_copy1

0xb57f,	// (0x000424ad) volume_set_pane_g10_copy1

0xb587,	// (0x000424b5) volume_set_pane_g1_copy1

0xb58f,	// (0x000424bd) volume_set_pane_g2_copy1

0xb597,	// (0x000424c5) volume_set_pane_g3_copy1

0xb59f,	// (0x000424cd) volume_set_pane_g4_copy1

0xb5a7,	// (0x000424d5) volume_set_pane_g5_copy1

0xb5af,	// (0x000424dd) volume_set_pane_g6_copy1

0xb5b7,	// (0x000424e5) volume_set_pane_g7_copy1

0xb5bf,	// (0x000424ed) volume_set_pane_g8_copy1

0xb5c7,	// (0x000424f5) volume_set_pane_g9_copy1

0xac80,	// (0x00041bae) bg_set_opt_pane_cp_copy1_ParamLimits

0xac80,	// (0x00041bae) bg_set_opt_pane_cp_copy1

0x6143,	// (0x0003d071) setting_slider_pane_t1_copy1_ParamLimits

0x6143,	// (0x0003d071) setting_slider_pane_t1_copy1

0xb5cf,	// (0x000424fd) setting_slider_pane_t2_copy1_ParamLimits

0xb5cf,	// (0x000424fd) setting_slider_pane_t2_copy1

0xb5e9,	// (0x00042517) setting_slider_pane_t3_copy1_ParamLimits

0xb5e9,	// (0x00042517) setting_slider_pane_t3_copy1

0xb601,	// (0x0004252f) slider_set_pane_copy1_ParamLimits

0xb601,	// (0x0004252f) slider_set_pane_copy1

0xbb7d,	// (0x00042aab) set_opt_bg_pane_g1_copy2

0xbb85,	// (0x00042ab3) set_opt_bg_pane_g2_copy2

0x6161,	// (0x0003d08f) set_opt_bg_pane_g3_copy2

0xbb95,	// (0x00042ac3) set_opt_bg_pane_g4_copy2

0xbb9d,	// (0x00042acb) set_opt_bg_pane_g5_copy2

0xbba5,	// (0x00042ad3) set_opt_bg_pane_g6_copy2

0xb617,	// (0x00042545) set_opt_bg_pane_g7_copy2

0x616b,	// (0x0003d099) set_opt_bg_pane_g8_copy2

0x6175,	// (0x0003d0a3) set_opt_bg_pane_g9_copy2

0x38a8,	// (0x0003a7d6) aid_size_touch_slider_mark_copy1_ParamLimits

0x38a8,	// (0x0003a7d6) aid_size_touch_slider_mark_copy1

0x617f,	// (0x0003d0ad) slider_set_pane_g1_copy1

0x38bc,	// (0x0003a7ea) slider_set_pane_g2_copy1

0x2995,	// (0x000398c3) slider_set_pane_g3_copy1_ParamLimits

0x2995,	// (0x000398c3) slider_set_pane_g3_copy1

0x29a9,	// (0x000398d7) slider_set_pane_g4_copy1_ParamLimits

0x29a9,	// (0x000398d7) slider_set_pane_g4_copy1

0x29c1,	// (0x000398ef) slider_set_pane_g5_copy1_ParamLimits

0x29c1,	// (0x000398ef) slider_set_pane_g5_copy1

0x2995,	// (0x000398c3) slider_set_pane_g6_copy1_ParamLimits

0x2995,	// (0x000398c3) slider_set_pane_g6_copy1

0x84da,	// (0x0003f408) slider_set_pane_g7_copy1_ParamLimits

0x84da,	// (0x0003f408) slider_set_pane_g7_copy1

0xac24,	// (0x00041b52) bg_set_opt_pane_cp2_copy1

0x6188,	// (0x0003d0b6) setting_slider_graphic_pane_g1_copy1

0xb61f,	// (0x0004254d) setting_slider_graphic_pane_t1_copy1

0xb62f,	// (0x0004255d) setting_slider_graphic_pane_t2_copy1

0xb63f,	// (0x0004256d) slider_set_pane_cp_copy1

0x6199,	// (0x0003d0c7) input_focus_pane_cp1_copy1

0x61a2,	// (0x0003d0d0) list_set_text_pane_copy1

0x61aa,	// (0x0003d0d8) setting_text_pane_g1_copy1

0x11b1,	// (0x000380df) set_text_pane_t1_copy1

0x6199,	// (0x0003d0c7) input_focus_pane_cp2_copy1

0x61aa,	// (0x0003d0d8) setting_code_pane_g1_copy1

0xb647,	// (0x00042575) setting_code_pane_t1_copy1

0x8a8f,	// (0x0003f9bd) list_set_graphic_pane_copy1

0xac24,	// (0x00041b52) bg_set_opt_pane_cp4_copy1

0x8aa1,	// (0x0003f9cf) list_set_graphic_pane_g1_copy1_ParamLimits

0x8aa1,	// (0x0003f9cf) list_set_graphic_pane_g1_copy1

0xb655,	// (0x00042583) list_set_graphic_pane_g2_copy1

0x8ab9,	// (0x0003f9e7) list_set_graphic_pane_t1_copy1_ParamLimits

0x8ab9,	// (0x0003f9e7) list_set_graphic_pane_t1_copy1

0xe833,	// (0x00045761) rs_clock_indi_pane_g1

0x61b3,	// (0x0003d0e1) rs_clock_indi_pane_t1

0x5d49,	// (0x0003cc77) rs_indi_pane

0x61c1,	// (0x0003d0ef) rs_indi_pane_g1

0x61ca,	// (0x0003d0f8) rs_indi_pane_g2

0x61d3,	// (0x0003d101) rs_indi_pane_g3

0x0002,

0xfe90,	// (0x00046dbe) rs_indi_pane_g

0xc53b,	// (0x00043469) bg_popup_preview_window_pane_cp03

0x61dc,	// (0x0003d10a) popup_fep_tooltip_window_t1

0xf14f,	// (0x0004607d) popup_note2_window_g2_ParamLimits

0xf14f,	// (0x0004607d) popup_note2_window_g2

0x0001,

0xfc2e,	// (0x00046b5c) popup_note2_window_g_ParamLimits

0xfc2e,	// (0x00046b5c) popup_note2_window_g

0x4928,	// (0x0003b856) bg_popup_sub_pane_cp11_ParamLimits

0x4935,	// (0x0003b863) cell_ai3_links_pane_g1_ParamLimits

0x494c,	// (0x0003b87a) cell_ai3_links_pane_t1

0x11b1,	// (0x000380df) set_text_pane_t1_copy1_ParamLimits

0xc44c,	// (0x0004337a) cell_graphic_popup_pane_cp2_ParamLimits

0xc44c,	// (0x0004337a) cell_graphic_popup_pane_cp2

0x61ea,	// (0x0003d118) cell_graphic_popup_pane_g1_cp2

0xb86b,	// (0x00042799) cell_graphic_popup_pane_g2_cp2

0x61f2,	// (0x0003d120) cell_graphic_popup_pane_g3_cp2

0x61fa,	// (0x0003d128) cell_graphic_popup_pane_t2_cp2

0xb87c,	// (0x000427aa) grid_highlight_pane_cp3_cp2

0xbe18,	// (0x00042d46) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xbb16,	// (0x00042a44) main_tmo_pane_ParamLimits

0xa2f7,	// (0x00041225) popup_tmo_big_image_note_window

0xaee1,	// (0x00041e0f) cell_ai5_widget_list_pane

0xaee9,	// (0x00041e17) cell_ai5_widget_lrg_icon_pane

0xb36b,	// (0x00042299) tmo_note_info_pane_t1_ParamLimits

0xb380,	// (0x000422ae) tmo_note_info_pane_t2_ParamLimits

0xb397,	// (0x000422c5) tmo_note_info_pane_t3_ParamLimits

0x6086,	// (0x0003cfb4) tmo_note_info_pane_t4_ParamLimits

0x6098,	// (0x0003cfc6) tmo_note_info_pane_t5_ParamLimits

0xfe7e,	// (0x00046dac) tmo_note_info_pane_t_ParamLimits

0xb45c,	// (0x0004238a) settings_container_pane_ParamLimits

0x6191,	// (0x0003d0bf) indicator_popup_pane_cp5

0x6191,	// (0x0003d0bf) indicator_popup_pane_cp6

0x8a8f,	// (0x0003f9bd) list_set_graphic_pane_copy1_ParamLimits

0xac10,	// (0x00041b3e) bg_popup_window_pane_cp23

0x6208,	// (0x0003d136) popup_tmo_big_image_note_window_g1

0x6212,	// (0x0003d140) popup_tmo_big_image_note_window_t1

0x6222,	// (0x0003d150) popup_tmo_big_image_note_window_t2

0x6232,	// (0x0003d160) popup_tmo_big_image_note_window_t3

0x0002,

0xfe97,	// (0x00046dc5) popup_tmo_big_image_note_window_t

0xb65d,	// (0x0004258b) cell_ai5_widget_lrg_icon_pane_g1

0xb665,	// (0x00042593) cell_ai5_widget_lrg_icon_pane_t1

0xb673,	// (0x000425a1) cell_ai5_widget_list_row_pane_ParamLimits

0xb673,	// (0x000425a1) cell_ai5_widget_list_row_pane

0xb68c,	// (0x000425ba) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xb68c,	// (0x000425ba) cell_ai5_widget_list_row_pane_g1

0xb699,	// (0x000425c7) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xb699,	// (0x000425c7) cell_ai5_widget_list_row_pane_t1

0xb6b1,	// (0x000425df) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xb6b1,	// (0x000425df) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfe9e,	// (0x00046dcc) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfe9e,	// (0x00046dcc) cell_ai5_widget_list_row_pane_t

0xac10,	// (0x00041b3e) main_fep_vtchi_ss_pane

0x6242,	// (0x0003d170) popup_fep_char_pre_window

0x624a,	// (0x0003d178) popup_fep_ituss_window

0x6255,	// (0x0003d183) popup_fep_vkbss_window

0x625e,	// (0x0003d18c) grid_vkbss_keypad_pane_ParamLimits

0x625e,	// (0x0003d18c) grid_vkbss_keypad_pane

0x626e,	// (0x0003d19c) ituss_keypad_pane

0x6276,	// (0x0003d1a4) aid_vkbss_key_offset_ParamLimits

0x6276,	// (0x0003d1a4) aid_vkbss_key_offset

0x6285,	// (0x0003d1b3) cell_vkbss_key_pane_ParamLimits

0x6285,	// (0x0003d1b3) cell_vkbss_key_pane

0x629b,	// (0x0003d1c9) bg_cell_vkbss_key_g1_ParamLimits

0x629b,	// (0x0003d1c9) bg_cell_vkbss_key_g1

0x62a7,	// (0x0003d1d5) cell_vkbss_key_3p_pane_ParamLimits

0x62a7,	// (0x0003d1d5) cell_vkbss_key_3p_pane

0x62c1,	// (0x0003d1ef) cell_vkbss_key_g1_ParamLimits

0x62c1,	// (0x0003d1ef) cell_vkbss_key_g1

0x62db,	// (0x0003d209) cell_vkbss_key_t1_ParamLimits

0x62db,	// (0x0003d209) cell_vkbss_key_t1

0x6306,	// (0x0003d234) cell_ituss_key_pane_ParamLimits

0x6306,	// (0x0003d234) cell_ituss_key_pane

0x6315,	// (0x0003d243) bg_cell_ituss_key_g1_ParamLimits

0x6315,	// (0x0003d243) bg_cell_ituss_key_g1

0x6321,	// (0x0003d24f) cell_ituss_key_pane_g1_ParamLimits

0x6321,	// (0x0003d24f) cell_ituss_key_pane_g1

0x632d,	// (0x0003d25b) cell_ituss_key_pane_g2_ParamLimits

0x632d,	// (0x0003d25b) cell_ituss_key_pane_g2

0x0001,

0xfea3,	// (0x00046dd1) cell_ituss_key_pane_g_ParamLimits

0xfea3,	// (0x00046dd1) cell_ituss_key_pane_g

0x6340,	// (0x0003d26e) cell_ituss_key_t1_ParamLimits

0x6340,	// (0x0003d26e) cell_ituss_key_t1

0x635e,	// (0x0003d28c) cell_ituss_key_t2_ParamLimits

0x635e,	// (0x0003d28c) cell_ituss_key_t2

0x637d,	// (0x0003d2ab) cell_ituss_key_t3_ParamLimits

0x637d,	// (0x0003d2ab) cell_ituss_key_t3

0x639c,	// (0x0003d2ca) cell_ituss_key_t4_ParamLimits

0x639c,	// (0x0003d2ca) cell_ituss_key_t4

0x0003,

0xfea8,	// (0x00046dd6) cell_ituss_key_t_ParamLimits

0xfea8,	// (0x00046dd6) cell_ituss_key_t

0x63bb,	// (0x0003d2e9) cell_vkbss_key_3p_pane_g1

0x63c3,	// (0x0003d2f1) cell_vkbss_key_3p_pane_g2

0x63cb,	// (0x0003d2f9) cell_vkbss_key_3p_pane_g3

0x0002,

0xfeb1,	// (0x00046ddf) cell_vkbss_key_3p_pane_g

0xac10,	// (0x00041b3e) bg_popup_fep_char_preview_window_cp02

0x63d3,	// (0x0003d301) popup_fep_char_pre_window_t1

0xaed7,	// (0x00041e05) main_ai5_sk_pane

0x6112,	// (0x0003d040) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xb3ac,	// (0x000422da) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xb3c0,	// (0x000422ee) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xb3cf,	// (0x000422fd) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfe89,	// (0x00046db7) cell_contacts_ai5_widget_pane_g_ParamLimits

0xb3e2,	// (0x00042310) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xbb16,	// (0x00042a44) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xb6c3,	// (0x000425f1) main_ai5_sk_pane_g1
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
	};

} // end of namespace AknLayoutScalable_Elaf_phl_av_qhd_lsc_tch_Large

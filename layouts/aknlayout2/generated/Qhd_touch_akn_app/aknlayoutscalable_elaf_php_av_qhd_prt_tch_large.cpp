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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0003abf3 };

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
0x7f06,	// (0x00042af9) Screen

0x7f1a,	// (0x00042b0d) application_window_ParamLimits

0x7f1a,	// (0x00042b0d) application_window

0x7f34,	// (0x00042b27) screen_g1

0x58cc,	// (0x000404bf) area_bottom_pane_ParamLimits

0x58cc,	// (0x000404bf) area_bottom_pane

0x598c,	// (0x0004057f) area_top_pane_ParamLimits

0x598c,	// (0x0004057f) area_top_pane

0x5a20,	// (0x00040613) main_pane_ParamLimits

0x5a20,	// (0x00040613) main_pane

0x7f3e,	// (0x00042b31) misc_graphics

0x98f3,	// (0x000444e6) battery_pane_ParamLimits

0x98f3,	// (0x000444e6) battery_pane

0xa5b9,	// (0x000451ac) bg_status_flat_pane_g8

0xa5c1,	// (0x000451b4) bg_status_flat_pane_g9

0x99b5,	// (0x000445a8) context_pane_ParamLimits

0x99b5,	// (0x000445a8) context_pane

0x9acb,	// (0x000446be) navi_pane_ParamLimits

0x9acb,	// (0x000446be) navi_pane

0x9b4f,	// (0x00044742) signal_pane_ParamLimits

0x9b4f,	// (0x00044742) signal_pane

0x0008,

0xf87e,	// (0x0004a471) bg_status_flat_pane_g

0x9bbc,	// (0x000447af) status_pane_g1_ParamLimits

0x9bbc,	// (0x000447af) status_pane_g1

0x9bd0,	// (0x000447c3) status_pane_g2_ParamLimits

0x9bd0,	// (0x000447c3) status_pane_g2

0x9bdc,	// (0x000447cf) status_pane_g3_ParamLimits

0x9bdc,	// (0x000447cf) status_pane_g3

0x0004,

0xf7a5,	// (0x0004a398) status_pane_g_ParamLimits

0xf7a5,	// (0x0004a398) status_pane_g

0x9c10,	// (0x00044803) title_pane_ParamLimits

0x9c10,	// (0x00044803) title_pane

0x9c4d,	// (0x00044840) uni_indicator_pane_ParamLimits

0x9c4d,	// (0x00044840) uni_indicator_pane

0x9817,	// (0x0004440a) bg_list_pane_ParamLimits

0x9817,	// (0x0004440a) bg_list_pane

0x63b3,	// (0x00040fa6) find_pane

0x9837,	// (0x0004442a) listscroll_app_pane_ParamLimits

0x9837,	// (0x0004442a) listscroll_app_pane

0x9843,	// (0x00044436) listscroll_form_pane

0x63bb,	// (0x00040fae) listscroll_gen_pane_ParamLimits

0x63bb,	// (0x00040fae) listscroll_gen_pane

0x63cf,	// (0x00040fc2) listscroll_set_pane

0x8a71,	// (0x00043664) main_idle_act_pane

0x951f,	// (0x00044112) main_idle_trad_pane

0x951f,	// (0x00044112) main_list_empty_pane

0x985d,	// (0x00044450) main_midp_pane

0x9869,	// (0x0004445c) main_pane_g1_ParamLimits

0x9869,	// (0x0004445c) main_pane_g1

0x63d7,	// (0x00040fca) popup_ai_message_window_ParamLimits

0x63d7,	// (0x00040fca) popup_ai_message_window

0x647d,	// (0x00041070) popup_fep_china_uni_window_ParamLimits

0x647d,	// (0x00041070) popup_fep_china_uni_window

0x64d9,	// (0x000410cc) popup_fep_japan_candidate_window_ParamLimits

0x64d9,	// (0x000410cc) popup_fep_japan_candidate_window

0x64f9,	// (0x000410ec) popup_fep_japan_predictive_window_ParamLimits

0x64f9,	// (0x000410ec) popup_fep_japan_predictive_window

0x6529,	// (0x0004111c) popup_find_window

0x6536,	// (0x00041129) popup_grid_graphic_window_ParamLimits

0x6536,	// (0x00041129) popup_grid_graphic_window

0x6560,	// (0x00041153) popup_large_graphic_colour_window

0x6586,	// (0x00041179) popup_menu_window_ParamLimits

0x6586,	// (0x00041179) popup_menu_window

0x673e,	// (0x00041331) popup_note_image_window

0x672a,	// (0x0004131d) popup_note_wait_window_ParamLimits

0x672a,	// (0x0004131d) popup_note_wait_window

0x672a,	// (0x0004131d) popup_note_window_ParamLimits

0x672a,	// (0x0004131d) popup_note_window

0x6794,	// (0x00041387) popup_query_code_window_ParamLimits

0x6794,	// (0x00041387) popup_query_code_window

0x67a8,	// (0x0004139b) popup_query_data_code_window_ParamLimits

0x67a8,	// (0x0004139b) popup_query_data_code_window

0x67c5,	// (0x000413b8) popup_query_data_window_ParamLimits

0x67c5,	// (0x000413b8) popup_query_data_window

0x67e1,	// (0x000413d4) popup_query_sat_info_window_ParamLimits

0x67e1,	// (0x000413d4) popup_query_sat_info_window

0x681a,	// (0x0004140d) popup_snote_single_graphic_window_ParamLimits

0x681a,	// (0x0004140d) popup_snote_single_graphic_window

0x681a,	// (0x0004140d) popup_snote_single_text_window_ParamLimits

0x681a,	// (0x0004140d) popup_snote_single_text_window

0x682f,	// (0x00041422) popup_sub_window_general

0x695f,	// (0x00041552) popup_window_general_ParamLimits

0x695f,	// (0x00041552) popup_window_general

0x9877,	// (0x0004446a) power_save_pane

0x624f,	// (0x00040e42) control_pane_g1_ParamLimits

0x624f,	// (0x00040e42) control_pane_g1

0x6276,	// (0x00040e69) control_pane_g2_ParamLimits

0x6276,	// (0x00040e69) control_pane_g2

0x97da,	// (0x000443cd) control_pane_g3_ParamLimits

0x97da,	// (0x000443cd) control_pane_g3

0x0007,

0xf78d,	// (0x0004a380) control_pane_g_ParamLimits

0xf78d,	// (0x0004a380) control_pane_g

0x62c0,	// (0x00040eb3) control_pane_t1_ParamLimits

0x62c0,	// (0x00040eb3) control_pane_t1

0x630c,	// (0x00040eff) control_pane_t2_ParamLimits

0x630c,	// (0x00040eff) control_pane_t2

0x0002,

0xf79e,	// (0x0004a391) control_pane_t_ParamLimits

0xf79e,	// (0x0004a391) control_pane_t

0x96ff,	// (0x000442f2) navi_navi_volume_pane_cp1

0x9707,	// (0x000442fa) status_small_icon_pane

0x970f,	// (0x00044302) status_small_pane_g1_ParamLimits

0x970f,	// (0x00044302) status_small_pane_g1

0x9743,	// (0x00044336) status_small_pane_g2_ParamLimits

0x9743,	// (0x00044336) status_small_pane_g2

0x974f,	// (0x00044342) status_small_pane_g3_ParamLimits

0x974f,	// (0x00044342) status_small_pane_g3

0x975b,	// (0x0004434e) status_small_pane_g4_ParamLimits

0x975b,	// (0x0004434e) status_small_pane_g4

0x9767,	// (0x0004435a) status_small_pane_g5_ParamLimits

0x9767,	// (0x0004435a) status_small_pane_g5

0x9775,	// (0x00044368) status_small_pane_g6_ParamLimits

0x9775,	// (0x00044368) status_small_pane_g6

0x0007,

0xf77c,	// (0x0004a36f) status_small_pane_g_ParamLimits

0xf77c,	// (0x0004a36f) status_small_pane_g

0x97a4,	// (0x00044397) status_small_pane_t1

0x97c6,	// (0x000443b9) status_small_wait_pane_ParamLimits

0x97c6,	// (0x000443b9) status_small_wait_pane

0x8f91,	// (0x00043b84) aid_levels_signal_ParamLimits

0x8f91,	// (0x00043b84) aid_levels_signal

0x8fa3,	// (0x00043b96) signal_pane_g1_ParamLimits

0x8fa3,	// (0x00043b96) signal_pane_g1

0x8fb8,	// (0x00043bab) signal_pane_g2_ParamLimits

0x8fb8,	// (0x00043bab) signal_pane_g2

0x0003,

0xf70d,	// (0x0004a300) signal_pane_g_ParamLimits

0xf70d,	// (0x0004a300) signal_pane_g

0x8ff3,	// (0x00043be6) context_pane_g1

0x7f48,	// (0x00042b3b) title_pane_g1

0x7f7e,	// (0x00042b71) title_pane_t1

0x7fe6,	// (0x00042bd9) title_pane_t2

0x800c,	// (0x00042bff) title_pane_t3

0x0002,

0xf557,	// (0x0004a14a) title_pane_t

0x9c65,	// (0x00044858) aid_levels_battery_ParamLimits

0x9c65,	// (0x00044858) aid_levels_battery

0x9c79,	// (0x0004486c) battery_pane_g1_ParamLimits

0x9c79,	// (0x0004486c) battery_pane_g1

0x9c8f,	// (0x00044882) battery_pane_g2_ParamLimits

0x9c8f,	// (0x00044882) battery_pane_g2

0x0001,

0xf7b0,	// (0x0004a3a3) battery_pane_g_ParamLimits

0xf7b0,	// (0x0004a3a3) battery_pane_g

0xaefb,	// (0x00045aee) uni_indicator_pane_g1

0xaf11,	// (0x00045b04) uni_indicator_pane_g2

0xaf27,	// (0x00045b1a) uni_indicator_pane_g3

0x0005,

0xf926,	// (0x0004a519) uni_indicator_pane_g

0x9391,	// (0x00043f84) navi_icon_pane_ParamLimits

0x9391,	// (0x00043f84) navi_icon_pane

0x92cf,	// (0x00043ec2) navi_midp_pane

0x93ad,	// (0x00043fa0) navi_navi_pane

0x93b7,	// (0x00043faa) navi_text_pane_ParamLimits

0x93b7,	// (0x00043faa) navi_text_pane

0x7f34,	// (0x00042b27) status_small_wait_pane_g1

0x843b,	// (0x0004302e) status_small_wait_pane_g2

0x0001,

0xf921,	// (0x0004a514) status_small_wait_pane_g

0xac20,	// (0x00045813) navi_navi_icon_text_pane

0xac28,	// (0x0004581b) navi_navi_pane_g1_ParamLimits

0xac28,	// (0x0004581b) navi_navi_pane_g1

0xac3a,	// (0x0004582d) navi_navi_pane_g2_ParamLimits

0xac3a,	// (0x0004582d) navi_navi_pane_g2

0x0001,

0xf8ef,	// (0x0004a4e2) navi_navi_pane_g_ParamLimits

0xf8ef,	// (0x0004a4e2) navi_navi_pane_g

0xac4c,	// (0x0004583f) navi_navi_tabs_pane

0xac55,	// (0x00045848) navi_navi_text_pane

0xac20,	// (0x00045813) navi_navi_volume_pane

0xabfc,	// (0x000457ef) navi_text_pane_t1

0xabf0,	// (0x000457e3) navi_icon_pane_g1

0xab43,	// (0x00045736) navi_navi_text_pane_t1

0x6c17,	// (0x0004180a) navi_navi_volume_pane_g1

0x6c1f,	// (0x00041812) volume_small_pane

0xaaa9,	// (0x0004569c) navi_navi_icon_text_pane_g1

0xaab1,	// (0x000456a4) navi_navi_icon_text_pane_t1

0x93ad,	// (0x00043fa0) navi_tabs_2_long_pane

0x93ad,	// (0x00043fa0) navi_tabs_2_pane

0x93ad,	// (0x00043fa0) navi_tabs_3_long_pane

0x93ad,	// (0x00043fa0) navi_tabs_3_pane

0x93ad,	// (0x00043fa0) navi_tabs_4_pane

0x6bf7,	// (0x000417ea) tabs_2_active_pane_ParamLimits

0x6bf7,	// (0x000417ea) tabs_2_active_pane

0x6c07,	// (0x000417fa) tabs_2_passive_pane_ParamLimits

0x6c07,	// (0x000417fa) tabs_2_passive_pane

0x6bc5,	// (0x000417b8) tabs_3_active_pane_ParamLimits

0x6bc5,	// (0x000417b8) tabs_3_active_pane

0x6bd5,	// (0x000417c8) tabs_3_passive_pane_ParamLimits

0x6bd5,	// (0x000417c8) tabs_3_passive_pane

0x6be6,	// (0x000417d9) tabs_3_passive_pane_cp_ParamLimits

0x6be6,	// (0x000417d9) tabs_3_passive_pane_cp

0x6b81,	// (0x00041774) tabs_4_active_pane_ParamLimits

0x6b81,	// (0x00041774) tabs_4_active_pane

0x6b92,	// (0x00041785) tabs_4_passive_pane_ParamLimits

0x6b92,	// (0x00041785) tabs_4_passive_pane

0x6ba3,	// (0x00041796) tabs_4_passive_pane_cp_ParamLimits

0x6ba3,	// (0x00041796) tabs_4_passive_pane_cp

0x6bb4,	// (0x000417a7) tabs_4_passive_pane_cp2_ParamLimits

0x6bb4,	// (0x000417a7) tabs_4_passive_pane_cp2

0x6b5d,	// (0x00041750) tabs_2_long_active_pane_ParamLimits

0x6b5d,	// (0x00041750) tabs_2_long_active_pane

0x6b6f,	// (0x00041762) tabs_2_long_passive_pane_ParamLimits

0x6b6f,	// (0x00041762) tabs_2_long_passive_pane

0x6b1e,	// (0x00041711) tabs_3_long_active_pane_ParamLimits

0x6b1e,	// (0x00041711) tabs_3_long_active_pane

0x6b31,	// (0x00041724) tabs_3_long_passive_pane_ParamLimits

0x6b31,	// (0x00041724) tabs_3_long_passive_pane

0x6b4a,	// (0x0004173d) tabs_3_long_passive_pane_cp_ParamLimits

0x6b4a,	// (0x0004173d) tabs_3_long_passive_pane_cp

0x6ac4,	// (0x000416b7) volume_small_pane_g1

0x6acd,	// (0x000416c0) volume_small_pane_g2

0x6ad6,	// (0x000416c9) volume_small_pane_g3

0x6adf,	// (0x000416d2) volume_small_pane_g4

0x6ae8,	// (0x000416db) volume_small_pane_g5

0x6af1,	// (0x000416e4) volume_small_pane_g6

0x6afa,	// (0x000416ed) volume_small_pane_g7

0x6b03,	// (0x000416f6) volume_small_pane_g8

0x6b0c,	// (0x000416ff) volume_small_pane_g9

0x6b15,	// (0x00041708) volume_small_pane_g10

0x0009,

0xf8bb,	// (0x0004a4ae) volume_small_pane_g

0x801e,	// (0x00042c11) bg_active_tab_pane_cp2_ParamLimits

0x801e,	// (0x00042c11) bg_active_tab_pane_cp2

0x802c,	// (0x00042c1f) tabs_3_active_pane_g1

0x8034,	// (0x00042c27) tabs_3_active_pane_t1

0x801e,	// (0x00042c11) bg_passive_tab_pane_cp2_ParamLimits

0x801e,	// (0x00042c11) bg_passive_tab_pane_cp2

0x802c,	// (0x00042c1f) tabs_3_passive_pane_g1

0x8034,	// (0x00042c27) tabs_3_passive_pane_t1

0x801e,	// (0x00042c11) bg_active_tab_pane_cp3_ParamLimits

0x801e,	// (0x00042c11) bg_active_tab_pane_cp3

0x8046,	// (0x00042c39) tabs_4_active_pane_g1

0x804e,	// (0x00042c41) tabs_4_active_pane_t1

0x801e,	// (0x00042c11) bg_passive_tab_pane_cp3_ParamLimits

0x801e,	// (0x00042c11) bg_passive_tab_pane_cp3

0x8046,	// (0x00042c39) tabs_4_1_passive_pane_g1

0x804e,	// (0x00042c41) tabs_4_1_passive_pane_t1

0x985d,	// (0x00044450) list_highlight_pane_cp2

0xb16f,	// (0x00045d62) list_set_pane_ParamLimits

0xb16f,	// (0x00045d62) list_set_pane

0xb215,	// (0x00045e08) main_pane_set_t1_ParamLimits

0xb215,	// (0x00045e08) main_pane_set_t1

0xb235,	// (0x00045e28) main_pane_set_t2_ParamLimits

0xb235,	// (0x00045e28) main_pane_set_t2

0xb249,	// (0x00045e3c) main_pane_set_t3_ParamLimits

0xb249,	// (0x00045e3c) main_pane_set_t3

0xb25b,	// (0x00045e4e) main_pane_set_t4_ParamLimits

0xb25b,	// (0x00045e4e) main_pane_set_t4

0x0003,

0xf98b,	// (0x0004a57e) main_pane_set_t_ParamLimits

0xf98b,	// (0x0004a57e) main_pane_set_t

0xb26d,	// (0x00045e60) setting_code_pane

0xb279,	// (0x00045e6c) setting_slider_graphic_pane

0xb279,	// (0x00045e6c) setting_slider_pane

0xb279,	// (0x00045e6c) setting_text_pane

0xb279,	// (0x00045e6c) setting_volume_pane

0x5c6f,	// (0x00040862) volume_set_pane

0x801e,	// (0x00042c11) bg_set_opt_pane_cp

0x5c77,	// (0x0004086a) setting_slider_pane_t1

0x5c90,	// (0x00040883) setting_slider_pane_t2

0x5caa,	// (0x0004089d) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0004a151) setting_slider_pane_t

0x5cc2,	// (0x000408b5) slider_set_pane

0x7f3e,	// (0x00042b31) bg_set_opt_pane_cp2

0x8060,	// (0x00042c53) setting_slider_graphic_pane_g1

0x5cd8,	// (0x000408cb) setting_slider_graphic_pane_t1

0x5ce8,	// (0x000408db) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x0004a158) setting_slider_graphic_pane_t

0x5cf8,	// (0x000408eb) slider_set_pane_cp

0x7f3e,	// (0x00042b31) input_focus_pane_cp1

0xb12e,	// (0x00045d21) list_set_text_pane

0x7f34,	// (0x00042b27) setting_text_pane_g1

0x7f3e,	// (0x00042b31) input_focus_pane_cp2

0x7f34,	// (0x00042b27) setting_code_pane_g1

0x8069,	// (0x00042c5c) setting_code_pane_t1

0x4910,	// (0x0003f503) set_text_pane_t1_ParamLimits

0x4910,	// (0x0003f503) set_text_pane_t1

0x88e8,	// (0x000434db) set_opt_bg_pane_g1

0x88f0,	// (0x000434e3) set_opt_bg_pane_g2

0xb108,	// (0x00045cfb) set_opt_bg_pane_g3

0x8900,	// (0x000434f3) set_opt_bg_pane_g4

0x8908,	// (0x000434fb) set_opt_bg_pane_g5

0x8910,	// (0x00043503) set_opt_bg_pane_g6

0xb112,	// (0x00045d05) set_opt_bg_pane_g7

0xb11a,	// (0x00045d0d) set_opt_bg_pane_g8

0xb124,	// (0x00045d17) set_opt_bg_pane_g9

0x0008,

0xf978,	// (0x0004a56b) set_opt_bg_pane_g

0xb0fb,	// (0x00045cee) slider_set_pane_g1

0x6c8c,	// (0x0004187f) slider_set_pane_g2

0x0006,

0xf969,	// (0x0004a55c) slider_set_pane_g

0x6c28,	// (0x0004181b) volume_set_pane_g1

0x6c30,	// (0x00041823) volume_set_pane_g2

0x6c38,	// (0x0004182b) volume_set_pane_g3

0x6c40,	// (0x00041833) volume_set_pane_g4

0x6c48,	// (0x0004183b) volume_set_pane_g5

0x6c50,	// (0x00041843) volume_set_pane_g6

0x6c58,	// (0x0004184b) volume_set_pane_g7

0x6c60,	// (0x00041853) volume_set_pane_g8

0x6c68,	// (0x0004185b) volume_set_pane_g9

0x6c70,	// (0x00041863) volume_set_pane_g10

0x0009,

0xf941,	// (0x0004a534) volume_set_pane_g

0x8077,	// (0x00042c6a) indicator_pane_ParamLimits

0x8077,	// (0x00042c6a) indicator_pane

0x8083,	// (0x00042c76) main_idle_pane_g2_ParamLimits

0x8083,	// (0x00042c76) main_idle_pane_g2

0x80ab,	// (0x00042c9e) main_pane_idle_g1_ParamLimits

0x80ab,	// (0x00042c9e) main_pane_idle_g1

0x80b8,	// (0x00042cab) popup_clock_digital_analogue_window_ParamLimits

0x80b8,	// (0x00042cab) popup_clock_digital_analogue_window

0x80cf,	// (0x00042cc2) soft_indicator_pane_ParamLimits

0x80cf,	// (0x00042cc2) soft_indicator_pane

0x80db,	// (0x00042cce) wallpaper_pane_ParamLimits

0x80db,	// (0x00042cce) wallpaper_pane

0x7f34,	// (0x00042b27) wallpaper_pane_g1

0x80ef,	// (0x00042ce2) indicator_pane_g1_ParamLimits

0x80ef,	// (0x00042ce2) indicator_pane_g1

0xb4de,	// (0x000460d1) navi_navi_icon_text_pane_srt_g1

0x810a,	// (0x00042cfd) soft_indicator_pane_t1

0x8124,	// (0x00042d17) aid_ps_area_pane

0x8135,	// (0x00042d28) aid_ps_clock_pane

0x8143,	// (0x00042d36) aid_ps_indicator_pane

0x814f,	// (0x00042d42) indicator_ps_pane_ParamLimits

0x814f,	// (0x00042d42) indicator_ps_pane

0x815e,	// (0x00042d51) power_save_pane_g1_ParamLimits

0x815e,	// (0x00042d51) power_save_pane_g1

0x816a,	// (0x00042d5d) power_save_pane_g2_ParamLimits

0x816a,	// (0x00042d5d) power_save_pane_g2

0x5880,	// (0x00040473) aid_navinavi_width_pane

0x8124,	// (0x00042d17) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0004a15d) power_save_pane_g_ParamLimits

0xf56a,	// (0x0004a15d) power_save_pane_g

0x8178,	// (0x00042d6b) power_save_pane_t1_ParamLimits

0x8178,	// (0x00042d6b) power_save_pane_t1

0x8135,	// (0x00042d28) aid_ps_clock_pane_ParamLimits

0x8143,	// (0x00042d36) aid_ps_indicator_pane_ParamLimits

0x818a,	// (0x00042d7d) power_save_pane_t4_ParamLimits

0x818a,	// (0x00042d7d) power_save_pane_t4

0x0001,

0xf56f,	// (0x0004a162) power_save_pane_t_ParamLimits

0xf56f,	// (0x0004a162) power_save_pane_t

0x81b4,	// (0x00042da7) power_save_t3_ParamLimits

0x81b4,	// (0x00042da7) power_save_t3

0x819f,	// (0x00042d92) power_save_t2_ParamLimits

0x819f,	// (0x00042d92) power_save_t2

0x81c9,	// (0x00042dbc) indicator_ps_pane_g1

0x81d2,	// (0x00042dc5) ai_gene_pane_ParamLimits

0x81d2,	// (0x00042dc5) ai_gene_pane

0x81de,	// (0x00042dd1) ai_links_pane_ParamLimits

0x81de,	// (0x00042dd1) ai_links_pane

0x81ea,	// (0x00042ddd) indicator_pane_cp1_ParamLimits

0x81ea,	// (0x00042ddd) indicator_pane_cp1

0x81f6,	// (0x00042de9) main_pane_idle_g1_cp_ParamLimits

0x81f6,	// (0x00042de9) main_pane_idle_g1_cp

0x8202,	// (0x00042df5) popup_ai_links_title_window

0x820b,	// (0x00042dfe) soft_indicator_pane_cp1_ParamLimits

0x820b,	// (0x00042dfe) soft_indicator_pane_cp1

0xaee9,	// (0x00045adc) ai_links_pane_g1

0xaef2,	// (0x00045ae5) grid_ai_links_pane

0xaecc,	// (0x00045abf) ai_gene_pane_1

0xaed7,	// (0x00045aca) ai_gene_pane_2

0xaee0,	// (0x00045ad3) list_highlight_pane_cp4

0xaeb0,	// (0x00045aa3) cell_ai_link_pane_ParamLimits

0xaeb0,	// (0x00045aa3) cell_ai_link_pane

0xaea8,	// (0x00045a9b) cell_ai_link_pane_g1

0x843b,	// (0x0004302e) cell_ai_link_pane_g2

0x0001,

0xf91c,	// (0x0004a50f) cell_ai_link_pane_g

0x7f3e,	// (0x00042b31) grid_highlight_cp2

0x7f3e,	// (0x00042b31) bg_popup_sub_pane_cp1

0x8225,	// (0x00042e18) popup_ai_links_title_window_t1

0xadf6,	// (0x000459e9) ai_gene_pane_1_g1_ParamLimits

0xadf6,	// (0x000459e9) ai_gene_pane_1_g1

0xae02,	// (0x000459f5) ai_gene_pane_1_g2_ParamLimits

0xae02,	// (0x000459f5) ai_gene_pane_1_g2

0x0001,

0xf912,	// (0x0004a505) ai_gene_pane_1_g_ParamLimits

0xf912,	// (0x0004a505) ai_gene_pane_1_g

0xae0f,	// (0x00045a02) ai_gene_pane_1_t1_ParamLimits

0xae0f,	// (0x00045a02) ai_gene_pane_1_t1

0xae43,	// (0x00045a36) grid_ai_soft_ind_pane

0xade1,	// (0x000459d4) ai_gene_pane_2_t1_ParamLimits

0xade1,	// (0x000459d4) ai_gene_pane_2_t1

0x8234,	// (0x00042e27) main_pane_empty_t1_ParamLimits

0x8234,	// (0x00042e27) main_pane_empty_t1

0x824c,	// (0x00042e3f) main_pane_empty_t2_ParamLimits

0x824c,	// (0x00042e3f) main_pane_empty_t2

0x8261,	// (0x00042e54) main_pane_empty_t3_ParamLimits

0x8261,	// (0x00042e54) main_pane_empty_t3

0x8273,	// (0x00042e66) main_pane_empty_t4_ParamLimits

0x8273,	// (0x00042e66) main_pane_empty_t4

0x8285,	// (0x00042e78) main_pane_empty_t5_ParamLimits

0x8285,	// (0x00042e78) main_pane_empty_t5

0x0004,

0xf574,	// (0x0004a167) main_pane_empty_t_ParamLimits

0xf574,	// (0x0004a167) main_pane_empty_t

0x8939,	// (0x0004352c) bg_popup_window_pane_ParamLimits

0x8939,	// (0x0004352c) bg_popup_window_pane

0xab51,	// (0x00045744) find_popup_pane_cp2_ParamLimits

0xab51,	// (0x00045744) find_popup_pane_cp2

0xab5d,	// (0x00045750) heading_pane_ParamLimits

0xab5d,	// (0x00045750) heading_pane

0x7f3e,	// (0x00042b31) bg_popup_sub_pane

0xaacb,	// (0x000456be) bg_popup_window_pane_g1_ParamLimits

0xaacb,	// (0x000456be) bg_popup_window_pane_g1

0xaad7,	// (0x000456ca) bg_popup_window_pane_g2_ParamLimits

0xaad7,	// (0x000456ca) bg_popup_window_pane_g2

0xaae3,	// (0x000456d6) bg_popup_window_pane_g3_ParamLimits

0xaae3,	// (0x000456d6) bg_popup_window_pane_g3

0xaaef,	// (0x000456e2) bg_popup_window_pane_g4_ParamLimits

0xaaef,	// (0x000456e2) bg_popup_window_pane_g4

0xaafb,	// (0x000456ee) bg_popup_window_pane_g5_ParamLimits

0xaafb,	// (0x000456ee) bg_popup_window_pane_g5

0xab07,	// (0x000456fa) bg_popup_window_pane_g6_ParamLimits

0xab07,	// (0x000456fa) bg_popup_window_pane_g6

0xab13,	// (0x00045706) bg_popup_window_pane_g7_ParamLimits

0xab13,	// (0x00045706) bg_popup_window_pane_g7

0xab1f,	// (0x00045712) bg_popup_window_pane_g8_ParamLimits

0xab1f,	// (0x00045712) bg_popup_window_pane_g8

0xab2b,	// (0x0004571e) bg_popup_window_pane_g9_ParamLimits

0xab2b,	// (0x0004571e) bg_popup_window_pane_g9

0xab37,	// (0x0004572a) bg_popup_window_pane_g10_ParamLimits

0xab37,	// (0x0004572a) bg_popup_window_pane_g10

0x0009,

0xf8da,	// (0x0004a4cd) bg_popup_window_pane_g_ParamLimits

0xf8da,	// (0x0004a4cd) bg_popup_window_pane_g

0xaa54,	// (0x00045647) bg_popup_heading_pane_ParamLimits

0xaa54,	// (0x00045647) bg_popup_heading_pane

0x6daa,	// (0x0004199d) tabs_4_passive_pane_cp_srt_ParamLimits

0x6daa,	// (0x0004199d) tabs_4_passive_pane_cp_srt

0x6dbc,	// (0x000419af) tabs_4_passive_pane_srt_ParamLimits

0xaa68,	// (0x0004565b) heading_pane_g2

0x6dbc,	// (0x000419af) tabs_4_passive_pane_srt

0x985d,	// (0x00044450) bg_passive_tab_pane_cp3_srt_ParamLimits

0x985d,	// (0x00044450) bg_passive_tab_pane_cp3_srt

0xaa70,	// (0x00045663) heading_pane_t1_ParamLimits

0xaa70,	// (0x00045663) heading_pane_t1

0xaa87,	// (0x0004567a) heading_pane_t2_ParamLimits

0xaa87,	// (0x0004567a) heading_pane_t2

0x0001,

0xf8d5,	// (0x0004a4c8) heading_pane_t_ParamLimits

0xf8d5,	// (0x0004a4c8) heading_pane_t

0xa581,	// (0x00045174) bg_popup_heading_pane_g1

0xa630,	// (0x00045223) bg_popup_heading_pane_g2

0xa63a,	// (0x0004522d) bg_popup_heading_pane_g3

0xa644,	// (0x00045237) bg_popup_heading_pane_g4

0xa64e,	// (0x00045241) bg_popup_heading_pane_g5

0xa658,	// (0x0004524b) bg_popup_heading_pane_g6

0xa660,	// (0x00045253) bg_popup_heading_pane_g7

0xa668,	// (0x0004525b) bg_popup_heading_pane_g8

0xa672,	// (0x00045265) bg_popup_heading_pane_g9

0x0008,

0xf891,	// (0x0004a484) bg_popup_heading_pane_g

0x9d67,	// (0x0004495a) bg_popup_sub_pane_g1

0x9d6f,	// (0x00044962) bg_popup_sub_pane_g2

0x9d77,	// (0x0004496a) bg_popup_sub_pane_g3

0x9d7f,	// (0x00044972) bg_popup_sub_pane_g4

0x9d87,	// (0x0004497a) bg_popup_sub_pane_g5

0x9d8f,	// (0x00044982) bg_popup_sub_pane_g6

0x9d97,	// (0x0004498a) bg_popup_sub_pane_g7

0x9d9f,	// (0x00044992) bg_popup_sub_pane_g8

0x9da7,	// (0x0004499a) bg_popup_sub_pane_g9

0x0008,

0xf86b,	// (0x0004a45e) bg_popup_sub_pane_g

0x8299,	// (0x00042e8c) bg_popup_window_pane_cp5_ParamLimits

0x8299,	// (0x00042e8c) bg_popup_window_pane_cp5

0x82b5,	// (0x00042ea8) popup_note_window_g1_ParamLimits

0x82b5,	// (0x00042ea8) popup_note_window_g1

0x82c1,	// (0x00042eb4) popup_note_window_t1_ParamLimits

0x82c1,	// (0x00042eb4) popup_note_window_t1

0x82d7,	// (0x00042eca) popup_note_window_t2_ParamLimits

0x82d7,	// (0x00042eca) popup_note_window_t2

0x82ed,	// (0x00042ee0) popup_note_window_t3_ParamLimits

0x82ed,	// (0x00042ee0) popup_note_window_t3

0x8303,	// (0x00042ef6) popup_note_window_t4_ParamLimits

0x8303,	// (0x00042ef6) popup_note_window_t4

0x832b,	// (0x00042f1e) popup_note_window_t5_ParamLimits

0x832b,	// (0x00042f1e) popup_note_window_t5

0x0004,

0xf57f,	// (0x0004a172) popup_note_window_t_ParamLimits

0xf57f,	// (0x0004a172) popup_note_window_t

0x834f,	// (0x00042f42) bg_popup_window_pane_cp6_ParamLimits

0x834f,	// (0x00042f42) bg_popup_window_pane_cp6

0xa4fd,	// (0x000450f0) popup_note_image_window_g1_ParamLimits

0xa4fd,	// (0x000450f0) popup_note_image_window_g1

0xa509,	// (0x000450fc) popup_note_image_window_g2_ParamLimits

0xa509,	// (0x000450fc) popup_note_image_window_g2

0x0001,

0xf85f,	// (0x0004a452) popup_note_image_window_g_ParamLimits

0xf85f,	// (0x0004a452) popup_note_image_window_g

0xa522,	// (0x00045115) popup_note_image_window_t1_ParamLimits

0xa522,	// (0x00045115) popup_note_image_window_t1

0xa53b,	// (0x0004512e) popup_note_image_window_t2_ParamLimits

0xa53b,	// (0x0004512e) popup_note_image_window_t2

0xa554,	// (0x00045147) popup_note_image_window_t3_ParamLimits

0xa554,	// (0x00045147) popup_note_image_window_t3

0x0002,

0xf864,	// (0x0004a457) popup_note_image_window_t_ParamLimits

0xf864,	// (0x0004a457) popup_note_image_window_t

0xa3be,	// (0x00044fb1) bg_popup_window_pane_cp7_ParamLimits

0xa3be,	// (0x00044fb1) bg_popup_window_pane_cp7

0xa3ee,	// (0x00044fe1) popup_note_wait_window_g1_ParamLimits

0xa3ee,	// (0x00044fe1) popup_note_wait_window_g1

0xa3fa,	// (0x00044fed) popup_note_wait_window_g2_ParamLimits

0xa3fa,	// (0x00044fed) popup_note_wait_window_g2

0x0002,

0xf84d,	// (0x0004a440) popup_note_wait_window_g_ParamLimits

0xf84d,	// (0x0004a440) popup_note_wait_window_g

0xa412,	// (0x00045005) popup_note_wait_window_t1_ParamLimits

0xa412,	// (0x00045005) popup_note_wait_window_t1

0xa439,	// (0x0004502c) popup_note_wait_window_t2_ParamLimits

0xa439,	// (0x0004502c) popup_note_wait_window_t2

0xa456,	// (0x00045049) popup_note_wait_window_t3_ParamLimits

0xa456,	// (0x00045049) popup_note_wait_window_t3

0xa469,	// (0x0004505c) popup_note_wait_window_t4_ParamLimits

0xa469,	// (0x0004505c) popup_note_wait_window_t4

0x0004,

0xf854,	// (0x0004a447) popup_note_wait_window_t_ParamLimits

0xf854,	// (0x0004a447) popup_note_wait_window_t

0xa48e,	// (0x00045081) wait_bar_pane_ParamLimits

0xa48e,	// (0x00045081) wait_bar_pane

0x7f3e,	// (0x00042b31) wait_anim_pane

0x7f3e,	// (0x00042b31) wait_border_pane

0x7f34,	// (0x00042b27) wait_anim_pane_g1

0x7f34,	// (0x00042b27) wait_anim_pane_g2

0x0001,

0xf708,	// (0x0004a2fb) wait_anim_pane_g

0xa362,	// (0x00044f55) wait_border_pane_g1

0xa36d,	// (0x00044f60) wait_border_pane_g2

0xa376,	// (0x00044f69) wait_border_pane_g3

0x0002,

0xf846,	// (0x0004a439) wait_border_pane_g

0xa1cd,	// (0x00044dc0) bg_popup_window_pane_cp16_ParamLimits

0xa1cd,	// (0x00044dc0) bg_popup_window_pane_cp16

0xa2cd,	// (0x00044ec0) indicator_popup_pane_cp4_ParamLimits

0xa2cd,	// (0x00044ec0) indicator_popup_pane_cp4

0xa2e1,	// (0x00044ed4) popup_query_data_window_t1_ParamLimits

0xa2e1,	// (0x00044ed4) popup_query_data_window_t1

0xa2f3,	// (0x00044ee6) popup_query_data_window_t2_ParamLimits

0xa2f3,	// (0x00044ee6) popup_query_data_window_t2

0xa30c,	// (0x00044eff) popup_query_data_window_t3_ParamLimits

0xa30c,	// (0x00044eff) popup_query_data_window_t3

0x0002,

0xf83f,	// (0x0004a432) popup_query_data_window_t_ParamLimits

0xf83f,	// (0x0004a432) popup_query_data_window_t

0xa326,	// (0x00044f19) query_popup_data_pane_ParamLimits

0xa326,	// (0x00044f19) query_popup_data_pane

0xa33a,	// (0x00044f2d) query_popup_data_pane_cp1_ParamLimits

0xa33a,	// (0x00044f2d) query_popup_data_pane_cp1

0xa1cd,	// (0x00044dc0) bg_popup_window_pane_cp10_ParamLimits

0xa1cd,	// (0x00044dc0) bg_popup_window_pane_cp10

0xa1ff,	// (0x00044df2) indicator_popup_pane_ParamLimits

0xa1ff,	// (0x00044df2) indicator_popup_pane

0xa221,	// (0x00044e14) popup_query_code_window_t1_ParamLimits

0xa221,	// (0x00044e14) popup_query_code_window_t1

0xa23b,	// (0x00044e2e) popup_query_code_window_t2_ParamLimits

0xa23b,	// (0x00044e2e) popup_query_code_window_t2

0xa284,	// (0x00044e77) popup_query_code_window_t3_ParamLimits

0xa284,	// (0x00044e77) popup_query_code_window_t3

0x0002,

0xf838,	// (0x0004a42b) popup_query_code_window_t_ParamLimits

0xf838,	// (0x0004a42b) popup_query_code_window_t

0xa2b3,	// (0x00044ea6) query_popup_pane_ParamLimits

0xa2b3,	// (0x00044ea6) query_popup_pane

0x834f,	// (0x00042f42) bg_popup_window_pane_cp15_ParamLimits

0x834f,	// (0x00042f42) bg_popup_window_pane_cp15

0x836d,	// (0x00042f60) indicator_popup_pane_cp1_ParamLimits

0x836d,	// (0x00042f60) indicator_popup_pane_cp1

0x8380,	// (0x00042f73) indicator_popup_pane_cp2_ParamLimits

0x8380,	// (0x00042f73) indicator_popup_pane_cp2

0x8393,	// (0x00042f86) popup_query_data_code_window_g1_ParamLimits

0x8393,	// (0x00042f86) popup_query_data_code_window_g1

0x83a6,	// (0x00042f99) popup_query_data_code_window_t1_ParamLimits

0x83a6,	// (0x00042f99) popup_query_data_code_window_t1

0x83b8,	// (0x00042fab) popup_query_data_code_window_t2_ParamLimits

0x83b8,	// (0x00042fab) popup_query_data_code_window_t2

0x83ca,	// (0x00042fbd) popup_query_data_code_window_t3_ParamLimits

0x83ca,	// (0x00042fbd) popup_query_data_code_window_t3

0x83e0,	// (0x00042fd3) popup_query_data_code_window_t4_ParamLimits

0x83e0,	// (0x00042fd3) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x0004a17d) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x0004a17d) popup_query_data_code_window_t

0x69d5,	// (0x000415c8) list_single_midp_graphic_pane_g3

0x83f8,	// (0x00042feb) query_popup_data_pane_cp2_ParamLimits

0x840b,	// (0x00042ffe) query_popup_pane_cp2_ParamLimits

0x840b,	// (0x00042ffe) query_popup_pane_cp2

0x7f3e,	// (0x00042b31) bg_popup_window_pane_cp11

0xa1c5,	// (0x00044db8) heading_pane_cp5

0x84f6,	// (0x000430e9) listscroll_popup_info_pane

0x7f3e,	// (0x00042b31) input_focus_pane_cp3

0x841e,	// (0x00043011) query_popup_pane_t1

0x842c,	// (0x0004301f) list_popup_info_pane_ParamLimits

0x842c,	// (0x0004301f) list_popup_info_pane

0x843b,	// (0x0004302e) listscroll_popup_info_pane_g1

0x8443,	// (0x00043036) scroll_pane_cp7

0x844d,	// (0x00043040) popup_info_list_pane_t1_ParamLimits

0x844d,	// (0x00043040) popup_info_list_pane_t1

0x8467,	// (0x0004305a) popup_info_list_pane_t2_ParamLimits

0x8467,	// (0x0004305a) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x0004a186) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x0004a186) popup_info_list_pane_t

0x7f3e,	// (0x00042b31) bg_popup_window_pane_cp12

0xb4f8,	// (0x000460eb) find_popup_pane

0x801e,	// (0x00042c11) bg_popup_window_pane_cp3

0x8481,	// (0x00043074) heading_pane_cp3

0x848d,	// (0x00043080) listscroll_popup_graphic_pane

0x7f3e,	// (0x00042b31) bg_popup_window_pane_cp4

0x84ec,	// (0x000430df) heading_pane_cp4

0x84f6,	// (0x000430e9) listscroll_popup_colour_pane

0x84fe,	// (0x000430f1) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x84fe,	// (0x000430f1) cell_large_graphic_colour_none_popup_pane

0x8512,	// (0x00043105) grid_large_graphic_colour_popup_pane_ParamLimits

0x8512,	// (0x00043105) grid_large_graphic_colour_popup_pane

0x853e,	// (0x00043131) listscroll_popup_colour_pane_g1_ParamLimits

0x853e,	// (0x00043131) listscroll_popup_colour_pane_g1

0x8555,	// (0x00043148) listscroll_popup_colour_pane_g2_ParamLimits

0x8555,	// (0x00043148) listscroll_popup_colour_pane_g2

0x856c,	// (0x0004315f) listscroll_popup_colour_pane_g3_ParamLimits

0x856c,	// (0x0004315f) listscroll_popup_colour_pane_g3

0x857c,	// (0x0004316f) listscroll_popup_colour_pane_g4_ParamLimits

0x857c,	// (0x0004316f) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x0004a18b) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x0004a18b) listscroll_popup_colour_pane_g

0x8590,	// (0x00043183) scroll_pane_cp6_ParamLimits

0x8590,	// (0x00043183) scroll_pane_cp6

0x85a2,	// (0x00043195) cell_large_graphic_colour_popup_pane_ParamLimits

0x85a2,	// (0x00043195) cell_large_graphic_colour_popup_pane

0x85c1,	// (0x000431b4) cell_large_graphic_colour_none_popup_pane_t1

0x7f3e,	// (0x00042b31) grid_highlight_pane_cp5

0x85d0,	// (0x000431c3) cell_large_graphic_colour_popup_pane_g1

0x85d8,	// (0x000431cb) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0004a194) cell_large_graphic_colour_popup_pane_g

0x85e0,	// (0x000431d3) cell_large_graphic_colour_popup_pane_g2_copy1

0x85e9,	// (0x000431dc) grid_highlight_pane_cp4

0x85f1,	// (0x000431e4) bg_popup_window_pane_cp8_ParamLimits

0x85f1,	// (0x000431e4) bg_popup_window_pane_cp8

0x860c,	// (0x000431ff) popup_snote_single_text_window_g1_ParamLimits

0x860c,	// (0x000431ff) popup_snote_single_text_window_g1

0x861e,	// (0x00043211) popup_snote_single_text_window_t1_ParamLimits

0x861e,	// (0x00043211) popup_snote_single_text_window_t1

0x8631,	// (0x00043224) popup_snote_single_text_window_t2_ParamLimits

0x8631,	// (0x00043224) popup_snote_single_text_window_t2

0x8644,	// (0x00043237) popup_snote_single_text_window_t3_ParamLimits

0x8644,	// (0x00043237) popup_snote_single_text_window_t3

0x867d,	// (0x00043270) popup_snote_single_text_window_t4_ParamLimits

0x867d,	// (0x00043270) popup_snote_single_text_window_t4

0x86b1,	// (0x000432a4) popup_snote_single_text_window_t5_ParamLimits

0x86b1,	// (0x000432a4) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0004a199) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0004a199) popup_snote_single_text_window_t

0x86e0,	// (0x000432d3) bg_popup_window_pane_cp9_ParamLimits

0x86e0,	// (0x000432d3) bg_popup_window_pane_cp9

0x860c,	// (0x000431ff) popup_snote_single_graphic_window_g1_ParamLimits

0x860c,	// (0x000431ff) popup_snote_single_graphic_window_g1

0x86ee,	// (0x000432e1) popup_snote_single_graphic_window_g2_ParamLimits

0x86ee,	// (0x000432e1) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0004a1a4) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0004a1a4) popup_snote_single_graphic_window_g

0x86fa,	// (0x000432ed) popup_snote_single_graphic_window_t1_ParamLimits

0x86fa,	// (0x000432ed) popup_snote_single_graphic_window_t1

0x870d,	// (0x00043300) popup_snote_single_graphic_window_t2_ParamLimits

0x870d,	// (0x00043300) popup_snote_single_graphic_window_t2

0x8720,	// (0x00043313) popup_snote_single_graphic_window_t3_ParamLimits

0x8720,	// (0x00043313) popup_snote_single_graphic_window_t3

0x8759,	// (0x0004334c) popup_snote_single_graphic_window_t4_ParamLimits

0x8759,	// (0x0004334c) popup_snote_single_graphic_window_t4

0x878d,	// (0x00043380) popup_snote_single_graphic_window_t5_ParamLimits

0x878d,	// (0x00043380) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0004a1a9) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0004a1a9) popup_snote_single_graphic_window_t

0xb43b,	// (0x0004602e) grid_graphic_popup_pane_ParamLimits

0xb43b,	// (0x0004602e) grid_graphic_popup_pane

0xb464,	// (0x00046057) listscroll_popup_graphic_pane_g1_ParamLimits

0xb464,	// (0x00046057) listscroll_popup_graphic_pane_g1

0xb478,	// (0x0004606b) listscroll_popup_graphic_pane_g2_ParamLimits

0xb478,	// (0x0004606b) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b5,	// (0x0004a5a8) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b5,	// (0x0004a5a8) listscroll_popup_graphic_pane_g

0xb48c,	// (0x0004607f) scroll_pane_cp5

0xb3d8,	// (0x00045fcb) cell_graphic_popup_pane_ParamLimits

0xb3d8,	// (0x00045fcb) cell_graphic_popup_pane

0xb3b9,	// (0x00045fac) cell_graphic_popup_pane_g1

0xb3c1,	// (0x00045fb4) cell_graphic_popup_pane_g2

0x85e0,	// (0x000431d3) cell_graphic_popup_pane_g3

0x0002,

0xf9ae,	// (0x0004a5a1) cell_graphic_popup_pane_g

0xb3ca,	// (0x00045fbd) cell_graphic_popup_pane_t2

0x85e9,	// (0x000431dc) grid_highlight_pane_cp3

0x87ce,	// (0x000433c1) list_gen_pane_ParamLimits

0x87ce,	// (0x000433c1) list_gen_pane

0x8800,	// (0x000433f3) scroll_pane

0xb311,	// (0x00045f04) bg_list_pane_g1_ParamLimits

0xb311,	// (0x00045f04) bg_list_pane_g1

0xb32e,	// (0x00045f21) bg_list_pane_g2_ParamLimits

0xb32e,	// (0x00045f21) bg_list_pane_g2

0xb343,	// (0x00045f36) bg_list_pane_g3_ParamLimits

0xb343,	// (0x00045f36) bg_list_pane_g3

0xb357,	// (0x00045f4a) bg_list_pane_g4_ParamLimits

0xb357,	// (0x00045f4a) bg_list_pane_g4

0xb36b,	// (0x00045f5e) bg_list_pane_g5_ParamLimits

0xb36b,	// (0x00045f5e) bg_list_pane_g5

0x0004,

0xf9a3,	// (0x0004a596) bg_list_pane_g_ParamLimits

0xf9a3,	// (0x0004a596) bg_list_pane_g

0x6cf0,	// (0x000418e3) list_double2_graphic_large_graphic_pane_ParamLimits

0x6cf0,	// (0x000418e3) list_double2_graphic_large_graphic_pane

0x6cf0,	// (0x000418e3) list_double2_graphic_pane_ParamLimits

0x6cf0,	// (0x000418e3) list_double2_graphic_pane

0x6cf0,	// (0x000418e3) list_double2_large_graphic_pane_ParamLimits

0x6cf0,	// (0x000418e3) list_double2_large_graphic_pane

0x6cf0,	// (0x000418e3) list_double2_pane_ParamLimits

0x6cf0,	// (0x000418e3) list_double2_pane

0x6cf0,	// (0x000418e3) list_double_graphic_heading_pane_ParamLimits

0x6cf0,	// (0x000418e3) list_double_graphic_heading_pane

0x6cf0,	// (0x000418e3) list_double_graphic_pane_ParamLimits

0x6cf0,	// (0x000418e3) list_double_graphic_pane

0x6cf0,	// (0x000418e3) list_double_heading_pane_ParamLimits

0x6cf0,	// (0x000418e3) list_double_heading_pane

0x6cf0,	// (0x000418e3) list_double_large_graphic_pane_ParamLimits

0x6cf0,	// (0x000418e3) list_double_large_graphic_pane

0x6cf0,	// (0x000418e3) list_double_number_pane_ParamLimits

0x6cf0,	// (0x000418e3) list_double_number_pane

0x6cf0,	// (0x000418e3) list_double_pane_ParamLimits

0x6cf0,	// (0x000418e3) list_double_pane

0x6cf0,	// (0x000418e3) list_double_time_pane_ParamLimits

0x6cf0,	// (0x000418e3) list_double_time_pane

0x6cf0,	// (0x000418e3) list_setting_number_pane_ParamLimits

0x6cf0,	// (0x000418e3) list_setting_number_pane

0x6cf0,	// (0x000418e3) list_setting_pane_ParamLimits

0x6cf0,	// (0x000418e3) list_setting_pane

0x6d29,	// (0x0004191c) list_single_2graphic_pane_ParamLimits

0x6d29,	// (0x0004191c) list_single_2graphic_pane

0x6d29,	// (0x0004191c) list_single_graphic_heading_pane_ParamLimits

0x6d29,	// (0x0004191c) list_single_graphic_heading_pane

0x6d29,	// (0x0004191c) list_single_graphic_pane_ParamLimits

0x6d29,	// (0x0004191c) list_single_graphic_pane

0x6d29,	// (0x0004191c) list_single_heading_pane_ParamLimits

0x6d29,	// (0x0004191c) list_single_heading_pane

0x6d67,	// (0x0004195a) list_single_large_graphic_pane_ParamLimits

0x6d67,	// (0x0004195a) list_single_large_graphic_pane

0x6d29,	// (0x0004191c) list_single_number_heading_pane_ParamLimits

0x6d29,	// (0x0004191c) list_single_number_heading_pane

0x6d29,	// (0x0004191c) list_single_number_pane_ParamLimits

0x6d29,	// (0x0004191c) list_single_number_pane

0x6d29,	// (0x0004191c) list_single_pane_ParamLimits

0x6d29,	// (0x0004191c) list_single_pane

0x7f3e,	// (0x00042b31) list_highlight_pane_cp1

0x5d00,	// (0x000408f3) list_single_pane_g1_ParamLimits

0x5d00,	// (0x000408f3) list_single_pane_g1

0x5d0c,	// (0x000408ff) list_single_pane_g2_ParamLimits

0x5d0c,	// (0x000408ff) list_single_pane_g2

0x0001,

0xf5d2,	// (0x0004a1c5) list_single_pane_g_ParamLimits

0xf5d2,	// (0x0004a1c5) list_single_pane_g

0x523a,	// (0x0003fe2d) list_single_pane_t1_ParamLimits

0x523a,	// (0x0003fe2d) list_single_pane_t1

0x5d00,	// (0x000408f3) list_single_number_pane_g1_ParamLimits

0x5d00,	// (0x000408f3) list_single_number_pane_g1

0x5d0c,	// (0x000408ff) list_single_number_pane_g2_ParamLimits

0x5d0c,	// (0x000408ff) list_single_number_pane_g2

0x0001,

0xf5d2,	// (0x0004a1c5) list_single_number_pane_g_ParamLimits

0xf5d2,	// (0x0004a1c5) list_single_number_pane_g

0x51e2,	// (0x0003fdd5) list_single_number_pane_t1_ParamLimits

0x51e2,	// (0x0003fdd5) list_single_number_pane_t1

0x51f8,	// (0x0003fdeb) list_single_number_pane_t2_ParamLimits

0x51f8,	// (0x0003fdeb) list_single_number_pane_t2

0x0001,

0xf964,	// (0x0004a557) list_single_number_pane_t_ParamLimits

0xf964,	// (0x0004a557) list_single_number_pane_t

0x4929,	// (0x0003f51c) list_single_graphic_pane_g1_ParamLimits

0x4929,	// (0x0003f51c) list_single_graphic_pane_g1

0x5d00,	// (0x000408f3) list_single_graphic_pane_g2_ParamLimits

0x5d00,	// (0x000408f3) list_single_graphic_pane_g2

0x5d0c,	// (0x000408ff) list_single_graphic_pane_g3_ParamLimits

0x5d0c,	// (0x000408ff) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0004a1b4) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0004a1b4) list_single_graphic_pane_g

0x4935,	// (0x0003f528) list_single_graphic_pane_t1_ParamLimits

0x4935,	// (0x0003f528) list_single_graphic_pane_t1

0x494b,	// (0x0003f53e) list_single_heading_pane_g1_ParamLimits

0x494b,	// (0x0003f53e) list_single_heading_pane_g1

0x5d0c,	// (0x000408ff) list_single_heading_pane_g2_ParamLimits

0x5d0c,	// (0x000408ff) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x0004a1bb) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x0004a1bb) list_single_heading_pane_g

0x495e,	// (0x0003f551) list_single_heading_pane_t1_ParamLimits

0x495e,	// (0x0003f551) list_single_heading_pane_t1

0x5d18,	// (0x0004090b) list_single_heading_pane_t2_ParamLimits

0x5d18,	// (0x0004090b) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x0004a1c0) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x0004a1c0) list_single_heading_pane_t

0x5d00,	// (0x000408f3) list_single_number_heading_pane_g1_ParamLimits

0x5d00,	// (0x000408f3) list_single_number_heading_pane_g1

0x5d0c,	// (0x000408ff) list_single_number_heading_pane_g2_ParamLimits

0x5d0c,	// (0x000408ff) list_single_number_heading_pane_g2

0x0001,

0xf5d2,	// (0x0004a1c5) list_single_number_heading_pane_g_ParamLimits

0xf5d2,	// (0x0004a1c5) list_single_number_heading_pane_g

0x4974,	// (0x0003f567) list_single_number_heading_pane_t1_ParamLimits

0x4974,	// (0x0003f567) list_single_number_heading_pane_t1

0x498a,	// (0x0003f57d) list_single_number_heading_pane_t2_ParamLimits

0x498a,	// (0x0003f57d) list_single_number_heading_pane_t2

0x499c,	// (0x0003f58f) list_single_number_heading_pane_t3_ParamLimits

0x499c,	// (0x0003f58f) list_single_number_heading_pane_t3

0x0002,

0xf5d7,	// (0x0004a1ca) list_single_number_heading_pane_t_ParamLimits

0xf5d7,	// (0x0004a1ca) list_single_number_heading_pane_t

0x49ae,	// (0x0003f5a1) list_single_graphic_heading_pane_g1_ParamLimits

0x49ae,	// (0x0003f5a1) list_single_graphic_heading_pane_g1

0x5d2a,	// (0x0004091d) list_single_graphic_heading_pane_g4_ParamLimits

0x5d2a,	// (0x0004091d) list_single_graphic_heading_pane_g4

0x5d0c,	// (0x000408ff) list_single_graphic_heading_pane_g5_ParamLimits

0x5d0c,	// (0x000408ff) list_single_graphic_heading_pane_g5

0x0002,

0xf5de,	// (0x0004a1d1) list_single_graphic_heading_pane_g_ParamLimits

0xf5de,	// (0x0004a1d1) list_single_graphic_heading_pane_g

0x4974,	// (0x0003f567) list_single_graphic_heading_pane_t1_ParamLimits

0x4974,	// (0x0003f567) list_single_graphic_heading_pane_t1

0x49c6,	// (0x0003f5b9) list_single_graphic_heading_pane_t2_ParamLimits

0x49c6,	// (0x0003f5b9) list_single_graphic_heading_pane_t2

0x0001,

0xf5e5,	// (0x0004a1d8) list_single_graphic_heading_pane_t_ParamLimits

0xf5e5,	// (0x0004a1d8) list_single_graphic_heading_pane_t

0x5d3b,	// (0x0004092e) list_single_large_graphic_pane_g1_ParamLimits

0x5d3b,	// (0x0004092e) list_single_large_graphic_pane_g1

0x5d47,	// (0x0004093a) list_single_large_graphic_pane_g2_ParamLimits

0x5d47,	// (0x0004093a) list_single_large_graphic_pane_g2

0x5d53,	// (0x00040946) list_single_large_graphic_pane_g3_ParamLimits

0x5d53,	// (0x00040946) list_single_large_graphic_pane_g3

0x0002,

0xf5ea,	// (0x0004a1dd) list_single_large_graphic_pane_g_ParamLimits

0xf5ea,	// (0x0004a1dd) list_single_large_graphic_pane_g

0xa36d,	// (0x00044f60) wait_border_pane_g2_copy1

0x5d5f,	// (0x00040952) list_single_large_graphic_pane_g4_cp2

0x49dc,	// (0x0003f5cf) list_single_large_graphic_pane_t1_ParamLimits

0x49dc,	// (0x0003f5cf) list_single_large_graphic_pane_t1

0x8834,	// (0x00043427) list_double_pane_g1_ParamLimits

0x8834,	// (0x00043427) list_double_pane_g1

0x5d67,	// (0x0004095a) list_double_pane_g2_ParamLimits

0x5d67,	// (0x0004095a) list_double_pane_g2

0x0001,

0xf5f1,	// (0x0004a1e4) list_double_pane_g_ParamLimits

0xf5f1,	// (0x0004a1e4) list_double_pane_g

0x49f2,	// (0x0003f5e5) list_double_pane_t1_ParamLimits

0x49f2,	// (0x0003f5e5) list_double_pane_t1

0x4a08,	// (0x0003f5fb) list_double_pane_t2_ParamLimits

0x4a08,	// (0x0003f5fb) list_double_pane_t2

0x0001,

0xf5f6,	// (0x0004a1e9) list_double_pane_t_ParamLimits

0xf5f6,	// (0x0004a1e9) list_double_pane_t

0x4a1a,	// (0x0003f60d) list_double2_pane_g1_ParamLimits

0x4a1a,	// (0x0003f60d) list_double2_pane_g1

0x4a2b,	// (0x0003f61e) list_double2_pane_g2_ParamLimits

0x4a2b,	// (0x0003f61e) list_double2_pane_g2

0x0001,

0xf5fb,	// (0x0004a1ee) list_double2_pane_g_ParamLimits

0xf5fb,	// (0x0004a1ee) list_double2_pane_g

0x4a37,	// (0x0003f62a) list_double2_pane_t1_ParamLimits

0x4a37,	// (0x0003f62a) list_double2_pane_t1

0x4a4d,	// (0x0003f640) list_double2_pane_t2_ParamLimits

0x4a4d,	// (0x0003f640) list_double2_pane_t2

0x0001,

0xf600,	// (0x0004a1f3) list_double2_pane_t_ParamLimits

0xf600,	// (0x0004a1f3) list_double2_pane_t

0x8834,	// (0x00043427) list_double_number_pane_g1_ParamLimits

0x8834,	// (0x00043427) list_double_number_pane_g1

0x5d67,	// (0x0004095a) list_double_number_pane_g2_ParamLimits

0x5d67,	// (0x0004095a) list_double_number_pane_g2

0x0001,

0xf5f1,	// (0x0004a1e4) list_double_number_pane_g_ParamLimits

0xf5f1,	// (0x0004a1e4) list_double_number_pane_g

0x4a5f,	// (0x0003f652) list_double_number_pane_t1_ParamLimits

0x4a5f,	// (0x0003f652) list_double_number_pane_t1

0x4a71,	// (0x0003f664) list_double_number_pane_t2_ParamLimits

0x4a71,	// (0x0003f664) list_double_number_pane_t2

0x4a87,	// (0x0003f67a) list_double_number_pane_t3_ParamLimits

0x4a87,	// (0x0003f67a) list_double_number_pane_t3

0x0002,

0xf605,	// (0x0004a1f8) list_double_number_pane_t_ParamLimits

0xf605,	// (0x0004a1f8) list_double_number_pane_t

0x4a99,	// (0x0003f68c) list_double_graphic_pane_g1_ParamLimits

0x4a99,	// (0x0003f68c) list_double_graphic_pane_g1

0x4aa5,	// (0x0003f698) list_double_graphic_pane_g2_ParamLimits

0x4aa5,	// (0x0003f698) list_double_graphic_pane_g2

0x4ab4,	// (0x0003f6a7) list_double_graphic_pane_g3_ParamLimits

0x4ab4,	// (0x0003f6a7) list_double_graphic_pane_g3

0x0003,

0xf60c,	// (0x0004a1ff) list_double_graphic_pane_g_ParamLimits

0xf60c,	// (0x0004a1ff) list_double_graphic_pane_g

0x4acc,	// (0x0003f6bf) list_double_graphic_pane_t1_ParamLimits

0x4acc,	// (0x0003f6bf) list_double_graphic_pane_t1

0x4ae2,	// (0x0003f6d5) list_double_graphic_pane_t2_ParamLimits

0x4ae2,	// (0x0003f6d5) list_double_graphic_pane_t2

0x0001,

0xf615,	// (0x0004a208) list_double_graphic_pane_t_ParamLimits

0xf615,	// (0x0004a208) list_double_graphic_pane_t

0x4af4,	// (0x0003f6e7) list_double2_graphic_pane_g1_ParamLimits

0x4af4,	// (0x0003f6e7) list_double2_graphic_pane_g1

0xaa9d,	// (0x00045690) list_double2_graphic_pane_g2_ParamLimits

0xaa9d,	// (0x00045690) list_double2_graphic_pane_g2

0x5d73,	// (0x00040966) list_double2_graphic_pane_g3_ParamLimits

0x5d73,	// (0x00040966) list_double2_graphic_pane_g3

0x0002,

0xf61a,	// (0x0004a20d) list_double2_graphic_pane_g_ParamLimits

0xf61a,	// (0x0004a20d) list_double2_graphic_pane_g

0x4b00,	// (0x0003f6f3) list_double2_graphic_pane_t1_ParamLimits

0x4b00,	// (0x0003f6f3) list_double2_graphic_pane_t1

0x4b16,	// (0x0003f709) list_double2_graphic_pane_t2_ParamLimits

0x4b16,	// (0x0003f709) list_double2_graphic_pane_t2

0x0001,

0xf621,	// (0x0004a214) list_double2_graphic_pane_t_ParamLimits

0xf621,	// (0x0004a214) list_double2_graphic_pane_t

0x4b28,	// (0x0003f71b) list_double_large_graphic_pane_g1_ParamLimits

0x4b28,	// (0x0003f71b) list_double_large_graphic_pane_g1

0x4b47,	// (0x0003f73a) list_double_large_graphic_pane_g2_ParamLimits

0x4b47,	// (0x0003f73a) list_double_large_graphic_pane_g2

0x5d67,	// (0x0004095a) list_double_large_graphic_pane_g3_ParamLimits

0x5d67,	// (0x0004095a) list_double_large_graphic_pane_g3

0x4b5d,	// (0x0003f750) list_double_large_graphic_pane_g4_ParamLimits

0x4b5d,	// (0x0003f750) list_double_large_graphic_pane_g4

0x0004,

0xf626,	// (0x0004a219) list_double_large_graphic_pane_g_ParamLimits

0xf626,	// (0x0004a219) list_double_large_graphic_pane_g

0x4b6e,	// (0x0003f761) list_double_large_graphic_pane_t1_ParamLimits

0x4b6e,	// (0x0003f761) list_double_large_graphic_pane_t1

0x4b87,	// (0x0003f77a) list_double_large_graphic_pane_t2_ParamLimits

0x4b87,	// (0x0003f77a) list_double_large_graphic_pane_t2

0x0001,

0xf631,	// (0x0004a224) list_double_large_graphic_pane_t_ParamLimits

0xf631,	// (0x0004a224) list_double_large_graphic_pane_t

0x5d94,	// (0x00040987) list_double2_large_graphic_pane_g1_ParamLimits

0x5d94,	// (0x00040987) list_double2_large_graphic_pane_g1

0x4b99,	// (0x0003f78c) list_double2_large_graphic_pane_g2_ParamLimits

0x4b99,	// (0x0003f78c) list_double2_large_graphic_pane_g2

0x5d73,	// (0x00040966) list_double2_large_graphic_pane_g3_ParamLimits

0x5d73,	// (0x00040966) list_double2_large_graphic_pane_g3

0x0002,

0xf636,	// (0x0004a229) list_double2_large_graphic_pane_g_ParamLimits

0xf636,	// (0x0004a229) list_double2_large_graphic_pane_g

0x4baa,	// (0x0003f79d) list_double2_large_graphic_pane_t1_ParamLimits

0x4baa,	// (0x0003f79d) list_double2_large_graphic_pane_t1

0x4bc0,	// (0x0003f7b3) list_double2_large_graphic_pane_t2_ParamLimits

0x4bc0,	// (0x0003f7b3) list_double2_large_graphic_pane_t2

0x0001,

0xf63d,	// (0x0004a230) list_double2_large_graphic_pane_t_ParamLimits

0xf63d,	// (0x0004a230) list_double2_large_graphic_pane_t

0x4bd2,	// (0x0003f7c5) list_double_heading_pane_g1_ParamLimits

0x4bd2,	// (0x0003f7c5) list_double_heading_pane_g1

0x5da0,	// (0x00040993) list_double_heading_pane_g2_ParamLimits

0x5da0,	// (0x00040993) list_double_heading_pane_g2

0x0001,

0xf642,	// (0x0004a235) list_double_heading_pane_g_ParamLimits

0xf642,	// (0x0004a235) list_double_heading_pane_g

0x4be3,	// (0x0003f7d6) list_double_heading_pane_t1_ParamLimits

0x4be3,	// (0x0003f7d6) list_double_heading_pane_t1

0x4a4d,	// (0x0003f640) list_double_heading_pane_t2_ParamLimits

0x4a4d,	// (0x0003f640) list_double_heading_pane_t2

0x0001,

0xf647,	// (0x0004a23a) list_double_heading_pane_t_ParamLimits

0xf647,	// (0x0004a23a) list_double_heading_pane_t

0x4bf9,	// (0x0003f7ec) list_double_graphic_heading_pane_g1_ParamLimits

0x4bf9,	// (0x0003f7ec) list_double_graphic_heading_pane_g1

0x4bd2,	// (0x0003f7c5) list_double_graphic_heading_pane_g2_ParamLimits

0x4bd2,	// (0x0003f7c5) list_double_graphic_heading_pane_g2

0x5da0,	// (0x00040993) list_double_graphic_heading_pane_g3_ParamLimits

0x5da0,	// (0x00040993) list_double_graphic_heading_pane_g3

0x0002,

0xf64c,	// (0x0004a23f) list_double_graphic_heading_pane_g_ParamLimits

0xf64c,	// (0x0004a23f) list_double_graphic_heading_pane_g

0x4c05,	// (0x0003f7f8) list_double_graphic_heading_pane_t1_ParamLimits

0x4c05,	// (0x0003f7f8) list_double_graphic_heading_pane_t1

0x4b16,	// (0x0003f709) list_double_graphic_heading_pane_t2_ParamLimits

0x4b16,	// (0x0003f709) list_double_graphic_heading_pane_t2

0x0001,

0xf653,	// (0x0004a246) list_double_graphic_heading_pane_t_ParamLimits

0xf653,	// (0x0004a246) list_double_graphic_heading_pane_t

0x4c1b,	// (0x0003f80e) list_double_time_pane_g1_ParamLimits

0x4c1b,	// (0x0003f80e) list_double_time_pane_g1

0x4c2c,	// (0x0003f81f) list_double_time_pane_g2_ParamLimits

0x4c2c,	// (0x0003f81f) list_double_time_pane_g2

0x0001,

0xf658,	// (0x0004a24b) list_double_time_pane_g_ParamLimits

0xf658,	// (0x0004a24b) list_double_time_pane_g

0x4c38,	// (0x0003f82b) list_double_time_pane_t1_ParamLimits

0x4c38,	// (0x0003f82b) list_double_time_pane_t1

0x4c4e,	// (0x0003f841) list_double_time_pane_t2_ParamLimits

0x4c4e,	// (0x0003f841) list_double_time_pane_t2

0x4c60,	// (0x0003f853) list_double_time_pane_t3_ParamLimits

0x4c60,	// (0x0003f853) list_double_time_pane_t3

0x4c72,	// (0x0003f865) list_double_time_pane_t4_ParamLimits

0x4c72,	// (0x0003f865) list_double_time_pane_t4

0x0003,

0xf65d,	// (0x0004a250) list_double_time_pane_t_ParamLimits

0xf65d,	// (0x0004a250) list_double_time_pane_t

0x4c84,	// (0x0003f877) list_setting_pane_g1_ParamLimits

0x4c84,	// (0x0003f877) list_setting_pane_g1

0x4a2b,	// (0x0003f61e) list_setting_pane_g2_ParamLimits

0x4a2b,	// (0x0003f61e) list_setting_pane_g2

0x0001,

0xf666,	// (0x0004a259) list_setting_pane_g_ParamLimits

0xf666,	// (0x0004a259) list_setting_pane_g

0x4c90,	// (0x0003f883) list_setting_pane_t1_ParamLimits

0x4c90,	// (0x0003f883) list_setting_pane_t1

0x4caa,	// (0x0003f89d) list_setting_pane_t2_ParamLimits

0x4caa,	// (0x0003f89d) list_setting_pane_t2

0x0002,

0xf66b,	// (0x0004a25e) list_setting_pane_t_ParamLimits

0xf66b,	// (0x0004a25e) list_setting_pane_t

0x4ce9,	// (0x0003f8dc) set_value_pane_cp_ParamLimits

0x4ce9,	// (0x0003f8dc) set_value_pane_cp

0x4cf5,	// (0x0003f8e8) list_setting_number_pane_g1_ParamLimits

0x4cf5,	// (0x0003f8e8) list_setting_number_pane_g1

0x4d01,	// (0x0003f8f4) list_setting_number_pane_g2_ParamLimits

0x4d01,	// (0x0003f8f4) list_setting_number_pane_g2

0x0001,

0xf672,	// (0x0004a265) list_setting_number_pane_g_ParamLimits

0xf672,	// (0x0004a265) list_setting_number_pane_g

0x4d0d,	// (0x0003f900) list_setting_number_pane_t1_ParamLimits

0x4d0d,	// (0x0003f900) list_setting_number_pane_t1

0x4d26,	// (0x0003f919) list_setting_number_pane_t2_ParamLimits

0x4d26,	// (0x0003f919) list_setting_number_pane_t2

0x4d40,	// (0x0003f933) list_setting_number_pane_t3_ParamLimits

0x4d40,	// (0x0003f933) list_setting_number_pane_t3

0x0003,

0xf677,	// (0x0004a26a) list_setting_number_pane_t_ParamLimits

0xf677,	// (0x0004a26a) list_setting_number_pane_t

0x4ce9,	// (0x0003f8dc) set_value_pane_ParamLimits

0x4ce9,	// (0x0003f8dc) set_value_pane

0x8840,	// (0x00043433) bg_set_opt_pane_ParamLimits

0x8840,	// (0x00043433) bg_set_opt_pane

0x4d83,	// (0x0003f976) set_value_pane_t1

0x8861,	// (0x00043454) slider_set_pane_cp3

0x886a,	// (0x0004345d) volume_small_pane_cp

0x8873,	// (0x00043466) list_form_gen_pane

0x887c,	// (0x0004346f) scroll_pane_cp8

0x4d99,	// (0x0003f98c) form_field_data_pane_ParamLimits

0x4d99,	// (0x0003f98c) form_field_data_pane

0x4dbd,	// (0x0003f9b0) form_field_data_wide_pane_ParamLimits

0x4dbd,	// (0x0003f9b0) form_field_data_wide_pane

0x4de0,	// (0x0003f9d3) form_field_popup_pane_ParamLimits

0x4de0,	// (0x0003f9d3) form_field_popup_pane

0x4e00,	// (0x0003f9f3) form_field_popup_wide_pane_ParamLimits

0x4e00,	// (0x0003f9f3) form_field_popup_wide_pane

0x4e1f,	// (0x0003fa12) form_field_slider_pane_ParamLimits

0x4e1f,	// (0x0003fa12) form_field_slider_pane

0x4e32,	// (0x0003fa25) form_field_slider_wide_pane_ParamLimits

0x4e32,	// (0x0003fa25) form_field_slider_wide_pane

0x888d,	// (0x00043480) data_form_pane

0x4e4f,	// (0x0003fa42) form_field_data_pane_t1

0x8899,	// (0x0004348c) input_focus_pane

0x4e67,	// (0x0003fa5a) data_form_wide_pane

0x4e84,	// (0x0003fa77) form_field_data_wide_pane_t1

0x85fe,	// (0x000431f1) input_focus_pane_cp6

0x4ea6,	// (0x0003fa99) form_field_popup_pane_t1

0x8899,	// (0x0004348c) input_focus_pane_cp7

0x88bb,	// (0x000434ae) list_form_pane

0x4ec6,	// (0x0003fab9) form_field_popup_wide_pane_t1

0x8899,	// (0x0004348c) input_focus_pane_cp8

0x88c7,	// (0x000434ba) list_form_wide_pane

0x4ee3,	// (0x0003fad6) form_field_slider_pane_t1_ParamLimits

0x4ee3,	// (0x0003fad6) form_field_slider_pane_t1

0x4ef9,	// (0x0003faec) form_field_slider_pane_t2_ParamLimits

0x4ef9,	// (0x0003faec) form_field_slider_pane_t2

0x0001,

0xf687,	// (0x0004a27a) form_field_slider_pane_t_ParamLimits

0xf687,	// (0x0004a27a) form_field_slider_pane_t

0x8299,	// (0x00042e8c) input_focus_pane_cp9_ParamLimits

0x8299,	// (0x00042e8c) input_focus_pane_cp9

0x4f0e,	// (0x0003fb01) slider_cont_pane_ParamLimits

0x4f0e,	// (0x0003fb01) slider_cont_pane

0x88d6,	// (0x000434c9) form_field_slider_wide_pane_t1_ParamLimits

0x88d6,	// (0x000434c9) form_field_slider_wide_pane_t1

0x4f22,	// (0x0003fb15) form_field_slider_wide_pane_t2_ParamLimits

0x4f22,	// (0x0003fb15) form_field_slider_wide_pane_t2

0x0001,

0xf68c,	// (0x0004a27f) form_field_slider_wide_pane_t_ParamLimits

0xf68c,	// (0x0004a27f) form_field_slider_wide_pane_t

0x8299,	// (0x00042e8c) input_focus_pane_cp10_ParamLimits

0x8299,	// (0x00042e8c) input_focus_pane_cp10

0x4f34,	// (0x0003fb27) slider_cont_pane_cp1_ParamLimits

0x4f34,	// (0x0003fb27) slider_cont_pane_cp1

0x4f48,	// (0x0003fb3b) slider_form_pane_cp

0x88e8,	// (0x000434db) input_focus_pane_g1

0x88f0,	// (0x000434e3) input_focus_pane_g2

0x88f8,	// (0x000434eb) input_focus_pane_g3

0x8900,	// (0x000434f3) input_focus_pane_g4

0x8908,	// (0x000434fb) input_focus_pane_g5

0x8910,	// (0x00043503) input_focus_pane_g6

0x8918,	// (0x0004350b) input_focus_pane_g7

0x8920,	// (0x00043513) input_focus_pane_g8

0x8928,	// (0x0004351b) input_focus_pane_g9

0x7f34,	// (0x00042b27) input_focus_pane_g10

0x0009,

0xf691,	// (0x0004a284) input_focus_pane_g

0xa376,	// (0x00044f69) wait_border_pane_g3_copy1

0x4f50,	// (0x0003fb43) data_form_pane_t1

0x7f34,	// (0x00042b27) wait_anim_pane_g1_copy1

0x520a,	// (0x0003fdfd) data_form_wide_pane_t1

0x4f6b,	// (0x0003fb5e) list_form_graphic_pane_cp_ParamLimits

0x4f6b,	// (0x0003fb5e) list_form_graphic_pane_cp

0xb2a3,	// (0x00045e96) slider_form_pane_g1

0xb2ac,	// (0x00045e9f) slider_form_pane_g2

0x0006,

0xf994,	// (0x0004a587) slider_form_pane_g

0x4f84,	// (0x0003fb77) list_form_graphic_pane_ParamLimits

0x4f84,	// (0x0003fb77) list_form_graphic_pane

0x4fa0,	// (0x0003fb93) list_form_graphic_pane_g1

0x4fa8,	// (0x0003fb9b) list_form_graphic_pane_t1_ParamLimits

0x4fa8,	// (0x0003fb9b) list_form_graphic_pane_t1

0x801e,	// (0x00042c11) list_highlight_pane_cp5_ParamLimits

0x801e,	// (0x00042c11) list_highlight_pane_cp5

0x4fbd,	// (0x0003fbb0) find_pane_g1

0x8930,	// (0x00043523) input_find_pane

0x4fc6,	// (0x0003fbb9) input_find_pane_g1_ParamLimits

0x4fc6,	// (0x0003fbb9) input_find_pane_g1

0x4fd2,	// (0x0003fbc5) input_find_pane_t1_ParamLimits

0x4fd2,	// (0x0003fbc5) input_find_pane_t1

0x4fe7,	// (0x0003fbda) input_find_pane_t2_ParamLimits

0x4fe7,	// (0x0003fbda) input_find_pane_t2

0x0001,

0xf6a6,	// (0x0004a299) input_find_pane_t_ParamLimits

0xf6a6,	// (0x0004a299) input_find_pane_t

0x8939,	// (0x0004352c) input_focus_pane_cp5_ParamLimits

0x8939,	// (0x0004352c) input_focus_pane_cp5

0x8953,	// (0x00043546) bg_popup_window_pane_cp2_ParamLimits

0x8953,	// (0x00043546) bg_popup_window_pane_cp2

0x8960,	// (0x00043553) listscroll_menu_pane_ParamLimits

0x8960,	// (0x00043553) listscroll_menu_pane

0x896c,	// (0x0004355f) popup_submenu_window_ParamLimits

0x896c,	// (0x0004355f) popup_submenu_window

0x8998,	// (0x0004358b) find_popup_pane_g1

0x89a0,	// (0x00043593) input_popup_find_pane_cp

0x8939,	// (0x0004352c) input_focus_pane_cp4_ParamLimits

0x8939,	// (0x0004352c) input_focus_pane_cp4

0x89b6,	// (0x000435a9) input_popup_find_pane_t1_ParamLimits

0x89b6,	// (0x000435a9) input_popup_find_pane_t1

0x7f3e,	// (0x00042b31) bg_popup_sub_pane_cp

0x89e4,	// (0x000435d7) listscroll_popup_sub_pane

0x89ec,	// (0x000435df) list_submenu_pane_ParamLimits

0x89ec,	// (0x000435df) list_submenu_pane

0x89fd,	// (0x000435f0) scroll_pane_cp4

0x8a05,	// (0x000435f8) list_single_popup_submenu_pane_ParamLimits

0x8a05,	// (0x000435f8) list_single_popup_submenu_pane

0x8a19,	// (0x0004360c) list_single_popup_submenu_pane_g1

0x8a21,	// (0x00043614) list_single_popup_submenu_pane_t1_ParamLimits

0x8a21,	// (0x00043614) list_single_popup_submenu_pane_t1

0x801e,	// (0x00042c11) bg_active_tab_pane_cp1_ParamLimits

0x801e,	// (0x00042c11) bg_active_tab_pane_cp1

0x8a36,	// (0x00043629) tabs_2_active_pane_g1

0x8a3e,	// (0x00043631) tabs_2_active_pane_t1

0x801e,	// (0x00042c11) bg_passive_tab_pane_cp1_ParamLimits

0x801e,	// (0x00042c11) bg_passive_tab_pane_cp1

0x8a36,	// (0x00043629) tabs_2_passive_pane_g1

0x8a3e,	// (0x00043631) tabs_2_passive_pane_t1

0x8a50,	// (0x00043643) bg_active_tab_pane_cp4

0x8a5e,	// (0x00043651) tabs_2_long_active_pane_t1

0x8a71,	// (0x00043664) bg_passive_tab_pane_cp4

0x6059,	// (0x00040c4c) list_single_midp_graphic_pane_g4_ParamLimits

0x8a50,	// (0x00043643) bg_active_tab_pane_cp5

0x8a7d,	// (0x00043670) tabs_3_long_active_pane_t1

0x8a71,	// (0x00043664) bg_passive_tab_pane_cp5

0x6059,	// (0x00040c4c) list_single_midp_graphic_pane_g4

0x801e,	// (0x00042c11) bg_popup_window_pane_cp13_ParamLimits

0x801e,	// (0x00042c11) bg_popup_window_pane_cp13

0x8a98,	// (0x0004368b) listscroll_popup_fast_pane_ParamLimits

0x8a98,	// (0x0004368b) listscroll_popup_fast_pane

0x8aa7,	// (0x0004369a) grid_popup_fast_pane_ParamLimits

0x8aa7,	// (0x0004369a) grid_popup_fast_pane

0x8ab9,	// (0x000436ac) scroll_pane_cp9_ParamLimits

0x8ab9,	// (0x000436ac) scroll_pane_cp9

0xcb6a,	// (0x0004775d) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xcb6a,	// (0x0004775d) list_single_graphic_hl_pane_t1_cp2

0x8add,	// (0x000436d0) input_focus_pane_cp20_ParamLimits

0x8add,	// (0x000436d0) input_focus_pane_cp20

0x8aeb,	// (0x000436de) query_popup_data_pane_t1_ParamLimits

0x8aeb,	// (0x000436de) query_popup_data_pane_t1

0x8afe,	// (0x000436f1) query_popup_data_pane_t2_ParamLimits

0x8afe,	// (0x000436f1) query_popup_data_pane_t2

0x8b44,	// (0x00043737) query_popup_data_pane_t3_ParamLimits

0x8b44,	// (0x00043737) query_popup_data_pane_t3

0x8b85,	// (0x00043778) query_popup_data_pane_t4_ParamLimits

0x8b85,	// (0x00043778) query_popup_data_pane_t4

0x8bc1,	// (0x000437b4) query_popup_data_pane_t5_ParamLimits

0x8bc1,	// (0x000437b4) query_popup_data_pane_t5

0x0004,

0xf6ab,	// (0x0004a29e) query_popup_data_pane_t_ParamLimits

0xf6ab,	// (0x0004a29e) query_popup_data_pane_t

0x88e8,	// (0x000434db) bg_set_opt_pane_g1

0x88f0,	// (0x000434e3) bg_set_opt_pane_g2

0x88f8,	// (0x000434eb) bg_set_opt_pane_g3

0x8900,	// (0x000434f3) bg_set_opt_pane_g4

0x8908,	// (0x000434fb) bg_set_opt_pane_g5

0x8910,	// (0x00043503) bg_set_opt_pane_g6

0x8918,	// (0x0004350b) bg_set_opt_pane_g7

0x8920,	// (0x00043513) bg_set_opt_pane_g8

0x8928,	// (0x0004351b) bg_set_opt_pane_g9

0x0008,

0xf6b6,	// (0x0004a2a9) bg_set_opt_pane_g

0x6065,	// (0x00040c58) control_top_pane_stacon_ParamLimits

0x6065,	// (0x00040c58) control_top_pane_stacon

0x60b8,	// (0x00040cab) signal_pane_stacon_ParamLimits

0x60b8,	// (0x00040cab) signal_pane_stacon

0x91ad,	// (0x00043da0) stacon_top_pane_g1_ParamLimits

0x91ad,	// (0x00043da0) stacon_top_pane_g1

0x60dd,	// (0x00040cd0) title_pane_stacon_ParamLimits

0x60dd,	// (0x00040cd0) title_pane_stacon

0x6107,	// (0x00040cfa) uni_indicator_pane_stacon_ParamLimits

0x6107,	// (0x00040cfa) uni_indicator_pane_stacon

0x611c,	// (0x00040d0f) battery_pane_stacon_ParamLimits

0x611c,	// (0x00040d0f) battery_pane_stacon

0x6160,	// (0x00040d53) control_bottom_pane_stacon_ParamLimits

0x6160,	// (0x00040d53) control_bottom_pane_stacon

0x6183,	// (0x00040d76) navi_pane_stacon_ParamLimits

0x6183,	// (0x00040d76) navi_pane_stacon

0x91cf,	// (0x00043dc2) stacon_bottom_pane_g1_ParamLimits

0x91cf,	// (0x00043dc2) stacon_bottom_pane_g1

0x5dac,	// (0x0004099f) aid_levels_signal_lsc_ParamLimits

0x5dac,	// (0x0004099f) aid_levels_signal_lsc

0x5dc2,	// (0x000409b5) signal_pane_stacon_g1_ParamLimits

0x5dc2,	// (0x000409b5) signal_pane_stacon_g1

0x5dd6,	// (0x000409c9) signal_pane_stacon_g2_ParamLimits

0x5dd6,	// (0x000409c9) signal_pane_stacon_g2

0x0001,

0xf6c9,	// (0x0004a2bc) signal_pane_stacon_g_ParamLimits

0xf6c9,	// (0x0004a2bc) signal_pane_stacon_g

0x5e0b,	// (0x000409fe) title_pane_stacon_t1_ParamLimits

0x5e0b,	// (0x000409fe) title_pane_stacon_t1

0x8c05,	// (0x000437f8) uni_indicator_pane_stacon_g1

0x8c0f,	// (0x00043802) uni_indicator_pane_stacon_g2

0x8c19,	// (0x0004380c) uni_indicator_pane_stacon_g3

0x8c23,	// (0x00043816) uni_indicator_pane_stacon_g4

0x0003,

0xf6d5,	// (0x0004a2c8) uni_indicator_pane_stacon_g

0x5e30,	// (0x00040a23) control_top_pane_stacon_g1

0x5e38,	// (0x00040a2b) control_top_pane_stacon_t1_ParamLimits

0x5e38,	// (0x00040a2b) control_top_pane_stacon_t1

0x5e6f,	// (0x00040a62) aid_levels_battery_lsc_ParamLimits

0x5e6f,	// (0x00040a62) aid_levels_battery_lsc

0x5e86,	// (0x00040a79) battery_pane_stacon_g1_ParamLimits

0x5e86,	// (0x00040a79) battery_pane_stacon_g1

0x5e99,	// (0x00040a8c) battery_pane_stacon_g2_ParamLimits

0x5e99,	// (0x00040a8c) battery_pane_stacon_g2

0x0001,

0xf6de,	// (0x0004a2d1) battery_pane_stacon_g_ParamLimits

0xf6de,	// (0x0004a2d1) battery_pane_stacon_g

0x5ed7,	// (0x00040aca) navi_icon_pane_stacon

0x5eeb,	// (0x00040ade) navi_navi_pane_stacon

0x5ed7,	// (0x00040aca) navi_text_pane_stacon

0x5e30,	// (0x00040a23) control_bottom_pane_stacon_g1

0x5eff,	// (0x00040af2) control_bottom_pane_stacon_t1_ParamLimits

0x5eff,	// (0x00040af2) control_bottom_pane_stacon_t1

0x8c47,	// (0x0004383a) grid_app_pane_ParamLimits

0x8c47,	// (0x0004383a) grid_app_pane

0x8c6b,	// (0x0004385e) scroll_pane_cp15_ParamLimits

0x8c6b,	// (0x0004385e) scroll_pane_cp15

0x8c7e,	// (0x00043871) cell_app_pane_ParamLimits

0x8c7e,	// (0x00043871) cell_app_pane

0x8ca2,	// (0x00043895) cell_app_pane_g1_ParamLimits

0x8ca2,	// (0x00043895) cell_app_pane_g1

0x8cc2,	// (0x000438b5) cell_app_pane_g2_ParamLimits

0x8cc2,	// (0x000438b5) cell_app_pane_g2

0x0001,

0xf6e3,	// (0x0004a2d6) cell_app_pane_g_ParamLimits

0xf6e3,	// (0x0004a2d6) cell_app_pane_g

0x8cce,	// (0x000438c1) cell_app_pane_t1_ParamLimits

0x8cce,	// (0x000438c1) cell_app_pane_t1

0x8ce5,	// (0x000438d8) grid_highlight_pane_ParamLimits

0x8ce5,	// (0x000438d8) grid_highlight_pane

0x88e8,	// (0x000434db) cell_highlight_pane_g1

0x88f0,	// (0x000434e3) cell_highlight_pane_g2

0x88f8,	// (0x000434eb) cell_highlight_pane_g3

0x8900,	// (0x000434f3) cell_highlight_pane_g4

0x8908,	// (0x000434fb) cell_highlight_pane_g5

0x8910,	// (0x00043503) cell_highlight_pane_g6

0x8918,	// (0x0004350b) cell_highlight_pane_g7

0x8920,	// (0x00043513) cell_highlight_pane_g8

0x8928,	// (0x0004351b) cell_highlight_pane_g9

0x7f34,	// (0x00042b27) cell_highlight_pane_g10

0x0009,

0xf691,	// (0x0004a284) cell_highlight_pane_g

0x8cf6,	// (0x000438e9) bg_scroll_pane

0x5f49,	// (0x00040b3c) scroll_handle_pane

0x8d3d,	// (0x00043930) scroll_bg_pane_g1

0x8d52,	// (0x00043945) scroll_bg_pane_g2

0x8d6a,	// (0x0004395d) scroll_bg_pane_g3

0x0002,

0xf6e8,	// (0x0004a2db) scroll_bg_pane_g

0x8d7f,	// (0x00043972) scroll_handle_focus_pane_ParamLimits

0x8d7f,	// (0x00043972) scroll_handle_focus_pane

0x8d3d,	// (0x00043930) scroll_handle_pane_g1

0x8d8c,	// (0x0004397f) scroll_handle_pane_g2

0x8d6a,	// (0x0004395d) scroll_handle_pane_g3

0x0002,

0xf6ef,	// (0x0004a2e2) scroll_handle_pane_g

0x8939,	// (0x0004352c) bg_popup_sub_pane_cp21_ParamLimits

0x8939,	// (0x0004352c) bg_popup_sub_pane_cp21

0x8da0,	// (0x00043993) popup_fep_japan_predictive_window_t1_ParamLimits

0x8da0,	// (0x00043993) popup_fep_japan_predictive_window_t1

0x8dba,	// (0x000439ad) popup_fep_japan_predictive_window_t2_ParamLimits

0x8dba,	// (0x000439ad) popup_fep_japan_predictive_window_t2

0x8ded,	// (0x000439e0) popup_fep_japan_predictive_window_t3_ParamLimits

0x8ded,	// (0x000439e0) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f6,	// (0x0004a2e9) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f6,	// (0x0004a2e9) popup_fep_japan_predictive_window_t

0x7f3e,	// (0x00042b31) bg_popup_sub_pane_cp23

0x8e24,	// (0x00043a17) listscroll_japin_cand_pane

0x8e2c,	// (0x00043a1f) popup_fep_japan_candidate_window_t1

0x8e3a,	// (0x00043a2d) candidate_pane_ParamLimits

0x8e3a,	// (0x00043a2d) candidate_pane

0x8e4c,	// (0x00043a3f) scroll_pane_cp30

0x8e54,	// (0x00043a47) list_single_popup_jap_candidate_pane_ParamLimits

0x8e54,	// (0x00043a47) list_single_popup_jap_candidate_pane

0x7f3e,	// (0x00042b31) list_highlight_pane_cp30

0x8e69,	// (0x00043a5c) list_single_popup_jap_candidate_pane_t1

0x8e78,	// (0x00043a6b) level_1_signal

0x8e8a,	// (0x00043a7d) level_2_signal

0x8e9d,	// (0x00043a90) level_3_signal

0x8eb0,	// (0x00043aa3) level_4_signal

0x8ec3,	// (0x00043ab6) level_5_signal

0x8ed6,	// (0x00043ac9) level_6_signal

0x8ee9,	// (0x00043adc) level_7_signal

0x8e78,	// (0x00043a6b) level_1_battery

0x8e8a,	// (0x00043a7d) level_2_battery

0x8e9d,	// (0x00043a90) level_3_battery

0x8eb0,	// (0x00043aa3) level_4_battery

0x8ec3,	// (0x00043ab6) level_5_battery

0x8ed6,	// (0x00043ac9) level_6_battery

0x8ee9,	// (0x00043adc) level_7_battery

0x8f14,	// (0x00043b07) list_menu_pane_ParamLimits

0x8f14,	// (0x00043b07) list_menu_pane

0x8f2a,	// (0x00043b1d) scroll_pane_cp25_ParamLimits

0x8f2a,	// (0x00043b1d) scroll_pane_cp25

0x8f43,	// (0x00043b36) list_double2_graphic_pane_cp2_ParamLimits

0x8f43,	// (0x00043b36) list_double2_graphic_pane_cp2

0x8f43,	// (0x00043b36) list_double2_large_graphic_pane_cp2_ParamLimits

0x8f43,	// (0x00043b36) list_double2_large_graphic_pane_cp2

0x8f43,	// (0x00043b36) list_double2_pane_cp2_ParamLimits

0x8f43,	// (0x00043b36) list_double2_pane_cp2

0x8f43,	// (0x00043b36) list_double_graphic_pane_cp2_ParamLimits

0x8f43,	// (0x00043b36) list_double_graphic_pane_cp2

0x8f43,	// (0x00043b36) list_double_large_graphic_pane_cp2_ParamLimits

0x8f43,	// (0x00043b36) list_double_large_graphic_pane_cp2

0x8f43,	// (0x00043b36) list_double_number_pane_cp2_ParamLimits

0x8f43,	// (0x00043b36) list_double_number_pane_cp2

0x8f43,	// (0x00043b36) list_double_pane_cp2_ParamLimits

0x8f43,	// (0x00043b36) list_double_pane_cp2

0x8f67,	// (0x00043b5a) list_single_2graphic_pane_cp2_ParamLimits

0x8f67,	// (0x00043b5a) list_single_2graphic_pane_cp2

0x8f67,	// (0x00043b5a) list_single_graphic_heading_pane_cp2_ParamLimits

0x8f67,	// (0x00043b5a) list_single_graphic_heading_pane_cp2

0x8f67,	// (0x00043b5a) list_single_graphic_pane_cp2_ParamLimits

0x8f67,	// (0x00043b5a) list_single_graphic_pane_cp2

0x8f67,	// (0x00043b5a) list_single_heading_pane_cp2_ParamLimits

0x8f67,	// (0x00043b5a) list_single_heading_pane_cp2

0x8f80,	// (0x00043b73) list_single_large_graphic_pane_cp2_ParamLimits

0x8f80,	// (0x00043b73) list_single_large_graphic_pane_cp2

0x8f67,	// (0x00043b5a) list_single_number_heading_pane_cp2_ParamLimits

0x8f67,	// (0x00043b5a) list_single_number_heading_pane_cp2

0x8f67,	// (0x00043b5a) list_single_number_pane_cp2_ParamLimits

0x8f67,	// (0x00043b5a) list_single_number_pane_cp2

0x8f67,	// (0x00043b5a) list_single_pane_cp2_ParamLimits

0x8f67,	// (0x00043b5a) list_single_pane_cp2

0x8ffc,	// (0x00043bef) bg_popup_sub_pane_cp22

0x5ffb,	// (0x00040bee) popup_side_volume_key_window_g1

0x6025,	// (0x00040c18) popup_side_volume_key_window_t1

0x6041,	// (0x00040c34) volume_small_pane_cp1

0x8299,	// (0x00042e8c) bg_popup_sub_pane_cp24_ParamLimits

0x8299,	// (0x00042e8c) bg_popup_sub_pane_cp24

0x9012,	// (0x00043c05) fep_china_uni_candidate_pane_ParamLimits

0x9012,	// (0x00043c05) fep_china_uni_candidate_pane

0x9026,	// (0x00043c19) fep_china_uni_entry_pane

0x9036,	// (0x00043c29) popup_fep_china_uni_window_g1

0x9052,	// (0x00043c45) fep_china_uni_entry_pane_g1

0x905a,	// (0x00043c4d) fep_china_uni_entry_pane_g2

0x0001,

0xf727,	// (0x0004a31a) fep_china_uni_entry_pane_g

0x9062,	// (0x00043c55) fep_entry_item_pane

0x906c,	// (0x00043c5f) fep_candidate_item_pane

0x9074,	// (0x00043c67) fep_china_uni_candidate_pane_g1

0x907c,	// (0x00043c6f) fep_china_uni_candidate_pane_g2

0x9084,	// (0x00043c77) fep_china_uni_candidate_pane_g3

0x908c,	// (0x00043c7f) fep_china_uni_candidate_pane_g4

0x0003,

0xf72c,	// (0x0004a31f) fep_china_uni_candidate_pane_g

0x7f34,	// (0x00042b27) fep_entry_item_pane_g1

0x9094,	// (0x00043c87) fep_entry_item_pane_t1_ParamLimits

0x9094,	// (0x00043c87) fep_entry_item_pane_t1

0x90aa,	// (0x00043c9d) fep_candidate_item_pane_t1_ParamLimits

0x90aa,	// (0x00043c9d) fep_candidate_item_pane_t1

0x90bf,	// (0x00043cb2) fep_candidate_item_pane_t2_ParamLimits

0x90bf,	// (0x00043cb2) fep_candidate_item_pane_t2

0x0001,

0xf735,	// (0x0004a328) fep_candidate_item_pane_t_ParamLimits

0xf735,	// (0x0004a328) fep_candidate_item_pane_t

0x801e,	// (0x00042c11) list_highlight_pane_cp31_ParamLimits

0x801e,	// (0x00042c11) list_highlight_pane_cp31

0x90d1,	// (0x00043cc4) level_1_signal_lsc

0x90da,	// (0x00043ccd) level_2_signal_lsc

0x90e3,	// (0x00043cd6) level_3_signal_lsc

0x90ec,	// (0x00043cdf) level_4_signal_lsc

0x90f5,	// (0x00043ce8) level_5_signal_lsc

0x90fe,	// (0x00043cf1) level_6_signal_lsc

0x9107,	// (0x00043cfa) level_7_signal_lsc

0x9107,	// (0x00043cfa) level_1_battery_lsc

0x9110,	// (0x00043d03) level_2_battery_lsc

0x9119,	// (0x00043d0c) level_3_battery_lsc

0x9122,	// (0x00043d15) level_4_battery_lsc

0x912b,	// (0x00043d1e) level_5_battery_lsc

0x9134,	// (0x00043d27) level_6_battery_lsc

0x90d1,	// (0x00043cc4) level_7_battery_lsc

0x913d,	// (0x00043d30) scroll_handle_focus_pane_g1

0x9146,	// (0x00043d39) scroll_handle_focus_pane_g2

0x914f,	// (0x00043d42) scroll_handle_focus_pane_g3

0x0002,

0xf73a,	// (0x0004a32d) scroll_handle_focus_pane_g

0x4ffc,	// (0x0003fbef) list_single_2graphic_pane_g1_ParamLimits

0x4ffc,	// (0x0003fbef) list_single_2graphic_pane_g1

0x5d2a,	// (0x0004091d) list_single_2graphic_pane_g2_ParamLimits

0x5d2a,	// (0x0004091d) list_single_2graphic_pane_g2

0x5d0c,	// (0x000408ff) list_single_2graphic_pane_g3_ParamLimits

0x5d0c,	// (0x000408ff) list_single_2graphic_pane_g3

0x5008,	// (0x0003fbfb) list_single_2graphic_pane_g4_ParamLimits

0x5008,	// (0x0003fbfb) list_single_2graphic_pane_g4

0x0003,

0xf741,	// (0x0004a334) list_single_2graphic_pane_g_ParamLimits

0xf741,	// (0x0004a334) list_single_2graphic_pane_g

0x5014,	// (0x0003fc07) list_single_2graphic_pane_t1_ParamLimits

0x5014,	// (0x0003fc07) list_single_2graphic_pane_t1

0x6049,	// (0x00040c3c) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x6049,	// (0x00040c3c) list_double2_graphic_large_graphic_pane_g1

0x4b99,	// (0x0003f78c) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x4b99,	// (0x0003f78c) list_double2_graphic_large_graphic_pane_g2

0x5d73,	// (0x00040966) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x5d73,	// (0x00040966) list_double2_graphic_large_graphic_pane_g3

0x6059,	// (0x00040c4c) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x6059,	// (0x00040c4c) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf74a,	// (0x0004a33d) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf74a,	// (0x0004a33d) list_double2_graphic_large_graphic_pane_g

0x5042,	// (0x0003fc35) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x5042,	// (0x0003fc35) list_double2_graphic_large_graphic_pane_t1

0x5058,	// (0x0003fc4b) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x5058,	// (0x0003fc4b) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf753,	// (0x0004a346) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf753,	// (0x0004a346) list_double2_graphic_large_graphic_pane_t

0x9297,	// (0x00043e8a) popup_fast_swap_window_ParamLimits

0x9297,	// (0x00043e8a) popup_fast_swap_window

0x92b3,	// (0x00043ea6) popup_side_volume_key_window

0x92cf,	// (0x00043ec2) stacon_top_pane

0x92d9,	// (0x00043ecc) status_pane_ParamLimits

0x92d9,	// (0x00043ecc) status_pane

0x92e7,	// (0x00043eda) status_small_pane

0x7f3e,	// (0x00042b31) control_pane

0x7f3e,	// (0x00042b31) stacon_bottom_pane

0x887c,	// (0x0004346f) scroll_pane_cp121

0x8873,	// (0x00043466) set_content_pane

0x9158,	// (0x00043d4b) bg_active_tab_pane_g1_cp1

0x9161,	// (0x00043d54) bg_active_tab_pane_g2_cp1

0x916a,	// (0x00043d5d) bg_active_tab_pane_g3_cp1

0x9158,	// (0x00043d4b) bg_passive_tab_pane_g1_cp1

0x9161,	// (0x00043d54) bg_passive_tab_pane_g2_cp1

0x916a,	// (0x00043d5d) bg_passive_tab_pane_g3_cp1

0x9173,	// (0x00043d66) bg_active_tab_pane_g1_cp2

0x9161,	// (0x00043d54) bg_active_tab_pane_g2_cp2

0x917c,	// (0x00043d6f) bg_active_tab_pane_g3_cp2

0x9173,	// (0x00043d66) bg_passive_tab_pane_g1_cp2

0x9161,	// (0x00043d54) bg_passive_tab_pane_g2_cp2

0x917c,	// (0x00043d6f) bg_passive_tab_pane_g3_cp2

0x9185,	// (0x00043d78) bg_active_tab_pane_g1_cp3

0x9161,	// (0x00043d54) bg_active_tab_pane_g2_cp3

0x918e,	// (0x00043d81) bg_active_tab_pane_g3_cp3

0x9185,	// (0x00043d78) bg_passive_tab_pane_g1_cp3

0x9161,	// (0x00043d54) bg_passive_tab_pane_g2_cp3

0x918e,	// (0x00043d81) bg_passive_tab_pane_g3_cp3

0x9197,	// (0x00043d8a) bg_active_tab_pane_g1_cp4

0x9161,	// (0x00043d54) bg_active_tab_pane_g2_cp4

0x91a2,	// (0x00043d95) bg_active_tab_pane_g3_cp4

0x9197,	// (0x00043d8a) bg_passive_tab_pane_g1_cp4

0x9161,	// (0x00043d54) bg_passive_tab_pane_g2_cp4

0x91a2,	// (0x00043d95) bg_passive_tab_pane_g3_cp4

0x91eb,	// (0x00043dde) bg_active_tab_pane_g1_cp5

0x9161,	// (0x00043d54) bg_active_tab_pane_g2_cp5

0x91f4,	// (0x00043de7) bg_active_tab_pane_g3_cp5

0x91eb,	// (0x00043dde) bg_passive_tab_pane_g1_cp5

0x9161,	// (0x00043d54) bg_passive_tab_pane_g2_cp5

0x91f4,	// (0x00043de7) bg_passive_tab_pane_g3_cp5

0x91fd,	// (0x00043df0) list_set_graphic_pane_ParamLimits

0x91fd,	// (0x00043df0) list_set_graphic_pane

0x7f3e,	// (0x00042b31) bg_set_opt_pane_cp4

0x921a,	// (0x00043e0d) list_set_graphic_pane_g1_ParamLimits

0x921a,	// (0x00043e0d) list_set_graphic_pane_g1

0x9226,	// (0x00043e19) list_set_graphic_pane_g2_ParamLimits

0x9226,	// (0x00043e19) list_set_graphic_pane_g2

0x0001,

0xf758,	// (0x0004a34b) list_set_graphic_pane_g_ParamLimits

0xf758,	// (0x0004a34b) list_set_graphic_pane_g

0x0009,

0xfacd,	// (0x0004a6c0) volume_small_pane_cp_g

0x924a,	// (0x00043e3d) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x924a,	// (0x00043e3d) list_double2_large_graphic_pane_g1_cp2

0x9256,	// (0x00043e49) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x9256,	// (0x00043e49) list_double2_large_graphic_pane_g2_cp2

0x9267,	// (0x00043e5a) list_double2_large_graphic_pane_g3_cp2

0x926f,	// (0x00043e62) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x926f,	// (0x00043e62) list_double2_large_graphic_pane_t1_cp2

0x9285,	// (0x00043e78) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x9285,	// (0x00043e78) list_double2_large_graphic_pane_t2_cp2

0xae55,	// (0x00045a48) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xae55,	// (0x00045a48) list_double_large_graphic_pane_g1_cp2

0xae66,	// (0x00045a59) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xae66,	// (0x00045a59) list_double_large_graphic_pane_g2_cp2

0x9400,	// (0x00043ff3) list_double_large_graphic_pane_g3_cp2

0xae77,	// (0x00045a6a) list_double_large_graphic_pane_g4_cp

0xae7f,	// (0x00045a72) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xae7f,	// (0x00045a72) list_double_large_graphic_pane_t1_cp2

0xae96,	// (0x00045a89) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xae96,	// (0x00045a89) list_double_large_graphic_pane_t2_cp2

0x92f2,	// (0x00043ee5) list_double2_graphic_pane_g1_cp2_ParamLimits

0x92f2,	// (0x00043ee5) list_double2_graphic_pane_g1_cp2

0x9300,	// (0x00043ef3) list_double2_graphic_pane_g2_cp2_ParamLimits

0x9300,	// (0x00043ef3) list_double2_graphic_pane_g2_cp2

0x9311,	// (0x00043f04) list_double2_graphic_pane_g3_cp2

0x931b,	// (0x00043f0e) list_double2_graphic_pane_t1_cp2_ParamLimits

0x931b,	// (0x00043f0e) list_double2_graphic_pane_t1_cp2

0x9331,	// (0x00043f24) list_double2_graphic_pane_t2_cp2_ParamLimits

0x9331,	// (0x00043f24) list_double2_graphic_pane_t2_cp2

0x9343,	// (0x00043f36) list_single_number_heading_pane_g1_cp2_ParamLimits

0x9343,	// (0x00043f36) list_single_number_heading_pane_g1_cp2

0x934f,	// (0x00043f42) list_single_number_heading_pane_g2_cp2

0x9357,	// (0x00043f4a) list_single_number_heading_pane_t1_cp2_ParamLimits

0x9357,	// (0x00043f4a) list_single_number_heading_pane_t1_cp2

0x936d,	// (0x00043f60) list_single_number_heading_pane_t2_cp2_ParamLimits

0x936d,	// (0x00043f60) list_single_number_heading_pane_t2_cp2

0x937f,	// (0x00043f72) list_single_number_heading_pane_t3_cp2_ParamLimits

0x937f,	// (0x00043f72) list_single_number_heading_pane_t3_cp2

0x9343,	// (0x00043f36) list_single_heading_pane_g1_cp2_ParamLimits

0x9343,	// (0x00043f36) list_single_heading_pane_g1_cp2

0x934f,	// (0x00043f42) list_single_heading_pane_g2_cp2

0x9357,	// (0x00043f4a) list_single_heading_pane_t1_cp2_ParamLimits

0x9357,	// (0x00043f4a) list_single_heading_pane_t1_cp2

0xac5d,	// (0x00045850) list_single_heading_pane_t2_cp2_ParamLimits

0xac5d,	// (0x00045850) list_single_heading_pane_t2_cp2

0xaba5,	// (0x00045798) list_double_graphic_pane_g1_cp2_ParamLimits

0xaba5,	// (0x00045798) list_double_graphic_pane_g1_cp2

0xabb1,	// (0x000457a4) list_double_graphic_pane_g2_cp2_ParamLimits

0xabb1,	// (0x000457a4) list_double_graphic_pane_g2_cp2

0xabc0,	// (0x000457b3) list_double_graphic_pane_g3_cp2

0xabc8,	// (0x000457bb) list_double_graphic_pane_t1_cp2_ParamLimits

0xabc8,	// (0x000457bb) list_double_graphic_pane_t1_cp2

0xabde,	// (0x000457d1) list_double_graphic_pane_t2_cp2_ParamLimits

0xabde,	// (0x000457d1) list_double_graphic_pane_t2_cp2

0x93f4,	// (0x00043fe7) list_double_number_pane_g1_cp2_ParamLimits

0x93f4,	// (0x00043fe7) list_double_number_pane_g1_cp2

0x9400,	// (0x00043ff3) list_double_number_pane_g2_cp2

0xab69,	// (0x0004575c) list_double_number_pane_t1_cp2_ParamLimits

0xab69,	// (0x0004575c) list_double_number_pane_t1_cp2

0xab7d,	// (0x00045770) list_double_number_pane_t2_cp2_ParamLimits

0xab7d,	// (0x00045770) list_double_number_pane_t2_cp2

0xab93,	// (0x00045786) list_double_number_pane_t3_cp2_ParamLimits

0xab93,	// (0x00045786) list_double_number_pane_t3_cp2

0xaa46,	// (0x00045639) list_single_graphic_pane_g1_cp2_ParamLimits

0xaa46,	// (0x00045639) list_single_graphic_pane_g1_cp2

0x9458,	// (0x0004404b) list_single_graphic_pane_g2_cp2_ParamLimits

0x9458,	// (0x0004404b) list_single_graphic_pane_g2_cp2

0x9464,	// (0x00044057) list_single_graphic_pane_g3_cp2

0xaa1c,	// (0x0004560f) list_single_graphic_pane_t1_cp2_ParamLimits

0xaa1c,	// (0x0004560f) list_single_graphic_pane_t1_cp2

0x9458,	// (0x0004404b) list_single_number_pane_g1_cp2_ParamLimits

0x9458,	// (0x0004404b) list_single_number_pane_g1_cp2

0x9464,	// (0x00044057) list_single_number_pane_g2_cp2

0xaa1c,	// (0x0004560f) list_single_number_pane_t1_cp2_ParamLimits

0xaa1c,	// (0x0004560f) list_single_number_pane_t1_cp2

0xaa32,	// (0x00045625) list_single_number_pane_t2_cp2_ParamLimits

0xaa32,	// (0x00045625) list_single_number_pane_t2_cp2

0x9256,	// (0x00043e49) list_double2_pane_g1_cp2_ParamLimits

0x9256,	// (0x00043e49) list_double2_pane_g1_cp2

0x9267,	// (0x00043e5a) list_double2_pane_g2_cp2

0x93cc,	// (0x00043fbf) list_double2_pane_t1_cp2_ParamLimits

0x93cc,	// (0x00043fbf) list_double2_pane_t1_cp2

0x93e2,	// (0x00043fd5) list_double2_pane_t2_cp2_ParamLimits

0x93e2,	// (0x00043fd5) list_double2_pane_t2_cp2

0x93f4,	// (0x00043fe7) list_double_pane_g1_cp2_ParamLimits

0x93f4,	// (0x00043fe7) list_double_pane_g1_cp2

0x9400,	// (0x00043ff3) list_double_pane_g2_cp2

0x9408,	// (0x00043ffb) list_double_pane_t1_cp2_ParamLimits

0x9408,	// (0x00043ffb) list_double_pane_t1_cp2

0x941e,	// (0x00044011) list_double_pane_t2_cp2_ParamLimits

0x941e,	// (0x00044011) list_double_pane_t2_cp2

0x9448,	// (0x0004403b) list_single_pane_cp2_g3

0x9458,	// (0x0004404b) list_single_pane_g1_cp2_ParamLimits

0x9458,	// (0x0004404b) list_single_pane_g1_cp2

0x9464,	// (0x00044057) list_single_pane_g2_cp2

0x946c,	// (0x0004405f) list_single_pane_t1_cp2_ParamLimits

0x946c,	// (0x0004405f) list_single_pane_t1_cp2

0x9484,	// (0x00044077) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x9484,	// (0x00044077) list_single_large_graphic_pane_g1_cp2

0x9490,	// (0x00044083) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x9490,	// (0x00044083) list_single_large_graphic_pane_g2_cp2

0x949c,	// (0x0004408f) list_single_large_graphic_pane_g3_cp2

0x94a4,	// (0x00044097) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x94a4,	// (0x00044097) list_single_large_graphic_pane_g4_cp1

0x94be,	// (0x000440b1) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x94be,	// (0x000440b1) list_single_large_graphic_pane_t1_cp2

0xa9e8,	// (0x000455db) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa9e8,	// (0x000455db) list_single_graphic_heading_pane_g1_cp2

0xa9b5,	// (0x000455a8) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa9b5,	// (0x000455a8) list_single_graphic_heading_pane_g4_cp2

0x9464,	// (0x00044057) list_single_graphic_heading_pane_g5_cp2

0xa9f4,	// (0x000455e7) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa9f4,	// (0x000455e7) list_single_graphic_heading_pane_t1_cp2

0xaa0a,	// (0x000455fd) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xaa0a,	// (0x000455fd) list_single_graphic_heading_pane_t2_cp2

0xa9a9,	// (0x0004559c) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa9a9,	// (0x0004559c) list_single_2graphic_pane_g1_cp2

0xa9b5,	// (0x000455a8) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa9b5,	// (0x000455a8) list_single_2graphic_pane_g2_cp2

0x9464,	// (0x00044057) list_single_2graphic_pane_g3_cp2

0xa9c6,	// (0x000455b9) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa9c6,	// (0x000455b9) list_single_2graphic_pane_g4_cp2

0xa9d2,	// (0x000455c5) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa9d2,	// (0x000455c5) list_single_2graphic_pane_t1_cp2

0x7f34,	// (0x00042b27) list_highlight_pane_g10_cp1

0xa581,	// (0x00045174) list_highlight_pane_g1_cp1

0xa589,	// (0x0004517c) list_highlight_pane_g2_cp1

0xa591,	// (0x00045184) list_highlight_pane_g3_cp1

0xa599,	// (0x0004518c) list_highlight_pane_g4_cp1

0xa5a1,	// (0x00045194) list_highlight_pane_g5_cp1

0xa5a9,	// (0x0004519c) list_highlight_pane_g6_cp1

0xa5b1,	// (0x000451a4) list_highlight_pane_g7_cp1

0xa5b9,	// (0x000451ac) list_highlight_pane_g8_cp1

0xa5c1,	// (0x000451b4) list_highlight_pane_g9_cp1

0xa4a1,	// (0x00045094) form_field_slider_pane_t3

0xa4af,	// (0x000450a2) form_field_slider_pane_t4

0xa4bd,	// (0x000450b0) slider_form_pane_ParamLimits

0xa4bd,	// (0x000450b0) slider_form_pane

0x7f3e,	// (0x00042b31) control_abbreviations

0x7f3e,	// (0x00042b31) control_conventions

0x7f3e,	// (0x00042b31) control_definitions

0x7f3e,	// (0x00042b31) format_table_attribute

0xaca7,	// (0x0004589a) bg_popup_preview_window_pane_g9

0x7f3e,	// (0x00042b31) format_table_data2

0x7f3e,	// (0x00042b31) format_table_data3

0x7f3e,	// (0x00042b31) format_table_data_example

0x0008,

0x7f3e,	// (0x00042b31) intro_purpose

0xf8f4,	// (0x0004a4e7) bg_popup_preview_window_pane_g

0x7f3e,	// (0x00042b31) texts_category

0x7f3e,	// (0x00042b31) texts_graphics

0x94d4,	// (0x000440c7) text_digital

0x94e3,	// (0x000440d6) text_primary

0x94f2,	// (0x000440e5) text_primary_small

0x9501,	// (0x000440f4) text_secondary

0x9510,	// (0x00044103) text_title

0xb38d,	// (0x00045f80) bg_passive_tab_pane_g1_cp3_srt

0x9161,	// (0x00043d54) bg_passive_tab_pane_g2_cp3_srt

0xb396,	// (0x00045f89) bg_passive_tab_pane_g3_cp3_srt

0x801e,	// (0x00042c11) bg_active_tab_pane_cp3_srt_ParamLimits

0x801e,	// (0x00042c11) bg_active_tab_pane_cp3_srt

0xb39f,	// (0x00045f92) tabs_4_active_pane_srt_g1

0xb3a7,	// (0x00045f9a) tabs_4_active_pane_srt_t1_ParamLimits

0xb3a7,	// (0x00045f9a) tabs_4_active_pane_srt_t1

0xb38d,	// (0x00045f80) bg_active_tab_pane_g1_cp3_copy1

0x9161,	// (0x00043d54) bg_active_tab_pane_g2_cp3_copy1

0xb396,	// (0x00045f89) bg_active_tab_pane_g3_cp3_copy1

0x801e,	// (0x00042c11) tabs_2_long_active_pane_srt_ParamLimits

0x801e,	// (0x00042c11) tabs_2_long_active_pane_srt

0x801e,	// (0x00042c11) tabs_2_long_passive_pane_srt_ParamLimits

0x801e,	// (0x00042c11) tabs_2_long_passive_pane_srt

0x8a71,	// (0x00043664) bg_passive_tab_pane_cp4_srt_ParamLimits

0x8a71,	// (0x00043664) bg_passive_tab_pane_cp4_srt

0xb0d6,	// (0x00045cc9) bg_passive_tab_pane_g1_cp4_srt

0x9161,	// (0x00043d54) bg_passive_tab_pane_g2_cp4_srt

0xb0df,	// (0x00045cd2) bg_passive_tab_pane_g3_cp4_srt

0x8a50,	// (0x00043643) bg_active_tab_pane_cp4_srt_ParamLimits

0x8a50,	// (0x00043643) bg_active_tab_pane_cp4_srt

0xb0e8,	// (0x00045cdb) tabs_2_long_active_pane_srt_t1_ParamLimits

0xb0e8,	// (0x00045cdb) tabs_2_long_active_pane_srt_t1

0xb0d6,	// (0x00045cc9) bg_active_tab_pane_g1_cp4_srt

0x9161,	// (0x00043d54) bg_active_tab_pane_g2_cp4_srt

0xb0df,	// (0x00045cd2) bg_active_tab_pane_g3_cp4_srt

0x8299,	// (0x00042e8c) tabs_3_long_active_pane_srt_ParamLimits

0x8299,	// (0x00042e8c) tabs_3_long_active_pane_srt

0x8299,	// (0x00042e8c) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x8299,	// (0x00042e8c) tabs_3_long_passive_pane_cp_srt

0x8299,	// (0x00042e8c) tabs_3_long_passive_pane_srt_ParamLimits

0x8299,	// (0x00042e8c) tabs_3_long_passive_pane_srt

0x8a71,	// (0x00043664) bg_passive_tab_pane_cp5_srt_ParamLimits

0x8a71,	// (0x00043664) bg_passive_tab_pane_cp5_srt

0x91eb,	// (0x00043dde) bg_passive_tab_pane_g1_cp5_srt

0x9161,	// (0x00043d54) bg_passive_tab_pane_g2_cp5_srt

0x91f4,	// (0x00043de7) bg_passive_tab_pane_g3_cp5_srt

0x8a50,	// (0x00043643) bg_active_tab_pane_cp5_srt_ParamLimits

0x8a50,	// (0x00043643) bg_active_tab_pane_cp5_srt

0xb0c4,	// (0x00045cb7) tabs_3_long_active_pane_srt_t1_ParamLimits

0xb0c4,	// (0x00045cb7) tabs_3_long_active_pane_srt_t1

0x91eb,	// (0x00043dde) bg_active_tab_pane_g1_cp5_srt

0x9161,	// (0x00043d54) bg_active_tab_pane_g2_cp5_srt

0x91f4,	// (0x00043de7) bg_active_tab_pane_g3_cp5_srt

0xb0b6,	// (0x00045ca9) navi_text_pane_srt_t1

0xb0ae,	// (0x00045ca1) navi_icon_pane_srt_g1

0x96d9,	// (0x000442cc) midp_editing_number_pane_srt

0x951f,	// (0x00044112) midp_ticker_pane_srt

0x96e1,	// (0x000442d4) midp_ticker_pane_srt_g1

0x96e9,	// (0x000442dc) midp_ticker_pane_srt_g2

0x0001,

0xf777,	// (0x0004a36a) midp_ticker_pane_srt_g

0x96f1,	// (0x000442e4) midp_ticker_pane_srt_t1

0xb09f,	// (0x00045c92) midp_editing_number_pane_t1_copy1

0x8a71,	// (0x00043664) listscroll_midp_pane

0x8a71,	// (0x00043664) midp_form_pane

0x958b,	// (0x0004417e) midp_info_popup_window_ParamLimits

0x958b,	// (0x0004417e) midp_info_popup_window

0x8939,	// (0x0004352c) bg_popup_sub_pane_cp50_ParamLimits

0x8939,	// (0x0004352c) bg_popup_sub_pane_cp50

0xa1b9,	// (0x00044dac) listscroll_midp_info_pane_ParamLimits

0xa1b9,	// (0x00044dac) listscroll_midp_info_pane

0xa1a1,	// (0x00044d94) listscroll_form_midp_pane_ParamLimits

0xa1a1,	// (0x00044d94) listscroll_form_midp_pane

0xa1ad,	// (0x00044da0) scroll_bar_cp050

0xa181,	// (0x00044d74) list_midp_pane

0xbde3,	// (0x000469d6) signal_pane_g2_cp

0xa0bb,	// (0x00044cae) listscroll_midp_info_pane_t1_ParamLimits

0xa0bb,	// (0x00044cae) listscroll_midp_info_pane_t1

0xa0d3,	// (0x00044cc6) listscroll_midp_info_pane_t2_ParamLimits

0xa0d3,	// (0x00044cc6) listscroll_midp_info_pane_t2

0xa111,	// (0x00044d04) listscroll_midp_info_pane_t3_ParamLimits

0xa111,	// (0x00044d04) listscroll_midp_info_pane_t3

0xa14b,	// (0x00044d3e) listscroll_midp_info_pane_t4_ParamLimits

0xa14b,	// (0x00044d3e) listscroll_midp_info_pane_t4

0x0003,

0xf82f,	// (0x0004a422) listscroll_midp_info_pane_t_ParamLimits

0xf82f,	// (0x0004a422) listscroll_midp_info_pane_t

0x89fd,	// (0x000435f0) scroll_pane_cp21

0xa059,	// (0x00044c4c) form_midp_field_choice_group_pane

0xa062,	// (0x00044c55) form_midp_field_text_pane

0xa0a1,	// (0x00044c94) form_midp_field_time_pane

0xa0a9,	// (0x00044c9c) form_midp_gauge_slider_pane

0xa0b2,	// (0x00044ca5) form_midp_gauge_wait_pane

0x7f3e,	// (0x00042b31) form_midp_image_pane

0x51b7,	// (0x0003fdaa) list_single_midp_pane_ParamLimits

0x51b7,	// (0x0003fdaa) list_single_midp_pane

0xa011,	// (0x00044c04) form_midp_field_text_pane_t1

0x9ddb,	// (0x000449ce) input_focus_pane_cp050

0xa048,	// (0x00044c3b) list_midp_form_text_pane

0x9fe0,	// (0x00044bd3) form_midp_field_choice_group_pane_t1

0x9fee,	// (0x00044be1) input_focus_pane_cp051

0xa002,	// (0x00044bf5) list_midp_choice_pane

0x7f3e,	// (0x00042b31) status_idle_pane

0x9fc4,	// (0x00044bb7) form_midp_field_time_pane_t1

0x7f34,	// (0x00042b27) wait_anim_pane_g2_copy1

0x9fd2,	// (0x00044bc5) form_midp_field_time_pane_t2

0x0001,

0x9639,	// (0x0004422c) aid_navinavi_width_2_pane

0xf82a,	// (0x0004a41d) form_midp_field_time_pane_t

0x7f3e,	// (0x00042b31) input_focus_pane_cp052

0x7f3e,	// (0x00042b31) bg_input_focus_pane_cp040

0x9f84,	// (0x00044b77) form_midp_gauge_slider_pane_t1

0x9f92,	// (0x00044b85) form_midp_gauge_slider_pane_t2

0x9fa0,	// (0x00044b93) form_midp_gauge_slider_pane_t3

0x9fae,	// (0x00044ba1) form_midp_gauge_slider_pane_t4

0x0003,

0xf821,	// (0x0004a414) form_midp_gauge_slider_pane_t

0x9fbc,	// (0x00044baf) form_midp_slider_pane

0x801e,	// (0x00042c11) bg_input_focus_pane_cp041_ParamLimits

0x801e,	// (0x00042c11) bg_input_focus_pane_cp041

0x9f51,	// (0x00044b44) form_midp_gauge_wait_pane_t1_ParamLimits

0x9f51,	// (0x00044b44) form_midp_gauge_wait_pane_t1

0x9f63,	// (0x00044b56) form_midp_gauge_wait_pane_t2_ParamLimits

0x9f63,	// (0x00044b56) form_midp_gauge_wait_pane_t2

0x0001,

0xf81c,	// (0x0004a40f) form_midp_gauge_wait_pane_t_ParamLimits

0xf81c,	// (0x0004a40f) form_midp_gauge_wait_pane_t

0x9f75,	// (0x00044b68) form_midp_wait_pane_ParamLimits

0x9f75,	// (0x00044b68) form_midp_wait_pane

0x9f1b,	// (0x00044b0e) form_midp_image_pane_g1

0x9f24,	// (0x00044b17) form_midp_image_pane_t1

0x9f33,	// (0x00044b26) form_midp_image_pane_t2

0x9f42,	// (0x00044b35) form_midp_image_pane_t3

0x0002,

0xf815,	// (0x0004a408) form_midp_image_pane_t

0x9f12,	// (0x00044b05) list_single_midp_pane_g1

0x51a8,	// (0x0003fd9b) list_single_midp_pane_t1

0x9eea,	// (0x00044add) list_midp_form_item_pane_ParamLimits

0x9eea,	// (0x00044add) list_midp_form_item_pane

0x95e1,	// (0x000441d4) list_midp_form_item_pane_t1

0x95f0,	// (0x000441e3) midp_ticker_pane_g1

0x95fc,	// (0x000441ef) midp_ticker_pane_g2

0x0001,

0xf75d,	// (0x0004a350) midp_ticker_pane_g

0x9608,	// (0x000441fb) midp_ticker_pane_t1

0xb2f0,	// (0x00045ee3) midp_editing_number_pane_t1

0xb2ce,	// (0x00045ec1) midp_editing_number_pane

0xb2dd,	// (0x00045ed0) midp_ticker_pane

0xb08f,	// (0x00045c82) ai_message_heading_pane

0x7f3e,	// (0x00042b31) bg_popup_window_pane_cp14

0xb097,	// (0x00045c8a) listscroll_ai_message_pane

0xb019,	// (0x00045c0c) ai_message_heading_pane_g1_ParamLimits

0xb019,	// (0x00045c0c) ai_message_heading_pane_g1

0xb025,	// (0x00045c18) ai_message_heading_pane_g2_ParamLimits

0xb025,	// (0x00045c18) ai_message_heading_pane_g2

0xb031,	// (0x00045c24) ai_message_heading_pane_g3_ParamLimits

0xb031,	// (0x00045c24) ai_message_heading_pane_g3

0xb03d,	// (0x00045c30) ai_message_heading_pane_g4_ParamLimits

0xb03d,	// (0x00045c30) ai_message_heading_pane_g4

0x0003,

0xf956,	// (0x0004a549) ai_message_heading_pane_g_ParamLimits

0xf956,	// (0x0004a549) ai_message_heading_pane_g

0xb049,	// (0x00045c3c) ai_message_heading_pane_t1_ParamLimits

0xb049,	// (0x00045c3c) ai_message_heading_pane_t1

0xb063,	// (0x00045c56) ai_message_heading_pane_t2_ParamLimits

0xb063,	// (0x00045c56) ai_message_heading_pane_t2

0x0001,

0xf95f,	// (0x0004a552) ai_message_heading_pane_t_ParamLimits

0xf95f,	// (0x0004a552) ai_message_heading_pane_t

0xb075,	// (0x00045c68) bg_popup_heading_pane_cp1_ParamLimits

0xb075,	// (0x00045c68) bg_popup_heading_pane_cp1

0xb007,	// (0x00045bfa) list_ai_message_pane_ParamLimits

0xb007,	// (0x00045bfa) list_ai_message_pane

0x89fd,	// (0x000435f0) scroll_pane_cp10

0xafa3,	// (0x00045b96) list_ai_message_pane_g1

0xafab,	// (0x00045b9e) list_ai_message_pane_g2

0x0001,

0xf933,	// (0x0004a526) list_ai_message_pane_g

0xafb3,	// (0x00045ba6) list_ai_message_pane_t1_ParamLimits

0xafb3,	// (0x00045ba6) list_ai_message_pane_t1

0xafc8,	// (0x00045bbb) list_ai_message_pane_t2_ParamLimits

0xafc8,	// (0x00045bbb) list_ai_message_pane_t2

0xafdd,	// (0x00045bd0) list_ai_message_pane_t3_ParamLimits

0xafdd,	// (0x00045bd0) list_ai_message_pane_t3

0xaff2,	// (0x00045be5) list_ai_message_pane_t4_ParamLimits

0xaff2,	// (0x00045be5) list_ai_message_pane_t4

0x0003,

0xf938,	// (0x0004a52b) list_ai_message_pane_t_ParamLimits

0xf938,	// (0x0004a52b) list_ai_message_pane_t

0xaf8e,	// (0x00045b81) cell_ai_soft_ind_pane_ParamLimits

0xaf8e,	// (0x00045b81) cell_ai_soft_ind_pane

0x961a,	// (0x0004420d) cell_ai_soft_ind_pane_g1_ParamLimits

0x961a,	// (0x0004420d) cell_ai_soft_ind_pane_g1

0x7f3e,	// (0x00042b31) grid_highlight_cp1

0x9627,	// (0x0004421a) text_secondary_cp56_ParamLimits

0x9627,	// (0x0004421a) text_secondary_cp56

0xaf63,	// (0x00045b56) example_general_pane_ParamLimits

0xaf63,	// (0x00045b56) example_general_pane

0xaf6f,	// (0x00045b62) example_parent_pane_g1_ParamLimits

0xaf6f,	// (0x00045b62) example_parent_pane_g1

0xaf7b,	// (0x00045b6e) example_parent_pane_t1_ParamLimits

0xaf7b,	// (0x00045b6e) example_parent_pane_t1

0x674c,	// (0x0004133f) popup_preview_text_window_ParamLimits

0x674c,	// (0x0004133f) popup_preview_text_window

0x9450,	// (0x00044043) list_single_pane_cp2_g4

0x834f,	// (0x00042f42) bg_popup_preview_window_pane_ParamLimits

0x834f,	// (0x00042f42) bg_popup_preview_window_pane

0xacaf,	// (0x000458a2) popup_preview_text_window_t1_ParamLimits

0xacaf,	// (0x000458a2) popup_preview_text_window_t1

0xaccd,	// (0x000458c0) popup_preview_text_window_t2_ParamLimits

0xaccd,	// (0x000458c0) popup_preview_text_window_t2

0xad16,	// (0x00045909) popup_preview_text_window_t3_ParamLimits

0xad16,	// (0x00045909) popup_preview_text_window_t3

0xad5b,	// (0x0004594e) popup_preview_text_window_t4_ParamLimits

0xad5b,	// (0x0004594e) popup_preview_text_window_t4

0x0004,

0xf907,	// (0x0004a4fa) popup_preview_text_window_t_ParamLimits

0xf907,	// (0x0004a4fa) popup_preview_text_window_t

0xadd9,	// (0x000459cc) scroll_pane_cp11

0x9d67,	// (0x0004495a) bg_popup_preview_window_pane_g1

0xac6f,	// (0x00045862) bg_popup_preview_window_pane_g2

0xac77,	// (0x0004586a) bg_popup_preview_window_pane_g3

0xac7f,	// (0x00045872) bg_popup_preview_window_pane_g4

0xac87,	// (0x0004587a) bg_popup_preview_window_pane_g5

0xac8f,	// (0x00045882) bg_popup_preview_window_pane_g6

0xac97,	// (0x0004588a) bg_popup_preview_window_pane_g7

0xac9f,	// (0x00045892) bg_popup_preview_window_pane_g8

0x588c,	// (0x0004047f) aid_popup_width_pane

0x672a,	// (0x0004131d) popup_midp_note_alarm_window_ParamLimits

0x672a,	// (0x0004131d) popup_midp_note_alarm_window

0x888d,	// (0x00043480) data_form_pane_ParamLimits

0x4e45,	// (0x0003fa38) form_field_data_pane_g1

0x4e4f,	// (0x0003fa42) form_field_data_pane_t1_ParamLimits

0x8899,	// (0x0004348c) input_focus_pane_ParamLimits

0x4e67,	// (0x0003fa5a) data_form_wide_pane_ParamLimits

0x4e78,	// (0x0003fa6b) form_field_data_wide_pane_g1

0x4e84,	// (0x0003fa77) form_field_data_wide_pane_t1_ParamLimits

0x85fe,	// (0x000431f1) input_focus_pane_cp6_ParamLimits

0x89aa,	// (0x0004359d) input_popup_find_pane_g1_ParamLimits

0x89aa,	// (0x0004359d) input_popup_find_pane_g1

0x5eaa,	// (0x00040a9d) aid_navi_side_left_pane

0x5ebf,	// (0x00040ab2) aid_navi_side_right_pane

0xa67c,	// (0x0004526f) bg_popup_window_pane_cp30_ParamLimits

0xa67c,	// (0x0004526f) bg_popup_window_pane_cp30

0xa6f6,	// (0x000452e9) popup_midp_note_alarm_window_g1_ParamLimits

0xa6f6,	// (0x000452e9) popup_midp_note_alarm_window_g1

0xa726,	// (0x00045319) popup_midp_note_alarm_window_t1_ParamLimits

0xa726,	// (0x00045319) popup_midp_note_alarm_window_t1

0xa7c7,	// (0x000453ba) popup_midp_note_alarm_window_t2_ParamLimits

0xa7c7,	// (0x000453ba) popup_midp_note_alarm_window_t2

0xa875,	// (0x00045468) popup_midp_note_alarm_window_t3_ParamLimits

0xa875,	// (0x00045468) popup_midp_note_alarm_window_t3

0xa8a7,	// (0x0004549a) popup_midp_note_alarm_window_t4_ParamLimits

0xa8a7,	// (0x0004549a) popup_midp_note_alarm_window_t4

0xa8cd,	// (0x000454c0) popup_midp_note_alarm_window_t5_ParamLimits

0xa8cd,	// (0x000454c0) popup_midp_note_alarm_window_t5

0x000a,

0xf8a4,	// (0x0004a497) popup_midp_note_alarm_window_t_ParamLimits

0xf8a4,	// (0x0004a497) popup_midp_note_alarm_window_t

0xa979,	// (0x0004556c) wait_bar_pane_cp1_ParamLimits

0xa979,	// (0x0004556c) wait_bar_pane_cp1

0x7f3e,	// (0x00042b31) wait_anim_pane_copy1

0x7f3e,	// (0x00042b31) wait_border_pane_copy1

0xa362,	// (0x00044f55) wait_border_pane_g1_copy1

0x4e9e,	// (0x0003fa91) form_field_popup_pane_g1

0x4ea6,	// (0x0003fa99) form_field_popup_pane_t1_ParamLimits

0x8899,	// (0x0004348c) input_focus_pane_cp7_ParamLimits

0x88bb,	// (0x000434ae) list_form_pane_ParamLimits

0x4ebe,	// (0x0003fab1) form_field_popup_wide_pane_g1

0x4ec6,	// (0x0003fab9) form_field_popup_wide_pane_t1_ParamLimits

0x8899,	// (0x0004348c) input_focus_pane_cp8_ParamLimits

0x88c7,	// (0x000434ba) list_form_wide_pane_ParamLimits

0xb425,	// (0x00046018) aid_size_cell_graphic_pane

0x4f50,	// (0x0003fb43) data_form_pane_t1_ParamLimits

0x520a,	// (0x0003fdfd) data_form_wide_pane_t1_ParamLimits

0x9934,	// (0x00044527) bg_status_flat_pane

0x7f7e,	// (0x00042b71) title_pane_t1_ParamLimits

0x7fe6,	// (0x00042bd9) title_pane_t2_ParamLimits

0x800c,	// (0x00042bff) title_pane_t3_ParamLimits

0xf557,	// (0x0004a14a) title_pane_t_ParamLimits

0x8e78,	// (0x00043a6b) level_1_signal_ParamLimits

0x8e8a,	// (0x00043a7d) level_2_signal_ParamLimits

0x8e9d,	// (0x00043a90) level_3_signal_ParamLimits

0x8eb0,	// (0x00043aa3) level_4_signal_ParamLimits

0x8ec3,	// (0x00043ab6) level_5_signal_ParamLimits

0x8ed6,	// (0x00043ac9) level_6_signal_ParamLimits

0x8ee9,	// (0x00043adc) level_7_signal_ParamLimits

0x8e78,	// (0x00043a6b) level_1_battery_ParamLimits

0x8e8a,	// (0x00043a7d) level_2_battery_ParamLimits

0x8e9d,	// (0x00043a90) level_3_battery_ParamLimits

0x8eb0,	// (0x00043aa3) level_4_battery_ParamLimits

0x8ec3,	// (0x00043ab6) level_5_battery_ParamLimits

0x8ed6,	// (0x00043ac9) level_6_battery_ParamLimits

0x8ee9,	// (0x00043adc) level_7_battery_ParamLimits

0xa581,	// (0x00045174) bg_status_flat_pane_g1

0xa589,	// (0x0004517c) bg_status_flat_pane_g2

0xa591,	// (0x00045184) bg_status_flat_pane_g3

0xa599,	// (0x0004518c) bg_status_flat_pane_g4

0xa5a1,	// (0x00045194) bg_status_flat_pane_g5

0xa5a9,	// (0x0004519c) bg_status_flat_pane_g6

0xa5b1,	// (0x000451a4) bg_status_flat_pane_g7

0x8034,	// (0x00042c27) tabs_3_active_pane_t1_ParamLimits

0x8034,	// (0x00042c27) tabs_3_passive_pane_t1_ParamLimits

0x804e,	// (0x00042c41) tabs_4_active_pane_t1_ParamLimits

0x804e,	// (0x00042c41) tabs_4_1_passive_pane_t1_ParamLimits

0x8a3e,	// (0x00043631) tabs_2_active_pane_t1_ParamLimits

0x8a3e,	// (0x00043631) tabs_2_passive_pane_t1_ParamLimits

0x8a50,	// (0x00043643) bg_active_tab_pane_cp4_ParamLimits

0x8a5e,	// (0x00043651) tabs_2_long_active_pane_t1_ParamLimits

0x8a71,	// (0x00043664) bg_passive_tab_pane_cp4_ParamLimits

0x69f9,	// (0x000415ec) list_single_midp_graphic_pane_t1_ParamLimits

0x8a50,	// (0x00043643) bg_active_tab_pane_cp5_ParamLimits

0x8a7d,	// (0x00043670) tabs_3_long_active_pane_t1_ParamLimits

0x8a71,	// (0x00043664) bg_passive_tab_pane_cp5_ParamLimits

0x69f9,	// (0x000415ec) list_single_midp_graphic_pane_t1

0x9934,	// (0x00044527) bg_status_flat_pane_ParamLimits

0x99f7,	// (0x000445ea) indicator_pane_cp2_ParamLimits

0x99f7,	// (0x000445ea) indicator_pane_cp2

0x9b22,	// (0x00044715) navi_pane_srt_ParamLimits

0x9b22,	// (0x00044715) navi_pane_srt

0x9b46,	// (0x00044739) popup_clock_digital_analogue_window_cp1

0x80fb,	// (0x00042cee) indicator_pane_t1

0x951f,	// (0x00044112) copy_highlight_pane

0x951f,	// (0x00044112) cursor_graphics_pane

0x951f,	// (0x00044112) graphic_within_text_pane

0x951f,	// (0x00044112) link_highlight_pane

0xad9c,	// (0x0004598f) popup_preview_text_window_t5_ParamLimits

0xad9c,	// (0x0004598f) popup_preview_text_window_t5

0x9641,	// (0x00044234) cursor_digital_pane

0x9641,	// (0x00044234) cursor_primary_pane

0x9652,	// (0x00044245) cursor_primary_small_pane

0x965a,	// (0x0004424d) cursor_secondary_pane

0x9662,	// (0x00044255) cursor_title_pane

0x9641,	// (0x00044234) link_highlight_digital_pane

0x9649,	// (0x0004423c) link_highlight_primary_pane

0x9652,	// (0x00044245) link_highlight_primary_small_pane

0x965a,	// (0x0004424d) link_highlight_secondary_pane

0x9662,	// (0x00044255) link_highlight_title_pane

0x9641,	// (0x00044234) copy_highlight_digital_pane

0x9641,	// (0x00044234) copy_highlight_primary_pane

0x9652,	// (0x00044245) copy_highlight_primary_small_pane

0x965a,	// (0x0004424d) copy_highlight_secondary_pane

0x9662,	// (0x00044255) copy_highlight_title_pane

0x965a,	// (0x0004424d) graphic_text_digital_pane

0xa61f,	// (0x00045212) graphic_text_primary_pane

0xa628,	// (0x0004521b) graphic_text_primary_small_pane

0x9652,	// (0x00044245) graphic_text_secondary_pane

0x9641,	// (0x00044234) graphic_text_title_pane

0x966a,	// (0x0004425d) cursor_primary_pane_g1

0xa611,	// (0x00045204) cursor_text_primary_t1

0xa5f9,	// (0x000451ec) cursor_primary_small_pane_g1

0xa603,	// (0x000451f6) cursor_text_primary_small_t1

0xa5e1,	// (0x000451d4) cursor_primary_small_pane_g1_copy1

0xa5eb,	// (0x000451de) cursor_text_primary_small_t1_copy1

0xa5c9,	// (0x000451bc) cursor_text_title_t1

0xa5d7,	// (0x000451ca) cursor_title_pane_g1

0x966a,	// (0x0004425d) cursor_digital_pane_g1

0x9674,	// (0x00044267) cursor_text_digital_t1

0x9699,	// (0x0004428c) link_highlight_primary_pane_g1

0xa572,	// (0x00045165) link_highlight_primary_pane_t1

0x9682,	// (0x00044275) link_highlight_primary_small_pane_g1

0x968a,	// (0x0004427d) link_highlight_primary_small_pane_t1

0x9699,	// (0x0004428c) link_highlight_secondary_pane_g1

0x96a1,	// (0x00044294) link_highlight_secondary_pane_t1

0xa4e6,	// (0x000450d9) link_highlight_title_pane_g1

0xa4ee,	// (0x000450e1) link_highlight_title_pane_t1

0xa4cf,	// (0x000450c2) link_highlight_digital_pane_g1

0xa4d7,	// (0x000450ca) link_highlight_digital_pane_t1

0xa3a7,	// (0x00044f9a) copy_highlight_primary_pane_g1

0xa3af,	// (0x00044fa2) copy_highlight_primary_pane_t1

0xa381,	// (0x00044f74) copy_highlight_primary_small_pane_g1

0xa398,	// (0x00044f8b) copy_highlight_primary_small_pane_t1

0x96b0,	// (0x000442a3) copy_highlight_secondary_pane_g1

0x96b8,	// (0x000442ab) copy_highlight_secondary_pane_t1

0xa381,	// (0x00044f74) copy_highlight_title_pane_g1

0xa389,	// (0x00044f7c) copy_highlight_title_pane_t1

0xa3a7,	// (0x00044f9a) copy_highlight_digital_pane_g1

0xb5f0,	// (0x000461e3) copy_highlight_digital_pane_t1

0xb544,	// (0x00046137) graphic_text_primary_pane_g1

0xb5d4,	// (0x000461c7) graphic_text_primary_pane_t1

0xb5e2,	// (0x000461d5) graphic_text_primary_pane_t2

0x0001,

0xf9d3,	// (0x0004a5c6) graphic_text_primary_pane_t

0xb5b0,	// (0x000461a3) graphic_text_primary_small_pane_g1

0xb5b8,	// (0x000461ab) graphic_text_primary_small_pane_t1

0xb5c6,	// (0x000461b9) graphic_text_primary_small_pane_t2

0x0001,

0xf9ce,	// (0x0004a5c1) graphic_text_primary_small_pane_t

0xb58c,	// (0x0004617f) graphic_text_secondary_pane_g1

0xb594,	// (0x00046187) graphic_text_secondary_pane_t1

0xb5a2,	// (0x00046195) graphic_text_secondary_pane_t2

0x0001,

0xf9c9,	// (0x0004a5bc) graphic_text_secondary_pane_t

0xb568,	// (0x0004615b) graphic_text_title_pane_g1

0xb570,	// (0x00046163) graphic_text_title_pane_t1

0xb57e,	// (0x00046171) graphic_text_title_pane_t2

0x0001,

0xf9c4,	// (0x0004a5b7) graphic_text_title_pane_t

0xb544,	// (0x00046137) graphic_text_digital_pane_g1

0xb54c,	// (0x0004613f) graphic_text_digital_pane_t1

0xb55a,	// (0x0004614d) graphic_text_digital_pane_t2

0x0001,

0xf9bf,	// (0x0004a5b2) graphic_text_digital_pane_t

0x801e,	// (0x00042c11) navi_icon_pane_srt_ParamLimits

0x801e,	// (0x00042c11) navi_icon_pane_srt

0x7f3e,	// (0x00042b31) navi_midp_pane_srt

0x7f3e,	// (0x00042b31) navi_navi_pane_srt

0x801e,	// (0x00042c11) navi_text_pane_srt_ParamLimits

0x801e,	// (0x00042c11) navi_text_pane_srt

0xb50f,	// (0x00046102) navi_navi_icon_text_pane_srt

0xb529,	// (0x0004611c) navi_navi_pane_srt_g1_ParamLimits

0xb529,	// (0x0004611c) navi_navi_pane_srt_g1

0xb517,	// (0x0004610a) navi_navi_pane_srt_g2_ParamLimits

0xb517,	// (0x0004610a) navi_navi_pane_srt_g2

0x0001,

0xf9ba,	// (0x0004a5ad) navi_navi_pane_srt_g_ParamLimits

0xf9ba,	// (0x0004a5ad) navi_navi_pane_srt_g

0xb53b,	// (0x0004612e) navi_navi_tabs_pane_srt

0xb50f,	// (0x00046102) navi_navi_text_pane_srt

0xb50f,	// (0x00046102) navi_navi_volume_pane_srt

0xb500,	// (0x000460f3) navi_navi_text_pane_srt_t1

0x6e21,	// (0x00041a14) navi_navi_volume_pane_srt_g1

0x6e29,	// (0x00041a1c) volume_small_pane_srt_ParamLimits

0x6e29,	// (0x00041a1c) volume_small_pane_srt

0x61a6,	// (0x00040d99) volume_small_pane_srt_g1_ParamLimits

0x61a6,	// (0x00040d99) volume_small_pane_srt_g1

0x61b6,	// (0x00040da9) volume_small_pane_srt_g2_ParamLimits

0x61b6,	// (0x00040da9) volume_small_pane_srt_g2

0x61c7,	// (0x00040dba) volume_small_pane_srt_g3_ParamLimits

0x61c7,	// (0x00040dba) volume_small_pane_srt_g3

0x61d8,	// (0x00040dcb) volume_small_pane_srt_g4_ParamLimits

0x61d8,	// (0x00040dcb) volume_small_pane_srt_g4

0x61e9,	// (0x00040ddc) volume_small_pane_srt_g5_ParamLimits

0x61e9,	// (0x00040ddc) volume_small_pane_srt_g5

0x61fa,	// (0x00040ded) volume_small_pane_srt_g6_ParamLimits

0x61fa,	// (0x00040ded) volume_small_pane_srt_g6

0x620b,	// (0x00040dfe) volume_small_pane_srt_g7_ParamLimits

0x620b,	// (0x00040dfe) volume_small_pane_srt_g7

0x621c,	// (0x00040e0f) volume_small_pane_srt_g8_ParamLimits

0x621c,	// (0x00040e0f) volume_small_pane_srt_g8

0x622d,	// (0x00040e20) volume_small_pane_srt_g9_ParamLimits

0x622d,	// (0x00040e20) volume_small_pane_srt_g9

0x623e,	// (0x00040e31) volume_small_pane_srt_g10_ParamLimits

0x623e,	// (0x00040e31) volume_small_pane_srt_g10

0x0009,

0xf762,	// (0x0004a355) volume_small_pane_srt_g_ParamLimits

0xf762,	// (0x0004a355) volume_small_pane_srt_g

0x83f8,	// (0x00042feb) query_popup_data_pane_cp2

0xb4e6,	// (0x000460d9) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb4e6,	// (0x000460d9) navi_navi_icon_text_pane_srt_t1

0xa61f,	// (0x00045212) navi_tabs_2_long_pane_srt

0xa61f,	// (0x00045212) navi_tabs_2_pane_srt

0xa61f,	// (0x00045212) navi_tabs_3_long_pane_srt

0xa61f,	// (0x00045212) navi_tabs_3_pane_srt

0xa61f,	// (0x00045212) navi_tabs_4_pane_srt

0x6e01,	// (0x000419f4) tabs_2_active_pane_srt_ParamLimits

0x6e01,	// (0x000419f4) tabs_2_active_pane_srt

0x6e11,	// (0x00041a04) tabs_2_passive_pane_srt_ParamLimits

0x6e11,	// (0x00041a04) tabs_2_passive_pane_srt

0x985d,	// (0x00044450) bg_passive_tab_pane_cp1_srt_ParamLimits

0x985d,	// (0x00044450) bg_passive_tab_pane_cp1_srt

0xb4b2,	// (0x000460a5) bg_passive_tab_pane_g1_cp1_srt

0x9161,	// (0x00043d54) bg_passive_tab_pane_g2_cp1_srt

0xb4bb,	// (0x000460ae) bg_passive_tab_pane_g3_cp1_srt

0x801e,	// (0x00042c11) bg_active_tab_pane_cp1_srt_ParamLimits

0x801e,	// (0x00042c11) bg_active_tab_pane_cp1_srt

0xb4c4,	// (0x000460b7) tabs_2_active_pane_srt_g1

0xb4cc,	// (0x000460bf) tabs_2_active_pane_srt_t1_ParamLimits

0xb4cc,	// (0x000460bf) tabs_2_active_pane_srt_t1

0xb4b2,	// (0x000460a5) bg_active_tab_pane_g1_cp1_srt

0x9161,	// (0x00043d54) bg_active_tab_pane_g2_cp1_srt

0xb4bb,	// (0x000460ae) bg_active_tab_pane_g3_cp1_srt

0x6dce,	// (0x000419c1) tabs_3_active_pane_srt_ParamLimits

0x6dce,	// (0x000419c1) tabs_3_active_pane_srt

0x6ddf,	// (0x000419d2) tabs_3_passive_pane_cp_srt_ParamLimits

0x6ddf,	// (0x000419d2) tabs_3_passive_pane_cp_srt

0x6df0,	// (0x000419e3) tabs_3_passive_pane_srt_ParamLimits

0x6df0,	// (0x000419e3) tabs_3_passive_pane_srt

0x985d,	// (0x00044450) bg_passive_tab_pane_cp2_srt_ParamLimits

0x985d,	// (0x00044450) bg_passive_tab_pane_cp2_srt

0x96c7,	// (0x000442ba) bg_passive_tab_pane_g1_cp2_srt

0x9161,	// (0x00043d54) bg_passive_tab_pane_g2_cp2_srt

0x96d0,	// (0x000442c3) bg_passive_tab_pane_g3_cp2_srt

0x801e,	// (0x00042c11) bg_active_tab_pane_cp2_srt_ParamLimits

0x801e,	// (0x00042c11) bg_active_tab_pane_cp2_srt

0xb498,	// (0x0004608b) tabs_3_active_pane_srt_g1

0xb4a0,	// (0x00046093) tabs_3_active_pane_srt_t1_ParamLimits

0xb4a0,	// (0x00046093) tabs_3_active_pane_srt_t1

0x96c7,	// (0x000442ba) bg_active_tab_pane_g1_cp2_srt

0x9161,	// (0x00043d54) bg_active_tab_pane_g2_cp2_srt

0x96d0,	// (0x000442c3) bg_active_tab_pane_g3_cp2_srt

0x6d86,	// (0x00041979) tabs_4_active_pane_srt_ParamLimits

0x6d86,	// (0x00041979) tabs_4_active_pane_srt

0x6d98,	// (0x0004198b) tabs_4_passive_pane_cp2_srt_ParamLimits

0x6d98,	// (0x0004198b) tabs_4_passive_pane_cp2_srt

0x63a3,	// (0x00040f96) aid_size_cell_toolbar

0x8a71,	// (0x00043664) main_idle_act_pane_ParamLimits

0x6560,	// (0x00041153) popup_large_graphic_colour_window_ParamLimits

0x68c7,	// (0x000414ba) popup_toolbar_window_ParamLimits

0x68c7,	// (0x000414ba) popup_toolbar_window

0xb2ff,	// (0x00045ef2) list_single_graphic_2heading_pane_ParamLimits

0xb2ff,	// (0x00045ef2) list_single_graphic_2heading_pane

0x8c2d,	// (0x00043820) aid_size_cell_apps_grid_lsc_pane

0x8c3f,	// (0x00043832) aid_size_cell_apps_grid_prt_pane

0x985d,	// (0x00044450) bg_wml_button_pane_cp1_ParamLimits

0x985d,	// (0x00044450) bg_wml_button_pane_cp1

0xa011,	// (0x00044c04) form_midp_field_text_pane_t1_ParamLimits

0x9ddb,	// (0x000449ce) input_focus_pane_cp050_ParamLimits

0xa048,	// (0x00044c3b) list_midp_form_text_pane_ParamLimits

0x9fee,	// (0x00044be1) input_focus_pane_cp051_ParamLimits

0xa002,	// (0x00044bf5) list_midp_choice_pane_ParamLimits

0x9e94,	// (0x00044a87) list_single_2graphic_pane_cp3_ParamLimits

0x9e94,	// (0x00044a87) list_single_2graphic_pane_cp3

0x9eb8,	// (0x00044aab) list_single_midp_graphic_pane_ParamLimits

0x9eb8,	// (0x00044aab) list_single_midp_graphic_pane

0x507a,	// (0x0003fc6d) list_single_graphic_2heading_pane_g1_ParamLimits

0x507a,	// (0x0003fc6d) list_single_graphic_2heading_pane_g1

0x5086,	// (0x0003fc79) list_single_graphic_2heading_pane_g4_ParamLimits

0x5086,	// (0x0003fc79) list_single_graphic_2heading_pane_g4

0x5092,	// (0x0003fc85) list_single_graphic_2heading_pane_g5_ParamLimits

0x5092,	// (0x0003fc85) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b5,	// (0x0004a3a8) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b5,	// (0x0004a3a8) list_single_graphic_2heading_pane_g

0x509e,	// (0x0003fc91) list_single_graphic_2heading_pane_t1_ParamLimits

0x509e,	// (0x0003fc91) list_single_graphic_2heading_pane_t1

0x50b2,	// (0x0003fca5) list_single_graphic_2heading_pane_t2_ParamLimits

0x50b2,	// (0x0003fca5) list_single_graphic_2heading_pane_t2

0x50ce,	// (0x0003fcc1) list_single_graphic_2heading_pane_t3_ParamLimits

0x50ce,	// (0x0003fcc1) list_single_graphic_2heading_pane_t3

0x0002,

0xf7bc,	// (0x0004a3af) list_single_graphic_2heading_pane_t_ParamLimits

0xf7bc,	// (0x0004a3af) list_single_graphic_2heading_pane_t

0x9ca5,	// (0x00044898) bg_popup_sub_pane_cp2

0x9ccf,	// (0x000448c2) grid_toobar_pane

0x6974,	// (0x00041567) cell_toolbar_pane_ParamLimits

0x6974,	// (0x00041567) cell_toolbar_pane

0x9d0b,	// (0x000448fe) cell_toolbar_pane_g1_ParamLimits

0x9d0b,	// (0x000448fe) cell_toolbar_pane_g1

0x9d1f,	// (0x00044912) cell_toolbar_pane_g2_ParamLimits

0x9d1f,	// (0x00044912) cell_toolbar_pane_g2

0x0001,

0xf7ca,	// (0x0004a3bd) cell_toolbar_pane_g_ParamLimits

0xf7ca,	// (0x0004a3bd) cell_toolbar_pane_g

0x9d41,	// (0x00044934) grid_highlight_pane_cp2_ParamLimits

0x9d41,	// (0x00044934) grid_highlight_pane_cp2

0x9d5b,	// (0x0004494e) toolbar_button_pane

0x9d67,	// (0x0004495a) toolbar_button_pane_g1

0x9d6f,	// (0x00044962) toolbar_button_pane_g2

0x9d77,	// (0x0004496a) toolbar_button_pane_g3

0x9d7f,	// (0x00044972) toolbar_button_pane_g4

0x9d87,	// (0x0004497a) toolbar_button_pane_g5

0x9d8f,	// (0x00044982) toolbar_button_pane_g6

0x9d97,	// (0x0004498a) toolbar_button_pane_g7

0x9d9f,	// (0x00044992) toolbar_button_pane_g8

0x9da7,	// (0x0004499a) toolbar_button_pane_g9

0x0009,

0xf7cf,	// (0x0004a3c2) toolbar_button_pane_g

0x69b8,	// (0x000415ab) list_single_2graphic_pane_g1_cp3_ParamLimits

0x69b8,	// (0x000415ab) list_single_2graphic_pane_g1_cp3

0x69c4,	// (0x000415b7) list_single_2graphic_pane_g2_cp3_ParamLimits

0x69c4,	// (0x000415b7) list_single_2graphic_pane_g2_cp3

0x69d5,	// (0x000415c8) list_single_2graphic_pane_g3_cp3

0x6059,	// (0x00040c4c) list_single_2graphic_pane_g4_cp3_ParamLimits

0x6059,	// (0x00040c4c) list_single_2graphic_pane_g4_cp3

0x69dd,	// (0x000415d0) list_single_2graphic_pane_t1_cp3_ParamLimits

0x69dd,	// (0x000415d0) list_single_2graphic_pane_t1_cp3

0xaa9d,	// (0x00045690) list_single_midp_graphic_pane_g2_ParamLimits

0xaa9d,	// (0x00045690) list_single_midp_graphic_pane_g2

0x506a,	// (0x0003fc5d) aid_zoom_text_primary

0x63ab,	// (0x00040f9e) aid_zoom_text_secondary

0x9781,	// (0x00044374) status_small_pane_g7_ParamLimits

0x9781,	// (0x00044374) status_small_pane_g7

0x97a4,	// (0x00044397) status_small_pane_t1_ParamLimits

0x7f55,	// (0x00042b48) title_pane_g2

0x0003,

0xf54e,	// (0x0004a141) title_pane_g

0x849c,	// (0x0004308f) aid_size_cell_colour_1_pane_ParamLimits

0x849c,	// (0x0004308f) aid_size_cell_colour_1_pane

0x84b0,	// (0x000430a3) aid_size_cell_colour_2_pane_ParamLimits

0x84b0,	// (0x000430a3) aid_size_cell_colour_2_pane

0x84c4,	// (0x000430b7) aid_size_cell_colour_3_pane_ParamLimits

0x84c4,	// (0x000430b7) aid_size_cell_colour_3_pane

0x84d8,	// (0x000430cb) aid_size_cell_colour_4_pane_ParamLimits

0x84d8,	// (0x000430cb) aid_size_cell_colour_4_pane

0x5de7,	// (0x000409da) title_pane_stacon_g1_ParamLimits

0x5de7,	// (0x000409da) title_pane_stacon_g1

0xa406,	// (0x00044ff9) popup_note_wait_window_g3_ParamLimits

0xa406,	// (0x00044ff9) popup_note_wait_window_g3

0xa47c,	// (0x0004506f) popup_note_wait_window_t5_ParamLimits

0xa47c,	// (0x0004506f) popup_note_wait_window_t5

0x7f3e,	// (0x00042b31) main_feb_china_hwr_fs_writing_pane

0x6443,	// (0x00041036) popup_feb_china_hwr_fs_window_ParamLimits

0x6443,	// (0x00041036) popup_feb_china_hwr_fs_window

0x6a27,	// (0x0004161a) aid_size_cell_hwr_fs_ParamLimits

0x6a27,	// (0x0004161a) aid_size_cell_hwr_fs

0x9ddb,	// (0x000449ce) bg_popup_sub_pane_cp3_ParamLimits

0x9ddb,	// (0x000449ce) bg_popup_sub_pane_cp3

0x6a3c,	// (0x0004162f) grid_hwr_fs_pane_ParamLimits

0x6a3c,	// (0x0004162f) grid_hwr_fs_pane

0x6a54,	// (0x00041647) linegrid_hwr_fs_pane_ParamLimits

0x6a54,	// (0x00041647) linegrid_hwr_fs_pane

0x6a64,	// (0x00041657) cell_hwr_fs_pane_ParamLimits

0x6a64,	// (0x00041657) cell_hwr_fs_pane

0x9de7,	// (0x000449da) linegrid_hwr_fs_pane_g1_ParamLimits

0x9de7,	// (0x000449da) linegrid_hwr_fs_pane_g1

0x9df3,	// (0x000449e6) linegrid_hwr_fs_pane_g2_ParamLimits

0x9df3,	// (0x000449e6) linegrid_hwr_fs_pane_g2

0x9e05,	// (0x000449f8) linegrid_hwr_fs_pane_g3_ParamLimits

0x9e05,	// (0x000449f8) linegrid_hwr_fs_pane_g3

0x6a86,	// (0x00041679) linegrid_hwr_fs_pane_g4_ParamLimits

0x6a86,	// (0x00041679) linegrid_hwr_fs_pane_g4

0x6aa0,	// (0x00041693) linegrid_hwr_fs_pane_g5_ParamLimits

0x6aa0,	// (0x00041693) linegrid_hwr_fs_pane_g5

0x0004,

0xf7fa,	// (0x0004a3ed) linegrid_hwr_fs_pane_g_ParamLimits

0xf7fa,	// (0x0004a3ed) linegrid_hwr_fs_pane_g

0x9e11,	// (0x00044a04) cell_hwr_fs_pane_g1_ParamLimits

0x9e11,	// (0x00044a04) cell_hwr_fs_pane_g1

0x9bdc,	// (0x000447cf) cell_hwr_fs_pane_g2_ParamLimits

0x9bdc,	// (0x000447cf) cell_hwr_fs_pane_g2

0x9e27,	// (0x00044a1a) cell_hwr_fs_pane_g3_ParamLimits

0x9e27,	// (0x00044a1a) cell_hwr_fs_pane_g3

0x9e34,	// (0x00044a27) cell_hwr_fs_pane_g4_ParamLimits

0x9e34,	// (0x00044a27) cell_hwr_fs_pane_g4

0x0003,

0xf805,	// (0x0004a3f8) cell_hwr_fs_pane_g_ParamLimits

0xf805,	// (0x0004a3f8) cell_hwr_fs_pane_g

0x6ab6,	// (0x000416a9) cell_hwr_fs_pane_t1

0x7f3e,	// (0x00042b31) grid_highlight_pane_cp6

0x7f3e,	// (0x00042b31) main_idle_act2_pane

0x89e4,	// (0x000435d7) aid_inside_area_popup_secondary

0xaabf,	// (0x000456b2) aid_inside_area_window_primary_ParamLimits

0xaabf,	// (0x000456b2) aid_inside_area_window_primary

0xb5ff,	// (0x000461f2) ai2_news_ticker_pane

0xb607,	// (0x000461fa) aid_size_cell_ai1_link_ParamLimits

0xb607,	// (0x000461fa) aid_size_cell_ai1_link

0xb621,	// (0x00046214) popup_ai2_data_window_ParamLimits

0xb621,	// (0x00046214) popup_ai2_data_window

0xb637,	// (0x0004622a) popup_ai2_link_window_ParamLimits

0xb637,	// (0x0004622a) popup_ai2_link_window

0x9ddb,	// (0x000449ce) bg_popup_sub_pane_cp4_ParamLimits

0x9ddb,	// (0x000449ce) bg_popup_sub_pane_cp4

0xb64b,	// (0x0004623e) grid_ai2_link_pane_ParamLimits

0xb64b,	// (0x0004623e) grid_ai2_link_pane

0xb662,	// (0x00046255) popup_ai2_link_window_g1_ParamLimits

0xb662,	// (0x00046255) popup_ai2_link_window_g1

0xb66e,	// (0x00046261) popup_ai2_link_window_g2_ParamLimits

0xb66e,	// (0x00046261) popup_ai2_link_window_g2

0x0001,

0xf9d8,	// (0x0004a5cb) popup_ai2_link_window_g_ParamLimits

0xf9d8,	// (0x0004a5cb) popup_ai2_link_window_g

0xb67d,	// (0x00046270) ai2_mp_button_pane

0xb685,	// (0x00046278) ai2_mp_volume_pane

0x9fee,	// (0x00044be1) bg_popup_sub_pane_cp5_ParamLimits

0x9fee,	// (0x00044be1) bg_popup_sub_pane_cp5

0xb68d,	// (0x00046280) heading_ai2_gene_pane_ParamLimits

0xb68d,	// (0x00046280) heading_ai2_gene_pane

0xb699,	// (0x0004628c) list_ai2_gene_pane_ParamLimits

0xb699,	// (0x0004628c) list_ai2_gene_pane

0xb6e1,	// (0x000462d4) cell_ai2_link_pane_ParamLimits

0xb6e1,	// (0x000462d4) cell_ai2_link_pane

0xb6f7,	// (0x000462ea) cell_ai2_link_pane_g1

0x7f3e,	// (0x00042b31) grid_highlight_pane_cp7

0x6e3e,	// (0x00041a31) ai2_mp_volume_pane_g1

0xb7c7,	// (0x000463ba) ai2_mp_volume_pane_g2

0xb73c,	// (0x0004632f) list_ai2_gene_pane_t1

0xb7cf,	// (0x000463c2) ai2_mp_volume_pane_g3

0x0002,

0xf9f1,	// (0x0004a5e4) ai2_mp_volume_pane_g

0x6e46,	// (0x00041a39) volume_small_pane_cp3

0xb7d7,	// (0x000463ca) aid_size_cell_ai2_button

0xb7df,	// (0x000463d2) grid_ai2_button_pane

0xb7e8,	// (0x000463db) cell_ai2_button_pane_ParamLimits

0xb7e8,	// (0x000463db) cell_ai2_button_pane

0x7f34,	// (0x00042b27) cell_ai2_button_pane_g1

0x7f3e,	// (0x00042b31) grid_highlight_pane_cp8

0xb787,	// (0x0004637a) ai2_gene_pane_t1_ParamLimits

0xb787,	// (0x0004637a) ai2_gene_pane_t1

0x6399,	// (0x00040f8c) aid_height_parent_landscape

0xb136,	// (0x00045d29) aid_height_set_list

0xb147,	// (0x00045d3a) aid_size_parent

0xb425,	// (0x00046018) aid_size_cell_graphic_pane_ParamLimits

0xb6a9,	// (0x0004629c) popup_ai2_data_window_g1_ParamLimits

0xb6a9,	// (0x0004629c) popup_ai2_data_window_g1

0xb6b5,	// (0x000462a8) ai2_news_ticker_pane_g1

0xb6bd,	// (0x000462b0) ai2_news_ticker_pane_g2

0x0001,

0xf9dd,	// (0x0004a5d0) ai2_news_ticker_pane_g

0xb6c5,	// (0x000462b8) ai2_news_ticker_pane_t1

0xb6d3,	// (0x000462c6) ai2_news_ticker_pane_t2

0x0001,

0xf9e2,	// (0x0004a5d5) ai2_news_ticker_pane_t

0xb700,	// (0x000462f3) heading_ai2_gene_pane_g1

0xb708,	// (0x000462fb) heading_ai2_gene_pane_t1_ParamLimits

0xb708,	// (0x000462fb) heading_ai2_gene_pane_t1

0xb71d,	// (0x00046310) list_highlight_pane_cp6

0xb725,	// (0x00046318) ai2_gene_pane_ParamLimits

0xb725,	// (0x00046318) ai2_gene_pane

0xb74a,	// (0x0004633d) list_ai2_gene_pane_t2

0x0001,

0xf9e7,	// (0x0004a5da) list_ai2_gene_pane_t

0xb758,	// (0x0004634b) list_highlight_pane_cp8_ParamLimits

0xb758,	// (0x0004634b) list_highlight_pane_cp8

0xb769,	// (0x0004635c) ai2_gene_pane_g1_ParamLimits

0xb769,	// (0x0004635c) ai2_gene_pane_g1

0xb77b,	// (0x0004636e) ai2_gene_pane_g2_ParamLimits

0xb77b,	// (0x0004636e) ai2_gene_pane_g2

0x0001,

0xf9ec,	// (0x0004a5df) ai2_gene_pane_g_ParamLimits

0xf9ec,	// (0x0004a5df) ai2_gene_pane_g

0x8823,	// (0x00043416) scroll_pane_cp12

0x6358,	// (0x00040f4b) control_pane_t3_ParamLimits

0x6358,	// (0x00040f4b) control_pane_t3

0x9795,	// (0x00044388) status_small_pane_g8_ParamLimits

0x9795,	// (0x00044388) status_small_pane_g8

0x6529,	// (0x0004111c) popup_find_window_ParamLimits

0x673e,	// (0x00041331) popup_note_image_window_ParamLimits

0x50e6,	// (0x0003fcd9) list_double2_graphic_pane_vc_g1_ParamLimits

0x50e6,	// (0x0003fcd9) list_double2_graphic_pane_vc_g1

0x9458,	// (0x0004404b) list_double2_graphic_pane_vc_g2_ParamLimits

0x9458,	// (0x0004404b) list_double2_graphic_pane_vc_g2

0x69a4,	// (0x00041597) list_double2_graphic_pane_vc_g3_ParamLimits

0x69a4,	// (0x00041597) list_double2_graphic_pane_vc_g3

0x0002,

0xf7c3,	// (0x0004a3b6) list_double2_graphic_pane_vc_g_ParamLimits

0xf7c3,	// (0x0004a3b6) list_double2_graphic_pane_vc_g

0x50f2,	// (0x0003fce5) list_double2_graphic_pane_vc_t1_ParamLimits

0x50f2,	// (0x0003fce5) list_double2_graphic_pane_vc_t1

0x9458,	// (0x0004404b) list_single_heading_pane_vc_g1_ParamLimits

0x9458,	// (0x0004404b) list_single_heading_pane_vc_g1

0x69a4,	// (0x00041597) list_single_heading_pane_vc_g2_ParamLimits

0x69a4,	// (0x00041597) list_single_heading_pane_vc_g2

0x0001,

0xf7e4,	// (0x0004a3d7) list_single_heading_pane_vc_g_ParamLimits

0xf7e4,	// (0x0004a3d7) list_single_heading_pane_vc_g

0x5108,	// (0x0003fcfb) list_single_heading_pane_vc_t1_ParamLimits

0x5108,	// (0x0003fcfb) list_single_heading_pane_vc_t1

0x5120,	// (0x0003fd13) list_single_heading_pane_vc_t2_ParamLimits

0x5120,	// (0x0003fd13) list_single_heading_pane_vc_t2

0x0001,

0xf7e9,	// (0x0004a3dc) list_single_heading_pane_vc_t_ParamLimits

0xf7e9,	// (0x0004a3dc) list_single_heading_pane_vc_t

0x6a0f,	// (0x00041602) list_setting_number_pane_vc_g1_ParamLimits

0x6a0f,	// (0x00041602) list_setting_number_pane_vc_g1

0x6a1b,	// (0x0004160e) list_setting_number_pane_vc_g2_ParamLimits

0x6a1b,	// (0x0004160e) list_setting_number_pane_vc_g2

0x0001,

0xf7ee,	// (0x0004a3e1) list_setting_number_pane_vc_g_ParamLimits

0xf7ee,	// (0x0004a3e1) list_setting_number_pane_vc_g

0x513c,	// (0x0003fd2f) list_setting_number_pane_vc_t1_ParamLimits

0x513c,	// (0x0003fd2f) list_setting_number_pane_vc_t1

0x5150,	// (0x0003fd43) list_setting_number_pane_vc_t2_ParamLimits

0x5150,	// (0x0003fd43) list_setting_number_pane_vc_t2

0x516c,	// (0x0003fd5f) list_setting_number_pane_vc_t3_ParamLimits

0x516c,	// (0x0003fd5f) list_setting_number_pane_vc_t3

0x0002,

0xf7f3,	// (0x0004a3e6) list_setting_number_pane_vc_t_ParamLimits

0xf7f3,	// (0x0004a3e6) list_setting_number_pane_vc_t

0x5198,	// (0x0003fd8b) set_value_pane_vc_ParamLimits

0x5198,	// (0x0003fd8b) set_value_pane_vc

0xb2ff,	// (0x00045ef2) list_double2_graphic_pane_vc_ParamLimits

0xb2ff,	// (0x00045ef2) list_double2_graphic_pane_vc

0x5250,	// (0x0003fe43) list_double2_large_graphic_pane_vc_ParamLimits

0x5250,	// (0x0003fe43) list_double2_large_graphic_pane_vc

0xb2ff,	// (0x00045ef2) list_double2_pane_vc_ParamLimits

0xb2ff,	// (0x00045ef2) list_double2_pane_vc

0xb2ff,	// (0x00045ef2) list_double_graphic_heading_pane_vc_ParamLimits

0xb2ff,	// (0x00045ef2) list_double_graphic_heading_pane_vc

0xb2ff,	// (0x00045ef2) list_double_graphic_pane_vc_ParamLimits

0xb2ff,	// (0x00045ef2) list_double_graphic_pane_vc

0xb2ff,	// (0x00045ef2) list_double_heading_pane_vc_ParamLimits

0xb2ff,	// (0x00045ef2) list_double_heading_pane_vc

0x5261,	// (0x0003fe54) list_double_large_graphic_pane_vc_ParamLimits

0x5261,	// (0x0003fe54) list_double_large_graphic_pane_vc

0xb2ff,	// (0x00045ef2) list_double_number_pane_vc_ParamLimits

0xb2ff,	// (0x00045ef2) list_double_number_pane_vc

0xb2ff,	// (0x00045ef2) list_double_pane_vc_ParamLimits

0xb2ff,	// (0x00045ef2) list_double_pane_vc

0xb2ff,	// (0x00045ef2) list_double_time_pane_vc_ParamLimits

0xb2ff,	// (0x00045ef2) list_double_time_pane_vc

0xb2ff,	// (0x00045ef2) list_setting_number_pane_vc_ParamLimits

0xb2ff,	// (0x00045ef2) list_setting_number_pane_vc

0xb2ff,	// (0x00045ef2) list_setting_pane_vc_ParamLimits

0xb2ff,	// (0x00045ef2) list_setting_pane_vc

0xb2ff,	// (0x00045ef2) list_single_graphic_heading_pane_vc_ParamLimits

0xb2ff,	// (0x00045ef2) list_single_graphic_heading_pane_vc

0xb2ff,	// (0x00045ef2) list_single_heading_pane_vc_ParamLimits

0xb2ff,	// (0x00045ef2) list_single_heading_pane_vc

0x6d0b,	// (0x000418fe) list_single_number_heading_pane_vc_ParamLimits

0x6d0b,	// (0x000418fe) list_single_number_heading_pane_vc

0x50e6,	// (0x0003fcd9) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x50e6,	// (0x0003fcd9) list_double_graphic_heading_pane_vc_g1

0x9458,	// (0x0004404b) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x9458,	// (0x0004404b) list_double_graphic_heading_pane_vc_g2

0x69a4,	// (0x00041597) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x69a4,	// (0x00041597) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7c3,	// (0x0004a3b6) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7c3,	// (0x0004a3b6) list_double_graphic_heading_pane_vc_g

0x52b0,	// (0x0003fea3) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x52b0,	// (0x0003fea3) list_double_graphic_heading_pane_vc_t1

0x52cc,	// (0x0003febf) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x52cc,	// (0x0003febf) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f8,	// (0x0004a5eb) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f8,	// (0x0004a5eb) list_double_graphic_heading_pane_vc_t

0x6a0f,	// (0x00041602) list_setting_pane_vc_g1_ParamLimits

0x6a0f,	// (0x00041602) list_setting_pane_vc_g1

0x6a1b,	// (0x0004160e) list_setting_pane_vc_g2_ParamLimits

0x6a1b,	// (0x0004160e) list_setting_pane_vc_g2

0x0001,

0xf7ee,	// (0x0004a3e1) list_setting_pane_vc_g_ParamLimits

0xf7ee,	// (0x0004a3e1) list_setting_pane_vc_g

0x52ea,	// (0x0003fedd) list_setting_pane_vc_t1_ParamLimits

0x52ea,	// (0x0003fedd) list_setting_pane_vc_t1

0x5306,	// (0x0003fef9) list_setting_pane_vc_t2_ParamLimits

0x5306,	// (0x0003fef9) list_setting_pane_vc_t2

0x0001,

0xfa26,	// (0x0004a619) list_setting_pane_vc_t_ParamLimits

0xfa26,	// (0x0004a619) list_setting_pane_vc_t

0x5198,	// (0x0003fd8b) set_value_pane_cp_vc_ParamLimits

0x5198,	// (0x0003fd8b) set_value_pane_cp_vc

0x9458,	// (0x0004404b) list_single_number_heading_pane_vc_g1_ParamLimits

0x9458,	// (0x0004404b) list_single_number_heading_pane_vc_g1

0x69a4,	// (0x00041597) list_single_number_heading_pane_vc_g2_ParamLimits

0x69a4,	// (0x00041597) list_single_number_heading_pane_vc_g2

0x0001,

0xf7e4,	// (0x0004a3d7) list_single_number_heading_pane_vc_g_ParamLimits

0xf7e4,	// (0x0004a3d7) list_single_number_heading_pane_vc_g

0x5108,	// (0x0003fcfb) list_single_number_heading_pane_vc_t1_ParamLimits

0x5108,	// (0x0003fcfb) list_single_number_heading_pane_vc_t1

0x5322,	// (0x0003ff15) list_single_number_heading_pane_vc_t2_ParamLimits

0x5322,	// (0x0003ff15) list_single_number_heading_pane_vc_t2

0x5336,	// (0x0003ff29) list_single_number_heading_pane_vc_t3_ParamLimits

0x5336,	// (0x0003ff29) list_single_number_heading_pane_vc_t3

0x0002,

0xfa2b,	// (0x0004a61e) list_single_number_heading_pane_vc_t_ParamLimits

0xfa2b,	// (0x0004a61e) list_single_number_heading_pane_vc_t

0x50e6,	// (0x0003fcd9) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x50e6,	// (0x0003fcd9) list_single_graphic_heading_pane_vc_g1

0x9458,	// (0x0004404b) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x9458,	// (0x0004404b) list_single_graphic_heading_pane_vc_g4

0x69a4,	// (0x00041597) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x69a4,	// (0x00041597) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7c3,	// (0x0004a3b6) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7c3,	// (0x0004a3b6) list_single_graphic_heading_pane_vc_g

0x5108,	// (0x0003fcfb) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x5108,	// (0x0003fcfb) list_single_graphic_heading_pane_vc_t1

0x5348,	// (0x0003ff3b) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x5348,	// (0x0003ff3b) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa32,	// (0x0004a625) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa32,	// (0x0004a625) list_single_graphic_heading_pane_vc_t

0x9458,	// (0x0004404b) list_double2_pane_vc_g1_ParamLimits

0x9458,	// (0x0004404b) list_double2_pane_vc_g1

0x69a4,	// (0x00041597) list_double2_pane_vc_g2_ParamLimits

0x69a4,	// (0x00041597) list_double2_pane_vc_g2

0x0001,

0xf7e4,	// (0x0004a3d7) list_double2_pane_vc_g_ParamLimits

0xf7e4,	// (0x0004a3d7) list_double2_pane_vc_g

0x535c,	// (0x0003ff4f) list_double2_pane_vc_t1_ParamLimits

0x535c,	// (0x0003ff4f) list_double2_pane_vc_t1

0x5372,	// (0x0003ff65) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x5372,	// (0x0003ff65) list_double2_large_graphic_pane_vc_g1

0x537e,	// (0x0003ff71) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x537e,	// (0x0003ff71) list_double2_large_graphic_pane_vc_g2

0x538a,	// (0x0003ff7d) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x538a,	// (0x0003ff7d) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa37,	// (0x0004a62a) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa37,	// (0x0004a62a) list_double2_large_graphic_pane_vc_g

0x5396,	// (0x0003ff89) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x5396,	// (0x0003ff89) list_double2_large_graphic_pane_vc_t1

0x6e4f,	// (0x00041a42) list_double_time_pane_vc_g1_ParamLimits

0x6e4f,	// (0x00041a42) list_double_time_pane_vc_g1

0x6e5b,	// (0x00041a4e) list_double_time_pane_vc_g2_ParamLimits

0x6e5b,	// (0x00041a4e) list_double_time_pane_vc_g2

0x0001,

0xfa3e,	// (0x0004a631) list_double_time_pane_vc_g_ParamLimits

0xfa3e,	// (0x0004a631) list_double_time_pane_vc_g

0x53ac,	// (0x0003ff9f) list_double_time_pane_vc_t1_ParamLimits

0x53ac,	// (0x0003ff9f) list_double_time_pane_vc_t1

0x53d0,	// (0x0003ffc3) list_double_time_pane_vc_t2_ParamLimits

0x53d0,	// (0x0003ffc3) list_double_time_pane_vc_t2

0x541f,	// (0x00040012) list_double_time_pane_vc_t3_ParamLimits

0x541f,	// (0x00040012) list_double_time_pane_vc_t3

0x5431,	// (0x00040024) list_double_time_pane_vc_t4_ParamLimits

0x5431,	// (0x00040024) list_double_time_pane_vc_t4

0x0003,

0xfa43,	// (0x0004a636) list_double_time_pane_vc_t_ParamLimits

0xfa43,	// (0x0004a636) list_double_time_pane_vc_t

0x9458,	// (0x0004404b) list_double_pane_vc_g1_ParamLimits

0x9458,	// (0x0004404b) list_double_pane_vc_g1

0x69a4,	// (0x00041597) list_double_pane_vc_g2_ParamLimits

0x69a4,	// (0x00041597) list_double_pane_vc_g2

0x0001,

0xf7e4,	// (0x0004a3d7) list_double_pane_vc_g_ParamLimits

0xf7e4,	// (0x0004a3d7) list_double_pane_vc_g

0x5445,	// (0x00040038) list_double_pane_vc_t1_ParamLimits

0x5445,	// (0x00040038) list_double_pane_vc_t1

0x5459,	// (0x0004004c) list_double_pane_vc_t2_ParamLimits

0x5459,	// (0x0004004c) list_double_pane_vc_t2

0x0001,

0xfa4c,	// (0x0004a63f) list_double_pane_vc_t_ParamLimits

0xfa4c,	// (0x0004a63f) list_double_pane_vc_t

0x9458,	// (0x0004404b) list_double_number_pane_vc_g1_ParamLimits

0x9458,	// (0x0004404b) list_double_number_pane_vc_g1

0x69a4,	// (0x00041597) list_double_number_pane_vc_g2_ParamLimits

0x69a4,	// (0x00041597) list_double_number_pane_vc_g2

0x0001,

0xf7e4,	// (0x0004a3d7) list_double_number_pane_vc_g_ParamLimits

0xf7e4,	// (0x0004a3d7) list_double_number_pane_vc_g

0x5471,	// (0x00040064) list_double_number_pane_vc_t1_ParamLimits

0x5471,	// (0x00040064) list_double_number_pane_vc_t1

0x5483,	// (0x00040076) list_double_number_pane_vc_t2_ParamLimits

0x5483,	// (0x00040076) list_double_number_pane_vc_t2

0x5497,	// (0x0004008a) list_double_number_pane_vc_t3_ParamLimits

0x5497,	// (0x0004008a) list_double_number_pane_vc_t3

0x0002,

0xfa51,	// (0x0004a644) list_double_number_pane_vc_t_ParamLimits

0xfa51,	// (0x0004a644) list_double_number_pane_vc_t

0x54af,	// (0x000400a2) list_double_large_graphic_pane_vc_g1_ParamLimits

0x54af,	// (0x000400a2) list_double_large_graphic_pane_vc_g1

0x54d1,	// (0x000400c4) list_double_large_graphic_pane_vc_g2_ParamLimits

0x54d1,	// (0x000400c4) list_double_large_graphic_pane_vc_g2

0x54e5,	// (0x000400d8) list_double_large_graphic_pane_vc_g3_ParamLimits

0x54e5,	// (0x000400d8) list_double_large_graphic_pane_vc_g3

0x54f4,	// (0x000400e7) list_double_large_graphic_pane_vc_g4_ParamLimits

0x54f4,	// (0x000400e7) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa58,	// (0x0004a64b) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa58,	// (0x0004a64b) list_double_large_graphic_pane_vc_g

0x5500,	// (0x000400f3) list_double_large_graphic_pane_vc_t1_ParamLimits

0x5500,	// (0x000400f3) list_double_large_graphic_pane_vc_t1

0x551c,	// (0x0004010f) list_double_large_graphic_pane_vc_t2_ParamLimits

0x551c,	// (0x0004010f) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa61,	// (0x0004a654) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa61,	// (0x0004a654) list_double_large_graphic_pane_vc_t

0x9458,	// (0x0004404b) list_double_heading_pane_vc_g1_ParamLimits

0x9458,	// (0x0004404b) list_double_heading_pane_vc_g1

0x69a4,	// (0x00041597) list_double_heading_pane_vc_g2_ParamLimits

0x69a4,	// (0x00041597) list_double_heading_pane_vc_g2

0x0001,

0xf7e4,	// (0x0004a3d7) list_double_heading_pane_vc_g_ParamLimits

0xf7e4,	// (0x0004a3d7) list_double_heading_pane_vc_g

0x553e,	// (0x00040131) list_double_heading_pane_vc_t1_ParamLimits

0x553e,	// (0x00040131) list_double_heading_pane_vc_t1

0x5108,	// (0x0003fcfb) list_double_heading_pane_vc_t2_ParamLimits

0x5108,	// (0x0003fcfb) list_double_heading_pane_vc_t2

0x0001,

0xfa66,	// (0x0004a659) list_double_heading_pane_vc_t_ParamLimits

0xfa66,	// (0x0004a659) list_double_heading_pane_vc_t

0x5552,	// (0x00040145) list_double_graphic_pane_vc_g1_ParamLimits

0x5552,	// (0x00040145) list_double_graphic_pane_vc_g1

0x6e67,	// (0x00041a5a) list_double_graphic_pane_vc_g2_ParamLimits

0x6e67,	// (0x00041a5a) list_double_graphic_pane_vc_g2

0x9458,	// (0x0004404b) list_double_graphic_pane_vc_g3_ParamLimits

0x9458,	// (0x0004404b) list_double_graphic_pane_vc_g3

0x0003,

0xfa6b,	// (0x0004a65e) list_double_graphic_pane_vc_g_ParamLimits

0xfa6b,	// (0x0004a65e) list_double_graphic_pane_vc_g

0x555e,	// (0x00040151) list_double_graphic_pane_vc_t1_ParamLimits

0x555e,	// (0x00040151) list_double_graphic_pane_vc_t1

0x5588,	// (0x0004017b) list_double_graphic_pane_vc_t2_ParamLimits

0x5588,	// (0x0004017b) list_double_graphic_pane_vc_t2

0x0001,

0xfa74,	// (0x0004a667) list_double_graphic_pane_vc_t_ParamLimits

0xfa74,	// (0x0004a667) list_double_graphic_pane_vc_t

0x5898,	// (0x0004048b) aid_size_cell_fastswap

0x58a0,	// (0x00040493) aid_size_cell_touch_ParamLimits

0x58a0,	// (0x00040493) aid_size_cell_touch

0x5afb,	// (0x000406ee) popup_fast_swap_wide_window_ParamLimits

0x5afb,	// (0x000406ee) popup_fast_swap_wide_window

0x5c0f,	// (0x00040802) touch_pane_ParamLimits

0x5c0f,	// (0x00040802) touch_pane

0x8885,	// (0x00043478) button_value_adjust_pane_cp2

0x4d91,	// (0x0003f984) button_value_adjust_pane_cp4

0x4db5,	// (0x0003f9a8) form_field_data_pane_cp2

0x4dd6,	// (0x0003f9c9) form_field_data_wide_pane_cp2

0x8cf6,	// (0x000438e9) bg_scroll_pane_ParamLimits

0x5f49,	// (0x00040b3c) scroll_handle_pane_ParamLimits

0x5f5d,	// (0x00040b50) scroll_sc2_down_pane_ParamLimits

0x5f5d,	// (0x00040b50) scroll_sc2_down_pane

0x8d27,	// (0x0004391a) scroll_sc2_up_pane_ParamLimits

0x8d27,	// (0x0004391a) scroll_sc2_up_pane

0xbeb8,	// (0x00046aab) grid_wheel_folder_pane_g1_ParamLimits

0xbeb8,	// (0x00046aab) grid_wheel_folder_pane_g1

0x613e,	// (0x00040d31) clock_nsta_pane_cp2_ParamLimits

0x613e,	// (0x00040d31) clock_nsta_pane_cp2

0x8a71,	// (0x00043664) listscroll_midp_pane_ParamLimits

0x9527,	// (0x0004411a) midp_canvas_pane

0x980f,	// (0x00044402) nsta_clock_indic_pane

0x9843,	// (0x00044436) listscroll_form_pane_vc

0x984b,	// (0x0004443e) listscroll_set_pane_vc_ParamLimits

0x984b,	// (0x0004443e) listscroll_set_pane_vc

0x9950,	// (0x00044543) clock_nsta_pane

0x99c5,	// (0x000445b8) indicator_nsta_pane

0x9ca5,	// (0x00044898) bg_popup_sub_pane_cp2_ParamLimits

0x9cb9,	// (0x000448ac) find_pane_cp2_ParamLimits

0x9cb9,	// (0x000448ac) find_pane_cp2

0x9ccf,	// (0x000448c2) grid_toobar_pane_ParamLimits

0x9daf,	// (0x000449a2) list_form_gen_pane_vc_ParamLimits

0x9daf,	// (0x000449a2) list_form_gen_pane_vc

0x9dc5,	// (0x000449b8) scroll_pane_cp8_vc_ParamLimits

0x9dc5,	// (0x000449b8) scroll_pane_cp8_vc

0x9e41,	// (0x00044a34) data_form_wide_pane_vc_ParamLimits

0x9e41,	// (0x00044a34) data_form_wide_pane_vc

0x9e4d,	// (0x00044a40) form_field_data_wide_pane_vc_g1

0x9e55,	// (0x00044a48) form_field_data_wide_pane_vc_t1_ParamLimits

0x9e55,	// (0x00044a48) form_field_data_wide_pane_vc_t1

0x8899,	// (0x0004348c) input_focus_pane_cp6_vc_ParamLimits

0x8899,	// (0x0004348c) input_focus_pane_cp6_vc

0xa181,	// (0x00044d74) list_midp_pane_ParamLimits

0xa18d,	// (0x00044d80) scroll_pane_cp16_ParamLimits

0xa18d,	// (0x00044d80) scroll_pane_cp16

0xa1db,	// (0x00044dce) button_value_adjust_pane_ParamLimits

0xa1db,	// (0x00044dce) button_value_adjust_pane

0xb159,	// (0x00045d4c) button_value_adjust_pane_cp6_ParamLimits

0xb159,	// (0x00045d4c) button_value_adjust_pane_cp6

0xb283,	// (0x00045e76) settings_code_pane_cp_ParamLimits

0xb283,	// (0x00045e76) settings_code_pane_cp

0x7f34,	// (0x00042b27) cell_touch_pane_g1

0x7f34,	// (0x00042b27) cell_touch_pane_g2

0x0001,

0xf708,	// (0x0004a2fb) cell_touch_pane_g

0xb7fa,	// (0x000463ed) cell_touch_pane_cp_ParamLimits

0xb7fa,	// (0x000463ed) cell_touch_pane_cp

0xb80a,	// (0x000463fd) cell_touch_pane_ParamLimits

0xb80a,	// (0x000463fd) cell_touch_pane

0x7f34,	// (0x00042b27) scroll_sc2_down_pane_g1

0x7f34,	// (0x00042b27) scroll_sc2_up_pane_g1

0x7f3e,	// (0x00042b31) bg_set_opt_pane_cp4_vc

0xb81c,	// (0x0004640f) list_set_graphic_pane_vc_g1_ParamLimits

0xb81c,	// (0x0004640f) list_set_graphic_pane_vc_g1

0xb828,	// (0x0004641b) list_set_graphic_pane_vc_g2_ParamLimits

0xb828,	// (0x0004641b) list_set_graphic_pane_vc_g2

0x0001,

0xf9fd,	// (0x0004a5f0) list_set_graphic_pane_vc_g_ParamLimits

0xf9fd,	// (0x0004a5f0) list_set_graphic_pane_vc_g

0xb834,	// (0x00046427) text_primary_small_cp13_vc_ParamLimits

0xb834,	// (0x00046427) text_primary_small_cp13_vc

0xb84c,	// (0x0004643f) list_set_graphic_pane_vc_ParamLimits

0xb84c,	// (0x0004643f) list_set_graphic_pane_vc

0x7f3e,	// (0x00042b31) input_focus_pane_cp2_vc

0x7f34,	// (0x00042b27) setting_code_pane_vc_g1

0x8069,	// (0x00042c5c) setting_code_pane_vc_t1

0xb85f,	// (0x00046452) set_text_pane_vc_t1_ParamLimits

0xb85f,	// (0x00046452) set_text_pane_vc_t1

0x7f3e,	// (0x00042b31) input_focus_pane_cp1_vc

0xb87b,	// (0x0004646e) list_set_text_pane_vc

0x7f34,	// (0x00042b27) setting_text_pane_vc_g1

0x7f3e,	// (0x00042b31) bg_set_opt_pane_cp2_vc

0x8060,	// (0x00042c53) setting_slider_graphic_pane_vc_g1

0xb885,	// (0x00046478) setting_slider_graphic_pane_vc_t1

0xb895,	// (0x00046488) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa02,	// (0x0004a5f5) setting_slider_graphic_pane_vc_t

0xb8a5,	// (0x00046498) slider_set_pane_cp_vc

0xb8ad,	// (0x000464a0) slider_set_pane_vc_g1

0xb8b6,	// (0x000464a9) slider_set_pane_vc_g2

0x0006,

0xfa07,	// (0x0004a5fa) slider_set_pane_vc_g

0x88e8,	// (0x000434db) set_opt_bg_pane_g1_copy1

0x88f0,	// (0x000434e3) set_opt_bg_pane_g2_copy1

0xb8e2,	// (0x000464d5) set_opt_bg_pane_g3_copy1

0x8900,	// (0x000434f3) set_opt_bg_pane_g4_copy1

0x8908,	// (0x000434fb) set_opt_bg_pane_g5_copy1

0x8910,	// (0x00043503) set_opt_bg_pane_g6_copy1

0xb8ec,	// (0x000464df) set_opt_bg_pane_g7_copy1

0xb8f4,	// (0x000464e7) set_opt_bg_pane_g8_copy1

0xb8fe,	// (0x000464f1) set_opt_bg_pane_g9_copy1

0x7f3e,	// (0x00042b31) bg_set_opt_pane_cp_vc

0xb908,	// (0x000464fb) setting_slider_pane_vc_t1

0xb917,	// (0x0004650a) setting_slider_pane_vc_t2

0xb927,	// (0x0004651a) setting_slider_pane_vc_t3

0x0002,

0xfa16,	// (0x0004a609) setting_slider_pane_vc_t

0xb937,	// (0x0004652a) slider_set_pane_vc

0x6ac4,	// (0x000416b7) volume_set_pane_vc_g1

0x6acd,	// (0x000416c0) volume_set_pane_vc_g2

0x6ad6,	// (0x000416c9) volume_set_pane_vc_g3

0x6adf,	// (0x000416d2) volume_set_pane_vc_g4

0x6ae8,	// (0x000416db) volume_set_pane_vc_g5

0x6af1,	// (0x000416e4) volume_set_pane_vc_g6

0x6afa,	// (0x000416ed) volume_set_pane_vc_g7

0x6b03,	// (0x000416f6) volume_set_pane_vc_g8

0x6b0c,	// (0x000416ff) volume_set_pane_vc_g9

0x6b15,	// (0x00041708) volume_set_pane_vc_g10

0x0009,

0xf8bb,	// (0x0004a4ae) volume_set_pane_vc_g

0xb93f,	// (0x00046532) volume_set_pane_vc

0xb947,	// (0x0004653a) button_value_adjust_pane_cp1_vc

0xb951,	// (0x00046544) list_highlight_pane_cp2_vc

0xb95a,	// (0x0004654d) list_set_pane_vc_ParamLimits

0xb95a,	// (0x0004654d) list_set_pane_vc

0xb9b8,	// (0x000465ab) main_pane_set_vc_t1_ParamLimits

0xb9b8,	// (0x000465ab) main_pane_set_vc_t1

0xb9cd,	// (0x000465c0) main_pane_set_vc_t2_ParamLimits

0xb9cd,	// (0x000465c0) main_pane_set_vc_t2

0xb9df,	// (0x000465d2) main_pane_set_vc_t3_ParamLimits

0xb9df,	// (0x000465d2) main_pane_set_vc_t3

0xb9f3,	// (0x000465e6) main_pane_set_vc_t4_ParamLimits

0xb9f3,	// (0x000465e6) main_pane_set_vc_t4

0x0003,

0xfa1d,	// (0x0004a610) main_pane_set_vc_t_ParamLimits

0xfa1d,	// (0x0004a610) main_pane_set_vc_t

0xba07,	// (0x000465fa) setting_code_pane_vc_ParamLimits

0xba07,	// (0x000465fa) setting_code_pane_vc

0xba18,	// (0x0004660b) setting_slider_graphic_pane_vc

0xba18,	// (0x0004660b) setting_slider_pane_vc

0xba18,	// (0x0004660b) setting_text_pane_vc

0xba18,	// (0x0004660b) setting_volume_pane_vc

0xba22,	// (0x00046615) scroll_pane_cp121_vc

0x8873,	// (0x00043466) set_content_pane_vc

0xba2a,	// (0x0004661d) button_value_adjust_pane_g1

0xba33,	// (0x00046626) button_value_adjust_pane_g2

0x0001,

0xfa79,	// (0x0004a66c) button_value_adjust_pane_g

0xba3c,	// (0x0004662f) form_field_slider_wide_pane_vc_t1_ParamLimits

0xba3c,	// (0x0004662f) form_field_slider_wide_pane_vc_t1

0xba50,	// (0x00046643) form_field_slider_wide_pane_vc_t2_ParamLimits

0xba50,	// (0x00046643) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa7e,	// (0x0004a671) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa7e,	// (0x0004a671) form_field_slider_wide_pane_vc_t

0x8299,	// (0x00042e8c) input_focus_pane_cp10_vc_ParamLimits

0x8299,	// (0x00042e8c) input_focus_pane_cp10_vc

0xba7e,	// (0x00046671) slider_cont_pane_cp1_vc_ParamLimits

0xba7e,	// (0x00046671) slider_cont_pane_cp1_vc

0xba90,	// (0x00046683) slider_form_pane_g1_cp2

0xb8b6,	// (0x000464a9) slider_form_pane_g2_cp2

0xbabd,	// (0x000466b0) form_field_slider_pane_vc_t3

0xbacb,	// (0x000466be) form_field_slider_pane_vc_t4

0xbad9,	// (0x000466cc) slider_form_pane_vc_ParamLimits

0xbad9,	// (0x000466cc) slider_form_pane_vc

0xbae6,	// (0x000466d9) form_field_slider_pane_vc_t1_ParamLimits

0xbae6,	// (0x000466d9) form_field_slider_pane_vc_t1

0xba50,	// (0x00046643) form_field_slider_pane_vc_t2_ParamLimits

0xba50,	// (0x00046643) form_field_slider_pane_vc_t2

0x0001,

0xfa90,	// (0x0004a683) form_field_slider_pane_vc_t_ParamLimits

0xfa90,	// (0x0004a683) form_field_slider_pane_vc_t

0x8299,	// (0x00042e8c) input_focus_pane_cp9_vc_ParamLimits

0x8299,	// (0x00042e8c) input_focus_pane_cp9_vc

0xbb02,	// (0x000466f5) slider_cont_pane_vc_ParamLimits

0xbb02,	// (0x000466f5) slider_cont_pane_vc

0xbb16,	// (0x00046709) list_form_graphic_pane_cp_vc_ParamLimits

0xbb16,	// (0x00046709) list_form_graphic_pane_cp_vc

0x9e4d,	// (0x00044a40) form_field_popup_wide_pane_vc_g1

0xbb2b,	// (0x0004671e) form_field_popup_wide_pane_vc_t1_ParamLimits

0xbb2b,	// (0x0004671e) form_field_popup_wide_pane_vc_t1

0x8899,	// (0x0004348c) input_focus_pane_cp8_vc_ParamLimits

0x8899,	// (0x0004348c) input_focus_pane_cp8_vc

0xbb70,	// (0x00046763) list_form_wide_pane_vc_ParamLimits

0xbb70,	// (0x00046763) list_form_wide_pane_vc

0xbb7c,	// (0x0004676f) list_form_graphic_pane_vc_g1

0xbb84,	// (0x00046777) list_form_graphic_pane_vc_t1_ParamLimits

0xbb84,	// (0x00046777) list_form_graphic_pane_vc_t1

0x801e,	// (0x00042c11) list_highlight_pane_cp5_vc_ParamLimits

0x801e,	// (0x00042c11) list_highlight_pane_cp5_vc

0xbba0,	// (0x00046793) list_form_graphic_pane_vc_ParamLimits

0xbba0,	// (0x00046793) list_form_graphic_pane_vc

0x9e4d,	// (0x00044a40) form_field_popup_pane_vc_g1

0xbbb6,	// (0x000467a9) form_field_popup_pane_vc_t1_ParamLimits

0xbbb6,	// (0x000467a9) form_field_popup_pane_vc_t1

0x8899,	// (0x0004348c) input_focus_pane_cp7_vc_ParamLimits

0x8899,	// (0x0004348c) input_focus_pane_cp7_vc

0xbbcd,	// (0x000467c0) list_form_pane_vc_ParamLimits

0xbbcd,	// (0x000467c0) list_form_pane_vc

0xbbd9,	// (0x000467cc) data_form_pane_vc_t1_ParamLimits

0xbbd9,	// (0x000467cc) data_form_pane_vc_t1

0x88e8,	// (0x000434db) input_focus_pane_vc_g1

0x88f0,	// (0x000434e3) input_focus_pane_vc_g2

0x88f8,	// (0x000434eb) input_focus_pane_vc_g3

0x8900,	// (0x000434f3) input_focus_pane_vc_g4

0x8908,	// (0x000434fb) input_focus_pane_vc_g5

0x8910,	// (0x00043503) input_focus_pane_vc_g6

0x8918,	// (0x0004350b) input_focus_pane_vc_g7

0x8920,	// (0x00043513) input_focus_pane_vc_g8

0x8928,	// (0x0004351b) input_focus_pane_vc_g9

0x7f34,	// (0x00042b27) input_focus_pane_vc_g10

0x0009,

0xf691,	// (0x0004a284) input_focus_pane_vc_g

0x9e41,	// (0x00044a34) data_form_pane_vc_ParamLimits

0x9e41,	// (0x00044a34) data_form_pane_vc

0x9e4d,	// (0x00044a40) form_field_data_pane_vc_g1

0xbbf4,	// (0x000467e7) form_field_data_pane_vc_t1_ParamLimits

0xbbf4,	// (0x000467e7) form_field_data_pane_vc_t1

0x8899,	// (0x0004348c) input_focus_pane_vc_ParamLimits

0x8899,	// (0x0004348c) input_focus_pane_vc

0xbc0e,	// (0x00046801) button_value_adjust_pane_cp3_vc

0xbc16,	// (0x00046809) button_value_adjust_pane_cp5_vc

0xbc1e,	// (0x00046811) form_field_data_pane_vc_ParamLimits

0xbc1e,	// (0x00046811) form_field_data_pane_vc

0xbc35,	// (0x00046828) form_field_data_pane_vc_cp2

0xbc3d,	// (0x00046830) form_field_data_wide_pane_vc_ParamLimits

0xbc3d,	// (0x00046830) form_field_data_wide_pane_vc

0xbc53,	// (0x00046846) form_field_data_wide_pane_vc_cp2

0xbc5b,	// (0x0004684e) form_field_popup_pane_vc_ParamLimits

0xbc5b,	// (0x0004684e) form_field_popup_pane_vc

0xbc72,	// (0x00046865) form_field_popup_wide_pane_vc_ParamLimits

0xbc72,	// (0x00046865) form_field_popup_wide_pane_vc

0xbc88,	// (0x0004687b) form_field_slider_pane_vc_ParamLimits

0xbc88,	// (0x0004687b) form_field_slider_pane_vc

0xbc9b,	// (0x0004688e) form_field_slider_wide_pane_vc_ParamLimits

0xbc9b,	// (0x0004688e) form_field_slider_wide_pane_vc

0xbcae,	// (0x000468a1) grid_touch_1_pane_ParamLimits

0xbcae,	// (0x000468a1) grid_touch_1_pane

0xbcba,	// (0x000468ad) grid_touch_2_pane_ParamLimits

0xbcba,	// (0x000468ad) grid_touch_2_pane

0x97da,	// (0x000443cd) touch_pane_g1_ParamLimits

0x97da,	// (0x000443cd) touch_pane_g1

0xbcd2,	// (0x000468c5) cell_app_pane_cp_wide_ParamLimits

0xbcd2,	// (0x000468c5) cell_app_pane_cp_wide

0xbce3,	// (0x000468d6) grid_popup_fast_wide_pane_ParamLimits

0xbce3,	// (0x000468d6) grid_popup_fast_wide_pane

0xbcf7,	// (0x000468ea) scroll_pane_cp19_ParamLimits

0xbcf7,	// (0x000468ea) scroll_pane_cp19

0x7f3e,	// (0x00042b31) bg_popup_window_pane_cp20

0xbd0b,	// (0x000468fe) listscroll_popup_fast_wide_pane

0x801e,	// (0x00042c11) grid_indicator_nsta_pane

0xbd13,	// (0x00046906) clock_nsta_pane_g1

0xbd1c,	// (0x0004690f) clock_nsta_pane_t1

0xbd38,	// (0x0004692b) cell_indicator_nsta_pane_ParamLimits

0xbd38,	// (0x0004692b) cell_indicator_nsta_pane

0xbd69,	// (0x0004695c) cell_indicator_nsta_pane_g1

0xbd77,	// (0x0004696a) cell_indicator_nsta_pane_g2

0x0001,

0xfaa1,	// (0x0004a694) cell_indicator_nsta_pane_g

0xbd84,	// (0x00046977) clock_nsta_pane_cp

0xbd8c,	// (0x0004697f) indicator_nsta_pane_cp

0xbd94,	// (0x00046987) nsta_clock_indic_pane_g1

0x80e7,	// (0x00042cda) grid_indicator_pane

0x8e1c,	// (0x00043a0f) scroll_pane_cp29

0x608d,	// (0x00040c80) indicator_nsta_pane_cp2_ParamLimits

0x608d,	// (0x00040c80) indicator_nsta_pane_cp2

0x801e,	// (0x00042c11) main_apps_wheel_pane

0xa062,	// (0x00044c55) form_midp_field_text_pane_ParamLimits

0xa1ad,	// (0x00044da0) scroll_bar_cp050_ParamLimits

0xbdf5,	// (0x000469e8) cell_indicator_pane_ParamLimits

0xbdf5,	// (0x000469e8) cell_indicator_pane

0xbe0c,	// (0x000469ff) cell_indicator_pane_g1

0xbe16,	// (0x00046a09) grid_wheel_folder_pane_ParamLimits

0xbe16,	// (0x00046a09) grid_wheel_folder_pane

0xbe2c,	// (0x00046a1f) list_wheel_apps_pane_ParamLimits

0xbe2c,	// (0x00046a1f) list_wheel_apps_pane

0xbe3d,	// (0x00046a30) main_apps_wheel_pane_g1_ParamLimits

0xbe3d,	// (0x00046a30) main_apps_wheel_pane_g1

0xbe51,	// (0x00046a44) main_apps_wheel_pane_g2_ParamLimits

0xbe51,	// (0x00046a44) main_apps_wheel_pane_g2

0x0001,

0xfabd,	// (0x0004a6b0) main_apps_wheel_pane_g_ParamLimits

0xfabd,	// (0x0004a6b0) main_apps_wheel_pane_g

0xbe69,	// (0x00046a5c) main_apps_wheel_pane_t1_ParamLimits

0xbe69,	// (0x00046a5c) main_apps_wheel_pane_t1

0xbe8c,	// (0x00046a7f) list_wheel_apps_pane_g1

0xbe94,	// (0x00046a87) list_wheel_apps_pane_g2

0xbe9c,	// (0x00046a8f) list_wheel_apps_pane_g3

0xbea4,	// (0x00046a97) list_wheel_apps_pane_g4

0xbeae,	// (0x00046aa1) list_wheel_apps_pane_g5

0x0004,

0xfac2,	// (0x0004a6b5) list_wheel_apps_pane_g

0x939f,	// (0x00043f92) navi_icon_text_pane

0x987f,	// (0x00044472) aid_fill_nsta

0xbed1,	// (0x00046ac4) navi_icon_text_pane_g1

0xbedd,	// (0x00046ad0) navi_icon_text_pane_t1

0x9232,	// (0x00043e25) list_set_graphic_pane_t1_ParamLimits

0x9232,	// (0x00043e25) list_set_graphic_pane_t1

0xa8fc,	// (0x000454ef) popup_midp_note_alarm_window_t6_ParamLimits

0xa8fc,	// (0x000454ef) popup_midp_note_alarm_window_t6

0xa90e,	// (0x00045501) popup_midp_note_alarm_window_t7_ParamLimits

0xa90e,	// (0x00045501) popup_midp_note_alarm_window_t7

0xa920,	// (0x00045513) popup_midp_note_alarm_window_t8_ParamLimits

0xa920,	// (0x00045513) popup_midp_note_alarm_window_t8

0xa932,	// (0x00045525) popup_midp_note_alarm_window_t9_ParamLimits

0xa932,	// (0x00045525) popup_midp_note_alarm_window_t9

0xa944,	// (0x00045537) popup_midp_note_alarm_window_t10_ParamLimits

0xa944,	// (0x00045537) popup_midp_note_alarm_window_t10

0xa956,	// (0x00045549) popup_midp_note_alarm_window_t11_ParamLimits

0xa956,	// (0x00045549) popup_midp_note_alarm_window_t11

0xa968,	// (0x0004555b) scroll_pane_cp17_ParamLimits

0xa968,	// (0x0004555b) scroll_pane_cp17

0x6ac4,	// (0x000416b7) volume_small_pane_cp_g1

0x6e84,	// (0x00041a77) volume_small_pane_cp_g2

0x6e8d,	// (0x00041a80) volume_small_pane_cp_g3

0x6e96,	// (0x00041a89) volume_small_pane_cp_g4

0x6e9f,	// (0x00041a92) volume_small_pane_cp_g5

0x6ea8,	// (0x00041a9b) volume_small_pane_cp_g6

0x6eb1,	// (0x00041aa4) volume_small_pane_cp_g7

0x6eba,	// (0x00041aad) volume_small_pane_cp_g8

0x6ec3,	// (0x00041ab6) volume_small_pane_cp_g9

0x6ecc,	// (0x00041abf) volume_small_pane_cp_g10

0x95f0,	// (0x000441e3) midp_ticker_pane_g1_ParamLimits

0x95fc,	// (0x000441ef) midp_ticker_pane_g2_ParamLimits

0xf75d,	// (0x0004a350) midp_ticker_pane_g_ParamLimits

0x9608,	// (0x000441fb) midp_ticker_pane_t1_ParamLimits

0x9895,	// (0x00044488) aid_fill_nsta_2

0xa199,	// (0x00044d8c) list_form2_midp_pane

0xb2ce,	// (0x00045ec1) midp_editing_number_pane_ParamLimits

0xb2dd,	// (0x00045ed0) midp_ticker_pane_ParamLimits

0xbeef,	// (0x00046ae2) form2_midp_field_pane

0xbf13,	// (0x00046b06) scroll_pane_cp51

0xbf33,	// (0x00046b26) form2_midp_button_pane_ParamLimits

0xbf33,	// (0x00046b26) form2_midp_button_pane

0xbf45,	// (0x00046b38) form2_midp_content_pane_ParamLimits

0xbf45,	// (0x00046b38) form2_midp_content_pane

0xbf5f,	// (0x00046b52) form2_midp_field_choice_group_pane

0xbf67,	// (0x00046b5a) form2_midp_field_pane_g1

0xbf6f,	// (0x00046b62) form2_midp_field_pane_g2

0xbf77,	// (0x00046b6a) form2_midp_field_pane_g3

0xbf7f,	// (0x00046b72) form2_midp_field_pane_g4

0x0003,

0xfae7,	// (0x0004a6da) form2_midp_field_pane_g

0xbf87,	// (0x00046b7a) form2_midp_gauge_slider_pane

0xbf8f,	// (0x00046b82) form2_midp_gauge_wait_pane

0xbf97,	// (0x00046b8a) form2_midp_image_pane_ParamLimits

0xbf97,	// (0x00046b8a) form2_midp_image_pane

0xbfbe,	// (0x00046bb1) form2_midp_label_pane_ParamLimits

0xbfbe,	// (0x00046bb1) form2_midp_label_pane

0xbfd7,	// (0x00046bca) form2_midp_label_pane_cp_ParamLimits

0xbfd7,	// (0x00046bca) form2_midp_label_pane_cp

0xbff8,	// (0x00046beb) form2_midp_string_pane_ParamLimits

0xbff8,	// (0x00046beb) form2_midp_string_pane

0x55b2,	// (0x000401a5) form2_midp_text_pane_ParamLimits

0x55b2,	// (0x000401a5) form2_midp_text_pane

0xc00a,	// (0x00046bfd) form2_midp_time_pane

0xc01a,	// (0x00046c0d) input_focus_pane_cp51_ParamLimits

0xc01a,	// (0x00046c0d) input_focus_pane_cp51

0xc032,	// (0x00046c25) form2_midp_label_pane_t1_ParamLimits

0xc032,	// (0x00046c25) form2_midp_label_pane_t1

0x55d1,	// (0x000401c4) form2_mdip_text_pane_t1_ParamLimits

0x55d1,	// (0x000401c4) form2_mdip_text_pane_t1

0x55ef,	// (0x000401e2) form2_midp_time_pane_t1

0xc07b,	// (0x00046c6e) form2_midp_gauge_slider_pane_t1

0xc08d,	// (0x00046c80) form2_midp_gauge_slider_pane_t2

0xc09f,	// (0x00046c92) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf0,	// (0x0004a6e3) form2_midp_gauge_slider_pane_t

0xc0b1,	// (0x00046ca4) form2_midp_slider_pane

0xc0bd,	// (0x00046cb0) form2_midp_gauge_wait_pane_t1

0xc0cb,	// (0x00046cbe) form2_midp_wait_pane_ParamLimits

0xc0cb,	// (0x00046cbe) form2_midp_wait_pane

0x9e94,	// (0x00044a87) list_single_2graphic_pane_cp4_ParamLimits

0x9e94,	// (0x00044a87) list_single_2graphic_pane_cp4

0xc0f6,	// (0x00046ce9) list_single_midp_graphic_pane_cp_ParamLimits

0xc0f6,	// (0x00046ce9) list_single_midp_graphic_pane_cp

0x7f3e,	// (0x00042b31) list_highlight_pane_cp20

0xc125,	// (0x00046d18) list_single_2graphic_pane_g1_cp4

0xc12d,	// (0x00046d20) list_single_2graphic_pane_g2_cp4

0xc135,	// (0x00046d28) list_single_2graphic_pane_t1_cp4

0x801e,	// (0x00042c11) list_highlight_pane_cp21

0xc144,	// (0x00046d37) list_single_midp_graphic_pane_g4_cp

0xc153,	// (0x00046d46) list_single_midp_graphic_pane_t1_cp

0xc168,	// (0x00046d5b) form2_mdip_string_pane_t1_ParamLimits

0xc168,	// (0x00046d5b) form2_mdip_string_pane_t1

0x7f3e,	// (0x00042b31) bg_wml_button_pane_cp2

0x7f34,	// (0x00042b27) form2_midp_image_pane_g1

0x5d7f,	// (0x00040972) list_double_large_graphic_pane_g5_ParamLimits

0x5d7f,	// (0x00040972) list_double_large_graphic_pane_g5

0x8a71,	// (0x00043664) midp_form_pane_ParamLimits

0x801e,	// (0x00042c11) main_apps_wheel_pane_ParamLimits

0x6764,	// (0x00041357) popup_preview_window_ParamLimits

0x6764,	// (0x00041357) popup_preview_window

0x691f,	// (0x00041512) popup_touch_info_window_ParamLimits

0x691f,	// (0x00041512) popup_touch_info_window

0x693d,	// (0x00041530) popup_touch_menu_window_ParamLimits

0x693d,	// (0x00041530) popup_touch_menu_window

0x7f2a,	// (0x00042b1d) bg_popup_sub_pane_cp6

0xc261,	// (0x00046e54) list_touch_menu_pane

0xc269,	// (0x00046e5c) list_single_touch_menu_pane_ParamLimits

0xc269,	// (0x00046e5c) list_single_touch_menu_pane

0xc27f,	// (0x00046e72) list_single_touch_menu_pane_t1

0x801e,	// (0x00042c11) bg_popup_sub_pane_cp7_ParamLimits

0x801e,	// (0x00042c11) bg_popup_sub_pane_cp7

0xc28d,	// (0x00046e80) heading_sub_pane

0xc295,	// (0x00046e88) list_touch_info_pane_ParamLimits

0xc295,	// (0x00046e88) list_touch_info_pane

0xc2a4,	// (0x00046e97) list_single_touch_info_pane_ParamLimits

0xc2a4,	// (0x00046e97) list_single_touch_info_pane

0xc2b6,	// (0x00046ea9) list_single_touch_info_pane_t1

0xc2c4,	// (0x00046eb7) list_single_touch_info_pane_t2

0x0001,

0xfafe,	// (0x0004a6f1) list_single_touch_info_pane_t

0x951f,	// (0x00044112) bg_popup_heading_pane_cp

0xc2d2,	// (0x00046ec5) heading_sub_pane_t1

0x9ddb,	// (0x000449ce) bg_popup_preview_window_pane_cp_ParamLimits

0x9ddb,	// (0x000449ce) bg_popup_preview_window_pane_cp

0xc28d,	// (0x00046e80) heading_preview_pane

0xc295,	// (0x00046e88) list_preview_pane_ParamLimits

0xc295,	// (0x00046e88) list_preview_pane

0xc2e0,	// (0x00046ed3) popup_preview_window_g1

0xc2a4,	// (0x00046e97) list_single_preview_pane_ParamLimits

0xc2a4,	// (0x00046e97) list_single_preview_pane

0xc2e8,	// (0x00046edb) list_single_preview_pane_g1

0xc2f0,	// (0x00046ee3) list_single_preview_pane_t1

0xc2b6,	// (0x00046ea9) list_single_preview_pane_t2

0x0001,

0xfb03,	// (0x0004a6f6) list_single_preview_pane_t

0xc2fe,	// (0x00046ef1) bg_popup_heading_pane_cp2_ParamLimits

0xc2fe,	// (0x00046ef1) bg_popup_heading_pane_cp2

0xc314,	// (0x00046f07) heading_preview_pane_g1

0xc31c,	// (0x00046f0f) heading_preview_pane_t1_ParamLimits

0xc31c,	// (0x00046f0f) heading_preview_pane_t1

0x810a,	// (0x00042cfd) soft_indicator_pane_t1_ParamLimits

0x8800,	// (0x000433f3) scroll_pane_ParamLimits

0x8d15,	// (0x00043908) scroll_sc2_left_pane

0x8d1e,	// (0x00043911) scroll_sc2_right_pane

0x8d3d,	// (0x00043930) scroll_bg_pane_g1_ParamLimits

0x8d52,	// (0x00043945) scroll_bg_pane_g2_ParamLimits

0x8d6a,	// (0x0004395d) scroll_bg_pane_g3_ParamLimits

0xf6e8,	// (0x0004a2db) scroll_bg_pane_g_ParamLimits

0x8d3d,	// (0x00043930) scroll_handle_pane_g1_ParamLimits

0x8d8c,	// (0x0004397f) scroll_handle_pane_g2_ParamLimits

0x8d6a,	// (0x0004395d) scroll_handle_pane_g3_ParamLimits

0xf6ef,	// (0x0004a2e2) scroll_handle_pane_g_ParamLimits

0x63e5,	// (0x00040fd8) popup_choice_list_window_ParamLimits

0x63e5,	// (0x00040fd8) popup_choice_list_window

0x9cb1,	// (0x000448a4) choice_list_pane

0x9d33,	// (0x00044926) cell_toolbar_pane_t1

0x9d5b,	// (0x0004494e) toolbar_button_pane_ParamLimits

0xae2e,	// (0x00045a21) ai_gene_pane_1_t2_ParamLimits

0xae2e,	// (0x00045a21) ai_gene_pane_1_t2

0x0001,

0xf917,	// (0x0004a50a) ai_gene_pane_1_t_ParamLimits

0xf917,	// (0x0004a50a) ai_gene_pane_1_t

0xc339,	// (0x00046f2c) scroll_sc2_left_pane_g1

0xc339,	// (0x00046f2c) scroll_sc2_right_pane_g1

0x985d,	// (0x00044450) bg_popup_sub_pane_cp10

0xc343,	// (0x00046f36) list_choice_list_pane

0xc35c,	// (0x00046f4f) list_single_choice_list_pane_ParamLimits

0xc35c,	// (0x00046f4f) list_single_choice_list_pane

0xc36f,	// (0x00046f62) list_single_choice_list_pane_g1

0x8a21,	// (0x00043614) list_single_choice_list_pane_t1_ParamLimits

0x8a21,	// (0x00043614) list_single_choice_list_pane_t1

0xc377,	// (0x00046f6a) choice_list_pane_g1

0xc37f,	// (0x00046f72) choice_list_pane_t1

0x7f2a,	// (0x00042b1d) input_focus_pane_cp11

0x8bf8,	// (0x000437eb) title_pane_stacon_g2_ParamLimits

0x8bf8,	// (0x000437eb) title_pane_stacon_g2

0x0002,

0xf6ce,	// (0x0004a2c1) title_pane_stacon_g_ParamLimits

0xf6ce,	// (0x0004a2c1) title_pane_stacon_g

0x951f,	// (0x00044112) cursor_press_pane

0x6491,	// (0x00041084) popup_fep_hwr_window_ParamLimits

0x6491,	// (0x00041084) popup_fep_hwr_window

0x650b,	// (0x000410fe) popup_fep_vkb_window_ParamLimits

0x650b,	// (0x000410fe) popup_fep_vkb_window

0xc38d,	// (0x00046f80) cursor_press_pane_g1

0x0002,

0xfb2c,	// (0x0004a71f) fep_vkb_side_pane_g_ParamLimits

0x6f0e,	// (0x00041b01) fep_hwr_candidate_pane_ParamLimits

0x6f0e,	// (0x00041b01) fep_hwr_candidate_pane

0x6f38,	// (0x00041b2b) fep_hwr_side_pane_ParamLimits

0x6f38,	// (0x00041b2b) fep_hwr_side_pane

0x6f58,	// (0x00041b4b) fep_hwr_top_pane_ParamLimits

0x6f58,	// (0x00041b4b) fep_hwr_top_pane

0x6f70,	// (0x00041b63) fep_hwr_write_pane_ParamLimits

0x6f70,	// (0x00041b63) fep_hwr_write_pane

0xfb2c,	// (0x0004a71f) fep_vkb_side_pane_g

0xc395,	// (0x00046f88) fep_hwr_top_pane_g1

0xc3a7,	// (0x00046f9a) fep_hwr_top_pane_g2

0x6f9c,	// (0x00041b8f) fep_hwr_top_pane_g3

0x0002,

0xfb08,	// (0x0004a6fb) fep_hwr_top_pane_g

0x6fb1,	// (0x00041ba4) fep_hwr_top_text_pane

0x8f0c,	// (0x00043aff) fep_hwr_top_text_pane_g1

0xc3dd,	// (0x00046fd0) fep_hwr_top_text_pane_t1

0x70a7,	// (0x00041c9a) fep_hwr_candidate_pane_g1

0xc630,	// (0x00047223) fep_vkb_keypad_pane_g3_ParamLimits

0xc630,	// (0x00047223) fep_vkb_keypad_pane_g3

0xc658,	// (0x0004724b) fep_vkb_keypad_pane_g4_ParamLimits

0xc658,	// (0x0004724b) fep_vkb_keypad_pane_g4

0xc6c7,	// (0x000472ba) fep_vkb_bottom_pane_g2_ParamLimits

0xc6c7,	// (0x000472ba) fep_vkb_bottom_pane_g2

0x0001,

0xfb33,	// (0x0004a726) fep_vkb_bottom_pane_g_ParamLimits

0xfb33,	// (0x0004a726) fep_vkb_bottom_pane_g

0xc339,	// (0x00046f2c) cell_vkb_side_pane_g2

0x0001,

0xfb3d,	// (0x0004a730) cell_vkb_side_pane_g

0xc752,	// (0x00047345) cell_vkb_side_pane_t1

0xc760,	// (0x00047353) cell_vkb_side_pane_t1_copy1

0xc339,	// (0x00046f2c) bg_fep_vkb_candidate_pane_g2

0xc88c,	// (0x0004747f) cell_vkb_candidate_pane_ParamLimits

0xc3eb,	// (0x00046fde) aid_size_cell_vkb_ParamLimits

0xc3eb,	// (0x00046fde) aid_size_cell_vkb

0xc88c,	// (0x0004747f) cell_vkb_candidate_pane

0x70c1,	// (0x00041cb4) bg_popup_fep_shadow_pane_g1

0xc479,	// (0x0004706c) fep_vkb_bottom_pane_ParamLimits

0xc479,	// (0x0004706c) fep_vkb_bottom_pane

0xc4af,	// (0x000470a2) fep_vkb_candidate_pane_ParamLimits

0xc4af,	// (0x000470a2) fep_vkb_candidate_pane

0xc4cb,	// (0x000470be) fep_vkb_keypad_pane_ParamLimits

0xc4cb,	// (0x000470be) fep_vkb_keypad_pane

0xc511,	// (0x00047104) fep_vkb_side_pane_ParamLimits

0xc511,	// (0x00047104) fep_vkb_side_pane

0xc54d,	// (0x00047140) fep_vkb_top_pane_ParamLimits

0xc54d,	// (0x00047140) fep_vkb_top_pane

0xc589,	// (0x0004717c) fep_vkb_top_pane_g1_ParamLimits

0xc589,	// (0x0004717c) fep_vkb_top_pane_g1

0xc598,	// (0x0004718b) fep_vkb_top_pane_g2_ParamLimits

0xc598,	// (0x0004718b) fep_vkb_top_pane_g2

0xc5a7,	// (0x0004719a) fep_vkb_top_pane_g3_ParamLimits

0xc5a7,	// (0x0004719a) fep_vkb_top_pane_g3

0x0003,

0xfb23,	// (0x0004a716) fep_vkb_top_pane_g_ParamLimits

0xfb23,	// (0x0004a716) fep_vkb_top_pane_g

0xc5c5,	// (0x000471b8) fep_vkb_top_text_pane_ParamLimits

0xc5c5,	// (0x000471b8) fep_vkb_top_text_pane

0xc5d6,	// (0x000471c9) fep_vkb_side_pane_g1_ParamLimits

0xc5d6,	// (0x000471c9) fep_vkb_side_pane_g1

0xc61f,	// (0x00047212) grid_vkb_side_pane_ParamLimits

0xc61f,	// (0x00047212) grid_vkb_side_pane

0x70c9,	// (0x00041cbc) bg_popup_fep_shadow_pane_g2

0x70d2,	// (0x00041cc5) bg_popup_fep_shadow_pane_g3

0x70da,	// (0x00041ccd) bg_popup_fep_shadow_pane_g4

0x70e3,	// (0x00041cd6) bg_popup_fep_shadow_pane_g5

0x70ed,	// (0x00041ce0) bg_popup_fep_shadow_pane_g6

0x70f5,	// (0x00041ce8) bg_popup_fep_shadow_pane_g7

0x8908,	// (0x000434fb) bg_popup_fep_shadow_pane_g8

0xc676,	// (0x00047269) grid_vkb_keypad_number_pane_ParamLimits

0xc676,	// (0x00047269) grid_vkb_keypad_number_pane

0xc686,	// (0x00047279) grid_vkb_keypad_pane_ParamLimits

0xc686,	// (0x00047279) grid_vkb_keypad_pane

0xc6ac,	// (0x0004729f) fep_vkb_bottom_pane_g1_ParamLimits

0xc6ac,	// (0x0004729f) fep_vkb_bottom_pane_g1

0xc6d5,	// (0x000472c8) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc6d5,	// (0x000472c8) grid_vkb_keypad_bottom_left_pane

0xc6ea,	// (0x000472dd) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc6ea,	// (0x000472dd) grid_vkb_keypad_bottom_right_pane

0xc6ff,	// (0x000472f2) fep_vkb_top_text_pane_g1

0xc71a,	// (0x0004730d) fep_vkb_top_text_pane_t1

0xc72f,	// (0x00047322) cell_vkb_side_pane_ParamLimits

0xc72f,	// (0x00047322) cell_vkb_side_pane

0xc339,	// (0x00046f2c) cell_vkb_side_pane_g1

0xc76e,	// (0x00047361) cell_vkb_keypad_pane_ParamLimits

0xc76e,	// (0x00047361) cell_vkb_keypad_pane

0xc7e3,	// (0x000473d6) cell_vkb_keypad_pane_g1

0x0008,

0xfb50,	// (0x0004a743) bg_popup_fep_shadow_pane_g

0xc339,	// (0x00046f2c) cell_hwr_side_pane_g1

0xc339,	// (0x00046f2c) cell_hwr_side_pane_g2

0xc7ed,	// (0x000473e0) cell_vkb_keypad_pane_t1

0xc7fb,	// (0x000473ee) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc7fb,	// (0x000473ee) cell_vkb_keypad_bottom_left_pane

0xc818,	// (0x0004740b) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc818,	// (0x0004740b) cell_vkb_keypad_bottom_right_pane

0xc339,	// (0x00046f2c) cell_vkb_keypad_bottom_left_pane_g1

0xc339,	// (0x00046f2c) cell_vkb_keypad_bottom_right_pane_g1

0xc851,	// (0x00047444) cell_vkb_keypad_number_pane_ParamLimits

0xc851,	// (0x00047444) cell_vkb_keypad_number_pane

0xc870,	// (0x00047463) cell_vkb_keypad_number_pane_g1

0xc87a,	// (0x0004746d) cell_vkb_keypad_number_pane_g2

0xc883,	// (0x00047476) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb42,	// (0x0004a735) cell_vkb_keypad_number_pane_g

0xc7ed,	// (0x000473e0) cell_vkb_keypad_number_pane_t1

0xc8a7,	// (0x0004749a) fep_vkb_candidate_pane_g1

0x0001,

0xfb3d,	// (0x0004a730) cell_hwr_side_pane_g

0xc8c0,	// (0x000474b3) cell_hwr_side_pane_t1

0x7107,	// (0x00041cfa) cell_hwr_side_pane_t1_copy1

0xc5b7,	// (0x000471aa) cell_hwr_candidate_pane_g1

0x7115,	// (0x00041d08) cell_hwr_candidate_pane_t1

0xc339,	// (0x00046f2c) cell_vkb_candidate_pane_g2

0xc904,	// (0x000474f7) cell_vkb_candidate_pane_t1

0x6ed5,	// (0x00041ac8) bg_popup_fep_shadow_pane_ParamLimits

0x6ed5,	// (0x00041ac8) bg_popup_fep_shadow_pane

0x2df4,	// (0x0003d9e7) bg_fep_hwr_top_pane_g4

0xc3b9,	// (0x00046fac) bg_hwr_side_pane_g1_ParamLimits

0xc3b9,	// (0x00046fac) bg_hwr_side_pane_g1

0x6fed,	// (0x00041be0) cell_hwr_side_pane_ParamLimits

0x6fed,	// (0x00041be0) cell_hwr_side_pane

0x7028,	// (0x00041c1b) fep_hwr_write_pane_g1_ParamLimits

0x7028,	// (0x00041c1b) fep_hwr_write_pane_g1

0x7035,	// (0x00041c28) fep_hwr_write_pane_g2_ParamLimits

0x7035,	// (0x00041c28) fep_hwr_write_pane_g2

0x7042,	// (0x00041c35) fep_hwr_write_pane_g3_ParamLimits

0x7042,	// (0x00041c35) fep_hwr_write_pane_g3

0x7050,	// (0x00041c43) fep_hwr_write_pane_g4_ParamLimits

0x7050,	// (0x00041c43) fep_hwr_write_pane_g4

0x0005,

0xfb0f,	// (0x0004a702) fep_hwr_write_pane_g_ParamLimits

0xfb0f,	// (0x0004a702) fep_hwr_write_pane_g

0x2df4,	// (0x0003d9e7) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x2df4,	// (0x0003d9e7) bg_fep_hwr_candidate_pane_g2

0x7065,	// (0x00041c58) cell_hwr_candidate_pane_ParamLimits

0x7065,	// (0x00041c58) cell_hwr_candidate_pane

0x70a7,	// (0x00041c9a) fep_hwr_candidate_pane_g1_ParamLimits

0xc419,	// (0x0004700c) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc419,	// (0x0004700c) bg_popup_fep_shadow_pane_cp2

0xc5b7,	// (0x000471aa) fep_vkb_top_pane_g4_ParamLimits

0xc5b7,	// (0x000471aa) fep_vkb_top_pane_g4

0xc5fd,	// (0x000471f0) fep_vkb_side_pane_g2_ParamLimits

0xc5fd,	// (0x000471f0) fep_vkb_side_pane_g2

0x4cbe,	// (0x0003f8b1) list_setting_pane_t4_ParamLimits

0x4cbe,	// (0x0003f8b1) list_setting_pane_t4

0x4d58,	// (0x0003f94b) list_setting_number_pane_t5_ParamLimits

0x4d58,	// (0x0003f94b) list_setting_number_pane_t5

0x8f53,	// (0x00043b46) list_double_heading_pane_cp2_ParamLimits

0x8f53,	// (0x00043b46) list_double_heading_pane_cp2

0x8834,	// (0x00043427) list_double_heading_pane_g1_cp2_ParamLimits

0x8834,	// (0x00043427) list_double_heading_pane_g1_cp2

0x88a7,	// (0x0004349a) list_double_heading_pane_g2_cp2_ParamLimits

0x88a7,	// (0x0004349a) list_double_heading_pane_g2_cp2

0xc912,	// (0x00047505) list_double_heading_pane_t1_cp2_ParamLimits

0xc912,	// (0x00047505) list_double_heading_pane_t1_cp2

0xc928,	// (0x0004751b) list_double_heading_pane_t2_cp2_ParamLimits

0xc928,	// (0x0004751b) list_double_heading_pane_t2_cp2

0x7f12,	// (0x00042b05) aid_value_unit2

0x5b55,	// (0x00040748) popup_preview_fixed_window

0x82a7,	// (0x00042e9a) bg_popup_preview_window_pane_cp02

0xc93a,	// (0x0004752d) list_preview_fixed_pane

0xc980,	// (0x00047573) list_empty_pane_fp_ParamLimits

0xc980,	// (0x00047573) list_empty_pane_fp

0xc980,	// (0x00047573) list_single_cale_day_pane_fp_ParamLimits

0xc980,	// (0x00047573) list_single_cale_day_pane_fp

0xc980,	// (0x00047573) list_single_graphic_heading_pane_fp_ParamLimits

0xc980,	// (0x00047573) list_single_graphic_heading_pane_fp

0xc980,	// (0x00047573) list_single_graphic_pane_fp_ParamLimits

0xc980,	// (0x00047573) list_single_graphic_pane_fp

0xc980,	// (0x00047573) list_single_heading_pane_fp_ParamLimits

0xc980,	// (0x00047573) list_single_heading_pane_fp

0xc980,	// (0x00047573) list_single_pane_fp_ParamLimits

0xc980,	// (0x00047573) list_single_pane_fp

0xc995,	// (0x00047588) list_single_pane_fp_g1_ParamLimits

0xc995,	// (0x00047588) list_single_pane_fp_g1

0x8834,	// (0x00043427) list_single_pane_fp_g2_ParamLimits

0x8834,	// (0x00043427) list_single_pane_fp_g2

0x88a7,	// (0x0004349a) list_single_pane_fp_g3_ParamLimits

0x88a7,	// (0x0004349a) list_single_pane_fp_g3

0xc9a1,	// (0x00047594) list_single_pane_fp_g4_ParamLimits

0xc9a1,	// (0x00047594) list_single_pane_fp_g4

0x0003,

0xfb71,	// (0x0004a764) list_single_pane_fp_g_ParamLimits

0xfb71,	// (0x0004a764) list_single_pane_fp_g

0x5602,	// (0x000401f5) list_single_pane_fp_t1_ParamLimits

0x5602,	// (0x000401f5) list_single_pane_fp_t1

0x5619,	// (0x0004020c) list_single_graphic_pane_fp_g1_ParamLimits

0x5619,	// (0x0004020c) list_single_graphic_pane_fp_g1

0xc995,	// (0x00047588) list_single_graphic_pane_fp_g2_ParamLimits

0xc995,	// (0x00047588) list_single_graphic_pane_fp_g2

0x8834,	// (0x00043427) list_single_graphic_pane_fp_g3_ParamLimits

0x8834,	// (0x00043427) list_single_graphic_pane_fp_g3

0x88a7,	// (0x0004349a) list_single_graphic_pane_fp_g4_ParamLimits

0x88a7,	// (0x0004349a) list_single_graphic_pane_fp_g4

0xc9a1,	// (0x00047594) list_single_graphic_pane_fp_g5_ParamLimits

0xc9a1,	// (0x00047594) list_single_graphic_pane_fp_g5

0x0004,

0xfb7a,	// (0x0004a76d) list_single_graphic_pane_fp_g_ParamLimits

0xfb7a,	// (0x0004a76d) list_single_graphic_pane_fp_g

0x5625,	// (0x00040218) list_single_graphic_pane_fp_t1_ParamLimits

0x5625,	// (0x00040218) list_single_graphic_pane_fp_t1

0x5619,	// (0x0004020c) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x5619,	// (0x0004020c) list_single_graphic_heading_pane_fp_g1

0xc995,	// (0x00047588) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc995,	// (0x00047588) list_single_graphic_heading_pane_fp_g2

0x8834,	// (0x00043427) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x8834,	// (0x00043427) list_single_graphic_heading_pane_fp_g3

0x88a7,	// (0x0004349a) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x88a7,	// (0x0004349a) list_single_graphic_heading_pane_fp_g4

0xc9a1,	// (0x00047594) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc9a1,	// (0x00047594) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb7a,	// (0x0004a76d) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb7a,	// (0x0004a76d) list_single_graphic_heading_pane_fp_g

0x563b,	// (0x0004022e) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x563b,	// (0x0004022e) list_single_graphic_heading_pane_fp_t1

0x5651,	// (0x00040244) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x5651,	// (0x00040244) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb85,	// (0x0004a778) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb85,	// (0x0004a778) list_single_graphic_heading_pane_fp_t

0x5663,	// (0x00040256) list_single_cale_day_pane_fp_g1_ParamLimits

0x5663,	// (0x00040256) list_single_cale_day_pane_fp_g1

0xc9ad,	// (0x000475a0) list_single_cale_day_pane_fp_g2_ParamLimits

0xc9ad,	// (0x000475a0) list_single_cale_day_pane_fp_g2

0x7133,	// (0x00041d26) list_single_cale_day_pane_fp_g3_ParamLimits

0x7133,	// (0x00041d26) list_single_cale_day_pane_fp_g3

0x715b,	// (0x00041d4e) list_single_cale_day_pane_fp_g4_ParamLimits

0x715b,	// (0x00041d4e) list_single_cale_day_pane_fp_g4

0x717f,	// (0x00041d72) list_single_cale_day_pane_fp_g5_ParamLimits

0x717f,	// (0x00041d72) list_single_cale_day_pane_fp_g5

0x0004,

0xfb8a,	// (0x0004a77d) list_single_cale_day_pane_fp_g_ParamLimits

0xfb8a,	// (0x0004a77d) list_single_cale_day_pane_fp_g

0x569b,	// (0x0004028e) list_single_cale_day_pane_fp_t1_ParamLimits

0x569b,	// (0x0004028e) list_single_cale_day_pane_fp_t1

0x56c1,	// (0x000402b4) list_single_cale_day_pane_fp_t2_ParamLimits

0x56c1,	// (0x000402b4) list_single_cale_day_pane_fp_t2

0x56da,	// (0x000402cd) list_single_cale_day_pane_fp_t3_ParamLimits

0x56da,	// (0x000402cd) list_single_cale_day_pane_fp_t3

0x0002,

0xfb95,	// (0x0004a788) list_single_cale_day_pane_fp_t_ParamLimits

0xfb95,	// (0x0004a788) list_single_cale_day_pane_fp_t

0xc995,	// (0x00047588) list_empty_pane_fp_g1_ParamLimits

0xc995,	// (0x00047588) list_empty_pane_fp_g1

0x56f3,	// (0x000402e6) list_empty_pane_fp_t1

0x5701,	// (0x000402f4) list_empty_pane_fp_t2

0x0001,

0xfb9c,	// (0x0004a78f) list_empty_pane_fp_t

0xc995,	// (0x00047588) list_single_heading_pane_fp_g1_ParamLimits

0xc995,	// (0x00047588) list_single_heading_pane_fp_g1

0x8834,	// (0x00043427) list_single_heading_pane_fp_g2_ParamLimits

0x8834,	// (0x00043427) list_single_heading_pane_fp_g2

0x88a7,	// (0x0004349a) list_single_heading_pane_fp_g3_ParamLimits

0x88a7,	// (0x0004349a) list_single_heading_pane_fp_g3

0x0002,

0xfba1,	// (0x0004a794) list_single_heading_pane_fp_g_ParamLimits

0xfba1,	// (0x0004a794) list_single_heading_pane_fp_g

0x570f,	// (0x00040302) list_single_heading_pane_fp_t1_ParamLimits

0x570f,	// (0x00040302) list_single_heading_pane_fp_t1

0x5721,	// (0x00040314) list_single_heading_pane_fp_t2_ParamLimits

0x5721,	// (0x00040314) list_single_heading_pane_fp_t2

0x0001,

0xfba8,	// (0x0004a79b) list_single_heading_pane_fp_t_ParamLimits

0xfba8,	// (0x0004a79b) list_single_heading_pane_fp_t

0x8a8f,	// (0x00043682) aid_size_cell_fast

0x8217,	// (0x00042e0a) soft_indicator_pane_cp1_t1

0x8acc,	// (0x000436bf) cell_app_pane_cp2_ParamLimits

0x8acc,	// (0x000436bf) cell_app_pane_cp2

0x6ef7,	// (0x00041aea) fep_hwr_candidate_drop_down_list_pane

0x2e02,	// (0x0003d9f5) fep_hwr_candidate_pane_g3_ParamLimits

0x2e02,	// (0x0003d9f5) fep_hwr_candidate_pane_g3

0x2e0f,	// (0x0003da02) fep_hwr_candidate_pane_g4_ParamLimits

0x2e0f,	// (0x0003da02) fep_hwr_candidate_pane_g4

0x0002,

0xfb1c,	// (0x0004a70f) fep_hwr_candidate_pane_g_ParamLimits

0xfb1c,	// (0x0004a70f) fep_hwr_candidate_pane_g

0xc49e,	// (0x00047091) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc49e,	// (0x00047091) fep_vkb_candidate_drop_down_list_pane

0xc8af,	// (0x000474a2) fep_vkb_candidate_pane_g3

0xc8b7,	// (0x000474aa) fep_vkb_candidate_pane_g4

0x0002,

0xfb49,	// (0x0004a73c) fep_vkb_candidate_pane_g

0xc5b7,	// (0x000471aa) cell_hwr_candidate_pane_g1_ParamLimits

0xca49,	// (0x0004763c) cell_hwr_candidate_pane_g3_ParamLimits

0xca49,	// (0x0004763c) cell_hwr_candidate_pane_g3

0xca6a,	// (0x0004765d) cell_hwr_candidate_pane_g4_ParamLimits

0xca6a,	// (0x0004765d) cell_hwr_candidate_pane_g4

0x0002,

0xfb63,	// (0x0004a756) cell_hwr_candidate_pane_g_ParamLimits

0xfb63,	// (0x0004a756) cell_hwr_candidate_pane_g

0xc8ce,	// (0x000474c1) cell_vkb_candidate_pane_g3_ParamLimits

0xc8ce,	// (0x000474c1) cell_vkb_candidate_pane_g3

0xc8e9,	// (0x000474dc) cell_vkb_candidate_pane_g4_ParamLimits

0xc8e9,	// (0x000474dc) cell_vkb_candidate_pane_g4

0xc9b9,	// (0x000475ac) cell_app_pane_cp2_g1_ParamLimits

0xc9b9,	// (0x000475ac) cell_app_pane_cp2_g1

0xc9d7,	// (0x000475ca) cell_app_pane_cp2_g2_ParamLimits

0xc9d7,	// (0x000475ca) cell_app_pane_cp2_g2

0x0001,

0xfbad,	// (0x0004a7a0) cell_app_pane_cp2_g_ParamLimits

0xfbad,	// (0x0004a7a0) cell_app_pane_cp2_g

0xc9e3,	// (0x000475d6) cell_app_pane_cp2_t1_ParamLimits

0xc9e3,	// (0x000475d6) cell_app_pane_cp2_t1

0x8899,	// (0x0004348c) grid_highlight_pane_cp1_ParamLimits

0x8899,	// (0x0004348c) grid_highlight_pane_cp1

0x71a3,	// (0x00041d96) cell_hwr_candidate_pane_cp1_ParamLimits

0x71a3,	// (0x00041d96) cell_hwr_candidate_pane_cp1

0xc5b7,	// (0x000471aa) fep_hwr_candidate_drop_down_list_pane_g1

0xc9f5,	// (0x000475e8) fep_hwr_candidate_drop_down_list_pane_g2

0xca02,	// (0x000475f5) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbb2,	// (0x0004a7a5) fep_hwr_candidate_drop_down_list_pane_g

0x71c2,	// (0x00041db5) fep_hwr_candidate_drop_down_list_scroll_pane

0x71cb,	// (0x00041dbe) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x71cb,	// (0x00041dbe) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x71d8,	// (0x00041dcb) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x71d8,	// (0x00041dcb) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x71e5,	// (0x00041dd8) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x71e5,	// (0x00041dd8) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xc8ce,	// (0x000474c1) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc8ce,	// (0x000474c1) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xc8e9,	// (0x000474dc) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc8e9,	// (0x000474dc) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x71f2,	// (0x00041de5) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x71f2,	// (0x00041de5) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x720d,	// (0x00041e00) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x720d,	// (0x00041e00) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x7228,	// (0x00041e1b) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7228,	// (0x00041e1b) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbb9,	// (0x0004a7ac) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbb9,	// (0x0004a7ac) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xca0f,	// (0x00047602) cell_vkb_candidate_pane_cp1_ParamLimits

0xca0f,	// (0x00047602) cell_vkb_candidate_pane_cp1

0xc5b7,	// (0x000471aa) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc5b7,	// (0x000471aa) fep_vkb_candidate_drop_down_list_pane_g1

0xc9f5,	// (0x000475e8) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc9f5,	// (0x000475e8) fep_vkb_candidate_drop_down_list_pane_g2

0xca02,	// (0x000475f5) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xca02,	// (0x000475f5) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbb2,	// (0x0004a7a5) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbb2,	// (0x0004a7a5) fep_vkb_candidate_drop_down_list_pane_g

0xca2f,	// (0x00047622) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xca2f,	// (0x00047622) fep_vkb_candidate_drop_down_list_scroll_pane

0xca3c,	// (0x0004762f) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xca3c,	// (0x0004762f) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xca8b,	// (0x0004767e) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xca8b,	// (0x0004767e) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xca97,	// (0x0004768a) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xca97,	// (0x0004768a) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xca49,	// (0x0004763c) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xca49,	// (0x0004763c) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xca6a,	// (0x0004765d) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xca6a,	// (0x0004765d) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xcaa3,	// (0x00047696) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xcaa3,	// (0x00047696) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xcac4,	// (0x000476b7) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xcac4,	// (0x000476b7) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xcae5,	// (0x000476d8) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xcae5,	// (0x000476d8) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbca,	// (0x0004a7bd) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbca,	// (0x0004a7bd) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x7f48,	// (0x00042b3b) title_pane_g1_ParamLimits

0x7f55,	// (0x00042b48) title_pane_g2_ParamLimits

0xf54e,	// (0x0004a141) title_pane_g_ParamLimits

0x8efc,	// (0x00043aef) aid_call2_pane

0x8f04,	// (0x00043af7) aid_call_pane

0x8f0c,	// (0x00043aff) popup_clock_analogue_window_g1

0x8f0c,	// (0x00043aff) popup_clock_analogue_window_g2

0x5f72,	// (0x00040b65) popup_clock_analogue_window_g3

0x5f7b,	// (0x00040b6e) popup_clock_analogue_window_g4

0x7f34,	// (0x00042b27) popup_clock_analogue_window_g5

0x0004,

0xf6fd,	// (0x0004a2f0) popup_clock_analogue_window_g

0x5f83,	// (0x00040b76) popup_clock_analogue_window_t1

0x5f91,	// (0x00040b84) clock_digital_number_pane_ParamLimits

0x5f91,	// (0x00040b84) clock_digital_number_pane

0x5f9d,	// (0x00040b90) clock_digital_number_pane_cp02_ParamLimits

0x5f9d,	// (0x00040b90) clock_digital_number_pane_cp02

0x5fa9,	// (0x00040b9c) clock_digital_number_pane_cp03_ParamLimits

0x5fa9,	// (0x00040b9c) clock_digital_number_pane_cp03

0x5fb5,	// (0x00040ba8) clock_digital_number_pane_cp04_ParamLimits

0x5fb5,	// (0x00040ba8) clock_digital_number_pane_cp04

0x5fc1,	// (0x00040bb4) clock_digital_separator_pane_ParamLimits

0x5fc1,	// (0x00040bb4) clock_digital_separator_pane

0x5fcd,	// (0x00040bc0) popup_clock_digital_window_t1_ParamLimits

0x5fcd,	// (0x00040bc0) popup_clock_digital_window_t1

0x7f34,	// (0x00042b27) clock_digital_number_pane_g1

0x7f34,	// (0x00042b27) clock_digital_number_pane_g2

0x0001,

0xf708,	// (0x0004a2fb) clock_digital_number_pane_g

0x7f34,	// (0x00042b27) clock_digital_separator_pane_g1

0x7f34,	// (0x00042b27) clock_digital_separator_pane_g2

0x0001,

0xf708,	// (0x0004a2fb) clock_digital_separator_pane_g

0x987f,	// (0x00044472) aid_fill_nsta_ParamLimits

0x99c5,	// (0x000445b8) indicator_nsta_pane_ParamLimits

0x9b3e,	// (0x00044731) popup_clock_analogue_window

0x9b3e,	// (0x00044731) popup_clock_digital_window

0x801e,	// (0x00042c11) grid_indicator_nsta_pane_ParamLimits

0xbd2a,	// (0x0004691d) clock_nsta_pane_t2

0x0001,

0xfa9c,	// (0x0004a68f) clock_nsta_pane_t

0x5f36,	// (0x00040b29) aid_size_max_handle

0x5f40,	// (0x00040b33) aid_size_min_handle

0x951f,	// (0x00044112) editor_scroll_pane

0xcb00,	// (0x000476f3) ex_editor_pane

0x89fd,	// (0x000435f0) scroll_pane_cp13

0x882c,	// (0x0004341f) scroll_pane_cp14

0x8f3b,	// (0x00043b2e) scroll_pane_cp36

0x8f67,	// (0x00043b5a) list_single_graphic_hl_pane_cp2_ParamLimits

0x8f67,	// (0x00043b5a) list_single_graphic_hl_pane_cp2

0x527d,	// (0x0003fe70) list_single_graphic_hl_pane_ParamLimits

0x527d,	// (0x0003fe70) list_single_graphic_hl_pane

0x5737,	// (0x0004032a) aid_size_min_hl_cp1

0xcb08,	// (0x000476fb) list_highlight_pane_cp34_ParamLimits

0xcb08,	// (0x000476fb) list_highlight_pane_cp34

0xcb19,	// (0x0004770c) list_single_graphic_hl_pane_g1_ParamLimits

0xcb19,	// (0x0004770c) list_single_graphic_hl_pane_g1

0x5740,	// (0x00040333) list_single_graphic_hl_pane_g2_ParamLimits

0x5740,	// (0x00040333) list_single_graphic_hl_pane_g2

0x5740,	// (0x00040333) list_single_graphic_hl_pane_g3_ParamLimits

0x5740,	// (0x00040333) list_single_graphic_hl_pane_g3

0x9490,	// (0x00044083) list_single_graphic_hl_pane_g4_ParamLimits

0x9490,	// (0x00044083) list_single_graphic_hl_pane_g4

0x7243,	// (0x00041e36) list_single_graphic_hl_pane_g5_ParamLimits

0x7243,	// (0x00041e36) list_single_graphic_hl_pane_g5

0x0004,

0xfbdb,	// (0x0004a7ce) list_single_graphic_hl_pane_g_ParamLimits

0xfbdb,	// (0x0004a7ce) list_single_graphic_hl_pane_g

0x574c,	// (0x0004033f) list_single_graphic_hl_pane_t1_ParamLimits

0x574c,	// (0x0004033f) list_single_graphic_hl_pane_t1

0xcb26,	// (0x00047719) aid_size_min_hl_cp2

0xcb2f,	// (0x00047722) list_highlight_pane_cp34_cp2_ParamLimits

0xcb2f,	// (0x00047722) list_highlight_pane_cp34_cp2

0xcb19,	// (0x0004770c) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xcb19,	// (0x0004770c) list_single_graphic_hl_pane_g1_cp2

0xcb3c,	// (0x0004772f) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xcb3c,	// (0x0004772f) list_single_graphic_hl_pane_g2_cp2

0xcb48,	// (0x0004773b) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xcb48,	// (0x0004773b) list_single_graphic_hl_pane_g3_cp2

0xbfb2,	// (0x00046ba5) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xbfb2,	// (0x00046ba5) list_single_graphic_hl_pane_g4_cp2

0xcb56,	// (0x00047749) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xcb56,	// (0x00047749) list_single_graphic_hl_pane_g5_cp2

0x629d,	// (0x00040e90) control_pane_g4_ParamLimits

0x629d,	// (0x00040e90) control_pane_g4

0x985d,	// (0x00044450) bg_popup_sub_pane_cp10_ParamLimits

0xc343,	// (0x00046f36) list_choice_list_pane_ParamLimits

0xc352,	// (0x00046f45) scroll_pane_cp23

0x82a7,	// (0x00042e9a) bg_popup_preview_window_pane_cp02_ParamLimits

0xc93a,	// (0x0004752d) list_preview_fixed_pane_ParamLimits

0xc950,	// (0x00047543) list_preview_fixed_pane_cp_ParamLimits

0xc950,	// (0x00047543) list_preview_fixed_pane_cp

0xc95c,	// (0x0004754f) popup_preview_fixed_window_g1_ParamLimits

0xc95c,	// (0x0004754f) popup_preview_fixed_window_g1

0xc968,	// (0x0004755b) popup_preview_fixed_window_g2_ParamLimits

0xc968,	// (0x0004755b) popup_preview_fixed_window_g2

0x0002,

0xfb6a,	// (0x0004a75d) popup_preview_fixed_window_g_ParamLimits

0xfb6a,	// (0x0004a75d) popup_preview_fixed_window_g

0x5eaa,	// (0x00040a9d) aid_navi_side_left_pane_ParamLimits

0x5ebf,	// (0x00040ab2) aid_navi_side_right_pane_ParamLimits

0x5ed7,	// (0x00040aca) navi_icon_pane_stacon_ParamLimits

0x5eeb,	// (0x00040ade) navi_navi_pane_stacon_ParamLimits

0x5ed7,	// (0x00040aca) navi_text_pane_stacon_ParamLimits

0x7f2a,	// (0x00042b1d) main_text_info_pane

0xcb80,	// (0x00047773) listscroll_text_info_pane

0xcb88,	// (0x0004777b) list_text_info_pane_ParamLimits

0xcb88,	// (0x0004777b) list_text_info_pane

0xcb97,	// (0x0004778a) scroll_pane_cp24_ParamLimits

0xcb97,	// (0x0004778a) scroll_pane_cp24

0xcbb5,	// (0x000477a8) list_text_info_pane_t1_ParamLimits

0xcbb5,	// (0x000477a8) list_text_info_pane_t1

0x6403,	// (0x00040ff6) popup_fast_swap2_window_ParamLimits

0x6403,	// (0x00040ff6) popup_fast_swap2_window

0xcbe6,	// (0x000477d9) aid_size_cell_fast2

0x7f2a,	// (0x00042b1d) bg_popup_window_pane_cp17

0xa1c5,	// (0x00044db8) heading_pane_cp2

0x84f6,	// (0x000430e9) listscroll_fast2_pane

0xcbf0,	// (0x000477e3) grid_fast2_pane

0xcbfa,	// (0x000477ed) listscroll_fast2_pane_g1

0xcc02,	// (0x000477f5) listscroll_fast2_pane_g2

0x0001,

0xfbe6,	// (0x0004a7d9) listscroll_fast2_pane_g

0x89fd,	// (0x000435f0) scroll_pane_cp26

0xcc0c,	// (0x000477ff) cell_fast2_pane_ParamLimits

0xcc0c,	// (0x000477ff) cell_fast2_pane

0xcc21,	// (0x00047814) cell_fast2_pane_g1

0xcc2a,	// (0x0004781d) cell_fast2_pane_g2

0xcc33,	// (0x00047826) cell_fast2_pane_g3

0x0002,

0xfbeb,	// (0x0004a7de) cell_fast2_pane_g

0x85e9,	// (0x000431dc) grid_highlight_pane_cp9

0x85fe,	// (0x000431f1) main_eswt_pane_ParamLimits

0x85fe,	// (0x000431f1) main_eswt_pane

0xcbac,	// (0x0004779f) list_single_text_info_pane

0xcc3b,	// (0x0004782e) eswt_ctrl_button_pane

0xcc3b,	// (0x0004782e) eswt_ctrl_canvas_pane

0xcc43,	// (0x00047836) eswt_ctrl_combo_pane

0xcc3b,	// (0x0004782e) eswt_ctrl_default_pane

0xcc3b,	// (0x0004782e) eswt_ctrl_label_pane

0xcc4b,	// (0x0004783e) eswt_ctrl_wait_pane

0xcc53,	// (0x00047846) eswt_shell_pane

0x7f2a,	// (0x00042b1d) listscroll_eswt_app_pane

0xcc73,	// (0x00047866) popup_eswt_tasktip_window_ParamLimits

0xcc73,	// (0x00047866) popup_eswt_tasktip_window

0x9ddb,	// (0x000449ce) bg_popup_window_pane_cp18

0xcc84,	// (0x00047877) eswt_control_pane_g1_ParamLimits

0xcc84,	// (0x00047877) eswt_control_pane_g1

0xcc91,	// (0x00047884) eswt_control_pane_g2_ParamLimits

0xcc91,	// (0x00047884) eswt_control_pane_g2

0xcc9e,	// (0x00047891) eswt_control_pane_g3_ParamLimits

0xcc9e,	// (0x00047891) eswt_control_pane_g3

0xccab,	// (0x0004789e) eswt_control_pane_g4_ParamLimits

0xccab,	// (0x0004789e) eswt_control_pane_g4

0x0003,

0xfbf2,	// (0x0004a7e5) eswt_control_pane_g_ParamLimits

0xfbf2,	// (0x0004a7e5) eswt_control_pane_g

0x8899,	// (0x0004348c) bg_button_pane_ParamLimits

0x8899,	// (0x0004348c) bg_button_pane

0x85fe,	// (0x000431f1) common_borders_pane_copy2_ParamLimits

0x85fe,	// (0x000431f1) common_borders_pane_copy2

0xccb8,	// (0x000478ab) control_button_pane_g1_ParamLimits

0xccb8,	// (0x000478ab) control_button_pane_g1

0xccc4,	// (0x000478b7) control_button_pane_g2_ParamLimits

0xccc4,	// (0x000478b7) control_button_pane_g2

0xccd0,	// (0x000478c3) control_button_pane_g3_ParamLimits

0xccd0,	// (0x000478c3) control_button_pane_g3

0x0002,

0xfbfb,	// (0x0004a7ee) control_button_pane_g_ParamLimits

0xfbfb,	// (0x0004a7ee) control_button_pane_g

0xcce4,	// (0x000478d7) control_button_pane_t1

0xccf2,	// (0x000478e5) control_button_pane_t2

0x0001,

0xfc02,	// (0x0004a7f5) control_button_pane_t

0x9d67,	// (0x0004495a) bg_button_pane_g1

0x9d6f,	// (0x00044962) bg_button_pane_g2

0x9d77,	// (0x0004496a) bg_button_pane_g3

0x9d7f,	// (0x00044972) bg_button_pane_g4

0x9d87,	// (0x0004497a) bg_button_pane_g5

0x9d8f,	// (0x00044982) bg_button_pane_g6

0x9d97,	// (0x0004498a) bg_button_pane_g7

0x9d9f,	// (0x00044992) bg_button_pane_g8

0x9da7,	// (0x0004499a) bg_button_pane_g9

0x0008,

0xf86b,	// (0x0004a45e) bg_button_pane_g

0xc2fe,	// (0x00046ef1) common_borders_pane_ParamLimits

0xc2fe,	// (0x00046ef1) common_borders_pane

0xcc84,	// (0x00047877) eswt_control_pane_g1_copy1_ParamLimits

0xcc84,	// (0x00047877) eswt_control_pane_g1_copy1

0xcc91,	// (0x00047884) eswt_control_pane_g2_copy1_ParamLimits

0xcc91,	// (0x00047884) eswt_control_pane_g2_copy1

0xcc9e,	// (0x00047891) eswt_control_pane_g3_copy1_ParamLimits

0xcc9e,	// (0x00047891) eswt_control_pane_g3_copy1

0xccab,	// (0x0004789e) eswt_control_pane_g4_copy1_ParamLimits

0xccab,	// (0x0004789e) eswt_control_pane_g4_copy1

0xc339,	// (0x00046f2c) bg_eswt_ctrl_canvas_pane_g1

0xc2fe,	// (0x00046ef1) common_borders_pane_cp2_ParamLimits

0xc2fe,	// (0x00046ef1) common_borders_pane_cp2

0xc2fe,	// (0x00046ef1) common_borders_pane_cp3_ParamLimits

0xc2fe,	// (0x00046ef1) common_borders_pane_cp3

0xcd00,	// (0x000478f3) separator_horizontal_pane

0xcd08,	// (0x000478fb) separator_vertical_pane

0xcc84,	// (0x00047877) eswt_control_pane_g1_copy2_ParamLimits

0xcc84,	// (0x00047877) eswt_control_pane_g1_copy2

0xcc91,	// (0x00047884) eswt_control_pane_g2_copy2_ParamLimits

0xcc91,	// (0x00047884) eswt_control_pane_g2_copy2

0xcc9e,	// (0x00047891) eswt_control_pane_g3_copy2_ParamLimits

0xcc9e,	// (0x00047891) eswt_control_pane_g3_copy2

0xccab,	// (0x0004789e) eswt_control_pane_g4_copy2_ParamLimits

0xccab,	// (0x0004789e) eswt_control_pane_g4_copy2

0x7f2a,	// (0x00042b1d) common_borders_pane_cp4

0xcd11,	// (0x00047904) separator_horizontal_pane_g1

0xcd1a,	// (0x0004790d) separator_horizontal_pane_g2

0xcd23,	// (0x00047916) separator_horizontal_pane_g3

0x0002,

0xfc07,	// (0x0004a7fa) separator_horizontal_pane_g

0xcc84,	// (0x00047877) eswt_control_pane_g1_copy3_ParamLimits

0xcc84,	// (0x00047877) eswt_control_pane_g1_copy3

0xcc91,	// (0x00047884) eswt_control_pane_g2_copy3_ParamLimits

0xcc91,	// (0x00047884) eswt_control_pane_g2_copy3

0xcc9e,	// (0x00047891) eswt_control_pane_g3_copy3_ParamLimits

0xcc9e,	// (0x00047891) eswt_control_pane_g3_copy3

0xccab,	// (0x0004789e) eswt_control_pane_g4_copy3_ParamLimits

0xccab,	// (0x0004789e) eswt_control_pane_g4_copy3

0x7f2a,	// (0x00042b1d) common_borders_pane_cp5

0xcd2c,	// (0x0004791f) separator_vertical_pane_g1

0xcd35,	// (0x00047928) separator_vertical_pane_g2

0xcd3e,	// (0x00047931) separator_vertical_pane_g3

0x0002,

0xfc0e,	// (0x0004a801) separator_vertical_pane_g

0xcc84,	// (0x00047877) eswt_control_pane_g1_copy4_ParamLimits

0xcc84,	// (0x00047877) eswt_control_pane_g1_copy4

0xcc91,	// (0x00047884) eswt_control_pane_g2_copy4_ParamLimits

0xcc91,	// (0x00047884) eswt_control_pane_g2_copy4

0xcc9e,	// (0x00047891) eswt_control_pane_g3_copy4_ParamLimits

0xcc9e,	// (0x00047891) eswt_control_pane_g3_copy4

0xccab,	// (0x0004789e) eswt_control_pane_g4_copy4_ParamLimits

0xccab,	// (0x0004789e) eswt_control_pane_g4_copy4

0xcd47,	// (0x0004793a) eswt_ctrl_combo_button_pane

0xcd4f,	// (0x00047942) eswt_ctrl_input_pane

0xcd57,	// (0x0004794a) popup_choice_list_window_cp70

0xcd5f,	// (0x00047952) eswt_ctrl_input_pane_t1

0x7f2a,	// (0x00042b1d) input_focus_pane_cp70

0xc2fe,	// (0x00046ef1) bg_button_pane_cp70_ParamLimits

0xc2fe,	// (0x00046ef1) bg_button_pane_cp70

0xcd6d,	// (0x00047960) eswt_ctrl_combo_button_pane_g1

0xcd75,	// (0x00047968) wait_bar_pane_cp70

0x9ddb,	// (0x000449ce) bg_popup_window_pane_cp70_ParamLimits

0x9ddb,	// (0x000449ce) bg_popup_window_pane_cp70

0xcd7d,	// (0x00047970) popup_eswt_tasktip_window_t1

0xcd93,	// (0x00047986) wait_bar_pane_cp71_ParamLimits

0xcd93,	// (0x00047986) wait_bar_pane_cp71

0xcd9f,	// (0x00047992) grid_eswt_app_pane

0x8d1e,	// (0x00043911) scroll_pane_cp70

0xcda8,	// (0x0004799b) cell_eswt_app_pane_ParamLimits

0xcda8,	// (0x0004799b) cell_eswt_app_pane

0xcdd8,	// (0x000479cb) cell_eswt_app_pane_g1_ParamLimits

0xcdd8,	// (0x000479cb) cell_eswt_app_pane_g1

0xce07,	// (0x000479fa) cell_eswt_app_pane_g2_ParamLimits

0xce07,	// (0x000479fa) cell_eswt_app_pane_g2

0x0001,

0xfc15,	// (0x0004a808) cell_eswt_app_pane_g_ParamLimits

0xfc15,	// (0x0004a808) cell_eswt_app_pane_g

0xce30,	// (0x00047a23) cell_eswt_app_pane_t1_ParamLimits

0xce30,	// (0x00047a23) cell_eswt_app_pane_t1

0xce62,	// (0x00047a55) grid_highlight_pane_cp70_ParamLimits

0xce62,	// (0x00047a55) grid_highlight_pane_cp70

0x93f4,	// (0x00043fe7) set_content_pane_g1

0x97be,	// (0x000443b1) status_small_volume_pane

0x7257,	// (0x00041e4a) status_small_volume_pane_g1

0x725f,	// (0x00041e52) volume_small2_pane

0x7268,	// (0x00041e5b) volume_small2_pane_g1

0x7271,	// (0x00041e64) volume_small2_pane_g2

0x727a,	// (0x00041e6d) volume_small2_pane_g3

0x7283,	// (0x00041e76) volume_small2_pane_g4

0x728c,	// (0x00041e7f) volume_small2_pane_g5

0x7295,	// (0x00041e88) volume_small2_pane_g6

0x729e,	// (0x00041e91) volume_small2_pane_g7

0x72a7,	// (0x00041e9a) volume_small2_pane_g8

0x72b0,	// (0x00041ea3) volume_small2_pane_g9

0x72b9,	// (0x00041eac) volume_small2_pane_g10

0x0009,

0xfc1a,	// (0x0004a80d) volume_small2_pane_g

0xc6ff,	// (0x000472f2) fep_vkb_top_text_pane_g1_ParamLimits

0xc71a,	// (0x0004730d) fep_vkb_top_text_pane_t1_ParamLimits

0xc974,	// (0x00047567) popup_preview_fixed_window_g3_ParamLimits

0xc974,	// (0x00047567) popup_preview_fixed_window_g3

0x68b2,	// (0x000414a5) popup_toolbar_trans_pane

0xb136,	// (0x00045d29) aid_height_set_list_ParamLimits

0xb147,	// (0x00045d3a) aid_size_parent_ParamLimits

0x985d,	// (0x00044450) list_highlight_pane_cp2_ParamLimits

0x93f4,	// (0x00043fe7) set_content_pane_g1_ParamLimits

0x5298,	// (0x0003fe8b) list_single_image_pane_ParamLimits

0x5298,	// (0x0003fe8b) list_single_image_pane

0xce6e,	// (0x00047a61) aid_size_cell_image_ParamLimits

0xce6e,	// (0x00047a61) aid_size_cell_image

0xce7b,	// (0x00047a6e) grid_single_image_pane_ParamLimits

0xce7b,	// (0x00047a6e) grid_single_image_pane

0xaa9d,	// (0x00045690) list_single_image_pane_g1_ParamLimits

0xaa9d,	// (0x00045690) list_single_image_pane_g1

0xce87,	// (0x00047a7a) list_single_image_pane_g2_ParamLimits

0xce87,	// (0x00047a7a) list_single_image_pane_g2

0x0001,

0xfc2f,	// (0x0004a822) list_single_image_pane_g_ParamLimits

0xfc2f,	// (0x0004a822) list_single_image_pane_g

0xce9b,	// (0x00047a8e) list_single_image_pane_t1_ParamLimits

0xce9b,	// (0x00047a8e) list_single_image_pane_t1

0xceb1,	// (0x00047aa4) cell_image_list_pane_ParamLimits

0xceb1,	// (0x00047aa4) cell_image_list_pane

0xcec5,	// (0x00047ab8) cell_image_list_pane_g1

0xcece,	// (0x00047ac1) cell_image_list_pane_g2

0x0001,

0xfc34,	// (0x0004a827) cell_image_list_pane_g

0xced7,	// (0x00047aca) aid_size_cell_tb_trans_pane

0x8899,	// (0x0004348c) bg_tb_trans_pane

0xcee9,	// (0x00047adc) grid_tb_trans_pane

0x9d67,	// (0x0004495a) bg_tb_trans_pane_g1

0x9d6f,	// (0x00044962) bg_tb_trans_pane_g2

0x9d77,	// (0x0004496a) bg_tb_trans_pane_g3

0x9d7f,	// (0x00044972) bg_tb_trans_pane_g4

0x9d87,	// (0x0004497a) bg_tb_trans_pane_g5

0x9d9f,	// (0x00044992) bg_tb_trans_pane_g6

0x9da7,	// (0x0004499a) bg_tb_trans_pane_g7

0x9d8f,	// (0x00044982) bg_tb_trans_pane_g8

0x9d97,	// (0x0004498a) bg_tb_trans_pane_g9

0x0008,

0xfc39,	// (0x0004a82c) bg_tb_trans_pane_g

0xcefd,	// (0x00047af0) cell_toolbar_trans_pane_ParamLimits

0xcefd,	// (0x00047af0) cell_toolbar_trans_pane

0xc339,	// (0x00046f2c) cell_toolbar_trans_pane_g1

0xbef7,	// (0x00046aea) list_form2_midp_pane_t1

0xbf05,	// (0x00046af8) list_form2_midp_pane_t2

0x0001,

0xfae2,	// (0x0004a6d5) list_form2_midp_pane_t

0xbf13,	// (0x00046b06) scroll_pane_cp51_ParamLimits

0xc0db,	// (0x00046cce) form2_midp_wait_pane_g1

0xc0e4,	// (0x00046cd7) form2_midp_wait_pane_g2

0xc0ed,	// (0x00046ce0) form2_midp_wait_pane_g3

0x0002,

0xfaf7,	// (0x0004a6ea) form2_midp_wait_pane_g

0x801e,	// (0x00042c11) list_highlight_pane_cp21_ParamLimits

0xc144,	// (0x00046d37) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xc153,	// (0x00046d46) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x6d0b,	// (0x000418fe) list_single_2graphic_im_pane_ParamLimits

0x6d0b,	// (0x000418fe) list_single_2graphic_im_pane

0xcf23,	// (0x00047b16) list_single_2graphic_im_pane_g1_ParamLimits

0xcf23,	// (0x00047b16) list_single_2graphic_im_pane_g1

0xcf34,	// (0x00047b27) list_single_2graphic_im_pane_g2_ParamLimits

0xcf34,	// (0x00047b27) list_single_2graphic_im_pane_g2

0xcf40,	// (0x00047b33) list_single_2graphic_im_pane_g3_ParamLimits

0xcf40,	// (0x00047b33) list_single_2graphic_im_pane_g3

0x0003,

0xfc4c,	// (0x0004a83f) list_single_2graphic_im_pane_g_ParamLimits

0xfc4c,	// (0x0004a83f) list_single_2graphic_im_pane_g

0xcf60,	// (0x00047b53) list_single_2graphic_im_pane_t1_ParamLimits

0xcf60,	// (0x00047b53) list_single_2graphic_im_pane_t1

0xc980,	// (0x00047573) list_single_graphic_2heading_pane_fp_ParamLimits

0xc980,	// (0x00047573) list_single_graphic_2heading_pane_fp

0x5619,	// (0x0004020c) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x5619,	// (0x0004020c) list_single_graphic_2heading_pane_fp_g1

0xc995,	// (0x00047588) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc995,	// (0x00047588) list_single_graphic_2heading_pane_fp_g2

0x8834,	// (0x00043427) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x8834,	// (0x00043427) list_single_graphic_2heading_pane_fp_g3

0x88a7,	// (0x0004349a) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x88a7,	// (0x0004349a) list_single_graphic_2heading_pane_fp_g4

0xc9a1,	// (0x00047594) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc9a1,	// (0x00047594) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb7a,	// (0x0004a76d) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb7a,	// (0x0004a76d) list_single_graphic_2heading_pane_fp_g

0x5762,	// (0x00040355) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x5762,	// (0x00040355) list_single_graphic_2heading_pane_fp_t1

0x5651,	// (0x00040244) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x5651,	// (0x00040244) list_single_graphic_2heading_pane_fp_t2

0x5778,	// (0x0004036b) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x5778,	// (0x0004036b) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc55,	// (0x0004a848) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc55,	// (0x0004a848) list_single_graphic_2heading_pane_fp_t

0xc3c5,	// (0x00046fb8) fep_hwr_write_pane_g5_ParamLimits

0xc3c5,	// (0x00046fb8) fep_hwr_write_pane_g5

0xc3d1,	// (0x00046fc4) fep_hwr_write_pane_g6_ParamLimits

0xc3d1,	// (0x00046fc4) fep_hwr_write_pane_g6

0xcc53,	// (0x00047846) eswt_shell_pane_ParamLimits

0x9ddb,	// (0x000449ce) bg_popup_window_pane_cp18_ParamLimits

0xb08f,	// (0x00045c82) heading_pane_cp70

0xcd7d,	// (0x00047970) popup_eswt_tasktip_window_t1_ParamLimits

0x98d4,	// (0x000444c7) aid_touch_tab_arrow_left

0x98e3,	// (0x000444d6) aid_touch_tab_arrow_right

0x7f66,	// (0x00042b59) title_pane_g3_ParamLimits

0x7f66,	// (0x00042b59) title_pane_g3

0x8858,	// (0x0004344b) set_value_pane_g1

0x68b2,	// (0x000414a5) popup_toolbar_trans_pane_ParamLimits

0xced7,	// (0x00047aca) aid_size_cell_tb_trans_pane_ParamLimits

0x8899,	// (0x0004348c) bg_tb_trans_pane_ParamLimits

0xcee9,	// (0x00047adc) grid_tb_trans_pane_ParamLimits

0x82a7,	// (0x00042e9a) cont_note_pane_ParamLimits

0x82a7,	// (0x00042e9a) cont_note_pane

0x85fe,	// (0x000431f1) cont_snote2_single_text_pane_ParamLimits

0x85fe,	// (0x000431f1) cont_snote2_single_text_pane

0x85fe,	// (0x000431f1) cont_snote2_single_graphic_pane_ParamLimits

0x85fe,	// (0x000431f1) cont_snote2_single_graphic_pane

0xa3e0,	// (0x00044fd3) cont_note_wait_pane_ParamLimits

0xa3e0,	// (0x00044fd3) cont_note_wait_pane

0xa3e0,	// (0x00044fd3) cont_note_image_pane_ParamLimits

0xa3e0,	// (0x00044fd3) cont_note_image_pane

0xcf91,	// (0x00047b84) popup_note2_window_g1_ParamLimits

0xcf91,	// (0x00047b84) popup_note2_window_g1

0xcfc2,	// (0x00047bb5) popup_note2_window_t1_ParamLimits

0xcfc2,	// (0x00047bb5) popup_note2_window_t1

0xd007,	// (0x00047bfa) popup_note2_window_t2_ParamLimits

0xd007,	// (0x00047bfa) popup_note2_window_t2

0xd04c,	// (0x00047c3f) popup_note2_window_t3_ParamLimits

0xd04c,	// (0x00047c3f) popup_note2_window_t3

0xd091,	// (0x00047c84) popup_note2_window_t4_ParamLimits

0xd091,	// (0x00047c84) popup_note2_window_t4

0x832b,	// (0x00042f1e) popup_note2_window_t5_ParamLimits

0x832b,	// (0x00042f1e) popup_note2_window_t5

0x0004,

0xfc61,	// (0x0004a854) popup_note2_window_t_ParamLimits

0xfc61,	// (0x0004a854) popup_note2_window_t

0xd0c0,	// (0x00047cb3) popup_note2_image_window_g1_ParamLimits

0xd0c0,	// (0x00047cb3) popup_note2_image_window_g1

0xd0cc,	// (0x00047cbf) popup_note2_image_window_g2_ParamLimits

0xd0cc,	// (0x00047cbf) popup_note2_image_window_g2

0x0001,

0xfc6c,	// (0x0004a85f) popup_note2_image_window_g_ParamLimits

0xfc6c,	// (0x0004a85f) popup_note2_image_window_g

0xd0de,	// (0x00047cd1) popup_note2_image_window_t1_ParamLimits

0xd0de,	// (0x00047cd1) popup_note2_image_window_t1

0xd0f6,	// (0x00047ce9) popup_note2_image_window_t2_ParamLimits

0xd0f6,	// (0x00047ce9) popup_note2_image_window_t2

0xd10e,	// (0x00047d01) popup_note2_image_window_t3_ParamLimits

0xd10e,	// (0x00047d01) popup_note2_image_window_t3

0x0002,

0xfc71,	// (0x0004a864) popup_note2_image_window_t_ParamLimits

0xfc71,	// (0x0004a864) popup_note2_image_window_t

0xa3ee,	// (0x00044fe1) popup_note2_wait_window_g1_ParamLimits

0xa3ee,	// (0x00044fe1) popup_note2_wait_window_g1

0xd12a,	// (0x00047d1d) popup_note2_wait_window_g2_ParamLimits

0xd12a,	// (0x00047d1d) popup_note2_wait_window_g2

0xa406,	// (0x00044ff9) popup_note2_wait_window_g3_ParamLimits

0xa406,	// (0x00044ff9) popup_note2_wait_window_g3

0x0002,

0xfc78,	// (0x0004a86b) popup_note2_wait_window_g_ParamLimits

0xfc78,	// (0x0004a86b) popup_note2_wait_window_g

0xd136,	// (0x00047d29) popup_note2_wait_window_t1_ParamLimits

0xd136,	// (0x00047d29) popup_note2_wait_window_t1

0xd154,	// (0x00047d47) popup_note2_wait_window_t2_ParamLimits

0xd154,	// (0x00047d47) popup_note2_wait_window_t2

0xd172,	// (0x00047d65) popup_note2_wait_window_t3_ParamLimits

0xd172,	// (0x00047d65) popup_note2_wait_window_t3

0xd184,	// (0x00047d77) popup_note2_wait_window_t4_ParamLimits

0xd184,	// (0x00047d77) popup_note2_wait_window_t4

0x0003,

0xfc7f,	// (0x0004a872) popup_note2_wait_window_t_ParamLimits

0xfc7f,	// (0x0004a872) popup_note2_wait_window_t

0xd196,	// (0x00047d89) wait_bar2_pane_ParamLimits

0xd196,	// (0x00047d89) wait_bar2_pane

0xd1ae,	// (0x00047da1) popup_snote2_single_text_window_g1_ParamLimits

0xd1ae,	// (0x00047da1) popup_snote2_single_text_window_g1

0xd1d6,	// (0x00047dc9) popup_snote2_single_text_window_t1_ParamLimits

0xd1d6,	// (0x00047dc9) popup_snote2_single_text_window_t1

0xd222,	// (0x00047e15) popup_snote2_single_text_window_t2_ParamLimits

0xd222,	// (0x00047e15) popup_snote2_single_text_window_t2

0xd26e,	// (0x00047e61) popup_snote2_single_text_window_t3_ParamLimits

0xd26e,	// (0x00047e61) popup_snote2_single_text_window_t3

0xd2af,	// (0x00047ea2) popup_snote2_single_text_window_t4_ParamLimits

0xd2af,	// (0x00047ea2) popup_snote2_single_text_window_t4

0xd2e5,	// (0x00047ed8) popup_snote2_single_text_window_t5_ParamLimits

0xd2e5,	// (0x00047ed8) popup_snote2_single_text_window_t5

0x0004,

0xfc88,	// (0x0004a87b) popup_snote2_single_text_window_t_ParamLimits

0xfc88,	// (0x0004a87b) popup_snote2_single_text_window_t

0xd310,	// (0x00047f03) popup_snote2_single_graphic_window_g1_ParamLimits

0xd310,	// (0x00047f03) popup_snote2_single_graphic_window_g1

0xd338,	// (0x00047f2b) popup_snote2_single_graphic_window_g2_ParamLimits

0xd338,	// (0x00047f2b) popup_snote2_single_graphic_window_g2

0x0001,

0xfc93,	// (0x0004a886) popup_snote2_single_graphic_window_g_ParamLimits

0xfc93,	// (0x0004a886) popup_snote2_single_graphic_window_g

0xd360,	// (0x00047f53) popup_snote2_single_graphic_window_t1_ParamLimits

0xd360,	// (0x00047f53) popup_snote2_single_graphic_window_t1

0xd3ac,	// (0x00047f9f) popup_snote2_single_graphic_window_t2_ParamLimits

0xd3ac,	// (0x00047f9f) popup_snote2_single_graphic_window_t2

0xd26e,	// (0x00047e61) popup_snote2_single_graphic_window_t3_ParamLimits

0xd26e,	// (0x00047e61) popup_snote2_single_graphic_window_t3

0xd2af,	// (0x00047ea2) popup_snote2_single_graphic_window_t4_ParamLimits

0xd2af,	// (0x00047ea2) popup_snote2_single_graphic_window_t4

0xd2e5,	// (0x00047ed8) popup_snote2_single_graphic_window_t5_ParamLimits

0xd2e5,	// (0x00047ed8) popup_snote2_single_graphic_window_t5

0x0004,

0xfc98,	// (0x0004a88b) popup_snote2_single_graphic_window_t_ParamLimits

0xfc98,	// (0x0004a88b) popup_snote2_single_graphic_window_t

0xbdd4,	// (0x000469c7) clock_nsta_pane_cp2_t1

0xbdd4,	// (0x000469c7) clock_nsta_pane_cp2_t2

0x0001,

0xfab8,	// (0x0004a6ab) clock_nsta_pane_cp2_t

0x4e78,	// (0x0003fa6b) form_field_data_wide_pane_g1_ParamLimits

0x8834,	// (0x00043427) form_field_data_wide_pane_g2_ParamLimits

0x8834,	// (0x00043427) form_field_data_wide_pane_g2

0x88a7,	// (0x0004349a) form_field_data_wide_pane_g3_ParamLimits

0x88a7,	// (0x0004349a) form_field_data_wide_pane_g3

0x0002,

0xf680,	// (0x0004a273) form_field_data_wide_pane_g_ParamLimits

0xf680,	// (0x0004a273) form_field_data_wide_pane_g

0xbcc6,	// (0x000468b9) grid_touch_3_pane_ParamLimits

0xbcc6,	// (0x000468b9) grid_touch_3_pane

0xd3f8,	// (0x00047feb) cell_touch_3_pane_ParamLimits

0xd3f8,	// (0x00047feb) cell_touch_3_pane

0xc339,	// (0x00046f2c) cell_touch_3_pane_g1

0xc339,	// (0x00046f2c) cell_touch_3_pane_g2

0x0001,

0xfb3d,	// (0x0004a730) cell_touch_3_pane_g

0x835d,	// (0x00042f50) cont_query_data_pane

0x8365,	// (0x00042f58) cont_query_data_pane_cp1

0xd426,	// (0x00048019) button_value_adjust_pane_cp7

0xd42e,	// (0x00048021) query_popup_pane_cp3

0x8ffc,	// (0x00043bef) bg_popup_sub_pane_cp22_ParamLimits

0x5fec,	// (0x00040bdf) navi_navi_volume_pane_cp2

0x6007,	// (0x00040bfa) popup_side_volume_key_window_g2

0x6016,	// (0x00040c09) popup_side_volume_key_window_g3

0x0002,

0xf716,	// (0x0004a309) popup_side_volume_key_window_g

0x6033,	// (0x00040c26) popup_side_volume_key_window_t2

0x0001,

0xf71d,	// (0x0004a310) popup_side_volume_key_window_t

0x92b3,	// (0x00043ea6) popup_side_volume_key_window_ParamLimits

0x4ac0,	// (0x0003f6b3) list_double_graphic_pane_g4_ParamLimits

0x4ac0,	// (0x0003f6b3) list_double_graphic_pane_g4

0x6d48,	// (0x0004193b) list_single_2heading_msg_pane_ParamLimits

0x6d48,	// (0x0004193b) list_single_2heading_msg_pane

0x72c2,	// (0x00041eb5) list_single_2heading_msg_pane_g1_ParamLimits

0x72c2,	// (0x00041eb5) list_single_2heading_msg_pane_g1

0x9458,	// (0x0004404b) list_single_2heading_msg_pane_g2_ParamLimits

0x9458,	// (0x0004404b) list_single_2heading_msg_pane_g2

0x6e4f,	// (0x00041a42) list_single_2heading_msg_pane_g3_ParamLimits

0x6e4f,	// (0x00041a42) list_single_2heading_msg_pane_g3

0x72ce,	// (0x00041ec1) list_single_2heading_msg_pane_g4_ParamLimits

0x72ce,	// (0x00041ec1) list_single_2heading_msg_pane_g4

0x0003,

0xfca3,	// (0x0004a896) list_single_2heading_msg_pane_g_ParamLimits

0xfca3,	// (0x0004a896) list_single_2heading_msg_pane_g

0x5798,	// (0x0004038b) list_single_2heading_msg_pane_t1_ParamLimits

0x5798,	// (0x0004038b) list_single_2heading_msg_pane_t1

0x57c0,	// (0x000403b3) list_single_2heading_msg_pane_t2_ParamLimits

0x57c0,	// (0x000403b3) list_single_2heading_msg_pane_t2

0x57f4,	// (0x000403e7) list_single_2heading_msg_pane_t3_ParamLimits

0x57f4,	// (0x000403e7) list_single_2heading_msg_pane_t3

0x582d,	// (0x00040420) list_single_2heading_msg_pane_t4_ParamLimits

0x582d,	// (0x00040420) list_single_2heading_msg_pane_t4

0x0003,

0xfcac,	// (0x0004a89f) list_single_2heading_msg_pane_t_ParamLimits

0xfcac,	// (0x0004a89f) list_single_2heading_msg_pane_t

0x7f72,	// (0x00042b65) title_pane_g4_ParamLimits

0x7f72,	// (0x00042b65) title_pane_g4

0x5dfb,	// (0x000409ee) title_pane_stacon_g3_ParamLimits

0x5dfb,	// (0x000409ee) title_pane_stacon_g3

0xcf54,	// (0x00047b47) list_single_2graphic_im_pane_g4_ParamLimits

0xcf54,	// (0x00047b47) list_single_2graphic_im_pane_g4

0xae4b,	// (0x00045a3e) popup_side_volume_key_window_cp

0xb613,	// (0x00046206) main_idle_act2_pane_t1

0x69b0,	// (0x000415a3) toolbar_button_pane_g10

0x87f6,	// (0x000433e9) popup_toolbar_window_cp1

0xbdc5,	// (0x000469b8) clock_nsta_pane_cp_t1

0xbdc5,	// (0x000469b8) clock_nsta_pane_cp_t2

0x0001,

0xfab3,	// (0x0004a6a6) clock_nsta_pane_cp_t

0x5fec,	// (0x00040bdf) navi_navi_volume_pane_cp2_ParamLimits

0x5ffb,	// (0x00040bee) popup_side_volume_key_window_g1_ParamLimits

0x6007,	// (0x00040bfa) popup_side_volume_key_window_g2_ParamLimits

0x6016,	// (0x00040c09) popup_side_volume_key_window_g3_ParamLimits

0xf716,	// (0x0004a309) popup_side_volume_key_window_g_ParamLimits

0x6ee3,	// (0x00041ad6) fep_hwr_aid_pane

0x2df4,	// (0x0003d9e7) bg_fep_hwr_top_pane_g4_ParamLimits

0xc395,	// (0x00046f88) fep_hwr_top_pane_g1_ParamLimits

0xc3a7,	// (0x00046f9a) fep_hwr_top_pane_g2_ParamLimits

0x6f9c,	// (0x00041b8f) fep_hwr_top_pane_g3_ParamLimits

0xfb08,	// (0x0004a6fb) fep_hwr_top_pane_g_ParamLimits

0x6fb1,	// (0x00041ba4) fep_hwr_top_text_pane_ParamLimits

0xac0e,	// (0x00045801) aid_touch_tab_arrow_arrow_2

0xac17,	// (0x0004580a) aid_touch_tab_arrow_left_2

0x6ef7,	// (0x00041aea) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x6f2e,	// (0x00041b21) fep_hwr_prediction_pane

0xc507,	// (0x000470fa) fep_vkb_prediction_pane

0xc60b,	// (0x000471fe) fep_vkb_side_pane_g3_ParamLimits

0xc60b,	// (0x000471fe) fep_vkb_side_pane_g3

0xc5b7,	// (0x000471aa) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xc9f5,	// (0x000475e8) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xca02,	// (0x000475f5) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbb2,	// (0x0004a7a5) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xd453,	// (0x00048046) fep_hwr_prediction_pane_g1

0x72e6,	// (0x00041ed9) fep_hwr_prediction_pane_g2

0x72ee,	// (0x00041ee1) fep_hwr_prediction_pane_g3

0x72f6,	// (0x00041ee9) fep_hwr_prediction_pane_g4

0x0003,

0xfcb5,	// (0x0004a8a8) fep_hwr_prediction_pane_g

0xd453,	// (0x00048046) fep_vkb_prediction_pane_g1

0xd45d,	// (0x00048050) fep_vkb_prediction_pane_g2

0xd465,	// (0x00048058) fep_vkb_prediction_pane_g3

0xd46d,	// (0x00048060) fep_vkb_prediction_pane_g4

0x0003,

0xfcbe,	// (0x0004a8b1) fep_vkb_prediction_pane_g

0x6c98,	// (0x0004188b) slider_set_pane_g3

0x6cac,	// (0x0004189f) slider_set_pane_g4

0x6cc4,	// (0x000418b7) slider_set_pane_g5

0x6c98,	// (0x0004188b) slider_set_pane_g6

0x6cda,	// (0x000418cd) slider_set_pane_g7

0xb2ac,	// (0x00045e9f) slider_form_pane_g3

0xb2b5,	// (0x00045ea8) slider_form_pane_g4

0xb2bd,	// (0x00045eb0) slider_form_pane_g5

0xb2ac,	// (0x00045e9f) slider_form_pane_g6

0xb2c5,	// (0x00045eb8) slider_form_pane_g7

0xb8be,	// (0x000464b1) slider_set_pane_vc_g3

0xb8c7,	// (0x000464ba) slider_set_pane_vc_g4

0xb8d0,	// (0x000464c3) slider_set_pane_vc_g5

0xb8be,	// (0x000464b1) slider_set_pane_vc_g6

0xb8d9,	// (0x000464cc) slider_set_pane_vc_g7

0xba99,	// (0x0004668c) slider_form_pane_vc_g1

0xbaa2,	// (0x00046695) slider_form_pane_vc_g2

0xbaab,	// (0x0004669e) slider_form_pane_vc_g3

0xba99,	// (0x0004668c) slider_form_pane_vc_g4

0xbab4,	// (0x000466a7) slider_form_pane_vc_g5

0x0004,

0xfa85,	// (0x0004a678) slider_form_pane_vc_g

0x7f2a,	// (0x00042b1d) main_idle_act3_pane

0xd475,	// (0x00048068) ai3_links_pane

0xd47e,	// (0x00048071) popup_ai3_data_window_ParamLimits

0xd47e,	// (0x00048071) popup_ai3_data_window

0x7f2a,	// (0x00042b1d) grid_ai3_links_pane

0xd498,	// (0x0004808b) cell_ai3_links_pane_ParamLimits

0xd498,	// (0x0004808b) cell_ai3_links_pane

0xd4b0,	// (0x000480a3) bg_popup_sub_pane_cp11

0xd4bd,	// (0x000480b0) cell_ai3_links_pane_g1

0x7f2a,	// (0x00042b1d) bg_popup_sub_pane_cp12

0xd4e2,	// (0x000480d5) heading_ai3_data_pane

0xd4ea,	// (0x000480dd) list_ai3_gene_pane

0xd4f6,	// (0x000480e9) popup_ai3_data_window_g1

0xd4fe,	// (0x000480f1) heading_ai3_data_pane_g1

0xd506,	// (0x000480f9) heading_ai3_data_pane_t1

0xd514,	// (0x00048107) list_double_ai3_gene_pane_ParamLimits

0xd514,	// (0x00048107) list_double_ai3_gene_pane

0xd521,	// (0x00048114) list_single_ai3_gene_pane_ParamLimits

0xd521,	// (0x00048114) list_single_ai3_gene_pane

0xc2fe,	// (0x00046ef1) list_highlight_pane_cp7_ParamLimits

0xc2fe,	// (0x00046ef1) list_highlight_pane_cp7

0xd52e,	// (0x00048121) list_single_a13_gene_pane_t1_ParamLimits

0xd52e,	// (0x00048121) list_single_a13_gene_pane_t1

0xd545,	// (0x00048138) list_single_ai3_gene_pane_g1

0xd54e,	// (0x00048141) list_single_ai3_gene_pane_g2

0x0001,

0xfcc7,	// (0x0004a8ba) list_single_ai3_gene_pane_g

0xd556,	// (0x00048149) list_double_ai3_gene_pane_g1_ParamLimits

0xd556,	// (0x00048149) list_double_ai3_gene_pane_g1

0xd562,	// (0x00048155) list_double_ai3_gene_pane_t1_ParamLimits

0xd562,	// (0x00048155) list_double_ai3_gene_pane_t1

0xd57e,	// (0x00048171) list_double_ai3_gene_pane_t2_ParamLimits

0xd57e,	// (0x00048171) list_double_ai3_gene_pane_t2

0xd594,	// (0x00048187) list_double_ai3_gene_pane_t3_ParamLimits

0xd594,	// (0x00048187) list_double_ai3_gene_pane_t3

0x0002,

0xfccc,	// (0x0004a8bf) list_double_ai3_gene_pane_t_ParamLimits

0xfccc,	// (0x0004a8bf) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x578e,	// (0x00040381) aid_size_min_col_2

0xd43f,	// (0x00048032) aid_size_min_msg_ParamLimits

0xd43f,	// (0x00048032) aid_size_min_msg

0xc70b,	// (0x000472fe) fep_vkb_top_text_pane_g2_ParamLimits

0xc70b,	// (0x000472fe) fep_vkb_top_text_pane_g2

0x0001,

0xfb38,	// (0x0004a72b) fep_vkb_top_text_pane_g_ParamLimits

0xfb38,	// (0x0004a72b) fep_vkb_top_text_pane_g

0x7f2a,	// (0x00042b1d) main_hc_apps_shell_pane

0xd5b1,	// (0x000481a4) grid_hc_apps_pane_ParamLimits

0xd5b1,	// (0x000481a4) grid_hc_apps_pane

0xd5c0,	// (0x000481b3) list_hc_apps_pane

0xd5c8,	// (0x000481bb) scroll_pane_cp37_ParamLimits

0xd5c8,	// (0x000481bb) scroll_pane_cp37

0xd5d4,	// (0x000481c7) cell_hc_apps_pane_ParamLimits

0xd5d4,	// (0x000481c7) cell_hc_apps_pane

0xd682,	// (0x00048275) cell_hc_apps_pane_g1_ParamLimits

0xd682,	// (0x00048275) cell_hc_apps_pane_g1

0xd6b3,	// (0x000482a6) cell_hc_apps_pane_g2_ParamLimits

0xd6b3,	// (0x000482a6) cell_hc_apps_pane_g2

0xd6cf,	// (0x000482c2) cell_hc_apps_pane_g3_ParamLimits

0xd6cf,	// (0x000482c2) cell_hc_apps_pane_g3

0x0002,

0xfcd3,	// (0x0004a8c6) cell_hc_apps_pane_g_ParamLimits

0xfcd3,	// (0x0004a8c6) cell_hc_apps_pane_g

0xd6f1,	// (0x000482e4) cell_hc_apps_pane_t1_ParamLimits

0xd6f1,	// (0x000482e4) cell_hc_apps_pane_t1

0x82a7,	// (0x00042e9a) grid_highlight_pane_cp10_ParamLimits

0x82a7,	// (0x00042e9a) grid_highlight_pane_cp10

0xd731,	// (0x00048324) list_single_hc_apps_pane_ParamLimits

0xd731,	// (0x00048324) list_single_hc_apps_pane

0xd78d,	// (0x00048380) list_single_hc_apps_pane_g1

0x72fe,	// (0x00041ef1) list_single_hc_apps_pane_g2

0x0001,

0xfcda,	// (0x0004a8cd) list_single_hc_apps_pane_g

0x7317,	// (0x00041f0a) list_single_hc_apps_pane_g2_copy1

0x5852,	// (0x00040445) list_single_hc_apps_pane_t1

0x801e,	// (0x00042c11) bg_set_opt_pane_cp_ParamLimits

0x5c77,	// (0x0004086a) setting_slider_pane_t1_ParamLimits

0x5c90,	// (0x00040883) setting_slider_pane_t2_ParamLimits

0x5caa,	// (0x0004089d) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0004a151) setting_slider_pane_t_ParamLimits

0x5cc2,	// (0x000408b5) slider_set_pane_ParamLimits

0x62b1,	// (0x00040ea4) control_pane_g5_ParamLimits

0x62b1,	// (0x00040ea4) control_pane_g5

0xb0fb,	// (0x00045cee) slider_set_pane_g1_ParamLimits

0x6c8c,	// (0x0004187f) slider_set_pane_g2_ParamLimits

0x6c98,	// (0x0004188b) slider_set_pane_g3_ParamLimits

0x6cac,	// (0x0004189f) slider_set_pane_g4_ParamLimits

0x6cc4,	// (0x000418b7) slider_set_pane_g5_ParamLimits

0x6c98,	// (0x0004188b) slider_set_pane_g6_ParamLimits

0x6cda,	// (0x000418cd) slider_set_pane_g7_ParamLimits

0xf969,	// (0x0004a55c) slider_set_pane_g_ParamLimits

0x939f,	// (0x00043f92) navi_icon_text_pane_ParamLimits

0x9895,	// (0x00044488) aid_fill_nsta_2_ParamLimits

0x98d4,	// (0x000444c7) aid_touch_tab_arrow_left_ParamLimits

0x98e3,	// (0x000444d6) aid_touch_tab_arrow_right_ParamLimits

0x9950,	// (0x00044543) clock_nsta_pane_ParamLimits

0xabf0,	// (0x000457e3) navi_icon_pane_g1_ParamLimits

0xabfc,	// (0x000457ef) navi_text_pane_t1_ParamLimits

0xbed1,	// (0x00046ac4) navi_icon_text_pane_g1_ParamLimits

0xbedd,	// (0x00046ad0) navi_icon_text_pane_t1_ParamLimits

0xd78d,	// (0x00048380) list_single_hc_apps_pane_g1_ParamLimits

0x72fe,	// (0x00041ef1) list_single_hc_apps_pane_g2_ParamLimits

0xfcda,	// (0x0004a8cd) list_single_hc_apps_pane_g_ParamLimits

0x7317,	// (0x00041f0a) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x5852,	// (0x00040445) list_single_hc_apps_pane_t1_ParamLimits

0x5b81,	// (0x00040774) popup_toolbar2_fixed_window_ParamLimits

0x5b81,	// (0x00040774) popup_toolbar2_fixed_window

0x68a8,	// (0x0004149b) popup_toolbar2_float_window

0x7f2a,	// (0x00042b1d) bg_popup_sub_pane_cp27

0xd7a6,	// (0x00048399) grid_toolbar2_float_pane

0x7f2a,	// (0x00042b1d) bg_popup_sub_pane_cp26

0xd7a6,	// (0x00048399) grid_toolbar2_fixed_pane

0xd7ae,	// (0x000483a1) cell_toolbar2_fixed_pane_ParamLimits

0xd7ae,	// (0x000483a1) cell_toolbar2_fixed_pane

0xd7be,	// (0x000483b1) cell_toolbar2_fixed_pane_g1

0xd7c7,	// (0x000483ba) toolbar2_fixed_button_pane

0x9d67,	// (0x0004495a) toolbar2_fixed_button_pane_g1

0x9d6f,	// (0x00044962) toolbar2_fixed_button_pane_g2

0x9d77,	// (0x0004496a) toolbar2_fixed_button_pane_g3

0x9d7f,	// (0x00044972) toolbar2_fixed_button_pane_g4

0x9d87,	// (0x0004497a) toolbar2_fixed_button_pane_g5

0x9d8f,	// (0x00044982) toolbar2_fixed_button_pane_g6

0x9d97,	// (0x0004498a) toolbar2_fixed_button_pane_g7

0x9d9f,	// (0x00044992) toolbar2_fixed_button_pane_g8

0x9da7,	// (0x0004499a) toolbar2_fixed_button_pane_g9

0x0008,

0xf86b,	// (0x0004a45e) toolbar2_fixed_button_pane_g

0xd7cf,	// (0x000483c2) cell_toolbar2_float_pane_ParamLimits

0xd7cf,	// (0x000483c2) cell_toolbar2_float_pane

0xd7e0,	// (0x000483d3) cell_toolbar2_float_pane_g1

0xd7c7,	// (0x000483ba) toolbar2_fixed_button_pane_cp

0xc467,	// (0x0004705a) fep_vkb_accented_list_pane_ParamLimits

0xc467,	// (0x0004705a) fep_vkb_accented_list_pane

0x70ff,	// (0x00041cf2) bg_popup_fep_shadow_pane_g9

0x951f,	// (0x00044112) bg_popup_fep_shadow_pane_cp3

0x89e4,	// (0x000435d7) list_accented_list_pane

0xd7e9,	// (0x000483dc) list_single_accented_list_pane_ParamLimits

0xd7e9,	// (0x000483dc) list_single_accented_list_pane

0x951f,	// (0x00044112) list_highlight_pane_cp10

0xd7fa,	// (0x000483ed) list_single_accented_list_pane_t1

0x67f8,	// (0x000413eb) popup_slider_window_ParamLimits

0x67f8,	// (0x000413eb) popup_slider_window

0xd436,	// (0x00048029) aid_indentation_list_msg

0xd8b4,	// (0x000484a7) bg_popup_window_pane_cp19

0xd91e,	// (0x00048511) popup_slider_window_g1

0xd93a,	// (0x0004852d) popup_slider_window_g2

0xd956,	// (0x00048549) popup_slider_window_g3

0x0005,

0xfcdf,	// (0x0004a8d2) popup_slider_window_g

0xd9b2,	// (0x000485a5) popup_slider_window_t1

0xda26,	// (0x00048619) small_volume_slider_vertical_pane

0xc339,	// (0x00046f2c) small_volume_slider_vertical_pane_g1

0xc339,	// (0x00046f2c) small_volume_slider_vertical_pane_g2

0xda42,	// (0x00048635) small_volume_slider_vertical_pane_g3

0x0002,

0xfcf1,	// (0x0004a8e4) small_volume_slider_vertical_pane_g

0x5943,	// (0x00040536) area_side_right_pane_ParamLimits

0x5943,	// (0x00040536) area_side_right_pane

0x7333,	// (0x00041f26) aid_size_side_button_ParamLimits

0x7333,	// (0x00041f26) aid_size_side_button

0x7347,	// (0x00041f3a) grid_sctrl_middle_pane_ParamLimits

0x7347,	// (0x00041f3a) grid_sctrl_middle_pane

0x7366,	// (0x00041f59) sctrl_sk_bottom_pane

0x7377,	// (0x00041f6a) sctrl_sk_top_pane

0x7389,	// (0x00041f7c) aid_touch_sctrl_top

0x82a7,	// (0x00042e9a) bg_sctrl_sk_pane_ParamLimits

0x82a7,	// (0x00042e9a) bg_sctrl_sk_pane

0x7396,	// (0x00041f89) sctrl_sk_top_pane_g1

0x73a3,	// (0x00041f96) sctrl_sk_top_pane_t1

0x7389,	// (0x00041f7c) aid_touch_sctrl_bottom

0x82a7,	// (0x00042e9a) bg_sctrl_sk_pane_cp_ParamLimits

0x82a7,	// (0x00042e9a) bg_sctrl_sk_pane_cp

0x73be,	// (0x00041fb1) sctrl_sk_bottom_pane_g1

0x73a3,	// (0x00041f96) sctrl_sk_bottom_pane_t1

0x73c7,	// (0x00041fba) cell_sctrl_middle_pane_ParamLimits

0x73c7,	// (0x00041fba) cell_sctrl_middle_pane

0x73e2,	// (0x00041fd5) aid_touch_sctrl_middle_ParamLimits

0x73e2,	// (0x00041fd5) aid_touch_sctrl_middle

0x8899,	// (0x0004348c) bg_sctrl_middle_pane_ParamLimits

0x8899,	// (0x0004348c) bg_sctrl_middle_pane

0xc5b7,	// (0x000471aa) cell_sctrl_middle_pane_g1_ParamLimits

0xc5b7,	// (0x000471aa) cell_sctrl_middle_pane_g1

0x73f4,	// (0x00041fe7) cell_sctrl_middle_pane_g2_ParamLimits

0x73f4,	// (0x00041fe7) cell_sctrl_middle_pane_g2

0x0001,

0xfcfd,	// (0x0004a8f0) cell_sctrl_middle_pane_g_ParamLimits

0xfcfd,	// (0x0004a8f0) cell_sctrl_middle_pane_g

0x9d67,	// (0x0004495a) bg_sctrl_middle_pane_g1

0x9d6f,	// (0x00044962) bg_sctrl_middle_pane_g2

0x9d77,	// (0x0004496a) bg_sctrl_middle_pane_g3

0x9d7f,	// (0x00044972) bg_sctrl_middle_pane_g4

0x9d87,	// (0x0004497a) bg_sctrl_middle_pane_g5

0x9d8f,	// (0x00044982) bg_sctrl_middle_pane_g6

0x9d97,	// (0x0004498a) bg_sctrl_middle_pane_g7

0x9d9f,	// (0x00044992) bg_sctrl_middle_pane_g8

0x0007,

0xfd02,	// (0x0004a8f5) bg_sctrl_middle_pane_g

0x9da7,	// (0x0004499a) bg_sctrl_middle_pane_g8_copy1

0x9d67,	// (0x0004495a) bg_sctrl_sk_pane_g1

0x9d6f,	// (0x00044962) bg_sctrl_sk_pane_g2

0x9d77,	// (0x0004496a) bg_sctrl_sk_pane_g3

0x0008,

0xf86b,	// (0x0004a45e) bg_sctrl_sk_pane_g

0x87bc,	// (0x000433af) aid_size_touch_scroll_bar

0x9d7f,	// (0x00044972) bg_sctrl_sk_pane_g4

0x9d87,	// (0x0004497a) bg_sctrl_sk_pane_g5

0x9d8f,	// (0x00044982) bg_sctrl_sk_pane_g6

0x9d97,	// (0x0004498a) bg_sctrl_sk_pane_g7

0x9d9f,	// (0x00044992) bg_sctrl_sk_pane_g8

0x9da7,	// (0x0004499a) bg_sctrl_sk_pane_g9

0x6461,	// (0x00041054) popup_fep_china_hwr2_fs_candidate_window

0x646b,	// (0x0004105e) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x646b,	// (0x0004105e) popup_fep_china_hwr2_fs_control_window

0xc5b7,	// (0x000471aa) sctrl_sk_top_pane_g2

0x0001,

0xfcf8,	// (0x0004a8eb) sctrl_sk_top_pane_g

0xda4b,	// (0x0004863e) aid_fep_china_hwr2_fs_cell_ParamLimits

0xda4b,	// (0x0004863e) aid_fep_china_hwr2_fs_cell

0xda5d,	// (0x00048650) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xda5d,	// (0x00048650) bg_popup_fep_shadow_pane_cp4

0xda74,	// (0x00048667) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xda74,	// (0x00048667) bg_popup_fep_shadow_pane_cp5

0xda86,	// (0x00048679) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xda86,	// (0x00048679) popup_fep_china_hwr2_fs_control_bar_grid

0xda96,	// (0x00048689) popup_fep_china_hwr2_fs_control_funtion_grid

0xda9e,	// (0x00048691) aid_fep_china_hwr2_fs_candi_cell

0x7f2a,	// (0x00042b1d) bg_popup_fep_shadow_pane_cp6

0xdaa8,	// (0x0004869b) popup_fep_china_hwr2_fs_candidate_grid

0xdab2,	// (0x000486a5) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xdab2,	// (0x000486a5) cell_fep_china_hwr2_fs_funtion_grid

0xc339,	// (0x00046f2c) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xdaca,	// (0x000486bd) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xdaca,	// (0x000486bd) cell_fep_china_hwr2_fs_funtion_grid_g1

0xdad8,	// (0x000486cb) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xdad8,	// (0x000486cb) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd13,	// (0x0004a906) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd13,	// (0x0004a906) cell_fep_china_hwr2_fs_funtion_grid_g

0xdaee,	// (0x000486e1) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xdaee,	// (0x000486e1) cell_fep_china_hwr2_fs_funtion_grid_t1

0xdb03,	// (0x000486f6) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xdb03,	// (0x000486f6) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd18,	// (0x0004a90b) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd18,	// (0x0004a90b) cell_fep_china_hwr2_fs_funtion_grid_t

0xdb1f,	// (0x00048712) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xdb27,	// (0x0004871a) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xdb2f,	// (0x00048722) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd1d,	// (0x0004a910) popup_fep_china_hwr2_fs_control_bar_grid_g

0xdb37,	// (0x0004872a) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xdb37,	// (0x0004872a) cell_fep_china_hwr2_fs_candidate_grid

0xdb50,	// (0x00048743) popup_fep_china_hwr2_fs_candidate_grid_g20

0xdb58,	// (0x0004874b) popup_fep_china_hwr2_fs_candidate_grid_g21

0xc339,	// (0x00046f2c) cell_fep_china_hwr2_fs_candidate_grid_g1

0xc339,	// (0x00046f2c) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb3d,	// (0x0004a730) cell_fep_china_hwr2_fs_candidate_grid_g

0xdb60,	// (0x00048753) cell_fep_china_hwr2_fs_candidate_grid_t1

0x995d,	// (0x00044550) clock_nsta_pane_cp_24_ParamLimits

0x995d,	// (0x00044550) clock_nsta_pane_cp_24

0x99db,	// (0x000445ce) indicator_nsta_pane_cp_24_ParamLimits

0x99db,	// (0x000445ce) indicator_nsta_pane_cp_24

0xaa60,	// (0x00045653) heading_pane_g1

0x0001,

0xf8d0,	// (0x0004a4c3) heading_pane_g

0xb45c,	// (0x0004604f) grid_sct_catagory_button_pane

0xb48c,	// (0x0004607f) scroll_pane_cp5_ParamLimits

0xbf1f,	// (0x00046b12) button_value_adjust_pane_cp5_ParamLimits

0xbf1f,	// (0x00046b12) button_value_adjust_pane_cp5

0xc00a,	// (0x00046bfd) form2_midp_time_pane_ParamLimits

0xdb6e,	// (0x00048761) cell_sct_catagory_button_pane_ParamLimits

0xdb6e,	// (0x00048761) cell_sct_catagory_button_pane

0xc2fe,	// (0x00046ef1) bg_button_pane_cp01_ParamLimits

0xc2fe,	// (0x00046ef1) bg_button_pane_cp01

0xc339,	// (0x00046f2c) cell_sct_catagory_button_pane_g1

0x6837,	// (0x0004142a) popup_tb_extension_window

0xdb80,	// (0x00048773) aid_size_cell_ext_ParamLimits

0xdb80,	// (0x00048773) aid_size_cell_ext

0x82a7,	// (0x00042e9a) bg_tb_trans_pane_cp1_ParamLimits

0x82a7,	// (0x00042e9a) bg_tb_trans_pane_cp1

0xdba0,	// (0x00048793) grid_tb_ext_pane_ParamLimits

0xdba0,	// (0x00048793) grid_tb_ext_pane

0xdbce,	// (0x000487c1) cell_tb_ext_pane_ParamLimits

0xdbce,	// (0x000487c1) cell_tb_ext_pane

0xdbe5,	// (0x000487d8) cell_tb_ext_pane_g1_ParamLimits

0xdbe5,	// (0x000487d8) cell_tb_ext_pane_g1

0xdc02,	// (0x000487f5) cell_tb_ext_pane_t1

0x82a7,	// (0x00042e9a) list_highlight_pane_cp11_ParamLimits

0x82a7,	// (0x00042e9a) list_highlight_pane_cp11

0x5ba0,	// (0x00040793) popup_uni_indicator_window_ParamLimits

0x5ba0,	// (0x00040793) popup_uni_indicator_window

0x8899,	// (0x0004348c) bg_popup_sub_pane_cp14

0xdc1d,	// (0x00048810) list_uniindi_pane

0xdc29,	// (0x0004881c) uniindi_top_pane

0x82a7,	// (0x00042e9a) bg_uniindi_top_pane

0xdc48,	// (0x0004883b) uniindi_top_pane_g1

0xdc5e,	// (0x00048851) uniindi_top_pane_g2

0x0003,

0xfd24,	// (0x0004a917) uniindi_top_pane_g

0xdc88,	// (0x0004887b) uniindi_top_pane_t1

0xdcb2,	// (0x000488a5) list_single_uniindi_pane_ParamLimits

0xdcb2,	// (0x000488a5) list_single_uniindi_pane

0xc339,	// (0x00046f2c) bg_uniindi_top_pane_g1

0xdcc5,	// (0x000488b8) list_single_uniindi_pane_g1

0xdcd8,	// (0x000488cb) list_single_uniindi_pane_t1

0x7f2a,	// (0x00042b1d) control_bg_pane

0xdcfd,	// (0x000488f0) bg_sctrl_sk_pane_cp1

0xdd06,	// (0x000488f9) bg_sctrl_sk_pane_cp2

0xdd0f,	// (0x00048902) control_bg_pane_g1

0xdd18,	// (0x0004890b) control_bg_pane_g2

0x0001,

0xfd2d,	// (0x0004a920) control_bg_pane_g

0xbd69,	// (0x0004695c) cell_indicator_nsta_pane_g1_ParamLimits

0xbd77,	// (0x0004696a) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa1,	// (0x0004a694) cell_indicator_nsta_pane_g_ParamLimits

0x55ef,	// (0x000401e2) form2_midp_time_pane_t1_ParamLimits

0x85fe,	// (0x000431f1) main_idle_act4_pane_ParamLimits

0x85fe,	// (0x000431f1) main_idle_act4_pane

0x6837,	// (0x0004142a) popup_tb_extension_window_ParamLimits

0xdbbe,	// (0x000487b1) tb_ext_find_pane_ParamLimits

0xdbbe,	// (0x000487b1) tb_ext_find_pane

0xdd21,	// (0x00048914) ai_gene_pane_1_cp1

0x965a,	// (0x0004424d) ai_gene_pane_2_cp1

0xdd29,	// (0x0004891c) list_single_idle_plugin_calendar_pane

0xdd32,	// (0x00048925) list_single_idle_plugin_notification_pane

0xdd3b,	// (0x0004892e) list_single_idle_plugin_player_pane

0xdd44,	// (0x00048937) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdd44,	// (0x00048937) list_single_idle_plugin_shortcut_pane

0xdd66,	// (0x00048959) main_idle_act4_pane_t1

0xdd78,	// (0x0004896b) main_idle_act4_pane_t2

0x0001,

0xfd32,	// (0x0004a925) main_idle_act4_pane_t

0xdd8a,	// (0x0004897d) middle_sk_idle_act4_pane_ParamLimits

0xdd8a,	// (0x0004897d) middle_sk_idle_act4_pane

0xdda0,	// (0x00048993) popup_clock_digital_analogue_window_cp2

0xddba,	// (0x000489ad) shortcut_wheel_idle_act4_pane_ParamLimits

0xddba,	// (0x000489ad) shortcut_wheel_idle_act4_pane

0xc339,	// (0x00046f2c) shortcut_wheel_idle_act4_pane_g1

0xc339,	// (0x00046f2c) shortcut_wheel_idle_act4_pane_g2

0xc339,	// (0x00046f2c) shortcut_wheel_idle_act4_pane_g3

0xc339,	// (0x00046f2c) shortcut_wheel_idle_act4_pane_g4

0xc339,	// (0x00046f2c) shortcut_wheel_idle_act4_pane_g5

0xddce,	// (0x000489c1) shortcut_wheel_idle_act4_pane_g6

0xddd6,	// (0x000489c9) shortcut_wheel_idle_act4_pane_g7

0xddde,	// (0x000489d1) shortcut_wheel_idle_act4_pane_g8

0xdde6,	// (0x000489d9) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd37,	// (0x0004a92a) shortcut_wheel_idle_act4_pane_g

0xc5b7,	// (0x000471aa) middle_sk_idle_act4_pane_g1_ParamLimits

0xc5b7,	// (0x000471aa) middle_sk_idle_act4_pane_g1

0xde4a,	// (0x00048a3d) middle_sk_idle_act4_pane_g2_ParamLimits

0xde4a,	// (0x00048a3d) middle_sk_idle_act4_pane_g2

0x0001,

0xfd5a,	// (0x0004a94d) middle_sk_idle_act4_pane_g_ParamLimits

0xfd5a,	// (0x0004a94d) middle_sk_idle_act4_pane_g

0xde56,	// (0x00048a49) middle_sk_idle_act4_pane_t1_ParamLimits

0xde56,	// (0x00048a49) middle_sk_idle_act4_pane_t1

0xde73,	// (0x00048a66) grid_ai_shortcut_pane_ParamLimits

0xde73,	// (0x00048a66) grid_ai_shortcut_pane

0xde8c,	// (0x00048a7f) list_highlight_pane_cp16_ParamLimits

0xde8c,	// (0x00048a7f) list_highlight_pane_cp16

0xde99,	// (0x00048a8c) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xde99,	// (0x00048a8c) list_single_idle_plugin_shortcut_pane_g1

0xdea5,	// (0x00048a98) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdea5,	// (0x00048a98) list_single_idle_plugin_shortcut_pane_g2

0xdebd,	// (0x00048ab0) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdebd,	// (0x00048ab0) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd5f,	// (0x0004a952) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd5f,	// (0x0004a952) list_single_idle_plugin_shortcut_pane_g

0xded0,	// (0x00048ac3) cell_ai_shortcut_pane_ParamLimits

0xded0,	// (0x00048ac3) cell_ai_shortcut_pane

0xdef4,	// (0x00048ae7) cell_ai_shortcut_pane_g1_ParamLimits

0xdef4,	// (0x00048ae7) cell_ai_shortcut_pane_g1

0xdd21,	// (0x00048914) ai_gene_pane_1_cp2

0xdf16,	// (0x00048b09) ai_gene_pane_2_cp2

0xdf1e,	// (0x00048b11) list_highlight_pane_cp15

0xdf27,	// (0x00048b1a) list_single_idle_plugin_calendar_pane_g1

0xdf1e,	// (0x00048b11) list_highlight_pane_cp17

0xdf2f,	// (0x00048b22) list_single_idle_plugin_calendar_pane_g1_copy1

0xdf37,	// (0x00048b2a) list_single_idle_plugin_player_pane_g1

0xb6b5,	// (0x000462a8) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd66,	// (0x0004a959) list_single_idle_plugin_player_pane_g

0xdf60,	// (0x00048b53) list_single_idle_plugin_player_pane_t1

0xdf6e,	// (0x00048b61) list_single_idle_plugin_player_pane_t2

0xdf7c,	// (0x00048b6f) list_single_idle_plugin_player_pane_t3

0xdf8a,	// (0x00048b7d) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd6b,	// (0x0004a95e) list_single_idle_plugin_player_pane_t

0xdf98,	// (0x00048b8b) wait_bar_pane_cp15

0xdfa0,	// (0x00048b93) grid_ai_notification_pane

0xb6b5,	// (0x000462a8) list_single_idle_plugin_notification_pane_g1

0xdfa9,	// (0x00048b9c) cell_ai_notification_pane_ParamLimits

0xdfa9,	// (0x00048b9c) cell_ai_notification_pane

0xdfb6,	// (0x00048ba9) cell_ai_notification_pane_g1

0xdfbe,	// (0x00048bb1) cell_ai_notification_pane_t1

0xdfcc,	// (0x00048bbf) tb_ext_find_button_pane

0xdfd4,	// (0x00048bc7) tb_ext_find_pane_g1

0xdfdc,	// (0x00048bcf) tb_ext_find_pane_t1

0x8f0c,	// (0x00043aff) tb_ext_find_button_pane_g1

0xdfea,	// (0x00048bdd) tb_ext_find_button_pane_g2

0x0001,

0xfd74,	// (0x0004a967) tb_ext_find_button_pane_g

0xdd66,	// (0x00048959) main_idle_act4_pane_t1_ParamLimits

0xdd78,	// (0x0004896b) main_idle_act4_pane_t2_ParamLimits

0xfd32,	// (0x0004a925) main_idle_act4_pane_t_ParamLimits

0xdda0,	// (0x00048993) popup_clock_digital_analogue_window_cp2_ParamLimits

0xddae,	// (0x000489a1) sat_plugin_idle_act4_pane_ParamLimits

0xddae,	// (0x000489a1) sat_plugin_idle_act4_pane

0xdff3,	// (0x00048be6) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdff3,	// (0x00048be6) sat_plugin_idle_act4_pane_t1

0xe006,	// (0x00048bf9) sat_plugin_idle_act4_pane_t2_ParamLimits

0xe006,	// (0x00048bf9) sat_plugin_idle_act4_pane_t2

0xe019,	// (0x00048c0c) sat_plugin_idle_act4_pane_t3_ParamLimits

0xe019,	// (0x00048c0c) sat_plugin_idle_act4_pane_t3

0xe02c,	// (0x00048c1f) sat_plugin_idle_act4_pane_t4_ParamLimits

0xe02c,	// (0x00048c1f) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd79,	// (0x0004a96c) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd79,	// (0x0004a96c) sat_plugin_idle_act4_pane_t

0x5adb,	// (0x000406ce) popup_battery_window_ParamLimits

0x5adb,	// (0x000406ce) popup_battery_window

0x82a7,	// (0x00042e9a) bg_popup_sub_pane_cp25_ParamLimits

0x82a7,	// (0x00042e9a) bg_popup_sub_pane_cp25

0xe03f,	// (0x00048c32) popup_battery_window_g1_ParamLimits

0xe03f,	// (0x00048c32) popup_battery_window_g1

0xe04b,	// (0x00048c3e) popup_battery_window_t1_ParamLimits

0xe04b,	// (0x00048c3e) popup_battery_window_t1

0xe05d,	// (0x00048c50) popup_battery_window_t2_ParamLimits

0xe05d,	// (0x00048c50) popup_battery_window_t2

0x0001,

0xfd82,	// (0x0004a975) popup_battery_window_t_ParamLimits

0xfd82,	// (0x0004a975) popup_battery_window_t

0x9527,	// (0x0004411a) midp_canvas_pane_ParamLimits

0x959e,	// (0x00044191) midp_keypad_pane_ParamLimits

0x959e,	// (0x00044191) midp_keypad_pane

0x985d,	// (0x00044450) main_midp_pane_ParamLimits

0xbde3,	// (0x000469d6) signal_pane_g2_cp_ParamLimits

0xe07a,	// (0x00048c6d) aid_size_cell_midp_keypad_ParamLimits

0xe07a,	// (0x00048c6d) aid_size_cell_midp_keypad

0xe094,	// (0x00048c87) midp_keyp_game_grid_pane_ParamLimits

0xe094,	// (0x00048c87) midp_keyp_game_grid_pane

0xe0b4,	// (0x00048ca7) midp_keyp_rocker_pane_ParamLimits

0xe0b4,	// (0x00048ca7) midp_keyp_rocker_pane

0xe0ed,	// (0x00048ce0) midp_keyp_sk_left_pane_ParamLimits

0xe0ed,	// (0x00048ce0) midp_keyp_sk_left_pane

0xe147,	// (0x00048d3a) midp_keyp_sk_right_pane_ParamLimits

0xe147,	// (0x00048d3a) midp_keyp_sk_right_pane

0x7f2a,	// (0x00042b1d) bg_button_pane_cp03

0xe1a1,	// (0x00048d94) midp_keyp_sk_left_pane_g1

0x7f2a,	// (0x00042b1d) bg_button_pane_cp04

0xe1a1,	// (0x00048d94) midp_keyp_sk_right_pane_g1

0xc339,	// (0x00046f2c) midp_keyp_rocker_pane_g1

0xe1aa,	// (0x00048d9d) keyp_game_cell_pane_ParamLimits

0xe1aa,	// (0x00048d9d) keyp_game_cell_pane

0x7f2a,	// (0x00042b1d) bg_button_pane_cp02

0xe1bd,	// (0x00048db0) keyp_game_cell_pane_g1

0x5b1f,	// (0x00040712) popup_fep_vkb2_window_ParamLimits

0x5b1f,	// (0x00040712) popup_fep_vkb2_window

0x7412,	// (0x00042005) aid_size_cell_vkb2_ParamLimits

0x7412,	// (0x00042005) aid_size_cell_vkb2

0x7466,	// (0x00042059) popup_fep_vkb2_window_g1_ParamLimits

0x7466,	// (0x00042059) popup_fep_vkb2_window_g1

0x74ae,	// (0x000420a1) vkb2_area_bottom_pane_ParamLimits

0x74ae,	// (0x000420a1) vkb2_area_bottom_pane

0x74fa,	// (0x000420ed) vkb2_area_keypad_pane_ParamLimits

0x74fa,	// (0x000420ed) vkb2_area_keypad_pane

0x753c,	// (0x0004212f) vkb2_area_top_pane_ParamLimits

0x753c,	// (0x0004212f) vkb2_area_top_pane

0x75b6,	// (0x000421a9) vkb2_top_entry_pane_ParamLimits

0x75b6,	// (0x000421a9) vkb2_top_entry_pane

0x75e0,	// (0x000421d3) vkb2_top_grid_left_pane_ParamLimits

0x75e0,	// (0x000421d3) vkb2_top_grid_left_pane

0x75fe,	// (0x000421f1) vkb2_top_grid_right_pane_ParamLimits

0x75fe,	// (0x000421f1) vkb2_top_grid_right_pane

0x761c,	// (0x0004220f) vkb2_cell_keypad_pane_ParamLimits

0x761c,	// (0x0004220f) vkb2_cell_keypad_pane

0x76ed,	// (0x000422e0) vkb2_area_bottom_grid_pane_ParamLimits

0x76ed,	// (0x000422e0) vkb2_area_bottom_grid_pane

0x7713,	// (0x00042306) vkb2_area_bottom_pane_g1_ParamLimits

0x7713,	// (0x00042306) vkb2_area_bottom_pane_g1

0x7737,	// (0x0004232a) vkb2_area_bottom_pane_g2_ParamLimits

0x7737,	// (0x0004232a) vkb2_area_bottom_pane_g2

0x7765,	// (0x00042358) vkb2_area_bottom_pane_g3_ParamLimits

0x7765,	// (0x00042358) vkb2_area_bottom_pane_g3

0x0002,

0xfd87,	// (0x0004a97a) vkb2_area_bottom_pane_g_ParamLimits

0xfd87,	// (0x0004a97a) vkb2_area_bottom_pane_g

0x77c6,	// (0x000423b9) vkb2_top_cell_left_pane_ParamLimits

0x77c6,	// (0x000423b9) vkb2_top_cell_left_pane

0xe1ce,	// (0x00048dc1) vkb2_top_entry_pane_g1_ParamLimits

0xe1ce,	// (0x00048dc1) vkb2_top_entry_pane_g1

0xe1dc,	// (0x00048dcf) vkb2_top_entry_pane_t1_ParamLimits

0xe1dc,	// (0x00048dcf) vkb2_top_entry_pane_t1

0xe20e,	// (0x00048e01) vkb2_top_entry_pane_t2_ParamLimits

0xe20e,	// (0x00048e01) vkb2_top_entry_pane_t2

0xe240,	// (0x00048e33) vkb2_top_entry_pane_t3_ParamLimits

0xe240,	// (0x00048e33) vkb2_top_entry_pane_t3

0x0002,

0xfd8e,	// (0x0004a981) vkb2_top_entry_pane_t_ParamLimits

0xfd8e,	// (0x0004a981) vkb2_top_entry_pane_t

0x7813,	// (0x00042406) vkb2_top_grid_right_pane_g1_ParamLimits

0x7813,	// (0x00042406) vkb2_top_grid_right_pane_g1

0x7829,	// (0x0004241c) vkb2_top_grid_right_pane_g2_ParamLimits

0x7829,	// (0x0004241c) vkb2_top_grid_right_pane_g2

0x7841,	// (0x00042434) vkb2_top_grid_right_pane_g3_ParamLimits

0x7841,	// (0x00042434) vkb2_top_grid_right_pane_g3

0x7859,	// (0x0004244c) vkb2_top_grid_right_pane_g4_ParamLimits

0x7859,	// (0x0004244c) vkb2_top_grid_right_pane_g4

0x0003,

0xfd95,	// (0x0004a988) vkb2_top_grid_right_pane_g_ParamLimits

0xfd95,	// (0x0004a988) vkb2_top_grid_right_pane_g

0x786f,	// (0x00042462) vkb2_top_cell_left_pane_g1

0x7886,	// (0x00042479) vkb2_cell_keypad_pane_g1_ParamLimits

0x7886,	// (0x00042479) vkb2_cell_keypad_pane_g1

0xe264,	// (0x00048e57) vkb2_cell_keypad_pane_t1_ParamLimits

0xe264,	// (0x00048e57) vkb2_cell_keypad_pane_t1

0x7894,	// (0x00042487) vkb2_cell_bottom_grid_pane_ParamLimits

0x7894,	// (0x00042487) vkb2_cell_bottom_grid_pane

0x78cd,	// (0x000424c0) vkb2_cell_bottom_grid_pane_g1

0xddee,	// (0x000489e1) aid_call2_pane_cp02

0xddf6,	// (0x000489e9) aid_call_pane_cp02

0xddfe,	// (0x000489f1) clock_digital_number_pane_cp10

0xde06,	// (0x000489f9) clock_digital_number_pane_cp11

0xde0e,	// (0x00048a01) clock_digital_number_pane_cp12

0xde16,	// (0x00048a09) clock_digital_number_pane_cp13

0xde1e,	// (0x00048a11) clock_digital_separator_pane_cp10

0x8f0c,	// (0x00043aff) popup_clock_digital_analogue_window_cp2_g1

0x8f0c,	// (0x00043aff) popup_clock_digital_analogue_window_cp2_g2

0xde26,	// (0x00048a19) popup_clock_digital_analogue_window_cp2_g3

0x8f0c,	// (0x00043aff) popup_clock_digital_analogue_window_cp2_g4

0xde26,	// (0x00048a19) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd4a,	// (0x0004a93d) popup_clock_digital_analogue_window_cp2_g

0xde2e,	// (0x00048a21) popup_clock_digital_analogue_window_cp2_t1

0xde3c,	// (0x00048a2f) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd55,	// (0x0004a948) popup_clock_digital_analogue_window_cp2_t

0xc339,	// (0x00046f2c) clock_digital_number_pane_cp10_g1

0xc339,	// (0x00046f2c) clock_digital_number_pane_cp10_g2

0x0001,

0xfb3d,	// (0x0004a730) clock_digital_number_pane_cp10_g

0xc339,	// (0x00046f2c) clock_digital_separator_pane_cp10_g1

0xc339,	// (0x00046f2c) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb3d,	// (0x0004a730) clock_digital_separator_pane_cp10_g

0xdc6a,	// (0x0004885d) uniindi_top_pane_g3

0xdc7b,	// (0x0004886e) uniindi_top_pane_g4

0x76a7,	// (0x0004229a) vkb2_row_keypad_pane_ParamLimits

0x76a7,	// (0x0004229a) vkb2_row_keypad_pane

0x78e9,	// (0x000424dc) vkb2_cell_t_keypad_pane_ParamLimits

0x78e9,	// (0x000424dc) vkb2_cell_t_keypad_pane

0x78f9,	// (0x000424ec) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x78f9,	// (0x000424ec) vkb2_cell_t_keypad_pane_cp08

0x790c,	// (0x000424ff) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x790c,	// (0x000424ff) vkb2_cell_t_keypad_pane_cp09

0x7920,	// (0x00042513) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x7920,	// (0x00042513) vkb2_cell_t_keypad_pane_cp01

0x7931,	// (0x00042524) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x7931,	// (0x00042524) vkb2_cell_t_keypad_pane_cp02

0x7942,	// (0x00042535) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x7942,	// (0x00042535) vkb2_cell_t_keypad_pane_cp03

0x7953,	// (0x00042546) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x7953,	// (0x00042546) vkb2_cell_t_keypad_pane_cp04

0x7964,	// (0x00042557) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x7964,	// (0x00042557) vkb2_cell_t_keypad_pane_cp05

0x7975,	// (0x00042568) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x7975,	// (0x00042568) vkb2_cell_t_keypad_pane_cp06

0x7986,	// (0x00042579) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x7986,	// (0x00042579) vkb2_cell_t_keypad_pane_cp07

0x7997,	// (0x0004258a) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x7997,	// (0x0004258a) vkb2_cell_t_keypad_pane_cp10

0xc5b7,	// (0x000471aa) vkb2_cell_t_keypad_pane_g1

0xe27b,	// (0x00048e6e) vkb2_cell_t_keypad_pane_t1

0x7f2a,	// (0x00042b1d) popup_grid_graphic2_window

0xe28d,	// (0x00048e80) aid_size_cell_graphic2_ParamLimits

0xe28d,	// (0x00048e80) aid_size_cell_graphic2

0xe2c5,	// (0x00048eb8) bg_popup_window_pane_cp21_ParamLimits

0xe2c5,	// (0x00048eb8) bg_popup_window_pane_cp21

0xe2d3,	// (0x00048ec6) graphic2_pages_pane_ParamLimits

0xe2d3,	// (0x00048ec6) graphic2_pages_pane

0xe319,	// (0x00048f0c) grid_graphic2_control_pane_ParamLimits

0xe319,	// (0x00048f0c) grid_graphic2_control_pane

0xe357,	// (0x00048f4a) grid_graphic2_pane_ParamLimits

0xe357,	// (0x00048f4a) grid_graphic2_pane

0xe3cb,	// (0x00048fbe) cell_graphic2_pane

0x7f2a,	// (0x00042b1d) main_comp_mode_pane

0xd4ea,	// (0x000480dd) list_ai3_gene_pane_ParamLimits

0xd8b4,	// (0x000484a7) bg_popup_window_pane_cp19_ParamLimits

0xd8c0,	// (0x000484b3) bg_touch_area_indi_pane_ParamLimits

0xd8c0,	// (0x000484b3) bg_touch_area_indi_pane

0xd8d6,	// (0x000484c9) bg_touch_area_indi_pane_cp01_ParamLimits

0xd8d6,	// (0x000484c9) bg_touch_area_indi_pane_cp01

0xd8ec,	// (0x000484df) bg_touch_area_indi_pane_cp02_ParamLimits

0xd8ec,	// (0x000484df) bg_touch_area_indi_pane_cp02

0xd904,	// (0x000484f7) bg_touch_area_indi_pane_cp03_ParamLimits

0xd904,	// (0x000484f7) bg_touch_area_indi_pane_cp03

0xd91e,	// (0x00048511) popup_slider_window_g1_ParamLimits

0xd93a,	// (0x0004852d) popup_slider_window_g2_ParamLimits

0xd956,	// (0x00048549) popup_slider_window_g3_ParamLimits

0xfcdf,	// (0x0004a8d2) popup_slider_window_g_ParamLimits

0xd9b2,	// (0x000485a5) popup_slider_window_t1_ParamLimits

0xda26,	// (0x00048619) small_volume_slider_vertical_pane_ParamLimits

0xe3cb,	// (0x00048fbe) cell_graphic2_pane_ParamLimits

0xe419,	// (0x0004900c) bg_button_pane_cp10_ParamLimits

0xe419,	// (0x0004900c) bg_button_pane_cp10

0xe42c,	// (0x0004901f) bg_button_pane_cp11_ParamLimits

0xe42c,	// (0x0004901f) bg_button_pane_cp11

0xe43f,	// (0x00049032) graphic2_pages_pane_g1_ParamLimits

0xe43f,	// (0x00049032) graphic2_pages_pane_g1

0xe45a,	// (0x0004904d) graphic2_pages_pane_g2_ParamLimits

0xe45a,	// (0x0004904d) graphic2_pages_pane_g2

0x0001,

0xfda3,	// (0x0004a996) graphic2_pages_pane_g_ParamLimits

0xfda3,	// (0x0004a996) graphic2_pages_pane_g

0xe472,	// (0x00049065) graphic2_pages_pane_t1_ParamLimits

0xe472,	// (0x00049065) graphic2_pages_pane_t1

0xe48a,	// (0x0004907d) cell_graphic2_control_pane_ParamLimits

0xe48a,	// (0x0004907d) cell_graphic2_control_pane

0xe4ab,	// (0x0004909e) cell_graphic2_pane_g1_ParamLimits

0xe4ab,	// (0x0004909e) cell_graphic2_pane_g1

0xe4b8,	// (0x000490ab) cell_graphic2_pane_g2_ParamLimits

0xe4b8,	// (0x000490ab) cell_graphic2_pane_g2

0xe4c5,	// (0x000490b8) cell_graphic2_pane_g3_ParamLimits

0xe4c5,	// (0x000490b8) cell_graphic2_pane_g3

0xe4d2,	// (0x000490c5) cell_graphic2_pane_g4_ParamLimits

0xe4d2,	// (0x000490c5) cell_graphic2_pane_g4

0xe4df,	// (0x000490d2) cell_graphic2_pane_g5_ParamLimits

0xe4df,	// (0x000490d2) cell_graphic2_pane_g5

0x0004,

0xfda8,	// (0x0004a99b) cell_graphic2_pane_g_ParamLimits

0xfda8,	// (0x0004a99b) cell_graphic2_pane_g

0xe4fa,	// (0x000490ed) cell_graphic2_pane_t1_ParamLimits

0xe4fa,	// (0x000490ed) cell_graphic2_pane_t1

0x9ddb,	// (0x000449ce) grid_highlight_pane_cp11_ParamLimits

0x9ddb,	// (0x000449ce) grid_highlight_pane_cp11

0x82a7,	// (0x00042e9a) bg_button_pane_cp05

0xe523,	// (0x00049116) cell_graphic2_control_pane_g1

0xc339,	// (0x00046f2c) bg_touch_area_indi_pane_g1

0xe54b,	// (0x0004913e) aid_cmod_rocker_key_size

0xe555,	// (0x00049148) aid_cmode_itu_key_size

0xe55f,	// (0x00049152) main_cmode_video_pane

0xe569,	// (0x0004915c) main_comp_mode_itu_pane

0xe575,	// (0x00049168) main_comp_mode_rocker_pane

0xe581,	// (0x00049174) cell_cmode_rocker_pane_ParamLimits

0xe581,	// (0x00049174) cell_cmode_rocker_pane

0xe593,	// (0x00049186) cell_cmode_itu_pane_ParamLimits

0xe593,	// (0x00049186) cell_cmode_itu_pane

0x8899,	// (0x0004348c) bg_button_pane_cp06_ParamLimits

0x8899,	// (0x0004348c) bg_button_pane_cp06

0xc5b7,	// (0x000471aa) cell_cmode_rocker_pane_g1_ParamLimits

0xc5b7,	// (0x000471aa) cell_cmode_rocker_pane_g1

0xdaca,	// (0x000486bd) cell_cmode_rocker_pane_g2_ParamLimits

0xdaca,	// (0x000486bd) cell_cmode_rocker_pane_g2

0x0001,

0xfdb8,	// (0x0004a9ab) cell_cmode_rocker_pane_g_ParamLimits

0xfdb8,	// (0x0004a9ab) cell_cmode_rocker_pane_g

0x7f2a,	// (0x00042b1d) bg_button_pane_cp07

0xe5a8,	// (0x0004919b) cell_cmode_itu_pane_g1

0xe5b1,	// (0x000491a4) cell_cmode_itu_pane_t1

0xe5bf,	// (0x000491b2) cell_cmode_itu_pane_t2

0x0001,

0xfdbd,	// (0x0004a9b0) cell_cmode_itu_pane_t

0xdced,	// (0x000488e0) aid_touch_ctrl_left

0xdcf5,	// (0x000488e8) aid_touch_ctrl_right

0x7f2a,	// (0x00042b1d) compa_mode_pane

0xe5cd,	// (0x000491c0) aid_cmod_rocker_key_size_cp

0xe5d7,	// (0x000491ca) aid_cmode_itu_key_size_cp

0xe5e1,	// (0x000491d4) compa_mode_pane_g1

0xe5e9,	// (0x000491dc) compa_mode_pane_g2

0xe5f1,	// (0x000491e4) compa_mode_pane_g3

0x0002,

0xfdc2,	// (0x0004a9b5) compa_mode_pane_g

0xe5f9,	// (0x000491ec) main_comp_mode_itu_pane_cp

0xe601,	// (0x000491f4) main_comp_mode_rocker_pane_cp

0xe609,	// (0x000491fc) cell_cmode_itu_pane_cp_ParamLimits

0xe609,	// (0x000491fc) cell_cmode_itu_pane_cp

0xe61e,	// (0x00049211) cell_cmode_rocker_pane_cp_ParamLimits

0xe61e,	// (0x00049211) cell_cmode_rocker_pane_cp

0x8899,	// (0x0004348c) bg_button_pane_cp06_cp_ParamLimits

0x8899,	// (0x0004348c) bg_button_pane_cp06_cp

0xc5b7,	// (0x000471aa) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc5b7,	// (0x000471aa) cell_cmode_rocker_pane_g1_cp

0xc339,	// (0x00046f2c) cell_cmode_rocker_pane_g2_cp

0x7f2a,	// (0x00042b1d) bg_button_pane_cp07_cp

0xb2ac,	// (0x00045e9f) cell_cmode_itu_pane_g1_cp

0xe630,	// (0x00049223) cell_cmode_itu_pane_t1_cp

0xe630,	// (0x00049223) cell_cmode_itu_pane_t2_cp

0xb299,	// (0x00045e8c) settings_code_pane_cp2

0x801e,	// (0x00042c11) bg_popup_window_pane_cp3_ParamLimits

0x8481,	// (0x00043074) heading_pane_cp3_ParamLimits

0x848d,	// (0x00043080) listscroll_popup_graphic_pane_ParamLimits

0x6ee3,	// (0x00041ad6) fep_hwr_aid_pane_ParamLimits

0x7389,	// (0x00041f7c) aid_touch_sctrl_top_ParamLimits

0x7396,	// (0x00041f89) sctrl_sk_top_pane_g1_ParamLimits

0xc5b7,	// (0x000471aa) sctrl_sk_top_pane_g2_ParamLimits

0xfcf8,	// (0x0004a8eb) sctrl_sk_top_pane_g_ParamLimits

0x73a3,	// (0x00041f96) sctrl_sk_top_pane_t1_ParamLimits

0x7389,	// (0x00041f7c) aid_touch_sctrl_bottom_ParamLimits

0x73a3,	// (0x00041f96) sctrl_sk_bottom_pane_t1_ParamLimits

0xdc36,	// (0x00048829) aid_area_touch_clock

0x757e,	// (0x00042171) aid_vkb2_area_top_pane_cell_ParamLimits

0x757e,	// (0x00042171) aid_vkb2_area_top_pane_cell

0x76c9,	// (0x000422bc) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x76c9,	// (0x000422bc) aid_vkb2_area_bottom_pane_cell

0xe1c6,	// (0x00048db9) popup_char_count_window

0xe63e,	// (0x00049231) popup_char_count_window_g1

0xe647,	// (0x0004923a) popup_char_count_window_g2

0xe650,	// (0x00049243) popup_char_count_window_g3

0x0002,

0xfdc9,	// (0x0004a9bc) popup_char_count_window_g

0xe659,	// (0x0004924c) popup_char_count_window_t1

0x7444,	// (0x00042037) popup_fep_char_preview_window_ParamLimits

0x7444,	// (0x00042037) popup_fep_char_preview_window

0x759c,	// (0x0004218f) vkb2_top_candi_pane_ParamLimits

0x759c,	// (0x0004218f) vkb2_top_candi_pane

0xe667,	// (0x0004925a) cell_vkb2_top_candi_pane_ParamLimits

0xe667,	// (0x0004925a) cell_vkb2_top_candi_pane

0xa3e0,	// (0x00044fd3) bg_popup_fep_char_preview_window_ParamLimits

0xa3e0,	// (0x00044fd3) bg_popup_fep_char_preview_window

0x79ac,	// (0x0004259f) popup_fep_char_preview_window_t1_ParamLimits

0x79ac,	// (0x0004259f) popup_fep_char_preview_window_t1

0xe6b4,	// (0x000492a7) bg_popup_fep_char_preview_window_g1

0xe6bc,	// (0x000492af) bg_popup_fep_char_preview_window_g2

0xe6c4,	// (0x000492b7) bg_popup_fep_char_preview_window_g3

0xe6cc,	// (0x000492bf) bg_popup_fep_char_preview_window_g4

0xe6d4,	// (0x000492c7) bg_popup_fep_char_preview_window_g5

0x79e6,	// (0x000425d9) bg_popup_fep_char_preview_window_g6

0xe6dc,	// (0x000492cf) bg_popup_fep_char_preview_window_g7

0xe6e4,	// (0x000492d7) bg_popup_fep_char_preview_window_g8

0xe6ec,	// (0x000492df) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdd0,	// (0x0004a9c3) bg_popup_fep_char_preview_window_g

0xc5b7,	// (0x000471aa) cell_vkb2_top_candi_pane_g1_ParamLimits

0xc5b7,	// (0x000471aa) cell_vkb2_top_candi_pane_g1

0xca49,	// (0x0004763c) cell_vkb2_top_candi_pane_g2_ParamLimits

0xca49,	// (0x0004763c) cell_vkb2_top_candi_pane_g2

0xca6a,	// (0x0004765d) cell_vkb2_top_candi_pane_g3_ParamLimits

0xca6a,	// (0x0004765d) cell_vkb2_top_candi_pane_g3

0x79ee,	// (0x000425e1) cell_vkb2_top_candi_pane_g4_ParamLimits

0x79ee,	// (0x000425e1) cell_vkb2_top_candi_pane_g4

0xdf3f,	// (0x00048b32) cell_vkb2_top_candi_pane_g5_ParamLimits

0xdf3f,	// (0x00048b32) cell_vkb2_top_candi_pane_g5

0xdaca,	// (0x000486bd) cell_vkb2_top_candi_pane_g6_ParamLimits

0xdaca,	// (0x000486bd) cell_vkb2_top_candi_pane_g6

0x0005,

0xfde3,	// (0x0004a9d6) cell_vkb2_top_candi_pane_g_ParamLimits

0xfde3,	// (0x0004a9d6) cell_vkb2_top_candi_pane_g

0x7a0f,	// (0x00042602) cell_vkb2_top_candi_pane_t1

0x6c78,	// (0x0004186b) aid_size_touch_slider_mark_ParamLimits

0x6c78,	// (0x0004186b) aid_size_touch_slider_mark

0xe309,	// (0x00048efc) grid_graphic2_catg_pane_ParamLimits

0xe309,	// (0x00048efc) grid_graphic2_catg_pane

0xe3a7,	// (0x00048f9a) popup_grid_graphic2_window_t1_ParamLimits

0xe3a7,	// (0x00048f9a) popup_grid_graphic2_window_t1

0xe3b9,	// (0x00048fac) popup_grid_graphic2_window_t2_ParamLimits

0xe3b9,	// (0x00048fac) popup_grid_graphic2_window_t2

0x0001,

0xfd9e,	// (0x0004a991) popup_grid_graphic2_window_t_ParamLimits

0xfd9e,	// (0x0004a991) popup_grid_graphic2_window_t

0x82a7,	// (0x00042e9a) bg_button_pane_cp05_ParamLimits

0xe523,	// (0x00049116) cell_graphic2_control_pane_g1_ParamLimits

0xe6f4,	// (0x000492e7) cell_graphic2_catg_pane_ParamLimits

0xe6f4,	// (0x000492e7) cell_graphic2_catg_pane

0x7f2a,	// (0x00042b1d) bg_button_pane_cp12

0xe706,	// (0x000492f9) cell_graphic2_catg_pane_g1

0xdc02,	// (0x000487f5) cell_tb_ext_pane_t1_ParamLimits

0x77e6,	// (0x000423d9) vkb2_top_cell_right_narrow_pane_ParamLimits

0x77e6,	// (0x000423d9) vkb2_top_cell_right_narrow_pane

0x77fe,	// (0x000423f1) vkb2_top_cell_right_wide_pane_ParamLimits

0x77fe,	// (0x000423f1) vkb2_top_cell_right_wide_pane

0x6ed5,	// (0x00041ac8) bg_vkb2_func_pane_ParamLimits

0x6ed5,	// (0x00041ac8) bg_vkb2_func_pane

0x786f,	// (0x00042462) vkb2_top_cell_left_pane_g1_ParamLimits

0x6ed5,	// (0x00041ac8) bg_vkb2_fuc_pane_cp03_ParamLimits

0x6ed5,	// (0x00041ac8) bg_vkb2_fuc_pane_cp03

0x78cd,	// (0x000424c0) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x9d6f,	// (0x00044962) bg_vkb2_func_pane_g1

0x9d77,	// (0x0004496a) bg_vkb2_func_pane_g2

0x9d87,	// (0x0004497a) bg_vkb2_func_pane_g3

0x9d7f,	// (0x00044972) bg_vkb2_func_pane_g4

0x9d8f,	// (0x00044982) bg_vkb2_func_pane_g5

0x9d97,	// (0x0004498a) bg_vkb2_func_pane_g6

0x9d9f,	// (0x00044992) bg_vkb2_func_pane_g7

0x9da7,	// (0x0004499a) bg_vkb2_func_pane_g8

0x9d67,	// (0x0004495a) bg_vkb2_func_pane_g9

0x0008,

0xfdf0,	// (0x0004a9e3) bg_vkb2_func_pane_g

0x6ed5,	// (0x00041ac8) bg_vkb2_fuc_pane_cp01_ParamLimits

0x6ed5,	// (0x00041ac8) bg_vkb2_fuc_pane_cp01

0x786f,	// (0x00042462) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x786f,	// (0x00042462) vkb2_top_cell_right_wide_pane_g1

0x6ed5,	// (0x00041ac8) bg_vkb2_fuc_pane_cp02_ParamLimits

0x6ed5,	// (0x00041ac8) bg_vkb2_fuc_pane_cp02

0x78cd,	// (0x000424c0) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x78cd,	// (0x000424c0) vkb2_top_cell_right_narrow_pane_g1

0xd838,	// (0x0004842b) aid_touch_area_decrease_ParamLimits

0xd838,	// (0x0004842b) aid_touch_area_decrease

0xd856,	// (0x00048449) aid_touch_area_increase_ParamLimits

0xd856,	// (0x00048449) aid_touch_area_increase

0xd862,	// (0x00048455) aid_touch_area_mute_ParamLimits

0xd862,	// (0x00048455) aid_touch_area_mute

0xd886,	// (0x00048479) aid_touch_area_slider_ParamLimits

0xd886,	// (0x00048479) aid_touch_area_slider

0xd972,	// (0x00048565) popup_slider_window_g4_ParamLimits

0xd972,	// (0x00048565) popup_slider_window_g4

0xd97e,	// (0x00048571) popup_slider_window_g5_ParamLimits

0xd97e,	// (0x00048571) popup_slider_window_g5

0xd9a0,	// (0x00048593) popup_slider_window_g6_ParamLimits

0xd9a0,	// (0x00048593) popup_slider_window_g6

0xd9e0,	// (0x000485d3) popup_slider_window_t2_ParamLimits

0xd9e0,	// (0x000485d3) popup_slider_window_t2

0x0001,

0xfcec,	// (0x0004a8df) popup_slider_window_t_ParamLimits

0xfcec,	// (0x0004a8df) popup_slider_window_t

0xd9f8,	// (0x000485eb) slider_pane_ParamLimits

0xd9f8,	// (0x000485eb) slider_pane

0xe70f,	// (0x00049302) slider_pane_g1_ParamLimits

0xe70f,	// (0x00049302) slider_pane_g1

0xe723,	// (0x00049316) slider_pane_g2_ParamLimits

0xe723,	// (0x00049316) slider_pane_g2

0xe739,	// (0x0004932c) slider_pane_g3_ParamLimits

0xe739,	// (0x0004932c) slider_pane_g3

0x0003,

0xfe03,	// (0x0004a9f6) slider_pane_g_ParamLimits

0xfe03,	// (0x0004a9f6) slider_pane_g

0x6893,	// (0x00041486) popup_tb_float_extension_window_ParamLimits

0x6893,	// (0x00041486) popup_tb_float_extension_window

0xe765,	// (0x00049358) aid_size_cell_tb_float_ext

0x7f2a,	// (0x00042b1d) bg_popup_sub_window_cp28

0xe771,	// (0x00049364) grid_tb_float_ext_pane

0xe77b,	// (0x0004936e) cell_tb_float_ext_pane_ParamLimits

0xe77b,	// (0x0004936e) cell_tb_float_ext_pane

0xe795,	// (0x00049388) cell_tb_float_ext_pane_g1

0xe79e,	// (0x00049391) grid_highlight_pane_cp12

0x7016,	// (0x00041c09) cell_last_hwr_side_pane_ParamLimits

0x7016,	// (0x00041c09) cell_last_hwr_side_pane

0xc339,	// (0x00046f2c) cell_last_hwr_side_pane_g1

0xe7a7,	// (0x0004939a) cell_last_hwr_side_pane_g2

0x0001,

0xfe0c,	// (0x0004a9ff) cell_last_hwr_side_pane_g

0x7795,	// (0x00042388) vkb2_area_bottom_space_btn_pane_ParamLimits

0x7795,	// (0x00042388) vkb2_area_bottom_space_btn_pane

0xc5b7,	// (0x000471aa) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xe27b,	// (0x00048e6e) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x7a0f,	// (0x00042602) cell_vkb2_top_candi_pane_t1_ParamLimits

0x7a2e,	// (0x00042621) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x7a2e,	// (0x00042621) vkb2_area_bottom_space_btn_pane_g1

0x7a68,	// (0x0004265b) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x7a68,	// (0x0004265b) vkb2_area_bottom_space_btn_pane_g2

0x7a9e,	// (0x00042691) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x7a9e,	// (0x00042691) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe11,	// (0x0004aa04) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe11,	// (0x0004aa04) vkb2_area_bottom_space_btn_pane_g

0x6f8a,	// (0x00041b7d) cel_fep_hwr_func_pane_ParamLimits

0x6f8a,	// (0x00041b7d) cel_fep_hwr_func_pane

0x6fc6,	// (0x00041bb9) cell_hwr_side_button_pane_ParamLimits

0x6fc6,	// (0x00041bb9) cell_hwr_side_button_pane

0xdc36,	// (0x00048829) aid_area_touch_clock_ParamLimits

0x82a7,	// (0x00042e9a) bg_uniindi_top_pane_ParamLimits

0xdc48,	// (0x0004883b) uniindi_top_pane_g1_ParamLimits

0xdc5e,	// (0x00048851) uniindi_top_pane_g2_ParamLimits

0xdc6a,	// (0x0004885d) uniindi_top_pane_g3_ParamLimits

0xdc7b,	// (0x0004886e) uniindi_top_pane_g4_ParamLimits

0xfd24,	// (0x0004a917) uniindi_top_pane_g_ParamLimits

0xdc88,	// (0x0004887b) uniindi_top_pane_t1_ParamLimits

0x82a7,	// (0x00042e9a) bg_vkb2_func_pane_cp01_ParamLimits

0x82a7,	// (0x00042e9a) bg_vkb2_func_pane_cp01

0xe7b0,	// (0x000493a3) cel_fep_hwr_func_pane_g1_ParamLimits

0xe7b0,	// (0x000493a3) cel_fep_hwr_func_pane_g1

0x82a7,	// (0x00042e9a) bg_vkb2_func_pane_cp02_ParamLimits

0x82a7,	// (0x00042e9a) bg_vkb2_func_pane_cp02

0xe7b0,	// (0x000493a3) cell_hwr_side_button_pane_g1_ParamLimits

0xe7b0,	// (0x000493a3) cell_hwr_side_button_pane_g1

0x9be8,	// (0x000447db) status_pane_g4_ParamLimits

0x9be8,	// (0x000447db) status_pane_g4

0x9c02,	// (0x000447f5) status_pane_t1

0xc073,	// (0x00046c66) form2_midp_gauge_slider_cont_pane

0xc07b,	// (0x00046c6e) form2_midp_gauge_slider_pane_t1_ParamLimits

0xc08d,	// (0x00046c80) form2_midp_gauge_slider_pane_t2_ParamLimits

0xc09f,	// (0x00046c92) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf0,	// (0x0004a6e3) form2_midp_gauge_slider_pane_t_ParamLimits

0xc0b1,	// (0x00046ca4) form2_midp_slider_pane_ParamLimits

0x7404,	// (0x00041ff7) aid_size_cell_func_vkb2_ParamLimits

0x7404,	// (0x00041ff7) aid_size_cell_func_vkb2

0xe751,	// (0x00049344) slider_pane_g4_ParamLimits

0xe751,	// (0x00049344) slider_pane_g4

0x7ae8,	// (0x000426db) form2_midp_gauge_slider_pane_t2_cp01

0x7af6,	// (0x000426e9) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x7af6,	// (0x000426e9) form2_midp_gauge_slider_pane_t3_cp01

0x7b13,	// (0x00042706) form2_midp_slider_pane_cp01

0x7f2a,	// (0x00042b1d) navi_smil_pane

0xe7e9,	// (0x000493dc) navi_smil_pane_g1

0xe7f1,	// (0x000493e4) navi_smil_pane_t1

0xe7be,	// (0x000493b1) form2_midp_slider_pane_g1

0xe7c7,	// (0x000493ba) form2_midp_slider_pane_g2

0xe7cf,	// (0x000493c2) form2_midp_slider_pane_g3

0xe7be,	// (0x000493b1) form2_midp_slider_pane_g4

0xe7d7,	// (0x000493ca) form2_midp_slider_pane_g5

0x0004,

0xfe1a,	// (0x0004aa0d) form2_midp_slider_pane_g

0x7ad8,	// (0x000426cb) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x7ad8,	// (0x000426cb) vkb2_area_bottom_space_btn_pane_g4

0x9a17,	// (0x0004460a) lc0_navi_pane_ParamLimits

0x9a17,	// (0x0004460a) lc0_navi_pane

0x9a8d,	// (0x00044680) lc0_stat_indi_pane_ParamLimits

0x9a8d,	// (0x00044680) lc0_stat_indi_pane

0x9aa4,	// (0x00044697) ls0_title_pane_ParamLimits

0x9aa4,	// (0x00044697) ls0_title_pane

0x8899,	// (0x0004348c) bg_popup_sub_pane_cp14_ParamLimits

0xdc1d,	// (0x00048810) list_uniindi_pane_ParamLimits

0xdc29,	// (0x0004881c) uniindi_top_pane_ParamLimits

0xdcc5,	// (0x000488b8) list_single_uniindi_pane_g1_ParamLimits

0xdcd8,	// (0x000488cb) list_single_uniindi_pane_t1_ParamLimits

0x7b1c,	// (0x0004270f) lc0_stat_clock_pane_ParamLimits

0x7b1c,	// (0x0004270f) lc0_stat_clock_pane

0xe7ff,	// (0x000493f2) lc0_stat_indi_pane_g1_ParamLimits

0xe7ff,	// (0x000493f2) lc0_stat_indi_pane_g1

0xe80c,	// (0x000493ff) lc0_stat_indi_pane_g2_ParamLimits

0xe80c,	// (0x000493ff) lc0_stat_indi_pane_g2

0x0001,

0xfe25,	// (0x0004aa18) lc0_stat_indi_pane_g_ParamLimits

0xfe25,	// (0x0004aa18) lc0_stat_indi_pane_g

0x7b29,	// (0x0004271c) lc0_uni_indicator_pane_ParamLimits

0x7b29,	// (0x0004271c) lc0_uni_indicator_pane

0xe819,	// (0x0004940c) ls0_title_pane_g1_ParamLimits

0xe819,	// (0x0004940c) ls0_title_pane_g1

0xe82d,	// (0x00049420) ls0_title_pane_t1_ParamLimits

0xe82d,	// (0x00049420) ls0_title_pane_t1

0x7b36,	// (0x00042729) lc0_uni_indicator_pane_g1_ParamLimits

0x7b36,	// (0x00042729) lc0_uni_indicator_pane_g1

0xe863,	// (0x00049456) lc0_stat_clock_pane_t1

0x7f2a,	// (0x00042b1d) main_ai5_pane

0xe871,	// (0x00049464) ai5_sk_pane_ParamLimits

0xe871,	// (0x00049464) ai5_sk_pane

0xe87e,	// (0x00049471) cell_ai5_widget_pane_ParamLimits

0xe87e,	// (0x00049471) cell_ai5_widget_pane

0xe934,	// (0x00049527) aid_size_cell_widget_grid

0xe94a,	// (0x0004953d) bg_ai5_widget_pane_ParamLimits

0xe94a,	// (0x0004953d) bg_ai5_widget_pane

0xe9be,	// (0x000495b1) cell_ai5_widget_pane_g2

0xe9ce,	// (0x000495c1) cell_ai5_widget_pane_g3

0xe9e5,	// (0x000495d8) cell_ai5_widget_pane_g4

0xe9f1,	// (0x000495e4) cell_ai5_widget_pane_g5

0xe9fd,	// (0x000495f0) cell_ai5_widget_pane_g6

0xea09,	// (0x000495fc) cell_ai5_widget_pane_g7

0xea51,	// (0x00049644) cell_ai5_widget_pane_t1_ParamLimits

0xea51,	// (0x00049644) cell_ai5_widget_pane_t1

0xea6e,	// (0x00049661) cell_ai5_widget_pane_t2_ParamLimits

0xea6e,	// (0x00049661) cell_ai5_widget_pane_t2

0xea86,	// (0x00049679) cell_ai5_widget_pane_t3_ParamLimits

0xea86,	// (0x00049679) cell_ai5_widget_pane_t3

0xea9e,	// (0x00049691) cell_ai5_widget_pane_t4_ParamLimits

0xea9e,	// (0x00049691) cell_ai5_widget_pane_t4

0xeabb,	// (0x000496ae) cell_ai5_widget_pane_t5_ParamLimits

0xeabb,	// (0x000496ae) cell_ai5_widget_pane_t5

0xeada,	// (0x000496cd) cell_ai5_widget_pane_t6_ParamLimits

0xeada,	// (0x000496cd) cell_ai5_widget_pane_t6

0xeaec,	// (0x000496df) cell_ai5_widget_pane_t7_ParamLimits

0xeaec,	// (0x000496df) cell_ai5_widget_pane_t7

0xeb05,	// (0x000496f8) cell_ai5_widget_pane_t8_ParamLimits

0xeb05,	// (0x000496f8) cell_ai5_widget_pane_t8

0x0009,

0xfe3f,	// (0x0004aa32) cell_ai5_widget_pane_t_ParamLimits

0xfe3f,	// (0x0004aa32) cell_ai5_widget_pane_t

0xeb59,	// (0x0004974c) grid_ai5_widget_pane

0x8899,	// (0x0004348c) highlight_cell_ai5_widget_pane_ParamLimits

0x8899,	// (0x0004348c) highlight_cell_ai5_widget_pane

0xeb70,	// (0x00049763) ai5_sk_left_pane

0xeb7a,	// (0x0004976d) ai5_sk_middle_pane

0xeb84,	// (0x00049777) ai5_sk_right_pane

0xeb8e,	// (0x00049781) bg_ai5_widget_pane_g1_ParamLimits

0xeb8e,	// (0x00049781) bg_ai5_widget_pane_g1

0xeb9a,	// (0x0004978d) bg_ai5_widget_pane_g2_ParamLimits

0xeb9a,	// (0x0004978d) bg_ai5_widget_pane_g2

0xeba6,	// (0x00049799) bg_ai5_widget_pane_g3_ParamLimits

0xeba6,	// (0x00049799) bg_ai5_widget_pane_g3

0xebb2,	// (0x000497a5) bg_ai5_widget_pane_g4_ParamLimits

0xebb2,	// (0x000497a5) bg_ai5_widget_pane_g4

0xebbe,	// (0x000497b1) bg_ai5_widget_pane_g5_ParamLimits

0xebbe,	// (0x000497b1) bg_ai5_widget_pane_g5

0xebca,	// (0x000497bd) bg_ai5_widget_pane_g6_ParamLimits

0xebca,	// (0x000497bd) bg_ai5_widget_pane_g6

0xebd6,	// (0x000497c9) bg_ai5_widget_pane_g7_ParamLimits

0xebd6,	// (0x000497c9) bg_ai5_widget_pane_g7

0xebe2,	// (0x000497d5) bg_ai5_widget_pane_g8_ParamLimits

0xebe2,	// (0x000497d5) bg_ai5_widget_pane_g8

0xebee,	// (0x000497e1) bg_ai5_widget_pane_g9_ParamLimits

0xebee,	// (0x000497e1) bg_ai5_widget_pane_g9

0x0008,

0xfe54,	// (0x0004aa47) bg_ai5_widget_pane_g_ParamLimits

0xfe54,	// (0x0004aa47) bg_ai5_widget_pane_g

0xec20,	// (0x00049813) cell_shortcut_ai5_widget_pane_ParamLimits

0xec20,	// (0x00049813) cell_shortcut_ai5_widget_pane

0x951f,	// (0x00044112) bg_cell_shortcut_ai5_widget_pane

0xec31,	// (0x00049824) cell_grid_ai5_widget_pane_g1

0x951f,	// (0x00044112) highlight_cell_shortcut_ai5_widget_pane

0x9d77,	// (0x0004496a) ai5_sk_left_pane_g1

0xec3a,	// (0x0004982d) ai5_sk_left_pane_g2

0xec42,	// (0x00049835) ai5_sk_left_pane_g3

0xec4a,	// (0x0004983d) ai5_sk_left_pane_g4

0x0003,

0xfe67,	// (0x0004aa5a) ai5_sk_left_pane_g

0xec52,	// (0x00049845) ai5_sk_left_pane_t1

0x9d6f,	// (0x00044962) ai5_sk_right_pane_g1

0xec60,	// (0x00049853) ai5_sk_right_pane_g2

0xec68,	// (0x0004985b) ai5_sk_right_pane_g3

0xec70,	// (0x00049863) ai5_sk_right_pane_g4

0x0003,

0xfe70,	// (0x0004aa63) ai5_sk_right_pane_g

0xec78,	// (0x0004986b) ai5_sk_right_pane_t1

0x9d6f,	// (0x00044962) ai5_sk_middle_pane_g1

0x9d77,	// (0x0004496a) ai5_sk_middle_pane_g2

0x9d8f,	// (0x00044982) ai5_sk_middle_pane_g3

0xec68,	// (0x0004985b) ai5_sk_middle_pane_g4

0xec42,	// (0x00049835) ai5_sk_middle_pane_g5

0xec86,	// (0x00049879) ai5_sk_middle_pane_g6

0xec8e,	// (0x00049881) ai5_sk_middle_pane_g7

0x0006,

0xfe79,	// (0x0004aa6c) ai5_sk_middle_pane_g

0x98a3,	// (0x00044496) aid_touch_area_size_lc0_ParamLimits

0x98a3,	// (0x00044496) aid_touch_area_size_lc0

0x7115,	// (0x00041d08) cell_hwr_candidate_pane_t1_ParamLimits

0x98bf,	// (0x000444b2) aid_touch_navi_pane

0x9b92,	// (0x00044785) status_dt_navi_pane_ParamLimits

0x9b92,	// (0x00044785) status_dt_navi_pane

0x9b9f,	// (0x00044792) status_dt_sta_pane_ParamLimits

0x9b9f,	// (0x00044792) status_dt_sta_pane

0xec96,	// (0x00049889) dt_sta_controll_pane

0xeca3,	// (0x00049896) dt_sta_indi_pane

0xecb4,	// (0x000498a7) dt_sta_title_pane

0x82a7,	// (0x00042e9a) bg_dt_sta_indi_pane_ParamLimits

0x82a7,	// (0x00042e9a) bg_dt_sta_indi_pane

0xecc7,	// (0x000498ba) dt_sta_battery_pane

0xeccf,	// (0x000498c2) dt_sta_indi_pane_g1

0xecd8,	// (0x000498cb) dt_sta_indi_pane_g2

0xece1,	// (0x000498d4) dt_sta_indi_pane_g3

0x0002,

0xfe88,	// (0x0004aa7b) dt_sta_indi_pane_g

0xecea,	// (0x000498dd) dt_sta_signal_pane

0x8899,	// (0x0004348c) bg_dt_sta_title_pane_ParamLimits

0x8899,	// (0x0004348c) bg_dt_sta_title_pane

0xecf3,	// (0x000498e6) dt_sta_title_pane_g1

0xecfb,	// (0x000498ee) dt_sta_title_pane_t1_ParamLimits

0xecfb,	// (0x000498ee) dt_sta_title_pane_t1

0x7f2a,	// (0x00042b1d) bg_dt_sta_control_pane

0xed10,	// (0x00049903) dt_sta_controll_pane_g1

0xed19,	// (0x0004990c) bg_dt_sta_title_pane_g1

0xed22,	// (0x00049915) bg_dt_sta_title_pane_g2

0xed2b,	// (0x0004991e) bg_dt_sta_title_pane_g3

0x0002,

0xfe8f,	// (0x0004aa82) bg_dt_sta_title_pane_g

0xc339,	// (0x00046f2c) bg_dt_sta_indi_pane_g1

0xed34,	// (0x00049927) dt_sta_signal_pane_g1

0xed3c,	// (0x0004992f) dt_sta_signal_pane_g2

0x0001,

0xfe96,	// (0x0004aa89) dt_sta_signal_pane_g

0xed44,	// (0x00049937) dt_sta_battery_pane_g1

0xed4d,	// (0x00049940) dt_sta_battery_pane_t1

0xc339,	// (0x00046f2c) bg_dt_sta_control_pane_g1

0x901e,	// (0x00043c11) fep_china_uni_eep_pane

0x9026,	// (0x00043c19) fep_china_uni_entry_pane_ParamLimits

0x9036,	// (0x00043c29) popup_fep_china_uni_window_g1_ParamLimits

0x9046,	// (0x00043c39) popup_fep_china_uni_window_g2_ParamLimits

0x9046,	// (0x00043c39) popup_fep_china_uni_window_g2

0x0001,

0xf722,	// (0x0004a315) popup_fep_china_uni_window_g_ParamLimits

0xf722,	// (0x0004a315) popup_fep_china_uni_window_g

0xed5c,	// (0x0004994f) fep_china_uni_eep_pane_g1

0xed64,	// (0x00049957) fep_china_uni_eep_pane_t1

0xe7e0,	// (0x000493d3) aid_touch_area_size_smil_player

0x9a0f,	// (0x00044602) lc0_clock_pane

0x9bf6,	// (0x000447e9) status_pane_g5_ParamLimits

0x9bf6,	// (0x000447e9) status_pane_g5

0x6558,	// (0x0004114b) popup_keymap_window

0x9bb4,	// (0x000447a7) status_icon_pane

0xe9ce,	// (0x000495c1) cell_ai5_widget_pane_g3_ParamLimits

0xe9e5,	// (0x000495d8) cell_ai5_widget_pane_g4_ParamLimits

0xe9f1,	// (0x000495e4) cell_ai5_widget_pane_g5_ParamLimits

0xea15,	// (0x00049608) cell_ai5_widget_pane_g8_ParamLimits

0xea15,	// (0x00049608) cell_ai5_widget_pane_g8

0xea29,	// (0x0004961c) cell_ai5_widget_pane_g9_ParamLimits

0xea29,	// (0x0004961c) cell_ai5_widget_pane_g9

0xea3d,	// (0x00049630) cell_ai5_widget_pane_g10_ParamLimits

0xea3d,	// (0x00049630) cell_ai5_widget_pane_g10

0xed73,	// (0x00049966) status_icon_pane_g1

0x7f2a,	// (0x00042b1d) bg_popup_sub_pane_cp13

0xed7b,	// (0x0004996e) popup_keymap_window_t1

0x97e8,	// (0x000443db) control_pane_g6_ParamLimits

0x97e8,	// (0x000443db) control_pane_g6

0x97f5,	// (0x000443e8) control_pane_g7_ParamLimits

0x97f5,	// (0x000443e8) control_pane_g7

0x9802,	// (0x000443f5) control_pane_g8_ParamLimits

0x9802,	// (0x000443f5) control_pane_g8

0xec96,	// (0x00049889) dt_sta_controll_pane_ParamLimits

0xeca3,	// (0x00049896) dt_sta_indi_pane_ParamLimits

0xecb4,	// (0x000498a7) dt_sta_title_pane_ParamLimits

0x87c5,	// (0x000433b8) aid_size_touch_scroll_bar_cale

0x5aef,	// (0x000406e2) popup_discreet_window_ParamLimits

0x5aef,	// (0x000406e2) popup_discreet_window

0x5b77,	// (0x0004076a) popup_sk_window

0xa3e0,	// (0x00044fd3) bg_popup_sub_pane_cp28_ParamLimits

0xa3e0,	// (0x00044fd3) bg_popup_sub_pane_cp28

0xed89,	// (0x0004997c) popup_discreet_window_g1_ParamLimits

0xed89,	// (0x0004997c) popup_discreet_window_g1

0xeda9,	// (0x0004999c) popup_discreet_window_t1_ParamLimits

0xeda9,	// (0x0004999c) popup_discreet_window_t1

0xedc7,	// (0x000499ba) popup_discreet_window_t2_ParamLimits

0xedc7,	// (0x000499ba) popup_discreet_window_t2

0x0002,

0xfe9b,	// (0x0004aa8e) popup_discreet_window_t_ParamLimits

0xfe9b,	// (0x0004aa8e) popup_discreet_window_t

0x7b4a,	// (0x0004273d) popup_sk_window_g1

0x7b54,	// (0x00042747) popup_sk_window_g2

0x0001,

0xfea2,	// (0x0004aa95) popup_sk_window_g

0x7b5e,	// (0x00042751) popup_sk_window_t1

0x7b6c,	// (0x0004275f) popup_sk_window_t1_copy1

0xe9be,	// (0x000495b1) cell_ai5_widget_pane_g2_ParamLimits

0xeb17,	// (0x0004970a) cell_ai5_widget_pane_t9_ParamLimits

0xeb17,	// (0x0004970a) cell_ai5_widget_pane_t9

0x7f2a,	// (0x00042b1d) main_fep_fshwr2_pane

0x7b7a,	// (0x0004276d) aid_fshwr2_btn_pane

0x7b86,	// (0x00042779) aid_fshwr2_syb_pane

0x7b92,	// (0x00042785) aid_fshwr2_txt_pane

0x7b9e,	// (0x00042791) fshwr2_func_candi_pane

0x7bb3,	// (0x000427a6) fshwr2_hwr_syb_pane

0x7bc3,	// (0x000427b6) fshwr2_icf_pane

0x7f2a,	// (0x00042b1d) fshwr2_icf_bg_pane

0x7bec,	// (0x000427df) fshwr2_icf_pane_t1_ParamLimits

0x7bec,	// (0x000427df) fshwr2_icf_pane_t1

0x8f0c,	// (0x00043aff) fshwr2_func_candi_pane_g1

0xee19,	// (0x00049a0c) fshwr2_func_candi_row_pane_ParamLimits

0xee19,	// (0x00049a0c) fshwr2_func_candi_row_pane

0x7c04,	// (0x000427f7) cell_fshwr2_syb_pane_ParamLimits

0x7c04,	// (0x000427f7) cell_fshwr2_syb_pane

0xc5b7,	// (0x000471aa) fshwr2_hwr_syb_pane_g1_ParamLimits

0xc5b7,	// (0x000471aa) fshwr2_hwr_syb_pane_g1

0x7f2a,	// (0x00042b1d) bg_popup_call_pane_cp01

0x7c1a,	// (0x0004280d) fshwr2_func_candi_cell_pane_ParamLimits

0x7c1a,	// (0x0004280d) fshwr2_func_candi_cell_pane

0xee29,	// (0x00049a1c) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xee29,	// (0x00049a1c) fshwr2_func_candi_cell_bg_pane

0x7c4f,	// (0x00042842) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x7c4f,	// (0x00042842) fshwr2_func_candi_cell_pane_g1

0x7c77,	// (0x0004286a) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x7c77,	// (0x0004286a) fshwr2_func_candi_cell_pane_t1

0x7f2a,	// (0x00042b1d) bg_button_pane_cp08

0xee35,	// (0x00049a28) cell_fshwr2_syb_bg_pane

0x7c8a,	// (0x0004287d) cell_fshwr2_syb_bg_pane_g1

0x7c92,	// (0x00042885) cell_fshwr2_syb_bg_pane_t1

0x8899,	// (0x0004348c) main_tmo_pane

0xaefb,	// (0x00045aee) uni_indicator_pane_g1_ParamLimits

0xaf11,	// (0x00045b04) uni_indicator_pane_g2_ParamLimits

0xaf27,	// (0x00045b1a) uni_indicator_pane_g3_ParamLimits

0xaf3b,	// (0x00045b2e) uni_indicator_pane_g4_ParamLimits

0xaf3b,	// (0x00045b2e) uni_indicator_pane_g4

0xaf4f,	// (0x00045b42) uni_indicator_pane_g5_ParamLimits

0xaf4f,	// (0x00045b42) uni_indicator_pane_g5

0xaf4f,	// (0x00045b42) uni_indicator_pane_g6_ParamLimits

0xaf4f,	// (0x00045b42) uni_indicator_pane_g6

0xf926,	// (0x0004a519) uni_indicator_pane_g_ParamLimits

0xd814,	// (0x00048407) popup_tmo_note_window_ParamLimits

0xd814,	// (0x00048407) popup_tmo_note_window

0x8899,	// (0x0004348c) fshwr2_bg_pane

0x7c68,	// (0x0004285b) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x7c68,	// (0x0004285b) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfea7,	// (0x0004aa9a) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfea7,	// (0x0004aa9a) fshwr2_func_candi_cell_pane_g

0xc339,	// (0x00046f2c) bg_popup_window_pane_cp01

0x7ca1,	// (0x00042894) bg_popup_window_pane_g1_cp01

0xee3d,	// (0x00049a30) bg_popup_window_pane_cp22_ParamLimits

0xee3d,	// (0x00049a30) bg_popup_window_pane_cp22

0xee4b,	// (0x00049a3e) listscroll_tmo_link_pane_ParamLimits

0xee4b,	// (0x00049a3e) listscroll_tmo_link_pane

0xee8b,	// (0x00049a7e) popup_tmo_note_window_g1_ParamLimits

0xee8b,	// (0x00049a7e) popup_tmo_note_window_g1

0xee98,	// (0x00049a8b) tmo_note_info_pane_ParamLimits

0xee98,	// (0x00049a8b) tmo_note_info_pane

0xeeb2,	// (0x00049aa5) list_tmo_note_info_pane_g1_ParamLimits

0xeeb2,	// (0x00049aa5) list_tmo_note_info_pane_g1

0xeec9,	// (0x00049abc) list_tmo_note_info_pane_g2_ParamLimits

0xeec9,	// (0x00049abc) list_tmo_note_info_pane_g2

0x0001,

0xfeac,	// (0x0004aa9f) list_tmo_note_info_pane_g_ParamLimits

0xfeac,	// (0x0004aa9f) list_tmo_note_info_pane_g

0xeee5,	// (0x00049ad8) list_tmo_note_info_text_pane_ParamLimits

0xeee5,	// (0x00049ad8) list_tmo_note_info_text_pane

0xef66,	// (0x00049b59) list_tmo_link_pane

0xef73,	// (0x00049b66) scroll_pane_cp20

0xef80,	// (0x00049b73) list_single_tmo_link_pane_ParamLimits

0xef80,	// (0x00049b73) list_single_tmo_link_pane

0xef90,	// (0x00049b83) list_single_tmo_link_pane_t1

0xef9e,	// (0x00049b91) list_tmo_note_info_text_pane_t1_ParamLimits

0xef9e,	// (0x00049b91) list_tmo_note_info_text_pane_t1

0x8947,	// (0x0004353a) aid_size_touch_scroll_bar_cp01_ParamLimits

0x8947,	// (0x0004353a) aid_size_touch_scroll_bar_cp01

0x4edb,	// (0x0003face) aid_size_touch_slider_marker

0x5b5f,	// (0x00040752) popup_settings_window_ParamLimits

0x5b5f,	// (0x00040752) popup_settings_window

0x5072,	// (0x0003fc65) popup_candi_list_indi_window

0x98bf,	// (0x000444b2) aid_touch_navi_pane_ParamLimits

0x735d,	// (0x00041f50) rs_clock_indi_pane

0x7366,	// (0x00041f59) sctrl_sk_bottom_pane_ParamLimits

0x7377,	// (0x00041f6a) sctrl_sk_top_pane_ParamLimits

0x745e,	// (0x00042051) popup_fep_tooltip_window

0xe934,	// (0x00049527) aid_size_cell_widget_grid_ParamLimits

0xe9a9,	// (0x0004959c) cell_ai5_widget_pane_g1_ParamLimits

0xe9a9,	// (0x0004959c) cell_ai5_widget_pane_g1

0xe9fd,	// (0x000495f0) cell_ai5_widget_pane_g6_ParamLimits

0xea09,	// (0x000495fc) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe2a,	// (0x0004aa1d) cell_ai5_widget_pane_g_ParamLimits

0xfe2a,	// (0x0004aa1d) cell_ai5_widget_pane_g

0xeb3b,	// (0x0004972e) cell_ai5_widget_pane_t10_ParamLimits

0xeb3b,	// (0x0004972e) cell_ai5_widget_pane_t10

0xeb59,	// (0x0004974c) grid_ai5_widget_pane_ParamLimits

0xebfa,	// (0x000497ed) cell_contacts_ai5_widget_pane_ParamLimits

0xebfa,	// (0x000497ed) cell_contacts_ai5_widget_pane

0xeddc,	// (0x000499cf) popup_discreet_window_t3_ParamLimits

0xeddc,	// (0x000499cf) popup_discreet_window_t3

0x7bd8,	// (0x000427cb) popup_fshwr2_char_preview_window_ParamLimits

0x7bd8,	// (0x000427cb) popup_fshwr2_char_preview_window

0xef03,	// (0x00049af6) tmo_note_info_pane_t1

0xef18,	// (0x00049b0b) tmo_note_info_pane_t2

0xef2d,	// (0x00049b20) tmo_note_info_pane_t3

0xef42,	// (0x00049b35) tmo_note_info_pane_t4

0xef54,	// (0x00049b47) tmo_note_info_pane_t5

0x0004,

0xfeb1,	// (0x0004aaa4) tmo_note_info_pane_t

0xef66,	// (0x00049b59) list_tmo_link_pane_ParamLimits

0xef73,	// (0x00049b66) scroll_pane_cp20_ParamLimits

0x7f2a,	// (0x00042b1d) bg_popup_fep_char_preview_window_cp01

0xefb7,	// (0x00049baa) popup_fshwr2_char_preview_window_t1

0xefc5,	// (0x00049bb8) popup_candi_list_indi_window_g1

0xefce,	// (0x00049bc1) bg_cell_contacts_ai5_widget_pane

0xefda,	// (0x00049bcd) cell_contacts_ai5_widget_pane_g1

0xc9d7,	// (0x000475ca) cell_contacts_ai5_widget_pane_g2

0xefef,	// (0x00049be2) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfebc,	// (0x0004aaaf) cell_contacts_ai5_widget_pane_g

0xeffb,	// (0x00049bee) cell_contacts_ai5_widget_pane_t1

0x8899,	// (0x0004348c) highlight_cell_shortcut_ai5_widget_pane_cp01

0xf072,	// (0x00049c65) settings_container_pane

0x951f,	// (0x00044112) listscroll_set_pane_copy1

0xba22,	// (0x00046615) scroll_pane_cp121_copy1

0xf07e,	// (0x00049c71) set_content_pane_copy1

0xf086,	// (0x00049c79) aid_height_set_list_copy1_ParamLimits

0xf086,	// (0x00049c79) aid_height_set_list_copy1

0xb147,	// (0x00045d3a) aid_size_parent_copy1_ParamLimits

0xb147,	// (0x00045d3a) aid_size_parent_copy1

0xf092,	// (0x00049c85) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf092,	// (0x00049c85) button_value_adjust_pane_cp6_copy1

0x985d,	// (0x00044450) list_highlight_pane_cp2_copy1_ParamLimits

0x985d,	// (0x00044450) list_highlight_pane_cp2_copy1

0xf0a6,	// (0x00049c99) list_set_pane_copy1_ParamLimits

0xf0a6,	// (0x00049c99) list_set_pane_copy1

0xf00d,	// (0x00049c00) main_pane_set_t1_copy1_ParamLimits

0xf00d,	// (0x00049c00) main_pane_set_t1_copy1

0xf047,	// (0x00049c3a) main_pane_set_t2_copy1_ParamLimits

0xf047,	// (0x00049c3a) main_pane_set_t2_copy1

0xf153,	// (0x00049d46) main_pane_set_t3_copy1

0xf161,	// (0x00049d54) main_pane_set_t4_copy1

0xf066,	// (0x00049c59) set_content_pane_g1_copy1_ParamLimits

0xf066,	// (0x00049c59) set_content_pane_g1_copy1

0xf16f,	// (0x00049d62) setting_code_pane_copy1

0xf177,	// (0x00049d6a) setting_slider_graphic_pane_copy1

0xf177,	// (0x00049d6a) setting_slider_pane_copy1

0xf177,	// (0x00049d6a) setting_text_pane_copy1

0xf177,	// (0x00049d6a) setting_volume_pane_copy1

0xf16f,	// (0x00049d62) settings_code_pane_cp2_copy1

0xf17f,	// (0x00049d72) settings_code_pane_cp_copy1_ParamLimits

0xf17f,	// (0x00049d72) settings_code_pane_cp_copy1

0x7caa,	// (0x0004289d) volume_set_pane_copy1

0xf193,	// (0x00049d86) volume_set_pane_g10_copy1

0xf19b,	// (0x00049d8e) volume_set_pane_g1_copy1

0xf1a3,	// (0x00049d96) volume_set_pane_g2_copy1

0xf1ab,	// (0x00049d9e) volume_set_pane_g3_copy1

0xf1b3,	// (0x00049da6) volume_set_pane_g4_copy1

0xf1bb,	// (0x00049dae) volume_set_pane_g5_copy1

0xf1c3,	// (0x00049db6) volume_set_pane_g6_copy1

0xf1cb,	// (0x00049dbe) volume_set_pane_g7_copy1

0xf1d3,	// (0x00049dc6) volume_set_pane_g8_copy1

0xf1db,	// (0x00049dce) volume_set_pane_g9_copy1

0x801e,	// (0x00042c11) bg_set_opt_pane_cp_copy1_ParamLimits

0x801e,	// (0x00042c11) bg_set_opt_pane_cp_copy1

0x7cb2,	// (0x000428a5) setting_slider_pane_t1_copy1_ParamLimits

0x7cb2,	// (0x000428a5) setting_slider_pane_t1_copy1

0x7cd0,	// (0x000428c3) setting_slider_pane_t2_copy1_ParamLimits

0x7cd0,	// (0x000428c3) setting_slider_pane_t2_copy1

0x7cea,	// (0x000428dd) setting_slider_pane_t3_copy1_ParamLimits

0x7cea,	// (0x000428dd) setting_slider_pane_t3_copy1

0x7d02,	// (0x000428f5) slider_set_pane_copy1_ParamLimits

0x7d02,	// (0x000428f5) slider_set_pane_copy1

0x88e8,	// (0x000434db) set_opt_bg_pane_g1_copy2

0x88f0,	// (0x000434e3) set_opt_bg_pane_g2_copy2

0xf1e3,	// (0x00049dd6) set_opt_bg_pane_g3_copy2

0x8900,	// (0x000434f3) set_opt_bg_pane_g4_copy2

0x8908,	// (0x000434fb) set_opt_bg_pane_g5_copy2

0x8910,	// (0x00043503) set_opt_bg_pane_g6_copy2

0xf1ed,	// (0x00049de0) set_opt_bg_pane_g7_copy2

0xf1f5,	// (0x00049de8) set_opt_bg_pane_g8_copy2

0xf1ff,	// (0x00049df2) set_opt_bg_pane_g9_copy2

0x7d18,	// (0x0004290b) aid_size_touch_slider_mark_copy1_ParamLimits

0x7d18,	// (0x0004290b) aid_size_touch_slider_mark_copy1

0xf209,	// (0x00049dfc) slider_set_pane_g1_copy1

0x7d2c,	// (0x0004291f) slider_set_pane_g2_copy1

0x6c98,	// (0x0004188b) slider_set_pane_g3_copy1_ParamLimits

0x6c98,	// (0x0004188b) slider_set_pane_g3_copy1

0x6cac,	// (0x0004189f) slider_set_pane_g4_copy1_ParamLimits

0x6cac,	// (0x0004189f) slider_set_pane_g4_copy1

0x6cc4,	// (0x000418b7) slider_set_pane_g5_copy1_ParamLimits

0x6cc4,	// (0x000418b7) slider_set_pane_g5_copy1

0x6c98,	// (0x0004188b) slider_set_pane_g6_copy1_ParamLimits

0x6c98,	// (0x0004188b) slider_set_pane_g6_copy1

0x7d34,	// (0x00042927) slider_set_pane_g7_copy1_ParamLimits

0x7d34,	// (0x00042927) slider_set_pane_g7_copy1

0x7f3e,	// (0x00042b31) bg_set_opt_pane_cp2_copy1

0xf212,	// (0x00049e05) setting_slider_graphic_pane_g1_copy1

0xf21b,	// (0x00049e0e) setting_slider_graphic_pane_t1_copy1

0xf22b,	// (0x00049e1e) setting_slider_graphic_pane_t2_copy1

0xf23b,	// (0x00049e2e) slider_set_pane_cp_copy1

0xf24b,	// (0x00049e3e) input_focus_pane_cp1_copy1

0xf254,	// (0x00049e47) list_set_text_pane_copy1

0xf25c,	// (0x00049e4f) setting_text_pane_g1_copy1

0x4910,	// (0x0003f503) set_text_pane_t1_copy1

0xf24b,	// (0x00049e3e) input_focus_pane_cp2_copy1

0xf25c,	// (0x00049e4f) setting_code_pane_g1_copy1

0xf265,	// (0x00049e58) setting_code_pane_t1_copy1

0xf273,	// (0x00049e66) list_set_graphic_pane_copy1

0x7f3e,	// (0x00042b31) bg_set_opt_pane_cp4_copy1

0x921a,	// (0x00043e0d) list_set_graphic_pane_g1_copy1_ParamLimits

0x921a,	// (0x00043e0d) list_set_graphic_pane_g1_copy1

0xf285,	// (0x00049e78) list_set_graphic_pane_g2_copy1

0x9232,	// (0x00043e25) list_set_graphic_pane_t1_copy1_ParamLimits

0x9232,	// (0x00043e25) list_set_graphic_pane_t1_copy1

0xc339,	// (0x00046f2c) rs_clock_indi_pane_g1

0xf28d,	// (0x00049e80) rs_clock_indi_pane_t1

0xf29b,	// (0x00049e8e) rs_indi_pane

0xf2a3,	// (0x00049e96) rs_indi_pane_g1

0xf2ac,	// (0x00049e9f) rs_indi_pane_g2

0xf2b5,	// (0x00049ea8) rs_indi_pane_g3

0x0002,

0xfec3,	// (0x0004aab6) rs_indi_pane_g

0x951f,	// (0x00044112) bg_popup_preview_window_pane_cp03

0xf2be,	// (0x00049eb1) popup_fep_tooltip_window_t1

0xcfb5,	// (0x00047ba8) popup_note2_window_g2_ParamLimits

0xcfb5,	// (0x00047ba8) popup_note2_window_g2

0x0001,

0xfc5c,	// (0x0004a84f) popup_note2_window_g_ParamLimits

0xfc5c,	// (0x0004a84f) popup_note2_window_g

0xd4b0,	// (0x000480a3) bg_popup_sub_pane_cp11_ParamLimits

0xd4bd,	// (0x000480b0) cell_ai3_links_pane_g1_ParamLimits

0xd4d4,	// (0x000480c7) cell_ai3_links_pane_t1

0x4910,	// (0x0003f503) set_text_pane_t1_copy1_ParamLimits

0x9430,	// (0x00044023) cell_graphic_popup_pane_cp2_ParamLimits

0x9430,	// (0x00044023) cell_graphic_popup_pane_cp2

0xf2cc,	// (0x00049ebf) cell_graphic_popup_pane_g1_cp2

0x85d8,	// (0x000431cb) cell_graphic_popup_pane_g2_cp2

0xf2d4,	// (0x00049ec7) cell_graphic_popup_pane_g3_cp2

0xf2dc,	// (0x00049ecf) cell_graphic_popup_pane_t2_cp2

0x85e9,	// (0x000431dc) grid_highlight_pane_cp3_cp2

0x8c2d,	// (0x00043820) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x8899,	// (0x0004348c) main_tmo_pane_ParamLimits

0xd808,	// (0x000483fb) popup_tmo_big_image_note_window

0xe998,	// (0x0004958b) cell_ai5_widget_list_pane

0xe9a0,	// (0x00049593) cell_ai5_widget_lrg_icon_pane

0xef03,	// (0x00049af6) tmo_note_info_pane_t1_ParamLimits

0xef18,	// (0x00049b0b) tmo_note_info_pane_t2_ParamLimits

0xef2d,	// (0x00049b20) tmo_note_info_pane_t3_ParamLimits

0xef42,	// (0x00049b35) tmo_note_info_pane_t4_ParamLimits

0xef54,	// (0x00049b47) tmo_note_info_pane_t5_ParamLimits

0xfeb1,	// (0x0004aaa4) tmo_note_info_pane_t_ParamLimits

0xf072,	// (0x00049c65) settings_container_pane_ParamLimits

0xf243,	// (0x00049e36) indicator_popup_pane_cp5

0xf243,	// (0x00049e36) indicator_popup_pane_cp6

0xf273,	// (0x00049e66) list_set_graphic_pane_copy1_ParamLimits

0x7f2a,	// (0x00042b1d) bg_popup_window_pane_cp23

0xf2ea,	// (0x00049edd) popup_tmo_big_image_note_window_g1

0xf2f4,	// (0x00049ee7) popup_tmo_big_image_note_window_t1

0xf304,	// (0x00049ef7) popup_tmo_big_image_note_window_t2

0xf314,	// (0x00049f07) popup_tmo_big_image_note_window_t3

0x0002,

0xfeca,	// (0x0004aabd) popup_tmo_big_image_note_window_t

0xc339,	// (0x00046f2c) cell_ai5_widget_lrg_icon_pane_g1

0xf324,	// (0x00049f17) cell_ai5_widget_lrg_icon_pane_t1

0xf332,	// (0x00049f25) cell_ai5_widget_list_row_pane_ParamLimits

0xf332,	// (0x00049f25) cell_ai5_widget_list_row_pane

0xf349,	// (0x00049f3c) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf349,	// (0x00049f3c) cell_ai5_widget_list_row_pane_g1

0xf356,	// (0x00049f49) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf356,	// (0x00049f49) cell_ai5_widget_list_row_pane_t1

0xf387,	// (0x00049f7a) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf387,	// (0x00049f7a) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfed1,	// (0x0004aac4) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfed1,	// (0x0004aac4) cell_ai5_widget_list_row_pane_t

0x7f2a,	// (0x00042b1d) main_fep_vtchi_ss_pane

0x7d66,	// (0x00042959) popup_fep_char_pre_window

0x7d6e,	// (0x00042961) popup_fep_ituss_window

0x7d8f,	// (0x00042982) popup_fep_vkbss_window

0xf3af,	// (0x00049fa2) grid_vkbss_keypad_pane_ParamLimits

0xf3af,	// (0x00049fa2) grid_vkbss_keypad_pane

0xf3bf,	// (0x00049fb2) ituss_keypad_pane

0x7dba,	// (0x000429ad) aid_vkbss_key_offset_ParamLimits

0x7dba,	// (0x000429ad) aid_vkbss_key_offset

0x7dc6,	// (0x000429b9) cell_vkbss_key_pane_ParamLimits

0x7dc6,	// (0x000429b9) cell_vkbss_key_pane

0xf3ce,	// (0x00049fc1) bg_cell_vkbss_key_g1_ParamLimits

0xf3ce,	// (0x00049fc1) bg_cell_vkbss_key_g1

0xf3da,	// (0x00049fcd) cell_vkbss_key_3p_pane_ParamLimits

0xf3da,	// (0x00049fcd) cell_vkbss_key_3p_pane

0xf3f4,	// (0x00049fe7) cell_vkbss_key_g1_ParamLimits

0xf3f4,	// (0x00049fe7) cell_vkbss_key_g1

0xf40e,	// (0x0004a001) cell_vkbss_key_t1_ParamLimits

0xf40e,	// (0x0004a001) cell_vkbss_key_t1

0x7ddc,	// (0x000429cf) cell_ituss_key_pane_ParamLimits

0x7ddc,	// (0x000429cf) cell_ituss_key_pane

0xf439,	// (0x0004a02c) bg_cell_ituss_key_g1_ParamLimits

0xf439,	// (0x0004a02c) bg_cell_ituss_key_g1

0xf445,	// (0x0004a038) cell_ituss_key_pane_g1_ParamLimits

0xf445,	// (0x0004a038) cell_ituss_key_pane_g1

0x7ded,	// (0x000429e0) cell_ituss_key_pane_g2_ParamLimits

0x7ded,	// (0x000429e0) cell_ituss_key_pane_g2

0x0002,

0xfed8,	// (0x0004aacb) cell_ituss_key_pane_g_ParamLimits

0xfed8,	// (0x0004aacb) cell_ituss_key_pane_g

0x7e19,	// (0x00042a0c) cell_ituss_key_t1_ParamLimits

0x7e19,	// (0x00042a0c) cell_ituss_key_t1

0x7e53,	// (0x00042a46) cell_ituss_key_t2_ParamLimits

0x7e53,	// (0x00042a46) cell_ituss_key_t2

0x7e84,	// (0x00042a77) cell_ituss_key_t3_ParamLimits

0x7e84,	// (0x00042a77) cell_ituss_key_t3

0x7e53,	// (0x00042a46) cell_ituss_key_t4_ParamLimits

0x7e53,	// (0x00042a46) cell_ituss_key_t4

0x0004,

0xfedf,	// (0x0004aad2) cell_ituss_key_t_ParamLimits

0xfedf,	// (0x0004aad2) cell_ituss_key_t

0xf481,	// (0x0004a074) cell_vkbss_key_3p_pane_g1

0xf471,	// (0x0004a064) cell_vkbss_key_3p_pane_g2

0xf479,	// (0x0004a06c) cell_vkbss_key_3p_pane_g3

0x0002,

0xfeea,	// (0x0004aadd) cell_vkbss_key_3p_pane_g

0x7f2a,	// (0x00042b1d) bg_popup_fep_char_preview_window_cp02

0x7ec7,	// (0x00042aba) popup_fep_char_pre_window_t1

0xe92a,	// (0x0004951d) main_ai5_sk_pane

0xefce,	// (0x00049bc1) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xefda,	// (0x00049bcd) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xc9d7,	// (0x000475ca) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xefef,	// (0x00049be2) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfebc,	// (0x0004aaaf) cell_contacts_ai5_widget_pane_g_ParamLimits

0xeffb,	// (0x00049bee) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x8899,	// (0x0004348c) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf489,	// (0x0004a07c) main_ai5_sk_pane_g1

0xa219,	// (0x00044e0c) popup_query_code_window_g1

0x7d84,	// (0x00042977) popup_fep_vkb_icf_pane

0x7d98,	// (0x0004298b) popup_fep_vtchi_icf_pane

0xf492,	// (0x0004a085) bg_icf_pane

0xf49e,	// (0x0004a091) list_vkb_icf_pane

0xf4aa,	// (0x0004a09d) bg_icf_pane_cp01

0xf4b6,	// (0x0004a0a9) vtchi_icf_list_pane

0xf4c7,	// (0x0004a0ba) list_vkb_icf_pane_t1_ParamLimits

0xf4c7,	// (0x0004a0ba) list_vkb_icf_pane_t1

0xf4dd,	// (0x0004a0d0) vtchi_icf_list_pane_t1_ParamLimits

0xf4dd,	// (0x0004a0d0) vtchi_icf_list_pane_t1

0x7d6e,	// (0x00042961) popup_fep_ituss_window_ParamLimits

0x7d98,	// (0x0004298b) popup_fep_vtchi_icf_pane_ParamLimits

0xf3bf,	// (0x00049fb2) ituss_keypad_pane_ParamLimits

0x7dae,	// (0x000429a1) ituss_sks_pane

0xf492,	// (0x0004a085) bg_icf_pane_ParamLimits

0x7d4a,	// (0x0004293d) icf_edit_indi_pane_ParamLimits

0x7d4a,	// (0x0004293d) icf_edit_indi_pane

0xf49e,	// (0x0004a091) list_vkb_icf_pane_ParamLimits

0xf4aa,	// (0x0004a09d) bg_icf_pane_cp01_ParamLimits

0x7d59,	// (0x0004294c) icf_edit_indi_pane_cp01_ParamLimits

0x7d59,	// (0x0004294c) icf_edit_indi_pane_cp01

0xf4be,	// (0x0004a0b1) vtchi_query_pane

0xc5b7,	// (0x000471aa) icf_edit_indi_pane_g1_ParamLimits

0xc5b7,	// (0x000471aa) icf_edit_indi_pane_g1

0x7ee9,	// (0x00042adc) icf_edit_indi_pane_g2_ParamLimits

0x7ee9,	// (0x00042adc) icf_edit_indi_pane_g2

0x0001,

0xff02,	// (0x0004aaf5) icf_edit_indi_pane_g_ParamLimits

0xff02,	// (0x0004aaf5) icf_edit_indi_pane_g

0x7ef8,	// (0x00042aeb) icf_edit_indi_pane_t1

0xf4f7,	// (0x0004a0ea) bg_input_focus_pane_cp042

0x87bc,	// (0x000433af) vtchi_button_pane

0xf500,	// (0x0004a0f3) vtchi_query_pane_t1

0xf50e,	// (0x0004a101) vtchi_query_pane_t2

0xf51c,	// (0x0004a10f) vtchi_query_pane_t3

0x0002,

0xfef1,	// (0x0004aae4) vtchi_query_pane_t

0x7f2a,	// (0x00042b1d) bg_button_pane_cp13

0xf52a,	// (0x0004a11d) vtchi_button_pane_g1

0x7ed6,	// (0x00042ac9) ituss_sks_pane_g1

0x7ee1,	// (0x00042ad4) ituss_sks_pane_g2

0x0001,

0xfef8,	// (0x0004aaeb) ituss_sks_pane_g

0xf532,	// (0x0004a125) ituss_sks_pane_t1

0xf540,	// (0x0004a133) ituss_sks_pane_t2

0x0001,

0xfefd,	// (0x0004aaf0) ituss_sks_pane_t

0xbd9c,	// (0x0004698f) indicator_nsta_pane_cp_g1

0xbda5,	// (0x00046998) indicator_nsta_pane_cp_g2

0xbdad,	// (0x000469a0) indicator_nsta_pane_cp_g3

0xbdb5,	// (0x000469a8) indicator_nsta_pane_cp_g4

0xbdbd,	// (0x000469b0) indicator_nsta_pane_cp_g5

0xbdbd,	// (0x000469b0) indicator_nsta_pane_cp_g6

0x0005,

0xfaa6,	// (0x0004a699) indicator_nsta_pane_cp_g

0xe510,	// (0x00049103) cell_graphic2_pane_t2_ParamLimits

0xe510,	// (0x00049103) cell_graphic2_pane_t2

0x0001,

0xfdb3,	// (0x0004a9a6) cell_graphic2_pane_t_ParamLimits

0xfdb3,	// (0x0004a9a6) cell_graphic2_pane_t

0xe53d,	// (0x00049130) cell_graphic2_control_pane_t1

0x8fcd,	// (0x00043bc0) signal_pane_g3_ParamLimits

0x8fcd,	// (0x00043bc0) signal_pane_g3

0x8fdf,	// (0x00043bd2) signal_pane_g4_ParamLimits

0x8fdf,	// (0x00043bd2) signal_pane_g4

0xf399,	// (0x00049f8c) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf399,	// (0x00049f8c) cell_ai5_widget_list_row_pane_t3

0xf45f,	// (0x0004a052) cell_ituss_key_pane_t1_ParamLimits

0xf45f,	// (0x0004a052) cell_ituss_key_pane_t1

0x9e6c,	// (0x00044a5f) form_field_data_wide_pane_vc_t2_ParamLimits

0x9e6c,	// (0x00044a5f) form_field_data_wide_pane_vc_t2

0x9e80,	// (0x00044a73) form_field_data_wide_pane_vc_t3_ParamLimits

0x9e80,	// (0x00044a73) form_field_data_wide_pane_vc_t3

0x0002,

0xf80e,	// (0x0004a401) form_field_data_wide_pane_vc_t_ParamLimits

0xf80e,	// (0x0004a401) form_field_data_wide_pane_vc_t

0xba64,	// (0x00046657) form_field_slider_wide_pane_vc_t3_ParamLimits

0xba64,	// (0x00046657) form_field_slider_wide_pane_vc_t3

0xbb42,	// (0x00046735) form_field_popup_wide_pane_vc_t2_ParamLimits

0xbb42,	// (0x00046735) form_field_popup_wide_pane_vc_t2

0xbb59,	// (0x0004674c) form_field_popup_wide_pane_vc_t3_ParamLimits

0xbb59,	// (0x0004674c) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa95,	// (0x0004a688) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa95,	// (0x0004a688) form_field_popup_wide_pane_vc_t

0x7b7a,	// (0x0004276d) aid_fshwr2_btn_pane_ParamLimits

0x7b86,	// (0x00042779) aid_fshwr2_syb_pane_ParamLimits

0x7b92,	// (0x00042785) aid_fshwr2_txt_pane_ParamLimits

0x8899,	// (0x0004348c) fshwr2_bg_pane_ParamLimits

0x7b9e,	// (0x00042791) fshwr2_func_candi_pane_ParamLimits

0x7bb3,	// (0x000427a6) fshwr2_hwr_syb_pane_ParamLimits

0x7bc3,	// (0x000427b6) fshwr2_icf_pane_ParamLimits

0x6e78,	// (0x00041a6b) list_double_graphic_pane_vc_g4_ParamLimits

0x6e78,	// (0x00041a6b) list_double_graphic_pane_vc_g4

0x7e0d,	// (0x00042a00) cell_ituss_key_pane_g3_ParamLimits

0x7e0d,	// (0x00042a00) cell_ituss_key_pane_g3

0x7eb5,	// (0x00042aa8) cell_ituss_key_t5_ParamLimits

0x7eb5,	// (0x00042aa8) cell_ituss_key_t5
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
	};

} // end of namespace AknLayoutScalable_Elaf_php_av_qhd_prt_tch_Large

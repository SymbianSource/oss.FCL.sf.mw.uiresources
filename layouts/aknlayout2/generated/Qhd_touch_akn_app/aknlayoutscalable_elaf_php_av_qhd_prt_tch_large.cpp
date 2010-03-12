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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0003ac40 };

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
0x7b2a,	// (0x0004276a) Screen

0x7b3e,	// (0x0004277e) application_window_ParamLimits

0x7b3e,	// (0x0004277e) application_window

0x7b58,	// (0x00042798) screen_g1

0x5851,	// (0x00040491) area_bottom_pane_ParamLimits

0x5851,	// (0x00040491) area_bottom_pane

0x5911,	// (0x00040551) area_top_pane_ParamLimits

0x5911,	// (0x00040551) area_top_pane

0x59a5,	// (0x000405e5) main_pane_ParamLimits

0x59a5,	// (0x000405e5) main_pane

0x7b62,	// (0x000427a2) misc_graphics

0x94e6,	// (0x00044126) battery_pane_ParamLimits

0x94e6,	// (0x00044126) battery_pane

0xa25c,	// (0x00044e9c) bg_status_flat_pane_g8

0xa264,	// (0x00044ea4) bg_status_flat_pane_g9

0x95a8,	// (0x000441e8) context_pane_ParamLimits

0x95a8,	// (0x000441e8) context_pane

0x96be,	// (0x000442fe) navi_pane_ParamLimits

0x96be,	// (0x000442fe) navi_pane

0x973c,	// (0x0004437c) signal_pane_ParamLimits

0x973c,	// (0x0004437c) signal_pane

0x0008,

0xf884,	// (0x0004a4c4) bg_status_flat_pane_g

0x97a9,	// (0x000443e9) status_pane_g1_ParamLimits

0x97a9,	// (0x000443e9) status_pane_g1

0x97b5,	// (0x000443f5) status_pane_g2_ParamLimits

0x97b5,	// (0x000443f5) status_pane_g2

0x97c1,	// (0x00044401) status_pane_g3_ParamLimits

0x97c1,	// (0x00044401) status_pane_g3

0x0004,

0xf7ab,	// (0x0004a3eb) status_pane_g_ParamLimits

0xf7ab,	// (0x0004a3eb) status_pane_g

0x97f5,	// (0x00044435) title_pane_ParamLimits

0x97f5,	// (0x00044435) title_pane

0x9832,	// (0x00044472) uni_indicator_pane_ParamLimits

0x9832,	// (0x00044472) uni_indicator_pane

0x940e,	// (0x0004404e) bg_list_pane_ParamLimits

0x940e,	// (0x0004404e) bg_list_pane

0x62e0,	// (0x00040f20) find_pane

0x942e,	// (0x0004406e) listscroll_app_pane_ParamLimits

0x942e,	// (0x0004406e) listscroll_app_pane

0x943a,	// (0x0004407a) listscroll_form_pane

0x62e8,	// (0x00040f28) listscroll_gen_pane_ParamLimits

0x62e8,	// (0x00040f28) listscroll_gen_pane

0x943a,	// (0x0004407a) listscroll_set_pane

0x869e,	// (0x000432de) main_idle_act_pane

0x9114,	// (0x00043d54) main_idle_trad_pane

0x9114,	// (0x00043d54) main_list_empty_pane

0x9454,	// (0x00044094) main_midp_pane

0x9460,	// (0x000440a0) main_pane_g1_ParamLimits

0x9460,	// (0x000440a0) main_pane_g1

0x62fc,	// (0x00040f3c) popup_ai_message_window_ParamLimits

0x62fc,	// (0x00040f3c) popup_ai_message_window

0x63a2,	// (0x00040fe2) popup_fep_china_uni_window_ParamLimits

0x63a2,	// (0x00040fe2) popup_fep_china_uni_window

0x63fe,	// (0x0004103e) popup_fep_japan_candidate_window_ParamLimits

0x63fe,	// (0x0004103e) popup_fep_japan_candidate_window

0x641e,	// (0x0004105e) popup_fep_japan_predictive_window_ParamLimits

0x641e,	// (0x0004105e) popup_fep_japan_predictive_window

0x644e,	// (0x0004108e) popup_find_window

0x645b,	// (0x0004109b) popup_grid_graphic_window_ParamLimits

0x645b,	// (0x0004109b) popup_grid_graphic_window

0x6483,	// (0x000410c3) popup_large_graphic_colour_window

0x64a9,	// (0x000410e9) popup_menu_window_ParamLimits

0x64a9,	// (0x000410e9) popup_menu_window

0x6661,	// (0x000412a1) popup_note_image_window

0x664d,	// (0x0004128d) popup_note_wait_window_ParamLimits

0x664d,	// (0x0004128d) popup_note_wait_window

0x664d,	// (0x0004128d) popup_note_window_ParamLimits

0x664d,	// (0x0004128d) popup_note_window

0x66b7,	// (0x000412f7) popup_query_code_window_ParamLimits

0x66b7,	// (0x000412f7) popup_query_code_window

0x66cb,	// (0x0004130b) popup_query_data_code_window_ParamLimits

0x66cb,	// (0x0004130b) popup_query_data_code_window

0x66e8,	// (0x00041328) popup_query_data_window_ParamLimits

0x66e8,	// (0x00041328) popup_query_data_window

0x6704,	// (0x00041344) popup_query_sat_info_window_ParamLimits

0x6704,	// (0x00041344) popup_query_sat_info_window

0x673d,	// (0x0004137d) popup_snote_single_graphic_window_ParamLimits

0x673d,	// (0x0004137d) popup_snote_single_graphic_window

0x673d,	// (0x0004137d) popup_snote_single_text_window_ParamLimits

0x673d,	// (0x0004137d) popup_snote_single_text_window

0x6752,	// (0x00041392) popup_sub_window_general

0x6882,	// (0x000414c2) popup_window_general_ParamLimits

0x6882,	// (0x000414c2) popup_window_general

0x946e,	// (0x000440ae) power_save_pane

0x6180,	// (0x00040dc0) control_pane_g1_ParamLimits

0x6180,	// (0x00040dc0) control_pane_g1

0x61a7,	// (0x00040de7) control_pane_g2_ParamLimits

0x61a7,	// (0x00040de7) control_pane_g2

0x93d1,	// (0x00044011) control_pane_g3_ParamLimits

0x93d1,	// (0x00044011) control_pane_g3

0x0007,

0xf793,	// (0x0004a3d3) control_pane_g_ParamLimits

0xf793,	// (0x0004a3d3) control_pane_g

0x61ed,	// (0x00040e2d) control_pane_t1_ParamLimits

0x61ed,	// (0x00040e2d) control_pane_t1

0x6239,	// (0x00040e79) control_pane_t2_ParamLimits

0x6239,	// (0x00040e79) control_pane_t2

0x0002,

0xf7a4,	// (0x0004a3e4) control_pane_t_ParamLimits

0xf7a4,	// (0x0004a3e4) control_pane_t

0x92f2,	// (0x00043f32) navi_navi_volume_pane_cp1

0x92fb,	// (0x00043f3b) status_small_icon_pane

0x9303,	// (0x00043f43) status_small_pane_g1_ParamLimits

0x9303,	// (0x00043f43) status_small_pane_g1

0x9337,	// (0x00043f77) status_small_pane_g2_ParamLimits

0x9337,	// (0x00043f77) status_small_pane_g2

0x9343,	// (0x00043f83) status_small_pane_g3_ParamLimits

0x9343,	// (0x00043f83) status_small_pane_g3

0x934f,	// (0x00043f8f) status_small_pane_g4_ParamLimits

0x934f,	// (0x00043f8f) status_small_pane_g4

0x935b,	// (0x00043f9b) status_small_pane_g5_ParamLimits

0x935b,	// (0x00043f9b) status_small_pane_g5

0x936a,	// (0x00043faa) status_small_pane_g6_ParamLimits

0x936a,	// (0x00043faa) status_small_pane_g6

0x0007,

0xf782,	// (0x0004a3c2) status_small_pane_g_ParamLimits

0xf782,	// (0x0004a3c2) status_small_pane_g

0x939a,	// (0x00043fda) status_small_pane_t1

0x93bd,	// (0x00043ffd) status_small_wait_pane_ParamLimits

0x93bd,	// (0x00043ffd) status_small_wait_pane

0x8ba3,	// (0x000437e3) aid_levels_signal_ParamLimits

0x8ba3,	// (0x000437e3) aid_levels_signal

0x8bb2,	// (0x000437f2) signal_pane_g1_ParamLimits

0x8bb2,	// (0x000437f2) signal_pane_g1

0x8bc7,	// (0x00043807) signal_pane_g2_ParamLimits

0x8bc7,	// (0x00043807) signal_pane_g2

0x0003,

0xf713,	// (0x0004a353) signal_pane_g_ParamLimits

0xf713,	// (0x0004a353) signal_pane_g

0x8bff,	// (0x0004383f) context_pane_g1

0x7b6c,	// (0x000427ac) title_pane_g1

0x7ba2,	// (0x000427e2) title_pane_t1

0x7c0a,	// (0x0004284a) title_pane_t2

0x7c30,	// (0x00042870) title_pane_t3

0x0002,

0xf55d,	// (0x0004a19d) title_pane_t

0x984a,	// (0x0004448a) aid_levels_battery_ParamLimits

0x984a,	// (0x0004448a) aid_levels_battery

0x985b,	// (0x0004449b) battery_pane_g1_ParamLimits

0x985b,	// (0x0004449b) battery_pane_g1

0x9871,	// (0x000444b1) battery_pane_g2_ParamLimits

0x9871,	// (0x000444b1) battery_pane_g2

0x0001,

0xf7b6,	// (0x0004a3f6) battery_pane_g_ParamLimits

0xf7b6,	// (0x0004a3f6) battery_pane_g

0xab83,	// (0x000457c3) uni_indicator_pane_g1

0xab98,	// (0x000457d8) uni_indicator_pane_g2

0xabae,	// (0x000457ee) uni_indicator_pane_g3

0x0005,

0xf92c,	// (0x0004a56c) uni_indicator_pane_g

0x8f92,	// (0x00043bd2) navi_icon_pane_ParamLimits

0x8f92,	// (0x00043bd2) navi_icon_pane

0x8edb,	// (0x00043b1b) navi_midp_pane

0x8fae,	// (0x00043bee) navi_navi_pane

0x8fb8,	// (0x00043bf8) navi_text_pane_ParamLimits

0x8fb8,	// (0x00043bf8) navi_text_pane

0x7b58,	// (0x00042798) status_small_wait_pane_g1

0x805f,	// (0x00042c9f) status_small_wait_pane_g2

0x0001,

0xf927,	// (0x0004a567) status_small_wait_pane_g

0xa8a8,	// (0x000454e8) navi_navi_icon_text_pane

0xa8b0,	// (0x000454f0) navi_navi_pane_g1_ParamLimits

0xa8b0,	// (0x000454f0) navi_navi_pane_g1

0xa8c2,	// (0x00045502) navi_navi_pane_g2_ParamLimits

0xa8c2,	// (0x00045502) navi_navi_pane_g2

0x0001,

0xf8f5,	// (0x0004a535) navi_navi_pane_g_ParamLimits

0xf8f5,	// (0x0004a535) navi_navi_pane_g

0xa8d4,	// (0x00045514) navi_navi_tabs_pane

0xa8dd,	// (0x0004551d) navi_navi_text_pane

0xa8a8,	// (0x000454e8) navi_navi_volume_pane

0xa884,	// (0x000454c4) navi_text_pane_t1

0xa878,	// (0x000454b8) navi_icon_pane_g1

0xa7da,	// (0x0004541a) navi_navi_text_pane_t1

0x6b2e,	// (0x0004176e) navi_navi_volume_pane_g1

0x6b36,	// (0x00041776) volume_small_pane

0xa740,	// (0x00045380) navi_navi_icon_text_pane_g1

0xa748,	// (0x00045388) navi_navi_icon_text_pane_t1

0x8fae,	// (0x00043bee) navi_tabs_2_long_pane

0x8fae,	// (0x00043bee) navi_tabs_2_pane

0x8fae,	// (0x00043bee) navi_tabs_3_long_pane

0x8fae,	// (0x00043bee) navi_tabs_3_pane

0x8fae,	// (0x00043bee) navi_tabs_4_pane

0x6b0e,	// (0x0004174e) tabs_2_active_pane_ParamLimits

0x6b0e,	// (0x0004174e) tabs_2_active_pane

0x6b1e,	// (0x0004175e) tabs_2_passive_pane_ParamLimits

0x6b1e,	// (0x0004175e) tabs_2_passive_pane

0x6adc,	// (0x0004171c) tabs_3_active_pane_ParamLimits

0x6adc,	// (0x0004171c) tabs_3_active_pane

0x6aec,	// (0x0004172c) tabs_3_passive_pane_ParamLimits

0x6aec,	// (0x0004172c) tabs_3_passive_pane

0x6afd,	// (0x0004173d) tabs_3_passive_pane_cp_ParamLimits

0x6afd,	// (0x0004173d) tabs_3_passive_pane_cp

0x6a98,	// (0x000416d8) tabs_4_active_pane_ParamLimits

0x6a98,	// (0x000416d8) tabs_4_active_pane

0x6aa9,	// (0x000416e9) tabs_4_passive_pane_ParamLimits

0x6aa9,	// (0x000416e9) tabs_4_passive_pane

0x6aba,	// (0x000416fa) tabs_4_passive_pane_cp_ParamLimits

0x6aba,	// (0x000416fa) tabs_4_passive_pane_cp

0x6acb,	// (0x0004170b) tabs_4_passive_pane_cp2_ParamLimits

0x6acb,	// (0x0004170b) tabs_4_passive_pane_cp2

0x6a74,	// (0x000416b4) tabs_2_long_active_pane_ParamLimits

0x6a74,	// (0x000416b4) tabs_2_long_active_pane

0x6a86,	// (0x000416c6) tabs_2_long_passive_pane_ParamLimits

0x6a86,	// (0x000416c6) tabs_2_long_passive_pane

0x6a35,	// (0x00041675) tabs_3_long_active_pane_ParamLimits

0x6a35,	// (0x00041675) tabs_3_long_active_pane

0x6a48,	// (0x00041688) tabs_3_long_passive_pane_ParamLimits

0x6a48,	// (0x00041688) tabs_3_long_passive_pane

0x6a61,	// (0x000416a1) tabs_3_long_passive_pane_cp_ParamLimits

0x6a61,	// (0x000416a1) tabs_3_long_passive_pane_cp

0x69db,	// (0x0004161b) volume_small_pane_g1

0x69e4,	// (0x00041624) volume_small_pane_g2

0x69ed,	// (0x0004162d) volume_small_pane_g3

0x69f6,	// (0x00041636) volume_small_pane_g4

0x69ff,	// (0x0004163f) volume_small_pane_g5

0x6a08,	// (0x00041648) volume_small_pane_g6

0x6a11,	// (0x00041651) volume_small_pane_g7

0x6a1a,	// (0x0004165a) volume_small_pane_g8

0x6a23,	// (0x00041663) volume_small_pane_g9

0x6a2c,	// (0x0004166c) volume_small_pane_g10

0x0009,

0xf8c1,	// (0x0004a501) volume_small_pane_g

0x7c42,	// (0x00042882) bg_active_tab_pane_cp2_ParamLimits

0x7c42,	// (0x00042882) bg_active_tab_pane_cp2

0x7c50,	// (0x00042890) tabs_3_active_pane_g1

0x7c58,	// (0x00042898) tabs_3_active_pane_t1

0x7c42,	// (0x00042882) bg_passive_tab_pane_cp2_ParamLimits

0x7c42,	// (0x00042882) bg_passive_tab_pane_cp2

0x7c50,	// (0x00042890) tabs_3_passive_pane_g1

0x7c58,	// (0x00042898) tabs_3_passive_pane_t1

0x7c42,	// (0x00042882) bg_active_tab_pane_cp3_ParamLimits

0x7c42,	// (0x00042882) bg_active_tab_pane_cp3

0x7c6a,	// (0x000428aa) tabs_4_active_pane_g1

0x7c72,	// (0x000428b2) tabs_4_active_pane_t1

0x7c42,	// (0x00042882) bg_passive_tab_pane_cp3_ParamLimits

0x7c42,	// (0x00042882) bg_passive_tab_pane_cp3

0x7c6a,	// (0x000428aa) tabs_4_1_passive_pane_g1

0x7c72,	// (0x000428b2) tabs_4_1_passive_pane_t1

0x9454,	// (0x00044094) list_highlight_pane_cp2

0xae4e,	// (0x00045a8e) list_set_pane_ParamLimits

0xae4e,	// (0x00045a8e) list_set_pane

0xaef4,	// (0x00045b34) main_pane_set_t1_ParamLimits

0xaef4,	// (0x00045b34) main_pane_set_t1

0xaf14,	// (0x00045b54) main_pane_set_t2_ParamLimits

0xaf14,	// (0x00045b54) main_pane_set_t2

0xaf28,	// (0x00045b68) main_pane_set_t3_ParamLimits

0xaf28,	// (0x00045b68) main_pane_set_t3

0xaf3a,	// (0x00045b7a) main_pane_set_t4_ParamLimits

0xaf3a,	// (0x00045b7a) main_pane_set_t4

0x0003,

0xf991,	// (0x0004a5d1) main_pane_set_t_ParamLimits

0xf991,	// (0x0004a5d1) main_pane_set_t

0xaf4c,	// (0x00045b8c) setting_code_pane

0xaf58,	// (0x00045b98) setting_slider_graphic_pane

0xaf58,	// (0x00045b98) setting_slider_pane

0xaf58,	// (0x00045b98) setting_text_pane

0xaf58,	// (0x00045b98) setting_volume_pane

0x5bea,	// (0x0004082a) volume_set_pane

0x7c42,	// (0x00042882) bg_set_opt_pane_cp

0x5bf2,	// (0x00040832) setting_slider_pane_t1

0x5c0b,	// (0x0004084b) setting_slider_pane_t2

0x5c25,	// (0x00040865) setting_slider_pane_t3

0x0002,

0xf564,	// (0x0004a1a4) setting_slider_pane_t

0x5c3d,	// (0x0004087d) slider_set_pane

0x7b62,	// (0x000427a2) bg_set_opt_pane_cp2

0x7c84,	// (0x000428c4) setting_slider_graphic_pane_g1

0x5c53,	// (0x00040893) setting_slider_graphic_pane_t1

0x5c63,	// (0x000408a3) setting_slider_graphic_pane_t2

0x0001,

0xf56b,	// (0x0004a1ab) setting_slider_graphic_pane_t

0x5c73,	// (0x000408b3) slider_set_pane_cp

0x7b62,	// (0x000427a2) input_focus_pane_cp1

0xae0d,	// (0x00045a4d) list_set_text_pane

0x7b58,	// (0x00042798) setting_text_pane_g1

0x7b62,	// (0x000427a2) input_focus_pane_cp2

0x7b58,	// (0x00042798) setting_code_pane_g1

0x7c8d,	// (0x000428cd) setting_code_pane_t1

0x4a06,	// (0x0003f646) set_text_pane_t1_ParamLimits

0x4a06,	// (0x0003f646) set_text_pane_t1

0x8515,	// (0x00043155) set_opt_bg_pane_g1

0x851d,	// (0x0004315d) set_opt_bg_pane_g2

0xade7,	// (0x00045a27) set_opt_bg_pane_g3

0x852d,	// (0x0004316d) set_opt_bg_pane_g4

0x8535,	// (0x00043175) set_opt_bg_pane_g5

0x853d,	// (0x0004317d) set_opt_bg_pane_g6

0xadf1,	// (0x00045a31) set_opt_bg_pane_g7

0xadf9,	// (0x00045a39) set_opt_bg_pane_g8

0xae03,	// (0x00045a43) set_opt_bg_pane_g9

0x0008,

0xf97e,	// (0x0004a5be) set_opt_bg_pane_g

0xad98,	// (0x000459d8) slider_set_pane_g1

0x6ba3,	// (0x000417e3) slider_set_pane_g2

0x0006,

0xf96f,	// (0x0004a5af) slider_set_pane_g

0x6b3f,	// (0x0004177f) volume_set_pane_g1

0x6b47,	// (0x00041787) volume_set_pane_g2

0x6b4f,	// (0x0004178f) volume_set_pane_g3

0x6b57,	// (0x00041797) volume_set_pane_g4

0x6b5f,	// (0x0004179f) volume_set_pane_g5

0x6b67,	// (0x000417a7) volume_set_pane_g6

0x6b6f,	// (0x000417af) volume_set_pane_g7

0x6b77,	// (0x000417b7) volume_set_pane_g8

0x6b7f,	// (0x000417bf) volume_set_pane_g9

0x6b87,	// (0x000417c7) volume_set_pane_g10

0x0009,

0xf947,	// (0x0004a587) volume_set_pane_g

0x7c9b,	// (0x000428db) indicator_pane_ParamLimits

0x7c9b,	// (0x000428db) indicator_pane

0x7ca7,	// (0x000428e7) main_idle_pane_g2_ParamLimits

0x7ca7,	// (0x000428e7) main_idle_pane_g2

0x7ccf,	// (0x0004290f) main_pane_idle_g1_ParamLimits

0x7ccf,	// (0x0004290f) main_pane_idle_g1

0x7cdc,	// (0x0004291c) popup_clock_digital_analogue_window_ParamLimits

0x7cdc,	// (0x0004291c) popup_clock_digital_analogue_window

0x7cf3,	// (0x00042933) soft_indicator_pane_ParamLimits

0x7cf3,	// (0x00042933) soft_indicator_pane

0x7cff,	// (0x0004293f) wallpaper_pane_ParamLimits

0x7cff,	// (0x0004293f) wallpaper_pane

0x7b58,	// (0x00042798) wallpaper_pane_g1

0x7d13,	// (0x00042953) indicator_pane_g1_ParamLimits

0x7d13,	// (0x00042953) indicator_pane_g1

0xb1cb,	// (0x00045e0b) navi_navi_icon_text_pane_srt_g1

0x7d2e,	// (0x0004296e) soft_indicator_pane_t1

0x7d48,	// (0x00042988) aid_ps_area_pane

0x7d59,	// (0x00042999) aid_ps_clock_pane

0x7d67,	// (0x000429a7) aid_ps_indicator_pane

0x7d73,	// (0x000429b3) indicator_ps_pane_ParamLimits

0x7d73,	// (0x000429b3) indicator_ps_pane

0x7d82,	// (0x000429c2) power_save_pane_g1_ParamLimits

0x7d82,	// (0x000429c2) power_save_pane_g1

0x7d8e,	// (0x000429ce) power_save_pane_g2_ParamLimits

0x7d8e,	// (0x000429ce) power_save_pane_g2

0x5805,	// (0x00040445) aid_navinavi_width_pane

0x7d48,	// (0x00042988) aid_ps_area_pane_ParamLimits

0x0001,

0xf570,	// (0x0004a1b0) power_save_pane_g_ParamLimits

0xf570,	// (0x0004a1b0) power_save_pane_g

0x7d9c,	// (0x000429dc) power_save_pane_t1_ParamLimits

0x7d9c,	// (0x000429dc) power_save_pane_t1

0x7d59,	// (0x00042999) aid_ps_clock_pane_ParamLimits

0x7d67,	// (0x000429a7) aid_ps_indicator_pane_ParamLimits

0x7dae,	// (0x000429ee) power_save_pane_t4_ParamLimits

0x7dae,	// (0x000429ee) power_save_pane_t4

0x0001,

0xf575,	// (0x0004a1b5) power_save_pane_t_ParamLimits

0xf575,	// (0x0004a1b5) power_save_pane_t

0x7dd8,	// (0x00042a18) power_save_t3_ParamLimits

0x7dd8,	// (0x00042a18) power_save_t3

0x7dc3,	// (0x00042a03) power_save_t2_ParamLimits

0x7dc3,	// (0x00042a03) power_save_t2

0x7ded,	// (0x00042a2d) indicator_ps_pane_g1

0x7df6,	// (0x00042a36) ai_gene_pane_ParamLimits

0x7df6,	// (0x00042a36) ai_gene_pane

0x7e02,	// (0x00042a42) ai_links_pane_ParamLimits

0x7e02,	// (0x00042a42) ai_links_pane

0x7e0e,	// (0x00042a4e) indicator_pane_cp1_ParamLimits

0x7e0e,	// (0x00042a4e) indicator_pane_cp1

0x7e1a,	// (0x00042a5a) main_pane_idle_g1_cp_ParamLimits

0x7e1a,	// (0x00042a5a) main_pane_idle_g1_cp

0x7e26,	// (0x00042a66) popup_ai_links_title_window

0x7e2f,	// (0x00042a6f) soft_indicator_pane_cp1_ParamLimits

0x7e2f,	// (0x00042a6f) soft_indicator_pane_cp1

0xab71,	// (0x000457b1) ai_links_pane_g1

0xab7a,	// (0x000457ba) grid_ai_links_pane

0xab54,	// (0x00045794) ai_gene_pane_1

0xab5f,	// (0x0004579f) ai_gene_pane_2

0xab68,	// (0x000457a8) list_highlight_pane_cp4

0xab38,	// (0x00045778) cell_ai_link_pane_ParamLimits

0xab38,	// (0x00045778) cell_ai_link_pane

0xab30,	// (0x00045770) cell_ai_link_pane_g1

0x805f,	// (0x00042c9f) cell_ai_link_pane_g2

0x0001,

0xf922,	// (0x0004a562) cell_ai_link_pane_g

0x7b62,	// (0x000427a2) grid_highlight_cp2

0x7b62,	// (0x000427a2) bg_popup_sub_pane_cp1

0x7e49,	// (0x00042a89) popup_ai_links_title_window_t1

0xaa7e,	// (0x000456be) ai_gene_pane_1_g1_ParamLimits

0xaa7e,	// (0x000456be) ai_gene_pane_1_g1

0xaa8a,	// (0x000456ca) ai_gene_pane_1_g2_ParamLimits

0xaa8a,	// (0x000456ca) ai_gene_pane_1_g2

0x0001,

0xf918,	// (0x0004a558) ai_gene_pane_1_g_ParamLimits

0xf918,	// (0x0004a558) ai_gene_pane_1_g

0xaa97,	// (0x000456d7) ai_gene_pane_1_t1_ParamLimits

0xaa97,	// (0x000456d7) ai_gene_pane_1_t1

0xaacb,	// (0x0004570b) grid_ai_soft_ind_pane

0xaa69,	// (0x000456a9) ai_gene_pane_2_t1_ParamLimits

0xaa69,	// (0x000456a9) ai_gene_pane_2_t1

0x7e58,	// (0x00042a98) main_pane_empty_t1_ParamLimits

0x7e58,	// (0x00042a98) main_pane_empty_t1

0x7e70,	// (0x00042ab0) main_pane_empty_t2_ParamLimits

0x7e70,	// (0x00042ab0) main_pane_empty_t2

0x7e85,	// (0x00042ac5) main_pane_empty_t3_ParamLimits

0x7e85,	// (0x00042ac5) main_pane_empty_t3

0x7e97,	// (0x00042ad7) main_pane_empty_t4_ParamLimits

0x7e97,	// (0x00042ad7) main_pane_empty_t4

0x7ea9,	// (0x00042ae9) main_pane_empty_t5_ParamLimits

0x7ea9,	// (0x00042ae9) main_pane_empty_t5

0x0004,

0xf57a,	// (0x0004a1ba) main_pane_empty_t_ParamLimits

0xf57a,	// (0x0004a1ba) main_pane_empty_t

0x8566,	// (0x000431a6) bg_popup_window_pane_ParamLimits

0x8566,	// (0x000431a6) bg_popup_window_pane

0xa7e8,	// (0x00045428) find_popup_pane_cp2_ParamLimits

0xa7e8,	// (0x00045428) find_popup_pane_cp2

0xa7f4,	// (0x00045434) heading_pane_ParamLimits

0xa7f4,	// (0x00045434) heading_pane

0x7b62,	// (0x000427a2) bg_popup_sub_pane

0xa762,	// (0x000453a2) bg_popup_window_pane_g1_ParamLimits

0xa762,	// (0x000453a2) bg_popup_window_pane_g1

0xa76e,	// (0x000453ae) bg_popup_window_pane_g2_ParamLimits

0xa76e,	// (0x000453ae) bg_popup_window_pane_g2

0xa77a,	// (0x000453ba) bg_popup_window_pane_g3_ParamLimits

0xa77a,	// (0x000453ba) bg_popup_window_pane_g3

0xa786,	// (0x000453c6) bg_popup_window_pane_g4_ParamLimits

0xa786,	// (0x000453c6) bg_popup_window_pane_g4

0xa792,	// (0x000453d2) bg_popup_window_pane_g5_ParamLimits

0xa792,	// (0x000453d2) bg_popup_window_pane_g5

0xa79e,	// (0x000453de) bg_popup_window_pane_g6_ParamLimits

0xa79e,	// (0x000453de) bg_popup_window_pane_g6

0xa7aa,	// (0x000453ea) bg_popup_window_pane_g7_ParamLimits

0xa7aa,	// (0x000453ea) bg_popup_window_pane_g7

0xa7b6,	// (0x000453f6) bg_popup_window_pane_g8_ParamLimits

0xa7b6,	// (0x000453f6) bg_popup_window_pane_g8

0xa7c2,	// (0x00045402) bg_popup_window_pane_g9_ParamLimits

0xa7c2,	// (0x00045402) bg_popup_window_pane_g9

0xa7ce,	// (0x0004540e) bg_popup_window_pane_g10_ParamLimits

0xa7ce,	// (0x0004540e) bg_popup_window_pane_g10

0x0009,

0xf8e0,	// (0x0004a520) bg_popup_window_pane_g_ParamLimits

0xf8e0,	// (0x0004a520) bg_popup_window_pane_g

0xa6f7,	// (0x00045337) bg_popup_heading_pane_ParamLimits

0xa6f7,	// (0x00045337) bg_popup_heading_pane

0x6c8d,	// (0x000418cd) tabs_4_passive_pane_cp_srt_ParamLimits

0x6c8d,	// (0x000418cd) tabs_4_passive_pane_cp_srt

0x6c9f,	// (0x000418df) tabs_4_passive_pane_srt_ParamLimits

0xa70b,	// (0x0004534b) heading_pane_g2

0x6c9f,	// (0x000418df) tabs_4_passive_pane_srt

0x9454,	// (0x00044094) bg_passive_tab_pane_cp3_srt_ParamLimits

0x9454,	// (0x00044094) bg_passive_tab_pane_cp3_srt

0xa713,	// (0x00045353) heading_pane_t1_ParamLimits

0xa713,	// (0x00045353) heading_pane_t1

0xa72a,	// (0x0004536a) heading_pane_t2_ParamLimits

0xa72a,	// (0x0004536a) heading_pane_t2

0x0001,

0xf8db,	// (0x0004a51b) heading_pane_t_ParamLimits

0xf8db,	// (0x0004a51b) heading_pane_t

0xa224,	// (0x00044e64) bg_popup_heading_pane_g1

0xa2d3,	// (0x00044f13) bg_popup_heading_pane_g2

0xa2dd,	// (0x00044f1d) bg_popup_heading_pane_g3

0xa2e7,	// (0x00044f27) bg_popup_heading_pane_g4

0xa2f1,	// (0x00044f31) bg_popup_heading_pane_g5

0xa2fb,	// (0x00044f3b) bg_popup_heading_pane_g6

0xa303,	// (0x00044f43) bg_popup_heading_pane_g7

0xa30b,	// (0x00044f4b) bg_popup_heading_pane_g8

0xa315,	// (0x00044f55) bg_popup_heading_pane_g9

0x0008,

0xf897,	// (0x0004a4d7) bg_popup_heading_pane_g

0x9955,	// (0x00044595) bg_popup_sub_pane_g1

0x995d,	// (0x0004459d) bg_popup_sub_pane_g2

0x9965,	// (0x000445a5) bg_popup_sub_pane_g3

0x996d,	// (0x000445ad) bg_popup_sub_pane_g4

0x9975,	// (0x000445b5) bg_popup_sub_pane_g5

0x997d,	// (0x000445bd) bg_popup_sub_pane_g6

0x9985,	// (0x000445c5) bg_popup_sub_pane_g7

0x998d,	// (0x000445cd) bg_popup_sub_pane_g8

0x9995,	// (0x000445d5) bg_popup_sub_pane_g9

0x0008,

0xf871,	// (0x0004a4b1) bg_popup_sub_pane_g

0x7ebd,	// (0x00042afd) bg_popup_window_pane_cp5_ParamLimits

0x7ebd,	// (0x00042afd) bg_popup_window_pane_cp5

0x7ed9,	// (0x00042b19) popup_note_window_g1_ParamLimits

0x7ed9,	// (0x00042b19) popup_note_window_g1

0x7ee5,	// (0x00042b25) popup_note_window_t1_ParamLimits

0x7ee5,	// (0x00042b25) popup_note_window_t1

0x7efb,	// (0x00042b3b) popup_note_window_t2_ParamLimits

0x7efb,	// (0x00042b3b) popup_note_window_t2

0x7f11,	// (0x00042b51) popup_note_window_t3_ParamLimits

0x7f11,	// (0x00042b51) popup_note_window_t3

0x7f27,	// (0x00042b67) popup_note_window_t4_ParamLimits

0x7f27,	// (0x00042b67) popup_note_window_t4

0x7f4f,	// (0x00042b8f) popup_note_window_t5_ParamLimits

0x7f4f,	// (0x00042b8f) popup_note_window_t5

0x0004,

0xf585,	// (0x0004a1c5) popup_note_window_t_ParamLimits

0xf585,	// (0x0004a1c5) popup_note_window_t

0x7f73,	// (0x00042bb3) bg_popup_window_pane_cp6_ParamLimits

0x7f73,	// (0x00042bb3) bg_popup_window_pane_cp6

0xa1a0,	// (0x00044de0) popup_note_image_window_g1_ParamLimits

0xa1a0,	// (0x00044de0) popup_note_image_window_g1

0xa1ac,	// (0x00044dec) popup_note_image_window_g2_ParamLimits

0xa1ac,	// (0x00044dec) popup_note_image_window_g2

0x0001,

0xf865,	// (0x0004a4a5) popup_note_image_window_g_ParamLimits

0xf865,	// (0x0004a4a5) popup_note_image_window_g

0xa1c5,	// (0x00044e05) popup_note_image_window_t1_ParamLimits

0xa1c5,	// (0x00044e05) popup_note_image_window_t1

0xa1de,	// (0x00044e1e) popup_note_image_window_t2_ParamLimits

0xa1de,	// (0x00044e1e) popup_note_image_window_t2

0xa1f7,	// (0x00044e37) popup_note_image_window_t3_ParamLimits

0xa1f7,	// (0x00044e37) popup_note_image_window_t3

0x0002,

0xf86a,	// (0x0004a4aa) popup_note_image_window_t_ParamLimits

0xf86a,	// (0x0004a4aa) popup_note_image_window_t

0xa03c,	// (0x00044c7c) bg_popup_window_pane_cp7_ParamLimits

0xa03c,	// (0x00044c7c) bg_popup_window_pane_cp7

0xa091,	// (0x00044cd1) popup_note_wait_window_g1_ParamLimits

0xa091,	// (0x00044cd1) popup_note_wait_window_g1

0xa09d,	// (0x00044cdd) popup_note_wait_window_g2_ParamLimits

0xa09d,	// (0x00044cdd) popup_note_wait_window_g2

0x0002,

0xf853,	// (0x0004a493) popup_note_wait_window_g_ParamLimits

0xf853,	// (0x0004a493) popup_note_wait_window_g

0xa0b5,	// (0x00044cf5) popup_note_wait_window_t1_ParamLimits

0xa0b5,	// (0x00044cf5) popup_note_wait_window_t1

0xa0dc,	// (0x00044d1c) popup_note_wait_window_t2_ParamLimits

0xa0dc,	// (0x00044d1c) popup_note_wait_window_t2

0xa0f9,	// (0x00044d39) popup_note_wait_window_t3_ParamLimits

0xa0f9,	// (0x00044d39) popup_note_wait_window_t3

0xa10c,	// (0x00044d4c) popup_note_wait_window_t4_ParamLimits

0xa10c,	// (0x00044d4c) popup_note_wait_window_t4

0x0004,

0xf85a,	// (0x0004a49a) popup_note_wait_window_t_ParamLimits

0xf85a,	// (0x0004a49a) popup_note_wait_window_t

0xa131,	// (0x00044d71) wait_bar_pane_ParamLimits

0xa131,	// (0x00044d71) wait_bar_pane

0x7b62,	// (0x000427a2) wait_anim_pane

0x7b62,	// (0x000427a2) wait_border_pane

0x7b58,	// (0x00042798) wait_anim_pane_g1

0x7b58,	// (0x00042798) wait_anim_pane_g2

0x0001,

0xf70e,	// (0x0004a34e) wait_anim_pane_g

0x9fe0,	// (0x00044c20) wait_border_pane_g1

0x9feb,	// (0x00044c2b) wait_border_pane_g2

0x9ff4,	// (0x00044c34) wait_border_pane_g3

0x0002,

0xf84c,	// (0x0004a48c) wait_border_pane_g

0x9e4b,	// (0x00044a8b) bg_popup_window_pane_cp16_ParamLimits

0x9e4b,	// (0x00044a8b) bg_popup_window_pane_cp16

0x9f4b,	// (0x00044b8b) indicator_popup_pane_cp4_ParamLimits

0x9f4b,	// (0x00044b8b) indicator_popup_pane_cp4

0x9f5f,	// (0x00044b9f) popup_query_data_window_t1_ParamLimits

0x9f5f,	// (0x00044b9f) popup_query_data_window_t1

0x9f71,	// (0x00044bb1) popup_query_data_window_t2_ParamLimits

0x9f71,	// (0x00044bb1) popup_query_data_window_t2

0x9f8a,	// (0x00044bca) popup_query_data_window_t3_ParamLimits

0x9f8a,	// (0x00044bca) popup_query_data_window_t3

0x0002,

0xf845,	// (0x0004a485) popup_query_data_window_t_ParamLimits

0xf845,	// (0x0004a485) popup_query_data_window_t

0x9fa4,	// (0x00044be4) query_popup_data_pane_ParamLimits

0x9fa4,	// (0x00044be4) query_popup_data_pane

0x9fb8,	// (0x00044bf8) query_popup_data_pane_cp1_ParamLimits

0x9fb8,	// (0x00044bf8) query_popup_data_pane_cp1

0x9e4b,	// (0x00044a8b) bg_popup_window_pane_cp10_ParamLimits

0x9e4b,	// (0x00044a8b) bg_popup_window_pane_cp10

0x9e7d,	// (0x00044abd) indicator_popup_pane_ParamLimits

0x9e7d,	// (0x00044abd) indicator_popup_pane

0x9e9f,	// (0x00044adf) popup_query_code_window_t1_ParamLimits

0x9e9f,	// (0x00044adf) popup_query_code_window_t1

0x9eb9,	// (0x00044af9) popup_query_code_window_t2_ParamLimits

0x9eb9,	// (0x00044af9) popup_query_code_window_t2

0x9f02,	// (0x00044b42) popup_query_code_window_t3_ParamLimits

0x9f02,	// (0x00044b42) popup_query_code_window_t3

0x0002,

0xf83e,	// (0x0004a47e) popup_query_code_window_t_ParamLimits

0xf83e,	// (0x0004a47e) popup_query_code_window_t

0x9f31,	// (0x00044b71) query_popup_pane_ParamLimits

0x9f31,	// (0x00044b71) query_popup_pane

0x7f73,	// (0x00042bb3) bg_popup_window_pane_cp15_ParamLimits

0x7f73,	// (0x00042bb3) bg_popup_window_pane_cp15

0x7f91,	// (0x00042bd1) indicator_popup_pane_cp1_ParamLimits

0x7f91,	// (0x00042bd1) indicator_popup_pane_cp1

0x7fa4,	// (0x00042be4) indicator_popup_pane_cp2_ParamLimits

0x7fa4,	// (0x00042be4) indicator_popup_pane_cp2

0x7fb7,	// (0x00042bf7) popup_query_data_code_window_g1_ParamLimits

0x7fb7,	// (0x00042bf7) popup_query_data_code_window_g1

0x7fca,	// (0x00042c0a) popup_query_data_code_window_t1_ParamLimits

0x7fca,	// (0x00042c0a) popup_query_data_code_window_t1

0x7fdc,	// (0x00042c1c) popup_query_data_code_window_t2_ParamLimits

0x7fdc,	// (0x00042c1c) popup_query_data_code_window_t2

0x7fee,	// (0x00042c2e) popup_query_data_code_window_t3_ParamLimits

0x7fee,	// (0x00042c2e) popup_query_data_code_window_t3

0x8004,	// (0x00042c44) popup_query_data_code_window_t4_ParamLimits

0x8004,	// (0x00042c44) popup_query_data_code_window_t4

0x0003,

0xf590,	// (0x0004a1d0) popup_query_data_code_window_t_ParamLimits

0xf590,	// (0x0004a1d0) popup_query_data_code_window_t

0x68f8,	// (0x00041538) list_single_midp_graphic_pane_g3

0x801c,	// (0x00042c5c) query_popup_data_pane_cp2_ParamLimits

0x802f,	// (0x00042c6f) query_popup_pane_cp2_ParamLimits

0x802f,	// (0x00042c6f) query_popup_pane_cp2

0x7b62,	// (0x000427a2) bg_popup_window_pane_cp11

0x9e43,	// (0x00044a83) heading_pane_cp5

0x8117,	// (0x00042d57) listscroll_popup_info_pane

0x7b62,	// (0x000427a2) input_focus_pane_cp3

0x8042,	// (0x00042c82) query_popup_pane_t1

0x8050,	// (0x00042c90) list_popup_info_pane_ParamLimits

0x8050,	// (0x00042c90) list_popup_info_pane

0x805f,	// (0x00042c9f) listscroll_popup_info_pane_g1

0x8067,	// (0x00042ca7) scroll_pane_cp7

0x8071,	// (0x00042cb1) popup_info_list_pane_t1_ParamLimits

0x8071,	// (0x00042cb1) popup_info_list_pane_t1

0x808b,	// (0x00042ccb) popup_info_list_pane_t2_ParamLimits

0x808b,	// (0x00042ccb) popup_info_list_pane_t2

0x0001,

0xf599,	// (0x0004a1d9) popup_info_list_pane_t_ParamLimits

0xf599,	// (0x0004a1d9) popup_info_list_pane_t

0x7b62,	// (0x000427a2) bg_popup_window_pane_cp12

0xb1e5,	// (0x00045e25) find_popup_pane

0x7c42,	// (0x00042882) bg_popup_window_pane_cp3

0x80a5,	// (0x00042ce5) heading_pane_cp3

0x80b1,	// (0x00042cf1) listscroll_popup_graphic_pane

0x7b62,	// (0x000427a2) bg_popup_window_pane_cp4

0x810d,	// (0x00042d4d) heading_pane_cp4

0x8117,	// (0x00042d57) listscroll_popup_colour_pane

0x811f,	// (0x00042d5f) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x811f,	// (0x00042d5f) cell_large_graphic_colour_none_popup_pane

0x8133,	// (0x00042d73) grid_large_graphic_colour_popup_pane_ParamLimits

0x8133,	// (0x00042d73) grid_large_graphic_colour_popup_pane

0x815f,	// (0x00042d9f) listscroll_popup_colour_pane_g1_ParamLimits

0x815f,	// (0x00042d9f) listscroll_popup_colour_pane_g1

0x8176,	// (0x00042db6) listscroll_popup_colour_pane_g2_ParamLimits

0x8176,	// (0x00042db6) listscroll_popup_colour_pane_g2

0x818d,	// (0x00042dcd) listscroll_popup_colour_pane_g3_ParamLimits

0x818d,	// (0x00042dcd) listscroll_popup_colour_pane_g3

0x819d,	// (0x00042ddd) listscroll_popup_colour_pane_g4_ParamLimits

0x819d,	// (0x00042ddd) listscroll_popup_colour_pane_g4

0x0003,

0xf59e,	// (0x0004a1de) listscroll_popup_colour_pane_g_ParamLimits

0xf59e,	// (0x0004a1de) listscroll_popup_colour_pane_g

0x81b1,	// (0x00042df1) scroll_pane_cp6_ParamLimits

0x81b1,	// (0x00042df1) scroll_pane_cp6

0x81c3,	// (0x00042e03) cell_large_graphic_colour_popup_pane_ParamLimits

0x81c3,	// (0x00042e03) cell_large_graphic_colour_popup_pane

0x81e2,	// (0x00042e22) cell_large_graphic_colour_none_popup_pane_t1

0x7b62,	// (0x000427a2) grid_highlight_pane_cp5

0x81f1,	// (0x00042e31) cell_large_graphic_colour_popup_pane_g1

0x81f9,	// (0x00042e39) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a7,	// (0x0004a1e7) cell_large_graphic_colour_popup_pane_g

0x8201,	// (0x00042e41) cell_large_graphic_colour_popup_pane_g2_copy1

0x820a,	// (0x00042e4a) grid_highlight_pane_cp4

0x8212,	// (0x00042e52) bg_popup_window_pane_cp8_ParamLimits

0x8212,	// (0x00042e52) bg_popup_window_pane_cp8

0x822d,	// (0x00042e6d) popup_snote_single_text_window_g1_ParamLimits

0x822d,	// (0x00042e6d) popup_snote_single_text_window_g1

0x823f,	// (0x00042e7f) popup_snote_single_text_window_t1_ParamLimits

0x823f,	// (0x00042e7f) popup_snote_single_text_window_t1

0x8252,	// (0x00042e92) popup_snote_single_text_window_t2_ParamLimits

0x8252,	// (0x00042e92) popup_snote_single_text_window_t2

0x8265,	// (0x00042ea5) popup_snote_single_text_window_t3_ParamLimits

0x8265,	// (0x00042ea5) popup_snote_single_text_window_t3

0x829e,	// (0x00042ede) popup_snote_single_text_window_t4_ParamLimits

0x829e,	// (0x00042ede) popup_snote_single_text_window_t4

0x82d2,	// (0x00042f12) popup_snote_single_text_window_t5_ParamLimits

0x82d2,	// (0x00042f12) popup_snote_single_text_window_t5

0x0004,

0xf5ac,	// (0x0004a1ec) popup_snote_single_text_window_t_ParamLimits

0xf5ac,	// (0x0004a1ec) popup_snote_single_text_window_t

0x8301,	// (0x00042f41) bg_popup_window_pane_cp9_ParamLimits

0x8301,	// (0x00042f41) bg_popup_window_pane_cp9

0x822d,	// (0x00042e6d) popup_snote_single_graphic_window_g1_ParamLimits

0x822d,	// (0x00042e6d) popup_snote_single_graphic_window_g1

0x830f,	// (0x00042f4f) popup_snote_single_graphic_window_g2_ParamLimits

0x830f,	// (0x00042f4f) popup_snote_single_graphic_window_g2

0x0001,

0xf5b7,	// (0x0004a1f7) popup_snote_single_graphic_window_g_ParamLimits

0xf5b7,	// (0x0004a1f7) popup_snote_single_graphic_window_g

0x831b,	// (0x00042f5b) popup_snote_single_graphic_window_t1_ParamLimits

0x831b,	// (0x00042f5b) popup_snote_single_graphic_window_t1

0x832e,	// (0x00042f6e) popup_snote_single_graphic_window_t2_ParamLimits

0x832e,	// (0x00042f6e) popup_snote_single_graphic_window_t2

0x8341,	// (0x00042f81) popup_snote_single_graphic_window_t3_ParamLimits

0x8341,	// (0x00042f81) popup_snote_single_graphic_window_t3

0x837a,	// (0x00042fba) popup_snote_single_graphic_window_t4_ParamLimits

0x837a,	// (0x00042fba) popup_snote_single_graphic_window_t4

0x83ae,	// (0x00042fee) popup_snote_single_graphic_window_t5_ParamLimits

0x83ae,	// (0x00042fee) popup_snote_single_graphic_window_t5

0x0004,

0xf5bc,	// (0x0004a1fc) popup_snote_single_graphic_window_t_ParamLimits

0xf5bc,	// (0x0004a1fc) popup_snote_single_graphic_window_t

0xb129,	// (0x00045d69) grid_graphic_popup_pane_ParamLimits

0xb129,	// (0x00045d69) grid_graphic_popup_pane

0xb151,	// (0x00045d91) listscroll_popup_graphic_pane_g1_ParamLimits

0xb151,	// (0x00045d91) listscroll_popup_graphic_pane_g1

0xb165,	// (0x00045da5) listscroll_popup_graphic_pane_g2_ParamLimits

0xb165,	// (0x00045da5) listscroll_popup_graphic_pane_g2

0x0001,

0xf9bb,	// (0x0004a5fb) listscroll_popup_graphic_pane_g_ParamLimits

0xf9bb,	// (0x0004a5fb) listscroll_popup_graphic_pane_g

0xb179,	// (0x00045db9) scroll_pane_cp5

0xb0d2,	// (0x00045d12) cell_graphic_popup_pane_ParamLimits

0xb0d2,	// (0x00045d12) cell_graphic_popup_pane

0xb0b3,	// (0x00045cf3) cell_graphic_popup_pane_g1

0xb0bb,	// (0x00045cfb) cell_graphic_popup_pane_g2

0x8201,	// (0x00042e41) cell_graphic_popup_pane_g3

0x0002,

0xf9b4,	// (0x0004a5f4) cell_graphic_popup_pane_g

0xb0c4,	// (0x00045d04) cell_graphic_popup_pane_t2

0x820a,	// (0x00042e4a) grid_highlight_pane_cp3

0x83ef,	// (0x0004302f) list_gen_pane_ParamLimits

0x83ef,	// (0x0004302f) list_gen_pane

0x8421,	// (0x00043061) scroll_pane

0xb00b,	// (0x00045c4b) bg_list_pane_g1_ParamLimits

0xb00b,	// (0x00045c4b) bg_list_pane_g1

0xb028,	// (0x00045c68) bg_list_pane_g2_ParamLimits

0xb028,	// (0x00045c68) bg_list_pane_g2

0xb03d,	// (0x00045c7d) bg_list_pane_g3_ParamLimits

0xb03d,	// (0x00045c7d) bg_list_pane_g3

0xb051,	// (0x00045c91) bg_list_pane_g4_ParamLimits

0xb051,	// (0x00045c91) bg_list_pane_g4

0xb065,	// (0x00045ca5) bg_list_pane_g5_ParamLimits

0xb065,	// (0x00045ca5) bg_list_pane_g5

0x0004,

0xf9a9,	// (0x0004a5e9) bg_list_pane_g_ParamLimits

0xf9a9,	// (0x0004a5e9) bg_list_pane_g

0x5326,	// (0x0003ff66) list_double2_graphic_large_graphic_pane_ParamLimits

0x5326,	// (0x0003ff66) list_double2_graphic_large_graphic_pane

0x5326,	// (0x0003ff66) list_double2_graphic_pane_ParamLimits

0x5326,	// (0x0003ff66) list_double2_graphic_pane

0x5326,	// (0x0003ff66) list_double2_large_graphic_pane_ParamLimits

0x5326,	// (0x0003ff66) list_double2_large_graphic_pane

0xaff0,	// (0x00045c30) list_double2_pane_ParamLimits

0xaff0,	// (0x00045c30) list_double2_pane

0x5326,	// (0x0003ff66) list_double_graphic_heading_pane_ParamLimits

0x5326,	// (0x0003ff66) list_double_graphic_heading_pane

0x5326,	// (0x0003ff66) list_double_graphic_pane_ParamLimits

0x5326,	// (0x0003ff66) list_double_graphic_pane

0x5326,	// (0x0003ff66) list_double_heading_pane_ParamLimits

0x5326,	// (0x0003ff66) list_double_heading_pane

0x5326,	// (0x0003ff66) list_double_large_graphic_pane_ParamLimits

0x5326,	// (0x0003ff66) list_double_large_graphic_pane

0x5326,	// (0x0003ff66) list_double_number_pane_ParamLimits

0x5326,	// (0x0003ff66) list_double_number_pane

0x5326,	// (0x0003ff66) list_double_pane_ParamLimits

0x5326,	// (0x0003ff66) list_double_pane

0x5326,	// (0x0003ff66) list_double_time_pane_ParamLimits

0x5326,	// (0x0003ff66) list_double_time_pane

0x5326,	// (0x0003ff66) list_setting_number_pane_ParamLimits

0x5326,	// (0x0003ff66) list_setting_number_pane

0x5326,	// (0x0003ff66) list_setting_pane_ParamLimits

0x5326,	// (0x0003ff66) list_setting_pane

0x6bf4,	// (0x00041834) list_single_2graphic_pane_ParamLimits

0x6bf4,	// (0x00041834) list_single_2graphic_pane

0x6bf4,	// (0x00041834) list_single_graphic_heading_pane_ParamLimits

0x6bf4,	// (0x00041834) list_single_graphic_heading_pane

0x6bf4,	// (0x00041834) list_single_graphic_pane_ParamLimits

0x6bf4,	// (0x00041834) list_single_graphic_pane

0x6bf4,	// (0x00041834) list_single_heading_pane_ParamLimits

0x6bf4,	// (0x00041834) list_single_heading_pane

0x6c4a,	// (0x0004188a) list_single_large_graphic_pane_ParamLimits

0x6c4a,	// (0x0004188a) list_single_large_graphic_pane

0x6bf4,	// (0x00041834) list_single_number_heading_pane_ParamLimits

0x6bf4,	// (0x00041834) list_single_number_heading_pane

0x6bf4,	// (0x00041834) list_single_number_pane_ParamLimits

0x6bf4,	// (0x00041834) list_single_number_pane

0x6bf4,	// (0x00041834) list_single_pane_ParamLimits

0x6bf4,	// (0x00041834) list_single_pane

0x7b62,	// (0x000427a2) list_highlight_pane_cp1

0x5c7b,	// (0x000408bb) list_single_pane_g1_ParamLimits

0x5c7b,	// (0x000408bb) list_single_pane_g1

0x5c87,	// (0x000408c7) list_single_pane_g2_ParamLimits

0x5c87,	// (0x000408c7) list_single_pane_g2

0x0001,

0xf5d8,	// (0x0004a218) list_single_pane_g_ParamLimits

0xf5d8,	// (0x0004a218) list_single_pane_g

0x5310,	// (0x0003ff50) list_single_pane_t1_ParamLimits

0x5310,	// (0x0003ff50) list_single_pane_t1

0x5c7b,	// (0x000408bb) list_single_number_pane_g1_ParamLimits

0x5c7b,	// (0x000408bb) list_single_number_pane_g1

0x5c87,	// (0x000408c7) list_single_number_pane_g2_ParamLimits

0x5c87,	// (0x000408c7) list_single_number_pane_g2

0x0001,

0xf5d8,	// (0x0004a218) list_single_number_pane_g_ParamLimits

0xf5d8,	// (0x0004a218) list_single_number_pane_g

0x52b8,	// (0x0003fef8) list_single_number_pane_t1_ParamLimits

0x52b8,	// (0x0003fef8) list_single_number_pane_t1

0x52ce,	// (0x0003ff0e) list_single_number_pane_t2_ParamLimits

0x52ce,	// (0x0003ff0e) list_single_number_pane_t2

0x0001,

0xf96a,	// (0x0004a5aa) list_single_number_pane_t_ParamLimits

0xf96a,	// (0x0004a5aa) list_single_number_pane_t

0x4a1f,	// (0x0003f65f) list_single_graphic_pane_g1_ParamLimits

0x4a1f,	// (0x0003f65f) list_single_graphic_pane_g1

0x5c7b,	// (0x000408bb) list_single_graphic_pane_g2_ParamLimits

0x5c7b,	// (0x000408bb) list_single_graphic_pane_g2

0x5c87,	// (0x000408c7) list_single_graphic_pane_g3_ParamLimits

0x5c87,	// (0x000408c7) list_single_graphic_pane_g3

0x0002,

0xf5c7,	// (0x0004a207) list_single_graphic_pane_g_ParamLimits

0xf5c7,	// (0x0004a207) list_single_graphic_pane_g

0x4a2b,	// (0x0003f66b) list_single_graphic_pane_t1_ParamLimits

0x4a2b,	// (0x0003f66b) list_single_graphic_pane_t1

0x4a41,	// (0x0003f681) list_single_heading_pane_g1_ParamLimits

0x4a41,	// (0x0003f681) list_single_heading_pane_g1

0x5c87,	// (0x000408c7) list_single_heading_pane_g2_ParamLimits

0x5c87,	// (0x000408c7) list_single_heading_pane_g2

0x0001,

0xf5ce,	// (0x0004a20e) list_single_heading_pane_g_ParamLimits

0xf5ce,	// (0x0004a20e) list_single_heading_pane_g

0x4a54,	// (0x0003f694) list_single_heading_pane_t1_ParamLimits

0x4a54,	// (0x0003f694) list_single_heading_pane_t1

0x5c93,	// (0x000408d3) list_single_heading_pane_t2_ParamLimits

0x5c93,	// (0x000408d3) list_single_heading_pane_t2

0x0001,

0xf5d3,	// (0x0004a213) list_single_heading_pane_t_ParamLimits

0xf5d3,	// (0x0004a213) list_single_heading_pane_t

0x5c7b,	// (0x000408bb) list_single_number_heading_pane_g1_ParamLimits

0x5c7b,	// (0x000408bb) list_single_number_heading_pane_g1

0x5c87,	// (0x000408c7) list_single_number_heading_pane_g2_ParamLimits

0x5c87,	// (0x000408c7) list_single_number_heading_pane_g2

0x0001,

0xf5d8,	// (0x0004a218) list_single_number_heading_pane_g_ParamLimits

0xf5d8,	// (0x0004a218) list_single_number_heading_pane_g

0x4a6a,	// (0x0003f6aa) list_single_number_heading_pane_t1_ParamLimits

0x4a6a,	// (0x0003f6aa) list_single_number_heading_pane_t1

0x4a80,	// (0x0003f6c0) list_single_number_heading_pane_t2_ParamLimits

0x4a80,	// (0x0003f6c0) list_single_number_heading_pane_t2

0x4a92,	// (0x0003f6d2) list_single_number_heading_pane_t3_ParamLimits

0x4a92,	// (0x0003f6d2) list_single_number_heading_pane_t3

0x0002,

0xf5dd,	// (0x0004a21d) list_single_number_heading_pane_t_ParamLimits

0xf5dd,	// (0x0004a21d) list_single_number_heading_pane_t

0x4aa4,	// (0x0003f6e4) list_single_graphic_heading_pane_g1_ParamLimits

0x4aa4,	// (0x0003f6e4) list_single_graphic_heading_pane_g1

0x5ca5,	// (0x000408e5) list_single_graphic_heading_pane_g4_ParamLimits

0x5ca5,	// (0x000408e5) list_single_graphic_heading_pane_g4

0x5c87,	// (0x000408c7) list_single_graphic_heading_pane_g5_ParamLimits

0x5c87,	// (0x000408c7) list_single_graphic_heading_pane_g5

0x0002,

0xf5e4,	// (0x0004a224) list_single_graphic_heading_pane_g_ParamLimits

0xf5e4,	// (0x0004a224) list_single_graphic_heading_pane_g

0x4a6a,	// (0x0003f6aa) list_single_graphic_heading_pane_t1_ParamLimits

0x4a6a,	// (0x0003f6aa) list_single_graphic_heading_pane_t1

0x4abc,	// (0x0003f6fc) list_single_graphic_heading_pane_t2_ParamLimits

0x4abc,	// (0x0003f6fc) list_single_graphic_heading_pane_t2

0x0001,

0xf5eb,	// (0x0004a22b) list_single_graphic_heading_pane_t_ParamLimits

0xf5eb,	// (0x0004a22b) list_single_graphic_heading_pane_t

0x5cb6,	// (0x000408f6) list_single_large_graphic_pane_g1_ParamLimits

0x5cb6,	// (0x000408f6) list_single_large_graphic_pane_g1

0x5cc2,	// (0x00040902) list_single_large_graphic_pane_g2_ParamLimits

0x5cc2,	// (0x00040902) list_single_large_graphic_pane_g2

0x5cce,	// (0x0004090e) list_single_large_graphic_pane_g3_ParamLimits

0x5cce,	// (0x0004090e) list_single_large_graphic_pane_g3

0x0002,

0xf5f0,	// (0x0004a230) list_single_large_graphic_pane_g_ParamLimits

0xf5f0,	// (0x0004a230) list_single_large_graphic_pane_g

0x9feb,	// (0x00044c2b) wait_border_pane_g2_copy1

0x5cda,	// (0x0004091a) list_single_large_graphic_pane_g4_cp2

0x4ad2,	// (0x0003f712) list_single_large_graphic_pane_t1_ParamLimits

0x4ad2,	// (0x0003f712) list_single_large_graphic_pane_t1

0x87b2,	// (0x000433f2) list_double_pane_g1_ParamLimits

0x87b2,	// (0x000433f2) list_double_pane_g1

0x4ae8,	// (0x0003f728) list_double_pane_g2_ParamLimits

0x4ae8,	// (0x0003f728) list_double_pane_g2

0x0001,

0xf5f7,	// (0x0004a237) list_double_pane_g_ParamLimits

0xf5f7,	// (0x0004a237) list_double_pane_g

0x4af4,	// (0x0003f734) list_double_pane_t1_ParamLimits

0x4af4,	// (0x0003f734) list_double_pane_t1

0x4b0a,	// (0x0003f74a) list_double_pane_t2_ParamLimits

0x4b0a,	// (0x0003f74a) list_double_pane_t2

0x0001,

0xf5fc,	// (0x0004a23c) list_double_pane_t_ParamLimits

0xf5fc,	// (0x0004a23c) list_double_pane_t

0x4b1c,	// (0x0003f75c) list_double2_pane_g1_ParamLimits

0x4b1c,	// (0x0003f75c) list_double2_pane_g1

0x4b2d,	// (0x0003f76d) list_double2_pane_g2_ParamLimits

0x4b2d,	// (0x0003f76d) list_double2_pane_g2

0x0001,

0xf601,	// (0x0004a241) list_double2_pane_g_ParamLimits

0xf601,	// (0x0004a241) list_double2_pane_g

0x4b39,	// (0x0003f779) list_double2_pane_t1_ParamLimits

0x4b39,	// (0x0003f779) list_double2_pane_t1

0x4b4f,	// (0x0003f78f) list_double2_pane_t2_ParamLimits

0x4b4f,	// (0x0003f78f) list_double2_pane_t2

0x0001,

0xf606,	// (0x0004a246) list_double2_pane_t_ParamLimits

0xf606,	// (0x0004a246) list_double2_pane_t

0x87b2,	// (0x000433f2) list_double_number_pane_g1_ParamLimits

0x87b2,	// (0x000433f2) list_double_number_pane_g1

0x4ae8,	// (0x0003f728) list_double_number_pane_g2_ParamLimits

0x4ae8,	// (0x0003f728) list_double_number_pane_g2

0x0001,

0xf5f7,	// (0x0004a237) list_double_number_pane_g_ParamLimits

0xf5f7,	// (0x0004a237) list_double_number_pane_g

0x4b61,	// (0x0003f7a1) list_double_number_pane_t1_ParamLimits

0x4b61,	// (0x0003f7a1) list_double_number_pane_t1

0x4b73,	// (0x0003f7b3) list_double_number_pane_t2_ParamLimits

0x4b73,	// (0x0003f7b3) list_double_number_pane_t2

0x4b89,	// (0x0003f7c9) list_double_number_pane_t3_ParamLimits

0x4b89,	// (0x0003f7c9) list_double_number_pane_t3

0x0002,

0xf60b,	// (0x0004a24b) list_double_number_pane_t_ParamLimits

0xf60b,	// (0x0004a24b) list_double_number_pane_t

0x4b9b,	// (0x0003f7db) list_double_graphic_pane_g1_ParamLimits

0x4b9b,	// (0x0003f7db) list_double_graphic_pane_g1

0xa074,	// (0x00044cb4) list_double_graphic_pane_g2_ParamLimits

0xa074,	// (0x00044cb4) list_double_graphic_pane_g2

0x4ba7,	// (0x0003f7e7) list_double_graphic_pane_g3_ParamLimits

0x4ba7,	// (0x0003f7e7) list_double_graphic_pane_g3

0x0003,

0xf612,	// (0x0004a252) list_double_graphic_pane_g_ParamLimits

0xf612,	// (0x0004a252) list_double_graphic_pane_g

0x4bbf,	// (0x0003f7ff) list_double_graphic_pane_t1_ParamLimits

0x4bbf,	// (0x0003f7ff) list_double_graphic_pane_t1

0x4bd5,	// (0x0003f815) list_double_graphic_pane_t2_ParamLimits

0x4bd5,	// (0x0003f815) list_double_graphic_pane_t2

0x0001,

0xf61b,	// (0x0004a25b) list_double_graphic_pane_t_ParamLimits

0xf61b,	// (0x0004a25b) list_double_graphic_pane_t

0x4be7,	// (0x0003f827) list_double2_graphic_pane_g1_ParamLimits

0x4be7,	// (0x0003f827) list_double2_graphic_pane_g1

0x4bf3,	// (0x0003f833) list_double2_graphic_pane_g2_ParamLimits

0x4bf3,	// (0x0003f833) list_double2_graphic_pane_g2

0x4bff,	// (0x0003f83f) list_double2_graphic_pane_g3_ParamLimits

0x4bff,	// (0x0003f83f) list_double2_graphic_pane_g3

0x0002,

0xf620,	// (0x0004a260) list_double2_graphic_pane_g_ParamLimits

0xf620,	// (0x0004a260) list_double2_graphic_pane_g

0x4c0b,	// (0x0003f84b) list_double2_graphic_pane_t1_ParamLimits

0x4c0b,	// (0x0003f84b) list_double2_graphic_pane_t1

0x4c21,	// (0x0003f861) list_double2_graphic_pane_t2_ParamLimits

0x4c21,	// (0x0003f861) list_double2_graphic_pane_t2

0x0001,

0xf627,	// (0x0004a267) list_double2_graphic_pane_t_ParamLimits

0xf627,	// (0x0004a267) list_double2_graphic_pane_t

0x4c33,	// (0x0003f873) list_double_large_graphic_pane_g1_ParamLimits

0x4c33,	// (0x0003f873) list_double_large_graphic_pane_g1

0x4c5c,	// (0x0003f89c) list_double_large_graphic_pane_g2_ParamLimits

0x4c5c,	// (0x0003f89c) list_double_large_graphic_pane_g2

0x4ae8,	// (0x0003f728) list_double_large_graphic_pane_g3_ParamLimits

0x4ae8,	// (0x0003f728) list_double_large_graphic_pane_g3

0x4c72,	// (0x0003f8b2) list_double_large_graphic_pane_g4_ParamLimits

0x4c72,	// (0x0003f8b2) list_double_large_graphic_pane_g4

0x0004,

0xf62c,	// (0x0004a26c) list_double_large_graphic_pane_g_ParamLimits

0xf62c,	// (0x0004a26c) list_double_large_graphic_pane_g

0x4c83,	// (0x0003f8c3) list_double_large_graphic_pane_t1_ParamLimits

0x4c83,	// (0x0003f8c3) list_double_large_graphic_pane_t1

0x4c9c,	// (0x0003f8dc) list_double_large_graphic_pane_t2_ParamLimits

0x4c9c,	// (0x0003f8dc) list_double_large_graphic_pane_t2

0x0001,

0xf637,	// (0x0004a277) list_double_large_graphic_pane_t_ParamLimits

0xf637,	// (0x0004a277) list_double_large_graphic_pane_t

0x4cae,	// (0x0003f8ee) list_double2_large_graphic_pane_g1_ParamLimits

0x4cae,	// (0x0003f8ee) list_double2_large_graphic_pane_g1

0x4cba,	// (0x0003f8fa) list_double2_large_graphic_pane_g2_ParamLimits

0x4cba,	// (0x0003f8fa) list_double2_large_graphic_pane_g2

0x4bff,	// (0x0003f83f) list_double2_large_graphic_pane_g3_ParamLimits

0x4bff,	// (0x0003f83f) list_double2_large_graphic_pane_g3

0x0002,

0xf63c,	// (0x0004a27c) list_double2_large_graphic_pane_g_ParamLimits

0xf63c,	// (0x0004a27c) list_double2_large_graphic_pane_g

0x4ccb,	// (0x0003f90b) list_double2_large_graphic_pane_t1_ParamLimits

0x4ccb,	// (0x0003f90b) list_double2_large_graphic_pane_t1

0x4ce1,	// (0x0003f921) list_double2_large_graphic_pane_t2_ParamLimits

0x4ce1,	// (0x0003f921) list_double2_large_graphic_pane_t2

0x0001,

0xf643,	// (0x0004a283) list_double2_large_graphic_pane_t_ParamLimits

0xf643,	// (0x0004a283) list_double2_large_graphic_pane_t

0x4cf3,	// (0x0003f933) list_double_heading_pane_g1_ParamLimits

0x4cf3,	// (0x0003f933) list_double_heading_pane_g1

0x4d04,	// (0x0003f944) list_double_heading_pane_g2_ParamLimits

0x4d04,	// (0x0003f944) list_double_heading_pane_g2

0x0001,

0xf648,	// (0x0004a288) list_double_heading_pane_g_ParamLimits

0xf648,	// (0x0004a288) list_double_heading_pane_g

0x4d10,	// (0x0003f950) list_double_heading_pane_t1_ParamLimits

0x4d10,	// (0x0003f950) list_double_heading_pane_t1

0x4d26,	// (0x0003f966) list_double_heading_pane_t2_ParamLimits

0x4d26,	// (0x0003f966) list_double_heading_pane_t2

0x0001,

0xf64d,	// (0x0004a28d) list_double_heading_pane_t_ParamLimits

0xf64d,	// (0x0004a28d) list_double_heading_pane_t

0x4be7,	// (0x0003f827) list_double_graphic_heading_pane_g1_ParamLimits

0x4be7,	// (0x0003f827) list_double_graphic_heading_pane_g1

0x4cf3,	// (0x0003f933) list_double_graphic_heading_pane_g2_ParamLimits

0x4cf3,	// (0x0003f933) list_double_graphic_heading_pane_g2

0x4d04,	// (0x0003f944) list_double_graphic_heading_pane_g3_ParamLimits

0x4d04,	// (0x0003f944) list_double_graphic_heading_pane_g3

0x0002,

0xf652,	// (0x0004a292) list_double_graphic_heading_pane_g_ParamLimits

0xf652,	// (0x0004a292) list_double_graphic_heading_pane_g

0x4d38,	// (0x0003f978) list_double_graphic_heading_pane_t1_ParamLimits

0x4d38,	// (0x0003f978) list_double_graphic_heading_pane_t1

0x4c21,	// (0x0003f861) list_double_graphic_heading_pane_t2_ParamLimits

0x4c21,	// (0x0003f861) list_double_graphic_heading_pane_t2

0x0001,

0xf659,	// (0x0004a299) list_double_graphic_heading_pane_t_ParamLimits

0xf659,	// (0x0004a299) list_double_graphic_heading_pane_t

0x4d4e,	// (0x0003f98e) list_double_time_pane_g1_ParamLimits

0x4d4e,	// (0x0003f98e) list_double_time_pane_g1

0x4d5f,	// (0x0003f99f) list_double_time_pane_g2_ParamLimits

0x4d5f,	// (0x0003f99f) list_double_time_pane_g2

0x0001,

0xf65e,	// (0x0004a29e) list_double_time_pane_g_ParamLimits

0xf65e,	// (0x0004a29e) list_double_time_pane_g

0x4d6b,	// (0x0003f9ab) list_double_time_pane_t1_ParamLimits

0x4d6b,	// (0x0003f9ab) list_double_time_pane_t1

0x4d81,	// (0x0003f9c1) list_double_time_pane_t2_ParamLimits

0x4d81,	// (0x0003f9c1) list_double_time_pane_t2

0x4d93,	// (0x0003f9d3) list_double_time_pane_t3_ParamLimits

0x4d93,	// (0x0003f9d3) list_double_time_pane_t3

0x4da5,	// (0x0003f9e5) list_double_time_pane_t4_ParamLimits

0x4da5,	// (0x0003f9e5) list_double_time_pane_t4

0x0003,

0xf663,	// (0x0004a2a3) list_double_time_pane_t_ParamLimits

0xf663,	// (0x0004a2a3) list_double_time_pane_t

0x4db7,	// (0x0003f9f7) list_setting_pane_g1_ParamLimits

0x4db7,	// (0x0003f9f7) list_setting_pane_g1

0x4dc3,	// (0x0003fa03) list_setting_pane_g2_ParamLimits

0x4dc3,	// (0x0003fa03) list_setting_pane_g2

0x0001,

0xf66c,	// (0x0004a2ac) list_setting_pane_g_ParamLimits

0xf66c,	// (0x0004a2ac) list_setting_pane_g

0x4dcf,	// (0x0003fa0f) list_setting_pane_t1_ParamLimits

0x4dcf,	// (0x0003fa0f) list_setting_pane_t1

0x4de9,	// (0x0003fa29) list_setting_pane_t2_ParamLimits

0x4de9,	// (0x0003fa29) list_setting_pane_t2

0x0002,

0xf671,	// (0x0004a2b1) list_setting_pane_t_ParamLimits

0xf671,	// (0x0004a2b1) list_setting_pane_t

0x4e28,	// (0x0003fa68) set_value_pane_cp_ParamLimits

0x4e28,	// (0x0003fa68) set_value_pane_cp

0x4e34,	// (0x0003fa74) list_setting_number_pane_g1_ParamLimits

0x4e34,	// (0x0003fa74) list_setting_number_pane_g1

0x4e40,	// (0x0003fa80) list_setting_number_pane_g2_ParamLimits

0x4e40,	// (0x0003fa80) list_setting_number_pane_g2

0x0001,

0xf678,	// (0x0004a2b8) list_setting_number_pane_g_ParamLimits

0xf678,	// (0x0004a2b8) list_setting_number_pane_g

0x4e4c,	// (0x0003fa8c) list_setting_number_pane_t1_ParamLimits

0x4e4c,	// (0x0003fa8c) list_setting_number_pane_t1

0x4e65,	// (0x0003faa5) list_setting_number_pane_t2_ParamLimits

0x4e65,	// (0x0003faa5) list_setting_number_pane_t2

0x4e7f,	// (0x0003fabf) list_setting_number_pane_t3_ParamLimits

0x4e7f,	// (0x0003fabf) list_setting_number_pane_t3

0x0003,

0xf67d,	// (0x0004a2bd) list_setting_number_pane_t_ParamLimits

0xf67d,	// (0x0004a2bd) list_setting_number_pane_t

0x4e28,	// (0x0003fa68) set_value_pane_ParamLimits

0x4e28,	// (0x0003fa68) set_value_pane

0x8455,	// (0x00043095) bg_set_opt_pane_ParamLimits

0x8455,	// (0x00043095) bg_set_opt_pane

0x4ec2,	// (0x0003fb02) set_value_pane_t1

0x8476,	// (0x000430b6) slider_set_pane_cp3

0x847f,	// (0x000430bf) volume_small_pane_cp

0x8488,	// (0x000430c8) list_form_gen_pane

0x8491,	// (0x000430d1) scroll_pane_cp8

0x4ed8,	// (0x0003fb18) form_field_data_pane_ParamLimits

0x4ed8,	// (0x0003fb18) form_field_data_pane

0x4efc,	// (0x0003fb3c) form_field_data_wide_pane_ParamLimits

0x4efc,	// (0x0003fb3c) form_field_data_wide_pane

0x4f1f,	// (0x0003fb5f) form_field_popup_pane_ParamLimits

0x4f1f,	// (0x0003fb5f) form_field_popup_pane

0x4f3f,	// (0x0003fb7f) form_field_popup_wide_pane_ParamLimits

0x4f3f,	// (0x0003fb7f) form_field_popup_wide_pane

0x4f5e,	// (0x0003fb9e) form_field_slider_pane_ParamLimits

0x4f5e,	// (0x0003fb9e) form_field_slider_pane

0x4f71,	// (0x0003fbb1) form_field_slider_wide_pane_ParamLimits

0x4f71,	// (0x0003fbb1) form_field_slider_wide_pane

0x84a2,	// (0x000430e2) data_form_pane

0x4f8e,	// (0x0003fbce) form_field_data_pane_t1

0x84ae,	// (0x000430ee) input_focus_pane

0x84bc,	// (0x000430fc) data_form_wide_pane

0x4fb2,	// (0x0003fbf2) form_field_data_wide_pane_t1

0x821f,	// (0x00042e5f) input_focus_pane_cp6

0x4fd4,	// (0x0003fc14) form_field_popup_pane_t1

0x84ae,	// (0x000430ee) input_focus_pane_cp7

0x84e8,	// (0x00043128) list_form_pane

0x4ff4,	// (0x0003fc34) form_field_popup_wide_pane_t1

0x84ae,	// (0x000430ee) input_focus_pane_cp8

0x84f4,	// (0x00043134) list_form_wide_pane

0x5011,	// (0x0003fc51) form_field_slider_pane_t1_ParamLimits

0x5011,	// (0x0003fc51) form_field_slider_pane_t1

0x5027,	// (0x0003fc67) form_field_slider_pane_t2_ParamLimits

0x5027,	// (0x0003fc67) form_field_slider_pane_t2

0x0001,

0xf68d,	// (0x0004a2cd) form_field_slider_pane_t_ParamLimits

0xf68d,	// (0x0004a2cd) form_field_slider_pane_t

0x7ebd,	// (0x00042afd) input_focus_pane_cp9_ParamLimits

0x7ebd,	// (0x00042afd) input_focus_pane_cp9

0x503c,	// (0x0003fc7c) slider_cont_pane_ParamLimits

0x503c,	// (0x0003fc7c) slider_cont_pane

0x8503,	// (0x00043143) form_field_slider_wide_pane_t1_ParamLimits

0x8503,	// (0x00043143) form_field_slider_wide_pane_t1

0x5050,	// (0x0003fc90) form_field_slider_wide_pane_t2_ParamLimits

0x5050,	// (0x0003fc90) form_field_slider_wide_pane_t2

0x0001,

0xf692,	// (0x0004a2d2) form_field_slider_wide_pane_t_ParamLimits

0xf692,	// (0x0004a2d2) form_field_slider_wide_pane_t

0x7ebd,	// (0x00042afd) input_focus_pane_cp10_ParamLimits

0x7ebd,	// (0x00042afd) input_focus_pane_cp10

0x5062,	// (0x0003fca2) slider_cont_pane_cp1_ParamLimits

0x5062,	// (0x0003fca2) slider_cont_pane_cp1

0x5076,	// (0x0003fcb6) slider_form_pane_cp

0x8515,	// (0x00043155) input_focus_pane_g1

0x851d,	// (0x0004315d) input_focus_pane_g2

0x8525,	// (0x00043165) input_focus_pane_g3

0x852d,	// (0x0004316d) input_focus_pane_g4

0x8535,	// (0x00043175) input_focus_pane_g5

0x853d,	// (0x0004317d) input_focus_pane_g6

0x8545,	// (0x00043185) input_focus_pane_g7

0x854d,	// (0x0004318d) input_focus_pane_g8

0x8555,	// (0x00043195) input_focus_pane_g9

0x7b58,	// (0x00042798) input_focus_pane_g10

0x0009,

0xf697,	// (0x0004a2d7) input_focus_pane_g

0x9ff4,	// (0x00044c34) wait_border_pane_g3_copy1

0x507e,	// (0x0003fcbe) data_form_pane_t1

0x7b58,	// (0x00042798) wait_anim_pane_g1_copy1

0x52e0,	// (0x0003ff20) data_form_wide_pane_t1

0x5099,	// (0x0003fcd9) list_form_graphic_pane_cp_ParamLimits

0x5099,	// (0x0003fcd9) list_form_graphic_pane_cp

0xaf82,	// (0x00045bc2) slider_form_pane_g1

0xaf8b,	// (0x00045bcb) slider_form_pane_g2

0x0006,

0xf99a,	// (0x0004a5da) slider_form_pane_g

0x50b2,	// (0x0003fcf2) list_form_graphic_pane_ParamLimits

0x50b2,	// (0x0003fcf2) list_form_graphic_pane

0x50ce,	// (0x0003fd0e) list_form_graphic_pane_g1

0x50d6,	// (0x0003fd16) list_form_graphic_pane_t1_ParamLimits

0x50d6,	// (0x0003fd16) list_form_graphic_pane_t1

0x7c42,	// (0x00042882) list_highlight_pane_cp5_ParamLimits

0x7c42,	// (0x00042882) list_highlight_pane_cp5

0x50eb,	// (0x0003fd2b) find_pane_g1

0x855d,	// (0x0004319d) input_find_pane

0x50f4,	// (0x0003fd34) input_find_pane_g1_ParamLimits

0x50f4,	// (0x0003fd34) input_find_pane_g1

0x5100,	// (0x0003fd40) input_find_pane_t1_ParamLimits

0x5100,	// (0x0003fd40) input_find_pane_t1

0x5115,	// (0x0003fd55) input_find_pane_t2_ParamLimits

0x5115,	// (0x0003fd55) input_find_pane_t2

0x0001,

0xf6ac,	// (0x0004a2ec) input_find_pane_t_ParamLimits

0xf6ac,	// (0x0004a2ec) input_find_pane_t

0x8566,	// (0x000431a6) input_focus_pane_cp5_ParamLimits

0x8566,	// (0x000431a6) input_focus_pane_cp5

0x8580,	// (0x000431c0) bg_popup_window_pane_cp2_ParamLimits

0x8580,	// (0x000431c0) bg_popup_window_pane_cp2

0x858d,	// (0x000431cd) listscroll_menu_pane_ParamLimits

0x858d,	// (0x000431cd) listscroll_menu_pane

0x8599,	// (0x000431d9) popup_submenu_window_ParamLimits

0x8599,	// (0x000431d9) popup_submenu_window

0x85c5,	// (0x00043205) find_popup_pane_g1

0x85cd,	// (0x0004320d) input_popup_find_pane_cp

0x8566,	// (0x000431a6) input_focus_pane_cp4_ParamLimits

0x8566,	// (0x000431a6) input_focus_pane_cp4

0x85e3,	// (0x00043223) input_popup_find_pane_t1_ParamLimits

0x85e3,	// (0x00043223) input_popup_find_pane_t1

0x7b62,	// (0x000427a2) bg_popup_sub_pane_cp

0x8611,	// (0x00043251) listscroll_popup_sub_pane

0x8619,	// (0x00043259) list_submenu_pane_ParamLimits

0x8619,	// (0x00043259) list_submenu_pane

0x862a,	// (0x0004326a) scroll_pane_cp4

0x8632,	// (0x00043272) list_single_popup_submenu_pane_ParamLimits

0x8632,	// (0x00043272) list_single_popup_submenu_pane

0x8646,	// (0x00043286) list_single_popup_submenu_pane_g1

0x864e,	// (0x0004328e) list_single_popup_submenu_pane_t1_ParamLimits

0x864e,	// (0x0004328e) list_single_popup_submenu_pane_t1

0x7c42,	// (0x00042882) bg_active_tab_pane_cp1_ParamLimits

0x7c42,	// (0x00042882) bg_active_tab_pane_cp1

0x8663,	// (0x000432a3) tabs_2_active_pane_g1

0x866b,	// (0x000432ab) tabs_2_active_pane_t1

0x7c42,	// (0x00042882) bg_passive_tab_pane_cp1_ParamLimits

0x7c42,	// (0x00042882) bg_passive_tab_pane_cp1

0x8663,	// (0x000432a3) tabs_2_passive_pane_g1

0x866b,	// (0x000432ab) tabs_2_passive_pane_t1

0x867d,	// (0x000432bd) bg_active_tab_pane_cp4

0x868b,	// (0x000432cb) tabs_2_long_active_pane_t1

0x869e,	// (0x000432de) bg_passive_tab_pane_cp4

0x6900,	// (0x00041540) list_single_midp_graphic_pane_g4_ParamLimits

0x867d,	// (0x000432bd) bg_active_tab_pane_cp5

0x86aa,	// (0x000432ea) tabs_3_long_active_pane_t1

0x869e,	// (0x000432de) bg_passive_tab_pane_cp5

0x6900,	// (0x00041540) list_single_midp_graphic_pane_g4

0x7c42,	// (0x00042882) bg_popup_window_pane_cp13_ParamLimits

0x7c42,	// (0x00042882) bg_popup_window_pane_cp13

0x86c5,	// (0x00043305) listscroll_popup_fast_pane_ParamLimits

0x86c5,	// (0x00043305) listscroll_popup_fast_pane

0x86d4,	// (0x00043314) grid_popup_fast_pane_ParamLimits

0x86d4,	// (0x00043314) grid_popup_fast_pane

0x86e6,	// (0x00043326) scroll_pane_cp9_ParamLimits

0x86e6,	// (0x00043326) scroll_pane_cp9

0xc898,	// (0x000474d8) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc898,	// (0x000474d8) list_single_graphic_hl_pane_t1_cp2

0x870a,	// (0x0004334a) input_focus_pane_cp20_ParamLimits

0x870a,	// (0x0004334a) input_focus_pane_cp20

0x8718,	// (0x00043358) query_popup_data_pane_t1_ParamLimits

0x8718,	// (0x00043358) query_popup_data_pane_t1

0x872b,	// (0x0004336b) query_popup_data_pane_t2_ParamLimits

0x872b,	// (0x0004336b) query_popup_data_pane_t2

0x8771,	// (0x000433b1) query_popup_data_pane_t3_ParamLimits

0x8771,	// (0x000433b1) query_popup_data_pane_t3

0x87be,	// (0x000433fe) query_popup_data_pane_t4_ParamLimits

0x87be,	// (0x000433fe) query_popup_data_pane_t4

0x87fa,	// (0x0004343a) query_popup_data_pane_t5_ParamLimits

0x87fa,	// (0x0004343a) query_popup_data_pane_t5

0x0004,

0xf6b1,	// (0x0004a2f1) query_popup_data_pane_t_ParamLimits

0xf6b1,	// (0x0004a2f1) query_popup_data_pane_t

0x8515,	// (0x00043155) bg_set_opt_pane_g1

0x851d,	// (0x0004315d) bg_set_opt_pane_g2

0x8525,	// (0x00043165) bg_set_opt_pane_g3

0x852d,	// (0x0004316d) bg_set_opt_pane_g4

0x8535,	// (0x00043175) bg_set_opt_pane_g5

0x853d,	// (0x0004317d) bg_set_opt_pane_g6

0x8545,	// (0x00043185) bg_set_opt_pane_g7

0x854d,	// (0x0004318d) bg_set_opt_pane_g8

0x8555,	// (0x00043195) bg_set_opt_pane_g9

0x0008,

0xf6bc,	// (0x0004a2fc) bg_set_opt_pane_g

0x5f96,	// (0x00040bd6) control_top_pane_stacon_ParamLimits

0x5f96,	// (0x00040bd6) control_top_pane_stacon

0x5fe9,	// (0x00040c29) signal_pane_stacon_ParamLimits

0x5fe9,	// (0x00040c29) signal_pane_stacon

0x8db9,	// (0x000439f9) stacon_top_pane_g1_ParamLimits

0x8db9,	// (0x000439f9) stacon_top_pane_g1

0x600e,	// (0x00040c4e) title_pane_stacon_ParamLimits

0x600e,	// (0x00040c4e) title_pane_stacon

0x6038,	// (0x00040c78) uni_indicator_pane_stacon_ParamLimits

0x6038,	// (0x00040c78) uni_indicator_pane_stacon

0x604d,	// (0x00040c8d) battery_pane_stacon_ParamLimits

0x604d,	// (0x00040c8d) battery_pane_stacon

0x6091,	// (0x00040cd1) control_bottom_pane_stacon_ParamLimits

0x6091,	// (0x00040cd1) control_bottom_pane_stacon

0x60b4,	// (0x00040cf4) navi_pane_stacon_ParamLimits

0x60b4,	// (0x00040cf4) navi_pane_stacon

0x8ddb,	// (0x00043a1b) stacon_bottom_pane_g1_ParamLimits

0x8ddb,	// (0x00043a1b) stacon_bottom_pane_g1

0x5cf7,	// (0x00040937) aid_levels_signal_lsc_ParamLimits

0x5cf7,	// (0x00040937) aid_levels_signal_lsc

0x5d0e,	// (0x0004094e) signal_pane_stacon_g1_ParamLimits

0x5d0e,	// (0x0004094e) signal_pane_stacon_g1

0x5d22,	// (0x00040962) signal_pane_stacon_g2_ParamLimits

0x5d22,	// (0x00040962) signal_pane_stacon_g2

0x0001,

0xf6cf,	// (0x0004a30f) signal_pane_stacon_g_ParamLimits

0xf6cf,	// (0x0004a30f) signal_pane_stacon_g

0x5d57,	// (0x00040997) title_pane_stacon_t1_ParamLimits

0x5d57,	// (0x00040997) title_pane_stacon_t1

0x883e,	// (0x0004347e) uni_indicator_pane_stacon_g1

0x8848,	// (0x00043488) uni_indicator_pane_stacon_g2

0x8852,	// (0x00043492) uni_indicator_pane_stacon_g3

0x885c,	// (0x0004349c) uni_indicator_pane_stacon_g4

0x0003,

0xf6db,	// (0x0004a31b) uni_indicator_pane_stacon_g

0x5d7c,	// (0x000409bc) control_top_pane_stacon_g1

0x5d84,	// (0x000409c4) control_top_pane_stacon_t1_ParamLimits

0x5d84,	// (0x000409c4) control_top_pane_stacon_t1

0x5dbb,	// (0x000409fb) aid_levels_battery_lsc_ParamLimits

0x5dbb,	// (0x000409fb) aid_levels_battery_lsc

0x5dd3,	// (0x00040a13) battery_pane_stacon_g1_ParamLimits

0x5dd3,	// (0x00040a13) battery_pane_stacon_g1

0x5de6,	// (0x00040a26) battery_pane_stacon_g2_ParamLimits

0x5de6,	// (0x00040a26) battery_pane_stacon_g2

0x0001,

0xf6e4,	// (0x0004a324) battery_pane_stacon_g_ParamLimits

0xf6e4,	// (0x0004a324) battery_pane_stacon_g

0x5e24,	// (0x00040a64) navi_icon_pane_stacon

0x5e38,	// (0x00040a78) navi_navi_pane_stacon

0x5e24,	// (0x00040a64) navi_text_pane_stacon

0x5d7c,	// (0x000409bc) control_bottom_pane_stacon_g1

0x5e4c,	// (0x00040a8c) control_bottom_pane_stacon_t1_ParamLimits

0x5e4c,	// (0x00040a8c) control_bottom_pane_stacon_t1

0x8880,	// (0x000434c0) grid_app_pane_ParamLimits

0x8880,	// (0x000434c0) grid_app_pane

0x88a4,	// (0x000434e4) scroll_pane_cp15_ParamLimits

0x88a4,	// (0x000434e4) scroll_pane_cp15

0x88b9,	// (0x000434f9) cell_app_pane_ParamLimits

0x88b9,	// (0x000434f9) cell_app_pane

0x88dd,	// (0x0004351d) cell_app_pane_g1_ParamLimits

0x88dd,	// (0x0004351d) cell_app_pane_g1

0x88fd,	// (0x0004353d) cell_app_pane_g2_ParamLimits

0x88fd,	// (0x0004353d) cell_app_pane_g2

0x0001,

0xf6e9,	// (0x0004a329) cell_app_pane_g_ParamLimits

0xf6e9,	// (0x0004a329) cell_app_pane_g

0x8909,	// (0x00043549) cell_app_pane_t1_ParamLimits

0x8909,	// (0x00043549) cell_app_pane_t1

0x8920,	// (0x00043560) grid_highlight_pane_ParamLimits

0x8920,	// (0x00043560) grid_highlight_pane

0x8515,	// (0x00043155) cell_highlight_pane_g1

0x851d,	// (0x0004315d) cell_highlight_pane_g2

0x8525,	// (0x00043165) cell_highlight_pane_g3

0x852d,	// (0x0004316d) cell_highlight_pane_g4

0x8535,	// (0x00043175) cell_highlight_pane_g5

0x853d,	// (0x0004317d) cell_highlight_pane_g6

0x8545,	// (0x00043185) cell_highlight_pane_g7

0x854d,	// (0x0004318d) cell_highlight_pane_g8

0x8555,	// (0x00043195) cell_highlight_pane_g9

0x7b58,	// (0x00042798) cell_highlight_pane_g10

0x0009,

0xf697,	// (0x0004a2d7) cell_highlight_pane_g

0x8931,	// (0x00043571) bg_scroll_pane

0x5e96,	// (0x00040ad6) scroll_handle_pane

0x8978,	// (0x000435b8) scroll_bg_pane_g1

0x898d,	// (0x000435cd) scroll_bg_pane_g2

0x89a5,	// (0x000435e5) scroll_bg_pane_g3

0x0002,

0xf6ee,	// (0x0004a32e) scroll_bg_pane_g

0x89ba,	// (0x000435fa) scroll_handle_focus_pane_ParamLimits

0x89ba,	// (0x000435fa) scroll_handle_focus_pane

0x8978,	// (0x000435b8) scroll_handle_pane_g1

0x89c7,	// (0x00043607) scroll_handle_pane_g2

0x89a5,	// (0x000435e5) scroll_handle_pane_g3

0x0002,

0xf6f5,	// (0x0004a335) scroll_handle_pane_g

0x8566,	// (0x000431a6) bg_popup_sub_pane_cp21_ParamLimits

0x8566,	// (0x000431a6) bg_popup_sub_pane_cp21

0x89db,	// (0x0004361b) popup_fep_japan_predictive_window_t1_ParamLimits

0x89db,	// (0x0004361b) popup_fep_japan_predictive_window_t1

0x89f5,	// (0x00043635) popup_fep_japan_predictive_window_t2_ParamLimits

0x89f5,	// (0x00043635) popup_fep_japan_predictive_window_t2

0x8a28,	// (0x00043668) popup_fep_japan_predictive_window_t3_ParamLimits

0x8a28,	// (0x00043668) popup_fep_japan_predictive_window_t3

0x0002,

0xf6fc,	// (0x0004a33c) popup_fep_japan_predictive_window_t_ParamLimits

0xf6fc,	// (0x0004a33c) popup_fep_japan_predictive_window_t

0x7b62,	// (0x000427a2) bg_popup_sub_pane_cp23

0x8a5f,	// (0x0004369f) listscroll_japin_cand_pane

0x8a67,	// (0x000436a7) popup_fep_japan_candidate_window_t1

0x8a75,	// (0x000436b5) candidate_pane_ParamLimits

0x8a75,	// (0x000436b5) candidate_pane

0x8a87,	// (0x000436c7) scroll_pane_cp30

0x8a8f,	// (0x000436cf) list_single_popup_jap_candidate_pane_ParamLimits

0x8a8f,	// (0x000436cf) list_single_popup_jap_candidate_pane

0x7b62,	// (0x000427a2) list_highlight_pane_cp30

0x8aa4,	// (0x000436e4) list_single_popup_jap_candidate_pane_t1

0x8ab3,	// (0x000436f3) level_1_signal

0x8ac0,	// (0x00043700) level_2_signal

0x8acd,	// (0x0004370d) level_3_signal

0x8ada,	// (0x0004371a) level_4_signal

0x8ae7,	// (0x00043727) level_5_signal

0x8af4,	// (0x00043734) level_6_signal

0x8b01,	// (0x00043741) level_7_signal

0x8ab3,	// (0x000436f3) level_1_battery

0x8ac0,	// (0x00043700) level_2_battery

0x8acd,	// (0x0004370d) level_3_battery

0x8ada,	// (0x0004371a) level_4_battery

0x8ae7,	// (0x00043727) level_5_battery

0x8af4,	// (0x00043734) level_6_battery

0x8b01,	// (0x00043741) level_7_battery

0x8b26,	// (0x00043766) list_menu_pane_ParamLimits

0x8b26,	// (0x00043766) list_menu_pane

0x8b3c,	// (0x0004377c) scroll_pane_cp25_ParamLimits

0x8b3c,	// (0x0004377c) scroll_pane_cp25

0x8b55,	// (0x00043795) list_double2_graphic_pane_cp2_ParamLimits

0x8b55,	// (0x00043795) list_double2_graphic_pane_cp2

0x8b55,	// (0x00043795) list_double2_large_graphic_pane_cp2_ParamLimits

0x8b55,	// (0x00043795) list_double2_large_graphic_pane_cp2

0x8b55,	// (0x00043795) list_double2_pane_cp2_ParamLimits

0x8b55,	// (0x00043795) list_double2_pane_cp2

0x8b55,	// (0x00043795) list_double_graphic_pane_cp2_ParamLimits

0x8b55,	// (0x00043795) list_double_graphic_pane_cp2

0x8b55,	// (0x00043795) list_double_large_graphic_pane_cp2_ParamLimits

0x8b55,	// (0x00043795) list_double_large_graphic_pane_cp2

0x8b55,	// (0x00043795) list_double_number_pane_cp2_ParamLimits

0x8b55,	// (0x00043795) list_double_number_pane_cp2

0x8b55,	// (0x00043795) list_double_pane_cp2_ParamLimits

0x8b55,	// (0x00043795) list_double_pane_cp2

0x8b79,	// (0x000437b9) list_single_2graphic_pane_cp2_ParamLimits

0x8b79,	// (0x000437b9) list_single_2graphic_pane_cp2

0x8b79,	// (0x000437b9) list_single_graphic_heading_pane_cp2_ParamLimits

0x8b79,	// (0x000437b9) list_single_graphic_heading_pane_cp2

0x8b79,	// (0x000437b9) list_single_graphic_pane_cp2_ParamLimits

0x8b79,	// (0x000437b9) list_single_graphic_pane_cp2

0x8b79,	// (0x000437b9) list_single_heading_pane_cp2_ParamLimits

0x8b79,	// (0x000437b9) list_single_heading_pane_cp2

0x8b92,	// (0x000437d2) list_single_large_graphic_pane_cp2_ParamLimits

0x8b92,	// (0x000437d2) list_single_large_graphic_pane_cp2

0x8b79,	// (0x000437b9) list_single_number_heading_pane_cp2_ParamLimits

0x8b79,	// (0x000437b9) list_single_number_heading_pane_cp2

0x8b79,	// (0x000437b9) list_single_number_pane_cp2_ParamLimits

0x8b79,	// (0x000437b9) list_single_number_pane_cp2

0x8b79,	// (0x000437b9) list_single_pane_cp2_ParamLimits

0x8b79,	// (0x000437b9) list_single_pane_cp2

0x8c08,	// (0x00043848) bg_popup_sub_pane_cp22

0x5f48,	// (0x00040b88) popup_side_volume_key_window_g1

0x5f72,	// (0x00040bb2) popup_side_volume_key_window_t1

0x5f8e,	// (0x00040bce) volume_small_pane_cp1

0x7ebd,	// (0x00042afd) bg_popup_sub_pane_cp24_ParamLimits

0x7ebd,	// (0x00042afd) bg_popup_sub_pane_cp24

0x8c1e,	// (0x0004385e) fep_china_uni_candidate_pane_ParamLimits

0x8c1e,	// (0x0004385e) fep_china_uni_candidate_pane

0x8c32,	// (0x00043872) fep_china_uni_entry_pane

0x8c42,	// (0x00043882) popup_fep_china_uni_window_g1

0x8c5e,	// (0x0004389e) fep_china_uni_entry_pane_g1

0x8c66,	// (0x000438a6) fep_china_uni_entry_pane_g2

0x0001,

0xf72d,	// (0x0004a36d) fep_china_uni_entry_pane_g

0x8c6e,	// (0x000438ae) fep_entry_item_pane

0x8c78,	// (0x000438b8) fep_candidate_item_pane

0x8c80,	// (0x000438c0) fep_china_uni_candidate_pane_g1

0x8c88,	// (0x000438c8) fep_china_uni_candidate_pane_g2

0x8c90,	// (0x000438d0) fep_china_uni_candidate_pane_g3

0x8c98,	// (0x000438d8) fep_china_uni_candidate_pane_g4

0x0003,

0xf732,	// (0x0004a372) fep_china_uni_candidate_pane_g

0x7b58,	// (0x00042798) fep_entry_item_pane_g1

0x8ca0,	// (0x000438e0) fep_entry_item_pane_t1_ParamLimits

0x8ca0,	// (0x000438e0) fep_entry_item_pane_t1

0x8cb6,	// (0x000438f6) fep_candidate_item_pane_t1_ParamLimits

0x8cb6,	// (0x000438f6) fep_candidate_item_pane_t1

0x8ccb,	// (0x0004390b) fep_candidate_item_pane_t2_ParamLimits

0x8ccb,	// (0x0004390b) fep_candidate_item_pane_t2

0x0001,

0xf73b,	// (0x0004a37b) fep_candidate_item_pane_t_ParamLimits

0xf73b,	// (0x0004a37b) fep_candidate_item_pane_t

0x7c42,	// (0x00042882) list_highlight_pane_cp31_ParamLimits

0x7c42,	// (0x00042882) list_highlight_pane_cp31

0x8cdd,	// (0x0004391d) level_1_signal_lsc

0x8ce6,	// (0x00043926) level_2_signal_lsc

0x8cef,	// (0x0004392f) level_3_signal_lsc

0x8cf8,	// (0x00043938) level_4_signal_lsc

0x8d01,	// (0x00043941) level_5_signal_lsc

0x8d0a,	// (0x0004394a) level_6_signal_lsc

0x8d13,	// (0x00043953) level_7_signal_lsc

0x8d13,	// (0x00043953) level_1_battery_lsc

0x8d1c,	// (0x0004395c) level_2_battery_lsc

0x8d25,	// (0x00043965) level_3_battery_lsc

0x8d2e,	// (0x0004396e) level_4_battery_lsc

0x8d37,	// (0x00043977) level_5_battery_lsc

0x8d40,	// (0x00043980) level_6_battery_lsc

0x8cdd,	// (0x0004391d) level_7_battery_lsc

0x8d49,	// (0x00043989) scroll_handle_focus_pane_g1

0x8d52,	// (0x00043992) scroll_handle_focus_pane_g2

0x8d5b,	// (0x0004399b) scroll_handle_focus_pane_g3

0x0002,

0xf740,	// (0x0004a380) scroll_handle_focus_pane_g

0x512a,	// (0x0003fd6a) list_single_2graphic_pane_g1_ParamLimits

0x512a,	// (0x0003fd6a) list_single_2graphic_pane_g1

0x5ca5,	// (0x000408e5) list_single_2graphic_pane_g2_ParamLimits

0x5ca5,	// (0x000408e5) list_single_2graphic_pane_g2

0x5c87,	// (0x000408c7) list_single_2graphic_pane_g3_ParamLimits

0x5c87,	// (0x000408c7) list_single_2graphic_pane_g3

0x5136,	// (0x0003fd76) list_single_2graphic_pane_g4_ParamLimits

0x5136,	// (0x0003fd76) list_single_2graphic_pane_g4

0x0003,

0xf747,	// (0x0004a387) list_single_2graphic_pane_g_ParamLimits

0xf747,	// (0x0004a387) list_single_2graphic_pane_g

0x5142,	// (0x0003fd82) list_single_2graphic_pane_t1_ParamLimits

0x5142,	// (0x0003fd82) list_single_2graphic_pane_t1

0x5170,	// (0x0003fdb0) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x5170,	// (0x0003fdb0) list_double2_graphic_large_graphic_pane_g1

0x4cba,	// (0x0003f8fa) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x4cba,	// (0x0003f8fa) list_double2_graphic_large_graphic_pane_g2

0x4bff,	// (0x0003f83f) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x4bff,	// (0x0003f83f) list_double2_graphic_large_graphic_pane_g3

0x5180,	// (0x0003fdc0) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x5180,	// (0x0003fdc0) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf750,	// (0x0004a390) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf750,	// (0x0004a390) list_double2_graphic_large_graphic_pane_g

0x518c,	// (0x0003fdcc) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x518c,	// (0x0003fdcc) list_double2_graphic_large_graphic_pane_t1

0x51a2,	// (0x0003fde2) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x51a2,	// (0x0003fde2) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf759,	// (0x0004a399) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf759,	// (0x0004a399) list_double2_graphic_large_graphic_pane_t

0x8ea3,	// (0x00043ae3) popup_fast_swap_window_ParamLimits

0x8ea3,	// (0x00043ae3) popup_fast_swap_window

0x8ebf,	// (0x00043aff) popup_side_volume_key_window

0x8edb,	// (0x00043b1b) stacon_top_pane

0x8ee5,	// (0x00043b25) status_pane_ParamLimits

0x8ee5,	// (0x00043b25) status_pane

0x8edb,	// (0x00043b1b) status_small_pane

0x7b62,	// (0x000427a2) control_pane

0x7b62,	// (0x000427a2) stacon_bottom_pane

0x8491,	// (0x000430d1) scroll_pane_cp121

0x8488,	// (0x000430c8) set_content_pane

0x8d64,	// (0x000439a4) bg_active_tab_pane_g1_cp1

0x8d6d,	// (0x000439ad) bg_active_tab_pane_g2_cp1

0x8d76,	// (0x000439b6) bg_active_tab_pane_g3_cp1

0x8d64,	// (0x000439a4) bg_passive_tab_pane_g1_cp1

0x8d6d,	// (0x000439ad) bg_passive_tab_pane_g2_cp1

0x8d76,	// (0x000439b6) bg_passive_tab_pane_g3_cp1

0x8d7f,	// (0x000439bf) bg_active_tab_pane_g1_cp2

0x8d6d,	// (0x000439ad) bg_active_tab_pane_g2_cp2

0x8d88,	// (0x000439c8) bg_active_tab_pane_g3_cp2

0x8d7f,	// (0x000439bf) bg_passive_tab_pane_g1_cp2

0x8d6d,	// (0x000439ad) bg_passive_tab_pane_g2_cp2

0x8d88,	// (0x000439c8) bg_passive_tab_pane_g3_cp2

0x8d91,	// (0x000439d1) bg_active_tab_pane_g1_cp3

0x8d6d,	// (0x000439ad) bg_active_tab_pane_g2_cp3

0x8d9a,	// (0x000439da) bg_active_tab_pane_g3_cp3

0x8d91,	// (0x000439d1) bg_passive_tab_pane_g1_cp3

0x8d6d,	// (0x000439ad) bg_passive_tab_pane_g2_cp3

0x8d9a,	// (0x000439da) bg_passive_tab_pane_g3_cp3

0x8da3,	// (0x000439e3) bg_active_tab_pane_g1_cp4

0x8d6d,	// (0x000439ad) bg_active_tab_pane_g2_cp4

0x8dae,	// (0x000439ee) bg_active_tab_pane_g3_cp4

0x8da3,	// (0x000439e3) bg_passive_tab_pane_g1_cp4

0x8d6d,	// (0x000439ad) bg_passive_tab_pane_g2_cp4

0x8dae,	// (0x000439ee) bg_passive_tab_pane_g3_cp4

0x8df7,	// (0x00043a37) bg_active_tab_pane_g1_cp5

0x8d6d,	// (0x000439ad) bg_active_tab_pane_g2_cp5

0x8e00,	// (0x00043a40) bg_active_tab_pane_g3_cp5

0x8df7,	// (0x00043a37) bg_passive_tab_pane_g1_cp5

0x8d6d,	// (0x000439ad) bg_passive_tab_pane_g2_cp5

0x8e00,	// (0x00043a40) bg_passive_tab_pane_g3_cp5

0x8e09,	// (0x00043a49) list_set_graphic_pane_ParamLimits

0x8e09,	// (0x00043a49) list_set_graphic_pane

0x7b62,	// (0x000427a2) bg_set_opt_pane_cp4

0x8e26,	// (0x00043a66) list_set_graphic_pane_g1_ParamLimits

0x8e26,	// (0x00043a66) list_set_graphic_pane_g1

0x8e32,	// (0x00043a72) list_set_graphic_pane_g2_ParamLimits

0x8e32,	// (0x00043a72) list_set_graphic_pane_g2

0x0001,

0xf75e,	// (0x0004a39e) list_set_graphic_pane_g_ParamLimits

0xf75e,	// (0x0004a39e) list_set_graphic_pane_g

0x0009,

0xfad1,	// (0x0004a711) volume_small_pane_cp_g

0x8e56,	// (0x00043a96) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x8e56,	// (0x00043a96) list_double2_large_graphic_pane_g1_cp2

0x8e62,	// (0x00043aa2) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x8e62,	// (0x00043aa2) list_double2_large_graphic_pane_g2_cp2

0x8e73,	// (0x00043ab3) list_double2_large_graphic_pane_g3_cp2

0x8e7b,	// (0x00043abb) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x8e7b,	// (0x00043abb) list_double2_large_graphic_pane_t1_cp2

0x8e91,	// (0x00043ad1) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x8e91,	// (0x00043ad1) list_double2_large_graphic_pane_t2_cp2

0xaadd,	// (0x0004571d) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xaadd,	// (0x0004571d) list_double_large_graphic_pane_g1_cp2

0xaaee,	// (0x0004572e) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xaaee,	// (0x0004572e) list_double_large_graphic_pane_g2_cp2

0x8ff5,	// (0x00043c35) list_double_large_graphic_pane_g3_cp2

0xaaff,	// (0x0004573f) list_double_large_graphic_pane_g4_cp

0xab07,	// (0x00045747) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xab07,	// (0x00045747) list_double_large_graphic_pane_t1_cp2

0xab1e,	// (0x0004575e) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xab1e,	// (0x0004575e) list_double_large_graphic_pane_t2_cp2

0x8ef3,	// (0x00043b33) list_double2_graphic_pane_g1_cp2_ParamLimits

0x8ef3,	// (0x00043b33) list_double2_graphic_pane_g1_cp2

0x8f01,	// (0x00043b41) list_double2_graphic_pane_g2_cp2_ParamLimits

0x8f01,	// (0x00043b41) list_double2_graphic_pane_g2_cp2

0x8f12,	// (0x00043b52) list_double2_graphic_pane_g3_cp2

0x8f1c,	// (0x00043b5c) list_double2_graphic_pane_t1_cp2_ParamLimits

0x8f1c,	// (0x00043b5c) list_double2_graphic_pane_t1_cp2

0x8f32,	// (0x00043b72) list_double2_graphic_pane_t2_cp2_ParamLimits

0x8f32,	// (0x00043b72) list_double2_graphic_pane_t2_cp2

0x8f44,	// (0x00043b84) list_single_number_heading_pane_g1_cp2_ParamLimits

0x8f44,	// (0x00043b84) list_single_number_heading_pane_g1_cp2

0x8f50,	// (0x00043b90) list_single_number_heading_pane_g2_cp2

0x8f58,	// (0x00043b98) list_single_number_heading_pane_t1_cp2_ParamLimits

0x8f58,	// (0x00043b98) list_single_number_heading_pane_t1_cp2

0x8f6e,	// (0x00043bae) list_single_number_heading_pane_t2_cp2_ParamLimits

0x8f6e,	// (0x00043bae) list_single_number_heading_pane_t2_cp2

0x8f80,	// (0x00043bc0) list_single_number_heading_pane_t3_cp2_ParamLimits

0x8f80,	// (0x00043bc0) list_single_number_heading_pane_t3_cp2

0x8f44,	// (0x00043b84) list_single_heading_pane_g1_cp2_ParamLimits

0x8f44,	// (0x00043b84) list_single_heading_pane_g1_cp2

0x8f50,	// (0x00043b90) list_single_heading_pane_g2_cp2

0x8f58,	// (0x00043b98) list_single_heading_pane_t1_cp2_ParamLimits

0x8f58,	// (0x00043b98) list_single_heading_pane_t1_cp2

0xa8e5,	// (0x00045525) list_single_heading_pane_t2_cp2_ParamLimits

0xa8e5,	// (0x00045525) list_single_heading_pane_t2_cp2

0xa83c,	// (0x0004547c) list_double_graphic_pane_g1_cp2_ParamLimits

0xa83c,	// (0x0004547c) list_double_graphic_pane_g1_cp2

0xa074,	// (0x00044cb4) list_double_graphic_pane_g2_cp2_ParamLimits

0xa074,	// (0x00044cb4) list_double_graphic_pane_g2_cp2

0xa848,	// (0x00045488) list_double_graphic_pane_g3_cp2

0xa850,	// (0x00045490) list_double_graphic_pane_t1_cp2_ParamLimits

0xa850,	// (0x00045490) list_double_graphic_pane_t1_cp2

0xa866,	// (0x000454a6) list_double_graphic_pane_t2_cp2_ParamLimits

0xa866,	// (0x000454a6) list_double_graphic_pane_t2_cp2

0x87b2,	// (0x000433f2) list_double_number_pane_g1_cp2_ParamLimits

0x87b2,	// (0x000433f2) list_double_number_pane_g1_cp2

0x8ff5,	// (0x00043c35) list_double_number_pane_g2_cp2

0xa800,	// (0x00045440) list_double_number_pane_t1_cp2_ParamLimits

0xa800,	// (0x00045440) list_double_number_pane_t1_cp2

0xa814,	// (0x00045454) list_double_number_pane_t2_cp2_ParamLimits

0xa814,	// (0x00045454) list_double_number_pane_t2_cp2

0xa82a,	// (0x0004546a) list_double_number_pane_t3_cp2_ParamLimits

0xa82a,	// (0x0004546a) list_double_number_pane_t3_cp2

0xa6e9,	// (0x00045329) list_single_graphic_pane_g1_cp2_ParamLimits

0xa6e9,	// (0x00045329) list_single_graphic_pane_g1_cp2

0x904d,	// (0x00043c8d) list_single_graphic_pane_g2_cp2_ParamLimits

0x904d,	// (0x00043c8d) list_single_graphic_pane_g2_cp2

0x9059,	// (0x00043c99) list_single_graphic_pane_g3_cp2

0xa6bf,	// (0x000452ff) list_single_graphic_pane_t1_cp2_ParamLimits

0xa6bf,	// (0x000452ff) list_single_graphic_pane_t1_cp2

0x904d,	// (0x00043c8d) list_single_number_pane_g1_cp2_ParamLimits

0x904d,	// (0x00043c8d) list_single_number_pane_g1_cp2

0x9059,	// (0x00043c99) list_single_number_pane_g2_cp2

0xa6bf,	// (0x000452ff) list_single_number_pane_t1_cp2_ParamLimits

0xa6bf,	// (0x000452ff) list_single_number_pane_t1_cp2

0xa6d5,	// (0x00045315) list_single_number_pane_t2_cp2_ParamLimits

0xa6d5,	// (0x00045315) list_single_number_pane_t2_cp2

0x8e62,	// (0x00043aa2) list_double2_pane_g1_cp2_ParamLimits

0x8e62,	// (0x00043aa2) list_double2_pane_g1_cp2

0x8e73,	// (0x00043ab3) list_double2_pane_g2_cp2

0x8fcd,	// (0x00043c0d) list_double2_pane_t1_cp2_ParamLimits

0x8fcd,	// (0x00043c0d) list_double2_pane_t1_cp2

0x8fe3,	// (0x00043c23) list_double2_pane_t2_cp2_ParamLimits

0x8fe3,	// (0x00043c23) list_double2_pane_t2_cp2

0x87b2,	// (0x000433f2) list_double_pane_g1_cp2_ParamLimits

0x87b2,	// (0x000433f2) list_double_pane_g1_cp2

0x8ff5,	// (0x00043c35) list_double_pane_g2_cp2

0x8ffd,	// (0x00043c3d) list_double_pane_t1_cp2_ParamLimits

0x8ffd,	// (0x00043c3d) list_double_pane_t1_cp2

0x9013,	// (0x00043c53) list_double_pane_t2_cp2_ParamLimits

0x9013,	// (0x00043c53) list_double_pane_t2_cp2

0x903d,	// (0x00043c7d) list_single_pane_cp2_g3

0x904d,	// (0x00043c8d) list_single_pane_g1_cp2_ParamLimits

0x904d,	// (0x00043c8d) list_single_pane_g1_cp2

0x9059,	// (0x00043c99) list_single_pane_g2_cp2

0x9061,	// (0x00043ca1) list_single_pane_t1_cp2_ParamLimits

0x9061,	// (0x00043ca1) list_single_pane_t1_cp2

0x9079,	// (0x00043cb9) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x9079,	// (0x00043cb9) list_single_large_graphic_pane_g1_cp2

0x9085,	// (0x00043cc5) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x9085,	// (0x00043cc5) list_single_large_graphic_pane_g2_cp2

0x9091,	// (0x00043cd1) list_single_large_graphic_pane_g3_cp2

0x9099,	// (0x00043cd9) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x9099,	// (0x00043cd9) list_single_large_graphic_pane_g4_cp1

0x90b3,	// (0x00043cf3) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x90b3,	// (0x00043cf3) list_single_large_graphic_pane_t1_cp2

0xa68b,	// (0x000452cb) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa68b,	// (0x000452cb) list_single_graphic_heading_pane_g1_cp2

0xa658,	// (0x00045298) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa658,	// (0x00045298) list_single_graphic_heading_pane_g4_cp2

0x9059,	// (0x00043c99) list_single_graphic_heading_pane_g5_cp2

0xa697,	// (0x000452d7) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa697,	// (0x000452d7) list_single_graphic_heading_pane_t1_cp2

0xa6ad,	// (0x000452ed) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa6ad,	// (0x000452ed) list_single_graphic_heading_pane_t2_cp2

0xa64c,	// (0x0004528c) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa64c,	// (0x0004528c) list_single_2graphic_pane_g1_cp2

0xa658,	// (0x00045298) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa658,	// (0x00045298) list_single_2graphic_pane_g2_cp2

0x9059,	// (0x00043c99) list_single_2graphic_pane_g3_cp2

0xa669,	// (0x000452a9) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa669,	// (0x000452a9) list_single_2graphic_pane_g4_cp2

0xa675,	// (0x000452b5) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa675,	// (0x000452b5) list_single_2graphic_pane_t1_cp2

0x7b58,	// (0x00042798) list_highlight_pane_g10_cp1

0xa224,	// (0x00044e64) list_highlight_pane_g1_cp1

0xa22c,	// (0x00044e6c) list_highlight_pane_g2_cp1

0xa234,	// (0x00044e74) list_highlight_pane_g3_cp1

0xa23c,	// (0x00044e7c) list_highlight_pane_g4_cp1

0xa244,	// (0x00044e84) list_highlight_pane_g5_cp1

0xa24c,	// (0x00044e8c) list_highlight_pane_g6_cp1

0xa254,	// (0x00044e94) list_highlight_pane_g7_cp1

0xa25c,	// (0x00044e9c) list_highlight_pane_g8_cp1

0xa264,	// (0x00044ea4) list_highlight_pane_g9_cp1

0xa144,	// (0x00044d84) form_field_slider_pane_t3

0xa152,	// (0x00044d92) form_field_slider_pane_t4

0xa160,	// (0x00044da0) slider_form_pane_ParamLimits

0xa160,	// (0x00044da0) slider_form_pane

0x7b62,	// (0x000427a2) control_abbreviations

0x7b62,	// (0x000427a2) control_conventions

0x7b62,	// (0x000427a2) control_definitions

0x7b62,	// (0x000427a2) format_table_attribute

0xa92f,	// (0x0004556f) bg_popup_preview_window_pane_g9

0x7b62,	// (0x000427a2) format_table_data2

0x7b62,	// (0x000427a2) format_table_data3

0x7b62,	// (0x000427a2) format_table_data_example

0x0008,

0x7b62,	// (0x000427a2) intro_purpose

0xf8fa,	// (0x0004a53a) bg_popup_preview_window_pane_g

0x7b62,	// (0x000427a2) texts_category

0x7b62,	// (0x000427a2) texts_graphics

0x90c9,	// (0x00043d09) text_digital

0x90d8,	// (0x00043d18) text_primary

0x90e7,	// (0x00043d27) text_primary_small

0x90f6,	// (0x00043d36) text_secondary

0x9105,	// (0x00043d45) text_title

0xb087,	// (0x00045cc7) bg_passive_tab_pane_g1_cp3_srt

0x8d6d,	// (0x000439ad) bg_passive_tab_pane_g2_cp3_srt

0xb090,	// (0x00045cd0) bg_passive_tab_pane_g3_cp3_srt

0x7c42,	// (0x00042882) bg_active_tab_pane_cp3_srt_ParamLimits

0x7c42,	// (0x00042882) bg_active_tab_pane_cp3_srt

0xb099,	// (0x00045cd9) tabs_4_active_pane_srt_g1

0xb0a1,	// (0x00045ce1) tabs_4_active_pane_srt_t1_ParamLimits

0xb0a1,	// (0x00045ce1) tabs_4_active_pane_srt_t1

0xb087,	// (0x00045cc7) bg_active_tab_pane_g1_cp3_copy1

0x8d6d,	// (0x000439ad) bg_active_tab_pane_g2_cp3_copy1

0xb090,	// (0x00045cd0) bg_active_tab_pane_g3_cp3_copy1

0x7c42,	// (0x00042882) tabs_2_long_active_pane_srt_ParamLimits

0x7c42,	// (0x00042882) tabs_2_long_active_pane_srt

0x7c42,	// (0x00042882) tabs_2_long_passive_pane_srt_ParamLimits

0x7c42,	// (0x00042882) tabs_2_long_passive_pane_srt

0x869e,	// (0x000432de) bg_passive_tab_pane_cp4_srt_ParamLimits

0x869e,	// (0x000432de) bg_passive_tab_pane_cp4_srt

0xad73,	// (0x000459b3) bg_passive_tab_pane_g1_cp4_srt

0x8d6d,	// (0x000439ad) bg_passive_tab_pane_g2_cp4_srt

0xad7c,	// (0x000459bc) bg_passive_tab_pane_g3_cp4_srt

0x867d,	// (0x000432bd) bg_active_tab_pane_cp4_srt_ParamLimits

0x867d,	// (0x000432bd) bg_active_tab_pane_cp4_srt

0xad85,	// (0x000459c5) tabs_2_long_active_pane_srt_t1_ParamLimits

0xad85,	// (0x000459c5) tabs_2_long_active_pane_srt_t1

0xad73,	// (0x000459b3) bg_active_tab_pane_g1_cp4_srt

0x8d6d,	// (0x000439ad) bg_active_tab_pane_g2_cp4_srt

0xad7c,	// (0x000459bc) bg_active_tab_pane_g3_cp4_srt

0x7ebd,	// (0x00042afd) tabs_3_long_active_pane_srt_ParamLimits

0x7ebd,	// (0x00042afd) tabs_3_long_active_pane_srt

0x7ebd,	// (0x00042afd) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x7ebd,	// (0x00042afd) tabs_3_long_passive_pane_cp_srt

0x7ebd,	// (0x00042afd) tabs_3_long_passive_pane_srt_ParamLimits

0x7ebd,	// (0x00042afd) tabs_3_long_passive_pane_srt

0x869e,	// (0x000432de) bg_passive_tab_pane_cp5_srt_ParamLimits

0x869e,	// (0x000432de) bg_passive_tab_pane_cp5_srt

0x8df7,	// (0x00043a37) bg_passive_tab_pane_g1_cp5_srt

0x8d6d,	// (0x000439ad) bg_passive_tab_pane_g2_cp5_srt

0x8e00,	// (0x00043a40) bg_passive_tab_pane_g3_cp5_srt

0x867d,	// (0x000432bd) bg_active_tab_pane_cp5_srt_ParamLimits

0x867d,	// (0x000432bd) bg_active_tab_pane_cp5_srt

0xad61,	// (0x000459a1) tabs_3_long_active_pane_srt_t1_ParamLimits

0xad61,	// (0x000459a1) tabs_3_long_active_pane_srt_t1

0x8df7,	// (0x00043a37) bg_active_tab_pane_g1_cp5_srt

0x8d6d,	// (0x000439ad) bg_active_tab_pane_g2_cp5_srt

0x8e00,	// (0x00043a40) bg_active_tab_pane_g3_cp5_srt

0xad53,	// (0x00045993) navi_text_pane_srt_t1

0xad4b,	// (0x0004598b) navi_icon_pane_srt_g1

0x92cc,	// (0x00043f0c) midp_editing_number_pane_srt

0x9114,	// (0x00043d54) midp_ticker_pane_srt

0x92d4,	// (0x00043f14) midp_ticker_pane_srt_g1

0x92dc,	// (0x00043f1c) midp_ticker_pane_srt_g2

0x0001,

0xf77d,	// (0x0004a3bd) midp_ticker_pane_srt_g

0x92e4,	// (0x00043f24) midp_ticker_pane_srt_t1

0xad3c,	// (0x0004597c) midp_editing_number_pane_t1_copy1

0x869e,	// (0x000432de) listscroll_midp_pane

0x869e,	// (0x000432de) midp_form_pane

0x917e,	// (0x00043dbe) midp_info_popup_window_ParamLimits

0x917e,	// (0x00043dbe) midp_info_popup_window

0x8566,	// (0x000431a6) bg_popup_sub_pane_cp50_ParamLimits

0x8566,	// (0x000431a6) bg_popup_sub_pane_cp50

0x9e37,	// (0x00044a77) listscroll_midp_info_pane_ParamLimits

0x9e37,	// (0x00044a77) listscroll_midp_info_pane

0x9e1f,	// (0x00044a5f) listscroll_form_midp_pane_ParamLimits

0x9e1f,	// (0x00044a5f) listscroll_form_midp_pane

0x9e2b,	// (0x00044a6b) scroll_bar_cp050

0x9dff,	// (0x00044a3f) list_midp_pane

0xbb1f,	// (0x0004675f) signal_pane_g2_cp

0x9d39,	// (0x00044979) listscroll_midp_info_pane_t1_ParamLimits

0x9d39,	// (0x00044979) listscroll_midp_info_pane_t1

0x9d51,	// (0x00044991) listscroll_midp_info_pane_t2_ParamLimits

0x9d51,	// (0x00044991) listscroll_midp_info_pane_t2

0x9d8f,	// (0x000449cf) listscroll_midp_info_pane_t3_ParamLimits

0x9d8f,	// (0x000449cf) listscroll_midp_info_pane_t3

0x9dc9,	// (0x00044a09) listscroll_midp_info_pane_t4_ParamLimits

0x9dc9,	// (0x00044a09) listscroll_midp_info_pane_t4

0x0003,

0xf835,	// (0x0004a475) listscroll_midp_info_pane_t_ParamLimits

0xf835,	// (0x0004a475) listscroll_midp_info_pane_t

0x862a,	// (0x0004326a) scroll_pane_cp21

0x9cd7,	// (0x00044917) form_midp_field_choice_group_pane

0x9ce0,	// (0x00044920) form_midp_field_text_pane

0x9d1f,	// (0x0004495f) form_midp_field_time_pane

0x9d27,	// (0x00044967) form_midp_gauge_slider_pane

0x9d30,	// (0x00044970) form_midp_gauge_wait_pane

0x7b62,	// (0x000427a2) form_midp_image_pane

0x528d,	// (0x0003fecd) list_single_midp_pane_ParamLimits

0x528d,	// (0x0003fecd) list_single_midp_pane

0x9c8f,	// (0x000448cf) form_midp_field_text_pane_t1

0x9a59,	// (0x00044699) input_focus_pane_cp050

0x9cc6,	// (0x00044906) list_midp_form_text_pane

0x9c5e,	// (0x0004489e) form_midp_field_choice_group_pane_t1

0x9c6c,	// (0x000448ac) input_focus_pane_cp051

0x9c80,	// (0x000448c0) list_midp_choice_pane

0x7b62,	// (0x000427a2) status_idle_pane

0x9c42,	// (0x00044882) form_midp_field_time_pane_t1

0x7b58,	// (0x00042798) wait_anim_pane_g2_copy1

0x9c50,	// (0x00044890) form_midp_field_time_pane_t2

0x0001,

0x922c,	// (0x00043e6c) aid_navinavi_width_2_pane

0xf830,	// (0x0004a470) form_midp_field_time_pane_t

0x7b62,	// (0x000427a2) input_focus_pane_cp052

0x7b62,	// (0x000427a2) bg_input_focus_pane_cp040

0x9c02,	// (0x00044842) form_midp_gauge_slider_pane_t1

0x9c10,	// (0x00044850) form_midp_gauge_slider_pane_t2

0x9c1e,	// (0x0004485e) form_midp_gauge_slider_pane_t3

0x9c2c,	// (0x0004486c) form_midp_gauge_slider_pane_t4

0x0003,

0xf827,	// (0x0004a467) form_midp_gauge_slider_pane_t

0x9c3a,	// (0x0004487a) form_midp_slider_pane

0x7c42,	// (0x00042882) bg_input_focus_pane_cp041_ParamLimits

0x7c42,	// (0x00042882) bg_input_focus_pane_cp041

0x9bcf,	// (0x0004480f) form_midp_gauge_wait_pane_t1_ParamLimits

0x9bcf,	// (0x0004480f) form_midp_gauge_wait_pane_t1

0x9be1,	// (0x00044821) form_midp_gauge_wait_pane_t2_ParamLimits

0x9be1,	// (0x00044821) form_midp_gauge_wait_pane_t2

0x0001,

0xf822,	// (0x0004a462) form_midp_gauge_wait_pane_t_ParamLimits

0xf822,	// (0x0004a462) form_midp_gauge_wait_pane_t

0x9bf3,	// (0x00044833) form_midp_wait_pane_ParamLimits

0x9bf3,	// (0x00044833) form_midp_wait_pane

0x9b99,	// (0x000447d9) form_midp_image_pane_g1

0x9ba2,	// (0x000447e2) form_midp_image_pane_t1

0x9bb1,	// (0x000447f1) form_midp_image_pane_t2

0x9bc0,	// (0x00044800) form_midp_image_pane_t3

0x0002,

0xf81b,	// (0x0004a45b) form_midp_image_pane_t

0x9b90,	// (0x000447d0) list_single_midp_pane_g1

0x527e,	// (0x0003febe) list_single_midp_pane_t1

0x9b68,	// (0x000447a8) list_midp_form_item_pane_ParamLimits

0x9b68,	// (0x000447a8) list_midp_form_item_pane

0x91d4,	// (0x00043e14) list_midp_form_item_pane_t1

0x91e3,	// (0x00043e23) midp_ticker_pane_g1

0x91ef,	// (0x00043e2f) midp_ticker_pane_g2

0x0001,

0xf763,	// (0x0004a3a3) midp_ticker_pane_g

0x91fb,	// (0x00043e3b) midp_ticker_pane_t1

0xafcf,	// (0x00045c0f) midp_editing_number_pane_t1

0xafad,	// (0x00045bed) midp_editing_number_pane

0xafbc,	// (0x00045bfc) midp_ticker_pane

0xad2c,	// (0x0004596c) ai_message_heading_pane

0x7b62,	// (0x000427a2) bg_popup_window_pane_cp14

0xad34,	// (0x00045974) listscroll_ai_message_pane

0xacb6,	// (0x000458f6) ai_message_heading_pane_g1_ParamLimits

0xacb6,	// (0x000458f6) ai_message_heading_pane_g1

0xacc2,	// (0x00045902) ai_message_heading_pane_g2_ParamLimits

0xacc2,	// (0x00045902) ai_message_heading_pane_g2

0xacce,	// (0x0004590e) ai_message_heading_pane_g3_ParamLimits

0xacce,	// (0x0004590e) ai_message_heading_pane_g3

0xacda,	// (0x0004591a) ai_message_heading_pane_g4_ParamLimits

0xacda,	// (0x0004591a) ai_message_heading_pane_g4

0x0003,

0xf95c,	// (0x0004a59c) ai_message_heading_pane_g_ParamLimits

0xf95c,	// (0x0004a59c) ai_message_heading_pane_g

0xace6,	// (0x00045926) ai_message_heading_pane_t1_ParamLimits

0xace6,	// (0x00045926) ai_message_heading_pane_t1

0xad00,	// (0x00045940) ai_message_heading_pane_t2_ParamLimits

0xad00,	// (0x00045940) ai_message_heading_pane_t2

0x0001,

0xf965,	// (0x0004a5a5) ai_message_heading_pane_t_ParamLimits

0xf965,	// (0x0004a5a5) ai_message_heading_pane_t

0xad12,	// (0x00045952) bg_popup_heading_pane_cp1_ParamLimits

0xad12,	// (0x00045952) bg_popup_heading_pane_cp1

0xaca4,	// (0x000458e4) list_ai_message_pane_ParamLimits

0xaca4,	// (0x000458e4) list_ai_message_pane

0x862a,	// (0x0004326a) scroll_pane_cp10

0xac40,	// (0x00045880) list_ai_message_pane_g1

0xac48,	// (0x00045888) list_ai_message_pane_g2

0x0001,

0xf939,	// (0x0004a579) list_ai_message_pane_g

0xac50,	// (0x00045890) list_ai_message_pane_t1_ParamLimits

0xac50,	// (0x00045890) list_ai_message_pane_t1

0xac65,	// (0x000458a5) list_ai_message_pane_t2_ParamLimits

0xac65,	// (0x000458a5) list_ai_message_pane_t2

0xac7a,	// (0x000458ba) list_ai_message_pane_t3_ParamLimits

0xac7a,	// (0x000458ba) list_ai_message_pane_t3

0xac8f,	// (0x000458cf) list_ai_message_pane_t4_ParamLimits

0xac8f,	// (0x000458cf) list_ai_message_pane_t4

0x0003,

0xf93e,	// (0x0004a57e) list_ai_message_pane_t_ParamLimits

0xf93e,	// (0x0004a57e) list_ai_message_pane_t

0xac2b,	// (0x0004586b) cell_ai_soft_ind_pane_ParamLimits

0xac2b,	// (0x0004586b) cell_ai_soft_ind_pane

0x920d,	// (0x00043e4d) cell_ai_soft_ind_pane_g1_ParamLimits

0x920d,	// (0x00043e4d) cell_ai_soft_ind_pane_g1

0x7b62,	// (0x000427a2) grid_highlight_cp1

0x921a,	// (0x00043e5a) text_secondary_cp56_ParamLimits

0x921a,	// (0x00043e5a) text_secondary_cp56

0xac00,	// (0x00045840) example_general_pane_ParamLimits

0xac00,	// (0x00045840) example_general_pane

0xac0c,	// (0x0004584c) example_parent_pane_g1_ParamLimits

0xac0c,	// (0x0004584c) example_parent_pane_g1

0xac18,	// (0x00045858) example_parent_pane_t1_ParamLimits

0xac18,	// (0x00045858) example_parent_pane_t1

0x666f,	// (0x000412af) popup_preview_text_window_ParamLimits

0x666f,	// (0x000412af) popup_preview_text_window

0x9045,	// (0x00043c85) list_single_pane_cp2_g4

0x7f73,	// (0x00042bb3) bg_popup_preview_window_pane_ParamLimits

0x7f73,	// (0x00042bb3) bg_popup_preview_window_pane

0xa937,	// (0x00045577) popup_preview_text_window_t1_ParamLimits

0xa937,	// (0x00045577) popup_preview_text_window_t1

0xa955,	// (0x00045595) popup_preview_text_window_t2_ParamLimits

0xa955,	// (0x00045595) popup_preview_text_window_t2

0xa99e,	// (0x000455de) popup_preview_text_window_t3_ParamLimits

0xa99e,	// (0x000455de) popup_preview_text_window_t3

0xa9e3,	// (0x00045623) popup_preview_text_window_t4_ParamLimits

0xa9e3,	// (0x00045623) popup_preview_text_window_t4

0x0004,

0xf90d,	// (0x0004a54d) popup_preview_text_window_t_ParamLimits

0xf90d,	// (0x0004a54d) popup_preview_text_window_t

0xaa61,	// (0x000456a1) scroll_pane_cp11

0x9955,	// (0x00044595) bg_popup_preview_window_pane_g1

0xa8f7,	// (0x00045537) bg_popup_preview_window_pane_g2

0xa8ff,	// (0x0004553f) bg_popup_preview_window_pane_g3

0xa907,	// (0x00045547) bg_popup_preview_window_pane_g4

0xa90f,	// (0x0004554f) bg_popup_preview_window_pane_g5

0xa917,	// (0x00045557) bg_popup_preview_window_pane_g6

0xa91f,	// (0x0004555f) bg_popup_preview_window_pane_g7

0xa927,	// (0x00045567) bg_popup_preview_window_pane_g8

0x5811,	// (0x00040451) aid_popup_width_pane

0x664d,	// (0x0004128d) popup_midp_note_alarm_window_ParamLimits

0x664d,	// (0x0004128d) popup_midp_note_alarm_window

0x84a2,	// (0x000430e2) data_form_pane_ParamLimits

0x4f84,	// (0x0003fbc4) form_field_data_pane_g1

0x4f8e,	// (0x0003fbce) form_field_data_pane_t1_ParamLimits

0x84ae,	// (0x000430ee) input_focus_pane_ParamLimits

0x84bc,	// (0x000430fc) data_form_wide_pane_ParamLimits

0x4fa6,	// (0x0003fbe6) form_field_data_wide_pane_g1

0x4fb2,	// (0x0003fbf2) form_field_data_wide_pane_t1_ParamLimits

0x821f,	// (0x00042e5f) input_focus_pane_cp6_ParamLimits

0x85d7,	// (0x00043217) input_popup_find_pane_g1_ParamLimits

0x85d7,	// (0x00043217) input_popup_find_pane_g1

0x5df7,	// (0x00040a37) aid_navi_side_left_pane

0x5e0c,	// (0x00040a4c) aid_navi_side_right_pane

0xa31f,	// (0x00044f5f) bg_popup_window_pane_cp30_ParamLimits

0xa31f,	// (0x00044f5f) bg_popup_window_pane_cp30

0xa399,	// (0x00044fd9) popup_midp_note_alarm_window_g1_ParamLimits

0xa399,	// (0x00044fd9) popup_midp_note_alarm_window_g1

0xa3c9,	// (0x00045009) popup_midp_note_alarm_window_t1_ParamLimits

0xa3c9,	// (0x00045009) popup_midp_note_alarm_window_t1

0xa46a,	// (0x000450aa) popup_midp_note_alarm_window_t2_ParamLimits

0xa46a,	// (0x000450aa) popup_midp_note_alarm_window_t2

0xa518,	// (0x00045158) popup_midp_note_alarm_window_t3_ParamLimits

0xa518,	// (0x00045158) popup_midp_note_alarm_window_t3

0xa54a,	// (0x0004518a) popup_midp_note_alarm_window_t4_ParamLimits

0xa54a,	// (0x0004518a) popup_midp_note_alarm_window_t4

0xa570,	// (0x000451b0) popup_midp_note_alarm_window_t5_ParamLimits

0xa570,	// (0x000451b0) popup_midp_note_alarm_window_t5

0x000a,

0xf8aa,	// (0x0004a4ea) popup_midp_note_alarm_window_t_ParamLimits

0xf8aa,	// (0x0004a4ea) popup_midp_note_alarm_window_t

0xa61c,	// (0x0004525c) wait_bar_pane_cp1_ParamLimits

0xa61c,	// (0x0004525c) wait_bar_pane_cp1

0x7b62,	// (0x000427a2) wait_anim_pane_copy1

0x7b62,	// (0x000427a2) wait_border_pane_copy1

0x9fe0,	// (0x00044c20) wait_border_pane_g1_copy1

0x4fcc,	// (0x0003fc0c) form_field_popup_pane_g1

0x4fd4,	// (0x0003fc14) form_field_popup_pane_t1_ParamLimits

0x84ae,	// (0x000430ee) input_focus_pane_cp7_ParamLimits

0x84e8,	// (0x00043128) list_form_pane_ParamLimits

0x4fec,	// (0x0003fc2c) form_field_popup_wide_pane_g1

0x4ff4,	// (0x0003fc34) form_field_popup_wide_pane_t1_ParamLimits

0x84ae,	// (0x000430ee) input_focus_pane_cp8_ParamLimits

0x84f4,	// (0x00043134) list_form_wide_pane_ParamLimits

0xb113,	// (0x00045d53) aid_size_cell_graphic_pane

0x507e,	// (0x0003fcbe) data_form_pane_t1_ParamLimits

0x52e0,	// (0x0003ff20) data_form_wide_pane_t1_ParamLimits

0x9527,	// (0x00044167) bg_status_flat_pane

0x7ba2,	// (0x000427e2) title_pane_t1_ParamLimits

0x7c0a,	// (0x0004284a) title_pane_t2_ParamLimits

0x7c30,	// (0x00042870) title_pane_t3_ParamLimits

0xf55d,	// (0x0004a19d) title_pane_t_ParamLimits

0x8ab3,	// (0x000436f3) level_1_signal_ParamLimits

0x8ac0,	// (0x00043700) level_2_signal_ParamLimits

0x8acd,	// (0x0004370d) level_3_signal_ParamLimits

0x8ada,	// (0x0004371a) level_4_signal_ParamLimits

0x8ae7,	// (0x00043727) level_5_signal_ParamLimits

0x8af4,	// (0x00043734) level_6_signal_ParamLimits

0x8b01,	// (0x00043741) level_7_signal_ParamLimits

0x8ab3,	// (0x000436f3) level_1_battery_ParamLimits

0x8ac0,	// (0x00043700) level_2_battery_ParamLimits

0x8acd,	// (0x0004370d) level_3_battery_ParamLimits

0x8ada,	// (0x0004371a) level_4_battery_ParamLimits

0x8ae7,	// (0x00043727) level_5_battery_ParamLimits

0x8af4,	// (0x00043734) level_6_battery_ParamLimits

0x8b01,	// (0x00043741) level_7_battery_ParamLimits

0xa224,	// (0x00044e64) bg_status_flat_pane_g1

0xa22c,	// (0x00044e6c) bg_status_flat_pane_g2

0xa234,	// (0x00044e74) bg_status_flat_pane_g3

0xa23c,	// (0x00044e7c) bg_status_flat_pane_g4

0xa244,	// (0x00044e84) bg_status_flat_pane_g5

0xa24c,	// (0x00044e8c) bg_status_flat_pane_g6

0xa254,	// (0x00044e94) bg_status_flat_pane_g7

0x7c58,	// (0x00042898) tabs_3_active_pane_t1_ParamLimits

0x7c58,	// (0x00042898) tabs_3_passive_pane_t1_ParamLimits

0x7c72,	// (0x000428b2) tabs_4_active_pane_t1_ParamLimits

0x7c72,	// (0x000428b2) tabs_4_1_passive_pane_t1_ParamLimits

0x866b,	// (0x000432ab) tabs_2_active_pane_t1_ParamLimits

0x866b,	// (0x000432ab) tabs_2_passive_pane_t1_ParamLimits

0x867d,	// (0x000432bd) bg_active_tab_pane_cp4_ParamLimits

0x868b,	// (0x000432cb) tabs_2_long_active_pane_t1_ParamLimits

0x869e,	// (0x000432de) bg_passive_tab_pane_cp4_ParamLimits

0x6928,	// (0x00041568) list_single_midp_graphic_pane_t1_ParamLimits

0x867d,	// (0x000432bd) bg_active_tab_pane_cp5_ParamLimits

0x86aa,	// (0x000432ea) tabs_3_long_active_pane_t1_ParamLimits

0x869e,	// (0x000432de) bg_passive_tab_pane_cp5_ParamLimits

0x6928,	// (0x00041568) list_single_midp_graphic_pane_t1

0x9527,	// (0x00044167) bg_status_flat_pane_ParamLimits

0x95ea,	// (0x0004422a) indicator_pane_cp2_ParamLimits

0x95ea,	// (0x0004422a) indicator_pane_cp2

0x970f,	// (0x0004434f) navi_pane_srt_ParamLimits

0x970f,	// (0x0004434f) navi_pane_srt

0x9733,	// (0x00044373) popup_clock_digital_analogue_window_cp1

0x7d1f,	// (0x0004295f) indicator_pane_t1

0x9114,	// (0x00043d54) copy_highlight_pane

0x9114,	// (0x00043d54) cursor_graphics_pane

0x9114,	// (0x00043d54) graphic_within_text_pane

0x9114,	// (0x00043d54) link_highlight_pane

0xaa24,	// (0x00045664) popup_preview_text_window_t5_ParamLimits

0xaa24,	// (0x00045664) popup_preview_text_window_t5

0x9234,	// (0x00043e74) cursor_digital_pane

0x9234,	// (0x00043e74) cursor_primary_pane

0x9245,	// (0x00043e85) cursor_primary_small_pane

0x924d,	// (0x00043e8d) cursor_secondary_pane

0x9255,	// (0x00043e95) cursor_title_pane

0x9234,	// (0x00043e74) link_highlight_digital_pane

0x923c,	// (0x00043e7c) link_highlight_primary_pane

0x9245,	// (0x00043e85) link_highlight_primary_small_pane

0x924d,	// (0x00043e8d) link_highlight_secondary_pane

0x9255,	// (0x00043e95) link_highlight_title_pane

0x9234,	// (0x00043e74) copy_highlight_digital_pane

0x9234,	// (0x00043e74) copy_highlight_primary_pane

0x9245,	// (0x00043e85) copy_highlight_primary_small_pane

0x924d,	// (0x00043e8d) copy_highlight_secondary_pane

0x9255,	// (0x00043e95) copy_highlight_title_pane

0x924d,	// (0x00043e8d) graphic_text_digital_pane

0xa2c2,	// (0x00044f02) graphic_text_primary_pane

0xa2cb,	// (0x00044f0b) graphic_text_primary_small_pane

0x9245,	// (0x00043e85) graphic_text_secondary_pane

0x9234,	// (0x00043e74) graphic_text_title_pane

0x925d,	// (0x00043e9d) cursor_primary_pane_g1

0xa2b4,	// (0x00044ef4) cursor_text_primary_t1

0xa29c,	// (0x00044edc) cursor_primary_small_pane_g1

0xa2a6,	// (0x00044ee6) cursor_text_primary_small_t1

0xa284,	// (0x00044ec4) cursor_primary_small_pane_g1_copy1

0xa28e,	// (0x00044ece) cursor_text_primary_small_t1_copy1

0xa26c,	// (0x00044eac) cursor_text_title_t1

0xa27a,	// (0x00044eba) cursor_title_pane_g1

0x925d,	// (0x00043e9d) cursor_digital_pane_g1

0x9267,	// (0x00043ea7) cursor_text_digital_t1

0x928c,	// (0x00043ecc) link_highlight_primary_pane_g1

0xa215,	// (0x00044e55) link_highlight_primary_pane_t1

0x9275,	// (0x00043eb5) link_highlight_primary_small_pane_g1

0x927d,	// (0x00043ebd) link_highlight_primary_small_pane_t1

0x928c,	// (0x00043ecc) link_highlight_secondary_pane_g1

0x9294,	// (0x00043ed4) link_highlight_secondary_pane_t1

0xa189,	// (0x00044dc9) link_highlight_title_pane_g1

0xa191,	// (0x00044dd1) link_highlight_title_pane_t1

0xa172,	// (0x00044db2) link_highlight_digital_pane_g1

0xa17a,	// (0x00044dba) link_highlight_digital_pane_t1

0xa025,	// (0x00044c65) copy_highlight_primary_pane_g1

0xa02d,	// (0x00044c6d) copy_highlight_primary_pane_t1

0x9fff,	// (0x00044c3f) copy_highlight_primary_small_pane_g1

0xa016,	// (0x00044c56) copy_highlight_primary_small_pane_t1

0x92a3,	// (0x00043ee3) copy_highlight_secondary_pane_g1

0x92ab,	// (0x00043eeb) copy_highlight_secondary_pane_t1

0x9fff,	// (0x00044c3f) copy_highlight_title_pane_g1

0xa007,	// (0x00044c47) copy_highlight_title_pane_t1

0xa025,	// (0x00044c65) copy_highlight_digital_pane_g1

0xb2dd,	// (0x00045f1d) copy_highlight_digital_pane_t1

0xb231,	// (0x00045e71) graphic_text_primary_pane_g1

0xb2c1,	// (0x00045f01) graphic_text_primary_pane_t1

0xb2cf,	// (0x00045f0f) graphic_text_primary_pane_t2

0x0001,

0xf9d9,	// (0x0004a619) graphic_text_primary_pane_t

0xb29d,	// (0x00045edd) graphic_text_primary_small_pane_g1

0xb2a5,	// (0x00045ee5) graphic_text_primary_small_pane_t1

0xb2b3,	// (0x00045ef3) graphic_text_primary_small_pane_t2

0x0001,

0xf9d4,	// (0x0004a614) graphic_text_primary_small_pane_t

0xb279,	// (0x00045eb9) graphic_text_secondary_pane_g1

0xb281,	// (0x00045ec1) graphic_text_secondary_pane_t1

0xb28f,	// (0x00045ecf) graphic_text_secondary_pane_t2

0x0001,

0xf9cf,	// (0x0004a60f) graphic_text_secondary_pane_t

0xb255,	// (0x00045e95) graphic_text_title_pane_g1

0xb25d,	// (0x00045e9d) graphic_text_title_pane_t1

0xb26b,	// (0x00045eab) graphic_text_title_pane_t2

0x0001,

0xf9ca,	// (0x0004a60a) graphic_text_title_pane_t

0xb231,	// (0x00045e71) graphic_text_digital_pane_g1

0xb239,	// (0x00045e79) graphic_text_digital_pane_t1

0xb247,	// (0x00045e87) graphic_text_digital_pane_t2

0x0001,

0xf9c5,	// (0x0004a605) graphic_text_digital_pane_t

0x7c42,	// (0x00042882) navi_icon_pane_srt_ParamLimits

0x7c42,	// (0x00042882) navi_icon_pane_srt

0x7b62,	// (0x000427a2) navi_midp_pane_srt

0x7b62,	// (0x000427a2) navi_navi_pane_srt

0x7c42,	// (0x00042882) navi_text_pane_srt_ParamLimits

0x7c42,	// (0x00042882) navi_text_pane_srt

0xb1fc,	// (0x00045e3c) navi_navi_icon_text_pane_srt

0xb204,	// (0x00045e44) navi_navi_pane_srt_g1_ParamLimits

0xb204,	// (0x00045e44) navi_navi_pane_srt_g1

0xb216,	// (0x00045e56) navi_navi_pane_srt_g2_ParamLimits

0xb216,	// (0x00045e56) navi_navi_pane_srt_g2

0x0001,

0xf9c0,	// (0x0004a600) navi_navi_pane_srt_g_ParamLimits

0xf9c0,	// (0x0004a600) navi_navi_pane_srt_g

0xb228,	// (0x00045e68) navi_navi_tabs_pane_srt

0xb1fc,	// (0x00045e3c) navi_navi_text_pane_srt

0xb1fc,	// (0x00045e3c) navi_navi_volume_pane_srt

0xb1ed,	// (0x00045e2d) navi_navi_text_pane_srt_t1

0x6d04,	// (0x00041944) navi_navi_volume_pane_srt_g1

0x6d0c,	// (0x0004194c) volume_small_pane_srt_ParamLimits

0x6d0c,	// (0x0004194c) volume_small_pane_srt

0x60d7,	// (0x00040d17) volume_small_pane_srt_g1_ParamLimits

0x60d7,	// (0x00040d17) volume_small_pane_srt_g1

0x60e7,	// (0x00040d27) volume_small_pane_srt_g2_ParamLimits

0x60e7,	// (0x00040d27) volume_small_pane_srt_g2

0x60f8,	// (0x00040d38) volume_small_pane_srt_g3_ParamLimits

0x60f8,	// (0x00040d38) volume_small_pane_srt_g3

0x6109,	// (0x00040d49) volume_small_pane_srt_g4_ParamLimits

0x6109,	// (0x00040d49) volume_small_pane_srt_g4

0x611a,	// (0x00040d5a) volume_small_pane_srt_g5_ParamLimits

0x611a,	// (0x00040d5a) volume_small_pane_srt_g5

0x612b,	// (0x00040d6b) volume_small_pane_srt_g6_ParamLimits

0x612b,	// (0x00040d6b) volume_small_pane_srt_g6

0x613c,	// (0x00040d7c) volume_small_pane_srt_g7_ParamLimits

0x613c,	// (0x00040d7c) volume_small_pane_srt_g7

0x614d,	// (0x00040d8d) volume_small_pane_srt_g8_ParamLimits

0x614d,	// (0x00040d8d) volume_small_pane_srt_g8

0x615e,	// (0x00040d9e) volume_small_pane_srt_g9_ParamLimits

0x615e,	// (0x00040d9e) volume_small_pane_srt_g9

0x616f,	// (0x00040daf) volume_small_pane_srt_g10_ParamLimits

0x616f,	// (0x00040daf) volume_small_pane_srt_g10

0x0009,

0xf768,	// (0x0004a3a8) volume_small_pane_srt_g_ParamLimits

0xf768,	// (0x0004a3a8) volume_small_pane_srt_g

0x801c,	// (0x00042c5c) query_popup_data_pane_cp2

0xb1d3,	// (0x00045e13) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb1d3,	// (0x00045e13) navi_navi_icon_text_pane_srt_t1

0xa2c2,	// (0x00044f02) navi_tabs_2_long_pane_srt

0xa2c2,	// (0x00044f02) navi_tabs_2_pane_srt

0xa2c2,	// (0x00044f02) navi_tabs_3_long_pane_srt

0xa2c2,	// (0x00044f02) navi_tabs_3_pane_srt

0xa2c2,	// (0x00044f02) navi_tabs_4_pane_srt

0x6ce4,	// (0x00041924) tabs_2_active_pane_srt_ParamLimits

0x6ce4,	// (0x00041924) tabs_2_active_pane_srt

0x6cf4,	// (0x00041934) tabs_2_passive_pane_srt_ParamLimits

0x6cf4,	// (0x00041934) tabs_2_passive_pane_srt

0x9454,	// (0x00044094) bg_passive_tab_pane_cp1_srt_ParamLimits

0x9454,	// (0x00044094) bg_passive_tab_pane_cp1_srt

0xb19f,	// (0x00045ddf) bg_passive_tab_pane_g1_cp1_srt

0x8d6d,	// (0x000439ad) bg_passive_tab_pane_g2_cp1_srt

0xb1a8,	// (0x00045de8) bg_passive_tab_pane_g3_cp1_srt

0x7c42,	// (0x00042882) bg_active_tab_pane_cp1_srt_ParamLimits

0x7c42,	// (0x00042882) bg_active_tab_pane_cp1_srt

0xb1b1,	// (0x00045df1) tabs_2_active_pane_srt_g1

0xb1b9,	// (0x00045df9) tabs_2_active_pane_srt_t1_ParamLimits

0xb1b9,	// (0x00045df9) tabs_2_active_pane_srt_t1

0xb19f,	// (0x00045ddf) bg_active_tab_pane_g1_cp1_srt

0x8d6d,	// (0x000439ad) bg_active_tab_pane_g2_cp1_srt

0xb1a8,	// (0x00045de8) bg_active_tab_pane_g3_cp1_srt

0x6cb1,	// (0x000418f1) tabs_3_active_pane_srt_ParamLimits

0x6cb1,	// (0x000418f1) tabs_3_active_pane_srt

0x6cc2,	// (0x00041902) tabs_3_passive_pane_cp_srt_ParamLimits

0x6cc2,	// (0x00041902) tabs_3_passive_pane_cp_srt

0x6cd3,	// (0x00041913) tabs_3_passive_pane_srt_ParamLimits

0x6cd3,	// (0x00041913) tabs_3_passive_pane_srt

0x9454,	// (0x00044094) bg_passive_tab_pane_cp2_srt_ParamLimits

0x9454,	// (0x00044094) bg_passive_tab_pane_cp2_srt

0x92ba,	// (0x00043efa) bg_passive_tab_pane_g1_cp2_srt

0x8d6d,	// (0x000439ad) bg_passive_tab_pane_g2_cp2_srt

0x92c3,	// (0x00043f03) bg_passive_tab_pane_g3_cp2_srt

0x7c42,	// (0x00042882) bg_active_tab_pane_cp2_srt_ParamLimits

0x7c42,	// (0x00042882) bg_active_tab_pane_cp2_srt

0xb185,	// (0x00045dc5) tabs_3_active_pane_srt_g1

0xb18d,	// (0x00045dcd) tabs_3_active_pane_srt_t1_ParamLimits

0xb18d,	// (0x00045dcd) tabs_3_active_pane_srt_t1

0x92ba,	// (0x00043efa) bg_active_tab_pane_g1_cp2_srt

0x8d6d,	// (0x000439ad) bg_active_tab_pane_g2_cp2_srt

0x92c3,	// (0x00043f03) bg_active_tab_pane_g3_cp2_srt

0x6c69,	// (0x000418a9) tabs_4_active_pane_srt_ParamLimits

0x6c69,	// (0x000418a9) tabs_4_active_pane_srt

0x6c7b,	// (0x000418bb) tabs_4_passive_pane_cp2_srt_ParamLimits

0x6c7b,	// (0x000418bb) tabs_4_passive_pane_cp2_srt

0x62d0,	// (0x00040f10) aid_size_cell_toolbar

0x869e,	// (0x000432de) main_idle_act_pane_ParamLimits

0x6483,	// (0x000410c3) popup_large_graphic_colour_window_ParamLimits

0x67ea,	// (0x0004142a) popup_toolbar_window_ParamLimits

0x67ea,	// (0x0004142a) popup_toolbar_window

0xafde,	// (0x00045c1e) list_single_graphic_2heading_pane_ParamLimits

0xafde,	// (0x00045c1e) list_single_graphic_2heading_pane

0x8866,	// (0x000434a6) aid_size_cell_apps_grid_lsc_pane

0x8878,	// (0x000434b8) aid_size_cell_apps_grid_prt_pane

0x9454,	// (0x00044094) bg_wml_button_pane_cp1_ParamLimits

0x9454,	// (0x00044094) bg_wml_button_pane_cp1

0x9c8f,	// (0x000448cf) form_midp_field_text_pane_t1_ParamLimits

0x9a59,	// (0x00044699) input_focus_pane_cp050_ParamLimits

0x9cc6,	// (0x00044906) list_midp_form_text_pane_ParamLimits

0x9c6c,	// (0x000448ac) input_focus_pane_cp051_ParamLimits

0x9c80,	// (0x000448c0) list_midp_choice_pane_ParamLimits

0x9b12,	// (0x00044752) list_single_2graphic_pane_cp3_ParamLimits

0x9b12,	// (0x00044752) list_single_2graphic_pane_cp3

0x9b36,	// (0x00044776) list_single_midp_graphic_pane_ParamLimits

0x9b36,	// (0x00044776) list_single_midp_graphic_pane

0x51c4,	// (0x0003fe04) list_single_graphic_2heading_pane_g1_ParamLimits

0x51c4,	// (0x0003fe04) list_single_graphic_2heading_pane_g1

0x51d0,	// (0x0003fe10) list_single_graphic_2heading_pane_g4_ParamLimits

0x51d0,	// (0x0003fe10) list_single_graphic_2heading_pane_g4

0x51dc,	// (0x0003fe1c) list_single_graphic_2heading_pane_g5_ParamLimits

0x51dc,	// (0x0003fe1c) list_single_graphic_2heading_pane_g5

0x0002,

0xf7bb,	// (0x0004a3fb) list_single_graphic_2heading_pane_g_ParamLimits

0xf7bb,	// (0x0004a3fb) list_single_graphic_2heading_pane_g

0x51e8,	// (0x0003fe28) list_single_graphic_2heading_pane_t1_ParamLimits

0x51e8,	// (0x0003fe28) list_single_graphic_2heading_pane_t1

0x51fc,	// (0x0003fe3c) list_single_graphic_2heading_pane_t2_ParamLimits

0x51fc,	// (0x0003fe3c) list_single_graphic_2heading_pane_t2

0x5218,	// (0x0003fe58) list_single_graphic_2heading_pane_t3_ParamLimits

0x5218,	// (0x0003fe58) list_single_graphic_2heading_pane_t3

0x0002,

0xf7c2,	// (0x0004a402) list_single_graphic_2heading_pane_t_ParamLimits

0xf7c2,	// (0x0004a402) list_single_graphic_2heading_pane_t

0x9887,	// (0x000444c7) bg_popup_sub_pane_cp2

0x98b1,	// (0x000444f1) grid_toobar_pane

0x6897,	// (0x000414d7) cell_toolbar_pane_ParamLimits

0x6897,	// (0x000414d7) cell_toolbar_pane

0x98f9,	// (0x00044539) cell_toolbar_pane_g1_ParamLimits

0x98f9,	// (0x00044539) cell_toolbar_pane_g1

0x990d,	// (0x0004454d) cell_toolbar_pane_g2_ParamLimits

0x990d,	// (0x0004454d) cell_toolbar_pane_g2

0x0001,

0xf7d0,	// (0x0004a410) cell_toolbar_pane_g_ParamLimits

0xf7d0,	// (0x0004a410) cell_toolbar_pane_g

0x992f,	// (0x0004456f) grid_highlight_pane_cp2_ParamLimits

0x992f,	// (0x0004456f) grid_highlight_pane_cp2

0x9949,	// (0x00044589) toolbar_button_pane

0x9955,	// (0x00044595) toolbar_button_pane_g1

0x995d,	// (0x0004459d) toolbar_button_pane_g2

0x9965,	// (0x000445a5) toolbar_button_pane_g3

0x996d,	// (0x000445ad) toolbar_button_pane_g4

0x9975,	// (0x000445b5) toolbar_button_pane_g5

0x997d,	// (0x000445bd) toolbar_button_pane_g6

0x9985,	// (0x000445c5) toolbar_button_pane_g7

0x998d,	// (0x000445cd) toolbar_button_pane_g8

0x9995,	// (0x000445d5) toolbar_button_pane_g9

0x0009,

0xf7d5,	// (0x0004a415) toolbar_button_pane_g

0x68db,	// (0x0004151b) list_single_2graphic_pane_g1_cp3_ParamLimits

0x68db,	// (0x0004151b) list_single_2graphic_pane_g1_cp3

0x68e7,	// (0x00041527) list_single_2graphic_pane_g2_cp3_ParamLimits

0x68e7,	// (0x00041527) list_single_2graphic_pane_g2_cp3

0x68f8,	// (0x00041538) list_single_2graphic_pane_g3_cp3

0x6900,	// (0x00041540) list_single_2graphic_pane_g4_cp3_ParamLimits

0x6900,	// (0x00041540) list_single_2graphic_pane_g4_cp3

0x690c,	// (0x0004154c) list_single_2graphic_pane_t1_cp3_ParamLimits

0x690c,	// (0x0004154c) list_single_2graphic_pane_t1_cp3

0x999d,	// (0x000445dd) list_single_midp_graphic_pane_g2_ParamLimits

0x999d,	// (0x000445dd) list_single_midp_graphic_pane_g2

0x51b4,	// (0x0003fdf4) aid_zoom_text_primary

0x62d8,	// (0x00040f18) aid_zoom_text_secondary

0x9377,	// (0x00043fb7) status_small_pane_g7_ParamLimits

0x9377,	// (0x00043fb7) status_small_pane_g7

0x939a,	// (0x00043fda) status_small_pane_t1_ParamLimits

0x7b79,	// (0x000427b9) title_pane_g2

0x0003,

0xf554,	// (0x0004a194) title_pane_g

0x80bd,	// (0x00042cfd) aid_size_cell_colour_1_pane_ParamLimits

0x80bd,	// (0x00042cfd) aid_size_cell_colour_1_pane

0x80d1,	// (0x00042d11) aid_size_cell_colour_2_pane_ParamLimits

0x80d1,	// (0x00042d11) aid_size_cell_colour_2_pane

0x80e5,	// (0x00042d25) aid_size_cell_colour_3_pane_ParamLimits

0x80e5,	// (0x00042d25) aid_size_cell_colour_3_pane

0x80f9,	// (0x00042d39) aid_size_cell_colour_4_pane_ParamLimits

0x80f9,	// (0x00042d39) aid_size_cell_colour_4_pane

0x5d33,	// (0x00040973) title_pane_stacon_g1_ParamLimits

0x5d33,	// (0x00040973) title_pane_stacon_g1

0xa0a9,	// (0x00044ce9) popup_note_wait_window_g3_ParamLimits

0xa0a9,	// (0x00044ce9) popup_note_wait_window_g3

0xa11f,	// (0x00044d5f) popup_note_wait_window_t5_ParamLimits

0xa11f,	// (0x00044d5f) popup_note_wait_window_t5

0x7b62,	// (0x000427a2) main_feb_china_hwr_fs_writing_pane

0x6368,	// (0x00040fa8) popup_feb_china_hwr_fs_window_ParamLimits

0x6368,	// (0x00040fa8) popup_feb_china_hwr_fs_window

0x693e,	// (0x0004157e) aid_size_cell_hwr_fs_ParamLimits

0x693e,	// (0x0004157e) aid_size_cell_hwr_fs

0x9a59,	// (0x00044699) bg_popup_sub_pane_cp3_ParamLimits

0x9a59,	// (0x00044699) bg_popup_sub_pane_cp3

0x6953,	// (0x00041593) grid_hwr_fs_pane_ParamLimits

0x6953,	// (0x00041593) grid_hwr_fs_pane

0x696b,	// (0x000415ab) linegrid_hwr_fs_pane_ParamLimits

0x696b,	// (0x000415ab) linegrid_hwr_fs_pane

0x697b,	// (0x000415bb) cell_hwr_fs_pane_ParamLimits

0x697b,	// (0x000415bb) cell_hwr_fs_pane

0x9a65,	// (0x000446a5) linegrid_hwr_fs_pane_g1_ParamLimits

0x9a65,	// (0x000446a5) linegrid_hwr_fs_pane_g1

0x9a71,	// (0x000446b1) linegrid_hwr_fs_pane_g2_ParamLimits

0x9a71,	// (0x000446b1) linegrid_hwr_fs_pane_g2

0x9a83,	// (0x000446c3) linegrid_hwr_fs_pane_g3_ParamLimits

0x9a83,	// (0x000446c3) linegrid_hwr_fs_pane_g3

0x699d,	// (0x000415dd) linegrid_hwr_fs_pane_g4_ParamLimits

0x699d,	// (0x000415dd) linegrid_hwr_fs_pane_g4

0x69b7,	// (0x000415f7) linegrid_hwr_fs_pane_g5_ParamLimits

0x69b7,	// (0x000415f7) linegrid_hwr_fs_pane_g5

0x0004,

0xf800,	// (0x0004a440) linegrid_hwr_fs_pane_g_ParamLimits

0xf800,	// (0x0004a440) linegrid_hwr_fs_pane_g

0x9a8f,	// (0x000446cf) cell_hwr_fs_pane_g1_ParamLimits

0x9a8f,	// (0x000446cf) cell_hwr_fs_pane_g1

0x97c1,	// (0x00044401) cell_hwr_fs_pane_g2_ParamLimits

0x97c1,	// (0x00044401) cell_hwr_fs_pane_g2

0x9aa5,	// (0x000446e5) cell_hwr_fs_pane_g3_ParamLimits

0x9aa5,	// (0x000446e5) cell_hwr_fs_pane_g3

0x9ab2,	// (0x000446f2) cell_hwr_fs_pane_g4_ParamLimits

0x9ab2,	// (0x000446f2) cell_hwr_fs_pane_g4

0x0003,

0xf80b,	// (0x0004a44b) cell_hwr_fs_pane_g_ParamLimits

0xf80b,	// (0x0004a44b) cell_hwr_fs_pane_g

0x69cd,	// (0x0004160d) cell_hwr_fs_pane_t1

0x7b62,	// (0x000427a2) grid_highlight_pane_cp6

0x7b62,	// (0x000427a2) main_idle_act2_pane

0x8611,	// (0x00043251) aid_inside_area_popup_secondary

0xa756,	// (0x00045396) aid_inside_area_window_primary_ParamLimits

0xa756,	// (0x00045396) aid_inside_area_window_primary

0xb2ec,	// (0x00045f2c) ai2_news_ticker_pane

0xb2f4,	// (0x00045f34) aid_size_cell_ai1_link_ParamLimits

0xb2f4,	// (0x00045f34) aid_size_cell_ai1_link

0xb30e,	// (0x00045f4e) popup_ai2_data_window_ParamLimits

0xb30e,	// (0x00045f4e) popup_ai2_data_window

0xb324,	// (0x00045f64) popup_ai2_link_window_ParamLimits

0xb324,	// (0x00045f64) popup_ai2_link_window

0x9a59,	// (0x00044699) bg_popup_sub_pane_cp4_ParamLimits

0x9a59,	// (0x00044699) bg_popup_sub_pane_cp4

0xb338,	// (0x00045f78) grid_ai2_link_pane_ParamLimits

0xb338,	// (0x00045f78) grid_ai2_link_pane

0xb34f,	// (0x00045f8f) popup_ai2_link_window_g1_ParamLimits

0xb34f,	// (0x00045f8f) popup_ai2_link_window_g1

0xb35b,	// (0x00045f9b) popup_ai2_link_window_g2_ParamLimits

0xb35b,	// (0x00045f9b) popup_ai2_link_window_g2

0x0001,

0xf9de,	// (0x0004a61e) popup_ai2_link_window_g_ParamLimits

0xf9de,	// (0x0004a61e) popup_ai2_link_window_g

0xb36a,	// (0x00045faa) ai2_mp_button_pane

0xb372,	// (0x00045fb2) ai2_mp_volume_pane

0x9c6c,	// (0x000448ac) bg_popup_sub_pane_cp5_ParamLimits

0x9c6c,	// (0x000448ac) bg_popup_sub_pane_cp5

0xb37a,	// (0x00045fba) heading_ai2_gene_pane_ParamLimits

0xb37a,	// (0x00045fba) heading_ai2_gene_pane

0xb386,	// (0x00045fc6) list_ai2_gene_pane_ParamLimits

0xb386,	// (0x00045fc6) list_ai2_gene_pane

0xb3ce,	// (0x0004600e) cell_ai2_link_pane_ParamLimits

0xb3ce,	// (0x0004600e) cell_ai2_link_pane

0xb3e4,	// (0x00046024) cell_ai2_link_pane_g1

0x7b62,	// (0x000427a2) grid_highlight_pane_cp7

0x6d21,	// (0x00041961) ai2_mp_volume_pane_g1

0xb4b4,	// (0x000460f4) ai2_mp_volume_pane_g2

0xb429,	// (0x00046069) list_ai2_gene_pane_t1

0xb4bc,	// (0x000460fc) ai2_mp_volume_pane_g3

0x0002,

0xf9f7,	// (0x0004a637) ai2_mp_volume_pane_g

0x6d29,	// (0x00041969) volume_small_pane_cp3

0xb4c4,	// (0x00046104) aid_size_cell_ai2_button

0xb4cc,	// (0x0004610c) grid_ai2_button_pane

0xb4d5,	// (0x00046115) cell_ai2_button_pane_ParamLimits

0xb4d5,	// (0x00046115) cell_ai2_button_pane

0x7b58,	// (0x00042798) cell_ai2_button_pane_g1

0x7b62,	// (0x000427a2) grid_highlight_pane_cp8

0xb474,	// (0x000460b4) ai2_gene_pane_t1_ParamLimits

0xb474,	// (0x000460b4) ai2_gene_pane_t1

0x62c6,	// (0x00040f06) aid_height_parent_landscape

0xae15,	// (0x00045a55) aid_height_set_list

0xae26,	// (0x00045a66) aid_size_parent

0xb113,	// (0x00045d53) aid_size_cell_graphic_pane_ParamLimits

0xb396,	// (0x00045fd6) popup_ai2_data_window_g1_ParamLimits

0xb396,	// (0x00045fd6) popup_ai2_data_window_g1

0xb3a2,	// (0x00045fe2) ai2_news_ticker_pane_g1

0xb3aa,	// (0x00045fea) ai2_news_ticker_pane_g2

0x0001,

0xf9e3,	// (0x0004a623) ai2_news_ticker_pane_g

0xb3b2,	// (0x00045ff2) ai2_news_ticker_pane_t1

0xb3c0,	// (0x00046000) ai2_news_ticker_pane_t2

0x0001,

0xf9e8,	// (0x0004a628) ai2_news_ticker_pane_t

0xb3ed,	// (0x0004602d) heading_ai2_gene_pane_g1

0xb3f5,	// (0x00046035) heading_ai2_gene_pane_t1_ParamLimits

0xb3f5,	// (0x00046035) heading_ai2_gene_pane_t1

0xb40a,	// (0x0004604a) list_highlight_pane_cp6

0xb412,	// (0x00046052) ai2_gene_pane_ParamLimits

0xb412,	// (0x00046052) ai2_gene_pane

0xb437,	// (0x00046077) list_ai2_gene_pane_t2

0x0001,

0xf9ed,	// (0x0004a62d) list_ai2_gene_pane_t

0xb445,	// (0x00046085) list_highlight_pane_cp8_ParamLimits

0xb445,	// (0x00046085) list_highlight_pane_cp8

0xb456,	// (0x00046096) ai2_gene_pane_g1_ParamLimits

0xb456,	// (0x00046096) ai2_gene_pane_g1

0xb468,	// (0x000460a8) ai2_gene_pane_g2_ParamLimits

0xb468,	// (0x000460a8) ai2_gene_pane_g2

0x0001,

0xf9f2,	// (0x0004a632) ai2_gene_pane_g_ParamLimits

0xf9f2,	// (0x0004a632) ai2_gene_pane_g

0x8444,	// (0x00043084) scroll_pane_cp12

0x6285,	// (0x00040ec5) control_pane_t3_ParamLimits

0x6285,	// (0x00040ec5) control_pane_t3

0x938b,	// (0x00043fcb) status_small_pane_g8_ParamLimits

0x938b,	// (0x00043fcb) status_small_pane_g8

0x644e,	// (0x0004108e) popup_find_window_ParamLimits

0x6661,	// (0x000412a1) popup_note_image_window_ParamLimits

0x5230,	// (0x0003fe70) list_double2_graphic_pane_vc_g1_ParamLimits

0x5230,	// (0x0003fe70) list_double2_graphic_pane_vc_g1

0x98ed,	// (0x0004452d) list_double2_graphic_pane_vc_g2_ParamLimits

0x98ed,	// (0x0004452d) list_double2_graphic_pane_vc_g2

0x68c7,	// (0x00041507) list_double2_graphic_pane_vc_g3_ParamLimits

0x68c7,	// (0x00041507) list_double2_graphic_pane_vc_g3

0x0002,

0xf7c9,	// (0x0004a409) list_double2_graphic_pane_vc_g_ParamLimits

0xf7c9,	// (0x0004a409) list_double2_graphic_pane_vc_g

0x523c,	// (0x0003fe7c) list_double2_graphic_pane_vc_t1_ParamLimits

0x523c,	// (0x0003fe7c) list_double2_graphic_pane_vc_t1

0x98ed,	// (0x0004452d) list_single_heading_pane_vc_g1_ParamLimits

0x98ed,	// (0x0004452d) list_single_heading_pane_vc_g1

0x68c7,	// (0x00041507) list_single_heading_pane_vc_g2_ParamLimits

0x68c7,	// (0x00041507) list_single_heading_pane_vc_g2

0x0001,

0xf7ea,	// (0x0004a42a) list_single_heading_pane_vc_g_ParamLimits

0xf7ea,	// (0x0004a42a) list_single_heading_pane_vc_g

0x5252,	// (0x0003fe92) list_single_heading_pane_vc_t1_ParamLimits

0x5252,	// (0x0003fe92) list_single_heading_pane_vc_t1

0x526a,	// (0x0003feaa) list_single_heading_pane_vc_t2_ParamLimits

0x526a,	// (0x0003feaa) list_single_heading_pane_vc_t2

0x0001,

0xf7ef,	// (0x0004a42f) list_single_heading_pane_vc_t_ParamLimits

0xf7ef,	// (0x0004a42f) list_single_heading_pane_vc_t

0x99a9,	// (0x000445e9) list_setting_number_pane_vc_g1_ParamLimits

0x99a9,	// (0x000445e9) list_setting_number_pane_vc_g1

0x99b5,	// (0x000445f5) list_setting_number_pane_vc_g2_ParamLimits

0x99b5,	// (0x000445f5) list_setting_number_pane_vc_g2

0x0001,

0xf7f4,	// (0x0004a434) list_setting_number_pane_vc_g_ParamLimits

0xf7f4,	// (0x0004a434) list_setting_number_pane_vc_g

0x99c1,	// (0x00044601) list_setting_number_pane_vc_t1_ParamLimits

0x99c1,	// (0x00044601) list_setting_number_pane_vc_t1

0x99d5,	// (0x00044615) list_setting_number_pane_vc_t2_ParamLimits

0x99d5,	// (0x00044615) list_setting_number_pane_vc_t2

0x99f1,	// (0x00044631) list_setting_number_pane_vc_t3_ParamLimits

0x99f1,	// (0x00044631) list_setting_number_pane_vc_t3

0x0002,

0xf7f9,	// (0x0004a439) list_setting_number_pane_vc_t_ParamLimits

0xf7f9,	// (0x0004a439) list_setting_number_pane_vc_t

0x9a1d,	// (0x0004465d) set_value_pane_vc_ParamLimits

0x9a1d,	// (0x0004465d) set_value_pane_vc

0xafde,	// (0x00045c1e) list_double2_graphic_pane_vc_ParamLimits

0xafde,	// (0x00045c1e) list_double2_graphic_pane_vc

0x6bc5,	// (0x00041805) list_double2_large_graphic_pane_vc_ParamLimits

0x6bc5,	// (0x00041805) list_double2_large_graphic_pane_vc

0xafde,	// (0x00045c1e) list_double2_pane_vc_ParamLimits

0xafde,	// (0x00045c1e) list_double2_pane_vc

0xafde,	// (0x00045c1e) list_double_graphic_heading_pane_vc_ParamLimits

0xafde,	// (0x00045c1e) list_double_graphic_heading_pane_vc

0xafde,	// (0x00045c1e) list_double_graphic_pane_vc_ParamLimits

0xafde,	// (0x00045c1e) list_double_graphic_pane_vc

0xafde,	// (0x00045c1e) list_double_heading_pane_vc_ParamLimits

0xafde,	// (0x00045c1e) list_double_heading_pane_vc

0x6bc5,	// (0x00041805) list_double_large_graphic_pane_vc_ParamLimits

0x6bc5,	// (0x00041805) list_double_large_graphic_pane_vc

0xafde,	// (0x00045c1e) list_double_number_pane_vc_ParamLimits

0xafde,	// (0x00045c1e) list_double_number_pane_vc

0xafde,	// (0x00045c1e) list_double_pane_vc_ParamLimits

0xafde,	// (0x00045c1e) list_double_pane_vc

0xafde,	// (0x00045c1e) list_double_time_pane_vc_ParamLimits

0xafde,	// (0x00045c1e) list_double_time_pane_vc

0xafde,	// (0x00045c1e) list_setting_number_pane_vc_ParamLimits

0xafde,	// (0x00045c1e) list_setting_number_pane_vc

0xafde,	// (0x00045c1e) list_setting_pane_vc_ParamLimits

0xafde,	// (0x00045c1e) list_setting_pane_vc

0xafde,	// (0x00045c1e) list_single_graphic_heading_pane_vc_ParamLimits

0xafde,	// (0x00045c1e) list_single_graphic_heading_pane_vc

0xafde,	// (0x00045c1e) list_single_heading_pane_vc_ParamLimits

0xafde,	// (0x00045c1e) list_single_heading_pane_vc

0x6bd6,	// (0x00041816) list_single_number_heading_pane_vc_ParamLimits

0x6bd6,	// (0x00041816) list_single_number_heading_pane_vc

0x5230,	// (0x0003fe70) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x5230,	// (0x0003fe70) list_double_graphic_heading_pane_vc_g1

0x98ed,	// (0x0004452d) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x98ed,	// (0x0004452d) list_double_graphic_heading_pane_vc_g2

0x68c7,	// (0x00041507) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x68c7,	// (0x00041507) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7c9,	// (0x0004a409) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7c9,	// (0x0004a409) list_double_graphic_heading_pane_vc_g

0x5359,	// (0x0003ff99) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x5359,	// (0x0003ff99) list_double_graphic_heading_pane_vc_t1

0x5252,	// (0x0003fe92) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x5252,	// (0x0003fe92) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9fe,	// (0x0004a63e) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9fe,	// (0x0004a63e) list_double_graphic_heading_pane_vc_t

0x99a9,	// (0x000445e9) list_setting_pane_vc_g1_ParamLimits

0x99a9,	// (0x000445e9) list_setting_pane_vc_g1

0x99b5,	// (0x000445f5) list_setting_pane_vc_g2_ParamLimits

0x99b5,	// (0x000445f5) list_setting_pane_vc_g2

0x0001,

0xf7f4,	// (0x0004a434) list_setting_pane_vc_g_ParamLimits

0xf7f4,	// (0x0004a434) list_setting_pane_vc_g

0xb715,	// (0x00046355) list_setting_pane_vc_t1_ParamLimits

0xb715,	// (0x00046355) list_setting_pane_vc_t1

0xb731,	// (0x00046371) list_setting_pane_vc_t2_ParamLimits

0xb731,	// (0x00046371) list_setting_pane_vc_t2

0x0001,

0xfa2c,	// (0x0004a66c) list_setting_pane_vc_t_ParamLimits

0xfa2c,	// (0x0004a66c) list_setting_pane_vc_t

0x9a1d,	// (0x0004465d) set_value_pane_cp_vc_ParamLimits

0x9a1d,	// (0x0004465d) set_value_pane_cp_vc

0x98ed,	// (0x0004452d) list_single_number_heading_pane_vc_g1_ParamLimits

0x98ed,	// (0x0004452d) list_single_number_heading_pane_vc_g1

0x68c7,	// (0x00041507) list_single_number_heading_pane_vc_g2_ParamLimits

0x68c7,	// (0x00041507) list_single_number_heading_pane_vc_g2

0x0001,

0xf7ea,	// (0x0004a42a) list_single_number_heading_pane_vc_g_ParamLimits

0xf7ea,	// (0x0004a42a) list_single_number_heading_pane_vc_g

0x5252,	// (0x0003fe92) list_single_number_heading_pane_vc_t1_ParamLimits

0x5252,	// (0x0003fe92) list_single_number_heading_pane_vc_t1

0x536d,	// (0x0003ffad) list_single_number_heading_pane_vc_t2_ParamLimits

0x536d,	// (0x0003ffad) list_single_number_heading_pane_vc_t2

0x5381,	// (0x0003ffc1) list_single_number_heading_pane_vc_t3_ParamLimits

0x5381,	// (0x0003ffc1) list_single_number_heading_pane_vc_t3

0x0002,

0xfa31,	// (0x0004a671) list_single_number_heading_pane_vc_t_ParamLimits

0xfa31,	// (0x0004a671) list_single_number_heading_pane_vc_t

0x5230,	// (0x0003fe70) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x5230,	// (0x0003fe70) list_single_graphic_heading_pane_vc_g1

0x98ed,	// (0x0004452d) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x98ed,	// (0x0004452d) list_single_graphic_heading_pane_vc_g4

0x68c7,	// (0x00041507) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x68c7,	// (0x00041507) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7c9,	// (0x0004a409) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7c9,	// (0x0004a409) list_single_graphic_heading_pane_vc_g

0x5252,	// (0x0003fe92) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x5252,	// (0x0003fe92) list_single_graphic_heading_pane_vc_t1

0x5393,	// (0x0003ffd3) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x5393,	// (0x0003ffd3) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa38,	// (0x0004a678) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa38,	// (0x0004a678) list_single_graphic_heading_pane_vc_t

0x98ed,	// (0x0004452d) list_double2_pane_vc_g1_ParamLimits

0x98ed,	// (0x0004452d) list_double2_pane_vc_g1

0x68c7,	// (0x00041507) list_double2_pane_vc_g2_ParamLimits

0x68c7,	// (0x00041507) list_double2_pane_vc_g2

0x0001,

0xf7ea,	// (0x0004a42a) list_double2_pane_vc_g_ParamLimits

0xf7ea,	// (0x0004a42a) list_double2_pane_vc_g

0x53a7,	// (0x0003ffe7) list_double2_pane_vc_t1_ParamLimits

0x53a7,	// (0x0003ffe7) list_double2_pane_vc_t1

0x6d32,	// (0x00041972) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x6d32,	// (0x00041972) list_double2_large_graphic_pane_vc_g1

0x6d3e,	// (0x0004197e) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x6d3e,	// (0x0004197e) list_double2_large_graphic_pane_vc_g2

0x6d4a,	// (0x0004198a) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x6d4a,	// (0x0004198a) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa3d,	// (0x0004a67d) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa3d,	// (0x0004a67d) list_double2_large_graphic_pane_vc_g

0x53bd,	// (0x0003fffd) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x53bd,	// (0x0003fffd) list_double2_large_graphic_pane_vc_t1

0x6d56,	// (0x00041996) list_double_time_pane_vc_g1_ParamLimits

0x6d56,	// (0x00041996) list_double_time_pane_vc_g1

0x6d62,	// (0x000419a2) list_double_time_pane_vc_g2_ParamLimits

0x6d62,	// (0x000419a2) list_double_time_pane_vc_g2

0x0001,

0xfa44,	// (0x0004a684) list_double_time_pane_vc_g_ParamLimits

0xfa44,	// (0x0004a684) list_double_time_pane_vc_g

0x53d3,	// (0x00040013) list_double_time_pane_vc_t1_ParamLimits

0x53d3,	// (0x00040013) list_double_time_pane_vc_t1

0x53f7,	// (0x00040037) list_double_time_pane_vc_t2_ParamLimits

0x53f7,	// (0x00040037) list_double_time_pane_vc_t2

0x5446,	// (0x00040086) list_double_time_pane_vc_t3_ParamLimits

0x5446,	// (0x00040086) list_double_time_pane_vc_t3

0x5458,	// (0x00040098) list_double_time_pane_vc_t4_ParamLimits

0x5458,	// (0x00040098) list_double_time_pane_vc_t4

0x0003,

0xfa49,	// (0x0004a689) list_double_time_pane_vc_t_ParamLimits

0xfa49,	// (0x0004a689) list_double_time_pane_vc_t

0x98ed,	// (0x0004452d) list_double_pane_vc_g1_ParamLimits

0x98ed,	// (0x0004452d) list_double_pane_vc_g1

0x68c7,	// (0x00041507) list_double_pane_vc_g2_ParamLimits

0x68c7,	// (0x00041507) list_double_pane_vc_g2

0x0001,

0xf7ea,	// (0x0004a42a) list_double_pane_vc_g_ParamLimits

0xf7ea,	// (0x0004a42a) list_double_pane_vc_g

0x547d,	// (0x000400bd) list_double_pane_vc_t1_ParamLimits

0x547d,	// (0x000400bd) list_double_pane_vc_t1

0x5491,	// (0x000400d1) list_double_pane_vc_t2_ParamLimits

0x5491,	// (0x000400d1) list_double_pane_vc_t2

0x0001,

0xfa52,	// (0x0004a692) list_double_pane_vc_t_ParamLimits

0xfa52,	// (0x0004a692) list_double_pane_vc_t

0x98ed,	// (0x0004452d) list_double_number_pane_vc_g1_ParamLimits

0x98ed,	// (0x0004452d) list_double_number_pane_vc_g1

0x68c7,	// (0x00041507) list_double_number_pane_vc_g2_ParamLimits

0x68c7,	// (0x00041507) list_double_number_pane_vc_g2

0x0001,

0xf7ea,	// (0x0004a42a) list_double_number_pane_vc_g_ParamLimits

0xf7ea,	// (0x0004a42a) list_double_number_pane_vc_g

0x54a9,	// (0x000400e9) list_double_number_pane_vc_t1_ParamLimits

0x54a9,	// (0x000400e9) list_double_number_pane_vc_t1

0x54bd,	// (0x000400fd) list_double_number_pane_vc_t2_ParamLimits

0x54bd,	// (0x000400fd) list_double_number_pane_vc_t2

0x5491,	// (0x000400d1) list_double_number_pane_vc_t3_ParamLimits

0x5491,	// (0x000400d1) list_double_number_pane_vc_t3

0x0002,

0xfa57,	// (0x0004a697) list_double_number_pane_vc_t_ParamLimits

0xfa57,	// (0x0004a697) list_double_number_pane_vc_t

0x6d6e,	// (0x000419ae) list_double_large_graphic_pane_vc_g1_ParamLimits

0x6d6e,	// (0x000419ae) list_double_large_graphic_pane_vc_g1

0x6d7f,	// (0x000419bf) list_double_large_graphic_pane_vc_g2_ParamLimits

0x6d7f,	// (0x000419bf) list_double_large_graphic_pane_vc_g2

0x6d4a,	// (0x0004198a) list_double_large_graphic_pane_vc_g3_ParamLimits

0x6d4a,	// (0x0004198a) list_double_large_graphic_pane_vc_g3

0x54d1,	// (0x00040111) list_double_large_graphic_pane_vc_g4_ParamLimits

0x54d1,	// (0x00040111) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa5e,	// (0x0004a69e) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa5e,	// (0x0004a69e) list_double_large_graphic_pane_vc_g

0x54dd,	// (0x0004011d) list_double_large_graphic_pane_vc_t1_ParamLimits

0x54dd,	// (0x0004011d) list_double_large_graphic_pane_vc_t1

0x54f6,	// (0x00040136) list_double_large_graphic_pane_vc_t2_ParamLimits

0x54f6,	// (0x00040136) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa67,	// (0x0004a6a7) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa67,	// (0x0004a6a7) list_double_large_graphic_pane_vc_t

0x98ed,	// (0x0004452d) list_double_heading_pane_vc_g1_ParamLimits

0x98ed,	// (0x0004452d) list_double_heading_pane_vc_g1

0x68c7,	// (0x00041507) list_double_heading_pane_vc_g2_ParamLimits

0x68c7,	// (0x00041507) list_double_heading_pane_vc_g2

0x0001,

0xf7ea,	// (0x0004a42a) list_double_heading_pane_vc_g_ParamLimits

0xf7ea,	// (0x0004a42a) list_double_heading_pane_vc_g

0x550f,	// (0x0004014f) list_double_heading_pane_vc_t1_ParamLimits

0x550f,	// (0x0004014f) list_double_heading_pane_vc_t1

0x5252,	// (0x0003fe92) list_double_heading_pane_vc_t2_ParamLimits

0x5252,	// (0x0003fe92) list_double_heading_pane_vc_t2

0x0001,

0xfa6c,	// (0x0004a6ac) list_double_heading_pane_vc_t_ParamLimits

0xfa6c,	// (0x0004a6ac) list_double_heading_pane_vc_t

0x5230,	// (0x0003fe70) list_double_graphic_pane_vc_g1_ParamLimits

0x5230,	// (0x0003fe70) list_double_graphic_pane_vc_g1

0x6d8e,	// (0x000419ce) list_double_graphic_pane_vc_g2_ParamLimits

0x6d8e,	// (0x000419ce) list_double_graphic_pane_vc_g2

0x6d9d,	// (0x000419dd) list_double_graphic_pane_vc_g3_ParamLimits

0x6d9d,	// (0x000419dd) list_double_graphic_pane_vc_g3

0x0002,

0xfa71,	// (0x0004a6b1) list_double_graphic_pane_vc_g_ParamLimits

0xfa71,	// (0x0004a6b1) list_double_graphic_pane_vc_g

0x5523,	// (0x00040163) list_double_graphic_pane_vc_t1_ParamLimits

0x5523,	// (0x00040163) list_double_graphic_pane_vc_t1

0x5491,	// (0x000400d1) list_double_graphic_pane_vc_t2_ParamLimits

0x5491,	// (0x000400d1) list_double_graphic_pane_vc_t2

0x0001,

0xfa78,	// (0x0004a6b8) list_double_graphic_pane_vc_t_ParamLimits

0xfa78,	// (0x0004a6b8) list_double_graphic_pane_vc_t

0x581d,	// (0x0004045d) aid_size_cell_fastswap

0x5825,	// (0x00040465) aid_size_cell_touch_ParamLimits

0x5825,	// (0x00040465) aid_size_cell_touch

0x5a80,	// (0x000406c0) popup_fast_swap_wide_window_ParamLimits

0x5a80,	// (0x000406c0) popup_fast_swap_wide_window

0x5b8a,	// (0x000407ca) touch_pane_ParamLimits

0x5b8a,	// (0x000407ca) touch_pane

0x849a,	// (0x000430da) button_value_adjust_pane_cp2

0x4ed0,	// (0x0003fb10) button_value_adjust_pane_cp4

0x4ef4,	// (0x0003fb34) form_field_data_pane_cp2

0x4f15,	// (0x0003fb55) form_field_data_wide_pane_cp2

0x8931,	// (0x00043571) bg_scroll_pane_ParamLimits

0x5e96,	// (0x00040ad6) scroll_handle_pane_ParamLimits

0x5eaa,	// (0x00040aea) scroll_sc2_down_pane_ParamLimits

0x5eaa,	// (0x00040aea) scroll_sc2_down_pane

0x8962,	// (0x000435a2) scroll_sc2_up_pane_ParamLimits

0x8962,	// (0x000435a2) scroll_sc2_up_pane

0xbbf2,	// (0x00046832) grid_wheel_folder_pane_g1_ParamLimits

0xbbf2,	// (0x00046832) grid_wheel_folder_pane_g1

0x606f,	// (0x00040caf) clock_nsta_pane_cp2_ParamLimits

0x606f,	// (0x00040caf) clock_nsta_pane_cp2

0x869e,	// (0x000432de) listscroll_midp_pane_ParamLimits

0x911c,	// (0x00043d5c) midp_canvas_pane

0x9406,	// (0x00044046) nsta_clock_indic_pane

0x943a,	// (0x0004407a) listscroll_form_pane_vc

0x9442,	// (0x00044082) listscroll_set_pane_vc_ParamLimits

0x9442,	// (0x00044082) listscroll_set_pane_vc

0x9543,	// (0x00044183) clock_nsta_pane

0x95b8,	// (0x000441f8) indicator_nsta_pane

0x9887,	// (0x000444c7) bg_popup_sub_pane_cp2_ParamLimits

0x989b,	// (0x000444db) find_pane_cp2_ParamLimits

0x989b,	// (0x000444db) find_pane_cp2

0x98b1,	// (0x000444f1) grid_toobar_pane_ParamLimits

0x9a2d,	// (0x0004466d) list_form_gen_pane_vc_ParamLimits

0x9a2d,	// (0x0004466d) list_form_gen_pane_vc

0x9a43,	// (0x00044683) scroll_pane_cp8_vc_ParamLimits

0x9a43,	// (0x00044683) scroll_pane_cp8_vc

0x9abf,	// (0x000446ff) data_form_wide_pane_vc_ParamLimits

0x9abf,	// (0x000446ff) data_form_wide_pane_vc

0x9acb,	// (0x0004470b) form_field_data_wide_pane_vc_g1

0x9ad3,	// (0x00044713) form_field_data_wide_pane_vc_t1_ParamLimits

0x9ad3,	// (0x00044713) form_field_data_wide_pane_vc_t1

0x84ae,	// (0x000430ee) input_focus_pane_cp6_vc_ParamLimits

0x84ae,	// (0x000430ee) input_focus_pane_cp6_vc

0x9dff,	// (0x00044a3f) list_midp_pane_ParamLimits

0x9e0b,	// (0x00044a4b) scroll_pane_cp16_ParamLimits

0x9e0b,	// (0x00044a4b) scroll_pane_cp16

0x9e59,	// (0x00044a99) button_value_adjust_pane_ParamLimits

0x9e59,	// (0x00044a99) button_value_adjust_pane

0xae38,	// (0x00045a78) button_value_adjust_pane_cp6_ParamLimits

0xae38,	// (0x00045a78) button_value_adjust_pane_cp6

0xaf62,	// (0x00045ba2) settings_code_pane_cp_ParamLimits

0xaf62,	// (0x00045ba2) settings_code_pane_cp

0x7b58,	// (0x00042798) cell_touch_pane_g1

0x7b58,	// (0x00042798) cell_touch_pane_g2

0x0001,

0xf70e,	// (0x0004a34e) cell_touch_pane_g

0xb4e7,	// (0x00046127) cell_touch_pane_cp_ParamLimits

0xb4e7,	// (0x00046127) cell_touch_pane_cp

0xb4f7,	// (0x00046137) cell_touch_pane_ParamLimits

0xb4f7,	// (0x00046137) cell_touch_pane

0x7b58,	// (0x00042798) scroll_sc2_down_pane_g1

0x7b58,	// (0x00042798) scroll_sc2_up_pane_g1

0x7b62,	// (0x000427a2) bg_set_opt_pane_cp4_vc

0xb509,	// (0x00046149) list_set_graphic_pane_vc_g1_ParamLimits

0xb509,	// (0x00046149) list_set_graphic_pane_vc_g1

0xb515,	// (0x00046155) list_set_graphic_pane_vc_g2_ParamLimits

0xb515,	// (0x00046155) list_set_graphic_pane_vc_g2

0x0001,

0xfa03,	// (0x0004a643) list_set_graphic_pane_vc_g_ParamLimits

0xfa03,	// (0x0004a643) list_set_graphic_pane_vc_g

0xb521,	// (0x00046161) text_primary_small_cp13_vc_ParamLimits

0xb521,	// (0x00046161) text_primary_small_cp13_vc

0xb539,	// (0x00046179) list_set_graphic_pane_vc_ParamLimits

0xb539,	// (0x00046179) list_set_graphic_pane_vc

0x7b62,	// (0x000427a2) input_focus_pane_cp2_vc

0x7b58,	// (0x00042798) setting_code_pane_vc_g1

0x7c8d,	// (0x000428cd) setting_code_pane_vc_t1

0xb54b,	// (0x0004618b) set_text_pane_vc_t1_ParamLimits

0xb54b,	// (0x0004618b) set_text_pane_vc_t1

0x7b62,	// (0x000427a2) input_focus_pane_cp1_vc

0xb566,	// (0x000461a6) list_set_text_pane_vc

0x7b58,	// (0x00042798) setting_text_pane_vc_g1

0x7b62,	// (0x000427a2) bg_set_opt_pane_cp2_vc

0x7c84,	// (0x000428c4) setting_slider_graphic_pane_vc_g1

0xb570,	// (0x000461b0) setting_slider_graphic_pane_vc_t1

0xb580,	// (0x000461c0) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa08,	// (0x0004a648) setting_slider_graphic_pane_vc_t

0xb590,	// (0x000461d0) slider_set_pane_cp_vc

0xb598,	// (0x000461d8) slider_set_pane_vc_g1

0xb5a1,	// (0x000461e1) slider_set_pane_vc_g2

0x0006,

0xfa0d,	// (0x0004a64d) slider_set_pane_vc_g

0x8515,	// (0x00043155) set_opt_bg_pane_g1_copy1

0x851d,	// (0x0004315d) set_opt_bg_pane_g2_copy1

0xb5cd,	// (0x0004620d) set_opt_bg_pane_g3_copy1

0x852d,	// (0x0004316d) set_opt_bg_pane_g4_copy1

0x8535,	// (0x00043175) set_opt_bg_pane_g5_copy1

0x853d,	// (0x0004317d) set_opt_bg_pane_g6_copy1

0xb5d7,	// (0x00046217) set_opt_bg_pane_g7_copy1

0xb5df,	// (0x0004621f) set_opt_bg_pane_g8_copy1

0xb5e9,	// (0x00046229) set_opt_bg_pane_g9_copy1

0x7b62,	// (0x000427a2) bg_set_opt_pane_cp_vc

0xb5f3,	// (0x00046233) setting_slider_pane_vc_t1

0xb602,	// (0x00046242) setting_slider_pane_vc_t2

0xb612,	// (0x00046252) setting_slider_pane_vc_t3

0x0002,

0xfa1c,	// (0x0004a65c) setting_slider_pane_vc_t

0xb622,	// (0x00046262) slider_set_pane_vc

0x69db,	// (0x0004161b) volume_set_pane_vc_g1

0x69e4,	// (0x00041624) volume_set_pane_vc_g2

0x69ed,	// (0x0004162d) volume_set_pane_vc_g3

0x69f6,	// (0x00041636) volume_set_pane_vc_g4

0x69ff,	// (0x0004163f) volume_set_pane_vc_g5

0x6a08,	// (0x00041648) volume_set_pane_vc_g6

0x6a11,	// (0x00041651) volume_set_pane_vc_g7

0x6a1a,	// (0x0004165a) volume_set_pane_vc_g8

0x6a23,	// (0x00041663) volume_set_pane_vc_g9

0x6a2c,	// (0x0004166c) volume_set_pane_vc_g10

0x0009,

0xf8c1,	// (0x0004a501) volume_set_pane_vc_g

0xb62a,	// (0x0004626a) volume_set_pane_vc

0xb632,	// (0x00046272) button_value_adjust_pane_cp1_vc

0xb63c,	// (0x0004627c) list_highlight_pane_cp2_vc

0xb645,	// (0x00046285) list_set_pane_vc_ParamLimits

0xb645,	// (0x00046285) list_set_pane_vc

0xb6a3,	// (0x000462e3) main_pane_set_vc_t1_ParamLimits

0xb6a3,	// (0x000462e3) main_pane_set_vc_t1

0xb6b8,	// (0x000462f8) main_pane_set_vc_t2_ParamLimits

0xb6b8,	// (0x000462f8) main_pane_set_vc_t2

0xb6ca,	// (0x0004630a) main_pane_set_vc_t3_ParamLimits

0xb6ca,	// (0x0004630a) main_pane_set_vc_t3

0xb6de,	// (0x0004631e) main_pane_set_vc_t4_ParamLimits

0xb6de,	// (0x0004631e) main_pane_set_vc_t4

0x0003,

0xfa23,	// (0x0004a663) main_pane_set_vc_t_ParamLimits

0xfa23,	// (0x0004a663) main_pane_set_vc_t

0xb6f2,	// (0x00046332) setting_code_pane_vc_ParamLimits

0xb6f2,	// (0x00046332) setting_code_pane_vc

0xb703,	// (0x00046343) setting_slider_graphic_pane_vc

0xb703,	// (0x00046343) setting_slider_pane_vc

0xb703,	// (0x00046343) setting_text_pane_vc

0xb703,	// (0x00046343) setting_volume_pane_vc

0xb70d,	// (0x0004634d) scroll_pane_cp121_vc

0x8488,	// (0x000430c8) set_content_pane_vc

0xb74d,	// (0x0004638d) button_value_adjust_pane_g1

0xb756,	// (0x00046396) button_value_adjust_pane_g2

0x0001,

0xfa7d,	// (0x0004a6bd) button_value_adjust_pane_g

0xb75f,	// (0x0004639f) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb75f,	// (0x0004639f) form_field_slider_wide_pane_vc_t1

0xb773,	// (0x000463b3) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb773,	// (0x000463b3) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa82,	// (0x0004a6c2) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa82,	// (0x0004a6c2) form_field_slider_wide_pane_vc_t

0x7ebd,	// (0x00042afd) input_focus_pane_cp10_vc_ParamLimits

0x7ebd,	// (0x00042afd) input_focus_pane_cp10_vc

0xb7a1,	// (0x000463e1) slider_cont_pane_cp1_vc_ParamLimits

0xb7a1,	// (0x000463e1) slider_cont_pane_cp1_vc

0xb7b3,	// (0x000463f3) slider_form_pane_g1_cp2

0xb5a1,	// (0x000461e1) slider_form_pane_g2_cp2

0xb7e0,	// (0x00046420) form_field_slider_pane_vc_t3

0xb7ee,	// (0x0004642e) form_field_slider_pane_vc_t4

0xb7fc,	// (0x0004643c) slider_form_pane_vc_ParamLimits

0xb7fc,	// (0x0004643c) slider_form_pane_vc

0xb809,	// (0x00046449) form_field_slider_pane_vc_t1_ParamLimits

0xb809,	// (0x00046449) form_field_slider_pane_vc_t1

0xb773,	// (0x000463b3) form_field_slider_pane_vc_t2_ParamLimits

0xb773,	// (0x000463b3) form_field_slider_pane_vc_t2

0x0001,

0xfa94,	// (0x0004a6d4) form_field_slider_pane_vc_t_ParamLimits

0xfa94,	// (0x0004a6d4) form_field_slider_pane_vc_t

0x7ebd,	// (0x00042afd) input_focus_pane_cp9_vc_ParamLimits

0x7ebd,	// (0x00042afd) input_focus_pane_cp9_vc

0xb825,	// (0x00046465) slider_cont_pane_vc_ParamLimits

0xb825,	// (0x00046465) slider_cont_pane_vc

0xb839,	// (0x00046479) list_form_graphic_pane_cp_vc_ParamLimits

0xb839,	// (0x00046479) list_form_graphic_pane_cp_vc

0x9acb,	// (0x0004470b) form_field_popup_wide_pane_vc_g1

0xb84e,	// (0x0004648e) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb84e,	// (0x0004648e) form_field_popup_wide_pane_vc_t1

0x84ae,	// (0x000430ee) input_focus_pane_cp8_vc_ParamLimits

0x84ae,	// (0x000430ee) input_focus_pane_cp8_vc

0xb893,	// (0x000464d3) list_form_wide_pane_vc_ParamLimits

0xb893,	// (0x000464d3) list_form_wide_pane_vc

0xb89f,	// (0x000464df) list_form_graphic_pane_vc_g1

0xb8a7,	// (0x000464e7) list_form_graphic_pane_vc_t1_ParamLimits

0xb8a7,	// (0x000464e7) list_form_graphic_pane_vc_t1

0x7c42,	// (0x00042882) list_highlight_pane_cp5_vc_ParamLimits

0x7c42,	// (0x00042882) list_highlight_pane_cp5_vc

0xb8c3,	// (0x00046503) list_form_graphic_pane_vc_ParamLimits

0xb8c3,	// (0x00046503) list_form_graphic_pane_vc

0x9acb,	// (0x0004470b) form_field_popup_pane_vc_g1

0xb8d9,	// (0x00046519) form_field_popup_pane_vc_t1_ParamLimits

0xb8d9,	// (0x00046519) form_field_popup_pane_vc_t1

0x84ae,	// (0x000430ee) input_focus_pane_cp7_vc_ParamLimits

0x84ae,	// (0x000430ee) input_focus_pane_cp7_vc

0xb8f0,	// (0x00046530) list_form_pane_vc_ParamLimits

0xb8f0,	// (0x00046530) list_form_pane_vc

0xb8fc,	// (0x0004653c) data_form_pane_vc_t1_ParamLimits

0xb8fc,	// (0x0004653c) data_form_pane_vc_t1

0x8515,	// (0x00043155) input_focus_pane_vc_g1

0x851d,	// (0x0004315d) input_focus_pane_vc_g2

0x8525,	// (0x00043165) input_focus_pane_vc_g3

0x852d,	// (0x0004316d) input_focus_pane_vc_g4

0x8535,	// (0x00043175) input_focus_pane_vc_g5

0x853d,	// (0x0004317d) input_focus_pane_vc_g6

0x8545,	// (0x00043185) input_focus_pane_vc_g7

0x854d,	// (0x0004318d) input_focus_pane_vc_g8

0x8555,	// (0x00043195) input_focus_pane_vc_g9

0x7b58,	// (0x00042798) input_focus_pane_vc_g10

0x0009,

0xf697,	// (0x0004a2d7) input_focus_pane_vc_g

0x9abf,	// (0x000446ff) data_form_pane_vc_ParamLimits

0x9abf,	// (0x000446ff) data_form_pane_vc

0x9acb,	// (0x0004470b) form_field_data_pane_vc_g1

0xb917,	// (0x00046557) form_field_data_pane_vc_t1_ParamLimits

0xb917,	// (0x00046557) form_field_data_pane_vc_t1

0x84ae,	// (0x000430ee) input_focus_pane_vc_ParamLimits

0x84ae,	// (0x000430ee) input_focus_pane_vc

0xb931,	// (0x00046571) button_value_adjust_pane_cp3_vc

0xb939,	// (0x00046579) button_value_adjust_pane_cp5_vc

0xb941,	// (0x00046581) form_field_data_pane_vc_ParamLimits

0xb941,	// (0x00046581) form_field_data_pane_vc

0xb958,	// (0x00046598) form_field_data_pane_vc_cp2

0xb960,	// (0x000465a0) form_field_data_wide_pane_vc_ParamLimits

0xb960,	// (0x000465a0) form_field_data_wide_pane_vc

0xb976,	// (0x000465b6) form_field_data_wide_pane_vc_cp2

0xb97e,	// (0x000465be) form_field_popup_pane_vc_ParamLimits

0xb97e,	// (0x000465be) form_field_popup_pane_vc

0xb995,	// (0x000465d5) form_field_popup_wide_pane_vc_ParamLimits

0xb995,	// (0x000465d5) form_field_popup_wide_pane_vc

0xb9ab,	// (0x000465eb) form_field_slider_pane_vc_ParamLimits

0xb9ab,	// (0x000465eb) form_field_slider_pane_vc

0xb9be,	// (0x000465fe) form_field_slider_wide_pane_vc_ParamLimits

0xb9be,	// (0x000465fe) form_field_slider_wide_pane_vc

0xb9d1,	// (0x00046611) grid_touch_1_pane_ParamLimits

0xb9d1,	// (0x00046611) grid_touch_1_pane

0xb9dd,	// (0x0004661d) grid_touch_2_pane_ParamLimits

0xb9dd,	// (0x0004661d) grid_touch_2_pane

0x93d1,	// (0x00044011) touch_pane_g1_ParamLimits

0x93d1,	// (0x00044011) touch_pane_g1

0xb9f5,	// (0x00046635) cell_app_pane_cp_wide_ParamLimits

0xb9f5,	// (0x00046635) cell_app_pane_cp_wide

0xba06,	// (0x00046646) grid_popup_fast_wide_pane_ParamLimits

0xba06,	// (0x00046646) grid_popup_fast_wide_pane

0xba1a,	// (0x0004665a) scroll_pane_cp19_ParamLimits

0xba1a,	// (0x0004665a) scroll_pane_cp19

0x7b62,	// (0x000427a2) bg_popup_window_pane_cp20

0xba2e,	// (0x0004666e) listscroll_popup_fast_wide_pane

0x7c42,	// (0x00042882) grid_indicator_nsta_pane

0xba36,	// (0x00046676) clock_nsta_pane_g1

0xba3f,	// (0x0004667f) clock_nsta_pane_t1

0xba5b,	// (0x0004669b) cell_indicator_nsta_pane_ParamLimits

0xba5b,	// (0x0004669b) cell_indicator_nsta_pane

0xba93,	// (0x000466d3) cell_indicator_nsta_pane_g1

0xbaa1,	// (0x000466e1) cell_indicator_nsta_pane_g2

0x0001,

0xfaa5,	// (0x0004a6e5) cell_indicator_nsta_pane_g

0xbab7,	// (0x000466f7) clock_nsta_pane_cp

0xbabf,	// (0x000466ff) indicator_nsta_pane_cp

0xbac8,	// (0x00046708) nsta_clock_indic_pane_g1

0x7d0b,	// (0x0004294b) grid_indicator_pane

0x8a57,	// (0x00043697) scroll_pane_cp29

0x5fbe,	// (0x00040bfe) indicator_nsta_pane_cp2_ParamLimits

0x5fbe,	// (0x00040bfe) indicator_nsta_pane_cp2

0x7c42,	// (0x00042882) main_apps_wheel_pane

0x9ce0,	// (0x00044920) form_midp_field_text_pane_ParamLimits

0x9e2b,	// (0x00044a6b) scroll_bar_cp050_ParamLimits

0xbb31,	// (0x00046771) cell_indicator_pane_ParamLimits

0xbb31,	// (0x00046771) cell_indicator_pane

0xbb48,	// (0x00046788) cell_indicator_pane_g1

0xbb52,	// (0x00046792) grid_wheel_folder_pane_ParamLimits

0xbb52,	// (0x00046792) grid_wheel_folder_pane

0xbb66,	// (0x000467a6) list_wheel_apps_pane_ParamLimits

0xbb66,	// (0x000467a6) list_wheel_apps_pane

0xbb77,	// (0x000467b7) main_apps_wheel_pane_g1_ParamLimits

0xbb77,	// (0x000467b7) main_apps_wheel_pane_g1

0xbb8b,	// (0x000467cb) main_apps_wheel_pane_g2_ParamLimits

0xbb8b,	// (0x000467cb) main_apps_wheel_pane_g2

0x0001,

0xfac1,	// (0x0004a701) main_apps_wheel_pane_g_ParamLimits

0xfac1,	// (0x0004a701) main_apps_wheel_pane_g

0xbba3,	// (0x000467e3) main_apps_wheel_pane_t1_ParamLimits

0xbba3,	// (0x000467e3) main_apps_wheel_pane_t1

0xbbc6,	// (0x00046806) list_wheel_apps_pane_g1

0xbbce,	// (0x0004680e) list_wheel_apps_pane_g2

0xbbd6,	// (0x00046816) list_wheel_apps_pane_g3

0xbbde,	// (0x0004681e) list_wheel_apps_pane_g4

0xbbe8,	// (0x00046828) list_wheel_apps_pane_g5

0x0004,

0xfac6,	// (0x0004a706) list_wheel_apps_pane_g

0x8fa0,	// (0x00043be0) navi_icon_text_pane

0x9476,	// (0x000440b6) aid_fill_nsta

0xbc0b,	// (0x0004684b) navi_icon_text_pane_g1

0xbc17,	// (0x00046857) navi_icon_text_pane_t1

0x8e3e,	// (0x00043a7e) list_set_graphic_pane_t1_ParamLimits

0x8e3e,	// (0x00043a7e) list_set_graphic_pane_t1

0xa59f,	// (0x000451df) popup_midp_note_alarm_window_t6_ParamLimits

0xa59f,	// (0x000451df) popup_midp_note_alarm_window_t6

0xa5b1,	// (0x000451f1) popup_midp_note_alarm_window_t7_ParamLimits

0xa5b1,	// (0x000451f1) popup_midp_note_alarm_window_t7

0xa5c3,	// (0x00045203) popup_midp_note_alarm_window_t8_ParamLimits

0xa5c3,	// (0x00045203) popup_midp_note_alarm_window_t8

0xa5d5,	// (0x00045215) popup_midp_note_alarm_window_t9_ParamLimits

0xa5d5,	// (0x00045215) popup_midp_note_alarm_window_t9

0xa5e7,	// (0x00045227) popup_midp_note_alarm_window_t10_ParamLimits

0xa5e7,	// (0x00045227) popup_midp_note_alarm_window_t10

0xa5f9,	// (0x00045239) popup_midp_note_alarm_window_t11_ParamLimits

0xa5f9,	// (0x00045239) popup_midp_note_alarm_window_t11

0xa60b,	// (0x0004524b) scroll_pane_cp17_ParamLimits

0xa60b,	// (0x0004524b) scroll_pane_cp17

0x69db,	// (0x0004161b) volume_small_pane_cp_g1

0x6da9,	// (0x000419e9) volume_small_pane_cp_g2

0x6db2,	// (0x000419f2) volume_small_pane_cp_g3

0x6dbb,	// (0x000419fb) volume_small_pane_cp_g4

0x6dc4,	// (0x00041a04) volume_small_pane_cp_g5

0x6dcd,	// (0x00041a0d) volume_small_pane_cp_g6

0x6dd6,	// (0x00041a16) volume_small_pane_cp_g7

0x6ddf,	// (0x00041a1f) volume_small_pane_cp_g8

0x6de8,	// (0x00041a28) volume_small_pane_cp_g9

0x6df1,	// (0x00041a31) volume_small_pane_cp_g10

0x91e3,	// (0x00043e23) midp_ticker_pane_g1_ParamLimits

0x91ef,	// (0x00043e2f) midp_ticker_pane_g2_ParamLimits

0xf763,	// (0x0004a3a3) midp_ticker_pane_g_ParamLimits

0x91fb,	// (0x00043e3b) midp_ticker_pane_t1_ParamLimits

0x948c,	// (0x000440cc) aid_fill_nsta_2

0x9e17,	// (0x00044a57) list_form2_midp_pane

0xafad,	// (0x00045bed) midp_editing_number_pane_ParamLimits

0xafbc,	// (0x00045bfc) midp_ticker_pane_ParamLimits

0xbc29,	// (0x00046869) form2_midp_field_pane

0xbc4d,	// (0x0004688d) scroll_pane_cp51

0xbc6d,	// (0x000468ad) form2_midp_button_pane_ParamLimits

0xbc6d,	// (0x000468ad) form2_midp_button_pane

0xbc7f,	// (0x000468bf) form2_midp_content_pane_ParamLimits

0xbc7f,	// (0x000468bf) form2_midp_content_pane

0xbc99,	// (0x000468d9) form2_midp_field_choice_group_pane

0xbca1,	// (0x000468e1) form2_midp_field_pane_g1

0xbca9,	// (0x000468e9) form2_midp_field_pane_g2

0xbcb1,	// (0x000468f1) form2_midp_field_pane_g3

0xbcb9,	// (0x000468f9) form2_midp_field_pane_g4

0x0003,

0xfaeb,	// (0x0004a72b) form2_midp_field_pane_g

0xbcc1,	// (0x00046901) form2_midp_gauge_slider_pane

0xbcc9,	// (0x00046909) form2_midp_gauge_wait_pane

0xbcd1,	// (0x00046911) form2_midp_image_pane_ParamLimits

0xbcd1,	// (0x00046911) form2_midp_image_pane

0xbcec,	// (0x0004692c) form2_midp_label_pane_ParamLimits

0xbcec,	// (0x0004692c) form2_midp_label_pane

0xbd05,	// (0x00046945) form2_midp_label_pane_cp_ParamLimits

0xbd05,	// (0x00046945) form2_midp_label_pane_cp

0xbd26,	// (0x00046966) form2_midp_string_pane_ParamLimits

0xbd26,	// (0x00046966) form2_midp_string_pane

0x5537,	// (0x00040177) form2_midp_text_pane_ParamLimits

0x5537,	// (0x00040177) form2_midp_text_pane

0xbd38,	// (0x00046978) form2_midp_time_pane

0xbd48,	// (0x00046988) input_focus_pane_cp51_ParamLimits

0xbd48,	// (0x00046988) input_focus_pane_cp51

0xbd60,	// (0x000469a0) form2_midp_label_pane_t1_ParamLimits

0xbd60,	// (0x000469a0) form2_midp_label_pane_t1

0x5556,	// (0x00040196) form2_mdip_text_pane_t1_ParamLimits

0x5556,	// (0x00040196) form2_mdip_text_pane_t1

0x5574,	// (0x000401b4) form2_midp_time_pane_t1

0xbda9,	// (0x000469e9) form2_midp_gauge_slider_pane_t1

0xbdbb,	// (0x000469fb) form2_midp_gauge_slider_pane_t2

0xbdcd,	// (0x00046a0d) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf4,	// (0x0004a734) form2_midp_gauge_slider_pane_t

0xbddf,	// (0x00046a1f) form2_midp_slider_pane

0xbdeb,	// (0x00046a2b) form2_midp_gauge_wait_pane_t1

0xbdf9,	// (0x00046a39) form2_midp_wait_pane_ParamLimits

0xbdf9,	// (0x00046a39) form2_midp_wait_pane

0x9b12,	// (0x00044752) list_single_2graphic_pane_cp4_ParamLimits

0x9b12,	// (0x00044752) list_single_2graphic_pane_cp4

0xbe24,	// (0x00046a64) list_single_midp_graphic_pane_cp_ParamLimits

0xbe24,	// (0x00046a64) list_single_midp_graphic_pane_cp

0x7b62,	// (0x000427a2) list_highlight_pane_cp20

0xbe53,	// (0x00046a93) list_single_2graphic_pane_g1_cp4

0xbe5b,	// (0x00046a9b) list_single_2graphic_pane_g2_cp4

0xbe63,	// (0x00046aa3) list_single_2graphic_pane_t1_cp4

0x7c42,	// (0x00042882) list_highlight_pane_cp21

0xbe72,	// (0x00046ab2) list_single_midp_graphic_pane_g4_cp

0xbe81,	// (0x00046ac1) list_single_midp_graphic_pane_t1_cp

0xbe96,	// (0x00046ad6) form2_mdip_string_pane_t1_ParamLimits

0xbe96,	// (0x00046ad6) form2_mdip_string_pane_t1

0x7b62,	// (0x000427a2) bg_wml_button_pane_cp2

0x7b58,	// (0x00042798) form2_midp_image_pane_g1

0x5ce2,	// (0x00040922) list_double_large_graphic_pane_g5_ParamLimits

0x5ce2,	// (0x00040922) list_double_large_graphic_pane_g5

0x869e,	// (0x000432de) midp_form_pane_ParamLimits

0x7c42,	// (0x00042882) main_apps_wheel_pane_ParamLimits

0x6687,	// (0x000412c7) popup_preview_window_ParamLimits

0x6687,	// (0x000412c7) popup_preview_window

0x6842,	// (0x00041482) popup_touch_info_window_ParamLimits

0x6842,	// (0x00041482) popup_touch_info_window

0x6860,	// (0x000414a0) popup_touch_menu_window_ParamLimits

0x6860,	// (0x000414a0) popup_touch_menu_window

0x7b4e,	// (0x0004278e) bg_popup_sub_pane_cp6

0xbf8f,	// (0x00046bcf) list_touch_menu_pane

0xbf97,	// (0x00046bd7) list_single_touch_menu_pane_ParamLimits

0xbf97,	// (0x00046bd7) list_single_touch_menu_pane

0xbfad,	// (0x00046bed) list_single_touch_menu_pane_t1

0x7c42,	// (0x00042882) bg_popup_sub_pane_cp7_ParamLimits

0x7c42,	// (0x00042882) bg_popup_sub_pane_cp7

0xbfbb,	// (0x00046bfb) heading_sub_pane

0xbfc3,	// (0x00046c03) list_touch_info_pane_ParamLimits

0xbfc3,	// (0x00046c03) list_touch_info_pane

0xbfd2,	// (0x00046c12) list_single_touch_info_pane_ParamLimits

0xbfd2,	// (0x00046c12) list_single_touch_info_pane

0xbfe4,	// (0x00046c24) list_single_touch_info_pane_t1

0xbff2,	// (0x00046c32) list_single_touch_info_pane_t2

0x0001,

0xfb02,	// (0x0004a742) list_single_touch_info_pane_t

0x9114,	// (0x00043d54) bg_popup_heading_pane_cp

0xc000,	// (0x00046c40) heading_sub_pane_t1

0x9a59,	// (0x00044699) bg_popup_preview_window_pane_cp_ParamLimits

0x9a59,	// (0x00044699) bg_popup_preview_window_pane_cp

0xbfbb,	// (0x00046bfb) heading_preview_pane

0xbfc3,	// (0x00046c03) list_preview_pane_ParamLimits

0xbfc3,	// (0x00046c03) list_preview_pane

0xc00e,	// (0x00046c4e) popup_preview_window_g1

0xbfd2,	// (0x00046c12) list_single_preview_pane_ParamLimits

0xbfd2,	// (0x00046c12) list_single_preview_pane

0xc016,	// (0x00046c56) list_single_preview_pane_g1

0xc01e,	// (0x00046c5e) list_single_preview_pane_t1

0xbfe4,	// (0x00046c24) list_single_preview_pane_t2

0x0001,

0xfb07,	// (0x0004a747) list_single_preview_pane_t

0xc02c,	// (0x00046c6c) bg_popup_heading_pane_cp2_ParamLimits

0xc02c,	// (0x00046c6c) bg_popup_heading_pane_cp2

0xc042,	// (0x00046c82) heading_preview_pane_g1

0xc04a,	// (0x00046c8a) heading_preview_pane_t1_ParamLimits

0xc04a,	// (0x00046c8a) heading_preview_pane_t1

0x7d2e,	// (0x0004296e) soft_indicator_pane_t1_ParamLimits

0x8421,	// (0x00043061) scroll_pane_ParamLimits

0x8950,	// (0x00043590) scroll_sc2_left_pane

0x8959,	// (0x00043599) scroll_sc2_right_pane

0x8978,	// (0x000435b8) scroll_bg_pane_g1_ParamLimits

0x898d,	// (0x000435cd) scroll_bg_pane_g2_ParamLimits

0x89a5,	// (0x000435e5) scroll_bg_pane_g3_ParamLimits

0xf6ee,	// (0x0004a32e) scroll_bg_pane_g_ParamLimits

0x8978,	// (0x000435b8) scroll_handle_pane_g1_ParamLimits

0x89c7,	// (0x00043607) scroll_handle_pane_g2_ParamLimits

0x89a5,	// (0x000435e5) scroll_handle_pane_g3_ParamLimits

0xf6f5,	// (0x0004a335) scroll_handle_pane_g_ParamLimits

0x630a,	// (0x00040f4a) popup_choice_list_window_ParamLimits

0x630a,	// (0x00040f4a) popup_choice_list_window

0x9893,	// (0x000444d3) choice_list_pane

0x9921,	// (0x00044561) cell_toolbar_pane_t1

0x9949,	// (0x00044589) toolbar_button_pane_ParamLimits

0xaab6,	// (0x000456f6) ai_gene_pane_1_t2_ParamLimits

0xaab6,	// (0x000456f6) ai_gene_pane_1_t2

0x0001,

0xf91d,	// (0x0004a55d) ai_gene_pane_1_t_ParamLimits

0xf91d,	// (0x0004a55d) ai_gene_pane_1_t

0xc067,	// (0x00046ca7) scroll_sc2_left_pane_g1

0xc067,	// (0x00046ca7) scroll_sc2_right_pane_g1

0x9454,	// (0x00044094) bg_popup_sub_pane_cp10

0xc071,	// (0x00046cb1) list_choice_list_pane

0xc08a,	// (0x00046cca) list_single_choice_list_pane_ParamLimits

0xc08a,	// (0x00046cca) list_single_choice_list_pane

0xc09d,	// (0x00046cdd) list_single_choice_list_pane_g1

0x864e,	// (0x0004328e) list_single_choice_list_pane_t1_ParamLimits

0x864e,	// (0x0004328e) list_single_choice_list_pane_t1

0xc0a5,	// (0x00046ce5) choice_list_pane_g1

0xc0ad,	// (0x00046ced) choice_list_pane_t1

0x7b4e,	// (0x0004278e) input_focus_pane_cp11

0x8831,	// (0x00043471) title_pane_stacon_g2_ParamLimits

0x8831,	// (0x00043471) title_pane_stacon_g2

0x0002,

0xf6d4,	// (0x0004a314) title_pane_stacon_g_ParamLimits

0xf6d4,	// (0x0004a314) title_pane_stacon_g

0x9114,	// (0x00043d54) cursor_press_pane

0x63b6,	// (0x00040ff6) popup_fep_hwr_window_ParamLimits

0x63b6,	// (0x00040ff6) popup_fep_hwr_window

0x6430,	// (0x00041070) popup_fep_vkb_window_ParamLimits

0x6430,	// (0x00041070) popup_fep_vkb_window

0xc0bb,	// (0x00046cfb) cursor_press_pane_g1

0x0002,

0xfb30,	// (0x0004a770) fep_vkb_side_pane_g_ParamLimits

0x6e33,	// (0x00041a73) fep_hwr_candidate_pane_ParamLimits

0x6e33,	// (0x00041a73) fep_hwr_candidate_pane

0x6e5d,	// (0x00041a9d) fep_hwr_side_pane_ParamLimits

0x6e5d,	// (0x00041a9d) fep_hwr_side_pane

0x6e7d,	// (0x00041abd) fep_hwr_top_pane_ParamLimits

0x6e7d,	// (0x00041abd) fep_hwr_top_pane

0x6e95,	// (0x00041ad5) fep_hwr_write_pane_ParamLimits

0x6e95,	// (0x00041ad5) fep_hwr_write_pane

0xfb30,	// (0x0004a770) fep_vkb_side_pane_g

0xc0c3,	// (0x00046d03) fep_hwr_top_pane_g1

0xc0d5,	// (0x00046d15) fep_hwr_top_pane_g2

0x6ec1,	// (0x00041b01) fep_hwr_top_pane_g3

0x0002,

0xfb0c,	// (0x0004a74c) fep_hwr_top_pane_g

0x6ed6,	// (0x00041b16) fep_hwr_top_text_pane

0x8b1e,	// (0x0004375e) fep_hwr_top_text_pane_g1

0xc10b,	// (0x00046d4b) fep_hwr_top_text_pane_t1

0x6fcc,	// (0x00041c0c) fep_hwr_candidate_pane_g1

0xc35e,	// (0x00046f9e) fep_vkb_keypad_pane_g3_ParamLimits

0xc35e,	// (0x00046f9e) fep_vkb_keypad_pane_g3

0xc386,	// (0x00046fc6) fep_vkb_keypad_pane_g4_ParamLimits

0xc386,	// (0x00046fc6) fep_vkb_keypad_pane_g4

0xc3f5,	// (0x00047035) fep_vkb_bottom_pane_g2_ParamLimits

0xc3f5,	// (0x00047035) fep_vkb_bottom_pane_g2

0x0001,

0xfb37,	// (0x0004a777) fep_vkb_bottom_pane_g_ParamLimits

0xfb37,	// (0x0004a777) fep_vkb_bottom_pane_g

0xc067,	// (0x00046ca7) cell_vkb_side_pane_g2

0x0001,

0xfb41,	// (0x0004a781) cell_vkb_side_pane_g

0xc480,	// (0x000470c0) cell_vkb_side_pane_t1

0xc48e,	// (0x000470ce) cell_vkb_side_pane_t1_copy1

0xc067,	// (0x00046ca7) bg_fep_vkb_candidate_pane_g2

0xc5ba,	// (0x000471fa) cell_vkb_candidate_pane_ParamLimits

0xc119,	// (0x00046d59) aid_size_cell_vkb_ParamLimits

0xc119,	// (0x00046d59) aid_size_cell_vkb

0xc5ba,	// (0x000471fa) cell_vkb_candidate_pane

0x6fe6,	// (0x00041c26) bg_popup_fep_shadow_pane_g1

0xc1a7,	// (0x00046de7) fep_vkb_bottom_pane_ParamLimits

0xc1a7,	// (0x00046de7) fep_vkb_bottom_pane

0xc1dd,	// (0x00046e1d) fep_vkb_candidate_pane_ParamLimits

0xc1dd,	// (0x00046e1d) fep_vkb_candidate_pane

0xc1f9,	// (0x00046e39) fep_vkb_keypad_pane_ParamLimits

0xc1f9,	// (0x00046e39) fep_vkb_keypad_pane

0xc23f,	// (0x00046e7f) fep_vkb_side_pane_ParamLimits

0xc23f,	// (0x00046e7f) fep_vkb_side_pane

0xc27b,	// (0x00046ebb) fep_vkb_top_pane_ParamLimits

0xc27b,	// (0x00046ebb) fep_vkb_top_pane

0xc2b7,	// (0x00046ef7) fep_vkb_top_pane_g1_ParamLimits

0xc2b7,	// (0x00046ef7) fep_vkb_top_pane_g1

0xc2c6,	// (0x00046f06) fep_vkb_top_pane_g2_ParamLimits

0xc2c6,	// (0x00046f06) fep_vkb_top_pane_g2

0xc2d5,	// (0x00046f15) fep_vkb_top_pane_g3_ParamLimits

0xc2d5,	// (0x00046f15) fep_vkb_top_pane_g3

0x0003,

0xfb27,	// (0x0004a767) fep_vkb_top_pane_g_ParamLimits

0xfb27,	// (0x0004a767) fep_vkb_top_pane_g

0xc2f3,	// (0x00046f33) fep_vkb_top_text_pane_ParamLimits

0xc2f3,	// (0x00046f33) fep_vkb_top_text_pane

0xc304,	// (0x00046f44) fep_vkb_side_pane_g1_ParamLimits

0xc304,	// (0x00046f44) fep_vkb_side_pane_g1

0xc34d,	// (0x00046f8d) grid_vkb_side_pane_ParamLimits

0xc34d,	// (0x00046f8d) grid_vkb_side_pane

0x6fee,	// (0x00041c2e) bg_popup_fep_shadow_pane_g2

0x6ff7,	// (0x00041c37) bg_popup_fep_shadow_pane_g3

0x6fff,	// (0x00041c3f) bg_popup_fep_shadow_pane_g4

0x7008,	// (0x00041c48) bg_popup_fep_shadow_pane_g5

0x7012,	// (0x00041c52) bg_popup_fep_shadow_pane_g6

0x701a,	// (0x00041c5a) bg_popup_fep_shadow_pane_g7

0x8535,	// (0x00043175) bg_popup_fep_shadow_pane_g8

0xc3a4,	// (0x00046fe4) grid_vkb_keypad_number_pane_ParamLimits

0xc3a4,	// (0x00046fe4) grid_vkb_keypad_number_pane

0xc3b4,	// (0x00046ff4) grid_vkb_keypad_pane_ParamLimits

0xc3b4,	// (0x00046ff4) grid_vkb_keypad_pane

0xc3da,	// (0x0004701a) fep_vkb_bottom_pane_g1_ParamLimits

0xc3da,	// (0x0004701a) fep_vkb_bottom_pane_g1

0xc403,	// (0x00047043) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc403,	// (0x00047043) grid_vkb_keypad_bottom_left_pane

0xc418,	// (0x00047058) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc418,	// (0x00047058) grid_vkb_keypad_bottom_right_pane

0xc42d,	// (0x0004706d) fep_vkb_top_text_pane_g1

0xc448,	// (0x00047088) fep_vkb_top_text_pane_t1

0xc45d,	// (0x0004709d) cell_vkb_side_pane_ParamLimits

0xc45d,	// (0x0004709d) cell_vkb_side_pane

0xc067,	// (0x00046ca7) cell_vkb_side_pane_g1

0xc49c,	// (0x000470dc) cell_vkb_keypad_pane_ParamLimits

0xc49c,	// (0x000470dc) cell_vkb_keypad_pane

0xc511,	// (0x00047151) cell_vkb_keypad_pane_g1

0x0008,

0xfb54,	// (0x0004a794) bg_popup_fep_shadow_pane_g

0xc067,	// (0x00046ca7) cell_hwr_side_pane_g1

0xc067,	// (0x00046ca7) cell_hwr_side_pane_g2

0xc51b,	// (0x0004715b) cell_vkb_keypad_pane_t1

0xc529,	// (0x00047169) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc529,	// (0x00047169) cell_vkb_keypad_bottom_left_pane

0xc546,	// (0x00047186) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc546,	// (0x00047186) cell_vkb_keypad_bottom_right_pane

0xc067,	// (0x00046ca7) cell_vkb_keypad_bottom_left_pane_g1

0xc067,	// (0x00046ca7) cell_vkb_keypad_bottom_right_pane_g1

0xc57f,	// (0x000471bf) cell_vkb_keypad_number_pane_ParamLimits

0xc57f,	// (0x000471bf) cell_vkb_keypad_number_pane

0xc59e,	// (0x000471de) cell_vkb_keypad_number_pane_g1

0xc5a8,	// (0x000471e8) cell_vkb_keypad_number_pane_g2

0xc5b1,	// (0x000471f1) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb46,	// (0x0004a786) cell_vkb_keypad_number_pane_g

0xc51b,	// (0x0004715b) cell_vkb_keypad_number_pane_t1

0xc5d5,	// (0x00047215) fep_vkb_candidate_pane_g1

0x0001,

0xfb41,	// (0x0004a781) cell_hwr_side_pane_g

0xc5ee,	// (0x0004722e) cell_hwr_side_pane_t1

0x702c,	// (0x00041c6c) cell_hwr_side_pane_t1_copy1

0xc2e5,	// (0x00046f25) cell_hwr_candidate_pane_g1

0x703a,	// (0x00041c7a) cell_hwr_candidate_pane_t1

0xc067,	// (0x00046ca7) cell_vkb_candidate_pane_g2

0xc674,	// (0x000472b4) cell_vkb_candidate_pane_t1

0x6dfa,	// (0x00041a3a) bg_popup_fep_shadow_pane_ParamLimits

0x6dfa,	// (0x00041a3a) bg_popup_fep_shadow_pane

0x2da9,	// (0x0003d9e9) bg_fep_hwr_top_pane_g4

0xc0e7,	// (0x00046d27) bg_hwr_side_pane_g1_ParamLimits

0xc0e7,	// (0x00046d27) bg_hwr_side_pane_g1

0x6f12,	// (0x00041b52) cell_hwr_side_pane_ParamLimits

0x6f12,	// (0x00041b52) cell_hwr_side_pane

0x6f4d,	// (0x00041b8d) fep_hwr_write_pane_g1_ParamLimits

0x6f4d,	// (0x00041b8d) fep_hwr_write_pane_g1

0x6f5a,	// (0x00041b9a) fep_hwr_write_pane_g2_ParamLimits

0x6f5a,	// (0x00041b9a) fep_hwr_write_pane_g2

0x6f67,	// (0x00041ba7) fep_hwr_write_pane_g3_ParamLimits

0x6f67,	// (0x00041ba7) fep_hwr_write_pane_g3

0x6f75,	// (0x00041bb5) fep_hwr_write_pane_g4_ParamLimits

0x6f75,	// (0x00041bb5) fep_hwr_write_pane_g4

0x0005,

0xfb13,	// (0x0004a753) fep_hwr_write_pane_g_ParamLimits

0xfb13,	// (0x0004a753) fep_hwr_write_pane_g

0x2da9,	// (0x0003d9e9) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x2da9,	// (0x0003d9e9) bg_fep_hwr_candidate_pane_g2

0x6f8a,	// (0x00041bca) cell_hwr_candidate_pane_ParamLimits

0x6f8a,	// (0x00041bca) cell_hwr_candidate_pane

0x6fcc,	// (0x00041c0c) fep_hwr_candidate_pane_g1_ParamLimits

0xc147,	// (0x00046d87) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc147,	// (0x00046d87) bg_popup_fep_shadow_pane_cp2

0xc2e5,	// (0x00046f25) fep_vkb_top_pane_g4_ParamLimits

0xc2e5,	// (0x00046f25) fep_vkb_top_pane_g4

0xc32b,	// (0x00046f6b) fep_vkb_side_pane_g2_ParamLimits

0xc32b,	// (0x00046f6b) fep_vkb_side_pane_g2

0x4dfd,	// (0x0003fa3d) list_setting_pane_t4_ParamLimits

0x4dfd,	// (0x0003fa3d) list_setting_pane_t4

0x4e97,	// (0x0003fad7) list_setting_number_pane_t5_ParamLimits

0x4e97,	// (0x0003fad7) list_setting_number_pane_t5

0x8b65,	// (0x000437a5) list_double_heading_pane_cp2_ParamLimits

0x8b65,	// (0x000437a5) list_double_heading_pane_cp2

0x84c8,	// (0x00043108) list_double_heading_pane_g1_cp2_ParamLimits

0x84c8,	// (0x00043108) list_double_heading_pane_g1_cp2

0x84d4,	// (0x00043114) list_double_heading_pane_g2_cp2_ParamLimits

0x84d4,	// (0x00043114) list_double_heading_pane_g2_cp2

0xc682,	// (0x000472c2) list_double_heading_pane_t1_cp2_ParamLimits

0xc682,	// (0x000472c2) list_double_heading_pane_t1_cp2

0xc698,	// (0x000472d8) list_double_heading_pane_t2_cp2_ParamLimits

0xc698,	// (0x000472d8) list_double_heading_pane_t2_cp2

0x7b36,	// (0x00042776) aid_value_unit2

0x5ada,	// (0x0004071a) popup_preview_fixed_window

0x7ecb,	// (0x00042b0b) bg_popup_preview_window_pane_cp02

0xc6aa,	// (0x000472ea) list_preview_fixed_pane

0xc6f0,	// (0x00047330) list_empty_pane_fp_ParamLimits

0xc6f0,	// (0x00047330) list_empty_pane_fp

0xc6f0,	// (0x00047330) list_single_cale_day_pane_fp_ParamLimits

0xc6f0,	// (0x00047330) list_single_cale_day_pane_fp

0xc6f0,	// (0x00047330) list_single_graphic_heading_pane_fp_ParamLimits

0xc6f0,	// (0x00047330) list_single_graphic_heading_pane_fp

0xc6f0,	// (0x00047330) list_single_graphic_pane_fp_ParamLimits

0xc6f0,	// (0x00047330) list_single_graphic_pane_fp

0xc6f0,	// (0x00047330) list_single_heading_pane_fp_ParamLimits

0xc6f0,	// (0x00047330) list_single_heading_pane_fp

0xc6f0,	// (0x00047330) list_single_pane_fp_ParamLimits

0xc6f0,	// (0x00047330) list_single_pane_fp

0xc705,	// (0x00047345) list_single_pane_fp_g1_ParamLimits

0xc705,	// (0x00047345) list_single_pane_fp_g1

0x84c8,	// (0x00043108) list_single_pane_fp_g2_ParamLimits

0x84c8,	// (0x00043108) list_single_pane_fp_g2

0x84d4,	// (0x00043114) list_single_pane_fp_g3_ParamLimits

0x84d4,	// (0x00043114) list_single_pane_fp_g3

0xc711,	// (0x00047351) list_single_pane_fp_g4_ParamLimits

0xc711,	// (0x00047351) list_single_pane_fp_g4

0x0003,

0xfb75,	// (0x0004a7b5) list_single_pane_fp_g_ParamLimits

0xfb75,	// (0x0004a7b5) list_single_pane_fp_g

0x5587,	// (0x000401c7) list_single_pane_fp_t1_ParamLimits

0x5587,	// (0x000401c7) list_single_pane_fp_t1

0x559e,	// (0x000401de) list_single_graphic_pane_fp_g1_ParamLimits

0x559e,	// (0x000401de) list_single_graphic_pane_fp_g1

0xc705,	// (0x00047345) list_single_graphic_pane_fp_g2_ParamLimits

0xc705,	// (0x00047345) list_single_graphic_pane_fp_g2

0x84c8,	// (0x00043108) list_single_graphic_pane_fp_g3_ParamLimits

0x84c8,	// (0x00043108) list_single_graphic_pane_fp_g3

0x84d4,	// (0x00043114) list_single_graphic_pane_fp_g4_ParamLimits

0x84d4,	// (0x00043114) list_single_graphic_pane_fp_g4

0xc711,	// (0x00047351) list_single_graphic_pane_fp_g5_ParamLimits

0xc711,	// (0x00047351) list_single_graphic_pane_fp_g5

0x0004,

0xfb7e,	// (0x0004a7be) list_single_graphic_pane_fp_g_ParamLimits

0xfb7e,	// (0x0004a7be) list_single_graphic_pane_fp_g

0x55aa,	// (0x000401ea) list_single_graphic_pane_fp_t1_ParamLimits

0x55aa,	// (0x000401ea) list_single_graphic_pane_fp_t1

0x559e,	// (0x000401de) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x559e,	// (0x000401de) list_single_graphic_heading_pane_fp_g1

0xc705,	// (0x00047345) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc705,	// (0x00047345) list_single_graphic_heading_pane_fp_g2

0x84c8,	// (0x00043108) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x84c8,	// (0x00043108) list_single_graphic_heading_pane_fp_g3

0x84d4,	// (0x00043114) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x84d4,	// (0x00043114) list_single_graphic_heading_pane_fp_g4

0xc711,	// (0x00047351) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc711,	// (0x00047351) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb7e,	// (0x0004a7be) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb7e,	// (0x0004a7be) list_single_graphic_heading_pane_fp_g

0x55c0,	// (0x00040200) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x55c0,	// (0x00040200) list_single_graphic_heading_pane_fp_t1

0x55d6,	// (0x00040216) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x55d6,	// (0x00040216) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb89,	// (0x0004a7c9) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb89,	// (0x0004a7c9) list_single_graphic_heading_pane_fp_t

0x55e8,	// (0x00040228) list_single_cale_day_pane_fp_g1_ParamLimits

0x55e8,	// (0x00040228) list_single_cale_day_pane_fp_g1

0xc71d,	// (0x0004735d) list_single_cale_day_pane_fp_g2_ParamLimits

0xc71d,	// (0x0004735d) list_single_cale_day_pane_fp_g2

0x7058,	// (0x00041c98) list_single_cale_day_pane_fp_g3_ParamLimits

0x7058,	// (0x00041c98) list_single_cale_day_pane_fp_g3

0x7080,	// (0x00041cc0) list_single_cale_day_pane_fp_g4_ParamLimits

0x7080,	// (0x00041cc0) list_single_cale_day_pane_fp_g4

0x70a4,	// (0x00041ce4) list_single_cale_day_pane_fp_g5_ParamLimits

0x70a4,	// (0x00041ce4) list_single_cale_day_pane_fp_g5

0x0004,

0xfb8e,	// (0x0004a7ce) list_single_cale_day_pane_fp_g_ParamLimits

0xfb8e,	// (0x0004a7ce) list_single_cale_day_pane_fp_g

0x5620,	// (0x00040260) list_single_cale_day_pane_fp_t1_ParamLimits

0x5620,	// (0x00040260) list_single_cale_day_pane_fp_t1

0x5646,	// (0x00040286) list_single_cale_day_pane_fp_t2_ParamLimits

0x5646,	// (0x00040286) list_single_cale_day_pane_fp_t2

0x565f,	// (0x0004029f) list_single_cale_day_pane_fp_t3_ParamLimits

0x565f,	// (0x0004029f) list_single_cale_day_pane_fp_t3

0x0002,

0xfb99,	// (0x0004a7d9) list_single_cale_day_pane_fp_t_ParamLimits

0xfb99,	// (0x0004a7d9) list_single_cale_day_pane_fp_t

0xc705,	// (0x00047345) list_empty_pane_fp_g1_ParamLimits

0xc705,	// (0x00047345) list_empty_pane_fp_g1

0x5678,	// (0x000402b8) list_empty_pane_fp_t1

0x5686,	// (0x000402c6) list_empty_pane_fp_t2

0x0001,

0xfba0,	// (0x0004a7e0) list_empty_pane_fp_t

0xc705,	// (0x00047345) list_single_heading_pane_fp_g1_ParamLimits

0xc705,	// (0x00047345) list_single_heading_pane_fp_g1

0x84c8,	// (0x00043108) list_single_heading_pane_fp_g2_ParamLimits

0x84c8,	// (0x00043108) list_single_heading_pane_fp_g2

0x84d4,	// (0x00043114) list_single_heading_pane_fp_g3_ParamLimits

0x84d4,	// (0x00043114) list_single_heading_pane_fp_g3

0x0002,

0xfba5,	// (0x0004a7e5) list_single_heading_pane_fp_g_ParamLimits

0xfba5,	// (0x0004a7e5) list_single_heading_pane_fp_g

0x5694,	// (0x000402d4) list_single_heading_pane_fp_t1_ParamLimits

0x5694,	// (0x000402d4) list_single_heading_pane_fp_t1

0x56a6,	// (0x000402e6) list_single_heading_pane_fp_t2_ParamLimits

0x56a6,	// (0x000402e6) list_single_heading_pane_fp_t2

0x0001,

0xfbac,	// (0x0004a7ec) list_single_heading_pane_fp_t_ParamLimits

0xfbac,	// (0x0004a7ec) list_single_heading_pane_fp_t

0x86bc,	// (0x000432fc) aid_size_cell_fast

0x7e3b,	// (0x00042a7b) soft_indicator_pane_cp1_t1

0x86f9,	// (0x00043339) cell_app_pane_cp2_ParamLimits

0x86f9,	// (0x00043339) cell_app_pane_cp2

0x6e1c,	// (0x00041a5c) fep_hwr_candidate_drop_down_list_pane

0x2db7,	// (0x0003d9f7) fep_hwr_candidate_pane_g3_ParamLimits

0x2db7,	// (0x0003d9f7) fep_hwr_candidate_pane_g3

0x2dc4,	// (0x0003da04) fep_hwr_candidate_pane_g4_ParamLimits

0x2dc4,	// (0x0003da04) fep_hwr_candidate_pane_g4

0x0002,

0xfb20,	// (0x0004a760) fep_hwr_candidate_pane_g_ParamLimits

0xfb20,	// (0x0004a760) fep_hwr_candidate_pane_g

0xc1cc,	// (0x00046e0c) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc1cc,	// (0x00046e0c) fep_vkb_candidate_drop_down_list_pane

0xc5dd,	// (0x0004721d) fep_vkb_candidate_pane_g3

0xc5e5,	// (0x00047225) fep_vkb_candidate_pane_g4

0x0002,

0xfb4d,	// (0x0004a78d) fep_vkb_candidate_pane_g

0xc2e5,	// (0x00046f25) cell_hwr_candidate_pane_g1_ParamLimits

0xc5fc,	// (0x0004723c) cell_hwr_candidate_pane_g3_ParamLimits

0xc5fc,	// (0x0004723c) cell_hwr_candidate_pane_g3

0xc61d,	// (0x0004725d) cell_hwr_candidate_pane_g4_ParamLimits

0xc61d,	// (0x0004725d) cell_hwr_candidate_pane_g4

0x0002,

0xfb67,	// (0x0004a7a7) cell_hwr_candidate_pane_g_ParamLimits

0xfb67,	// (0x0004a7a7) cell_hwr_candidate_pane_g

0xc63e,	// (0x0004727e) cell_vkb_candidate_pane_g3_ParamLimits

0xc63e,	// (0x0004727e) cell_vkb_candidate_pane_g3

0xc659,	// (0x00047299) cell_vkb_candidate_pane_g4_ParamLimits

0xc659,	// (0x00047299) cell_vkb_candidate_pane_g4

0xc729,	// (0x00047369) cell_app_pane_cp2_g1_ParamLimits

0xc729,	// (0x00047369) cell_app_pane_cp2_g1

0xc747,	// (0x00047387) cell_app_pane_cp2_g2_ParamLimits

0xc747,	// (0x00047387) cell_app_pane_cp2_g2

0x0001,

0xfbb1,	// (0x0004a7f1) cell_app_pane_cp2_g_ParamLimits

0xfbb1,	// (0x0004a7f1) cell_app_pane_cp2_g

0xc753,	// (0x00047393) cell_app_pane_cp2_t1_ParamLimits

0xc753,	// (0x00047393) cell_app_pane_cp2_t1

0x84ae,	// (0x000430ee) grid_highlight_pane_cp1_ParamLimits

0x84ae,	// (0x000430ee) grid_highlight_pane_cp1

0x70c8,	// (0x00041d08) cell_hwr_candidate_pane_cp1_ParamLimits

0x70c8,	// (0x00041d08) cell_hwr_candidate_pane_cp1

0xc2e5,	// (0x00046f25) fep_hwr_candidate_drop_down_list_pane_g1

0xc765,	// (0x000473a5) fep_hwr_candidate_drop_down_list_pane_g2

0xc772,	// (0x000473b2) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbb6,	// (0x0004a7f6) fep_hwr_candidate_drop_down_list_pane_g

0x70e7,	// (0x00041d27) fep_hwr_candidate_drop_down_list_scroll_pane

0x70f0,	// (0x00041d30) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x70f0,	// (0x00041d30) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x70fd,	// (0x00041d3d) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x70fd,	// (0x00041d3d) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x710a,	// (0x00041d4a) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x710a,	// (0x00041d4a) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xc63e,	// (0x0004727e) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc63e,	// (0x0004727e) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xc659,	// (0x00047299) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc659,	// (0x00047299) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x7117,	// (0x00041d57) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7117,	// (0x00041d57) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x7132,	// (0x00041d72) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7132,	// (0x00041d72) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x714d,	// (0x00041d8d) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x714d,	// (0x00041d8d) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbbd,	// (0x0004a7fd) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbbd,	// (0x0004a7fd) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc77f,	// (0x000473bf) cell_vkb_candidate_pane_cp1_ParamLimits

0xc77f,	// (0x000473bf) cell_vkb_candidate_pane_cp1

0xc2e5,	// (0x00046f25) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc2e5,	// (0x00046f25) fep_vkb_candidate_drop_down_list_pane_g1

0xc765,	// (0x000473a5) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc765,	// (0x000473a5) fep_vkb_candidate_drop_down_list_pane_g2

0xc772,	// (0x000473b2) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc772,	// (0x000473b2) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbb6,	// (0x0004a7f6) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbb6,	// (0x0004a7f6) fep_vkb_candidate_drop_down_list_pane_g

0xc79f,	// (0x000473df) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc79f,	// (0x000473df) fep_vkb_candidate_drop_down_list_scroll_pane

0xc7ac,	// (0x000473ec) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc7ac,	// (0x000473ec) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc7b9,	// (0x000473f9) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc7b9,	// (0x000473f9) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc7c5,	// (0x00047405) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc7c5,	// (0x00047405) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc5fc,	// (0x0004723c) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc5fc,	// (0x0004723c) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc61d,	// (0x0004725d) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc61d,	// (0x0004725d) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc7d1,	// (0x00047411) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc7d1,	// (0x00047411) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc7f2,	// (0x00047432) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc7f2,	// (0x00047432) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc813,	// (0x00047453) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc813,	// (0x00047453) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbce,	// (0x0004a80e) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbce,	// (0x0004a80e) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x7b6c,	// (0x000427ac) title_pane_g1_ParamLimits

0x7b79,	// (0x000427b9) title_pane_g2_ParamLimits

0xf554,	// (0x0004a194) title_pane_g_ParamLimits

0x8b0e,	// (0x0004374e) aid_call2_pane

0x8b16,	// (0x00043756) aid_call_pane

0x8b1e,	// (0x0004375e) popup_clock_analogue_window_g1

0x8b1e,	// (0x0004375e) popup_clock_analogue_window_g2

0x5ebf,	// (0x00040aff) popup_clock_analogue_window_g3

0x5ec8,	// (0x00040b08) popup_clock_analogue_window_g4

0x7b58,	// (0x00042798) popup_clock_analogue_window_g5

0x0004,

0xf703,	// (0x0004a343) popup_clock_analogue_window_g

0x5ed0,	// (0x00040b10) popup_clock_analogue_window_t1

0x5ede,	// (0x00040b1e) clock_digital_number_pane_ParamLimits

0x5ede,	// (0x00040b1e) clock_digital_number_pane

0x5eea,	// (0x00040b2a) clock_digital_number_pane_cp02_ParamLimits

0x5eea,	// (0x00040b2a) clock_digital_number_pane_cp02

0x5ef6,	// (0x00040b36) clock_digital_number_pane_cp03_ParamLimits

0x5ef6,	// (0x00040b36) clock_digital_number_pane_cp03

0x5f02,	// (0x00040b42) clock_digital_number_pane_cp04_ParamLimits

0x5f02,	// (0x00040b42) clock_digital_number_pane_cp04

0x5f0e,	// (0x00040b4e) clock_digital_separator_pane_ParamLimits

0x5f0e,	// (0x00040b4e) clock_digital_separator_pane

0x5f1a,	// (0x00040b5a) popup_clock_digital_window_t1_ParamLimits

0x5f1a,	// (0x00040b5a) popup_clock_digital_window_t1

0x7b58,	// (0x00042798) clock_digital_number_pane_g1

0x7b58,	// (0x00042798) clock_digital_number_pane_g2

0x0001,

0xf70e,	// (0x0004a34e) clock_digital_number_pane_g

0x7b58,	// (0x00042798) clock_digital_separator_pane_g1

0x7b58,	// (0x00042798) clock_digital_separator_pane_g2

0x0001,

0xf70e,	// (0x0004a34e) clock_digital_separator_pane_g

0x9476,	// (0x000440b6) aid_fill_nsta_ParamLimits

0x95b8,	// (0x000441f8) indicator_nsta_pane_ParamLimits

0x972b,	// (0x0004436b) popup_clock_analogue_window

0x972b,	// (0x0004436b) popup_clock_digital_window

0x7c42,	// (0x00042882) grid_indicator_nsta_pane_ParamLimits

0xba4d,	// (0x0004668d) clock_nsta_pane_t2

0x0001,

0xfaa0,	// (0x0004a6e0) clock_nsta_pane_t

0x5e83,	// (0x00040ac3) aid_size_max_handle

0x5e8d,	// (0x00040acd) aid_size_min_handle

0x9114,	// (0x00043d54) editor_scroll_pane

0xc82e,	// (0x0004746e) ex_editor_pane

0x862a,	// (0x0004326a) scroll_pane_cp13

0x844d,	// (0x0004308d) scroll_pane_cp14

0x8b4d,	// (0x0004378d) scroll_pane_cp36

0x8b79,	// (0x000437b9) list_single_graphic_hl_pane_cp2_ParamLimits

0x8b79,	// (0x000437b9) list_single_graphic_hl_pane_cp2

0x533e,	// (0x0003ff7e) list_single_graphic_hl_pane_ParamLimits

0x533e,	// (0x0003ff7e) list_single_graphic_hl_pane

0x56bc,	// (0x000402fc) aid_size_min_hl_cp1

0xc836,	// (0x00047476) list_highlight_pane_cp34_ParamLimits

0xc836,	// (0x00047476) list_highlight_pane_cp34

0xc847,	// (0x00047487) list_single_graphic_hl_pane_g1_ParamLimits

0xc847,	// (0x00047487) list_single_graphic_hl_pane_g1

0x56c5,	// (0x00040305) list_single_graphic_hl_pane_g2_ParamLimits

0x56c5,	// (0x00040305) list_single_graphic_hl_pane_g2

0x56c5,	// (0x00040305) list_single_graphic_hl_pane_g3_ParamLimits

0x56c5,	// (0x00040305) list_single_graphic_hl_pane_g3

0x9085,	// (0x00043cc5) list_single_graphic_hl_pane_g4_ParamLimits

0x9085,	// (0x00043cc5) list_single_graphic_hl_pane_g4

0x7168,	// (0x00041da8) list_single_graphic_hl_pane_g5_ParamLimits

0x7168,	// (0x00041da8) list_single_graphic_hl_pane_g5

0x0004,

0xfbdf,	// (0x0004a81f) list_single_graphic_hl_pane_g_ParamLimits

0xfbdf,	// (0x0004a81f) list_single_graphic_hl_pane_g

0x56d1,	// (0x00040311) list_single_graphic_hl_pane_t1_ParamLimits

0x56d1,	// (0x00040311) list_single_graphic_hl_pane_t1

0xc854,	// (0x00047494) aid_size_min_hl_cp2

0xc85d,	// (0x0004749d) list_highlight_pane_cp34_cp2_ParamLimits

0xc85d,	// (0x0004749d) list_highlight_pane_cp34_cp2

0xc847,	// (0x00047487) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc847,	// (0x00047487) list_single_graphic_hl_pane_g1_cp2

0xc86a,	// (0x000474aa) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc86a,	// (0x000474aa) list_single_graphic_hl_pane_g2_cp2

0xc876,	// (0x000474b6) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc876,	// (0x000474b6) list_single_graphic_hl_pane_g3_cp2

0x98ed,	// (0x0004452d) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x98ed,	// (0x0004452d) list_single_graphic_hl_pane_g4_cp2

0xc884,	// (0x000474c4) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc884,	// (0x000474c4) list_single_graphic_hl_pane_g5_cp2

0x61ca,	// (0x00040e0a) control_pane_g4_ParamLimits

0x61ca,	// (0x00040e0a) control_pane_g4

0x9454,	// (0x00044094) bg_popup_sub_pane_cp10_ParamLimits

0xc071,	// (0x00046cb1) list_choice_list_pane_ParamLimits

0xc080,	// (0x00046cc0) scroll_pane_cp23

0x7ecb,	// (0x00042b0b) bg_popup_preview_window_pane_cp02_ParamLimits

0xc6aa,	// (0x000472ea) list_preview_fixed_pane_ParamLimits

0xc6c0,	// (0x00047300) list_preview_fixed_pane_cp_ParamLimits

0xc6c0,	// (0x00047300) list_preview_fixed_pane_cp

0xc6cc,	// (0x0004730c) popup_preview_fixed_window_g1_ParamLimits

0xc6cc,	// (0x0004730c) popup_preview_fixed_window_g1

0xc6d8,	// (0x00047318) popup_preview_fixed_window_g2_ParamLimits

0xc6d8,	// (0x00047318) popup_preview_fixed_window_g2

0x0002,

0xfb6e,	// (0x0004a7ae) popup_preview_fixed_window_g_ParamLimits

0xfb6e,	// (0x0004a7ae) popup_preview_fixed_window_g

0x5df7,	// (0x00040a37) aid_navi_side_left_pane_ParamLimits

0x5e0c,	// (0x00040a4c) aid_navi_side_right_pane_ParamLimits

0x5e24,	// (0x00040a64) navi_icon_pane_stacon_ParamLimits

0x5e38,	// (0x00040a78) navi_navi_pane_stacon_ParamLimits

0x5e24,	// (0x00040a64) navi_text_pane_stacon_ParamLimits

0x7b4e,	// (0x0004278e) main_text_info_pane

0xc8ae,	// (0x000474ee) listscroll_text_info_pane

0xc8b6,	// (0x000474f6) list_text_info_pane_ParamLimits

0xc8b6,	// (0x000474f6) list_text_info_pane

0xc8c5,	// (0x00047505) scroll_pane_cp24_ParamLimits

0xc8c5,	// (0x00047505) scroll_pane_cp24

0xc8e3,	// (0x00047523) list_text_info_pane_t1_ParamLimits

0xc8e3,	// (0x00047523) list_text_info_pane_t1

0x6328,	// (0x00040f68) popup_fast_swap2_window_ParamLimits

0x6328,	// (0x00040f68) popup_fast_swap2_window

0xc914,	// (0x00047554) aid_size_cell_fast2

0x7b4e,	// (0x0004278e) bg_popup_window_pane_cp17

0x9e43,	// (0x00044a83) heading_pane_cp2

0x8117,	// (0x00042d57) listscroll_fast2_pane

0xc91e,	// (0x0004755e) grid_fast2_pane

0xc928,	// (0x00047568) listscroll_fast2_pane_g1

0xc930,	// (0x00047570) listscroll_fast2_pane_g2

0x0001,

0xfbea,	// (0x0004a82a) listscroll_fast2_pane_g

0x862a,	// (0x0004326a) scroll_pane_cp26

0xc93a,	// (0x0004757a) cell_fast2_pane_ParamLimits

0xc93a,	// (0x0004757a) cell_fast2_pane

0xc94f,	// (0x0004758f) cell_fast2_pane_g1

0xc958,	// (0x00047598) cell_fast2_pane_g2

0xc961,	// (0x000475a1) cell_fast2_pane_g3

0x0002,

0xfbef,	// (0x0004a82f) cell_fast2_pane_g

0x820a,	// (0x00042e4a) grid_highlight_pane_cp9

0x821f,	// (0x00042e5f) main_eswt_pane_ParamLimits

0x821f,	// (0x00042e5f) main_eswt_pane

0xc8da,	// (0x0004751a) list_single_text_info_pane

0xc969,	// (0x000475a9) eswt_ctrl_button_pane

0xc969,	// (0x000475a9) eswt_ctrl_canvas_pane

0xc971,	// (0x000475b1) eswt_ctrl_combo_pane

0xc969,	// (0x000475a9) eswt_ctrl_default_pane

0xc969,	// (0x000475a9) eswt_ctrl_label_pane

0xc979,	// (0x000475b9) eswt_ctrl_wait_pane

0xc981,	// (0x000475c1) eswt_shell_pane

0x7b4e,	// (0x0004278e) listscroll_eswt_app_pane

0xc9a1,	// (0x000475e1) popup_eswt_tasktip_window_ParamLimits

0xc9a1,	// (0x000475e1) popup_eswt_tasktip_window

0x9a59,	// (0x00044699) bg_popup_window_pane_cp18

0xc9b2,	// (0x000475f2) eswt_control_pane_g1_ParamLimits

0xc9b2,	// (0x000475f2) eswt_control_pane_g1

0xc9bf,	// (0x000475ff) eswt_control_pane_g2_ParamLimits

0xc9bf,	// (0x000475ff) eswt_control_pane_g2

0xc9cc,	// (0x0004760c) eswt_control_pane_g3_ParamLimits

0xc9cc,	// (0x0004760c) eswt_control_pane_g3

0xc9d9,	// (0x00047619) eswt_control_pane_g4_ParamLimits

0xc9d9,	// (0x00047619) eswt_control_pane_g4

0x0003,

0xfbf6,	// (0x0004a836) eswt_control_pane_g_ParamLimits

0xfbf6,	// (0x0004a836) eswt_control_pane_g

0x84ae,	// (0x000430ee) bg_button_pane_ParamLimits

0x84ae,	// (0x000430ee) bg_button_pane

0x821f,	// (0x00042e5f) common_borders_pane_copy2_ParamLimits

0x821f,	// (0x00042e5f) common_borders_pane_copy2

0xc9e6,	// (0x00047626) control_button_pane_g1_ParamLimits

0xc9e6,	// (0x00047626) control_button_pane_g1

0xc9f2,	// (0x00047632) control_button_pane_g2_ParamLimits

0xc9f2,	// (0x00047632) control_button_pane_g2

0xc9fe,	// (0x0004763e) control_button_pane_g3_ParamLimits

0xc9fe,	// (0x0004763e) control_button_pane_g3

0x0002,

0xfbff,	// (0x0004a83f) control_button_pane_g_ParamLimits

0xfbff,	// (0x0004a83f) control_button_pane_g

0xca12,	// (0x00047652) control_button_pane_t1

0xca20,	// (0x00047660) control_button_pane_t2

0x0001,

0xfc06,	// (0x0004a846) control_button_pane_t

0x9955,	// (0x00044595) bg_button_pane_g1

0x995d,	// (0x0004459d) bg_button_pane_g2

0x9965,	// (0x000445a5) bg_button_pane_g3

0x996d,	// (0x000445ad) bg_button_pane_g4

0x9975,	// (0x000445b5) bg_button_pane_g5

0x997d,	// (0x000445bd) bg_button_pane_g6

0x9985,	// (0x000445c5) bg_button_pane_g7

0x998d,	// (0x000445cd) bg_button_pane_g8

0x9995,	// (0x000445d5) bg_button_pane_g9

0x0008,

0xf871,	// (0x0004a4b1) bg_button_pane_g

0xc02c,	// (0x00046c6c) common_borders_pane_ParamLimits

0xc02c,	// (0x00046c6c) common_borders_pane

0xc9b2,	// (0x000475f2) eswt_control_pane_g1_copy1_ParamLimits

0xc9b2,	// (0x000475f2) eswt_control_pane_g1_copy1

0xc9bf,	// (0x000475ff) eswt_control_pane_g2_copy1_ParamLimits

0xc9bf,	// (0x000475ff) eswt_control_pane_g2_copy1

0xc9cc,	// (0x0004760c) eswt_control_pane_g3_copy1_ParamLimits

0xc9cc,	// (0x0004760c) eswt_control_pane_g3_copy1

0xc9d9,	// (0x00047619) eswt_control_pane_g4_copy1_ParamLimits

0xc9d9,	// (0x00047619) eswt_control_pane_g4_copy1

0xc067,	// (0x00046ca7) bg_eswt_ctrl_canvas_pane_g1

0xc02c,	// (0x00046c6c) common_borders_pane_cp2_ParamLimits

0xc02c,	// (0x00046c6c) common_borders_pane_cp2

0xc02c,	// (0x00046c6c) common_borders_pane_cp3_ParamLimits

0xc02c,	// (0x00046c6c) common_borders_pane_cp3

0xca2e,	// (0x0004766e) separator_horizontal_pane

0xca36,	// (0x00047676) separator_vertical_pane

0xc9b2,	// (0x000475f2) eswt_control_pane_g1_copy2_ParamLimits

0xc9b2,	// (0x000475f2) eswt_control_pane_g1_copy2

0xc9bf,	// (0x000475ff) eswt_control_pane_g2_copy2_ParamLimits

0xc9bf,	// (0x000475ff) eswt_control_pane_g2_copy2

0xc9cc,	// (0x0004760c) eswt_control_pane_g3_copy2_ParamLimits

0xc9cc,	// (0x0004760c) eswt_control_pane_g3_copy2

0xc9d9,	// (0x00047619) eswt_control_pane_g4_copy2_ParamLimits

0xc9d9,	// (0x00047619) eswt_control_pane_g4_copy2

0x7b4e,	// (0x0004278e) common_borders_pane_cp4

0xca3f,	// (0x0004767f) separator_horizontal_pane_g1

0xca48,	// (0x00047688) separator_horizontal_pane_g2

0xca51,	// (0x00047691) separator_horizontal_pane_g3

0x0002,

0xfc0b,	// (0x0004a84b) separator_horizontal_pane_g

0xc9b2,	// (0x000475f2) eswt_control_pane_g1_copy3_ParamLimits

0xc9b2,	// (0x000475f2) eswt_control_pane_g1_copy3

0xc9bf,	// (0x000475ff) eswt_control_pane_g2_copy3_ParamLimits

0xc9bf,	// (0x000475ff) eswt_control_pane_g2_copy3

0xc9cc,	// (0x0004760c) eswt_control_pane_g3_copy3_ParamLimits

0xc9cc,	// (0x0004760c) eswt_control_pane_g3_copy3

0xc9d9,	// (0x00047619) eswt_control_pane_g4_copy3_ParamLimits

0xc9d9,	// (0x00047619) eswt_control_pane_g4_copy3

0x7b4e,	// (0x0004278e) common_borders_pane_cp5

0xca5a,	// (0x0004769a) separator_vertical_pane_g1

0xca63,	// (0x000476a3) separator_vertical_pane_g2

0xca6c,	// (0x000476ac) separator_vertical_pane_g3

0x0002,

0xfc12,	// (0x0004a852) separator_vertical_pane_g

0xc9b2,	// (0x000475f2) eswt_control_pane_g1_copy4_ParamLimits

0xc9b2,	// (0x000475f2) eswt_control_pane_g1_copy4

0xc9bf,	// (0x000475ff) eswt_control_pane_g2_copy4_ParamLimits

0xc9bf,	// (0x000475ff) eswt_control_pane_g2_copy4

0xc9cc,	// (0x0004760c) eswt_control_pane_g3_copy4_ParamLimits

0xc9cc,	// (0x0004760c) eswt_control_pane_g3_copy4

0xc9d9,	// (0x00047619) eswt_control_pane_g4_copy4_ParamLimits

0xc9d9,	// (0x00047619) eswt_control_pane_g4_copy4

0xca75,	// (0x000476b5) eswt_ctrl_combo_button_pane

0xca7d,	// (0x000476bd) eswt_ctrl_input_pane

0xca85,	// (0x000476c5) popup_choice_list_window_cp70

0xca8d,	// (0x000476cd) eswt_ctrl_input_pane_t1

0x7b4e,	// (0x0004278e) input_focus_pane_cp70

0xc02c,	// (0x00046c6c) bg_button_pane_cp70_ParamLimits

0xc02c,	// (0x00046c6c) bg_button_pane_cp70

0xca9b,	// (0x000476db) eswt_ctrl_combo_button_pane_g1

0xcaa3,	// (0x000476e3) wait_bar_pane_cp70

0x9a59,	// (0x00044699) bg_popup_window_pane_cp70_ParamLimits

0x9a59,	// (0x00044699) bg_popup_window_pane_cp70

0xcaab,	// (0x000476eb) popup_eswt_tasktip_window_t1

0xcac1,	// (0x00047701) wait_bar_pane_cp71_ParamLimits

0xcac1,	// (0x00047701) wait_bar_pane_cp71

0xcacd,	// (0x0004770d) grid_eswt_app_pane

0x8959,	// (0x00043599) scroll_pane_cp70

0xcad6,	// (0x00047716) cell_eswt_app_pane_ParamLimits

0xcad6,	// (0x00047716) cell_eswt_app_pane

0xcb06,	// (0x00047746) cell_eswt_app_pane_g1_ParamLimits

0xcb06,	// (0x00047746) cell_eswt_app_pane_g1

0xcb35,	// (0x00047775) cell_eswt_app_pane_g2_ParamLimits

0xcb35,	// (0x00047775) cell_eswt_app_pane_g2

0x0001,

0xfc19,	// (0x0004a859) cell_eswt_app_pane_g_ParamLimits

0xfc19,	// (0x0004a859) cell_eswt_app_pane_g

0xcb5e,	// (0x0004779e) cell_eswt_app_pane_t1_ParamLimits

0xcb5e,	// (0x0004779e) cell_eswt_app_pane_t1

0xcb90,	// (0x000477d0) grid_highlight_pane_cp70_ParamLimits

0xcb90,	// (0x000477d0) grid_highlight_pane_cp70

0x87b2,	// (0x000433f2) set_content_pane_g1

0x93b4,	// (0x00043ff4) status_small_volume_pane

0x717c,	// (0x00041dbc) status_small_volume_pane_g1

0x7184,	// (0x00041dc4) volume_small2_pane

0x718d,	// (0x00041dcd) volume_small2_pane_g1

0x7196,	// (0x00041dd6) volume_small2_pane_g2

0x719f,	// (0x00041ddf) volume_small2_pane_g3

0x71a8,	// (0x00041de8) volume_small2_pane_g4

0x71b1,	// (0x00041df1) volume_small2_pane_g5

0x71ba,	// (0x00041dfa) volume_small2_pane_g6

0x71c3,	// (0x00041e03) volume_small2_pane_g7

0x71cc,	// (0x00041e0c) volume_small2_pane_g8

0x71d5,	// (0x00041e15) volume_small2_pane_g9

0x71de,	// (0x00041e1e) volume_small2_pane_g10

0x0009,

0xfc1e,	// (0x0004a85e) volume_small2_pane_g

0xc42d,	// (0x0004706d) fep_vkb_top_text_pane_g1_ParamLimits

0xc448,	// (0x00047088) fep_vkb_top_text_pane_t1_ParamLimits

0xc6e4,	// (0x00047324) popup_preview_fixed_window_g3_ParamLimits

0xc6e4,	// (0x00047324) popup_preview_fixed_window_g3

0x67d5,	// (0x00041415) popup_toolbar_trans_pane

0xae15,	// (0x00045a55) aid_height_set_list_ParamLimits

0xae26,	// (0x00045a66) aid_size_parent_ParamLimits

0x9454,	// (0x00044094) list_highlight_pane_cp2_ParamLimits

0x87b2,	// (0x000433f2) set_content_pane_g1_ParamLimits

0x6c32,	// (0x00041872) list_single_image_pane_ParamLimits

0x6c32,	// (0x00041872) list_single_image_pane

0xcb9c,	// (0x000477dc) aid_size_cell_image_ParamLimits

0xcb9c,	// (0x000477dc) aid_size_cell_image

0xcba9,	// (0x000477e9) grid_single_image_pane_ParamLimits

0xcba9,	// (0x000477e9) grid_single_image_pane

0x999d,	// (0x000445dd) list_single_image_pane_g1_ParamLimits

0x999d,	// (0x000445dd) list_single_image_pane_g1

0xcbb7,	// (0x000477f7) list_single_image_pane_g2_ParamLimits

0xcbb7,	// (0x000477f7) list_single_image_pane_g2

0x0001,

0xfc33,	// (0x0004a873) list_single_image_pane_g_ParamLimits

0xfc33,	// (0x0004a873) list_single_image_pane_g

0xa05e,	// (0x00044c9e) list_single_image_pane_t1_ParamLimits

0xa05e,	// (0x00044c9e) list_single_image_pane_t1

0xcbcb,	// (0x0004780b) cell_image_list_pane_ParamLimits

0xcbcb,	// (0x0004780b) cell_image_list_pane

0xcbde,	// (0x0004781e) cell_image_list_pane_g1

0xcbe7,	// (0x00047827) cell_image_list_pane_g2

0x0001,

0xfc38,	// (0x0004a878) cell_image_list_pane_g

0xcbf0,	// (0x00047830) aid_size_cell_tb_trans_pane

0x84ae,	// (0x000430ee) bg_tb_trans_pane

0xcc02,	// (0x00047842) grid_tb_trans_pane

0x9955,	// (0x00044595) bg_tb_trans_pane_g1

0x995d,	// (0x0004459d) bg_tb_trans_pane_g2

0x9965,	// (0x000445a5) bg_tb_trans_pane_g3

0x996d,	// (0x000445ad) bg_tb_trans_pane_g4

0x9975,	// (0x000445b5) bg_tb_trans_pane_g5

0x998d,	// (0x000445cd) bg_tb_trans_pane_g6

0x9995,	// (0x000445d5) bg_tb_trans_pane_g7

0x997d,	// (0x000445bd) bg_tb_trans_pane_g8

0x9985,	// (0x000445c5) bg_tb_trans_pane_g9

0x0008,

0xfc3d,	// (0x0004a87d) bg_tb_trans_pane_g

0xcc16,	// (0x00047856) cell_toolbar_trans_pane_ParamLimits

0xcc16,	// (0x00047856) cell_toolbar_trans_pane

0xc067,	// (0x00046ca7) cell_toolbar_trans_pane_g1

0xbc31,	// (0x00046871) list_form2_midp_pane_t1

0xbc3f,	// (0x0004687f) list_form2_midp_pane_t2

0x0001,

0xfae6,	// (0x0004a726) list_form2_midp_pane_t

0xbc4d,	// (0x0004688d) scroll_pane_cp51_ParamLimits

0xbe09,	// (0x00046a49) form2_midp_wait_pane_g1

0xbe12,	// (0x00046a52) form2_midp_wait_pane_g2

0xbe1b,	// (0x00046a5b) form2_midp_wait_pane_g3

0x0002,

0xfafb,	// (0x0004a73b) form2_midp_wait_pane_g

0x7c42,	// (0x00042882) list_highlight_pane_cp21_ParamLimits

0xbe72,	// (0x00046ab2) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xbe81,	// (0x00046ac1) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x6bd6,	// (0x00041816) list_single_2graphic_im_pane_ParamLimits

0x6bd6,	// (0x00041816) list_single_2graphic_im_pane

0xcc3c,	// (0x0004787c) list_single_2graphic_im_pane_g1_ParamLimits

0xcc3c,	// (0x0004787c) list_single_2graphic_im_pane_g1

0xcc4d,	// (0x0004788d) list_single_2graphic_im_pane_g2_ParamLimits

0xcc4d,	// (0x0004788d) list_single_2graphic_im_pane_g2

0xcc59,	// (0x00047899) list_single_2graphic_im_pane_g3_ParamLimits

0xcc59,	// (0x00047899) list_single_2graphic_im_pane_g3

0x0003,

0xfc50,	// (0x0004a890) list_single_2graphic_im_pane_g_ParamLimits

0xfc50,	// (0x0004a890) list_single_2graphic_im_pane_g

0xcc79,	// (0x000478b9) list_single_2graphic_im_pane_t1_ParamLimits

0xcc79,	// (0x000478b9) list_single_2graphic_im_pane_t1

0xc6f0,	// (0x00047330) list_single_graphic_2heading_pane_fp_ParamLimits

0xc6f0,	// (0x00047330) list_single_graphic_2heading_pane_fp

0x559e,	// (0x000401de) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x559e,	// (0x000401de) list_single_graphic_2heading_pane_fp_g1

0xc705,	// (0x00047345) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc705,	// (0x00047345) list_single_graphic_2heading_pane_fp_g2

0x84c8,	// (0x00043108) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x84c8,	// (0x00043108) list_single_graphic_2heading_pane_fp_g3

0x84d4,	// (0x00043114) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x84d4,	// (0x00043114) list_single_graphic_2heading_pane_fp_g4

0xc711,	// (0x00047351) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc711,	// (0x00047351) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb7e,	// (0x0004a7be) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb7e,	// (0x0004a7be) list_single_graphic_2heading_pane_fp_g

0x56e7,	// (0x00040327) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x56e7,	// (0x00040327) list_single_graphic_2heading_pane_fp_t1

0x55d6,	// (0x00040216) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x55d6,	// (0x00040216) list_single_graphic_2heading_pane_fp_t2

0x56fd,	// (0x0004033d) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x56fd,	// (0x0004033d) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc59,	// (0x0004a899) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc59,	// (0x0004a899) list_single_graphic_2heading_pane_fp_t

0xc0f3,	// (0x00046d33) fep_hwr_write_pane_g5_ParamLimits

0xc0f3,	// (0x00046d33) fep_hwr_write_pane_g5

0xc0ff,	// (0x00046d3f) fep_hwr_write_pane_g6_ParamLimits

0xc0ff,	// (0x00046d3f) fep_hwr_write_pane_g6

0xc981,	// (0x000475c1) eswt_shell_pane_ParamLimits

0x9a59,	// (0x00044699) bg_popup_window_pane_cp18_ParamLimits

0xad2c,	// (0x0004596c) heading_pane_cp70

0xcaab,	// (0x000476eb) popup_eswt_tasktip_window_t1_ParamLimits

0x94cb,	// (0x0004410b) aid_touch_tab_arrow_left

0x94d7,	// (0x00044117) aid_touch_tab_arrow_right

0x7b8a,	// (0x000427ca) title_pane_g3_ParamLimits

0x7b8a,	// (0x000427ca) title_pane_g3

0x846d,	// (0x000430ad) set_value_pane_g1

0x67d5,	// (0x00041415) popup_toolbar_trans_pane_ParamLimits

0xcbf0,	// (0x00047830) aid_size_cell_tb_trans_pane_ParamLimits

0x84ae,	// (0x000430ee) bg_tb_trans_pane_ParamLimits

0xcc02,	// (0x00047842) grid_tb_trans_pane_ParamLimits

0x7ecb,	// (0x00042b0b) cont_note_pane_ParamLimits

0x7ecb,	// (0x00042b0b) cont_note_pane

0x821f,	// (0x00042e5f) cont_snote2_single_text_pane_ParamLimits

0x821f,	// (0x00042e5f) cont_snote2_single_text_pane

0x821f,	// (0x00042e5f) cont_snote2_single_graphic_pane_ParamLimits

0x821f,	// (0x00042e5f) cont_snote2_single_graphic_pane

0xa083,	// (0x00044cc3) cont_note_wait_pane_ParamLimits

0xa083,	// (0x00044cc3) cont_note_wait_pane

0xa083,	// (0x00044cc3) cont_note_image_pane_ParamLimits

0xa083,	// (0x00044cc3) cont_note_image_pane

0xccaa,	// (0x000478ea) popup_note2_window_g1_ParamLimits

0xccaa,	// (0x000478ea) popup_note2_window_g1

0xccdb,	// (0x0004791b) popup_note2_window_t1_ParamLimits

0xccdb,	// (0x0004791b) popup_note2_window_t1

0xcd20,	// (0x00047960) popup_note2_window_t2_ParamLimits

0xcd20,	// (0x00047960) popup_note2_window_t2

0xcd65,	// (0x000479a5) popup_note2_window_t3_ParamLimits

0xcd65,	// (0x000479a5) popup_note2_window_t3

0xcdaa,	// (0x000479ea) popup_note2_window_t4_ParamLimits

0xcdaa,	// (0x000479ea) popup_note2_window_t4

0x7f4f,	// (0x00042b8f) popup_note2_window_t5_ParamLimits

0x7f4f,	// (0x00042b8f) popup_note2_window_t5

0x0004,

0xfc65,	// (0x0004a8a5) popup_note2_window_t_ParamLimits

0xfc65,	// (0x0004a8a5) popup_note2_window_t

0xcdd9,	// (0x00047a19) popup_note2_image_window_g1_ParamLimits

0xcdd9,	// (0x00047a19) popup_note2_image_window_g1

0xcde5,	// (0x00047a25) popup_note2_image_window_g2_ParamLimits

0xcde5,	// (0x00047a25) popup_note2_image_window_g2

0x0001,

0xfc70,	// (0x0004a8b0) popup_note2_image_window_g_ParamLimits

0xfc70,	// (0x0004a8b0) popup_note2_image_window_g

0xcdf7,	// (0x00047a37) popup_note2_image_window_t1_ParamLimits

0xcdf7,	// (0x00047a37) popup_note2_image_window_t1

0xce0f,	// (0x00047a4f) popup_note2_image_window_t2_ParamLimits

0xce0f,	// (0x00047a4f) popup_note2_image_window_t2

0xce27,	// (0x00047a67) popup_note2_image_window_t3_ParamLimits

0xce27,	// (0x00047a67) popup_note2_image_window_t3

0x0002,

0xfc75,	// (0x0004a8b5) popup_note2_image_window_t_ParamLimits

0xfc75,	// (0x0004a8b5) popup_note2_image_window_t

0xa091,	// (0x00044cd1) popup_note2_wait_window_g1_ParamLimits

0xa091,	// (0x00044cd1) popup_note2_wait_window_g1

0xce43,	// (0x00047a83) popup_note2_wait_window_g2_ParamLimits

0xce43,	// (0x00047a83) popup_note2_wait_window_g2

0xa0a9,	// (0x00044ce9) popup_note2_wait_window_g3_ParamLimits

0xa0a9,	// (0x00044ce9) popup_note2_wait_window_g3

0x0002,

0xfc7c,	// (0x0004a8bc) popup_note2_wait_window_g_ParamLimits

0xfc7c,	// (0x0004a8bc) popup_note2_wait_window_g

0xce4f,	// (0x00047a8f) popup_note2_wait_window_t1_ParamLimits

0xce4f,	// (0x00047a8f) popup_note2_wait_window_t1

0xce6d,	// (0x00047aad) popup_note2_wait_window_t2_ParamLimits

0xce6d,	// (0x00047aad) popup_note2_wait_window_t2

0xce8b,	// (0x00047acb) popup_note2_wait_window_t3_ParamLimits

0xce8b,	// (0x00047acb) popup_note2_wait_window_t3

0xce9d,	// (0x00047add) popup_note2_wait_window_t4_ParamLimits

0xce9d,	// (0x00047add) popup_note2_wait_window_t4

0x0003,

0xfc83,	// (0x0004a8c3) popup_note2_wait_window_t_ParamLimits

0xfc83,	// (0x0004a8c3) popup_note2_wait_window_t

0xceaf,	// (0x00047aef) wait_bar2_pane_ParamLimits

0xceaf,	// (0x00047aef) wait_bar2_pane

0xcec7,	// (0x00047b07) popup_snote2_single_text_window_g1_ParamLimits

0xcec7,	// (0x00047b07) popup_snote2_single_text_window_g1

0xceef,	// (0x00047b2f) popup_snote2_single_text_window_t1_ParamLimits

0xceef,	// (0x00047b2f) popup_snote2_single_text_window_t1

0xcf3b,	// (0x00047b7b) popup_snote2_single_text_window_t2_ParamLimits

0xcf3b,	// (0x00047b7b) popup_snote2_single_text_window_t2

0xcf87,	// (0x00047bc7) popup_snote2_single_text_window_t3_ParamLimits

0xcf87,	// (0x00047bc7) popup_snote2_single_text_window_t3

0xcfc8,	// (0x00047c08) popup_snote2_single_text_window_t4_ParamLimits

0xcfc8,	// (0x00047c08) popup_snote2_single_text_window_t4

0xcffe,	// (0x00047c3e) popup_snote2_single_text_window_t5_ParamLimits

0xcffe,	// (0x00047c3e) popup_snote2_single_text_window_t5

0x0004,

0xfc8c,	// (0x0004a8cc) popup_snote2_single_text_window_t_ParamLimits

0xfc8c,	// (0x0004a8cc) popup_snote2_single_text_window_t

0xd029,	// (0x00047c69) popup_snote2_single_graphic_window_g1_ParamLimits

0xd029,	// (0x00047c69) popup_snote2_single_graphic_window_g1

0xd051,	// (0x00047c91) popup_snote2_single_graphic_window_g2_ParamLimits

0xd051,	// (0x00047c91) popup_snote2_single_graphic_window_g2

0x0001,

0xfc97,	// (0x0004a8d7) popup_snote2_single_graphic_window_g_ParamLimits

0xfc97,	// (0x0004a8d7) popup_snote2_single_graphic_window_g

0xd079,	// (0x00047cb9) popup_snote2_single_graphic_window_t1_ParamLimits

0xd079,	// (0x00047cb9) popup_snote2_single_graphic_window_t1

0xd0c5,	// (0x00047d05) popup_snote2_single_graphic_window_t2_ParamLimits

0xd0c5,	// (0x00047d05) popup_snote2_single_graphic_window_t2

0xcf87,	// (0x00047bc7) popup_snote2_single_graphic_window_t3_ParamLimits

0xcf87,	// (0x00047bc7) popup_snote2_single_graphic_window_t3

0xcfc8,	// (0x00047c08) popup_snote2_single_graphic_window_t4_ParamLimits

0xcfc8,	// (0x00047c08) popup_snote2_single_graphic_window_t4

0xcffe,	// (0x00047c3e) popup_snote2_single_graphic_window_t5_ParamLimits

0xcffe,	// (0x00047c3e) popup_snote2_single_graphic_window_t5

0x0004,

0xfc9c,	// (0x0004a8dc) popup_snote2_single_graphic_window_t_ParamLimits

0xfc9c,	// (0x0004a8dc) popup_snote2_single_graphic_window_t

0xbb10,	// (0x00046750) clock_nsta_pane_cp2_t1

0xbb10,	// (0x00046750) clock_nsta_pane_cp2_t2

0x0001,

0xfabc,	// (0x0004a6fc) clock_nsta_pane_cp2_t

0x4fa6,	// (0x0003fbe6) form_field_data_wide_pane_g1_ParamLimits

0x84c8,	// (0x00043108) form_field_data_wide_pane_g2_ParamLimits

0x84c8,	// (0x00043108) form_field_data_wide_pane_g2

0x84d4,	// (0x00043114) form_field_data_wide_pane_g3_ParamLimits

0x84d4,	// (0x00043114) form_field_data_wide_pane_g3

0x0002,

0xf686,	// (0x0004a2c6) form_field_data_wide_pane_g_ParamLimits

0xf686,	// (0x0004a2c6) form_field_data_wide_pane_g

0xb9e9,	// (0x00046629) grid_touch_3_pane_ParamLimits

0xb9e9,	// (0x00046629) grid_touch_3_pane

0xd111,	// (0x00047d51) cell_touch_3_pane_ParamLimits

0xd111,	// (0x00047d51) cell_touch_3_pane

0xc067,	// (0x00046ca7) cell_touch_3_pane_g1

0xc067,	// (0x00046ca7) cell_touch_3_pane_g2

0x0001,

0xfb41,	// (0x0004a781) cell_touch_3_pane_g

0x7f81,	// (0x00042bc1) cont_query_data_pane

0x7f89,	// (0x00042bc9) cont_query_data_pane_cp1

0xd13f,	// (0x00047d7f) button_value_adjust_pane_cp7

0xd147,	// (0x00047d87) query_popup_pane_cp3

0x8c08,	// (0x00043848) bg_popup_sub_pane_cp22_ParamLimits

0x5f39,	// (0x00040b79) navi_navi_volume_pane_cp2

0x5f54,	// (0x00040b94) popup_side_volume_key_window_g2

0x5f63,	// (0x00040ba3) popup_side_volume_key_window_g3

0x0002,

0xf71c,	// (0x0004a35c) popup_side_volume_key_window_g

0x5f80,	// (0x00040bc0) popup_side_volume_key_window_t2

0x0001,

0xf723,	// (0x0004a363) popup_side_volume_key_window_t

0x8ebf,	// (0x00043aff) popup_side_volume_key_window_ParamLimits

0x4bb3,	// (0x0003f7f3) list_double_graphic_pane_g4_ParamLimits

0x4bb3,	// (0x0003f7f3) list_double_graphic_pane_g4

0x6c13,	// (0x00041853) list_single_2heading_msg_pane_ParamLimits

0x6c13,	// (0x00041853) list_single_2heading_msg_pane

0x71e7,	// (0x00041e27) list_single_2heading_msg_pane_g1_ParamLimits

0x71e7,	// (0x00041e27) list_single_2heading_msg_pane_g1

0x904d,	// (0x00043c8d) list_single_2heading_msg_pane_g2_ParamLimits

0x904d,	// (0x00043c8d) list_single_2heading_msg_pane_g2

0x71f3,	// (0x00041e33) list_single_2heading_msg_pane_g3_ParamLimits

0x71f3,	// (0x00041e33) list_single_2heading_msg_pane_g3

0x71ff,	// (0x00041e3f) list_single_2heading_msg_pane_g4_ParamLimits

0x71ff,	// (0x00041e3f) list_single_2heading_msg_pane_g4

0x0003,

0xfca7,	// (0x0004a8e7) list_single_2heading_msg_pane_g_ParamLimits

0xfca7,	// (0x0004a8e7) list_single_2heading_msg_pane_g

0x571d,	// (0x0004035d) list_single_2heading_msg_pane_t1_ParamLimits

0x571d,	// (0x0004035d) list_single_2heading_msg_pane_t1

0x5745,	// (0x00040385) list_single_2heading_msg_pane_t2_ParamLimits

0x5745,	// (0x00040385) list_single_2heading_msg_pane_t2

0x5779,	// (0x000403b9) list_single_2heading_msg_pane_t3_ParamLimits

0x5779,	// (0x000403b9) list_single_2heading_msg_pane_t3

0x57b2,	// (0x000403f2) list_single_2heading_msg_pane_t4_ParamLimits

0x57b2,	// (0x000403f2) list_single_2heading_msg_pane_t4

0x0003,

0xfcb0,	// (0x0004a8f0) list_single_2heading_msg_pane_t_ParamLimits

0xfcb0,	// (0x0004a8f0) list_single_2heading_msg_pane_t

0x7b96,	// (0x000427d6) title_pane_g4_ParamLimits

0x7b96,	// (0x000427d6) title_pane_g4

0x5d47,	// (0x00040987) title_pane_stacon_g3_ParamLimits

0x5d47,	// (0x00040987) title_pane_stacon_g3

0xcc6d,	// (0x000478ad) list_single_2graphic_im_pane_g4_ParamLimits

0xcc6d,	// (0x000478ad) list_single_2graphic_im_pane_g4

0xaad3,	// (0x00045713) popup_side_volume_key_window_cp

0xb300,	// (0x00045f40) main_idle_act2_pane_t1

0x68d3,	// (0x00041513) toolbar_button_pane_g10

0x8417,	// (0x00043057) popup_toolbar_window_cp1

0xbb01,	// (0x00046741) clock_nsta_pane_cp_t1

0xbb01,	// (0x00046741) clock_nsta_pane_cp_t2

0x0001,

0xfab7,	// (0x0004a6f7) clock_nsta_pane_cp_t

0x5f39,	// (0x00040b79) navi_navi_volume_pane_cp2_ParamLimits

0x5f48,	// (0x00040b88) popup_side_volume_key_window_g1_ParamLimits

0x5f54,	// (0x00040b94) popup_side_volume_key_window_g2_ParamLimits

0x5f63,	// (0x00040ba3) popup_side_volume_key_window_g3_ParamLimits

0xf71c,	// (0x0004a35c) popup_side_volume_key_window_g_ParamLimits

0x6e08,	// (0x00041a48) fep_hwr_aid_pane

0x2da9,	// (0x0003d9e9) bg_fep_hwr_top_pane_g4_ParamLimits

0xc0c3,	// (0x00046d03) fep_hwr_top_pane_g1_ParamLimits

0xc0d5,	// (0x00046d15) fep_hwr_top_pane_g2_ParamLimits

0x6ec1,	// (0x00041b01) fep_hwr_top_pane_g3_ParamLimits

0xfb0c,	// (0x0004a74c) fep_hwr_top_pane_g_ParamLimits

0x6ed6,	// (0x00041b16) fep_hwr_top_text_pane_ParamLimits

0xa896,	// (0x000454d6) aid_touch_tab_arrow_arrow_2

0xa89f,	// (0x000454df) aid_touch_tab_arrow_left_2

0x6e1c,	// (0x00041a5c) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x6e53,	// (0x00041a93) fep_hwr_prediction_pane

0xc235,	// (0x00046e75) fep_vkb_prediction_pane

0xc339,	// (0x00046f79) fep_vkb_side_pane_g3_ParamLimits

0xc339,	// (0x00046f79) fep_vkb_side_pane_g3

0xc2e5,	// (0x00046f25) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xc765,	// (0x000473a5) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xc772,	// (0x000473b2) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbb6,	// (0x0004a7f6) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xd16c,	// (0x00047dac) fep_hwr_prediction_pane_g1

0x7217,	// (0x00041e57) fep_hwr_prediction_pane_g2

0x721f,	// (0x00041e5f) fep_hwr_prediction_pane_g3

0x7227,	// (0x00041e67) fep_hwr_prediction_pane_g4

0x0003,

0xfcb9,	// (0x0004a8f9) fep_hwr_prediction_pane_g

0xd16c,	// (0x00047dac) fep_vkb_prediction_pane_g1

0xd176,	// (0x00047db6) fep_vkb_prediction_pane_g2

0xd17e,	// (0x00047dbe) fep_vkb_prediction_pane_g3

0xd186,	// (0x00047dc6) fep_vkb_prediction_pane_g4

0x0003,

0xfcc2,	// (0x0004a902) fep_vkb_prediction_pane_g

0xada5,	// (0x000459e5) slider_set_pane_g3

0xadb9,	// (0x000459f9) slider_set_pane_g4

0xadd1,	// (0x00045a11) slider_set_pane_g5

0xada5,	// (0x000459e5) slider_set_pane_g6

0x6baf,	// (0x000417ef) slider_set_pane_g7

0xaf8b,	// (0x00045bcb) slider_form_pane_g3

0xaf94,	// (0x00045bd4) slider_form_pane_g4

0xaf9c,	// (0x00045bdc) slider_form_pane_g5

0xaf8b,	// (0x00045bcb) slider_form_pane_g6

0xafa4,	// (0x00045be4) slider_form_pane_g7

0xb5a9,	// (0x000461e9) slider_set_pane_vc_g3

0xb5b2,	// (0x000461f2) slider_set_pane_vc_g4

0xb5bb,	// (0x000461fb) slider_set_pane_vc_g5

0xb5a9,	// (0x000461e9) slider_set_pane_vc_g6

0xb5c4,	// (0x00046204) slider_set_pane_vc_g7

0xb7bc,	// (0x000463fc) slider_form_pane_vc_g1

0xb7c5,	// (0x00046405) slider_form_pane_vc_g2

0xb7ce,	// (0x0004640e) slider_form_pane_vc_g3

0xb7bc,	// (0x000463fc) slider_form_pane_vc_g4

0xb7d7,	// (0x00046417) slider_form_pane_vc_g5

0x0004,

0xfa89,	// (0x0004a6c9) slider_form_pane_vc_g

0x7b4e,	// (0x0004278e) main_idle_act3_pane

0xd18e,	// (0x00047dce) ai3_links_pane

0xd197,	// (0x00047dd7) popup_ai3_data_window_ParamLimits

0xd197,	// (0x00047dd7) popup_ai3_data_window

0x7b4e,	// (0x0004278e) grid_ai3_links_pane

0xd1b1,	// (0x00047df1) cell_ai3_links_pane_ParamLimits

0xd1b1,	// (0x00047df1) cell_ai3_links_pane

0xd1c9,	// (0x00047e09) bg_popup_sub_pane_cp11

0xd1d6,	// (0x00047e16) cell_ai3_links_pane_g1

0x7b4e,	// (0x0004278e) bg_popup_sub_pane_cp12

0xd1fb,	// (0x00047e3b) heading_ai3_data_pane

0xd203,	// (0x00047e43) list_ai3_gene_pane

0xd20f,	// (0x00047e4f) popup_ai3_data_window_g1

0xd217,	// (0x00047e57) heading_ai3_data_pane_g1

0xd21f,	// (0x00047e5f) heading_ai3_data_pane_t1

0xd22d,	// (0x00047e6d) list_double_ai3_gene_pane_ParamLimits

0xd22d,	// (0x00047e6d) list_double_ai3_gene_pane

0xd23a,	// (0x00047e7a) list_single_ai3_gene_pane_ParamLimits

0xd23a,	// (0x00047e7a) list_single_ai3_gene_pane

0xc02c,	// (0x00046c6c) list_highlight_pane_cp7_ParamLimits

0xc02c,	// (0x00046c6c) list_highlight_pane_cp7

0xd247,	// (0x00047e87) list_single_a13_gene_pane_t1_ParamLimits

0xd247,	// (0x00047e87) list_single_a13_gene_pane_t1

0xd25e,	// (0x00047e9e) list_single_ai3_gene_pane_g1

0xd267,	// (0x00047ea7) list_single_ai3_gene_pane_g2

0x0001,

0xfccb,	// (0x0004a90b) list_single_ai3_gene_pane_g

0xd26f,	// (0x00047eaf) list_double_ai3_gene_pane_g1_ParamLimits

0xd26f,	// (0x00047eaf) list_double_ai3_gene_pane_g1

0xd27b,	// (0x00047ebb) list_double_ai3_gene_pane_t1_ParamLimits

0xd27b,	// (0x00047ebb) list_double_ai3_gene_pane_t1

0xd297,	// (0x00047ed7) list_double_ai3_gene_pane_t2_ParamLimits

0xd297,	// (0x00047ed7) list_double_ai3_gene_pane_t2

0xd2ad,	// (0x00047eed) list_double_ai3_gene_pane_t3_ParamLimits

0xd2ad,	// (0x00047eed) list_double_ai3_gene_pane_t3

0x0002,

0xfcd0,	// (0x0004a910) list_double_ai3_gene_pane_t_ParamLimits

0xfcd0,	// (0x0004a910) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x5713,	// (0x00040353) aid_size_min_col_2

0xd158,	// (0x00047d98) aid_size_min_msg_ParamLimits

0xd158,	// (0x00047d98) aid_size_min_msg

0xc439,	// (0x00047079) fep_vkb_top_text_pane_g2_ParamLimits

0xc439,	// (0x00047079) fep_vkb_top_text_pane_g2

0x0001,

0xfb3c,	// (0x0004a77c) fep_vkb_top_text_pane_g_ParamLimits

0xfb3c,	// (0x0004a77c) fep_vkb_top_text_pane_g

0x7b4e,	// (0x0004278e) main_hc_apps_shell_pane

0xd2ca,	// (0x00047f0a) grid_hc_apps_pane_ParamLimits

0xd2ca,	// (0x00047f0a) grid_hc_apps_pane

0xd2d9,	// (0x00047f19) list_hc_apps_pane

0xd2e1,	// (0x00047f21) scroll_pane_cp37_ParamLimits

0xd2e1,	// (0x00047f21) scroll_pane_cp37

0xd2ed,	// (0x00047f2d) cell_hc_apps_pane_ParamLimits

0xd2ed,	// (0x00047f2d) cell_hc_apps_pane

0xd39b,	// (0x00047fdb) cell_hc_apps_pane_g1_ParamLimits

0xd39b,	// (0x00047fdb) cell_hc_apps_pane_g1

0xd3cc,	// (0x0004800c) cell_hc_apps_pane_g2_ParamLimits

0xd3cc,	// (0x0004800c) cell_hc_apps_pane_g2

0xd3e8,	// (0x00048028) cell_hc_apps_pane_g3_ParamLimits

0xd3e8,	// (0x00048028) cell_hc_apps_pane_g3

0x0002,

0xfcd7,	// (0x0004a917) cell_hc_apps_pane_g_ParamLimits

0xfcd7,	// (0x0004a917) cell_hc_apps_pane_g

0xd40a,	// (0x0004804a) cell_hc_apps_pane_t1_ParamLimits

0xd40a,	// (0x0004804a) cell_hc_apps_pane_t1

0x7ecb,	// (0x00042b0b) grid_highlight_pane_cp10_ParamLimits

0x7ecb,	// (0x00042b0b) grid_highlight_pane_cp10

0xd44a,	// (0x0004808a) list_single_hc_apps_pane_ParamLimits

0xd44a,	// (0x0004808a) list_single_hc_apps_pane

0xd4a6,	// (0x000480e6) list_single_hc_apps_pane_g1

0x722f,	// (0x00041e6f) list_single_hc_apps_pane_g2

0x0001,

0xfcde,	// (0x0004a91e) list_single_hc_apps_pane_g

0x7248,	// (0x00041e88) list_single_hc_apps_pane_g2_copy1

0x57d7,	// (0x00040417) list_single_hc_apps_pane_t1

0x7c42,	// (0x00042882) bg_set_opt_pane_cp_ParamLimits

0x5bf2,	// (0x00040832) setting_slider_pane_t1_ParamLimits

0x5c0b,	// (0x0004084b) setting_slider_pane_t2_ParamLimits

0x5c25,	// (0x00040865) setting_slider_pane_t3_ParamLimits

0xf564,	// (0x0004a1a4) setting_slider_pane_t_ParamLimits

0x5c3d,	// (0x0004087d) slider_set_pane_ParamLimits

0x61de,	// (0x00040e1e) control_pane_g5_ParamLimits

0x61de,	// (0x00040e1e) control_pane_g5

0xad98,	// (0x000459d8) slider_set_pane_g1_ParamLimits

0x6ba3,	// (0x000417e3) slider_set_pane_g2_ParamLimits

0xada5,	// (0x000459e5) slider_set_pane_g3_ParamLimits

0xadb9,	// (0x000459f9) slider_set_pane_g4_ParamLimits

0xadd1,	// (0x00045a11) slider_set_pane_g5_ParamLimits

0xada5,	// (0x000459e5) slider_set_pane_g6_ParamLimits

0x6baf,	// (0x000417ef) slider_set_pane_g7_ParamLimits

0xf96f,	// (0x0004a5af) slider_set_pane_g_ParamLimits

0x8fa0,	// (0x00043be0) navi_icon_text_pane_ParamLimits

0x948c,	// (0x000440cc) aid_fill_nsta_2_ParamLimits

0x94cb,	// (0x0004410b) aid_touch_tab_arrow_left_ParamLimits

0x94d7,	// (0x00044117) aid_touch_tab_arrow_right_ParamLimits

0x9543,	// (0x00044183) clock_nsta_pane_ParamLimits

0xa878,	// (0x000454b8) navi_icon_pane_g1_ParamLimits

0xa884,	// (0x000454c4) navi_text_pane_t1_ParamLimits

0xbc0b,	// (0x0004684b) navi_icon_text_pane_g1_ParamLimits

0xbc17,	// (0x00046857) navi_icon_text_pane_t1_ParamLimits

0xd4a6,	// (0x000480e6) list_single_hc_apps_pane_g1_ParamLimits

0x722f,	// (0x00041e6f) list_single_hc_apps_pane_g2_ParamLimits

0xfcde,	// (0x0004a91e) list_single_hc_apps_pane_g_ParamLimits

0x7248,	// (0x00041e88) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x57d7,	// (0x00040417) list_single_hc_apps_pane_t1_ParamLimits

0x5b06,	// (0x00040746) popup_toolbar2_fixed_window_ParamLimits

0x5b06,	// (0x00040746) popup_toolbar2_fixed_window

0x67cb,	// (0x0004140b) popup_toolbar2_float_window

0x7b4e,	// (0x0004278e) bg_popup_sub_pane_cp27

0xd4bf,	// (0x000480ff) grid_toolbar2_float_pane

0x7b4e,	// (0x0004278e) bg_popup_sub_pane_cp26

0xd4bf,	// (0x000480ff) grid_toolbar2_fixed_pane

0xd4c7,	// (0x00048107) cell_toolbar2_fixed_pane_ParamLimits

0xd4c7,	// (0x00048107) cell_toolbar2_fixed_pane

0xd4d7,	// (0x00048117) cell_toolbar2_fixed_pane_g1

0xd4e0,	// (0x00048120) toolbar2_fixed_button_pane

0x9955,	// (0x00044595) toolbar2_fixed_button_pane_g1

0x995d,	// (0x0004459d) toolbar2_fixed_button_pane_g2

0x9965,	// (0x000445a5) toolbar2_fixed_button_pane_g3

0x996d,	// (0x000445ad) toolbar2_fixed_button_pane_g4

0x9975,	// (0x000445b5) toolbar2_fixed_button_pane_g5

0x997d,	// (0x000445bd) toolbar2_fixed_button_pane_g6

0x9985,	// (0x000445c5) toolbar2_fixed_button_pane_g7

0x998d,	// (0x000445cd) toolbar2_fixed_button_pane_g8

0x9995,	// (0x000445d5) toolbar2_fixed_button_pane_g9

0x0008,

0xf871,	// (0x0004a4b1) toolbar2_fixed_button_pane_g

0xd4e8,	// (0x00048128) cell_toolbar2_float_pane_ParamLimits

0xd4e8,	// (0x00048128) cell_toolbar2_float_pane

0xd4f9,	// (0x00048139) cell_toolbar2_float_pane_g1

0xd4e0,	// (0x00048120) toolbar2_fixed_button_pane_cp

0xc195,	// (0x00046dd5) fep_vkb_accented_list_pane_ParamLimits

0xc195,	// (0x00046dd5) fep_vkb_accented_list_pane

0x7024,	// (0x00041c64) bg_popup_fep_shadow_pane_g9

0x9114,	// (0x00043d54) bg_popup_fep_shadow_pane_cp3

0x8611,	// (0x00043251) list_accented_list_pane

0xd502,	// (0x00048142) list_single_accented_list_pane_ParamLimits

0xd502,	// (0x00048142) list_single_accented_list_pane

0x9114,	// (0x00043d54) list_highlight_pane_cp10

0xd513,	// (0x00048153) list_single_accented_list_pane_t1

0x671b,	// (0x0004135b) popup_slider_window_ParamLimits

0x671b,	// (0x0004135b) popup_slider_window

0xd14f,	// (0x00047d8f) aid_indentation_list_msg

0xd5cd,	// (0x0004820d) bg_popup_window_pane_cp19

0xd637,	// (0x00048277) popup_slider_window_g1

0xd653,	// (0x00048293) popup_slider_window_g2

0xd66f,	// (0x000482af) popup_slider_window_g3

0x0005,

0xfce3,	// (0x0004a923) popup_slider_window_g

0xd6cb,	// (0x0004830b) popup_slider_window_t1

0xd73f,	// (0x0004837f) small_volume_slider_vertical_pane

0xc067,	// (0x00046ca7) small_volume_slider_vertical_pane_g1

0xc067,	// (0x00046ca7) small_volume_slider_vertical_pane_g2

0xd75b,	// (0x0004839b) small_volume_slider_vertical_pane_g3

0x0002,

0xfcf5,	// (0x0004a935) small_volume_slider_vertical_pane_g

0x58c8,	// (0x00040508) area_side_right_pane_ParamLimits

0x58c8,	// (0x00040508) area_side_right_pane

0x7264,	// (0x00041ea4) aid_size_side_button_ParamLimits

0x7264,	// (0x00041ea4) aid_size_side_button

0x7278,	// (0x00041eb8) grid_sctrl_middle_pane_ParamLimits

0x7278,	// (0x00041eb8) grid_sctrl_middle_pane

0x7298,	// (0x00041ed8) sctrl_sk_bottom_pane

0x72a9,	// (0x00041ee9) sctrl_sk_top_pane

0x72bb,	// (0x00041efb) aid_touch_sctrl_top

0x7ecb,	// (0x00042b0b) bg_sctrl_sk_pane_ParamLimits

0x7ecb,	// (0x00042b0b) bg_sctrl_sk_pane

0x72c8,	// (0x00041f08) sctrl_sk_top_pane_g1

0x72d5,	// (0x00041f15) sctrl_sk_top_pane_t1

0x72bb,	// (0x00041efb) aid_touch_sctrl_bottom

0x7ecb,	// (0x00042b0b) bg_sctrl_sk_pane_cp_ParamLimits

0x7ecb,	// (0x00042b0b) bg_sctrl_sk_pane_cp

0x72f0,	// (0x00041f30) sctrl_sk_bottom_pane_g1

0x72d5,	// (0x00041f15) sctrl_sk_bottom_pane_t1

0x72f9,	// (0x00041f39) cell_sctrl_middle_pane_ParamLimits

0x72f9,	// (0x00041f39) cell_sctrl_middle_pane

0x7314,	// (0x00041f54) aid_touch_sctrl_middle_ParamLimits

0x7314,	// (0x00041f54) aid_touch_sctrl_middle

0x84ae,	// (0x000430ee) bg_sctrl_middle_pane_ParamLimits

0x84ae,	// (0x000430ee) bg_sctrl_middle_pane

0xc2e5,	// (0x00046f25) cell_sctrl_middle_pane_g1_ParamLimits

0xc2e5,	// (0x00046f25) cell_sctrl_middle_pane_g1

0x7326,	// (0x00041f66) cell_sctrl_middle_pane_g2_ParamLimits

0x7326,	// (0x00041f66) cell_sctrl_middle_pane_g2

0x0001,

0xfd01,	// (0x0004a941) cell_sctrl_middle_pane_g_ParamLimits

0xfd01,	// (0x0004a941) cell_sctrl_middle_pane_g

0x9955,	// (0x00044595) bg_sctrl_middle_pane_g1

0x995d,	// (0x0004459d) bg_sctrl_middle_pane_g2

0x9965,	// (0x000445a5) bg_sctrl_middle_pane_g3

0x996d,	// (0x000445ad) bg_sctrl_middle_pane_g4

0x9975,	// (0x000445b5) bg_sctrl_middle_pane_g5

0x997d,	// (0x000445bd) bg_sctrl_middle_pane_g6

0x9985,	// (0x000445c5) bg_sctrl_middle_pane_g7

0x998d,	// (0x000445cd) bg_sctrl_middle_pane_g8

0x0007,

0xfd06,	// (0x0004a946) bg_sctrl_middle_pane_g

0x9995,	// (0x000445d5) bg_sctrl_middle_pane_g8_copy1

0x9955,	// (0x00044595) bg_sctrl_sk_pane_g1

0x995d,	// (0x0004459d) bg_sctrl_sk_pane_g2

0x9965,	// (0x000445a5) bg_sctrl_sk_pane_g3

0x0008,

0xf871,	// (0x0004a4b1) bg_sctrl_sk_pane_g

0x83dd,	// (0x0004301d) aid_size_touch_scroll_bar

0x996d,	// (0x000445ad) bg_sctrl_sk_pane_g4

0x9975,	// (0x000445b5) bg_sctrl_sk_pane_g5

0x997d,	// (0x000445bd) bg_sctrl_sk_pane_g6

0x9985,	// (0x000445c5) bg_sctrl_sk_pane_g7

0x998d,	// (0x000445cd) bg_sctrl_sk_pane_g8

0x9995,	// (0x000445d5) bg_sctrl_sk_pane_g9

0x6386,	// (0x00040fc6) popup_fep_china_hwr2_fs_candidate_window

0x6390,	// (0x00040fd0) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x6390,	// (0x00040fd0) popup_fep_china_hwr2_fs_control_window

0xc2e5,	// (0x00046f25) sctrl_sk_top_pane_g2

0x0001,

0xfcfc,	// (0x0004a93c) sctrl_sk_top_pane_g

0xd764,	// (0x000483a4) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd764,	// (0x000483a4) aid_fep_china_hwr2_fs_cell

0xd776,	// (0x000483b6) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd776,	// (0x000483b6) bg_popup_fep_shadow_pane_cp4

0xd78d,	// (0x000483cd) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd78d,	// (0x000483cd) bg_popup_fep_shadow_pane_cp5

0xd79f,	// (0x000483df) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd79f,	// (0x000483df) popup_fep_china_hwr2_fs_control_bar_grid

0xd7af,	// (0x000483ef) popup_fep_china_hwr2_fs_control_funtion_grid

0xd7b7,	// (0x000483f7) aid_fep_china_hwr2_fs_candi_cell

0x7b4e,	// (0x0004278e) bg_popup_fep_shadow_pane_cp6

0xd7c1,	// (0x00048401) popup_fep_china_hwr2_fs_candidate_grid

0xd7cb,	// (0x0004840b) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd7cb,	// (0x0004840b) cell_fep_china_hwr2_fs_funtion_grid

0xc067,	// (0x00046ca7) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd7e3,	// (0x00048423) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd7e3,	// (0x00048423) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd7f1,	// (0x00048431) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd7f1,	// (0x00048431) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd17,	// (0x0004a957) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd17,	// (0x0004a957) cell_fep_china_hwr2_fs_funtion_grid_g

0xd807,	// (0x00048447) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd807,	// (0x00048447) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd81c,	// (0x0004845c) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd81c,	// (0x0004845c) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd1c,	// (0x0004a95c) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd1c,	// (0x0004a95c) cell_fep_china_hwr2_fs_funtion_grid_t

0xd838,	// (0x00048478) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd840,	// (0x00048480) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd848,	// (0x00048488) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd21,	// (0x0004a961) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd850,	// (0x00048490) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd850,	// (0x00048490) cell_fep_china_hwr2_fs_candidate_grid

0xd869,	// (0x000484a9) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd871,	// (0x000484b1) popup_fep_china_hwr2_fs_candidate_grid_g21

0xc067,	// (0x00046ca7) cell_fep_china_hwr2_fs_candidate_grid_g1

0xc067,	// (0x00046ca7) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb41,	// (0x0004a781) cell_fep_china_hwr2_fs_candidate_grid_g

0xd879,	// (0x000484b9) cell_fep_china_hwr2_fs_candidate_grid_t1

0x9550,	// (0x00044190) clock_nsta_pane_cp_24_ParamLimits

0x9550,	// (0x00044190) clock_nsta_pane_cp_24

0x95ce,	// (0x0004420e) indicator_nsta_pane_cp_24_ParamLimits

0x95ce,	// (0x0004420e) indicator_nsta_pane_cp_24

0xa703,	// (0x00045343) heading_pane_g1

0x0001,

0xf8d6,	// (0x0004a516) heading_pane_g

0xb149,	// (0x00045d89) grid_sct_catagory_button_pane

0xb179,	// (0x00045db9) scroll_pane_cp5_ParamLimits

0xbc59,	// (0x00046899) button_value_adjust_pane_cp5_ParamLimits

0xbc59,	// (0x00046899) button_value_adjust_pane_cp5

0xbd38,	// (0x00046978) form2_midp_time_pane_ParamLimits

0xd887,	// (0x000484c7) cell_sct_catagory_button_pane_ParamLimits

0xd887,	// (0x000484c7) cell_sct_catagory_button_pane

0xc02c,	// (0x00046c6c) bg_button_pane_cp01_ParamLimits

0xc02c,	// (0x00046c6c) bg_button_pane_cp01

0xc067,	// (0x00046ca7) cell_sct_catagory_button_pane_g1

0x675a,	// (0x0004139a) popup_tb_extension_window

0xd899,	// (0x000484d9) aid_size_cell_ext_ParamLimits

0xd899,	// (0x000484d9) aid_size_cell_ext

0x7ecb,	// (0x00042b0b) bg_tb_trans_pane_cp1_ParamLimits

0x7ecb,	// (0x00042b0b) bg_tb_trans_pane_cp1

0xd8b9,	// (0x000484f9) grid_tb_ext_pane_ParamLimits

0xd8b9,	// (0x000484f9) grid_tb_ext_pane

0xd8e9,	// (0x00048529) cell_tb_ext_pane_ParamLimits

0xd8e9,	// (0x00048529) cell_tb_ext_pane

0xd900,	// (0x00048540) cell_tb_ext_pane_g1_ParamLimits

0xd900,	// (0x00048540) cell_tb_ext_pane_g1

0xd91d,	// (0x0004855d) cell_tb_ext_pane_t1

0x7ecb,	// (0x00042b0b) list_highlight_pane_cp11_ParamLimits

0x7ecb,	// (0x00042b0b) list_highlight_pane_cp11

0x5b25,	// (0x00040765) popup_uni_indicator_window_ParamLimits

0x5b25,	// (0x00040765) popup_uni_indicator_window

0x84ae,	// (0x000430ee) bg_popup_sub_pane_cp14

0xd938,	// (0x00048578) list_uniindi_pane

0xd944,	// (0x00048584) uniindi_top_pane

0x7ecb,	// (0x00042b0b) bg_uniindi_top_pane

0xd963,	// (0x000485a3) uniindi_top_pane_g1

0xd979,	// (0x000485b9) uniindi_top_pane_g2

0x0003,

0xfd28,	// (0x0004a968) uniindi_top_pane_g

0xd9a3,	// (0x000485e3) uniindi_top_pane_t1

0xd9cd,	// (0x0004860d) list_single_uniindi_pane_ParamLimits

0xd9cd,	// (0x0004860d) list_single_uniindi_pane

0xc067,	// (0x00046ca7) bg_uniindi_top_pane_g1

0xd9e0,	// (0x00048620) list_single_uniindi_pane_g1

0xd9f3,	// (0x00048633) list_single_uniindi_pane_t1

0x7b4e,	// (0x0004278e) control_bg_pane

0xda18,	// (0x00048658) bg_sctrl_sk_pane_cp1

0xda21,	// (0x00048661) bg_sctrl_sk_pane_cp2

0xda2a,	// (0x0004866a) control_bg_pane_g1

0xda33,	// (0x00048673) control_bg_pane_g2

0x0001,

0xfd31,	// (0x0004a971) control_bg_pane_g

0xba93,	// (0x000466d3) cell_indicator_nsta_pane_g1_ParamLimits

0xbaa1,	// (0x000466e1) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa5,	// (0x0004a6e5) cell_indicator_nsta_pane_g_ParamLimits

0x5574,	// (0x000401b4) form2_midp_time_pane_t1_ParamLimits

0x821f,	// (0x00042e5f) main_idle_act4_pane_ParamLimits

0x821f,	// (0x00042e5f) main_idle_act4_pane

0x675a,	// (0x0004139a) popup_tb_extension_window_ParamLimits

0xd8d9,	// (0x00048519) tb_ext_find_pane_ParamLimits

0xd8d9,	// (0x00048519) tb_ext_find_pane

0xda3c,	// (0x0004867c) ai_gene_pane_1_cp1

0x924d,	// (0x00043e8d) ai_gene_pane_2_cp1

0xda44,	// (0x00048684) list_single_idle_plugin_calendar_pane

0xda4d,	// (0x0004868d) list_single_idle_plugin_notification_pane

0xda56,	// (0x00048696) list_single_idle_plugin_player_pane

0xda5f,	// (0x0004869f) list_single_idle_plugin_shortcut_pane_ParamLimits

0xda5f,	// (0x0004869f) list_single_idle_plugin_shortcut_pane

0xda81,	// (0x000486c1) main_idle_act4_pane_t1

0xda93,	// (0x000486d3) main_idle_act4_pane_t2

0x0001,

0xfd36,	// (0x0004a976) main_idle_act4_pane_t

0xdaa5,	// (0x000486e5) middle_sk_idle_act4_pane_ParamLimits

0xdaa5,	// (0x000486e5) middle_sk_idle_act4_pane

0xdabb,	// (0x000486fb) popup_clock_digital_analogue_window_cp2

0xdad5,	// (0x00048715) shortcut_wheel_idle_act4_pane_ParamLimits

0xdad5,	// (0x00048715) shortcut_wheel_idle_act4_pane

0xc067,	// (0x00046ca7) shortcut_wheel_idle_act4_pane_g1

0xc067,	// (0x00046ca7) shortcut_wheel_idle_act4_pane_g2

0xc067,	// (0x00046ca7) shortcut_wheel_idle_act4_pane_g3

0xc067,	// (0x00046ca7) shortcut_wheel_idle_act4_pane_g4

0xc067,	// (0x00046ca7) shortcut_wheel_idle_act4_pane_g5

0xdae9,	// (0x00048729) shortcut_wheel_idle_act4_pane_g6

0xdaf1,	// (0x00048731) shortcut_wheel_idle_act4_pane_g7

0xdaf9,	// (0x00048739) shortcut_wheel_idle_act4_pane_g8

0xdb01,	// (0x00048741) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd3b,	// (0x0004a97b) shortcut_wheel_idle_act4_pane_g

0xc2e5,	// (0x00046f25) middle_sk_idle_act4_pane_g1_ParamLimits

0xc2e5,	// (0x00046f25) middle_sk_idle_act4_pane_g1

0xdb65,	// (0x000487a5) middle_sk_idle_act4_pane_g2_ParamLimits

0xdb65,	// (0x000487a5) middle_sk_idle_act4_pane_g2

0x0001,

0xfd5e,	// (0x0004a99e) middle_sk_idle_act4_pane_g_ParamLimits

0xfd5e,	// (0x0004a99e) middle_sk_idle_act4_pane_g

0xdb71,	// (0x000487b1) middle_sk_idle_act4_pane_t1_ParamLimits

0xdb71,	// (0x000487b1) middle_sk_idle_act4_pane_t1

0xdb8e,	// (0x000487ce) grid_ai_shortcut_pane_ParamLimits

0xdb8e,	// (0x000487ce) grid_ai_shortcut_pane

0xdba7,	// (0x000487e7) list_highlight_pane_cp16_ParamLimits

0xdba7,	// (0x000487e7) list_highlight_pane_cp16

0xdbb4,	// (0x000487f4) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdbb4,	// (0x000487f4) list_single_idle_plugin_shortcut_pane_g1

0xdbc0,	// (0x00048800) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdbc0,	// (0x00048800) list_single_idle_plugin_shortcut_pane_g2

0xdbd8,	// (0x00048818) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdbd8,	// (0x00048818) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd63,	// (0x0004a9a3) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd63,	// (0x0004a9a3) list_single_idle_plugin_shortcut_pane_g

0xdbeb,	// (0x0004882b) cell_ai_shortcut_pane_ParamLimits

0xdbeb,	// (0x0004882b) cell_ai_shortcut_pane

0xdc0f,	// (0x0004884f) cell_ai_shortcut_pane_g1_ParamLimits

0xdc0f,	// (0x0004884f) cell_ai_shortcut_pane_g1

0xda3c,	// (0x0004867c) ai_gene_pane_1_cp2

0xdc31,	// (0x00048871) ai_gene_pane_2_cp2

0xdc39,	// (0x00048879) list_highlight_pane_cp15

0xdc42,	// (0x00048882) list_single_idle_plugin_calendar_pane_g1

0xdc39,	// (0x00048879) list_highlight_pane_cp17

0xdc4a,	// (0x0004888a) list_single_idle_plugin_calendar_pane_g1_copy1

0xdc52,	// (0x00048892) list_single_idle_plugin_player_pane_g1

0xb3a2,	// (0x00045fe2) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd6a,	// (0x0004a9aa) list_single_idle_plugin_player_pane_g

0xdc5a,	// (0x0004889a) list_single_idle_plugin_player_pane_t1

0xdc68,	// (0x000488a8) list_single_idle_plugin_player_pane_t2

0xdc76,	// (0x000488b6) list_single_idle_plugin_player_pane_t3

0xdc84,	// (0x000488c4) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd6f,	// (0x0004a9af) list_single_idle_plugin_player_pane_t

0xdc92,	// (0x000488d2) wait_bar_pane_cp15

0xdc9a,	// (0x000488da) grid_ai_notification_pane

0xb3a2,	// (0x00045fe2) list_single_idle_plugin_notification_pane_g1

0xdca3,	// (0x000488e3) cell_ai_notification_pane_ParamLimits

0xdca3,	// (0x000488e3) cell_ai_notification_pane

0xdcb0,	// (0x000488f0) cell_ai_notification_pane_g1

0xdcb8,	// (0x000488f8) cell_ai_notification_pane_t1

0xdcc6,	// (0x00048906) tb_ext_find_button_pane

0xdcce,	// (0x0004890e) tb_ext_find_pane_g1

0xdcd6,	// (0x00048916) tb_ext_find_pane_t1

0x8b1e,	// (0x0004375e) tb_ext_find_button_pane_g1

0xdce4,	// (0x00048924) tb_ext_find_button_pane_g2

0x0001,

0xfd78,	// (0x0004a9b8) tb_ext_find_button_pane_g

0xda81,	// (0x000486c1) main_idle_act4_pane_t1_ParamLimits

0xda93,	// (0x000486d3) main_idle_act4_pane_t2_ParamLimits

0xfd36,	// (0x0004a976) main_idle_act4_pane_t_ParamLimits

0xdabb,	// (0x000486fb) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdac9,	// (0x00048709) sat_plugin_idle_act4_pane_ParamLimits

0xdac9,	// (0x00048709) sat_plugin_idle_act4_pane

0xdced,	// (0x0004892d) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdced,	// (0x0004892d) sat_plugin_idle_act4_pane_t1

0xdd00,	// (0x00048940) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdd00,	// (0x00048940) sat_plugin_idle_act4_pane_t2

0xdd13,	// (0x00048953) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdd13,	// (0x00048953) sat_plugin_idle_act4_pane_t3

0xdd26,	// (0x00048966) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdd26,	// (0x00048966) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd7d,	// (0x0004a9bd) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd7d,	// (0x0004a9bd) sat_plugin_idle_act4_pane_t

0x5a60,	// (0x000406a0) popup_battery_window_ParamLimits

0x5a60,	// (0x000406a0) popup_battery_window

0x7ecb,	// (0x00042b0b) bg_popup_sub_pane_cp25_ParamLimits

0x7ecb,	// (0x00042b0b) bg_popup_sub_pane_cp25

0xdd39,	// (0x00048979) popup_battery_window_g1_ParamLimits

0xdd39,	// (0x00048979) popup_battery_window_g1

0xdd45,	// (0x00048985) popup_battery_window_t1_ParamLimits

0xdd45,	// (0x00048985) popup_battery_window_t1

0xdd57,	// (0x00048997) popup_battery_window_t2_ParamLimits

0xdd57,	// (0x00048997) popup_battery_window_t2

0x0001,

0xfd86,	// (0x0004a9c6) popup_battery_window_t_ParamLimits

0xfd86,	// (0x0004a9c6) popup_battery_window_t

0x911c,	// (0x00043d5c) midp_canvas_pane_ParamLimits

0x9191,	// (0x00043dd1) midp_keypad_pane_ParamLimits

0x9191,	// (0x00043dd1) midp_keypad_pane

0x9454,	// (0x00044094) main_midp_pane_ParamLimits

0xbb1f,	// (0x0004675f) signal_pane_g2_cp_ParamLimits

0xdd74,	// (0x000489b4) aid_size_cell_midp_keypad_ParamLimits

0xdd74,	// (0x000489b4) aid_size_cell_midp_keypad

0xdd8e,	// (0x000489ce) midp_keyp_game_grid_pane_ParamLimits

0xdd8e,	// (0x000489ce) midp_keyp_game_grid_pane

0xddae,	// (0x000489ee) midp_keyp_rocker_pane_ParamLimits

0xddae,	// (0x000489ee) midp_keyp_rocker_pane

0xddd9,	// (0x00048a19) midp_keyp_sk_left_pane_ParamLimits

0xddd9,	// (0x00048a19) midp_keyp_sk_left_pane

0xde33,	// (0x00048a73) midp_keyp_sk_right_pane_ParamLimits

0xde33,	// (0x00048a73) midp_keyp_sk_right_pane

0x7b4e,	// (0x0004278e) bg_button_pane_cp03

0xde8d,	// (0x00048acd) midp_keyp_sk_left_pane_g1

0x7b4e,	// (0x0004278e) bg_button_pane_cp04

0xde8d,	// (0x00048acd) midp_keyp_sk_right_pane_g1

0xc067,	// (0x00046ca7) midp_keyp_rocker_pane_g1

0xde96,	// (0x00048ad6) keyp_game_cell_pane_ParamLimits

0xde96,	// (0x00048ad6) keyp_game_cell_pane

0x7b4e,	// (0x0004278e) bg_button_pane_cp02

0xdea9,	// (0x00048ae9) keyp_game_cell_pane_g1

0x5aa4,	// (0x000406e4) popup_fep_vkb2_window_ParamLimits

0x5aa4,	// (0x000406e4) popup_fep_vkb2_window

0x7344,	// (0x00041f84) aid_size_cell_vkb2_ParamLimits

0x7344,	// (0x00041f84) aid_size_cell_vkb2

0x7398,	// (0x00041fd8) popup_fep_vkb2_window_g1_ParamLimits

0x7398,	// (0x00041fd8) popup_fep_vkb2_window_g1

0x73e0,	// (0x00042020) vkb2_area_bottom_pane_ParamLimits

0x73e0,	// (0x00042020) vkb2_area_bottom_pane

0x742c,	// (0x0004206c) vkb2_area_keypad_pane_ParamLimits

0x742c,	// (0x0004206c) vkb2_area_keypad_pane

0x746e,	// (0x000420ae) vkb2_area_top_pane_ParamLimits

0x746e,	// (0x000420ae) vkb2_area_top_pane

0x74e8,	// (0x00042128) vkb2_top_entry_pane_ParamLimits

0x74e8,	// (0x00042128) vkb2_top_entry_pane

0x7512,	// (0x00042152) vkb2_top_grid_left_pane_ParamLimits

0x7512,	// (0x00042152) vkb2_top_grid_left_pane

0x7530,	// (0x00042170) vkb2_top_grid_right_pane_ParamLimits

0x7530,	// (0x00042170) vkb2_top_grid_right_pane

0x754e,	// (0x0004218e) vkb2_cell_keypad_pane_ParamLimits

0x754e,	// (0x0004218e) vkb2_cell_keypad_pane

0x761f,	// (0x0004225f) vkb2_area_bottom_grid_pane_ParamLimits

0x761f,	// (0x0004225f) vkb2_area_bottom_grid_pane

0x7645,	// (0x00042285) vkb2_area_bottom_pane_g1_ParamLimits

0x7645,	// (0x00042285) vkb2_area_bottom_pane_g1

0x7669,	// (0x000422a9) vkb2_area_bottom_pane_g2_ParamLimits

0x7669,	// (0x000422a9) vkb2_area_bottom_pane_g2

0x7697,	// (0x000422d7) vkb2_area_bottom_pane_g3_ParamLimits

0x7697,	// (0x000422d7) vkb2_area_bottom_pane_g3

0x0002,

0xfd8b,	// (0x0004a9cb) vkb2_area_bottom_pane_g_ParamLimits

0xfd8b,	// (0x0004a9cb) vkb2_area_bottom_pane_g

0x76f8,	// (0x00042338) vkb2_top_cell_left_pane_ParamLimits

0x76f8,	// (0x00042338) vkb2_top_cell_left_pane

0xdeba,	// (0x00048afa) vkb2_top_entry_pane_g1_ParamLimits

0xdeba,	// (0x00048afa) vkb2_top_entry_pane_g1

0xdec8,	// (0x00048b08) vkb2_top_entry_pane_t1_ParamLimits

0xdec8,	// (0x00048b08) vkb2_top_entry_pane_t1

0xdefa,	// (0x00048b3a) vkb2_top_entry_pane_t2_ParamLimits

0xdefa,	// (0x00048b3a) vkb2_top_entry_pane_t2

0xdf2c,	// (0x00048b6c) vkb2_top_entry_pane_t3_ParamLimits

0xdf2c,	// (0x00048b6c) vkb2_top_entry_pane_t3

0x0002,

0xfd92,	// (0x0004a9d2) vkb2_top_entry_pane_t_ParamLimits

0xfd92,	// (0x0004a9d2) vkb2_top_entry_pane_t

0x7745,	// (0x00042385) vkb2_top_grid_right_pane_g1_ParamLimits

0x7745,	// (0x00042385) vkb2_top_grid_right_pane_g1

0x775b,	// (0x0004239b) vkb2_top_grid_right_pane_g2_ParamLimits

0x775b,	// (0x0004239b) vkb2_top_grid_right_pane_g2

0x7773,	// (0x000423b3) vkb2_top_grid_right_pane_g3_ParamLimits

0x7773,	// (0x000423b3) vkb2_top_grid_right_pane_g3

0x778b,	// (0x000423cb) vkb2_top_grid_right_pane_g4_ParamLimits

0x778b,	// (0x000423cb) vkb2_top_grid_right_pane_g4

0x0003,

0xfd99,	// (0x0004a9d9) vkb2_top_grid_right_pane_g_ParamLimits

0xfd99,	// (0x0004a9d9) vkb2_top_grid_right_pane_g

0x77a1,	// (0x000423e1) vkb2_top_cell_left_pane_g1

0x77b8,	// (0x000423f8) vkb2_cell_keypad_pane_g1_ParamLimits

0x77b8,	// (0x000423f8) vkb2_cell_keypad_pane_g1

0xdf50,	// (0x00048b90) vkb2_cell_keypad_pane_t1_ParamLimits

0xdf50,	// (0x00048b90) vkb2_cell_keypad_pane_t1

0x77c6,	// (0x00042406) vkb2_cell_bottom_grid_pane_ParamLimits

0x77c6,	// (0x00042406) vkb2_cell_bottom_grid_pane

0x77ff,	// (0x0004243f) vkb2_cell_bottom_grid_pane_g1

0xdb09,	// (0x00048749) aid_call2_pane_cp02

0xdb11,	// (0x00048751) aid_call_pane_cp02

0xdb19,	// (0x00048759) clock_digital_number_pane_cp10

0xdb21,	// (0x00048761) clock_digital_number_pane_cp11

0xdb29,	// (0x00048769) clock_digital_number_pane_cp12

0xdb31,	// (0x00048771) clock_digital_number_pane_cp13

0xdb39,	// (0x00048779) clock_digital_separator_pane_cp10

0x8b1e,	// (0x0004375e) popup_clock_digital_analogue_window_cp2_g1

0x8b1e,	// (0x0004375e) popup_clock_digital_analogue_window_cp2_g2

0xdb41,	// (0x00048781) popup_clock_digital_analogue_window_cp2_g3

0x8b1e,	// (0x0004375e) popup_clock_digital_analogue_window_cp2_g4

0xdb41,	// (0x00048781) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd4e,	// (0x0004a98e) popup_clock_digital_analogue_window_cp2_g

0xdb49,	// (0x00048789) popup_clock_digital_analogue_window_cp2_t1

0xdb57,	// (0x00048797) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd59,	// (0x0004a999) popup_clock_digital_analogue_window_cp2_t

0xc067,	// (0x00046ca7) clock_digital_number_pane_cp10_g1

0xc067,	// (0x00046ca7) clock_digital_number_pane_cp10_g2

0x0001,

0xfb41,	// (0x0004a781) clock_digital_number_pane_cp10_g

0xc067,	// (0x00046ca7) clock_digital_separator_pane_cp10_g1

0xc067,	// (0x00046ca7) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb41,	// (0x0004a781) clock_digital_separator_pane_cp10_g

0xd985,	// (0x000485c5) uniindi_top_pane_g3

0xd996,	// (0x000485d6) uniindi_top_pane_g4

0x75d9,	// (0x00042219) vkb2_row_keypad_pane_ParamLimits

0x75d9,	// (0x00042219) vkb2_row_keypad_pane

0x781b,	// (0x0004245b) vkb2_cell_t_keypad_pane_ParamLimits

0x781b,	// (0x0004245b) vkb2_cell_t_keypad_pane

0x782b,	// (0x0004246b) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x782b,	// (0x0004246b) vkb2_cell_t_keypad_pane_cp08

0x783e,	// (0x0004247e) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x783e,	// (0x0004247e) vkb2_cell_t_keypad_pane_cp09

0x7852,	// (0x00042492) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x7852,	// (0x00042492) vkb2_cell_t_keypad_pane_cp01

0x7863,	// (0x000424a3) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x7863,	// (0x000424a3) vkb2_cell_t_keypad_pane_cp02

0x7874,	// (0x000424b4) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x7874,	// (0x000424b4) vkb2_cell_t_keypad_pane_cp03

0x7885,	// (0x000424c5) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x7885,	// (0x000424c5) vkb2_cell_t_keypad_pane_cp04

0x7896,	// (0x000424d6) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x7896,	// (0x000424d6) vkb2_cell_t_keypad_pane_cp05

0x78a7,	// (0x000424e7) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x78a7,	// (0x000424e7) vkb2_cell_t_keypad_pane_cp06

0x78b8,	// (0x000424f8) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x78b8,	// (0x000424f8) vkb2_cell_t_keypad_pane_cp07

0x78c9,	// (0x00042509) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x78c9,	// (0x00042509) vkb2_cell_t_keypad_pane_cp10

0xc2e5,	// (0x00046f25) vkb2_cell_t_keypad_pane_g1

0xdf67,	// (0x00048ba7) vkb2_cell_t_keypad_pane_t1

0x7b4e,	// (0x0004278e) popup_grid_graphic2_window

0xdf79,	// (0x00048bb9) aid_size_cell_graphic2_ParamLimits

0xdf79,	// (0x00048bb9) aid_size_cell_graphic2

0xdfb1,	// (0x00048bf1) bg_popup_window_pane_cp21_ParamLimits

0xdfb1,	// (0x00048bf1) bg_popup_window_pane_cp21

0xdfbf,	// (0x00048bff) graphic2_pages_pane_ParamLimits

0xdfbf,	// (0x00048bff) graphic2_pages_pane

0xe005,	// (0x00048c45) grid_graphic2_control_pane_ParamLimits

0xe005,	// (0x00048c45) grid_graphic2_control_pane

0xe043,	// (0x00048c83) grid_graphic2_pane_ParamLimits

0xe043,	// (0x00048c83) grid_graphic2_pane

0xe0b7,	// (0x00048cf7) cell_graphic2_pane

0x7b4e,	// (0x0004278e) main_comp_mode_pane

0xd203,	// (0x00047e43) list_ai3_gene_pane_ParamLimits

0xd5cd,	// (0x0004820d) bg_popup_window_pane_cp19_ParamLimits

0xd5d9,	// (0x00048219) bg_touch_area_indi_pane_ParamLimits

0xd5d9,	// (0x00048219) bg_touch_area_indi_pane

0xd5ef,	// (0x0004822f) bg_touch_area_indi_pane_cp01_ParamLimits

0xd5ef,	// (0x0004822f) bg_touch_area_indi_pane_cp01

0xd605,	// (0x00048245) bg_touch_area_indi_pane_cp02_ParamLimits

0xd605,	// (0x00048245) bg_touch_area_indi_pane_cp02

0xd61d,	// (0x0004825d) bg_touch_area_indi_pane_cp03_ParamLimits

0xd61d,	// (0x0004825d) bg_touch_area_indi_pane_cp03

0xd637,	// (0x00048277) popup_slider_window_g1_ParamLimits

0xd653,	// (0x00048293) popup_slider_window_g2_ParamLimits

0xd66f,	// (0x000482af) popup_slider_window_g3_ParamLimits

0xfce3,	// (0x0004a923) popup_slider_window_g_ParamLimits

0xd6cb,	// (0x0004830b) popup_slider_window_t1_ParamLimits

0xd73f,	// (0x0004837f) small_volume_slider_vertical_pane_ParamLimits

0xe0b7,	// (0x00048cf7) cell_graphic2_pane_ParamLimits

0xe105,	// (0x00048d45) bg_button_pane_cp10_ParamLimits

0xe105,	// (0x00048d45) bg_button_pane_cp10

0xe118,	// (0x00048d58) bg_button_pane_cp11_ParamLimits

0xe118,	// (0x00048d58) bg_button_pane_cp11

0xe12b,	// (0x00048d6b) graphic2_pages_pane_g1_ParamLimits

0xe12b,	// (0x00048d6b) graphic2_pages_pane_g1

0xe146,	// (0x00048d86) graphic2_pages_pane_g2_ParamLimits

0xe146,	// (0x00048d86) graphic2_pages_pane_g2

0x0001,

0xfda7,	// (0x0004a9e7) graphic2_pages_pane_g_ParamLimits

0xfda7,	// (0x0004a9e7) graphic2_pages_pane_g

0xe15e,	// (0x00048d9e) graphic2_pages_pane_t1_ParamLimits

0xe15e,	// (0x00048d9e) graphic2_pages_pane_t1

0xe176,	// (0x00048db6) cell_graphic2_control_pane_ParamLimits

0xe176,	// (0x00048db6) cell_graphic2_control_pane

0xe197,	// (0x00048dd7) cell_graphic2_pane_g1_ParamLimits

0xe197,	// (0x00048dd7) cell_graphic2_pane_g1

0xe1a4,	// (0x00048de4) cell_graphic2_pane_g2_ParamLimits

0xe1a4,	// (0x00048de4) cell_graphic2_pane_g2

0xe1b1,	// (0x00048df1) cell_graphic2_pane_g3_ParamLimits

0xe1b1,	// (0x00048df1) cell_graphic2_pane_g3

0xe1be,	// (0x00048dfe) cell_graphic2_pane_g4_ParamLimits

0xe1be,	// (0x00048dfe) cell_graphic2_pane_g4

0xe1cb,	// (0x00048e0b) cell_graphic2_pane_g5_ParamLimits

0xe1cb,	// (0x00048e0b) cell_graphic2_pane_g5

0x0004,

0xfdac,	// (0x0004a9ec) cell_graphic2_pane_g_ParamLimits

0xfdac,	// (0x0004a9ec) cell_graphic2_pane_g

0xe1e6,	// (0x00048e26) cell_graphic2_pane_t1_ParamLimits

0xe1e6,	// (0x00048e26) cell_graphic2_pane_t1

0x9a59,	// (0x00044699) grid_highlight_pane_cp11_ParamLimits

0x9a59,	// (0x00044699) grid_highlight_pane_cp11

0x7ecb,	// (0x00042b0b) bg_button_pane_cp05

0xe20f,	// (0x00048e4f) cell_graphic2_control_pane_g1

0xc067,	// (0x00046ca7) bg_touch_area_indi_pane_g1

0xe237,	// (0x00048e77) aid_cmod_rocker_key_size

0xe241,	// (0x00048e81) aid_cmode_itu_key_size

0xe24b,	// (0x00048e8b) main_cmode_video_pane

0xe255,	// (0x00048e95) main_comp_mode_itu_pane

0xe261,	// (0x00048ea1) main_comp_mode_rocker_pane

0xe26d,	// (0x00048ead) cell_cmode_rocker_pane_ParamLimits

0xe26d,	// (0x00048ead) cell_cmode_rocker_pane

0xe27f,	// (0x00048ebf) cell_cmode_itu_pane_ParamLimits

0xe27f,	// (0x00048ebf) cell_cmode_itu_pane

0x84ae,	// (0x000430ee) bg_button_pane_cp06_ParamLimits

0x84ae,	// (0x000430ee) bg_button_pane_cp06

0xc2e5,	// (0x00046f25) cell_cmode_rocker_pane_g1_ParamLimits

0xc2e5,	// (0x00046f25) cell_cmode_rocker_pane_g1

0xd7e3,	// (0x00048423) cell_cmode_rocker_pane_g2_ParamLimits

0xd7e3,	// (0x00048423) cell_cmode_rocker_pane_g2

0x0001,

0xfdbc,	// (0x0004a9fc) cell_cmode_rocker_pane_g_ParamLimits

0xfdbc,	// (0x0004a9fc) cell_cmode_rocker_pane_g

0x7b4e,	// (0x0004278e) bg_button_pane_cp07

0xe294,	// (0x00048ed4) cell_cmode_itu_pane_g1

0xe29d,	// (0x00048edd) cell_cmode_itu_pane_t1

0xe2ab,	// (0x00048eeb) cell_cmode_itu_pane_t2

0x0001,

0xfdc1,	// (0x0004aa01) cell_cmode_itu_pane_t

0xda08,	// (0x00048648) aid_touch_ctrl_left

0xda10,	// (0x00048650) aid_touch_ctrl_right

0x7b4e,	// (0x0004278e) compa_mode_pane

0xe2b9,	// (0x00048ef9) aid_cmod_rocker_key_size_cp

0xe2c3,	// (0x00048f03) aid_cmode_itu_key_size_cp

0xe2cd,	// (0x00048f0d) compa_mode_pane_g1

0xe2d5,	// (0x00048f15) compa_mode_pane_g2

0xe2dd,	// (0x00048f1d) compa_mode_pane_g3

0x0002,

0xfdc6,	// (0x0004aa06) compa_mode_pane_g

0xe2e5,	// (0x00048f25) main_comp_mode_itu_pane_cp

0xe2ed,	// (0x00048f2d) main_comp_mode_rocker_pane_cp

0xe2f5,	// (0x00048f35) cell_cmode_itu_pane_cp_ParamLimits

0xe2f5,	// (0x00048f35) cell_cmode_itu_pane_cp

0xe30a,	// (0x00048f4a) cell_cmode_rocker_pane_cp_ParamLimits

0xe30a,	// (0x00048f4a) cell_cmode_rocker_pane_cp

0x84ae,	// (0x000430ee) bg_button_pane_cp06_cp_ParamLimits

0x84ae,	// (0x000430ee) bg_button_pane_cp06_cp

0xc2e5,	// (0x00046f25) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc2e5,	// (0x00046f25) cell_cmode_rocker_pane_g1_cp

0xc067,	// (0x00046ca7) cell_cmode_rocker_pane_g2_cp

0x7b4e,	// (0x0004278e) bg_button_pane_cp07_cp

0xaf8b,	// (0x00045bcb) cell_cmode_itu_pane_g1_cp

0xe31c,	// (0x00048f5c) cell_cmode_itu_pane_t1_cp

0xe31c,	// (0x00048f5c) cell_cmode_itu_pane_t2_cp

0xaf78,	// (0x00045bb8) settings_code_pane_cp2

0x7c42,	// (0x00042882) bg_popup_window_pane_cp3_ParamLimits

0x80a5,	// (0x00042ce5) heading_pane_cp3_ParamLimits

0x80b1,	// (0x00042cf1) listscroll_popup_graphic_pane_ParamLimits

0x6e08,	// (0x00041a48) fep_hwr_aid_pane_ParamLimits

0x72bb,	// (0x00041efb) aid_touch_sctrl_top_ParamLimits

0x72c8,	// (0x00041f08) sctrl_sk_top_pane_g1_ParamLimits

0xc2e5,	// (0x00046f25) sctrl_sk_top_pane_g2_ParamLimits

0xfcfc,	// (0x0004a93c) sctrl_sk_top_pane_g_ParamLimits

0x72d5,	// (0x00041f15) sctrl_sk_top_pane_t1_ParamLimits

0x72bb,	// (0x00041efb) aid_touch_sctrl_bottom_ParamLimits

0x72d5,	// (0x00041f15) sctrl_sk_bottom_pane_t1_ParamLimits

0xd951,	// (0x00048591) aid_area_touch_clock

0x74b0,	// (0x000420f0) aid_vkb2_area_top_pane_cell_ParamLimits

0x74b0,	// (0x000420f0) aid_vkb2_area_top_pane_cell

0x75fb,	// (0x0004223b) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x75fb,	// (0x0004223b) aid_vkb2_area_bottom_pane_cell

0xdeb2,	// (0x00048af2) popup_char_count_window

0xe32a,	// (0x00048f6a) popup_char_count_window_g1

0xe333,	// (0x00048f73) popup_char_count_window_g2

0xe33c,	// (0x00048f7c) popup_char_count_window_g3

0x0002,

0xfdcd,	// (0x0004aa0d) popup_char_count_window_g

0xe345,	// (0x00048f85) popup_char_count_window_t1

0x7376,	// (0x00041fb6) popup_fep_char_preview_window_ParamLimits

0x7376,	// (0x00041fb6) popup_fep_char_preview_window

0x74ce,	// (0x0004210e) vkb2_top_candi_pane_ParamLimits

0x74ce,	// (0x0004210e) vkb2_top_candi_pane

0xe353,	// (0x00048f93) cell_vkb2_top_candi_pane_ParamLimits

0xe353,	// (0x00048f93) cell_vkb2_top_candi_pane

0xa083,	// (0x00044cc3) bg_popup_fep_char_preview_window_ParamLimits

0xa083,	// (0x00044cc3) bg_popup_fep_char_preview_window

0x78de,	// (0x0004251e) popup_fep_char_preview_window_t1_ParamLimits

0x78de,	// (0x0004251e) popup_fep_char_preview_window_t1

0xe3a0,	// (0x00048fe0) bg_popup_fep_char_preview_window_g1

0xe3a8,	// (0x00048fe8) bg_popup_fep_char_preview_window_g2

0xe3b0,	// (0x00048ff0) bg_popup_fep_char_preview_window_g3

0xe3b8,	// (0x00048ff8) bg_popup_fep_char_preview_window_g4

0xe3c0,	// (0x00049000) bg_popup_fep_char_preview_window_g5

0x7918,	// (0x00042558) bg_popup_fep_char_preview_window_g6

0xe3c8,	// (0x00049008) bg_popup_fep_char_preview_window_g7

0xe3d0,	// (0x00049010) bg_popup_fep_char_preview_window_g8

0xe3d8,	// (0x00049018) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdd4,	// (0x0004aa14) bg_popup_fep_char_preview_window_g

0xc2e5,	// (0x00046f25) cell_vkb2_top_candi_pane_g1_ParamLimits

0xc2e5,	// (0x00046f25) cell_vkb2_top_candi_pane_g1

0xc5fc,	// (0x0004723c) cell_vkb2_top_candi_pane_g2_ParamLimits

0xc5fc,	// (0x0004723c) cell_vkb2_top_candi_pane_g2

0xc61d,	// (0x0004725d) cell_vkb2_top_candi_pane_g3_ParamLimits

0xc61d,	// (0x0004725d) cell_vkb2_top_candi_pane_g3

0x7920,	// (0x00042560) cell_vkb2_top_candi_pane_g4_ParamLimits

0x7920,	// (0x00042560) cell_vkb2_top_candi_pane_g4

0xe3e0,	// (0x00049020) cell_vkb2_top_candi_pane_g5_ParamLimits

0xe3e0,	// (0x00049020) cell_vkb2_top_candi_pane_g5

0xd7e3,	// (0x00048423) cell_vkb2_top_candi_pane_g6_ParamLimits

0xd7e3,	// (0x00048423) cell_vkb2_top_candi_pane_g6

0x0005,

0xfde7,	// (0x0004aa27) cell_vkb2_top_candi_pane_g_ParamLimits

0xfde7,	// (0x0004aa27) cell_vkb2_top_candi_pane_g

0x7941,	// (0x00042581) cell_vkb2_top_candi_pane_t1

0x6b8f,	// (0x000417cf) aid_size_touch_slider_mark_ParamLimits

0x6b8f,	// (0x000417cf) aid_size_touch_slider_mark

0xdff5,	// (0x00048c35) grid_graphic2_catg_pane_ParamLimits

0xdff5,	// (0x00048c35) grid_graphic2_catg_pane

0xe093,	// (0x00048cd3) popup_grid_graphic2_window_t1_ParamLimits

0xe093,	// (0x00048cd3) popup_grid_graphic2_window_t1

0xe0a5,	// (0x00048ce5) popup_grid_graphic2_window_t2_ParamLimits

0xe0a5,	// (0x00048ce5) popup_grid_graphic2_window_t2

0x0001,

0xfda2,	// (0x0004a9e2) popup_grid_graphic2_window_t_ParamLimits

0xfda2,	// (0x0004a9e2) popup_grid_graphic2_window_t

0x7ecb,	// (0x00042b0b) bg_button_pane_cp05_ParamLimits

0xe20f,	// (0x00048e4f) cell_graphic2_control_pane_g1_ParamLimits

0xe401,	// (0x00049041) cell_graphic2_catg_pane_ParamLimits

0xe401,	// (0x00049041) cell_graphic2_catg_pane

0x7b4e,	// (0x0004278e) bg_button_pane_cp12

0xe413,	// (0x00049053) cell_graphic2_catg_pane_g1

0xd91d,	// (0x0004855d) cell_tb_ext_pane_t1_ParamLimits

0x7718,	// (0x00042358) vkb2_top_cell_right_narrow_pane_ParamLimits

0x7718,	// (0x00042358) vkb2_top_cell_right_narrow_pane

0x7730,	// (0x00042370) vkb2_top_cell_right_wide_pane_ParamLimits

0x7730,	// (0x00042370) vkb2_top_cell_right_wide_pane

0x6dfa,	// (0x00041a3a) bg_vkb2_func_pane_ParamLimits

0x6dfa,	// (0x00041a3a) bg_vkb2_func_pane

0x77a1,	// (0x000423e1) vkb2_top_cell_left_pane_g1_ParamLimits

0x6dfa,	// (0x00041a3a) bg_vkb2_fuc_pane_cp03_ParamLimits

0x6dfa,	// (0x00041a3a) bg_vkb2_fuc_pane_cp03

0x77ff,	// (0x0004243f) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x995d,	// (0x0004459d) bg_vkb2_func_pane_g1

0x9965,	// (0x000445a5) bg_vkb2_func_pane_g2

0x9975,	// (0x000445b5) bg_vkb2_func_pane_g3

0x996d,	// (0x000445ad) bg_vkb2_func_pane_g4

0x997d,	// (0x000445bd) bg_vkb2_func_pane_g5

0x9985,	// (0x000445c5) bg_vkb2_func_pane_g6

0x998d,	// (0x000445cd) bg_vkb2_func_pane_g7

0x9995,	// (0x000445d5) bg_vkb2_func_pane_g8

0x9955,	// (0x00044595) bg_vkb2_func_pane_g9

0x0008,

0xfdf4,	// (0x0004aa34) bg_vkb2_func_pane_g

0x6dfa,	// (0x00041a3a) bg_vkb2_fuc_pane_cp01_ParamLimits

0x6dfa,	// (0x00041a3a) bg_vkb2_fuc_pane_cp01

0x77a1,	// (0x000423e1) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x77a1,	// (0x000423e1) vkb2_top_cell_right_wide_pane_g1

0x6dfa,	// (0x00041a3a) bg_vkb2_fuc_pane_cp02_ParamLimits

0x6dfa,	// (0x00041a3a) bg_vkb2_fuc_pane_cp02

0x77ff,	// (0x0004243f) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x77ff,	// (0x0004243f) vkb2_top_cell_right_narrow_pane_g1

0xd551,	// (0x00048191) aid_touch_area_decrease_ParamLimits

0xd551,	// (0x00048191) aid_touch_area_decrease

0xd56f,	// (0x000481af) aid_touch_area_increase_ParamLimits

0xd56f,	// (0x000481af) aid_touch_area_increase

0xd57b,	// (0x000481bb) aid_touch_area_mute_ParamLimits

0xd57b,	// (0x000481bb) aid_touch_area_mute

0xd59f,	// (0x000481df) aid_touch_area_slider_ParamLimits

0xd59f,	// (0x000481df) aid_touch_area_slider

0xd68b,	// (0x000482cb) popup_slider_window_g4_ParamLimits

0xd68b,	// (0x000482cb) popup_slider_window_g4

0xd697,	// (0x000482d7) popup_slider_window_g5_ParamLimits

0xd697,	// (0x000482d7) popup_slider_window_g5

0xd6b9,	// (0x000482f9) popup_slider_window_g6_ParamLimits

0xd6b9,	// (0x000482f9) popup_slider_window_g6

0xd6f9,	// (0x00048339) popup_slider_window_t2_ParamLimits

0xd6f9,	// (0x00048339) popup_slider_window_t2

0x0001,

0xfcf0,	// (0x0004a930) popup_slider_window_t_ParamLimits

0xfcf0,	// (0x0004a930) popup_slider_window_t

0xd711,	// (0x00048351) slider_pane_ParamLimits

0xd711,	// (0x00048351) slider_pane

0xe41c,	// (0x0004905c) slider_pane_g1_ParamLimits

0xe41c,	// (0x0004905c) slider_pane_g1

0xe430,	// (0x00049070) slider_pane_g2_ParamLimits

0xe430,	// (0x00049070) slider_pane_g2

0xe446,	// (0x00049086) slider_pane_g3_ParamLimits

0xe446,	// (0x00049086) slider_pane_g3

0x0003,

0xfe07,	// (0x0004aa47) slider_pane_g_ParamLimits

0xfe07,	// (0x0004aa47) slider_pane_g

0x67b6,	// (0x000413f6) popup_tb_float_extension_window_ParamLimits

0x67b6,	// (0x000413f6) popup_tb_float_extension_window

0xe472,	// (0x000490b2) aid_size_cell_tb_float_ext

0x7b4e,	// (0x0004278e) bg_popup_sub_window_cp28

0xe47e,	// (0x000490be) grid_tb_float_ext_pane

0xe488,	// (0x000490c8) cell_tb_float_ext_pane_ParamLimits

0xe488,	// (0x000490c8) cell_tb_float_ext_pane

0xe4a2,	// (0x000490e2) cell_tb_float_ext_pane_g1

0xe4ab,	// (0x000490eb) grid_highlight_pane_cp12

0x6f3b,	// (0x00041b7b) cell_last_hwr_side_pane_ParamLimits

0x6f3b,	// (0x00041b7b) cell_last_hwr_side_pane

0xc067,	// (0x00046ca7) cell_last_hwr_side_pane_g1

0xe4b4,	// (0x000490f4) cell_last_hwr_side_pane_g2

0x0001,

0xfe10,	// (0x0004aa50) cell_last_hwr_side_pane_g

0x76c7,	// (0x00042307) vkb2_area_bottom_space_btn_pane_ParamLimits

0x76c7,	// (0x00042307) vkb2_area_bottom_space_btn_pane

0xc2e5,	// (0x00046f25) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xdf67,	// (0x00048ba7) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x7941,	// (0x00042581) cell_vkb2_top_candi_pane_t1_ParamLimits

0x7960,	// (0x000425a0) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x7960,	// (0x000425a0) vkb2_area_bottom_space_btn_pane_g1

0x799a,	// (0x000425da) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x799a,	// (0x000425da) vkb2_area_bottom_space_btn_pane_g2

0x79d0,	// (0x00042610) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x79d0,	// (0x00042610) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe15,	// (0x0004aa55) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe15,	// (0x0004aa55) vkb2_area_bottom_space_btn_pane_g

0x6eaf,	// (0x00041aef) cel_fep_hwr_func_pane_ParamLimits

0x6eaf,	// (0x00041aef) cel_fep_hwr_func_pane

0x6eeb,	// (0x00041b2b) cell_hwr_side_button_pane_ParamLimits

0x6eeb,	// (0x00041b2b) cell_hwr_side_button_pane

0xd951,	// (0x00048591) aid_area_touch_clock_ParamLimits

0x7ecb,	// (0x00042b0b) bg_uniindi_top_pane_ParamLimits

0xd963,	// (0x000485a3) uniindi_top_pane_g1_ParamLimits

0xd979,	// (0x000485b9) uniindi_top_pane_g2_ParamLimits

0xd985,	// (0x000485c5) uniindi_top_pane_g3_ParamLimits

0xd996,	// (0x000485d6) uniindi_top_pane_g4_ParamLimits

0xfd28,	// (0x0004a968) uniindi_top_pane_g_ParamLimits

0xd9a3,	// (0x000485e3) uniindi_top_pane_t1_ParamLimits

0x7ecb,	// (0x00042b0b) bg_vkb2_func_pane_cp01_ParamLimits

0x7ecb,	// (0x00042b0b) bg_vkb2_func_pane_cp01

0xe4bd,	// (0x000490fd) cel_fep_hwr_func_pane_g1_ParamLimits

0xe4bd,	// (0x000490fd) cel_fep_hwr_func_pane_g1

0x7ecb,	// (0x00042b0b) bg_vkb2_func_pane_cp02_ParamLimits

0x7ecb,	// (0x00042b0b) bg_vkb2_func_pane_cp02

0xe4bd,	// (0x000490fd) cell_hwr_side_button_pane_g1_ParamLimits

0xe4bd,	// (0x000490fd) cell_hwr_side_button_pane_g1

0x97cd,	// (0x0004440d) status_pane_g4_ParamLimits

0x97cd,	// (0x0004440d) status_pane_g4

0x97e7,	// (0x00044427) status_pane_t1

0xbda1,	// (0x000469e1) form2_midp_gauge_slider_cont_pane

0xbda9,	// (0x000469e9) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbdbb,	// (0x000469fb) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbdcd,	// (0x00046a0d) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf4,	// (0x0004a734) form2_midp_gauge_slider_pane_t_ParamLimits

0xbddf,	// (0x00046a1f) form2_midp_slider_pane_ParamLimits

0x7336,	// (0x00041f76) aid_size_cell_func_vkb2_ParamLimits

0x7336,	// (0x00041f76) aid_size_cell_func_vkb2

0xe45e,	// (0x0004909e) slider_pane_g4_ParamLimits

0xe45e,	// (0x0004909e) slider_pane_g4

0x7a1a,	// (0x0004265a) form2_midp_gauge_slider_pane_t2_cp01

0x7a28,	// (0x00042668) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x7a28,	// (0x00042668) form2_midp_gauge_slider_pane_t3_cp01

0x7a45,	// (0x00042685) form2_midp_slider_pane_cp01

0x7b4e,	// (0x0004278e) navi_smil_pane

0xe4f6,	// (0x00049136) navi_smil_pane_g1

0xe4fe,	// (0x0004913e) navi_smil_pane_t1

0xe4cb,	// (0x0004910b) form2_midp_slider_pane_g1

0xe4d4,	// (0x00049114) form2_midp_slider_pane_g2

0xe4dc,	// (0x0004911c) form2_midp_slider_pane_g3

0xe4cb,	// (0x0004910b) form2_midp_slider_pane_g4

0xe4e4,	// (0x00049124) form2_midp_slider_pane_g5

0x0004,

0xfe1e,	// (0x0004aa5e) form2_midp_slider_pane_g

0x7a0a,	// (0x0004264a) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x7a0a,	// (0x0004264a) vkb2_area_bottom_space_btn_pane_g4

0x960a,	// (0x0004424a) lc0_navi_pane_ParamLimits

0x960a,	// (0x0004424a) lc0_navi_pane

0x9680,	// (0x000442c0) lc0_stat_indi_pane_ParamLimits

0x9680,	// (0x000442c0) lc0_stat_indi_pane

0x9697,	// (0x000442d7) ls0_title_pane_ParamLimits

0x9697,	// (0x000442d7) ls0_title_pane

0x84ae,	// (0x000430ee) bg_popup_sub_pane_cp14_ParamLimits

0xd938,	// (0x00048578) list_uniindi_pane_ParamLimits

0xd944,	// (0x00048584) uniindi_top_pane_ParamLimits

0xd9e0,	// (0x00048620) list_single_uniindi_pane_g1_ParamLimits

0xd9f3,	// (0x00048633) list_single_uniindi_pane_t1_ParamLimits

0x7a4e,	// (0x0004268e) lc0_stat_clock_pane_ParamLimits

0x7a4e,	// (0x0004268e) lc0_stat_clock_pane

0xe50c,	// (0x0004914c) lc0_stat_indi_pane_g1_ParamLimits

0xe50c,	// (0x0004914c) lc0_stat_indi_pane_g1

0xe519,	// (0x00049159) lc0_stat_indi_pane_g2_ParamLimits

0xe519,	// (0x00049159) lc0_stat_indi_pane_g2

0x0001,

0xfe29,	// (0x0004aa69) lc0_stat_indi_pane_g_ParamLimits

0xfe29,	// (0x0004aa69) lc0_stat_indi_pane_g

0x7a5b,	// (0x0004269b) lc0_uni_indicator_pane_ParamLimits

0x7a5b,	// (0x0004269b) lc0_uni_indicator_pane

0xe526,	// (0x00049166) ls0_title_pane_g1_ParamLimits

0xe526,	// (0x00049166) ls0_title_pane_g1

0xe53a,	// (0x0004917a) ls0_title_pane_t1_ParamLimits

0xe53a,	// (0x0004917a) ls0_title_pane_t1

0x7a68,	// (0x000426a8) lc0_uni_indicator_pane_g1_ParamLimits

0x7a68,	// (0x000426a8) lc0_uni_indicator_pane_g1

0xe570,	// (0x000491b0) lc0_stat_clock_pane_t1

0x7b4e,	// (0x0004278e) main_ai5_pane

0xe57e,	// (0x000491be) ai5_sk_pane_ParamLimits

0xe57e,	// (0x000491be) ai5_sk_pane

0xe58b,	// (0x000491cb) cell_ai5_widget_pane_ParamLimits

0xe58b,	// (0x000491cb) cell_ai5_widget_pane

0xe641,	// (0x00049281) aid_size_cell_widget_grid

0xe657,	// (0x00049297) bg_ai5_widget_pane_ParamLimits

0xe657,	// (0x00049297) bg_ai5_widget_pane

0xe6c1,	// (0x00049301) cell_ai5_widget_pane_g2

0xe6d1,	// (0x00049311) cell_ai5_widget_pane_g3

0xe6f0,	// (0x00049330) cell_ai5_widget_pane_g4

0xe6fc,	// (0x0004933c) cell_ai5_widget_pane_g5

0xe708,	// (0x00049348) cell_ai5_widget_pane_g6

0xe714,	// (0x00049354) cell_ai5_widget_pane_g7

0xe75c,	// (0x0004939c) cell_ai5_widget_pane_t1_ParamLimits

0xe75c,	// (0x0004939c) cell_ai5_widget_pane_t1

0xe779,	// (0x000493b9) cell_ai5_widget_pane_t2_ParamLimits

0xe779,	// (0x000493b9) cell_ai5_widget_pane_t2

0xe791,	// (0x000493d1) cell_ai5_widget_pane_t3_ParamLimits

0xe791,	// (0x000493d1) cell_ai5_widget_pane_t3

0xe7a9,	// (0x000493e9) cell_ai5_widget_pane_t4_ParamLimits

0xe7a9,	// (0x000493e9) cell_ai5_widget_pane_t4

0xe7c3,	// (0x00049403) cell_ai5_widget_pane_t5_ParamLimits

0xe7c3,	// (0x00049403) cell_ai5_widget_pane_t5

0xe7e2,	// (0x00049422) cell_ai5_widget_pane_t6_ParamLimits

0xe7e2,	// (0x00049422) cell_ai5_widget_pane_t6

0xe7f4,	// (0x00049434) cell_ai5_widget_pane_t7_ParamLimits

0xe7f4,	// (0x00049434) cell_ai5_widget_pane_t7

0xe80d,	// (0x0004944d) cell_ai5_widget_pane_t8_ParamLimits

0xe80d,	// (0x0004944d) cell_ai5_widget_pane_t8

0x0009,

0xfe43,	// (0x0004aa83) cell_ai5_widget_pane_t_ParamLimits

0xfe43,	// (0x0004aa83) cell_ai5_widget_pane_t

0xe859,	// (0x00049499) grid_ai5_widget_pane

0x84ae,	// (0x000430ee) highlight_cell_ai5_widget_pane_ParamLimits

0x84ae,	// (0x000430ee) highlight_cell_ai5_widget_pane

0xe871,	// (0x000494b1) ai5_sk_left_pane

0xe87b,	// (0x000494bb) ai5_sk_middle_pane

0xe885,	// (0x000494c5) ai5_sk_right_pane

0xe88f,	// (0x000494cf) bg_ai5_widget_pane_g1_ParamLimits

0xe88f,	// (0x000494cf) bg_ai5_widget_pane_g1

0xe89b,	// (0x000494db) bg_ai5_widget_pane_g2_ParamLimits

0xe89b,	// (0x000494db) bg_ai5_widget_pane_g2

0xe8a7,	// (0x000494e7) bg_ai5_widget_pane_g3_ParamLimits

0xe8a7,	// (0x000494e7) bg_ai5_widget_pane_g3

0xe8b3,	// (0x000494f3) bg_ai5_widget_pane_g4_ParamLimits

0xe8b3,	// (0x000494f3) bg_ai5_widget_pane_g4

0xe8bf,	// (0x000494ff) bg_ai5_widget_pane_g5_ParamLimits

0xe8bf,	// (0x000494ff) bg_ai5_widget_pane_g5

0xe8cb,	// (0x0004950b) bg_ai5_widget_pane_g6_ParamLimits

0xe8cb,	// (0x0004950b) bg_ai5_widget_pane_g6

0xe8d7,	// (0x00049517) bg_ai5_widget_pane_g7_ParamLimits

0xe8d7,	// (0x00049517) bg_ai5_widget_pane_g7

0xe8e3,	// (0x00049523) bg_ai5_widget_pane_g8_ParamLimits

0xe8e3,	// (0x00049523) bg_ai5_widget_pane_g8

0xe8ef,	// (0x0004952f) bg_ai5_widget_pane_g9_ParamLimits

0xe8ef,	// (0x0004952f) bg_ai5_widget_pane_g9

0x0008,

0xfe58,	// (0x0004aa98) bg_ai5_widget_pane_g_ParamLimits

0xfe58,	// (0x0004aa98) bg_ai5_widget_pane_g

0xe922,	// (0x00049562) cell_shortcut_ai5_widget_pane_ParamLimits

0xe922,	// (0x00049562) cell_shortcut_ai5_widget_pane

0x9114,	// (0x00043d54) bg_cell_shortcut_ai5_widget_pane

0xe933,	// (0x00049573) cell_grid_ai5_widget_pane_g1

0xe93c,	// (0x0004957c) highlight_cell_shortcut_ai5_widget_pane

0x9965,	// (0x000445a5) ai5_sk_left_pane_g1

0xe944,	// (0x00049584) ai5_sk_left_pane_g2

0xe94c,	// (0x0004958c) ai5_sk_left_pane_g3

0xe954,	// (0x00049594) ai5_sk_left_pane_g4

0x0003,

0xfe6b,	// (0x0004aaab) ai5_sk_left_pane_g

0xe95c,	// (0x0004959c) ai5_sk_left_pane_t1

0x995d,	// (0x0004459d) ai5_sk_right_pane_g1

0xe96a,	// (0x000495aa) ai5_sk_right_pane_g2

0xe972,	// (0x000495b2) ai5_sk_right_pane_g3

0xe97a,	// (0x000495ba) ai5_sk_right_pane_g4

0x0003,

0xfe74,	// (0x0004aab4) ai5_sk_right_pane_g

0xe982,	// (0x000495c2) ai5_sk_right_pane_t1

0x995d,	// (0x0004459d) ai5_sk_middle_pane_g1

0x9965,	// (0x000445a5) ai5_sk_middle_pane_g2

0x997d,	// (0x000445bd) ai5_sk_middle_pane_g3

0xe972,	// (0x000495b2) ai5_sk_middle_pane_g4

0xe94c,	// (0x0004958c) ai5_sk_middle_pane_g5

0xe990,	// (0x000495d0) ai5_sk_middle_pane_g6

0xe998,	// (0x000495d8) ai5_sk_middle_pane_g7

0x0006,

0xfe7d,	// (0x0004aabd) ai5_sk_middle_pane_g

0x949a,	// (0x000440da) aid_touch_area_size_lc0_ParamLimits

0x949a,	// (0x000440da) aid_touch_area_size_lc0

0x703a,	// (0x00041c7a) cell_hwr_candidate_pane_t1_ParamLimits

0x94b6,	// (0x000440f6) aid_touch_navi_pane

0x977f,	// (0x000443bf) status_dt_navi_pane_ParamLimits

0x977f,	// (0x000443bf) status_dt_navi_pane

0x978c,	// (0x000443cc) status_dt_sta_pane_ParamLimits

0x978c,	// (0x000443cc) status_dt_sta_pane

0xe9a0,	// (0x000495e0) dt_sta_controll_pane

0xe9ad,	// (0x000495ed) dt_sta_indi_pane

0xe9ba,	// (0x000495fa) dt_sta_title_pane

0x7ecb,	// (0x00042b0b) bg_dt_sta_indi_pane_ParamLimits

0x7ecb,	// (0x00042b0b) bg_dt_sta_indi_pane

0xe9cb,	// (0x0004960b) dt_sta_battery_pane

0xe9d3,	// (0x00049613) dt_sta_indi_pane_g1

0xe9dc,	// (0x0004961c) dt_sta_indi_pane_g2

0xe9e5,	// (0x00049625) dt_sta_indi_pane_g3

0x0002,

0xfe8c,	// (0x0004aacc) dt_sta_indi_pane_g

0xe9ee,	// (0x0004962e) dt_sta_signal_pane

0x84ae,	// (0x000430ee) bg_dt_sta_title_pane_ParamLimits

0x84ae,	// (0x000430ee) bg_dt_sta_title_pane

0xe9f7,	// (0x00049637) dt_sta_title_pane_g1

0xe9ff,	// (0x0004963f) dt_sta_title_pane_t1_ParamLimits

0xe9ff,	// (0x0004963f) dt_sta_title_pane_t1

0x7b4e,	// (0x0004278e) bg_dt_sta_control_pane

0xea14,	// (0x00049654) dt_sta_controll_pane_g1

0xea1d,	// (0x0004965d) bg_dt_sta_title_pane_g1

0xea26,	// (0x00049666) bg_dt_sta_title_pane_g2

0xea2f,	// (0x0004966f) bg_dt_sta_title_pane_g3

0x0002,

0xfe93,	// (0x0004aad3) bg_dt_sta_title_pane_g

0xc067,	// (0x00046ca7) bg_dt_sta_indi_pane_g1

0xea38,	// (0x00049678) dt_sta_signal_pane_g1

0xea40,	// (0x00049680) dt_sta_signal_pane_g2

0x0001,

0xfe9a,	// (0x0004aada) dt_sta_signal_pane_g

0xea48,	// (0x00049688) dt_sta_battery_pane_g1

0xea51,	// (0x00049691) dt_sta_battery_pane_t1

0xc067,	// (0x00046ca7) bg_dt_sta_control_pane_g1

0x8c2a,	// (0x0004386a) fep_china_uni_eep_pane

0x8c32,	// (0x00043872) fep_china_uni_entry_pane_ParamLimits

0x8c42,	// (0x00043882) popup_fep_china_uni_window_g1_ParamLimits

0x8c52,	// (0x00043892) popup_fep_china_uni_window_g2_ParamLimits

0x8c52,	// (0x00043892) popup_fep_china_uni_window_g2

0x0001,

0xf728,	// (0x0004a368) popup_fep_china_uni_window_g_ParamLimits

0xf728,	// (0x0004a368) popup_fep_china_uni_window_g

0xea60,	// (0x000496a0) fep_china_uni_eep_pane_g1

0xea68,	// (0x000496a8) fep_china_uni_eep_pane_t1

0xe4ed,	// (0x0004912d) aid_touch_area_size_smil_player

0x9602,	// (0x00044242) lc0_clock_pane

0x97db,	// (0x0004441b) status_pane_g5_ParamLimits

0x97db,	// (0x0004441b) status_pane_g5

0x647b,	// (0x000410bb) popup_keymap_window

0x97a1,	// (0x000443e1) status_icon_pane

0xe6d1,	// (0x00049311) cell_ai5_widget_pane_g3_ParamLimits

0xe6f0,	// (0x00049330) cell_ai5_widget_pane_g4_ParamLimits

0xe6fc,	// (0x0004933c) cell_ai5_widget_pane_g5_ParamLimits

0xe720,	// (0x00049360) cell_ai5_widget_pane_g8_ParamLimits

0xe720,	// (0x00049360) cell_ai5_widget_pane_g8

0xe734,	// (0x00049374) cell_ai5_widget_pane_g9_ParamLimits

0xe734,	// (0x00049374) cell_ai5_widget_pane_g9

0xe748,	// (0x00049388) cell_ai5_widget_pane_g10_ParamLimits

0xe748,	// (0x00049388) cell_ai5_widget_pane_g10

0xea77,	// (0x000496b7) status_icon_pane_g1

0x7b4e,	// (0x0004278e) bg_popup_sub_pane_cp13

0xea7f,	// (0x000496bf) popup_keymap_window_t1

0x93df,	// (0x0004401f) control_pane_g6_ParamLimits

0x93df,	// (0x0004401f) control_pane_g6

0x93ec,	// (0x0004402c) control_pane_g7_ParamLimits

0x93ec,	// (0x0004402c) control_pane_g7

0x93f9,	// (0x00044039) control_pane_g8_ParamLimits

0x93f9,	// (0x00044039) control_pane_g8

0xe9a0,	// (0x000495e0) dt_sta_controll_pane_ParamLimits

0xe9ad,	// (0x000495ed) dt_sta_indi_pane_ParamLimits

0xe9ba,	// (0x000495fa) dt_sta_title_pane_ParamLimits

0x83e6,	// (0x00043026) aid_size_touch_scroll_bar_cale

0x5a74,	// (0x000406b4) popup_discreet_window_ParamLimits

0x5a74,	// (0x000406b4) popup_discreet_window

0x5afc,	// (0x0004073c) popup_sk_window

0xa083,	// (0x00044cc3) bg_popup_sub_pane_cp28_ParamLimits

0xa083,	// (0x00044cc3) bg_popup_sub_pane_cp28

0xea8d,	// (0x000496cd) popup_discreet_window_g1_ParamLimits

0xea8d,	// (0x000496cd) popup_discreet_window_g1

0xeaad,	// (0x000496ed) popup_discreet_window_t1_ParamLimits

0xeaad,	// (0x000496ed) popup_discreet_window_t1

0xeacb,	// (0x0004970b) popup_discreet_window_t2_ParamLimits

0xeacb,	// (0x0004970b) popup_discreet_window_t2

0x0002,

0xfe9f,	// (0x0004aadf) popup_discreet_window_t_ParamLimits

0xfe9f,	// (0x0004aadf) popup_discreet_window_t

0x7a7c,	// (0x000426bc) popup_sk_window_g1

0x7a86,	// (0x000426c6) popup_sk_window_g2

0x0001,

0xfea6,	// (0x0004aae6) popup_sk_window_g

0x7a90,	// (0x000426d0) popup_sk_window_t1

0x7a9e,	// (0x000426de) popup_sk_window_t1_copy1

0xe6c1,	// (0x00049301) cell_ai5_widget_pane_g2_ParamLimits

0xe81f,	// (0x0004945f) cell_ai5_widget_pane_t9_ParamLimits

0xe81f,	// (0x0004945f) cell_ai5_widget_pane_t9

0x7b4e,	// (0x0004278e) main_fep_fshwr2_pane

0x7aac,	// (0x000426ec) aid_fshwr2_btn_pane

0x7ab8,	// (0x000426f8) aid_fshwr2_syb_pane

0x7ac9,	// (0x00042709) aid_fshwr2_txt_pane

0x7ad5,	// (0x00042715) fshwr2_func_candi_pane

0x7aea,	// (0x0004272a) fshwr2_hwr_syb_pane

0x7b01,	// (0x00042741) fshwr2_icf_pane

0x7b4e,	// (0x0004278e) fshwr2_icf_bg_pane

0xeb1d,	// (0x0004975d) fshwr2_icf_pane_t1_ParamLimits

0xeb1d,	// (0x0004975d) fshwr2_icf_pane_t1

0xc067,	// (0x00046ca7) fshwr2_func_candi_pane_g1

0xeb34,	// (0x00049774) fshwr2_func_candi_row_pane_ParamLimits

0xeb34,	// (0x00049774) fshwr2_func_candi_row_pane

0xeb45,	// (0x00049785) cell_fshwr2_syb_pane_ParamLimits

0xeb45,	// (0x00049785) cell_fshwr2_syb_pane

0xc2e5,	// (0x00046f25) fshwr2_hwr_syb_pane_g1_ParamLimits

0xc2e5,	// (0x00046f25) fshwr2_hwr_syb_pane_g1

0x7b4e,	// (0x0004278e) bg_popup_call_pane_cp01

0xeb5f,	// (0x0004979f) fshwr2_func_candi_cell_pane_ParamLimits

0xeb5f,	// (0x0004979f) fshwr2_func_candi_cell_pane

0xeb90,	// (0x000497d0) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xeb90,	// (0x000497d0) fshwr2_func_candi_cell_bg_pane

0xebaa,	// (0x000497ea) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xebaa,	// (0x000497ea) fshwr2_func_candi_cell_pane_g1

0xebd2,	// (0x00049812) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xebd2,	// (0x00049812) fshwr2_func_candi_cell_pane_t1

0x7b4e,	// (0x0004278e) bg_button_pane_cp08

0x9114,	// (0x00043d54) cell_fshwr2_syb_bg_pane

0xebe5,	// (0x00049825) cell_fshwr2_syb_bg_pane_g1

0xebed,	// (0x0004982d) cell_fshwr2_syb_bg_pane_t1

0x84ae,	// (0x000430ee) main_tmo_pane

0xab83,	// (0x000457c3) uni_indicator_pane_g1_ParamLimits

0xab98,	// (0x000457d8) uni_indicator_pane_g2_ParamLimits

0xabae,	// (0x000457ee) uni_indicator_pane_g3_ParamLimits

0xabc4,	// (0x00045804) uni_indicator_pane_g4_ParamLimits

0xabc4,	// (0x00045804) uni_indicator_pane_g4

0xabd8,	// (0x00045818) uni_indicator_pane_g5_ParamLimits

0xabd8,	// (0x00045818) uni_indicator_pane_g5

0xabec,	// (0x0004582c) uni_indicator_pane_g6_ParamLimits

0xabec,	// (0x0004582c) uni_indicator_pane_g6

0xf92c,	// (0x0004a56c) uni_indicator_pane_g_ParamLimits

0xd52d,	// (0x0004816d) popup_tmo_note_window_ParamLimits

0xd52d,	// (0x0004816d) popup_tmo_note_window

0x84ae,	// (0x000430ee) fshwr2_bg_pane

0xebc3,	// (0x00049803) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xebc3,	// (0x00049803) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeab,	// (0x0004aaeb) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeab,	// (0x0004aaeb) fshwr2_func_candi_cell_pane_g

0xc067,	// (0x00046ca7) bg_popup_window_pane_cp01

0xebfc,	// (0x0004983c) bg_popup_window_pane_g1_cp01

0xec05,	// (0x00049845) bg_popup_window_pane_cp22_ParamLimits

0xec05,	// (0x00049845) bg_popup_window_pane_cp22

0xec13,	// (0x00049853) listscroll_tmo_link_pane_ParamLimits

0xec13,	// (0x00049853) listscroll_tmo_link_pane

0xec53,	// (0x00049893) popup_tmo_note_window_g1_ParamLimits

0xec53,	// (0x00049893) popup_tmo_note_window_g1

0xec60,	// (0x000498a0) tmo_note_info_pane_ParamLimits

0xec60,	// (0x000498a0) tmo_note_info_pane

0xec7a,	// (0x000498ba) list_tmo_note_info_pane_g1_ParamLimits

0xec7a,	// (0x000498ba) list_tmo_note_info_pane_g1

0xec91,	// (0x000498d1) list_tmo_note_info_pane_g2_ParamLimits

0xec91,	// (0x000498d1) list_tmo_note_info_pane_g2

0x0001,

0xfeb0,	// (0x0004aaf0) list_tmo_note_info_pane_g_ParamLimits

0xfeb0,	// (0x0004aaf0) list_tmo_note_info_pane_g

0xecad,	// (0x000498ed) list_tmo_note_info_text_pane_ParamLimits

0xecad,	// (0x000498ed) list_tmo_note_info_text_pane

0xed2e,	// (0x0004996e) list_tmo_link_pane

0xed3b,	// (0x0004997b) scroll_pane_cp20

0xed48,	// (0x00049988) list_single_tmo_link_pane_ParamLimits

0xed48,	// (0x00049988) list_single_tmo_link_pane

0xed58,	// (0x00049998) list_single_tmo_link_pane_t1

0xed66,	// (0x000499a6) list_tmo_note_info_text_pane_t1_ParamLimits

0xed66,	// (0x000499a6) list_tmo_note_info_text_pane_t1

0x8574,	// (0x000431b4) aid_size_touch_scroll_bar_cp01_ParamLimits

0x8574,	// (0x000431b4) aid_size_touch_scroll_bar_cp01

0x5009,	// (0x0003fc49) aid_size_touch_slider_marker

0x5ae4,	// (0x00040724) popup_settings_window_ParamLimits

0x5ae4,	// (0x00040724) popup_settings_window

0x51bc,	// (0x0003fdfc) popup_candi_list_indi_window

0x94b6,	// (0x000440f6) aid_touch_navi_pane_ParamLimits

0x728f,	// (0x00041ecf) rs_clock_indi_pane

0x7298,	// (0x00041ed8) sctrl_sk_bottom_pane_ParamLimits

0x72a9,	// (0x00041ee9) sctrl_sk_top_pane_ParamLimits

0x7390,	// (0x00041fd0) popup_fep_tooltip_window

0xe641,	// (0x00049281) aid_size_cell_widget_grid_ParamLimits

0xe6b5,	// (0x000492f5) cell_ai5_widget_pane_g1_ParamLimits

0xe6b5,	// (0x000492f5) cell_ai5_widget_pane_g1

0xe708,	// (0x00049348) cell_ai5_widget_pane_g6_ParamLimits

0xe714,	// (0x00049354) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe2e,	// (0x0004aa6e) cell_ai5_widget_pane_g_ParamLimits

0xfe2e,	// (0x0004aa6e) cell_ai5_widget_pane_g

0xe843,	// (0x00049483) cell_ai5_widget_pane_t10_ParamLimits

0xe843,	// (0x00049483) cell_ai5_widget_pane_t10

0xe859,	// (0x00049499) grid_ai5_widget_pane_ParamLimits

0xe8fb,	// (0x0004953b) cell_contacts_ai5_widget_pane_ParamLimits

0xe8fb,	// (0x0004953b) cell_contacts_ai5_widget_pane

0xeae0,	// (0x00049720) popup_discreet_window_t3_ParamLimits

0xeae0,	// (0x00049720) popup_discreet_window_t3

0x7b16,	// (0x00042756) popup_fshwr2_char_preview_window_ParamLimits

0x7b16,	// (0x00042756) popup_fshwr2_char_preview_window

0xeccb,	// (0x0004990b) tmo_note_info_pane_t1

0xece0,	// (0x00049920) tmo_note_info_pane_t2

0xecf5,	// (0x00049935) tmo_note_info_pane_t3

0xed0a,	// (0x0004994a) tmo_note_info_pane_t4

0xed1c,	// (0x0004995c) tmo_note_info_pane_t5

0x0004,

0xfeb5,	// (0x0004aaf5) tmo_note_info_pane_t

0xed2e,	// (0x0004996e) list_tmo_link_pane_ParamLimits

0xed3b,	// (0x0004997b) scroll_pane_cp20_ParamLimits

0x7b4e,	// (0x0004278e) bg_popup_fep_char_preview_window_cp01

0xed7f,	// (0x000499bf) popup_fshwr2_char_preview_window_t1

0xed8d,	// (0x000499cd) popup_candi_list_indi_window_g1

0xed96,	// (0x000499d6) bg_cell_contacts_ai5_widget_pane

0xeda2,	// (0x000499e2) cell_contacts_ai5_widget_pane_g1

0xedb6,	// (0x000499f6) cell_contacts_ai5_widget_pane_g2

0xedc2,	// (0x00049a02) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfec0,	// (0x0004ab00) cell_contacts_ai5_widget_pane_g

0xedd5,	// (0x00049a15) cell_contacts_ai5_widget_pane_t1

0x84ae,	// (0x000430ee) highlight_cell_shortcut_ai5_widget_pane_cp01

0xee4c,	// (0x00049a8c) settings_container_pane

0x9114,	// (0x00043d54) listscroll_set_pane_copy1

0xb70d,	// (0x0004634d) scroll_pane_cp121_copy1

0xee58,	// (0x00049a98) set_content_pane_copy1

0xee60,	// (0x00049aa0) aid_height_set_list_copy1_ParamLimits

0xee60,	// (0x00049aa0) aid_height_set_list_copy1

0xae26,	// (0x00045a66) aid_size_parent_copy1_ParamLimits

0xae26,	// (0x00045a66) aid_size_parent_copy1

0xee6c,	// (0x00049aac) button_value_adjust_pane_cp6_copy1_ParamLimits

0xee6c,	// (0x00049aac) button_value_adjust_pane_cp6_copy1

0x9454,	// (0x00044094) list_highlight_pane_cp2_copy1_ParamLimits

0x9454,	// (0x00044094) list_highlight_pane_cp2_copy1

0xee80,	// (0x00049ac0) list_set_pane_copy1_ParamLimits

0xee80,	// (0x00049ac0) list_set_pane_copy1

0xede7,	// (0x00049a27) main_pane_set_t1_copy1_ParamLimits

0xede7,	// (0x00049a27) main_pane_set_t1_copy1

0xee21,	// (0x00049a61) main_pane_set_t2_copy1_ParamLimits

0xee21,	// (0x00049a61) main_pane_set_t2_copy1

0xef2d,	// (0x00049b6d) main_pane_set_t3_copy1

0xef3b,	// (0x00049b7b) main_pane_set_t4_copy1

0xee40,	// (0x00049a80) set_content_pane_g1_copy1_ParamLimits

0xee40,	// (0x00049a80) set_content_pane_g1_copy1

0xef49,	// (0x00049b89) setting_code_pane_copy1

0xef51,	// (0x00049b91) setting_slider_graphic_pane_copy1

0xef51,	// (0x00049b91) setting_slider_pane_copy1

0xef51,	// (0x00049b91) setting_text_pane_copy1

0xef51,	// (0x00049b91) setting_volume_pane_copy1

0xef49,	// (0x00049b89) settings_code_pane_cp2_copy1

0xef59,	// (0x00049b99) settings_code_pane_cp_copy1_ParamLimits

0xef59,	// (0x00049b99) settings_code_pane_cp_copy1

0xef6d,	// (0x00049bad) volume_set_pane_copy1

0xef75,	// (0x00049bb5) volume_set_pane_g10_copy1

0xef7d,	// (0x00049bbd) volume_set_pane_g1_copy1

0xef85,	// (0x00049bc5) volume_set_pane_g2_copy1

0xef8d,	// (0x00049bcd) volume_set_pane_g3_copy1

0xef95,	// (0x00049bd5) volume_set_pane_g4_copy1

0xef9d,	// (0x00049bdd) volume_set_pane_g5_copy1

0xefa5,	// (0x00049be5) volume_set_pane_g6_copy1

0xefad,	// (0x00049bed) volume_set_pane_g7_copy1

0xefb5,	// (0x00049bf5) volume_set_pane_g8_copy1

0xefbd,	// (0x00049bfd) volume_set_pane_g9_copy1

0x7c42,	// (0x00042882) bg_set_opt_pane_cp_copy1_ParamLimits

0x7c42,	// (0x00042882) bg_set_opt_pane_cp_copy1

0xefc5,	// (0x00049c05) setting_slider_pane_t1_copy1_ParamLimits

0xefc5,	// (0x00049c05) setting_slider_pane_t1_copy1

0xefe3,	// (0x00049c23) setting_slider_pane_t2_copy1_ParamLimits

0xefe3,	// (0x00049c23) setting_slider_pane_t2_copy1

0xeffd,	// (0x00049c3d) setting_slider_pane_t3_copy1_ParamLimits

0xeffd,	// (0x00049c3d) setting_slider_pane_t3_copy1

0xf015,	// (0x00049c55) slider_set_pane_copy1_ParamLimits

0xf015,	// (0x00049c55) slider_set_pane_copy1

0x8515,	// (0x00043155) set_opt_bg_pane_g1_copy2

0x851d,	// (0x0004315d) set_opt_bg_pane_g2_copy2

0xf02b,	// (0x00049c6b) set_opt_bg_pane_g3_copy2

0x852d,	// (0x0004316d) set_opt_bg_pane_g4_copy2

0x8535,	// (0x00043175) set_opt_bg_pane_g5_copy2

0x853d,	// (0x0004317d) set_opt_bg_pane_g6_copy2

0xf035,	// (0x00049c75) set_opt_bg_pane_g7_copy2

0xf03d,	// (0x00049c7d) set_opt_bg_pane_g8_copy2

0xf047,	// (0x00049c87) set_opt_bg_pane_g9_copy2

0xf051,	// (0x00049c91) aid_size_touch_slider_mark_copy1_ParamLimits

0xf051,	// (0x00049c91) aid_size_touch_slider_mark_copy1

0xf065,	// (0x00049ca5) slider_set_pane_g1_copy1

0xf06e,	// (0x00049cae) slider_set_pane_g2_copy1

0xada5,	// (0x000459e5) slider_set_pane_g3_copy1_ParamLimits

0xada5,	// (0x000459e5) slider_set_pane_g3_copy1

0xadb9,	// (0x000459f9) slider_set_pane_g4_copy1_ParamLimits

0xadb9,	// (0x000459f9) slider_set_pane_g4_copy1

0xadd1,	// (0x00045a11) slider_set_pane_g5_copy1_ParamLimits

0xadd1,	// (0x00045a11) slider_set_pane_g5_copy1

0xada5,	// (0x000459e5) slider_set_pane_g6_copy1_ParamLimits

0xada5,	// (0x000459e5) slider_set_pane_g6_copy1

0xf076,	// (0x00049cb6) slider_set_pane_g7_copy1_ParamLimits

0xf076,	// (0x00049cb6) slider_set_pane_g7_copy1

0x7b62,	// (0x000427a2) bg_set_opt_pane_cp2_copy1

0xf08c,	// (0x00049ccc) setting_slider_graphic_pane_g1_copy1

0xf095,	// (0x00049cd5) setting_slider_graphic_pane_t1_copy1

0xf0a5,	// (0x00049ce5) setting_slider_graphic_pane_t2_copy1

0xf0b5,	// (0x00049cf5) slider_set_pane_cp_copy1

0xf0c5,	// (0x00049d05) input_focus_pane_cp1_copy1

0xf0ce,	// (0x00049d0e) list_set_text_pane_copy1

0xf0d6,	// (0x00049d16) setting_text_pane_g1_copy1

0x4a06,	// (0x0003f646) set_text_pane_t1_copy1

0xf0c5,	// (0x00049d05) input_focus_pane_cp2_copy1

0xf0d6,	// (0x00049d16) setting_code_pane_g1_copy1

0xf0df,	// (0x00049d1f) setting_code_pane_t1_copy1

0xf0ed,	// (0x00049d2d) list_set_graphic_pane_copy1

0x7b62,	// (0x000427a2) bg_set_opt_pane_cp4_copy1

0x8e26,	// (0x00043a66) list_set_graphic_pane_g1_copy1_ParamLimits

0x8e26,	// (0x00043a66) list_set_graphic_pane_g1_copy1

0xf0ff,	// (0x00049d3f) list_set_graphic_pane_g2_copy1

0x8e3e,	// (0x00043a7e) list_set_graphic_pane_t1_copy1_ParamLimits

0x8e3e,	// (0x00043a7e) list_set_graphic_pane_t1_copy1

0xc067,	// (0x00046ca7) rs_clock_indi_pane_g1

0xf107,	// (0x00049d47) rs_clock_indi_pane_t1

0xf115,	// (0x00049d55) rs_indi_pane

0xf11d,	// (0x00049d5d) rs_indi_pane_g1

0xf126,	// (0x00049d66) rs_indi_pane_g2

0xf12f,	// (0x00049d6f) rs_indi_pane_g3

0x0002,

0xfec7,	// (0x0004ab07) rs_indi_pane_g

0x9114,	// (0x00043d54) bg_popup_preview_window_pane_cp03

0xf138,	// (0x00049d78) popup_fep_tooltip_window_t1

0xccce,	// (0x0004790e) popup_note2_window_g2_ParamLimits

0xccce,	// (0x0004790e) popup_note2_window_g2

0x0001,

0xfc60,	// (0x0004a8a0) popup_note2_window_g_ParamLimits

0xfc60,	// (0x0004a8a0) popup_note2_window_g

0xd1c9,	// (0x00047e09) bg_popup_sub_pane_cp11_ParamLimits

0xd1d6,	// (0x00047e16) cell_ai3_links_pane_g1_ParamLimits

0xd1ed,	// (0x00047e2d) cell_ai3_links_pane_t1

0x4a06,	// (0x0003f646) set_text_pane_t1_copy1_ParamLimits

0x9025,	// (0x00043c65) cell_graphic_popup_pane_cp2_ParamLimits

0x9025,	// (0x00043c65) cell_graphic_popup_pane_cp2

0xf146,	// (0x00049d86) cell_graphic_popup_pane_g1_cp2

0x81f9,	// (0x00042e39) cell_graphic_popup_pane_g2_cp2

0xf14e,	// (0x00049d8e) cell_graphic_popup_pane_g3_cp2

0xf156,	// (0x00049d96) cell_graphic_popup_pane_t2_cp2

0x820a,	// (0x00042e4a) grid_highlight_pane_cp3_cp2

0x8866,	// (0x000434a6) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x84ae,	// (0x000430ee) main_tmo_pane_ParamLimits

0xd521,	// (0x00048161) popup_tmo_big_image_note_window

0xe6a5,	// (0x000492e5) cell_ai5_widget_list_pane

0xe6ad,	// (0x000492ed) cell_ai5_widget_lrg_icon_pane

0xeccb,	// (0x0004990b) tmo_note_info_pane_t1_ParamLimits

0xece0,	// (0x00049920) tmo_note_info_pane_t2_ParamLimits

0xecf5,	// (0x00049935) tmo_note_info_pane_t3_ParamLimits

0xed0a,	// (0x0004994a) tmo_note_info_pane_t4_ParamLimits

0xed1c,	// (0x0004995c) tmo_note_info_pane_t5_ParamLimits

0xfeb5,	// (0x0004aaf5) tmo_note_info_pane_t_ParamLimits

0xee4c,	// (0x00049a8c) settings_container_pane_ParamLimits

0xf0bd,	// (0x00049cfd) indicator_popup_pane_cp5

0xf0bd,	// (0x00049cfd) indicator_popup_pane_cp6

0xf0ed,	// (0x00049d2d) list_set_graphic_pane_copy1_ParamLimits

0x7b4e,	// (0x0004278e) bg_popup_window_pane_cp23

0xf164,	// (0x00049da4) popup_tmo_big_image_note_window_g1

0xf16e,	// (0x00049dae) popup_tmo_big_image_note_window_t1

0xf17e,	// (0x00049dbe) popup_tmo_big_image_note_window_t2

0xf18e,	// (0x00049dce) popup_tmo_big_image_note_window_t3

0x0002,

0xfece,	// (0x0004ab0e) popup_tmo_big_image_note_window_t

0xf19e,	// (0x00049dde) cell_ai5_widget_lrg_icon_pane_g1

0xf1a6,	// (0x00049de6) cell_ai5_widget_lrg_icon_pane_t1

0xf1b4,	// (0x00049df4) cell_ai5_widget_list_row_pane_ParamLimits

0xf1b4,	// (0x00049df4) cell_ai5_widget_list_row_pane

0xf1cd,	// (0x00049e0d) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf1cd,	// (0x00049e0d) cell_ai5_widget_list_row_pane_g1

0xf1da,	// (0x00049e1a) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf1da,	// (0x00049e1a) cell_ai5_widget_list_row_pane_t1

0xf1f2,	// (0x00049e32) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf1f2,	// (0x00049e32) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfed5,	// (0x0004ab15) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfed5,	// (0x0004ab15) cell_ai5_widget_list_row_pane_t

0x7b4e,	// (0x0004278e) main_fep_vtchi_ss_pane

0xf229,	// (0x00049e69) popup_fep_char_pre_window

0xf231,	// (0x00049e71) popup_fep_ituss_window

0xf252,	// (0x00049e92) popup_fep_vkbss_window

0xf271,	// (0x00049eb1) grid_vkbss_keypad_pane_ParamLimits

0xf271,	// (0x00049eb1) grid_vkbss_keypad_pane

0xf281,	// (0x00049ec1) ituss_keypad_pane

0xf29d,	// (0x00049edd) aid_vkbss_key_offset_ParamLimits

0xf29d,	// (0x00049edd) aid_vkbss_key_offset

0xf2a9,	// (0x00049ee9) cell_vkbss_key_pane_ParamLimits

0xf2a9,	// (0x00049ee9) cell_vkbss_key_pane

0xf2bf,	// (0x00049eff) bg_cell_vkbss_key_g1_ParamLimits

0xf2bf,	// (0x00049eff) bg_cell_vkbss_key_g1

0xf2cb,	// (0x00049f0b) cell_vkbss_key_3p_pane_ParamLimits

0xf2cb,	// (0x00049f0b) cell_vkbss_key_3p_pane

0xf2e5,	// (0x00049f25) cell_vkbss_key_g1_ParamLimits

0xf2e5,	// (0x00049f25) cell_vkbss_key_g1

0xf2ff,	// (0x00049f3f) cell_vkbss_key_t1_ParamLimits

0xf2ff,	// (0x00049f3f) cell_vkbss_key_t1

0xf32a,	// (0x00049f6a) cell_ituss_key_pane_ParamLimits

0xf32a,	// (0x00049f6a) cell_ituss_key_pane

0xf33b,	// (0x00049f7b) bg_cell_ituss_key_g1_ParamLimits

0xf33b,	// (0x00049f7b) bg_cell_ituss_key_g1

0xf347,	// (0x00049f87) cell_ituss_key_pane_g1_ParamLimits

0xf347,	// (0x00049f87) cell_ituss_key_pane_g1

0xf361,	// (0x00049fa1) cell_ituss_key_pane_g2_ParamLimits

0xf361,	// (0x00049fa1) cell_ituss_key_pane_g2

0x0001,

0xfedc,	// (0x0004ab1c) cell_ituss_key_pane_g_ParamLimits

0xfedc,	// (0x0004ab1c) cell_ituss_key_pane_g

0xf38c,	// (0x00049fcc) cell_ituss_key_t1_ParamLimits

0xf38c,	// (0x00049fcc) cell_ituss_key_t1

0xf3ba,	// (0x00049ffa) cell_ituss_key_t2_ParamLimits

0xf3ba,	// (0x00049ffa) cell_ituss_key_t2

0xf3eb,	// (0x0004a02b) cell_ituss_key_t3_ParamLimits

0xf3eb,	// (0x0004a02b) cell_ituss_key_t3

0xf41c,	// (0x0004a05c) cell_ituss_key_t4_ParamLimits

0xf41c,	// (0x0004a05c) cell_ituss_key_t4

0x0003,

0xfee1,	// (0x0004ab21) cell_ituss_key_t_ParamLimits

0xfee1,	// (0x0004ab21) cell_ituss_key_t

0xf44d,	// (0x0004a08d) cell_vkbss_key_3p_pane_g1

0xf455,	// (0x0004a095) cell_vkbss_key_3p_pane_g2

0xf45d,	// (0x0004a09d) cell_vkbss_key_3p_pane_g3

0x0002,

0xfeea,	// (0x0004ab2a) cell_vkbss_key_3p_pane_g

0x7b4e,	// (0x0004278e) bg_popup_fep_char_preview_window_cp02

0xf465,	// (0x0004a0a5) popup_fep_char_pre_window_t1

0xe637,	// (0x00049277) main_ai5_sk_pane

0xed96,	// (0x000499d6) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xeda2,	// (0x000499e2) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xedb6,	// (0x000499f6) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xedc2,	// (0x00049a02) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfec0,	// (0x0004ab00) cell_contacts_ai5_widget_pane_g_ParamLimits

0xedd5,	// (0x00049a15) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x84ae,	// (0x000430ee) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf474,	// (0x0004a0b4) main_ai5_sk_pane_g1

0x9e97,	// (0x00044ad7) popup_query_code_window_g1

0xf247,	// (0x00049e87) popup_fep_vkb_icf_pane

0xf25b,	// (0x00049e9b) popup_fep_vtchi_icf_pane

0x84ae,	// (0x000430ee) bg_icf_pane

0xf47d,	// (0x0004a0bd) list_vkb_icf_pane

0x84ae,	// (0x000430ee) bg_icf_pane_cp01

0xf489,	// (0x0004a0c9) vtchi_icf_list_pane

0xf49a,	// (0x0004a0da) list_vkb_icf_pane_t1_ParamLimits

0xf49a,	// (0x0004a0da) list_vkb_icf_pane_t1

0xf4b1,	// (0x0004a0f1) vtchi_icf_list_pane_t1_ParamLimits

0xf4b1,	// (0x0004a0f1) vtchi_icf_list_pane_t1

0xf231,	// (0x00049e71) popup_fep_ituss_window_ParamLimits

0xf25b,	// (0x00049e9b) popup_fep_vtchi_icf_pane_ParamLimits

0xf281,	// (0x00049ec1) ituss_keypad_pane_ParamLimits

0xf291,	// (0x00049ed1) ituss_sks_pane

0x84ae,	// (0x000430ee) bg_icf_pane_ParamLimits

0xf21a,	// (0x00049e5a) icf_edit_indi_pane_ParamLimits

0xf21a,	// (0x00049e5a) icf_edit_indi_pane

0xf47d,	// (0x0004a0bd) list_vkb_icf_pane_ParamLimits

0x84ae,	// (0x000430ee) bg_icf_pane_cp01_ParamLimits

0xf21a,	// (0x00049e5a) icf_edit_indi_pane_cp01_ParamLimits

0xf21a,	// (0x00049e5a) icf_edit_indi_pane_cp01

0xf491,	// (0x0004a0d1) vtchi_query_pane

0xc2e5,	// (0x00046f25) icf_edit_indi_pane_g1_ParamLimits

0xc2e5,	// (0x00046f25) icf_edit_indi_pane_g1

0xf537,	// (0x0004a177) icf_edit_indi_pane_g2_ParamLimits

0xf537,	// (0x0004a177) icf_edit_indi_pane_g2

0x0001,

0xff02,	// (0x0004ab42) icf_edit_indi_pane_g_ParamLimits

0xff02,	// (0x0004ab42) icf_edit_indi_pane_g

0xf546,	// (0x0004a186) icf_edit_indi_pane_t1

0xf4cd,	// (0x0004a10d) bg_input_focus_pane_cp042

0x83dd,	// (0x0004301d) vtchi_button_pane

0xf4d6,	// (0x0004a116) vtchi_query_pane_t1

0xf4e4,	// (0x0004a124) vtchi_query_pane_t2

0xf4f2,	// (0x0004a132) vtchi_query_pane_t3

0x0002,

0xfef1,	// (0x0004ab31) vtchi_query_pane_t

0x7b4e,	// (0x0004278e) bg_button_pane_cp13

0xf500,	// (0x0004a140) vtchi_button_pane_g1

0xf508,	// (0x0004a148) ituss_sks_pane_g1

0xf513,	// (0x0004a153) ituss_sks_pane_g2

0x0001,

0xfef8,	// (0x0004ab38) ituss_sks_pane_g

0xf51b,	// (0x0004a15b) ituss_sks_pane_t1

0xf529,	// (0x0004a169) ituss_sks_pane_t2

0x0001,

0xfefd,	// (0x0004ab3d) ituss_sks_pane_t

0xbad0,	// (0x00046710) indicator_nsta_pane_cp_g1

0xbad9,	// (0x00046719) indicator_nsta_pane_cp_g2

0xbae1,	// (0x00046721) indicator_nsta_pane_cp_g3

0xbae9,	// (0x00046729) indicator_nsta_pane_cp_g4

0xbaf1,	// (0x00046731) indicator_nsta_pane_cp_g5

0xbaf9,	// (0x00046739) indicator_nsta_pane_cp_g6

0x0005,

0xfaaa,	// (0x0004a6ea) indicator_nsta_pane_cp_g

0xe1fc,	// (0x00048e3c) cell_graphic2_pane_t2_ParamLimits

0xe1fc,	// (0x00048e3c) cell_graphic2_pane_t2

0x0001,

0xfdb7,	// (0x0004a9f7) cell_graphic2_pane_t_ParamLimits

0xfdb7,	// (0x0004a9f7) cell_graphic2_pane_t

0xe229,	// (0x00048e69) cell_graphic2_control_pane_t1

0x8bdc,	// (0x0004381c) signal_pane_g3_ParamLimits

0x8bdc,	// (0x0004381c) signal_pane_g3

0x8beb,	// (0x0004382b) signal_pane_g4_ParamLimits

0x8beb,	// (0x0004382b) signal_pane_g4

0xf204,	// (0x00049e44) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf204,	// (0x00049e44) cell_ai5_widget_list_row_pane_t3

0xf37a,	// (0x00049fba) cell_ituss_key_pane_t1_ParamLimits

0xf37a,	// (0x00049fba) cell_ituss_key_pane_t1

0x9aea,	// (0x0004472a) form_field_data_wide_pane_vc_t2_ParamLimits

0x9aea,	// (0x0004472a) form_field_data_wide_pane_vc_t2

0x9afe,	// (0x0004473e) form_field_data_wide_pane_vc_t3_ParamLimits

0x9afe,	// (0x0004473e) form_field_data_wide_pane_vc_t3

0x0002,

0xf814,	// (0x0004a454) form_field_data_wide_pane_vc_t_ParamLimits

0xf814,	// (0x0004a454) form_field_data_wide_pane_vc_t

0xb787,	// (0x000463c7) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb787,	// (0x000463c7) form_field_slider_wide_pane_vc_t3

0xb865,	// (0x000464a5) form_field_popup_wide_pane_vc_t2_ParamLimits

0xb865,	// (0x000464a5) form_field_popup_wide_pane_vc_t2

0xb87c,	// (0x000464bc) form_field_popup_wide_pane_vc_t3_ParamLimits

0xb87c,	// (0x000464bc) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa99,	// (0x0004a6d9) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa99,	// (0x0004a6d9) form_field_popup_wide_pane_vc_t

0x7aac,	// (0x000426ec) aid_fshwr2_btn_pane_ParamLimits

0x7ab8,	// (0x000426f8) aid_fshwr2_syb_pane_ParamLimits

0x7ac9,	// (0x00042709) aid_fshwr2_txt_pane_ParamLimits

0x84ae,	// (0x000430ee) fshwr2_bg_pane_ParamLimits

0x7ad5,	// (0x00042715) fshwr2_func_candi_pane_ParamLimits

0x7aea,	// (0x0004272a) fshwr2_hwr_syb_pane_ParamLimits

0x7b01,	// (0x00042741) fshwr2_icf_pane_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Elaf_php_av_qhd_prt_tch_Large

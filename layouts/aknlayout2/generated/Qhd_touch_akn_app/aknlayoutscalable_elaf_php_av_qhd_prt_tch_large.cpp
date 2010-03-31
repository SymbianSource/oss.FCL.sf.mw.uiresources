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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0003a301 };

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
0x7cd4,	// (0x00041fd5) Screen

0x7ce8,	// (0x00041fe9) application_window_ParamLimits

0x7ce8,	// (0x00041fe9) application_window

0x7d02,	// (0x00042003) screen_g1

0x58f3,	// (0x0003fbf4) area_bottom_pane_ParamLimits

0x58f3,	// (0x0003fbf4) area_bottom_pane

0x59b3,	// (0x0003fcb4) area_top_pane_ParamLimits

0x59b3,	// (0x0003fcb4) area_top_pane

0x5a47,	// (0x0003fd48) main_pane_ParamLimits

0x5a47,	// (0x0003fd48) main_pane

0x7d0c,	// (0x0004200d) misc_graphics

0x96b5,	// (0x000439b6) battery_pane_ParamLimits

0x96b5,	// (0x000439b6) battery_pane

0xa387,	// (0x00044688) bg_status_flat_pane_g8

0xa38f,	// (0x00044690) bg_status_flat_pane_g9

0x9777,	// (0x00043a78) context_pane_ParamLimits

0x9777,	// (0x00043a78) context_pane

0x988d,	// (0x00043b8e) navi_pane_ParamLimits

0x988d,	// (0x00043b8e) navi_pane

0x9911,	// (0x00043c12) signal_pane_ParamLimits

0x9911,	// (0x00043c12) signal_pane

0x0008,

0xf884,	// (0x00049b85) bg_status_flat_pane_g

0x997e,	// (0x00043c7f) status_pane_g1_ParamLimits

0x997e,	// (0x00043c7f) status_pane_g1

0x9992,	// (0x00043c93) status_pane_g2_ParamLimits

0x9992,	// (0x00043c93) status_pane_g2

0x999e,	// (0x00043c9f) status_pane_g3_ParamLimits

0x999e,	// (0x00043c9f) status_pane_g3

0x0004,

0xf7ab,	// (0x00049aac) status_pane_g_ParamLimits

0xf7ab,	// (0x00049aac) status_pane_g

0x99d2,	// (0x00043cd3) title_pane_ParamLimits

0x99d2,	// (0x00043cd3) title_pane

0x9a0f,	// (0x00043d10) uni_indicator_pane_ParamLimits

0x9a0f,	// (0x00043d10) uni_indicator_pane

0x95d9,	// (0x000438da) bg_list_pane_ParamLimits

0x95d9,	// (0x000438da) bg_list_pane

0x63da,	// (0x000406db) find_pane

0x95f9,	// (0x000438fa) listscroll_app_pane_ParamLimits

0x95f9,	// (0x000438fa) listscroll_app_pane

0x9605,	// (0x00043906) listscroll_form_pane

0x63e2,	// (0x000406e3) listscroll_gen_pane_ParamLimits

0x63e2,	// (0x000406e3) listscroll_gen_pane

0x63f6,	// (0x000406f7) listscroll_set_pane

0x883c,	// (0x00042b3d) main_idle_act_pane

0x92df,	// (0x000435e0) main_idle_trad_pane

0x92df,	// (0x000435e0) main_list_empty_pane

0x961f,	// (0x00043920) main_midp_pane

0x962b,	// (0x0004392c) main_pane_g1_ParamLimits

0x962b,	// (0x0004392c) main_pane_g1

0x63fe,	// (0x000406ff) popup_ai_message_window_ParamLimits

0x63fe,	// (0x000406ff) popup_ai_message_window

0x64a4,	// (0x000407a5) popup_fep_china_uni_window_ParamLimits

0x64a4,	// (0x000407a5) popup_fep_china_uni_window

0x6500,	// (0x00040801) popup_fep_japan_candidate_window_ParamLimits

0x6500,	// (0x00040801) popup_fep_japan_candidate_window

0x6520,	// (0x00040821) popup_fep_japan_predictive_window_ParamLimits

0x6520,	// (0x00040821) popup_fep_japan_predictive_window

0x6550,	// (0x00040851) popup_find_window

0x655d,	// (0x0004085e) popup_grid_graphic_window_ParamLimits

0x655d,	// (0x0004085e) popup_grid_graphic_window

0x6585,	// (0x00040886) popup_large_graphic_colour_window

0x65ab,	// (0x000408ac) popup_menu_window_ParamLimits

0x65ab,	// (0x000408ac) popup_menu_window

0x6763,	// (0x00040a64) popup_note_image_window

0x674f,	// (0x00040a50) popup_note_wait_window_ParamLimits

0x674f,	// (0x00040a50) popup_note_wait_window

0x674f,	// (0x00040a50) popup_note_window_ParamLimits

0x674f,	// (0x00040a50) popup_note_window

0x67b9,	// (0x00040aba) popup_query_code_window_ParamLimits

0x67b9,	// (0x00040aba) popup_query_code_window

0x67cd,	// (0x00040ace) popup_query_data_code_window_ParamLimits

0x67cd,	// (0x00040ace) popup_query_data_code_window

0x67ea,	// (0x00040aeb) popup_query_data_window_ParamLimits

0x67ea,	// (0x00040aeb) popup_query_data_window

0x6806,	// (0x00040b07) popup_query_sat_info_window_ParamLimits

0x6806,	// (0x00040b07) popup_query_sat_info_window

0x683f,	// (0x00040b40) popup_snote_single_graphic_window_ParamLimits

0x683f,	// (0x00040b40) popup_snote_single_graphic_window

0x683f,	// (0x00040b40) popup_snote_single_text_window_ParamLimits

0x683f,	// (0x00040b40) popup_snote_single_text_window

0x6854,	// (0x00040b55) popup_sub_window_general

0x6984,	// (0x00040c85) popup_window_general_ParamLimits

0x6984,	// (0x00040c85) popup_window_general

0x9639,	// (0x0004393a) power_save_pane

0x6276,	// (0x00040577) control_pane_g1_ParamLimits

0x6276,	// (0x00040577) control_pane_g1

0x629d,	// (0x0004059e) control_pane_g2_ParamLimits

0x629d,	// (0x0004059e) control_pane_g2

0x959c,	// (0x0004389d) control_pane_g3_ParamLimits

0x959c,	// (0x0004389d) control_pane_g3

0x0007,

0xf793,	// (0x00049a94) control_pane_g_ParamLimits

0xf793,	// (0x00049a94) control_pane_g

0x62e7,	// (0x000405e8) control_pane_t1_ParamLimits

0x62e7,	// (0x000405e8) control_pane_t1

0x6333,	// (0x00040634) control_pane_t2_ParamLimits

0x6333,	// (0x00040634) control_pane_t2

0x0002,

0xf7a4,	// (0x00049aa5) control_pane_t_ParamLimits

0xf7a4,	// (0x00049aa5) control_pane_t

0x94bd,	// (0x000437be) navi_navi_volume_pane_cp1

0x94c6,	// (0x000437c7) status_small_icon_pane

0x94ce,	// (0x000437cf) status_small_pane_g1_ParamLimits

0x94ce,	// (0x000437cf) status_small_pane_g1

0x9502,	// (0x00043803) status_small_pane_g2_ParamLimits

0x9502,	// (0x00043803) status_small_pane_g2

0x950e,	// (0x0004380f) status_small_pane_g3_ParamLimits

0x950e,	// (0x0004380f) status_small_pane_g3

0x951a,	// (0x0004381b) status_small_pane_g4_ParamLimits

0x951a,	// (0x0004381b) status_small_pane_g4

0x9526,	// (0x00043827) status_small_pane_g5_ParamLimits

0x9526,	// (0x00043827) status_small_pane_g5

0x9535,	// (0x00043836) status_small_pane_g6_ParamLimits

0x9535,	// (0x00043836) status_small_pane_g6

0x0007,

0xf782,	// (0x00049a83) status_small_pane_g_ParamLimits

0xf782,	// (0x00049a83) status_small_pane_g

0x9565,	// (0x00043866) status_small_pane_t1

0x9588,	// (0x00043889) status_small_wait_pane_ParamLimits

0x9588,	// (0x00043889) status_small_wait_pane

0x8d5c,	// (0x0004305d) aid_levels_signal_ParamLimits

0x8d5c,	// (0x0004305d) aid_levels_signal

0x8d6e,	// (0x0004306f) signal_pane_g1_ParamLimits

0x8d6e,	// (0x0004306f) signal_pane_g1

0x8d83,	// (0x00043084) signal_pane_g2_ParamLimits

0x8d83,	// (0x00043084) signal_pane_g2

0x0003,

0xf713,	// (0x00049a14) signal_pane_g_ParamLimits

0xf713,	// (0x00049a14) signal_pane_g

0x8dbe,	// (0x000430bf) context_pane_g1

0x7d16,	// (0x00042017) title_pane_g1

0x7d4c,	// (0x0004204d) title_pane_t1

0x7db4,	// (0x000420b5) title_pane_t2

0x7dda,	// (0x000420db) title_pane_t3

0x0002,

0xf55d,	// (0x0004985e) title_pane_t

0x9a27,	// (0x00043d28) aid_levels_battery_ParamLimits

0x9a27,	// (0x00043d28) aid_levels_battery

0x9a3b,	// (0x00043d3c) battery_pane_g1_ParamLimits

0x9a3b,	// (0x00043d3c) battery_pane_g1

0x9a51,	// (0x00043d52) battery_pane_g2_ParamLimits

0x9a51,	// (0x00043d52) battery_pane_g2

0x0001,

0xf7b6,	// (0x00049ab7) battery_pane_g_ParamLimits

0xf7b6,	// (0x00049ab7) battery_pane_g

0xacbd,	// (0x00044fbe) uni_indicator_pane_g1

0xacd4,	// (0x00044fd5) uni_indicator_pane_g2

0xace7,	// (0x00044fe8) uni_indicator_pane_g3

0x0005,

0xf92c,	// (0x00049c2d) uni_indicator_pane_g

0x9151,	// (0x00043452) navi_icon_pane_ParamLimits

0x9151,	// (0x00043452) navi_icon_pane

0x909a,	// (0x0004339b) navi_midp_pane

0x916d,	// (0x0004346e) navi_navi_pane

0x9177,	// (0x00043478) navi_text_pane_ParamLimits

0x9177,	// (0x00043478) navi_text_pane

0x7d02,	// (0x00042003) status_small_wait_pane_g1

0x8209,	// (0x0004250a) status_small_wait_pane_g2

0x0001,

0xf927,	// (0x00049c28) status_small_wait_pane_g

0xa9e2,	// (0x00044ce3) navi_navi_icon_text_pane

0xa9ea,	// (0x00044ceb) navi_navi_pane_g1_ParamLimits

0xa9ea,	// (0x00044ceb) navi_navi_pane_g1

0xa9fc,	// (0x00044cfd) navi_navi_pane_g2_ParamLimits

0xa9fc,	// (0x00044cfd) navi_navi_pane_g2

0x0001,

0xf8f5,	// (0x00049bf6) navi_navi_pane_g_ParamLimits

0xf8f5,	// (0x00049bf6) navi_navi_pane_g

0xaa0e,	// (0x00044d0f) navi_navi_tabs_pane

0xaa17,	// (0x00044d18) navi_navi_text_pane

0xa9e2,	// (0x00044ce3) navi_navi_volume_pane

0xa9be,	// (0x00044cbf) navi_text_pane_t1

0xa9b2,	// (0x00044cb3) navi_icon_pane_g1

0xa905,	// (0x00044c06) navi_navi_text_pane_t1

0x6c3c,	// (0x00040f3d) navi_navi_volume_pane_g1

0x6c44,	// (0x00040f45) volume_small_pane

0xa86b,	// (0x00044b6c) navi_navi_icon_text_pane_g1

0xa873,	// (0x00044b74) navi_navi_icon_text_pane_t1

0x916d,	// (0x0004346e) navi_tabs_2_long_pane

0x916d,	// (0x0004346e) navi_tabs_2_pane

0x916d,	// (0x0004346e) navi_tabs_3_long_pane

0x916d,	// (0x0004346e) navi_tabs_3_pane

0x916d,	// (0x0004346e) navi_tabs_4_pane

0x6c1c,	// (0x00040f1d) tabs_2_active_pane_ParamLimits

0x6c1c,	// (0x00040f1d) tabs_2_active_pane

0x6c2c,	// (0x00040f2d) tabs_2_passive_pane_ParamLimits

0x6c2c,	// (0x00040f2d) tabs_2_passive_pane

0x6bea,	// (0x00040eeb) tabs_3_active_pane_ParamLimits

0x6bea,	// (0x00040eeb) tabs_3_active_pane

0x6bfa,	// (0x00040efb) tabs_3_passive_pane_ParamLimits

0x6bfa,	// (0x00040efb) tabs_3_passive_pane

0x6c0b,	// (0x00040f0c) tabs_3_passive_pane_cp_ParamLimits

0x6c0b,	// (0x00040f0c) tabs_3_passive_pane_cp

0x6ba6,	// (0x00040ea7) tabs_4_active_pane_ParamLimits

0x6ba6,	// (0x00040ea7) tabs_4_active_pane

0x6bb7,	// (0x00040eb8) tabs_4_passive_pane_ParamLimits

0x6bb7,	// (0x00040eb8) tabs_4_passive_pane

0x6bc8,	// (0x00040ec9) tabs_4_passive_pane_cp_ParamLimits

0x6bc8,	// (0x00040ec9) tabs_4_passive_pane_cp

0x6bd9,	// (0x00040eda) tabs_4_passive_pane_cp2_ParamLimits

0x6bd9,	// (0x00040eda) tabs_4_passive_pane_cp2

0x6b82,	// (0x00040e83) tabs_2_long_active_pane_ParamLimits

0x6b82,	// (0x00040e83) tabs_2_long_active_pane

0x6b94,	// (0x00040e95) tabs_2_long_passive_pane_ParamLimits

0x6b94,	// (0x00040e95) tabs_2_long_passive_pane

0x6b43,	// (0x00040e44) tabs_3_long_active_pane_ParamLimits

0x6b43,	// (0x00040e44) tabs_3_long_active_pane

0x6b56,	// (0x00040e57) tabs_3_long_passive_pane_ParamLimits

0x6b56,	// (0x00040e57) tabs_3_long_passive_pane

0x6b6f,	// (0x00040e70) tabs_3_long_passive_pane_cp_ParamLimits

0x6b6f,	// (0x00040e70) tabs_3_long_passive_pane_cp

0x6ae9,	// (0x00040dea) volume_small_pane_g1

0x6af2,	// (0x00040df3) volume_small_pane_g2

0x6afb,	// (0x00040dfc) volume_small_pane_g3

0x6b04,	// (0x00040e05) volume_small_pane_g4

0x6b0d,	// (0x00040e0e) volume_small_pane_g5

0x6b16,	// (0x00040e17) volume_small_pane_g6

0x6b1f,	// (0x00040e20) volume_small_pane_g7

0x6b28,	// (0x00040e29) volume_small_pane_g8

0x6b31,	// (0x00040e32) volume_small_pane_g9

0x6b3a,	// (0x00040e3b) volume_small_pane_g10

0x0009,

0xf8c1,	// (0x00049bc2) volume_small_pane_g

0x7dec,	// (0x000420ed) bg_active_tab_pane_cp2_ParamLimits

0x7dec,	// (0x000420ed) bg_active_tab_pane_cp2

0x7dfa,	// (0x000420fb) tabs_3_active_pane_g1

0x7e02,	// (0x00042103) tabs_3_active_pane_t1

0x7dec,	// (0x000420ed) bg_passive_tab_pane_cp2_ParamLimits

0x7dec,	// (0x000420ed) bg_passive_tab_pane_cp2

0x7dfa,	// (0x000420fb) tabs_3_passive_pane_g1

0x7e02,	// (0x00042103) tabs_3_passive_pane_t1

0x7dec,	// (0x000420ed) bg_active_tab_pane_cp3_ParamLimits

0x7dec,	// (0x000420ed) bg_active_tab_pane_cp3

0x7e14,	// (0x00042115) tabs_4_active_pane_g1

0x7e1c,	// (0x0004211d) tabs_4_active_pane_t1

0x7dec,	// (0x000420ed) bg_passive_tab_pane_cp3_ParamLimits

0x7dec,	// (0x000420ed) bg_passive_tab_pane_cp3

0x7e14,	// (0x00042115) tabs_4_1_passive_pane_g1

0x7e1c,	// (0x0004211d) tabs_4_1_passive_pane_t1

0x961f,	// (0x00043920) list_highlight_pane_cp2

0xaf6f,	// (0x00045270) list_set_pane_ParamLimits

0xaf6f,	// (0x00045270) list_set_pane

0xb015,	// (0x00045316) main_pane_set_t1_ParamLimits

0xb015,	// (0x00045316) main_pane_set_t1

0xb035,	// (0x00045336) main_pane_set_t2_ParamLimits

0xb035,	// (0x00045336) main_pane_set_t2

0xb049,	// (0x0004534a) main_pane_set_t3_ParamLimits

0xb049,	// (0x0004534a) main_pane_set_t3

0xb05b,	// (0x0004535c) main_pane_set_t4_ParamLimits

0xb05b,	// (0x0004535c) main_pane_set_t4

0x0003,

0xf991,	// (0x00049c92) main_pane_set_t_ParamLimits

0xf991,	// (0x00049c92) main_pane_set_t

0xb06d,	// (0x0004536e) setting_code_pane

0xb079,	// (0x0004537a) setting_slider_graphic_pane

0xb079,	// (0x0004537a) setting_slider_pane

0xb079,	// (0x0004537a) setting_text_pane

0xb079,	// (0x0004537a) setting_volume_pane

0x5c96,	// (0x0003ff97) volume_set_pane

0x7dec,	// (0x000420ed) bg_set_opt_pane_cp

0x5c9e,	// (0x0003ff9f) setting_slider_pane_t1

0x5cb7,	// (0x0003ffb8) setting_slider_pane_t2

0x5cd1,	// (0x0003ffd2) setting_slider_pane_t3

0x0002,

0xf564,	// (0x00049865) setting_slider_pane_t

0x5ce9,	// (0x0003ffea) slider_set_pane

0x7d0c,	// (0x0004200d) bg_set_opt_pane_cp2

0x7e2e,	// (0x0004212f) setting_slider_graphic_pane_g1

0x5cff,	// (0x00040000) setting_slider_graphic_pane_t1

0x5d0f,	// (0x00040010) setting_slider_graphic_pane_t2

0x0001,

0xf56b,	// (0x0004986c) setting_slider_graphic_pane_t

0x5d1f,	// (0x00040020) slider_set_pane_cp

0x7d0c,	// (0x0004200d) input_focus_pane_cp1

0xaf2e,	// (0x0004522f) list_set_text_pane

0x7d02,	// (0x00042003) setting_text_pane_g1

0x7d0c,	// (0x0004200d) input_focus_pane_cp2

0x7d02,	// (0x00042003) setting_code_pane_g1

0x7e37,	// (0x00042138) setting_code_pane_t1

0x49c2,	// (0x0003ecc3) set_text_pane_t1_ParamLimits

0x49c2,	// (0x0003ecc3) set_text_pane_t1

0x86b3,	// (0x000429b4) set_opt_bg_pane_g1

0x86bb,	// (0x000429bc) set_opt_bg_pane_g2

0xaf08,	// (0x00045209) set_opt_bg_pane_g3

0x86cb,	// (0x000429cc) set_opt_bg_pane_g4

0x86d3,	// (0x000429d4) set_opt_bg_pane_g5

0x86db,	// (0x000429dc) set_opt_bg_pane_g6

0xaf12,	// (0x00045213) set_opt_bg_pane_g7

0xaf1a,	// (0x0004521b) set_opt_bg_pane_g8

0xaf24,	// (0x00045225) set_opt_bg_pane_g9

0x0008,

0xf97e,	// (0x00049c7f) set_opt_bg_pane_g

0xaeb9,	// (0x000451ba) slider_set_pane_g1

0x6cb1,	// (0x00040fb2) slider_set_pane_g2

0x0006,

0xf96f,	// (0x00049c70) slider_set_pane_g

0x6c4d,	// (0x00040f4e) volume_set_pane_g1

0x6c55,	// (0x00040f56) volume_set_pane_g2

0x6c5d,	// (0x00040f5e) volume_set_pane_g3

0x6c65,	// (0x00040f66) volume_set_pane_g4

0x6c6d,	// (0x00040f6e) volume_set_pane_g5

0x6c75,	// (0x00040f76) volume_set_pane_g6

0x6c7d,	// (0x00040f7e) volume_set_pane_g7

0x6c85,	// (0x00040f86) volume_set_pane_g8

0x6c8d,	// (0x00040f8e) volume_set_pane_g9

0x6c95,	// (0x00040f96) volume_set_pane_g10

0x0009,

0xf947,	// (0x00049c48) volume_set_pane_g

0x7e45,	// (0x00042146) indicator_pane_ParamLimits

0x7e45,	// (0x00042146) indicator_pane

0x7e51,	// (0x00042152) main_idle_pane_g2_ParamLimits

0x7e51,	// (0x00042152) main_idle_pane_g2

0x7e79,	// (0x0004217a) main_pane_idle_g1_ParamLimits

0x7e79,	// (0x0004217a) main_pane_idle_g1

0x7e86,	// (0x00042187) popup_clock_digital_analogue_window_ParamLimits

0x7e86,	// (0x00042187) popup_clock_digital_analogue_window

0x7e9d,	// (0x0004219e) soft_indicator_pane_ParamLimits

0x7e9d,	// (0x0004219e) soft_indicator_pane

0x7ea9,	// (0x000421aa) wallpaper_pane_ParamLimits

0x7ea9,	// (0x000421aa) wallpaper_pane

0x7d02,	// (0x00042003) wallpaper_pane_g1

0x7ebd,	// (0x000421be) indicator_pane_g1_ParamLimits

0x7ebd,	// (0x000421be) indicator_pane_g1

0xb2d1,	// (0x000455d2) navi_navi_icon_text_pane_srt_g1

0x7ed8,	// (0x000421d9) soft_indicator_pane_t1

0x7ef2,	// (0x000421f3) aid_ps_area_pane

0x7f03,	// (0x00042204) aid_ps_clock_pane

0x7f11,	// (0x00042212) aid_ps_indicator_pane

0x7f1d,	// (0x0004221e) indicator_ps_pane_ParamLimits

0x7f1d,	// (0x0004221e) indicator_ps_pane

0x7f2c,	// (0x0004222d) power_save_pane_g1_ParamLimits

0x7f2c,	// (0x0004222d) power_save_pane_g1

0x7f38,	// (0x00042239) power_save_pane_g2_ParamLimits

0x7f38,	// (0x00042239) power_save_pane_g2

0x58a7,	// (0x0003fba8) aid_navinavi_width_pane

0x7ef2,	// (0x000421f3) aid_ps_area_pane_ParamLimits

0x0001,

0xf570,	// (0x00049871) power_save_pane_g_ParamLimits

0xf570,	// (0x00049871) power_save_pane_g

0x7f46,	// (0x00042247) power_save_pane_t1_ParamLimits

0x7f46,	// (0x00042247) power_save_pane_t1

0x7f03,	// (0x00042204) aid_ps_clock_pane_ParamLimits

0x7f11,	// (0x00042212) aid_ps_indicator_pane_ParamLimits

0x7f58,	// (0x00042259) power_save_pane_t4_ParamLimits

0x7f58,	// (0x00042259) power_save_pane_t4

0x0001,

0xf575,	// (0x00049876) power_save_pane_t_ParamLimits

0xf575,	// (0x00049876) power_save_pane_t

0x7f82,	// (0x00042283) power_save_t3_ParamLimits

0x7f82,	// (0x00042283) power_save_t3

0x7f6d,	// (0x0004226e) power_save_t2_ParamLimits

0x7f6d,	// (0x0004226e) power_save_t2

0x7f97,	// (0x00042298) indicator_ps_pane_g1

0x7fa0,	// (0x000422a1) ai_gene_pane_ParamLimits

0x7fa0,	// (0x000422a1) ai_gene_pane

0x7fac,	// (0x000422ad) ai_links_pane_ParamLimits

0x7fac,	// (0x000422ad) ai_links_pane

0x7fb8,	// (0x000422b9) indicator_pane_cp1_ParamLimits

0x7fb8,	// (0x000422b9) indicator_pane_cp1

0x7fc4,	// (0x000422c5) main_pane_idle_g1_cp_ParamLimits

0x7fc4,	// (0x000422c5) main_pane_idle_g1_cp

0x7fd0,	// (0x000422d1) popup_ai_links_title_window

0x7fd9,	// (0x000422da) soft_indicator_pane_cp1_ParamLimits

0x7fd9,	// (0x000422da) soft_indicator_pane_cp1

0xacab,	// (0x00044fac) ai_links_pane_g1

0xacb4,	// (0x00044fb5) grid_ai_links_pane

0xac8e,	// (0x00044f8f) ai_gene_pane_1

0xac99,	// (0x00044f9a) ai_gene_pane_2

0xaca2,	// (0x00044fa3) list_highlight_pane_cp4

0xac72,	// (0x00044f73) cell_ai_link_pane_ParamLimits

0xac72,	// (0x00044f73) cell_ai_link_pane

0xac6a,	// (0x00044f6b) cell_ai_link_pane_g1

0x8209,	// (0x0004250a) cell_ai_link_pane_g2

0x0001,

0xf922,	// (0x00049c23) cell_ai_link_pane_g

0x7d0c,	// (0x0004200d) grid_highlight_cp2

0x7d0c,	// (0x0004200d) bg_popup_sub_pane_cp1

0x7ff3,	// (0x000422f4) popup_ai_links_title_window_t1

0xabb8,	// (0x00044eb9) ai_gene_pane_1_g1_ParamLimits

0xabb8,	// (0x00044eb9) ai_gene_pane_1_g1

0xabc4,	// (0x00044ec5) ai_gene_pane_1_g2_ParamLimits

0xabc4,	// (0x00044ec5) ai_gene_pane_1_g2

0x0001,

0xf918,	// (0x00049c19) ai_gene_pane_1_g_ParamLimits

0xf918,	// (0x00049c19) ai_gene_pane_1_g

0xabd1,	// (0x00044ed2) ai_gene_pane_1_t1_ParamLimits

0xabd1,	// (0x00044ed2) ai_gene_pane_1_t1

0xac05,	// (0x00044f06) grid_ai_soft_ind_pane

0xaba3,	// (0x00044ea4) ai_gene_pane_2_t1_ParamLimits

0xaba3,	// (0x00044ea4) ai_gene_pane_2_t1

0x8002,	// (0x00042303) main_pane_empty_t1_ParamLimits

0x8002,	// (0x00042303) main_pane_empty_t1

0x801a,	// (0x0004231b) main_pane_empty_t2_ParamLimits

0x801a,	// (0x0004231b) main_pane_empty_t2

0x802f,	// (0x00042330) main_pane_empty_t3_ParamLimits

0x802f,	// (0x00042330) main_pane_empty_t3

0x8041,	// (0x00042342) main_pane_empty_t4_ParamLimits

0x8041,	// (0x00042342) main_pane_empty_t4

0x8053,	// (0x00042354) main_pane_empty_t5_ParamLimits

0x8053,	// (0x00042354) main_pane_empty_t5

0x0004,

0xf57a,	// (0x0004987b) main_pane_empty_t_ParamLimits

0xf57a,	// (0x0004987b) main_pane_empty_t

0x8704,	// (0x00042a05) bg_popup_window_pane_ParamLimits

0x8704,	// (0x00042a05) bg_popup_window_pane

0xa913,	// (0x00044c14) find_popup_pane_cp2_ParamLimits

0xa913,	// (0x00044c14) find_popup_pane_cp2

0xa91f,	// (0x00044c20) heading_pane_ParamLimits

0xa91f,	// (0x00044c20) heading_pane

0x7d0c,	// (0x0004200d) bg_popup_sub_pane

0xa88d,	// (0x00044b8e) bg_popup_window_pane_g1_ParamLimits

0xa88d,	// (0x00044b8e) bg_popup_window_pane_g1

0xa899,	// (0x00044b9a) bg_popup_window_pane_g2_ParamLimits

0xa899,	// (0x00044b9a) bg_popup_window_pane_g2

0xa8a5,	// (0x00044ba6) bg_popup_window_pane_g3_ParamLimits

0xa8a5,	// (0x00044ba6) bg_popup_window_pane_g3

0xa8b1,	// (0x00044bb2) bg_popup_window_pane_g4_ParamLimits

0xa8b1,	// (0x00044bb2) bg_popup_window_pane_g4

0xa8bd,	// (0x00044bbe) bg_popup_window_pane_g5_ParamLimits

0xa8bd,	// (0x00044bbe) bg_popup_window_pane_g5

0xa8c9,	// (0x00044bca) bg_popup_window_pane_g6_ParamLimits

0xa8c9,	// (0x00044bca) bg_popup_window_pane_g6

0xa8d5,	// (0x00044bd6) bg_popup_window_pane_g7_ParamLimits

0xa8d5,	// (0x00044bd6) bg_popup_window_pane_g7

0xa8e1,	// (0x00044be2) bg_popup_window_pane_g8_ParamLimits

0xa8e1,	// (0x00044be2) bg_popup_window_pane_g8

0xa8ed,	// (0x00044bee) bg_popup_window_pane_g9_ParamLimits

0xa8ed,	// (0x00044bee) bg_popup_window_pane_g9

0xa8f9,	// (0x00044bfa) bg_popup_window_pane_g10_ParamLimits

0xa8f9,	// (0x00044bfa) bg_popup_window_pane_g10

0x0009,

0xf8e0,	// (0x00049be1) bg_popup_window_pane_g_ParamLimits

0xf8e0,	// (0x00049be1) bg_popup_window_pane_g

0xa822,	// (0x00044b23) bg_popup_heading_pane_ParamLimits

0xa822,	// (0x00044b23) bg_popup_heading_pane

0x6d8d,	// (0x0004108e) tabs_4_passive_pane_cp_srt_ParamLimits

0x6d8d,	// (0x0004108e) tabs_4_passive_pane_cp_srt

0x6d9f,	// (0x000410a0) tabs_4_passive_pane_srt_ParamLimits

0xa836,	// (0x00044b37) heading_pane_g2

0x6d9f,	// (0x000410a0) tabs_4_passive_pane_srt

0x961f,	// (0x00043920) bg_passive_tab_pane_cp3_srt_ParamLimits

0x961f,	// (0x00043920) bg_passive_tab_pane_cp3_srt

0xa83e,	// (0x00044b3f) heading_pane_t1_ParamLimits

0xa83e,	// (0x00044b3f) heading_pane_t1

0xa855,	// (0x00044b56) heading_pane_t2_ParamLimits

0xa855,	// (0x00044b56) heading_pane_t2

0x0001,

0xf8db,	// (0x00049bdc) heading_pane_t_ParamLimits

0xf8db,	// (0x00049bdc) heading_pane_t

0xa34f,	// (0x00044650) bg_popup_heading_pane_g1

0xa3fe,	// (0x000446ff) bg_popup_heading_pane_g2

0xa408,	// (0x00044709) bg_popup_heading_pane_g3

0xa412,	// (0x00044713) bg_popup_heading_pane_g4

0xa41c,	// (0x0004471d) bg_popup_heading_pane_g5

0xa426,	// (0x00044727) bg_popup_heading_pane_g6

0xa42e,	// (0x0004472f) bg_popup_heading_pane_g7

0xa436,	// (0x00044737) bg_popup_heading_pane_g8

0xa440,	// (0x00044741) bg_popup_heading_pane_g9

0x0008,

0xf897,	// (0x00049b98) bg_popup_heading_pane_g

0x9b29,	// (0x00043e2a) bg_popup_sub_pane_g1

0x9b31,	// (0x00043e32) bg_popup_sub_pane_g2

0x9b39,	// (0x00043e3a) bg_popup_sub_pane_g3

0x9b41,	// (0x00043e42) bg_popup_sub_pane_g4

0x9b49,	// (0x00043e4a) bg_popup_sub_pane_g5

0x9b51,	// (0x00043e52) bg_popup_sub_pane_g6

0x9b59,	// (0x00043e5a) bg_popup_sub_pane_g7

0x9b61,	// (0x00043e62) bg_popup_sub_pane_g8

0x9b69,	// (0x00043e6a) bg_popup_sub_pane_g9

0x0008,

0xf871,	// (0x00049b72) bg_popup_sub_pane_g

0x8067,	// (0x00042368) bg_popup_window_pane_cp5_ParamLimits

0x8067,	// (0x00042368) bg_popup_window_pane_cp5

0x8083,	// (0x00042384) popup_note_window_g1_ParamLimits

0x8083,	// (0x00042384) popup_note_window_g1

0x808f,	// (0x00042390) popup_note_window_t1_ParamLimits

0x808f,	// (0x00042390) popup_note_window_t1

0x80a5,	// (0x000423a6) popup_note_window_t2_ParamLimits

0x80a5,	// (0x000423a6) popup_note_window_t2

0x80bb,	// (0x000423bc) popup_note_window_t3_ParamLimits

0x80bb,	// (0x000423bc) popup_note_window_t3

0x80d1,	// (0x000423d2) popup_note_window_t4_ParamLimits

0x80d1,	// (0x000423d2) popup_note_window_t4

0x80f9,	// (0x000423fa) popup_note_window_t5_ParamLimits

0x80f9,	// (0x000423fa) popup_note_window_t5

0x0004,

0xf585,	// (0x00049886) popup_note_window_t_ParamLimits

0xf585,	// (0x00049886) popup_note_window_t

0x811d,	// (0x0004241e) bg_popup_window_pane_cp6_ParamLimits

0x811d,	// (0x0004241e) bg_popup_window_pane_cp6

0xa2cb,	// (0x000445cc) popup_note_image_window_g1_ParamLimits

0xa2cb,	// (0x000445cc) popup_note_image_window_g1

0xa2d7,	// (0x000445d8) popup_note_image_window_g2_ParamLimits

0xa2d7,	// (0x000445d8) popup_note_image_window_g2

0x0001,

0xf865,	// (0x00049b66) popup_note_image_window_g_ParamLimits

0xf865,	// (0x00049b66) popup_note_image_window_g

0xa2f0,	// (0x000445f1) popup_note_image_window_t1_ParamLimits

0xa2f0,	// (0x000445f1) popup_note_image_window_t1

0xa309,	// (0x0004460a) popup_note_image_window_t2_ParamLimits

0xa309,	// (0x0004460a) popup_note_image_window_t2

0xa322,	// (0x00044623) popup_note_image_window_t3_ParamLimits

0xa322,	// (0x00044623) popup_note_image_window_t3

0x0002,

0xf86a,	// (0x00049b6b) popup_note_image_window_t_ParamLimits

0xf86a,	// (0x00049b6b) popup_note_image_window_t

0xa18c,	// (0x0004448d) bg_popup_window_pane_cp7_ParamLimits

0xa18c,	// (0x0004448d) bg_popup_window_pane_cp7

0xa1bc,	// (0x000444bd) popup_note_wait_window_g1_ParamLimits

0xa1bc,	// (0x000444bd) popup_note_wait_window_g1

0xa1c8,	// (0x000444c9) popup_note_wait_window_g2_ParamLimits

0xa1c8,	// (0x000444c9) popup_note_wait_window_g2

0x0002,

0xf853,	// (0x00049b54) popup_note_wait_window_g_ParamLimits

0xf853,	// (0x00049b54) popup_note_wait_window_g

0xa1e0,	// (0x000444e1) popup_note_wait_window_t1_ParamLimits

0xa1e0,	// (0x000444e1) popup_note_wait_window_t1

0xa207,	// (0x00044508) popup_note_wait_window_t2_ParamLimits

0xa207,	// (0x00044508) popup_note_wait_window_t2

0xa224,	// (0x00044525) popup_note_wait_window_t3_ParamLimits

0xa224,	// (0x00044525) popup_note_wait_window_t3

0xa237,	// (0x00044538) popup_note_wait_window_t4_ParamLimits

0xa237,	// (0x00044538) popup_note_wait_window_t4

0x0004,

0xf85a,	// (0x00049b5b) popup_note_wait_window_t_ParamLimits

0xf85a,	// (0x00049b5b) popup_note_wait_window_t

0xa25c,	// (0x0004455d) wait_bar_pane_ParamLimits

0xa25c,	// (0x0004455d) wait_bar_pane

0x7d0c,	// (0x0004200d) wait_anim_pane

0x7d0c,	// (0x0004200d) wait_border_pane

0x7d02,	// (0x00042003) wait_anim_pane_g1

0x7d02,	// (0x00042003) wait_anim_pane_g2

0x0001,

0xf70e,	// (0x00049a0f) wait_anim_pane_g

0xa130,	// (0x00044431) wait_border_pane_g1

0xa13b,	// (0x0004443c) wait_border_pane_g2

0xa144,	// (0x00044445) wait_border_pane_g3

0x0002,

0xf84c,	// (0x00049b4d) wait_border_pane_g

0x9f9b,	// (0x0004429c) bg_popup_window_pane_cp16_ParamLimits

0x9f9b,	// (0x0004429c) bg_popup_window_pane_cp16

0xa09b,	// (0x0004439c) indicator_popup_pane_cp4_ParamLimits

0xa09b,	// (0x0004439c) indicator_popup_pane_cp4

0xa0af,	// (0x000443b0) popup_query_data_window_t1_ParamLimits

0xa0af,	// (0x000443b0) popup_query_data_window_t1

0xa0c1,	// (0x000443c2) popup_query_data_window_t2_ParamLimits

0xa0c1,	// (0x000443c2) popup_query_data_window_t2

0xa0da,	// (0x000443db) popup_query_data_window_t3_ParamLimits

0xa0da,	// (0x000443db) popup_query_data_window_t3

0x0002,

0xf845,	// (0x00049b46) popup_query_data_window_t_ParamLimits

0xf845,	// (0x00049b46) popup_query_data_window_t

0xa0f4,	// (0x000443f5) query_popup_data_pane_ParamLimits

0xa0f4,	// (0x000443f5) query_popup_data_pane

0xa108,	// (0x00044409) query_popup_data_pane_cp1_ParamLimits

0xa108,	// (0x00044409) query_popup_data_pane_cp1

0x9f9b,	// (0x0004429c) bg_popup_window_pane_cp10_ParamLimits

0x9f9b,	// (0x0004429c) bg_popup_window_pane_cp10

0x9fcd,	// (0x000442ce) indicator_popup_pane_ParamLimits

0x9fcd,	// (0x000442ce) indicator_popup_pane

0x9fef,	// (0x000442f0) popup_query_code_window_t1_ParamLimits

0x9fef,	// (0x000442f0) popup_query_code_window_t1

0xa009,	// (0x0004430a) popup_query_code_window_t2_ParamLimits

0xa009,	// (0x0004430a) popup_query_code_window_t2

0xa052,	// (0x00044353) popup_query_code_window_t3_ParamLimits

0xa052,	// (0x00044353) popup_query_code_window_t3

0x0002,

0xf83e,	// (0x00049b3f) popup_query_code_window_t_ParamLimits

0xf83e,	// (0x00049b3f) popup_query_code_window_t

0xa081,	// (0x00044382) query_popup_pane_ParamLimits

0xa081,	// (0x00044382) query_popup_pane

0x811d,	// (0x0004241e) bg_popup_window_pane_cp15_ParamLimits

0x811d,	// (0x0004241e) bg_popup_window_pane_cp15

0x813b,	// (0x0004243c) indicator_popup_pane_cp1_ParamLimits

0x813b,	// (0x0004243c) indicator_popup_pane_cp1

0x814e,	// (0x0004244f) indicator_popup_pane_cp2_ParamLimits

0x814e,	// (0x0004244f) indicator_popup_pane_cp2

0x8161,	// (0x00042462) popup_query_data_code_window_g1_ParamLimits

0x8161,	// (0x00042462) popup_query_data_code_window_g1

0x8174,	// (0x00042475) popup_query_data_code_window_t1_ParamLimits

0x8174,	// (0x00042475) popup_query_data_code_window_t1

0x8186,	// (0x00042487) popup_query_data_code_window_t2_ParamLimits

0x8186,	// (0x00042487) popup_query_data_code_window_t2

0x8198,	// (0x00042499) popup_query_data_code_window_t3_ParamLimits

0x8198,	// (0x00042499) popup_query_data_code_window_t3

0x81ae,	// (0x000424af) popup_query_data_code_window_t4_ParamLimits

0x81ae,	// (0x000424af) popup_query_data_code_window_t4

0x0003,

0xf590,	// (0x00049891) popup_query_data_code_window_t_ParamLimits

0xf590,	// (0x00049891) popup_query_data_code_window_t

0x69fa,	// (0x00040cfb) list_single_midp_graphic_pane_g3

0x81c6,	// (0x000424c7) query_popup_data_pane_cp2_ParamLimits

0x81d9,	// (0x000424da) query_popup_pane_cp2_ParamLimits

0x81d9,	// (0x000424da) query_popup_pane_cp2

0x7d0c,	// (0x0004200d) bg_popup_window_pane_cp11

0x9f93,	// (0x00044294) heading_pane_cp5

0x82c1,	// (0x000425c2) listscroll_popup_info_pane

0x7d0c,	// (0x0004200d) input_focus_pane_cp3

0x81ec,	// (0x000424ed) query_popup_pane_t1

0x81fa,	// (0x000424fb) list_popup_info_pane_ParamLimits

0x81fa,	// (0x000424fb) list_popup_info_pane

0x8209,	// (0x0004250a) listscroll_popup_info_pane_g1

0x8211,	// (0x00042512) scroll_pane_cp7

0x821b,	// (0x0004251c) popup_info_list_pane_t1_ParamLimits

0x821b,	// (0x0004251c) popup_info_list_pane_t1

0x8235,	// (0x00042536) popup_info_list_pane_t2_ParamLimits

0x8235,	// (0x00042536) popup_info_list_pane_t2

0x0001,

0xf599,	// (0x0004989a) popup_info_list_pane_t_ParamLimits

0xf599,	// (0x0004989a) popup_info_list_pane_t

0x7d0c,	// (0x0004200d) bg_popup_window_pane_cp12

0xb2eb,	// (0x000455ec) find_popup_pane

0x7dec,	// (0x000420ed) bg_popup_window_pane_cp3

0x824f,	// (0x00042550) heading_pane_cp3

0x825b,	// (0x0004255c) listscroll_popup_graphic_pane

0x7d0c,	// (0x0004200d) bg_popup_window_pane_cp4

0x82b7,	// (0x000425b8) heading_pane_cp4

0x82c1,	// (0x000425c2) listscroll_popup_colour_pane

0x82c9,	// (0x000425ca) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x82c9,	// (0x000425ca) cell_large_graphic_colour_none_popup_pane

0x82dd,	// (0x000425de) grid_large_graphic_colour_popup_pane_ParamLimits

0x82dd,	// (0x000425de) grid_large_graphic_colour_popup_pane

0x8309,	// (0x0004260a) listscroll_popup_colour_pane_g1_ParamLimits

0x8309,	// (0x0004260a) listscroll_popup_colour_pane_g1

0x8320,	// (0x00042621) listscroll_popup_colour_pane_g2_ParamLimits

0x8320,	// (0x00042621) listscroll_popup_colour_pane_g2

0x8337,	// (0x00042638) listscroll_popup_colour_pane_g3_ParamLimits

0x8337,	// (0x00042638) listscroll_popup_colour_pane_g3

0x8347,	// (0x00042648) listscroll_popup_colour_pane_g4_ParamLimits

0x8347,	// (0x00042648) listscroll_popup_colour_pane_g4

0x0003,

0xf59e,	// (0x0004989f) listscroll_popup_colour_pane_g_ParamLimits

0xf59e,	// (0x0004989f) listscroll_popup_colour_pane_g

0x835b,	// (0x0004265c) scroll_pane_cp6_ParamLimits

0x835b,	// (0x0004265c) scroll_pane_cp6

0x836d,	// (0x0004266e) cell_large_graphic_colour_popup_pane_ParamLimits

0x836d,	// (0x0004266e) cell_large_graphic_colour_popup_pane

0x838c,	// (0x0004268d) cell_large_graphic_colour_none_popup_pane_t1

0x7d0c,	// (0x0004200d) grid_highlight_pane_cp5

0x839b,	// (0x0004269c) cell_large_graphic_colour_popup_pane_g1

0x83a3,	// (0x000426a4) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a7,	// (0x000498a8) cell_large_graphic_colour_popup_pane_g

0x83ab,	// (0x000426ac) cell_large_graphic_colour_popup_pane_g2_copy1

0x83b4,	// (0x000426b5) grid_highlight_pane_cp4

0x83bc,	// (0x000426bd) bg_popup_window_pane_cp8_ParamLimits

0x83bc,	// (0x000426bd) bg_popup_window_pane_cp8

0x83d7,	// (0x000426d8) popup_snote_single_text_window_g1_ParamLimits

0x83d7,	// (0x000426d8) popup_snote_single_text_window_g1

0x83e9,	// (0x000426ea) popup_snote_single_text_window_t1_ParamLimits

0x83e9,	// (0x000426ea) popup_snote_single_text_window_t1

0x83fc,	// (0x000426fd) popup_snote_single_text_window_t2_ParamLimits

0x83fc,	// (0x000426fd) popup_snote_single_text_window_t2

0x840f,	// (0x00042710) popup_snote_single_text_window_t3_ParamLimits

0x840f,	// (0x00042710) popup_snote_single_text_window_t3

0x8448,	// (0x00042749) popup_snote_single_text_window_t4_ParamLimits

0x8448,	// (0x00042749) popup_snote_single_text_window_t4

0x847c,	// (0x0004277d) popup_snote_single_text_window_t5_ParamLimits

0x847c,	// (0x0004277d) popup_snote_single_text_window_t5

0x0004,

0xf5ac,	// (0x000498ad) popup_snote_single_text_window_t_ParamLimits

0xf5ac,	// (0x000498ad) popup_snote_single_text_window_t

0x84ab,	// (0x000427ac) bg_popup_window_pane_cp9_ParamLimits

0x84ab,	// (0x000427ac) bg_popup_window_pane_cp9

0x83d7,	// (0x000426d8) popup_snote_single_graphic_window_g1_ParamLimits

0x83d7,	// (0x000426d8) popup_snote_single_graphic_window_g1

0x84b9,	// (0x000427ba) popup_snote_single_graphic_window_g2_ParamLimits

0x84b9,	// (0x000427ba) popup_snote_single_graphic_window_g2

0x0001,

0xf5b7,	// (0x000498b8) popup_snote_single_graphic_window_g_ParamLimits

0xf5b7,	// (0x000498b8) popup_snote_single_graphic_window_g

0x84c5,	// (0x000427c6) popup_snote_single_graphic_window_t1_ParamLimits

0x84c5,	// (0x000427c6) popup_snote_single_graphic_window_t1

0x84d8,	// (0x000427d9) popup_snote_single_graphic_window_t2_ParamLimits

0x84d8,	// (0x000427d9) popup_snote_single_graphic_window_t2

0x84eb,	// (0x000427ec) popup_snote_single_graphic_window_t3_ParamLimits

0x84eb,	// (0x000427ec) popup_snote_single_graphic_window_t3

0x8524,	// (0x00042825) popup_snote_single_graphic_window_t4_ParamLimits

0x8524,	// (0x00042825) popup_snote_single_graphic_window_t4

0x8558,	// (0x00042859) popup_snote_single_graphic_window_t5_ParamLimits

0x8558,	// (0x00042859) popup_snote_single_graphic_window_t5

0x0004,

0xf5bc,	// (0x000498bd) popup_snote_single_graphic_window_t_ParamLimits

0xf5bc,	// (0x000498bd) popup_snote_single_graphic_window_t

0xb22f,	// (0x00045530) grid_graphic_popup_pane_ParamLimits

0xb22f,	// (0x00045530) grid_graphic_popup_pane

0xb257,	// (0x00045558) listscroll_popup_graphic_pane_g1_ParamLimits

0xb257,	// (0x00045558) listscroll_popup_graphic_pane_g1

0xb26b,	// (0x0004556c) listscroll_popup_graphic_pane_g2_ParamLimits

0xb26b,	// (0x0004556c) listscroll_popup_graphic_pane_g2

0x0001,

0xf9bb,	// (0x00049cbc) listscroll_popup_graphic_pane_g_ParamLimits

0xf9bb,	// (0x00049cbc) listscroll_popup_graphic_pane_g

0xb27f,	// (0x00045580) scroll_pane_cp5

0xb1d8,	// (0x000454d9) cell_graphic_popup_pane_ParamLimits

0xb1d8,	// (0x000454d9) cell_graphic_popup_pane

0xb1b9,	// (0x000454ba) cell_graphic_popup_pane_g1

0xb1c1,	// (0x000454c2) cell_graphic_popup_pane_g2

0x83ab,	// (0x000426ac) cell_graphic_popup_pane_g3

0x0002,

0xf9b4,	// (0x00049cb5) cell_graphic_popup_pane_g

0xb1ca,	// (0x000454cb) cell_graphic_popup_pane_t2

0x83b4,	// (0x000426b5) grid_highlight_pane_cp3

0x8599,	// (0x0004289a) list_gen_pane_ParamLimits

0x8599,	// (0x0004289a) list_gen_pane

0x85cb,	// (0x000428cc) scroll_pane

0xb111,	// (0x00045412) bg_list_pane_g1_ParamLimits

0xb111,	// (0x00045412) bg_list_pane_g1

0xb12e,	// (0x0004542f) bg_list_pane_g2_ParamLimits

0xb12e,	// (0x0004542f) bg_list_pane_g2

0xb143,	// (0x00045444) bg_list_pane_g3_ParamLimits

0xb143,	// (0x00045444) bg_list_pane_g3

0xb157,	// (0x00045458) bg_list_pane_g4_ParamLimits

0xb157,	// (0x00045458) bg_list_pane_g4

0xb16b,	// (0x0004546c) bg_list_pane_g5_ParamLimits

0xb16b,	// (0x0004546c) bg_list_pane_g5

0x0004,

0xf9a9,	// (0x00049caa) bg_list_pane_g_ParamLimits

0xf9a9,	// (0x00049caa) bg_list_pane_g

0x6cd3,	// (0x00040fd4) list_double2_graphic_large_graphic_pane_ParamLimits

0x6cd3,	// (0x00040fd4) list_double2_graphic_large_graphic_pane

0x6cd3,	// (0x00040fd4) list_double2_graphic_pane_ParamLimits

0x6cd3,	// (0x00040fd4) list_double2_graphic_pane

0x6cd3,	// (0x00040fd4) list_double2_large_graphic_pane_ParamLimits

0x6cd3,	// (0x00040fd4) list_double2_large_graphic_pane

0x6cd3,	// (0x00040fd4) list_double2_pane_ParamLimits

0x6cd3,	// (0x00040fd4) list_double2_pane

0x6cd3,	// (0x00040fd4) list_double_graphic_heading_pane_ParamLimits

0x6cd3,	// (0x00040fd4) list_double_graphic_heading_pane

0x6cd3,	// (0x00040fd4) list_double_graphic_pane_ParamLimits

0x6cd3,	// (0x00040fd4) list_double_graphic_pane

0x6cd3,	// (0x00040fd4) list_double_heading_pane_ParamLimits

0x6cd3,	// (0x00040fd4) list_double_heading_pane

0x6cd3,	// (0x00040fd4) list_double_large_graphic_pane_ParamLimits

0x6cd3,	// (0x00040fd4) list_double_large_graphic_pane

0x6cd3,	// (0x00040fd4) list_double_number_pane_ParamLimits

0x6cd3,	// (0x00040fd4) list_double_number_pane

0x6cd3,	// (0x00040fd4) list_double_pane_ParamLimits

0x6cd3,	// (0x00040fd4) list_double_pane

0x6cd3,	// (0x00040fd4) list_double_time_pane_ParamLimits

0x6cd3,	// (0x00040fd4) list_double_time_pane

0x6cd3,	// (0x00040fd4) list_setting_number_pane_ParamLimits

0x6cd3,	// (0x00040fd4) list_setting_number_pane

0x6cd3,	// (0x00040fd4) list_setting_pane_ParamLimits

0x6cd3,	// (0x00040fd4) list_setting_pane

0x6d0c,	// (0x0004100d) list_single_2graphic_pane_ParamLimits

0x6d0c,	// (0x0004100d) list_single_2graphic_pane

0x6d0c,	// (0x0004100d) list_single_graphic_heading_pane_ParamLimits

0x6d0c,	// (0x0004100d) list_single_graphic_heading_pane

0x6d0c,	// (0x0004100d) list_single_graphic_pane_ParamLimits

0x6d0c,	// (0x0004100d) list_single_graphic_pane

0x6d0c,	// (0x0004100d) list_single_heading_pane_ParamLimits

0x6d0c,	// (0x0004100d) list_single_heading_pane

0x6d4a,	// (0x0004104b) list_single_large_graphic_pane_ParamLimits

0x6d4a,	// (0x0004104b) list_single_large_graphic_pane

0x6d0c,	// (0x0004100d) list_single_number_heading_pane_ParamLimits

0x6d0c,	// (0x0004100d) list_single_number_heading_pane

0x6d0c,	// (0x0004100d) list_single_number_pane_ParamLimits

0x6d0c,	// (0x0004100d) list_single_number_pane

0x6d0c,	// (0x0004100d) list_single_pane_ParamLimits

0x6d0c,	// (0x0004100d) list_single_pane

0x7d0c,	// (0x0004200d) list_highlight_pane_cp1

0x5d27,	// (0x00040028) list_single_pane_g1_ParamLimits

0x5d27,	// (0x00040028) list_single_pane_g1

0x5d33,	// (0x00040034) list_single_pane_g2_ParamLimits

0x5d33,	// (0x00040034) list_single_pane_g2

0x0001,

0xf5d8,	// (0x000498d9) list_single_pane_g_ParamLimits

0xf5d8,	// (0x000498d9) list_single_pane_g

0x52ec,	// (0x0003f5ed) list_single_pane_t1_ParamLimits

0x52ec,	// (0x0003f5ed) list_single_pane_t1

0x5d27,	// (0x00040028) list_single_number_pane_g1_ParamLimits

0x5d27,	// (0x00040028) list_single_number_pane_g1

0x5d33,	// (0x00040034) list_single_number_pane_g2_ParamLimits

0x5d33,	// (0x00040034) list_single_number_pane_g2

0x0001,

0xf5d8,	// (0x000498d9) list_single_number_pane_g_ParamLimits

0xf5d8,	// (0x000498d9) list_single_number_pane_g

0x5294,	// (0x0003f595) list_single_number_pane_t1_ParamLimits

0x5294,	// (0x0003f595) list_single_number_pane_t1

0x52aa,	// (0x0003f5ab) list_single_number_pane_t2_ParamLimits

0x52aa,	// (0x0003f5ab) list_single_number_pane_t2

0x0001,

0xf96a,	// (0x00049c6b) list_single_number_pane_t_ParamLimits

0xf96a,	// (0x00049c6b) list_single_number_pane_t

0x49db,	// (0x0003ecdc) list_single_graphic_pane_g1_ParamLimits

0x49db,	// (0x0003ecdc) list_single_graphic_pane_g1

0x5d27,	// (0x00040028) list_single_graphic_pane_g2_ParamLimits

0x5d27,	// (0x00040028) list_single_graphic_pane_g2

0x5d33,	// (0x00040034) list_single_graphic_pane_g3_ParamLimits

0x5d33,	// (0x00040034) list_single_graphic_pane_g3

0x0002,

0xf5c7,	// (0x000498c8) list_single_graphic_pane_g_ParamLimits

0xf5c7,	// (0x000498c8) list_single_graphic_pane_g

0x49e7,	// (0x0003ece8) list_single_graphic_pane_t1_ParamLimits

0x49e7,	// (0x0003ece8) list_single_graphic_pane_t1

0x49fd,	// (0x0003ecfe) list_single_heading_pane_g1_ParamLimits

0x49fd,	// (0x0003ecfe) list_single_heading_pane_g1

0x5d33,	// (0x00040034) list_single_heading_pane_g2_ParamLimits

0x5d33,	// (0x00040034) list_single_heading_pane_g2

0x0001,

0xf5ce,	// (0x000498cf) list_single_heading_pane_g_ParamLimits

0xf5ce,	// (0x000498cf) list_single_heading_pane_g

0x4a10,	// (0x0003ed11) list_single_heading_pane_t1_ParamLimits

0x4a10,	// (0x0003ed11) list_single_heading_pane_t1

0x5d3f,	// (0x00040040) list_single_heading_pane_t2_ParamLimits

0x5d3f,	// (0x00040040) list_single_heading_pane_t2

0x0001,

0xf5d3,	// (0x000498d4) list_single_heading_pane_t_ParamLimits

0xf5d3,	// (0x000498d4) list_single_heading_pane_t

0x5d27,	// (0x00040028) list_single_number_heading_pane_g1_ParamLimits

0x5d27,	// (0x00040028) list_single_number_heading_pane_g1

0x5d33,	// (0x00040034) list_single_number_heading_pane_g2_ParamLimits

0x5d33,	// (0x00040034) list_single_number_heading_pane_g2

0x0001,

0xf5d8,	// (0x000498d9) list_single_number_heading_pane_g_ParamLimits

0xf5d8,	// (0x000498d9) list_single_number_heading_pane_g

0x4a26,	// (0x0003ed27) list_single_number_heading_pane_t1_ParamLimits

0x4a26,	// (0x0003ed27) list_single_number_heading_pane_t1

0x4a3c,	// (0x0003ed3d) list_single_number_heading_pane_t2_ParamLimits

0x4a3c,	// (0x0003ed3d) list_single_number_heading_pane_t2

0x4a4e,	// (0x0003ed4f) list_single_number_heading_pane_t3_ParamLimits

0x4a4e,	// (0x0003ed4f) list_single_number_heading_pane_t3

0x0002,

0xf5dd,	// (0x000498de) list_single_number_heading_pane_t_ParamLimits

0xf5dd,	// (0x000498de) list_single_number_heading_pane_t

0x4a60,	// (0x0003ed61) list_single_graphic_heading_pane_g1_ParamLimits

0x4a60,	// (0x0003ed61) list_single_graphic_heading_pane_g1

0x5d51,	// (0x00040052) list_single_graphic_heading_pane_g4_ParamLimits

0x5d51,	// (0x00040052) list_single_graphic_heading_pane_g4

0x5d33,	// (0x00040034) list_single_graphic_heading_pane_g5_ParamLimits

0x5d33,	// (0x00040034) list_single_graphic_heading_pane_g5

0x0002,

0xf5e4,	// (0x000498e5) list_single_graphic_heading_pane_g_ParamLimits

0xf5e4,	// (0x000498e5) list_single_graphic_heading_pane_g

0x4a26,	// (0x0003ed27) list_single_graphic_heading_pane_t1_ParamLimits

0x4a26,	// (0x0003ed27) list_single_graphic_heading_pane_t1

0x4a78,	// (0x0003ed79) list_single_graphic_heading_pane_t2_ParamLimits

0x4a78,	// (0x0003ed79) list_single_graphic_heading_pane_t2

0x0001,

0xf5eb,	// (0x000498ec) list_single_graphic_heading_pane_t_ParamLimits

0xf5eb,	// (0x000498ec) list_single_graphic_heading_pane_t

0x5d62,	// (0x00040063) list_single_large_graphic_pane_g1_ParamLimits

0x5d62,	// (0x00040063) list_single_large_graphic_pane_g1

0x5d6e,	// (0x0004006f) list_single_large_graphic_pane_g2_ParamLimits

0x5d6e,	// (0x0004006f) list_single_large_graphic_pane_g2

0x5d7a,	// (0x0004007b) list_single_large_graphic_pane_g3_ParamLimits

0x5d7a,	// (0x0004007b) list_single_large_graphic_pane_g3

0x0002,

0xf5f0,	// (0x000498f1) list_single_large_graphic_pane_g_ParamLimits

0xf5f0,	// (0x000498f1) list_single_large_graphic_pane_g

0xa13b,	// (0x0004443c) wait_border_pane_g2_copy1

0x5d86,	// (0x00040087) list_single_large_graphic_pane_g4_cp2

0x4a8e,	// (0x0003ed8f) list_single_large_graphic_pane_t1_ParamLimits

0x4a8e,	// (0x0003ed8f) list_single_large_graphic_pane_t1

0x85ff,	// (0x00042900) list_double_pane_g1_ParamLimits

0x85ff,	// (0x00042900) list_double_pane_g1

0x5d8e,	// (0x0004008f) list_double_pane_g2_ParamLimits

0x5d8e,	// (0x0004008f) list_double_pane_g2

0x0001,

0xf5f7,	// (0x000498f8) list_double_pane_g_ParamLimits

0xf5f7,	// (0x000498f8) list_double_pane_g

0x4aa4,	// (0x0003eda5) list_double_pane_t1_ParamLimits

0x4aa4,	// (0x0003eda5) list_double_pane_t1

0x4aba,	// (0x0003edbb) list_double_pane_t2_ParamLimits

0x4aba,	// (0x0003edbb) list_double_pane_t2

0x0001,

0xf5fc,	// (0x000498fd) list_double_pane_t_ParamLimits

0xf5fc,	// (0x000498fd) list_double_pane_t

0x4acc,	// (0x0003edcd) list_double2_pane_g1_ParamLimits

0x4acc,	// (0x0003edcd) list_double2_pane_g1

0x4add,	// (0x0003edde) list_double2_pane_g2_ParamLimits

0x4add,	// (0x0003edde) list_double2_pane_g2

0x0001,

0xf601,	// (0x00049902) list_double2_pane_g_ParamLimits

0xf601,	// (0x00049902) list_double2_pane_g

0x4ae9,	// (0x0003edea) list_double2_pane_t1_ParamLimits

0x4ae9,	// (0x0003edea) list_double2_pane_t1

0x4aff,	// (0x0003ee00) list_double2_pane_t2_ParamLimits

0x4aff,	// (0x0003ee00) list_double2_pane_t2

0x0001,

0xf606,	// (0x00049907) list_double2_pane_t_ParamLimits

0xf606,	// (0x00049907) list_double2_pane_t

0x85ff,	// (0x00042900) list_double_number_pane_g1_ParamLimits

0x85ff,	// (0x00042900) list_double_number_pane_g1

0x5d8e,	// (0x0004008f) list_double_number_pane_g2_ParamLimits

0x5d8e,	// (0x0004008f) list_double_number_pane_g2

0x0001,

0xf5f7,	// (0x000498f8) list_double_number_pane_g_ParamLimits

0xf5f7,	// (0x000498f8) list_double_number_pane_g

0x4b11,	// (0x0003ee12) list_double_number_pane_t1_ParamLimits

0x4b11,	// (0x0003ee12) list_double_number_pane_t1

0x4b23,	// (0x0003ee24) list_double_number_pane_t2_ParamLimits

0x4b23,	// (0x0003ee24) list_double_number_pane_t2

0x4b39,	// (0x0003ee3a) list_double_number_pane_t3_ParamLimits

0x4b39,	// (0x0003ee3a) list_double_number_pane_t3

0x0002,

0xf60b,	// (0x0004990c) list_double_number_pane_t_ParamLimits

0xf60b,	// (0x0004990c) list_double_number_pane_t

0x4b4b,	// (0x0003ee4c) list_double_graphic_pane_g1_ParamLimits

0x4b4b,	// (0x0003ee4c) list_double_graphic_pane_g1

0x4b57,	// (0x0003ee58) list_double_graphic_pane_g2_ParamLimits

0x4b57,	// (0x0003ee58) list_double_graphic_pane_g2

0x4b66,	// (0x0003ee67) list_double_graphic_pane_g3_ParamLimits

0x4b66,	// (0x0003ee67) list_double_graphic_pane_g3

0x0003,

0xf612,	// (0x00049913) list_double_graphic_pane_g_ParamLimits

0xf612,	// (0x00049913) list_double_graphic_pane_g

0x4b7e,	// (0x0003ee7f) list_double_graphic_pane_t1_ParamLimits

0x4b7e,	// (0x0003ee7f) list_double_graphic_pane_t1

0x4b94,	// (0x0003ee95) list_double_graphic_pane_t2_ParamLimits

0x4b94,	// (0x0003ee95) list_double_graphic_pane_t2

0x0001,

0xf61b,	// (0x0004991c) list_double_graphic_pane_t_ParamLimits

0xf61b,	// (0x0004991c) list_double_graphic_pane_t

0x4ba6,	// (0x0003eea7) list_double2_graphic_pane_g1_ParamLimits

0x4ba6,	// (0x0003eea7) list_double2_graphic_pane_g1

0x9e24,	// (0x00044125) list_double2_graphic_pane_g2_ParamLimits

0x9e24,	// (0x00044125) list_double2_graphic_pane_g2

0x5d9a,	// (0x0004009b) list_double2_graphic_pane_g3_ParamLimits

0x5d9a,	// (0x0004009b) list_double2_graphic_pane_g3

0x0002,

0xf620,	// (0x00049921) list_double2_graphic_pane_g_ParamLimits

0xf620,	// (0x00049921) list_double2_graphic_pane_g

0x4bb2,	// (0x0003eeb3) list_double2_graphic_pane_t1_ParamLimits

0x4bb2,	// (0x0003eeb3) list_double2_graphic_pane_t1

0x4bc8,	// (0x0003eec9) list_double2_graphic_pane_t2_ParamLimits

0x4bc8,	// (0x0003eec9) list_double2_graphic_pane_t2

0x0001,

0xf627,	// (0x00049928) list_double2_graphic_pane_t_ParamLimits

0xf627,	// (0x00049928) list_double2_graphic_pane_t

0x4bda,	// (0x0003eedb) list_double_large_graphic_pane_g1_ParamLimits

0x4bda,	// (0x0003eedb) list_double_large_graphic_pane_g1

0x4bf9,	// (0x0003eefa) list_double_large_graphic_pane_g2_ParamLimits

0x4bf9,	// (0x0003eefa) list_double_large_graphic_pane_g2

0x5d8e,	// (0x0004008f) list_double_large_graphic_pane_g3_ParamLimits

0x5d8e,	// (0x0004008f) list_double_large_graphic_pane_g3

0x4c0f,	// (0x0003ef10) list_double_large_graphic_pane_g4_ParamLimits

0x4c0f,	// (0x0003ef10) list_double_large_graphic_pane_g4

0x0004,

0xf62c,	// (0x0004992d) list_double_large_graphic_pane_g_ParamLimits

0xf62c,	// (0x0004992d) list_double_large_graphic_pane_g

0x4c20,	// (0x0003ef21) list_double_large_graphic_pane_t1_ParamLimits

0x4c20,	// (0x0003ef21) list_double_large_graphic_pane_t1

0x4c39,	// (0x0003ef3a) list_double_large_graphic_pane_t2_ParamLimits

0x4c39,	// (0x0003ef3a) list_double_large_graphic_pane_t2

0x0001,

0xf637,	// (0x00049938) list_double_large_graphic_pane_t_ParamLimits

0xf637,	// (0x00049938) list_double_large_graphic_pane_t

0x5dbb,	// (0x000400bc) list_double2_large_graphic_pane_g1_ParamLimits

0x5dbb,	// (0x000400bc) list_double2_large_graphic_pane_g1

0x4c4b,	// (0x0003ef4c) list_double2_large_graphic_pane_g2_ParamLimits

0x4c4b,	// (0x0003ef4c) list_double2_large_graphic_pane_g2

0x5d9a,	// (0x0004009b) list_double2_large_graphic_pane_g3_ParamLimits

0x5d9a,	// (0x0004009b) list_double2_large_graphic_pane_g3

0x0002,

0xf63c,	// (0x0004993d) list_double2_large_graphic_pane_g_ParamLimits

0xf63c,	// (0x0004993d) list_double2_large_graphic_pane_g

0x4c5c,	// (0x0003ef5d) list_double2_large_graphic_pane_t1_ParamLimits

0x4c5c,	// (0x0003ef5d) list_double2_large_graphic_pane_t1

0x4c72,	// (0x0003ef73) list_double2_large_graphic_pane_t2_ParamLimits

0x4c72,	// (0x0003ef73) list_double2_large_graphic_pane_t2

0x0001,

0xf643,	// (0x00049944) list_double2_large_graphic_pane_t_ParamLimits

0xf643,	// (0x00049944) list_double2_large_graphic_pane_t

0x4c84,	// (0x0003ef85) list_double_heading_pane_g1_ParamLimits

0x4c84,	// (0x0003ef85) list_double_heading_pane_g1

0x5dc7,	// (0x000400c8) list_double_heading_pane_g2_ParamLimits

0x5dc7,	// (0x000400c8) list_double_heading_pane_g2

0x0001,

0xf648,	// (0x00049949) list_double_heading_pane_g_ParamLimits

0xf648,	// (0x00049949) list_double_heading_pane_g

0x4c95,	// (0x0003ef96) list_double_heading_pane_t1_ParamLimits

0x4c95,	// (0x0003ef96) list_double_heading_pane_t1

0x4aff,	// (0x0003ee00) list_double_heading_pane_t2_ParamLimits

0x4aff,	// (0x0003ee00) list_double_heading_pane_t2

0x0001,

0xf64d,	// (0x0004994e) list_double_heading_pane_t_ParamLimits

0xf64d,	// (0x0004994e) list_double_heading_pane_t

0x4cab,	// (0x0003efac) list_double_graphic_heading_pane_g1_ParamLimits

0x4cab,	// (0x0003efac) list_double_graphic_heading_pane_g1

0x4c84,	// (0x0003ef85) list_double_graphic_heading_pane_g2_ParamLimits

0x4c84,	// (0x0003ef85) list_double_graphic_heading_pane_g2

0x5dc7,	// (0x000400c8) list_double_graphic_heading_pane_g3_ParamLimits

0x5dc7,	// (0x000400c8) list_double_graphic_heading_pane_g3

0x0002,

0xf652,	// (0x00049953) list_double_graphic_heading_pane_g_ParamLimits

0xf652,	// (0x00049953) list_double_graphic_heading_pane_g

0x4cb7,	// (0x0003efb8) list_double_graphic_heading_pane_t1_ParamLimits

0x4cb7,	// (0x0003efb8) list_double_graphic_heading_pane_t1

0x4bc8,	// (0x0003eec9) list_double_graphic_heading_pane_t2_ParamLimits

0x4bc8,	// (0x0003eec9) list_double_graphic_heading_pane_t2

0x0001,

0xf659,	// (0x0004995a) list_double_graphic_heading_pane_t_ParamLimits

0xf659,	// (0x0004995a) list_double_graphic_heading_pane_t

0x4ccd,	// (0x0003efce) list_double_time_pane_g1_ParamLimits

0x4ccd,	// (0x0003efce) list_double_time_pane_g1

0x4cde,	// (0x0003efdf) list_double_time_pane_g2_ParamLimits

0x4cde,	// (0x0003efdf) list_double_time_pane_g2

0x0001,

0xf65e,	// (0x0004995f) list_double_time_pane_g_ParamLimits

0xf65e,	// (0x0004995f) list_double_time_pane_g

0x4cea,	// (0x0003efeb) list_double_time_pane_t1_ParamLimits

0x4cea,	// (0x0003efeb) list_double_time_pane_t1

0x4d00,	// (0x0003f001) list_double_time_pane_t2_ParamLimits

0x4d00,	// (0x0003f001) list_double_time_pane_t2

0x4d12,	// (0x0003f013) list_double_time_pane_t3_ParamLimits

0x4d12,	// (0x0003f013) list_double_time_pane_t3

0x4d24,	// (0x0003f025) list_double_time_pane_t4_ParamLimits

0x4d24,	// (0x0003f025) list_double_time_pane_t4

0x0003,

0xf663,	// (0x00049964) list_double_time_pane_t_ParamLimits

0xf663,	// (0x00049964) list_double_time_pane_t

0x4d36,	// (0x0003f037) list_setting_pane_g1_ParamLimits

0x4d36,	// (0x0003f037) list_setting_pane_g1

0x4add,	// (0x0003edde) list_setting_pane_g2_ParamLimits

0x4add,	// (0x0003edde) list_setting_pane_g2

0x0001,

0xf66c,	// (0x0004996d) list_setting_pane_g_ParamLimits

0xf66c,	// (0x0004996d) list_setting_pane_g

0x4d42,	// (0x0003f043) list_setting_pane_t1_ParamLimits

0x4d42,	// (0x0003f043) list_setting_pane_t1

0x4d5c,	// (0x0003f05d) list_setting_pane_t2_ParamLimits

0x4d5c,	// (0x0003f05d) list_setting_pane_t2

0x0002,

0xf671,	// (0x00049972) list_setting_pane_t_ParamLimits

0xf671,	// (0x00049972) list_setting_pane_t

0x4d9b,	// (0x0003f09c) set_value_pane_cp_ParamLimits

0x4d9b,	// (0x0003f09c) set_value_pane_cp

0x4da7,	// (0x0003f0a8) list_setting_number_pane_g1_ParamLimits

0x4da7,	// (0x0003f0a8) list_setting_number_pane_g1

0x4db3,	// (0x0003f0b4) list_setting_number_pane_g2_ParamLimits

0x4db3,	// (0x0003f0b4) list_setting_number_pane_g2

0x0001,

0xf678,	// (0x00049979) list_setting_number_pane_g_ParamLimits

0xf678,	// (0x00049979) list_setting_number_pane_g

0x4dbf,	// (0x0003f0c0) list_setting_number_pane_t1_ParamLimits

0x4dbf,	// (0x0003f0c0) list_setting_number_pane_t1

0x4dd8,	// (0x0003f0d9) list_setting_number_pane_t2_ParamLimits

0x4dd8,	// (0x0003f0d9) list_setting_number_pane_t2

0x4df2,	// (0x0003f0f3) list_setting_number_pane_t3_ParamLimits

0x4df2,	// (0x0003f0f3) list_setting_number_pane_t3

0x0003,

0xf67d,	// (0x0004997e) list_setting_number_pane_t_ParamLimits

0xf67d,	// (0x0004997e) list_setting_number_pane_t

0x4d9b,	// (0x0003f09c) set_value_pane_ParamLimits

0x4d9b,	// (0x0003f09c) set_value_pane

0x860b,	// (0x0004290c) bg_set_opt_pane_ParamLimits

0x860b,	// (0x0004290c) bg_set_opt_pane

0x4e35,	// (0x0003f136) set_value_pane_t1

0x862c,	// (0x0004292d) slider_set_pane_cp3

0x8635,	// (0x00042936) volume_small_pane_cp

0x863e,	// (0x0004293f) list_form_gen_pane

0x8647,	// (0x00042948) scroll_pane_cp8

0x4e4b,	// (0x0003f14c) form_field_data_pane_ParamLimits

0x4e4b,	// (0x0003f14c) form_field_data_pane

0x4e6f,	// (0x0003f170) form_field_data_wide_pane_ParamLimits

0x4e6f,	// (0x0003f170) form_field_data_wide_pane

0x4e92,	// (0x0003f193) form_field_popup_pane_ParamLimits

0x4e92,	// (0x0003f193) form_field_popup_pane

0x4eb2,	// (0x0003f1b3) form_field_popup_wide_pane_ParamLimits

0x4eb2,	// (0x0003f1b3) form_field_popup_wide_pane

0x4ed1,	// (0x0003f1d2) form_field_slider_pane_ParamLimits

0x4ed1,	// (0x0003f1d2) form_field_slider_pane

0x4ee4,	// (0x0003f1e5) form_field_slider_wide_pane_ParamLimits

0x4ee4,	// (0x0003f1e5) form_field_slider_wide_pane

0x8658,	// (0x00042959) data_form_pane

0x4f01,	// (0x0003f202) form_field_data_pane_t1

0x8664,	// (0x00042965) input_focus_pane

0x4f19,	// (0x0003f21a) data_form_wide_pane

0x4f36,	// (0x0003f237) form_field_data_wide_pane_t1

0x83c9,	// (0x000426ca) input_focus_pane_cp6

0x4f58,	// (0x0003f259) form_field_popup_pane_t1

0x8664,	// (0x00042965) input_focus_pane_cp7

0x8686,	// (0x00042987) list_form_pane

0x4f78,	// (0x0003f279) form_field_popup_wide_pane_t1

0x8664,	// (0x00042965) input_focus_pane_cp8

0x8692,	// (0x00042993) list_form_wide_pane

0x4f95,	// (0x0003f296) form_field_slider_pane_t1_ParamLimits

0x4f95,	// (0x0003f296) form_field_slider_pane_t1

0x4fab,	// (0x0003f2ac) form_field_slider_pane_t2_ParamLimits

0x4fab,	// (0x0003f2ac) form_field_slider_pane_t2

0x0001,

0xf68d,	// (0x0004998e) form_field_slider_pane_t_ParamLimits

0xf68d,	// (0x0004998e) form_field_slider_pane_t

0x8067,	// (0x00042368) input_focus_pane_cp9_ParamLimits

0x8067,	// (0x00042368) input_focus_pane_cp9

0x4fc0,	// (0x0003f2c1) slider_cont_pane_ParamLimits

0x4fc0,	// (0x0003f2c1) slider_cont_pane

0x86a1,	// (0x000429a2) form_field_slider_wide_pane_t1_ParamLimits

0x86a1,	// (0x000429a2) form_field_slider_wide_pane_t1

0x4fd4,	// (0x0003f2d5) form_field_slider_wide_pane_t2_ParamLimits

0x4fd4,	// (0x0003f2d5) form_field_slider_wide_pane_t2

0x0001,

0xf692,	// (0x00049993) form_field_slider_wide_pane_t_ParamLimits

0xf692,	// (0x00049993) form_field_slider_wide_pane_t

0x8067,	// (0x00042368) input_focus_pane_cp10_ParamLimits

0x8067,	// (0x00042368) input_focus_pane_cp10

0x4fe6,	// (0x0003f2e7) slider_cont_pane_cp1_ParamLimits

0x4fe6,	// (0x0003f2e7) slider_cont_pane_cp1

0x4ffa,	// (0x0003f2fb) slider_form_pane_cp

0x86b3,	// (0x000429b4) input_focus_pane_g1

0x86bb,	// (0x000429bc) input_focus_pane_g2

0x86c3,	// (0x000429c4) input_focus_pane_g3

0x86cb,	// (0x000429cc) input_focus_pane_g4

0x86d3,	// (0x000429d4) input_focus_pane_g5

0x86db,	// (0x000429dc) input_focus_pane_g6

0x86e3,	// (0x000429e4) input_focus_pane_g7

0x86eb,	// (0x000429ec) input_focus_pane_g8

0x86f3,	// (0x000429f4) input_focus_pane_g9

0x7d02,	// (0x00042003) input_focus_pane_g10

0x0009,

0xf697,	// (0x00049998) input_focus_pane_g

0xa144,	// (0x00044445) wait_border_pane_g3_copy1

0x5002,	// (0x0003f303) data_form_pane_t1

0x7d02,	// (0x00042003) wait_anim_pane_g1_copy1

0x52bc,	// (0x0003f5bd) data_form_wide_pane_t1

0x501d,	// (0x0003f31e) list_form_graphic_pane_cp_ParamLimits

0x501d,	// (0x0003f31e) list_form_graphic_pane_cp

0xb0a3,	// (0x000453a4) slider_form_pane_g1

0xb0ac,	// (0x000453ad) slider_form_pane_g2

0x0006,

0xf99a,	// (0x00049c9b) slider_form_pane_g

0x5036,	// (0x0003f337) list_form_graphic_pane_ParamLimits

0x5036,	// (0x0003f337) list_form_graphic_pane

0x5052,	// (0x0003f353) list_form_graphic_pane_g1

0x505a,	// (0x0003f35b) list_form_graphic_pane_t1_ParamLimits

0x505a,	// (0x0003f35b) list_form_graphic_pane_t1

0x7dec,	// (0x000420ed) list_highlight_pane_cp5_ParamLimits

0x7dec,	// (0x000420ed) list_highlight_pane_cp5

0x506f,	// (0x0003f370) find_pane_g1

0x86fb,	// (0x000429fc) input_find_pane

0x5078,	// (0x0003f379) input_find_pane_g1_ParamLimits

0x5078,	// (0x0003f379) input_find_pane_g1

0x5084,	// (0x0003f385) input_find_pane_t1_ParamLimits

0x5084,	// (0x0003f385) input_find_pane_t1

0x5099,	// (0x0003f39a) input_find_pane_t2_ParamLimits

0x5099,	// (0x0003f39a) input_find_pane_t2

0x0001,

0xf6ac,	// (0x000499ad) input_find_pane_t_ParamLimits

0xf6ac,	// (0x000499ad) input_find_pane_t

0x8704,	// (0x00042a05) input_focus_pane_cp5_ParamLimits

0x8704,	// (0x00042a05) input_focus_pane_cp5

0x871e,	// (0x00042a1f) bg_popup_window_pane_cp2_ParamLimits

0x871e,	// (0x00042a1f) bg_popup_window_pane_cp2

0x872b,	// (0x00042a2c) listscroll_menu_pane_ParamLimits

0x872b,	// (0x00042a2c) listscroll_menu_pane

0x8737,	// (0x00042a38) popup_submenu_window_ParamLimits

0x8737,	// (0x00042a38) popup_submenu_window

0x8763,	// (0x00042a64) find_popup_pane_g1

0x876b,	// (0x00042a6c) input_popup_find_pane_cp

0x8704,	// (0x00042a05) input_focus_pane_cp4_ParamLimits

0x8704,	// (0x00042a05) input_focus_pane_cp4

0x8781,	// (0x00042a82) input_popup_find_pane_t1_ParamLimits

0x8781,	// (0x00042a82) input_popup_find_pane_t1

0x7d0c,	// (0x0004200d) bg_popup_sub_pane_cp

0x87af,	// (0x00042ab0) listscroll_popup_sub_pane

0x87b7,	// (0x00042ab8) list_submenu_pane_ParamLimits

0x87b7,	// (0x00042ab8) list_submenu_pane

0x87c8,	// (0x00042ac9) scroll_pane_cp4

0x87d0,	// (0x00042ad1) list_single_popup_submenu_pane_ParamLimits

0x87d0,	// (0x00042ad1) list_single_popup_submenu_pane

0x87e4,	// (0x00042ae5) list_single_popup_submenu_pane_g1

0x87ec,	// (0x00042aed) list_single_popup_submenu_pane_t1_ParamLimits

0x87ec,	// (0x00042aed) list_single_popup_submenu_pane_t1

0x7dec,	// (0x000420ed) bg_active_tab_pane_cp1_ParamLimits

0x7dec,	// (0x000420ed) bg_active_tab_pane_cp1

0x8801,	// (0x00042b02) tabs_2_active_pane_g1

0x8809,	// (0x00042b0a) tabs_2_active_pane_t1

0x7dec,	// (0x000420ed) bg_passive_tab_pane_cp1_ParamLimits

0x7dec,	// (0x000420ed) bg_passive_tab_pane_cp1

0x8801,	// (0x00042b02) tabs_2_passive_pane_g1

0x8809,	// (0x00042b0a) tabs_2_passive_pane_t1

0x881b,	// (0x00042b1c) bg_active_tab_pane_cp4

0x8829,	// (0x00042b2a) tabs_2_long_active_pane_t1

0x883c,	// (0x00042b3d) bg_passive_tab_pane_cp4

0x6080,	// (0x00040381) list_single_midp_graphic_pane_g4_ParamLimits

0x881b,	// (0x00042b1c) bg_active_tab_pane_cp5

0x8848,	// (0x00042b49) tabs_3_long_active_pane_t1

0x883c,	// (0x00042b3d) bg_passive_tab_pane_cp5

0x6080,	// (0x00040381) list_single_midp_graphic_pane_g4

0x7dec,	// (0x000420ed) bg_popup_window_pane_cp13_ParamLimits

0x7dec,	// (0x000420ed) bg_popup_window_pane_cp13

0x8863,	// (0x00042b64) listscroll_popup_fast_pane_ParamLimits

0x8863,	// (0x00042b64) listscroll_popup_fast_pane

0x8872,	// (0x00042b73) grid_popup_fast_pane_ParamLimits

0x8872,	// (0x00042b73) grid_popup_fast_pane

0x8884,	// (0x00042b85) scroll_pane_cp9_ParamLimits

0x8884,	// (0x00042b85) scroll_pane_cp9

0xc964,	// (0x00046c65) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc964,	// (0x00046c65) list_single_graphic_hl_pane_t1_cp2

0x88a8,	// (0x00042ba9) input_focus_pane_cp20_ParamLimits

0x88a8,	// (0x00042ba9) input_focus_pane_cp20

0x88b6,	// (0x00042bb7) query_popup_data_pane_t1_ParamLimits

0x88b6,	// (0x00042bb7) query_popup_data_pane_t1

0x88c9,	// (0x00042bca) query_popup_data_pane_t2_ParamLimits

0x88c9,	// (0x00042bca) query_popup_data_pane_t2

0x890f,	// (0x00042c10) query_popup_data_pane_t3_ParamLimits

0x890f,	// (0x00042c10) query_popup_data_pane_t3

0x8950,	// (0x00042c51) query_popup_data_pane_t4_ParamLimits

0x8950,	// (0x00042c51) query_popup_data_pane_t4

0x898c,	// (0x00042c8d) query_popup_data_pane_t5_ParamLimits

0x898c,	// (0x00042c8d) query_popup_data_pane_t5

0x0004,

0xf6b1,	// (0x000499b2) query_popup_data_pane_t_ParamLimits

0xf6b1,	// (0x000499b2) query_popup_data_pane_t

0x86b3,	// (0x000429b4) bg_set_opt_pane_g1

0x86bb,	// (0x000429bc) bg_set_opt_pane_g2

0x86c3,	// (0x000429c4) bg_set_opt_pane_g3

0x86cb,	// (0x000429cc) bg_set_opt_pane_g4

0x86d3,	// (0x000429d4) bg_set_opt_pane_g5

0x86db,	// (0x000429dc) bg_set_opt_pane_g6

0x86e3,	// (0x000429e4) bg_set_opt_pane_g7

0x86eb,	// (0x000429ec) bg_set_opt_pane_g8

0x86f3,	// (0x000429f4) bg_set_opt_pane_g9

0x0008,

0xf6bc,	// (0x000499bd) bg_set_opt_pane_g

0x608c,	// (0x0004038d) control_top_pane_stacon_ParamLimits

0x608c,	// (0x0004038d) control_top_pane_stacon

0x60df,	// (0x000403e0) signal_pane_stacon_ParamLimits

0x60df,	// (0x000403e0) signal_pane_stacon

0x8f78,	// (0x00043279) stacon_top_pane_g1_ParamLimits

0x8f78,	// (0x00043279) stacon_top_pane_g1

0x6104,	// (0x00040405) title_pane_stacon_ParamLimits

0x6104,	// (0x00040405) title_pane_stacon

0x612e,	// (0x0004042f) uni_indicator_pane_stacon_ParamLimits

0x612e,	// (0x0004042f) uni_indicator_pane_stacon

0x6143,	// (0x00040444) battery_pane_stacon_ParamLimits

0x6143,	// (0x00040444) battery_pane_stacon

0x6187,	// (0x00040488) control_bottom_pane_stacon_ParamLimits

0x6187,	// (0x00040488) control_bottom_pane_stacon

0x61aa,	// (0x000404ab) navi_pane_stacon_ParamLimits

0x61aa,	// (0x000404ab) navi_pane_stacon

0x8f9a,	// (0x0004329b) stacon_bottom_pane_g1_ParamLimits

0x8f9a,	// (0x0004329b) stacon_bottom_pane_g1

0x5dd3,	// (0x000400d4) aid_levels_signal_lsc_ParamLimits

0x5dd3,	// (0x000400d4) aid_levels_signal_lsc

0x5de9,	// (0x000400ea) signal_pane_stacon_g1_ParamLimits

0x5de9,	// (0x000400ea) signal_pane_stacon_g1

0x5dfd,	// (0x000400fe) signal_pane_stacon_g2_ParamLimits

0x5dfd,	// (0x000400fe) signal_pane_stacon_g2

0x0001,

0xf6cf,	// (0x000499d0) signal_pane_stacon_g_ParamLimits

0xf6cf,	// (0x000499d0) signal_pane_stacon_g

0x5e32,	// (0x00040133) title_pane_stacon_t1_ParamLimits

0x5e32,	// (0x00040133) title_pane_stacon_t1

0x89d0,	// (0x00042cd1) uni_indicator_pane_stacon_g1

0x89da,	// (0x00042cdb) uni_indicator_pane_stacon_g2

0x89e4,	// (0x00042ce5) uni_indicator_pane_stacon_g3

0x89ee,	// (0x00042cef) uni_indicator_pane_stacon_g4

0x0003,

0xf6db,	// (0x000499dc) uni_indicator_pane_stacon_g

0x5e57,	// (0x00040158) control_top_pane_stacon_g1

0x5e5f,	// (0x00040160) control_top_pane_stacon_t1_ParamLimits

0x5e5f,	// (0x00040160) control_top_pane_stacon_t1

0x5e96,	// (0x00040197) aid_levels_battery_lsc_ParamLimits

0x5e96,	// (0x00040197) aid_levels_battery_lsc

0x5ead,	// (0x000401ae) battery_pane_stacon_g1_ParamLimits

0x5ead,	// (0x000401ae) battery_pane_stacon_g1

0x5ec0,	// (0x000401c1) battery_pane_stacon_g2_ParamLimits

0x5ec0,	// (0x000401c1) battery_pane_stacon_g2

0x0001,

0xf6e4,	// (0x000499e5) battery_pane_stacon_g_ParamLimits

0xf6e4,	// (0x000499e5) battery_pane_stacon_g

0x5efe,	// (0x000401ff) navi_icon_pane_stacon

0x5f12,	// (0x00040213) navi_navi_pane_stacon

0x5efe,	// (0x000401ff) navi_text_pane_stacon

0x5e57,	// (0x00040158) control_bottom_pane_stacon_g1

0x5f26,	// (0x00040227) control_bottom_pane_stacon_t1_ParamLimits

0x5f26,	// (0x00040227) control_bottom_pane_stacon_t1

0x8a12,	// (0x00042d13) grid_app_pane_ParamLimits

0x8a12,	// (0x00042d13) grid_app_pane

0x8a36,	// (0x00042d37) scroll_pane_cp15_ParamLimits

0x8a36,	// (0x00042d37) scroll_pane_cp15

0x8a49,	// (0x00042d4a) cell_app_pane_ParamLimits

0x8a49,	// (0x00042d4a) cell_app_pane

0x8a6d,	// (0x00042d6e) cell_app_pane_g1_ParamLimits

0x8a6d,	// (0x00042d6e) cell_app_pane_g1

0x8a8d,	// (0x00042d8e) cell_app_pane_g2_ParamLimits

0x8a8d,	// (0x00042d8e) cell_app_pane_g2

0x0001,

0xf6e9,	// (0x000499ea) cell_app_pane_g_ParamLimits

0xf6e9,	// (0x000499ea) cell_app_pane_g

0x8a99,	// (0x00042d9a) cell_app_pane_t1_ParamLimits

0x8a99,	// (0x00042d9a) cell_app_pane_t1

0x8ab0,	// (0x00042db1) grid_highlight_pane_ParamLimits

0x8ab0,	// (0x00042db1) grid_highlight_pane

0x86b3,	// (0x000429b4) cell_highlight_pane_g1

0x86bb,	// (0x000429bc) cell_highlight_pane_g2

0x86c3,	// (0x000429c4) cell_highlight_pane_g3

0x86cb,	// (0x000429cc) cell_highlight_pane_g4

0x86d3,	// (0x000429d4) cell_highlight_pane_g5

0x86db,	// (0x000429dc) cell_highlight_pane_g6

0x86e3,	// (0x000429e4) cell_highlight_pane_g7

0x86eb,	// (0x000429ec) cell_highlight_pane_g8

0x86f3,	// (0x000429f4) cell_highlight_pane_g9

0x7d02,	// (0x00042003) cell_highlight_pane_g10

0x0009,

0xf697,	// (0x00049998) cell_highlight_pane_g

0x8ac1,	// (0x00042dc2) bg_scroll_pane

0x5f70,	// (0x00040271) scroll_handle_pane

0x8b08,	// (0x00042e09) scroll_bg_pane_g1

0x8b1d,	// (0x00042e1e) scroll_bg_pane_g2

0x8b35,	// (0x00042e36) scroll_bg_pane_g3

0x0002,

0xf6ee,	// (0x000499ef) scroll_bg_pane_g

0x8b4a,	// (0x00042e4b) scroll_handle_focus_pane_ParamLimits

0x8b4a,	// (0x00042e4b) scroll_handle_focus_pane

0x8b08,	// (0x00042e09) scroll_handle_pane_g1

0x8b57,	// (0x00042e58) scroll_handle_pane_g2

0x8b35,	// (0x00042e36) scroll_handle_pane_g3

0x0002,

0xf6f5,	// (0x000499f6) scroll_handle_pane_g

0x8704,	// (0x00042a05) bg_popup_sub_pane_cp21_ParamLimits

0x8704,	// (0x00042a05) bg_popup_sub_pane_cp21

0x8b6b,	// (0x00042e6c) popup_fep_japan_predictive_window_t1_ParamLimits

0x8b6b,	// (0x00042e6c) popup_fep_japan_predictive_window_t1

0x8b85,	// (0x00042e86) popup_fep_japan_predictive_window_t2_ParamLimits

0x8b85,	// (0x00042e86) popup_fep_japan_predictive_window_t2

0x8bb8,	// (0x00042eb9) popup_fep_japan_predictive_window_t3_ParamLimits

0x8bb8,	// (0x00042eb9) popup_fep_japan_predictive_window_t3

0x0002,

0xf6fc,	// (0x000499fd) popup_fep_japan_predictive_window_t_ParamLimits

0xf6fc,	// (0x000499fd) popup_fep_japan_predictive_window_t

0x7d0c,	// (0x0004200d) bg_popup_sub_pane_cp23

0x8bef,	// (0x00042ef0) listscroll_japin_cand_pane

0x8bf7,	// (0x00042ef8) popup_fep_japan_candidate_window_t1

0x8c05,	// (0x00042f06) candidate_pane_ParamLimits

0x8c05,	// (0x00042f06) candidate_pane

0x8c17,	// (0x00042f18) scroll_pane_cp30

0x8c1f,	// (0x00042f20) list_single_popup_jap_candidate_pane_ParamLimits

0x8c1f,	// (0x00042f20) list_single_popup_jap_candidate_pane

0x7d0c,	// (0x0004200d) list_highlight_pane_cp30

0x8c34,	// (0x00042f35) list_single_popup_jap_candidate_pane_t1

0x8c43,	// (0x00042f44) level_1_signal

0x8c55,	// (0x00042f56) level_2_signal

0x8c68,	// (0x00042f69) level_3_signal

0x8c7b,	// (0x00042f7c) level_4_signal

0x8c8e,	// (0x00042f8f) level_5_signal

0x8ca1,	// (0x00042fa2) level_6_signal

0x8cb4,	// (0x00042fb5) level_7_signal

0x8c43,	// (0x00042f44) level_1_battery

0x8c55,	// (0x00042f56) level_2_battery

0x8c68,	// (0x00042f69) level_3_battery

0x8c7b,	// (0x00042f7c) level_4_battery

0x8c8e,	// (0x00042f8f) level_5_battery

0x8ca1,	// (0x00042fa2) level_6_battery

0x8cb4,	// (0x00042fb5) level_7_battery

0x8cdf,	// (0x00042fe0) list_menu_pane_ParamLimits

0x8cdf,	// (0x00042fe0) list_menu_pane

0x8cf5,	// (0x00042ff6) scroll_pane_cp25_ParamLimits

0x8cf5,	// (0x00042ff6) scroll_pane_cp25

0x8d0e,	// (0x0004300f) list_double2_graphic_pane_cp2_ParamLimits

0x8d0e,	// (0x0004300f) list_double2_graphic_pane_cp2

0x8d0e,	// (0x0004300f) list_double2_large_graphic_pane_cp2_ParamLimits

0x8d0e,	// (0x0004300f) list_double2_large_graphic_pane_cp2

0x8d0e,	// (0x0004300f) list_double2_pane_cp2_ParamLimits

0x8d0e,	// (0x0004300f) list_double2_pane_cp2

0x8d0e,	// (0x0004300f) list_double_graphic_pane_cp2_ParamLimits

0x8d0e,	// (0x0004300f) list_double_graphic_pane_cp2

0x8d0e,	// (0x0004300f) list_double_large_graphic_pane_cp2_ParamLimits

0x8d0e,	// (0x0004300f) list_double_large_graphic_pane_cp2

0x8d0e,	// (0x0004300f) list_double_number_pane_cp2_ParamLimits

0x8d0e,	// (0x0004300f) list_double_number_pane_cp2

0x8d0e,	// (0x0004300f) list_double_pane_cp2_ParamLimits

0x8d0e,	// (0x0004300f) list_double_pane_cp2

0x8d32,	// (0x00043033) list_single_2graphic_pane_cp2_ParamLimits

0x8d32,	// (0x00043033) list_single_2graphic_pane_cp2

0x8d32,	// (0x00043033) list_single_graphic_heading_pane_cp2_ParamLimits

0x8d32,	// (0x00043033) list_single_graphic_heading_pane_cp2

0x8d32,	// (0x00043033) list_single_graphic_pane_cp2_ParamLimits

0x8d32,	// (0x00043033) list_single_graphic_pane_cp2

0x8d32,	// (0x00043033) list_single_heading_pane_cp2_ParamLimits

0x8d32,	// (0x00043033) list_single_heading_pane_cp2

0x8d4b,	// (0x0004304c) list_single_large_graphic_pane_cp2_ParamLimits

0x8d4b,	// (0x0004304c) list_single_large_graphic_pane_cp2

0x8d32,	// (0x00043033) list_single_number_heading_pane_cp2_ParamLimits

0x8d32,	// (0x00043033) list_single_number_heading_pane_cp2

0x8d32,	// (0x00043033) list_single_number_pane_cp2_ParamLimits

0x8d32,	// (0x00043033) list_single_number_pane_cp2

0x8d32,	// (0x00043033) list_single_pane_cp2_ParamLimits

0x8d32,	// (0x00043033) list_single_pane_cp2

0x8dc7,	// (0x000430c8) bg_popup_sub_pane_cp22

0x6022,	// (0x00040323) popup_side_volume_key_window_g1

0x604c,	// (0x0004034d) popup_side_volume_key_window_t1

0x6068,	// (0x00040369) volume_small_pane_cp1

0x8067,	// (0x00042368) bg_popup_sub_pane_cp24_ParamLimits

0x8067,	// (0x00042368) bg_popup_sub_pane_cp24

0x8ddd,	// (0x000430de) fep_china_uni_candidate_pane_ParamLimits

0x8ddd,	// (0x000430de) fep_china_uni_candidate_pane

0x8df1,	// (0x000430f2) fep_china_uni_entry_pane

0x8e01,	// (0x00043102) popup_fep_china_uni_window_g1

0x8e1d,	// (0x0004311e) fep_china_uni_entry_pane_g1

0x8e25,	// (0x00043126) fep_china_uni_entry_pane_g2

0x0001,

0xf72d,	// (0x00049a2e) fep_china_uni_entry_pane_g

0x8e2d,	// (0x0004312e) fep_entry_item_pane

0x8e37,	// (0x00043138) fep_candidate_item_pane

0x8e3f,	// (0x00043140) fep_china_uni_candidate_pane_g1

0x8e47,	// (0x00043148) fep_china_uni_candidate_pane_g2

0x8e4f,	// (0x00043150) fep_china_uni_candidate_pane_g3

0x8e57,	// (0x00043158) fep_china_uni_candidate_pane_g4

0x0003,

0xf732,	// (0x00049a33) fep_china_uni_candidate_pane_g

0x7d02,	// (0x00042003) fep_entry_item_pane_g1

0x8e5f,	// (0x00043160) fep_entry_item_pane_t1_ParamLimits

0x8e5f,	// (0x00043160) fep_entry_item_pane_t1

0x8e75,	// (0x00043176) fep_candidate_item_pane_t1_ParamLimits

0x8e75,	// (0x00043176) fep_candidate_item_pane_t1

0x8e8a,	// (0x0004318b) fep_candidate_item_pane_t2_ParamLimits

0x8e8a,	// (0x0004318b) fep_candidate_item_pane_t2

0x0001,

0xf73b,	// (0x00049a3c) fep_candidate_item_pane_t_ParamLimits

0xf73b,	// (0x00049a3c) fep_candidate_item_pane_t

0x7dec,	// (0x000420ed) list_highlight_pane_cp31_ParamLimits

0x7dec,	// (0x000420ed) list_highlight_pane_cp31

0x8e9c,	// (0x0004319d) level_1_signal_lsc

0x8ea5,	// (0x000431a6) level_2_signal_lsc

0x8eae,	// (0x000431af) level_3_signal_lsc

0x8eb7,	// (0x000431b8) level_4_signal_lsc

0x8ec0,	// (0x000431c1) level_5_signal_lsc

0x8ec9,	// (0x000431ca) level_6_signal_lsc

0x8ed2,	// (0x000431d3) level_7_signal_lsc

0x8ed2,	// (0x000431d3) level_1_battery_lsc

0x8edb,	// (0x000431dc) level_2_battery_lsc

0x8ee4,	// (0x000431e5) level_3_battery_lsc

0x8eed,	// (0x000431ee) level_4_battery_lsc

0x8ef6,	// (0x000431f7) level_5_battery_lsc

0x8eff,	// (0x00043200) level_6_battery_lsc

0x8e9c,	// (0x0004319d) level_7_battery_lsc

0x8f08,	// (0x00043209) scroll_handle_focus_pane_g1

0x8f11,	// (0x00043212) scroll_handle_focus_pane_g2

0x8f1a,	// (0x0004321b) scroll_handle_focus_pane_g3

0x0002,

0xf740,	// (0x00049a41) scroll_handle_focus_pane_g

0x50ae,	// (0x0003f3af) list_single_2graphic_pane_g1_ParamLimits

0x50ae,	// (0x0003f3af) list_single_2graphic_pane_g1

0x5d51,	// (0x00040052) list_single_2graphic_pane_g2_ParamLimits

0x5d51,	// (0x00040052) list_single_2graphic_pane_g2

0x5d33,	// (0x00040034) list_single_2graphic_pane_g3_ParamLimits

0x5d33,	// (0x00040034) list_single_2graphic_pane_g3

0x50ba,	// (0x0003f3bb) list_single_2graphic_pane_g4_ParamLimits

0x50ba,	// (0x0003f3bb) list_single_2graphic_pane_g4

0x0003,

0xf747,	// (0x00049a48) list_single_2graphic_pane_g_ParamLimits

0xf747,	// (0x00049a48) list_single_2graphic_pane_g

0x50c6,	// (0x0003f3c7) list_single_2graphic_pane_t1_ParamLimits

0x50c6,	// (0x0003f3c7) list_single_2graphic_pane_t1

0x6070,	// (0x00040371) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x6070,	// (0x00040371) list_double2_graphic_large_graphic_pane_g1

0x4c4b,	// (0x0003ef4c) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x4c4b,	// (0x0003ef4c) list_double2_graphic_large_graphic_pane_g2

0x5d9a,	// (0x0004009b) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x5d9a,	// (0x0004009b) list_double2_graphic_large_graphic_pane_g3

0x6080,	// (0x00040381) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x6080,	// (0x00040381) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf750,	// (0x00049a51) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf750,	// (0x00049a51) list_double2_graphic_large_graphic_pane_g

0x50f4,	// (0x0003f3f5) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x50f4,	// (0x0003f3f5) list_double2_graphic_large_graphic_pane_t1

0x510a,	// (0x0003f40b) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x510a,	// (0x0003f40b) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf759,	// (0x00049a5a) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf759,	// (0x00049a5a) list_double2_graphic_large_graphic_pane_t

0x9062,	// (0x00043363) popup_fast_swap_window_ParamLimits

0x9062,	// (0x00043363) popup_fast_swap_window

0x907e,	// (0x0004337f) popup_side_volume_key_window

0x909a,	// (0x0004339b) stacon_top_pane

0x90a4,	// (0x000433a5) status_pane_ParamLimits

0x90a4,	// (0x000433a5) status_pane

0x909a,	// (0x0004339b) status_small_pane

0x7d0c,	// (0x0004200d) control_pane

0x7d0c,	// (0x0004200d) stacon_bottom_pane

0x8647,	// (0x00042948) scroll_pane_cp121

0x863e,	// (0x0004293f) set_content_pane

0x8f23,	// (0x00043224) bg_active_tab_pane_g1_cp1

0x8f2c,	// (0x0004322d) bg_active_tab_pane_g2_cp1

0x8f35,	// (0x00043236) bg_active_tab_pane_g3_cp1

0x8f23,	// (0x00043224) bg_passive_tab_pane_g1_cp1

0x8f2c,	// (0x0004322d) bg_passive_tab_pane_g2_cp1

0x8f35,	// (0x00043236) bg_passive_tab_pane_g3_cp1

0x8f3e,	// (0x0004323f) bg_active_tab_pane_g1_cp2

0x8f2c,	// (0x0004322d) bg_active_tab_pane_g2_cp2

0x8f47,	// (0x00043248) bg_active_tab_pane_g3_cp2

0x8f3e,	// (0x0004323f) bg_passive_tab_pane_g1_cp2

0x8f2c,	// (0x0004322d) bg_passive_tab_pane_g2_cp2

0x8f47,	// (0x00043248) bg_passive_tab_pane_g3_cp2

0x8f50,	// (0x00043251) bg_active_tab_pane_g1_cp3

0x8f2c,	// (0x0004322d) bg_active_tab_pane_g2_cp3

0x8f59,	// (0x0004325a) bg_active_tab_pane_g3_cp3

0x8f50,	// (0x00043251) bg_passive_tab_pane_g1_cp3

0x8f2c,	// (0x0004322d) bg_passive_tab_pane_g2_cp3

0x8f59,	// (0x0004325a) bg_passive_tab_pane_g3_cp3

0x8f62,	// (0x00043263) bg_active_tab_pane_g1_cp4

0x8f2c,	// (0x0004322d) bg_active_tab_pane_g2_cp4

0x8f6d,	// (0x0004326e) bg_active_tab_pane_g3_cp4

0x8f62,	// (0x00043263) bg_passive_tab_pane_g1_cp4

0x8f2c,	// (0x0004322d) bg_passive_tab_pane_g2_cp4

0x8f6d,	// (0x0004326e) bg_passive_tab_pane_g3_cp4

0x8fb6,	// (0x000432b7) bg_active_tab_pane_g1_cp5

0x8f2c,	// (0x0004322d) bg_active_tab_pane_g2_cp5

0x8fbf,	// (0x000432c0) bg_active_tab_pane_g3_cp5

0x8fb6,	// (0x000432b7) bg_passive_tab_pane_g1_cp5

0x8f2c,	// (0x0004322d) bg_passive_tab_pane_g2_cp5

0x8fbf,	// (0x000432c0) bg_passive_tab_pane_g3_cp5

0x8fc8,	// (0x000432c9) list_set_graphic_pane_ParamLimits

0x8fc8,	// (0x000432c9) list_set_graphic_pane

0x7d0c,	// (0x0004200d) bg_set_opt_pane_cp4

0x8fe5,	// (0x000432e6) list_set_graphic_pane_g1_ParamLimits

0x8fe5,	// (0x000432e6) list_set_graphic_pane_g1

0x8ff1,	// (0x000432f2) list_set_graphic_pane_g2_ParamLimits

0x8ff1,	// (0x000432f2) list_set_graphic_pane_g2

0x0001,

0xf75e,	// (0x00049a5f) list_set_graphic_pane_g_ParamLimits

0xf75e,	// (0x00049a5f) list_set_graphic_pane_g

0x0009,

0xfad1,	// (0x00049dd2) volume_small_pane_cp_g

0x9015,	// (0x00043316) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x9015,	// (0x00043316) list_double2_large_graphic_pane_g1_cp2

0x9021,	// (0x00043322) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x9021,	// (0x00043322) list_double2_large_graphic_pane_g2_cp2

0x9032,	// (0x00043333) list_double2_large_graphic_pane_g3_cp2

0x903a,	// (0x0004333b) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x903a,	// (0x0004333b) list_double2_large_graphic_pane_t1_cp2

0x9050,	// (0x00043351) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x9050,	// (0x00043351) list_double2_large_graphic_pane_t2_cp2

0xac17,	// (0x00044f18) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xac17,	// (0x00044f18) list_double_large_graphic_pane_g1_cp2

0xac28,	// (0x00044f29) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xac28,	// (0x00044f29) list_double_large_graphic_pane_g2_cp2

0x91c0,	// (0x000434c1) list_double_large_graphic_pane_g3_cp2

0xac39,	// (0x00044f3a) list_double_large_graphic_pane_g4_cp

0xac41,	// (0x00044f42) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xac41,	// (0x00044f42) list_double_large_graphic_pane_t1_cp2

0xac58,	// (0x00044f59) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xac58,	// (0x00044f59) list_double_large_graphic_pane_t2_cp2

0x90b2,	// (0x000433b3) list_double2_graphic_pane_g1_cp2_ParamLimits

0x90b2,	// (0x000433b3) list_double2_graphic_pane_g1_cp2

0x90c0,	// (0x000433c1) list_double2_graphic_pane_g2_cp2_ParamLimits

0x90c0,	// (0x000433c1) list_double2_graphic_pane_g2_cp2

0x90d1,	// (0x000433d2) list_double2_graphic_pane_g3_cp2

0x90db,	// (0x000433dc) list_double2_graphic_pane_t1_cp2_ParamLimits

0x90db,	// (0x000433dc) list_double2_graphic_pane_t1_cp2

0x90f1,	// (0x000433f2) list_double2_graphic_pane_t2_cp2_ParamLimits

0x90f1,	// (0x000433f2) list_double2_graphic_pane_t2_cp2

0x9103,	// (0x00043404) list_single_number_heading_pane_g1_cp2_ParamLimits

0x9103,	// (0x00043404) list_single_number_heading_pane_g1_cp2

0x910f,	// (0x00043410) list_single_number_heading_pane_g2_cp2

0x9117,	// (0x00043418) list_single_number_heading_pane_t1_cp2_ParamLimits

0x9117,	// (0x00043418) list_single_number_heading_pane_t1_cp2

0x912d,	// (0x0004342e) list_single_number_heading_pane_t2_cp2_ParamLimits

0x912d,	// (0x0004342e) list_single_number_heading_pane_t2_cp2

0x913f,	// (0x00043440) list_single_number_heading_pane_t3_cp2_ParamLimits

0x913f,	// (0x00043440) list_single_number_heading_pane_t3_cp2

0x9103,	// (0x00043404) list_single_heading_pane_g1_cp2_ParamLimits

0x9103,	// (0x00043404) list_single_heading_pane_g1_cp2

0x910f,	// (0x00043410) list_single_heading_pane_g2_cp2

0x9117,	// (0x00043418) list_single_heading_pane_t1_cp2_ParamLimits

0x9117,	// (0x00043418) list_single_heading_pane_t1_cp2

0xaa1f,	// (0x00044d20) list_single_heading_pane_t2_cp2_ParamLimits

0xaa1f,	// (0x00044d20) list_single_heading_pane_t2_cp2

0xa967,	// (0x00044c68) list_double_graphic_pane_g1_cp2_ParamLimits

0xa967,	// (0x00044c68) list_double_graphic_pane_g1_cp2

0xa973,	// (0x00044c74) list_double_graphic_pane_g2_cp2_ParamLimits

0xa973,	// (0x00044c74) list_double_graphic_pane_g2_cp2

0xa982,	// (0x00044c83) list_double_graphic_pane_g3_cp2

0xa98a,	// (0x00044c8b) list_double_graphic_pane_t1_cp2_ParamLimits

0xa98a,	// (0x00044c8b) list_double_graphic_pane_t1_cp2

0xa9a0,	// (0x00044ca1) list_double_graphic_pane_t2_cp2_ParamLimits

0xa9a0,	// (0x00044ca1) list_double_graphic_pane_t2_cp2

0x91b4,	// (0x000434b5) list_double_number_pane_g1_cp2_ParamLimits

0x91b4,	// (0x000434b5) list_double_number_pane_g1_cp2

0x91c0,	// (0x000434c1) list_double_number_pane_g2_cp2

0xa92b,	// (0x00044c2c) list_double_number_pane_t1_cp2_ParamLimits

0xa92b,	// (0x00044c2c) list_double_number_pane_t1_cp2

0xa93f,	// (0x00044c40) list_double_number_pane_t2_cp2_ParamLimits

0xa93f,	// (0x00044c40) list_double_number_pane_t2_cp2

0xa955,	// (0x00044c56) list_double_number_pane_t3_cp2_ParamLimits

0xa955,	// (0x00044c56) list_double_number_pane_t3_cp2

0xa814,	// (0x00044b15) list_single_graphic_pane_g1_cp2_ParamLimits

0xa814,	// (0x00044b15) list_single_graphic_pane_g1_cp2

0x9218,	// (0x00043519) list_single_graphic_pane_g2_cp2_ParamLimits

0x9218,	// (0x00043519) list_single_graphic_pane_g2_cp2

0x9224,	// (0x00043525) list_single_graphic_pane_g3_cp2

0xa7ea,	// (0x00044aeb) list_single_graphic_pane_t1_cp2_ParamLimits

0xa7ea,	// (0x00044aeb) list_single_graphic_pane_t1_cp2

0x9218,	// (0x00043519) list_single_number_pane_g1_cp2_ParamLimits

0x9218,	// (0x00043519) list_single_number_pane_g1_cp2

0x9224,	// (0x00043525) list_single_number_pane_g2_cp2

0xa7ea,	// (0x00044aeb) list_single_number_pane_t1_cp2_ParamLimits

0xa7ea,	// (0x00044aeb) list_single_number_pane_t1_cp2

0xa800,	// (0x00044b01) list_single_number_pane_t2_cp2_ParamLimits

0xa800,	// (0x00044b01) list_single_number_pane_t2_cp2

0x9021,	// (0x00043322) list_double2_pane_g1_cp2_ParamLimits

0x9021,	// (0x00043322) list_double2_pane_g1_cp2

0x9032,	// (0x00043333) list_double2_pane_g2_cp2

0x918c,	// (0x0004348d) list_double2_pane_t1_cp2_ParamLimits

0x918c,	// (0x0004348d) list_double2_pane_t1_cp2

0x91a2,	// (0x000434a3) list_double2_pane_t2_cp2_ParamLimits

0x91a2,	// (0x000434a3) list_double2_pane_t2_cp2

0x91b4,	// (0x000434b5) list_double_pane_g1_cp2_ParamLimits

0x91b4,	// (0x000434b5) list_double_pane_g1_cp2

0x91c0,	// (0x000434c1) list_double_pane_g2_cp2

0x91c8,	// (0x000434c9) list_double_pane_t1_cp2_ParamLimits

0x91c8,	// (0x000434c9) list_double_pane_t1_cp2

0x91de,	// (0x000434df) list_double_pane_t2_cp2_ParamLimits

0x91de,	// (0x000434df) list_double_pane_t2_cp2

0x9208,	// (0x00043509) list_single_pane_cp2_g3

0x9218,	// (0x00043519) list_single_pane_g1_cp2_ParamLimits

0x9218,	// (0x00043519) list_single_pane_g1_cp2

0x9224,	// (0x00043525) list_single_pane_g2_cp2

0x922c,	// (0x0004352d) list_single_pane_t1_cp2_ParamLimits

0x922c,	// (0x0004352d) list_single_pane_t1_cp2

0x9244,	// (0x00043545) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x9244,	// (0x00043545) list_single_large_graphic_pane_g1_cp2

0x9250,	// (0x00043551) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x9250,	// (0x00043551) list_single_large_graphic_pane_g2_cp2

0x925c,	// (0x0004355d) list_single_large_graphic_pane_g3_cp2

0x9264,	// (0x00043565) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x9264,	// (0x00043565) list_single_large_graphic_pane_g4_cp1

0x927e,	// (0x0004357f) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x927e,	// (0x0004357f) list_single_large_graphic_pane_t1_cp2

0xa7b6,	// (0x00044ab7) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa7b6,	// (0x00044ab7) list_single_graphic_heading_pane_g1_cp2

0xa783,	// (0x00044a84) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa783,	// (0x00044a84) list_single_graphic_heading_pane_g4_cp2

0x9224,	// (0x00043525) list_single_graphic_heading_pane_g5_cp2

0xa7c2,	// (0x00044ac3) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa7c2,	// (0x00044ac3) list_single_graphic_heading_pane_t1_cp2

0xa7d8,	// (0x00044ad9) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa7d8,	// (0x00044ad9) list_single_graphic_heading_pane_t2_cp2

0xa777,	// (0x00044a78) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa777,	// (0x00044a78) list_single_2graphic_pane_g1_cp2

0xa783,	// (0x00044a84) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa783,	// (0x00044a84) list_single_2graphic_pane_g2_cp2

0x9224,	// (0x00043525) list_single_2graphic_pane_g3_cp2

0xa794,	// (0x00044a95) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa794,	// (0x00044a95) list_single_2graphic_pane_g4_cp2

0xa7a0,	// (0x00044aa1) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa7a0,	// (0x00044aa1) list_single_2graphic_pane_t1_cp2

0x7d02,	// (0x00042003) list_highlight_pane_g10_cp1

0xa34f,	// (0x00044650) list_highlight_pane_g1_cp1

0xa357,	// (0x00044658) list_highlight_pane_g2_cp1

0xa35f,	// (0x00044660) list_highlight_pane_g3_cp1

0xa367,	// (0x00044668) list_highlight_pane_g4_cp1

0xa36f,	// (0x00044670) list_highlight_pane_g5_cp1

0xa377,	// (0x00044678) list_highlight_pane_g6_cp1

0xa37f,	// (0x00044680) list_highlight_pane_g7_cp1

0xa387,	// (0x00044688) list_highlight_pane_g8_cp1

0xa38f,	// (0x00044690) list_highlight_pane_g9_cp1

0xa26f,	// (0x00044570) form_field_slider_pane_t3

0xa27d,	// (0x0004457e) form_field_slider_pane_t4

0xa28b,	// (0x0004458c) slider_form_pane_ParamLimits

0xa28b,	// (0x0004458c) slider_form_pane

0x7d0c,	// (0x0004200d) control_abbreviations

0x7d0c,	// (0x0004200d) control_conventions

0x7d0c,	// (0x0004200d) control_definitions

0x7d0c,	// (0x0004200d) format_table_attribute

0xaa69,	// (0x00044d6a) bg_popup_preview_window_pane_g9

0x7d0c,	// (0x0004200d) format_table_data2

0x7d0c,	// (0x0004200d) format_table_data3

0x7d0c,	// (0x0004200d) format_table_data_example

0x0008,

0x7d0c,	// (0x0004200d) intro_purpose

0xf8fa,	// (0x00049bfb) bg_popup_preview_window_pane_g

0x7d0c,	// (0x0004200d) texts_category

0x7d0c,	// (0x0004200d) texts_graphics

0x9294,	// (0x00043595) text_digital

0x92a3,	// (0x000435a4) text_primary

0x92b2,	// (0x000435b3) text_primary_small

0x92c1,	// (0x000435c2) text_secondary

0x92d0,	// (0x000435d1) text_title

0xb18d,	// (0x0004548e) bg_passive_tab_pane_g1_cp3_srt

0x8f2c,	// (0x0004322d) bg_passive_tab_pane_g2_cp3_srt

0xb196,	// (0x00045497) bg_passive_tab_pane_g3_cp3_srt

0x7dec,	// (0x000420ed) bg_active_tab_pane_cp3_srt_ParamLimits

0x7dec,	// (0x000420ed) bg_active_tab_pane_cp3_srt

0xb19f,	// (0x000454a0) tabs_4_active_pane_srt_g1

0xb1a7,	// (0x000454a8) tabs_4_active_pane_srt_t1_ParamLimits

0xb1a7,	// (0x000454a8) tabs_4_active_pane_srt_t1

0xb18d,	// (0x0004548e) bg_active_tab_pane_g1_cp3_copy1

0x8f2c,	// (0x0004322d) bg_active_tab_pane_g2_cp3_copy1

0xb196,	// (0x00045497) bg_active_tab_pane_g3_cp3_copy1

0x7dec,	// (0x000420ed) tabs_2_long_active_pane_srt_ParamLimits

0x7dec,	// (0x000420ed) tabs_2_long_active_pane_srt

0x7dec,	// (0x000420ed) tabs_2_long_passive_pane_srt_ParamLimits

0x7dec,	// (0x000420ed) tabs_2_long_passive_pane_srt

0x883c,	// (0x00042b3d) bg_passive_tab_pane_cp4_srt_ParamLimits

0x883c,	// (0x00042b3d) bg_passive_tab_pane_cp4_srt

0xae94,	// (0x00045195) bg_passive_tab_pane_g1_cp4_srt

0x8f2c,	// (0x0004322d) bg_passive_tab_pane_g2_cp4_srt

0xae9d,	// (0x0004519e) bg_passive_tab_pane_g3_cp4_srt

0x881b,	// (0x00042b1c) bg_active_tab_pane_cp4_srt_ParamLimits

0x881b,	// (0x00042b1c) bg_active_tab_pane_cp4_srt

0xaea6,	// (0x000451a7) tabs_2_long_active_pane_srt_t1_ParamLimits

0xaea6,	// (0x000451a7) tabs_2_long_active_pane_srt_t1

0xae94,	// (0x00045195) bg_active_tab_pane_g1_cp4_srt

0x8f2c,	// (0x0004322d) bg_active_tab_pane_g2_cp4_srt

0xae9d,	// (0x0004519e) bg_active_tab_pane_g3_cp4_srt

0x8067,	// (0x00042368) tabs_3_long_active_pane_srt_ParamLimits

0x8067,	// (0x00042368) tabs_3_long_active_pane_srt

0x8067,	// (0x00042368) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x8067,	// (0x00042368) tabs_3_long_passive_pane_cp_srt

0x8067,	// (0x00042368) tabs_3_long_passive_pane_srt_ParamLimits

0x8067,	// (0x00042368) tabs_3_long_passive_pane_srt

0x883c,	// (0x00042b3d) bg_passive_tab_pane_cp5_srt_ParamLimits

0x883c,	// (0x00042b3d) bg_passive_tab_pane_cp5_srt

0x8fb6,	// (0x000432b7) bg_passive_tab_pane_g1_cp5_srt

0x8f2c,	// (0x0004322d) bg_passive_tab_pane_g2_cp5_srt

0x8fbf,	// (0x000432c0) bg_passive_tab_pane_g3_cp5_srt

0x881b,	// (0x00042b1c) bg_active_tab_pane_cp5_srt_ParamLimits

0x881b,	// (0x00042b1c) bg_active_tab_pane_cp5_srt

0xae82,	// (0x00045183) tabs_3_long_active_pane_srt_t1_ParamLimits

0xae82,	// (0x00045183) tabs_3_long_active_pane_srt_t1

0x8fb6,	// (0x000432b7) bg_active_tab_pane_g1_cp5_srt

0x8f2c,	// (0x0004322d) bg_active_tab_pane_g2_cp5_srt

0x8fbf,	// (0x000432c0) bg_active_tab_pane_g3_cp5_srt

0xae74,	// (0x00045175) navi_text_pane_srt_t1

0xae6c,	// (0x0004516d) navi_icon_pane_srt_g1

0x9497,	// (0x00043798) midp_editing_number_pane_srt

0x92df,	// (0x000435e0) midp_ticker_pane_srt

0x949f,	// (0x000437a0) midp_ticker_pane_srt_g1

0x94a7,	// (0x000437a8) midp_ticker_pane_srt_g2

0x0001,

0xf77d,	// (0x00049a7e) midp_ticker_pane_srt_g

0x94af,	// (0x000437b0) midp_ticker_pane_srt_t1

0xae5d,	// (0x0004515e) midp_editing_number_pane_t1_copy1

0x883c,	// (0x00042b3d) listscroll_midp_pane

0x883c,	// (0x00042b3d) midp_form_pane

0x9349,	// (0x0004364a) midp_info_popup_window_ParamLimits

0x9349,	// (0x0004364a) midp_info_popup_window

0x8704,	// (0x00042a05) bg_popup_sub_pane_cp50_ParamLimits

0x8704,	// (0x00042a05) bg_popup_sub_pane_cp50

0x9f87,	// (0x00044288) listscroll_midp_info_pane_ParamLimits

0x9f87,	// (0x00044288) listscroll_midp_info_pane

0x9f6f,	// (0x00044270) listscroll_form_midp_pane_ParamLimits

0x9f6f,	// (0x00044270) listscroll_form_midp_pane

0x9f7b,	// (0x0004427c) scroll_bar_cp050

0x9f4f,	// (0x00044250) list_midp_pane

0xbbdd,	// (0x00045ede) signal_pane_g2_cp

0x9e89,	// (0x0004418a) listscroll_midp_info_pane_t1_ParamLimits

0x9e89,	// (0x0004418a) listscroll_midp_info_pane_t1

0x9ea1,	// (0x000441a2) listscroll_midp_info_pane_t2_ParamLimits

0x9ea1,	// (0x000441a2) listscroll_midp_info_pane_t2

0x9edf,	// (0x000441e0) listscroll_midp_info_pane_t3_ParamLimits

0x9edf,	// (0x000441e0) listscroll_midp_info_pane_t3

0x9f19,	// (0x0004421a) listscroll_midp_info_pane_t4_ParamLimits

0x9f19,	// (0x0004421a) listscroll_midp_info_pane_t4

0x0003,

0xf835,	// (0x00049b36) listscroll_midp_info_pane_t_ParamLimits

0xf835,	// (0x00049b36) listscroll_midp_info_pane_t

0x87c8,	// (0x00042ac9) scroll_pane_cp21

0x9e1b,	// (0x0004411c) form_midp_field_choice_group_pane

0x9e30,	// (0x00044131) form_midp_field_text_pane

0x9e6f,	// (0x00044170) form_midp_field_time_pane

0x9e77,	// (0x00044178) form_midp_gauge_slider_pane

0x9e80,	// (0x00044181) form_midp_gauge_wait_pane

0x7d0c,	// (0x0004200d) form_midp_image_pane

0x5269,	// (0x0003f56a) list_single_midp_pane_ParamLimits

0x5269,	// (0x0003f56a) list_single_midp_pane

0x9dd3,	// (0x000440d4) form_midp_field_text_pane_t1

0x9b9d,	// (0x00043e9e) input_focus_pane_cp050

0x9e0a,	// (0x0004410b) list_midp_form_text_pane

0x9da2,	// (0x000440a3) form_midp_field_choice_group_pane_t1

0x9db0,	// (0x000440b1) input_focus_pane_cp051

0x9dc4,	// (0x000440c5) list_midp_choice_pane

0x7d0c,	// (0x0004200d) status_idle_pane

0x9d86,	// (0x00044087) form_midp_field_time_pane_t1

0x7d02,	// (0x00042003) wait_anim_pane_g2_copy1

0x9d94,	// (0x00044095) form_midp_field_time_pane_t2

0x0001,

0x93f7,	// (0x000436f8) aid_navinavi_width_2_pane

0xf830,	// (0x00049b31) form_midp_field_time_pane_t

0x7d0c,	// (0x0004200d) input_focus_pane_cp052

0x7d0c,	// (0x0004200d) bg_input_focus_pane_cp040

0x9d46,	// (0x00044047) form_midp_gauge_slider_pane_t1

0x9d54,	// (0x00044055) form_midp_gauge_slider_pane_t2

0x9d62,	// (0x00044063) form_midp_gauge_slider_pane_t3

0x9d70,	// (0x00044071) form_midp_gauge_slider_pane_t4

0x0003,

0xf827,	// (0x00049b28) form_midp_gauge_slider_pane_t

0x9d7e,	// (0x0004407f) form_midp_slider_pane

0x7dec,	// (0x000420ed) bg_input_focus_pane_cp041_ParamLimits

0x7dec,	// (0x000420ed) bg_input_focus_pane_cp041

0x9d13,	// (0x00044014) form_midp_gauge_wait_pane_t1_ParamLimits

0x9d13,	// (0x00044014) form_midp_gauge_wait_pane_t1

0x9d25,	// (0x00044026) form_midp_gauge_wait_pane_t2_ParamLimits

0x9d25,	// (0x00044026) form_midp_gauge_wait_pane_t2

0x0001,

0xf822,	// (0x00049b23) form_midp_gauge_wait_pane_t_ParamLimits

0xf822,	// (0x00049b23) form_midp_gauge_wait_pane_t

0x9d37,	// (0x00044038) form_midp_wait_pane_ParamLimits

0x9d37,	// (0x00044038) form_midp_wait_pane

0x9cdd,	// (0x00043fde) form_midp_image_pane_g1

0x9ce6,	// (0x00043fe7) form_midp_image_pane_t1

0x9cf5,	// (0x00043ff6) form_midp_image_pane_t2

0x9d04,	// (0x00044005) form_midp_image_pane_t3

0x0002,

0xf81b,	// (0x00049b1c) form_midp_image_pane_t

0x9cd4,	// (0x00043fd5) list_single_midp_pane_g1

0x525a,	// (0x0003f55b) list_single_midp_pane_t1

0x9cac,	// (0x00043fad) list_midp_form_item_pane_ParamLimits

0x9cac,	// (0x00043fad) list_midp_form_item_pane

0x939f,	// (0x000436a0) list_midp_form_item_pane_t1

0x93ae,	// (0x000436af) midp_ticker_pane_g1

0x93ba,	// (0x000436bb) midp_ticker_pane_g2

0x0001,

0xf763,	// (0x00049a64) midp_ticker_pane_g

0x93c6,	// (0x000436c7) midp_ticker_pane_t1

0xb0f0,	// (0x000453f1) midp_editing_number_pane_t1

0xb0ce,	// (0x000453cf) midp_editing_number_pane

0xb0dd,	// (0x000453de) midp_ticker_pane

0xae4d,	// (0x0004514e) ai_message_heading_pane

0x7d0c,	// (0x0004200d) bg_popup_window_pane_cp14

0xae55,	// (0x00045156) listscroll_ai_message_pane

0xadd7,	// (0x000450d8) ai_message_heading_pane_g1_ParamLimits

0xadd7,	// (0x000450d8) ai_message_heading_pane_g1

0xade3,	// (0x000450e4) ai_message_heading_pane_g2_ParamLimits

0xade3,	// (0x000450e4) ai_message_heading_pane_g2

0xadef,	// (0x000450f0) ai_message_heading_pane_g3_ParamLimits

0xadef,	// (0x000450f0) ai_message_heading_pane_g3

0xadfb,	// (0x000450fc) ai_message_heading_pane_g4_ParamLimits

0xadfb,	// (0x000450fc) ai_message_heading_pane_g4

0x0003,

0xf95c,	// (0x00049c5d) ai_message_heading_pane_g_ParamLimits

0xf95c,	// (0x00049c5d) ai_message_heading_pane_g

0xae07,	// (0x00045108) ai_message_heading_pane_t1_ParamLimits

0xae07,	// (0x00045108) ai_message_heading_pane_t1

0xae21,	// (0x00045122) ai_message_heading_pane_t2_ParamLimits

0xae21,	// (0x00045122) ai_message_heading_pane_t2

0x0001,

0xf965,	// (0x00049c66) ai_message_heading_pane_t_ParamLimits

0xf965,	// (0x00049c66) ai_message_heading_pane_t

0xae33,	// (0x00045134) bg_popup_heading_pane_cp1_ParamLimits

0xae33,	// (0x00045134) bg_popup_heading_pane_cp1

0xadc5,	// (0x000450c6) list_ai_message_pane_ParamLimits

0xadc5,	// (0x000450c6) list_ai_message_pane

0x87c8,	// (0x00042ac9) scroll_pane_cp10

0xad61,	// (0x00045062) list_ai_message_pane_g1

0xad69,	// (0x0004506a) list_ai_message_pane_g2

0x0001,

0xf939,	// (0x00049c3a) list_ai_message_pane_g

0xad71,	// (0x00045072) list_ai_message_pane_t1_ParamLimits

0xad71,	// (0x00045072) list_ai_message_pane_t1

0xad86,	// (0x00045087) list_ai_message_pane_t2_ParamLimits

0xad86,	// (0x00045087) list_ai_message_pane_t2

0xad9b,	// (0x0004509c) list_ai_message_pane_t3_ParamLimits

0xad9b,	// (0x0004509c) list_ai_message_pane_t3

0xadb0,	// (0x000450b1) list_ai_message_pane_t4_ParamLimits

0xadb0,	// (0x000450b1) list_ai_message_pane_t4

0x0003,

0xf93e,	// (0x00049c3f) list_ai_message_pane_t_ParamLimits

0xf93e,	// (0x00049c3f) list_ai_message_pane_t

0xad4c,	// (0x0004504d) cell_ai_soft_ind_pane_ParamLimits

0xad4c,	// (0x0004504d) cell_ai_soft_ind_pane

0x93d8,	// (0x000436d9) cell_ai_soft_ind_pane_g1_ParamLimits

0x93d8,	// (0x000436d9) cell_ai_soft_ind_pane_g1

0x7d0c,	// (0x0004200d) grid_highlight_cp1

0x93e5,	// (0x000436e6) text_secondary_cp56_ParamLimits

0x93e5,	// (0x000436e6) text_secondary_cp56

0xad21,	// (0x00045022) example_general_pane_ParamLimits

0xad21,	// (0x00045022) example_general_pane

0xad2d,	// (0x0004502e) example_parent_pane_g1_ParamLimits

0xad2d,	// (0x0004502e) example_parent_pane_g1

0xad39,	// (0x0004503a) example_parent_pane_t1_ParamLimits

0xad39,	// (0x0004503a) example_parent_pane_t1

0x6771,	// (0x00040a72) popup_preview_text_window_ParamLimits

0x6771,	// (0x00040a72) popup_preview_text_window

0x9210,	// (0x00043511) list_single_pane_cp2_g4

0x811d,	// (0x0004241e) bg_popup_preview_window_pane_ParamLimits

0x811d,	// (0x0004241e) bg_popup_preview_window_pane

0xaa71,	// (0x00044d72) popup_preview_text_window_t1_ParamLimits

0xaa71,	// (0x00044d72) popup_preview_text_window_t1

0xaa8f,	// (0x00044d90) popup_preview_text_window_t2_ParamLimits

0xaa8f,	// (0x00044d90) popup_preview_text_window_t2

0xaad8,	// (0x00044dd9) popup_preview_text_window_t3_ParamLimits

0xaad8,	// (0x00044dd9) popup_preview_text_window_t3

0xab1d,	// (0x00044e1e) popup_preview_text_window_t4_ParamLimits

0xab1d,	// (0x00044e1e) popup_preview_text_window_t4

0x0004,

0xf90d,	// (0x00049c0e) popup_preview_text_window_t_ParamLimits

0xf90d,	// (0x00049c0e) popup_preview_text_window_t

0xab9b,	// (0x00044e9c) scroll_pane_cp11

0x9b29,	// (0x00043e2a) bg_popup_preview_window_pane_g1

0xaa31,	// (0x00044d32) bg_popup_preview_window_pane_g2

0xaa39,	// (0x00044d3a) bg_popup_preview_window_pane_g3

0xaa41,	// (0x00044d42) bg_popup_preview_window_pane_g4

0xaa49,	// (0x00044d4a) bg_popup_preview_window_pane_g5

0xaa51,	// (0x00044d52) bg_popup_preview_window_pane_g6

0xaa59,	// (0x00044d5a) bg_popup_preview_window_pane_g7

0xaa61,	// (0x00044d62) bg_popup_preview_window_pane_g8

0x58b3,	// (0x0003fbb4) aid_popup_width_pane

0x674f,	// (0x00040a50) popup_midp_note_alarm_window_ParamLimits

0x674f,	// (0x00040a50) popup_midp_note_alarm_window

0x8658,	// (0x00042959) data_form_pane_ParamLimits

0x4ef7,	// (0x0003f1f8) form_field_data_pane_g1

0x4f01,	// (0x0003f202) form_field_data_pane_t1_ParamLimits

0x8664,	// (0x00042965) input_focus_pane_ParamLimits

0x4f19,	// (0x0003f21a) data_form_wide_pane_ParamLimits

0x4f2a,	// (0x0003f22b) form_field_data_wide_pane_g1

0x4f36,	// (0x0003f237) form_field_data_wide_pane_t1_ParamLimits

0x83c9,	// (0x000426ca) input_focus_pane_cp6_ParamLimits

0x8775,	// (0x00042a76) input_popup_find_pane_g1_ParamLimits

0x8775,	// (0x00042a76) input_popup_find_pane_g1

0x5ed1,	// (0x000401d2) aid_navi_side_left_pane

0x5ee6,	// (0x000401e7) aid_navi_side_right_pane

0xa44a,	// (0x0004474b) bg_popup_window_pane_cp30_ParamLimits

0xa44a,	// (0x0004474b) bg_popup_window_pane_cp30

0xa4c4,	// (0x000447c5) popup_midp_note_alarm_window_g1_ParamLimits

0xa4c4,	// (0x000447c5) popup_midp_note_alarm_window_g1

0xa4f4,	// (0x000447f5) popup_midp_note_alarm_window_t1_ParamLimits

0xa4f4,	// (0x000447f5) popup_midp_note_alarm_window_t1

0xa595,	// (0x00044896) popup_midp_note_alarm_window_t2_ParamLimits

0xa595,	// (0x00044896) popup_midp_note_alarm_window_t2

0xa643,	// (0x00044944) popup_midp_note_alarm_window_t3_ParamLimits

0xa643,	// (0x00044944) popup_midp_note_alarm_window_t3

0xa675,	// (0x00044976) popup_midp_note_alarm_window_t4_ParamLimits

0xa675,	// (0x00044976) popup_midp_note_alarm_window_t4

0xa69b,	// (0x0004499c) popup_midp_note_alarm_window_t5_ParamLimits

0xa69b,	// (0x0004499c) popup_midp_note_alarm_window_t5

0x000a,

0xf8aa,	// (0x00049bab) popup_midp_note_alarm_window_t_ParamLimits

0xf8aa,	// (0x00049bab) popup_midp_note_alarm_window_t

0xa747,	// (0x00044a48) wait_bar_pane_cp1_ParamLimits

0xa747,	// (0x00044a48) wait_bar_pane_cp1

0x7d0c,	// (0x0004200d) wait_anim_pane_copy1

0x7d0c,	// (0x0004200d) wait_border_pane_copy1

0xa130,	// (0x00044431) wait_border_pane_g1_copy1

0x4f50,	// (0x0003f251) form_field_popup_pane_g1

0x4f58,	// (0x0003f259) form_field_popup_pane_t1_ParamLimits

0x8664,	// (0x00042965) input_focus_pane_cp7_ParamLimits

0x8686,	// (0x00042987) list_form_pane_ParamLimits

0x4f70,	// (0x0003f271) form_field_popup_wide_pane_g1

0x4f78,	// (0x0003f279) form_field_popup_wide_pane_t1_ParamLimits

0x8664,	// (0x00042965) input_focus_pane_cp8_ParamLimits

0x8692,	// (0x00042993) list_form_wide_pane_ParamLimits

0xb219,	// (0x0004551a) aid_size_cell_graphic_pane

0x5002,	// (0x0003f303) data_form_pane_t1_ParamLimits

0x52bc,	// (0x0003f5bd) data_form_wide_pane_t1_ParamLimits

0x96f6,	// (0x000439f7) bg_status_flat_pane

0x7d4c,	// (0x0004204d) title_pane_t1_ParamLimits

0x7db4,	// (0x000420b5) title_pane_t2_ParamLimits

0x7dda,	// (0x000420db) title_pane_t3_ParamLimits

0xf55d,	// (0x0004985e) title_pane_t_ParamLimits

0x8c43,	// (0x00042f44) level_1_signal_ParamLimits

0x8c55,	// (0x00042f56) level_2_signal_ParamLimits

0x8c68,	// (0x00042f69) level_3_signal_ParamLimits

0x8c7b,	// (0x00042f7c) level_4_signal_ParamLimits

0x8c8e,	// (0x00042f8f) level_5_signal_ParamLimits

0x8ca1,	// (0x00042fa2) level_6_signal_ParamLimits

0x8cb4,	// (0x00042fb5) level_7_signal_ParamLimits

0x8c43,	// (0x00042f44) level_1_battery_ParamLimits

0x8c55,	// (0x00042f56) level_2_battery_ParamLimits

0x8c68,	// (0x00042f69) level_3_battery_ParamLimits

0x8c7b,	// (0x00042f7c) level_4_battery_ParamLimits

0x8c8e,	// (0x00042f8f) level_5_battery_ParamLimits

0x8ca1,	// (0x00042fa2) level_6_battery_ParamLimits

0x8cb4,	// (0x00042fb5) level_7_battery_ParamLimits

0xa34f,	// (0x00044650) bg_status_flat_pane_g1

0xa357,	// (0x00044658) bg_status_flat_pane_g2

0xa35f,	// (0x00044660) bg_status_flat_pane_g3

0xa367,	// (0x00044668) bg_status_flat_pane_g4

0xa36f,	// (0x00044670) bg_status_flat_pane_g5

0xa377,	// (0x00044678) bg_status_flat_pane_g6

0xa37f,	// (0x00044680) bg_status_flat_pane_g7

0x7e02,	// (0x00042103) tabs_3_active_pane_t1_ParamLimits

0x7e02,	// (0x00042103) tabs_3_passive_pane_t1_ParamLimits

0x7e1c,	// (0x0004211d) tabs_4_active_pane_t1_ParamLimits

0x7e1c,	// (0x0004211d) tabs_4_1_passive_pane_t1_ParamLimits

0x8809,	// (0x00042b0a) tabs_2_active_pane_t1_ParamLimits

0x8809,	// (0x00042b0a) tabs_2_passive_pane_t1_ParamLimits

0x881b,	// (0x00042b1c) bg_active_tab_pane_cp4_ParamLimits

0x8829,	// (0x00042b2a) tabs_2_long_active_pane_t1_ParamLimits

0x883c,	// (0x00042b3d) bg_passive_tab_pane_cp4_ParamLimits

0x6a1e,	// (0x00040d1f) list_single_midp_graphic_pane_t1_ParamLimits

0x881b,	// (0x00042b1c) bg_active_tab_pane_cp5_ParamLimits

0x8848,	// (0x00042b49) tabs_3_long_active_pane_t1_ParamLimits

0x883c,	// (0x00042b3d) bg_passive_tab_pane_cp5_ParamLimits

0x6a1e,	// (0x00040d1f) list_single_midp_graphic_pane_t1

0x96f6,	// (0x000439f7) bg_status_flat_pane_ParamLimits

0x97b9,	// (0x00043aba) indicator_pane_cp2_ParamLimits

0x97b9,	// (0x00043aba) indicator_pane_cp2

0x98e4,	// (0x00043be5) navi_pane_srt_ParamLimits

0x98e4,	// (0x00043be5) navi_pane_srt

0x9908,	// (0x00043c09) popup_clock_digital_analogue_window_cp1

0x7ec9,	// (0x000421ca) indicator_pane_t1

0x92df,	// (0x000435e0) copy_highlight_pane

0x92df,	// (0x000435e0) cursor_graphics_pane

0x92df,	// (0x000435e0) graphic_within_text_pane

0x92df,	// (0x000435e0) link_highlight_pane

0xab5e,	// (0x00044e5f) popup_preview_text_window_t5_ParamLimits

0xab5e,	// (0x00044e5f) popup_preview_text_window_t5

0x93ff,	// (0x00043700) cursor_digital_pane

0x93ff,	// (0x00043700) cursor_primary_pane

0x9410,	// (0x00043711) cursor_primary_small_pane

0x9418,	// (0x00043719) cursor_secondary_pane

0x9420,	// (0x00043721) cursor_title_pane

0x93ff,	// (0x00043700) link_highlight_digital_pane

0x9407,	// (0x00043708) link_highlight_primary_pane

0x9410,	// (0x00043711) link_highlight_primary_small_pane

0x9418,	// (0x00043719) link_highlight_secondary_pane

0x9420,	// (0x00043721) link_highlight_title_pane

0x93ff,	// (0x00043700) copy_highlight_digital_pane

0x93ff,	// (0x00043700) copy_highlight_primary_pane

0x9410,	// (0x00043711) copy_highlight_primary_small_pane

0x9418,	// (0x00043719) copy_highlight_secondary_pane

0x9420,	// (0x00043721) copy_highlight_title_pane

0x9418,	// (0x00043719) graphic_text_digital_pane

0xa3ed,	// (0x000446ee) graphic_text_primary_pane

0xa3f6,	// (0x000446f7) graphic_text_primary_small_pane

0x9410,	// (0x00043711) graphic_text_secondary_pane

0x93ff,	// (0x00043700) graphic_text_title_pane

0x9428,	// (0x00043729) cursor_primary_pane_g1

0xa3df,	// (0x000446e0) cursor_text_primary_t1

0xa3c7,	// (0x000446c8) cursor_primary_small_pane_g1

0xa3d1,	// (0x000446d2) cursor_text_primary_small_t1

0xa3af,	// (0x000446b0) cursor_primary_small_pane_g1_copy1

0xa3b9,	// (0x000446ba) cursor_text_primary_small_t1_copy1

0xa397,	// (0x00044698) cursor_text_title_t1

0xa3a5,	// (0x000446a6) cursor_title_pane_g1

0x9428,	// (0x00043729) cursor_digital_pane_g1

0x9432,	// (0x00043733) cursor_text_digital_t1

0x9457,	// (0x00043758) link_highlight_primary_pane_g1

0xa340,	// (0x00044641) link_highlight_primary_pane_t1

0x9440,	// (0x00043741) link_highlight_primary_small_pane_g1

0x9448,	// (0x00043749) link_highlight_primary_small_pane_t1

0x9457,	// (0x00043758) link_highlight_secondary_pane_g1

0x945f,	// (0x00043760) link_highlight_secondary_pane_t1

0xa2b4,	// (0x000445b5) link_highlight_title_pane_g1

0xa2bc,	// (0x000445bd) link_highlight_title_pane_t1

0xa29d,	// (0x0004459e) link_highlight_digital_pane_g1

0xa2a5,	// (0x000445a6) link_highlight_digital_pane_t1

0xa175,	// (0x00044476) copy_highlight_primary_pane_g1

0xa17d,	// (0x0004447e) copy_highlight_primary_pane_t1

0xa14f,	// (0x00044450) copy_highlight_primary_small_pane_g1

0xa166,	// (0x00044467) copy_highlight_primary_small_pane_t1

0x946e,	// (0x0004376f) copy_highlight_secondary_pane_g1

0x9476,	// (0x00043777) copy_highlight_secondary_pane_t1

0xa14f,	// (0x00044450) copy_highlight_title_pane_g1

0xa157,	// (0x00044458) copy_highlight_title_pane_t1

0xa175,	// (0x00044476) copy_highlight_digital_pane_g1

0xb3e3,	// (0x000456e4) copy_highlight_digital_pane_t1

0xb337,	// (0x00045638) graphic_text_primary_pane_g1

0xb3c7,	// (0x000456c8) graphic_text_primary_pane_t1

0xb3d5,	// (0x000456d6) graphic_text_primary_pane_t2

0x0001,

0xf9d9,	// (0x00049cda) graphic_text_primary_pane_t

0xb3a3,	// (0x000456a4) graphic_text_primary_small_pane_g1

0xb3ab,	// (0x000456ac) graphic_text_primary_small_pane_t1

0xb3b9,	// (0x000456ba) graphic_text_primary_small_pane_t2

0x0001,

0xf9d4,	// (0x00049cd5) graphic_text_primary_small_pane_t

0xb37f,	// (0x00045680) graphic_text_secondary_pane_g1

0xb387,	// (0x00045688) graphic_text_secondary_pane_t1

0xb395,	// (0x00045696) graphic_text_secondary_pane_t2

0x0001,

0xf9cf,	// (0x00049cd0) graphic_text_secondary_pane_t

0xb35b,	// (0x0004565c) graphic_text_title_pane_g1

0xb363,	// (0x00045664) graphic_text_title_pane_t1

0xb371,	// (0x00045672) graphic_text_title_pane_t2

0x0001,

0xf9ca,	// (0x00049ccb) graphic_text_title_pane_t

0xb337,	// (0x00045638) graphic_text_digital_pane_g1

0xb33f,	// (0x00045640) graphic_text_digital_pane_t1

0xb34d,	// (0x0004564e) graphic_text_digital_pane_t2

0x0001,

0xf9c5,	// (0x00049cc6) graphic_text_digital_pane_t

0x7dec,	// (0x000420ed) navi_icon_pane_srt_ParamLimits

0x7dec,	// (0x000420ed) navi_icon_pane_srt

0x7d0c,	// (0x0004200d) navi_midp_pane_srt

0x7d0c,	// (0x0004200d) navi_navi_pane_srt

0x7dec,	// (0x000420ed) navi_text_pane_srt_ParamLimits

0x7dec,	// (0x000420ed) navi_text_pane_srt

0xb302,	// (0x00045603) navi_navi_icon_text_pane_srt

0xb30a,	// (0x0004560b) navi_navi_pane_srt_g1_ParamLimits

0xb30a,	// (0x0004560b) navi_navi_pane_srt_g1

0xb31c,	// (0x0004561d) navi_navi_pane_srt_g2_ParamLimits

0xb31c,	// (0x0004561d) navi_navi_pane_srt_g2

0x0001,

0xf9c0,	// (0x00049cc1) navi_navi_pane_srt_g_ParamLimits

0xf9c0,	// (0x00049cc1) navi_navi_pane_srt_g

0xb32e,	// (0x0004562f) navi_navi_tabs_pane_srt

0xb302,	// (0x00045603) navi_navi_text_pane_srt

0xb302,	// (0x00045603) navi_navi_volume_pane_srt

0xb2f3,	// (0x000455f4) navi_navi_text_pane_srt_t1

0x6e04,	// (0x00041105) navi_navi_volume_pane_srt_g1

0x6e0c,	// (0x0004110d) volume_small_pane_srt_ParamLimits

0x6e0c,	// (0x0004110d) volume_small_pane_srt

0x61cd,	// (0x000404ce) volume_small_pane_srt_g1_ParamLimits

0x61cd,	// (0x000404ce) volume_small_pane_srt_g1

0x61dd,	// (0x000404de) volume_small_pane_srt_g2_ParamLimits

0x61dd,	// (0x000404de) volume_small_pane_srt_g2

0x61ee,	// (0x000404ef) volume_small_pane_srt_g3_ParamLimits

0x61ee,	// (0x000404ef) volume_small_pane_srt_g3

0x61ff,	// (0x00040500) volume_small_pane_srt_g4_ParamLimits

0x61ff,	// (0x00040500) volume_small_pane_srt_g4

0x6210,	// (0x00040511) volume_small_pane_srt_g5_ParamLimits

0x6210,	// (0x00040511) volume_small_pane_srt_g5

0x6221,	// (0x00040522) volume_small_pane_srt_g6_ParamLimits

0x6221,	// (0x00040522) volume_small_pane_srt_g6

0x6232,	// (0x00040533) volume_small_pane_srt_g7_ParamLimits

0x6232,	// (0x00040533) volume_small_pane_srt_g7

0x6243,	// (0x00040544) volume_small_pane_srt_g8_ParamLimits

0x6243,	// (0x00040544) volume_small_pane_srt_g8

0x6254,	// (0x00040555) volume_small_pane_srt_g9_ParamLimits

0x6254,	// (0x00040555) volume_small_pane_srt_g9

0x6265,	// (0x00040566) volume_small_pane_srt_g10_ParamLimits

0x6265,	// (0x00040566) volume_small_pane_srt_g10

0x0009,

0xf768,	// (0x00049a69) volume_small_pane_srt_g_ParamLimits

0xf768,	// (0x00049a69) volume_small_pane_srt_g

0x81c6,	// (0x000424c7) query_popup_data_pane_cp2

0xb2d9,	// (0x000455da) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb2d9,	// (0x000455da) navi_navi_icon_text_pane_srt_t1

0xa3ed,	// (0x000446ee) navi_tabs_2_long_pane_srt

0xa3ed,	// (0x000446ee) navi_tabs_2_pane_srt

0xa3ed,	// (0x000446ee) navi_tabs_3_long_pane_srt

0xa3ed,	// (0x000446ee) navi_tabs_3_pane_srt

0xa3ed,	// (0x000446ee) navi_tabs_4_pane_srt

0x6de4,	// (0x000410e5) tabs_2_active_pane_srt_ParamLimits

0x6de4,	// (0x000410e5) tabs_2_active_pane_srt

0x6df4,	// (0x000410f5) tabs_2_passive_pane_srt_ParamLimits

0x6df4,	// (0x000410f5) tabs_2_passive_pane_srt

0x961f,	// (0x00043920) bg_passive_tab_pane_cp1_srt_ParamLimits

0x961f,	// (0x00043920) bg_passive_tab_pane_cp1_srt

0xb2a5,	// (0x000455a6) bg_passive_tab_pane_g1_cp1_srt

0x8f2c,	// (0x0004322d) bg_passive_tab_pane_g2_cp1_srt

0xb2ae,	// (0x000455af) bg_passive_tab_pane_g3_cp1_srt

0x7dec,	// (0x000420ed) bg_active_tab_pane_cp1_srt_ParamLimits

0x7dec,	// (0x000420ed) bg_active_tab_pane_cp1_srt

0xb2b7,	// (0x000455b8) tabs_2_active_pane_srt_g1

0xb2bf,	// (0x000455c0) tabs_2_active_pane_srt_t1_ParamLimits

0xb2bf,	// (0x000455c0) tabs_2_active_pane_srt_t1

0xb2a5,	// (0x000455a6) bg_active_tab_pane_g1_cp1_srt

0x8f2c,	// (0x0004322d) bg_active_tab_pane_g2_cp1_srt

0xb2ae,	// (0x000455af) bg_active_tab_pane_g3_cp1_srt

0x6db1,	// (0x000410b2) tabs_3_active_pane_srt_ParamLimits

0x6db1,	// (0x000410b2) tabs_3_active_pane_srt

0x6dc2,	// (0x000410c3) tabs_3_passive_pane_cp_srt_ParamLimits

0x6dc2,	// (0x000410c3) tabs_3_passive_pane_cp_srt

0x6dd3,	// (0x000410d4) tabs_3_passive_pane_srt_ParamLimits

0x6dd3,	// (0x000410d4) tabs_3_passive_pane_srt

0x961f,	// (0x00043920) bg_passive_tab_pane_cp2_srt_ParamLimits

0x961f,	// (0x00043920) bg_passive_tab_pane_cp2_srt

0x9485,	// (0x00043786) bg_passive_tab_pane_g1_cp2_srt

0x8f2c,	// (0x0004322d) bg_passive_tab_pane_g2_cp2_srt

0x948e,	// (0x0004378f) bg_passive_tab_pane_g3_cp2_srt

0x7dec,	// (0x000420ed) bg_active_tab_pane_cp2_srt_ParamLimits

0x7dec,	// (0x000420ed) bg_active_tab_pane_cp2_srt

0xb28b,	// (0x0004558c) tabs_3_active_pane_srt_g1

0xb293,	// (0x00045594) tabs_3_active_pane_srt_t1_ParamLimits

0xb293,	// (0x00045594) tabs_3_active_pane_srt_t1

0x9485,	// (0x00043786) bg_active_tab_pane_g1_cp2_srt

0x8f2c,	// (0x0004322d) bg_active_tab_pane_g2_cp2_srt

0x948e,	// (0x0004378f) bg_active_tab_pane_g3_cp2_srt

0x6d69,	// (0x0004106a) tabs_4_active_pane_srt_ParamLimits

0x6d69,	// (0x0004106a) tabs_4_active_pane_srt

0x6d7b,	// (0x0004107c) tabs_4_passive_pane_cp2_srt_ParamLimits

0x6d7b,	// (0x0004107c) tabs_4_passive_pane_cp2_srt

0x63ca,	// (0x000406cb) aid_size_cell_toolbar

0x883c,	// (0x00042b3d) main_idle_act_pane_ParamLimits

0x6585,	// (0x00040886) popup_large_graphic_colour_window_ParamLimits

0x68ec,	// (0x00040bed) popup_toolbar_window_ParamLimits

0x68ec,	// (0x00040bed) popup_toolbar_window

0xb0ff,	// (0x00045400) list_single_graphic_2heading_pane_ParamLimits

0xb0ff,	// (0x00045400) list_single_graphic_2heading_pane

0x89f8,	// (0x00042cf9) aid_size_cell_apps_grid_lsc_pane

0x8a0a,	// (0x00042d0b) aid_size_cell_apps_grid_prt_pane

0x961f,	// (0x00043920) bg_wml_button_pane_cp1_ParamLimits

0x961f,	// (0x00043920) bg_wml_button_pane_cp1

0x9dd3,	// (0x000440d4) form_midp_field_text_pane_t1_ParamLimits

0x9b9d,	// (0x00043e9e) input_focus_pane_cp050_ParamLimits

0x9e0a,	// (0x0004410b) list_midp_form_text_pane_ParamLimits

0x9db0,	// (0x000440b1) input_focus_pane_cp051_ParamLimits

0x9dc4,	// (0x000440c5) list_midp_choice_pane_ParamLimits

0x9c56,	// (0x00043f57) list_single_2graphic_pane_cp3_ParamLimits

0x9c56,	// (0x00043f57) list_single_2graphic_pane_cp3

0x9c7a,	// (0x00043f7b) list_single_midp_graphic_pane_ParamLimits

0x9c7a,	// (0x00043f7b) list_single_midp_graphic_pane

0x512c,	// (0x0003f42d) list_single_graphic_2heading_pane_g1_ParamLimits

0x512c,	// (0x0003f42d) list_single_graphic_2heading_pane_g1

0x5138,	// (0x0003f439) list_single_graphic_2heading_pane_g4_ParamLimits

0x5138,	// (0x0003f439) list_single_graphic_2heading_pane_g4

0x5144,	// (0x0003f445) list_single_graphic_2heading_pane_g5_ParamLimits

0x5144,	// (0x0003f445) list_single_graphic_2heading_pane_g5

0x0002,

0xf7bb,	// (0x00049abc) list_single_graphic_2heading_pane_g_ParamLimits

0xf7bb,	// (0x00049abc) list_single_graphic_2heading_pane_g

0x5150,	// (0x0003f451) list_single_graphic_2heading_pane_t1_ParamLimits

0x5150,	// (0x0003f451) list_single_graphic_2heading_pane_t1

0x5164,	// (0x0003f465) list_single_graphic_2heading_pane_t2_ParamLimits

0x5164,	// (0x0003f465) list_single_graphic_2heading_pane_t2

0x5180,	// (0x0003f481) list_single_graphic_2heading_pane_t3_ParamLimits

0x5180,	// (0x0003f481) list_single_graphic_2heading_pane_t3

0x0002,

0xf7c2,	// (0x00049ac3) list_single_graphic_2heading_pane_t_ParamLimits

0xf7c2,	// (0x00049ac3) list_single_graphic_2heading_pane_t

0x9a67,	// (0x00043d68) bg_popup_sub_pane_cp2

0x9a91,	// (0x00043d92) grid_toobar_pane

0x6999,	// (0x00040c9a) cell_toolbar_pane_ParamLimits

0x6999,	// (0x00040c9a) cell_toolbar_pane

0x9acd,	// (0x00043dce) cell_toolbar_pane_g1_ParamLimits

0x9acd,	// (0x00043dce) cell_toolbar_pane_g1

0x9ae1,	// (0x00043de2) cell_toolbar_pane_g2_ParamLimits

0x9ae1,	// (0x00043de2) cell_toolbar_pane_g2

0x0001,

0xf7d0,	// (0x00049ad1) cell_toolbar_pane_g_ParamLimits

0xf7d0,	// (0x00049ad1) cell_toolbar_pane_g

0x9b03,	// (0x00043e04) grid_highlight_pane_cp2_ParamLimits

0x9b03,	// (0x00043e04) grid_highlight_pane_cp2

0x9b1d,	// (0x00043e1e) toolbar_button_pane

0x9b29,	// (0x00043e2a) toolbar_button_pane_g1

0x9b31,	// (0x00043e32) toolbar_button_pane_g2

0x9b39,	// (0x00043e3a) toolbar_button_pane_g3

0x9b41,	// (0x00043e42) toolbar_button_pane_g4

0x9b49,	// (0x00043e4a) toolbar_button_pane_g5

0x9b51,	// (0x00043e52) toolbar_button_pane_g6

0x9b59,	// (0x00043e5a) toolbar_button_pane_g7

0x9b61,	// (0x00043e62) toolbar_button_pane_g8

0x9b69,	// (0x00043e6a) toolbar_button_pane_g9

0x0009,

0xf7d5,	// (0x00049ad6) toolbar_button_pane_g

0x69dd,	// (0x00040cde) list_single_2graphic_pane_g1_cp3_ParamLimits

0x69dd,	// (0x00040cde) list_single_2graphic_pane_g1_cp3

0x69e9,	// (0x00040cea) list_single_2graphic_pane_g2_cp3_ParamLimits

0x69e9,	// (0x00040cea) list_single_2graphic_pane_g2_cp3

0x69fa,	// (0x00040cfb) list_single_2graphic_pane_g3_cp3

0x6080,	// (0x00040381) list_single_2graphic_pane_g4_cp3_ParamLimits

0x6080,	// (0x00040381) list_single_2graphic_pane_g4_cp3

0x6a02,	// (0x00040d03) list_single_2graphic_pane_t1_cp3_ParamLimits

0x6a02,	// (0x00040d03) list_single_2graphic_pane_t1_cp3

0x9e24,	// (0x00044125) list_single_midp_graphic_pane_g2_ParamLimits

0x9e24,	// (0x00044125) list_single_midp_graphic_pane_g2

0x511c,	// (0x0003f41d) aid_zoom_text_primary

0x63d2,	// (0x000406d3) aid_zoom_text_secondary

0x9542,	// (0x00043843) status_small_pane_g7_ParamLimits

0x9542,	// (0x00043843) status_small_pane_g7

0x9565,	// (0x00043866) status_small_pane_t1_ParamLimits

0x7d23,	// (0x00042024) title_pane_g2

0x0003,

0xf554,	// (0x00049855) title_pane_g

0x8267,	// (0x00042568) aid_size_cell_colour_1_pane_ParamLimits

0x8267,	// (0x00042568) aid_size_cell_colour_1_pane

0x827b,	// (0x0004257c) aid_size_cell_colour_2_pane_ParamLimits

0x827b,	// (0x0004257c) aid_size_cell_colour_2_pane

0x828f,	// (0x00042590) aid_size_cell_colour_3_pane_ParamLimits

0x828f,	// (0x00042590) aid_size_cell_colour_3_pane

0x82a3,	// (0x000425a4) aid_size_cell_colour_4_pane_ParamLimits

0x82a3,	// (0x000425a4) aid_size_cell_colour_4_pane

0x5e0e,	// (0x0004010f) title_pane_stacon_g1_ParamLimits

0x5e0e,	// (0x0004010f) title_pane_stacon_g1

0xa1d4,	// (0x000444d5) popup_note_wait_window_g3_ParamLimits

0xa1d4,	// (0x000444d5) popup_note_wait_window_g3

0xa24a,	// (0x0004454b) popup_note_wait_window_t5_ParamLimits

0xa24a,	// (0x0004454b) popup_note_wait_window_t5

0x7d0c,	// (0x0004200d) main_feb_china_hwr_fs_writing_pane

0x646a,	// (0x0004076b) popup_feb_china_hwr_fs_window_ParamLimits

0x646a,	// (0x0004076b) popup_feb_china_hwr_fs_window

0x6a4c,	// (0x00040d4d) aid_size_cell_hwr_fs_ParamLimits

0x6a4c,	// (0x00040d4d) aid_size_cell_hwr_fs

0x9b9d,	// (0x00043e9e) bg_popup_sub_pane_cp3_ParamLimits

0x9b9d,	// (0x00043e9e) bg_popup_sub_pane_cp3

0x6a61,	// (0x00040d62) grid_hwr_fs_pane_ParamLimits

0x6a61,	// (0x00040d62) grid_hwr_fs_pane

0x6a79,	// (0x00040d7a) linegrid_hwr_fs_pane_ParamLimits

0x6a79,	// (0x00040d7a) linegrid_hwr_fs_pane

0x6a89,	// (0x00040d8a) cell_hwr_fs_pane_ParamLimits

0x6a89,	// (0x00040d8a) cell_hwr_fs_pane

0x9ba9,	// (0x00043eaa) linegrid_hwr_fs_pane_g1_ParamLimits

0x9ba9,	// (0x00043eaa) linegrid_hwr_fs_pane_g1

0x9bb5,	// (0x00043eb6) linegrid_hwr_fs_pane_g2_ParamLimits

0x9bb5,	// (0x00043eb6) linegrid_hwr_fs_pane_g2

0x9bc7,	// (0x00043ec8) linegrid_hwr_fs_pane_g3_ParamLimits

0x9bc7,	// (0x00043ec8) linegrid_hwr_fs_pane_g3

0x6aab,	// (0x00040dac) linegrid_hwr_fs_pane_g4_ParamLimits

0x6aab,	// (0x00040dac) linegrid_hwr_fs_pane_g4

0x6ac5,	// (0x00040dc6) linegrid_hwr_fs_pane_g5_ParamLimits

0x6ac5,	// (0x00040dc6) linegrid_hwr_fs_pane_g5

0x0004,

0xf800,	// (0x00049b01) linegrid_hwr_fs_pane_g_ParamLimits

0xf800,	// (0x00049b01) linegrid_hwr_fs_pane_g

0x9bd3,	// (0x00043ed4) cell_hwr_fs_pane_g1_ParamLimits

0x9bd3,	// (0x00043ed4) cell_hwr_fs_pane_g1

0x999e,	// (0x00043c9f) cell_hwr_fs_pane_g2_ParamLimits

0x999e,	// (0x00043c9f) cell_hwr_fs_pane_g2

0x9be9,	// (0x00043eea) cell_hwr_fs_pane_g3_ParamLimits

0x9be9,	// (0x00043eea) cell_hwr_fs_pane_g3

0x9bf6,	// (0x00043ef7) cell_hwr_fs_pane_g4_ParamLimits

0x9bf6,	// (0x00043ef7) cell_hwr_fs_pane_g4

0x0003,

0xf80b,	// (0x00049b0c) cell_hwr_fs_pane_g_ParamLimits

0xf80b,	// (0x00049b0c) cell_hwr_fs_pane_g

0x6adb,	// (0x00040ddc) cell_hwr_fs_pane_t1

0x7d0c,	// (0x0004200d) grid_highlight_pane_cp6

0x7d0c,	// (0x0004200d) main_idle_act2_pane

0x87af,	// (0x00042ab0) aid_inside_area_popup_secondary

0xa881,	// (0x00044b82) aid_inside_area_window_primary_ParamLimits

0xa881,	// (0x00044b82) aid_inside_area_window_primary

0xb3f2,	// (0x000456f3) ai2_news_ticker_pane

0xb3fa,	// (0x000456fb) aid_size_cell_ai1_link_ParamLimits

0xb3fa,	// (0x000456fb) aid_size_cell_ai1_link

0xb414,	// (0x00045715) popup_ai2_data_window_ParamLimits

0xb414,	// (0x00045715) popup_ai2_data_window

0xb42a,	// (0x0004572b) popup_ai2_link_window_ParamLimits

0xb42a,	// (0x0004572b) popup_ai2_link_window

0x9b9d,	// (0x00043e9e) bg_popup_sub_pane_cp4_ParamLimits

0x9b9d,	// (0x00043e9e) bg_popup_sub_pane_cp4

0xb43e,	// (0x0004573f) grid_ai2_link_pane_ParamLimits

0xb43e,	// (0x0004573f) grid_ai2_link_pane

0xb455,	// (0x00045756) popup_ai2_link_window_g1_ParamLimits

0xb455,	// (0x00045756) popup_ai2_link_window_g1

0xb461,	// (0x00045762) popup_ai2_link_window_g2_ParamLimits

0xb461,	// (0x00045762) popup_ai2_link_window_g2

0x0001,

0xf9de,	// (0x00049cdf) popup_ai2_link_window_g_ParamLimits

0xf9de,	// (0x00049cdf) popup_ai2_link_window_g

0xb470,	// (0x00045771) ai2_mp_button_pane

0xb478,	// (0x00045779) ai2_mp_volume_pane

0x9db0,	// (0x000440b1) bg_popup_sub_pane_cp5_ParamLimits

0x9db0,	// (0x000440b1) bg_popup_sub_pane_cp5

0xb480,	// (0x00045781) heading_ai2_gene_pane_ParamLimits

0xb480,	// (0x00045781) heading_ai2_gene_pane

0xb48c,	// (0x0004578d) list_ai2_gene_pane_ParamLimits

0xb48c,	// (0x0004578d) list_ai2_gene_pane

0xb4d4,	// (0x000457d5) cell_ai2_link_pane_ParamLimits

0xb4d4,	// (0x000457d5) cell_ai2_link_pane

0xb4ea,	// (0x000457eb) cell_ai2_link_pane_g1

0x7d0c,	// (0x0004200d) grid_highlight_pane_cp7

0x6e21,	// (0x00041122) ai2_mp_volume_pane_g1

0xb5ba,	// (0x000458bb) ai2_mp_volume_pane_g2

0xb52f,	// (0x00045830) list_ai2_gene_pane_t1

0xb5c2,	// (0x000458c3) ai2_mp_volume_pane_g3

0x0002,

0xf9f7,	// (0x00049cf8) ai2_mp_volume_pane_g

0x6e29,	// (0x0004112a) volume_small_pane_cp3

0xb5ca,	// (0x000458cb) aid_size_cell_ai2_button

0xb5d2,	// (0x000458d3) grid_ai2_button_pane

0xb5db,	// (0x000458dc) cell_ai2_button_pane_ParamLimits

0xb5db,	// (0x000458dc) cell_ai2_button_pane

0x7d02,	// (0x00042003) cell_ai2_button_pane_g1

0x7d0c,	// (0x0004200d) grid_highlight_pane_cp8

0xb57a,	// (0x0004587b) ai2_gene_pane_t1_ParamLimits

0xb57a,	// (0x0004587b) ai2_gene_pane_t1

0x63c0,	// (0x000406c1) aid_height_parent_landscape

0xaf36,	// (0x00045237) aid_height_set_list

0xaf47,	// (0x00045248) aid_size_parent

0xb219,	// (0x0004551a) aid_size_cell_graphic_pane_ParamLimits

0xb49c,	// (0x0004579d) popup_ai2_data_window_g1_ParamLimits

0xb49c,	// (0x0004579d) popup_ai2_data_window_g1

0xb4a8,	// (0x000457a9) ai2_news_ticker_pane_g1

0xb4b0,	// (0x000457b1) ai2_news_ticker_pane_g2

0x0001,

0xf9e3,	// (0x00049ce4) ai2_news_ticker_pane_g

0xb4b8,	// (0x000457b9) ai2_news_ticker_pane_t1

0xb4c6,	// (0x000457c7) ai2_news_ticker_pane_t2

0x0001,

0xf9e8,	// (0x00049ce9) ai2_news_ticker_pane_t

0xb4f3,	// (0x000457f4) heading_ai2_gene_pane_g1

0xb4fb,	// (0x000457fc) heading_ai2_gene_pane_t1_ParamLimits

0xb4fb,	// (0x000457fc) heading_ai2_gene_pane_t1

0xb510,	// (0x00045811) list_highlight_pane_cp6

0xb518,	// (0x00045819) ai2_gene_pane_ParamLimits

0xb518,	// (0x00045819) ai2_gene_pane

0xb53d,	// (0x0004583e) list_ai2_gene_pane_t2

0x0001,

0xf9ed,	// (0x00049cee) list_ai2_gene_pane_t

0xb54b,	// (0x0004584c) list_highlight_pane_cp8_ParamLimits

0xb54b,	// (0x0004584c) list_highlight_pane_cp8

0xb55c,	// (0x0004585d) ai2_gene_pane_g1_ParamLimits

0xb55c,	// (0x0004585d) ai2_gene_pane_g1

0xb56e,	// (0x0004586f) ai2_gene_pane_g2_ParamLimits

0xb56e,	// (0x0004586f) ai2_gene_pane_g2

0x0001,

0xf9f2,	// (0x00049cf3) ai2_gene_pane_g_ParamLimits

0xf9f2,	// (0x00049cf3) ai2_gene_pane_g

0x85ee,	// (0x000428ef) scroll_pane_cp12

0x637f,	// (0x00040680) control_pane_t3_ParamLimits

0x637f,	// (0x00040680) control_pane_t3

0x9556,	// (0x00043857) status_small_pane_g8_ParamLimits

0x9556,	// (0x00043857) status_small_pane_g8

0x6550,	// (0x00040851) popup_find_window_ParamLimits

0x6763,	// (0x00040a64) popup_note_image_window_ParamLimits

0x5198,	// (0x0003f499) list_double2_graphic_pane_vc_g1_ParamLimits

0x5198,	// (0x0003f499) list_double2_graphic_pane_vc_g1

0x9218,	// (0x00043519) list_double2_graphic_pane_vc_g2_ParamLimits

0x9218,	// (0x00043519) list_double2_graphic_pane_vc_g2

0x69c9,	// (0x00040cca) list_double2_graphic_pane_vc_g3_ParamLimits

0x69c9,	// (0x00040cca) list_double2_graphic_pane_vc_g3

0x0002,

0xf7c9,	// (0x00049aca) list_double2_graphic_pane_vc_g_ParamLimits

0xf7c9,	// (0x00049aca) list_double2_graphic_pane_vc_g

0x51a4,	// (0x0003f4a5) list_double2_graphic_pane_vc_t1_ParamLimits

0x51a4,	// (0x0003f4a5) list_double2_graphic_pane_vc_t1

0x9218,	// (0x00043519) list_single_heading_pane_vc_g1_ParamLimits

0x9218,	// (0x00043519) list_single_heading_pane_vc_g1

0x69c9,	// (0x00040cca) list_single_heading_pane_vc_g2_ParamLimits

0x69c9,	// (0x00040cca) list_single_heading_pane_vc_g2

0x0001,

0xf7ea,	// (0x00049aeb) list_single_heading_pane_vc_g_ParamLimits

0xf7ea,	// (0x00049aeb) list_single_heading_pane_vc_g

0x51ba,	// (0x0003f4bb) list_single_heading_pane_vc_t1_ParamLimits

0x51ba,	// (0x0003f4bb) list_single_heading_pane_vc_t1

0x51d2,	// (0x0003f4d3) list_single_heading_pane_vc_t2_ParamLimits

0x51d2,	// (0x0003f4d3) list_single_heading_pane_vc_t2

0x0001,

0xf7ef,	// (0x00049af0) list_single_heading_pane_vc_t_ParamLimits

0xf7ef,	// (0x00049af0) list_single_heading_pane_vc_t

0x6a34,	// (0x00040d35) list_setting_number_pane_vc_g1_ParamLimits

0x6a34,	// (0x00040d35) list_setting_number_pane_vc_g1

0x6a40,	// (0x00040d41) list_setting_number_pane_vc_g2_ParamLimits

0x6a40,	// (0x00040d41) list_setting_number_pane_vc_g2

0x0001,

0xf7f4,	// (0x00049af5) list_setting_number_pane_vc_g_ParamLimits

0xf7f4,	// (0x00049af5) list_setting_number_pane_vc_g

0x51ee,	// (0x0003f4ef) list_setting_number_pane_vc_t1_ParamLimits

0x51ee,	// (0x0003f4ef) list_setting_number_pane_vc_t1

0x5202,	// (0x0003f503) list_setting_number_pane_vc_t2_ParamLimits

0x5202,	// (0x0003f503) list_setting_number_pane_vc_t2

0x521e,	// (0x0003f51f) list_setting_number_pane_vc_t3_ParamLimits

0x521e,	// (0x0003f51f) list_setting_number_pane_vc_t3

0x0002,

0xf7f9,	// (0x00049afa) list_setting_number_pane_vc_t_ParamLimits

0xf7f9,	// (0x00049afa) list_setting_number_pane_vc_t

0x524a,	// (0x0003f54b) set_value_pane_vc_ParamLimits

0x524a,	// (0x0003f54b) set_value_pane_vc

0xb0ff,	// (0x00045400) list_double2_graphic_pane_vc_ParamLimits

0xb0ff,	// (0x00045400) list_double2_graphic_pane_vc

0x5302,	// (0x0003f603) list_double2_large_graphic_pane_vc_ParamLimits

0x5302,	// (0x0003f603) list_double2_large_graphic_pane_vc

0xb0ff,	// (0x00045400) list_double2_pane_vc_ParamLimits

0xb0ff,	// (0x00045400) list_double2_pane_vc

0xb0ff,	// (0x00045400) list_double_graphic_heading_pane_vc_ParamLimits

0xb0ff,	// (0x00045400) list_double_graphic_heading_pane_vc

0xb0ff,	// (0x00045400) list_double_graphic_pane_vc_ParamLimits

0xb0ff,	// (0x00045400) list_double_graphic_pane_vc

0xb0ff,	// (0x00045400) list_double_heading_pane_vc_ParamLimits

0xb0ff,	// (0x00045400) list_double_heading_pane_vc

0x5302,	// (0x0003f603) list_double_large_graphic_pane_vc_ParamLimits

0x5302,	// (0x0003f603) list_double_large_graphic_pane_vc

0xb0ff,	// (0x00045400) list_double_number_pane_vc_ParamLimits

0xb0ff,	// (0x00045400) list_double_number_pane_vc

0xb0ff,	// (0x00045400) list_double_pane_vc_ParamLimits

0xb0ff,	// (0x00045400) list_double_pane_vc

0xb0ff,	// (0x00045400) list_double_time_pane_vc_ParamLimits

0xb0ff,	// (0x00045400) list_double_time_pane_vc

0xb0ff,	// (0x00045400) list_setting_number_pane_vc_ParamLimits

0xb0ff,	// (0x00045400) list_setting_number_pane_vc

0xb0ff,	// (0x00045400) list_setting_pane_vc_ParamLimits

0xb0ff,	// (0x00045400) list_setting_pane_vc

0xb0ff,	// (0x00045400) list_single_graphic_heading_pane_vc_ParamLimits

0xb0ff,	// (0x00045400) list_single_graphic_heading_pane_vc

0xb0ff,	// (0x00045400) list_single_heading_pane_vc_ParamLimits

0xb0ff,	// (0x00045400) list_single_heading_pane_vc

0x6cee,	// (0x00040fef) list_single_number_heading_pane_vc_ParamLimits

0x6cee,	// (0x00040fef) list_single_number_heading_pane_vc

0x5198,	// (0x0003f499) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x5198,	// (0x0003f499) list_double_graphic_heading_pane_vc_g1

0x9218,	// (0x00043519) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x9218,	// (0x00043519) list_double_graphic_heading_pane_vc_g2

0x69c9,	// (0x00040cca) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x69c9,	// (0x00040cca) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7c9,	// (0x00049aca) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7c9,	// (0x00049aca) list_double_graphic_heading_pane_vc_g

0x5346,	// (0x0003f647) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x5346,	// (0x0003f647) list_double_graphic_heading_pane_vc_t1

0x5362,	// (0x0003f663) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x5362,	// (0x0003f663) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9fe,	// (0x00049cff) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9fe,	// (0x00049cff) list_double_graphic_heading_pane_vc_t

0x6a34,	// (0x00040d35) list_setting_pane_vc_g1_ParamLimits

0x6a34,	// (0x00040d35) list_setting_pane_vc_g1

0x6a40,	// (0x00040d41) list_setting_pane_vc_g2_ParamLimits

0x6a40,	// (0x00040d41) list_setting_pane_vc_g2

0x0001,

0xf7f4,	// (0x00049af5) list_setting_pane_vc_g_ParamLimits

0xf7f4,	// (0x00049af5) list_setting_pane_vc_g

0x5380,	// (0x0003f681) list_setting_pane_vc_t1_ParamLimits

0x5380,	// (0x0003f681) list_setting_pane_vc_t1

0x539c,	// (0x0003f69d) list_setting_pane_vc_t2_ParamLimits

0x539c,	// (0x0003f69d) list_setting_pane_vc_t2

0x0001,

0xfa2c,	// (0x00049d2d) list_setting_pane_vc_t_ParamLimits

0xfa2c,	// (0x00049d2d) list_setting_pane_vc_t

0x524a,	// (0x0003f54b) set_value_pane_cp_vc_ParamLimits

0x524a,	// (0x0003f54b) set_value_pane_cp_vc

0x9218,	// (0x00043519) list_single_number_heading_pane_vc_g1_ParamLimits

0x9218,	// (0x00043519) list_single_number_heading_pane_vc_g1

0x69c9,	// (0x00040cca) list_single_number_heading_pane_vc_g2_ParamLimits

0x69c9,	// (0x00040cca) list_single_number_heading_pane_vc_g2

0x0001,

0xf7ea,	// (0x00049aeb) list_single_number_heading_pane_vc_g_ParamLimits

0xf7ea,	// (0x00049aeb) list_single_number_heading_pane_vc_g

0x51ba,	// (0x0003f4bb) list_single_number_heading_pane_vc_t1_ParamLimits

0x51ba,	// (0x0003f4bb) list_single_number_heading_pane_vc_t1

0x53b8,	// (0x0003f6b9) list_single_number_heading_pane_vc_t2_ParamLimits

0x53b8,	// (0x0003f6b9) list_single_number_heading_pane_vc_t2

0x53cc,	// (0x0003f6cd) list_single_number_heading_pane_vc_t3_ParamLimits

0x53cc,	// (0x0003f6cd) list_single_number_heading_pane_vc_t3

0x0002,

0xfa31,	// (0x00049d32) list_single_number_heading_pane_vc_t_ParamLimits

0xfa31,	// (0x00049d32) list_single_number_heading_pane_vc_t

0x5198,	// (0x0003f499) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x5198,	// (0x0003f499) list_single_graphic_heading_pane_vc_g1

0x9218,	// (0x00043519) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x9218,	// (0x00043519) list_single_graphic_heading_pane_vc_g4

0x69c9,	// (0x00040cca) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x69c9,	// (0x00040cca) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7c9,	// (0x00049aca) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7c9,	// (0x00049aca) list_single_graphic_heading_pane_vc_g

0x51ba,	// (0x0003f4bb) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x51ba,	// (0x0003f4bb) list_single_graphic_heading_pane_vc_t1

0x53de,	// (0x0003f6df) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x53de,	// (0x0003f6df) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa38,	// (0x00049d39) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa38,	// (0x00049d39) list_single_graphic_heading_pane_vc_t

0x9218,	// (0x00043519) list_double2_pane_vc_g1_ParamLimits

0x9218,	// (0x00043519) list_double2_pane_vc_g1

0x69c9,	// (0x00040cca) list_double2_pane_vc_g2_ParamLimits

0x69c9,	// (0x00040cca) list_double2_pane_vc_g2

0x0001,

0xf7ea,	// (0x00049aeb) list_double2_pane_vc_g_ParamLimits

0xf7ea,	// (0x00049aeb) list_double2_pane_vc_g

0x53f2,	// (0x0003f6f3) list_double2_pane_vc_t1_ParamLimits

0x53f2,	// (0x0003f6f3) list_double2_pane_vc_t1

0x5408,	// (0x0003f709) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x5408,	// (0x0003f709) list_double2_large_graphic_pane_vc_g1

0x5414,	// (0x0003f715) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x5414,	// (0x0003f715) list_double2_large_graphic_pane_vc_g2

0x5420,	// (0x0003f721) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x5420,	// (0x0003f721) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa3d,	// (0x00049d3e) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa3d,	// (0x00049d3e) list_double2_large_graphic_pane_vc_g

0x542c,	// (0x0003f72d) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x542c,	// (0x0003f72d) list_double2_large_graphic_pane_vc_t1

0x6e32,	// (0x00041133) list_double_time_pane_vc_g1_ParamLimits

0x6e32,	// (0x00041133) list_double_time_pane_vc_g1

0x6e3e,	// (0x0004113f) list_double_time_pane_vc_g2_ParamLimits

0x6e3e,	// (0x0004113f) list_double_time_pane_vc_g2

0x0001,

0xfa44,	// (0x00049d45) list_double_time_pane_vc_g_ParamLimits

0xfa44,	// (0x00049d45) list_double_time_pane_vc_g

0x5442,	// (0x0003f743) list_double_time_pane_vc_t1_ParamLimits

0x5442,	// (0x0003f743) list_double_time_pane_vc_t1

0x5466,	// (0x0003f767) list_double_time_pane_vc_t2_ParamLimits

0x5466,	// (0x0003f767) list_double_time_pane_vc_t2

0x54b5,	// (0x0003f7b6) list_double_time_pane_vc_t3_ParamLimits

0x54b5,	// (0x0003f7b6) list_double_time_pane_vc_t3

0x54c7,	// (0x0003f7c8) list_double_time_pane_vc_t4_ParamLimits

0x54c7,	// (0x0003f7c8) list_double_time_pane_vc_t4

0x0003,

0xfa49,	// (0x00049d4a) list_double_time_pane_vc_t_ParamLimits

0xfa49,	// (0x00049d4a) list_double_time_pane_vc_t

0x9218,	// (0x00043519) list_double_pane_vc_g1_ParamLimits

0x9218,	// (0x00043519) list_double_pane_vc_g1

0x69c9,	// (0x00040cca) list_double_pane_vc_g2_ParamLimits

0x69c9,	// (0x00040cca) list_double_pane_vc_g2

0x0001,

0xf7ea,	// (0x00049aeb) list_double_pane_vc_g_ParamLimits

0xf7ea,	// (0x00049aeb) list_double_pane_vc_g

0x54db,	// (0x0003f7dc) list_double_pane_vc_t1_ParamLimits

0x54db,	// (0x0003f7dc) list_double_pane_vc_t1

0x54ef,	// (0x0003f7f0) list_double_pane_vc_t2_ParamLimits

0x54ef,	// (0x0003f7f0) list_double_pane_vc_t2

0x0001,

0xfa52,	// (0x00049d53) list_double_pane_vc_t_ParamLimits

0xfa52,	// (0x00049d53) list_double_pane_vc_t

0x9218,	// (0x00043519) list_double_number_pane_vc_g1_ParamLimits

0x9218,	// (0x00043519) list_double_number_pane_vc_g1

0x69c9,	// (0x00040cca) list_double_number_pane_vc_g2_ParamLimits

0x69c9,	// (0x00040cca) list_double_number_pane_vc_g2

0x0001,

0xf7ea,	// (0x00049aeb) list_double_number_pane_vc_g_ParamLimits

0xf7ea,	// (0x00049aeb) list_double_number_pane_vc_g

0x5507,	// (0x0003f808) list_double_number_pane_vc_t1_ParamLimits

0x5507,	// (0x0003f808) list_double_number_pane_vc_t1

0x5519,	// (0x0003f81a) list_double_number_pane_vc_t2_ParamLimits

0x5519,	// (0x0003f81a) list_double_number_pane_vc_t2

0x552d,	// (0x0003f82e) list_double_number_pane_vc_t3_ParamLimits

0x552d,	// (0x0003f82e) list_double_number_pane_vc_t3

0x0002,

0xfa57,	// (0x00049d58) list_double_number_pane_vc_t_ParamLimits

0xfa57,	// (0x00049d58) list_double_number_pane_vc_t

0x5545,	// (0x0003f846) list_double_large_graphic_pane_vc_g1_ParamLimits

0x5545,	// (0x0003f846) list_double_large_graphic_pane_vc_g1

0x5551,	// (0x0003f852) list_double_large_graphic_pane_vc_g2_ParamLimits

0x5551,	// (0x0003f852) list_double_large_graphic_pane_vc_g2

0x5420,	// (0x0003f721) list_double_large_graphic_pane_vc_g3_ParamLimits

0x5420,	// (0x0003f721) list_double_large_graphic_pane_vc_g3

0x5560,	// (0x0003f861) list_double_large_graphic_pane_vc_g4_ParamLimits

0x5560,	// (0x0003f861) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa5e,	// (0x00049d5f) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa5e,	// (0x00049d5f) list_double_large_graphic_pane_vc_g

0x556c,	// (0x0003f86d) list_double_large_graphic_pane_vc_t1_ParamLimits

0x556c,	// (0x0003f86d) list_double_large_graphic_pane_vc_t1

0x5580,	// (0x0003f881) list_double_large_graphic_pane_vc_t2_ParamLimits

0x5580,	// (0x0003f881) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa67,	// (0x00049d68) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa67,	// (0x00049d68) list_double_large_graphic_pane_vc_t

0x9218,	// (0x00043519) list_double_heading_pane_vc_g1_ParamLimits

0x9218,	// (0x00043519) list_double_heading_pane_vc_g1

0x69c9,	// (0x00040cca) list_double_heading_pane_vc_g2_ParamLimits

0x69c9,	// (0x00040cca) list_double_heading_pane_vc_g2

0x0001,

0xf7ea,	// (0x00049aeb) list_double_heading_pane_vc_g_ParamLimits

0xf7ea,	// (0x00049aeb) list_double_heading_pane_vc_g

0x5599,	// (0x0003f89a) list_double_heading_pane_vc_t1_ParamLimits

0x5599,	// (0x0003f89a) list_double_heading_pane_vc_t1

0x51ba,	// (0x0003f4bb) list_double_heading_pane_vc_t2_ParamLimits

0x51ba,	// (0x0003f4bb) list_double_heading_pane_vc_t2

0x0001,

0xfa6c,	// (0x00049d6d) list_double_heading_pane_vc_t_ParamLimits

0xfa6c,	// (0x00049d6d) list_double_heading_pane_vc_t

0x5198,	// (0x0003f499) list_double_graphic_pane_vc_g1_ParamLimits

0x5198,	// (0x0003f499) list_double_graphic_pane_vc_g1

0x6e4a,	// (0x0004114b) list_double_graphic_pane_vc_g2_ParamLimits

0x6e4a,	// (0x0004114b) list_double_graphic_pane_vc_g2

0xb61b,	// (0x0004591c) list_double_graphic_pane_vc_g3_ParamLimits

0xb61b,	// (0x0004591c) list_double_graphic_pane_vc_g3

0x0002,

0xfa71,	// (0x00049d72) list_double_graphic_pane_vc_g_ParamLimits

0xfa71,	// (0x00049d72) list_double_graphic_pane_vc_g

0x55ad,	// (0x0003f8ae) list_double_graphic_pane_vc_t1_ParamLimits

0x55ad,	// (0x0003f8ae) list_double_graphic_pane_vc_t1

0x55c1,	// (0x0003f8c2) list_double_graphic_pane_vc_t2_ParamLimits

0x55c1,	// (0x0003f8c2) list_double_graphic_pane_vc_t2

0x0001,

0xfa78,	// (0x00049d79) list_double_graphic_pane_vc_t_ParamLimits

0xfa78,	// (0x00049d79) list_double_graphic_pane_vc_t

0x58bf,	// (0x0003fbc0) aid_size_cell_fastswap

0x58c7,	// (0x0003fbc8) aid_size_cell_touch_ParamLimits

0x58c7,	// (0x0003fbc8) aid_size_cell_touch

0x5b22,	// (0x0003fe23) popup_fast_swap_wide_window_ParamLimits

0x5b22,	// (0x0003fe23) popup_fast_swap_wide_window

0x5c36,	// (0x0003ff37) touch_pane_ParamLimits

0x5c36,	// (0x0003ff37) touch_pane

0x8650,	// (0x00042951) button_value_adjust_pane_cp2

0x4e43,	// (0x0003f144) button_value_adjust_pane_cp4

0x4e67,	// (0x0003f168) form_field_data_pane_cp2

0x4e88,	// (0x0003f189) form_field_data_wide_pane_cp2

0x8ac1,	// (0x00042dc2) bg_scroll_pane_ParamLimits

0x5f70,	// (0x00040271) scroll_handle_pane_ParamLimits

0x5f84,	// (0x00040285) scroll_sc2_down_pane_ParamLimits

0x5f84,	// (0x00040285) scroll_sc2_down_pane

0x8af2,	// (0x00042df3) scroll_sc2_up_pane_ParamLimits

0x8af2,	// (0x00042df3) scroll_sc2_up_pane

0xbcb2,	// (0x00045fb3) grid_wheel_folder_pane_g1_ParamLimits

0xbcb2,	// (0x00045fb3) grid_wheel_folder_pane_g1

0x6165,	// (0x00040466) clock_nsta_pane_cp2_ParamLimits

0x6165,	// (0x00040466) clock_nsta_pane_cp2

0x883c,	// (0x00042b3d) listscroll_midp_pane_ParamLimits

0x92e7,	// (0x000435e8) midp_canvas_pane

0x95d1,	// (0x000438d2) nsta_clock_indic_pane

0x9605,	// (0x00043906) listscroll_form_pane_vc

0x960d,	// (0x0004390e) listscroll_set_pane_vc_ParamLimits

0x960d,	// (0x0004390e) listscroll_set_pane_vc

0x9712,	// (0x00043a13) clock_nsta_pane

0x9787,	// (0x00043a88) indicator_nsta_pane

0x9a67,	// (0x00043d68) bg_popup_sub_pane_cp2_ParamLimits

0x9a7b,	// (0x00043d7c) find_pane_cp2_ParamLimits

0x9a7b,	// (0x00043d7c) find_pane_cp2

0x9a91,	// (0x00043d92) grid_toobar_pane_ParamLimits

0x9b71,	// (0x00043e72) list_form_gen_pane_vc_ParamLimits

0x9b71,	// (0x00043e72) list_form_gen_pane_vc

0x9b87,	// (0x00043e88) scroll_pane_cp8_vc_ParamLimits

0x9b87,	// (0x00043e88) scroll_pane_cp8_vc

0x9c03,	// (0x00043f04) data_form_wide_pane_vc_ParamLimits

0x9c03,	// (0x00043f04) data_form_wide_pane_vc

0x9c0f,	// (0x00043f10) form_field_data_wide_pane_vc_g1

0x9c17,	// (0x00043f18) form_field_data_wide_pane_vc_t1_ParamLimits

0x9c17,	// (0x00043f18) form_field_data_wide_pane_vc_t1

0x8664,	// (0x00042965) input_focus_pane_cp6_vc_ParamLimits

0x8664,	// (0x00042965) input_focus_pane_cp6_vc

0x9f4f,	// (0x00044250) list_midp_pane_ParamLimits

0x9f5b,	// (0x0004425c) scroll_pane_cp16_ParamLimits

0x9f5b,	// (0x0004425c) scroll_pane_cp16

0x9fa9,	// (0x000442aa) button_value_adjust_pane_ParamLimits

0x9fa9,	// (0x000442aa) button_value_adjust_pane

0xaf59,	// (0x0004525a) button_value_adjust_pane_cp6_ParamLimits

0xaf59,	// (0x0004525a) button_value_adjust_pane_cp6

0xb083,	// (0x00045384) settings_code_pane_cp_ParamLimits

0xb083,	// (0x00045384) settings_code_pane_cp

0x7d02,	// (0x00042003) cell_touch_pane_g1

0x7d02,	// (0x00042003) cell_touch_pane_g2

0x0001,

0xf70e,	// (0x00049a0f) cell_touch_pane_g

0xb5ed,	// (0x000458ee) cell_touch_pane_cp_ParamLimits

0xb5ed,	// (0x000458ee) cell_touch_pane_cp

0xb5fd,	// (0x000458fe) cell_touch_pane_ParamLimits

0xb5fd,	// (0x000458fe) cell_touch_pane

0x7d02,	// (0x00042003) scroll_sc2_down_pane_g1

0x7d02,	// (0x00042003) scroll_sc2_up_pane_g1

0x7d0c,	// (0x0004200d) bg_set_opt_pane_cp4_vc

0xb60f,	// (0x00045910) list_set_graphic_pane_vc_g1_ParamLimits

0xb60f,	// (0x00045910) list_set_graphic_pane_vc_g1

0xb61b,	// (0x0004591c) list_set_graphic_pane_vc_g2_ParamLimits

0xb61b,	// (0x0004591c) list_set_graphic_pane_vc_g2

0x0001,

0xfa03,	// (0x00049d04) list_set_graphic_pane_vc_g_ParamLimits

0xfa03,	// (0x00049d04) list_set_graphic_pane_vc_g

0xb627,	// (0x00045928) text_primary_small_cp13_vc_ParamLimits

0xb627,	// (0x00045928) text_primary_small_cp13_vc

0xb63f,	// (0x00045940) list_set_graphic_pane_vc_ParamLimits

0xb63f,	// (0x00045940) list_set_graphic_pane_vc

0x7d0c,	// (0x0004200d) input_focus_pane_cp2_vc

0x7d02,	// (0x00042003) setting_code_pane_vc_g1

0x7e37,	// (0x00042138) setting_code_pane_vc_t1

0xb651,	// (0x00045952) set_text_pane_vc_t1_ParamLimits

0xb651,	// (0x00045952) set_text_pane_vc_t1

0x7d0c,	// (0x0004200d) input_focus_pane_cp1_vc

0xb66d,	// (0x0004596e) list_set_text_pane_vc

0x7d02,	// (0x00042003) setting_text_pane_vc_g1

0x7d0c,	// (0x0004200d) bg_set_opt_pane_cp2_vc

0x7e2e,	// (0x0004212f) setting_slider_graphic_pane_vc_g1

0xb677,	// (0x00045978) setting_slider_graphic_pane_vc_t1

0xb687,	// (0x00045988) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa08,	// (0x00049d09) setting_slider_graphic_pane_vc_t

0xb697,	// (0x00045998) slider_set_pane_cp_vc

0xb69f,	// (0x000459a0) slider_set_pane_vc_g1

0xb6a8,	// (0x000459a9) slider_set_pane_vc_g2

0x0006,

0xfa0d,	// (0x00049d0e) slider_set_pane_vc_g

0x86b3,	// (0x000429b4) set_opt_bg_pane_g1_copy1

0x86bb,	// (0x000429bc) set_opt_bg_pane_g2_copy1

0xb6d4,	// (0x000459d5) set_opt_bg_pane_g3_copy1

0x86cb,	// (0x000429cc) set_opt_bg_pane_g4_copy1

0x86d3,	// (0x000429d4) set_opt_bg_pane_g5_copy1

0x86db,	// (0x000429dc) set_opt_bg_pane_g6_copy1

0xb6de,	// (0x000459df) set_opt_bg_pane_g7_copy1

0xb6e6,	// (0x000459e7) set_opt_bg_pane_g8_copy1

0xb6f0,	// (0x000459f1) set_opt_bg_pane_g9_copy1

0x7d0c,	// (0x0004200d) bg_set_opt_pane_cp_vc

0xb6fa,	// (0x000459fb) setting_slider_pane_vc_t1

0xb709,	// (0x00045a0a) setting_slider_pane_vc_t2

0xb719,	// (0x00045a1a) setting_slider_pane_vc_t3

0x0002,

0xfa1c,	// (0x00049d1d) setting_slider_pane_vc_t

0xb729,	// (0x00045a2a) slider_set_pane_vc

0x6ae9,	// (0x00040dea) volume_set_pane_vc_g1

0x6af2,	// (0x00040df3) volume_set_pane_vc_g2

0x6afb,	// (0x00040dfc) volume_set_pane_vc_g3

0x6b04,	// (0x00040e05) volume_set_pane_vc_g4

0x6b0d,	// (0x00040e0e) volume_set_pane_vc_g5

0x6b16,	// (0x00040e17) volume_set_pane_vc_g6

0x6b1f,	// (0x00040e20) volume_set_pane_vc_g7

0x6b28,	// (0x00040e29) volume_set_pane_vc_g8

0x6b31,	// (0x00040e32) volume_set_pane_vc_g9

0x6b3a,	// (0x00040e3b) volume_set_pane_vc_g10

0x0009,

0xf8c1,	// (0x00049bc2) volume_set_pane_vc_g

0xb731,	// (0x00045a32) volume_set_pane_vc

0xb739,	// (0x00045a3a) button_value_adjust_pane_cp1_vc

0xb743,	// (0x00045a44) list_highlight_pane_cp2_vc

0xb74c,	// (0x00045a4d) list_set_pane_vc_ParamLimits

0xb74c,	// (0x00045a4d) list_set_pane_vc

0xb7aa,	// (0x00045aab) main_pane_set_vc_t1_ParamLimits

0xb7aa,	// (0x00045aab) main_pane_set_vc_t1

0xb7bf,	// (0x00045ac0) main_pane_set_vc_t2_ParamLimits

0xb7bf,	// (0x00045ac0) main_pane_set_vc_t2

0xb7d1,	// (0x00045ad2) main_pane_set_vc_t3_ParamLimits

0xb7d1,	// (0x00045ad2) main_pane_set_vc_t3

0xb7e5,	// (0x00045ae6) main_pane_set_vc_t4_ParamLimits

0xb7e5,	// (0x00045ae6) main_pane_set_vc_t4

0x0003,

0xfa23,	// (0x00049d24) main_pane_set_vc_t_ParamLimits

0xfa23,	// (0x00049d24) main_pane_set_vc_t

0xb7f9,	// (0x00045afa) setting_code_pane_vc_ParamLimits

0xb7f9,	// (0x00045afa) setting_code_pane_vc

0xb80a,	// (0x00045b0b) setting_slider_graphic_pane_vc

0xb80a,	// (0x00045b0b) setting_slider_pane_vc

0xb80a,	// (0x00045b0b) setting_text_pane_vc

0xb80a,	// (0x00045b0b) setting_volume_pane_vc

0xb814,	// (0x00045b15) scroll_pane_cp121_vc

0x863e,	// (0x0004293f) set_content_pane_vc

0xb81c,	// (0x00045b1d) button_value_adjust_pane_g1

0xb825,	// (0x00045b26) button_value_adjust_pane_g2

0x0001,

0xfa7d,	// (0x00049d7e) button_value_adjust_pane_g

0xb82e,	// (0x00045b2f) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb82e,	// (0x00045b2f) form_field_slider_wide_pane_vc_t1

0xb842,	// (0x00045b43) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb842,	// (0x00045b43) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa82,	// (0x00049d83) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa82,	// (0x00049d83) form_field_slider_wide_pane_vc_t

0x8067,	// (0x00042368) input_focus_pane_cp10_vc_ParamLimits

0x8067,	// (0x00042368) input_focus_pane_cp10_vc

0xb870,	// (0x00045b71) slider_cont_pane_cp1_vc_ParamLimits

0xb870,	// (0x00045b71) slider_cont_pane_cp1_vc

0xb882,	// (0x00045b83) slider_form_pane_g1_cp2

0xb6a8,	// (0x000459a9) slider_form_pane_g2_cp2

0xb8af,	// (0x00045bb0) form_field_slider_pane_vc_t3

0xb8bd,	// (0x00045bbe) form_field_slider_pane_vc_t4

0xb8cb,	// (0x00045bcc) slider_form_pane_vc_ParamLimits

0xb8cb,	// (0x00045bcc) slider_form_pane_vc

0xb8d8,	// (0x00045bd9) form_field_slider_pane_vc_t1_ParamLimits

0xb8d8,	// (0x00045bd9) form_field_slider_pane_vc_t1

0xb842,	// (0x00045b43) form_field_slider_pane_vc_t2_ParamLimits

0xb842,	// (0x00045b43) form_field_slider_pane_vc_t2

0x0001,

0xfa94,	// (0x00049d95) form_field_slider_pane_vc_t_ParamLimits

0xfa94,	// (0x00049d95) form_field_slider_pane_vc_t

0x8067,	// (0x00042368) input_focus_pane_cp9_vc_ParamLimits

0x8067,	// (0x00042368) input_focus_pane_cp9_vc

0xb8f4,	// (0x00045bf5) slider_cont_pane_vc_ParamLimits

0xb8f4,	// (0x00045bf5) slider_cont_pane_vc

0xb908,	// (0x00045c09) list_form_graphic_pane_cp_vc_ParamLimits

0xb908,	// (0x00045c09) list_form_graphic_pane_cp_vc

0x9c0f,	// (0x00043f10) form_field_popup_wide_pane_vc_g1

0xb91d,	// (0x00045c1e) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb91d,	// (0x00045c1e) form_field_popup_wide_pane_vc_t1

0x8664,	// (0x00042965) input_focus_pane_cp8_vc_ParamLimits

0x8664,	// (0x00042965) input_focus_pane_cp8_vc

0xb962,	// (0x00045c63) list_form_wide_pane_vc_ParamLimits

0xb962,	// (0x00045c63) list_form_wide_pane_vc

0xb96e,	// (0x00045c6f) list_form_graphic_pane_vc_g1

0xb976,	// (0x00045c77) list_form_graphic_pane_vc_t1_ParamLimits

0xb976,	// (0x00045c77) list_form_graphic_pane_vc_t1

0x7dec,	// (0x000420ed) list_highlight_pane_cp5_vc_ParamLimits

0x7dec,	// (0x000420ed) list_highlight_pane_cp5_vc

0xb992,	// (0x00045c93) list_form_graphic_pane_vc_ParamLimits

0xb992,	// (0x00045c93) list_form_graphic_pane_vc

0x9c0f,	// (0x00043f10) form_field_popup_pane_vc_g1

0xb9a8,	// (0x00045ca9) form_field_popup_pane_vc_t1_ParamLimits

0xb9a8,	// (0x00045ca9) form_field_popup_pane_vc_t1

0x8664,	// (0x00042965) input_focus_pane_cp7_vc_ParamLimits

0x8664,	// (0x00042965) input_focus_pane_cp7_vc

0xb9bf,	// (0x00045cc0) list_form_pane_vc_ParamLimits

0xb9bf,	// (0x00045cc0) list_form_pane_vc

0xb9cb,	// (0x00045ccc) data_form_pane_vc_t1_ParamLimits

0xb9cb,	// (0x00045ccc) data_form_pane_vc_t1

0x86b3,	// (0x000429b4) input_focus_pane_vc_g1

0x86bb,	// (0x000429bc) input_focus_pane_vc_g2

0x86c3,	// (0x000429c4) input_focus_pane_vc_g3

0x86cb,	// (0x000429cc) input_focus_pane_vc_g4

0x86d3,	// (0x000429d4) input_focus_pane_vc_g5

0x86db,	// (0x000429dc) input_focus_pane_vc_g6

0x86e3,	// (0x000429e4) input_focus_pane_vc_g7

0x86eb,	// (0x000429ec) input_focus_pane_vc_g8

0x86f3,	// (0x000429f4) input_focus_pane_vc_g9

0x7d02,	// (0x00042003) input_focus_pane_vc_g10

0x0009,

0xf697,	// (0x00049998) input_focus_pane_vc_g

0x9c03,	// (0x00043f04) data_form_pane_vc_ParamLimits

0x9c03,	// (0x00043f04) data_form_pane_vc

0x9c0f,	// (0x00043f10) form_field_data_pane_vc_g1

0xb9e6,	// (0x00045ce7) form_field_data_pane_vc_t1_ParamLimits

0xb9e6,	// (0x00045ce7) form_field_data_pane_vc_t1

0x8664,	// (0x00042965) input_focus_pane_vc_ParamLimits

0x8664,	// (0x00042965) input_focus_pane_vc

0xba00,	// (0x00045d01) button_value_adjust_pane_cp3_vc

0xba08,	// (0x00045d09) button_value_adjust_pane_cp5_vc

0xba10,	// (0x00045d11) form_field_data_pane_vc_ParamLimits

0xba10,	// (0x00045d11) form_field_data_pane_vc

0xba27,	// (0x00045d28) form_field_data_pane_vc_cp2

0xba2f,	// (0x00045d30) form_field_data_wide_pane_vc_ParamLimits

0xba2f,	// (0x00045d30) form_field_data_wide_pane_vc

0xba45,	// (0x00045d46) form_field_data_wide_pane_vc_cp2

0xba4d,	// (0x00045d4e) form_field_popup_pane_vc_ParamLimits

0xba4d,	// (0x00045d4e) form_field_popup_pane_vc

0xba64,	// (0x00045d65) form_field_popup_wide_pane_vc_ParamLimits

0xba64,	// (0x00045d65) form_field_popup_wide_pane_vc

0xba7a,	// (0x00045d7b) form_field_slider_pane_vc_ParamLimits

0xba7a,	// (0x00045d7b) form_field_slider_pane_vc

0xba8d,	// (0x00045d8e) form_field_slider_wide_pane_vc_ParamLimits

0xba8d,	// (0x00045d8e) form_field_slider_wide_pane_vc

0xbaa0,	// (0x00045da1) grid_touch_1_pane_ParamLimits

0xbaa0,	// (0x00045da1) grid_touch_1_pane

0xbaac,	// (0x00045dad) grid_touch_2_pane_ParamLimits

0xbaac,	// (0x00045dad) grid_touch_2_pane

0x959c,	// (0x0004389d) touch_pane_g1_ParamLimits

0x959c,	// (0x0004389d) touch_pane_g1

0xbac4,	// (0x00045dc5) cell_app_pane_cp_wide_ParamLimits

0xbac4,	// (0x00045dc5) cell_app_pane_cp_wide

0xbad5,	// (0x00045dd6) grid_popup_fast_wide_pane_ParamLimits

0xbad5,	// (0x00045dd6) grid_popup_fast_wide_pane

0xbae9,	// (0x00045dea) scroll_pane_cp19_ParamLimits

0xbae9,	// (0x00045dea) scroll_pane_cp19

0x7d0c,	// (0x0004200d) bg_popup_window_pane_cp20

0xbafd,	// (0x00045dfe) listscroll_popup_fast_wide_pane

0x7dec,	// (0x000420ed) grid_indicator_nsta_pane

0xbb05,	// (0x00045e06) clock_nsta_pane_g1

0xbb0e,	// (0x00045e0f) clock_nsta_pane_t1

0xbb2a,	// (0x00045e2b) cell_indicator_nsta_pane_ParamLimits

0xbb2a,	// (0x00045e2b) cell_indicator_nsta_pane

0xbb62,	// (0x00045e63) cell_indicator_nsta_pane_g1

0xbb70,	// (0x00045e71) cell_indicator_nsta_pane_g2

0x0001,

0xfaa5,	// (0x00049da6) cell_indicator_nsta_pane_g

0xbb86,	// (0x00045e87) clock_nsta_pane_cp

0xbb8e,	// (0x00045e8f) indicator_nsta_pane_cp

0xbb96,	// (0x00045e97) nsta_clock_indic_pane_g1

0x7eb5,	// (0x000421b6) grid_indicator_pane

0x8be7,	// (0x00042ee8) scroll_pane_cp29

0x60b4,	// (0x000403b5) indicator_nsta_pane_cp2_ParamLimits

0x60b4,	// (0x000403b5) indicator_nsta_pane_cp2

0x7dec,	// (0x000420ed) main_apps_wheel_pane

0x9e30,	// (0x00044131) form_midp_field_text_pane_ParamLimits

0x9f7b,	// (0x0004427c) scroll_bar_cp050_ParamLimits

0xbbef,	// (0x00045ef0) cell_indicator_pane_ParamLimits

0xbbef,	// (0x00045ef0) cell_indicator_pane

0xbc06,	// (0x00045f07) cell_indicator_pane_g1

0xbc10,	// (0x00045f11) grid_wheel_folder_pane_ParamLimits

0xbc10,	// (0x00045f11) grid_wheel_folder_pane

0xbc26,	// (0x00045f27) list_wheel_apps_pane_ParamLimits

0xbc26,	// (0x00045f27) list_wheel_apps_pane

0xbc37,	// (0x00045f38) main_apps_wheel_pane_g1_ParamLimits

0xbc37,	// (0x00045f38) main_apps_wheel_pane_g1

0xbc4b,	// (0x00045f4c) main_apps_wheel_pane_g2_ParamLimits

0xbc4b,	// (0x00045f4c) main_apps_wheel_pane_g2

0x0001,

0xfac1,	// (0x00049dc2) main_apps_wheel_pane_g_ParamLimits

0xfac1,	// (0x00049dc2) main_apps_wheel_pane_g

0xbc63,	// (0x00045f64) main_apps_wheel_pane_t1_ParamLimits

0xbc63,	// (0x00045f64) main_apps_wheel_pane_t1

0xbc86,	// (0x00045f87) list_wheel_apps_pane_g1

0xbc8e,	// (0x00045f8f) list_wheel_apps_pane_g2

0xbc96,	// (0x00045f97) list_wheel_apps_pane_g3

0xbc9e,	// (0x00045f9f) list_wheel_apps_pane_g4

0xbca8,	// (0x00045fa9) list_wheel_apps_pane_g5

0x0004,

0xfac6,	// (0x00049dc7) list_wheel_apps_pane_g

0x915f,	// (0x00043460) navi_icon_text_pane

0x9641,	// (0x00043942) aid_fill_nsta

0xbccb,	// (0x00045fcc) navi_icon_text_pane_g1

0xbcd7,	// (0x00045fd8) navi_icon_text_pane_t1

0x8ffd,	// (0x000432fe) list_set_graphic_pane_t1_ParamLimits

0x8ffd,	// (0x000432fe) list_set_graphic_pane_t1

0xa6ca,	// (0x000449cb) popup_midp_note_alarm_window_t6_ParamLimits

0xa6ca,	// (0x000449cb) popup_midp_note_alarm_window_t6

0xa6dc,	// (0x000449dd) popup_midp_note_alarm_window_t7_ParamLimits

0xa6dc,	// (0x000449dd) popup_midp_note_alarm_window_t7

0xa6ee,	// (0x000449ef) popup_midp_note_alarm_window_t8_ParamLimits

0xa6ee,	// (0x000449ef) popup_midp_note_alarm_window_t8

0xa700,	// (0x00044a01) popup_midp_note_alarm_window_t9_ParamLimits

0xa700,	// (0x00044a01) popup_midp_note_alarm_window_t9

0xa712,	// (0x00044a13) popup_midp_note_alarm_window_t10_ParamLimits

0xa712,	// (0x00044a13) popup_midp_note_alarm_window_t10

0xa724,	// (0x00044a25) popup_midp_note_alarm_window_t11_ParamLimits

0xa724,	// (0x00044a25) popup_midp_note_alarm_window_t11

0xa736,	// (0x00044a37) scroll_pane_cp17_ParamLimits

0xa736,	// (0x00044a37) scroll_pane_cp17

0x6ae9,	// (0x00040dea) volume_small_pane_cp_g1

0x6e59,	// (0x0004115a) volume_small_pane_cp_g2

0x6e62,	// (0x00041163) volume_small_pane_cp_g3

0x6e6b,	// (0x0004116c) volume_small_pane_cp_g4

0x6e74,	// (0x00041175) volume_small_pane_cp_g5

0x6e7d,	// (0x0004117e) volume_small_pane_cp_g6

0x6e86,	// (0x00041187) volume_small_pane_cp_g7

0x6e8f,	// (0x00041190) volume_small_pane_cp_g8

0x6e98,	// (0x00041199) volume_small_pane_cp_g9

0x6ea1,	// (0x000411a2) volume_small_pane_cp_g10

0x93ae,	// (0x000436af) midp_ticker_pane_g1_ParamLimits

0x93ba,	// (0x000436bb) midp_ticker_pane_g2_ParamLimits

0xf763,	// (0x00049a64) midp_ticker_pane_g_ParamLimits

0x93c6,	// (0x000436c7) midp_ticker_pane_t1_ParamLimits

0x9657,	// (0x00043958) aid_fill_nsta_2

0x9f67,	// (0x00044268) list_form2_midp_pane

0xb0ce,	// (0x000453cf) midp_editing_number_pane_ParamLimits

0xb0dd,	// (0x000453de) midp_ticker_pane_ParamLimits

0xbce9,	// (0x00045fea) form2_midp_field_pane

0xbd0d,	// (0x0004600e) scroll_pane_cp51

0xbd2d,	// (0x0004602e) form2_midp_button_pane_ParamLimits

0xbd2d,	// (0x0004602e) form2_midp_button_pane

0xbd3f,	// (0x00046040) form2_midp_content_pane_ParamLimits

0xbd3f,	// (0x00046040) form2_midp_content_pane

0xbd59,	// (0x0004605a) form2_midp_field_choice_group_pane

0xbd61,	// (0x00046062) form2_midp_field_pane_g1

0xbd69,	// (0x0004606a) form2_midp_field_pane_g2

0xbd71,	// (0x00046072) form2_midp_field_pane_g3

0xbd79,	// (0x0004607a) form2_midp_field_pane_g4

0x0003,

0xfaeb,	// (0x00049dec) form2_midp_field_pane_g

0xbd81,	// (0x00046082) form2_midp_gauge_slider_pane

0xbd89,	// (0x0004608a) form2_midp_gauge_wait_pane

0xbd91,	// (0x00046092) form2_midp_image_pane_ParamLimits

0xbd91,	// (0x00046092) form2_midp_image_pane

0xbdac,	// (0x000460ad) form2_midp_label_pane_ParamLimits

0xbdac,	// (0x000460ad) form2_midp_label_pane

0xbdc5,	// (0x000460c6) form2_midp_label_pane_cp_ParamLimits

0xbdc5,	// (0x000460c6) form2_midp_label_pane_cp

0xbde6,	// (0x000460e7) form2_midp_string_pane_ParamLimits

0xbde6,	// (0x000460e7) form2_midp_string_pane

0x55d9,	// (0x0003f8da) form2_midp_text_pane_ParamLimits

0x55d9,	// (0x0003f8da) form2_midp_text_pane

0xbdf8,	// (0x000460f9) form2_midp_time_pane

0xbe08,	// (0x00046109) input_focus_pane_cp51_ParamLimits

0xbe08,	// (0x00046109) input_focus_pane_cp51

0xbe20,	// (0x00046121) form2_midp_label_pane_t1_ParamLimits

0xbe20,	// (0x00046121) form2_midp_label_pane_t1

0x55f8,	// (0x0003f8f9) form2_mdip_text_pane_t1_ParamLimits

0x55f8,	// (0x0003f8f9) form2_mdip_text_pane_t1

0x5616,	// (0x0003f917) form2_midp_time_pane_t1

0xbe69,	// (0x0004616a) form2_midp_gauge_slider_pane_t1

0xbe7b,	// (0x0004617c) form2_midp_gauge_slider_pane_t2

0xbe8d,	// (0x0004618e) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf4,	// (0x00049df5) form2_midp_gauge_slider_pane_t

0xbe9f,	// (0x000461a0) form2_midp_slider_pane

0xbeab,	// (0x000461ac) form2_midp_gauge_wait_pane_t1

0xbeb9,	// (0x000461ba) form2_midp_wait_pane_ParamLimits

0xbeb9,	// (0x000461ba) form2_midp_wait_pane

0x9c56,	// (0x00043f57) list_single_2graphic_pane_cp4_ParamLimits

0x9c56,	// (0x00043f57) list_single_2graphic_pane_cp4

0xbee4,	// (0x000461e5) list_single_midp_graphic_pane_cp_ParamLimits

0xbee4,	// (0x000461e5) list_single_midp_graphic_pane_cp

0x7d0c,	// (0x0004200d) list_highlight_pane_cp20

0xbf1f,	// (0x00046220) list_single_2graphic_pane_g1_cp4

0xbf27,	// (0x00046228) list_single_2graphic_pane_g2_cp4

0xbf2f,	// (0x00046230) list_single_2graphic_pane_t1_cp4

0x7dec,	// (0x000420ed) list_highlight_pane_cp21

0xbf3e,	// (0x0004623f) list_single_midp_graphic_pane_g4_cp

0xbf4d,	// (0x0004624e) list_single_midp_graphic_pane_t1_cp

0xbf62,	// (0x00046263) form2_mdip_string_pane_t1_ParamLimits

0xbf62,	// (0x00046263) form2_mdip_string_pane_t1

0x7d0c,	// (0x0004200d) bg_wml_button_pane_cp2

0x7d02,	// (0x00042003) form2_midp_image_pane_g1

0x5da6,	// (0x000400a7) list_double_large_graphic_pane_g5_ParamLimits

0x5da6,	// (0x000400a7) list_double_large_graphic_pane_g5

0x883c,	// (0x00042b3d) midp_form_pane_ParamLimits

0x7dec,	// (0x000420ed) main_apps_wheel_pane_ParamLimits

0x6789,	// (0x00040a8a) popup_preview_window_ParamLimits

0x6789,	// (0x00040a8a) popup_preview_window

0x6944,	// (0x00040c45) popup_touch_info_window_ParamLimits

0x6944,	// (0x00040c45) popup_touch_info_window

0x6962,	// (0x00040c63) popup_touch_menu_window_ParamLimits

0x6962,	// (0x00040c63) popup_touch_menu_window

0x7cf8,	// (0x00041ff9) bg_popup_sub_pane_cp6

0xc05b,	// (0x0004635c) list_touch_menu_pane

0xc063,	// (0x00046364) list_single_touch_menu_pane_ParamLimits

0xc063,	// (0x00046364) list_single_touch_menu_pane

0xc079,	// (0x0004637a) list_single_touch_menu_pane_t1

0x7dec,	// (0x000420ed) bg_popup_sub_pane_cp7_ParamLimits

0x7dec,	// (0x000420ed) bg_popup_sub_pane_cp7

0xc087,	// (0x00046388) heading_sub_pane

0xc08f,	// (0x00046390) list_touch_info_pane_ParamLimits

0xc08f,	// (0x00046390) list_touch_info_pane

0xc09e,	// (0x0004639f) list_single_touch_info_pane_ParamLimits

0xc09e,	// (0x0004639f) list_single_touch_info_pane

0xc0b0,	// (0x000463b1) list_single_touch_info_pane_t1

0xc0be,	// (0x000463bf) list_single_touch_info_pane_t2

0x0001,

0xfb02,	// (0x00049e03) list_single_touch_info_pane_t

0x92df,	// (0x000435e0) bg_popup_heading_pane_cp

0xc0cc,	// (0x000463cd) heading_sub_pane_t1

0x9b9d,	// (0x00043e9e) bg_popup_preview_window_pane_cp_ParamLimits

0x9b9d,	// (0x00043e9e) bg_popup_preview_window_pane_cp

0xc087,	// (0x00046388) heading_preview_pane

0xc08f,	// (0x00046390) list_preview_pane_ParamLimits

0xc08f,	// (0x00046390) list_preview_pane

0xc0da,	// (0x000463db) popup_preview_window_g1

0xc09e,	// (0x0004639f) list_single_preview_pane_ParamLimits

0xc09e,	// (0x0004639f) list_single_preview_pane

0xc0e2,	// (0x000463e3) list_single_preview_pane_g1

0xc0ea,	// (0x000463eb) list_single_preview_pane_t1

0xc0b0,	// (0x000463b1) list_single_preview_pane_t2

0x0001,

0xfb07,	// (0x00049e08) list_single_preview_pane_t

0xc0f8,	// (0x000463f9) bg_popup_heading_pane_cp2_ParamLimits

0xc0f8,	// (0x000463f9) bg_popup_heading_pane_cp2

0xc10e,	// (0x0004640f) heading_preview_pane_g1

0xc116,	// (0x00046417) heading_preview_pane_t1_ParamLimits

0xc116,	// (0x00046417) heading_preview_pane_t1

0x7ed8,	// (0x000421d9) soft_indicator_pane_t1_ParamLimits

0x85cb,	// (0x000428cc) scroll_pane_ParamLimits

0x8ae0,	// (0x00042de1) scroll_sc2_left_pane

0x8ae9,	// (0x00042dea) scroll_sc2_right_pane

0x8b08,	// (0x00042e09) scroll_bg_pane_g1_ParamLimits

0x8b1d,	// (0x00042e1e) scroll_bg_pane_g2_ParamLimits

0x8b35,	// (0x00042e36) scroll_bg_pane_g3_ParamLimits

0xf6ee,	// (0x000499ef) scroll_bg_pane_g_ParamLimits

0x8b08,	// (0x00042e09) scroll_handle_pane_g1_ParamLimits

0x8b57,	// (0x00042e58) scroll_handle_pane_g2_ParamLimits

0x8b35,	// (0x00042e36) scroll_handle_pane_g3_ParamLimits

0xf6f5,	// (0x000499f6) scroll_handle_pane_g_ParamLimits

0x640c,	// (0x0004070d) popup_choice_list_window_ParamLimits

0x640c,	// (0x0004070d) popup_choice_list_window

0x9a73,	// (0x00043d74) choice_list_pane

0x9af5,	// (0x00043df6) cell_toolbar_pane_t1

0x9b1d,	// (0x00043e1e) toolbar_button_pane_ParamLimits

0xabf0,	// (0x00044ef1) ai_gene_pane_1_t2_ParamLimits

0xabf0,	// (0x00044ef1) ai_gene_pane_1_t2

0x0001,

0xf91d,	// (0x00049c1e) ai_gene_pane_1_t_ParamLimits

0xf91d,	// (0x00049c1e) ai_gene_pane_1_t

0xc133,	// (0x00046434) scroll_sc2_left_pane_g1

0xc133,	// (0x00046434) scroll_sc2_right_pane_g1

0x961f,	// (0x00043920) bg_popup_sub_pane_cp10

0xc13d,	// (0x0004643e) list_choice_list_pane

0xc156,	// (0x00046457) list_single_choice_list_pane_ParamLimits

0xc156,	// (0x00046457) list_single_choice_list_pane

0xc169,	// (0x0004646a) list_single_choice_list_pane_g1

0x87ec,	// (0x00042aed) list_single_choice_list_pane_t1_ParamLimits

0x87ec,	// (0x00042aed) list_single_choice_list_pane_t1

0xc171,	// (0x00046472) choice_list_pane_g1

0xc179,	// (0x0004647a) choice_list_pane_t1

0x7cf8,	// (0x00041ff9) input_focus_pane_cp11

0x89c3,	// (0x00042cc4) title_pane_stacon_g2_ParamLimits

0x89c3,	// (0x00042cc4) title_pane_stacon_g2

0x0002,

0xf6d4,	// (0x000499d5) title_pane_stacon_g_ParamLimits

0xf6d4,	// (0x000499d5) title_pane_stacon_g

0x92df,	// (0x000435e0) cursor_press_pane

0x64b8,	// (0x000407b9) popup_fep_hwr_window_ParamLimits

0x64b8,	// (0x000407b9) popup_fep_hwr_window

0x6532,	// (0x00040833) popup_fep_vkb_window_ParamLimits

0x6532,	// (0x00040833) popup_fep_vkb_window

0xc187,	// (0x00046488) cursor_press_pane_g1

0x0002,

0xfb30,	// (0x00049e31) fep_vkb_side_pane_g_ParamLimits

0x6ee3,	// (0x000411e4) fep_hwr_candidate_pane_ParamLimits

0x6ee3,	// (0x000411e4) fep_hwr_candidate_pane

0x6f0d,	// (0x0004120e) fep_hwr_side_pane_ParamLimits

0x6f0d,	// (0x0004120e) fep_hwr_side_pane

0x6f2d,	// (0x0004122e) fep_hwr_top_pane_ParamLimits

0x6f2d,	// (0x0004122e) fep_hwr_top_pane

0x6f45,	// (0x00041246) fep_hwr_write_pane_ParamLimits

0x6f45,	// (0x00041246) fep_hwr_write_pane

0xfb30,	// (0x00049e31) fep_vkb_side_pane_g

0xc18f,	// (0x00046490) fep_hwr_top_pane_g1

0xc1a1,	// (0x000464a2) fep_hwr_top_pane_g2

0x6f71,	// (0x00041272) fep_hwr_top_pane_g3

0x0002,

0xfb0c,	// (0x00049e0d) fep_hwr_top_pane_g

0x6f86,	// (0x00041287) fep_hwr_top_text_pane

0x8cd7,	// (0x00042fd8) fep_hwr_top_text_pane_g1

0xc1d7,	// (0x000464d8) fep_hwr_top_text_pane_t1

0x707c,	// (0x0004137d) fep_hwr_candidate_pane_g1

0xc42a,	// (0x0004672b) fep_vkb_keypad_pane_g3_ParamLimits

0xc42a,	// (0x0004672b) fep_vkb_keypad_pane_g3

0xc452,	// (0x00046753) fep_vkb_keypad_pane_g4_ParamLimits

0xc452,	// (0x00046753) fep_vkb_keypad_pane_g4

0xc4c1,	// (0x000467c2) fep_vkb_bottom_pane_g2_ParamLimits

0xc4c1,	// (0x000467c2) fep_vkb_bottom_pane_g2

0x0001,

0xfb37,	// (0x00049e38) fep_vkb_bottom_pane_g_ParamLimits

0xfb37,	// (0x00049e38) fep_vkb_bottom_pane_g

0xc133,	// (0x00046434) cell_vkb_side_pane_g2

0x0001,

0xfb41,	// (0x00049e42) cell_vkb_side_pane_g

0xc54c,	// (0x0004684d) cell_vkb_side_pane_t1

0xc55a,	// (0x0004685b) cell_vkb_side_pane_t1_copy1

0xc133,	// (0x00046434) bg_fep_vkb_candidate_pane_g2

0xc686,	// (0x00046987) cell_vkb_candidate_pane_ParamLimits

0xc1e5,	// (0x000464e6) aid_size_cell_vkb_ParamLimits

0xc1e5,	// (0x000464e6) aid_size_cell_vkb

0xc686,	// (0x00046987) cell_vkb_candidate_pane

0x7096,	// (0x00041397) bg_popup_fep_shadow_pane_g1

0xc273,	// (0x00046574) fep_vkb_bottom_pane_ParamLimits

0xc273,	// (0x00046574) fep_vkb_bottom_pane

0xc2a9,	// (0x000465aa) fep_vkb_candidate_pane_ParamLimits

0xc2a9,	// (0x000465aa) fep_vkb_candidate_pane

0xc2c5,	// (0x000465c6) fep_vkb_keypad_pane_ParamLimits

0xc2c5,	// (0x000465c6) fep_vkb_keypad_pane

0xc30b,	// (0x0004660c) fep_vkb_side_pane_ParamLimits

0xc30b,	// (0x0004660c) fep_vkb_side_pane

0xc347,	// (0x00046648) fep_vkb_top_pane_ParamLimits

0xc347,	// (0x00046648) fep_vkb_top_pane

0xc383,	// (0x00046684) fep_vkb_top_pane_g1_ParamLimits

0xc383,	// (0x00046684) fep_vkb_top_pane_g1

0xc392,	// (0x00046693) fep_vkb_top_pane_g2_ParamLimits

0xc392,	// (0x00046693) fep_vkb_top_pane_g2

0xc3a1,	// (0x000466a2) fep_vkb_top_pane_g3_ParamLimits

0xc3a1,	// (0x000466a2) fep_vkb_top_pane_g3

0x0003,

0xfb27,	// (0x00049e28) fep_vkb_top_pane_g_ParamLimits

0xfb27,	// (0x00049e28) fep_vkb_top_pane_g

0xc3bf,	// (0x000466c0) fep_vkb_top_text_pane_ParamLimits

0xc3bf,	// (0x000466c0) fep_vkb_top_text_pane

0xc3d0,	// (0x000466d1) fep_vkb_side_pane_g1_ParamLimits

0xc3d0,	// (0x000466d1) fep_vkb_side_pane_g1

0xc419,	// (0x0004671a) grid_vkb_side_pane_ParamLimits

0xc419,	// (0x0004671a) grid_vkb_side_pane

0x709e,	// (0x0004139f) bg_popup_fep_shadow_pane_g2

0x70a7,	// (0x000413a8) bg_popup_fep_shadow_pane_g3

0x70af,	// (0x000413b0) bg_popup_fep_shadow_pane_g4

0x70b8,	// (0x000413b9) bg_popup_fep_shadow_pane_g5

0x70c2,	// (0x000413c3) bg_popup_fep_shadow_pane_g6

0x70ca,	// (0x000413cb) bg_popup_fep_shadow_pane_g7

0x86d3,	// (0x000429d4) bg_popup_fep_shadow_pane_g8

0xc470,	// (0x00046771) grid_vkb_keypad_number_pane_ParamLimits

0xc470,	// (0x00046771) grid_vkb_keypad_number_pane

0xc480,	// (0x00046781) grid_vkb_keypad_pane_ParamLimits

0xc480,	// (0x00046781) grid_vkb_keypad_pane

0xc4a6,	// (0x000467a7) fep_vkb_bottom_pane_g1_ParamLimits

0xc4a6,	// (0x000467a7) fep_vkb_bottom_pane_g1

0xc4cf,	// (0x000467d0) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc4cf,	// (0x000467d0) grid_vkb_keypad_bottom_left_pane

0xc4e4,	// (0x000467e5) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc4e4,	// (0x000467e5) grid_vkb_keypad_bottom_right_pane

0xc4f9,	// (0x000467fa) fep_vkb_top_text_pane_g1

0xc514,	// (0x00046815) fep_vkb_top_text_pane_t1

0xc529,	// (0x0004682a) cell_vkb_side_pane_ParamLimits

0xc529,	// (0x0004682a) cell_vkb_side_pane

0xc133,	// (0x00046434) cell_vkb_side_pane_g1

0xc568,	// (0x00046869) cell_vkb_keypad_pane_ParamLimits

0xc568,	// (0x00046869) cell_vkb_keypad_pane

0xc5dd,	// (0x000468de) cell_vkb_keypad_pane_g1

0x0008,

0xfb54,	// (0x00049e55) bg_popup_fep_shadow_pane_g

0xc133,	// (0x00046434) cell_hwr_side_pane_g1

0xc133,	// (0x00046434) cell_hwr_side_pane_g2

0xc5e7,	// (0x000468e8) cell_vkb_keypad_pane_t1

0xc5f5,	// (0x000468f6) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc5f5,	// (0x000468f6) cell_vkb_keypad_bottom_left_pane

0xc612,	// (0x00046913) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc612,	// (0x00046913) cell_vkb_keypad_bottom_right_pane

0xc133,	// (0x00046434) cell_vkb_keypad_bottom_left_pane_g1

0xc133,	// (0x00046434) cell_vkb_keypad_bottom_right_pane_g1

0xc64b,	// (0x0004694c) cell_vkb_keypad_number_pane_ParamLimits

0xc64b,	// (0x0004694c) cell_vkb_keypad_number_pane

0xc66a,	// (0x0004696b) cell_vkb_keypad_number_pane_g1

0xc674,	// (0x00046975) cell_vkb_keypad_number_pane_g2

0xc67d,	// (0x0004697e) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb46,	// (0x00049e47) cell_vkb_keypad_number_pane_g

0xc5e7,	// (0x000468e8) cell_vkb_keypad_number_pane_t1

0xc6a1,	// (0x000469a2) fep_vkb_candidate_pane_g1

0x0001,

0xfb41,	// (0x00049e42) cell_hwr_side_pane_g

0xc6ba,	// (0x000469bb) cell_hwr_side_pane_t1

0x70dc,	// (0x000413dd) cell_hwr_side_pane_t1_copy1

0xc3b1,	// (0x000466b2) cell_hwr_candidate_pane_g1

0x70ea,	// (0x000413eb) cell_hwr_candidate_pane_t1

0xc133,	// (0x00046434) cell_vkb_candidate_pane_g2

0xc6fe,	// (0x000469ff) cell_vkb_candidate_pane_t1

0x6eaa,	// (0x000411ab) bg_popup_fep_shadow_pane_ParamLimits

0x6eaa,	// (0x000411ab) bg_popup_fep_shadow_pane

0x2bf7,	// (0x0003cef8) bg_fep_hwr_top_pane_g4

0xc1b3,	// (0x000464b4) bg_hwr_side_pane_g1_ParamLimits

0xc1b3,	// (0x000464b4) bg_hwr_side_pane_g1

0x6fc2,	// (0x000412c3) cell_hwr_side_pane_ParamLimits

0x6fc2,	// (0x000412c3) cell_hwr_side_pane

0x6ffd,	// (0x000412fe) fep_hwr_write_pane_g1_ParamLimits

0x6ffd,	// (0x000412fe) fep_hwr_write_pane_g1

0x700a,	// (0x0004130b) fep_hwr_write_pane_g2_ParamLimits

0x700a,	// (0x0004130b) fep_hwr_write_pane_g2

0x7017,	// (0x00041318) fep_hwr_write_pane_g3_ParamLimits

0x7017,	// (0x00041318) fep_hwr_write_pane_g3

0x7025,	// (0x00041326) fep_hwr_write_pane_g4_ParamLimits

0x7025,	// (0x00041326) fep_hwr_write_pane_g4

0x0005,

0xfb13,	// (0x00049e14) fep_hwr_write_pane_g_ParamLimits

0xfb13,	// (0x00049e14) fep_hwr_write_pane_g

0x2bf7,	// (0x0003cef8) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x2bf7,	// (0x0003cef8) bg_fep_hwr_candidate_pane_g2

0x703a,	// (0x0004133b) cell_hwr_candidate_pane_ParamLimits

0x703a,	// (0x0004133b) cell_hwr_candidate_pane

0x707c,	// (0x0004137d) fep_hwr_candidate_pane_g1_ParamLimits

0xc213,	// (0x00046514) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc213,	// (0x00046514) bg_popup_fep_shadow_pane_cp2

0xc3b1,	// (0x000466b2) fep_vkb_top_pane_g4_ParamLimits

0xc3b1,	// (0x000466b2) fep_vkb_top_pane_g4

0xc3f7,	// (0x000466f8) fep_vkb_side_pane_g2_ParamLimits

0xc3f7,	// (0x000466f8) fep_vkb_side_pane_g2

0x4d70,	// (0x0003f071) list_setting_pane_t4_ParamLimits

0x4d70,	// (0x0003f071) list_setting_pane_t4

0x4e0a,	// (0x0003f10b) list_setting_number_pane_t5_ParamLimits

0x4e0a,	// (0x0003f10b) list_setting_number_pane_t5

0x8d1e,	// (0x0004301f) list_double_heading_pane_cp2_ParamLimits

0x8d1e,	// (0x0004301f) list_double_heading_pane_cp2

0x85ff,	// (0x00042900) list_double_heading_pane_g1_cp2_ParamLimits

0x85ff,	// (0x00042900) list_double_heading_pane_g1_cp2

0x8672,	// (0x00042973) list_double_heading_pane_g2_cp2_ParamLimits

0x8672,	// (0x00042973) list_double_heading_pane_g2_cp2

0xc70c,	// (0x00046a0d) list_double_heading_pane_t1_cp2_ParamLimits

0xc70c,	// (0x00046a0d) list_double_heading_pane_t1_cp2

0xc722,	// (0x00046a23) list_double_heading_pane_t2_cp2_ParamLimits

0xc722,	// (0x00046a23) list_double_heading_pane_t2_cp2

0x7ce0,	// (0x00041fe1) aid_value_unit2

0x5b7c,	// (0x0003fe7d) popup_preview_fixed_window

0x8075,	// (0x00042376) bg_popup_preview_window_pane_cp02

0xc776,	// (0x00046a77) list_preview_fixed_pane

0xc7bc,	// (0x00046abd) list_empty_pane_fp_ParamLimits

0xc7bc,	// (0x00046abd) list_empty_pane_fp

0xc7bc,	// (0x00046abd) list_single_cale_day_pane_fp_ParamLimits

0xc7bc,	// (0x00046abd) list_single_cale_day_pane_fp

0xc7bc,	// (0x00046abd) list_single_graphic_heading_pane_fp_ParamLimits

0xc7bc,	// (0x00046abd) list_single_graphic_heading_pane_fp

0xc7bc,	// (0x00046abd) list_single_graphic_pane_fp_ParamLimits

0xc7bc,	// (0x00046abd) list_single_graphic_pane_fp

0xc7bc,	// (0x00046abd) list_single_heading_pane_fp_ParamLimits

0xc7bc,	// (0x00046abd) list_single_heading_pane_fp

0xc7bc,	// (0x00046abd) list_single_pane_fp_ParamLimits

0xc7bc,	// (0x00046abd) list_single_pane_fp

0xc7d1,	// (0x00046ad2) list_single_pane_fp_g1_ParamLimits

0xc7d1,	// (0x00046ad2) list_single_pane_fp_g1

0x85ff,	// (0x00042900) list_single_pane_fp_g2_ParamLimits

0x85ff,	// (0x00042900) list_single_pane_fp_g2

0x8672,	// (0x00042973) list_single_pane_fp_g3_ParamLimits

0x8672,	// (0x00042973) list_single_pane_fp_g3

0xc7dd,	// (0x00046ade) list_single_pane_fp_g4_ParamLimits

0xc7dd,	// (0x00046ade) list_single_pane_fp_g4

0x0003,

0xfb75,	// (0x00049e76) list_single_pane_fp_g_ParamLimits

0xfb75,	// (0x00049e76) list_single_pane_fp_g

0x5629,	// (0x0003f92a) list_single_pane_fp_t1_ParamLimits

0x5629,	// (0x0003f92a) list_single_pane_fp_t1

0x5640,	// (0x0003f941) list_single_graphic_pane_fp_g1_ParamLimits

0x5640,	// (0x0003f941) list_single_graphic_pane_fp_g1

0xc7d1,	// (0x00046ad2) list_single_graphic_pane_fp_g2_ParamLimits

0xc7d1,	// (0x00046ad2) list_single_graphic_pane_fp_g2

0x85ff,	// (0x00042900) list_single_graphic_pane_fp_g3_ParamLimits

0x85ff,	// (0x00042900) list_single_graphic_pane_fp_g3

0x8672,	// (0x00042973) list_single_graphic_pane_fp_g4_ParamLimits

0x8672,	// (0x00042973) list_single_graphic_pane_fp_g4

0xc7dd,	// (0x00046ade) list_single_graphic_pane_fp_g5_ParamLimits

0xc7dd,	// (0x00046ade) list_single_graphic_pane_fp_g5

0x0004,

0xfb7e,	// (0x00049e7f) list_single_graphic_pane_fp_g_ParamLimits

0xfb7e,	// (0x00049e7f) list_single_graphic_pane_fp_g

0x564c,	// (0x0003f94d) list_single_graphic_pane_fp_t1_ParamLimits

0x564c,	// (0x0003f94d) list_single_graphic_pane_fp_t1

0x5640,	// (0x0003f941) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x5640,	// (0x0003f941) list_single_graphic_heading_pane_fp_g1

0xc7d1,	// (0x00046ad2) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc7d1,	// (0x00046ad2) list_single_graphic_heading_pane_fp_g2

0x85ff,	// (0x00042900) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x85ff,	// (0x00042900) list_single_graphic_heading_pane_fp_g3

0x8672,	// (0x00042973) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x8672,	// (0x00042973) list_single_graphic_heading_pane_fp_g4

0xc7dd,	// (0x00046ade) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc7dd,	// (0x00046ade) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb7e,	// (0x00049e7f) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb7e,	// (0x00049e7f) list_single_graphic_heading_pane_fp_g

0x5662,	// (0x0003f963) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x5662,	// (0x0003f963) list_single_graphic_heading_pane_fp_t1

0x5678,	// (0x0003f979) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x5678,	// (0x0003f979) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb89,	// (0x00049e8a) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb89,	// (0x00049e8a) list_single_graphic_heading_pane_fp_t

0x568a,	// (0x0003f98b) list_single_cale_day_pane_fp_g1_ParamLimits

0x568a,	// (0x0003f98b) list_single_cale_day_pane_fp_g1

0xc7e9,	// (0x00046aea) list_single_cale_day_pane_fp_g2_ParamLimits

0xc7e9,	// (0x00046aea) list_single_cale_day_pane_fp_g2

0x7108,	// (0x00041409) list_single_cale_day_pane_fp_g3_ParamLimits

0x7108,	// (0x00041409) list_single_cale_day_pane_fp_g3

0x7130,	// (0x00041431) list_single_cale_day_pane_fp_g4_ParamLimits

0x7130,	// (0x00041431) list_single_cale_day_pane_fp_g4

0x7154,	// (0x00041455) list_single_cale_day_pane_fp_g5_ParamLimits

0x7154,	// (0x00041455) list_single_cale_day_pane_fp_g5

0x0004,

0xfb8e,	// (0x00049e8f) list_single_cale_day_pane_fp_g_ParamLimits

0xfb8e,	// (0x00049e8f) list_single_cale_day_pane_fp_g

0x56c2,	// (0x0003f9c3) list_single_cale_day_pane_fp_t1_ParamLimits

0x56c2,	// (0x0003f9c3) list_single_cale_day_pane_fp_t1

0x56e8,	// (0x0003f9e9) list_single_cale_day_pane_fp_t2_ParamLimits

0x56e8,	// (0x0003f9e9) list_single_cale_day_pane_fp_t2

0x5701,	// (0x0003fa02) list_single_cale_day_pane_fp_t3_ParamLimits

0x5701,	// (0x0003fa02) list_single_cale_day_pane_fp_t3

0x0002,

0xfb99,	// (0x00049e9a) list_single_cale_day_pane_fp_t_ParamLimits

0xfb99,	// (0x00049e9a) list_single_cale_day_pane_fp_t

0xc7d1,	// (0x00046ad2) list_empty_pane_fp_g1_ParamLimits

0xc7d1,	// (0x00046ad2) list_empty_pane_fp_g1

0x571a,	// (0x0003fa1b) list_empty_pane_fp_t1

0x5728,	// (0x0003fa29) list_empty_pane_fp_t2

0x0001,

0xfba0,	// (0x00049ea1) list_empty_pane_fp_t

0xc7d1,	// (0x00046ad2) list_single_heading_pane_fp_g1_ParamLimits

0xc7d1,	// (0x00046ad2) list_single_heading_pane_fp_g1

0x85ff,	// (0x00042900) list_single_heading_pane_fp_g2_ParamLimits

0x85ff,	// (0x00042900) list_single_heading_pane_fp_g2

0x8672,	// (0x00042973) list_single_heading_pane_fp_g3_ParamLimits

0x8672,	// (0x00042973) list_single_heading_pane_fp_g3

0x0002,

0xfba5,	// (0x00049ea6) list_single_heading_pane_fp_g_ParamLimits

0xfba5,	// (0x00049ea6) list_single_heading_pane_fp_g

0x5736,	// (0x0003fa37) list_single_heading_pane_fp_t1_ParamLimits

0x5736,	// (0x0003fa37) list_single_heading_pane_fp_t1

0x5748,	// (0x0003fa49) list_single_heading_pane_fp_t2_ParamLimits

0x5748,	// (0x0003fa49) list_single_heading_pane_fp_t2

0x0001,

0xfbac,	// (0x00049ead) list_single_heading_pane_fp_t_ParamLimits

0xfbac,	// (0x00049ead) list_single_heading_pane_fp_t

0x885a,	// (0x00042b5b) aid_size_cell_fast

0x7fe5,	// (0x000422e6) soft_indicator_pane_cp1_t1

0x8897,	// (0x00042b98) cell_app_pane_cp2_ParamLimits

0x8897,	// (0x00042b98) cell_app_pane_cp2

0x6ecc,	// (0x000411cd) fep_hwr_candidate_drop_down_list_pane

0x2c05,	// (0x0003cf06) fep_hwr_candidate_pane_g3_ParamLimits

0x2c05,	// (0x0003cf06) fep_hwr_candidate_pane_g3

0x2c12,	// (0x0003cf13) fep_hwr_candidate_pane_g4_ParamLimits

0x2c12,	// (0x0003cf13) fep_hwr_candidate_pane_g4

0x0002,

0xfb20,	// (0x00049e21) fep_hwr_candidate_pane_g_ParamLimits

0xfb20,	// (0x00049e21) fep_hwr_candidate_pane_g

0xc298,	// (0x00046599) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc298,	// (0x00046599) fep_vkb_candidate_drop_down_list_pane

0xc6a9,	// (0x000469aa) fep_vkb_candidate_pane_g3

0xc6b1,	// (0x000469b2) fep_vkb_candidate_pane_g4

0x0002,

0xfb4d,	// (0x00049e4e) fep_vkb_candidate_pane_g

0xc3b1,	// (0x000466b2) cell_hwr_candidate_pane_g1_ParamLimits

0xc734,	// (0x00046a35) cell_hwr_candidate_pane_g3_ParamLimits

0xc734,	// (0x00046a35) cell_hwr_candidate_pane_g3

0xc755,	// (0x00046a56) cell_hwr_candidate_pane_g4_ParamLimits

0xc755,	// (0x00046a56) cell_hwr_candidate_pane_g4

0x0002,

0xfb67,	// (0x00049e68) cell_hwr_candidate_pane_g_ParamLimits

0xfb67,	// (0x00049e68) cell_hwr_candidate_pane_g

0xc6c8,	// (0x000469c9) cell_vkb_candidate_pane_g3_ParamLimits

0xc6c8,	// (0x000469c9) cell_vkb_candidate_pane_g3

0xc6e3,	// (0x000469e4) cell_vkb_candidate_pane_g4_ParamLimits

0xc6e3,	// (0x000469e4) cell_vkb_candidate_pane_g4

0xc7f5,	// (0x00046af6) cell_app_pane_cp2_g1_ParamLimits

0xc7f5,	// (0x00046af6) cell_app_pane_cp2_g1

0xc813,	// (0x00046b14) cell_app_pane_cp2_g2_ParamLimits

0xc813,	// (0x00046b14) cell_app_pane_cp2_g2

0x0001,

0xfbb1,	// (0x00049eb2) cell_app_pane_cp2_g_ParamLimits

0xfbb1,	// (0x00049eb2) cell_app_pane_cp2_g

0xc81f,	// (0x00046b20) cell_app_pane_cp2_t1_ParamLimits

0xc81f,	// (0x00046b20) cell_app_pane_cp2_t1

0x8664,	// (0x00042965) grid_highlight_pane_cp1_ParamLimits

0x8664,	// (0x00042965) grid_highlight_pane_cp1

0x7178,	// (0x00041479) cell_hwr_candidate_pane_cp1_ParamLimits

0x7178,	// (0x00041479) cell_hwr_candidate_pane_cp1

0xc3b1,	// (0x000466b2) fep_hwr_candidate_drop_down_list_pane_g1

0xc831,	// (0x00046b32) fep_hwr_candidate_drop_down_list_pane_g2

0xc83e,	// (0x00046b3f) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbb6,	// (0x00049eb7) fep_hwr_candidate_drop_down_list_pane_g

0x7197,	// (0x00041498) fep_hwr_candidate_drop_down_list_scroll_pane

0x71a0,	// (0x000414a1) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x71a0,	// (0x000414a1) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x71ad,	// (0x000414ae) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x71ad,	// (0x000414ae) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x71ba,	// (0x000414bb) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x71ba,	// (0x000414bb) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xc6c8,	// (0x000469c9) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc6c8,	// (0x000469c9) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xc6e3,	// (0x000469e4) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc6e3,	// (0x000469e4) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x71c7,	// (0x000414c8) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x71c7,	// (0x000414c8) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x71e2,	// (0x000414e3) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x71e2,	// (0x000414e3) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x71fd,	// (0x000414fe) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x71fd,	// (0x000414fe) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbbd,	// (0x00049ebe) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbbd,	// (0x00049ebe) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc84b,	// (0x00046b4c) cell_vkb_candidate_pane_cp1_ParamLimits

0xc84b,	// (0x00046b4c) cell_vkb_candidate_pane_cp1

0xc3b1,	// (0x000466b2) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc3b1,	// (0x000466b2) fep_vkb_candidate_drop_down_list_pane_g1

0xc831,	// (0x00046b32) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc831,	// (0x00046b32) fep_vkb_candidate_drop_down_list_pane_g2

0xc83e,	// (0x00046b3f) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc83e,	// (0x00046b3f) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbb6,	// (0x00049eb7) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbb6,	// (0x00049eb7) fep_vkb_candidate_drop_down_list_pane_g

0xc86b,	// (0x00046b6c) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc86b,	// (0x00046b6c) fep_vkb_candidate_drop_down_list_scroll_pane

0xc878,	// (0x00046b79) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc878,	// (0x00046b79) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc885,	// (0x00046b86) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc885,	// (0x00046b86) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc891,	// (0x00046b92) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc891,	// (0x00046b92) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc734,	// (0x00046a35) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc734,	// (0x00046a35) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc755,	// (0x00046a56) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc755,	// (0x00046a56) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc89d,	// (0x00046b9e) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc89d,	// (0x00046b9e) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc8be,	// (0x00046bbf) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc8be,	// (0x00046bbf) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc8df,	// (0x00046be0) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc8df,	// (0x00046be0) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbce,	// (0x00049ecf) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbce,	// (0x00049ecf) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x7d16,	// (0x00042017) title_pane_g1_ParamLimits

0x7d23,	// (0x00042024) title_pane_g2_ParamLimits

0xf554,	// (0x00049855) title_pane_g_ParamLimits

0x8cc7,	// (0x00042fc8) aid_call2_pane

0x8ccf,	// (0x00042fd0) aid_call_pane

0x8cd7,	// (0x00042fd8) popup_clock_analogue_window_g1

0x8cd7,	// (0x00042fd8) popup_clock_analogue_window_g2

0x5f99,	// (0x0004029a) popup_clock_analogue_window_g3

0x5fa2,	// (0x000402a3) popup_clock_analogue_window_g4

0x7d02,	// (0x00042003) popup_clock_analogue_window_g5

0x0004,

0xf703,	// (0x00049a04) popup_clock_analogue_window_g

0x5faa,	// (0x000402ab) popup_clock_analogue_window_t1

0x5fb8,	// (0x000402b9) clock_digital_number_pane_ParamLimits

0x5fb8,	// (0x000402b9) clock_digital_number_pane

0x5fc4,	// (0x000402c5) clock_digital_number_pane_cp02_ParamLimits

0x5fc4,	// (0x000402c5) clock_digital_number_pane_cp02

0x5fd0,	// (0x000402d1) clock_digital_number_pane_cp03_ParamLimits

0x5fd0,	// (0x000402d1) clock_digital_number_pane_cp03

0x5fdc,	// (0x000402dd) clock_digital_number_pane_cp04_ParamLimits

0x5fdc,	// (0x000402dd) clock_digital_number_pane_cp04

0x5fe8,	// (0x000402e9) clock_digital_separator_pane_ParamLimits

0x5fe8,	// (0x000402e9) clock_digital_separator_pane

0x5ff4,	// (0x000402f5) popup_clock_digital_window_t1_ParamLimits

0x5ff4,	// (0x000402f5) popup_clock_digital_window_t1

0x7d02,	// (0x00042003) clock_digital_number_pane_g1

0x7d02,	// (0x00042003) clock_digital_number_pane_g2

0x0001,

0xf70e,	// (0x00049a0f) clock_digital_number_pane_g

0x7d02,	// (0x00042003) clock_digital_separator_pane_g1

0x7d02,	// (0x00042003) clock_digital_separator_pane_g2

0x0001,

0xf70e,	// (0x00049a0f) clock_digital_separator_pane_g

0x9641,	// (0x00043942) aid_fill_nsta_ParamLimits

0x9787,	// (0x00043a88) indicator_nsta_pane_ParamLimits

0x9900,	// (0x00043c01) popup_clock_analogue_window

0x9900,	// (0x00043c01) popup_clock_digital_window

0x7dec,	// (0x000420ed) grid_indicator_nsta_pane_ParamLimits

0xbb1c,	// (0x00045e1d) clock_nsta_pane_t2

0x0001,

0xfaa0,	// (0x00049da1) clock_nsta_pane_t

0x5f5d,	// (0x0004025e) aid_size_max_handle

0x5f67,	// (0x00040268) aid_size_min_handle

0x92df,	// (0x000435e0) editor_scroll_pane

0xc8fa,	// (0x00046bfb) ex_editor_pane

0x87c8,	// (0x00042ac9) scroll_pane_cp13

0x85f7,	// (0x000428f8) scroll_pane_cp14

0x8d06,	// (0x00043007) scroll_pane_cp36

0x8d32,	// (0x00043033) list_single_graphic_hl_pane_cp2_ParamLimits

0x8d32,	// (0x00043033) list_single_graphic_hl_pane_cp2

0x5313,	// (0x0003f614) list_single_graphic_hl_pane_ParamLimits

0x5313,	// (0x0003f614) list_single_graphic_hl_pane

0x575e,	// (0x0003fa5f) aid_size_min_hl_cp1

0xc902,	// (0x00046c03) list_highlight_pane_cp34_ParamLimits

0xc902,	// (0x00046c03) list_highlight_pane_cp34

0xc913,	// (0x00046c14) list_single_graphic_hl_pane_g1_ParamLimits

0xc913,	// (0x00046c14) list_single_graphic_hl_pane_g1

0x5767,	// (0x0003fa68) list_single_graphic_hl_pane_g2_ParamLimits

0x5767,	// (0x0003fa68) list_single_graphic_hl_pane_g2

0x5767,	// (0x0003fa68) list_single_graphic_hl_pane_g3_ParamLimits

0x5767,	// (0x0003fa68) list_single_graphic_hl_pane_g3

0x9250,	// (0x00043551) list_single_graphic_hl_pane_g4_ParamLimits

0x9250,	// (0x00043551) list_single_graphic_hl_pane_g4

0x7218,	// (0x00041519) list_single_graphic_hl_pane_g5_ParamLimits

0x7218,	// (0x00041519) list_single_graphic_hl_pane_g5

0x0004,

0xfbdf,	// (0x00049ee0) list_single_graphic_hl_pane_g_ParamLimits

0xfbdf,	// (0x00049ee0) list_single_graphic_hl_pane_g

0x5773,	// (0x0003fa74) list_single_graphic_hl_pane_t1_ParamLimits

0x5773,	// (0x0003fa74) list_single_graphic_hl_pane_t1

0xc920,	// (0x00046c21) aid_size_min_hl_cp2

0xc929,	// (0x00046c2a) list_highlight_pane_cp34_cp2_ParamLimits

0xc929,	// (0x00046c2a) list_highlight_pane_cp34_cp2

0xc913,	// (0x00046c14) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc913,	// (0x00046c14) list_single_graphic_hl_pane_g1_cp2

0xc936,	// (0x00046c37) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc936,	// (0x00046c37) list_single_graphic_hl_pane_g2_cp2

0xc942,	// (0x00046c43) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc942,	// (0x00046c43) list_single_graphic_hl_pane_g3_cp2

0xbf13,	// (0x00046214) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xbf13,	// (0x00046214) list_single_graphic_hl_pane_g4_cp2

0xc950,	// (0x00046c51) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc950,	// (0x00046c51) list_single_graphic_hl_pane_g5_cp2

0x62c4,	// (0x000405c5) control_pane_g4_ParamLimits

0x62c4,	// (0x000405c5) control_pane_g4

0x961f,	// (0x00043920) bg_popup_sub_pane_cp10_ParamLimits

0xc13d,	// (0x0004643e) list_choice_list_pane_ParamLimits

0xc14c,	// (0x0004644d) scroll_pane_cp23

0x8075,	// (0x00042376) bg_popup_preview_window_pane_cp02_ParamLimits

0xc776,	// (0x00046a77) list_preview_fixed_pane_ParamLimits

0xc78c,	// (0x00046a8d) list_preview_fixed_pane_cp_ParamLimits

0xc78c,	// (0x00046a8d) list_preview_fixed_pane_cp

0xc798,	// (0x00046a99) popup_preview_fixed_window_g1_ParamLimits

0xc798,	// (0x00046a99) popup_preview_fixed_window_g1

0xc7a4,	// (0x00046aa5) popup_preview_fixed_window_g2_ParamLimits

0xc7a4,	// (0x00046aa5) popup_preview_fixed_window_g2

0x0002,

0xfb6e,	// (0x00049e6f) popup_preview_fixed_window_g_ParamLimits

0xfb6e,	// (0x00049e6f) popup_preview_fixed_window_g

0x5ed1,	// (0x000401d2) aid_navi_side_left_pane_ParamLimits

0x5ee6,	// (0x000401e7) aid_navi_side_right_pane_ParamLimits

0x5efe,	// (0x000401ff) navi_icon_pane_stacon_ParamLimits

0x5f12,	// (0x00040213) navi_navi_pane_stacon_ParamLimits

0x5efe,	// (0x000401ff) navi_text_pane_stacon_ParamLimits

0x7cf8,	// (0x00041ff9) main_text_info_pane

0xc97a,	// (0x00046c7b) listscroll_text_info_pane

0xc982,	// (0x00046c83) list_text_info_pane_ParamLimits

0xc982,	// (0x00046c83) list_text_info_pane

0xc991,	// (0x00046c92) scroll_pane_cp24_ParamLimits

0xc991,	// (0x00046c92) scroll_pane_cp24

0xc9af,	// (0x00046cb0) list_text_info_pane_t1_ParamLimits

0xc9af,	// (0x00046cb0) list_text_info_pane_t1

0x642a,	// (0x0004072b) popup_fast_swap2_window_ParamLimits

0x642a,	// (0x0004072b) popup_fast_swap2_window

0xc9e0,	// (0x00046ce1) aid_size_cell_fast2

0x7cf8,	// (0x00041ff9) bg_popup_window_pane_cp17

0x9f93,	// (0x00044294) heading_pane_cp2

0x82c1,	// (0x000425c2) listscroll_fast2_pane

0xc9ea,	// (0x00046ceb) grid_fast2_pane

0xc9f4,	// (0x00046cf5) listscroll_fast2_pane_g1

0xc9fc,	// (0x00046cfd) listscroll_fast2_pane_g2

0x0001,

0xfbea,	// (0x00049eeb) listscroll_fast2_pane_g

0x87c8,	// (0x00042ac9) scroll_pane_cp26

0xca06,	// (0x00046d07) cell_fast2_pane_ParamLimits

0xca06,	// (0x00046d07) cell_fast2_pane

0xca1b,	// (0x00046d1c) cell_fast2_pane_g1

0xca24,	// (0x00046d25) cell_fast2_pane_g2

0xca2d,	// (0x00046d2e) cell_fast2_pane_g3

0x0002,

0xfbef,	// (0x00049ef0) cell_fast2_pane_g

0x83b4,	// (0x000426b5) grid_highlight_pane_cp9

0x83c9,	// (0x000426ca) main_eswt_pane_ParamLimits

0x83c9,	// (0x000426ca) main_eswt_pane

0xc9a6,	// (0x00046ca7) list_single_text_info_pane

0xca35,	// (0x00046d36) eswt_ctrl_button_pane

0xca35,	// (0x00046d36) eswt_ctrl_canvas_pane

0xca3d,	// (0x00046d3e) eswt_ctrl_combo_pane

0xca35,	// (0x00046d36) eswt_ctrl_default_pane

0xca35,	// (0x00046d36) eswt_ctrl_label_pane

0xca45,	// (0x00046d46) eswt_ctrl_wait_pane

0xca4d,	// (0x00046d4e) eswt_shell_pane

0x7cf8,	// (0x00041ff9) listscroll_eswt_app_pane

0xca6d,	// (0x00046d6e) popup_eswt_tasktip_window_ParamLimits

0xca6d,	// (0x00046d6e) popup_eswt_tasktip_window

0x9b9d,	// (0x00043e9e) bg_popup_window_pane_cp18

0xca7e,	// (0x00046d7f) eswt_control_pane_g1_ParamLimits

0xca7e,	// (0x00046d7f) eswt_control_pane_g1

0xca8b,	// (0x00046d8c) eswt_control_pane_g2_ParamLimits

0xca8b,	// (0x00046d8c) eswt_control_pane_g2

0xca98,	// (0x00046d99) eswt_control_pane_g3_ParamLimits

0xca98,	// (0x00046d99) eswt_control_pane_g3

0xcaa5,	// (0x00046da6) eswt_control_pane_g4_ParamLimits

0xcaa5,	// (0x00046da6) eswt_control_pane_g4

0x0003,

0xfbf6,	// (0x00049ef7) eswt_control_pane_g_ParamLimits

0xfbf6,	// (0x00049ef7) eswt_control_pane_g

0x8664,	// (0x00042965) bg_button_pane_ParamLimits

0x8664,	// (0x00042965) bg_button_pane

0x83c9,	// (0x000426ca) common_borders_pane_copy2_ParamLimits

0x83c9,	// (0x000426ca) common_borders_pane_copy2

0xcab2,	// (0x00046db3) control_button_pane_g1_ParamLimits

0xcab2,	// (0x00046db3) control_button_pane_g1

0xcabe,	// (0x00046dbf) control_button_pane_g2_ParamLimits

0xcabe,	// (0x00046dbf) control_button_pane_g2

0xcaca,	// (0x00046dcb) control_button_pane_g3_ParamLimits

0xcaca,	// (0x00046dcb) control_button_pane_g3

0x0002,

0xfbff,	// (0x00049f00) control_button_pane_g_ParamLimits

0xfbff,	// (0x00049f00) control_button_pane_g

0xcade,	// (0x00046ddf) control_button_pane_t1

0xcaec,	// (0x00046ded) control_button_pane_t2

0x0001,

0xfc06,	// (0x00049f07) control_button_pane_t

0x9b29,	// (0x00043e2a) bg_button_pane_g1

0x9b31,	// (0x00043e32) bg_button_pane_g2

0x9b39,	// (0x00043e3a) bg_button_pane_g3

0x9b41,	// (0x00043e42) bg_button_pane_g4

0x9b49,	// (0x00043e4a) bg_button_pane_g5

0x9b51,	// (0x00043e52) bg_button_pane_g6

0x9b59,	// (0x00043e5a) bg_button_pane_g7

0x9b61,	// (0x00043e62) bg_button_pane_g8

0x9b69,	// (0x00043e6a) bg_button_pane_g9

0x0008,

0xf871,	// (0x00049b72) bg_button_pane_g

0xc0f8,	// (0x000463f9) common_borders_pane_ParamLimits

0xc0f8,	// (0x000463f9) common_borders_pane

0xca7e,	// (0x00046d7f) eswt_control_pane_g1_copy1_ParamLimits

0xca7e,	// (0x00046d7f) eswt_control_pane_g1_copy1

0xca8b,	// (0x00046d8c) eswt_control_pane_g2_copy1_ParamLimits

0xca8b,	// (0x00046d8c) eswt_control_pane_g2_copy1

0xca98,	// (0x00046d99) eswt_control_pane_g3_copy1_ParamLimits

0xca98,	// (0x00046d99) eswt_control_pane_g3_copy1

0xcaa5,	// (0x00046da6) eswt_control_pane_g4_copy1_ParamLimits

0xcaa5,	// (0x00046da6) eswt_control_pane_g4_copy1

0xc133,	// (0x00046434) bg_eswt_ctrl_canvas_pane_g1

0xc0f8,	// (0x000463f9) common_borders_pane_cp2_ParamLimits

0xc0f8,	// (0x000463f9) common_borders_pane_cp2

0xc0f8,	// (0x000463f9) common_borders_pane_cp3_ParamLimits

0xc0f8,	// (0x000463f9) common_borders_pane_cp3

0xcafa,	// (0x00046dfb) separator_horizontal_pane

0xcb02,	// (0x00046e03) separator_vertical_pane

0xca7e,	// (0x00046d7f) eswt_control_pane_g1_copy2_ParamLimits

0xca7e,	// (0x00046d7f) eswt_control_pane_g1_copy2

0xca8b,	// (0x00046d8c) eswt_control_pane_g2_copy2_ParamLimits

0xca8b,	// (0x00046d8c) eswt_control_pane_g2_copy2

0xca98,	// (0x00046d99) eswt_control_pane_g3_copy2_ParamLimits

0xca98,	// (0x00046d99) eswt_control_pane_g3_copy2

0xcaa5,	// (0x00046da6) eswt_control_pane_g4_copy2_ParamLimits

0xcaa5,	// (0x00046da6) eswt_control_pane_g4_copy2

0x7cf8,	// (0x00041ff9) common_borders_pane_cp4

0xcb0b,	// (0x00046e0c) separator_horizontal_pane_g1

0xcb14,	// (0x00046e15) separator_horizontal_pane_g2

0xcb1d,	// (0x00046e1e) separator_horizontal_pane_g3

0x0002,

0xfc0b,	// (0x00049f0c) separator_horizontal_pane_g

0xca7e,	// (0x00046d7f) eswt_control_pane_g1_copy3_ParamLimits

0xca7e,	// (0x00046d7f) eswt_control_pane_g1_copy3

0xca8b,	// (0x00046d8c) eswt_control_pane_g2_copy3_ParamLimits

0xca8b,	// (0x00046d8c) eswt_control_pane_g2_copy3

0xca98,	// (0x00046d99) eswt_control_pane_g3_copy3_ParamLimits

0xca98,	// (0x00046d99) eswt_control_pane_g3_copy3

0xcaa5,	// (0x00046da6) eswt_control_pane_g4_copy3_ParamLimits

0xcaa5,	// (0x00046da6) eswt_control_pane_g4_copy3

0x7cf8,	// (0x00041ff9) common_borders_pane_cp5

0xcb26,	// (0x00046e27) separator_vertical_pane_g1

0xcb2f,	// (0x00046e30) separator_vertical_pane_g2

0xcb38,	// (0x00046e39) separator_vertical_pane_g3

0x0002,

0xfc12,	// (0x00049f13) separator_vertical_pane_g

0xca7e,	// (0x00046d7f) eswt_control_pane_g1_copy4_ParamLimits

0xca7e,	// (0x00046d7f) eswt_control_pane_g1_copy4

0xca8b,	// (0x00046d8c) eswt_control_pane_g2_copy4_ParamLimits

0xca8b,	// (0x00046d8c) eswt_control_pane_g2_copy4

0xca98,	// (0x00046d99) eswt_control_pane_g3_copy4_ParamLimits

0xca98,	// (0x00046d99) eswt_control_pane_g3_copy4

0xcaa5,	// (0x00046da6) eswt_control_pane_g4_copy4_ParamLimits

0xcaa5,	// (0x00046da6) eswt_control_pane_g4_copy4

0xcb41,	// (0x00046e42) eswt_ctrl_combo_button_pane

0xcb49,	// (0x00046e4a) eswt_ctrl_input_pane

0xcb51,	// (0x00046e52) popup_choice_list_window_cp70

0xcb59,	// (0x00046e5a) eswt_ctrl_input_pane_t1

0x7cf8,	// (0x00041ff9) input_focus_pane_cp70

0xc0f8,	// (0x000463f9) bg_button_pane_cp70_ParamLimits

0xc0f8,	// (0x000463f9) bg_button_pane_cp70

0xcb67,	// (0x00046e68) eswt_ctrl_combo_button_pane_g1

0xcb6f,	// (0x00046e70) wait_bar_pane_cp70

0x9b9d,	// (0x00043e9e) bg_popup_window_pane_cp70_ParamLimits

0x9b9d,	// (0x00043e9e) bg_popup_window_pane_cp70

0xcb77,	// (0x00046e78) popup_eswt_tasktip_window_t1

0xcb8d,	// (0x00046e8e) wait_bar_pane_cp71_ParamLimits

0xcb8d,	// (0x00046e8e) wait_bar_pane_cp71

0xcb99,	// (0x00046e9a) grid_eswt_app_pane

0x8ae9,	// (0x00042dea) scroll_pane_cp70

0xcba2,	// (0x00046ea3) cell_eswt_app_pane_ParamLimits

0xcba2,	// (0x00046ea3) cell_eswt_app_pane

0xcbd2,	// (0x00046ed3) cell_eswt_app_pane_g1_ParamLimits

0xcbd2,	// (0x00046ed3) cell_eswt_app_pane_g1

0xcc01,	// (0x00046f02) cell_eswt_app_pane_g2_ParamLimits

0xcc01,	// (0x00046f02) cell_eswt_app_pane_g2

0x0001,

0xfc19,	// (0x00049f1a) cell_eswt_app_pane_g_ParamLimits

0xfc19,	// (0x00049f1a) cell_eswt_app_pane_g

0xcc2a,	// (0x00046f2b) cell_eswt_app_pane_t1_ParamLimits

0xcc2a,	// (0x00046f2b) cell_eswt_app_pane_t1

0xcc5c,	// (0x00046f5d) grid_highlight_pane_cp70_ParamLimits

0xcc5c,	// (0x00046f5d) grid_highlight_pane_cp70

0x91b4,	// (0x000434b5) set_content_pane_g1

0x957f,	// (0x00043880) status_small_volume_pane

0x722c,	// (0x0004152d) status_small_volume_pane_g1

0x7234,	// (0x00041535) volume_small2_pane

0x723d,	// (0x0004153e) volume_small2_pane_g1

0x7246,	// (0x00041547) volume_small2_pane_g2

0x724f,	// (0x00041550) volume_small2_pane_g3

0x7258,	// (0x00041559) volume_small2_pane_g4

0x7261,	// (0x00041562) volume_small2_pane_g5

0x726a,	// (0x0004156b) volume_small2_pane_g6

0x7273,	// (0x00041574) volume_small2_pane_g7

0x727c,	// (0x0004157d) volume_small2_pane_g8

0x7285,	// (0x00041586) volume_small2_pane_g9

0x728e,	// (0x0004158f) volume_small2_pane_g10

0x0009,

0xfc1e,	// (0x00049f1f) volume_small2_pane_g

0xc4f9,	// (0x000467fa) fep_vkb_top_text_pane_g1_ParamLimits

0xc514,	// (0x00046815) fep_vkb_top_text_pane_t1_ParamLimits

0xc7b0,	// (0x00046ab1) popup_preview_fixed_window_g3_ParamLimits

0xc7b0,	// (0x00046ab1) popup_preview_fixed_window_g3

0x68d7,	// (0x00040bd8) popup_toolbar_trans_pane

0xaf36,	// (0x00045237) aid_height_set_list_ParamLimits

0xaf47,	// (0x00045248) aid_size_parent_ParamLimits

0x961f,	// (0x00043920) list_highlight_pane_cp2_ParamLimits

0x91b4,	// (0x000434b5) set_content_pane_g1_ParamLimits

0x532e,	// (0x0003f62f) list_single_image_pane_ParamLimits

0x532e,	// (0x0003f62f) list_single_image_pane

0xcc68,	// (0x00046f69) aid_size_cell_image_ParamLimits

0xcc68,	// (0x00046f69) aid_size_cell_image

0xcc75,	// (0x00046f76) grid_single_image_pane_ParamLimits

0xcc75,	// (0x00046f76) grid_single_image_pane

0x9e24,	// (0x00044125) list_single_image_pane_g1_ParamLimits

0x9e24,	// (0x00044125) list_single_image_pane_g1

0xcc81,	// (0x00046f82) list_single_image_pane_g2_ParamLimits

0xcc81,	// (0x00046f82) list_single_image_pane_g2

0x0001,

0xfc33,	// (0x00049f34) list_single_image_pane_g_ParamLimits

0xfc33,	// (0x00049f34) list_single_image_pane_g

0xcc95,	// (0x00046f96) list_single_image_pane_t1_ParamLimits

0xcc95,	// (0x00046f96) list_single_image_pane_t1

0xccab,	// (0x00046fac) cell_image_list_pane_ParamLimits

0xccab,	// (0x00046fac) cell_image_list_pane

0xccbf,	// (0x00046fc0) cell_image_list_pane_g1

0xccc8,	// (0x00046fc9) cell_image_list_pane_g2

0x0001,

0xfc38,	// (0x00049f39) cell_image_list_pane_g

0xccd1,	// (0x00046fd2) aid_size_cell_tb_trans_pane

0x8664,	// (0x00042965) bg_tb_trans_pane

0xcce3,	// (0x00046fe4) grid_tb_trans_pane

0x9b29,	// (0x00043e2a) bg_tb_trans_pane_g1

0x9b31,	// (0x00043e32) bg_tb_trans_pane_g2

0x9b39,	// (0x00043e3a) bg_tb_trans_pane_g3

0x9b41,	// (0x00043e42) bg_tb_trans_pane_g4

0x9b49,	// (0x00043e4a) bg_tb_trans_pane_g5

0x9b61,	// (0x00043e62) bg_tb_trans_pane_g6

0x9b69,	// (0x00043e6a) bg_tb_trans_pane_g7

0x9b51,	// (0x00043e52) bg_tb_trans_pane_g8

0x9b59,	// (0x00043e5a) bg_tb_trans_pane_g9

0x0008,

0xfc3d,	// (0x00049f3e) bg_tb_trans_pane_g

0xccf7,	// (0x00046ff8) cell_toolbar_trans_pane_ParamLimits

0xccf7,	// (0x00046ff8) cell_toolbar_trans_pane

0xc133,	// (0x00046434) cell_toolbar_trans_pane_g1

0xbcf1,	// (0x00045ff2) list_form2_midp_pane_t1

0xbcff,	// (0x00046000) list_form2_midp_pane_t2

0x0001,

0xfae6,	// (0x00049de7) list_form2_midp_pane_t

0xbd0d,	// (0x0004600e) scroll_pane_cp51_ParamLimits

0xbec9,	// (0x000461ca) form2_midp_wait_pane_g1

0xbed2,	// (0x000461d3) form2_midp_wait_pane_g2

0xbedb,	// (0x000461dc) form2_midp_wait_pane_g3

0x0002,

0xfafb,	// (0x00049dfc) form2_midp_wait_pane_g

0x7dec,	// (0x000420ed) list_highlight_pane_cp21_ParamLimits

0xbf3e,	// (0x0004623f) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xbf4d,	// (0x0004624e) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x6cee,	// (0x00040fef) list_single_2graphic_im_pane_ParamLimits

0x6cee,	// (0x00040fef) list_single_2graphic_im_pane

0xcd1d,	// (0x0004701e) list_single_2graphic_im_pane_g1_ParamLimits

0xcd1d,	// (0x0004701e) list_single_2graphic_im_pane_g1

0xcd2e,	// (0x0004702f) list_single_2graphic_im_pane_g2_ParamLimits

0xcd2e,	// (0x0004702f) list_single_2graphic_im_pane_g2

0xcd3a,	// (0x0004703b) list_single_2graphic_im_pane_g3_ParamLimits

0xcd3a,	// (0x0004703b) list_single_2graphic_im_pane_g3

0x0003,

0xfc50,	// (0x00049f51) list_single_2graphic_im_pane_g_ParamLimits

0xfc50,	// (0x00049f51) list_single_2graphic_im_pane_g

0xcd5a,	// (0x0004705b) list_single_2graphic_im_pane_t1_ParamLimits

0xcd5a,	// (0x0004705b) list_single_2graphic_im_pane_t1

0xc7bc,	// (0x00046abd) list_single_graphic_2heading_pane_fp_ParamLimits

0xc7bc,	// (0x00046abd) list_single_graphic_2heading_pane_fp

0x5640,	// (0x0003f941) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x5640,	// (0x0003f941) list_single_graphic_2heading_pane_fp_g1

0xc7d1,	// (0x00046ad2) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc7d1,	// (0x00046ad2) list_single_graphic_2heading_pane_fp_g2

0x85ff,	// (0x00042900) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x85ff,	// (0x00042900) list_single_graphic_2heading_pane_fp_g3

0x8672,	// (0x00042973) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x8672,	// (0x00042973) list_single_graphic_2heading_pane_fp_g4

0xc7dd,	// (0x00046ade) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc7dd,	// (0x00046ade) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb7e,	// (0x00049e7f) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb7e,	// (0x00049e7f) list_single_graphic_2heading_pane_fp_g

0x5789,	// (0x0003fa8a) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x5789,	// (0x0003fa8a) list_single_graphic_2heading_pane_fp_t1

0x5678,	// (0x0003f979) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x5678,	// (0x0003f979) list_single_graphic_2heading_pane_fp_t2

0x579f,	// (0x0003faa0) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x579f,	// (0x0003faa0) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc59,	// (0x00049f5a) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc59,	// (0x00049f5a) list_single_graphic_2heading_pane_fp_t

0xc1bf,	// (0x000464c0) fep_hwr_write_pane_g5_ParamLimits

0xc1bf,	// (0x000464c0) fep_hwr_write_pane_g5

0xc1cb,	// (0x000464cc) fep_hwr_write_pane_g6_ParamLimits

0xc1cb,	// (0x000464cc) fep_hwr_write_pane_g6

0xca4d,	// (0x00046d4e) eswt_shell_pane_ParamLimits

0x9b9d,	// (0x00043e9e) bg_popup_window_pane_cp18_ParamLimits

0xae4d,	// (0x0004514e) heading_pane_cp70

0xcb77,	// (0x00046e78) popup_eswt_tasktip_window_t1_ParamLimits

0x9696,	// (0x00043997) aid_touch_tab_arrow_left

0x96a5,	// (0x000439a6) aid_touch_tab_arrow_right

0x7d34,	// (0x00042035) title_pane_g3_ParamLimits

0x7d34,	// (0x00042035) title_pane_g3

0x8623,	// (0x00042924) set_value_pane_g1

0x68d7,	// (0x00040bd8) popup_toolbar_trans_pane_ParamLimits

0xccd1,	// (0x00046fd2) aid_size_cell_tb_trans_pane_ParamLimits

0x8664,	// (0x00042965) bg_tb_trans_pane_ParamLimits

0xcce3,	// (0x00046fe4) grid_tb_trans_pane_ParamLimits

0x8075,	// (0x00042376) cont_note_pane_ParamLimits

0x8075,	// (0x00042376) cont_note_pane

0x83c9,	// (0x000426ca) cont_snote2_single_text_pane_ParamLimits

0x83c9,	// (0x000426ca) cont_snote2_single_text_pane

0x83c9,	// (0x000426ca) cont_snote2_single_graphic_pane_ParamLimits

0x83c9,	// (0x000426ca) cont_snote2_single_graphic_pane

0xa1ae,	// (0x000444af) cont_note_wait_pane_ParamLimits

0xa1ae,	// (0x000444af) cont_note_wait_pane

0xa1ae,	// (0x000444af) cont_note_image_pane_ParamLimits

0xa1ae,	// (0x000444af) cont_note_image_pane

0xcd8b,	// (0x0004708c) popup_note2_window_g1_ParamLimits

0xcd8b,	// (0x0004708c) popup_note2_window_g1

0xcdbc,	// (0x000470bd) popup_note2_window_t1_ParamLimits

0xcdbc,	// (0x000470bd) popup_note2_window_t1

0xce01,	// (0x00047102) popup_note2_window_t2_ParamLimits

0xce01,	// (0x00047102) popup_note2_window_t2

0xce46,	// (0x00047147) popup_note2_window_t3_ParamLimits

0xce46,	// (0x00047147) popup_note2_window_t3

0xce8b,	// (0x0004718c) popup_note2_window_t4_ParamLimits

0xce8b,	// (0x0004718c) popup_note2_window_t4

0x80f9,	// (0x000423fa) popup_note2_window_t5_ParamLimits

0x80f9,	// (0x000423fa) popup_note2_window_t5

0x0004,

0xfc65,	// (0x00049f66) popup_note2_window_t_ParamLimits

0xfc65,	// (0x00049f66) popup_note2_window_t

0xceba,	// (0x000471bb) popup_note2_image_window_g1_ParamLimits

0xceba,	// (0x000471bb) popup_note2_image_window_g1

0xcec6,	// (0x000471c7) popup_note2_image_window_g2_ParamLimits

0xcec6,	// (0x000471c7) popup_note2_image_window_g2

0x0001,

0xfc70,	// (0x00049f71) popup_note2_image_window_g_ParamLimits

0xfc70,	// (0x00049f71) popup_note2_image_window_g

0xced8,	// (0x000471d9) popup_note2_image_window_t1_ParamLimits

0xced8,	// (0x000471d9) popup_note2_image_window_t1

0xcef0,	// (0x000471f1) popup_note2_image_window_t2_ParamLimits

0xcef0,	// (0x000471f1) popup_note2_image_window_t2

0xcf08,	// (0x00047209) popup_note2_image_window_t3_ParamLimits

0xcf08,	// (0x00047209) popup_note2_image_window_t3

0x0002,

0xfc75,	// (0x00049f76) popup_note2_image_window_t_ParamLimits

0xfc75,	// (0x00049f76) popup_note2_image_window_t

0xa1bc,	// (0x000444bd) popup_note2_wait_window_g1_ParamLimits

0xa1bc,	// (0x000444bd) popup_note2_wait_window_g1

0xcf24,	// (0x00047225) popup_note2_wait_window_g2_ParamLimits

0xcf24,	// (0x00047225) popup_note2_wait_window_g2

0xa1d4,	// (0x000444d5) popup_note2_wait_window_g3_ParamLimits

0xa1d4,	// (0x000444d5) popup_note2_wait_window_g3

0x0002,

0xfc7c,	// (0x00049f7d) popup_note2_wait_window_g_ParamLimits

0xfc7c,	// (0x00049f7d) popup_note2_wait_window_g

0xcf30,	// (0x00047231) popup_note2_wait_window_t1_ParamLimits

0xcf30,	// (0x00047231) popup_note2_wait_window_t1

0xcf4e,	// (0x0004724f) popup_note2_wait_window_t2_ParamLimits

0xcf4e,	// (0x0004724f) popup_note2_wait_window_t2

0xcf6c,	// (0x0004726d) popup_note2_wait_window_t3_ParamLimits

0xcf6c,	// (0x0004726d) popup_note2_wait_window_t3

0xcf7e,	// (0x0004727f) popup_note2_wait_window_t4_ParamLimits

0xcf7e,	// (0x0004727f) popup_note2_wait_window_t4

0x0003,

0xfc83,	// (0x00049f84) popup_note2_wait_window_t_ParamLimits

0xfc83,	// (0x00049f84) popup_note2_wait_window_t

0xcf90,	// (0x00047291) wait_bar2_pane_ParamLimits

0xcf90,	// (0x00047291) wait_bar2_pane

0xcfa8,	// (0x000472a9) popup_snote2_single_text_window_g1_ParamLimits

0xcfa8,	// (0x000472a9) popup_snote2_single_text_window_g1

0xcfd0,	// (0x000472d1) popup_snote2_single_text_window_t1_ParamLimits

0xcfd0,	// (0x000472d1) popup_snote2_single_text_window_t1

0xd01c,	// (0x0004731d) popup_snote2_single_text_window_t2_ParamLimits

0xd01c,	// (0x0004731d) popup_snote2_single_text_window_t2

0xd068,	// (0x00047369) popup_snote2_single_text_window_t3_ParamLimits

0xd068,	// (0x00047369) popup_snote2_single_text_window_t3

0xd0a9,	// (0x000473aa) popup_snote2_single_text_window_t4_ParamLimits

0xd0a9,	// (0x000473aa) popup_snote2_single_text_window_t4

0xd0df,	// (0x000473e0) popup_snote2_single_text_window_t5_ParamLimits

0xd0df,	// (0x000473e0) popup_snote2_single_text_window_t5

0x0004,

0xfc8c,	// (0x00049f8d) popup_snote2_single_text_window_t_ParamLimits

0xfc8c,	// (0x00049f8d) popup_snote2_single_text_window_t

0xd10a,	// (0x0004740b) popup_snote2_single_graphic_window_g1_ParamLimits

0xd10a,	// (0x0004740b) popup_snote2_single_graphic_window_g1

0xd132,	// (0x00047433) popup_snote2_single_graphic_window_g2_ParamLimits

0xd132,	// (0x00047433) popup_snote2_single_graphic_window_g2

0x0001,

0xfc97,	// (0x00049f98) popup_snote2_single_graphic_window_g_ParamLimits

0xfc97,	// (0x00049f98) popup_snote2_single_graphic_window_g

0xd15a,	// (0x0004745b) popup_snote2_single_graphic_window_t1_ParamLimits

0xd15a,	// (0x0004745b) popup_snote2_single_graphic_window_t1

0xd1a6,	// (0x000474a7) popup_snote2_single_graphic_window_t2_ParamLimits

0xd1a6,	// (0x000474a7) popup_snote2_single_graphic_window_t2

0xd068,	// (0x00047369) popup_snote2_single_graphic_window_t3_ParamLimits

0xd068,	// (0x00047369) popup_snote2_single_graphic_window_t3

0xd0a9,	// (0x000473aa) popup_snote2_single_graphic_window_t4_ParamLimits

0xd0a9,	// (0x000473aa) popup_snote2_single_graphic_window_t4

0xd0df,	// (0x000473e0) popup_snote2_single_graphic_window_t5_ParamLimits

0xd0df,	// (0x000473e0) popup_snote2_single_graphic_window_t5

0x0004,

0xfc9c,	// (0x00049f9d) popup_snote2_single_graphic_window_t_ParamLimits

0xfc9c,	// (0x00049f9d) popup_snote2_single_graphic_window_t

0xbbce,	// (0x00045ecf) clock_nsta_pane_cp2_t1

0xbbce,	// (0x00045ecf) clock_nsta_pane_cp2_t2

0x0001,

0xfabc,	// (0x00049dbd) clock_nsta_pane_cp2_t

0x4f2a,	// (0x0003f22b) form_field_data_wide_pane_g1_ParamLimits

0x85ff,	// (0x00042900) form_field_data_wide_pane_g2_ParamLimits

0x85ff,	// (0x00042900) form_field_data_wide_pane_g2

0x8672,	// (0x00042973) form_field_data_wide_pane_g3_ParamLimits

0x8672,	// (0x00042973) form_field_data_wide_pane_g3

0x0002,

0xf686,	// (0x00049987) form_field_data_wide_pane_g_ParamLimits

0xf686,	// (0x00049987) form_field_data_wide_pane_g

0xbab8,	// (0x00045db9) grid_touch_3_pane_ParamLimits

0xbab8,	// (0x00045db9) grid_touch_3_pane

0xd1f2,	// (0x000474f3) cell_touch_3_pane_ParamLimits

0xd1f2,	// (0x000474f3) cell_touch_3_pane

0xc133,	// (0x00046434) cell_touch_3_pane_g1

0xc133,	// (0x00046434) cell_touch_3_pane_g2

0x0001,

0xfb41,	// (0x00049e42) cell_touch_3_pane_g

0x812b,	// (0x0004242c) cont_query_data_pane

0x8133,	// (0x00042434) cont_query_data_pane_cp1

0xd220,	// (0x00047521) button_value_adjust_pane_cp7

0xd228,	// (0x00047529) query_popup_pane_cp3

0x8dc7,	// (0x000430c8) bg_popup_sub_pane_cp22_ParamLimits

0x6013,	// (0x00040314) navi_navi_volume_pane_cp2

0x602e,	// (0x0004032f) popup_side_volume_key_window_g2

0x603d,	// (0x0004033e) popup_side_volume_key_window_g3

0x0002,

0xf71c,	// (0x00049a1d) popup_side_volume_key_window_g

0x605a,	// (0x0004035b) popup_side_volume_key_window_t2

0x0001,

0xf723,	// (0x00049a24) popup_side_volume_key_window_t

0x907e,	// (0x0004337f) popup_side_volume_key_window_ParamLimits

0x4b72,	// (0x0003ee73) list_double_graphic_pane_g4_ParamLimits

0x4b72,	// (0x0003ee73) list_double_graphic_pane_g4

0x6d2b,	// (0x0004102c) list_single_2heading_msg_pane_ParamLimits

0x6d2b,	// (0x0004102c) list_single_2heading_msg_pane

0x7297,	// (0x00041598) list_single_2heading_msg_pane_g1_ParamLimits

0x7297,	// (0x00041598) list_single_2heading_msg_pane_g1

0x9218,	// (0x00043519) list_single_2heading_msg_pane_g2_ParamLimits

0x9218,	// (0x00043519) list_single_2heading_msg_pane_g2

0x6e32,	// (0x00041133) list_single_2heading_msg_pane_g3_ParamLimits

0x6e32,	// (0x00041133) list_single_2heading_msg_pane_g3

0x72a3,	// (0x000415a4) list_single_2heading_msg_pane_g4_ParamLimits

0x72a3,	// (0x000415a4) list_single_2heading_msg_pane_g4

0x0003,

0xfca7,	// (0x00049fa8) list_single_2heading_msg_pane_g_ParamLimits

0xfca7,	// (0x00049fa8) list_single_2heading_msg_pane_g

0x57bf,	// (0x0003fac0) list_single_2heading_msg_pane_t1_ParamLimits

0x57bf,	// (0x0003fac0) list_single_2heading_msg_pane_t1

0x57e7,	// (0x0003fae8) list_single_2heading_msg_pane_t2_ParamLimits

0x57e7,	// (0x0003fae8) list_single_2heading_msg_pane_t2

0x581b,	// (0x0003fb1c) list_single_2heading_msg_pane_t3_ParamLimits

0x581b,	// (0x0003fb1c) list_single_2heading_msg_pane_t3

0x5854,	// (0x0003fb55) list_single_2heading_msg_pane_t4_ParamLimits

0x5854,	// (0x0003fb55) list_single_2heading_msg_pane_t4

0x0003,

0xfcb0,	// (0x00049fb1) list_single_2heading_msg_pane_t_ParamLimits

0xfcb0,	// (0x00049fb1) list_single_2heading_msg_pane_t

0x7d40,	// (0x00042041) title_pane_g4_ParamLimits

0x7d40,	// (0x00042041) title_pane_g4

0x5e22,	// (0x00040123) title_pane_stacon_g3_ParamLimits

0x5e22,	// (0x00040123) title_pane_stacon_g3

0xcd4e,	// (0x0004704f) list_single_2graphic_im_pane_g4_ParamLimits

0xcd4e,	// (0x0004704f) list_single_2graphic_im_pane_g4

0xac0d,	// (0x00044f0e) popup_side_volume_key_window_cp

0xb406,	// (0x00045707) main_idle_act2_pane_t1

0x69d5,	// (0x00040cd6) toolbar_button_pane_g10

0x85c1,	// (0x000428c2) popup_toolbar_window_cp1

0xbbbf,	// (0x00045ec0) clock_nsta_pane_cp_t1

0xbbbf,	// (0x00045ec0) clock_nsta_pane_cp_t2

0x0001,

0xfab7,	// (0x00049db8) clock_nsta_pane_cp_t

0x6013,	// (0x00040314) navi_navi_volume_pane_cp2_ParamLimits

0x6022,	// (0x00040323) popup_side_volume_key_window_g1_ParamLimits

0x602e,	// (0x0004032f) popup_side_volume_key_window_g2_ParamLimits

0x603d,	// (0x0004033e) popup_side_volume_key_window_g3_ParamLimits

0xf71c,	// (0x00049a1d) popup_side_volume_key_window_g_ParamLimits

0x6eb8,	// (0x000411b9) fep_hwr_aid_pane

0x2bf7,	// (0x0003cef8) bg_fep_hwr_top_pane_g4_ParamLimits

0xc18f,	// (0x00046490) fep_hwr_top_pane_g1_ParamLimits

0xc1a1,	// (0x000464a2) fep_hwr_top_pane_g2_ParamLimits

0x6f71,	// (0x00041272) fep_hwr_top_pane_g3_ParamLimits

0xfb0c,	// (0x00049e0d) fep_hwr_top_pane_g_ParamLimits

0x6f86,	// (0x00041287) fep_hwr_top_text_pane_ParamLimits

0xa9d0,	// (0x00044cd1) aid_touch_tab_arrow_arrow_2

0xa9d9,	// (0x00044cda) aid_touch_tab_arrow_left_2

0x6ecc,	// (0x000411cd) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x6f03,	// (0x00041204) fep_hwr_prediction_pane

0xc301,	// (0x00046602) fep_vkb_prediction_pane

0xc405,	// (0x00046706) fep_vkb_side_pane_g3_ParamLimits

0xc405,	// (0x00046706) fep_vkb_side_pane_g3

0xc3b1,	// (0x000466b2) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xc831,	// (0x00046b32) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xc83e,	// (0x00046b3f) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbb6,	// (0x00049eb7) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xd24d,	// (0x0004754e) fep_hwr_prediction_pane_g1

0x72bb,	// (0x000415bc) fep_hwr_prediction_pane_g2

0x72c3,	// (0x000415c4) fep_hwr_prediction_pane_g3

0x72cb,	// (0x000415cc) fep_hwr_prediction_pane_g4

0x0003,

0xfcb9,	// (0x00049fba) fep_hwr_prediction_pane_g

0xd24d,	// (0x0004754e) fep_vkb_prediction_pane_g1

0xd257,	// (0x00047558) fep_vkb_prediction_pane_g2

0xd25f,	// (0x00047560) fep_vkb_prediction_pane_g3

0xd267,	// (0x00047568) fep_vkb_prediction_pane_g4

0x0003,

0xfcc2,	// (0x00049fc3) fep_vkb_prediction_pane_g

0xaec6,	// (0x000451c7) slider_set_pane_g3

0xaeda,	// (0x000451db) slider_set_pane_g4

0xaef2,	// (0x000451f3) slider_set_pane_g5

0xaec6,	// (0x000451c7) slider_set_pane_g6

0x6cbd,	// (0x00040fbe) slider_set_pane_g7

0xb0ac,	// (0x000453ad) slider_form_pane_g3

0xb0b5,	// (0x000453b6) slider_form_pane_g4

0xb0bd,	// (0x000453be) slider_form_pane_g5

0xb0ac,	// (0x000453ad) slider_form_pane_g6

0xb0c5,	// (0x000453c6) slider_form_pane_g7

0xb6b0,	// (0x000459b1) slider_set_pane_vc_g3

0xb6b9,	// (0x000459ba) slider_set_pane_vc_g4

0xb6c2,	// (0x000459c3) slider_set_pane_vc_g5

0xb6b0,	// (0x000459b1) slider_set_pane_vc_g6

0xb6cb,	// (0x000459cc) slider_set_pane_vc_g7

0xb88b,	// (0x00045b8c) slider_form_pane_vc_g1

0xb894,	// (0x00045b95) slider_form_pane_vc_g2

0xb89d,	// (0x00045b9e) slider_form_pane_vc_g3

0xb88b,	// (0x00045b8c) slider_form_pane_vc_g4

0xb8a6,	// (0x00045ba7) slider_form_pane_vc_g5

0x0004,

0xfa89,	// (0x00049d8a) slider_form_pane_vc_g

0x7cf8,	// (0x00041ff9) main_idle_act3_pane

0xd26f,	// (0x00047570) ai3_links_pane

0xd278,	// (0x00047579) popup_ai3_data_window_ParamLimits

0xd278,	// (0x00047579) popup_ai3_data_window

0x7cf8,	// (0x00041ff9) grid_ai3_links_pane

0xd292,	// (0x00047593) cell_ai3_links_pane_ParamLimits

0xd292,	// (0x00047593) cell_ai3_links_pane

0xd2aa,	// (0x000475ab) bg_popup_sub_pane_cp11

0xd2b7,	// (0x000475b8) cell_ai3_links_pane_g1

0x7cf8,	// (0x00041ff9) bg_popup_sub_pane_cp12

0xd2dc,	// (0x000475dd) heading_ai3_data_pane

0xd2e4,	// (0x000475e5) list_ai3_gene_pane

0xd2f0,	// (0x000475f1) popup_ai3_data_window_g1

0xd2f8,	// (0x000475f9) heading_ai3_data_pane_g1

0xd300,	// (0x00047601) heading_ai3_data_pane_t1

0xd30e,	// (0x0004760f) list_double_ai3_gene_pane_ParamLimits

0xd30e,	// (0x0004760f) list_double_ai3_gene_pane

0xd31b,	// (0x0004761c) list_single_ai3_gene_pane_ParamLimits

0xd31b,	// (0x0004761c) list_single_ai3_gene_pane

0xc0f8,	// (0x000463f9) list_highlight_pane_cp7_ParamLimits

0xc0f8,	// (0x000463f9) list_highlight_pane_cp7

0xd328,	// (0x00047629) list_single_a13_gene_pane_t1_ParamLimits

0xd328,	// (0x00047629) list_single_a13_gene_pane_t1

0xd33f,	// (0x00047640) list_single_ai3_gene_pane_g1

0xd348,	// (0x00047649) list_single_ai3_gene_pane_g2

0x0001,

0xfccb,	// (0x00049fcc) list_single_ai3_gene_pane_g

0xd350,	// (0x00047651) list_double_ai3_gene_pane_g1_ParamLimits

0xd350,	// (0x00047651) list_double_ai3_gene_pane_g1

0xd35c,	// (0x0004765d) list_double_ai3_gene_pane_t1_ParamLimits

0xd35c,	// (0x0004765d) list_double_ai3_gene_pane_t1

0xd378,	// (0x00047679) list_double_ai3_gene_pane_t2_ParamLimits

0xd378,	// (0x00047679) list_double_ai3_gene_pane_t2

0xd38e,	// (0x0004768f) list_double_ai3_gene_pane_t3_ParamLimits

0xd38e,	// (0x0004768f) list_double_ai3_gene_pane_t3

0x0002,

0xfcd0,	// (0x00049fd1) list_double_ai3_gene_pane_t_ParamLimits

0xfcd0,	// (0x00049fd1) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x57b5,	// (0x0003fab6) aid_size_min_col_2

0xd239,	// (0x0004753a) aid_size_min_msg_ParamLimits

0xd239,	// (0x0004753a) aid_size_min_msg

0xc505,	// (0x00046806) fep_vkb_top_text_pane_g2_ParamLimits

0xc505,	// (0x00046806) fep_vkb_top_text_pane_g2

0x0001,

0xfb3c,	// (0x00049e3d) fep_vkb_top_text_pane_g_ParamLimits

0xfb3c,	// (0x00049e3d) fep_vkb_top_text_pane_g

0x7cf8,	// (0x00041ff9) main_hc_apps_shell_pane

0xd3ab,	// (0x000476ac) grid_hc_apps_pane_ParamLimits

0xd3ab,	// (0x000476ac) grid_hc_apps_pane

0xd3ba,	// (0x000476bb) list_hc_apps_pane

0xd3c2,	// (0x000476c3) scroll_pane_cp37_ParamLimits

0xd3c2,	// (0x000476c3) scroll_pane_cp37

0xd3ce,	// (0x000476cf) cell_hc_apps_pane_ParamLimits

0xd3ce,	// (0x000476cf) cell_hc_apps_pane

0xd47c,	// (0x0004777d) cell_hc_apps_pane_g1_ParamLimits

0xd47c,	// (0x0004777d) cell_hc_apps_pane_g1

0xd4ad,	// (0x000477ae) cell_hc_apps_pane_g2_ParamLimits

0xd4ad,	// (0x000477ae) cell_hc_apps_pane_g2

0xd4c9,	// (0x000477ca) cell_hc_apps_pane_g3_ParamLimits

0xd4c9,	// (0x000477ca) cell_hc_apps_pane_g3

0x0002,

0xfcd7,	// (0x00049fd8) cell_hc_apps_pane_g_ParamLimits

0xfcd7,	// (0x00049fd8) cell_hc_apps_pane_g

0xd4eb,	// (0x000477ec) cell_hc_apps_pane_t1_ParamLimits

0xd4eb,	// (0x000477ec) cell_hc_apps_pane_t1

0x8075,	// (0x00042376) grid_highlight_pane_cp10_ParamLimits

0x8075,	// (0x00042376) grid_highlight_pane_cp10

0xd52b,	// (0x0004782c) list_single_hc_apps_pane_ParamLimits

0xd52b,	// (0x0004782c) list_single_hc_apps_pane

0xd587,	// (0x00047888) list_single_hc_apps_pane_g1

0x72d3,	// (0x000415d4) list_single_hc_apps_pane_g2

0x0001,

0xfcde,	// (0x00049fdf) list_single_hc_apps_pane_g

0x72ec,	// (0x000415ed) list_single_hc_apps_pane_g2_copy1

0x5879,	// (0x0003fb7a) list_single_hc_apps_pane_t1

0x7dec,	// (0x000420ed) bg_set_opt_pane_cp_ParamLimits

0x5c9e,	// (0x0003ff9f) setting_slider_pane_t1_ParamLimits

0x5cb7,	// (0x0003ffb8) setting_slider_pane_t2_ParamLimits

0x5cd1,	// (0x0003ffd2) setting_slider_pane_t3_ParamLimits

0xf564,	// (0x00049865) setting_slider_pane_t_ParamLimits

0x5ce9,	// (0x0003ffea) slider_set_pane_ParamLimits

0x62d8,	// (0x000405d9) control_pane_g5_ParamLimits

0x62d8,	// (0x000405d9) control_pane_g5

0xaeb9,	// (0x000451ba) slider_set_pane_g1_ParamLimits

0x6cb1,	// (0x00040fb2) slider_set_pane_g2_ParamLimits

0xaec6,	// (0x000451c7) slider_set_pane_g3_ParamLimits

0xaeda,	// (0x000451db) slider_set_pane_g4_ParamLimits

0xaef2,	// (0x000451f3) slider_set_pane_g5_ParamLimits

0xaec6,	// (0x000451c7) slider_set_pane_g6_ParamLimits

0x6cbd,	// (0x00040fbe) slider_set_pane_g7_ParamLimits

0xf96f,	// (0x00049c70) slider_set_pane_g_ParamLimits

0x915f,	// (0x00043460) navi_icon_text_pane_ParamLimits

0x9657,	// (0x00043958) aid_fill_nsta_2_ParamLimits

0x9696,	// (0x00043997) aid_touch_tab_arrow_left_ParamLimits

0x96a5,	// (0x000439a6) aid_touch_tab_arrow_right_ParamLimits

0x9712,	// (0x00043a13) clock_nsta_pane_ParamLimits

0xa9b2,	// (0x00044cb3) navi_icon_pane_g1_ParamLimits

0xa9be,	// (0x00044cbf) navi_text_pane_t1_ParamLimits

0xbccb,	// (0x00045fcc) navi_icon_text_pane_g1_ParamLimits

0xbcd7,	// (0x00045fd8) navi_icon_text_pane_t1_ParamLimits

0xd587,	// (0x00047888) list_single_hc_apps_pane_g1_ParamLimits

0x72d3,	// (0x000415d4) list_single_hc_apps_pane_g2_ParamLimits

0xfcde,	// (0x00049fdf) list_single_hc_apps_pane_g_ParamLimits

0x72ec,	// (0x000415ed) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x5879,	// (0x0003fb7a) list_single_hc_apps_pane_t1_ParamLimits

0x5ba8,	// (0x0003fea9) popup_toolbar2_fixed_window_ParamLimits

0x5ba8,	// (0x0003fea9) popup_toolbar2_fixed_window

0x68cd,	// (0x00040bce) popup_toolbar2_float_window

0x7cf8,	// (0x00041ff9) bg_popup_sub_pane_cp27

0xd5a0,	// (0x000478a1) grid_toolbar2_float_pane

0x7cf8,	// (0x00041ff9) bg_popup_sub_pane_cp26

0xd5a0,	// (0x000478a1) grid_toolbar2_fixed_pane

0xd5a8,	// (0x000478a9) cell_toolbar2_fixed_pane_ParamLimits

0xd5a8,	// (0x000478a9) cell_toolbar2_fixed_pane

0xd5b8,	// (0x000478b9) cell_toolbar2_fixed_pane_g1

0xd5c1,	// (0x000478c2) toolbar2_fixed_button_pane

0x9b29,	// (0x00043e2a) toolbar2_fixed_button_pane_g1

0x9b31,	// (0x00043e32) toolbar2_fixed_button_pane_g2

0x9b39,	// (0x00043e3a) toolbar2_fixed_button_pane_g3

0x9b41,	// (0x00043e42) toolbar2_fixed_button_pane_g4

0x9b49,	// (0x00043e4a) toolbar2_fixed_button_pane_g5

0x9b51,	// (0x00043e52) toolbar2_fixed_button_pane_g6

0x9b59,	// (0x00043e5a) toolbar2_fixed_button_pane_g7

0x9b61,	// (0x00043e62) toolbar2_fixed_button_pane_g8

0x9b69,	// (0x00043e6a) toolbar2_fixed_button_pane_g9

0x0008,

0xf871,	// (0x00049b72) toolbar2_fixed_button_pane_g

0xd5c9,	// (0x000478ca) cell_toolbar2_float_pane_ParamLimits

0xd5c9,	// (0x000478ca) cell_toolbar2_float_pane

0xd5da,	// (0x000478db) cell_toolbar2_float_pane_g1

0xd5c1,	// (0x000478c2) toolbar2_fixed_button_pane_cp

0xc261,	// (0x00046562) fep_vkb_accented_list_pane_ParamLimits

0xc261,	// (0x00046562) fep_vkb_accented_list_pane

0x70d4,	// (0x000413d5) bg_popup_fep_shadow_pane_g9

0x92df,	// (0x000435e0) bg_popup_fep_shadow_pane_cp3

0x87af,	// (0x00042ab0) list_accented_list_pane

0xd5e3,	// (0x000478e4) list_single_accented_list_pane_ParamLimits

0xd5e3,	// (0x000478e4) list_single_accented_list_pane

0x92df,	// (0x000435e0) list_highlight_pane_cp10

0xd5f4,	// (0x000478f5) list_single_accented_list_pane_t1

0x681d,	// (0x00040b1e) popup_slider_window_ParamLimits

0x681d,	// (0x00040b1e) popup_slider_window

0xd230,	// (0x00047531) aid_indentation_list_msg

0xd6ae,	// (0x000479af) bg_popup_window_pane_cp19

0xd718,	// (0x00047a19) popup_slider_window_g1

0xd734,	// (0x00047a35) popup_slider_window_g2

0xd750,	// (0x00047a51) popup_slider_window_g3

0x0005,

0xfce3,	// (0x00049fe4) popup_slider_window_g

0xd7ac,	// (0x00047aad) popup_slider_window_t1

0xd820,	// (0x00047b21) small_volume_slider_vertical_pane

0xc133,	// (0x00046434) small_volume_slider_vertical_pane_g1

0xc133,	// (0x00046434) small_volume_slider_vertical_pane_g2

0xd83c,	// (0x00047b3d) small_volume_slider_vertical_pane_g3

0x0002,

0xfcf5,	// (0x00049ff6) small_volume_slider_vertical_pane_g

0x596a,	// (0x0003fc6b) area_side_right_pane_ParamLimits

0x596a,	// (0x0003fc6b) area_side_right_pane

0x7308,	// (0x00041609) aid_size_side_button_ParamLimits

0x7308,	// (0x00041609) aid_size_side_button

0x731c,	// (0x0004161d) grid_sctrl_middle_pane_ParamLimits

0x731c,	// (0x0004161d) grid_sctrl_middle_pane

0x733b,	// (0x0004163c) sctrl_sk_bottom_pane

0x734c,	// (0x0004164d) sctrl_sk_top_pane

0x735e,	// (0x0004165f) aid_touch_sctrl_top

0x8075,	// (0x00042376) bg_sctrl_sk_pane_ParamLimits

0x8075,	// (0x00042376) bg_sctrl_sk_pane

0x736b,	// (0x0004166c) sctrl_sk_top_pane_g1

0x7378,	// (0x00041679) sctrl_sk_top_pane_t1

0x735e,	// (0x0004165f) aid_touch_sctrl_bottom

0x8075,	// (0x00042376) bg_sctrl_sk_pane_cp_ParamLimits

0x8075,	// (0x00042376) bg_sctrl_sk_pane_cp

0x7393,	// (0x00041694) sctrl_sk_bottom_pane_g1

0x7378,	// (0x00041679) sctrl_sk_bottom_pane_t1

0x739c,	// (0x0004169d) cell_sctrl_middle_pane_ParamLimits

0x739c,	// (0x0004169d) cell_sctrl_middle_pane

0x73b7,	// (0x000416b8) aid_touch_sctrl_middle_ParamLimits

0x73b7,	// (0x000416b8) aid_touch_sctrl_middle

0x8664,	// (0x00042965) bg_sctrl_middle_pane_ParamLimits

0x8664,	// (0x00042965) bg_sctrl_middle_pane

0xc3b1,	// (0x000466b2) cell_sctrl_middle_pane_g1_ParamLimits

0xc3b1,	// (0x000466b2) cell_sctrl_middle_pane_g1

0x73c9,	// (0x000416ca) cell_sctrl_middle_pane_g2_ParamLimits

0x73c9,	// (0x000416ca) cell_sctrl_middle_pane_g2

0x0001,

0xfd01,	// (0x0004a002) cell_sctrl_middle_pane_g_ParamLimits

0xfd01,	// (0x0004a002) cell_sctrl_middle_pane_g

0x9b29,	// (0x00043e2a) bg_sctrl_middle_pane_g1

0x9b31,	// (0x00043e32) bg_sctrl_middle_pane_g2

0x9b39,	// (0x00043e3a) bg_sctrl_middle_pane_g3

0x9b41,	// (0x00043e42) bg_sctrl_middle_pane_g4

0x9b49,	// (0x00043e4a) bg_sctrl_middle_pane_g5

0x9b51,	// (0x00043e52) bg_sctrl_middle_pane_g6

0x9b59,	// (0x00043e5a) bg_sctrl_middle_pane_g7

0x9b61,	// (0x00043e62) bg_sctrl_middle_pane_g8

0x0007,

0xfd06,	// (0x0004a007) bg_sctrl_middle_pane_g

0x9b69,	// (0x00043e6a) bg_sctrl_middle_pane_g8_copy1

0x9b29,	// (0x00043e2a) bg_sctrl_sk_pane_g1

0x9b31,	// (0x00043e32) bg_sctrl_sk_pane_g2

0x9b39,	// (0x00043e3a) bg_sctrl_sk_pane_g3

0x0008,

0xf871,	// (0x00049b72) bg_sctrl_sk_pane_g

0x8587,	// (0x00042888) aid_size_touch_scroll_bar

0x9b41,	// (0x00043e42) bg_sctrl_sk_pane_g4

0x9b49,	// (0x00043e4a) bg_sctrl_sk_pane_g5

0x9b51,	// (0x00043e52) bg_sctrl_sk_pane_g6

0x9b59,	// (0x00043e5a) bg_sctrl_sk_pane_g7

0x9b61,	// (0x00043e62) bg_sctrl_sk_pane_g8

0x9b69,	// (0x00043e6a) bg_sctrl_sk_pane_g9

0x6488,	// (0x00040789) popup_fep_china_hwr2_fs_candidate_window

0x6492,	// (0x00040793) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x6492,	// (0x00040793) popup_fep_china_hwr2_fs_control_window

0xc3b1,	// (0x000466b2) sctrl_sk_top_pane_g2

0x0001,

0xfcfc,	// (0x00049ffd) sctrl_sk_top_pane_g

0xd845,	// (0x00047b46) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd845,	// (0x00047b46) aid_fep_china_hwr2_fs_cell

0xd857,	// (0x00047b58) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd857,	// (0x00047b58) bg_popup_fep_shadow_pane_cp4

0xd86e,	// (0x00047b6f) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd86e,	// (0x00047b6f) bg_popup_fep_shadow_pane_cp5

0xd880,	// (0x00047b81) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd880,	// (0x00047b81) popup_fep_china_hwr2_fs_control_bar_grid

0xd890,	// (0x00047b91) popup_fep_china_hwr2_fs_control_funtion_grid

0xd898,	// (0x00047b99) aid_fep_china_hwr2_fs_candi_cell

0x7cf8,	// (0x00041ff9) bg_popup_fep_shadow_pane_cp6

0xd8a2,	// (0x00047ba3) popup_fep_china_hwr2_fs_candidate_grid

0xd8ac,	// (0x00047bad) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd8ac,	// (0x00047bad) cell_fep_china_hwr2_fs_funtion_grid

0xc133,	// (0x00046434) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd8c4,	// (0x00047bc5) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd8c4,	// (0x00047bc5) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd8d2,	// (0x00047bd3) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd8d2,	// (0x00047bd3) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd17,	// (0x0004a018) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd17,	// (0x0004a018) cell_fep_china_hwr2_fs_funtion_grid_g

0xd8e8,	// (0x00047be9) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd8e8,	// (0x00047be9) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd8fd,	// (0x00047bfe) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd8fd,	// (0x00047bfe) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd1c,	// (0x0004a01d) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd1c,	// (0x0004a01d) cell_fep_china_hwr2_fs_funtion_grid_t

0xd919,	// (0x00047c1a) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd921,	// (0x00047c22) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd929,	// (0x00047c2a) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd21,	// (0x0004a022) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd931,	// (0x00047c32) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd931,	// (0x00047c32) cell_fep_china_hwr2_fs_candidate_grid

0xd94a,	// (0x00047c4b) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd952,	// (0x00047c53) popup_fep_china_hwr2_fs_candidate_grid_g21

0xc133,	// (0x00046434) cell_fep_china_hwr2_fs_candidate_grid_g1

0xc133,	// (0x00046434) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb41,	// (0x00049e42) cell_fep_china_hwr2_fs_candidate_grid_g

0xd95a,	// (0x00047c5b) cell_fep_china_hwr2_fs_candidate_grid_t1

0x971f,	// (0x00043a20) clock_nsta_pane_cp_24_ParamLimits

0x971f,	// (0x00043a20) clock_nsta_pane_cp_24

0x979d,	// (0x00043a9e) indicator_nsta_pane_cp_24_ParamLimits

0x979d,	// (0x00043a9e) indicator_nsta_pane_cp_24

0xa82e,	// (0x00044b2f) heading_pane_g1

0x0001,

0xf8d6,	// (0x00049bd7) heading_pane_g

0xb24f,	// (0x00045550) grid_sct_catagory_button_pane

0xb27f,	// (0x00045580) scroll_pane_cp5_ParamLimits

0xbd19,	// (0x0004601a) button_value_adjust_pane_cp5_ParamLimits

0xbd19,	// (0x0004601a) button_value_adjust_pane_cp5

0xbdf8,	// (0x000460f9) form2_midp_time_pane_ParamLimits

0xd968,	// (0x00047c69) cell_sct_catagory_button_pane_ParamLimits

0xd968,	// (0x00047c69) cell_sct_catagory_button_pane

0xc0f8,	// (0x000463f9) bg_button_pane_cp01_ParamLimits

0xc0f8,	// (0x000463f9) bg_button_pane_cp01

0xc133,	// (0x00046434) cell_sct_catagory_button_pane_g1

0x685c,	// (0x00040b5d) popup_tb_extension_window

0xd97a,	// (0x00047c7b) aid_size_cell_ext_ParamLimits

0xd97a,	// (0x00047c7b) aid_size_cell_ext

0x8075,	// (0x00042376) bg_tb_trans_pane_cp1_ParamLimits

0x8075,	// (0x00042376) bg_tb_trans_pane_cp1

0xd99a,	// (0x00047c9b) grid_tb_ext_pane_ParamLimits

0xd99a,	// (0x00047c9b) grid_tb_ext_pane

0xd9c8,	// (0x00047cc9) cell_tb_ext_pane_ParamLimits

0xd9c8,	// (0x00047cc9) cell_tb_ext_pane

0xd9df,	// (0x00047ce0) cell_tb_ext_pane_g1_ParamLimits

0xd9df,	// (0x00047ce0) cell_tb_ext_pane_g1

0xd9fc,	// (0x00047cfd) cell_tb_ext_pane_t1

0x8075,	// (0x00042376) list_highlight_pane_cp11_ParamLimits

0x8075,	// (0x00042376) list_highlight_pane_cp11

0x5bc7,	// (0x0003fec8) popup_uni_indicator_window_ParamLimits

0x5bc7,	// (0x0003fec8) popup_uni_indicator_window

0x8664,	// (0x00042965) bg_popup_sub_pane_cp14

0xda17,	// (0x00047d18) list_uniindi_pane

0xda23,	// (0x00047d24) uniindi_top_pane

0x8075,	// (0x00042376) bg_uniindi_top_pane

0xda42,	// (0x00047d43) uniindi_top_pane_g1

0xda58,	// (0x00047d59) uniindi_top_pane_g2

0x0003,

0xfd28,	// (0x0004a029) uniindi_top_pane_g

0xda82,	// (0x00047d83) uniindi_top_pane_t1

0xdaac,	// (0x00047dad) list_single_uniindi_pane_ParamLimits

0xdaac,	// (0x00047dad) list_single_uniindi_pane

0xc133,	// (0x00046434) bg_uniindi_top_pane_g1

0xdabf,	// (0x00047dc0) list_single_uniindi_pane_g1

0xdad2,	// (0x00047dd3) list_single_uniindi_pane_t1

0x7cf8,	// (0x00041ff9) control_bg_pane

0xdaf7,	// (0x00047df8) bg_sctrl_sk_pane_cp1

0xdb00,	// (0x00047e01) bg_sctrl_sk_pane_cp2

0xdb09,	// (0x00047e0a) control_bg_pane_g1

0xdb12,	// (0x00047e13) control_bg_pane_g2

0x0001,

0xfd31,	// (0x0004a032) control_bg_pane_g

0xbb62,	// (0x00045e63) cell_indicator_nsta_pane_g1_ParamLimits

0xbb70,	// (0x00045e71) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa5,	// (0x00049da6) cell_indicator_nsta_pane_g_ParamLimits

0x5616,	// (0x0003f917) form2_midp_time_pane_t1_ParamLimits

0x83c9,	// (0x000426ca) main_idle_act4_pane_ParamLimits

0x83c9,	// (0x000426ca) main_idle_act4_pane

0x685c,	// (0x00040b5d) popup_tb_extension_window_ParamLimits

0xd9b8,	// (0x00047cb9) tb_ext_find_pane_ParamLimits

0xd9b8,	// (0x00047cb9) tb_ext_find_pane

0xdb1b,	// (0x00047e1c) ai_gene_pane_1_cp1

0x9418,	// (0x00043719) ai_gene_pane_2_cp1

0xdb23,	// (0x00047e24) list_single_idle_plugin_calendar_pane

0xdb2c,	// (0x00047e2d) list_single_idle_plugin_notification_pane

0xdb35,	// (0x00047e36) list_single_idle_plugin_player_pane

0xdb3e,	// (0x00047e3f) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdb3e,	// (0x00047e3f) list_single_idle_plugin_shortcut_pane

0xdb60,	// (0x00047e61) main_idle_act4_pane_t1

0xdb72,	// (0x00047e73) main_idle_act4_pane_t2

0x0001,

0xfd36,	// (0x0004a037) main_idle_act4_pane_t

0xdb84,	// (0x00047e85) middle_sk_idle_act4_pane_ParamLimits

0xdb84,	// (0x00047e85) middle_sk_idle_act4_pane

0xdb9a,	// (0x00047e9b) popup_clock_digital_analogue_window_cp2

0xdbb4,	// (0x00047eb5) shortcut_wheel_idle_act4_pane_ParamLimits

0xdbb4,	// (0x00047eb5) shortcut_wheel_idle_act4_pane

0xc133,	// (0x00046434) shortcut_wheel_idle_act4_pane_g1

0xc133,	// (0x00046434) shortcut_wheel_idle_act4_pane_g2

0xc133,	// (0x00046434) shortcut_wheel_idle_act4_pane_g3

0xc133,	// (0x00046434) shortcut_wheel_idle_act4_pane_g4

0xc133,	// (0x00046434) shortcut_wheel_idle_act4_pane_g5

0xdbc8,	// (0x00047ec9) shortcut_wheel_idle_act4_pane_g6

0xdbd0,	// (0x00047ed1) shortcut_wheel_idle_act4_pane_g7

0xdbd8,	// (0x00047ed9) shortcut_wheel_idle_act4_pane_g8

0xdbe0,	// (0x00047ee1) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd3b,	// (0x0004a03c) shortcut_wheel_idle_act4_pane_g

0xc3b1,	// (0x000466b2) middle_sk_idle_act4_pane_g1_ParamLimits

0xc3b1,	// (0x000466b2) middle_sk_idle_act4_pane_g1

0xdc44,	// (0x00047f45) middle_sk_idle_act4_pane_g2_ParamLimits

0xdc44,	// (0x00047f45) middle_sk_idle_act4_pane_g2

0x0001,

0xfd5e,	// (0x0004a05f) middle_sk_idle_act4_pane_g_ParamLimits

0xfd5e,	// (0x0004a05f) middle_sk_idle_act4_pane_g

0xdc50,	// (0x00047f51) middle_sk_idle_act4_pane_t1_ParamLimits

0xdc50,	// (0x00047f51) middle_sk_idle_act4_pane_t1

0xdc6d,	// (0x00047f6e) grid_ai_shortcut_pane_ParamLimits

0xdc6d,	// (0x00047f6e) grid_ai_shortcut_pane

0xdc86,	// (0x00047f87) list_highlight_pane_cp16_ParamLimits

0xdc86,	// (0x00047f87) list_highlight_pane_cp16

0xdc93,	// (0x00047f94) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdc93,	// (0x00047f94) list_single_idle_plugin_shortcut_pane_g1

0xdc9f,	// (0x00047fa0) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdc9f,	// (0x00047fa0) list_single_idle_plugin_shortcut_pane_g2

0xdcb7,	// (0x00047fb8) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdcb7,	// (0x00047fb8) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd63,	// (0x0004a064) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd63,	// (0x0004a064) list_single_idle_plugin_shortcut_pane_g

0xdcca,	// (0x00047fcb) cell_ai_shortcut_pane_ParamLimits

0xdcca,	// (0x00047fcb) cell_ai_shortcut_pane

0xdcee,	// (0x00047fef) cell_ai_shortcut_pane_g1_ParamLimits

0xdcee,	// (0x00047fef) cell_ai_shortcut_pane_g1

0xdb1b,	// (0x00047e1c) ai_gene_pane_1_cp2

0xdd10,	// (0x00048011) ai_gene_pane_2_cp2

0xdd18,	// (0x00048019) list_highlight_pane_cp15

0xdd21,	// (0x00048022) list_single_idle_plugin_calendar_pane_g1

0xdd18,	// (0x00048019) list_highlight_pane_cp17

0xdd29,	// (0x0004802a) list_single_idle_plugin_calendar_pane_g1_copy1

0xdd31,	// (0x00048032) list_single_idle_plugin_player_pane_g1

0xb4a8,	// (0x000457a9) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd6a,	// (0x0004a06b) list_single_idle_plugin_player_pane_g

0xdd39,	// (0x0004803a) list_single_idle_plugin_player_pane_t1

0xdd47,	// (0x00048048) list_single_idle_plugin_player_pane_t2

0xdd55,	// (0x00048056) list_single_idle_plugin_player_pane_t3

0xdd63,	// (0x00048064) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd6f,	// (0x0004a070) list_single_idle_plugin_player_pane_t

0xdd71,	// (0x00048072) wait_bar_pane_cp15

0xdd79,	// (0x0004807a) grid_ai_notification_pane

0xb4a8,	// (0x000457a9) list_single_idle_plugin_notification_pane_g1

0xdd82,	// (0x00048083) cell_ai_notification_pane_ParamLimits

0xdd82,	// (0x00048083) cell_ai_notification_pane

0xdd8f,	// (0x00048090) cell_ai_notification_pane_g1

0xdd97,	// (0x00048098) cell_ai_notification_pane_t1

0xdda5,	// (0x000480a6) tb_ext_find_button_pane

0xddad,	// (0x000480ae) tb_ext_find_pane_g1

0xddb5,	// (0x000480b6) tb_ext_find_pane_t1

0x8cd7,	// (0x00042fd8) tb_ext_find_button_pane_g1

0xddc3,	// (0x000480c4) tb_ext_find_button_pane_g2

0x0001,

0xfd78,	// (0x0004a079) tb_ext_find_button_pane_g

0xdb60,	// (0x00047e61) main_idle_act4_pane_t1_ParamLimits

0xdb72,	// (0x00047e73) main_idle_act4_pane_t2_ParamLimits

0xfd36,	// (0x0004a037) main_idle_act4_pane_t_ParamLimits

0xdb9a,	// (0x00047e9b) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdba8,	// (0x00047ea9) sat_plugin_idle_act4_pane_ParamLimits

0xdba8,	// (0x00047ea9) sat_plugin_idle_act4_pane

0xddcc,	// (0x000480cd) sat_plugin_idle_act4_pane_t1_ParamLimits

0xddcc,	// (0x000480cd) sat_plugin_idle_act4_pane_t1

0xdddf,	// (0x000480e0) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdddf,	// (0x000480e0) sat_plugin_idle_act4_pane_t2

0xddf2,	// (0x000480f3) sat_plugin_idle_act4_pane_t3_ParamLimits

0xddf2,	// (0x000480f3) sat_plugin_idle_act4_pane_t3

0xde05,	// (0x00048106) sat_plugin_idle_act4_pane_t4_ParamLimits

0xde05,	// (0x00048106) sat_plugin_idle_act4_pane_t4

0x0003,

0x0001,	// (0x0003a302) sat_plugin_idle_act4_pane_t_ParamLimits

0x0001,	// (0x0003a302) sat_plugin_idle_act4_pane_t

0x5b02,	// (0x0003fe03) popup_battery_window_ParamLimits

0x5b02,	// (0x0003fe03) popup_battery_window

0x8075,	// (0x00042376) bg_popup_sub_pane_cp25_ParamLimits

0x8075,	// (0x00042376) bg_popup_sub_pane_cp25

0xde18,	// (0x00048119) popup_battery_window_g1_ParamLimits

0xde18,	// (0x00048119) popup_battery_window_g1

0xde24,	// (0x00048125) popup_battery_window_t1_ParamLimits

0xde24,	// (0x00048125) popup_battery_window_t1

0xde36,	// (0x00048137) popup_battery_window_t2_ParamLimits

0xde36,	// (0x00048137) popup_battery_window_t2

0x0001,

0x000a,	// (0x0003a30b) popup_battery_window_t_ParamLimits

0x000a,	// (0x0003a30b) popup_battery_window_t

0x92e7,	// (0x000435e8) midp_canvas_pane_ParamLimits

0x935c,	// (0x0004365d) midp_keypad_pane_ParamLimits

0x935c,	// (0x0004365d) midp_keypad_pane

0x961f,	// (0x00043920) main_midp_pane_ParamLimits

0xbbdd,	// (0x00045ede) signal_pane_g2_cp_ParamLimits

0xde53,	// (0x00048154) aid_size_cell_midp_keypad_ParamLimits

0xde53,	// (0x00048154) aid_size_cell_midp_keypad

0xde6d,	// (0x0004816e) midp_keyp_game_grid_pane_ParamLimits

0xde6d,	// (0x0004816e) midp_keyp_game_grid_pane

0xde8d,	// (0x0004818e) midp_keyp_rocker_pane_ParamLimits

0xde8d,	// (0x0004818e) midp_keyp_rocker_pane

0xdec2,	// (0x000481c3) midp_keyp_sk_left_pane_ParamLimits

0xdec2,	// (0x000481c3) midp_keyp_sk_left_pane

0xdf1a,	// (0x0004821b) midp_keyp_sk_right_pane_ParamLimits

0xdf1a,	// (0x0004821b) midp_keyp_sk_right_pane

0x7cf8,	// (0x00041ff9) bg_button_pane_cp03

0xdf72,	// (0x00048273) midp_keyp_sk_left_pane_g1

0x7cf8,	// (0x00041ff9) bg_button_pane_cp04

0xdf72,	// (0x00048273) midp_keyp_sk_right_pane_g1

0xc133,	// (0x00046434) midp_keyp_rocker_pane_g1

0xdf7b,	// (0x0004827c) keyp_game_cell_pane_ParamLimits

0xdf7b,	// (0x0004827c) keyp_game_cell_pane

0x7cf8,	// (0x00041ff9) bg_button_pane_cp02

0xdf8e,	// (0x0004828f) keyp_game_cell_pane_g1

0x5b46,	// (0x0003fe47) popup_fep_vkb2_window_ParamLimits

0x5b46,	// (0x0003fe47) popup_fep_vkb2_window

0x73e7,	// (0x000416e8) aid_size_cell_vkb2_ParamLimits

0x73e7,	// (0x000416e8) aid_size_cell_vkb2

0x743b,	// (0x0004173c) popup_fep_vkb2_window_g1_ParamLimits

0x743b,	// (0x0004173c) popup_fep_vkb2_window_g1

0x7483,	// (0x00041784) vkb2_area_bottom_pane_ParamLimits

0x7483,	// (0x00041784) vkb2_area_bottom_pane

0x74cf,	// (0x000417d0) vkb2_area_keypad_pane_ParamLimits

0x74cf,	// (0x000417d0) vkb2_area_keypad_pane

0x7511,	// (0x00041812) vkb2_area_top_pane_ParamLimits

0x7511,	// (0x00041812) vkb2_area_top_pane

0x758b,	// (0x0004188c) vkb2_top_entry_pane_ParamLimits

0x758b,	// (0x0004188c) vkb2_top_entry_pane

0x75b5,	// (0x000418b6) vkb2_top_grid_left_pane_ParamLimits

0x75b5,	// (0x000418b6) vkb2_top_grid_left_pane

0x75d3,	// (0x000418d4) vkb2_top_grid_right_pane_ParamLimits

0x75d3,	// (0x000418d4) vkb2_top_grid_right_pane

0x75f1,	// (0x000418f2) vkb2_cell_keypad_pane_ParamLimits

0x75f1,	// (0x000418f2) vkb2_cell_keypad_pane

0x76c2,	// (0x000419c3) vkb2_area_bottom_grid_pane_ParamLimits

0x76c2,	// (0x000419c3) vkb2_area_bottom_grid_pane

0x76e8,	// (0x000419e9) vkb2_area_bottom_pane_g1_ParamLimits

0x76e8,	// (0x000419e9) vkb2_area_bottom_pane_g1

0x770c,	// (0x00041a0d) vkb2_area_bottom_pane_g2_ParamLimits

0x770c,	// (0x00041a0d) vkb2_area_bottom_pane_g2

0x773a,	// (0x00041a3b) vkb2_area_bottom_pane_g3_ParamLimits

0x773a,	// (0x00041a3b) vkb2_area_bottom_pane_g3

0x0002,

0xfd7d,	// (0x0004a07e) vkb2_area_bottom_pane_g_ParamLimits

0xfd7d,	// (0x0004a07e) vkb2_area_bottom_pane_g

0x779b,	// (0x00041a9c) vkb2_top_cell_left_pane_ParamLimits

0x779b,	// (0x00041a9c) vkb2_top_cell_left_pane

0xdf9f,	// (0x000482a0) vkb2_top_entry_pane_g1_ParamLimits

0xdf9f,	// (0x000482a0) vkb2_top_entry_pane_g1

0xdfad,	// (0x000482ae) vkb2_top_entry_pane_t1_ParamLimits

0xdfad,	// (0x000482ae) vkb2_top_entry_pane_t1

0xdfdf,	// (0x000482e0) vkb2_top_entry_pane_t2_ParamLimits

0xdfdf,	// (0x000482e0) vkb2_top_entry_pane_t2

0xe011,	// (0x00048312) vkb2_top_entry_pane_t3_ParamLimits

0xe011,	// (0x00048312) vkb2_top_entry_pane_t3

0x0002,

0x0016,	// (0x0003a317) vkb2_top_entry_pane_t_ParamLimits

0x0016,	// (0x0003a317) vkb2_top_entry_pane_t

0x77e8,	// (0x00041ae9) vkb2_top_grid_right_pane_g1_ParamLimits

0x77e8,	// (0x00041ae9) vkb2_top_grid_right_pane_g1

0x77fe,	// (0x00041aff) vkb2_top_grid_right_pane_g2_ParamLimits

0x77fe,	// (0x00041aff) vkb2_top_grid_right_pane_g2

0x7816,	// (0x00041b17) vkb2_top_grid_right_pane_g3_ParamLimits

0x7816,	// (0x00041b17) vkb2_top_grid_right_pane_g3

0x782e,	// (0x00041b2f) vkb2_top_grid_right_pane_g4_ParamLimits

0x782e,	// (0x00041b2f) vkb2_top_grid_right_pane_g4

0x0003,

0xfd84,	// (0x0004a085) vkb2_top_grid_right_pane_g_ParamLimits

0xfd84,	// (0x0004a085) vkb2_top_grid_right_pane_g

0x7844,	// (0x00041b45) vkb2_top_cell_left_pane_g1

0x785b,	// (0x00041b5c) vkb2_cell_keypad_pane_g1_ParamLimits

0x785b,	// (0x00041b5c) vkb2_cell_keypad_pane_g1

0xe035,	// (0x00048336) vkb2_cell_keypad_pane_t1_ParamLimits

0xe035,	// (0x00048336) vkb2_cell_keypad_pane_t1

0x7869,	// (0x00041b6a) vkb2_cell_bottom_grid_pane_ParamLimits

0x7869,	// (0x00041b6a) vkb2_cell_bottom_grid_pane

0x78a2,	// (0x00041ba3) vkb2_cell_bottom_grid_pane_g1

0xdbe8,	// (0x00047ee9) aid_call2_pane_cp02

0xdbf0,	// (0x00047ef1) aid_call_pane_cp02

0xdbf8,	// (0x00047ef9) clock_digital_number_pane_cp10

0xdc00,	// (0x00047f01) clock_digital_number_pane_cp11

0xdc08,	// (0x00047f09) clock_digital_number_pane_cp12

0xdc10,	// (0x00047f11) clock_digital_number_pane_cp13

0xdc18,	// (0x00047f19) clock_digital_separator_pane_cp10

0x8cd7,	// (0x00042fd8) popup_clock_digital_analogue_window_cp2_g1

0x8cd7,	// (0x00042fd8) popup_clock_digital_analogue_window_cp2_g2

0xdc20,	// (0x00047f21) popup_clock_digital_analogue_window_cp2_g3

0x8cd7,	// (0x00042fd8) popup_clock_digital_analogue_window_cp2_g4

0xdc20,	// (0x00047f21) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd4e,	// (0x0004a04f) popup_clock_digital_analogue_window_cp2_g

0xdc28,	// (0x00047f29) popup_clock_digital_analogue_window_cp2_t1

0xdc36,	// (0x00047f37) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd59,	// (0x0004a05a) popup_clock_digital_analogue_window_cp2_t

0xc133,	// (0x00046434) clock_digital_number_pane_cp10_g1

0xc133,	// (0x00046434) clock_digital_number_pane_cp10_g2

0x0001,

0xfb41,	// (0x00049e42) clock_digital_number_pane_cp10_g

0xc133,	// (0x00046434) clock_digital_separator_pane_cp10_g1

0xc133,	// (0x00046434) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb41,	// (0x00049e42) clock_digital_separator_pane_cp10_g

0xda64,	// (0x00047d65) uniindi_top_pane_g3

0xda75,	// (0x00047d76) uniindi_top_pane_g4

0x767c,	// (0x0004197d) vkb2_row_keypad_pane_ParamLimits

0x767c,	// (0x0004197d) vkb2_row_keypad_pane

0x78be,	// (0x00041bbf) vkb2_cell_t_keypad_pane_ParamLimits

0x78be,	// (0x00041bbf) vkb2_cell_t_keypad_pane

0x78ce,	// (0x00041bcf) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x78ce,	// (0x00041bcf) vkb2_cell_t_keypad_pane_cp08

0x78e1,	// (0x00041be2) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x78e1,	// (0x00041be2) vkb2_cell_t_keypad_pane_cp09

0x78f5,	// (0x00041bf6) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x78f5,	// (0x00041bf6) vkb2_cell_t_keypad_pane_cp01

0x7906,	// (0x00041c07) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x7906,	// (0x00041c07) vkb2_cell_t_keypad_pane_cp02

0x7917,	// (0x00041c18) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x7917,	// (0x00041c18) vkb2_cell_t_keypad_pane_cp03

0x7928,	// (0x00041c29) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x7928,	// (0x00041c29) vkb2_cell_t_keypad_pane_cp04

0x7939,	// (0x00041c3a) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x7939,	// (0x00041c3a) vkb2_cell_t_keypad_pane_cp05

0x794a,	// (0x00041c4b) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x794a,	// (0x00041c4b) vkb2_cell_t_keypad_pane_cp06

0x795b,	// (0x00041c5c) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x795b,	// (0x00041c5c) vkb2_cell_t_keypad_pane_cp07

0x796c,	// (0x00041c6d) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x796c,	// (0x00041c6d) vkb2_cell_t_keypad_pane_cp10

0xc3b1,	// (0x000466b2) vkb2_cell_t_keypad_pane_g1

0xe04c,	// (0x0004834d) vkb2_cell_t_keypad_pane_t1

0x7cf8,	// (0x00041ff9) popup_grid_graphic2_window

0xe05e,	// (0x0004835f) aid_size_cell_graphic2_ParamLimits

0xe05e,	// (0x0004835f) aid_size_cell_graphic2

0xe096,	// (0x00048397) bg_popup_window_pane_cp21_ParamLimits

0xe096,	// (0x00048397) bg_popup_window_pane_cp21

0xe0a4,	// (0x000483a5) graphic2_pages_pane_ParamLimits

0xe0a4,	// (0x000483a5) graphic2_pages_pane

0xe0ea,	// (0x000483eb) grid_graphic2_control_pane_ParamLimits

0xe0ea,	// (0x000483eb) grid_graphic2_control_pane

0xe128,	// (0x00048429) grid_graphic2_pane_ParamLimits

0xe128,	// (0x00048429) grid_graphic2_pane

0xe19c,	// (0x0004849d) cell_graphic2_pane

0x7cf8,	// (0x00041ff9) main_comp_mode_pane

0xd2e4,	// (0x000475e5) list_ai3_gene_pane_ParamLimits

0xd6ae,	// (0x000479af) bg_popup_window_pane_cp19_ParamLimits

0xd6ba,	// (0x000479bb) bg_touch_area_indi_pane_ParamLimits

0xd6ba,	// (0x000479bb) bg_touch_area_indi_pane

0xd6d0,	// (0x000479d1) bg_touch_area_indi_pane_cp01_ParamLimits

0xd6d0,	// (0x000479d1) bg_touch_area_indi_pane_cp01

0xd6e6,	// (0x000479e7) bg_touch_area_indi_pane_cp02_ParamLimits

0xd6e6,	// (0x000479e7) bg_touch_area_indi_pane_cp02

0xd6fe,	// (0x000479ff) bg_touch_area_indi_pane_cp03_ParamLimits

0xd6fe,	// (0x000479ff) bg_touch_area_indi_pane_cp03

0xd718,	// (0x00047a19) popup_slider_window_g1_ParamLimits

0xd734,	// (0x00047a35) popup_slider_window_g2_ParamLimits

0xd750,	// (0x00047a51) popup_slider_window_g3_ParamLimits

0xfce3,	// (0x00049fe4) popup_slider_window_g_ParamLimits

0xd7ac,	// (0x00047aad) popup_slider_window_t1_ParamLimits

0xd820,	// (0x00047b21) small_volume_slider_vertical_pane_ParamLimits

0xe19c,	// (0x0004849d) cell_graphic2_pane_ParamLimits

0xe1ea,	// (0x000484eb) bg_button_pane_cp10_ParamLimits

0xe1ea,	// (0x000484eb) bg_button_pane_cp10

0xe1fd,	// (0x000484fe) bg_button_pane_cp11_ParamLimits

0xe1fd,	// (0x000484fe) bg_button_pane_cp11

0xe210,	// (0x00048511) graphic2_pages_pane_g1_ParamLimits

0xe210,	// (0x00048511) graphic2_pages_pane_g1

0xe22b,	// (0x0004852c) graphic2_pages_pane_g2_ParamLimits

0xe22b,	// (0x0004852c) graphic2_pages_pane_g2

0x0001,

0xfd92,	// (0x0004a093) graphic2_pages_pane_g_ParamLimits

0xfd92,	// (0x0004a093) graphic2_pages_pane_g

0xe243,	// (0x00048544) graphic2_pages_pane_t1_ParamLimits

0xe243,	// (0x00048544) graphic2_pages_pane_t1

0xe25b,	// (0x0004855c) cell_graphic2_control_pane_ParamLimits

0xe25b,	// (0x0004855c) cell_graphic2_control_pane

0xe27c,	// (0x0004857d) cell_graphic2_pane_g1_ParamLimits

0xe27c,	// (0x0004857d) cell_graphic2_pane_g1

0xe289,	// (0x0004858a) cell_graphic2_pane_g2_ParamLimits

0xe289,	// (0x0004858a) cell_graphic2_pane_g2

0xe296,	// (0x00048597) cell_graphic2_pane_g3_ParamLimits

0xe296,	// (0x00048597) cell_graphic2_pane_g3

0xe2a3,	// (0x000485a4) cell_graphic2_pane_g4_ParamLimits

0xe2a3,	// (0x000485a4) cell_graphic2_pane_g4

0xe2b0,	// (0x000485b1) cell_graphic2_pane_g5_ParamLimits

0xe2b0,	// (0x000485b1) cell_graphic2_pane_g5

0x0004,

0xfd97,	// (0x0004a098) cell_graphic2_pane_g_ParamLimits

0xfd97,	// (0x0004a098) cell_graphic2_pane_g

0xe2cb,	// (0x000485cc) cell_graphic2_pane_t1_ParamLimits

0xe2cb,	// (0x000485cc) cell_graphic2_pane_t1

0x9b9d,	// (0x00043e9e) grid_highlight_pane_cp11_ParamLimits

0x9b9d,	// (0x00043e9e) grid_highlight_pane_cp11

0x8075,	// (0x00042376) bg_button_pane_cp05

0xe2f4,	// (0x000485f5) cell_graphic2_control_pane_g1

0xc133,	// (0x00046434) bg_touch_area_indi_pane_g1

0xe31c,	// (0x0004861d) aid_cmod_rocker_key_size

0xe326,	// (0x00048627) aid_cmode_itu_key_size

0xe330,	// (0x00048631) main_cmode_video_pane

0xe33a,	// (0x0004863b) main_comp_mode_itu_pane

0xe346,	// (0x00048647) main_comp_mode_rocker_pane

0xe352,	// (0x00048653) cell_cmode_rocker_pane_ParamLimits

0xe352,	// (0x00048653) cell_cmode_rocker_pane

0xe364,	// (0x00048665) cell_cmode_itu_pane_ParamLimits

0xe364,	// (0x00048665) cell_cmode_itu_pane

0x8664,	// (0x00042965) bg_button_pane_cp06_ParamLimits

0x8664,	// (0x00042965) bg_button_pane_cp06

0xc3b1,	// (0x000466b2) cell_cmode_rocker_pane_g1_ParamLimits

0xc3b1,	// (0x000466b2) cell_cmode_rocker_pane_g1

0xd8c4,	// (0x00047bc5) cell_cmode_rocker_pane_g2_ParamLimits

0xd8c4,	// (0x00047bc5) cell_cmode_rocker_pane_g2

0x0001,

0xfda7,	// (0x0004a0a8) cell_cmode_rocker_pane_g_ParamLimits

0xfda7,	// (0x0004a0a8) cell_cmode_rocker_pane_g

0x7cf8,	// (0x00041ff9) bg_button_pane_cp07

0xe379,	// (0x0004867a) cell_cmode_itu_pane_g1

0xe382,	// (0x00048683) cell_cmode_itu_pane_t1

0xe390,	// (0x00048691) cell_cmode_itu_pane_t2

0x0001,

0xfdac,	// (0x0004a0ad) cell_cmode_itu_pane_t

0xdae7,	// (0x00047de8) aid_touch_ctrl_left

0xdaef,	// (0x00047df0) aid_touch_ctrl_right

0x7cf8,	// (0x00041ff9) compa_mode_pane

0xe39e,	// (0x0004869f) aid_cmod_rocker_key_size_cp

0xe3a8,	// (0x000486a9) aid_cmode_itu_key_size_cp

0xe3b2,	// (0x000486b3) compa_mode_pane_g1

0xe3ba,	// (0x000486bb) compa_mode_pane_g2

0xe3c2,	// (0x000486c3) compa_mode_pane_g3

0x0002,

0xfdb1,	// (0x0004a0b2) compa_mode_pane_g

0xe3ca,	// (0x000486cb) main_comp_mode_itu_pane_cp

0xe3d2,	// (0x000486d3) main_comp_mode_rocker_pane_cp

0xe3da,	// (0x000486db) cell_cmode_itu_pane_cp_ParamLimits

0xe3da,	// (0x000486db) cell_cmode_itu_pane_cp

0xe3ef,	// (0x000486f0) cell_cmode_rocker_pane_cp_ParamLimits

0xe3ef,	// (0x000486f0) cell_cmode_rocker_pane_cp

0x8664,	// (0x00042965) bg_button_pane_cp06_cp_ParamLimits

0x8664,	// (0x00042965) bg_button_pane_cp06_cp

0xc3b1,	// (0x000466b2) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc3b1,	// (0x000466b2) cell_cmode_rocker_pane_g1_cp

0xc133,	// (0x00046434) cell_cmode_rocker_pane_g2_cp

0x7cf8,	// (0x00041ff9) bg_button_pane_cp07_cp

0xb0ac,	// (0x000453ad) cell_cmode_itu_pane_g1_cp

0xe401,	// (0x00048702) cell_cmode_itu_pane_t1_cp

0xe401,	// (0x00048702) cell_cmode_itu_pane_t2_cp

0xb099,	// (0x0004539a) settings_code_pane_cp2

0x7dec,	// (0x000420ed) bg_popup_window_pane_cp3_ParamLimits

0x824f,	// (0x00042550) heading_pane_cp3_ParamLimits

0x825b,	// (0x0004255c) listscroll_popup_graphic_pane_ParamLimits

0x6eb8,	// (0x000411b9) fep_hwr_aid_pane_ParamLimits

0x735e,	// (0x0004165f) aid_touch_sctrl_top_ParamLimits

0x736b,	// (0x0004166c) sctrl_sk_top_pane_g1_ParamLimits

0xc3b1,	// (0x000466b2) sctrl_sk_top_pane_g2_ParamLimits

0xfcfc,	// (0x00049ffd) sctrl_sk_top_pane_g_ParamLimits

0x7378,	// (0x00041679) sctrl_sk_top_pane_t1_ParamLimits

0x735e,	// (0x0004165f) aid_touch_sctrl_bottom_ParamLimits

0x7378,	// (0x00041679) sctrl_sk_bottom_pane_t1_ParamLimits

0xda30,	// (0x00047d31) aid_area_touch_clock

0x7553,	// (0x00041854) aid_vkb2_area_top_pane_cell_ParamLimits

0x7553,	// (0x00041854) aid_vkb2_area_top_pane_cell

0x769e,	// (0x0004199f) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x769e,	// (0x0004199f) aid_vkb2_area_bottom_pane_cell

0xdf97,	// (0x00048298) popup_char_count_window

0xe40f,	// (0x00048710) popup_char_count_window_g1

0xe418,	// (0x00048719) popup_char_count_window_g2

0xe421,	// (0x00048722) popup_char_count_window_g3

0x0002,

0xfdb8,	// (0x0004a0b9) popup_char_count_window_g

0xe42a,	// (0x0004872b) popup_char_count_window_t1

0x7419,	// (0x0004171a) popup_fep_char_preview_window_ParamLimits

0x7419,	// (0x0004171a) popup_fep_char_preview_window

0x7571,	// (0x00041872) vkb2_top_candi_pane_ParamLimits

0x7571,	// (0x00041872) vkb2_top_candi_pane

0xe438,	// (0x00048739) cell_vkb2_top_candi_pane_ParamLimits

0xe438,	// (0x00048739) cell_vkb2_top_candi_pane

0xa1ae,	// (0x000444af) bg_popup_fep_char_preview_window_ParamLimits

0xa1ae,	// (0x000444af) bg_popup_fep_char_preview_window

0x7981,	// (0x00041c82) popup_fep_char_preview_window_t1_ParamLimits

0x7981,	// (0x00041c82) popup_fep_char_preview_window_t1

0xe485,	// (0x00048786) bg_popup_fep_char_preview_window_g1

0xe48d,	// (0x0004878e) bg_popup_fep_char_preview_window_g2

0xe495,	// (0x00048796) bg_popup_fep_char_preview_window_g3

0xe49d,	// (0x0004879e) bg_popup_fep_char_preview_window_g4

0xe4a5,	// (0x000487a6) bg_popup_fep_char_preview_window_g5

0x79bb,	// (0x00041cbc) bg_popup_fep_char_preview_window_g6

0xe4ad,	// (0x000487ae) bg_popup_fep_char_preview_window_g7

0xe4b5,	// (0x000487b6) bg_popup_fep_char_preview_window_g8

0xe4bd,	// (0x000487be) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdbf,	// (0x0004a0c0) bg_popup_fep_char_preview_window_g

0xc3b1,	// (0x000466b2) cell_vkb2_top_candi_pane_g1_ParamLimits

0xc3b1,	// (0x000466b2) cell_vkb2_top_candi_pane_g1

0xc734,	// (0x00046a35) cell_vkb2_top_candi_pane_g2_ParamLimits

0xc734,	// (0x00046a35) cell_vkb2_top_candi_pane_g2

0xc755,	// (0x00046a56) cell_vkb2_top_candi_pane_g3_ParamLimits

0xc755,	// (0x00046a56) cell_vkb2_top_candi_pane_g3

0x79c3,	// (0x00041cc4) cell_vkb2_top_candi_pane_g4_ParamLimits

0x79c3,	// (0x00041cc4) cell_vkb2_top_candi_pane_g4

0xe4c5,	// (0x000487c6) cell_vkb2_top_candi_pane_g5_ParamLimits

0xe4c5,	// (0x000487c6) cell_vkb2_top_candi_pane_g5

0xd8c4,	// (0x00047bc5) cell_vkb2_top_candi_pane_g6_ParamLimits

0xd8c4,	// (0x00047bc5) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdd2,	// (0x0004a0d3) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdd2,	// (0x0004a0d3) cell_vkb2_top_candi_pane_g

0x79e4,	// (0x00041ce5) cell_vkb2_top_candi_pane_t1

0x6c9d,	// (0x00040f9e) aid_size_touch_slider_mark_ParamLimits

0x6c9d,	// (0x00040f9e) aid_size_touch_slider_mark

0xe0da,	// (0x000483db) grid_graphic2_catg_pane_ParamLimits

0xe0da,	// (0x000483db) grid_graphic2_catg_pane

0xe178,	// (0x00048479) popup_grid_graphic2_window_t1_ParamLimits

0xe178,	// (0x00048479) popup_grid_graphic2_window_t1

0xe18a,	// (0x0004848b) popup_grid_graphic2_window_t2_ParamLimits

0xe18a,	// (0x0004848b) popup_grid_graphic2_window_t2

0x0001,

0xfd8d,	// (0x0004a08e) popup_grid_graphic2_window_t_ParamLimits

0xfd8d,	// (0x0004a08e) popup_grid_graphic2_window_t

0x8075,	// (0x00042376) bg_button_pane_cp05_ParamLimits

0xe2f4,	// (0x000485f5) cell_graphic2_control_pane_g1_ParamLimits

0xe4e6,	// (0x000487e7) cell_graphic2_catg_pane_ParamLimits

0xe4e6,	// (0x000487e7) cell_graphic2_catg_pane

0x7cf8,	// (0x00041ff9) bg_button_pane_cp12

0xe4f8,	// (0x000487f9) cell_graphic2_catg_pane_g1

0xd9fc,	// (0x00047cfd) cell_tb_ext_pane_t1_ParamLimits

0x77bb,	// (0x00041abc) vkb2_top_cell_right_narrow_pane_ParamLimits

0x77bb,	// (0x00041abc) vkb2_top_cell_right_narrow_pane

0x77d3,	// (0x00041ad4) vkb2_top_cell_right_wide_pane_ParamLimits

0x77d3,	// (0x00041ad4) vkb2_top_cell_right_wide_pane

0x6eaa,	// (0x000411ab) bg_vkb2_func_pane_ParamLimits

0x6eaa,	// (0x000411ab) bg_vkb2_func_pane

0x7844,	// (0x00041b45) vkb2_top_cell_left_pane_g1_ParamLimits

0x6eaa,	// (0x000411ab) bg_vkb2_fuc_pane_cp03_ParamLimits

0x6eaa,	// (0x000411ab) bg_vkb2_fuc_pane_cp03

0x78a2,	// (0x00041ba3) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x9b31,	// (0x00043e32) bg_vkb2_func_pane_g1

0x9b39,	// (0x00043e3a) bg_vkb2_func_pane_g2

0x9b49,	// (0x00043e4a) bg_vkb2_func_pane_g3

0x9b41,	// (0x00043e42) bg_vkb2_func_pane_g4

0x9b51,	// (0x00043e52) bg_vkb2_func_pane_g5

0x9b59,	// (0x00043e5a) bg_vkb2_func_pane_g6

0x9b61,	// (0x00043e62) bg_vkb2_func_pane_g7

0x9b69,	// (0x00043e6a) bg_vkb2_func_pane_g8

0x9b29,	// (0x00043e2a) bg_vkb2_func_pane_g9

0x0008,

0xfddf,	// (0x0004a0e0) bg_vkb2_func_pane_g

0x6eaa,	// (0x000411ab) bg_vkb2_fuc_pane_cp01_ParamLimits

0x6eaa,	// (0x000411ab) bg_vkb2_fuc_pane_cp01

0x7844,	// (0x00041b45) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x7844,	// (0x00041b45) vkb2_top_cell_right_wide_pane_g1

0x6eaa,	// (0x000411ab) bg_vkb2_fuc_pane_cp02_ParamLimits

0x6eaa,	// (0x000411ab) bg_vkb2_fuc_pane_cp02

0x78a2,	// (0x00041ba3) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x78a2,	// (0x00041ba3) vkb2_top_cell_right_narrow_pane_g1

0xd632,	// (0x00047933) aid_touch_area_decrease_ParamLimits

0xd632,	// (0x00047933) aid_touch_area_decrease

0xd650,	// (0x00047951) aid_touch_area_increase_ParamLimits

0xd650,	// (0x00047951) aid_touch_area_increase

0xd65c,	// (0x0004795d) aid_touch_area_mute_ParamLimits

0xd65c,	// (0x0004795d) aid_touch_area_mute

0xd680,	// (0x00047981) aid_touch_area_slider_ParamLimits

0xd680,	// (0x00047981) aid_touch_area_slider

0xd76c,	// (0x00047a6d) popup_slider_window_g4_ParamLimits

0xd76c,	// (0x00047a6d) popup_slider_window_g4

0xd778,	// (0x00047a79) popup_slider_window_g5_ParamLimits

0xd778,	// (0x00047a79) popup_slider_window_g5

0xd79a,	// (0x00047a9b) popup_slider_window_g6_ParamLimits

0xd79a,	// (0x00047a9b) popup_slider_window_g6

0xd7da,	// (0x00047adb) popup_slider_window_t2_ParamLimits

0xd7da,	// (0x00047adb) popup_slider_window_t2

0x0001,

0xfcf0,	// (0x00049ff1) popup_slider_window_t_ParamLimits

0xfcf0,	// (0x00049ff1) popup_slider_window_t

0xd7f2,	// (0x00047af3) slider_pane_ParamLimits

0xd7f2,	// (0x00047af3) slider_pane

0xe501,	// (0x00048802) slider_pane_g1_ParamLimits

0xe501,	// (0x00048802) slider_pane_g1

0xe515,	// (0x00048816) slider_pane_g2_ParamLimits

0xe515,	// (0x00048816) slider_pane_g2

0xe52b,	// (0x0004882c) slider_pane_g3_ParamLimits

0xe52b,	// (0x0004882c) slider_pane_g3

0x0003,

0x0073,	// (0x0003a374) slider_pane_g_ParamLimits

0x0073,	// (0x0003a374) slider_pane_g

0x68b8,	// (0x00040bb9) popup_tb_float_extension_window_ParamLimits

0x68b8,	// (0x00040bb9) popup_tb_float_extension_window

0xe557,	// (0x00048858) aid_size_cell_tb_float_ext

0x7cf8,	// (0x00041ff9) bg_popup_sub_window_cp28

0xe563,	// (0x00048864) grid_tb_float_ext_pane

0xe56d,	// (0x0004886e) cell_tb_float_ext_pane_ParamLimits

0xe56d,	// (0x0004886e) cell_tb_float_ext_pane

0xe587,	// (0x00048888) cell_tb_float_ext_pane_g1

0xe590,	// (0x00048891) grid_highlight_pane_cp12

0x6feb,	// (0x000412ec) cell_last_hwr_side_pane_ParamLimits

0x6feb,	// (0x000412ec) cell_last_hwr_side_pane

0xc133,	// (0x00046434) cell_last_hwr_side_pane_g1

0xe599,	// (0x0004889a) cell_last_hwr_side_pane_g2

0x0001,

0xfdf2,	// (0x0004a0f3) cell_last_hwr_side_pane_g

0x776a,	// (0x00041a6b) vkb2_area_bottom_space_btn_pane_ParamLimits

0x776a,	// (0x00041a6b) vkb2_area_bottom_space_btn_pane

0xc3b1,	// (0x000466b2) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xe04c,	// (0x0004834d) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x79e4,	// (0x00041ce5) cell_vkb2_top_candi_pane_t1_ParamLimits

0x7a03,	// (0x00041d04) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x7a03,	// (0x00041d04) vkb2_area_bottom_space_btn_pane_g1

0x7a3d,	// (0x00041d3e) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x7a3d,	// (0x00041d3e) vkb2_area_bottom_space_btn_pane_g2

0x7a73,	// (0x00041d74) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x7a73,	// (0x00041d74) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfdf7,	// (0x0004a0f8) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfdf7,	// (0x0004a0f8) vkb2_area_bottom_space_btn_pane_g

0x6f5f,	// (0x00041260) cel_fep_hwr_func_pane_ParamLimits

0x6f5f,	// (0x00041260) cel_fep_hwr_func_pane

0x6f9b,	// (0x0004129c) cell_hwr_side_button_pane_ParamLimits

0x6f9b,	// (0x0004129c) cell_hwr_side_button_pane

0xda30,	// (0x00047d31) aid_area_touch_clock_ParamLimits

0x8075,	// (0x00042376) bg_uniindi_top_pane_ParamLimits

0xda42,	// (0x00047d43) uniindi_top_pane_g1_ParamLimits

0xda58,	// (0x00047d59) uniindi_top_pane_g2_ParamLimits

0xda64,	// (0x00047d65) uniindi_top_pane_g3_ParamLimits

0xda75,	// (0x00047d76) uniindi_top_pane_g4_ParamLimits

0xfd28,	// (0x0004a029) uniindi_top_pane_g_ParamLimits

0xda82,	// (0x00047d83) uniindi_top_pane_t1_ParamLimits

0x8075,	// (0x00042376) bg_vkb2_func_pane_cp01_ParamLimits

0x8075,	// (0x00042376) bg_vkb2_func_pane_cp01

0xe5a2,	// (0x000488a3) cel_fep_hwr_func_pane_g1_ParamLimits

0xe5a2,	// (0x000488a3) cel_fep_hwr_func_pane_g1

0x8075,	// (0x00042376) bg_vkb2_func_pane_cp02_ParamLimits

0x8075,	// (0x00042376) bg_vkb2_func_pane_cp02

0xe5a2,	// (0x000488a3) cell_hwr_side_button_pane_g1_ParamLimits

0xe5a2,	// (0x000488a3) cell_hwr_side_button_pane_g1

0x99aa,	// (0x00043cab) status_pane_g4_ParamLimits

0x99aa,	// (0x00043cab) status_pane_g4

0x99c4,	// (0x00043cc5) status_pane_t1

0xbe61,	// (0x00046162) form2_midp_gauge_slider_cont_pane

0xbe69,	// (0x0004616a) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbe7b,	// (0x0004617c) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbe8d,	// (0x0004618e) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf4,	// (0x00049df5) form2_midp_gauge_slider_pane_t_ParamLimits

0xbe9f,	// (0x000461a0) form2_midp_slider_pane_ParamLimits

0x73d9,	// (0x000416da) aid_size_cell_func_vkb2_ParamLimits

0x73d9,	// (0x000416da) aid_size_cell_func_vkb2

0xe543,	// (0x00048844) slider_pane_g4_ParamLimits

0xe543,	// (0x00048844) slider_pane_g4

0x7abd,	// (0x00041dbe) form2_midp_gauge_slider_pane_t2_cp01

0x7acb,	// (0x00041dcc) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x7acb,	// (0x00041dcc) form2_midp_gauge_slider_pane_t3_cp01

0x7ae8,	// (0x00041de9) form2_midp_slider_pane_cp01

0x7cf8,	// (0x00041ff9) navi_smil_pane

0xe5db,	// (0x000488dc) navi_smil_pane_g1

0xe5e3,	// (0x000488e4) navi_smil_pane_t1

0xe5b0,	// (0x000488b1) form2_midp_slider_pane_g1

0xe5b9,	// (0x000488ba) form2_midp_slider_pane_g2

0xe5c1,	// (0x000488c2) form2_midp_slider_pane_g3

0xe5b0,	// (0x000488b1) form2_midp_slider_pane_g4

0xe5c9,	// (0x000488ca) form2_midp_slider_pane_g5

0x0004,

0x0085,	// (0x0003a386) form2_midp_slider_pane_g

0x7aad,	// (0x00041dae) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x7aad,	// (0x00041dae) vkb2_area_bottom_space_btn_pane_g4

0x97d9,	// (0x00043ada) lc0_navi_pane_ParamLimits

0x97d9,	// (0x00043ada) lc0_navi_pane

0x984f,	// (0x00043b50) lc0_stat_indi_pane_ParamLimits

0x984f,	// (0x00043b50) lc0_stat_indi_pane

0x9866,	// (0x00043b67) ls0_title_pane_ParamLimits

0x9866,	// (0x00043b67) ls0_title_pane

0x8664,	// (0x00042965) bg_popup_sub_pane_cp14_ParamLimits

0xda17,	// (0x00047d18) list_uniindi_pane_ParamLimits

0xda23,	// (0x00047d24) uniindi_top_pane_ParamLimits

0xdabf,	// (0x00047dc0) list_single_uniindi_pane_g1_ParamLimits

0xdad2,	// (0x00047dd3) list_single_uniindi_pane_t1_ParamLimits

0x7af1,	// (0x00041df2) lc0_stat_clock_pane_ParamLimits

0x7af1,	// (0x00041df2) lc0_stat_clock_pane

0xe5f1,	// (0x000488f2) lc0_stat_indi_pane_g1_ParamLimits

0xe5f1,	// (0x000488f2) lc0_stat_indi_pane_g1

0xe5fe,	// (0x000488ff) lc0_stat_indi_pane_g2_ParamLimits

0xe5fe,	// (0x000488ff) lc0_stat_indi_pane_g2

0x0001,

0x0090,	// (0x0003a391) lc0_stat_indi_pane_g_ParamLimits

0x0090,	// (0x0003a391) lc0_stat_indi_pane_g

0x7afe,	// (0x00041dff) lc0_uni_indicator_pane_ParamLimits

0x7afe,	// (0x00041dff) lc0_uni_indicator_pane

0xe60b,	// (0x0004890c) ls0_title_pane_g1_ParamLimits

0xe60b,	// (0x0004890c) ls0_title_pane_g1

0xe61f,	// (0x00048920) ls0_title_pane_t1_ParamLimits

0xe61f,	// (0x00048920) ls0_title_pane_t1

0x7b0b,	// (0x00041e0c) lc0_uni_indicator_pane_g1_ParamLimits

0x7b0b,	// (0x00041e0c) lc0_uni_indicator_pane_g1

0xe655,	// (0x00048956) lc0_stat_clock_pane_t1

0x7cf8,	// (0x00041ff9) main_ai5_pane

0xe663,	// (0x00048964) ai5_sk_pane_ParamLimits

0xe663,	// (0x00048964) ai5_sk_pane

0xe670,	// (0x00048971) cell_ai5_widget_pane_ParamLimits

0xe670,	// (0x00048971) cell_ai5_widget_pane

0xe726,	// (0x00048a27) aid_size_cell_widget_grid

0xe73c,	// (0x00048a3d) bg_ai5_widget_pane_ParamLimits

0xe73c,	// (0x00048a3d) bg_ai5_widget_pane

0xe7b0,	// (0x00048ab1) cell_ai5_widget_pane_g2

0xe7c0,	// (0x00048ac1) cell_ai5_widget_pane_g3

0xe7d7,	// (0x00048ad8) cell_ai5_widget_pane_g4

0xe7e3,	// (0x00048ae4) cell_ai5_widget_pane_g5

0xe7ef,	// (0x00048af0) cell_ai5_widget_pane_g6

0xe7fb,	// (0x00048afc) cell_ai5_widget_pane_g7

0xe843,	// (0x00048b44) cell_ai5_widget_pane_t1_ParamLimits

0xe843,	// (0x00048b44) cell_ai5_widget_pane_t1

0xe860,	// (0x00048b61) cell_ai5_widget_pane_t2_ParamLimits

0xe860,	// (0x00048b61) cell_ai5_widget_pane_t2

0xe878,	// (0x00048b79) cell_ai5_widget_pane_t3_ParamLimits

0xe878,	// (0x00048b79) cell_ai5_widget_pane_t3

0xe890,	// (0x00048b91) cell_ai5_widget_pane_t4_ParamLimits

0xe890,	// (0x00048b91) cell_ai5_widget_pane_t4

0xe8ad,	// (0x00048bae) cell_ai5_widget_pane_t5_ParamLimits

0xe8ad,	// (0x00048bae) cell_ai5_widget_pane_t5

0xe8cc,	// (0x00048bcd) cell_ai5_widget_pane_t6_ParamLimits

0xe8cc,	// (0x00048bcd) cell_ai5_widget_pane_t6

0xe8de,	// (0x00048bdf) cell_ai5_widget_pane_t7_ParamLimits

0xe8de,	// (0x00048bdf) cell_ai5_widget_pane_t7

0xe8f7,	// (0x00048bf8) cell_ai5_widget_pane_t8_ParamLimits

0xe8f7,	// (0x00048bf8) cell_ai5_widget_pane_t8

0x0009,

0x00aa,	// (0x0003a3ab) cell_ai5_widget_pane_t_ParamLimits

0x00aa,	// (0x0003a3ab) cell_ai5_widget_pane_t

0xe94b,	// (0x00048c4c) grid_ai5_widget_pane

0x8664,	// (0x00042965) highlight_cell_ai5_widget_pane_ParamLimits

0x8664,	// (0x00042965) highlight_cell_ai5_widget_pane

0xe963,	// (0x00048c64) ai5_sk_left_pane

0xe96d,	// (0x00048c6e) ai5_sk_middle_pane

0xe977,	// (0x00048c78) ai5_sk_right_pane

0xe981,	// (0x00048c82) bg_ai5_widget_pane_g1_ParamLimits

0xe981,	// (0x00048c82) bg_ai5_widget_pane_g1

0xe98d,	// (0x00048c8e) bg_ai5_widget_pane_g2_ParamLimits

0xe98d,	// (0x00048c8e) bg_ai5_widget_pane_g2

0xe999,	// (0x00048c9a) bg_ai5_widget_pane_g3_ParamLimits

0xe999,	// (0x00048c9a) bg_ai5_widget_pane_g3

0xe9a5,	// (0x00048ca6) bg_ai5_widget_pane_g4_ParamLimits

0xe9a5,	// (0x00048ca6) bg_ai5_widget_pane_g4

0xe9b1,	// (0x00048cb2) bg_ai5_widget_pane_g5_ParamLimits

0xe9b1,	// (0x00048cb2) bg_ai5_widget_pane_g5

0xe9bd,	// (0x00048cbe) bg_ai5_widget_pane_g6_ParamLimits

0xe9bd,	// (0x00048cbe) bg_ai5_widget_pane_g6

0xe9c9,	// (0x00048cca) bg_ai5_widget_pane_g7_ParamLimits

0xe9c9,	// (0x00048cca) bg_ai5_widget_pane_g7

0xe9d5,	// (0x00048cd6) bg_ai5_widget_pane_g8_ParamLimits

0xe9d5,	// (0x00048cd6) bg_ai5_widget_pane_g8

0xe9e1,	// (0x00048ce2) bg_ai5_widget_pane_g9_ParamLimits

0xe9e1,	// (0x00048ce2) bg_ai5_widget_pane_g9

0x0008,

0x00bf,	// (0x0003a3c0) bg_ai5_widget_pane_g_ParamLimits

0x00bf,	// (0x0003a3c0) bg_ai5_widget_pane_g

0xea13,	// (0x00048d14) cell_shortcut_ai5_widget_pane_ParamLimits

0xea13,	// (0x00048d14) cell_shortcut_ai5_widget_pane

0x92df,	// (0x000435e0) bg_cell_shortcut_ai5_widget_pane

0xea24,	// (0x00048d25) cell_grid_ai5_widget_pane_g1

0xea2d,	// (0x00048d2e) highlight_cell_shortcut_ai5_widget_pane

0x9b39,	// (0x00043e3a) ai5_sk_left_pane_g1

0xea35,	// (0x00048d36) ai5_sk_left_pane_g2

0xea3d,	// (0x00048d3e) ai5_sk_left_pane_g3

0xea45,	// (0x00048d46) ai5_sk_left_pane_g4

0x0003,

0xfe00,	// (0x0004a101) ai5_sk_left_pane_g

0xea4d,	// (0x00048d4e) ai5_sk_left_pane_t1

0x9b31,	// (0x00043e32) ai5_sk_right_pane_g1

0xea5b,	// (0x00048d5c) ai5_sk_right_pane_g2

0xea63,	// (0x00048d64) ai5_sk_right_pane_g3

0xea6b,	// (0x00048d6c) ai5_sk_right_pane_g4

0x0003,

0xfe09,	// (0x0004a10a) ai5_sk_right_pane_g

0xea73,	// (0x00048d74) ai5_sk_right_pane_t1

0x9b31,	// (0x00043e32) ai5_sk_middle_pane_g1

0x9b39,	// (0x00043e3a) ai5_sk_middle_pane_g2

0x9b51,	// (0x00043e52) ai5_sk_middle_pane_g3

0xea63,	// (0x00048d64) ai5_sk_middle_pane_g4

0xea3d,	// (0x00048d3e) ai5_sk_middle_pane_g5

0xea81,	// (0x00048d82) ai5_sk_middle_pane_g6

0xea89,	// (0x00048d8a) ai5_sk_middle_pane_g7

0x0006,

0xfe12,	// (0x0004a113) ai5_sk_middle_pane_g

0x9665,	// (0x00043966) aid_touch_area_size_lc0_ParamLimits

0x9665,	// (0x00043966) aid_touch_area_size_lc0

0x70ea,	// (0x000413eb) cell_hwr_candidate_pane_t1_ParamLimits

0x9681,	// (0x00043982) aid_touch_navi_pane

0x9954,	// (0x00043c55) status_dt_navi_pane_ParamLimits

0x9954,	// (0x00043c55) status_dt_navi_pane

0x9961,	// (0x00043c62) status_dt_sta_pane_ParamLimits

0x9961,	// (0x00043c62) status_dt_sta_pane

0xea91,	// (0x00048d92) dt_sta_controll_pane

0xea9e,	// (0x00048d9f) dt_sta_indi_pane

0xeaaf,	// (0x00048db0) dt_sta_title_pane

0x8075,	// (0x00042376) bg_dt_sta_indi_pane_ParamLimits

0x8075,	// (0x00042376) bg_dt_sta_indi_pane

0xeac2,	// (0x00048dc3) dt_sta_battery_pane

0xeaca,	// (0x00048dcb) dt_sta_indi_pane_g1

0xead3,	// (0x00048dd4) dt_sta_indi_pane_g2

0xeadc,	// (0x00048ddd) dt_sta_indi_pane_g3

0x0002,

0x00f3,	// (0x0003a3f4) dt_sta_indi_pane_g

0xeae5,	// (0x00048de6) dt_sta_signal_pane

0x8664,	// (0x00042965) bg_dt_sta_title_pane_ParamLimits

0x8664,	// (0x00042965) bg_dt_sta_title_pane

0xeaee,	// (0x00048def) dt_sta_title_pane_g1

0xeaf6,	// (0x00048df7) dt_sta_title_pane_t1_ParamLimits

0xeaf6,	// (0x00048df7) dt_sta_title_pane_t1

0x7cf8,	// (0x00041ff9) bg_dt_sta_control_pane

0xeb0b,	// (0x00048e0c) dt_sta_controll_pane_g1

0xeb14,	// (0x00048e15) bg_dt_sta_title_pane_g1

0xeb1d,	// (0x00048e1e) bg_dt_sta_title_pane_g2

0xeb26,	// (0x00048e27) bg_dt_sta_title_pane_g3

0x0002,

0x00fa,	// (0x0003a3fb) bg_dt_sta_title_pane_g

0xc133,	// (0x00046434) bg_dt_sta_indi_pane_g1

0xeb2f,	// (0x00048e30) dt_sta_signal_pane_g1

0xeb37,	// (0x00048e38) dt_sta_signal_pane_g2

0x0001,

0x0101,	// (0x0003a402) dt_sta_signal_pane_g

0xeb3f,	// (0x00048e40) dt_sta_battery_pane_g1

0xeb48,	// (0x00048e49) dt_sta_battery_pane_t1

0xc133,	// (0x00046434) bg_dt_sta_control_pane_g1

0x8de9,	// (0x000430ea) fep_china_uni_eep_pane

0x8df1,	// (0x000430f2) fep_china_uni_entry_pane_ParamLimits

0x8e01,	// (0x00043102) popup_fep_china_uni_window_g1_ParamLimits

0x8e11,	// (0x00043112) popup_fep_china_uni_window_g2_ParamLimits

0x8e11,	// (0x00043112) popup_fep_china_uni_window_g2

0x0001,

0xf728,	// (0x00049a29) popup_fep_china_uni_window_g_ParamLimits

0xf728,	// (0x00049a29) popup_fep_china_uni_window_g

0xeb57,	// (0x00048e58) fep_china_uni_eep_pane_g1

0xeb5f,	// (0x00048e60) fep_china_uni_eep_pane_t1

0xe5d2,	// (0x000488d3) aid_touch_area_size_smil_player

0x97d1,	// (0x00043ad2) lc0_clock_pane

0x99b8,	// (0x00043cb9) status_pane_g5_ParamLimits

0x99b8,	// (0x00043cb9) status_pane_g5

0x657d,	// (0x0004087e) popup_keymap_window

0x9976,	// (0x00043c77) status_icon_pane

0xe7c0,	// (0x00048ac1) cell_ai5_widget_pane_g3_ParamLimits

0xe7d7,	// (0x00048ad8) cell_ai5_widget_pane_g4_ParamLimits

0xe7e3,	// (0x00048ae4) cell_ai5_widget_pane_g5_ParamLimits

0xe807,	// (0x00048b08) cell_ai5_widget_pane_g8_ParamLimits

0xe807,	// (0x00048b08) cell_ai5_widget_pane_g8

0xe81b,	// (0x00048b1c) cell_ai5_widget_pane_g9_ParamLimits

0xe81b,	// (0x00048b1c) cell_ai5_widget_pane_g9

0xe82f,	// (0x00048b30) cell_ai5_widget_pane_g10_ParamLimits

0xe82f,	// (0x00048b30) cell_ai5_widget_pane_g10

0xeb6e,	// (0x00048e6f) status_icon_pane_g1

0x7cf8,	// (0x00041ff9) bg_popup_sub_pane_cp13

0xeb76,	// (0x00048e77) popup_keymap_window_t1

0x95aa,	// (0x000438ab) control_pane_g6_ParamLimits

0x95aa,	// (0x000438ab) control_pane_g6

0x95b7,	// (0x000438b8) control_pane_g7_ParamLimits

0x95b7,	// (0x000438b8) control_pane_g7

0x95c4,	// (0x000438c5) control_pane_g8_ParamLimits

0x95c4,	// (0x000438c5) control_pane_g8

0xea91,	// (0x00048d92) dt_sta_controll_pane_ParamLimits

0xea9e,	// (0x00048d9f) dt_sta_indi_pane_ParamLimits

0xeaaf,	// (0x00048db0) dt_sta_title_pane_ParamLimits

0x8590,	// (0x00042891) aid_size_touch_scroll_bar_cale

0x5b16,	// (0x0003fe17) popup_discreet_window_ParamLimits

0x5b16,	// (0x0003fe17) popup_discreet_window

0x5b9e,	// (0x0003fe9f) popup_sk_window

0xa1ae,	// (0x000444af) bg_popup_sub_pane_cp28_ParamLimits

0xa1ae,	// (0x000444af) bg_popup_sub_pane_cp28

0xeb84,	// (0x00048e85) popup_discreet_window_g1_ParamLimits

0xeb84,	// (0x00048e85) popup_discreet_window_g1

0xeba4,	// (0x00048ea5) popup_discreet_window_t1_ParamLimits

0xeba4,	// (0x00048ea5) popup_discreet_window_t1

0xebc2,	// (0x00048ec3) popup_discreet_window_t2_ParamLimits

0xebc2,	// (0x00048ec3) popup_discreet_window_t2

0x0002,

0x0106,	// (0x0003a407) popup_discreet_window_t_ParamLimits

0x0106,	// (0x0003a407) popup_discreet_window_t

0x7b1f,	// (0x00041e20) popup_sk_window_g1

0x7b29,	// (0x00041e2a) popup_sk_window_g2

0x0001,

0xfe21,	// (0x0004a122) popup_sk_window_g

0x7b33,	// (0x00041e34) popup_sk_window_t1

0x7b41,	// (0x00041e42) popup_sk_window_t1_copy1

0xe7b0,	// (0x00048ab1) cell_ai5_widget_pane_g2_ParamLimits

0xe909,	// (0x00048c0a) cell_ai5_widget_pane_t9_ParamLimits

0xe909,	// (0x00048c0a) cell_ai5_widget_pane_t9

0x7cf8,	// (0x00041ff9) main_fep_fshwr2_pane

0x7b4f,	// (0x00041e50) aid_fshwr2_btn_pane

0x7b5b,	// (0x00041e5c) aid_fshwr2_syb_pane

0x7b6c,	// (0x00041e6d) aid_fshwr2_txt_pane

0x7b78,	// (0x00041e79) fshwr2_func_candi_pane

0x7b90,	// (0x00041e91) fshwr2_hwr_syb_pane

0x7ba7,	// (0x00041ea8) fshwr2_icf_pane

0x7cf8,	// (0x00041ff9) fshwr2_icf_bg_pane

0xec14,	// (0x00048f15) fshwr2_icf_pane_t1_ParamLimits

0xec14,	// (0x00048f15) fshwr2_icf_pane_t1

0x8cd7,	// (0x00042fd8) fshwr2_func_candi_pane_g1

0xec2c,	// (0x00048f2d) fshwr2_func_candi_row_pane_ParamLimits

0xec2c,	// (0x00048f2d) fshwr2_func_candi_row_pane

0xec3c,	// (0x00048f3d) cell_fshwr2_syb_pane_ParamLimits

0xec3c,	// (0x00048f3d) cell_fshwr2_syb_pane

0xc3b1,	// (0x000466b2) fshwr2_hwr_syb_pane_g1_ParamLimits

0xc3b1,	// (0x000466b2) fshwr2_hwr_syb_pane_g1

0x7cf8,	// (0x00041ff9) bg_popup_call_pane_cp01

0xec56,	// (0x00048f57) fshwr2_func_candi_cell_pane_ParamLimits

0xec56,	// (0x00048f57) fshwr2_func_candi_cell_pane

0xec81,	// (0x00048f82) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xec81,	// (0x00048f82) fshwr2_func_candi_cell_bg_pane

0xec8d,	// (0x00048f8e) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xec8d,	// (0x00048f8e) fshwr2_func_candi_cell_pane_g1

0xecb5,	// (0x00048fb6) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xecb5,	// (0x00048fb6) fshwr2_func_candi_cell_pane_t1

0x7cf8,	// (0x00041ff9) bg_button_pane_cp08

0x92df,	// (0x000435e0) cell_fshwr2_syb_bg_pane

0xecc8,	// (0x00048fc9) cell_fshwr2_syb_bg_pane_g1

0xecd0,	// (0x00048fd1) cell_fshwr2_syb_bg_pane_t1

0x8664,	// (0x00042965) main_tmo_pane

0xacbd,	// (0x00044fbe) uni_indicator_pane_g1_ParamLimits

0xacd4,	// (0x00044fd5) uni_indicator_pane_g2_ParamLimits

0xace7,	// (0x00044fe8) uni_indicator_pane_g3_ParamLimits

0xacf9,	// (0x00044ffa) uni_indicator_pane_g4_ParamLimits

0xacf9,	// (0x00044ffa) uni_indicator_pane_g4

0xad0d,	// (0x0004500e) uni_indicator_pane_g5_ParamLimits

0xad0d,	// (0x0004500e) uni_indicator_pane_g5

0xad0d,	// (0x0004500e) uni_indicator_pane_g6_ParamLimits

0xad0d,	// (0x0004500e) uni_indicator_pane_g6

0xf92c,	// (0x00049c2d) uni_indicator_pane_g_ParamLimits

0xd60e,	// (0x0004790f) popup_tmo_note_window_ParamLimits

0xd60e,	// (0x0004790f) popup_tmo_note_window

0x8664,	// (0x00042965) fshwr2_bg_pane

0xeca6,	// (0x00048fa7) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xeca6,	// (0x00048fa7) fshwr2_func_candi_cell_pane_g2

0x0001,

0x0112,	// (0x0003a413) fshwr2_func_candi_cell_pane_g_ParamLimits

0x0112,	// (0x0003a413) fshwr2_func_candi_cell_pane_g

0xc133,	// (0x00046434) bg_popup_window_pane_cp01

0xecdf,	// (0x00048fe0) bg_popup_window_pane_g1_cp01

0xece8,	// (0x00048fe9) bg_popup_window_pane_cp22_ParamLimits

0xece8,	// (0x00048fe9) bg_popup_window_pane_cp22

0xecf6,	// (0x00048ff7) listscroll_tmo_link_pane_ParamLimits

0xecf6,	// (0x00048ff7) listscroll_tmo_link_pane

0xed36,	// (0x00049037) popup_tmo_note_window_g1_ParamLimits

0xed36,	// (0x00049037) popup_tmo_note_window_g1

0xed43,	// (0x00049044) tmo_note_info_pane_ParamLimits

0xed43,	// (0x00049044) tmo_note_info_pane

0xed5d,	// (0x0004905e) list_tmo_note_info_pane_g1_ParamLimits

0xed5d,	// (0x0004905e) list_tmo_note_info_pane_g1

0xed74,	// (0x00049075) list_tmo_note_info_pane_g2_ParamLimits

0xed74,	// (0x00049075) list_tmo_note_info_pane_g2

0x0001,

0x0117,	// (0x0003a418) list_tmo_note_info_pane_g_ParamLimits

0x0117,	// (0x0003a418) list_tmo_note_info_pane_g

0xed90,	// (0x00049091) list_tmo_note_info_text_pane_ParamLimits

0xed90,	// (0x00049091) list_tmo_note_info_text_pane

0xee11,	// (0x00049112) list_tmo_link_pane

0xee1e,	// (0x0004911f) scroll_pane_cp20

0xee2b,	// (0x0004912c) list_single_tmo_link_pane_ParamLimits

0xee2b,	// (0x0004912c) list_single_tmo_link_pane

0xee3b,	// (0x0004913c) list_single_tmo_link_pane_t1

0xee49,	// (0x0004914a) list_tmo_note_info_text_pane_t1_ParamLimits

0xee49,	// (0x0004914a) list_tmo_note_info_text_pane_t1

0x8712,	// (0x00042a13) aid_size_touch_scroll_bar_cp01_ParamLimits

0x8712,	// (0x00042a13) aid_size_touch_scroll_bar_cp01

0x4f8d,	// (0x0003f28e) aid_size_touch_slider_marker

0x5b86,	// (0x0003fe87) popup_settings_window_ParamLimits

0x5b86,	// (0x0003fe87) popup_settings_window

0x5124,	// (0x0003f425) popup_candi_list_indi_window

0x9681,	// (0x00043982) aid_touch_navi_pane_ParamLimits

0x7332,	// (0x00041633) rs_clock_indi_pane

0x733b,	// (0x0004163c) sctrl_sk_bottom_pane_ParamLimits

0x734c,	// (0x0004164d) sctrl_sk_top_pane_ParamLimits

0x7433,	// (0x00041734) popup_fep_tooltip_window

0xe726,	// (0x00048a27) aid_size_cell_widget_grid_ParamLimits

0xe79b,	// (0x00048a9c) cell_ai5_widget_pane_g1_ParamLimits

0xe79b,	// (0x00048a9c) cell_ai5_widget_pane_g1

0xe7ef,	// (0x00048af0) cell_ai5_widget_pane_g6_ParamLimits

0xe7fb,	// (0x00048afc) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0x0095,	// (0x0003a396) cell_ai5_widget_pane_g_ParamLimits

0x0095,	// (0x0003a396) cell_ai5_widget_pane_g

0xe92d,	// (0x00048c2e) cell_ai5_widget_pane_t10_ParamLimits

0xe92d,	// (0x00048c2e) cell_ai5_widget_pane_t10

0xe94b,	// (0x00048c4c) grid_ai5_widget_pane_ParamLimits

0xe9ed,	// (0x00048cee) cell_contacts_ai5_widget_pane_ParamLimits

0xe9ed,	// (0x00048cee) cell_contacts_ai5_widget_pane

0xebd7,	// (0x00048ed8) popup_discreet_window_t3_ParamLimits

0xebd7,	// (0x00048ed8) popup_discreet_window_t3

0x7bbc,	// (0x00041ebd) popup_fshwr2_char_preview_window_ParamLimits

0x7bbc,	// (0x00041ebd) popup_fshwr2_char_preview_window

0xedae,	// (0x000490af) tmo_note_info_pane_t1

0xedc3,	// (0x000490c4) tmo_note_info_pane_t2

0xedd8,	// (0x000490d9) tmo_note_info_pane_t3

0xeded,	// (0x000490ee) tmo_note_info_pane_t4

0xedff,	// (0x00049100) tmo_note_info_pane_t5

0x0004,

0x011c,	// (0x0003a41d) tmo_note_info_pane_t

0xee11,	// (0x00049112) list_tmo_link_pane_ParamLimits

0xee1e,	// (0x0004911f) scroll_pane_cp20_ParamLimits

0x7cf8,	// (0x00041ff9) bg_popup_fep_char_preview_window_cp01

0xee62,	// (0x00049163) popup_fshwr2_char_preview_window_t1

0xee70,	// (0x00049171) popup_candi_list_indi_window_g1

0xee79,	// (0x0004917a) bg_cell_contacts_ai5_widget_pane

0xee85,	// (0x00049186) cell_contacts_ai5_widget_pane_g1

0xc813,	// (0x00046b14) cell_contacts_ai5_widget_pane_g2

0xee98,	// (0x00049199) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfe26,	// (0x0004a127) cell_contacts_ai5_widget_pane_g

0xeeaa,	// (0x000491ab) cell_contacts_ai5_widget_pane_t1

0x8664,	// (0x00042965) highlight_cell_shortcut_ai5_widget_pane_cp01

0xef21,	// (0x00049222) settings_container_pane

0x92df,	// (0x000435e0) listscroll_set_pane_copy1

0xb814,	// (0x00045b15) scroll_pane_cp121_copy1

0xef2d,	// (0x0004922e) set_content_pane_copy1

0xef35,	// (0x00049236) aid_height_set_list_copy1_ParamLimits

0xef35,	// (0x00049236) aid_height_set_list_copy1

0xaf47,	// (0x00045248) aid_size_parent_copy1_ParamLimits

0xaf47,	// (0x00045248) aid_size_parent_copy1

0xef41,	// (0x00049242) button_value_adjust_pane_cp6_copy1_ParamLimits

0xef41,	// (0x00049242) button_value_adjust_pane_cp6_copy1

0x961f,	// (0x00043920) list_highlight_pane_cp2_copy1_ParamLimits

0x961f,	// (0x00043920) list_highlight_pane_cp2_copy1

0xef55,	// (0x00049256) list_set_pane_copy1_ParamLimits

0xef55,	// (0x00049256) list_set_pane_copy1

0xeebc,	// (0x000491bd) main_pane_set_t1_copy1_ParamLimits

0xeebc,	// (0x000491bd) main_pane_set_t1_copy1

0xeef6,	// (0x000491f7) main_pane_set_t2_copy1_ParamLimits

0xeef6,	// (0x000491f7) main_pane_set_t2_copy1

0xf002,	// (0x00049303) main_pane_set_t3_copy1

0xf010,	// (0x00049311) main_pane_set_t4_copy1

0xef15,	// (0x00049216) set_content_pane_g1_copy1_ParamLimits

0xef15,	// (0x00049216) set_content_pane_g1_copy1

0xf01e,	// (0x0004931f) setting_code_pane_copy1

0xf026,	// (0x00049327) setting_slider_graphic_pane_copy1

0xf026,	// (0x00049327) setting_slider_pane_copy1

0xf026,	// (0x00049327) setting_text_pane_copy1

0xf026,	// (0x00049327) setting_volume_pane_copy1

0xf01e,	// (0x0004931f) settings_code_pane_cp2_copy1

0xf02e,	// (0x0004932f) settings_code_pane_cp_copy1_ParamLimits

0xf02e,	// (0x0004932f) settings_code_pane_cp_copy1

0x7bd0,	// (0x00041ed1) volume_set_pane_copy1

0xf042,	// (0x00049343) volume_set_pane_g10_copy1

0xf04a,	// (0x0004934b) volume_set_pane_g1_copy1

0xf052,	// (0x00049353) volume_set_pane_g2_copy1

0xf05a,	// (0x0004935b) volume_set_pane_g3_copy1

0xf062,	// (0x00049363) volume_set_pane_g4_copy1

0xf06a,	// (0x0004936b) volume_set_pane_g5_copy1

0xf072,	// (0x00049373) volume_set_pane_g6_copy1

0xf07a,	// (0x0004937b) volume_set_pane_g7_copy1

0xf082,	// (0x00049383) volume_set_pane_g8_copy1

0xf08a,	// (0x0004938b) volume_set_pane_g9_copy1

0x7dec,	// (0x000420ed) bg_set_opt_pane_cp_copy1_ParamLimits

0x7dec,	// (0x000420ed) bg_set_opt_pane_cp_copy1

0x7bd8,	// (0x00041ed9) setting_slider_pane_t1_copy1_ParamLimits

0x7bd8,	// (0x00041ed9) setting_slider_pane_t1_copy1

0x7bf6,	// (0x00041ef7) setting_slider_pane_t2_copy1_ParamLimits

0x7bf6,	// (0x00041ef7) setting_slider_pane_t2_copy1

0x7c10,	// (0x00041f11) setting_slider_pane_t3_copy1_ParamLimits

0x7c10,	// (0x00041f11) setting_slider_pane_t3_copy1

0x7c28,	// (0x00041f29) slider_set_pane_copy1_ParamLimits

0x7c28,	// (0x00041f29) slider_set_pane_copy1

0x86b3,	// (0x000429b4) set_opt_bg_pane_g1_copy2

0x86bb,	// (0x000429bc) set_opt_bg_pane_g2_copy2

0xf092,	// (0x00049393) set_opt_bg_pane_g3_copy2

0x86cb,	// (0x000429cc) set_opt_bg_pane_g4_copy2

0x86d3,	// (0x000429d4) set_opt_bg_pane_g5_copy2

0x86db,	// (0x000429dc) set_opt_bg_pane_g6_copy2

0xf09c,	// (0x0004939d) set_opt_bg_pane_g7_copy2

0xf0a4,	// (0x000493a5) set_opt_bg_pane_g8_copy2

0xf0ae,	// (0x000493af) set_opt_bg_pane_g9_copy2

0xf0b8,	// (0x000493b9) aid_size_touch_slider_mark_copy1_ParamLimits

0xf0b8,	// (0x000493b9) aid_size_touch_slider_mark_copy1

0xf0cc,	// (0x000493cd) slider_set_pane_g1_copy1

0xf0d5,	// (0x000493d6) slider_set_pane_g2_copy1

0xaec6,	// (0x000451c7) slider_set_pane_g3_copy1_ParamLimits

0xaec6,	// (0x000451c7) slider_set_pane_g3_copy1

0xaeda,	// (0x000451db) slider_set_pane_g4_copy1_ParamLimits

0xaeda,	// (0x000451db) slider_set_pane_g4_copy1

0xaef2,	// (0x000451f3) slider_set_pane_g5_copy1_ParamLimits

0xaef2,	// (0x000451f3) slider_set_pane_g5_copy1

0xaec6,	// (0x000451c7) slider_set_pane_g6_copy1_ParamLimits

0xaec6,	// (0x000451c7) slider_set_pane_g6_copy1

0xf0dd,	// (0x000493de) slider_set_pane_g7_copy1_ParamLimits

0xf0dd,	// (0x000493de) slider_set_pane_g7_copy1

0x7d0c,	// (0x0004200d) bg_set_opt_pane_cp2_copy1

0xf0f3,	// (0x000493f4) setting_slider_graphic_pane_g1_copy1

0xf0fc,	// (0x000493fd) setting_slider_graphic_pane_t1_copy1

0xf10c,	// (0x0004940d) setting_slider_graphic_pane_t2_copy1

0xf11c,	// (0x0004941d) slider_set_pane_cp_copy1

0xf12c,	// (0x0004942d) input_focus_pane_cp1_copy1

0xf135,	// (0x00049436) list_set_text_pane_copy1

0xf13d,	// (0x0004943e) setting_text_pane_g1_copy1

0x49c2,	// (0x0003ecc3) set_text_pane_t1_copy1

0xf12c,	// (0x0004942d) input_focus_pane_cp2_copy1

0xf13d,	// (0x0004943e) setting_code_pane_g1_copy1

0xf146,	// (0x00049447) setting_code_pane_t1_copy1

0xf154,	// (0x00049455) list_set_graphic_pane_copy1

0x7d0c,	// (0x0004200d) bg_set_opt_pane_cp4_copy1

0x8fe5,	// (0x000432e6) list_set_graphic_pane_g1_copy1_ParamLimits

0x8fe5,	// (0x000432e6) list_set_graphic_pane_g1_copy1

0xf166,	// (0x00049467) list_set_graphic_pane_g2_copy1

0x8ffd,	// (0x000432fe) list_set_graphic_pane_t1_copy1_ParamLimits

0x8ffd,	// (0x000432fe) list_set_graphic_pane_t1_copy1

0xc133,	// (0x00046434) rs_clock_indi_pane_g1

0xf16e,	// (0x0004946f) rs_clock_indi_pane_t1

0xf17c,	// (0x0004947d) rs_indi_pane

0xf184,	// (0x00049485) rs_indi_pane_g1

0xf18d,	// (0x0004948e) rs_indi_pane_g2

0xf196,	// (0x00049497) rs_indi_pane_g3

0x0002,

0x012e,	// (0x0003a42f) rs_indi_pane_g

0x92df,	// (0x000435e0) bg_popup_preview_window_pane_cp03

0xf19f,	// (0x000494a0) popup_fep_tooltip_window_t1

0xcdaf,	// (0x000470b0) popup_note2_window_g2_ParamLimits

0xcdaf,	// (0x000470b0) popup_note2_window_g2

0x0001,

0xfc60,	// (0x00049f61) popup_note2_window_g_ParamLimits

0xfc60,	// (0x00049f61) popup_note2_window_g

0xd2aa,	// (0x000475ab) bg_popup_sub_pane_cp11_ParamLimits

0xd2b7,	// (0x000475b8) cell_ai3_links_pane_g1_ParamLimits

0xd2ce,	// (0x000475cf) cell_ai3_links_pane_t1

0x49c2,	// (0x0003ecc3) set_text_pane_t1_copy1_ParamLimits

0x91f0,	// (0x000434f1) cell_graphic_popup_pane_cp2_ParamLimits

0x91f0,	// (0x000434f1) cell_graphic_popup_pane_cp2

0xf1ad,	// (0x000494ae) cell_graphic_popup_pane_g1_cp2

0x83a3,	// (0x000426a4) cell_graphic_popup_pane_g2_cp2

0xf1b5,	// (0x000494b6) cell_graphic_popup_pane_g3_cp2

0xf1bd,	// (0x000494be) cell_graphic_popup_pane_t2_cp2

0x83b4,	// (0x000426b5) grid_highlight_pane_cp3_cp2

0x89f8,	// (0x00042cf9) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x8664,	// (0x00042965) main_tmo_pane_ParamLimits

0xd602,	// (0x00047903) popup_tmo_big_image_note_window

0xe78a,	// (0x00048a8b) cell_ai5_widget_list_pane

0xe792,	// (0x00048a93) cell_ai5_widget_lrg_icon_pane

0xedae,	// (0x000490af) tmo_note_info_pane_t1_ParamLimits

0xedc3,	// (0x000490c4) tmo_note_info_pane_t2_ParamLimits

0xedd8,	// (0x000490d9) tmo_note_info_pane_t3_ParamLimits

0xeded,	// (0x000490ee) tmo_note_info_pane_t4_ParamLimits

0xedff,	// (0x00049100) tmo_note_info_pane_t5_ParamLimits

0x011c,	// (0x0003a41d) tmo_note_info_pane_t_ParamLimits

0xef21,	// (0x00049222) settings_container_pane_ParamLimits

0xf124,	// (0x00049425) indicator_popup_pane_cp5

0xf124,	// (0x00049425) indicator_popup_pane_cp6

0xf154,	// (0x00049455) list_set_graphic_pane_copy1_ParamLimits

0x7cf8,	// (0x00041ff9) bg_popup_window_pane_cp23

0xf1cb,	// (0x000494cc) popup_tmo_big_image_note_window_g1

0xf1d5,	// (0x000494d6) popup_tmo_big_image_note_window_t1

0xf1e5,	// (0x000494e6) popup_tmo_big_image_note_window_t2

0xf1f5,	// (0x000494f6) popup_tmo_big_image_note_window_t3

0x0002,

0x0135,	// (0x0003a436) popup_tmo_big_image_note_window_t

0xc133,	// (0x00046434) cell_ai5_widget_lrg_icon_pane_g1

0xf205,	// (0x00049506) cell_ai5_widget_lrg_icon_pane_t1

0xf213,	// (0x00049514) cell_ai5_widget_list_row_pane_ParamLimits

0xf213,	// (0x00049514) cell_ai5_widget_list_row_pane

0xf22c,	// (0x0004952d) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf22c,	// (0x0004952d) cell_ai5_widget_list_row_pane_g1

0xf239,	// (0x0004953a) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf239,	// (0x0004953a) cell_ai5_widget_list_row_pane_t1

0xf26a,	// (0x0004956b) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf26a,	// (0x0004956b) cell_ai5_widget_list_row_pane_t2

0x0002,

0x013c,	// (0x0003a43d) cell_ai5_widget_list_row_pane_t_ParamLimits

0x013c,	// (0x0003a43d) cell_ai5_widget_list_row_pane_t

0x7cf8,	// (0x00041ff9) main_fep_vtchi_ss_pane

0x7c4d,	// (0x00041f4e) popup_fep_char_pre_window

0x7c55,	// (0x00041f56) popup_fep_ituss_window

0x7c76,	// (0x00041f77) popup_fep_vkbss_window

0xf292,	// (0x00049593) grid_vkbss_keypad_pane_ParamLimits

0xf292,	// (0x00049593) grid_vkbss_keypad_pane

0xf2a2,	// (0x000495a3) ituss_keypad_pane

0x7ca1,	// (0x00041fa2) aid_vkbss_key_offset_ParamLimits

0x7ca1,	// (0x00041fa2) aid_vkbss_key_offset

0x7cad,	// (0x00041fae) cell_vkbss_key_pane_ParamLimits

0x7cad,	// (0x00041fae) cell_vkbss_key_pane

0xf2b2,	// (0x000495b3) bg_cell_vkbss_key_g1_ParamLimits

0xf2b2,	// (0x000495b3) bg_cell_vkbss_key_g1

0xf2be,	// (0x000495bf) cell_vkbss_key_3p_pane_ParamLimits

0xf2be,	// (0x000495bf) cell_vkbss_key_3p_pane

0xf2d8,	// (0x000495d9) cell_vkbss_key_g1_ParamLimits

0xf2d8,	// (0x000495d9) cell_vkbss_key_g1

0xf2f2,	// (0x000495f3) cell_vkbss_key_t1_ParamLimits

0xf2f2,	// (0x000495f3) cell_vkbss_key_t1

0x7cc3,	// (0x00041fc4) cell_ituss_key_pane_ParamLimits

0x7cc3,	// (0x00041fc4) cell_ituss_key_pane

0xf31d,	// (0x0004961e) bg_cell_ituss_key_g1_ParamLimits

0xf31d,	// (0x0004961e) bg_cell_ituss_key_g1

0xf329,	// (0x0004962a) cell_ituss_key_pane_g1_ParamLimits

0xf329,	// (0x0004962a) cell_ituss_key_pane_g1

0xf343,	// (0x00049644) cell_ituss_key_pane_g2_ParamLimits

0xf343,	// (0x00049644) cell_ituss_key_pane_g2

0x0001,

0x0143,	// (0x0003a444) cell_ituss_key_pane_g_ParamLimits

0x0143,	// (0x0003a444) cell_ituss_key_pane_g

0xf371,	// (0x00049672) cell_ituss_key_t1_ParamLimits

0xf371,	// (0x00049672) cell_ituss_key_t1

0xf3ab,	// (0x000496ac) cell_ituss_key_t2_ParamLimits

0xf3ab,	// (0x000496ac) cell_ituss_key_t2

0xf3dc,	// (0x000496dd) cell_ituss_key_t3_ParamLimits

0xf3dc,	// (0x000496dd) cell_ituss_key_t3

0xf416,	// (0x00049717) cell_ituss_key_t4_ParamLimits

0xf416,	// (0x00049717) cell_ituss_key_t4

0x0003,

0x0148,	// (0x0003a449) cell_ituss_key_t_ParamLimits

0x0148,	// (0x0003a449) cell_ituss_key_t

0xf450,	// (0x00049751) cell_vkbss_key_3p_pane_g1

0xf458,	// (0x00049759) cell_vkbss_key_3p_pane_g2

0xf460,	// (0x00049761) cell_vkbss_key_3p_pane_g3

0x0002,

0x0151,	// (0x0003a452) cell_vkbss_key_3p_pane_g

0x7cf8,	// (0x00041ff9) bg_popup_fep_char_preview_window_cp02

0xf468,	// (0x00049769) popup_fep_char_pre_window_t1

0xe71c,	// (0x00048a1d) main_ai5_sk_pane

0xee79,	// (0x0004917a) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xee85,	// (0x00049186) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xc813,	// (0x00046b14) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xee98,	// (0x00049199) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfe26,	// (0x0004a127) cell_contacts_ai5_widget_pane_g_ParamLimits

0xeeaa,	// (0x000491ab) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x8664,	// (0x00042965) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf477,	// (0x00049778) main_ai5_sk_pane_g1

0x9fe7,	// (0x000442e8) popup_query_code_window_g1

0x7c6b,	// (0x00041f6c) popup_fep_vkb_icf_pane

0x7c7f,	// (0x00041f80) popup_fep_vtchi_icf_pane

0x8664,	// (0x00042965) bg_icf_pane

0xf480,	// (0x00049781) list_vkb_icf_pane

0x8664,	// (0x00042965) bg_icf_pane_cp01

0xf48c,	// (0x0004978d) vtchi_icf_list_pane

0xf49d,	// (0x0004979e) list_vkb_icf_pane_t1_ParamLimits

0xf49d,	// (0x0004979e) list_vkb_icf_pane_t1

0xf4b3,	// (0x000497b4) vtchi_icf_list_pane_t1_ParamLimits

0xf4b3,	// (0x000497b4) vtchi_icf_list_pane_t1

0x7c55,	// (0x00041f56) popup_fep_ituss_window_ParamLimits

0x7c7f,	// (0x00041f80) popup_fep_vtchi_icf_pane_ParamLimits

0xf2a2,	// (0x000495a3) ituss_keypad_pane_ParamLimits

0x7c95,	// (0x00041f96) ituss_sks_pane

0x8664,	// (0x00042965) bg_icf_pane_ParamLimits

0x7c3e,	// (0x00041f3f) icf_edit_indi_pane_ParamLimits

0x7c3e,	// (0x00041f3f) icf_edit_indi_pane

0xf480,	// (0x00049781) list_vkb_icf_pane_ParamLimits

0x8664,	// (0x00042965) bg_icf_pane_cp01_ParamLimits

0x7c3e,	// (0x00041f3f) icf_edit_indi_pane_cp01_ParamLimits

0x7c3e,	// (0x00041f3f) icf_edit_indi_pane_cp01

0xf494,	// (0x00049795) vtchi_query_pane

0xc3b1,	// (0x000466b2) icf_edit_indi_pane_g1_ParamLimits

0xc3b1,	// (0x000466b2) icf_edit_indi_pane_g1

0xf537,	// (0x00049838) icf_edit_indi_pane_g2_ParamLimits

0xf537,	// (0x00049838) icf_edit_indi_pane_g2

0x0001,

0xfe2d,	// (0x0004a12e) icf_edit_indi_pane_g_ParamLimits

0xfe2d,	// (0x0004a12e) icf_edit_indi_pane_g

0xf546,	// (0x00049847) icf_edit_indi_pane_t1

0xf4cd,	// (0x000497ce) bg_input_focus_pane_cp042

0x8587,	// (0x00042888) vtchi_button_pane

0xf4d6,	// (0x000497d7) vtchi_query_pane_t1

0xf4e4,	// (0x000497e5) vtchi_query_pane_t2

0xf4f2,	// (0x000497f3) vtchi_query_pane_t3

0x0002,

0x0158,	// (0x0003a459) vtchi_query_pane_t

0x7cf8,	// (0x00041ff9) bg_button_pane_cp13

0xf500,	// (0x00049801) vtchi_button_pane_g1

0xf508,	// (0x00049809) ituss_sks_pane_g1

0xf513,	// (0x00049814) ituss_sks_pane_g2

0x0001,

0x015f,	// (0x0003a460) ituss_sks_pane_g

0xf51b,	// (0x0004981c) ituss_sks_pane_t1

0xf529,	// (0x0004982a) ituss_sks_pane_t2

0x0001,

0x0164,	// (0x0003a465) ituss_sks_pane_t

0xbb9e,	// (0x00045e9f) indicator_nsta_pane_cp_g1

0xbba7,	// (0x00045ea8) indicator_nsta_pane_cp_g2

0xbbaf,	// (0x00045eb0) indicator_nsta_pane_cp_g3

0xbbb7,	// (0x00045eb8) indicator_nsta_pane_cp_g4

0xbbb7,	// (0x00045eb8) indicator_nsta_pane_cp_g5

0xbbb7,	// (0x00045eb8) indicator_nsta_pane_cp_g6

0x0005,

0xfaaa,	// (0x00049dab) indicator_nsta_pane_cp_g

0xe2e1,	// (0x000485e2) cell_graphic2_pane_t2_ParamLimits

0xe2e1,	// (0x000485e2) cell_graphic2_pane_t2

0x0001,

0xfda2,	// (0x0004a0a3) cell_graphic2_pane_t_ParamLimits

0xfda2,	// (0x0004a0a3) cell_graphic2_pane_t

0xe30e,	// (0x0004860f) cell_graphic2_control_pane_t1

0x8d98,	// (0x00043099) signal_pane_g3_ParamLimits

0x8d98,	// (0x00043099) signal_pane_g3

0x8daa,	// (0x000430ab) signal_pane_g4_ParamLimits

0x8daa,	// (0x000430ab) signal_pane_g4

0xf27c,	// (0x0004957d) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf27c,	// (0x0004957d) cell_ai5_widget_list_row_pane_t3

0xf35f,	// (0x00049660) cell_ituss_key_pane_t1_ParamLimits

0xf35f,	// (0x00049660) cell_ituss_key_pane_t1

0x9c2e,	// (0x00043f2f) form_field_data_wide_pane_vc_t2_ParamLimits

0x9c2e,	// (0x00043f2f) form_field_data_wide_pane_vc_t2

0x9c42,	// (0x00043f43) form_field_data_wide_pane_vc_t3_ParamLimits

0x9c42,	// (0x00043f43) form_field_data_wide_pane_vc_t3

0x0002,

0xf814,	// (0x00049b15) form_field_data_wide_pane_vc_t_ParamLimits

0xf814,	// (0x00049b15) form_field_data_wide_pane_vc_t

0xb856,	// (0x00045b57) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb856,	// (0x00045b57) form_field_slider_wide_pane_vc_t3

0xb934,	// (0x00045c35) form_field_popup_wide_pane_vc_t2_ParamLimits

0xb934,	// (0x00045c35) form_field_popup_wide_pane_vc_t2

0xb94b,	// (0x00045c4c) form_field_popup_wide_pane_vc_t3_ParamLimits

0xb94b,	// (0x00045c4c) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa99,	// (0x00049d9a) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa99,	// (0x00049d9a) form_field_popup_wide_pane_vc_t

0x7b4f,	// (0x00041e50) aid_fshwr2_btn_pane_ParamLimits

0x7b5b,	// (0x00041e5c) aid_fshwr2_syb_pane_ParamLimits

0x7b6c,	// (0x00041e6d) aid_fshwr2_txt_pane_ParamLimits

0x8664,	// (0x00042965) fshwr2_bg_pane_ParamLimits

0x7b78,	// (0x00041e79) fshwr2_func_candi_pane_ParamLimits

0x7b90,	// (0x00041e91) fshwr2_hwr_syb_pane_ParamLimits

0x7ba7,	// (0x00041ea8) fshwr2_icf_pane_ParamLimits
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

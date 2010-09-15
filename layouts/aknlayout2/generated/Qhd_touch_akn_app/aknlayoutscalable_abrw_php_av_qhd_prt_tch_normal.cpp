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

#include "aknlayoutscalable_abrw_php_av_qhd_prt_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_php_av_qhd_prt_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0000bb38 };

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
0x6b38,	// (0x00012670) Screen

0x6b44,	// (0x0001267c) application_window_ParamLimits

0x6b44,	// (0x0001267c) application_window

0x3ae6,	// (0x0000f61e) screen_g1

0x4529,	// (0x00010061) area_bottom_pane_ParamLimits

0x4529,	// (0x00010061) area_bottom_pane

0x45e9,	// (0x00010121) area_top_pane_ParamLimits

0x45e9,	// (0x00010121) area_top_pane

0x4687,	// (0x000101bf) main_pane_ParamLimits

0x4687,	// (0x000101bf) main_pane

0x6b54,	// (0x0001268c) misc_graphics

0x8cde,	// (0x00014816) battery_pane_ParamLimits

0x8cde,	// (0x00014816) battery_pane

0x9ac1,	// (0x000155f9) bg_status_flat_pane_g8

0x9ac9,	// (0x00015601) bg_status_flat_pane_g9

0x8da6,	// (0x000148de) context_pane_ParamLimits

0x8da6,	// (0x000148de) context_pane

0x8ebc,	// (0x000149f4) navi_pane_ParamLimits

0x8ebc,	// (0x000149f4) navi_pane

0x8f40,	// (0x00014a78) signal_pane_ParamLimits

0x8f40,	// (0x00014a78) signal_pane

0x0008,

0xf84a,	// (0x0001b382) bg_status_flat_pane_g

0x8fad,	// (0x00014ae5) status_pane_g1_ParamLimits

0x8fad,	// (0x00014ae5) status_pane_g1

0x8fc1,	// (0x00014af9) status_pane_g2_ParamLimits

0x8fc1,	// (0x00014af9) status_pane_g2

0x8fcd,	// (0x00014b05) status_pane_g3_ParamLimits

0x8fcd,	// (0x00014b05) status_pane_g3

0x0004,

0xf776,	// (0x0001b2ae) status_pane_g_ParamLimits

0xf776,	// (0x0001b2ae) status_pane_g

0x9001,	// (0x00014b39) title_pane_ParamLimits

0x9001,	// (0x00014b39) title_pane

0x903e,	// (0x00014b76) uni_indicator_pane_ParamLimits

0x903e,	// (0x00014b76) uni_indicator_pane

0x8bfe,	// (0x00014736) bg_list_pane_ParamLimits

0x8bfe,	// (0x00014736) bg_list_pane

0x8c1e,	// (0x00014756) find_pane

0x8c26,	// (0x0001475e) listscroll_app_pane_ParamLimits

0x8c26,	// (0x0001475e) listscroll_app_pane

0x8c32,	// (0x0001476a) listscroll_form_pane

0x4f68,	// (0x00010aa0) listscroll_gen_pane_ParamLimits

0x4f68,	// (0x00010aa0) listscroll_gen_pane

0x4f7c,	// (0x00010ab4) listscroll_set_pane

0x7da9,	// (0x000138e1) main_idle_act_pane

0x88fa,	// (0x00014432) main_idle_trad_pane

0x88fa,	// (0x00014432) main_list_empty_pane

0x8c26,	// (0x0001475e) main_midp_pane

0x8c4c,	// (0x00014784) main_pane_g1_ParamLimits

0x8c4c,	// (0x00014784) main_pane_g1

0x4f92,	// (0x00010aca) popup_ai_message_window_ParamLimits

0x4f92,	// (0x00010aca) popup_ai_message_window

0x5038,	// (0x00010b70) popup_fep_china_uni_window_ParamLimits

0x5038,	// (0x00010b70) popup_fep_china_uni_window

0x5094,	// (0x00010bcc) popup_fep_japan_candidate_window_ParamLimits

0x5094,	// (0x00010bcc) popup_fep_japan_candidate_window

0x50b4,	// (0x00010bec) popup_fep_japan_predictive_window_ParamLimits

0x50b4,	// (0x00010bec) popup_fep_japan_predictive_window

0x50e4,	// (0x00010c1c) popup_find_window

0x50f1,	// (0x00010c29) popup_grid_graphic_window_ParamLimits

0x50f1,	// (0x00010c29) popup_grid_graphic_window

0x511d,	// (0x00010c55) popup_large_graphic_colour_window

0x5143,	// (0x00010c7b) popup_menu_window_ParamLimits

0x5143,	// (0x00010c7b) popup_menu_window

0x52fb,	// (0x00010e33) popup_note_image_window

0x52e7,	// (0x00010e1f) popup_note_wait_window_ParamLimits

0x52e7,	// (0x00010e1f) popup_note_wait_window

0x52e7,	// (0x00010e1f) popup_note_window_ParamLimits

0x52e7,	// (0x00010e1f) popup_note_window

0x5351,	// (0x00010e89) popup_query_code_window_ParamLimits

0x5351,	// (0x00010e89) popup_query_code_window

0x5365,	// (0x00010e9d) popup_query_data_code_window_ParamLimits

0x5365,	// (0x00010e9d) popup_query_data_code_window

0x5382,	// (0x00010eba) popup_query_data_window_ParamLimits

0x5382,	// (0x00010eba) popup_query_data_window

0x539e,	// (0x00010ed6) popup_query_sat_info_window_ParamLimits

0x539e,	// (0x00010ed6) popup_query_sat_info_window

0x53d7,	// (0x00010f0f) popup_snote_single_graphic_window_ParamLimits

0x53d7,	// (0x00010f0f) popup_snote_single_graphic_window

0x53d7,	// (0x00010f0f) popup_snote_single_text_window_ParamLimits

0x53d7,	// (0x00010f0f) popup_snote_single_text_window

0x53ec,	// (0x00010f24) popup_sub_window_general

0x551c,	// (0x00011054) popup_window_general_ParamLimits

0x551c,	// (0x00011054) popup_window_general

0x8c62,	// (0x0001479a) power_save_pane

0x4dee,	// (0x00010926) control_pane_g1_ParamLimits

0x4dee,	// (0x00010926) control_pane_g1

0x4e15,	// (0x0001094d) control_pane_g2_ParamLimits

0x4e15,	// (0x0001094d) control_pane_g2

0x8bc1,	// (0x000146f9) control_pane_g3_ParamLimits

0x8bc1,	// (0x000146f9) control_pane_g3

0x0007,

0xf75e,	// (0x0001b296) control_pane_g_ParamLimits

0xf75e,	// (0x0001b296) control_pane_g

0x4e5f,	// (0x00010997) control_pane_t1_ParamLimits

0x4e5f,	// (0x00010997) control_pane_t1

0x4eb5,	// (0x000109ed) control_pane_t2_ParamLimits

0x4eb5,	// (0x000109ed) control_pane_t2

0x0002,

0xf76f,	// (0x0001b2a7) control_pane_t_ParamLimits

0xf76f,	// (0x0001b2a7) control_pane_t

0x8ae6,	// (0x0001461e) navi_navi_volume_pane_cp1

0x8aee,	// (0x00014626) status_small_icon_pane

0x8af6,	// (0x0001462e) status_small_pane_g1_ParamLimits

0x8af6,	// (0x0001462e) status_small_pane_g1

0x8b2a,	// (0x00014662) status_small_pane_g2_ParamLimits

0x8b2a,	// (0x00014662) status_small_pane_g2

0x8b36,	// (0x0001466e) status_small_pane_g3_ParamLimits

0x8b36,	// (0x0001466e) status_small_pane_g3

0x8b42,	// (0x0001467a) status_small_pane_g4_ParamLimits

0x8b42,	// (0x0001467a) status_small_pane_g4

0x8b4e,	// (0x00014686) status_small_pane_g5_ParamLimits

0x8b4e,	// (0x00014686) status_small_pane_g5

0x8b5c,	// (0x00014694) status_small_pane_g6_ParamLimits

0x8b5c,	// (0x00014694) status_small_pane_g6

0x0007,

0xf74d,	// (0x0001b285) status_small_pane_g_ParamLimits

0xf74d,	// (0x0001b285) status_small_pane_g

0x8b8b,	// (0x000146c3) status_small_pane_t1

0x8bad,	// (0x000146e5) status_small_wait_pane_ParamLimits

0x8bad,	// (0x000146e5) status_small_wait_pane

0x82e8,	// (0x00013e20) aid_levels_signal_ParamLimits

0x82e8,	// (0x00013e20) aid_levels_signal

0x82fa,	// (0x00013e32) signal_pane_g1_ParamLimits

0x82fa,	// (0x00013e32) signal_pane_g1

0x830f,	// (0x00013e47) signal_pane_g2_ParamLimits

0x830f,	// (0x00013e47) signal_pane_g2

0x0003,

0xf6de,	// (0x0001b216) signal_pane_g_ParamLimits

0xf6de,	// (0x0001b216) signal_pane_g

0x834a,	// (0x00013e82) context_pane_g1

0x6b5e,	// (0x00012696) title_pane_g1

0x6b94,	// (0x000126cc) title_pane_t1

0x6bfc,	// (0x00012734) title_pane_t2

0x6c22,	// (0x0001275a) title_pane_t3

0x0002,

0xf532,	// (0x0001b06a) title_pane_t

0x9056,	// (0x00014b8e) aid_levels_battery_ParamLimits

0x9056,	// (0x00014b8e) aid_levels_battery

0x906a,	// (0x00014ba2) battery_pane_g1_ParamLimits

0x906a,	// (0x00014ba2) battery_pane_g1

0x9080,	// (0x00014bb8) battery_pane_g2_ParamLimits

0x9080,	// (0x00014bb8) battery_pane_g2

0x0001,

0xf781,	// (0x0001b2b9) battery_pane_g_ParamLimits

0xf781,	// (0x0001b2b9) battery_pane_g

0xa3f7,	// (0x00015f2f) uni_indicator_pane_g1

0xa40d,	// (0x00015f45) uni_indicator_pane_g2

0xa423,	// (0x00015f5b) uni_indicator_pane_g3

0x0005,

0xf8f2,	// (0x0001b42a) uni_indicator_pane_g

0x876f,	// (0x000142a7) navi_icon_pane_ParamLimits

0x876f,	// (0x000142a7) navi_icon_pane

0x86b8,	// (0x000141f0) navi_midp_pane

0x878b,	// (0x000142c3) navi_navi_pane

0x8795,	// (0x000142cd) navi_text_pane_ParamLimits

0x8795,	// (0x000142cd) navi_text_pane

0x3ae6,	// (0x0000f61e) status_small_wait_pane_g1

0x7091,	// (0x00012bc9) status_small_wait_pane_g2

0x0001,

0xf8ed,	// (0x0001b425) status_small_wait_pane_g

0xa11c,	// (0x00015c54) navi_navi_icon_text_pane

0xa124,	// (0x00015c5c) navi_navi_pane_g1_ParamLimits

0xa124,	// (0x00015c5c) navi_navi_pane_g1

0xa136,	// (0x00015c6e) navi_navi_pane_g2_ParamLimits

0xa136,	// (0x00015c6e) navi_navi_pane_g2

0x0001,

0xf8bb,	// (0x0001b3f3) navi_navi_pane_g_ParamLimits

0xf8bb,	// (0x0001b3f3) navi_navi_pane_g

0xa148,	// (0x00015c80) navi_navi_tabs_pane

0xa151,	// (0x00015c89) navi_navi_text_pane

0xa11c,	// (0x00015c54) navi_navi_volume_pane

0xa0f8,	// (0x00015c30) navi_text_pane_t1

0xa0ec,	// (0x00015c24) navi_icon_pane_g1

0xa03f,	// (0x00015b77) navi_navi_text_pane_t1

0x5834,	// (0x0001136c) navi_navi_volume_pane_g1

0x583c,	// (0x00011374) volume_small_pane

0x9fa5,	// (0x00015add) navi_navi_icon_text_pane_g1

0x9fad,	// (0x00015ae5) navi_navi_icon_text_pane_t1

0x878b,	// (0x000142c3) navi_tabs_2_long_pane

0x878b,	// (0x000142c3) navi_tabs_2_pane

0x878b,	// (0x000142c3) navi_tabs_3_long_pane

0x878b,	// (0x000142c3) navi_tabs_3_pane

0x878b,	// (0x000142c3) navi_tabs_4_pane

0x5814,	// (0x0001134c) tabs_2_active_pane_ParamLimits

0x5814,	// (0x0001134c) tabs_2_active_pane

0x5824,	// (0x0001135c) tabs_2_passive_pane_ParamLimits

0x5824,	// (0x0001135c) tabs_2_passive_pane

0x57e2,	// (0x0001131a) tabs_3_active_pane_ParamLimits

0x57e2,	// (0x0001131a) tabs_3_active_pane

0x57f2,	// (0x0001132a) tabs_3_passive_pane_ParamLimits

0x57f2,	// (0x0001132a) tabs_3_passive_pane

0x5803,	// (0x0001133b) tabs_3_passive_pane_cp_ParamLimits

0x5803,	// (0x0001133b) tabs_3_passive_pane_cp

0x579e,	// (0x000112d6) tabs_4_active_pane_ParamLimits

0x579e,	// (0x000112d6) tabs_4_active_pane

0x57af,	// (0x000112e7) tabs_4_passive_pane_ParamLimits

0x57af,	// (0x000112e7) tabs_4_passive_pane

0x57c0,	// (0x000112f8) tabs_4_passive_pane_cp_ParamLimits

0x57c0,	// (0x000112f8) tabs_4_passive_pane_cp

0x57d1,	// (0x00011309) tabs_4_passive_pane_cp2_ParamLimits

0x57d1,	// (0x00011309) tabs_4_passive_pane_cp2

0x577a,	// (0x000112b2) tabs_2_long_active_pane_ParamLimits

0x577a,	// (0x000112b2) tabs_2_long_active_pane

0x578c,	// (0x000112c4) tabs_2_long_passive_pane_ParamLimits

0x578c,	// (0x000112c4) tabs_2_long_passive_pane

0x573b,	// (0x00011273) tabs_3_long_active_pane_ParamLimits

0x573b,	// (0x00011273) tabs_3_long_active_pane

0x574e,	// (0x00011286) tabs_3_long_passive_pane_ParamLimits

0x574e,	// (0x00011286) tabs_3_long_passive_pane

0x5767,	// (0x0001129f) tabs_3_long_passive_pane_cp_ParamLimits

0x5767,	// (0x0001129f) tabs_3_long_passive_pane_cp

0x56e1,	// (0x00011219) volume_small_pane_g1

0x56ea,	// (0x00011222) volume_small_pane_g2

0x56f3,	// (0x0001122b) volume_small_pane_g3

0x56fc,	// (0x00011234) volume_small_pane_g4

0x5705,	// (0x0001123d) volume_small_pane_g5

0x570e,	// (0x00011246) volume_small_pane_g6

0x5717,	// (0x0001124f) volume_small_pane_g7

0x5720,	// (0x00011258) volume_small_pane_g8

0x5729,	// (0x00011261) volume_small_pane_g9

0x5732,	// (0x0001126a) volume_small_pane_g10

0x0009,

0xf887,	// (0x0001b3bf) volume_small_pane_g

0x6c34,	// (0x0001276c) bg_active_tab_pane_cp2_ParamLimits

0x6c34,	// (0x0001276c) bg_active_tab_pane_cp2

0x6c42,	// (0x0001277a) tabs_3_active_pane_g1

0x6c4a,	// (0x00012782) tabs_3_active_pane_t1

0x6c34,	// (0x0001276c) bg_passive_tab_pane_cp2_ParamLimits

0x6c34,	// (0x0001276c) bg_passive_tab_pane_cp2

0x6c42,	// (0x0001277a) tabs_3_passive_pane_g1

0x6c4a,	// (0x00012782) tabs_3_passive_pane_t1

0x6c34,	// (0x0001276c) bg_active_tab_pane_cp3_ParamLimits

0x6c34,	// (0x0001276c) bg_active_tab_pane_cp3

0x6c5c,	// (0x00012794) tabs_4_active_pane_g1

0x6c64,	// (0x0001279c) tabs_4_active_pane_t1

0x6c34,	// (0x0001276c) bg_passive_tab_pane_cp3_ParamLimits

0x6c34,	// (0x0001276c) bg_passive_tab_pane_cp3

0x6c5c,	// (0x00012794) tabs_4_1_passive_pane_g1

0x6c64,	// (0x0001279c) tabs_4_1_passive_pane_t1

0x8c26,	// (0x0001475e) list_highlight_pane_cp2

0xa67c,	// (0x000161b4) list_set_pane_ParamLimits

0xa67c,	// (0x000161b4) list_set_pane

0xa722,	// (0x0001625a) main_pane_set_t1_ParamLimits

0xa722,	// (0x0001625a) main_pane_set_t1

0xa742,	// (0x0001627a) main_pane_set_t2_ParamLimits

0xa742,	// (0x0001627a) main_pane_set_t2

0xa756,	// (0x0001628e) main_pane_set_t3_ParamLimits

0xa756,	// (0x0001628e) main_pane_set_t3

0xa768,	// (0x000162a0) main_pane_set_t4_ParamLimits

0xa768,	// (0x000162a0) main_pane_set_t4

0x0003,

0xf957,	// (0x0001b48f) main_pane_set_t_ParamLimits

0xf957,	// (0x0001b48f) main_pane_set_t

0xa77a,	// (0x000162b2) setting_code_pane

0xa786,	// (0x000162be) setting_slider_graphic_pane

0xa786,	// (0x000162be) setting_slider_pane

0xa786,	// (0x000162be) setting_text_pane

0xa786,	// (0x000162be) setting_volume_pane

0x48d6,	// (0x0001040e) volume_set_pane

0x6c34,	// (0x0001276c) bg_set_opt_pane_cp

0x48de,	// (0x00010416) setting_slider_pane_t1

0x48f7,	// (0x0001042f) setting_slider_pane_t2

0x4911,	// (0x00010449) setting_slider_pane_t3

0x0002,

0xf539,	// (0x0001b071) setting_slider_pane_t

0x4929,	// (0x00010461) slider_set_pane

0x6b54,	// (0x0001268c) bg_set_opt_pane_cp2

0x6c76,	// (0x000127ae) setting_slider_graphic_pane_g1

0x493f,	// (0x00010477) setting_slider_graphic_pane_t1

0x494f,	// (0x00010487) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x0001b078) setting_slider_graphic_pane_t

0x495f,	// (0x00010497) slider_set_pane_cp

0x6b54,	// (0x0001268c) input_focus_pane_cp1

0xa63b,	// (0x00016173) list_set_text_pane

0x3ae6,	// (0x0000f61e) setting_text_pane_g1

0x6b54,	// (0x0001268c) input_focus_pane_cp2

0x3ae6,	// (0x0000f61e) setting_code_pane_g1

0x6c7f,	// (0x000127b7) setting_code_pane_t1

0x6c8d,	// (0x000127c5) set_text_pane_t1_ParamLimits

0x6c8d,	// (0x000127c5) set_text_pane_t1

0x7b61,	// (0x00013699) set_opt_bg_pane_g1

0x7b69,	// (0x000136a1) set_opt_bg_pane_g2

0xa615,	// (0x0001614d) set_opt_bg_pane_g3

0x7b79,	// (0x000136b1) set_opt_bg_pane_g4

0x7b81,	// (0x000136b9) set_opt_bg_pane_g5

0x7b89,	// (0x000136c1) set_opt_bg_pane_g6

0xa61f,	// (0x00016157) set_opt_bg_pane_g7

0xa627,	// (0x0001615f) set_opt_bg_pane_g8

0xa631,	// (0x00016169) set_opt_bg_pane_g9

0x0008,

0xf944,	// (0x0001b47c) set_opt_bg_pane_g

0xa608,	// (0x00016140) slider_set_pane_g1

0x58a9,	// (0x000113e1) slider_set_pane_g2

0x0006,

0xf935,	// (0x0001b46d) slider_set_pane_g

0x5845,	// (0x0001137d) volume_set_pane_g1

0x584d,	// (0x00011385) volume_set_pane_g2

0x5855,	// (0x0001138d) volume_set_pane_g3

0x585d,	// (0x00011395) volume_set_pane_g4

0x5865,	// (0x0001139d) volume_set_pane_g5

0x586d,	// (0x000113a5) volume_set_pane_g6

0x5875,	// (0x000113ad) volume_set_pane_g7

0x587d,	// (0x000113b5) volume_set_pane_g8

0x5885,	// (0x000113bd) volume_set_pane_g9

0x588d,	// (0x000113c5) volume_set_pane_g10

0x0009,

0xf90d,	// (0x0001b445) volume_set_pane_g

0x6ca7,	// (0x000127df) indicator_pane_ParamLimits

0x6ca7,	// (0x000127df) indicator_pane

0x6cb3,	// (0x000127eb) main_idle_pane_g2_ParamLimits

0x6cb3,	// (0x000127eb) main_idle_pane_g2

0x6cdb,	// (0x00012813) main_pane_idle_g1_ParamLimits

0x6cdb,	// (0x00012813) main_pane_idle_g1

0x6ce8,	// (0x00012820) popup_clock_digital_analogue_window_ParamLimits

0x6ce8,	// (0x00012820) popup_clock_digital_analogue_window

0x6cff,	// (0x00012837) soft_indicator_pane_ParamLimits

0x6cff,	// (0x00012837) soft_indicator_pane

0x6d0b,	// (0x00012843) wallpaper_pane_ParamLimits

0x6d0b,	// (0x00012843) wallpaper_pane

0x3ae6,	// (0x0000f61e) wallpaper_pane_g1

0x6d1f,	// (0x00012857) indicator_pane_g1_ParamLimits

0x6d1f,	// (0x00012857) indicator_pane_g1

0xab27,	// (0x0001665f) navi_navi_icon_text_pane_srt_g1

0x6d3a,	// (0x00012872) soft_indicator_pane_t1

0x6d54,	// (0x0001288c) aid_ps_area_pane

0x6d65,	// (0x0001289d) aid_ps_clock_pane

0x6d73,	// (0x000128ab) aid_ps_indicator_pane

0x6d7f,	// (0x000128b7) indicator_ps_pane_ParamLimits

0x6d7f,	// (0x000128b7) indicator_ps_pane

0x6d8e,	// (0x000128c6) power_save_pane_g1_ParamLimits

0x6d8e,	// (0x000128c6) power_save_pane_g1

0x6d9a,	// (0x000128d2) power_save_pane_g2_ParamLimits

0x6d9a,	// (0x000128d2) power_save_pane_g2

0x44dd,	// (0x00010015) aid_navinavi_width_pane

0x6d54,	// (0x0001288c) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x0001b07d) power_save_pane_g_ParamLimits

0xf545,	// (0x0001b07d) power_save_pane_g

0x6da8,	// (0x000128e0) power_save_pane_t1_ParamLimits

0x6da8,	// (0x000128e0) power_save_pane_t1

0x6d65,	// (0x0001289d) aid_ps_clock_pane_ParamLimits

0x6d73,	// (0x000128ab) aid_ps_indicator_pane_ParamLimits

0x6dba,	// (0x000128f2) power_save_pane_t4_ParamLimits

0x6dba,	// (0x000128f2) power_save_pane_t4

0x0001,

0xf54a,	// (0x0001b082) power_save_pane_t_ParamLimits

0xf54a,	// (0x0001b082) power_save_pane_t

0x6de4,	// (0x0001291c) power_save_t3_ParamLimits

0x6de4,	// (0x0001291c) power_save_t3

0x6dcf,	// (0x00012907) power_save_t2_ParamLimits

0x6dcf,	// (0x00012907) power_save_t2

0x6df9,	// (0x00012931) indicator_ps_pane_g1

0x6e02,	// (0x0001293a) ai_gene_pane_ParamLimits

0x6e02,	// (0x0001293a) ai_gene_pane

0x6e0e,	// (0x00012946) ai_links_pane_ParamLimits

0x6e0e,	// (0x00012946) ai_links_pane

0x6e1a,	// (0x00012952) indicator_pane_cp1_ParamLimits

0x6e1a,	// (0x00012952) indicator_pane_cp1

0x6e26,	// (0x0001295e) main_pane_idle_g1_cp_ParamLimits

0x6e26,	// (0x0001295e) main_pane_idle_g1_cp

0x6e32,	// (0x0001296a) popup_ai_links_title_window

0x6e3b,	// (0x00012973) soft_indicator_pane_cp1_ParamLimits

0x6e3b,	// (0x00012973) soft_indicator_pane_cp1

0xa3e5,	// (0x00015f1d) ai_links_pane_g1

0xa3ee,	// (0x00015f26) grid_ai_links_pane

0xa3c8,	// (0x00015f00) ai_gene_pane_1

0xa3d3,	// (0x00015f0b) ai_gene_pane_2

0xa3dc,	// (0x00015f14) list_highlight_pane_cp4

0xa3ac,	// (0x00015ee4) cell_ai_link_pane_ParamLimits

0xa3ac,	// (0x00015ee4) cell_ai_link_pane

0xa3a4,	// (0x00015edc) cell_ai_link_pane_g1

0x7091,	// (0x00012bc9) cell_ai_link_pane_g2

0x0001,

0xf8e8,	// (0x0001b420) cell_ai_link_pane_g

0x6b54,	// (0x0001268c) grid_highlight_cp2

0x6b54,	// (0x0001268c) bg_popup_sub_pane_cp1

0x6e55,	// (0x0001298d) popup_ai_links_title_window_t1

0xa2f2,	// (0x00015e2a) ai_gene_pane_1_g1_ParamLimits

0xa2f2,	// (0x00015e2a) ai_gene_pane_1_g1

0xa2fe,	// (0x00015e36) ai_gene_pane_1_g2_ParamLimits

0xa2fe,	// (0x00015e36) ai_gene_pane_1_g2

0x0001,

0xf8de,	// (0x0001b416) ai_gene_pane_1_g_ParamLimits

0xf8de,	// (0x0001b416) ai_gene_pane_1_g

0xa30b,	// (0x00015e43) ai_gene_pane_1_t1_ParamLimits

0xa30b,	// (0x00015e43) ai_gene_pane_1_t1

0xa33f,	// (0x00015e77) grid_ai_soft_ind_pane

0xa2dd,	// (0x00015e15) ai_gene_pane_2_t1_ParamLimits

0xa2dd,	// (0x00015e15) ai_gene_pane_2_t1

0x6e64,	// (0x0001299c) main_pane_empty_t1_ParamLimits

0x6e64,	// (0x0001299c) main_pane_empty_t1

0x6e7c,	// (0x000129b4) main_pane_empty_t2_ParamLimits

0x6e7c,	// (0x000129b4) main_pane_empty_t2

0x6e91,	// (0x000129c9) main_pane_empty_t3_ParamLimits

0x6e91,	// (0x000129c9) main_pane_empty_t3

0x6ea3,	// (0x000129db) main_pane_empty_t4_ParamLimits

0x6ea3,	// (0x000129db) main_pane_empty_t4

0x6eb5,	// (0x000129ed) main_pane_empty_t5_ParamLimits

0x6eb5,	// (0x000129ed) main_pane_empty_t5

0x0004,

0xf54f,	// (0x0001b087) main_pane_empty_t_ParamLimits

0xf54f,	// (0x0001b087) main_pane_empty_t

0x7cd4,	// (0x0001380c) bg_popup_window_pane_ParamLimits

0x7cd4,	// (0x0001380c) bg_popup_window_pane

0xa04d,	// (0x00015b85) find_popup_pane_cp2_ParamLimits

0xa04d,	// (0x00015b85) find_popup_pane_cp2

0xa059,	// (0x00015b91) heading_pane_ParamLimits

0xa059,	// (0x00015b91) heading_pane

0x6b54,	// (0x0001268c) bg_popup_sub_pane

0x9fc7,	// (0x00015aff) bg_popup_window_pane_g1_ParamLimits

0x9fc7,	// (0x00015aff) bg_popup_window_pane_g1

0x9fd3,	// (0x00015b0b) bg_popup_window_pane_g2_ParamLimits

0x9fd3,	// (0x00015b0b) bg_popup_window_pane_g2

0x9fdf,	// (0x00015b17) bg_popup_window_pane_g3_ParamLimits

0x9fdf,	// (0x00015b17) bg_popup_window_pane_g3

0x9feb,	// (0x00015b23) bg_popup_window_pane_g4_ParamLimits

0x9feb,	// (0x00015b23) bg_popup_window_pane_g4

0x9ff7,	// (0x00015b2f) bg_popup_window_pane_g5_ParamLimits

0x9ff7,	// (0x00015b2f) bg_popup_window_pane_g5

0xa003,	// (0x00015b3b) bg_popup_window_pane_g6_ParamLimits

0xa003,	// (0x00015b3b) bg_popup_window_pane_g6

0xa00f,	// (0x00015b47) bg_popup_window_pane_g7_ParamLimits

0xa00f,	// (0x00015b47) bg_popup_window_pane_g7

0xa01b,	// (0x00015b53) bg_popup_window_pane_g8_ParamLimits

0xa01b,	// (0x00015b53) bg_popup_window_pane_g8

0xa027,	// (0x00015b5f) bg_popup_window_pane_g9_ParamLimits

0xa027,	// (0x00015b5f) bg_popup_window_pane_g9

0xa033,	// (0x00015b6b) bg_popup_window_pane_g10_ParamLimits

0xa033,	// (0x00015b6b) bg_popup_window_pane_g10

0x0009,

0xf8a6,	// (0x0001b3de) bg_popup_window_pane_g_ParamLimits

0xf8a6,	// (0x0001b3de) bg_popup_window_pane_g

0x9f5c,	// (0x00015a94) bg_popup_heading_pane_ParamLimits

0x9f5c,	// (0x00015a94) bg_popup_heading_pane

0x5931,	// (0x00011469) tabs_4_passive_pane_cp_srt_ParamLimits

0x5931,	// (0x00011469) tabs_4_passive_pane_cp_srt

0x5943,	// (0x0001147b) tabs_4_passive_pane_srt_ParamLimits

0x9f70,	// (0x00015aa8) heading_pane_g2

0x5943,	// (0x0001147b) tabs_4_passive_pane_srt

0x8c26,	// (0x0001475e) bg_passive_tab_pane_cp3_srt_ParamLimits

0x8c26,	// (0x0001475e) bg_passive_tab_pane_cp3_srt

0x9f78,	// (0x00015ab0) heading_pane_t1_ParamLimits

0x9f78,	// (0x00015ab0) heading_pane_t1

0x9f8f,	// (0x00015ac7) heading_pane_t2_ParamLimits

0x9f8f,	// (0x00015ac7) heading_pane_t2

0x0001,

0xf8a1,	// (0x0001b3d9) heading_pane_t_ParamLimits

0xf8a1,	// (0x0001b3d9) heading_pane_t

0x9a89,	// (0x000155c1) bg_popup_heading_pane_g1

0x9b38,	// (0x00015670) bg_popup_heading_pane_g2

0x9b42,	// (0x0001567a) bg_popup_heading_pane_g3

0x9b4c,	// (0x00015684) bg_popup_heading_pane_g4

0x9b56,	// (0x0001568e) bg_popup_heading_pane_g5

0x9b60,	// (0x00015698) bg_popup_heading_pane_g6

0x9b68,	// (0x000156a0) bg_popup_heading_pane_g7

0x9b70,	// (0x000156a8) bg_popup_heading_pane_g8

0x9b7a,	// (0x000156b2) bg_popup_heading_pane_g9

0x0008,

0xf85d,	// (0x0001b395) bg_popup_heading_pane_g

0x916e,	// (0x00014ca6) bg_popup_sub_pane_g1

0x917e,	// (0x00014cb6) bg_popup_sub_pane_g2

0x9176,	// (0x00014cae) bg_popup_sub_pane_g3

0x918e,	// (0x00014cc6) bg_popup_sub_pane_g4

0x9186,	// (0x00014cbe) bg_popup_sub_pane_g5

0x9196,	// (0x00014cce) bg_popup_sub_pane_g6

0x919e,	// (0x00014cd6) bg_popup_sub_pane_g7

0x91ae,	// (0x00014ce6) bg_popup_sub_pane_g8

0x91a6,	// (0x00014cde) bg_popup_sub_pane_g9

0x0008,

0xf837,	// (0x0001b36f) bg_popup_sub_pane_g

0x6ec9,	// (0x00012a01) bg_popup_window_pane_cp5_ParamLimits

0x6ec9,	// (0x00012a01) bg_popup_window_pane_cp5

0x6ee5,	// (0x00012a1d) popup_note_window_g1_ParamLimits

0x6ee5,	// (0x00012a1d) popup_note_window_g1

0x6ef1,	// (0x00012a29) popup_note_window_t1_ParamLimits

0x6ef1,	// (0x00012a29) popup_note_window_t1

0x6f07,	// (0x00012a3f) popup_note_window_t2_ParamLimits

0x6f07,	// (0x00012a3f) popup_note_window_t2

0x6f1d,	// (0x00012a55) popup_note_window_t3_ParamLimits

0x6f1d,	// (0x00012a55) popup_note_window_t3

0x6f33,	// (0x00012a6b) popup_note_window_t4_ParamLimits

0x6f33,	// (0x00012a6b) popup_note_window_t4

0x6f5b,	// (0x00012a93) popup_note_window_t5_ParamLimits

0x6f5b,	// (0x00012a93) popup_note_window_t5

0x0004,

0xf55a,	// (0x0001b092) popup_note_window_t_ParamLimits

0xf55a,	// (0x0001b092) popup_note_window_t

0x6fa5,	// (0x00012add) bg_popup_window_pane_cp6_ParamLimits

0x6fa5,	// (0x00012add) bg_popup_window_pane_cp6

0x9a05,	// (0x0001553d) popup_note_image_window_g1_ParamLimits

0x9a05,	// (0x0001553d) popup_note_image_window_g1

0x9a11,	// (0x00015549) popup_note_image_window_g2_ParamLimits

0x9a11,	// (0x00015549) popup_note_image_window_g2

0x0001,

0xf82b,	// (0x0001b363) popup_note_image_window_g_ParamLimits

0xf82b,	// (0x0001b363) popup_note_image_window_g

0x9a2a,	// (0x00015562) popup_note_image_window_t1_ParamLimits

0x9a2a,	// (0x00015562) popup_note_image_window_t1

0x9a43,	// (0x0001557b) popup_note_image_window_t2_ParamLimits

0x9a43,	// (0x0001557b) popup_note_image_window_t2

0x9a5c,	// (0x00015594) popup_note_image_window_t3_ParamLimits

0x9a5c,	// (0x00015594) popup_note_image_window_t3

0x0002,

0xf830,	// (0x0001b368) popup_note_image_window_t_ParamLimits

0xf830,	// (0x0001b368) popup_note_image_window_t

0x98c6,	// (0x000153fe) bg_popup_window_pane_cp7_ParamLimits

0x98c6,	// (0x000153fe) bg_popup_window_pane_cp7

0x98f6,	// (0x0001542e) popup_note_wait_window_g1_ParamLimits

0x98f6,	// (0x0001542e) popup_note_wait_window_g1

0x9902,	// (0x0001543a) popup_note_wait_window_g2_ParamLimits

0x9902,	// (0x0001543a) popup_note_wait_window_g2

0x0002,

0xf819,	// (0x0001b351) popup_note_wait_window_g_ParamLimits

0xf819,	// (0x0001b351) popup_note_wait_window_g

0x991a,	// (0x00015452) popup_note_wait_window_t1_ParamLimits

0x991a,	// (0x00015452) popup_note_wait_window_t1

0x9941,	// (0x00015479) popup_note_wait_window_t2_ParamLimits

0x9941,	// (0x00015479) popup_note_wait_window_t2

0x995e,	// (0x00015496) popup_note_wait_window_t3_ParamLimits

0x995e,	// (0x00015496) popup_note_wait_window_t3

0x9971,	// (0x000154a9) popup_note_wait_window_t4_ParamLimits

0x9971,	// (0x000154a9) popup_note_wait_window_t4

0x0004,

0xf820,	// (0x0001b358) popup_note_wait_window_t_ParamLimits

0xf820,	// (0x0001b358) popup_note_wait_window_t

0x9996,	// (0x000154ce) wait_bar_pane_ParamLimits

0x9996,	// (0x000154ce) wait_bar_pane

0x6b54,	// (0x0001268c) wait_anim_pane

0x6b54,	// (0x0001268c) wait_border_pane

0x3ae6,	// (0x0000f61e) wait_anim_pane_g1

0x3ae6,	// (0x0000f61e) wait_anim_pane_g2

0x0001,

0xf6d9,	// (0x0001b211) wait_anim_pane_g

0x986a,	// (0x000153a2) wait_border_pane_g1

0x9875,	// (0x000153ad) wait_border_pane_g2

0x987e,	// (0x000153b6) wait_border_pane_g3

0x0002,

0xf812,	// (0x0001b34a) wait_border_pane_g

0x96d5,	// (0x0001520d) bg_popup_window_pane_cp16_ParamLimits

0x96d5,	// (0x0001520d) bg_popup_window_pane_cp16

0x97d5,	// (0x0001530d) indicator_popup_pane_cp4_ParamLimits

0x97d5,	// (0x0001530d) indicator_popup_pane_cp4

0x97e9,	// (0x00015321) popup_query_data_window_t1_ParamLimits

0x97e9,	// (0x00015321) popup_query_data_window_t1

0x97fb,	// (0x00015333) popup_query_data_window_t2_ParamLimits

0x97fb,	// (0x00015333) popup_query_data_window_t2

0x9814,	// (0x0001534c) popup_query_data_window_t3_ParamLimits

0x9814,	// (0x0001534c) popup_query_data_window_t3

0x0002,

0xf80b,	// (0x0001b343) popup_query_data_window_t_ParamLimits

0xf80b,	// (0x0001b343) popup_query_data_window_t

0x982e,	// (0x00015366) query_popup_data_pane_ParamLimits

0x982e,	// (0x00015366) query_popup_data_pane

0x9842,	// (0x0001537a) query_popup_data_pane_cp1_ParamLimits

0x9842,	// (0x0001537a) query_popup_data_pane_cp1

0x96d5,	// (0x0001520d) bg_popup_window_pane_cp10_ParamLimits

0x96d5,	// (0x0001520d) bg_popup_window_pane_cp10

0x9707,	// (0x0001523f) indicator_popup_pane_ParamLimits

0x9707,	// (0x0001523f) indicator_popup_pane

0x9729,	// (0x00015261) popup_query_code_window_t1_ParamLimits

0x9729,	// (0x00015261) popup_query_code_window_t1

0x9743,	// (0x0001527b) popup_query_code_window_t2_ParamLimits

0x9743,	// (0x0001527b) popup_query_code_window_t2

0x978c,	// (0x000152c4) popup_query_code_window_t3_ParamLimits

0x978c,	// (0x000152c4) popup_query_code_window_t3

0x0002,

0xf804,	// (0x0001b33c) popup_query_code_window_t_ParamLimits

0xf804,	// (0x0001b33c) popup_query_code_window_t

0x97bb,	// (0x000152f3) query_popup_pane_ParamLimits

0x97bb,	// (0x000152f3) query_popup_pane

0x6fa5,	// (0x00012add) bg_popup_window_pane_cp15_ParamLimits

0x6fa5,	// (0x00012add) bg_popup_window_pane_cp15

0x6fc3,	// (0x00012afb) indicator_popup_pane_cp1_ParamLimits

0x6fc3,	// (0x00012afb) indicator_popup_pane_cp1

0x6fd6,	// (0x00012b0e) indicator_popup_pane_cp2_ParamLimits

0x6fd6,	// (0x00012b0e) indicator_popup_pane_cp2

0x6fe9,	// (0x00012b21) popup_query_data_code_window_g1_ParamLimits

0x6fe9,	// (0x00012b21) popup_query_data_code_window_g1

0x6ffc,	// (0x00012b34) popup_query_data_code_window_t1_ParamLimits

0x6ffc,	// (0x00012b34) popup_query_data_code_window_t1

0x700e,	// (0x00012b46) popup_query_data_code_window_t2_ParamLimits

0x700e,	// (0x00012b46) popup_query_data_code_window_t2

0x7020,	// (0x00012b58) popup_query_data_code_window_t3_ParamLimits

0x7020,	// (0x00012b58) popup_query_data_code_window_t3

0x7036,	// (0x00012b6e) popup_query_data_code_window_t4_ParamLimits

0x7036,	// (0x00012b6e) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x0001b09d) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x0001b09d) popup_query_data_code_window_t

0x55f2,	// (0x0001112a) list_single_midp_graphic_pane_g3

0x704e,	// (0x00012b86) query_popup_data_pane_cp2_ParamLimits

0x7061,	// (0x00012b99) query_popup_pane_cp2_ParamLimits

0x7061,	// (0x00012b99) query_popup_pane_cp2

0x6b54,	// (0x0001268c) bg_popup_window_pane_cp11

0x96b9,	// (0x000151f1) heading_pane_cp5

0x96c1,	// (0x000151f9) listscroll_popup_info_pane

0x6b54,	// (0x0001268c) input_focus_pane_cp3

0x7074,	// (0x00012bac) query_popup_pane_t1

0x7082,	// (0x00012bba) list_popup_info_pane_ParamLimits

0x7082,	// (0x00012bba) list_popup_info_pane

0x7091,	// (0x00012bc9) listscroll_popup_info_pane_g1

0x7099,	// (0x00012bd1) scroll_pane_cp7

0x70a3,	// (0x00012bdb) popup_info_list_pane_t1_ParamLimits

0x70a3,	// (0x00012bdb) popup_info_list_pane_t1

0x70bd,	// (0x00012bf5) popup_info_list_pane_t2_ParamLimits

0x70bd,	// (0x00012bf5) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x0001b0a6) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x0001b0a6) popup_info_list_pane_t

0x6b54,	// (0x0001268c) bg_popup_window_pane_cp12

0xab41,	// (0x00016679) find_popup_pane

0x6c34,	// (0x0001276c) bg_popup_window_pane_cp3

0x70d7,	// (0x00012c0f) heading_pane_cp3

0x70e6,	// (0x00012c1e) listscroll_popup_graphic_pane

0x6b54,	// (0x0001268c) bg_popup_window_pane_cp4

0x7146,	// (0x00012c7e) heading_pane_cp4

0x7150,	// (0x00012c88) listscroll_popup_colour_pane

0x7158,	// (0x00012c90) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x7158,	// (0x00012c90) cell_large_graphic_colour_none_popup_pane

0x716c,	// (0x00012ca4) grid_large_graphic_colour_popup_pane_ParamLimits

0x716c,	// (0x00012ca4) grid_large_graphic_colour_popup_pane

0x7190,	// (0x00012cc8) listscroll_popup_colour_pane_g1_ParamLimits

0x7190,	// (0x00012cc8) listscroll_popup_colour_pane_g1

0x71a7,	// (0x00012cdf) listscroll_popup_colour_pane_g2_ParamLimits

0x71a7,	// (0x00012cdf) listscroll_popup_colour_pane_g2

0x71be,	// (0x00012cf6) listscroll_popup_colour_pane_g3_ParamLimits

0x71be,	// (0x00012cf6) listscroll_popup_colour_pane_g3

0x71ce,	// (0x00012d06) listscroll_popup_colour_pane_g4_ParamLimits

0x71ce,	// (0x00012d06) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x0001b0ab) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x0001b0ab) listscroll_popup_colour_pane_g

0x71de,	// (0x00012d16) scroll_pane_cp6_ParamLimits

0x71de,	// (0x00012d16) scroll_pane_cp6

0x71f0,	// (0x00012d28) cell_large_graphic_colour_popup_pane_ParamLimits

0x71f0,	// (0x00012d28) cell_large_graphic_colour_popup_pane

0x720f,	// (0x00012d47) cell_large_graphic_colour_none_popup_pane_t1

0x6b54,	// (0x0001268c) grid_highlight_pane_cp5

0x721e,	// (0x00012d56) cell_large_graphic_colour_popup_pane_g1

0x7226,	// (0x00012d5e) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x0001b0b4) cell_large_graphic_colour_popup_pane_g

0x722e,	// (0x00012d66) cell_large_graphic_colour_popup_pane_g2_copy1

0x7237,	// (0x00012d6f) grid_highlight_pane_cp4

0x723f,	// (0x00012d77) bg_popup_window_pane_cp8_ParamLimits

0x723f,	// (0x00012d77) bg_popup_window_pane_cp8

0x725a,	// (0x00012d92) popup_snote_single_text_window_g1_ParamLimits

0x725a,	// (0x00012d92) popup_snote_single_text_window_g1

0x726c,	// (0x00012da4) popup_snote_single_text_window_t1_ParamLimits

0x726c,	// (0x00012da4) popup_snote_single_text_window_t1

0x727f,	// (0x00012db7) popup_snote_single_text_window_t2_ParamLimits

0x727f,	// (0x00012db7) popup_snote_single_text_window_t2

0x7292,	// (0x00012dca) popup_snote_single_text_window_t3_ParamLimits

0x7292,	// (0x00012dca) popup_snote_single_text_window_t3

0x72cb,	// (0x00012e03) popup_snote_single_text_window_t4_ParamLimits

0x72cb,	// (0x00012e03) popup_snote_single_text_window_t4

0x72ff,	// (0x00012e37) popup_snote_single_text_window_t5_ParamLimits

0x72ff,	// (0x00012e37) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x0001b0b9) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x0001b0b9) popup_snote_single_text_window_t

0x732e,	// (0x00012e66) bg_popup_window_pane_cp9_ParamLimits

0x732e,	// (0x00012e66) bg_popup_window_pane_cp9

0x725a,	// (0x00012d92) popup_snote_single_graphic_window_g1_ParamLimits

0x725a,	// (0x00012d92) popup_snote_single_graphic_window_g1

0x733c,	// (0x00012e74) popup_snote_single_graphic_window_g2_ParamLimits

0x733c,	// (0x00012e74) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x0001b0c4) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x0001b0c4) popup_snote_single_graphic_window_g

0x7348,	// (0x00012e80) popup_snote_single_graphic_window_t1_ParamLimits

0x7348,	// (0x00012e80) popup_snote_single_graphic_window_t1

0x735b,	// (0x00012e93) popup_snote_single_graphic_window_t2_ParamLimits

0x735b,	// (0x00012e93) popup_snote_single_graphic_window_t2

0x736e,	// (0x00012ea6) popup_snote_single_graphic_window_t3_ParamLimits

0x736e,	// (0x00012ea6) popup_snote_single_graphic_window_t3

0x73a7,	// (0x00012edf) popup_snote_single_graphic_window_t4_ParamLimits

0x73a7,	// (0x00012edf) popup_snote_single_graphic_window_t4

0x73db,	// (0x00012f13) popup_snote_single_graphic_window_t5_ParamLimits

0x73db,	// (0x00012f13) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x0001b0c9) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x0001b0c9) popup_snote_single_graphic_window_t

0xaa83,	// (0x000165bb) grid_graphic_popup_pane_ParamLimits

0xaa83,	// (0x000165bb) grid_graphic_popup_pane

0xaaad,	// (0x000165e5) listscroll_popup_graphic_pane_g1_ParamLimits

0xaaad,	// (0x000165e5) listscroll_popup_graphic_pane_g1

0xaac1,	// (0x000165f9) listscroll_popup_graphic_pane_g2_ParamLimits

0xaac1,	// (0x000165f9) listscroll_popup_graphic_pane_g2

0x0001,

0xf981,	// (0x0001b4b9) listscroll_popup_graphic_pane_g_ParamLimits

0xf981,	// (0x0001b4b9) listscroll_popup_graphic_pane_g

0xaad5,	// (0x0001660d) scroll_pane_cp5

0xaa14,	// (0x0001654c) cell_graphic_popup_pane_ParamLimits

0xaa14,	// (0x0001654c) cell_graphic_popup_pane

0xa9f5,	// (0x0001652d) cell_graphic_popup_pane_g1

0xa9fd,	// (0x00016535) cell_graphic_popup_pane_g2

0x722e,	// (0x00012d66) cell_graphic_popup_pane_g3

0x0002,

0xf97a,	// (0x0001b4b2) cell_graphic_popup_pane_g

0xaa06,	// (0x0001653e) cell_graphic_popup_pane_t2

0x7237,	// (0x00012d6f) grid_highlight_pane_cp3

0x741c,	// (0x00012f54) list_gen_pane_ParamLimits

0x741c,	// (0x00012f54) list_gen_pane

0x744e,	// (0x00012f86) scroll_pane

0xa941,	// (0x00016479) bg_list_pane_g1_ParamLimits

0xa941,	// (0x00016479) bg_list_pane_g1

0xa95e,	// (0x00016496) bg_list_pane_g2_ParamLimits

0xa95e,	// (0x00016496) bg_list_pane_g2

0xa973,	// (0x000164ab) bg_list_pane_g3_ParamLimits

0xa973,	// (0x000164ab) bg_list_pane_g3

0xa987,	// (0x000164bf) bg_list_pane_g4_ParamLimits

0xa987,	// (0x000164bf) bg_list_pane_g4

0xa9a7,	// (0x000164df) bg_list_pane_g5_ParamLimits

0xa9a7,	// (0x000164df) bg_list_pane_g5

0x0004,

0xf96f,	// (0x0001b4a7) bg_list_pane_g_ParamLimits

0xf96f,	// (0x0001b4a7) bg_list_pane_g

0xa83f,	// (0x00016377) list_double2_graphic_large_graphic_pane_ParamLimits

0xa83f,	// (0x00016377) list_double2_graphic_large_graphic_pane

0xa83f,	// (0x00016377) list_double2_graphic_pane_ParamLimits

0xa83f,	// (0x00016377) list_double2_graphic_pane

0xa83f,	// (0x00016377) list_double2_large_graphic_pane_ParamLimits

0xa83f,	// (0x00016377) list_double2_large_graphic_pane

0xa83f,	// (0x00016377) list_double2_pane_ParamLimits

0xa83f,	// (0x00016377) list_double2_pane

0xa83f,	// (0x00016377) list_double_graphic_heading_pane_ParamLimits

0xa83f,	// (0x00016377) list_double_graphic_heading_pane

0xa83f,	// (0x00016377) list_double_graphic_pane_ParamLimits

0xa83f,	// (0x00016377) list_double_graphic_pane

0xa83f,	// (0x00016377) list_double_heading_pane_ParamLimits

0xa83f,	// (0x00016377) list_double_heading_pane

0xa83f,	// (0x00016377) list_double_large_graphic_pane_ParamLimits

0xa83f,	// (0x00016377) list_double_large_graphic_pane

0xa83f,	// (0x00016377) list_double_number_pane_ParamLimits

0xa83f,	// (0x00016377) list_double_number_pane

0xa83f,	// (0x00016377) list_double_pane_ParamLimits

0xa83f,	// (0x00016377) list_double_pane

0xa83f,	// (0x00016377) list_double_time_pane_ParamLimits

0xa83f,	// (0x00016377) list_double_time_pane

0xa83f,	// (0x00016377) list_setting_number_pane_ParamLimits

0xa83f,	// (0x00016377) list_setting_number_pane

0xa83f,	// (0x00016377) list_setting_pane_ParamLimits

0xa83f,	// (0x00016377) list_setting_pane

0xa8a8,	// (0x000163e0) list_single_2graphic_pane_ParamLimits

0xa8a8,	// (0x000163e0) list_single_2graphic_pane

0xa8a8,	// (0x000163e0) list_single_graphic_heading_pane_ParamLimits

0xa8a8,	// (0x000163e0) list_single_graphic_heading_pane

0xa8a8,	// (0x000163e0) list_single_graphic_pane_ParamLimits

0xa8a8,	// (0x000163e0) list_single_graphic_pane

0xa8a8,	// (0x000163e0) list_single_heading_pane_ParamLimits

0xa8a8,	// (0x000163e0) list_single_heading_pane

0xa91f,	// (0x00016457) list_single_large_graphic_pane_ParamLimits

0xa91f,	// (0x00016457) list_single_large_graphic_pane

0xa8a8,	// (0x000163e0) list_single_number_heading_pane_ParamLimits

0xa8a8,	// (0x000163e0) list_single_number_heading_pane

0xa8a8,	// (0x000163e0) list_single_number_pane_ParamLimits

0xa8a8,	// (0x000163e0) list_single_number_pane

0xa8a8,	// (0x000163e0) list_single_pane_ParamLimits

0xa8a8,	// (0x000163e0) list_single_pane

0x6b54,	// (0x0001268c) list_highlight_pane_cp1

0x748e,	// (0x00012fc6) list_single_pane_g1_ParamLimits

0x748e,	// (0x00012fc6) list_single_pane_g1

0x749a,	// (0x00012fd2) list_single_pane_g2_ParamLimits

0x749a,	// (0x00012fd2) list_single_pane_g2

0x0001,

0xf5a3,	// (0x0001b0db) list_single_pane_g_ParamLimits

0xf5a3,	// (0x0001b0db) list_single_pane_g

0xa7f8,	// (0x00016330) list_single_pane_t1_ParamLimits

0xa7f8,	// (0x00016330) list_single_pane_t1

0x748e,	// (0x00012fc6) list_single_number_pane_g1_ParamLimits

0x748e,	// (0x00012fc6) list_single_number_pane_g1

0x749a,	// (0x00012fd2) list_single_number_pane_g2_ParamLimits

0x749a,	// (0x00012fd2) list_single_number_pane_g2

0x0001,

0xf5a3,	// (0x0001b0db) list_single_number_pane_g_ParamLimits

0xf5a3,	// (0x0001b0db) list_single_number_pane_g

0x90fc,	// (0x00014c34) list_single_number_pane_t1_ParamLimits

0x90fc,	// (0x00014c34) list_single_number_pane_t1

0xa59a,	// (0x000160d2) list_single_number_pane_t2_ParamLimits

0xa59a,	// (0x000160d2) list_single_number_pane_t2

0x0001,

0xf930,	// (0x0001b468) list_single_number_pane_t_ParamLimits

0xf930,	// (0x0001b468) list_single_number_pane_t

0x7482,	// (0x00012fba) list_single_graphic_pane_g1_ParamLimits

0x7482,	// (0x00012fba) list_single_graphic_pane_g1

0x748e,	// (0x00012fc6) list_single_graphic_pane_g2_ParamLimits

0x748e,	// (0x00012fc6) list_single_graphic_pane_g2

0x749a,	// (0x00012fd2) list_single_graphic_pane_g3_ParamLimits

0x749a,	// (0x00012fd2) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x0001b0d4) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x0001b0d4) list_single_graphic_pane_g

0x74a6,	// (0x00012fde) list_single_graphic_pane_t1_ParamLimits

0x74a6,	// (0x00012fde) list_single_graphic_pane_t1

0x748e,	// (0x00012fc6) list_single_heading_pane_g1_ParamLimits

0x748e,	// (0x00012fc6) list_single_heading_pane_g1

0x749a,	// (0x00012fd2) list_single_heading_pane_g2_ParamLimits

0x749a,	// (0x00012fd2) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x0001b0db) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x0001b0db) list_single_heading_pane_g

0x74bc,	// (0x00012ff4) list_single_heading_pane_t1_ParamLimits

0x74bc,	// (0x00012ff4) list_single_heading_pane_t1

0x74d2,	// (0x0001300a) list_single_heading_pane_t2_ParamLimits

0x74d2,	// (0x0001300a) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x0001b0e0) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x0001b0e0) list_single_heading_pane_t

0x748e,	// (0x00012fc6) list_single_number_heading_pane_g1_ParamLimits

0x748e,	// (0x00012fc6) list_single_number_heading_pane_g1

0x749a,	// (0x00012fd2) list_single_number_heading_pane_g2_ParamLimits

0x749a,	// (0x00012fd2) list_single_number_heading_pane_g2

0x0001,

0xf5a3,	// (0x0001b0db) list_single_number_heading_pane_g_ParamLimits

0xf5a3,	// (0x0001b0db) list_single_number_heading_pane_g

0x74bc,	// (0x00012ff4) list_single_number_heading_pane_t1_ParamLimits

0x74bc,	// (0x00012ff4) list_single_number_heading_pane_t1

0x74e4,	// (0x0001301c) list_single_number_heading_pane_t2_ParamLimits

0x74e4,	// (0x0001301c) list_single_number_heading_pane_t2

0x74f6,	// (0x0001302e) list_single_number_heading_pane_t3_ParamLimits

0x74f6,	// (0x0001302e) list_single_number_heading_pane_t3

0x0002,

0xf5ad,	// (0x0001b0e5) list_single_number_heading_pane_t_ParamLimits

0xf5ad,	// (0x0001b0e5) list_single_number_heading_pane_t

0x7508,	// (0x00013040) list_single_graphic_heading_pane_g1_ParamLimits

0x7508,	// (0x00013040) list_single_graphic_heading_pane_g1

0x7514,	// (0x0001304c) list_single_graphic_heading_pane_g4_ParamLimits

0x7514,	// (0x0001304c) list_single_graphic_heading_pane_g4

0x749a,	// (0x00012fd2) list_single_graphic_heading_pane_g5_ParamLimits

0x749a,	// (0x00012fd2) list_single_graphic_heading_pane_g5

0x0002,

0xf5b4,	// (0x0001b0ec) list_single_graphic_heading_pane_g_ParamLimits

0xf5b4,	// (0x0001b0ec) list_single_graphic_heading_pane_g

0x74bc,	// (0x00012ff4) list_single_graphic_heading_pane_t1_ParamLimits

0x74bc,	// (0x00012ff4) list_single_graphic_heading_pane_t1

0x7525,	// (0x0001305d) list_single_graphic_heading_pane_t2_ParamLimits

0x7525,	// (0x0001305d) list_single_graphic_heading_pane_t2

0x0001,

0xf5bb,	// (0x0001b0f3) list_single_graphic_heading_pane_t_ParamLimits

0xf5bb,	// (0x0001b0f3) list_single_graphic_heading_pane_t

0x7537,	// (0x0001306f) list_single_large_graphic_pane_g1_ParamLimits

0x7537,	// (0x0001306f) list_single_large_graphic_pane_g1

0x748e,	// (0x00012fc6) list_single_large_graphic_pane_g2_ParamLimits

0x748e,	// (0x00012fc6) list_single_large_graphic_pane_g2

0x749a,	// (0x00012fd2) list_single_large_graphic_pane_g3_ParamLimits

0x749a,	// (0x00012fd2) list_single_large_graphic_pane_g3

0x0002,

0xf5c0,	// (0x0001b0f8) list_single_large_graphic_pane_g_ParamLimits

0xf5c0,	// (0x0001b0f8) list_single_large_graphic_pane_g

0x9875,	// (0x000153ad) wait_border_pane_g2_copy1

0x7543,	// (0x0001307b) list_single_large_graphic_pane_g4_cp2

0x754b,	// (0x00013083) list_single_large_graphic_pane_t1_ParamLimits

0x754b,	// (0x00013083) list_single_large_graphic_pane_t1

0x7561,	// (0x00013099) list_double_pane_g1_ParamLimits

0x7561,	// (0x00013099) list_double_pane_g1

0x756d,	// (0x000130a5) list_double_pane_g2_ParamLimits

0x756d,	// (0x000130a5) list_double_pane_g2

0x0001,

0xf5c7,	// (0x0001b0ff) list_double_pane_g_ParamLimits

0xf5c7,	// (0x0001b0ff) list_double_pane_g

0x7579,	// (0x000130b1) list_double_pane_t1_ParamLimits

0x7579,	// (0x000130b1) list_double_pane_t1

0x758f,	// (0x000130c7) list_double_pane_t2_ParamLimits

0x758f,	// (0x000130c7) list_double_pane_t2

0x0001,

0xf5cc,	// (0x0001b104) list_double_pane_t_ParamLimits

0xf5cc,	// (0x0001b104) list_double_pane_t

0x75a1,	// (0x000130d9) list_double2_pane_g1_ParamLimits

0x75a1,	// (0x000130d9) list_double2_pane_g1

0x75b2,	// (0x000130ea) list_double2_pane_g2_ParamLimits

0x75b2,	// (0x000130ea) list_double2_pane_g2

0x0001,

0xf5d1,	// (0x0001b109) list_double2_pane_g_ParamLimits

0xf5d1,	// (0x0001b109) list_double2_pane_g

0x75be,	// (0x000130f6) list_double2_pane_t1_ParamLimits

0x75be,	// (0x000130f6) list_double2_pane_t1

0x75d4,	// (0x0001310c) list_double2_pane_t2_ParamLimits

0x75d4,	// (0x0001310c) list_double2_pane_t2

0x0001,

0xf5d6,	// (0x0001b10e) list_double2_pane_t_ParamLimits

0xf5d6,	// (0x0001b10e) list_double2_pane_t

0x7561,	// (0x00013099) list_double_number_pane_g1_ParamLimits

0x7561,	// (0x00013099) list_double_number_pane_g1

0x756d,	// (0x000130a5) list_double_number_pane_g2_ParamLimits

0x756d,	// (0x000130a5) list_double_number_pane_g2

0x0001,

0xf5c7,	// (0x0001b0ff) list_double_number_pane_g_ParamLimits

0xf5c7,	// (0x0001b0ff) list_double_number_pane_g

0x75e6,	// (0x0001311e) list_double_number_pane_t1_ParamLimits

0x75e6,	// (0x0001311e) list_double_number_pane_t1

0x75f8,	// (0x00013130) list_double_number_pane_t2_ParamLimits

0x75f8,	// (0x00013130) list_double_number_pane_t2

0x760e,	// (0x00013146) list_double_number_pane_t3_ParamLimits

0x760e,	// (0x00013146) list_double_number_pane_t3

0x0002,

0xf5db,	// (0x0001b113) list_double_number_pane_t_ParamLimits

0xf5db,	// (0x0001b113) list_double_number_pane_t

0x7620,	// (0x00013158) list_double_graphic_pane_g1_ParamLimits

0x7620,	// (0x00013158) list_double_graphic_pane_g1

0x762c,	// (0x00013164) list_double_graphic_pane_g2_ParamLimits

0x762c,	// (0x00013164) list_double_graphic_pane_g2

0x763b,	// (0x00013173) list_double_graphic_pane_g3_ParamLimits

0x763b,	// (0x00013173) list_double_graphic_pane_g3

0x0003,

0xf5e2,	// (0x0001b11a) list_double_graphic_pane_g_ParamLimits

0xf5e2,	// (0x0001b11a) list_double_graphic_pane_g

0x7653,	// (0x0001318b) list_double_graphic_pane_t1_ParamLimits

0x7653,	// (0x0001318b) list_double_graphic_pane_t1

0x7669,	// (0x000131a1) list_double_graphic_pane_t2_ParamLimits

0x7669,	// (0x000131a1) list_double_graphic_pane_t2

0x0001,

0xf5eb,	// (0x0001b123) list_double_graphic_pane_t_ParamLimits

0xf5eb,	// (0x0001b123) list_double_graphic_pane_t

0x767b,	// (0x000131b3) list_double2_graphic_pane_g1_ParamLimits

0x767b,	// (0x000131b3) list_double2_graphic_pane_g1

0x7687,	// (0x000131bf) list_double2_graphic_pane_g2_ParamLimits

0x7687,	// (0x000131bf) list_double2_graphic_pane_g2

0x75b2,	// (0x000130ea) list_double2_graphic_pane_g3_ParamLimits

0x75b2,	// (0x000130ea) list_double2_graphic_pane_g3

0x0002,

0xf5f0,	// (0x0001b128) list_double2_graphic_pane_g_ParamLimits

0xf5f0,	// (0x0001b128) list_double2_graphic_pane_g

0x7693,	// (0x000131cb) list_double2_graphic_pane_t1_ParamLimits

0x7693,	// (0x000131cb) list_double2_graphic_pane_t1

0x76a9,	// (0x000131e1) list_double2_graphic_pane_t2_ParamLimits

0x76a9,	// (0x000131e1) list_double2_graphic_pane_t2

0x0001,

0xf5f7,	// (0x0001b12f) list_double2_graphic_pane_t_ParamLimits

0xf5f7,	// (0x0001b12f) list_double2_graphic_pane_t

0x76bb,	// (0x000131f3) list_double_large_graphic_pane_g1_ParamLimits

0x76bb,	// (0x000131f3) list_double_large_graphic_pane_g1

0x76da,	// (0x00013212) list_double_large_graphic_pane_g2_ParamLimits

0x76da,	// (0x00013212) list_double_large_graphic_pane_g2

0x756d,	// (0x000130a5) list_double_large_graphic_pane_g3_ParamLimits

0x756d,	// (0x000130a5) list_double_large_graphic_pane_g3

0x76eb,	// (0x00013223) list_double_large_graphic_pane_g4_ParamLimits

0x76eb,	// (0x00013223) list_double_large_graphic_pane_g4

0x0004,

0xf5fc,	// (0x0001b134) list_double_large_graphic_pane_g_ParamLimits

0xf5fc,	// (0x0001b134) list_double_large_graphic_pane_g

0x7711,	// (0x00013249) list_double_large_graphic_pane_t1_ParamLimits

0x7711,	// (0x00013249) list_double_large_graphic_pane_t1

0x772a,	// (0x00013262) list_double_large_graphic_pane_t2_ParamLimits

0x772a,	// (0x00013262) list_double_large_graphic_pane_t2

0x0001,

0xf607,	// (0x0001b13f) list_double_large_graphic_pane_t_ParamLimits

0xf607,	// (0x0001b13f) list_double_large_graphic_pane_t

0x773c,	// (0x00013274) list_double2_large_graphic_pane_g1_ParamLimits

0x773c,	// (0x00013274) list_double2_large_graphic_pane_g1

0x75a1,	// (0x000130d9) list_double2_large_graphic_pane_g2_ParamLimits

0x75a1,	// (0x000130d9) list_double2_large_graphic_pane_g2

0x75b2,	// (0x000130ea) list_double2_large_graphic_pane_g3_ParamLimits

0x75b2,	// (0x000130ea) list_double2_large_graphic_pane_g3

0x0002,

0xf60c,	// (0x0001b144) list_double2_large_graphic_pane_g_ParamLimits

0xf60c,	// (0x0001b144) list_double2_large_graphic_pane_g

0x7748,	// (0x00013280) list_double2_large_graphic_pane_t1_ParamLimits

0x7748,	// (0x00013280) list_double2_large_graphic_pane_t1

0x775e,	// (0x00013296) list_double2_large_graphic_pane_t2_ParamLimits

0x775e,	// (0x00013296) list_double2_large_graphic_pane_t2

0x0001,

0xf613,	// (0x0001b14b) list_double2_large_graphic_pane_t_ParamLimits

0xf613,	// (0x0001b14b) list_double2_large_graphic_pane_t

0x7770,	// (0x000132a8) list_double_heading_pane_g1_ParamLimits

0x7770,	// (0x000132a8) list_double_heading_pane_g1

0x7781,	// (0x000132b9) list_double_heading_pane_g2_ParamLimits

0x7781,	// (0x000132b9) list_double_heading_pane_g2

0x0001,

0xf618,	// (0x0001b150) list_double_heading_pane_g_ParamLimits

0xf618,	// (0x0001b150) list_double_heading_pane_g

0x778d,	// (0x000132c5) list_double_heading_pane_t1_ParamLimits

0x778d,	// (0x000132c5) list_double_heading_pane_t1

0x77a3,	// (0x000132db) list_double_heading_pane_t2_ParamLimits

0x77a3,	// (0x000132db) list_double_heading_pane_t2

0x0001,

0xf61d,	// (0x0001b155) list_double_heading_pane_t_ParamLimits

0xf61d,	// (0x0001b155) list_double_heading_pane_t

0x7620,	// (0x00013158) list_double_graphic_heading_pane_g1_ParamLimits

0x7620,	// (0x00013158) list_double_graphic_heading_pane_g1

0x7770,	// (0x000132a8) list_double_graphic_heading_pane_g2_ParamLimits

0x7770,	// (0x000132a8) list_double_graphic_heading_pane_g2

0x7781,	// (0x000132b9) list_double_graphic_heading_pane_g3_ParamLimits

0x7781,	// (0x000132b9) list_double_graphic_heading_pane_g3

0x0002,

0xf622,	// (0x0001b15a) list_double_graphic_heading_pane_g_ParamLimits

0xf622,	// (0x0001b15a) list_double_graphic_heading_pane_g

0x77b5,	// (0x000132ed) list_double_graphic_heading_pane_t1_ParamLimits

0x77b5,	// (0x000132ed) list_double_graphic_heading_pane_t1

0x77cb,	// (0x00013303) list_double_graphic_heading_pane_t2_ParamLimits

0x77cb,	// (0x00013303) list_double_graphic_heading_pane_t2

0x0001,

0xf629,	// (0x0001b161) list_double_graphic_heading_pane_t_ParamLimits

0xf629,	// (0x0001b161) list_double_graphic_heading_pane_t

0x76da,	// (0x00013212) list_double_time_pane_g1_ParamLimits

0x76da,	// (0x00013212) list_double_time_pane_g1

0x756d,	// (0x000130a5) list_double_time_pane_g2_ParamLimits

0x756d,	// (0x000130a5) list_double_time_pane_g2

0x0001,

0xf62e,	// (0x0001b166) list_double_time_pane_g_ParamLimits

0xf62e,	// (0x0001b166) list_double_time_pane_g

0x77dd,	// (0x00013315) list_double_time_pane_t1_ParamLimits

0x77dd,	// (0x00013315) list_double_time_pane_t1

0x77f3,	// (0x0001332b) list_double_time_pane_t2_ParamLimits

0x77f3,	// (0x0001332b) list_double_time_pane_t2

0x7805,	// (0x0001333d) list_double_time_pane_t3_ParamLimits

0x7805,	// (0x0001333d) list_double_time_pane_t3

0x7817,	// (0x0001334f) list_double_time_pane_t4_ParamLimits

0x7817,	// (0x0001334f) list_double_time_pane_t4

0x0003,

0xf633,	// (0x0001b16b) list_double_time_pane_t_ParamLimits

0xf633,	// (0x0001b16b) list_double_time_pane_t

0x7687,	// (0x000131bf) list_setting_pane_g1_ParamLimits

0x7687,	// (0x000131bf) list_setting_pane_g1

0x75b2,	// (0x000130ea) list_setting_pane_g2_ParamLimits

0x75b2,	// (0x000130ea) list_setting_pane_g2

0x0001,

0xf63c,	// (0x0001b174) list_setting_pane_g_ParamLimits

0xf63c,	// (0x0001b174) list_setting_pane_g

0x7829,	// (0x00013361) list_setting_pane_t1_ParamLimits

0x7829,	// (0x00013361) list_setting_pane_t1

0x7840,	// (0x00013378) list_setting_pane_t2_ParamLimits

0x7840,	// (0x00013378) list_setting_pane_t2

0x0002,

0xf641,	// (0x0001b179) list_setting_pane_t_ParamLimits

0xf641,	// (0x0001b179) list_setting_pane_t

0x787f,	// (0x000133b7) set_value_pane_cp_ParamLimits

0x787f,	// (0x000133b7) set_value_pane_cp

0x7687,	// (0x000131bf) list_setting_number_pane_g1_ParamLimits

0x7687,	// (0x000131bf) list_setting_number_pane_g1

0x75b2,	// (0x000130ea) list_setting_number_pane_g2_ParamLimits

0x75b2,	// (0x000130ea) list_setting_number_pane_g2

0x0001,

0xf63c,	// (0x0001b174) list_setting_number_pane_g_ParamLimits

0xf63c,	// (0x0001b174) list_setting_number_pane_g

0x788b,	// (0x000133c3) list_setting_number_pane_t1_ParamLimits

0x788b,	// (0x000133c3) list_setting_number_pane_t1

0x789f,	// (0x000133d7) list_setting_number_pane_t2_ParamLimits

0x789f,	// (0x000133d7) list_setting_number_pane_t2

0x78b6,	// (0x000133ee) list_setting_number_pane_t3_ParamLimits

0x78b6,	// (0x000133ee) list_setting_number_pane_t3

0x0003,

0xf648,	// (0x0001b180) list_setting_number_pane_t_ParamLimits

0xf648,	// (0x0001b180) list_setting_number_pane_t

0x787f,	// (0x000133b7) set_value_pane_ParamLimits

0x787f,	// (0x000133b7) set_value_pane

0x78f9,	// (0x00013431) bg_set_opt_pane_ParamLimits

0x78f9,	// (0x00013431) bg_set_opt_pane

0x791a,	// (0x00013452) set_value_pane_t1

0x7928,	// (0x00013460) slider_set_pane_cp3

0x7931,	// (0x00013469) volume_small_pane_cp

0x793a,	// (0x00013472) list_form_gen_pane

0x7943,	// (0x0001347b) scroll_pane_cp8

0x795c,	// (0x00013494) form_field_data_pane_ParamLimits

0x795c,	// (0x00013494) form_field_data_pane

0x797e,	// (0x000134b6) form_field_data_wide_pane_ParamLimits

0x797e,	// (0x000134b6) form_field_data_wide_pane

0x79a1,	// (0x000134d9) form_field_popup_pane_ParamLimits

0x79a1,	// (0x000134d9) form_field_popup_pane

0x79c1,	// (0x000134f9) form_field_popup_wide_pane_ParamLimits

0x79c1,	// (0x000134f9) form_field_popup_wide_pane

0x79de,	// (0x00013516) form_field_slider_pane_ParamLimits

0x79de,	// (0x00013516) form_field_slider_pane

0x79f1,	// (0x00013529) form_field_slider_wide_pane_ParamLimits

0x79f1,	// (0x00013529) form_field_slider_wide_pane

0x7a04,	// (0x0001353c) data_form_pane

0x7a1a,	// (0x00013552) form_field_data_pane_t1

0x7a32,	// (0x0001356a) input_focus_pane

0x7a40,	// (0x00013578) data_form_wide_pane

0x7a78,	// (0x000135b0) form_field_data_wide_pane_t1

0x724c,	// (0x00012d84) input_focus_pane_cp6

0x7a97,	// (0x000135cf) form_field_popup_pane_t1

0x7a32,	// (0x0001356a) input_focus_pane_cp7

0x7aaf,	// (0x000135e7) list_form_pane

0x7ac3,	// (0x000135fb) form_field_popup_wide_pane_t1

0x7a32,	// (0x0001356a) input_focus_pane_cp8

0x7ad5,	// (0x0001360d) list_form_wide_pane

0x7ae9,	// (0x00013621) form_field_slider_pane_t1_ParamLimits

0x7ae9,	// (0x00013621) form_field_slider_pane_t1

0x7afb,	// (0x00013633) form_field_slider_pane_t2_ParamLimits

0x7afb,	// (0x00013633) form_field_slider_pane_t2

0x0001,

0xf658,	// (0x0001b190) form_field_slider_pane_t_ParamLimits

0xf658,	// (0x0001b190) form_field_slider_pane_t

0x6ec9,	// (0x00012a01) input_focus_pane_cp9_ParamLimits

0x6ec9,	// (0x00012a01) input_focus_pane_cp9

0x7b0d,	// (0x00013645) slider_cont_pane_ParamLimits

0x7b0d,	// (0x00013645) slider_cont_pane

0x7b21,	// (0x00013659) form_field_slider_wide_pane_t1_ParamLimits

0x7b21,	// (0x00013659) form_field_slider_wide_pane_t1

0x7b33,	// (0x0001366b) form_field_slider_wide_pane_t2_ParamLimits

0x7b33,	// (0x0001366b) form_field_slider_wide_pane_t2

0x0001,

0xf65d,	// (0x0001b195) form_field_slider_wide_pane_t_ParamLimits

0xf65d,	// (0x0001b195) form_field_slider_wide_pane_t

0x6ec9,	// (0x00012a01) input_focus_pane_cp10_ParamLimits

0x6ec9,	// (0x00012a01) input_focus_pane_cp10

0x7b45,	// (0x0001367d) slider_cont_pane_cp1_ParamLimits

0x7b45,	// (0x0001367d) slider_cont_pane_cp1

0x7b59,	// (0x00013691) slider_form_pane_cp

0x7b61,	// (0x00013699) input_focus_pane_g1

0x7b69,	// (0x000136a1) input_focus_pane_g2

0x7b71,	// (0x000136a9) input_focus_pane_g3

0x7b79,	// (0x000136b1) input_focus_pane_g4

0x7b81,	// (0x000136b9) input_focus_pane_g5

0x7b89,	// (0x000136c1) input_focus_pane_g6

0x7b91,	// (0x000136c9) input_focus_pane_g7

0x7b99,	// (0x000136d1) input_focus_pane_g8

0x7ba1,	// (0x000136d9) input_focus_pane_g9

0x3ae6,	// (0x0000f61e) input_focus_pane_g10

0x0009,

0xf662,	// (0x0001b19a) input_focus_pane_g

0x987e,	// (0x000153b6) wait_border_pane_g3_copy1

0x7ba9,	// (0x000136e1) data_form_pane_t1

0x3ae6,	// (0x0000f61e) wait_anim_pane_g1_copy1

0xa7db,	// (0x00016313) data_form_wide_pane_t1

0x7bc4,	// (0x000136fc) list_form_graphic_pane_cp_ParamLimits

0x7bc4,	// (0x000136fc) list_form_graphic_pane_cp

0xa7b0,	// (0x000162e8) slider_form_pane_g1

0xa7b9,	// (0x000162f1) slider_form_pane_g2

0x0006,

0xf960,	// (0x0001b498) slider_form_pane_g

0x7bdd,	// (0x00013715) list_form_graphic_pane_ParamLimits

0x7bdd,	// (0x00013715) list_form_graphic_pane

0x7bf9,	// (0x00013731) list_form_graphic_pane_g1

0x7c01,	// (0x00013739) list_form_graphic_pane_t1_ParamLimits

0x7c01,	// (0x00013739) list_form_graphic_pane_t1

0x6c34,	// (0x0001276c) list_highlight_pane_cp5_ParamLimits

0x6c34,	// (0x0001276c) list_highlight_pane_cp5

0x7c16,	// (0x0001374e) find_pane_g1

0x7c1f,	// (0x00013757) input_find_pane

0x7c28,	// (0x00013760) input_find_pane_g1_ParamLimits

0x7c28,	// (0x00013760) input_find_pane_g1

0x7c34,	// (0x0001376c) input_find_pane_t1_ParamLimits

0x7c34,	// (0x0001376c) input_find_pane_t1

0x7c49,	// (0x00013781) input_find_pane_t2_ParamLimits

0x7c49,	// (0x00013781) input_find_pane_t2

0x0001,

0xf677,	// (0x0001b1af) input_find_pane_t_ParamLimits

0xf677,	// (0x0001b1af) input_find_pane_t

0x7c5e,	// (0x00013796) input_focus_pane_cp5_ParamLimits

0x7c5e,	// (0x00013796) input_focus_pane_cp5

0x7c7d,	// (0x000137b5) bg_popup_window_pane_cp2_ParamLimits

0x7c7d,	// (0x000137b5) bg_popup_window_pane_cp2

0x7c8a,	// (0x000137c2) listscroll_menu_pane_ParamLimits

0x7c8a,	// (0x000137c2) listscroll_menu_pane

0x7c96,	// (0x000137ce) popup_submenu_window_ParamLimits

0x7c96,	// (0x000137ce) popup_submenu_window

0x7cc2,	// (0x000137fa) find_popup_pane_g1

0x7cca,	// (0x00013802) input_popup_find_pane_cp

0x7cd4,	// (0x0001380c) input_focus_pane_cp4_ParamLimits

0x7cd4,	// (0x0001380c) input_focus_pane_cp4

0x7cee,	// (0x00013826) input_popup_find_pane_t1_ParamLimits

0x7cee,	// (0x00013826) input_popup_find_pane_t1

0x6b54,	// (0x0001268c) bg_popup_sub_pane_cp

0x7d1c,	// (0x00013854) listscroll_popup_sub_pane

0x7d24,	// (0x0001385c) list_submenu_pane_ParamLimits

0x7d24,	// (0x0001385c) list_submenu_pane

0x7d35,	// (0x0001386d) scroll_pane_cp4

0x7d3d,	// (0x00013875) list_single_popup_submenu_pane_ParamLimits

0x7d3d,	// (0x00013875) list_single_popup_submenu_pane

0x7d51,	// (0x00013889) list_single_popup_submenu_pane_g1

0x7d59,	// (0x00013891) list_single_popup_submenu_pane_t1_ParamLimits

0x7d59,	// (0x00013891) list_single_popup_submenu_pane_t1

0x6c34,	// (0x0001276c) bg_active_tab_pane_cp1_ParamLimits

0x6c34,	// (0x0001276c) bg_active_tab_pane_cp1

0x7d6e,	// (0x000138a6) tabs_2_active_pane_g1

0x7d76,	// (0x000138ae) tabs_2_active_pane_t1

0x6c34,	// (0x0001276c) bg_passive_tab_pane_cp1_ParamLimits

0x6c34,	// (0x0001276c) bg_passive_tab_pane_cp1

0x7d6e,	// (0x000138a6) tabs_2_passive_pane_g1

0x7d76,	// (0x000138ae) tabs_2_passive_pane_t1

0x7d88,	// (0x000138c0) bg_active_tab_pane_cp4

0x7d96,	// (0x000138ce) tabs_2_long_active_pane_t1

0x7da9,	// (0x000138e1) bg_passive_tab_pane_cp4

0x55fa,	// (0x00011132) list_single_midp_graphic_pane_g4_ParamLimits

0x7d88,	// (0x000138c0) bg_active_tab_pane_cp5

0x7db5,	// (0x000138ed) tabs_3_long_active_pane_t1

0x7da9,	// (0x000138e1) bg_passive_tab_pane_cp5

0x55fa,	// (0x00011132) list_single_midp_graphic_pane_g4

0x6c34,	// (0x0001276c) bg_popup_window_pane_cp13_ParamLimits

0x6c34,	// (0x0001276c) bg_popup_window_pane_cp13

0x7dd0,	// (0x00013908) listscroll_popup_fast_pane_ParamLimits

0x7dd0,	// (0x00013908) listscroll_popup_fast_pane

0x7ddf,	// (0x00013917) grid_popup_fast_pane_ParamLimits

0x7ddf,	// (0x00013917) grid_popup_fast_pane

0x7df1,	// (0x00013929) scroll_pane_cp9_ParamLimits

0x7df1,	// (0x00013929) scroll_pane_cp9

0xc6e1,	// (0x00018219) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc6e1,	// (0x00018219) list_single_graphic_hl_pane_t1_cp2

0x7e15,	// (0x0001394d) input_focus_pane_cp20_ParamLimits

0x7e15,	// (0x0001394d) input_focus_pane_cp20

0x7e23,	// (0x0001395b) query_popup_data_pane_t1_ParamLimits

0x7e23,	// (0x0001395b) query_popup_data_pane_t1

0x7e36,	// (0x0001396e) query_popup_data_pane_t2_ParamLimits

0x7e36,	// (0x0001396e) query_popup_data_pane_t2

0x7e7c,	// (0x000139b4) query_popup_data_pane_t3_ParamLimits

0x7e7c,	// (0x000139b4) query_popup_data_pane_t3

0x7ebd,	// (0x000139f5) query_popup_data_pane_t4_ParamLimits

0x7ebd,	// (0x000139f5) query_popup_data_pane_t4

0x7ef9,	// (0x00013a31) query_popup_data_pane_t5_ParamLimits

0x7ef9,	// (0x00013a31) query_popup_data_pane_t5

0x0004,

0xf67c,	// (0x0001b1b4) query_popup_data_pane_t_ParamLimits

0xf67c,	// (0x0001b1b4) query_popup_data_pane_t

0x7b61,	// (0x00013699) bg_set_opt_pane_g1

0x7b69,	// (0x000136a1) bg_set_opt_pane_g2

0x7b71,	// (0x000136a9) bg_set_opt_pane_g3

0x7b79,	// (0x000136b1) bg_set_opt_pane_g4

0x7b81,	// (0x000136b9) bg_set_opt_pane_g5

0x7b89,	// (0x000136c1) bg_set_opt_pane_g6

0x7b91,	// (0x000136c9) bg_set_opt_pane_g7

0x7b99,	// (0x000136d1) bg_set_opt_pane_g8

0x7ba1,	// (0x000136d9) bg_set_opt_pane_g9

0x0008,

0xf687,	// (0x0001b1bf) bg_set_opt_pane_g

0x4c04,	// (0x0001073c) control_top_pane_stacon_ParamLimits

0x4c04,	// (0x0001073c) control_top_pane_stacon

0x4c57,	// (0x0001078f) signal_pane_stacon_ParamLimits

0x4c57,	// (0x0001078f) signal_pane_stacon

0x8593,	// (0x000140cb) stacon_top_pane_g1_ParamLimits

0x8593,	// (0x000140cb) stacon_top_pane_g1

0x4c7c,	// (0x000107b4) title_pane_stacon_ParamLimits

0x4c7c,	// (0x000107b4) title_pane_stacon

0x4ca6,	// (0x000107de) uni_indicator_pane_stacon_ParamLimits

0x4ca6,	// (0x000107de) uni_indicator_pane_stacon

0x4cbb,	// (0x000107f3) battery_pane_stacon_ParamLimits

0x4cbb,	// (0x000107f3) battery_pane_stacon

0x4cff,	// (0x00010837) control_bottom_pane_stacon_ParamLimits

0x4cff,	// (0x00010837) control_bottom_pane_stacon

0x4d22,	// (0x0001085a) navi_pane_stacon_ParamLimits

0x4d22,	// (0x0001085a) navi_pane_stacon

0x85b5,	// (0x000140ed) stacon_bottom_pane_g1_ParamLimits

0x85b5,	// (0x000140ed) stacon_bottom_pane_g1

0x4967,	// (0x0001049f) aid_levels_signal_lsc_ParamLimits

0x4967,	// (0x0001049f) aid_levels_signal_lsc

0x497d,	// (0x000104b5) signal_pane_stacon_g1_ParamLimits

0x497d,	// (0x000104b5) signal_pane_stacon_g1

0x4991,	// (0x000104c9) signal_pane_stacon_g2_ParamLimits

0x4991,	// (0x000104c9) signal_pane_stacon_g2

0x0001,

0xf69a,	// (0x0001b1d2) signal_pane_stacon_g_ParamLimits

0xf69a,	// (0x0001b1d2) signal_pane_stacon_g

0x49c6,	// (0x000104fe) title_pane_stacon_t1_ParamLimits

0x49c6,	// (0x000104fe) title_pane_stacon_t1

0x7f3d,	// (0x00013a75) uni_indicator_pane_stacon_g1

0x7f47,	// (0x00013a7f) uni_indicator_pane_stacon_g2

0x7f51,	// (0x00013a89) uni_indicator_pane_stacon_g3

0x7f5b,	// (0x00013a93) uni_indicator_pane_stacon_g4

0x0003,

0xf6a6,	// (0x0001b1de) uni_indicator_pane_stacon_g

0x49eb,	// (0x00010523) control_top_pane_stacon_g1

0x49f3,	// (0x0001052b) control_top_pane_stacon_t1_ParamLimits

0x49f3,	// (0x0001052b) control_top_pane_stacon_t1

0x4a2a,	// (0x00010562) aid_levels_battery_lsc_ParamLimits

0x4a2a,	// (0x00010562) aid_levels_battery_lsc

0x4a41,	// (0x00010579) battery_pane_stacon_g1_ParamLimits

0x4a41,	// (0x00010579) battery_pane_stacon_g1

0x4a54,	// (0x0001058c) battery_pane_stacon_g2_ParamLimits

0x4a54,	// (0x0001058c) battery_pane_stacon_g2

0x0001,

0xf6af,	// (0x0001b1e7) battery_pane_stacon_g_ParamLimits

0xf6af,	// (0x0001b1e7) battery_pane_stacon_g

0x4a92,	// (0x000105ca) navi_icon_pane_stacon

0x4aa6,	// (0x000105de) navi_navi_pane_stacon

0x4a92,	// (0x000105ca) navi_text_pane_stacon

0x49eb,	// (0x00010523) control_bottom_pane_stacon_g1

0x4aba,	// (0x000105f2) control_bottom_pane_stacon_t1_ParamLimits

0x4aba,	// (0x000105f2) control_bottom_pane_stacon_t1

0x7f7f,	// (0x00013ab7) grid_app_pane_ParamLimits

0x7f7f,	// (0x00013ab7) grid_app_pane

0x7fa1,	// (0x00013ad9) scroll_pane_cp15_ParamLimits

0x7fa1,	// (0x00013ad9) scroll_pane_cp15

0x7fb4,	// (0x00013aec) cell_app_pane_ParamLimits

0x7fb4,	// (0x00013aec) cell_app_pane

0x7fdc,	// (0x00013b14) cell_app_pane_g1_ParamLimits

0x7fdc,	// (0x00013b14) cell_app_pane_g1

0x8000,	// (0x00013b38) cell_app_pane_g2_ParamLimits

0x8000,	// (0x00013b38) cell_app_pane_g2

0x0001,

0xf6b4,	// (0x0001b1ec) cell_app_pane_g_ParamLimits

0xf6b4,	// (0x0001b1ec) cell_app_pane_g

0x800c,	// (0x00013b44) cell_app_pane_t1_ParamLimits

0x800c,	// (0x00013b44) cell_app_pane_t1

0x8023,	// (0x00013b5b) grid_highlight_pane_ParamLimits

0x8023,	// (0x00013b5b) grid_highlight_pane

0x7b61,	// (0x00013699) cell_highlight_pane_g1

0x7b69,	// (0x000136a1) cell_highlight_pane_g2

0x7b71,	// (0x000136a9) cell_highlight_pane_g3

0x7b79,	// (0x000136b1) cell_highlight_pane_g4

0x7b81,	// (0x000136b9) cell_highlight_pane_g5

0x7b89,	// (0x000136c1) cell_highlight_pane_g6

0x7b91,	// (0x000136c9) cell_highlight_pane_g7

0x7b99,	// (0x000136d1) cell_highlight_pane_g8

0x7ba1,	// (0x000136d9) cell_highlight_pane_g9

0x3ae6,	// (0x0000f61e) cell_highlight_pane_g10

0x0009,

0xf662,	// (0x0001b19a) cell_highlight_pane_g

0x8034,	// (0x00013b6c) bg_scroll_pane

0x4b04,	// (0x0001063c) scroll_handle_pane

0x807b,	// (0x00013bb3) scroll_bg_pane_g1

0x8090,	// (0x00013bc8) scroll_bg_pane_g2

0x80a8,	// (0x00013be0) scroll_bg_pane_g3

0x0002,

0xf6b9,	// (0x0001b1f1) scroll_bg_pane_g

0x80bd,	// (0x00013bf5) scroll_handle_focus_pane_ParamLimits

0x80bd,	// (0x00013bf5) scroll_handle_focus_pane

0x807b,	// (0x00013bb3) scroll_handle_pane_g1

0x80ca,	// (0x00013c02) scroll_handle_pane_g2

0x80a8,	// (0x00013be0) scroll_handle_pane_g3

0x0002,

0xf6c0,	// (0x0001b1f8) scroll_handle_pane_g

0x7cd4,	// (0x0001380c) bg_popup_sub_pane_cp21_ParamLimits

0x7cd4,	// (0x0001380c) bg_popup_sub_pane_cp21

0x80de,	// (0x00013c16) popup_fep_japan_predictive_window_t1_ParamLimits

0x80de,	// (0x00013c16) popup_fep_japan_predictive_window_t1

0x80f8,	// (0x00013c30) popup_fep_japan_predictive_window_t2_ParamLimits

0x80f8,	// (0x00013c30) popup_fep_japan_predictive_window_t2

0x812b,	// (0x00013c63) popup_fep_japan_predictive_window_t3_ParamLimits

0x812b,	// (0x00013c63) popup_fep_japan_predictive_window_t3

0x0002,

0xf6c7,	// (0x0001b1ff) popup_fep_japan_predictive_window_t_ParamLimits

0xf6c7,	// (0x0001b1ff) popup_fep_japan_predictive_window_t

0x6b54,	// (0x0001268c) bg_popup_sub_pane_cp23

0x8162,	// (0x00013c9a) listscroll_japin_cand_pane

0x816a,	// (0x00013ca2) popup_fep_japan_candidate_window_t1

0x8178,	// (0x00013cb0) candidate_pane_ParamLimits

0x8178,	// (0x00013cb0) candidate_pane

0x818a,	// (0x00013cc2) scroll_pane_cp30

0x8192,	// (0x00013cca) list_single_popup_jap_candidate_pane_ParamLimits

0x8192,	// (0x00013cca) list_single_popup_jap_candidate_pane

0x6b54,	// (0x0001268c) list_highlight_pane_cp30

0x81a7,	// (0x00013cdf) list_single_popup_jap_candidate_pane_t1

0x81b6,	// (0x00013cee) level_1_signal

0x81c8,	// (0x00013d00) level_2_signal

0x81db,	// (0x00013d13) level_3_signal

0x81ee,	// (0x00013d26) level_4_signal

0x8201,	// (0x00013d39) level_5_signal

0x8214,	// (0x00013d4c) level_6_signal

0x8227,	// (0x00013d5f) level_7_signal

0x81b6,	// (0x00013cee) level_1_battery

0x81c8,	// (0x00013d00) level_2_battery

0x81db,	// (0x00013d13) level_3_battery

0x81ee,	// (0x00013d26) level_4_battery

0x8201,	// (0x00013d39) level_5_battery

0x8214,	// (0x00013d4c) level_6_battery

0x8227,	// (0x00013d5f) level_7_battery

0x8252,	// (0x00013d8a) list_menu_pane_ParamLimits

0x8252,	// (0x00013d8a) list_menu_pane

0x8268,	// (0x00013da0) scroll_pane_cp25_ParamLimits

0x8268,	// (0x00013da0) scroll_pane_cp25

0x8281,	// (0x00013db9) list_double2_graphic_pane_cp2_ParamLimits

0x8281,	// (0x00013db9) list_double2_graphic_pane_cp2

0x8281,	// (0x00013db9) list_double2_large_graphic_pane_cp2_ParamLimits

0x8281,	// (0x00013db9) list_double2_large_graphic_pane_cp2

0x8281,	// (0x00013db9) list_double2_pane_cp2_ParamLimits

0x8281,	// (0x00013db9) list_double2_pane_cp2

0x8281,	// (0x00013db9) list_double_graphic_pane_cp2_ParamLimits

0x8281,	// (0x00013db9) list_double_graphic_pane_cp2

0x8281,	// (0x00013db9) list_double_large_graphic_pane_cp2_ParamLimits

0x8281,	// (0x00013db9) list_double_large_graphic_pane_cp2

0x8281,	// (0x00013db9) list_double_number_pane_cp2_ParamLimits

0x8281,	// (0x00013db9) list_double_number_pane_cp2

0x8281,	// (0x00013db9) list_double_pane_cp2_ParamLimits

0x8281,	// (0x00013db9) list_double_pane_cp2

0x82a5,	// (0x00013ddd) list_single_2graphic_pane_cp2_ParamLimits

0x82a5,	// (0x00013ddd) list_single_2graphic_pane_cp2

0x82a5,	// (0x00013ddd) list_single_graphic_heading_pane_cp2_ParamLimits

0x82a5,	// (0x00013ddd) list_single_graphic_heading_pane_cp2

0x82a5,	// (0x00013ddd) list_single_graphic_pane_cp2_ParamLimits

0x82a5,	// (0x00013ddd) list_single_graphic_pane_cp2

0x82a5,	// (0x00013ddd) list_single_heading_pane_cp2_ParamLimits

0x82a5,	// (0x00013ddd) list_single_heading_pane_cp2

0x82be,	// (0x00013df6) list_single_large_graphic_pane_cp2_ParamLimits

0x82be,	// (0x00013df6) list_single_large_graphic_pane_cp2

0x82a5,	// (0x00013ddd) list_single_number_heading_pane_cp2_ParamLimits

0x82a5,	// (0x00013ddd) list_single_number_heading_pane_cp2

0x82a5,	// (0x00013ddd) list_single_number_pane_cp2_ParamLimits

0x82a5,	// (0x00013ddd) list_single_number_pane_cp2

0x82cf,	// (0x00013e07) list_single_pane_cp2_ParamLimits

0x82cf,	// (0x00013e07) list_single_pane_cp2

0x8353,	// (0x00013e8b) bg_popup_sub_pane_cp22

0x4bb6,	// (0x000106ee) popup_side_volume_key_window_g1

0x4be0,	// (0x00010718) popup_side_volume_key_window_t1

0x4bfc,	// (0x00010734) volume_small_pane_cp1

0x6ec9,	// (0x00012a01) bg_popup_sub_pane_cp24_ParamLimits

0x6ec9,	// (0x00012a01) bg_popup_sub_pane_cp24

0x8369,	// (0x00013ea1) fep_china_uni_candidate_pane_ParamLimits

0x8369,	// (0x00013ea1) fep_china_uni_candidate_pane

0x837d,	// (0x00013eb5) fep_china_uni_entry_pane

0x838d,	// (0x00013ec5) popup_fep_china_uni_window_g1

0x83a9,	// (0x00013ee1) fep_china_uni_entry_pane_g1

0x83b1,	// (0x00013ee9) fep_china_uni_entry_pane_g2

0x0001,

0xf6f8,	// (0x0001b230) fep_china_uni_entry_pane_g

0x83b9,	// (0x00013ef1) fep_entry_item_pane

0x83c3,	// (0x00013efb) fep_candidate_item_pane

0x83cb,	// (0x00013f03) fep_china_uni_candidate_pane_g1

0x83d3,	// (0x00013f0b) fep_china_uni_candidate_pane_g2

0x83db,	// (0x00013f13) fep_china_uni_candidate_pane_g3

0x83e3,	// (0x00013f1b) fep_china_uni_candidate_pane_g4

0x0003,

0xf6fd,	// (0x0001b235) fep_china_uni_candidate_pane_g

0x3ae6,	// (0x0000f61e) fep_entry_item_pane_g1

0x83eb,	// (0x00013f23) fep_entry_item_pane_t1_ParamLimits

0x83eb,	// (0x00013f23) fep_entry_item_pane_t1

0x8401,	// (0x00013f39) fep_candidate_item_pane_t1_ParamLimits

0x8401,	// (0x00013f39) fep_candidate_item_pane_t1

0x8416,	// (0x00013f4e) fep_candidate_item_pane_t2_ParamLimits

0x8416,	// (0x00013f4e) fep_candidate_item_pane_t2

0x0001,

0xf706,	// (0x0001b23e) fep_candidate_item_pane_t_ParamLimits

0xf706,	// (0x0001b23e) fep_candidate_item_pane_t

0x6c34,	// (0x0001276c) list_highlight_pane_cp31_ParamLimits

0x6c34,	// (0x0001276c) list_highlight_pane_cp31

0x8428,	// (0x00013f60) level_1_signal_lsc

0x8431,	// (0x00013f69) level_2_signal_lsc

0x843a,	// (0x00013f72) level_3_signal_lsc

0x8443,	// (0x00013f7b) level_4_signal_lsc

0x844c,	// (0x00013f84) level_5_signal_lsc

0x8455,	// (0x00013f8d) level_6_signal_lsc

0x845e,	// (0x00013f96) level_7_signal_lsc

0x845e,	// (0x00013f96) level_1_battery_lsc

0x8467,	// (0x00013f9f) level_2_battery_lsc

0x8470,	// (0x00013fa8) level_3_battery_lsc

0x8479,	// (0x00013fb1) level_4_battery_lsc

0x8482,	// (0x00013fba) level_5_battery_lsc

0x848b,	// (0x00013fc3) level_6_battery_lsc

0x8428,	// (0x00013f60) level_7_battery_lsc

0x8494,	// (0x00013fcc) scroll_handle_focus_pane_g1

0x849d,	// (0x00013fd5) scroll_handle_focus_pane_g2

0x84a6,	// (0x00013fde) scroll_handle_focus_pane_g3

0x0002,

0xf70b,	// (0x0001b243) scroll_handle_focus_pane_g

0x84af,	// (0x00013fe7) list_single_2graphic_pane_g1_ParamLimits

0x84af,	// (0x00013fe7) list_single_2graphic_pane_g1

0x7514,	// (0x0001304c) list_single_2graphic_pane_g2_ParamLimits

0x7514,	// (0x0001304c) list_single_2graphic_pane_g2

0x749a,	// (0x00012fd2) list_single_2graphic_pane_g3_ParamLimits

0x749a,	// (0x00012fd2) list_single_2graphic_pane_g3

0x84bb,	// (0x00013ff3) list_single_2graphic_pane_g4_ParamLimits

0x84bb,	// (0x00013ff3) list_single_2graphic_pane_g4

0x0003,

0xf712,	// (0x0001b24a) list_single_2graphic_pane_g_ParamLimits

0xf712,	// (0x0001b24a) list_single_2graphic_pane_g

0x84cc,	// (0x00014004) list_single_2graphic_pane_t1_ParamLimits

0x84cc,	// (0x00014004) list_single_2graphic_pane_t1

0x84fa,	// (0x00014032) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x84fa,	// (0x00014032) list_double2_graphic_large_graphic_pane_g1

0x75a1,	// (0x000130d9) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x75a1,	// (0x000130d9) list_double2_graphic_large_graphic_pane_g2

0x75b2,	// (0x000130ea) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x75b2,	// (0x000130ea) list_double2_graphic_large_graphic_pane_g3

0x850a,	// (0x00014042) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x850a,	// (0x00014042) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf71b,	// (0x0001b253) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf71b,	// (0x0001b253) list_double2_graphic_large_graphic_pane_g

0x8516,	// (0x0001404e) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x8516,	// (0x0001404e) list_double2_graphic_large_graphic_pane_t1

0x852c,	// (0x00014064) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x852c,	// (0x00014064) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf724,	// (0x0001b25c) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf724,	// (0x0001b25c) list_double2_graphic_large_graphic_pane_t

0x8680,	// (0x000141b8) popup_fast_swap_window_ParamLimits

0x8680,	// (0x000141b8) popup_fast_swap_window

0x869c,	// (0x000141d4) popup_side_volume_key_window

0x86b8,	// (0x000141f0) stacon_top_pane

0x86c2,	// (0x000141fa) status_pane_ParamLimits

0x86c2,	// (0x000141fa) status_pane

0x3adc,	// (0x0000f614) status_small_pane

0x6b54,	// (0x0001268c) control_pane

0x6b54,	// (0x0001268c) stacon_bottom_pane

0x7943,	// (0x0001347b) scroll_pane_cp121

0x793a,	// (0x00013472) set_content_pane

0x853e,	// (0x00014076) bg_active_tab_pane_g1_cp1

0x8547,	// (0x0001407f) bg_active_tab_pane_g2_cp1

0x8550,	// (0x00014088) bg_active_tab_pane_g3_cp1

0x853e,	// (0x00014076) bg_passive_tab_pane_g1_cp1

0x8547,	// (0x0001407f) bg_passive_tab_pane_g2_cp1

0x8550,	// (0x00014088) bg_passive_tab_pane_g3_cp1

0x8559,	// (0x00014091) bg_active_tab_pane_g1_cp2

0x8547,	// (0x0001407f) bg_active_tab_pane_g2_cp2

0x8562,	// (0x0001409a) bg_active_tab_pane_g3_cp2

0x8559,	// (0x00014091) bg_passive_tab_pane_g1_cp2

0x8547,	// (0x0001407f) bg_passive_tab_pane_g2_cp2

0x8562,	// (0x0001409a) bg_passive_tab_pane_g3_cp2

0x856b,	// (0x000140a3) bg_active_tab_pane_g1_cp3

0x8547,	// (0x0001407f) bg_active_tab_pane_g2_cp3

0x8574,	// (0x000140ac) bg_active_tab_pane_g3_cp3

0x856b,	// (0x000140a3) bg_passive_tab_pane_g1_cp3

0x8547,	// (0x0001407f) bg_passive_tab_pane_g2_cp3

0x8574,	// (0x000140ac) bg_passive_tab_pane_g3_cp3

0x857d,	// (0x000140b5) bg_active_tab_pane_g1_cp4

0x8547,	// (0x0001407f) bg_active_tab_pane_g2_cp4

0x8588,	// (0x000140c0) bg_active_tab_pane_g3_cp4

0x857d,	// (0x000140b5) bg_passive_tab_pane_g1_cp4

0x8547,	// (0x0001407f) bg_passive_tab_pane_g2_cp4

0x8588,	// (0x000140c0) bg_passive_tab_pane_g3_cp4

0x85d1,	// (0x00014109) bg_active_tab_pane_g1_cp5

0x8547,	// (0x0001407f) bg_active_tab_pane_g2_cp5

0x85da,	// (0x00014112) bg_active_tab_pane_g3_cp5

0x85d1,	// (0x00014109) bg_passive_tab_pane_g1_cp5

0x8547,	// (0x0001407f) bg_passive_tab_pane_g2_cp5

0x85da,	// (0x00014112) bg_passive_tab_pane_g3_cp5

0x85e3,	// (0x0001411b) list_set_graphic_pane_ParamLimits

0x85e3,	// (0x0001411b) list_set_graphic_pane

0x6b54,	// (0x0001268c) bg_set_opt_pane_cp4

0x8603,	// (0x0001413b) list_set_graphic_pane_g1_ParamLimits

0x8603,	// (0x0001413b) list_set_graphic_pane_g1

0x860f,	// (0x00014147) list_set_graphic_pane_g2_ParamLimits

0x860f,	// (0x00014147) list_set_graphic_pane_g2

0x0001,

0xf729,	// (0x0001b261) list_set_graphic_pane_g_ParamLimits

0xf729,	// (0x0001b261) list_set_graphic_pane_g

0x0009,

0xfaa5,	// (0x0001b5dd) volume_small_pane_cp_g

0x8633,	// (0x0001416b) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x8633,	// (0x0001416b) list_double2_large_graphic_pane_g1_cp2

0x863f,	// (0x00014177) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x863f,	// (0x00014177) list_double2_large_graphic_pane_g2_cp2

0x8650,	// (0x00014188) list_double2_large_graphic_pane_g3_cp2

0x8658,	// (0x00014190) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x8658,	// (0x00014190) list_double2_large_graphic_pane_t1_cp2

0x866e,	// (0x000141a6) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x866e,	// (0x000141a6) list_double2_large_graphic_pane_t2_cp2

0xa351,	// (0x00015e89) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xa351,	// (0x00015e89) list_double_large_graphic_pane_g1_cp2

0xa362,	// (0x00015e9a) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xa362,	// (0x00015e9a) list_double_large_graphic_pane_g2_cp2

0x87de,	// (0x00014316) list_double_large_graphic_pane_g3_cp2

0xa373,	// (0x00015eab) list_double_large_graphic_pane_g4_cp

0xa37b,	// (0x00015eb3) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xa37b,	// (0x00015eb3) list_double_large_graphic_pane_t1_cp2

0xa392,	// (0x00015eca) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xa392,	// (0x00015eca) list_double_large_graphic_pane_t2_cp2

0x86d0,	// (0x00014208) list_double2_graphic_pane_g1_cp2_ParamLimits

0x86d0,	// (0x00014208) list_double2_graphic_pane_g1_cp2

0x86de,	// (0x00014216) list_double2_graphic_pane_g2_cp2_ParamLimits

0x86de,	// (0x00014216) list_double2_graphic_pane_g2_cp2

0x86ef,	// (0x00014227) list_double2_graphic_pane_g3_cp2

0x86f9,	// (0x00014231) list_double2_graphic_pane_t1_cp2_ParamLimits

0x86f9,	// (0x00014231) list_double2_graphic_pane_t1_cp2

0x870f,	// (0x00014247) list_double2_graphic_pane_t2_cp2_ParamLimits

0x870f,	// (0x00014247) list_double2_graphic_pane_t2_cp2

0x8721,	// (0x00014259) list_single_number_heading_pane_g1_cp2_ParamLimits

0x8721,	// (0x00014259) list_single_number_heading_pane_g1_cp2

0x872d,	// (0x00014265) list_single_number_heading_pane_g2_cp2

0x8735,	// (0x0001426d) list_single_number_heading_pane_t1_cp2_ParamLimits

0x8735,	// (0x0001426d) list_single_number_heading_pane_t1_cp2

0x874b,	// (0x00014283) list_single_number_heading_pane_t2_cp2_ParamLimits

0x874b,	// (0x00014283) list_single_number_heading_pane_t2_cp2

0x875d,	// (0x00014295) list_single_number_heading_pane_t3_cp2_ParamLimits

0x875d,	// (0x00014295) list_single_number_heading_pane_t3_cp2

0x8721,	// (0x00014259) list_single_heading_pane_g1_cp2_ParamLimits

0x8721,	// (0x00014259) list_single_heading_pane_g1_cp2

0x872d,	// (0x00014265) list_single_heading_pane_g2_cp2

0x8735,	// (0x0001426d) list_single_heading_pane_t1_cp2_ParamLimits

0x8735,	// (0x0001426d) list_single_heading_pane_t1_cp2

0xa159,	// (0x00015c91) list_single_heading_pane_t2_cp2_ParamLimits

0xa159,	// (0x00015c91) list_single_heading_pane_t2_cp2

0xa0a1,	// (0x00015bd9) list_double_graphic_pane_g1_cp2_ParamLimits

0xa0a1,	// (0x00015bd9) list_double_graphic_pane_g1_cp2

0xa0ad,	// (0x00015be5) list_double_graphic_pane_g2_cp2_ParamLimits

0xa0ad,	// (0x00015be5) list_double_graphic_pane_g2_cp2

0xa0bc,	// (0x00015bf4) list_double_graphic_pane_g3_cp2

0xa0c4,	// (0x00015bfc) list_double_graphic_pane_t1_cp2_ParamLimits

0xa0c4,	// (0x00015bfc) list_double_graphic_pane_t1_cp2

0xa0da,	// (0x00015c12) list_double_graphic_pane_t2_cp2_ParamLimits

0xa0da,	// (0x00015c12) list_double_graphic_pane_t2_cp2

0x87d2,	// (0x0001430a) list_double_number_pane_g1_cp2_ParamLimits

0x87d2,	// (0x0001430a) list_double_number_pane_g1_cp2

0x87de,	// (0x00014316) list_double_number_pane_g2_cp2

0xa065,	// (0x00015b9d) list_double_number_pane_t1_cp2_ParamLimits

0xa065,	// (0x00015b9d) list_double_number_pane_t1_cp2

0xa079,	// (0x00015bb1) list_double_number_pane_t2_cp2_ParamLimits

0xa079,	// (0x00015bb1) list_double_number_pane_t2_cp2

0xa08f,	// (0x00015bc7) list_double_number_pane_t3_cp2_ParamLimits

0xa08f,	// (0x00015bc7) list_double_number_pane_t3_cp2

0x9f4e,	// (0x00015a86) list_single_graphic_pane_g1_cp2_ParamLimits

0x9f4e,	// (0x00015a86) list_single_graphic_pane_g1_cp2

0x883f,	// (0x00014377) list_single_graphic_pane_g2_cp2_ParamLimits

0x883f,	// (0x00014377) list_single_graphic_pane_g2_cp2

0x884b,	// (0x00014383) list_single_graphic_pane_g3_cp2

0x9f24,	// (0x00015a5c) list_single_graphic_pane_t1_cp2_ParamLimits

0x9f24,	// (0x00015a5c) list_single_graphic_pane_t1_cp2

0x883f,	// (0x00014377) list_single_number_pane_g1_cp2_ParamLimits

0x883f,	// (0x00014377) list_single_number_pane_g1_cp2

0x884b,	// (0x00014383) list_single_number_pane_g2_cp2

0x9f24,	// (0x00015a5c) list_single_number_pane_t1_cp2_ParamLimits

0x9f24,	// (0x00015a5c) list_single_number_pane_t1_cp2

0x9f3a,	// (0x00015a72) list_single_number_pane_t2_cp2_ParamLimits

0x9f3a,	// (0x00015a72) list_single_number_pane_t2_cp2

0x863f,	// (0x00014177) list_double2_pane_g1_cp2_ParamLimits

0x863f,	// (0x00014177) list_double2_pane_g1_cp2

0x8650,	// (0x00014188) list_double2_pane_g2_cp2

0x87aa,	// (0x000142e2) list_double2_pane_t1_cp2_ParamLimits

0x87aa,	// (0x000142e2) list_double2_pane_t1_cp2

0x87c0,	// (0x000142f8) list_double2_pane_t2_cp2_ParamLimits

0x87c0,	// (0x000142f8) list_double2_pane_t2_cp2

0x87d2,	// (0x0001430a) list_double_pane_g1_cp2_ParamLimits

0x87d2,	// (0x0001430a) list_double_pane_g1_cp2

0x87de,	// (0x00014316) list_double_pane_g2_cp2

0x87e6,	// (0x0001431e) list_double_pane_t1_cp2_ParamLimits

0x87e6,	// (0x0001431e) list_double_pane_t1_cp2

0x87fc,	// (0x00014334) list_double_pane_t2_cp2_ParamLimits

0x87fc,	// (0x00014334) list_double_pane_t2_cp2

0x882f,	// (0x00014367) list_single_pane_cp2_g3

0x883f,	// (0x00014377) list_single_pane_g1_cp2_ParamLimits

0x883f,	// (0x00014377) list_single_pane_g1_cp2

0x884b,	// (0x00014383) list_single_pane_g2_cp2

0x8853,	// (0x0001438b) list_single_pane_t1_cp2_ParamLimits

0x8853,	// (0x0001438b) list_single_pane_t1_cp2

0x886b,	// (0x000143a3) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x886b,	// (0x000143a3) list_single_large_graphic_pane_g1_cp2

0x748e,	// (0x00012fc6) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x748e,	// (0x00012fc6) list_single_large_graphic_pane_g2_cp2

0x8877,	// (0x000143af) list_single_large_graphic_pane_g3_cp2

0x887f,	// (0x000143b7) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x887f,	// (0x000143b7) list_single_large_graphic_pane_g4_cp1

0x8899,	// (0x000143d1) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x8899,	// (0x000143d1) list_single_large_graphic_pane_t1_cp2

0x9ef0,	// (0x00015a28) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x9ef0,	// (0x00015a28) list_single_graphic_heading_pane_g1_cp2

0x9ebd,	// (0x000159f5) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x9ebd,	// (0x000159f5) list_single_graphic_heading_pane_g4_cp2

0x884b,	// (0x00014383) list_single_graphic_heading_pane_g5_cp2

0x9efc,	// (0x00015a34) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x9efc,	// (0x00015a34) list_single_graphic_heading_pane_t1_cp2

0x9f12,	// (0x00015a4a) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x9f12,	// (0x00015a4a) list_single_graphic_heading_pane_t2_cp2

0x9eb1,	// (0x000159e9) list_single_2graphic_pane_g1_cp2_ParamLimits

0x9eb1,	// (0x000159e9) list_single_2graphic_pane_g1_cp2

0x9ebd,	// (0x000159f5) list_single_2graphic_pane_g2_cp2_ParamLimits

0x9ebd,	// (0x000159f5) list_single_2graphic_pane_g2_cp2

0x884b,	// (0x00014383) list_single_2graphic_pane_g3_cp2

0x9ece,	// (0x00015a06) list_single_2graphic_pane_g4_cp2_ParamLimits

0x9ece,	// (0x00015a06) list_single_2graphic_pane_g4_cp2

0x9eda,	// (0x00015a12) list_single_2graphic_pane_t1_cp2_ParamLimits

0x9eda,	// (0x00015a12) list_single_2graphic_pane_t1_cp2

0x3ae6,	// (0x0000f61e) list_highlight_pane_g10_cp1

0x9a89,	// (0x000155c1) list_highlight_pane_g1_cp1

0x9a91,	// (0x000155c9) list_highlight_pane_g2_cp1

0x9a99,	// (0x000155d1) list_highlight_pane_g3_cp1

0x9aa1,	// (0x000155d9) list_highlight_pane_g4_cp1

0x9aa9,	// (0x000155e1) list_highlight_pane_g5_cp1

0x9ab1,	// (0x000155e9) list_highlight_pane_g6_cp1

0x9ab9,	// (0x000155f1) list_highlight_pane_g7_cp1

0x9ac1,	// (0x000155f9) list_highlight_pane_g8_cp1

0x9ac9,	// (0x00015601) list_highlight_pane_g9_cp1

0x99a9,	// (0x000154e1) form_field_slider_pane_t3

0x99b7,	// (0x000154ef) form_field_slider_pane_t4

0x99c5,	// (0x000154fd) slider_form_pane_ParamLimits

0x99c5,	// (0x000154fd) slider_form_pane

0x6b54,	// (0x0001268c) control_abbreviations

0x6b54,	// (0x0001268c) control_conventions

0x6b54,	// (0x0001268c) control_definitions

0x6b54,	// (0x0001268c) format_table_attribute

0xa1a3,	// (0x00015cdb) bg_popup_preview_window_pane_g9

0x6b54,	// (0x0001268c) format_table_data2

0x6b54,	// (0x0001268c) format_table_data3

0x6b54,	// (0x0001268c) format_table_data_example

0x0008,

0x6b54,	// (0x0001268c) intro_purpose

0xf8c0,	// (0x0001b3f8) bg_popup_preview_window_pane_g

0x6b54,	// (0x0001268c) texts_category

0x6b54,	// (0x0001268c) texts_graphics

0x88af,	// (0x000143e7) text_digital

0x88be,	// (0x000143f6) text_primary

0x88cd,	// (0x00014405) text_primary_small

0x88dc,	// (0x00014414) text_secondary

0x88eb,	// (0x00014423) text_title

0xa9c9,	// (0x00016501) bg_passive_tab_pane_g1_cp3_srt

0x8547,	// (0x0001407f) bg_passive_tab_pane_g2_cp3_srt

0xa9d2,	// (0x0001650a) bg_passive_tab_pane_g3_cp3_srt

0x6c34,	// (0x0001276c) bg_active_tab_pane_cp3_srt_ParamLimits

0x6c34,	// (0x0001276c) bg_active_tab_pane_cp3_srt

0xa9db,	// (0x00016513) tabs_4_active_pane_srt_g1

0xa9e3,	// (0x0001651b) tabs_4_active_pane_srt_t1_ParamLimits

0xa9e3,	// (0x0001651b) tabs_4_active_pane_srt_t1

0xa9c9,	// (0x00016501) bg_active_tab_pane_g1_cp3_copy1

0x8547,	// (0x0001407f) bg_active_tab_pane_g2_cp3_copy1

0xa9d2,	// (0x0001650a) bg_active_tab_pane_g3_cp3_copy1

0x6c34,	// (0x0001276c) tabs_2_long_active_pane_srt_ParamLimits

0x6c34,	// (0x0001276c) tabs_2_long_active_pane_srt

0x6c34,	// (0x0001276c) tabs_2_long_passive_pane_srt_ParamLimits

0x6c34,	// (0x0001276c) tabs_2_long_passive_pane_srt

0x7da9,	// (0x000138e1) bg_passive_tab_pane_cp4_srt_ParamLimits

0x7da9,	// (0x000138e1) bg_passive_tab_pane_cp4_srt

0xa5e3,	// (0x0001611b) bg_passive_tab_pane_g1_cp4_srt

0x8547,	// (0x0001407f) bg_passive_tab_pane_g2_cp4_srt

0xa5ec,	// (0x00016124) bg_passive_tab_pane_g3_cp4_srt

0x7d88,	// (0x000138c0) bg_active_tab_pane_cp4_srt_ParamLimits

0x7d88,	// (0x000138c0) bg_active_tab_pane_cp4_srt

0xa5f5,	// (0x0001612d) tabs_2_long_active_pane_srt_t1_ParamLimits

0xa5f5,	// (0x0001612d) tabs_2_long_active_pane_srt_t1

0xa5e3,	// (0x0001611b) bg_active_tab_pane_g1_cp4_srt

0x8547,	// (0x0001407f) bg_active_tab_pane_g2_cp4_srt

0xa5ec,	// (0x00016124) bg_active_tab_pane_g3_cp4_srt

0x6ec9,	// (0x00012a01) tabs_3_long_active_pane_srt_ParamLimits

0x6ec9,	// (0x00012a01) tabs_3_long_active_pane_srt

0x6ec9,	// (0x00012a01) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x6ec9,	// (0x00012a01) tabs_3_long_passive_pane_cp_srt

0x6ec9,	// (0x00012a01) tabs_3_long_passive_pane_srt_ParamLimits

0x6ec9,	// (0x00012a01) tabs_3_long_passive_pane_srt

0x7da9,	// (0x000138e1) bg_passive_tab_pane_cp5_srt_ParamLimits

0x7da9,	// (0x000138e1) bg_passive_tab_pane_cp5_srt

0x85d1,	// (0x00014109) bg_passive_tab_pane_g1_cp5_srt

0x8547,	// (0x0001407f) bg_passive_tab_pane_g2_cp5_srt

0x85da,	// (0x00014112) bg_passive_tab_pane_g3_cp5_srt

0x7d88,	// (0x000138c0) bg_active_tab_pane_cp5_srt_ParamLimits

0x7d88,	// (0x000138c0) bg_active_tab_pane_cp5_srt

0xa5d1,	// (0x00016109) tabs_3_long_active_pane_srt_t1_ParamLimits

0xa5d1,	// (0x00016109) tabs_3_long_active_pane_srt_t1

0x85d1,	// (0x00014109) bg_active_tab_pane_g1_cp5_srt

0x8547,	// (0x0001407f) bg_active_tab_pane_g2_cp5_srt

0x85da,	// (0x00014112) bg_active_tab_pane_g3_cp5_srt

0xa5c3,	// (0x000160fb) navi_text_pane_srt_t1

0xa5bb,	// (0x000160f3) navi_icon_pane_srt_g1

0x8ac0,	// (0x000145f8) midp_editing_number_pane_srt

0x88fa,	// (0x00014432) midp_ticker_pane_srt

0x8ac8,	// (0x00014600) midp_ticker_pane_srt_g1

0x8ad0,	// (0x00014608) midp_ticker_pane_srt_g2

0x0001,

0xf748,	// (0x0001b280) midp_ticker_pane_srt_g

0x8ad8,	// (0x00014610) midp_ticker_pane_srt_t1

0xa5ac,	// (0x000160e4) midp_editing_number_pane_t1_copy1

0x8902,	// (0x0001443a) listscroll_midp_pane

0x8902,	// (0x0001443a) midp_form_pane

0x8972,	// (0x000144aa) midp_info_popup_window_ParamLimits

0x8972,	// (0x000144aa) midp_info_popup_window

0x7cd4,	// (0x0001380c) bg_popup_sub_pane_cp50_ParamLimits

0x7cd4,	// (0x0001380c) bg_popup_sub_pane_cp50

0x96ad,	// (0x000151e5) listscroll_midp_info_pane_ParamLimits

0x96ad,	// (0x000151e5) listscroll_midp_info_pane

0x968d,	// (0x000151c5) listscroll_form_midp_pane_ParamLimits

0x968d,	// (0x000151c5) listscroll_form_midp_pane

0x9699,	// (0x000151d1) scroll_bar_cp050

0x966d,	// (0x000151a5) list_midp_pane

0xb748,	// (0x00017280) signal_pane_g2_cp

0x95a7,	// (0x000150df) listscroll_midp_info_pane_t1_ParamLimits

0x95a7,	// (0x000150df) listscroll_midp_info_pane_t1

0x95bf,	// (0x000150f7) listscroll_midp_info_pane_t2_ParamLimits

0x95bf,	// (0x000150f7) listscroll_midp_info_pane_t2

0x95fd,	// (0x00015135) listscroll_midp_info_pane_t3_ParamLimits

0x95fd,	// (0x00015135) listscroll_midp_info_pane_t3

0x9637,	// (0x0001516f) listscroll_midp_info_pane_t4_ParamLimits

0x9637,	// (0x0001516f) listscroll_midp_info_pane_t4

0x0003,

0xf7fb,	// (0x0001b333) listscroll_midp_info_pane_t_ParamLimits

0xf7fb,	// (0x0001b333) listscroll_midp_info_pane_t

0x7d35,	// (0x0001386d) scroll_pane_cp21

0x9545,	// (0x0001507d) form_midp_field_choice_group_pane

0x954e,	// (0x00015086) form_midp_field_text_pane

0x958d,	// (0x000150c5) form_midp_field_time_pane

0x9595,	// (0x000150cd) form_midp_gauge_slider_pane

0x959e,	// (0x000150d6) form_midp_gauge_wait_pane

0x6b54,	// (0x0001268c) form_midp_image_pane

0x9517,	// (0x0001504f) list_single_midp_pane_ParamLimits

0x9517,	// (0x0001504f) list_single_midp_pane

0x94cf,	// (0x00015007) form_midp_field_text_pane_t1

0x9290,	// (0x00014dc8) input_focus_pane_cp050

0x9506,	// (0x0001503e) list_midp_form_text_pane

0x949e,	// (0x00014fd6) form_midp_field_choice_group_pane_t1

0x94ac,	// (0x00014fe4) input_focus_pane_cp051

0x94c0,	// (0x00014ff8) list_midp_choice_pane

0x6b54,	// (0x0001268c) status_idle_pane

0x9482,	// (0x00014fba) form_midp_field_time_pane_t1

0x3ae6,	// (0x0000f61e) wait_anim_pane_g2_copy1

0x9490,	// (0x00014fc8) form_midp_field_time_pane_t2

0x0001,

0x8a20,	// (0x00014558) aid_navinavi_width_2_pane

0xf7f6,	// (0x0001b32e) form_midp_field_time_pane_t

0x6b54,	// (0x0001268c) input_focus_pane_cp052

0x6b54,	// (0x0001268c) bg_input_focus_pane_cp040

0x9442,	// (0x00014f7a) form_midp_gauge_slider_pane_t1

0x9450,	// (0x00014f88) form_midp_gauge_slider_pane_t2

0x945e,	// (0x00014f96) form_midp_gauge_slider_pane_t3

0x946c,	// (0x00014fa4) form_midp_gauge_slider_pane_t4

0x0003,

0xf7ed,	// (0x0001b325) form_midp_gauge_slider_pane_t

0x947a,	// (0x00014fb2) form_midp_slider_pane

0x6c34,	// (0x0001276c) bg_input_focus_pane_cp041_ParamLimits

0x6c34,	// (0x0001276c) bg_input_focus_pane_cp041

0x940f,	// (0x00014f47) form_midp_gauge_wait_pane_t1_ParamLimits

0x940f,	// (0x00014f47) form_midp_gauge_wait_pane_t1

0x9421,	// (0x00014f59) form_midp_gauge_wait_pane_t2_ParamLimits

0x9421,	// (0x00014f59) form_midp_gauge_wait_pane_t2

0x0001,

0xf7e8,	// (0x0001b320) form_midp_gauge_wait_pane_t_ParamLimits

0xf7e8,	// (0x0001b320) form_midp_gauge_wait_pane_t

0x9433,	// (0x00014f6b) form_midp_wait_pane_ParamLimits

0x9433,	// (0x00014f6b) form_midp_wait_pane

0x93d9,	// (0x00014f11) form_midp_image_pane_g1

0x93e2,	// (0x00014f1a) form_midp_image_pane_t1

0x93f1,	// (0x00014f29) form_midp_image_pane_t2

0x9400,	// (0x00014f38) form_midp_image_pane_t3

0x0002,

0xf7e1,	// (0x0001b319) form_midp_image_pane_t

0x93c1,	// (0x00014ef9) list_single_midp_pane_g1

0x93ca,	// (0x00014f02) list_single_midp_pane_t1

0x9399,	// (0x00014ed1) list_midp_form_item_pane_ParamLimits

0x9399,	// (0x00014ed1) list_midp_form_item_pane

0x89c8,	// (0x00014500) list_midp_form_item_pane_t1

0x89d7,	// (0x0001450f) midp_ticker_pane_g1

0x89e3,	// (0x0001451b) midp_ticker_pane_g2

0x0001,

0xf72e,	// (0x0001b266) midp_ticker_pane_g

0x89ef,	// (0x00014527) midp_ticker_pane_t1

0xa830,	// (0x00016368) midp_editing_number_pane_t1

0xa80e,	// (0x00016346) midp_editing_number_pane

0xa81d,	// (0x00016355) midp_ticker_pane

0xa58a,	// (0x000160c2) ai_message_heading_pane

0x6b54,	// (0x0001268c) bg_popup_window_pane_cp14

0xa592,	// (0x000160ca) listscroll_ai_message_pane

0xa514,	// (0x0001604c) ai_message_heading_pane_g1_ParamLimits

0xa514,	// (0x0001604c) ai_message_heading_pane_g1

0xa520,	// (0x00016058) ai_message_heading_pane_g2_ParamLimits

0xa520,	// (0x00016058) ai_message_heading_pane_g2

0xa52c,	// (0x00016064) ai_message_heading_pane_g3_ParamLimits

0xa52c,	// (0x00016064) ai_message_heading_pane_g3

0xa538,	// (0x00016070) ai_message_heading_pane_g4_ParamLimits

0xa538,	// (0x00016070) ai_message_heading_pane_g4

0x0003,

0xf922,	// (0x0001b45a) ai_message_heading_pane_g_ParamLimits

0xf922,	// (0x0001b45a) ai_message_heading_pane_g

0xa544,	// (0x0001607c) ai_message_heading_pane_t1_ParamLimits

0xa544,	// (0x0001607c) ai_message_heading_pane_t1

0xa55e,	// (0x00016096) ai_message_heading_pane_t2_ParamLimits

0xa55e,	// (0x00016096) ai_message_heading_pane_t2

0x0001,

0xf92b,	// (0x0001b463) ai_message_heading_pane_t_ParamLimits

0xf92b,	// (0x0001b463) ai_message_heading_pane_t

0xa570,	// (0x000160a8) bg_popup_heading_pane_cp1_ParamLimits

0xa570,	// (0x000160a8) bg_popup_heading_pane_cp1

0xa502,	// (0x0001603a) list_ai_message_pane_ParamLimits

0xa502,	// (0x0001603a) list_ai_message_pane

0x7d35,	// (0x0001386d) scroll_pane_cp10

0xa49e,	// (0x00015fd6) list_ai_message_pane_g1

0xa4a6,	// (0x00015fde) list_ai_message_pane_g2

0x0001,

0xf8ff,	// (0x0001b437) list_ai_message_pane_g

0xa4ae,	// (0x00015fe6) list_ai_message_pane_t1_ParamLimits

0xa4ae,	// (0x00015fe6) list_ai_message_pane_t1

0xa4c3,	// (0x00015ffb) list_ai_message_pane_t2_ParamLimits

0xa4c3,	// (0x00015ffb) list_ai_message_pane_t2

0xa4d8,	// (0x00016010) list_ai_message_pane_t3_ParamLimits

0xa4d8,	// (0x00016010) list_ai_message_pane_t3

0xa4ed,	// (0x00016025) list_ai_message_pane_t4_ParamLimits

0xa4ed,	// (0x00016025) list_ai_message_pane_t4

0x0003,

0xf904,	// (0x0001b43c) list_ai_message_pane_t_ParamLimits

0xf904,	// (0x0001b43c) list_ai_message_pane_t

0xa489,	// (0x00015fc1) cell_ai_soft_ind_pane_ParamLimits

0xa489,	// (0x00015fc1) cell_ai_soft_ind_pane

0x8a01,	// (0x00014539) cell_ai_soft_ind_pane_g1_ParamLimits

0x8a01,	// (0x00014539) cell_ai_soft_ind_pane_g1

0x6b54,	// (0x0001268c) grid_highlight_cp1

0x8a0e,	// (0x00014546) text_secondary_cp56_ParamLimits

0x8a0e,	// (0x00014546) text_secondary_cp56

0xa45e,	// (0x00015f96) example_general_pane_ParamLimits

0xa45e,	// (0x00015f96) example_general_pane

0xa46a,	// (0x00015fa2) example_parent_pane_g1_ParamLimits

0xa46a,	// (0x00015fa2) example_parent_pane_g1

0xa476,	// (0x00015fae) example_parent_pane_t1_ParamLimits

0xa476,	// (0x00015fae) example_parent_pane_t1

0x5309,	// (0x00010e41) popup_preview_text_window_ParamLimits

0x5309,	// (0x00010e41) popup_preview_text_window

0x8837,	// (0x0001436f) list_single_pane_cp2_g4

0x6fa5,	// (0x00012add) bg_popup_preview_window_pane_ParamLimits

0x6fa5,	// (0x00012add) bg_popup_preview_window_pane

0xa1ab,	// (0x00015ce3) popup_preview_text_window_t1_ParamLimits

0xa1ab,	// (0x00015ce3) popup_preview_text_window_t1

0xa1c9,	// (0x00015d01) popup_preview_text_window_t2_ParamLimits

0xa1c9,	// (0x00015d01) popup_preview_text_window_t2

0xa212,	// (0x00015d4a) popup_preview_text_window_t3_ParamLimits

0xa212,	// (0x00015d4a) popup_preview_text_window_t3

0xa257,	// (0x00015d8f) popup_preview_text_window_t4_ParamLimits

0xa257,	// (0x00015d8f) popup_preview_text_window_t4

0x0004,

0xf8d3,	// (0x0001b40b) popup_preview_text_window_t_ParamLimits

0xf8d3,	// (0x0001b40b) popup_preview_text_window_t

0xa2d5,	// (0x00015e0d) scroll_pane_cp11

0x916e,	// (0x00014ca6) bg_popup_preview_window_pane_g1

0xa16b,	// (0x00015ca3) bg_popup_preview_window_pane_g2

0xa173,	// (0x00015cab) bg_popup_preview_window_pane_g3

0xa17b,	// (0x00015cb3) bg_popup_preview_window_pane_g4

0xa183,	// (0x00015cbb) bg_popup_preview_window_pane_g5

0xa18b,	// (0x00015cc3) bg_popup_preview_window_pane_g6

0xa193,	// (0x00015ccb) bg_popup_preview_window_pane_g7

0xa19b,	// (0x00015cd3) bg_popup_preview_window_pane_g8

0x44e9,	// (0x00010021) aid_popup_width_pane

0x52e7,	// (0x00010e1f) popup_midp_note_alarm_window_ParamLimits

0x52e7,	// (0x00010e1f) popup_midp_note_alarm_window

0x7a04,	// (0x0001353c) data_form_pane_ParamLimits

0x7a10,	// (0x00013548) form_field_data_pane_g1

0x7a1a,	// (0x00013552) form_field_data_pane_t1_ParamLimits

0x7a32,	// (0x0001356a) input_focus_pane_ParamLimits

0x7a40,	// (0x00013578) data_form_wide_pane_ParamLimits

0x7a4c,	// (0x00013584) form_field_data_wide_pane_g1

0x7a78,	// (0x000135b0) form_field_data_wide_pane_t1_ParamLimits

0x724c,	// (0x00012d84) input_focus_pane_cp6_ParamLimits

0x7ce2,	// (0x0001381a) input_popup_find_pane_g1_ParamLimits

0x7ce2,	// (0x0001381a) input_popup_find_pane_g1

0x4a65,	// (0x0001059d) aid_navi_side_left_pane

0x4a7a,	// (0x000105b2) aid_navi_side_right_pane

0x9b84,	// (0x000156bc) bg_popup_window_pane_cp30_ParamLimits

0x9b84,	// (0x000156bc) bg_popup_window_pane_cp30

0x9bfe,	// (0x00015736) popup_midp_note_alarm_window_g1_ParamLimits

0x9bfe,	// (0x00015736) popup_midp_note_alarm_window_g1

0x9c2e,	// (0x00015766) popup_midp_note_alarm_window_t1_ParamLimits

0x9c2e,	// (0x00015766) popup_midp_note_alarm_window_t1

0x9ccf,	// (0x00015807) popup_midp_note_alarm_window_t2_ParamLimits

0x9ccf,	// (0x00015807) popup_midp_note_alarm_window_t2

0x9d7d,	// (0x000158b5) popup_midp_note_alarm_window_t3_ParamLimits

0x9d7d,	// (0x000158b5) popup_midp_note_alarm_window_t3

0x9daf,	// (0x000158e7) popup_midp_note_alarm_window_t4_ParamLimits

0x9daf,	// (0x000158e7) popup_midp_note_alarm_window_t4

0x9dd5,	// (0x0001590d) popup_midp_note_alarm_window_t5_ParamLimits

0x9dd5,	// (0x0001590d) popup_midp_note_alarm_window_t5

0x000a,

0xf870,	// (0x0001b3a8) popup_midp_note_alarm_window_t_ParamLimits

0xf870,	// (0x0001b3a8) popup_midp_note_alarm_window_t

0x9e81,	// (0x000159b9) wait_bar_pane_cp1_ParamLimits

0x9e81,	// (0x000159b9) wait_bar_pane_cp1

0x6b54,	// (0x0001268c) wait_anim_pane_copy1

0x6b54,	// (0x0001268c) wait_border_pane_copy1

0x986a,	// (0x000153a2) wait_border_pane_g1_copy1

0x7a8f,	// (0x000135c7) form_field_popup_pane_g1

0x7a97,	// (0x000135cf) form_field_popup_pane_t1_ParamLimits

0x7a32,	// (0x0001356a) input_focus_pane_cp7_ParamLimits

0x7aaf,	// (0x000135e7) list_form_pane_ParamLimits

0x7abb,	// (0x000135f3) form_field_popup_wide_pane_g1

0x7ac3,	// (0x000135fb) form_field_popup_wide_pane_t1_ParamLimits

0x7a32,	// (0x0001356a) input_focus_pane_cp8_ParamLimits

0x7ad5,	// (0x0001360d) list_form_wide_pane_ParamLimits

0xaa6b,	// (0x000165a3) aid_size_cell_graphic_pane

0x7ba9,	// (0x000136e1) data_form_pane_t1_ParamLimits

0xa7db,	// (0x00016313) data_form_wide_pane_t1_ParamLimits

0x8d1f,	// (0x00014857) bg_status_flat_pane

0x6b94,	// (0x000126cc) title_pane_t1_ParamLimits

0x6bfc,	// (0x00012734) title_pane_t2_ParamLimits

0x6c22,	// (0x0001275a) title_pane_t3_ParamLimits

0xf532,	// (0x0001b06a) title_pane_t_ParamLimits

0x81b6,	// (0x00013cee) level_1_signal_ParamLimits

0x81c8,	// (0x00013d00) level_2_signal_ParamLimits

0x81db,	// (0x00013d13) level_3_signal_ParamLimits

0x81ee,	// (0x00013d26) level_4_signal_ParamLimits

0x8201,	// (0x00013d39) level_5_signal_ParamLimits

0x8214,	// (0x00013d4c) level_6_signal_ParamLimits

0x8227,	// (0x00013d5f) level_7_signal_ParamLimits

0x81b6,	// (0x00013cee) level_1_battery_ParamLimits

0x81c8,	// (0x00013d00) level_2_battery_ParamLimits

0x81db,	// (0x00013d13) level_3_battery_ParamLimits

0x81ee,	// (0x00013d26) level_4_battery_ParamLimits

0x8201,	// (0x00013d39) level_5_battery_ParamLimits

0x8214,	// (0x00013d4c) level_6_battery_ParamLimits

0x8227,	// (0x00013d5f) level_7_battery_ParamLimits

0x9a89,	// (0x000155c1) bg_status_flat_pane_g1

0x9a91,	// (0x000155c9) bg_status_flat_pane_g2

0x9a99,	// (0x000155d1) bg_status_flat_pane_g3

0x9aa1,	// (0x000155d9) bg_status_flat_pane_g4

0x9aa9,	// (0x000155e1) bg_status_flat_pane_g5

0x9ab1,	// (0x000155e9) bg_status_flat_pane_g6

0x9ab9,	// (0x000155f1) bg_status_flat_pane_g7

0x6c4a,	// (0x00012782) tabs_3_active_pane_t1_ParamLimits

0x6c4a,	// (0x00012782) tabs_3_passive_pane_t1_ParamLimits

0x6c64,	// (0x0001279c) tabs_4_active_pane_t1_ParamLimits

0x6c64,	// (0x0001279c) tabs_4_1_passive_pane_t1_ParamLimits

0x7d76,	// (0x000138ae) tabs_2_active_pane_t1_ParamLimits

0x7d76,	// (0x000138ae) tabs_2_passive_pane_t1_ParamLimits

0x7d88,	// (0x000138c0) bg_active_tab_pane_cp4_ParamLimits

0x7d96,	// (0x000138ce) tabs_2_long_active_pane_t1_ParamLimits

0x7da9,	// (0x000138e1) bg_passive_tab_pane_cp4_ParamLimits

0x562e,	// (0x00011166) list_single_midp_graphic_pane_t1_ParamLimits

0x7d88,	// (0x000138c0) bg_active_tab_pane_cp5_ParamLimits

0x7db5,	// (0x000138ed) tabs_3_long_active_pane_t1_ParamLimits

0x7da9,	// (0x000138e1) bg_passive_tab_pane_cp5_ParamLimits

0x562e,	// (0x00011166) list_single_midp_graphic_pane_t1

0x8d1f,	// (0x00014857) bg_status_flat_pane_ParamLimits

0x8de8,	// (0x00014920) indicator_pane_cp2_ParamLimits

0x8de8,	// (0x00014920) indicator_pane_cp2

0x8f13,	// (0x00014a4b) navi_pane_srt_ParamLimits

0x8f13,	// (0x00014a4b) navi_pane_srt

0x8f37,	// (0x00014a6f) popup_clock_digital_analogue_window_cp1

0x6d2b,	// (0x00012863) indicator_pane_t1

0x88fa,	// (0x00014432) copy_highlight_pane

0x88fa,	// (0x00014432) cursor_graphics_pane

0x88fa,	// (0x00014432) graphic_within_text_pane

0x88fa,	// (0x00014432) link_highlight_pane

0xa298,	// (0x00015dd0) popup_preview_text_window_t5_ParamLimits

0xa298,	// (0x00015dd0) popup_preview_text_window_t5

0x8a28,	// (0x00014560) cursor_digital_pane

0x8a28,	// (0x00014560) cursor_primary_pane

0x8a39,	// (0x00014571) cursor_primary_small_pane

0x8a41,	// (0x00014579) cursor_secondary_pane

0x8a49,	// (0x00014581) cursor_title_pane

0x8a28,	// (0x00014560) link_highlight_digital_pane

0x8a30,	// (0x00014568) link_highlight_primary_pane

0x8a39,	// (0x00014571) link_highlight_primary_small_pane

0x8a41,	// (0x00014579) link_highlight_secondary_pane

0x8a49,	// (0x00014581) link_highlight_title_pane

0x8a28,	// (0x00014560) copy_highlight_digital_pane

0x8a28,	// (0x00014560) copy_highlight_primary_pane

0x8a39,	// (0x00014571) copy_highlight_primary_small_pane

0x8a41,	// (0x00014579) copy_highlight_secondary_pane

0x8a49,	// (0x00014581) copy_highlight_title_pane

0x8a41,	// (0x00014579) graphic_text_digital_pane

0x9b27,	// (0x0001565f) graphic_text_primary_pane

0x9b30,	// (0x00015668) graphic_text_primary_small_pane

0x8a39,	// (0x00014571) graphic_text_secondary_pane

0x8a28,	// (0x00014560) graphic_text_title_pane

0x8a51,	// (0x00014589) cursor_primary_pane_g1

0x9b19,	// (0x00015651) cursor_text_primary_t1

0x9b01,	// (0x00015639) cursor_primary_small_pane_g1

0x9b0b,	// (0x00015643) cursor_text_primary_small_t1

0x9ae9,	// (0x00015621) cursor_primary_small_pane_g1_copy1

0x9af3,	// (0x0001562b) cursor_text_primary_small_t1_copy1

0x9ad1,	// (0x00015609) cursor_text_title_t1

0x9adf,	// (0x00015617) cursor_title_pane_g1

0x8a51,	// (0x00014589) cursor_digital_pane_g1

0x8a5b,	// (0x00014593) cursor_text_digital_t1

0x8a80,	// (0x000145b8) link_highlight_primary_pane_g1

0x9a7a,	// (0x000155b2) link_highlight_primary_pane_t1

0x8a69,	// (0x000145a1) link_highlight_primary_small_pane_g1

0x8a71,	// (0x000145a9) link_highlight_primary_small_pane_t1

0x8a80,	// (0x000145b8) link_highlight_secondary_pane_g1

0x8a88,	// (0x000145c0) link_highlight_secondary_pane_t1

0x99ee,	// (0x00015526) link_highlight_title_pane_g1

0x99f6,	// (0x0001552e) link_highlight_title_pane_t1

0x99d7,	// (0x0001550f) link_highlight_digital_pane_g1

0x99df,	// (0x00015517) link_highlight_digital_pane_t1

0x98af,	// (0x000153e7) copy_highlight_primary_pane_g1

0x98b7,	// (0x000153ef) copy_highlight_primary_pane_t1

0x9889,	// (0x000153c1) copy_highlight_primary_small_pane_g1

0x98a0,	// (0x000153d8) copy_highlight_primary_small_pane_t1

0x8a97,	// (0x000145cf) copy_highlight_secondary_pane_g1

0x8a9f,	// (0x000145d7) copy_highlight_secondary_pane_t1

0x9889,	// (0x000153c1) copy_highlight_title_pane_g1

0x9891,	// (0x000153c9) copy_highlight_title_pane_t1

0x98af,	// (0x000153e7) copy_highlight_digital_pane_g1

0xac39,	// (0x00016771) copy_highlight_digital_pane_t1

0xab8d,	// (0x000166c5) graphic_text_primary_pane_g1

0xac1d,	// (0x00016755) graphic_text_primary_pane_t1

0xac2b,	// (0x00016763) graphic_text_primary_pane_t2

0x0001,

0xf99f,	// (0x0001b4d7) graphic_text_primary_pane_t

0xabf9,	// (0x00016731) graphic_text_primary_small_pane_g1

0xac01,	// (0x00016739) graphic_text_primary_small_pane_t1

0xac0f,	// (0x00016747) graphic_text_primary_small_pane_t2

0x0001,

0xf99a,	// (0x0001b4d2) graphic_text_primary_small_pane_t

0xabd5,	// (0x0001670d) graphic_text_secondary_pane_g1

0xabdd,	// (0x00016715) graphic_text_secondary_pane_t1

0xabeb,	// (0x00016723) graphic_text_secondary_pane_t2

0x0001,

0xf995,	// (0x0001b4cd) graphic_text_secondary_pane_t

0xabb1,	// (0x000166e9) graphic_text_title_pane_g1

0xabb9,	// (0x000166f1) graphic_text_title_pane_t1

0xabc7,	// (0x000166ff) graphic_text_title_pane_t2

0x0001,

0xf990,	// (0x0001b4c8) graphic_text_title_pane_t

0xab8d,	// (0x000166c5) graphic_text_digital_pane_g1

0xab95,	// (0x000166cd) graphic_text_digital_pane_t1

0xaba3,	// (0x000166db) graphic_text_digital_pane_t2

0x0001,

0xf98b,	// (0x0001b4c3) graphic_text_digital_pane_t

0x6c34,	// (0x0001276c) navi_icon_pane_srt_ParamLimits

0x6c34,	// (0x0001276c) navi_icon_pane_srt

0x6b54,	// (0x0001268c) navi_midp_pane_srt

0x6b54,	// (0x0001268c) navi_navi_pane_srt

0x6c34,	// (0x0001276c) navi_text_pane_srt_ParamLimits

0x6c34,	// (0x0001276c) navi_text_pane_srt

0xab58,	// (0x00016690) navi_navi_icon_text_pane_srt

0xab60,	// (0x00016698) navi_navi_pane_srt_g1_ParamLimits

0xab60,	// (0x00016698) navi_navi_pane_srt_g1

0xab72,	// (0x000166aa) navi_navi_pane_srt_g2_ParamLimits

0xab72,	// (0x000166aa) navi_navi_pane_srt_g2

0x0001,

0xf986,	// (0x0001b4be) navi_navi_pane_srt_g_ParamLimits

0xf986,	// (0x0001b4be) navi_navi_pane_srt_g

0xab84,	// (0x000166bc) navi_navi_tabs_pane_srt

0xab58,	// (0x00016690) navi_navi_text_pane_srt

0xab58,	// (0x00016690) navi_navi_volume_pane_srt

0xab49,	// (0x00016681) navi_navi_text_pane_srt_t1

0x59a8,	// (0x000114e0) navi_navi_volume_pane_srt_g1

0x59b0,	// (0x000114e8) volume_small_pane_srt_ParamLimits

0x59b0,	// (0x000114e8) volume_small_pane_srt

0x4d45,	// (0x0001087d) volume_small_pane_srt_g1_ParamLimits

0x4d45,	// (0x0001087d) volume_small_pane_srt_g1

0x4d55,	// (0x0001088d) volume_small_pane_srt_g2_ParamLimits

0x4d55,	// (0x0001088d) volume_small_pane_srt_g2

0x4d66,	// (0x0001089e) volume_small_pane_srt_g3_ParamLimits

0x4d66,	// (0x0001089e) volume_small_pane_srt_g3

0x4d77,	// (0x000108af) volume_small_pane_srt_g4_ParamLimits

0x4d77,	// (0x000108af) volume_small_pane_srt_g4

0x4d88,	// (0x000108c0) volume_small_pane_srt_g5_ParamLimits

0x4d88,	// (0x000108c0) volume_small_pane_srt_g5

0x4d99,	// (0x000108d1) volume_small_pane_srt_g6_ParamLimits

0x4d99,	// (0x000108d1) volume_small_pane_srt_g6

0x4daa,	// (0x000108e2) volume_small_pane_srt_g7_ParamLimits

0x4daa,	// (0x000108e2) volume_small_pane_srt_g7

0x4dbb,	// (0x000108f3) volume_small_pane_srt_g8_ParamLimits

0x4dbb,	// (0x000108f3) volume_small_pane_srt_g8

0x4dcc,	// (0x00010904) volume_small_pane_srt_g9_ParamLimits

0x4dcc,	// (0x00010904) volume_small_pane_srt_g9

0x4ddd,	// (0x00010915) volume_small_pane_srt_g10_ParamLimits

0x4ddd,	// (0x00010915) volume_small_pane_srt_g10

0x0009,

0xf733,	// (0x0001b26b) volume_small_pane_srt_g_ParamLimits

0xf733,	// (0x0001b26b) volume_small_pane_srt_g

0x704e,	// (0x00012b86) query_popup_data_pane_cp2

0xab2f,	// (0x00016667) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xab2f,	// (0x00016667) navi_navi_icon_text_pane_srt_t1

0x9b27,	// (0x0001565f) navi_tabs_2_long_pane_srt

0x9b27,	// (0x0001565f) navi_tabs_2_pane_srt

0x9b27,	// (0x0001565f) navi_tabs_3_long_pane_srt

0x9b27,	// (0x0001565f) navi_tabs_3_pane_srt

0x9b27,	// (0x0001565f) navi_tabs_4_pane_srt

0x5988,	// (0x000114c0) tabs_2_active_pane_srt_ParamLimits

0x5988,	// (0x000114c0) tabs_2_active_pane_srt

0x5998,	// (0x000114d0) tabs_2_passive_pane_srt_ParamLimits

0x5998,	// (0x000114d0) tabs_2_passive_pane_srt

0x8c26,	// (0x0001475e) bg_passive_tab_pane_cp1_srt_ParamLimits

0x8c26,	// (0x0001475e) bg_passive_tab_pane_cp1_srt

0xaafb,	// (0x00016633) bg_passive_tab_pane_g1_cp1_srt

0x8547,	// (0x0001407f) bg_passive_tab_pane_g2_cp1_srt

0xab04,	// (0x0001663c) bg_passive_tab_pane_g3_cp1_srt

0x6c34,	// (0x0001276c) bg_active_tab_pane_cp1_srt_ParamLimits

0x6c34,	// (0x0001276c) bg_active_tab_pane_cp1_srt

0xab0d,	// (0x00016645) tabs_2_active_pane_srt_g1

0xab15,	// (0x0001664d) tabs_2_active_pane_srt_t1_ParamLimits

0xab15,	// (0x0001664d) tabs_2_active_pane_srt_t1

0xaafb,	// (0x00016633) bg_active_tab_pane_g1_cp1_srt

0x8547,	// (0x0001407f) bg_active_tab_pane_g2_cp1_srt

0xab04,	// (0x0001663c) bg_active_tab_pane_g3_cp1_srt

0x5955,	// (0x0001148d) tabs_3_active_pane_srt_ParamLimits

0x5955,	// (0x0001148d) tabs_3_active_pane_srt

0x5966,	// (0x0001149e) tabs_3_passive_pane_cp_srt_ParamLimits

0x5966,	// (0x0001149e) tabs_3_passive_pane_cp_srt

0x5977,	// (0x000114af) tabs_3_passive_pane_srt_ParamLimits

0x5977,	// (0x000114af) tabs_3_passive_pane_srt

0x8c26,	// (0x0001475e) bg_passive_tab_pane_cp2_srt_ParamLimits

0x8c26,	// (0x0001475e) bg_passive_tab_pane_cp2_srt

0x8aae,	// (0x000145e6) bg_passive_tab_pane_g1_cp2_srt

0x8547,	// (0x0001407f) bg_passive_tab_pane_g2_cp2_srt

0x8ab7,	// (0x000145ef) bg_passive_tab_pane_g3_cp2_srt

0x6c34,	// (0x0001276c) bg_active_tab_pane_cp2_srt_ParamLimits

0x6c34,	// (0x0001276c) bg_active_tab_pane_cp2_srt

0xaae1,	// (0x00016619) tabs_3_active_pane_srt_g1

0xaae9,	// (0x00016621) tabs_3_active_pane_srt_t1_ParamLimits

0xaae9,	// (0x00016621) tabs_3_active_pane_srt_t1

0x8aae,	// (0x000145e6) bg_active_tab_pane_g1_cp2_srt

0x8547,	// (0x0001407f) bg_active_tab_pane_g2_cp2_srt

0x8ab7,	// (0x000145ef) bg_active_tab_pane_g3_cp2_srt

0x590d,	// (0x00011445) tabs_4_active_pane_srt_ParamLimits

0x590d,	// (0x00011445) tabs_4_active_pane_srt

0x591f,	// (0x00011457) tabs_4_passive_pane_cp2_srt_ParamLimits

0x591f,	// (0x00011457) tabs_4_passive_pane_cp2_srt

0x4f50,	// (0x00010a88) aid_size_cell_toolbar

0x7da9,	// (0x000138e1) main_idle_act_pane_ParamLimits

0x511d,	// (0x00010c55) popup_large_graphic_colour_window_ParamLimits

0x5484,	// (0x00010fbc) popup_toolbar_window_ParamLimits

0x5484,	// (0x00010fbc) popup_toolbar_window

0xa85a,	// (0x00016392) list_single_graphic_2heading_pane_ParamLimits

0xa85a,	// (0x00016392) list_single_graphic_2heading_pane

0x7f65,	// (0x00013a9d) aid_size_cell_apps_grid_lsc_pane

0x7f77,	// (0x00013aaf) aid_size_cell_apps_grid_prt_pane

0x8c26,	// (0x0001475e) bg_wml_button_pane_cp1_ParamLimits

0x8c26,	// (0x0001475e) bg_wml_button_pane_cp1

0x94cf,	// (0x00015007) form_midp_field_text_pane_t1_ParamLimits

0x9290,	// (0x00014dc8) input_focus_pane_cp050_ParamLimits

0x9506,	// (0x0001503e) list_midp_form_text_pane_ParamLimits

0x94ac,	// (0x00014fe4) input_focus_pane_cp051_ParamLimits

0x94c0,	// (0x00014ff8) list_midp_choice_pane_ParamLimits

0x9349,	// (0x00014e81) list_single_2graphic_pane_cp3_ParamLimits

0x9349,	// (0x00014e81) list_single_2graphic_pane_cp3

0x936a,	// (0x00014ea2) list_single_midp_graphic_pane_ParamLimits

0x936a,	// (0x00014ea2) list_single_midp_graphic_pane

0x5531,	// (0x00011069) list_single_graphic_2heading_pane_g1_ParamLimits

0x5531,	// (0x00011069) list_single_graphic_2heading_pane_g1

0x553d,	// (0x00011075) list_single_graphic_2heading_pane_g4_ParamLimits

0x553d,	// (0x00011075) list_single_graphic_2heading_pane_g4

0x5549,	// (0x00011081) list_single_graphic_2heading_pane_g5_ParamLimits

0x5549,	// (0x00011081) list_single_graphic_2heading_pane_g5

0x0002,

0xf786,	// (0x0001b2be) list_single_graphic_2heading_pane_g_ParamLimits

0xf786,	// (0x0001b2be) list_single_graphic_2heading_pane_g

0x5555,	// (0x0001108d) list_single_graphic_2heading_pane_t1_ParamLimits

0x5555,	// (0x0001108d) list_single_graphic_2heading_pane_t1

0x5569,	// (0x000110a1) list_single_graphic_2heading_pane_t2_ParamLimits

0x5569,	// (0x000110a1) list_single_graphic_2heading_pane_t2

0x5585,	// (0x000110bd) list_single_graphic_2heading_pane_t3_ParamLimits

0x5585,	// (0x000110bd) list_single_graphic_2heading_pane_t3

0x0002,

0xf78d,	// (0x0001b2c5) list_single_graphic_2heading_pane_t_ParamLimits

0xf78d,	// (0x0001b2c5) list_single_graphic_2heading_pane_t

0x9096,	// (0x00014bce) bg_popup_sub_pane_cp2

0x90c0,	// (0x00014bf8) grid_toobar_pane

0x559d,	// (0x000110d5) cell_toolbar_pane_ParamLimits

0x559d,	// (0x000110d5) cell_toolbar_pane

0x9112,	// (0x00014c4a) cell_toolbar_pane_g1_ParamLimits

0x9112,	// (0x00014c4a) cell_toolbar_pane_g1

0x9126,	// (0x00014c5e) cell_toolbar_pane_g2_ParamLimits

0x9126,	// (0x00014c5e) cell_toolbar_pane_g2

0x0001,

0xf79b,	// (0x0001b2d3) cell_toolbar_pane_g_ParamLimits

0xf79b,	// (0x0001b2d3) cell_toolbar_pane_g

0x9148,	// (0x00014c80) grid_highlight_pane_cp2_ParamLimits

0x9148,	// (0x00014c80) grid_highlight_pane_cp2

0x9162,	// (0x00014c9a) toolbar_button_pane

0x916e,	// (0x00014ca6) toolbar_button_pane_g1

0x9176,	// (0x00014cae) toolbar_button_pane_g2

0x917e,	// (0x00014cb6) toolbar_button_pane_g3

0x9186,	// (0x00014cbe) toolbar_button_pane_g4

0x918e,	// (0x00014cc6) toolbar_button_pane_g5

0x9196,	// (0x00014cce) toolbar_button_pane_g6

0x919e,	// (0x00014cd6) toolbar_button_pane_g7

0x91a6,	// (0x00014cde) toolbar_button_pane_g8

0x91ae,	// (0x00014ce6) toolbar_button_pane_g9

0x0009,

0xf7a0,	// (0x0001b2d8) toolbar_button_pane_g

0x55d5,	// (0x0001110d) list_single_2graphic_pane_g1_cp3_ParamLimits

0x55d5,	// (0x0001110d) list_single_2graphic_pane_g1_cp3

0x55e1,	// (0x00011119) list_single_2graphic_pane_g2_cp3_ParamLimits

0x55e1,	// (0x00011119) list_single_2graphic_pane_g2_cp3

0x55f2,	// (0x0001112a) list_single_2graphic_pane_g3_cp3

0x55fa,	// (0x00011132) list_single_2graphic_pane_g4_cp3_ParamLimits

0x55fa,	// (0x00011132) list_single_2graphic_pane_g4_cp3

0x5606,	// (0x0001113e) list_single_2graphic_pane_t1_cp3_ParamLimits

0x5606,	// (0x0001113e) list_single_2graphic_pane_t1_cp3

0x5622,	// (0x0001115a) list_single_midp_graphic_pane_g2_ParamLimits

0x5622,	// (0x0001115a) list_single_midp_graphic_pane_g2

0x4f58,	// (0x00010a90) aid_zoom_text_primary

0x4f60,	// (0x00010a98) aid_zoom_text_secondary

0x8b68,	// (0x000146a0) status_small_pane_g7_ParamLimits

0x8b68,	// (0x000146a0) status_small_pane_g7

0x8b8b,	// (0x000146c3) status_small_pane_t1_ParamLimits

0x6b6b,	// (0x000126a3) title_pane_g2

0x0003,

0xf529,	// (0x0001b061) title_pane_g

0x70f6,	// (0x00012c2e) aid_size_cell_colour_1_pane_ParamLimits

0x70f6,	// (0x00012c2e) aid_size_cell_colour_1_pane

0x710a,	// (0x00012c42) aid_size_cell_colour_2_pane_ParamLimits

0x710a,	// (0x00012c42) aid_size_cell_colour_2_pane

0x711e,	// (0x00012c56) aid_size_cell_colour_3_pane_ParamLimits

0x711e,	// (0x00012c56) aid_size_cell_colour_3_pane

0x7132,	// (0x00012c6a) aid_size_cell_colour_4_pane_ParamLimits

0x7132,	// (0x00012c6a) aid_size_cell_colour_4_pane

0x49a2,	// (0x000104da) title_pane_stacon_g1_ParamLimits

0x49a2,	// (0x000104da) title_pane_stacon_g1

0x990e,	// (0x00015446) popup_note_wait_window_g3_ParamLimits

0x990e,	// (0x00015446) popup_note_wait_window_g3

0x9984,	// (0x000154bc) popup_note_wait_window_t5_ParamLimits

0x9984,	// (0x000154bc) popup_note_wait_window_t5

0x6b54,	// (0x0001268c) main_feb_china_hwr_fs_writing_pane

0x4ffe,	// (0x00010b36) popup_feb_china_hwr_fs_window_ParamLimits

0x4ffe,	// (0x00010b36) popup_feb_china_hwr_fs_window

0x5644,	// (0x0001117c) aid_size_cell_hwr_fs_ParamLimits

0x5644,	// (0x0001117c) aid_size_cell_hwr_fs

0x9290,	// (0x00014dc8) bg_popup_sub_pane_cp3_ParamLimits

0x9290,	// (0x00014dc8) bg_popup_sub_pane_cp3

0x5659,	// (0x00011191) grid_hwr_fs_pane_ParamLimits

0x5659,	// (0x00011191) grid_hwr_fs_pane

0x5671,	// (0x000111a9) linegrid_hwr_fs_pane_ParamLimits

0x5671,	// (0x000111a9) linegrid_hwr_fs_pane

0x5681,	// (0x000111b9) cell_hwr_fs_pane_ParamLimits

0x5681,	// (0x000111b9) cell_hwr_fs_pane

0x929c,	// (0x00014dd4) linegrid_hwr_fs_pane_g1_ParamLimits

0x929c,	// (0x00014dd4) linegrid_hwr_fs_pane_g1

0x92a8,	// (0x00014de0) linegrid_hwr_fs_pane_g2_ParamLimits

0x92a8,	// (0x00014de0) linegrid_hwr_fs_pane_g2

0x92ba,	// (0x00014df2) linegrid_hwr_fs_pane_g3_ParamLimits

0x92ba,	// (0x00014df2) linegrid_hwr_fs_pane_g3

0x56a3,	// (0x000111db) linegrid_hwr_fs_pane_g4_ParamLimits

0x56a3,	// (0x000111db) linegrid_hwr_fs_pane_g4

0x56bd,	// (0x000111f5) linegrid_hwr_fs_pane_g5_ParamLimits

0x56bd,	// (0x000111f5) linegrid_hwr_fs_pane_g5

0x0004,

0xf7c6,	// (0x0001b2fe) linegrid_hwr_fs_pane_g_ParamLimits

0xf7c6,	// (0x0001b2fe) linegrid_hwr_fs_pane_g

0x92c6,	// (0x00014dfe) cell_hwr_fs_pane_g1_ParamLimits

0x92c6,	// (0x00014dfe) cell_hwr_fs_pane_g1

0x8fcd,	// (0x00014b05) cell_hwr_fs_pane_g2_ParamLimits

0x8fcd,	// (0x00014b05) cell_hwr_fs_pane_g2

0x92dc,	// (0x00014e14) cell_hwr_fs_pane_g3_ParamLimits

0x92dc,	// (0x00014e14) cell_hwr_fs_pane_g3

0x92e9,	// (0x00014e21) cell_hwr_fs_pane_g4_ParamLimits

0x92e9,	// (0x00014e21) cell_hwr_fs_pane_g4

0x0003,

0xf7d1,	// (0x0001b309) cell_hwr_fs_pane_g_ParamLimits

0xf7d1,	// (0x0001b309) cell_hwr_fs_pane_g

0x56d3,	// (0x0001120b) cell_hwr_fs_pane_t1

0x6b54,	// (0x0001268c) grid_highlight_pane_cp6

0x6b54,	// (0x0001268c) main_idle_act2_pane

0x7d1c,	// (0x00013854) aid_inside_area_popup_secondary

0x9fbb,	// (0x00015af3) aid_inside_area_window_primary_ParamLimits

0x9fbb,	// (0x00015af3) aid_inside_area_window_primary

0xac48,	// (0x00016780) ai2_news_ticker_pane

0xac50,	// (0x00016788) aid_size_cell_ai1_link_ParamLimits

0xac50,	// (0x00016788) aid_size_cell_ai1_link

0xac6a,	// (0x000167a2) popup_ai2_data_window_ParamLimits

0xac6a,	// (0x000167a2) popup_ai2_data_window

0xac80,	// (0x000167b8) popup_ai2_link_window_ParamLimits

0xac80,	// (0x000167b8) popup_ai2_link_window

0x9290,	// (0x00014dc8) bg_popup_sub_pane_cp4_ParamLimits

0x9290,	// (0x00014dc8) bg_popup_sub_pane_cp4

0xac94,	// (0x000167cc) grid_ai2_link_pane_ParamLimits

0xac94,	// (0x000167cc) grid_ai2_link_pane

0xacab,	// (0x000167e3) popup_ai2_link_window_g1_ParamLimits

0xacab,	// (0x000167e3) popup_ai2_link_window_g1

0xacb7,	// (0x000167ef) popup_ai2_link_window_g2_ParamLimits

0xacb7,	// (0x000167ef) popup_ai2_link_window_g2

0x0001,

0xf9a4,	// (0x0001b4dc) popup_ai2_link_window_g_ParamLimits

0xf9a4,	// (0x0001b4dc) popup_ai2_link_window_g

0xacc6,	// (0x000167fe) ai2_mp_button_pane

0xacce,	// (0x00016806) ai2_mp_volume_pane

0x94ac,	// (0x00014fe4) bg_popup_sub_pane_cp5_ParamLimits

0x94ac,	// (0x00014fe4) bg_popup_sub_pane_cp5

0xacd6,	// (0x0001680e) heading_ai2_gene_pane_ParamLimits

0xacd6,	// (0x0001680e) heading_ai2_gene_pane

0xace2,	// (0x0001681a) list_ai2_gene_pane_ParamLimits

0xace2,	// (0x0001681a) list_ai2_gene_pane

0xad2a,	// (0x00016862) cell_ai2_link_pane_ParamLimits

0xad2a,	// (0x00016862) cell_ai2_link_pane

0xad40,	// (0x00016878) cell_ai2_link_pane_g1

0x6b54,	// (0x0001268c) grid_highlight_pane_cp7

0x59c5,	// (0x000114fd) ai2_mp_volume_pane_g1

0xae10,	// (0x00016948) ai2_mp_volume_pane_g2

0xad85,	// (0x000168bd) list_ai2_gene_pane_t1

0xae18,	// (0x00016950) ai2_mp_volume_pane_g3

0x0002,

0xf9bd,	// (0x0001b4f5) ai2_mp_volume_pane_g

0x59cd,	// (0x00011505) volume_small_pane_cp3

0xae20,	// (0x00016958) aid_size_cell_ai2_button

0xae28,	// (0x00016960) grid_ai2_button_pane

0xae31,	// (0x00016969) cell_ai2_button_pane_ParamLimits

0xae31,	// (0x00016969) cell_ai2_button_pane

0x3ae6,	// (0x0000f61e) cell_ai2_button_pane_g1

0x6b54,	// (0x0001268c) grid_highlight_pane_cp8

0xadd0,	// (0x00016908) ai2_gene_pane_t1_ParamLimits

0xadd0,	// (0x00016908) ai2_gene_pane_t1

0x4f46,	// (0x00010a7e) aid_height_parent_landscape

0xa643,	// (0x0001617b) aid_height_set_list

0xa654,	// (0x0001618c) aid_size_parent

0xaa6b,	// (0x000165a3) aid_size_cell_graphic_pane_ParamLimits

0xacf2,	// (0x0001682a) popup_ai2_data_window_g1_ParamLimits

0xacf2,	// (0x0001682a) popup_ai2_data_window_g1

0xacfe,	// (0x00016836) ai2_news_ticker_pane_g1

0xad06,	// (0x0001683e) ai2_news_ticker_pane_g2

0x0001,

0xf9a9,	// (0x0001b4e1) ai2_news_ticker_pane_g

0xad0e,	// (0x00016846) ai2_news_ticker_pane_t1

0xad1c,	// (0x00016854) ai2_news_ticker_pane_t2

0x0001,

0xf9ae,	// (0x0001b4e6) ai2_news_ticker_pane_t

0xad49,	// (0x00016881) heading_ai2_gene_pane_g1

0xad51,	// (0x00016889) heading_ai2_gene_pane_t1_ParamLimits

0xad51,	// (0x00016889) heading_ai2_gene_pane_t1

0xad66,	// (0x0001689e) list_highlight_pane_cp6

0xad6e,	// (0x000168a6) ai2_gene_pane_ParamLimits

0xad6e,	// (0x000168a6) ai2_gene_pane

0xad93,	// (0x000168cb) list_ai2_gene_pane_t2

0x0001,

0xf9b3,	// (0x0001b4eb) list_ai2_gene_pane_t

0xada1,	// (0x000168d9) list_highlight_pane_cp8_ParamLimits

0xada1,	// (0x000168d9) list_highlight_pane_cp8

0xadb2,	// (0x000168ea) ai2_gene_pane_g1_ParamLimits

0xadb2,	// (0x000168ea) ai2_gene_pane_g1

0xadc4,	// (0x000168fc) ai2_gene_pane_g2_ParamLimits

0xadc4,	// (0x000168fc) ai2_gene_pane_g2

0x0001,

0xf9b8,	// (0x0001b4f0) ai2_gene_pane_g_ParamLimits

0xf9b8,	// (0x0001b4f0) ai2_gene_pane_g

0x7471,	// (0x00012fa9) scroll_pane_cp12

0x4f03,	// (0x00010a3b) control_pane_t3_ParamLimits

0x4f03,	// (0x00010a3b) control_pane_t3

0x8b7c,	// (0x000146b4) status_small_pane_g8_ParamLimits

0x8b7c,	// (0x000146b4) status_small_pane_g8

0x50e4,	// (0x00010c1c) popup_find_window_ParamLimits

0x52fb,	// (0x00010e33) popup_note_image_window_ParamLimits

0x7508,	// (0x00013040) list_double2_graphic_pane_vc_g1_ParamLimits

0x7508,	// (0x00013040) list_double2_graphic_pane_vc_g1

0x748e,	// (0x00012fc6) list_double2_graphic_pane_vc_g2_ParamLimits

0x748e,	// (0x00012fc6) list_double2_graphic_pane_vc_g2

0x749a,	// (0x00012fd2) list_double2_graphic_pane_vc_g3_ParamLimits

0x749a,	// (0x00012fd2) list_double2_graphic_pane_vc_g3

0x0002,

0xf794,	// (0x0001b2cc) list_double2_graphic_pane_vc_g_ParamLimits

0xf794,	// (0x0001b2cc) list_double2_graphic_pane_vc_g

0x90fc,	// (0x00014c34) list_double2_graphic_pane_vc_t1_ParamLimits

0x90fc,	// (0x00014c34) list_double2_graphic_pane_vc_t1

0x748e,	// (0x00012fc6) list_single_heading_pane_vc_g1_ParamLimits

0x748e,	// (0x00012fc6) list_single_heading_pane_vc_g1

0x749a,	// (0x00012fd2) list_single_heading_pane_vc_g2_ParamLimits

0x749a,	// (0x00012fd2) list_single_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x0001b0db) list_single_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x0001b0db) list_single_heading_pane_vc_g

0x91b6,	// (0x00014cee) list_single_heading_pane_vc_t1_ParamLimits

0x91b6,	// (0x00014cee) list_single_heading_pane_vc_t1

0x91cc,	// (0x00014d04) list_single_heading_pane_vc_t2_ParamLimits

0x91cc,	// (0x00014d04) list_single_heading_pane_vc_t2

0x0001,

0xf7b5,	// (0x0001b2ed) list_single_heading_pane_vc_t_ParamLimits

0xf7b5,	// (0x0001b2ed) list_single_heading_pane_vc_t

0x91de,	// (0x00014d16) list_setting_number_pane_vc_g1_ParamLimits

0x91de,	// (0x00014d16) list_setting_number_pane_vc_g1

0x91ea,	// (0x00014d22) list_setting_number_pane_vc_g2_ParamLimits

0x91ea,	// (0x00014d22) list_setting_number_pane_vc_g2

0x0001,

0xf7ba,	// (0x0001b2f2) list_setting_number_pane_vc_g_ParamLimits

0xf7ba,	// (0x0001b2f2) list_setting_number_pane_vc_g

0x91f6,	// (0x00014d2e) list_setting_number_pane_vc_t1_ParamLimits

0x91f6,	// (0x00014d2e) list_setting_number_pane_vc_t1

0x920a,	// (0x00014d42) list_setting_number_pane_vc_t2_ParamLimits

0x920a,	// (0x00014d42) list_setting_number_pane_vc_t2

0x9226,	// (0x00014d5e) list_setting_number_pane_vc_t3_ParamLimits

0x9226,	// (0x00014d5e) list_setting_number_pane_vc_t3

0x0002,

0xf7bf,	// (0x0001b2f7) list_setting_number_pane_vc_t_ParamLimits

0xf7bf,	// (0x0001b2f7) list_setting_number_pane_vc_t

0x9254,	// (0x00014d8c) set_value_pane_vc_ParamLimits

0x9254,	// (0x00014d8c) set_value_pane_vc

0xa85a,	// (0x00016392) list_double2_graphic_pane_vc_ParamLimits

0xa85a,	// (0x00016392) list_double2_graphic_pane_vc

0xa85a,	// (0x00016392) list_double2_large_graphic_pane_vc_ParamLimits

0xa85a,	// (0x00016392) list_double2_large_graphic_pane_vc

0xa85a,	// (0x00016392) list_double2_pane_vc_ParamLimits

0xa85a,	// (0x00016392) list_double2_pane_vc

0xa85a,	// (0x00016392) list_double_graphic_heading_pane_vc_ParamLimits

0xa85a,	// (0x00016392) list_double_graphic_heading_pane_vc

0xa85a,	// (0x00016392) list_double_graphic_pane_vc_ParamLimits

0xa85a,	// (0x00016392) list_double_graphic_pane_vc

0xa85a,	// (0x00016392) list_double_heading_pane_vc_ParamLimits

0xa85a,	// (0x00016392) list_double_heading_pane_vc

0xa86c,	// (0x000163a4) list_double_large_graphic_pane_vc_ParamLimits

0xa86c,	// (0x000163a4) list_double_large_graphic_pane_vc

0xa85a,	// (0x00016392) list_double_number_pane_vc_ParamLimits

0xa85a,	// (0x00016392) list_double_number_pane_vc

0xa85a,	// (0x00016392) list_double_pane_vc_ParamLimits

0xa85a,	// (0x00016392) list_double_pane_vc

0xa85a,	// (0x00016392) list_double_time_pane_vc_ParamLimits

0xa85a,	// (0x00016392) list_double_time_pane_vc

0xa85a,	// (0x00016392) list_setting_number_pane_vc_ParamLimits

0xa85a,	// (0x00016392) list_setting_number_pane_vc

0xa85a,	// (0x00016392) list_setting_pane_vc_ParamLimits

0xa85a,	// (0x00016392) list_setting_pane_vc

0xa85a,	// (0x00016392) list_single_graphic_heading_pane_vc_ParamLimits

0xa85a,	// (0x00016392) list_single_graphic_heading_pane_vc

0xa85a,	// (0x00016392) list_single_heading_pane_vc_ParamLimits

0xa85a,	// (0x00016392) list_single_heading_pane_vc

0xa88a,	// (0x000163c2) list_single_number_heading_pane_vc_ParamLimits

0xa88a,	// (0x000163c2) list_single_number_heading_pane_vc

0x7508,	// (0x00013040) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x7508,	// (0x00013040) list_double_graphic_heading_pane_vc_g1

0xae65,	// (0x0001699d) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xae65,	// (0x0001699d) list_double_graphic_heading_pane_vc_g2

0xae71,	// (0x000169a9) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xae71,	// (0x000169a9) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9c4,	// (0x0001b4fc) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9c4,	// (0x0001b4fc) list_double_graphic_heading_pane_vc_g

0xae7d,	// (0x000169b5) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xae7d,	// (0x000169b5) list_double_graphic_heading_pane_vc_t1

0xae99,	// (0x000169d1) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xae99,	// (0x000169d1) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9cb,	// (0x0001b503) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9cb,	// (0x0001b503) list_double_graphic_heading_pane_vc_t

0x91de,	// (0x00014d16) list_setting_pane_vc_g1_ParamLimits

0x91de,	// (0x00014d16) list_setting_pane_vc_g1

0x91ea,	// (0x00014d22) list_setting_pane_vc_g2_ParamLimits

0x91ea,	// (0x00014d22) list_setting_pane_vc_g2

0x0001,

0xf7ba,	// (0x0001b2f2) list_setting_pane_vc_g_ParamLimits

0xf7ba,	// (0x0001b2f2) list_setting_pane_vc_g

0xb0c7,	// (0x00016bff) list_setting_pane_vc_t1_ParamLimits

0xb0c7,	// (0x00016bff) list_setting_pane_vc_t1

0xb0e3,	// (0x00016c1b) list_setting_pane_vc_t2_ParamLimits

0xb0e3,	// (0x00016c1b) list_setting_pane_vc_t2

0x0001,

0xf9f9,	// (0x0001b531) list_setting_pane_vc_t_ParamLimits

0xf9f9,	// (0x0001b531) list_setting_pane_vc_t

0x9254,	// (0x00014d8c) set_value_pane_cp_vc_ParamLimits

0x9254,	// (0x00014d8c) set_value_pane_cp_vc

0x748e,	// (0x00012fc6) list_single_number_heading_pane_vc_g1_ParamLimits

0x748e,	// (0x00012fc6) list_single_number_heading_pane_vc_g1

0x749a,	// (0x00012fd2) list_single_number_heading_pane_vc_g2_ParamLimits

0x749a,	// (0x00012fd2) list_single_number_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x0001b0db) list_single_number_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x0001b0db) list_single_number_heading_pane_vc_g

0x74bc,	// (0x00012ff4) list_single_number_heading_pane_vc_t1_ParamLimits

0x74bc,	// (0x00012ff4) list_single_number_heading_pane_vc_t1

0xb0ff,	// (0x00016c37) list_single_number_heading_pane_vc_t2_ParamLimits

0xb0ff,	// (0x00016c37) list_single_number_heading_pane_vc_t2

0x74f6,	// (0x0001302e) list_single_number_heading_pane_vc_t3_ParamLimits

0x74f6,	// (0x0001302e) list_single_number_heading_pane_vc_t3

0x0002,

0xf9fe,	// (0x0001b536) list_single_number_heading_pane_vc_t_ParamLimits

0xf9fe,	// (0x0001b536) list_single_number_heading_pane_vc_t

0x7508,	// (0x00013040) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x7508,	// (0x00013040) list_single_graphic_heading_pane_vc_g1

0x748e,	// (0x00012fc6) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x748e,	// (0x00012fc6) list_single_graphic_heading_pane_vc_g4

0x749a,	// (0x00012fd2) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x749a,	// (0x00012fd2) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf794,	// (0x0001b2cc) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf794,	// (0x0001b2cc) list_single_graphic_heading_pane_vc_g

0x74bc,	// (0x00012ff4) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x74bc,	// (0x00012ff4) list_single_graphic_heading_pane_vc_t1

0xb115,	// (0x00016c4d) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xb115,	// (0x00016c4d) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa05,	// (0x0001b53d) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa05,	// (0x0001b53d) list_single_graphic_heading_pane_vc_t

0x748e,	// (0x00012fc6) list_double2_pane_vc_g1_ParamLimits

0x748e,	// (0x00012fc6) list_double2_pane_vc_g1

0x749a,	// (0x00012fd2) list_double2_pane_vc_g2_ParamLimits

0x749a,	// (0x00012fd2) list_double2_pane_vc_g2

0x0001,

0xf5a3,	// (0x0001b0db) list_double2_pane_vc_g_ParamLimits

0xf5a3,	// (0x0001b0db) list_double2_pane_vc_g

0xa7f8,	// (0x00016330) list_double2_pane_vc_t1_ParamLimits

0xa7f8,	// (0x00016330) list_double2_pane_vc_t1

0xb127,	// (0x00016c5f) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xb127,	// (0x00016c5f) list_double2_large_graphic_pane_vc_g1

0x748e,	// (0x00012fc6) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x748e,	// (0x00012fc6) list_double2_large_graphic_pane_vc_g2

0x749a,	// (0x00012fd2) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x749a,	// (0x00012fd2) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa0a,	// (0x0001b542) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa0a,	// (0x0001b542) list_double2_large_graphic_pane_vc_g

0xb133,	// (0x00016c6b) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xb133,	// (0x00016c6b) list_double2_large_graphic_pane_vc_t1

0xb149,	// (0x00016c81) list_double_time_pane_vc_g1_ParamLimits

0xb149,	// (0x00016c81) list_double_time_pane_vc_g1

0xb155,	// (0x00016c8d) list_double_time_pane_vc_g2_ParamLimits

0xb155,	// (0x00016c8d) list_double_time_pane_vc_g2

0x0001,

0xfa11,	// (0x0001b549) list_double_time_pane_vc_g_ParamLimits

0xfa11,	// (0x0001b549) list_double_time_pane_vc_g

0xb161,	// (0x00016c99) list_double_time_pane_vc_t1_ParamLimits

0xb161,	// (0x00016c99) list_double_time_pane_vc_t1

0xb185,	// (0x00016cbd) list_double_time_pane_vc_t2_ParamLimits

0xb185,	// (0x00016cbd) list_double_time_pane_vc_t2

0xb1b4,	// (0x00016cec) list_double_time_pane_vc_t3_ParamLimits

0xb1b4,	// (0x00016cec) list_double_time_pane_vc_t3

0xb1c6,	// (0x00016cfe) list_double_time_pane_vc_t4_ParamLimits

0xb1c6,	// (0x00016cfe) list_double_time_pane_vc_t4

0x0003,

0xfa16,	// (0x0001b54e) list_double_time_pane_vc_t_ParamLimits

0xfa16,	// (0x0001b54e) list_double_time_pane_vc_t

0x748e,	// (0x00012fc6) list_double_pane_vc_g1_ParamLimits

0x748e,	// (0x00012fc6) list_double_pane_vc_g1

0x749a,	// (0x00012fd2) list_double_pane_vc_g2_ParamLimits

0x749a,	// (0x00012fd2) list_double_pane_vc_g2

0x0001,

0xf5a3,	// (0x0001b0db) list_double_pane_vc_g_ParamLimits

0xf5a3,	// (0x0001b0db) list_double_pane_vc_g

0xb1da,	// (0x00016d12) list_double_pane_vc_t1_ParamLimits

0xb1da,	// (0x00016d12) list_double_pane_vc_t1

0xb1ee,	// (0x00016d26) list_double_pane_vc_t2_ParamLimits

0xb1ee,	// (0x00016d26) list_double_pane_vc_t2

0x0001,

0xfa1f,	// (0x0001b557) list_double_pane_vc_t_ParamLimits

0xfa1f,	// (0x0001b557) list_double_pane_vc_t

0x748e,	// (0x00012fc6) list_double_number_pane_vc_g1_ParamLimits

0x748e,	// (0x00012fc6) list_double_number_pane_vc_g1

0x749a,	// (0x00012fd2) list_double_number_pane_vc_g2_ParamLimits

0x749a,	// (0x00012fd2) list_double_number_pane_vc_g2

0x0001,

0xf5a3,	// (0x0001b0db) list_double_number_pane_vc_g_ParamLimits

0xf5a3,	// (0x0001b0db) list_double_number_pane_vc_g

0xb206,	// (0x00016d3e) list_double_number_pane_vc_t1_ParamLimits

0xb206,	// (0x00016d3e) list_double_number_pane_vc_t1

0xb218,	// (0x00016d50) list_double_number_pane_vc_t2_ParamLimits

0xb218,	// (0x00016d50) list_double_number_pane_vc_t2

0xb22c,	// (0x00016d64) list_double_number_pane_vc_t3_ParamLimits

0xb22c,	// (0x00016d64) list_double_number_pane_vc_t3

0x0002,

0xfa24,	// (0x0001b55c) list_double_number_pane_vc_t_ParamLimits

0xfa24,	// (0x0001b55c) list_double_number_pane_vc_t

0xb244,	// (0x00016d7c) list_double_large_graphic_pane_vc_g1_ParamLimits

0xb244,	// (0x00016d7c) list_double_large_graphic_pane_vc_g1

0xb260,	// (0x00016d98) list_double_large_graphic_pane_vc_g2_ParamLimits

0xb260,	// (0x00016d98) list_double_large_graphic_pane_vc_g2

0xb274,	// (0x00016dac) list_double_large_graphic_pane_vc_g3_ParamLimits

0xb274,	// (0x00016dac) list_double_large_graphic_pane_vc_g3

0xb283,	// (0x00016dbb) list_double_large_graphic_pane_vc_g4_ParamLimits

0xb283,	// (0x00016dbb) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa2b,	// (0x0001b563) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa2b,	// (0x0001b563) list_double_large_graphic_pane_vc_g

0xb292,	// (0x00016dca) list_double_large_graphic_pane_vc_t1_ParamLimits

0xb292,	// (0x00016dca) list_double_large_graphic_pane_vc_t1

0xb2ae,	// (0x00016de6) list_double_large_graphic_pane_vc_t2_ParamLimits

0xb2ae,	// (0x00016de6) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa34,	// (0x0001b56c) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa34,	// (0x0001b56c) list_double_large_graphic_pane_vc_t

0xae65,	// (0x0001699d) list_double_heading_pane_vc_g1_ParamLimits

0xae65,	// (0x0001699d) list_double_heading_pane_vc_g1

0xae71,	// (0x000169a9) list_double_heading_pane_vc_g2_ParamLimits

0xae71,	// (0x000169a9) list_double_heading_pane_vc_g2

0x0001,

0xfa39,	// (0x0001b571) list_double_heading_pane_vc_g_ParamLimits

0xfa39,	// (0x0001b571) list_double_heading_pane_vc_g

0xb2d0,	// (0x00016e08) list_double_heading_pane_vc_t1_ParamLimits

0xb2d0,	// (0x00016e08) list_double_heading_pane_vc_t1

0xb2e4,	// (0x00016e1c) list_double_heading_pane_vc_t2_ParamLimits

0xb2e4,	// (0x00016e1c) list_double_heading_pane_vc_t2

0x0001,

0xfa3e,	// (0x0001b576) list_double_heading_pane_vc_t_ParamLimits

0xfa3e,	// (0x0001b576) list_double_heading_pane_vc_t

0xb2fc,	// (0x00016e34) list_double_graphic_pane_vc_g1_ParamLimits

0xb2fc,	// (0x00016e34) list_double_graphic_pane_vc_g1

0xb308,	// (0x00016e40) list_double_graphic_pane_vc_g2_ParamLimits

0xb308,	// (0x00016e40) list_double_graphic_pane_vc_g2

0x748e,	// (0x00012fc6) list_double_graphic_pane_vc_g3_ParamLimits

0x748e,	// (0x00012fc6) list_double_graphic_pane_vc_g3

0x0003,

0xfa43,	// (0x0001b57b) list_double_graphic_pane_vc_g_ParamLimits

0xfa43,	// (0x0001b57b) list_double_graphic_pane_vc_g

0xb325,	// (0x00016e5d) list_double_graphic_pane_vc_t1_ParamLimits

0xb325,	// (0x00016e5d) list_double_graphic_pane_vc_t1

0xb34f,	// (0x00016e87) list_double_graphic_pane_vc_t2_ParamLimits

0xb34f,	// (0x00016e87) list_double_graphic_pane_vc_t2

0x0001,

0xfa4c,	// (0x0001b584) list_double_graphic_pane_vc_t_ParamLimits

0xfa4c,	// (0x0001b584) list_double_graphic_pane_vc_t

0x44f5,	// (0x0001002d) aid_size_cell_fastswap

0x44fd,	// (0x00010035) aid_size_cell_touch_ParamLimits

0x44fd,	// (0x00010035) aid_size_cell_touch

0x4762,	// (0x0001029a) popup_fast_swap_wide_window_ParamLimits

0x4762,	// (0x0001029a) popup_fast_swap_wide_window

0x4876,	// (0x000103ae) touch_pane_ParamLimits

0x4876,	// (0x000103ae) touch_pane

0x794c,	// (0x00013484) button_value_adjust_pane_cp2

0x7954,	// (0x0001348c) button_value_adjust_pane_cp4

0x7976,	// (0x000134ae) form_field_data_pane_cp2

0x7997,	// (0x000134cf) form_field_data_wide_pane_cp2

0x8034,	// (0x00013b6c) bg_scroll_pane_ParamLimits

0x4b04,	// (0x0001063c) scroll_handle_pane_ParamLimits

0x4b18,	// (0x00010650) scroll_sc2_down_pane_ParamLimits

0x4b18,	// (0x00010650) scroll_sc2_down_pane

0x8065,	// (0x00013b9d) scroll_sc2_up_pane_ParamLimits

0x8065,	// (0x00013b9d) scroll_sc2_up_pane

0xb81d,	// (0x00017355) grid_wheel_folder_pane_g1_ParamLimits

0xb81d,	// (0x00017355) grid_wheel_folder_pane_g1

0x4cdd,	// (0x00010815) clock_nsta_pane_cp2_ParamLimits

0x4cdd,	// (0x00010815) clock_nsta_pane_cp2

0x8902,	// (0x0001443a) listscroll_midp_pane_ParamLimits

0x890e,	// (0x00014446) midp_canvas_pane

0x8bf6,	// (0x0001472e) nsta_clock_indic_pane

0x8c32,	// (0x0001476a) listscroll_form_pane_vc

0x8c3a,	// (0x00014772) listscroll_set_pane_vc_ParamLimits

0x8c3a,	// (0x00014772) listscroll_set_pane_vc

0x8d3b,	// (0x00014873) clock_nsta_pane

0x8db6,	// (0x000148ee) indicator_nsta_pane

0x9096,	// (0x00014bce) bg_popup_sub_pane_cp2_ParamLimits

0x90aa,	// (0x00014be2) find_pane_cp2_ParamLimits

0x90aa,	// (0x00014be2) find_pane_cp2

0x90c0,	// (0x00014bf8) grid_toobar_pane_ParamLimits

0x9264,	// (0x00014d9c) list_form_gen_pane_vc_ParamLimits

0x9264,	// (0x00014d9c) list_form_gen_pane_vc

0x927a,	// (0x00014db2) scroll_pane_cp8_vc_ParamLimits

0x927a,	// (0x00014db2) scroll_pane_cp8_vc

0x92f6,	// (0x00014e2e) data_form_wide_pane_vc_ParamLimits

0x92f6,	// (0x00014e2e) data_form_wide_pane_vc

0x9302,	// (0x00014e3a) form_field_data_wide_pane_vc_g1

0x930a,	// (0x00014e42) form_field_data_wide_pane_vc_t1_ParamLimits

0x930a,	// (0x00014e42) form_field_data_wide_pane_vc_t1

0x7a32,	// (0x0001356a) input_focus_pane_cp6_vc_ParamLimits

0x7a32,	// (0x0001356a) input_focus_pane_cp6_vc

0x966d,	// (0x000151a5) list_midp_pane_ParamLimits

0x9679,	// (0x000151b1) scroll_pane_cp16_ParamLimits

0x9679,	// (0x000151b1) scroll_pane_cp16

0x96e3,	// (0x0001521b) button_value_adjust_pane_ParamLimits

0x96e3,	// (0x0001521b) button_value_adjust_pane

0xa666,	// (0x0001619e) button_value_adjust_pane_cp6_ParamLimits

0xa666,	// (0x0001619e) button_value_adjust_pane_cp6

0xa790,	// (0x000162c8) settings_code_pane_cp_ParamLimits

0xa790,	// (0x000162c8) settings_code_pane_cp

0x3ae6,	// (0x0000f61e) cell_touch_pane_g1

0x3ae6,	// (0x0000f61e) cell_touch_pane_g2

0x0001,

0xf6d9,	// (0x0001b211) cell_touch_pane_g

0xae43,	// (0x0001697b) cell_touch_pane_cp_ParamLimits

0xae43,	// (0x0001697b) cell_touch_pane_cp

0xae53,	// (0x0001698b) cell_touch_pane_ParamLimits

0xae53,	// (0x0001698b) cell_touch_pane

0x3ae6,	// (0x0000f61e) scroll_sc2_down_pane_g1

0x3ae6,	// (0x0000f61e) scroll_sc2_up_pane_g1

0x6b54,	// (0x0001268c) bg_set_opt_pane_cp4_vc

0xaeb7,	// (0x000169ef) list_set_graphic_pane_vc_g1_ParamLimits

0xaeb7,	// (0x000169ef) list_set_graphic_pane_vc_g1

0xaec3,	// (0x000169fb) list_set_graphic_pane_vc_g2_ParamLimits

0xaec3,	// (0x000169fb) list_set_graphic_pane_vc_g2

0x0001,

0xf9d0,	// (0x0001b508) list_set_graphic_pane_vc_g_ParamLimits

0xf9d0,	// (0x0001b508) list_set_graphic_pane_vc_g

0xaecf,	// (0x00016a07) text_primary_small_cp13_vc_ParamLimits

0xaecf,	// (0x00016a07) text_primary_small_cp13_vc

0xaee7,	// (0x00016a1f) list_set_graphic_pane_vc_ParamLimits

0xaee7,	// (0x00016a1f) list_set_graphic_pane_vc

0x6b54,	// (0x0001268c) input_focus_pane_cp2_vc

0x3ae6,	// (0x0000f61e) setting_code_pane_vc_g1

0x6c7f,	// (0x000127b7) setting_code_pane_vc_t1

0xaefa,	// (0x00016a32) set_text_pane_vc_t1_ParamLimits

0xaefa,	// (0x00016a32) set_text_pane_vc_t1

0x6b54,	// (0x0001268c) input_focus_pane_cp1_vc

0xaf16,	// (0x00016a4e) list_set_text_pane_vc

0x3ae6,	// (0x0000f61e) setting_text_pane_vc_g1

0x6b54,	// (0x0001268c) bg_set_opt_pane_cp2_vc

0x6c76,	// (0x000127ae) setting_slider_graphic_pane_vc_g1

0xaf20,	// (0x00016a58) setting_slider_graphic_pane_vc_t1

0xaf30,	// (0x00016a68) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9d5,	// (0x0001b50d) setting_slider_graphic_pane_vc_t

0xaf40,	// (0x00016a78) slider_set_pane_cp_vc

0xaf48,	// (0x00016a80) slider_set_pane_vc_g1

0xaf51,	// (0x00016a89) slider_set_pane_vc_g2

0x0006,

0xf9da,	// (0x0001b512) slider_set_pane_vc_g

0x7b61,	// (0x00013699) set_opt_bg_pane_g1_copy1

0x7b69,	// (0x000136a1) set_opt_bg_pane_g2_copy1

0xaf7d,	// (0x00016ab5) set_opt_bg_pane_g3_copy1

0x7b79,	// (0x000136b1) set_opt_bg_pane_g4_copy1

0x7b81,	// (0x000136b9) set_opt_bg_pane_g5_copy1

0x7b89,	// (0x000136c1) set_opt_bg_pane_g6_copy1

0xaf87,	// (0x00016abf) set_opt_bg_pane_g7_copy1

0xaf91,	// (0x00016ac9) set_opt_bg_pane_g8_copy1

0xaf9b,	// (0x00016ad3) set_opt_bg_pane_g9_copy1

0x6b54,	// (0x0001268c) bg_set_opt_pane_cp_vc

0xafa5,	// (0x00016add) setting_slider_pane_vc_t1

0xafb4,	// (0x00016aec) setting_slider_pane_vc_t2

0xafc4,	// (0x00016afc) setting_slider_pane_vc_t3

0x0002,

0xf9e9,	// (0x0001b521) setting_slider_pane_vc_t

0xafd4,	// (0x00016b0c) slider_set_pane_vc

0x56e1,	// (0x00011219) volume_set_pane_vc_g1

0x56ea,	// (0x00011222) volume_set_pane_vc_g2

0x56f3,	// (0x0001122b) volume_set_pane_vc_g3

0x56fc,	// (0x00011234) volume_set_pane_vc_g4

0x5705,	// (0x0001123d) volume_set_pane_vc_g5

0x570e,	// (0x00011246) volume_set_pane_vc_g6

0x5717,	// (0x0001124f) volume_set_pane_vc_g7

0x5720,	// (0x00011258) volume_set_pane_vc_g8

0x5729,	// (0x00011261) volume_set_pane_vc_g9

0x5732,	// (0x0001126a) volume_set_pane_vc_g10

0x0009,

0xf887,	// (0x0001b3bf) volume_set_pane_vc_g

0xafdc,	// (0x00016b14) volume_set_pane_vc

0xafe4,	// (0x00016b1c) button_value_adjust_pane_cp1_vc

0xafee,	// (0x00016b26) list_highlight_pane_cp2_vc

0xaff7,	// (0x00016b2f) list_set_pane_vc_ParamLimits

0xaff7,	// (0x00016b2f) list_set_pane_vc

0xb055,	// (0x00016b8d) main_pane_set_vc_t1_ParamLimits

0xb055,	// (0x00016b8d) main_pane_set_vc_t1

0xb06a,	// (0x00016ba2) main_pane_set_vc_t2_ParamLimits

0xb06a,	// (0x00016ba2) main_pane_set_vc_t2

0xb07c,	// (0x00016bb4) main_pane_set_vc_t3_ParamLimits

0xb07c,	// (0x00016bb4) main_pane_set_vc_t3

0xb090,	// (0x00016bc8) main_pane_set_vc_t4_ParamLimits

0xb090,	// (0x00016bc8) main_pane_set_vc_t4

0x0003,

0xf9f0,	// (0x0001b528) main_pane_set_vc_t_ParamLimits

0xf9f0,	// (0x0001b528) main_pane_set_vc_t

0xb0a4,	// (0x00016bdc) setting_code_pane_vc_ParamLimits

0xb0a4,	// (0x00016bdc) setting_code_pane_vc

0xb0b5,	// (0x00016bed) setting_slider_graphic_pane_vc

0xb0b5,	// (0x00016bed) setting_slider_pane_vc

0xb0b5,	// (0x00016bed) setting_text_pane_vc

0xb0b5,	// (0x00016bed) setting_volume_pane_vc

0xb0bf,	// (0x00016bf7) scroll_pane_cp121_vc

0x793a,	// (0x00013472) set_content_pane_vc

0xb379,	// (0x00016eb1) button_value_adjust_pane_g1

0xb382,	// (0x00016eba) button_value_adjust_pane_g2

0x0001,

0xfa51,	// (0x0001b589) button_value_adjust_pane_g

0xb38b,	// (0x00016ec3) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb38b,	// (0x00016ec3) form_field_slider_wide_pane_vc_t1

0xb39f,	// (0x00016ed7) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb39f,	// (0x00016ed7) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa56,	// (0x0001b58e) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa56,	// (0x0001b58e) form_field_slider_wide_pane_vc_t

0x6ec9,	// (0x00012a01) input_focus_pane_cp10_vc_ParamLimits

0x6ec9,	// (0x00012a01) input_focus_pane_cp10_vc

0xb3cd,	// (0x00016f05) slider_cont_pane_cp1_vc_ParamLimits

0xb3cd,	// (0x00016f05) slider_cont_pane_cp1_vc

0xb3df,	// (0x00016f17) slider_form_pane_g1_cp2

0xaf51,	// (0x00016a89) slider_form_pane_g2_cp2

0xb40c,	// (0x00016f44) form_field_slider_pane_vc_t3

0xb41a,	// (0x00016f52) form_field_slider_pane_vc_t4

0xb428,	// (0x00016f60) slider_form_pane_vc_ParamLimits

0xb428,	// (0x00016f60) slider_form_pane_vc

0xb435,	// (0x00016f6d) form_field_slider_pane_vc_t1_ParamLimits

0xb435,	// (0x00016f6d) form_field_slider_pane_vc_t1

0xb39f,	// (0x00016ed7) form_field_slider_pane_vc_t2_ParamLimits

0xb39f,	// (0x00016ed7) form_field_slider_pane_vc_t2

0x0001,

0xfa68,	// (0x0001b5a0) form_field_slider_pane_vc_t_ParamLimits

0xfa68,	// (0x0001b5a0) form_field_slider_pane_vc_t

0x6ec9,	// (0x00012a01) input_focus_pane_cp9_vc_ParamLimits

0x6ec9,	// (0x00012a01) input_focus_pane_cp9_vc

0xb451,	// (0x00016f89) slider_cont_pane_vc_ParamLimits

0xb451,	// (0x00016f89) slider_cont_pane_vc

0xb465,	// (0x00016f9d) list_form_graphic_pane_cp_vc_ParamLimits

0xb465,	// (0x00016f9d) list_form_graphic_pane_cp_vc

0x9302,	// (0x00014e3a) form_field_popup_wide_pane_vc_g1

0xb47a,	// (0x00016fb2) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb47a,	// (0x00016fb2) form_field_popup_wide_pane_vc_t1

0x7a32,	// (0x0001356a) input_focus_pane_cp8_vc_ParamLimits

0x7a32,	// (0x0001356a) input_focus_pane_cp8_vc

0xb4bf,	// (0x00016ff7) list_form_wide_pane_vc_ParamLimits

0xb4bf,	// (0x00016ff7) list_form_wide_pane_vc

0xb4cb,	// (0x00017003) list_form_graphic_pane_vc_g1

0xb4d3,	// (0x0001700b) list_form_graphic_pane_vc_t1_ParamLimits

0xb4d3,	// (0x0001700b) list_form_graphic_pane_vc_t1

0x6c34,	// (0x0001276c) list_highlight_pane_cp5_vc_ParamLimits

0x6c34,	// (0x0001276c) list_highlight_pane_cp5_vc

0xb4ef,	// (0x00017027) list_form_graphic_pane_vc_ParamLimits

0xb4ef,	// (0x00017027) list_form_graphic_pane_vc

0x9302,	// (0x00014e3a) form_field_popup_pane_vc_g1

0xb505,	// (0x0001703d) form_field_popup_pane_vc_t1_ParamLimits

0xb505,	// (0x0001703d) form_field_popup_pane_vc_t1

0x7a32,	// (0x0001356a) input_focus_pane_cp7_vc_ParamLimits

0x7a32,	// (0x0001356a) input_focus_pane_cp7_vc

0xb51c,	// (0x00017054) list_form_pane_vc_ParamLimits

0xb51c,	// (0x00017054) list_form_pane_vc

0xb528,	// (0x00017060) data_form_pane_vc_t1_ParamLimits

0xb528,	// (0x00017060) data_form_pane_vc_t1

0x7b61,	// (0x00013699) input_focus_pane_vc_g1

0x7b69,	// (0x000136a1) input_focus_pane_vc_g2

0x7b71,	// (0x000136a9) input_focus_pane_vc_g3

0x7b79,	// (0x000136b1) input_focus_pane_vc_g4

0x7b81,	// (0x000136b9) input_focus_pane_vc_g5

0x7b89,	// (0x000136c1) input_focus_pane_vc_g6

0x7b91,	// (0x000136c9) input_focus_pane_vc_g7

0x7b99,	// (0x000136d1) input_focus_pane_vc_g8

0x7ba1,	// (0x000136d9) input_focus_pane_vc_g9

0x3ae6,	// (0x0000f61e) input_focus_pane_vc_g10

0x0009,

0xf662,	// (0x0001b19a) input_focus_pane_vc_g

0x92f6,	// (0x00014e2e) data_form_pane_vc_ParamLimits

0x92f6,	// (0x00014e2e) data_form_pane_vc

0x9302,	// (0x00014e3a) form_field_data_pane_vc_g1

0xb543,	// (0x0001707b) form_field_data_pane_vc_t1_ParamLimits

0xb543,	// (0x0001707b) form_field_data_pane_vc_t1

0x7a32,	// (0x0001356a) input_focus_pane_vc_ParamLimits

0x7a32,	// (0x0001356a) input_focus_pane_vc

0xb55d,	// (0x00017095) button_value_adjust_pane_cp3_vc

0xb565,	// (0x0001709d) button_value_adjust_pane_cp5_vc

0xb56d,	// (0x000170a5) form_field_data_pane_vc_ParamLimits

0xb56d,	// (0x000170a5) form_field_data_pane_vc

0xb584,	// (0x000170bc) form_field_data_pane_vc_cp2

0xb58c,	// (0x000170c4) form_field_data_wide_pane_vc_ParamLimits

0xb58c,	// (0x000170c4) form_field_data_wide_pane_vc

0xb5a2,	// (0x000170da) form_field_data_wide_pane_vc_cp2

0xb5aa,	// (0x000170e2) form_field_popup_pane_vc_ParamLimits

0xb5aa,	// (0x000170e2) form_field_popup_pane_vc

0xb5c1,	// (0x000170f9) form_field_popup_wide_pane_vc_ParamLimits

0xb5c1,	// (0x000170f9) form_field_popup_wide_pane_vc

0xb5d7,	// (0x0001710f) form_field_slider_pane_vc_ParamLimits

0xb5d7,	// (0x0001710f) form_field_slider_pane_vc

0xb5ea,	// (0x00017122) form_field_slider_wide_pane_vc_ParamLimits

0xb5ea,	// (0x00017122) form_field_slider_wide_pane_vc

0xb5fd,	// (0x00017135) grid_touch_1_pane_ParamLimits

0xb5fd,	// (0x00017135) grid_touch_1_pane

0xb609,	// (0x00017141) grid_touch_2_pane_ParamLimits

0xb609,	// (0x00017141) grid_touch_2_pane

0x8bc1,	// (0x000146f9) touch_pane_g1_ParamLimits

0x8bc1,	// (0x000146f9) touch_pane_g1

0xb621,	// (0x00017159) cell_app_pane_cp_wide_ParamLimits

0xb621,	// (0x00017159) cell_app_pane_cp_wide

0xb632,	// (0x0001716a) grid_popup_fast_wide_pane_ParamLimits

0xb632,	// (0x0001716a) grid_popup_fast_wide_pane

0xb646,	// (0x0001717e) scroll_pane_cp19_ParamLimits

0xb646,	// (0x0001717e) scroll_pane_cp19

0x6b54,	// (0x0001268c) bg_popup_window_pane_cp20

0xb65a,	// (0x00017192) listscroll_popup_fast_wide_pane

0xb662,	// (0x0001719a) grid_indicator_nsta_pane

0xb674,	// (0x000171ac) clock_nsta_pane_g1

0xb67d,	// (0x000171b5) clock_nsta_pane_t1

0xb699,	// (0x000171d1) cell_indicator_nsta_pane_ParamLimits

0xb699,	// (0x000171d1) cell_indicator_nsta_pane

0xb6ce,	// (0x00017206) cell_indicator_nsta_pane_g1

0xb6dc,	// (0x00017214) cell_indicator_nsta_pane_g2

0x0001,

0xfa79,	// (0x0001b5b1) cell_indicator_nsta_pane_g

0xb6ee,	// (0x00017226) clock_nsta_pane_cp

0xb6f7,	// (0x0001722f) indicator_nsta_pane_cp

0xb701,	// (0x00017239) nsta_clock_indic_pane_g1

0x6d17,	// (0x0001284f) grid_indicator_pane

0x815a,	// (0x00013c92) scroll_pane_cp29

0x4c2c,	// (0x00010764) indicator_nsta_pane_cp2_ParamLimits

0x4c2c,	// (0x00010764) indicator_nsta_pane_cp2

0x6c34,	// (0x0001276c) main_apps_wheel_pane

0x954e,	// (0x00015086) form_midp_field_text_pane_ParamLimits

0x9699,	// (0x000151d1) scroll_bar_cp050_ParamLimits

0xb75a,	// (0x00017292) cell_indicator_pane_ParamLimits

0xb75a,	// (0x00017292) cell_indicator_pane

0xb771,	// (0x000172a9) cell_indicator_pane_g1

0xb77b,	// (0x000172b3) grid_wheel_folder_pane_ParamLimits

0xb77b,	// (0x000172b3) grid_wheel_folder_pane

0xb791,	// (0x000172c9) list_wheel_apps_pane_ParamLimits

0xb791,	// (0x000172c9) list_wheel_apps_pane

0xb7a2,	// (0x000172da) main_apps_wheel_pane_g1_ParamLimits

0xb7a2,	// (0x000172da) main_apps_wheel_pane_g1

0xb7b6,	// (0x000172ee) main_apps_wheel_pane_g2_ParamLimits

0xb7b6,	// (0x000172ee) main_apps_wheel_pane_g2

0x0001,

0xfa95,	// (0x0001b5cd) main_apps_wheel_pane_g_ParamLimits

0xfa95,	// (0x0001b5cd) main_apps_wheel_pane_g

0xb7ce,	// (0x00017306) main_apps_wheel_pane_t1_ParamLimits

0xb7ce,	// (0x00017306) main_apps_wheel_pane_t1

0xb7f1,	// (0x00017329) list_wheel_apps_pane_g1

0xb7f9,	// (0x00017331) list_wheel_apps_pane_g2

0xb801,	// (0x00017339) list_wheel_apps_pane_g3

0xb809,	// (0x00017341) list_wheel_apps_pane_g4

0xb813,	// (0x0001734b) list_wheel_apps_pane_g5

0x0004,

0xfa9a,	// (0x0001b5d2) list_wheel_apps_pane_g

0x877d,	// (0x000142b5) navi_icon_text_pane

0x8c6a,	// (0x000147a2) aid_fill_nsta

0xb836,	// (0x0001736e) navi_icon_text_pane_g1

0xb842,	// (0x0001737a) navi_icon_text_pane_t1

0x861b,	// (0x00014153) list_set_graphic_pane_t1_ParamLimits

0x861b,	// (0x00014153) list_set_graphic_pane_t1

0x9e04,	// (0x0001593c) popup_midp_note_alarm_window_t6_ParamLimits

0x9e04,	// (0x0001593c) popup_midp_note_alarm_window_t6

0x9e16,	// (0x0001594e) popup_midp_note_alarm_window_t7_ParamLimits

0x9e16,	// (0x0001594e) popup_midp_note_alarm_window_t7

0x9e28,	// (0x00015960) popup_midp_note_alarm_window_t8_ParamLimits

0x9e28,	// (0x00015960) popup_midp_note_alarm_window_t8

0x9e3a,	// (0x00015972) popup_midp_note_alarm_window_t9_ParamLimits

0x9e3a,	// (0x00015972) popup_midp_note_alarm_window_t9

0x9e4c,	// (0x00015984) popup_midp_note_alarm_window_t10_ParamLimits

0x9e4c,	// (0x00015984) popup_midp_note_alarm_window_t10

0x9e5e,	// (0x00015996) popup_midp_note_alarm_window_t11_ParamLimits

0x9e5e,	// (0x00015996) popup_midp_note_alarm_window_t11

0x9e70,	// (0x000159a8) scroll_pane_cp17_ParamLimits

0x9e70,	// (0x000159a8) scroll_pane_cp17

0x56e1,	// (0x00011219) volume_small_pane_cp_g1

0x59d6,	// (0x0001150e) volume_small_pane_cp_g2

0x59df,	// (0x00011517) volume_small_pane_cp_g3

0x59e8,	// (0x00011520) volume_small_pane_cp_g4

0x59f1,	// (0x00011529) volume_small_pane_cp_g5

0x59fa,	// (0x00011532) volume_small_pane_cp_g6

0x5a03,	// (0x0001153b) volume_small_pane_cp_g7

0x5a0c,	// (0x00011544) volume_small_pane_cp_g8

0x5a15,	// (0x0001154d) volume_small_pane_cp_g9

0x5a1e,	// (0x00011556) volume_small_pane_cp_g10

0x89d7,	// (0x0001450f) midp_ticker_pane_g1_ParamLimits

0x89e3,	// (0x0001451b) midp_ticker_pane_g2_ParamLimits

0xf72e,	// (0x0001b266) midp_ticker_pane_g_ParamLimits

0x89ef,	// (0x00014527) midp_ticker_pane_t1_ParamLimits

0x8c80,	// (0x000147b8) aid_fill_nsta_2

0x9685,	// (0x000151bd) list_form2_midp_pane

0xa80e,	// (0x00016346) midp_editing_number_pane_ParamLimits

0xa81d,	// (0x00016355) midp_ticker_pane_ParamLimits

0xb854,	// (0x0001738c) form2_midp_field_pane

0xb878,	// (0x000173b0) scroll_pane_cp51

0xb898,	// (0x000173d0) form2_midp_button_pane_ParamLimits

0xb898,	// (0x000173d0) form2_midp_button_pane

0xb8aa,	// (0x000173e2) form2_midp_content_pane_ParamLimits

0xb8aa,	// (0x000173e2) form2_midp_content_pane

0xb8c4,	// (0x000173fc) form2_midp_field_choice_group_pane

0xb8cc,	// (0x00017404) form2_midp_field_pane_g1

0xb8d4,	// (0x0001740c) form2_midp_field_pane_g2

0xb8dc,	// (0x00017414) form2_midp_field_pane_g3

0xb8e4,	// (0x0001741c) form2_midp_field_pane_g4

0x0003,

0xfabf,	// (0x0001b5f7) form2_midp_field_pane_g

0xb8ec,	// (0x00017424) form2_midp_gauge_slider_pane

0xb8f4,	// (0x0001742c) form2_midp_gauge_wait_pane

0xb8fc,	// (0x00017434) form2_midp_image_pane_ParamLimits

0xb8fc,	// (0x00017434) form2_midp_image_pane

0xb917,	// (0x0001744f) form2_midp_label_pane_ParamLimits

0xb917,	// (0x0001744f) form2_midp_label_pane

0xb930,	// (0x00017468) form2_midp_label_pane_cp_ParamLimits

0xb930,	// (0x00017468) form2_midp_label_pane_cp

0xb951,	// (0x00017489) form2_midp_string_pane_ParamLimits

0xb951,	// (0x00017489) form2_midp_string_pane

0xb963,	// (0x0001749b) form2_midp_text_pane_ParamLimits

0xb963,	// (0x0001749b) form2_midp_text_pane

0xb980,	// (0x000174b8) form2_midp_time_pane

0xb990,	// (0x000174c8) input_focus_pane_cp51_ParamLimits

0xb990,	// (0x000174c8) input_focus_pane_cp51

0xb9a8,	// (0x000174e0) form2_midp_label_pane_t1_ParamLimits

0xb9a8,	// (0x000174e0) form2_midp_label_pane_t1

0xb9e9,	// (0x00017521) form2_mdip_text_pane_t1_ParamLimits

0xb9e9,	// (0x00017521) form2_mdip_text_pane_t1

0xba08,	// (0x00017540) form2_midp_time_pane_t1

0xba23,	// (0x0001755b) form2_midp_gauge_slider_pane_t1

0xba35,	// (0x0001756d) form2_midp_gauge_slider_pane_t2

0xba47,	// (0x0001757f) form2_midp_gauge_slider_pane_t3

0x0002,

0xfac8,	// (0x0001b600) form2_midp_gauge_slider_pane_t

0xba59,	// (0x00017591) form2_midp_slider_pane

0xba65,	// (0x0001759d) form2_midp_gauge_wait_pane_t1

0xba73,	// (0x000175ab) form2_midp_wait_pane_ParamLimits

0xba73,	// (0x000175ab) form2_midp_wait_pane

0xba9e,	// (0x000175d6) list_single_2graphic_pane_cp4_ParamLimits

0xba9e,	// (0x000175d6) list_single_2graphic_pane_cp4

0x936a,	// (0x00014ea2) list_single_midp_graphic_pane_cp_ParamLimits

0x936a,	// (0x00014ea2) list_single_midp_graphic_pane_cp

0x6b54,	// (0x0001268c) list_highlight_pane_cp20

0xbac2,	// (0x000175fa) list_single_2graphic_pane_g1_cp4

0xbaca,	// (0x00017602) list_single_2graphic_pane_g2_cp4

0xbad2,	// (0x0001760a) list_single_2graphic_pane_t1_cp4

0x6c34,	// (0x0001276c) list_highlight_pane_cp21

0xbae1,	// (0x00017619) list_single_midp_graphic_pane_g4_cp

0xbaf0,	// (0x00017628) list_single_midp_graphic_pane_t1_cp

0xbb05,	// (0x0001763d) form2_mdip_string_pane_t1_ParamLimits

0xbb05,	// (0x0001763d) form2_mdip_string_pane_t1

0x6b54,	// (0x0001268c) bg_wml_button_pane_cp2

0x3ae6,	// (0x0000f61e) form2_midp_image_pane_g1

0x76fc,	// (0x00013234) list_double_large_graphic_pane_g5_ParamLimits

0x76fc,	// (0x00013234) list_double_large_graphic_pane_g5

0x8902,	// (0x0001443a) midp_form_pane_ParamLimits

0x6c34,	// (0x0001276c) main_apps_wheel_pane_ParamLimits

0x5321,	// (0x00010e59) popup_preview_window_ParamLimits

0x5321,	// (0x00010e59) popup_preview_window

0x54dc,	// (0x00011014) popup_touch_info_window_ParamLimits

0x54dc,	// (0x00011014) popup_touch_info_window

0x54fa,	// (0x00011032) popup_touch_menu_window_ParamLimits

0x54fa,	// (0x00011032) popup_touch_menu_window

0x3adc,	// (0x0000f614) bg_popup_sub_pane_cp6

0xbbfe,	// (0x00017736) list_touch_menu_pane

0xbc06,	// (0x0001773e) list_single_touch_menu_pane_ParamLimits

0xbc06,	// (0x0001773e) list_single_touch_menu_pane

0xbc1c,	// (0x00017754) list_single_touch_menu_pane_t1

0x6c34,	// (0x0001276c) bg_popup_sub_pane_cp7_ParamLimits

0x6c34,	// (0x0001276c) bg_popup_sub_pane_cp7

0xbc2a,	// (0x00017762) heading_sub_pane

0xbc32,	// (0x0001776a) list_touch_info_pane_ParamLimits

0xbc32,	// (0x0001776a) list_touch_info_pane

0xbc41,	// (0x00017779) list_single_touch_info_pane_ParamLimits

0xbc41,	// (0x00017779) list_single_touch_info_pane

0xbc53,	// (0x0001778b) list_single_touch_info_pane_t1

0xbc61,	// (0x00017799) list_single_touch_info_pane_t2

0x0001,

0xfad6,	// (0x0001b60e) list_single_touch_info_pane_t

0x88fa,	// (0x00014432) bg_popup_heading_pane_cp

0xbc6f,	// (0x000177a7) heading_sub_pane_t1

0x9290,	// (0x00014dc8) bg_popup_preview_window_pane_cp_ParamLimits

0x9290,	// (0x00014dc8) bg_popup_preview_window_pane_cp

0xbc2a,	// (0x00017762) heading_preview_pane

0xbc32,	// (0x0001776a) list_preview_pane_ParamLimits

0xbc32,	// (0x0001776a) list_preview_pane

0xbc7d,	// (0x000177b5) popup_preview_window_g1

0xbc41,	// (0x00017779) list_single_preview_pane_ParamLimits

0xbc41,	// (0x00017779) list_single_preview_pane

0xbc85,	// (0x000177bd) list_single_preview_pane_g1

0xbc8d,	// (0x000177c5) list_single_preview_pane_t1

0xbc53,	// (0x0001778b) list_single_preview_pane_t2

0x0001,

0xfadb,	// (0x0001b613) list_single_preview_pane_t

0xbc9b,	// (0x000177d3) bg_popup_heading_pane_cp2_ParamLimits

0xbc9b,	// (0x000177d3) bg_popup_heading_pane_cp2

0xbcb1,	// (0x000177e9) heading_preview_pane_g1

0xbcb9,	// (0x000177f1) heading_preview_pane_t1_ParamLimits

0xbcb9,	// (0x000177f1) heading_preview_pane_t1

0x6d3a,	// (0x00012872) soft_indicator_pane_t1_ParamLimits

0x744e,	// (0x00012f86) scroll_pane_ParamLimits

0x8053,	// (0x00013b8b) scroll_sc2_left_pane

0x805c,	// (0x00013b94) scroll_sc2_right_pane

0x807b,	// (0x00013bb3) scroll_bg_pane_g1_ParamLimits

0x8090,	// (0x00013bc8) scroll_bg_pane_g2_ParamLimits

0x80a8,	// (0x00013be0) scroll_bg_pane_g3_ParamLimits

0xf6b9,	// (0x0001b1f1) scroll_bg_pane_g_ParamLimits

0x807b,	// (0x00013bb3) scroll_handle_pane_g1_ParamLimits

0x80ca,	// (0x00013c02) scroll_handle_pane_g2_ParamLimits

0x80a8,	// (0x00013be0) scroll_handle_pane_g3_ParamLimits

0xf6c0,	// (0x0001b1f8) scroll_handle_pane_g_ParamLimits

0x4fa0,	// (0x00010ad8) popup_choice_list_window_ParamLimits

0x4fa0,	// (0x00010ad8) popup_choice_list_window

0x90a2,	// (0x00014bda) choice_list_pane

0x913a,	// (0x00014c72) cell_toolbar_pane_t1

0x9162,	// (0x00014c9a) toolbar_button_pane_ParamLimits

0xa32a,	// (0x00015e62) ai_gene_pane_1_t2_ParamLimits

0xa32a,	// (0x00015e62) ai_gene_pane_1_t2

0x0001,

0xf8e3,	// (0x0001b41b) ai_gene_pane_1_t_ParamLimits

0xf8e3,	// (0x0001b41b) ai_gene_pane_1_t

0xbcd6,	// (0x0001780e) scroll_sc2_left_pane_g1

0xbcd6,	// (0x0001780e) scroll_sc2_right_pane_g1

0x8c26,	// (0x0001475e) bg_popup_sub_pane_cp10

0xbce0,	// (0x00017818) list_choice_list_pane

0xbcf9,	// (0x00017831) list_single_choice_list_pane_ParamLimits

0xbcf9,	// (0x00017831) list_single_choice_list_pane

0xbd0c,	// (0x00017844) list_single_choice_list_pane_g1

0x7d59,	// (0x00013891) list_single_choice_list_pane_t1_ParamLimits

0x7d59,	// (0x00013891) list_single_choice_list_pane_t1

0xbd14,	// (0x0001784c) choice_list_pane_g1

0xbd1c,	// (0x00017854) choice_list_pane_t1

0x3adc,	// (0x0000f614) input_focus_pane_cp11

0x7f30,	// (0x00013a68) title_pane_stacon_g2_ParamLimits

0x7f30,	// (0x00013a68) title_pane_stacon_g2

0x0002,

0xf69f,	// (0x0001b1d7) title_pane_stacon_g_ParamLimits

0xf69f,	// (0x0001b1d7) title_pane_stacon_g

0x88fa,	// (0x00014432) cursor_press_pane

0x504c,	// (0x00010b84) popup_fep_hwr_window_ParamLimits

0x504c,	// (0x00010b84) popup_fep_hwr_window

0x50c6,	// (0x00010bfe) popup_fep_vkb_window_ParamLimits

0x50c6,	// (0x00010bfe) popup_fep_vkb_window

0xbd2a,	// (0x00017862) cursor_press_pane_g1

0x0002,

0xfb04,	// (0x0001b63c) fep_vkb_side_pane_g_ParamLimits

0x5a60,	// (0x00011598) fep_hwr_candidate_pane_ParamLimits

0x5a60,	// (0x00011598) fep_hwr_candidate_pane

0x5a8a,	// (0x000115c2) fep_hwr_side_pane_ParamLimits

0x5a8a,	// (0x000115c2) fep_hwr_side_pane

0x5aaa,	// (0x000115e2) fep_hwr_top_pane_ParamLimits

0x5aaa,	// (0x000115e2) fep_hwr_top_pane

0x5ac2,	// (0x000115fa) fep_hwr_write_pane_ParamLimits

0x5ac2,	// (0x000115fa) fep_hwr_write_pane

0xfb04,	// (0x0001b63c) fep_vkb_side_pane_g

0xbd32,	// (0x0001786a) fep_hwr_top_pane_g1

0xbd44,	// (0x0001787c) fep_hwr_top_pane_g2

0x5afc,	// (0x00011634) fep_hwr_top_pane_g3

0x0002,

0xfae0,	// (0x0001b618) fep_hwr_top_pane_g

0x5b11,	// (0x00011649) fep_hwr_top_text_pane

0x824a,	// (0x00013d82) fep_hwr_top_text_pane_g1

0xbd7a,	// (0x000178b2) fep_hwr_top_text_pane_t1

0x5c07,	// (0x0001173f) fep_hwr_candidate_pane_g1

0xbfcd,	// (0x00017b05) fep_vkb_keypad_pane_g3_ParamLimits

0xbfcd,	// (0x00017b05) fep_vkb_keypad_pane_g3

0xbff5,	// (0x00017b2d) fep_vkb_keypad_pane_g4_ParamLimits

0xbff5,	// (0x00017b2d) fep_vkb_keypad_pane_g4

0xc064,	// (0x00017b9c) fep_vkb_bottom_pane_g2_ParamLimits

0xc064,	// (0x00017b9c) fep_vkb_bottom_pane_g2

0x0001,

0xfb0b,	// (0x0001b643) fep_vkb_bottom_pane_g_ParamLimits

0xfb0b,	// (0x0001b643) fep_vkb_bottom_pane_g

0xbcd6,	// (0x0001780e) cell_vkb_side_pane_g2

0x0001,

0xfb15,	// (0x0001b64d) cell_vkb_side_pane_g

0xc0ef,	// (0x00017c27) cell_vkb_side_pane_t1

0xc0fd,	// (0x00017c35) cell_vkb_side_pane_t1_copy1

0xbcd6,	// (0x0001780e) bg_fep_vkb_candidate_pane_g2

0xc229,	// (0x00017d61) cell_vkb_candidate_pane_ParamLimits

0xbd88,	// (0x000178c0) aid_size_cell_vkb_ParamLimits

0xbd88,	// (0x000178c0) aid_size_cell_vkb

0xc229,	// (0x00017d61) cell_vkb_candidate_pane

0x5c2e,	// (0x00011766) bg_popup_fep_shadow_pane_g1

0xbe16,	// (0x0001794e) fep_vkb_bottom_pane_ParamLimits

0xbe16,	// (0x0001794e) fep_vkb_bottom_pane

0xbe4c,	// (0x00017984) fep_vkb_candidate_pane_ParamLimits

0xbe4c,	// (0x00017984) fep_vkb_candidate_pane

0xbe68,	// (0x000179a0) fep_vkb_keypad_pane_ParamLimits

0xbe68,	// (0x000179a0) fep_vkb_keypad_pane

0xbeae,	// (0x000179e6) fep_vkb_side_pane_ParamLimits

0xbeae,	// (0x000179e6) fep_vkb_side_pane

0xbeea,	// (0x00017a22) fep_vkb_top_pane_ParamLimits

0xbeea,	// (0x00017a22) fep_vkb_top_pane

0xbf26,	// (0x00017a5e) fep_vkb_top_pane_g1_ParamLimits

0xbf26,	// (0x00017a5e) fep_vkb_top_pane_g1

0xbf35,	// (0x00017a6d) fep_vkb_top_pane_g2_ParamLimits

0xbf35,	// (0x00017a6d) fep_vkb_top_pane_g2

0xbf44,	// (0x00017a7c) fep_vkb_top_pane_g3_ParamLimits

0xbf44,	// (0x00017a7c) fep_vkb_top_pane_g3

0x0003,

0xfafb,	// (0x0001b633) fep_vkb_top_pane_g_ParamLimits

0xfafb,	// (0x0001b633) fep_vkb_top_pane_g

0xbf62,	// (0x00017a9a) fep_vkb_top_text_pane_ParamLimits

0xbf62,	// (0x00017a9a) fep_vkb_top_text_pane

0xbf73,	// (0x00017aab) fep_vkb_side_pane_g1_ParamLimits

0xbf73,	// (0x00017aab) fep_vkb_side_pane_g1

0xbfbc,	// (0x00017af4) grid_vkb_side_pane_ParamLimits

0xbfbc,	// (0x00017af4) grid_vkb_side_pane

0x5c36,	// (0x0001176e) bg_popup_fep_shadow_pane_g2

0x5c3f,	// (0x00011777) bg_popup_fep_shadow_pane_g3

0x5c47,	// (0x0001177f) bg_popup_fep_shadow_pane_g4

0x5c50,	// (0x00011788) bg_popup_fep_shadow_pane_g5

0x5c5a,	// (0x00011792) bg_popup_fep_shadow_pane_g6

0x5c62,	// (0x0001179a) bg_popup_fep_shadow_pane_g7

0x7b79,	// (0x000136b1) bg_popup_fep_shadow_pane_g8

0xc013,	// (0x00017b4b) grid_vkb_keypad_number_pane_ParamLimits

0xc013,	// (0x00017b4b) grid_vkb_keypad_number_pane

0xc023,	// (0x00017b5b) grid_vkb_keypad_pane_ParamLimits

0xc023,	// (0x00017b5b) grid_vkb_keypad_pane

0xc049,	// (0x00017b81) fep_vkb_bottom_pane_g1_ParamLimits

0xc049,	// (0x00017b81) fep_vkb_bottom_pane_g1

0xc072,	// (0x00017baa) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc072,	// (0x00017baa) grid_vkb_keypad_bottom_left_pane

0xc087,	// (0x00017bbf) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc087,	// (0x00017bbf) grid_vkb_keypad_bottom_right_pane

0xc09c,	// (0x00017bd4) fep_vkb_top_text_pane_g1

0xc0b7,	// (0x00017bef) fep_vkb_top_text_pane_t1

0xc0cc,	// (0x00017c04) cell_vkb_side_pane_ParamLimits

0xc0cc,	// (0x00017c04) cell_vkb_side_pane

0xbcd6,	// (0x0001780e) cell_vkb_side_pane_g1

0xc10b,	// (0x00017c43) cell_vkb_keypad_pane_ParamLimits

0xc10b,	// (0x00017c43) cell_vkb_keypad_pane

0xc180,	// (0x00017cb8) cell_vkb_keypad_pane_g1

0x0008,

0xfb28,	// (0x0001b660) bg_popup_fep_shadow_pane_g

0x5c74,	// (0x000117ac) cell_hwr_side_pane_g1

0x5c74,	// (0x000117ac) cell_hwr_side_pane_g2

0xc18a,	// (0x00017cc2) cell_vkb_keypad_pane_t1

0xc198,	// (0x00017cd0) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc198,	// (0x00017cd0) cell_vkb_keypad_bottom_left_pane

0xc1b5,	// (0x00017ced) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc1b5,	// (0x00017ced) cell_vkb_keypad_bottom_right_pane

0xbcd6,	// (0x0001780e) cell_vkb_keypad_bottom_left_pane_g1

0xbcd6,	// (0x0001780e) cell_vkb_keypad_bottom_right_pane_g1

0xc1ee,	// (0x00017d26) cell_vkb_keypad_number_pane_ParamLimits

0xc1ee,	// (0x00017d26) cell_vkb_keypad_number_pane

0xc20d,	// (0x00017d45) cell_vkb_keypad_number_pane_g1

0xc217,	// (0x00017d4f) cell_vkb_keypad_number_pane_g2

0xc220,	// (0x00017d58) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb1a,	// (0x0001b652) cell_vkb_keypad_number_pane_g

0xc18a,	// (0x00017cc2) cell_vkb_keypad_number_pane_t1

0xc244,	// (0x00017d7c) fep_vkb_candidate_pane_g1

0x0001,

0xfb3b,	// (0x0001b673) cell_hwr_side_pane_g

0xc25d,	// (0x00017d95) cell_hwr_side_pane_t1

0x5c7e,	// (0x000117b6) cell_hwr_side_pane_t1_copy1

0x5c8c,	// (0x000117c4) cell_hwr_candidate_pane_g1

0x5cbb,	// (0x000117f3) cell_hwr_candidate_pane_t1

0xbcd6,	// (0x0001780e) cell_vkb_candidate_pane_g2

0xc2a1,	// (0x00017dd9) cell_vkb_candidate_pane_t1

0x5a27,	// (0x0001155f) bg_popup_fep_shadow_pane_ParamLimits

0x5a27,	// (0x0001155f) bg_popup_fep_shadow_pane

0x5adc,	// (0x00011614) bg_fep_hwr_top_pane_g4

0xbd56,	// (0x0001788e) bg_hwr_side_pane_g1_ParamLimits

0xbd56,	// (0x0001788e) bg_hwr_side_pane_g1

0x5b4d,	// (0x00011685) cell_hwr_side_pane_ParamLimits

0x5b4d,	// (0x00011685) cell_hwr_side_pane

0x5b88,	// (0x000116c0) fep_hwr_write_pane_g1_ParamLimits

0x5b88,	// (0x000116c0) fep_hwr_write_pane_g1

0x5b95,	// (0x000116cd) fep_hwr_write_pane_g2_ParamLimits

0x5b95,	// (0x000116cd) fep_hwr_write_pane_g2

0x5ba2,	// (0x000116da) fep_hwr_write_pane_g3_ParamLimits

0x5ba2,	// (0x000116da) fep_hwr_write_pane_g3

0x5bb0,	// (0x000116e8) fep_hwr_write_pane_g4_ParamLimits

0x5bb0,	// (0x000116e8) fep_hwr_write_pane_g4

0x0005,

0xfae7,	// (0x0001b61f) fep_hwr_write_pane_g_ParamLimits

0xfae7,	// (0x0001b61f) fep_hwr_write_pane_g

0x5adc,	// (0x00011614) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x5adc,	// (0x00011614) bg_fep_hwr_candidate_pane_g2

0x5bc5,	// (0x000116fd) cell_hwr_candidate_pane_ParamLimits

0x5bc5,	// (0x000116fd) cell_hwr_candidate_pane

0x5c07,	// (0x0001173f) fep_hwr_candidate_pane_g1_ParamLimits

0xbdb6,	// (0x000178ee) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xbdb6,	// (0x000178ee) bg_popup_fep_shadow_pane_cp2

0xbf54,	// (0x00017a8c) fep_vkb_top_pane_g4_ParamLimits

0xbf54,	// (0x00017a8c) fep_vkb_top_pane_g4

0xbf9a,	// (0x00017ad2) fep_vkb_side_pane_g2_ParamLimits

0xbf9a,	// (0x00017ad2) fep_vkb_side_pane_g2

0x7854,	// (0x0001338c) list_setting_pane_t4_ParamLimits

0x7854,	// (0x0001338c) list_setting_pane_t4

0x78ce,	// (0x00013406) list_setting_number_pane_t5_ParamLimits

0x78ce,	// (0x00013406) list_setting_number_pane_t5

0x8291,	// (0x00013dc9) list_double_heading_pane_cp2_ParamLimits

0x8291,	// (0x00013dc9) list_double_heading_pane_cp2

0x7a58,	// (0x00013590) list_double_heading_pane_g1_cp2_ParamLimits

0x7a58,	// (0x00013590) list_double_heading_pane_g1_cp2

0x7a64,	// (0x0001359c) list_double_heading_pane_g2_cp2_ParamLimits

0x7a64,	// (0x0001359c) list_double_heading_pane_g2_cp2

0xc2af,	// (0x00017de7) list_double_heading_pane_t1_cp2_ParamLimits

0xc2af,	// (0x00017de7) list_double_heading_pane_t1_cp2

0xc2c5,	// (0x00017dfd) list_double_heading_pane_t2_cp2_ParamLimits

0xc2c5,	// (0x00017dfd) list_double_heading_pane_t2_cp2

0x3ad4,	// (0x0000f60c) aid_value_unit2

0x47bc,	// (0x000102f4) popup_preview_fixed_window

0x6ed7,	// (0x00012a0f) bg_popup_preview_window_pane_cp02

0xc2d7,	// (0x00017e0f) list_preview_fixed_pane

0xc35f,	// (0x00017e97) list_empty_pane_fp_ParamLimits

0xc35f,	// (0x00017e97) list_empty_pane_fp

0xc35f,	// (0x00017e97) list_single_cale_day_pane_fp_ParamLimits

0xc35f,	// (0x00017e97) list_single_cale_day_pane_fp

0xc35f,	// (0x00017e97) list_single_graphic_heading_pane_fp_ParamLimits

0xc35f,	// (0x00017e97) list_single_graphic_heading_pane_fp

0xc35f,	// (0x00017e97) list_single_graphic_pane_fp_ParamLimits

0xc35f,	// (0x00017e97) list_single_graphic_pane_fp

0xc35f,	// (0x00017e97) list_single_heading_pane_fp_ParamLimits

0xc35f,	// (0x00017e97) list_single_heading_pane_fp

0xc35f,	// (0x00017e97) list_single_pane_fp_ParamLimits

0xc35f,	// (0x00017e97) list_single_pane_fp

0xc374,	// (0x00017eac) list_single_pane_fp_g1_ParamLimits

0xc374,	// (0x00017eac) list_single_pane_fp_g1

0x7a58,	// (0x00013590) list_single_pane_fp_g2_ParamLimits

0x7a58,	// (0x00013590) list_single_pane_fp_g2

0x7a64,	// (0x0001359c) list_single_pane_fp_g3_ParamLimits

0x7a64,	// (0x0001359c) list_single_pane_fp_g3

0xc380,	// (0x00017eb8) list_single_pane_fp_g4_ParamLimits

0xc380,	// (0x00017eb8) list_single_pane_fp_g4

0x0003,

0xfb4e,	// (0x0001b686) list_single_pane_fp_g_ParamLimits

0xfb4e,	// (0x0001b686) list_single_pane_fp_g

0xc38c,	// (0x00017ec4) list_single_pane_fp_t1_ParamLimits

0xc38c,	// (0x00017ec4) list_single_pane_fp_t1

0xc3a3,	// (0x00017edb) list_single_graphic_pane_fp_g1_ParamLimits

0xc3a3,	// (0x00017edb) list_single_graphic_pane_fp_g1

0xc374,	// (0x00017eac) list_single_graphic_pane_fp_g2_ParamLimits

0xc374,	// (0x00017eac) list_single_graphic_pane_fp_g2

0x7a58,	// (0x00013590) list_single_graphic_pane_fp_g3_ParamLimits

0x7a58,	// (0x00013590) list_single_graphic_pane_fp_g3

0x7a64,	// (0x0001359c) list_single_graphic_pane_fp_g4_ParamLimits

0x7a64,	// (0x0001359c) list_single_graphic_pane_fp_g4

0xc380,	// (0x00017eb8) list_single_graphic_pane_fp_g5_ParamLimits

0xc380,	// (0x00017eb8) list_single_graphic_pane_fp_g5

0x0004,

0xfb57,	// (0x0001b68f) list_single_graphic_pane_fp_g_ParamLimits

0xfb57,	// (0x0001b68f) list_single_graphic_pane_fp_g

0xc3af,	// (0x00017ee7) list_single_graphic_pane_fp_t1_ParamLimits

0xc3af,	// (0x00017ee7) list_single_graphic_pane_fp_t1

0xc3a3,	// (0x00017edb) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xc3a3,	// (0x00017edb) list_single_graphic_heading_pane_fp_g1

0xc374,	// (0x00017eac) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc374,	// (0x00017eac) list_single_graphic_heading_pane_fp_g2

0x7a58,	// (0x00013590) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x7a58,	// (0x00013590) list_single_graphic_heading_pane_fp_g3

0x7a64,	// (0x0001359c) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x7a64,	// (0x0001359c) list_single_graphic_heading_pane_fp_g4

0xc380,	// (0x00017eb8) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc380,	// (0x00017eb8) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb57,	// (0x0001b68f) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb57,	// (0x0001b68f) list_single_graphic_heading_pane_fp_g

0xc3c5,	// (0x00017efd) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xc3c5,	// (0x00017efd) list_single_graphic_heading_pane_fp_t1

0xc3db,	// (0x00017f13) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xc3db,	// (0x00017f13) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb62,	// (0x0001b69a) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb62,	// (0x0001b69a) list_single_graphic_heading_pane_fp_t

0xc3ed,	// (0x00017f25) list_single_cale_day_pane_fp_g1_ParamLimits

0xc3ed,	// (0x00017f25) list_single_cale_day_pane_fp_g1

0xc425,	// (0x00017f5d) list_single_cale_day_pane_fp_g2_ParamLimits

0xc425,	// (0x00017f5d) list_single_cale_day_pane_fp_g2

0xc431,	// (0x00017f69) list_single_cale_day_pane_fp_g3_ParamLimits

0xc431,	// (0x00017f69) list_single_cale_day_pane_fp_g3

0xc459,	// (0x00017f91) list_single_cale_day_pane_fp_g4_ParamLimits

0xc459,	// (0x00017f91) list_single_cale_day_pane_fp_g4

0xc47d,	// (0x00017fb5) list_single_cale_day_pane_fp_g5_ParamLimits

0xc47d,	// (0x00017fb5) list_single_cale_day_pane_fp_g5

0x0004,

0xfb67,	// (0x0001b69f) list_single_cale_day_pane_fp_g_ParamLimits

0xfb67,	// (0x0001b69f) list_single_cale_day_pane_fp_g

0xc4a1,	// (0x00017fd9) list_single_cale_day_pane_fp_t1_ParamLimits

0xc4a1,	// (0x00017fd9) list_single_cale_day_pane_fp_t1

0xc4c7,	// (0x00017fff) list_single_cale_day_pane_fp_t2_ParamLimits

0xc4c7,	// (0x00017fff) list_single_cale_day_pane_fp_t2

0xc4e0,	// (0x00018018) list_single_cale_day_pane_fp_t3_ParamLimits

0xc4e0,	// (0x00018018) list_single_cale_day_pane_fp_t3

0x0002,

0xfb72,	// (0x0001b6aa) list_single_cale_day_pane_fp_t_ParamLimits

0xfb72,	// (0x0001b6aa) list_single_cale_day_pane_fp_t

0xc374,	// (0x00017eac) list_empty_pane_fp_g1_ParamLimits

0xc374,	// (0x00017eac) list_empty_pane_fp_g1

0xc4f9,	// (0x00018031) list_empty_pane_fp_t1

0xc507,	// (0x0001803f) list_empty_pane_fp_t2

0x0001,

0xfb79,	// (0x0001b6b1) list_empty_pane_fp_t

0xc374,	// (0x00017eac) list_single_heading_pane_fp_g1_ParamLimits

0xc374,	// (0x00017eac) list_single_heading_pane_fp_g1

0x7a58,	// (0x00013590) list_single_heading_pane_fp_g2_ParamLimits

0x7a58,	// (0x00013590) list_single_heading_pane_fp_g2

0x7a64,	// (0x0001359c) list_single_heading_pane_fp_g3_ParamLimits

0x7a64,	// (0x0001359c) list_single_heading_pane_fp_g3

0x0002,

0xfb7e,	// (0x0001b6b6) list_single_heading_pane_fp_g_ParamLimits

0xfb7e,	// (0x0001b6b6) list_single_heading_pane_fp_g

0xc515,	// (0x0001804d) list_single_heading_pane_fp_t1_ParamLimits

0xc515,	// (0x0001804d) list_single_heading_pane_fp_t1

0xc527,	// (0x0001805f) list_single_heading_pane_fp_t2_ParamLimits

0xc527,	// (0x0001805f) list_single_heading_pane_fp_t2

0x0001,

0xfb85,	// (0x0001b6bd) list_single_heading_pane_fp_t_ParamLimits

0xfb85,	// (0x0001b6bd) list_single_heading_pane_fp_t

0x7dc7,	// (0x000138ff) aid_size_cell_fast

0x6e47,	// (0x0001297f) soft_indicator_pane_cp1_t1

0x7e04,	// (0x0001393c) cell_app_pane_cp2_ParamLimits

0x7e04,	// (0x0001393c) cell_app_pane_cp2

0x5a49,	// (0x00011581) fep_hwr_candidate_drop_down_list_pane

0x5c21,	// (0x00011759) fep_hwr_candidate_pane_g3_ParamLimits

0x5c21,	// (0x00011759) fep_hwr_candidate_pane_g3

0x3371,	// (0x0000eea9) fep_hwr_candidate_pane_g4_ParamLimits

0x3371,	// (0x0000eea9) fep_hwr_candidate_pane_g4

0x0002,

0xfaf4,	// (0x0001b62c) fep_hwr_candidate_pane_g_ParamLimits

0xfaf4,	// (0x0001b62c) fep_hwr_candidate_pane_g

0xbe3b,	// (0x00017973) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xbe3b,	// (0x00017973) fep_vkb_candidate_drop_down_list_pane

0xc24c,	// (0x00017d84) fep_vkb_candidate_pane_g3

0xc254,	// (0x00017d8c) fep_vkb_candidate_pane_g4

0x0002,

0xfb21,	// (0x0001b659) fep_vkb_candidate_pane_g

0x5c8c,	// (0x000117c4) cell_hwr_candidate_pane_g1_ParamLimits

0x5c9a,	// (0x000117d2) cell_hwr_candidate_pane_g3_ParamLimits

0x5c9a,	// (0x000117d2) cell_hwr_candidate_pane_g3

0xdb07,	// (0x0001963f) cell_hwr_candidate_pane_g4_ParamLimits

0xdb07,	// (0x0001963f) cell_hwr_candidate_pane_g4

0x0002,

0xfb40,	// (0x0001b678) cell_hwr_candidate_pane_g_ParamLimits

0xfb40,	// (0x0001b678) cell_hwr_candidate_pane_g

0xc26b,	// (0x00017da3) cell_vkb_candidate_pane_g3_ParamLimits

0xc26b,	// (0x00017da3) cell_vkb_candidate_pane_g3

0xc286,	// (0x00017dbe) cell_vkb_candidate_pane_g4_ParamLimits

0xc286,	// (0x00017dbe) cell_vkb_candidate_pane_g4

0xc53d,	// (0x00018075) cell_app_pane_cp2_g1_ParamLimits

0xc53d,	// (0x00018075) cell_app_pane_cp2_g1

0xc55b,	// (0x00018093) cell_app_pane_cp2_g2_ParamLimits

0xc55b,	// (0x00018093) cell_app_pane_cp2_g2

0x0001,

0xfb8a,	// (0x0001b6c2) cell_app_pane_cp2_g_ParamLimits

0xfb8a,	// (0x0001b6c2) cell_app_pane_cp2_g

0xc567,	// (0x0001809f) cell_app_pane_cp2_t1_ParamLimits

0xc567,	// (0x0001809f) cell_app_pane_cp2_t1

0x7a32,	// (0x0001356a) grid_highlight_pane_cp1_ParamLimits

0x7a32,	// (0x0001356a) grid_highlight_pane_cp1

0x5cd9,	// (0x00011811) cell_hwr_candidate_pane_cp1_ParamLimits

0x5cd9,	// (0x00011811) cell_hwr_candidate_pane_cp1

0x5c8c,	// (0x000117c4) fep_hwr_candidate_drop_down_list_pane_g1

0x5cf8,	// (0x00011830) fep_hwr_candidate_drop_down_list_pane_g2

0x5d05,	// (0x0001183d) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb8f,	// (0x0001b6c7) fep_hwr_candidate_drop_down_list_pane_g

0x5d12,	// (0x0001184a) fep_hwr_candidate_drop_down_list_scroll_pane

0x5d1b,	// (0x00011853) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x5d1b,	// (0x00011853) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x5d28,	// (0x00011860) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x5d28,	// (0x00011860) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x5d35,	// (0x0001186d) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x5d35,	// (0x0001186d) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x5d42,	// (0x0001187a) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x5d42,	// (0x0001187a) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x5d5d,	// (0x00011895) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x5d5d,	// (0x00011895) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x5d78,	// (0x000118b0) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x5d78,	// (0x000118b0) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x5d93,	// (0x000118cb) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x5d93,	// (0x000118cb) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x5dae,	// (0x000118e6) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x5dae,	// (0x000118e6) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb96,	// (0x0001b6ce) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb96,	// (0x0001b6ce) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc579,	// (0x000180b1) cell_vkb_candidate_pane_cp1_ParamLimits

0xc579,	// (0x000180b1) cell_vkb_candidate_pane_cp1

0xbf54,	// (0x00017a8c) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xbf54,	// (0x00017a8c) fep_vkb_candidate_drop_down_list_pane_g1

0xc599,	// (0x000180d1) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc599,	// (0x000180d1) fep_vkb_candidate_drop_down_list_pane_g2

0xc5a6,	// (0x000180de) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc5a6,	// (0x000180de) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfba7,	// (0x0001b6df) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfba7,	// (0x0001b6df) fep_vkb_candidate_drop_down_list_pane_g

0xc5b3,	// (0x000180eb) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc5b3,	// (0x000180eb) fep_vkb_candidate_drop_down_list_scroll_pane

0xc5c0,	// (0x000180f8) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc5c0,	// (0x000180f8) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc5cd,	// (0x00018105) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc5cd,	// (0x00018105) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc5d9,	// (0x00018111) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc5d9,	// (0x00018111) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc311,	// (0x00017e49) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc311,	// (0x00017e49) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc332,	// (0x00017e6a) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc332,	// (0x00017e6a) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc5e5,	// (0x0001811d) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc5e5,	// (0x0001811d) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc606,	// (0x0001813e) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc606,	// (0x0001813e) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc627,	// (0x0001815f) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc627,	// (0x0001815f) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbae,	// (0x0001b6e6) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbae,	// (0x0001b6e6) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x6b5e,	// (0x00012696) title_pane_g1_ParamLimits

0x6b6b,	// (0x000126a3) title_pane_g2_ParamLimits

0xf529,	// (0x0001b061) title_pane_g_ParamLimits

0x823a,	// (0x00013d72) aid_call2_pane

0x8242,	// (0x00013d7a) aid_call_pane

0x824a,	// (0x00013d82) popup_clock_analogue_window_g1

0x824a,	// (0x00013d82) popup_clock_analogue_window_g2

0x4b2d,	// (0x00010665) popup_clock_analogue_window_g3

0x4b36,	// (0x0001066e) popup_clock_analogue_window_g4

0x3ae6,	// (0x0000f61e) popup_clock_analogue_window_g5

0x0004,

0xf6ce,	// (0x0001b206) popup_clock_analogue_window_g

0x4b3e,	// (0x00010676) popup_clock_analogue_window_t1

0x4b4c,	// (0x00010684) clock_digital_number_pane_ParamLimits

0x4b4c,	// (0x00010684) clock_digital_number_pane

0x4b58,	// (0x00010690) clock_digital_number_pane_cp02_ParamLimits

0x4b58,	// (0x00010690) clock_digital_number_pane_cp02

0x4b64,	// (0x0001069c) clock_digital_number_pane_cp03_ParamLimits

0x4b64,	// (0x0001069c) clock_digital_number_pane_cp03

0x4b70,	// (0x000106a8) clock_digital_number_pane_cp04_ParamLimits

0x4b70,	// (0x000106a8) clock_digital_number_pane_cp04

0x4b7c,	// (0x000106b4) clock_digital_separator_pane_ParamLimits

0x4b7c,	// (0x000106b4) clock_digital_separator_pane

0x4b88,	// (0x000106c0) popup_clock_digital_window_t1_ParamLimits

0x4b88,	// (0x000106c0) popup_clock_digital_window_t1

0x3ae6,	// (0x0000f61e) clock_digital_number_pane_g1

0x3ae6,	// (0x0000f61e) clock_digital_number_pane_g2

0x0001,

0xf6d9,	// (0x0001b211) clock_digital_number_pane_g

0x3ae6,	// (0x0000f61e) clock_digital_separator_pane_g1

0x3ae6,	// (0x0000f61e) clock_digital_separator_pane_g2

0x0001,

0xf6d9,	// (0x0001b211) clock_digital_separator_pane_g

0x8c6a,	// (0x000147a2) aid_fill_nsta_ParamLimits

0x8db6,	// (0x000148ee) indicator_nsta_pane_ParamLimits

0x8f2f,	// (0x00014a67) popup_clock_analogue_window

0x8f2f,	// (0x00014a67) popup_clock_digital_window

0xb662,	// (0x0001719a) grid_indicator_nsta_pane_ParamLimits

0xb68b,	// (0x000171c3) clock_nsta_pane_t2

0x0001,

0xfa74,	// (0x0001b5ac) clock_nsta_pane_t

0x4af1,	// (0x00010629) aid_size_max_handle

0x4afb,	// (0x00010633) aid_size_min_handle

0x88fa,	// (0x00014432) editor_scroll_pane

0xc642,	// (0x0001817a) ex_editor_pane

0x7d35,	// (0x0001386d) scroll_pane_cp13

0x747a,	// (0x00012fb2) scroll_pane_cp14

0x8279,	// (0x00013db1) scroll_pane_cp36

0x82a5,	// (0x00013ddd) list_single_graphic_hl_pane_cp2_ParamLimits

0x82a5,	// (0x00013ddd) list_single_graphic_hl_pane_cp2

0xa8e6,	// (0x0001641e) list_single_graphic_hl_pane_ParamLimits

0xa8e6,	// (0x0001641e) list_single_graphic_hl_pane

0xc64a,	// (0x00018182) aid_size_min_hl_cp1

0xc653,	// (0x0001818b) list_highlight_pane_cp34_ParamLimits

0xc653,	// (0x0001818b) list_highlight_pane_cp34

0xc664,	// (0x0001819c) list_single_graphic_hl_pane_g1_ParamLimits

0xc664,	// (0x0001819c) list_single_graphic_hl_pane_g1

0xc671,	// (0x000181a9) list_single_graphic_hl_pane_g2_ParamLimits

0xc671,	// (0x000181a9) list_single_graphic_hl_pane_g2

0xc671,	// (0x000181a9) list_single_graphic_hl_pane_g3_ParamLimits

0xc671,	// (0x000181a9) list_single_graphic_hl_pane_g3

0x883f,	// (0x00014377) list_single_graphic_hl_pane_g4_ParamLimits

0x883f,	// (0x00014377) list_single_graphic_hl_pane_g4

0xc67d,	// (0x000181b5) list_single_graphic_hl_pane_g5_ParamLimits

0xc67d,	// (0x000181b5) list_single_graphic_hl_pane_g5

0x0004,

0xfbbf,	// (0x0001b6f7) list_single_graphic_hl_pane_g_ParamLimits

0xfbbf,	// (0x0001b6f7) list_single_graphic_hl_pane_g

0x9f24,	// (0x00015a5c) list_single_graphic_hl_pane_t1_ParamLimits

0x9f24,	// (0x00015a5c) list_single_graphic_hl_pane_t1

0xc691,	// (0x000181c9) aid_size_min_hl_cp2

0xc69a,	// (0x000181d2) list_highlight_pane_cp34_cp2_ParamLimits

0xc69a,	// (0x000181d2) list_highlight_pane_cp34_cp2

0xc664,	// (0x0001819c) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc664,	// (0x0001819c) list_single_graphic_hl_pane_g1_cp2

0xc6a7,	// (0x000181df) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc6a7,	// (0x000181df) list_single_graphic_hl_pane_g2_cp2

0xc6b3,	// (0x000181eb) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc6b3,	// (0x000181eb) list_single_graphic_hl_pane_g3_cp2

0xc6c1,	// (0x000181f9) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xc6c1,	// (0x000181f9) list_single_graphic_hl_pane_g4_cp2

0xc6cd,	// (0x00018205) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc6cd,	// (0x00018205) list_single_graphic_hl_pane_g5_cp2

0x4e3c,	// (0x00010974) control_pane_g4_ParamLimits

0x4e3c,	// (0x00010974) control_pane_g4

0x8c26,	// (0x0001475e) bg_popup_sub_pane_cp10_ParamLimits

0xbce0,	// (0x00017818) list_choice_list_pane_ParamLimits

0xbcef,	// (0x00017827) scroll_pane_cp23

0x6ed7,	// (0x00012a0f) bg_popup_preview_window_pane_cp02_ParamLimits

0xc2d7,	// (0x00017e0f) list_preview_fixed_pane_ParamLimits

0xc2ed,	// (0x00017e25) list_preview_fixed_pane_cp_ParamLimits

0xc2ed,	// (0x00017e25) list_preview_fixed_pane_cp

0xc2f9,	// (0x00017e31) popup_preview_fixed_window_g1_ParamLimits

0xc2f9,	// (0x00017e31) popup_preview_fixed_window_g1

0xc305,	// (0x00017e3d) popup_preview_fixed_window_g2_ParamLimits

0xc305,	// (0x00017e3d) popup_preview_fixed_window_g2

0x0002,

0xfb47,	// (0x0001b67f) popup_preview_fixed_window_g_ParamLimits

0xfb47,	// (0x0001b67f) popup_preview_fixed_window_g

0x4a65,	// (0x0001059d) aid_navi_side_left_pane_ParamLimits

0x4a7a,	// (0x000105b2) aid_navi_side_right_pane_ParamLimits

0x4a92,	// (0x000105ca) navi_icon_pane_stacon_ParamLimits

0x4aa6,	// (0x000105de) navi_navi_pane_stacon_ParamLimits

0x4a92,	// (0x000105ca) navi_text_pane_stacon_ParamLimits

0x467d,	// (0x000101b5) main_text_info_pane

0xc6f7,	// (0x0001822f) listscroll_text_info_pane

0xc6ff,	// (0x00018237) list_text_info_pane_ParamLimits

0xc6ff,	// (0x00018237) list_text_info_pane

0xc70e,	// (0x00018246) scroll_pane_cp24_ParamLimits

0xc70e,	// (0x00018246) scroll_pane_cp24

0xc72c,	// (0x00018264) list_text_info_pane_t1_ParamLimits

0xc72c,	// (0x00018264) list_text_info_pane_t1

0x4fbe,	// (0x00010af6) popup_fast_swap2_window_ParamLimits

0x4fbe,	// (0x00010af6) popup_fast_swap2_window

0xc75d,	// (0x00018295) aid_size_cell_fast2

0x3adc,	// (0x0000f614) bg_popup_window_pane_cp17

0xc767,	// (0x0001829f) heading_pane_cp2

0xc76f,	// (0x000182a7) listscroll_fast2_pane

0xc777,	// (0x000182af) grid_fast2_pane

0xc781,	// (0x000182b9) listscroll_fast2_pane_g1

0xc789,	// (0x000182c1) listscroll_fast2_pane_g2

0x0001,

0xfbca,	// (0x0001b702) listscroll_fast2_pane_g

0x7d35,	// (0x0001386d) scroll_pane_cp26

0xc793,	// (0x000182cb) cell_fast2_pane_ParamLimits

0xc793,	// (0x000182cb) cell_fast2_pane

0xc7a8,	// (0x000182e0) cell_fast2_pane_g1

0xc7b1,	// (0x000182e9) cell_fast2_pane_g2

0xc7ba,	// (0x000182f2) cell_fast2_pane_g3

0x0002,

0xfbcf,	// (0x0001b707) cell_fast2_pane_g

0x7237,	// (0x00012d6f) grid_highlight_pane_cp9

0x4f84,	// (0x00010abc) main_eswt_pane_ParamLimits

0x4f84,	// (0x00010abc) main_eswt_pane

0xc723,	// (0x0001825b) list_single_text_info_pane

0xc7c2,	// (0x000182fa) eswt_ctrl_button_pane

0xc7c2,	// (0x000182fa) eswt_ctrl_canvas_pane

0xc7ca,	// (0x00018302) eswt_ctrl_combo_pane

0xc7c2,	// (0x000182fa) eswt_ctrl_default_pane

0xc7c2,	// (0x000182fa) eswt_ctrl_label_pane

0xc7d2,	// (0x0001830a) eswt_ctrl_wait_pane

0xc7da,	// (0x00018312) eswt_shell_pane

0x3adc,	// (0x0000f614) listscroll_eswt_app_pane

0xc7fa,	// (0x00018332) popup_eswt_tasktip_window_ParamLimits

0xc7fa,	// (0x00018332) popup_eswt_tasktip_window

0x9290,	// (0x00014dc8) bg_popup_window_pane_cp18

0xc813,	// (0x0001834b) eswt_control_pane_g1_ParamLimits

0xc813,	// (0x0001834b) eswt_control_pane_g1

0xc820,	// (0x00018358) eswt_control_pane_g2_ParamLimits

0xc820,	// (0x00018358) eswt_control_pane_g2

0xc82d,	// (0x00018365) eswt_control_pane_g3_ParamLimits

0xc82d,	// (0x00018365) eswt_control_pane_g3

0xc83a,	// (0x00018372) eswt_control_pane_g4_ParamLimits

0xc83a,	// (0x00018372) eswt_control_pane_g4

0x0003,

0xfbd6,	// (0x0001b70e) eswt_control_pane_g_ParamLimits

0xfbd6,	// (0x0001b70e) eswt_control_pane_g

0x7a32,	// (0x0001356a) bg_button_pane_ParamLimits

0x7a32,	// (0x0001356a) bg_button_pane

0x724c,	// (0x00012d84) common_borders_pane_copy2_ParamLimits

0x724c,	// (0x00012d84) common_borders_pane_copy2

0xc847,	// (0x0001837f) control_button_pane_g1_ParamLimits

0xc847,	// (0x0001837f) control_button_pane_g1

0xc853,	// (0x0001838b) control_button_pane_g2_ParamLimits

0xc853,	// (0x0001838b) control_button_pane_g2

0xc85f,	// (0x00018397) control_button_pane_g3_ParamLimits

0xc85f,	// (0x00018397) control_button_pane_g3

0x0002,

0xfbdf,	// (0x0001b717) control_button_pane_g_ParamLimits

0xfbdf,	// (0x0001b717) control_button_pane_g

0xc873,	// (0x000183ab) control_button_pane_t1

0xc881,	// (0x000183b9) control_button_pane_t2

0x0001,

0xfbe6,	// (0x0001b71e) control_button_pane_t

0x916e,	// (0x00014ca6) bg_button_pane_g1

0x917e,	// (0x00014cb6) bg_button_pane_g2

0x9176,	// (0x00014cae) bg_button_pane_g3

0x918e,	// (0x00014cc6) bg_button_pane_g4

0x9186,	// (0x00014cbe) bg_button_pane_g5

0x9196,	// (0x00014cce) bg_button_pane_g6

0x919e,	// (0x00014cd6) bg_button_pane_g7

0x91ae,	// (0x00014ce6) bg_button_pane_g8

0x91a6,	// (0x00014cde) bg_button_pane_g9

0x0008,

0xf837,	// (0x0001b36f) bg_button_pane_g

0xbc9b,	// (0x000177d3) common_borders_pane_ParamLimits

0xbc9b,	// (0x000177d3) common_borders_pane

0xc813,	// (0x0001834b) eswt_control_pane_g1_copy1_ParamLimits

0xc813,	// (0x0001834b) eswt_control_pane_g1_copy1

0xc820,	// (0x00018358) eswt_control_pane_g2_copy1_ParamLimits

0xc820,	// (0x00018358) eswt_control_pane_g2_copy1

0xc82d,	// (0x00018365) eswt_control_pane_g3_copy1_ParamLimits

0xc82d,	// (0x00018365) eswt_control_pane_g3_copy1

0xc83a,	// (0x00018372) eswt_control_pane_g4_copy1_ParamLimits

0xc83a,	// (0x00018372) eswt_control_pane_g4_copy1

0xbcd6,	// (0x0001780e) bg_eswt_ctrl_canvas_pane_g1

0xbc9b,	// (0x000177d3) common_borders_pane_cp2_ParamLimits

0xbc9b,	// (0x000177d3) common_borders_pane_cp2

0xbc9b,	// (0x000177d3) common_borders_pane_cp3_ParamLimits

0xbc9b,	// (0x000177d3) common_borders_pane_cp3

0xc88f,	// (0x000183c7) separator_horizontal_pane

0xc897,	// (0x000183cf) separator_vertical_pane

0xc813,	// (0x0001834b) eswt_control_pane_g1_copy2_ParamLimits

0xc813,	// (0x0001834b) eswt_control_pane_g1_copy2

0xc820,	// (0x00018358) eswt_control_pane_g2_copy2_ParamLimits

0xc820,	// (0x00018358) eswt_control_pane_g2_copy2

0xc82d,	// (0x00018365) eswt_control_pane_g3_copy2_ParamLimits

0xc82d,	// (0x00018365) eswt_control_pane_g3_copy2

0xc83a,	// (0x00018372) eswt_control_pane_g4_copy2_ParamLimits

0xc83a,	// (0x00018372) eswt_control_pane_g4_copy2

0x3adc,	// (0x0000f614) common_borders_pane_cp4

0xc8a0,	// (0x000183d8) separator_horizontal_pane_g1

0xc8a9,	// (0x000183e1) separator_horizontal_pane_g2

0xc8b2,	// (0x000183ea) separator_horizontal_pane_g3

0x0002,

0xfbeb,	// (0x0001b723) separator_horizontal_pane_g

0xc813,	// (0x0001834b) eswt_control_pane_g1_copy3_ParamLimits

0xc813,	// (0x0001834b) eswt_control_pane_g1_copy3

0xc820,	// (0x00018358) eswt_control_pane_g2_copy3_ParamLimits

0xc820,	// (0x00018358) eswt_control_pane_g2_copy3

0xc82d,	// (0x00018365) eswt_control_pane_g3_copy3_ParamLimits

0xc82d,	// (0x00018365) eswt_control_pane_g3_copy3

0xc83a,	// (0x00018372) eswt_control_pane_g4_copy3_ParamLimits

0xc83a,	// (0x00018372) eswt_control_pane_g4_copy3

0x3adc,	// (0x0000f614) common_borders_pane_cp5

0xc8bb,	// (0x000183f3) separator_vertical_pane_g1

0xc8c4,	// (0x000183fc) separator_vertical_pane_g2

0xc8cd,	// (0x00018405) separator_vertical_pane_g3

0x0002,

0xfbf2,	// (0x0001b72a) separator_vertical_pane_g

0xc813,	// (0x0001834b) eswt_control_pane_g1_copy4_ParamLimits

0xc813,	// (0x0001834b) eswt_control_pane_g1_copy4

0xc820,	// (0x00018358) eswt_control_pane_g2_copy4_ParamLimits

0xc820,	// (0x00018358) eswt_control_pane_g2_copy4

0xc82d,	// (0x00018365) eswt_control_pane_g3_copy4_ParamLimits

0xc82d,	// (0x00018365) eswt_control_pane_g3_copy4

0xc83a,	// (0x00018372) eswt_control_pane_g4_copy4_ParamLimits

0xc83a,	// (0x00018372) eswt_control_pane_g4_copy4

0xc8d6,	// (0x0001840e) eswt_ctrl_combo_button_pane

0xc8de,	// (0x00018416) eswt_ctrl_input_pane

0xc8e6,	// (0x0001841e) popup_choice_list_window_cp70

0xc8ee,	// (0x00018426) eswt_ctrl_input_pane_t1

0x3adc,	// (0x0000f614) input_focus_pane_cp70

0xbc9b,	// (0x000177d3) bg_button_pane_cp70_ParamLimits

0xbc9b,	// (0x000177d3) bg_button_pane_cp70

0xc8fc,	// (0x00018434) eswt_ctrl_combo_button_pane_g1

0xc904,	// (0x0001843c) wait_bar_pane_cp70

0x9290,	// (0x00014dc8) bg_popup_window_pane_cp70_ParamLimits

0x9290,	// (0x00014dc8) bg_popup_window_pane_cp70

0xc90c,	// (0x00018444) popup_eswt_tasktip_window_t1

0xc922,	// (0x0001845a) wait_bar_pane_cp71_ParamLimits

0xc922,	// (0x0001845a) wait_bar_pane_cp71

0xc92e,	// (0x00018466) grid_eswt_app_pane

0x8053,	// (0x00013b8b) scroll_pane_cp70

0xc937,	// (0x0001846f) cell_eswt_app_pane_ParamLimits

0xc937,	// (0x0001846f) cell_eswt_app_pane

0xc967,	// (0x0001849f) cell_eswt_app_pane_g1_ParamLimits

0xc967,	// (0x0001849f) cell_eswt_app_pane_g1

0xc996,	// (0x000184ce) cell_eswt_app_pane_g2_ParamLimits

0xc996,	// (0x000184ce) cell_eswt_app_pane_g2

0x0001,

0xfbf9,	// (0x0001b731) cell_eswt_app_pane_g_ParamLimits

0xfbf9,	// (0x0001b731) cell_eswt_app_pane_g

0xc9bf,	// (0x000184f7) cell_eswt_app_pane_t1_ParamLimits

0xc9bf,	// (0x000184f7) cell_eswt_app_pane_t1

0xc9f1,	// (0x00018529) grid_highlight_pane_cp70_ParamLimits

0xc9f1,	// (0x00018529) grid_highlight_pane_cp70

0x87d2,	// (0x0001430a) set_content_pane_g1

0x8ba5,	// (0x000146dd) status_small_volume_pane

0x5dc9,	// (0x00011901) status_small_volume_pane_g1

0x5dd1,	// (0x00011909) volume_small2_pane

0x5dda,	// (0x00011912) volume_small2_pane_g1

0x5de3,	// (0x0001191b) volume_small2_pane_g2

0x5dec,	// (0x00011924) volume_small2_pane_g3

0x5df5,	// (0x0001192d) volume_small2_pane_g4

0x5dfe,	// (0x00011936) volume_small2_pane_g5

0x5e07,	// (0x0001193f) volume_small2_pane_g6

0x5e10,	// (0x00011948) volume_small2_pane_g7

0x5e19,	// (0x00011951) volume_small2_pane_g8

0x5e22,	// (0x0001195a) volume_small2_pane_g9

0x5e2b,	// (0x00011963) volume_small2_pane_g10

0x0009,

0xfbfe,	// (0x0001b736) volume_small2_pane_g

0xc09c,	// (0x00017bd4) fep_vkb_top_text_pane_g1_ParamLimits

0xc0b7,	// (0x00017bef) fep_vkb_top_text_pane_t1_ParamLimits

0xc353,	// (0x00017e8b) popup_preview_fixed_window_g3_ParamLimits

0xc353,	// (0x00017e8b) popup_preview_fixed_window_g3

0x546f,	// (0x00010fa7) popup_toolbar_trans_pane

0xa643,	// (0x0001617b) aid_height_set_list_ParamLimits

0xa654,	// (0x0001618c) aid_size_parent_ParamLimits

0x8c26,	// (0x0001475e) list_highlight_pane_cp2_ParamLimits

0x87d2,	// (0x0001430a) set_content_pane_g1_ParamLimits

0xa904,	// (0x0001643c) list_single_image_pane_ParamLimits

0xa904,	// (0x0001643c) list_single_image_pane

0xc9fd,	// (0x00018535) aid_size_cell_image_ParamLimits

0xc9fd,	// (0x00018535) aid_size_cell_image

0xca0a,	// (0x00018542) grid_single_image_pane_ParamLimits

0xca0a,	// (0x00018542) grid_single_image_pane

0xa99b,	// (0x000164d3) list_single_image_pane_g1_ParamLimits

0xa99b,	// (0x000164d3) list_single_image_pane_g1

0xca16,	// (0x0001854e) list_single_image_pane_g2_ParamLimits

0xca16,	// (0x0001854e) list_single_image_pane_g2

0x0001,

0xfc13,	// (0x0001b74b) list_single_image_pane_g_ParamLimits

0xfc13,	// (0x0001b74b) list_single_image_pane_g

0xca2a,	// (0x00018562) list_single_image_pane_t1_ParamLimits

0xca2a,	// (0x00018562) list_single_image_pane_t1

0xca40,	// (0x00018578) cell_image_list_pane_ParamLimits

0xca40,	// (0x00018578) cell_image_list_pane

0xca54,	// (0x0001858c) cell_image_list_pane_g1

0xca5d,	// (0x00018595) cell_image_list_pane_g2

0x0001,

0xfc18,	// (0x0001b750) cell_image_list_pane_g

0xca66,	// (0x0001859e) aid_size_cell_tb_trans_pane

0x7a32,	// (0x0001356a) bg_tb_trans_pane

0xca78,	// (0x000185b0) grid_tb_trans_pane

0x916e,	// (0x00014ca6) bg_tb_trans_pane_g1

0x917e,	// (0x00014cb6) bg_tb_trans_pane_g2

0x9176,	// (0x00014cae) bg_tb_trans_pane_g3

0x918e,	// (0x00014cc6) bg_tb_trans_pane_g4

0x9186,	// (0x00014cbe) bg_tb_trans_pane_g5

0x91ae,	// (0x00014ce6) bg_tb_trans_pane_g6

0x91a6,	// (0x00014cde) bg_tb_trans_pane_g7

0x9196,	// (0x00014cce) bg_tb_trans_pane_g8

0x919e,	// (0x00014cd6) bg_tb_trans_pane_g9

0x0008,

0xfc1d,	// (0x0001b755) bg_tb_trans_pane_g

0xca8c,	// (0x000185c4) cell_toolbar_trans_pane_ParamLimits

0xca8c,	// (0x000185c4) cell_toolbar_trans_pane

0xbcd6,	// (0x0001780e) cell_toolbar_trans_pane_g1

0xb85c,	// (0x00017394) list_form2_midp_pane_t1

0xb86a,	// (0x000173a2) list_form2_midp_pane_t2

0x0001,

0xfaba,	// (0x0001b5f2) list_form2_midp_pane_t

0xb878,	// (0x000173b0) scroll_pane_cp51_ParamLimits

0xba83,	// (0x000175bb) form2_midp_wait_pane_g1

0xba8c,	// (0x000175c4) form2_midp_wait_pane_g2

0xba95,	// (0x000175cd) form2_midp_wait_pane_g3

0x0002,

0xfacf,	// (0x0001b607) form2_midp_wait_pane_g

0x6c34,	// (0x0001276c) list_highlight_pane_cp21_ParamLimits

0xbae1,	// (0x00017619) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xbaf0,	// (0x00017628) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xa88a,	// (0x000163c2) list_single_2graphic_im_pane_ParamLimits

0xa88a,	// (0x000163c2) list_single_2graphic_im_pane

0xcab2,	// (0x000185ea) list_single_2graphic_im_pane_g1_ParamLimits

0xcab2,	// (0x000185ea) list_single_2graphic_im_pane_g1

0xcac3,	// (0x000185fb) list_single_2graphic_im_pane_g2_ParamLimits

0xcac3,	// (0x000185fb) list_single_2graphic_im_pane_g2

0xcacf,	// (0x00018607) list_single_2graphic_im_pane_g3_ParamLimits

0xcacf,	// (0x00018607) list_single_2graphic_im_pane_g3

0x0003,

0xfc30,	// (0x0001b768) list_single_2graphic_im_pane_g_ParamLimits

0xfc30,	// (0x0001b768) list_single_2graphic_im_pane_g

0xcaef,	// (0x00018627) list_single_2graphic_im_pane_t1_ParamLimits

0xcaef,	// (0x00018627) list_single_2graphic_im_pane_t1

0xc35f,	// (0x00017e97) list_single_graphic_2heading_pane_fp_ParamLimits

0xc35f,	// (0x00017e97) list_single_graphic_2heading_pane_fp

0xc3a3,	// (0x00017edb) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xc3a3,	// (0x00017edb) list_single_graphic_2heading_pane_fp_g1

0xc374,	// (0x00017eac) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc374,	// (0x00017eac) list_single_graphic_2heading_pane_fp_g2

0x7a58,	// (0x00013590) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x7a58,	// (0x00013590) list_single_graphic_2heading_pane_fp_g3

0x7a64,	// (0x0001359c) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x7a64,	// (0x0001359c) list_single_graphic_2heading_pane_fp_g4

0xc380,	// (0x00017eb8) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc380,	// (0x00017eb8) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb57,	// (0x0001b68f) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb57,	// (0x0001b68f) list_single_graphic_2heading_pane_fp_g

0xcb20,	// (0x00018658) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xcb20,	// (0x00018658) list_single_graphic_2heading_pane_fp_t1

0xc3db,	// (0x00017f13) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xc3db,	// (0x00017f13) list_single_graphic_2heading_pane_fp_t2

0xcb36,	// (0x0001866e) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xcb36,	// (0x0001866e) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc39,	// (0x0001b771) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc39,	// (0x0001b771) list_single_graphic_2heading_pane_fp_t

0xbd62,	// (0x0001789a) fep_hwr_write_pane_g5_ParamLimits

0xbd62,	// (0x0001789a) fep_hwr_write_pane_g5

0xbd6e,	// (0x000178a6) fep_hwr_write_pane_g6_ParamLimits

0xbd6e,	// (0x000178a6) fep_hwr_write_pane_g6

0xc7da,	// (0x00018312) eswt_shell_pane_ParamLimits

0x9290,	// (0x00014dc8) bg_popup_window_pane_cp18_ParamLimits

0xc80b,	// (0x00018343) heading_pane_cp70

0xc90c,	// (0x00018444) popup_eswt_tasktip_window_t1_ParamLimits

0x8cbf,	// (0x000147f7) aid_touch_tab_arrow_left

0x8cce,	// (0x00014806) aid_touch_tab_arrow_right

0x6b7c,	// (0x000126b4) title_pane_g3_ParamLimits

0x6b7c,	// (0x000126b4) title_pane_g3

0x7911,	// (0x00013449) set_value_pane_g1

0x546f,	// (0x00010fa7) popup_toolbar_trans_pane_ParamLimits

0xca66,	// (0x0001859e) aid_size_cell_tb_trans_pane_ParamLimits

0x7a32,	// (0x0001356a) bg_tb_trans_pane_ParamLimits

0xca78,	// (0x000185b0) grid_tb_trans_pane_ParamLimits

0x6ed7,	// (0x00012a0f) cont_note_pane_ParamLimits

0x6ed7,	// (0x00012a0f) cont_note_pane

0x724c,	// (0x00012d84) cont_snote2_single_text_pane_ParamLimits

0x724c,	// (0x00012d84) cont_snote2_single_text_pane

0x724c,	// (0x00012d84) cont_snote2_single_graphic_pane_ParamLimits

0x724c,	// (0x00012d84) cont_snote2_single_graphic_pane

0x98e8,	// (0x00015420) cont_note_wait_pane_ParamLimits

0x98e8,	// (0x00015420) cont_note_wait_pane

0x98e8,	// (0x00015420) cont_note_image_pane_ParamLimits

0x98e8,	// (0x00015420) cont_note_image_pane

0xcb4c,	// (0x00018684) popup_note2_window_g1_ParamLimits

0xcb4c,	// (0x00018684) popup_note2_window_g1

0xcb7d,	// (0x000186b5) popup_note2_window_t1_ParamLimits

0xcb7d,	// (0x000186b5) popup_note2_window_t1

0xcbc2,	// (0x000186fa) popup_note2_window_t2_ParamLimits

0xcbc2,	// (0x000186fa) popup_note2_window_t2

0xcc07,	// (0x0001873f) popup_note2_window_t3_ParamLimits

0xcc07,	// (0x0001873f) popup_note2_window_t3

0xcc4c,	// (0x00018784) popup_note2_window_t4_ParamLimits

0xcc4c,	// (0x00018784) popup_note2_window_t4

0x6f5b,	// (0x00012a93) popup_note2_window_t5_ParamLimits

0x6f5b,	// (0x00012a93) popup_note2_window_t5

0x0004,

0xfc45,	// (0x0001b77d) popup_note2_window_t_ParamLimits

0xfc45,	// (0x0001b77d) popup_note2_window_t

0xcc7b,	// (0x000187b3) popup_note2_image_window_g1_ParamLimits

0xcc7b,	// (0x000187b3) popup_note2_image_window_g1

0xcc87,	// (0x000187bf) popup_note2_image_window_g2_ParamLimits

0xcc87,	// (0x000187bf) popup_note2_image_window_g2

0x0001,

0xfc50,	// (0x0001b788) popup_note2_image_window_g_ParamLimits

0xfc50,	// (0x0001b788) popup_note2_image_window_g

0xcc99,	// (0x000187d1) popup_note2_image_window_t1_ParamLimits

0xcc99,	// (0x000187d1) popup_note2_image_window_t1

0xccb1,	// (0x000187e9) popup_note2_image_window_t2_ParamLimits

0xccb1,	// (0x000187e9) popup_note2_image_window_t2

0xccc9,	// (0x00018801) popup_note2_image_window_t3_ParamLimits

0xccc9,	// (0x00018801) popup_note2_image_window_t3

0x0002,

0xfc55,	// (0x0001b78d) popup_note2_image_window_t_ParamLimits

0xfc55,	// (0x0001b78d) popup_note2_image_window_t

0x98f6,	// (0x0001542e) popup_note2_wait_window_g1_ParamLimits

0x98f6,	// (0x0001542e) popup_note2_wait_window_g1

0xcce5,	// (0x0001881d) popup_note2_wait_window_g2_ParamLimits

0xcce5,	// (0x0001881d) popup_note2_wait_window_g2

0x990e,	// (0x00015446) popup_note2_wait_window_g3_ParamLimits

0x990e,	// (0x00015446) popup_note2_wait_window_g3

0x0002,

0xfc5c,	// (0x0001b794) popup_note2_wait_window_g_ParamLimits

0xfc5c,	// (0x0001b794) popup_note2_wait_window_g

0xccf1,	// (0x00018829) popup_note2_wait_window_t1_ParamLimits

0xccf1,	// (0x00018829) popup_note2_wait_window_t1

0xcd0f,	// (0x00018847) popup_note2_wait_window_t2_ParamLimits

0xcd0f,	// (0x00018847) popup_note2_wait_window_t2

0xcd2d,	// (0x00018865) popup_note2_wait_window_t3_ParamLimits

0xcd2d,	// (0x00018865) popup_note2_wait_window_t3

0xcd3f,	// (0x00018877) popup_note2_wait_window_t4_ParamLimits

0xcd3f,	// (0x00018877) popup_note2_wait_window_t4

0x0003,

0xfc63,	// (0x0001b79b) popup_note2_wait_window_t_ParamLimits

0xfc63,	// (0x0001b79b) popup_note2_wait_window_t

0xcd51,	// (0x00018889) wait_bar2_pane_ParamLimits

0xcd51,	// (0x00018889) wait_bar2_pane

0xcd69,	// (0x000188a1) popup_snote2_single_text_window_g1_ParamLimits

0xcd69,	// (0x000188a1) popup_snote2_single_text_window_g1

0xcd91,	// (0x000188c9) popup_snote2_single_text_window_t1_ParamLimits

0xcd91,	// (0x000188c9) popup_snote2_single_text_window_t1

0xcddd,	// (0x00018915) popup_snote2_single_text_window_t2_ParamLimits

0xcddd,	// (0x00018915) popup_snote2_single_text_window_t2

0xce29,	// (0x00018961) popup_snote2_single_text_window_t3_ParamLimits

0xce29,	// (0x00018961) popup_snote2_single_text_window_t3

0xce6a,	// (0x000189a2) popup_snote2_single_text_window_t4_ParamLimits

0xce6a,	// (0x000189a2) popup_snote2_single_text_window_t4

0xcea0,	// (0x000189d8) popup_snote2_single_text_window_t5_ParamLimits

0xcea0,	// (0x000189d8) popup_snote2_single_text_window_t5

0x0004,

0xfc6c,	// (0x0001b7a4) popup_snote2_single_text_window_t_ParamLimits

0xfc6c,	// (0x0001b7a4) popup_snote2_single_text_window_t

0xcecb,	// (0x00018a03) popup_snote2_single_graphic_window_g1_ParamLimits

0xcecb,	// (0x00018a03) popup_snote2_single_graphic_window_g1

0xcef3,	// (0x00018a2b) popup_snote2_single_graphic_window_g2_ParamLimits

0xcef3,	// (0x00018a2b) popup_snote2_single_graphic_window_g2

0x0001,

0xfc77,	// (0x0001b7af) popup_snote2_single_graphic_window_g_ParamLimits

0xfc77,	// (0x0001b7af) popup_snote2_single_graphic_window_g

0xcf1b,	// (0x00018a53) popup_snote2_single_graphic_window_t1_ParamLimits

0xcf1b,	// (0x00018a53) popup_snote2_single_graphic_window_t1

0xcf67,	// (0x00018a9f) popup_snote2_single_graphic_window_t2_ParamLimits

0xcf67,	// (0x00018a9f) popup_snote2_single_graphic_window_t2

0xce29,	// (0x00018961) popup_snote2_single_graphic_window_t3_ParamLimits

0xce29,	// (0x00018961) popup_snote2_single_graphic_window_t3

0xce6a,	// (0x000189a2) popup_snote2_single_graphic_window_t4_ParamLimits

0xce6a,	// (0x000189a2) popup_snote2_single_graphic_window_t4

0xcea0,	// (0x000189d8) popup_snote2_single_graphic_window_t5_ParamLimits

0xcea0,	// (0x000189d8) popup_snote2_single_graphic_window_t5

0x0004,

0xfc7c,	// (0x0001b7b4) popup_snote2_single_graphic_window_t_ParamLimits

0xfc7c,	// (0x0001b7b4) popup_snote2_single_graphic_window_t

0xb739,	// (0x00017271) clock_nsta_pane_cp2_t1

0xb739,	// (0x00017271) clock_nsta_pane_cp2_t2

0x0001,

0xfa90,	// (0x0001b5c8) clock_nsta_pane_cp2_t

0x7a4c,	// (0x00013584) form_field_data_wide_pane_g1_ParamLimits

0x7a58,	// (0x00013590) form_field_data_wide_pane_g2_ParamLimits

0x7a58,	// (0x00013590) form_field_data_wide_pane_g2

0x7a64,	// (0x0001359c) form_field_data_wide_pane_g3_ParamLimits

0x7a64,	// (0x0001359c) form_field_data_wide_pane_g3

0x0002,

0xf651,	// (0x0001b189) form_field_data_wide_pane_g_ParamLimits

0xf651,	// (0x0001b189) form_field_data_wide_pane_g

0xb615,	// (0x0001714d) grid_touch_3_pane_ParamLimits

0xb615,	// (0x0001714d) grid_touch_3_pane

0xcfb3,	// (0x00018aeb) cell_touch_3_pane_ParamLimits

0xcfb3,	// (0x00018aeb) cell_touch_3_pane

0xbcd6,	// (0x0001780e) cell_touch_3_pane_g1

0xbcd6,	// (0x0001780e) cell_touch_3_pane_g2

0x0001,

0xfb15,	// (0x0001b64d) cell_touch_3_pane_g

0x6fb3,	// (0x00012aeb) cont_query_data_pane

0x6fbb,	// (0x00012af3) cont_query_data_pane_cp1

0xcfe1,	// (0x00018b19) button_value_adjust_pane_cp7

0xcfe9,	// (0x00018b21) query_popup_pane_cp3

0x8353,	// (0x00013e8b) bg_popup_sub_pane_cp22_ParamLimits

0x4ba7,	// (0x000106df) navi_navi_volume_pane_cp2

0x4bc2,	// (0x000106fa) popup_side_volume_key_window_g2

0x4bd1,	// (0x00010709) popup_side_volume_key_window_g3

0x0002,

0xf6e7,	// (0x0001b21f) popup_side_volume_key_window_g

0x4bee,	// (0x00010726) popup_side_volume_key_window_t2

0x0001,

0xf6ee,	// (0x0001b226) popup_side_volume_key_window_t

0x869c,	// (0x000141d4) popup_side_volume_key_window_ParamLimits

0x7647,	// (0x0001317f) list_double_graphic_pane_g4_ParamLimits

0x7647,	// (0x0001317f) list_double_graphic_pane_g4

0xa8c7,	// (0x000163ff) list_single_2heading_msg_pane_ParamLimits

0xa8c7,	// (0x000163ff) list_single_2heading_msg_pane

0xd018,	// (0x00018b50) list_single_2heading_msg_pane_g1_ParamLimits

0xd018,	// (0x00018b50) list_single_2heading_msg_pane_g1

0xae65,	// (0x0001699d) list_single_2heading_msg_pane_g2_ParamLimits

0xae65,	// (0x0001699d) list_single_2heading_msg_pane_g2

0xd024,	// (0x00018b5c) list_single_2heading_msg_pane_g3_ParamLimits

0xd024,	// (0x00018b5c) list_single_2heading_msg_pane_g3

0xd030,	// (0x00018b68) list_single_2heading_msg_pane_g4_ParamLimits

0xd030,	// (0x00018b68) list_single_2heading_msg_pane_g4

0x0003,

0xfc87,	// (0x0001b7bf) list_single_2heading_msg_pane_g_ParamLimits

0xfc87,	// (0x0001b7bf) list_single_2heading_msg_pane_g

0xd048,	// (0x00018b80) list_single_2heading_msg_pane_t1_ParamLimits

0xd048,	// (0x00018b80) list_single_2heading_msg_pane_t1

0xd070,	// (0x00018ba8) list_single_2heading_msg_pane_t2_ParamLimits

0xd070,	// (0x00018ba8) list_single_2heading_msg_pane_t2

0xd09f,	// (0x00018bd7) list_single_2heading_msg_pane_t3_ParamLimits

0xd09f,	// (0x00018bd7) list_single_2heading_msg_pane_t3

0xd0d8,	// (0x00018c10) list_single_2heading_msg_pane_t4_ParamLimits

0xd0d8,	// (0x00018c10) list_single_2heading_msg_pane_t4

0x0003,

0xfc90,	// (0x0001b7c8) list_single_2heading_msg_pane_t_ParamLimits

0xfc90,	// (0x0001b7c8) list_single_2heading_msg_pane_t

0x6b88,	// (0x000126c0) title_pane_g4_ParamLimits

0x6b88,	// (0x000126c0) title_pane_g4

0x49b6,	// (0x000104ee) title_pane_stacon_g3_ParamLimits

0x49b6,	// (0x000104ee) title_pane_stacon_g3

0xcae3,	// (0x0001861b) list_single_2graphic_im_pane_g4_ParamLimits

0xcae3,	// (0x0001861b) list_single_2graphic_im_pane_g4

0xa347,	// (0x00015e7f) popup_side_volume_key_window_cp

0xac5c,	// (0x00016794) main_idle_act2_pane_t1

0x55cd,	// (0x00011105) toolbar_button_pane_g10

0x7444,	// (0x00012f7c) popup_toolbar_window_cp1

0xb72a,	// (0x00017262) clock_nsta_pane_cp_t1

0xb72a,	// (0x00017262) clock_nsta_pane_cp_t2

0x0001,

0xfa8b,	// (0x0001b5c3) clock_nsta_pane_cp_t

0x4ba7,	// (0x000106df) navi_navi_volume_pane_cp2_ParamLimits

0x4bb6,	// (0x000106ee) popup_side_volume_key_window_g1_ParamLimits

0x4bc2,	// (0x000106fa) popup_side_volume_key_window_g2_ParamLimits

0x4bd1,	// (0x00010709) popup_side_volume_key_window_g3_ParamLimits

0xf6e7,	// (0x0001b21f) popup_side_volume_key_window_g_ParamLimits

0x5a35,	// (0x0001156d) fep_hwr_aid_pane

0x5adc,	// (0x00011614) bg_fep_hwr_top_pane_g4_ParamLimits

0xbd32,	// (0x0001786a) fep_hwr_top_pane_g1_ParamLimits

0xbd44,	// (0x0001787c) fep_hwr_top_pane_g2_ParamLimits

0x5afc,	// (0x00011634) fep_hwr_top_pane_g3_ParamLimits

0xfae0,	// (0x0001b618) fep_hwr_top_pane_g_ParamLimits

0x5b11,	// (0x00011649) fep_hwr_top_text_pane_ParamLimits

0xa10a,	// (0x00015c42) aid_touch_tab_arrow_arrow_2

0xa113,	// (0x00015c4b) aid_touch_tab_arrow_left_2

0x5a49,	// (0x00011581) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x5a80,	// (0x000115b8) fep_hwr_prediction_pane

0xbea4,	// (0x000179dc) fep_vkb_prediction_pane

0xbfa8,	// (0x00017ae0) fep_vkb_side_pane_g3_ParamLimits

0xbfa8,	// (0x00017ae0) fep_vkb_side_pane_g3

0x5c8c,	// (0x000117c4) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x5cf8,	// (0x00011830) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x5d05,	// (0x0001183d) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb8f,	// (0x0001b6c7) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x5e34,	// (0x0001196c) fep_hwr_prediction_pane_g1

0x5e3e,	// (0x00011976) fep_hwr_prediction_pane_g2

0x5e46,	// (0x0001197e) fep_hwr_prediction_pane_g3

0x5e4e,	// (0x00011986) fep_hwr_prediction_pane_g4

0x0003,

0xfc99,	// (0x0001b7d1) fep_hwr_prediction_pane_g

0xd0fd,	// (0x00018c35) fep_vkb_prediction_pane_g1

0xd107,	// (0x00018c3f) fep_vkb_prediction_pane_g2

0xd10f,	// (0x00018c47) fep_vkb_prediction_pane_g3

0xd117,	// (0x00018c4f) fep_vkb_prediction_pane_g4

0x0003,

0xfca2,	// (0x0001b7da) fep_vkb_prediction_pane_g

0x58b5,	// (0x000113ed) slider_set_pane_g3

0x58c9,	// (0x00011401) slider_set_pane_g4

0x58e1,	// (0x00011419) slider_set_pane_g5

0x58b5,	// (0x000113ed) slider_set_pane_g6

0x58f7,	// (0x0001142f) slider_set_pane_g7

0xa7b9,	// (0x000162f1) slider_form_pane_g3

0xa7c2,	// (0x000162fa) slider_form_pane_g4

0xa7ca,	// (0x00016302) slider_form_pane_g5

0xa7b9,	// (0x000162f1) slider_form_pane_g6

0xa7d2,	// (0x0001630a) slider_form_pane_g7

0xaf59,	// (0x00016a91) slider_set_pane_vc_g3

0xaf62,	// (0x00016a9a) slider_set_pane_vc_g4

0xaf6b,	// (0x00016aa3) slider_set_pane_vc_g5

0xaf59,	// (0x00016a91) slider_set_pane_vc_g6

0xaf74,	// (0x00016aac) slider_set_pane_vc_g7

0xb3e8,	// (0x00016f20) slider_form_pane_vc_g1

0xb3f1,	// (0x00016f29) slider_form_pane_vc_g2

0xb3fa,	// (0x00016f32) slider_form_pane_vc_g3

0xb3e8,	// (0x00016f20) slider_form_pane_vc_g4

0xb403,	// (0x00016f3b) slider_form_pane_vc_g5

0x0004,

0xfa5d,	// (0x0001b595) slider_form_pane_vc_g

0x467d,	// (0x000101b5) main_idle_act3_pane

0xd11f,	// (0x00018c57) ai3_links_pane

0xd128,	// (0x00018c60) popup_ai3_data_window_ParamLimits

0xd128,	// (0x00018c60) popup_ai3_data_window

0x3adc,	// (0x0000f614) grid_ai3_links_pane

0xd142,	// (0x00018c7a) cell_ai3_links_pane_ParamLimits

0xd142,	// (0x00018c7a) cell_ai3_links_pane

0xd15a,	// (0x00018c92) bg_popup_sub_pane_cp11

0xd167,	// (0x00018c9f) cell_ai3_links_pane_g1

0x3adc,	// (0x0000f614) bg_popup_sub_pane_cp12

0xd18c,	// (0x00018cc4) heading_ai3_data_pane

0xd194,	// (0x00018ccc) list_ai3_gene_pane

0xd1a0,	// (0x00018cd8) popup_ai3_data_window_g1

0xd1a8,	// (0x00018ce0) heading_ai3_data_pane_g1

0xd1b0,	// (0x00018ce8) heading_ai3_data_pane_t1

0xd1be,	// (0x00018cf6) list_double_ai3_gene_pane_ParamLimits

0xd1be,	// (0x00018cf6) list_double_ai3_gene_pane

0xd1cb,	// (0x00018d03) list_single_ai3_gene_pane_ParamLimits

0xd1cb,	// (0x00018d03) list_single_ai3_gene_pane

0xbc9b,	// (0x000177d3) list_highlight_pane_cp7_ParamLimits

0xbc9b,	// (0x000177d3) list_highlight_pane_cp7

0xd1d8,	// (0x00018d10) list_single_a13_gene_pane_t1_ParamLimits

0xd1d8,	// (0x00018d10) list_single_a13_gene_pane_t1

0xd1ef,	// (0x00018d27) list_single_ai3_gene_pane_g1

0xd1f8,	// (0x00018d30) list_single_ai3_gene_pane_g2

0x0001,

0xfcab,	// (0x0001b7e3) list_single_ai3_gene_pane_g

0xd200,	// (0x00018d38) list_double_ai3_gene_pane_g1_ParamLimits

0xd200,	// (0x00018d38) list_double_ai3_gene_pane_g1

0xd20c,	// (0x00018d44) list_double_ai3_gene_pane_t1_ParamLimits

0xd20c,	// (0x00018d44) list_double_ai3_gene_pane_t1

0xd228,	// (0x00018d60) list_double_ai3_gene_pane_t2_ParamLimits

0xd228,	// (0x00018d60) list_double_ai3_gene_pane_t2

0xd23e,	// (0x00018d76) list_double_ai3_gene_pane_t3_ParamLimits

0xd23e,	// (0x00018d76) list_double_ai3_gene_pane_t3

0x0002,

0xfcb0,	// (0x0001b7e8) list_double_ai3_gene_pane_t_ParamLimits

0xfcb0,	// (0x0001b7e8) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xcffa,	// (0x00018b32) aid_size_min_col_2

0xd004,	// (0x00018b3c) aid_size_min_msg_ParamLimits

0xd004,	// (0x00018b3c) aid_size_min_msg

0xc0a8,	// (0x00017be0) fep_vkb_top_text_pane_g2_ParamLimits

0xc0a8,	// (0x00017be0) fep_vkb_top_text_pane_g2

0x0001,

0xfb10,	// (0x0001b648) fep_vkb_top_text_pane_g_ParamLimits

0xfb10,	// (0x0001b648) fep_vkb_top_text_pane_g

0x467d,	// (0x000101b5) main_hc_apps_shell_pane

0xd25b,	// (0x00018d93) grid_hc_apps_pane_ParamLimits

0xd25b,	// (0x00018d93) grid_hc_apps_pane

0xd26d,	// (0x00018da5) list_hc_apps_pane

0xd275,	// (0x00018dad) scroll_pane_cp37_ParamLimits

0xd275,	// (0x00018dad) scroll_pane_cp37

0xd281,	// (0x00018db9) cell_hc_apps_pane_ParamLimits

0xd281,	// (0x00018db9) cell_hc_apps_pane

0xd32f,	// (0x00018e67) cell_hc_apps_pane_g1_ParamLimits

0xd32f,	// (0x00018e67) cell_hc_apps_pane_g1

0xd35f,	// (0x00018e97) cell_hc_apps_pane_g2_ParamLimits

0xd35f,	// (0x00018e97) cell_hc_apps_pane_g2

0xd37b,	// (0x00018eb3) cell_hc_apps_pane_g3_ParamLimits

0xd37b,	// (0x00018eb3) cell_hc_apps_pane_g3

0x0002,

0xfcb7,	// (0x0001b7ef) cell_hc_apps_pane_g_ParamLimits

0xfcb7,	// (0x0001b7ef) cell_hc_apps_pane_g

0xd39d,	// (0x00018ed5) cell_hc_apps_pane_t1_ParamLimits

0xd39d,	// (0x00018ed5) cell_hc_apps_pane_t1

0x6ed7,	// (0x00012a0f) grid_highlight_pane_cp10_ParamLimits

0x6ed7,	// (0x00012a0f) grid_highlight_pane_cp10

0xd3dd,	// (0x00018f15) list_single_hc_apps_pane_ParamLimits

0xd3dd,	// (0x00018f15) list_single_hc_apps_pane

0xd439,	// (0x00018f71) list_single_hc_apps_pane_g1

0xd452,	// (0x00018f8a) list_single_hc_apps_pane_g2

0x0001,

0xfcbe,	// (0x0001b7f6) list_single_hc_apps_pane_g

0xd46b,	// (0x00018fa3) list_single_hc_apps_pane_g2_copy1

0xd487,	// (0x00018fbf) list_single_hc_apps_pane_t1

0x6c34,	// (0x0001276c) bg_set_opt_pane_cp_ParamLimits

0x48de,	// (0x00010416) setting_slider_pane_t1_ParamLimits

0x48f7,	// (0x0001042f) setting_slider_pane_t2_ParamLimits

0x4911,	// (0x00010449) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x0001b071) setting_slider_pane_t_ParamLimits

0x4929,	// (0x00010461) slider_set_pane_ParamLimits

0x4e50,	// (0x00010988) control_pane_g5_ParamLimits

0x4e50,	// (0x00010988) control_pane_g5

0xa608,	// (0x00016140) slider_set_pane_g1_ParamLimits

0x58a9,	// (0x000113e1) slider_set_pane_g2_ParamLimits

0x58b5,	// (0x000113ed) slider_set_pane_g3_ParamLimits

0x58c9,	// (0x00011401) slider_set_pane_g4_ParamLimits

0x58e1,	// (0x00011419) slider_set_pane_g5_ParamLimits

0x58b5,	// (0x000113ed) slider_set_pane_g6_ParamLimits

0x58f7,	// (0x0001142f) slider_set_pane_g7_ParamLimits

0xf935,	// (0x0001b46d) slider_set_pane_g_ParamLimits

0x877d,	// (0x000142b5) navi_icon_text_pane_ParamLimits

0x8c80,	// (0x000147b8) aid_fill_nsta_2_ParamLimits

0x8cbf,	// (0x000147f7) aid_touch_tab_arrow_left_ParamLimits

0x8cce,	// (0x00014806) aid_touch_tab_arrow_right_ParamLimits

0x8d3b,	// (0x00014873) clock_nsta_pane_ParamLimits

0xa0ec,	// (0x00015c24) navi_icon_pane_g1_ParamLimits

0xa0f8,	// (0x00015c30) navi_text_pane_t1_ParamLimits

0xb836,	// (0x0001736e) navi_icon_text_pane_g1_ParamLimits

0xb842,	// (0x0001737a) navi_icon_text_pane_t1_ParamLimits

0xd439,	// (0x00018f71) list_single_hc_apps_pane_g1_ParamLimits

0xd452,	// (0x00018f8a) list_single_hc_apps_pane_g2_ParamLimits

0xfcbe,	// (0x0001b7f6) list_single_hc_apps_pane_g_ParamLimits

0xd46b,	// (0x00018fa3) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xd487,	// (0x00018fbf) list_single_hc_apps_pane_t1_ParamLimits

0x47e8,	// (0x00010320) popup_toolbar2_fixed_window_ParamLimits

0x47e8,	// (0x00010320) popup_toolbar2_fixed_window

0x5465,	// (0x00010f9d) popup_toolbar2_float_window

0x3adc,	// (0x0000f614) bg_popup_sub_pane_cp27

0xd4b5,	// (0x00018fed) grid_toolbar2_float_pane

0x3adc,	// (0x0000f614) bg_popup_sub_pane_cp26

0xd4b5,	// (0x00018fed) grid_toolbar2_fixed_pane

0xd4bd,	// (0x00018ff5) cell_toolbar2_fixed_pane_ParamLimits

0xd4bd,	// (0x00018ff5) cell_toolbar2_fixed_pane

0xd4cd,	// (0x00019005) cell_toolbar2_fixed_pane_g1

0xd4d6,	// (0x0001900e) toolbar2_fixed_button_pane

0x916e,	// (0x00014ca6) toolbar2_fixed_button_pane_g1

0x917e,	// (0x00014cb6) toolbar2_fixed_button_pane_g2

0x9176,	// (0x00014cae) toolbar2_fixed_button_pane_g3

0x918e,	// (0x00014cc6) toolbar2_fixed_button_pane_g4

0x9186,	// (0x00014cbe) toolbar2_fixed_button_pane_g5

0x9196,	// (0x00014cce) toolbar2_fixed_button_pane_g6

0x919e,	// (0x00014cd6) toolbar2_fixed_button_pane_g7

0x91ae,	// (0x00014ce6) toolbar2_fixed_button_pane_g8

0x91a6,	// (0x00014cde) toolbar2_fixed_button_pane_g9

0x0008,

0xf837,	// (0x0001b36f) toolbar2_fixed_button_pane_g

0xd4de,	// (0x00019016) cell_toolbar2_float_pane_ParamLimits

0xd4de,	// (0x00019016) cell_toolbar2_float_pane

0xd4ef,	// (0x00019027) cell_toolbar2_float_pane_g1

0xd4d6,	// (0x0001900e) toolbar2_fixed_button_pane_cp

0xbe04,	// (0x0001793c) fep_vkb_accented_list_pane_ParamLimits

0xbe04,	// (0x0001793c) fep_vkb_accented_list_pane

0x5c6c,	// (0x000117a4) bg_popup_fep_shadow_pane_g9

0x88fa,	// (0x00014432) bg_popup_fep_shadow_pane_cp3

0x7d1c,	// (0x00013854) list_accented_list_pane

0xd4f8,	// (0x00019030) list_single_accented_list_pane_ParamLimits

0xd4f8,	// (0x00019030) list_single_accented_list_pane

0x88fa,	// (0x00014432) list_highlight_pane_cp10

0xd509,	// (0x00019041) list_single_accented_list_pane_t1

0x53b5,	// (0x00010eed) popup_slider_window_ParamLimits

0x53b5,	// (0x00010eed) popup_slider_window

0xcff1,	// (0x00018b29) aid_indentation_list_msg

0xd5cd,	// (0x00019105) bg_popup_window_pane_cp19

0xd635,	// (0x0001916d) popup_slider_window_g1

0xd651,	// (0x00019189) popup_slider_window_g2

0xd66d,	// (0x000191a5) popup_slider_window_g3

0x0005,

0xfcc3,	// (0x0001b7fb) popup_slider_window_g

0xd6d3,	// (0x0001920b) popup_slider_window_t1

0xd747,	// (0x0001927f) small_volume_slider_vertical_pane

0xbcd6,	// (0x0001780e) small_volume_slider_vertical_pane_g1

0xbcd6,	// (0x0001780e) small_volume_slider_vertical_pane_g2

0xd763,	// (0x0001929b) small_volume_slider_vertical_pane_g3

0x0002,

0xfcd5,	// (0x0001b80d) small_volume_slider_vertical_pane_g

0x45a0,	// (0x000100d8) area_side_right_pane_ParamLimits

0x45a0,	// (0x000100d8) area_side_right_pane

0x5e56,	// (0x0001198e) aid_size_side_button_ParamLimits

0x5e56,	// (0x0001198e) aid_size_side_button

0x5e6a,	// (0x000119a2) grid_sctrl_middle_pane_ParamLimits

0x5e6a,	// (0x000119a2) grid_sctrl_middle_pane

0x5e89,	// (0x000119c1) sctrl_sk_bottom_pane

0x5e9a,	// (0x000119d2) sctrl_sk_top_pane

0x5eac,	// (0x000119e4) aid_touch_sctrl_top

0x5eb9,	// (0x000119f1) bg_sctrl_sk_pane_ParamLimits

0x5eb9,	// (0x000119f1) bg_sctrl_sk_pane

0x5ec7,	// (0x000119ff) sctrl_sk_top_pane_g1

0x5ed4,	// (0x00011a0c) sctrl_sk_top_pane_t1

0x5eac,	// (0x000119e4) aid_touch_sctrl_bottom

0x5eb9,	// (0x000119f1) bg_sctrl_sk_pane_cp_ParamLimits

0x5eb9,	// (0x000119f1) bg_sctrl_sk_pane_cp

0x5eef,	// (0x00011a27) sctrl_sk_bottom_pane_g1

0x5ed4,	// (0x00011a0c) sctrl_sk_bottom_pane_t1

0x5ef8,	// (0x00011a30) cell_sctrl_middle_pane_ParamLimits

0x5ef8,	// (0x00011a30) cell_sctrl_middle_pane

0x5f13,	// (0x00011a4b) aid_touch_sctrl_middle_ParamLimits

0x5f13,	// (0x00011a4b) aid_touch_sctrl_middle

0x5f25,	// (0x00011a5d) bg_sctrl_middle_pane_ParamLimits

0x5f25,	// (0x00011a5d) bg_sctrl_middle_pane

0x5c8c,	// (0x000117c4) cell_sctrl_middle_pane_g1_ParamLimits

0x5c8c,	// (0x000117c4) cell_sctrl_middle_pane_g1

0x5f33,	// (0x00011a6b) cell_sctrl_middle_pane_g2_ParamLimits

0x5f33,	// (0x00011a6b) cell_sctrl_middle_pane_g2

0x0001,

0xfce1,	// (0x0001b819) cell_sctrl_middle_pane_g_ParamLimits

0xfce1,	// (0x0001b819) cell_sctrl_middle_pane_g

0x916e,	// (0x00014ca6) bg_sctrl_middle_pane_g1

0x9176,	// (0x00014cae) bg_sctrl_middle_pane_g2

0x917e,	// (0x00014cb6) bg_sctrl_middle_pane_g3

0x9186,	// (0x00014cbe) bg_sctrl_middle_pane_g4

0x918e,	// (0x00014cc6) bg_sctrl_middle_pane_g5

0x9196,	// (0x00014cce) bg_sctrl_middle_pane_g6

0x919e,	// (0x00014cd6) bg_sctrl_middle_pane_g7

0x91a6,	// (0x00014cde) bg_sctrl_middle_pane_g8

0x0007,

0xfce6,	// (0x0001b81e) bg_sctrl_middle_pane_g

0x91ae,	// (0x00014ce6) bg_sctrl_middle_pane_g8_copy1

0x916e,	// (0x00014ca6) bg_sctrl_sk_pane_g1

0x917e,	// (0x00014cb6) bg_sctrl_sk_pane_g2

0x9176,	// (0x00014cae) bg_sctrl_sk_pane_g3

0x0008,

0xf837,	// (0x0001b36f) bg_sctrl_sk_pane_g

0x740a,	// (0x00012f42) aid_size_touch_scroll_bar

0x918e,	// (0x00014cc6) bg_sctrl_sk_pane_g4

0x9186,	// (0x00014cbe) bg_sctrl_sk_pane_g5

0x9196,	// (0x00014cce) bg_sctrl_sk_pane_g6

0x919e,	// (0x00014cd6) bg_sctrl_sk_pane_g7

0x91ae,	// (0x00014ce6) bg_sctrl_sk_pane_g8

0x91a6,	// (0x00014cde) bg_sctrl_sk_pane_g9

0x501c,	// (0x00010b54) popup_fep_china_hwr2_fs_candidate_window

0x5026,	// (0x00010b5e) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x5026,	// (0x00010b5e) popup_fep_china_hwr2_fs_control_window

0x5c8c,	// (0x000117c4) sctrl_sk_top_pane_g2

0x0001,

0xfcdc,	// (0x0001b814) sctrl_sk_top_pane_g

0xd76c,	// (0x000192a4) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd76c,	// (0x000192a4) aid_fep_china_hwr2_fs_cell

0xd77e,	// (0x000192b6) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd77e,	// (0x000192b6) bg_popup_fep_shadow_pane_cp4

0xd795,	// (0x000192cd) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd795,	// (0x000192cd) bg_popup_fep_shadow_pane_cp5

0xd7a7,	// (0x000192df) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd7a7,	// (0x000192df) popup_fep_china_hwr2_fs_control_bar_grid

0xd7b7,	// (0x000192ef) popup_fep_china_hwr2_fs_control_funtion_grid

0xd7bf,	// (0x000192f7) aid_fep_china_hwr2_fs_candi_cell

0x3adc,	// (0x0000f614) bg_popup_fep_shadow_pane_cp6

0xd7c9,	// (0x00019301) popup_fep_china_hwr2_fs_candidate_grid

0xd7d3,	// (0x0001930b) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd7d3,	// (0x0001930b) cell_fep_china_hwr2_fs_funtion_grid

0xbcd6,	// (0x0001780e) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd7eb,	// (0x00019323) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd7eb,	// (0x00019323) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd7f9,	// (0x00019331) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd7f9,	// (0x00019331) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfcf7,	// (0x0001b82f) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfcf7,	// (0x0001b82f) cell_fep_china_hwr2_fs_funtion_grid_g

0xd80f,	// (0x00019347) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd80f,	// (0x00019347) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd824,	// (0x0001935c) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd824,	// (0x0001935c) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfcfc,	// (0x0001b834) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfcfc,	// (0x0001b834) cell_fep_china_hwr2_fs_funtion_grid_t

0xd840,	// (0x00019378) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd848,	// (0x00019380) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd850,	// (0x00019388) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd01,	// (0x0001b839) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd858,	// (0x00019390) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd858,	// (0x00019390) cell_fep_china_hwr2_fs_candidate_grid

0xd871,	// (0x000193a9) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd879,	// (0x000193b1) popup_fep_china_hwr2_fs_candidate_grid_g21

0xbcd6,	// (0x0001780e) cell_fep_china_hwr2_fs_candidate_grid_g1

0xbcd6,	// (0x0001780e) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb15,	// (0x0001b64d) cell_fep_china_hwr2_fs_candidate_grid_g

0xd881,	// (0x000193b9) cell_fep_china_hwr2_fs_candidate_grid_t1

0x8d4e,	// (0x00014886) clock_nsta_pane_cp_24_ParamLimits

0x8d4e,	// (0x00014886) clock_nsta_pane_cp_24

0x8dcc,	// (0x00014904) indicator_nsta_pane_cp_24_ParamLimits

0x8dcc,	// (0x00014904) indicator_nsta_pane_cp_24

0x9f68,	// (0x00015aa0) heading_pane_g1

0x0001,

0xf89c,	// (0x0001b3d4) heading_pane_g

0xaaa5,	// (0x000165dd) grid_sct_catagory_button_pane

0xaad5,	// (0x0001660d) scroll_pane_cp5_ParamLimits

0xb884,	// (0x000173bc) button_value_adjust_pane_cp5_ParamLimits

0xb884,	// (0x000173bc) button_value_adjust_pane_cp5

0xb980,	// (0x000174b8) form2_midp_time_pane_ParamLimits

0xd88f,	// (0x000193c7) cell_sct_catagory_button_pane_ParamLimits

0xd88f,	// (0x000193c7) cell_sct_catagory_button_pane

0xbc9b,	// (0x000177d3) bg_button_pane_cp01_ParamLimits

0xbc9b,	// (0x000177d3) bg_button_pane_cp01

0xbcd6,	// (0x0001780e) cell_sct_catagory_button_pane_g1

0x53f4,	// (0x00010f2c) popup_tb_extension_window

0xd8a1,	// (0x000193d9) aid_size_cell_ext_ParamLimits

0xd8a1,	// (0x000193d9) aid_size_cell_ext

0x6ed7,	// (0x00012a0f) bg_tb_trans_pane_cp1_ParamLimits

0x6ed7,	// (0x00012a0f) bg_tb_trans_pane_cp1

0xd8c1,	// (0x000193f9) grid_tb_ext_pane_ParamLimits

0xd8c1,	// (0x000193f9) grid_tb_ext_pane

0xd8ef,	// (0x00019427) cell_tb_ext_pane_ParamLimits

0xd8ef,	// (0x00019427) cell_tb_ext_pane

0xd906,	// (0x0001943e) cell_tb_ext_pane_g1_ParamLimits

0xd906,	// (0x0001943e) cell_tb_ext_pane_g1

0xd923,	// (0x0001945b) cell_tb_ext_pane_t1

0x6ed7,	// (0x00012a0f) list_highlight_pane_cp11_ParamLimits

0x6ed7,	// (0x00012a0f) list_highlight_pane_cp11

0x4807,	// (0x0001033f) popup_uni_indicator_window_ParamLimits

0x4807,	// (0x0001033f) popup_uni_indicator_window

0x7a32,	// (0x0001356a) bg_popup_sub_pane_cp14

0xd93e,	// (0x00019476) list_uniindi_pane

0xd94a,	// (0x00019482) uniindi_top_pane

0x6ed7,	// (0x00012a0f) bg_uniindi_top_pane

0xd969,	// (0x000194a1) uniindi_top_pane_g1

0xd97f,	// (0x000194b7) uniindi_top_pane_g2

0x0003,

0xfd08,	// (0x0001b840) uniindi_top_pane_g

0xd9a9,	// (0x000194e1) uniindi_top_pane_t1

0xd9d3,	// (0x0001950b) list_single_uniindi_pane_ParamLimits

0xd9d3,	// (0x0001950b) list_single_uniindi_pane

0xbcd6,	// (0x0001780e) bg_uniindi_top_pane_g1

0xd9e6,	// (0x0001951e) list_single_uniindi_pane_g1

0xd9f9,	// (0x00019531) list_single_uniindi_pane_t1

0x467d,	// (0x000101b5) control_bg_pane

0xda1e,	// (0x00019556) bg_sctrl_sk_pane_cp1

0xda27,	// (0x0001955f) bg_sctrl_sk_pane_cp2

0xda30,	// (0x00019568) control_bg_pane_g1

0xda39,	// (0x00019571) control_bg_pane_g2

0x0001,

0xfd11,	// (0x0001b849) control_bg_pane_g

0xb6ce,	// (0x00017206) cell_indicator_nsta_pane_g1_ParamLimits

0xb6dc,	// (0x00017214) cell_indicator_nsta_pane_g2_ParamLimits

0xfa79,	// (0x0001b5b1) cell_indicator_nsta_pane_g_ParamLimits

0xba08,	// (0x00017540) form2_midp_time_pane_t1_ParamLimits

0x4f84,	// (0x00010abc) main_idle_act4_pane_ParamLimits

0x4f84,	// (0x00010abc) main_idle_act4_pane

0x53f4,	// (0x00010f2c) popup_tb_extension_window_ParamLimits

0xd8df,	// (0x00019417) tb_ext_find_pane_ParamLimits

0xd8df,	// (0x00019417) tb_ext_find_pane

0xda42,	// (0x0001957a) ai_gene_pane_1_cp1

0x8a41,	// (0x00014579) ai_gene_pane_2_cp1

0xda4a,	// (0x00019582) list_single_idle_plugin_calendar_pane

0xda53,	// (0x0001958b) list_single_idle_plugin_notification_pane

0xda5c,	// (0x00019594) list_single_idle_plugin_player_pane

0xda65,	// (0x0001959d) list_single_idle_plugin_shortcut_pane_ParamLimits

0xda65,	// (0x0001959d) list_single_idle_plugin_shortcut_pane

0xda87,	// (0x000195bf) main_idle_act4_pane_t1

0xda99,	// (0x000195d1) main_idle_act4_pane_t2

0x0001,

0xfd16,	// (0x0001b84e) main_idle_act4_pane_t

0xdaab,	// (0x000195e3) middle_sk_idle_act4_pane_ParamLimits

0xdaab,	// (0x000195e3) middle_sk_idle_act4_pane

0xdac1,	// (0x000195f9) popup_clock_digital_analogue_window_cp2

0xdadb,	// (0x00019613) shortcut_wheel_idle_act4_pane_ParamLimits

0xdadb,	// (0x00019613) shortcut_wheel_idle_act4_pane

0xbcd6,	// (0x0001780e) shortcut_wheel_idle_act4_pane_g1

0xbcd6,	// (0x0001780e) shortcut_wheel_idle_act4_pane_g2

0xbcd6,	// (0x0001780e) shortcut_wheel_idle_act4_pane_g3

0xbcd6,	// (0x0001780e) shortcut_wheel_idle_act4_pane_g4

0xbcd6,	// (0x0001780e) shortcut_wheel_idle_act4_pane_g5

0xdaef,	// (0x00019627) shortcut_wheel_idle_act4_pane_g6

0xdaf7,	// (0x0001962f) shortcut_wheel_idle_act4_pane_g7

0xdaff,	// (0x00019637) shortcut_wheel_idle_act4_pane_g8

0xdb28,	// (0x00019660) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd1b,	// (0x0001b853) shortcut_wheel_idle_act4_pane_g

0xbf54,	// (0x00017a8c) middle_sk_idle_act4_pane_g1_ParamLimits

0xbf54,	// (0x00017a8c) middle_sk_idle_act4_pane_g1

0xdb8c,	// (0x000196c4) middle_sk_idle_act4_pane_g2_ParamLimits

0xdb8c,	// (0x000196c4) middle_sk_idle_act4_pane_g2

0x0001,

0xfd3e,	// (0x0001b876) middle_sk_idle_act4_pane_g_ParamLimits

0xfd3e,	// (0x0001b876) middle_sk_idle_act4_pane_g

0xdb98,	// (0x000196d0) middle_sk_idle_act4_pane_t1_ParamLimits

0xdb98,	// (0x000196d0) middle_sk_idle_act4_pane_t1

0xdbb5,	// (0x000196ed) grid_ai_shortcut_pane_ParamLimits

0xdbb5,	// (0x000196ed) grid_ai_shortcut_pane

0xdbce,	// (0x00019706) list_highlight_pane_cp16_ParamLimits

0xdbce,	// (0x00019706) list_highlight_pane_cp16

0xdbdb,	// (0x00019713) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdbdb,	// (0x00019713) list_single_idle_plugin_shortcut_pane_g1

0xdbe7,	// (0x0001971f) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdbe7,	// (0x0001971f) list_single_idle_plugin_shortcut_pane_g2

0xdbff,	// (0x00019737) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdbff,	// (0x00019737) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd43,	// (0x0001b87b) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd43,	// (0x0001b87b) list_single_idle_plugin_shortcut_pane_g

0xdc12,	// (0x0001974a) cell_ai_shortcut_pane_ParamLimits

0xdc12,	// (0x0001974a) cell_ai_shortcut_pane

0xdc36,	// (0x0001976e) cell_ai_shortcut_pane_g1_ParamLimits

0xdc36,	// (0x0001976e) cell_ai_shortcut_pane_g1

0xda42,	// (0x0001957a) ai_gene_pane_1_cp2

0xdc58,	// (0x00019790) ai_gene_pane_2_cp2

0xdc60,	// (0x00019798) list_highlight_pane_cp15

0xdc69,	// (0x000197a1) list_single_idle_plugin_calendar_pane_g1

0xdc60,	// (0x00019798) list_highlight_pane_cp17

0xdc71,	// (0x000197a9) list_single_idle_plugin_calendar_pane_g1_copy1

0xdc79,	// (0x000197b1) list_single_idle_plugin_player_pane_g1

0xacfe,	// (0x00016836) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd4a,	// (0x0001b882) list_single_idle_plugin_player_pane_g

0xdc81,	// (0x000197b9) list_single_idle_plugin_player_pane_t1

0xdc8f,	// (0x000197c7) list_single_idle_plugin_player_pane_t2

0xdc9d,	// (0x000197d5) list_single_idle_plugin_player_pane_t3

0xdcab,	// (0x000197e3) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd4f,	// (0x0001b887) list_single_idle_plugin_player_pane_t

0xdcb9,	// (0x000197f1) wait_bar_pane_cp15

0xdcc1,	// (0x000197f9) grid_ai_notification_pane

0xacfe,	// (0x00016836) list_single_idle_plugin_notification_pane_g1

0xdcca,	// (0x00019802) cell_ai_notification_pane_ParamLimits

0xdcca,	// (0x00019802) cell_ai_notification_pane

0xdcd7,	// (0x0001980f) cell_ai_notification_pane_g1

0xdcdf,	// (0x00019817) cell_ai_notification_pane_t1

0xdced,	// (0x00019825) tb_ext_find_button_pane

0xdcf5,	// (0x0001982d) tb_ext_find_pane_g1

0xdcfd,	// (0x00019835) tb_ext_find_pane_t1

0x824a,	// (0x00013d82) tb_ext_find_button_pane_g1

0xdd0b,	// (0x00019843) tb_ext_find_button_pane_g2

0x0001,

0xfd58,	// (0x0001b890) tb_ext_find_button_pane_g

0xda87,	// (0x000195bf) main_idle_act4_pane_t1_ParamLimits

0xda99,	// (0x000195d1) main_idle_act4_pane_t2_ParamLimits

0xfd16,	// (0x0001b84e) main_idle_act4_pane_t_ParamLimits

0xdac1,	// (0x000195f9) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdacf,	// (0x00019607) sat_plugin_idle_act4_pane_ParamLimits

0xdacf,	// (0x00019607) sat_plugin_idle_act4_pane

0xdd14,	// (0x0001984c) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdd14,	// (0x0001984c) sat_plugin_idle_act4_pane_t1

0xdd27,	// (0x0001985f) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdd27,	// (0x0001985f) sat_plugin_idle_act4_pane_t2

0xdd3a,	// (0x00019872) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdd3a,	// (0x00019872) sat_plugin_idle_act4_pane_t3

0xdd4d,	// (0x00019885) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdd4d,	// (0x00019885) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd5d,	// (0x0001b895) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd5d,	// (0x0001b895) sat_plugin_idle_act4_pane_t

0x4742,	// (0x0001027a) popup_battery_window_ParamLimits

0x4742,	// (0x0001027a) popup_battery_window

0x6ed7,	// (0x00012a0f) bg_popup_sub_pane_cp25_ParamLimits

0x6ed7,	// (0x00012a0f) bg_popup_sub_pane_cp25

0xdd60,	// (0x00019898) popup_battery_window_g1_ParamLimits

0xdd60,	// (0x00019898) popup_battery_window_g1

0xdd6c,	// (0x000198a4) popup_battery_window_t1_ParamLimits

0xdd6c,	// (0x000198a4) popup_battery_window_t1

0xdd7e,	// (0x000198b6) popup_battery_window_t2_ParamLimits

0xdd7e,	// (0x000198b6) popup_battery_window_t2

0x0001,

0xfd66,	// (0x0001b89e) popup_battery_window_t_ParamLimits

0xfd66,	// (0x0001b89e) popup_battery_window_t

0x890e,	// (0x00014446) midp_canvas_pane_ParamLimits

0x8985,	// (0x000144bd) midp_keypad_pane_ParamLimits

0x8985,	// (0x000144bd) midp_keypad_pane

0x8c26,	// (0x0001475e) main_midp_pane_ParamLimits

0xb748,	// (0x00017280) signal_pane_g2_cp_ParamLimits

0xdd9b,	// (0x000198d3) aid_size_cell_midp_keypad_ParamLimits

0xdd9b,	// (0x000198d3) aid_size_cell_midp_keypad

0xddb5,	// (0x000198ed) midp_keyp_game_grid_pane_ParamLimits

0xddb5,	// (0x000198ed) midp_keyp_game_grid_pane

0xddd5,	// (0x0001990d) midp_keyp_rocker_pane_ParamLimits

0xddd5,	// (0x0001990d) midp_keyp_rocker_pane

0xde0e,	// (0x00019946) midp_keyp_sk_left_pane_ParamLimits

0xde0e,	// (0x00019946) midp_keyp_sk_left_pane

0xde68,	// (0x000199a0) midp_keyp_sk_right_pane_ParamLimits

0xde68,	// (0x000199a0) midp_keyp_sk_right_pane

0x3adc,	// (0x0000f614) bg_button_pane_cp03

0xdec2,	// (0x000199fa) midp_keyp_sk_left_pane_g1

0x3adc,	// (0x0000f614) bg_button_pane_cp04

0xdec2,	// (0x000199fa) midp_keyp_sk_right_pane_g1

0xbcd6,	// (0x0001780e) midp_keyp_rocker_pane_g1

0xdecb,	// (0x00019a03) keyp_game_cell_pane_ParamLimits

0xdecb,	// (0x00019a03) keyp_game_cell_pane

0x3adc,	// (0x0000f614) bg_button_pane_cp02

0xdede,	// (0x00019a16) keyp_game_cell_pane_g1

0x4786,	// (0x000102be) popup_fep_vkb2_window_ParamLimits

0x4786,	// (0x000102be) popup_fep_vkb2_window

0x5f51,	// (0x00011a89) aid_size_cell_vkb2_ParamLimits

0x5f51,	// (0x00011a89) aid_size_cell_vkb2

0x5f9d,	// (0x00011ad5) popup_fep_vkb2_window_g1_ParamLimits

0x5f9d,	// (0x00011ad5) popup_fep_vkb2_window_g1

0x5fe5,	// (0x00011b1d) vkb2_area_bottom_pane_ParamLimits

0x5fe5,	// (0x00011b1d) vkb2_area_bottom_pane

0x6031,	// (0x00011b69) vkb2_area_keypad_pane_ParamLimits

0x6031,	// (0x00011b69) vkb2_area_keypad_pane

0x6073,	// (0x00011bab) vkb2_area_top_pane_ParamLimits

0x6073,	// (0x00011bab) vkb2_area_top_pane

0x60f2,	// (0x00011c2a) vkb2_top_entry_pane_ParamLimits

0x60f2,	// (0x00011c2a) vkb2_top_entry_pane

0x611c,	// (0x00011c54) vkb2_top_grid_left_pane_ParamLimits

0x611c,	// (0x00011c54) vkb2_top_grid_left_pane

0x613b,	// (0x00011c73) vkb2_top_grid_right_pane_ParamLimits

0x613b,	// (0x00011c73) vkb2_top_grid_right_pane

0x615a,	// (0x00011c92) vkb2_cell_keypad_pane_ParamLimits

0x615a,	// (0x00011c92) vkb2_cell_keypad_pane

0x622b,	// (0x00011d63) vkb2_area_bottom_grid_pane_ParamLimits

0x622b,	// (0x00011d63) vkb2_area_bottom_grid_pane

0x6251,	// (0x00011d89) vkb2_area_bottom_pane_g1_ParamLimits

0x6251,	// (0x00011d89) vkb2_area_bottom_pane_g1

0x6275,	// (0x00011dad) vkb2_area_bottom_pane_g2_ParamLimits

0x6275,	// (0x00011dad) vkb2_area_bottom_pane_g2

0x62a3,	// (0x00011ddb) vkb2_area_bottom_pane_g3_ParamLimits

0x62a3,	// (0x00011ddb) vkb2_area_bottom_pane_g3

0x0002,

0xfd6b,	// (0x0001b8a3) vkb2_area_bottom_pane_g_ParamLimits

0xfd6b,	// (0x0001b8a3) vkb2_area_bottom_pane_g

0x6304,	// (0x00011e3c) vkb2_top_cell_left_pane_ParamLimits

0x6304,	// (0x00011e3c) vkb2_top_cell_left_pane

0xdeef,	// (0x00019a27) vkb2_top_entry_pane_g1_ParamLimits

0xdeef,	// (0x00019a27) vkb2_top_entry_pane_g1

0xdefd,	// (0x00019a35) vkb2_top_entry_pane_t1_ParamLimits

0xdefd,	// (0x00019a35) vkb2_top_entry_pane_t1

0xdf2f,	// (0x00019a67) vkb2_top_entry_pane_t2_ParamLimits

0xdf2f,	// (0x00019a67) vkb2_top_entry_pane_t2

0xdf61,	// (0x00019a99) vkb2_top_entry_pane_t3_ParamLimits

0xdf61,	// (0x00019a99) vkb2_top_entry_pane_t3

0x0002,

0xfd72,	// (0x0001b8aa) vkb2_top_entry_pane_t_ParamLimits

0xfd72,	// (0x0001b8aa) vkb2_top_entry_pane_t

0x6351,	// (0x00011e89) vkb2_top_grid_right_pane_g1_ParamLimits

0x6351,	// (0x00011e89) vkb2_top_grid_right_pane_g1

0x6367,	// (0x00011e9f) vkb2_top_grid_right_pane_g2_ParamLimits

0x6367,	// (0x00011e9f) vkb2_top_grid_right_pane_g2

0x637f,	// (0x00011eb7) vkb2_top_grid_right_pane_g3_ParamLimits

0x637f,	// (0x00011eb7) vkb2_top_grid_right_pane_g3

0x6397,	// (0x00011ecf) vkb2_top_grid_right_pane_g4_ParamLimits

0x6397,	// (0x00011ecf) vkb2_top_grid_right_pane_g4

0x0003,

0xfd79,	// (0x0001b8b1) vkb2_top_grid_right_pane_g_ParamLimits

0xfd79,	// (0x0001b8b1) vkb2_top_grid_right_pane_g

0x63ad,	// (0x00011ee5) vkb2_top_cell_left_pane_g1

0x63c4,	// (0x00011efc) vkb2_cell_keypad_pane_g1_ParamLimits

0x63c4,	// (0x00011efc) vkb2_cell_keypad_pane_g1

0xdf85,	// (0x00019abd) vkb2_cell_keypad_pane_t1_ParamLimits

0xdf85,	// (0x00019abd) vkb2_cell_keypad_pane_t1

0x63d2,	// (0x00011f0a) vkb2_cell_bottom_grid_pane_ParamLimits

0x63d2,	// (0x00011f0a) vkb2_cell_bottom_grid_pane

0x640b,	// (0x00011f43) vkb2_cell_bottom_grid_pane_g1

0xdb30,	// (0x00019668) aid_call2_pane_cp02

0xdb38,	// (0x00019670) aid_call_pane_cp02

0xdb40,	// (0x00019678) clock_digital_number_pane_cp10

0xdb48,	// (0x00019680) clock_digital_number_pane_cp11

0xdb50,	// (0x00019688) clock_digital_number_pane_cp12

0xdb58,	// (0x00019690) clock_digital_number_pane_cp13

0xdb60,	// (0x00019698) clock_digital_separator_pane_cp10

0x824a,	// (0x00013d82) popup_clock_digital_analogue_window_cp2_g1

0x824a,	// (0x00013d82) popup_clock_digital_analogue_window_cp2_g2

0xdb68,	// (0x000196a0) popup_clock_digital_analogue_window_cp2_g3

0x824a,	// (0x00013d82) popup_clock_digital_analogue_window_cp2_g4

0xdb68,	// (0x000196a0) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd2e,	// (0x0001b866) popup_clock_digital_analogue_window_cp2_g

0xdb70,	// (0x000196a8) popup_clock_digital_analogue_window_cp2_t1

0xdb7e,	// (0x000196b6) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd39,	// (0x0001b871) popup_clock_digital_analogue_window_cp2_t

0xbcd6,	// (0x0001780e) clock_digital_number_pane_cp10_g1

0xbcd6,	// (0x0001780e) clock_digital_number_pane_cp10_g2

0x0001,

0xfb15,	// (0x0001b64d) clock_digital_number_pane_cp10_g

0xbcd6,	// (0x0001780e) clock_digital_separator_pane_cp10_g1

0xbcd6,	// (0x0001780e) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb15,	// (0x0001b64d) clock_digital_separator_pane_cp10_g

0xd98b,	// (0x000194c3) uniindi_top_pane_g3

0xd99c,	// (0x000194d4) uniindi_top_pane_g4

0x61e5,	// (0x00011d1d) vkb2_row_keypad_pane_ParamLimits

0x61e5,	// (0x00011d1d) vkb2_row_keypad_pane

0x642b,	// (0x00011f63) vkb2_cell_t_keypad_pane_ParamLimits

0x642b,	// (0x00011f63) vkb2_cell_t_keypad_pane

0x643b,	// (0x00011f73) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x643b,	// (0x00011f73) vkb2_cell_t_keypad_pane_cp08

0x644e,	// (0x00011f86) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x644e,	// (0x00011f86) vkb2_cell_t_keypad_pane_cp09

0x6462,	// (0x00011f9a) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x6462,	// (0x00011f9a) vkb2_cell_t_keypad_pane_cp01

0x6473,	// (0x00011fab) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x6473,	// (0x00011fab) vkb2_cell_t_keypad_pane_cp02

0x6484,	// (0x00011fbc) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x6484,	// (0x00011fbc) vkb2_cell_t_keypad_pane_cp03

0x6495,	// (0x00011fcd) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x6495,	// (0x00011fcd) vkb2_cell_t_keypad_pane_cp04

0x64a6,	// (0x00011fde) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x64a6,	// (0x00011fde) vkb2_cell_t_keypad_pane_cp05

0x64b7,	// (0x00011fef) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x64b7,	// (0x00011fef) vkb2_cell_t_keypad_pane_cp06

0x64c8,	// (0x00012000) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x64c8,	// (0x00012000) vkb2_cell_t_keypad_pane_cp07

0x64d9,	// (0x00012011) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x64d9,	// (0x00012011) vkb2_cell_t_keypad_pane_cp10

0x5c8c,	// (0x000117c4) vkb2_cell_t_keypad_pane_g1

0xdf9c,	// (0x00019ad4) vkb2_cell_t_keypad_pane_t1

0x467d,	// (0x000101b5) popup_grid_graphic2_window

0xdfae,	// (0x00019ae6) aid_size_cell_graphic2_ParamLimits

0xdfae,	// (0x00019ae6) aid_size_cell_graphic2

0xdfe6,	// (0x00019b1e) bg_popup_window_pane_cp21_ParamLimits

0xdfe6,	// (0x00019b1e) bg_popup_window_pane_cp21

0xdff4,	// (0x00019b2c) graphic2_pages_pane_ParamLimits

0xdff4,	// (0x00019b2c) graphic2_pages_pane

0xe03a,	// (0x00019b72) grid_graphic2_control_pane_ParamLimits

0xe03a,	// (0x00019b72) grid_graphic2_control_pane

0xe078,	// (0x00019bb0) grid_graphic2_pane_ParamLimits

0xe078,	// (0x00019bb0) grid_graphic2_pane

0xe0ec,	// (0x00019c24) cell_graphic2_pane

0x467d,	// (0x000101b5) main_comp_mode_pane

0xd194,	// (0x00018ccc) list_ai3_gene_pane_ParamLimits

0xd5cd,	// (0x00019105) bg_popup_window_pane_cp19_ParamLimits

0xd5d9,	// (0x00019111) bg_touch_area_indi_pane_ParamLimits

0xd5d9,	// (0x00019111) bg_touch_area_indi_pane

0xd5ef,	// (0x00019127) bg_touch_area_indi_pane_cp01_ParamLimits

0xd5ef,	// (0x00019127) bg_touch_area_indi_pane_cp01

0xd605,	// (0x0001913d) bg_touch_area_indi_pane_cp02_ParamLimits

0xd605,	// (0x0001913d) bg_touch_area_indi_pane_cp02

0xd61b,	// (0x00019153) bg_touch_area_indi_pane_cp03_ParamLimits

0xd61b,	// (0x00019153) bg_touch_area_indi_pane_cp03

0xd635,	// (0x0001916d) popup_slider_window_g1_ParamLimits

0xd651,	// (0x00019189) popup_slider_window_g2_ParamLimits

0xd66d,	// (0x000191a5) popup_slider_window_g3_ParamLimits

0xfcc3,	// (0x0001b7fb) popup_slider_window_g_ParamLimits

0xd6d3,	// (0x0001920b) popup_slider_window_t1_ParamLimits

0xd747,	// (0x0001927f) small_volume_slider_vertical_pane_ParamLimits

0xe0ec,	// (0x00019c24) cell_graphic2_pane_ParamLimits

0xe13b,	// (0x00019c73) bg_button_pane_cp10_ParamLimits

0xe13b,	// (0x00019c73) bg_button_pane_cp10

0xe14e,	// (0x00019c86) bg_button_pane_cp11_ParamLimits

0xe14e,	// (0x00019c86) bg_button_pane_cp11

0xe161,	// (0x00019c99) graphic2_pages_pane_g1_ParamLimits

0xe161,	// (0x00019c99) graphic2_pages_pane_g1

0xe17c,	// (0x00019cb4) graphic2_pages_pane_g2_ParamLimits

0xe17c,	// (0x00019cb4) graphic2_pages_pane_g2

0x0001,

0xfd87,	// (0x0001b8bf) graphic2_pages_pane_g_ParamLimits

0xfd87,	// (0x0001b8bf) graphic2_pages_pane_g

0xe194,	// (0x00019ccc) graphic2_pages_pane_t1_ParamLimits

0xe194,	// (0x00019ccc) graphic2_pages_pane_t1

0xe1ac,	// (0x00019ce4) cell_graphic2_control_pane_ParamLimits

0xe1ac,	// (0x00019ce4) cell_graphic2_control_pane

0xe1ca,	// (0x00019d02) cell_graphic2_pane_g1_ParamLimits

0xe1ca,	// (0x00019d02) cell_graphic2_pane_g1

0xe1d7,	// (0x00019d0f) cell_graphic2_pane_g2_ParamLimits

0xe1d7,	// (0x00019d0f) cell_graphic2_pane_g2

0xe1e4,	// (0x00019d1c) cell_graphic2_pane_g3_ParamLimits

0xe1e4,	// (0x00019d1c) cell_graphic2_pane_g3

0xe1f1,	// (0x00019d29) cell_graphic2_pane_g4_ParamLimits

0xe1f1,	// (0x00019d29) cell_graphic2_pane_g4

0xe1fe,	// (0x00019d36) cell_graphic2_pane_g5_ParamLimits

0xe1fe,	// (0x00019d36) cell_graphic2_pane_g5

0x0004,

0xfd8c,	// (0x0001b8c4) cell_graphic2_pane_g_ParamLimits

0xfd8c,	// (0x0001b8c4) cell_graphic2_pane_g

0xe217,	// (0x00019d4f) cell_graphic2_pane_t1_ParamLimits

0xe217,	// (0x00019d4f) cell_graphic2_pane_t1

0x9290,	// (0x00014dc8) grid_highlight_pane_cp11_ParamLimits

0x9290,	// (0x00014dc8) grid_highlight_pane_cp11

0x6ed7,	// (0x00012a0f) bg_button_pane_cp05

0xe24d,	// (0x00019d85) cell_graphic2_control_pane_g1

0xbcd6,	// (0x0001780e) bg_touch_area_indi_pane_g1

0xe275,	// (0x00019dad) aid_cmod_rocker_key_size

0xe27f,	// (0x00019db7) aid_cmode_itu_key_size

0xe289,	// (0x00019dc1) main_cmode_video_pane

0xe293,	// (0x00019dcb) main_comp_mode_itu_pane

0xe29f,	// (0x00019dd7) main_comp_mode_rocker_pane

0xe2ab,	// (0x00019de3) cell_cmode_rocker_pane_ParamLimits

0xe2ab,	// (0x00019de3) cell_cmode_rocker_pane

0xe2bd,	// (0x00019df5) cell_cmode_itu_pane_ParamLimits

0xe2bd,	// (0x00019df5) cell_cmode_itu_pane

0x7a32,	// (0x0001356a) bg_button_pane_cp06_ParamLimits

0x7a32,	// (0x0001356a) bg_button_pane_cp06

0xbf54,	// (0x00017a8c) cell_cmode_rocker_pane_g1_ParamLimits

0xbf54,	// (0x00017a8c) cell_cmode_rocker_pane_g1

0xd7eb,	// (0x00019323) cell_cmode_rocker_pane_g2_ParamLimits

0xd7eb,	// (0x00019323) cell_cmode_rocker_pane_g2

0x0001,

0xfd9c,	// (0x0001b8d4) cell_cmode_rocker_pane_g_ParamLimits

0xfd9c,	// (0x0001b8d4) cell_cmode_rocker_pane_g

0x3adc,	// (0x0000f614) bg_button_pane_cp07

0xe2d2,	// (0x00019e0a) cell_cmode_itu_pane_g1

0xe2db,	// (0x00019e13) cell_cmode_itu_pane_t1

0xe2e9,	// (0x00019e21) cell_cmode_itu_pane_t2

0x0001,

0xfda1,	// (0x0001b8d9) cell_cmode_itu_pane_t

0xda0e,	// (0x00019546) aid_touch_ctrl_left

0xda16,	// (0x0001954e) aid_touch_ctrl_right

0x3adc,	// (0x0000f614) compa_mode_pane

0xe2f7,	// (0x00019e2f) aid_cmod_rocker_key_size_cp

0xe301,	// (0x00019e39) aid_cmode_itu_key_size_cp

0xe30b,	// (0x00019e43) compa_mode_pane_g1

0xe313,	// (0x00019e4b) compa_mode_pane_g2

0xe31b,	// (0x00019e53) compa_mode_pane_g3

0x0002,

0xfda6,	// (0x0001b8de) compa_mode_pane_g

0xe323,	// (0x00019e5b) main_comp_mode_itu_pane_cp

0xe32b,	// (0x00019e63) main_comp_mode_rocker_pane_cp

0xe333,	// (0x00019e6b) cell_cmode_itu_pane_cp_ParamLimits

0xe333,	// (0x00019e6b) cell_cmode_itu_pane_cp

0xe348,	// (0x00019e80) cell_cmode_rocker_pane_cp_ParamLimits

0xe348,	// (0x00019e80) cell_cmode_rocker_pane_cp

0x7a32,	// (0x0001356a) bg_button_pane_cp06_cp_ParamLimits

0x7a32,	// (0x0001356a) bg_button_pane_cp06_cp

0xbf54,	// (0x00017a8c) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xbf54,	// (0x00017a8c) cell_cmode_rocker_pane_g1_cp

0xbcd6,	// (0x0001780e) cell_cmode_rocker_pane_g2_cp

0x3adc,	// (0x0000f614) bg_button_pane_cp07_cp

0xa7b9,	// (0x000162f1) cell_cmode_itu_pane_g1_cp

0xe35a,	// (0x00019e92) cell_cmode_itu_pane_t1_cp

0xe35a,	// (0x00019e92) cell_cmode_itu_pane_t2_cp

0xa7a6,	// (0x000162de) settings_code_pane_cp2

0x6c34,	// (0x0001276c) bg_popup_window_pane_cp3_ParamLimits

0x70d7,	// (0x00012c0f) heading_pane_cp3_ParamLimits

0x70e6,	// (0x00012c1e) listscroll_popup_graphic_pane_ParamLimits

0x5a35,	// (0x0001156d) fep_hwr_aid_pane_ParamLimits

0x5eac,	// (0x000119e4) aid_touch_sctrl_top_ParamLimits

0x5ec7,	// (0x000119ff) sctrl_sk_top_pane_g1_ParamLimits

0x5c8c,	// (0x000117c4) sctrl_sk_top_pane_g2_ParamLimits

0xfcdc,	// (0x0001b814) sctrl_sk_top_pane_g_ParamLimits

0x5ed4,	// (0x00011a0c) sctrl_sk_top_pane_t1_ParamLimits

0x5eac,	// (0x000119e4) aid_touch_sctrl_bottom_ParamLimits

0x5ed4,	// (0x00011a0c) sctrl_sk_bottom_pane_t1_ParamLimits

0xd957,	// (0x0001948f) aid_area_touch_clock

0x60b9,	// (0x00011bf1) aid_vkb2_area_top_pane_cell_ParamLimits

0x60b9,	// (0x00011bf1) aid_vkb2_area_top_pane_cell

0x6207,	// (0x00011d3f) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x6207,	// (0x00011d3f) aid_vkb2_area_bottom_pane_cell

0xdee7,	// (0x00019a1f) popup_char_count_window

0xe368,	// (0x00019ea0) popup_char_count_window_g1

0xe371,	// (0x00019ea9) popup_char_count_window_g2

0xe37a,	// (0x00019eb2) popup_char_count_window_g3

0x0002,

0xfdad,	// (0x0001b8e5) popup_char_count_window_g

0xe383,	// (0x00019ebb) popup_char_count_window_t1

0x5f7b,	// (0x00011ab3) popup_fep_char_preview_window_ParamLimits

0x5f7b,	// (0x00011ab3) popup_fep_char_preview_window

0x60d7,	// (0x00011c0f) vkb2_top_candi_pane_ParamLimits

0x60d7,	// (0x00011c0f) vkb2_top_candi_pane

0xe391,	// (0x00019ec9) cell_vkb2_top_candi_pane_ParamLimits

0xe391,	// (0x00019ec9) cell_vkb2_top_candi_pane

0x64ee,	// (0x00012026) bg_popup_fep_char_preview_window_ParamLimits

0x64ee,	// (0x00012026) bg_popup_fep_char_preview_window

0x64fc,	// (0x00012034) popup_fep_char_preview_window_t1_ParamLimits

0x64fc,	// (0x00012034) popup_fep_char_preview_window_t1

0xe3db,	// (0x00019f13) bg_popup_fep_char_preview_window_g1

0xe3e3,	// (0x00019f1b) bg_popup_fep_char_preview_window_g2

0xe3eb,	// (0x00019f23) bg_popup_fep_char_preview_window_g3

0xe3f3,	// (0x00019f2b) bg_popup_fep_char_preview_window_g4

0xe3fb,	// (0x00019f33) bg_popup_fep_char_preview_window_g5

0xe403,	// (0x00019f3b) bg_popup_fep_char_preview_window_g6

0xe40b,	// (0x00019f43) bg_popup_fep_char_preview_window_g7

0xe413,	// (0x00019f4b) bg_popup_fep_char_preview_window_g8

0xe41b,	// (0x00019f53) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdb4,	// (0x0001b8ec) bg_popup_fep_char_preview_window_g

0x5c8c,	// (0x000117c4) cell_vkb2_top_candi_pane_g1_ParamLimits

0x5c8c,	// (0x000117c4) cell_vkb2_top_candi_pane_g1

0x5c9a,	// (0x000117d2) cell_vkb2_top_candi_pane_g2_ParamLimits

0x5c9a,	// (0x000117d2) cell_vkb2_top_candi_pane_g2

0xdb07,	// (0x0001963f) cell_vkb2_top_candi_pane_g3_ParamLimits

0xdb07,	// (0x0001963f) cell_vkb2_top_candi_pane_g3

0x653e,	// (0x00012076) cell_vkb2_top_candi_pane_g4_ParamLimits

0x653e,	// (0x00012076) cell_vkb2_top_candi_pane_g4

0xc332,	// (0x00017e6a) cell_vkb2_top_candi_pane_g5_ParamLimits

0xc332,	// (0x00017e6a) cell_vkb2_top_candi_pane_g5

0x655f,	// (0x00012097) cell_vkb2_top_candi_pane_g6_ParamLimits

0x655f,	// (0x00012097) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdc9,	// (0x0001b901) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdc9,	// (0x0001b901) cell_vkb2_top_candi_pane_g

0x656d,	// (0x000120a5) cell_vkb2_top_candi_pane_t1

0x5895,	// (0x000113cd) aid_size_touch_slider_mark_ParamLimits

0x5895,	// (0x000113cd) aid_size_touch_slider_mark

0xe02a,	// (0x00019b62) grid_graphic2_catg_pane_ParamLimits

0xe02a,	// (0x00019b62) grid_graphic2_catg_pane

0xe0c8,	// (0x00019c00) popup_grid_graphic2_window_t1_ParamLimits

0xe0c8,	// (0x00019c00) popup_grid_graphic2_window_t1

0xe0da,	// (0x00019c12) popup_grid_graphic2_window_t2_ParamLimits

0xe0da,	// (0x00019c12) popup_grid_graphic2_window_t2

0x0001,

0xfd82,	// (0x0001b8ba) popup_grid_graphic2_window_t_ParamLimits

0xfd82,	// (0x0001b8ba) popup_grid_graphic2_window_t

0x6ed7,	// (0x00012a0f) bg_button_pane_cp05_ParamLimits

0xe24d,	// (0x00019d85) cell_graphic2_control_pane_g1_ParamLimits

0xe423,	// (0x00019f5b) cell_graphic2_catg_pane_ParamLimits

0xe423,	// (0x00019f5b) cell_graphic2_catg_pane

0x3adc,	// (0x0000f614) bg_button_pane_cp12

0xe435,	// (0x00019f6d) cell_graphic2_catg_pane_g1

0xd923,	// (0x0001945b) cell_tb_ext_pane_t1_ParamLimits

0x6324,	// (0x00011e5c) vkb2_top_cell_right_narrow_pane_ParamLimits

0x6324,	// (0x00011e5c) vkb2_top_cell_right_narrow_pane

0x633c,	// (0x00011e74) vkb2_top_cell_right_wide_pane_ParamLimits

0x633c,	// (0x00011e74) vkb2_top_cell_right_wide_pane

0x5a27,	// (0x0001155f) bg_vkb2_func_pane_ParamLimits

0x5a27,	// (0x0001155f) bg_vkb2_func_pane

0x63ad,	// (0x00011ee5) vkb2_top_cell_left_pane_g1_ParamLimits

0x5a27,	// (0x0001155f) bg_vkb2_fuc_pane_cp03_ParamLimits

0x5a27,	// (0x0001155f) bg_vkb2_fuc_pane_cp03

0x640b,	// (0x00011f43) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x9176,	// (0x00014cae) bg_vkb2_func_pane_g1

0x917e,	// (0x00014cb6) bg_vkb2_func_pane_g2

0x918e,	// (0x00014cc6) bg_vkb2_func_pane_g3

0x9186,	// (0x00014cbe) bg_vkb2_func_pane_g4

0x9196,	// (0x00014cce) bg_vkb2_func_pane_g5

0x919e,	// (0x00014cd6) bg_vkb2_func_pane_g6

0x91a6,	// (0x00014cde) bg_vkb2_func_pane_g7

0x91ae,	// (0x00014ce6) bg_vkb2_func_pane_g8

0x916e,	// (0x00014ca6) bg_vkb2_func_pane_g9

0x0008,

0xfdd6,	// (0x0001b90e) bg_vkb2_func_pane_g

0x5a27,	// (0x0001155f) bg_vkb2_fuc_pane_cp01_ParamLimits

0x5a27,	// (0x0001155f) bg_vkb2_fuc_pane_cp01

0x63ad,	// (0x00011ee5) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x63ad,	// (0x00011ee5) vkb2_top_cell_right_wide_pane_g1

0x5a27,	// (0x0001155f) bg_vkb2_fuc_pane_cp02_ParamLimits

0x5a27,	// (0x0001155f) bg_vkb2_fuc_pane_cp02

0x658c,	// (0x000120c4) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x658c,	// (0x000120c4) vkb2_top_cell_right_narrow_pane_g1

0xd547,	// (0x0001907f) aid_touch_area_decrease_ParamLimits

0xd547,	// (0x0001907f) aid_touch_area_decrease

0xd56b,	// (0x000190a3) aid_touch_area_increase_ParamLimits

0xd56b,	// (0x000190a3) aid_touch_area_increase

0xd583,	// (0x000190bb) aid_touch_area_mute_ParamLimits

0xd583,	// (0x000190bb) aid_touch_area_mute

0xd59f,	// (0x000190d7) aid_touch_area_slider_ParamLimits

0xd59f,	// (0x000190d7) aid_touch_area_slider

0xd689,	// (0x000191c1) popup_slider_window_g4_ParamLimits

0xd689,	// (0x000191c1) popup_slider_window_g4

0xd6a1,	// (0x000191d9) popup_slider_window_g5_ParamLimits

0xd6a1,	// (0x000191d9) popup_slider_window_g5

0xd6c3,	// (0x000191fb) popup_slider_window_g6_ParamLimits

0xd6c3,	// (0x000191fb) popup_slider_window_g6

0xd701,	// (0x00019239) popup_slider_window_t2_ParamLimits

0xd701,	// (0x00019239) popup_slider_window_t2

0x0001,

0xfcd0,	// (0x0001b808) popup_slider_window_t_ParamLimits

0xfcd0,	// (0x0001b808) popup_slider_window_t

0xd719,	// (0x00019251) slider_pane_ParamLimits

0xd719,	// (0x00019251) slider_pane

0xe43e,	// (0x00019f76) slider_pane_g1_ParamLimits

0xe43e,	// (0x00019f76) slider_pane_g1

0xe452,	// (0x00019f8a) slider_pane_g2_ParamLimits

0xe452,	// (0x00019f8a) slider_pane_g2

0xe468,	// (0x00019fa0) slider_pane_g3_ParamLimits

0xe468,	// (0x00019fa0) slider_pane_g3

0x0003,

0xfde9,	// (0x0001b921) slider_pane_g_ParamLimits

0xfde9,	// (0x0001b921) slider_pane_g

0x5450,	// (0x00010f88) popup_tb_float_extension_window_ParamLimits

0x5450,	// (0x00010f88) popup_tb_float_extension_window

0xe494,	// (0x00019fcc) aid_size_cell_tb_float_ext

0x3adc,	// (0x0000f614) bg_popup_sub_window_cp28

0xe4a0,	// (0x00019fd8) grid_tb_float_ext_pane

0xe4aa,	// (0x00019fe2) cell_tb_float_ext_pane_ParamLimits

0xe4aa,	// (0x00019fe2) cell_tb_float_ext_pane

0xe4c4,	// (0x00019ffc) cell_tb_float_ext_pane_g1

0xe4cd,	// (0x0001a005) grid_highlight_pane_cp12

0x5b76,	// (0x000116ae) cell_last_hwr_side_pane_ParamLimits

0x5b76,	// (0x000116ae) cell_last_hwr_side_pane

0xbcd6,	// (0x0001780e) cell_last_hwr_side_pane_g1

0xe4d6,	// (0x0001a00e) cell_last_hwr_side_pane_g2

0x0001,

0xfdf2,	// (0x0001b92a) cell_last_hwr_side_pane_g

0x62d3,	// (0x00011e0b) vkb2_area_bottom_space_btn_pane_ParamLimits

0x62d3,	// (0x00011e0b) vkb2_area_bottom_space_btn_pane

0x5c8c,	// (0x000117c4) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xdf9c,	// (0x00019ad4) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x656d,	// (0x000120a5) cell_vkb2_top_candi_pane_t1_ParamLimits

0x65ac,	// (0x000120e4) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x65ac,	// (0x000120e4) vkb2_area_bottom_space_btn_pane_g1

0x65e6,	// (0x0001211e) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x65e6,	// (0x0001211e) vkb2_area_bottom_space_btn_pane_g2

0x661c,	// (0x00012154) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x661c,	// (0x00012154) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfdf7,	// (0x0001b92f) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfdf7,	// (0x0001b92f) vkb2_area_bottom_space_btn_pane_g

0x5aea,	// (0x00011622) cel_fep_hwr_func_pane_ParamLimits

0x5aea,	// (0x00011622) cel_fep_hwr_func_pane

0x5b26,	// (0x0001165e) cell_hwr_side_button_pane_ParamLimits

0x5b26,	// (0x0001165e) cell_hwr_side_button_pane

0xd957,	// (0x0001948f) aid_area_touch_clock_ParamLimits

0x6ed7,	// (0x00012a0f) bg_uniindi_top_pane_ParamLimits

0xd969,	// (0x000194a1) uniindi_top_pane_g1_ParamLimits

0xd97f,	// (0x000194b7) uniindi_top_pane_g2_ParamLimits

0xd98b,	// (0x000194c3) uniindi_top_pane_g3_ParamLimits

0xd99c,	// (0x000194d4) uniindi_top_pane_g4_ParamLimits

0xfd08,	// (0x0001b840) uniindi_top_pane_g_ParamLimits

0xd9a9,	// (0x000194e1) uniindi_top_pane_t1_ParamLimits

0x6ed7,	// (0x00012a0f) bg_vkb2_func_pane_cp01_ParamLimits

0x6ed7,	// (0x00012a0f) bg_vkb2_func_pane_cp01

0xe4df,	// (0x0001a017) cel_fep_hwr_func_pane_g1_ParamLimits

0xe4df,	// (0x0001a017) cel_fep_hwr_func_pane_g1

0x6ed7,	// (0x00012a0f) bg_vkb2_func_pane_cp02_ParamLimits

0x6ed7,	// (0x00012a0f) bg_vkb2_func_pane_cp02

0xe4df,	// (0x0001a017) cell_hwr_side_button_pane_g1_ParamLimits

0xe4df,	// (0x0001a017) cell_hwr_side_button_pane_g1

0x8fd9,	// (0x00014b11) status_pane_g4_ParamLimits

0x8fd9,	// (0x00014b11) status_pane_g4

0x8ff3,	// (0x00014b2b) status_pane_t1

0xba1b,	// (0x00017553) form2_midp_gauge_slider_cont_pane

0xba23,	// (0x0001755b) form2_midp_gauge_slider_pane_t1_ParamLimits

0xba35,	// (0x0001756d) form2_midp_gauge_slider_pane_t2_ParamLimits

0xba47,	// (0x0001757f) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfac8,	// (0x0001b600) form2_midp_gauge_slider_pane_t_ParamLimits

0xba59,	// (0x00017591) form2_midp_slider_pane_ParamLimits

0x5f43,	// (0x00011a7b) aid_size_cell_func_vkb2_ParamLimits

0x5f43,	// (0x00011a7b) aid_size_cell_func_vkb2

0xe480,	// (0x00019fb8) slider_pane_g4_ParamLimits

0xe480,	// (0x00019fb8) slider_pane_g4

0x6666,	// (0x0001219e) form2_midp_gauge_slider_pane_t2_cp01

0x6674,	// (0x000121ac) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x6674,	// (0x000121ac) form2_midp_gauge_slider_pane_t3_cp01

0x6691,	// (0x000121c9) form2_midp_slider_pane_cp01

0x3adc,	// (0x0000f614) navi_smil_pane

0xe518,	// (0x0001a050) navi_smil_pane_g1

0xe520,	// (0x0001a058) navi_smil_pane_t1

0xe4ed,	// (0x0001a025) form2_midp_slider_pane_g1

0xe4f6,	// (0x0001a02e) form2_midp_slider_pane_g2

0xe4fe,	// (0x0001a036) form2_midp_slider_pane_g3

0xe4ed,	// (0x0001a025) form2_midp_slider_pane_g4

0xe506,	// (0x0001a03e) form2_midp_slider_pane_g5

0x0004,

0xfe00,	// (0x0001b938) form2_midp_slider_pane_g

0x6656,	// (0x0001218e) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x6656,	// (0x0001218e) vkb2_area_bottom_space_btn_pane_g4

0x8e08,	// (0x00014940) lc0_navi_pane_ParamLimits

0x8e08,	// (0x00014940) lc0_navi_pane

0x8e7e,	// (0x000149b6) lc0_stat_indi_pane_ParamLimits

0x8e7e,	// (0x000149b6) lc0_stat_indi_pane

0x8e95,	// (0x000149cd) ls0_title_pane_ParamLimits

0x8e95,	// (0x000149cd) ls0_title_pane

0x7a32,	// (0x0001356a) bg_popup_sub_pane_cp14_ParamLimits

0xd93e,	// (0x00019476) list_uniindi_pane_ParamLimits

0xd94a,	// (0x00019482) uniindi_top_pane_ParamLimits

0xd9e6,	// (0x0001951e) list_single_uniindi_pane_g1_ParamLimits

0xd9f9,	// (0x00019531) list_single_uniindi_pane_t1_ParamLimits

0x669a,	// (0x000121d2) lc0_stat_clock_pane_ParamLimits

0x669a,	// (0x000121d2) lc0_stat_clock_pane

0xe52e,	// (0x0001a066) lc0_stat_indi_pane_g1_ParamLimits

0xe52e,	// (0x0001a066) lc0_stat_indi_pane_g1

0xe53b,	// (0x0001a073) lc0_stat_indi_pane_g2_ParamLimits

0xe53b,	// (0x0001a073) lc0_stat_indi_pane_g2

0x0001,

0xfe0b,	// (0x0001b943) lc0_stat_indi_pane_g_ParamLimits

0xfe0b,	// (0x0001b943) lc0_stat_indi_pane_g

0x66a7,	// (0x000121df) lc0_uni_indicator_pane_ParamLimits

0x66a7,	// (0x000121df) lc0_uni_indicator_pane

0xe548,	// (0x0001a080) ls0_title_pane_g1_ParamLimits

0xe548,	// (0x0001a080) ls0_title_pane_g1

0xe55c,	// (0x0001a094) ls0_title_pane_t1_ParamLimits

0xe55c,	// (0x0001a094) ls0_title_pane_t1

0x66b4,	// (0x000121ec) lc0_uni_indicator_pane_g1_ParamLimits

0x66b4,	// (0x000121ec) lc0_uni_indicator_pane_g1

0xe592,	// (0x0001a0ca) lc0_stat_clock_pane_t1

0x467d,	// (0x000101b5) main_ai5_pane

0xe5a0,	// (0x0001a0d8) ai5_sk_pane_ParamLimits

0xe5a0,	// (0x0001a0d8) ai5_sk_pane

0xe5ad,	// (0x0001a0e5) cell_ai5_widget_pane_ParamLimits

0xe5ad,	// (0x0001a0e5) cell_ai5_widget_pane

0xe676,	// (0x0001a1ae) aid_size_cell_widget_grid

0xe684,	// (0x0001a1bc) bg_ai5_widget_pane_ParamLimits

0xe684,	// (0x0001a1bc) bg_ai5_widget_pane

0xe700,	// (0x0001a238) cell_ai5_widget_pane_g2

0xe714,	// (0x0001a24c) cell_ai5_widget_pane_g3

0xe72e,	// (0x0001a266) cell_ai5_widget_pane_g4

0xe73e,	// (0x0001a276) cell_ai5_widget_pane_g5

0xe74e,	// (0x0001a286) cell_ai5_widget_pane_g6

0xe75a,	// (0x0001a292) cell_ai5_widget_pane_g7

0xe7c6,	// (0x0001a2fe) cell_ai5_widget_pane_t1_ParamLimits

0xe7c6,	// (0x0001a2fe) cell_ai5_widget_pane_t1

0xe7e3,	// (0x0001a31b) cell_ai5_widget_pane_t2_ParamLimits

0xe7e3,	// (0x0001a31b) cell_ai5_widget_pane_t2

0xe7fb,	// (0x0001a333) cell_ai5_widget_pane_t3_ParamLimits

0xe7fb,	// (0x0001a333) cell_ai5_widget_pane_t3

0xe813,	// (0x0001a34b) cell_ai5_widget_pane_t4_ParamLimits

0xe813,	// (0x0001a34b) cell_ai5_widget_pane_t4

0xe839,	// (0x0001a371) cell_ai5_widget_pane_t5_ParamLimits

0xe839,	// (0x0001a371) cell_ai5_widget_pane_t5

0xe858,	// (0x0001a390) cell_ai5_widget_pane_t6_ParamLimits

0xe858,	// (0x0001a390) cell_ai5_widget_pane_t6

0xe86a,	// (0x0001a3a2) cell_ai5_widget_pane_t7_ParamLimits

0xe86a,	// (0x0001a3a2) cell_ai5_widget_pane_t7

0xe889,	// (0x0001a3c1) cell_ai5_widget_pane_t8_ParamLimits

0xe889,	// (0x0001a3c1) cell_ai5_widget_pane_t8

0x000b,

0xfe2b,	// (0x0001b963) cell_ai5_widget_pane_t_ParamLimits

0xfe2b,	// (0x0001b963) cell_ai5_widget_pane_t

0xe90d,	// (0x0001a445) grid_ai5_widget_pane

0x7a32,	// (0x0001356a) highlight_cell_ai5_widget_pane_ParamLimits

0x7a32,	// (0x0001356a) highlight_cell_ai5_widget_pane

0xe91b,	// (0x0001a453) ai5_sk_left_pane

0xe925,	// (0x0001a45d) ai5_sk_middle_pane

0xe92f,	// (0x0001a467) ai5_sk_right_pane

0xe939,	// (0x0001a471) bg_ai5_widget_pane_g1_ParamLimits

0xe939,	// (0x0001a471) bg_ai5_widget_pane_g1

0xe945,	// (0x0001a47d) bg_ai5_widget_pane_g2_ParamLimits

0xe945,	// (0x0001a47d) bg_ai5_widget_pane_g2

0xe951,	// (0x0001a489) bg_ai5_widget_pane_g3_ParamLimits

0xe951,	// (0x0001a489) bg_ai5_widget_pane_g3

0xe95d,	// (0x0001a495) bg_ai5_widget_pane_g4_ParamLimits

0xe95d,	// (0x0001a495) bg_ai5_widget_pane_g4

0xe969,	// (0x0001a4a1) bg_ai5_widget_pane_g5_ParamLimits

0xe969,	// (0x0001a4a1) bg_ai5_widget_pane_g5

0xe975,	// (0x0001a4ad) bg_ai5_widget_pane_g6_ParamLimits

0xe975,	// (0x0001a4ad) bg_ai5_widget_pane_g6

0xe981,	// (0x0001a4b9) bg_ai5_widget_pane_g7_ParamLimits

0xe981,	// (0x0001a4b9) bg_ai5_widget_pane_g7

0xe98d,	// (0x0001a4c5) bg_ai5_widget_pane_g8_ParamLimits

0xe98d,	// (0x0001a4c5) bg_ai5_widget_pane_g8

0xe999,	// (0x0001a4d1) bg_ai5_widget_pane_g9_ParamLimits

0xe999,	// (0x0001a4d1) bg_ai5_widget_pane_g9

0x0008,

0xfe44,	// (0x0001b97c) bg_ai5_widget_pane_g_ParamLimits

0xfe44,	// (0x0001b97c) bg_ai5_widget_pane_g

0xe9cb,	// (0x0001a503) cell_shortcut_ai5_widget_pane_ParamLimits

0xe9cb,	// (0x0001a503) cell_shortcut_ai5_widget_pane

0x88fa,	// (0x00014432) bg_cell_shortcut_ai5_widget_pane

0xe9dc,	// (0x0001a514) cell_grid_ai5_widget_pane_g1

0x88fa,	// (0x00014432) highlight_cell_shortcut_ai5_widget_pane

0x9176,	// (0x00014cae) ai5_sk_left_pane_g1

0xe9e5,	// (0x0001a51d) ai5_sk_left_pane_g2

0xe9ed,	// (0x0001a525) ai5_sk_left_pane_g3

0xe9f5,	// (0x0001a52d) ai5_sk_left_pane_g4

0x0003,

0xfe57,	// (0x0001b98f) ai5_sk_left_pane_g

0xe9fd,	// (0x0001a535) ai5_sk_left_pane_t1

0x917e,	// (0x00014cb6) ai5_sk_right_pane_g1

0xea0b,	// (0x0001a543) ai5_sk_right_pane_g2

0xea13,	// (0x0001a54b) ai5_sk_right_pane_g3

0xea1b,	// (0x0001a553) ai5_sk_right_pane_g4

0x0003,

0xfe60,	// (0x0001b998) ai5_sk_right_pane_g

0xea23,	// (0x0001a55b) ai5_sk_right_pane_t1

0x917e,	// (0x00014cb6) ai5_sk_middle_pane_g1

0x9176,	// (0x00014cae) ai5_sk_middle_pane_g2

0x9196,	// (0x00014cce) ai5_sk_middle_pane_g3

0xea13,	// (0x0001a54b) ai5_sk_middle_pane_g4

0xe9ed,	// (0x0001a525) ai5_sk_middle_pane_g5

0xea31,	// (0x0001a569) ai5_sk_middle_pane_g6

0xea39,	// (0x0001a571) ai5_sk_middle_pane_g7

0x0006,

0xfe69,	// (0x0001b9a1) ai5_sk_middle_pane_g

0x8c8e,	// (0x000147c6) aid_touch_area_size_lc0_ParamLimits

0x8c8e,	// (0x000147c6) aid_touch_area_size_lc0

0x5cbb,	// (0x000117f3) cell_hwr_candidate_pane_t1_ParamLimits

0x8caa,	// (0x000147e2) aid_touch_navi_pane

0x8f83,	// (0x00014abb) status_dt_navi_pane_ParamLimits

0x8f83,	// (0x00014abb) status_dt_navi_pane

0x8f90,	// (0x00014ac8) status_dt_sta_pane_ParamLimits

0x8f90,	// (0x00014ac8) status_dt_sta_pane

0xea41,	// (0x0001a579) dt_sta_controll_pane

0xea4e,	// (0x0001a586) dt_sta_indi_pane

0xea5f,	// (0x0001a597) dt_sta_title_pane

0x6ed7,	// (0x00012a0f) bg_dt_sta_indi_pane_ParamLimits

0x6ed7,	// (0x00012a0f) bg_dt_sta_indi_pane

0xea72,	// (0x0001a5aa) dt_sta_battery_pane

0xea7a,	// (0x0001a5b2) dt_sta_indi_pane_g1

0xea83,	// (0x0001a5bb) dt_sta_indi_pane_g2

0xea8c,	// (0x0001a5c4) dt_sta_indi_pane_g3

0x0002,

0xfe78,	// (0x0001b9b0) dt_sta_indi_pane_g

0xea95,	// (0x0001a5cd) dt_sta_signal_pane

0x7a32,	// (0x0001356a) bg_dt_sta_title_pane_ParamLimits

0x7a32,	// (0x0001356a) bg_dt_sta_title_pane

0xea9e,	// (0x0001a5d6) dt_sta_title_pane_g1

0xeaa6,	// (0x0001a5de) dt_sta_title_pane_t1_ParamLimits

0xeaa6,	// (0x0001a5de) dt_sta_title_pane_t1

0x3adc,	// (0x0000f614) bg_dt_sta_control_pane

0xeabb,	// (0x0001a5f3) dt_sta_controll_pane_g1

0xeac4,	// (0x0001a5fc) bg_dt_sta_title_pane_g1

0xeacd,	// (0x0001a605) bg_dt_sta_title_pane_g2

0xead6,	// (0x0001a60e) bg_dt_sta_title_pane_g3

0x0002,

0xfe7f,	// (0x0001b9b7) bg_dt_sta_title_pane_g

0xbcd6,	// (0x0001780e) bg_dt_sta_indi_pane_g1

0xeadf,	// (0x0001a617) dt_sta_signal_pane_g1

0xeae7,	// (0x0001a61f) dt_sta_signal_pane_g2

0x0001,

0xfe86,	// (0x0001b9be) dt_sta_signal_pane_g

0xeaef,	// (0x0001a627) dt_sta_battery_pane_g1

0xeaf8,	// (0x0001a630) dt_sta_battery_pane_t1

0xbcd6,	// (0x0001780e) bg_dt_sta_control_pane_g1

0x8375,	// (0x00013ead) fep_china_uni_eep_pane

0x837d,	// (0x00013eb5) fep_china_uni_entry_pane_ParamLimits

0x838d,	// (0x00013ec5) popup_fep_china_uni_window_g1_ParamLimits

0x839d,	// (0x00013ed5) popup_fep_china_uni_window_g2_ParamLimits

0x839d,	// (0x00013ed5) popup_fep_china_uni_window_g2

0x0001,

0xf6f3,	// (0x0001b22b) popup_fep_china_uni_window_g_ParamLimits

0xf6f3,	// (0x0001b22b) popup_fep_china_uni_window_g

0xeb07,	// (0x0001a63f) fep_china_uni_eep_pane_g1

0xeb0f,	// (0x0001a647) fep_china_uni_eep_pane_t1

0xe50f,	// (0x0001a047) aid_touch_area_size_smil_player

0x8e00,	// (0x00014938) lc0_clock_pane

0x8fe7,	// (0x00014b1f) status_pane_g5_ParamLimits

0x8fe7,	// (0x00014b1f) status_pane_g5

0x5115,	// (0x00010c4d) popup_keymap_window

0x8fa5,	// (0x00014add) status_icon_pane

0xe714,	// (0x0001a24c) cell_ai5_widget_pane_g3_ParamLimits

0xe72e,	// (0x0001a266) cell_ai5_widget_pane_g4_ParamLimits

0xe73e,	// (0x0001a276) cell_ai5_widget_pane_g5_ParamLimits

0xe766,	// (0x0001a29e) cell_ai5_widget_pane_g8_ParamLimits

0xe766,	// (0x0001a29e) cell_ai5_widget_pane_g8

0xe77a,	// (0x0001a2b2) cell_ai5_widget_pane_g9_ParamLimits

0xe77a,	// (0x0001a2b2) cell_ai5_widget_pane_g9

0xe78e,	// (0x0001a2c6) cell_ai5_widget_pane_g10_ParamLimits

0xe78e,	// (0x0001a2c6) cell_ai5_widget_pane_g10

0xeb1e,	// (0x0001a656) status_icon_pane_g1

0x3adc,	// (0x0000f614) bg_popup_sub_pane_cp13

0xeb26,	// (0x0001a65e) popup_keymap_window_t1

0x8bcf,	// (0x00014707) control_pane_g6_ParamLimits

0x8bcf,	// (0x00014707) control_pane_g6

0x8bdc,	// (0x00014714) control_pane_g7_ParamLimits

0x8bdc,	// (0x00014714) control_pane_g7

0x8be9,	// (0x00014721) control_pane_g8_ParamLimits

0x8be9,	// (0x00014721) control_pane_g8

0xea41,	// (0x0001a579) dt_sta_controll_pane_ParamLimits

0xea4e,	// (0x0001a586) dt_sta_indi_pane_ParamLimits

0xea5f,	// (0x0001a597) dt_sta_title_pane_ParamLimits

0x7413,	// (0x00012f4b) aid_size_touch_scroll_bar_cale

0x4756,	// (0x0001028e) popup_discreet_window_ParamLimits

0x4756,	// (0x0001028e) popup_discreet_window

0x47de,	// (0x00010316) popup_sk_window

0x98e8,	// (0x00015420) bg_popup_sub_pane_cp28_ParamLimits

0x98e8,	// (0x00015420) bg_popup_sub_pane_cp28

0xeb34,	// (0x0001a66c) popup_discreet_window_g1_ParamLimits

0xeb34,	// (0x0001a66c) popup_discreet_window_g1

0xeb54,	// (0x0001a68c) popup_discreet_window_t1_ParamLimits

0xeb54,	// (0x0001a68c) popup_discreet_window_t1

0xeb72,	// (0x0001a6aa) popup_discreet_window_t2_ParamLimits

0xeb72,	// (0x0001a6aa) popup_discreet_window_t2

0x0002,

0xfe8b,	// (0x0001b9c3) popup_discreet_window_t_ParamLimits

0xfe8b,	// (0x0001b9c3) popup_discreet_window_t

0x66c8,	// (0x00012200) popup_sk_window_g1

0x66d2,	// (0x0001220a) popup_sk_window_g2

0x0001,

0xfe92,	// (0x0001b9ca) popup_sk_window_g

0x66da,	// (0x00012212) popup_sk_window_t1

0x66e8,	// (0x00012220) popup_sk_window_t1_copy1

0xe700,	// (0x0001a238) cell_ai5_widget_pane_g2_ParamLimits

0xe89b,	// (0x0001a3d3) cell_ai5_widget_pane_t9_ParamLimits

0xe89b,	// (0x0001a3d3) cell_ai5_widget_pane_t9

0x3adc,	// (0x0000f614) main_fep_fshwr2_pane

0x66f6,	// (0x0001222e) aid_fshwr2_btn_pane

0x6706,	// (0x0001223e) aid_fshwr2_syb_pane

0x671a,	// (0x00012252) aid_fshwr2_txt_pane

0x672a,	// (0x00012262) fshwr2_func_candi_pane

0x674e,	// (0x00012286) fshwr2_hwr_syb_pane

0x6768,	// (0x000122a0) fshwr2_icf_pane

0x467d,	// (0x000101b5) fshwr2_icf_bg_pane

0x6796,	// (0x000122ce) fshwr2_icf_pane_t1_ParamLimits

0x6796,	// (0x000122ce) fshwr2_icf_pane_t1

0x824a,	// (0x00013d82) fshwr2_func_candi_pane_g1

0xebc4,	// (0x0001a6fc) fshwr2_func_candi_row_pane_ParamLimits

0xebc4,	// (0x0001a6fc) fshwr2_func_candi_row_pane

0x67ae,	// (0x000122e6) cell_fshwr2_syb_pane_ParamLimits

0x67ae,	// (0x000122e6) cell_fshwr2_syb_pane

0x67d1,	// (0x00012309) fshwr2_hwr_syb_pane_g1_ParamLimits

0x67d1,	// (0x00012309) fshwr2_hwr_syb_pane_g1

0x467d,	// (0x000101b5) bg_popup_call_pane_cp01

0x67df,	// (0x00012317) fshwr2_func_candi_cell_pane_ParamLimits

0x67df,	// (0x00012317) fshwr2_func_candi_cell_pane

0x9f5c,	// (0x00015a94) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x9f5c,	// (0x00015a94) fshwr2_func_candi_cell_bg_pane

0x682a,	// (0x00012362) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x682a,	// (0x00012362) fshwr2_func_candi_cell_pane_g1

0x6855,	// (0x0001238d) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x6855,	// (0x0001238d) fshwr2_func_candi_cell_pane_t1

0x467d,	// (0x000101b5) bg_button_pane_cp08

0x8c26,	// (0x0001475e) cell_fshwr2_syb_bg_pane

0x6868,	// (0x000123a0) cell_fshwr2_syb_bg_pane_g1

0x687c,	// (0x000123b4) cell_fshwr2_syb_bg_pane_t1

0x7a32,	// (0x0001356a) main_tmo_pane

0xa3f7,	// (0x00015f2f) uni_indicator_pane_g1_ParamLimits

0xa40d,	// (0x00015f45) uni_indicator_pane_g2_ParamLimits

0xa423,	// (0x00015f5b) uni_indicator_pane_g3_ParamLimits

0xa436,	// (0x00015f6e) uni_indicator_pane_g4_ParamLimits

0xa436,	// (0x00015f6e) uni_indicator_pane_g4

0xa44a,	// (0x00015f82) uni_indicator_pane_g5_ParamLimits

0xa44a,	// (0x00015f82) uni_indicator_pane_g5

0xa44a,	// (0x00015f82) uni_indicator_pane_g6_ParamLimits

0xa44a,	// (0x00015f82) uni_indicator_pane_g6

0xf8f2,	// (0x0001b42a) uni_indicator_pane_g_ParamLimits

0xd523,	// (0x0001905b) popup_tmo_note_window_ParamLimits

0xd523,	// (0x0001905b) popup_tmo_note_window

0x5f25,	// (0x00011a5d) fshwr2_bg_pane

0x6846,	// (0x0001237e) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x6846,	// (0x0001237e) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe97,	// (0x0001b9cf) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe97,	// (0x0001b9cf) fshwr2_func_candi_cell_pane_g

0x5c74,	// (0x000117ac) bg_popup_window_pane_cp01

0x6892,	// (0x000123ca) bg_popup_window_pane_g1_cp01

0xebeb,	// (0x0001a723) bg_popup_window_pane_cp22_ParamLimits

0xebeb,	// (0x0001a723) bg_popup_window_pane_cp22

0xebf9,	// (0x0001a731) listscroll_tmo_link_pane_ParamLimits

0xebf9,	// (0x0001a731) listscroll_tmo_link_pane

0xec39,	// (0x0001a771) popup_tmo_note_window_g1_ParamLimits

0xec39,	// (0x0001a771) popup_tmo_note_window_g1

0xec46,	// (0x0001a77e) tmo_note_info_pane_ParamLimits

0xec46,	// (0x0001a77e) tmo_note_info_pane

0xec60,	// (0x0001a798) list_tmo_note_info_pane_g1_ParamLimits

0xec60,	// (0x0001a798) list_tmo_note_info_pane_g1

0xec77,	// (0x0001a7af) list_tmo_note_info_pane_g2_ParamLimits

0xec77,	// (0x0001a7af) list_tmo_note_info_pane_g2

0x0001,

0xfe9c,	// (0x0001b9d4) list_tmo_note_info_pane_g_ParamLimits

0xfe9c,	// (0x0001b9d4) list_tmo_note_info_pane_g

0xec93,	// (0x0001a7cb) list_tmo_note_info_text_pane_ParamLimits

0xec93,	// (0x0001a7cb) list_tmo_note_info_text_pane

0xed14,	// (0x0001a84c) list_tmo_link_pane

0xed21,	// (0x0001a859) scroll_pane_cp20

0xed2e,	// (0x0001a866) list_single_tmo_link_pane_ParamLimits

0xed2e,	// (0x0001a866) list_single_tmo_link_pane

0xed3e,	// (0x0001a876) list_single_tmo_link_pane_t1

0xed4c,	// (0x0001a884) list_tmo_note_info_text_pane_t1_ParamLimits

0xed4c,	// (0x0001a884) list_tmo_note_info_text_pane_t1

0x7c71,	// (0x000137a9) aid_size_touch_scroll_bar_cp01_ParamLimits

0x7c71,	// (0x000137a9) aid_size_touch_scroll_bar_cp01

0x7ae1,	// (0x00013619) aid_size_touch_slider_marker

0x47c6,	// (0x000102fe) popup_settings_window_ParamLimits

0x47c6,	// (0x000102fe) popup_settings_window

0x8c5a,	// (0x00014792) popup_candi_list_indi_window

0x8caa,	// (0x000147e2) aid_touch_navi_pane_ParamLimits

0x5e80,	// (0x000119b8) rs_clock_indi_pane

0x5e89,	// (0x000119c1) sctrl_sk_bottom_pane_ParamLimits

0x5e9a,	// (0x000119d2) sctrl_sk_top_pane_ParamLimits

0x5f95,	// (0x00011acd) popup_fep_tooltip_window

0xe676,	// (0x0001a1ae) aid_size_cell_widget_grid_ParamLimits

0xe6eb,	// (0x0001a223) cell_ai5_widget_pane_g1_ParamLimits

0xe6eb,	// (0x0001a223) cell_ai5_widget_pane_g1

0xe74e,	// (0x0001a286) cell_ai5_widget_pane_g6_ParamLimits

0xe75a,	// (0x0001a292) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe10,	// (0x0001b948) cell_ai5_widget_pane_g_ParamLimits

0xfe10,	// (0x0001b948) cell_ai5_widget_pane_g

0xe8ca,	// (0x0001a402) cell_ai5_widget_pane_t10_ParamLimits

0xe8ca,	// (0x0001a402) cell_ai5_widget_pane_t10

0xe90d,	// (0x0001a445) grid_ai5_widget_pane_ParamLimits

0xe9a5,	// (0x0001a4dd) cell_contacts_ai5_widget_pane_ParamLimits

0xe9a5,	// (0x0001a4dd) cell_contacts_ai5_widget_pane

0xeb87,	// (0x0001a6bf) popup_discreet_window_t3_ParamLimits

0xeb87,	// (0x0001a6bf) popup_discreet_window_t3

0x6780,	// (0x000122b8) popup_fshwr2_char_preview_window_ParamLimits

0x6780,	// (0x000122b8) popup_fshwr2_char_preview_window

0xecb1,	// (0x0001a7e9) tmo_note_info_pane_t1

0xecc6,	// (0x0001a7fe) tmo_note_info_pane_t2

0xecdb,	// (0x0001a813) tmo_note_info_pane_t3

0xecf0,	// (0x0001a828) tmo_note_info_pane_t4

0xed02,	// (0x0001a83a) tmo_note_info_pane_t5

0x0004,

0xfea1,	// (0x0001b9d9) tmo_note_info_pane_t

0xed14,	// (0x0001a84c) list_tmo_link_pane_ParamLimits

0xed21,	// (0x0001a859) scroll_pane_cp20_ParamLimits

0x467d,	// (0x000101b5) bg_popup_fep_char_preview_window_cp01

0xed65,	// (0x0001a89d) popup_fshwr2_char_preview_window_t1

0xed73,	// (0x0001a8ab) popup_candi_list_indi_window_g1

0xed7c,	// (0x0001a8b4) bg_cell_contacts_ai5_widget_pane

0xed88,	// (0x0001a8c0) cell_contacts_ai5_widget_pane_g1

0xc55b,	// (0x00018093) cell_contacts_ai5_widget_pane_g2

0xed9d,	// (0x0001a8d5) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeac,	// (0x0001b9e4) cell_contacts_ai5_widget_pane_g

0xeda9,	// (0x0001a8e1) cell_contacts_ai5_widget_pane_t1

0x7a32,	// (0x0001356a) highlight_cell_shortcut_ai5_widget_pane_cp01

0xee20,	// (0x0001a958) settings_container_pane

0x88fa,	// (0x00014432) listscroll_set_pane_copy1

0xb0bf,	// (0x00016bf7) scroll_pane_cp121_copy1

0x9685,	// (0x000151bd) set_content_pane_copy1

0xee2c,	// (0x0001a964) aid_height_set_list_copy1_ParamLimits

0xee2c,	// (0x0001a964) aid_height_set_list_copy1

0xa654,	// (0x0001618c) aid_size_parent_copy1_ParamLimits

0xa654,	// (0x0001618c) aid_size_parent_copy1

0xee38,	// (0x0001a970) button_value_adjust_pane_cp6_copy1_ParamLimits

0xee38,	// (0x0001a970) button_value_adjust_pane_cp6_copy1

0x8c26,	// (0x0001475e) list_highlight_pane_cp2_copy1_ParamLimits

0x8c26,	// (0x0001475e) list_highlight_pane_cp2_copy1

0xee4c,	// (0x0001a984) list_set_pane_copy1_ParamLimits

0xee4c,	// (0x0001a984) list_set_pane_copy1

0xedbb,	// (0x0001a8f3) main_pane_set_t1_copy1_ParamLimits

0xedbb,	// (0x0001a8f3) main_pane_set_t1_copy1

0xedf5,	// (0x0001a92d) main_pane_set_t2_copy1_ParamLimits

0xedf5,	// (0x0001a92d) main_pane_set_t2_copy1

0xeef9,	// (0x0001aa31) main_pane_set_t3_copy1

0xef07,	// (0x0001aa3f) main_pane_set_t4_copy1

0xee14,	// (0x0001a94c) set_content_pane_g1_copy1_ParamLimits

0xee14,	// (0x0001a94c) set_content_pane_g1_copy1

0xef15,	// (0x0001aa4d) setting_code_pane_copy1

0xef1d,	// (0x0001aa55) setting_slider_graphic_pane_copy1

0xef1d,	// (0x0001aa55) setting_slider_pane_copy1

0xef25,	// (0x0001aa5d) setting_text_pane_copy1

0xef25,	// (0x0001aa5d) setting_volume_pane_copy1

0xef15,	// (0x0001aa4d) settings_code_pane_cp2_copy1

0xef2d,	// (0x0001aa65) settings_code_pane_cp_copy1_ParamLimits

0xef2d,	// (0x0001aa65) settings_code_pane_cp_copy1

0x689b,	// (0x000123d3) volume_set_pane_copy1

0xef41,	// (0x0001aa79) volume_set_pane_g10_copy1

0xef49,	// (0x0001aa81) volume_set_pane_g1_copy1

0xef51,	// (0x0001aa89) volume_set_pane_g2_copy1

0xef59,	// (0x0001aa91) volume_set_pane_g3_copy1

0xef61,	// (0x0001aa99) volume_set_pane_g4_copy1

0xef69,	// (0x0001aaa1) volume_set_pane_g5_copy1

0xef71,	// (0x0001aaa9) volume_set_pane_g6_copy1

0xef79,	// (0x0001aab1) volume_set_pane_g7_copy1

0xef81,	// (0x0001aab9) volume_set_pane_g8_copy1

0xef89,	// (0x0001aac1) volume_set_pane_g9_copy1

0x6c34,	// (0x0001276c) bg_set_opt_pane_cp_copy1_ParamLimits

0x6c34,	// (0x0001276c) bg_set_opt_pane_cp_copy1

0x68a3,	// (0x000123db) setting_slider_pane_t1_copy1_ParamLimits

0x68a3,	// (0x000123db) setting_slider_pane_t1_copy1

0x68c2,	// (0x000123fa) setting_slider_pane_t2_copy1_ParamLimits

0x68c2,	// (0x000123fa) setting_slider_pane_t2_copy1

0x68dc,	// (0x00012414) setting_slider_pane_t3_copy1_ParamLimits

0x68dc,	// (0x00012414) setting_slider_pane_t3_copy1

0x68f4,	// (0x0001242c) slider_set_pane_copy1_ParamLimits

0x68f4,	// (0x0001242c) slider_set_pane_copy1

0x7b61,	// (0x00013699) set_opt_bg_pane_g1_copy2

0x7b69,	// (0x000136a1) set_opt_bg_pane_g2_copy2

0xef91,	// (0x0001aac9) set_opt_bg_pane_g3_copy2

0x7b79,	// (0x000136b1) set_opt_bg_pane_g4_copy2

0x7b81,	// (0x000136b9) set_opt_bg_pane_g5_copy2

0x7b89,	// (0x000136c1) set_opt_bg_pane_g6_copy2

0xef9b,	// (0x0001aad3) set_opt_bg_pane_g7_copy2

0xefa3,	// (0x0001aadb) set_opt_bg_pane_g8_copy2

0xefad,	// (0x0001aae5) set_opt_bg_pane_g9_copy2

0x690a,	// (0x00012442) aid_size_touch_slider_mark_copy1_ParamLimits

0x690a,	// (0x00012442) aid_size_touch_slider_mark_copy1

0xefb7,	// (0x0001aaef) slider_set_pane_g1_copy1

0x691e,	// (0x00012456) slider_set_pane_g2_copy1

0x58b5,	// (0x000113ed) slider_set_pane_g3_copy1_ParamLimits

0x58b5,	// (0x000113ed) slider_set_pane_g3_copy1

0x58c9,	// (0x00011401) slider_set_pane_g4_copy1_ParamLimits

0x58c9,	// (0x00011401) slider_set_pane_g4_copy1

0x58e1,	// (0x00011419) slider_set_pane_g5_copy1_ParamLimits

0x58e1,	// (0x00011419) slider_set_pane_g5_copy1

0x58b5,	// (0x000113ed) slider_set_pane_g6_copy1_ParamLimits

0x58b5,	// (0x000113ed) slider_set_pane_g6_copy1

0x6926,	// (0x0001245e) slider_set_pane_g7_copy1_ParamLimits

0x6926,	// (0x0001245e) slider_set_pane_g7_copy1

0x6b54,	// (0x0001268c) bg_set_opt_pane_cp2_copy1

0xefc0,	// (0x0001aaf8) setting_slider_graphic_pane_g1_copy1

0xefc9,	// (0x0001ab01) setting_slider_graphic_pane_t1_copy1

0xefd9,	// (0x0001ab11) setting_slider_graphic_pane_t2_copy1

0xefe9,	// (0x0001ab21) slider_set_pane_cp_copy1

0xeff9,	// (0x0001ab31) input_focus_pane_cp1_copy1

0xf002,	// (0x0001ab3a) list_set_text_pane_copy1

0xf00a,	// (0x0001ab42) setting_text_pane_g1_copy1

0x6c8d,	// (0x000127c5) set_text_pane_t1_copy1

0xeff9,	// (0x0001ab31) input_focus_pane_cp2_copy1

0xf00a,	// (0x0001ab42) setting_code_pane_g1_copy1

0xf013,	// (0x0001ab4b) setting_code_pane_t1_copy1

0xaee7,	// (0x00016a1f) list_set_graphic_pane_copy1

0x6b54,	// (0x0001268c) bg_set_opt_pane_cp4_copy1

0x8603,	// (0x0001413b) list_set_graphic_pane_g1_copy1_ParamLimits

0x8603,	// (0x0001413b) list_set_graphic_pane_g1_copy1

0xf021,	// (0x0001ab59) list_set_graphic_pane_g2_copy1

0x861b,	// (0x00014153) list_set_graphic_pane_t1_copy1_ParamLimits

0x861b,	// (0x00014153) list_set_graphic_pane_t1_copy1

0xbcd6,	// (0x0001780e) rs_clock_indi_pane_g1

0xf029,	// (0x0001ab61) rs_clock_indi_pane_t1

0xf037,	// (0x0001ab6f) rs_indi_pane

0xf03f,	// (0x0001ab77) rs_indi_pane_g1

0xf048,	// (0x0001ab80) rs_indi_pane_g2

0xf051,	// (0x0001ab89) rs_indi_pane_g3

0x0002,

0xfeb3,	// (0x0001b9eb) rs_indi_pane_g

0x88fa,	// (0x00014432) bg_popup_preview_window_pane_cp03

0xf05a,	// (0x0001ab92) popup_fep_tooltip_window_t1

0xcb70,	// (0x000186a8) popup_note2_window_g2_ParamLimits

0xcb70,	// (0x000186a8) popup_note2_window_g2

0x0001,

0xfc40,	// (0x0001b778) popup_note2_window_g_ParamLimits

0xfc40,	// (0x0001b778) popup_note2_window_g

0xd15a,	// (0x00018c92) bg_popup_sub_pane_cp11_ParamLimits

0xd167,	// (0x00018c9f) cell_ai3_links_pane_g1_ParamLimits

0xd17e,	// (0x00018cb6) cell_ai3_links_pane_t1

0x6c8d,	// (0x000127c5) set_text_pane_t1_copy1_ParamLimits

0x880e,	// (0x00014346) cell_graphic_popup_pane_cp2_ParamLimits

0x880e,	// (0x00014346) cell_graphic_popup_pane_cp2

0xf068,	// (0x0001aba0) cell_graphic_popup_pane_g1_cp2

0x7226,	// (0x00012d5e) cell_graphic_popup_pane_g2_cp2

0xf070,	// (0x0001aba8) cell_graphic_popup_pane_g3_cp2

0xf078,	// (0x0001abb0) cell_graphic_popup_pane_t2_cp2

0x7237,	// (0x00012d6f) grid_highlight_pane_cp3_cp2

0x7f65,	// (0x00013a9d) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x7a32,	// (0x0001356a) main_tmo_pane_ParamLimits

0xd517,	// (0x0001904f) popup_tmo_big_image_note_window

0xe6da,	// (0x0001a212) cell_ai5_widget_list_pane

0xe6e2,	// (0x0001a21a) cell_ai5_widget_lrg_icon_pane

0xecb1,	// (0x0001a7e9) tmo_note_info_pane_t1_ParamLimits

0xecc6,	// (0x0001a7fe) tmo_note_info_pane_t2_ParamLimits

0xecdb,	// (0x0001a813) tmo_note_info_pane_t3_ParamLimits

0xecf0,	// (0x0001a828) tmo_note_info_pane_t4_ParamLimits

0xed02,	// (0x0001a83a) tmo_note_info_pane_t5_ParamLimits

0xfea1,	// (0x0001b9d9) tmo_note_info_pane_t_ParamLimits

0xee20,	// (0x0001a958) settings_container_pane_ParamLimits

0xeff1,	// (0x0001ab29) indicator_popup_pane_cp5

0xeff1,	// (0x0001ab29) indicator_popup_pane_cp6

0xaee7,	// (0x00016a1f) list_set_graphic_pane_copy1_ParamLimits

0x3adc,	// (0x0000f614) bg_popup_window_pane_cp23

0xf086,	// (0x0001abbe) popup_tmo_big_image_note_window_g1

0xf090,	// (0x0001abc8) popup_tmo_big_image_note_window_t1

0xf0a0,	// (0x0001abd8) popup_tmo_big_image_note_window_t2

0xf0b0,	// (0x0001abe8) popup_tmo_big_image_note_window_t3

0x0002,

0xfeba,	// (0x0001b9f2) popup_tmo_big_image_note_window_t

0xbcd6,	// (0x0001780e) cell_ai5_widget_lrg_icon_pane_g1

0xf0c0,	// (0x0001abf8) cell_ai5_widget_lrg_icon_pane_t1

0xf0ce,	// (0x0001ac06) cell_ai5_widget_list_row_pane_ParamLimits

0xf0ce,	// (0x0001ac06) cell_ai5_widget_list_row_pane

0xf0e5,	// (0x0001ac1d) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf0e5,	// (0x0001ac1d) cell_ai5_widget_list_row_pane_g1

0xf0f2,	// (0x0001ac2a) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf0f2,	// (0x0001ac2a) cell_ai5_widget_list_row_pane_t1

0xf123,	// (0x0001ac5b) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf123,	// (0x0001ac5b) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfec1,	// (0x0001b9f9) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfec1,	// (0x0001b9f9) cell_ai5_widget_list_row_pane_t

0x467d,	// (0x000101b5) main_fep_vtchi_ss_pane

0xf173,	// (0x0001acab) popup_fep_char_pre_window

0xf17b,	// (0x0001acb3) popup_fep_ituss_window

0xf1a7,	// (0x0001acdf) popup_fep_vkbss_window

0x8c26,	// (0x0001475e) grid_vkbss_keypad_pane_ParamLimits

0x8c26,	// (0x0001475e) grid_vkbss_keypad_pane

0xf1e7,	// (0x0001ad1f) ituss_keypad_pane

0x6946,	// (0x0001247e) aid_vkbss_key_offset_ParamLimits

0x6946,	// (0x0001247e) aid_vkbss_key_offset

0x6952,	// (0x0001248a) cell_vkbss_key_pane_ParamLimits

0x6952,	// (0x0001248a) cell_vkbss_key_pane

0xf1f3,	// (0x0001ad2b) bg_cell_vkbss_key_g1_ParamLimits

0xf1f3,	// (0x0001ad2b) bg_cell_vkbss_key_g1

0xf1ff,	// (0x0001ad37) cell_vkbss_key_3p_pane_ParamLimits

0xf1ff,	// (0x0001ad37) cell_vkbss_key_3p_pane

0xf235,	// (0x0001ad6d) cell_vkbss_key_g1_ParamLimits

0xf235,	// (0x0001ad6d) cell_vkbss_key_g1

0xf26b,	// (0x0001ada3) cell_vkbss_key_t1_ParamLimits

0xf26b,	// (0x0001ada3) cell_vkbss_key_t1

0x69b0,	// (0x000124e8) cell_ituss_key_pane_ParamLimits

0x69b0,	// (0x000124e8) cell_ituss_key_pane

0xf2c7,	// (0x0001adff) bg_cell_ituss_key_g1_ParamLimits

0xf2c7,	// (0x0001adff) bg_cell_ituss_key_g1

0xf2d3,	// (0x0001ae0b) cell_ituss_key_pane_g1_ParamLimits

0xf2d3,	// (0x0001ae0b) cell_ituss_key_pane_g1

0x69c1,	// (0x000124f9) cell_ituss_key_pane_g2_ParamLimits

0x69c1,	// (0x000124f9) cell_ituss_key_pane_g2

0x0005,

0xfec8,	// (0x0001ba00) cell_ituss_key_pane_g_ParamLimits

0xfec8,	// (0x0001ba00) cell_ituss_key_pane_g

0x6a45,	// (0x0001257d) cell_ituss_key_t1_ParamLimits

0x6a45,	// (0x0001257d) cell_ituss_key_t1

0x6a7f,	// (0x000125b7) cell_ituss_key_t2_ParamLimits

0x6a7f,	// (0x000125b7) cell_ituss_key_t2

0x6ab1,	// (0x000125e9) cell_ituss_key_t3_ParamLimits

0x6ab1,	// (0x000125e9) cell_ituss_key_t3

0x6ae2,	// (0x0001261a) cell_ituss_key_t4_ParamLimits

0x6ae2,	// (0x0001261a) cell_ituss_key_t4

0x0004,

0xfed5,	// (0x0001ba0d) cell_ituss_key_t_ParamLimits

0xfed5,	// (0x0001ba0d) cell_ituss_key_t

0xf2f9,	// (0x0001ae31) cell_vkbss_key_3p_pane_g1

0xf301,	// (0x0001ae39) cell_vkbss_key_3p_pane_g2

0xf309,	// (0x0001ae41) cell_vkbss_key_3p_pane_g3

0x0002,

0xfee0,	// (0x0001ba18) cell_vkbss_key_3p_pane_g

0x88fa,	// (0x00014432) bg_popup_fep_char_preview_window_cp02

0xf311,	// (0x0001ae49) popup_fep_char_pre_window_t1

0xe663,	// (0x0001a19b) main_ai5_sk_pane

0xed7c,	// (0x0001a8b4) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xed88,	// (0x0001a8c0) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xc55b,	// (0x00018093) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xed9d,	// (0x0001a8d5) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeac,	// (0x0001b9e4) cell_contacts_ai5_widget_pane_g_ParamLimits

0xeda9,	// (0x0001a8e1) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x7a32,	// (0x0001356a) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf31f,	// (0x0001ae57) main_ai5_sk_pane_g1

0x9721,	// (0x00015259) popup_query_code_window_g1

0xf191,	// (0x0001acc9) popup_fep_vkb_icf_pane

0xf1be,	// (0x0001acf6) popup_fep_vtchi_icf_pane

0xf328,	// (0x0001ae60) bg_icf_pane

0xf328,	// (0x0001ae60) list_vkb_icf_pane

0xf334,	// (0x0001ae6c) bg_icf_pane_cp01

0xf347,	// (0x0001ae7f) vtchi_icf_list_pane

0xf3a7,	// (0x0001aedf) list_vkb_icf_pane_t1_ParamLimits

0xf3a7,	// (0x0001aedf) list_vkb_icf_pane_t1

0xf3c5,	// (0x0001aefd) vtchi_icf_list_pane_t1_ParamLimits

0xf3c5,	// (0x0001aefd) vtchi_icf_list_pane_t1

0xf17b,	// (0x0001acb3) popup_fep_ituss_window_ParamLimits

0xf1be,	// (0x0001acf6) popup_fep_vtchi_icf_pane_ParamLimits

0xf1e7,	// (0x0001ad1f) ituss_keypad_pane_ParamLimits

0x693c,	// (0x00012474) ituss_sks_pane

0xf328,	// (0x0001ae60) bg_icf_pane_ParamLimits

0xf14b,	// (0x0001ac83) icf_edit_indi_pane_ParamLimits

0xf14b,	// (0x0001ac83) icf_edit_indi_pane

0xf328,	// (0x0001ae60) list_vkb_icf_pane_ParamLimits

0xf334,	// (0x0001ae6c) bg_icf_pane_cp01_ParamLimits

0xf166,	// (0x0001ac9e) icf_edit_indi_pane_cp01_ParamLimits

0xf166,	// (0x0001ac9e) icf_edit_indi_pane_cp01

0xf347,	// (0x0001ae7f) vtchi_query_pane

0xe4df,	// (0x0001a017) icf_edit_indi_pane_g1_ParamLimits

0xe4df,	// (0x0001a017) icf_edit_indi_pane_g1

0xf43a,	// (0x0001af72) icf_edit_indi_pane_g2_ParamLimits

0xf43a,	// (0x0001af72) icf_edit_indi_pane_g2

0x0001,

0xff0b,	// (0x0001ba43) icf_edit_indi_pane_g_ParamLimits

0xff0b,	// (0x0001ba43) icf_edit_indi_pane_g

0xf44e,	// (0x0001af86) icf_edit_indi_pane_t1

0xf3e3,	// (0x0001af1b) bg_input_focus_pane_cp042

0x740a,	// (0x00012f42) vtchi_button_pane

0xf3ec,	// (0x0001af24) vtchi_query_pane_t1

0xf3fa,	// (0x0001af32) vtchi_query_pane_t2

0xf408,	// (0x0001af40) vtchi_query_pane_t3

0x0002,

0xfefa,	// (0x0001ba32) vtchi_query_pane_t

0x467d,	// (0x000101b5) bg_button_pane_cp13

0xf416,	// (0x0001af4e) vtchi_button_pane_g1

0x6b25,	// (0x0001265d) ituss_sks_pane_g1

0x6b30,	// (0x00012668) ituss_sks_pane_g2

0x0001,

0xff01,	// (0x0001ba39) ituss_sks_pane_g

0xf41e,	// (0x0001af56) ituss_sks_pane_t1

0xf42c,	// (0x0001af64) ituss_sks_pane_t2

0x0001,

0xff06,	// (0x0001ba3e) ituss_sks_pane_t

0xb709,	// (0x00017241) indicator_nsta_pane_cp_g1

0xb712,	// (0x0001724a) indicator_nsta_pane_cp_g2

0xb71a,	// (0x00017252) indicator_nsta_pane_cp_g3

0xb722,	// (0x0001725a) indicator_nsta_pane_cp_g4

0xb712,	// (0x0001724a) indicator_nsta_pane_cp_g5

0xb71a,	// (0x00017252) indicator_nsta_pane_cp_g6

0x0005,

0xfa7e,	// (0x0001b5b6) indicator_nsta_pane_cp_g

0xe23b,	// (0x00019d73) cell_graphic2_pane_t2_ParamLimits

0xe23b,	// (0x00019d73) cell_graphic2_pane_t2

0x0001,

0xfd97,	// (0x0001b8cf) cell_graphic2_pane_t_ParamLimits

0xfd97,	// (0x0001b8cf) cell_graphic2_pane_t

0xe267,	// (0x00019d9f) cell_graphic2_control_pane_t1

0x8324,	// (0x00013e5c) signal_pane_g3_ParamLimits

0x8324,	// (0x00013e5c) signal_pane_g3

0x8336,	// (0x00013e6e) signal_pane_g4_ParamLimits

0x8336,	// (0x00013e6e) signal_pane_g4

0xf135,	// (0x0001ac6d) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf135,	// (0x0001ac6d) cell_ai5_widget_list_row_pane_t3

0xf2e7,	// (0x0001ae1f) cell_ituss_key_pane_t1_ParamLimits

0xf2e7,	// (0x0001ae1f) cell_ituss_key_pane_t1

0x9321,	// (0x00014e59) form_field_data_wide_pane_vc_t2_ParamLimits

0x9321,	// (0x00014e59) form_field_data_wide_pane_vc_t2

0x9335,	// (0x00014e6d) form_field_data_wide_pane_vc_t3_ParamLimits

0x9335,	// (0x00014e6d) form_field_data_wide_pane_vc_t3

0x0002,

0xf7da,	// (0x0001b312) form_field_data_wide_pane_vc_t_ParamLimits

0xf7da,	// (0x0001b312) form_field_data_wide_pane_vc_t

0xb3b3,	// (0x00016eeb) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb3b3,	// (0x00016eeb) form_field_slider_wide_pane_vc_t3

0xb491,	// (0x00016fc9) form_field_popup_wide_pane_vc_t2_ParamLimits

0xb491,	// (0x00016fc9) form_field_popup_wide_pane_vc_t2

0xb4a8,	// (0x00016fe0) form_field_popup_wide_pane_vc_t3_ParamLimits

0xb4a8,	// (0x00016fe0) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa6d,	// (0x0001b5a5) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa6d,	// (0x0001b5a5) form_field_popup_wide_pane_vc_t

0x66f6,	// (0x0001222e) aid_fshwr2_btn_pane_ParamLimits

0x6706,	// (0x0001223e) aid_fshwr2_syb_pane_ParamLimits

0x671a,	// (0x00012252) aid_fshwr2_txt_pane_ParamLimits

0x5f25,	// (0x00011a5d) fshwr2_bg_pane_ParamLimits

0x672a,	// (0x00012262) fshwr2_func_candi_pane_ParamLimits

0x674e,	// (0x00012286) fshwr2_hwr_syb_pane_ParamLimits

0x6768,	// (0x000122a0) fshwr2_icf_pane_ParamLimits

0xb319,	// (0x00016e51) list_double_graphic_pane_vc_g4_ParamLimits

0xb319,	// (0x00016e51) list_double_graphic_pane_vc_g4

0x69e1,	// (0x00012519) cell_ituss_key_pane_g3_ParamLimits

0x69e1,	// (0x00012519) cell_ituss_key_pane_g3

0x6b13,	// (0x0001264b) cell_ituss_key_t5_ParamLimits

0x6b13,	// (0x0001264b) cell_ituss_key_t5

0xf1a7,	// (0x0001acdf) popup_fep_vkbss_window_ParamLimits

0xe66d,	// (0x0001a1a5) aid_cell_ai5_quarter

0xf44e,	// (0x0001af86) icf_edit_indi_pane_t1_ParamLimits

0x6f7f,	// (0x00012ab7) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x6f7f,	// (0x00012ab7) aid_tch_indicator_popup_pane_cp2

0x6f92,	// (0x00012aca) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x6f92,	// (0x00012aca) aid_tch_query_popup_data_pane_cp2

0x96c9,	// (0x00015201) aid_tch_query_popup_pane_ParamLimits

0x96c9,	// (0x00015201) aid_tch_query_popup_pane

0x96c9,	// (0x00015201) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x96c9,	// (0x00015201) aid_tch_query_popup_data_pane_cp1

0x8c26,	// (0x0001475e) cell_fshwr2_syb_bg_pane_ParamLimits

0x6868,	// (0x000123a0) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0x687c,	// (0x000123b4) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xf191,	// (0x0001acc9) popup_fep_vkb_icf_pane_ParamLimits

0x6536,	// (0x0001206e) bg_popup_fep_char_preview_window_g10

0xe7a2,	// (0x0001a2da) cell_ai5_widget_pane_g11_ParamLimits

0xe7a2,	// (0x0001a2da) cell_ai5_widget_pane_g11

0xe7ae,	// (0x0001a2e6) cell_ai5_widget_pane_g12_ParamLimits

0xe7ae,	// (0x0001a2e6) cell_ai5_widget_pane_g12

0xe7ba,	// (0x0001a2f2) cell_ai5_widget_pane_g13_ParamLimits

0xe7ba,	// (0x0001a2f2) cell_ai5_widget_pane_g13

0xe8e9,	// (0x0001a421) cell_ai5_widget_pane_t11_ParamLimits

0xe8e9,	// (0x0001a421) cell_ai5_widget_pane_t11

0xe8fb,	// (0x0001a433) cell_ai5_widget_pane_t12_ParamLimits

0xe8fb,	// (0x0001a433) cell_ai5_widget_pane_t12

0x69ed,	// (0x00012525) cell_ituss_key_pane_g4_ParamLimits

0x69ed,	// (0x00012525) cell_ituss_key_pane_g4

0x6a09,	// (0x00012541) cell_ituss_key_pane_g5_ParamLimits

0x6a09,	// (0x00012541) cell_ituss_key_pane_g5

0x6a25,	// (0x0001255d) cell_ituss_key_pane_g6_ParamLimits

0x6a25,	// (0x0001255d) cell_ituss_key_pane_g6

0x916e,	// (0x00014ca6) bg_icf_pane_g1

0xf34f,	// (0x0001ae87) bg_icf_pane_g2

0xf35b,	// (0x0001ae93) bg_icf_pane_g3

0xf365,	// (0x0001ae9d) bg_icf_pane_g4

0xf371,	// (0x0001aea9) bg_icf_pane_g5

0xf37b,	// (0x0001aeb3) bg_icf_pane_g6

0xf387,	// (0x0001aebf) bg_icf_pane_g7

0xf391,	// (0x0001aec9) bg_icf_pane_g8

0xf39d,	// (0x0001aed5) bg_icf_pane_g9

0x0008,

0xfee7,	// (0x0001ba1f) bg_icf_pane_g

0xf1d4,	// (0x0001ad0c) popup_hyb_candi_window_ParamLimits

0xf1d4,	// (0x0001ad0c) popup_hyb_candi_window

0x9290,	// (0x00014dc8) bg_popup_sub_pane_cp01_ParamLimits

0x9290,	// (0x00014dc8) bg_popup_sub_pane_cp01

0xf467,	// (0x0001af9f) entry_hyb_candi_pane_ParamLimits

0xf467,	// (0x0001af9f) entry_hyb_candi_pane

0xf476,	// (0x0001afae) grid_hyb_candi_pane_ParamLimits

0xf476,	// (0x0001afae) grid_hyb_candi_pane

0xf48b,	// (0x0001afc3) grid_hyb_phrase_pane_ParamLimits

0xf48b,	// (0x0001afc3) grid_hyb_phrase_pane

0xf49a,	// (0x0001afd2) cell_hyb_candi_pane_ParamLimits

0xf49a,	// (0x0001afd2) cell_hyb_candi_pane

0xf4bd,	// (0x0001aff5) cell_hyb_candi_scroll_pane

0x824a,	// (0x00013d82) cell_hyb_candi_pane_g1

0xf4c6,	// (0x0001affe) cell_hyb_candi_pane_t1

0xf4d4,	// (0x0001b00c) cell_hyb_phrase_pane

0x824a,	// (0x00013d82) cell_hyb_phrase_pane_g1

0xf4dd,	// (0x0001b015) cell_hyb_phrase_pane_t1

0xf4eb,	// (0x0001b023) entry_hyb_candi_pane_t1

0x88fa,	// (0x00014432) input_focus_pane_cp06

0xf4f9,	// (0x0001b031) cell_hyb_candi_scroll_pane_g1

0xf501,	// (0x0001b039) cell_hyb_candi_scroll_pane_g1_aid

0xf509,	// (0x0001b041) cell_hyb_candi_scroll_pane_g2

0xf511,	// (0x0001b049) cell_hyb_candi_scroll_pane_g2_aid

0xf519,	// (0x0001b051) cell_hyb_candi_scroll_pane_g3

0xf521,	// (0x0001b059) cell_hyb_candi_scroll_pane_g4
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

} // end of namespace AknLayoutScalable_Abrw_php_av_qhd_prt_tch_Normal

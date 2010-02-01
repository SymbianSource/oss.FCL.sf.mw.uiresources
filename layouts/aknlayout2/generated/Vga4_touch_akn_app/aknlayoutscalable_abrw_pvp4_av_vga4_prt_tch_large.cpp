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

#include "aknlayoutscalable_abrw_pvp4_av_vga4_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvp4_av_vga4_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x0004d2b4 };

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
0x72b1,	// (0x00054565) Screen

0x72bd,	// (0x00054571) application_window_ParamLimits

0x72bd,	// (0x00054571) application_window

0x2507,	// (0x0004f7bb) screen_g1

0x4a44,	// (0x00051cf8) area_bottom_pane_ParamLimits

0x4a44,	// (0x00051cf8) area_bottom_pane

0x4b04,	// (0x00051db8) area_top_pane_ParamLimits

0x4b04,	// (0x00051db8) area_top_pane

0x4ba2,	// (0x00051e56) main_pane_ParamLimits

0x4ba2,	// (0x00051e56) main_pane

0x2511,	// (0x0004f7c5) misc_graphics

0x951d,	// (0x000567d1) battery_pane_ParamLimits

0x951d,	// (0x000567d1) battery_pane

0xa230,	// (0x000574e4) bg_status_flat_pane_g8

0xa238,	// (0x000574ec) bg_status_flat_pane_g9

0x95e5,	// (0x00056899) context_pane_ParamLimits

0x95e5,	// (0x00056899) context_pane

0x9709,	// (0x000569bd) navi_pane_ParamLimits

0x9709,	// (0x000569bd) navi_pane

0x9798,	// (0x00056a4c) signal_pane_ParamLimits

0x9798,	// (0x00056a4c) signal_pane

0x0008,

0xf88f,	// (0x0005cb43) bg_status_flat_pane_g

0x9805,	// (0x00056ab9) status_pane_g1_ParamLimits

0x9805,	// (0x00056ab9) status_pane_g1

0x9819,	// (0x00056acd) status_pane_g2_ParamLimits

0x9819,	// (0x00056acd) status_pane_g2

0x9825,	// (0x00056ad9) status_pane_g3_ParamLimits

0x9825,	// (0x00056ad9) status_pane_g3

0x0004,

0xf7bd,	// (0x0005ca71) status_pane_g_ParamLimits

0xf7bd,	// (0x0005ca71) status_pane_g

0x9859,	// (0x00056b0d) title_pane_ParamLimits

0x9859,	// (0x00056b0d) title_pane

0x9896,	// (0x00056b4a) uni_indicator_pane_ParamLimits

0x9896,	// (0x00056b4a) uni_indicator_pane

0x8e12,	// (0x000560c6) bg_list_pane_ParamLimits

0x8e12,	// (0x000560c6) bg_list_pane

0x8e32,	// (0x000560e6) find_pane

0x8e3a,	// (0x000560ee) listscroll_app_pane_ParamLimits

0x8e3a,	// (0x000560ee) listscroll_app_pane

0x8e46,	// (0x000560fa) listscroll_form_pane

0x8e4e,	// (0x00056102) listscroll_gen_pane_ParamLimits

0x8e4e,	// (0x00056102) listscroll_gen_pane

0x8e46,	// (0x000560fa) listscroll_set_pane

0x7eca,	// (0x0005517e) main_idle_act_pane

0x8af6,	// (0x00055daa) main_idle_trad_pane

0x8af6,	// (0x00055daa) main_list_empty_pane

0x8e74,	// (0x00056128) main_midp_pane

0x8e80,	// (0x00056134) main_pane_g1_ParamLimits

0x8e80,	// (0x00056134) main_pane_g1

0x8e8e,	// (0x00056142) popup_ai_message_window_ParamLimits

0x8e8e,	// (0x00056142) popup_ai_message_window

0x8f3e,	// (0x000561f2) popup_fep_china_uni_window_ParamLimits

0x8f3e,	// (0x000561f2) popup_fep_china_uni_window

0x8f9e,	// (0x00056252) popup_fep_japan_candidate_window_ParamLimits

0x8f9e,	// (0x00056252) popup_fep_japan_candidate_window

0x8fc8,	// (0x0005627c) popup_fep_japan_predictive_window_ParamLimits

0x8fc8,	// (0x0005627c) popup_fep_japan_predictive_window

0x8ffe,	// (0x000562b2) popup_find_window

0x900b,	// (0x000562bf) popup_grid_graphic_window_ParamLimits

0x900b,	// (0x000562bf) popup_grid_graphic_window

0x9039,	// (0x000562ed) popup_large_graphic_colour_window

0x905f,	// (0x00056313) popup_menu_window_ParamLimits

0x905f,	// (0x00056313) popup_menu_window

0x9229,	// (0x000564dd) popup_note_image_window

0x9213,	// (0x000564c7) popup_note_wait_window_ParamLimits

0x9213,	// (0x000564c7) popup_note_wait_window

0x9213,	// (0x000564c7) popup_note_window_ParamLimits

0x9213,	// (0x000564c7) popup_note_window

0x928f,	// (0x00056543) popup_query_code_window_ParamLimits

0x928f,	// (0x00056543) popup_query_code_window

0x92a5,	// (0x00056559) popup_query_data_code_window_ParamLimits

0x92a5,	// (0x00056559) popup_query_data_code_window

0x92c8,	// (0x0005657c) popup_query_data_window_ParamLimits

0x92c8,	// (0x0005657c) popup_query_data_window

0x92ea,	// (0x0005659e) popup_query_sat_info_window_ParamLimits

0x92ea,	// (0x0005659e) popup_query_sat_info_window

0x9329,	// (0x000565dd) popup_snote_single_graphic_window_ParamLimits

0x9329,	// (0x000565dd) popup_snote_single_graphic_window

0x9329,	// (0x000565dd) popup_snote_single_text_window_ParamLimits

0x9329,	// (0x000565dd) popup_snote_single_text_window

0x9340,	// (0x000565f4) popup_sub_window_general

0x9486,	// (0x0005673a) popup_window_general_ParamLimits

0x9486,	// (0x0005673a) popup_window_general

0x949f,	// (0x00056753) power_save_pane

0x5a77,	// (0x00052d2b) control_pane_g1_ParamLimits

0x5a77,	// (0x00052d2b) control_pane_g1

0x5aa0,	// (0x00052d54) control_pane_g2_ParamLimits

0x5aa0,	// (0x00052d54) control_pane_g2

0x8dc3,	// (0x00056077) control_pane_g3_ParamLimits

0x8dc3,	// (0x00056077) control_pane_g3

0x0007,

0xf7a5,	// (0x0005ca59) control_pane_g_ParamLimits

0xf7a5,	// (0x0005ca59) control_pane_g

0x5ae8,	// (0x00052d9c) control_pane_t1_ParamLimits

0x5ae8,	// (0x00052d9c) control_pane_t1

0x5b3a,	// (0x00052dee) control_pane_t2_ParamLimits

0x5b3a,	// (0x00052dee) control_pane_t2

0x0002,

0xf7b6,	// (0x0005ca6a) control_pane_t_ParamLimits

0xf7b6,	// (0x0005ca6a) control_pane_t

0x8ce4,	// (0x00055f98) navi_navi_volume_pane_cp1

0x8ced,	// (0x00055fa1) status_small_icon_pane

0x8cf5,	// (0x00055fa9) status_small_pane_g1_ParamLimits

0x8cf5,	// (0x00055fa9) status_small_pane_g1

0x8d29,	// (0x00055fdd) status_small_pane_g2_ParamLimits

0x8d29,	// (0x00055fdd) status_small_pane_g2

0x8d35,	// (0x00055fe9) status_small_pane_g3_ParamLimits

0x8d35,	// (0x00055fe9) status_small_pane_g3

0x8d41,	// (0x00055ff5) status_small_pane_g4_ParamLimits

0x8d41,	// (0x00055ff5) status_small_pane_g4

0x8d4d,	// (0x00056001) status_small_pane_g5_ParamLimits

0x8d4d,	// (0x00056001) status_small_pane_g5

0x8d5c,	// (0x00056010) status_small_pane_g6_ParamLimits

0x8d5c,	// (0x00056010) status_small_pane_g6

0x0007,

0xf794,	// (0x0005ca48) status_small_pane_g_ParamLimits

0xf794,	// (0x0005ca48) status_small_pane_g

0x8d8c,	// (0x00056040) status_small_pane_t1

0x8daf,	// (0x00056063) status_small_wait_pane_ParamLimits

0x8daf,	// (0x00056063) status_small_wait_pane

0x858d,	// (0x00055841) aid_levels_signal_ParamLimits

0x858d,	// (0x00055841) aid_levels_signal

0x859f,	// (0x00055853) signal_pane_g1_ParamLimits

0x859f,	// (0x00055853) signal_pane_g1

0x85b4,	// (0x00055868) signal_pane_g2_ParamLimits

0x85b4,	// (0x00055868) signal_pane_g2

0x0001,

0xf729,	// (0x0005c9dd) signal_pane_g_ParamLimits

0xf729,	// (0x0005c9dd) signal_pane_g

0x85c9,	// (0x0005587d) context_pane_g1

0x72cd,	// (0x00054581) title_pane_g1

0x72f7,	// (0x000545ab) title_pane_t1

0x735f,	// (0x00054613) title_pane_t2

0x7385,	// (0x00054639) title_pane_t3

0x0002,

0xf573,	// (0x0005c827) title_pane_t

0x98ae,	// (0x00056b62) aid_levels_battery_ParamLimits

0x98ae,	// (0x00056b62) aid_levels_battery

0x98c2,	// (0x00056b76) battery_pane_g1_ParamLimits

0x98c2,	// (0x00056b76) battery_pane_g1

0x98d8,	// (0x00056b8c) battery_pane_g2_ParamLimits

0x98d8,	// (0x00056b8c) battery_pane_g2

0x0001,

0xf7c8,	// (0x0005ca7c) battery_pane_g_ParamLimits

0xf7c8,	// (0x0005ca7c) battery_pane_g

0xab80,	// (0x00057e34) uni_indicator_pane_g1

0xab95,	// (0x00057e49) uni_indicator_pane_g2

0xabab,	// (0x00057e5f) uni_indicator_pane_g3

0x0005,

0xf937,	// (0x0005cbeb) uni_indicator_pane_g

0x8964,	// (0x00055c18) navi_icon_pane_ParamLimits

0x8964,	// (0x00055c18) navi_icon_pane

0x88ab,	// (0x00055b5f) navi_midp_pane

0x8980,	// (0x00055c34) navi_navi_pane

0x898a,	// (0x00055c3e) navi_text_pane_ParamLimits

0x898a,	// (0x00055c3e) navi_text_pane

0x2507,	// (0x0004f7bb) status_small_wait_pane_g1

0x77c9,	// (0x00054a7d) status_small_wait_pane_g2

0x0001,

0xf932,	// (0x0005cbe6) status_small_wait_pane_g

0xa893,	// (0x00057b47) navi_navi_icon_text_pane

0xa89b,	// (0x00057b4f) navi_navi_pane_g1_ParamLimits

0xa89b,	// (0x00057b4f) navi_navi_pane_g1

0xa8ad,	// (0x00057b61) navi_navi_pane_g2_ParamLimits

0xa8ad,	// (0x00057b61) navi_navi_pane_g2

0x0001,

0xf900,	// (0x0005cbb4) navi_navi_pane_g_ParamLimits

0xf900,	// (0x0005cbb4) navi_navi_pane_g

0xa8bf,	// (0x00057b73) navi_navi_tabs_pane

0xa8c8,	// (0x00057b7c) navi_navi_text_pane

0xa893,	// (0x00057b47) navi_navi_volume_pane

0xa86c,	// (0x00057b20) navi_text_pane_t1

0xa85d,	// (0x00057b11) navi_icon_pane_g1

0xa7b0,	// (0x00057a64) navi_navi_text_pane_t1

0x5f03,	// (0x000531b7) navi_navi_volume_pane_g1

0x5f0b,	// (0x000531bf) volume_small_pane

0xa716,	// (0x000579ca) navi_navi_icon_text_pane_g1

0xa71e,	// (0x000579d2) navi_navi_icon_text_pane_t1

0x8980,	// (0x00055c34) navi_tabs_2_long_pane

0x8980,	// (0x00055c34) navi_tabs_2_pane

0x8980,	// (0x00055c34) navi_tabs_3_long_pane

0x8980,	// (0x00055c34) navi_tabs_3_pane

0x8980,	// (0x00055c34) navi_tabs_4_pane

0x5ee3,	// (0x00053197) tabs_2_active_pane_ParamLimits

0x5ee3,	// (0x00053197) tabs_2_active_pane

0x5ef3,	// (0x000531a7) tabs_2_passive_pane_ParamLimits

0x5ef3,	// (0x000531a7) tabs_2_passive_pane

0x5eb1,	// (0x00053165) tabs_3_active_pane_ParamLimits

0x5eb1,	// (0x00053165) tabs_3_active_pane

0x5ec1,	// (0x00053175) tabs_3_passive_pane_ParamLimits

0x5ec1,	// (0x00053175) tabs_3_passive_pane

0x5ed2,	// (0x00053186) tabs_3_passive_pane_cp_ParamLimits

0x5ed2,	// (0x00053186) tabs_3_passive_pane_cp

0x5e65,	// (0x00053119) tabs_4_active_pane_ParamLimits

0x5e65,	// (0x00053119) tabs_4_active_pane

0x5e78,	// (0x0005312c) tabs_4_passive_pane_ParamLimits

0x5e78,	// (0x0005312c) tabs_4_passive_pane

0x5e89,	// (0x0005313d) tabs_4_passive_pane_cp_ParamLimits

0x5e89,	// (0x0005313d) tabs_4_passive_pane_cp

0x5e9a,	// (0x0005314e) tabs_4_passive_pane_cp2_ParamLimits

0x5e9a,	// (0x0005314e) tabs_4_passive_pane_cp2

0x5e41,	// (0x000530f5) tabs_2_long_active_pane_ParamLimits

0x5e41,	// (0x000530f5) tabs_2_long_active_pane

0x5e53,	// (0x00053107) tabs_2_long_passive_pane_ParamLimits

0x5e53,	// (0x00053107) tabs_2_long_passive_pane

0x5e02,	// (0x000530b6) tabs_3_long_active_pane_ParamLimits

0x5e02,	// (0x000530b6) tabs_3_long_active_pane

0x5e15,	// (0x000530c9) tabs_3_long_passive_pane_ParamLimits

0x5e15,	// (0x000530c9) tabs_3_long_passive_pane

0x5e2e,	// (0x000530e2) tabs_3_long_passive_pane_cp_ParamLimits

0x5e2e,	// (0x000530e2) tabs_3_long_passive_pane_cp

0x5da8,	// (0x0005305c) volume_small_pane_g1

0x5db1,	// (0x00053065) volume_small_pane_g2

0x5dba,	// (0x0005306e) volume_small_pane_g3

0x5dc3,	// (0x00053077) volume_small_pane_g4

0x5dcc,	// (0x00053080) volume_small_pane_g5

0x5dd5,	// (0x00053089) volume_small_pane_g6

0x5dde,	// (0x00053092) volume_small_pane_g7

0x5de7,	// (0x0005309b) volume_small_pane_g8

0x5df0,	// (0x000530a4) volume_small_pane_g9

0x5df9,	// (0x000530ad) volume_small_pane_g10

0x0009,

0xf8cc,	// (0x0005cb80) volume_small_pane_g

0x7397,	// (0x0005464b) bg_active_tab_pane_cp2_ParamLimits

0x7397,	// (0x0005464b) bg_active_tab_pane_cp2

0x73a5,	// (0x00054659) tabs_3_active_pane_g1

0x73ad,	// (0x00054661) tabs_3_active_pane_t1

0x7397,	// (0x0005464b) bg_passive_tab_pane_cp2_ParamLimits

0x7397,	// (0x0005464b) bg_passive_tab_pane_cp2

0x73a5,	// (0x00054659) tabs_3_passive_pane_g1

0x73ad,	// (0x00054661) tabs_3_passive_pane_t1

0x7397,	// (0x0005464b) bg_active_tab_pane_cp3_ParamLimits

0x7397,	// (0x0005464b) bg_active_tab_pane_cp3

0x73bf,	// (0x00054673) tabs_4_active_pane_g1

0x73c7,	// (0x0005467b) tabs_4_active_pane_t1

0x7397,	// (0x0005464b) bg_passive_tab_pane_cp3_ParamLimits

0x7397,	// (0x0005464b) bg_passive_tab_pane_cp3

0x73bf,	// (0x00054673) tabs_4_1_passive_pane_g1

0x73c7,	// (0x0005467b) tabs_4_1_passive_pane_t1

0x8e74,	// (0x00056128) list_highlight_pane_cp2

0xae0f,	// (0x000580c3) list_set_pane_ParamLimits

0xae0f,	// (0x000580c3) list_set_pane

0xaed7,	// (0x0005818b) main_pane_set_t1_ParamLimits

0xaed7,	// (0x0005818b) main_pane_set_t1

0xaef7,	// (0x000581ab) main_pane_set_t2_ParamLimits

0xaef7,	// (0x000581ab) main_pane_set_t2

0xaf0b,	// (0x000581bf) main_pane_set_t3_ParamLimits

0xaf0b,	// (0x000581bf) main_pane_set_t3

0xaf1f,	// (0x000581d3) main_pane_set_t4_ParamLimits

0xaf1f,	// (0x000581d3) main_pane_set_t4

0x0003,

0xf99c,	// (0x0005cc50) main_pane_set_t_ParamLimits

0xf99c,	// (0x0005cc50) main_pane_set_t

0xaf3f,	// (0x000581f3) setting_code_pane

0xaf49,	// (0x000581fd) setting_slider_graphic_pane

0xaf49,	// (0x000581fd) setting_slider_pane

0xaf49,	// (0x000581fd) setting_text_pane

0xaf49,	// (0x000581fd) setting_volume_pane

0x4df9,	// (0x000520ad) volume_set_pane

0x7397,	// (0x0005464b) bg_set_opt_pane_cp

0x4e03,	// (0x000520b7) setting_slider_pane_t1

0x4e19,	// (0x000520cd) setting_slider_pane_t2

0x4e33,	// (0x000520e7) setting_slider_pane_t3

0x0002,

0xf57a,	// (0x0005c82e) setting_slider_pane_t

0x4e4b,	// (0x000520ff) slider_set_pane

0x2511,	// (0x0004f7c5) bg_set_opt_pane_cp2

0x73d9,	// (0x0005468d) setting_slider_graphic_pane_g1

0x4e61,	// (0x00052115) setting_slider_graphic_pane_t1

0x4e71,	// (0x00052125) setting_slider_graphic_pane_t2

0x0001,

0xf581,	// (0x0005c835) setting_slider_graphic_pane_t

0x4e81,	// (0x00052135) slider_set_pane_cp

0x2511,	// (0x0004f7c5) input_focus_pane_cp1

0xadd0,	// (0x00058084) list_set_text_pane

0x2507,	// (0x0004f7bb) setting_text_pane_g1

0x2511,	// (0x0004f7c5) input_focus_pane_cp2

0x2507,	// (0x0004f7bb) setting_code_pane_g1

0x73e2,	// (0x00054696) setting_code_pane_t1

0x3fb0,	// (0x00051264) set_text_pane_t1_ParamLimits

0x3fb0,	// (0x00051264) set_text_pane_t1

0x7d31,	// (0x00054fe5) set_opt_bg_pane_g1

0x7d39,	// (0x00054fed) set_opt_bg_pane_g2

0xada8,	// (0x0005805c) set_opt_bg_pane_g3

0x7d49,	// (0x00054ffd) set_opt_bg_pane_g4

0x7d51,	// (0x00055005) set_opt_bg_pane_g5

0x7d59,	// (0x0005500d) set_opt_bg_pane_g6

0xadb2,	// (0x00058066) set_opt_bg_pane_g7

0xadbc,	// (0x00058070) set_opt_bg_pane_g8

0xadc6,	// (0x0005807a) set_opt_bg_pane_g9

0x0008,

0xf989,	// (0x0005cc3d) set_opt_bg_pane_g

0xad9b,	// (0x0005804f) slider_set_pane_g1

0x5fb4,	// (0x00053268) slider_set_pane_g2

0x0006,

0xf97a,	// (0x0005cc2e) slider_set_pane_g

0x5f14,	// (0x000531c8) volume_set_pane_g1

0x5f1e,	// (0x000531d2) volume_set_pane_g2

0x5f28,	// (0x000531dc) volume_set_pane_g3

0x5f32,	// (0x000531e6) volume_set_pane_g4

0x5f3c,	// (0x000531f0) volume_set_pane_g5

0x5f46,	// (0x000531fa) volume_set_pane_g6

0x5f50,	// (0x00053204) volume_set_pane_g7

0x5f5a,	// (0x0005320e) volume_set_pane_g8

0x5f64,	// (0x00053218) volume_set_pane_g9

0x5f6e,	// (0x00053222) volume_set_pane_g10

0x0009,

0xf952,	// (0x0005cc06) volume_set_pane_g

0x73f0,	// (0x000546a4) indicator_pane_ParamLimits

0x73f0,	// (0x000546a4) indicator_pane

0x73fc,	// (0x000546b0) main_idle_pane_g2_ParamLimits

0x73fc,	// (0x000546b0) main_idle_pane_g2

0x7424,	// (0x000546d8) main_pane_idle_g1_ParamLimits

0x7424,	// (0x000546d8) main_pane_idle_g1

0x7432,	// (0x000546e6) popup_clock_digital_analogue_window_ParamLimits

0x7432,	// (0x000546e6) popup_clock_digital_analogue_window

0x7449,	// (0x000546fd) soft_indicator_pane_ParamLimits

0x7449,	// (0x000546fd) soft_indicator_pane

0x7457,	// (0x0005470b) wallpaper_pane_ParamLimits

0x7457,	// (0x0005470b) wallpaper_pane

0x2507,	// (0x0004f7bb) wallpaper_pane_g1

0x746b,	// (0x0005471f) indicator_pane_g1_ParamLimits

0x746b,	// (0x0005471f) indicator_pane_g1

0xb20d,	// (0x000584c1) navi_navi_icon_text_pane_srt_g1

0x7486,	// (0x0005473a) soft_indicator_pane_t1

0x74a0,	// (0x00054754) aid_ps_area_pane

0x74b1,	// (0x00054765) aid_ps_clock_pane

0x74bf,	// (0x00054773) aid_ps_indicator_pane

0x74cb,	// (0x0005477f) indicator_ps_pane_ParamLimits

0x74cb,	// (0x0005477f) indicator_ps_pane

0x74da,	// (0x0005478e) power_save_pane_g1_ParamLimits

0x74da,	// (0x0005478e) power_save_pane_g1

0x74e6,	// (0x0005479a) power_save_pane_g2_ParamLimits

0x74e6,	// (0x0005479a) power_save_pane_g2

0x49f8,	// (0x00051cac) aid_navinavi_width_pane

0x74a0,	// (0x00054754) aid_ps_area_pane_ParamLimits

0x0001,

0xf586,	// (0x0005c83a) power_save_pane_g_ParamLimits

0xf586,	// (0x0005c83a) power_save_pane_g

0x74f4,	// (0x000547a8) power_save_pane_t1_ParamLimits

0x74f4,	// (0x000547a8) power_save_pane_t1

0x74b1,	// (0x00054765) aid_ps_clock_pane_ParamLimits

0x74bf,	// (0x00054773) aid_ps_indicator_pane_ParamLimits

0x7506,	// (0x000547ba) power_save_pane_t4_ParamLimits

0x7506,	// (0x000547ba) power_save_pane_t4

0x0001,

0xf58b,	// (0x0005c83f) power_save_pane_t_ParamLimits

0xf58b,	// (0x0005c83f) power_save_pane_t

0x7530,	// (0x000547e4) power_save_t3_ParamLimits

0x7530,	// (0x000547e4) power_save_t3

0x751b,	// (0x000547cf) power_save_t2_ParamLimits

0x751b,	// (0x000547cf) power_save_t2

0x7545,	// (0x000547f9) indicator_ps_pane_g1

0x754e,	// (0x00054802) ai_gene_pane_ParamLimits

0x754e,	// (0x00054802) ai_gene_pane

0x755a,	// (0x0005480e) ai_links_pane_ParamLimits

0x755a,	// (0x0005480e) ai_links_pane

0x7566,	// (0x0005481a) indicator_pane_cp1_ParamLimits

0x7566,	// (0x0005481a) indicator_pane_cp1

0x7572,	// (0x00054826) main_pane_idle_g1_cp_ParamLimits

0x7572,	// (0x00054826) main_pane_idle_g1_cp

0x757e,	// (0x00054832) popup_ai_links_title_window

0x7587,	// (0x0005483b) soft_indicator_pane_cp1_ParamLimits

0x7587,	// (0x0005483b) soft_indicator_pane_cp1

0xab6e,	// (0x00057e22) ai_links_pane_g1

0xab77,	// (0x00057e2b) grid_ai_links_pane

0xab53,	// (0x00057e07) ai_gene_pane_1

0xab5c,	// (0x00057e10) ai_gene_pane_2

0xab65,	// (0x00057e19) list_highlight_pane_cp4

0xab33,	// (0x00057de7) cell_ai_link_pane_ParamLimits

0xab33,	// (0x00057de7) cell_ai_link_pane

0xab2b,	// (0x00057ddf) cell_ai_link_pane_g1

0x77c9,	// (0x00054a7d) cell_ai_link_pane_g2

0x0001,

0xf92d,	// (0x0005cbe1) cell_ai_link_pane_g

0x2511,	// (0x0004f7c5) grid_highlight_cp2

0x2511,	// (0x0004f7c5) bg_popup_sub_pane_cp1

0x75a1,	// (0x00054855) popup_ai_links_title_window_t1

0xaa77,	// (0x00057d2b) ai_gene_pane_1_g1_ParamLimits

0xaa77,	// (0x00057d2b) ai_gene_pane_1_g1

0xaa83,	// (0x00057d37) ai_gene_pane_1_g2_ParamLimits

0xaa83,	// (0x00057d37) ai_gene_pane_1_g2

0x0001,

0xf923,	// (0x0005cbd7) ai_gene_pane_1_g_ParamLimits

0xf923,	// (0x0005cbd7) ai_gene_pane_1_g

0xaa90,	// (0x00057d44) ai_gene_pane_1_t1_ParamLimits

0xaa90,	// (0x00057d44) ai_gene_pane_1_t1

0xaac4,	// (0x00057d78) grid_ai_soft_ind_pane

0xaa62,	// (0x00057d16) ai_gene_pane_2_t1_ParamLimits

0xaa62,	// (0x00057d16) ai_gene_pane_2_t1

0x75b0,	// (0x00054864) main_pane_empty_t1_ParamLimits

0x75b0,	// (0x00054864) main_pane_empty_t1

0x75c8,	// (0x0005487c) main_pane_empty_t2_ParamLimits

0x75c8,	// (0x0005487c) main_pane_empty_t2

0x75dd,	// (0x00054891) main_pane_empty_t3_ParamLimits

0x75dd,	// (0x00054891) main_pane_empty_t3

0x75ef,	// (0x000548a3) main_pane_empty_t4_ParamLimits

0x75ef,	// (0x000548a3) main_pane_empty_t4

0x7601,	// (0x000548b5) main_pane_empty_t5_ParamLimits

0x7601,	// (0x000548b5) main_pane_empty_t5

0x0004,

0xf590,	// (0x0005c844) main_pane_empty_t_ParamLimits

0xf590,	// (0x0005c844) main_pane_empty_t

0x7d8b,	// (0x0005503f) bg_popup_window_pane_ParamLimits

0x7d8b,	// (0x0005503f) bg_popup_window_pane

0xa7be,	// (0x00057a72) find_popup_pane_cp2_ParamLimits

0xa7be,	// (0x00057a72) find_popup_pane_cp2

0xa7ca,	// (0x00057a7e) heading_pane_ParamLimits

0xa7ca,	// (0x00057a7e) heading_pane

0x2511,	// (0x0004f7c5) bg_popup_sub_pane

0xa738,	// (0x000579ec) bg_popup_window_pane_g1_ParamLimits

0xa738,	// (0x000579ec) bg_popup_window_pane_g1

0xa744,	// (0x000579f8) bg_popup_window_pane_g2_ParamLimits

0xa744,	// (0x000579f8) bg_popup_window_pane_g2

0xa750,	// (0x00057a04) bg_popup_window_pane_g3_ParamLimits

0xa750,	// (0x00057a04) bg_popup_window_pane_g3

0xa75c,	// (0x00057a10) bg_popup_window_pane_g4_ParamLimits

0xa75c,	// (0x00057a10) bg_popup_window_pane_g4

0xa768,	// (0x00057a1c) bg_popup_window_pane_g5_ParamLimits

0xa768,	// (0x00057a1c) bg_popup_window_pane_g5

0xa774,	// (0x00057a28) bg_popup_window_pane_g6_ParamLimits

0xa774,	// (0x00057a28) bg_popup_window_pane_g6

0xa780,	// (0x00057a34) bg_popup_window_pane_g7_ParamLimits

0xa780,	// (0x00057a34) bg_popup_window_pane_g7

0xa78c,	// (0x00057a40) bg_popup_window_pane_g8_ParamLimits

0xa78c,	// (0x00057a40) bg_popup_window_pane_g8

0xa798,	// (0x00057a4c) bg_popup_window_pane_g9_ParamLimits

0xa798,	// (0x00057a4c) bg_popup_window_pane_g9

0xa7a4,	// (0x00057a58) bg_popup_window_pane_g10_ParamLimits

0xa7a4,	// (0x00057a58) bg_popup_window_pane_g10

0x0009,

0xf8eb,	// (0x0005cb9f) bg_popup_window_pane_g_ParamLimits

0xf8eb,	// (0x0005cb9f) bg_popup_window_pane_g

0xa6cd,	// (0x00057981) bg_popup_heading_pane_ParamLimits

0xa6cd,	// (0x00057981) bg_popup_heading_pane

0x6088,	// (0x0005333c) tabs_4_passive_pane_cp_srt_ParamLimits

0x6088,	// (0x0005333c) tabs_4_passive_pane_cp_srt

0x609a,	// (0x0005334e) tabs_4_passive_pane_srt_ParamLimits

0xa6e1,	// (0x00057995) heading_pane_g2

0x609a,	// (0x0005334e) tabs_4_passive_pane_srt

0x8e74,	// (0x00056128) bg_passive_tab_pane_cp3_srt_ParamLimits

0x8e74,	// (0x00056128) bg_passive_tab_pane_cp3_srt

0xa6e9,	// (0x0005799d) heading_pane_t1_ParamLimits

0xa6e9,	// (0x0005799d) heading_pane_t1

0xa700,	// (0x000579b4) heading_pane_t2_ParamLimits

0xa700,	// (0x000579b4) heading_pane_t2

0x0001,

0xf8e6,	// (0x0005cb9a) heading_pane_t_ParamLimits

0xf8e6,	// (0x0005cb9a) heading_pane_t

0xa1f8,	// (0x000574ac) bg_popup_heading_pane_g1

0xa2a7,	// (0x0005755b) bg_popup_heading_pane_g2

0xa2b1,	// (0x00057565) bg_popup_heading_pane_g3

0xa2bb,	// (0x0005756f) bg_popup_heading_pane_g4

0xa2c5,	// (0x00057579) bg_popup_heading_pane_g5

0xa2cf,	// (0x00057583) bg_popup_heading_pane_g6

0xa2d7,	// (0x0005758b) bg_popup_heading_pane_g7

0xa2df,	// (0x00057593) bg_popup_heading_pane_g8

0xa2e9,	// (0x0005759d) bg_popup_heading_pane_g9

0x0008,

0xf8a2,	// (0x0005cb56) bg_popup_heading_pane_g

0x99b0,	// (0x00056c64) bg_popup_sub_pane_g1

0x99c0,	// (0x00056c74) bg_popup_sub_pane_g2

0x99b8,	// (0x00056c6c) bg_popup_sub_pane_g3

0x99d0,	// (0x00056c84) bg_popup_sub_pane_g4

0x99c8,	// (0x00056c7c) bg_popup_sub_pane_g5

0x99d8,	// (0x00056c8c) bg_popup_sub_pane_g6

0x99e0,	// (0x00056c94) bg_popup_sub_pane_g7

0x99f0,	// (0x00056ca4) bg_popup_sub_pane_g8

0x99e8,	// (0x00056c9c) bg_popup_sub_pane_g9

0x0008,

0xf87c,	// (0x0005cb30) bg_popup_sub_pane_g

0x7613,	// (0x000548c7) bg_popup_window_pane_cp5_ParamLimits

0x7613,	// (0x000548c7) bg_popup_window_pane_cp5

0x762f,	// (0x000548e3) popup_note_window_g1_ParamLimits

0x762f,	// (0x000548e3) popup_note_window_g1

0x763b,	// (0x000548ef) popup_note_window_t1_ParamLimits

0x763b,	// (0x000548ef) popup_note_window_t1

0x7651,	// (0x00054905) popup_note_window_t2_ParamLimits

0x7651,	// (0x00054905) popup_note_window_t2

0x7667,	// (0x0005491b) popup_note_window_t3_ParamLimits

0x7667,	// (0x0005491b) popup_note_window_t3

0x767d,	// (0x00054931) popup_note_window_t4_ParamLimits

0x767d,	// (0x00054931) popup_note_window_t4

0x76a5,	// (0x00054959) popup_note_window_t5_ParamLimits

0x76a5,	// (0x00054959) popup_note_window_t5

0x0004,

0xf59b,	// (0x0005c84f) popup_note_window_t_ParamLimits

0xf59b,	// (0x0005c84f) popup_note_window_t

0x76c9,	// (0x0005497d) bg_popup_window_pane_cp6_ParamLimits

0x76c9,	// (0x0005497d) bg_popup_window_pane_cp6

0xa174,	// (0x00057428) popup_note_image_window_g1_ParamLimits

0xa174,	// (0x00057428) popup_note_image_window_g1

0xa180,	// (0x00057434) popup_note_image_window_g2_ParamLimits

0xa180,	// (0x00057434) popup_note_image_window_g2

0x0001,

0xf870,	// (0x0005cb24) popup_note_image_window_g_ParamLimits

0xf870,	// (0x0005cb24) popup_note_image_window_g

0xa199,	// (0x0005744d) popup_note_image_window_t1_ParamLimits

0xa199,	// (0x0005744d) popup_note_image_window_t1

0xa1b2,	// (0x00057466) popup_note_image_window_t2_ParamLimits

0xa1b2,	// (0x00057466) popup_note_image_window_t2

0xa1cb,	// (0x0005747f) popup_note_image_window_t3_ParamLimits

0xa1cb,	// (0x0005747f) popup_note_image_window_t3

0x0002,

0xf875,	// (0x0005cb29) popup_note_image_window_t_ParamLimits

0xf875,	// (0x0005cb29) popup_note_image_window_t

0xa034,	// (0x000572e8) bg_popup_window_pane_cp7_ParamLimits

0xa034,	// (0x000572e8) bg_popup_window_pane_cp7

0xa064,	// (0x00057318) popup_note_wait_window_g1_ParamLimits

0xa064,	// (0x00057318) popup_note_wait_window_g1

0xa070,	// (0x00057324) popup_note_wait_window_g2_ParamLimits

0xa070,	// (0x00057324) popup_note_wait_window_g2

0x0002,

0xf85e,	// (0x0005cb12) popup_note_wait_window_g_ParamLimits

0xf85e,	// (0x0005cb12) popup_note_wait_window_g

0xa088,	// (0x0005733c) popup_note_wait_window_t1_ParamLimits

0xa088,	// (0x0005733c) popup_note_wait_window_t1

0xa0af,	// (0x00057363) popup_note_wait_window_t2_ParamLimits

0xa0af,	// (0x00057363) popup_note_wait_window_t2

0xa0cd,	// (0x00057381) popup_note_wait_window_t3_ParamLimits

0xa0cd,	// (0x00057381) popup_note_wait_window_t3

0xa0e0,	// (0x00057394) popup_note_wait_window_t4_ParamLimits

0xa0e0,	// (0x00057394) popup_note_wait_window_t4

0x0004,

0xf865,	// (0x0005cb19) popup_note_wait_window_t_ParamLimits

0xf865,	// (0x0005cb19) popup_note_wait_window_t

0xa105,	// (0x000573b9) wait_bar_pane_ParamLimits

0xa105,	// (0x000573b9) wait_bar_pane

0x2511,	// (0x0004f7c5) wait_anim_pane

0x2511,	// (0x0004f7c5) wait_border_pane

0x2507,	// (0x0004f7bb) wait_anim_pane_g1

0x2507,	// (0x0004f7bb) wait_anim_pane_g2

0x0001,

0xf724,	// (0x0005c9d8) wait_anim_pane_g

0x9fd8,	// (0x0005728c) wait_border_pane_g1

0x9fe3,	// (0x00057297) wait_border_pane_g2

0x9fec,	// (0x000572a0) wait_border_pane_g3

0x0002,

0xf857,	// (0x0005cb0b) wait_border_pane_g

0x9e42,	// (0x000570f6) bg_popup_window_pane_cp16_ParamLimits

0x9e42,	// (0x000570f6) bg_popup_window_pane_cp16

0x9f42,	// (0x000571f6) indicator_popup_pane_cp4_ParamLimits

0x9f42,	// (0x000571f6) indicator_popup_pane_cp4

0x9f56,	// (0x0005720a) popup_query_data_window_t1_ParamLimits

0x9f56,	// (0x0005720a) popup_query_data_window_t1

0x9f68,	// (0x0005721c) popup_query_data_window_t2_ParamLimits

0x9f68,	// (0x0005721c) popup_query_data_window_t2

0x9f81,	// (0x00057235) popup_query_data_window_t3_ParamLimits

0x9f81,	// (0x00057235) popup_query_data_window_t3

0x0002,

0xf850,	// (0x0005cb04) popup_query_data_window_t_ParamLimits

0xf850,	// (0x0005cb04) popup_query_data_window_t

0x9f9b,	// (0x0005724f) query_popup_data_pane_ParamLimits

0x9f9b,	// (0x0005724f) query_popup_data_pane

0x9faf,	// (0x00057263) query_popup_data_pane_cp1_ParamLimits

0x9faf,	// (0x00057263) query_popup_data_pane_cp1

0x9e42,	// (0x000570f6) bg_popup_window_pane_cp10_ParamLimits

0x9e42,	// (0x000570f6) bg_popup_window_pane_cp10

0x9e74,	// (0x00057128) indicator_popup_pane_ParamLimits

0x9e74,	// (0x00057128) indicator_popup_pane

0x9e96,	// (0x0005714a) popup_query_code_window_t1_ParamLimits

0x9e96,	// (0x0005714a) popup_query_code_window_t1

0x9eb0,	// (0x00057164) popup_query_code_window_t2_ParamLimits

0x9eb0,	// (0x00057164) popup_query_code_window_t2

0x9ef9,	// (0x000571ad) popup_query_code_window_t3_ParamLimits

0x9ef9,	// (0x000571ad) popup_query_code_window_t3

0x0002,

0xf849,	// (0x0005cafd) popup_query_code_window_t_ParamLimits

0xf849,	// (0x0005cafd) popup_query_code_window_t

0x9f28,	// (0x000571dc) query_popup_pane_ParamLimits

0x9f28,	// (0x000571dc) query_popup_pane

0x76c9,	// (0x0005497d) bg_popup_window_pane_cp15_ParamLimits

0x76c9,	// (0x0005497d) bg_popup_window_pane_cp15

0x76e9,	// (0x0005499d) indicator_popup_pane_cp1_ParamLimits

0x76e9,	// (0x0005499d) indicator_popup_pane_cp1

0x76fc,	// (0x000549b0) indicator_popup_pane_cp2_ParamLimits

0x76fc,	// (0x000549b0) indicator_popup_pane_cp2

0x7717,	// (0x000549cb) popup_query_data_code_window_g1_ParamLimits

0x7717,	// (0x000549cb) popup_query_data_code_window_g1

0x772a,	// (0x000549de) popup_query_data_code_window_t1_ParamLimits

0x772a,	// (0x000549de) popup_query_data_code_window_t1

0x773c,	// (0x000549f0) popup_query_data_code_window_t2_ParamLimits

0x773c,	// (0x000549f0) popup_query_data_code_window_t2

0x774e,	// (0x00054a02) popup_query_data_code_window_t3_ParamLimits

0x774e,	// (0x00054a02) popup_query_data_code_window_t3

0x7764,	// (0x00054a18) popup_query_data_code_window_t4_ParamLimits

0x7764,	// (0x00054a18) popup_query_data_code_window_t4

0x0003,

0xf5a6,	// (0x0005c85a) popup_query_data_code_window_t_ParamLimits

0xf5a6,	// (0x0005c85a) popup_query_data_code_window_t

0x5c5c,	// (0x00052f10) list_single_midp_graphic_pane_g3

0x777e,	// (0x00054a32) query_popup_data_pane_cp2_ParamLimits

0x7791,	// (0x00054a45) query_popup_pane_cp2_ParamLimits

0x7791,	// (0x00054a45) query_popup_pane_cp2

0x2511,	// (0x0004f7c5) bg_popup_window_pane_cp11

0x9e3a,	// (0x000570ee) heading_pane_cp5

0x7881,	// (0x00054b35) listscroll_popup_info_pane

0x2511,	// (0x0004f7c5) input_focus_pane_cp3

0x77ac,	// (0x00054a60) query_popup_pane_t1

0x77ba,	// (0x00054a6e) list_popup_info_pane_ParamLimits

0x77ba,	// (0x00054a6e) list_popup_info_pane

0x77c9,	// (0x00054a7d) listscroll_popup_info_pane_g1

0x77d1,	// (0x00054a85) scroll_pane_cp7

0x77db,	// (0x00054a8f) popup_info_list_pane_t1_ParamLimits

0x77db,	// (0x00054a8f) popup_info_list_pane_t1

0x77f5,	// (0x00054aa9) popup_info_list_pane_t2_ParamLimits

0x77f5,	// (0x00054aa9) popup_info_list_pane_t2

0x0001,

0xf5af,	// (0x0005c863) popup_info_list_pane_t_ParamLimits

0xf5af,	// (0x0005c863) popup_info_list_pane_t

0x2511,	// (0x0004f7c5) bg_popup_window_pane_cp12

0xb227,	// (0x000584db) find_popup_pane

0x7397,	// (0x0005464b) bg_popup_window_pane_cp3

0x780f,	// (0x00054ac3) heading_pane_cp3

0x781b,	// (0x00054acf) listscroll_popup_graphic_pane

0x2511,	// (0x0004f7c5) bg_popup_window_pane_cp4

0x7877,	// (0x00054b2b) heading_pane_cp4

0x7881,	// (0x00054b35) listscroll_popup_colour_pane

0x7889,	// (0x00054b3d) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x7889,	// (0x00054b3d) cell_large_graphic_colour_none_popup_pane

0x789d,	// (0x00054b51) grid_large_graphic_colour_popup_pane_ParamLimits

0x789d,	// (0x00054b51) grid_large_graphic_colour_popup_pane

0x78c9,	// (0x00054b7d) listscroll_popup_colour_pane_g1_ParamLimits

0x78c9,	// (0x00054b7d) listscroll_popup_colour_pane_g1

0x78e0,	// (0x00054b94) listscroll_popup_colour_pane_g2_ParamLimits

0x78e0,	// (0x00054b94) listscroll_popup_colour_pane_g2

0x78f7,	// (0x00054bab) listscroll_popup_colour_pane_g3_ParamLimits

0x78f7,	// (0x00054bab) listscroll_popup_colour_pane_g3

0x7907,	// (0x00054bbb) listscroll_popup_colour_pane_g4_ParamLimits

0x7907,	// (0x00054bbb) listscroll_popup_colour_pane_g4

0x0003,

0xf5b4,	// (0x0005c868) listscroll_popup_colour_pane_g_ParamLimits

0xf5b4,	// (0x0005c868) listscroll_popup_colour_pane_g

0x791b,	// (0x00054bcf) scroll_pane_cp6_ParamLimits

0x791b,	// (0x00054bcf) scroll_pane_cp6

0x792d,	// (0x00054be1) cell_large_graphic_colour_popup_pane_ParamLimits

0x792d,	// (0x00054be1) cell_large_graphic_colour_popup_pane

0x7952,	// (0x00054c06) cell_large_graphic_colour_none_popup_pane_t1

0x2511,	// (0x0004f7c5) grid_highlight_pane_cp5

0x7961,	// (0x00054c15) cell_large_graphic_colour_popup_pane_g1

0x7969,	// (0x00054c1d) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5bd,	// (0x0005c871) cell_large_graphic_colour_popup_pane_g

0x7971,	// (0x00054c25) cell_large_graphic_colour_popup_pane_g2_copy1

0x797a,	// (0x00054c2e) grid_highlight_pane_cp4

0x7982,	// (0x00054c36) bg_popup_window_pane_cp8_ParamLimits

0x7982,	// (0x00054c36) bg_popup_window_pane_cp8

0x799d,	// (0x00054c51) popup_snote_single_text_window_g1_ParamLimits

0x799d,	// (0x00054c51) popup_snote_single_text_window_g1

0x79af,	// (0x00054c63) popup_snote_single_text_window_t1_ParamLimits

0x79af,	// (0x00054c63) popup_snote_single_text_window_t1

0x79c2,	// (0x00054c76) popup_snote_single_text_window_t2_ParamLimits

0x79c2,	// (0x00054c76) popup_snote_single_text_window_t2

0x79d5,	// (0x00054c89) popup_snote_single_text_window_t3_ParamLimits

0x79d5,	// (0x00054c89) popup_snote_single_text_window_t3

0x7a0e,	// (0x00054cc2) popup_snote_single_text_window_t4_ParamLimits

0x7a0e,	// (0x00054cc2) popup_snote_single_text_window_t4

0x7a42,	// (0x00054cf6) popup_snote_single_text_window_t5_ParamLimits

0x7a42,	// (0x00054cf6) popup_snote_single_text_window_t5

0x0004,

0xf5c2,	// (0x0005c876) popup_snote_single_text_window_t_ParamLimits

0xf5c2,	// (0x0005c876) popup_snote_single_text_window_t

0x7a71,	// (0x00054d25) bg_popup_window_pane_cp9_ParamLimits

0x7a71,	// (0x00054d25) bg_popup_window_pane_cp9

0x799d,	// (0x00054c51) popup_snote_single_graphic_window_g1_ParamLimits

0x799d,	// (0x00054c51) popup_snote_single_graphic_window_g1

0x7a7f,	// (0x00054d33) popup_snote_single_graphic_window_g2_ParamLimits

0x7a7f,	// (0x00054d33) popup_snote_single_graphic_window_g2

0x0001,

0xf5cd,	// (0x0005c881) popup_snote_single_graphic_window_g_ParamLimits

0xf5cd,	// (0x0005c881) popup_snote_single_graphic_window_g

0x7a8b,	// (0x00054d3f) popup_snote_single_graphic_window_t1_ParamLimits

0x7a8b,	// (0x00054d3f) popup_snote_single_graphic_window_t1

0x7a9e,	// (0x00054d52) popup_snote_single_graphic_window_t2_ParamLimits

0x7a9e,	// (0x00054d52) popup_snote_single_graphic_window_t2

0x7ab1,	// (0x00054d65) popup_snote_single_graphic_window_t3_ParamLimits

0x7ab1,	// (0x00054d65) popup_snote_single_graphic_window_t3

0x7aea,	// (0x00054d9e) popup_snote_single_graphic_window_t4_ParamLimits

0x7aea,	// (0x00054d9e) popup_snote_single_graphic_window_t4

0x7b1e,	// (0x00054dd2) popup_snote_single_graphic_window_t5_ParamLimits

0x7b1e,	// (0x00054dd2) popup_snote_single_graphic_window_t5

0x0004,

0xf5d2,	// (0x0005c886) popup_snote_single_graphic_window_t_ParamLimits

0xf5d2,	// (0x0005c886) popup_snote_single_graphic_window_t

0xb165,	// (0x00058419) grid_graphic_popup_pane_ParamLimits

0xb165,	// (0x00058419) grid_graphic_popup_pane

0xb193,	// (0x00058447) listscroll_popup_graphic_pane_g1_ParamLimits

0xb193,	// (0x00058447) listscroll_popup_graphic_pane_g1

0xb1a7,	// (0x0005845b) listscroll_popup_graphic_pane_g2_ParamLimits

0xb1a7,	// (0x0005845b) listscroll_popup_graphic_pane_g2

0x0001,

0xf9c6,	// (0x0005cc7a) listscroll_popup_graphic_pane_g_ParamLimits

0xf9c6,	// (0x0005cc7a) listscroll_popup_graphic_pane_g

0xb1bb,	// (0x0005846f) scroll_pane_cp5

0xb10d,	// (0x000583c1) cell_graphic_popup_pane_ParamLimits

0xb10d,	// (0x000583c1) cell_graphic_popup_pane

0xb0ee,	// (0x000583a2) cell_graphic_popup_pane_g1

0xb0f6,	// (0x000583aa) cell_graphic_popup_pane_g2

0x7971,	// (0x00054c25) cell_graphic_popup_pane_g3

0x0002,

0xf9bf,	// (0x0005cc73) cell_graphic_popup_pane_g

0xb0ff,	// (0x000583b3) cell_graphic_popup_pane_t2

0x797a,	// (0x00054c2e) grid_highlight_pane_cp3

0x7b5f,	// (0x00054e13) list_gen_pane_ParamLimits

0x7b5f,	// (0x00054e13) list_gen_pane

0x7b91,	// (0x00054e45) scroll_pane

0xb050,	// (0x00058304) bg_list_pane_g1_ParamLimits

0xb050,	// (0x00058304) bg_list_pane_g1

0xb06b,	// (0x0005831f) bg_list_pane_g2_ParamLimits

0xb06b,	// (0x0005831f) bg_list_pane_g2

0xb07e,	// (0x00058332) bg_list_pane_g3_ParamLimits

0xb07e,	// (0x00058332) bg_list_pane_g3

0xb090,	// (0x00058344) bg_list_pane_g4_ParamLimits

0xb090,	// (0x00058344) bg_list_pane_g4

0xb0a2,	// (0x00058356) bg_list_pane_g5_ParamLimits

0xb0a2,	// (0x00058356) bg_list_pane_g5

0x0004,

0xf9b4,	// (0x0005cc68) bg_list_pane_g_ParamLimits

0xf9b4,	// (0x0005cc68) bg_list_pane_g

0xafcd,	// (0x00058281) list_double2_graphic_large_graphic_pane_ParamLimits

0xafcd,	// (0x00058281) list_double2_graphic_large_graphic_pane

0xafcd,	// (0x00058281) list_double2_graphic_pane_ParamLimits

0xafcd,	// (0x00058281) list_double2_graphic_pane

0xafcd,	// (0x00058281) list_double2_large_graphic_pane_ParamLimits

0xafcd,	// (0x00058281) list_double2_large_graphic_pane

0xafcd,	// (0x00058281) list_double2_pane_ParamLimits

0xafcd,	// (0x00058281) list_double2_pane

0xafcd,	// (0x00058281) list_double_graphic_heading_pane_ParamLimits

0xafcd,	// (0x00058281) list_double_graphic_heading_pane

0xafcd,	// (0x00058281) list_double_graphic_pane_ParamLimits

0xafcd,	// (0x00058281) list_double_graphic_pane

0xafcd,	// (0x00058281) list_double_heading_pane_ParamLimits

0xafcd,	// (0x00058281) list_double_heading_pane

0xafcd,	// (0x00058281) list_double_large_graphic_pane_ParamLimits

0xafcd,	// (0x00058281) list_double_large_graphic_pane

0xafcd,	// (0x00058281) list_double_number_pane_ParamLimits

0xafcd,	// (0x00058281) list_double_number_pane

0xafcd,	// (0x00058281) list_double_pane_ParamLimits

0xafcd,	// (0x00058281) list_double_pane

0xafcd,	// (0x00058281) list_double_time_pane_ParamLimits

0xafcd,	// (0x00058281) list_double_time_pane

0xafcd,	// (0x00058281) list_setting_number_pane_ParamLimits

0xafcd,	// (0x00058281) list_setting_number_pane

0xafcd,	// (0x00058281) list_setting_pane_ParamLimits

0xafcd,	// (0x00058281) list_setting_pane

0xb00c,	// (0x000582c0) list_single_2graphic_pane_ParamLimits

0xb00c,	// (0x000582c0) list_single_2graphic_pane

0xb00c,	// (0x000582c0) list_single_graphic_heading_pane_ParamLimits

0xb00c,	// (0x000582c0) list_single_graphic_heading_pane

0xb00c,	// (0x000582c0) list_single_graphic_pane_ParamLimits

0xb00c,	// (0x000582c0) list_single_graphic_pane

0xb00c,	// (0x000582c0) list_single_heading_pane_ParamLimits

0xb00c,	// (0x000582c0) list_single_heading_pane

0x801c,	// (0x000552d0) list_single_large_graphic_pane_ParamLimits

0x801c,	// (0x000552d0) list_single_large_graphic_pane

0xb00c,	// (0x000582c0) list_single_number_heading_pane_ParamLimits

0xb00c,	// (0x000582c0) list_single_number_heading_pane

0xb00c,	// (0x000582c0) list_single_number_pane_ParamLimits

0xb00c,	// (0x000582c0) list_single_number_pane

0xb00c,	// (0x000582c0) list_single_pane_ParamLimits

0xb00c,	// (0x000582c0) list_single_pane

0x2511,	// (0x0004f7c5) list_highlight_pane_cp1

0x7bc5,	// (0x00054e79) list_single_pane_g1_ParamLimits

0x7bc5,	// (0x00054e79) list_single_pane_g1

0x7bd1,	// (0x00054e85) list_single_pane_g2_ParamLimits

0x7bd1,	// (0x00054e85) list_single_pane_g2

0x0001,

0xf5ee,	// (0x0005c8a2) list_single_pane_g_ParamLimits

0xf5ee,	// (0x0005c8a2) list_single_pane_g

0x604e,	// (0x00053302) list_single_pane_t1_ParamLimits

0x604e,	// (0x00053302) list_single_pane_t1

0x7bc5,	// (0x00054e79) list_single_number_pane_g1_ParamLimits

0x7bc5,	// (0x00054e79) list_single_number_pane_g1

0x7bd1,	// (0x00054e85) list_single_number_pane_g2_ParamLimits

0x7bd1,	// (0x00054e85) list_single_number_pane_g2

0x0001,

0xf5ee,	// (0x0005c8a2) list_single_number_pane_g_ParamLimits

0xf5ee,	// (0x0005c8a2) list_single_number_pane_g

0x5f78,	// (0x0005322c) list_single_number_pane_t1_ParamLimits

0x5f78,	// (0x0005322c) list_single_number_pane_t1

0x5f8e,	// (0x00053242) list_single_number_pane_t2_ParamLimits

0x5f8e,	// (0x00053242) list_single_number_pane_t2

0x0001,

0xf975,	// (0x0005cc29) list_single_number_pane_t_ParamLimits

0xf975,	// (0x0005cc29) list_single_number_pane_t

0x4e89,	// (0x0005213d) list_single_graphic_pane_g1_ParamLimits

0x4e89,	// (0x0005213d) list_single_graphic_pane_g1

0x7bc5,	// (0x00054e79) list_single_graphic_pane_g2_ParamLimits

0x7bc5,	// (0x00054e79) list_single_graphic_pane_g2

0x7bd1,	// (0x00054e85) list_single_graphic_pane_g3_ParamLimits

0x7bd1,	// (0x00054e85) list_single_graphic_pane_g3

0x0002,

0xf5dd,	// (0x0005c891) list_single_graphic_pane_g_ParamLimits

0xf5dd,	// (0x0005c891) list_single_graphic_pane_g

0x3fc9,	// (0x0005127d) list_single_graphic_pane_t1_ParamLimits

0x3fc9,	// (0x0005127d) list_single_graphic_pane_t1

0x4e95,	// (0x00052149) list_single_heading_pane_g1_ParamLimits

0x4e95,	// (0x00052149) list_single_heading_pane_g1

0x7bd1,	// (0x00054e85) list_single_heading_pane_g2_ParamLimits

0x7bd1,	// (0x00054e85) list_single_heading_pane_g2

0x0001,

0xf5e4,	// (0x0005c898) list_single_heading_pane_g_ParamLimits

0xf5e4,	// (0x0005c898) list_single_heading_pane_g

0x4ea8,	// (0x0005215c) list_single_heading_pane_t1_ParamLimits

0x4ea8,	// (0x0005215c) list_single_heading_pane_t1

0x7bdd,	// (0x00054e91) list_single_heading_pane_t2_ParamLimits

0x7bdd,	// (0x00054e91) list_single_heading_pane_t2

0x0001,

0xf5e9,	// (0x0005c89d) list_single_heading_pane_t_ParamLimits

0xf5e9,	// (0x0005c89d) list_single_heading_pane_t

0x7bc5,	// (0x00054e79) list_single_number_heading_pane_g1_ParamLimits

0x7bc5,	// (0x00054e79) list_single_number_heading_pane_g1

0x7bd1,	// (0x00054e85) list_single_number_heading_pane_g2_ParamLimits

0x7bd1,	// (0x00054e85) list_single_number_heading_pane_g2

0x0001,

0xf5ee,	// (0x0005c8a2) list_single_number_heading_pane_g_ParamLimits

0xf5ee,	// (0x0005c8a2) list_single_number_heading_pane_g

0x4ebe,	// (0x00052172) list_single_number_heading_pane_t1_ParamLimits

0x4ebe,	// (0x00052172) list_single_number_heading_pane_t1

0x4ed4,	// (0x00052188) list_single_number_heading_pane_t2_ParamLimits

0x4ed4,	// (0x00052188) list_single_number_heading_pane_t2

0x4ee6,	// (0x0005219a) list_single_number_heading_pane_t3_ParamLimits

0x4ee6,	// (0x0005219a) list_single_number_heading_pane_t3

0x0002,

0xf5f3,	// (0x0005c8a7) list_single_number_heading_pane_t_ParamLimits

0xf5f3,	// (0x0005c8a7) list_single_number_heading_pane_t

0x4ef8,	// (0x000521ac) list_single_graphic_heading_pane_g1_ParamLimits

0x4ef8,	// (0x000521ac) list_single_graphic_heading_pane_g1

0x7bef,	// (0x00054ea3) list_single_graphic_heading_pane_g4_ParamLimits

0x7bef,	// (0x00054ea3) list_single_graphic_heading_pane_g4

0x7bd1,	// (0x00054e85) list_single_graphic_heading_pane_g5_ParamLimits

0x7bd1,	// (0x00054e85) list_single_graphic_heading_pane_g5

0x0002,

0xf5fa,	// (0x0005c8ae) list_single_graphic_heading_pane_g_ParamLimits

0xf5fa,	// (0x0005c8ae) list_single_graphic_heading_pane_g

0x4ebe,	// (0x00052172) list_single_graphic_heading_pane_t1_ParamLimits

0x4ebe,	// (0x00052172) list_single_graphic_heading_pane_t1

0x4f10,	// (0x000521c4) list_single_graphic_heading_pane_t2_ParamLimits

0x4f10,	// (0x000521c4) list_single_graphic_heading_pane_t2

0x0001,

0xf601,	// (0x0005c8b5) list_single_graphic_heading_pane_t_ParamLimits

0xf601,	// (0x0005c8b5) list_single_graphic_heading_pane_t

0x7c00,	// (0x00054eb4) list_single_large_graphic_pane_g1_ParamLimits

0x7c00,	// (0x00054eb4) list_single_large_graphic_pane_g1

0x7c0c,	// (0x00054ec0) list_single_large_graphic_pane_g2_ParamLimits

0x7c0c,	// (0x00054ec0) list_single_large_graphic_pane_g2

0x7c18,	// (0x00054ecc) list_single_large_graphic_pane_g3_ParamLimits

0x7c18,	// (0x00054ecc) list_single_large_graphic_pane_g3

0x0002,

0xf606,	// (0x0005c8ba) list_single_large_graphic_pane_g_ParamLimits

0xf606,	// (0x0005c8ba) list_single_large_graphic_pane_g

0x9fe3,	// (0x00057297) wait_border_pane_g2_copy1

0x7c24,	// (0x00054ed8) list_single_large_graphic_pane_g4_cp2

0x4f28,	// (0x000521dc) list_single_large_graphic_pane_t1_ParamLimits

0x4f28,	// (0x000521dc) list_single_large_graphic_pane_t1

0x7c2c,	// (0x00054ee0) list_double_pane_g1_ParamLimits

0x7c2c,	// (0x00054ee0) list_double_pane_g1

0x7c38,	// (0x00054eec) list_double_pane_g2_ParamLimits

0x7c38,	// (0x00054eec) list_double_pane_g2

0x0001,

0xf60d,	// (0x0005c8c1) list_double_pane_g_ParamLimits

0xf60d,	// (0x0005c8c1) list_double_pane_g

0x4f3e,	// (0x000521f2) list_double_pane_t1_ParamLimits

0x4f3e,	// (0x000521f2) list_double_pane_t1

0x4f54,	// (0x00052208) list_double_pane_t2_ParamLimits

0x4f54,	// (0x00052208) list_double_pane_t2

0x0001,

0xf612,	// (0x0005c8c6) list_double_pane_t_ParamLimits

0xf612,	// (0x0005c8c6) list_double_pane_t

0x4f66,	// (0x0005221a) list_double2_pane_g1_ParamLimits

0x4f66,	// (0x0005221a) list_double2_pane_g1

0x4f77,	// (0x0005222b) list_double2_pane_g2_ParamLimits

0x4f77,	// (0x0005222b) list_double2_pane_g2

0x0001,

0xf617,	// (0x0005c8cb) list_double2_pane_g_ParamLimits

0xf617,	// (0x0005c8cb) list_double2_pane_g

0x4f83,	// (0x00052237) list_double2_pane_t1_ParamLimits

0x4f83,	// (0x00052237) list_double2_pane_t1

0x4f99,	// (0x0005224d) list_double2_pane_t2_ParamLimits

0x4f99,	// (0x0005224d) list_double2_pane_t2

0x0001,

0xf61c,	// (0x0005c8d0) list_double2_pane_t_ParamLimits

0xf61c,	// (0x0005c8d0) list_double2_pane_t

0x7c2c,	// (0x00054ee0) list_double_number_pane_g1_ParamLimits

0x7c2c,	// (0x00054ee0) list_double_number_pane_g1

0x7c38,	// (0x00054eec) list_double_number_pane_g2_ParamLimits

0x7c38,	// (0x00054eec) list_double_number_pane_g2

0x0001,

0xf60d,	// (0x0005c8c1) list_double_number_pane_g_ParamLimits

0xf60d,	// (0x0005c8c1) list_double_number_pane_g

0x4fab,	// (0x0005225f) list_double_number_pane_t1_ParamLimits

0x4fab,	// (0x0005225f) list_double_number_pane_t1

0x4fbd,	// (0x00052271) list_double_number_pane_t2_ParamLimits

0x4fbd,	// (0x00052271) list_double_number_pane_t2

0x4fd3,	// (0x00052287) list_double_number_pane_t3_ParamLimits

0x4fd3,	// (0x00052287) list_double_number_pane_t3

0x0002,

0xf621,	// (0x0005c8d5) list_double_number_pane_t_ParamLimits

0xf621,	// (0x0005c8d5) list_double_number_pane_t

0x4fe5,	// (0x00052299) list_double_graphic_pane_g1_ParamLimits

0x4fe5,	// (0x00052299) list_double_graphic_pane_g1

0x4ff1,	// (0x000522a5) list_double_graphic_pane_g2_ParamLimits

0x4ff1,	// (0x000522a5) list_double_graphic_pane_g2

0x5000,	// (0x000522b4) list_double_graphic_pane_g3_ParamLimits

0x5000,	// (0x000522b4) list_double_graphic_pane_g3

0x0003,

0xf628,	// (0x0005c8dc) list_double_graphic_pane_g_ParamLimits

0xf628,	// (0x0005c8dc) list_double_graphic_pane_g

0x5018,	// (0x000522cc) list_double_graphic_pane_t1_ParamLimits

0x5018,	// (0x000522cc) list_double_graphic_pane_t1

0x502e,	// (0x000522e2) list_double_graphic_pane_t2_ParamLimits

0x502e,	// (0x000522e2) list_double_graphic_pane_t2

0x0001,

0xf631,	// (0x0005c8e5) list_double_graphic_pane_t_ParamLimits

0xf631,	// (0x0005c8e5) list_double_graphic_pane_t

0x5040,	// (0x000522f4) list_double2_graphic_pane_g1_ParamLimits

0x5040,	// (0x000522f4) list_double2_graphic_pane_g1

0x7c44,	// (0x00054ef8) list_double2_graphic_pane_g2_ParamLimits

0x7c44,	// (0x00054ef8) list_double2_graphic_pane_g2

0x504c,	// (0x00052300) list_double2_graphic_pane_g3_ParamLimits

0x504c,	// (0x00052300) list_double2_graphic_pane_g3

0x0002,

0xf636,	// (0x0005c8ea) list_double2_graphic_pane_g_ParamLimits

0xf636,	// (0x0005c8ea) list_double2_graphic_pane_g

0x5058,	// (0x0005230c) list_double2_graphic_pane_t1_ParamLimits

0x5058,	// (0x0005230c) list_double2_graphic_pane_t1

0x506e,	// (0x00052322) list_double2_graphic_pane_t2_ParamLimits

0x506e,	// (0x00052322) list_double2_graphic_pane_t2

0x0001,

0xf63d,	// (0x0005c8f1) list_double2_graphic_pane_t_ParamLimits

0xf63d,	// (0x0005c8f1) list_double2_graphic_pane_t

0x5080,	// (0x00052334) list_double_large_graphic_pane_g1_ParamLimits

0x5080,	// (0x00052334) list_double_large_graphic_pane_g1

0x50ab,	// (0x0005235f) list_double_large_graphic_pane_g2_ParamLimits

0x50ab,	// (0x0005235f) list_double_large_graphic_pane_g2

0x7c38,	// (0x00054eec) list_double_large_graphic_pane_g3_ParamLimits

0x7c38,	// (0x00054eec) list_double_large_graphic_pane_g3

0x50c1,	// (0x00052375) list_double_large_graphic_pane_g4_ParamLimits

0x50c1,	// (0x00052375) list_double_large_graphic_pane_g4

0x0004,

0xf642,	// (0x0005c8f6) list_double_large_graphic_pane_g_ParamLimits

0xf642,	// (0x0005c8f6) list_double_large_graphic_pane_g

0x50d4,	// (0x00052388) list_double_large_graphic_pane_t1_ParamLimits

0x50d4,	// (0x00052388) list_double_large_graphic_pane_t1

0x50ed,	// (0x000523a1) list_double_large_graphic_pane_t2_ParamLimits

0x50ed,	// (0x000523a1) list_double_large_graphic_pane_t2

0x0001,

0xf64d,	// (0x0005c901) list_double_large_graphic_pane_t_ParamLimits

0xf64d,	// (0x0005c901) list_double_large_graphic_pane_t

0x7c65,	// (0x00054f19) list_double2_large_graphic_pane_g1_ParamLimits

0x7c65,	// (0x00054f19) list_double2_large_graphic_pane_g1

0x50ff,	// (0x000523b3) list_double2_large_graphic_pane_g2_ParamLimits

0x50ff,	// (0x000523b3) list_double2_large_graphic_pane_g2

0x504c,	// (0x00052300) list_double2_large_graphic_pane_g3_ParamLimits

0x504c,	// (0x00052300) list_double2_large_graphic_pane_g3

0x0002,

0xf652,	// (0x0005c906) list_double2_large_graphic_pane_g_ParamLimits

0xf652,	// (0x0005c906) list_double2_large_graphic_pane_g

0x5110,	// (0x000523c4) list_double2_large_graphic_pane_t1_ParamLimits

0x5110,	// (0x000523c4) list_double2_large_graphic_pane_t1

0x5126,	// (0x000523da) list_double2_large_graphic_pane_t2_ParamLimits

0x5126,	// (0x000523da) list_double2_large_graphic_pane_t2

0x0001,

0xf659,	// (0x0005c90d) list_double2_large_graphic_pane_t_ParamLimits

0xf659,	// (0x0005c90d) list_double2_large_graphic_pane_t

0x5138,	// (0x000523ec) list_double_heading_pane_g1_ParamLimits

0x5138,	// (0x000523ec) list_double_heading_pane_g1

0x5149,	// (0x000523fd) list_double_heading_pane_g2_ParamLimits

0x5149,	// (0x000523fd) list_double_heading_pane_g2

0x0001,

0xf65e,	// (0x0005c912) list_double_heading_pane_g_ParamLimits

0xf65e,	// (0x0005c912) list_double_heading_pane_g

0x5155,	// (0x00052409) list_double_heading_pane_t1_ParamLimits

0x5155,	// (0x00052409) list_double_heading_pane_t1

0x516b,	// (0x0005241f) list_double_heading_pane_t2_ParamLimits

0x516b,	// (0x0005241f) list_double_heading_pane_t2

0x0001,

0xf663,	// (0x0005c917) list_double_heading_pane_t_ParamLimits

0xf663,	// (0x0005c917) list_double_heading_pane_t

0x517d,	// (0x00052431) list_double_graphic_heading_pane_g1_ParamLimits

0x517d,	// (0x00052431) list_double_graphic_heading_pane_g1

0x5138,	// (0x000523ec) list_double_graphic_heading_pane_g2_ParamLimits

0x5138,	// (0x000523ec) list_double_graphic_heading_pane_g2

0x5149,	// (0x000523fd) list_double_graphic_heading_pane_g3_ParamLimits

0x5149,	// (0x000523fd) list_double_graphic_heading_pane_g3

0x0002,

0xf668,	// (0x0005c91c) list_double_graphic_heading_pane_g_ParamLimits

0xf668,	// (0x0005c91c) list_double_graphic_heading_pane_g

0x5189,	// (0x0005243d) list_double_graphic_heading_pane_t1_ParamLimits

0x5189,	// (0x0005243d) list_double_graphic_heading_pane_t1

0x519f,	// (0x00052453) list_double_graphic_heading_pane_t2_ParamLimits

0x519f,	// (0x00052453) list_double_graphic_heading_pane_t2

0x0001,

0xf66f,	// (0x0005c923) list_double_graphic_heading_pane_t_ParamLimits

0xf66f,	// (0x0005c923) list_double_graphic_heading_pane_t

0x51b1,	// (0x00052465) list_double_time_pane_g1_ParamLimits

0x51b1,	// (0x00052465) list_double_time_pane_g1

0x51c2,	// (0x00052476) list_double_time_pane_g2_ParamLimits

0x51c2,	// (0x00052476) list_double_time_pane_g2

0x0001,

0xf674,	// (0x0005c928) list_double_time_pane_g_ParamLimits

0xf674,	// (0x0005c928) list_double_time_pane_g

0x51ce,	// (0x00052482) list_double_time_pane_t1_ParamLimits

0x51ce,	// (0x00052482) list_double_time_pane_t1

0x51e4,	// (0x00052498) list_double_time_pane_t2_ParamLimits

0x51e4,	// (0x00052498) list_double_time_pane_t2

0x51f6,	// (0x000524aa) list_double_time_pane_t3_ParamLimits

0x51f6,	// (0x000524aa) list_double_time_pane_t3

0x5208,	// (0x000524bc) list_double_time_pane_t4_ParamLimits

0x5208,	// (0x000524bc) list_double_time_pane_t4

0x0003,

0xf679,	// (0x0005c92d) list_double_time_pane_t_ParamLimits

0xf679,	// (0x0005c92d) list_double_time_pane_t

0x521a,	// (0x000524ce) list_setting_pane_g1_ParamLimits

0x521a,	// (0x000524ce) list_setting_pane_g1

0x5226,	// (0x000524da) list_setting_pane_g2_ParamLimits

0x5226,	// (0x000524da) list_setting_pane_g2

0x0001,

0xf682,	// (0x0005c936) list_setting_pane_g_ParamLimits

0xf682,	// (0x0005c936) list_setting_pane_g

0x5232,	// (0x000524e6) list_setting_pane_t1_ParamLimits

0x5232,	// (0x000524e6) list_setting_pane_t1

0x524c,	// (0x00052500) list_setting_pane_t2_ParamLimits

0x524c,	// (0x00052500) list_setting_pane_t2

0x0002,

0xf687,	// (0x0005c93b) list_setting_pane_t_ParamLimits

0xf687,	// (0x0005c93b) list_setting_pane_t

0x528b,	// (0x0005253f) set_value_pane_cp_ParamLimits

0x528b,	// (0x0005253f) set_value_pane_cp

0x5299,	// (0x0005254d) list_setting_number_pane_g1_ParamLimits

0x5299,	// (0x0005254d) list_setting_number_pane_g1

0x52a5,	// (0x00052559) list_setting_number_pane_g2_ParamLimits

0x52a5,	// (0x00052559) list_setting_number_pane_g2

0x0001,

0xf68e,	// (0x0005c942) list_setting_number_pane_g_ParamLimits

0xf68e,	// (0x0005c942) list_setting_number_pane_g

0x52b1,	// (0x00052565) list_setting_number_pane_t1_ParamLimits

0x52b1,	// (0x00052565) list_setting_number_pane_t1

0x52ca,	// (0x0005257e) list_setting_number_pane_t2_ParamLimits

0x52ca,	// (0x0005257e) list_setting_number_pane_t2

0x52e4,	// (0x00052598) list_setting_number_pane_t3_ParamLimits

0x52e4,	// (0x00052598) list_setting_number_pane_t3

0x0003,

0xf693,	// (0x0005c947) list_setting_number_pane_t_ParamLimits

0xf693,	// (0x0005c947) list_setting_number_pane_t

0x528b,	// (0x0005253f) set_value_pane_ParamLimits

0x528b,	// (0x0005253f) set_value_pane

0x7c71,	// (0x00054f25) bg_set_opt_pane_ParamLimits

0x7c71,	// (0x00054f25) bg_set_opt_pane

0x5327,	// (0x000525db) set_value_pane_t1

0x7c92,	// (0x00054f46) slider_set_pane_cp3

0x7c9b,	// (0x00054f4f) volume_small_pane_cp

0x7ca4,	// (0x00054f58) list_form_gen_pane

0x7cad,	// (0x00054f61) scroll_pane_cp8

0x533d,	// (0x000525f1) form_field_data_pane_ParamLimits

0x533d,	// (0x000525f1) form_field_data_pane

0x5365,	// (0x00052619) form_field_data_wide_pane_ParamLimits

0x5365,	// (0x00052619) form_field_data_wide_pane

0x538c,	// (0x00052640) form_field_popup_pane_ParamLimits

0x538c,	// (0x00052640) form_field_popup_pane

0x53ae,	// (0x00052662) form_field_popup_wide_pane_ParamLimits

0x53ae,	// (0x00052662) form_field_popup_wide_pane

0x53cf,	// (0x00052683) form_field_slider_pane_ParamLimits

0x53cf,	// (0x00052683) form_field_slider_pane

0x53e2,	// (0x00052696) form_field_slider_wide_pane_ParamLimits

0x53e2,	// (0x00052696) form_field_slider_wide_pane

0x7cbe,	// (0x00054f72) data_form_pane

0x53ff,	// (0x000526b3) form_field_data_pane_t1

0x7cca,	// (0x00054f7e) input_focus_pane

0x7cd8,	// (0x00054f8c) data_form_wide_pane

0x5425,	// (0x000526d9) form_field_data_wide_pane_t1

0x798f,	// (0x00054c43) input_focus_pane_cp6

0x5447,	// (0x000526fb) form_field_popup_pane_t1

0x7cca,	// (0x00054f7e) input_focus_pane_cp7

0x7d04,	// (0x00054fb8) list_form_pane

0x5469,	// (0x0005271d) form_field_popup_wide_pane_t1

0x7cca,	// (0x00054f7e) input_focus_pane_cp8

0x7d10,	// (0x00054fc4) list_form_wide_pane

0x5486,	// (0x0005273a) form_field_slider_pane_t1_ParamLimits

0x5486,	// (0x0005273a) form_field_slider_pane_t1

0x549e,	// (0x00052752) form_field_slider_pane_t2_ParamLimits

0x549e,	// (0x00052752) form_field_slider_pane_t2

0x0001,

0xf6a3,	// (0x0005c957) form_field_slider_pane_t_ParamLimits

0xf6a3,	// (0x0005c957) form_field_slider_pane_t

0x7613,	// (0x000548c7) input_focus_pane_cp9_ParamLimits

0x7613,	// (0x000548c7) input_focus_pane_cp9

0x54b3,	// (0x00052767) slider_cont_pane_ParamLimits

0x54b3,	// (0x00052767) slider_cont_pane

0x7d1f,	// (0x00054fd3) form_field_slider_wide_pane_t1_ParamLimits

0x7d1f,	// (0x00054fd3) form_field_slider_wide_pane_t1

0x54c7,	// (0x0005277b) form_field_slider_wide_pane_t2_ParamLimits

0x54c7,	// (0x0005277b) form_field_slider_wide_pane_t2

0x0001,

0xf6a8,	// (0x0005c95c) form_field_slider_wide_pane_t_ParamLimits

0xf6a8,	// (0x0005c95c) form_field_slider_wide_pane_t

0x7613,	// (0x000548c7) input_focus_pane_cp10_ParamLimits

0x7613,	// (0x000548c7) input_focus_pane_cp10

0x54d9,	// (0x0005278d) slider_cont_pane_cp1_ParamLimits

0x54d9,	// (0x0005278d) slider_cont_pane_cp1

0x54ed,	// (0x000527a1) slider_form_pane_cp

0x7d31,	// (0x00054fe5) input_focus_pane_g1

0x7d39,	// (0x00054fed) input_focus_pane_g2

0x7d41,	// (0x00054ff5) input_focus_pane_g3

0x7d49,	// (0x00054ffd) input_focus_pane_g4

0x7d51,	// (0x00055005) input_focus_pane_g5

0x7d59,	// (0x0005500d) input_focus_pane_g6

0x7d61,	// (0x00055015) input_focus_pane_g7

0x7d69,	// (0x0005501d) input_focus_pane_g8

0x7d71,	// (0x00055025) input_focus_pane_g9

0x2507,	// (0x0004f7bb) input_focus_pane_g10

0x0009,

0xf6ad,	// (0x0005c961) input_focus_pane_g

0x9fec,	// (0x000572a0) wait_border_pane_g3_copy1

0x54f5,	// (0x000527a9) data_form_pane_t1

0x2507,	// (0x0004f7bb) wait_anim_pane_g1_copy1

0x6018,	// (0x000532cc) data_form_wide_pane_t1

0x5514,	// (0x000527c8) list_form_graphic_pane_cp_ParamLimits

0x5514,	// (0x000527c8) list_form_graphic_pane_cp

0xaf71,	// (0x00058225) slider_form_pane_g1

0xaf7a,	// (0x0005822e) slider_form_pane_g2

0x0006,

0xf9a5,	// (0x0005cc59) slider_form_pane_g

0x5514,	// (0x000527c8) list_form_graphic_pane_ParamLimits

0x5514,	// (0x000527c8) list_form_graphic_pane

0x5526,	// (0x000527da) list_form_graphic_pane_g1

0x552e,	// (0x000527e2) list_form_graphic_pane_t1_ParamLimits

0x552e,	// (0x000527e2) list_form_graphic_pane_t1

0x7397,	// (0x0005464b) list_highlight_pane_cp5_ParamLimits

0x7397,	// (0x0005464b) list_highlight_pane_cp5

0x7d79,	// (0x0005502d) find_pane_g1

0x7d82,	// (0x00055036) input_find_pane

0x5543,	// (0x000527f7) input_find_pane_g1_ParamLimits

0x5543,	// (0x000527f7) input_find_pane_g1

0x554f,	// (0x00052803) input_find_pane_t1_ParamLimits

0x554f,	// (0x00052803) input_find_pane_t1

0x5564,	// (0x00052818) input_find_pane_t2_ParamLimits

0x5564,	// (0x00052818) input_find_pane_t2

0x0001,

0xf6c2,	// (0x0005c976) input_find_pane_t_ParamLimits

0xf6c2,	// (0x0005c976) input_find_pane_t

0x7d8b,	// (0x0005503f) input_focus_pane_cp5_ParamLimits

0x7d8b,	// (0x0005503f) input_focus_pane_cp5

0x7da5,	// (0x00055059) bg_popup_window_pane_cp2_ParamLimits

0x7da5,	// (0x00055059) bg_popup_window_pane_cp2

0x7db2,	// (0x00055066) listscroll_menu_pane_ParamLimits

0x7db2,	// (0x00055066) listscroll_menu_pane

0x7dbe,	// (0x00055072) popup_submenu_window_ParamLimits

0x7dbe,	// (0x00055072) popup_submenu_window

0x7dee,	// (0x000550a2) find_popup_pane_g1

0x7df6,	// (0x000550aa) input_popup_find_pane_cp

0x7d8b,	// (0x0005503f) input_focus_pane_cp4_ParamLimits

0x7d8b,	// (0x0005503f) input_focus_pane_cp4

0x7e0e,	// (0x000550c2) input_popup_find_pane_t1_ParamLimits

0x7e0e,	// (0x000550c2) input_popup_find_pane_t1

0x2511,	// (0x0004f7c5) bg_popup_sub_pane_cp

0x7e3c,	// (0x000550f0) listscroll_popup_sub_pane

0x7e44,	// (0x000550f8) list_submenu_pane_ParamLimits

0x7e44,	// (0x000550f8) list_submenu_pane

0x7e55,	// (0x00055109) scroll_pane_cp4

0x7e5d,	// (0x00055111) list_single_popup_submenu_pane_ParamLimits

0x7e5d,	// (0x00055111) list_single_popup_submenu_pane

0x7e72,	// (0x00055126) list_single_popup_submenu_pane_g1

0x7e7a,	// (0x0005512e) list_single_popup_submenu_pane_t1_ParamLimits

0x7e7a,	// (0x0005512e) list_single_popup_submenu_pane_t1

0x7397,	// (0x0005464b) bg_active_tab_pane_cp1_ParamLimits

0x7397,	// (0x0005464b) bg_active_tab_pane_cp1

0x7e8f,	// (0x00055143) tabs_2_active_pane_g1

0x7e97,	// (0x0005514b) tabs_2_active_pane_t1

0x7397,	// (0x0005464b) bg_passive_tab_pane_cp1_ParamLimits

0x7397,	// (0x0005464b) bg_passive_tab_pane_cp1

0x7e8f,	// (0x00055143) tabs_2_passive_pane_g1

0x7e97,	// (0x0005514b) tabs_2_passive_pane_t1

0x7ea9,	// (0x0005515d) bg_active_tab_pane_cp4

0x7eb7,	// (0x0005516b) tabs_2_long_active_pane_t1

0x7eca,	// (0x0005517e) bg_passive_tab_pane_cp4

0x5c64,	// (0x00052f18) list_single_midp_graphic_pane_g4_ParamLimits

0x7ea9,	// (0x0005515d) bg_active_tab_pane_cp5

0x7ed6,	// (0x0005518a) tabs_3_long_active_pane_t1

0x7eca,	// (0x0005517e) bg_passive_tab_pane_cp5

0x5c64,	// (0x00052f18) list_single_midp_graphic_pane_g4

0x7397,	// (0x0005464b) bg_popup_window_pane_cp13_ParamLimits

0x7397,	// (0x0005464b) bg_popup_window_pane_cp13

0x7ef1,	// (0x000551a5) listscroll_popup_fast_pane_ParamLimits

0x7ef1,	// (0x000551a5) listscroll_popup_fast_pane

0x7f00,	// (0x000551b4) grid_popup_fast_pane_ParamLimits

0x7f00,	// (0x000551b4) grid_popup_fast_pane

0x7f12,	// (0x000551c6) scroll_pane_cp9_ParamLimits

0x7f12,	// (0x000551c6) scroll_pane_cp9

0xc8c7,	// (0x00059b7b) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc8c7,	// (0x00059b7b) list_single_graphic_hl_pane_t1_cp2

0x7f36,	// (0x000551ea) input_focus_pane_cp20_ParamLimits

0x7f36,	// (0x000551ea) input_focus_pane_cp20

0x7f44,	// (0x000551f8) query_popup_data_pane_t1_ParamLimits

0x7f44,	// (0x000551f8) query_popup_data_pane_t1

0x7f57,	// (0x0005520b) query_popup_data_pane_t2_ParamLimits

0x7f57,	// (0x0005520b) query_popup_data_pane_t2

0x7f9d,	// (0x00055251) query_popup_data_pane_t3_ParamLimits

0x7f9d,	// (0x00055251) query_popup_data_pane_t3

0x81a3,	// (0x00055457) query_popup_data_pane_t4_ParamLimits

0x81a3,	// (0x00055457) query_popup_data_pane_t4

0x81df,	// (0x00055493) query_popup_data_pane_t5_ParamLimits

0x81df,	// (0x00055493) query_popup_data_pane_t5

0x0004,

0xf6c7,	// (0x0005c97b) query_popup_data_pane_t_ParamLimits

0xf6c7,	// (0x0005c97b) query_popup_data_pane_t

0x7d31,	// (0x00054fe5) bg_set_opt_pane_g1

0x7d39,	// (0x00054fed) bg_set_opt_pane_g2

0x7d41,	// (0x00054ff5) bg_set_opt_pane_g3

0x7d49,	// (0x00054ffd) bg_set_opt_pane_g4

0x7d51,	// (0x00055005) bg_set_opt_pane_g5

0x7d59,	// (0x0005500d) bg_set_opt_pane_g6

0x7d61,	// (0x00055015) bg_set_opt_pane_g7

0x7d69,	// (0x0005501d) bg_set_opt_pane_g8

0x7d71,	// (0x00055025) bg_set_opt_pane_g9

0x0008,

0xf6d2,	// (0x0005c986) bg_set_opt_pane_g

0x588a,	// (0x00052b3e) control_top_pane_stacon_ParamLimits

0x588a,	// (0x00052b3e) control_top_pane_stacon

0x58dd,	// (0x00052b91) signal_pane_stacon_ParamLimits

0x58dd,	// (0x00052b91) signal_pane_stacon

0x878b,	// (0x00055a3f) stacon_top_pane_g1_ParamLimits

0x878b,	// (0x00055a3f) stacon_top_pane_g1

0x5902,	// (0x00052bb6) title_pane_stacon_ParamLimits

0x5902,	// (0x00052bb6) title_pane_stacon

0x592c,	// (0x00052be0) uni_indicator_pane_stacon_ParamLimits

0x592c,	// (0x00052be0) uni_indicator_pane_stacon

0x5944,	// (0x00052bf8) battery_pane_stacon_ParamLimits

0x5944,	// (0x00052bf8) battery_pane_stacon

0x5988,	// (0x00052c3c) control_bottom_pane_stacon_ParamLimits

0x5988,	// (0x00052c3c) control_bottom_pane_stacon

0x59ab,	// (0x00052c5f) navi_pane_stacon_ParamLimits

0x59ab,	// (0x00052c5f) navi_pane_stacon

0x87ad,	// (0x00055a61) stacon_bottom_pane_g1_ParamLimits

0x87ad,	// (0x00055a61) stacon_bottom_pane_g1

0x5579,	// (0x0005282d) aid_levels_signal_lsc_ParamLimits

0x5579,	// (0x0005282d) aid_levels_signal_lsc

0x5590,	// (0x00052844) signal_pane_stacon_g1_ParamLimits

0x5590,	// (0x00052844) signal_pane_stacon_g1

0x55a4,	// (0x00052858) signal_pane_stacon_g2_ParamLimits

0x55a4,	// (0x00052858) signal_pane_stacon_g2

0x0001,

0xf6e5,	// (0x0005c999) signal_pane_stacon_g_ParamLimits

0xf6e5,	// (0x0005c999) signal_pane_stacon_g

0x55d9,	// (0x0005288d) title_pane_stacon_t1_ParamLimits

0x55d9,	// (0x0005288d) title_pane_stacon_t1

0x8223,	// (0x000554d7) uni_indicator_pane_stacon_g1

0x822d,	// (0x000554e1) uni_indicator_pane_stacon_g2

0x8237,	// (0x000554eb) uni_indicator_pane_stacon_g3

0x8241,	// (0x000554f5) uni_indicator_pane_stacon_g4

0x0003,

0xf6f1,	// (0x0005c9a5) uni_indicator_pane_stacon_g

0x55fe,	// (0x000528b2) control_top_pane_stacon_g1

0x5606,	// (0x000528ba) control_top_pane_stacon_t1_ParamLimits

0x5606,	// (0x000528ba) control_top_pane_stacon_t1

0x563d,	// (0x000528f1) aid_levels_battery_lsc_ParamLimits

0x563d,	// (0x000528f1) aid_levels_battery_lsc

0x5655,	// (0x00052909) battery_pane_stacon_g1_ParamLimits

0x5655,	// (0x00052909) battery_pane_stacon_g1

0x5668,	// (0x0005291c) battery_pane_stacon_g2_ParamLimits

0x5668,	// (0x0005291c) battery_pane_stacon_g2

0x0001,

0xf6fa,	// (0x0005c9ae) battery_pane_stacon_g_ParamLimits

0xf6fa,	// (0x0005c9ae) battery_pane_stacon_g

0x56a6,	// (0x0005295a) navi_icon_pane_stacon

0x56ba,	// (0x0005296e) navi_navi_pane_stacon

0x56a6,	// (0x0005295a) navi_text_pane_stacon

0x55fe,	// (0x000528b2) control_bottom_pane_stacon_g1

0x56d0,	// (0x00052984) control_bottom_pane_stacon_t1_ParamLimits

0x56d0,	// (0x00052984) control_bottom_pane_stacon_t1

0x8265,	// (0x00055519) grid_app_pane_ParamLimits

0x8265,	// (0x00055519) grid_app_pane

0x8289,	// (0x0005553d) scroll_pane_cp15_ParamLimits

0x8289,	// (0x0005553d) scroll_pane_cp15

0x829e,	// (0x00055552) cell_app_pane_ParamLimits

0x829e,	// (0x00055552) cell_app_pane

0x82ca,	// (0x0005557e) cell_app_pane_g1_ParamLimits

0x82ca,	// (0x0005557e) cell_app_pane_g1

0x82ee,	// (0x000555a2) cell_app_pane_g2_ParamLimits

0x82ee,	// (0x000555a2) cell_app_pane_g2

0x0001,

0xf6ff,	// (0x0005c9b3) cell_app_pane_g_ParamLimits

0xf6ff,	// (0x0005c9b3) cell_app_pane_g

0x82fa,	// (0x000555ae) cell_app_pane_t1_ParamLimits

0x82fa,	// (0x000555ae) cell_app_pane_t1

0x830c,	// (0x000555c0) grid_highlight_pane_ParamLimits

0x830c,	// (0x000555c0) grid_highlight_pane

0x7d31,	// (0x00054fe5) cell_highlight_pane_g1

0x7d39,	// (0x00054fed) cell_highlight_pane_g2

0x7d41,	// (0x00054ff5) cell_highlight_pane_g3

0x7d49,	// (0x00054ffd) cell_highlight_pane_g4

0x7d51,	// (0x00055005) cell_highlight_pane_g5

0x7d59,	// (0x0005500d) cell_highlight_pane_g6

0x7d61,	// (0x00055015) cell_highlight_pane_g7

0x7d69,	// (0x0005501d) cell_highlight_pane_g8

0x7d71,	// (0x00055025) cell_highlight_pane_g9

0x2507,	// (0x0004f7bb) cell_highlight_pane_g10

0x0009,

0xf6ad,	// (0x0005c961) cell_highlight_pane_g

0x831d,	// (0x000555d1) bg_scroll_pane

0x571a,	// (0x000529ce) scroll_handle_pane

0x8364,	// (0x00055618) scroll_bg_pane_g1

0x8379,	// (0x0005562d) scroll_bg_pane_g2

0x8391,	// (0x00055645) scroll_bg_pane_g3

0x0002,

0xf704,	// (0x0005c9b8) scroll_bg_pane_g

0x83a6,	// (0x0005565a) scroll_handle_focus_pane_ParamLimits

0x83a6,	// (0x0005565a) scroll_handle_focus_pane

0x8364,	// (0x00055618) scroll_handle_pane_g1

0x83b3,	// (0x00055667) scroll_handle_pane_g2

0x8391,	// (0x00055645) scroll_handle_pane_g3

0x0002,

0xf70b,	// (0x0005c9bf) scroll_handle_pane_g

0x7d8b,	// (0x0005503f) bg_popup_sub_pane_cp21_ParamLimits

0x7d8b,	// (0x0005503f) bg_popup_sub_pane_cp21

0x83c7,	// (0x0005567b) popup_fep_japan_predictive_window_t1_ParamLimits

0x83c7,	// (0x0005567b) popup_fep_japan_predictive_window_t1

0x83de,	// (0x00055692) popup_fep_japan_predictive_window_t2_ParamLimits

0x83de,	// (0x00055692) popup_fep_japan_predictive_window_t2

0x8411,	// (0x000556c5) popup_fep_japan_predictive_window_t3_ParamLimits

0x8411,	// (0x000556c5) popup_fep_japan_predictive_window_t3

0x0002,

0xf712,	// (0x0005c9c6) popup_fep_japan_predictive_window_t_ParamLimits

0xf712,	// (0x0005c9c6) popup_fep_japan_predictive_window_t

0x2511,	// (0x0004f7c5) bg_popup_sub_pane_cp23

0x8448,	// (0x000556fc) listscroll_japin_cand_pane

0x8450,	// (0x00055704) popup_fep_japan_candidate_window_t1

0x845e,	// (0x00055712) candidate_pane_ParamLimits

0x845e,	// (0x00055712) candidate_pane

0x8470,	// (0x00055724) scroll_pane_cp30

0x847a,	// (0x0005572e) list_single_popup_jap_candidate_pane_ParamLimits

0x847a,	// (0x0005572e) list_single_popup_jap_candidate_pane

0x2511,	// (0x0004f7c5) list_highlight_pane_cp30

0x848e,	// (0x00055742) list_single_popup_jap_candidate_pane_t1

0x849d,	// (0x00055751) level_1_signal

0x84aa,	// (0x0005575e) level_2_signal

0x84b7,	// (0x0005576b) level_3_signal

0x84c4,	// (0x00055778) level_4_signal

0x84d1,	// (0x00055785) level_5_signal

0x84de,	// (0x00055792) level_6_signal

0x84eb,	// (0x0005579f) level_7_signal

0x849d,	// (0x00055751) level_1_battery

0x84aa,	// (0x0005575e) level_2_battery

0x84b7,	// (0x0005576b) level_3_battery

0x84c4,	// (0x00055778) level_4_battery

0x84d1,	// (0x00055785) level_5_battery

0x84de,	// (0x00055792) level_6_battery

0x84eb,	// (0x0005579f) level_7_battery

0x8510,	// (0x000557c4) list_menu_pane_ParamLimits

0x8510,	// (0x000557c4) list_menu_pane

0x8521,	// (0x000557d5) scroll_pane_cp25_ParamLimits

0x8521,	// (0x000557d5) scroll_pane_cp25

0x853a,	// (0x000557ee) list_double2_graphic_pane_cp2_ParamLimits

0x853a,	// (0x000557ee) list_double2_graphic_pane_cp2

0x853a,	// (0x000557ee) list_double2_large_graphic_pane_cp2_ParamLimits

0x853a,	// (0x000557ee) list_double2_large_graphic_pane_cp2

0x853a,	// (0x000557ee) list_double2_pane_cp2_ParamLimits

0x853a,	// (0x000557ee) list_double2_pane_cp2

0x853a,	// (0x000557ee) list_double_graphic_pane_cp2_ParamLimits

0x853a,	// (0x000557ee) list_double_graphic_pane_cp2

0x853a,	// (0x000557ee) list_double_large_graphic_pane_cp2_ParamLimits

0x853a,	// (0x000557ee) list_double_large_graphic_pane_cp2

0x853a,	// (0x000557ee) list_double_number_pane_cp2_ParamLimits

0x853a,	// (0x000557ee) list_double_number_pane_cp2

0x853a,	// (0x000557ee) list_double_pane_cp2_ParamLimits

0x853a,	// (0x000557ee) list_double_pane_cp2

0x8560,	// (0x00055814) list_single_2graphic_pane_cp2_ParamLimits

0x8560,	// (0x00055814) list_single_2graphic_pane_cp2

0x8560,	// (0x00055814) list_single_graphic_heading_pane_cp2_ParamLimits

0x8560,	// (0x00055814) list_single_graphic_heading_pane_cp2

0x8560,	// (0x00055814) list_single_graphic_pane_cp2_ParamLimits

0x8560,	// (0x00055814) list_single_graphic_pane_cp2

0x8560,	// (0x00055814) list_single_heading_pane_cp2_ParamLimits

0x8560,	// (0x00055814) list_single_heading_pane_cp2

0x857d,	// (0x00055831) list_single_large_graphic_pane_cp2_ParamLimits

0x857d,	// (0x00055831) list_single_large_graphic_pane_cp2

0x8560,	// (0x00055814) list_single_number_heading_pane_cp2_ParamLimits

0x8560,	// (0x00055814) list_single_number_heading_pane_cp2

0x8560,	// (0x00055814) list_single_number_pane_cp2_ParamLimits

0x8560,	// (0x00055814) list_single_number_pane_cp2

0x8560,	// (0x00055814) list_single_pane_cp2_ParamLimits

0x8560,	// (0x00055814) list_single_pane_cp2

0x85d2,	// (0x00055886) bg_popup_sub_pane_cp22

0x57cc,	// (0x00052a80) popup_side_volume_key_window_g1

0x57f6,	// (0x00052aaa) popup_side_volume_key_window_t1

0x5814,	// (0x00052ac8) volume_small_pane_cp1

0x7613,	// (0x000548c7) bg_popup_sub_pane_cp24_ParamLimits

0x7613,	// (0x000548c7) bg_popup_sub_pane_cp24

0x85e8,	// (0x0005589c) fep_china_uni_candidate_pane_ParamLimits

0x85e8,	// (0x0005589c) fep_china_uni_candidate_pane

0x85fc,	// (0x000558b0) fep_china_uni_entry_pane

0x860c,	// (0x000558c0) popup_fep_china_uni_window_g1

0x8628,	// (0x000558dc) fep_china_uni_entry_pane_g1

0x8632,	// (0x000558e6) fep_china_uni_entry_pane_g2

0x0001,

0xf73f,	// (0x0005c9f3) fep_china_uni_entry_pane_g

0x863c,	// (0x000558f0) fep_entry_item_pane

0x8646,	// (0x000558fa) fep_candidate_item_pane

0x864e,	// (0x00055902) fep_china_uni_candidate_pane_g1

0x8658,	// (0x0005590c) fep_china_uni_candidate_pane_g2

0x8660,	// (0x00055914) fep_china_uni_candidate_pane_g3

0x8668,	// (0x0005591c) fep_china_uni_candidate_pane_g4

0x0003,

0xf744,	// (0x0005c9f8) fep_china_uni_candidate_pane_g

0x2507,	// (0x0004f7bb) fep_entry_item_pane_g1

0x8672,	// (0x00055926) fep_entry_item_pane_t1_ParamLimits

0x8672,	// (0x00055926) fep_entry_item_pane_t1

0x8688,	// (0x0005593c) fep_candidate_item_pane_t1_ParamLimits

0x8688,	// (0x0005593c) fep_candidate_item_pane_t1

0x869d,	// (0x00055951) fep_candidate_item_pane_t2_ParamLimits

0x869d,	// (0x00055951) fep_candidate_item_pane_t2

0x0001,

0xf74d,	// (0x0005ca01) fep_candidate_item_pane_t_ParamLimits

0xf74d,	// (0x0005ca01) fep_candidate_item_pane_t

0x7397,	// (0x0005464b) list_highlight_pane_cp31_ParamLimits

0x7397,	// (0x0005464b) list_highlight_pane_cp31

0x86af,	// (0x00055963) level_1_signal_lsc

0x86b8,	// (0x0005596c) level_2_signal_lsc

0x86c1,	// (0x00055975) level_3_signal_lsc

0x86ca,	// (0x0005597e) level_4_signal_lsc

0x86d3,	// (0x00055987) level_5_signal_lsc

0x86dc,	// (0x00055990) level_6_signal_lsc

0x86e5,	// (0x00055999) level_7_signal_lsc

0x86e5,	// (0x00055999) level_1_battery_lsc

0x86ee,	// (0x000559a2) level_2_battery_lsc

0x86f7,	// (0x000559ab) level_3_battery_lsc

0x8700,	// (0x000559b4) level_4_battery_lsc

0x8709,	// (0x000559bd) level_5_battery_lsc

0x8712,	// (0x000559c6) level_6_battery_lsc

0x86af,	// (0x00055963) level_7_battery_lsc

0x871b,	// (0x000559cf) scroll_handle_focus_pane_g1

0x8724,	// (0x000559d8) scroll_handle_focus_pane_g2

0x872d,	// (0x000559e1) scroll_handle_focus_pane_g3

0x0002,

0xf752,	// (0x0005ca06) scroll_handle_focus_pane_g

0x581c,	// (0x00052ad0) list_single_2graphic_pane_g1_ParamLimits

0x581c,	// (0x00052ad0) list_single_2graphic_pane_g1

0x7bef,	// (0x00054ea3) list_single_2graphic_pane_g2_ParamLimits

0x7bef,	// (0x00054ea3) list_single_2graphic_pane_g2

0x7bd1,	// (0x00054e85) list_single_2graphic_pane_g3_ParamLimits

0x7bd1,	// (0x00054e85) list_single_2graphic_pane_g3

0x7fde,	// (0x00055292) list_single_2graphic_pane_g4_ParamLimits

0x7fde,	// (0x00055292) list_single_2graphic_pane_g4

0x0003,

0xf759,	// (0x0005ca0d) list_single_2graphic_pane_g_ParamLimits

0xf759,	// (0x0005ca0d) list_single_2graphic_pane_g

0x5828,	// (0x00052adc) list_single_2graphic_pane_t1_ParamLimits

0x5828,	// (0x00052adc) list_single_2graphic_pane_t1

0x7fea,	// (0x0005529e) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x7fea,	// (0x0005529e) list_double2_graphic_large_graphic_pane_g1

0x50ff,	// (0x000523b3) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x50ff,	// (0x000523b3) list_double2_graphic_large_graphic_pane_g2

0x504c,	// (0x00052300) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x504c,	// (0x00052300) list_double2_graphic_large_graphic_pane_g3

0x5856,	// (0x00052b0a) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x5856,	// (0x00052b0a) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf762,	// (0x0005ca16) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf762,	// (0x0005ca16) list_double2_graphic_large_graphic_pane_g

0x5862,	// (0x00052b16) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x5862,	// (0x00052b16) list_double2_graphic_large_graphic_pane_t1

0x5878,	// (0x00052b2c) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x5878,	// (0x00052b2c) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf76b,	// (0x0005ca1f) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf76b,	// (0x0005ca1f) list_double2_graphic_large_graphic_pane_t

0x886f,	// (0x00055b23) popup_fast_swap_window_ParamLimits

0x886f,	// (0x00055b23) popup_fast_swap_window

0x888d,	// (0x00055b41) popup_side_volume_key_window

0x88ab,	// (0x00055b5f) stacon_top_pane

0x88b5,	// (0x00055b69) status_pane_ParamLimits

0x88b5,	// (0x00055b69) status_pane

0x88ab,	// (0x00055b5f) status_small_pane

0x2511,	// (0x0004f7c5) control_pane

0x2511,	// (0x0004f7c5) stacon_bottom_pane

0x7cad,	// (0x00054f61) scroll_pane_cp121

0x7ca4,	// (0x00054f58) set_content_pane

0x8736,	// (0x000559ea) bg_active_tab_pane_g1_cp1

0x873f,	// (0x000559f3) bg_active_tab_pane_g2_cp1

0x8748,	// (0x000559fc) bg_active_tab_pane_g3_cp1

0x8736,	// (0x000559ea) bg_passive_tab_pane_g1_cp1

0x873f,	// (0x000559f3) bg_passive_tab_pane_g2_cp1

0x8748,	// (0x000559fc) bg_passive_tab_pane_g3_cp1

0x8751,	// (0x00055a05) bg_active_tab_pane_g1_cp2

0x873f,	// (0x000559f3) bg_active_tab_pane_g2_cp2

0x875a,	// (0x00055a0e) bg_active_tab_pane_g3_cp2

0x8751,	// (0x00055a05) bg_passive_tab_pane_g1_cp2

0x873f,	// (0x000559f3) bg_passive_tab_pane_g2_cp2

0x875a,	// (0x00055a0e) bg_passive_tab_pane_g3_cp2

0x8763,	// (0x00055a17) bg_active_tab_pane_g1_cp3

0x873f,	// (0x000559f3) bg_active_tab_pane_g2_cp3

0x876c,	// (0x00055a20) bg_active_tab_pane_g3_cp3

0x8763,	// (0x00055a17) bg_passive_tab_pane_g1_cp3

0x873f,	// (0x000559f3) bg_passive_tab_pane_g2_cp3

0x876c,	// (0x00055a20) bg_passive_tab_pane_g3_cp3

0x8775,	// (0x00055a29) bg_active_tab_pane_g1_cp4

0x873f,	// (0x000559f3) bg_active_tab_pane_g2_cp4

0x8780,	// (0x00055a34) bg_active_tab_pane_g3_cp4

0x8775,	// (0x00055a29) bg_passive_tab_pane_g1_cp4

0x873f,	// (0x000559f3) bg_passive_tab_pane_g2_cp4

0x8780,	// (0x00055a34) bg_passive_tab_pane_g3_cp4

0x87c9,	// (0x00055a7d) bg_active_tab_pane_g1_cp5

0x873f,	// (0x000559f3) bg_active_tab_pane_g2_cp5

0x87d2,	// (0x00055a86) bg_active_tab_pane_g3_cp5

0x87c9,	// (0x00055a7d) bg_passive_tab_pane_g1_cp5

0x873f,	// (0x000559f3) bg_passive_tab_pane_g2_cp5

0x87d2,	// (0x00055a86) bg_passive_tab_pane_g3_cp5

0x87db,	// (0x00055a8f) list_set_graphic_pane_ParamLimits

0x87db,	// (0x00055a8f) list_set_graphic_pane

0x2511,	// (0x0004f7c5) bg_set_opt_pane_cp4

0x87f0,	// (0x00055aa4) list_set_graphic_pane_g1_ParamLimits

0x87f0,	// (0x00055aa4) list_set_graphic_pane_g1

0x87fc,	// (0x00055ab0) list_set_graphic_pane_g2_ParamLimits

0x87fc,	// (0x00055ab0) list_set_graphic_pane_g2

0x0001,

0xf770,	// (0x0005ca24) list_set_graphic_pane_g_ParamLimits

0xf770,	// (0x0005ca24) list_set_graphic_pane_g

0x0009,

0xfadf,	// (0x0005cd93) volume_small_pane_cp_g

0x8820,	// (0x00055ad4) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x8820,	// (0x00055ad4) list_double2_large_graphic_pane_g1_cp2

0x882e,	// (0x00055ae2) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x882e,	// (0x00055ae2) list_double2_large_graphic_pane_g2_cp2

0x883f,	// (0x00055af3) list_double2_large_graphic_pane_g3_cp2

0x8847,	// (0x00055afb) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x8847,	// (0x00055afb) list_double2_large_graphic_pane_t1_cp2

0x885d,	// (0x00055b11) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x885d,	// (0x00055b11) list_double2_large_graphic_pane_t2_cp2

0xaad6,	// (0x00057d8a) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xaad6,	// (0x00057d8a) list_double_large_graphic_pane_g1_cp2

0xaae9,	// (0x00057d9d) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xaae9,	// (0x00057d9d) list_double_large_graphic_pane_g2_cp2

0x89d3,	// (0x00055c87) list_double_large_graphic_pane_g3_cp2

0xaafa,	// (0x00057dae) list_double_large_graphic_pane_g4_cp

0xab02,	// (0x00057db6) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xab02,	// (0x00057db6) list_double_large_graphic_pane_t1_cp2

0xab19,	// (0x00057dcd) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xab19,	// (0x00057dcd) list_double_large_graphic_pane_t2_cp2

0x88c3,	// (0x00055b77) list_double2_graphic_pane_g1_cp2_ParamLimits

0x88c3,	// (0x00055b77) list_double2_graphic_pane_g1_cp2

0x88d1,	// (0x00055b85) list_double2_graphic_pane_g2_cp2_ParamLimits

0x88d1,	// (0x00055b85) list_double2_graphic_pane_g2_cp2

0x88e2,	// (0x00055b96) list_double2_graphic_pane_g3_cp2

0x88ec,	// (0x00055ba0) list_double2_graphic_pane_t1_cp2_ParamLimits

0x88ec,	// (0x00055ba0) list_double2_graphic_pane_t1_cp2

0x8902,	// (0x00055bb6) list_double2_graphic_pane_t2_cp2_ParamLimits

0x8902,	// (0x00055bb6) list_double2_graphic_pane_t2_cp2

0x8914,	// (0x00055bc8) list_single_number_heading_pane_g1_cp2_ParamLimits

0x8914,	// (0x00055bc8) list_single_number_heading_pane_g1_cp2

0x8920,	// (0x00055bd4) list_single_number_heading_pane_g2_cp2

0x8928,	// (0x00055bdc) list_single_number_heading_pane_t1_cp2_ParamLimits

0x8928,	// (0x00055bdc) list_single_number_heading_pane_t1_cp2

0x893e,	// (0x00055bf2) list_single_number_heading_pane_t2_cp2_ParamLimits

0x893e,	// (0x00055bf2) list_single_number_heading_pane_t2_cp2

0x8952,	// (0x00055c06) list_single_number_heading_pane_t3_cp2_ParamLimits

0x8952,	// (0x00055c06) list_single_number_heading_pane_t3_cp2

0x8914,	// (0x00055bc8) list_single_heading_pane_g1_cp2_ParamLimits

0x8914,	// (0x00055bc8) list_single_heading_pane_g1_cp2

0x8920,	// (0x00055bd4) list_single_heading_pane_g2_cp2

0x8928,	// (0x00055bdc) list_single_heading_pane_t1_cp2_ParamLimits

0x8928,	// (0x00055bdc) list_single_heading_pane_t1_cp2

0xa8d0,	// (0x00057b84) list_single_heading_pane_t2_cp2_ParamLimits

0xa8d0,	// (0x00057b84) list_single_heading_pane_t2_cp2

0xa812,	// (0x00057ac6) list_double_graphic_pane_g1_cp2_ParamLimits

0xa812,	// (0x00057ac6) list_double_graphic_pane_g1_cp2

0xa81e,	// (0x00057ad2) list_double_graphic_pane_g2_cp2_ParamLimits

0xa81e,	// (0x00057ad2) list_double_graphic_pane_g2_cp2

0xa82d,	// (0x00057ae1) list_double_graphic_pane_g3_cp2

0xa835,	// (0x00057ae9) list_double_graphic_pane_t1_cp2_ParamLimits

0xa835,	// (0x00057ae9) list_double_graphic_pane_t1_cp2

0xa84b,	// (0x00057aff) list_double_graphic_pane_t2_cp2_ParamLimits

0xa84b,	// (0x00057aff) list_double_graphic_pane_t2_cp2

0x89c7,	// (0x00055c7b) list_double_number_pane_g1_cp2_ParamLimits

0x89c7,	// (0x00055c7b) list_double_number_pane_g1_cp2

0x89d3,	// (0x00055c87) list_double_number_pane_g2_cp2

0xa7d6,	// (0x00057a8a) list_double_number_pane_t1_cp2_ParamLimits

0xa7d6,	// (0x00057a8a) list_double_number_pane_t1_cp2

0xa7ea,	// (0x00057a9e) list_double_number_pane_t2_cp2_ParamLimits

0xa7ea,	// (0x00057a9e) list_double_number_pane_t2_cp2

0xa800,	// (0x00057ab4) list_double_number_pane_t3_cp2_ParamLimits

0xa800,	// (0x00057ab4) list_double_number_pane_t3_cp2

0xa6bf,	// (0x00057973) list_single_graphic_pane_g1_cp2_ParamLimits

0xa6bf,	// (0x00057973) list_single_graphic_pane_g1_cp2

0x8a2d,	// (0x00055ce1) list_single_graphic_pane_g2_cp2_ParamLimits

0x8a2d,	// (0x00055ce1) list_single_graphic_pane_g2_cp2

0x8a39,	// (0x00055ced) list_single_graphic_pane_g3_cp2

0xa695,	// (0x00057949) list_single_graphic_pane_t1_cp2_ParamLimits

0xa695,	// (0x00057949) list_single_graphic_pane_t1_cp2

0x8a2d,	// (0x00055ce1) list_single_number_pane_g1_cp2_ParamLimits

0x8a2d,	// (0x00055ce1) list_single_number_pane_g1_cp2

0x8a39,	// (0x00055ced) list_single_number_pane_g2_cp2

0xa695,	// (0x00057949) list_single_number_pane_t1_cp2_ParamLimits

0xa695,	// (0x00057949) list_single_number_pane_t1_cp2

0xa6ab,	// (0x0005795f) list_single_number_pane_t2_cp2_ParamLimits

0xa6ab,	// (0x0005795f) list_single_number_pane_t2_cp2

0x882e,	// (0x00055ae2) list_double2_pane_g1_cp2_ParamLimits

0x882e,	// (0x00055ae2) list_double2_pane_g1_cp2

0x883f,	// (0x00055af3) list_double2_pane_g2_cp2

0x899f,	// (0x00055c53) list_double2_pane_t1_cp2_ParamLimits

0x899f,	// (0x00055c53) list_double2_pane_t1_cp2

0x89b5,	// (0x00055c69) list_double2_pane_t2_cp2_ParamLimits

0x89b5,	// (0x00055c69) list_double2_pane_t2_cp2

0x89c7,	// (0x00055c7b) list_double_pane_g1_cp2_ParamLimits

0x89c7,	// (0x00055c7b) list_double_pane_g1_cp2

0x89d3,	// (0x00055c87) list_double_pane_g2_cp2

0x89db,	// (0x00055c8f) list_double_pane_t1_cp2_ParamLimits

0x89db,	// (0x00055c8f) list_double_pane_t1_cp2

0x89f1,	// (0x00055ca5) list_double_pane_t2_cp2_ParamLimits

0x89f1,	// (0x00055ca5) list_double_pane_t2_cp2

0x8a1d,	// (0x00055cd1) list_single_pane_cp2_g3

0x8a2d,	// (0x00055ce1) list_single_pane_g1_cp2_ParamLimits

0x8a2d,	// (0x00055ce1) list_single_pane_g1_cp2

0x8a39,	// (0x00055ced) list_single_pane_g2_cp2

0x8a41,	// (0x00055cf5) list_single_pane_t1_cp2_ParamLimits

0x8a41,	// (0x00055cf5) list_single_pane_t1_cp2

0x8a59,	// (0x00055d0d) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x8a59,	// (0x00055d0d) list_single_large_graphic_pane_g1_cp2

0x8a67,	// (0x00055d1b) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x8a67,	// (0x00055d1b) list_single_large_graphic_pane_g2_cp2

0x8a73,	// (0x00055d27) list_single_large_graphic_pane_g3_cp2

0x8a7b,	// (0x00055d2f) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x8a7b,	// (0x00055d2f) list_single_large_graphic_pane_g4_cp1

0x8a95,	// (0x00055d49) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x8a95,	// (0x00055d49) list_single_large_graphic_pane_t1_cp2

0xa65f,	// (0x00057913) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa65f,	// (0x00057913) list_single_graphic_heading_pane_g1_cp2

0xa62c,	// (0x000578e0) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa62c,	// (0x000578e0) list_single_graphic_heading_pane_g4_cp2

0x8a39,	// (0x00055ced) list_single_graphic_heading_pane_g5_cp2

0xa66b,	// (0x0005791f) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa66b,	// (0x0005791f) list_single_graphic_heading_pane_t1_cp2

0xa681,	// (0x00057935) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa681,	// (0x00057935) list_single_graphic_heading_pane_t2_cp2

0xa620,	// (0x000578d4) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa620,	// (0x000578d4) list_single_2graphic_pane_g1_cp2

0xa62c,	// (0x000578e0) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa62c,	// (0x000578e0) list_single_2graphic_pane_g2_cp2

0x8a39,	// (0x00055ced) list_single_2graphic_pane_g3_cp2

0xa63d,	// (0x000578f1) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa63d,	// (0x000578f1) list_single_2graphic_pane_g4_cp2

0xa649,	// (0x000578fd) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa649,	// (0x000578fd) list_single_2graphic_pane_t1_cp2

0x2507,	// (0x0004f7bb) list_highlight_pane_g10_cp1

0xa1f8,	// (0x000574ac) list_highlight_pane_g1_cp1

0xa200,	// (0x000574b4) list_highlight_pane_g2_cp1

0xa208,	// (0x000574bc) list_highlight_pane_g3_cp1

0xa210,	// (0x000574c4) list_highlight_pane_g4_cp1

0xa218,	// (0x000574cc) list_highlight_pane_g5_cp1

0xa220,	// (0x000574d4) list_highlight_pane_g6_cp1

0xa228,	// (0x000574dc) list_highlight_pane_g7_cp1

0xa230,	// (0x000574e4) list_highlight_pane_g8_cp1

0xa238,	// (0x000574ec) list_highlight_pane_g9_cp1

0xa118,	// (0x000573cc) form_field_slider_pane_t3

0xa126,	// (0x000573da) form_field_slider_pane_t4

0xa134,	// (0x000573e8) slider_form_pane_ParamLimits

0xa134,	// (0x000573e8) slider_form_pane

0x2511,	// (0x0004f7c5) control_abbreviations

0x2511,	// (0x0004f7c5) control_conventions

0x2511,	// (0x0004f7c5) control_definitions

0x2511,	// (0x0004f7c5) format_table_attribute

0xa926,	// (0x00057bda) bg_popup_preview_window_pane_g9

0x2511,	// (0x0004f7c5) format_table_data2

0x2511,	// (0x0004f7c5) format_table_data3

0x2511,	// (0x0004f7c5) format_table_data_example

0x0008,

0x2511,	// (0x0004f7c5) intro_purpose

0xf905,	// (0x0005cbb9) bg_popup_preview_window_pane_g

0x2511,	// (0x0004f7c5) texts_category

0x2511,	// (0x0004f7c5) texts_graphics

0x8aab,	// (0x00055d5f) text_digital

0x8aba,	// (0x00055d6e) text_primary

0x8ac9,	// (0x00055d7d) text_primary_small

0x8ad8,	// (0x00055d8c) text_secondary

0x8ae7,	// (0x00055d9b) text_title

0xb0c2,	// (0x00058376) bg_passive_tab_pane_g1_cp3_srt

0x873f,	// (0x000559f3) bg_passive_tab_pane_g2_cp3_srt

0xb0cb,	// (0x0005837f) bg_passive_tab_pane_g3_cp3_srt

0x7397,	// (0x0005464b) bg_active_tab_pane_cp3_srt_ParamLimits

0x7397,	// (0x0005464b) bg_active_tab_pane_cp3_srt

0xb0d4,	// (0x00058388) tabs_4_active_pane_srt_g1

0xb0dc,	// (0x00058390) tabs_4_active_pane_srt_t1_ParamLimits

0xb0dc,	// (0x00058390) tabs_4_active_pane_srt_t1

0xb0c2,	// (0x00058376) bg_active_tab_pane_g1_cp3_copy1

0x873f,	// (0x000559f3) bg_active_tab_pane_g2_cp3_copy1

0xb0cb,	// (0x0005837f) bg_active_tab_pane_g3_cp3_copy1

0x7397,	// (0x0005464b) tabs_2_long_active_pane_srt_ParamLimits

0x7397,	// (0x0005464b) tabs_2_long_active_pane_srt

0x7397,	// (0x0005464b) tabs_2_long_passive_pane_srt_ParamLimits

0x7397,	// (0x0005464b) tabs_2_long_passive_pane_srt

0x7eca,	// (0x0005517e) bg_passive_tab_pane_cp4_srt_ParamLimits

0x7eca,	// (0x0005517e) bg_passive_tab_pane_cp4_srt

0xad76,	// (0x0005802a) bg_passive_tab_pane_g1_cp4_srt

0x873f,	// (0x000559f3) bg_passive_tab_pane_g2_cp4_srt

0xad7f,	// (0x00058033) bg_passive_tab_pane_g3_cp4_srt

0x7ea9,	// (0x0005515d) bg_active_tab_pane_cp4_srt_ParamLimits

0x7ea9,	// (0x0005515d) bg_active_tab_pane_cp4_srt

0xad88,	// (0x0005803c) tabs_2_long_active_pane_srt_t1_ParamLimits

0xad88,	// (0x0005803c) tabs_2_long_active_pane_srt_t1

0xad76,	// (0x0005802a) bg_active_tab_pane_g1_cp4_srt

0x873f,	// (0x000559f3) bg_active_tab_pane_g2_cp4_srt

0xad7f,	// (0x00058033) bg_active_tab_pane_g3_cp4_srt

0x7613,	// (0x000548c7) tabs_3_long_active_pane_srt_ParamLimits

0x7613,	// (0x000548c7) tabs_3_long_active_pane_srt

0x7613,	// (0x000548c7) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x7613,	// (0x000548c7) tabs_3_long_passive_pane_cp_srt

0x7613,	// (0x000548c7) tabs_3_long_passive_pane_srt_ParamLimits

0x7613,	// (0x000548c7) tabs_3_long_passive_pane_srt

0x7eca,	// (0x0005517e) bg_passive_tab_pane_cp5_srt_ParamLimits

0x7eca,	// (0x0005517e) bg_passive_tab_pane_cp5_srt

0x87c9,	// (0x00055a7d) bg_passive_tab_pane_g1_cp5_srt

0x873f,	// (0x000559f3) bg_passive_tab_pane_g2_cp5_srt

0x87d2,	// (0x00055a86) bg_passive_tab_pane_g3_cp5_srt

0x7ea9,	// (0x0005515d) bg_active_tab_pane_cp5_srt_ParamLimits

0x7ea9,	// (0x0005515d) bg_active_tab_pane_cp5_srt

0xad64,	// (0x00058018) tabs_3_long_active_pane_srt_t1_ParamLimits

0xad64,	// (0x00058018) tabs_3_long_active_pane_srt_t1

0x87c9,	// (0x00055a7d) bg_active_tab_pane_g1_cp5_srt

0x873f,	// (0x000559f3) bg_active_tab_pane_g2_cp5_srt

0x87d2,	// (0x00055a86) bg_active_tab_pane_g3_cp5_srt

0xad56,	// (0x0005800a) navi_text_pane_srt_t1

0xad4e,	// (0x00058002) navi_icon_pane_srt_g1

0x8cbe,	// (0x00055f72) midp_editing_number_pane_srt

0x8af6,	// (0x00055daa) midp_ticker_pane_srt

0x8cc6,	// (0x00055f7a) midp_ticker_pane_srt_g1

0x8cce,	// (0x00055f82) midp_ticker_pane_srt_g2

0x0001,

0xf78f,	// (0x0005ca43) midp_ticker_pane_srt_g

0x8cd6,	// (0x00055f8a) midp_ticker_pane_srt_t1

0xad3f,	// (0x00057ff3) midp_editing_number_pane_t1_copy1

0x8afe,	// (0x00055db2) listscroll_midp_pane

0x8afe,	// (0x00055db2) midp_form_pane

0x8b6c,	// (0x00055e20) midp_info_popup_window_ParamLimits

0x8b6c,	// (0x00055e20) midp_info_popup_window

0x7d8b,	// (0x0005503f) bg_popup_sub_pane_cp50_ParamLimits

0x7d8b,	// (0x0005503f) bg_popup_sub_pane_cp50

0x9e2e,	// (0x000570e2) listscroll_midp_info_pane_ParamLimits

0x9e2e,	// (0x000570e2) listscroll_midp_info_pane

0x9e16,	// (0x000570ca) listscroll_form_midp_pane_ParamLimits

0x9e16,	// (0x000570ca) listscroll_form_midp_pane

0x9e22,	// (0x000570d6) scroll_bar_cp050

0x9df6,	// (0x000570aa) list_midp_pane

0xbb0a,	// (0x00058dbe) signal_pane_g2_cp

0x9d30,	// (0x00056fe4) listscroll_midp_info_pane_t1_ParamLimits

0x9d30,	// (0x00056fe4) listscroll_midp_info_pane_t1

0x9d48,	// (0x00056ffc) listscroll_midp_info_pane_t2_ParamLimits

0x9d48,	// (0x00056ffc) listscroll_midp_info_pane_t2

0x9d86,	// (0x0005703a) listscroll_midp_info_pane_t3_ParamLimits

0x9d86,	// (0x0005703a) listscroll_midp_info_pane_t3

0x9dc0,	// (0x00057074) listscroll_midp_info_pane_t4_ParamLimits

0x9dc0,	// (0x00057074) listscroll_midp_info_pane_t4

0x0003,

0xf840,	// (0x0005caf4) listscroll_midp_info_pane_t_ParamLimits

0xf840,	// (0x0005caf4) listscroll_midp_info_pane_t

0x7e55,	// (0x00055109) scroll_pane_cp21

0x9cca,	// (0x00056f7e) form_midp_field_choice_group_pane

0x9cd3,	// (0x00056f87) form_midp_field_text_pane

0x9d16,	// (0x00056fca) form_midp_field_time_pane

0x9d1e,	// (0x00056fd2) form_midp_gauge_slider_pane

0x9d27,	// (0x00056fdb) form_midp_gauge_wait_pane

0x2511,	// (0x0004f7c5) form_midp_image_pane

0x5d89,	// (0x0005303d) list_single_midp_pane_ParamLimits

0x5d89,	// (0x0005303d) list_single_midp_pane

0x9c8e,	// (0x00056f42) form_midp_field_text_pane_t1

0x9aa2,	// (0x00056d56) input_focus_pane_cp050

0x9cb9,	// (0x00056f6d) list_midp_form_text_pane

0x9c5d,	// (0x00056f11) form_midp_field_choice_group_pane_t1

0x9c6b,	// (0x00056f1f) input_focus_pane_cp051

0x9c7f,	// (0x00056f33) list_midp_choice_pane

0x2511,	// (0x0004f7c5) status_idle_pane

0x9c41,	// (0x00056ef5) form_midp_field_time_pane_t1

0x2507,	// (0x0004f7bb) wait_anim_pane_g2_copy1

0x9c4f,	// (0x00056f03) form_midp_field_time_pane_t2

0x0001,

0x8c1c,	// (0x00055ed0) aid_navinavi_width_2_pane

0xf83b,	// (0x0005caef) form_midp_field_time_pane_t

0x2511,	// (0x0004f7c5) input_focus_pane_cp052

0x2511,	// (0x0004f7c5) bg_input_focus_pane_cp040

0x9c01,	// (0x00056eb5) form_midp_gauge_slider_pane_t1

0x9c0f,	// (0x00056ec3) form_midp_gauge_slider_pane_t2

0x9c1d,	// (0x00056ed1) form_midp_gauge_slider_pane_t3

0x9c2b,	// (0x00056edf) form_midp_gauge_slider_pane_t4

0x0003,

0xf832,	// (0x0005cae6) form_midp_gauge_slider_pane_t

0x9c39,	// (0x00056eed) form_midp_slider_pane

0x7397,	// (0x0005464b) bg_input_focus_pane_cp041_ParamLimits

0x7397,	// (0x0005464b) bg_input_focus_pane_cp041

0x9bce,	// (0x00056e82) form_midp_gauge_wait_pane_t1_ParamLimits

0x9bce,	// (0x00056e82) form_midp_gauge_wait_pane_t1

0x9be0,	// (0x00056e94) form_midp_gauge_wait_pane_t2_ParamLimits

0x9be0,	// (0x00056e94) form_midp_gauge_wait_pane_t2

0x0001,

0xf82d,	// (0x0005cae1) form_midp_gauge_wait_pane_t_ParamLimits

0xf82d,	// (0x0005cae1) form_midp_gauge_wait_pane_t

0x9bf2,	// (0x00056ea6) form_midp_wait_pane_ParamLimits

0x9bf2,	// (0x00056ea6) form_midp_wait_pane

0x9b96,	// (0x00056e4a) form_midp_image_pane_g1

0x9b9f,	// (0x00056e53) form_midp_image_pane_t1

0x9bae,	// (0x00056e62) form_midp_image_pane_t2

0x9bbd,	// (0x00056e71) form_midp_image_pane_t3

0x0002,

0xf826,	// (0x0005cada) form_midp_image_pane_t

0x9b8d,	// (0x00056e41) list_single_midp_pane_g1

0x5d7a,	// (0x0005302e) list_single_midp_pane_t1

0x9b73,	// (0x00056e27) list_midp_form_item_pane_ParamLimits

0x9b73,	// (0x00056e27) list_midp_form_item_pane

0x8bc4,	// (0x00055e78) list_midp_form_item_pane_t1

0x8bd3,	// (0x00055e87) midp_ticker_pane_g1

0x8bdf,	// (0x00055e93) midp_ticker_pane_g2

0x0001,

0xf775,	// (0x0005ca29) midp_ticker_pane_g

0x8beb,	// (0x00055e9f) midp_ticker_pane_t1

0xafbe,	// (0x00058272) midp_editing_number_pane_t1

0xaf9c,	// (0x00058250) midp_editing_number_pane

0xafab,	// (0x0005825f) midp_ticker_pane

0xad2f,	// (0x00057fe3) ai_message_heading_pane

0x2511,	// (0x0004f7c5) bg_popup_window_pane_cp14

0xad37,	// (0x00057feb) listscroll_ai_message_pane

0xacb5,	// (0x00057f69) ai_message_heading_pane_g1_ParamLimits

0xacb5,	// (0x00057f69) ai_message_heading_pane_g1

0xacc1,	// (0x00057f75) ai_message_heading_pane_g2_ParamLimits

0xacc1,	// (0x00057f75) ai_message_heading_pane_g2

0xaccf,	// (0x00057f83) ai_message_heading_pane_g3_ParamLimits

0xaccf,	// (0x00057f83) ai_message_heading_pane_g3

0xacdb,	// (0x00057f8f) ai_message_heading_pane_g4_ParamLimits

0xacdb,	// (0x00057f8f) ai_message_heading_pane_g4

0x0003,

0xf967,	// (0x0005cc1b) ai_message_heading_pane_g_ParamLimits

0xf967,	// (0x0005cc1b) ai_message_heading_pane_g

0xace7,	// (0x00057f9b) ai_message_heading_pane_t1_ParamLimits

0xace7,	// (0x00057f9b) ai_message_heading_pane_t1

0xad01,	// (0x00057fb5) ai_message_heading_pane_t2_ParamLimits

0xad01,	// (0x00057fb5) ai_message_heading_pane_t2

0x0001,

0xf970,	// (0x0005cc24) ai_message_heading_pane_t_ParamLimits

0xf970,	// (0x0005cc24) ai_message_heading_pane_t

0xad15,	// (0x00057fc9) bg_popup_heading_pane_cp1_ParamLimits

0xad15,	// (0x00057fc9) bg_popup_heading_pane_cp1

0xaca3,	// (0x00057f57) list_ai_message_pane_ParamLimits

0xaca3,	// (0x00057f57) list_ai_message_pane

0x7e55,	// (0x00055109) scroll_pane_cp10

0xac3f,	// (0x00057ef3) list_ai_message_pane_g1

0xac47,	// (0x00057efb) list_ai_message_pane_g2

0x0001,

0xf944,	// (0x0005cbf8) list_ai_message_pane_g

0xac4f,	// (0x00057f03) list_ai_message_pane_t1_ParamLimits

0xac4f,	// (0x00057f03) list_ai_message_pane_t1

0xac64,	// (0x00057f18) list_ai_message_pane_t2_ParamLimits

0xac64,	// (0x00057f18) list_ai_message_pane_t2

0xac79,	// (0x00057f2d) list_ai_message_pane_t3_ParamLimits

0xac79,	// (0x00057f2d) list_ai_message_pane_t3

0xac8e,	// (0x00057f42) list_ai_message_pane_t4_ParamLimits

0xac8e,	// (0x00057f42) list_ai_message_pane_t4

0x0003,

0xf949,	// (0x0005cbfd) list_ai_message_pane_t_ParamLimits

0xf949,	// (0x0005cbfd) list_ai_message_pane_t

0xac28,	// (0x00057edc) cell_ai_soft_ind_pane_ParamLimits

0xac28,	// (0x00057edc) cell_ai_soft_ind_pane

0x8bfd,	// (0x00055eb1) cell_ai_soft_ind_pane_g1_ParamLimits

0x8bfd,	// (0x00055eb1) cell_ai_soft_ind_pane_g1

0x2511,	// (0x0004f7c5) grid_highlight_cp1

0x8c0a,	// (0x00055ebe) text_secondary_cp56_ParamLimits

0x8c0a,	// (0x00055ebe) text_secondary_cp56

0xabfd,	// (0x00057eb1) example_general_pane_ParamLimits

0xabfd,	// (0x00057eb1) example_general_pane

0xac09,	// (0x00057ebd) example_parent_pane_g1_ParamLimits

0xac09,	// (0x00057ebd) example_parent_pane_g1

0xac15,	// (0x00057ec9) example_parent_pane_t1_ParamLimits

0xac15,	// (0x00057ec9) example_parent_pane_t1

0x9237,	// (0x000564eb) popup_preview_text_window_ParamLimits

0x9237,	// (0x000564eb) popup_preview_text_window

0x8a25,	// (0x00055cd9) list_single_pane_cp2_g4

0x76c9,	// (0x0005497d) bg_popup_preview_window_pane_ParamLimits

0x76c9,	// (0x0005497d) bg_popup_preview_window_pane

0xa930,	// (0x00057be4) popup_preview_text_window_t1_ParamLimits

0xa930,	// (0x00057be4) popup_preview_text_window_t1

0xa94e,	// (0x00057c02) popup_preview_text_window_t2_ParamLimits

0xa94e,	// (0x00057c02) popup_preview_text_window_t2

0xa997,	// (0x00057c4b) popup_preview_text_window_t3_ParamLimits

0xa997,	// (0x00057c4b) popup_preview_text_window_t3

0xa9dc,	// (0x00057c90) popup_preview_text_window_t4_ParamLimits

0xa9dc,	// (0x00057c90) popup_preview_text_window_t4

0x0004,

0xf918,	// (0x0005cbcc) popup_preview_text_window_t_ParamLimits

0xf918,	// (0x0005cbcc) popup_preview_text_window_t

0xaa5a,	// (0x00057d0e) scroll_pane_cp11

0x99b0,	// (0x00056c64) bg_popup_preview_window_pane_g1

0xa8e4,	// (0x00057b98) bg_popup_preview_window_pane_g2

0xa8ee,	// (0x00057ba2) bg_popup_preview_window_pane_g3

0xa8f8,	// (0x00057bac) bg_popup_preview_window_pane_g4

0xa902,	// (0x00057bb6) bg_popup_preview_window_pane_g5

0xa90c,	// (0x00057bc0) bg_popup_preview_window_pane_g6

0xa914,	// (0x00057bc8) bg_popup_preview_window_pane_g7

0xa91c,	// (0x00057bd0) bg_popup_preview_window_pane_g8

0x4a04,	// (0x00051cb8) aid_popup_width_pane

0x9213,	// (0x000564c7) popup_midp_note_alarm_window_ParamLimits

0x9213,	// (0x000564c7) popup_midp_note_alarm_window

0x7cbe,	// (0x00054f72) data_form_pane_ParamLimits

0x53f5,	// (0x000526a9) form_field_data_pane_g1

0x53ff,	// (0x000526b3) form_field_data_pane_t1_ParamLimits

0x7cca,	// (0x00054f7e) input_focus_pane_ParamLimits

0x7cd8,	// (0x00054f8c) data_form_wide_pane_ParamLimits

0x5419,	// (0x000526cd) form_field_data_wide_pane_g1

0x5425,	// (0x000526d9) form_field_data_wide_pane_t1_ParamLimits

0x798f,	// (0x00054c43) input_focus_pane_cp6_ParamLimits

0x7e00,	// (0x000550b4) input_popup_find_pane_g1_ParamLimits

0x7e00,	// (0x000550b4) input_popup_find_pane_g1

0x5679,	// (0x0005292d) aid_navi_side_left_pane

0x568e,	// (0x00052942) aid_navi_side_right_pane

0xa2f3,	// (0x000575a7) bg_popup_window_pane_cp30_ParamLimits

0xa2f3,	// (0x000575a7) bg_popup_window_pane_cp30

0xa36d,	// (0x00057621) popup_midp_note_alarm_window_g1_ParamLimits

0xa36d,	// (0x00057621) popup_midp_note_alarm_window_g1

0xa39d,	// (0x00057651) popup_midp_note_alarm_window_t1_ParamLimits

0xa39d,	// (0x00057651) popup_midp_note_alarm_window_t1

0xa43e,	// (0x000576f2) popup_midp_note_alarm_window_t2_ParamLimits

0xa43e,	// (0x000576f2) popup_midp_note_alarm_window_t2

0xa4ec,	// (0x000577a0) popup_midp_note_alarm_window_t3_ParamLimits

0xa4ec,	// (0x000577a0) popup_midp_note_alarm_window_t3

0xa51e,	// (0x000577d2) popup_midp_note_alarm_window_t4_ParamLimits

0xa51e,	// (0x000577d2) popup_midp_note_alarm_window_t4

0xa544,	// (0x000577f8) popup_midp_note_alarm_window_t5_ParamLimits

0xa544,	// (0x000577f8) popup_midp_note_alarm_window_t5

0x000a,

0xf8b5,	// (0x0005cb69) popup_midp_note_alarm_window_t_ParamLimits

0xf8b5,	// (0x0005cb69) popup_midp_note_alarm_window_t

0xa5f0,	// (0x000578a4) wait_bar_pane_cp1_ParamLimits

0xa5f0,	// (0x000578a4) wait_bar_pane_cp1

0x2511,	// (0x0004f7c5) wait_anim_pane_copy1

0x2511,	// (0x0004f7c5) wait_border_pane_copy1

0x9fd8,	// (0x0005728c) wait_border_pane_g1_copy1

0x543f,	// (0x000526f3) form_field_popup_pane_g1

0x5447,	// (0x000526fb) form_field_popup_pane_t1_ParamLimits

0x7cca,	// (0x00054f7e) input_focus_pane_cp7_ParamLimits

0x7d04,	// (0x00054fb8) list_form_pane_ParamLimits

0x5461,	// (0x00052715) form_field_popup_wide_pane_g1

0x5469,	// (0x0005271d) form_field_popup_wide_pane_t1_ParamLimits

0x7cca,	// (0x00054f7e) input_focus_pane_cp8_ParamLimits

0x7d10,	// (0x00054fc4) list_form_wide_pane_ParamLimits

0xb14f,	// (0x00058403) aid_size_cell_graphic_pane

0x54f5,	// (0x000527a9) data_form_pane_t1_ParamLimits

0x6018,	// (0x000532cc) data_form_wide_pane_t1_ParamLimits

0x955e,	// (0x00056812) bg_status_flat_pane

0x72f7,	// (0x000545ab) title_pane_t1_ParamLimits

0x735f,	// (0x00054613) title_pane_t2_ParamLimits

0x7385,	// (0x00054639) title_pane_t3_ParamLimits

0xf573,	// (0x0005c827) title_pane_t_ParamLimits

0x849d,	// (0x00055751) level_1_signal_ParamLimits

0x84aa,	// (0x0005575e) level_2_signal_ParamLimits

0x84b7,	// (0x0005576b) level_3_signal_ParamLimits

0x84c4,	// (0x00055778) level_4_signal_ParamLimits

0x84d1,	// (0x00055785) level_5_signal_ParamLimits

0x84de,	// (0x00055792) level_6_signal_ParamLimits

0x84eb,	// (0x0005579f) level_7_signal_ParamLimits

0x849d,	// (0x00055751) level_1_battery_ParamLimits

0x84aa,	// (0x0005575e) level_2_battery_ParamLimits

0x84b7,	// (0x0005576b) level_3_battery_ParamLimits

0x84c4,	// (0x00055778) level_4_battery_ParamLimits

0x84d1,	// (0x00055785) level_5_battery_ParamLimits

0x84de,	// (0x00055792) level_6_battery_ParamLimits

0x84eb,	// (0x0005579f) level_7_battery_ParamLimits

0xa1f8,	// (0x000574ac) bg_status_flat_pane_g1

0xa200,	// (0x000574b4) bg_status_flat_pane_g2

0xa208,	// (0x000574bc) bg_status_flat_pane_g3

0xa210,	// (0x000574c4) bg_status_flat_pane_g4

0xa218,	// (0x000574cc) bg_status_flat_pane_g5

0xa220,	// (0x000574d4) bg_status_flat_pane_g6

0xa228,	// (0x000574dc) bg_status_flat_pane_g7

0x73ad,	// (0x00054661) tabs_3_active_pane_t1_ParamLimits

0x73ad,	// (0x00054661) tabs_3_passive_pane_t1_ParamLimits

0x73c7,	// (0x0005467b) tabs_4_active_pane_t1_ParamLimits

0x73c7,	// (0x0005467b) tabs_4_1_passive_pane_t1_ParamLimits

0x7e97,	// (0x0005514b) tabs_2_active_pane_t1_ParamLimits

0x7e97,	// (0x0005514b) tabs_2_passive_pane_t1_ParamLimits

0x7ea9,	// (0x0005515d) bg_active_tab_pane_cp4_ParamLimits

0x7eb7,	// (0x0005516b) tabs_2_long_active_pane_t1_ParamLimits

0x7eca,	// (0x0005517e) bg_passive_tab_pane_cp4_ParamLimits

0x5cc1,	// (0x00052f75) list_single_midp_graphic_pane_t1_ParamLimits

0x7ea9,	// (0x0005515d) bg_active_tab_pane_cp5_ParamLimits

0x7ed6,	// (0x0005518a) tabs_3_long_active_pane_t1_ParamLimits

0x7eca,	// (0x0005517e) bg_passive_tab_pane_cp5_ParamLimits

0x5cc1,	// (0x00052f75) list_single_midp_graphic_pane_t1

0x955e,	// (0x00056812) bg_status_flat_pane_ParamLimits

0x9629,	// (0x000568dd) indicator_pane_cp2_ParamLimits

0x9629,	// (0x000568dd) indicator_pane_cp2

0x976b,	// (0x00056a1f) navi_pane_srt_ParamLimits

0x976b,	// (0x00056a1f) navi_pane_srt

0x978f,	// (0x00056a43) popup_clock_digital_analogue_window_cp1

0x7477,	// (0x0005472b) indicator_pane_t1

0x8af6,	// (0x00055daa) copy_highlight_pane

0x8af6,	// (0x00055daa) cursor_graphics_pane

0x8af6,	// (0x00055daa) graphic_within_text_pane

0x8af6,	// (0x00055daa) link_highlight_pane

0xaa1d,	// (0x00057cd1) popup_preview_text_window_t5_ParamLimits

0xaa1d,	// (0x00057cd1) popup_preview_text_window_t5

0x8c26,	// (0x00055eda) cursor_digital_pane

0x8c26,	// (0x00055eda) cursor_primary_pane

0x8c37,	// (0x00055eeb) cursor_primary_small_pane

0x8c3f,	// (0x00055ef3) cursor_secondary_pane

0x8c47,	// (0x00055efb) cursor_title_pane

0x8c26,	// (0x00055eda) link_highlight_digital_pane

0x8c2e,	// (0x00055ee2) link_highlight_primary_pane

0x8c37,	// (0x00055eeb) link_highlight_primary_small_pane

0x8c3f,	// (0x00055ef3) link_highlight_secondary_pane

0x8c47,	// (0x00055efb) link_highlight_title_pane

0x8c26,	// (0x00055eda) copy_highlight_digital_pane

0x8c26,	// (0x00055eda) copy_highlight_primary_pane

0x8c37,	// (0x00055eeb) copy_highlight_primary_small_pane

0x8c3f,	// (0x00055ef3) copy_highlight_secondary_pane

0x8c47,	// (0x00055efb) copy_highlight_title_pane

0x8c3f,	// (0x00055ef3) graphic_text_digital_pane

0xa296,	// (0x0005754a) graphic_text_primary_pane

0xa29f,	// (0x00057553) graphic_text_primary_small_pane

0x8c37,	// (0x00055eeb) graphic_text_secondary_pane

0x8c26,	// (0x00055eda) graphic_text_title_pane

0x8c4f,	// (0x00055f03) cursor_primary_pane_g1

0xa288,	// (0x0005753c) cursor_text_primary_t1

0xa270,	// (0x00057524) cursor_primary_small_pane_g1

0xa27a,	// (0x0005752e) cursor_text_primary_small_t1

0xa258,	// (0x0005750c) cursor_primary_small_pane_g1_copy1

0xa262,	// (0x00057516) cursor_text_primary_small_t1_copy1

0xa240,	// (0x000574f4) cursor_text_title_t1

0xa24e,	// (0x00057502) cursor_title_pane_g1

0x8c4f,	// (0x00055f03) cursor_digital_pane_g1

0x8c59,	// (0x00055f0d) cursor_text_digital_t1

0x8c67,	// (0x00055f1b) link_highlight_primary_pane_g1

0xa1e9,	// (0x0005749d) link_highlight_primary_pane_t1

0x8c67,	// (0x00055f1b) link_highlight_primary_small_pane_g1

0x8c6f,	// (0x00055f23) link_highlight_primary_small_pane_t1

0x8c7e,	// (0x00055f32) link_highlight_secondary_pane_g1

0x8c86,	// (0x00055f3a) link_highlight_secondary_pane_t1

0xa15d,	// (0x00057411) link_highlight_title_pane_g1

0xa165,	// (0x00057419) link_highlight_title_pane_t1

0xa146,	// (0x000573fa) link_highlight_digital_pane_g1

0xa14e,	// (0x00057402) link_highlight_digital_pane_t1

0xa00e,	// (0x000572c2) copy_highlight_primary_pane_g1

0xa025,	// (0x000572d9) copy_highlight_primary_pane_t1

0xa00e,	// (0x000572c2) copy_highlight_primary_small_pane_g1

0xa016,	// (0x000572ca) copy_highlight_primary_small_pane_t1

0x8c95,	// (0x00055f49) copy_highlight_secondary_pane_g1

0x8c9d,	// (0x00055f51) copy_highlight_secondary_pane_t1

0x9ff7,	// (0x000572ab) copy_highlight_title_pane_g1

0x9fff,	// (0x000572b3) copy_highlight_title_pane_t1

0xa00e,	// (0x000572c2) copy_highlight_digital_pane_g1

0xb31f,	// (0x000585d3) copy_highlight_digital_pane_t1

0xb273,	// (0x00058527) graphic_text_primary_pane_g1

0xb303,	// (0x000585b7) graphic_text_primary_pane_t1

0xb311,	// (0x000585c5) graphic_text_primary_pane_t2

0x0001,

0xf9e4,	// (0x0005cc98) graphic_text_primary_pane_t

0xb2df,	// (0x00058593) graphic_text_primary_small_pane_g1

0xb2e7,	// (0x0005859b) graphic_text_primary_small_pane_t1

0xb2f5,	// (0x000585a9) graphic_text_primary_small_pane_t2

0x0001,

0xf9df,	// (0x0005cc93) graphic_text_primary_small_pane_t

0xb2bb,	// (0x0005856f) graphic_text_secondary_pane_g1

0xb2c3,	// (0x00058577) graphic_text_secondary_pane_t1

0xb2d1,	// (0x00058585) graphic_text_secondary_pane_t2

0x0001,

0xf9da,	// (0x0005cc8e) graphic_text_secondary_pane_t

0xb297,	// (0x0005854b) graphic_text_title_pane_g1

0xb29f,	// (0x00058553) graphic_text_title_pane_t1

0xb2ad,	// (0x00058561) graphic_text_title_pane_t2

0x0001,

0xf9d5,	// (0x0005cc89) graphic_text_title_pane_t

0xb273,	// (0x00058527) graphic_text_digital_pane_g1

0xb27b,	// (0x0005852f) graphic_text_digital_pane_t1

0xb289,	// (0x0005853d) graphic_text_digital_pane_t2

0x0001,

0xf9d0,	// (0x0005cc84) graphic_text_digital_pane_t

0x7397,	// (0x0005464b) navi_icon_pane_srt_ParamLimits

0x7397,	// (0x0005464b) navi_icon_pane_srt

0x2511,	// (0x0004f7c5) navi_midp_pane_srt

0x2511,	// (0x0004f7c5) navi_navi_pane_srt

0x7397,	// (0x0005464b) navi_text_pane_srt_ParamLimits

0x7397,	// (0x0005464b) navi_text_pane_srt

0xb23e,	// (0x000584f2) navi_navi_icon_text_pane_srt

0xb246,	// (0x000584fa) navi_navi_pane_srt_g1_ParamLimits

0xb246,	// (0x000584fa) navi_navi_pane_srt_g1

0xb258,	// (0x0005850c) navi_navi_pane_srt_g2_ParamLimits

0xb258,	// (0x0005850c) navi_navi_pane_srt_g2

0x0001,

0xf9cb,	// (0x0005cc7f) navi_navi_pane_srt_g_ParamLimits

0xf9cb,	// (0x0005cc7f) navi_navi_pane_srt_g

0xb26a,	// (0x0005851e) navi_navi_tabs_pane_srt

0xb23e,	// (0x000584f2) navi_navi_text_pane_srt

0xb23e,	// (0x000584f2) navi_navi_volume_pane_srt

0xb22f,	// (0x000584e3) navi_navi_text_pane_srt_t1

0x60ff,	// (0x000533b3) navi_navi_volume_pane_srt_g1

0x6107,	// (0x000533bb) volume_small_pane_srt_ParamLimits

0x6107,	// (0x000533bb) volume_small_pane_srt

0x59ce,	// (0x00052c82) volume_small_pane_srt_g1_ParamLimits

0x59ce,	// (0x00052c82) volume_small_pane_srt_g1

0x59de,	// (0x00052c92) volume_small_pane_srt_g2_ParamLimits

0x59de,	// (0x00052c92) volume_small_pane_srt_g2

0x59ef,	// (0x00052ca3) volume_small_pane_srt_g3_ParamLimits

0x59ef,	// (0x00052ca3) volume_small_pane_srt_g3

0x5a00,	// (0x00052cb4) volume_small_pane_srt_g4_ParamLimits

0x5a00,	// (0x00052cb4) volume_small_pane_srt_g4

0x5a11,	// (0x00052cc5) volume_small_pane_srt_g5_ParamLimits

0x5a11,	// (0x00052cc5) volume_small_pane_srt_g5

0x5a22,	// (0x00052cd6) volume_small_pane_srt_g6_ParamLimits

0x5a22,	// (0x00052cd6) volume_small_pane_srt_g6

0x5a33,	// (0x00052ce7) volume_small_pane_srt_g7_ParamLimits

0x5a33,	// (0x00052ce7) volume_small_pane_srt_g7

0x5a44,	// (0x00052cf8) volume_small_pane_srt_g8_ParamLimits

0x5a44,	// (0x00052cf8) volume_small_pane_srt_g8

0x5a55,	// (0x00052d09) volume_small_pane_srt_g9_ParamLimits

0x5a55,	// (0x00052d09) volume_small_pane_srt_g9

0x5a66,	// (0x00052d1a) volume_small_pane_srt_g10_ParamLimits

0x5a66,	// (0x00052d1a) volume_small_pane_srt_g10

0x0009,

0xf77a,	// (0x0005ca2e) volume_small_pane_srt_g_ParamLimits

0xf77a,	// (0x0005ca2e) volume_small_pane_srt_g

0x777e,	// (0x00054a32) query_popup_data_pane_cp2

0xb215,	// (0x000584c9) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb215,	// (0x000584c9) navi_navi_icon_text_pane_srt_t1

0xa296,	// (0x0005754a) navi_tabs_2_long_pane_srt

0xa296,	// (0x0005754a) navi_tabs_2_pane_srt

0xa296,	// (0x0005754a) navi_tabs_3_long_pane_srt

0xa296,	// (0x0005754a) navi_tabs_3_pane_srt

0xa296,	// (0x0005754a) navi_tabs_4_pane_srt

0x60df,	// (0x00053393) tabs_2_active_pane_srt_ParamLimits

0x60df,	// (0x00053393) tabs_2_active_pane_srt

0x60ef,	// (0x000533a3) tabs_2_passive_pane_srt_ParamLimits

0x60ef,	// (0x000533a3) tabs_2_passive_pane_srt

0x8e74,	// (0x00056128) bg_passive_tab_pane_cp1_srt_ParamLimits

0x8e74,	// (0x00056128) bg_passive_tab_pane_cp1_srt

0xb1e1,	// (0x00058495) bg_passive_tab_pane_g1_cp1_srt

0x873f,	// (0x000559f3) bg_passive_tab_pane_g2_cp1_srt

0xb1ea,	// (0x0005849e) bg_passive_tab_pane_g3_cp1_srt

0x7397,	// (0x0005464b) bg_active_tab_pane_cp1_srt_ParamLimits

0x7397,	// (0x0005464b) bg_active_tab_pane_cp1_srt

0xb1f3,	// (0x000584a7) tabs_2_active_pane_srt_g1

0xb1fb,	// (0x000584af) tabs_2_active_pane_srt_t1_ParamLimits

0xb1fb,	// (0x000584af) tabs_2_active_pane_srt_t1

0xb1e1,	// (0x00058495) bg_active_tab_pane_g1_cp1_srt

0x873f,	// (0x000559f3) bg_active_tab_pane_g2_cp1_srt

0xb1ea,	// (0x0005849e) bg_active_tab_pane_g3_cp1_srt

0x60ac,	// (0x00053360) tabs_3_active_pane_srt_ParamLimits

0x60ac,	// (0x00053360) tabs_3_active_pane_srt

0x60bd,	// (0x00053371) tabs_3_passive_pane_cp_srt_ParamLimits

0x60bd,	// (0x00053371) tabs_3_passive_pane_cp_srt

0x60ce,	// (0x00053382) tabs_3_passive_pane_srt_ParamLimits

0x60ce,	// (0x00053382) tabs_3_passive_pane_srt

0x8e74,	// (0x00056128) bg_passive_tab_pane_cp2_srt_ParamLimits

0x8e74,	// (0x00056128) bg_passive_tab_pane_cp2_srt

0x8cac,	// (0x00055f60) bg_passive_tab_pane_g1_cp2_srt

0x873f,	// (0x000559f3) bg_passive_tab_pane_g2_cp2_srt

0x8cb5,	// (0x00055f69) bg_passive_tab_pane_g3_cp2_srt

0x7397,	// (0x0005464b) bg_active_tab_pane_cp2_srt_ParamLimits

0x7397,	// (0x0005464b) bg_active_tab_pane_cp2_srt

0xb1c7,	// (0x0005847b) tabs_3_active_pane_srt_g1

0xb1cf,	// (0x00058483) tabs_3_active_pane_srt_t1_ParamLimits

0xb1cf,	// (0x00058483) tabs_3_active_pane_srt_t1

0x8cac,	// (0x00055f60) bg_active_tab_pane_g1_cp2_srt

0x873f,	// (0x000559f3) bg_active_tab_pane_g2_cp2_srt

0x8cb5,	// (0x00055f69) bg_active_tab_pane_g3_cp2_srt

0x6064,	// (0x00053318) tabs_4_active_pane_srt_ParamLimits

0x6064,	// (0x00053318) tabs_4_active_pane_srt

0x6076,	// (0x0005332a) tabs_4_passive_pane_cp2_srt_ParamLimits

0x6076,	// (0x0005332a) tabs_4_passive_pane_cp2_srt

0x8e0a,	// (0x000560be) aid_size_cell_toolbar

0x7eca,	// (0x0005517e) main_idle_act_pane_ParamLimits

0x9039,	// (0x000562ed) popup_large_graphic_colour_window_ParamLimits

0x93e0,	// (0x00056694) popup_toolbar_window_ParamLimits

0x93e0,	// (0x00056694) popup_toolbar_window

0xafe1,	// (0x00058295) list_single_graphic_2heading_pane_ParamLimits

0xafe1,	// (0x00058295) list_single_graphic_2heading_pane

0x824b,	// (0x000554ff) aid_size_cell_apps_grid_lsc_pane

0x825d,	// (0x00055511) aid_size_cell_apps_grid_prt_pane

0x8e74,	// (0x00056128) bg_wml_button_pane_cp1_ParamLimits

0x8e74,	// (0x00056128) bg_wml_button_pane_cp1

0x9c8e,	// (0x00056f42) form_midp_field_text_pane_t1_ParamLimits

0x9aa2,	// (0x00056d56) input_focus_pane_cp050_ParamLimits

0x9cb9,	// (0x00056f6d) list_midp_form_text_pane_ParamLimits

0x9c6b,	// (0x00056f1f) input_focus_pane_cp051_ParamLimits

0x9c7f,	// (0x00056f33) list_midp_choice_pane_ParamLimits

0x9b33,	// (0x00056de7) list_single_2graphic_pane_cp3_ParamLimits

0x9b33,	// (0x00056de7) list_single_2graphic_pane_cp3

0x9b4c,	// (0x00056e00) list_single_midp_graphic_pane_ParamLimits

0x9b4c,	// (0x00056e00) list_single_midp_graphic_pane

0x498c,	// (0x00051c40) list_single_graphic_2heading_pane_g1_ParamLimits

0x498c,	// (0x00051c40) list_single_graphic_2heading_pane_g1

0x4998,	// (0x00051c4c) list_single_graphic_2heading_pane_g4_ParamLimits

0x4998,	// (0x00051c4c) list_single_graphic_2heading_pane_g4

0x49a4,	// (0x00051c58) list_single_graphic_2heading_pane_g5_ParamLimits

0x49a4,	// (0x00051c58) list_single_graphic_2heading_pane_g5

0x0002,

0xf7cd,	// (0x0005ca81) list_single_graphic_2heading_pane_g_ParamLimits

0xf7cd,	// (0x0005ca81) list_single_graphic_2heading_pane_g

0x49b0,	// (0x00051c64) list_single_graphic_2heading_pane_t1_ParamLimits

0x49b0,	// (0x00051c64) list_single_graphic_2heading_pane_t1

0x49c4,	// (0x00051c78) list_single_graphic_2heading_pane_t2_ParamLimits

0x49c4,	// (0x00051c78) list_single_graphic_2heading_pane_t2

0x49e0,	// (0x00051c94) list_single_graphic_2heading_pane_t3_ParamLimits

0x49e0,	// (0x00051c94) list_single_graphic_2heading_pane_t3

0x0002,

0xf7d4,	// (0x0005ca88) list_single_graphic_2heading_pane_t_ParamLimits

0xf7d4,	// (0x0005ca88) list_single_graphic_2heading_pane_t

0x98ee,	// (0x00056ba2) bg_popup_sub_pane_cp2

0x9918,	// (0x00056bcc) grid_toobar_pane

0x5be5,	// (0x00052e99) cell_toolbar_pane_ParamLimits

0x5be5,	// (0x00052e99) cell_toolbar_pane

0x9954,	// (0x00056c08) cell_toolbar_pane_g1_ParamLimits

0x9954,	// (0x00056c08) cell_toolbar_pane_g1

0x9968,	// (0x00056c1c) cell_toolbar_pane_g2_ParamLimits

0x9968,	// (0x00056c1c) cell_toolbar_pane_g2

0x0001,

0xf7e2,	// (0x0005ca96) cell_toolbar_pane_g_ParamLimits

0xf7e2,	// (0x0005ca96) cell_toolbar_pane_g

0x998a,	// (0x00056c3e) grid_highlight_pane_cp2_ParamLimits

0x998a,	// (0x00056c3e) grid_highlight_pane_cp2

0x99a4,	// (0x00056c58) toolbar_button_pane

0x99b0,	// (0x00056c64) toolbar_button_pane_g1

0x99b8,	// (0x00056c6c) toolbar_button_pane_g2

0x99c0,	// (0x00056c74) toolbar_button_pane_g3

0x99c8,	// (0x00056c7c) toolbar_button_pane_g4

0x99d0,	// (0x00056c84) toolbar_button_pane_g5

0x99d8,	// (0x00056c8c) toolbar_button_pane_g6

0x99e0,	// (0x00056c94) toolbar_button_pane_g7

0x99e8,	// (0x00056c9c) toolbar_button_pane_g8

0x99f0,	// (0x00056ca4) toolbar_button_pane_g9

0x0009,

0xf7e7,	// (0x0005ca9b) toolbar_button_pane_g

0x5c3f,	// (0x00052ef3) list_single_2graphic_pane_g1_cp3_ParamLimits

0x5c3f,	// (0x00052ef3) list_single_2graphic_pane_g1_cp3

0x5c4b,	// (0x00052eff) list_single_2graphic_pane_g2_cp3_ParamLimits

0x5c4b,	// (0x00052eff) list_single_2graphic_pane_g2_cp3

0x5c5c,	// (0x00052f10) list_single_2graphic_pane_g3_cp3

0x5c64,	// (0x00052f18) list_single_2graphic_pane_g4_cp3_ParamLimits

0x5c64,	// (0x00052f18) list_single_2graphic_pane_g4_cp3

0x5c70,	// (0x00052f24) list_single_2graphic_pane_t1_cp3_ParamLimits

0x5c70,	// (0x00052f24) list_single_2graphic_pane_t1_cp3

0x5cb5,	// (0x00052f69) list_single_midp_graphic_pane_g2_ParamLimits

0x5cb5,	// (0x00052f69) list_single_midp_graphic_pane_g2

0x5bcd,	// (0x00052e81) aid_zoom_text_primary

0x5bd5,	// (0x00052e89) aid_zoom_text_secondary

0x8d69,	// (0x0005601d) status_small_pane_g7_ParamLimits

0x8d69,	// (0x0005601d) status_small_pane_g7

0x8d8c,	// (0x00056040) status_small_pane_t1_ParamLimits

0x72da,	// (0x0005458e) title_pane_g2

0x0003,

0xf56a,	// (0x0005c81e) title_pane_g

0x7827,	// (0x00054adb) aid_size_cell_colour_1_pane_ParamLimits

0x7827,	// (0x00054adb) aid_size_cell_colour_1_pane

0x783b,	// (0x00054aef) aid_size_cell_colour_2_pane_ParamLimits

0x783b,	// (0x00054aef) aid_size_cell_colour_2_pane

0x784f,	// (0x00054b03) aid_size_cell_colour_3_pane_ParamLimits

0x784f,	// (0x00054b03) aid_size_cell_colour_3_pane

0x7863,	// (0x00054b17) aid_size_cell_colour_4_pane_ParamLimits

0x7863,	// (0x00054b17) aid_size_cell_colour_4_pane

0x55b5,	// (0x00052869) title_pane_stacon_g1_ParamLimits

0x55b5,	// (0x00052869) title_pane_stacon_g1

0xa07c,	// (0x00057330) popup_note_wait_window_g3_ParamLimits

0xa07c,	// (0x00057330) popup_note_wait_window_g3

0xa0f3,	// (0x000573a7) popup_note_wait_window_t5_ParamLimits

0xa0f3,	// (0x000573a7) popup_note_wait_window_t5

0x2511,	// (0x0004f7c5) main_feb_china_hwr_fs_writing_pane

0x8f00,	// (0x000561b4) popup_feb_china_hwr_fs_window_ParamLimits

0x8f00,	// (0x000561b4) popup_feb_china_hwr_fs_window

0x5cd7,	// (0x00052f8b) aid_size_cell_hwr_fs_ParamLimits

0x5cd7,	// (0x00052f8b) aid_size_cell_hwr_fs

0x9aa2,	// (0x00056d56) bg_popup_sub_pane_cp3_ParamLimits

0x9aa2,	// (0x00056d56) bg_popup_sub_pane_cp3

0x5cec,	// (0x00052fa0) grid_hwr_fs_pane_ParamLimits

0x5cec,	// (0x00052fa0) grid_hwr_fs_pane

0x5d04,	// (0x00052fb8) linegrid_hwr_fs_pane_ParamLimits

0x5d04,	// (0x00052fb8) linegrid_hwr_fs_pane

0x5d14,	// (0x00052fc8) cell_hwr_fs_pane_ParamLimits

0x5d14,	// (0x00052fc8) cell_hwr_fs_pane

0x9aae,	// (0x00056d62) linegrid_hwr_fs_pane_g1_ParamLimits

0x9aae,	// (0x00056d62) linegrid_hwr_fs_pane_g1

0x9aba,	// (0x00056d6e) linegrid_hwr_fs_pane_g2_ParamLimits

0x9aba,	// (0x00056d6e) linegrid_hwr_fs_pane_g2

0x9acc,	// (0x00056d80) linegrid_hwr_fs_pane_g3_ParamLimits

0x9acc,	// (0x00056d80) linegrid_hwr_fs_pane_g3

0x5d38,	// (0x00052fec) linegrid_hwr_fs_pane_g4_ParamLimits

0x5d38,	// (0x00052fec) linegrid_hwr_fs_pane_g4

0x5d56,	// (0x0005300a) linegrid_hwr_fs_pane_g5_ParamLimits

0x5d56,	// (0x0005300a) linegrid_hwr_fs_pane_g5

0x0004,

0xf812,	// (0x0005cac6) linegrid_hwr_fs_pane_g_ParamLimits

0xf812,	// (0x0005cac6) linegrid_hwr_fs_pane_g

0x9ad8,	// (0x00056d8c) cell_hwr_fs_pane_g1_ParamLimits

0x9ad8,	// (0x00056d8c) cell_hwr_fs_pane_g1

0x9825,	// (0x00056ad9) cell_hwr_fs_pane_g2_ParamLimits

0x9825,	// (0x00056ad9) cell_hwr_fs_pane_g2

0x9aee,	// (0x00056da2) cell_hwr_fs_pane_g3_ParamLimits

0x9aee,	// (0x00056da2) cell_hwr_fs_pane_g3

0x9afb,	// (0x00056daf) cell_hwr_fs_pane_g4_ParamLimits

0x9afb,	// (0x00056daf) cell_hwr_fs_pane_g4

0x0003,

0xf81d,	// (0x0005cad1) cell_hwr_fs_pane_g_ParamLimits

0xf81d,	// (0x0005cad1) cell_hwr_fs_pane_g

0x5d6c,	// (0x00053020) cell_hwr_fs_pane_t1

0x2511,	// (0x0004f7c5) grid_highlight_pane_cp6

0x2511,	// (0x0004f7c5) main_idle_act2_pane

0x7e3c,	// (0x000550f0) aid_inside_area_popup_secondary

0xa72c,	// (0x000579e0) aid_inside_area_window_primary_ParamLimits

0xa72c,	// (0x000579e0) aid_inside_area_window_primary

0xb32e,	// (0x000585e2) ai2_news_ticker_pane

0xb336,	// (0x000585ea) aid_size_cell_ai1_link_ParamLimits

0xb336,	// (0x000585ea) aid_size_cell_ai1_link

0xb350,	// (0x00058604) popup_ai2_data_window_ParamLimits

0xb350,	// (0x00058604) popup_ai2_data_window

0xb36e,	// (0x00058622) popup_ai2_link_window_ParamLimits

0xb36e,	// (0x00058622) popup_ai2_link_window

0x9aa2,	// (0x00056d56) bg_popup_sub_pane_cp4_ParamLimits

0x9aa2,	// (0x00056d56) bg_popup_sub_pane_cp4

0xb384,	// (0x00058638) grid_ai2_link_pane_ParamLimits

0xb384,	// (0x00058638) grid_ai2_link_pane

0xb39b,	// (0x0005864f) popup_ai2_link_window_g1_ParamLimits

0xb39b,	// (0x0005864f) popup_ai2_link_window_g1

0xb3a7,	// (0x0005865b) popup_ai2_link_window_g2_ParamLimits

0xb3a7,	// (0x0005865b) popup_ai2_link_window_g2

0x0001,

0xf9e9,	// (0x0005cc9d) popup_ai2_link_window_g_ParamLimits

0xf9e9,	// (0x0005cc9d) popup_ai2_link_window_g

0xb3b8,	// (0x0005866c) ai2_mp_button_pane

0xb3c0,	// (0x00058674) ai2_mp_volume_pane

0x9c6b,	// (0x00056f1f) bg_popup_sub_pane_cp5_ParamLimits

0x9c6b,	// (0x00056f1f) bg_popup_sub_pane_cp5

0xb3c8,	// (0x0005867c) heading_ai2_gene_pane_ParamLimits

0xb3c8,	// (0x0005867c) heading_ai2_gene_pane

0xb3d4,	// (0x00058688) list_ai2_gene_pane_ParamLimits

0xb3d4,	// (0x00058688) list_ai2_gene_pane

0xb41c,	// (0x000586d0) cell_ai2_link_pane_ParamLimits

0xb41c,	// (0x000586d0) cell_ai2_link_pane

0xb432,	// (0x000586e6) cell_ai2_link_pane_g1

0x2511,	// (0x0004f7c5) grid_highlight_pane_cp7

0x611c,	// (0x000533d0) ai2_mp_volume_pane_g1

0xb505,	// (0x000587b9) ai2_mp_volume_pane_g2

0xb47a,	// (0x0005872e) list_ai2_gene_pane_t1

0xb50d,	// (0x000587c1) ai2_mp_volume_pane_g3

0x0002,

0xfa02,	// (0x0005ccb6) ai2_mp_volume_pane_g

0x6124,	// (0x000533d8) volume_small_pane_cp3

0xb515,	// (0x000587c9) aid_size_cell_ai2_button

0xb51d,	// (0x000587d1) grid_ai2_button_pane

0xb526,	// (0x000587da) cell_ai2_button_pane_ParamLimits

0xb526,	// (0x000587da) cell_ai2_button_pane

0x2507,	// (0x0004f7bb) cell_ai2_button_pane_g1

0x2511,	// (0x0004f7c5) grid_highlight_pane_cp8

0xb4c5,	// (0x00058779) ai2_gene_pane_t1_ParamLimits

0xb4c5,	// (0x00058779) ai2_gene_pane_t1

0x8e00,	// (0x000560b4) aid_height_parent_landscape

0xadd8,	// (0x0005808c) aid_height_set_list

0xade9,	// (0x0005809d) aid_size_parent

0xb14f,	// (0x00058403) aid_size_cell_graphic_pane_ParamLimits

0xb3e4,	// (0x00058698) popup_ai2_data_window_g1_ParamLimits

0xb3e4,	// (0x00058698) popup_ai2_data_window_g1

0xb3f0,	// (0x000586a4) ai2_news_ticker_pane_g1

0xb3f8,	// (0x000586ac) ai2_news_ticker_pane_g2

0x0001,

0xf9ee,	// (0x0005cca2) ai2_news_ticker_pane_g

0xb400,	// (0x000586b4) ai2_news_ticker_pane_t1

0xb40e,	// (0x000586c2) ai2_news_ticker_pane_t2

0x0001,

0xf9f3,	// (0x0005cca7) ai2_news_ticker_pane_t

0xb43b,	// (0x000586ef) heading_ai2_gene_pane_g1

0xb443,	// (0x000586f7) heading_ai2_gene_pane_t1_ParamLimits

0xb443,	// (0x000586f7) heading_ai2_gene_pane_t1

0xb458,	// (0x0005870c) list_highlight_pane_cp6

0xb460,	// (0x00058714) ai2_gene_pane_ParamLimits

0xb460,	// (0x00058714) ai2_gene_pane

0xb488,	// (0x0005873c) list_ai2_gene_pane_t2

0x0001,

0xf9f8,	// (0x0005ccac) list_ai2_gene_pane_t

0xb496,	// (0x0005874a) list_highlight_pane_cp8_ParamLimits

0xb496,	// (0x0005874a) list_highlight_pane_cp8

0xb4a7,	// (0x0005875b) ai2_gene_pane_g1_ParamLimits

0xb4a7,	// (0x0005875b) ai2_gene_pane_g1

0xb4b9,	// (0x0005876d) ai2_gene_pane_g2_ParamLimits

0xb4b9,	// (0x0005876d) ai2_gene_pane_g2

0x0001,

0xf9fd,	// (0x0005ccb1) ai2_gene_pane_g_ParamLimits

0xf9fd,	// (0x0005ccb1) ai2_gene_pane_g

0x7bb4,	// (0x00054e68) scroll_pane_cp12

0x5b8c,	// (0x00052e40) control_pane_t3_ParamLimits

0x5b8c,	// (0x00052e40) control_pane_t3

0x8d7d,	// (0x00056031) status_small_pane_g8_ParamLimits

0x8d7d,	// (0x00056031) status_small_pane_g8

0x8ffe,	// (0x000562b2) popup_find_window_ParamLimits

0x9229,	// (0x000564dd) popup_note_image_window_ParamLimits

0x5c15,	// (0x00052ec9) list_double2_graphic_pane_vc_g1_ParamLimits

0x5c15,	// (0x00052ec9) list_double2_graphic_pane_vc_g1

0x8a67,	// (0x00055d1b) list_double2_graphic_pane_vc_g2_ParamLimits

0x8a67,	// (0x00055d1b) list_double2_graphic_pane_vc_g2

0x7ffc,	// (0x000552b0) list_double2_graphic_pane_vc_g3_ParamLimits

0x7ffc,	// (0x000552b0) list_double2_graphic_pane_vc_g3

0x0002,

0xf7db,	// (0x0005ca8f) list_double2_graphic_pane_vc_g_ParamLimits

0xf7db,	// (0x0005ca8f) list_double2_graphic_pane_vc_g

0x5c21,	// (0x00052ed5) list_double2_graphic_pane_vc_t1_ParamLimits

0x5c21,	// (0x00052ed5) list_double2_graphic_pane_vc_t1

0x8a67,	// (0x00055d1b) list_single_heading_pane_vc_g1_ParamLimits

0x8a67,	// (0x00055d1b) list_single_heading_pane_vc_g1

0x7ffc,	// (0x000552b0) list_single_heading_pane_vc_g2_ParamLimits

0x7ffc,	// (0x000552b0) list_single_heading_pane_vc_g2

0x0001,

0xf7fc,	// (0x0005cab0) list_single_heading_pane_vc_g_ParamLimits

0xf7fc,	// (0x0005cab0) list_single_heading_pane_vc_g

0x5c8b,	// (0x00052f3f) list_single_heading_pane_vc_t1_ParamLimits

0x5c8b,	// (0x00052f3f) list_single_heading_pane_vc_t1

0x5ca1,	// (0x00052f55) list_single_heading_pane_vc_t2_ParamLimits

0x5ca1,	// (0x00052f55) list_single_heading_pane_vc_t2

0x0001,

0xf801,	// (0x0005cab5) list_single_heading_pane_vc_t_ParamLimits

0xf801,	// (0x0005cab5) list_single_heading_pane_vc_t

0x99f8,	// (0x00056cac) list_setting_number_pane_vc_g1_ParamLimits

0x99f8,	// (0x00056cac) list_setting_number_pane_vc_g1

0x9a04,	// (0x00056cb8) list_setting_number_pane_vc_g2_ParamLimits

0x9a04,	// (0x00056cb8) list_setting_number_pane_vc_g2

0x0001,

0xf806,	// (0x0005caba) list_setting_number_pane_vc_g_ParamLimits

0xf806,	// (0x0005caba) list_setting_number_pane_vc_g

0x9a10,	// (0x00056cc4) list_setting_number_pane_vc_t1_ParamLimits

0x9a10,	// (0x00056cc4) list_setting_number_pane_vc_t1

0x9a24,	// (0x00056cd8) list_setting_number_pane_vc_t2_ParamLimits

0x9a24,	// (0x00056cd8) list_setting_number_pane_vc_t2

0x9a40,	// (0x00056cf4) list_setting_number_pane_vc_t3_ParamLimits

0x9a40,	// (0x00056cf4) list_setting_number_pane_vc_t3

0x0002,

0xf80b,	// (0x0005cabf) list_setting_number_pane_vc_t_ParamLimits

0xf80b,	// (0x0005cabf) list_setting_number_pane_vc_t

0x9a68,	// (0x00056d1c) set_value_pane_vc_ParamLimits

0x9a68,	// (0x00056d1c) set_value_pane_vc

0xafe1,	// (0x00058295) list_double2_graphic_pane_vc_ParamLimits

0xafe1,	// (0x00058295) list_double2_graphic_pane_vc

0xafe1,	// (0x00058295) list_double2_large_graphic_pane_vc_ParamLimits

0xafe1,	// (0x00058295) list_double2_large_graphic_pane_vc

0xafe1,	// (0x00058295) list_double2_pane_vc_ParamLimits

0xafe1,	// (0x00058295) list_double2_pane_vc

0xafe1,	// (0x00058295) list_double_graphic_heading_pane_vc_ParamLimits

0xafe1,	// (0x00058295) list_double_graphic_heading_pane_vc

0xafe1,	// (0x00058295) list_double_graphic_pane_vc_ParamLimits

0xafe1,	// (0x00058295) list_double_graphic_pane_vc

0xafe1,	// (0x00058295) list_double_heading_pane_vc_ParamLimits

0xafe1,	// (0x00058295) list_double_heading_pane_vc

0xafe1,	// (0x00058295) list_double_large_graphic_pane_vc_ParamLimits

0xafe1,	// (0x00058295) list_double_large_graphic_pane_vc

0xafe1,	// (0x00058295) list_double_number_pane_vc_ParamLimits

0xafe1,	// (0x00058295) list_double_number_pane_vc

0xafe1,	// (0x00058295) list_double_pane_vc_ParamLimits

0xafe1,	// (0x00058295) list_double_pane_vc

0xafe1,	// (0x00058295) list_double_time_pane_vc_ParamLimits

0xafe1,	// (0x00058295) list_double_time_pane_vc

0xafe1,	// (0x00058295) list_setting_number_pane_vc_ParamLimits

0xafe1,	// (0x00058295) list_setting_number_pane_vc

0xafe1,	// (0x00058295) list_setting_pane_vc_ParamLimits

0xafe1,	// (0x00058295) list_setting_pane_vc

0xafe1,	// (0x00058295) list_single_graphic_heading_pane_vc_ParamLimits

0xafe1,	// (0x00058295) list_single_graphic_heading_pane_vc

0xafe1,	// (0x00058295) list_single_heading_pane_vc_ParamLimits

0xafe1,	// (0x00058295) list_single_heading_pane_vc

0xaff5,	// (0x000582a9) list_single_number_heading_pane_vc_ParamLimits

0xaff5,	// (0x000582a9) list_single_number_heading_pane_vc

0x5c15,	// (0x00052ec9) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x5c15,	// (0x00052ec9) list_double_graphic_heading_pane_vc_g1

0x8034,	// (0x000552e8) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x8034,	// (0x000552e8) list_double_graphic_heading_pane_vc_g2

0x8040,	// (0x000552f4) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x8040,	// (0x000552f4) list_double_graphic_heading_pane_vc_g3

0x0002,

0xfa09,	// (0x0005ccbd) list_double_graphic_heading_pane_vc_g_ParamLimits

0xfa09,	// (0x0005ccbd) list_double_graphic_heading_pane_vc_g

0x612d,	// (0x000533e1) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x612d,	// (0x000533e1) list_double_graphic_heading_pane_vc_t1

0x5c8b,	// (0x00052f3f) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x5c8b,	// (0x00052f3f) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa10,	// (0x0005ccc4) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa10,	// (0x0005ccc4) list_double_graphic_heading_pane_vc_t

0x99f8,	// (0x00056cac) list_setting_pane_vc_g1_ParamLimits

0x99f8,	// (0x00056cac) list_setting_pane_vc_g1

0x9a04,	// (0x00056cb8) list_setting_pane_vc_g2_ParamLimits

0x9a04,	// (0x00056cb8) list_setting_pane_vc_g2

0x0001,

0xf806,	// (0x0005caba) list_setting_pane_vc_g_ParamLimits

0xf806,	// (0x0005caba) list_setting_pane_vc_g

0xb762,	// (0x00058a16) list_setting_pane_vc_t1_ParamLimits

0xb762,	// (0x00058a16) list_setting_pane_vc_t1

0xb776,	// (0x00058a2a) list_setting_pane_vc_t2_ParamLimits

0xb776,	// (0x00058a2a) list_setting_pane_vc_t2

0x0001,

0xfa3e,	// (0x0005ccf2) list_setting_pane_vc_t_ParamLimits

0xfa3e,	// (0x0005ccf2) list_setting_pane_vc_t

0x9a68,	// (0x00056d1c) set_value_pane_cp_vc_ParamLimits

0x9a68,	// (0x00056d1c) set_value_pane_cp_vc

0x8a67,	// (0x00055d1b) list_single_number_heading_pane_vc_g1_ParamLimits

0x8a67,	// (0x00055d1b) list_single_number_heading_pane_vc_g1

0x7ffc,	// (0x000552b0) list_single_number_heading_pane_vc_g2_ParamLimits

0x7ffc,	// (0x000552b0) list_single_number_heading_pane_vc_g2

0x0001,

0xf7fc,	// (0x0005cab0) list_single_number_heading_pane_vc_g_ParamLimits

0xf7fc,	// (0x0005cab0) list_single_number_heading_pane_vc_g

0x5c8b,	// (0x00052f3f) list_single_number_heading_pane_vc_t1_ParamLimits

0x5c8b,	// (0x00052f3f) list_single_number_heading_pane_vc_t1

0x6141,	// (0x000533f5) list_single_number_heading_pane_vc_t2_ParamLimits

0x6141,	// (0x000533f5) list_single_number_heading_pane_vc_t2

0x6155,	// (0x00053409) list_single_number_heading_pane_vc_t3_ParamLimits

0x6155,	// (0x00053409) list_single_number_heading_pane_vc_t3

0x0002,

0xfa43,	// (0x0005ccf7) list_single_number_heading_pane_vc_t_ParamLimits

0xfa43,	// (0x0005ccf7) list_single_number_heading_pane_vc_t

0x5c15,	// (0x00052ec9) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x5c15,	// (0x00052ec9) list_single_graphic_heading_pane_vc_g1

0x8a67,	// (0x00055d1b) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x8a67,	// (0x00055d1b) list_single_graphic_heading_pane_vc_g4

0x7ffc,	// (0x000552b0) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x7ffc,	// (0x000552b0) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7db,	// (0x0005ca8f) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7db,	// (0x0005ca8f) list_single_graphic_heading_pane_vc_g

0x5c8b,	// (0x00052f3f) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x5c8b,	// (0x00052f3f) list_single_graphic_heading_pane_vc_t1

0x6167,	// (0x0005341b) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x6167,	// (0x0005341b) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa4a,	// (0x0005ccfe) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa4a,	// (0x0005ccfe) list_single_graphic_heading_pane_vc_t

0x8a67,	// (0x00055d1b) list_double2_pane_vc_g1_ParamLimits

0x8a67,	// (0x00055d1b) list_double2_pane_vc_g1

0x7ffc,	// (0x000552b0) list_double2_pane_vc_g2_ParamLimits

0x7ffc,	// (0x000552b0) list_double2_pane_vc_g2

0x0001,

0xf7fc,	// (0x0005cab0) list_double2_pane_vc_g_ParamLimits

0xf7fc,	// (0x0005cab0) list_double2_pane_vc_g

0x617b,	// (0x0005342f) list_double2_pane_vc_t1_ParamLimits

0x617b,	// (0x0005342f) list_double2_pane_vc_t1

0x804c,	// (0x00055300) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x804c,	// (0x00055300) list_double2_large_graphic_pane_vc_g1

0x8a67,	// (0x00055d1b) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x8a67,	// (0x00055d1b) list_double2_large_graphic_pane_vc_g2

0x7ffc,	// (0x000552b0) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x7ffc,	// (0x000552b0) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa4f,	// (0x0005cd03) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa4f,	// (0x0005cd03) list_double2_large_graphic_pane_vc_g

0x6191,	// (0x00053445) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x6191,	// (0x00053445) list_double2_large_graphic_pane_vc_t1

0x8058,	// (0x0005530c) list_double_time_pane_vc_g1_ParamLimits

0x8058,	// (0x0005530c) list_double_time_pane_vc_g1

0x8064,	// (0x00055318) list_double_time_pane_vc_g2_ParamLimits

0x8064,	// (0x00055318) list_double_time_pane_vc_g2

0x0001,

0xfa56,	// (0x0005cd0a) list_double_time_pane_vc_g_ParamLimits

0xfa56,	// (0x0005cd0a) list_double_time_pane_vc_g

0x61a7,	// (0x0005345b) list_double_time_pane_vc_t1_ParamLimits

0x61a7,	// (0x0005345b) list_double_time_pane_vc_t1

0x61c0,	// (0x00053474) list_double_time_pane_vc_t2_ParamLimits

0x61c0,	// (0x00053474) list_double_time_pane_vc_t2

0x6200,	// (0x000534b4) list_double_time_pane_vc_t3_ParamLimits

0x6200,	// (0x000534b4) list_double_time_pane_vc_t3

0x6218,	// (0x000534cc) list_double_time_pane_vc_t4_ParamLimits

0x6218,	// (0x000534cc) list_double_time_pane_vc_t4

0x0003,

0xfa5b,	// (0x0005cd0f) list_double_time_pane_vc_t_ParamLimits

0xfa5b,	// (0x0005cd0f) list_double_time_pane_vc_t

0x8a67,	// (0x00055d1b) list_double_pane_vc_g1_ParamLimits

0x8a67,	// (0x00055d1b) list_double_pane_vc_g1

0x7ffc,	// (0x000552b0) list_double_pane_vc_g2_ParamLimits

0x7ffc,	// (0x000552b0) list_double_pane_vc_g2

0x0001,

0xf7fc,	// (0x0005cab0) list_double_pane_vc_g_ParamLimits

0xf7fc,	// (0x0005cab0) list_double_pane_vc_g

0x622c,	// (0x000534e0) list_double_pane_vc_t1_ParamLimits

0x622c,	// (0x000534e0) list_double_pane_vc_t1

0x623e,	// (0x000534f2) list_double_pane_vc_t2_ParamLimits

0x623e,	// (0x000534f2) list_double_pane_vc_t2

0x0001,

0xfa64,	// (0x0005cd18) list_double_pane_vc_t_ParamLimits

0xfa64,	// (0x0005cd18) list_double_pane_vc_t

0x8a67,	// (0x00055d1b) list_double_number_pane_vc_g1_ParamLimits

0x8a67,	// (0x00055d1b) list_double_number_pane_vc_g1

0x7ffc,	// (0x000552b0) list_double_number_pane_vc_g2_ParamLimits

0x7ffc,	// (0x000552b0) list_double_number_pane_vc_g2

0x0001,

0xf7fc,	// (0x0005cab0) list_double_number_pane_vc_g_ParamLimits

0xf7fc,	// (0x0005cab0) list_double_number_pane_vc_g

0x6256,	// (0x0005350a) list_double_number_pane_vc_t1_ParamLimits

0x6256,	// (0x0005350a) list_double_number_pane_vc_t1

0x626a,	// (0x0005351e) list_double_number_pane_vc_t2_ParamLimits

0x626a,	// (0x0005351e) list_double_number_pane_vc_t2

0x623e,	// (0x000534f2) list_double_number_pane_vc_t3_ParamLimits

0x623e,	// (0x000534f2) list_double_number_pane_vc_t3

0x0002,

0xfa69,	// (0x0005cd1d) list_double_number_pane_vc_t_ParamLimits

0xfa69,	// (0x0005cd1d) list_double_number_pane_vc_t

0x8070,	// (0x00055324) list_double_large_graphic_pane_vc_g1_ParamLimits

0x8070,	// (0x00055324) list_double_large_graphic_pane_vc_g1

0x807c,	// (0x00055330) list_double_large_graphic_pane_vc_g2_ParamLimits

0x807c,	// (0x00055330) list_double_large_graphic_pane_vc_g2

0x7ffc,	// (0x000552b0) list_double_large_graphic_pane_vc_g3_ParamLimits

0x7ffc,	// (0x000552b0) list_double_large_graphic_pane_vc_g3

0x627c,	// (0x00053530) list_double_large_graphic_pane_vc_g4_ParamLimits

0x627c,	// (0x00053530) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa70,	// (0x0005cd24) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa70,	// (0x0005cd24) list_double_large_graphic_pane_vc_g

0x6288,	// (0x0005353c) list_double_large_graphic_pane_vc_t1_ParamLimits

0x6288,	// (0x0005353c) list_double_large_graphic_pane_vc_t1

0x629a,	// (0x0005354e) list_double_large_graphic_pane_vc_t2_ParamLimits

0x629a,	// (0x0005354e) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa79,	// (0x0005cd2d) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa79,	// (0x0005cd2d) list_double_large_graphic_pane_vc_t

0x8034,	// (0x000552e8) list_double_heading_pane_vc_g1_ParamLimits

0x8034,	// (0x000552e8) list_double_heading_pane_vc_g1

0x8040,	// (0x000552f4) list_double_heading_pane_vc_g2_ParamLimits

0x8040,	// (0x000552f4) list_double_heading_pane_vc_g2

0x0001,

0xfa7e,	// (0x0005cd32) list_double_heading_pane_vc_g_ParamLimits

0xfa7e,	// (0x0005cd32) list_double_heading_pane_vc_g

0x62b3,	// (0x00053567) list_double_heading_pane_vc_t1_ParamLimits

0x62b3,	// (0x00053567) list_double_heading_pane_vc_t1

0x5c8b,	// (0x00052f3f) list_double_heading_pane_vc_t2_ParamLimits

0x5c8b,	// (0x00052f3f) list_double_heading_pane_vc_t2

0x0001,

0xfa83,	// (0x0005cd37) list_double_heading_pane_vc_t_ParamLimits

0xfa83,	// (0x0005cd37) list_double_heading_pane_vc_t

0x5c15,	// (0x00052ec9) list_double_graphic_pane_vc_g1_ParamLimits

0x5c15,	// (0x00052ec9) list_double_graphic_pane_vc_g1

0x808b,	// (0x0005533f) list_double_graphic_pane_vc_g2_ParamLimits

0x808b,	// (0x0005533f) list_double_graphic_pane_vc_g2

0x809a,	// (0x0005534e) list_double_graphic_pane_vc_g3_ParamLimits

0x809a,	// (0x0005534e) list_double_graphic_pane_vc_g3

0x0002,

0xfa88,	// (0x0005cd3c) list_double_graphic_pane_vc_g_ParamLimits

0xfa88,	// (0x0005cd3c) list_double_graphic_pane_vc_g

0x62c7,	// (0x0005357b) list_double_graphic_pane_vc_t1_ParamLimits

0x62c7,	// (0x0005357b) list_double_graphic_pane_vc_t1

0x623e,	// (0x000534f2) list_double_graphic_pane_vc_t2_ParamLimits

0x623e,	// (0x000534f2) list_double_graphic_pane_vc_t2

0x0001,

0xfa8f,	// (0x0005cd43) list_double_graphic_pane_vc_t_ParamLimits

0xfa8f,	// (0x0005cd43) list_double_graphic_pane_vc_t

0x4a10,	// (0x00051cc4) aid_size_cell_fastswap

0x4a18,	// (0x00051ccc) aid_size_cell_touch_ParamLimits

0x4a18,	// (0x00051ccc) aid_size_cell_touch

0x4c83,	// (0x00051f37) popup_fast_swap_wide_window_ParamLimits

0x4c83,	// (0x00051f37) popup_fast_swap_wide_window

0x4d99,	// (0x0005204d) touch_pane_ParamLimits

0x4d99,	// (0x0005204d) touch_pane

0x7cb6,	// (0x00054f6a) button_value_adjust_pane_cp2

0x5335,	// (0x000525e9) button_value_adjust_pane_cp4

0x535d,	// (0x00052611) form_field_data_pane_cp2

0x5382,	// (0x00052636) form_field_data_wide_pane_cp2

0x831d,	// (0x000555d1) bg_scroll_pane_ParamLimits

0x571a,	// (0x000529ce) scroll_handle_pane_ParamLimits

0x572e,	// (0x000529e2) scroll_sc2_down_pane_ParamLimits

0x572e,	// (0x000529e2) scroll_sc2_down_pane

0x834e,	// (0x00055602) scroll_sc2_up_pane_ParamLimits

0x834e,	// (0x00055602) scroll_sc2_up_pane

0xbbf2,	// (0x00058ea6) grid_wheel_folder_pane_g1_ParamLimits

0xbbf2,	// (0x00058ea6) grid_wheel_folder_pane_g1

0x5966,	// (0x00052c1a) clock_nsta_pane_cp2_ParamLimits

0x5966,	// (0x00052c1a) clock_nsta_pane_cp2

0x8afe,	// (0x00055db2) listscroll_midp_pane_ParamLimits

0x8b0a,	// (0x00055dbe) midp_canvas_pane

0x8df8,	// (0x000560ac) nsta_clock_indic_pane

0x8e46,	// (0x000560fa) listscroll_form_pane_vc

0x8e62,	// (0x00056116) listscroll_set_pane_vc_ParamLimits

0x8e62,	// (0x00056116) listscroll_set_pane_vc

0x957a,	// (0x0005682e) clock_nsta_pane

0x95f7,	// (0x000568ab) indicator_nsta_pane

0x98ee,	// (0x00056ba2) bg_popup_sub_pane_cp2_ParamLimits

0x9902,	// (0x00056bb6) find_pane_cp2_ParamLimits

0x9902,	// (0x00056bb6) find_pane_cp2

0x9918,	// (0x00056bcc) grid_toobar_pane_ParamLimits

0x9a76,	// (0x00056d2a) list_form_gen_pane_vc_ParamLimits

0x9a76,	// (0x00056d2a) list_form_gen_pane_vc

0x9a8c,	// (0x00056d40) scroll_pane_cp8_vc_ParamLimits

0x9a8c,	// (0x00056d40) scroll_pane_cp8_vc

0x9b08,	// (0x00056dbc) data_form_wide_pane_vc_ParamLimits

0x9b08,	// (0x00056dbc) data_form_wide_pane_vc

0x9b14,	// (0x00056dc8) form_field_data_wide_pane_vc_g1

0x9b1c,	// (0x00056dd0) form_field_data_wide_pane_vc_t1_ParamLimits

0x9b1c,	// (0x00056dd0) form_field_data_wide_pane_vc_t1

0x7cca,	// (0x00054f7e) input_focus_pane_cp6_vc_ParamLimits

0x7cca,	// (0x00054f7e) input_focus_pane_cp6_vc

0x9df6,	// (0x000570aa) list_midp_pane_ParamLimits

0x9e02,	// (0x000570b6) scroll_pane_cp16_ParamLimits

0x9e02,	// (0x000570b6) scroll_pane_cp16

0x9e50,	// (0x00057104) button_value_adjust_pane_ParamLimits

0x9e50,	// (0x00057104) button_value_adjust_pane

0xadfb,	// (0x000580af) button_value_adjust_pane_cp6_ParamLimits

0xadfb,	// (0x000580af) button_value_adjust_pane_cp6

0xaf55,	// (0x00058209) settings_code_pane_cp_ParamLimits

0xaf55,	// (0x00058209) settings_code_pane_cp

0x2507,	// (0x0004f7bb) cell_touch_pane_g1

0x2507,	// (0x0004f7bb) cell_touch_pane_g2

0x0001,

0xf724,	// (0x0005c9d8) cell_touch_pane_g

0xb538,	// (0x000587ec) cell_touch_pane_cp_ParamLimits

0xb538,	// (0x000587ec) cell_touch_pane_cp

0xb548,	// (0x000587fc) cell_touch_pane_ParamLimits

0xb548,	// (0x000587fc) cell_touch_pane

0x2507,	// (0x0004f7bb) scroll_sc2_down_pane_g1

0x2507,	// (0x0004f7bb) scroll_sc2_up_pane_g1

0x2511,	// (0x0004f7c5) bg_set_opt_pane_cp4_vc

0xb559,	// (0x0005880d) list_set_graphic_pane_vc_g1_ParamLimits

0xb559,	// (0x0005880d) list_set_graphic_pane_vc_g1

0xb565,	// (0x00058819) list_set_graphic_pane_vc_g2_ParamLimits

0xb565,	// (0x00058819) list_set_graphic_pane_vc_g2

0x0001,

0xfa15,	// (0x0005ccc9) list_set_graphic_pane_vc_g_ParamLimits

0xfa15,	// (0x0005ccc9) list_set_graphic_pane_vc_g

0xb571,	// (0x00058825) text_primary_small_cp13_vc_ParamLimits

0xb571,	// (0x00058825) text_primary_small_cp13_vc

0xb589,	// (0x0005883d) list_set_graphic_pane_vc_ParamLimits

0xb589,	// (0x0005883d) list_set_graphic_pane_vc

0x2511,	// (0x0004f7c5) input_focus_pane_cp2_vc

0x2507,	// (0x0004f7bb) setting_code_pane_vc_g1

0xb59d,	// (0x00058851) setting_code_pane_vc_t1

0xb5ab,	// (0x0005885f) set_text_pane_vc_t1_ParamLimits

0xb5ab,	// (0x0005885f) set_text_pane_vc_t1

0x2511,	// (0x0004f7c5) input_focus_pane_cp1_vc

0xb5c9,	// (0x0005887d) list_set_text_pane_vc

0x2507,	// (0x0004f7bb) setting_text_pane_vc_g1

0x2511,	// (0x0004f7c5) bg_set_opt_pane_cp2_vc

0xb5d3,	// (0x00058887) setting_slider_graphic_pane_vc_g1

0xb5db,	// (0x0005888f) setting_slider_graphic_pane_vc_t1

0xb5e9,	// (0x0005889d) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa1a,	// (0x0005ccce) setting_slider_graphic_pane_vc_t

0xb5f7,	// (0x000588ab) slider_set_pane_cp_vc

0xb5ff,	// (0x000588b3) slider_set_pane_vc_g1

0xb608,	// (0x000588bc) slider_set_pane_vc_g2

0x0006,

0xfa1f,	// (0x0005ccd3) slider_set_pane_vc_g

0x7d31,	// (0x00054fe5) set_opt_bg_pane_g1_copy1

0x7d39,	// (0x00054fed) set_opt_bg_pane_g2_copy1

0xb634,	// (0x000588e8) set_opt_bg_pane_g3_copy1

0x7d49,	// (0x00054ffd) set_opt_bg_pane_g4_copy1

0x7d51,	// (0x00055005) set_opt_bg_pane_g5_copy1

0x7d59,	// (0x0005500d) set_opt_bg_pane_g6_copy1

0xb63e,	// (0x000588f2) set_opt_bg_pane_g7_copy1

0xb648,	// (0x000588fc) set_opt_bg_pane_g8_copy1

0xb652,	// (0x00058906) set_opt_bg_pane_g9_copy1

0x2511,	// (0x0004f7c5) bg_set_opt_pane_cp_vc

0xb65c,	// (0x00058910) setting_slider_pane_vc_t1

0xb5db,	// (0x0005888f) setting_slider_pane_vc_t2

0xb5e9,	// (0x0005889d) setting_slider_pane_vc_t3

0x0002,

0xfa2e,	// (0x0005cce2) setting_slider_pane_vc_t

0xb5f7,	// (0x000588ab) slider_set_pane_vc

0x5da8,	// (0x0005305c) volume_set_pane_vc_g1

0x5db1,	// (0x00053065) volume_set_pane_vc_g2

0x5dba,	// (0x0005306e) volume_set_pane_vc_g3

0x5dc3,	// (0x00053077) volume_set_pane_vc_g4

0x5dcc,	// (0x00053080) volume_set_pane_vc_g5

0x5dd5,	// (0x00053089) volume_set_pane_vc_g6

0x5dde,	// (0x00053092) volume_set_pane_vc_g7

0x5de7,	// (0x0005309b) volume_set_pane_vc_g8

0x5df0,	// (0x000530a4) volume_set_pane_vc_g9

0x5df9,	// (0x000530ad) volume_set_pane_vc_g10

0x0009,

0xf8cc,	// (0x0005cb80) volume_set_pane_vc_g

0xb66b,	// (0x0005891f) volume_set_pane_vc

0xb673,	// (0x00058927) button_value_adjust_pane_cp1_vc

0xb67d,	// (0x00058931) list_highlight_pane_cp2_vc

0xb686,	// (0x0005893a) list_set_pane_vc_ParamLimits

0xb686,	// (0x0005893a) list_set_pane_vc

0xb6f0,	// (0x000589a4) main_pane_set_vc_t1_ParamLimits

0xb6f0,	// (0x000589a4) main_pane_set_vc_t1

0xb705,	// (0x000589b9) main_pane_set_vc_t2_ParamLimits

0xb705,	// (0x000589b9) main_pane_set_vc_t2

0xb717,	// (0x000589cb) main_pane_set_vc_t3_ParamLimits

0xb717,	// (0x000589cb) main_pane_set_vc_t3

0xb72b,	// (0x000589df) main_pane_set_vc_t4_ParamLimits

0xb72b,	// (0x000589df) main_pane_set_vc_t4

0x0003,

0xfa35,	// (0x0005cce9) main_pane_set_vc_t_ParamLimits

0xfa35,	// (0x0005cce9) main_pane_set_vc_t

0xb73f,	// (0x000589f3) setting_code_pane_vc_ParamLimits

0xb73f,	// (0x000589f3) setting_code_pane_vc

0xb750,	// (0x00058a04) setting_slider_graphic_pane_vc

0xb750,	// (0x00058a04) setting_slider_pane_vc

0xb750,	// (0x00058a04) setting_text_pane_vc

0xb750,	// (0x00058a04) setting_volume_pane_vc

0xb75a,	// (0x00058a0e) scroll_pane_cp121_vc

0x7ca4,	// (0x00054f58) set_content_pane_vc

0xb798,	// (0x00058a4c) button_value_adjust_pane_g1

0xb7a1,	// (0x00058a55) button_value_adjust_pane_g2

0x0001,

0xfa94,	// (0x0005cd48) button_value_adjust_pane_g

0xb7aa,	// (0x00058a5e) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb7aa,	// (0x00058a5e) form_field_slider_wide_pane_vc_t1

0xb7be,	// (0x00058a72) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb7be,	// (0x00058a72) form_field_slider_wide_pane_vc_t2

0x0001,

0xfa99,	// (0x0005cd4d) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa99,	// (0x0005cd4d) form_field_slider_wide_pane_vc_t

0x7613,	// (0x000548c7) input_focus_pane_cp10_vc_ParamLimits

0x7613,	// (0x000548c7) input_focus_pane_cp10_vc

0xb7d0,	// (0x00058a84) slider_cont_pane_cp1_vc_ParamLimits

0xb7d0,	// (0x00058a84) slider_cont_pane_cp1_vc

0xb5ff,	// (0x000588b3) slider_form_pane_g1_cp2

0xb608,	// (0x000588bc) slider_form_pane_g2_cp2

0xb7e9,	// (0x00058a9d) form_field_slider_pane_vc_t3

0xb7f7,	// (0x00058aab) form_field_slider_pane_vc_t4

0xb805,	// (0x00058ab9) slider_form_pane_vc_ParamLimits

0xb805,	// (0x00058ab9) slider_form_pane_vc

0xb812,	// (0x00058ac6) form_field_slider_pane_vc_t1_ParamLimits

0xb812,	// (0x00058ac6) form_field_slider_pane_vc_t1

0xb7be,	// (0x00058a72) form_field_slider_pane_vc_t2_ParamLimits

0xb7be,	// (0x00058a72) form_field_slider_pane_vc_t2

0x0001,

0xfaa9,	// (0x0005cd5d) form_field_slider_pane_vc_t_ParamLimits

0xfaa9,	// (0x0005cd5d) form_field_slider_pane_vc_t

0x7613,	// (0x000548c7) input_focus_pane_cp9_vc_ParamLimits

0x7613,	// (0x000548c7) input_focus_pane_cp9_vc

0xb82e,	// (0x00058ae2) slider_cont_pane_vc_ParamLimits

0xb82e,	// (0x00058ae2) slider_cont_pane_vc

0xb840,	// (0x00058af4) list_form_graphic_pane_cp_vc_ParamLimits

0xb840,	// (0x00058af4) list_form_graphic_pane_cp_vc

0x9b14,	// (0x00056dc8) form_field_popup_wide_pane_vc_g1

0xb855,	// (0x00058b09) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb855,	// (0x00058b09) form_field_popup_wide_pane_vc_t1

0x7cca,	// (0x00054f7e) input_focus_pane_cp8_vc_ParamLimits

0x7cca,	// (0x00054f7e) input_focus_pane_cp8_vc

0xb86c,	// (0x00058b20) list_form_wide_pane_vc_ParamLimits

0xb86c,	// (0x00058b20) list_form_wide_pane_vc

0xb878,	// (0x00058b2c) list_form_graphic_pane_vc_g1

0xb880,	// (0x00058b34) list_form_graphic_pane_vc_t1_ParamLimits

0xb880,	// (0x00058b34) list_form_graphic_pane_vc_t1

0x7397,	// (0x0005464b) list_highlight_pane_cp5_vc_ParamLimits

0x7397,	// (0x0005464b) list_highlight_pane_cp5_vc

0xb89c,	// (0x00058b50) list_form_graphic_pane_vc_ParamLimits

0xb89c,	// (0x00058b50) list_form_graphic_pane_vc

0x9b14,	// (0x00056dc8) form_field_popup_pane_vc_g1

0xb8b2,	// (0x00058b66) form_field_popup_pane_vc_t1_ParamLimits

0xb8b2,	// (0x00058b66) form_field_popup_pane_vc_t1

0x7cca,	// (0x00054f7e) input_focus_pane_cp7_vc_ParamLimits

0x7cca,	// (0x00054f7e) input_focus_pane_cp7_vc

0xb8c9,	// (0x00058b7d) list_form_pane_vc_ParamLimits

0xb8c9,	// (0x00058b7d) list_form_pane_vc

0xb8d5,	// (0x00058b89) data_form_pane_vc_t1_ParamLimits

0xb8d5,	// (0x00058b89) data_form_pane_vc_t1

0x7d31,	// (0x00054fe5) input_focus_pane_vc_g1

0x7d39,	// (0x00054fed) input_focus_pane_vc_g2

0x7d41,	// (0x00054ff5) input_focus_pane_vc_g3

0x7d49,	// (0x00054ffd) input_focus_pane_vc_g4

0x7d51,	// (0x00055005) input_focus_pane_vc_g5

0x7d59,	// (0x0005500d) input_focus_pane_vc_g6

0x7d61,	// (0x00055015) input_focus_pane_vc_g7

0x7d69,	// (0x0005501d) input_focus_pane_vc_g8

0x7d71,	// (0x00055025) input_focus_pane_vc_g9

0x2507,	// (0x0004f7bb) input_focus_pane_vc_g10

0x0009,

0xf6ad,	// (0x0005c961) input_focus_pane_vc_g

0x9b08,	// (0x00056dbc) data_form_pane_vc_ParamLimits

0x9b08,	// (0x00056dbc) data_form_pane_vc

0x9b14,	// (0x00056dc8) form_field_data_pane_vc_g1

0xb8f2,	// (0x00058ba6) form_field_data_pane_vc_t1_ParamLimits

0xb8f2,	// (0x00058ba6) form_field_data_pane_vc_t1

0x7cca,	// (0x00054f7e) input_focus_pane_vc_ParamLimits

0x7cca,	// (0x00054f7e) input_focus_pane_vc

0xb90c,	// (0x00058bc0) button_value_adjust_pane_cp3_vc

0xb914,	// (0x00058bc8) button_value_adjust_pane_cp5_vc

0xb91c,	// (0x00058bd0) form_field_data_pane_vc_ParamLimits

0xb91c,	// (0x00058bd0) form_field_data_pane_vc

0xb937,	// (0x00058beb) form_field_data_pane_vc_cp2

0xb93f,	// (0x00058bf3) form_field_data_wide_pane_vc_ParamLimits

0xb93f,	// (0x00058bf3) form_field_data_wide_pane_vc

0xb959,	// (0x00058c0d) form_field_data_wide_pane_vc_cp2

0xb961,	// (0x00058c15) form_field_popup_pane_vc_ParamLimits

0xb961,	// (0x00058c15) form_field_popup_pane_vc

0xb97c,	// (0x00058c30) form_field_popup_wide_pane_vc_ParamLimits

0xb97c,	// (0x00058c30) form_field_popup_wide_pane_vc

0xb996,	// (0x00058c4a) form_field_slider_pane_vc_ParamLimits

0xb996,	// (0x00058c4a) form_field_slider_pane_vc

0xb9a9,	// (0x00058c5d) form_field_slider_wide_pane_vc_ParamLimits

0xb9a9,	// (0x00058c5d) form_field_slider_wide_pane_vc

0xb9bc,	// (0x00058c70) grid_touch_1_pane_ParamLimits

0xb9bc,	// (0x00058c70) grid_touch_1_pane

0xb9c8,	// (0x00058c7c) grid_touch_2_pane_ParamLimits

0xb9c8,	// (0x00058c7c) grid_touch_2_pane

0x8dc3,	// (0x00056077) touch_pane_g1_ParamLimits

0x8dc3,	// (0x00056077) touch_pane_g1

0xb9e2,	// (0x00058c96) cell_app_pane_cp_wide_ParamLimits

0xb9e2,	// (0x00058c96) cell_app_pane_cp_wide

0xb9f3,	// (0x00058ca7) grid_popup_fast_wide_pane_ParamLimits

0xb9f3,	// (0x00058ca7) grid_popup_fast_wide_pane

0xba07,	// (0x00058cbb) scroll_pane_cp19_ParamLimits

0xba07,	// (0x00058cbb) scroll_pane_cp19

0x2511,	// (0x0004f7c5) bg_popup_window_pane_cp20

0xba1b,	// (0x00058ccf) listscroll_popup_fast_wide_pane

0x7397,	// (0x0005464b) grid_indicator_nsta_pane

0xba23,	// (0x00058cd7) clock_nsta_pane_g1

0xba2c,	// (0x00058ce0) clock_nsta_pane_t1

0xba48,	// (0x00058cfc) cell_indicator_nsta_pane_ParamLimits

0xba48,	// (0x00058cfc) cell_indicator_nsta_pane

0xba80,	// (0x00058d34) cell_indicator_nsta_pane_g1

0xba8e,	// (0x00058d42) cell_indicator_nsta_pane_g2

0x0001,

0xfab3,	// (0x0005cd67) cell_indicator_nsta_pane_g

0xbaa3,	// (0x00058d57) clock_nsta_pane_cp

0xbaab,	// (0x00058d5f) indicator_nsta_pane_cp

0xbab3,	// (0x00058d67) nsta_clock_indic_pane_g1

0x7463,	// (0x00054717) grid_indicator_pane

0x8440,	// (0x000556f4) scroll_pane_cp29

0x58b2,	// (0x00052b66) indicator_nsta_pane_cp2_ParamLimits

0x58b2,	// (0x00052b66) indicator_nsta_pane_cp2

0x7397,	// (0x0005464b) main_apps_wheel_pane

0x9cd3,	// (0x00056f87) form_midp_field_text_pane_ParamLimits

0x9e22,	// (0x000570d6) scroll_bar_cp050_ParamLimits

0xbb1c,	// (0x00058dd0) cell_indicator_pane_ParamLimits

0xbb1c,	// (0x00058dd0) cell_indicator_pane

0xbb34,	// (0x00058de8) cell_indicator_pane_g1

0xbb3e,	// (0x00058df2) grid_wheel_folder_pane_ParamLimits

0xbb3e,	// (0x00058df2) grid_wheel_folder_pane

0xbb52,	// (0x00058e06) list_wheel_apps_pane_ParamLimits

0xbb52,	// (0x00058e06) list_wheel_apps_pane

0xbb65,	// (0x00058e19) main_apps_wheel_pane_g1_ParamLimits

0xbb65,	// (0x00058e19) main_apps_wheel_pane_g1

0xbb81,	// (0x00058e35) main_apps_wheel_pane_g2_ParamLimits

0xbb81,	// (0x00058e35) main_apps_wheel_pane_g2

0x0001,

0xfacf,	// (0x0005cd83) main_apps_wheel_pane_g_ParamLimits

0xfacf,	// (0x0005cd83) main_apps_wheel_pane_g

0xbb9d,	// (0x00058e51) main_apps_wheel_pane_t1_ParamLimits

0xbb9d,	// (0x00058e51) main_apps_wheel_pane_t1

0xbbc6,	// (0x00058e7a) list_wheel_apps_pane_g1

0xbbce,	// (0x00058e82) list_wheel_apps_pane_g2

0xbbd6,	// (0x00058e8a) list_wheel_apps_pane_g3

0xbbde,	// (0x00058e92) list_wheel_apps_pane_g4

0xbbe8,	// (0x00058e9c) list_wheel_apps_pane_g5

0x0004,

0xfad4,	// (0x0005cd88) list_wheel_apps_pane_g

0x8972,	// (0x00055c26) navi_icon_text_pane

0x94a7,	// (0x0005675b) aid_fill_nsta

0xbc09,	// (0x00058ebd) navi_icon_text_pane_g1

0xbc18,	// (0x00058ecc) navi_icon_text_pane_t1

0x8808,	// (0x00055abc) list_set_graphic_pane_t1_ParamLimits

0x8808,	// (0x00055abc) list_set_graphic_pane_t1

0xa573,	// (0x00057827) popup_midp_note_alarm_window_t6_ParamLimits

0xa573,	// (0x00057827) popup_midp_note_alarm_window_t6

0xa585,	// (0x00057839) popup_midp_note_alarm_window_t7_ParamLimits

0xa585,	// (0x00057839) popup_midp_note_alarm_window_t7

0xa597,	// (0x0005784b) popup_midp_note_alarm_window_t8_ParamLimits

0xa597,	// (0x0005784b) popup_midp_note_alarm_window_t8

0xa5a9,	// (0x0005785d) popup_midp_note_alarm_window_t9_ParamLimits

0xa5a9,	// (0x0005785d) popup_midp_note_alarm_window_t9

0xa5bb,	// (0x0005786f) popup_midp_note_alarm_window_t10_ParamLimits

0xa5bb,	// (0x0005786f) popup_midp_note_alarm_window_t10

0xa5cd,	// (0x00057881) popup_midp_note_alarm_window_t11_ParamLimits

0xa5cd,	// (0x00057881) popup_midp_note_alarm_window_t11

0xa5df,	// (0x00057893) scroll_pane_cp17_ParamLimits

0xa5df,	// (0x00057893) scroll_pane_cp17

0x5da8,	// (0x0005305c) volume_small_pane_cp_g1

0x62d9,	// (0x0005358d) volume_small_pane_cp_g2

0x62e2,	// (0x00053596) volume_small_pane_cp_g3

0x62eb,	// (0x0005359f) volume_small_pane_cp_g4

0x62f4,	// (0x000535a8) volume_small_pane_cp_g5

0x62fd,	// (0x000535b1) volume_small_pane_cp_g6

0x6306,	// (0x000535ba) volume_small_pane_cp_g7

0x630f,	// (0x000535c3) volume_small_pane_cp_g8

0x6318,	// (0x000535cc) volume_small_pane_cp_g9

0x6321,	// (0x000535d5) volume_small_pane_cp_g10

0x8bd3,	// (0x00055e87) midp_ticker_pane_g1_ParamLimits

0x8bdf,	// (0x00055e93) midp_ticker_pane_g2_ParamLimits

0xf775,	// (0x0005ca29) midp_ticker_pane_g_ParamLimits

0x8beb,	// (0x00055e9f) midp_ticker_pane_t1_ParamLimits

0x94bd,	// (0x00056771) aid_fill_nsta_2

0x9e0e,	// (0x000570c2) list_form2_midp_pane

0xaf9c,	// (0x00058250) midp_editing_number_pane_ParamLimits

0xafab,	// (0x0005825f) midp_ticker_pane_ParamLimits

0xbc2d,	// (0x00058ee1) form2_midp_field_pane

0xbc51,	// (0x00058f05) scroll_pane_cp51

0xbc71,	// (0x00058f25) form2_midp_button_pane_ParamLimits

0xbc71,	// (0x00058f25) form2_midp_button_pane

0xbc83,	// (0x00058f37) form2_midp_content_pane_ParamLimits

0xbc83,	// (0x00058f37) form2_midp_content_pane

0xbc9d,	// (0x00058f51) form2_midp_field_choice_group_pane

0xbca5,	// (0x00058f59) form2_midp_field_pane_g1

0xbcad,	// (0x00058f61) form2_midp_field_pane_g2

0xbcb5,	// (0x00058f69) form2_midp_field_pane_g3

0xbcbd,	// (0x00058f71) form2_midp_field_pane_g4

0x0003,

0xfaf9,	// (0x0005cdad) form2_midp_field_pane_g

0xbcc5,	// (0x00058f79) form2_midp_gauge_slider_pane

0xbccd,	// (0x00058f81) form2_midp_gauge_wait_pane

0xbcd5,	// (0x00058f89) form2_midp_image_pane_ParamLimits

0xbcd5,	// (0x00058f89) form2_midp_image_pane

0xbcf0,	// (0x00058fa4) form2_midp_label_pane_ParamLimits

0xbcf0,	// (0x00058fa4) form2_midp_label_pane

0xbd0f,	// (0x00058fc3) form2_midp_label_pane_cp_ParamLimits

0xbd0f,	// (0x00058fc3) form2_midp_label_pane_cp

0xbd30,	// (0x00058fe4) form2_midp_string_pane_ParamLimits

0xbd30,	// (0x00058fe4) form2_midp_string_pane

0x632a,	// (0x000535de) form2_midp_text_pane_ParamLimits

0x632a,	// (0x000535de) form2_midp_text_pane

0xbd42,	// (0x00058ff6) form2_midp_time_pane

0xbd52,	// (0x00059006) input_focus_pane_cp51_ParamLimits

0xbd52,	// (0x00059006) input_focus_pane_cp51

0xbd6a,	// (0x0005901e) form2_midp_label_pane_t1_ParamLimits

0xbd6a,	// (0x0005901e) form2_midp_label_pane_t1

0x634d,	// (0x00053601) form2_mdip_text_pane_t1_ParamLimits

0x634d,	// (0x00053601) form2_mdip_text_pane_t1

0x636c,	// (0x00053620) form2_midp_time_pane_t1

0xbdb8,	// (0x0005906c) form2_midp_gauge_slider_pane_t1

0xbdca,	// (0x0005907e) form2_midp_gauge_slider_pane_t2

0xbddc,	// (0x00059090) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb02,	// (0x0005cdb6) form2_midp_gauge_slider_pane_t

0xbdee,	// (0x000590a2) form2_midp_slider_pane

0xbdfa,	// (0x000590ae) form2_midp_gauge_wait_pane_t1

0xbe08,	// (0x000590bc) form2_midp_wait_pane_ParamLimits

0xbe08,	// (0x000590bc) form2_midp_wait_pane

0x9b33,	// (0x00056de7) list_single_2graphic_pane_cp4_ParamLimits

0x9b33,	// (0x00056de7) list_single_2graphic_pane_cp4

0xbe33,	// (0x000590e7) list_single_midp_graphic_pane_cp_ParamLimits

0xbe33,	// (0x000590e7) list_single_midp_graphic_pane_cp

0x2511,	// (0x0004f7c5) list_highlight_pane_cp20

0xbe57,	// (0x0005910b) list_single_2graphic_pane_g1_cp4

0xb43b,	// (0x000586ef) list_single_2graphic_pane_g2_cp4

0xbe5f,	// (0x00059113) list_single_2graphic_pane_t1_cp4

0x7397,	// (0x0005464b) list_highlight_pane_cp21

0xbe6e,	// (0x00059122) list_single_midp_graphic_pane_g4_cp

0xbe7d,	// (0x00059131) list_single_midp_graphic_pane_t1_cp

0xbe92,	// (0x00059146) form2_mdip_string_pane_t1_ParamLimits

0xbe92,	// (0x00059146) form2_mdip_string_pane_t1

0x2511,	// (0x0004f7c5) bg_wml_button_pane_cp2

0x2507,	// (0x0004f7bb) form2_midp_image_pane_g1

0x7c50,	// (0x00054f04) list_double_large_graphic_pane_g5_ParamLimits

0x7c50,	// (0x00054f04) list_double_large_graphic_pane_g5

0x8afe,	// (0x00055db2) midp_form_pane_ParamLimits

0x7397,	// (0x0005464b) main_apps_wheel_pane_ParamLimits

0x9251,	// (0x00056505) popup_preview_window_ParamLimits

0x9251,	// (0x00056505) popup_preview_window

0x9438,	// (0x000566ec) popup_touch_info_window_ParamLimits

0x9438,	// (0x000566ec) popup_touch_info_window

0x945a,	// (0x0005670e) popup_touch_menu_window_ParamLimits

0x945a,	// (0x0005670e) popup_touch_menu_window

0x24fd,	// (0x0004f7b1) bg_popup_sub_pane_cp6

0xbf79,	// (0x0005922d) list_touch_menu_pane

0xbf81,	// (0x00059235) list_single_touch_menu_pane_ParamLimits

0xbf81,	// (0x00059235) list_single_touch_menu_pane

0xbf9c,	// (0x00059250) list_single_touch_menu_pane_t1

0x7397,	// (0x0005464b) bg_popup_sub_pane_cp7_ParamLimits

0x7397,	// (0x0005464b) bg_popup_sub_pane_cp7

0xbfaa,	// (0x0005925e) heading_sub_pane

0xbfb2,	// (0x00059266) list_touch_info_pane_ParamLimits

0xbfb2,	// (0x00059266) list_touch_info_pane

0xbfc1,	// (0x00059275) list_single_touch_info_pane_ParamLimits

0xbfc1,	// (0x00059275) list_single_touch_info_pane

0xbfd3,	// (0x00059287) list_single_touch_info_pane_t1

0xbfe1,	// (0x00059295) list_single_touch_info_pane_t2

0x0001,

0xfb10,	// (0x0005cdc4) list_single_touch_info_pane_t

0x8af6,	// (0x00055daa) bg_popup_heading_pane_cp

0xbfef,	// (0x000592a3) heading_sub_pane_t1

0x9aa2,	// (0x00056d56) bg_popup_preview_window_pane_cp_ParamLimits

0x9aa2,	// (0x00056d56) bg_popup_preview_window_pane_cp

0xbfaa,	// (0x0005925e) heading_preview_pane

0xbfb2,	// (0x00059266) list_preview_pane_ParamLimits

0xbfb2,	// (0x00059266) list_preview_pane

0xbffd,	// (0x000592b1) popup_preview_window_g1

0xbfc1,	// (0x00059275) list_single_preview_pane_ParamLimits

0xbfc1,	// (0x00059275) list_single_preview_pane

0xc005,	// (0x000592b9) list_single_preview_pane_g1

0xc00d,	// (0x000592c1) list_single_preview_pane_t1

0xbfd3,	// (0x00059287) list_single_preview_pane_t2

0x0001,

0xfb15,	// (0x0005cdc9) list_single_preview_pane_t

0xc01b,	// (0x000592cf) bg_popup_heading_pane_cp2_ParamLimits

0xc01b,	// (0x000592cf) bg_popup_heading_pane_cp2

0xc031,	// (0x000592e5) heading_preview_pane_g1

0xc039,	// (0x000592ed) heading_preview_pane_t1_ParamLimits

0xc039,	// (0x000592ed) heading_preview_pane_t1

0x7486,	// (0x0005473a) soft_indicator_pane_t1_ParamLimits

0x7b91,	// (0x00054e45) scroll_pane_ParamLimits

0x833c,	// (0x000555f0) scroll_sc2_left_pane

0x8345,	// (0x000555f9) scroll_sc2_right_pane

0x8364,	// (0x00055618) scroll_bg_pane_g1_ParamLimits

0x8379,	// (0x0005562d) scroll_bg_pane_g2_ParamLimits

0x8391,	// (0x00055645) scroll_bg_pane_g3_ParamLimits

0xf704,	// (0x0005c9b8) scroll_bg_pane_g_ParamLimits

0x8364,	// (0x00055618) scroll_handle_pane_g1_ParamLimits

0x83b3,	// (0x00055667) scroll_handle_pane_g2_ParamLimits

0x8391,	// (0x00055645) scroll_handle_pane_g3_ParamLimits

0xf70b,	// (0x0005c9bf) scroll_handle_pane_g_ParamLimits

0x8e9c,	// (0x00056150) popup_choice_list_window_ParamLimits

0x8e9c,	// (0x00056150) popup_choice_list_window

0x98fa,	// (0x00056bae) choice_list_pane

0x997c,	// (0x00056c30) cell_toolbar_pane_t1

0x99a4,	// (0x00056c58) toolbar_button_pane_ParamLimits

0xaaaf,	// (0x00057d63) ai_gene_pane_1_t2_ParamLimits

0xaaaf,	// (0x00057d63) ai_gene_pane_1_t2

0x0001,

0xf928,	// (0x0005cbdc) ai_gene_pane_1_t_ParamLimits

0xf928,	// (0x0005cbdc) ai_gene_pane_1_t

0xc056,	// (0x0005930a) scroll_sc2_left_pane_g1

0xc056,	// (0x0005930a) scroll_sc2_right_pane_g1

0x8e74,	// (0x00056128) bg_popup_sub_pane_cp10

0xc060,	// (0x00059314) list_choice_list_pane

0xc077,	// (0x0005932b) list_single_choice_list_pane_ParamLimits

0xc077,	// (0x0005932b) list_single_choice_list_pane

0xc08b,	// (0x0005933f) list_single_choice_list_pane_g1

0xc093,	// (0x00059347) list_single_choice_list_pane_t1_ParamLimits

0xc093,	// (0x00059347) list_single_choice_list_pane_t1

0xc0a8,	// (0x0005935c) choice_list_pane_g1

0xc0b0,	// (0x00059364) choice_list_pane_t1

0x24fd,	// (0x0004f7b1) input_focus_pane_cp11

0x8216,	// (0x000554ca) title_pane_stacon_g2_ParamLimits

0x8216,	// (0x000554ca) title_pane_stacon_g2

0x0002,

0xf6ea,	// (0x0005c99e) title_pane_stacon_g_ParamLimits

0xf6ea,	// (0x0005c99e) title_pane_stacon_g

0x8af6,	// (0x00055daa) cursor_press_pane

0x8f52,	// (0x00056206) popup_fep_hwr_window_ParamLimits

0x8f52,	// (0x00056206) popup_fep_hwr_window

0x8fdc,	// (0x00056290) popup_fep_vkb_window_ParamLimits

0x8fdc,	// (0x00056290) popup_fep_vkb_window

0xc0be,	// (0x00059372) cursor_press_pane_g1

0x0002,

0xfb3e,	// (0x0005cdf2) fep_vkb_side_pane_g_ParamLimits

0x63b8,	// (0x0005366c) fep_hwr_candidate_pane_ParamLimits

0x63b8,	// (0x0005366c) fep_hwr_candidate_pane

0x63e2,	// (0x00053696) fep_hwr_side_pane_ParamLimits

0x63e2,	// (0x00053696) fep_hwr_side_pane

0x6404,	// (0x000536b8) fep_hwr_top_pane_ParamLimits

0x6404,	// (0x000536b8) fep_hwr_top_pane

0x641c,	// (0x000536d0) fep_hwr_write_pane_ParamLimits

0x641c,	// (0x000536d0) fep_hwr_write_pane

0xfb3e,	// (0x0005cdf2) fep_vkb_side_pane_g

0xc0c6,	// (0x0005937a) fep_hwr_top_pane_g1

0xc0d8,	// (0x0005938c) fep_hwr_top_pane_g2

0x6456,	// (0x0005370a) fep_hwr_top_pane_g3

0x0002,

0xfb1a,	// (0x0005cdce) fep_hwr_top_pane_g

0x646b,	// (0x0005371f) fep_hwr_top_text_pane

0x8508,	// (0x000557bc) fep_hwr_top_text_pane_g1

0xc10e,	// (0x000593c2) fep_hwr_top_text_pane_t1

0x6575,	// (0x00053829) fep_hwr_candidate_pane_g1

0xc359,	// (0x0005960d) fep_vkb_keypad_pane_g3_ParamLimits

0xc359,	// (0x0005960d) fep_vkb_keypad_pane_g3

0xc385,	// (0x00059639) fep_vkb_keypad_pane_g4_ParamLimits

0xc385,	// (0x00059639) fep_vkb_keypad_pane_g4

0xc3fc,	// (0x000596b0) fep_vkb_bottom_pane_g2_ParamLimits

0xc3fc,	// (0x000596b0) fep_vkb_bottom_pane_g2

0x0001,

0xfb45,	// (0x0005cdf9) fep_vkb_bottom_pane_g_ParamLimits

0xfb45,	// (0x0005cdf9) fep_vkb_bottom_pane_g

0xc056,	// (0x0005930a) cell_vkb_side_pane_g2

0x0001,

0xfb4f,	// (0x0005ce03) cell_vkb_side_pane_g

0xc487,	// (0x0005973b) cell_vkb_side_pane_t1

0xc495,	// (0x00059749) cell_vkb_side_pane_t1_copy1

0xc056,	// (0x0005930a) bg_fep_vkb_candidate_pane_g2

0xc5d9,	// (0x0005988d) cell_vkb_candidate_pane_ParamLimits

0xc11c,	// (0x000593d0) aid_size_cell_vkb_ParamLimits

0xc11c,	// (0x000593d0) aid_size_cell_vkb

0xc5d9,	// (0x0005988d) cell_vkb_candidate_pane

0x659c,	// (0x00053850) bg_popup_fep_shadow_pane_g1

0xc1ae,	// (0x00059462) fep_vkb_bottom_pane_ParamLimits

0xc1ae,	// (0x00059462) fep_vkb_bottom_pane

0xc1eb,	// (0x0005949f) fep_vkb_candidate_pane_ParamLimits

0xc1eb,	// (0x0005949f) fep_vkb_candidate_pane

0xc207,	// (0x000594bb) fep_vkb_keypad_pane_ParamLimits

0xc207,	// (0x000594bb) fep_vkb_keypad_pane

0xc23a,	// (0x000594ee) fep_vkb_side_pane_ParamLimits

0xc23a,	// (0x000594ee) fep_vkb_side_pane

0xc276,	// (0x0005952a) fep_vkb_top_pane_ParamLimits

0xc276,	// (0x0005952a) fep_vkb_top_pane

0xc2b2,	// (0x00059566) fep_vkb_top_pane_g1_ParamLimits

0xc2b2,	// (0x00059566) fep_vkb_top_pane_g1

0xc2c1,	// (0x00059575) fep_vkb_top_pane_g2_ParamLimits

0xc2c1,	// (0x00059575) fep_vkb_top_pane_g2

0xc2d0,	// (0x00059584) fep_vkb_top_pane_g3_ParamLimits

0xc2d0,	// (0x00059584) fep_vkb_top_pane_g3

0x0003,

0xfb35,	// (0x0005cde9) fep_vkb_top_pane_g_ParamLimits

0xfb35,	// (0x0005cde9) fep_vkb_top_pane_g

0xc2ee,	// (0x000595a2) fep_vkb_top_text_pane_ParamLimits

0xc2ee,	// (0x000595a2) fep_vkb_top_text_pane

0xc2ff,	// (0x000595b3) fep_vkb_side_pane_g1_ParamLimits

0xc2ff,	// (0x000595b3) fep_vkb_side_pane_g1

0xc348,	// (0x000595fc) grid_vkb_side_pane_ParamLimits

0xc348,	// (0x000595fc) grid_vkb_side_pane

0x65a4,	// (0x00053858) bg_popup_fep_shadow_pane_g2

0x65ad,	// (0x00053861) bg_popup_fep_shadow_pane_g3

0x65b5,	// (0x00053869) bg_popup_fep_shadow_pane_g4

0x65be,	// (0x00053872) bg_popup_fep_shadow_pane_g5

0x65c8,	// (0x0005387c) bg_popup_fep_shadow_pane_g6

0x65d0,	// (0x00053884) bg_popup_fep_shadow_pane_g7

0x7d49,	// (0x00054ffd) bg_popup_fep_shadow_pane_g8

0xc3a7,	// (0x0005965b) grid_vkb_keypad_number_pane_ParamLimits

0xc3a7,	// (0x0005965b) grid_vkb_keypad_number_pane

0xc3bb,	// (0x0005966f) grid_vkb_keypad_pane_ParamLimits

0xc3bb,	// (0x0005966f) grid_vkb_keypad_pane

0xc3e1,	// (0x00059695) fep_vkb_bottom_pane_g1_ParamLimits

0xc3e1,	// (0x00059695) fep_vkb_bottom_pane_g1

0xc40a,	// (0x000596be) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc40a,	// (0x000596be) grid_vkb_keypad_bottom_left_pane

0xc41f,	// (0x000596d3) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc41f,	// (0x000596d3) grid_vkb_keypad_bottom_right_pane

0xc434,	// (0x000596e8) fep_vkb_top_text_pane_g1

0xc44f,	// (0x00059703) fep_vkb_top_text_pane_t1

0xc464,	// (0x00059718) cell_vkb_side_pane_ParamLimits

0xc464,	// (0x00059718) cell_vkb_side_pane

0xc056,	// (0x0005930a) cell_vkb_side_pane_g1

0xc4a3,	// (0x00059757) cell_vkb_keypad_pane_ParamLimits

0xc4a3,	// (0x00059757) cell_vkb_keypad_pane

0xc530,	// (0x000597e4) cell_vkb_keypad_pane_g1

0x0008,

0xfb62,	// (0x0005ce16) bg_popup_fep_shadow_pane_g

0x65e2,	// (0x00053896) cell_hwr_side_pane_g1

0x65e2,	// (0x00053896) cell_hwr_side_pane_g2

0xc53a,	// (0x000597ee) cell_vkb_keypad_pane_t1

0xc548,	// (0x000597fc) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc548,	// (0x000597fc) cell_vkb_keypad_bottom_left_pane

0xc565,	// (0x00059819) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc565,	// (0x00059819) cell_vkb_keypad_bottom_right_pane

0xc056,	// (0x0005930a) cell_vkb_keypad_bottom_left_pane_g1

0xc056,	// (0x0005930a) cell_vkb_keypad_bottom_right_pane_g1

0xc59e,	// (0x00059852) cell_vkb_keypad_number_pane_ParamLimits

0xc59e,	// (0x00059852) cell_vkb_keypad_number_pane

0xc5bd,	// (0x00059871) cell_vkb_keypad_number_pane_g1

0xc5c7,	// (0x0005987b) cell_vkb_keypad_number_pane_g2

0xc5d0,	// (0x00059884) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb54,	// (0x0005ce08) cell_vkb_keypad_number_pane_g

0xc53a,	// (0x000597ee) cell_vkb_keypad_number_pane_t1

0xc5fa,	// (0x000598ae) fep_vkb_candidate_pane_g1

0x0001,

0xfb75,	// (0x0005ce29) cell_hwr_side_pane_g

0xc613,	// (0x000598c7) cell_hwr_side_pane_t1

0x65ec,	// (0x000538a0) cell_hwr_side_pane_t1_copy1

0x65fa,	// (0x000538ae) cell_hwr_candidate_pane_g1

0x6629,	// (0x000538dd) cell_hwr_candidate_pane_t1

0xc056,	// (0x0005930a) cell_vkb_candidate_pane_g2

0xc657,	// (0x0005990b) cell_vkb_candidate_pane_t1

0x637f,	// (0x00053633) bg_popup_fep_shadow_pane_ParamLimits

0x637f,	// (0x00053633) bg_popup_fep_shadow_pane

0x6436,	// (0x000536ea) bg_fep_hwr_top_pane_g4

0xc0ea,	// (0x0005939e) bg_hwr_side_pane_g1_ParamLimits

0xc0ea,	// (0x0005939e) bg_hwr_side_pane_g1

0x64a9,	// (0x0005375d) cell_hwr_side_pane_ParamLimits

0x64a9,	// (0x0005375d) cell_hwr_side_pane

0x64e6,	// (0x0005379a) fep_hwr_write_pane_g1_ParamLimits

0x64e6,	// (0x0005379a) fep_hwr_write_pane_g1

0x64f3,	// (0x000537a7) fep_hwr_write_pane_g2_ParamLimits

0x64f3,	// (0x000537a7) fep_hwr_write_pane_g2

0x6500,	// (0x000537b4) fep_hwr_write_pane_g3_ParamLimits

0x6500,	// (0x000537b4) fep_hwr_write_pane_g3

0x650e,	// (0x000537c2) fep_hwr_write_pane_g4_ParamLimits

0x650e,	// (0x000537c2) fep_hwr_write_pane_g4

0x0005,

0xfb21,	// (0x0005cdd5) fep_hwr_write_pane_g_ParamLimits

0xfb21,	// (0x0005cdd5) fep_hwr_write_pane_g

0x6436,	// (0x000536ea) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x6436,	// (0x000536ea) bg_fep_hwr_candidate_pane_g2

0x6523,	// (0x000537d7) cell_hwr_candidate_pane_ParamLimits

0x6523,	// (0x000537d7) cell_hwr_candidate_pane

0x6575,	// (0x00053829) fep_hwr_candidate_pane_g1_ParamLimits

0xc14a,	// (0x000593fe) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc14a,	// (0x000593fe) bg_popup_fep_shadow_pane_cp2

0xc2e0,	// (0x00059594) fep_vkb_top_pane_g4_ParamLimits

0xc2e0,	// (0x00059594) fep_vkb_top_pane_g4

0xc326,	// (0x000595da) fep_vkb_side_pane_g2_ParamLimits

0xc326,	// (0x000595da) fep_vkb_side_pane_g2

0x5260,	// (0x00052514) list_setting_pane_t4_ParamLimits

0x5260,	// (0x00052514) list_setting_pane_t4

0x52fc,	// (0x000525b0) list_setting_number_pane_t5_ParamLimits

0x52fc,	// (0x000525b0) list_setting_number_pane_t5

0x854a,	// (0x000557fe) list_double_heading_pane_cp2_ParamLimits

0x854a,	// (0x000557fe) list_double_heading_pane_cp2

0x7ce4,	// (0x00054f98) list_double_heading_pane_g1_cp2_ParamLimits

0x7ce4,	// (0x00054f98) list_double_heading_pane_g1_cp2

0x7cf0,	// (0x00054fa4) list_double_heading_pane_g2_cp2_ParamLimits

0x7cf0,	// (0x00054fa4) list_double_heading_pane_g2_cp2

0xc665,	// (0x00059919) list_double_heading_pane_t1_cp2_ParamLimits

0xc665,	// (0x00059919) list_double_heading_pane_t1_cp2

0xc67b,	// (0x0005992f) list_double_heading_pane_t2_cp2_ParamLimits

0xc67b,	// (0x0005992f) list_double_heading_pane_t2_cp2

0x24f5,	// (0x0004f7a9) aid_value_unit2

0x4ce1,	// (0x00051f95) popup_preview_fixed_window

0x7621,	// (0x000548d5) bg_popup_preview_window_pane_cp02

0xc68d,	// (0x00059941) list_preview_fixed_pane

0xc6d3,	// (0x00059987) list_empty_pane_fp_ParamLimits

0xc6d3,	// (0x00059987) list_empty_pane_fp

0xc6d3,	// (0x00059987) list_single_cale_day_pane_fp_ParamLimits

0xc6d3,	// (0x00059987) list_single_cale_day_pane_fp

0xc6d3,	// (0x00059987) list_single_graphic_heading_pane_fp_ParamLimits

0xc6d3,	// (0x00059987) list_single_graphic_heading_pane_fp

0xc6d3,	// (0x00059987) list_single_graphic_pane_fp_ParamLimits

0xc6d3,	// (0x00059987) list_single_graphic_pane_fp

0xc6d3,	// (0x00059987) list_single_heading_pane_fp_ParamLimits

0xc6d3,	// (0x00059987) list_single_heading_pane_fp

0xc6d3,	// (0x00059987) list_single_pane_fp_ParamLimits

0xc6d3,	// (0x00059987) list_single_pane_fp

0xc6ec,	// (0x000599a0) list_single_pane_fp_g1_ParamLimits

0xc6ec,	// (0x000599a0) list_single_pane_fp_g1

0x7c44,	// (0x00054ef8) list_single_pane_fp_g2_ParamLimits

0x7c44,	// (0x00054ef8) list_single_pane_fp_g2

0x80a6,	// (0x0005535a) list_single_pane_fp_g3_ParamLimits

0x80a6,	// (0x0005535a) list_single_pane_fp_g3

0xc6f8,	// (0x000599ac) list_single_pane_fp_g4_ParamLimits

0xc6f8,	// (0x000599ac) list_single_pane_fp_g4

0x0003,

0xfb88,	// (0x0005ce3c) list_single_pane_fp_g_ParamLimits

0xfb88,	// (0x0005ce3c) list_single_pane_fp_g

0x6647,	// (0x000538fb) list_single_pane_fp_t1_ParamLimits

0x6647,	// (0x000538fb) list_single_pane_fp_t1

0x665e,	// (0x00053912) list_single_graphic_pane_fp_g1_ParamLimits

0x665e,	// (0x00053912) list_single_graphic_pane_fp_g1

0xc6ec,	// (0x000599a0) list_single_graphic_pane_fp_g2_ParamLimits

0xc6ec,	// (0x000599a0) list_single_graphic_pane_fp_g2

0x7c44,	// (0x00054ef8) list_single_graphic_pane_fp_g3_ParamLimits

0x7c44,	// (0x00054ef8) list_single_graphic_pane_fp_g3

0x80a6,	// (0x0005535a) list_single_graphic_pane_fp_g4_ParamLimits

0x80a6,	// (0x0005535a) list_single_graphic_pane_fp_g4

0xc6f8,	// (0x000599ac) list_single_graphic_pane_fp_g5_ParamLimits

0xc6f8,	// (0x000599ac) list_single_graphic_pane_fp_g5

0x0004,

0xfb91,	// (0x0005ce45) list_single_graphic_pane_fp_g_ParamLimits

0xfb91,	// (0x0005ce45) list_single_graphic_pane_fp_g

0x666a,	// (0x0005391e) list_single_graphic_pane_fp_t1_ParamLimits

0x666a,	// (0x0005391e) list_single_graphic_pane_fp_t1

0x665e,	// (0x00053912) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x665e,	// (0x00053912) list_single_graphic_heading_pane_fp_g1

0xc6ec,	// (0x000599a0) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc6ec,	// (0x000599a0) list_single_graphic_heading_pane_fp_g2

0x7c44,	// (0x00054ef8) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x7c44,	// (0x00054ef8) list_single_graphic_heading_pane_fp_g3

0x80a6,	// (0x0005535a) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x80a6,	// (0x0005535a) list_single_graphic_heading_pane_fp_g4

0xc6f8,	// (0x000599ac) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc6f8,	// (0x000599ac) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb91,	// (0x0005ce45) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb91,	// (0x0005ce45) list_single_graphic_heading_pane_fp_g

0x6680,	// (0x00053934) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x6680,	// (0x00053934) list_single_graphic_heading_pane_fp_t1

0x6696,	// (0x0005394a) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x6696,	// (0x0005394a) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb9c,	// (0x0005ce50) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb9c,	// (0x0005ce50) list_single_graphic_heading_pane_fp_t

0x66a8,	// (0x0005395c) list_single_cale_day_pane_fp_g1_ParamLimits

0x66a8,	// (0x0005395c) list_single_cale_day_pane_fp_g1

0xc704,	// (0x000599b8) list_single_cale_day_pane_fp_g2_ParamLimits

0xc704,	// (0x000599b8) list_single_cale_day_pane_fp_g2

0x80ba,	// (0x0005536e) list_single_cale_day_pane_fp_g3_ParamLimits

0x80ba,	// (0x0005536e) list_single_cale_day_pane_fp_g3

0x80e2,	// (0x00055396) list_single_cale_day_pane_fp_g4_ParamLimits

0x80e2,	// (0x00055396) list_single_cale_day_pane_fp_g4

0x8106,	// (0x000553ba) list_single_cale_day_pane_fp_g5_ParamLimits

0x8106,	// (0x000553ba) list_single_cale_day_pane_fp_g5

0x0004,

0xfba1,	// (0x0005ce55) list_single_cale_day_pane_fp_g_ParamLimits

0xfba1,	// (0x0005ce55) list_single_cale_day_pane_fp_g

0x66e0,	// (0x00053994) list_single_cale_day_pane_fp_t1_ParamLimits

0x66e0,	// (0x00053994) list_single_cale_day_pane_fp_t1

0x6706,	// (0x000539ba) list_single_cale_day_pane_fp_t2_ParamLimits

0x6706,	// (0x000539ba) list_single_cale_day_pane_fp_t2

0x671f,	// (0x000539d3) list_single_cale_day_pane_fp_t3_ParamLimits

0x671f,	// (0x000539d3) list_single_cale_day_pane_fp_t3

0x0002,

0xfbac,	// (0x0005ce60) list_single_cale_day_pane_fp_t_ParamLimits

0xfbac,	// (0x0005ce60) list_single_cale_day_pane_fp_t

0xc6ec,	// (0x000599a0) list_empty_pane_fp_g1_ParamLimits

0xc6ec,	// (0x000599a0) list_empty_pane_fp_g1

0x6738,	// (0x000539ec) list_empty_pane_fp_t1

0x6746,	// (0x000539fa) list_empty_pane_fp_t2

0x0001,

0xfbb3,	// (0x0005ce67) list_empty_pane_fp_t

0xc6ec,	// (0x000599a0) list_single_heading_pane_fp_g1_ParamLimits

0xc6ec,	// (0x000599a0) list_single_heading_pane_fp_g1

0x7c44,	// (0x00054ef8) list_single_heading_pane_fp_g2_ParamLimits

0x7c44,	// (0x00054ef8) list_single_heading_pane_fp_g2

0x80a6,	// (0x0005535a) list_single_heading_pane_fp_g3_ParamLimits

0x80a6,	// (0x0005535a) list_single_heading_pane_fp_g3

0x0002,

0xfbb8,	// (0x0005ce6c) list_single_heading_pane_fp_g_ParamLimits

0xfbb8,	// (0x0005ce6c) list_single_heading_pane_fp_g

0x6754,	// (0x00053a08) list_single_heading_pane_fp_t1_ParamLimits

0x6754,	// (0x00053a08) list_single_heading_pane_fp_t1

0x6766,	// (0x00053a1a) list_single_heading_pane_fp_t2_ParamLimits

0x6766,	// (0x00053a1a) list_single_heading_pane_fp_t2

0x0001,

0xfbbf,	// (0x0005ce73) list_single_heading_pane_fp_t_ParamLimits

0xfbbf,	// (0x0005ce73) list_single_heading_pane_fp_t

0x7ee8,	// (0x0005519c) aid_size_cell_fast

0x7593,	// (0x00054847) soft_indicator_pane_cp1_t1

0x7f25,	// (0x000551d9) cell_app_pane_cp2_ParamLimits

0x7f25,	// (0x000551d9) cell_app_pane_cp2

0x63a1,	// (0x00053655) fep_hwr_candidate_drop_down_list_pane

0x658f,	// (0x00053843) fep_hwr_candidate_pane_g3_ParamLimits

0x658f,	// (0x00053843) fep_hwr_candidate_pane_g3

0x35fd,	// (0x000508b1) fep_hwr_candidate_pane_g4_ParamLimits

0x35fd,	// (0x000508b1) fep_hwr_candidate_pane_g4

0x0002,

0xfb2e,	// (0x0005cde2) fep_hwr_candidate_pane_g_ParamLimits

0xfb2e,	// (0x0005cde2) fep_hwr_candidate_pane_g

0xc1da,	// (0x0005948e) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc1da,	// (0x0005948e) fep_vkb_candidate_drop_down_list_pane

0xc602,	// (0x000598b6) fep_vkb_candidate_pane_g3

0xc60a,	// (0x000598be) fep_vkb_candidate_pane_g4

0x0002,

0xfb5b,	// (0x0005ce0f) fep_vkb_candidate_pane_g

0x65fa,	// (0x000538ae) cell_hwr_candidate_pane_g1_ParamLimits

0x6608,	// (0x000538bc) cell_hwr_candidate_pane_g3_ParamLimits

0x6608,	// (0x000538bc) cell_hwr_candidate_pane_g3

0xce71,	// (0x0005a125) cell_hwr_candidate_pane_g4_ParamLimits

0xce71,	// (0x0005a125) cell_hwr_candidate_pane_g4

0x0002,

0xfb7a,	// (0x0005ce2e) cell_hwr_candidate_pane_g_ParamLimits

0xfb7a,	// (0x0005ce2e) cell_hwr_candidate_pane_g

0xc621,	// (0x000598d5) cell_vkb_candidate_pane_g3_ParamLimits

0xc621,	// (0x000598d5) cell_vkb_candidate_pane_g3

0xc63c,	// (0x000598f0) cell_vkb_candidate_pane_g4_ParamLimits

0xc63c,	// (0x000598f0) cell_vkb_candidate_pane_g4

0xc710,	// (0x000599c4) cell_app_pane_cp2_g1_ParamLimits

0xc710,	// (0x000599c4) cell_app_pane_cp2_g1

0xc72e,	// (0x000599e2) cell_app_pane_cp2_g2_ParamLimits

0xc72e,	// (0x000599e2) cell_app_pane_cp2_g2

0x0001,

0xfbc4,	// (0x0005ce78) cell_app_pane_cp2_g_ParamLimits

0xfbc4,	// (0x0005ce78) cell_app_pane_cp2_g

0xc73a,	// (0x000599ee) cell_app_pane_cp2_t1_ParamLimits

0xc73a,	// (0x000599ee) cell_app_pane_cp2_t1

0x7cca,	// (0x00054f7e) grid_highlight_pane_cp1_ParamLimits

0x7cca,	// (0x00054f7e) grid_highlight_pane_cp1

0x677c,	// (0x00053a30) cell_hwr_candidate_pane_cp1_ParamLimits

0x677c,	// (0x00053a30) cell_hwr_candidate_pane_cp1

0x65fa,	// (0x000538ae) fep_hwr_candidate_drop_down_list_pane_g1

0x67a0,	// (0x00053a54) fep_hwr_candidate_drop_down_list_pane_g2

0x67ad,	// (0x00053a61) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbc9,	// (0x0005ce7d) fep_hwr_candidate_drop_down_list_pane_g

0x67ba,	// (0x00053a6e) fep_hwr_candidate_drop_down_list_scroll_pane

0x67c3,	// (0x00053a77) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x67c3,	// (0x00053a77) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x67d0,	// (0x00053a84) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x67d0,	// (0x00053a84) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x67dd,	// (0x00053a91) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x67dd,	// (0x00053a91) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x67ea,	// (0x00053a9e) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x67ea,	// (0x00053a9e) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x6805,	// (0x00053ab9) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6805,	// (0x00053ab9) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x6820,	// (0x00053ad4) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x6820,	// (0x00053ad4) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x683b,	// (0x00053aef) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x683b,	// (0x00053aef) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x6856,	// (0x00053b0a) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x6856,	// (0x00053b0a) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd0,	// (0x0005ce84) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd0,	// (0x0005ce84) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc74c,	// (0x00059a00) cell_vkb_candidate_pane_cp1_ParamLimits

0xc74c,	// (0x00059a00) cell_vkb_candidate_pane_cp1

0xc2e0,	// (0x00059594) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc2e0,	// (0x00059594) fep_vkb_candidate_drop_down_list_pane_g1

0xc772,	// (0x00059a26) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc772,	// (0x00059a26) fep_vkb_candidate_drop_down_list_pane_g2

0xc77f,	// (0x00059a33) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc77f,	// (0x00059a33) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbe1,	// (0x0005ce95) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbe1,	// (0x0005ce95) fep_vkb_candidate_drop_down_list_pane_g

0xc78c,	// (0x00059a40) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc78c,	// (0x00059a40) fep_vkb_candidate_drop_down_list_scroll_pane

0xc799,	// (0x00059a4d) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc799,	// (0x00059a4d) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc7a6,	// (0x00059a5a) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc7a6,	// (0x00059a5a) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc7b2,	// (0x00059a66) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc7b2,	// (0x00059a66) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc7be,	// (0x00059a72) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc7be,	// (0x00059a72) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc7df,	// (0x00059a93) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc7df,	// (0x00059a93) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc800,	// (0x00059ab4) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc800,	// (0x00059ab4) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc821,	// (0x00059ad5) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc821,	// (0x00059ad5) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc842,	// (0x00059af6) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc842,	// (0x00059af6) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbe8,	// (0x0005ce9c) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbe8,	// (0x0005ce9c) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x72cd,	// (0x00054581) title_pane_g1_ParamLimits

0x72da,	// (0x0005458e) title_pane_g2_ParamLimits

0xf56a,	// (0x0005c81e) title_pane_g_ParamLimits

0x84f8,	// (0x000557ac) aid_call2_pane

0x8500,	// (0x000557b4) aid_call_pane

0x8508,	// (0x000557bc) popup_clock_analogue_window_g1

0x8508,	// (0x000557bc) popup_clock_analogue_window_g2

0x5743,	// (0x000529f7) popup_clock_analogue_window_g3

0x574c,	// (0x00052a00) popup_clock_analogue_window_g4

0x2507,	// (0x0004f7bb) popup_clock_analogue_window_g5

0x0004,

0xf719,	// (0x0005c9cd) popup_clock_analogue_window_g

0x5754,	// (0x00052a08) popup_clock_analogue_window_t1

0x5762,	// (0x00052a16) clock_digital_number_pane_ParamLimits

0x5762,	// (0x00052a16) clock_digital_number_pane

0x576e,	// (0x00052a22) clock_digital_number_pane_cp02_ParamLimits

0x576e,	// (0x00052a22) clock_digital_number_pane_cp02

0x577a,	// (0x00052a2e) clock_digital_number_pane_cp03_ParamLimits

0x577a,	// (0x00052a2e) clock_digital_number_pane_cp03

0x5786,	// (0x00052a3a) clock_digital_number_pane_cp04_ParamLimits

0x5786,	// (0x00052a3a) clock_digital_number_pane_cp04

0x5792,	// (0x00052a46) clock_digital_separator_pane_ParamLimits

0x5792,	// (0x00052a46) clock_digital_separator_pane

0x579e,	// (0x00052a52) popup_clock_digital_window_t1_ParamLimits

0x579e,	// (0x00052a52) popup_clock_digital_window_t1

0x2507,	// (0x0004f7bb) clock_digital_number_pane_g1

0x2507,	// (0x0004f7bb) clock_digital_number_pane_g2

0x0001,

0xf724,	// (0x0005c9d8) clock_digital_number_pane_g

0x2507,	// (0x0004f7bb) clock_digital_separator_pane_g1

0x2507,	// (0x0004f7bb) clock_digital_separator_pane_g2

0x0001,

0xf724,	// (0x0005c9d8) clock_digital_separator_pane_g

0x94a7,	// (0x0005675b) aid_fill_nsta_ParamLimits

0x95f7,	// (0x000568ab) indicator_nsta_pane_ParamLimits

0x9787,	// (0x00056a3b) popup_clock_analogue_window

0x9787,	// (0x00056a3b) popup_clock_digital_window

0x7397,	// (0x0005464b) grid_indicator_nsta_pane_ParamLimits

0xba3a,	// (0x00058cee) clock_nsta_pane_t2

0x0001,

0xfaae,	// (0x0005cd62) clock_nsta_pane_t

0x5707,	// (0x000529bb) aid_size_max_handle

0x5711,	// (0x000529c5) aid_size_min_handle

0x8af6,	// (0x00055daa) editor_scroll_pane

0xc85d,	// (0x00059b11) ex_editor_pane

0x7e55,	// (0x00055109) scroll_pane_cp13

0x7bbd,	// (0x00054e71) scroll_pane_cp14

0x8532,	// (0x000557e6) scroll_pane_cp36

0x8560,	// (0x00055814) list_single_graphic_hl_pane_cp2_ParamLimits

0x8560,	// (0x00055814) list_single_graphic_hl_pane_cp2

0x8008,	// (0x000552bc) list_single_graphic_hl_pane_ParamLimits

0x8008,	// (0x000552bc) list_single_graphic_hl_pane

0x6871,	// (0x00053b25) aid_size_min_hl_cp1

0xc865,	// (0x00059b19) list_highlight_pane_cp34_ParamLimits

0xc865,	// (0x00059b19) list_highlight_pane_cp34

0xc876,	// (0x00059b2a) list_single_graphic_hl_pane_g1_ParamLimits

0xc876,	// (0x00059b2a) list_single_graphic_hl_pane_g1

0x687a,	// (0x00053b2e) list_single_graphic_hl_pane_g2_ParamLimits

0x687a,	// (0x00053b2e) list_single_graphic_hl_pane_g2

0x687a,	// (0x00053b2e) list_single_graphic_hl_pane_g3_ParamLimits

0x687a,	// (0x00053b2e) list_single_graphic_hl_pane_g3

0x8034,	// (0x000552e8) list_single_graphic_hl_pane_g4_ParamLimits

0x8034,	// (0x000552e8) list_single_graphic_hl_pane_g4

0x812a,	// (0x000553de) list_single_graphic_hl_pane_g5_ParamLimits

0x812a,	// (0x000553de) list_single_graphic_hl_pane_g5

0x0004,

0xfbf9,	// (0x0005cead) list_single_graphic_hl_pane_g_ParamLimits

0xfbf9,	// (0x0005cead) list_single_graphic_hl_pane_g

0x6886,	// (0x00053b3a) list_single_graphic_hl_pane_t1_ParamLimits

0x6886,	// (0x00053b3a) list_single_graphic_hl_pane_t1

0xc883,	// (0x00059b37) aid_size_min_hl_cp2

0xc88c,	// (0x00059b40) list_highlight_pane_cp34_cp2_ParamLimits

0xc88c,	// (0x00059b40) list_highlight_pane_cp34_cp2

0xc876,	// (0x00059b2a) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc876,	// (0x00059b2a) list_single_graphic_hl_pane_g1_cp2

0xc899,	// (0x00059b4d) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc899,	// (0x00059b4d) list_single_graphic_hl_pane_g2_cp2

0xc8a5,	// (0x00059b59) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc8a5,	// (0x00059b59) list_single_graphic_hl_pane_g3_cp2

0x7bc5,	// (0x00054e79) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x7bc5,	// (0x00054e79) list_single_graphic_hl_pane_g4_cp2

0xc8b3,	// (0x00059b67) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc8b3,	// (0x00059b67) list_single_graphic_hl_pane_g5_cp2

0x5ac5,	// (0x00052d79) control_pane_g4_ParamLimits

0x5ac5,	// (0x00052d79) control_pane_g4

0x8e74,	// (0x00056128) bg_popup_sub_pane_cp10_ParamLimits

0xc060,	// (0x00059314) list_choice_list_pane_ParamLimits

0xc06f,	// (0x00059323) scroll_pane_cp23

0x7621,	// (0x000548d5) bg_popup_preview_window_pane_cp02_ParamLimits

0xc68d,	// (0x00059941) list_preview_fixed_pane_ParamLimits

0xc6a3,	// (0x00059957) list_preview_fixed_pane_cp_ParamLimits

0xc6a3,	// (0x00059957) list_preview_fixed_pane_cp

0xc6af,	// (0x00059963) popup_preview_fixed_window_g1_ParamLimits

0xc6af,	// (0x00059963) popup_preview_fixed_window_g1

0xc6bb,	// (0x0005996f) popup_preview_fixed_window_g2_ParamLimits

0xc6bb,	// (0x0005996f) popup_preview_fixed_window_g2

0x0002,

0xfb81,	// (0x0005ce35) popup_preview_fixed_window_g_ParamLimits

0xfb81,	// (0x0005ce35) popup_preview_fixed_window_g

0x5679,	// (0x0005292d) aid_navi_side_left_pane_ParamLimits

0x568e,	// (0x00052942) aid_navi_side_right_pane_ParamLimits

0x56a6,	// (0x0005295a) navi_icon_pane_stacon_ParamLimits

0x56ba,	// (0x0005296e) navi_navi_pane_stacon_ParamLimits

0x56a6,	// (0x0005295a) navi_text_pane_stacon_ParamLimits

0x24fd,	// (0x0004f7b1) main_text_info_pane

0xc8dd,	// (0x00059b91) listscroll_text_info_pane

0xc8e5,	// (0x00059b99) list_text_info_pane_ParamLimits

0xc8e5,	// (0x00059b99) list_text_info_pane

0xc8f4,	// (0x00059ba8) scroll_pane_cp24_ParamLimits

0xc8f4,	// (0x00059ba8) scroll_pane_cp24

0xc912,	// (0x00059bc6) list_text_info_pane_t1_ParamLimits

0xc912,	// (0x00059bc6) list_text_info_pane_t1

0x8eba,	// (0x0005616e) popup_fast_swap2_window_ParamLimits

0x8eba,	// (0x0005616e) popup_fast_swap2_window

0xc937,	// (0x00059beb) aid_size_cell_fast2

0x24fd,	// (0x0004f7b1) bg_popup_window_pane_cp17

0x9e3a,	// (0x000570ee) heading_pane_cp2

0x7881,	// (0x00054b35) listscroll_fast2_pane

0xc941,	// (0x00059bf5) grid_fast2_pane

0xc94b,	// (0x00059bff) listscroll_fast2_pane_g1

0xc955,	// (0x00059c09) listscroll_fast2_pane_g2

0x0001,

0xfc04,	// (0x0005ceb8) listscroll_fast2_pane_g

0x7e55,	// (0x00055109) scroll_pane_cp26

0xc95f,	// (0x00059c13) cell_fast2_pane_ParamLimits

0xc95f,	// (0x00059c13) cell_fast2_pane

0xc976,	// (0x00059c2a) cell_fast2_pane_g1

0xc97f,	// (0x00059c33) cell_fast2_pane_g2

0xc988,	// (0x00059c3c) cell_fast2_pane_g3

0x0002,

0xfc09,	// (0x0005cebd) cell_fast2_pane_g

0x797a,	// (0x00054c2e) grid_highlight_pane_cp9

0x798f,	// (0x00054c43) main_eswt_pane_ParamLimits

0x798f,	// (0x00054c43) main_eswt_pane

0xc909,	// (0x00059bbd) list_single_text_info_pane

0xc990,	// (0x00059c44) eswt_ctrl_button_pane

0xc990,	// (0x00059c44) eswt_ctrl_canvas_pane

0xc998,	// (0x00059c4c) eswt_ctrl_combo_pane

0xc990,	// (0x00059c44) eswt_ctrl_default_pane

0xc990,	// (0x00059c44) eswt_ctrl_label_pane

0xc9a0,	// (0x00059c54) eswt_ctrl_wait_pane

0xc9a8,	// (0x00059c5c) eswt_shell_pane

0x24fd,	// (0x0004f7b1) listscroll_eswt_app_pane

0xc9c8,	// (0x00059c7c) popup_eswt_tasktip_window_ParamLimits

0xc9c8,	// (0x00059c7c) popup_eswt_tasktip_window

0x9aa2,	// (0x00056d56) bg_popup_window_pane_cp18

0xc9d9,	// (0x00059c8d) eswt_control_pane_g1_ParamLimits

0xc9d9,	// (0x00059c8d) eswt_control_pane_g1

0xc9e6,	// (0x00059c9a) eswt_control_pane_g2_ParamLimits

0xc9e6,	// (0x00059c9a) eswt_control_pane_g2

0xc9f3,	// (0x00059ca7) eswt_control_pane_g3_ParamLimits

0xc9f3,	// (0x00059ca7) eswt_control_pane_g3

0xca00,	// (0x00059cb4) eswt_control_pane_g4_ParamLimits

0xca00,	// (0x00059cb4) eswt_control_pane_g4

0x0003,

0xfc10,	// (0x0005cec4) eswt_control_pane_g_ParamLimits

0xfc10,	// (0x0005cec4) eswt_control_pane_g

0x7cca,	// (0x00054f7e) bg_button_pane_ParamLimits

0x7cca,	// (0x00054f7e) bg_button_pane

0x798f,	// (0x00054c43) common_borders_pane_copy2_ParamLimits

0x798f,	// (0x00054c43) common_borders_pane_copy2

0xca0d,	// (0x00059cc1) control_button_pane_g1_ParamLimits

0xca0d,	// (0x00059cc1) control_button_pane_g1

0xca19,	// (0x00059ccd) control_button_pane_g2_ParamLimits

0xca19,	// (0x00059ccd) control_button_pane_g2

0xca25,	// (0x00059cd9) control_button_pane_g3_ParamLimits

0xca25,	// (0x00059cd9) control_button_pane_g3

0x0002,

0xfc19,	// (0x0005cecd) control_button_pane_g_ParamLimits

0xfc19,	// (0x0005cecd) control_button_pane_g

0xca39,	// (0x00059ced) control_button_pane_t1

0xca47,	// (0x00059cfb) control_button_pane_t2

0x0001,

0xfc20,	// (0x0005ced4) control_button_pane_t

0x99b0,	// (0x00056c64) bg_button_pane_g1

0x99c0,	// (0x00056c74) bg_button_pane_g2

0x99b8,	// (0x00056c6c) bg_button_pane_g3

0x99d0,	// (0x00056c84) bg_button_pane_g4

0x99c8,	// (0x00056c7c) bg_button_pane_g5

0x99d8,	// (0x00056c8c) bg_button_pane_g6

0x99e0,	// (0x00056c94) bg_button_pane_g7

0x99f0,	// (0x00056ca4) bg_button_pane_g8

0x99e8,	// (0x00056c9c) bg_button_pane_g9

0x0008,

0xf87c,	// (0x0005cb30) bg_button_pane_g

0xc01b,	// (0x000592cf) common_borders_pane_ParamLimits

0xc01b,	// (0x000592cf) common_borders_pane

0xc9d9,	// (0x00059c8d) eswt_control_pane_g1_copy1_ParamLimits

0xc9d9,	// (0x00059c8d) eswt_control_pane_g1_copy1

0xc9e6,	// (0x00059c9a) eswt_control_pane_g2_copy1_ParamLimits

0xc9e6,	// (0x00059c9a) eswt_control_pane_g2_copy1

0xc9f3,	// (0x00059ca7) eswt_control_pane_g3_copy1_ParamLimits

0xc9f3,	// (0x00059ca7) eswt_control_pane_g3_copy1

0xca00,	// (0x00059cb4) eswt_control_pane_g4_copy1_ParamLimits

0xca00,	// (0x00059cb4) eswt_control_pane_g4_copy1

0xc056,	// (0x0005930a) bg_eswt_ctrl_canvas_pane_g1

0xc01b,	// (0x000592cf) common_borders_pane_cp2_ParamLimits

0xc01b,	// (0x000592cf) common_borders_pane_cp2

0xc01b,	// (0x000592cf) common_borders_pane_cp3_ParamLimits

0xc01b,	// (0x000592cf) common_borders_pane_cp3

0xca55,	// (0x00059d09) separator_horizontal_pane

0xca5d,	// (0x00059d11) separator_vertical_pane

0xc9d9,	// (0x00059c8d) eswt_control_pane_g1_copy2_ParamLimits

0xc9d9,	// (0x00059c8d) eswt_control_pane_g1_copy2

0xc9e6,	// (0x00059c9a) eswt_control_pane_g2_copy2_ParamLimits

0xc9e6,	// (0x00059c9a) eswt_control_pane_g2_copy2

0xc9f3,	// (0x00059ca7) eswt_control_pane_g3_copy2_ParamLimits

0xc9f3,	// (0x00059ca7) eswt_control_pane_g3_copy2

0xca00,	// (0x00059cb4) eswt_control_pane_g4_copy2_ParamLimits

0xca00,	// (0x00059cb4) eswt_control_pane_g4_copy2

0x24fd,	// (0x0004f7b1) common_borders_pane_cp4

0xca66,	// (0x00059d1a) separator_horizontal_pane_g1

0xca6f,	// (0x00059d23) separator_horizontal_pane_g2

0xca78,	// (0x00059d2c) separator_horizontal_pane_g3

0x0002,

0xfc25,	// (0x0005ced9) separator_horizontal_pane_g

0xc9d9,	// (0x00059c8d) eswt_control_pane_g1_copy3_ParamLimits

0xc9d9,	// (0x00059c8d) eswt_control_pane_g1_copy3

0xc9e6,	// (0x00059c9a) eswt_control_pane_g2_copy3_ParamLimits

0xc9e6,	// (0x00059c9a) eswt_control_pane_g2_copy3

0xc9f3,	// (0x00059ca7) eswt_control_pane_g3_copy3_ParamLimits

0xc9f3,	// (0x00059ca7) eswt_control_pane_g3_copy3

0xca00,	// (0x00059cb4) eswt_control_pane_g4_copy3_ParamLimits

0xca00,	// (0x00059cb4) eswt_control_pane_g4_copy3

0x24fd,	// (0x0004f7b1) common_borders_pane_cp5

0xca81,	// (0x00059d35) separator_vertical_pane_g1

0xca8a,	// (0x00059d3e) separator_vertical_pane_g2

0xca93,	// (0x00059d47) separator_vertical_pane_g3

0x0002,

0xfc2c,	// (0x0005cee0) separator_vertical_pane_g

0xc9d9,	// (0x00059c8d) eswt_control_pane_g1_copy4_ParamLimits

0xc9d9,	// (0x00059c8d) eswt_control_pane_g1_copy4

0xc9e6,	// (0x00059c9a) eswt_control_pane_g2_copy4_ParamLimits

0xc9e6,	// (0x00059c9a) eswt_control_pane_g2_copy4

0xc9f3,	// (0x00059ca7) eswt_control_pane_g3_copy4_ParamLimits

0xc9f3,	// (0x00059ca7) eswt_control_pane_g3_copy4

0xca00,	// (0x00059cb4) eswt_control_pane_g4_copy4_ParamLimits

0xca00,	// (0x00059cb4) eswt_control_pane_g4_copy4

0xca9c,	// (0x00059d50) eswt_ctrl_combo_button_pane

0xcaa4,	// (0x00059d58) eswt_ctrl_input_pane

0xcaac,	// (0x00059d60) popup_choice_list_window_cp70

0xcab4,	// (0x00059d68) eswt_ctrl_input_pane_t1

0x24fd,	// (0x0004f7b1) input_focus_pane_cp70

0xc01b,	// (0x000592cf) bg_button_pane_cp70_ParamLimits

0xc01b,	// (0x000592cf) bg_button_pane_cp70

0xcac2,	// (0x00059d76) eswt_ctrl_combo_button_pane_g1

0xcaca,	// (0x00059d7e) wait_bar_pane_cp70

0x9aa2,	// (0x00056d56) bg_popup_window_pane_cp70_ParamLimits

0x9aa2,	// (0x00056d56) bg_popup_window_pane_cp70

0xcad2,	// (0x00059d86) popup_eswt_tasktip_window_t1

0xcae8,	// (0x00059d9c) wait_bar_pane_cp71_ParamLimits

0xcae8,	// (0x00059d9c) wait_bar_pane_cp71

0xcaf4,	// (0x00059da8) grid_eswt_app_pane

0x833c,	// (0x000555f0) scroll_pane_cp70

0xcafd,	// (0x00059db1) cell_eswt_app_pane_ParamLimits

0xcafd,	// (0x00059db1) cell_eswt_app_pane

0xcb2f,	// (0x00059de3) cell_eswt_app_pane_g1_ParamLimits

0xcb2f,	// (0x00059de3) cell_eswt_app_pane_g1

0xcb5e,	// (0x00059e12) cell_eswt_app_pane_g2_ParamLimits

0xcb5e,	// (0x00059e12) cell_eswt_app_pane_g2

0x0001,

0xfc33,	// (0x0005cee7) cell_eswt_app_pane_g_ParamLimits

0xfc33,	// (0x0005cee7) cell_eswt_app_pane_g

0xcb87,	// (0x00059e3b) cell_eswt_app_pane_t1_ParamLimits

0xcb87,	// (0x00059e3b) cell_eswt_app_pane_t1

0xcbb9,	// (0x00059e6d) grid_highlight_pane_cp70_ParamLimits

0xcbb9,	// (0x00059e6d) grid_highlight_pane_cp70

0xaf33,	// (0x000581e7) set_content_pane_g1

0x8da6,	// (0x0005605a) status_small_volume_pane

0x689c,	// (0x00053b50) status_small_volume_pane_g1

0x68a4,	// (0x00053b58) volume_small2_pane

0x68ad,	// (0x00053b61) volume_small2_pane_g1

0x68b6,	// (0x00053b6a) volume_small2_pane_g2

0x68bf,	// (0x00053b73) volume_small2_pane_g3

0x68c8,	// (0x00053b7c) volume_small2_pane_g4

0x68d1,	// (0x00053b85) volume_small2_pane_g5

0x68da,	// (0x00053b8e) volume_small2_pane_g6

0x68e3,	// (0x00053b97) volume_small2_pane_g7

0x68ec,	// (0x00053ba0) volume_small2_pane_g8

0x68f5,	// (0x00053ba9) volume_small2_pane_g9

0x68fe,	// (0x00053bb2) volume_small2_pane_g10

0x0009,

0xfc38,	// (0x0005ceec) volume_small2_pane_g

0xc434,	// (0x000596e8) fep_vkb_top_text_pane_g1_ParamLimits

0xc44f,	// (0x00059703) fep_vkb_top_text_pane_t1_ParamLimits

0xc6c7,	// (0x0005997b) popup_preview_fixed_window_g3_ParamLimits

0xc6c7,	// (0x0005997b) popup_preview_fixed_window_g3

0x93cb,	// (0x0005667f) popup_toolbar_trans_pane

0xadd8,	// (0x0005808c) aid_height_set_list_ParamLimits

0xade9,	// (0x0005809d) aid_size_parent_ParamLimits

0x8e74,	// (0x00056128) list_highlight_pane_cp2_ParamLimits

0xaf33,	// (0x000581e7) set_content_pane_g1_ParamLimits

0xb03c,	// (0x000582f0) list_single_image_pane_ParamLimits

0xb03c,	// (0x000582f0) list_single_image_pane

0xcbc5,	// (0x00059e79) aid_size_cell_image_ParamLimits

0xcbc5,	// (0x00059e79) aid_size_cell_image

0xcbd2,	// (0x00059e86) grid_single_image_pane_ParamLimits

0xcbd2,	// (0x00059e86) grid_single_image_pane

0x7ce4,	// (0x00054f98) list_single_image_pane_g1_ParamLimits

0x7ce4,	// (0x00054f98) list_single_image_pane_g1

0x7cf0,	// (0x00054fa4) list_single_image_pane_g2_ParamLimits

0x7cf0,	// (0x00054fa4) list_single_image_pane_g2

0x0001,

0xfc4d,	// (0x0005cf01) list_single_image_pane_g_ParamLimits

0xfc4d,	// (0x0005cf01) list_single_image_pane_g

0xcbe0,	// (0x00059e94) list_single_image_pane_t1_ParamLimits

0xcbe0,	// (0x00059e94) list_single_image_pane_t1

0xcbf6,	// (0x00059eaa) cell_image_list_pane_ParamLimits

0xcbf6,	// (0x00059eaa) cell_image_list_pane

0xcc0c,	// (0x00059ec0) cell_image_list_pane_g1

0xcc15,	// (0x00059ec9) cell_image_list_pane_g2

0x0001,

0xfc52,	// (0x0005cf06) cell_image_list_pane_g

0xcc1e,	// (0x00059ed2) aid_size_cell_tb_trans_pane

0x7cca,	// (0x00054f7e) bg_tb_trans_pane

0xcc30,	// (0x00059ee4) grid_tb_trans_pane

0x99b0,	// (0x00056c64) bg_tb_trans_pane_g1

0x99c0,	// (0x00056c74) bg_tb_trans_pane_g2

0x99b8,	// (0x00056c6c) bg_tb_trans_pane_g3

0x99d0,	// (0x00056c84) bg_tb_trans_pane_g4

0x99c8,	// (0x00056c7c) bg_tb_trans_pane_g5

0x99f0,	// (0x00056ca4) bg_tb_trans_pane_g6

0x99e8,	// (0x00056c9c) bg_tb_trans_pane_g7

0x99d8,	// (0x00056c8c) bg_tb_trans_pane_g8

0x99e0,	// (0x00056c94) bg_tb_trans_pane_g9

0x0008,

0xfc57,	// (0x0005cf0b) bg_tb_trans_pane_g

0xcc44,	// (0x00059ef8) cell_toolbar_trans_pane_ParamLimits

0xcc44,	// (0x00059ef8) cell_toolbar_trans_pane

0xc056,	// (0x0005930a) cell_toolbar_trans_pane_g1

0xbc35,	// (0x00058ee9) list_form2_midp_pane_t1

0xbc43,	// (0x00058ef7) list_form2_midp_pane_t2

0x0001,

0xfaf4,	// (0x0005cda8) list_form2_midp_pane_t

0xbc51,	// (0x00058f05) scroll_pane_cp51_ParamLimits

0xbe18,	// (0x000590cc) form2_midp_wait_pane_g1

0xbe21,	// (0x000590d5) form2_midp_wait_pane_g2

0xbe2a,	// (0x000590de) form2_midp_wait_pane_g3

0x0002,

0xfb09,	// (0x0005cdbd) form2_midp_wait_pane_g

0x7397,	// (0x0005464b) list_highlight_pane_cp21_ParamLimits

0xbe6e,	// (0x00059122) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xbe7d,	// (0x00059131) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xaff5,	// (0x000582a9) list_single_2graphic_im_pane_ParamLimits

0xaff5,	// (0x000582a9) list_single_2graphic_im_pane

0xcc6a,	// (0x00059f1e) list_single_2graphic_im_pane_g1_ParamLimits

0xcc6a,	// (0x00059f1e) list_single_2graphic_im_pane_g1

0xcc7b,	// (0x00059f2f) list_single_2graphic_im_pane_g2_ParamLimits

0xcc7b,	// (0x00059f2f) list_single_2graphic_im_pane_g2

0xcc87,	// (0x00059f3b) list_single_2graphic_im_pane_g3_ParamLimits

0xcc87,	// (0x00059f3b) list_single_2graphic_im_pane_g3

0x0003,

0xfc6a,	// (0x0005cf1e) list_single_2graphic_im_pane_g_ParamLimits

0xfc6a,	// (0x0005cf1e) list_single_2graphic_im_pane_g

0xcca7,	// (0x00059f5b) list_single_2graphic_im_pane_t1_ParamLimits

0xcca7,	// (0x00059f5b) list_single_2graphic_im_pane_t1

0xc6d3,	// (0x00059987) list_single_graphic_2heading_pane_fp_ParamLimits

0xc6d3,	// (0x00059987) list_single_graphic_2heading_pane_fp

0x665e,	// (0x00053912) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x665e,	// (0x00053912) list_single_graphic_2heading_pane_fp_g1

0xc6ec,	// (0x000599a0) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc6ec,	// (0x000599a0) list_single_graphic_2heading_pane_fp_g2

0x7c44,	// (0x00054ef8) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x7c44,	// (0x00054ef8) list_single_graphic_2heading_pane_fp_g3

0x80a6,	// (0x0005535a) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x80a6,	// (0x0005535a) list_single_graphic_2heading_pane_fp_g4

0xc6f8,	// (0x000599ac) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc6f8,	// (0x000599ac) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb91,	// (0x0005ce45) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb91,	// (0x0005ce45) list_single_graphic_2heading_pane_fp_g

0x6907,	// (0x00053bbb) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x6907,	// (0x00053bbb) list_single_graphic_2heading_pane_fp_t1

0x6696,	// (0x0005394a) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x6696,	// (0x0005394a) list_single_graphic_2heading_pane_fp_t2

0x691d,	// (0x00053bd1) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x691d,	// (0x00053bd1) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc73,	// (0x0005cf27) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc73,	// (0x0005cf27) list_single_graphic_2heading_pane_fp_t

0xc0f6,	// (0x000593aa) fep_hwr_write_pane_g5_ParamLimits

0xc0f6,	// (0x000593aa) fep_hwr_write_pane_g5

0xc102,	// (0x000593b6) fep_hwr_write_pane_g6_ParamLimits

0xc102,	// (0x000593b6) fep_hwr_write_pane_g6

0xc9a8,	// (0x00059c5c) eswt_shell_pane_ParamLimits

0x9aa2,	// (0x00056d56) bg_popup_window_pane_cp18_ParamLimits

0xad2f,	// (0x00057fe3) heading_pane_cp70

0xcad2,	// (0x00059d86) popup_eswt_tasktip_window_t1_ParamLimits

0x94fe,	// (0x000567b2) aid_touch_tab_arrow_left

0x950d,	// (0x000567c1) aid_touch_tab_arrow_right

0x72eb,	// (0x0005459f) title_pane_g3_ParamLimits

0x72eb,	// (0x0005459f) title_pane_g3

0x7c89,	// (0x00054f3d) set_value_pane_g1

0x93cb,	// (0x0005667f) popup_toolbar_trans_pane_ParamLimits

0xcc1e,	// (0x00059ed2) aid_size_cell_tb_trans_pane_ParamLimits

0x7cca,	// (0x00054f7e) bg_tb_trans_pane_ParamLimits

0xcc30,	// (0x00059ee4) grid_tb_trans_pane_ParamLimits

0x7621,	// (0x000548d5) cont_note_pane_ParamLimits

0x7621,	// (0x000548d5) cont_note_pane

0x798f,	// (0x00054c43) cont_snote2_single_text_pane_ParamLimits

0x798f,	// (0x00054c43) cont_snote2_single_text_pane

0x798f,	// (0x00054c43) cont_snote2_single_graphic_pane_ParamLimits

0x798f,	// (0x00054c43) cont_snote2_single_graphic_pane

0xa056,	// (0x0005730a) cont_note_wait_pane_ParamLimits

0xa056,	// (0x0005730a) cont_note_wait_pane

0xa056,	// (0x0005730a) cont_note_image_pane_ParamLimits

0xa056,	// (0x0005730a) cont_note_image_pane

0xccd8,	// (0x00059f8c) popup_note2_window_g1_ParamLimits

0xccd8,	// (0x00059f8c) popup_note2_window_g1

0xcd09,	// (0x00059fbd) popup_note2_window_t1_ParamLimits

0xcd09,	// (0x00059fbd) popup_note2_window_t1

0xcd4e,	// (0x0005a002) popup_note2_window_t2_ParamLimits

0xcd4e,	// (0x0005a002) popup_note2_window_t2

0xcd93,	// (0x0005a047) popup_note2_window_t3_ParamLimits

0xcd93,	// (0x0005a047) popup_note2_window_t3

0xcdd8,	// (0x0005a08c) popup_note2_window_t4_ParamLimits

0xcdd8,	// (0x0005a08c) popup_note2_window_t4

0x76a5,	// (0x00054959) popup_note2_window_t5_ParamLimits

0x76a5,	// (0x00054959) popup_note2_window_t5

0x0004,

0xfc7f,	// (0x0005cf33) popup_note2_window_t_ParamLimits

0xfc7f,	// (0x0005cf33) popup_note2_window_t

0xce07,	// (0x0005a0bb) popup_note2_image_window_g1_ParamLimits

0xce07,	// (0x0005a0bb) popup_note2_image_window_g1

0xce13,	// (0x0005a0c7) popup_note2_image_window_g2_ParamLimits

0xce13,	// (0x0005a0c7) popup_note2_image_window_g2

0x0001,

0xfc8a,	// (0x0005cf3e) popup_note2_image_window_g_ParamLimits

0xfc8a,	// (0x0005cf3e) popup_note2_image_window_g

0xce25,	// (0x0005a0d9) popup_note2_image_window_t1_ParamLimits

0xce25,	// (0x0005a0d9) popup_note2_image_window_t1

0xce3d,	// (0x0005a0f1) popup_note2_image_window_t2_ParamLimits

0xce3d,	// (0x0005a0f1) popup_note2_image_window_t2

0xce55,	// (0x0005a109) popup_note2_image_window_t3_ParamLimits

0xce55,	// (0x0005a109) popup_note2_image_window_t3

0x0002,

0xfc8f,	// (0x0005cf43) popup_note2_image_window_t_ParamLimits

0xfc8f,	// (0x0005cf43) popup_note2_image_window_t

0xa064,	// (0x00057318) popup_note2_wait_window_g1_ParamLimits

0xa064,	// (0x00057318) popup_note2_wait_window_g1

0xce92,	// (0x0005a146) popup_note2_wait_window_g2_ParamLimits

0xce92,	// (0x0005a146) popup_note2_wait_window_g2

0xa07c,	// (0x00057330) popup_note2_wait_window_g3_ParamLimits

0xa07c,	// (0x00057330) popup_note2_wait_window_g3

0x0002,

0xfc96,	// (0x0005cf4a) popup_note2_wait_window_g_ParamLimits

0xfc96,	// (0x0005cf4a) popup_note2_wait_window_g

0xce9e,	// (0x0005a152) popup_note2_wait_window_t1_ParamLimits

0xce9e,	// (0x0005a152) popup_note2_wait_window_t1

0xcebc,	// (0x0005a170) popup_note2_wait_window_t2_ParamLimits

0xcebc,	// (0x0005a170) popup_note2_wait_window_t2

0xceda,	// (0x0005a18e) popup_note2_wait_window_t3_ParamLimits

0xceda,	// (0x0005a18e) popup_note2_wait_window_t3

0xceec,	// (0x0005a1a0) popup_note2_wait_window_t4_ParamLimits

0xceec,	// (0x0005a1a0) popup_note2_wait_window_t4

0x0003,

0xfc9d,	// (0x0005cf51) popup_note2_wait_window_t_ParamLimits

0xfc9d,	// (0x0005cf51) popup_note2_wait_window_t

0xcefe,	// (0x0005a1b2) wait_bar2_pane_ParamLimits

0xcefe,	// (0x0005a1b2) wait_bar2_pane

0xcf16,	// (0x0005a1ca) popup_snote2_single_text_window_g1_ParamLimits

0xcf16,	// (0x0005a1ca) popup_snote2_single_text_window_g1

0xcf3e,	// (0x0005a1f2) popup_snote2_single_text_window_t1_ParamLimits

0xcf3e,	// (0x0005a1f2) popup_snote2_single_text_window_t1

0xcf8a,	// (0x0005a23e) popup_snote2_single_text_window_t2_ParamLimits

0xcf8a,	// (0x0005a23e) popup_snote2_single_text_window_t2

0xcfd6,	// (0x0005a28a) popup_snote2_single_text_window_t3_ParamLimits

0xcfd6,	// (0x0005a28a) popup_snote2_single_text_window_t3

0xd017,	// (0x0005a2cb) popup_snote2_single_text_window_t4_ParamLimits

0xd017,	// (0x0005a2cb) popup_snote2_single_text_window_t4

0xd04d,	// (0x0005a301) popup_snote2_single_text_window_t5_ParamLimits

0xd04d,	// (0x0005a301) popup_snote2_single_text_window_t5

0x0004,

0xfca6,	// (0x0005cf5a) popup_snote2_single_text_window_t_ParamLimits

0xfca6,	// (0x0005cf5a) popup_snote2_single_text_window_t

0xd078,	// (0x0005a32c) popup_snote2_single_graphic_window_g1_ParamLimits

0xd078,	// (0x0005a32c) popup_snote2_single_graphic_window_g1

0xd0a0,	// (0x0005a354) popup_snote2_single_graphic_window_g2_ParamLimits

0xd0a0,	// (0x0005a354) popup_snote2_single_graphic_window_g2

0x0001,

0xfcb1,	// (0x0005cf65) popup_snote2_single_graphic_window_g_ParamLimits

0xfcb1,	// (0x0005cf65) popup_snote2_single_graphic_window_g

0xd0c8,	// (0x0005a37c) popup_snote2_single_graphic_window_t1_ParamLimits

0xd0c8,	// (0x0005a37c) popup_snote2_single_graphic_window_t1

0xd114,	// (0x0005a3c8) popup_snote2_single_graphic_window_t2_ParamLimits

0xd114,	// (0x0005a3c8) popup_snote2_single_graphic_window_t2

0xcfd6,	// (0x0005a28a) popup_snote2_single_graphic_window_t3_ParamLimits

0xcfd6,	// (0x0005a28a) popup_snote2_single_graphic_window_t3

0xd017,	// (0x0005a2cb) popup_snote2_single_graphic_window_t4_ParamLimits

0xd017,	// (0x0005a2cb) popup_snote2_single_graphic_window_t4

0xd04d,	// (0x0005a301) popup_snote2_single_graphic_window_t5_ParamLimits

0xd04d,	// (0x0005a301) popup_snote2_single_graphic_window_t5

0x0004,

0xfcb6,	// (0x0005cf6a) popup_snote2_single_graphic_window_t_ParamLimits

0xfcb6,	// (0x0005cf6a) popup_snote2_single_graphic_window_t

0xbafb,	// (0x00058daf) clock_nsta_pane_cp2_t1

0xbafb,	// (0x00058daf) clock_nsta_pane_cp2_t2

0x0001,

0xfaca,	// (0x0005cd7e) clock_nsta_pane_cp2_t

0x5419,	// (0x000526cd) form_field_data_wide_pane_g1_ParamLimits

0x7ce4,	// (0x00054f98) form_field_data_wide_pane_g2_ParamLimits

0x7ce4,	// (0x00054f98) form_field_data_wide_pane_g2

0x7cf0,	// (0x00054fa4) form_field_data_wide_pane_g3_ParamLimits

0x7cf0,	// (0x00054fa4) form_field_data_wide_pane_g3

0x0002,

0xf69c,	// (0x0005c950) form_field_data_wide_pane_g_ParamLimits

0xf69c,	// (0x0005c950) form_field_data_wide_pane_g

0xb9d6,	// (0x00058c8a) grid_touch_3_pane_ParamLimits

0xb9d6,	// (0x00058c8a) grid_touch_3_pane

0xd160,	// (0x0005a414) cell_touch_3_pane_ParamLimits

0xd160,	// (0x0005a414) cell_touch_3_pane

0xc056,	// (0x0005930a) cell_touch_3_pane_g1

0xc056,	// (0x0005930a) cell_touch_3_pane_g2

0x0001,

0xfb4f,	// (0x0005ce03) cell_touch_3_pane_g

0x76d7,	// (0x0005498b) cont_query_data_pane

0x76df,	// (0x00054993) cont_query_data_pane_cp1

0xd193,	// (0x0005a447) button_value_adjust_pane_cp7

0xd19b,	// (0x0005a44f) query_popup_pane_cp3

0x85d2,	// (0x00055886) bg_popup_sub_pane_cp22_ParamLimits

0x57bd,	// (0x00052a71) navi_navi_volume_pane_cp2

0x57d8,	// (0x00052a8c) popup_side_volume_key_window_g2

0x57e7,	// (0x00052a9b) popup_side_volume_key_window_g3

0x0002,

0xf72e,	// (0x0005c9e2) popup_side_volume_key_window_g

0x5804,	// (0x00052ab8) popup_side_volume_key_window_t2

0x0001,

0xf735,	// (0x0005c9e9) popup_side_volume_key_window_t

0x888d,	// (0x00055b41) popup_side_volume_key_window_ParamLimits

0x500c,	// (0x000522c0) list_double_graphic_pane_g4_ParamLimits

0x500c,	// (0x000522c0) list_double_graphic_pane_g4

0xb024,	// (0x000582d8) list_single_2heading_msg_pane_ParamLimits

0xb024,	// (0x000582d8) list_single_2heading_msg_pane

0x813e,	// (0x000553f2) list_single_2heading_msg_pane_g1_ParamLimits

0x813e,	// (0x000553f2) list_single_2heading_msg_pane_g1

0x7bc5,	// (0x00054e79) list_single_2heading_msg_pane_g2_ParamLimits

0x7bc5,	// (0x00054e79) list_single_2heading_msg_pane_g2

0x814a,	// (0x000553fe) list_single_2heading_msg_pane_g3_ParamLimits

0x814a,	// (0x000553fe) list_single_2heading_msg_pane_g3

0x8156,	// (0x0005540a) list_single_2heading_msg_pane_g4_ParamLimits

0x8156,	// (0x0005540a) list_single_2heading_msg_pane_g4

0x0003,

0xfcc1,	// (0x0005cf75) list_single_2heading_msg_pane_g_ParamLimits

0xfcc1,	// (0x0005cf75) list_single_2heading_msg_pane_g

0x693d,	// (0x00053bf1) list_single_2heading_msg_pane_t1_ParamLimits

0x693d,	// (0x00053bf1) list_single_2heading_msg_pane_t1

0x6965,	// (0x00053c19) list_single_2heading_msg_pane_t2_ParamLimits

0x6965,	// (0x00053c19) list_single_2heading_msg_pane_t2

0x6994,	// (0x00053c48) list_single_2heading_msg_pane_t3_ParamLimits

0x6994,	// (0x00053c48) list_single_2heading_msg_pane_t3

0x69cd,	// (0x00053c81) list_single_2heading_msg_pane_t4_ParamLimits

0x69cd,	// (0x00053c81) list_single_2heading_msg_pane_t4

0x0003,

0xfcca,	// (0x0005cf7e) list_single_2heading_msg_pane_t_ParamLimits

0xfcca,	// (0x0005cf7e) list_single_2heading_msg_pane_t

0x251b,	// (0x0004f7cf) title_pane_g4_ParamLimits

0x251b,	// (0x0004f7cf) title_pane_g4

0x55c9,	// (0x0005287d) title_pane_stacon_g3_ParamLimits

0x55c9,	// (0x0005287d) title_pane_stacon_g3

0xcc9b,	// (0x00059f4f) list_single_2graphic_im_pane_g4_ParamLimits

0xcc9b,	// (0x00059f4f) list_single_2graphic_im_pane_g4

0xaacc,	// (0x00057d80) popup_side_volume_key_window_cp

0xb342,	// (0x000585f6) main_idle_act2_pane_t1

0x5c37,	// (0x00052eeb) toolbar_button_pane_g10

0x7b87,	// (0x00054e3b) popup_toolbar_window_cp1

0xbaec,	// (0x00058da0) clock_nsta_pane_cp_t1

0xbaec,	// (0x00058da0) clock_nsta_pane_cp_t2

0x0001,

0xfac5,	// (0x0005cd79) clock_nsta_pane_cp_t

0x57bd,	// (0x00052a71) navi_navi_volume_pane_cp2_ParamLimits

0x57cc,	// (0x00052a80) popup_side_volume_key_window_g1_ParamLimits

0x57d8,	// (0x00052a8c) popup_side_volume_key_window_g2_ParamLimits

0x57e7,	// (0x00052a9b) popup_side_volume_key_window_g3_ParamLimits

0xf72e,	// (0x0005c9e2) popup_side_volume_key_window_g_ParamLimits

0x638d,	// (0x00053641) fep_hwr_aid_pane

0x6436,	// (0x000536ea) bg_fep_hwr_top_pane_g4_ParamLimits

0xc0c6,	// (0x0005937a) fep_hwr_top_pane_g1_ParamLimits

0xc0d8,	// (0x0005938c) fep_hwr_top_pane_g2_ParamLimits

0x6456,	// (0x0005370a) fep_hwr_top_pane_g3_ParamLimits

0xfb1a,	// (0x0005cdce) fep_hwr_top_pane_g_ParamLimits

0x646b,	// (0x0005371f) fep_hwr_top_text_pane_ParamLimits

0xa881,	// (0x00057b35) aid_touch_tab_arrow_arrow_2

0xa88a,	// (0x00057b3e) aid_touch_tab_arrow_left_2

0x63a1,	// (0x00053655) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x63d8,	// (0x0005368c) fep_hwr_prediction_pane

0xc22e,	// (0x000594e2) fep_vkb_prediction_pane

0xc334,	// (0x000595e8) fep_vkb_side_pane_g3_ParamLimits

0xc334,	// (0x000595e8) fep_vkb_side_pane_g3

0x65fa,	// (0x000538ae) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x67a0,	// (0x00053a54) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x67ad,	// (0x00053a61) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbc9,	// (0x0005ce7d) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x69f2,	// (0x00053ca6) fep_hwr_prediction_pane_g1

0x69fc,	// (0x00053cb0) fep_hwr_prediction_pane_g2

0x6a04,	// (0x00053cb8) fep_hwr_prediction_pane_g3

0x6a0c,	// (0x00053cc0) fep_hwr_prediction_pane_g4

0x0003,

0xfcd3,	// (0x0005cf87) fep_hwr_prediction_pane_g

0xd1c2,	// (0x0005a476) fep_vkb_prediction_pane_g1

0xd1cc,	// (0x0005a480) fep_vkb_prediction_pane_g2

0xd1d4,	// (0x0005a488) fep_vkb_prediction_pane_g3

0xd1dc,	// (0x0005a490) fep_vkb_prediction_pane_g4

0x0003,

0xfcdc,	// (0x0005cf90) fep_vkb_prediction_pane_g

0x5fc0,	// (0x00053274) slider_set_pane_g3

0x5fd4,	// (0x00053288) slider_set_pane_g4

0x5fec,	// (0x000532a0) slider_set_pane_g5

0x5fc0,	// (0x00053274) slider_set_pane_g6

0x6002,	// (0x000532b6) slider_set_pane_g7

0xaf7a,	// (0x0005822e) slider_form_pane_g3

0xaf83,	// (0x00058237) slider_form_pane_g4

0xaf8b,	// (0x0005823f) slider_form_pane_g5

0xaf7a,	// (0x0005822e) slider_form_pane_g6

0xaf93,	// (0x00058247) slider_form_pane_g7

0xb610,	// (0x000588c4) slider_set_pane_vc_g3

0xb619,	// (0x000588cd) slider_set_pane_vc_g4

0xb622,	// (0x000588d6) slider_set_pane_vc_g5

0xb610,	// (0x000588c4) slider_set_pane_vc_g6

0xb62b,	// (0x000588df) slider_set_pane_vc_g7

0xb610,	// (0x000588c4) slider_form_pane_vc_g1

0xb619,	// (0x000588cd) slider_form_pane_vc_g2

0xb622,	// (0x000588d6) slider_form_pane_vc_g3

0xb610,	// (0x000588c4) slider_form_pane_vc_g4

0xb7e0,	// (0x00058a94) slider_form_pane_vc_g5

0x0004,

0xfa9e,	// (0x0005cd52) slider_form_pane_vc_g

0x24fd,	// (0x0004f7b1) main_idle_act3_pane

0xd1e4,	// (0x0005a498) ai3_links_pane

0xd1ed,	// (0x0005a4a1) popup_ai3_data_window_ParamLimits

0xd1ed,	// (0x0005a4a1) popup_ai3_data_window

0x24fd,	// (0x0004f7b1) grid_ai3_links_pane

0xd20b,	// (0x0005a4bf) cell_ai3_links_pane_ParamLimits

0xd20b,	// (0x0005a4bf) cell_ai3_links_pane

0xd225,	// (0x0005a4d9) bg_popup_sub_pane_cp11

0xd232,	// (0x0005a4e6) cell_ai3_links_pane_g1

0x24fd,	// (0x0004f7b1) bg_popup_sub_pane_cp12

0xd257,	// (0x0005a50b) heading_ai3_data_pane

0xd25f,	// (0x0005a513) list_ai3_gene_pane

0xd26b,	// (0x0005a51f) popup_ai3_data_window_g1

0xd273,	// (0x0005a527) heading_ai3_data_pane_g1

0xd27b,	// (0x0005a52f) heading_ai3_data_pane_t1

0xd289,	// (0x0005a53d) list_double_ai3_gene_pane_ParamLimits

0xd289,	// (0x0005a53d) list_double_ai3_gene_pane

0xd296,	// (0x0005a54a) list_single_ai3_gene_pane_ParamLimits

0xd296,	// (0x0005a54a) list_single_ai3_gene_pane

0xc01b,	// (0x000592cf) list_highlight_pane_cp7_ParamLimits

0xc01b,	// (0x000592cf) list_highlight_pane_cp7

0xd2a3,	// (0x0005a557) list_single_a13_gene_pane_t1_ParamLimits

0xd2a3,	// (0x0005a557) list_single_a13_gene_pane_t1

0xd2ba,	// (0x0005a56e) list_single_ai3_gene_pane_g1

0xd2c3,	// (0x0005a577) list_single_ai3_gene_pane_g2

0x0001,

0xfce5,	// (0x0005cf99) list_single_ai3_gene_pane_g

0xd2cb,	// (0x0005a57f) list_double_ai3_gene_pane_g1_ParamLimits

0xd2cb,	// (0x0005a57f) list_double_ai3_gene_pane_g1

0xd2d7,	// (0x0005a58b) list_double_ai3_gene_pane_t1_ParamLimits

0xd2d7,	// (0x0005a58b) list_double_ai3_gene_pane_t1

0xd2f3,	// (0x0005a5a7) list_double_ai3_gene_pane_t2_ParamLimits

0xd2f3,	// (0x0005a5a7) list_double_ai3_gene_pane_t2

0xd308,	// (0x0005a5bc) list_double_ai3_gene_pane_t3_ParamLimits

0xd308,	// (0x0005a5bc) list_double_ai3_gene_pane_t3

0x0002,

0xfcea,	// (0x0005cf9e) list_double_ai3_gene_pane_t_ParamLimits

0xfcea,	// (0x0005cf9e) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x6933,	// (0x00053be7) aid_size_min_col_2

0xd1ac,	// (0x0005a460) aid_size_min_msg_ParamLimits

0xd1ac,	// (0x0005a460) aid_size_min_msg

0xc440,	// (0x000596f4) fep_vkb_top_text_pane_g2_ParamLimits

0xc440,	// (0x000596f4) fep_vkb_top_text_pane_g2

0x0001,

0xfb4a,	// (0x0005cdfe) fep_vkb_top_text_pane_g_ParamLimits

0xfb4a,	// (0x0005cdfe) fep_vkb_top_text_pane_g

0x24fd,	// (0x0004f7b1) main_hc_apps_shell_pane

0xd325,	// (0x0005a5d9) grid_hc_apps_pane_ParamLimits

0xd325,	// (0x0005a5d9) grid_hc_apps_pane

0xd334,	// (0x0005a5e8) list_hc_apps_pane

0xd33c,	// (0x0005a5f0) scroll_pane_cp37_ParamLimits

0xd33c,	// (0x0005a5f0) scroll_pane_cp37

0xd348,	// (0x0005a5fc) cell_hc_apps_pane_ParamLimits

0xd348,	// (0x0005a5fc) cell_hc_apps_pane

0xd400,	// (0x0005a6b4) cell_hc_apps_pane_g1_ParamLimits

0xd400,	// (0x0005a6b4) cell_hc_apps_pane_g1

0xd431,	// (0x0005a6e5) cell_hc_apps_pane_g2_ParamLimits

0xd431,	// (0x0005a6e5) cell_hc_apps_pane_g2

0xd44d,	// (0x0005a701) cell_hc_apps_pane_g3_ParamLimits

0xd44d,	// (0x0005a701) cell_hc_apps_pane_g3

0x0002,

0xfcf1,	// (0x0005cfa5) cell_hc_apps_pane_g_ParamLimits

0xfcf1,	// (0x0005cfa5) cell_hc_apps_pane_g

0xd46f,	// (0x0005a723) cell_hc_apps_pane_t1_ParamLimits

0xd46f,	// (0x0005a723) cell_hc_apps_pane_t1

0x7621,	// (0x000548d5) grid_highlight_pane_cp10_ParamLimits

0x7621,	// (0x000548d5) grid_highlight_pane_cp10

0xd4af,	// (0x0005a763) list_single_hc_apps_pane_ParamLimits

0xd4af,	// (0x0005a763) list_single_hc_apps_pane

0xd4ee,	// (0x0005a7a2) list_single_hc_apps_pane_g1

0x816e,	// (0x00055422) list_single_hc_apps_pane_g2

0x0001,

0xfcf8,	// (0x0005cfac) list_single_hc_apps_pane_g

0x8187,	// (0x0005543b) list_single_hc_apps_pane_g2_copy1

0x6a14,	// (0x00053cc8) list_single_hc_apps_pane_t1

0x7397,	// (0x0005464b) bg_set_opt_pane_cp_ParamLimits

0x4e03,	// (0x000520b7) setting_slider_pane_t1_ParamLimits

0x4e19,	// (0x000520cd) setting_slider_pane_t2_ParamLimits

0x4e33,	// (0x000520e7) setting_slider_pane_t3_ParamLimits

0xf57a,	// (0x0005c82e) setting_slider_pane_t_ParamLimits

0x4e4b,	// (0x000520ff) slider_set_pane_ParamLimits

0x5ad9,	// (0x00052d8d) control_pane_g5_ParamLimits

0x5ad9,	// (0x00052d8d) control_pane_g5

0xad9b,	// (0x0005804f) slider_set_pane_g1_ParamLimits

0x5fb4,	// (0x00053268) slider_set_pane_g2_ParamLimits

0x5fc0,	// (0x00053274) slider_set_pane_g3_ParamLimits

0x5fd4,	// (0x00053288) slider_set_pane_g4_ParamLimits

0x5fec,	// (0x000532a0) slider_set_pane_g5_ParamLimits

0x5fc0,	// (0x00053274) slider_set_pane_g6_ParamLimits

0x6002,	// (0x000532b6) slider_set_pane_g7_ParamLimits

0xf97a,	// (0x0005cc2e) slider_set_pane_g_ParamLimits

0x8972,	// (0x00055c26) navi_icon_text_pane_ParamLimits

0x94bd,	// (0x00056771) aid_fill_nsta_2_ParamLimits

0x94fe,	// (0x000567b2) aid_touch_tab_arrow_left_ParamLimits

0x950d,	// (0x000567c1) aid_touch_tab_arrow_right_ParamLimits

0x957a,	// (0x0005682e) clock_nsta_pane_ParamLimits

0xa85d,	// (0x00057b11) navi_icon_pane_g1_ParamLimits

0xa86c,	// (0x00057b20) navi_text_pane_t1_ParamLimits

0xbc09,	// (0x00058ebd) navi_icon_text_pane_g1_ParamLimits

0xbc18,	// (0x00058ecc) navi_icon_text_pane_t1_ParamLimits

0xd4ee,	// (0x0005a7a2) list_single_hc_apps_pane_g1_ParamLimits

0x816e,	// (0x00055422) list_single_hc_apps_pane_g2_ParamLimits

0xfcf8,	// (0x0005cfac) list_single_hc_apps_pane_g_ParamLimits

0x8187,	// (0x0005543b) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x6a14,	// (0x00053cc8) list_single_hc_apps_pane_t1_ParamLimits

0x4d0d,	// (0x00051fc1) popup_toolbar2_fixed_window_ParamLimits

0x4d0d,	// (0x00051fc1) popup_toolbar2_fixed_window

0x93c1,	// (0x00056675) popup_toolbar2_float_window

0x24fd,	// (0x0004f7b1) bg_popup_sub_pane_cp27

0xd507,	// (0x0005a7bb) grid_toolbar2_float_pane

0x24fd,	// (0x0004f7b1) bg_popup_sub_pane_cp26

0xd507,	// (0x0005a7bb) grid_toolbar2_fixed_pane

0xd50f,	// (0x0005a7c3) cell_toolbar2_fixed_pane_ParamLimits

0xd50f,	// (0x0005a7c3) cell_toolbar2_fixed_pane

0xd51f,	// (0x0005a7d3) cell_toolbar2_fixed_pane_g1

0xd528,	// (0x0005a7dc) toolbar2_fixed_button_pane

0x99b0,	// (0x00056c64) toolbar2_fixed_button_pane_g1

0x99c0,	// (0x00056c74) toolbar2_fixed_button_pane_g2

0x99b8,	// (0x00056c6c) toolbar2_fixed_button_pane_g3

0x99d0,	// (0x00056c84) toolbar2_fixed_button_pane_g4

0x99c8,	// (0x00056c7c) toolbar2_fixed_button_pane_g5

0x99d8,	// (0x00056c8c) toolbar2_fixed_button_pane_g6

0x99e0,	// (0x00056c94) toolbar2_fixed_button_pane_g7

0x99f0,	// (0x00056ca4) toolbar2_fixed_button_pane_g8

0x99e8,	// (0x00056c9c) toolbar2_fixed_button_pane_g9

0x0008,

0xf87c,	// (0x0005cb30) toolbar2_fixed_button_pane_g

0xd530,	// (0x0005a7e4) cell_toolbar2_float_pane_ParamLimits

0xd530,	// (0x0005a7e4) cell_toolbar2_float_pane

0xd541,	// (0x0005a7f5) cell_toolbar2_float_pane_g1

0xd528,	// (0x0005a7dc) toolbar2_fixed_button_pane_cp

0xc19c,	// (0x00059450) fep_vkb_accented_list_pane_ParamLimits

0xc19c,	// (0x00059450) fep_vkb_accented_list_pane

0x65da,	// (0x0005388e) bg_popup_fep_shadow_pane_g9

0x8af6,	// (0x00055daa) bg_popup_fep_shadow_pane_cp3

0x7e3c,	// (0x000550f0) list_accented_list_pane

0xd54a,	// (0x0005a7fe) list_single_accented_list_pane_ParamLimits

0xd54a,	// (0x0005a7fe) list_single_accented_list_pane

0x8af6,	// (0x00055daa) list_highlight_pane_cp10

0xd55b,	// (0x0005a80f) list_single_accented_list_pane_t1

0x9307,	// (0x000565bb) popup_slider_window_ParamLimits

0x9307,	// (0x000565bb) popup_slider_window

0xd1a3,	// (0x0005a457) aid_indentation_list_msg

0xd627,	// (0x0005a8db) bg_popup_window_pane_cp19

0xd695,	// (0x0005a949) popup_slider_window_g1

0xd6b1,	// (0x0005a965) popup_slider_window_g2

0xd6cd,	// (0x0005a981) popup_slider_window_g3

0x0005,

0xfcfd,	// (0x0005cfb1) popup_slider_window_g

0xd729,	// (0x0005a9dd) popup_slider_window_t1

0xd79d,	// (0x0005aa51) small_volume_slider_vertical_pane

0xc056,	// (0x0005930a) small_volume_slider_vertical_pane_g1

0xc056,	// (0x0005930a) small_volume_slider_vertical_pane_g2

0xd7b9,	// (0x0005aa6d) small_volume_slider_vertical_pane_g3

0x0002,

0xfd0f,	// (0x0005cfc3) small_volume_slider_vertical_pane_g

0x4abb,	// (0x00051d6f) area_side_right_pane_ParamLimits

0x4abb,	// (0x00051d6f) area_side_right_pane

0x6a42,	// (0x00053cf6) aid_size_side_button_ParamLimits

0x6a42,	// (0x00053cf6) aid_size_side_button

0x6a56,	// (0x00053d0a) grid_sctrl_middle_pane_ParamLimits

0x6a56,	// (0x00053d0a) grid_sctrl_middle_pane

0x6a76,	// (0x00053d2a) sctrl_sk_bottom_pane

0x6a87,	// (0x00053d3b) sctrl_sk_top_pane

0x6a99,	// (0x00053d4d) aid_touch_sctrl_top

0x6aa6,	// (0x00053d5a) bg_sctrl_sk_pane_ParamLimits

0x6aa6,	// (0x00053d5a) bg_sctrl_sk_pane

0x6ab4,	// (0x00053d68) sctrl_sk_top_pane_g1

0x6ac1,	// (0x00053d75) sctrl_sk_top_pane_t1

0x6a99,	// (0x00053d4d) aid_touch_sctrl_bottom

0x6aa6,	// (0x00053d5a) bg_sctrl_sk_pane_cp_ParamLimits

0x6aa6,	// (0x00053d5a) bg_sctrl_sk_pane_cp

0x6adc,	// (0x00053d90) sctrl_sk_bottom_pane_g1

0x6ac1,	// (0x00053d75) sctrl_sk_bottom_pane_t1

0x6ae5,	// (0x00053d99) cell_sctrl_middle_pane_ParamLimits

0x6ae5,	// (0x00053d99) cell_sctrl_middle_pane

0x6b02,	// (0x00053db6) aid_touch_sctrl_middle_ParamLimits

0x6b02,	// (0x00053db6) aid_touch_sctrl_middle

0x6b14,	// (0x00053dc8) bg_sctrl_middle_pane_ParamLimits

0x6b14,	// (0x00053dc8) bg_sctrl_middle_pane

0x65fa,	// (0x000538ae) cell_sctrl_middle_pane_g1_ParamLimits

0x65fa,	// (0x000538ae) cell_sctrl_middle_pane_g1

0x6b22,	// (0x00053dd6) cell_sctrl_middle_pane_g2_ParamLimits

0x6b22,	// (0x00053dd6) cell_sctrl_middle_pane_g2

0x0001,

0xfd1b,	// (0x0005cfcf) cell_sctrl_middle_pane_g_ParamLimits

0xfd1b,	// (0x0005cfcf) cell_sctrl_middle_pane_g

0x99b0,	// (0x00056c64) bg_sctrl_middle_pane_g1

0x99b8,	// (0x00056c6c) bg_sctrl_middle_pane_g2

0x99c0,	// (0x00056c74) bg_sctrl_middle_pane_g3

0x99c8,	// (0x00056c7c) bg_sctrl_middle_pane_g4

0x99d0,	// (0x00056c84) bg_sctrl_middle_pane_g5

0x99d8,	// (0x00056c8c) bg_sctrl_middle_pane_g6

0x99e0,	// (0x00056c94) bg_sctrl_middle_pane_g7

0x99e8,	// (0x00056c9c) bg_sctrl_middle_pane_g8

0x0007,

0xfd20,	// (0x0005cfd4) bg_sctrl_middle_pane_g

0x99f0,	// (0x00056ca4) bg_sctrl_middle_pane_g8_copy1

0x99b0,	// (0x00056c64) bg_sctrl_sk_pane_g1

0x99c0,	// (0x00056c74) bg_sctrl_sk_pane_g2

0x99b8,	// (0x00056c6c) bg_sctrl_sk_pane_g3

0x0008,

0xf87c,	// (0x0005cb30) bg_sctrl_sk_pane_g

0x7b4d,	// (0x00054e01) aid_size_touch_scroll_bar

0x99d0,	// (0x00056c84) bg_sctrl_sk_pane_g4

0x99c8,	// (0x00056c7c) bg_sctrl_sk_pane_g5

0x99d8,	// (0x00056c8c) bg_sctrl_sk_pane_g6

0x99e0,	// (0x00056c94) bg_sctrl_sk_pane_g7

0x99f0,	// (0x00056ca4) bg_sctrl_sk_pane_g8

0x99e8,	// (0x00056c9c) bg_sctrl_sk_pane_g9

0x8f1e,	// (0x000561d2) popup_fep_china_hwr2_fs_candidate_window

0x8f28,	// (0x000561dc) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x8f28,	// (0x000561dc) popup_fep_china_hwr2_fs_control_window

0x65fa,	// (0x000538ae) sctrl_sk_top_pane_g2

0x0001,

0xfd16,	// (0x0005cfca) sctrl_sk_top_pane_g

0xd7c2,	// (0x0005aa76) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd7c2,	// (0x0005aa76) aid_fep_china_hwr2_fs_cell

0xd7d5,	// (0x0005aa89) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd7d5,	// (0x0005aa89) bg_popup_fep_shadow_pane_cp4

0xd7ee,	// (0x0005aaa2) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd7ee,	// (0x0005aaa2) bg_popup_fep_shadow_pane_cp5

0xd800,	// (0x0005aab4) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd800,	// (0x0005aab4) popup_fep_china_hwr2_fs_control_bar_grid

0xd810,	// (0x0005aac4) popup_fep_china_hwr2_fs_control_funtion_grid

0xd818,	// (0x0005aacc) aid_fep_china_hwr2_fs_candi_cell

0x24fd,	// (0x0004f7b1) bg_popup_fep_shadow_pane_cp6

0xd822,	// (0x0005aad6) popup_fep_china_hwr2_fs_candidate_grid

0xd82c,	// (0x0005aae0) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd82c,	// (0x0005aae0) cell_fep_china_hwr2_fs_funtion_grid

0xc056,	// (0x0005930a) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd844,	// (0x0005aaf8) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd844,	// (0x0005aaf8) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd852,	// (0x0005ab06) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd852,	// (0x0005ab06) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd31,	// (0x0005cfe5) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd31,	// (0x0005cfe5) cell_fep_china_hwr2_fs_funtion_grid_g

0xd868,	// (0x0005ab1c) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd868,	// (0x0005ab1c) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd87d,	// (0x0005ab31) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd87d,	// (0x0005ab31) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd36,	// (0x0005cfea) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd36,	// (0x0005cfea) cell_fep_china_hwr2_fs_funtion_grid_t

0xd899,	// (0x0005ab4d) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd8a1,	// (0x0005ab55) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd8a9,	// (0x0005ab5d) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd3b,	// (0x0005cfef) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd8b1,	// (0x0005ab65) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd8b1,	// (0x0005ab65) cell_fep_china_hwr2_fs_candidate_grid

0xd8d0,	// (0x0005ab84) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd8d8,	// (0x0005ab8c) popup_fep_china_hwr2_fs_candidate_grid_g21

0xc056,	// (0x0005930a) cell_fep_china_hwr2_fs_candidate_grid_g1

0xc056,	// (0x0005930a) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb4f,	// (0x0005ce03) cell_fep_china_hwr2_fs_candidate_grid_g

0xd8e0,	// (0x0005ab94) cell_fep_china_hwr2_fs_candidate_grid_t1

0x958d,	// (0x00056841) clock_nsta_pane_cp_24_ParamLimits

0x958d,	// (0x00056841) clock_nsta_pane_cp_24

0x960d,	// (0x000568c1) indicator_nsta_pane_cp_24_ParamLimits

0x960d,	// (0x000568c1) indicator_nsta_pane_cp_24

0xa6d9,	// (0x0005798d) heading_pane_g1

0x0001,

0xf8e1,	// (0x0005cb95) heading_pane_g

0xb189,	// (0x0005843d) grid_sct_catagory_button_pane

0xb1bb,	// (0x0005846f) scroll_pane_cp5_ParamLimits

0xbc5d,	// (0x00058f11) button_value_adjust_pane_cp5_ParamLimits

0xbc5d,	// (0x00058f11) button_value_adjust_pane_cp5

0xbd42,	// (0x00058ff6) form2_midp_time_pane_ParamLimits

0xd8ee,	// (0x0005aba2) cell_sct_catagory_button_pane_ParamLimits

0xd8ee,	// (0x0005aba2) cell_sct_catagory_button_pane

0xc01b,	// (0x000592cf) bg_button_pane_cp01_ParamLimits

0xc01b,	// (0x000592cf) bg_button_pane_cp01

0xc056,	// (0x0005930a) cell_sct_catagory_button_pane_g1

0x9348,	// (0x000565fc) popup_tb_extension_window

0xd900,	// (0x0005abb4) aid_size_cell_ext_ParamLimits

0xd900,	// (0x0005abb4) aid_size_cell_ext

0x7621,	// (0x000548d5) bg_tb_trans_pane_cp1_ParamLimits

0x7621,	// (0x000548d5) bg_tb_trans_pane_cp1

0xd920,	// (0x0005abd4) grid_tb_ext_pane_ParamLimits

0xd920,	// (0x0005abd4) grid_tb_ext_pane

0xd950,	// (0x0005ac04) cell_tb_ext_pane_ParamLimits

0xd950,	// (0x0005ac04) cell_tb_ext_pane

0xd967,	// (0x0005ac1b) cell_tb_ext_pane_g1_ParamLimits

0xd967,	// (0x0005ac1b) cell_tb_ext_pane_g1

0xd984,	// (0x0005ac38) cell_tb_ext_pane_t1

0x7621,	// (0x000548d5) list_highlight_pane_cp11_ParamLimits

0x7621,	// (0x000548d5) list_highlight_pane_cp11

0x4d2c,	// (0x00051fe0) popup_uni_indicator_window_ParamLimits

0x4d2c,	// (0x00051fe0) popup_uni_indicator_window

0x7cca,	// (0x00054f7e) bg_popup_sub_pane_cp14

0xd99f,	// (0x0005ac53) list_uniindi_pane

0xd9ab,	// (0x0005ac5f) uniindi_top_pane

0x7621,	// (0x000548d5) bg_uniindi_top_pane

0xd9cc,	// (0x0005ac80) uniindi_top_pane_g1

0xd9e2,	// (0x0005ac96) uniindi_top_pane_g2

0x0003,

0xfd42,	// (0x0005cff6) uniindi_top_pane_g

0xda0c,	// (0x0005acc0) uniindi_top_pane_t1

0xda38,	// (0x0005acec) list_single_uniindi_pane_ParamLimits

0xda38,	// (0x0005acec) list_single_uniindi_pane

0xc056,	// (0x0005930a) bg_uniindi_top_pane_g1

0xda4a,	// (0x0005acfe) list_single_uniindi_pane_g1

0xda5d,	// (0x0005ad11) list_single_uniindi_pane_t1

0x4b98,	// (0x00051e4c) control_bg_pane

0xda82,	// (0x0005ad36) bg_sctrl_sk_pane_cp1

0xda8b,	// (0x0005ad3f) bg_sctrl_sk_pane_cp2

0xda94,	// (0x0005ad48) control_bg_pane_g1

0xda9d,	// (0x0005ad51) control_bg_pane_g2

0x0001,

0xfd4b,	// (0x0005cfff) control_bg_pane_g

0xba80,	// (0x00058d34) cell_indicator_nsta_pane_g1_ParamLimits

0xba8e,	// (0x00058d42) cell_indicator_nsta_pane_g2_ParamLimits

0xfab3,	// (0x0005cd67) cell_indicator_nsta_pane_g_ParamLimits

0x636c,	// (0x00053620) form2_midp_time_pane_t1_ParamLimits

0x798f,	// (0x00054c43) main_idle_act4_pane_ParamLimits

0x798f,	// (0x00054c43) main_idle_act4_pane

0x9348,	// (0x000565fc) popup_tb_extension_window_ParamLimits

0xd942,	// (0x0005abf6) tb_ext_find_pane_ParamLimits

0xd942,	// (0x0005abf6) tb_ext_find_pane

0xdaa6,	// (0x0005ad5a) ai_gene_pane_1_cp1

0x8c3f,	// (0x00055ef3) ai_gene_pane_2_cp1

0xdaae,	// (0x0005ad62) list_single_idle_plugin_calendar_pane

0xdab7,	// (0x0005ad6b) list_single_idle_plugin_notification_pane

0xdac0,	// (0x0005ad74) list_single_idle_plugin_player_pane

0xdac9,	// (0x0005ad7d) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdac9,	// (0x0005ad7d) list_single_idle_plugin_shortcut_pane

0xdaeb,	// (0x0005ad9f) main_idle_act4_pane_t1

0xdafd,	// (0x0005adb1) main_idle_act4_pane_t2

0x0001,

0xfd50,	// (0x0005d004) main_idle_act4_pane_t

0xdb0f,	// (0x0005adc3) middle_sk_idle_act4_pane_ParamLimits

0xdb0f,	// (0x0005adc3) middle_sk_idle_act4_pane

0xdb25,	// (0x0005add9) popup_clock_digital_analogue_window_cp2

0xdb3f,	// (0x0005adf3) shortcut_wheel_idle_act4_pane_ParamLimits

0xdb3f,	// (0x0005adf3) shortcut_wheel_idle_act4_pane

0xc056,	// (0x0005930a) shortcut_wheel_idle_act4_pane_g1

0xc056,	// (0x0005930a) shortcut_wheel_idle_act4_pane_g2

0xc056,	// (0x0005930a) shortcut_wheel_idle_act4_pane_g3

0xc056,	// (0x0005930a) shortcut_wheel_idle_act4_pane_g4

0xc056,	// (0x0005930a) shortcut_wheel_idle_act4_pane_g5

0xdb53,	// (0x0005ae07) shortcut_wheel_idle_act4_pane_g6

0xdb5b,	// (0x0005ae0f) shortcut_wheel_idle_act4_pane_g7

0xdb63,	// (0x0005ae17) shortcut_wheel_idle_act4_pane_g8

0xdb6b,	// (0x0005ae1f) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd55,	// (0x0005d009) shortcut_wheel_idle_act4_pane_g

0xc2e0,	// (0x00059594) middle_sk_idle_act4_pane_g1_ParamLimits

0xc2e0,	// (0x00059594) middle_sk_idle_act4_pane_g1

0xdbcf,	// (0x0005ae83) middle_sk_idle_act4_pane_g2_ParamLimits

0xdbcf,	// (0x0005ae83) middle_sk_idle_act4_pane_g2

0x0001,

0xfd78,	// (0x0005d02c) middle_sk_idle_act4_pane_g_ParamLimits

0xfd78,	// (0x0005d02c) middle_sk_idle_act4_pane_g

0xdbdb,	// (0x0005ae8f) middle_sk_idle_act4_pane_t1_ParamLimits

0xdbdb,	// (0x0005ae8f) middle_sk_idle_act4_pane_t1

0xdbf8,	// (0x0005aeac) grid_ai_shortcut_pane_ParamLimits

0xdbf8,	// (0x0005aeac) grid_ai_shortcut_pane

0xdc11,	// (0x0005aec5) list_highlight_pane_cp16_ParamLimits

0xdc11,	// (0x0005aec5) list_highlight_pane_cp16

0xdc1e,	// (0x0005aed2) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdc1e,	// (0x0005aed2) list_single_idle_plugin_shortcut_pane_g1

0xdc2a,	// (0x0005aede) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdc2a,	// (0x0005aede) list_single_idle_plugin_shortcut_pane_g2

0xdc44,	// (0x0005aef8) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdc44,	// (0x0005aef8) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd7d,	// (0x0005d031) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd7d,	// (0x0005d031) list_single_idle_plugin_shortcut_pane_g

0xdc57,	// (0x0005af0b) cell_ai_shortcut_pane_ParamLimits

0xdc57,	// (0x0005af0b) cell_ai_shortcut_pane

0xdc7a,	// (0x0005af2e) cell_ai_shortcut_pane_g1_ParamLimits

0xdc7a,	// (0x0005af2e) cell_ai_shortcut_pane_g1

0xdaa6,	// (0x0005ad5a) ai_gene_pane_1_cp2

0xdc9c,	// (0x0005af50) ai_gene_pane_2_cp2

0xdca4,	// (0x0005af58) list_highlight_pane_cp15

0xdcad,	// (0x0005af61) list_single_idle_plugin_calendar_pane_g1

0xdca4,	// (0x0005af58) list_highlight_pane_cp17

0xdcb5,	// (0x0005af69) list_single_idle_plugin_calendar_pane_g1_copy1

0xdcbd,	// (0x0005af71) list_single_idle_plugin_player_pane_g1

0xb3f0,	// (0x000586a4) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd84,	// (0x0005d038) list_single_idle_plugin_player_pane_g

0xdcc5,	// (0x0005af79) list_single_idle_plugin_player_pane_t1

0xdcd3,	// (0x0005af87) list_single_idle_plugin_player_pane_t2

0xdce1,	// (0x0005af95) list_single_idle_plugin_player_pane_t3

0xdcef,	// (0x0005afa3) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd89,	// (0x0005d03d) list_single_idle_plugin_player_pane_t

0xdcfd,	// (0x0005afb1) wait_bar_pane_cp15

0xdd05,	// (0x0005afb9) grid_ai_notification_pane

0xb3f0,	// (0x000586a4) list_single_idle_plugin_notification_pane_g1

0xdd0e,	// (0x0005afc2) cell_ai_notification_pane_ParamLimits

0xdd0e,	// (0x0005afc2) cell_ai_notification_pane

0xdd1b,	// (0x0005afcf) cell_ai_notification_pane_g1

0xdd23,	// (0x0005afd7) cell_ai_notification_pane_t1

0xdd31,	// (0x0005afe5) tb_ext_find_button_pane

0xdd39,	// (0x0005afed) tb_ext_find_pane_g1

0xdd41,	// (0x0005aff5) tb_ext_find_pane_t1

0x8508,	// (0x000557bc) tb_ext_find_button_pane_g1

0xdd4f,	// (0x0005b003) tb_ext_find_button_pane_g2

0x0001,

0xfd92,	// (0x0005d046) tb_ext_find_button_pane_g

0xdaeb,	// (0x0005ad9f) main_idle_act4_pane_t1_ParamLimits

0xdafd,	// (0x0005adb1) main_idle_act4_pane_t2_ParamLimits

0xfd50,	// (0x0005d004) main_idle_act4_pane_t_ParamLimits

0xdb25,	// (0x0005add9) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdb33,	// (0x0005ade7) sat_plugin_idle_act4_pane_ParamLimits

0xdb33,	// (0x0005ade7) sat_plugin_idle_act4_pane

0xdd58,	// (0x0005b00c) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdd58,	// (0x0005b00c) sat_plugin_idle_act4_pane_t1

0xdd6b,	// (0x0005b01f) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdd6b,	// (0x0005b01f) sat_plugin_idle_act4_pane_t2

0xdd7e,	// (0x0005b032) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdd7e,	// (0x0005b032) sat_plugin_idle_act4_pane_t3

0xdd91,	// (0x0005b045) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdd91,	// (0x0005b045) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd97,	// (0x0005d04b) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd97,	// (0x0005d04b) sat_plugin_idle_act4_pane_t

0x4c5d,	// (0x00051f11) popup_battery_window_ParamLimits

0x4c5d,	// (0x00051f11) popup_battery_window

0x7621,	// (0x000548d5) bg_popup_sub_pane_cp25_ParamLimits

0x7621,	// (0x000548d5) bg_popup_sub_pane_cp25

0xdda4,	// (0x0005b058) popup_battery_window_g1_ParamLimits

0xdda4,	// (0x0005b058) popup_battery_window_g1

0xddb0,	// (0x0005b064) popup_battery_window_t1_ParamLimits

0xddb0,	// (0x0005b064) popup_battery_window_t1

0xddc2,	// (0x0005b076) popup_battery_window_t2_ParamLimits

0xddc2,	// (0x0005b076) popup_battery_window_t2

0x0001,

0xfda0,	// (0x0005d054) popup_battery_window_t_ParamLimits

0xfda0,	// (0x0005d054) popup_battery_window_t

0x8b0a,	// (0x00055dbe) midp_canvas_pane_ParamLimits

0x8b81,	// (0x00055e35) midp_keypad_pane_ParamLimits

0x8b81,	// (0x00055e35) midp_keypad_pane

0x8e74,	// (0x00056128) main_midp_pane_ParamLimits

0xbb0a,	// (0x00058dbe) signal_pane_g2_cp_ParamLimits

0xdddf,	// (0x0005b093) aid_size_cell_midp_keypad_ParamLimits

0xdddf,	// (0x0005b093) aid_size_cell_midp_keypad

0xddf9,	// (0x0005b0ad) midp_keyp_game_grid_pane_ParamLimits

0xddf9,	// (0x0005b0ad) midp_keyp_game_grid_pane

0xde19,	// (0x0005b0cd) midp_keyp_rocker_pane_ParamLimits

0xde19,	// (0x0005b0cd) midp_keyp_rocker_pane

0xde48,	// (0x0005b0fc) midp_keyp_sk_left_pane_ParamLimits

0xde48,	// (0x0005b0fc) midp_keyp_sk_left_pane

0xdea2,	// (0x0005b156) midp_keyp_sk_right_pane_ParamLimits

0xdea2,	// (0x0005b156) midp_keyp_sk_right_pane

0x24fd,	// (0x0004f7b1) bg_button_pane_cp03

0xdefc,	// (0x0005b1b0) midp_keyp_sk_left_pane_g1

0x24fd,	// (0x0004f7b1) bg_button_pane_cp04

0xdefc,	// (0x0005b1b0) midp_keyp_sk_right_pane_g1

0xc056,	// (0x0005930a) midp_keyp_rocker_pane_g1

0xdf05,	// (0x0005b1b9) keyp_game_cell_pane_ParamLimits

0xdf05,	// (0x0005b1b9) keyp_game_cell_pane

0x24fd,	// (0x0004f7b1) bg_button_pane_cp02

0xdf18,	// (0x0005b1cc) keyp_game_cell_pane_g1

0x4ca7,	// (0x00051f5b) popup_fep_vkb2_window_ParamLimits

0x4ca7,	// (0x00051f5b) popup_fep_vkb2_window

0x6b44,	// (0x00053df8) aid_size_cell_vkb2_ParamLimits

0x6b44,	// (0x00053df8) aid_size_cell_vkb2

0x6b90,	// (0x00053e44) popup_fep_vkb2_window_g1_ParamLimits

0x6b90,	// (0x00053e44) popup_fep_vkb2_window_g1

0x6bd8,	// (0x00053e8c) vkb2_area_bottom_pane_ParamLimits

0x6bd8,	// (0x00053e8c) vkb2_area_bottom_pane

0x6c2c,	// (0x00053ee0) vkb2_area_keypad_pane_ParamLimits

0x6c2c,	// (0x00053ee0) vkb2_area_keypad_pane

0x6c72,	// (0x00053f26) vkb2_area_top_pane_ParamLimits

0x6c72,	// (0x00053f26) vkb2_area_top_pane

0x6cec,	// (0x00053fa0) vkb2_top_entry_pane_ParamLimits

0x6cec,	// (0x00053fa0) vkb2_top_entry_pane

0x6d16,	// (0x00053fca) vkb2_top_grid_left_pane_ParamLimits

0x6d16,	// (0x00053fca) vkb2_top_grid_left_pane

0x6d34,	// (0x00053fe8) vkb2_top_grid_right_pane_ParamLimits

0x6d34,	// (0x00053fe8) vkb2_top_grid_right_pane

0x6d52,	// (0x00054006) vkb2_cell_keypad_pane_ParamLimits

0x6d52,	// (0x00054006) vkb2_cell_keypad_pane

0x6e08,	// (0x000540bc) vkb2_area_bottom_grid_pane_ParamLimits

0x6e08,	// (0x000540bc) vkb2_area_bottom_grid_pane

0x6e2e,	// (0x000540e2) vkb2_area_bottom_pane_g1_ParamLimits

0x6e2e,	// (0x000540e2) vkb2_area_bottom_pane_g1

0x6e52,	// (0x00054106) vkb2_area_bottom_pane_g2_ParamLimits

0x6e52,	// (0x00054106) vkb2_area_bottom_pane_g2

0x6e80,	// (0x00054134) vkb2_area_bottom_pane_g3_ParamLimits

0x6e80,	// (0x00054134) vkb2_area_bottom_pane_g3

0x0002,

0xfda5,	// (0x0005d059) vkb2_area_bottom_pane_g_ParamLimits

0xfda5,	// (0x0005d059) vkb2_area_bottom_pane_g

0x6ee1,	// (0x00054195) vkb2_top_cell_left_pane_ParamLimits

0x6ee1,	// (0x00054195) vkb2_top_cell_left_pane

0xdf29,	// (0x0005b1dd) vkb2_top_entry_pane_g1_ParamLimits

0xdf29,	// (0x0005b1dd) vkb2_top_entry_pane_g1

0xdf37,	// (0x0005b1eb) vkb2_top_entry_pane_t1_ParamLimits

0xdf37,	// (0x0005b1eb) vkb2_top_entry_pane_t1

0xdf4f,	// (0x0005b203) vkb2_top_entry_pane_t2_ParamLimits

0xdf4f,	// (0x0005b203) vkb2_top_entry_pane_t2

0xdf67,	// (0x0005b21b) vkb2_top_entry_pane_t3_ParamLimits

0xdf67,	// (0x0005b21b) vkb2_top_entry_pane_t3

0x0002,

0xfdac,	// (0x0005d060) vkb2_top_entry_pane_t_ParamLimits

0xfdac,	// (0x0005d060) vkb2_top_entry_pane_t

0x6f2e,	// (0x000541e2) vkb2_top_grid_right_pane_g1_ParamLimits

0x6f2e,	// (0x000541e2) vkb2_top_grid_right_pane_g1

0x6f44,	// (0x000541f8) vkb2_top_grid_right_pane_g2_ParamLimits

0x6f44,	// (0x000541f8) vkb2_top_grid_right_pane_g2

0x6f5c,	// (0x00054210) vkb2_top_grid_right_pane_g3_ParamLimits

0x6f5c,	// (0x00054210) vkb2_top_grid_right_pane_g3

0x6f74,	// (0x00054228) vkb2_top_grid_right_pane_g4_ParamLimits

0x6f74,	// (0x00054228) vkb2_top_grid_right_pane_g4

0x0003,

0xfdb3,	// (0x0005d067) vkb2_top_grid_right_pane_g_ParamLimits

0xfdb3,	// (0x0005d067) vkb2_top_grid_right_pane_g

0x6f8a,	// (0x0005423e) vkb2_top_cell_left_pane_g1

0x6fa1,	// (0x00054255) vkb2_cell_keypad_pane_g1_ParamLimits

0x6fa1,	// (0x00054255) vkb2_cell_keypad_pane_g1

0xdf7d,	// (0x0005b231) vkb2_cell_keypad_pane_t1_ParamLimits

0xdf7d,	// (0x0005b231) vkb2_cell_keypad_pane_t1

0x6fc5,	// (0x00054279) vkb2_cell_bottom_grid_pane_ParamLimits

0x6fc5,	// (0x00054279) vkb2_cell_bottom_grid_pane

0x6ffe,	// (0x000542b2) vkb2_cell_bottom_grid_pane_g1

0xdb73,	// (0x0005ae27) aid_call2_pane_cp02

0xdb7b,	// (0x0005ae2f) aid_call_pane_cp02

0xdb83,	// (0x0005ae37) clock_digital_number_pane_cp10

0xdb8b,	// (0x0005ae3f) clock_digital_number_pane_cp11

0xdb93,	// (0x0005ae47) clock_digital_number_pane_cp12

0xdb9b,	// (0x0005ae4f) clock_digital_number_pane_cp13

0xdba3,	// (0x0005ae57) clock_digital_separator_pane_cp10

0x8508,	// (0x000557bc) popup_clock_digital_analogue_window_cp2_g1

0x8508,	// (0x000557bc) popup_clock_digital_analogue_window_cp2_g2

0xdbab,	// (0x0005ae5f) popup_clock_digital_analogue_window_cp2_g3

0x8508,	// (0x000557bc) popup_clock_digital_analogue_window_cp2_g4

0xdbab,	// (0x0005ae5f) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd68,	// (0x0005d01c) popup_clock_digital_analogue_window_cp2_g

0xdbb3,	// (0x0005ae67) popup_clock_digital_analogue_window_cp2_t1

0xdbc1,	// (0x0005ae75) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd73,	// (0x0005d027) popup_clock_digital_analogue_window_cp2_t

0xc056,	// (0x0005930a) clock_digital_number_pane_cp10_g1

0xc056,	// (0x0005930a) clock_digital_number_pane_cp10_g2

0x0001,

0xfb4f,	// (0x0005ce03) clock_digital_number_pane_cp10_g

0xc056,	// (0x0005930a) clock_digital_separator_pane_cp10_g1

0xc056,	// (0x0005930a) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb4f,	// (0x0005ce03) clock_digital_separator_pane_cp10_g

0xd9ee,	// (0x0005aca2) uniindi_top_pane_g3

0xd9ff,	// (0x0005acb3) uniindi_top_pane_g4

0x6dc2,	// (0x00054076) vkb2_row_keypad_pane_ParamLimits

0x6dc2,	// (0x00054076) vkb2_row_keypad_pane

0x701a,	// (0x000542ce) vkb2_cell_t_keypad_pane_ParamLimits

0x701a,	// (0x000542ce) vkb2_cell_t_keypad_pane

0x702a,	// (0x000542de) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x702a,	// (0x000542de) vkb2_cell_t_keypad_pane_cp08

0x703f,	// (0x000542f3) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x703f,	// (0x000542f3) vkb2_cell_t_keypad_pane_cp09

0x7053,	// (0x00054307) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x7053,	// (0x00054307) vkb2_cell_t_keypad_pane_cp01

0x7064,	// (0x00054318) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x7064,	// (0x00054318) vkb2_cell_t_keypad_pane_cp02

0x7075,	// (0x00054329) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x7075,	// (0x00054329) vkb2_cell_t_keypad_pane_cp03

0x7086,	// (0x0005433a) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x7086,	// (0x0005433a) vkb2_cell_t_keypad_pane_cp04

0x7097,	// (0x0005434b) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x7097,	// (0x0005434b) vkb2_cell_t_keypad_pane_cp05

0x70a8,	// (0x0005435c) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x70a8,	// (0x0005435c) vkb2_cell_t_keypad_pane_cp06

0x70bb,	// (0x0005436f) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x70bb,	// (0x0005436f) vkb2_cell_t_keypad_pane_cp07

0x70d0,	// (0x00054384) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x70d0,	// (0x00054384) vkb2_cell_t_keypad_pane_cp10

0x65fa,	// (0x000538ae) vkb2_cell_t_keypad_pane_g1

0xdf94,	// (0x0005b248) vkb2_cell_t_keypad_pane_t1

0x4b98,	// (0x00051e4c) popup_grid_graphic2_window

0xdfa6,	// (0x0005b25a) aid_size_cell_graphic2_ParamLimits

0xdfa6,	// (0x0005b25a) aid_size_cell_graphic2

0xdfde,	// (0x0005b292) bg_popup_window_pane_cp21_ParamLimits

0xdfde,	// (0x0005b292) bg_popup_window_pane_cp21

0xdfec,	// (0x0005b2a0) graphic2_pages_pane_ParamLimits

0xdfec,	// (0x0005b2a0) graphic2_pages_pane

0xe032,	// (0x0005b2e6) grid_graphic2_control_pane_ParamLimits

0xe032,	// (0x0005b2e6) grid_graphic2_control_pane

0xe070,	// (0x0005b324) grid_graphic2_pane_ParamLimits

0xe070,	// (0x0005b324) grid_graphic2_pane

0xe0e6,	// (0x0005b39a) cell_graphic2_pane

0x24fd,	// (0x0004f7b1) main_comp_mode_pane

0xd25f,	// (0x0005a513) list_ai3_gene_pane_ParamLimits

0xd627,	// (0x0005a8db) bg_popup_window_pane_cp19_ParamLimits

0xd633,	// (0x0005a8e7) bg_touch_area_indi_pane_ParamLimits

0xd633,	// (0x0005a8e7) bg_touch_area_indi_pane

0xd649,	// (0x0005a8fd) bg_touch_area_indi_pane_cp01_ParamLimits

0xd649,	// (0x0005a8fd) bg_touch_area_indi_pane_cp01

0xd661,	// (0x0005a915) bg_touch_area_indi_pane_cp02_ParamLimits

0xd661,	// (0x0005a915) bg_touch_area_indi_pane_cp02

0xd67b,	// (0x0005a92f) bg_touch_area_indi_pane_cp03_ParamLimits

0xd67b,	// (0x0005a92f) bg_touch_area_indi_pane_cp03

0xd695,	// (0x0005a949) popup_slider_window_g1_ParamLimits

0xd6b1,	// (0x0005a965) popup_slider_window_g2_ParamLimits

0xd6cd,	// (0x0005a981) popup_slider_window_g3_ParamLimits

0xfcfd,	// (0x0005cfb1) popup_slider_window_g_ParamLimits

0xd729,	// (0x0005a9dd) popup_slider_window_t1_ParamLimits

0xd79d,	// (0x0005aa51) small_volume_slider_vertical_pane_ParamLimits

0xe0e6,	// (0x0005b39a) cell_graphic2_pane_ParamLimits

0xe138,	// (0x0005b3ec) bg_button_pane_cp10_ParamLimits

0xe138,	// (0x0005b3ec) bg_button_pane_cp10

0xe14d,	// (0x0005b401) bg_button_pane_cp11_ParamLimits

0xe14d,	// (0x0005b401) bg_button_pane_cp11

0xe162,	// (0x0005b416) graphic2_pages_pane_g1_ParamLimits

0xe162,	// (0x0005b416) graphic2_pages_pane_g1

0xe17d,	// (0x0005b431) graphic2_pages_pane_g2_ParamLimits

0xe17d,	// (0x0005b431) graphic2_pages_pane_g2

0x0001,

0xfdc1,	// (0x0005d075) graphic2_pages_pane_g_ParamLimits

0xfdc1,	// (0x0005d075) graphic2_pages_pane_g

0xe195,	// (0x0005b449) graphic2_pages_pane_t1_ParamLimits

0xe195,	// (0x0005b449) graphic2_pages_pane_t1

0xe1ab,	// (0x0005b45f) cell_graphic2_control_pane_ParamLimits

0xe1ab,	// (0x0005b45f) cell_graphic2_control_pane

0xe1c5,	// (0x0005b479) cell_graphic2_pane_g1_ParamLimits

0xe1c5,	// (0x0005b479) cell_graphic2_pane_g1

0xe1d2,	// (0x0005b486) cell_graphic2_pane_g2_ParamLimits

0xe1d2,	// (0x0005b486) cell_graphic2_pane_g2

0xe1df,	// (0x0005b493) cell_graphic2_pane_g3_ParamLimits

0xe1df,	// (0x0005b493) cell_graphic2_pane_g3

0xe1ec,	// (0x0005b4a0) cell_graphic2_pane_g4_ParamLimits

0xe1ec,	// (0x0005b4a0) cell_graphic2_pane_g4

0xe1f9,	// (0x0005b4ad) cell_graphic2_pane_g5_ParamLimits

0xe1f9,	// (0x0005b4ad) cell_graphic2_pane_g5

0x0004,

0xfdc6,	// (0x0005d07a) cell_graphic2_pane_g_ParamLimits

0xfdc6,	// (0x0005d07a) cell_graphic2_pane_g

0xe214,	// (0x0005b4c8) cell_graphic2_pane_t1_ParamLimits

0xe214,	// (0x0005b4c8) cell_graphic2_pane_t1

0x9aa2,	// (0x00056d56) grid_highlight_pane_cp11_ParamLimits

0x9aa2,	// (0x00056d56) grid_highlight_pane_cp11

0x7621,	// (0x000548d5) bg_button_pane_cp05

0xe23d,	// (0x0005b4f1) cell_graphic2_control_pane_g1

0xc056,	// (0x0005930a) bg_touch_area_indi_pane_g1

0xe265,	// (0x0005b519) aid_cmod_rocker_key_size

0xe26f,	// (0x0005b523) aid_cmode_itu_key_size

0xe279,	// (0x0005b52d) main_cmode_video_pane

0xe283,	// (0x0005b537) main_comp_mode_itu_pane

0xe28f,	// (0x0005b543) main_comp_mode_rocker_pane

0xe29b,	// (0x0005b54f) cell_cmode_rocker_pane_ParamLimits

0xe29b,	// (0x0005b54f) cell_cmode_rocker_pane

0xe2af,	// (0x0005b563) cell_cmode_itu_pane_ParamLimits

0xe2af,	// (0x0005b563) cell_cmode_itu_pane

0x7cca,	// (0x00054f7e) bg_button_pane_cp06_ParamLimits

0x7cca,	// (0x00054f7e) bg_button_pane_cp06

0xc2e0,	// (0x00059594) cell_cmode_rocker_pane_g1_ParamLimits

0xc2e0,	// (0x00059594) cell_cmode_rocker_pane_g1

0xd844,	// (0x0005aaf8) cell_cmode_rocker_pane_g2_ParamLimits

0xd844,	// (0x0005aaf8) cell_cmode_rocker_pane_g2

0x0001,

0xfdd6,	// (0x0005d08a) cell_cmode_rocker_pane_g_ParamLimits

0xfdd6,	// (0x0005d08a) cell_cmode_rocker_pane_g

0x24fd,	// (0x0004f7b1) bg_button_pane_cp07

0xe2c6,	// (0x0005b57a) cell_cmode_itu_pane_g1

0xe2cf,	// (0x0005b583) cell_cmode_itu_pane_t1

0xe2dd,	// (0x0005b591) cell_cmode_itu_pane_t2

0x0001,

0xfddb,	// (0x0005d08f) cell_cmode_itu_pane_t

0xda72,	// (0x0005ad26) aid_touch_ctrl_left

0xda7a,	// (0x0005ad2e) aid_touch_ctrl_right

0x24fd,	// (0x0004f7b1) compa_mode_pane

0xe2eb,	// (0x0005b59f) aid_cmod_rocker_key_size_cp

0xe2f5,	// (0x0005b5a9) aid_cmode_itu_key_size_cp

0xe2ff,	// (0x0005b5b3) compa_mode_pane_g1

0xe307,	// (0x0005b5bb) compa_mode_pane_g2

0xe30f,	// (0x0005b5c3) compa_mode_pane_g3

0x0002,

0xfde0,	// (0x0005d094) compa_mode_pane_g

0xe317,	// (0x0005b5cb) main_comp_mode_itu_pane_cp

0xe31f,	// (0x0005b5d3) main_comp_mode_rocker_pane_cp

0xe327,	// (0x0005b5db) cell_cmode_itu_pane_cp_ParamLimits

0xe327,	// (0x0005b5db) cell_cmode_itu_pane_cp

0xe33c,	// (0x0005b5f0) cell_cmode_rocker_pane_cp_ParamLimits

0xe33c,	// (0x0005b5f0) cell_cmode_rocker_pane_cp

0x7cca,	// (0x00054f7e) bg_button_pane_cp06_cp_ParamLimits

0x7cca,	// (0x00054f7e) bg_button_pane_cp06_cp

0xc2e0,	// (0x00059594) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc2e0,	// (0x00059594) cell_cmode_rocker_pane_g1_cp

0xc056,	// (0x0005930a) cell_cmode_rocker_pane_g2_cp

0x24fd,	// (0x0004f7b1) bg_button_pane_cp07_cp

0xe34e,	// (0x0005b602) cell_cmode_itu_pane_g1_cp

0xe357,	// (0x0005b60b) cell_cmode_itu_pane_t1_cp

0xe357,	// (0x0005b60b) cell_cmode_itu_pane_t2_cp

0xaf69,	// (0x0005821d) settings_code_pane_cp2

0x7397,	// (0x0005464b) bg_popup_window_pane_cp3_ParamLimits

0x780f,	// (0x00054ac3) heading_pane_cp3_ParamLimits

0x781b,	// (0x00054acf) listscroll_popup_graphic_pane_ParamLimits

0x638d,	// (0x00053641) fep_hwr_aid_pane_ParamLimits

0x6a99,	// (0x00053d4d) aid_touch_sctrl_top_ParamLimits

0x6ab4,	// (0x00053d68) sctrl_sk_top_pane_g1_ParamLimits

0x65fa,	// (0x000538ae) sctrl_sk_top_pane_g2_ParamLimits

0xfd16,	// (0x0005cfca) sctrl_sk_top_pane_g_ParamLimits

0x6ac1,	// (0x00053d75) sctrl_sk_top_pane_t1_ParamLimits

0x6a99,	// (0x00053d4d) aid_touch_sctrl_bottom_ParamLimits

0x6ac1,	// (0x00053d75) sctrl_sk_bottom_pane_t1_ParamLimits

0xd9b8,	// (0x0005ac6c) aid_area_touch_clock

0x6cb4,	// (0x00053f68) aid_vkb2_area_top_pane_cell_ParamLimits

0x6cb4,	// (0x00053f68) aid_vkb2_area_top_pane_cell

0x6de4,	// (0x00054098) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x6de4,	// (0x00054098) aid_vkb2_area_bottom_pane_cell

0xdf21,	// (0x0005b1d5) popup_char_count_window

0xe365,	// (0x0005b619) popup_char_count_window_g1

0xe36e,	// (0x0005b622) popup_char_count_window_g2

0xe377,	// (0x0005b62b) popup_char_count_window_g3

0x0002,

0xfde7,	// (0x0005d09b) popup_char_count_window_g

0xe380,	// (0x0005b634) popup_char_count_window_t1

0x6b6e,	// (0x00053e22) popup_fep_char_preview_window_ParamLimits

0x6b6e,	// (0x00053e22) popup_fep_char_preview_window

0x6cd2,	// (0x00053f86) vkb2_top_candi_pane_ParamLimits

0x6cd2,	// (0x00053f86) vkb2_top_candi_pane

0xe38e,	// (0x0005b642) cell_vkb2_top_candi_pane_ParamLimits

0xe38e,	// (0x0005b642) cell_vkb2_top_candi_pane

0x70e5,	// (0x00054399) bg_popup_fep_char_preview_window_ParamLimits

0x70e5,	// (0x00054399) bg_popup_fep_char_preview_window

0x70f3,	// (0x000543a7) popup_fep_char_preview_window_t1_ParamLimits

0x70f3,	// (0x000543a7) popup_fep_char_preview_window_t1

0xe3df,	// (0x0005b693) bg_popup_fep_char_preview_window_g1

0xe3e7,	// (0x0005b69b) bg_popup_fep_char_preview_window_g2

0xe3ef,	// (0x0005b6a3) bg_popup_fep_char_preview_window_g3

0xe3f7,	// (0x0005b6ab) bg_popup_fep_char_preview_window_g4

0xe3ff,	// (0x0005b6b3) bg_popup_fep_char_preview_window_g5

0x712d,	// (0x000543e1) bg_popup_fep_char_preview_window_g6

0xe407,	// (0x0005b6bb) bg_popup_fep_char_preview_window_g7

0xe40f,	// (0x0005b6c3) bg_popup_fep_char_preview_window_g8

0xe417,	// (0x0005b6cb) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdee,	// (0x0005d0a2) bg_popup_fep_char_preview_window_g

0x65fa,	// (0x000538ae) cell_vkb2_top_candi_pane_g1_ParamLimits

0x65fa,	// (0x000538ae) cell_vkb2_top_candi_pane_g1

0x6608,	// (0x000538bc) cell_vkb2_top_candi_pane_g2_ParamLimits

0x6608,	// (0x000538bc) cell_vkb2_top_candi_pane_g2

0xce71,	// (0x0005a125) cell_vkb2_top_candi_pane_g3_ParamLimits

0xce71,	// (0x0005a125) cell_vkb2_top_candi_pane_g3

0x7135,	// (0x000543e9) cell_vkb2_top_candi_pane_g4_ParamLimits

0x7135,	// (0x000543e9) cell_vkb2_top_candi_pane_g4

0xc7df,	// (0x00059a93) cell_vkb2_top_candi_pane_g5_ParamLimits

0xc7df,	// (0x00059a93) cell_vkb2_top_candi_pane_g5

0x7156,	// (0x0005440a) cell_vkb2_top_candi_pane_g6_ParamLimits

0x7156,	// (0x0005440a) cell_vkb2_top_candi_pane_g6

0x0005,

0xfe01,	// (0x0005d0b5) cell_vkb2_top_candi_pane_g_ParamLimits

0xfe01,	// (0x0005d0b5) cell_vkb2_top_candi_pane_g

0x7164,	// (0x00054418) cell_vkb2_top_candi_pane_t1

0x5fa0,	// (0x00053254) aid_size_touch_slider_mark_ParamLimits

0x5fa0,	// (0x00053254) aid_size_touch_slider_mark

0xe022,	// (0x0005b2d6) grid_graphic2_catg_pane_ParamLimits

0xe022,	// (0x0005b2d6) grid_graphic2_catg_pane

0xe0c0,	// (0x0005b374) popup_grid_graphic2_window_t1_ParamLimits

0xe0c0,	// (0x0005b374) popup_grid_graphic2_window_t1

0xe0d2,	// (0x0005b386) popup_grid_graphic2_window_t2_ParamLimits

0xe0d2,	// (0x0005b386) popup_grid_graphic2_window_t2

0x0001,

0xfdbc,	// (0x0005d070) popup_grid_graphic2_window_t_ParamLimits

0xfdbc,	// (0x0005d070) popup_grid_graphic2_window_t

0x7621,	// (0x000548d5) bg_button_pane_cp05_ParamLimits

0xe23d,	// (0x0005b4f1) cell_graphic2_control_pane_g1_ParamLimits

0xe41f,	// (0x0005b6d3) cell_graphic2_catg_pane_ParamLimits

0xe41f,	// (0x0005b6d3) cell_graphic2_catg_pane

0x24fd,	// (0x0004f7b1) bg_button_pane_cp12

0xe431,	// (0x0005b6e5) cell_graphic2_catg_pane_g1

0xd984,	// (0x0005ac38) cell_tb_ext_pane_t1_ParamLimits

0x6f01,	// (0x000541b5) vkb2_top_cell_right_narrow_pane_ParamLimits

0x6f01,	// (0x000541b5) vkb2_top_cell_right_narrow_pane

0x6f19,	// (0x000541cd) vkb2_top_cell_right_wide_pane_ParamLimits

0x6f19,	// (0x000541cd) vkb2_top_cell_right_wide_pane

0x637f,	// (0x00053633) bg_vkb2_func_pane_ParamLimits

0x637f,	// (0x00053633) bg_vkb2_func_pane

0x6f8a,	// (0x0005423e) vkb2_top_cell_left_pane_g1_ParamLimits

0x637f,	// (0x00053633) bg_vkb2_fuc_pane_cp03_ParamLimits

0x637f,	// (0x00053633) bg_vkb2_fuc_pane_cp03

0x6ffe,	// (0x000542b2) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x99b8,	// (0x00056c6c) bg_vkb2_func_pane_g1

0x99c0,	// (0x00056c74) bg_vkb2_func_pane_g2

0x99d0,	// (0x00056c84) bg_vkb2_func_pane_g3

0x99c8,	// (0x00056c7c) bg_vkb2_func_pane_g4

0x99d8,	// (0x00056c8c) bg_vkb2_func_pane_g5

0x99e0,	// (0x00056c94) bg_vkb2_func_pane_g6

0x99e8,	// (0x00056c9c) bg_vkb2_func_pane_g7

0x99f0,	// (0x00056ca4) bg_vkb2_func_pane_g8

0x99b0,	// (0x00056c64) bg_vkb2_func_pane_g9

0x0008,

0xfe0e,	// (0x0005d0c2) bg_vkb2_func_pane_g

0x637f,	// (0x00053633) bg_vkb2_fuc_pane_cp01_ParamLimits

0x637f,	// (0x00053633) bg_vkb2_fuc_pane_cp01

0x6f8a,	// (0x0005423e) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x6f8a,	// (0x0005423e) vkb2_top_cell_right_wide_pane_g1

0x637f,	// (0x00053633) bg_vkb2_fuc_pane_cp02_ParamLimits

0x637f,	// (0x00053633) bg_vkb2_fuc_pane_cp02

0x6ffe,	// (0x000542b2) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x6ffe,	// (0x000542b2) vkb2_top_cell_right_narrow_pane_g1

0xd5a5,	// (0x0005a859) aid_touch_area_decrease_ParamLimits

0xd5a5,	// (0x0005a859) aid_touch_area_decrease

0xd5c9,	// (0x0005a87d) aid_touch_area_increase_ParamLimits

0xd5c9,	// (0x0005a87d) aid_touch_area_increase

0xd5d5,	// (0x0005a889) aid_touch_area_mute_ParamLimits

0xd5d5,	// (0x0005a889) aid_touch_area_mute

0xd5f9,	// (0x0005a8ad) aid_touch_area_slider_ParamLimits

0xd5f9,	// (0x0005a8ad) aid_touch_area_slider

0xd6e9,	// (0x0005a99d) popup_slider_window_g4_ParamLimits

0xd6e9,	// (0x0005a99d) popup_slider_window_g4

0xd6f5,	// (0x0005a9a9) popup_slider_window_g5_ParamLimits

0xd6f5,	// (0x0005a9a9) popup_slider_window_g5

0xd717,	// (0x0005a9cb) popup_slider_window_g6_ParamLimits

0xd717,	// (0x0005a9cb) popup_slider_window_g6

0xd757,	// (0x0005aa0b) popup_slider_window_t2_ParamLimits

0xd757,	// (0x0005aa0b) popup_slider_window_t2

0x0001,

0xfd0a,	// (0x0005cfbe) popup_slider_window_t_ParamLimits

0xfd0a,	// (0x0005cfbe) popup_slider_window_t

0xd76f,	// (0x0005aa23) slider_pane_ParamLimits

0xd76f,	// (0x0005aa23) slider_pane

0xe43a,	// (0x0005b6ee) slider_pane_g1_ParamLimits

0xe43a,	// (0x0005b6ee) slider_pane_g1

0xe44e,	// (0x0005b702) slider_pane_g2_ParamLimits

0xe44e,	// (0x0005b702) slider_pane_g2

0xe464,	// (0x0005b718) slider_pane_g3_ParamLimits

0xe464,	// (0x0005b718) slider_pane_g3

0x0003,

0xfe21,	// (0x0005d0d5) slider_pane_g_ParamLimits

0xfe21,	// (0x0005d0d5) slider_pane_g

0x93aa,	// (0x0005665e) popup_tb_float_extension_window_ParamLimits

0x93aa,	// (0x0005665e) popup_tb_float_extension_window

0xe490,	// (0x0005b744) aid_size_cell_tb_float_ext

0x24fd,	// (0x0004f7b1) bg_popup_sub_window_cp28

0xe49c,	// (0x0005b750) grid_tb_float_ext_pane

0xe4a8,	// (0x0005b75c) cell_tb_float_ext_pane_ParamLimits

0xe4a8,	// (0x0005b75c) cell_tb_float_ext_pane

0xe4c4,	// (0x0005b778) cell_tb_float_ext_pane_g1

0xe4cd,	// (0x0005b781) grid_highlight_pane_cp12

0x64d4,	// (0x00053788) cell_last_hwr_side_pane_ParamLimits

0x64d4,	// (0x00053788) cell_last_hwr_side_pane

0xc056,	// (0x0005930a) cell_last_hwr_side_pane_g1

0xe4d6,	// (0x0005b78a) cell_last_hwr_side_pane_g2

0x0001,

0xfe2a,	// (0x0005d0de) cell_last_hwr_side_pane_g

0x6eb0,	// (0x00054164) vkb2_area_bottom_space_btn_pane_ParamLimits

0x6eb0,	// (0x00054164) vkb2_area_bottom_space_btn_pane

0x65fa,	// (0x000538ae) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xdf94,	// (0x0005b248) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x7164,	// (0x00054418) cell_vkb2_top_candi_pane_t1_ParamLimits

0x7182,	// (0x00054436) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x7182,	// (0x00054436) vkb2_area_bottom_space_btn_pane_g1

0x71bc,	// (0x00054470) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x71bc,	// (0x00054470) vkb2_area_bottom_space_btn_pane_g2

0x71f2,	// (0x000544a6) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x71f2,	// (0x000544a6) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe2f,	// (0x0005d0e3) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe2f,	// (0x0005d0e3) vkb2_area_bottom_space_btn_pane_g

0x6444,	// (0x000536f8) cel_fep_hwr_func_pane_ParamLimits

0x6444,	// (0x000536f8) cel_fep_hwr_func_pane

0x6480,	// (0x00053734) cell_hwr_side_button_pane_ParamLimits

0x6480,	// (0x00053734) cell_hwr_side_button_pane

0xd9b8,	// (0x0005ac6c) aid_area_touch_clock_ParamLimits

0x7621,	// (0x000548d5) bg_uniindi_top_pane_ParamLimits

0xd9cc,	// (0x0005ac80) uniindi_top_pane_g1_ParamLimits

0xd9e2,	// (0x0005ac96) uniindi_top_pane_g2_ParamLimits

0xd9ee,	// (0x0005aca2) uniindi_top_pane_g3_ParamLimits

0xd9ff,	// (0x0005acb3) uniindi_top_pane_g4_ParamLimits

0xfd42,	// (0x0005cff6) uniindi_top_pane_g_ParamLimits

0xda0c,	// (0x0005acc0) uniindi_top_pane_t1_ParamLimits

0x7621,	// (0x000548d5) bg_vkb2_func_pane_cp01_ParamLimits

0x7621,	// (0x000548d5) bg_vkb2_func_pane_cp01

0xe4df,	// (0x0005b793) cel_fep_hwr_func_pane_g1_ParamLimits

0xe4df,	// (0x0005b793) cel_fep_hwr_func_pane_g1

0x7621,	// (0x000548d5) bg_vkb2_func_pane_cp02_ParamLimits

0x7621,	// (0x000548d5) bg_vkb2_func_pane_cp02

0xe4df,	// (0x0005b793) cell_hwr_side_button_pane_g1_ParamLimits

0xe4df,	// (0x0005b793) cell_hwr_side_button_pane_g1

0x9831,	// (0x00056ae5) status_pane_g4_ParamLimits

0x9831,	// (0x00056ae5) status_pane_g4

0x984b,	// (0x00056aff) status_pane_t1

0xbdb0,	// (0x00059064) form2_midp_gauge_slider_cont_pane

0xbdb8,	// (0x0005906c) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbdca,	// (0x0005907e) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbddc,	// (0x00059090) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb02,	// (0x0005cdb6) form2_midp_gauge_slider_pane_t_ParamLimits

0xbdee,	// (0x000590a2) form2_midp_slider_pane_ParamLimits

0x6b36,	// (0x00053dea) aid_size_cell_func_vkb2_ParamLimits

0x6b36,	// (0x00053dea) aid_size_cell_func_vkb2

0xe47c,	// (0x0005b730) slider_pane_g4_ParamLimits

0xe47c,	// (0x0005b730) slider_pane_g4

0x723c,	// (0x000544f0) form2_midp_gauge_slider_pane_t2_cp01

0x724a,	// (0x000544fe) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x724a,	// (0x000544fe) form2_midp_gauge_slider_pane_t3_cp01

0x7267,	// (0x0005451b) form2_midp_slider_pane_cp01

0x24fd,	// (0x0004f7b1) navi_smil_pane

0xe518,	// (0x0005b7cc) navi_smil_pane_g1

0xe520,	// (0x0005b7d4) navi_smil_pane_t1

0xe4ed,	// (0x0005b7a1) form2_midp_slider_pane_g1

0xe4f6,	// (0x0005b7aa) form2_midp_slider_pane_g2

0xe4fe,	// (0x0005b7b2) form2_midp_slider_pane_g3

0xe4ed,	// (0x0005b7a1) form2_midp_slider_pane_g4

0xe506,	// (0x0005b7ba) form2_midp_slider_pane_g5

0x0004,

0xfe38,	// (0x0005d0ec) form2_midp_slider_pane_g

0x722c,	// (0x000544e0) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x722c,	// (0x000544e0) vkb2_area_bottom_space_btn_pane_g4

0x9649,	// (0x000568fd) lc0_navi_pane_ParamLimits

0x9649,	// (0x000568fd) lc0_navi_pane

0x96c5,	// (0x00056979) lc0_stat_indi_pane_ParamLimits

0x96c5,	// (0x00056979) lc0_stat_indi_pane

0x96dc,	// (0x00056990) ls0_title_pane_ParamLimits

0x96dc,	// (0x00056990) ls0_title_pane

0x7cca,	// (0x00054f7e) bg_popup_sub_pane_cp14_ParamLimits

0xd99f,	// (0x0005ac53) list_uniindi_pane_ParamLimits

0xd9ab,	// (0x0005ac5f) uniindi_top_pane_ParamLimits

0xda4a,	// (0x0005acfe) list_single_uniindi_pane_g1_ParamLimits

0xda5d,	// (0x0005ad11) list_single_uniindi_pane_t1_ParamLimits

0x7270,	// (0x00054524) lc0_stat_clock_pane_ParamLimits

0x7270,	// (0x00054524) lc0_stat_clock_pane

0xe52e,	// (0x0005b7e2) lc0_stat_indi_pane_g1_ParamLimits

0xe52e,	// (0x0005b7e2) lc0_stat_indi_pane_g1

0xe53b,	// (0x0005b7ef) lc0_stat_indi_pane_g2_ParamLimits

0xe53b,	// (0x0005b7ef) lc0_stat_indi_pane_g2

0x0001,

0xfe43,	// (0x0005d0f7) lc0_stat_indi_pane_g_ParamLimits

0xfe43,	// (0x0005d0f7) lc0_stat_indi_pane_g

0x727d,	// (0x00054531) lc0_uni_indicator_pane_ParamLimits

0x727d,	// (0x00054531) lc0_uni_indicator_pane

0xe548,	// (0x0005b7fc) ls0_title_pane_g1_ParamLimits

0xe548,	// (0x0005b7fc) ls0_title_pane_g1

0xe55c,	// (0x0005b810) ls0_title_pane_t1_ParamLimits

0xe55c,	// (0x0005b810) ls0_title_pane_t1

0x728a,	// (0x0005453e) lc0_uni_indicator_pane_g1_ParamLimits

0x728a,	// (0x0005453e) lc0_uni_indicator_pane_g1

0xe592,	// (0x0005b846) lc0_stat_clock_pane_t1

0x24fd,	// (0x0004f7b1) main_ai5_pane

0xe5a0,	// (0x0005b854) ai5_sk_pane_ParamLimits

0xe5a0,	// (0x0005b854) ai5_sk_pane

0xe5ad,	// (0x0005b861) cell_ai5_widget_pane_ParamLimits

0xe5ad,	// (0x0005b861) cell_ai5_widget_pane

0xe623,	// (0x0005b8d7) aid_size_cell_widget_grid

0xe637,	// (0x0005b8eb) bg_ai5_widget_pane_ParamLimits

0xe637,	// (0x0005b8eb) bg_ai5_widget_pane

0xe65f,	// (0x0005b913) cell_ai5_widget_pane_g2

0xe66f,	// (0x0005b923) cell_ai5_widget_pane_g3

0xe68e,	// (0x0005b942) cell_ai5_widget_pane_g4

0xe69a,	// (0x0005b94e) cell_ai5_widget_pane_g5

0xe6a6,	// (0x0005b95a) cell_ai5_widget_pane_g6

0xe6b4,	// (0x0005b968) cell_ai5_widget_pane_g7

0xe6fc,	// (0x0005b9b0) cell_ai5_widget_pane_t1_ParamLimits

0xe6fc,	// (0x0005b9b0) cell_ai5_widget_pane_t1

0xe719,	// (0x0005b9cd) cell_ai5_widget_pane_t2_ParamLimits

0xe719,	// (0x0005b9cd) cell_ai5_widget_pane_t2

0xe731,	// (0x0005b9e5) cell_ai5_widget_pane_t3_ParamLimits

0xe731,	// (0x0005b9e5) cell_ai5_widget_pane_t3

0xe749,	// (0x0005b9fd) cell_ai5_widget_pane_t4_ParamLimits

0xe749,	// (0x0005b9fd) cell_ai5_widget_pane_t4

0xe763,	// (0x0005ba17) cell_ai5_widget_pane_t5_ParamLimits

0xe763,	// (0x0005ba17) cell_ai5_widget_pane_t5

0xe782,	// (0x0005ba36) cell_ai5_widget_pane_t6_ParamLimits

0xe782,	// (0x0005ba36) cell_ai5_widget_pane_t6

0xe794,	// (0x0005ba48) cell_ai5_widget_pane_t7_ParamLimits

0xe794,	// (0x0005ba48) cell_ai5_widget_pane_t7

0xe7ad,	// (0x0005ba61) cell_ai5_widget_pane_t8_ParamLimits

0xe7ad,	// (0x0005ba61) cell_ai5_widget_pane_t8

0x0009,

0xfe5d,	// (0x0005d111) cell_ai5_widget_pane_t_ParamLimits

0xfe5d,	// (0x0005d111) cell_ai5_widget_pane_t

0xe7f9,	// (0x0005baad) grid_ai5_widget_pane

0x7cca,	// (0x00054f7e) highlight_cell_ai5_widget_pane_ParamLimits

0x7cca,	// (0x00054f7e) highlight_cell_ai5_widget_pane

0xe810,	// (0x0005bac4) ai5_sk_left_pane

0xe81a,	// (0x0005bace) ai5_sk_middle_pane

0xe824,	// (0x0005bad8) ai5_sk_right_pane

0xe82e,	// (0x0005bae2) bg_ai5_widget_pane_g1_ParamLimits

0xe82e,	// (0x0005bae2) bg_ai5_widget_pane_g1

0xe83a,	// (0x0005baee) bg_ai5_widget_pane_g2_ParamLimits

0xe83a,	// (0x0005baee) bg_ai5_widget_pane_g2

0xe846,	// (0x0005bafa) bg_ai5_widget_pane_g3_ParamLimits

0xe846,	// (0x0005bafa) bg_ai5_widget_pane_g3

0xe852,	// (0x0005bb06) bg_ai5_widget_pane_g4_ParamLimits

0xe852,	// (0x0005bb06) bg_ai5_widget_pane_g4

0xe85e,	// (0x0005bb12) bg_ai5_widget_pane_g5_ParamLimits

0xe85e,	// (0x0005bb12) bg_ai5_widget_pane_g5

0xe86a,	// (0x0005bb1e) bg_ai5_widget_pane_g6_ParamLimits

0xe86a,	// (0x0005bb1e) bg_ai5_widget_pane_g6

0xe876,	// (0x0005bb2a) bg_ai5_widget_pane_g7_ParamLimits

0xe876,	// (0x0005bb2a) bg_ai5_widget_pane_g7

0xe882,	// (0x0005bb36) bg_ai5_widget_pane_g8_ParamLimits

0xe882,	// (0x0005bb36) bg_ai5_widget_pane_g8

0xe88e,	// (0x0005bb42) bg_ai5_widget_pane_g9_ParamLimits

0xe88e,	// (0x0005bb42) bg_ai5_widget_pane_g9

0x0008,

0xfe72,	// (0x0005d126) bg_ai5_widget_pane_g_ParamLimits

0xfe72,	// (0x0005d126) bg_ai5_widget_pane_g

0xe8b5,	// (0x0005bb69) cell_shortcut_ai5_widget_pane_ParamLimits

0xe8b5,	// (0x0005bb69) cell_shortcut_ai5_widget_pane

0x7463,	// (0x00054717) bg_cell_shortcut_ai5_widget_pane

0xe8c7,	// (0x0005bb7b) cell_grid_ai5_widget_pane_g1

0xe8d0,	// (0x0005bb84) highlight_cell_shortcut_ai5_widget_pane

0x99b8,	// (0x00056c6c) ai5_sk_left_pane_g1

0xe8d8,	// (0x0005bb8c) ai5_sk_left_pane_g2

0xe8e0,	// (0x0005bb94) ai5_sk_left_pane_g3

0xe8e8,	// (0x0005bb9c) ai5_sk_left_pane_g4

0x0003,

0xfe85,	// (0x0005d139) ai5_sk_left_pane_g

0xe8f0,	// (0x0005bba4) ai5_sk_left_pane_t1

0x99c0,	// (0x00056c74) ai5_sk_right_pane_g1

0xe8fe,	// (0x0005bbb2) ai5_sk_right_pane_g2

0xe906,	// (0x0005bbba) ai5_sk_right_pane_g3

0xe90e,	// (0x0005bbc2) ai5_sk_right_pane_g4

0x0003,

0xfe8e,	// (0x0005d142) ai5_sk_right_pane_g

0xe916,	// (0x0005bbca) ai5_sk_right_pane_t1

0x99c0,	// (0x00056c74) ai5_sk_middle_pane_g1

0x99b8,	// (0x00056c6c) ai5_sk_middle_pane_g2

0x99d8,	// (0x00056c8c) ai5_sk_middle_pane_g3

0xe906,	// (0x0005bbba) ai5_sk_middle_pane_g4

0xe8e0,	// (0x0005bb94) ai5_sk_middle_pane_g5

0xe924,	// (0x0005bbd8) ai5_sk_middle_pane_g6

0xe92c,	// (0x0005bbe0) ai5_sk_middle_pane_g7

0x0006,

0xfe97,	// (0x0005d14b) ai5_sk_middle_pane_g

0x94cb,	// (0x0005677f) aid_touch_area_size_lc0_ParamLimits

0x94cb,	// (0x0005677f) aid_touch_area_size_lc0

0x6629,	// (0x000538dd) cell_hwr_candidate_pane_t1_ParamLimits

0x94e9,	// (0x0005679d) aid_touch_navi_pane

0x97db,	// (0x00056a8f) status_dt_navi_pane_ParamLimits

0x97db,	// (0x00056a8f) status_dt_navi_pane

0x97e8,	// (0x00056a9c) status_dt_sta_pane_ParamLimits

0x97e8,	// (0x00056a9c) status_dt_sta_pane

0xe934,	// (0x0005bbe8) dt_sta_controll_pane

0xe941,	// (0x0005bbf5) dt_sta_indi_pane

0xe952,	// (0x0005bc06) dt_sta_title_pane

0x7621,	// (0x000548d5) bg_dt_sta_indi_pane_ParamLimits

0x7621,	// (0x000548d5) bg_dt_sta_indi_pane

0xe965,	// (0x0005bc19) dt_sta_battery_pane

0xe96d,	// (0x0005bc21) dt_sta_indi_pane_g1

0xe976,	// (0x0005bc2a) dt_sta_indi_pane_g2

0xe97f,	// (0x0005bc33) dt_sta_indi_pane_g3

0x0002,

0xfea6,	// (0x0005d15a) dt_sta_indi_pane_g

0xe988,	// (0x0005bc3c) dt_sta_signal_pane

0x7cca,	// (0x00054f7e) bg_dt_sta_title_pane_ParamLimits

0x7cca,	// (0x00054f7e) bg_dt_sta_title_pane

0xe991,	// (0x0005bc45) dt_sta_title_pane_g1

0xe999,	// (0x0005bc4d) dt_sta_title_pane_t1_ParamLimits

0xe999,	// (0x0005bc4d) dt_sta_title_pane_t1

0x24fd,	// (0x0004f7b1) bg_dt_sta_control_pane

0xe9ae,	// (0x0005bc62) dt_sta_controll_pane_g1

0xe9b7,	// (0x0005bc6b) bg_dt_sta_title_pane_g1

0xe9c0,	// (0x0005bc74) bg_dt_sta_title_pane_g2

0xe9c9,	// (0x0005bc7d) bg_dt_sta_title_pane_g3

0x0002,

0xfead,	// (0x0005d161) bg_dt_sta_title_pane_g

0xc056,	// (0x0005930a) bg_dt_sta_indi_pane_g1

0xe9d2,	// (0x0005bc86) dt_sta_signal_pane_g1

0xe9da,	// (0x0005bc8e) dt_sta_signal_pane_g2

0x0001,

0xfeb4,	// (0x0005d168) dt_sta_signal_pane_g

0xe9e2,	// (0x0005bc96) dt_sta_battery_pane_g1

0xe9eb,	// (0x0005bc9f) dt_sta_battery_pane_t1

0xc056,	// (0x0005930a) bg_dt_sta_control_pane_g1

0x85f4,	// (0x000558a8) fep_china_uni_eep_pane

0x85fc,	// (0x000558b0) fep_china_uni_entry_pane_ParamLimits

0x860c,	// (0x000558c0) popup_fep_china_uni_window_g1_ParamLimits

0x861c,	// (0x000558d0) popup_fep_china_uni_window_g2_ParamLimits

0x861c,	// (0x000558d0) popup_fep_china_uni_window_g2

0x0001,

0xf73a,	// (0x0005c9ee) popup_fep_china_uni_window_g_ParamLimits

0xf73a,	// (0x0005c9ee) popup_fep_china_uni_window_g

0xe9fa,	// (0x0005bcae) fep_china_uni_eep_pane_g1

0xea02,	// (0x0005bcb6) fep_china_uni_eep_pane_t1

0xe50f,	// (0x0005b7c3) aid_touch_area_size_smil_player

0x9641,	// (0x000568f5) lc0_clock_pane

0x983f,	// (0x00056af3) status_pane_g5_ParamLimits

0x983f,	// (0x00056af3) status_pane_g5

0x902f,	// (0x000562e3) popup_keymap_window

0x97fd,	// (0x00056ab1) status_icon_pane

0xe66f,	// (0x0005b923) cell_ai5_widget_pane_g3_ParamLimits

0xe68e,	// (0x0005b942) cell_ai5_widget_pane_g4_ParamLimits

0xe69a,	// (0x0005b94e) cell_ai5_widget_pane_g5_ParamLimits

0xe6c0,	// (0x0005b974) cell_ai5_widget_pane_g8_ParamLimits

0xe6c0,	// (0x0005b974) cell_ai5_widget_pane_g8

0xe6d4,	// (0x0005b988) cell_ai5_widget_pane_g9_ParamLimits

0xe6d4,	// (0x0005b988) cell_ai5_widget_pane_g9

0xe6e8,	// (0x0005b99c) cell_ai5_widget_pane_g10_ParamLimits

0xe6e8,	// (0x0005b99c) cell_ai5_widget_pane_g10

0xea11,	// (0x0005bcc5) status_icon_pane_g1

0x24fd,	// (0x0004f7b1) bg_popup_sub_pane_cp13

0xea19,	// (0x0005bccd) popup_keymap_window_t1

0x8dd1,	// (0x00056085) control_pane_g6_ParamLimits

0x8dd1,	// (0x00056085) control_pane_g6

0x8dde,	// (0x00056092) control_pane_g7_ParamLimits

0x8dde,	// (0x00056092) control_pane_g7

0x8deb,	// (0x0005609f) control_pane_g8_ParamLimits

0x8deb,	// (0x0005609f) control_pane_g8

0xe934,	// (0x0005bbe8) dt_sta_controll_pane_ParamLimits

0xe941,	// (0x0005bbf5) dt_sta_indi_pane_ParamLimits

0xe952,	// (0x0005bc06) dt_sta_title_pane_ParamLimits

0x7b56,	// (0x00054e0a) aid_size_touch_scroll_bar_cale

0x4c75,	// (0x00051f29) popup_discreet_window_ParamLimits

0x4c75,	// (0x00051f29) popup_discreet_window

0x4d03,	// (0x00051fb7) popup_sk_window

0xa056,	// (0x0005730a) bg_popup_sub_pane_cp28_ParamLimits

0xa056,	// (0x0005730a) bg_popup_sub_pane_cp28

0xea27,	// (0x0005bcdb) popup_discreet_window_g1_ParamLimits

0xea27,	// (0x0005bcdb) popup_discreet_window_g1

0xea47,	// (0x0005bcfb) popup_discreet_window_t1_ParamLimits

0xea47,	// (0x0005bcfb) popup_discreet_window_t1

0xea65,	// (0x0005bd19) popup_discreet_window_t2_ParamLimits

0xea65,	// (0x0005bd19) popup_discreet_window_t2

0x0002,

0xfeb9,	// (0x0005d16d) popup_discreet_window_t_ParamLimits

0xfeb9,	// (0x0005d16d) popup_discreet_window_t

0x729d,	// (0x00054551) popup_sk_window_g1

0x72a7,	// (0x0005455b) popup_sk_window_g2

0x0001,

0xfec0,	// (0x0005d174) popup_sk_window_g

0xeab7,	// (0x0005bd6b) popup_sk_window_t1

0xeac5,	// (0x0005bd79) popup_sk_window_t1_copy1

0xe65f,	// (0x0005b913) cell_ai5_widget_pane_g2_ParamLimits

0xe7bf,	// (0x0005ba73) cell_ai5_widget_pane_t9_ParamLimits

0xe7bf,	// (0x0005ba73) cell_ai5_widget_pane_t9

0x24fd,	// (0x0004f7b1) main_fep_fshwr2_pane

0xead3,	// (0x0005bd87) aid_fshwr2_btn_pane

0xeadb,	// (0x0005bd8f) aid_fshwr2_syb_pane

0xeae3,	// (0x0005bd97) aid_fshwr2_txt_pane

0xeaeb,	// (0x0005bd9f) fshwr2_func_candi_pane

0xeaf5,	// (0x0005bda9) fshwr2_hwr_syb_pane

0xeaff,	// (0x0005bdb3) fshwr2_icf_pane

0x24fd,	// (0x0004f7b1) fshwr2_icf_bg_pane

0xeb21,	// (0x0005bdd5) fshwr2_icf_pane_t1_ParamLimits

0xeb21,	// (0x0005bdd5) fshwr2_icf_pane_t1

0xc056,	// (0x0005930a) fshwr2_func_candi_pane_g1

0xeb38,	// (0x0005bdec) fshwr2_func_candi_row_pane_ParamLimits

0xeb38,	// (0x0005bdec) fshwr2_func_candi_row_pane

0xeb49,	// (0x0005bdfd) cell_fshwr2_syb_pane_ParamLimits

0xeb49,	// (0x0005bdfd) cell_fshwr2_syb_pane

0xc2e0,	// (0x00059594) fshwr2_hwr_syb_pane_g1_ParamLimits

0xc2e0,	// (0x00059594) fshwr2_hwr_syb_pane_g1

0x24fd,	// (0x0004f7b1) bg_popup_call_pane_cp01

0xeb63,	// (0x0005be17) fshwr2_func_candi_cell_pane_ParamLimits

0xeb63,	// (0x0005be17) fshwr2_func_candi_cell_pane

0xeb95,	// (0x0005be49) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xeb95,	// (0x0005be49) fshwr2_func_candi_cell_bg_pane

0xebaf,	// (0x0005be63) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xebaf,	// (0x0005be63) fshwr2_func_candi_cell_pane_g1

0xebcf,	// (0x0005be83) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xebcf,	// (0x0005be83) fshwr2_func_candi_cell_pane_t1

0x24fd,	// (0x0004f7b1) bg_button_pane_cp08

0x8af6,	// (0x00055daa) cell_fshwr2_syb_bg_pane

0xebe2,	// (0x0005be96) cell_fshwr2_syb_bg_pane_g1

0xebea,	// (0x0005be9e) cell_fshwr2_syb_bg_pane_t1

0x7cca,	// (0x00054f7e) main_tmo_pane

0xab80,	// (0x00057e34) uni_indicator_pane_g1_ParamLimits

0xab95,	// (0x00057e49) uni_indicator_pane_g2_ParamLimits

0xabab,	// (0x00057e5f) uni_indicator_pane_g3_ParamLimits

0xabc1,	// (0x00057e75) uni_indicator_pane_g4_ParamLimits

0xabc1,	// (0x00057e75) uni_indicator_pane_g4

0xabd5,	// (0x00057e89) uni_indicator_pane_g5_ParamLimits

0xabd5,	// (0x00057e89) uni_indicator_pane_g5

0xabe9,	// (0x00057e9d) uni_indicator_pane_g6_ParamLimits

0xabe9,	// (0x00057e9d) uni_indicator_pane_g6

0xf937,	// (0x0005cbeb) uni_indicator_pane_g_ParamLimits

0xd575,	// (0x0005a829) popup_tmo_note_window_ParamLimits

0xd575,	// (0x0005a829) popup_tmo_note_window

0x24fd,	// (0x0004f7b1) fshwr2_bg_pane

0xebc0,	// (0x0005be74) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xebc0,	// (0x0005be74) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfec5,	// (0x0005d179) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfec5,	// (0x0005d179) fshwr2_func_candi_cell_pane_g

0xc056,	// (0x0005930a) bg_popup_window_pane_cp01

0xebf9,	// (0x0005bead) bg_popup_window_pane_g1_cp01

0xec02,	// (0x0005beb6) bg_popup_window_pane_cp22_ParamLimits

0xec02,	// (0x0005beb6) bg_popup_window_pane_cp22

0xec10,	// (0x0005bec4) listscroll_tmo_link_pane_ParamLimits

0xec10,	// (0x0005bec4) listscroll_tmo_link_pane

0xec50,	// (0x0005bf04) popup_tmo_note_window_g1_ParamLimits

0xec50,	// (0x0005bf04) popup_tmo_note_window_g1

0xec5d,	// (0x0005bf11) tmo_note_info_pane_ParamLimits

0xec5d,	// (0x0005bf11) tmo_note_info_pane

0xec77,	// (0x0005bf2b) list_tmo_note_info_pane_g1_ParamLimits

0xec77,	// (0x0005bf2b) list_tmo_note_info_pane_g1

0xec8e,	// (0x0005bf42) list_tmo_note_info_pane_g2_ParamLimits

0xec8e,	// (0x0005bf42) list_tmo_note_info_pane_g2

0x0001,

0xfeca,	// (0x0005d17e) list_tmo_note_info_pane_g_ParamLimits

0xfeca,	// (0x0005d17e) list_tmo_note_info_pane_g

0xecaa,	// (0x0005bf5e) list_tmo_note_info_text_pane_ParamLimits

0xecaa,	// (0x0005bf5e) list_tmo_note_info_text_pane

0xed2f,	// (0x0005bfe3) list_tmo_link_pane

0xed3c,	// (0x0005bff0) scroll_pane_cp20

0xed49,	// (0x0005bffd) list_single_tmo_link_pane_ParamLimits

0xed49,	// (0x0005bffd) list_single_tmo_link_pane

0xed59,	// (0x0005c00d) list_single_tmo_link_pane_t1

0xed67,	// (0x0005c01b) list_tmo_note_info_text_pane_t1_ParamLimits

0xed67,	// (0x0005c01b) list_tmo_note_info_text_pane_t1

0x7d99,	// (0x0005504d) aid_size_touch_scroll_bar_cp01_ParamLimits

0x7d99,	// (0x0005504d) aid_size_touch_scroll_bar_cp01

0x547e,	// (0x00052732) aid_size_touch_slider_marker

0x4ceb,	// (0x00051f9f) popup_settings_window_ParamLimits

0x4ceb,	// (0x00051f9f) popup_settings_window

0x5bdd,	// (0x00052e91) popup_candi_list_indi_window

0x94e9,	// (0x0005679d) aid_touch_navi_pane_ParamLimits

0x6a6d,	// (0x00053d21) rs_clock_indi_pane

0x6a76,	// (0x00053d2a) sctrl_sk_bottom_pane_ParamLimits

0x6a87,	// (0x00053d3b) sctrl_sk_top_pane_ParamLimits

0x6b88,	// (0x00053e3c) popup_fep_tooltip_window

0xe623,	// (0x0005b8d7) aid_size_cell_widget_grid_ParamLimits

0xe653,	// (0x0005b907) cell_ai5_widget_pane_g1_ParamLimits

0xe653,	// (0x0005b907) cell_ai5_widget_pane_g1

0xe6a6,	// (0x0005b95a) cell_ai5_widget_pane_g6_ParamLimits

0xe6b4,	// (0x0005b968) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe48,	// (0x0005d0fc) cell_ai5_widget_pane_g_ParamLimits

0xfe48,	// (0x0005d0fc) cell_ai5_widget_pane_g

0xe7e3,	// (0x0005ba97) cell_ai5_widget_pane_t10_ParamLimits

0xe7e3,	// (0x0005ba97) cell_ai5_widget_pane_t10

0xe7f9,	// (0x0005baad) grid_ai5_widget_pane_ParamLimits

0xe89a,	// (0x0005bb4e) cell_contacts_ai5_widget_pane_ParamLimits

0xe89a,	// (0x0005bb4e) cell_contacts_ai5_widget_pane

0xea7a,	// (0x0005bd2e) popup_discreet_window_t3_ParamLimits

0xea7a,	// (0x0005bd2e) popup_discreet_window_t3

0xeb09,	// (0x0005bdbd) popup_fshwr2_char_preview_window_ParamLimits

0xeb09,	// (0x0005bdbd) popup_fshwr2_char_preview_window

0xecc8,	// (0x0005bf7c) tmo_note_info_pane_t1

0xecdd,	// (0x0005bf91) tmo_note_info_pane_t2

0xecf6,	// (0x0005bfaa) tmo_note_info_pane_t3

0xed0b,	// (0x0005bfbf) tmo_note_info_pane_t4

0xed1d,	// (0x0005bfd1) tmo_note_info_pane_t5

0x0004,

0xfecf,	// (0x0005d183) tmo_note_info_pane_t

0xed2f,	// (0x0005bfe3) list_tmo_link_pane_ParamLimits

0xed3c,	// (0x0005bff0) scroll_pane_cp20_ParamLimits

0x24fd,	// (0x0004f7b1) bg_popup_fep_char_preview_window_cp01

0xed80,	// (0x0005c034) popup_fshwr2_char_preview_window_t1

0xed8e,	// (0x0005c042) popup_candi_list_indi_window_g1

0xed97,	// (0x0005c04b) bg_cell_contacts_ai5_widget_pane

0xeda3,	// (0x0005c057) cell_contacts_ai5_widget_pane_g1

0xedb7,	// (0x0005c06b) cell_contacts_ai5_widget_pane_g2

0xedc6,	// (0x0005c07a) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeda,	// (0x0005d18e) cell_contacts_ai5_widget_pane_g

0xedd9,	// (0x0005c08d) cell_contacts_ai5_widget_pane_t1

0x7cca,	// (0x00054f7e) highlight_cell_shortcut_ai5_widget_pane_cp01

0xee53,	// (0x0005c107) settings_container_pane

0x8af6,	// (0x00055daa) listscroll_set_pane_copy1

0xb75a,	// (0x00058a0e) scroll_pane_cp121_copy1

0xee5f,	// (0x0005c113) set_content_pane_copy1

0xee67,	// (0x0005c11b) aid_height_set_list_copy1_ParamLimits

0xee67,	// (0x0005c11b) aid_height_set_list_copy1

0xade9,	// (0x0005809d) aid_size_parent_copy1_ParamLimits

0xade9,	// (0x0005809d) aid_size_parent_copy1

0xee73,	// (0x0005c127) button_value_adjust_pane_cp6_copy1_ParamLimits

0xee73,	// (0x0005c127) button_value_adjust_pane_cp6_copy1

0x8e74,	// (0x00056128) list_highlight_pane_cp2_copy1_ParamLimits

0x8e74,	// (0x00056128) list_highlight_pane_cp2_copy1

0xee87,	// (0x0005c13b) list_set_pane_copy1_ParamLimits

0xee87,	// (0x0005c13b) list_set_pane_copy1

0xedee,	// (0x0005c0a2) main_pane_set_t1_copy1_ParamLimits

0xedee,	// (0x0005c0a2) main_pane_set_t1_copy1

0xee28,	// (0x0005c0dc) main_pane_set_t2_copy1_ParamLimits

0xee28,	// (0x0005c0dc) main_pane_set_t2_copy1

0xef4e,	// (0x0005c202) main_pane_set_t3_copy1

0xef5c,	// (0x0005c210) main_pane_set_t4_copy1

0xee47,	// (0x0005c0fb) set_content_pane_g1_copy1_ParamLimits

0xee47,	// (0x0005c0fb) set_content_pane_g1_copy1

0xef6a,	// (0x0005c21e) setting_code_pane_copy1

0xef74,	// (0x0005c228) setting_slider_graphic_pane_copy1

0xef74,	// (0x0005c228) setting_slider_pane_copy1

0xef74,	// (0x0005c228) setting_text_pane_copy1

0xef7e,	// (0x0005c232) setting_volume_pane_copy1

0xef87,	// (0x0005c23b) settings_code_pane_cp2_copy1

0xef8f,	// (0x0005c243) settings_code_pane_cp_copy1_ParamLimits

0xef8f,	// (0x0005c243) settings_code_pane_cp_copy1

0xefa3,	// (0x0005c257) volume_set_pane_copy1

0xefaf,	// (0x0005c263) volume_set_pane_g10_copy1

0xefbb,	// (0x0005c26f) volume_set_pane_g1_copy1

0xefc5,	// (0x0005c279) volume_set_pane_g2_copy1

0xefcf,	// (0x0005c283) volume_set_pane_g3_copy1

0xefd9,	// (0x0005c28d) volume_set_pane_g4_copy1

0xefe3,	// (0x0005c297) volume_set_pane_g5_copy1

0xefed,	// (0x0005c2a1) volume_set_pane_g6_copy1

0xeff7,	// (0x0005c2ab) volume_set_pane_g7_copy1

0xf001,	// (0x0005c2b5) volume_set_pane_g8_copy1

0xf00b,	// (0x0005c2bf) volume_set_pane_g9_copy1

0x7397,	// (0x0005464b) bg_set_opt_pane_cp_copy1_ParamLimits

0x7397,	// (0x0005464b) bg_set_opt_pane_cp_copy1

0xf015,	// (0x0005c2c9) setting_slider_pane_t1_copy1_ParamLimits

0xf015,	// (0x0005c2c9) setting_slider_pane_t1_copy1

0xf033,	// (0x0005c2e7) setting_slider_pane_t2_copy1_ParamLimits

0xf033,	// (0x0005c2e7) setting_slider_pane_t2_copy1

0xf04d,	// (0x0005c301) setting_slider_pane_t3_copy1_ParamLimits

0xf04d,	// (0x0005c301) setting_slider_pane_t3_copy1

0xf065,	// (0x0005c319) slider_set_pane_copy1_ParamLimits

0xf065,	// (0x0005c319) slider_set_pane_copy1

0x7d31,	// (0x00054fe5) set_opt_bg_pane_g1_copy2

0x7d39,	// (0x00054fed) set_opt_bg_pane_g2_copy2

0xf07b,	// (0x0005c32f) set_opt_bg_pane_g3_copy2

0x7d49,	// (0x00054ffd) set_opt_bg_pane_g4_copy2

0x7d51,	// (0x00055005) set_opt_bg_pane_g5_copy2

0x7d59,	// (0x0005500d) set_opt_bg_pane_g6_copy2

0xf085,	// (0x0005c339) set_opt_bg_pane_g7_copy2

0xf08f,	// (0x0005c343) set_opt_bg_pane_g8_copy2

0xf099,	// (0x0005c34d) set_opt_bg_pane_g9_copy2

0xf0a3,	// (0x0005c357) aid_size_touch_slider_mark_copy1_ParamLimits

0xf0a3,	// (0x0005c357) aid_size_touch_slider_mark_copy1

0xf0b7,	// (0x0005c36b) slider_set_pane_g1_copy1

0xf0c0,	// (0x0005c374) slider_set_pane_g2_copy1

0xbf37,	// (0x000591eb) slider_set_pane_g3_copy1_ParamLimits

0xbf37,	// (0x000591eb) slider_set_pane_g3_copy1

0xbf4b,	// (0x000591ff) slider_set_pane_g4_copy1_ParamLimits

0xbf4b,	// (0x000591ff) slider_set_pane_g4_copy1

0xbf63,	// (0x00059217) slider_set_pane_g5_copy1_ParamLimits

0xbf63,	// (0x00059217) slider_set_pane_g5_copy1

0xbf37,	// (0x000591eb) slider_set_pane_g6_copy1_ParamLimits

0xbf37,	// (0x000591eb) slider_set_pane_g6_copy1

0xf0c8,	// (0x0005c37c) slider_set_pane_g7_copy1_ParamLimits

0xf0c8,	// (0x0005c37c) slider_set_pane_g7_copy1

0x2511,	// (0x0004f7c5) bg_set_opt_pane_cp2_copy1

0xf0de,	// (0x0005c392) setting_slider_graphic_pane_g1_copy1

0xf0e7,	// (0x0005c39b) setting_slider_graphic_pane_t1_copy1

0xf0f7,	// (0x0005c3ab) setting_slider_graphic_pane_t2_copy1

0xf107,	// (0x0005c3bb) slider_set_pane_cp_copy1

0xf117,	// (0x0005c3cb) input_focus_pane_cp1_copy1

0xf120,	// (0x0005c3d4) list_set_text_pane_copy1

0xf128,	// (0x0005c3dc) setting_text_pane_g1_copy1

0x3fb0,	// (0x00051264) set_text_pane_t1_copy1

0xf117,	// (0x0005c3cb) input_focus_pane_cp2_copy1

0xf128,	// (0x0005c3dc) setting_code_pane_g1_copy1

0xf131,	// (0x0005c3e5) setting_code_pane_t1_copy1

0xf13f,	// (0x0005c3f3) list_set_graphic_pane_copy1

0x2511,	// (0x0004f7c5) bg_set_opt_pane_cp4_copy1

0x87f0,	// (0x00055aa4) list_set_graphic_pane_g1_copy1_ParamLimits

0x87f0,	// (0x00055aa4) list_set_graphic_pane_g1_copy1

0xf151,	// (0x0005c405) list_set_graphic_pane_g2_copy1

0x8808,	// (0x00055abc) list_set_graphic_pane_t1_copy1_ParamLimits

0x8808,	// (0x00055abc) list_set_graphic_pane_t1_copy1

0xc056,	// (0x0005930a) rs_clock_indi_pane_g1

0xf159,	// (0x0005c40d) rs_clock_indi_pane_t1

0xf167,	// (0x0005c41b) rs_indi_pane

0xf16f,	// (0x0005c423) rs_indi_pane_g1

0xf178,	// (0x0005c42c) rs_indi_pane_g2

0xf181,	// (0x0005c435) rs_indi_pane_g3

0x0002,

0xfee1,	// (0x0005d195) rs_indi_pane_g

0x8af6,	// (0x00055daa) bg_popup_preview_window_pane_cp03

0xf18a,	// (0x0005c43e) popup_fep_tooltip_window_t1

0xccfc,	// (0x00059fb0) popup_note2_window_g2_ParamLimits

0xccfc,	// (0x00059fb0) popup_note2_window_g2

0x0001,

0xfc7a,	// (0x0005cf2e) popup_note2_window_g_ParamLimits

0xfc7a,	// (0x0005cf2e) popup_note2_window_g

0xd225,	// (0x0005a4d9) bg_popup_sub_pane_cp11_ParamLimits

0xd232,	// (0x0005a4e6) cell_ai3_links_pane_g1_ParamLimits

0xd249,	// (0x0005a4fd) cell_ai3_links_pane_t1

0x3fb0,	// (0x00051264) set_text_pane_t1_copy1_ParamLimits

0x8a03,	// (0x00055cb7) cell_graphic_popup_pane_cp2_ParamLimits

0x8a03,	// (0x00055cb7) cell_graphic_popup_pane_cp2

0xf198,	// (0x0005c44c) cell_graphic_popup_pane_g1_cp2

0x7969,	// (0x00054c1d) cell_graphic_popup_pane_g2_cp2

0xf1a0,	// (0x0005c454) cell_graphic_popup_pane_g3_cp2

0xf1a8,	// (0x0005c45c) cell_graphic_popup_pane_t2_cp2

0x797a,	// (0x00054c2e) grid_highlight_pane_cp3_cp2

0x824b,	// (0x000554ff) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x7cca,	// (0x00054f7e) main_tmo_pane_ParamLimits

0xd569,	// (0x0005a81d) popup_tmo_big_image_note_window

0xe643,	// (0x0005b8f7) cell_ai5_widget_list_pane

0xe64b,	// (0x0005b8ff) cell_ai5_widget_lrg_icon_pane

0xecc8,	// (0x0005bf7c) tmo_note_info_pane_t1_ParamLimits

0xecdd,	// (0x0005bf91) tmo_note_info_pane_t2_ParamLimits

0xecf6,	// (0x0005bfaa) tmo_note_info_pane_t3_ParamLimits

0xed0b,	// (0x0005bfbf) tmo_note_info_pane_t4_ParamLimits

0xed1d,	// (0x0005bfd1) tmo_note_info_pane_t5_ParamLimits

0xfecf,	// (0x0005d183) tmo_note_info_pane_t_ParamLimits

0xee53,	// (0x0005c107) settings_container_pane_ParamLimits

0xf10f,	// (0x0005c3c3) indicator_popup_pane_cp5

0xf10f,	// (0x0005c3c3) indicator_popup_pane_cp6

0xf13f,	// (0x0005c3f3) list_set_graphic_pane_copy1_ParamLimits

0x24fd,	// (0x0004f7b1) bg_popup_window_pane_cp23

0xf1b6,	// (0x0005c46a) popup_tmo_big_image_note_window_g1

0xf1c2,	// (0x0005c476) popup_tmo_big_image_note_window_t1

0xf1d2,	// (0x0005c486) popup_tmo_big_image_note_window_t2

0xf1e2,	// (0x0005c496) popup_tmo_big_image_note_window_t3

0x0002,

0xfee8,	// (0x0005d19c) popup_tmo_big_image_note_window_t

0xf1f2,	// (0x0005c4a6) cell_ai5_widget_lrg_icon_pane_g1

0xf1fa,	// (0x0005c4ae) cell_ai5_widget_lrg_icon_pane_t1

0xf208,	// (0x0005c4bc) cell_ai5_widget_list_row_pane_ParamLimits

0xf208,	// (0x0005c4bc) cell_ai5_widget_list_row_pane

0xf221,	// (0x0005c4d5) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf221,	// (0x0005c4d5) cell_ai5_widget_list_row_pane_g1

0xf22e,	// (0x0005c4e2) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf22e,	// (0x0005c4e2) cell_ai5_widget_list_row_pane_t1

0xf246,	// (0x0005c4fa) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf246,	// (0x0005c4fa) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfeef,	// (0x0005d1a3) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeef,	// (0x0005d1a3) cell_ai5_widget_list_row_pane_t

0x4b98,	// (0x00051e4c) main_fep_vtchi_ss_pane

0xf258,	// (0x0005c50c) popup_fep_char_pre_window

0xf260,	// (0x0005c514) popup_fep_ituss_window

0xf281,	// (0x0005c535) popup_fep_vkbss_window

0xf2a2,	// (0x0005c556) grid_vkbss_keypad_pane_ParamLimits

0xf2a2,	// (0x0005c556) grid_vkbss_keypad_pane

0xf2b2,	// (0x0005c566) ituss_keypad_pane

0xf2ca,	// (0x0005c57e) aid_vkbss_key_offset_ParamLimits

0xf2ca,	// (0x0005c57e) aid_vkbss_key_offset

0xf2d6,	// (0x0005c58a) cell_vkbss_key_pane_ParamLimits

0xf2d6,	// (0x0005c58a) cell_vkbss_key_pane

0xf2ec,	// (0x0005c5a0) bg_cell_vkbss_key_g1_ParamLimits

0xf2ec,	// (0x0005c5a0) bg_cell_vkbss_key_g1

0xf2f8,	// (0x0005c5ac) cell_vkbss_key_3p_pane_ParamLimits

0xf2f8,	// (0x0005c5ac) cell_vkbss_key_3p_pane

0xf312,	// (0x0005c5c6) cell_vkbss_key_g1_ParamLimits

0xf312,	// (0x0005c5c6) cell_vkbss_key_g1

0xf32c,	// (0x0005c5e0) cell_vkbss_key_t1_ParamLimits

0xf32c,	// (0x0005c5e0) cell_vkbss_key_t1

0xf357,	// (0x0005c60b) cell_ituss_key_pane_ParamLimits

0xf357,	// (0x0005c60b) cell_ituss_key_pane

0xf367,	// (0x0005c61b) bg_cell_ituss_key_g1_ParamLimits

0xf367,	// (0x0005c61b) bg_cell_ituss_key_g1

0xf373,	// (0x0005c627) cell_ituss_key_pane_g1_ParamLimits

0xf373,	// (0x0005c627) cell_ituss_key_pane_g1

0xf37f,	// (0x0005c633) cell_ituss_key_pane_g2_ParamLimits

0xf37f,	// (0x0005c633) cell_ituss_key_pane_g2

0x0001,

0xfef4,	// (0x0005d1a8) cell_ituss_key_pane_g_ParamLimits

0xfef4,	// (0x0005d1a8) cell_ituss_key_pane_g

0xf398,	// (0x0005c64c) cell_ituss_key_t1_ParamLimits

0xf398,	// (0x0005c64c) cell_ituss_key_t1

0xf3c6,	// (0x0005c67a) cell_ituss_key_t2_ParamLimits

0xf3c6,	// (0x0005c67a) cell_ituss_key_t2

0xf3f7,	// (0x0005c6ab) cell_ituss_key_t3_ParamLimits

0xf3f7,	// (0x0005c6ab) cell_ituss_key_t3

0xf428,	// (0x0005c6dc) cell_ituss_key_t4_ParamLimits

0xf428,	// (0x0005c6dc) cell_ituss_key_t4

0x0003,

0xfef9,	// (0x0005d1ad) cell_ituss_key_t_ParamLimits

0xfef9,	// (0x0005d1ad) cell_ituss_key_t

0xf459,	// (0x0005c70d) cell_vkbss_key_3p_pane_g1

0xf461,	// (0x0005c715) cell_vkbss_key_3p_pane_g2

0xf469,	// (0x0005c71d) cell_vkbss_key_3p_pane_g3

0x0002,

0xff02,	// (0x0005d1b6) cell_vkbss_key_3p_pane_g

0x24fd,	// (0x0004f7b1) bg_popup_fep_char_preview_window_cp02

0xf471,	// (0x0005c725) popup_fep_char_pre_window_t1

0xe619,	// (0x0005b8cd) main_ai5_sk_pane

0xed97,	// (0x0005c04b) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xeda3,	// (0x0005c057) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xedb7,	// (0x0005c06b) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xedc6,	// (0x0005c07a) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeda,	// (0x0005d18e) cell_contacts_ai5_widget_pane_g_ParamLimits

0xedd9,	// (0x0005c08d) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x7cca,	// (0x00054f7e) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf480,	// (0x0005c734) main_ai5_sk_pane_g1

0x9e8e,	// (0x00057142) popup_query_code_window_g1

0xf276,	// (0x0005c52a) popup_fep_vkb_icf_pane

0xf28c,	// (0x0005c540) popup_fep_vtchi_icf_pane

0x7cca,	// (0x00054f7e) bg_icf_pane

0xf498,	// (0x0005c74c) list_vkb_icf_pane

0x7cca,	// (0x00054f7e) bg_icf_pane_cp01

0xf4b0,	// (0x0005c764) vtchi_icf_list_pane

0xf4c0,	// (0x0005c774) list_vkb_icf_pane_t1_ParamLimits

0xf4c0,	// (0x0005c774) list_vkb_icf_pane_t1

0xf4d7,	// (0x0005c78b) vtchi_icf_list_pane_t1_ParamLimits

0xf4d7,	// (0x0005c78b) vtchi_icf_list_pane_t1

0xf260,	// (0x0005c514) popup_fep_ituss_window_ParamLimits

0xf28c,	// (0x0005c540) popup_fep_vtchi_icf_pane_ParamLimits

0xf2b2,	// (0x0005c566) ituss_keypad_pane_ParamLimits

0xf2c1,	// (0x0005c575) ituss_sks_pane

0x7cca,	// (0x00054f7e) bg_icf_pane_ParamLimits

0xf489,	// (0x0005c73d) icf_edit_indi_pane_ParamLimits

0xf489,	// (0x0005c73d) icf_edit_indi_pane

0xf498,	// (0x0005c74c) list_vkb_icf_pane_ParamLimits

0x7cca,	// (0x00054f7e) bg_icf_pane_cp01_ParamLimits

0xf4a4,	// (0x0005c758) icf_edit_indi_pane_cp01_ParamLimits

0xf4a4,	// (0x0005c758) icf_edit_indi_pane_cp01

0xf4b8,	// (0x0005c76c) vtchi_query_pane

0xc2e0,	// (0x00059594) icf_edit_indi_pane_g1_ParamLimits

0xc2e0,	// (0x00059594) icf_edit_indi_pane_g1

0xf4f0,	// (0x0005c7a4) icf_edit_indi_pane_g2_ParamLimits

0xf4f0,	// (0x0005c7a4) icf_edit_indi_pane_g2

0x0001,

0xff09,	// (0x0005d1bd) icf_edit_indi_pane_g_ParamLimits

0xff09,	// (0x0005d1bd) icf_edit_indi_pane_g

0xf4fc,	// (0x0005c7b0) icf_edit_indi_pane_t1

0xf50a,	// (0x0005c7be) bg_input_focus_pane_cp042

0x7b4d,	// (0x00054e01) vtchi_button_pane

0xf513,	// (0x0005c7c7) vtchi_query_pane_t1

0xf521,	// (0x0005c7d5) vtchi_query_pane_t2

0xf52f,	// (0x0005c7e3) vtchi_query_pane_t3

0x0002,

0xff0e,	// (0x0005d1c2) vtchi_query_pane_t

0x24fd,	// (0x0004f7b1) bg_button_pane_cp13

0xf53d,	// (0x0005c7f1) vtchi_button_pane_g1

0xda94,	// (0x0005ad48) ituss_sks_pane_g1

0xf545,	// (0x0005c7f9) ituss_sks_pane_g2

0x0001,

0xff15,	// (0x0005d1c9) ituss_sks_pane_g

0xf54e,	// (0x0005c802) ituss_sks_pane_t1

0xf55c,	// (0x0005c810) ituss_sks_pane_t2

0x0001,

0xff1a,	// (0x0005d1ce) ituss_sks_pane_t

0xbabb,	// (0x00058d6f) indicator_nsta_pane_cp_g1

0xbac4,	// (0x00058d78) indicator_nsta_pane_cp_g2

0xbacc,	// (0x00058d80) indicator_nsta_pane_cp_g3

0xbad4,	// (0x00058d88) indicator_nsta_pane_cp_g4

0xbadc,	// (0x00058d90) indicator_nsta_pane_cp_g5

0xbae4,	// (0x00058d98) indicator_nsta_pane_cp_g6

0x0005,

0xfab8,	// (0x0005cd6c) indicator_nsta_pane_cp_g

0xe22a,	// (0x0005b4de) cell_graphic2_pane_t2_ParamLimits

0xe22a,	// (0x0005b4de) cell_graphic2_pane_t2

0x0001,

0xfdd1,	// (0x0005d085) cell_graphic2_pane_t_ParamLimits

0xfdd1,	// (0x0005d085) cell_graphic2_pane_t

0xe257,	// (0x0005b50b) cell_graphic2_control_pane_t1
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
	};

} // end of namespace AknLayoutScalable_Abrw_pvp4_av_vga4_prt_tch_Large

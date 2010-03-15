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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0004b226 };

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
0x76b8,	// (0x000528de) Screen

0x76cc,	// (0x000528f2) application_window_ParamLimits

0x76cc,	// (0x000528f2) application_window

0x76e6,	// (0x0005290c) screen_g1

0x4940,	// (0x0004fb66) area_bottom_pane_ParamLimits

0x4940,	// (0x0004fb66) area_bottom_pane

0x4a00,	// (0x0004fc26) area_top_pane_ParamLimits

0x4a00,	// (0x0004fc26) area_top_pane

0x4a9e,	// (0x0004fcc4) main_pane_ParamLimits

0x4a9e,	// (0x0004fcc4) main_pane

0x76f0,	// (0x00052916) misc_graphics

0x96b5,	// (0x000548db) battery_pane_ParamLimits

0x96b5,	// (0x000548db) battery_pane

0xa36d,	// (0x00055593) bg_status_flat_pane_g8

0xa375,	// (0x0005559b) bg_status_flat_pane_g9

0x9777,	// (0x0005499d) context_pane_ParamLimits

0x9777,	// (0x0005499d) context_pane

0x988d,	// (0x00054ab3) navi_pane_ParamLimits

0x988d,	// (0x00054ab3) navi_pane

0x990b,	// (0x00054b31) signal_pane_ParamLimits

0x990b,	// (0x00054b31) signal_pane

0x0008,

0xf884,	// (0x0005aaaa) bg_status_flat_pane_g

0x9978,	// (0x00054b9e) status_pane_g1_ParamLimits

0x9978,	// (0x00054b9e) status_pane_g1

0x9984,	// (0x00054baa) status_pane_g2_ParamLimits

0x9984,	// (0x00054baa) status_pane_g2

0x9990,	// (0x00054bb6) status_pane_g3_ParamLimits

0x9990,	// (0x00054bb6) status_pane_g3

0x0004,

0xf7ab,	// (0x0005a9d1) status_pane_g_ParamLimits

0xf7ab,	// (0x0005a9d1) status_pane_g

0x99c4,	// (0x00054bea) title_pane_ParamLimits

0x99c4,	// (0x00054bea) title_pane

0x9a01,	// (0x00054c27) uni_indicator_pane_ParamLimits

0x9a01,	// (0x00054c27) uni_indicator_pane

0x95dd,	// (0x00054803) bg_list_pane_ParamLimits

0x95dd,	// (0x00054803) bg_list_pane

0x7db5,	// (0x00052fdb) find_pane

0x95fd,	// (0x00054823) listscroll_app_pane_ParamLimits

0x95fd,	// (0x00054823) listscroll_app_pane

0x9609,	// (0x0005482f) listscroll_form_pane

0x5aaa,	// (0x00050cd0) listscroll_gen_pane_ParamLimits

0x5aaa,	// (0x00050cd0) listscroll_gen_pane

0x9609,	// (0x0005482f) listscroll_set_pane

0x8832,	// (0x00053a58) main_idle_act_pane

0x92e3,	// (0x00054509) main_idle_trad_pane

0x92e3,	// (0x00054509) main_list_empty_pane

0x9623,	// (0x00054849) main_midp_pane

0x962f,	// (0x00054855) main_pane_g1_ParamLimits

0x962f,	// (0x00054855) main_pane_g1

0x5acc,	// (0x00050cf2) popup_ai_message_window_ParamLimits

0x5acc,	// (0x00050cf2) popup_ai_message_window

0x5b7a,	// (0x00050da0) popup_fep_china_uni_window_ParamLimits

0x5b7a,	// (0x00050da0) popup_fep_china_uni_window

0x5bd6,	// (0x00050dfc) popup_fep_japan_candidate_window_ParamLimits

0x5bd6,	// (0x00050dfc) popup_fep_japan_candidate_window

0x5bf6,	// (0x00050e1c) popup_fep_japan_predictive_window_ParamLimits

0x5bf6,	// (0x00050e1c) popup_fep_japan_predictive_window

0x5c26,	// (0x00050e4c) popup_find_window

0x5c33,	// (0x00050e59) popup_grid_graphic_window_ParamLimits

0x5c33,	// (0x00050e59) popup_grid_graphic_window

0x5c5b,	// (0x00050e81) popup_large_graphic_colour_window

0x5c81,	// (0x00050ea7) popup_menu_window_ParamLimits

0x5c81,	// (0x00050ea7) popup_menu_window

0x5e39,	// (0x0005105f) popup_note_image_window

0x5e25,	// (0x0005104b) popup_note_wait_window_ParamLimits

0x5e25,	// (0x0005104b) popup_note_wait_window

0x5e25,	// (0x0005104b) popup_note_window_ParamLimits

0x5e25,	// (0x0005104b) popup_note_window

0x5e8f,	// (0x000510b5) popup_query_code_window_ParamLimits

0x5e8f,	// (0x000510b5) popup_query_code_window

0x5ea3,	// (0x000510c9) popup_query_data_code_window_ParamLimits

0x5ea3,	// (0x000510c9) popup_query_data_code_window

0x5ec0,	// (0x000510e6) popup_query_data_window_ParamLimits

0x5ec0,	// (0x000510e6) popup_query_data_window

0x5edc,	// (0x00051102) popup_query_sat_info_window_ParamLimits

0x5edc,	// (0x00051102) popup_query_sat_info_window

0x5f15,	// (0x0005113b) popup_snote_single_graphic_window_ParamLimits

0x5f15,	// (0x0005113b) popup_snote_single_graphic_window

0x5f15,	// (0x0005113b) popup_snote_single_text_window_ParamLimits

0x5f15,	// (0x0005113b) popup_snote_single_text_window

0x5f2a,	// (0x00051150) popup_sub_window_general

0x605a,	// (0x00051280) popup_window_general_ParamLimits

0x605a,	// (0x00051280) popup_window_general

0x963d,	// (0x00054863) power_save_pane

0x5946,	// (0x00050b6c) control_pane_g1_ParamLimits

0x5946,	// (0x00050b6c) control_pane_g1

0x596d,	// (0x00050b93) control_pane_g2_ParamLimits

0x596d,	// (0x00050b93) control_pane_g2

0x95a0,	// (0x000547c6) control_pane_g3_ParamLimits

0x95a0,	// (0x000547c6) control_pane_g3

0x0007,

0xf793,	// (0x0005a9b9) control_pane_g_ParamLimits

0xf793,	// (0x0005a9b9) control_pane_g

0x59b7,	// (0x00050bdd) control_pane_t1_ParamLimits

0x59b7,	// (0x00050bdd) control_pane_t1

0x5a03,	// (0x00050c29) control_pane_t2_ParamLimits

0x5a03,	// (0x00050c29) control_pane_t2

0x0002,

0xf7a4,	// (0x0005a9ca) control_pane_t_ParamLimits

0xf7a4,	// (0x0005a9ca) control_pane_t

0x94c1,	// (0x000546e7) navi_navi_volume_pane_cp1

0x94ca,	// (0x000546f0) status_small_icon_pane

0x94d2,	// (0x000546f8) status_small_pane_g1_ParamLimits

0x94d2,	// (0x000546f8) status_small_pane_g1

0x9506,	// (0x0005472c) status_small_pane_g2_ParamLimits

0x9506,	// (0x0005472c) status_small_pane_g2

0x9512,	// (0x00054738) status_small_pane_g3_ParamLimits

0x9512,	// (0x00054738) status_small_pane_g3

0x951e,	// (0x00054744) status_small_pane_g4_ParamLimits

0x951e,	// (0x00054744) status_small_pane_g4

0x952a,	// (0x00054750) status_small_pane_g5_ParamLimits

0x952a,	// (0x00054750) status_small_pane_g5

0x9539,	// (0x0005475f) status_small_pane_g6_ParamLimits

0x9539,	// (0x0005475f) status_small_pane_g6

0x0007,

0xf782,	// (0x0005a9a8) status_small_pane_g_ParamLimits

0xf782,	// (0x0005a9a8) status_small_pane_g

0x9569,	// (0x0005478f) status_small_pane_t1

0x958c,	// (0x000547b2) status_small_wait_pane_ParamLimits

0x958c,	// (0x000547b2) status_small_wait_pane

0x8d54,	// (0x00053f7a) aid_levels_signal_ParamLimits

0x8d54,	// (0x00053f7a) aid_levels_signal

0x8d66,	// (0x00053f8c) signal_pane_g1_ParamLimits

0x8d66,	// (0x00053f8c) signal_pane_g1

0x8d7b,	// (0x00053fa1) signal_pane_g2_ParamLimits

0x8d7b,	// (0x00053fa1) signal_pane_g2

0x0003,

0xf713,	// (0x0005a939) signal_pane_g_ParamLimits

0xf713,	// (0x0005a939) signal_pane_g

0x8db6,	// (0x00053fdc) context_pane_g1

0x76fa,	// (0x00052920) title_pane_g1

0x7730,	// (0x00052956) title_pane_t1

0x7798,	// (0x000529be) title_pane_t2

0x77be,	// (0x000529e4) title_pane_t3

0x0002,

0xf55d,	// (0x0005a783) title_pane_t

0x9a19,	// (0x00054c3f) aid_levels_battery_ParamLimits

0x9a19,	// (0x00054c3f) aid_levels_battery

0x9a2d,	// (0x00054c53) battery_pane_g1_ParamLimits

0x9a2d,	// (0x00054c53) battery_pane_g1

0x9a43,	// (0x00054c69) battery_pane_g2_ParamLimits

0x9a43,	// (0x00054c69) battery_pane_g2

0x0001,

0xf7b6,	// (0x0005a9dc) battery_pane_g_ParamLimits

0xf7b6,	// (0x0005a9dc) battery_pane_g

0xaca3,	// (0x00055ec9) uni_indicator_pane_g1

0xacb8,	// (0x00055ede) uni_indicator_pane_g2

0xacce,	// (0x00055ef4) uni_indicator_pane_g3

0x0005,

0xf92c,	// (0x0005ab52) uni_indicator_pane_g

0x9155,	// (0x0005437b) navi_icon_pane_ParamLimits

0x9155,	// (0x0005437b) navi_icon_pane

0x909e,	// (0x000542c4) navi_midp_pane

0x9171,	// (0x00054397) navi_navi_pane

0x917b,	// (0x000543a1) navi_text_pane_ParamLimits

0x917b,	// (0x000543a1) navi_text_pane

0x76e6,	// (0x0005290c) status_small_wait_pane_g1

0x7bed,	// (0x00052e13) status_small_wait_pane_g2

0x0001,

0xf927,	// (0x0005ab4d) status_small_wait_pane_g

0xa9c8,	// (0x00055bee) navi_navi_icon_text_pane

0xa9d0,	// (0x00055bf6) navi_navi_pane_g1_ParamLimits

0xa9d0,	// (0x00055bf6) navi_navi_pane_g1

0xa9e2,	// (0x00055c08) navi_navi_pane_g2_ParamLimits

0xa9e2,	// (0x00055c08) navi_navi_pane_g2

0x0001,

0xf8f5,	// (0x0005ab1b) navi_navi_pane_g_ParamLimits

0xf8f5,	// (0x0005ab1b) navi_navi_pane_g

0xa9f4,	// (0x00055c1a) navi_navi_tabs_pane

0xa9fd,	// (0x00055c23) navi_navi_text_pane

0xa9c8,	// (0x00055bee) navi_navi_volume_pane

0xa9a4,	// (0x00055bca) navi_text_pane_t1

0xa998,	// (0x00055bbe) navi_icon_pane_g1

0xa8eb,	// (0x00055b11) navi_navi_text_pane_t1

0x63fa,	// (0x00051620) navi_navi_volume_pane_g1

0x6402,	// (0x00051628) volume_small_pane

0xa851,	// (0x00055a77) navi_navi_icon_text_pane_g1

0xa859,	// (0x00055a7f) navi_navi_icon_text_pane_t1

0x9171,	// (0x00054397) navi_tabs_2_long_pane

0x9171,	// (0x00054397) navi_tabs_2_pane

0x9171,	// (0x00054397) navi_tabs_3_long_pane

0x9171,	// (0x00054397) navi_tabs_3_pane

0x9171,	// (0x00054397) navi_tabs_4_pane

0x63da,	// (0x00051600) tabs_2_active_pane_ParamLimits

0x63da,	// (0x00051600) tabs_2_active_pane

0x63ea,	// (0x00051610) tabs_2_passive_pane_ParamLimits

0x63ea,	// (0x00051610) tabs_2_passive_pane

0x63a8,	// (0x000515ce) tabs_3_active_pane_ParamLimits

0x63a8,	// (0x000515ce) tabs_3_active_pane

0x63b8,	// (0x000515de) tabs_3_passive_pane_ParamLimits

0x63b8,	// (0x000515de) tabs_3_passive_pane

0x63c9,	// (0x000515ef) tabs_3_passive_pane_cp_ParamLimits

0x63c9,	// (0x000515ef) tabs_3_passive_pane_cp

0x6364,	// (0x0005158a) tabs_4_active_pane_ParamLimits

0x6364,	// (0x0005158a) tabs_4_active_pane

0x6375,	// (0x0005159b) tabs_4_passive_pane_ParamLimits

0x6375,	// (0x0005159b) tabs_4_passive_pane

0x6386,	// (0x000515ac) tabs_4_passive_pane_cp_ParamLimits

0x6386,	// (0x000515ac) tabs_4_passive_pane_cp

0x6397,	// (0x000515bd) tabs_4_passive_pane_cp2_ParamLimits

0x6397,	// (0x000515bd) tabs_4_passive_pane_cp2

0x6340,	// (0x00051566) tabs_2_long_active_pane_ParamLimits

0x6340,	// (0x00051566) tabs_2_long_active_pane

0x6352,	// (0x00051578) tabs_2_long_passive_pane_ParamLimits

0x6352,	// (0x00051578) tabs_2_long_passive_pane

0x6301,	// (0x00051527) tabs_3_long_active_pane_ParamLimits

0x6301,	// (0x00051527) tabs_3_long_active_pane

0x6314,	// (0x0005153a) tabs_3_long_passive_pane_ParamLimits

0x6314,	// (0x0005153a) tabs_3_long_passive_pane

0x632d,	// (0x00051553) tabs_3_long_passive_pane_cp_ParamLimits

0x632d,	// (0x00051553) tabs_3_long_passive_pane_cp

0x62a7,	// (0x000514cd) volume_small_pane_g1

0x62b0,	// (0x000514d6) volume_small_pane_g2

0x62b9,	// (0x000514df) volume_small_pane_g3

0x62c2,	// (0x000514e8) volume_small_pane_g4

0x62cb,	// (0x000514f1) volume_small_pane_g5

0x62d4,	// (0x000514fa) volume_small_pane_g6

0x62dd,	// (0x00051503) volume_small_pane_g7

0x62e6,	// (0x0005150c) volume_small_pane_g8

0x62ef,	// (0x00051515) volume_small_pane_g9

0x62f8,	// (0x0005151e) volume_small_pane_g10

0x0009,

0xf8c1,	// (0x0005aae7) volume_small_pane_g

0x77d0,	// (0x000529f6) bg_active_tab_pane_cp2_ParamLimits

0x77d0,	// (0x000529f6) bg_active_tab_pane_cp2

0x77de,	// (0x00052a04) tabs_3_active_pane_g1

0x77e6,	// (0x00052a0c) tabs_3_active_pane_t1

0x77d0,	// (0x000529f6) bg_passive_tab_pane_cp2_ParamLimits

0x77d0,	// (0x000529f6) bg_passive_tab_pane_cp2

0x77de,	// (0x00052a04) tabs_3_passive_pane_g1

0x77e6,	// (0x00052a0c) tabs_3_passive_pane_t1

0x77d0,	// (0x000529f6) bg_active_tab_pane_cp3_ParamLimits

0x77d0,	// (0x000529f6) bg_active_tab_pane_cp3

0x77f8,	// (0x00052a1e) tabs_4_active_pane_g1

0x7800,	// (0x00052a26) tabs_4_active_pane_t1

0x77d0,	// (0x000529f6) bg_passive_tab_pane_cp3_ParamLimits

0x77d0,	// (0x000529f6) bg_passive_tab_pane_cp3

0x77f8,	// (0x00052a1e) tabs_4_1_passive_pane_g1

0x7800,	// (0x00052a26) tabs_4_1_passive_pane_t1

0x9623,	// (0x00054849) list_highlight_pane_cp2

0xaf2c,	// (0x00056152) list_set_pane_ParamLimits

0xaf2c,	// (0x00056152) list_set_pane

0xafd2,	// (0x000561f8) main_pane_set_t1_ParamLimits

0xafd2,	// (0x000561f8) main_pane_set_t1

0xaff2,	// (0x00056218) main_pane_set_t2_ParamLimits

0xaff2,	// (0x00056218) main_pane_set_t2

0xb006,	// (0x0005622c) main_pane_set_t3_ParamLimits

0xb006,	// (0x0005622c) main_pane_set_t3

0xb018,	// (0x0005623e) main_pane_set_t4_ParamLimits

0xb018,	// (0x0005623e) main_pane_set_t4

0x0003,

0xf991,	// (0x0005abb7) main_pane_set_t_ParamLimits

0xf991,	// (0x0005abb7) main_pane_set_t

0xb02a,	// (0x00056250) setting_code_pane

0xb036,	// (0x0005625c) setting_slider_graphic_pane

0xb036,	// (0x0005625c) setting_slider_pane

0xb036,	// (0x0005625c) setting_text_pane

0xb036,	// (0x0005625c) setting_volume_pane

0x4ce3,	// (0x0004ff09) volume_set_pane

0x77d0,	// (0x000529f6) bg_set_opt_pane_cp

0x4ceb,	// (0x0004ff11) setting_slider_pane_t1

0x4d04,	// (0x0004ff2a) setting_slider_pane_t2

0x4d1e,	// (0x0004ff44) setting_slider_pane_t3

0x0002,

0xf564,	// (0x0005a78a) setting_slider_pane_t

0x4d36,	// (0x0004ff5c) slider_set_pane

0x76f0,	// (0x00052916) bg_set_opt_pane_cp2

0x7812,	// (0x00052a38) setting_slider_graphic_pane_g1

0x4d4c,	// (0x0004ff72) setting_slider_graphic_pane_t1

0x4d5c,	// (0x0004ff82) setting_slider_graphic_pane_t2

0x0001,

0xf56b,	// (0x0005a791) setting_slider_graphic_pane_t

0x4d6c,	// (0x0004ff92) slider_set_pane_cp

0x76f0,	// (0x00052916) input_focus_pane_cp1

0xaeeb,	// (0x00056111) list_set_text_pane

0x76e6,	// (0x0005290c) setting_text_pane_g1

0x76f0,	// (0x00052916) input_focus_pane_cp2

0x76e6,	// (0x0005290c) setting_code_pane_g1

0x781b,	// (0x00052a41) setting_code_pane_t1

0x3eab,	// (0x0004f0d1) set_text_pane_t1_ParamLimits

0x3eab,	// (0x0004f0d1) set_text_pane_t1

0x86a9,	// (0x000538cf) set_opt_bg_pane_g1

0x86b1,	// (0x000538d7) set_opt_bg_pane_g2

0xaec5,	// (0x000560eb) set_opt_bg_pane_g3

0x86c1,	// (0x000538e7) set_opt_bg_pane_g4

0x86c9,	// (0x000538ef) set_opt_bg_pane_g5

0x86d1,	// (0x000538f7) set_opt_bg_pane_g6

0xaecf,	// (0x000560f5) set_opt_bg_pane_g7

0xaed7,	// (0x000560fd) set_opt_bg_pane_g8

0xaee1,	// (0x00056107) set_opt_bg_pane_g9

0x0008,

0xf97e,	// (0x0005aba4) set_opt_bg_pane_g

0xaeb8,	// (0x000560de) slider_set_pane_g1

0x6497,	// (0x000516bd) slider_set_pane_g2

0x0006,

0xf96f,	// (0x0005ab95) slider_set_pane_g

0x640b,	// (0x00051631) volume_set_pane_g1

0x6413,	// (0x00051639) volume_set_pane_g2

0x641b,	// (0x00051641) volume_set_pane_g3

0x6423,	// (0x00051649) volume_set_pane_g4

0x642b,	// (0x00051651) volume_set_pane_g5

0x6433,	// (0x00051659) volume_set_pane_g6

0x643b,	// (0x00051661) volume_set_pane_g7

0x6443,	// (0x00051669) volume_set_pane_g8

0x644b,	// (0x00051671) volume_set_pane_g9

0x6453,	// (0x00051679) volume_set_pane_g10

0x0009,

0xf947,	// (0x0005ab6d) volume_set_pane_g

0x7829,	// (0x00052a4f) indicator_pane_ParamLimits

0x7829,	// (0x00052a4f) indicator_pane

0x7835,	// (0x00052a5b) main_idle_pane_g2_ParamLimits

0x7835,	// (0x00052a5b) main_idle_pane_g2

0x785d,	// (0x00052a83) main_pane_idle_g1_ParamLimits

0x785d,	// (0x00052a83) main_pane_idle_g1

0x786a,	// (0x00052a90) popup_clock_digital_analogue_window_ParamLimits

0x786a,	// (0x00052a90) popup_clock_digital_analogue_window

0x7881,	// (0x00052aa7) soft_indicator_pane_ParamLimits

0x7881,	// (0x00052aa7) soft_indicator_pane

0x788d,	// (0x00052ab3) wallpaper_pane_ParamLimits

0x788d,	// (0x00052ab3) wallpaper_pane

0x76e6,	// (0x0005290c) wallpaper_pane_g1

0x78a1,	// (0x00052ac7) indicator_pane_g1_ParamLimits

0x78a1,	// (0x00052ac7) indicator_pane_g1

0xb28e,	// (0x000564b4) navi_navi_icon_text_pane_srt_g1

0x78bc,	// (0x00052ae2) soft_indicator_pane_t1

0x78d6,	// (0x00052afc) aid_ps_area_pane

0x78e7,	// (0x00052b0d) aid_ps_clock_pane

0x78f5,	// (0x00052b1b) aid_ps_indicator_pane

0x7901,	// (0x00052b27) indicator_ps_pane_ParamLimits

0x7901,	// (0x00052b27) indicator_ps_pane

0x7910,	// (0x00052b36) power_save_pane_g1_ParamLimits

0x7910,	// (0x00052b36) power_save_pane_g1

0x791c,	// (0x00052b42) power_save_pane_g2_ParamLimits

0x791c,	// (0x00052b42) power_save_pane_g2

0x48f4,	// (0x0004fb1a) aid_navinavi_width_pane

0x78d6,	// (0x00052afc) aid_ps_area_pane_ParamLimits

0x0001,

0xf570,	// (0x0005a796) power_save_pane_g_ParamLimits

0xf570,	// (0x0005a796) power_save_pane_g

0x792a,	// (0x00052b50) power_save_pane_t1_ParamLimits

0x792a,	// (0x00052b50) power_save_pane_t1

0x78e7,	// (0x00052b0d) aid_ps_clock_pane_ParamLimits

0x78f5,	// (0x00052b1b) aid_ps_indicator_pane_ParamLimits

0x793c,	// (0x00052b62) power_save_pane_t4_ParamLimits

0x793c,	// (0x00052b62) power_save_pane_t4

0x0001,

0xf575,	// (0x0005a79b) power_save_pane_t_ParamLimits

0xf575,	// (0x0005a79b) power_save_pane_t

0x7966,	// (0x00052b8c) power_save_t3_ParamLimits

0x7966,	// (0x00052b8c) power_save_t3

0x7951,	// (0x00052b77) power_save_t2_ParamLimits

0x7951,	// (0x00052b77) power_save_t2

0x797b,	// (0x00052ba1) indicator_ps_pane_g1

0x7984,	// (0x00052baa) ai_gene_pane_ParamLimits

0x7984,	// (0x00052baa) ai_gene_pane

0x7990,	// (0x00052bb6) ai_links_pane_ParamLimits

0x7990,	// (0x00052bb6) ai_links_pane

0x799c,	// (0x00052bc2) indicator_pane_cp1_ParamLimits

0x799c,	// (0x00052bc2) indicator_pane_cp1

0x79a8,	// (0x00052bce) main_pane_idle_g1_cp_ParamLimits

0x79a8,	// (0x00052bce) main_pane_idle_g1_cp

0x79b4,	// (0x00052bda) popup_ai_links_title_window

0x79bd,	// (0x00052be3) soft_indicator_pane_cp1_ParamLimits

0x79bd,	// (0x00052be3) soft_indicator_pane_cp1

0xac91,	// (0x00055eb7) ai_links_pane_g1

0xac9a,	// (0x00055ec0) grid_ai_links_pane

0xac74,	// (0x00055e9a) ai_gene_pane_1

0xac7f,	// (0x00055ea5) ai_gene_pane_2

0xac88,	// (0x00055eae) list_highlight_pane_cp4

0xac58,	// (0x00055e7e) cell_ai_link_pane_ParamLimits

0xac58,	// (0x00055e7e) cell_ai_link_pane

0xac50,	// (0x00055e76) cell_ai_link_pane_g1

0x7bed,	// (0x00052e13) cell_ai_link_pane_g2

0x0001,

0xf922,	// (0x0005ab48) cell_ai_link_pane_g

0x76f0,	// (0x00052916) grid_highlight_cp2

0x76f0,	// (0x00052916) bg_popup_sub_pane_cp1

0x79d7,	// (0x00052bfd) popup_ai_links_title_window_t1

0xab9e,	// (0x00055dc4) ai_gene_pane_1_g1_ParamLimits

0xab9e,	// (0x00055dc4) ai_gene_pane_1_g1

0xabaa,	// (0x00055dd0) ai_gene_pane_1_g2_ParamLimits

0xabaa,	// (0x00055dd0) ai_gene_pane_1_g2

0x0001,

0xf918,	// (0x0005ab3e) ai_gene_pane_1_g_ParamLimits

0xf918,	// (0x0005ab3e) ai_gene_pane_1_g

0xabb7,	// (0x00055ddd) ai_gene_pane_1_t1_ParamLimits

0xabb7,	// (0x00055ddd) ai_gene_pane_1_t1

0xabeb,	// (0x00055e11) grid_ai_soft_ind_pane

0xab89,	// (0x00055daf) ai_gene_pane_2_t1_ParamLimits

0xab89,	// (0x00055daf) ai_gene_pane_2_t1

0x79e6,	// (0x00052c0c) main_pane_empty_t1_ParamLimits

0x79e6,	// (0x00052c0c) main_pane_empty_t1

0x79fe,	// (0x00052c24) main_pane_empty_t2_ParamLimits

0x79fe,	// (0x00052c24) main_pane_empty_t2

0x7a13,	// (0x00052c39) main_pane_empty_t3_ParamLimits

0x7a13,	// (0x00052c39) main_pane_empty_t3

0x7a25,	// (0x00052c4b) main_pane_empty_t4_ParamLimits

0x7a25,	// (0x00052c4b) main_pane_empty_t4

0x7a37,	// (0x00052c5d) main_pane_empty_t5_ParamLimits

0x7a37,	// (0x00052c5d) main_pane_empty_t5

0x0004,

0xf57a,	// (0x0005a7a0) main_pane_empty_t_ParamLimits

0xf57a,	// (0x0005a7a0) main_pane_empty_t

0x86fa,	// (0x00053920) bg_popup_window_pane_ParamLimits

0x86fa,	// (0x00053920) bg_popup_window_pane

0xa8f9,	// (0x00055b1f) find_popup_pane_cp2_ParamLimits

0xa8f9,	// (0x00055b1f) find_popup_pane_cp2

0xa905,	// (0x00055b2b) heading_pane_ParamLimits

0xa905,	// (0x00055b2b) heading_pane

0x76f0,	// (0x00052916) bg_popup_sub_pane

0xa873,	// (0x00055a99) bg_popup_window_pane_g1_ParamLimits

0xa873,	// (0x00055a99) bg_popup_window_pane_g1

0xa87f,	// (0x00055aa5) bg_popup_window_pane_g2_ParamLimits

0xa87f,	// (0x00055aa5) bg_popup_window_pane_g2

0xa88b,	// (0x00055ab1) bg_popup_window_pane_g3_ParamLimits

0xa88b,	// (0x00055ab1) bg_popup_window_pane_g3

0xa897,	// (0x00055abd) bg_popup_window_pane_g4_ParamLimits

0xa897,	// (0x00055abd) bg_popup_window_pane_g4

0xa8a3,	// (0x00055ac9) bg_popup_window_pane_g5_ParamLimits

0xa8a3,	// (0x00055ac9) bg_popup_window_pane_g5

0xa8af,	// (0x00055ad5) bg_popup_window_pane_g6_ParamLimits

0xa8af,	// (0x00055ad5) bg_popup_window_pane_g6

0xa8bb,	// (0x00055ae1) bg_popup_window_pane_g7_ParamLimits

0xa8bb,	// (0x00055ae1) bg_popup_window_pane_g7

0xa8c7,	// (0x00055aed) bg_popup_window_pane_g8_ParamLimits

0xa8c7,	// (0x00055aed) bg_popup_window_pane_g8

0xa8d3,	// (0x00055af9) bg_popup_window_pane_g9_ParamLimits

0xa8d3,	// (0x00055af9) bg_popup_window_pane_g9

0xa8df,	// (0x00055b05) bg_popup_window_pane_g10_ParamLimits

0xa8df,	// (0x00055b05) bg_popup_window_pane_g10

0x0009,

0xf8e0,	// (0x0005ab06) bg_popup_window_pane_g_ParamLimits

0xf8e0,	// (0x0005ab06) bg_popup_window_pane_g

0xa808,	// (0x00055a2e) bg_popup_heading_pane_ParamLimits

0xa808,	// (0x00055a2e) bg_popup_heading_pane

0x65a9,	// (0x000517cf) tabs_4_passive_pane_cp_srt_ParamLimits

0x65a9,	// (0x000517cf) tabs_4_passive_pane_cp_srt

0x65bb,	// (0x000517e1) tabs_4_passive_pane_srt_ParamLimits

0xa81c,	// (0x00055a42) heading_pane_g2

0x65bb,	// (0x000517e1) tabs_4_passive_pane_srt

0x9623,	// (0x00054849) bg_passive_tab_pane_cp3_srt_ParamLimits

0x9623,	// (0x00054849) bg_passive_tab_pane_cp3_srt

0xa824,	// (0x00055a4a) heading_pane_t1_ParamLimits

0xa824,	// (0x00055a4a) heading_pane_t1

0xa83b,	// (0x00055a61) heading_pane_t2_ParamLimits

0xa83b,	// (0x00055a61) heading_pane_t2

0x0001,

0xf8db,	// (0x0005ab01) heading_pane_t_ParamLimits

0xf8db,	// (0x0005ab01) heading_pane_t

0xa335,	// (0x0005555b) bg_popup_heading_pane_g1

0xa3e4,	// (0x0005560a) bg_popup_heading_pane_g2

0xa3ee,	// (0x00055614) bg_popup_heading_pane_g3

0xa3f8,	// (0x0005561e) bg_popup_heading_pane_g4

0xa402,	// (0x00055628) bg_popup_heading_pane_g5

0xa40c,	// (0x00055632) bg_popup_heading_pane_g6

0xa414,	// (0x0005563a) bg_popup_heading_pane_g7

0xa41c,	// (0x00055642) bg_popup_heading_pane_g8

0xa426,	// (0x0005564c) bg_popup_heading_pane_g9

0x0008,

0xf897,	// (0x0005aabd) bg_popup_heading_pane_g

0x9b1b,	// (0x00054d41) bg_popup_sub_pane_g1

0x9b2b,	// (0x00054d51) bg_popup_sub_pane_g2

0x9b23,	// (0x00054d49) bg_popup_sub_pane_g3

0x9b3b,	// (0x00054d61) bg_popup_sub_pane_g4

0x9b33,	// (0x00054d59) bg_popup_sub_pane_g5

0x9b43,	// (0x00054d69) bg_popup_sub_pane_g6

0x9b4b,	// (0x00054d71) bg_popup_sub_pane_g7

0x9b5b,	// (0x00054d81) bg_popup_sub_pane_g8

0x9b53,	// (0x00054d79) bg_popup_sub_pane_g9

0x0008,

0xf871,	// (0x0005aa97) bg_popup_sub_pane_g

0x7a4b,	// (0x00052c71) bg_popup_window_pane_cp5_ParamLimits

0x7a4b,	// (0x00052c71) bg_popup_window_pane_cp5

0x7a67,	// (0x00052c8d) popup_note_window_g1_ParamLimits

0x7a67,	// (0x00052c8d) popup_note_window_g1

0x7a73,	// (0x00052c99) popup_note_window_t1_ParamLimits

0x7a73,	// (0x00052c99) popup_note_window_t1

0x7a89,	// (0x00052caf) popup_note_window_t2_ParamLimits

0x7a89,	// (0x00052caf) popup_note_window_t2

0x7a9f,	// (0x00052cc5) popup_note_window_t3_ParamLimits

0x7a9f,	// (0x00052cc5) popup_note_window_t3

0x7ab5,	// (0x00052cdb) popup_note_window_t4_ParamLimits

0x7ab5,	// (0x00052cdb) popup_note_window_t4

0x7add,	// (0x00052d03) popup_note_window_t5_ParamLimits

0x7add,	// (0x00052d03) popup_note_window_t5

0x0004,

0xf585,	// (0x0005a7ab) popup_note_window_t_ParamLimits

0xf585,	// (0x0005a7ab) popup_note_window_t

0x7b01,	// (0x00052d27) bg_popup_window_pane_cp6_ParamLimits

0x7b01,	// (0x00052d27) bg_popup_window_pane_cp6

0xa2b1,	// (0x000554d7) popup_note_image_window_g1_ParamLimits

0xa2b1,	// (0x000554d7) popup_note_image_window_g1

0xa2bd,	// (0x000554e3) popup_note_image_window_g2_ParamLimits

0xa2bd,	// (0x000554e3) popup_note_image_window_g2

0x0001,

0xf865,	// (0x0005aa8b) popup_note_image_window_g_ParamLimits

0xf865,	// (0x0005aa8b) popup_note_image_window_g

0xa2d6,	// (0x000554fc) popup_note_image_window_t1_ParamLimits

0xa2d6,	// (0x000554fc) popup_note_image_window_t1

0xa2ef,	// (0x00055515) popup_note_image_window_t2_ParamLimits

0xa2ef,	// (0x00055515) popup_note_image_window_t2

0xa308,	// (0x0005552e) popup_note_image_window_t3_ParamLimits

0xa308,	// (0x0005552e) popup_note_image_window_t3

0x0002,

0xf86a,	// (0x0005aa90) popup_note_image_window_t_ParamLimits

0xf86a,	// (0x0005aa90) popup_note_image_window_t

0xa172,	// (0x00055398) bg_popup_window_pane_cp7_ParamLimits

0xa172,	// (0x00055398) bg_popup_window_pane_cp7

0xa1a2,	// (0x000553c8) popup_note_wait_window_g1_ParamLimits

0xa1a2,	// (0x000553c8) popup_note_wait_window_g1

0xa1ae,	// (0x000553d4) popup_note_wait_window_g2_ParamLimits

0xa1ae,	// (0x000553d4) popup_note_wait_window_g2

0x0002,

0xf853,	// (0x0005aa79) popup_note_wait_window_g_ParamLimits

0xf853,	// (0x0005aa79) popup_note_wait_window_g

0xa1c6,	// (0x000553ec) popup_note_wait_window_t1_ParamLimits

0xa1c6,	// (0x000553ec) popup_note_wait_window_t1

0xa1ed,	// (0x00055413) popup_note_wait_window_t2_ParamLimits

0xa1ed,	// (0x00055413) popup_note_wait_window_t2

0xa20a,	// (0x00055430) popup_note_wait_window_t3_ParamLimits

0xa20a,	// (0x00055430) popup_note_wait_window_t3

0xa21d,	// (0x00055443) popup_note_wait_window_t4_ParamLimits

0xa21d,	// (0x00055443) popup_note_wait_window_t4

0x0004,

0xf85a,	// (0x0005aa80) popup_note_wait_window_t_ParamLimits

0xf85a,	// (0x0005aa80) popup_note_wait_window_t

0xa242,	// (0x00055468) wait_bar_pane_ParamLimits

0xa242,	// (0x00055468) wait_bar_pane

0x76f0,	// (0x00052916) wait_anim_pane

0x76f0,	// (0x00052916) wait_border_pane

0x76e6,	// (0x0005290c) wait_anim_pane_g1

0x76e6,	// (0x0005290c) wait_anim_pane_g2

0x0001,

0xf70e,	// (0x0005a934) wait_anim_pane_g

0xa116,	// (0x0005533c) wait_border_pane_g1

0xa121,	// (0x00055347) wait_border_pane_g2

0xa12a,	// (0x00055350) wait_border_pane_g3

0x0002,

0xf84c,	// (0x0005aa72) wait_border_pane_g

0x9f81,	// (0x000551a7) bg_popup_window_pane_cp16_ParamLimits

0x9f81,	// (0x000551a7) bg_popup_window_pane_cp16

0xa081,	// (0x000552a7) indicator_popup_pane_cp4_ParamLimits

0xa081,	// (0x000552a7) indicator_popup_pane_cp4

0xa095,	// (0x000552bb) popup_query_data_window_t1_ParamLimits

0xa095,	// (0x000552bb) popup_query_data_window_t1

0xa0a7,	// (0x000552cd) popup_query_data_window_t2_ParamLimits

0xa0a7,	// (0x000552cd) popup_query_data_window_t2

0xa0c0,	// (0x000552e6) popup_query_data_window_t3_ParamLimits

0xa0c0,	// (0x000552e6) popup_query_data_window_t3

0x0002,

0xf845,	// (0x0005aa6b) popup_query_data_window_t_ParamLimits

0xf845,	// (0x0005aa6b) popup_query_data_window_t

0xa0da,	// (0x00055300) query_popup_data_pane_ParamLimits

0xa0da,	// (0x00055300) query_popup_data_pane

0xa0ee,	// (0x00055314) query_popup_data_pane_cp1_ParamLimits

0xa0ee,	// (0x00055314) query_popup_data_pane_cp1

0x9f81,	// (0x000551a7) bg_popup_window_pane_cp10_ParamLimits

0x9f81,	// (0x000551a7) bg_popup_window_pane_cp10

0x9fb3,	// (0x000551d9) indicator_popup_pane_ParamLimits

0x9fb3,	// (0x000551d9) indicator_popup_pane

0x9fd5,	// (0x000551fb) popup_query_code_window_t1_ParamLimits

0x9fd5,	// (0x000551fb) popup_query_code_window_t1

0x9fef,	// (0x00055215) popup_query_code_window_t2_ParamLimits

0x9fef,	// (0x00055215) popup_query_code_window_t2

0xa038,	// (0x0005525e) popup_query_code_window_t3_ParamLimits

0xa038,	// (0x0005525e) popup_query_code_window_t3

0x0002,

0xf83e,	// (0x0005aa64) popup_query_code_window_t_ParamLimits

0xf83e,	// (0x0005aa64) popup_query_code_window_t

0xa067,	// (0x0005528d) query_popup_pane_ParamLimits

0xa067,	// (0x0005528d) query_popup_pane

0x7b01,	// (0x00052d27) bg_popup_window_pane_cp15_ParamLimits

0x7b01,	// (0x00052d27) bg_popup_window_pane_cp15

0x7b1f,	// (0x00052d45) indicator_popup_pane_cp1_ParamLimits

0x7b1f,	// (0x00052d45) indicator_popup_pane_cp1

0x7b32,	// (0x00052d58) indicator_popup_pane_cp2_ParamLimits

0x7b32,	// (0x00052d58) indicator_popup_pane_cp2

0x7b45,	// (0x00052d6b) popup_query_data_code_window_g1_ParamLimits

0x7b45,	// (0x00052d6b) popup_query_data_code_window_g1

0x7b58,	// (0x00052d7e) popup_query_data_code_window_t1_ParamLimits

0x7b58,	// (0x00052d7e) popup_query_data_code_window_t1

0x7b6a,	// (0x00052d90) popup_query_data_code_window_t2_ParamLimits

0x7b6a,	// (0x00052d90) popup_query_data_code_window_t2

0x7b7c,	// (0x00052da2) popup_query_data_code_window_t3_ParamLimits

0x7b7c,	// (0x00052da2) popup_query_data_code_window_t3

0x7b92,	// (0x00052db8) popup_query_data_code_window_t4_ParamLimits

0x7b92,	// (0x00052db8) popup_query_data_code_window_t4

0x0003,

0xf590,	// (0x0005a7b6) popup_query_data_code_window_t_ParamLimits

0xf590,	// (0x0005a7b6) popup_query_data_code_window_t

0x60e6,	// (0x0005130c) list_single_midp_graphic_pane_g3

0x7baa,	// (0x00052dd0) query_popup_data_pane_cp2_ParamLimits

0x7bbd,	// (0x00052de3) query_popup_pane_cp2_ParamLimits

0x7bbd,	// (0x00052de3) query_popup_pane_cp2

0x76f0,	// (0x00052916) bg_popup_window_pane_cp11

0x9f79,	// (0x0005519f) heading_pane_cp5

0x7ca5,	// (0x00052ecb) listscroll_popup_info_pane

0x76f0,	// (0x00052916) input_focus_pane_cp3

0x7bd0,	// (0x00052df6) query_popup_pane_t1

0x7bde,	// (0x00052e04) list_popup_info_pane_ParamLimits

0x7bde,	// (0x00052e04) list_popup_info_pane

0x7bed,	// (0x00052e13) listscroll_popup_info_pane_g1

0x7bf5,	// (0x00052e1b) scroll_pane_cp7

0x7bff,	// (0x00052e25) popup_info_list_pane_t1_ParamLimits

0x7bff,	// (0x00052e25) popup_info_list_pane_t1

0x7c19,	// (0x00052e3f) popup_info_list_pane_t2_ParamLimits

0x7c19,	// (0x00052e3f) popup_info_list_pane_t2

0x0001,

0xf599,	// (0x0005a7bf) popup_info_list_pane_t_ParamLimits

0xf599,	// (0x0005a7bf) popup_info_list_pane_t

0x76f0,	// (0x00052916) bg_popup_window_pane_cp12

0xb2a8,	// (0x000564ce) find_popup_pane

0x77d0,	// (0x000529f6) bg_popup_window_pane_cp3

0x7c33,	// (0x00052e59) heading_pane_cp3

0x7c3f,	// (0x00052e65) listscroll_popup_graphic_pane

0x76f0,	// (0x00052916) bg_popup_window_pane_cp4

0x7c9b,	// (0x00052ec1) heading_pane_cp4

0x7ca5,	// (0x00052ecb) listscroll_popup_colour_pane

0x7cad,	// (0x00052ed3) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x7cad,	// (0x00052ed3) cell_large_graphic_colour_none_popup_pane

0x7cc1,	// (0x00052ee7) grid_large_graphic_colour_popup_pane_ParamLimits

0x7cc1,	// (0x00052ee7) grid_large_graphic_colour_popup_pane

0x82ff,	// (0x00053525) listscroll_popup_colour_pane_g1_ParamLimits

0x82ff,	// (0x00053525) listscroll_popup_colour_pane_g1

0x8316,	// (0x0005353c) listscroll_popup_colour_pane_g2_ParamLimits

0x8316,	// (0x0005353c) listscroll_popup_colour_pane_g2

0x832d,	// (0x00053553) listscroll_popup_colour_pane_g3_ParamLimits

0x832d,	// (0x00053553) listscroll_popup_colour_pane_g3

0x833d,	// (0x00053563) listscroll_popup_colour_pane_g4_ParamLimits

0x833d,	// (0x00053563) listscroll_popup_colour_pane_g4

0x0003,

0xf59e,	// (0x0005a7c4) listscroll_popup_colour_pane_g_ParamLimits

0xf59e,	// (0x0005a7c4) listscroll_popup_colour_pane_g

0x8351,	// (0x00053577) scroll_pane_cp6_ParamLimits

0x8351,	// (0x00053577) scroll_pane_cp6

0x8363,	// (0x00053589) cell_large_graphic_colour_popup_pane_ParamLimits

0x8363,	// (0x00053589) cell_large_graphic_colour_popup_pane

0x8382,	// (0x000535a8) cell_large_graphic_colour_none_popup_pane_t1

0x76f0,	// (0x00052916) grid_highlight_pane_cp5

0x8391,	// (0x000535b7) cell_large_graphic_colour_popup_pane_g1

0x8399,	// (0x000535bf) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a7,	// (0x0005a7cd) cell_large_graphic_colour_popup_pane_g

0x83a1,	// (0x000535c7) cell_large_graphic_colour_popup_pane_g2_copy1

0x83aa,	// (0x000535d0) grid_highlight_pane_cp4

0x83b2,	// (0x000535d8) bg_popup_window_pane_cp8_ParamLimits

0x83b2,	// (0x000535d8) bg_popup_window_pane_cp8

0x83cd,	// (0x000535f3) popup_snote_single_text_window_g1_ParamLimits

0x83cd,	// (0x000535f3) popup_snote_single_text_window_g1

0x83df,	// (0x00053605) popup_snote_single_text_window_t1_ParamLimits

0x83df,	// (0x00053605) popup_snote_single_text_window_t1

0x83f2,	// (0x00053618) popup_snote_single_text_window_t2_ParamLimits

0x83f2,	// (0x00053618) popup_snote_single_text_window_t2

0x8405,	// (0x0005362b) popup_snote_single_text_window_t3_ParamLimits

0x8405,	// (0x0005362b) popup_snote_single_text_window_t3

0x843e,	// (0x00053664) popup_snote_single_text_window_t4_ParamLimits

0x843e,	// (0x00053664) popup_snote_single_text_window_t4

0x8472,	// (0x00053698) popup_snote_single_text_window_t5_ParamLimits

0x8472,	// (0x00053698) popup_snote_single_text_window_t5

0x0004,

0xf5ac,	// (0x0005a7d2) popup_snote_single_text_window_t_ParamLimits

0xf5ac,	// (0x0005a7d2) popup_snote_single_text_window_t

0x84a1,	// (0x000536c7) bg_popup_window_pane_cp9_ParamLimits

0x84a1,	// (0x000536c7) bg_popup_window_pane_cp9

0x83cd,	// (0x000535f3) popup_snote_single_graphic_window_g1_ParamLimits

0x83cd,	// (0x000535f3) popup_snote_single_graphic_window_g1

0x84af,	// (0x000536d5) popup_snote_single_graphic_window_g2_ParamLimits

0x84af,	// (0x000536d5) popup_snote_single_graphic_window_g2

0x0001,

0xf5b7,	// (0x0005a7dd) popup_snote_single_graphic_window_g_ParamLimits

0xf5b7,	// (0x0005a7dd) popup_snote_single_graphic_window_g

0x84bb,	// (0x000536e1) popup_snote_single_graphic_window_t1_ParamLimits

0x84bb,	// (0x000536e1) popup_snote_single_graphic_window_t1

0x84ce,	// (0x000536f4) popup_snote_single_graphic_window_t2_ParamLimits

0x84ce,	// (0x000536f4) popup_snote_single_graphic_window_t2

0x84e1,	// (0x00053707) popup_snote_single_graphic_window_t3_ParamLimits

0x84e1,	// (0x00053707) popup_snote_single_graphic_window_t3

0x851a,	// (0x00053740) popup_snote_single_graphic_window_t4_ParamLimits

0x851a,	// (0x00053740) popup_snote_single_graphic_window_t4

0x854e,	// (0x00053774) popup_snote_single_graphic_window_t5_ParamLimits

0x854e,	// (0x00053774) popup_snote_single_graphic_window_t5

0x0004,

0xf5bc,	// (0x0005a7e2) popup_snote_single_graphic_window_t_ParamLimits

0xf5bc,	// (0x0005a7e2) popup_snote_single_graphic_window_t

0xb1ec,	// (0x00056412) grid_graphic_popup_pane_ParamLimits

0xb1ec,	// (0x00056412) grid_graphic_popup_pane

0xb214,	// (0x0005643a) listscroll_popup_graphic_pane_g1_ParamLimits

0xb214,	// (0x0005643a) listscroll_popup_graphic_pane_g1

0xb228,	// (0x0005644e) listscroll_popup_graphic_pane_g2_ParamLimits

0xb228,	// (0x0005644e) listscroll_popup_graphic_pane_g2

0x0001,

0xf9bb,	// (0x0005abe1) listscroll_popup_graphic_pane_g_ParamLimits

0xf9bb,	// (0x0005abe1) listscroll_popup_graphic_pane_g

0xb23c,	// (0x00056462) scroll_pane_cp5

0xb195,	// (0x000563bb) cell_graphic_popup_pane_ParamLimits

0xb195,	// (0x000563bb) cell_graphic_popup_pane

0xb176,	// (0x0005639c) cell_graphic_popup_pane_g1

0xb17e,	// (0x000563a4) cell_graphic_popup_pane_g2

0x83a1,	// (0x000535c7) cell_graphic_popup_pane_g3

0x0002,

0xf9b4,	// (0x0005abda) cell_graphic_popup_pane_g

0xb187,	// (0x000563ad) cell_graphic_popup_pane_t2

0x83aa,	// (0x000535d0) grid_highlight_pane_cp3

0x858f,	// (0x000537b5) list_gen_pane_ParamLimits

0x858f,	// (0x000537b5) list_gen_pane

0x85c1,	// (0x000537e7) scroll_pane

0xb0ce,	// (0x000562f4) bg_list_pane_g1_ParamLimits

0xb0ce,	// (0x000562f4) bg_list_pane_g1

0xb0eb,	// (0x00056311) bg_list_pane_g2_ParamLimits

0xb0eb,	// (0x00056311) bg_list_pane_g2

0xb100,	// (0x00056326) bg_list_pane_g3_ParamLimits

0xb100,	// (0x00056326) bg_list_pane_g3

0xb114,	// (0x0005633a) bg_list_pane_g4_ParamLimits

0xb114,	// (0x0005633a) bg_list_pane_g4

0xb128,	// (0x0005634e) bg_list_pane_g5_ParamLimits

0xb128,	// (0x0005634e) bg_list_pane_g5

0x0004,

0xf9a9,	// (0x0005abcf) bg_list_pane_g_ParamLimits

0xf9a9,	// (0x0005abcf) bg_list_pane_g

0x7de1,	// (0x00053007) list_double2_graphic_large_graphic_pane_ParamLimits

0x7de1,	// (0x00053007) list_double2_graphic_large_graphic_pane

0x7de1,	// (0x00053007) list_double2_graphic_pane_ParamLimits

0x7de1,	// (0x00053007) list_double2_graphic_pane

0x7de1,	// (0x00053007) list_double2_large_graphic_pane_ParamLimits

0x7de1,	// (0x00053007) list_double2_large_graphic_pane

0x7de1,	// (0x00053007) list_double2_pane_ParamLimits

0x7de1,	// (0x00053007) list_double2_pane

0x7de1,	// (0x00053007) list_double_graphic_heading_pane_ParamLimits

0x7de1,	// (0x00053007) list_double_graphic_heading_pane

0x7de1,	// (0x00053007) list_double_graphic_pane_ParamLimits

0x7de1,	// (0x00053007) list_double_graphic_pane

0x7de1,	// (0x00053007) list_double_heading_pane_ParamLimits

0x7de1,	// (0x00053007) list_double_heading_pane

0x7de1,	// (0x00053007) list_double_large_graphic_pane_ParamLimits

0x7de1,	// (0x00053007) list_double_large_graphic_pane

0x7de1,	// (0x00053007) list_double_number_pane_ParamLimits

0x7de1,	// (0x00053007) list_double_number_pane

0x7de1,	// (0x00053007) list_double_pane_ParamLimits

0x7de1,	// (0x00053007) list_double_pane

0x7de1,	// (0x00053007) list_double_time_pane_ParamLimits

0x7de1,	// (0x00053007) list_double_time_pane

0x7de1,	// (0x00053007) list_setting_number_pane_ParamLimits

0x7de1,	// (0x00053007) list_setting_number_pane

0x7de1,	// (0x00053007) list_setting_pane_ParamLimits

0x7de1,	// (0x00053007) list_setting_pane

0x7e1a,	// (0x00053040) list_single_2graphic_pane_ParamLimits

0x7e1a,	// (0x00053040) list_single_2graphic_pane

0x7e1a,	// (0x00053040) list_single_graphic_heading_pane_ParamLimits

0x7e1a,	// (0x00053040) list_single_graphic_heading_pane

0x7e1a,	// (0x00053040) list_single_graphic_pane_ParamLimits

0x7e1a,	// (0x00053040) list_single_graphic_pane

0x7e1a,	// (0x00053040) list_single_heading_pane_ParamLimits

0x7e1a,	// (0x00053040) list_single_heading_pane

0x7e58,	// (0x0005307e) list_single_large_graphic_pane_ParamLimits

0x7e58,	// (0x0005307e) list_single_large_graphic_pane

0x7e1a,	// (0x00053040) list_single_number_heading_pane_ParamLimits

0x7e1a,	// (0x00053040) list_single_number_heading_pane

0x7e1a,	// (0x00053040) list_single_number_pane_ParamLimits

0x7e1a,	// (0x00053040) list_single_number_pane

0x7e1a,	// (0x00053040) list_single_pane_ParamLimits

0x7e1a,	// (0x00053040) list_single_pane

0x76f0,	// (0x00052916) list_highlight_pane_cp1

0x7ced,	// (0x00052f13) list_single_pane_g1_ParamLimits

0x7ced,	// (0x00052f13) list_single_pane_g1

0x7cf9,	// (0x00052f1f) list_single_pane_g2_ParamLimits

0x7cf9,	// (0x00052f1f) list_single_pane_g2

0x0001,

0xf5d8,	// (0x0005a7fe) list_single_pane_g_ParamLimits

0xf5d8,	// (0x0005a7fe) list_single_pane_g

0x652b,	// (0x00051751) list_single_pane_t1_ParamLimits

0x652b,	// (0x00051751) list_single_pane_t1

0x7ced,	// (0x00052f13) list_single_number_pane_g1_ParamLimits

0x7ced,	// (0x00052f13) list_single_number_pane_g1

0x7cf9,	// (0x00052f1f) list_single_number_pane_g2_ParamLimits

0x7cf9,	// (0x00052f1f) list_single_number_pane_g2

0x0001,

0xf5d8,	// (0x0005a7fe) list_single_number_pane_g_ParamLimits

0xf5d8,	// (0x0005a7fe) list_single_number_pane_g

0x645b,	// (0x00051681) list_single_number_pane_t1_ParamLimits

0x645b,	// (0x00051681) list_single_number_pane_t1

0x6471,	// (0x00051697) list_single_number_pane_t2_ParamLimits

0x6471,	// (0x00051697) list_single_number_pane_t2

0x0001,

0xf96a,	// (0x0005ab90) list_single_number_pane_t_ParamLimits

0xf96a,	// (0x0005ab90) list_single_number_pane_t

0x4d74,	// (0x0004ff9a) list_single_graphic_pane_g1_ParamLimits

0x4d74,	// (0x0004ff9a) list_single_graphic_pane_g1

0x7ced,	// (0x00052f13) list_single_graphic_pane_g2_ParamLimits

0x7ced,	// (0x00052f13) list_single_graphic_pane_g2

0x7cf9,	// (0x00052f1f) list_single_graphic_pane_g3_ParamLimits

0x7cf9,	// (0x00052f1f) list_single_graphic_pane_g3

0x0002,

0xf5c7,	// (0x0005a7ed) list_single_graphic_pane_g_ParamLimits

0xf5c7,	// (0x0005a7ed) list_single_graphic_pane_g

0x4d80,	// (0x0004ffa6) list_single_graphic_pane_t1_ParamLimits

0x4d80,	// (0x0004ffa6) list_single_graphic_pane_t1

0x4d96,	// (0x0004ffbc) list_single_heading_pane_g1_ParamLimits

0x4d96,	// (0x0004ffbc) list_single_heading_pane_g1

0x7cf9,	// (0x00052f1f) list_single_heading_pane_g2_ParamLimits

0x7cf9,	// (0x00052f1f) list_single_heading_pane_g2

0x0001,

0xf5ce,	// (0x0005a7f4) list_single_heading_pane_g_ParamLimits

0xf5ce,	// (0x0005a7f4) list_single_heading_pane_g

0x4da9,	// (0x0004ffcf) list_single_heading_pane_t1_ParamLimits

0x4da9,	// (0x0004ffcf) list_single_heading_pane_t1

0x7d05,	// (0x00052f2b) list_single_heading_pane_t2_ParamLimits

0x7d05,	// (0x00052f2b) list_single_heading_pane_t2

0x0001,

0xf5d3,	// (0x0005a7f9) list_single_heading_pane_t_ParamLimits

0xf5d3,	// (0x0005a7f9) list_single_heading_pane_t

0x7ced,	// (0x00052f13) list_single_number_heading_pane_g1_ParamLimits

0x7ced,	// (0x00052f13) list_single_number_heading_pane_g1

0x7cf9,	// (0x00052f1f) list_single_number_heading_pane_g2_ParamLimits

0x7cf9,	// (0x00052f1f) list_single_number_heading_pane_g2

0x0001,

0xf5d8,	// (0x0005a7fe) list_single_number_heading_pane_g_ParamLimits

0xf5d8,	// (0x0005a7fe) list_single_number_heading_pane_g

0x4dbf,	// (0x0004ffe5) list_single_number_heading_pane_t1_ParamLimits

0x4dbf,	// (0x0004ffe5) list_single_number_heading_pane_t1

0x4dd5,	// (0x0004fffb) list_single_number_heading_pane_t2_ParamLimits

0x4dd5,	// (0x0004fffb) list_single_number_heading_pane_t2

0x4de7,	// (0x0005000d) list_single_number_heading_pane_t3_ParamLimits

0x4de7,	// (0x0005000d) list_single_number_heading_pane_t3

0x0002,

0xf5dd,	// (0x0005a803) list_single_number_heading_pane_t_ParamLimits

0xf5dd,	// (0x0005a803) list_single_number_heading_pane_t

0x4df9,	// (0x0005001f) list_single_graphic_heading_pane_g1_ParamLimits

0x4df9,	// (0x0005001f) list_single_graphic_heading_pane_g1

0x7d17,	// (0x00052f3d) list_single_graphic_heading_pane_g4_ParamLimits

0x7d17,	// (0x00052f3d) list_single_graphic_heading_pane_g4

0x7cf9,	// (0x00052f1f) list_single_graphic_heading_pane_g5_ParamLimits

0x7cf9,	// (0x00052f1f) list_single_graphic_heading_pane_g5

0x0002,

0xf5e4,	// (0x0005a80a) list_single_graphic_heading_pane_g_ParamLimits

0xf5e4,	// (0x0005a80a) list_single_graphic_heading_pane_g

0x4dbf,	// (0x0004ffe5) list_single_graphic_heading_pane_t1_ParamLimits

0x4dbf,	// (0x0004ffe5) list_single_graphic_heading_pane_t1

0x4e11,	// (0x00050037) list_single_graphic_heading_pane_t2_ParamLimits

0x4e11,	// (0x00050037) list_single_graphic_heading_pane_t2

0x0001,

0xf5eb,	// (0x0005a811) list_single_graphic_heading_pane_t_ParamLimits

0xf5eb,	// (0x0005a811) list_single_graphic_heading_pane_t

0x7d28,	// (0x00052f4e) list_single_large_graphic_pane_g1_ParamLimits

0x7d28,	// (0x00052f4e) list_single_large_graphic_pane_g1

0x7d34,	// (0x00052f5a) list_single_large_graphic_pane_g2_ParamLimits

0x7d34,	// (0x00052f5a) list_single_large_graphic_pane_g2

0x7d40,	// (0x00052f66) list_single_large_graphic_pane_g3_ParamLimits

0x7d40,	// (0x00052f66) list_single_large_graphic_pane_g3

0x0002,

0xf5f0,	// (0x0005a816) list_single_large_graphic_pane_g_ParamLimits

0xf5f0,	// (0x0005a816) list_single_large_graphic_pane_g

0xa121,	// (0x00055347) wait_border_pane_g2_copy1

0x7d4c,	// (0x00052f72) list_single_large_graphic_pane_g4_cp2

0x4e27,	// (0x0005004d) list_single_large_graphic_pane_t1_ParamLimits

0x4e27,	// (0x0005004d) list_single_large_graphic_pane_t1

0x85f5,	// (0x0005381b) list_double_pane_g1_ParamLimits

0x85f5,	// (0x0005381b) list_double_pane_g1

0x7d54,	// (0x00052f7a) list_double_pane_g2_ParamLimits

0x7d54,	// (0x00052f7a) list_double_pane_g2

0x0001,

0xf5f7,	// (0x0005a81d) list_double_pane_g_ParamLimits

0xf5f7,	// (0x0005a81d) list_double_pane_g

0x4e3d,	// (0x00050063) list_double_pane_t1_ParamLimits

0x4e3d,	// (0x00050063) list_double_pane_t1

0x4e53,	// (0x00050079) list_double_pane_t2_ParamLimits

0x4e53,	// (0x00050079) list_double_pane_t2

0x0001,

0xf5fc,	// (0x0005a822) list_double_pane_t_ParamLimits

0xf5fc,	// (0x0005a822) list_double_pane_t

0x4e65,	// (0x0005008b) list_double2_pane_g1_ParamLimits

0x4e65,	// (0x0005008b) list_double2_pane_g1

0x4e76,	// (0x0005009c) list_double2_pane_g2_ParamLimits

0x4e76,	// (0x0005009c) list_double2_pane_g2

0x0001,

0xf601,	// (0x0005a827) list_double2_pane_g_ParamLimits

0xf601,	// (0x0005a827) list_double2_pane_g

0x4e82,	// (0x000500a8) list_double2_pane_t1_ParamLimits

0x4e82,	// (0x000500a8) list_double2_pane_t1

0x4e98,	// (0x000500be) list_double2_pane_t2_ParamLimits

0x4e98,	// (0x000500be) list_double2_pane_t2

0x0001,

0xf606,	// (0x0005a82c) list_double2_pane_t_ParamLimits

0xf606,	// (0x0005a82c) list_double2_pane_t

0x85f5,	// (0x0005381b) list_double_number_pane_g1_ParamLimits

0x85f5,	// (0x0005381b) list_double_number_pane_g1

0x7d54,	// (0x00052f7a) list_double_number_pane_g2_ParamLimits

0x7d54,	// (0x00052f7a) list_double_number_pane_g2

0x0001,

0xf5f7,	// (0x0005a81d) list_double_number_pane_g_ParamLimits

0xf5f7,	// (0x0005a81d) list_double_number_pane_g

0x4eaa,	// (0x000500d0) list_double_number_pane_t1_ParamLimits

0x4eaa,	// (0x000500d0) list_double_number_pane_t1

0x4ebc,	// (0x000500e2) list_double_number_pane_t2_ParamLimits

0x4ebc,	// (0x000500e2) list_double_number_pane_t2

0x4ed2,	// (0x000500f8) list_double_number_pane_t3_ParamLimits

0x4ed2,	// (0x000500f8) list_double_number_pane_t3

0x0002,

0xf60b,	// (0x0005a831) list_double_number_pane_t_ParamLimits

0xf60b,	// (0x0005a831) list_double_number_pane_t

0x4ee4,	// (0x0005010a) list_double_graphic_pane_g1_ParamLimits

0x4ee4,	// (0x0005010a) list_double_graphic_pane_g1

0x4ef0,	// (0x00050116) list_double_graphic_pane_g2_ParamLimits

0x4ef0,	// (0x00050116) list_double_graphic_pane_g2

0x4eff,	// (0x00050125) list_double_graphic_pane_g3_ParamLimits

0x4eff,	// (0x00050125) list_double_graphic_pane_g3

0x0003,

0xf612,	// (0x0005a838) list_double_graphic_pane_g_ParamLimits

0xf612,	// (0x0005a838) list_double_graphic_pane_g

0x4f17,	// (0x0005013d) list_double_graphic_pane_t1_ParamLimits

0x4f17,	// (0x0005013d) list_double_graphic_pane_t1

0x4f2d,	// (0x00050153) list_double_graphic_pane_t2_ParamLimits

0x4f2d,	// (0x00050153) list_double_graphic_pane_t2

0x0001,

0xf61b,	// (0x0005a841) list_double_graphic_pane_t_ParamLimits

0xf61b,	// (0x0005a841) list_double_graphic_pane_t

0x4f3f,	// (0x00050165) list_double2_graphic_pane_g1_ParamLimits

0x4f3f,	// (0x00050165) list_double2_graphic_pane_g1

0x8f36,	// (0x0005415c) list_double2_graphic_pane_g2_ParamLimits

0x8f36,	// (0x0005415c) list_double2_graphic_pane_g2

0x7d60,	// (0x00052f86) list_double2_graphic_pane_g3_ParamLimits

0x7d60,	// (0x00052f86) list_double2_graphic_pane_g3

0x0002,

0xf620,	// (0x0005a846) list_double2_graphic_pane_g_ParamLimits

0xf620,	// (0x0005a846) list_double2_graphic_pane_g

0x4f4b,	// (0x00050171) list_double2_graphic_pane_t1_ParamLimits

0x4f4b,	// (0x00050171) list_double2_graphic_pane_t1

0x4f61,	// (0x00050187) list_double2_graphic_pane_t2_ParamLimits

0x4f61,	// (0x00050187) list_double2_graphic_pane_t2

0x0001,

0xf627,	// (0x0005a84d) list_double2_graphic_pane_t_ParamLimits

0xf627,	// (0x0005a84d) list_double2_graphic_pane_t

0x4f73,	// (0x00050199) list_double_large_graphic_pane_g1_ParamLimits

0x4f73,	// (0x00050199) list_double_large_graphic_pane_g1

0x4f9c,	// (0x000501c2) list_double_large_graphic_pane_g2_ParamLimits

0x4f9c,	// (0x000501c2) list_double_large_graphic_pane_g2

0x7d54,	// (0x00052f7a) list_double_large_graphic_pane_g3_ParamLimits

0x7d54,	// (0x00052f7a) list_double_large_graphic_pane_g3

0x4fb2,	// (0x000501d8) list_double_large_graphic_pane_g4_ParamLimits

0x4fb2,	// (0x000501d8) list_double_large_graphic_pane_g4

0x0004,

0xf62c,	// (0x0005a852) list_double_large_graphic_pane_g_ParamLimits

0xf62c,	// (0x0005a852) list_double_large_graphic_pane_g

0x4fc3,	// (0x000501e9) list_double_large_graphic_pane_t1_ParamLimits

0x4fc3,	// (0x000501e9) list_double_large_graphic_pane_t1

0x4fdc,	// (0x00050202) list_double_large_graphic_pane_t2_ParamLimits

0x4fdc,	// (0x00050202) list_double_large_graphic_pane_t2

0x0001,

0xf637,	// (0x0005a85d) list_double_large_graphic_pane_t_ParamLimits

0xf637,	// (0x0005a85d) list_double_large_graphic_pane_t

0x7d81,	// (0x00052fa7) list_double2_large_graphic_pane_g1_ParamLimits

0x7d81,	// (0x00052fa7) list_double2_large_graphic_pane_g1

0x4fee,	// (0x00050214) list_double2_large_graphic_pane_g2_ParamLimits

0x4fee,	// (0x00050214) list_double2_large_graphic_pane_g2

0x7d60,	// (0x00052f86) list_double2_large_graphic_pane_g3_ParamLimits

0x7d60,	// (0x00052f86) list_double2_large_graphic_pane_g3

0x0002,

0xf63c,	// (0x0005a862) list_double2_large_graphic_pane_g_ParamLimits

0xf63c,	// (0x0005a862) list_double2_large_graphic_pane_g

0x4fff,	// (0x00050225) list_double2_large_graphic_pane_t1_ParamLimits

0x4fff,	// (0x00050225) list_double2_large_graphic_pane_t1

0x5015,	// (0x0005023b) list_double2_large_graphic_pane_t2_ParamLimits

0x5015,	// (0x0005023b) list_double2_large_graphic_pane_t2

0x0001,

0xf643,	// (0x0005a869) list_double2_large_graphic_pane_t_ParamLimits

0xf643,	// (0x0005a869) list_double2_large_graphic_pane_t

0x5027,	// (0x0005024d) list_double_heading_pane_g1_ParamLimits

0x5027,	// (0x0005024d) list_double_heading_pane_g1

0x7d8d,	// (0x00052fb3) list_double_heading_pane_g2_ParamLimits

0x7d8d,	// (0x00052fb3) list_double_heading_pane_g2

0x0001,

0xf648,	// (0x0005a86e) list_double_heading_pane_g_ParamLimits

0xf648,	// (0x0005a86e) list_double_heading_pane_g

0x5038,	// (0x0005025e) list_double_heading_pane_t1_ParamLimits

0x5038,	// (0x0005025e) list_double_heading_pane_t1

0x4e98,	// (0x000500be) list_double_heading_pane_t2_ParamLimits

0x4e98,	// (0x000500be) list_double_heading_pane_t2

0x0001,

0xf64d,	// (0x0005a873) list_double_heading_pane_t_ParamLimits

0xf64d,	// (0x0005a873) list_double_heading_pane_t

0x504e,	// (0x00050274) list_double_graphic_heading_pane_g1_ParamLimits

0x504e,	// (0x00050274) list_double_graphic_heading_pane_g1

0x5027,	// (0x0005024d) list_double_graphic_heading_pane_g2_ParamLimits

0x5027,	// (0x0005024d) list_double_graphic_heading_pane_g2

0x7d8d,	// (0x00052fb3) list_double_graphic_heading_pane_g3_ParamLimits

0x7d8d,	// (0x00052fb3) list_double_graphic_heading_pane_g3

0x0002,

0xf652,	// (0x0005a878) list_double_graphic_heading_pane_g_ParamLimits

0xf652,	// (0x0005a878) list_double_graphic_heading_pane_g

0x505a,	// (0x00050280) list_double_graphic_heading_pane_t1_ParamLimits

0x505a,	// (0x00050280) list_double_graphic_heading_pane_t1

0x4f61,	// (0x00050187) list_double_graphic_heading_pane_t2_ParamLimits

0x4f61,	// (0x00050187) list_double_graphic_heading_pane_t2

0x0001,

0xf659,	// (0x0005a87f) list_double_graphic_heading_pane_t_ParamLimits

0xf659,	// (0x0005a87f) list_double_graphic_heading_pane_t

0x5070,	// (0x00050296) list_double_time_pane_g1_ParamLimits

0x5070,	// (0x00050296) list_double_time_pane_g1

0x5081,	// (0x000502a7) list_double_time_pane_g2_ParamLimits

0x5081,	// (0x000502a7) list_double_time_pane_g2

0x0001,

0xf65e,	// (0x0005a884) list_double_time_pane_g_ParamLimits

0xf65e,	// (0x0005a884) list_double_time_pane_g

0x508d,	// (0x000502b3) list_double_time_pane_t1_ParamLimits

0x508d,	// (0x000502b3) list_double_time_pane_t1

0x50a3,	// (0x000502c9) list_double_time_pane_t2_ParamLimits

0x50a3,	// (0x000502c9) list_double_time_pane_t2

0x50b5,	// (0x000502db) list_double_time_pane_t3_ParamLimits

0x50b5,	// (0x000502db) list_double_time_pane_t3

0x50c7,	// (0x000502ed) list_double_time_pane_t4_ParamLimits

0x50c7,	// (0x000502ed) list_double_time_pane_t4

0x0003,

0xf663,	// (0x0005a889) list_double_time_pane_t_ParamLimits

0xf663,	// (0x0005a889) list_double_time_pane_t

0x50d9,	// (0x000502ff) list_setting_pane_g1_ParamLimits

0x50d9,	// (0x000502ff) list_setting_pane_g1

0x4e76,	// (0x0005009c) list_setting_pane_g2_ParamLimits

0x4e76,	// (0x0005009c) list_setting_pane_g2

0x0001,

0xf66c,	// (0x0005a892) list_setting_pane_g_ParamLimits

0xf66c,	// (0x0005a892) list_setting_pane_g

0x50e5,	// (0x0005030b) list_setting_pane_t1_ParamLimits

0x50e5,	// (0x0005030b) list_setting_pane_t1

0x50ff,	// (0x00050325) list_setting_pane_t2_ParamLimits

0x50ff,	// (0x00050325) list_setting_pane_t2

0x0002,

0xf671,	// (0x0005a897) list_setting_pane_t_ParamLimits

0xf671,	// (0x0005a897) list_setting_pane_t

0x513e,	// (0x00050364) set_value_pane_cp_ParamLimits

0x513e,	// (0x00050364) set_value_pane_cp

0x514a,	// (0x00050370) list_setting_number_pane_g1_ParamLimits

0x514a,	// (0x00050370) list_setting_number_pane_g1

0x5156,	// (0x0005037c) list_setting_number_pane_g2_ParamLimits

0x5156,	// (0x0005037c) list_setting_number_pane_g2

0x0001,

0xf678,	// (0x0005a89e) list_setting_number_pane_g_ParamLimits

0xf678,	// (0x0005a89e) list_setting_number_pane_g

0x5162,	// (0x00050388) list_setting_number_pane_t1_ParamLimits

0x5162,	// (0x00050388) list_setting_number_pane_t1

0x517b,	// (0x000503a1) list_setting_number_pane_t2_ParamLimits

0x517b,	// (0x000503a1) list_setting_number_pane_t2

0x5195,	// (0x000503bb) list_setting_number_pane_t3_ParamLimits

0x5195,	// (0x000503bb) list_setting_number_pane_t3

0x0003,

0xf67d,	// (0x0005a8a3) list_setting_number_pane_t_ParamLimits

0xf67d,	// (0x0005a8a3) list_setting_number_pane_t

0x513e,	// (0x00050364) set_value_pane_ParamLimits

0x513e,	// (0x00050364) set_value_pane

0x8601,	// (0x00053827) bg_set_opt_pane_ParamLimits

0x8601,	// (0x00053827) bg_set_opt_pane

0x51d8,	// (0x000503fe) set_value_pane_t1

0x8622,	// (0x00053848) slider_set_pane_cp3

0x862b,	// (0x00053851) volume_small_pane_cp

0x8634,	// (0x0005385a) list_form_gen_pane

0x863d,	// (0x00053863) scroll_pane_cp8

0x51ee,	// (0x00050414) form_field_data_pane_ParamLimits

0x51ee,	// (0x00050414) form_field_data_pane

0x5212,	// (0x00050438) form_field_data_wide_pane_ParamLimits

0x5212,	// (0x00050438) form_field_data_wide_pane

0x5235,	// (0x0005045b) form_field_popup_pane_ParamLimits

0x5235,	// (0x0005045b) form_field_popup_pane

0x5255,	// (0x0005047b) form_field_popup_wide_pane_ParamLimits

0x5255,	// (0x0005047b) form_field_popup_wide_pane

0x5274,	// (0x0005049a) form_field_slider_pane_ParamLimits

0x5274,	// (0x0005049a) form_field_slider_pane

0x5287,	// (0x000504ad) form_field_slider_wide_pane_ParamLimits

0x5287,	// (0x000504ad) form_field_slider_wide_pane

0x864e,	// (0x00053874) data_form_pane

0x52a4,	// (0x000504ca) form_field_data_pane_t1

0x865a,	// (0x00053880) input_focus_pane

0x52bc,	// (0x000504e2) data_form_wide_pane

0x52d9,	// (0x000504ff) form_field_data_wide_pane_t1

0x83bf,	// (0x000535e5) input_focus_pane_cp6

0x52fb,	// (0x00050521) form_field_popup_pane_t1

0x865a,	// (0x00053880) input_focus_pane_cp7

0x867c,	// (0x000538a2) list_form_pane

0x531b,	// (0x00050541) form_field_popup_wide_pane_t1

0x865a,	// (0x00053880) input_focus_pane_cp8

0x8688,	// (0x000538ae) list_form_wide_pane

0x5338,	// (0x0005055e) form_field_slider_pane_t1_ParamLimits

0x5338,	// (0x0005055e) form_field_slider_pane_t1

0x534e,	// (0x00050574) form_field_slider_pane_t2_ParamLimits

0x534e,	// (0x00050574) form_field_slider_pane_t2

0x0001,

0xf68d,	// (0x0005a8b3) form_field_slider_pane_t_ParamLimits

0xf68d,	// (0x0005a8b3) form_field_slider_pane_t

0x7a4b,	// (0x00052c71) input_focus_pane_cp9_ParamLimits

0x7a4b,	// (0x00052c71) input_focus_pane_cp9

0x5363,	// (0x00050589) slider_cont_pane_ParamLimits

0x5363,	// (0x00050589) slider_cont_pane

0x8697,	// (0x000538bd) form_field_slider_wide_pane_t1_ParamLimits

0x8697,	// (0x000538bd) form_field_slider_wide_pane_t1

0x5377,	// (0x0005059d) form_field_slider_wide_pane_t2_ParamLimits

0x5377,	// (0x0005059d) form_field_slider_wide_pane_t2

0x0001,

0xf692,	// (0x0005a8b8) form_field_slider_wide_pane_t_ParamLimits

0xf692,	// (0x0005a8b8) form_field_slider_wide_pane_t

0x7a4b,	// (0x00052c71) input_focus_pane_cp10_ParamLimits

0x7a4b,	// (0x00052c71) input_focus_pane_cp10

0x5389,	// (0x000505af) slider_cont_pane_cp1_ParamLimits

0x5389,	// (0x000505af) slider_cont_pane_cp1

0x539d,	// (0x000505c3) slider_form_pane_cp

0x86a9,	// (0x000538cf) input_focus_pane_g1

0x86b1,	// (0x000538d7) input_focus_pane_g2

0x86b9,	// (0x000538df) input_focus_pane_g3

0x86c1,	// (0x000538e7) input_focus_pane_g4

0x86c9,	// (0x000538ef) input_focus_pane_g5

0x86d1,	// (0x000538f7) input_focus_pane_g6

0x86d9,	// (0x000538ff) input_focus_pane_g7

0x86e1,	// (0x00053907) input_focus_pane_g8

0x86e9,	// (0x0005390f) input_focus_pane_g9

0x76e6,	// (0x0005290c) input_focus_pane_g10

0x0009,

0xf697,	// (0x0005a8bd) input_focus_pane_g

0xa12a,	// (0x00055350) wait_border_pane_g3_copy1

0x53a5,	// (0x000505cb) data_form_pane_t1

0x76e6,	// (0x0005290c) wait_anim_pane_g1_copy1

0x64fb,	// (0x00051721) data_form_wide_pane_t1

0x53c0,	// (0x000505e6) list_form_graphic_pane_cp_ParamLimits

0x53c0,	// (0x000505e6) list_form_graphic_pane_cp

0xb060,	// (0x00056286) slider_form_pane_g1

0xb069,	// (0x0005628f) slider_form_pane_g2

0x0006,

0xf99a,	// (0x0005abc0) slider_form_pane_g

0x53d9,	// (0x000505ff) list_form_graphic_pane_ParamLimits

0x53d9,	// (0x000505ff) list_form_graphic_pane

0x53f5,	// (0x0005061b) list_form_graphic_pane_g1

0x53fd,	// (0x00050623) list_form_graphic_pane_t1_ParamLimits

0x53fd,	// (0x00050623) list_form_graphic_pane_t1

0x77d0,	// (0x000529f6) list_highlight_pane_cp5_ParamLimits

0x77d0,	// (0x000529f6) list_highlight_pane_cp5

0x5412,	// (0x00050638) find_pane_g1

0x86f1,	// (0x00053917) input_find_pane

0x541b,	// (0x00050641) input_find_pane_g1_ParamLimits

0x541b,	// (0x00050641) input_find_pane_g1

0x5427,	// (0x0005064d) input_find_pane_t1_ParamLimits

0x5427,	// (0x0005064d) input_find_pane_t1

0x543c,	// (0x00050662) input_find_pane_t2_ParamLimits

0x543c,	// (0x00050662) input_find_pane_t2

0x0001,

0xf6ac,	// (0x0005a8d2) input_find_pane_t_ParamLimits

0xf6ac,	// (0x0005a8d2) input_find_pane_t

0x86fa,	// (0x00053920) input_focus_pane_cp5_ParamLimits

0x86fa,	// (0x00053920) input_focus_pane_cp5

0x8714,	// (0x0005393a) bg_popup_window_pane_cp2_ParamLimits

0x8714,	// (0x0005393a) bg_popup_window_pane_cp2

0x8721,	// (0x00053947) listscroll_menu_pane_ParamLimits

0x8721,	// (0x00053947) listscroll_menu_pane

0x872d,	// (0x00053953) popup_submenu_window_ParamLimits

0x872d,	// (0x00053953) popup_submenu_window

0x8759,	// (0x0005397f) find_popup_pane_g1

0x8761,	// (0x00053987) input_popup_find_pane_cp

0x86fa,	// (0x00053920) input_focus_pane_cp4_ParamLimits

0x86fa,	// (0x00053920) input_focus_pane_cp4

0x8777,	// (0x0005399d) input_popup_find_pane_t1_ParamLimits

0x8777,	// (0x0005399d) input_popup_find_pane_t1

0x76f0,	// (0x00052916) bg_popup_sub_pane_cp

0x87a5,	// (0x000539cb) listscroll_popup_sub_pane

0x87ad,	// (0x000539d3) list_submenu_pane_ParamLimits

0x87ad,	// (0x000539d3) list_submenu_pane

0x87be,	// (0x000539e4) scroll_pane_cp4

0x87c6,	// (0x000539ec) list_single_popup_submenu_pane_ParamLimits

0x87c6,	// (0x000539ec) list_single_popup_submenu_pane

0x87da,	// (0x00053a00) list_single_popup_submenu_pane_g1

0x87e2,	// (0x00053a08) list_single_popup_submenu_pane_t1_ParamLimits

0x87e2,	// (0x00053a08) list_single_popup_submenu_pane_t1

0x77d0,	// (0x000529f6) bg_active_tab_pane_cp1_ParamLimits

0x77d0,	// (0x000529f6) bg_active_tab_pane_cp1

0x87f7,	// (0x00053a1d) tabs_2_active_pane_g1

0x87ff,	// (0x00053a25) tabs_2_active_pane_t1

0x77d0,	// (0x000529f6) bg_passive_tab_pane_cp1_ParamLimits

0x77d0,	// (0x000529f6) bg_passive_tab_pane_cp1

0x87f7,	// (0x00053a1d) tabs_2_passive_pane_g1

0x87ff,	// (0x00053a25) tabs_2_passive_pane_t1

0x8811,	// (0x00053a37) bg_active_tab_pane_cp4

0x881f,	// (0x00053a45) tabs_2_long_active_pane_t1

0x8832,	// (0x00053a58) bg_passive_tab_pane_cp4

0x60ee,	// (0x00051314) list_single_midp_graphic_pane_g4_ParamLimits

0x8811,	// (0x00053a37) bg_active_tab_pane_cp5

0x883e,	// (0x00053a64) tabs_3_long_active_pane_t1

0x8832,	// (0x00053a58) bg_passive_tab_pane_cp5

0x60ee,	// (0x00051314) list_single_midp_graphic_pane_g4

0x77d0,	// (0x000529f6) bg_popup_window_pane_cp13_ParamLimits

0x77d0,	// (0x000529f6) bg_popup_window_pane_cp13

0x8859,	// (0x00053a7f) listscroll_popup_fast_pane_ParamLimits

0x8859,	// (0x00053a7f) listscroll_popup_fast_pane

0x8868,	// (0x00053a8e) grid_popup_fast_pane_ParamLimits

0x8868,	// (0x00053a8e) grid_popup_fast_pane

0x887a,	// (0x00053aa0) scroll_pane_cp9_ParamLimits

0x887a,	// (0x00053aa0) scroll_pane_cp9

0xc963,	// (0x00057b89) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc963,	// (0x00057b89) list_single_graphic_hl_pane_t1_cp2

0x889e,	// (0x00053ac4) input_focus_pane_cp20_ParamLimits

0x889e,	// (0x00053ac4) input_focus_pane_cp20

0x88ac,	// (0x00053ad2) query_popup_data_pane_t1_ParamLimits

0x88ac,	// (0x00053ad2) query_popup_data_pane_t1

0x88bf,	// (0x00053ae5) query_popup_data_pane_t2_ParamLimits

0x88bf,	// (0x00053ae5) query_popup_data_pane_t2

0x8905,	// (0x00053b2b) query_popup_data_pane_t3_ParamLimits

0x8905,	// (0x00053b2b) query_popup_data_pane_t3

0x8946,	// (0x00053b6c) query_popup_data_pane_t4_ParamLimits

0x8946,	// (0x00053b6c) query_popup_data_pane_t4

0x8982,	// (0x00053ba8) query_popup_data_pane_t5_ParamLimits

0x8982,	// (0x00053ba8) query_popup_data_pane_t5

0x0004,

0xf6b1,	// (0x0005a8d7) query_popup_data_pane_t_ParamLimits

0xf6b1,	// (0x0005a8d7) query_popup_data_pane_t

0x86a9,	// (0x000538cf) bg_set_opt_pane_g1

0x86b1,	// (0x000538d7) bg_set_opt_pane_g2

0x86b9,	// (0x000538df) bg_set_opt_pane_g3

0x86c1,	// (0x000538e7) bg_set_opt_pane_g4

0x86c9,	// (0x000538ef) bg_set_opt_pane_g5

0x86d1,	// (0x000538f7) bg_set_opt_pane_g6

0x86d9,	// (0x000538ff) bg_set_opt_pane_g7

0x86e1,	// (0x00053907) bg_set_opt_pane_g8

0x86e9,	// (0x0005390f) bg_set_opt_pane_g9

0x0008,

0xf6bc,	// (0x0005a8e2) bg_set_opt_pane_g

0x575c,	// (0x00050982) control_top_pane_stacon_ParamLimits

0x575c,	// (0x00050982) control_top_pane_stacon

0x57af,	// (0x000509d5) signal_pane_stacon_ParamLimits

0x57af,	// (0x000509d5) signal_pane_stacon

0x8f7c,	// (0x000541a2) stacon_top_pane_g1_ParamLimits

0x8f7c,	// (0x000541a2) stacon_top_pane_g1

0x57d4,	// (0x000509fa) title_pane_stacon_ParamLimits

0x57d4,	// (0x000509fa) title_pane_stacon

0x57fe,	// (0x00050a24) uni_indicator_pane_stacon_ParamLimits

0x57fe,	// (0x00050a24) uni_indicator_pane_stacon

0x5813,	// (0x00050a39) battery_pane_stacon_ParamLimits

0x5813,	// (0x00050a39) battery_pane_stacon

0x5857,	// (0x00050a7d) control_bottom_pane_stacon_ParamLimits

0x5857,	// (0x00050a7d) control_bottom_pane_stacon

0x587a,	// (0x00050aa0) navi_pane_stacon_ParamLimits

0x587a,	// (0x00050aa0) navi_pane_stacon

0x8f9e,	// (0x000541c4) stacon_bottom_pane_g1_ParamLimits

0x8f9e,	// (0x000541c4) stacon_bottom_pane_g1

0x5451,	// (0x00050677) aid_levels_signal_lsc_ParamLimits

0x5451,	// (0x00050677) aid_levels_signal_lsc

0x5467,	// (0x0005068d) signal_pane_stacon_g1_ParamLimits

0x5467,	// (0x0005068d) signal_pane_stacon_g1

0x547b,	// (0x000506a1) signal_pane_stacon_g2_ParamLimits

0x547b,	// (0x000506a1) signal_pane_stacon_g2

0x0001,

0xf6cf,	// (0x0005a8f5) signal_pane_stacon_g_ParamLimits

0xf6cf,	// (0x0005a8f5) signal_pane_stacon_g

0x54b0,	// (0x000506d6) title_pane_stacon_t1_ParamLimits

0x54b0,	// (0x000506d6) title_pane_stacon_t1

0x89c6,	// (0x00053bec) uni_indicator_pane_stacon_g1

0x89d0,	// (0x00053bf6) uni_indicator_pane_stacon_g2

0x89da,	// (0x00053c00) uni_indicator_pane_stacon_g3

0x89e4,	// (0x00053c0a) uni_indicator_pane_stacon_g4

0x0003,

0xf6db,	// (0x0005a901) uni_indicator_pane_stacon_g

0x54d5,	// (0x000506fb) control_top_pane_stacon_g1

0x54dd,	// (0x00050703) control_top_pane_stacon_t1_ParamLimits

0x54dd,	// (0x00050703) control_top_pane_stacon_t1

0x5514,	// (0x0005073a) aid_levels_battery_lsc_ParamLimits

0x5514,	// (0x0005073a) aid_levels_battery_lsc

0x552b,	// (0x00050751) battery_pane_stacon_g1_ParamLimits

0x552b,	// (0x00050751) battery_pane_stacon_g1

0x553e,	// (0x00050764) battery_pane_stacon_g2_ParamLimits

0x553e,	// (0x00050764) battery_pane_stacon_g2

0x0001,

0xf6e4,	// (0x0005a90a) battery_pane_stacon_g_ParamLimits

0xf6e4,	// (0x0005a90a) battery_pane_stacon_g

0x557c,	// (0x000507a2) navi_icon_pane_stacon

0x5590,	// (0x000507b6) navi_navi_pane_stacon

0x557c,	// (0x000507a2) navi_text_pane_stacon

0x54d5,	// (0x000506fb) control_bottom_pane_stacon_g1

0x55a4,	// (0x000507ca) control_bottom_pane_stacon_t1_ParamLimits

0x55a4,	// (0x000507ca) control_bottom_pane_stacon_t1

0x8a08,	// (0x00053c2e) grid_app_pane_ParamLimits

0x8a08,	// (0x00053c2e) grid_app_pane

0x8a2c,	// (0x00053c52) scroll_pane_cp15_ParamLimits

0x8a2c,	// (0x00053c52) scroll_pane_cp15

0x8a41,	// (0x00053c67) cell_app_pane_ParamLimits

0x8a41,	// (0x00053c67) cell_app_pane

0x8a65,	// (0x00053c8b) cell_app_pane_g1_ParamLimits

0x8a65,	// (0x00053c8b) cell_app_pane_g1

0x8a85,	// (0x00053cab) cell_app_pane_g2_ParamLimits

0x8a85,	// (0x00053cab) cell_app_pane_g2

0x0001,

0xf6e9,	// (0x0005a90f) cell_app_pane_g_ParamLimits

0xf6e9,	// (0x0005a90f) cell_app_pane_g

0x8a91,	// (0x00053cb7) cell_app_pane_t1_ParamLimits

0x8a91,	// (0x00053cb7) cell_app_pane_t1

0x8aa8,	// (0x00053cce) grid_highlight_pane_ParamLimits

0x8aa8,	// (0x00053cce) grid_highlight_pane

0x86a9,	// (0x000538cf) cell_highlight_pane_g1

0x86b1,	// (0x000538d7) cell_highlight_pane_g2

0x86b9,	// (0x000538df) cell_highlight_pane_g3

0x86c1,	// (0x000538e7) cell_highlight_pane_g4

0x86c9,	// (0x000538ef) cell_highlight_pane_g5

0x86d1,	// (0x000538f7) cell_highlight_pane_g6

0x86d9,	// (0x000538ff) cell_highlight_pane_g7

0x86e1,	// (0x00053907) cell_highlight_pane_g8

0x86e9,	// (0x0005390f) cell_highlight_pane_g9

0x76e6,	// (0x0005290c) cell_highlight_pane_g10

0x0009,

0xf697,	// (0x0005a8bd) cell_highlight_pane_g

0x8ab9,	// (0x00053cdf) bg_scroll_pane

0x55ee,	// (0x00050814) scroll_handle_pane

0x8b00,	// (0x00053d26) scroll_bg_pane_g1

0x8b15,	// (0x00053d3b) scroll_bg_pane_g2

0x8b2d,	// (0x00053d53) scroll_bg_pane_g3

0x0002,

0xf6ee,	// (0x0005a914) scroll_bg_pane_g

0x8b42,	// (0x00053d68) scroll_handle_focus_pane_ParamLimits

0x8b42,	// (0x00053d68) scroll_handle_focus_pane

0x8b00,	// (0x00053d26) scroll_handle_pane_g1

0x8b4f,	// (0x00053d75) scroll_handle_pane_g2

0x8b2d,	// (0x00053d53) scroll_handle_pane_g3

0x0002,

0xf6f5,	// (0x0005a91b) scroll_handle_pane_g

0x86fa,	// (0x00053920) bg_popup_sub_pane_cp21_ParamLimits

0x86fa,	// (0x00053920) bg_popup_sub_pane_cp21

0x8b63,	// (0x00053d89) popup_fep_japan_predictive_window_t1_ParamLimits

0x8b63,	// (0x00053d89) popup_fep_japan_predictive_window_t1

0x8b7d,	// (0x00053da3) popup_fep_japan_predictive_window_t2_ParamLimits

0x8b7d,	// (0x00053da3) popup_fep_japan_predictive_window_t2

0x8bb0,	// (0x00053dd6) popup_fep_japan_predictive_window_t3_ParamLimits

0x8bb0,	// (0x00053dd6) popup_fep_japan_predictive_window_t3

0x0002,

0xf6fc,	// (0x0005a922) popup_fep_japan_predictive_window_t_ParamLimits

0xf6fc,	// (0x0005a922) popup_fep_japan_predictive_window_t

0x76f0,	// (0x00052916) bg_popup_sub_pane_cp23

0x8be7,	// (0x00053e0d) listscroll_japin_cand_pane

0x8bef,	// (0x00053e15) popup_fep_japan_candidate_window_t1

0x8bfd,	// (0x00053e23) candidate_pane_ParamLimits

0x8bfd,	// (0x00053e23) candidate_pane

0x8c0f,	// (0x00053e35) scroll_pane_cp30

0x8c17,	// (0x00053e3d) list_single_popup_jap_candidate_pane_ParamLimits

0x8c17,	// (0x00053e3d) list_single_popup_jap_candidate_pane

0x76f0,	// (0x00052916) list_highlight_pane_cp30

0x8c2c,	// (0x00053e52) list_single_popup_jap_candidate_pane_t1

0x8c3b,	// (0x00053e61) level_1_signal

0x8c4d,	// (0x00053e73) level_2_signal

0x8c60,	// (0x00053e86) level_3_signal

0x8c73,	// (0x00053e99) level_4_signal

0x8c86,	// (0x00053eac) level_5_signal

0x8c99,	// (0x00053ebf) level_6_signal

0x8cac,	// (0x00053ed2) level_7_signal

0x8c3b,	// (0x00053e61) level_1_battery

0x8c4d,	// (0x00053e73) level_2_battery

0x8c60,	// (0x00053e86) level_3_battery

0x8c73,	// (0x00053e99) level_4_battery

0x8c86,	// (0x00053eac) level_5_battery

0x8c99,	// (0x00053ebf) level_6_battery

0x8cac,	// (0x00053ed2) level_7_battery

0x8cd7,	// (0x00053efd) list_menu_pane_ParamLimits

0x8cd7,	// (0x00053efd) list_menu_pane

0x8ced,	// (0x00053f13) scroll_pane_cp25_ParamLimits

0x8ced,	// (0x00053f13) scroll_pane_cp25

0x8d06,	// (0x00053f2c) list_double2_graphic_pane_cp2_ParamLimits

0x8d06,	// (0x00053f2c) list_double2_graphic_pane_cp2

0x8d06,	// (0x00053f2c) list_double2_large_graphic_pane_cp2_ParamLimits

0x8d06,	// (0x00053f2c) list_double2_large_graphic_pane_cp2

0x8d06,	// (0x00053f2c) list_double2_pane_cp2_ParamLimits

0x8d06,	// (0x00053f2c) list_double2_pane_cp2

0x8d06,	// (0x00053f2c) list_double_graphic_pane_cp2_ParamLimits

0x8d06,	// (0x00053f2c) list_double_graphic_pane_cp2

0x8d06,	// (0x00053f2c) list_double_large_graphic_pane_cp2_ParamLimits

0x8d06,	// (0x00053f2c) list_double_large_graphic_pane_cp2

0x8d06,	// (0x00053f2c) list_double_number_pane_cp2_ParamLimits

0x8d06,	// (0x00053f2c) list_double_number_pane_cp2

0x8d06,	// (0x00053f2c) list_double_pane_cp2_ParamLimits

0x8d06,	// (0x00053f2c) list_double_pane_cp2

0x8d2a,	// (0x00053f50) list_single_2graphic_pane_cp2_ParamLimits

0x8d2a,	// (0x00053f50) list_single_2graphic_pane_cp2

0x8d2a,	// (0x00053f50) list_single_graphic_heading_pane_cp2_ParamLimits

0x8d2a,	// (0x00053f50) list_single_graphic_heading_pane_cp2

0x8d2a,	// (0x00053f50) list_single_graphic_pane_cp2_ParamLimits

0x8d2a,	// (0x00053f50) list_single_graphic_pane_cp2

0x8d2a,	// (0x00053f50) list_single_heading_pane_cp2_ParamLimits

0x8d2a,	// (0x00053f50) list_single_heading_pane_cp2

0x8d43,	// (0x00053f69) list_single_large_graphic_pane_cp2_ParamLimits

0x8d43,	// (0x00053f69) list_single_large_graphic_pane_cp2

0x8d2a,	// (0x00053f50) list_single_number_heading_pane_cp2_ParamLimits

0x8d2a,	// (0x00053f50) list_single_number_heading_pane_cp2

0x8d2a,	// (0x00053f50) list_single_number_pane_cp2_ParamLimits

0x8d2a,	// (0x00053f50) list_single_number_pane_cp2

0x8d2a,	// (0x00053f50) list_single_pane_cp2_ParamLimits

0x8d2a,	// (0x00053f50) list_single_pane_cp2

0x8dbf,	// (0x00053fe5) bg_popup_sub_pane_cp22

0x56a0,	// (0x000508c6) popup_side_volume_key_window_g1

0x56ca,	// (0x000508f0) popup_side_volume_key_window_t1

0x56e6,	// (0x0005090c) volume_small_pane_cp1

0x7a4b,	// (0x00052c71) bg_popup_sub_pane_cp24_ParamLimits

0x7a4b,	// (0x00052c71) bg_popup_sub_pane_cp24

0x8dd5,	// (0x00053ffb) fep_china_uni_candidate_pane_ParamLimits

0x8dd5,	// (0x00053ffb) fep_china_uni_candidate_pane

0x8de9,	// (0x0005400f) fep_china_uni_entry_pane

0x8df9,	// (0x0005401f) popup_fep_china_uni_window_g1

0x8e15,	// (0x0005403b) fep_china_uni_entry_pane_g1

0x8e1d,	// (0x00054043) fep_china_uni_entry_pane_g2

0x0001,

0xf72d,	// (0x0005a953) fep_china_uni_entry_pane_g

0x8e25,	// (0x0005404b) fep_entry_item_pane

0x8e2f,	// (0x00054055) fep_candidate_item_pane

0x8e37,	// (0x0005405d) fep_china_uni_candidate_pane_g1

0x8e3f,	// (0x00054065) fep_china_uni_candidate_pane_g2

0x8e47,	// (0x0005406d) fep_china_uni_candidate_pane_g3

0x8e4f,	// (0x00054075) fep_china_uni_candidate_pane_g4

0x0003,

0xf732,	// (0x0005a958) fep_china_uni_candidate_pane_g

0x76e6,	// (0x0005290c) fep_entry_item_pane_g1

0x8e57,	// (0x0005407d) fep_entry_item_pane_t1_ParamLimits

0x8e57,	// (0x0005407d) fep_entry_item_pane_t1

0x8e6d,	// (0x00054093) fep_candidate_item_pane_t1_ParamLimits

0x8e6d,	// (0x00054093) fep_candidate_item_pane_t1

0x8e82,	// (0x000540a8) fep_candidate_item_pane_t2_ParamLimits

0x8e82,	// (0x000540a8) fep_candidate_item_pane_t2

0x0001,

0xf73b,	// (0x0005a961) fep_candidate_item_pane_t_ParamLimits

0xf73b,	// (0x0005a961) fep_candidate_item_pane_t

0x77d0,	// (0x000529f6) list_highlight_pane_cp31_ParamLimits

0x77d0,	// (0x000529f6) list_highlight_pane_cp31

0x8e94,	// (0x000540ba) level_1_signal_lsc

0x8e9d,	// (0x000540c3) level_2_signal_lsc

0x8ea6,	// (0x000540cc) level_3_signal_lsc

0x8eaf,	// (0x000540d5) level_4_signal_lsc

0x8eb8,	// (0x000540de) level_5_signal_lsc

0x8ec1,	// (0x000540e7) level_6_signal_lsc

0x8eca,	// (0x000540f0) level_7_signal_lsc

0x8eca,	// (0x000540f0) level_1_battery_lsc

0x8ed3,	// (0x000540f9) level_2_battery_lsc

0x8edc,	// (0x00054102) level_3_battery_lsc

0x8ee5,	// (0x0005410b) level_4_battery_lsc

0x8eee,	// (0x00054114) level_5_battery_lsc

0x8ef7,	// (0x0005411d) level_6_battery_lsc

0x8e94,	// (0x000540ba) level_7_battery_lsc

0x8f00,	// (0x00054126) scroll_handle_focus_pane_g1

0x8f09,	// (0x0005412f) scroll_handle_focus_pane_g2

0x8f12,	// (0x00054138) scroll_handle_focus_pane_g3

0x0002,

0xf740,	// (0x0005a966) scroll_handle_focus_pane_g

0x56ee,	// (0x00050914) list_single_2graphic_pane_g1_ParamLimits

0x56ee,	// (0x00050914) list_single_2graphic_pane_g1

0x7d17,	// (0x00052f3d) list_single_2graphic_pane_g2_ParamLimits

0x7d17,	// (0x00052f3d) list_single_2graphic_pane_g2

0x7cf9,	// (0x00052f1f) list_single_2graphic_pane_g3_ParamLimits

0x7cf9,	// (0x00052f1f) list_single_2graphic_pane_g3

0x56fa,	// (0x00050920) list_single_2graphic_pane_g4_ParamLimits

0x56fa,	// (0x00050920) list_single_2graphic_pane_g4

0x0003,

0xf747,	// (0x0005a96d) list_single_2graphic_pane_g_ParamLimits

0xf747,	// (0x0005a96d) list_single_2graphic_pane_g

0x5706,	// (0x0005092c) list_single_2graphic_pane_t1_ParamLimits

0x5706,	// (0x0005092c) list_single_2graphic_pane_t1

0x7d99,	// (0x00052fbf) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x7d99,	// (0x00052fbf) list_double2_graphic_large_graphic_pane_g1

0x4fee,	// (0x00050214) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x4fee,	// (0x00050214) list_double2_graphic_large_graphic_pane_g2

0x7d60,	// (0x00052f86) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x7d60,	// (0x00052f86) list_double2_graphic_large_graphic_pane_g3

0x7da9,	// (0x00052fcf) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x7da9,	// (0x00052fcf) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf750,	// (0x0005a976) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf750,	// (0x0005a976) list_double2_graphic_large_graphic_pane_g

0x5734,	// (0x0005095a) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x5734,	// (0x0005095a) list_double2_graphic_large_graphic_pane_t1

0x574a,	// (0x00050970) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x574a,	// (0x00050970) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf759,	// (0x0005a97f) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf759,	// (0x0005a97f) list_double2_graphic_large_graphic_pane_t

0x9066,	// (0x0005428c) popup_fast_swap_window_ParamLimits

0x9066,	// (0x0005428c) popup_fast_swap_window

0x9082,	// (0x000542a8) popup_side_volume_key_window

0x909e,	// (0x000542c4) stacon_top_pane

0x90a8,	// (0x000542ce) status_pane_ParamLimits

0x90a8,	// (0x000542ce) status_pane

0x909e,	// (0x000542c4) status_small_pane

0x76f0,	// (0x00052916) control_pane

0x76f0,	// (0x00052916) stacon_bottom_pane

0x863d,	// (0x00053863) scroll_pane_cp121

0x8634,	// (0x0005385a) set_content_pane

0x8f1b,	// (0x00054141) bg_active_tab_pane_g1_cp1

0x8f24,	// (0x0005414a) bg_active_tab_pane_g2_cp1

0x8f2d,	// (0x00054153) bg_active_tab_pane_g3_cp1

0x8f1b,	// (0x00054141) bg_passive_tab_pane_g1_cp1

0x8f24,	// (0x0005414a) bg_passive_tab_pane_g2_cp1

0x8f2d,	// (0x00054153) bg_passive_tab_pane_g3_cp1

0x8f42,	// (0x00054168) bg_active_tab_pane_g1_cp2

0x8f24,	// (0x0005414a) bg_active_tab_pane_g2_cp2

0x8f4b,	// (0x00054171) bg_active_tab_pane_g3_cp2

0x8f42,	// (0x00054168) bg_passive_tab_pane_g1_cp2

0x8f24,	// (0x0005414a) bg_passive_tab_pane_g2_cp2

0x8f4b,	// (0x00054171) bg_passive_tab_pane_g3_cp2

0x8f54,	// (0x0005417a) bg_active_tab_pane_g1_cp3

0x8f24,	// (0x0005414a) bg_active_tab_pane_g2_cp3

0x8f5d,	// (0x00054183) bg_active_tab_pane_g3_cp3

0x8f54,	// (0x0005417a) bg_passive_tab_pane_g1_cp3

0x8f24,	// (0x0005414a) bg_passive_tab_pane_g2_cp3

0x8f5d,	// (0x00054183) bg_passive_tab_pane_g3_cp3

0x8f66,	// (0x0005418c) bg_active_tab_pane_g1_cp4

0x8f24,	// (0x0005414a) bg_active_tab_pane_g2_cp4

0x8f71,	// (0x00054197) bg_active_tab_pane_g3_cp4

0x8f66,	// (0x0005418c) bg_passive_tab_pane_g1_cp4

0x8f24,	// (0x0005414a) bg_passive_tab_pane_g2_cp4

0x8f71,	// (0x00054197) bg_passive_tab_pane_g3_cp4

0x8fba,	// (0x000541e0) bg_active_tab_pane_g1_cp5

0x8f24,	// (0x0005414a) bg_active_tab_pane_g2_cp5

0x8fc3,	// (0x000541e9) bg_active_tab_pane_g3_cp5

0x8fba,	// (0x000541e0) bg_passive_tab_pane_g1_cp5

0x8f24,	// (0x0005414a) bg_passive_tab_pane_g2_cp5

0x8fc3,	// (0x000541e9) bg_passive_tab_pane_g3_cp5

0x8fcc,	// (0x000541f2) list_set_graphic_pane_ParamLimits

0x8fcc,	// (0x000541f2) list_set_graphic_pane

0x76f0,	// (0x00052916) bg_set_opt_pane_cp4

0x8fe9,	// (0x0005420f) list_set_graphic_pane_g1_ParamLimits

0x8fe9,	// (0x0005420f) list_set_graphic_pane_g1

0x8ff5,	// (0x0005421b) list_set_graphic_pane_g2_ParamLimits

0x8ff5,	// (0x0005421b) list_set_graphic_pane_g2

0x0001,

0xf75e,	// (0x0005a984) list_set_graphic_pane_g_ParamLimits

0xf75e,	// (0x0005a984) list_set_graphic_pane_g

0x0009,

0xfad1,	// (0x0005acf7) volume_small_pane_cp_g

0x9019,	// (0x0005423f) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x9019,	// (0x0005423f) list_double2_large_graphic_pane_g1_cp2

0x9025,	// (0x0005424b) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x9025,	// (0x0005424b) list_double2_large_graphic_pane_g2_cp2

0x9036,	// (0x0005425c) list_double2_large_graphic_pane_g3_cp2

0x903e,	// (0x00054264) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x903e,	// (0x00054264) list_double2_large_graphic_pane_t1_cp2

0x9054,	// (0x0005427a) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x9054,	// (0x0005427a) list_double2_large_graphic_pane_t2_cp2

0xabfd,	// (0x00055e23) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xabfd,	// (0x00055e23) list_double_large_graphic_pane_g1_cp2

0xac0e,	// (0x00055e34) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xac0e,	// (0x00055e34) list_double_large_graphic_pane_g2_cp2

0x91c4,	// (0x000543ea) list_double_large_graphic_pane_g3_cp2

0xac1f,	// (0x00055e45) list_double_large_graphic_pane_g4_cp

0xac27,	// (0x00055e4d) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xac27,	// (0x00055e4d) list_double_large_graphic_pane_t1_cp2

0xac3e,	// (0x00055e64) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xac3e,	// (0x00055e64) list_double_large_graphic_pane_t2_cp2

0x90b6,	// (0x000542dc) list_double2_graphic_pane_g1_cp2_ParamLimits

0x90b6,	// (0x000542dc) list_double2_graphic_pane_g1_cp2

0x90c4,	// (0x000542ea) list_double2_graphic_pane_g2_cp2_ParamLimits

0x90c4,	// (0x000542ea) list_double2_graphic_pane_g2_cp2

0x90d5,	// (0x000542fb) list_double2_graphic_pane_g3_cp2

0x90df,	// (0x00054305) list_double2_graphic_pane_t1_cp2_ParamLimits

0x90df,	// (0x00054305) list_double2_graphic_pane_t1_cp2

0x90f5,	// (0x0005431b) list_double2_graphic_pane_t2_cp2_ParamLimits

0x90f5,	// (0x0005431b) list_double2_graphic_pane_t2_cp2

0x9107,	// (0x0005432d) list_single_number_heading_pane_g1_cp2_ParamLimits

0x9107,	// (0x0005432d) list_single_number_heading_pane_g1_cp2

0x9113,	// (0x00054339) list_single_number_heading_pane_g2_cp2

0x911b,	// (0x00054341) list_single_number_heading_pane_t1_cp2_ParamLimits

0x911b,	// (0x00054341) list_single_number_heading_pane_t1_cp2

0x9131,	// (0x00054357) list_single_number_heading_pane_t2_cp2_ParamLimits

0x9131,	// (0x00054357) list_single_number_heading_pane_t2_cp2

0x9143,	// (0x00054369) list_single_number_heading_pane_t3_cp2_ParamLimits

0x9143,	// (0x00054369) list_single_number_heading_pane_t3_cp2

0x9107,	// (0x0005432d) list_single_heading_pane_g1_cp2_ParamLimits

0x9107,	// (0x0005432d) list_single_heading_pane_g1_cp2

0x9113,	// (0x00054339) list_single_heading_pane_g2_cp2

0x911b,	// (0x00054341) list_single_heading_pane_t1_cp2_ParamLimits

0x911b,	// (0x00054341) list_single_heading_pane_t1_cp2

0xaa05,	// (0x00055c2b) list_single_heading_pane_t2_cp2_ParamLimits

0xaa05,	// (0x00055c2b) list_single_heading_pane_t2_cp2

0xa94d,	// (0x00055b73) list_double_graphic_pane_g1_cp2_ParamLimits

0xa94d,	// (0x00055b73) list_double_graphic_pane_g1_cp2

0xa959,	// (0x00055b7f) list_double_graphic_pane_g2_cp2_ParamLimits

0xa959,	// (0x00055b7f) list_double_graphic_pane_g2_cp2

0xa968,	// (0x00055b8e) list_double_graphic_pane_g3_cp2

0xa970,	// (0x00055b96) list_double_graphic_pane_t1_cp2_ParamLimits

0xa970,	// (0x00055b96) list_double_graphic_pane_t1_cp2

0xa986,	// (0x00055bac) list_double_graphic_pane_t2_cp2_ParamLimits

0xa986,	// (0x00055bac) list_double_graphic_pane_t2_cp2

0x91b8,	// (0x000543de) list_double_number_pane_g1_cp2_ParamLimits

0x91b8,	// (0x000543de) list_double_number_pane_g1_cp2

0x91c4,	// (0x000543ea) list_double_number_pane_g2_cp2

0xa911,	// (0x00055b37) list_double_number_pane_t1_cp2_ParamLimits

0xa911,	// (0x00055b37) list_double_number_pane_t1_cp2

0xa925,	// (0x00055b4b) list_double_number_pane_t2_cp2_ParamLimits

0xa925,	// (0x00055b4b) list_double_number_pane_t2_cp2

0xa93b,	// (0x00055b61) list_double_number_pane_t3_cp2_ParamLimits

0xa93b,	// (0x00055b61) list_double_number_pane_t3_cp2

0xa7fa,	// (0x00055a20) list_single_graphic_pane_g1_cp2_ParamLimits

0xa7fa,	// (0x00055a20) list_single_graphic_pane_g1_cp2

0x921c,	// (0x00054442) list_single_graphic_pane_g2_cp2_ParamLimits

0x921c,	// (0x00054442) list_single_graphic_pane_g2_cp2

0x9228,	// (0x0005444e) list_single_graphic_pane_g3_cp2

0xa7d0,	// (0x000559f6) list_single_graphic_pane_t1_cp2_ParamLimits

0xa7d0,	// (0x000559f6) list_single_graphic_pane_t1_cp2

0x921c,	// (0x00054442) list_single_number_pane_g1_cp2_ParamLimits

0x921c,	// (0x00054442) list_single_number_pane_g1_cp2

0x9228,	// (0x0005444e) list_single_number_pane_g2_cp2

0xa7d0,	// (0x000559f6) list_single_number_pane_t1_cp2_ParamLimits

0xa7d0,	// (0x000559f6) list_single_number_pane_t1_cp2

0xa7e6,	// (0x00055a0c) list_single_number_pane_t2_cp2_ParamLimits

0xa7e6,	// (0x00055a0c) list_single_number_pane_t2_cp2

0x9025,	// (0x0005424b) list_double2_pane_g1_cp2_ParamLimits

0x9025,	// (0x0005424b) list_double2_pane_g1_cp2

0x9036,	// (0x0005425c) list_double2_pane_g2_cp2

0x9190,	// (0x000543b6) list_double2_pane_t1_cp2_ParamLimits

0x9190,	// (0x000543b6) list_double2_pane_t1_cp2

0x91a6,	// (0x000543cc) list_double2_pane_t2_cp2_ParamLimits

0x91a6,	// (0x000543cc) list_double2_pane_t2_cp2

0x91b8,	// (0x000543de) list_double_pane_g1_cp2_ParamLimits

0x91b8,	// (0x000543de) list_double_pane_g1_cp2

0x91c4,	// (0x000543ea) list_double_pane_g2_cp2

0x91cc,	// (0x000543f2) list_double_pane_t1_cp2_ParamLimits

0x91cc,	// (0x000543f2) list_double_pane_t1_cp2

0x91e2,	// (0x00054408) list_double_pane_t2_cp2_ParamLimits

0x91e2,	// (0x00054408) list_double_pane_t2_cp2

0x920c,	// (0x00054432) list_single_pane_cp2_g3

0x921c,	// (0x00054442) list_single_pane_g1_cp2_ParamLimits

0x921c,	// (0x00054442) list_single_pane_g1_cp2

0x9228,	// (0x0005444e) list_single_pane_g2_cp2

0x9230,	// (0x00054456) list_single_pane_t1_cp2_ParamLimits

0x9230,	// (0x00054456) list_single_pane_t1_cp2

0x9248,	// (0x0005446e) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x9248,	// (0x0005446e) list_single_large_graphic_pane_g1_cp2

0x9254,	// (0x0005447a) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x9254,	// (0x0005447a) list_single_large_graphic_pane_g2_cp2

0x9260,	// (0x00054486) list_single_large_graphic_pane_g3_cp2

0x9268,	// (0x0005448e) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x9268,	// (0x0005448e) list_single_large_graphic_pane_g4_cp1

0x9282,	// (0x000544a8) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x9282,	// (0x000544a8) list_single_large_graphic_pane_t1_cp2

0xa79c,	// (0x000559c2) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa79c,	// (0x000559c2) list_single_graphic_heading_pane_g1_cp2

0xa769,	// (0x0005598f) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa769,	// (0x0005598f) list_single_graphic_heading_pane_g4_cp2

0x9228,	// (0x0005444e) list_single_graphic_heading_pane_g5_cp2

0xa7a8,	// (0x000559ce) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa7a8,	// (0x000559ce) list_single_graphic_heading_pane_t1_cp2

0xa7be,	// (0x000559e4) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa7be,	// (0x000559e4) list_single_graphic_heading_pane_t2_cp2

0xa75d,	// (0x00055983) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa75d,	// (0x00055983) list_single_2graphic_pane_g1_cp2

0xa769,	// (0x0005598f) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa769,	// (0x0005598f) list_single_2graphic_pane_g2_cp2

0x9228,	// (0x0005444e) list_single_2graphic_pane_g3_cp2

0xa77a,	// (0x000559a0) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa77a,	// (0x000559a0) list_single_2graphic_pane_g4_cp2

0xa786,	// (0x000559ac) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa786,	// (0x000559ac) list_single_2graphic_pane_t1_cp2

0x76e6,	// (0x0005290c) list_highlight_pane_g10_cp1

0xa335,	// (0x0005555b) list_highlight_pane_g1_cp1

0xa33d,	// (0x00055563) list_highlight_pane_g2_cp1

0xa345,	// (0x0005556b) list_highlight_pane_g3_cp1

0xa34d,	// (0x00055573) list_highlight_pane_g4_cp1

0xa355,	// (0x0005557b) list_highlight_pane_g5_cp1

0xa35d,	// (0x00055583) list_highlight_pane_g6_cp1

0xa365,	// (0x0005558b) list_highlight_pane_g7_cp1

0xa36d,	// (0x00055593) list_highlight_pane_g8_cp1

0xa375,	// (0x0005559b) list_highlight_pane_g9_cp1

0xa255,	// (0x0005547b) form_field_slider_pane_t3

0xa263,	// (0x00055489) form_field_slider_pane_t4

0xa271,	// (0x00055497) slider_form_pane_ParamLimits

0xa271,	// (0x00055497) slider_form_pane

0x76f0,	// (0x00052916) control_abbreviations

0x76f0,	// (0x00052916) control_conventions

0x76f0,	// (0x00052916) control_definitions

0x76f0,	// (0x00052916) format_table_attribute

0xaa4f,	// (0x00055c75) bg_popup_preview_window_pane_g9

0x76f0,	// (0x00052916) format_table_data2

0x76f0,	// (0x00052916) format_table_data3

0x76f0,	// (0x00052916) format_table_data_example

0x0008,

0x76f0,	// (0x00052916) intro_purpose

0xf8fa,	// (0x0005ab20) bg_popup_preview_window_pane_g

0x76f0,	// (0x00052916) texts_category

0x76f0,	// (0x00052916) texts_graphics

0x9298,	// (0x000544be) text_digital

0x92a7,	// (0x000544cd) text_primary

0x92b6,	// (0x000544dc) text_primary_small

0x92c5,	// (0x000544eb) text_secondary

0x92d4,	// (0x000544fa) text_title

0xb14a,	// (0x00056370) bg_passive_tab_pane_g1_cp3_srt

0x8f24,	// (0x0005414a) bg_passive_tab_pane_g2_cp3_srt

0xb153,	// (0x00056379) bg_passive_tab_pane_g3_cp3_srt

0x77d0,	// (0x000529f6) bg_active_tab_pane_cp3_srt_ParamLimits

0x77d0,	// (0x000529f6) bg_active_tab_pane_cp3_srt

0xb15c,	// (0x00056382) tabs_4_active_pane_srt_g1

0xb164,	// (0x0005638a) tabs_4_active_pane_srt_t1_ParamLimits

0xb164,	// (0x0005638a) tabs_4_active_pane_srt_t1

0xb14a,	// (0x00056370) bg_active_tab_pane_g1_cp3_copy1

0x8f24,	// (0x0005414a) bg_active_tab_pane_g2_cp3_copy1

0xb153,	// (0x00056379) bg_active_tab_pane_g3_cp3_copy1

0x77d0,	// (0x000529f6) tabs_2_long_active_pane_srt_ParamLimits

0x77d0,	// (0x000529f6) tabs_2_long_active_pane_srt

0x77d0,	// (0x000529f6) tabs_2_long_passive_pane_srt_ParamLimits

0x77d0,	// (0x000529f6) tabs_2_long_passive_pane_srt

0x8832,	// (0x00053a58) bg_passive_tab_pane_cp4_srt_ParamLimits

0x8832,	// (0x00053a58) bg_passive_tab_pane_cp4_srt

0xae93,	// (0x000560b9) bg_passive_tab_pane_g1_cp4_srt

0x8f24,	// (0x0005414a) bg_passive_tab_pane_g2_cp4_srt

0xae9c,	// (0x000560c2) bg_passive_tab_pane_g3_cp4_srt

0x8811,	// (0x00053a37) bg_active_tab_pane_cp4_srt_ParamLimits

0x8811,	// (0x00053a37) bg_active_tab_pane_cp4_srt

0xaea5,	// (0x000560cb) tabs_2_long_active_pane_srt_t1_ParamLimits

0xaea5,	// (0x000560cb) tabs_2_long_active_pane_srt_t1

0xae93,	// (0x000560b9) bg_active_tab_pane_g1_cp4_srt

0x8f24,	// (0x0005414a) bg_active_tab_pane_g2_cp4_srt

0xae9c,	// (0x000560c2) bg_active_tab_pane_g3_cp4_srt

0x7a4b,	// (0x00052c71) tabs_3_long_active_pane_srt_ParamLimits

0x7a4b,	// (0x00052c71) tabs_3_long_active_pane_srt

0x7a4b,	// (0x00052c71) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x7a4b,	// (0x00052c71) tabs_3_long_passive_pane_cp_srt

0x7a4b,	// (0x00052c71) tabs_3_long_passive_pane_srt_ParamLimits

0x7a4b,	// (0x00052c71) tabs_3_long_passive_pane_srt

0x8832,	// (0x00053a58) bg_passive_tab_pane_cp5_srt_ParamLimits

0x8832,	// (0x00053a58) bg_passive_tab_pane_cp5_srt

0x8fba,	// (0x000541e0) bg_passive_tab_pane_g1_cp5_srt

0x8f24,	// (0x0005414a) bg_passive_tab_pane_g2_cp5_srt

0x8fc3,	// (0x000541e9) bg_passive_tab_pane_g3_cp5_srt

0x8811,	// (0x00053a37) bg_active_tab_pane_cp5_srt_ParamLimits

0x8811,	// (0x00053a37) bg_active_tab_pane_cp5_srt

0xae81,	// (0x000560a7) tabs_3_long_active_pane_srt_t1_ParamLimits

0xae81,	// (0x000560a7) tabs_3_long_active_pane_srt_t1

0x8fba,	// (0x000541e0) bg_active_tab_pane_g1_cp5_srt

0x8f24,	// (0x0005414a) bg_active_tab_pane_g2_cp5_srt

0x8fc3,	// (0x000541e9) bg_active_tab_pane_g3_cp5_srt

0xae73,	// (0x00056099) navi_text_pane_srt_t1

0xae6b,	// (0x00056091) navi_icon_pane_srt_g1

0x949b,	// (0x000546c1) midp_editing_number_pane_srt

0x92e3,	// (0x00054509) midp_ticker_pane_srt

0x94a3,	// (0x000546c9) midp_ticker_pane_srt_g1

0x94ab,	// (0x000546d1) midp_ticker_pane_srt_g2

0x0001,

0xf77d,	// (0x0005a9a3) midp_ticker_pane_srt_g

0x94b3,	// (0x000546d9) midp_ticker_pane_srt_t1

0xae5c,	// (0x00056082) midp_editing_number_pane_t1_copy1

0x8832,	// (0x00053a58) listscroll_midp_pane

0x8832,	// (0x00053a58) midp_form_pane

0x934d,	// (0x00054573) midp_info_popup_window_ParamLimits

0x934d,	// (0x00054573) midp_info_popup_window

0x86fa,	// (0x00053920) bg_popup_sub_pane_cp50_ParamLimits

0x86fa,	// (0x00053920) bg_popup_sub_pane_cp50

0x9f6d,	// (0x00055193) listscroll_midp_info_pane_ParamLimits

0x9f6d,	// (0x00055193) listscroll_midp_info_pane

0x9f55,	// (0x0005517b) listscroll_form_midp_pane_ParamLimits

0x9f55,	// (0x0005517b) listscroll_form_midp_pane

0x9f61,	// (0x00055187) scroll_bar_cp050

0x9f35,	// (0x0005515b) list_midp_pane

0xbbdc,	// (0x00056e02) signal_pane_g2_cp

0x9e6f,	// (0x00055095) listscroll_midp_info_pane_t1_ParamLimits

0x9e6f,	// (0x00055095) listscroll_midp_info_pane_t1

0x9e87,	// (0x000550ad) listscroll_midp_info_pane_t2_ParamLimits

0x9e87,	// (0x000550ad) listscroll_midp_info_pane_t2

0x9ec5,	// (0x000550eb) listscroll_midp_info_pane_t3_ParamLimits

0x9ec5,	// (0x000550eb) listscroll_midp_info_pane_t3

0x9eff,	// (0x00055125) listscroll_midp_info_pane_t4_ParamLimits

0x9eff,	// (0x00055125) listscroll_midp_info_pane_t4

0x0003,

0xf835,	// (0x0005aa5b) listscroll_midp_info_pane_t_ParamLimits

0xf835,	// (0x0005aa5b) listscroll_midp_info_pane_t

0x87be,	// (0x000539e4) scroll_pane_cp21

0x9e0d,	// (0x00055033) form_midp_field_choice_group_pane

0x9e16,	// (0x0005503c) form_midp_field_text_pane

0x9e55,	// (0x0005507b) form_midp_field_time_pane

0x9e5d,	// (0x00055083) form_midp_gauge_slider_pane

0x9e66,	// (0x0005508c) form_midp_gauge_wait_pane

0x76f0,	// (0x00052916) form_midp_image_pane

0x627c,	// (0x000514a2) list_single_midp_pane_ParamLimits

0x627c,	// (0x000514a2) list_single_midp_pane

0x9dc5,	// (0x00054feb) form_midp_field_text_pane_t1

0x9b8f,	// (0x00054db5) input_focus_pane_cp050

0x9dfc,	// (0x00055022) list_midp_form_text_pane

0x9d94,	// (0x00054fba) form_midp_field_choice_group_pane_t1

0x9da2,	// (0x00054fc8) input_focus_pane_cp051

0x9db6,	// (0x00054fdc) list_midp_choice_pane

0x76f0,	// (0x00052916) status_idle_pane

0x9d78,	// (0x00054f9e) form_midp_field_time_pane_t1

0x76e6,	// (0x0005290c) wait_anim_pane_g2_copy1

0x9d86,	// (0x00054fac) form_midp_field_time_pane_t2

0x0001,

0x93fb,	// (0x00054621) aid_navinavi_width_2_pane

0xf830,	// (0x0005aa56) form_midp_field_time_pane_t

0x76f0,	// (0x00052916) input_focus_pane_cp052

0x76f0,	// (0x00052916) bg_input_focus_pane_cp040

0x9d38,	// (0x00054f5e) form_midp_gauge_slider_pane_t1

0x9d46,	// (0x00054f6c) form_midp_gauge_slider_pane_t2

0x9d54,	// (0x00054f7a) form_midp_gauge_slider_pane_t3

0x9d62,	// (0x00054f88) form_midp_gauge_slider_pane_t4

0x0003,

0xf827,	// (0x0005aa4d) form_midp_gauge_slider_pane_t

0x9d70,	// (0x00054f96) form_midp_slider_pane

0x77d0,	// (0x000529f6) bg_input_focus_pane_cp041_ParamLimits

0x77d0,	// (0x000529f6) bg_input_focus_pane_cp041

0x9d05,	// (0x00054f2b) form_midp_gauge_wait_pane_t1_ParamLimits

0x9d05,	// (0x00054f2b) form_midp_gauge_wait_pane_t1

0x9d17,	// (0x00054f3d) form_midp_gauge_wait_pane_t2_ParamLimits

0x9d17,	// (0x00054f3d) form_midp_gauge_wait_pane_t2

0x0001,

0xf822,	// (0x0005aa48) form_midp_gauge_wait_pane_t_ParamLimits

0xf822,	// (0x0005aa48) form_midp_gauge_wait_pane_t

0x9d29,	// (0x00054f4f) form_midp_wait_pane_ParamLimits

0x9d29,	// (0x00054f4f) form_midp_wait_pane

0x9ccf,	// (0x00054ef5) form_midp_image_pane_g1

0x9cd8,	// (0x00054efe) form_midp_image_pane_t1

0x9ce7,	// (0x00054f0d) form_midp_image_pane_t2

0x9cf6,	// (0x00054f1c) form_midp_image_pane_t3

0x0002,

0xf81b,	// (0x0005aa41) form_midp_image_pane_t

0x9cc6,	// (0x00054eec) list_single_midp_pane_g1

0x626d,	// (0x00051493) list_single_midp_pane_t1

0x9c9e,	// (0x00054ec4) list_midp_form_item_pane_ParamLimits

0x9c9e,	// (0x00054ec4) list_midp_form_item_pane

0x93a3,	// (0x000545c9) list_midp_form_item_pane_t1

0x93b2,	// (0x000545d8) midp_ticker_pane_g1

0x93be,	// (0x000545e4) midp_ticker_pane_g2

0x0001,

0xf763,	// (0x0005a989) midp_ticker_pane_g

0x93ca,	// (0x000545f0) midp_ticker_pane_t1

0xb0ad,	// (0x000562d3) midp_editing_number_pane_t1

0xb08b,	// (0x000562b1) midp_editing_number_pane

0xb09a,	// (0x000562c0) midp_ticker_pane

0xae4c,	// (0x00056072) ai_message_heading_pane

0x76f0,	// (0x00052916) bg_popup_window_pane_cp14

0xae54,	// (0x0005607a) listscroll_ai_message_pane

0xadd6,	// (0x00055ffc) ai_message_heading_pane_g1_ParamLimits

0xadd6,	// (0x00055ffc) ai_message_heading_pane_g1

0xade2,	// (0x00056008) ai_message_heading_pane_g2_ParamLimits

0xade2,	// (0x00056008) ai_message_heading_pane_g2

0xadee,	// (0x00056014) ai_message_heading_pane_g3_ParamLimits

0xadee,	// (0x00056014) ai_message_heading_pane_g3

0xadfa,	// (0x00056020) ai_message_heading_pane_g4_ParamLimits

0xadfa,	// (0x00056020) ai_message_heading_pane_g4

0x0003,

0xf95c,	// (0x0005ab82) ai_message_heading_pane_g_ParamLimits

0xf95c,	// (0x0005ab82) ai_message_heading_pane_g

0xae06,	// (0x0005602c) ai_message_heading_pane_t1_ParamLimits

0xae06,	// (0x0005602c) ai_message_heading_pane_t1

0xae20,	// (0x00056046) ai_message_heading_pane_t2_ParamLimits

0xae20,	// (0x00056046) ai_message_heading_pane_t2

0x0001,

0xf965,	// (0x0005ab8b) ai_message_heading_pane_t_ParamLimits

0xf965,	// (0x0005ab8b) ai_message_heading_pane_t

0xae32,	// (0x00056058) bg_popup_heading_pane_cp1_ParamLimits

0xae32,	// (0x00056058) bg_popup_heading_pane_cp1

0xadc4,	// (0x00055fea) list_ai_message_pane_ParamLimits

0xadc4,	// (0x00055fea) list_ai_message_pane

0x87be,	// (0x000539e4) scroll_pane_cp10

0xad60,	// (0x00055f86) list_ai_message_pane_g1

0xad68,	// (0x00055f8e) list_ai_message_pane_g2

0x0001,

0xf939,	// (0x0005ab5f) list_ai_message_pane_g

0xad70,	// (0x00055f96) list_ai_message_pane_t1_ParamLimits

0xad70,	// (0x00055f96) list_ai_message_pane_t1

0xad85,	// (0x00055fab) list_ai_message_pane_t2_ParamLimits

0xad85,	// (0x00055fab) list_ai_message_pane_t2

0xad9a,	// (0x00055fc0) list_ai_message_pane_t3_ParamLimits

0xad9a,	// (0x00055fc0) list_ai_message_pane_t3

0xadaf,	// (0x00055fd5) list_ai_message_pane_t4_ParamLimits

0xadaf,	// (0x00055fd5) list_ai_message_pane_t4

0x0003,

0xf93e,	// (0x0005ab64) list_ai_message_pane_t_ParamLimits

0xf93e,	// (0x0005ab64) list_ai_message_pane_t

0xad4b,	// (0x00055f71) cell_ai_soft_ind_pane_ParamLimits

0xad4b,	// (0x00055f71) cell_ai_soft_ind_pane

0x93dc,	// (0x00054602) cell_ai_soft_ind_pane_g1_ParamLimits

0x93dc,	// (0x00054602) cell_ai_soft_ind_pane_g1

0x76f0,	// (0x00052916) grid_highlight_cp1

0x93e9,	// (0x0005460f) text_secondary_cp56_ParamLimits

0x93e9,	// (0x0005460f) text_secondary_cp56

0xad20,	// (0x00055f46) example_general_pane_ParamLimits

0xad20,	// (0x00055f46) example_general_pane

0xad2c,	// (0x00055f52) example_parent_pane_g1_ParamLimits

0xad2c,	// (0x00055f52) example_parent_pane_g1

0xad38,	// (0x00055f5e) example_parent_pane_t1_ParamLimits

0xad38,	// (0x00055f5e) example_parent_pane_t1

0x5e47,	// (0x0005106d) popup_preview_text_window_ParamLimits

0x5e47,	// (0x0005106d) popup_preview_text_window

0x9214,	// (0x0005443a) list_single_pane_cp2_g4

0x7b01,	// (0x00052d27) bg_popup_preview_window_pane_ParamLimits

0x7b01,	// (0x00052d27) bg_popup_preview_window_pane

0xaa57,	// (0x00055c7d) popup_preview_text_window_t1_ParamLimits

0xaa57,	// (0x00055c7d) popup_preview_text_window_t1

0xaa75,	// (0x00055c9b) popup_preview_text_window_t2_ParamLimits

0xaa75,	// (0x00055c9b) popup_preview_text_window_t2

0xaabe,	// (0x00055ce4) popup_preview_text_window_t3_ParamLimits

0xaabe,	// (0x00055ce4) popup_preview_text_window_t3

0xab03,	// (0x00055d29) popup_preview_text_window_t4_ParamLimits

0xab03,	// (0x00055d29) popup_preview_text_window_t4

0x0004,

0xf90d,	// (0x0005ab33) popup_preview_text_window_t_ParamLimits

0xf90d,	// (0x0005ab33) popup_preview_text_window_t

0xab81,	// (0x00055da7) scroll_pane_cp11

0x9b1b,	// (0x00054d41) bg_popup_preview_window_pane_g1

0xaa17,	// (0x00055c3d) bg_popup_preview_window_pane_g2

0xaa1f,	// (0x00055c45) bg_popup_preview_window_pane_g3

0xaa27,	// (0x00055c4d) bg_popup_preview_window_pane_g4

0xaa2f,	// (0x00055c55) bg_popup_preview_window_pane_g5

0xaa37,	// (0x00055c5d) bg_popup_preview_window_pane_g6

0xaa3f,	// (0x00055c65) bg_popup_preview_window_pane_g7

0xaa47,	// (0x00055c6d) bg_popup_preview_window_pane_g8

0x4900,	// (0x0004fb26) aid_popup_width_pane

0x5e25,	// (0x0005104b) popup_midp_note_alarm_window_ParamLimits

0x5e25,	// (0x0005104b) popup_midp_note_alarm_window

0x864e,	// (0x00053874) data_form_pane_ParamLimits

0x529a,	// (0x000504c0) form_field_data_pane_g1

0x52a4,	// (0x000504ca) form_field_data_pane_t1_ParamLimits

0x865a,	// (0x00053880) input_focus_pane_ParamLimits

0x52bc,	// (0x000504e2) data_form_wide_pane_ParamLimits

0x52cd,	// (0x000504f3) form_field_data_wide_pane_g1

0x52d9,	// (0x000504ff) form_field_data_wide_pane_t1_ParamLimits

0x83bf,	// (0x000535e5) input_focus_pane_cp6_ParamLimits

0x876b,	// (0x00053991) input_popup_find_pane_g1_ParamLimits

0x876b,	// (0x00053991) input_popup_find_pane_g1

0x554f,	// (0x00050775) aid_navi_side_left_pane

0x5564,	// (0x0005078a) aid_navi_side_right_pane

0xa430,	// (0x00055656) bg_popup_window_pane_cp30_ParamLimits

0xa430,	// (0x00055656) bg_popup_window_pane_cp30

0xa4aa,	// (0x000556d0) popup_midp_note_alarm_window_g1_ParamLimits

0xa4aa,	// (0x000556d0) popup_midp_note_alarm_window_g1

0xa4da,	// (0x00055700) popup_midp_note_alarm_window_t1_ParamLimits

0xa4da,	// (0x00055700) popup_midp_note_alarm_window_t1

0xa57b,	// (0x000557a1) popup_midp_note_alarm_window_t2_ParamLimits

0xa57b,	// (0x000557a1) popup_midp_note_alarm_window_t2

0xa629,	// (0x0005584f) popup_midp_note_alarm_window_t3_ParamLimits

0xa629,	// (0x0005584f) popup_midp_note_alarm_window_t3

0xa65b,	// (0x00055881) popup_midp_note_alarm_window_t4_ParamLimits

0xa65b,	// (0x00055881) popup_midp_note_alarm_window_t4

0xa681,	// (0x000558a7) popup_midp_note_alarm_window_t5_ParamLimits

0xa681,	// (0x000558a7) popup_midp_note_alarm_window_t5

0x000a,

0xf8aa,	// (0x0005aad0) popup_midp_note_alarm_window_t_ParamLimits

0xf8aa,	// (0x0005aad0) popup_midp_note_alarm_window_t

0xa72d,	// (0x00055953) wait_bar_pane_cp1_ParamLimits

0xa72d,	// (0x00055953) wait_bar_pane_cp1

0x76f0,	// (0x00052916) wait_anim_pane_copy1

0x76f0,	// (0x00052916) wait_border_pane_copy1

0xa116,	// (0x0005533c) wait_border_pane_g1_copy1

0x52f3,	// (0x00050519) form_field_popup_pane_g1

0x52fb,	// (0x00050521) form_field_popup_pane_t1_ParamLimits

0x865a,	// (0x00053880) input_focus_pane_cp7_ParamLimits

0x867c,	// (0x000538a2) list_form_pane_ParamLimits

0x5313,	// (0x00050539) form_field_popup_wide_pane_g1

0x531b,	// (0x00050541) form_field_popup_wide_pane_t1_ParamLimits

0x865a,	// (0x00053880) input_focus_pane_cp8_ParamLimits

0x8688,	// (0x000538ae) list_form_wide_pane_ParamLimits

0xb1d6,	// (0x000563fc) aid_size_cell_graphic_pane

0x53a5,	// (0x000505cb) data_form_pane_t1_ParamLimits

0x64fb,	// (0x00051721) data_form_wide_pane_t1_ParamLimits

0x96f6,	// (0x0005491c) bg_status_flat_pane

0x7730,	// (0x00052956) title_pane_t1_ParamLimits

0x7798,	// (0x000529be) title_pane_t2_ParamLimits

0x77be,	// (0x000529e4) title_pane_t3_ParamLimits

0xf55d,	// (0x0005a783) title_pane_t_ParamLimits

0x8c3b,	// (0x00053e61) level_1_signal_ParamLimits

0x8c4d,	// (0x00053e73) level_2_signal_ParamLimits

0x8c60,	// (0x00053e86) level_3_signal_ParamLimits

0x8c73,	// (0x00053e99) level_4_signal_ParamLimits

0x8c86,	// (0x00053eac) level_5_signal_ParamLimits

0x8c99,	// (0x00053ebf) level_6_signal_ParamLimits

0x8cac,	// (0x00053ed2) level_7_signal_ParamLimits

0x8c3b,	// (0x00053e61) level_1_battery_ParamLimits

0x8c4d,	// (0x00053e73) level_2_battery_ParamLimits

0x8c60,	// (0x00053e86) level_3_battery_ParamLimits

0x8c73,	// (0x00053e99) level_4_battery_ParamLimits

0x8c86,	// (0x00053eac) level_5_battery_ParamLimits

0x8c99,	// (0x00053ebf) level_6_battery_ParamLimits

0x8cac,	// (0x00053ed2) level_7_battery_ParamLimits

0xa335,	// (0x0005555b) bg_status_flat_pane_g1

0xa33d,	// (0x00055563) bg_status_flat_pane_g2

0xa345,	// (0x0005556b) bg_status_flat_pane_g3

0xa34d,	// (0x00055573) bg_status_flat_pane_g4

0xa355,	// (0x0005557b) bg_status_flat_pane_g5

0xa35d,	// (0x00055583) bg_status_flat_pane_g6

0xa365,	// (0x0005558b) bg_status_flat_pane_g7

0x77e6,	// (0x00052a0c) tabs_3_active_pane_t1_ParamLimits

0x77e6,	// (0x00052a0c) tabs_3_passive_pane_t1_ParamLimits

0x7800,	// (0x00052a26) tabs_4_active_pane_t1_ParamLimits

0x7800,	// (0x00052a26) tabs_4_1_passive_pane_t1_ParamLimits

0x87ff,	// (0x00053a25) tabs_2_active_pane_t1_ParamLimits

0x87ff,	// (0x00053a25) tabs_2_passive_pane_t1_ParamLimits

0x8811,	// (0x00053a37) bg_active_tab_pane_cp4_ParamLimits

0x881f,	// (0x00053a45) tabs_2_long_active_pane_t1_ParamLimits

0x8832,	// (0x00053a58) bg_passive_tab_pane_cp4_ParamLimits

0x614e,	// (0x00051374) list_single_midp_graphic_pane_t1_ParamLimits

0x8811,	// (0x00053a37) bg_active_tab_pane_cp5_ParamLimits

0x883e,	// (0x00053a64) tabs_3_long_active_pane_t1_ParamLimits

0x8832,	// (0x00053a58) bg_passive_tab_pane_cp5_ParamLimits

0x614e,	// (0x00051374) list_single_midp_graphic_pane_t1

0x96f6,	// (0x0005491c) bg_status_flat_pane_ParamLimits

0x97b9,	// (0x000549df) indicator_pane_cp2_ParamLimits

0x97b9,	// (0x000549df) indicator_pane_cp2

0x98de,	// (0x00054b04) navi_pane_srt_ParamLimits

0x98de,	// (0x00054b04) navi_pane_srt

0x9902,	// (0x00054b28) popup_clock_digital_analogue_window_cp1

0x78ad,	// (0x00052ad3) indicator_pane_t1

0x92e3,	// (0x00054509) copy_highlight_pane

0x92e3,	// (0x00054509) cursor_graphics_pane

0x92e3,	// (0x00054509) graphic_within_text_pane

0x92e3,	// (0x00054509) link_highlight_pane

0xab44,	// (0x00055d6a) popup_preview_text_window_t5_ParamLimits

0xab44,	// (0x00055d6a) popup_preview_text_window_t5

0x9403,	// (0x00054629) cursor_digital_pane

0x9403,	// (0x00054629) cursor_primary_pane

0x9414,	// (0x0005463a) cursor_primary_small_pane

0x941c,	// (0x00054642) cursor_secondary_pane

0x9424,	// (0x0005464a) cursor_title_pane

0x9403,	// (0x00054629) link_highlight_digital_pane

0x940b,	// (0x00054631) link_highlight_primary_pane

0x9414,	// (0x0005463a) link_highlight_primary_small_pane

0x941c,	// (0x00054642) link_highlight_secondary_pane

0x9424,	// (0x0005464a) link_highlight_title_pane

0x9403,	// (0x00054629) copy_highlight_digital_pane

0x9403,	// (0x00054629) copy_highlight_primary_pane

0x9414,	// (0x0005463a) copy_highlight_primary_small_pane

0x941c,	// (0x00054642) copy_highlight_secondary_pane

0x9424,	// (0x0005464a) copy_highlight_title_pane

0x941c,	// (0x00054642) graphic_text_digital_pane

0xa3d3,	// (0x000555f9) graphic_text_primary_pane

0xa3dc,	// (0x00055602) graphic_text_primary_small_pane

0x9414,	// (0x0005463a) graphic_text_secondary_pane

0x9403,	// (0x00054629) graphic_text_title_pane

0x942c,	// (0x00054652) cursor_primary_pane_g1

0xa3c5,	// (0x000555eb) cursor_text_primary_t1

0xa3ad,	// (0x000555d3) cursor_primary_small_pane_g1

0xa3b7,	// (0x000555dd) cursor_text_primary_small_t1

0xa395,	// (0x000555bb) cursor_primary_small_pane_g1_copy1

0xa39f,	// (0x000555c5) cursor_text_primary_small_t1_copy1

0xa37d,	// (0x000555a3) cursor_text_title_t1

0xa38b,	// (0x000555b1) cursor_title_pane_g1

0x942c,	// (0x00054652) cursor_digital_pane_g1

0x9436,	// (0x0005465c) cursor_text_digital_t1

0x945b,	// (0x00054681) link_highlight_primary_pane_g1

0xa326,	// (0x0005554c) link_highlight_primary_pane_t1

0x9444,	// (0x0005466a) link_highlight_primary_small_pane_g1

0x944c,	// (0x00054672) link_highlight_primary_small_pane_t1

0x945b,	// (0x00054681) link_highlight_secondary_pane_g1

0x9463,	// (0x00054689) link_highlight_secondary_pane_t1

0xa29a,	// (0x000554c0) link_highlight_title_pane_g1

0xa2a2,	// (0x000554c8) link_highlight_title_pane_t1

0xa283,	// (0x000554a9) link_highlight_digital_pane_g1

0xa28b,	// (0x000554b1) link_highlight_digital_pane_t1

0xa15b,	// (0x00055381) copy_highlight_primary_pane_g1

0xa163,	// (0x00055389) copy_highlight_primary_pane_t1

0xa135,	// (0x0005535b) copy_highlight_primary_small_pane_g1

0xa14c,	// (0x00055372) copy_highlight_primary_small_pane_t1

0x9472,	// (0x00054698) copy_highlight_secondary_pane_g1

0x947a,	// (0x000546a0) copy_highlight_secondary_pane_t1

0xa135,	// (0x0005535b) copy_highlight_title_pane_g1

0xa13d,	// (0x00055363) copy_highlight_title_pane_t1

0xa15b,	// (0x00055381) copy_highlight_digital_pane_g1

0xb3a0,	// (0x000565c6) copy_highlight_digital_pane_t1

0xb2f4,	// (0x0005651a) graphic_text_primary_pane_g1

0xb384,	// (0x000565aa) graphic_text_primary_pane_t1

0xb392,	// (0x000565b8) graphic_text_primary_pane_t2

0x0001,

0xf9d9,	// (0x0005abff) graphic_text_primary_pane_t

0xb360,	// (0x00056586) graphic_text_primary_small_pane_g1

0xb368,	// (0x0005658e) graphic_text_primary_small_pane_t1

0xb376,	// (0x0005659c) graphic_text_primary_small_pane_t2

0x0001,

0xf9d4,	// (0x0005abfa) graphic_text_primary_small_pane_t

0xb33c,	// (0x00056562) graphic_text_secondary_pane_g1

0xb344,	// (0x0005656a) graphic_text_secondary_pane_t1

0xb352,	// (0x00056578) graphic_text_secondary_pane_t2

0x0001,

0xf9cf,	// (0x0005abf5) graphic_text_secondary_pane_t

0xb318,	// (0x0005653e) graphic_text_title_pane_g1

0xb320,	// (0x00056546) graphic_text_title_pane_t1

0xb32e,	// (0x00056554) graphic_text_title_pane_t2

0x0001,

0xf9ca,	// (0x0005abf0) graphic_text_title_pane_t

0xb2f4,	// (0x0005651a) graphic_text_digital_pane_g1

0xb2fc,	// (0x00056522) graphic_text_digital_pane_t1

0xb30a,	// (0x00056530) graphic_text_digital_pane_t2

0x0001,

0xf9c5,	// (0x0005abeb) graphic_text_digital_pane_t

0x77d0,	// (0x000529f6) navi_icon_pane_srt_ParamLimits

0x77d0,	// (0x000529f6) navi_icon_pane_srt

0x76f0,	// (0x00052916) navi_midp_pane_srt

0x76f0,	// (0x00052916) navi_navi_pane_srt

0x77d0,	// (0x000529f6) navi_text_pane_srt_ParamLimits

0x77d0,	// (0x000529f6) navi_text_pane_srt

0xb2bf,	// (0x000564e5) navi_navi_icon_text_pane_srt

0xb2c7,	// (0x000564ed) navi_navi_pane_srt_g1_ParamLimits

0xb2c7,	// (0x000564ed) navi_navi_pane_srt_g1

0xb2d9,	// (0x000564ff) navi_navi_pane_srt_g2_ParamLimits

0xb2d9,	// (0x000564ff) navi_navi_pane_srt_g2

0x0001,

0xf9c0,	// (0x0005abe6) navi_navi_pane_srt_g_ParamLimits

0xf9c0,	// (0x0005abe6) navi_navi_pane_srt_g

0xb2eb,	// (0x00056511) navi_navi_tabs_pane_srt

0xb2bf,	// (0x000564e5) navi_navi_text_pane_srt

0xb2bf,	// (0x000564e5) navi_navi_volume_pane_srt

0xb2b0,	// (0x000564d6) navi_navi_text_pane_srt_t1

0x6620,	// (0x00051846) navi_navi_volume_pane_srt_g1

0x6628,	// (0x0005184e) volume_small_pane_srt_ParamLimits

0x6628,	// (0x0005184e) volume_small_pane_srt

0x589d,	// (0x00050ac3) volume_small_pane_srt_g1_ParamLimits

0x589d,	// (0x00050ac3) volume_small_pane_srt_g1

0x58ad,	// (0x00050ad3) volume_small_pane_srt_g2_ParamLimits

0x58ad,	// (0x00050ad3) volume_small_pane_srt_g2

0x58be,	// (0x00050ae4) volume_small_pane_srt_g3_ParamLimits

0x58be,	// (0x00050ae4) volume_small_pane_srt_g3

0x58cf,	// (0x00050af5) volume_small_pane_srt_g4_ParamLimits

0x58cf,	// (0x00050af5) volume_small_pane_srt_g4

0x58e0,	// (0x00050b06) volume_small_pane_srt_g5_ParamLimits

0x58e0,	// (0x00050b06) volume_small_pane_srt_g5

0x58f1,	// (0x00050b17) volume_small_pane_srt_g6_ParamLimits

0x58f1,	// (0x00050b17) volume_small_pane_srt_g6

0x5902,	// (0x00050b28) volume_small_pane_srt_g7_ParamLimits

0x5902,	// (0x00050b28) volume_small_pane_srt_g7

0x5913,	// (0x00050b39) volume_small_pane_srt_g8_ParamLimits

0x5913,	// (0x00050b39) volume_small_pane_srt_g8

0x5924,	// (0x00050b4a) volume_small_pane_srt_g9_ParamLimits

0x5924,	// (0x00050b4a) volume_small_pane_srt_g9

0x5935,	// (0x00050b5b) volume_small_pane_srt_g10_ParamLimits

0x5935,	// (0x00050b5b) volume_small_pane_srt_g10

0x0009,

0xf768,	// (0x0005a98e) volume_small_pane_srt_g_ParamLimits

0xf768,	// (0x0005a98e) volume_small_pane_srt_g

0x7baa,	// (0x00052dd0) query_popup_data_pane_cp2

0xb296,	// (0x000564bc) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb296,	// (0x000564bc) navi_navi_icon_text_pane_srt_t1

0xa3d3,	// (0x000555f9) navi_tabs_2_long_pane_srt

0xa3d3,	// (0x000555f9) navi_tabs_2_pane_srt

0xa3d3,	// (0x000555f9) navi_tabs_3_long_pane_srt

0xa3d3,	// (0x000555f9) navi_tabs_3_pane_srt

0xa3d3,	// (0x000555f9) navi_tabs_4_pane_srt

0x6600,	// (0x00051826) tabs_2_active_pane_srt_ParamLimits

0x6600,	// (0x00051826) tabs_2_active_pane_srt

0x6610,	// (0x00051836) tabs_2_passive_pane_srt_ParamLimits

0x6610,	// (0x00051836) tabs_2_passive_pane_srt

0x9623,	// (0x00054849) bg_passive_tab_pane_cp1_srt_ParamLimits

0x9623,	// (0x00054849) bg_passive_tab_pane_cp1_srt

0xb262,	// (0x00056488) bg_passive_tab_pane_g1_cp1_srt

0x8f24,	// (0x0005414a) bg_passive_tab_pane_g2_cp1_srt

0xb26b,	// (0x00056491) bg_passive_tab_pane_g3_cp1_srt

0x77d0,	// (0x000529f6) bg_active_tab_pane_cp1_srt_ParamLimits

0x77d0,	// (0x000529f6) bg_active_tab_pane_cp1_srt

0xb274,	// (0x0005649a) tabs_2_active_pane_srt_g1

0xb27c,	// (0x000564a2) tabs_2_active_pane_srt_t1_ParamLimits

0xb27c,	// (0x000564a2) tabs_2_active_pane_srt_t1

0xb262,	// (0x00056488) bg_active_tab_pane_g1_cp1_srt

0x8f24,	// (0x0005414a) bg_active_tab_pane_g2_cp1_srt

0xb26b,	// (0x00056491) bg_active_tab_pane_g3_cp1_srt

0x65cd,	// (0x000517f3) tabs_3_active_pane_srt_ParamLimits

0x65cd,	// (0x000517f3) tabs_3_active_pane_srt

0x65de,	// (0x00051804) tabs_3_passive_pane_cp_srt_ParamLimits

0x65de,	// (0x00051804) tabs_3_passive_pane_cp_srt

0x65ef,	// (0x00051815) tabs_3_passive_pane_srt_ParamLimits

0x65ef,	// (0x00051815) tabs_3_passive_pane_srt

0x9623,	// (0x00054849) bg_passive_tab_pane_cp2_srt_ParamLimits

0x9623,	// (0x00054849) bg_passive_tab_pane_cp2_srt

0x9489,	// (0x000546af) bg_passive_tab_pane_g1_cp2_srt

0x8f24,	// (0x0005414a) bg_passive_tab_pane_g2_cp2_srt

0x9492,	// (0x000546b8) bg_passive_tab_pane_g3_cp2_srt

0x77d0,	// (0x000529f6) bg_active_tab_pane_cp2_srt_ParamLimits

0x77d0,	// (0x000529f6) bg_active_tab_pane_cp2_srt

0xb248,	// (0x0005646e) tabs_3_active_pane_srt_g1

0xb250,	// (0x00056476) tabs_3_active_pane_srt_t1_ParamLimits

0xb250,	// (0x00056476) tabs_3_active_pane_srt_t1

0x9489,	// (0x000546af) bg_active_tab_pane_g1_cp2_srt

0x8f24,	// (0x0005414a) bg_active_tab_pane_g2_cp2_srt

0x9492,	// (0x000546b8) bg_active_tab_pane_g3_cp2_srt

0x6585,	// (0x000517ab) tabs_4_active_pane_srt_ParamLimits

0x6585,	// (0x000517ab) tabs_4_active_pane_srt

0x6597,	// (0x000517bd) tabs_4_passive_pane_cp2_srt_ParamLimits

0x6597,	// (0x000517bd) tabs_4_passive_pane_cp2_srt

0x5a9a,	// (0x00050cc0) aid_size_cell_toolbar

0x8832,	// (0x00053a58) main_idle_act_pane_ParamLimits

0x5c5b,	// (0x00050e81) popup_large_graphic_colour_window_ParamLimits

0x5fc2,	// (0x000511e8) popup_toolbar_window_ParamLimits

0x5fc2,	// (0x000511e8) popup_toolbar_window

0xb0bc,	// (0x000562e2) list_single_graphic_2heading_pane_ParamLimits

0xb0bc,	// (0x000562e2) list_single_graphic_2heading_pane

0x89ee,	// (0x00053c14) aid_size_cell_apps_grid_lsc_pane

0x8a00,	// (0x00053c26) aid_size_cell_apps_grid_prt_pane

0x9623,	// (0x00054849) bg_wml_button_pane_cp1_ParamLimits

0x9623,	// (0x00054849) bg_wml_button_pane_cp1

0x9dc5,	// (0x00054feb) form_midp_field_text_pane_t1_ParamLimits

0x9b8f,	// (0x00054db5) input_focus_pane_cp050_ParamLimits

0x9dfc,	// (0x00055022) list_midp_form_text_pane_ParamLimits

0x9da2,	// (0x00054fc8) input_focus_pane_cp051_ParamLimits

0x9db6,	// (0x00054fdc) list_midp_choice_pane_ParamLimits

0x9c48,	// (0x00054e6e) list_single_2graphic_pane_cp3_ParamLimits

0x9c48,	// (0x00054e6e) list_single_2graphic_pane_cp3

0x9c6c,	// (0x00054e92) list_single_midp_graphic_pane_ParamLimits

0x9c6c,	// (0x00054e92) list_single_midp_graphic_pane

0x4888,	// (0x0004faae) list_single_graphic_2heading_pane_g1_ParamLimits

0x4888,	// (0x0004faae) list_single_graphic_2heading_pane_g1

0x4894,	// (0x0004faba) list_single_graphic_2heading_pane_g4_ParamLimits

0x4894,	// (0x0004faba) list_single_graphic_2heading_pane_g4

0x48a0,	// (0x0004fac6) list_single_graphic_2heading_pane_g5_ParamLimits

0x48a0,	// (0x0004fac6) list_single_graphic_2heading_pane_g5

0x0002,

0xf7bb,	// (0x0005a9e1) list_single_graphic_2heading_pane_g_ParamLimits

0xf7bb,	// (0x0005a9e1) list_single_graphic_2heading_pane_g

0x48ac,	// (0x0004fad2) list_single_graphic_2heading_pane_t1_ParamLimits

0x48ac,	// (0x0004fad2) list_single_graphic_2heading_pane_t1

0x48c0,	// (0x0004fae6) list_single_graphic_2heading_pane_t2_ParamLimits

0x48c0,	// (0x0004fae6) list_single_graphic_2heading_pane_t2

0x48dc,	// (0x0004fb02) list_single_graphic_2heading_pane_t3_ParamLimits

0x48dc,	// (0x0004fb02) list_single_graphic_2heading_pane_t3

0x0002,

0xf7c2,	// (0x0005a9e8) list_single_graphic_2heading_pane_t_ParamLimits

0xf7c2,	// (0x0005a9e8) list_single_graphic_2heading_pane_t

0x9a59,	// (0x00054c7f) bg_popup_sub_pane_cp2

0x9a83,	// (0x00054ca9) grid_toobar_pane

0x606f,	// (0x00051295) cell_toolbar_pane_ParamLimits

0x606f,	// (0x00051295) cell_toolbar_pane

0x9abf,	// (0x00054ce5) cell_toolbar_pane_g1_ParamLimits

0x9abf,	// (0x00054ce5) cell_toolbar_pane_g1

0x9ad3,	// (0x00054cf9) cell_toolbar_pane_g2_ParamLimits

0x9ad3,	// (0x00054cf9) cell_toolbar_pane_g2

0x0001,

0xf7d0,	// (0x0005a9f6) cell_toolbar_pane_g_ParamLimits

0xf7d0,	// (0x0005a9f6) cell_toolbar_pane_g

0x9af5,	// (0x00054d1b) grid_highlight_pane_cp2_ParamLimits

0x9af5,	// (0x00054d1b) grid_highlight_pane_cp2

0x9b0f,	// (0x00054d35) toolbar_button_pane

0x9b1b,	// (0x00054d41) toolbar_button_pane_g1

0x9b23,	// (0x00054d49) toolbar_button_pane_g2

0x9b2b,	// (0x00054d51) toolbar_button_pane_g3

0x9b33,	// (0x00054d59) toolbar_button_pane_g4

0x9b3b,	// (0x00054d61) toolbar_button_pane_g5

0x9b43,	// (0x00054d69) toolbar_button_pane_g6

0x9b4b,	// (0x00054d71) toolbar_button_pane_g7

0x9b53,	// (0x00054d79) toolbar_button_pane_g8

0x9b5b,	// (0x00054d81) toolbar_button_pane_g9

0x0009,

0xf7d5,	// (0x0005a9fb) toolbar_button_pane_g

0x60c9,	// (0x000512ef) list_single_2graphic_pane_g1_cp3_ParamLimits

0x60c9,	// (0x000512ef) list_single_2graphic_pane_g1_cp3

0x60d5,	// (0x000512fb) list_single_2graphic_pane_g2_cp3_ParamLimits

0x60d5,	// (0x000512fb) list_single_2graphic_pane_g2_cp3

0x60e6,	// (0x0005130c) list_single_2graphic_pane_g3_cp3

0x60ee,	// (0x00051314) list_single_2graphic_pane_g4_cp3_ParamLimits

0x60ee,	// (0x00051314) list_single_2graphic_pane_g4_cp3

0x60fa,	// (0x00051320) list_single_2graphic_pane_t1_cp3_ParamLimits

0x60fa,	// (0x00051320) list_single_2graphic_pane_t1_cp3

0x6142,	// (0x00051368) list_single_midp_graphic_pane_g2_ParamLimits

0x6142,	// (0x00051368) list_single_midp_graphic_pane_g2

0x4880,	// (0x0004faa6) aid_zoom_text_primary

0x5aa2,	// (0x00050cc8) aid_zoom_text_secondary

0x9546,	// (0x0005476c) status_small_pane_g7_ParamLimits

0x9546,	// (0x0005476c) status_small_pane_g7

0x9569,	// (0x0005478f) status_small_pane_t1_ParamLimits

0x7707,	// (0x0005292d) title_pane_g2

0x0003,

0xf554,	// (0x0005a77a) title_pane_g

0x7c4b,	// (0x00052e71) aid_size_cell_colour_1_pane_ParamLimits

0x7c4b,	// (0x00052e71) aid_size_cell_colour_1_pane

0x7c5f,	// (0x00052e85) aid_size_cell_colour_2_pane_ParamLimits

0x7c5f,	// (0x00052e85) aid_size_cell_colour_2_pane

0x7c73,	// (0x00052e99) aid_size_cell_colour_3_pane_ParamLimits

0x7c73,	// (0x00052e99) aid_size_cell_colour_3_pane

0x7c87,	// (0x00052ead) aid_size_cell_colour_4_pane_ParamLimits

0x7c87,	// (0x00052ead) aid_size_cell_colour_4_pane

0x548c,	// (0x000506b2) title_pane_stacon_g1_ParamLimits

0x548c,	// (0x000506b2) title_pane_stacon_g1

0xa1ba,	// (0x000553e0) popup_note_wait_window_g3_ParamLimits

0xa1ba,	// (0x000553e0) popup_note_wait_window_g3

0xa230,	// (0x00055456) popup_note_wait_window_t5_ParamLimits

0xa230,	// (0x00055456) popup_note_wait_window_t5

0x76f0,	// (0x00052916) main_feb_china_hwr_fs_writing_pane

0x5b40,	// (0x00050d66) popup_feb_china_hwr_fs_window_ParamLimits

0x5b40,	// (0x00050d66) popup_feb_china_hwr_fs_window

0x61d0,	// (0x000513f6) aid_size_cell_hwr_fs_ParamLimits

0x61d0,	// (0x000513f6) aid_size_cell_hwr_fs

0x9b8f,	// (0x00054db5) bg_popup_sub_pane_cp3_ParamLimits

0x9b8f,	// (0x00054db5) bg_popup_sub_pane_cp3

0x61e5,	// (0x0005140b) grid_hwr_fs_pane_ParamLimits

0x61e5,	// (0x0005140b) grid_hwr_fs_pane

0x61fd,	// (0x00051423) linegrid_hwr_fs_pane_ParamLimits

0x61fd,	// (0x00051423) linegrid_hwr_fs_pane

0x620d,	// (0x00051433) cell_hwr_fs_pane_ParamLimits

0x620d,	// (0x00051433) cell_hwr_fs_pane

0x9b9b,	// (0x00054dc1) linegrid_hwr_fs_pane_g1_ParamLimits

0x9b9b,	// (0x00054dc1) linegrid_hwr_fs_pane_g1

0x9ba7,	// (0x00054dcd) linegrid_hwr_fs_pane_g2_ParamLimits

0x9ba7,	// (0x00054dcd) linegrid_hwr_fs_pane_g2

0x9bb9,	// (0x00054ddf) linegrid_hwr_fs_pane_g3_ParamLimits

0x9bb9,	// (0x00054ddf) linegrid_hwr_fs_pane_g3

0x622f,	// (0x00051455) linegrid_hwr_fs_pane_g4_ParamLimits

0x622f,	// (0x00051455) linegrid_hwr_fs_pane_g4

0x6249,	// (0x0005146f) linegrid_hwr_fs_pane_g5_ParamLimits

0x6249,	// (0x0005146f) linegrid_hwr_fs_pane_g5

0x0004,

0xf800,	// (0x0005aa26) linegrid_hwr_fs_pane_g_ParamLimits

0xf800,	// (0x0005aa26) linegrid_hwr_fs_pane_g

0x9bc5,	// (0x00054deb) cell_hwr_fs_pane_g1_ParamLimits

0x9bc5,	// (0x00054deb) cell_hwr_fs_pane_g1

0x9990,	// (0x00054bb6) cell_hwr_fs_pane_g2_ParamLimits

0x9990,	// (0x00054bb6) cell_hwr_fs_pane_g2

0x9bdb,	// (0x00054e01) cell_hwr_fs_pane_g3_ParamLimits

0x9bdb,	// (0x00054e01) cell_hwr_fs_pane_g3

0x9be8,	// (0x00054e0e) cell_hwr_fs_pane_g4_ParamLimits

0x9be8,	// (0x00054e0e) cell_hwr_fs_pane_g4

0x0003,

0xf80b,	// (0x0005aa31) cell_hwr_fs_pane_g_ParamLimits

0xf80b,	// (0x0005aa31) cell_hwr_fs_pane_g

0x625f,	// (0x00051485) cell_hwr_fs_pane_t1

0x76f0,	// (0x00052916) grid_highlight_pane_cp6

0x76f0,	// (0x00052916) main_idle_act2_pane

0x87a5,	// (0x000539cb) aid_inside_area_popup_secondary

0xa867,	// (0x00055a8d) aid_inside_area_window_primary_ParamLimits

0xa867,	// (0x00055a8d) aid_inside_area_window_primary

0xb3af,	// (0x000565d5) ai2_news_ticker_pane

0xb3f9,	// (0x0005661f) aid_size_cell_ai1_link_ParamLimits

0xb3f9,	// (0x0005661f) aid_size_cell_ai1_link

0xb413,	// (0x00056639) popup_ai2_data_window_ParamLimits

0xb413,	// (0x00056639) popup_ai2_data_window

0xb429,	// (0x0005664f) popup_ai2_link_window_ParamLimits

0xb429,	// (0x0005664f) popup_ai2_link_window

0x9b8f,	// (0x00054db5) bg_popup_sub_pane_cp4_ParamLimits

0x9b8f,	// (0x00054db5) bg_popup_sub_pane_cp4

0xb43d,	// (0x00056663) grid_ai2_link_pane_ParamLimits

0xb43d,	// (0x00056663) grid_ai2_link_pane

0xb454,	// (0x0005667a) popup_ai2_link_window_g1_ParamLimits

0xb454,	// (0x0005667a) popup_ai2_link_window_g1

0xb460,	// (0x00056686) popup_ai2_link_window_g2_ParamLimits

0xb460,	// (0x00056686) popup_ai2_link_window_g2

0x0001,

0xf9de,	// (0x0005ac04) popup_ai2_link_window_g_ParamLimits

0xf9de,	// (0x0005ac04) popup_ai2_link_window_g

0xb46f,	// (0x00056695) ai2_mp_button_pane

0xb477,	// (0x0005669d) ai2_mp_volume_pane

0x9da2,	// (0x00054fc8) bg_popup_sub_pane_cp5_ParamLimits

0x9da2,	// (0x00054fc8) bg_popup_sub_pane_cp5

0xb47f,	// (0x000566a5) heading_ai2_gene_pane_ParamLimits

0xb47f,	// (0x000566a5) heading_ai2_gene_pane

0xb48b,	// (0x000566b1) list_ai2_gene_pane_ParamLimits

0xb48b,	// (0x000566b1) list_ai2_gene_pane

0xb4d3,	// (0x000566f9) cell_ai2_link_pane_ParamLimits

0xb4d3,	// (0x000566f9) cell_ai2_link_pane

0xb4e9,	// (0x0005670f) cell_ai2_link_pane_g1

0x76f0,	// (0x00052916) grid_highlight_pane_cp7

0x663d,	// (0x00051863) ai2_mp_volume_pane_g1

0xb5b9,	// (0x000567df) ai2_mp_volume_pane_g2

0xb52e,	// (0x00056754) list_ai2_gene_pane_t1

0xb5c1,	// (0x000567e7) ai2_mp_volume_pane_g3

0x0002,

0xf9f7,	// (0x0005ac1d) ai2_mp_volume_pane_g

0x6645,	// (0x0005186b) volume_small_pane_cp3

0xb5c9,	// (0x000567ef) aid_size_cell_ai2_button

0xb5d1,	// (0x000567f7) grid_ai2_button_pane

0xb5da,	// (0x00056800) cell_ai2_button_pane_ParamLimits

0xb5da,	// (0x00056800) cell_ai2_button_pane

0x76e6,	// (0x0005290c) cell_ai2_button_pane_g1

0x76f0,	// (0x00052916) grid_highlight_pane_cp8

0xb579,	// (0x0005679f) ai2_gene_pane_t1_ParamLimits

0xb579,	// (0x0005679f) ai2_gene_pane_t1

0x5a90,	// (0x00050cb6) aid_height_parent_landscape

0xaef3,	// (0x00056119) aid_height_set_list

0xaf04,	// (0x0005612a) aid_size_parent

0xb1d6,	// (0x000563fc) aid_size_cell_graphic_pane_ParamLimits

0xb49b,	// (0x000566c1) popup_ai2_data_window_g1_ParamLimits

0xb49b,	// (0x000566c1) popup_ai2_data_window_g1

0xb4a7,	// (0x000566cd) ai2_news_ticker_pane_g1

0xb4af,	// (0x000566d5) ai2_news_ticker_pane_g2

0x0001,

0xf9e3,	// (0x0005ac09) ai2_news_ticker_pane_g

0xb4b7,	// (0x000566dd) ai2_news_ticker_pane_t1

0xb4c5,	// (0x000566eb) ai2_news_ticker_pane_t2

0x0001,

0xf9e8,	// (0x0005ac0e) ai2_news_ticker_pane_t

0xb4f2,	// (0x00056718) heading_ai2_gene_pane_g1

0xb4fa,	// (0x00056720) heading_ai2_gene_pane_t1_ParamLimits

0xb4fa,	// (0x00056720) heading_ai2_gene_pane_t1

0xb50f,	// (0x00056735) list_highlight_pane_cp6

0xb517,	// (0x0005673d) ai2_gene_pane_ParamLimits

0xb517,	// (0x0005673d) ai2_gene_pane

0xb53c,	// (0x00056762) list_ai2_gene_pane_t2

0x0001,

0xf9ed,	// (0x0005ac13) list_ai2_gene_pane_t

0xb54a,	// (0x00056770) list_highlight_pane_cp8_ParamLimits

0xb54a,	// (0x00056770) list_highlight_pane_cp8

0xb55b,	// (0x00056781) ai2_gene_pane_g1_ParamLimits

0xb55b,	// (0x00056781) ai2_gene_pane_g1

0xb56d,	// (0x00056793) ai2_gene_pane_g2_ParamLimits

0xb56d,	// (0x00056793) ai2_gene_pane_g2

0x0001,

0xf9f2,	// (0x0005ac18) ai2_gene_pane_g_ParamLimits

0xf9f2,	// (0x0005ac18) ai2_gene_pane_g

0x85e4,	// (0x0005380a) scroll_pane_cp12

0x5a4f,	// (0x00050c75) control_pane_t3_ParamLimits

0x5a4f,	// (0x00050c75) control_pane_t3

0x955a,	// (0x00054780) status_small_pane_g8_ParamLimits

0x955a,	// (0x00054780) status_small_pane_g8

0x5c26,	// (0x00050e4c) popup_find_window_ParamLimits

0x5e39,	// (0x0005105f) popup_note_image_window_ParamLimits

0x609f,	// (0x000512c5) list_double2_graphic_pane_vc_g1_ParamLimits

0x609f,	// (0x000512c5) list_double2_graphic_pane_vc_g1

0x921c,	// (0x00054442) list_double2_graphic_pane_vc_g2_ParamLimits

0x921c,	// (0x00054442) list_double2_graphic_pane_vc_g2

0x7dbd,	// (0x00052fe3) list_double2_graphic_pane_vc_g3_ParamLimits

0x7dbd,	// (0x00052fe3) list_double2_graphic_pane_vc_g3

0x0002,

0xf7c9,	// (0x0005a9ef) list_double2_graphic_pane_vc_g_ParamLimits

0xf7c9,	// (0x0005a9ef) list_double2_graphic_pane_vc_g

0x60ab,	// (0x000512d1) list_double2_graphic_pane_vc_t1_ParamLimits

0x60ab,	// (0x000512d1) list_double2_graphic_pane_vc_t1

0x921c,	// (0x00054442) list_single_heading_pane_vc_g1_ParamLimits

0x921c,	// (0x00054442) list_single_heading_pane_vc_g1

0x7dbd,	// (0x00052fe3) list_single_heading_pane_vc_g2_ParamLimits

0x7dbd,	// (0x00052fe3) list_single_heading_pane_vc_g2

0x0001,

0xf7ea,	// (0x0005aa10) list_single_heading_pane_vc_g_ParamLimits

0xf7ea,	// (0x0005aa10) list_single_heading_pane_vc_g

0x6116,	// (0x0005133c) list_single_heading_pane_vc_t1_ParamLimits

0x6116,	// (0x0005133c) list_single_heading_pane_vc_t1

0x612e,	// (0x00051354) list_single_heading_pane_vc_t2_ParamLimits

0x612e,	// (0x00051354) list_single_heading_pane_vc_t2

0x0001,

0xf7ef,	// (0x0005aa15) list_single_heading_pane_vc_t_ParamLimits

0xf7ef,	// (0x0005aa15) list_single_heading_pane_vc_t

0x7dc9,	// (0x00052fef) list_setting_number_pane_vc_g1_ParamLimits

0x7dc9,	// (0x00052fef) list_setting_number_pane_vc_g1

0x7dd5,	// (0x00052ffb) list_setting_number_pane_vc_g2_ParamLimits

0x7dd5,	// (0x00052ffb) list_setting_number_pane_vc_g2

0x0001,

0xf7f4,	// (0x0005aa1a) list_setting_number_pane_vc_g_ParamLimits

0xf7f4,	// (0x0005aa1a) list_setting_number_pane_vc_g

0x6164,	// (0x0005138a) list_setting_number_pane_vc_t1_ParamLimits

0x6164,	// (0x0005138a) list_setting_number_pane_vc_t1

0x6178,	// (0x0005139e) list_setting_number_pane_vc_t2_ParamLimits

0x6178,	// (0x0005139e) list_setting_number_pane_vc_t2

0x6194,	// (0x000513ba) list_setting_number_pane_vc_t3_ParamLimits

0x6194,	// (0x000513ba) list_setting_number_pane_vc_t3

0x0002,

0xf7f9,	// (0x0005aa1f) list_setting_number_pane_vc_t_ParamLimits

0xf7f9,	// (0x0005aa1f) list_setting_number_pane_vc_t

0x61c0,	// (0x000513e6) set_value_pane_vc_ParamLimits

0x61c0,	// (0x000513e6) set_value_pane_vc

0xb0bc,	// (0x000562e2) list_double2_graphic_pane_vc_ParamLimits

0xb0bc,	// (0x000562e2) list_double2_graphic_pane_vc

0x6541,	// (0x00051767) list_double2_large_graphic_pane_vc_ParamLimits

0x6541,	// (0x00051767) list_double2_large_graphic_pane_vc

0xb0bc,	// (0x000562e2) list_double2_pane_vc_ParamLimits

0xb0bc,	// (0x000562e2) list_double2_pane_vc

0xb0bc,	// (0x000562e2) list_double_graphic_heading_pane_vc_ParamLimits

0xb0bc,	// (0x000562e2) list_double_graphic_heading_pane_vc

0xb0bc,	// (0x000562e2) list_double_graphic_pane_vc_ParamLimits

0xb0bc,	// (0x000562e2) list_double_graphic_pane_vc

0xb0bc,	// (0x000562e2) list_double_heading_pane_vc_ParamLimits

0xb0bc,	// (0x000562e2) list_double_heading_pane_vc

0x6541,	// (0x00051767) list_double_large_graphic_pane_vc_ParamLimits

0x6541,	// (0x00051767) list_double_large_graphic_pane_vc

0xb0bc,	// (0x000562e2) list_double_number_pane_vc_ParamLimits

0xb0bc,	// (0x000562e2) list_double_number_pane_vc

0xb0bc,	// (0x000562e2) list_double_pane_vc_ParamLimits

0xb0bc,	// (0x000562e2) list_double_pane_vc

0xb0bc,	// (0x000562e2) list_double_time_pane_vc_ParamLimits

0xb0bc,	// (0x000562e2) list_double_time_pane_vc

0xb0bc,	// (0x000562e2) list_setting_number_pane_vc_ParamLimits

0xb0bc,	// (0x000562e2) list_setting_number_pane_vc

0xb0bc,	// (0x000562e2) list_setting_pane_vc_ParamLimits

0xb0bc,	// (0x000562e2) list_setting_pane_vc

0xb0bc,	// (0x000562e2) list_single_graphic_heading_pane_vc_ParamLimits

0xb0bc,	// (0x000562e2) list_single_graphic_heading_pane_vc

0xb0bc,	// (0x000562e2) list_single_heading_pane_vc_ParamLimits

0xb0bc,	// (0x000562e2) list_single_heading_pane_vc

0x7dfc,	// (0x00053022) list_single_number_heading_pane_vc_ParamLimits

0x7dfc,	// (0x00053022) list_single_number_heading_pane_vc

0x609f,	// (0x000512c5) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x609f,	// (0x000512c5) list_double_graphic_heading_pane_vc_g1

0x921c,	// (0x00054442) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x921c,	// (0x00054442) list_double_graphic_heading_pane_vc_g2

0x7dbd,	// (0x00052fe3) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x7dbd,	// (0x00052fe3) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7c9,	// (0x0005a9ef) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7c9,	// (0x0005a9ef) list_double_graphic_heading_pane_vc_g

0x664e,	// (0x00051874) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x664e,	// (0x00051874) list_double_graphic_heading_pane_vc_t1

0x666a,	// (0x00051890) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x666a,	// (0x00051890) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9fe,	// (0x0005ac24) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9fe,	// (0x0005ac24) list_double_graphic_heading_pane_vc_t

0x7dc9,	// (0x00052fef) list_setting_pane_vc_g1_ParamLimits

0x7dc9,	// (0x00052fef) list_setting_pane_vc_g1

0x7dd5,	// (0x00052ffb) list_setting_pane_vc_g2_ParamLimits

0x7dd5,	// (0x00052ffb) list_setting_pane_vc_g2

0x0001,

0xf7f4,	// (0x0005aa1a) list_setting_pane_vc_g_ParamLimits

0xf7f4,	// (0x0005aa1a) list_setting_pane_vc_g

0x6688,	// (0x000518ae) list_setting_pane_vc_t1_ParamLimits

0x6688,	// (0x000518ae) list_setting_pane_vc_t1

0x66a4,	// (0x000518ca) list_setting_pane_vc_t2_ParamLimits

0x66a4,	// (0x000518ca) list_setting_pane_vc_t2

0x0001,

0xfa2c,	// (0x0005ac52) list_setting_pane_vc_t_ParamLimits

0xfa2c,	// (0x0005ac52) list_setting_pane_vc_t

0x61c0,	// (0x000513e6) set_value_pane_cp_vc_ParamLimits

0x61c0,	// (0x000513e6) set_value_pane_cp_vc

0x921c,	// (0x00054442) list_single_number_heading_pane_vc_g1_ParamLimits

0x921c,	// (0x00054442) list_single_number_heading_pane_vc_g1

0x7dbd,	// (0x00052fe3) list_single_number_heading_pane_vc_g2_ParamLimits

0x7dbd,	// (0x00052fe3) list_single_number_heading_pane_vc_g2

0x0001,

0xf7ea,	// (0x0005aa10) list_single_number_heading_pane_vc_g_ParamLimits

0xf7ea,	// (0x0005aa10) list_single_number_heading_pane_vc_g

0x6116,	// (0x0005133c) list_single_number_heading_pane_vc_t1_ParamLimits

0x6116,	// (0x0005133c) list_single_number_heading_pane_vc_t1

0x66c0,	// (0x000518e6) list_single_number_heading_pane_vc_t2_ParamLimits

0x66c0,	// (0x000518e6) list_single_number_heading_pane_vc_t2

0x66d4,	// (0x000518fa) list_single_number_heading_pane_vc_t3_ParamLimits

0x66d4,	// (0x000518fa) list_single_number_heading_pane_vc_t3

0x0002,

0xfa31,	// (0x0005ac57) list_single_number_heading_pane_vc_t_ParamLimits

0xfa31,	// (0x0005ac57) list_single_number_heading_pane_vc_t

0x609f,	// (0x000512c5) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x609f,	// (0x000512c5) list_single_graphic_heading_pane_vc_g1

0x921c,	// (0x00054442) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x921c,	// (0x00054442) list_single_graphic_heading_pane_vc_g4

0x7dbd,	// (0x00052fe3) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x7dbd,	// (0x00052fe3) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7c9,	// (0x0005a9ef) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7c9,	// (0x0005a9ef) list_single_graphic_heading_pane_vc_g

0x6116,	// (0x0005133c) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x6116,	// (0x0005133c) list_single_graphic_heading_pane_vc_t1

0x66e6,	// (0x0005190c) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x66e6,	// (0x0005190c) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa38,	// (0x0005ac5e) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa38,	// (0x0005ac5e) list_single_graphic_heading_pane_vc_t

0x921c,	// (0x00054442) list_double2_pane_vc_g1_ParamLimits

0x921c,	// (0x00054442) list_double2_pane_vc_g1

0x7dbd,	// (0x00052fe3) list_double2_pane_vc_g2_ParamLimits

0x7dbd,	// (0x00052fe3) list_double2_pane_vc_g2

0x0001,

0xf7ea,	// (0x0005aa10) list_double2_pane_vc_g_ParamLimits

0xf7ea,	// (0x0005aa10) list_double2_pane_vc_g

0x66fa,	// (0x00051920) list_double2_pane_vc_t1_ParamLimits

0x66fa,	// (0x00051920) list_double2_pane_vc_t1

0x6710,	// (0x00051936) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x6710,	// (0x00051936) list_double2_large_graphic_pane_vc_g1

0x671c,	// (0x00051942) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x671c,	// (0x00051942) list_double2_large_graphic_pane_vc_g2

0x6728,	// (0x0005194e) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x6728,	// (0x0005194e) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa3d,	// (0x0005ac63) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa3d,	// (0x0005ac63) list_double2_large_graphic_pane_vc_g

0x6734,	// (0x0005195a) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x6734,	// (0x0005195a) list_double2_large_graphic_pane_vc_t1

0x7e77,	// (0x0005309d) list_double_time_pane_vc_g1_ParamLimits

0x7e77,	// (0x0005309d) list_double_time_pane_vc_g1

0x7e83,	// (0x000530a9) list_double_time_pane_vc_g2_ParamLimits

0x7e83,	// (0x000530a9) list_double_time_pane_vc_g2

0x0001,

0xfa44,	// (0x0005ac6a) list_double_time_pane_vc_g_ParamLimits

0xfa44,	// (0x0005ac6a) list_double_time_pane_vc_g

0x674a,	// (0x00051970) list_double_time_pane_vc_t1_ParamLimits

0x674a,	// (0x00051970) list_double_time_pane_vc_t1

0x676e,	// (0x00051994) list_double_time_pane_vc_t2_ParamLimits

0x676e,	// (0x00051994) list_double_time_pane_vc_t2

0x67bd,	// (0x000519e3) list_double_time_pane_vc_t3_ParamLimits

0x67bd,	// (0x000519e3) list_double_time_pane_vc_t3

0x67cf,	// (0x000519f5) list_double_time_pane_vc_t4_ParamLimits

0x67cf,	// (0x000519f5) list_double_time_pane_vc_t4

0x0003,

0xfa49,	// (0x0005ac6f) list_double_time_pane_vc_t_ParamLimits

0xfa49,	// (0x0005ac6f) list_double_time_pane_vc_t

0x921c,	// (0x00054442) list_double_pane_vc_g1_ParamLimits

0x921c,	// (0x00054442) list_double_pane_vc_g1

0x7dbd,	// (0x00052fe3) list_double_pane_vc_g2_ParamLimits

0x7dbd,	// (0x00052fe3) list_double_pane_vc_g2

0x0001,

0xf7ea,	// (0x0005aa10) list_double_pane_vc_g_ParamLimits

0xf7ea,	// (0x0005aa10) list_double_pane_vc_g

0x67e3,	// (0x00051a09) list_double_pane_vc_t1_ParamLimits

0x67e3,	// (0x00051a09) list_double_pane_vc_t1

0x67f7,	// (0x00051a1d) list_double_pane_vc_t2_ParamLimits

0x67f7,	// (0x00051a1d) list_double_pane_vc_t2

0x0001,

0xfa52,	// (0x0005ac78) list_double_pane_vc_t_ParamLimits

0xfa52,	// (0x0005ac78) list_double_pane_vc_t

0x921c,	// (0x00054442) list_double_number_pane_vc_g1_ParamLimits

0x921c,	// (0x00054442) list_double_number_pane_vc_g1

0x7dbd,	// (0x00052fe3) list_double_number_pane_vc_g2_ParamLimits

0x7dbd,	// (0x00052fe3) list_double_number_pane_vc_g2

0x0001,

0xf7ea,	// (0x0005aa10) list_double_number_pane_vc_g_ParamLimits

0xf7ea,	// (0x0005aa10) list_double_number_pane_vc_g

0x680f,	// (0x00051a35) list_double_number_pane_vc_t1_ParamLimits

0x680f,	// (0x00051a35) list_double_number_pane_vc_t1

0x6823,	// (0x00051a49) list_double_number_pane_vc_t2_ParamLimits

0x6823,	// (0x00051a49) list_double_number_pane_vc_t2

0x7e8f,	// (0x000530b5) list_double_number_pane_vc_t3_ParamLimits

0x7e8f,	// (0x000530b5) list_double_number_pane_vc_t3

0x0002,

0xfa57,	// (0x0005ac7d) list_double_number_pane_vc_t_ParamLimits

0xfa57,	// (0x0005ac7d) list_double_number_pane_vc_t

0x7ea7,	// (0x000530cd) list_double_large_graphic_pane_vc_g1_ParamLimits

0x7ea7,	// (0x000530cd) list_double_large_graphic_pane_vc_g1

0x7eb8,	// (0x000530de) list_double_large_graphic_pane_vc_g2_ParamLimits

0x7eb8,	// (0x000530de) list_double_large_graphic_pane_vc_g2

0x6728,	// (0x0005194e) list_double_large_graphic_pane_vc_g3_ParamLimits

0x6728,	// (0x0005194e) list_double_large_graphic_pane_vc_g3

0x7ec7,	// (0x000530ed) list_double_large_graphic_pane_vc_g4_ParamLimits

0x7ec7,	// (0x000530ed) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa5e,	// (0x0005ac84) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa5e,	// (0x0005ac84) list_double_large_graphic_pane_vc_g

0x7ed3,	// (0x000530f9) list_double_large_graphic_pane_vc_t1_ParamLimits

0x7ed3,	// (0x000530f9) list_double_large_graphic_pane_vc_t1

0x7eec,	// (0x00053112) list_double_large_graphic_pane_vc_t2_ParamLimits

0x7eec,	// (0x00053112) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa67,	// (0x0005ac8d) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa67,	// (0x0005ac8d) list_double_large_graphic_pane_vc_t

0x921c,	// (0x00054442) list_double_heading_pane_vc_g1_ParamLimits

0x921c,	// (0x00054442) list_double_heading_pane_vc_g1

0x7dbd,	// (0x00052fe3) list_double_heading_pane_vc_g2_ParamLimits

0x7dbd,	// (0x00052fe3) list_double_heading_pane_vc_g2

0x0001,

0xf7ea,	// (0x0005aa10) list_double_heading_pane_vc_g_ParamLimits

0xf7ea,	// (0x0005aa10) list_double_heading_pane_vc_g

0x7f05,	// (0x0005312b) list_double_heading_pane_vc_t1_ParamLimits

0x7f05,	// (0x0005312b) list_double_heading_pane_vc_t1

0x6116,	// (0x0005133c) list_double_heading_pane_vc_t2_ParamLimits

0x6116,	// (0x0005133c) list_double_heading_pane_vc_t2

0x0001,

0xfa6c,	// (0x0005ac92) list_double_heading_pane_vc_t_ParamLimits

0xfa6c,	// (0x0005ac92) list_double_heading_pane_vc_t

0x609f,	// (0x000512c5) list_double_graphic_pane_vc_g1_ParamLimits

0x609f,	// (0x000512c5) list_double_graphic_pane_vc_g1

0x7f19,	// (0x0005313f) list_double_graphic_pane_vc_g2_ParamLimits

0x7f19,	// (0x0005313f) list_double_graphic_pane_vc_g2

0xb61a,	// (0x00056840) list_double_graphic_pane_vc_g3_ParamLimits

0xb61a,	// (0x00056840) list_double_graphic_pane_vc_g3

0x0002,

0xfa71,	// (0x0005ac97) list_double_graphic_pane_vc_g_ParamLimits

0xfa71,	// (0x0005ac97) list_double_graphic_pane_vc_g

0x7f28,	// (0x0005314e) list_double_graphic_pane_vc_t1_ParamLimits

0x7f28,	// (0x0005314e) list_double_graphic_pane_vc_t1

0x7f3c,	// (0x00053162) list_double_graphic_pane_vc_t2_ParamLimits

0x7f3c,	// (0x00053162) list_double_graphic_pane_vc_t2

0x0001,

0xfa78,	// (0x0005ac9e) list_double_graphic_pane_vc_t_ParamLimits

0xfa78,	// (0x0005ac9e) list_double_graphic_pane_vc_t

0x490c,	// (0x0004fb32) aid_size_cell_fastswap

0x4914,	// (0x0004fb3a) aid_size_cell_touch_ParamLimits

0x4914,	// (0x0004fb3a) aid_size_cell_touch

0x4b79,	// (0x0004fd9f) popup_fast_swap_wide_window_ParamLimits

0x4b79,	// (0x0004fd9f) popup_fast_swap_wide_window

0x4c83,	// (0x0004fea9) touch_pane_ParamLimits

0x4c83,	// (0x0004fea9) touch_pane

0x8646,	// (0x0005386c) button_value_adjust_pane_cp2

0x51e6,	// (0x0005040c) button_value_adjust_pane_cp4

0x520a,	// (0x00050430) form_field_data_pane_cp2

0x522b,	// (0x00050451) form_field_data_wide_pane_cp2

0x8ab9,	// (0x00053cdf) bg_scroll_pane_ParamLimits

0x55ee,	// (0x00050814) scroll_handle_pane_ParamLimits

0x5602,	// (0x00050828) scroll_sc2_down_pane_ParamLimits

0x5602,	// (0x00050828) scroll_sc2_down_pane

0x8aea,	// (0x00053d10) scroll_sc2_up_pane_ParamLimits

0x8aea,	// (0x00053d10) scroll_sc2_up_pane

0xbcb1,	// (0x00056ed7) grid_wheel_folder_pane_g1_ParamLimits

0xbcb1,	// (0x00056ed7) grid_wheel_folder_pane_g1

0x5835,	// (0x00050a5b) clock_nsta_pane_cp2_ParamLimits

0x5835,	// (0x00050a5b) clock_nsta_pane_cp2

0x8832,	// (0x00053a58) listscroll_midp_pane_ParamLimits

0x92eb,	// (0x00054511) midp_canvas_pane

0x95d5,	// (0x000547fb) nsta_clock_indic_pane

0x9609,	// (0x0005482f) listscroll_form_pane_vc

0x9611,	// (0x00054837) listscroll_set_pane_vc_ParamLimits

0x9611,	// (0x00054837) listscroll_set_pane_vc

0x9712,	// (0x00054938) clock_nsta_pane

0x9787,	// (0x000549ad) indicator_nsta_pane

0x9a59,	// (0x00054c7f) bg_popup_sub_pane_cp2_ParamLimits

0x9a6d,	// (0x00054c93) find_pane_cp2_ParamLimits

0x9a6d,	// (0x00054c93) find_pane_cp2

0x9a83,	// (0x00054ca9) grid_toobar_pane_ParamLimits

0x9b63,	// (0x00054d89) list_form_gen_pane_vc_ParamLimits

0x9b63,	// (0x00054d89) list_form_gen_pane_vc

0x9b79,	// (0x00054d9f) scroll_pane_cp8_vc_ParamLimits

0x9b79,	// (0x00054d9f) scroll_pane_cp8_vc

0x9bf5,	// (0x00054e1b) data_form_wide_pane_vc_ParamLimits

0x9bf5,	// (0x00054e1b) data_form_wide_pane_vc

0x9c01,	// (0x00054e27) form_field_data_wide_pane_vc_g1

0x9c09,	// (0x00054e2f) form_field_data_wide_pane_vc_t1_ParamLimits

0x9c09,	// (0x00054e2f) form_field_data_wide_pane_vc_t1

0x865a,	// (0x00053880) input_focus_pane_cp6_vc_ParamLimits

0x865a,	// (0x00053880) input_focus_pane_cp6_vc

0x9f35,	// (0x0005515b) list_midp_pane_ParamLimits

0x9f41,	// (0x00055167) scroll_pane_cp16_ParamLimits

0x9f41,	// (0x00055167) scroll_pane_cp16

0x9f8f,	// (0x000551b5) button_value_adjust_pane_ParamLimits

0x9f8f,	// (0x000551b5) button_value_adjust_pane

0xaf16,	// (0x0005613c) button_value_adjust_pane_cp6_ParamLimits

0xaf16,	// (0x0005613c) button_value_adjust_pane_cp6

0xb040,	// (0x00056266) settings_code_pane_cp_ParamLimits

0xb040,	// (0x00056266) settings_code_pane_cp

0x76e6,	// (0x0005290c) cell_touch_pane_g1

0x76e6,	// (0x0005290c) cell_touch_pane_g2

0x0001,

0xf70e,	// (0x0005a934) cell_touch_pane_g

0xb5ec,	// (0x00056812) cell_touch_pane_cp_ParamLimits

0xb5ec,	// (0x00056812) cell_touch_pane_cp

0xb5fc,	// (0x00056822) cell_touch_pane_ParamLimits

0xb5fc,	// (0x00056822) cell_touch_pane

0x76e6,	// (0x0005290c) scroll_sc2_down_pane_g1

0x76e6,	// (0x0005290c) scroll_sc2_up_pane_g1

0x76f0,	// (0x00052916) bg_set_opt_pane_cp4_vc

0xb60e,	// (0x00056834) list_set_graphic_pane_vc_g1_ParamLimits

0xb60e,	// (0x00056834) list_set_graphic_pane_vc_g1

0xb61a,	// (0x00056840) list_set_graphic_pane_vc_g2_ParamLimits

0xb61a,	// (0x00056840) list_set_graphic_pane_vc_g2

0x0001,

0xfa03,	// (0x0005ac29) list_set_graphic_pane_vc_g_ParamLimits

0xfa03,	// (0x0005ac29) list_set_graphic_pane_vc_g

0xb626,	// (0x0005684c) text_primary_small_cp13_vc_ParamLimits

0xb626,	// (0x0005684c) text_primary_small_cp13_vc

0xb63e,	// (0x00056864) list_set_graphic_pane_vc_ParamLimits

0xb63e,	// (0x00056864) list_set_graphic_pane_vc

0x76f0,	// (0x00052916) input_focus_pane_cp2_vc

0x76e6,	// (0x0005290c) setting_code_pane_vc_g1

0x781b,	// (0x00052a41) setting_code_pane_vc_t1

0xb650,	// (0x00056876) set_text_pane_vc_t1_ParamLimits

0xb650,	// (0x00056876) set_text_pane_vc_t1

0x76f0,	// (0x00052916) input_focus_pane_cp1_vc

0xb66c,	// (0x00056892) list_set_text_pane_vc

0x76e6,	// (0x0005290c) setting_text_pane_vc_g1

0x76f0,	// (0x00052916) bg_set_opt_pane_cp2_vc

0x7812,	// (0x00052a38) setting_slider_graphic_pane_vc_g1

0xb676,	// (0x0005689c) setting_slider_graphic_pane_vc_t1

0xb686,	// (0x000568ac) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa08,	// (0x0005ac2e) setting_slider_graphic_pane_vc_t

0xb696,	// (0x000568bc) slider_set_pane_cp_vc

0xb69e,	// (0x000568c4) slider_set_pane_vc_g1

0xb6a7,	// (0x000568cd) slider_set_pane_vc_g2

0x0006,

0xfa0d,	// (0x0005ac33) slider_set_pane_vc_g

0x86a9,	// (0x000538cf) set_opt_bg_pane_g1_copy1

0x86b1,	// (0x000538d7) set_opt_bg_pane_g2_copy1

0xb6d3,	// (0x000568f9) set_opt_bg_pane_g3_copy1

0x86c1,	// (0x000538e7) set_opt_bg_pane_g4_copy1

0x86c9,	// (0x000538ef) set_opt_bg_pane_g5_copy1

0x86d1,	// (0x000538f7) set_opt_bg_pane_g6_copy1

0xb6dd,	// (0x00056903) set_opt_bg_pane_g7_copy1

0xb6e5,	// (0x0005690b) set_opt_bg_pane_g8_copy1

0xb6ef,	// (0x00056915) set_opt_bg_pane_g9_copy1

0x76f0,	// (0x00052916) bg_set_opt_pane_cp_vc

0xb6f9,	// (0x0005691f) setting_slider_pane_vc_t1

0xb708,	// (0x0005692e) setting_slider_pane_vc_t2

0xb718,	// (0x0005693e) setting_slider_pane_vc_t3

0x0002,

0xfa1c,	// (0x0005ac42) setting_slider_pane_vc_t

0xb728,	// (0x0005694e) slider_set_pane_vc

0x62a7,	// (0x000514cd) volume_set_pane_vc_g1

0x62b0,	// (0x000514d6) volume_set_pane_vc_g2

0x62b9,	// (0x000514df) volume_set_pane_vc_g3

0x62c2,	// (0x000514e8) volume_set_pane_vc_g4

0x62cb,	// (0x000514f1) volume_set_pane_vc_g5

0x62d4,	// (0x000514fa) volume_set_pane_vc_g6

0x62dd,	// (0x00051503) volume_set_pane_vc_g7

0x62e6,	// (0x0005150c) volume_set_pane_vc_g8

0x62ef,	// (0x00051515) volume_set_pane_vc_g9

0x62f8,	// (0x0005151e) volume_set_pane_vc_g10

0x0009,

0xf8c1,	// (0x0005aae7) volume_set_pane_vc_g

0xb730,	// (0x00056956) volume_set_pane_vc

0xb738,	// (0x0005695e) button_value_adjust_pane_cp1_vc

0xb742,	// (0x00056968) list_highlight_pane_cp2_vc

0xb74b,	// (0x00056971) list_set_pane_vc_ParamLimits

0xb74b,	// (0x00056971) list_set_pane_vc

0xb7a9,	// (0x000569cf) main_pane_set_vc_t1_ParamLimits

0xb7a9,	// (0x000569cf) main_pane_set_vc_t1

0xb7be,	// (0x000569e4) main_pane_set_vc_t2_ParamLimits

0xb7be,	// (0x000569e4) main_pane_set_vc_t2

0xb7d0,	// (0x000569f6) main_pane_set_vc_t3_ParamLimits

0xb7d0,	// (0x000569f6) main_pane_set_vc_t3

0xb7e4,	// (0x00056a0a) main_pane_set_vc_t4_ParamLimits

0xb7e4,	// (0x00056a0a) main_pane_set_vc_t4

0x0003,

0xfa23,	// (0x0005ac49) main_pane_set_vc_t_ParamLimits

0xfa23,	// (0x0005ac49) main_pane_set_vc_t

0xb7f8,	// (0x00056a1e) setting_code_pane_vc_ParamLimits

0xb7f8,	// (0x00056a1e) setting_code_pane_vc

0xb809,	// (0x00056a2f) setting_slider_graphic_pane_vc

0xb809,	// (0x00056a2f) setting_slider_pane_vc

0xb809,	// (0x00056a2f) setting_text_pane_vc

0xb809,	// (0x00056a2f) setting_volume_pane_vc

0xb813,	// (0x00056a39) scroll_pane_cp121_vc

0x8634,	// (0x0005385a) set_content_pane_vc

0xb81b,	// (0x00056a41) button_value_adjust_pane_g1

0xb824,	// (0x00056a4a) button_value_adjust_pane_g2

0x0001,

0xfa7d,	// (0x0005aca3) button_value_adjust_pane_g

0xb82d,	// (0x00056a53) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb82d,	// (0x00056a53) form_field_slider_wide_pane_vc_t1

0xb841,	// (0x00056a67) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb841,	// (0x00056a67) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa82,	// (0x0005aca8) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa82,	// (0x0005aca8) form_field_slider_wide_pane_vc_t

0x7a4b,	// (0x00052c71) input_focus_pane_cp10_vc_ParamLimits

0x7a4b,	// (0x00052c71) input_focus_pane_cp10_vc

0xb86f,	// (0x00056a95) slider_cont_pane_cp1_vc_ParamLimits

0xb86f,	// (0x00056a95) slider_cont_pane_cp1_vc

0xb881,	// (0x00056aa7) slider_form_pane_g1_cp2

0xb6a7,	// (0x000568cd) slider_form_pane_g2_cp2

0xb8ae,	// (0x00056ad4) form_field_slider_pane_vc_t3

0xb8bc,	// (0x00056ae2) form_field_slider_pane_vc_t4

0xb8ca,	// (0x00056af0) slider_form_pane_vc_ParamLimits

0xb8ca,	// (0x00056af0) slider_form_pane_vc

0xb8d7,	// (0x00056afd) form_field_slider_pane_vc_t1_ParamLimits

0xb8d7,	// (0x00056afd) form_field_slider_pane_vc_t1

0xb841,	// (0x00056a67) form_field_slider_pane_vc_t2_ParamLimits

0xb841,	// (0x00056a67) form_field_slider_pane_vc_t2

0x0001,

0xfa94,	// (0x0005acba) form_field_slider_pane_vc_t_ParamLimits

0xfa94,	// (0x0005acba) form_field_slider_pane_vc_t

0x7a4b,	// (0x00052c71) input_focus_pane_cp9_vc_ParamLimits

0x7a4b,	// (0x00052c71) input_focus_pane_cp9_vc

0xb8f3,	// (0x00056b19) slider_cont_pane_vc_ParamLimits

0xb8f3,	// (0x00056b19) slider_cont_pane_vc

0xb907,	// (0x00056b2d) list_form_graphic_pane_cp_vc_ParamLimits

0xb907,	// (0x00056b2d) list_form_graphic_pane_cp_vc

0x9c01,	// (0x00054e27) form_field_popup_wide_pane_vc_g1

0xb91c,	// (0x00056b42) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb91c,	// (0x00056b42) form_field_popup_wide_pane_vc_t1

0x865a,	// (0x00053880) input_focus_pane_cp8_vc_ParamLimits

0x865a,	// (0x00053880) input_focus_pane_cp8_vc

0xb961,	// (0x00056b87) list_form_wide_pane_vc_ParamLimits

0xb961,	// (0x00056b87) list_form_wide_pane_vc

0xb96d,	// (0x00056b93) list_form_graphic_pane_vc_g1

0xb975,	// (0x00056b9b) list_form_graphic_pane_vc_t1_ParamLimits

0xb975,	// (0x00056b9b) list_form_graphic_pane_vc_t1

0x77d0,	// (0x000529f6) list_highlight_pane_cp5_vc_ParamLimits

0x77d0,	// (0x000529f6) list_highlight_pane_cp5_vc

0xb991,	// (0x00056bb7) list_form_graphic_pane_vc_ParamLimits

0xb991,	// (0x00056bb7) list_form_graphic_pane_vc

0x9c01,	// (0x00054e27) form_field_popup_pane_vc_g1

0xb9a7,	// (0x00056bcd) form_field_popup_pane_vc_t1_ParamLimits

0xb9a7,	// (0x00056bcd) form_field_popup_pane_vc_t1

0x865a,	// (0x00053880) input_focus_pane_cp7_vc_ParamLimits

0x865a,	// (0x00053880) input_focus_pane_cp7_vc

0xb9be,	// (0x00056be4) list_form_pane_vc_ParamLimits

0xb9be,	// (0x00056be4) list_form_pane_vc

0xb9ca,	// (0x00056bf0) data_form_pane_vc_t1_ParamLimits

0xb9ca,	// (0x00056bf0) data_form_pane_vc_t1

0x86a9,	// (0x000538cf) input_focus_pane_vc_g1

0x86b1,	// (0x000538d7) input_focus_pane_vc_g2

0x86b9,	// (0x000538df) input_focus_pane_vc_g3

0x86c1,	// (0x000538e7) input_focus_pane_vc_g4

0x86c9,	// (0x000538ef) input_focus_pane_vc_g5

0x86d1,	// (0x000538f7) input_focus_pane_vc_g6

0x86d9,	// (0x000538ff) input_focus_pane_vc_g7

0x86e1,	// (0x00053907) input_focus_pane_vc_g8

0x86e9,	// (0x0005390f) input_focus_pane_vc_g9

0x76e6,	// (0x0005290c) input_focus_pane_vc_g10

0x0009,

0xf697,	// (0x0005a8bd) input_focus_pane_vc_g

0x9bf5,	// (0x00054e1b) data_form_pane_vc_ParamLimits

0x9bf5,	// (0x00054e1b) data_form_pane_vc

0x9c01,	// (0x00054e27) form_field_data_pane_vc_g1

0xb9e5,	// (0x00056c0b) form_field_data_pane_vc_t1_ParamLimits

0xb9e5,	// (0x00056c0b) form_field_data_pane_vc_t1

0x865a,	// (0x00053880) input_focus_pane_vc_ParamLimits

0x865a,	// (0x00053880) input_focus_pane_vc

0xb9ff,	// (0x00056c25) button_value_adjust_pane_cp3_vc

0xba07,	// (0x00056c2d) button_value_adjust_pane_cp5_vc

0xba0f,	// (0x00056c35) form_field_data_pane_vc_ParamLimits

0xba0f,	// (0x00056c35) form_field_data_pane_vc

0xba26,	// (0x00056c4c) form_field_data_pane_vc_cp2

0xba2e,	// (0x00056c54) form_field_data_wide_pane_vc_ParamLimits

0xba2e,	// (0x00056c54) form_field_data_wide_pane_vc

0xba44,	// (0x00056c6a) form_field_data_wide_pane_vc_cp2

0xba4c,	// (0x00056c72) form_field_popup_pane_vc_ParamLimits

0xba4c,	// (0x00056c72) form_field_popup_pane_vc

0xba63,	// (0x00056c89) form_field_popup_wide_pane_vc_ParamLimits

0xba63,	// (0x00056c89) form_field_popup_wide_pane_vc

0xba79,	// (0x00056c9f) form_field_slider_pane_vc_ParamLimits

0xba79,	// (0x00056c9f) form_field_slider_pane_vc

0xba8c,	// (0x00056cb2) form_field_slider_wide_pane_vc_ParamLimits

0xba8c,	// (0x00056cb2) form_field_slider_wide_pane_vc

0xba9f,	// (0x00056cc5) grid_touch_1_pane_ParamLimits

0xba9f,	// (0x00056cc5) grid_touch_1_pane

0xbaab,	// (0x00056cd1) grid_touch_2_pane_ParamLimits

0xbaab,	// (0x00056cd1) grid_touch_2_pane

0x95a0,	// (0x000547c6) touch_pane_g1_ParamLimits

0x95a0,	// (0x000547c6) touch_pane_g1

0xbac3,	// (0x00056ce9) cell_app_pane_cp_wide_ParamLimits

0xbac3,	// (0x00056ce9) cell_app_pane_cp_wide

0xbad4,	// (0x00056cfa) grid_popup_fast_wide_pane_ParamLimits

0xbad4,	// (0x00056cfa) grid_popup_fast_wide_pane

0xbae8,	// (0x00056d0e) scroll_pane_cp19_ParamLimits

0xbae8,	// (0x00056d0e) scroll_pane_cp19

0x76f0,	// (0x00052916) bg_popup_window_pane_cp20

0xbafc,	// (0x00056d22) listscroll_popup_fast_wide_pane

0x77d0,	// (0x000529f6) grid_indicator_nsta_pane

0xbb04,	// (0x00056d2a) clock_nsta_pane_g1

0xbb0d,	// (0x00056d33) clock_nsta_pane_t1

0xbb29,	// (0x00056d4f) cell_indicator_nsta_pane_ParamLimits

0xbb29,	// (0x00056d4f) cell_indicator_nsta_pane

0xbb61,	// (0x00056d87) cell_indicator_nsta_pane_g1

0xbb6f,	// (0x00056d95) cell_indicator_nsta_pane_g2

0x0001,

0xfaa5,	// (0x0005accb) cell_indicator_nsta_pane_g

0xbb85,	// (0x00056dab) clock_nsta_pane_cp

0xbb8d,	// (0x00056db3) indicator_nsta_pane_cp

0xbb95,	// (0x00056dbb) nsta_clock_indic_pane_g1

0x7899,	// (0x00052abf) grid_indicator_pane

0x8bdf,	// (0x00053e05) scroll_pane_cp29

0x5784,	// (0x000509aa) indicator_nsta_pane_cp2_ParamLimits

0x5784,	// (0x000509aa) indicator_nsta_pane_cp2

0x77d0,	// (0x000529f6) main_apps_wheel_pane

0x9e16,	// (0x0005503c) form_midp_field_text_pane_ParamLimits

0x9f61,	// (0x00055187) scroll_bar_cp050_ParamLimits

0xbbee,	// (0x00056e14) cell_indicator_pane_ParamLimits

0xbbee,	// (0x00056e14) cell_indicator_pane

0xbc05,	// (0x00056e2b) cell_indicator_pane_g1

0xbc0f,	// (0x00056e35) grid_wheel_folder_pane_ParamLimits

0xbc0f,	// (0x00056e35) grid_wheel_folder_pane

0xbc25,	// (0x00056e4b) list_wheel_apps_pane_ParamLimits

0xbc25,	// (0x00056e4b) list_wheel_apps_pane

0xbc36,	// (0x00056e5c) main_apps_wheel_pane_g1_ParamLimits

0xbc36,	// (0x00056e5c) main_apps_wheel_pane_g1

0xbc4a,	// (0x00056e70) main_apps_wheel_pane_g2_ParamLimits

0xbc4a,	// (0x00056e70) main_apps_wheel_pane_g2

0x0001,

0xfac1,	// (0x0005ace7) main_apps_wheel_pane_g_ParamLimits

0xfac1,	// (0x0005ace7) main_apps_wheel_pane_g

0xbc62,	// (0x00056e88) main_apps_wheel_pane_t1_ParamLimits

0xbc62,	// (0x00056e88) main_apps_wheel_pane_t1

0xbc85,	// (0x00056eab) list_wheel_apps_pane_g1

0xbc8d,	// (0x00056eb3) list_wheel_apps_pane_g2

0xbc95,	// (0x00056ebb) list_wheel_apps_pane_g3

0xbc9d,	// (0x00056ec3) list_wheel_apps_pane_g4

0xbca7,	// (0x00056ecd) list_wheel_apps_pane_g5

0x0004,

0xfac6,	// (0x0005acec) list_wheel_apps_pane_g

0x9163,	// (0x00054389) navi_icon_text_pane

0x9645,	// (0x0005486b) aid_fill_nsta

0xbcca,	// (0x00056ef0) navi_icon_text_pane_g1

0xbcd6,	// (0x00056efc) navi_icon_text_pane_t1

0x9001,	// (0x00054227) list_set_graphic_pane_t1_ParamLimits

0x9001,	// (0x00054227) list_set_graphic_pane_t1

0xa6b0,	// (0x000558d6) popup_midp_note_alarm_window_t6_ParamLimits

0xa6b0,	// (0x000558d6) popup_midp_note_alarm_window_t6

0xa6c2,	// (0x000558e8) popup_midp_note_alarm_window_t7_ParamLimits

0xa6c2,	// (0x000558e8) popup_midp_note_alarm_window_t7

0xa6d4,	// (0x000558fa) popup_midp_note_alarm_window_t8_ParamLimits

0xa6d4,	// (0x000558fa) popup_midp_note_alarm_window_t8

0xa6e6,	// (0x0005590c) popup_midp_note_alarm_window_t9_ParamLimits

0xa6e6,	// (0x0005590c) popup_midp_note_alarm_window_t9

0xa6f8,	// (0x0005591e) popup_midp_note_alarm_window_t10_ParamLimits

0xa6f8,	// (0x0005591e) popup_midp_note_alarm_window_t10

0xa70a,	// (0x00055930) popup_midp_note_alarm_window_t11_ParamLimits

0xa70a,	// (0x00055930) popup_midp_note_alarm_window_t11

0xa71c,	// (0x00055942) scroll_pane_cp17_ParamLimits

0xa71c,	// (0x00055942) scroll_pane_cp17

0x62a7,	// (0x000514cd) volume_small_pane_cp_g1

0x6837,	// (0x00051a5d) volume_small_pane_cp_g2

0x6840,	// (0x00051a66) volume_small_pane_cp_g3

0x6849,	// (0x00051a6f) volume_small_pane_cp_g4

0x6852,	// (0x00051a78) volume_small_pane_cp_g5

0x685b,	// (0x00051a81) volume_small_pane_cp_g6

0x6864,	// (0x00051a8a) volume_small_pane_cp_g7

0x686d,	// (0x00051a93) volume_small_pane_cp_g8

0x6876,	// (0x00051a9c) volume_small_pane_cp_g9

0x687f,	// (0x00051aa5) volume_small_pane_cp_g10

0x93b2,	// (0x000545d8) midp_ticker_pane_g1_ParamLimits

0x93be,	// (0x000545e4) midp_ticker_pane_g2_ParamLimits

0xf763,	// (0x0005a989) midp_ticker_pane_g_ParamLimits

0x93ca,	// (0x000545f0) midp_ticker_pane_t1_ParamLimits

0x965b,	// (0x00054881) aid_fill_nsta_2

0x9f4d,	// (0x00055173) list_form2_midp_pane

0xb08b,	// (0x000562b1) midp_editing_number_pane_ParamLimits

0xb09a,	// (0x000562c0) midp_ticker_pane_ParamLimits

0xbce8,	// (0x00056f0e) form2_midp_field_pane

0xbd0c,	// (0x00056f32) scroll_pane_cp51

0xbd2c,	// (0x00056f52) form2_midp_button_pane_ParamLimits

0xbd2c,	// (0x00056f52) form2_midp_button_pane

0xbd3e,	// (0x00056f64) form2_midp_content_pane_ParamLimits

0xbd3e,	// (0x00056f64) form2_midp_content_pane

0xbd58,	// (0x00056f7e) form2_midp_field_choice_group_pane

0xbd60,	// (0x00056f86) form2_midp_field_pane_g1

0xbd68,	// (0x00056f8e) form2_midp_field_pane_g2

0xbd70,	// (0x00056f96) form2_midp_field_pane_g3

0xbd78,	// (0x00056f9e) form2_midp_field_pane_g4

0x0003,

0xfaeb,	// (0x0005ad11) form2_midp_field_pane_g

0xbd80,	// (0x00056fa6) form2_midp_gauge_slider_pane

0xbd88,	// (0x00056fae) form2_midp_gauge_wait_pane

0xbd90,	// (0x00056fb6) form2_midp_image_pane_ParamLimits

0xbd90,	// (0x00056fb6) form2_midp_image_pane

0xbdab,	// (0x00056fd1) form2_midp_label_pane_ParamLimits

0xbdab,	// (0x00056fd1) form2_midp_label_pane

0xbdc4,	// (0x00056fea) form2_midp_label_pane_cp_ParamLimits

0xbdc4,	// (0x00056fea) form2_midp_label_pane_cp

0xbde5,	// (0x0005700b) form2_midp_string_pane_ParamLimits

0xbde5,	// (0x0005700b) form2_midp_string_pane

0x7f54,	// (0x0005317a) form2_midp_text_pane_ParamLimits

0x7f54,	// (0x0005317a) form2_midp_text_pane

0xbdf7,	// (0x0005701d) form2_midp_time_pane

0xbe07,	// (0x0005702d) input_focus_pane_cp51_ParamLimits

0xbe07,	// (0x0005702d) input_focus_pane_cp51

0xbe1f,	// (0x00057045) form2_midp_label_pane_t1_ParamLimits

0xbe1f,	// (0x00057045) form2_midp_label_pane_t1

0x7f73,	// (0x00053199) form2_mdip_text_pane_t1_ParamLimits

0x7f73,	// (0x00053199) form2_mdip_text_pane_t1

0x7f91,	// (0x000531b7) form2_midp_time_pane_t1

0xbe68,	// (0x0005708e) form2_midp_gauge_slider_pane_t1

0xbe7a,	// (0x000570a0) form2_midp_gauge_slider_pane_t2

0xbe8c,	// (0x000570b2) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf4,	// (0x0005ad1a) form2_midp_gauge_slider_pane_t

0xbe9e,	// (0x000570c4) form2_midp_slider_pane

0xbeaa,	// (0x000570d0) form2_midp_gauge_wait_pane_t1

0xbeb8,	// (0x000570de) form2_midp_wait_pane_ParamLimits

0xbeb8,	// (0x000570de) form2_midp_wait_pane

0x9c48,	// (0x00054e6e) list_single_2graphic_pane_cp4_ParamLimits

0x9c48,	// (0x00054e6e) list_single_2graphic_pane_cp4

0xbee3,	// (0x00057109) list_single_midp_graphic_pane_cp_ParamLimits

0xbee3,	// (0x00057109) list_single_midp_graphic_pane_cp

0x76f0,	// (0x00052916) list_highlight_pane_cp20

0xbf12,	// (0x00057138) list_single_2graphic_pane_g1_cp4

0xbf1a,	// (0x00057140) list_single_2graphic_pane_g2_cp4

0xbf22,	// (0x00057148) list_single_2graphic_pane_t1_cp4

0x77d0,	// (0x000529f6) list_highlight_pane_cp21

0xbf31,	// (0x00057157) list_single_midp_graphic_pane_g4_cp

0xbf40,	// (0x00057166) list_single_midp_graphic_pane_t1_cp

0xbf55,	// (0x0005717b) form2_mdip_string_pane_t1_ParamLimits

0xbf55,	// (0x0005717b) form2_mdip_string_pane_t1

0x76f0,	// (0x00052916) bg_wml_button_pane_cp2

0x76e6,	// (0x0005290c) form2_midp_image_pane_g1

0x7d6c,	// (0x00052f92) list_double_large_graphic_pane_g5_ParamLimits

0x7d6c,	// (0x00052f92) list_double_large_graphic_pane_g5

0x8832,	// (0x00053a58) midp_form_pane_ParamLimits

0x77d0,	// (0x000529f6) main_apps_wheel_pane_ParamLimits

0x5e5f,	// (0x00051085) popup_preview_window_ParamLimits

0x5e5f,	// (0x00051085) popup_preview_window

0x601a,	// (0x00051240) popup_touch_info_window_ParamLimits

0x601a,	// (0x00051240) popup_touch_info_window

0x6038,	// (0x0005125e) popup_touch_menu_window_ParamLimits

0x6038,	// (0x0005125e) popup_touch_menu_window

0x76dc,	// (0x00052902) bg_popup_sub_pane_cp6

0xc04e,	// (0x00057274) list_touch_menu_pane

0xc056,	// (0x0005727c) list_single_touch_menu_pane_ParamLimits

0xc056,	// (0x0005727c) list_single_touch_menu_pane

0xc06c,	// (0x00057292) list_single_touch_menu_pane_t1

0x77d0,	// (0x000529f6) bg_popup_sub_pane_cp7_ParamLimits

0x77d0,	// (0x000529f6) bg_popup_sub_pane_cp7

0xc07a,	// (0x000572a0) heading_sub_pane

0xc082,	// (0x000572a8) list_touch_info_pane_ParamLimits

0xc082,	// (0x000572a8) list_touch_info_pane

0xc091,	// (0x000572b7) list_single_touch_info_pane_ParamLimits

0xc091,	// (0x000572b7) list_single_touch_info_pane

0xc0a3,	// (0x000572c9) list_single_touch_info_pane_t1

0xc0b1,	// (0x000572d7) list_single_touch_info_pane_t2

0x0001,

0xfb02,	// (0x0005ad28) list_single_touch_info_pane_t

0x92e3,	// (0x00054509) bg_popup_heading_pane_cp

0xc0bf,	// (0x000572e5) heading_sub_pane_t1

0x9b8f,	// (0x00054db5) bg_popup_preview_window_pane_cp_ParamLimits

0x9b8f,	// (0x00054db5) bg_popup_preview_window_pane_cp

0xc07a,	// (0x000572a0) heading_preview_pane

0xc082,	// (0x000572a8) list_preview_pane_ParamLimits

0xc082,	// (0x000572a8) list_preview_pane

0xc0cd,	// (0x000572f3) popup_preview_window_g1

0xc091,	// (0x000572b7) list_single_preview_pane_ParamLimits

0xc091,	// (0x000572b7) list_single_preview_pane

0xc0d5,	// (0x000572fb) list_single_preview_pane_g1

0xc0dd,	// (0x00057303) list_single_preview_pane_t1

0xc0a3,	// (0x000572c9) list_single_preview_pane_t2

0x0001,

0xfb07,	// (0x0005ad2d) list_single_preview_pane_t

0xc0eb,	// (0x00057311) bg_popup_heading_pane_cp2_ParamLimits

0xc0eb,	// (0x00057311) bg_popup_heading_pane_cp2

0xc101,	// (0x00057327) heading_preview_pane_g1

0xc109,	// (0x0005732f) heading_preview_pane_t1_ParamLimits

0xc109,	// (0x0005732f) heading_preview_pane_t1

0x78bc,	// (0x00052ae2) soft_indicator_pane_t1_ParamLimits

0x85c1,	// (0x000537e7) scroll_pane_ParamLimits

0x8ad8,	// (0x00053cfe) scroll_sc2_left_pane

0x8ae1,	// (0x00053d07) scroll_sc2_right_pane

0x8b00,	// (0x00053d26) scroll_bg_pane_g1_ParamLimits

0x8b15,	// (0x00053d3b) scroll_bg_pane_g2_ParamLimits

0x8b2d,	// (0x00053d53) scroll_bg_pane_g3_ParamLimits

0xf6ee,	// (0x0005a914) scroll_bg_pane_g_ParamLimits

0x8b00,	// (0x00053d26) scroll_handle_pane_g1_ParamLimits

0x8b4f,	// (0x00053d75) scroll_handle_pane_g2_ParamLimits

0x8b2d,	// (0x00053d53) scroll_handle_pane_g3_ParamLimits

0xf6f5,	// (0x0005a91b) scroll_handle_pane_g_ParamLimits

0x5ae2,	// (0x00050d08) popup_choice_list_window_ParamLimits

0x5ae2,	// (0x00050d08) popup_choice_list_window

0x9a65,	// (0x00054c8b) choice_list_pane

0x9ae7,	// (0x00054d0d) cell_toolbar_pane_t1

0x9b0f,	// (0x00054d35) toolbar_button_pane_ParamLimits

0xabd6,	// (0x00055dfc) ai_gene_pane_1_t2_ParamLimits

0xabd6,	// (0x00055dfc) ai_gene_pane_1_t2

0x0001,

0xf91d,	// (0x0005ab43) ai_gene_pane_1_t_ParamLimits

0xf91d,	// (0x0005ab43) ai_gene_pane_1_t

0xc126,	// (0x0005734c) scroll_sc2_left_pane_g1

0xc126,	// (0x0005734c) scroll_sc2_right_pane_g1

0x9623,	// (0x00054849) bg_popup_sub_pane_cp10

0xc130,	// (0x00057356) list_choice_list_pane

0xc149,	// (0x0005736f) list_single_choice_list_pane_ParamLimits

0xc149,	// (0x0005736f) list_single_choice_list_pane

0xc15c,	// (0x00057382) list_single_choice_list_pane_g1

0x87e2,	// (0x00053a08) list_single_choice_list_pane_t1_ParamLimits

0x87e2,	// (0x00053a08) list_single_choice_list_pane_t1

0xc164,	// (0x0005738a) choice_list_pane_g1

0xc16c,	// (0x00057392) choice_list_pane_t1

0x76dc,	// (0x00052902) input_focus_pane_cp11

0x89b9,	// (0x00053bdf) title_pane_stacon_g2_ParamLimits

0x89b9,	// (0x00053bdf) title_pane_stacon_g2

0x0002,

0xf6d4,	// (0x0005a8fa) title_pane_stacon_g_ParamLimits

0xf6d4,	// (0x0005a8fa) title_pane_stacon_g

0x92e3,	// (0x00054509) cursor_press_pane

0x5b8e,	// (0x00050db4) popup_fep_hwr_window_ParamLimits

0x5b8e,	// (0x00050db4) popup_fep_hwr_window

0x5c08,	// (0x00050e2e) popup_fep_vkb_window_ParamLimits

0x5c08,	// (0x00050e2e) popup_fep_vkb_window

0xc17a,	// (0x000573a0) cursor_press_pane_g1

0x0002,

0xfb30,	// (0x0005ad56) fep_vkb_side_pane_g_ParamLimits

0x68c1,	// (0x00051ae7) fep_hwr_candidate_pane_ParamLimits

0x68c1,	// (0x00051ae7) fep_hwr_candidate_pane

0x68eb,	// (0x00051b11) fep_hwr_side_pane_ParamLimits

0x68eb,	// (0x00051b11) fep_hwr_side_pane

0x690b,	// (0x00051b31) fep_hwr_top_pane_ParamLimits

0x690b,	// (0x00051b31) fep_hwr_top_pane

0x6923,	// (0x00051b49) fep_hwr_write_pane_ParamLimits

0x6923,	// (0x00051b49) fep_hwr_write_pane

0xfb30,	// (0x0005ad56) fep_vkb_side_pane_g

0xc182,	// (0x000573a8) fep_hwr_top_pane_g1

0xc194,	// (0x000573ba) fep_hwr_top_pane_g2

0x695d,	// (0x00051b83) fep_hwr_top_pane_g3

0x0002,

0xfb0c,	// (0x0005ad32) fep_hwr_top_pane_g

0x6972,	// (0x00051b98) fep_hwr_top_text_pane

0x8ccf,	// (0x00053ef5) fep_hwr_top_text_pane_g1

0xc1ca,	// (0x000573f0) fep_hwr_top_text_pane_t1

0x6a68,	// (0x00051c8e) fep_hwr_candidate_pane_g1

0xc41d,	// (0x00057643) fep_vkb_keypad_pane_g3_ParamLimits

0xc41d,	// (0x00057643) fep_vkb_keypad_pane_g3

0xc445,	// (0x0005766b) fep_vkb_keypad_pane_g4_ParamLimits

0xc445,	// (0x0005766b) fep_vkb_keypad_pane_g4

0xc4b4,	// (0x000576da) fep_vkb_bottom_pane_g2_ParamLimits

0xc4b4,	// (0x000576da) fep_vkb_bottom_pane_g2

0x0001,

0xfb37,	// (0x0005ad5d) fep_vkb_bottom_pane_g_ParamLimits

0xfb37,	// (0x0005ad5d) fep_vkb_bottom_pane_g

0xc126,	// (0x0005734c) cell_vkb_side_pane_g2

0x0001,

0xfb41,	// (0x0005ad67) cell_vkb_side_pane_g

0xc53f,	// (0x00057765) cell_vkb_side_pane_t1

0xc54d,	// (0x00057773) cell_vkb_side_pane_t1_copy1

0xc126,	// (0x0005734c) bg_fep_vkb_candidate_pane_g2

0xc679,	// (0x0005789f) cell_vkb_candidate_pane_ParamLimits

0xc1d8,	// (0x000573fe) aid_size_cell_vkb_ParamLimits

0xc1d8,	// (0x000573fe) aid_size_cell_vkb

0xc679,	// (0x0005789f) cell_vkb_candidate_pane

0x6a8f,	// (0x00051cb5) bg_popup_fep_shadow_pane_g1

0xc266,	// (0x0005748c) fep_vkb_bottom_pane_ParamLimits

0xc266,	// (0x0005748c) fep_vkb_bottom_pane

0xc29c,	// (0x000574c2) fep_vkb_candidate_pane_ParamLimits

0xc29c,	// (0x000574c2) fep_vkb_candidate_pane

0xc2b8,	// (0x000574de) fep_vkb_keypad_pane_ParamLimits

0xc2b8,	// (0x000574de) fep_vkb_keypad_pane

0xc2fe,	// (0x00057524) fep_vkb_side_pane_ParamLimits

0xc2fe,	// (0x00057524) fep_vkb_side_pane

0xc33a,	// (0x00057560) fep_vkb_top_pane_ParamLimits

0xc33a,	// (0x00057560) fep_vkb_top_pane

0xc376,	// (0x0005759c) fep_vkb_top_pane_g1_ParamLimits

0xc376,	// (0x0005759c) fep_vkb_top_pane_g1

0xc385,	// (0x000575ab) fep_vkb_top_pane_g2_ParamLimits

0xc385,	// (0x000575ab) fep_vkb_top_pane_g2

0xc394,	// (0x000575ba) fep_vkb_top_pane_g3_ParamLimits

0xc394,	// (0x000575ba) fep_vkb_top_pane_g3

0x0003,

0xfb27,	// (0x0005ad4d) fep_vkb_top_pane_g_ParamLimits

0xfb27,	// (0x0005ad4d) fep_vkb_top_pane_g

0xc3b2,	// (0x000575d8) fep_vkb_top_text_pane_ParamLimits

0xc3b2,	// (0x000575d8) fep_vkb_top_text_pane

0xc3c3,	// (0x000575e9) fep_vkb_side_pane_g1_ParamLimits

0xc3c3,	// (0x000575e9) fep_vkb_side_pane_g1

0xc40c,	// (0x00057632) grid_vkb_side_pane_ParamLimits

0xc40c,	// (0x00057632) grid_vkb_side_pane

0x6a97,	// (0x00051cbd) bg_popup_fep_shadow_pane_g2

0x6aa0,	// (0x00051cc6) bg_popup_fep_shadow_pane_g3

0x6aa8,	// (0x00051cce) bg_popup_fep_shadow_pane_g4

0x6ab1,	// (0x00051cd7) bg_popup_fep_shadow_pane_g5

0x6abb,	// (0x00051ce1) bg_popup_fep_shadow_pane_g6

0x6ac3,	// (0x00051ce9) bg_popup_fep_shadow_pane_g7

0x86c1,	// (0x000538e7) bg_popup_fep_shadow_pane_g8

0xc463,	// (0x00057689) grid_vkb_keypad_number_pane_ParamLimits

0xc463,	// (0x00057689) grid_vkb_keypad_number_pane

0xc473,	// (0x00057699) grid_vkb_keypad_pane_ParamLimits

0xc473,	// (0x00057699) grid_vkb_keypad_pane

0xc499,	// (0x000576bf) fep_vkb_bottom_pane_g1_ParamLimits

0xc499,	// (0x000576bf) fep_vkb_bottom_pane_g1

0xc4c2,	// (0x000576e8) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc4c2,	// (0x000576e8) grid_vkb_keypad_bottom_left_pane

0xc4d7,	// (0x000576fd) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc4d7,	// (0x000576fd) grid_vkb_keypad_bottom_right_pane

0xc4ec,	// (0x00057712) fep_vkb_top_text_pane_g1

0xc507,	// (0x0005772d) fep_vkb_top_text_pane_t1

0xc51c,	// (0x00057742) cell_vkb_side_pane_ParamLimits

0xc51c,	// (0x00057742) cell_vkb_side_pane

0xc126,	// (0x0005734c) cell_vkb_side_pane_g1

0xc55b,	// (0x00057781) cell_vkb_keypad_pane_ParamLimits

0xc55b,	// (0x00057781) cell_vkb_keypad_pane

0xc5d0,	// (0x000577f6) cell_vkb_keypad_pane_g1

0x0008,

0xfb54,	// (0x0005ad7a) bg_popup_fep_shadow_pane_g

0x6ad5,	// (0x00051cfb) cell_hwr_side_pane_g1

0x6ad5,	// (0x00051cfb) cell_hwr_side_pane_g2

0xc5da,	// (0x00057800) cell_vkb_keypad_pane_t1

0xc5e8,	// (0x0005780e) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc5e8,	// (0x0005780e) cell_vkb_keypad_bottom_left_pane

0xc605,	// (0x0005782b) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc605,	// (0x0005782b) cell_vkb_keypad_bottom_right_pane

0xc126,	// (0x0005734c) cell_vkb_keypad_bottom_left_pane_g1

0xc126,	// (0x0005734c) cell_vkb_keypad_bottom_right_pane_g1

0xc63e,	// (0x00057864) cell_vkb_keypad_number_pane_ParamLimits

0xc63e,	// (0x00057864) cell_vkb_keypad_number_pane

0xc65d,	// (0x00057883) cell_vkb_keypad_number_pane_g1

0xc667,	// (0x0005788d) cell_vkb_keypad_number_pane_g2

0xc670,	// (0x00057896) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb46,	// (0x0005ad6c) cell_vkb_keypad_number_pane_g

0xc5da,	// (0x00057800) cell_vkb_keypad_number_pane_t1

0xc694,	// (0x000578ba) fep_vkb_candidate_pane_g1

0x0001,

0xfb67,	// (0x0005ad8d) cell_hwr_side_pane_g

0xc6ad,	// (0x000578d3) cell_hwr_side_pane_t1

0x6adf,	// (0x00051d05) cell_hwr_side_pane_t1_copy1

0x6aed,	// (0x00051d13) cell_hwr_candidate_pane_g1

0x6b1c,	// (0x00051d42) cell_hwr_candidate_pane_t1

0xc126,	// (0x0005734c) cell_vkb_candidate_pane_g2

0xc6f1,	// (0x00057917) cell_vkb_candidate_pane_t1

0x6888,	// (0x00051aae) bg_popup_fep_shadow_pane_ParamLimits

0x6888,	// (0x00051aae) bg_popup_fep_shadow_pane

0x693d,	// (0x00051b63) bg_fep_hwr_top_pane_g4

0xc1a6,	// (0x000573cc) bg_hwr_side_pane_g1_ParamLimits

0xc1a6,	// (0x000573cc) bg_hwr_side_pane_g1

0x69ae,	// (0x00051bd4) cell_hwr_side_pane_ParamLimits

0x69ae,	// (0x00051bd4) cell_hwr_side_pane

0x69e9,	// (0x00051c0f) fep_hwr_write_pane_g1_ParamLimits

0x69e9,	// (0x00051c0f) fep_hwr_write_pane_g1

0x69f6,	// (0x00051c1c) fep_hwr_write_pane_g2_ParamLimits

0x69f6,	// (0x00051c1c) fep_hwr_write_pane_g2

0x6a03,	// (0x00051c29) fep_hwr_write_pane_g3_ParamLimits

0x6a03,	// (0x00051c29) fep_hwr_write_pane_g3

0x6a11,	// (0x00051c37) fep_hwr_write_pane_g4_ParamLimits

0x6a11,	// (0x00051c37) fep_hwr_write_pane_g4

0x0005,

0xfb13,	// (0x0005ad39) fep_hwr_write_pane_g_ParamLimits

0xfb13,	// (0x0005ad39) fep_hwr_write_pane_g

0x693d,	// (0x00051b63) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x693d,	// (0x00051b63) bg_fep_hwr_candidate_pane_g2

0x6a26,	// (0x00051c4c) cell_hwr_candidate_pane_ParamLimits

0x6a26,	// (0x00051c4c) cell_hwr_candidate_pane

0x6a68,	// (0x00051c8e) fep_hwr_candidate_pane_g1_ParamLimits

0xc206,	// (0x0005742c) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc206,	// (0x0005742c) bg_popup_fep_shadow_pane_cp2

0xc3a4,	// (0x000575ca) fep_vkb_top_pane_g4_ParamLimits

0xc3a4,	// (0x000575ca) fep_vkb_top_pane_g4

0xc3ea,	// (0x00057610) fep_vkb_side_pane_g2_ParamLimits

0xc3ea,	// (0x00057610) fep_vkb_side_pane_g2

0x5113,	// (0x00050339) list_setting_pane_t4_ParamLimits

0x5113,	// (0x00050339) list_setting_pane_t4

0x51ad,	// (0x000503d3) list_setting_number_pane_t5_ParamLimits

0x51ad,	// (0x000503d3) list_setting_number_pane_t5

0x8d16,	// (0x00053f3c) list_double_heading_pane_cp2_ParamLimits

0x8d16,	// (0x00053f3c) list_double_heading_pane_cp2

0x85f5,	// (0x0005381b) list_double_heading_pane_g1_cp2_ParamLimits

0x85f5,	// (0x0005381b) list_double_heading_pane_g1_cp2

0x8668,	// (0x0005388e) list_double_heading_pane_g2_cp2_ParamLimits

0x8668,	// (0x0005388e) list_double_heading_pane_g2_cp2

0xc6ff,	// (0x00057925) list_double_heading_pane_t1_cp2_ParamLimits

0xc6ff,	// (0x00057925) list_double_heading_pane_t1_cp2

0xc715,	// (0x0005793b) list_double_heading_pane_t2_cp2_ParamLimits

0xc715,	// (0x0005793b) list_double_heading_pane_t2_cp2

0x76c4,	// (0x000528ea) aid_value_unit2

0x4bd3,	// (0x0004fdf9) popup_preview_fixed_window

0x7a59,	// (0x00052c7f) bg_popup_preview_window_pane_cp02

0xc727,	// (0x0005794d) list_preview_fixed_pane

0xc76d,	// (0x00057993) list_empty_pane_fp_ParamLimits

0xc76d,	// (0x00057993) list_empty_pane_fp

0xc76d,	// (0x00057993) list_single_cale_day_pane_fp_ParamLimits

0xc76d,	// (0x00057993) list_single_cale_day_pane_fp

0xc76d,	// (0x00057993) list_single_graphic_heading_pane_fp_ParamLimits

0xc76d,	// (0x00057993) list_single_graphic_heading_pane_fp

0xc76d,	// (0x00057993) list_single_graphic_pane_fp_ParamLimits

0xc76d,	// (0x00057993) list_single_graphic_pane_fp

0xc76d,	// (0x00057993) list_single_heading_pane_fp_ParamLimits

0xc76d,	// (0x00057993) list_single_heading_pane_fp

0xc76d,	// (0x00057993) list_single_pane_fp_ParamLimits

0xc76d,	// (0x00057993) list_single_pane_fp

0xc782,	// (0x000579a8) list_single_pane_fp_g1_ParamLimits

0xc782,	// (0x000579a8) list_single_pane_fp_g1

0x85f5,	// (0x0005381b) list_single_pane_fp_g2_ParamLimits

0x85f5,	// (0x0005381b) list_single_pane_fp_g2

0x8668,	// (0x0005388e) list_single_pane_fp_g3_ParamLimits

0x8668,	// (0x0005388e) list_single_pane_fp_g3

0xc78e,	// (0x000579b4) list_single_pane_fp_g4_ParamLimits

0xc78e,	// (0x000579b4) list_single_pane_fp_g4

0x0003,

0xfb7a,	// (0x0005ada0) list_single_pane_fp_g_ParamLimits

0xfb7a,	// (0x0005ada0) list_single_pane_fp_g

0x7fa4,	// (0x000531ca) list_single_pane_fp_t1_ParamLimits

0x7fa4,	// (0x000531ca) list_single_pane_fp_t1

0x7fbb,	// (0x000531e1) list_single_graphic_pane_fp_g1_ParamLimits

0x7fbb,	// (0x000531e1) list_single_graphic_pane_fp_g1

0xc782,	// (0x000579a8) list_single_graphic_pane_fp_g2_ParamLimits

0xc782,	// (0x000579a8) list_single_graphic_pane_fp_g2

0x85f5,	// (0x0005381b) list_single_graphic_pane_fp_g3_ParamLimits

0x85f5,	// (0x0005381b) list_single_graphic_pane_fp_g3

0x8668,	// (0x0005388e) list_single_graphic_pane_fp_g4_ParamLimits

0x8668,	// (0x0005388e) list_single_graphic_pane_fp_g4

0xc78e,	// (0x000579b4) list_single_graphic_pane_fp_g5_ParamLimits

0xc78e,	// (0x000579b4) list_single_graphic_pane_fp_g5

0x0004,

0xfb83,	// (0x0005ada9) list_single_graphic_pane_fp_g_ParamLimits

0xfb83,	// (0x0005ada9) list_single_graphic_pane_fp_g

0x7fc7,	// (0x000531ed) list_single_graphic_pane_fp_t1_ParamLimits

0x7fc7,	// (0x000531ed) list_single_graphic_pane_fp_t1

0x7fbb,	// (0x000531e1) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x7fbb,	// (0x000531e1) list_single_graphic_heading_pane_fp_g1

0xc782,	// (0x000579a8) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc782,	// (0x000579a8) list_single_graphic_heading_pane_fp_g2

0x85f5,	// (0x0005381b) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x85f5,	// (0x0005381b) list_single_graphic_heading_pane_fp_g3

0x8668,	// (0x0005388e) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x8668,	// (0x0005388e) list_single_graphic_heading_pane_fp_g4

0xc78e,	// (0x000579b4) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc78e,	// (0x000579b4) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb83,	// (0x0005ada9) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb83,	// (0x0005ada9) list_single_graphic_heading_pane_fp_g

0x7fdd,	// (0x00053203) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x7fdd,	// (0x00053203) list_single_graphic_heading_pane_fp_t1

0x7ff3,	// (0x00053219) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x7ff3,	// (0x00053219) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb8e,	// (0x0005adb4) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb8e,	// (0x0005adb4) list_single_graphic_heading_pane_fp_t

0x8005,	// (0x0005322b) list_single_cale_day_pane_fp_g1_ParamLimits

0x8005,	// (0x0005322b) list_single_cale_day_pane_fp_g1

0xc79a,	// (0x000579c0) list_single_cale_day_pane_fp_g2_ParamLimits

0xc79a,	// (0x000579c0) list_single_cale_day_pane_fp_g2

0x803d,	// (0x00053263) list_single_cale_day_pane_fp_g3_ParamLimits

0x803d,	// (0x00053263) list_single_cale_day_pane_fp_g3

0x8065,	// (0x0005328b) list_single_cale_day_pane_fp_g4_ParamLimits

0x8065,	// (0x0005328b) list_single_cale_day_pane_fp_g4

0x8089,	// (0x000532af) list_single_cale_day_pane_fp_g5_ParamLimits

0x8089,	// (0x000532af) list_single_cale_day_pane_fp_g5

0x0004,

0xfb93,	// (0x0005adb9) list_single_cale_day_pane_fp_g_ParamLimits

0xfb93,	// (0x0005adb9) list_single_cale_day_pane_fp_g

0x80ad,	// (0x000532d3) list_single_cale_day_pane_fp_t1_ParamLimits

0x80ad,	// (0x000532d3) list_single_cale_day_pane_fp_t1

0x80d3,	// (0x000532f9) list_single_cale_day_pane_fp_t2_ParamLimits

0x80d3,	// (0x000532f9) list_single_cale_day_pane_fp_t2

0x80ec,	// (0x00053312) list_single_cale_day_pane_fp_t3_ParamLimits

0x80ec,	// (0x00053312) list_single_cale_day_pane_fp_t3

0x0002,

0xfb9e,	// (0x0005adc4) list_single_cale_day_pane_fp_t_ParamLimits

0xfb9e,	// (0x0005adc4) list_single_cale_day_pane_fp_t

0xc782,	// (0x000579a8) list_empty_pane_fp_g1_ParamLimits

0xc782,	// (0x000579a8) list_empty_pane_fp_g1

0x8105,	// (0x0005332b) list_empty_pane_fp_t1

0x8113,	// (0x00053339) list_empty_pane_fp_t2

0x0001,

0xfba5,	// (0x0005adcb) list_empty_pane_fp_t

0xc782,	// (0x000579a8) list_single_heading_pane_fp_g1_ParamLimits

0xc782,	// (0x000579a8) list_single_heading_pane_fp_g1

0x85f5,	// (0x0005381b) list_single_heading_pane_fp_g2_ParamLimits

0x85f5,	// (0x0005381b) list_single_heading_pane_fp_g2

0x8668,	// (0x0005388e) list_single_heading_pane_fp_g3_ParamLimits

0x8668,	// (0x0005388e) list_single_heading_pane_fp_g3

0x0002,

0xfbaa,	// (0x0005add0) list_single_heading_pane_fp_g_ParamLimits

0xfbaa,	// (0x0005add0) list_single_heading_pane_fp_g

0x8121,	// (0x00053347) list_single_heading_pane_fp_t1_ParamLimits

0x8121,	// (0x00053347) list_single_heading_pane_fp_t1

0x8133,	// (0x00053359) list_single_heading_pane_fp_t2_ParamLimits

0x8133,	// (0x00053359) list_single_heading_pane_fp_t2

0x0001,

0xfbb1,	// (0x0005add7) list_single_heading_pane_fp_t_ParamLimits

0xfbb1,	// (0x0005add7) list_single_heading_pane_fp_t

0x8850,	// (0x00053a76) aid_size_cell_fast

0x79c9,	// (0x00052bef) soft_indicator_pane_cp1_t1

0x888d,	// (0x00053ab3) cell_app_pane_cp2_ParamLimits

0x888d,	// (0x00053ab3) cell_app_pane_cp2

0x68aa,	// (0x00051ad0) fep_hwr_candidate_drop_down_list_pane

0x6a82,	// (0x00051ca8) fep_hwr_candidate_pane_g3_ParamLimits

0x6a82,	// (0x00051ca8) fep_hwr_candidate_pane_g3

0x33d8,	// (0x0004e5fe) fep_hwr_candidate_pane_g4_ParamLimits

0x33d8,	// (0x0004e5fe) fep_hwr_candidate_pane_g4

0x0002,

0xfb20,	// (0x0005ad46) fep_hwr_candidate_pane_g_ParamLimits

0xfb20,	// (0x0005ad46) fep_hwr_candidate_pane_g

0xc28b,	// (0x000574b1) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc28b,	// (0x000574b1) fep_vkb_candidate_drop_down_list_pane

0xc69c,	// (0x000578c2) fep_vkb_candidate_pane_g3

0xc6a4,	// (0x000578ca) fep_vkb_candidate_pane_g4

0x0002,

0xfb4d,	// (0x0005ad73) fep_vkb_candidate_pane_g

0x6aed,	// (0x00051d13) cell_hwr_candidate_pane_g1_ParamLimits

0x6afb,	// (0x00051d21) cell_hwr_candidate_pane_g3_ParamLimits

0x6afb,	// (0x00051d21) cell_hwr_candidate_pane_g3

0xd8d1,	// (0x00058af7) cell_hwr_candidate_pane_g4_ParamLimits

0xd8d1,	// (0x00058af7) cell_hwr_candidate_pane_g4

0x0002,

0xfb6c,	// (0x0005ad92) cell_hwr_candidate_pane_g_ParamLimits

0xfb6c,	// (0x0005ad92) cell_hwr_candidate_pane_g

0xc6bb,	// (0x000578e1) cell_vkb_candidate_pane_g3_ParamLimits

0xc6bb,	// (0x000578e1) cell_vkb_candidate_pane_g3

0xc6d6,	// (0x000578fc) cell_vkb_candidate_pane_g4_ParamLimits

0xc6d6,	// (0x000578fc) cell_vkb_candidate_pane_g4

0xc7a6,	// (0x000579cc) cell_app_pane_cp2_g1_ParamLimits

0xc7a6,	// (0x000579cc) cell_app_pane_cp2_g1

0xc7c4,	// (0x000579ea) cell_app_pane_cp2_g2_ParamLimits

0xc7c4,	// (0x000579ea) cell_app_pane_cp2_g2

0x0001,

0xfbb6,	// (0x0005addc) cell_app_pane_cp2_g_ParamLimits

0xfbb6,	// (0x0005addc) cell_app_pane_cp2_g

0xc7d0,	// (0x000579f6) cell_app_pane_cp2_t1_ParamLimits

0xc7d0,	// (0x000579f6) cell_app_pane_cp2_t1

0x865a,	// (0x00053880) grid_highlight_pane_cp1_ParamLimits

0x865a,	// (0x00053880) grid_highlight_pane_cp1

0x6b3a,	// (0x00051d60) cell_hwr_candidate_pane_cp1_ParamLimits

0x6b3a,	// (0x00051d60) cell_hwr_candidate_pane_cp1

0x6aed,	// (0x00051d13) fep_hwr_candidate_drop_down_list_pane_g1

0x6b59,	// (0x00051d7f) fep_hwr_candidate_drop_down_list_pane_g2

0x6b66,	// (0x00051d8c) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbbb,	// (0x0005ade1) fep_hwr_candidate_drop_down_list_pane_g

0x6b73,	// (0x00051d99) fep_hwr_candidate_drop_down_list_scroll_pane

0x6b7c,	// (0x00051da2) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x6b7c,	// (0x00051da2) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x6b89,	// (0x00051daf) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x6b89,	// (0x00051daf) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x6b96,	// (0x00051dbc) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x6b96,	// (0x00051dbc) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x6ba3,	// (0x00051dc9) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6ba3,	// (0x00051dc9) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x6bbe,	// (0x00051de4) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6bbe,	// (0x00051de4) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x6bd9,	// (0x00051dff) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x6bd9,	// (0x00051dff) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x6bf4,	// (0x00051e1a) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x6bf4,	// (0x00051e1a) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x6c0f,	// (0x00051e35) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x6c0f,	// (0x00051e35) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc2,	// (0x0005ade8) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc2,	// (0x0005ade8) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc7e2,	// (0x00057a08) cell_vkb_candidate_pane_cp1_ParamLimits

0xc7e2,	// (0x00057a08) cell_vkb_candidate_pane_cp1

0xc3a4,	// (0x000575ca) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc3a4,	// (0x000575ca) fep_vkb_candidate_drop_down_list_pane_g1

0xc802,	// (0x00057a28) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc802,	// (0x00057a28) fep_vkb_candidate_drop_down_list_pane_g2

0xc80f,	// (0x00057a35) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc80f,	// (0x00057a35) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbd3,	// (0x0005adf9) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbd3,	// (0x0005adf9) fep_vkb_candidate_drop_down_list_pane_g

0xc81c,	// (0x00057a42) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc81c,	// (0x00057a42) fep_vkb_candidate_drop_down_list_scroll_pane

0xc829,	// (0x00057a4f) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc829,	// (0x00057a4f) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc836,	// (0x00057a5c) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc836,	// (0x00057a5c) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc842,	// (0x00057a68) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc842,	// (0x00057a68) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc84e,	// (0x00057a74) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc84e,	// (0x00057a74) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc86f,	// (0x00057a95) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc86f,	// (0x00057a95) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc890,	// (0x00057ab6) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc890,	// (0x00057ab6) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc8b1,	// (0x00057ad7) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc8b1,	// (0x00057ad7) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc8d2,	// (0x00057af8) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc8d2,	// (0x00057af8) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbda,	// (0x0005ae00) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbda,	// (0x0005ae00) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x76fa,	// (0x00052920) title_pane_g1_ParamLimits

0x7707,	// (0x0005292d) title_pane_g2_ParamLimits

0xf554,	// (0x0005a77a) title_pane_g_ParamLimits

0x8cbf,	// (0x00053ee5) aid_call2_pane

0x8cc7,	// (0x00053eed) aid_call_pane

0x8ccf,	// (0x00053ef5) popup_clock_analogue_window_g1

0x8ccf,	// (0x00053ef5) popup_clock_analogue_window_g2

0x5617,	// (0x0005083d) popup_clock_analogue_window_g3

0x5620,	// (0x00050846) popup_clock_analogue_window_g4

0x76e6,	// (0x0005290c) popup_clock_analogue_window_g5

0x0004,

0xf703,	// (0x0005a929) popup_clock_analogue_window_g

0x5628,	// (0x0005084e) popup_clock_analogue_window_t1

0x5636,	// (0x0005085c) clock_digital_number_pane_ParamLimits

0x5636,	// (0x0005085c) clock_digital_number_pane

0x5642,	// (0x00050868) clock_digital_number_pane_cp02_ParamLimits

0x5642,	// (0x00050868) clock_digital_number_pane_cp02

0x564e,	// (0x00050874) clock_digital_number_pane_cp03_ParamLimits

0x564e,	// (0x00050874) clock_digital_number_pane_cp03

0x565a,	// (0x00050880) clock_digital_number_pane_cp04_ParamLimits

0x565a,	// (0x00050880) clock_digital_number_pane_cp04

0x5666,	// (0x0005088c) clock_digital_separator_pane_ParamLimits

0x5666,	// (0x0005088c) clock_digital_separator_pane

0x5672,	// (0x00050898) popup_clock_digital_window_t1_ParamLimits

0x5672,	// (0x00050898) popup_clock_digital_window_t1

0x76e6,	// (0x0005290c) clock_digital_number_pane_g1

0x76e6,	// (0x0005290c) clock_digital_number_pane_g2

0x0001,

0xf70e,	// (0x0005a934) clock_digital_number_pane_g

0x76e6,	// (0x0005290c) clock_digital_separator_pane_g1

0x76e6,	// (0x0005290c) clock_digital_separator_pane_g2

0x0001,

0xf70e,	// (0x0005a934) clock_digital_separator_pane_g

0x9645,	// (0x0005486b) aid_fill_nsta_ParamLimits

0x9787,	// (0x000549ad) indicator_nsta_pane_ParamLimits

0x98fa,	// (0x00054b20) popup_clock_analogue_window

0x98fa,	// (0x00054b20) popup_clock_digital_window

0x77d0,	// (0x000529f6) grid_indicator_nsta_pane_ParamLimits

0xbb1b,	// (0x00056d41) clock_nsta_pane_t2

0x0001,

0xfaa0,	// (0x0005acc6) clock_nsta_pane_t

0x55db,	// (0x00050801) aid_size_max_handle

0x55e5,	// (0x0005080b) aid_size_min_handle

0x92e3,	// (0x00054509) editor_scroll_pane

0xc8ed,	// (0x00057b13) ex_editor_pane

0x87be,	// (0x000539e4) scroll_pane_cp13

0x85ed,	// (0x00053813) scroll_pane_cp14

0x8cfe,	// (0x00053f24) scroll_pane_cp36

0x8d2a,	// (0x00053f50) list_single_graphic_hl_pane_cp2_ParamLimits

0x8d2a,	// (0x00053f50) list_single_graphic_hl_pane_cp2

0x6552,	// (0x00051778) list_single_graphic_hl_pane_ParamLimits

0x6552,	// (0x00051778) list_single_graphic_hl_pane

0x8149,	// (0x0005336f) aid_size_min_hl_cp1

0xc8f5,	// (0x00057b1b) list_highlight_pane_cp34_ParamLimits

0xc8f5,	// (0x00057b1b) list_highlight_pane_cp34

0xc906,	// (0x00057b2c) list_single_graphic_hl_pane_g1_ParamLimits

0xc906,	// (0x00057b2c) list_single_graphic_hl_pane_g1

0x8152,	// (0x00053378) list_single_graphic_hl_pane_g2_ParamLimits

0x8152,	// (0x00053378) list_single_graphic_hl_pane_g2

0x8152,	// (0x00053378) list_single_graphic_hl_pane_g3_ParamLimits

0x8152,	// (0x00053378) list_single_graphic_hl_pane_g3

0x9254,	// (0x0005447a) list_single_graphic_hl_pane_g4_ParamLimits

0x9254,	// (0x0005447a) list_single_graphic_hl_pane_g4

0x815e,	// (0x00053384) list_single_graphic_hl_pane_g5_ParamLimits

0x815e,	// (0x00053384) list_single_graphic_hl_pane_g5

0x0004,

0xfbeb,	// (0x0005ae11) list_single_graphic_hl_pane_g_ParamLimits

0xfbeb,	// (0x0005ae11) list_single_graphic_hl_pane_g

0x8172,	// (0x00053398) list_single_graphic_hl_pane_t1_ParamLimits

0x8172,	// (0x00053398) list_single_graphic_hl_pane_t1

0xc913,	// (0x00057b39) aid_size_min_hl_cp2

0xc91c,	// (0x00057b42) list_highlight_pane_cp34_cp2_ParamLimits

0xc91c,	// (0x00057b42) list_highlight_pane_cp34_cp2

0xc906,	// (0x00057b2c) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc906,	// (0x00057b2c) list_single_graphic_hl_pane_g1_cp2

0xc929,	// (0x00057b4f) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc929,	// (0x00057b4f) list_single_graphic_hl_pane_g2_cp2

0xc935,	// (0x00057b5b) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc935,	// (0x00057b5b) list_single_graphic_hl_pane_g3_cp2

0xc943,	// (0x00057b69) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xc943,	// (0x00057b69) list_single_graphic_hl_pane_g4_cp2

0xc94f,	// (0x00057b75) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc94f,	// (0x00057b75) list_single_graphic_hl_pane_g5_cp2

0x5994,	// (0x00050bba) control_pane_g4_ParamLimits

0x5994,	// (0x00050bba) control_pane_g4

0x9623,	// (0x00054849) bg_popup_sub_pane_cp10_ParamLimits

0xc130,	// (0x00057356) list_choice_list_pane_ParamLimits

0xc13f,	// (0x00057365) scroll_pane_cp23

0x7a59,	// (0x00052c7f) bg_popup_preview_window_pane_cp02_ParamLimits

0xc727,	// (0x0005794d) list_preview_fixed_pane_ParamLimits

0xc73d,	// (0x00057963) list_preview_fixed_pane_cp_ParamLimits

0xc73d,	// (0x00057963) list_preview_fixed_pane_cp

0xc749,	// (0x0005796f) popup_preview_fixed_window_g1_ParamLimits

0xc749,	// (0x0005796f) popup_preview_fixed_window_g1

0xc755,	// (0x0005797b) popup_preview_fixed_window_g2_ParamLimits

0xc755,	// (0x0005797b) popup_preview_fixed_window_g2

0x0002,

0xfb73,	// (0x0005ad99) popup_preview_fixed_window_g_ParamLimits

0xfb73,	// (0x0005ad99) popup_preview_fixed_window_g

0x554f,	// (0x00050775) aid_navi_side_left_pane_ParamLimits

0x5564,	// (0x0005078a) aid_navi_side_right_pane_ParamLimits

0x557c,	// (0x000507a2) navi_icon_pane_stacon_ParamLimits

0x5590,	// (0x000507b6) navi_navi_pane_stacon_ParamLimits

0x557c,	// (0x000507a2) navi_text_pane_stacon_ParamLimits

0x4a94,	// (0x0004fcba) main_text_info_pane

0xc979,	// (0x00057b9f) listscroll_text_info_pane

0xc981,	// (0x00057ba7) list_text_info_pane_ParamLimits

0xc981,	// (0x00057ba7) list_text_info_pane

0xc990,	// (0x00057bb6) scroll_pane_cp24_ParamLimits

0xc990,	// (0x00057bb6) scroll_pane_cp24

0xc9ae,	// (0x00057bd4) list_text_info_pane_t1_ParamLimits

0xc9ae,	// (0x00057bd4) list_text_info_pane_t1

0x5b00,	// (0x00050d26) popup_fast_swap2_window_ParamLimits

0x5b00,	// (0x00050d26) popup_fast_swap2_window

0xc9df,	// (0x00057c05) aid_size_cell_fast2

0x76dc,	// (0x00052902) bg_popup_window_pane_cp17

0x9f79,	// (0x0005519f) heading_pane_cp2

0x7ca5,	// (0x00052ecb) listscroll_fast2_pane

0xc9e9,	// (0x00057c0f) grid_fast2_pane

0xc9f3,	// (0x00057c19) listscroll_fast2_pane_g1

0xc9fb,	// (0x00057c21) listscroll_fast2_pane_g2

0x0001,

0xfbf6,	// (0x0005ae1c) listscroll_fast2_pane_g

0x87be,	// (0x000539e4) scroll_pane_cp26

0xca05,	// (0x00057c2b) cell_fast2_pane_ParamLimits

0xca05,	// (0x00057c2b) cell_fast2_pane

0xca1a,	// (0x00057c40) cell_fast2_pane_g1

0xca23,	// (0x00057c49) cell_fast2_pane_g2

0xca2c,	// (0x00057c52) cell_fast2_pane_g3

0x0002,

0xfbfb,	// (0x0005ae21) cell_fast2_pane_g

0x83aa,	// (0x000535d0) grid_highlight_pane_cp9

0x5abe,	// (0x00050ce4) main_eswt_pane_ParamLimits

0x5abe,	// (0x00050ce4) main_eswt_pane

0xc9a5,	// (0x00057bcb) list_single_text_info_pane

0xca34,	// (0x00057c5a) eswt_ctrl_button_pane

0xca34,	// (0x00057c5a) eswt_ctrl_canvas_pane

0xca3c,	// (0x00057c62) eswt_ctrl_combo_pane

0xca34,	// (0x00057c5a) eswt_ctrl_default_pane

0xca34,	// (0x00057c5a) eswt_ctrl_label_pane

0xca44,	// (0x00057c6a) eswt_ctrl_wait_pane

0xca4c,	// (0x00057c72) eswt_shell_pane

0x76dc,	// (0x00052902) listscroll_eswt_app_pane

0xca6c,	// (0x00057c92) popup_eswt_tasktip_window_ParamLimits

0xca6c,	// (0x00057c92) popup_eswt_tasktip_window

0x9b8f,	// (0x00054db5) bg_popup_window_pane_cp18

0xca7d,	// (0x00057ca3) eswt_control_pane_g1_ParamLimits

0xca7d,	// (0x00057ca3) eswt_control_pane_g1

0xca8a,	// (0x00057cb0) eswt_control_pane_g2_ParamLimits

0xca8a,	// (0x00057cb0) eswt_control_pane_g2

0xca97,	// (0x00057cbd) eswt_control_pane_g3_ParamLimits

0xca97,	// (0x00057cbd) eswt_control_pane_g3

0xcaa4,	// (0x00057cca) eswt_control_pane_g4_ParamLimits

0xcaa4,	// (0x00057cca) eswt_control_pane_g4

0x0003,

0xfc02,	// (0x0005ae28) eswt_control_pane_g_ParamLimits

0xfc02,	// (0x0005ae28) eswt_control_pane_g

0x865a,	// (0x00053880) bg_button_pane_ParamLimits

0x865a,	// (0x00053880) bg_button_pane

0x83bf,	// (0x000535e5) common_borders_pane_copy2_ParamLimits

0x83bf,	// (0x000535e5) common_borders_pane_copy2

0xcab1,	// (0x00057cd7) control_button_pane_g1_ParamLimits

0xcab1,	// (0x00057cd7) control_button_pane_g1

0xcabd,	// (0x00057ce3) control_button_pane_g2_ParamLimits

0xcabd,	// (0x00057ce3) control_button_pane_g2

0xcac9,	// (0x00057cef) control_button_pane_g3_ParamLimits

0xcac9,	// (0x00057cef) control_button_pane_g3

0x0002,

0xfc0b,	// (0x0005ae31) control_button_pane_g_ParamLimits

0xfc0b,	// (0x0005ae31) control_button_pane_g

0xcadd,	// (0x00057d03) control_button_pane_t1

0xcaeb,	// (0x00057d11) control_button_pane_t2

0x0001,

0xfc12,	// (0x0005ae38) control_button_pane_t

0x9b1b,	// (0x00054d41) bg_button_pane_g1

0x9b2b,	// (0x00054d51) bg_button_pane_g2

0x9b23,	// (0x00054d49) bg_button_pane_g3

0x9b3b,	// (0x00054d61) bg_button_pane_g4

0x9b33,	// (0x00054d59) bg_button_pane_g5

0x9b43,	// (0x00054d69) bg_button_pane_g6

0x9b4b,	// (0x00054d71) bg_button_pane_g7

0x9b5b,	// (0x00054d81) bg_button_pane_g8

0x9b53,	// (0x00054d79) bg_button_pane_g9

0x0008,

0xf871,	// (0x0005aa97) bg_button_pane_g

0xc0eb,	// (0x00057311) common_borders_pane_ParamLimits

0xc0eb,	// (0x00057311) common_borders_pane

0xca7d,	// (0x00057ca3) eswt_control_pane_g1_copy1_ParamLimits

0xca7d,	// (0x00057ca3) eswt_control_pane_g1_copy1

0xca8a,	// (0x00057cb0) eswt_control_pane_g2_copy1_ParamLimits

0xca8a,	// (0x00057cb0) eswt_control_pane_g2_copy1

0xca97,	// (0x00057cbd) eswt_control_pane_g3_copy1_ParamLimits

0xca97,	// (0x00057cbd) eswt_control_pane_g3_copy1

0xcaa4,	// (0x00057cca) eswt_control_pane_g4_copy1_ParamLimits

0xcaa4,	// (0x00057cca) eswt_control_pane_g4_copy1

0xc126,	// (0x0005734c) bg_eswt_ctrl_canvas_pane_g1

0xc0eb,	// (0x00057311) common_borders_pane_cp2_ParamLimits

0xc0eb,	// (0x00057311) common_borders_pane_cp2

0xc0eb,	// (0x00057311) common_borders_pane_cp3_ParamLimits

0xc0eb,	// (0x00057311) common_borders_pane_cp3

0xcaf9,	// (0x00057d1f) separator_horizontal_pane

0xcb01,	// (0x00057d27) separator_vertical_pane

0xca7d,	// (0x00057ca3) eswt_control_pane_g1_copy2_ParamLimits

0xca7d,	// (0x00057ca3) eswt_control_pane_g1_copy2

0xca8a,	// (0x00057cb0) eswt_control_pane_g2_copy2_ParamLimits

0xca8a,	// (0x00057cb0) eswt_control_pane_g2_copy2

0xca97,	// (0x00057cbd) eswt_control_pane_g3_copy2_ParamLimits

0xca97,	// (0x00057cbd) eswt_control_pane_g3_copy2

0xcaa4,	// (0x00057cca) eswt_control_pane_g4_copy2_ParamLimits

0xcaa4,	// (0x00057cca) eswt_control_pane_g4_copy2

0x76dc,	// (0x00052902) common_borders_pane_cp4

0xcb0a,	// (0x00057d30) separator_horizontal_pane_g1

0xcb13,	// (0x00057d39) separator_horizontal_pane_g2

0xcb1c,	// (0x00057d42) separator_horizontal_pane_g3

0x0002,

0xfc17,	// (0x0005ae3d) separator_horizontal_pane_g

0xca7d,	// (0x00057ca3) eswt_control_pane_g1_copy3_ParamLimits

0xca7d,	// (0x00057ca3) eswt_control_pane_g1_copy3

0xca8a,	// (0x00057cb0) eswt_control_pane_g2_copy3_ParamLimits

0xca8a,	// (0x00057cb0) eswt_control_pane_g2_copy3

0xca97,	// (0x00057cbd) eswt_control_pane_g3_copy3_ParamLimits

0xca97,	// (0x00057cbd) eswt_control_pane_g3_copy3

0xcaa4,	// (0x00057cca) eswt_control_pane_g4_copy3_ParamLimits

0xcaa4,	// (0x00057cca) eswt_control_pane_g4_copy3

0x76dc,	// (0x00052902) common_borders_pane_cp5

0xcb25,	// (0x00057d4b) separator_vertical_pane_g1

0xcb2e,	// (0x00057d54) separator_vertical_pane_g2

0xcb37,	// (0x00057d5d) separator_vertical_pane_g3

0x0002,

0xfc1e,	// (0x0005ae44) separator_vertical_pane_g

0xca7d,	// (0x00057ca3) eswt_control_pane_g1_copy4_ParamLimits

0xca7d,	// (0x00057ca3) eswt_control_pane_g1_copy4

0xca8a,	// (0x00057cb0) eswt_control_pane_g2_copy4_ParamLimits

0xca8a,	// (0x00057cb0) eswt_control_pane_g2_copy4

0xca97,	// (0x00057cbd) eswt_control_pane_g3_copy4_ParamLimits

0xca97,	// (0x00057cbd) eswt_control_pane_g3_copy4

0xcaa4,	// (0x00057cca) eswt_control_pane_g4_copy4_ParamLimits

0xcaa4,	// (0x00057cca) eswt_control_pane_g4_copy4

0xcb40,	// (0x00057d66) eswt_ctrl_combo_button_pane

0xcb48,	// (0x00057d6e) eswt_ctrl_input_pane

0xcb50,	// (0x00057d76) popup_choice_list_window_cp70

0xcb58,	// (0x00057d7e) eswt_ctrl_input_pane_t1

0x76dc,	// (0x00052902) input_focus_pane_cp70

0xc0eb,	// (0x00057311) bg_button_pane_cp70_ParamLimits

0xc0eb,	// (0x00057311) bg_button_pane_cp70

0xcb66,	// (0x00057d8c) eswt_ctrl_combo_button_pane_g1

0xcb6e,	// (0x00057d94) wait_bar_pane_cp70

0x9b8f,	// (0x00054db5) bg_popup_window_pane_cp70_ParamLimits

0x9b8f,	// (0x00054db5) bg_popup_window_pane_cp70

0xcb76,	// (0x00057d9c) popup_eswt_tasktip_window_t1

0xcb8c,	// (0x00057db2) wait_bar_pane_cp71_ParamLimits

0xcb8c,	// (0x00057db2) wait_bar_pane_cp71

0xcb98,	// (0x00057dbe) grid_eswt_app_pane

0x8ad8,	// (0x00053cfe) scroll_pane_cp70

0xcba1,	// (0x00057dc7) cell_eswt_app_pane_ParamLimits

0xcba1,	// (0x00057dc7) cell_eswt_app_pane

0xcbd1,	// (0x00057df7) cell_eswt_app_pane_g1_ParamLimits

0xcbd1,	// (0x00057df7) cell_eswt_app_pane_g1

0xcc00,	// (0x00057e26) cell_eswt_app_pane_g2_ParamLimits

0xcc00,	// (0x00057e26) cell_eswt_app_pane_g2

0x0001,

0xfc25,	// (0x0005ae4b) cell_eswt_app_pane_g_ParamLimits

0xfc25,	// (0x0005ae4b) cell_eswt_app_pane_g

0xcc29,	// (0x00057e4f) cell_eswt_app_pane_t1_ParamLimits

0xcc29,	// (0x00057e4f) cell_eswt_app_pane_t1

0xcc5b,	// (0x00057e81) grid_highlight_pane_cp70_ParamLimits

0xcc5b,	// (0x00057e81) grid_highlight_pane_cp70

0x91b8,	// (0x000543de) set_content_pane_g1

0x9583,	// (0x000547a9) status_small_volume_pane

0x6c2a,	// (0x00051e50) status_small_volume_pane_g1

0x6c32,	// (0x00051e58) volume_small2_pane

0x6c3b,	// (0x00051e61) volume_small2_pane_g1

0x6c44,	// (0x00051e6a) volume_small2_pane_g2

0x6c4d,	// (0x00051e73) volume_small2_pane_g3

0x6c56,	// (0x00051e7c) volume_small2_pane_g4

0x6c5f,	// (0x00051e85) volume_small2_pane_g5

0x6c68,	// (0x00051e8e) volume_small2_pane_g6

0x6c71,	// (0x00051e97) volume_small2_pane_g7

0x6c7a,	// (0x00051ea0) volume_small2_pane_g8

0x6c83,	// (0x00051ea9) volume_small2_pane_g9

0x6c8c,	// (0x00051eb2) volume_small2_pane_g10

0x0009,

0xfc2a,	// (0x0005ae50) volume_small2_pane_g

0xc4ec,	// (0x00057712) fep_vkb_top_text_pane_g1_ParamLimits

0xc507,	// (0x0005772d) fep_vkb_top_text_pane_t1_ParamLimits

0xc761,	// (0x00057987) popup_preview_fixed_window_g3_ParamLimits

0xc761,	// (0x00057987) popup_preview_fixed_window_g3

0x5fad,	// (0x000511d3) popup_toolbar_trans_pane

0xaef3,	// (0x00056119) aid_height_set_list_ParamLimits

0xaf04,	// (0x0005612a) aid_size_parent_ParamLimits

0x9623,	// (0x00054849) list_highlight_pane_cp2_ParamLimits

0x91b8,	// (0x000543de) set_content_pane_g1_ParamLimits

0x656d,	// (0x00051793) list_single_image_pane_ParamLimits

0x656d,	// (0x00051793) list_single_image_pane

0xcc67,	// (0x00057e8d) aid_size_cell_image_ParamLimits

0xcc67,	// (0x00057e8d) aid_size_cell_image

0xcc74,	// (0x00057e9a) grid_single_image_pane_ParamLimits

0xcc74,	// (0x00057e9a) grid_single_image_pane

0x8f36,	// (0x0005415c) list_single_image_pane_g1_ParamLimits

0x8f36,	// (0x0005415c) list_single_image_pane_g1

0xcc80,	// (0x00057ea6) list_single_image_pane_g2_ParamLimits

0xcc80,	// (0x00057ea6) list_single_image_pane_g2

0x0001,

0xfc3f,	// (0x0005ae65) list_single_image_pane_g_ParamLimits

0xfc3f,	// (0x0005ae65) list_single_image_pane_g

0xcc94,	// (0x00057eba) list_single_image_pane_t1_ParamLimits

0xcc94,	// (0x00057eba) list_single_image_pane_t1

0xccaa,	// (0x00057ed0) cell_image_list_pane_ParamLimits

0xccaa,	// (0x00057ed0) cell_image_list_pane

0xccbe,	// (0x00057ee4) cell_image_list_pane_g1

0xccc7,	// (0x00057eed) cell_image_list_pane_g2

0x0001,

0xfc44,	// (0x0005ae6a) cell_image_list_pane_g

0xccd0,	// (0x00057ef6) aid_size_cell_tb_trans_pane

0x865a,	// (0x00053880) bg_tb_trans_pane

0xcce2,	// (0x00057f08) grid_tb_trans_pane

0x9b1b,	// (0x00054d41) bg_tb_trans_pane_g1

0x9b2b,	// (0x00054d51) bg_tb_trans_pane_g2

0x9b23,	// (0x00054d49) bg_tb_trans_pane_g3

0x9b3b,	// (0x00054d61) bg_tb_trans_pane_g4

0x9b33,	// (0x00054d59) bg_tb_trans_pane_g5

0x9b5b,	// (0x00054d81) bg_tb_trans_pane_g6

0x9b53,	// (0x00054d79) bg_tb_trans_pane_g7

0x9b43,	// (0x00054d69) bg_tb_trans_pane_g8

0x9b4b,	// (0x00054d71) bg_tb_trans_pane_g9

0x0008,

0xfc49,	// (0x0005ae6f) bg_tb_trans_pane_g

0xccf6,	// (0x00057f1c) cell_toolbar_trans_pane_ParamLimits

0xccf6,	// (0x00057f1c) cell_toolbar_trans_pane

0xc126,	// (0x0005734c) cell_toolbar_trans_pane_g1

0xbcf0,	// (0x00056f16) list_form2_midp_pane_t1

0xbcfe,	// (0x00056f24) list_form2_midp_pane_t2

0x0001,

0xfae6,	// (0x0005ad0c) list_form2_midp_pane_t

0xbd0c,	// (0x00056f32) scroll_pane_cp51_ParamLimits

0xbec8,	// (0x000570ee) form2_midp_wait_pane_g1

0xbed1,	// (0x000570f7) form2_midp_wait_pane_g2

0xbeda,	// (0x00057100) form2_midp_wait_pane_g3

0x0002,

0xfafb,	// (0x0005ad21) form2_midp_wait_pane_g

0x77d0,	// (0x000529f6) list_highlight_pane_cp21_ParamLimits

0xbf31,	// (0x00057157) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xbf40,	// (0x00057166) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x7dfc,	// (0x00053022) list_single_2graphic_im_pane_ParamLimits

0x7dfc,	// (0x00053022) list_single_2graphic_im_pane

0xcd1c,	// (0x00057f42) list_single_2graphic_im_pane_g1_ParamLimits

0xcd1c,	// (0x00057f42) list_single_2graphic_im_pane_g1

0xcd2d,	// (0x00057f53) list_single_2graphic_im_pane_g2_ParamLimits

0xcd2d,	// (0x00057f53) list_single_2graphic_im_pane_g2

0xcd39,	// (0x00057f5f) list_single_2graphic_im_pane_g3_ParamLimits

0xcd39,	// (0x00057f5f) list_single_2graphic_im_pane_g3

0x0003,

0xfc5c,	// (0x0005ae82) list_single_2graphic_im_pane_g_ParamLimits

0xfc5c,	// (0x0005ae82) list_single_2graphic_im_pane_g

0xcd59,	// (0x00057f7f) list_single_2graphic_im_pane_t1_ParamLimits

0xcd59,	// (0x00057f7f) list_single_2graphic_im_pane_t1

0xc76d,	// (0x00057993) list_single_graphic_2heading_pane_fp_ParamLimits

0xc76d,	// (0x00057993) list_single_graphic_2heading_pane_fp

0x7fbb,	// (0x000531e1) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x7fbb,	// (0x000531e1) list_single_graphic_2heading_pane_fp_g1

0xc782,	// (0x000579a8) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc782,	// (0x000579a8) list_single_graphic_2heading_pane_fp_g2

0x85f5,	// (0x0005381b) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x85f5,	// (0x0005381b) list_single_graphic_2heading_pane_fp_g3

0x8668,	// (0x0005388e) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x8668,	// (0x0005388e) list_single_graphic_2heading_pane_fp_g4

0xc78e,	// (0x000579b4) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc78e,	// (0x000579b4) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb83,	// (0x0005ada9) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb83,	// (0x0005ada9) list_single_graphic_2heading_pane_fp_g

0x8188,	// (0x000533ae) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x8188,	// (0x000533ae) list_single_graphic_2heading_pane_fp_t1

0x7ff3,	// (0x00053219) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x7ff3,	// (0x00053219) list_single_graphic_2heading_pane_fp_t2

0x819e,	// (0x000533c4) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x819e,	// (0x000533c4) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc65,	// (0x0005ae8b) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc65,	// (0x0005ae8b) list_single_graphic_2heading_pane_fp_t

0xc1b2,	// (0x000573d8) fep_hwr_write_pane_g5_ParamLimits

0xc1b2,	// (0x000573d8) fep_hwr_write_pane_g5

0xc1be,	// (0x000573e4) fep_hwr_write_pane_g6_ParamLimits

0xc1be,	// (0x000573e4) fep_hwr_write_pane_g6

0xca4c,	// (0x00057c72) eswt_shell_pane_ParamLimits

0x9b8f,	// (0x00054db5) bg_popup_window_pane_cp18_ParamLimits

0xae4c,	// (0x00056072) heading_pane_cp70

0xcb76,	// (0x00057d9c) popup_eswt_tasktip_window_t1_ParamLimits

0x969a,	// (0x000548c0) aid_touch_tab_arrow_left

0x96a6,	// (0x000548cc) aid_touch_tab_arrow_right

0x7718,	// (0x0005293e) title_pane_g3_ParamLimits

0x7718,	// (0x0005293e) title_pane_g3

0x8619,	// (0x0005383f) set_value_pane_g1

0x5fad,	// (0x000511d3) popup_toolbar_trans_pane_ParamLimits

0xccd0,	// (0x00057ef6) aid_size_cell_tb_trans_pane_ParamLimits

0x865a,	// (0x00053880) bg_tb_trans_pane_ParamLimits

0xcce2,	// (0x00057f08) grid_tb_trans_pane_ParamLimits

0x7a59,	// (0x00052c7f) cont_note_pane_ParamLimits

0x7a59,	// (0x00052c7f) cont_note_pane

0x83bf,	// (0x000535e5) cont_snote2_single_text_pane_ParamLimits

0x83bf,	// (0x000535e5) cont_snote2_single_text_pane

0x83bf,	// (0x000535e5) cont_snote2_single_graphic_pane_ParamLimits

0x83bf,	// (0x000535e5) cont_snote2_single_graphic_pane

0xa194,	// (0x000553ba) cont_note_wait_pane_ParamLimits

0xa194,	// (0x000553ba) cont_note_wait_pane

0xa194,	// (0x000553ba) cont_note_image_pane_ParamLimits

0xa194,	// (0x000553ba) cont_note_image_pane

0xcd8a,	// (0x00057fb0) popup_note2_window_g1_ParamLimits

0xcd8a,	// (0x00057fb0) popup_note2_window_g1

0xcdbb,	// (0x00057fe1) popup_note2_window_t1_ParamLimits

0xcdbb,	// (0x00057fe1) popup_note2_window_t1

0xce00,	// (0x00058026) popup_note2_window_t2_ParamLimits

0xce00,	// (0x00058026) popup_note2_window_t2

0xce45,	// (0x0005806b) popup_note2_window_t3_ParamLimits

0xce45,	// (0x0005806b) popup_note2_window_t3

0xce8a,	// (0x000580b0) popup_note2_window_t4_ParamLimits

0xce8a,	// (0x000580b0) popup_note2_window_t4

0x7add,	// (0x00052d03) popup_note2_window_t5_ParamLimits

0x7add,	// (0x00052d03) popup_note2_window_t5

0x0004,

0xfc71,	// (0x0005ae97) popup_note2_window_t_ParamLimits

0xfc71,	// (0x0005ae97) popup_note2_window_t

0xceb9,	// (0x000580df) popup_note2_image_window_g1_ParamLimits

0xceb9,	// (0x000580df) popup_note2_image_window_g1

0xcec5,	// (0x000580eb) popup_note2_image_window_g2_ParamLimits

0xcec5,	// (0x000580eb) popup_note2_image_window_g2

0x0001,

0xfc7c,	// (0x0005aea2) popup_note2_image_window_g_ParamLimits

0xfc7c,	// (0x0005aea2) popup_note2_image_window_g

0xced7,	// (0x000580fd) popup_note2_image_window_t1_ParamLimits

0xced7,	// (0x000580fd) popup_note2_image_window_t1

0xceef,	// (0x00058115) popup_note2_image_window_t2_ParamLimits

0xceef,	// (0x00058115) popup_note2_image_window_t2

0xcf07,	// (0x0005812d) popup_note2_image_window_t3_ParamLimits

0xcf07,	// (0x0005812d) popup_note2_image_window_t3

0x0002,

0xfc81,	// (0x0005aea7) popup_note2_image_window_t_ParamLimits

0xfc81,	// (0x0005aea7) popup_note2_image_window_t

0xa1a2,	// (0x000553c8) popup_note2_wait_window_g1_ParamLimits

0xa1a2,	// (0x000553c8) popup_note2_wait_window_g1

0xcf23,	// (0x00058149) popup_note2_wait_window_g2_ParamLimits

0xcf23,	// (0x00058149) popup_note2_wait_window_g2

0xa1ba,	// (0x000553e0) popup_note2_wait_window_g3_ParamLimits

0xa1ba,	// (0x000553e0) popup_note2_wait_window_g3

0x0002,

0xfc88,	// (0x0005aeae) popup_note2_wait_window_g_ParamLimits

0xfc88,	// (0x0005aeae) popup_note2_wait_window_g

0xcf2f,	// (0x00058155) popup_note2_wait_window_t1_ParamLimits

0xcf2f,	// (0x00058155) popup_note2_wait_window_t1

0xcf4d,	// (0x00058173) popup_note2_wait_window_t2_ParamLimits

0xcf4d,	// (0x00058173) popup_note2_wait_window_t2

0xcf6b,	// (0x00058191) popup_note2_wait_window_t3_ParamLimits

0xcf6b,	// (0x00058191) popup_note2_wait_window_t3

0xcf7d,	// (0x000581a3) popup_note2_wait_window_t4_ParamLimits

0xcf7d,	// (0x000581a3) popup_note2_wait_window_t4

0x0003,

0xfc8f,	// (0x0005aeb5) popup_note2_wait_window_t_ParamLimits

0xfc8f,	// (0x0005aeb5) popup_note2_wait_window_t

0xcf8f,	// (0x000581b5) wait_bar2_pane_ParamLimits

0xcf8f,	// (0x000581b5) wait_bar2_pane

0xcfa7,	// (0x000581cd) popup_snote2_single_text_window_g1_ParamLimits

0xcfa7,	// (0x000581cd) popup_snote2_single_text_window_g1

0xcfcf,	// (0x000581f5) popup_snote2_single_text_window_t1_ParamLimits

0xcfcf,	// (0x000581f5) popup_snote2_single_text_window_t1

0xd01b,	// (0x00058241) popup_snote2_single_text_window_t2_ParamLimits

0xd01b,	// (0x00058241) popup_snote2_single_text_window_t2

0xd067,	// (0x0005828d) popup_snote2_single_text_window_t3_ParamLimits

0xd067,	// (0x0005828d) popup_snote2_single_text_window_t3

0xd0a8,	// (0x000582ce) popup_snote2_single_text_window_t4_ParamLimits

0xd0a8,	// (0x000582ce) popup_snote2_single_text_window_t4

0xd0de,	// (0x00058304) popup_snote2_single_text_window_t5_ParamLimits

0xd0de,	// (0x00058304) popup_snote2_single_text_window_t5

0x0004,

0xfc98,	// (0x0005aebe) popup_snote2_single_text_window_t_ParamLimits

0xfc98,	// (0x0005aebe) popup_snote2_single_text_window_t

0xd109,	// (0x0005832f) popup_snote2_single_graphic_window_g1_ParamLimits

0xd109,	// (0x0005832f) popup_snote2_single_graphic_window_g1

0xd131,	// (0x00058357) popup_snote2_single_graphic_window_g2_ParamLimits

0xd131,	// (0x00058357) popup_snote2_single_graphic_window_g2

0x0001,

0xfca3,	// (0x0005aec9) popup_snote2_single_graphic_window_g_ParamLimits

0xfca3,	// (0x0005aec9) popup_snote2_single_graphic_window_g

0xd159,	// (0x0005837f) popup_snote2_single_graphic_window_t1_ParamLimits

0xd159,	// (0x0005837f) popup_snote2_single_graphic_window_t1

0xd1a5,	// (0x000583cb) popup_snote2_single_graphic_window_t2_ParamLimits

0xd1a5,	// (0x000583cb) popup_snote2_single_graphic_window_t2

0xd067,	// (0x0005828d) popup_snote2_single_graphic_window_t3_ParamLimits

0xd067,	// (0x0005828d) popup_snote2_single_graphic_window_t3

0xd0a8,	// (0x000582ce) popup_snote2_single_graphic_window_t4_ParamLimits

0xd0a8,	// (0x000582ce) popup_snote2_single_graphic_window_t4

0xd0de,	// (0x00058304) popup_snote2_single_graphic_window_t5_ParamLimits

0xd0de,	// (0x00058304) popup_snote2_single_graphic_window_t5

0x0004,

0xfca8,	// (0x0005aece) popup_snote2_single_graphic_window_t_ParamLimits

0xfca8,	// (0x0005aece) popup_snote2_single_graphic_window_t

0xbbcd,	// (0x00056df3) clock_nsta_pane_cp2_t1

0xbbcd,	// (0x00056df3) clock_nsta_pane_cp2_t2

0x0001,

0xfabc,	// (0x0005ace2) clock_nsta_pane_cp2_t

0x52cd,	// (0x000504f3) form_field_data_wide_pane_g1_ParamLimits

0x85f5,	// (0x0005381b) form_field_data_wide_pane_g2_ParamLimits

0x85f5,	// (0x0005381b) form_field_data_wide_pane_g2

0x8668,	// (0x0005388e) form_field_data_wide_pane_g3_ParamLimits

0x8668,	// (0x0005388e) form_field_data_wide_pane_g3

0x0002,

0xf686,	// (0x0005a8ac) form_field_data_wide_pane_g_ParamLimits

0xf686,	// (0x0005a8ac) form_field_data_wide_pane_g

0xbab7,	// (0x00056cdd) grid_touch_3_pane_ParamLimits

0xbab7,	// (0x00056cdd) grid_touch_3_pane

0xd1f1,	// (0x00058417) cell_touch_3_pane_ParamLimits

0xd1f1,	// (0x00058417) cell_touch_3_pane

0xc126,	// (0x0005734c) cell_touch_3_pane_g1

0xc126,	// (0x0005734c) cell_touch_3_pane_g2

0x0001,

0xfb41,	// (0x0005ad67) cell_touch_3_pane_g

0x7b0f,	// (0x00052d35) cont_query_data_pane

0x7b17,	// (0x00052d3d) cont_query_data_pane_cp1

0xd21f,	// (0x00058445) button_value_adjust_pane_cp7

0xd227,	// (0x0005844d) query_popup_pane_cp3

0x8dbf,	// (0x00053fe5) bg_popup_sub_pane_cp22_ParamLimits

0x5691,	// (0x000508b7) navi_navi_volume_pane_cp2

0x56ac,	// (0x000508d2) popup_side_volume_key_window_g2

0x56bb,	// (0x000508e1) popup_side_volume_key_window_g3

0x0002,

0xf71c,	// (0x0005a942) popup_side_volume_key_window_g

0x56d8,	// (0x000508fe) popup_side_volume_key_window_t2

0x0001,

0xf723,	// (0x0005a949) popup_side_volume_key_window_t

0x9082,	// (0x000542a8) popup_side_volume_key_window_ParamLimits

0x4f0b,	// (0x00050131) list_double_graphic_pane_g4_ParamLimits

0x4f0b,	// (0x00050131) list_double_graphic_pane_g4

0x7e39,	// (0x0005305f) list_single_2heading_msg_pane_ParamLimits

0x7e39,	// (0x0005305f) list_single_2heading_msg_pane

0x81be,	// (0x000533e4) list_single_2heading_msg_pane_g1_ParamLimits

0x81be,	// (0x000533e4) list_single_2heading_msg_pane_g1

0x921c,	// (0x00054442) list_single_2heading_msg_pane_g2_ParamLimits

0x921c,	// (0x00054442) list_single_2heading_msg_pane_g2

0x7e77,	// (0x0005309d) list_single_2heading_msg_pane_g3_ParamLimits

0x7e77,	// (0x0005309d) list_single_2heading_msg_pane_g3

0x81ca,	// (0x000533f0) list_single_2heading_msg_pane_g4_ParamLimits

0x81ca,	// (0x000533f0) list_single_2heading_msg_pane_g4

0x0003,

0xfcb3,	// (0x0005aed9) list_single_2heading_msg_pane_g_ParamLimits

0xfcb3,	// (0x0005aed9) list_single_2heading_msg_pane_g

0x81e2,	// (0x00053408) list_single_2heading_msg_pane_t1_ParamLimits

0x81e2,	// (0x00053408) list_single_2heading_msg_pane_t1

0x820a,	// (0x00053430) list_single_2heading_msg_pane_t2_ParamLimits

0x820a,	// (0x00053430) list_single_2heading_msg_pane_t2

0x823e,	// (0x00053464) list_single_2heading_msg_pane_t3_ParamLimits

0x823e,	// (0x00053464) list_single_2heading_msg_pane_t3

0x8277,	// (0x0005349d) list_single_2heading_msg_pane_t4_ParamLimits

0x8277,	// (0x0005349d) list_single_2heading_msg_pane_t4

0x0003,

0xfcbc,	// (0x0005aee2) list_single_2heading_msg_pane_t_ParamLimits

0xfcbc,	// (0x0005aee2) list_single_2heading_msg_pane_t

0x7724,	// (0x0005294a) title_pane_g4_ParamLimits

0x7724,	// (0x0005294a) title_pane_g4

0x54a0,	// (0x000506c6) title_pane_stacon_g3_ParamLimits

0x54a0,	// (0x000506c6) title_pane_stacon_g3

0xcd4d,	// (0x00057f73) list_single_2graphic_im_pane_g4_ParamLimits

0xcd4d,	// (0x00057f73) list_single_2graphic_im_pane_g4

0xabf3,	// (0x00055e19) popup_side_volume_key_window_cp

0xb405,	// (0x0005662b) main_idle_act2_pane_t1

0x60c1,	// (0x000512e7) toolbar_button_pane_g10

0x85b7,	// (0x000537dd) popup_toolbar_window_cp1

0xbbbe,	// (0x00056de4) clock_nsta_pane_cp_t1

0xbbbe,	// (0x00056de4) clock_nsta_pane_cp_t2

0x0001,

0xfab7,	// (0x0005acdd) clock_nsta_pane_cp_t

0x5691,	// (0x000508b7) navi_navi_volume_pane_cp2_ParamLimits

0x56a0,	// (0x000508c6) popup_side_volume_key_window_g1_ParamLimits

0x56ac,	// (0x000508d2) popup_side_volume_key_window_g2_ParamLimits

0x56bb,	// (0x000508e1) popup_side_volume_key_window_g3_ParamLimits

0xf71c,	// (0x0005a942) popup_side_volume_key_window_g_ParamLimits

0x6896,	// (0x00051abc) fep_hwr_aid_pane

0x693d,	// (0x00051b63) bg_fep_hwr_top_pane_g4_ParamLimits

0xc182,	// (0x000573a8) fep_hwr_top_pane_g1_ParamLimits

0xc194,	// (0x000573ba) fep_hwr_top_pane_g2_ParamLimits

0x695d,	// (0x00051b83) fep_hwr_top_pane_g3_ParamLimits

0xfb0c,	// (0x0005ad32) fep_hwr_top_pane_g_ParamLimits

0x6972,	// (0x00051b98) fep_hwr_top_text_pane_ParamLimits

0xa9b6,	// (0x00055bdc) aid_touch_tab_arrow_arrow_2

0xa9bf,	// (0x00055be5) aid_touch_tab_arrow_left_2

0x68aa,	// (0x00051ad0) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x68e1,	// (0x00051b07) fep_hwr_prediction_pane

0xc2f4,	// (0x0005751a) fep_vkb_prediction_pane

0xc3f8,	// (0x0005761e) fep_vkb_side_pane_g3_ParamLimits

0xc3f8,	// (0x0005761e) fep_vkb_side_pane_g3

0x6aed,	// (0x00051d13) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x6b59,	// (0x00051d7f) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x6b66,	// (0x00051d8c) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbbb,	// (0x0005ade1) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x6c95,	// (0x00051ebb) fep_hwr_prediction_pane_g1

0x6c9f,	// (0x00051ec5) fep_hwr_prediction_pane_g2

0x6ca7,	// (0x00051ecd) fep_hwr_prediction_pane_g3

0x6caf,	// (0x00051ed5) fep_hwr_prediction_pane_g4

0x0003,

0xfcc5,	// (0x0005aeeb) fep_hwr_prediction_pane_g

0xd24c,	// (0x00058472) fep_vkb_prediction_pane_g1

0xd256,	// (0x0005847c) fep_vkb_prediction_pane_g2

0xd25e,	// (0x00058484) fep_vkb_prediction_pane_g3

0xd266,	// (0x0005848c) fep_vkb_prediction_pane_g4

0x0003,

0xfcce,	// (0x0005aef4) fep_vkb_prediction_pane_g

0x64a3,	// (0x000516c9) slider_set_pane_g3

0x64b7,	// (0x000516dd) slider_set_pane_g4

0x64cf,	// (0x000516f5) slider_set_pane_g5

0x64a3,	// (0x000516c9) slider_set_pane_g6

0x64e5,	// (0x0005170b) slider_set_pane_g7

0xb069,	// (0x0005628f) slider_form_pane_g3

0xb072,	// (0x00056298) slider_form_pane_g4

0xb07a,	// (0x000562a0) slider_form_pane_g5

0xb069,	// (0x0005628f) slider_form_pane_g6

0xb082,	// (0x000562a8) slider_form_pane_g7

0xb6af,	// (0x000568d5) slider_set_pane_vc_g3

0xb6b8,	// (0x000568de) slider_set_pane_vc_g4

0xb6c1,	// (0x000568e7) slider_set_pane_vc_g5

0xb6af,	// (0x000568d5) slider_set_pane_vc_g6

0xb6ca,	// (0x000568f0) slider_set_pane_vc_g7

0xb88a,	// (0x00056ab0) slider_form_pane_vc_g1

0xb893,	// (0x00056ab9) slider_form_pane_vc_g2

0xb89c,	// (0x00056ac2) slider_form_pane_vc_g3

0xb88a,	// (0x00056ab0) slider_form_pane_vc_g4

0xb8a5,	// (0x00056acb) slider_form_pane_vc_g5

0x0004,

0xfa89,	// (0x0005acaf) slider_form_pane_vc_g

0x4a94,	// (0x0004fcba) main_idle_act3_pane

0xd26e,	// (0x00058494) ai3_links_pane

0xd277,	// (0x0005849d) popup_ai3_data_window_ParamLimits

0xd277,	// (0x0005849d) popup_ai3_data_window

0x76dc,	// (0x00052902) grid_ai3_links_pane

0xd291,	// (0x000584b7) cell_ai3_links_pane_ParamLimits

0xd291,	// (0x000584b7) cell_ai3_links_pane

0xd2a9,	// (0x000584cf) bg_popup_sub_pane_cp11

0xd2b6,	// (0x000584dc) cell_ai3_links_pane_g1

0x76dc,	// (0x00052902) bg_popup_sub_pane_cp12

0xd2db,	// (0x00058501) heading_ai3_data_pane

0xd2e3,	// (0x00058509) list_ai3_gene_pane

0xd2ef,	// (0x00058515) popup_ai3_data_window_g1

0xd2f7,	// (0x0005851d) heading_ai3_data_pane_g1

0xd2ff,	// (0x00058525) heading_ai3_data_pane_t1

0xd30d,	// (0x00058533) list_double_ai3_gene_pane_ParamLimits

0xd30d,	// (0x00058533) list_double_ai3_gene_pane

0xd31a,	// (0x00058540) list_single_ai3_gene_pane_ParamLimits

0xd31a,	// (0x00058540) list_single_ai3_gene_pane

0xc0eb,	// (0x00057311) list_highlight_pane_cp7_ParamLimits

0xc0eb,	// (0x00057311) list_highlight_pane_cp7

0xd327,	// (0x0005854d) list_single_a13_gene_pane_t1_ParamLimits

0xd327,	// (0x0005854d) list_single_a13_gene_pane_t1

0xd33e,	// (0x00058564) list_single_ai3_gene_pane_g1

0xd347,	// (0x0005856d) list_single_ai3_gene_pane_g2

0x0001,

0xfcd7,	// (0x0005aefd) list_single_ai3_gene_pane_g

0xd34f,	// (0x00058575) list_double_ai3_gene_pane_g1_ParamLimits

0xd34f,	// (0x00058575) list_double_ai3_gene_pane_g1

0xd35b,	// (0x00058581) list_double_ai3_gene_pane_t1_ParamLimits

0xd35b,	// (0x00058581) list_double_ai3_gene_pane_t1

0xd377,	// (0x0005859d) list_double_ai3_gene_pane_t2_ParamLimits

0xd377,	// (0x0005859d) list_double_ai3_gene_pane_t2

0xd38d,	// (0x000585b3) list_double_ai3_gene_pane_t3_ParamLimits

0xd38d,	// (0x000585b3) list_double_ai3_gene_pane_t3

0x0002,

0xfcdc,	// (0x0005af02) list_double_ai3_gene_pane_t_ParamLimits

0xfcdc,	// (0x0005af02) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x81b4,	// (0x000533da) aid_size_min_col_2

0xd238,	// (0x0005845e) aid_size_min_msg_ParamLimits

0xd238,	// (0x0005845e) aid_size_min_msg

0xc4f8,	// (0x0005771e) fep_vkb_top_text_pane_g2_ParamLimits

0xc4f8,	// (0x0005771e) fep_vkb_top_text_pane_g2

0x0001,

0xfb3c,	// (0x0005ad62) fep_vkb_top_text_pane_g_ParamLimits

0xfb3c,	// (0x0005ad62) fep_vkb_top_text_pane_g

0x4a94,	// (0x0004fcba) main_hc_apps_shell_pane

0xd3aa,	// (0x000585d0) grid_hc_apps_pane_ParamLimits

0xd3aa,	// (0x000585d0) grid_hc_apps_pane

0xd3b9,	// (0x000585df) list_hc_apps_pane

0xd3c1,	// (0x000585e7) scroll_pane_cp37_ParamLimits

0xd3c1,	// (0x000585e7) scroll_pane_cp37

0xd3cd,	// (0x000585f3) cell_hc_apps_pane_ParamLimits

0xd3cd,	// (0x000585f3) cell_hc_apps_pane

0xd47b,	// (0x000586a1) cell_hc_apps_pane_g1_ParamLimits

0xd47b,	// (0x000586a1) cell_hc_apps_pane_g1

0xd4ac,	// (0x000586d2) cell_hc_apps_pane_g2_ParamLimits

0xd4ac,	// (0x000586d2) cell_hc_apps_pane_g2

0xd4c8,	// (0x000586ee) cell_hc_apps_pane_g3_ParamLimits

0xd4c8,	// (0x000586ee) cell_hc_apps_pane_g3

0x0002,

0xfce3,	// (0x0005af09) cell_hc_apps_pane_g_ParamLimits

0xfce3,	// (0x0005af09) cell_hc_apps_pane_g

0xd4ea,	// (0x00058710) cell_hc_apps_pane_t1_ParamLimits

0xd4ea,	// (0x00058710) cell_hc_apps_pane_t1

0x7a59,	// (0x00052c7f) grid_highlight_pane_cp10_ParamLimits

0x7a59,	// (0x00052c7f) grid_highlight_pane_cp10

0xd52a,	// (0x00058750) list_single_hc_apps_pane_ParamLimits

0xd52a,	// (0x00058750) list_single_hc_apps_pane

0xd586,	// (0x000587ac) list_single_hc_apps_pane_g1

0x829c,	// (0x000534c2) list_single_hc_apps_pane_g2

0x0001,

0xfcea,	// (0x0005af10) list_single_hc_apps_pane_g

0x82b5,	// (0x000534db) list_single_hc_apps_pane_g2_copy1

0x82d1,	// (0x000534f7) list_single_hc_apps_pane_t1

0x77d0,	// (0x000529f6) bg_set_opt_pane_cp_ParamLimits

0x4ceb,	// (0x0004ff11) setting_slider_pane_t1_ParamLimits

0x4d04,	// (0x0004ff2a) setting_slider_pane_t2_ParamLimits

0x4d1e,	// (0x0004ff44) setting_slider_pane_t3_ParamLimits

0xf564,	// (0x0005a78a) setting_slider_pane_t_ParamLimits

0x4d36,	// (0x0004ff5c) slider_set_pane_ParamLimits

0x59a8,	// (0x00050bce) control_pane_g5_ParamLimits

0x59a8,	// (0x00050bce) control_pane_g5

0xaeb8,	// (0x000560de) slider_set_pane_g1_ParamLimits

0x6497,	// (0x000516bd) slider_set_pane_g2_ParamLimits

0x64a3,	// (0x000516c9) slider_set_pane_g3_ParamLimits

0x64b7,	// (0x000516dd) slider_set_pane_g4_ParamLimits

0x64cf,	// (0x000516f5) slider_set_pane_g5_ParamLimits

0x64a3,	// (0x000516c9) slider_set_pane_g6_ParamLimits

0x64e5,	// (0x0005170b) slider_set_pane_g7_ParamLimits

0xf96f,	// (0x0005ab95) slider_set_pane_g_ParamLimits

0x9163,	// (0x00054389) navi_icon_text_pane_ParamLimits

0x965b,	// (0x00054881) aid_fill_nsta_2_ParamLimits

0x969a,	// (0x000548c0) aid_touch_tab_arrow_left_ParamLimits

0x96a6,	// (0x000548cc) aid_touch_tab_arrow_right_ParamLimits

0x9712,	// (0x00054938) clock_nsta_pane_ParamLimits

0xa998,	// (0x00055bbe) navi_icon_pane_g1_ParamLimits

0xa9a4,	// (0x00055bca) navi_text_pane_t1_ParamLimits

0xbcca,	// (0x00056ef0) navi_icon_text_pane_g1_ParamLimits

0xbcd6,	// (0x00056efc) navi_icon_text_pane_t1_ParamLimits

0xd586,	// (0x000587ac) list_single_hc_apps_pane_g1_ParamLimits

0x829c,	// (0x000534c2) list_single_hc_apps_pane_g2_ParamLimits

0xfcea,	// (0x0005af10) list_single_hc_apps_pane_g_ParamLimits

0x82b5,	// (0x000534db) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x82d1,	// (0x000534f7) list_single_hc_apps_pane_t1_ParamLimits

0x4bff,	// (0x0004fe25) popup_toolbar2_fixed_window_ParamLimits

0x4bff,	// (0x0004fe25) popup_toolbar2_fixed_window

0x5fa3,	// (0x000511c9) popup_toolbar2_float_window

0x76dc,	// (0x00052902) bg_popup_sub_pane_cp27

0xd59f,	// (0x000587c5) grid_toolbar2_float_pane

0x76dc,	// (0x00052902) bg_popup_sub_pane_cp26

0xd59f,	// (0x000587c5) grid_toolbar2_fixed_pane

0xd5a7,	// (0x000587cd) cell_toolbar2_fixed_pane_ParamLimits

0xd5a7,	// (0x000587cd) cell_toolbar2_fixed_pane

0xd5b7,	// (0x000587dd) cell_toolbar2_fixed_pane_g1

0xd5c0,	// (0x000587e6) toolbar2_fixed_button_pane

0x9b1b,	// (0x00054d41) toolbar2_fixed_button_pane_g1

0x9b2b,	// (0x00054d51) toolbar2_fixed_button_pane_g2

0x9b23,	// (0x00054d49) toolbar2_fixed_button_pane_g3

0x9b3b,	// (0x00054d61) toolbar2_fixed_button_pane_g4

0x9b33,	// (0x00054d59) toolbar2_fixed_button_pane_g5

0x9b43,	// (0x00054d69) toolbar2_fixed_button_pane_g6

0x9b4b,	// (0x00054d71) toolbar2_fixed_button_pane_g7

0x9b5b,	// (0x00054d81) toolbar2_fixed_button_pane_g8

0x9b53,	// (0x00054d79) toolbar2_fixed_button_pane_g9

0x0008,

0xf871,	// (0x0005aa97) toolbar2_fixed_button_pane_g

0xd5c8,	// (0x000587ee) cell_toolbar2_float_pane_ParamLimits

0xd5c8,	// (0x000587ee) cell_toolbar2_float_pane

0xd5d9,	// (0x000587ff) cell_toolbar2_float_pane_g1

0xd5c0,	// (0x000587e6) toolbar2_fixed_button_pane_cp

0xc254,	// (0x0005747a) fep_vkb_accented_list_pane_ParamLimits

0xc254,	// (0x0005747a) fep_vkb_accented_list_pane

0x6acd,	// (0x00051cf3) bg_popup_fep_shadow_pane_g9

0x92e3,	// (0x00054509) bg_popup_fep_shadow_pane_cp3

0x87a5,	// (0x000539cb) list_accented_list_pane

0xd5e2,	// (0x00058808) list_single_accented_list_pane_ParamLimits

0xd5e2,	// (0x00058808) list_single_accented_list_pane

0x92e3,	// (0x00054509) list_highlight_pane_cp10

0xd5f3,	// (0x00058819) list_single_accented_list_pane_t1

0x5ef3,	// (0x00051119) popup_slider_window_ParamLimits

0x5ef3,	// (0x00051119) popup_slider_window

0xd22f,	// (0x00058455) aid_indentation_list_msg

0xd6ad,	// (0x000588d3) bg_popup_window_pane_cp19

0xd717,	// (0x0005893d) popup_slider_window_g1

0xd733,	// (0x00058959) popup_slider_window_g2

0xd74f,	// (0x00058975) popup_slider_window_g3

0x0005,

0xfcef,	// (0x0005af15) popup_slider_window_g

0xd7ab,	// (0x000589d1) popup_slider_window_t1

0xd81f,	// (0x00058a45) small_volume_slider_vertical_pane

0xc126,	// (0x0005734c) small_volume_slider_vertical_pane_g1

0xc126,	// (0x0005734c) small_volume_slider_vertical_pane_g2

0xd83b,	// (0x00058a61) small_volume_slider_vertical_pane_g3

0x0002,

0xfd01,	// (0x0005af27) small_volume_slider_vertical_pane_g

0x49b7,	// (0x0004fbdd) area_side_right_pane_ParamLimits

0x49b7,	// (0x0004fbdd) area_side_right_pane

0x6cb7,	// (0x00051edd) aid_size_side_button_ParamLimits

0x6cb7,	// (0x00051edd) aid_size_side_button

0x6ccb,	// (0x00051ef1) grid_sctrl_middle_pane_ParamLimits

0x6ccb,	// (0x00051ef1) grid_sctrl_middle_pane

0x6cea,	// (0x00051f10) sctrl_sk_bottom_pane

0x6cfb,	// (0x00051f21) sctrl_sk_top_pane

0x6d0d,	// (0x00051f33) aid_touch_sctrl_top

0x6d1a,	// (0x00051f40) bg_sctrl_sk_pane_ParamLimits

0x6d1a,	// (0x00051f40) bg_sctrl_sk_pane

0x6d28,	// (0x00051f4e) sctrl_sk_top_pane_g1

0x6d35,	// (0x00051f5b) sctrl_sk_top_pane_t1

0x6d0d,	// (0x00051f33) aid_touch_sctrl_bottom

0x6d1a,	// (0x00051f40) bg_sctrl_sk_pane_cp_ParamLimits

0x6d1a,	// (0x00051f40) bg_sctrl_sk_pane_cp

0x6d50,	// (0x00051f76) sctrl_sk_bottom_pane_g1

0x6d35,	// (0x00051f5b) sctrl_sk_bottom_pane_t1

0x6d59,	// (0x00051f7f) cell_sctrl_middle_pane_ParamLimits

0x6d59,	// (0x00051f7f) cell_sctrl_middle_pane

0x6d74,	// (0x00051f9a) aid_touch_sctrl_middle_ParamLimits

0x6d74,	// (0x00051f9a) aid_touch_sctrl_middle

0x6d86,	// (0x00051fac) bg_sctrl_middle_pane_ParamLimits

0x6d86,	// (0x00051fac) bg_sctrl_middle_pane

0x6aed,	// (0x00051d13) cell_sctrl_middle_pane_g1_ParamLimits

0x6aed,	// (0x00051d13) cell_sctrl_middle_pane_g1

0x6d94,	// (0x00051fba) cell_sctrl_middle_pane_g2_ParamLimits

0x6d94,	// (0x00051fba) cell_sctrl_middle_pane_g2

0x0001,

0xfd0d,	// (0x0005af33) cell_sctrl_middle_pane_g_ParamLimits

0xfd0d,	// (0x0005af33) cell_sctrl_middle_pane_g

0x9b1b,	// (0x00054d41) bg_sctrl_middle_pane_g1

0x9b23,	// (0x00054d49) bg_sctrl_middle_pane_g2

0x9b2b,	// (0x00054d51) bg_sctrl_middle_pane_g3

0x9b33,	// (0x00054d59) bg_sctrl_middle_pane_g4

0x9b3b,	// (0x00054d61) bg_sctrl_middle_pane_g5

0x9b43,	// (0x00054d69) bg_sctrl_middle_pane_g6

0x9b4b,	// (0x00054d71) bg_sctrl_middle_pane_g7

0x9b53,	// (0x00054d79) bg_sctrl_middle_pane_g8

0x0007,

0xfd12,	// (0x0005af38) bg_sctrl_middle_pane_g

0x9b5b,	// (0x00054d81) bg_sctrl_middle_pane_g8_copy1

0x9b1b,	// (0x00054d41) bg_sctrl_sk_pane_g1

0x9b2b,	// (0x00054d51) bg_sctrl_sk_pane_g2

0x9b23,	// (0x00054d49) bg_sctrl_sk_pane_g3

0x0008,

0xf871,	// (0x0005aa97) bg_sctrl_sk_pane_g

0x857d,	// (0x000537a3) aid_size_touch_scroll_bar

0x9b3b,	// (0x00054d61) bg_sctrl_sk_pane_g4

0x9b33,	// (0x00054d59) bg_sctrl_sk_pane_g5

0x9b43,	// (0x00054d69) bg_sctrl_sk_pane_g6

0x9b4b,	// (0x00054d71) bg_sctrl_sk_pane_g7

0x9b5b,	// (0x00054d81) bg_sctrl_sk_pane_g8

0x9b53,	// (0x00054d79) bg_sctrl_sk_pane_g9

0x5b5e,	// (0x00050d84) popup_fep_china_hwr2_fs_candidate_window

0x5b68,	// (0x00050d8e) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x5b68,	// (0x00050d8e) popup_fep_china_hwr2_fs_control_window

0x6aed,	// (0x00051d13) sctrl_sk_top_pane_g2

0x0001,

0xfd08,	// (0x0005af2e) sctrl_sk_top_pane_g

0xd844,	// (0x00058a6a) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd844,	// (0x00058a6a) aid_fep_china_hwr2_fs_cell

0xd856,	// (0x00058a7c) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd856,	// (0x00058a7c) bg_popup_fep_shadow_pane_cp4

0xd86d,	// (0x00058a93) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd86d,	// (0x00058a93) bg_popup_fep_shadow_pane_cp5

0xd87f,	// (0x00058aa5) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd87f,	// (0x00058aa5) popup_fep_china_hwr2_fs_control_bar_grid

0xd88f,	// (0x00058ab5) popup_fep_china_hwr2_fs_control_funtion_grid

0xd897,	// (0x00058abd) aid_fep_china_hwr2_fs_candi_cell

0x76dc,	// (0x00052902) bg_popup_fep_shadow_pane_cp6

0xd8a1,	// (0x00058ac7) popup_fep_china_hwr2_fs_candidate_grid

0xd8ab,	// (0x00058ad1) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd8ab,	// (0x00058ad1) cell_fep_china_hwr2_fs_funtion_grid

0xc126,	// (0x0005734c) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd8c3,	// (0x00058ae9) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd8c3,	// (0x00058ae9) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd8f2,	// (0x00058b18) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd8f2,	// (0x00058b18) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd23,	// (0x0005af49) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd23,	// (0x0005af49) cell_fep_china_hwr2_fs_funtion_grid_g

0xd908,	// (0x00058b2e) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd908,	// (0x00058b2e) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd91d,	// (0x00058b43) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd91d,	// (0x00058b43) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd28,	// (0x0005af4e) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd28,	// (0x0005af4e) cell_fep_china_hwr2_fs_funtion_grid_t

0xd939,	// (0x00058b5f) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd941,	// (0x00058b67) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd949,	// (0x00058b6f) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd2d,	// (0x0005af53) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd951,	// (0x00058b77) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd951,	// (0x00058b77) cell_fep_china_hwr2_fs_candidate_grid

0xd96a,	// (0x00058b90) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd972,	// (0x00058b98) popup_fep_china_hwr2_fs_candidate_grid_g21

0xc126,	// (0x0005734c) cell_fep_china_hwr2_fs_candidate_grid_g1

0xc126,	// (0x0005734c) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb41,	// (0x0005ad67) cell_fep_china_hwr2_fs_candidate_grid_g

0xd97a,	// (0x00058ba0) cell_fep_china_hwr2_fs_candidate_grid_t1

0x971f,	// (0x00054945) clock_nsta_pane_cp_24_ParamLimits

0x971f,	// (0x00054945) clock_nsta_pane_cp_24

0x979d,	// (0x000549c3) indicator_nsta_pane_cp_24_ParamLimits

0x979d,	// (0x000549c3) indicator_nsta_pane_cp_24

0xa814,	// (0x00055a3a) heading_pane_g1

0x0001,

0xf8d6,	// (0x0005aafc) heading_pane_g

0xb20c,	// (0x00056432) grid_sct_catagory_button_pane

0xb23c,	// (0x00056462) scroll_pane_cp5_ParamLimits

0xbd18,	// (0x00056f3e) button_value_adjust_pane_cp5_ParamLimits

0xbd18,	// (0x00056f3e) button_value_adjust_pane_cp5

0xbdf7,	// (0x0005701d) form2_midp_time_pane_ParamLimits

0xd988,	// (0x00058bae) cell_sct_catagory_button_pane_ParamLimits

0xd988,	// (0x00058bae) cell_sct_catagory_button_pane

0xc0eb,	// (0x00057311) bg_button_pane_cp01_ParamLimits

0xc0eb,	// (0x00057311) bg_button_pane_cp01

0xc126,	// (0x0005734c) cell_sct_catagory_button_pane_g1

0x5f32,	// (0x00051158) popup_tb_extension_window

0xd99a,	// (0x00058bc0) aid_size_cell_ext_ParamLimits

0xd99a,	// (0x00058bc0) aid_size_cell_ext

0x7a59,	// (0x00052c7f) bg_tb_trans_pane_cp1_ParamLimits

0x7a59,	// (0x00052c7f) bg_tb_trans_pane_cp1

0xd9ba,	// (0x00058be0) grid_tb_ext_pane_ParamLimits

0xd9ba,	// (0x00058be0) grid_tb_ext_pane

0xd9e8,	// (0x00058c0e) cell_tb_ext_pane_ParamLimits

0xd9e8,	// (0x00058c0e) cell_tb_ext_pane

0xd9ff,	// (0x00058c25) cell_tb_ext_pane_g1_ParamLimits

0xd9ff,	// (0x00058c25) cell_tb_ext_pane_g1

0xda1c,	// (0x00058c42) cell_tb_ext_pane_t1

0x7a59,	// (0x00052c7f) list_highlight_pane_cp11_ParamLimits

0x7a59,	// (0x00052c7f) list_highlight_pane_cp11

0x4c1e,	// (0x0004fe44) popup_uni_indicator_window_ParamLimits

0x4c1e,	// (0x0004fe44) popup_uni_indicator_window

0x865a,	// (0x00053880) bg_popup_sub_pane_cp14

0xda37,	// (0x00058c5d) list_uniindi_pane

0xda43,	// (0x00058c69) uniindi_top_pane

0x7a59,	// (0x00052c7f) bg_uniindi_top_pane

0xda62,	// (0x00058c88) uniindi_top_pane_g1

0xda78,	// (0x00058c9e) uniindi_top_pane_g2

0x0003,

0xfd34,	// (0x0005af5a) uniindi_top_pane_g

0xdaa2,	// (0x00058cc8) uniindi_top_pane_t1

0xdacc,	// (0x00058cf2) list_single_uniindi_pane_ParamLimits

0xdacc,	// (0x00058cf2) list_single_uniindi_pane

0xc126,	// (0x0005734c) bg_uniindi_top_pane_g1

0xdadf,	// (0x00058d05) list_single_uniindi_pane_g1

0xdaf2,	// (0x00058d18) list_single_uniindi_pane_t1

0x4a94,	// (0x0004fcba) control_bg_pane

0xdb17,	// (0x00058d3d) bg_sctrl_sk_pane_cp1

0xdb20,	// (0x00058d46) bg_sctrl_sk_pane_cp2

0xdb29,	// (0x00058d4f) control_bg_pane_g1

0xdb32,	// (0x00058d58) control_bg_pane_g2

0x0001,

0xfd3d,	// (0x0005af63) control_bg_pane_g

0xbb61,	// (0x00056d87) cell_indicator_nsta_pane_g1_ParamLimits

0xbb6f,	// (0x00056d95) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa5,	// (0x0005accb) cell_indicator_nsta_pane_g_ParamLimits

0x7f91,	// (0x000531b7) form2_midp_time_pane_t1_ParamLimits

0x5abe,	// (0x00050ce4) main_idle_act4_pane_ParamLimits

0x5abe,	// (0x00050ce4) main_idle_act4_pane

0x5f32,	// (0x00051158) popup_tb_extension_window_ParamLimits

0xd9d8,	// (0x00058bfe) tb_ext_find_pane_ParamLimits

0xd9d8,	// (0x00058bfe) tb_ext_find_pane

0xdb3b,	// (0x00058d61) ai_gene_pane_1_cp1

0x941c,	// (0x00054642) ai_gene_pane_2_cp1

0xdb43,	// (0x00058d69) list_single_idle_plugin_calendar_pane

0xdb4c,	// (0x00058d72) list_single_idle_plugin_notification_pane

0xdb55,	// (0x00058d7b) list_single_idle_plugin_player_pane

0xdb5e,	// (0x00058d84) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdb5e,	// (0x00058d84) list_single_idle_plugin_shortcut_pane

0xdb80,	// (0x00058da6) main_idle_act4_pane_t1

0xdb92,	// (0x00058db8) main_idle_act4_pane_t2

0x0001,

0xfd42,	// (0x0005af68) main_idle_act4_pane_t

0xdba4,	// (0x00058dca) middle_sk_idle_act4_pane_ParamLimits

0xdba4,	// (0x00058dca) middle_sk_idle_act4_pane

0xdbba,	// (0x00058de0) popup_clock_digital_analogue_window_cp2

0xdbd4,	// (0x00058dfa) shortcut_wheel_idle_act4_pane_ParamLimits

0xdbd4,	// (0x00058dfa) shortcut_wheel_idle_act4_pane

0xc126,	// (0x0005734c) shortcut_wheel_idle_act4_pane_g1

0xc126,	// (0x0005734c) shortcut_wheel_idle_act4_pane_g2

0xc126,	// (0x0005734c) shortcut_wheel_idle_act4_pane_g3

0xc126,	// (0x0005734c) shortcut_wheel_idle_act4_pane_g4

0xc126,	// (0x0005734c) shortcut_wheel_idle_act4_pane_g5

0xdbe8,	// (0x00058e0e) shortcut_wheel_idle_act4_pane_g6

0xdbf0,	// (0x00058e16) shortcut_wheel_idle_act4_pane_g7

0xdbf8,	// (0x00058e1e) shortcut_wheel_idle_act4_pane_g8

0xdc00,	// (0x00058e26) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd47,	// (0x0005af6d) shortcut_wheel_idle_act4_pane_g

0xc3a4,	// (0x000575ca) middle_sk_idle_act4_pane_g1_ParamLimits

0xc3a4,	// (0x000575ca) middle_sk_idle_act4_pane_g1

0xdc64,	// (0x00058e8a) middle_sk_idle_act4_pane_g2_ParamLimits

0xdc64,	// (0x00058e8a) middle_sk_idle_act4_pane_g2

0x0001,

0xfd6a,	// (0x0005af90) middle_sk_idle_act4_pane_g_ParamLimits

0xfd6a,	// (0x0005af90) middle_sk_idle_act4_pane_g

0xdc70,	// (0x00058e96) middle_sk_idle_act4_pane_t1_ParamLimits

0xdc70,	// (0x00058e96) middle_sk_idle_act4_pane_t1

0xdc8d,	// (0x00058eb3) grid_ai_shortcut_pane_ParamLimits

0xdc8d,	// (0x00058eb3) grid_ai_shortcut_pane

0xdca6,	// (0x00058ecc) list_highlight_pane_cp16_ParamLimits

0xdca6,	// (0x00058ecc) list_highlight_pane_cp16

0xdcb3,	// (0x00058ed9) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdcb3,	// (0x00058ed9) list_single_idle_plugin_shortcut_pane_g1

0xdcbf,	// (0x00058ee5) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdcbf,	// (0x00058ee5) list_single_idle_plugin_shortcut_pane_g2

0xdcd7,	// (0x00058efd) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdcd7,	// (0x00058efd) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd6f,	// (0x0005af95) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd6f,	// (0x0005af95) list_single_idle_plugin_shortcut_pane_g

0xdcea,	// (0x00058f10) cell_ai_shortcut_pane_ParamLimits

0xdcea,	// (0x00058f10) cell_ai_shortcut_pane

0xdd0e,	// (0x00058f34) cell_ai_shortcut_pane_g1_ParamLimits

0xdd0e,	// (0x00058f34) cell_ai_shortcut_pane_g1

0xdb3b,	// (0x00058d61) ai_gene_pane_1_cp2

0xdd30,	// (0x00058f56) ai_gene_pane_2_cp2

0xdd38,	// (0x00058f5e) list_highlight_pane_cp15

0xdd41,	// (0x00058f67) list_single_idle_plugin_calendar_pane_g1

0xdd38,	// (0x00058f5e) list_highlight_pane_cp17

0xdd49,	// (0x00058f6f) list_single_idle_plugin_calendar_pane_g1_copy1

0xdd51,	// (0x00058f77) list_single_idle_plugin_player_pane_g1

0xb4a7,	// (0x000566cd) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd76,	// (0x0005af9c) list_single_idle_plugin_player_pane_g

0xdd59,	// (0x00058f7f) list_single_idle_plugin_player_pane_t1

0xdd67,	// (0x00058f8d) list_single_idle_plugin_player_pane_t2

0xdd75,	// (0x00058f9b) list_single_idle_plugin_player_pane_t3

0xdd83,	// (0x00058fa9) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd7b,	// (0x0005afa1) list_single_idle_plugin_player_pane_t

0xdd91,	// (0x00058fb7) wait_bar_pane_cp15

0xdd99,	// (0x00058fbf) grid_ai_notification_pane

0xb4a7,	// (0x000566cd) list_single_idle_plugin_notification_pane_g1

0xdda2,	// (0x00058fc8) cell_ai_notification_pane_ParamLimits

0xdda2,	// (0x00058fc8) cell_ai_notification_pane

0xddaf,	// (0x00058fd5) cell_ai_notification_pane_g1

0xddb7,	// (0x00058fdd) cell_ai_notification_pane_t1

0xddc5,	// (0x00058feb) tb_ext_find_button_pane

0xddcd,	// (0x00058ff3) tb_ext_find_pane_g1

0xddd5,	// (0x00058ffb) tb_ext_find_pane_t1

0x8ccf,	// (0x00053ef5) tb_ext_find_button_pane_g1

0xdde3,	// (0x00059009) tb_ext_find_button_pane_g2

0x0001,

0xfd84,	// (0x0005afaa) tb_ext_find_button_pane_g

0xdb80,	// (0x00058da6) main_idle_act4_pane_t1_ParamLimits

0xdb92,	// (0x00058db8) main_idle_act4_pane_t2_ParamLimits

0xfd42,	// (0x0005af68) main_idle_act4_pane_t_ParamLimits

0xdbba,	// (0x00058de0) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdbc8,	// (0x00058dee) sat_plugin_idle_act4_pane_ParamLimits

0xdbc8,	// (0x00058dee) sat_plugin_idle_act4_pane

0xddec,	// (0x00059012) sat_plugin_idle_act4_pane_t1_ParamLimits

0xddec,	// (0x00059012) sat_plugin_idle_act4_pane_t1

0xddff,	// (0x00059025) sat_plugin_idle_act4_pane_t2_ParamLimits

0xddff,	// (0x00059025) sat_plugin_idle_act4_pane_t2

0xde12,	// (0x00059038) sat_plugin_idle_act4_pane_t3_ParamLimits

0xde12,	// (0x00059038) sat_plugin_idle_act4_pane_t3

0xde25,	// (0x0005904b) sat_plugin_idle_act4_pane_t4_ParamLimits

0xde25,	// (0x0005904b) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd89,	// (0x0005afaf) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd89,	// (0x0005afaf) sat_plugin_idle_act4_pane_t

0x4b59,	// (0x0004fd7f) popup_battery_window_ParamLimits

0x4b59,	// (0x0004fd7f) popup_battery_window

0x7a59,	// (0x00052c7f) bg_popup_sub_pane_cp25_ParamLimits

0x7a59,	// (0x00052c7f) bg_popup_sub_pane_cp25

0xde38,	// (0x0005905e) popup_battery_window_g1_ParamLimits

0xde38,	// (0x0005905e) popup_battery_window_g1

0xde44,	// (0x0005906a) popup_battery_window_t1_ParamLimits

0xde44,	// (0x0005906a) popup_battery_window_t1

0xde56,	// (0x0005907c) popup_battery_window_t2_ParamLimits

0xde56,	// (0x0005907c) popup_battery_window_t2

0x0001,

0xfd92,	// (0x0005afb8) popup_battery_window_t_ParamLimits

0xfd92,	// (0x0005afb8) popup_battery_window_t

0x92eb,	// (0x00054511) midp_canvas_pane_ParamLimits

0x9360,	// (0x00054586) midp_keypad_pane_ParamLimits

0x9360,	// (0x00054586) midp_keypad_pane

0x9623,	// (0x00054849) main_midp_pane_ParamLimits

0xbbdc,	// (0x00056e02) signal_pane_g2_cp_ParamLimits

0xde73,	// (0x00059099) aid_size_cell_midp_keypad_ParamLimits

0xde73,	// (0x00059099) aid_size_cell_midp_keypad

0xde8d,	// (0x000590b3) midp_keyp_game_grid_pane_ParamLimits

0xde8d,	// (0x000590b3) midp_keyp_game_grid_pane

0xdead,	// (0x000590d3) midp_keyp_rocker_pane_ParamLimits

0xdead,	// (0x000590d3) midp_keyp_rocker_pane

0xdee2,	// (0x00059108) midp_keyp_sk_left_pane_ParamLimits

0xdee2,	// (0x00059108) midp_keyp_sk_left_pane

0xdf3a,	// (0x00059160) midp_keyp_sk_right_pane_ParamLimits

0xdf3a,	// (0x00059160) midp_keyp_sk_right_pane

0x76dc,	// (0x00052902) bg_button_pane_cp03

0xdf92,	// (0x000591b8) midp_keyp_sk_left_pane_g1

0x76dc,	// (0x00052902) bg_button_pane_cp04

0xdf92,	// (0x000591b8) midp_keyp_sk_right_pane_g1

0xc126,	// (0x0005734c) midp_keyp_rocker_pane_g1

0xdf9b,	// (0x000591c1) keyp_game_cell_pane_ParamLimits

0xdf9b,	// (0x000591c1) keyp_game_cell_pane

0x76dc,	// (0x00052902) bg_button_pane_cp02

0xdfae,	// (0x000591d4) keyp_game_cell_pane_g1

0x4b9d,	// (0x0004fdc3) popup_fep_vkb2_window_ParamLimits

0x4b9d,	// (0x0004fdc3) popup_fep_vkb2_window

0x6db2,	// (0x00051fd8) aid_size_cell_vkb2_ParamLimits

0x6db2,	// (0x00051fd8) aid_size_cell_vkb2

0x6e06,	// (0x0005202c) popup_fep_vkb2_window_g1_ParamLimits

0x6e06,	// (0x0005202c) popup_fep_vkb2_window_g1

0x6e4e,	// (0x00052074) vkb2_area_bottom_pane_ParamLimits

0x6e4e,	// (0x00052074) vkb2_area_bottom_pane

0x6e9a,	// (0x000520c0) vkb2_area_keypad_pane_ParamLimits

0x6e9a,	// (0x000520c0) vkb2_area_keypad_pane

0x6edc,	// (0x00052102) vkb2_area_top_pane_ParamLimits

0x6edc,	// (0x00052102) vkb2_area_top_pane

0x6f56,	// (0x0005217c) vkb2_top_entry_pane_ParamLimits

0x6f56,	// (0x0005217c) vkb2_top_entry_pane

0x6f80,	// (0x000521a6) vkb2_top_grid_left_pane_ParamLimits

0x6f80,	// (0x000521a6) vkb2_top_grid_left_pane

0x6f9e,	// (0x000521c4) vkb2_top_grid_right_pane_ParamLimits

0x6f9e,	// (0x000521c4) vkb2_top_grid_right_pane

0x6fbc,	// (0x000521e2) vkb2_cell_keypad_pane_ParamLimits

0x6fbc,	// (0x000521e2) vkb2_cell_keypad_pane

0x708d,	// (0x000522b3) vkb2_area_bottom_grid_pane_ParamLimits

0x708d,	// (0x000522b3) vkb2_area_bottom_grid_pane

0x70b3,	// (0x000522d9) vkb2_area_bottom_pane_g1_ParamLimits

0x70b3,	// (0x000522d9) vkb2_area_bottom_pane_g1

0x70d7,	// (0x000522fd) vkb2_area_bottom_pane_g2_ParamLimits

0x70d7,	// (0x000522fd) vkb2_area_bottom_pane_g2

0x7105,	// (0x0005232b) vkb2_area_bottom_pane_g3_ParamLimits

0x7105,	// (0x0005232b) vkb2_area_bottom_pane_g3

0x0002,

0xfd97,	// (0x0005afbd) vkb2_area_bottom_pane_g_ParamLimits

0xfd97,	// (0x0005afbd) vkb2_area_bottom_pane_g

0x7166,	// (0x0005238c) vkb2_top_cell_left_pane_ParamLimits

0x7166,	// (0x0005238c) vkb2_top_cell_left_pane

0xdfbf,	// (0x000591e5) vkb2_top_entry_pane_g1_ParamLimits

0xdfbf,	// (0x000591e5) vkb2_top_entry_pane_g1

0xdfcd,	// (0x000591f3) vkb2_top_entry_pane_t1_ParamLimits

0xdfcd,	// (0x000591f3) vkb2_top_entry_pane_t1

0xdfff,	// (0x00059225) vkb2_top_entry_pane_t2_ParamLimits

0xdfff,	// (0x00059225) vkb2_top_entry_pane_t2

0xe031,	// (0x00059257) vkb2_top_entry_pane_t3_ParamLimits

0xe031,	// (0x00059257) vkb2_top_entry_pane_t3

0x0002,

0xfd9e,	// (0x0005afc4) vkb2_top_entry_pane_t_ParamLimits

0xfd9e,	// (0x0005afc4) vkb2_top_entry_pane_t

0x71b3,	// (0x000523d9) vkb2_top_grid_right_pane_g1_ParamLimits

0x71b3,	// (0x000523d9) vkb2_top_grid_right_pane_g1

0x71c9,	// (0x000523ef) vkb2_top_grid_right_pane_g2_ParamLimits

0x71c9,	// (0x000523ef) vkb2_top_grid_right_pane_g2

0x71e1,	// (0x00052407) vkb2_top_grid_right_pane_g3_ParamLimits

0x71e1,	// (0x00052407) vkb2_top_grid_right_pane_g3

0x71f9,	// (0x0005241f) vkb2_top_grid_right_pane_g4_ParamLimits

0x71f9,	// (0x0005241f) vkb2_top_grid_right_pane_g4

0x0003,

0xfda5,	// (0x0005afcb) vkb2_top_grid_right_pane_g_ParamLimits

0xfda5,	// (0x0005afcb) vkb2_top_grid_right_pane_g

0x720f,	// (0x00052435) vkb2_top_cell_left_pane_g1

0x7226,	// (0x0005244c) vkb2_cell_keypad_pane_g1_ParamLimits

0x7226,	// (0x0005244c) vkb2_cell_keypad_pane_g1

0xe055,	// (0x0005927b) vkb2_cell_keypad_pane_t1_ParamLimits

0xe055,	// (0x0005927b) vkb2_cell_keypad_pane_t1

0x7234,	// (0x0005245a) vkb2_cell_bottom_grid_pane_ParamLimits

0x7234,	// (0x0005245a) vkb2_cell_bottom_grid_pane

0x726d,	// (0x00052493) vkb2_cell_bottom_grid_pane_g1

0xdc08,	// (0x00058e2e) aid_call2_pane_cp02

0xdc10,	// (0x00058e36) aid_call_pane_cp02

0xdc18,	// (0x00058e3e) clock_digital_number_pane_cp10

0xdc20,	// (0x00058e46) clock_digital_number_pane_cp11

0xdc28,	// (0x00058e4e) clock_digital_number_pane_cp12

0xdc30,	// (0x00058e56) clock_digital_number_pane_cp13

0xdc38,	// (0x00058e5e) clock_digital_separator_pane_cp10

0x8ccf,	// (0x00053ef5) popup_clock_digital_analogue_window_cp2_g1

0x8ccf,	// (0x00053ef5) popup_clock_digital_analogue_window_cp2_g2

0xdc40,	// (0x00058e66) popup_clock_digital_analogue_window_cp2_g3

0x8ccf,	// (0x00053ef5) popup_clock_digital_analogue_window_cp2_g4

0xdc40,	// (0x00058e66) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd5a,	// (0x0005af80) popup_clock_digital_analogue_window_cp2_g

0xdc48,	// (0x00058e6e) popup_clock_digital_analogue_window_cp2_t1

0xdc56,	// (0x00058e7c) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd65,	// (0x0005af8b) popup_clock_digital_analogue_window_cp2_t

0xc126,	// (0x0005734c) clock_digital_number_pane_cp10_g1

0xc126,	// (0x0005734c) clock_digital_number_pane_cp10_g2

0x0001,

0xfb41,	// (0x0005ad67) clock_digital_number_pane_cp10_g

0xc126,	// (0x0005734c) clock_digital_separator_pane_cp10_g1

0xc126,	// (0x0005734c) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb41,	// (0x0005ad67) clock_digital_separator_pane_cp10_g

0xda84,	// (0x00058caa) uniindi_top_pane_g3

0xda95,	// (0x00058cbb) uniindi_top_pane_g4

0x7047,	// (0x0005226d) vkb2_row_keypad_pane_ParamLimits

0x7047,	// (0x0005226d) vkb2_row_keypad_pane

0x7289,	// (0x000524af) vkb2_cell_t_keypad_pane_ParamLimits

0x7289,	// (0x000524af) vkb2_cell_t_keypad_pane

0x7299,	// (0x000524bf) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x7299,	// (0x000524bf) vkb2_cell_t_keypad_pane_cp08

0x72ac,	// (0x000524d2) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x72ac,	// (0x000524d2) vkb2_cell_t_keypad_pane_cp09

0x72c0,	// (0x000524e6) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x72c0,	// (0x000524e6) vkb2_cell_t_keypad_pane_cp01

0x72d1,	// (0x000524f7) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x72d1,	// (0x000524f7) vkb2_cell_t_keypad_pane_cp02

0x72e2,	// (0x00052508) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x72e2,	// (0x00052508) vkb2_cell_t_keypad_pane_cp03

0x72f3,	// (0x00052519) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x72f3,	// (0x00052519) vkb2_cell_t_keypad_pane_cp04

0x7304,	// (0x0005252a) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x7304,	// (0x0005252a) vkb2_cell_t_keypad_pane_cp05

0x7315,	// (0x0005253b) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x7315,	// (0x0005253b) vkb2_cell_t_keypad_pane_cp06

0x7326,	// (0x0005254c) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x7326,	// (0x0005254c) vkb2_cell_t_keypad_pane_cp07

0x7337,	// (0x0005255d) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x7337,	// (0x0005255d) vkb2_cell_t_keypad_pane_cp10

0x6aed,	// (0x00051d13) vkb2_cell_t_keypad_pane_g1

0xe06c,	// (0x00059292) vkb2_cell_t_keypad_pane_t1

0x4a94,	// (0x0004fcba) popup_grid_graphic2_window

0xe07e,	// (0x000592a4) aid_size_cell_graphic2_ParamLimits

0xe07e,	// (0x000592a4) aid_size_cell_graphic2

0xe0b6,	// (0x000592dc) bg_popup_window_pane_cp21_ParamLimits

0xe0b6,	// (0x000592dc) bg_popup_window_pane_cp21

0xe0c4,	// (0x000592ea) graphic2_pages_pane_ParamLimits

0xe0c4,	// (0x000592ea) graphic2_pages_pane

0xe10a,	// (0x00059330) grid_graphic2_control_pane_ParamLimits

0xe10a,	// (0x00059330) grid_graphic2_control_pane

0xe148,	// (0x0005936e) grid_graphic2_pane_ParamLimits

0xe148,	// (0x0005936e) grid_graphic2_pane

0xe1bc,	// (0x000593e2) cell_graphic2_pane

0x4a94,	// (0x0004fcba) main_comp_mode_pane

0xd2e3,	// (0x00058509) list_ai3_gene_pane_ParamLimits

0xd6ad,	// (0x000588d3) bg_popup_window_pane_cp19_ParamLimits

0xd6b9,	// (0x000588df) bg_touch_area_indi_pane_ParamLimits

0xd6b9,	// (0x000588df) bg_touch_area_indi_pane

0xd6cf,	// (0x000588f5) bg_touch_area_indi_pane_cp01_ParamLimits

0xd6cf,	// (0x000588f5) bg_touch_area_indi_pane_cp01

0xd6e5,	// (0x0005890b) bg_touch_area_indi_pane_cp02_ParamLimits

0xd6e5,	// (0x0005890b) bg_touch_area_indi_pane_cp02

0xd6fd,	// (0x00058923) bg_touch_area_indi_pane_cp03_ParamLimits

0xd6fd,	// (0x00058923) bg_touch_area_indi_pane_cp03

0xd717,	// (0x0005893d) popup_slider_window_g1_ParamLimits

0xd733,	// (0x00058959) popup_slider_window_g2_ParamLimits

0xd74f,	// (0x00058975) popup_slider_window_g3_ParamLimits

0xfcef,	// (0x0005af15) popup_slider_window_g_ParamLimits

0xd7ab,	// (0x000589d1) popup_slider_window_t1_ParamLimits

0xd81f,	// (0x00058a45) small_volume_slider_vertical_pane_ParamLimits

0xe1bc,	// (0x000593e2) cell_graphic2_pane_ParamLimits

0xe20a,	// (0x00059430) bg_button_pane_cp10_ParamLimits

0xe20a,	// (0x00059430) bg_button_pane_cp10

0xe21d,	// (0x00059443) bg_button_pane_cp11_ParamLimits

0xe21d,	// (0x00059443) bg_button_pane_cp11

0xe230,	// (0x00059456) graphic2_pages_pane_g1_ParamLimits

0xe230,	// (0x00059456) graphic2_pages_pane_g1

0xe24b,	// (0x00059471) graphic2_pages_pane_g2_ParamLimits

0xe24b,	// (0x00059471) graphic2_pages_pane_g2

0x0001,

0xfdb3,	// (0x0005afd9) graphic2_pages_pane_g_ParamLimits

0xfdb3,	// (0x0005afd9) graphic2_pages_pane_g

0xe263,	// (0x00059489) graphic2_pages_pane_t1_ParamLimits

0xe263,	// (0x00059489) graphic2_pages_pane_t1

0xe27b,	// (0x000594a1) cell_graphic2_control_pane_ParamLimits

0xe27b,	// (0x000594a1) cell_graphic2_control_pane

0xe29c,	// (0x000594c2) cell_graphic2_pane_g1_ParamLimits

0xe29c,	// (0x000594c2) cell_graphic2_pane_g1

0xe2a9,	// (0x000594cf) cell_graphic2_pane_g2_ParamLimits

0xe2a9,	// (0x000594cf) cell_graphic2_pane_g2

0xe2b6,	// (0x000594dc) cell_graphic2_pane_g3_ParamLimits

0xe2b6,	// (0x000594dc) cell_graphic2_pane_g3

0xe2c3,	// (0x000594e9) cell_graphic2_pane_g4_ParamLimits

0xe2c3,	// (0x000594e9) cell_graphic2_pane_g4

0xe2d0,	// (0x000594f6) cell_graphic2_pane_g5_ParamLimits

0xe2d0,	// (0x000594f6) cell_graphic2_pane_g5

0x0004,

0xfdb8,	// (0x0005afde) cell_graphic2_pane_g_ParamLimits

0xfdb8,	// (0x0005afde) cell_graphic2_pane_g

0xe2eb,	// (0x00059511) cell_graphic2_pane_t1_ParamLimits

0xe2eb,	// (0x00059511) cell_graphic2_pane_t1

0x9b8f,	// (0x00054db5) grid_highlight_pane_cp11_ParamLimits

0x9b8f,	// (0x00054db5) grid_highlight_pane_cp11

0x7a59,	// (0x00052c7f) bg_button_pane_cp05

0xe314,	// (0x0005953a) cell_graphic2_control_pane_g1

0xc126,	// (0x0005734c) bg_touch_area_indi_pane_g1

0xe33c,	// (0x00059562) aid_cmod_rocker_key_size

0xe346,	// (0x0005956c) aid_cmode_itu_key_size

0xe350,	// (0x00059576) main_cmode_video_pane

0xe35a,	// (0x00059580) main_comp_mode_itu_pane

0xe366,	// (0x0005958c) main_comp_mode_rocker_pane

0xe372,	// (0x00059598) cell_cmode_rocker_pane_ParamLimits

0xe372,	// (0x00059598) cell_cmode_rocker_pane

0xe384,	// (0x000595aa) cell_cmode_itu_pane_ParamLimits

0xe384,	// (0x000595aa) cell_cmode_itu_pane

0x865a,	// (0x00053880) bg_button_pane_cp06_ParamLimits

0x865a,	// (0x00053880) bg_button_pane_cp06

0xc3a4,	// (0x000575ca) cell_cmode_rocker_pane_g1_ParamLimits

0xc3a4,	// (0x000575ca) cell_cmode_rocker_pane_g1

0xd8c3,	// (0x00058ae9) cell_cmode_rocker_pane_g2_ParamLimits

0xd8c3,	// (0x00058ae9) cell_cmode_rocker_pane_g2

0x0001,

0xfdc8,	// (0x0005afee) cell_cmode_rocker_pane_g_ParamLimits

0xfdc8,	// (0x0005afee) cell_cmode_rocker_pane_g

0x76dc,	// (0x00052902) bg_button_pane_cp07

0xe399,	// (0x000595bf) cell_cmode_itu_pane_g1

0xe3a2,	// (0x000595c8) cell_cmode_itu_pane_t1

0xe3b0,	// (0x000595d6) cell_cmode_itu_pane_t2

0x0001,

0xfdcd,	// (0x0005aff3) cell_cmode_itu_pane_t

0xdb07,	// (0x00058d2d) aid_touch_ctrl_left

0xdb0f,	// (0x00058d35) aid_touch_ctrl_right

0x76dc,	// (0x00052902) compa_mode_pane

0xe3be,	// (0x000595e4) aid_cmod_rocker_key_size_cp

0xe3c8,	// (0x000595ee) aid_cmode_itu_key_size_cp

0xe3d2,	// (0x000595f8) compa_mode_pane_g1

0xe3da,	// (0x00059600) compa_mode_pane_g2

0xe3e2,	// (0x00059608) compa_mode_pane_g3

0x0002,

0xfdd2,	// (0x0005aff8) compa_mode_pane_g

0xe3ea,	// (0x00059610) main_comp_mode_itu_pane_cp

0xe3f2,	// (0x00059618) main_comp_mode_rocker_pane_cp

0xe3fa,	// (0x00059620) cell_cmode_itu_pane_cp_ParamLimits

0xe3fa,	// (0x00059620) cell_cmode_itu_pane_cp

0xe40f,	// (0x00059635) cell_cmode_rocker_pane_cp_ParamLimits

0xe40f,	// (0x00059635) cell_cmode_rocker_pane_cp

0x865a,	// (0x00053880) bg_button_pane_cp06_cp_ParamLimits

0x865a,	// (0x00053880) bg_button_pane_cp06_cp

0xc3a4,	// (0x000575ca) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc3a4,	// (0x000575ca) cell_cmode_rocker_pane_g1_cp

0xc126,	// (0x0005734c) cell_cmode_rocker_pane_g2_cp

0x76dc,	// (0x00052902) bg_button_pane_cp07_cp

0xb069,	// (0x0005628f) cell_cmode_itu_pane_g1_cp

0xe421,	// (0x00059647) cell_cmode_itu_pane_t1_cp

0xe421,	// (0x00059647) cell_cmode_itu_pane_t2_cp

0xb056,	// (0x0005627c) settings_code_pane_cp2

0x77d0,	// (0x000529f6) bg_popup_window_pane_cp3_ParamLimits

0x7c33,	// (0x00052e59) heading_pane_cp3_ParamLimits

0x7c3f,	// (0x00052e65) listscroll_popup_graphic_pane_ParamLimits

0x6896,	// (0x00051abc) fep_hwr_aid_pane_ParamLimits

0x6d0d,	// (0x00051f33) aid_touch_sctrl_top_ParamLimits

0x6d28,	// (0x00051f4e) sctrl_sk_top_pane_g1_ParamLimits

0x6aed,	// (0x00051d13) sctrl_sk_top_pane_g2_ParamLimits

0xfd08,	// (0x0005af2e) sctrl_sk_top_pane_g_ParamLimits

0x6d35,	// (0x00051f5b) sctrl_sk_top_pane_t1_ParamLimits

0x6d0d,	// (0x00051f33) aid_touch_sctrl_bottom_ParamLimits

0x6d35,	// (0x00051f5b) sctrl_sk_bottom_pane_t1_ParamLimits

0xda50,	// (0x00058c76) aid_area_touch_clock

0x6f1e,	// (0x00052144) aid_vkb2_area_top_pane_cell_ParamLimits

0x6f1e,	// (0x00052144) aid_vkb2_area_top_pane_cell

0x7069,	// (0x0005228f) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x7069,	// (0x0005228f) aid_vkb2_area_bottom_pane_cell

0xdfb7,	// (0x000591dd) popup_char_count_window

0xe42f,	// (0x00059655) popup_char_count_window_g1

0xe438,	// (0x0005965e) popup_char_count_window_g2

0xe441,	// (0x00059667) popup_char_count_window_g3

0x0002,

0xfdd9,	// (0x0005afff) popup_char_count_window_g

0xe44a,	// (0x00059670) popup_char_count_window_t1

0x6de4,	// (0x0005200a) popup_fep_char_preview_window_ParamLimits

0x6de4,	// (0x0005200a) popup_fep_char_preview_window

0x6f3c,	// (0x00052162) vkb2_top_candi_pane_ParamLimits

0x6f3c,	// (0x00052162) vkb2_top_candi_pane

0xe458,	// (0x0005967e) cell_vkb2_top_candi_pane_ParamLimits

0xe458,	// (0x0005967e) cell_vkb2_top_candi_pane

0x734c,	// (0x00052572) bg_popup_fep_char_preview_window_ParamLimits

0x734c,	// (0x00052572) bg_popup_fep_char_preview_window

0x735a,	// (0x00052580) popup_fep_char_preview_window_t1_ParamLimits

0x735a,	// (0x00052580) popup_fep_char_preview_window_t1

0xe4a5,	// (0x000596cb) bg_popup_fep_char_preview_window_g1

0xe4ad,	// (0x000596d3) bg_popup_fep_char_preview_window_g2

0xe4b5,	// (0x000596db) bg_popup_fep_char_preview_window_g3

0xe4bd,	// (0x000596e3) bg_popup_fep_char_preview_window_g4

0xe4c5,	// (0x000596eb) bg_popup_fep_char_preview_window_g5

0x7394,	// (0x000525ba) bg_popup_fep_char_preview_window_g6

0xe4cd,	// (0x000596f3) bg_popup_fep_char_preview_window_g7

0xe4d5,	// (0x000596fb) bg_popup_fep_char_preview_window_g8

0xe4dd,	// (0x00059703) bg_popup_fep_char_preview_window_g9

0x0008,

0xfde0,	// (0x0005b006) bg_popup_fep_char_preview_window_g

0x6aed,	// (0x00051d13) cell_vkb2_top_candi_pane_g1_ParamLimits

0x6aed,	// (0x00051d13) cell_vkb2_top_candi_pane_g1

0x6afb,	// (0x00051d21) cell_vkb2_top_candi_pane_g2_ParamLimits

0x6afb,	// (0x00051d21) cell_vkb2_top_candi_pane_g2

0xd8d1,	// (0x00058af7) cell_vkb2_top_candi_pane_g3_ParamLimits

0xd8d1,	// (0x00058af7) cell_vkb2_top_candi_pane_g3

0x739c,	// (0x000525c2) cell_vkb2_top_candi_pane_g4_ParamLimits

0x739c,	// (0x000525c2) cell_vkb2_top_candi_pane_g4

0xc86f,	// (0x00057a95) cell_vkb2_top_candi_pane_g5_ParamLimits

0xc86f,	// (0x00057a95) cell_vkb2_top_candi_pane_g5

0x73bd,	// (0x000525e3) cell_vkb2_top_candi_pane_g6_ParamLimits

0x73bd,	// (0x000525e3) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdf3,	// (0x0005b019) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdf3,	// (0x0005b019) cell_vkb2_top_candi_pane_g

0x73cb,	// (0x000525f1) cell_vkb2_top_candi_pane_t1

0x6483,	// (0x000516a9) aid_size_touch_slider_mark_ParamLimits

0x6483,	// (0x000516a9) aid_size_touch_slider_mark

0xe0fa,	// (0x00059320) grid_graphic2_catg_pane_ParamLimits

0xe0fa,	// (0x00059320) grid_graphic2_catg_pane

0xe198,	// (0x000593be) popup_grid_graphic2_window_t1_ParamLimits

0xe198,	// (0x000593be) popup_grid_graphic2_window_t1

0xe1aa,	// (0x000593d0) popup_grid_graphic2_window_t2_ParamLimits

0xe1aa,	// (0x000593d0) popup_grid_graphic2_window_t2

0x0001,

0xfdae,	// (0x0005afd4) popup_grid_graphic2_window_t_ParamLimits

0xfdae,	// (0x0005afd4) popup_grid_graphic2_window_t

0x7a59,	// (0x00052c7f) bg_button_pane_cp05_ParamLimits

0xe314,	// (0x0005953a) cell_graphic2_control_pane_g1_ParamLimits

0xe4e5,	// (0x0005970b) cell_graphic2_catg_pane_ParamLimits

0xe4e5,	// (0x0005970b) cell_graphic2_catg_pane

0x76dc,	// (0x00052902) bg_button_pane_cp12

0xe4f7,	// (0x0005971d) cell_graphic2_catg_pane_g1

0xda1c,	// (0x00058c42) cell_tb_ext_pane_t1_ParamLimits

0x7186,	// (0x000523ac) vkb2_top_cell_right_narrow_pane_ParamLimits

0x7186,	// (0x000523ac) vkb2_top_cell_right_narrow_pane

0x719e,	// (0x000523c4) vkb2_top_cell_right_wide_pane_ParamLimits

0x719e,	// (0x000523c4) vkb2_top_cell_right_wide_pane

0x6888,	// (0x00051aae) bg_vkb2_func_pane_ParamLimits

0x6888,	// (0x00051aae) bg_vkb2_func_pane

0x720f,	// (0x00052435) vkb2_top_cell_left_pane_g1_ParamLimits

0x6888,	// (0x00051aae) bg_vkb2_fuc_pane_cp03_ParamLimits

0x6888,	// (0x00051aae) bg_vkb2_fuc_pane_cp03

0x726d,	// (0x00052493) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x9b23,	// (0x00054d49) bg_vkb2_func_pane_g1

0x9b2b,	// (0x00054d51) bg_vkb2_func_pane_g2

0x9b3b,	// (0x00054d61) bg_vkb2_func_pane_g3

0x9b33,	// (0x00054d59) bg_vkb2_func_pane_g4

0x9b43,	// (0x00054d69) bg_vkb2_func_pane_g5

0x9b4b,	// (0x00054d71) bg_vkb2_func_pane_g6

0x9b53,	// (0x00054d79) bg_vkb2_func_pane_g7

0x9b5b,	// (0x00054d81) bg_vkb2_func_pane_g8

0x9b1b,	// (0x00054d41) bg_vkb2_func_pane_g9

0x0008,

0xfe00,	// (0x0005b026) bg_vkb2_func_pane_g

0x6888,	// (0x00051aae) bg_vkb2_fuc_pane_cp01_ParamLimits

0x6888,	// (0x00051aae) bg_vkb2_fuc_pane_cp01

0x720f,	// (0x00052435) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x720f,	// (0x00052435) vkb2_top_cell_right_wide_pane_g1

0x6888,	// (0x00051aae) bg_vkb2_fuc_pane_cp02_ParamLimits

0x6888,	// (0x00051aae) bg_vkb2_fuc_pane_cp02

0x726d,	// (0x00052493) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x726d,	// (0x00052493) vkb2_top_cell_right_narrow_pane_g1

0xd631,	// (0x00058857) aid_touch_area_decrease_ParamLimits

0xd631,	// (0x00058857) aid_touch_area_decrease

0xd64f,	// (0x00058875) aid_touch_area_increase_ParamLimits

0xd64f,	// (0x00058875) aid_touch_area_increase

0xd65b,	// (0x00058881) aid_touch_area_mute_ParamLimits

0xd65b,	// (0x00058881) aid_touch_area_mute

0xd67f,	// (0x000588a5) aid_touch_area_slider_ParamLimits

0xd67f,	// (0x000588a5) aid_touch_area_slider

0xd76b,	// (0x00058991) popup_slider_window_g4_ParamLimits

0xd76b,	// (0x00058991) popup_slider_window_g4

0xd777,	// (0x0005899d) popup_slider_window_g5_ParamLimits

0xd777,	// (0x0005899d) popup_slider_window_g5

0xd799,	// (0x000589bf) popup_slider_window_g6_ParamLimits

0xd799,	// (0x000589bf) popup_slider_window_g6

0xd7d9,	// (0x000589ff) popup_slider_window_t2_ParamLimits

0xd7d9,	// (0x000589ff) popup_slider_window_t2

0x0001,

0xfcfc,	// (0x0005af22) popup_slider_window_t_ParamLimits

0xfcfc,	// (0x0005af22) popup_slider_window_t

0xd7f1,	// (0x00058a17) slider_pane_ParamLimits

0xd7f1,	// (0x00058a17) slider_pane

0xe500,	// (0x00059726) slider_pane_g1_ParamLimits

0xe500,	// (0x00059726) slider_pane_g1

0xe514,	// (0x0005973a) slider_pane_g2_ParamLimits

0xe514,	// (0x0005973a) slider_pane_g2

0xe52a,	// (0x00059750) slider_pane_g3_ParamLimits

0xe52a,	// (0x00059750) slider_pane_g3

0x0003,

0xfe13,	// (0x0005b039) slider_pane_g_ParamLimits

0xfe13,	// (0x0005b039) slider_pane_g

0x5f8e,	// (0x000511b4) popup_tb_float_extension_window_ParamLimits

0x5f8e,	// (0x000511b4) popup_tb_float_extension_window

0xe556,	// (0x0005977c) aid_size_cell_tb_float_ext

0x76dc,	// (0x00052902) bg_popup_sub_window_cp28

0xe562,	// (0x00059788) grid_tb_float_ext_pane

0xe56c,	// (0x00059792) cell_tb_float_ext_pane_ParamLimits

0xe56c,	// (0x00059792) cell_tb_float_ext_pane

0xe586,	// (0x000597ac) cell_tb_float_ext_pane_g1

0xe58f,	// (0x000597b5) grid_highlight_pane_cp12

0x69d7,	// (0x00051bfd) cell_last_hwr_side_pane_ParamLimits

0x69d7,	// (0x00051bfd) cell_last_hwr_side_pane

0xc126,	// (0x0005734c) cell_last_hwr_side_pane_g1

0xe598,	// (0x000597be) cell_last_hwr_side_pane_g2

0x0001,

0xfe1c,	// (0x0005b042) cell_last_hwr_side_pane_g

0x7135,	// (0x0005235b) vkb2_area_bottom_space_btn_pane_ParamLimits

0x7135,	// (0x0005235b) vkb2_area_bottom_space_btn_pane

0x6aed,	// (0x00051d13) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xe06c,	// (0x00059292) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x73cb,	// (0x000525f1) cell_vkb2_top_candi_pane_t1_ParamLimits

0x73ea,	// (0x00052610) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x73ea,	// (0x00052610) vkb2_area_bottom_space_btn_pane_g1

0x7424,	// (0x0005264a) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x7424,	// (0x0005264a) vkb2_area_bottom_space_btn_pane_g2

0x745a,	// (0x00052680) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x745a,	// (0x00052680) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe21,	// (0x0005b047) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe21,	// (0x0005b047) vkb2_area_bottom_space_btn_pane_g

0x694b,	// (0x00051b71) cel_fep_hwr_func_pane_ParamLimits

0x694b,	// (0x00051b71) cel_fep_hwr_func_pane

0x6987,	// (0x00051bad) cell_hwr_side_button_pane_ParamLimits

0x6987,	// (0x00051bad) cell_hwr_side_button_pane

0xda50,	// (0x00058c76) aid_area_touch_clock_ParamLimits

0x7a59,	// (0x00052c7f) bg_uniindi_top_pane_ParamLimits

0xda62,	// (0x00058c88) uniindi_top_pane_g1_ParamLimits

0xda78,	// (0x00058c9e) uniindi_top_pane_g2_ParamLimits

0xda84,	// (0x00058caa) uniindi_top_pane_g3_ParamLimits

0xda95,	// (0x00058cbb) uniindi_top_pane_g4_ParamLimits

0xfd34,	// (0x0005af5a) uniindi_top_pane_g_ParamLimits

0xdaa2,	// (0x00058cc8) uniindi_top_pane_t1_ParamLimits

0x7a59,	// (0x00052c7f) bg_vkb2_func_pane_cp01_ParamLimits

0x7a59,	// (0x00052c7f) bg_vkb2_func_pane_cp01

0xe5a1,	// (0x000597c7) cel_fep_hwr_func_pane_g1_ParamLimits

0xe5a1,	// (0x000597c7) cel_fep_hwr_func_pane_g1

0x7a59,	// (0x00052c7f) bg_vkb2_func_pane_cp02_ParamLimits

0x7a59,	// (0x00052c7f) bg_vkb2_func_pane_cp02

0xe5a1,	// (0x000597c7) cell_hwr_side_button_pane_g1_ParamLimits

0xe5a1,	// (0x000597c7) cell_hwr_side_button_pane_g1

0x999c,	// (0x00054bc2) status_pane_g4_ParamLimits

0x999c,	// (0x00054bc2) status_pane_g4

0x99b6,	// (0x00054bdc) status_pane_t1

0xbe60,	// (0x00057086) form2_midp_gauge_slider_cont_pane

0xbe68,	// (0x0005708e) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbe7a,	// (0x000570a0) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbe8c,	// (0x000570b2) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf4,	// (0x0005ad1a) form2_midp_gauge_slider_pane_t_ParamLimits

0xbe9e,	// (0x000570c4) form2_midp_slider_pane_ParamLimits

0x6da4,	// (0x00051fca) aid_size_cell_func_vkb2_ParamLimits

0x6da4,	// (0x00051fca) aid_size_cell_func_vkb2

0xe542,	// (0x00059768) slider_pane_g4_ParamLimits

0xe542,	// (0x00059768) slider_pane_g4

0x74a4,	// (0x000526ca) form2_midp_gauge_slider_pane_t2_cp01

0x74b2,	// (0x000526d8) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x74b2,	// (0x000526d8) form2_midp_gauge_slider_pane_t3_cp01

0x74cf,	// (0x000526f5) form2_midp_slider_pane_cp01

0x76dc,	// (0x00052902) navi_smil_pane

0xe5da,	// (0x00059800) navi_smil_pane_g1

0xe5e2,	// (0x00059808) navi_smil_pane_t1

0xe5af,	// (0x000597d5) form2_midp_slider_pane_g1

0xe5b8,	// (0x000597de) form2_midp_slider_pane_g2

0xe5c0,	// (0x000597e6) form2_midp_slider_pane_g3

0xe5af,	// (0x000597d5) form2_midp_slider_pane_g4

0xe5c8,	// (0x000597ee) form2_midp_slider_pane_g5

0x0004,

0xfe2a,	// (0x0005b050) form2_midp_slider_pane_g

0x7494,	// (0x000526ba) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x7494,	// (0x000526ba) vkb2_area_bottom_space_btn_pane_g4

0x97d9,	// (0x000549ff) lc0_navi_pane_ParamLimits

0x97d9,	// (0x000549ff) lc0_navi_pane

0x984f,	// (0x00054a75) lc0_stat_indi_pane_ParamLimits

0x984f,	// (0x00054a75) lc0_stat_indi_pane

0x9866,	// (0x00054a8c) ls0_title_pane_ParamLimits

0x9866,	// (0x00054a8c) ls0_title_pane

0x865a,	// (0x00053880) bg_popup_sub_pane_cp14_ParamLimits

0xda37,	// (0x00058c5d) list_uniindi_pane_ParamLimits

0xda43,	// (0x00058c69) uniindi_top_pane_ParamLimits

0xdadf,	// (0x00058d05) list_single_uniindi_pane_g1_ParamLimits

0xdaf2,	// (0x00058d18) list_single_uniindi_pane_t1_ParamLimits

0x74d8,	// (0x000526fe) lc0_stat_clock_pane_ParamLimits

0x74d8,	// (0x000526fe) lc0_stat_clock_pane

0xe5f0,	// (0x00059816) lc0_stat_indi_pane_g1_ParamLimits

0xe5f0,	// (0x00059816) lc0_stat_indi_pane_g1

0xe5fd,	// (0x00059823) lc0_stat_indi_pane_g2_ParamLimits

0xe5fd,	// (0x00059823) lc0_stat_indi_pane_g2

0x0001,

0xfe35,	// (0x0005b05b) lc0_stat_indi_pane_g_ParamLimits

0xfe35,	// (0x0005b05b) lc0_stat_indi_pane_g

0x74e5,	// (0x0005270b) lc0_uni_indicator_pane_ParamLimits

0x74e5,	// (0x0005270b) lc0_uni_indicator_pane

0xe60a,	// (0x00059830) ls0_title_pane_g1_ParamLimits

0xe60a,	// (0x00059830) ls0_title_pane_g1

0xe61e,	// (0x00059844) ls0_title_pane_t1_ParamLimits

0xe61e,	// (0x00059844) ls0_title_pane_t1

0x74f2,	// (0x00052718) lc0_uni_indicator_pane_g1_ParamLimits

0x74f2,	// (0x00052718) lc0_uni_indicator_pane_g1

0xe654,	// (0x0005987a) lc0_stat_clock_pane_t1

0x4a94,	// (0x0004fcba) main_ai5_pane

0xe662,	// (0x00059888) ai5_sk_pane_ParamLimits

0xe662,	// (0x00059888) ai5_sk_pane

0xe66f,	// (0x00059895) cell_ai5_widget_pane_ParamLimits

0xe66f,	// (0x00059895) cell_ai5_widget_pane

0xe725,	// (0x0005994b) aid_size_cell_widget_grid

0xe73b,	// (0x00059961) bg_ai5_widget_pane_ParamLimits

0xe73b,	// (0x00059961) bg_ai5_widget_pane

0xe7a5,	// (0x000599cb) cell_ai5_widget_pane_g2

0xe7b5,	// (0x000599db) cell_ai5_widget_pane_g3

0xe7d4,	// (0x000599fa) cell_ai5_widget_pane_g4

0xe7e0,	// (0x00059a06) cell_ai5_widget_pane_g5

0xe7ec,	// (0x00059a12) cell_ai5_widget_pane_g6

0xe7f8,	// (0x00059a1e) cell_ai5_widget_pane_g7

0xe840,	// (0x00059a66) cell_ai5_widget_pane_t1_ParamLimits

0xe840,	// (0x00059a66) cell_ai5_widget_pane_t1

0xe85d,	// (0x00059a83) cell_ai5_widget_pane_t2_ParamLimits

0xe85d,	// (0x00059a83) cell_ai5_widget_pane_t2

0xe875,	// (0x00059a9b) cell_ai5_widget_pane_t3_ParamLimits

0xe875,	// (0x00059a9b) cell_ai5_widget_pane_t3

0xe88d,	// (0x00059ab3) cell_ai5_widget_pane_t4_ParamLimits

0xe88d,	// (0x00059ab3) cell_ai5_widget_pane_t4

0xe8a7,	// (0x00059acd) cell_ai5_widget_pane_t5_ParamLimits

0xe8a7,	// (0x00059acd) cell_ai5_widget_pane_t5

0xe8c6,	// (0x00059aec) cell_ai5_widget_pane_t6_ParamLimits

0xe8c6,	// (0x00059aec) cell_ai5_widget_pane_t6

0xe8d8,	// (0x00059afe) cell_ai5_widget_pane_t7_ParamLimits

0xe8d8,	// (0x00059afe) cell_ai5_widget_pane_t7

0xe8f1,	// (0x00059b17) cell_ai5_widget_pane_t8_ParamLimits

0xe8f1,	// (0x00059b17) cell_ai5_widget_pane_t8

0x0009,

0xfe4f,	// (0x0005b075) cell_ai5_widget_pane_t_ParamLimits

0xfe4f,	// (0x0005b075) cell_ai5_widget_pane_t

0xe93d,	// (0x00059b63) grid_ai5_widget_pane

0x865a,	// (0x00053880) highlight_cell_ai5_widget_pane_ParamLimits

0x865a,	// (0x00053880) highlight_cell_ai5_widget_pane

0xe955,	// (0x00059b7b) ai5_sk_left_pane

0xe95f,	// (0x00059b85) ai5_sk_middle_pane

0xe969,	// (0x00059b8f) ai5_sk_right_pane

0xe973,	// (0x00059b99) bg_ai5_widget_pane_g1_ParamLimits

0xe973,	// (0x00059b99) bg_ai5_widget_pane_g1

0xe97f,	// (0x00059ba5) bg_ai5_widget_pane_g2_ParamLimits

0xe97f,	// (0x00059ba5) bg_ai5_widget_pane_g2

0xe98b,	// (0x00059bb1) bg_ai5_widget_pane_g3_ParamLimits

0xe98b,	// (0x00059bb1) bg_ai5_widget_pane_g3

0xe997,	// (0x00059bbd) bg_ai5_widget_pane_g4_ParamLimits

0xe997,	// (0x00059bbd) bg_ai5_widget_pane_g4

0xe9a3,	// (0x00059bc9) bg_ai5_widget_pane_g5_ParamLimits

0xe9a3,	// (0x00059bc9) bg_ai5_widget_pane_g5

0xe9af,	// (0x00059bd5) bg_ai5_widget_pane_g6_ParamLimits

0xe9af,	// (0x00059bd5) bg_ai5_widget_pane_g6

0xe9bb,	// (0x00059be1) bg_ai5_widget_pane_g7_ParamLimits

0xe9bb,	// (0x00059be1) bg_ai5_widget_pane_g7

0xe9c7,	// (0x00059bed) bg_ai5_widget_pane_g8_ParamLimits

0xe9c7,	// (0x00059bed) bg_ai5_widget_pane_g8

0xe9d3,	// (0x00059bf9) bg_ai5_widget_pane_g9_ParamLimits

0xe9d3,	// (0x00059bf9) bg_ai5_widget_pane_g9

0x0008,

0xfe64,	// (0x0005b08a) bg_ai5_widget_pane_g_ParamLimits

0xfe64,	// (0x0005b08a) bg_ai5_widget_pane_g

0xea06,	// (0x00059c2c) cell_shortcut_ai5_widget_pane_ParamLimits

0xea06,	// (0x00059c2c) cell_shortcut_ai5_widget_pane

0x92e3,	// (0x00054509) bg_cell_shortcut_ai5_widget_pane

0xea17,	// (0x00059c3d) cell_grid_ai5_widget_pane_g1

0xea20,	// (0x00059c46) highlight_cell_shortcut_ai5_widget_pane

0x9b23,	// (0x00054d49) ai5_sk_left_pane_g1

0xea28,	// (0x00059c4e) ai5_sk_left_pane_g2

0xea30,	// (0x00059c56) ai5_sk_left_pane_g3

0xea38,	// (0x00059c5e) ai5_sk_left_pane_g4

0x0003,

0xfe77,	// (0x0005b09d) ai5_sk_left_pane_g

0xea40,	// (0x00059c66) ai5_sk_left_pane_t1

0x9b2b,	// (0x00054d51) ai5_sk_right_pane_g1

0xea4e,	// (0x00059c74) ai5_sk_right_pane_g2

0xea56,	// (0x00059c7c) ai5_sk_right_pane_g3

0xea5e,	// (0x00059c84) ai5_sk_right_pane_g4

0x0003,

0xfe80,	// (0x0005b0a6) ai5_sk_right_pane_g

0xea66,	// (0x00059c8c) ai5_sk_right_pane_t1

0x9b2b,	// (0x00054d51) ai5_sk_middle_pane_g1

0x9b23,	// (0x00054d49) ai5_sk_middle_pane_g2

0x9b43,	// (0x00054d69) ai5_sk_middle_pane_g3

0xea56,	// (0x00059c7c) ai5_sk_middle_pane_g4

0xea30,	// (0x00059c56) ai5_sk_middle_pane_g5

0xea74,	// (0x00059c9a) ai5_sk_middle_pane_g6

0xea7c,	// (0x00059ca2) ai5_sk_middle_pane_g7

0x0006,

0xfe89,	// (0x0005b0af) ai5_sk_middle_pane_g

0x9669,	// (0x0005488f) aid_touch_area_size_lc0_ParamLimits

0x9669,	// (0x0005488f) aid_touch_area_size_lc0

0x6b1c,	// (0x00051d42) cell_hwr_candidate_pane_t1_ParamLimits

0x9685,	// (0x000548ab) aid_touch_navi_pane

0x994e,	// (0x00054b74) status_dt_navi_pane_ParamLimits

0x994e,	// (0x00054b74) status_dt_navi_pane

0x995b,	// (0x00054b81) status_dt_sta_pane_ParamLimits

0x995b,	// (0x00054b81) status_dt_sta_pane

0xea84,	// (0x00059caa) dt_sta_controll_pane

0xea91,	// (0x00059cb7) dt_sta_indi_pane

0xeaa2,	// (0x00059cc8) dt_sta_title_pane

0x7a59,	// (0x00052c7f) bg_dt_sta_indi_pane_ParamLimits

0x7a59,	// (0x00052c7f) bg_dt_sta_indi_pane

0xeab5,	// (0x00059cdb) dt_sta_battery_pane

0xeabd,	// (0x00059ce3) dt_sta_indi_pane_g1

0xeac6,	// (0x00059cec) dt_sta_indi_pane_g2

0xeacf,	// (0x00059cf5) dt_sta_indi_pane_g3

0x0002,

0xfe98,	// (0x0005b0be) dt_sta_indi_pane_g

0xead8,	// (0x00059cfe) dt_sta_signal_pane

0x865a,	// (0x00053880) bg_dt_sta_title_pane_ParamLimits

0x865a,	// (0x00053880) bg_dt_sta_title_pane

0xeae1,	// (0x00059d07) dt_sta_title_pane_g1

0xeae9,	// (0x00059d0f) dt_sta_title_pane_t1_ParamLimits

0xeae9,	// (0x00059d0f) dt_sta_title_pane_t1

0x76dc,	// (0x00052902) bg_dt_sta_control_pane

0xeafe,	// (0x00059d24) dt_sta_controll_pane_g1

0xeb07,	// (0x00059d2d) bg_dt_sta_title_pane_g1

0xeb10,	// (0x00059d36) bg_dt_sta_title_pane_g2

0xeb19,	// (0x00059d3f) bg_dt_sta_title_pane_g3

0x0002,

0xfe9f,	// (0x0005b0c5) bg_dt_sta_title_pane_g

0xc126,	// (0x0005734c) bg_dt_sta_indi_pane_g1

0xeb22,	// (0x00059d48) dt_sta_signal_pane_g1

0xeb2a,	// (0x00059d50) dt_sta_signal_pane_g2

0x0001,

0xfea6,	// (0x0005b0cc) dt_sta_signal_pane_g

0xeb32,	// (0x00059d58) dt_sta_battery_pane_g1

0xeb3b,	// (0x00059d61) dt_sta_battery_pane_t1

0xc126,	// (0x0005734c) bg_dt_sta_control_pane_g1

0x8de1,	// (0x00054007) fep_china_uni_eep_pane

0x8de9,	// (0x0005400f) fep_china_uni_entry_pane_ParamLimits

0x8df9,	// (0x0005401f) popup_fep_china_uni_window_g1_ParamLimits

0x8e09,	// (0x0005402f) popup_fep_china_uni_window_g2_ParamLimits

0x8e09,	// (0x0005402f) popup_fep_china_uni_window_g2

0x0001,

0xf728,	// (0x0005a94e) popup_fep_china_uni_window_g_ParamLimits

0xf728,	// (0x0005a94e) popup_fep_china_uni_window_g

0xeb4a,	// (0x00059d70) fep_china_uni_eep_pane_g1

0xeb52,	// (0x00059d78) fep_china_uni_eep_pane_t1

0xe5d1,	// (0x000597f7) aid_touch_area_size_smil_player

0x97d1,	// (0x000549f7) lc0_clock_pane

0x99aa,	// (0x00054bd0) status_pane_g5_ParamLimits

0x99aa,	// (0x00054bd0) status_pane_g5

0x5c53,	// (0x00050e79) popup_keymap_window

0x9970,	// (0x00054b96) status_icon_pane

0xe7b5,	// (0x000599db) cell_ai5_widget_pane_g3_ParamLimits

0xe7d4,	// (0x000599fa) cell_ai5_widget_pane_g4_ParamLimits

0xe7e0,	// (0x00059a06) cell_ai5_widget_pane_g5_ParamLimits

0xe804,	// (0x00059a2a) cell_ai5_widget_pane_g8_ParamLimits

0xe804,	// (0x00059a2a) cell_ai5_widget_pane_g8

0xe818,	// (0x00059a3e) cell_ai5_widget_pane_g9_ParamLimits

0xe818,	// (0x00059a3e) cell_ai5_widget_pane_g9

0xe82c,	// (0x00059a52) cell_ai5_widget_pane_g10_ParamLimits

0xe82c,	// (0x00059a52) cell_ai5_widget_pane_g10

0xeb61,	// (0x00059d87) status_icon_pane_g1

0x76dc,	// (0x00052902) bg_popup_sub_pane_cp13

0xeb69,	// (0x00059d8f) popup_keymap_window_t1

0x95ae,	// (0x000547d4) control_pane_g6_ParamLimits

0x95ae,	// (0x000547d4) control_pane_g6

0x95bb,	// (0x000547e1) control_pane_g7_ParamLimits

0x95bb,	// (0x000547e1) control_pane_g7

0x95c8,	// (0x000547ee) control_pane_g8_ParamLimits

0x95c8,	// (0x000547ee) control_pane_g8

0xea84,	// (0x00059caa) dt_sta_controll_pane_ParamLimits

0xea91,	// (0x00059cb7) dt_sta_indi_pane_ParamLimits

0xeaa2,	// (0x00059cc8) dt_sta_title_pane_ParamLimits

0x8586,	// (0x000537ac) aid_size_touch_scroll_bar_cale

0x4b6d,	// (0x0004fd93) popup_discreet_window_ParamLimits

0x4b6d,	// (0x0004fd93) popup_discreet_window

0x4bf5,	// (0x0004fe1b) popup_sk_window

0xa194,	// (0x000553ba) bg_popup_sub_pane_cp28_ParamLimits

0xa194,	// (0x000553ba) bg_popup_sub_pane_cp28

0xeb77,	// (0x00059d9d) popup_discreet_window_g1_ParamLimits

0xeb77,	// (0x00059d9d) popup_discreet_window_g1

0xeb97,	// (0x00059dbd) popup_discreet_window_t1_ParamLimits

0xeb97,	// (0x00059dbd) popup_discreet_window_t1

0xebb5,	// (0x00059ddb) popup_discreet_window_t2_ParamLimits

0xebb5,	// (0x00059ddb) popup_discreet_window_t2

0x0002,

0xfeab,	// (0x0005b0d1) popup_discreet_window_t_ParamLimits

0xfeab,	// (0x0005b0d1) popup_discreet_window_t

0x7506,	// (0x0005272c) popup_sk_window_g1

0x7510,	// (0x00052736) popup_sk_window_g2

0x0001,

0xfeb2,	// (0x0005b0d8) popup_sk_window_g

0x751a,	// (0x00052740) popup_sk_window_t1

0x7528,	// (0x0005274e) popup_sk_window_t1_copy1

0xe7a5,	// (0x000599cb) cell_ai5_widget_pane_g2_ParamLimits

0xe903,	// (0x00059b29) cell_ai5_widget_pane_t9_ParamLimits

0xe903,	// (0x00059b29) cell_ai5_widget_pane_t9

0x76dc,	// (0x00052902) main_fep_fshwr2_pane

0x7536,	// (0x0005275c) aid_fshwr2_btn_pane

0x7542,	// (0x00052768) aid_fshwr2_syb_pane

0x7553,	// (0x00052779) aid_fshwr2_txt_pane

0x755f,	// (0x00052785) fshwr2_func_candi_pane

0x7574,	// (0x0005279a) fshwr2_hwr_syb_pane

0x758b,	// (0x000527b1) fshwr2_icf_pane

0x76dc,	// (0x00052902) fshwr2_icf_bg_pane

0xec07,	// (0x00059e2d) fshwr2_icf_pane_t1_ParamLimits

0xec07,	// (0x00059e2d) fshwr2_icf_pane_t1

0xc126,	// (0x0005734c) fshwr2_func_candi_pane_g1

0xec1e,	// (0x00059e44) fshwr2_func_candi_row_pane_ParamLimits

0xec1e,	// (0x00059e44) fshwr2_func_candi_row_pane

0xec2f,	// (0x00059e55) cell_fshwr2_syb_pane_ParamLimits

0xec2f,	// (0x00059e55) cell_fshwr2_syb_pane

0xc3a4,	// (0x000575ca) fshwr2_hwr_syb_pane_g1_ParamLimits

0xc3a4,	// (0x000575ca) fshwr2_hwr_syb_pane_g1

0x76dc,	// (0x00052902) bg_popup_call_pane_cp01

0xec49,	// (0x00059e6f) fshwr2_func_candi_cell_pane_ParamLimits

0xec49,	// (0x00059e6f) fshwr2_func_candi_cell_pane

0xec7a,	// (0x00059ea0) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xec7a,	// (0x00059ea0) fshwr2_func_candi_cell_bg_pane

0xec94,	// (0x00059eba) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xec94,	// (0x00059eba) fshwr2_func_candi_cell_pane_g1

0xecbc,	// (0x00059ee2) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xecbc,	// (0x00059ee2) fshwr2_func_candi_cell_pane_t1

0x76dc,	// (0x00052902) bg_button_pane_cp08

0x92e3,	// (0x00054509) cell_fshwr2_syb_bg_pane

0xeccf,	// (0x00059ef5) cell_fshwr2_syb_bg_pane_g1

0xecd7,	// (0x00059efd) cell_fshwr2_syb_bg_pane_t1

0x865a,	// (0x00053880) main_tmo_pane

0xaca3,	// (0x00055ec9) uni_indicator_pane_g1_ParamLimits

0xacb8,	// (0x00055ede) uni_indicator_pane_g2_ParamLimits

0xacce,	// (0x00055ef4) uni_indicator_pane_g3_ParamLimits

0xace4,	// (0x00055f0a) uni_indicator_pane_g4_ParamLimits

0xace4,	// (0x00055f0a) uni_indicator_pane_g4

0xacf8,	// (0x00055f1e) uni_indicator_pane_g5_ParamLimits

0xacf8,	// (0x00055f1e) uni_indicator_pane_g5

0xad0c,	// (0x00055f32) uni_indicator_pane_g6_ParamLimits

0xad0c,	// (0x00055f32) uni_indicator_pane_g6

0xf92c,	// (0x0005ab52) uni_indicator_pane_g_ParamLimits

0xd60d,	// (0x00058833) popup_tmo_note_window_ParamLimits

0xd60d,	// (0x00058833) popup_tmo_note_window

0x6d86,	// (0x00051fac) fshwr2_bg_pane

0xecad,	// (0x00059ed3) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xecad,	// (0x00059ed3) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeb7,	// (0x0005b0dd) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeb7,	// (0x0005b0dd) fshwr2_func_candi_cell_pane_g

0xc126,	// (0x0005734c) bg_popup_window_pane_cp01

0xece6,	// (0x00059f0c) bg_popup_window_pane_g1_cp01

0xecef,	// (0x00059f15) bg_popup_window_pane_cp22_ParamLimits

0xecef,	// (0x00059f15) bg_popup_window_pane_cp22

0xecfd,	// (0x00059f23) listscroll_tmo_link_pane_ParamLimits

0xecfd,	// (0x00059f23) listscroll_tmo_link_pane

0xed3d,	// (0x00059f63) popup_tmo_note_window_g1_ParamLimits

0xed3d,	// (0x00059f63) popup_tmo_note_window_g1

0xed4a,	// (0x00059f70) tmo_note_info_pane_ParamLimits

0xed4a,	// (0x00059f70) tmo_note_info_pane

0xed64,	// (0x00059f8a) list_tmo_note_info_pane_g1_ParamLimits

0xed64,	// (0x00059f8a) list_tmo_note_info_pane_g1

0xed7b,	// (0x00059fa1) list_tmo_note_info_pane_g2_ParamLimits

0xed7b,	// (0x00059fa1) list_tmo_note_info_pane_g2

0x0001,

0xfebc,	// (0x0005b0e2) list_tmo_note_info_pane_g_ParamLimits

0xfebc,	// (0x0005b0e2) list_tmo_note_info_pane_g

0xed97,	// (0x00059fbd) list_tmo_note_info_text_pane_ParamLimits

0xed97,	// (0x00059fbd) list_tmo_note_info_text_pane

0xee18,	// (0x0005a03e) list_tmo_link_pane

0xee25,	// (0x0005a04b) scroll_pane_cp20

0xee32,	// (0x0005a058) list_single_tmo_link_pane_ParamLimits

0xee32,	// (0x0005a058) list_single_tmo_link_pane

0xee42,	// (0x0005a068) list_single_tmo_link_pane_t1

0xee50,	// (0x0005a076) list_tmo_note_info_text_pane_t1_ParamLimits

0xee50,	// (0x0005a076) list_tmo_note_info_text_pane_t1

0x8708,	// (0x0005392e) aid_size_touch_scroll_bar_cp01_ParamLimits

0x8708,	// (0x0005392e) aid_size_touch_scroll_bar_cp01

0x5330,	// (0x00050556) aid_size_touch_slider_marker

0x4bdd,	// (0x0004fe03) popup_settings_window_ParamLimits

0x4bdd,	// (0x0004fe03) popup_settings_window

0x5ada,	// (0x00050d00) popup_candi_list_indi_window

0x9685,	// (0x000548ab) aid_touch_navi_pane_ParamLimits

0x6ce1,	// (0x00051f07) rs_clock_indi_pane

0x6cea,	// (0x00051f10) sctrl_sk_bottom_pane_ParamLimits

0x6cfb,	// (0x00051f21) sctrl_sk_top_pane_ParamLimits

0x6dfe,	// (0x00052024) popup_fep_tooltip_window

0xe725,	// (0x0005994b) aid_size_cell_widget_grid_ParamLimits

0xe799,	// (0x000599bf) cell_ai5_widget_pane_g1_ParamLimits

0xe799,	// (0x000599bf) cell_ai5_widget_pane_g1

0xe7ec,	// (0x00059a12) cell_ai5_widget_pane_g6_ParamLimits

0xe7f8,	// (0x00059a1e) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe3a,	// (0x0005b060) cell_ai5_widget_pane_g_ParamLimits

0xfe3a,	// (0x0005b060) cell_ai5_widget_pane_g

0xe927,	// (0x00059b4d) cell_ai5_widget_pane_t10_ParamLimits

0xe927,	// (0x00059b4d) cell_ai5_widget_pane_t10

0xe93d,	// (0x00059b63) grid_ai5_widget_pane_ParamLimits

0xe9df,	// (0x00059c05) cell_contacts_ai5_widget_pane_ParamLimits

0xe9df,	// (0x00059c05) cell_contacts_ai5_widget_pane

0xebca,	// (0x00059df0) popup_discreet_window_t3_ParamLimits

0xebca,	// (0x00059df0) popup_discreet_window_t3

0x75a0,	// (0x000527c6) popup_fshwr2_char_preview_window_ParamLimits

0x75a0,	// (0x000527c6) popup_fshwr2_char_preview_window

0xedb5,	// (0x00059fdb) tmo_note_info_pane_t1

0xedca,	// (0x00059ff0) tmo_note_info_pane_t2

0xeddf,	// (0x0005a005) tmo_note_info_pane_t3

0xedf4,	// (0x0005a01a) tmo_note_info_pane_t4

0xee06,	// (0x0005a02c) tmo_note_info_pane_t5

0x0004,

0xfec1,	// (0x0005b0e7) tmo_note_info_pane_t

0xee18,	// (0x0005a03e) list_tmo_link_pane_ParamLimits

0xee25,	// (0x0005a04b) scroll_pane_cp20_ParamLimits

0x76dc,	// (0x00052902) bg_popup_fep_char_preview_window_cp01

0xee69,	// (0x0005a08f) popup_fshwr2_char_preview_window_t1

0xee77,	// (0x0005a09d) popup_candi_list_indi_window_g1

0xee80,	// (0x0005a0a6) bg_cell_contacts_ai5_widget_pane

0xee8c,	// (0x0005a0b2) cell_contacts_ai5_widget_pane_g1

0xeea0,	// (0x0005a0c6) cell_contacts_ai5_widget_pane_g2

0xeeac,	// (0x0005a0d2) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfecc,	// (0x0005b0f2) cell_contacts_ai5_widget_pane_g

0xeebf,	// (0x0005a0e5) cell_contacts_ai5_widget_pane_t1

0x865a,	// (0x00053880) highlight_cell_shortcut_ai5_widget_pane_cp01

0xef36,	// (0x0005a15c) settings_container_pane

0x92e3,	// (0x00054509) listscroll_set_pane_copy1

0xb813,	// (0x00056a39) scroll_pane_cp121_copy1

0xef42,	// (0x0005a168) set_content_pane_copy1

0xef4a,	// (0x0005a170) aid_height_set_list_copy1_ParamLimits

0xef4a,	// (0x0005a170) aid_height_set_list_copy1

0xaf04,	// (0x0005612a) aid_size_parent_copy1_ParamLimits

0xaf04,	// (0x0005612a) aid_size_parent_copy1

0xef56,	// (0x0005a17c) button_value_adjust_pane_cp6_copy1_ParamLimits

0xef56,	// (0x0005a17c) button_value_adjust_pane_cp6_copy1

0x9623,	// (0x00054849) list_highlight_pane_cp2_copy1_ParamLimits

0x9623,	// (0x00054849) list_highlight_pane_cp2_copy1

0xef6a,	// (0x0005a190) list_set_pane_copy1_ParamLimits

0xef6a,	// (0x0005a190) list_set_pane_copy1

0xeed1,	// (0x0005a0f7) main_pane_set_t1_copy1_ParamLimits

0xeed1,	// (0x0005a0f7) main_pane_set_t1_copy1

0xef0b,	// (0x0005a131) main_pane_set_t2_copy1_ParamLimits

0xef0b,	// (0x0005a131) main_pane_set_t2_copy1

0xf017,	// (0x0005a23d) main_pane_set_t3_copy1

0xf025,	// (0x0005a24b) main_pane_set_t4_copy1

0xef2a,	// (0x0005a150) set_content_pane_g1_copy1_ParamLimits

0xef2a,	// (0x0005a150) set_content_pane_g1_copy1

0xf033,	// (0x0005a259) setting_code_pane_copy1

0xf03b,	// (0x0005a261) setting_slider_graphic_pane_copy1

0xf03b,	// (0x0005a261) setting_slider_pane_copy1

0xf03b,	// (0x0005a261) setting_text_pane_copy1

0xf03b,	// (0x0005a261) setting_volume_pane_copy1

0xf033,	// (0x0005a259) settings_code_pane_cp2_copy1

0xf043,	// (0x0005a269) settings_code_pane_cp_copy1_ParamLimits

0xf043,	// (0x0005a269) settings_code_pane_cp_copy1

0x75b4,	// (0x000527da) volume_set_pane_copy1

0xf057,	// (0x0005a27d) volume_set_pane_g10_copy1

0xf05f,	// (0x0005a285) volume_set_pane_g1_copy1

0xf067,	// (0x0005a28d) volume_set_pane_g2_copy1

0xf06f,	// (0x0005a295) volume_set_pane_g3_copy1

0xf077,	// (0x0005a29d) volume_set_pane_g4_copy1

0xf07f,	// (0x0005a2a5) volume_set_pane_g5_copy1

0xf087,	// (0x0005a2ad) volume_set_pane_g6_copy1

0xf08f,	// (0x0005a2b5) volume_set_pane_g7_copy1

0xf097,	// (0x0005a2bd) volume_set_pane_g8_copy1

0xf09f,	// (0x0005a2c5) volume_set_pane_g9_copy1

0x77d0,	// (0x000529f6) bg_set_opt_pane_cp_copy1_ParamLimits

0x77d0,	// (0x000529f6) bg_set_opt_pane_cp_copy1

0x75bc,	// (0x000527e2) setting_slider_pane_t1_copy1_ParamLimits

0x75bc,	// (0x000527e2) setting_slider_pane_t1_copy1

0x75da,	// (0x00052800) setting_slider_pane_t2_copy1_ParamLimits

0x75da,	// (0x00052800) setting_slider_pane_t2_copy1

0x75f4,	// (0x0005281a) setting_slider_pane_t3_copy1_ParamLimits

0x75f4,	// (0x0005281a) setting_slider_pane_t3_copy1

0x760c,	// (0x00052832) slider_set_pane_copy1_ParamLimits

0x760c,	// (0x00052832) slider_set_pane_copy1

0x86a9,	// (0x000538cf) set_opt_bg_pane_g1_copy2

0x86b1,	// (0x000538d7) set_opt_bg_pane_g2_copy2

0xf0a7,	// (0x0005a2cd) set_opt_bg_pane_g3_copy2

0x86c1,	// (0x000538e7) set_opt_bg_pane_g4_copy2

0x86c9,	// (0x000538ef) set_opt_bg_pane_g5_copy2

0x86d1,	// (0x000538f7) set_opt_bg_pane_g6_copy2

0xf0b1,	// (0x0005a2d7) set_opt_bg_pane_g7_copy2

0xf0b9,	// (0x0005a2df) set_opt_bg_pane_g8_copy2

0xf0c3,	// (0x0005a2e9) set_opt_bg_pane_g9_copy2

0xf0cd,	// (0x0005a2f3) aid_size_touch_slider_mark_copy1_ParamLimits

0xf0cd,	// (0x0005a2f3) aid_size_touch_slider_mark_copy1

0xf0e1,	// (0x0005a307) slider_set_pane_g1_copy1

0xf0ea,	// (0x0005a310) slider_set_pane_g2_copy1

0xb3b7,	// (0x000565dd) slider_set_pane_g3_copy1_ParamLimits

0xb3b7,	// (0x000565dd) slider_set_pane_g3_copy1

0xb3cb,	// (0x000565f1) slider_set_pane_g4_copy1_ParamLimits

0xb3cb,	// (0x000565f1) slider_set_pane_g4_copy1

0xb3e3,	// (0x00056609) slider_set_pane_g5_copy1_ParamLimits

0xb3e3,	// (0x00056609) slider_set_pane_g5_copy1

0xb3b7,	// (0x000565dd) slider_set_pane_g6_copy1_ParamLimits

0xb3b7,	// (0x000565dd) slider_set_pane_g6_copy1

0xf0f2,	// (0x0005a318) slider_set_pane_g7_copy1_ParamLimits

0xf0f2,	// (0x0005a318) slider_set_pane_g7_copy1

0x76f0,	// (0x00052916) bg_set_opt_pane_cp2_copy1

0xf108,	// (0x0005a32e) setting_slider_graphic_pane_g1_copy1

0xf111,	// (0x0005a337) setting_slider_graphic_pane_t1_copy1

0xf121,	// (0x0005a347) setting_slider_graphic_pane_t2_copy1

0xf131,	// (0x0005a357) slider_set_pane_cp_copy1

0xf141,	// (0x0005a367) input_focus_pane_cp1_copy1

0xf14a,	// (0x0005a370) list_set_text_pane_copy1

0xf152,	// (0x0005a378) setting_text_pane_g1_copy1

0x3eab,	// (0x0004f0d1) set_text_pane_t1_copy1

0xf141,	// (0x0005a367) input_focus_pane_cp2_copy1

0xf152,	// (0x0005a378) setting_code_pane_g1_copy1

0xf15b,	// (0x0005a381) setting_code_pane_t1_copy1

0xf169,	// (0x0005a38f) list_set_graphic_pane_copy1

0x76f0,	// (0x00052916) bg_set_opt_pane_cp4_copy1

0x8fe9,	// (0x0005420f) list_set_graphic_pane_g1_copy1_ParamLimits

0x8fe9,	// (0x0005420f) list_set_graphic_pane_g1_copy1

0xf17b,	// (0x0005a3a1) list_set_graphic_pane_g2_copy1

0x9001,	// (0x00054227) list_set_graphic_pane_t1_copy1_ParamLimits

0x9001,	// (0x00054227) list_set_graphic_pane_t1_copy1

0xc126,	// (0x0005734c) rs_clock_indi_pane_g1

0xf183,	// (0x0005a3a9) rs_clock_indi_pane_t1

0xf191,	// (0x0005a3b7) rs_indi_pane

0xf199,	// (0x0005a3bf) rs_indi_pane_g1

0xf1a2,	// (0x0005a3c8) rs_indi_pane_g2

0xf1ab,	// (0x0005a3d1) rs_indi_pane_g3

0x0002,

0xfed3,	// (0x0005b0f9) rs_indi_pane_g

0x92e3,	// (0x00054509) bg_popup_preview_window_pane_cp03

0xf1b4,	// (0x0005a3da) popup_fep_tooltip_window_t1

0xcdae,	// (0x00057fd4) popup_note2_window_g2_ParamLimits

0xcdae,	// (0x00057fd4) popup_note2_window_g2

0x0001,

0xfc6c,	// (0x0005ae92) popup_note2_window_g_ParamLimits

0xfc6c,	// (0x0005ae92) popup_note2_window_g

0xd2a9,	// (0x000584cf) bg_popup_sub_pane_cp11_ParamLimits

0xd2b6,	// (0x000584dc) cell_ai3_links_pane_g1_ParamLimits

0xd2cd,	// (0x000584f3) cell_ai3_links_pane_t1

0x3eab,	// (0x0004f0d1) set_text_pane_t1_copy1_ParamLimits

0x91f4,	// (0x0005441a) cell_graphic_popup_pane_cp2_ParamLimits

0x91f4,	// (0x0005441a) cell_graphic_popup_pane_cp2

0xf1c2,	// (0x0005a3e8) cell_graphic_popup_pane_g1_cp2

0x8399,	// (0x000535bf) cell_graphic_popup_pane_g2_cp2

0xf1ca,	// (0x0005a3f0) cell_graphic_popup_pane_g3_cp2

0xf1d2,	// (0x0005a3f8) cell_graphic_popup_pane_t2_cp2

0x83aa,	// (0x000535d0) grid_highlight_pane_cp3_cp2

0x89ee,	// (0x00053c14) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x865a,	// (0x00053880) main_tmo_pane_ParamLimits

0xd601,	// (0x00058827) popup_tmo_big_image_note_window

0xe789,	// (0x000599af) cell_ai5_widget_list_pane

0xe791,	// (0x000599b7) cell_ai5_widget_lrg_icon_pane

0xedb5,	// (0x00059fdb) tmo_note_info_pane_t1_ParamLimits

0xedca,	// (0x00059ff0) tmo_note_info_pane_t2_ParamLimits

0xeddf,	// (0x0005a005) tmo_note_info_pane_t3_ParamLimits

0xedf4,	// (0x0005a01a) tmo_note_info_pane_t4_ParamLimits

0xee06,	// (0x0005a02c) tmo_note_info_pane_t5_ParamLimits

0xfec1,	// (0x0005b0e7) tmo_note_info_pane_t_ParamLimits

0xef36,	// (0x0005a15c) settings_container_pane_ParamLimits

0xf139,	// (0x0005a35f) indicator_popup_pane_cp5

0xf139,	// (0x0005a35f) indicator_popup_pane_cp6

0xf169,	// (0x0005a38f) list_set_graphic_pane_copy1_ParamLimits

0x76dc,	// (0x00052902) bg_popup_window_pane_cp23

0xf1e0,	// (0x0005a406) popup_tmo_big_image_note_window_g1

0xf1ea,	// (0x0005a410) popup_tmo_big_image_note_window_t1

0xf1fa,	// (0x0005a420) popup_tmo_big_image_note_window_t2

0xf20a,	// (0x0005a430) popup_tmo_big_image_note_window_t3

0x0002,

0xfeda,	// (0x0005b100) popup_tmo_big_image_note_window_t

0xf21a,	// (0x0005a440) cell_ai5_widget_lrg_icon_pane_g1

0xf222,	// (0x0005a448) cell_ai5_widget_lrg_icon_pane_t1

0xf230,	// (0x0005a456) cell_ai5_widget_list_row_pane_ParamLimits

0xf230,	// (0x0005a456) cell_ai5_widget_list_row_pane

0xf248,	// (0x0005a46e) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf248,	// (0x0005a46e) cell_ai5_widget_list_row_pane_g1

0xf255,	// (0x0005a47b) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf255,	// (0x0005a47b) cell_ai5_widget_list_row_pane_t1

0xf26d,	// (0x0005a493) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf26d,	// (0x0005a493) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfee1,	// (0x0005b107) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfee1,	// (0x0005b107) cell_ai5_widget_list_row_pane_t

0x4a94,	// (0x0004fcba) main_fep_vtchi_ss_pane

0x7631,	// (0x00052857) popup_fep_char_pre_window

0x7639,	// (0x0005285f) popup_fep_ituss_window

0x765a,	// (0x00052880) popup_fep_vkbss_window

0xf295,	// (0x0005a4bb) grid_vkbss_keypad_pane_ParamLimits

0xf295,	// (0x0005a4bb) grid_vkbss_keypad_pane

0xf2a5,	// (0x0005a4cb) ituss_keypad_pane

0x7685,	// (0x000528ab) aid_vkbss_key_offset_ParamLimits

0x7685,	// (0x000528ab) aid_vkbss_key_offset

0x7691,	// (0x000528b7) cell_vkbss_key_pane_ParamLimits

0x7691,	// (0x000528b7) cell_vkbss_key_pane

0xf2b5,	// (0x0005a4db) bg_cell_vkbss_key_g1_ParamLimits

0xf2b5,	// (0x0005a4db) bg_cell_vkbss_key_g1

0xf2c1,	// (0x0005a4e7) cell_vkbss_key_3p_pane_ParamLimits

0xf2c1,	// (0x0005a4e7) cell_vkbss_key_3p_pane

0xf2db,	// (0x0005a501) cell_vkbss_key_g1_ParamLimits

0xf2db,	// (0x0005a501) cell_vkbss_key_g1

0xf2f5,	// (0x0005a51b) cell_vkbss_key_t1_ParamLimits

0xf2f5,	// (0x0005a51b) cell_vkbss_key_t1

0x76a7,	// (0x000528cd) cell_ituss_key_pane_ParamLimits

0x76a7,	// (0x000528cd) cell_ituss_key_pane

0xf320,	// (0x0005a546) bg_cell_ituss_key_g1_ParamLimits

0xf320,	// (0x0005a546) bg_cell_ituss_key_g1

0xf32c,	// (0x0005a552) cell_ituss_key_pane_g1_ParamLimits

0xf32c,	// (0x0005a552) cell_ituss_key_pane_g1

0xf346,	// (0x0005a56c) cell_ituss_key_pane_g2_ParamLimits

0xf346,	// (0x0005a56c) cell_ituss_key_pane_g2

0x0001,

0xfee8,	// (0x0005b10e) cell_ituss_key_pane_g_ParamLimits

0xfee8,	// (0x0005b10e) cell_ituss_key_pane_g

0xf374,	// (0x0005a59a) cell_ituss_key_t1_ParamLimits

0xf374,	// (0x0005a59a) cell_ituss_key_t1

0xf3aa,	// (0x0005a5d0) cell_ituss_key_t2_ParamLimits

0xf3aa,	// (0x0005a5d0) cell_ituss_key_t2

0xf3db,	// (0x0005a601) cell_ituss_key_t3_ParamLimits

0xf3db,	// (0x0005a601) cell_ituss_key_t3

0xf415,	// (0x0005a63b) cell_ituss_key_t4_ParamLimits

0xf415,	// (0x0005a63b) cell_ituss_key_t4

0x0003,

0xfeed,	// (0x0005b113) cell_ituss_key_t_ParamLimits

0xfeed,	// (0x0005b113) cell_ituss_key_t

0xf44f,	// (0x0005a675) cell_vkbss_key_3p_pane_g1

0xf457,	// (0x0005a67d) cell_vkbss_key_3p_pane_g2

0xf45f,	// (0x0005a685) cell_vkbss_key_3p_pane_g3

0x0002,

0xfef6,	// (0x0005b11c) cell_vkbss_key_3p_pane_g

0x76dc,	// (0x00052902) bg_popup_fep_char_preview_window_cp02

0xf467,	// (0x0005a68d) popup_fep_char_pre_window_t1

0xe71b,	// (0x00059941) main_ai5_sk_pane

0xee80,	// (0x0005a0a6) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xee8c,	// (0x0005a0b2) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xeea0,	// (0x0005a0c6) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xeeac,	// (0x0005a0d2) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfecc,	// (0x0005b0f2) cell_contacts_ai5_widget_pane_g_ParamLimits

0xeebf,	// (0x0005a0e5) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x865a,	// (0x00053880) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf476,	// (0x0005a69c) main_ai5_sk_pane_g1

0x9fcd,	// (0x000551f3) popup_query_code_window_g1

0x764f,	// (0x00052875) popup_fep_vkb_icf_pane

0x7663,	// (0x00052889) popup_fep_vtchi_icf_pane

0x865a,	// (0x00053880) bg_icf_pane

0xf47f,	// (0x0005a6a5) list_vkb_icf_pane

0x865a,	// (0x00053880) bg_icf_pane_cp01

0xf48b,	// (0x0005a6b1) vtchi_icf_list_pane

0xf49c,	// (0x0005a6c2) list_vkb_icf_pane_t1_ParamLimits

0xf49c,	// (0x0005a6c2) list_vkb_icf_pane_t1

0xf4b2,	// (0x0005a6d8) vtchi_icf_list_pane_t1_ParamLimits

0xf4b2,	// (0x0005a6d8) vtchi_icf_list_pane_t1

0x7639,	// (0x0005285f) popup_fep_ituss_window_ParamLimits

0x7663,	// (0x00052889) popup_fep_vtchi_icf_pane_ParamLimits

0xf2a5,	// (0x0005a4cb) ituss_keypad_pane_ParamLimits

0x7679,	// (0x0005289f) ituss_sks_pane

0x865a,	// (0x00053880) bg_icf_pane_ParamLimits

0x7622,	// (0x00052848) icf_edit_indi_pane_ParamLimits

0x7622,	// (0x00052848) icf_edit_indi_pane

0xf47f,	// (0x0005a6a5) list_vkb_icf_pane_ParamLimits

0x865a,	// (0x00053880) bg_icf_pane_cp01_ParamLimits

0x7622,	// (0x00052848) icf_edit_indi_pane_cp01_ParamLimits

0x7622,	// (0x00052848) icf_edit_indi_pane_cp01

0xf493,	// (0x0005a6b9) vtchi_query_pane

0xc3a4,	// (0x000575ca) icf_edit_indi_pane_g1_ParamLimits

0xc3a4,	// (0x000575ca) icf_edit_indi_pane_g1

0xf537,	// (0x0005a75d) icf_edit_indi_pane_g2_ParamLimits

0xf537,	// (0x0005a75d) icf_edit_indi_pane_g2

0x0001,

0xff0e,	// (0x0005b134) icf_edit_indi_pane_g_ParamLimits

0xff0e,	// (0x0005b134) icf_edit_indi_pane_g

0xf546,	// (0x0005a76c) icf_edit_indi_pane_t1

0xf4cd,	// (0x0005a6f3) bg_input_focus_pane_cp042

0x857d,	// (0x000537a3) vtchi_button_pane

0xf4d6,	// (0x0005a6fc) vtchi_query_pane_t1

0xf4e4,	// (0x0005a70a) vtchi_query_pane_t2

0xf4f2,	// (0x0005a718) vtchi_query_pane_t3

0x0002,

0xfefd,	// (0x0005b123) vtchi_query_pane_t

0x76dc,	// (0x00052902) bg_button_pane_cp13

0xf500,	// (0x0005a726) vtchi_button_pane_g1

0xf508,	// (0x0005a72e) ituss_sks_pane_g1

0xf513,	// (0x0005a739) ituss_sks_pane_g2

0x0001,

0xff04,	// (0x0005b12a) ituss_sks_pane_g

0xf51b,	// (0x0005a741) ituss_sks_pane_t1

0xf529,	// (0x0005a74f) ituss_sks_pane_t2

0x0001,

0xff09,	// (0x0005b12f) ituss_sks_pane_t

0xbb9d,	// (0x00056dc3) indicator_nsta_pane_cp_g1

0xbba6,	// (0x00056dcc) indicator_nsta_pane_cp_g2

0xbbae,	// (0x00056dd4) indicator_nsta_pane_cp_g3

0xbbb6,	// (0x00056ddc) indicator_nsta_pane_cp_g4

0xbbb6,	// (0x00056ddc) indicator_nsta_pane_cp_g5

0xbbb6,	// (0x00056ddc) indicator_nsta_pane_cp_g6

0x0005,

0xfaaa,	// (0x0005acd0) indicator_nsta_pane_cp_g

0xe301,	// (0x00059527) cell_graphic2_pane_t2_ParamLimits

0xe301,	// (0x00059527) cell_graphic2_pane_t2

0x0001,

0xfdc3,	// (0x0005afe9) cell_graphic2_pane_t_ParamLimits

0xfdc3,	// (0x0005afe9) cell_graphic2_pane_t

0xe32e,	// (0x00059554) cell_graphic2_control_pane_t1

0x8d90,	// (0x00053fb6) signal_pane_g3_ParamLimits

0x8d90,	// (0x00053fb6) signal_pane_g3

0x8da2,	// (0x00053fc8) signal_pane_g4_ParamLimits

0x8da2,	// (0x00053fc8) signal_pane_g4

0xf27f,	// (0x0005a4a5) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf27f,	// (0x0005a4a5) cell_ai5_widget_list_row_pane_t3

0xf362,	// (0x0005a588) cell_ituss_key_pane_t1_ParamLimits

0xf362,	// (0x0005a588) cell_ituss_key_pane_t1

0x9c20,	// (0x00054e46) form_field_data_wide_pane_vc_t2_ParamLimits

0x9c20,	// (0x00054e46) form_field_data_wide_pane_vc_t2

0x9c34,	// (0x00054e5a) form_field_data_wide_pane_vc_t3_ParamLimits

0x9c34,	// (0x00054e5a) form_field_data_wide_pane_vc_t3

0x0002,

0xf814,	// (0x0005aa3a) form_field_data_wide_pane_vc_t_ParamLimits

0xf814,	// (0x0005aa3a) form_field_data_wide_pane_vc_t

0xb855,	// (0x00056a7b) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb855,	// (0x00056a7b) form_field_slider_wide_pane_vc_t3

0xb933,	// (0x00056b59) form_field_popup_wide_pane_vc_t2_ParamLimits

0xb933,	// (0x00056b59) form_field_popup_wide_pane_vc_t2

0xb94a,	// (0x00056b70) form_field_popup_wide_pane_vc_t3_ParamLimits

0xb94a,	// (0x00056b70) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa99,	// (0x0005acbf) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa99,	// (0x0005acbf) form_field_popup_wide_pane_vc_t

0x7536,	// (0x0005275c) aid_fshwr2_btn_pane_ParamLimits

0x7542,	// (0x00052768) aid_fshwr2_syb_pane_ParamLimits

0x7553,	// (0x00052779) aid_fshwr2_txt_pane_ParamLimits

0x6d86,	// (0x00051fac) fshwr2_bg_pane_ParamLimits

0x755f,	// (0x00052785) fshwr2_func_candi_pane_ParamLimits

0x7574,	// (0x0005279a) fshwr2_hwr_syb_pane_ParamLimits

0x758b,	// (0x000527b1) fshwr2_icf_pane_ParamLimits
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

} // end of namespace AknLayoutScalable_Abrw_php_av_qhd_prt_tch_Large

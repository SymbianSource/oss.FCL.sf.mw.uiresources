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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0000bb73 };

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
0x6b1b,	// (0x0001268e) Screen

0x6b27,	// (0x0001269a) application_window_ParamLimits

0x6b27,	// (0x0001269a) application_window

0x3acf,	// (0x0000f642) screen_g1

0x4512,	// (0x00010085) area_bottom_pane_ParamLimits

0x4512,	// (0x00010085) area_bottom_pane

0x45d2,	// (0x00010145) area_top_pane_ParamLimits

0x45d2,	// (0x00010145) area_top_pane

0x4670,	// (0x000101e3) main_pane_ParamLimits

0x4670,	// (0x000101e3) main_pane

0x6b37,	// (0x000126aa) misc_graphics

0x8ccc,	// (0x0001483f) battery_pane_ParamLimits

0x8ccc,	// (0x0001483f) battery_pane

0x9aaf,	// (0x00015622) bg_status_flat_pane_g8

0x9ab7,	// (0x0001562a) bg_status_flat_pane_g9

0x8d94,	// (0x00014907) context_pane_ParamLimits

0x8d94,	// (0x00014907) context_pane

0x8eaa,	// (0x00014a1d) navi_pane_ParamLimits

0x8eaa,	// (0x00014a1d) navi_pane

0x8f2e,	// (0x00014aa1) signal_pane_ParamLimits

0x8f2e,	// (0x00014aa1) signal_pane

0x0008,

0xf84a,	// (0x0001b3bd) bg_status_flat_pane_g

0x8f9b,	// (0x00014b0e) status_pane_g1_ParamLimits

0x8f9b,	// (0x00014b0e) status_pane_g1

0x8faf,	// (0x00014b22) status_pane_g2_ParamLimits

0x8faf,	// (0x00014b22) status_pane_g2

0x8fbb,	// (0x00014b2e) status_pane_g3_ParamLimits

0x8fbb,	// (0x00014b2e) status_pane_g3

0x0004,

0xf776,	// (0x0001b2e9) status_pane_g_ParamLimits

0xf776,	// (0x0001b2e9) status_pane_g

0x8fef,	// (0x00014b62) title_pane_ParamLimits

0x8fef,	// (0x00014b62) title_pane

0x902c,	// (0x00014b9f) uni_indicator_pane_ParamLimits

0x902c,	// (0x00014b9f) uni_indicator_pane

0x8bec,	// (0x0001475f) bg_list_pane_ParamLimits

0x8bec,	// (0x0001475f) bg_list_pane

0x8c0c,	// (0x0001477f) find_pane

0x8c14,	// (0x00014787) listscroll_app_pane_ParamLimits

0x8c14,	// (0x00014787) listscroll_app_pane

0x8c20,	// (0x00014793) listscroll_form_pane

0x4f51,	// (0x00010ac4) listscroll_gen_pane_ParamLimits

0x4f51,	// (0x00010ac4) listscroll_gen_pane

0x4f65,	// (0x00010ad8) listscroll_set_pane

0x7d8c,	// (0x000138ff) main_idle_act_pane

0x88e8,	// (0x0001445b) main_idle_trad_pane

0x88e8,	// (0x0001445b) main_list_empty_pane

0x8c14,	// (0x00014787) main_midp_pane

0x8c3a,	// (0x000147ad) main_pane_g1_ParamLimits

0x8c3a,	// (0x000147ad) main_pane_g1

0x4f7b,	// (0x00010aee) popup_ai_message_window_ParamLimits

0x4f7b,	// (0x00010aee) popup_ai_message_window

0x5021,	// (0x00010b94) popup_fep_china_uni_window_ParamLimits

0x5021,	// (0x00010b94) popup_fep_china_uni_window

0x507d,	// (0x00010bf0) popup_fep_japan_candidate_window_ParamLimits

0x507d,	// (0x00010bf0) popup_fep_japan_candidate_window

0x509d,	// (0x00010c10) popup_fep_japan_predictive_window_ParamLimits

0x509d,	// (0x00010c10) popup_fep_japan_predictive_window

0x50cd,	// (0x00010c40) popup_find_window

0x50da,	// (0x00010c4d) popup_grid_graphic_window_ParamLimits

0x50da,	// (0x00010c4d) popup_grid_graphic_window

0x5106,	// (0x00010c79) popup_large_graphic_colour_window

0x512c,	// (0x00010c9f) popup_menu_window_ParamLimits

0x512c,	// (0x00010c9f) popup_menu_window

0x52e4,	// (0x00010e57) popup_note_image_window

0x52d0,	// (0x00010e43) popup_note_wait_window_ParamLimits

0x52d0,	// (0x00010e43) popup_note_wait_window

0x52d0,	// (0x00010e43) popup_note_window_ParamLimits

0x52d0,	// (0x00010e43) popup_note_window

0x533a,	// (0x00010ead) popup_query_code_window_ParamLimits

0x533a,	// (0x00010ead) popup_query_code_window

0x534e,	// (0x00010ec1) popup_query_data_code_window_ParamLimits

0x534e,	// (0x00010ec1) popup_query_data_code_window

0x536b,	// (0x00010ede) popup_query_data_window_ParamLimits

0x536b,	// (0x00010ede) popup_query_data_window

0x5387,	// (0x00010efa) popup_query_sat_info_window_ParamLimits

0x5387,	// (0x00010efa) popup_query_sat_info_window

0x53c0,	// (0x00010f33) popup_snote_single_graphic_window_ParamLimits

0x53c0,	// (0x00010f33) popup_snote_single_graphic_window

0x53c0,	// (0x00010f33) popup_snote_single_text_window_ParamLimits

0x53c0,	// (0x00010f33) popup_snote_single_text_window

0x53d5,	// (0x00010f48) popup_sub_window_general

0x5505,	// (0x00011078) popup_window_general_ParamLimits

0x5505,	// (0x00011078) popup_window_general

0x8c50,	// (0x000147c3) power_save_pane

0x4dd7,	// (0x0001094a) control_pane_g1_ParamLimits

0x4dd7,	// (0x0001094a) control_pane_g1

0x4dfe,	// (0x00010971) control_pane_g2_ParamLimits

0x4dfe,	// (0x00010971) control_pane_g2

0x8baf,	// (0x00014722) control_pane_g3_ParamLimits

0x8baf,	// (0x00014722) control_pane_g3

0x0007,

0xf75e,	// (0x0001b2d1) control_pane_g_ParamLimits

0xf75e,	// (0x0001b2d1) control_pane_g

0x4e48,	// (0x000109bb) control_pane_t1_ParamLimits

0x4e48,	// (0x000109bb) control_pane_t1

0x4e9e,	// (0x00010a11) control_pane_t2_ParamLimits

0x4e9e,	// (0x00010a11) control_pane_t2

0x0002,

0xf76f,	// (0x0001b2e2) control_pane_t_ParamLimits

0xf76f,	// (0x0001b2e2) control_pane_t

0x8ad4,	// (0x00014647) navi_navi_volume_pane_cp1

0x8adc,	// (0x0001464f) status_small_icon_pane

0x8ae4,	// (0x00014657) status_small_pane_g1_ParamLimits

0x8ae4,	// (0x00014657) status_small_pane_g1

0x8b18,	// (0x0001468b) status_small_pane_g2_ParamLimits

0x8b18,	// (0x0001468b) status_small_pane_g2

0x8b24,	// (0x00014697) status_small_pane_g3_ParamLimits

0x8b24,	// (0x00014697) status_small_pane_g3

0x8b30,	// (0x000146a3) status_small_pane_g4_ParamLimits

0x8b30,	// (0x000146a3) status_small_pane_g4

0x8b3c,	// (0x000146af) status_small_pane_g5_ParamLimits

0x8b3c,	// (0x000146af) status_small_pane_g5

0x8b4a,	// (0x000146bd) status_small_pane_g6_ParamLimits

0x8b4a,	// (0x000146bd) status_small_pane_g6

0x0007,

0xf74d,	// (0x0001b2c0) status_small_pane_g_ParamLimits

0xf74d,	// (0x0001b2c0) status_small_pane_g

0x8b79,	// (0x000146ec) status_small_pane_t1

0x8b9b,	// (0x0001470e) status_small_wait_pane_ParamLimits

0x8b9b,	// (0x0001470e) status_small_wait_pane

0x82cb,	// (0x00013e3e) aid_levels_signal_ParamLimits

0x82cb,	// (0x00013e3e) aid_levels_signal

0x82dd,	// (0x00013e50) signal_pane_g1_ParamLimits

0x82dd,	// (0x00013e50) signal_pane_g1

0x82f2,	// (0x00013e65) signal_pane_g2_ParamLimits

0x82f2,	// (0x00013e65) signal_pane_g2

0x0003,

0xf6de,	// (0x0001b251) signal_pane_g_ParamLimits

0xf6de,	// (0x0001b251) signal_pane_g

0x832d,	// (0x00013ea0) context_pane_g1

0x6b41,	// (0x000126b4) title_pane_g1

0x6b77,	// (0x000126ea) title_pane_t1

0x6bdf,	// (0x00012752) title_pane_t2

0x6c05,	// (0x00012778) title_pane_t3

0x0002,

0xf532,	// (0x0001b0a5) title_pane_t

0x9044,	// (0x00014bb7) aid_levels_battery_ParamLimits

0x9044,	// (0x00014bb7) aid_levels_battery

0x9058,	// (0x00014bcb) battery_pane_g1_ParamLimits

0x9058,	// (0x00014bcb) battery_pane_g1

0x906e,	// (0x00014be1) battery_pane_g2_ParamLimits

0x906e,	// (0x00014be1) battery_pane_g2

0x0001,

0xf781,	// (0x0001b2f4) battery_pane_g_ParamLimits

0xf781,	// (0x0001b2f4) battery_pane_g

0xa3e5,	// (0x00015f58) uni_indicator_pane_g1

0xa3fb,	// (0x00015f6e) uni_indicator_pane_g2

0xa411,	// (0x00015f84) uni_indicator_pane_g3

0x0005,

0xf8f2,	// (0x0001b465) uni_indicator_pane_g

0x875d,	// (0x000142d0) navi_icon_pane_ParamLimits

0x875d,	// (0x000142d0) navi_icon_pane

0x869b,	// (0x0001420e) navi_midp_pane

0x8779,	// (0x000142ec) navi_navi_pane

0x8783,	// (0x000142f6) navi_text_pane_ParamLimits

0x8783,	// (0x000142f6) navi_text_pane

0x3acf,	// (0x0000f642) status_small_wait_pane_g1

0x7074,	// (0x00012be7) status_small_wait_pane_g2

0x0001,

0xf8ed,	// (0x0001b460) status_small_wait_pane_g

0xa10a,	// (0x00015c7d) navi_navi_icon_text_pane

0xa112,	// (0x00015c85) navi_navi_pane_g1_ParamLimits

0xa112,	// (0x00015c85) navi_navi_pane_g1

0xa124,	// (0x00015c97) navi_navi_pane_g2_ParamLimits

0xa124,	// (0x00015c97) navi_navi_pane_g2

0x0001,

0xf8bb,	// (0x0001b42e) navi_navi_pane_g_ParamLimits

0xf8bb,	// (0x0001b42e) navi_navi_pane_g

0xa136,	// (0x00015ca9) navi_navi_tabs_pane

0xa13f,	// (0x00015cb2) navi_navi_text_pane

0xa10a,	// (0x00015c7d) navi_navi_volume_pane

0xa0e6,	// (0x00015c59) navi_text_pane_t1

0xa0da,	// (0x00015c4d) navi_icon_pane_g1

0xa02d,	// (0x00015ba0) navi_navi_text_pane_t1

0x581d,	// (0x00011390) navi_navi_volume_pane_g1

0x5825,	// (0x00011398) volume_small_pane

0x9f93,	// (0x00015b06) navi_navi_icon_text_pane_g1

0x9f9b,	// (0x00015b0e) navi_navi_icon_text_pane_t1

0x8779,	// (0x000142ec) navi_tabs_2_long_pane

0x8779,	// (0x000142ec) navi_tabs_2_pane

0x8779,	// (0x000142ec) navi_tabs_3_long_pane

0x8779,	// (0x000142ec) navi_tabs_3_pane

0x8779,	// (0x000142ec) navi_tabs_4_pane

0x57fd,	// (0x00011370) tabs_2_active_pane_ParamLimits

0x57fd,	// (0x00011370) tabs_2_active_pane

0x580d,	// (0x00011380) tabs_2_passive_pane_ParamLimits

0x580d,	// (0x00011380) tabs_2_passive_pane

0x57cb,	// (0x0001133e) tabs_3_active_pane_ParamLimits

0x57cb,	// (0x0001133e) tabs_3_active_pane

0x57db,	// (0x0001134e) tabs_3_passive_pane_ParamLimits

0x57db,	// (0x0001134e) tabs_3_passive_pane

0x57ec,	// (0x0001135f) tabs_3_passive_pane_cp_ParamLimits

0x57ec,	// (0x0001135f) tabs_3_passive_pane_cp

0x5787,	// (0x000112fa) tabs_4_active_pane_ParamLimits

0x5787,	// (0x000112fa) tabs_4_active_pane

0x5798,	// (0x0001130b) tabs_4_passive_pane_ParamLimits

0x5798,	// (0x0001130b) tabs_4_passive_pane

0x57a9,	// (0x0001131c) tabs_4_passive_pane_cp_ParamLimits

0x57a9,	// (0x0001131c) tabs_4_passive_pane_cp

0x57ba,	// (0x0001132d) tabs_4_passive_pane_cp2_ParamLimits

0x57ba,	// (0x0001132d) tabs_4_passive_pane_cp2

0x5763,	// (0x000112d6) tabs_2_long_active_pane_ParamLimits

0x5763,	// (0x000112d6) tabs_2_long_active_pane

0x5775,	// (0x000112e8) tabs_2_long_passive_pane_ParamLimits

0x5775,	// (0x000112e8) tabs_2_long_passive_pane

0x5724,	// (0x00011297) tabs_3_long_active_pane_ParamLimits

0x5724,	// (0x00011297) tabs_3_long_active_pane

0x5737,	// (0x000112aa) tabs_3_long_passive_pane_ParamLimits

0x5737,	// (0x000112aa) tabs_3_long_passive_pane

0x5750,	// (0x000112c3) tabs_3_long_passive_pane_cp_ParamLimits

0x5750,	// (0x000112c3) tabs_3_long_passive_pane_cp

0x56ca,	// (0x0001123d) volume_small_pane_g1

0x56d3,	// (0x00011246) volume_small_pane_g2

0x56dc,	// (0x0001124f) volume_small_pane_g3

0x56e5,	// (0x00011258) volume_small_pane_g4

0x56ee,	// (0x00011261) volume_small_pane_g5

0x56f7,	// (0x0001126a) volume_small_pane_g6

0x5700,	// (0x00011273) volume_small_pane_g7

0x5709,	// (0x0001127c) volume_small_pane_g8

0x5712,	// (0x00011285) volume_small_pane_g9

0x571b,	// (0x0001128e) volume_small_pane_g10

0x0009,

0xf887,	// (0x0001b3fa) volume_small_pane_g

0x6c17,	// (0x0001278a) bg_active_tab_pane_cp2_ParamLimits

0x6c17,	// (0x0001278a) bg_active_tab_pane_cp2

0x6c25,	// (0x00012798) tabs_3_active_pane_g1

0x6c2d,	// (0x000127a0) tabs_3_active_pane_t1

0x6c17,	// (0x0001278a) bg_passive_tab_pane_cp2_ParamLimits

0x6c17,	// (0x0001278a) bg_passive_tab_pane_cp2

0x6c25,	// (0x00012798) tabs_3_passive_pane_g1

0x6c2d,	// (0x000127a0) tabs_3_passive_pane_t1

0x6c17,	// (0x0001278a) bg_active_tab_pane_cp3_ParamLimits

0x6c17,	// (0x0001278a) bg_active_tab_pane_cp3

0x6c3f,	// (0x000127b2) tabs_4_active_pane_g1

0x6c47,	// (0x000127ba) tabs_4_active_pane_t1

0x6c17,	// (0x0001278a) bg_passive_tab_pane_cp3_ParamLimits

0x6c17,	// (0x0001278a) bg_passive_tab_pane_cp3

0x6c3f,	// (0x000127b2) tabs_4_1_passive_pane_g1

0x6c47,	// (0x000127ba) tabs_4_1_passive_pane_t1

0x8c14,	// (0x00014787) list_highlight_pane_cp2

0xa66a,	// (0x000161dd) list_set_pane_ParamLimits

0xa66a,	// (0x000161dd) list_set_pane

0xa710,	// (0x00016283) main_pane_set_t1_ParamLimits

0xa710,	// (0x00016283) main_pane_set_t1

0xa730,	// (0x000162a3) main_pane_set_t2_ParamLimits

0xa730,	// (0x000162a3) main_pane_set_t2

0xa744,	// (0x000162b7) main_pane_set_t3_ParamLimits

0xa744,	// (0x000162b7) main_pane_set_t3

0xa756,	// (0x000162c9) main_pane_set_t4_ParamLimits

0xa756,	// (0x000162c9) main_pane_set_t4

0x0003,

0xf957,	// (0x0001b4ca) main_pane_set_t_ParamLimits

0xf957,	// (0x0001b4ca) main_pane_set_t

0xa768,	// (0x000162db) setting_code_pane

0xa774,	// (0x000162e7) setting_slider_graphic_pane

0xa774,	// (0x000162e7) setting_slider_pane

0xa774,	// (0x000162e7) setting_text_pane

0xa774,	// (0x000162e7) setting_volume_pane

0x48bf,	// (0x00010432) volume_set_pane

0x6c17,	// (0x0001278a) bg_set_opt_pane_cp

0x48c7,	// (0x0001043a) setting_slider_pane_t1

0x48e0,	// (0x00010453) setting_slider_pane_t2

0x48fa,	// (0x0001046d) setting_slider_pane_t3

0x0002,

0xf539,	// (0x0001b0ac) setting_slider_pane_t

0x4912,	// (0x00010485) slider_set_pane

0x6b37,	// (0x000126aa) bg_set_opt_pane_cp2

0x6c59,	// (0x000127cc) setting_slider_graphic_pane_g1

0x4928,	// (0x0001049b) setting_slider_graphic_pane_t1

0x4938,	// (0x000104ab) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x0001b0b3) setting_slider_graphic_pane_t

0x4948,	// (0x000104bb) slider_set_pane_cp

0x6b37,	// (0x000126aa) input_focus_pane_cp1

0xa629,	// (0x0001619c) list_set_text_pane

0x3acf,	// (0x0000f642) setting_text_pane_g1

0x6b37,	// (0x000126aa) input_focus_pane_cp2

0x3acf,	// (0x0000f642) setting_code_pane_g1

0x6c62,	// (0x000127d5) setting_code_pane_t1

0x6c70,	// (0x000127e3) set_text_pane_t1_ParamLimits

0x6c70,	// (0x000127e3) set_text_pane_t1

0x7b44,	// (0x000136b7) set_opt_bg_pane_g1

0x7b4c,	// (0x000136bf) set_opt_bg_pane_g2

0xa603,	// (0x00016176) set_opt_bg_pane_g3

0x7b5c,	// (0x000136cf) set_opt_bg_pane_g4

0x7b64,	// (0x000136d7) set_opt_bg_pane_g5

0x7b6c,	// (0x000136df) set_opt_bg_pane_g6

0xa60d,	// (0x00016180) set_opt_bg_pane_g7

0xa615,	// (0x00016188) set_opt_bg_pane_g8

0xa61f,	// (0x00016192) set_opt_bg_pane_g9

0x0008,

0xf944,	// (0x0001b4b7) set_opt_bg_pane_g

0xa5f6,	// (0x00016169) slider_set_pane_g1

0x5892,	// (0x00011405) slider_set_pane_g2

0x0006,

0xf935,	// (0x0001b4a8) slider_set_pane_g

0x582e,	// (0x000113a1) volume_set_pane_g1

0x5836,	// (0x000113a9) volume_set_pane_g2

0x583e,	// (0x000113b1) volume_set_pane_g3

0x5846,	// (0x000113b9) volume_set_pane_g4

0x584e,	// (0x000113c1) volume_set_pane_g5

0x5856,	// (0x000113c9) volume_set_pane_g6

0x585e,	// (0x000113d1) volume_set_pane_g7

0x5866,	// (0x000113d9) volume_set_pane_g8

0x586e,	// (0x000113e1) volume_set_pane_g9

0x5876,	// (0x000113e9) volume_set_pane_g10

0x0009,

0xf90d,	// (0x0001b480) volume_set_pane_g

0x6c8a,	// (0x000127fd) indicator_pane_ParamLimits

0x6c8a,	// (0x000127fd) indicator_pane

0x6c96,	// (0x00012809) main_idle_pane_g2_ParamLimits

0x6c96,	// (0x00012809) main_idle_pane_g2

0x6cbe,	// (0x00012831) main_pane_idle_g1_ParamLimits

0x6cbe,	// (0x00012831) main_pane_idle_g1

0x6ccb,	// (0x0001283e) popup_clock_digital_analogue_window_ParamLimits

0x6ccb,	// (0x0001283e) popup_clock_digital_analogue_window

0x6ce2,	// (0x00012855) soft_indicator_pane_ParamLimits

0x6ce2,	// (0x00012855) soft_indicator_pane

0x6cee,	// (0x00012861) wallpaper_pane_ParamLimits

0x6cee,	// (0x00012861) wallpaper_pane

0x3acf,	// (0x0000f642) wallpaper_pane_g1

0x6d02,	// (0x00012875) indicator_pane_g1_ParamLimits

0x6d02,	// (0x00012875) indicator_pane_g1

0xab15,	// (0x00016688) navi_navi_icon_text_pane_srt_g1

0x6d1d,	// (0x00012890) soft_indicator_pane_t1

0x6d37,	// (0x000128aa) aid_ps_area_pane

0x6d48,	// (0x000128bb) aid_ps_clock_pane

0x6d56,	// (0x000128c9) aid_ps_indicator_pane

0x6d62,	// (0x000128d5) indicator_ps_pane_ParamLimits

0x6d62,	// (0x000128d5) indicator_ps_pane

0x6d71,	// (0x000128e4) power_save_pane_g1_ParamLimits

0x6d71,	// (0x000128e4) power_save_pane_g1

0x6d7d,	// (0x000128f0) power_save_pane_g2_ParamLimits

0x6d7d,	// (0x000128f0) power_save_pane_g2

0x44c6,	// (0x00010039) aid_navinavi_width_pane

0x6d37,	// (0x000128aa) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x0001b0b8) power_save_pane_g_ParamLimits

0xf545,	// (0x0001b0b8) power_save_pane_g

0x6d8b,	// (0x000128fe) power_save_pane_t1_ParamLimits

0x6d8b,	// (0x000128fe) power_save_pane_t1

0x6d48,	// (0x000128bb) aid_ps_clock_pane_ParamLimits

0x6d56,	// (0x000128c9) aid_ps_indicator_pane_ParamLimits

0x6d9d,	// (0x00012910) power_save_pane_t4_ParamLimits

0x6d9d,	// (0x00012910) power_save_pane_t4

0x0001,

0xf54a,	// (0x0001b0bd) power_save_pane_t_ParamLimits

0xf54a,	// (0x0001b0bd) power_save_pane_t

0x6dc7,	// (0x0001293a) power_save_t3_ParamLimits

0x6dc7,	// (0x0001293a) power_save_t3

0x6db2,	// (0x00012925) power_save_t2_ParamLimits

0x6db2,	// (0x00012925) power_save_t2

0x6ddc,	// (0x0001294f) indicator_ps_pane_g1

0x6de5,	// (0x00012958) ai_gene_pane_ParamLimits

0x6de5,	// (0x00012958) ai_gene_pane

0x6df1,	// (0x00012964) ai_links_pane_ParamLimits

0x6df1,	// (0x00012964) ai_links_pane

0x6dfd,	// (0x00012970) indicator_pane_cp1_ParamLimits

0x6dfd,	// (0x00012970) indicator_pane_cp1

0x6e09,	// (0x0001297c) main_pane_idle_g1_cp_ParamLimits

0x6e09,	// (0x0001297c) main_pane_idle_g1_cp

0x6e15,	// (0x00012988) popup_ai_links_title_window

0x6e1e,	// (0x00012991) soft_indicator_pane_cp1_ParamLimits

0x6e1e,	// (0x00012991) soft_indicator_pane_cp1

0xa3d3,	// (0x00015f46) ai_links_pane_g1

0xa3dc,	// (0x00015f4f) grid_ai_links_pane

0xa3b6,	// (0x00015f29) ai_gene_pane_1

0xa3c1,	// (0x00015f34) ai_gene_pane_2

0xa3ca,	// (0x00015f3d) list_highlight_pane_cp4

0xa39a,	// (0x00015f0d) cell_ai_link_pane_ParamLimits

0xa39a,	// (0x00015f0d) cell_ai_link_pane

0xa392,	// (0x00015f05) cell_ai_link_pane_g1

0x7074,	// (0x00012be7) cell_ai_link_pane_g2

0x0001,

0xf8e8,	// (0x0001b45b) cell_ai_link_pane_g

0x6b37,	// (0x000126aa) grid_highlight_cp2

0x6b37,	// (0x000126aa) bg_popup_sub_pane_cp1

0x6e38,	// (0x000129ab) popup_ai_links_title_window_t1

0xa2e0,	// (0x00015e53) ai_gene_pane_1_g1_ParamLimits

0xa2e0,	// (0x00015e53) ai_gene_pane_1_g1

0xa2ec,	// (0x00015e5f) ai_gene_pane_1_g2_ParamLimits

0xa2ec,	// (0x00015e5f) ai_gene_pane_1_g2

0x0001,

0xf8de,	// (0x0001b451) ai_gene_pane_1_g_ParamLimits

0xf8de,	// (0x0001b451) ai_gene_pane_1_g

0xa2f9,	// (0x00015e6c) ai_gene_pane_1_t1_ParamLimits

0xa2f9,	// (0x00015e6c) ai_gene_pane_1_t1

0xa32d,	// (0x00015ea0) grid_ai_soft_ind_pane

0xa2cb,	// (0x00015e3e) ai_gene_pane_2_t1_ParamLimits

0xa2cb,	// (0x00015e3e) ai_gene_pane_2_t1

0x6e47,	// (0x000129ba) main_pane_empty_t1_ParamLimits

0x6e47,	// (0x000129ba) main_pane_empty_t1

0x6e5f,	// (0x000129d2) main_pane_empty_t2_ParamLimits

0x6e5f,	// (0x000129d2) main_pane_empty_t2

0x6e74,	// (0x000129e7) main_pane_empty_t3_ParamLimits

0x6e74,	// (0x000129e7) main_pane_empty_t3

0x6e86,	// (0x000129f9) main_pane_empty_t4_ParamLimits

0x6e86,	// (0x000129f9) main_pane_empty_t4

0x6e98,	// (0x00012a0b) main_pane_empty_t5_ParamLimits

0x6e98,	// (0x00012a0b) main_pane_empty_t5

0x0004,

0xf54f,	// (0x0001b0c2) main_pane_empty_t_ParamLimits

0xf54f,	// (0x0001b0c2) main_pane_empty_t

0x7cb7,	// (0x0001382a) bg_popup_window_pane_ParamLimits

0x7cb7,	// (0x0001382a) bg_popup_window_pane

0xa03b,	// (0x00015bae) find_popup_pane_cp2_ParamLimits

0xa03b,	// (0x00015bae) find_popup_pane_cp2

0xa047,	// (0x00015bba) heading_pane_ParamLimits

0xa047,	// (0x00015bba) heading_pane

0x6b37,	// (0x000126aa) bg_popup_sub_pane

0x9fb5,	// (0x00015b28) bg_popup_window_pane_g1_ParamLimits

0x9fb5,	// (0x00015b28) bg_popup_window_pane_g1

0x9fc1,	// (0x00015b34) bg_popup_window_pane_g2_ParamLimits

0x9fc1,	// (0x00015b34) bg_popup_window_pane_g2

0x9fcd,	// (0x00015b40) bg_popup_window_pane_g3_ParamLimits

0x9fcd,	// (0x00015b40) bg_popup_window_pane_g3

0x9fd9,	// (0x00015b4c) bg_popup_window_pane_g4_ParamLimits

0x9fd9,	// (0x00015b4c) bg_popup_window_pane_g4

0x9fe5,	// (0x00015b58) bg_popup_window_pane_g5_ParamLimits

0x9fe5,	// (0x00015b58) bg_popup_window_pane_g5

0x9ff1,	// (0x00015b64) bg_popup_window_pane_g6_ParamLimits

0x9ff1,	// (0x00015b64) bg_popup_window_pane_g6

0x9ffd,	// (0x00015b70) bg_popup_window_pane_g7_ParamLimits

0x9ffd,	// (0x00015b70) bg_popup_window_pane_g7

0xa009,	// (0x00015b7c) bg_popup_window_pane_g8_ParamLimits

0xa009,	// (0x00015b7c) bg_popup_window_pane_g8

0xa015,	// (0x00015b88) bg_popup_window_pane_g9_ParamLimits

0xa015,	// (0x00015b88) bg_popup_window_pane_g9

0xa021,	// (0x00015b94) bg_popup_window_pane_g10_ParamLimits

0xa021,	// (0x00015b94) bg_popup_window_pane_g10

0x0009,

0xf8a6,	// (0x0001b419) bg_popup_window_pane_g_ParamLimits

0xf8a6,	// (0x0001b419) bg_popup_window_pane_g

0x9f4a,	// (0x00015abd) bg_popup_heading_pane_ParamLimits

0x9f4a,	// (0x00015abd) bg_popup_heading_pane

0x591a,	// (0x0001148d) tabs_4_passive_pane_cp_srt_ParamLimits

0x591a,	// (0x0001148d) tabs_4_passive_pane_cp_srt

0x592c,	// (0x0001149f) tabs_4_passive_pane_srt_ParamLimits

0x9f5e,	// (0x00015ad1) heading_pane_g2

0x592c,	// (0x0001149f) tabs_4_passive_pane_srt

0x8c14,	// (0x00014787) bg_passive_tab_pane_cp3_srt_ParamLimits

0x8c14,	// (0x00014787) bg_passive_tab_pane_cp3_srt

0x9f66,	// (0x00015ad9) heading_pane_t1_ParamLimits

0x9f66,	// (0x00015ad9) heading_pane_t1

0x9f7d,	// (0x00015af0) heading_pane_t2_ParamLimits

0x9f7d,	// (0x00015af0) heading_pane_t2

0x0001,

0xf8a1,	// (0x0001b414) heading_pane_t_ParamLimits

0xf8a1,	// (0x0001b414) heading_pane_t

0x9a77,	// (0x000155ea) bg_popup_heading_pane_g1

0x9b26,	// (0x00015699) bg_popup_heading_pane_g2

0x9b30,	// (0x000156a3) bg_popup_heading_pane_g3

0x9b3a,	// (0x000156ad) bg_popup_heading_pane_g4

0x9b44,	// (0x000156b7) bg_popup_heading_pane_g5

0x9b4e,	// (0x000156c1) bg_popup_heading_pane_g6

0x9b56,	// (0x000156c9) bg_popup_heading_pane_g7

0x9b5e,	// (0x000156d1) bg_popup_heading_pane_g8

0x9b68,	// (0x000156db) bg_popup_heading_pane_g9

0x0008,

0xf85d,	// (0x0001b3d0) bg_popup_heading_pane_g

0x915c,	// (0x00014ccf) bg_popup_sub_pane_g1

0x916c,	// (0x00014cdf) bg_popup_sub_pane_g2

0x9164,	// (0x00014cd7) bg_popup_sub_pane_g3

0x917c,	// (0x00014cef) bg_popup_sub_pane_g4

0x9174,	// (0x00014ce7) bg_popup_sub_pane_g5

0x9184,	// (0x00014cf7) bg_popup_sub_pane_g6

0x918c,	// (0x00014cff) bg_popup_sub_pane_g7

0x919c,	// (0x00014d0f) bg_popup_sub_pane_g8

0x9194,	// (0x00014d07) bg_popup_sub_pane_g9

0x0008,

0xf837,	// (0x0001b3aa) bg_popup_sub_pane_g

0x6eac,	// (0x00012a1f) bg_popup_window_pane_cp5_ParamLimits

0x6eac,	// (0x00012a1f) bg_popup_window_pane_cp5

0x6ec8,	// (0x00012a3b) popup_note_window_g1_ParamLimits

0x6ec8,	// (0x00012a3b) popup_note_window_g1

0x6ed4,	// (0x00012a47) popup_note_window_t1_ParamLimits

0x6ed4,	// (0x00012a47) popup_note_window_t1

0x6eea,	// (0x00012a5d) popup_note_window_t2_ParamLimits

0x6eea,	// (0x00012a5d) popup_note_window_t2

0x6f00,	// (0x00012a73) popup_note_window_t3_ParamLimits

0x6f00,	// (0x00012a73) popup_note_window_t3

0x6f16,	// (0x00012a89) popup_note_window_t4_ParamLimits

0x6f16,	// (0x00012a89) popup_note_window_t4

0x6f3e,	// (0x00012ab1) popup_note_window_t5_ParamLimits

0x6f3e,	// (0x00012ab1) popup_note_window_t5

0x0004,

0xf55a,	// (0x0001b0cd) popup_note_window_t_ParamLimits

0xf55a,	// (0x0001b0cd) popup_note_window_t

0x6f88,	// (0x00012afb) bg_popup_window_pane_cp6_ParamLimits

0x6f88,	// (0x00012afb) bg_popup_window_pane_cp6

0x99f3,	// (0x00015566) popup_note_image_window_g1_ParamLimits

0x99f3,	// (0x00015566) popup_note_image_window_g1

0x99ff,	// (0x00015572) popup_note_image_window_g2_ParamLimits

0x99ff,	// (0x00015572) popup_note_image_window_g2

0x0001,

0xf82b,	// (0x0001b39e) popup_note_image_window_g_ParamLimits

0xf82b,	// (0x0001b39e) popup_note_image_window_g

0x9a18,	// (0x0001558b) popup_note_image_window_t1_ParamLimits

0x9a18,	// (0x0001558b) popup_note_image_window_t1

0x9a31,	// (0x000155a4) popup_note_image_window_t2_ParamLimits

0x9a31,	// (0x000155a4) popup_note_image_window_t2

0x9a4a,	// (0x000155bd) popup_note_image_window_t3_ParamLimits

0x9a4a,	// (0x000155bd) popup_note_image_window_t3

0x0002,

0xf830,	// (0x0001b3a3) popup_note_image_window_t_ParamLimits

0xf830,	// (0x0001b3a3) popup_note_image_window_t

0x98b4,	// (0x00015427) bg_popup_window_pane_cp7_ParamLimits

0x98b4,	// (0x00015427) bg_popup_window_pane_cp7

0x98e4,	// (0x00015457) popup_note_wait_window_g1_ParamLimits

0x98e4,	// (0x00015457) popup_note_wait_window_g1

0x98f0,	// (0x00015463) popup_note_wait_window_g2_ParamLimits

0x98f0,	// (0x00015463) popup_note_wait_window_g2

0x0002,

0xf819,	// (0x0001b38c) popup_note_wait_window_g_ParamLimits

0xf819,	// (0x0001b38c) popup_note_wait_window_g

0x9908,	// (0x0001547b) popup_note_wait_window_t1_ParamLimits

0x9908,	// (0x0001547b) popup_note_wait_window_t1

0x992f,	// (0x000154a2) popup_note_wait_window_t2_ParamLimits

0x992f,	// (0x000154a2) popup_note_wait_window_t2

0x994c,	// (0x000154bf) popup_note_wait_window_t3_ParamLimits

0x994c,	// (0x000154bf) popup_note_wait_window_t3

0x995f,	// (0x000154d2) popup_note_wait_window_t4_ParamLimits

0x995f,	// (0x000154d2) popup_note_wait_window_t4

0x0004,

0xf820,	// (0x0001b393) popup_note_wait_window_t_ParamLimits

0xf820,	// (0x0001b393) popup_note_wait_window_t

0x9984,	// (0x000154f7) wait_bar_pane_ParamLimits

0x9984,	// (0x000154f7) wait_bar_pane

0x6b37,	// (0x000126aa) wait_anim_pane

0x6b37,	// (0x000126aa) wait_border_pane

0x3acf,	// (0x0000f642) wait_anim_pane_g1

0x3acf,	// (0x0000f642) wait_anim_pane_g2

0x0001,

0xf6d9,	// (0x0001b24c) wait_anim_pane_g

0x9858,	// (0x000153cb) wait_border_pane_g1

0x9863,	// (0x000153d6) wait_border_pane_g2

0x986c,	// (0x000153df) wait_border_pane_g3

0x0002,

0xf812,	// (0x0001b385) wait_border_pane_g

0x96c3,	// (0x00015236) bg_popup_window_pane_cp16_ParamLimits

0x96c3,	// (0x00015236) bg_popup_window_pane_cp16

0x97c3,	// (0x00015336) indicator_popup_pane_cp4_ParamLimits

0x97c3,	// (0x00015336) indicator_popup_pane_cp4

0x97d7,	// (0x0001534a) popup_query_data_window_t1_ParamLimits

0x97d7,	// (0x0001534a) popup_query_data_window_t1

0x97e9,	// (0x0001535c) popup_query_data_window_t2_ParamLimits

0x97e9,	// (0x0001535c) popup_query_data_window_t2

0x9802,	// (0x00015375) popup_query_data_window_t3_ParamLimits

0x9802,	// (0x00015375) popup_query_data_window_t3

0x0002,

0xf80b,	// (0x0001b37e) popup_query_data_window_t_ParamLimits

0xf80b,	// (0x0001b37e) popup_query_data_window_t

0x981c,	// (0x0001538f) query_popup_data_pane_ParamLimits

0x981c,	// (0x0001538f) query_popup_data_pane

0x9830,	// (0x000153a3) query_popup_data_pane_cp1_ParamLimits

0x9830,	// (0x000153a3) query_popup_data_pane_cp1

0x96c3,	// (0x00015236) bg_popup_window_pane_cp10_ParamLimits

0x96c3,	// (0x00015236) bg_popup_window_pane_cp10

0x96f5,	// (0x00015268) indicator_popup_pane_ParamLimits

0x96f5,	// (0x00015268) indicator_popup_pane

0x9717,	// (0x0001528a) popup_query_code_window_t1_ParamLimits

0x9717,	// (0x0001528a) popup_query_code_window_t1

0x9731,	// (0x000152a4) popup_query_code_window_t2_ParamLimits

0x9731,	// (0x000152a4) popup_query_code_window_t2

0x977a,	// (0x000152ed) popup_query_code_window_t3_ParamLimits

0x977a,	// (0x000152ed) popup_query_code_window_t3

0x0002,

0xf804,	// (0x0001b377) popup_query_code_window_t_ParamLimits

0xf804,	// (0x0001b377) popup_query_code_window_t

0x97a9,	// (0x0001531c) query_popup_pane_ParamLimits

0x97a9,	// (0x0001531c) query_popup_pane

0x6f88,	// (0x00012afb) bg_popup_window_pane_cp15_ParamLimits

0x6f88,	// (0x00012afb) bg_popup_window_pane_cp15

0x6fa6,	// (0x00012b19) indicator_popup_pane_cp1_ParamLimits

0x6fa6,	// (0x00012b19) indicator_popup_pane_cp1

0x6fb9,	// (0x00012b2c) indicator_popup_pane_cp2_ParamLimits

0x6fb9,	// (0x00012b2c) indicator_popup_pane_cp2

0x6fcc,	// (0x00012b3f) popup_query_data_code_window_g1_ParamLimits

0x6fcc,	// (0x00012b3f) popup_query_data_code_window_g1

0x6fdf,	// (0x00012b52) popup_query_data_code_window_t1_ParamLimits

0x6fdf,	// (0x00012b52) popup_query_data_code_window_t1

0x6ff1,	// (0x00012b64) popup_query_data_code_window_t2_ParamLimits

0x6ff1,	// (0x00012b64) popup_query_data_code_window_t2

0x7003,	// (0x00012b76) popup_query_data_code_window_t3_ParamLimits

0x7003,	// (0x00012b76) popup_query_data_code_window_t3

0x7019,	// (0x00012b8c) popup_query_data_code_window_t4_ParamLimits

0x7019,	// (0x00012b8c) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x0001b0d8) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x0001b0d8) popup_query_data_code_window_t

0x55db,	// (0x0001114e) list_single_midp_graphic_pane_g3

0x7031,	// (0x00012ba4) query_popup_data_pane_cp2_ParamLimits

0x7044,	// (0x00012bb7) query_popup_pane_cp2_ParamLimits

0x7044,	// (0x00012bb7) query_popup_pane_cp2

0x6b37,	// (0x000126aa) bg_popup_window_pane_cp11

0x96a7,	// (0x0001521a) heading_pane_cp5

0x96af,	// (0x00015222) listscroll_popup_info_pane

0x6b37,	// (0x000126aa) input_focus_pane_cp3

0x7057,	// (0x00012bca) query_popup_pane_t1

0x7065,	// (0x00012bd8) list_popup_info_pane_ParamLimits

0x7065,	// (0x00012bd8) list_popup_info_pane

0x7074,	// (0x00012be7) listscroll_popup_info_pane_g1

0x707c,	// (0x00012bef) scroll_pane_cp7

0x7086,	// (0x00012bf9) popup_info_list_pane_t1_ParamLimits

0x7086,	// (0x00012bf9) popup_info_list_pane_t1

0x70a0,	// (0x00012c13) popup_info_list_pane_t2_ParamLimits

0x70a0,	// (0x00012c13) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x0001b0e1) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x0001b0e1) popup_info_list_pane_t

0x6b37,	// (0x000126aa) bg_popup_window_pane_cp12

0xab2f,	// (0x000166a2) find_popup_pane

0x6c17,	// (0x0001278a) bg_popup_window_pane_cp3

0x70ba,	// (0x00012c2d) heading_pane_cp3

0x70c9,	// (0x00012c3c) listscroll_popup_graphic_pane

0x6b37,	// (0x000126aa) bg_popup_window_pane_cp4

0x7129,	// (0x00012c9c) heading_pane_cp4

0x7133,	// (0x00012ca6) listscroll_popup_colour_pane

0x713b,	// (0x00012cae) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x713b,	// (0x00012cae) cell_large_graphic_colour_none_popup_pane

0x714f,	// (0x00012cc2) grid_large_graphic_colour_popup_pane_ParamLimits

0x714f,	// (0x00012cc2) grid_large_graphic_colour_popup_pane

0x7173,	// (0x00012ce6) listscroll_popup_colour_pane_g1_ParamLimits

0x7173,	// (0x00012ce6) listscroll_popup_colour_pane_g1

0x718a,	// (0x00012cfd) listscroll_popup_colour_pane_g2_ParamLimits

0x718a,	// (0x00012cfd) listscroll_popup_colour_pane_g2

0x71a1,	// (0x00012d14) listscroll_popup_colour_pane_g3_ParamLimits

0x71a1,	// (0x00012d14) listscroll_popup_colour_pane_g3

0x71b1,	// (0x00012d24) listscroll_popup_colour_pane_g4_ParamLimits

0x71b1,	// (0x00012d24) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x0001b0e6) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x0001b0e6) listscroll_popup_colour_pane_g

0x71c1,	// (0x00012d34) scroll_pane_cp6_ParamLimits

0x71c1,	// (0x00012d34) scroll_pane_cp6

0x71d3,	// (0x00012d46) cell_large_graphic_colour_popup_pane_ParamLimits

0x71d3,	// (0x00012d46) cell_large_graphic_colour_popup_pane

0x71f2,	// (0x00012d65) cell_large_graphic_colour_none_popup_pane_t1

0x6b37,	// (0x000126aa) grid_highlight_pane_cp5

0x7201,	// (0x00012d74) cell_large_graphic_colour_popup_pane_g1

0x7209,	// (0x00012d7c) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x0001b0ef) cell_large_graphic_colour_popup_pane_g

0x7211,	// (0x00012d84) cell_large_graphic_colour_popup_pane_g2_copy1

0x721a,	// (0x00012d8d) grid_highlight_pane_cp4

0x7222,	// (0x00012d95) bg_popup_window_pane_cp8_ParamLimits

0x7222,	// (0x00012d95) bg_popup_window_pane_cp8

0x723d,	// (0x00012db0) popup_snote_single_text_window_g1_ParamLimits

0x723d,	// (0x00012db0) popup_snote_single_text_window_g1

0x724f,	// (0x00012dc2) popup_snote_single_text_window_t1_ParamLimits

0x724f,	// (0x00012dc2) popup_snote_single_text_window_t1

0x7262,	// (0x00012dd5) popup_snote_single_text_window_t2_ParamLimits

0x7262,	// (0x00012dd5) popup_snote_single_text_window_t2

0x7275,	// (0x00012de8) popup_snote_single_text_window_t3_ParamLimits

0x7275,	// (0x00012de8) popup_snote_single_text_window_t3

0x72ae,	// (0x00012e21) popup_snote_single_text_window_t4_ParamLimits

0x72ae,	// (0x00012e21) popup_snote_single_text_window_t4

0x72e2,	// (0x00012e55) popup_snote_single_text_window_t5_ParamLimits

0x72e2,	// (0x00012e55) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x0001b0f4) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x0001b0f4) popup_snote_single_text_window_t

0x7311,	// (0x00012e84) bg_popup_window_pane_cp9_ParamLimits

0x7311,	// (0x00012e84) bg_popup_window_pane_cp9

0x723d,	// (0x00012db0) popup_snote_single_graphic_window_g1_ParamLimits

0x723d,	// (0x00012db0) popup_snote_single_graphic_window_g1

0x731f,	// (0x00012e92) popup_snote_single_graphic_window_g2_ParamLimits

0x731f,	// (0x00012e92) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x0001b0ff) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x0001b0ff) popup_snote_single_graphic_window_g

0x732b,	// (0x00012e9e) popup_snote_single_graphic_window_t1_ParamLimits

0x732b,	// (0x00012e9e) popup_snote_single_graphic_window_t1

0x733e,	// (0x00012eb1) popup_snote_single_graphic_window_t2_ParamLimits

0x733e,	// (0x00012eb1) popup_snote_single_graphic_window_t2

0x7351,	// (0x00012ec4) popup_snote_single_graphic_window_t3_ParamLimits

0x7351,	// (0x00012ec4) popup_snote_single_graphic_window_t3

0x738a,	// (0x00012efd) popup_snote_single_graphic_window_t4_ParamLimits

0x738a,	// (0x00012efd) popup_snote_single_graphic_window_t4

0x73be,	// (0x00012f31) popup_snote_single_graphic_window_t5_ParamLimits

0x73be,	// (0x00012f31) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x0001b104) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x0001b104) popup_snote_single_graphic_window_t

0xaa71,	// (0x000165e4) grid_graphic_popup_pane_ParamLimits

0xaa71,	// (0x000165e4) grid_graphic_popup_pane

0xaa9b,	// (0x0001660e) listscroll_popup_graphic_pane_g1_ParamLimits

0xaa9b,	// (0x0001660e) listscroll_popup_graphic_pane_g1

0xaaaf,	// (0x00016622) listscroll_popup_graphic_pane_g2_ParamLimits

0xaaaf,	// (0x00016622) listscroll_popup_graphic_pane_g2

0x0001,

0xf981,	// (0x0001b4f4) listscroll_popup_graphic_pane_g_ParamLimits

0xf981,	// (0x0001b4f4) listscroll_popup_graphic_pane_g

0xaac3,	// (0x00016636) scroll_pane_cp5

0xaa02,	// (0x00016575) cell_graphic_popup_pane_ParamLimits

0xaa02,	// (0x00016575) cell_graphic_popup_pane

0xa9e3,	// (0x00016556) cell_graphic_popup_pane_g1

0xa9eb,	// (0x0001655e) cell_graphic_popup_pane_g2

0x7211,	// (0x00012d84) cell_graphic_popup_pane_g3

0x0002,

0xf97a,	// (0x0001b4ed) cell_graphic_popup_pane_g

0xa9f4,	// (0x00016567) cell_graphic_popup_pane_t2

0x721a,	// (0x00012d8d) grid_highlight_pane_cp3

0x73ff,	// (0x00012f72) list_gen_pane_ParamLimits

0x73ff,	// (0x00012f72) list_gen_pane

0x7431,	// (0x00012fa4) scroll_pane

0xa92f,	// (0x000164a2) bg_list_pane_g1_ParamLimits

0xa92f,	// (0x000164a2) bg_list_pane_g1

0xa94c,	// (0x000164bf) bg_list_pane_g2_ParamLimits

0xa94c,	// (0x000164bf) bg_list_pane_g2

0xa961,	// (0x000164d4) bg_list_pane_g3_ParamLimits

0xa961,	// (0x000164d4) bg_list_pane_g3

0xa975,	// (0x000164e8) bg_list_pane_g4_ParamLimits

0xa975,	// (0x000164e8) bg_list_pane_g4

0xa989,	// (0x000164fc) bg_list_pane_g5_ParamLimits

0xa989,	// (0x000164fc) bg_list_pane_g5

0x0004,

0xf96f,	// (0x0001b4e2) bg_list_pane_g_ParamLimits

0xf96f,	// (0x0001b4e2) bg_list_pane_g

0xa82d,	// (0x000163a0) list_double2_graphic_large_graphic_pane_ParamLimits

0xa82d,	// (0x000163a0) list_double2_graphic_large_graphic_pane

0xa82d,	// (0x000163a0) list_double2_graphic_pane_ParamLimits

0xa82d,	// (0x000163a0) list_double2_graphic_pane

0xa82d,	// (0x000163a0) list_double2_large_graphic_pane_ParamLimits

0xa82d,	// (0x000163a0) list_double2_large_graphic_pane

0xa82d,	// (0x000163a0) list_double2_pane_ParamLimits

0xa82d,	// (0x000163a0) list_double2_pane

0xa82d,	// (0x000163a0) list_double_graphic_heading_pane_ParamLimits

0xa82d,	// (0x000163a0) list_double_graphic_heading_pane

0xa82d,	// (0x000163a0) list_double_graphic_pane_ParamLimits

0xa82d,	// (0x000163a0) list_double_graphic_pane

0xa82d,	// (0x000163a0) list_double_heading_pane_ParamLimits

0xa82d,	// (0x000163a0) list_double_heading_pane

0xa82d,	// (0x000163a0) list_double_large_graphic_pane_ParamLimits

0xa82d,	// (0x000163a0) list_double_large_graphic_pane

0xa82d,	// (0x000163a0) list_double_number_pane_ParamLimits

0xa82d,	// (0x000163a0) list_double_number_pane

0xa82d,	// (0x000163a0) list_double_pane_ParamLimits

0xa82d,	// (0x000163a0) list_double_pane

0xa82d,	// (0x000163a0) list_double_time_pane_ParamLimits

0xa82d,	// (0x000163a0) list_double_time_pane

0xa82d,	// (0x000163a0) list_setting_number_pane_ParamLimits

0xa82d,	// (0x000163a0) list_setting_number_pane

0xa82d,	// (0x000163a0) list_setting_pane_ParamLimits

0xa82d,	// (0x000163a0) list_setting_pane

0xa896,	// (0x00016409) list_single_2graphic_pane_ParamLimits

0xa896,	// (0x00016409) list_single_2graphic_pane

0xa896,	// (0x00016409) list_single_graphic_heading_pane_ParamLimits

0xa896,	// (0x00016409) list_single_graphic_heading_pane

0xa896,	// (0x00016409) list_single_graphic_pane_ParamLimits

0xa896,	// (0x00016409) list_single_graphic_pane

0xa896,	// (0x00016409) list_single_heading_pane_ParamLimits

0xa896,	// (0x00016409) list_single_heading_pane

0xa90d,	// (0x00016480) list_single_large_graphic_pane_ParamLimits

0xa90d,	// (0x00016480) list_single_large_graphic_pane

0xa896,	// (0x00016409) list_single_number_heading_pane_ParamLimits

0xa896,	// (0x00016409) list_single_number_heading_pane

0xa896,	// (0x00016409) list_single_number_pane_ParamLimits

0xa896,	// (0x00016409) list_single_number_pane

0xa896,	// (0x00016409) list_single_pane_ParamLimits

0xa896,	// (0x00016409) list_single_pane

0x6b37,	// (0x000126aa) list_highlight_pane_cp1

0x7471,	// (0x00012fe4) list_single_pane_g1_ParamLimits

0x7471,	// (0x00012fe4) list_single_pane_g1

0x747d,	// (0x00012ff0) list_single_pane_g2_ParamLimits

0x747d,	// (0x00012ff0) list_single_pane_g2

0x0001,

0xf5a3,	// (0x0001b116) list_single_pane_g_ParamLimits

0xf5a3,	// (0x0001b116) list_single_pane_g

0xa7e6,	// (0x00016359) list_single_pane_t1_ParamLimits

0xa7e6,	// (0x00016359) list_single_pane_t1

0x7471,	// (0x00012fe4) list_single_number_pane_g1_ParamLimits

0x7471,	// (0x00012fe4) list_single_number_pane_g1

0x747d,	// (0x00012ff0) list_single_number_pane_g2_ParamLimits

0x747d,	// (0x00012ff0) list_single_number_pane_g2

0x0001,

0xf5a3,	// (0x0001b116) list_single_number_pane_g_ParamLimits

0xf5a3,	// (0x0001b116) list_single_number_pane_g

0x90ea,	// (0x00014c5d) list_single_number_pane_t1_ParamLimits

0x90ea,	// (0x00014c5d) list_single_number_pane_t1

0xa588,	// (0x000160fb) list_single_number_pane_t2_ParamLimits

0xa588,	// (0x000160fb) list_single_number_pane_t2

0x0001,

0xf930,	// (0x0001b4a3) list_single_number_pane_t_ParamLimits

0xf930,	// (0x0001b4a3) list_single_number_pane_t

0x7465,	// (0x00012fd8) list_single_graphic_pane_g1_ParamLimits

0x7465,	// (0x00012fd8) list_single_graphic_pane_g1

0x7471,	// (0x00012fe4) list_single_graphic_pane_g2_ParamLimits

0x7471,	// (0x00012fe4) list_single_graphic_pane_g2

0x747d,	// (0x00012ff0) list_single_graphic_pane_g3_ParamLimits

0x747d,	// (0x00012ff0) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x0001b10f) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x0001b10f) list_single_graphic_pane_g

0x7489,	// (0x00012ffc) list_single_graphic_pane_t1_ParamLimits

0x7489,	// (0x00012ffc) list_single_graphic_pane_t1

0x7471,	// (0x00012fe4) list_single_heading_pane_g1_ParamLimits

0x7471,	// (0x00012fe4) list_single_heading_pane_g1

0x747d,	// (0x00012ff0) list_single_heading_pane_g2_ParamLimits

0x747d,	// (0x00012ff0) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x0001b116) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x0001b116) list_single_heading_pane_g

0x749f,	// (0x00013012) list_single_heading_pane_t1_ParamLimits

0x749f,	// (0x00013012) list_single_heading_pane_t1

0x74b5,	// (0x00013028) list_single_heading_pane_t2_ParamLimits

0x74b5,	// (0x00013028) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x0001b11b) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x0001b11b) list_single_heading_pane_t

0x7471,	// (0x00012fe4) list_single_number_heading_pane_g1_ParamLimits

0x7471,	// (0x00012fe4) list_single_number_heading_pane_g1

0x747d,	// (0x00012ff0) list_single_number_heading_pane_g2_ParamLimits

0x747d,	// (0x00012ff0) list_single_number_heading_pane_g2

0x0001,

0xf5a3,	// (0x0001b116) list_single_number_heading_pane_g_ParamLimits

0xf5a3,	// (0x0001b116) list_single_number_heading_pane_g

0x749f,	// (0x00013012) list_single_number_heading_pane_t1_ParamLimits

0x749f,	// (0x00013012) list_single_number_heading_pane_t1

0x74c7,	// (0x0001303a) list_single_number_heading_pane_t2_ParamLimits

0x74c7,	// (0x0001303a) list_single_number_heading_pane_t2

0x74d9,	// (0x0001304c) list_single_number_heading_pane_t3_ParamLimits

0x74d9,	// (0x0001304c) list_single_number_heading_pane_t3

0x0002,

0xf5ad,	// (0x0001b120) list_single_number_heading_pane_t_ParamLimits

0xf5ad,	// (0x0001b120) list_single_number_heading_pane_t

0x74eb,	// (0x0001305e) list_single_graphic_heading_pane_g1_ParamLimits

0x74eb,	// (0x0001305e) list_single_graphic_heading_pane_g1

0x74f7,	// (0x0001306a) list_single_graphic_heading_pane_g4_ParamLimits

0x74f7,	// (0x0001306a) list_single_graphic_heading_pane_g4

0x747d,	// (0x00012ff0) list_single_graphic_heading_pane_g5_ParamLimits

0x747d,	// (0x00012ff0) list_single_graphic_heading_pane_g5

0x0002,

0xf5b4,	// (0x0001b127) list_single_graphic_heading_pane_g_ParamLimits

0xf5b4,	// (0x0001b127) list_single_graphic_heading_pane_g

0x749f,	// (0x00013012) list_single_graphic_heading_pane_t1_ParamLimits

0x749f,	// (0x00013012) list_single_graphic_heading_pane_t1

0x7508,	// (0x0001307b) list_single_graphic_heading_pane_t2_ParamLimits

0x7508,	// (0x0001307b) list_single_graphic_heading_pane_t2

0x0001,

0xf5bb,	// (0x0001b12e) list_single_graphic_heading_pane_t_ParamLimits

0xf5bb,	// (0x0001b12e) list_single_graphic_heading_pane_t

0x751a,	// (0x0001308d) list_single_large_graphic_pane_g1_ParamLimits

0x751a,	// (0x0001308d) list_single_large_graphic_pane_g1

0x7471,	// (0x00012fe4) list_single_large_graphic_pane_g2_ParamLimits

0x7471,	// (0x00012fe4) list_single_large_graphic_pane_g2

0x747d,	// (0x00012ff0) list_single_large_graphic_pane_g3_ParamLimits

0x747d,	// (0x00012ff0) list_single_large_graphic_pane_g3

0x0002,

0xf5c0,	// (0x0001b133) list_single_large_graphic_pane_g_ParamLimits

0xf5c0,	// (0x0001b133) list_single_large_graphic_pane_g

0x9863,	// (0x000153d6) wait_border_pane_g2_copy1

0x7526,	// (0x00013099) list_single_large_graphic_pane_g4_cp2

0x752e,	// (0x000130a1) list_single_large_graphic_pane_t1_ParamLimits

0x752e,	// (0x000130a1) list_single_large_graphic_pane_t1

0x7544,	// (0x000130b7) list_double_pane_g1_ParamLimits

0x7544,	// (0x000130b7) list_double_pane_g1

0x7550,	// (0x000130c3) list_double_pane_g2_ParamLimits

0x7550,	// (0x000130c3) list_double_pane_g2

0x0001,

0xf5c7,	// (0x0001b13a) list_double_pane_g_ParamLimits

0xf5c7,	// (0x0001b13a) list_double_pane_g

0x755c,	// (0x000130cf) list_double_pane_t1_ParamLimits

0x755c,	// (0x000130cf) list_double_pane_t1

0x7572,	// (0x000130e5) list_double_pane_t2_ParamLimits

0x7572,	// (0x000130e5) list_double_pane_t2

0x0001,

0xf5cc,	// (0x0001b13f) list_double_pane_t_ParamLimits

0xf5cc,	// (0x0001b13f) list_double_pane_t

0x7584,	// (0x000130f7) list_double2_pane_g1_ParamLimits

0x7584,	// (0x000130f7) list_double2_pane_g1

0x7595,	// (0x00013108) list_double2_pane_g2_ParamLimits

0x7595,	// (0x00013108) list_double2_pane_g2

0x0001,

0xf5d1,	// (0x0001b144) list_double2_pane_g_ParamLimits

0xf5d1,	// (0x0001b144) list_double2_pane_g

0x75a1,	// (0x00013114) list_double2_pane_t1_ParamLimits

0x75a1,	// (0x00013114) list_double2_pane_t1

0x75b7,	// (0x0001312a) list_double2_pane_t2_ParamLimits

0x75b7,	// (0x0001312a) list_double2_pane_t2

0x0001,

0xf5d6,	// (0x0001b149) list_double2_pane_t_ParamLimits

0xf5d6,	// (0x0001b149) list_double2_pane_t

0x7544,	// (0x000130b7) list_double_number_pane_g1_ParamLimits

0x7544,	// (0x000130b7) list_double_number_pane_g1

0x7550,	// (0x000130c3) list_double_number_pane_g2_ParamLimits

0x7550,	// (0x000130c3) list_double_number_pane_g2

0x0001,

0xf5c7,	// (0x0001b13a) list_double_number_pane_g_ParamLimits

0xf5c7,	// (0x0001b13a) list_double_number_pane_g

0x75c9,	// (0x0001313c) list_double_number_pane_t1_ParamLimits

0x75c9,	// (0x0001313c) list_double_number_pane_t1

0x75db,	// (0x0001314e) list_double_number_pane_t2_ParamLimits

0x75db,	// (0x0001314e) list_double_number_pane_t2

0x75f1,	// (0x00013164) list_double_number_pane_t3_ParamLimits

0x75f1,	// (0x00013164) list_double_number_pane_t3

0x0002,

0xf5db,	// (0x0001b14e) list_double_number_pane_t_ParamLimits

0xf5db,	// (0x0001b14e) list_double_number_pane_t

0x7603,	// (0x00013176) list_double_graphic_pane_g1_ParamLimits

0x7603,	// (0x00013176) list_double_graphic_pane_g1

0x760f,	// (0x00013182) list_double_graphic_pane_g2_ParamLimits

0x760f,	// (0x00013182) list_double_graphic_pane_g2

0x761e,	// (0x00013191) list_double_graphic_pane_g3_ParamLimits

0x761e,	// (0x00013191) list_double_graphic_pane_g3

0x0003,

0xf5e2,	// (0x0001b155) list_double_graphic_pane_g_ParamLimits

0xf5e2,	// (0x0001b155) list_double_graphic_pane_g

0x7636,	// (0x000131a9) list_double_graphic_pane_t1_ParamLimits

0x7636,	// (0x000131a9) list_double_graphic_pane_t1

0x764c,	// (0x000131bf) list_double_graphic_pane_t2_ParamLimits

0x764c,	// (0x000131bf) list_double_graphic_pane_t2

0x0001,

0xf5eb,	// (0x0001b15e) list_double_graphic_pane_t_ParamLimits

0xf5eb,	// (0x0001b15e) list_double_graphic_pane_t

0x765e,	// (0x000131d1) list_double2_graphic_pane_g1_ParamLimits

0x765e,	// (0x000131d1) list_double2_graphic_pane_g1

0x766a,	// (0x000131dd) list_double2_graphic_pane_g2_ParamLimits

0x766a,	// (0x000131dd) list_double2_graphic_pane_g2

0x7595,	// (0x00013108) list_double2_graphic_pane_g3_ParamLimits

0x7595,	// (0x00013108) list_double2_graphic_pane_g3

0x0002,

0xf5f0,	// (0x0001b163) list_double2_graphic_pane_g_ParamLimits

0xf5f0,	// (0x0001b163) list_double2_graphic_pane_g

0x7676,	// (0x000131e9) list_double2_graphic_pane_t1_ParamLimits

0x7676,	// (0x000131e9) list_double2_graphic_pane_t1

0x768c,	// (0x000131ff) list_double2_graphic_pane_t2_ParamLimits

0x768c,	// (0x000131ff) list_double2_graphic_pane_t2

0x0001,

0xf5f7,	// (0x0001b16a) list_double2_graphic_pane_t_ParamLimits

0xf5f7,	// (0x0001b16a) list_double2_graphic_pane_t

0x769e,	// (0x00013211) list_double_large_graphic_pane_g1_ParamLimits

0x769e,	// (0x00013211) list_double_large_graphic_pane_g1

0x76bd,	// (0x00013230) list_double_large_graphic_pane_g2_ParamLimits

0x76bd,	// (0x00013230) list_double_large_graphic_pane_g2

0x7550,	// (0x000130c3) list_double_large_graphic_pane_g3_ParamLimits

0x7550,	// (0x000130c3) list_double_large_graphic_pane_g3

0x76ce,	// (0x00013241) list_double_large_graphic_pane_g4_ParamLimits

0x76ce,	// (0x00013241) list_double_large_graphic_pane_g4

0x0004,

0xf5fc,	// (0x0001b16f) list_double_large_graphic_pane_g_ParamLimits

0xf5fc,	// (0x0001b16f) list_double_large_graphic_pane_g

0x76f4,	// (0x00013267) list_double_large_graphic_pane_t1_ParamLimits

0x76f4,	// (0x00013267) list_double_large_graphic_pane_t1

0x770d,	// (0x00013280) list_double_large_graphic_pane_t2_ParamLimits

0x770d,	// (0x00013280) list_double_large_graphic_pane_t2

0x0001,

0xf607,	// (0x0001b17a) list_double_large_graphic_pane_t_ParamLimits

0xf607,	// (0x0001b17a) list_double_large_graphic_pane_t

0x771f,	// (0x00013292) list_double2_large_graphic_pane_g1_ParamLimits

0x771f,	// (0x00013292) list_double2_large_graphic_pane_g1

0x7584,	// (0x000130f7) list_double2_large_graphic_pane_g2_ParamLimits

0x7584,	// (0x000130f7) list_double2_large_graphic_pane_g2

0x7595,	// (0x00013108) list_double2_large_graphic_pane_g3_ParamLimits

0x7595,	// (0x00013108) list_double2_large_graphic_pane_g3

0x0002,

0xf60c,	// (0x0001b17f) list_double2_large_graphic_pane_g_ParamLimits

0xf60c,	// (0x0001b17f) list_double2_large_graphic_pane_g

0x772b,	// (0x0001329e) list_double2_large_graphic_pane_t1_ParamLimits

0x772b,	// (0x0001329e) list_double2_large_graphic_pane_t1

0x7741,	// (0x000132b4) list_double2_large_graphic_pane_t2_ParamLimits

0x7741,	// (0x000132b4) list_double2_large_graphic_pane_t2

0x0001,

0xf613,	// (0x0001b186) list_double2_large_graphic_pane_t_ParamLimits

0xf613,	// (0x0001b186) list_double2_large_graphic_pane_t

0x7753,	// (0x000132c6) list_double_heading_pane_g1_ParamLimits

0x7753,	// (0x000132c6) list_double_heading_pane_g1

0x7764,	// (0x000132d7) list_double_heading_pane_g2_ParamLimits

0x7764,	// (0x000132d7) list_double_heading_pane_g2

0x0001,

0xf618,	// (0x0001b18b) list_double_heading_pane_g_ParamLimits

0xf618,	// (0x0001b18b) list_double_heading_pane_g

0x7770,	// (0x000132e3) list_double_heading_pane_t1_ParamLimits

0x7770,	// (0x000132e3) list_double_heading_pane_t1

0x7786,	// (0x000132f9) list_double_heading_pane_t2_ParamLimits

0x7786,	// (0x000132f9) list_double_heading_pane_t2

0x0001,

0xf61d,	// (0x0001b190) list_double_heading_pane_t_ParamLimits

0xf61d,	// (0x0001b190) list_double_heading_pane_t

0x7603,	// (0x00013176) list_double_graphic_heading_pane_g1_ParamLimits

0x7603,	// (0x00013176) list_double_graphic_heading_pane_g1

0x7753,	// (0x000132c6) list_double_graphic_heading_pane_g2_ParamLimits

0x7753,	// (0x000132c6) list_double_graphic_heading_pane_g2

0x7764,	// (0x000132d7) list_double_graphic_heading_pane_g3_ParamLimits

0x7764,	// (0x000132d7) list_double_graphic_heading_pane_g3

0x0002,

0xf622,	// (0x0001b195) list_double_graphic_heading_pane_g_ParamLimits

0xf622,	// (0x0001b195) list_double_graphic_heading_pane_g

0x7798,	// (0x0001330b) list_double_graphic_heading_pane_t1_ParamLimits

0x7798,	// (0x0001330b) list_double_graphic_heading_pane_t1

0x77ae,	// (0x00013321) list_double_graphic_heading_pane_t2_ParamLimits

0x77ae,	// (0x00013321) list_double_graphic_heading_pane_t2

0x0001,

0xf629,	// (0x0001b19c) list_double_graphic_heading_pane_t_ParamLimits

0xf629,	// (0x0001b19c) list_double_graphic_heading_pane_t

0x76bd,	// (0x00013230) list_double_time_pane_g1_ParamLimits

0x76bd,	// (0x00013230) list_double_time_pane_g1

0x7550,	// (0x000130c3) list_double_time_pane_g2_ParamLimits

0x7550,	// (0x000130c3) list_double_time_pane_g2

0x0001,

0xf62e,	// (0x0001b1a1) list_double_time_pane_g_ParamLimits

0xf62e,	// (0x0001b1a1) list_double_time_pane_g

0x77c0,	// (0x00013333) list_double_time_pane_t1_ParamLimits

0x77c0,	// (0x00013333) list_double_time_pane_t1

0x77d6,	// (0x00013349) list_double_time_pane_t2_ParamLimits

0x77d6,	// (0x00013349) list_double_time_pane_t2

0x77e8,	// (0x0001335b) list_double_time_pane_t3_ParamLimits

0x77e8,	// (0x0001335b) list_double_time_pane_t3

0x77fa,	// (0x0001336d) list_double_time_pane_t4_ParamLimits

0x77fa,	// (0x0001336d) list_double_time_pane_t4

0x0003,

0xf633,	// (0x0001b1a6) list_double_time_pane_t_ParamLimits

0xf633,	// (0x0001b1a6) list_double_time_pane_t

0x766a,	// (0x000131dd) list_setting_pane_g1_ParamLimits

0x766a,	// (0x000131dd) list_setting_pane_g1

0x7595,	// (0x00013108) list_setting_pane_g2_ParamLimits

0x7595,	// (0x00013108) list_setting_pane_g2

0x0001,

0xf63c,	// (0x0001b1af) list_setting_pane_g_ParamLimits

0xf63c,	// (0x0001b1af) list_setting_pane_g

0x780c,	// (0x0001337f) list_setting_pane_t1_ParamLimits

0x780c,	// (0x0001337f) list_setting_pane_t1

0x7823,	// (0x00013396) list_setting_pane_t2_ParamLimits

0x7823,	// (0x00013396) list_setting_pane_t2

0x0002,

0xf641,	// (0x0001b1b4) list_setting_pane_t_ParamLimits

0xf641,	// (0x0001b1b4) list_setting_pane_t

0x7862,	// (0x000133d5) set_value_pane_cp_ParamLimits

0x7862,	// (0x000133d5) set_value_pane_cp

0x766a,	// (0x000131dd) list_setting_number_pane_g1_ParamLimits

0x766a,	// (0x000131dd) list_setting_number_pane_g1

0x7595,	// (0x00013108) list_setting_number_pane_g2_ParamLimits

0x7595,	// (0x00013108) list_setting_number_pane_g2

0x0001,

0xf63c,	// (0x0001b1af) list_setting_number_pane_g_ParamLimits

0xf63c,	// (0x0001b1af) list_setting_number_pane_g

0x786e,	// (0x000133e1) list_setting_number_pane_t1_ParamLimits

0x786e,	// (0x000133e1) list_setting_number_pane_t1

0x7882,	// (0x000133f5) list_setting_number_pane_t2_ParamLimits

0x7882,	// (0x000133f5) list_setting_number_pane_t2

0x7899,	// (0x0001340c) list_setting_number_pane_t3_ParamLimits

0x7899,	// (0x0001340c) list_setting_number_pane_t3

0x0003,

0xf648,	// (0x0001b1bb) list_setting_number_pane_t_ParamLimits

0xf648,	// (0x0001b1bb) list_setting_number_pane_t

0x7862,	// (0x000133d5) set_value_pane_ParamLimits

0x7862,	// (0x000133d5) set_value_pane

0x78dc,	// (0x0001344f) bg_set_opt_pane_ParamLimits

0x78dc,	// (0x0001344f) bg_set_opt_pane

0x78fd,	// (0x00013470) set_value_pane_t1

0x790b,	// (0x0001347e) slider_set_pane_cp3

0x7914,	// (0x00013487) volume_small_pane_cp

0x791d,	// (0x00013490) list_form_gen_pane

0x7926,	// (0x00013499) scroll_pane_cp8

0x793f,	// (0x000134b2) form_field_data_pane_ParamLimits

0x793f,	// (0x000134b2) form_field_data_pane

0x7961,	// (0x000134d4) form_field_data_wide_pane_ParamLimits

0x7961,	// (0x000134d4) form_field_data_wide_pane

0x7984,	// (0x000134f7) form_field_popup_pane_ParamLimits

0x7984,	// (0x000134f7) form_field_popup_pane

0x79a4,	// (0x00013517) form_field_popup_wide_pane_ParamLimits

0x79a4,	// (0x00013517) form_field_popup_wide_pane

0x79c1,	// (0x00013534) form_field_slider_pane_ParamLimits

0x79c1,	// (0x00013534) form_field_slider_pane

0x79d4,	// (0x00013547) form_field_slider_wide_pane_ParamLimits

0x79d4,	// (0x00013547) form_field_slider_wide_pane

0x79e7,	// (0x0001355a) data_form_pane

0x79fd,	// (0x00013570) form_field_data_pane_t1

0x7a15,	// (0x00013588) input_focus_pane

0x7a23,	// (0x00013596) data_form_wide_pane

0x7a5b,	// (0x000135ce) form_field_data_wide_pane_t1

0x722f,	// (0x00012da2) input_focus_pane_cp6

0x7a7a,	// (0x000135ed) form_field_popup_pane_t1

0x7a15,	// (0x00013588) input_focus_pane_cp7

0x7a92,	// (0x00013605) list_form_pane

0x7aa6,	// (0x00013619) form_field_popup_wide_pane_t1

0x7a15,	// (0x00013588) input_focus_pane_cp8

0x7ab8,	// (0x0001362b) list_form_wide_pane

0x7acc,	// (0x0001363f) form_field_slider_pane_t1_ParamLimits

0x7acc,	// (0x0001363f) form_field_slider_pane_t1

0x7ade,	// (0x00013651) form_field_slider_pane_t2_ParamLimits

0x7ade,	// (0x00013651) form_field_slider_pane_t2

0x0001,

0xf658,	// (0x0001b1cb) form_field_slider_pane_t_ParamLimits

0xf658,	// (0x0001b1cb) form_field_slider_pane_t

0x6eac,	// (0x00012a1f) input_focus_pane_cp9_ParamLimits

0x6eac,	// (0x00012a1f) input_focus_pane_cp9

0x7af0,	// (0x00013663) slider_cont_pane_ParamLimits

0x7af0,	// (0x00013663) slider_cont_pane

0x7b04,	// (0x00013677) form_field_slider_wide_pane_t1_ParamLimits

0x7b04,	// (0x00013677) form_field_slider_wide_pane_t1

0x7b16,	// (0x00013689) form_field_slider_wide_pane_t2_ParamLimits

0x7b16,	// (0x00013689) form_field_slider_wide_pane_t2

0x0001,

0xf65d,	// (0x0001b1d0) form_field_slider_wide_pane_t_ParamLimits

0xf65d,	// (0x0001b1d0) form_field_slider_wide_pane_t

0x6eac,	// (0x00012a1f) input_focus_pane_cp10_ParamLimits

0x6eac,	// (0x00012a1f) input_focus_pane_cp10

0x7b28,	// (0x0001369b) slider_cont_pane_cp1_ParamLimits

0x7b28,	// (0x0001369b) slider_cont_pane_cp1

0x7b3c,	// (0x000136af) slider_form_pane_cp

0x7b44,	// (0x000136b7) input_focus_pane_g1

0x7b4c,	// (0x000136bf) input_focus_pane_g2

0x7b54,	// (0x000136c7) input_focus_pane_g3

0x7b5c,	// (0x000136cf) input_focus_pane_g4

0x7b64,	// (0x000136d7) input_focus_pane_g5

0x7b6c,	// (0x000136df) input_focus_pane_g6

0x7b74,	// (0x000136e7) input_focus_pane_g7

0x7b7c,	// (0x000136ef) input_focus_pane_g8

0x7b84,	// (0x000136f7) input_focus_pane_g9

0x3acf,	// (0x0000f642) input_focus_pane_g10

0x0009,

0xf662,	// (0x0001b1d5) input_focus_pane_g

0x986c,	// (0x000153df) wait_border_pane_g3_copy1

0x7b8c,	// (0x000136ff) data_form_pane_t1

0x3acf,	// (0x0000f642) wait_anim_pane_g1_copy1

0xa7c9,	// (0x0001633c) data_form_wide_pane_t1

0x7ba7,	// (0x0001371a) list_form_graphic_pane_cp_ParamLimits

0x7ba7,	// (0x0001371a) list_form_graphic_pane_cp

0xa79e,	// (0x00016311) slider_form_pane_g1

0xa7a7,	// (0x0001631a) slider_form_pane_g2

0x0006,

0xf960,	// (0x0001b4d3) slider_form_pane_g

0x7bc0,	// (0x00013733) list_form_graphic_pane_ParamLimits

0x7bc0,	// (0x00013733) list_form_graphic_pane

0x7bdc,	// (0x0001374f) list_form_graphic_pane_g1

0x7be4,	// (0x00013757) list_form_graphic_pane_t1_ParamLimits

0x7be4,	// (0x00013757) list_form_graphic_pane_t1

0x6c17,	// (0x0001278a) list_highlight_pane_cp5_ParamLimits

0x6c17,	// (0x0001278a) list_highlight_pane_cp5

0x7bf9,	// (0x0001376c) find_pane_g1

0x7c02,	// (0x00013775) input_find_pane

0x7c0b,	// (0x0001377e) input_find_pane_g1_ParamLimits

0x7c0b,	// (0x0001377e) input_find_pane_g1

0x7c17,	// (0x0001378a) input_find_pane_t1_ParamLimits

0x7c17,	// (0x0001378a) input_find_pane_t1

0x7c2c,	// (0x0001379f) input_find_pane_t2_ParamLimits

0x7c2c,	// (0x0001379f) input_find_pane_t2

0x0001,

0xf677,	// (0x0001b1ea) input_find_pane_t_ParamLimits

0xf677,	// (0x0001b1ea) input_find_pane_t

0x7c41,	// (0x000137b4) input_focus_pane_cp5_ParamLimits

0x7c41,	// (0x000137b4) input_focus_pane_cp5

0x7c60,	// (0x000137d3) bg_popup_window_pane_cp2_ParamLimits

0x7c60,	// (0x000137d3) bg_popup_window_pane_cp2

0x7c6d,	// (0x000137e0) listscroll_menu_pane_ParamLimits

0x7c6d,	// (0x000137e0) listscroll_menu_pane

0x7c79,	// (0x000137ec) popup_submenu_window_ParamLimits

0x7c79,	// (0x000137ec) popup_submenu_window

0x7ca5,	// (0x00013818) find_popup_pane_g1

0x7cad,	// (0x00013820) input_popup_find_pane_cp

0x7cb7,	// (0x0001382a) input_focus_pane_cp4_ParamLimits

0x7cb7,	// (0x0001382a) input_focus_pane_cp4

0x7cd1,	// (0x00013844) input_popup_find_pane_t1_ParamLimits

0x7cd1,	// (0x00013844) input_popup_find_pane_t1

0x6b37,	// (0x000126aa) bg_popup_sub_pane_cp

0x7cff,	// (0x00013872) listscroll_popup_sub_pane

0x7d07,	// (0x0001387a) list_submenu_pane_ParamLimits

0x7d07,	// (0x0001387a) list_submenu_pane

0x7d18,	// (0x0001388b) scroll_pane_cp4

0x7d20,	// (0x00013893) list_single_popup_submenu_pane_ParamLimits

0x7d20,	// (0x00013893) list_single_popup_submenu_pane

0x7d34,	// (0x000138a7) list_single_popup_submenu_pane_g1

0x7d3c,	// (0x000138af) list_single_popup_submenu_pane_t1_ParamLimits

0x7d3c,	// (0x000138af) list_single_popup_submenu_pane_t1

0x6c17,	// (0x0001278a) bg_active_tab_pane_cp1_ParamLimits

0x6c17,	// (0x0001278a) bg_active_tab_pane_cp1

0x7d51,	// (0x000138c4) tabs_2_active_pane_g1

0x7d59,	// (0x000138cc) tabs_2_active_pane_t1

0x6c17,	// (0x0001278a) bg_passive_tab_pane_cp1_ParamLimits

0x6c17,	// (0x0001278a) bg_passive_tab_pane_cp1

0x7d51,	// (0x000138c4) tabs_2_passive_pane_g1

0x7d59,	// (0x000138cc) tabs_2_passive_pane_t1

0x7d6b,	// (0x000138de) bg_active_tab_pane_cp4

0x7d79,	// (0x000138ec) tabs_2_long_active_pane_t1

0x7d8c,	// (0x000138ff) bg_passive_tab_pane_cp4

0x55e3,	// (0x00011156) list_single_midp_graphic_pane_g4_ParamLimits

0x7d6b,	// (0x000138de) bg_active_tab_pane_cp5

0x7d98,	// (0x0001390b) tabs_3_long_active_pane_t1

0x7d8c,	// (0x000138ff) bg_passive_tab_pane_cp5

0x55e3,	// (0x00011156) list_single_midp_graphic_pane_g4

0x6c17,	// (0x0001278a) bg_popup_window_pane_cp13_ParamLimits

0x6c17,	// (0x0001278a) bg_popup_window_pane_cp13

0x7db3,	// (0x00013926) listscroll_popup_fast_pane_ParamLimits

0x7db3,	// (0x00013926) listscroll_popup_fast_pane

0x7dc2,	// (0x00013935) grid_popup_fast_pane_ParamLimits

0x7dc2,	// (0x00013935) grid_popup_fast_pane

0x7dd4,	// (0x00013947) scroll_pane_cp9_ParamLimits

0x7dd4,	// (0x00013947) scroll_pane_cp9

0xc6e5,	// (0x00018258) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc6e5,	// (0x00018258) list_single_graphic_hl_pane_t1_cp2

0x7df8,	// (0x0001396b) input_focus_pane_cp20_ParamLimits

0x7df8,	// (0x0001396b) input_focus_pane_cp20

0x7e06,	// (0x00013979) query_popup_data_pane_t1_ParamLimits

0x7e06,	// (0x00013979) query_popup_data_pane_t1

0x7e19,	// (0x0001398c) query_popup_data_pane_t2_ParamLimits

0x7e19,	// (0x0001398c) query_popup_data_pane_t2

0x7e5f,	// (0x000139d2) query_popup_data_pane_t3_ParamLimits

0x7e5f,	// (0x000139d2) query_popup_data_pane_t3

0x7ea0,	// (0x00013a13) query_popup_data_pane_t4_ParamLimits

0x7ea0,	// (0x00013a13) query_popup_data_pane_t4

0x7edc,	// (0x00013a4f) query_popup_data_pane_t5_ParamLimits

0x7edc,	// (0x00013a4f) query_popup_data_pane_t5

0x0004,

0xf67c,	// (0x0001b1ef) query_popup_data_pane_t_ParamLimits

0xf67c,	// (0x0001b1ef) query_popup_data_pane_t

0x7b44,	// (0x000136b7) bg_set_opt_pane_g1

0x7b4c,	// (0x000136bf) bg_set_opt_pane_g2

0x7b54,	// (0x000136c7) bg_set_opt_pane_g3

0x7b5c,	// (0x000136cf) bg_set_opt_pane_g4

0x7b64,	// (0x000136d7) bg_set_opt_pane_g5

0x7b6c,	// (0x000136df) bg_set_opt_pane_g6

0x7b74,	// (0x000136e7) bg_set_opt_pane_g7

0x7b7c,	// (0x000136ef) bg_set_opt_pane_g8

0x7b84,	// (0x000136f7) bg_set_opt_pane_g9

0x0008,

0xf687,	// (0x0001b1fa) bg_set_opt_pane_g

0x4bed,	// (0x00010760) control_top_pane_stacon_ParamLimits

0x4bed,	// (0x00010760) control_top_pane_stacon

0x4c40,	// (0x000107b3) signal_pane_stacon_ParamLimits

0x4c40,	// (0x000107b3) signal_pane_stacon

0x8576,	// (0x000140e9) stacon_top_pane_g1_ParamLimits

0x8576,	// (0x000140e9) stacon_top_pane_g1

0x4c65,	// (0x000107d8) title_pane_stacon_ParamLimits

0x4c65,	// (0x000107d8) title_pane_stacon

0x4c8f,	// (0x00010802) uni_indicator_pane_stacon_ParamLimits

0x4c8f,	// (0x00010802) uni_indicator_pane_stacon

0x4ca4,	// (0x00010817) battery_pane_stacon_ParamLimits

0x4ca4,	// (0x00010817) battery_pane_stacon

0x4ce8,	// (0x0001085b) control_bottom_pane_stacon_ParamLimits

0x4ce8,	// (0x0001085b) control_bottom_pane_stacon

0x4d0b,	// (0x0001087e) navi_pane_stacon_ParamLimits

0x4d0b,	// (0x0001087e) navi_pane_stacon

0x8598,	// (0x0001410b) stacon_bottom_pane_g1_ParamLimits

0x8598,	// (0x0001410b) stacon_bottom_pane_g1

0x4950,	// (0x000104c3) aid_levels_signal_lsc_ParamLimits

0x4950,	// (0x000104c3) aid_levels_signal_lsc

0x4966,	// (0x000104d9) signal_pane_stacon_g1_ParamLimits

0x4966,	// (0x000104d9) signal_pane_stacon_g1

0x497a,	// (0x000104ed) signal_pane_stacon_g2_ParamLimits

0x497a,	// (0x000104ed) signal_pane_stacon_g2

0x0001,

0xf69a,	// (0x0001b20d) signal_pane_stacon_g_ParamLimits

0xf69a,	// (0x0001b20d) signal_pane_stacon_g

0x49af,	// (0x00010522) title_pane_stacon_t1_ParamLimits

0x49af,	// (0x00010522) title_pane_stacon_t1

0x7f20,	// (0x00013a93) uni_indicator_pane_stacon_g1

0x7f2a,	// (0x00013a9d) uni_indicator_pane_stacon_g2

0x7f34,	// (0x00013aa7) uni_indicator_pane_stacon_g3

0x7f3e,	// (0x00013ab1) uni_indicator_pane_stacon_g4

0x0003,

0xf6a6,	// (0x0001b219) uni_indicator_pane_stacon_g

0x49d4,	// (0x00010547) control_top_pane_stacon_g1

0x49dc,	// (0x0001054f) control_top_pane_stacon_t1_ParamLimits

0x49dc,	// (0x0001054f) control_top_pane_stacon_t1

0x4a13,	// (0x00010586) aid_levels_battery_lsc_ParamLimits

0x4a13,	// (0x00010586) aid_levels_battery_lsc

0x4a2a,	// (0x0001059d) battery_pane_stacon_g1_ParamLimits

0x4a2a,	// (0x0001059d) battery_pane_stacon_g1

0x4a3d,	// (0x000105b0) battery_pane_stacon_g2_ParamLimits

0x4a3d,	// (0x000105b0) battery_pane_stacon_g2

0x0001,

0xf6af,	// (0x0001b222) battery_pane_stacon_g_ParamLimits

0xf6af,	// (0x0001b222) battery_pane_stacon_g

0x4a7b,	// (0x000105ee) navi_icon_pane_stacon

0x4a8f,	// (0x00010602) navi_navi_pane_stacon

0x4a7b,	// (0x000105ee) navi_text_pane_stacon

0x49d4,	// (0x00010547) control_bottom_pane_stacon_g1

0x4aa3,	// (0x00010616) control_bottom_pane_stacon_t1_ParamLimits

0x4aa3,	// (0x00010616) control_bottom_pane_stacon_t1

0x7f62,	// (0x00013ad5) grid_app_pane_ParamLimits

0x7f62,	// (0x00013ad5) grid_app_pane

0x7f84,	// (0x00013af7) scroll_pane_cp15_ParamLimits

0x7f84,	// (0x00013af7) scroll_pane_cp15

0x7f97,	// (0x00013b0a) cell_app_pane_ParamLimits

0x7f97,	// (0x00013b0a) cell_app_pane

0x7fbf,	// (0x00013b32) cell_app_pane_g1_ParamLimits

0x7fbf,	// (0x00013b32) cell_app_pane_g1

0x7fe3,	// (0x00013b56) cell_app_pane_g2_ParamLimits

0x7fe3,	// (0x00013b56) cell_app_pane_g2

0x0001,

0xf6b4,	// (0x0001b227) cell_app_pane_g_ParamLimits

0xf6b4,	// (0x0001b227) cell_app_pane_g

0x7fef,	// (0x00013b62) cell_app_pane_t1_ParamLimits

0x7fef,	// (0x00013b62) cell_app_pane_t1

0x8006,	// (0x00013b79) grid_highlight_pane_ParamLimits

0x8006,	// (0x00013b79) grid_highlight_pane

0x7b44,	// (0x000136b7) cell_highlight_pane_g1

0x7b4c,	// (0x000136bf) cell_highlight_pane_g2

0x7b54,	// (0x000136c7) cell_highlight_pane_g3

0x7b5c,	// (0x000136cf) cell_highlight_pane_g4

0x7b64,	// (0x000136d7) cell_highlight_pane_g5

0x7b6c,	// (0x000136df) cell_highlight_pane_g6

0x7b74,	// (0x000136e7) cell_highlight_pane_g7

0x7b7c,	// (0x000136ef) cell_highlight_pane_g8

0x7b84,	// (0x000136f7) cell_highlight_pane_g9

0x3acf,	// (0x0000f642) cell_highlight_pane_g10

0x0009,

0xf662,	// (0x0001b1d5) cell_highlight_pane_g

0x8017,	// (0x00013b8a) bg_scroll_pane

0x4aed,	// (0x00010660) scroll_handle_pane

0x805e,	// (0x00013bd1) scroll_bg_pane_g1

0x8073,	// (0x00013be6) scroll_bg_pane_g2

0x808b,	// (0x00013bfe) scroll_bg_pane_g3

0x0002,

0xf6b9,	// (0x0001b22c) scroll_bg_pane_g

0x80a0,	// (0x00013c13) scroll_handle_focus_pane_ParamLimits

0x80a0,	// (0x00013c13) scroll_handle_focus_pane

0x805e,	// (0x00013bd1) scroll_handle_pane_g1

0x80ad,	// (0x00013c20) scroll_handle_pane_g2

0x808b,	// (0x00013bfe) scroll_handle_pane_g3

0x0002,

0xf6c0,	// (0x0001b233) scroll_handle_pane_g

0x7cb7,	// (0x0001382a) bg_popup_sub_pane_cp21_ParamLimits

0x7cb7,	// (0x0001382a) bg_popup_sub_pane_cp21

0x80c1,	// (0x00013c34) popup_fep_japan_predictive_window_t1_ParamLimits

0x80c1,	// (0x00013c34) popup_fep_japan_predictive_window_t1

0x80db,	// (0x00013c4e) popup_fep_japan_predictive_window_t2_ParamLimits

0x80db,	// (0x00013c4e) popup_fep_japan_predictive_window_t2

0x810e,	// (0x00013c81) popup_fep_japan_predictive_window_t3_ParamLimits

0x810e,	// (0x00013c81) popup_fep_japan_predictive_window_t3

0x0002,

0xf6c7,	// (0x0001b23a) popup_fep_japan_predictive_window_t_ParamLimits

0xf6c7,	// (0x0001b23a) popup_fep_japan_predictive_window_t

0x6b37,	// (0x000126aa) bg_popup_sub_pane_cp23

0x8145,	// (0x00013cb8) listscroll_japin_cand_pane

0x814d,	// (0x00013cc0) popup_fep_japan_candidate_window_t1

0x815b,	// (0x00013cce) candidate_pane_ParamLimits

0x815b,	// (0x00013cce) candidate_pane

0x816d,	// (0x00013ce0) scroll_pane_cp30

0x8175,	// (0x00013ce8) list_single_popup_jap_candidate_pane_ParamLimits

0x8175,	// (0x00013ce8) list_single_popup_jap_candidate_pane

0x6b37,	// (0x000126aa) list_highlight_pane_cp30

0x818a,	// (0x00013cfd) list_single_popup_jap_candidate_pane_t1

0x8199,	// (0x00013d0c) level_1_signal

0x81ab,	// (0x00013d1e) level_2_signal

0x81be,	// (0x00013d31) level_3_signal

0x81d1,	// (0x00013d44) level_4_signal

0x81e4,	// (0x00013d57) level_5_signal

0x81f7,	// (0x00013d6a) level_6_signal

0x820a,	// (0x00013d7d) level_7_signal

0x8199,	// (0x00013d0c) level_1_battery

0x81ab,	// (0x00013d1e) level_2_battery

0x81be,	// (0x00013d31) level_3_battery

0x81d1,	// (0x00013d44) level_4_battery

0x81e4,	// (0x00013d57) level_5_battery

0x81f7,	// (0x00013d6a) level_6_battery

0x820a,	// (0x00013d7d) level_7_battery

0x8235,	// (0x00013da8) list_menu_pane_ParamLimits

0x8235,	// (0x00013da8) list_menu_pane

0x824b,	// (0x00013dbe) scroll_pane_cp25_ParamLimits

0x824b,	// (0x00013dbe) scroll_pane_cp25

0x8264,	// (0x00013dd7) list_double2_graphic_pane_cp2_ParamLimits

0x8264,	// (0x00013dd7) list_double2_graphic_pane_cp2

0x8264,	// (0x00013dd7) list_double2_large_graphic_pane_cp2_ParamLimits

0x8264,	// (0x00013dd7) list_double2_large_graphic_pane_cp2

0x8264,	// (0x00013dd7) list_double2_pane_cp2_ParamLimits

0x8264,	// (0x00013dd7) list_double2_pane_cp2

0x8264,	// (0x00013dd7) list_double_graphic_pane_cp2_ParamLimits

0x8264,	// (0x00013dd7) list_double_graphic_pane_cp2

0x8264,	// (0x00013dd7) list_double_large_graphic_pane_cp2_ParamLimits

0x8264,	// (0x00013dd7) list_double_large_graphic_pane_cp2

0x8264,	// (0x00013dd7) list_double_number_pane_cp2_ParamLimits

0x8264,	// (0x00013dd7) list_double_number_pane_cp2

0x8264,	// (0x00013dd7) list_double_pane_cp2_ParamLimits

0x8264,	// (0x00013dd7) list_double_pane_cp2

0x8288,	// (0x00013dfb) list_single_2graphic_pane_cp2_ParamLimits

0x8288,	// (0x00013dfb) list_single_2graphic_pane_cp2

0x8288,	// (0x00013dfb) list_single_graphic_heading_pane_cp2_ParamLimits

0x8288,	// (0x00013dfb) list_single_graphic_heading_pane_cp2

0x8288,	// (0x00013dfb) list_single_graphic_pane_cp2_ParamLimits

0x8288,	// (0x00013dfb) list_single_graphic_pane_cp2

0x8288,	// (0x00013dfb) list_single_heading_pane_cp2_ParamLimits

0x8288,	// (0x00013dfb) list_single_heading_pane_cp2

0x82a1,	// (0x00013e14) list_single_large_graphic_pane_cp2_ParamLimits

0x82a1,	// (0x00013e14) list_single_large_graphic_pane_cp2

0x8288,	// (0x00013dfb) list_single_number_heading_pane_cp2_ParamLimits

0x8288,	// (0x00013dfb) list_single_number_heading_pane_cp2

0x8288,	// (0x00013dfb) list_single_number_pane_cp2_ParamLimits

0x8288,	// (0x00013dfb) list_single_number_pane_cp2

0x82b2,	// (0x00013e25) list_single_pane_cp2_ParamLimits

0x82b2,	// (0x00013e25) list_single_pane_cp2

0x8336,	// (0x00013ea9) bg_popup_sub_pane_cp22

0x4b9f,	// (0x00010712) popup_side_volume_key_window_g1

0x4bc9,	// (0x0001073c) popup_side_volume_key_window_t1

0x4be5,	// (0x00010758) volume_small_pane_cp1

0x6eac,	// (0x00012a1f) bg_popup_sub_pane_cp24_ParamLimits

0x6eac,	// (0x00012a1f) bg_popup_sub_pane_cp24

0x834c,	// (0x00013ebf) fep_china_uni_candidate_pane_ParamLimits

0x834c,	// (0x00013ebf) fep_china_uni_candidate_pane

0x8360,	// (0x00013ed3) fep_china_uni_entry_pane

0x8370,	// (0x00013ee3) popup_fep_china_uni_window_g1

0x838c,	// (0x00013eff) fep_china_uni_entry_pane_g1

0x8394,	// (0x00013f07) fep_china_uni_entry_pane_g2

0x0001,

0xf6f8,	// (0x0001b26b) fep_china_uni_entry_pane_g

0x839c,	// (0x00013f0f) fep_entry_item_pane

0x83a6,	// (0x00013f19) fep_candidate_item_pane

0x83ae,	// (0x00013f21) fep_china_uni_candidate_pane_g1

0x83b6,	// (0x00013f29) fep_china_uni_candidate_pane_g2

0x83be,	// (0x00013f31) fep_china_uni_candidate_pane_g3

0x83c6,	// (0x00013f39) fep_china_uni_candidate_pane_g4

0x0003,

0xf6fd,	// (0x0001b270) fep_china_uni_candidate_pane_g

0x3acf,	// (0x0000f642) fep_entry_item_pane_g1

0x83ce,	// (0x00013f41) fep_entry_item_pane_t1_ParamLimits

0x83ce,	// (0x00013f41) fep_entry_item_pane_t1

0x83e4,	// (0x00013f57) fep_candidate_item_pane_t1_ParamLimits

0x83e4,	// (0x00013f57) fep_candidate_item_pane_t1

0x83f9,	// (0x00013f6c) fep_candidate_item_pane_t2_ParamLimits

0x83f9,	// (0x00013f6c) fep_candidate_item_pane_t2

0x0001,

0xf706,	// (0x0001b279) fep_candidate_item_pane_t_ParamLimits

0xf706,	// (0x0001b279) fep_candidate_item_pane_t

0x6c17,	// (0x0001278a) list_highlight_pane_cp31_ParamLimits

0x6c17,	// (0x0001278a) list_highlight_pane_cp31

0x840b,	// (0x00013f7e) level_1_signal_lsc

0x8414,	// (0x00013f87) level_2_signal_lsc

0x841d,	// (0x00013f90) level_3_signal_lsc

0x8426,	// (0x00013f99) level_4_signal_lsc

0x842f,	// (0x00013fa2) level_5_signal_lsc

0x8438,	// (0x00013fab) level_6_signal_lsc

0x8441,	// (0x00013fb4) level_7_signal_lsc

0x8441,	// (0x00013fb4) level_1_battery_lsc

0x844a,	// (0x00013fbd) level_2_battery_lsc

0x8453,	// (0x00013fc6) level_3_battery_lsc

0x845c,	// (0x00013fcf) level_4_battery_lsc

0x8465,	// (0x00013fd8) level_5_battery_lsc

0x846e,	// (0x00013fe1) level_6_battery_lsc

0x840b,	// (0x00013f7e) level_7_battery_lsc

0x8477,	// (0x00013fea) scroll_handle_focus_pane_g1

0x8480,	// (0x00013ff3) scroll_handle_focus_pane_g2

0x8489,	// (0x00013ffc) scroll_handle_focus_pane_g3

0x0002,

0xf70b,	// (0x0001b27e) scroll_handle_focus_pane_g

0x8492,	// (0x00014005) list_single_2graphic_pane_g1_ParamLimits

0x8492,	// (0x00014005) list_single_2graphic_pane_g1

0x74f7,	// (0x0001306a) list_single_2graphic_pane_g2_ParamLimits

0x74f7,	// (0x0001306a) list_single_2graphic_pane_g2

0x747d,	// (0x00012ff0) list_single_2graphic_pane_g3_ParamLimits

0x747d,	// (0x00012ff0) list_single_2graphic_pane_g3

0x849e,	// (0x00014011) list_single_2graphic_pane_g4_ParamLimits

0x849e,	// (0x00014011) list_single_2graphic_pane_g4

0x0003,

0xf712,	// (0x0001b285) list_single_2graphic_pane_g_ParamLimits

0xf712,	// (0x0001b285) list_single_2graphic_pane_g

0x84af,	// (0x00014022) list_single_2graphic_pane_t1_ParamLimits

0x84af,	// (0x00014022) list_single_2graphic_pane_t1

0x84dd,	// (0x00014050) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x84dd,	// (0x00014050) list_double2_graphic_large_graphic_pane_g1

0x7584,	// (0x000130f7) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x7584,	// (0x000130f7) list_double2_graphic_large_graphic_pane_g2

0x7595,	// (0x00013108) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x7595,	// (0x00013108) list_double2_graphic_large_graphic_pane_g3

0x84ed,	// (0x00014060) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x84ed,	// (0x00014060) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf71b,	// (0x0001b28e) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf71b,	// (0x0001b28e) list_double2_graphic_large_graphic_pane_g

0x84f9,	// (0x0001406c) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x84f9,	// (0x0001406c) list_double2_graphic_large_graphic_pane_t1

0x850f,	// (0x00014082) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x850f,	// (0x00014082) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf724,	// (0x0001b297) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf724,	// (0x0001b297) list_double2_graphic_large_graphic_pane_t

0x8663,	// (0x000141d6) popup_fast_swap_window_ParamLimits

0x8663,	// (0x000141d6) popup_fast_swap_window

0x867f,	// (0x000141f2) popup_side_volume_key_window

0x869b,	// (0x0001420e) stacon_top_pane

0x86a5,	// (0x00014218) status_pane_ParamLimits

0x86a5,	// (0x00014218) status_pane

0x86b3,	// (0x00014226) status_small_pane

0x6b37,	// (0x000126aa) control_pane

0x6b37,	// (0x000126aa) stacon_bottom_pane

0x7926,	// (0x00013499) scroll_pane_cp121

0x791d,	// (0x00013490) set_content_pane

0x8521,	// (0x00014094) bg_active_tab_pane_g1_cp1

0x852a,	// (0x0001409d) bg_active_tab_pane_g2_cp1

0x8533,	// (0x000140a6) bg_active_tab_pane_g3_cp1

0x8521,	// (0x00014094) bg_passive_tab_pane_g1_cp1

0x852a,	// (0x0001409d) bg_passive_tab_pane_g2_cp1

0x8533,	// (0x000140a6) bg_passive_tab_pane_g3_cp1

0x853c,	// (0x000140af) bg_active_tab_pane_g1_cp2

0x852a,	// (0x0001409d) bg_active_tab_pane_g2_cp2

0x8545,	// (0x000140b8) bg_active_tab_pane_g3_cp2

0x853c,	// (0x000140af) bg_passive_tab_pane_g1_cp2

0x852a,	// (0x0001409d) bg_passive_tab_pane_g2_cp2

0x8545,	// (0x000140b8) bg_passive_tab_pane_g3_cp2

0x854e,	// (0x000140c1) bg_active_tab_pane_g1_cp3

0x852a,	// (0x0001409d) bg_active_tab_pane_g2_cp3

0x8557,	// (0x000140ca) bg_active_tab_pane_g3_cp3

0x854e,	// (0x000140c1) bg_passive_tab_pane_g1_cp3

0x852a,	// (0x0001409d) bg_passive_tab_pane_g2_cp3

0x8557,	// (0x000140ca) bg_passive_tab_pane_g3_cp3

0x8560,	// (0x000140d3) bg_active_tab_pane_g1_cp4

0x852a,	// (0x0001409d) bg_active_tab_pane_g2_cp4

0x856b,	// (0x000140de) bg_active_tab_pane_g3_cp4

0x8560,	// (0x000140d3) bg_passive_tab_pane_g1_cp4

0x852a,	// (0x0001409d) bg_passive_tab_pane_g2_cp4

0x856b,	// (0x000140de) bg_passive_tab_pane_g3_cp4

0x85b4,	// (0x00014127) bg_active_tab_pane_g1_cp5

0x852a,	// (0x0001409d) bg_active_tab_pane_g2_cp5

0x85bd,	// (0x00014130) bg_active_tab_pane_g3_cp5

0x85b4,	// (0x00014127) bg_passive_tab_pane_g1_cp5

0x852a,	// (0x0001409d) bg_passive_tab_pane_g2_cp5

0x85bd,	// (0x00014130) bg_passive_tab_pane_g3_cp5

0x85c6,	// (0x00014139) list_set_graphic_pane_ParamLimits

0x85c6,	// (0x00014139) list_set_graphic_pane

0x6b37,	// (0x000126aa) bg_set_opt_pane_cp4

0x85e6,	// (0x00014159) list_set_graphic_pane_g1_ParamLimits

0x85e6,	// (0x00014159) list_set_graphic_pane_g1

0x85f2,	// (0x00014165) list_set_graphic_pane_g2_ParamLimits

0x85f2,	// (0x00014165) list_set_graphic_pane_g2

0x0001,

0xf729,	// (0x0001b29c) list_set_graphic_pane_g_ParamLimits

0xf729,	// (0x0001b29c) list_set_graphic_pane_g

0x0009,

0xfaa5,	// (0x0001b618) volume_small_pane_cp_g

0x8616,	// (0x00014189) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x8616,	// (0x00014189) list_double2_large_graphic_pane_g1_cp2

0x8622,	// (0x00014195) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x8622,	// (0x00014195) list_double2_large_graphic_pane_g2_cp2

0x8633,	// (0x000141a6) list_double2_large_graphic_pane_g3_cp2

0x863b,	// (0x000141ae) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x863b,	// (0x000141ae) list_double2_large_graphic_pane_t1_cp2

0x8651,	// (0x000141c4) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x8651,	// (0x000141c4) list_double2_large_graphic_pane_t2_cp2

0xa33f,	// (0x00015eb2) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xa33f,	// (0x00015eb2) list_double_large_graphic_pane_g1_cp2

0xa350,	// (0x00015ec3) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xa350,	// (0x00015ec3) list_double_large_graphic_pane_g2_cp2

0x87cc,	// (0x0001433f) list_double_large_graphic_pane_g3_cp2

0xa361,	// (0x00015ed4) list_double_large_graphic_pane_g4_cp

0xa369,	// (0x00015edc) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xa369,	// (0x00015edc) list_double_large_graphic_pane_t1_cp2

0xa380,	// (0x00015ef3) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xa380,	// (0x00015ef3) list_double_large_graphic_pane_t2_cp2

0x86be,	// (0x00014231) list_double2_graphic_pane_g1_cp2_ParamLimits

0x86be,	// (0x00014231) list_double2_graphic_pane_g1_cp2

0x86cc,	// (0x0001423f) list_double2_graphic_pane_g2_cp2_ParamLimits

0x86cc,	// (0x0001423f) list_double2_graphic_pane_g2_cp2

0x86dd,	// (0x00014250) list_double2_graphic_pane_g3_cp2

0x86e7,	// (0x0001425a) list_double2_graphic_pane_t1_cp2_ParamLimits

0x86e7,	// (0x0001425a) list_double2_graphic_pane_t1_cp2

0x86fd,	// (0x00014270) list_double2_graphic_pane_t2_cp2_ParamLimits

0x86fd,	// (0x00014270) list_double2_graphic_pane_t2_cp2

0x870f,	// (0x00014282) list_single_number_heading_pane_g1_cp2_ParamLimits

0x870f,	// (0x00014282) list_single_number_heading_pane_g1_cp2

0x871b,	// (0x0001428e) list_single_number_heading_pane_g2_cp2

0x8723,	// (0x00014296) list_single_number_heading_pane_t1_cp2_ParamLimits

0x8723,	// (0x00014296) list_single_number_heading_pane_t1_cp2

0x8739,	// (0x000142ac) list_single_number_heading_pane_t2_cp2_ParamLimits

0x8739,	// (0x000142ac) list_single_number_heading_pane_t2_cp2

0x874b,	// (0x000142be) list_single_number_heading_pane_t3_cp2_ParamLimits

0x874b,	// (0x000142be) list_single_number_heading_pane_t3_cp2

0x870f,	// (0x00014282) list_single_heading_pane_g1_cp2_ParamLimits

0x870f,	// (0x00014282) list_single_heading_pane_g1_cp2

0x871b,	// (0x0001428e) list_single_heading_pane_g2_cp2

0x8723,	// (0x00014296) list_single_heading_pane_t1_cp2_ParamLimits

0x8723,	// (0x00014296) list_single_heading_pane_t1_cp2

0xa147,	// (0x00015cba) list_single_heading_pane_t2_cp2_ParamLimits

0xa147,	// (0x00015cba) list_single_heading_pane_t2_cp2

0xa08f,	// (0x00015c02) list_double_graphic_pane_g1_cp2_ParamLimits

0xa08f,	// (0x00015c02) list_double_graphic_pane_g1_cp2

0xa09b,	// (0x00015c0e) list_double_graphic_pane_g2_cp2_ParamLimits

0xa09b,	// (0x00015c0e) list_double_graphic_pane_g2_cp2

0xa0aa,	// (0x00015c1d) list_double_graphic_pane_g3_cp2

0xa0b2,	// (0x00015c25) list_double_graphic_pane_t1_cp2_ParamLimits

0xa0b2,	// (0x00015c25) list_double_graphic_pane_t1_cp2

0xa0c8,	// (0x00015c3b) list_double_graphic_pane_t2_cp2_ParamLimits

0xa0c8,	// (0x00015c3b) list_double_graphic_pane_t2_cp2

0x87c0,	// (0x00014333) list_double_number_pane_g1_cp2_ParamLimits

0x87c0,	// (0x00014333) list_double_number_pane_g1_cp2

0x87cc,	// (0x0001433f) list_double_number_pane_g2_cp2

0xa053,	// (0x00015bc6) list_double_number_pane_t1_cp2_ParamLimits

0xa053,	// (0x00015bc6) list_double_number_pane_t1_cp2

0xa067,	// (0x00015bda) list_double_number_pane_t2_cp2_ParamLimits

0xa067,	// (0x00015bda) list_double_number_pane_t2_cp2

0xa07d,	// (0x00015bf0) list_double_number_pane_t3_cp2_ParamLimits

0xa07d,	// (0x00015bf0) list_double_number_pane_t3_cp2

0x9f3c,	// (0x00015aaf) list_single_graphic_pane_g1_cp2_ParamLimits

0x9f3c,	// (0x00015aaf) list_single_graphic_pane_g1_cp2

0x882d,	// (0x000143a0) list_single_graphic_pane_g2_cp2_ParamLimits

0x882d,	// (0x000143a0) list_single_graphic_pane_g2_cp2

0x8839,	// (0x000143ac) list_single_graphic_pane_g3_cp2

0x9f12,	// (0x00015a85) list_single_graphic_pane_t1_cp2_ParamLimits

0x9f12,	// (0x00015a85) list_single_graphic_pane_t1_cp2

0x882d,	// (0x000143a0) list_single_number_pane_g1_cp2_ParamLimits

0x882d,	// (0x000143a0) list_single_number_pane_g1_cp2

0x8839,	// (0x000143ac) list_single_number_pane_g2_cp2

0x9f12,	// (0x00015a85) list_single_number_pane_t1_cp2_ParamLimits

0x9f12,	// (0x00015a85) list_single_number_pane_t1_cp2

0x9f28,	// (0x00015a9b) list_single_number_pane_t2_cp2_ParamLimits

0x9f28,	// (0x00015a9b) list_single_number_pane_t2_cp2

0x8622,	// (0x00014195) list_double2_pane_g1_cp2_ParamLimits

0x8622,	// (0x00014195) list_double2_pane_g1_cp2

0x8633,	// (0x000141a6) list_double2_pane_g2_cp2

0x8798,	// (0x0001430b) list_double2_pane_t1_cp2_ParamLimits

0x8798,	// (0x0001430b) list_double2_pane_t1_cp2

0x87ae,	// (0x00014321) list_double2_pane_t2_cp2_ParamLimits

0x87ae,	// (0x00014321) list_double2_pane_t2_cp2

0x87c0,	// (0x00014333) list_double_pane_g1_cp2_ParamLimits

0x87c0,	// (0x00014333) list_double_pane_g1_cp2

0x87cc,	// (0x0001433f) list_double_pane_g2_cp2

0x87d4,	// (0x00014347) list_double_pane_t1_cp2_ParamLimits

0x87d4,	// (0x00014347) list_double_pane_t1_cp2

0x87ea,	// (0x0001435d) list_double_pane_t2_cp2_ParamLimits

0x87ea,	// (0x0001435d) list_double_pane_t2_cp2

0x881d,	// (0x00014390) list_single_pane_cp2_g3

0x882d,	// (0x000143a0) list_single_pane_g1_cp2_ParamLimits

0x882d,	// (0x000143a0) list_single_pane_g1_cp2

0x8839,	// (0x000143ac) list_single_pane_g2_cp2

0x8841,	// (0x000143b4) list_single_pane_t1_cp2_ParamLimits

0x8841,	// (0x000143b4) list_single_pane_t1_cp2

0x8859,	// (0x000143cc) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x8859,	// (0x000143cc) list_single_large_graphic_pane_g1_cp2

0x7471,	// (0x00012fe4) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x7471,	// (0x00012fe4) list_single_large_graphic_pane_g2_cp2

0x8865,	// (0x000143d8) list_single_large_graphic_pane_g3_cp2

0x886d,	// (0x000143e0) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x886d,	// (0x000143e0) list_single_large_graphic_pane_g4_cp1

0x8887,	// (0x000143fa) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x8887,	// (0x000143fa) list_single_large_graphic_pane_t1_cp2

0x9ede,	// (0x00015a51) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x9ede,	// (0x00015a51) list_single_graphic_heading_pane_g1_cp2

0x9eab,	// (0x00015a1e) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x9eab,	// (0x00015a1e) list_single_graphic_heading_pane_g4_cp2

0x8839,	// (0x000143ac) list_single_graphic_heading_pane_g5_cp2

0x9eea,	// (0x00015a5d) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x9eea,	// (0x00015a5d) list_single_graphic_heading_pane_t1_cp2

0x9f00,	// (0x00015a73) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x9f00,	// (0x00015a73) list_single_graphic_heading_pane_t2_cp2

0x9e9f,	// (0x00015a12) list_single_2graphic_pane_g1_cp2_ParamLimits

0x9e9f,	// (0x00015a12) list_single_2graphic_pane_g1_cp2

0x9eab,	// (0x00015a1e) list_single_2graphic_pane_g2_cp2_ParamLimits

0x9eab,	// (0x00015a1e) list_single_2graphic_pane_g2_cp2

0x8839,	// (0x000143ac) list_single_2graphic_pane_g3_cp2

0x9ebc,	// (0x00015a2f) list_single_2graphic_pane_g4_cp2_ParamLimits

0x9ebc,	// (0x00015a2f) list_single_2graphic_pane_g4_cp2

0x9ec8,	// (0x00015a3b) list_single_2graphic_pane_t1_cp2_ParamLimits

0x9ec8,	// (0x00015a3b) list_single_2graphic_pane_t1_cp2

0x3acf,	// (0x0000f642) list_highlight_pane_g10_cp1

0x9a77,	// (0x000155ea) list_highlight_pane_g1_cp1

0x9a7f,	// (0x000155f2) list_highlight_pane_g2_cp1

0x9a87,	// (0x000155fa) list_highlight_pane_g3_cp1

0x9a8f,	// (0x00015602) list_highlight_pane_g4_cp1

0x9a97,	// (0x0001560a) list_highlight_pane_g5_cp1

0x9a9f,	// (0x00015612) list_highlight_pane_g6_cp1

0x9aa7,	// (0x0001561a) list_highlight_pane_g7_cp1

0x9aaf,	// (0x00015622) list_highlight_pane_g8_cp1

0x9ab7,	// (0x0001562a) list_highlight_pane_g9_cp1

0x9997,	// (0x0001550a) form_field_slider_pane_t3

0x99a5,	// (0x00015518) form_field_slider_pane_t4

0x99b3,	// (0x00015526) slider_form_pane_ParamLimits

0x99b3,	// (0x00015526) slider_form_pane

0x6b37,	// (0x000126aa) control_abbreviations

0x6b37,	// (0x000126aa) control_conventions

0x6b37,	// (0x000126aa) control_definitions

0x6b37,	// (0x000126aa) format_table_attribute

0xa191,	// (0x00015d04) bg_popup_preview_window_pane_g9

0x6b37,	// (0x000126aa) format_table_data2

0x6b37,	// (0x000126aa) format_table_data3

0x6b37,	// (0x000126aa) format_table_data_example

0x0008,

0x6b37,	// (0x000126aa) intro_purpose

0xf8c0,	// (0x0001b433) bg_popup_preview_window_pane_g

0x6b37,	// (0x000126aa) texts_category

0x6b37,	// (0x000126aa) texts_graphics

0x889d,	// (0x00014410) text_digital

0x88ac,	// (0x0001441f) text_primary

0x88bb,	// (0x0001442e) text_primary_small

0x88ca,	// (0x0001443d) text_secondary

0x88d9,	// (0x0001444c) text_title

0xa9b7,	// (0x0001652a) bg_passive_tab_pane_g1_cp3_srt

0x852a,	// (0x0001409d) bg_passive_tab_pane_g2_cp3_srt

0xa9c0,	// (0x00016533) bg_passive_tab_pane_g3_cp3_srt

0x6c17,	// (0x0001278a) bg_active_tab_pane_cp3_srt_ParamLimits

0x6c17,	// (0x0001278a) bg_active_tab_pane_cp3_srt

0xa9c9,	// (0x0001653c) tabs_4_active_pane_srt_g1

0xa9d1,	// (0x00016544) tabs_4_active_pane_srt_t1_ParamLimits

0xa9d1,	// (0x00016544) tabs_4_active_pane_srt_t1

0xa9b7,	// (0x0001652a) bg_active_tab_pane_g1_cp3_copy1

0x852a,	// (0x0001409d) bg_active_tab_pane_g2_cp3_copy1

0xa9c0,	// (0x00016533) bg_active_tab_pane_g3_cp3_copy1

0x6c17,	// (0x0001278a) tabs_2_long_active_pane_srt_ParamLimits

0x6c17,	// (0x0001278a) tabs_2_long_active_pane_srt

0x6c17,	// (0x0001278a) tabs_2_long_passive_pane_srt_ParamLimits

0x6c17,	// (0x0001278a) tabs_2_long_passive_pane_srt

0x7d8c,	// (0x000138ff) bg_passive_tab_pane_cp4_srt_ParamLimits

0x7d8c,	// (0x000138ff) bg_passive_tab_pane_cp4_srt

0xa5d1,	// (0x00016144) bg_passive_tab_pane_g1_cp4_srt

0x852a,	// (0x0001409d) bg_passive_tab_pane_g2_cp4_srt

0xa5da,	// (0x0001614d) bg_passive_tab_pane_g3_cp4_srt

0x7d6b,	// (0x000138de) bg_active_tab_pane_cp4_srt_ParamLimits

0x7d6b,	// (0x000138de) bg_active_tab_pane_cp4_srt

0xa5e3,	// (0x00016156) tabs_2_long_active_pane_srt_t1_ParamLimits

0xa5e3,	// (0x00016156) tabs_2_long_active_pane_srt_t1

0xa5d1,	// (0x00016144) bg_active_tab_pane_g1_cp4_srt

0x852a,	// (0x0001409d) bg_active_tab_pane_g2_cp4_srt

0xa5da,	// (0x0001614d) bg_active_tab_pane_g3_cp4_srt

0x6eac,	// (0x00012a1f) tabs_3_long_active_pane_srt_ParamLimits

0x6eac,	// (0x00012a1f) tabs_3_long_active_pane_srt

0x6eac,	// (0x00012a1f) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x6eac,	// (0x00012a1f) tabs_3_long_passive_pane_cp_srt

0x6eac,	// (0x00012a1f) tabs_3_long_passive_pane_srt_ParamLimits

0x6eac,	// (0x00012a1f) tabs_3_long_passive_pane_srt

0x7d8c,	// (0x000138ff) bg_passive_tab_pane_cp5_srt_ParamLimits

0x7d8c,	// (0x000138ff) bg_passive_tab_pane_cp5_srt

0x85b4,	// (0x00014127) bg_passive_tab_pane_g1_cp5_srt

0x852a,	// (0x0001409d) bg_passive_tab_pane_g2_cp5_srt

0x85bd,	// (0x00014130) bg_passive_tab_pane_g3_cp5_srt

0x7d6b,	// (0x000138de) bg_active_tab_pane_cp5_srt_ParamLimits

0x7d6b,	// (0x000138de) bg_active_tab_pane_cp5_srt

0xa5bf,	// (0x00016132) tabs_3_long_active_pane_srt_t1_ParamLimits

0xa5bf,	// (0x00016132) tabs_3_long_active_pane_srt_t1

0x85b4,	// (0x00014127) bg_active_tab_pane_g1_cp5_srt

0x852a,	// (0x0001409d) bg_active_tab_pane_g2_cp5_srt

0x85bd,	// (0x00014130) bg_active_tab_pane_g3_cp5_srt

0xa5b1,	// (0x00016124) navi_text_pane_srt_t1

0xa5a9,	// (0x0001611c) navi_icon_pane_srt_g1

0x8aae,	// (0x00014621) midp_editing_number_pane_srt

0x88e8,	// (0x0001445b) midp_ticker_pane_srt

0x8ab6,	// (0x00014629) midp_ticker_pane_srt_g1

0x8abe,	// (0x00014631) midp_ticker_pane_srt_g2

0x0001,

0xf748,	// (0x0001b2bb) midp_ticker_pane_srt_g

0x8ac6,	// (0x00014639) midp_ticker_pane_srt_t1

0xa59a,	// (0x0001610d) midp_editing_number_pane_t1_copy1

0x88f0,	// (0x00014463) listscroll_midp_pane

0x88f0,	// (0x00014463) midp_form_pane

0x8960,	// (0x000144d3) midp_info_popup_window_ParamLimits

0x8960,	// (0x000144d3) midp_info_popup_window

0x7cb7,	// (0x0001382a) bg_popup_sub_pane_cp50_ParamLimits

0x7cb7,	// (0x0001382a) bg_popup_sub_pane_cp50

0x969b,	// (0x0001520e) listscroll_midp_info_pane_ParamLimits

0x969b,	// (0x0001520e) listscroll_midp_info_pane

0x967b,	// (0x000151ee) listscroll_form_midp_pane_ParamLimits

0x967b,	// (0x000151ee) listscroll_form_midp_pane

0x9687,	// (0x000151fa) scroll_bar_cp050

0x965b,	// (0x000151ce) list_midp_pane

0xb74c,	// (0x000172bf) signal_pane_g2_cp

0x9595,	// (0x00015108) listscroll_midp_info_pane_t1_ParamLimits

0x9595,	// (0x00015108) listscroll_midp_info_pane_t1

0x95ad,	// (0x00015120) listscroll_midp_info_pane_t2_ParamLimits

0x95ad,	// (0x00015120) listscroll_midp_info_pane_t2

0x95eb,	// (0x0001515e) listscroll_midp_info_pane_t3_ParamLimits

0x95eb,	// (0x0001515e) listscroll_midp_info_pane_t3

0x9625,	// (0x00015198) listscroll_midp_info_pane_t4_ParamLimits

0x9625,	// (0x00015198) listscroll_midp_info_pane_t4

0x0003,

0xf7fb,	// (0x0001b36e) listscroll_midp_info_pane_t_ParamLimits

0xf7fb,	// (0x0001b36e) listscroll_midp_info_pane_t

0x7d18,	// (0x0001388b) scroll_pane_cp21

0x9533,	// (0x000150a6) form_midp_field_choice_group_pane

0x953c,	// (0x000150af) form_midp_field_text_pane

0x957b,	// (0x000150ee) form_midp_field_time_pane

0x9583,	// (0x000150f6) form_midp_gauge_slider_pane

0x958c,	// (0x000150ff) form_midp_gauge_wait_pane

0x6b37,	// (0x000126aa) form_midp_image_pane

0x9505,	// (0x00015078) list_single_midp_pane_ParamLimits

0x9505,	// (0x00015078) list_single_midp_pane

0x94bd,	// (0x00015030) form_midp_field_text_pane_t1

0x927e,	// (0x00014df1) input_focus_pane_cp050

0x94f4,	// (0x00015067) list_midp_form_text_pane

0x948c,	// (0x00014fff) form_midp_field_choice_group_pane_t1

0x949a,	// (0x0001500d) input_focus_pane_cp051

0x94ae,	// (0x00015021) list_midp_choice_pane

0x6b37,	// (0x000126aa) status_idle_pane

0x9470,	// (0x00014fe3) form_midp_field_time_pane_t1

0x3acf,	// (0x0000f642) wait_anim_pane_g2_copy1

0x947e,	// (0x00014ff1) form_midp_field_time_pane_t2

0x0001,

0x8a0e,	// (0x00014581) aid_navinavi_width_2_pane

0xf7f6,	// (0x0001b369) form_midp_field_time_pane_t

0x6b37,	// (0x000126aa) input_focus_pane_cp052

0x6b37,	// (0x000126aa) bg_input_focus_pane_cp040

0x9430,	// (0x00014fa3) form_midp_gauge_slider_pane_t1

0x943e,	// (0x00014fb1) form_midp_gauge_slider_pane_t2

0x944c,	// (0x00014fbf) form_midp_gauge_slider_pane_t3

0x945a,	// (0x00014fcd) form_midp_gauge_slider_pane_t4

0x0003,

0xf7ed,	// (0x0001b360) form_midp_gauge_slider_pane_t

0x9468,	// (0x00014fdb) form_midp_slider_pane

0x6c17,	// (0x0001278a) bg_input_focus_pane_cp041_ParamLimits

0x6c17,	// (0x0001278a) bg_input_focus_pane_cp041

0x93fd,	// (0x00014f70) form_midp_gauge_wait_pane_t1_ParamLimits

0x93fd,	// (0x00014f70) form_midp_gauge_wait_pane_t1

0x940f,	// (0x00014f82) form_midp_gauge_wait_pane_t2_ParamLimits

0x940f,	// (0x00014f82) form_midp_gauge_wait_pane_t2

0x0001,

0xf7e8,	// (0x0001b35b) form_midp_gauge_wait_pane_t_ParamLimits

0xf7e8,	// (0x0001b35b) form_midp_gauge_wait_pane_t

0x9421,	// (0x00014f94) form_midp_wait_pane_ParamLimits

0x9421,	// (0x00014f94) form_midp_wait_pane

0x93c7,	// (0x00014f3a) form_midp_image_pane_g1

0x93d0,	// (0x00014f43) form_midp_image_pane_t1

0x93df,	// (0x00014f52) form_midp_image_pane_t2

0x93ee,	// (0x00014f61) form_midp_image_pane_t3

0x0002,

0xf7e1,	// (0x0001b354) form_midp_image_pane_t

0x93af,	// (0x00014f22) list_single_midp_pane_g1

0x93b8,	// (0x00014f2b) list_single_midp_pane_t1

0x9387,	// (0x00014efa) list_midp_form_item_pane_ParamLimits

0x9387,	// (0x00014efa) list_midp_form_item_pane

0x89b6,	// (0x00014529) list_midp_form_item_pane_t1

0x89c5,	// (0x00014538) midp_ticker_pane_g1

0x89d1,	// (0x00014544) midp_ticker_pane_g2

0x0001,

0xf72e,	// (0x0001b2a1) midp_ticker_pane_g

0x89dd,	// (0x00014550) midp_ticker_pane_t1

0xa81e,	// (0x00016391) midp_editing_number_pane_t1

0xa7fc,	// (0x0001636f) midp_editing_number_pane

0xa80b,	// (0x0001637e) midp_ticker_pane

0xa578,	// (0x000160eb) ai_message_heading_pane

0x6b37,	// (0x000126aa) bg_popup_window_pane_cp14

0xa580,	// (0x000160f3) listscroll_ai_message_pane

0xa502,	// (0x00016075) ai_message_heading_pane_g1_ParamLimits

0xa502,	// (0x00016075) ai_message_heading_pane_g1

0xa50e,	// (0x00016081) ai_message_heading_pane_g2_ParamLimits

0xa50e,	// (0x00016081) ai_message_heading_pane_g2

0xa51a,	// (0x0001608d) ai_message_heading_pane_g3_ParamLimits

0xa51a,	// (0x0001608d) ai_message_heading_pane_g3

0xa526,	// (0x00016099) ai_message_heading_pane_g4_ParamLimits

0xa526,	// (0x00016099) ai_message_heading_pane_g4

0x0003,

0xf922,	// (0x0001b495) ai_message_heading_pane_g_ParamLimits

0xf922,	// (0x0001b495) ai_message_heading_pane_g

0xa532,	// (0x000160a5) ai_message_heading_pane_t1_ParamLimits

0xa532,	// (0x000160a5) ai_message_heading_pane_t1

0xa54c,	// (0x000160bf) ai_message_heading_pane_t2_ParamLimits

0xa54c,	// (0x000160bf) ai_message_heading_pane_t2

0x0001,

0xf92b,	// (0x0001b49e) ai_message_heading_pane_t_ParamLimits

0xf92b,	// (0x0001b49e) ai_message_heading_pane_t

0xa55e,	// (0x000160d1) bg_popup_heading_pane_cp1_ParamLimits

0xa55e,	// (0x000160d1) bg_popup_heading_pane_cp1

0xa4f0,	// (0x00016063) list_ai_message_pane_ParamLimits

0xa4f0,	// (0x00016063) list_ai_message_pane

0x7d18,	// (0x0001388b) scroll_pane_cp10

0xa48c,	// (0x00015fff) list_ai_message_pane_g1

0xa494,	// (0x00016007) list_ai_message_pane_g2

0x0001,

0xf8ff,	// (0x0001b472) list_ai_message_pane_g

0xa49c,	// (0x0001600f) list_ai_message_pane_t1_ParamLimits

0xa49c,	// (0x0001600f) list_ai_message_pane_t1

0xa4b1,	// (0x00016024) list_ai_message_pane_t2_ParamLimits

0xa4b1,	// (0x00016024) list_ai_message_pane_t2

0xa4c6,	// (0x00016039) list_ai_message_pane_t3_ParamLimits

0xa4c6,	// (0x00016039) list_ai_message_pane_t3

0xa4db,	// (0x0001604e) list_ai_message_pane_t4_ParamLimits

0xa4db,	// (0x0001604e) list_ai_message_pane_t4

0x0003,

0xf904,	// (0x0001b477) list_ai_message_pane_t_ParamLimits

0xf904,	// (0x0001b477) list_ai_message_pane_t

0xa477,	// (0x00015fea) cell_ai_soft_ind_pane_ParamLimits

0xa477,	// (0x00015fea) cell_ai_soft_ind_pane

0x89ef,	// (0x00014562) cell_ai_soft_ind_pane_g1_ParamLimits

0x89ef,	// (0x00014562) cell_ai_soft_ind_pane_g1

0x6b37,	// (0x000126aa) grid_highlight_cp1

0x89fc,	// (0x0001456f) text_secondary_cp56_ParamLimits

0x89fc,	// (0x0001456f) text_secondary_cp56

0xa44c,	// (0x00015fbf) example_general_pane_ParamLimits

0xa44c,	// (0x00015fbf) example_general_pane

0xa458,	// (0x00015fcb) example_parent_pane_g1_ParamLimits

0xa458,	// (0x00015fcb) example_parent_pane_g1

0xa464,	// (0x00015fd7) example_parent_pane_t1_ParamLimits

0xa464,	// (0x00015fd7) example_parent_pane_t1

0x52f2,	// (0x00010e65) popup_preview_text_window_ParamLimits

0x52f2,	// (0x00010e65) popup_preview_text_window

0x8825,	// (0x00014398) list_single_pane_cp2_g4

0x6f88,	// (0x00012afb) bg_popup_preview_window_pane_ParamLimits

0x6f88,	// (0x00012afb) bg_popup_preview_window_pane

0xa199,	// (0x00015d0c) popup_preview_text_window_t1_ParamLimits

0xa199,	// (0x00015d0c) popup_preview_text_window_t1

0xa1b7,	// (0x00015d2a) popup_preview_text_window_t2_ParamLimits

0xa1b7,	// (0x00015d2a) popup_preview_text_window_t2

0xa200,	// (0x00015d73) popup_preview_text_window_t3_ParamLimits

0xa200,	// (0x00015d73) popup_preview_text_window_t3

0xa245,	// (0x00015db8) popup_preview_text_window_t4_ParamLimits

0xa245,	// (0x00015db8) popup_preview_text_window_t4

0x0004,

0xf8d3,	// (0x0001b446) popup_preview_text_window_t_ParamLimits

0xf8d3,	// (0x0001b446) popup_preview_text_window_t

0xa2c3,	// (0x00015e36) scroll_pane_cp11

0x915c,	// (0x00014ccf) bg_popup_preview_window_pane_g1

0xa159,	// (0x00015ccc) bg_popup_preview_window_pane_g2

0xa161,	// (0x00015cd4) bg_popup_preview_window_pane_g3

0xa169,	// (0x00015cdc) bg_popup_preview_window_pane_g4

0xa171,	// (0x00015ce4) bg_popup_preview_window_pane_g5

0xa179,	// (0x00015cec) bg_popup_preview_window_pane_g6

0xa181,	// (0x00015cf4) bg_popup_preview_window_pane_g7

0xa189,	// (0x00015cfc) bg_popup_preview_window_pane_g8

0x44d2,	// (0x00010045) aid_popup_width_pane

0x52d0,	// (0x00010e43) popup_midp_note_alarm_window_ParamLimits

0x52d0,	// (0x00010e43) popup_midp_note_alarm_window

0x79e7,	// (0x0001355a) data_form_pane_ParamLimits

0x79f3,	// (0x00013566) form_field_data_pane_g1

0x79fd,	// (0x00013570) form_field_data_pane_t1_ParamLimits

0x7a15,	// (0x00013588) input_focus_pane_ParamLimits

0x7a23,	// (0x00013596) data_form_wide_pane_ParamLimits

0x7a2f,	// (0x000135a2) form_field_data_wide_pane_g1

0x7a5b,	// (0x000135ce) form_field_data_wide_pane_t1_ParamLimits

0x722f,	// (0x00012da2) input_focus_pane_cp6_ParamLimits

0x7cc5,	// (0x00013838) input_popup_find_pane_g1_ParamLimits

0x7cc5,	// (0x00013838) input_popup_find_pane_g1

0x4a4e,	// (0x000105c1) aid_navi_side_left_pane

0x4a63,	// (0x000105d6) aid_navi_side_right_pane

0x9b72,	// (0x000156e5) bg_popup_window_pane_cp30_ParamLimits

0x9b72,	// (0x000156e5) bg_popup_window_pane_cp30

0x9bec,	// (0x0001575f) popup_midp_note_alarm_window_g1_ParamLimits

0x9bec,	// (0x0001575f) popup_midp_note_alarm_window_g1

0x9c1c,	// (0x0001578f) popup_midp_note_alarm_window_t1_ParamLimits

0x9c1c,	// (0x0001578f) popup_midp_note_alarm_window_t1

0x9cbd,	// (0x00015830) popup_midp_note_alarm_window_t2_ParamLimits

0x9cbd,	// (0x00015830) popup_midp_note_alarm_window_t2

0x9d6b,	// (0x000158de) popup_midp_note_alarm_window_t3_ParamLimits

0x9d6b,	// (0x000158de) popup_midp_note_alarm_window_t3

0x9d9d,	// (0x00015910) popup_midp_note_alarm_window_t4_ParamLimits

0x9d9d,	// (0x00015910) popup_midp_note_alarm_window_t4

0x9dc3,	// (0x00015936) popup_midp_note_alarm_window_t5_ParamLimits

0x9dc3,	// (0x00015936) popup_midp_note_alarm_window_t5

0x000a,

0xf870,	// (0x0001b3e3) popup_midp_note_alarm_window_t_ParamLimits

0xf870,	// (0x0001b3e3) popup_midp_note_alarm_window_t

0x9e6f,	// (0x000159e2) wait_bar_pane_cp1_ParamLimits

0x9e6f,	// (0x000159e2) wait_bar_pane_cp1

0x6b37,	// (0x000126aa) wait_anim_pane_copy1

0x6b37,	// (0x000126aa) wait_border_pane_copy1

0x9858,	// (0x000153cb) wait_border_pane_g1_copy1

0x7a72,	// (0x000135e5) form_field_popup_pane_g1

0x7a7a,	// (0x000135ed) form_field_popup_pane_t1_ParamLimits

0x7a15,	// (0x00013588) input_focus_pane_cp7_ParamLimits

0x7a92,	// (0x00013605) list_form_pane_ParamLimits

0x7a9e,	// (0x00013611) form_field_popup_wide_pane_g1

0x7aa6,	// (0x00013619) form_field_popup_wide_pane_t1_ParamLimits

0x7a15,	// (0x00013588) input_focus_pane_cp8_ParamLimits

0x7ab8,	// (0x0001362b) list_form_wide_pane_ParamLimits

0xaa59,	// (0x000165cc) aid_size_cell_graphic_pane

0x7b8c,	// (0x000136ff) data_form_pane_t1_ParamLimits

0xa7c9,	// (0x0001633c) data_form_wide_pane_t1_ParamLimits

0x8d0d,	// (0x00014880) bg_status_flat_pane

0x6b77,	// (0x000126ea) title_pane_t1_ParamLimits

0x6bdf,	// (0x00012752) title_pane_t2_ParamLimits

0x6c05,	// (0x00012778) title_pane_t3_ParamLimits

0xf532,	// (0x0001b0a5) title_pane_t_ParamLimits

0x8199,	// (0x00013d0c) level_1_signal_ParamLimits

0x81ab,	// (0x00013d1e) level_2_signal_ParamLimits

0x81be,	// (0x00013d31) level_3_signal_ParamLimits

0x81d1,	// (0x00013d44) level_4_signal_ParamLimits

0x81e4,	// (0x00013d57) level_5_signal_ParamLimits

0x81f7,	// (0x00013d6a) level_6_signal_ParamLimits

0x820a,	// (0x00013d7d) level_7_signal_ParamLimits

0x8199,	// (0x00013d0c) level_1_battery_ParamLimits

0x81ab,	// (0x00013d1e) level_2_battery_ParamLimits

0x81be,	// (0x00013d31) level_3_battery_ParamLimits

0x81d1,	// (0x00013d44) level_4_battery_ParamLimits

0x81e4,	// (0x00013d57) level_5_battery_ParamLimits

0x81f7,	// (0x00013d6a) level_6_battery_ParamLimits

0x820a,	// (0x00013d7d) level_7_battery_ParamLimits

0x9a77,	// (0x000155ea) bg_status_flat_pane_g1

0x9a7f,	// (0x000155f2) bg_status_flat_pane_g2

0x9a87,	// (0x000155fa) bg_status_flat_pane_g3

0x9a8f,	// (0x00015602) bg_status_flat_pane_g4

0x9a97,	// (0x0001560a) bg_status_flat_pane_g5

0x9a9f,	// (0x00015612) bg_status_flat_pane_g6

0x9aa7,	// (0x0001561a) bg_status_flat_pane_g7

0x6c2d,	// (0x000127a0) tabs_3_active_pane_t1_ParamLimits

0x6c2d,	// (0x000127a0) tabs_3_passive_pane_t1_ParamLimits

0x6c47,	// (0x000127ba) tabs_4_active_pane_t1_ParamLimits

0x6c47,	// (0x000127ba) tabs_4_1_passive_pane_t1_ParamLimits

0x7d59,	// (0x000138cc) tabs_2_active_pane_t1_ParamLimits

0x7d59,	// (0x000138cc) tabs_2_passive_pane_t1_ParamLimits

0x7d6b,	// (0x000138de) bg_active_tab_pane_cp4_ParamLimits

0x7d79,	// (0x000138ec) tabs_2_long_active_pane_t1_ParamLimits

0x7d8c,	// (0x000138ff) bg_passive_tab_pane_cp4_ParamLimits

0x5617,	// (0x0001118a) list_single_midp_graphic_pane_t1_ParamLimits

0x7d6b,	// (0x000138de) bg_active_tab_pane_cp5_ParamLimits

0x7d98,	// (0x0001390b) tabs_3_long_active_pane_t1_ParamLimits

0x7d8c,	// (0x000138ff) bg_passive_tab_pane_cp5_ParamLimits

0x5617,	// (0x0001118a) list_single_midp_graphic_pane_t1

0x8d0d,	// (0x00014880) bg_status_flat_pane_ParamLimits

0x8dd6,	// (0x00014949) indicator_pane_cp2_ParamLimits

0x8dd6,	// (0x00014949) indicator_pane_cp2

0x8f01,	// (0x00014a74) navi_pane_srt_ParamLimits

0x8f01,	// (0x00014a74) navi_pane_srt

0x8f25,	// (0x00014a98) popup_clock_digital_analogue_window_cp1

0x6d0e,	// (0x00012881) indicator_pane_t1

0x88e8,	// (0x0001445b) copy_highlight_pane

0x88e8,	// (0x0001445b) cursor_graphics_pane

0x88e8,	// (0x0001445b) graphic_within_text_pane

0x88e8,	// (0x0001445b) link_highlight_pane

0xa286,	// (0x00015df9) popup_preview_text_window_t5_ParamLimits

0xa286,	// (0x00015df9) popup_preview_text_window_t5

0x8a16,	// (0x00014589) cursor_digital_pane

0x8a16,	// (0x00014589) cursor_primary_pane

0x8a27,	// (0x0001459a) cursor_primary_small_pane

0x8a2f,	// (0x000145a2) cursor_secondary_pane

0x8a37,	// (0x000145aa) cursor_title_pane

0x8a16,	// (0x00014589) link_highlight_digital_pane

0x8a1e,	// (0x00014591) link_highlight_primary_pane

0x8a27,	// (0x0001459a) link_highlight_primary_small_pane

0x8a2f,	// (0x000145a2) link_highlight_secondary_pane

0x8a37,	// (0x000145aa) link_highlight_title_pane

0x8a16,	// (0x00014589) copy_highlight_digital_pane

0x8a16,	// (0x00014589) copy_highlight_primary_pane

0x8a27,	// (0x0001459a) copy_highlight_primary_small_pane

0x8a2f,	// (0x000145a2) copy_highlight_secondary_pane

0x8a37,	// (0x000145aa) copy_highlight_title_pane

0x8a2f,	// (0x000145a2) graphic_text_digital_pane

0x9b15,	// (0x00015688) graphic_text_primary_pane

0x9b1e,	// (0x00015691) graphic_text_primary_small_pane

0x8a27,	// (0x0001459a) graphic_text_secondary_pane

0x8a16,	// (0x00014589) graphic_text_title_pane

0x8a3f,	// (0x000145b2) cursor_primary_pane_g1

0x9b07,	// (0x0001567a) cursor_text_primary_t1

0x9aef,	// (0x00015662) cursor_primary_small_pane_g1

0x9af9,	// (0x0001566c) cursor_text_primary_small_t1

0x9ad7,	// (0x0001564a) cursor_primary_small_pane_g1_copy1

0x9ae1,	// (0x00015654) cursor_text_primary_small_t1_copy1

0x9abf,	// (0x00015632) cursor_text_title_t1

0x9acd,	// (0x00015640) cursor_title_pane_g1

0x8a3f,	// (0x000145b2) cursor_digital_pane_g1

0x8a49,	// (0x000145bc) cursor_text_digital_t1

0x8a6e,	// (0x000145e1) link_highlight_primary_pane_g1

0x9a68,	// (0x000155db) link_highlight_primary_pane_t1

0x8a57,	// (0x000145ca) link_highlight_primary_small_pane_g1

0x8a5f,	// (0x000145d2) link_highlight_primary_small_pane_t1

0x8a6e,	// (0x000145e1) link_highlight_secondary_pane_g1

0x8a76,	// (0x000145e9) link_highlight_secondary_pane_t1

0x99dc,	// (0x0001554f) link_highlight_title_pane_g1

0x99e4,	// (0x00015557) link_highlight_title_pane_t1

0x99c5,	// (0x00015538) link_highlight_digital_pane_g1

0x99cd,	// (0x00015540) link_highlight_digital_pane_t1

0x989d,	// (0x00015410) copy_highlight_primary_pane_g1

0x98a5,	// (0x00015418) copy_highlight_primary_pane_t1

0x9877,	// (0x000153ea) copy_highlight_primary_small_pane_g1

0x988e,	// (0x00015401) copy_highlight_primary_small_pane_t1

0x8a85,	// (0x000145f8) copy_highlight_secondary_pane_g1

0x8a8d,	// (0x00014600) copy_highlight_secondary_pane_t1

0x9877,	// (0x000153ea) copy_highlight_title_pane_g1

0x987f,	// (0x000153f2) copy_highlight_title_pane_t1

0x989d,	// (0x00015410) copy_highlight_digital_pane_g1

0xac27,	// (0x0001679a) copy_highlight_digital_pane_t1

0xab7b,	// (0x000166ee) graphic_text_primary_pane_g1

0xac0b,	// (0x0001677e) graphic_text_primary_pane_t1

0xac19,	// (0x0001678c) graphic_text_primary_pane_t2

0x0001,

0xf99f,	// (0x0001b512) graphic_text_primary_pane_t

0xabe7,	// (0x0001675a) graphic_text_primary_small_pane_g1

0xabef,	// (0x00016762) graphic_text_primary_small_pane_t1

0xabfd,	// (0x00016770) graphic_text_primary_small_pane_t2

0x0001,

0xf99a,	// (0x0001b50d) graphic_text_primary_small_pane_t

0xabc3,	// (0x00016736) graphic_text_secondary_pane_g1

0xabcb,	// (0x0001673e) graphic_text_secondary_pane_t1

0xabd9,	// (0x0001674c) graphic_text_secondary_pane_t2

0x0001,

0xf995,	// (0x0001b508) graphic_text_secondary_pane_t

0xab9f,	// (0x00016712) graphic_text_title_pane_g1

0xaba7,	// (0x0001671a) graphic_text_title_pane_t1

0xabb5,	// (0x00016728) graphic_text_title_pane_t2

0x0001,

0xf990,	// (0x0001b503) graphic_text_title_pane_t

0xab7b,	// (0x000166ee) graphic_text_digital_pane_g1

0xab83,	// (0x000166f6) graphic_text_digital_pane_t1

0xab91,	// (0x00016704) graphic_text_digital_pane_t2

0x0001,

0xf98b,	// (0x0001b4fe) graphic_text_digital_pane_t

0x6c17,	// (0x0001278a) navi_icon_pane_srt_ParamLimits

0x6c17,	// (0x0001278a) navi_icon_pane_srt

0x6b37,	// (0x000126aa) navi_midp_pane_srt

0x6b37,	// (0x000126aa) navi_navi_pane_srt

0x6c17,	// (0x0001278a) navi_text_pane_srt_ParamLimits

0x6c17,	// (0x0001278a) navi_text_pane_srt

0xab46,	// (0x000166b9) navi_navi_icon_text_pane_srt

0xab4e,	// (0x000166c1) navi_navi_pane_srt_g1_ParamLimits

0xab4e,	// (0x000166c1) navi_navi_pane_srt_g1

0xab60,	// (0x000166d3) navi_navi_pane_srt_g2_ParamLimits

0xab60,	// (0x000166d3) navi_navi_pane_srt_g2

0x0001,

0xf986,	// (0x0001b4f9) navi_navi_pane_srt_g_ParamLimits

0xf986,	// (0x0001b4f9) navi_navi_pane_srt_g

0xab72,	// (0x000166e5) navi_navi_tabs_pane_srt

0xab46,	// (0x000166b9) navi_navi_text_pane_srt

0xab46,	// (0x000166b9) navi_navi_volume_pane_srt

0xab37,	// (0x000166aa) navi_navi_text_pane_srt_t1

0x5991,	// (0x00011504) navi_navi_volume_pane_srt_g1

0x5999,	// (0x0001150c) volume_small_pane_srt_ParamLimits

0x5999,	// (0x0001150c) volume_small_pane_srt

0x4d2e,	// (0x000108a1) volume_small_pane_srt_g1_ParamLimits

0x4d2e,	// (0x000108a1) volume_small_pane_srt_g1

0x4d3e,	// (0x000108b1) volume_small_pane_srt_g2_ParamLimits

0x4d3e,	// (0x000108b1) volume_small_pane_srt_g2

0x4d4f,	// (0x000108c2) volume_small_pane_srt_g3_ParamLimits

0x4d4f,	// (0x000108c2) volume_small_pane_srt_g3

0x4d60,	// (0x000108d3) volume_small_pane_srt_g4_ParamLimits

0x4d60,	// (0x000108d3) volume_small_pane_srt_g4

0x4d71,	// (0x000108e4) volume_small_pane_srt_g5_ParamLimits

0x4d71,	// (0x000108e4) volume_small_pane_srt_g5

0x4d82,	// (0x000108f5) volume_small_pane_srt_g6_ParamLimits

0x4d82,	// (0x000108f5) volume_small_pane_srt_g6

0x4d93,	// (0x00010906) volume_small_pane_srt_g7_ParamLimits

0x4d93,	// (0x00010906) volume_small_pane_srt_g7

0x4da4,	// (0x00010917) volume_small_pane_srt_g8_ParamLimits

0x4da4,	// (0x00010917) volume_small_pane_srt_g8

0x4db5,	// (0x00010928) volume_small_pane_srt_g9_ParamLimits

0x4db5,	// (0x00010928) volume_small_pane_srt_g9

0x4dc6,	// (0x00010939) volume_small_pane_srt_g10_ParamLimits

0x4dc6,	// (0x00010939) volume_small_pane_srt_g10

0x0009,

0xf733,	// (0x0001b2a6) volume_small_pane_srt_g_ParamLimits

0xf733,	// (0x0001b2a6) volume_small_pane_srt_g

0x7031,	// (0x00012ba4) query_popup_data_pane_cp2

0xab1d,	// (0x00016690) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xab1d,	// (0x00016690) navi_navi_icon_text_pane_srt_t1

0x9b15,	// (0x00015688) navi_tabs_2_long_pane_srt

0x9b15,	// (0x00015688) navi_tabs_2_pane_srt

0x9b15,	// (0x00015688) navi_tabs_3_long_pane_srt

0x9b15,	// (0x00015688) navi_tabs_3_pane_srt

0x9b15,	// (0x00015688) navi_tabs_4_pane_srt

0x5971,	// (0x000114e4) tabs_2_active_pane_srt_ParamLimits

0x5971,	// (0x000114e4) tabs_2_active_pane_srt

0x5981,	// (0x000114f4) tabs_2_passive_pane_srt_ParamLimits

0x5981,	// (0x000114f4) tabs_2_passive_pane_srt

0x8c14,	// (0x00014787) bg_passive_tab_pane_cp1_srt_ParamLimits

0x8c14,	// (0x00014787) bg_passive_tab_pane_cp1_srt

0xaae9,	// (0x0001665c) bg_passive_tab_pane_g1_cp1_srt

0x852a,	// (0x0001409d) bg_passive_tab_pane_g2_cp1_srt

0xaaf2,	// (0x00016665) bg_passive_tab_pane_g3_cp1_srt

0x6c17,	// (0x0001278a) bg_active_tab_pane_cp1_srt_ParamLimits

0x6c17,	// (0x0001278a) bg_active_tab_pane_cp1_srt

0xaafb,	// (0x0001666e) tabs_2_active_pane_srt_g1

0xab03,	// (0x00016676) tabs_2_active_pane_srt_t1_ParamLimits

0xab03,	// (0x00016676) tabs_2_active_pane_srt_t1

0xaae9,	// (0x0001665c) bg_active_tab_pane_g1_cp1_srt

0x852a,	// (0x0001409d) bg_active_tab_pane_g2_cp1_srt

0xaaf2,	// (0x00016665) bg_active_tab_pane_g3_cp1_srt

0x593e,	// (0x000114b1) tabs_3_active_pane_srt_ParamLimits

0x593e,	// (0x000114b1) tabs_3_active_pane_srt

0x594f,	// (0x000114c2) tabs_3_passive_pane_cp_srt_ParamLimits

0x594f,	// (0x000114c2) tabs_3_passive_pane_cp_srt

0x5960,	// (0x000114d3) tabs_3_passive_pane_srt_ParamLimits

0x5960,	// (0x000114d3) tabs_3_passive_pane_srt

0x8c14,	// (0x00014787) bg_passive_tab_pane_cp2_srt_ParamLimits

0x8c14,	// (0x00014787) bg_passive_tab_pane_cp2_srt

0x8a9c,	// (0x0001460f) bg_passive_tab_pane_g1_cp2_srt

0x852a,	// (0x0001409d) bg_passive_tab_pane_g2_cp2_srt

0x8aa5,	// (0x00014618) bg_passive_tab_pane_g3_cp2_srt

0x6c17,	// (0x0001278a) bg_active_tab_pane_cp2_srt_ParamLimits

0x6c17,	// (0x0001278a) bg_active_tab_pane_cp2_srt

0xaacf,	// (0x00016642) tabs_3_active_pane_srt_g1

0xaad7,	// (0x0001664a) tabs_3_active_pane_srt_t1_ParamLimits

0xaad7,	// (0x0001664a) tabs_3_active_pane_srt_t1

0x8a9c,	// (0x0001460f) bg_active_tab_pane_g1_cp2_srt

0x852a,	// (0x0001409d) bg_active_tab_pane_g2_cp2_srt

0x8aa5,	// (0x00014618) bg_active_tab_pane_g3_cp2_srt

0x58f6,	// (0x00011469) tabs_4_active_pane_srt_ParamLimits

0x58f6,	// (0x00011469) tabs_4_active_pane_srt

0x5908,	// (0x0001147b) tabs_4_passive_pane_cp2_srt_ParamLimits

0x5908,	// (0x0001147b) tabs_4_passive_pane_cp2_srt

0x4f39,	// (0x00010aac) aid_size_cell_toolbar

0x7d8c,	// (0x000138ff) main_idle_act_pane_ParamLimits

0x5106,	// (0x00010c79) popup_large_graphic_colour_window_ParamLimits

0x546d,	// (0x00010fe0) popup_toolbar_window_ParamLimits

0x546d,	// (0x00010fe0) popup_toolbar_window

0xa848,	// (0x000163bb) list_single_graphic_2heading_pane_ParamLimits

0xa848,	// (0x000163bb) list_single_graphic_2heading_pane

0x7f48,	// (0x00013abb) aid_size_cell_apps_grid_lsc_pane

0x7f5a,	// (0x00013acd) aid_size_cell_apps_grid_prt_pane

0x8c14,	// (0x00014787) bg_wml_button_pane_cp1_ParamLimits

0x8c14,	// (0x00014787) bg_wml_button_pane_cp1

0x94bd,	// (0x00015030) form_midp_field_text_pane_t1_ParamLimits

0x927e,	// (0x00014df1) input_focus_pane_cp050_ParamLimits

0x94f4,	// (0x00015067) list_midp_form_text_pane_ParamLimits

0x949a,	// (0x0001500d) input_focus_pane_cp051_ParamLimits

0x94ae,	// (0x00015021) list_midp_choice_pane_ParamLimits

0x9337,	// (0x00014eaa) list_single_2graphic_pane_cp3_ParamLimits

0x9337,	// (0x00014eaa) list_single_2graphic_pane_cp3

0x9358,	// (0x00014ecb) list_single_midp_graphic_pane_ParamLimits

0x9358,	// (0x00014ecb) list_single_midp_graphic_pane

0x551a,	// (0x0001108d) list_single_graphic_2heading_pane_g1_ParamLimits

0x551a,	// (0x0001108d) list_single_graphic_2heading_pane_g1

0x5526,	// (0x00011099) list_single_graphic_2heading_pane_g4_ParamLimits

0x5526,	// (0x00011099) list_single_graphic_2heading_pane_g4

0x5532,	// (0x000110a5) list_single_graphic_2heading_pane_g5_ParamLimits

0x5532,	// (0x000110a5) list_single_graphic_2heading_pane_g5

0x0002,

0xf786,	// (0x0001b2f9) list_single_graphic_2heading_pane_g_ParamLimits

0xf786,	// (0x0001b2f9) list_single_graphic_2heading_pane_g

0x553e,	// (0x000110b1) list_single_graphic_2heading_pane_t1_ParamLimits

0x553e,	// (0x000110b1) list_single_graphic_2heading_pane_t1

0x5552,	// (0x000110c5) list_single_graphic_2heading_pane_t2_ParamLimits

0x5552,	// (0x000110c5) list_single_graphic_2heading_pane_t2

0x556e,	// (0x000110e1) list_single_graphic_2heading_pane_t3_ParamLimits

0x556e,	// (0x000110e1) list_single_graphic_2heading_pane_t3

0x0002,

0xf78d,	// (0x0001b300) list_single_graphic_2heading_pane_t_ParamLimits

0xf78d,	// (0x0001b300) list_single_graphic_2heading_pane_t

0x9084,	// (0x00014bf7) bg_popup_sub_pane_cp2

0x90ae,	// (0x00014c21) grid_toobar_pane

0x5586,	// (0x000110f9) cell_toolbar_pane_ParamLimits

0x5586,	// (0x000110f9) cell_toolbar_pane

0x9100,	// (0x00014c73) cell_toolbar_pane_g1_ParamLimits

0x9100,	// (0x00014c73) cell_toolbar_pane_g1

0x9114,	// (0x00014c87) cell_toolbar_pane_g2_ParamLimits

0x9114,	// (0x00014c87) cell_toolbar_pane_g2

0x0001,

0xf79b,	// (0x0001b30e) cell_toolbar_pane_g_ParamLimits

0xf79b,	// (0x0001b30e) cell_toolbar_pane_g

0x9136,	// (0x00014ca9) grid_highlight_pane_cp2_ParamLimits

0x9136,	// (0x00014ca9) grid_highlight_pane_cp2

0x9150,	// (0x00014cc3) toolbar_button_pane

0x915c,	// (0x00014ccf) toolbar_button_pane_g1

0x9164,	// (0x00014cd7) toolbar_button_pane_g2

0x916c,	// (0x00014cdf) toolbar_button_pane_g3

0x9174,	// (0x00014ce7) toolbar_button_pane_g4

0x917c,	// (0x00014cef) toolbar_button_pane_g5

0x9184,	// (0x00014cf7) toolbar_button_pane_g6

0x918c,	// (0x00014cff) toolbar_button_pane_g7

0x9194,	// (0x00014d07) toolbar_button_pane_g8

0x919c,	// (0x00014d0f) toolbar_button_pane_g9

0x0009,

0xf7a0,	// (0x0001b313) toolbar_button_pane_g

0x55be,	// (0x00011131) list_single_2graphic_pane_g1_cp3_ParamLimits

0x55be,	// (0x00011131) list_single_2graphic_pane_g1_cp3

0x55ca,	// (0x0001113d) list_single_2graphic_pane_g2_cp3_ParamLimits

0x55ca,	// (0x0001113d) list_single_2graphic_pane_g2_cp3

0x55db,	// (0x0001114e) list_single_2graphic_pane_g3_cp3

0x55e3,	// (0x00011156) list_single_2graphic_pane_g4_cp3_ParamLimits

0x55e3,	// (0x00011156) list_single_2graphic_pane_g4_cp3

0x55ef,	// (0x00011162) list_single_2graphic_pane_t1_cp3_ParamLimits

0x55ef,	// (0x00011162) list_single_2graphic_pane_t1_cp3

0x560b,	// (0x0001117e) list_single_midp_graphic_pane_g2_ParamLimits

0x560b,	// (0x0001117e) list_single_midp_graphic_pane_g2

0x4f41,	// (0x00010ab4) aid_zoom_text_primary

0x4f49,	// (0x00010abc) aid_zoom_text_secondary

0x8b56,	// (0x000146c9) status_small_pane_g7_ParamLimits

0x8b56,	// (0x000146c9) status_small_pane_g7

0x8b79,	// (0x000146ec) status_small_pane_t1_ParamLimits

0x6b4e,	// (0x000126c1) title_pane_g2

0x0003,

0xf529,	// (0x0001b09c) title_pane_g

0x70d9,	// (0x00012c4c) aid_size_cell_colour_1_pane_ParamLimits

0x70d9,	// (0x00012c4c) aid_size_cell_colour_1_pane

0x70ed,	// (0x00012c60) aid_size_cell_colour_2_pane_ParamLimits

0x70ed,	// (0x00012c60) aid_size_cell_colour_2_pane

0x7101,	// (0x00012c74) aid_size_cell_colour_3_pane_ParamLimits

0x7101,	// (0x00012c74) aid_size_cell_colour_3_pane

0x7115,	// (0x00012c88) aid_size_cell_colour_4_pane_ParamLimits

0x7115,	// (0x00012c88) aid_size_cell_colour_4_pane

0x498b,	// (0x000104fe) title_pane_stacon_g1_ParamLimits

0x498b,	// (0x000104fe) title_pane_stacon_g1

0x98fc,	// (0x0001546f) popup_note_wait_window_g3_ParamLimits

0x98fc,	// (0x0001546f) popup_note_wait_window_g3

0x9972,	// (0x000154e5) popup_note_wait_window_t5_ParamLimits

0x9972,	// (0x000154e5) popup_note_wait_window_t5

0x6b37,	// (0x000126aa) main_feb_china_hwr_fs_writing_pane

0x4fe7,	// (0x00010b5a) popup_feb_china_hwr_fs_window_ParamLimits

0x4fe7,	// (0x00010b5a) popup_feb_china_hwr_fs_window

0x562d,	// (0x000111a0) aid_size_cell_hwr_fs_ParamLimits

0x562d,	// (0x000111a0) aid_size_cell_hwr_fs

0x927e,	// (0x00014df1) bg_popup_sub_pane_cp3_ParamLimits

0x927e,	// (0x00014df1) bg_popup_sub_pane_cp3

0x5642,	// (0x000111b5) grid_hwr_fs_pane_ParamLimits

0x5642,	// (0x000111b5) grid_hwr_fs_pane

0x565a,	// (0x000111cd) linegrid_hwr_fs_pane_ParamLimits

0x565a,	// (0x000111cd) linegrid_hwr_fs_pane

0x566a,	// (0x000111dd) cell_hwr_fs_pane_ParamLimits

0x566a,	// (0x000111dd) cell_hwr_fs_pane

0x928a,	// (0x00014dfd) linegrid_hwr_fs_pane_g1_ParamLimits

0x928a,	// (0x00014dfd) linegrid_hwr_fs_pane_g1

0x9296,	// (0x00014e09) linegrid_hwr_fs_pane_g2_ParamLimits

0x9296,	// (0x00014e09) linegrid_hwr_fs_pane_g2

0x92a8,	// (0x00014e1b) linegrid_hwr_fs_pane_g3_ParamLimits

0x92a8,	// (0x00014e1b) linegrid_hwr_fs_pane_g3

0x568c,	// (0x000111ff) linegrid_hwr_fs_pane_g4_ParamLimits

0x568c,	// (0x000111ff) linegrid_hwr_fs_pane_g4

0x56a6,	// (0x00011219) linegrid_hwr_fs_pane_g5_ParamLimits

0x56a6,	// (0x00011219) linegrid_hwr_fs_pane_g5

0x0004,

0xf7c6,	// (0x0001b339) linegrid_hwr_fs_pane_g_ParamLimits

0xf7c6,	// (0x0001b339) linegrid_hwr_fs_pane_g

0x92b4,	// (0x00014e27) cell_hwr_fs_pane_g1_ParamLimits

0x92b4,	// (0x00014e27) cell_hwr_fs_pane_g1

0x8fbb,	// (0x00014b2e) cell_hwr_fs_pane_g2_ParamLimits

0x8fbb,	// (0x00014b2e) cell_hwr_fs_pane_g2

0x92ca,	// (0x00014e3d) cell_hwr_fs_pane_g3_ParamLimits

0x92ca,	// (0x00014e3d) cell_hwr_fs_pane_g3

0x92d7,	// (0x00014e4a) cell_hwr_fs_pane_g4_ParamLimits

0x92d7,	// (0x00014e4a) cell_hwr_fs_pane_g4

0x0003,

0xf7d1,	// (0x0001b344) cell_hwr_fs_pane_g_ParamLimits

0xf7d1,	// (0x0001b344) cell_hwr_fs_pane_g

0x56bc,	// (0x0001122f) cell_hwr_fs_pane_t1

0x6b37,	// (0x000126aa) grid_highlight_pane_cp6

0x6b37,	// (0x000126aa) main_idle_act2_pane

0x7cff,	// (0x00013872) aid_inside_area_popup_secondary

0x9fa9,	// (0x00015b1c) aid_inside_area_window_primary_ParamLimits

0x9fa9,	// (0x00015b1c) aid_inside_area_window_primary

0xac36,	// (0x000167a9) ai2_news_ticker_pane

0xac3e,	// (0x000167b1) aid_size_cell_ai1_link_ParamLimits

0xac3e,	// (0x000167b1) aid_size_cell_ai1_link

0xac58,	// (0x000167cb) popup_ai2_data_window_ParamLimits

0xac58,	// (0x000167cb) popup_ai2_data_window

0xac6e,	// (0x000167e1) popup_ai2_link_window_ParamLimits

0xac6e,	// (0x000167e1) popup_ai2_link_window

0x927e,	// (0x00014df1) bg_popup_sub_pane_cp4_ParamLimits

0x927e,	// (0x00014df1) bg_popup_sub_pane_cp4

0xac82,	// (0x000167f5) grid_ai2_link_pane_ParamLimits

0xac82,	// (0x000167f5) grid_ai2_link_pane

0xac99,	// (0x0001680c) popup_ai2_link_window_g1_ParamLimits

0xac99,	// (0x0001680c) popup_ai2_link_window_g1

0xaca5,	// (0x00016818) popup_ai2_link_window_g2_ParamLimits

0xaca5,	// (0x00016818) popup_ai2_link_window_g2

0x0001,

0xf9a4,	// (0x0001b517) popup_ai2_link_window_g_ParamLimits

0xf9a4,	// (0x0001b517) popup_ai2_link_window_g

0xacb4,	// (0x00016827) ai2_mp_button_pane

0xacbc,	// (0x0001682f) ai2_mp_volume_pane

0x949a,	// (0x0001500d) bg_popup_sub_pane_cp5_ParamLimits

0x949a,	// (0x0001500d) bg_popup_sub_pane_cp5

0xacc4,	// (0x00016837) heading_ai2_gene_pane_ParamLimits

0xacc4,	// (0x00016837) heading_ai2_gene_pane

0xacd0,	// (0x00016843) list_ai2_gene_pane_ParamLimits

0xacd0,	// (0x00016843) list_ai2_gene_pane

0xad18,	// (0x0001688b) cell_ai2_link_pane_ParamLimits

0xad18,	// (0x0001688b) cell_ai2_link_pane

0xad2e,	// (0x000168a1) cell_ai2_link_pane_g1

0x6b37,	// (0x000126aa) grid_highlight_pane_cp7

0x59ae,	// (0x00011521) ai2_mp_volume_pane_g1

0xadfe,	// (0x00016971) ai2_mp_volume_pane_g2

0xad73,	// (0x000168e6) list_ai2_gene_pane_t1

0xae06,	// (0x00016979) ai2_mp_volume_pane_g3

0x0002,

0xf9bd,	// (0x0001b530) ai2_mp_volume_pane_g

0x59b6,	// (0x00011529) volume_small_pane_cp3

0xae0e,	// (0x00016981) aid_size_cell_ai2_button

0xae16,	// (0x00016989) grid_ai2_button_pane

0xae1f,	// (0x00016992) cell_ai2_button_pane_ParamLimits

0xae1f,	// (0x00016992) cell_ai2_button_pane

0x3acf,	// (0x0000f642) cell_ai2_button_pane_g1

0x6b37,	// (0x000126aa) grid_highlight_pane_cp8

0xadbe,	// (0x00016931) ai2_gene_pane_t1_ParamLimits

0xadbe,	// (0x00016931) ai2_gene_pane_t1

0x4f2f,	// (0x00010aa2) aid_height_parent_landscape

0xa631,	// (0x000161a4) aid_height_set_list

0xa642,	// (0x000161b5) aid_size_parent

0xaa59,	// (0x000165cc) aid_size_cell_graphic_pane_ParamLimits

0xace0,	// (0x00016853) popup_ai2_data_window_g1_ParamLimits

0xace0,	// (0x00016853) popup_ai2_data_window_g1

0xacec,	// (0x0001685f) ai2_news_ticker_pane_g1

0xacf4,	// (0x00016867) ai2_news_ticker_pane_g2

0x0001,

0xf9a9,	// (0x0001b51c) ai2_news_ticker_pane_g

0xacfc,	// (0x0001686f) ai2_news_ticker_pane_t1

0xad0a,	// (0x0001687d) ai2_news_ticker_pane_t2

0x0001,

0xf9ae,	// (0x0001b521) ai2_news_ticker_pane_t

0xad37,	// (0x000168aa) heading_ai2_gene_pane_g1

0xad3f,	// (0x000168b2) heading_ai2_gene_pane_t1_ParamLimits

0xad3f,	// (0x000168b2) heading_ai2_gene_pane_t1

0xad54,	// (0x000168c7) list_highlight_pane_cp6

0xad5c,	// (0x000168cf) ai2_gene_pane_ParamLimits

0xad5c,	// (0x000168cf) ai2_gene_pane

0xad81,	// (0x000168f4) list_ai2_gene_pane_t2

0x0001,

0xf9b3,	// (0x0001b526) list_ai2_gene_pane_t

0xad8f,	// (0x00016902) list_highlight_pane_cp8_ParamLimits

0xad8f,	// (0x00016902) list_highlight_pane_cp8

0xada0,	// (0x00016913) ai2_gene_pane_g1_ParamLimits

0xada0,	// (0x00016913) ai2_gene_pane_g1

0xadb2,	// (0x00016925) ai2_gene_pane_g2_ParamLimits

0xadb2,	// (0x00016925) ai2_gene_pane_g2

0x0001,

0xf9b8,	// (0x0001b52b) ai2_gene_pane_g_ParamLimits

0xf9b8,	// (0x0001b52b) ai2_gene_pane_g

0x7454,	// (0x00012fc7) scroll_pane_cp12

0x4eec,	// (0x00010a5f) control_pane_t3_ParamLimits

0x4eec,	// (0x00010a5f) control_pane_t3

0x8b6a,	// (0x000146dd) status_small_pane_g8_ParamLimits

0x8b6a,	// (0x000146dd) status_small_pane_g8

0x50cd,	// (0x00010c40) popup_find_window_ParamLimits

0x52e4,	// (0x00010e57) popup_note_image_window_ParamLimits

0x74eb,	// (0x0001305e) list_double2_graphic_pane_vc_g1_ParamLimits

0x74eb,	// (0x0001305e) list_double2_graphic_pane_vc_g1

0x7471,	// (0x00012fe4) list_double2_graphic_pane_vc_g2_ParamLimits

0x7471,	// (0x00012fe4) list_double2_graphic_pane_vc_g2

0x747d,	// (0x00012ff0) list_double2_graphic_pane_vc_g3_ParamLimits

0x747d,	// (0x00012ff0) list_double2_graphic_pane_vc_g3

0x0002,

0xf794,	// (0x0001b307) list_double2_graphic_pane_vc_g_ParamLimits

0xf794,	// (0x0001b307) list_double2_graphic_pane_vc_g

0x90ea,	// (0x00014c5d) list_double2_graphic_pane_vc_t1_ParamLimits

0x90ea,	// (0x00014c5d) list_double2_graphic_pane_vc_t1

0x7471,	// (0x00012fe4) list_single_heading_pane_vc_g1_ParamLimits

0x7471,	// (0x00012fe4) list_single_heading_pane_vc_g1

0x747d,	// (0x00012ff0) list_single_heading_pane_vc_g2_ParamLimits

0x747d,	// (0x00012ff0) list_single_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x0001b116) list_single_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x0001b116) list_single_heading_pane_vc_g

0x91a4,	// (0x00014d17) list_single_heading_pane_vc_t1_ParamLimits

0x91a4,	// (0x00014d17) list_single_heading_pane_vc_t1

0x91ba,	// (0x00014d2d) list_single_heading_pane_vc_t2_ParamLimits

0x91ba,	// (0x00014d2d) list_single_heading_pane_vc_t2

0x0001,

0xf7b5,	// (0x0001b328) list_single_heading_pane_vc_t_ParamLimits

0xf7b5,	// (0x0001b328) list_single_heading_pane_vc_t

0x91cc,	// (0x00014d3f) list_setting_number_pane_vc_g1_ParamLimits

0x91cc,	// (0x00014d3f) list_setting_number_pane_vc_g1

0x91d8,	// (0x00014d4b) list_setting_number_pane_vc_g2_ParamLimits

0x91d8,	// (0x00014d4b) list_setting_number_pane_vc_g2

0x0001,

0xf7ba,	// (0x0001b32d) list_setting_number_pane_vc_g_ParamLimits

0xf7ba,	// (0x0001b32d) list_setting_number_pane_vc_g

0x91e4,	// (0x00014d57) list_setting_number_pane_vc_t1_ParamLimits

0x91e4,	// (0x00014d57) list_setting_number_pane_vc_t1

0x91f8,	// (0x00014d6b) list_setting_number_pane_vc_t2_ParamLimits

0x91f8,	// (0x00014d6b) list_setting_number_pane_vc_t2

0x9214,	// (0x00014d87) list_setting_number_pane_vc_t3_ParamLimits

0x9214,	// (0x00014d87) list_setting_number_pane_vc_t3

0x0002,

0xf7bf,	// (0x0001b332) list_setting_number_pane_vc_t_ParamLimits

0xf7bf,	// (0x0001b332) list_setting_number_pane_vc_t

0x9242,	// (0x00014db5) set_value_pane_vc_ParamLimits

0x9242,	// (0x00014db5) set_value_pane_vc

0xa848,	// (0x000163bb) list_double2_graphic_pane_vc_ParamLimits

0xa848,	// (0x000163bb) list_double2_graphic_pane_vc

0xa848,	// (0x000163bb) list_double2_large_graphic_pane_vc_ParamLimits

0xa848,	// (0x000163bb) list_double2_large_graphic_pane_vc

0xa848,	// (0x000163bb) list_double2_pane_vc_ParamLimits

0xa848,	// (0x000163bb) list_double2_pane_vc

0xa848,	// (0x000163bb) list_double_graphic_heading_pane_vc_ParamLimits

0xa848,	// (0x000163bb) list_double_graphic_heading_pane_vc

0xa848,	// (0x000163bb) list_double_graphic_pane_vc_ParamLimits

0xa848,	// (0x000163bb) list_double_graphic_pane_vc

0xa848,	// (0x000163bb) list_double_heading_pane_vc_ParamLimits

0xa848,	// (0x000163bb) list_double_heading_pane_vc

0xa85a,	// (0x000163cd) list_double_large_graphic_pane_vc_ParamLimits

0xa85a,	// (0x000163cd) list_double_large_graphic_pane_vc

0xa848,	// (0x000163bb) list_double_number_pane_vc_ParamLimits

0xa848,	// (0x000163bb) list_double_number_pane_vc

0xa848,	// (0x000163bb) list_double_pane_vc_ParamLimits

0xa848,	// (0x000163bb) list_double_pane_vc

0xa848,	// (0x000163bb) list_double_time_pane_vc_ParamLimits

0xa848,	// (0x000163bb) list_double_time_pane_vc

0xa848,	// (0x000163bb) list_setting_number_pane_vc_ParamLimits

0xa848,	// (0x000163bb) list_setting_number_pane_vc

0xa848,	// (0x000163bb) list_setting_pane_vc_ParamLimits

0xa848,	// (0x000163bb) list_setting_pane_vc

0xa848,	// (0x000163bb) list_single_graphic_heading_pane_vc_ParamLimits

0xa848,	// (0x000163bb) list_single_graphic_heading_pane_vc

0xa848,	// (0x000163bb) list_single_heading_pane_vc_ParamLimits

0xa848,	// (0x000163bb) list_single_heading_pane_vc

0xa878,	// (0x000163eb) list_single_number_heading_pane_vc_ParamLimits

0xa878,	// (0x000163eb) list_single_number_heading_pane_vc

0x74eb,	// (0x0001305e) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x74eb,	// (0x0001305e) list_double_graphic_heading_pane_vc_g1

0xae53,	// (0x000169c6) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xae53,	// (0x000169c6) list_double_graphic_heading_pane_vc_g2

0xae5f,	// (0x000169d2) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xae5f,	// (0x000169d2) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9c4,	// (0x0001b537) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9c4,	// (0x0001b537) list_double_graphic_heading_pane_vc_g

0xae6b,	// (0x000169de) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xae6b,	// (0x000169de) list_double_graphic_heading_pane_vc_t1

0xae87,	// (0x000169fa) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xae87,	// (0x000169fa) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9cb,	// (0x0001b53e) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9cb,	// (0x0001b53e) list_double_graphic_heading_pane_vc_t

0x91cc,	// (0x00014d3f) list_setting_pane_vc_g1_ParamLimits

0x91cc,	// (0x00014d3f) list_setting_pane_vc_g1

0x91d8,	// (0x00014d4b) list_setting_pane_vc_g2_ParamLimits

0x91d8,	// (0x00014d4b) list_setting_pane_vc_g2

0x0001,

0xf7ba,	// (0x0001b32d) list_setting_pane_vc_g_ParamLimits

0xf7ba,	// (0x0001b32d) list_setting_pane_vc_g

0xb0b5,	// (0x00016c28) list_setting_pane_vc_t1_ParamLimits

0xb0b5,	// (0x00016c28) list_setting_pane_vc_t1

0xb0d1,	// (0x00016c44) list_setting_pane_vc_t2_ParamLimits

0xb0d1,	// (0x00016c44) list_setting_pane_vc_t2

0x0001,

0xf9f9,	// (0x0001b56c) list_setting_pane_vc_t_ParamLimits

0xf9f9,	// (0x0001b56c) list_setting_pane_vc_t

0x9242,	// (0x00014db5) set_value_pane_cp_vc_ParamLimits

0x9242,	// (0x00014db5) set_value_pane_cp_vc

0x7471,	// (0x00012fe4) list_single_number_heading_pane_vc_g1_ParamLimits

0x7471,	// (0x00012fe4) list_single_number_heading_pane_vc_g1

0x747d,	// (0x00012ff0) list_single_number_heading_pane_vc_g2_ParamLimits

0x747d,	// (0x00012ff0) list_single_number_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x0001b116) list_single_number_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x0001b116) list_single_number_heading_pane_vc_g

0xb0ed,	// (0x00016c60) list_single_number_heading_pane_vc_t1_ParamLimits

0xb0ed,	// (0x00016c60) list_single_number_heading_pane_vc_t1

0x74c7,	// (0x0001303a) list_single_number_heading_pane_vc_t2_ParamLimits

0x74c7,	// (0x0001303a) list_single_number_heading_pane_vc_t2

0x74d9,	// (0x0001304c) list_single_number_heading_pane_vc_t3_ParamLimits

0x74d9,	// (0x0001304c) list_single_number_heading_pane_vc_t3

0x0002,

0xf9fe,	// (0x0001b571) list_single_number_heading_pane_vc_t_ParamLimits

0xf9fe,	// (0x0001b571) list_single_number_heading_pane_vc_t

0x74eb,	// (0x0001305e) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x74eb,	// (0x0001305e) list_single_graphic_heading_pane_vc_g1

0x7471,	// (0x00012fe4) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x7471,	// (0x00012fe4) list_single_graphic_heading_pane_vc_g4

0x747d,	// (0x00012ff0) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x747d,	// (0x00012ff0) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf794,	// (0x0001b307) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf794,	// (0x0001b307) list_single_graphic_heading_pane_vc_g

0xb103,	// (0x00016c76) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xb103,	// (0x00016c76) list_single_graphic_heading_pane_vc_t1

0xb119,	// (0x00016c8c) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xb119,	// (0x00016c8c) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa05,	// (0x0001b578) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa05,	// (0x0001b578) list_single_graphic_heading_pane_vc_t

0x7471,	// (0x00012fe4) list_double2_pane_vc_g1_ParamLimits

0x7471,	// (0x00012fe4) list_double2_pane_vc_g1

0x747d,	// (0x00012ff0) list_double2_pane_vc_g2_ParamLimits

0x747d,	// (0x00012ff0) list_double2_pane_vc_g2

0x0001,

0xf5a3,	// (0x0001b116) list_double2_pane_vc_g_ParamLimits

0xf5a3,	// (0x0001b116) list_double2_pane_vc_g

0xa7e6,	// (0x00016359) list_double2_pane_vc_t1_ParamLimits

0xa7e6,	// (0x00016359) list_double2_pane_vc_t1

0xb12b,	// (0x00016c9e) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xb12b,	// (0x00016c9e) list_double2_large_graphic_pane_vc_g1

0x7471,	// (0x00012fe4) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x7471,	// (0x00012fe4) list_double2_large_graphic_pane_vc_g2

0x747d,	// (0x00012ff0) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x747d,	// (0x00012ff0) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa0a,	// (0x0001b57d) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa0a,	// (0x0001b57d) list_double2_large_graphic_pane_vc_g

0xb137,	// (0x00016caa) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xb137,	// (0x00016caa) list_double2_large_graphic_pane_vc_t1

0xb14d,	// (0x00016cc0) list_double_time_pane_vc_g1_ParamLimits

0xb14d,	// (0x00016cc0) list_double_time_pane_vc_g1

0xb159,	// (0x00016ccc) list_double_time_pane_vc_g2_ParamLimits

0xb159,	// (0x00016ccc) list_double_time_pane_vc_g2

0x0001,

0xfa11,	// (0x0001b584) list_double_time_pane_vc_g_ParamLimits

0xfa11,	// (0x0001b584) list_double_time_pane_vc_g

0xb165,	// (0x00016cd8) list_double_time_pane_vc_t1_ParamLimits

0xb165,	// (0x00016cd8) list_double_time_pane_vc_t1

0xb189,	// (0x00016cfc) list_double_time_pane_vc_t2_ParamLimits

0xb189,	// (0x00016cfc) list_double_time_pane_vc_t2

0xb1b8,	// (0x00016d2b) list_double_time_pane_vc_t3_ParamLimits

0xb1b8,	// (0x00016d2b) list_double_time_pane_vc_t3

0xb1ca,	// (0x00016d3d) list_double_time_pane_vc_t4_ParamLimits

0xb1ca,	// (0x00016d3d) list_double_time_pane_vc_t4

0x0003,

0xfa16,	// (0x0001b589) list_double_time_pane_vc_t_ParamLimits

0xfa16,	// (0x0001b589) list_double_time_pane_vc_t

0x7471,	// (0x00012fe4) list_double_pane_vc_g1_ParamLimits

0x7471,	// (0x00012fe4) list_double_pane_vc_g1

0x747d,	// (0x00012ff0) list_double_pane_vc_g2_ParamLimits

0x747d,	// (0x00012ff0) list_double_pane_vc_g2

0x0001,

0xf5a3,	// (0x0001b116) list_double_pane_vc_g_ParamLimits

0xf5a3,	// (0x0001b116) list_double_pane_vc_g

0xb1de,	// (0x00016d51) list_double_pane_vc_t1_ParamLimits

0xb1de,	// (0x00016d51) list_double_pane_vc_t1

0xb1f2,	// (0x00016d65) list_double_pane_vc_t2_ParamLimits

0xb1f2,	// (0x00016d65) list_double_pane_vc_t2

0x0001,

0xfa1f,	// (0x0001b592) list_double_pane_vc_t_ParamLimits

0xfa1f,	// (0x0001b592) list_double_pane_vc_t

0x7471,	// (0x00012fe4) list_double_number_pane_vc_g1_ParamLimits

0x7471,	// (0x00012fe4) list_double_number_pane_vc_g1

0x747d,	// (0x00012ff0) list_double_number_pane_vc_g2_ParamLimits

0x747d,	// (0x00012ff0) list_double_number_pane_vc_g2

0x0001,

0xf5a3,	// (0x0001b116) list_double_number_pane_vc_g_ParamLimits

0xf5a3,	// (0x0001b116) list_double_number_pane_vc_g

0xb20a,	// (0x00016d7d) list_double_number_pane_vc_t1_ParamLimits

0xb20a,	// (0x00016d7d) list_double_number_pane_vc_t1

0xb21c,	// (0x00016d8f) list_double_number_pane_vc_t2_ParamLimits

0xb21c,	// (0x00016d8f) list_double_number_pane_vc_t2

0xb230,	// (0x00016da3) list_double_number_pane_vc_t3_ParamLimits

0xb230,	// (0x00016da3) list_double_number_pane_vc_t3

0x0002,

0xfa24,	// (0x0001b597) list_double_number_pane_vc_t_ParamLimits

0xfa24,	// (0x0001b597) list_double_number_pane_vc_t

0xb248,	// (0x00016dbb) list_double_large_graphic_pane_vc_g1_ParamLimits

0xb248,	// (0x00016dbb) list_double_large_graphic_pane_vc_g1

0xb264,	// (0x00016dd7) list_double_large_graphic_pane_vc_g2_ParamLimits

0xb264,	// (0x00016dd7) list_double_large_graphic_pane_vc_g2

0xb278,	// (0x00016deb) list_double_large_graphic_pane_vc_g3_ParamLimits

0xb278,	// (0x00016deb) list_double_large_graphic_pane_vc_g3

0xb287,	// (0x00016dfa) list_double_large_graphic_pane_vc_g4_ParamLimits

0xb287,	// (0x00016dfa) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa2b,	// (0x0001b59e) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa2b,	// (0x0001b59e) list_double_large_graphic_pane_vc_g

0xb296,	// (0x00016e09) list_double_large_graphic_pane_vc_t1_ParamLimits

0xb296,	// (0x00016e09) list_double_large_graphic_pane_vc_t1

0xb2b2,	// (0x00016e25) list_double_large_graphic_pane_vc_t2_ParamLimits

0xb2b2,	// (0x00016e25) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa34,	// (0x0001b5a7) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa34,	// (0x0001b5a7) list_double_large_graphic_pane_vc_t

0xae53,	// (0x000169c6) list_double_heading_pane_vc_g1_ParamLimits

0xae53,	// (0x000169c6) list_double_heading_pane_vc_g1

0xae5f,	// (0x000169d2) list_double_heading_pane_vc_g2_ParamLimits

0xae5f,	// (0x000169d2) list_double_heading_pane_vc_g2

0x0001,

0xfa39,	// (0x0001b5ac) list_double_heading_pane_vc_g_ParamLimits

0xfa39,	// (0x0001b5ac) list_double_heading_pane_vc_g

0xb2d4,	// (0x00016e47) list_double_heading_pane_vc_t1_ParamLimits

0xb2d4,	// (0x00016e47) list_double_heading_pane_vc_t1

0xb2e8,	// (0x00016e5b) list_double_heading_pane_vc_t2_ParamLimits

0xb2e8,	// (0x00016e5b) list_double_heading_pane_vc_t2

0x0001,

0xfa3e,	// (0x0001b5b1) list_double_heading_pane_vc_t_ParamLimits

0xfa3e,	// (0x0001b5b1) list_double_heading_pane_vc_t

0xb300,	// (0x00016e73) list_double_graphic_pane_vc_g1_ParamLimits

0xb300,	// (0x00016e73) list_double_graphic_pane_vc_g1

0xb30c,	// (0x00016e7f) list_double_graphic_pane_vc_g2_ParamLimits

0xb30c,	// (0x00016e7f) list_double_graphic_pane_vc_g2

0x7471,	// (0x00012fe4) list_double_graphic_pane_vc_g3_ParamLimits

0x7471,	// (0x00012fe4) list_double_graphic_pane_vc_g3

0x0003,

0xfa43,	// (0x0001b5b6) list_double_graphic_pane_vc_g_ParamLimits

0xfa43,	// (0x0001b5b6) list_double_graphic_pane_vc_g

0xb329,	// (0x00016e9c) list_double_graphic_pane_vc_t1_ParamLimits

0xb329,	// (0x00016e9c) list_double_graphic_pane_vc_t1

0xb353,	// (0x00016ec6) list_double_graphic_pane_vc_t2_ParamLimits

0xb353,	// (0x00016ec6) list_double_graphic_pane_vc_t2

0x0001,

0xfa4c,	// (0x0001b5bf) list_double_graphic_pane_vc_t_ParamLimits

0xfa4c,	// (0x0001b5bf) list_double_graphic_pane_vc_t

0x44de,	// (0x00010051) aid_size_cell_fastswap

0x44e6,	// (0x00010059) aid_size_cell_touch_ParamLimits

0x44e6,	// (0x00010059) aid_size_cell_touch

0x474b,	// (0x000102be) popup_fast_swap_wide_window_ParamLimits

0x474b,	// (0x000102be) popup_fast_swap_wide_window

0x485f,	// (0x000103d2) touch_pane_ParamLimits

0x485f,	// (0x000103d2) touch_pane

0x792f,	// (0x000134a2) button_value_adjust_pane_cp2

0x7937,	// (0x000134aa) button_value_adjust_pane_cp4

0x7959,	// (0x000134cc) form_field_data_pane_cp2

0x797a,	// (0x000134ed) form_field_data_wide_pane_cp2

0x8017,	// (0x00013b8a) bg_scroll_pane_ParamLimits

0x4aed,	// (0x00010660) scroll_handle_pane_ParamLimits

0x4b01,	// (0x00010674) scroll_sc2_down_pane_ParamLimits

0x4b01,	// (0x00010674) scroll_sc2_down_pane

0x8048,	// (0x00013bbb) scroll_sc2_up_pane_ParamLimits

0x8048,	// (0x00013bbb) scroll_sc2_up_pane

0xb821,	// (0x00017394) grid_wheel_folder_pane_g1_ParamLimits

0xb821,	// (0x00017394) grid_wheel_folder_pane_g1

0x4cc6,	// (0x00010839) clock_nsta_pane_cp2_ParamLimits

0x4cc6,	// (0x00010839) clock_nsta_pane_cp2

0x88f0,	// (0x00014463) listscroll_midp_pane_ParamLimits

0x88fc,	// (0x0001446f) midp_canvas_pane

0x8be4,	// (0x00014757) nsta_clock_indic_pane

0x8c20,	// (0x00014793) listscroll_form_pane_vc

0x8c28,	// (0x0001479b) listscroll_set_pane_vc_ParamLimits

0x8c28,	// (0x0001479b) listscroll_set_pane_vc

0x8d29,	// (0x0001489c) clock_nsta_pane

0x8da4,	// (0x00014917) indicator_nsta_pane

0x9084,	// (0x00014bf7) bg_popup_sub_pane_cp2_ParamLimits

0x9098,	// (0x00014c0b) find_pane_cp2_ParamLimits

0x9098,	// (0x00014c0b) find_pane_cp2

0x90ae,	// (0x00014c21) grid_toobar_pane_ParamLimits

0x9252,	// (0x00014dc5) list_form_gen_pane_vc_ParamLimits

0x9252,	// (0x00014dc5) list_form_gen_pane_vc

0x9268,	// (0x00014ddb) scroll_pane_cp8_vc_ParamLimits

0x9268,	// (0x00014ddb) scroll_pane_cp8_vc

0x92e4,	// (0x00014e57) data_form_wide_pane_vc_ParamLimits

0x92e4,	// (0x00014e57) data_form_wide_pane_vc

0x92f0,	// (0x00014e63) form_field_data_wide_pane_vc_g1

0x92f8,	// (0x00014e6b) form_field_data_wide_pane_vc_t1_ParamLimits

0x92f8,	// (0x00014e6b) form_field_data_wide_pane_vc_t1

0x7a15,	// (0x00013588) input_focus_pane_cp6_vc_ParamLimits

0x7a15,	// (0x00013588) input_focus_pane_cp6_vc

0x965b,	// (0x000151ce) list_midp_pane_ParamLimits

0x9667,	// (0x000151da) scroll_pane_cp16_ParamLimits

0x9667,	// (0x000151da) scroll_pane_cp16

0x96d1,	// (0x00015244) button_value_adjust_pane_ParamLimits

0x96d1,	// (0x00015244) button_value_adjust_pane

0xa654,	// (0x000161c7) button_value_adjust_pane_cp6_ParamLimits

0xa654,	// (0x000161c7) button_value_adjust_pane_cp6

0xa77e,	// (0x000162f1) settings_code_pane_cp_ParamLimits

0xa77e,	// (0x000162f1) settings_code_pane_cp

0x3acf,	// (0x0000f642) cell_touch_pane_g1

0x3acf,	// (0x0000f642) cell_touch_pane_g2

0x0001,

0xf6d9,	// (0x0001b24c) cell_touch_pane_g

0xae31,	// (0x000169a4) cell_touch_pane_cp_ParamLimits

0xae31,	// (0x000169a4) cell_touch_pane_cp

0xae41,	// (0x000169b4) cell_touch_pane_ParamLimits

0xae41,	// (0x000169b4) cell_touch_pane

0x3acf,	// (0x0000f642) scroll_sc2_down_pane_g1

0x3acf,	// (0x0000f642) scroll_sc2_up_pane_g1

0x6b37,	// (0x000126aa) bg_set_opt_pane_cp4_vc

0xaea5,	// (0x00016a18) list_set_graphic_pane_vc_g1_ParamLimits

0xaea5,	// (0x00016a18) list_set_graphic_pane_vc_g1

0xaeb1,	// (0x00016a24) list_set_graphic_pane_vc_g2_ParamLimits

0xaeb1,	// (0x00016a24) list_set_graphic_pane_vc_g2

0x0001,

0xf9d0,	// (0x0001b543) list_set_graphic_pane_vc_g_ParamLimits

0xf9d0,	// (0x0001b543) list_set_graphic_pane_vc_g

0xaebd,	// (0x00016a30) text_primary_small_cp13_vc_ParamLimits

0xaebd,	// (0x00016a30) text_primary_small_cp13_vc

0xaed5,	// (0x00016a48) list_set_graphic_pane_vc_ParamLimits

0xaed5,	// (0x00016a48) list_set_graphic_pane_vc

0x6b37,	// (0x000126aa) input_focus_pane_cp2_vc

0x3acf,	// (0x0000f642) setting_code_pane_vc_g1

0x6c62,	// (0x000127d5) setting_code_pane_vc_t1

0xaee8,	// (0x00016a5b) set_text_pane_vc_t1_ParamLimits

0xaee8,	// (0x00016a5b) set_text_pane_vc_t1

0x6b37,	// (0x000126aa) input_focus_pane_cp1_vc

0xaf04,	// (0x00016a77) list_set_text_pane_vc

0x3acf,	// (0x0000f642) setting_text_pane_vc_g1

0x6b37,	// (0x000126aa) bg_set_opt_pane_cp2_vc

0x6c59,	// (0x000127cc) setting_slider_graphic_pane_vc_g1

0xaf0e,	// (0x00016a81) setting_slider_graphic_pane_vc_t1

0xaf1e,	// (0x00016a91) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9d5,	// (0x0001b548) setting_slider_graphic_pane_vc_t

0xaf2e,	// (0x00016aa1) slider_set_pane_cp_vc

0xaf36,	// (0x00016aa9) slider_set_pane_vc_g1

0xaf3f,	// (0x00016ab2) slider_set_pane_vc_g2

0x0006,

0xf9da,	// (0x0001b54d) slider_set_pane_vc_g

0x7b44,	// (0x000136b7) set_opt_bg_pane_g1_copy1

0x7b4c,	// (0x000136bf) set_opt_bg_pane_g2_copy1

0xaf6b,	// (0x00016ade) set_opt_bg_pane_g3_copy1

0x7b5c,	// (0x000136cf) set_opt_bg_pane_g4_copy1

0x7b64,	// (0x000136d7) set_opt_bg_pane_g5_copy1

0x7b6c,	// (0x000136df) set_opt_bg_pane_g6_copy1

0xaf75,	// (0x00016ae8) set_opt_bg_pane_g7_copy1

0xaf7f,	// (0x00016af2) set_opt_bg_pane_g8_copy1

0xaf89,	// (0x00016afc) set_opt_bg_pane_g9_copy1

0x6b37,	// (0x000126aa) bg_set_opt_pane_cp_vc

0xaf93,	// (0x00016b06) setting_slider_pane_vc_t1

0xafa2,	// (0x00016b15) setting_slider_pane_vc_t2

0xafb2,	// (0x00016b25) setting_slider_pane_vc_t3

0x0002,

0xf9e9,	// (0x0001b55c) setting_slider_pane_vc_t

0xafc2,	// (0x00016b35) slider_set_pane_vc

0x56ca,	// (0x0001123d) volume_set_pane_vc_g1

0x56d3,	// (0x00011246) volume_set_pane_vc_g2

0x56dc,	// (0x0001124f) volume_set_pane_vc_g3

0x56e5,	// (0x00011258) volume_set_pane_vc_g4

0x56ee,	// (0x00011261) volume_set_pane_vc_g5

0x56f7,	// (0x0001126a) volume_set_pane_vc_g6

0x5700,	// (0x00011273) volume_set_pane_vc_g7

0x5709,	// (0x0001127c) volume_set_pane_vc_g8

0x5712,	// (0x00011285) volume_set_pane_vc_g9

0x571b,	// (0x0001128e) volume_set_pane_vc_g10

0x0009,

0xf887,	// (0x0001b3fa) volume_set_pane_vc_g

0xafca,	// (0x00016b3d) volume_set_pane_vc

0xafd2,	// (0x00016b45) button_value_adjust_pane_cp1_vc

0xafdc,	// (0x00016b4f) list_highlight_pane_cp2_vc

0xafe5,	// (0x00016b58) list_set_pane_vc_ParamLimits

0xafe5,	// (0x00016b58) list_set_pane_vc

0xb043,	// (0x00016bb6) main_pane_set_vc_t1_ParamLimits

0xb043,	// (0x00016bb6) main_pane_set_vc_t1

0xb058,	// (0x00016bcb) main_pane_set_vc_t2_ParamLimits

0xb058,	// (0x00016bcb) main_pane_set_vc_t2

0xb06a,	// (0x00016bdd) main_pane_set_vc_t3_ParamLimits

0xb06a,	// (0x00016bdd) main_pane_set_vc_t3

0xb07e,	// (0x00016bf1) main_pane_set_vc_t4_ParamLimits

0xb07e,	// (0x00016bf1) main_pane_set_vc_t4

0x0003,

0xf9f0,	// (0x0001b563) main_pane_set_vc_t_ParamLimits

0xf9f0,	// (0x0001b563) main_pane_set_vc_t

0xb092,	// (0x00016c05) setting_code_pane_vc_ParamLimits

0xb092,	// (0x00016c05) setting_code_pane_vc

0xb0a3,	// (0x00016c16) setting_slider_graphic_pane_vc

0xb0a3,	// (0x00016c16) setting_slider_pane_vc

0xb0a3,	// (0x00016c16) setting_text_pane_vc

0xb0a3,	// (0x00016c16) setting_volume_pane_vc

0xb0ad,	// (0x00016c20) scroll_pane_cp121_vc

0x791d,	// (0x00013490) set_content_pane_vc

0xb37d,	// (0x00016ef0) button_value_adjust_pane_g1

0xb386,	// (0x00016ef9) button_value_adjust_pane_g2

0x0001,

0xfa51,	// (0x0001b5c4) button_value_adjust_pane_g

0xb38f,	// (0x00016f02) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb38f,	// (0x00016f02) form_field_slider_wide_pane_vc_t1

0xb3a3,	// (0x00016f16) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb3a3,	// (0x00016f16) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa56,	// (0x0001b5c9) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa56,	// (0x0001b5c9) form_field_slider_wide_pane_vc_t

0x6eac,	// (0x00012a1f) input_focus_pane_cp10_vc_ParamLimits

0x6eac,	// (0x00012a1f) input_focus_pane_cp10_vc

0xb3d1,	// (0x00016f44) slider_cont_pane_cp1_vc_ParamLimits

0xb3d1,	// (0x00016f44) slider_cont_pane_cp1_vc

0xb3e3,	// (0x00016f56) slider_form_pane_g1_cp2

0xaf3f,	// (0x00016ab2) slider_form_pane_g2_cp2

0xb410,	// (0x00016f83) form_field_slider_pane_vc_t3

0xb41e,	// (0x00016f91) form_field_slider_pane_vc_t4

0xb42c,	// (0x00016f9f) slider_form_pane_vc_ParamLimits

0xb42c,	// (0x00016f9f) slider_form_pane_vc

0xb439,	// (0x00016fac) form_field_slider_pane_vc_t1_ParamLimits

0xb439,	// (0x00016fac) form_field_slider_pane_vc_t1

0xb3a3,	// (0x00016f16) form_field_slider_pane_vc_t2_ParamLimits

0xb3a3,	// (0x00016f16) form_field_slider_pane_vc_t2

0x0001,

0xfa68,	// (0x0001b5db) form_field_slider_pane_vc_t_ParamLimits

0xfa68,	// (0x0001b5db) form_field_slider_pane_vc_t

0x6eac,	// (0x00012a1f) input_focus_pane_cp9_vc_ParamLimits

0x6eac,	// (0x00012a1f) input_focus_pane_cp9_vc

0xb455,	// (0x00016fc8) slider_cont_pane_vc_ParamLimits

0xb455,	// (0x00016fc8) slider_cont_pane_vc

0xb469,	// (0x00016fdc) list_form_graphic_pane_cp_vc_ParamLimits

0xb469,	// (0x00016fdc) list_form_graphic_pane_cp_vc

0x92f0,	// (0x00014e63) form_field_popup_wide_pane_vc_g1

0xb47e,	// (0x00016ff1) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb47e,	// (0x00016ff1) form_field_popup_wide_pane_vc_t1

0x7a15,	// (0x00013588) input_focus_pane_cp8_vc_ParamLimits

0x7a15,	// (0x00013588) input_focus_pane_cp8_vc

0xb4c3,	// (0x00017036) list_form_wide_pane_vc_ParamLimits

0xb4c3,	// (0x00017036) list_form_wide_pane_vc

0xb4cf,	// (0x00017042) list_form_graphic_pane_vc_g1

0xb4d7,	// (0x0001704a) list_form_graphic_pane_vc_t1_ParamLimits

0xb4d7,	// (0x0001704a) list_form_graphic_pane_vc_t1

0x6c17,	// (0x0001278a) list_highlight_pane_cp5_vc_ParamLimits

0x6c17,	// (0x0001278a) list_highlight_pane_cp5_vc

0xb4f3,	// (0x00017066) list_form_graphic_pane_vc_ParamLimits

0xb4f3,	// (0x00017066) list_form_graphic_pane_vc

0x92f0,	// (0x00014e63) form_field_popup_pane_vc_g1

0xb509,	// (0x0001707c) form_field_popup_pane_vc_t1_ParamLimits

0xb509,	// (0x0001707c) form_field_popup_pane_vc_t1

0x7a15,	// (0x00013588) input_focus_pane_cp7_vc_ParamLimits

0x7a15,	// (0x00013588) input_focus_pane_cp7_vc

0xb520,	// (0x00017093) list_form_pane_vc_ParamLimits

0xb520,	// (0x00017093) list_form_pane_vc

0xb52c,	// (0x0001709f) data_form_pane_vc_t1_ParamLimits

0xb52c,	// (0x0001709f) data_form_pane_vc_t1

0x7b44,	// (0x000136b7) input_focus_pane_vc_g1

0x7b4c,	// (0x000136bf) input_focus_pane_vc_g2

0x7b54,	// (0x000136c7) input_focus_pane_vc_g3

0x7b5c,	// (0x000136cf) input_focus_pane_vc_g4

0x7b64,	// (0x000136d7) input_focus_pane_vc_g5

0x7b6c,	// (0x000136df) input_focus_pane_vc_g6

0x7b74,	// (0x000136e7) input_focus_pane_vc_g7

0x7b7c,	// (0x000136ef) input_focus_pane_vc_g8

0x7b84,	// (0x000136f7) input_focus_pane_vc_g9

0x3acf,	// (0x0000f642) input_focus_pane_vc_g10

0x0009,

0xf662,	// (0x0001b1d5) input_focus_pane_vc_g

0x92e4,	// (0x00014e57) data_form_pane_vc_ParamLimits

0x92e4,	// (0x00014e57) data_form_pane_vc

0x92f0,	// (0x00014e63) form_field_data_pane_vc_g1

0xb547,	// (0x000170ba) form_field_data_pane_vc_t1_ParamLimits

0xb547,	// (0x000170ba) form_field_data_pane_vc_t1

0x7a15,	// (0x00013588) input_focus_pane_vc_ParamLimits

0x7a15,	// (0x00013588) input_focus_pane_vc

0xb561,	// (0x000170d4) button_value_adjust_pane_cp3_vc

0xb569,	// (0x000170dc) button_value_adjust_pane_cp5_vc

0xb571,	// (0x000170e4) form_field_data_pane_vc_ParamLimits

0xb571,	// (0x000170e4) form_field_data_pane_vc

0xb588,	// (0x000170fb) form_field_data_pane_vc_cp2

0xb590,	// (0x00017103) form_field_data_wide_pane_vc_ParamLimits

0xb590,	// (0x00017103) form_field_data_wide_pane_vc

0xb5a6,	// (0x00017119) form_field_data_wide_pane_vc_cp2

0xb5ae,	// (0x00017121) form_field_popup_pane_vc_ParamLimits

0xb5ae,	// (0x00017121) form_field_popup_pane_vc

0xb5c5,	// (0x00017138) form_field_popup_wide_pane_vc_ParamLimits

0xb5c5,	// (0x00017138) form_field_popup_wide_pane_vc

0xb5db,	// (0x0001714e) form_field_slider_pane_vc_ParamLimits

0xb5db,	// (0x0001714e) form_field_slider_pane_vc

0xb5ee,	// (0x00017161) form_field_slider_wide_pane_vc_ParamLimits

0xb5ee,	// (0x00017161) form_field_slider_wide_pane_vc

0xb601,	// (0x00017174) grid_touch_1_pane_ParamLimits

0xb601,	// (0x00017174) grid_touch_1_pane

0xb60d,	// (0x00017180) grid_touch_2_pane_ParamLimits

0xb60d,	// (0x00017180) grid_touch_2_pane

0x8baf,	// (0x00014722) touch_pane_g1_ParamLimits

0x8baf,	// (0x00014722) touch_pane_g1

0xb625,	// (0x00017198) cell_app_pane_cp_wide_ParamLimits

0xb625,	// (0x00017198) cell_app_pane_cp_wide

0xb636,	// (0x000171a9) grid_popup_fast_wide_pane_ParamLimits

0xb636,	// (0x000171a9) grid_popup_fast_wide_pane

0xb64a,	// (0x000171bd) scroll_pane_cp19_ParamLimits

0xb64a,	// (0x000171bd) scroll_pane_cp19

0x6b37,	// (0x000126aa) bg_popup_window_pane_cp20

0xb65e,	// (0x000171d1) listscroll_popup_fast_wide_pane

0xb666,	// (0x000171d9) grid_indicator_nsta_pane

0xb678,	// (0x000171eb) clock_nsta_pane_g1

0xb681,	// (0x000171f4) clock_nsta_pane_t1

0xb69d,	// (0x00017210) cell_indicator_nsta_pane_ParamLimits

0xb69d,	// (0x00017210) cell_indicator_nsta_pane

0xb6d2,	// (0x00017245) cell_indicator_nsta_pane_g1

0xb6e0,	// (0x00017253) cell_indicator_nsta_pane_g2

0x0001,

0xfa79,	// (0x0001b5ec) cell_indicator_nsta_pane_g

0xb6f2,	// (0x00017265) clock_nsta_pane_cp

0xb6fb,	// (0x0001726e) indicator_nsta_pane_cp

0xb705,	// (0x00017278) nsta_clock_indic_pane_g1

0x6cfa,	// (0x0001286d) grid_indicator_pane

0x813d,	// (0x00013cb0) scroll_pane_cp29

0x4c15,	// (0x00010788) indicator_nsta_pane_cp2_ParamLimits

0x4c15,	// (0x00010788) indicator_nsta_pane_cp2

0x6c17,	// (0x0001278a) main_apps_wheel_pane

0x953c,	// (0x000150af) form_midp_field_text_pane_ParamLimits

0x9687,	// (0x000151fa) scroll_bar_cp050_ParamLimits

0xb75e,	// (0x000172d1) cell_indicator_pane_ParamLimits

0xb75e,	// (0x000172d1) cell_indicator_pane

0xb775,	// (0x000172e8) cell_indicator_pane_g1

0xb77f,	// (0x000172f2) grid_wheel_folder_pane_ParamLimits

0xb77f,	// (0x000172f2) grid_wheel_folder_pane

0xb795,	// (0x00017308) list_wheel_apps_pane_ParamLimits

0xb795,	// (0x00017308) list_wheel_apps_pane

0xb7a6,	// (0x00017319) main_apps_wheel_pane_g1_ParamLimits

0xb7a6,	// (0x00017319) main_apps_wheel_pane_g1

0xb7ba,	// (0x0001732d) main_apps_wheel_pane_g2_ParamLimits

0xb7ba,	// (0x0001732d) main_apps_wheel_pane_g2

0x0001,

0xfa95,	// (0x0001b608) main_apps_wheel_pane_g_ParamLimits

0xfa95,	// (0x0001b608) main_apps_wheel_pane_g

0xb7d2,	// (0x00017345) main_apps_wheel_pane_t1_ParamLimits

0xb7d2,	// (0x00017345) main_apps_wheel_pane_t1

0xb7f5,	// (0x00017368) list_wheel_apps_pane_g1

0xb7fd,	// (0x00017370) list_wheel_apps_pane_g2

0xb805,	// (0x00017378) list_wheel_apps_pane_g3

0xb80d,	// (0x00017380) list_wheel_apps_pane_g4

0xb817,	// (0x0001738a) list_wheel_apps_pane_g5

0x0004,

0xfa9a,	// (0x0001b60d) list_wheel_apps_pane_g

0x876b,	// (0x000142de) navi_icon_text_pane

0x8c58,	// (0x000147cb) aid_fill_nsta

0xb83a,	// (0x000173ad) navi_icon_text_pane_g1

0xb846,	// (0x000173b9) navi_icon_text_pane_t1

0x85fe,	// (0x00014171) list_set_graphic_pane_t1_ParamLimits

0x85fe,	// (0x00014171) list_set_graphic_pane_t1

0x9df2,	// (0x00015965) popup_midp_note_alarm_window_t6_ParamLimits

0x9df2,	// (0x00015965) popup_midp_note_alarm_window_t6

0x9e04,	// (0x00015977) popup_midp_note_alarm_window_t7_ParamLimits

0x9e04,	// (0x00015977) popup_midp_note_alarm_window_t7

0x9e16,	// (0x00015989) popup_midp_note_alarm_window_t8_ParamLimits

0x9e16,	// (0x00015989) popup_midp_note_alarm_window_t8

0x9e28,	// (0x0001599b) popup_midp_note_alarm_window_t9_ParamLimits

0x9e28,	// (0x0001599b) popup_midp_note_alarm_window_t9

0x9e3a,	// (0x000159ad) popup_midp_note_alarm_window_t10_ParamLimits

0x9e3a,	// (0x000159ad) popup_midp_note_alarm_window_t10

0x9e4c,	// (0x000159bf) popup_midp_note_alarm_window_t11_ParamLimits

0x9e4c,	// (0x000159bf) popup_midp_note_alarm_window_t11

0x9e5e,	// (0x000159d1) scroll_pane_cp17_ParamLimits

0x9e5e,	// (0x000159d1) scroll_pane_cp17

0x56ca,	// (0x0001123d) volume_small_pane_cp_g1

0x59bf,	// (0x00011532) volume_small_pane_cp_g2

0x59c8,	// (0x0001153b) volume_small_pane_cp_g3

0x59d1,	// (0x00011544) volume_small_pane_cp_g4

0x59da,	// (0x0001154d) volume_small_pane_cp_g5

0x59e3,	// (0x00011556) volume_small_pane_cp_g6

0x59ec,	// (0x0001155f) volume_small_pane_cp_g7

0x59f5,	// (0x00011568) volume_small_pane_cp_g8

0x59fe,	// (0x00011571) volume_small_pane_cp_g9

0x5a07,	// (0x0001157a) volume_small_pane_cp_g10

0x89c5,	// (0x00014538) midp_ticker_pane_g1_ParamLimits

0x89d1,	// (0x00014544) midp_ticker_pane_g2_ParamLimits

0xf72e,	// (0x0001b2a1) midp_ticker_pane_g_ParamLimits

0x89dd,	// (0x00014550) midp_ticker_pane_t1_ParamLimits

0x8c6e,	// (0x000147e1) aid_fill_nsta_2

0x9673,	// (0x000151e6) list_form2_midp_pane

0xa7fc,	// (0x0001636f) midp_editing_number_pane_ParamLimits

0xa80b,	// (0x0001637e) midp_ticker_pane_ParamLimits

0xb858,	// (0x000173cb) form2_midp_field_pane

0xb87c,	// (0x000173ef) scroll_pane_cp51

0xb89c,	// (0x0001740f) form2_midp_button_pane_ParamLimits

0xb89c,	// (0x0001740f) form2_midp_button_pane

0xb8ae,	// (0x00017421) form2_midp_content_pane_ParamLimits

0xb8ae,	// (0x00017421) form2_midp_content_pane

0xb8c8,	// (0x0001743b) form2_midp_field_choice_group_pane

0xb8d0,	// (0x00017443) form2_midp_field_pane_g1

0xb8d8,	// (0x0001744b) form2_midp_field_pane_g2

0xb8e0,	// (0x00017453) form2_midp_field_pane_g3

0xb8e8,	// (0x0001745b) form2_midp_field_pane_g4

0x0003,

0xfabf,	// (0x0001b632) form2_midp_field_pane_g

0xb8f0,	// (0x00017463) form2_midp_gauge_slider_pane

0xb8f8,	// (0x0001746b) form2_midp_gauge_wait_pane

0xb900,	// (0x00017473) form2_midp_image_pane_ParamLimits

0xb900,	// (0x00017473) form2_midp_image_pane

0xb91b,	// (0x0001748e) form2_midp_label_pane_ParamLimits

0xb91b,	// (0x0001748e) form2_midp_label_pane

0xb934,	// (0x000174a7) form2_midp_label_pane_cp_ParamLimits

0xb934,	// (0x000174a7) form2_midp_label_pane_cp

0xb955,	// (0x000174c8) form2_midp_string_pane_ParamLimits

0xb955,	// (0x000174c8) form2_midp_string_pane

0xb967,	// (0x000174da) form2_midp_text_pane_ParamLimits

0xb967,	// (0x000174da) form2_midp_text_pane

0xb984,	// (0x000174f7) form2_midp_time_pane

0xb994,	// (0x00017507) input_focus_pane_cp51_ParamLimits

0xb994,	// (0x00017507) input_focus_pane_cp51

0xb9ac,	// (0x0001751f) form2_midp_label_pane_t1_ParamLimits

0xb9ac,	// (0x0001751f) form2_midp_label_pane_t1

0xb9ed,	// (0x00017560) form2_mdip_text_pane_t1_ParamLimits

0xb9ed,	// (0x00017560) form2_mdip_text_pane_t1

0xba0c,	// (0x0001757f) form2_midp_time_pane_t1

0xba27,	// (0x0001759a) form2_midp_gauge_slider_pane_t1

0xba39,	// (0x000175ac) form2_midp_gauge_slider_pane_t2

0xba4b,	// (0x000175be) form2_midp_gauge_slider_pane_t3

0x0002,

0xfac8,	// (0x0001b63b) form2_midp_gauge_slider_pane_t

0xba5d,	// (0x000175d0) form2_midp_slider_pane

0xba69,	// (0x000175dc) form2_midp_gauge_wait_pane_t1

0xba77,	// (0x000175ea) form2_midp_wait_pane_ParamLimits

0xba77,	// (0x000175ea) form2_midp_wait_pane

0xbaa2,	// (0x00017615) list_single_2graphic_pane_cp4_ParamLimits

0xbaa2,	// (0x00017615) list_single_2graphic_pane_cp4

0x9358,	// (0x00014ecb) list_single_midp_graphic_pane_cp_ParamLimits

0x9358,	// (0x00014ecb) list_single_midp_graphic_pane_cp

0x6b37,	// (0x000126aa) list_highlight_pane_cp20

0xbac6,	// (0x00017639) list_single_2graphic_pane_g1_cp4

0xbace,	// (0x00017641) list_single_2graphic_pane_g2_cp4

0xbad6,	// (0x00017649) list_single_2graphic_pane_t1_cp4

0x6c17,	// (0x0001278a) list_highlight_pane_cp21

0xbae5,	// (0x00017658) list_single_midp_graphic_pane_g4_cp

0xbaf4,	// (0x00017667) list_single_midp_graphic_pane_t1_cp

0xbb09,	// (0x0001767c) form2_mdip_string_pane_t1_ParamLimits

0xbb09,	// (0x0001767c) form2_mdip_string_pane_t1

0x6b37,	// (0x000126aa) bg_wml_button_pane_cp2

0x3acf,	// (0x0000f642) form2_midp_image_pane_g1

0x76df,	// (0x00013252) list_double_large_graphic_pane_g5_ParamLimits

0x76df,	// (0x00013252) list_double_large_graphic_pane_g5

0x88f0,	// (0x00014463) midp_form_pane_ParamLimits

0x6c17,	// (0x0001278a) main_apps_wheel_pane_ParamLimits

0x530a,	// (0x00010e7d) popup_preview_window_ParamLimits

0x530a,	// (0x00010e7d) popup_preview_window

0x54c5,	// (0x00011038) popup_touch_info_window_ParamLimits

0x54c5,	// (0x00011038) popup_touch_info_window

0x54e3,	// (0x00011056) popup_touch_menu_window_ParamLimits

0x54e3,	// (0x00011056) popup_touch_menu_window

0x3ac5,	// (0x0000f638) bg_popup_sub_pane_cp6

0xbc02,	// (0x00017775) list_touch_menu_pane

0xbc0a,	// (0x0001777d) list_single_touch_menu_pane_ParamLimits

0xbc0a,	// (0x0001777d) list_single_touch_menu_pane

0xbc20,	// (0x00017793) list_single_touch_menu_pane_t1

0x6c17,	// (0x0001278a) bg_popup_sub_pane_cp7_ParamLimits

0x6c17,	// (0x0001278a) bg_popup_sub_pane_cp7

0xbc2e,	// (0x000177a1) heading_sub_pane

0xbc36,	// (0x000177a9) list_touch_info_pane_ParamLimits

0xbc36,	// (0x000177a9) list_touch_info_pane

0xbc45,	// (0x000177b8) list_single_touch_info_pane_ParamLimits

0xbc45,	// (0x000177b8) list_single_touch_info_pane

0xbc57,	// (0x000177ca) list_single_touch_info_pane_t1

0xbc65,	// (0x000177d8) list_single_touch_info_pane_t2

0x0001,

0xfad6,	// (0x0001b649) list_single_touch_info_pane_t

0x88e8,	// (0x0001445b) bg_popup_heading_pane_cp

0xbc73,	// (0x000177e6) heading_sub_pane_t1

0x927e,	// (0x00014df1) bg_popup_preview_window_pane_cp_ParamLimits

0x927e,	// (0x00014df1) bg_popup_preview_window_pane_cp

0xbc2e,	// (0x000177a1) heading_preview_pane

0xbc36,	// (0x000177a9) list_preview_pane_ParamLimits

0xbc36,	// (0x000177a9) list_preview_pane

0xbc81,	// (0x000177f4) popup_preview_window_g1

0xbc45,	// (0x000177b8) list_single_preview_pane_ParamLimits

0xbc45,	// (0x000177b8) list_single_preview_pane

0xbc89,	// (0x000177fc) list_single_preview_pane_g1

0xbc91,	// (0x00017804) list_single_preview_pane_t1

0xbc57,	// (0x000177ca) list_single_preview_pane_t2

0x0001,

0xfadb,	// (0x0001b64e) list_single_preview_pane_t

0xbc9f,	// (0x00017812) bg_popup_heading_pane_cp2_ParamLimits

0xbc9f,	// (0x00017812) bg_popup_heading_pane_cp2

0xbcb5,	// (0x00017828) heading_preview_pane_g1

0xbcbd,	// (0x00017830) heading_preview_pane_t1_ParamLimits

0xbcbd,	// (0x00017830) heading_preview_pane_t1

0x6d1d,	// (0x00012890) soft_indicator_pane_t1_ParamLimits

0x7431,	// (0x00012fa4) scroll_pane_ParamLimits

0x8036,	// (0x00013ba9) scroll_sc2_left_pane

0x803f,	// (0x00013bb2) scroll_sc2_right_pane

0x805e,	// (0x00013bd1) scroll_bg_pane_g1_ParamLimits

0x8073,	// (0x00013be6) scroll_bg_pane_g2_ParamLimits

0x808b,	// (0x00013bfe) scroll_bg_pane_g3_ParamLimits

0xf6b9,	// (0x0001b22c) scroll_bg_pane_g_ParamLimits

0x805e,	// (0x00013bd1) scroll_handle_pane_g1_ParamLimits

0x80ad,	// (0x00013c20) scroll_handle_pane_g2_ParamLimits

0x808b,	// (0x00013bfe) scroll_handle_pane_g3_ParamLimits

0xf6c0,	// (0x0001b233) scroll_handle_pane_g_ParamLimits

0x4f89,	// (0x00010afc) popup_choice_list_window_ParamLimits

0x4f89,	// (0x00010afc) popup_choice_list_window

0x9090,	// (0x00014c03) choice_list_pane

0x9128,	// (0x00014c9b) cell_toolbar_pane_t1

0x9150,	// (0x00014cc3) toolbar_button_pane_ParamLimits

0xa318,	// (0x00015e8b) ai_gene_pane_1_t2_ParamLimits

0xa318,	// (0x00015e8b) ai_gene_pane_1_t2

0x0001,

0xf8e3,	// (0x0001b456) ai_gene_pane_1_t_ParamLimits

0xf8e3,	// (0x0001b456) ai_gene_pane_1_t

0xbcda,	// (0x0001784d) scroll_sc2_left_pane_g1

0xbcda,	// (0x0001784d) scroll_sc2_right_pane_g1

0x8c14,	// (0x00014787) bg_popup_sub_pane_cp10

0xbce4,	// (0x00017857) list_choice_list_pane

0xbcfd,	// (0x00017870) list_single_choice_list_pane_ParamLimits

0xbcfd,	// (0x00017870) list_single_choice_list_pane

0xbd10,	// (0x00017883) list_single_choice_list_pane_g1

0x7d3c,	// (0x000138af) list_single_choice_list_pane_t1_ParamLimits

0x7d3c,	// (0x000138af) list_single_choice_list_pane_t1

0xbd18,	// (0x0001788b) choice_list_pane_g1

0xbd20,	// (0x00017893) choice_list_pane_t1

0x3ac5,	// (0x0000f638) input_focus_pane_cp11

0x7f13,	// (0x00013a86) title_pane_stacon_g2_ParamLimits

0x7f13,	// (0x00013a86) title_pane_stacon_g2

0x0002,

0xf69f,	// (0x0001b212) title_pane_stacon_g_ParamLimits

0xf69f,	// (0x0001b212) title_pane_stacon_g

0x88e8,	// (0x0001445b) cursor_press_pane

0x5035,	// (0x00010ba8) popup_fep_hwr_window_ParamLimits

0x5035,	// (0x00010ba8) popup_fep_hwr_window

0x50af,	// (0x00010c22) popup_fep_vkb_window_ParamLimits

0x50af,	// (0x00010c22) popup_fep_vkb_window

0xbd2e,	// (0x000178a1) cursor_press_pane_g1

0x0002,

0xfb04,	// (0x0001b677) fep_vkb_side_pane_g_ParamLimits

0x5a49,	// (0x000115bc) fep_hwr_candidate_pane_ParamLimits

0x5a49,	// (0x000115bc) fep_hwr_candidate_pane

0x5a73,	// (0x000115e6) fep_hwr_side_pane_ParamLimits

0x5a73,	// (0x000115e6) fep_hwr_side_pane

0x5a93,	// (0x00011606) fep_hwr_top_pane_ParamLimits

0x5a93,	// (0x00011606) fep_hwr_top_pane

0x5aab,	// (0x0001161e) fep_hwr_write_pane_ParamLimits

0x5aab,	// (0x0001161e) fep_hwr_write_pane

0xfb04,	// (0x0001b677) fep_vkb_side_pane_g

0xbd36,	// (0x000178a9) fep_hwr_top_pane_g1

0xbd48,	// (0x000178bb) fep_hwr_top_pane_g2

0x5ae5,	// (0x00011658) fep_hwr_top_pane_g3

0x0002,

0xfae0,	// (0x0001b653) fep_hwr_top_pane_g

0x5afa,	// (0x0001166d) fep_hwr_top_text_pane

0x822d,	// (0x00013da0) fep_hwr_top_text_pane_g1

0xbd7e,	// (0x000178f1) fep_hwr_top_text_pane_t1

0x5bf0,	// (0x00011763) fep_hwr_candidate_pane_g1

0xbfd1,	// (0x00017b44) fep_vkb_keypad_pane_g3_ParamLimits

0xbfd1,	// (0x00017b44) fep_vkb_keypad_pane_g3

0xbff9,	// (0x00017b6c) fep_vkb_keypad_pane_g4_ParamLimits

0xbff9,	// (0x00017b6c) fep_vkb_keypad_pane_g4

0xc068,	// (0x00017bdb) fep_vkb_bottom_pane_g2_ParamLimits

0xc068,	// (0x00017bdb) fep_vkb_bottom_pane_g2

0x0001,

0xfb0b,	// (0x0001b67e) fep_vkb_bottom_pane_g_ParamLimits

0xfb0b,	// (0x0001b67e) fep_vkb_bottom_pane_g

0xbcda,	// (0x0001784d) cell_vkb_side_pane_g2

0x0001,

0xfb15,	// (0x0001b688) cell_vkb_side_pane_g

0xc0f3,	// (0x00017c66) cell_vkb_side_pane_t1

0xc101,	// (0x00017c74) cell_vkb_side_pane_t1_copy1

0xbcda,	// (0x0001784d) bg_fep_vkb_candidate_pane_g2

0xc22d,	// (0x00017da0) cell_vkb_candidate_pane_ParamLimits

0xbd8c,	// (0x000178ff) aid_size_cell_vkb_ParamLimits

0xbd8c,	// (0x000178ff) aid_size_cell_vkb

0xc22d,	// (0x00017da0) cell_vkb_candidate_pane

0x5c17,	// (0x0001178a) bg_popup_fep_shadow_pane_g1

0xbe1a,	// (0x0001798d) fep_vkb_bottom_pane_ParamLimits

0xbe1a,	// (0x0001798d) fep_vkb_bottom_pane

0xbe50,	// (0x000179c3) fep_vkb_candidate_pane_ParamLimits

0xbe50,	// (0x000179c3) fep_vkb_candidate_pane

0xbe6c,	// (0x000179df) fep_vkb_keypad_pane_ParamLimits

0xbe6c,	// (0x000179df) fep_vkb_keypad_pane

0xbeb2,	// (0x00017a25) fep_vkb_side_pane_ParamLimits

0xbeb2,	// (0x00017a25) fep_vkb_side_pane

0xbeee,	// (0x00017a61) fep_vkb_top_pane_ParamLimits

0xbeee,	// (0x00017a61) fep_vkb_top_pane

0xbf2a,	// (0x00017a9d) fep_vkb_top_pane_g1_ParamLimits

0xbf2a,	// (0x00017a9d) fep_vkb_top_pane_g1

0xbf39,	// (0x00017aac) fep_vkb_top_pane_g2_ParamLimits

0xbf39,	// (0x00017aac) fep_vkb_top_pane_g2

0xbf48,	// (0x00017abb) fep_vkb_top_pane_g3_ParamLimits

0xbf48,	// (0x00017abb) fep_vkb_top_pane_g3

0x0003,

0xfafb,	// (0x0001b66e) fep_vkb_top_pane_g_ParamLimits

0xfafb,	// (0x0001b66e) fep_vkb_top_pane_g

0xbf66,	// (0x00017ad9) fep_vkb_top_text_pane_ParamLimits

0xbf66,	// (0x00017ad9) fep_vkb_top_text_pane

0xbf77,	// (0x00017aea) fep_vkb_side_pane_g1_ParamLimits

0xbf77,	// (0x00017aea) fep_vkb_side_pane_g1

0xbfc0,	// (0x00017b33) grid_vkb_side_pane_ParamLimits

0xbfc0,	// (0x00017b33) grid_vkb_side_pane

0x5c1f,	// (0x00011792) bg_popup_fep_shadow_pane_g2

0x5c28,	// (0x0001179b) bg_popup_fep_shadow_pane_g3

0x5c30,	// (0x000117a3) bg_popup_fep_shadow_pane_g4

0x5c39,	// (0x000117ac) bg_popup_fep_shadow_pane_g5

0x5c43,	// (0x000117b6) bg_popup_fep_shadow_pane_g6

0x5c4b,	// (0x000117be) bg_popup_fep_shadow_pane_g7

0x7b5c,	// (0x000136cf) bg_popup_fep_shadow_pane_g8

0xc017,	// (0x00017b8a) grid_vkb_keypad_number_pane_ParamLimits

0xc017,	// (0x00017b8a) grid_vkb_keypad_number_pane

0xc027,	// (0x00017b9a) grid_vkb_keypad_pane_ParamLimits

0xc027,	// (0x00017b9a) grid_vkb_keypad_pane

0xc04d,	// (0x00017bc0) fep_vkb_bottom_pane_g1_ParamLimits

0xc04d,	// (0x00017bc0) fep_vkb_bottom_pane_g1

0xc076,	// (0x00017be9) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc076,	// (0x00017be9) grid_vkb_keypad_bottom_left_pane

0xc08b,	// (0x00017bfe) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc08b,	// (0x00017bfe) grid_vkb_keypad_bottom_right_pane

0xc0a0,	// (0x00017c13) fep_vkb_top_text_pane_g1

0xc0bb,	// (0x00017c2e) fep_vkb_top_text_pane_t1

0xc0d0,	// (0x00017c43) cell_vkb_side_pane_ParamLimits

0xc0d0,	// (0x00017c43) cell_vkb_side_pane

0xbcda,	// (0x0001784d) cell_vkb_side_pane_g1

0xc10f,	// (0x00017c82) cell_vkb_keypad_pane_ParamLimits

0xc10f,	// (0x00017c82) cell_vkb_keypad_pane

0xc184,	// (0x00017cf7) cell_vkb_keypad_pane_g1

0x0008,

0xfb28,	// (0x0001b69b) bg_popup_fep_shadow_pane_g

0x5c5d,	// (0x000117d0) cell_hwr_side_pane_g1

0x5c5d,	// (0x000117d0) cell_hwr_side_pane_g2

0xc18e,	// (0x00017d01) cell_vkb_keypad_pane_t1

0xc19c,	// (0x00017d0f) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc19c,	// (0x00017d0f) cell_vkb_keypad_bottom_left_pane

0xc1b9,	// (0x00017d2c) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc1b9,	// (0x00017d2c) cell_vkb_keypad_bottom_right_pane

0xbcda,	// (0x0001784d) cell_vkb_keypad_bottom_left_pane_g1

0xbcda,	// (0x0001784d) cell_vkb_keypad_bottom_right_pane_g1

0xc1f2,	// (0x00017d65) cell_vkb_keypad_number_pane_ParamLimits

0xc1f2,	// (0x00017d65) cell_vkb_keypad_number_pane

0xc211,	// (0x00017d84) cell_vkb_keypad_number_pane_g1

0xc21b,	// (0x00017d8e) cell_vkb_keypad_number_pane_g2

0xc224,	// (0x00017d97) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb1a,	// (0x0001b68d) cell_vkb_keypad_number_pane_g

0xc18e,	// (0x00017d01) cell_vkb_keypad_number_pane_t1

0xc248,	// (0x00017dbb) fep_vkb_candidate_pane_g1

0x0001,

0xfb3b,	// (0x0001b6ae) cell_hwr_side_pane_g

0xc261,	// (0x00017dd4) cell_hwr_side_pane_t1

0x5c67,	// (0x000117da) cell_hwr_side_pane_t1_copy1

0x5c75,	// (0x000117e8) cell_hwr_candidate_pane_g1

0x5ca4,	// (0x00011817) cell_hwr_candidate_pane_t1

0xbcda,	// (0x0001784d) cell_vkb_candidate_pane_g2

0xc2a5,	// (0x00017e18) cell_vkb_candidate_pane_t1

0x5a10,	// (0x00011583) bg_popup_fep_shadow_pane_ParamLimits

0x5a10,	// (0x00011583) bg_popup_fep_shadow_pane

0x5ac5,	// (0x00011638) bg_fep_hwr_top_pane_g4

0xbd5a,	// (0x000178cd) bg_hwr_side_pane_g1_ParamLimits

0xbd5a,	// (0x000178cd) bg_hwr_side_pane_g1

0x5b36,	// (0x000116a9) cell_hwr_side_pane_ParamLimits

0x5b36,	// (0x000116a9) cell_hwr_side_pane

0x5b71,	// (0x000116e4) fep_hwr_write_pane_g1_ParamLimits

0x5b71,	// (0x000116e4) fep_hwr_write_pane_g1

0x5b7e,	// (0x000116f1) fep_hwr_write_pane_g2_ParamLimits

0x5b7e,	// (0x000116f1) fep_hwr_write_pane_g2

0x5b8b,	// (0x000116fe) fep_hwr_write_pane_g3_ParamLimits

0x5b8b,	// (0x000116fe) fep_hwr_write_pane_g3

0x5b99,	// (0x0001170c) fep_hwr_write_pane_g4_ParamLimits

0x5b99,	// (0x0001170c) fep_hwr_write_pane_g4

0x0005,

0xfae7,	// (0x0001b65a) fep_hwr_write_pane_g_ParamLimits

0xfae7,	// (0x0001b65a) fep_hwr_write_pane_g

0x5ac5,	// (0x00011638) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x5ac5,	// (0x00011638) bg_fep_hwr_candidate_pane_g2

0x5bae,	// (0x00011721) cell_hwr_candidate_pane_ParamLimits

0x5bae,	// (0x00011721) cell_hwr_candidate_pane

0x5bf0,	// (0x00011763) fep_hwr_candidate_pane_g1_ParamLimits

0xbdba,	// (0x0001792d) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xbdba,	// (0x0001792d) bg_popup_fep_shadow_pane_cp2

0xbf58,	// (0x00017acb) fep_vkb_top_pane_g4_ParamLimits

0xbf58,	// (0x00017acb) fep_vkb_top_pane_g4

0xbf9e,	// (0x00017b11) fep_vkb_side_pane_g2_ParamLimits

0xbf9e,	// (0x00017b11) fep_vkb_side_pane_g2

0x7837,	// (0x000133aa) list_setting_pane_t4_ParamLimits

0x7837,	// (0x000133aa) list_setting_pane_t4

0x78b1,	// (0x00013424) list_setting_number_pane_t5_ParamLimits

0x78b1,	// (0x00013424) list_setting_number_pane_t5

0x8274,	// (0x00013de7) list_double_heading_pane_cp2_ParamLimits

0x8274,	// (0x00013de7) list_double_heading_pane_cp2

0x7a3b,	// (0x000135ae) list_double_heading_pane_g1_cp2_ParamLimits

0x7a3b,	// (0x000135ae) list_double_heading_pane_g1_cp2

0x7a47,	// (0x000135ba) list_double_heading_pane_g2_cp2_ParamLimits

0x7a47,	// (0x000135ba) list_double_heading_pane_g2_cp2

0xc2b3,	// (0x00017e26) list_double_heading_pane_t1_cp2_ParamLimits

0xc2b3,	// (0x00017e26) list_double_heading_pane_t1_cp2

0xc2c9,	// (0x00017e3c) list_double_heading_pane_t2_cp2_ParamLimits

0xc2c9,	// (0x00017e3c) list_double_heading_pane_t2_cp2

0x3abd,	// (0x0000f630) aid_value_unit2

0x47a5,	// (0x00010318) popup_preview_fixed_window

0x6eba,	// (0x00012a2d) bg_popup_preview_window_pane_cp02

0xc2db,	// (0x00017e4e) list_preview_fixed_pane

0xc321,	// (0x00017e94) list_empty_pane_fp_ParamLimits

0xc321,	// (0x00017e94) list_empty_pane_fp

0xc321,	// (0x00017e94) list_single_cale_day_pane_fp_ParamLimits

0xc321,	// (0x00017e94) list_single_cale_day_pane_fp

0xc321,	// (0x00017e94) list_single_graphic_heading_pane_fp_ParamLimits

0xc321,	// (0x00017e94) list_single_graphic_heading_pane_fp

0xc321,	// (0x00017e94) list_single_graphic_pane_fp_ParamLimits

0xc321,	// (0x00017e94) list_single_graphic_pane_fp

0xc321,	// (0x00017e94) list_single_heading_pane_fp_ParamLimits

0xc321,	// (0x00017e94) list_single_heading_pane_fp

0xc321,	// (0x00017e94) list_single_pane_fp_ParamLimits

0xc321,	// (0x00017e94) list_single_pane_fp

0xc378,	// (0x00017eeb) list_single_pane_fp_g1_ParamLimits

0xc378,	// (0x00017eeb) list_single_pane_fp_g1

0x7a3b,	// (0x000135ae) list_single_pane_fp_g2_ParamLimits

0x7a3b,	// (0x000135ae) list_single_pane_fp_g2

0x7a47,	// (0x000135ba) list_single_pane_fp_g3_ParamLimits

0x7a47,	// (0x000135ba) list_single_pane_fp_g3

0xc384,	// (0x00017ef7) list_single_pane_fp_g4_ParamLimits

0xc384,	// (0x00017ef7) list_single_pane_fp_g4

0x0003,

0xfb4e,	// (0x0001b6c1) list_single_pane_fp_g_ParamLimits

0xfb4e,	// (0x0001b6c1) list_single_pane_fp_g

0xc390,	// (0x00017f03) list_single_pane_fp_t1_ParamLimits

0xc390,	// (0x00017f03) list_single_pane_fp_t1

0xc3a7,	// (0x00017f1a) list_single_graphic_pane_fp_g1_ParamLimits

0xc3a7,	// (0x00017f1a) list_single_graphic_pane_fp_g1

0xc378,	// (0x00017eeb) list_single_graphic_pane_fp_g2_ParamLimits

0xc378,	// (0x00017eeb) list_single_graphic_pane_fp_g2

0x7a3b,	// (0x000135ae) list_single_graphic_pane_fp_g3_ParamLimits

0x7a3b,	// (0x000135ae) list_single_graphic_pane_fp_g3

0x7a47,	// (0x000135ba) list_single_graphic_pane_fp_g4_ParamLimits

0x7a47,	// (0x000135ba) list_single_graphic_pane_fp_g4

0xc384,	// (0x00017ef7) list_single_graphic_pane_fp_g5_ParamLimits

0xc384,	// (0x00017ef7) list_single_graphic_pane_fp_g5

0x0004,

0xfb57,	// (0x0001b6ca) list_single_graphic_pane_fp_g_ParamLimits

0xfb57,	// (0x0001b6ca) list_single_graphic_pane_fp_g

0xc3b3,	// (0x00017f26) list_single_graphic_pane_fp_t1_ParamLimits

0xc3b3,	// (0x00017f26) list_single_graphic_pane_fp_t1

0xc3a7,	// (0x00017f1a) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xc3a7,	// (0x00017f1a) list_single_graphic_heading_pane_fp_g1

0xc378,	// (0x00017eeb) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc378,	// (0x00017eeb) list_single_graphic_heading_pane_fp_g2

0x7a3b,	// (0x000135ae) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x7a3b,	// (0x000135ae) list_single_graphic_heading_pane_fp_g3

0x7a47,	// (0x000135ba) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x7a47,	// (0x000135ba) list_single_graphic_heading_pane_fp_g4

0xc384,	// (0x00017ef7) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc384,	// (0x00017ef7) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb57,	// (0x0001b6ca) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb57,	// (0x0001b6ca) list_single_graphic_heading_pane_fp_g

0xc3c9,	// (0x00017f3c) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xc3c9,	// (0x00017f3c) list_single_graphic_heading_pane_fp_t1

0xc3df,	// (0x00017f52) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xc3df,	// (0x00017f52) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb62,	// (0x0001b6d5) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb62,	// (0x0001b6d5) list_single_graphic_heading_pane_fp_t

0xc3f1,	// (0x00017f64) list_single_cale_day_pane_fp_g1_ParamLimits

0xc3f1,	// (0x00017f64) list_single_cale_day_pane_fp_g1

0xc429,	// (0x00017f9c) list_single_cale_day_pane_fp_g2_ParamLimits

0xc429,	// (0x00017f9c) list_single_cale_day_pane_fp_g2

0xc435,	// (0x00017fa8) list_single_cale_day_pane_fp_g3_ParamLimits

0xc435,	// (0x00017fa8) list_single_cale_day_pane_fp_g3

0xc45d,	// (0x00017fd0) list_single_cale_day_pane_fp_g4_ParamLimits

0xc45d,	// (0x00017fd0) list_single_cale_day_pane_fp_g4

0xc481,	// (0x00017ff4) list_single_cale_day_pane_fp_g5_ParamLimits

0xc481,	// (0x00017ff4) list_single_cale_day_pane_fp_g5

0x0004,

0xfb67,	// (0x0001b6da) list_single_cale_day_pane_fp_g_ParamLimits

0xfb67,	// (0x0001b6da) list_single_cale_day_pane_fp_g

0xc4a5,	// (0x00018018) list_single_cale_day_pane_fp_t1_ParamLimits

0xc4a5,	// (0x00018018) list_single_cale_day_pane_fp_t1

0xc4cb,	// (0x0001803e) list_single_cale_day_pane_fp_t2_ParamLimits

0xc4cb,	// (0x0001803e) list_single_cale_day_pane_fp_t2

0xc4e4,	// (0x00018057) list_single_cale_day_pane_fp_t3_ParamLimits

0xc4e4,	// (0x00018057) list_single_cale_day_pane_fp_t3

0x0002,

0xfb72,	// (0x0001b6e5) list_single_cale_day_pane_fp_t_ParamLimits

0xfb72,	// (0x0001b6e5) list_single_cale_day_pane_fp_t

0xc378,	// (0x00017eeb) list_empty_pane_fp_g1_ParamLimits

0xc378,	// (0x00017eeb) list_empty_pane_fp_g1

0xc4fd,	// (0x00018070) list_empty_pane_fp_t1

0xc50b,	// (0x0001807e) list_empty_pane_fp_t2

0x0001,

0xfb79,	// (0x0001b6ec) list_empty_pane_fp_t

0xc378,	// (0x00017eeb) list_single_heading_pane_fp_g1_ParamLimits

0xc378,	// (0x00017eeb) list_single_heading_pane_fp_g1

0x7a3b,	// (0x000135ae) list_single_heading_pane_fp_g2_ParamLimits

0x7a3b,	// (0x000135ae) list_single_heading_pane_fp_g2

0x7a47,	// (0x000135ba) list_single_heading_pane_fp_g3_ParamLimits

0x7a47,	// (0x000135ba) list_single_heading_pane_fp_g3

0x0002,

0xfb7e,	// (0x0001b6f1) list_single_heading_pane_fp_g_ParamLimits

0xfb7e,	// (0x0001b6f1) list_single_heading_pane_fp_g

0xc519,	// (0x0001808c) list_single_heading_pane_fp_t1_ParamLimits

0xc519,	// (0x0001808c) list_single_heading_pane_fp_t1

0xc52b,	// (0x0001809e) list_single_heading_pane_fp_t2_ParamLimits

0xc52b,	// (0x0001809e) list_single_heading_pane_fp_t2

0x0001,

0xfb85,	// (0x0001b6f8) list_single_heading_pane_fp_t_ParamLimits

0xfb85,	// (0x0001b6f8) list_single_heading_pane_fp_t

0x7daa,	// (0x0001391d) aid_size_cell_fast

0x6e2a,	// (0x0001299d) soft_indicator_pane_cp1_t1

0x7de7,	// (0x0001395a) cell_app_pane_cp2_ParamLimits

0x7de7,	// (0x0001395a) cell_app_pane_cp2

0x5a32,	// (0x000115a5) fep_hwr_candidate_drop_down_list_pane

0x5c0a,	// (0x0001177d) fep_hwr_candidate_pane_g3_ParamLimits

0x5c0a,	// (0x0001177d) fep_hwr_candidate_pane_g3

0x335f,	// (0x0000eed2) fep_hwr_candidate_pane_g4_ParamLimits

0x335f,	// (0x0000eed2) fep_hwr_candidate_pane_g4

0x0002,

0xfaf4,	// (0x0001b667) fep_hwr_candidate_pane_g_ParamLimits

0xfaf4,	// (0x0001b667) fep_hwr_candidate_pane_g

0xbe3f,	// (0x000179b2) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xbe3f,	// (0x000179b2) fep_vkb_candidate_drop_down_list_pane

0xc250,	// (0x00017dc3) fep_vkb_candidate_pane_g3

0xc258,	// (0x00017dcb) fep_vkb_candidate_pane_g4

0x0002,

0xfb21,	// (0x0001b694) fep_vkb_candidate_pane_g

0x5c75,	// (0x000117e8) cell_hwr_candidate_pane_g1_ParamLimits

0x5c83,	// (0x000117f6) cell_hwr_candidate_pane_g3_ParamLimits

0x5c83,	// (0x000117f6) cell_hwr_candidate_pane_g3

0xdb49,	// (0x000196bc) cell_hwr_candidate_pane_g4_ParamLimits

0xdb49,	// (0x000196bc) cell_hwr_candidate_pane_g4

0x0002,

0xfb40,	// (0x0001b6b3) cell_hwr_candidate_pane_g_ParamLimits

0xfb40,	// (0x0001b6b3) cell_hwr_candidate_pane_g

0xc26f,	// (0x00017de2) cell_vkb_candidate_pane_g3_ParamLimits

0xc26f,	// (0x00017de2) cell_vkb_candidate_pane_g3

0xc28a,	// (0x00017dfd) cell_vkb_candidate_pane_g4_ParamLimits

0xc28a,	// (0x00017dfd) cell_vkb_candidate_pane_g4

0xc541,	// (0x000180b4) cell_app_pane_cp2_g1_ParamLimits

0xc541,	// (0x000180b4) cell_app_pane_cp2_g1

0xc55f,	// (0x000180d2) cell_app_pane_cp2_g2_ParamLimits

0xc55f,	// (0x000180d2) cell_app_pane_cp2_g2

0x0001,

0xfb8a,	// (0x0001b6fd) cell_app_pane_cp2_g_ParamLimits

0xfb8a,	// (0x0001b6fd) cell_app_pane_cp2_g

0xc56b,	// (0x000180de) cell_app_pane_cp2_t1_ParamLimits

0xc56b,	// (0x000180de) cell_app_pane_cp2_t1

0x7a15,	// (0x00013588) grid_highlight_pane_cp1_ParamLimits

0x7a15,	// (0x00013588) grid_highlight_pane_cp1

0x5cc2,	// (0x00011835) cell_hwr_candidate_pane_cp1_ParamLimits

0x5cc2,	// (0x00011835) cell_hwr_candidate_pane_cp1

0x5c75,	// (0x000117e8) fep_hwr_candidate_drop_down_list_pane_g1

0x5ce1,	// (0x00011854) fep_hwr_candidate_drop_down_list_pane_g2

0x5cee,	// (0x00011861) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb8f,	// (0x0001b702) fep_hwr_candidate_drop_down_list_pane_g

0x5cfb,	// (0x0001186e) fep_hwr_candidate_drop_down_list_scroll_pane

0x5d04,	// (0x00011877) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x5d04,	// (0x00011877) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x5d11,	// (0x00011884) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x5d11,	// (0x00011884) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x5d1e,	// (0x00011891) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x5d1e,	// (0x00011891) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x5d2b,	// (0x0001189e) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x5d2b,	// (0x0001189e) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x5d46,	// (0x000118b9) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x5d46,	// (0x000118b9) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x5d61,	// (0x000118d4) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x5d61,	// (0x000118d4) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x5d7c,	// (0x000118ef) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x5d7c,	// (0x000118ef) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x5d97,	// (0x0001190a) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x5d97,	// (0x0001190a) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb96,	// (0x0001b709) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb96,	// (0x0001b709) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc57d,	// (0x000180f0) cell_vkb_candidate_pane_cp1_ParamLimits

0xc57d,	// (0x000180f0) cell_vkb_candidate_pane_cp1

0xbf58,	// (0x00017acb) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xbf58,	// (0x00017acb) fep_vkb_candidate_drop_down_list_pane_g1

0xc59d,	// (0x00018110) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc59d,	// (0x00018110) fep_vkb_candidate_drop_down_list_pane_g2

0xc5aa,	// (0x0001811d) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc5aa,	// (0x0001811d) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfba7,	// (0x0001b71a) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfba7,	// (0x0001b71a) fep_vkb_candidate_drop_down_list_pane_g

0xc5b7,	// (0x0001812a) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc5b7,	// (0x0001812a) fep_vkb_candidate_drop_down_list_scroll_pane

0xc5c4,	// (0x00018137) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc5c4,	// (0x00018137) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc5d1,	// (0x00018144) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc5d1,	// (0x00018144) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc5dd,	// (0x00018150) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc5dd,	// (0x00018150) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc336,	// (0x00017ea9) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc336,	// (0x00017ea9) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc357,	// (0x00017eca) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc357,	// (0x00017eca) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc5e9,	// (0x0001815c) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc5e9,	// (0x0001815c) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc60a,	// (0x0001817d) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc60a,	// (0x0001817d) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc62b,	// (0x0001819e) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc62b,	// (0x0001819e) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbae,	// (0x0001b721) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbae,	// (0x0001b721) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x6b41,	// (0x000126b4) title_pane_g1_ParamLimits

0x6b4e,	// (0x000126c1) title_pane_g2_ParamLimits

0xf529,	// (0x0001b09c) title_pane_g_ParamLimits

0x821d,	// (0x00013d90) aid_call2_pane

0x8225,	// (0x00013d98) aid_call_pane

0x822d,	// (0x00013da0) popup_clock_analogue_window_g1

0x822d,	// (0x00013da0) popup_clock_analogue_window_g2

0x4b16,	// (0x00010689) popup_clock_analogue_window_g3

0x4b1f,	// (0x00010692) popup_clock_analogue_window_g4

0x3acf,	// (0x0000f642) popup_clock_analogue_window_g5

0x0004,

0xf6ce,	// (0x0001b241) popup_clock_analogue_window_g

0x4b27,	// (0x0001069a) popup_clock_analogue_window_t1

0x4b35,	// (0x000106a8) clock_digital_number_pane_ParamLimits

0x4b35,	// (0x000106a8) clock_digital_number_pane

0x4b41,	// (0x000106b4) clock_digital_number_pane_cp02_ParamLimits

0x4b41,	// (0x000106b4) clock_digital_number_pane_cp02

0x4b4d,	// (0x000106c0) clock_digital_number_pane_cp03_ParamLimits

0x4b4d,	// (0x000106c0) clock_digital_number_pane_cp03

0x4b59,	// (0x000106cc) clock_digital_number_pane_cp04_ParamLimits

0x4b59,	// (0x000106cc) clock_digital_number_pane_cp04

0x4b65,	// (0x000106d8) clock_digital_separator_pane_ParamLimits

0x4b65,	// (0x000106d8) clock_digital_separator_pane

0x4b71,	// (0x000106e4) popup_clock_digital_window_t1_ParamLimits

0x4b71,	// (0x000106e4) popup_clock_digital_window_t1

0x3acf,	// (0x0000f642) clock_digital_number_pane_g1

0x3acf,	// (0x0000f642) clock_digital_number_pane_g2

0x0001,

0xf6d9,	// (0x0001b24c) clock_digital_number_pane_g

0x3acf,	// (0x0000f642) clock_digital_separator_pane_g1

0x3acf,	// (0x0000f642) clock_digital_separator_pane_g2

0x0001,

0xf6d9,	// (0x0001b24c) clock_digital_separator_pane_g

0x8c58,	// (0x000147cb) aid_fill_nsta_ParamLimits

0x8da4,	// (0x00014917) indicator_nsta_pane_ParamLimits

0x8f1d,	// (0x00014a90) popup_clock_analogue_window

0x8f1d,	// (0x00014a90) popup_clock_digital_window

0xb666,	// (0x000171d9) grid_indicator_nsta_pane_ParamLimits

0xb68f,	// (0x00017202) clock_nsta_pane_t2

0x0001,

0xfa74,	// (0x0001b5e7) clock_nsta_pane_t

0x4ada,	// (0x0001064d) aid_size_max_handle

0x4ae4,	// (0x00010657) aid_size_min_handle

0x88e8,	// (0x0001445b) editor_scroll_pane

0xc646,	// (0x000181b9) ex_editor_pane

0x7d18,	// (0x0001388b) scroll_pane_cp13

0x745d,	// (0x00012fd0) scroll_pane_cp14

0x825c,	// (0x00013dcf) scroll_pane_cp36

0x8288,	// (0x00013dfb) list_single_graphic_hl_pane_cp2_ParamLimits

0x8288,	// (0x00013dfb) list_single_graphic_hl_pane_cp2

0xa8d4,	// (0x00016447) list_single_graphic_hl_pane_ParamLimits

0xa8d4,	// (0x00016447) list_single_graphic_hl_pane

0xc64e,	// (0x000181c1) aid_size_min_hl_cp1

0xc657,	// (0x000181ca) list_highlight_pane_cp34_ParamLimits

0xc657,	// (0x000181ca) list_highlight_pane_cp34

0xc668,	// (0x000181db) list_single_graphic_hl_pane_g1_ParamLimits

0xc668,	// (0x000181db) list_single_graphic_hl_pane_g1

0xc675,	// (0x000181e8) list_single_graphic_hl_pane_g2_ParamLimits

0xc675,	// (0x000181e8) list_single_graphic_hl_pane_g2

0xc675,	// (0x000181e8) list_single_graphic_hl_pane_g3_ParamLimits

0xc675,	// (0x000181e8) list_single_graphic_hl_pane_g3

0x882d,	// (0x000143a0) list_single_graphic_hl_pane_g4_ParamLimits

0x882d,	// (0x000143a0) list_single_graphic_hl_pane_g4

0xc681,	// (0x000181f4) list_single_graphic_hl_pane_g5_ParamLimits

0xc681,	// (0x000181f4) list_single_graphic_hl_pane_g5

0x0004,

0xfbbf,	// (0x0001b732) list_single_graphic_hl_pane_g_ParamLimits

0xfbbf,	// (0x0001b732) list_single_graphic_hl_pane_g

0x9f12,	// (0x00015a85) list_single_graphic_hl_pane_t1_ParamLimits

0x9f12,	// (0x00015a85) list_single_graphic_hl_pane_t1

0xc695,	// (0x00018208) aid_size_min_hl_cp2

0xc69e,	// (0x00018211) list_highlight_pane_cp34_cp2_ParamLimits

0xc69e,	// (0x00018211) list_highlight_pane_cp34_cp2

0xc668,	// (0x000181db) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc668,	// (0x000181db) list_single_graphic_hl_pane_g1_cp2

0xc6ab,	// (0x0001821e) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc6ab,	// (0x0001821e) list_single_graphic_hl_pane_g2_cp2

0xc6b7,	// (0x0001822a) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc6b7,	// (0x0001822a) list_single_graphic_hl_pane_g3_cp2

0xc6c5,	// (0x00018238) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xc6c5,	// (0x00018238) list_single_graphic_hl_pane_g4_cp2

0xc6d1,	// (0x00018244) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc6d1,	// (0x00018244) list_single_graphic_hl_pane_g5_cp2

0x4e25,	// (0x00010998) control_pane_g4_ParamLimits

0x4e25,	// (0x00010998) control_pane_g4

0x8c14,	// (0x00014787) bg_popup_sub_pane_cp10_ParamLimits

0xbce4,	// (0x00017857) list_choice_list_pane_ParamLimits

0xbcf3,	// (0x00017866) scroll_pane_cp23

0x6eba,	// (0x00012a2d) bg_popup_preview_window_pane_cp02_ParamLimits

0xc2db,	// (0x00017e4e) list_preview_fixed_pane_ParamLimits

0xc2f1,	// (0x00017e64) list_preview_fixed_pane_cp_ParamLimits

0xc2f1,	// (0x00017e64) list_preview_fixed_pane_cp

0xc2fd,	// (0x00017e70) popup_preview_fixed_window_g1_ParamLimits

0xc2fd,	// (0x00017e70) popup_preview_fixed_window_g1

0xc309,	// (0x00017e7c) popup_preview_fixed_window_g2_ParamLimits

0xc309,	// (0x00017e7c) popup_preview_fixed_window_g2

0x0002,

0xfb47,	// (0x0001b6ba) popup_preview_fixed_window_g_ParamLimits

0xfb47,	// (0x0001b6ba) popup_preview_fixed_window_g

0x4a4e,	// (0x000105c1) aid_navi_side_left_pane_ParamLimits

0x4a63,	// (0x000105d6) aid_navi_side_right_pane_ParamLimits

0x4a7b,	// (0x000105ee) navi_icon_pane_stacon_ParamLimits

0x4a8f,	// (0x00010602) navi_navi_pane_stacon_ParamLimits

0x4a7b,	// (0x000105ee) navi_text_pane_stacon_ParamLimits

0x4666,	// (0x000101d9) main_text_info_pane

0xc6fb,	// (0x0001826e) listscroll_text_info_pane

0xc703,	// (0x00018276) list_text_info_pane_ParamLimits

0xc703,	// (0x00018276) list_text_info_pane

0xc712,	// (0x00018285) scroll_pane_cp24_ParamLimits

0xc712,	// (0x00018285) scroll_pane_cp24

0xc730,	// (0x000182a3) list_text_info_pane_t1_ParamLimits

0xc730,	// (0x000182a3) list_text_info_pane_t1

0x4fa7,	// (0x00010b1a) popup_fast_swap2_window_ParamLimits

0x4fa7,	// (0x00010b1a) popup_fast_swap2_window

0xc761,	// (0x000182d4) aid_size_cell_fast2

0x3ac5,	// (0x0000f638) bg_popup_window_pane_cp17

0x96a7,	// (0x0001521a) heading_pane_cp2

0x96af,	// (0x00015222) listscroll_fast2_pane

0xc76b,	// (0x000182de) grid_fast2_pane

0xc775,	// (0x000182e8) listscroll_fast2_pane_g1

0xc77d,	// (0x000182f0) listscroll_fast2_pane_g2

0x0001,

0xfbca,	// (0x0001b73d) listscroll_fast2_pane_g

0x7d18,	// (0x0001388b) scroll_pane_cp26

0xc787,	// (0x000182fa) cell_fast2_pane_ParamLimits

0xc787,	// (0x000182fa) cell_fast2_pane

0xc79c,	// (0x0001830f) cell_fast2_pane_g1

0xc7a5,	// (0x00018318) cell_fast2_pane_g2

0xc7ae,	// (0x00018321) cell_fast2_pane_g3

0x0002,

0xfbcf,	// (0x0001b742) cell_fast2_pane_g

0x721a,	// (0x00012d8d) grid_highlight_pane_cp9

0x4f6d,	// (0x00010ae0) main_eswt_pane_ParamLimits

0x4f6d,	// (0x00010ae0) main_eswt_pane

0xc727,	// (0x0001829a) list_single_text_info_pane

0xc7b6,	// (0x00018329) eswt_ctrl_button_pane

0xc7b6,	// (0x00018329) eswt_ctrl_canvas_pane

0xc7be,	// (0x00018331) eswt_ctrl_combo_pane

0xc7b6,	// (0x00018329) eswt_ctrl_default_pane

0xc7b6,	// (0x00018329) eswt_ctrl_label_pane

0xc7c6,	// (0x00018339) eswt_ctrl_wait_pane

0xc7ce,	// (0x00018341) eswt_shell_pane

0x3ac5,	// (0x0000f638) listscroll_eswt_app_pane

0xc7ee,	// (0x00018361) popup_eswt_tasktip_window_ParamLimits

0xc7ee,	// (0x00018361) popup_eswt_tasktip_window

0x927e,	// (0x00014df1) bg_popup_window_pane_cp18

0xc7ff,	// (0x00018372) eswt_control_pane_g1_ParamLimits

0xc7ff,	// (0x00018372) eswt_control_pane_g1

0xc80c,	// (0x0001837f) eswt_control_pane_g2_ParamLimits

0xc80c,	// (0x0001837f) eswt_control_pane_g2

0xc819,	// (0x0001838c) eswt_control_pane_g3_ParamLimits

0xc819,	// (0x0001838c) eswt_control_pane_g3

0xc826,	// (0x00018399) eswt_control_pane_g4_ParamLimits

0xc826,	// (0x00018399) eswt_control_pane_g4

0x0003,

0xfbd6,	// (0x0001b749) eswt_control_pane_g_ParamLimits

0xfbd6,	// (0x0001b749) eswt_control_pane_g

0x7a15,	// (0x00013588) bg_button_pane_ParamLimits

0x7a15,	// (0x00013588) bg_button_pane

0x722f,	// (0x00012da2) common_borders_pane_copy2_ParamLimits

0x722f,	// (0x00012da2) common_borders_pane_copy2

0xc833,	// (0x000183a6) control_button_pane_g1_ParamLimits

0xc833,	// (0x000183a6) control_button_pane_g1

0xc83f,	// (0x000183b2) control_button_pane_g2_ParamLimits

0xc83f,	// (0x000183b2) control_button_pane_g2

0xc84b,	// (0x000183be) control_button_pane_g3_ParamLimits

0xc84b,	// (0x000183be) control_button_pane_g3

0x0002,

0xfbdf,	// (0x0001b752) control_button_pane_g_ParamLimits

0xfbdf,	// (0x0001b752) control_button_pane_g

0xc85f,	// (0x000183d2) control_button_pane_t1

0xc86d,	// (0x000183e0) control_button_pane_t2

0x0001,

0xfbe6,	// (0x0001b759) control_button_pane_t

0x915c,	// (0x00014ccf) bg_button_pane_g1

0x916c,	// (0x00014cdf) bg_button_pane_g2

0x9164,	// (0x00014cd7) bg_button_pane_g3

0x917c,	// (0x00014cef) bg_button_pane_g4

0x9174,	// (0x00014ce7) bg_button_pane_g5

0x9184,	// (0x00014cf7) bg_button_pane_g6

0x918c,	// (0x00014cff) bg_button_pane_g7

0x919c,	// (0x00014d0f) bg_button_pane_g8

0x9194,	// (0x00014d07) bg_button_pane_g9

0x0008,

0xf837,	// (0x0001b3aa) bg_button_pane_g

0xbc9f,	// (0x00017812) common_borders_pane_ParamLimits

0xbc9f,	// (0x00017812) common_borders_pane

0xc7ff,	// (0x00018372) eswt_control_pane_g1_copy1_ParamLimits

0xc7ff,	// (0x00018372) eswt_control_pane_g1_copy1

0xc80c,	// (0x0001837f) eswt_control_pane_g2_copy1_ParamLimits

0xc80c,	// (0x0001837f) eswt_control_pane_g2_copy1

0xc819,	// (0x0001838c) eswt_control_pane_g3_copy1_ParamLimits

0xc819,	// (0x0001838c) eswt_control_pane_g3_copy1

0xc826,	// (0x00018399) eswt_control_pane_g4_copy1_ParamLimits

0xc826,	// (0x00018399) eswt_control_pane_g4_copy1

0xbcda,	// (0x0001784d) bg_eswt_ctrl_canvas_pane_g1

0xbc9f,	// (0x00017812) common_borders_pane_cp2_ParamLimits

0xbc9f,	// (0x00017812) common_borders_pane_cp2

0xbc9f,	// (0x00017812) common_borders_pane_cp3_ParamLimits

0xbc9f,	// (0x00017812) common_borders_pane_cp3

0xc87b,	// (0x000183ee) separator_horizontal_pane

0xc883,	// (0x000183f6) separator_vertical_pane

0xc7ff,	// (0x00018372) eswt_control_pane_g1_copy2_ParamLimits

0xc7ff,	// (0x00018372) eswt_control_pane_g1_copy2

0xc80c,	// (0x0001837f) eswt_control_pane_g2_copy2_ParamLimits

0xc80c,	// (0x0001837f) eswt_control_pane_g2_copy2

0xc819,	// (0x0001838c) eswt_control_pane_g3_copy2_ParamLimits

0xc819,	// (0x0001838c) eswt_control_pane_g3_copy2

0xc826,	// (0x00018399) eswt_control_pane_g4_copy2_ParamLimits

0xc826,	// (0x00018399) eswt_control_pane_g4_copy2

0x3ac5,	// (0x0000f638) common_borders_pane_cp4

0xc88c,	// (0x000183ff) separator_horizontal_pane_g1

0xc895,	// (0x00018408) separator_horizontal_pane_g2

0xc89e,	// (0x00018411) separator_horizontal_pane_g3

0x0002,

0xfbeb,	// (0x0001b75e) separator_horizontal_pane_g

0xc7ff,	// (0x00018372) eswt_control_pane_g1_copy3_ParamLimits

0xc7ff,	// (0x00018372) eswt_control_pane_g1_copy3

0xc80c,	// (0x0001837f) eswt_control_pane_g2_copy3_ParamLimits

0xc80c,	// (0x0001837f) eswt_control_pane_g2_copy3

0xc819,	// (0x0001838c) eswt_control_pane_g3_copy3_ParamLimits

0xc819,	// (0x0001838c) eswt_control_pane_g3_copy3

0xc826,	// (0x00018399) eswt_control_pane_g4_copy3_ParamLimits

0xc826,	// (0x00018399) eswt_control_pane_g4_copy3

0x3ac5,	// (0x0000f638) common_borders_pane_cp5

0xc8a7,	// (0x0001841a) separator_vertical_pane_g1

0xc8b0,	// (0x00018423) separator_vertical_pane_g2

0xc8b9,	// (0x0001842c) separator_vertical_pane_g3

0x0002,

0xfbf2,	// (0x0001b765) separator_vertical_pane_g

0xc7ff,	// (0x00018372) eswt_control_pane_g1_copy4_ParamLimits

0xc7ff,	// (0x00018372) eswt_control_pane_g1_copy4

0xc80c,	// (0x0001837f) eswt_control_pane_g2_copy4_ParamLimits

0xc80c,	// (0x0001837f) eswt_control_pane_g2_copy4

0xc819,	// (0x0001838c) eswt_control_pane_g3_copy4_ParamLimits

0xc819,	// (0x0001838c) eswt_control_pane_g3_copy4

0xc826,	// (0x00018399) eswt_control_pane_g4_copy4_ParamLimits

0xc826,	// (0x00018399) eswt_control_pane_g4_copy4

0xc8c2,	// (0x00018435) eswt_ctrl_combo_button_pane

0xc8ca,	// (0x0001843d) eswt_ctrl_input_pane

0xc8d2,	// (0x00018445) popup_choice_list_window_cp70

0xc8da,	// (0x0001844d) eswt_ctrl_input_pane_t1

0x3ac5,	// (0x0000f638) input_focus_pane_cp70

0xbc9f,	// (0x00017812) bg_button_pane_cp70_ParamLimits

0xbc9f,	// (0x00017812) bg_button_pane_cp70

0xc8e8,	// (0x0001845b) eswt_ctrl_combo_button_pane_g1

0xc8f0,	// (0x00018463) wait_bar_pane_cp70

0x927e,	// (0x00014df1) bg_popup_window_pane_cp70_ParamLimits

0x927e,	// (0x00014df1) bg_popup_window_pane_cp70

0xc8f8,	// (0x0001846b) popup_eswt_tasktip_window_t1

0xc90e,	// (0x00018481) wait_bar_pane_cp71_ParamLimits

0xc90e,	// (0x00018481) wait_bar_pane_cp71

0xc91a,	// (0x0001848d) grid_eswt_app_pane

0x8036,	// (0x00013ba9) scroll_pane_cp70

0xc923,	// (0x00018496) cell_eswt_app_pane_ParamLimits

0xc923,	// (0x00018496) cell_eswt_app_pane

0xc953,	// (0x000184c6) cell_eswt_app_pane_g1_ParamLimits

0xc953,	// (0x000184c6) cell_eswt_app_pane_g1

0xc982,	// (0x000184f5) cell_eswt_app_pane_g2_ParamLimits

0xc982,	// (0x000184f5) cell_eswt_app_pane_g2

0x0001,

0xfbf9,	// (0x0001b76c) cell_eswt_app_pane_g_ParamLimits

0xfbf9,	// (0x0001b76c) cell_eswt_app_pane_g

0xc9ab,	// (0x0001851e) cell_eswt_app_pane_t1_ParamLimits

0xc9ab,	// (0x0001851e) cell_eswt_app_pane_t1

0xc9dd,	// (0x00018550) grid_highlight_pane_cp70_ParamLimits

0xc9dd,	// (0x00018550) grid_highlight_pane_cp70

0x87c0,	// (0x00014333) set_content_pane_g1

0x8b93,	// (0x00014706) status_small_volume_pane

0x5db2,	// (0x00011925) status_small_volume_pane_g1

0x5dba,	// (0x0001192d) volume_small2_pane

0x5dc3,	// (0x00011936) volume_small2_pane_g1

0x5dcc,	// (0x0001193f) volume_small2_pane_g2

0x5dd5,	// (0x00011948) volume_small2_pane_g3

0x5dde,	// (0x00011951) volume_small2_pane_g4

0x5de7,	// (0x0001195a) volume_small2_pane_g5

0x5df0,	// (0x00011963) volume_small2_pane_g6

0x5df9,	// (0x0001196c) volume_small2_pane_g7

0x5e02,	// (0x00011975) volume_small2_pane_g8

0x5e0b,	// (0x0001197e) volume_small2_pane_g9

0x5e14,	// (0x00011987) volume_small2_pane_g10

0x0009,

0xfbfe,	// (0x0001b771) volume_small2_pane_g

0xc0a0,	// (0x00017c13) fep_vkb_top_text_pane_g1_ParamLimits

0xc0bb,	// (0x00017c2e) fep_vkb_top_text_pane_t1_ParamLimits

0xc315,	// (0x00017e88) popup_preview_fixed_window_g3_ParamLimits

0xc315,	// (0x00017e88) popup_preview_fixed_window_g3

0x5458,	// (0x00010fcb) popup_toolbar_trans_pane

0xa631,	// (0x000161a4) aid_height_set_list_ParamLimits

0xa642,	// (0x000161b5) aid_size_parent_ParamLimits

0x8c14,	// (0x00014787) list_highlight_pane_cp2_ParamLimits

0x87c0,	// (0x00014333) set_content_pane_g1_ParamLimits

0xa8f2,	// (0x00016465) list_single_image_pane_ParamLimits

0xa8f2,	// (0x00016465) list_single_image_pane

0xc9e9,	// (0x0001855c) aid_size_cell_image_ParamLimits

0xc9e9,	// (0x0001855c) aid_size_cell_image

0xc9f6,	// (0x00018569) grid_single_image_pane_ParamLimits

0xc9f6,	// (0x00018569) grid_single_image_pane

0xa9ab,	// (0x0001651e) list_single_image_pane_g1_ParamLimits

0xa9ab,	// (0x0001651e) list_single_image_pane_g1

0xca02,	// (0x00018575) list_single_image_pane_g2_ParamLimits

0xca02,	// (0x00018575) list_single_image_pane_g2

0x0001,

0xfc13,	// (0x0001b786) list_single_image_pane_g_ParamLimits

0xfc13,	// (0x0001b786) list_single_image_pane_g

0xca16,	// (0x00018589) list_single_image_pane_t1_ParamLimits

0xca16,	// (0x00018589) list_single_image_pane_t1

0xca2c,	// (0x0001859f) cell_image_list_pane_ParamLimits

0xca2c,	// (0x0001859f) cell_image_list_pane

0xca40,	// (0x000185b3) cell_image_list_pane_g1

0xca49,	// (0x000185bc) cell_image_list_pane_g2

0x0001,

0xfc18,	// (0x0001b78b) cell_image_list_pane_g

0xca52,	// (0x000185c5) aid_size_cell_tb_trans_pane

0x7a15,	// (0x00013588) bg_tb_trans_pane

0xca64,	// (0x000185d7) grid_tb_trans_pane

0x915c,	// (0x00014ccf) bg_tb_trans_pane_g1

0x916c,	// (0x00014cdf) bg_tb_trans_pane_g2

0x9164,	// (0x00014cd7) bg_tb_trans_pane_g3

0x917c,	// (0x00014cef) bg_tb_trans_pane_g4

0x9174,	// (0x00014ce7) bg_tb_trans_pane_g5

0x919c,	// (0x00014d0f) bg_tb_trans_pane_g6

0x9194,	// (0x00014d07) bg_tb_trans_pane_g7

0x9184,	// (0x00014cf7) bg_tb_trans_pane_g8

0x918c,	// (0x00014cff) bg_tb_trans_pane_g9

0x0008,

0xfc1d,	// (0x0001b790) bg_tb_trans_pane_g

0xca78,	// (0x000185eb) cell_toolbar_trans_pane_ParamLimits

0xca78,	// (0x000185eb) cell_toolbar_trans_pane

0xbcda,	// (0x0001784d) cell_toolbar_trans_pane_g1

0xb860,	// (0x000173d3) list_form2_midp_pane_t1

0xb86e,	// (0x000173e1) list_form2_midp_pane_t2

0x0001,

0xfaba,	// (0x0001b62d) list_form2_midp_pane_t

0xb87c,	// (0x000173ef) scroll_pane_cp51_ParamLimits

0xba87,	// (0x000175fa) form2_midp_wait_pane_g1

0xba90,	// (0x00017603) form2_midp_wait_pane_g2

0xba99,	// (0x0001760c) form2_midp_wait_pane_g3

0x0002,

0xfacf,	// (0x0001b642) form2_midp_wait_pane_g

0x6c17,	// (0x0001278a) list_highlight_pane_cp21_ParamLimits

0xbae5,	// (0x00017658) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xbaf4,	// (0x00017667) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xa878,	// (0x000163eb) list_single_2graphic_im_pane_ParamLimits

0xa878,	// (0x000163eb) list_single_2graphic_im_pane

0xca9e,	// (0x00018611) list_single_2graphic_im_pane_g1_ParamLimits

0xca9e,	// (0x00018611) list_single_2graphic_im_pane_g1

0xcaaf,	// (0x00018622) list_single_2graphic_im_pane_g2_ParamLimits

0xcaaf,	// (0x00018622) list_single_2graphic_im_pane_g2

0xcabb,	// (0x0001862e) list_single_2graphic_im_pane_g3_ParamLimits

0xcabb,	// (0x0001862e) list_single_2graphic_im_pane_g3

0x0003,

0xfc30,	// (0x0001b7a3) list_single_2graphic_im_pane_g_ParamLimits

0xfc30,	// (0x0001b7a3) list_single_2graphic_im_pane_g

0xcadb,	// (0x0001864e) list_single_2graphic_im_pane_t1_ParamLimits

0xcadb,	// (0x0001864e) list_single_2graphic_im_pane_t1

0xc321,	// (0x00017e94) list_single_graphic_2heading_pane_fp_ParamLimits

0xc321,	// (0x00017e94) list_single_graphic_2heading_pane_fp

0xc3a7,	// (0x00017f1a) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xc3a7,	// (0x00017f1a) list_single_graphic_2heading_pane_fp_g1

0xc378,	// (0x00017eeb) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc378,	// (0x00017eeb) list_single_graphic_2heading_pane_fp_g2

0x7a3b,	// (0x000135ae) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x7a3b,	// (0x000135ae) list_single_graphic_2heading_pane_fp_g3

0x7a47,	// (0x000135ba) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x7a47,	// (0x000135ba) list_single_graphic_2heading_pane_fp_g4

0xc384,	// (0x00017ef7) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc384,	// (0x00017ef7) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb57,	// (0x0001b6ca) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb57,	// (0x0001b6ca) list_single_graphic_2heading_pane_fp_g

0xcb0c,	// (0x0001867f) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xcb0c,	// (0x0001867f) list_single_graphic_2heading_pane_fp_t1

0xc3df,	// (0x00017f52) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xc3df,	// (0x00017f52) list_single_graphic_2heading_pane_fp_t2

0xcb22,	// (0x00018695) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xcb22,	// (0x00018695) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc39,	// (0x0001b7ac) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc39,	// (0x0001b7ac) list_single_graphic_2heading_pane_fp_t

0xbd66,	// (0x000178d9) fep_hwr_write_pane_g5_ParamLimits

0xbd66,	// (0x000178d9) fep_hwr_write_pane_g5

0xbd72,	// (0x000178e5) fep_hwr_write_pane_g6_ParamLimits

0xbd72,	// (0x000178e5) fep_hwr_write_pane_g6

0xc7ce,	// (0x00018341) eswt_shell_pane_ParamLimits

0x927e,	// (0x00014df1) bg_popup_window_pane_cp18_ParamLimits

0xa578,	// (0x000160eb) heading_pane_cp70

0xc8f8,	// (0x0001846b) popup_eswt_tasktip_window_t1_ParamLimits

0x8cad,	// (0x00014820) aid_touch_tab_arrow_left

0x8cbc,	// (0x0001482f) aid_touch_tab_arrow_right

0x6b5f,	// (0x000126d2) title_pane_g3_ParamLimits

0x6b5f,	// (0x000126d2) title_pane_g3

0x78f4,	// (0x00013467) set_value_pane_g1

0x5458,	// (0x00010fcb) popup_toolbar_trans_pane_ParamLimits

0xca52,	// (0x000185c5) aid_size_cell_tb_trans_pane_ParamLimits

0x7a15,	// (0x00013588) bg_tb_trans_pane_ParamLimits

0xca64,	// (0x000185d7) grid_tb_trans_pane_ParamLimits

0x6eba,	// (0x00012a2d) cont_note_pane_ParamLimits

0x6eba,	// (0x00012a2d) cont_note_pane

0x722f,	// (0x00012da2) cont_snote2_single_text_pane_ParamLimits

0x722f,	// (0x00012da2) cont_snote2_single_text_pane

0x722f,	// (0x00012da2) cont_snote2_single_graphic_pane_ParamLimits

0x722f,	// (0x00012da2) cont_snote2_single_graphic_pane

0x98d6,	// (0x00015449) cont_note_wait_pane_ParamLimits

0x98d6,	// (0x00015449) cont_note_wait_pane

0x98d6,	// (0x00015449) cont_note_image_pane_ParamLimits

0x98d6,	// (0x00015449) cont_note_image_pane

0xcb38,	// (0x000186ab) popup_note2_window_g1_ParamLimits

0xcb38,	// (0x000186ab) popup_note2_window_g1

0xcb69,	// (0x000186dc) popup_note2_window_t1_ParamLimits

0xcb69,	// (0x000186dc) popup_note2_window_t1

0xcbae,	// (0x00018721) popup_note2_window_t2_ParamLimits

0xcbae,	// (0x00018721) popup_note2_window_t2

0xcbf3,	// (0x00018766) popup_note2_window_t3_ParamLimits

0xcbf3,	// (0x00018766) popup_note2_window_t3

0xcc38,	// (0x000187ab) popup_note2_window_t4_ParamLimits

0xcc38,	// (0x000187ab) popup_note2_window_t4

0x6f3e,	// (0x00012ab1) popup_note2_window_t5_ParamLimits

0x6f3e,	// (0x00012ab1) popup_note2_window_t5

0x0004,

0xfc45,	// (0x0001b7b8) popup_note2_window_t_ParamLimits

0xfc45,	// (0x0001b7b8) popup_note2_window_t

0xcc67,	// (0x000187da) popup_note2_image_window_g1_ParamLimits

0xcc67,	// (0x000187da) popup_note2_image_window_g1

0xcc73,	// (0x000187e6) popup_note2_image_window_g2_ParamLimits

0xcc73,	// (0x000187e6) popup_note2_image_window_g2

0x0001,

0xfc50,	// (0x0001b7c3) popup_note2_image_window_g_ParamLimits

0xfc50,	// (0x0001b7c3) popup_note2_image_window_g

0xcc85,	// (0x000187f8) popup_note2_image_window_t1_ParamLimits

0xcc85,	// (0x000187f8) popup_note2_image_window_t1

0xcc9d,	// (0x00018810) popup_note2_image_window_t2_ParamLimits

0xcc9d,	// (0x00018810) popup_note2_image_window_t2

0xccb5,	// (0x00018828) popup_note2_image_window_t3_ParamLimits

0xccb5,	// (0x00018828) popup_note2_image_window_t3

0x0002,

0xfc55,	// (0x0001b7c8) popup_note2_image_window_t_ParamLimits

0xfc55,	// (0x0001b7c8) popup_note2_image_window_t

0x98e4,	// (0x00015457) popup_note2_wait_window_g1_ParamLimits

0x98e4,	// (0x00015457) popup_note2_wait_window_g1

0xccd1,	// (0x00018844) popup_note2_wait_window_g2_ParamLimits

0xccd1,	// (0x00018844) popup_note2_wait_window_g2

0x98fc,	// (0x0001546f) popup_note2_wait_window_g3_ParamLimits

0x98fc,	// (0x0001546f) popup_note2_wait_window_g3

0x0002,

0xfc5c,	// (0x0001b7cf) popup_note2_wait_window_g_ParamLimits

0xfc5c,	// (0x0001b7cf) popup_note2_wait_window_g

0xccdd,	// (0x00018850) popup_note2_wait_window_t1_ParamLimits

0xccdd,	// (0x00018850) popup_note2_wait_window_t1

0xccfb,	// (0x0001886e) popup_note2_wait_window_t2_ParamLimits

0xccfb,	// (0x0001886e) popup_note2_wait_window_t2

0xcd19,	// (0x0001888c) popup_note2_wait_window_t3_ParamLimits

0xcd19,	// (0x0001888c) popup_note2_wait_window_t3

0xcd2b,	// (0x0001889e) popup_note2_wait_window_t4_ParamLimits

0xcd2b,	// (0x0001889e) popup_note2_wait_window_t4

0x0003,

0xfc63,	// (0x0001b7d6) popup_note2_wait_window_t_ParamLimits

0xfc63,	// (0x0001b7d6) popup_note2_wait_window_t

0xcd3d,	// (0x000188b0) wait_bar2_pane_ParamLimits

0xcd3d,	// (0x000188b0) wait_bar2_pane

0xcd55,	// (0x000188c8) popup_snote2_single_text_window_g1_ParamLimits

0xcd55,	// (0x000188c8) popup_snote2_single_text_window_g1

0xcd7d,	// (0x000188f0) popup_snote2_single_text_window_t1_ParamLimits

0xcd7d,	// (0x000188f0) popup_snote2_single_text_window_t1

0xcdc9,	// (0x0001893c) popup_snote2_single_text_window_t2_ParamLimits

0xcdc9,	// (0x0001893c) popup_snote2_single_text_window_t2

0xce15,	// (0x00018988) popup_snote2_single_text_window_t3_ParamLimits

0xce15,	// (0x00018988) popup_snote2_single_text_window_t3

0xce56,	// (0x000189c9) popup_snote2_single_text_window_t4_ParamLimits

0xce56,	// (0x000189c9) popup_snote2_single_text_window_t4

0xce8c,	// (0x000189ff) popup_snote2_single_text_window_t5_ParamLimits

0xce8c,	// (0x000189ff) popup_snote2_single_text_window_t5

0x0004,

0xfc6c,	// (0x0001b7df) popup_snote2_single_text_window_t_ParamLimits

0xfc6c,	// (0x0001b7df) popup_snote2_single_text_window_t

0xceb7,	// (0x00018a2a) popup_snote2_single_graphic_window_g1_ParamLimits

0xceb7,	// (0x00018a2a) popup_snote2_single_graphic_window_g1

0xcedf,	// (0x00018a52) popup_snote2_single_graphic_window_g2_ParamLimits

0xcedf,	// (0x00018a52) popup_snote2_single_graphic_window_g2

0x0001,

0xfc77,	// (0x0001b7ea) popup_snote2_single_graphic_window_g_ParamLimits

0xfc77,	// (0x0001b7ea) popup_snote2_single_graphic_window_g

0xcf07,	// (0x00018a7a) popup_snote2_single_graphic_window_t1_ParamLimits

0xcf07,	// (0x00018a7a) popup_snote2_single_graphic_window_t1

0xcf53,	// (0x00018ac6) popup_snote2_single_graphic_window_t2_ParamLimits

0xcf53,	// (0x00018ac6) popup_snote2_single_graphic_window_t2

0xce15,	// (0x00018988) popup_snote2_single_graphic_window_t3_ParamLimits

0xce15,	// (0x00018988) popup_snote2_single_graphic_window_t3

0xce56,	// (0x000189c9) popup_snote2_single_graphic_window_t4_ParamLimits

0xce56,	// (0x000189c9) popup_snote2_single_graphic_window_t4

0xce8c,	// (0x000189ff) popup_snote2_single_graphic_window_t5_ParamLimits

0xce8c,	// (0x000189ff) popup_snote2_single_graphic_window_t5

0x0004,

0xfc7c,	// (0x0001b7ef) popup_snote2_single_graphic_window_t_ParamLimits

0xfc7c,	// (0x0001b7ef) popup_snote2_single_graphic_window_t

0xb73d,	// (0x000172b0) clock_nsta_pane_cp2_t1

0xb73d,	// (0x000172b0) clock_nsta_pane_cp2_t2

0x0001,

0xfa90,	// (0x0001b603) clock_nsta_pane_cp2_t

0x7a2f,	// (0x000135a2) form_field_data_wide_pane_g1_ParamLimits

0x7a3b,	// (0x000135ae) form_field_data_wide_pane_g2_ParamLimits

0x7a3b,	// (0x000135ae) form_field_data_wide_pane_g2

0x7a47,	// (0x000135ba) form_field_data_wide_pane_g3_ParamLimits

0x7a47,	// (0x000135ba) form_field_data_wide_pane_g3

0x0002,

0xf651,	// (0x0001b1c4) form_field_data_wide_pane_g_ParamLimits

0xf651,	// (0x0001b1c4) form_field_data_wide_pane_g

0xb619,	// (0x0001718c) grid_touch_3_pane_ParamLimits

0xb619,	// (0x0001718c) grid_touch_3_pane

0xcf9f,	// (0x00018b12) cell_touch_3_pane_ParamLimits

0xcf9f,	// (0x00018b12) cell_touch_3_pane

0xbcda,	// (0x0001784d) cell_touch_3_pane_g1

0xbcda,	// (0x0001784d) cell_touch_3_pane_g2

0x0001,

0xfb15,	// (0x0001b688) cell_touch_3_pane_g

0x6f96,	// (0x00012b09) cont_query_data_pane

0x6f9e,	// (0x00012b11) cont_query_data_pane_cp1

0xcfcd,	// (0x00018b40) button_value_adjust_pane_cp7

0xcfd5,	// (0x00018b48) query_popup_pane_cp3

0x8336,	// (0x00013ea9) bg_popup_sub_pane_cp22_ParamLimits

0x4b90,	// (0x00010703) navi_navi_volume_pane_cp2

0x4bab,	// (0x0001071e) popup_side_volume_key_window_g2

0x4bba,	// (0x0001072d) popup_side_volume_key_window_g3

0x0002,

0xf6e7,	// (0x0001b25a) popup_side_volume_key_window_g

0x4bd7,	// (0x0001074a) popup_side_volume_key_window_t2

0x0001,

0xf6ee,	// (0x0001b261) popup_side_volume_key_window_t

0x867f,	// (0x000141f2) popup_side_volume_key_window_ParamLimits

0x762a,	// (0x0001319d) list_double_graphic_pane_g4_ParamLimits

0x762a,	// (0x0001319d) list_double_graphic_pane_g4

0xa8b5,	// (0x00016428) list_single_2heading_msg_pane_ParamLimits

0xa8b5,	// (0x00016428) list_single_2heading_msg_pane

0xd004,	// (0x00018b77) list_single_2heading_msg_pane_g1_ParamLimits

0xd004,	// (0x00018b77) list_single_2heading_msg_pane_g1

0xae53,	// (0x000169c6) list_single_2heading_msg_pane_g2_ParamLimits

0xae53,	// (0x000169c6) list_single_2heading_msg_pane_g2

0xd010,	// (0x00018b83) list_single_2heading_msg_pane_g3_ParamLimits

0xd010,	// (0x00018b83) list_single_2heading_msg_pane_g3

0xd01c,	// (0x00018b8f) list_single_2heading_msg_pane_g4_ParamLimits

0xd01c,	// (0x00018b8f) list_single_2heading_msg_pane_g4

0x0003,

0xfc87,	// (0x0001b7fa) list_single_2heading_msg_pane_g_ParamLimits

0xfc87,	// (0x0001b7fa) list_single_2heading_msg_pane_g

0xd034,	// (0x00018ba7) list_single_2heading_msg_pane_t1_ParamLimits

0xd034,	// (0x00018ba7) list_single_2heading_msg_pane_t1

0xd05c,	// (0x00018bcf) list_single_2heading_msg_pane_t2_ParamLimits

0xd05c,	// (0x00018bcf) list_single_2heading_msg_pane_t2

0xd08b,	// (0x00018bfe) list_single_2heading_msg_pane_t3_ParamLimits

0xd08b,	// (0x00018bfe) list_single_2heading_msg_pane_t3

0xd0c4,	// (0x00018c37) list_single_2heading_msg_pane_t4_ParamLimits

0xd0c4,	// (0x00018c37) list_single_2heading_msg_pane_t4

0x0003,

0xfc90,	// (0x0001b803) list_single_2heading_msg_pane_t_ParamLimits

0xfc90,	// (0x0001b803) list_single_2heading_msg_pane_t

0x6b6b,	// (0x000126de) title_pane_g4_ParamLimits

0x6b6b,	// (0x000126de) title_pane_g4

0x499f,	// (0x00010512) title_pane_stacon_g3_ParamLimits

0x499f,	// (0x00010512) title_pane_stacon_g3

0xcacf,	// (0x00018642) list_single_2graphic_im_pane_g4_ParamLimits

0xcacf,	// (0x00018642) list_single_2graphic_im_pane_g4

0xa335,	// (0x00015ea8) popup_side_volume_key_window_cp

0xac4a,	// (0x000167bd) main_idle_act2_pane_t1

0x55b6,	// (0x00011129) toolbar_button_pane_g10

0x7427,	// (0x00012f9a) popup_toolbar_window_cp1

0xb72e,	// (0x000172a1) clock_nsta_pane_cp_t1

0xb72e,	// (0x000172a1) clock_nsta_pane_cp_t2

0x0001,

0xfa8b,	// (0x0001b5fe) clock_nsta_pane_cp_t

0x4b90,	// (0x00010703) navi_navi_volume_pane_cp2_ParamLimits

0x4b9f,	// (0x00010712) popup_side_volume_key_window_g1_ParamLimits

0x4bab,	// (0x0001071e) popup_side_volume_key_window_g2_ParamLimits

0x4bba,	// (0x0001072d) popup_side_volume_key_window_g3_ParamLimits

0xf6e7,	// (0x0001b25a) popup_side_volume_key_window_g_ParamLimits

0x5a1e,	// (0x00011591) fep_hwr_aid_pane

0x5ac5,	// (0x00011638) bg_fep_hwr_top_pane_g4_ParamLimits

0xbd36,	// (0x000178a9) fep_hwr_top_pane_g1_ParamLimits

0xbd48,	// (0x000178bb) fep_hwr_top_pane_g2_ParamLimits

0x5ae5,	// (0x00011658) fep_hwr_top_pane_g3_ParamLimits

0xfae0,	// (0x0001b653) fep_hwr_top_pane_g_ParamLimits

0x5afa,	// (0x0001166d) fep_hwr_top_text_pane_ParamLimits

0xa0f8,	// (0x00015c6b) aid_touch_tab_arrow_arrow_2

0xa101,	// (0x00015c74) aid_touch_tab_arrow_left_2

0x5a32,	// (0x000115a5) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x5a69,	// (0x000115dc) fep_hwr_prediction_pane

0xbea8,	// (0x00017a1b) fep_vkb_prediction_pane

0xbfac,	// (0x00017b1f) fep_vkb_side_pane_g3_ParamLimits

0xbfac,	// (0x00017b1f) fep_vkb_side_pane_g3

0x5c75,	// (0x000117e8) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x5ce1,	// (0x00011854) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x5cee,	// (0x00011861) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb8f,	// (0x0001b702) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x5e1d,	// (0x00011990) fep_hwr_prediction_pane_g1

0x5e27,	// (0x0001199a) fep_hwr_prediction_pane_g2

0x5e2f,	// (0x000119a2) fep_hwr_prediction_pane_g3

0x5e37,	// (0x000119aa) fep_hwr_prediction_pane_g4

0x0003,

0xfc99,	// (0x0001b80c) fep_hwr_prediction_pane_g

0xd0e9,	// (0x00018c5c) fep_vkb_prediction_pane_g1

0xd0f3,	// (0x00018c66) fep_vkb_prediction_pane_g2

0xd0fb,	// (0x00018c6e) fep_vkb_prediction_pane_g3

0xd103,	// (0x00018c76) fep_vkb_prediction_pane_g4

0x0003,

0xfca2,	// (0x0001b815) fep_vkb_prediction_pane_g

0x589e,	// (0x00011411) slider_set_pane_g3

0x58b2,	// (0x00011425) slider_set_pane_g4

0x58ca,	// (0x0001143d) slider_set_pane_g5

0x589e,	// (0x00011411) slider_set_pane_g6

0x58e0,	// (0x00011453) slider_set_pane_g7

0xa7a7,	// (0x0001631a) slider_form_pane_g3

0xa7b0,	// (0x00016323) slider_form_pane_g4

0xa7b8,	// (0x0001632b) slider_form_pane_g5

0xa7a7,	// (0x0001631a) slider_form_pane_g6

0xa7c0,	// (0x00016333) slider_form_pane_g7

0xaf47,	// (0x00016aba) slider_set_pane_vc_g3

0xaf50,	// (0x00016ac3) slider_set_pane_vc_g4

0xaf59,	// (0x00016acc) slider_set_pane_vc_g5

0xaf47,	// (0x00016aba) slider_set_pane_vc_g6

0xaf62,	// (0x00016ad5) slider_set_pane_vc_g7

0xb3ec,	// (0x00016f5f) slider_form_pane_vc_g1

0xb3f5,	// (0x00016f68) slider_form_pane_vc_g2

0xb3fe,	// (0x00016f71) slider_form_pane_vc_g3

0xb3ec,	// (0x00016f5f) slider_form_pane_vc_g4

0xb407,	// (0x00016f7a) slider_form_pane_vc_g5

0x0004,

0xfa5d,	// (0x0001b5d0) slider_form_pane_vc_g

0x4666,	// (0x000101d9) main_idle_act3_pane

0xd10b,	// (0x00018c7e) ai3_links_pane

0xd114,	// (0x00018c87) popup_ai3_data_window_ParamLimits

0xd114,	// (0x00018c87) popup_ai3_data_window

0x3ac5,	// (0x0000f638) grid_ai3_links_pane

0xd12e,	// (0x00018ca1) cell_ai3_links_pane_ParamLimits

0xd12e,	// (0x00018ca1) cell_ai3_links_pane

0xd146,	// (0x00018cb9) bg_popup_sub_pane_cp11

0xd153,	// (0x00018cc6) cell_ai3_links_pane_g1

0x3ac5,	// (0x0000f638) bg_popup_sub_pane_cp12

0xd178,	// (0x00018ceb) heading_ai3_data_pane

0xd180,	// (0x00018cf3) list_ai3_gene_pane

0xd18c,	// (0x00018cff) popup_ai3_data_window_g1

0xd194,	// (0x00018d07) heading_ai3_data_pane_g1

0xd19c,	// (0x00018d0f) heading_ai3_data_pane_t1

0xd1aa,	// (0x00018d1d) list_double_ai3_gene_pane_ParamLimits

0xd1aa,	// (0x00018d1d) list_double_ai3_gene_pane

0xd1b7,	// (0x00018d2a) list_single_ai3_gene_pane_ParamLimits

0xd1b7,	// (0x00018d2a) list_single_ai3_gene_pane

0xbc9f,	// (0x00017812) list_highlight_pane_cp7_ParamLimits

0xbc9f,	// (0x00017812) list_highlight_pane_cp7

0xd1c4,	// (0x00018d37) list_single_a13_gene_pane_t1_ParamLimits

0xd1c4,	// (0x00018d37) list_single_a13_gene_pane_t1

0xd1db,	// (0x00018d4e) list_single_ai3_gene_pane_g1

0xd1e4,	// (0x00018d57) list_single_ai3_gene_pane_g2

0x0001,

0xfcab,	// (0x0001b81e) list_single_ai3_gene_pane_g

0xd1ec,	// (0x00018d5f) list_double_ai3_gene_pane_g1_ParamLimits

0xd1ec,	// (0x00018d5f) list_double_ai3_gene_pane_g1

0xd1f8,	// (0x00018d6b) list_double_ai3_gene_pane_t1_ParamLimits

0xd1f8,	// (0x00018d6b) list_double_ai3_gene_pane_t1

0xd214,	// (0x00018d87) list_double_ai3_gene_pane_t2_ParamLimits

0xd214,	// (0x00018d87) list_double_ai3_gene_pane_t2

0xd22a,	// (0x00018d9d) list_double_ai3_gene_pane_t3_ParamLimits

0xd22a,	// (0x00018d9d) list_double_ai3_gene_pane_t3

0x0002,

0xfcb0,	// (0x0001b823) list_double_ai3_gene_pane_t_ParamLimits

0xfcb0,	// (0x0001b823) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xcfe6,	// (0x00018b59) aid_size_min_col_2

0xcff0,	// (0x00018b63) aid_size_min_msg_ParamLimits

0xcff0,	// (0x00018b63) aid_size_min_msg

0xc0ac,	// (0x00017c1f) fep_vkb_top_text_pane_g2_ParamLimits

0xc0ac,	// (0x00017c1f) fep_vkb_top_text_pane_g2

0x0001,

0xfb10,	// (0x0001b683) fep_vkb_top_text_pane_g_ParamLimits

0xfb10,	// (0x0001b683) fep_vkb_top_text_pane_g

0x4666,	// (0x000101d9) main_hc_apps_shell_pane

0xd247,	// (0x00018dba) grid_hc_apps_pane_ParamLimits

0xd247,	// (0x00018dba) grid_hc_apps_pane

0xd259,	// (0x00018dcc) list_hc_apps_pane

0xd261,	// (0x00018dd4) scroll_pane_cp37_ParamLimits

0xd261,	// (0x00018dd4) scroll_pane_cp37

0xd26d,	// (0x00018de0) cell_hc_apps_pane_ParamLimits

0xd26d,	// (0x00018de0) cell_hc_apps_pane

0xd31b,	// (0x00018e8e) cell_hc_apps_pane_g1_ParamLimits

0xd31b,	// (0x00018e8e) cell_hc_apps_pane_g1

0xd34b,	// (0x00018ebe) cell_hc_apps_pane_g2_ParamLimits

0xd34b,	// (0x00018ebe) cell_hc_apps_pane_g2

0xd367,	// (0x00018eda) cell_hc_apps_pane_g3_ParamLimits

0xd367,	// (0x00018eda) cell_hc_apps_pane_g3

0x0002,

0xfcb7,	// (0x0001b82a) cell_hc_apps_pane_g_ParamLimits

0xfcb7,	// (0x0001b82a) cell_hc_apps_pane_g

0xd389,	// (0x00018efc) cell_hc_apps_pane_t1_ParamLimits

0xd389,	// (0x00018efc) cell_hc_apps_pane_t1

0x6eba,	// (0x00012a2d) grid_highlight_pane_cp10_ParamLimits

0x6eba,	// (0x00012a2d) grid_highlight_pane_cp10

0xd3c9,	// (0x00018f3c) list_single_hc_apps_pane_ParamLimits

0xd3c9,	// (0x00018f3c) list_single_hc_apps_pane

0xd425,	// (0x00018f98) list_single_hc_apps_pane_g1

0xd43e,	// (0x00018fb1) list_single_hc_apps_pane_g2

0x0001,

0xfcbe,	// (0x0001b831) list_single_hc_apps_pane_g

0xd457,	// (0x00018fca) list_single_hc_apps_pane_g2_copy1

0xd473,	// (0x00018fe6) list_single_hc_apps_pane_t1

0x6c17,	// (0x0001278a) bg_set_opt_pane_cp_ParamLimits

0x48c7,	// (0x0001043a) setting_slider_pane_t1_ParamLimits

0x48e0,	// (0x00010453) setting_slider_pane_t2_ParamLimits

0x48fa,	// (0x0001046d) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x0001b0ac) setting_slider_pane_t_ParamLimits

0x4912,	// (0x00010485) slider_set_pane_ParamLimits

0x4e39,	// (0x000109ac) control_pane_g5_ParamLimits

0x4e39,	// (0x000109ac) control_pane_g5

0xa5f6,	// (0x00016169) slider_set_pane_g1_ParamLimits

0x5892,	// (0x00011405) slider_set_pane_g2_ParamLimits

0x589e,	// (0x00011411) slider_set_pane_g3_ParamLimits

0x58b2,	// (0x00011425) slider_set_pane_g4_ParamLimits

0x58ca,	// (0x0001143d) slider_set_pane_g5_ParamLimits

0x589e,	// (0x00011411) slider_set_pane_g6_ParamLimits

0x58e0,	// (0x00011453) slider_set_pane_g7_ParamLimits

0xf935,	// (0x0001b4a8) slider_set_pane_g_ParamLimits

0x876b,	// (0x000142de) navi_icon_text_pane_ParamLimits

0x8c6e,	// (0x000147e1) aid_fill_nsta_2_ParamLimits

0x8cad,	// (0x00014820) aid_touch_tab_arrow_left_ParamLimits

0x8cbc,	// (0x0001482f) aid_touch_tab_arrow_right_ParamLimits

0x8d29,	// (0x0001489c) clock_nsta_pane_ParamLimits

0xa0da,	// (0x00015c4d) navi_icon_pane_g1_ParamLimits

0xa0e6,	// (0x00015c59) navi_text_pane_t1_ParamLimits

0xb83a,	// (0x000173ad) navi_icon_text_pane_g1_ParamLimits

0xb846,	// (0x000173b9) navi_icon_text_pane_t1_ParamLimits

0xd425,	// (0x00018f98) list_single_hc_apps_pane_g1_ParamLimits

0xd43e,	// (0x00018fb1) list_single_hc_apps_pane_g2_ParamLimits

0xfcbe,	// (0x0001b831) list_single_hc_apps_pane_g_ParamLimits

0xd457,	// (0x00018fca) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xd473,	// (0x00018fe6) list_single_hc_apps_pane_t1_ParamLimits

0x47d1,	// (0x00010344) popup_toolbar2_fixed_window_ParamLimits

0x47d1,	// (0x00010344) popup_toolbar2_fixed_window

0x544e,	// (0x00010fc1) popup_toolbar2_float_window

0x3ac5,	// (0x0000f638) bg_popup_sub_pane_cp27

0xd4a1,	// (0x00019014) grid_toolbar2_float_pane

0x3ac5,	// (0x0000f638) bg_popup_sub_pane_cp26

0xd4a1,	// (0x00019014) grid_toolbar2_fixed_pane

0xd4a9,	// (0x0001901c) cell_toolbar2_fixed_pane_ParamLimits

0xd4a9,	// (0x0001901c) cell_toolbar2_fixed_pane

0xd4b9,	// (0x0001902c) cell_toolbar2_fixed_pane_g1

0xd4c2,	// (0x00019035) toolbar2_fixed_button_pane

0x915c,	// (0x00014ccf) toolbar2_fixed_button_pane_g1

0x916c,	// (0x00014cdf) toolbar2_fixed_button_pane_g2

0x9164,	// (0x00014cd7) toolbar2_fixed_button_pane_g3

0x917c,	// (0x00014cef) toolbar2_fixed_button_pane_g4

0x9174,	// (0x00014ce7) toolbar2_fixed_button_pane_g5

0x9184,	// (0x00014cf7) toolbar2_fixed_button_pane_g6

0x918c,	// (0x00014cff) toolbar2_fixed_button_pane_g7

0x919c,	// (0x00014d0f) toolbar2_fixed_button_pane_g8

0x9194,	// (0x00014d07) toolbar2_fixed_button_pane_g9

0x0008,

0xf837,	// (0x0001b3aa) toolbar2_fixed_button_pane_g

0xd4ca,	// (0x0001903d) cell_toolbar2_float_pane_ParamLimits

0xd4ca,	// (0x0001903d) cell_toolbar2_float_pane

0xd4db,	// (0x0001904e) cell_toolbar2_float_pane_g1

0xd4c2,	// (0x00019035) toolbar2_fixed_button_pane_cp

0xbe08,	// (0x0001797b) fep_vkb_accented_list_pane_ParamLimits

0xbe08,	// (0x0001797b) fep_vkb_accented_list_pane

0x5c55,	// (0x000117c8) bg_popup_fep_shadow_pane_g9

0x88e8,	// (0x0001445b) bg_popup_fep_shadow_pane_cp3

0x7cff,	// (0x00013872) list_accented_list_pane

0xd4e4,	// (0x00019057) list_single_accented_list_pane_ParamLimits

0xd4e4,	// (0x00019057) list_single_accented_list_pane

0x88e8,	// (0x0001445b) list_highlight_pane_cp10

0xd4f5,	// (0x00019068) list_single_accented_list_pane_t1

0x539e,	// (0x00010f11) popup_slider_window_ParamLimits

0x539e,	// (0x00010f11) popup_slider_window

0xcfdd,	// (0x00018b50) aid_indentation_list_msg

0xd5b9,	// (0x0001912c) bg_popup_window_pane_cp19

0xd621,	// (0x00019194) popup_slider_window_g1

0xd63d,	// (0x000191b0) popup_slider_window_g2

0xd659,	// (0x000191cc) popup_slider_window_g3

0x0005,

0xfcc3,	// (0x0001b836) popup_slider_window_g

0xd6bf,	// (0x00019232) popup_slider_window_t1

0xd733,	// (0x000192a6) small_volume_slider_vertical_pane

0xbcda,	// (0x0001784d) small_volume_slider_vertical_pane_g1

0xbcda,	// (0x0001784d) small_volume_slider_vertical_pane_g2

0xd74f,	// (0x000192c2) small_volume_slider_vertical_pane_g3

0x0002,

0xfcd5,	// (0x0001b848) small_volume_slider_vertical_pane_g

0x4589,	// (0x000100fc) area_side_right_pane_ParamLimits

0x4589,	// (0x000100fc) area_side_right_pane

0x5e3f,	// (0x000119b2) aid_size_side_button_ParamLimits

0x5e3f,	// (0x000119b2) aid_size_side_button

0x5e53,	// (0x000119c6) grid_sctrl_middle_pane_ParamLimits

0x5e53,	// (0x000119c6) grid_sctrl_middle_pane

0x5e72,	// (0x000119e5) sctrl_sk_bottom_pane

0x5e83,	// (0x000119f6) sctrl_sk_top_pane

0x5e95,	// (0x00011a08) aid_touch_sctrl_top

0x5ea2,	// (0x00011a15) bg_sctrl_sk_pane_ParamLimits

0x5ea2,	// (0x00011a15) bg_sctrl_sk_pane

0x5eb0,	// (0x00011a23) sctrl_sk_top_pane_g1

0x5ebd,	// (0x00011a30) sctrl_sk_top_pane_t1

0x5e95,	// (0x00011a08) aid_touch_sctrl_bottom

0x5ea2,	// (0x00011a15) bg_sctrl_sk_pane_cp_ParamLimits

0x5ea2,	// (0x00011a15) bg_sctrl_sk_pane_cp

0x5ed8,	// (0x00011a4b) sctrl_sk_bottom_pane_g1

0x5ebd,	// (0x00011a30) sctrl_sk_bottom_pane_t1

0x5ee1,	// (0x00011a54) cell_sctrl_middle_pane_ParamLimits

0x5ee1,	// (0x00011a54) cell_sctrl_middle_pane

0x5efc,	// (0x00011a6f) aid_touch_sctrl_middle_ParamLimits

0x5efc,	// (0x00011a6f) aid_touch_sctrl_middle

0x5f0e,	// (0x00011a81) bg_sctrl_middle_pane_ParamLimits

0x5f0e,	// (0x00011a81) bg_sctrl_middle_pane

0x5c75,	// (0x000117e8) cell_sctrl_middle_pane_g1_ParamLimits

0x5c75,	// (0x000117e8) cell_sctrl_middle_pane_g1

0x5f1c,	// (0x00011a8f) cell_sctrl_middle_pane_g2_ParamLimits

0x5f1c,	// (0x00011a8f) cell_sctrl_middle_pane_g2

0x0001,

0xfce1,	// (0x0001b854) cell_sctrl_middle_pane_g_ParamLimits

0xfce1,	// (0x0001b854) cell_sctrl_middle_pane_g

0x915c,	// (0x00014ccf) bg_sctrl_middle_pane_g1

0x9164,	// (0x00014cd7) bg_sctrl_middle_pane_g2

0x916c,	// (0x00014cdf) bg_sctrl_middle_pane_g3

0x9174,	// (0x00014ce7) bg_sctrl_middle_pane_g4

0x917c,	// (0x00014cef) bg_sctrl_middle_pane_g5

0x9184,	// (0x00014cf7) bg_sctrl_middle_pane_g6

0x918c,	// (0x00014cff) bg_sctrl_middle_pane_g7

0x9194,	// (0x00014d07) bg_sctrl_middle_pane_g8

0x0007,

0xfce6,	// (0x0001b859) bg_sctrl_middle_pane_g

0x919c,	// (0x00014d0f) bg_sctrl_middle_pane_g8_copy1

0x915c,	// (0x00014ccf) bg_sctrl_sk_pane_g1

0x916c,	// (0x00014cdf) bg_sctrl_sk_pane_g2

0x9164,	// (0x00014cd7) bg_sctrl_sk_pane_g3

0x0008,

0xf837,	// (0x0001b3aa) bg_sctrl_sk_pane_g

0x73ed,	// (0x00012f60) aid_size_touch_scroll_bar

0x917c,	// (0x00014cef) bg_sctrl_sk_pane_g4

0x9174,	// (0x00014ce7) bg_sctrl_sk_pane_g5

0x9184,	// (0x00014cf7) bg_sctrl_sk_pane_g6

0x918c,	// (0x00014cff) bg_sctrl_sk_pane_g7

0x919c,	// (0x00014d0f) bg_sctrl_sk_pane_g8

0x9194,	// (0x00014d07) bg_sctrl_sk_pane_g9

0x5005,	// (0x00010b78) popup_fep_china_hwr2_fs_candidate_window

0x500f,	// (0x00010b82) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x500f,	// (0x00010b82) popup_fep_china_hwr2_fs_control_window

0x5c75,	// (0x000117e8) sctrl_sk_top_pane_g2

0x0001,

0xfcdc,	// (0x0001b84f) sctrl_sk_top_pane_g

0xd758,	// (0x000192cb) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd758,	// (0x000192cb) aid_fep_china_hwr2_fs_cell

0xd76a,	// (0x000192dd) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd76a,	// (0x000192dd) bg_popup_fep_shadow_pane_cp4

0xd781,	// (0x000192f4) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd781,	// (0x000192f4) bg_popup_fep_shadow_pane_cp5

0xd793,	// (0x00019306) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd793,	// (0x00019306) popup_fep_china_hwr2_fs_control_bar_grid

0xd7a3,	// (0x00019316) popup_fep_china_hwr2_fs_control_funtion_grid

0xd7ab,	// (0x0001931e) aid_fep_china_hwr2_fs_candi_cell

0x3ac5,	// (0x0000f638) bg_popup_fep_shadow_pane_cp6

0xd7b5,	// (0x00019328) popup_fep_china_hwr2_fs_candidate_grid

0xd7bf,	// (0x00019332) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd7bf,	// (0x00019332) cell_fep_china_hwr2_fs_funtion_grid

0xbcda,	// (0x0001784d) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd7d7,	// (0x0001934a) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd7d7,	// (0x0001934a) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd7e5,	// (0x00019358) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd7e5,	// (0x00019358) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfcf7,	// (0x0001b86a) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfcf7,	// (0x0001b86a) cell_fep_china_hwr2_fs_funtion_grid_g

0xd7fb,	// (0x0001936e) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd7fb,	// (0x0001936e) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd810,	// (0x00019383) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd810,	// (0x00019383) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfcfc,	// (0x0001b86f) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfcfc,	// (0x0001b86f) cell_fep_china_hwr2_fs_funtion_grid_t

0xd82c,	// (0x0001939f) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd834,	// (0x000193a7) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd83c,	// (0x000193af) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd01,	// (0x0001b874) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd844,	// (0x000193b7) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd844,	// (0x000193b7) cell_fep_china_hwr2_fs_candidate_grid

0xd85d,	// (0x000193d0) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd865,	// (0x000193d8) popup_fep_china_hwr2_fs_candidate_grid_g21

0xbcda,	// (0x0001784d) cell_fep_china_hwr2_fs_candidate_grid_g1

0xbcda,	// (0x0001784d) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb15,	// (0x0001b688) cell_fep_china_hwr2_fs_candidate_grid_g

0xd86d,	// (0x000193e0) cell_fep_china_hwr2_fs_candidate_grid_t1

0x8d3c,	// (0x000148af) clock_nsta_pane_cp_24_ParamLimits

0x8d3c,	// (0x000148af) clock_nsta_pane_cp_24

0x8dba,	// (0x0001492d) indicator_nsta_pane_cp_24_ParamLimits

0x8dba,	// (0x0001492d) indicator_nsta_pane_cp_24

0x9f56,	// (0x00015ac9) heading_pane_g1

0x0001,

0xf89c,	// (0x0001b40f) heading_pane_g

0xaa93,	// (0x00016606) grid_sct_catagory_button_pane

0xaac3,	// (0x00016636) scroll_pane_cp5_ParamLimits

0xb888,	// (0x000173fb) button_value_adjust_pane_cp5_ParamLimits

0xb888,	// (0x000173fb) button_value_adjust_pane_cp5

0xb984,	// (0x000174f7) form2_midp_time_pane_ParamLimits

0xd87b,	// (0x000193ee) cell_sct_catagory_button_pane_ParamLimits

0xd87b,	// (0x000193ee) cell_sct_catagory_button_pane

0xbc9f,	// (0x00017812) bg_button_pane_cp01_ParamLimits

0xbc9f,	// (0x00017812) bg_button_pane_cp01

0xbcda,	// (0x0001784d) cell_sct_catagory_button_pane_g1

0x53dd,	// (0x00010f50) popup_tb_extension_window

0xd88d,	// (0x00019400) aid_size_cell_ext_ParamLimits

0xd88d,	// (0x00019400) aid_size_cell_ext

0x6eba,	// (0x00012a2d) bg_tb_trans_pane_cp1_ParamLimits

0x6eba,	// (0x00012a2d) bg_tb_trans_pane_cp1

0xd8ad,	// (0x00019420) grid_tb_ext_pane_ParamLimits

0xd8ad,	// (0x00019420) grid_tb_ext_pane

0xd8db,	// (0x0001944e) cell_tb_ext_pane_ParamLimits

0xd8db,	// (0x0001944e) cell_tb_ext_pane

0xd8f2,	// (0x00019465) cell_tb_ext_pane_g1_ParamLimits

0xd8f2,	// (0x00019465) cell_tb_ext_pane_g1

0xd90f,	// (0x00019482) cell_tb_ext_pane_t1

0x6eba,	// (0x00012a2d) list_highlight_pane_cp11_ParamLimits

0x6eba,	// (0x00012a2d) list_highlight_pane_cp11

0x47f0,	// (0x00010363) popup_uni_indicator_window_ParamLimits

0x47f0,	// (0x00010363) popup_uni_indicator_window

0x7a15,	// (0x00013588) bg_popup_sub_pane_cp14

0xd92a,	// (0x0001949d) list_uniindi_pane

0xd936,	// (0x000194a9) uniindi_top_pane

0x6eba,	// (0x00012a2d) bg_uniindi_top_pane

0xd955,	// (0x000194c8) uniindi_top_pane_g1

0xd96b,	// (0x000194de) uniindi_top_pane_g2

0x0003,

0xfd08,	// (0x0001b87b) uniindi_top_pane_g

0xd995,	// (0x00019508) uniindi_top_pane_t1

0xd9bf,	// (0x00019532) list_single_uniindi_pane_ParamLimits

0xd9bf,	// (0x00019532) list_single_uniindi_pane

0xbcda,	// (0x0001784d) bg_uniindi_top_pane_g1

0xd9d2,	// (0x00019545) list_single_uniindi_pane_g1

0xd9e5,	// (0x00019558) list_single_uniindi_pane_t1

0x4666,	// (0x000101d9) control_bg_pane

0xda0a,	// (0x0001957d) bg_sctrl_sk_pane_cp1

0xda13,	// (0x00019586) bg_sctrl_sk_pane_cp2

0xda1c,	// (0x0001958f) control_bg_pane_g1

0xda25,	// (0x00019598) control_bg_pane_g2

0x0001,

0xfd11,	// (0x0001b884) control_bg_pane_g

0xb6d2,	// (0x00017245) cell_indicator_nsta_pane_g1_ParamLimits

0xb6e0,	// (0x00017253) cell_indicator_nsta_pane_g2_ParamLimits

0xfa79,	// (0x0001b5ec) cell_indicator_nsta_pane_g_ParamLimits

0xba0c,	// (0x0001757f) form2_midp_time_pane_t1_ParamLimits

0x4f6d,	// (0x00010ae0) main_idle_act4_pane_ParamLimits

0x4f6d,	// (0x00010ae0) main_idle_act4_pane

0x53dd,	// (0x00010f50) popup_tb_extension_window_ParamLimits

0xd8cb,	// (0x0001943e) tb_ext_find_pane_ParamLimits

0xd8cb,	// (0x0001943e) tb_ext_find_pane

0xda2e,	// (0x000195a1) ai_gene_pane_1_cp1

0x8a2f,	// (0x000145a2) ai_gene_pane_2_cp1

0xda36,	// (0x000195a9) list_single_idle_plugin_calendar_pane

0xda3f,	// (0x000195b2) list_single_idle_plugin_notification_pane

0xda48,	// (0x000195bb) list_single_idle_plugin_player_pane

0xda51,	// (0x000195c4) list_single_idle_plugin_shortcut_pane_ParamLimits

0xda51,	// (0x000195c4) list_single_idle_plugin_shortcut_pane

0xda73,	// (0x000195e6) main_idle_act4_pane_t1

0xda85,	// (0x000195f8) main_idle_act4_pane_t2

0x0001,

0xfd16,	// (0x0001b889) main_idle_act4_pane_t

0xda97,	// (0x0001960a) middle_sk_idle_act4_pane_ParamLimits

0xda97,	// (0x0001960a) middle_sk_idle_act4_pane

0xdaad,	// (0x00019620) popup_clock_digital_analogue_window_cp2

0xdac7,	// (0x0001963a) shortcut_wheel_idle_act4_pane_ParamLimits

0xdac7,	// (0x0001963a) shortcut_wheel_idle_act4_pane

0xbcda,	// (0x0001784d) shortcut_wheel_idle_act4_pane_g1

0xbcda,	// (0x0001784d) shortcut_wheel_idle_act4_pane_g2

0xbcda,	// (0x0001784d) shortcut_wheel_idle_act4_pane_g3

0xbcda,	// (0x0001784d) shortcut_wheel_idle_act4_pane_g4

0xbcda,	// (0x0001784d) shortcut_wheel_idle_act4_pane_g5

0xdadb,	// (0x0001964e) shortcut_wheel_idle_act4_pane_g6

0xdae3,	// (0x00019656) shortcut_wheel_idle_act4_pane_g7

0xdaeb,	// (0x0001965e) shortcut_wheel_idle_act4_pane_g8

0xdaf3,	// (0x00019666) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd1b,	// (0x0001b88e) shortcut_wheel_idle_act4_pane_g

0xbf58,	// (0x00017acb) middle_sk_idle_act4_pane_g1_ParamLimits

0xbf58,	// (0x00017acb) middle_sk_idle_act4_pane_g1

0xdb78,	// (0x000196eb) middle_sk_idle_act4_pane_g2_ParamLimits

0xdb78,	// (0x000196eb) middle_sk_idle_act4_pane_g2

0x0001,

0xfd3e,	// (0x0001b8b1) middle_sk_idle_act4_pane_g_ParamLimits

0xfd3e,	// (0x0001b8b1) middle_sk_idle_act4_pane_g

0xdb84,	// (0x000196f7) middle_sk_idle_act4_pane_t1_ParamLimits

0xdb84,	// (0x000196f7) middle_sk_idle_act4_pane_t1

0xdba1,	// (0x00019714) grid_ai_shortcut_pane_ParamLimits

0xdba1,	// (0x00019714) grid_ai_shortcut_pane

0xdbba,	// (0x0001972d) list_highlight_pane_cp16_ParamLimits

0xdbba,	// (0x0001972d) list_highlight_pane_cp16

0xdbc7,	// (0x0001973a) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdbc7,	// (0x0001973a) list_single_idle_plugin_shortcut_pane_g1

0xdbd3,	// (0x00019746) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdbd3,	// (0x00019746) list_single_idle_plugin_shortcut_pane_g2

0xdbeb,	// (0x0001975e) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdbeb,	// (0x0001975e) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd43,	// (0x0001b8b6) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd43,	// (0x0001b8b6) list_single_idle_plugin_shortcut_pane_g

0xdbfe,	// (0x00019771) cell_ai_shortcut_pane_ParamLimits

0xdbfe,	// (0x00019771) cell_ai_shortcut_pane

0xdc22,	// (0x00019795) cell_ai_shortcut_pane_g1_ParamLimits

0xdc22,	// (0x00019795) cell_ai_shortcut_pane_g1

0xda2e,	// (0x000195a1) ai_gene_pane_1_cp2

0xdc44,	// (0x000197b7) ai_gene_pane_2_cp2

0xdc4c,	// (0x000197bf) list_highlight_pane_cp15

0xdc55,	// (0x000197c8) list_single_idle_plugin_calendar_pane_g1

0xdc4c,	// (0x000197bf) list_highlight_pane_cp17

0xdc5d,	// (0x000197d0) list_single_idle_plugin_calendar_pane_g1_copy1

0xdc65,	// (0x000197d8) list_single_idle_plugin_player_pane_g1

0xacec,	// (0x0001685f) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd4a,	// (0x0001b8bd) list_single_idle_plugin_player_pane_g

0xdc6d,	// (0x000197e0) list_single_idle_plugin_player_pane_t1

0xdc7b,	// (0x000197ee) list_single_idle_plugin_player_pane_t2

0xdc89,	// (0x000197fc) list_single_idle_plugin_player_pane_t3

0xdc97,	// (0x0001980a) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd4f,	// (0x0001b8c2) list_single_idle_plugin_player_pane_t

0xdca5,	// (0x00019818) wait_bar_pane_cp15

0xdcad,	// (0x00019820) grid_ai_notification_pane

0xacec,	// (0x0001685f) list_single_idle_plugin_notification_pane_g1

0xdcb6,	// (0x00019829) cell_ai_notification_pane_ParamLimits

0xdcb6,	// (0x00019829) cell_ai_notification_pane

0xdcc3,	// (0x00019836) cell_ai_notification_pane_g1

0xdccb,	// (0x0001983e) cell_ai_notification_pane_t1

0xdcd9,	// (0x0001984c) tb_ext_find_button_pane

0xdce1,	// (0x00019854) tb_ext_find_pane_g1

0xdce9,	// (0x0001985c) tb_ext_find_pane_t1

0x822d,	// (0x00013da0) tb_ext_find_button_pane_g1

0xdcf7,	// (0x0001986a) tb_ext_find_button_pane_g2

0x0001,

0xfd58,	// (0x0001b8cb) tb_ext_find_button_pane_g

0xda73,	// (0x000195e6) main_idle_act4_pane_t1_ParamLimits

0xda85,	// (0x000195f8) main_idle_act4_pane_t2_ParamLimits

0xfd16,	// (0x0001b889) main_idle_act4_pane_t_ParamLimits

0xdaad,	// (0x00019620) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdabb,	// (0x0001962e) sat_plugin_idle_act4_pane_ParamLimits

0xdabb,	// (0x0001962e) sat_plugin_idle_act4_pane

0xdd00,	// (0x00019873) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdd00,	// (0x00019873) sat_plugin_idle_act4_pane_t1

0xdd13,	// (0x00019886) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdd13,	// (0x00019886) sat_plugin_idle_act4_pane_t2

0xdd26,	// (0x00019899) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdd26,	// (0x00019899) sat_plugin_idle_act4_pane_t3

0xdd39,	// (0x000198ac) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdd39,	// (0x000198ac) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd5d,	// (0x0001b8d0) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd5d,	// (0x0001b8d0) sat_plugin_idle_act4_pane_t

0x472b,	// (0x0001029e) popup_battery_window_ParamLimits

0x472b,	// (0x0001029e) popup_battery_window

0x6eba,	// (0x00012a2d) bg_popup_sub_pane_cp25_ParamLimits

0x6eba,	// (0x00012a2d) bg_popup_sub_pane_cp25

0xdd4c,	// (0x000198bf) popup_battery_window_g1_ParamLimits

0xdd4c,	// (0x000198bf) popup_battery_window_g1

0xdd58,	// (0x000198cb) popup_battery_window_t1_ParamLimits

0xdd58,	// (0x000198cb) popup_battery_window_t1

0xdd6a,	// (0x000198dd) popup_battery_window_t2_ParamLimits

0xdd6a,	// (0x000198dd) popup_battery_window_t2

0x0001,

0xfd66,	// (0x0001b8d9) popup_battery_window_t_ParamLimits

0xfd66,	// (0x0001b8d9) popup_battery_window_t

0x88fc,	// (0x0001446f) midp_canvas_pane_ParamLimits

0x8973,	// (0x000144e6) midp_keypad_pane_ParamLimits

0x8973,	// (0x000144e6) midp_keypad_pane

0x8c14,	// (0x00014787) main_midp_pane_ParamLimits

0xb74c,	// (0x000172bf) signal_pane_g2_cp_ParamLimits

0xdd87,	// (0x000198fa) aid_size_cell_midp_keypad_ParamLimits

0xdd87,	// (0x000198fa) aid_size_cell_midp_keypad

0xdda1,	// (0x00019914) midp_keyp_game_grid_pane_ParamLimits

0xdda1,	// (0x00019914) midp_keyp_game_grid_pane

0xddc1,	// (0x00019934) midp_keyp_rocker_pane_ParamLimits

0xddc1,	// (0x00019934) midp_keyp_rocker_pane

0xddfa,	// (0x0001996d) midp_keyp_sk_left_pane_ParamLimits

0xddfa,	// (0x0001996d) midp_keyp_sk_left_pane

0xde54,	// (0x000199c7) midp_keyp_sk_right_pane_ParamLimits

0xde54,	// (0x000199c7) midp_keyp_sk_right_pane

0x3ac5,	// (0x0000f638) bg_button_pane_cp03

0xdeae,	// (0x00019a21) midp_keyp_sk_left_pane_g1

0x3ac5,	// (0x0000f638) bg_button_pane_cp04

0xdeae,	// (0x00019a21) midp_keyp_sk_right_pane_g1

0xbcda,	// (0x0001784d) midp_keyp_rocker_pane_g1

0xdeb7,	// (0x00019a2a) keyp_game_cell_pane_ParamLimits

0xdeb7,	// (0x00019a2a) keyp_game_cell_pane

0x3ac5,	// (0x0000f638) bg_button_pane_cp02

0xdeca,	// (0x00019a3d) keyp_game_cell_pane_g1

0x476f,	// (0x000102e2) popup_fep_vkb2_window_ParamLimits

0x476f,	// (0x000102e2) popup_fep_vkb2_window

0x5f3a,	// (0x00011aad) aid_size_cell_vkb2_ParamLimits

0x5f3a,	// (0x00011aad) aid_size_cell_vkb2

0x5f86,	// (0x00011af9) popup_fep_vkb2_window_g1_ParamLimits

0x5f86,	// (0x00011af9) popup_fep_vkb2_window_g1

0x5fce,	// (0x00011b41) vkb2_area_bottom_pane_ParamLimits

0x5fce,	// (0x00011b41) vkb2_area_bottom_pane

0x601a,	// (0x00011b8d) vkb2_area_keypad_pane_ParamLimits

0x601a,	// (0x00011b8d) vkb2_area_keypad_pane

0x605c,	// (0x00011bcf) vkb2_area_top_pane_ParamLimits

0x605c,	// (0x00011bcf) vkb2_area_top_pane

0x60db,	// (0x00011c4e) vkb2_top_entry_pane_ParamLimits

0x60db,	// (0x00011c4e) vkb2_top_entry_pane

0x6105,	// (0x00011c78) vkb2_top_grid_left_pane_ParamLimits

0x6105,	// (0x00011c78) vkb2_top_grid_left_pane

0x6124,	// (0x00011c97) vkb2_top_grid_right_pane_ParamLimits

0x6124,	// (0x00011c97) vkb2_top_grid_right_pane

0x6143,	// (0x00011cb6) vkb2_cell_keypad_pane_ParamLimits

0x6143,	// (0x00011cb6) vkb2_cell_keypad_pane

0x6214,	// (0x00011d87) vkb2_area_bottom_grid_pane_ParamLimits

0x6214,	// (0x00011d87) vkb2_area_bottom_grid_pane

0x623a,	// (0x00011dad) vkb2_area_bottom_pane_g1_ParamLimits

0x623a,	// (0x00011dad) vkb2_area_bottom_pane_g1

0x625e,	// (0x00011dd1) vkb2_area_bottom_pane_g2_ParamLimits

0x625e,	// (0x00011dd1) vkb2_area_bottom_pane_g2

0x628c,	// (0x00011dff) vkb2_area_bottom_pane_g3_ParamLimits

0x628c,	// (0x00011dff) vkb2_area_bottom_pane_g3

0x0002,

0xfd6b,	// (0x0001b8de) vkb2_area_bottom_pane_g_ParamLimits

0xfd6b,	// (0x0001b8de) vkb2_area_bottom_pane_g

0x62ed,	// (0x00011e60) vkb2_top_cell_left_pane_ParamLimits

0x62ed,	// (0x00011e60) vkb2_top_cell_left_pane

0xdedb,	// (0x00019a4e) vkb2_top_entry_pane_g1_ParamLimits

0xdedb,	// (0x00019a4e) vkb2_top_entry_pane_g1

0xdee9,	// (0x00019a5c) vkb2_top_entry_pane_t1_ParamLimits

0xdee9,	// (0x00019a5c) vkb2_top_entry_pane_t1

0xdf1b,	// (0x00019a8e) vkb2_top_entry_pane_t2_ParamLimits

0xdf1b,	// (0x00019a8e) vkb2_top_entry_pane_t2

0xdf4d,	// (0x00019ac0) vkb2_top_entry_pane_t3_ParamLimits

0xdf4d,	// (0x00019ac0) vkb2_top_entry_pane_t3

0x0002,

0xfd72,	// (0x0001b8e5) vkb2_top_entry_pane_t_ParamLimits

0xfd72,	// (0x0001b8e5) vkb2_top_entry_pane_t

0x633a,	// (0x00011ead) vkb2_top_grid_right_pane_g1_ParamLimits

0x633a,	// (0x00011ead) vkb2_top_grid_right_pane_g1

0x6350,	// (0x00011ec3) vkb2_top_grid_right_pane_g2_ParamLimits

0x6350,	// (0x00011ec3) vkb2_top_grid_right_pane_g2

0x6368,	// (0x00011edb) vkb2_top_grid_right_pane_g3_ParamLimits

0x6368,	// (0x00011edb) vkb2_top_grid_right_pane_g3

0x6380,	// (0x00011ef3) vkb2_top_grid_right_pane_g4_ParamLimits

0x6380,	// (0x00011ef3) vkb2_top_grid_right_pane_g4

0x0003,

0xfd79,	// (0x0001b8ec) vkb2_top_grid_right_pane_g_ParamLimits

0xfd79,	// (0x0001b8ec) vkb2_top_grid_right_pane_g

0x6396,	// (0x00011f09) vkb2_top_cell_left_pane_g1

0x63ad,	// (0x00011f20) vkb2_cell_keypad_pane_g1_ParamLimits

0x63ad,	// (0x00011f20) vkb2_cell_keypad_pane_g1

0xdf71,	// (0x00019ae4) vkb2_cell_keypad_pane_t1_ParamLimits

0xdf71,	// (0x00019ae4) vkb2_cell_keypad_pane_t1

0x63bb,	// (0x00011f2e) vkb2_cell_bottom_grid_pane_ParamLimits

0x63bb,	// (0x00011f2e) vkb2_cell_bottom_grid_pane

0x63f4,	// (0x00011f67) vkb2_cell_bottom_grid_pane_g1

0xdafb,	// (0x0001966e) aid_call2_pane_cp02

0xdb03,	// (0x00019676) aid_call_pane_cp02

0xdb0b,	// (0x0001967e) clock_digital_number_pane_cp10

0xdb13,	// (0x00019686) clock_digital_number_pane_cp11

0xdb1b,	// (0x0001968e) clock_digital_number_pane_cp12

0xdb23,	// (0x00019696) clock_digital_number_pane_cp13

0xdb2b,	// (0x0001969e) clock_digital_separator_pane_cp10

0x822d,	// (0x00013da0) popup_clock_digital_analogue_window_cp2_g1

0x822d,	// (0x00013da0) popup_clock_digital_analogue_window_cp2_g2

0xdb33,	// (0x000196a6) popup_clock_digital_analogue_window_cp2_g3

0x822d,	// (0x00013da0) popup_clock_digital_analogue_window_cp2_g4

0xdb33,	// (0x000196a6) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd2e,	// (0x0001b8a1) popup_clock_digital_analogue_window_cp2_g

0xdb3b,	// (0x000196ae) popup_clock_digital_analogue_window_cp2_t1

0xdb6a,	// (0x000196dd) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd39,	// (0x0001b8ac) popup_clock_digital_analogue_window_cp2_t

0xbcda,	// (0x0001784d) clock_digital_number_pane_cp10_g1

0xbcda,	// (0x0001784d) clock_digital_number_pane_cp10_g2

0x0001,

0xfb15,	// (0x0001b688) clock_digital_number_pane_cp10_g

0xbcda,	// (0x0001784d) clock_digital_separator_pane_cp10_g1

0xbcda,	// (0x0001784d) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb15,	// (0x0001b688) clock_digital_separator_pane_cp10_g

0xd977,	// (0x000194ea) uniindi_top_pane_g3

0xd988,	// (0x000194fb) uniindi_top_pane_g4

0x61ce,	// (0x00011d41) vkb2_row_keypad_pane_ParamLimits

0x61ce,	// (0x00011d41) vkb2_row_keypad_pane

0x6414,	// (0x00011f87) vkb2_cell_t_keypad_pane_ParamLimits

0x6414,	// (0x00011f87) vkb2_cell_t_keypad_pane

0x6424,	// (0x00011f97) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x6424,	// (0x00011f97) vkb2_cell_t_keypad_pane_cp08

0x6437,	// (0x00011faa) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x6437,	// (0x00011faa) vkb2_cell_t_keypad_pane_cp09

0x644b,	// (0x00011fbe) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x644b,	// (0x00011fbe) vkb2_cell_t_keypad_pane_cp01

0x645c,	// (0x00011fcf) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x645c,	// (0x00011fcf) vkb2_cell_t_keypad_pane_cp02

0x646d,	// (0x00011fe0) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x646d,	// (0x00011fe0) vkb2_cell_t_keypad_pane_cp03

0x647e,	// (0x00011ff1) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x647e,	// (0x00011ff1) vkb2_cell_t_keypad_pane_cp04

0x648f,	// (0x00012002) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x648f,	// (0x00012002) vkb2_cell_t_keypad_pane_cp05

0x64a0,	// (0x00012013) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x64a0,	// (0x00012013) vkb2_cell_t_keypad_pane_cp06

0x64b1,	// (0x00012024) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x64b1,	// (0x00012024) vkb2_cell_t_keypad_pane_cp07

0x64c2,	// (0x00012035) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x64c2,	// (0x00012035) vkb2_cell_t_keypad_pane_cp10

0x5c75,	// (0x000117e8) vkb2_cell_t_keypad_pane_g1

0xdf88,	// (0x00019afb) vkb2_cell_t_keypad_pane_t1

0x4666,	// (0x000101d9) popup_grid_graphic2_window

0xdf9a,	// (0x00019b0d) aid_size_cell_graphic2_ParamLimits

0xdf9a,	// (0x00019b0d) aid_size_cell_graphic2

0xdfd2,	// (0x00019b45) bg_popup_window_pane_cp21_ParamLimits

0xdfd2,	// (0x00019b45) bg_popup_window_pane_cp21

0xdfe0,	// (0x00019b53) graphic2_pages_pane_ParamLimits

0xdfe0,	// (0x00019b53) graphic2_pages_pane

0xe026,	// (0x00019b99) grid_graphic2_control_pane_ParamLimits

0xe026,	// (0x00019b99) grid_graphic2_control_pane

0xe064,	// (0x00019bd7) grid_graphic2_pane_ParamLimits

0xe064,	// (0x00019bd7) grid_graphic2_pane

0xe0d8,	// (0x00019c4b) cell_graphic2_pane

0x4666,	// (0x000101d9) main_comp_mode_pane

0xd180,	// (0x00018cf3) list_ai3_gene_pane_ParamLimits

0xd5b9,	// (0x0001912c) bg_popup_window_pane_cp19_ParamLimits

0xd5c5,	// (0x00019138) bg_touch_area_indi_pane_ParamLimits

0xd5c5,	// (0x00019138) bg_touch_area_indi_pane

0xd5db,	// (0x0001914e) bg_touch_area_indi_pane_cp01_ParamLimits

0xd5db,	// (0x0001914e) bg_touch_area_indi_pane_cp01

0xd5f1,	// (0x00019164) bg_touch_area_indi_pane_cp02_ParamLimits

0xd5f1,	// (0x00019164) bg_touch_area_indi_pane_cp02

0xd607,	// (0x0001917a) bg_touch_area_indi_pane_cp03_ParamLimits

0xd607,	// (0x0001917a) bg_touch_area_indi_pane_cp03

0xd621,	// (0x00019194) popup_slider_window_g1_ParamLimits

0xd63d,	// (0x000191b0) popup_slider_window_g2_ParamLimits

0xd659,	// (0x000191cc) popup_slider_window_g3_ParamLimits

0xfcc3,	// (0x0001b836) popup_slider_window_g_ParamLimits

0xd6bf,	// (0x00019232) popup_slider_window_t1_ParamLimits

0xd733,	// (0x000192a6) small_volume_slider_vertical_pane_ParamLimits

0xe0d8,	// (0x00019c4b) cell_graphic2_pane_ParamLimits

0xe127,	// (0x00019c9a) bg_button_pane_cp10_ParamLimits

0xe127,	// (0x00019c9a) bg_button_pane_cp10

0xe13a,	// (0x00019cad) bg_button_pane_cp11_ParamLimits

0xe13a,	// (0x00019cad) bg_button_pane_cp11

0xe14d,	// (0x00019cc0) graphic2_pages_pane_g1_ParamLimits

0xe14d,	// (0x00019cc0) graphic2_pages_pane_g1

0xe168,	// (0x00019cdb) graphic2_pages_pane_g2_ParamLimits

0xe168,	// (0x00019cdb) graphic2_pages_pane_g2

0x0001,

0xfd87,	// (0x0001b8fa) graphic2_pages_pane_g_ParamLimits

0xfd87,	// (0x0001b8fa) graphic2_pages_pane_g

0xe180,	// (0x00019cf3) graphic2_pages_pane_t1_ParamLimits

0xe180,	// (0x00019cf3) graphic2_pages_pane_t1

0xe198,	// (0x00019d0b) cell_graphic2_control_pane_ParamLimits

0xe198,	// (0x00019d0b) cell_graphic2_control_pane

0xe1b6,	// (0x00019d29) cell_graphic2_pane_g1_ParamLimits

0xe1b6,	// (0x00019d29) cell_graphic2_pane_g1

0xe1c3,	// (0x00019d36) cell_graphic2_pane_g2_ParamLimits

0xe1c3,	// (0x00019d36) cell_graphic2_pane_g2

0xe1d0,	// (0x00019d43) cell_graphic2_pane_g3_ParamLimits

0xe1d0,	// (0x00019d43) cell_graphic2_pane_g3

0xe1dd,	// (0x00019d50) cell_graphic2_pane_g4_ParamLimits

0xe1dd,	// (0x00019d50) cell_graphic2_pane_g4

0xe1ea,	// (0x00019d5d) cell_graphic2_pane_g5_ParamLimits

0xe1ea,	// (0x00019d5d) cell_graphic2_pane_g5

0x0004,

0xfd8c,	// (0x0001b8ff) cell_graphic2_pane_g_ParamLimits

0xfd8c,	// (0x0001b8ff) cell_graphic2_pane_g

0xe203,	// (0x00019d76) cell_graphic2_pane_t1_ParamLimits

0xe203,	// (0x00019d76) cell_graphic2_pane_t1

0x927e,	// (0x00014df1) grid_highlight_pane_cp11_ParamLimits

0x927e,	// (0x00014df1) grid_highlight_pane_cp11

0x6eba,	// (0x00012a2d) bg_button_pane_cp05

0xe239,	// (0x00019dac) cell_graphic2_control_pane_g1

0xbcda,	// (0x0001784d) bg_touch_area_indi_pane_g1

0xe261,	// (0x00019dd4) aid_cmod_rocker_key_size

0xe26b,	// (0x00019dde) aid_cmode_itu_key_size

0xe275,	// (0x00019de8) main_cmode_video_pane

0xe27f,	// (0x00019df2) main_comp_mode_itu_pane

0xe28b,	// (0x00019dfe) main_comp_mode_rocker_pane

0xe297,	// (0x00019e0a) cell_cmode_rocker_pane_ParamLimits

0xe297,	// (0x00019e0a) cell_cmode_rocker_pane

0xe2a9,	// (0x00019e1c) cell_cmode_itu_pane_ParamLimits

0xe2a9,	// (0x00019e1c) cell_cmode_itu_pane

0x7a15,	// (0x00013588) bg_button_pane_cp06_ParamLimits

0x7a15,	// (0x00013588) bg_button_pane_cp06

0xbf58,	// (0x00017acb) cell_cmode_rocker_pane_g1_ParamLimits

0xbf58,	// (0x00017acb) cell_cmode_rocker_pane_g1

0xd7d7,	// (0x0001934a) cell_cmode_rocker_pane_g2_ParamLimits

0xd7d7,	// (0x0001934a) cell_cmode_rocker_pane_g2

0x0001,

0xfd9c,	// (0x0001b90f) cell_cmode_rocker_pane_g_ParamLimits

0xfd9c,	// (0x0001b90f) cell_cmode_rocker_pane_g

0x3ac5,	// (0x0000f638) bg_button_pane_cp07

0xe2be,	// (0x00019e31) cell_cmode_itu_pane_g1

0xe2c7,	// (0x00019e3a) cell_cmode_itu_pane_t1

0xe2d5,	// (0x00019e48) cell_cmode_itu_pane_t2

0x0001,

0xfda1,	// (0x0001b914) cell_cmode_itu_pane_t

0xd9fa,	// (0x0001956d) aid_touch_ctrl_left

0xda02,	// (0x00019575) aid_touch_ctrl_right

0x3ac5,	// (0x0000f638) compa_mode_pane

0xe2e3,	// (0x00019e56) aid_cmod_rocker_key_size_cp

0xe2ed,	// (0x00019e60) aid_cmode_itu_key_size_cp

0xe2f7,	// (0x00019e6a) compa_mode_pane_g1

0xe2ff,	// (0x00019e72) compa_mode_pane_g2

0xe307,	// (0x00019e7a) compa_mode_pane_g3

0x0002,

0xfda6,	// (0x0001b919) compa_mode_pane_g

0xe30f,	// (0x00019e82) main_comp_mode_itu_pane_cp

0xe317,	// (0x00019e8a) main_comp_mode_rocker_pane_cp

0xe31f,	// (0x00019e92) cell_cmode_itu_pane_cp_ParamLimits

0xe31f,	// (0x00019e92) cell_cmode_itu_pane_cp

0xe334,	// (0x00019ea7) cell_cmode_rocker_pane_cp_ParamLimits

0xe334,	// (0x00019ea7) cell_cmode_rocker_pane_cp

0x7a15,	// (0x00013588) bg_button_pane_cp06_cp_ParamLimits

0x7a15,	// (0x00013588) bg_button_pane_cp06_cp

0xbf58,	// (0x00017acb) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xbf58,	// (0x00017acb) cell_cmode_rocker_pane_g1_cp

0xbcda,	// (0x0001784d) cell_cmode_rocker_pane_g2_cp

0x3ac5,	// (0x0000f638) bg_button_pane_cp07_cp

0xa7a7,	// (0x0001631a) cell_cmode_itu_pane_g1_cp

0xe346,	// (0x00019eb9) cell_cmode_itu_pane_t1_cp

0xe346,	// (0x00019eb9) cell_cmode_itu_pane_t2_cp

0xa794,	// (0x00016307) settings_code_pane_cp2

0x6c17,	// (0x0001278a) bg_popup_window_pane_cp3_ParamLimits

0x70ba,	// (0x00012c2d) heading_pane_cp3_ParamLimits

0x70c9,	// (0x00012c3c) listscroll_popup_graphic_pane_ParamLimits

0x5a1e,	// (0x00011591) fep_hwr_aid_pane_ParamLimits

0x5e95,	// (0x00011a08) aid_touch_sctrl_top_ParamLimits

0x5eb0,	// (0x00011a23) sctrl_sk_top_pane_g1_ParamLimits

0x5c75,	// (0x000117e8) sctrl_sk_top_pane_g2_ParamLimits

0xfcdc,	// (0x0001b84f) sctrl_sk_top_pane_g_ParamLimits

0x5ebd,	// (0x00011a30) sctrl_sk_top_pane_t1_ParamLimits

0x5e95,	// (0x00011a08) aid_touch_sctrl_bottom_ParamLimits

0x5ebd,	// (0x00011a30) sctrl_sk_bottom_pane_t1_ParamLimits

0xd943,	// (0x000194b6) aid_area_touch_clock

0x60a2,	// (0x00011c15) aid_vkb2_area_top_pane_cell_ParamLimits

0x60a2,	// (0x00011c15) aid_vkb2_area_top_pane_cell

0x61f0,	// (0x00011d63) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x61f0,	// (0x00011d63) aid_vkb2_area_bottom_pane_cell

0xded3,	// (0x00019a46) popup_char_count_window

0xe354,	// (0x00019ec7) popup_char_count_window_g1

0xe35d,	// (0x00019ed0) popup_char_count_window_g2

0xe366,	// (0x00019ed9) popup_char_count_window_g3

0x0002,

0xfdad,	// (0x0001b920) popup_char_count_window_g

0xe36f,	// (0x00019ee2) popup_char_count_window_t1

0x5f64,	// (0x00011ad7) popup_fep_char_preview_window_ParamLimits

0x5f64,	// (0x00011ad7) popup_fep_char_preview_window

0x60c0,	// (0x00011c33) vkb2_top_candi_pane_ParamLimits

0x60c0,	// (0x00011c33) vkb2_top_candi_pane

0xe37d,	// (0x00019ef0) cell_vkb2_top_candi_pane_ParamLimits

0xe37d,	// (0x00019ef0) cell_vkb2_top_candi_pane

0x64d7,	// (0x0001204a) bg_popup_fep_char_preview_window_ParamLimits

0x64d7,	// (0x0001204a) bg_popup_fep_char_preview_window

0x64e5,	// (0x00012058) popup_fep_char_preview_window_t1_ParamLimits

0x64e5,	// (0x00012058) popup_fep_char_preview_window_t1

0xe3c7,	// (0x00019f3a) bg_popup_fep_char_preview_window_g1

0xe3cf,	// (0x00019f42) bg_popup_fep_char_preview_window_g2

0xe3d7,	// (0x00019f4a) bg_popup_fep_char_preview_window_g3

0xe3df,	// (0x00019f52) bg_popup_fep_char_preview_window_g4

0xe3e7,	// (0x00019f5a) bg_popup_fep_char_preview_window_g5

0xe3ef,	// (0x00019f62) bg_popup_fep_char_preview_window_g6

0xe3f7,	// (0x00019f6a) bg_popup_fep_char_preview_window_g7

0xe3ff,	// (0x00019f72) bg_popup_fep_char_preview_window_g8

0xe407,	// (0x00019f7a) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdb4,	// (0x0001b927) bg_popup_fep_char_preview_window_g

0x5c75,	// (0x000117e8) cell_vkb2_top_candi_pane_g1_ParamLimits

0x5c75,	// (0x000117e8) cell_vkb2_top_candi_pane_g1

0x5c83,	// (0x000117f6) cell_vkb2_top_candi_pane_g2_ParamLimits

0x5c83,	// (0x000117f6) cell_vkb2_top_candi_pane_g2

0xdb49,	// (0x000196bc) cell_vkb2_top_candi_pane_g3_ParamLimits

0xdb49,	// (0x000196bc) cell_vkb2_top_candi_pane_g3

0x6527,	// (0x0001209a) cell_vkb2_top_candi_pane_g4_ParamLimits

0x6527,	// (0x0001209a) cell_vkb2_top_candi_pane_g4

0xc357,	// (0x00017eca) cell_vkb2_top_candi_pane_g5_ParamLimits

0xc357,	// (0x00017eca) cell_vkb2_top_candi_pane_g5

0x6548,	// (0x000120bb) cell_vkb2_top_candi_pane_g6_ParamLimits

0x6548,	// (0x000120bb) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdc9,	// (0x0001b93c) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdc9,	// (0x0001b93c) cell_vkb2_top_candi_pane_g

0x6556,	// (0x000120c9) cell_vkb2_top_candi_pane_t1

0x587e,	// (0x000113f1) aid_size_touch_slider_mark_ParamLimits

0x587e,	// (0x000113f1) aid_size_touch_slider_mark

0xe016,	// (0x00019b89) grid_graphic2_catg_pane_ParamLimits

0xe016,	// (0x00019b89) grid_graphic2_catg_pane

0xe0b4,	// (0x00019c27) popup_grid_graphic2_window_t1_ParamLimits

0xe0b4,	// (0x00019c27) popup_grid_graphic2_window_t1

0xe0c6,	// (0x00019c39) popup_grid_graphic2_window_t2_ParamLimits

0xe0c6,	// (0x00019c39) popup_grid_graphic2_window_t2

0x0001,

0xfd82,	// (0x0001b8f5) popup_grid_graphic2_window_t_ParamLimits

0xfd82,	// (0x0001b8f5) popup_grid_graphic2_window_t

0x6eba,	// (0x00012a2d) bg_button_pane_cp05_ParamLimits

0xe239,	// (0x00019dac) cell_graphic2_control_pane_g1_ParamLimits

0xe40f,	// (0x00019f82) cell_graphic2_catg_pane_ParamLimits

0xe40f,	// (0x00019f82) cell_graphic2_catg_pane

0x3ac5,	// (0x0000f638) bg_button_pane_cp12

0xe421,	// (0x00019f94) cell_graphic2_catg_pane_g1

0xd90f,	// (0x00019482) cell_tb_ext_pane_t1_ParamLimits

0x630d,	// (0x00011e80) vkb2_top_cell_right_narrow_pane_ParamLimits

0x630d,	// (0x00011e80) vkb2_top_cell_right_narrow_pane

0x6325,	// (0x00011e98) vkb2_top_cell_right_wide_pane_ParamLimits

0x6325,	// (0x00011e98) vkb2_top_cell_right_wide_pane

0x5a10,	// (0x00011583) bg_vkb2_func_pane_ParamLimits

0x5a10,	// (0x00011583) bg_vkb2_func_pane

0x6396,	// (0x00011f09) vkb2_top_cell_left_pane_g1_ParamLimits

0x5a10,	// (0x00011583) bg_vkb2_fuc_pane_cp03_ParamLimits

0x5a10,	// (0x00011583) bg_vkb2_fuc_pane_cp03

0x63f4,	// (0x00011f67) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x9164,	// (0x00014cd7) bg_vkb2_func_pane_g1

0x916c,	// (0x00014cdf) bg_vkb2_func_pane_g2

0x917c,	// (0x00014cef) bg_vkb2_func_pane_g3

0x9174,	// (0x00014ce7) bg_vkb2_func_pane_g4

0x9184,	// (0x00014cf7) bg_vkb2_func_pane_g5

0x918c,	// (0x00014cff) bg_vkb2_func_pane_g6

0x9194,	// (0x00014d07) bg_vkb2_func_pane_g7

0x919c,	// (0x00014d0f) bg_vkb2_func_pane_g8

0x915c,	// (0x00014ccf) bg_vkb2_func_pane_g9

0x0008,

0xfdd6,	// (0x0001b949) bg_vkb2_func_pane_g

0x5a10,	// (0x00011583) bg_vkb2_fuc_pane_cp01_ParamLimits

0x5a10,	// (0x00011583) bg_vkb2_fuc_pane_cp01

0x6396,	// (0x00011f09) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x6396,	// (0x00011f09) vkb2_top_cell_right_wide_pane_g1

0x5a10,	// (0x00011583) bg_vkb2_fuc_pane_cp02_ParamLimits

0x5a10,	// (0x00011583) bg_vkb2_fuc_pane_cp02

0x6575,	// (0x000120e8) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x6575,	// (0x000120e8) vkb2_top_cell_right_narrow_pane_g1

0xd533,	// (0x000190a6) aid_touch_area_decrease_ParamLimits

0xd533,	// (0x000190a6) aid_touch_area_decrease

0xd557,	// (0x000190ca) aid_touch_area_increase_ParamLimits

0xd557,	// (0x000190ca) aid_touch_area_increase

0xd56f,	// (0x000190e2) aid_touch_area_mute_ParamLimits

0xd56f,	// (0x000190e2) aid_touch_area_mute

0xd58b,	// (0x000190fe) aid_touch_area_slider_ParamLimits

0xd58b,	// (0x000190fe) aid_touch_area_slider

0xd675,	// (0x000191e8) popup_slider_window_g4_ParamLimits

0xd675,	// (0x000191e8) popup_slider_window_g4

0xd68d,	// (0x00019200) popup_slider_window_g5_ParamLimits

0xd68d,	// (0x00019200) popup_slider_window_g5

0xd6af,	// (0x00019222) popup_slider_window_g6_ParamLimits

0xd6af,	// (0x00019222) popup_slider_window_g6

0xd6ed,	// (0x00019260) popup_slider_window_t2_ParamLimits

0xd6ed,	// (0x00019260) popup_slider_window_t2

0x0001,

0xfcd0,	// (0x0001b843) popup_slider_window_t_ParamLimits

0xfcd0,	// (0x0001b843) popup_slider_window_t

0xd705,	// (0x00019278) slider_pane_ParamLimits

0xd705,	// (0x00019278) slider_pane

0xe42a,	// (0x00019f9d) slider_pane_g1_ParamLimits

0xe42a,	// (0x00019f9d) slider_pane_g1

0xe43e,	// (0x00019fb1) slider_pane_g2_ParamLimits

0xe43e,	// (0x00019fb1) slider_pane_g2

0xe454,	// (0x00019fc7) slider_pane_g3_ParamLimits

0xe454,	// (0x00019fc7) slider_pane_g3

0x0003,

0xfde9,	// (0x0001b95c) slider_pane_g_ParamLimits

0xfde9,	// (0x0001b95c) slider_pane_g

0x5439,	// (0x00010fac) popup_tb_float_extension_window_ParamLimits

0x5439,	// (0x00010fac) popup_tb_float_extension_window

0xe480,	// (0x00019ff3) aid_size_cell_tb_float_ext

0x3ac5,	// (0x0000f638) bg_popup_sub_window_cp28

0xe48c,	// (0x00019fff) grid_tb_float_ext_pane

0xe496,	// (0x0001a009) cell_tb_float_ext_pane_ParamLimits

0xe496,	// (0x0001a009) cell_tb_float_ext_pane

0xe4b0,	// (0x0001a023) cell_tb_float_ext_pane_g1

0xe4b9,	// (0x0001a02c) grid_highlight_pane_cp12

0x5b5f,	// (0x000116d2) cell_last_hwr_side_pane_ParamLimits

0x5b5f,	// (0x000116d2) cell_last_hwr_side_pane

0xbcda,	// (0x0001784d) cell_last_hwr_side_pane_g1

0xe4c2,	// (0x0001a035) cell_last_hwr_side_pane_g2

0x0001,

0xfdf2,	// (0x0001b965) cell_last_hwr_side_pane_g

0x62bc,	// (0x00011e2f) vkb2_area_bottom_space_btn_pane_ParamLimits

0x62bc,	// (0x00011e2f) vkb2_area_bottom_space_btn_pane

0x5c75,	// (0x000117e8) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xdf88,	// (0x00019afb) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x6556,	// (0x000120c9) cell_vkb2_top_candi_pane_t1_ParamLimits

0x6595,	// (0x00012108) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x6595,	// (0x00012108) vkb2_area_bottom_space_btn_pane_g1

0x65cf,	// (0x00012142) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x65cf,	// (0x00012142) vkb2_area_bottom_space_btn_pane_g2

0x6605,	// (0x00012178) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x6605,	// (0x00012178) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfdf7,	// (0x0001b96a) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfdf7,	// (0x0001b96a) vkb2_area_bottom_space_btn_pane_g

0x5ad3,	// (0x00011646) cel_fep_hwr_func_pane_ParamLimits

0x5ad3,	// (0x00011646) cel_fep_hwr_func_pane

0x5b0f,	// (0x00011682) cell_hwr_side_button_pane_ParamLimits

0x5b0f,	// (0x00011682) cell_hwr_side_button_pane

0xd943,	// (0x000194b6) aid_area_touch_clock_ParamLimits

0x6eba,	// (0x00012a2d) bg_uniindi_top_pane_ParamLimits

0xd955,	// (0x000194c8) uniindi_top_pane_g1_ParamLimits

0xd96b,	// (0x000194de) uniindi_top_pane_g2_ParamLimits

0xd977,	// (0x000194ea) uniindi_top_pane_g3_ParamLimits

0xd988,	// (0x000194fb) uniindi_top_pane_g4_ParamLimits

0xfd08,	// (0x0001b87b) uniindi_top_pane_g_ParamLimits

0xd995,	// (0x00019508) uniindi_top_pane_t1_ParamLimits

0x6eba,	// (0x00012a2d) bg_vkb2_func_pane_cp01_ParamLimits

0x6eba,	// (0x00012a2d) bg_vkb2_func_pane_cp01

0xe4cb,	// (0x0001a03e) cel_fep_hwr_func_pane_g1_ParamLimits

0xe4cb,	// (0x0001a03e) cel_fep_hwr_func_pane_g1

0x6eba,	// (0x00012a2d) bg_vkb2_func_pane_cp02_ParamLimits

0x6eba,	// (0x00012a2d) bg_vkb2_func_pane_cp02

0xe4cb,	// (0x0001a03e) cell_hwr_side_button_pane_g1_ParamLimits

0xe4cb,	// (0x0001a03e) cell_hwr_side_button_pane_g1

0x8fc7,	// (0x00014b3a) status_pane_g4_ParamLimits

0x8fc7,	// (0x00014b3a) status_pane_g4

0x8fe1,	// (0x00014b54) status_pane_t1

0xba1f,	// (0x00017592) form2_midp_gauge_slider_cont_pane

0xba27,	// (0x0001759a) form2_midp_gauge_slider_pane_t1_ParamLimits

0xba39,	// (0x000175ac) form2_midp_gauge_slider_pane_t2_ParamLimits

0xba4b,	// (0x000175be) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfac8,	// (0x0001b63b) form2_midp_gauge_slider_pane_t_ParamLimits

0xba5d,	// (0x000175d0) form2_midp_slider_pane_ParamLimits

0x5f2c,	// (0x00011a9f) aid_size_cell_func_vkb2_ParamLimits

0x5f2c,	// (0x00011a9f) aid_size_cell_func_vkb2

0xe46c,	// (0x00019fdf) slider_pane_g4_ParamLimits

0xe46c,	// (0x00019fdf) slider_pane_g4

0x664f,	// (0x000121c2) form2_midp_gauge_slider_pane_t2_cp01

0x665d,	// (0x000121d0) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x665d,	// (0x000121d0) form2_midp_gauge_slider_pane_t3_cp01

0x667a,	// (0x000121ed) form2_midp_slider_pane_cp01

0x3ac5,	// (0x0000f638) navi_smil_pane

0xe504,	// (0x0001a077) navi_smil_pane_g1

0xe50c,	// (0x0001a07f) navi_smil_pane_t1

0xe4d9,	// (0x0001a04c) form2_midp_slider_pane_g1

0xe4e2,	// (0x0001a055) form2_midp_slider_pane_g2

0xe4ea,	// (0x0001a05d) form2_midp_slider_pane_g3

0xe4d9,	// (0x0001a04c) form2_midp_slider_pane_g4

0xe4f2,	// (0x0001a065) form2_midp_slider_pane_g5

0x0004,

0xfe00,	// (0x0001b973) form2_midp_slider_pane_g

0x663f,	// (0x000121b2) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x663f,	// (0x000121b2) vkb2_area_bottom_space_btn_pane_g4

0x8df6,	// (0x00014969) lc0_navi_pane_ParamLimits

0x8df6,	// (0x00014969) lc0_navi_pane

0x8e6c,	// (0x000149df) lc0_stat_indi_pane_ParamLimits

0x8e6c,	// (0x000149df) lc0_stat_indi_pane

0x8e83,	// (0x000149f6) ls0_title_pane_ParamLimits

0x8e83,	// (0x000149f6) ls0_title_pane

0x7a15,	// (0x00013588) bg_popup_sub_pane_cp14_ParamLimits

0xd92a,	// (0x0001949d) list_uniindi_pane_ParamLimits

0xd936,	// (0x000194a9) uniindi_top_pane_ParamLimits

0xd9d2,	// (0x00019545) list_single_uniindi_pane_g1_ParamLimits

0xd9e5,	// (0x00019558) list_single_uniindi_pane_t1_ParamLimits

0x6683,	// (0x000121f6) lc0_stat_clock_pane_ParamLimits

0x6683,	// (0x000121f6) lc0_stat_clock_pane

0xe51a,	// (0x0001a08d) lc0_stat_indi_pane_g1_ParamLimits

0xe51a,	// (0x0001a08d) lc0_stat_indi_pane_g1

0xe527,	// (0x0001a09a) lc0_stat_indi_pane_g2_ParamLimits

0xe527,	// (0x0001a09a) lc0_stat_indi_pane_g2

0x0001,

0xfe0b,	// (0x0001b97e) lc0_stat_indi_pane_g_ParamLimits

0xfe0b,	// (0x0001b97e) lc0_stat_indi_pane_g

0x6690,	// (0x00012203) lc0_uni_indicator_pane_ParamLimits

0x6690,	// (0x00012203) lc0_uni_indicator_pane

0xe534,	// (0x0001a0a7) ls0_title_pane_g1_ParamLimits

0xe534,	// (0x0001a0a7) ls0_title_pane_g1

0xe548,	// (0x0001a0bb) ls0_title_pane_t1_ParamLimits

0xe548,	// (0x0001a0bb) ls0_title_pane_t1

0x669d,	// (0x00012210) lc0_uni_indicator_pane_g1_ParamLimits

0x669d,	// (0x00012210) lc0_uni_indicator_pane_g1

0xe57e,	// (0x0001a0f1) lc0_stat_clock_pane_t1

0x4666,	// (0x000101d9) main_ai5_pane

0xe58c,	// (0x0001a0ff) ai5_sk_pane_ParamLimits

0xe58c,	// (0x0001a0ff) ai5_sk_pane

0xe599,	// (0x0001a10c) cell_ai5_widget_pane_ParamLimits

0xe599,	// (0x0001a10c) cell_ai5_widget_pane

0xe662,	// (0x0001a1d5) aid_size_cell_widget_grid

0xe678,	// (0x0001a1eb) bg_ai5_widget_pane_ParamLimits

0xe678,	// (0x0001a1eb) bg_ai5_widget_pane

0xe6f4,	// (0x0001a267) cell_ai5_widget_pane_g2

0xe708,	// (0x0001a27b) cell_ai5_widget_pane_g3

0xe722,	// (0x0001a295) cell_ai5_widget_pane_g4

0xe732,	// (0x0001a2a5) cell_ai5_widget_pane_g5

0xe742,	// (0x0001a2b5) cell_ai5_widget_pane_g6

0xe74e,	// (0x0001a2c1) cell_ai5_widget_pane_g7

0xe7ba,	// (0x0001a32d) cell_ai5_widget_pane_t1_ParamLimits

0xe7ba,	// (0x0001a32d) cell_ai5_widget_pane_t1

0xe7d7,	// (0x0001a34a) cell_ai5_widget_pane_t2_ParamLimits

0xe7d7,	// (0x0001a34a) cell_ai5_widget_pane_t2

0xe7ef,	// (0x0001a362) cell_ai5_widget_pane_t3_ParamLimits

0xe7ef,	// (0x0001a362) cell_ai5_widget_pane_t3

0xe807,	// (0x0001a37a) cell_ai5_widget_pane_t4_ParamLimits

0xe807,	// (0x0001a37a) cell_ai5_widget_pane_t4

0xe82d,	// (0x0001a3a0) cell_ai5_widget_pane_t5_ParamLimits

0xe82d,	// (0x0001a3a0) cell_ai5_widget_pane_t5

0xe84c,	// (0x0001a3bf) cell_ai5_widget_pane_t6_ParamLimits

0xe84c,	// (0x0001a3bf) cell_ai5_widget_pane_t6

0xe85e,	// (0x0001a3d1) cell_ai5_widget_pane_t7_ParamLimits

0xe85e,	// (0x0001a3d1) cell_ai5_widget_pane_t7

0xe87d,	// (0x0001a3f0) cell_ai5_widget_pane_t8_ParamLimits

0xe87d,	// (0x0001a3f0) cell_ai5_widget_pane_t8

0x000b,

0xfe2b,	// (0x0001b99e) cell_ai5_widget_pane_t_ParamLimits

0xfe2b,	// (0x0001b99e) cell_ai5_widget_pane_t

0xe901,	// (0x0001a474) grid_ai5_widget_pane

0x7a15,	// (0x00013588) highlight_cell_ai5_widget_pane_ParamLimits

0x7a15,	// (0x00013588) highlight_cell_ai5_widget_pane

0xe918,	// (0x0001a48b) ai5_sk_left_pane

0xe922,	// (0x0001a495) ai5_sk_middle_pane

0xe92c,	// (0x0001a49f) ai5_sk_right_pane

0xe936,	// (0x0001a4a9) bg_ai5_widget_pane_g1_ParamLimits

0xe936,	// (0x0001a4a9) bg_ai5_widget_pane_g1

0xe942,	// (0x0001a4b5) bg_ai5_widget_pane_g2_ParamLimits

0xe942,	// (0x0001a4b5) bg_ai5_widget_pane_g2

0xe94e,	// (0x0001a4c1) bg_ai5_widget_pane_g3_ParamLimits

0xe94e,	// (0x0001a4c1) bg_ai5_widget_pane_g3

0xe95a,	// (0x0001a4cd) bg_ai5_widget_pane_g4_ParamLimits

0xe95a,	// (0x0001a4cd) bg_ai5_widget_pane_g4

0xe966,	// (0x0001a4d9) bg_ai5_widget_pane_g5_ParamLimits

0xe966,	// (0x0001a4d9) bg_ai5_widget_pane_g5

0xe972,	// (0x0001a4e5) bg_ai5_widget_pane_g6_ParamLimits

0xe972,	// (0x0001a4e5) bg_ai5_widget_pane_g6

0xe97e,	// (0x0001a4f1) bg_ai5_widget_pane_g7_ParamLimits

0xe97e,	// (0x0001a4f1) bg_ai5_widget_pane_g7

0xe98a,	// (0x0001a4fd) bg_ai5_widget_pane_g8_ParamLimits

0xe98a,	// (0x0001a4fd) bg_ai5_widget_pane_g8

0xe996,	// (0x0001a509) bg_ai5_widget_pane_g9_ParamLimits

0xe996,	// (0x0001a509) bg_ai5_widget_pane_g9

0x0008,

0xfe44,	// (0x0001b9b7) bg_ai5_widget_pane_g_ParamLimits

0xfe44,	// (0x0001b9b7) bg_ai5_widget_pane_g

0xe9c8,	// (0x0001a53b) cell_shortcut_ai5_widget_pane_ParamLimits

0xe9c8,	// (0x0001a53b) cell_shortcut_ai5_widget_pane

0x88e8,	// (0x0001445b) bg_cell_shortcut_ai5_widget_pane

0xe9d9,	// (0x0001a54c) cell_grid_ai5_widget_pane_g1

0x88e8,	// (0x0001445b) highlight_cell_shortcut_ai5_widget_pane

0x9164,	// (0x00014cd7) ai5_sk_left_pane_g1

0xe9e2,	// (0x0001a555) ai5_sk_left_pane_g2

0xe9ea,	// (0x0001a55d) ai5_sk_left_pane_g3

0xe9f2,	// (0x0001a565) ai5_sk_left_pane_g4

0x0003,

0xfe57,	// (0x0001b9ca) ai5_sk_left_pane_g

0xe9fa,	// (0x0001a56d) ai5_sk_left_pane_t1

0x916c,	// (0x00014cdf) ai5_sk_right_pane_g1

0xea08,	// (0x0001a57b) ai5_sk_right_pane_g2

0xea10,	// (0x0001a583) ai5_sk_right_pane_g3

0xea18,	// (0x0001a58b) ai5_sk_right_pane_g4

0x0003,

0xfe60,	// (0x0001b9d3) ai5_sk_right_pane_g

0xea20,	// (0x0001a593) ai5_sk_right_pane_t1

0x916c,	// (0x00014cdf) ai5_sk_middle_pane_g1

0x9164,	// (0x00014cd7) ai5_sk_middle_pane_g2

0x9184,	// (0x00014cf7) ai5_sk_middle_pane_g3

0xea10,	// (0x0001a583) ai5_sk_middle_pane_g4

0xe9ea,	// (0x0001a55d) ai5_sk_middle_pane_g5

0xea2e,	// (0x0001a5a1) ai5_sk_middle_pane_g6

0xea36,	// (0x0001a5a9) ai5_sk_middle_pane_g7

0x0006,

0xfe69,	// (0x0001b9dc) ai5_sk_middle_pane_g

0x8c7c,	// (0x000147ef) aid_touch_area_size_lc0_ParamLimits

0x8c7c,	// (0x000147ef) aid_touch_area_size_lc0

0x5ca4,	// (0x00011817) cell_hwr_candidate_pane_t1_ParamLimits

0x8c98,	// (0x0001480b) aid_touch_navi_pane

0x8f71,	// (0x00014ae4) status_dt_navi_pane_ParamLimits

0x8f71,	// (0x00014ae4) status_dt_navi_pane

0x8f7e,	// (0x00014af1) status_dt_sta_pane_ParamLimits

0x8f7e,	// (0x00014af1) status_dt_sta_pane

0xea3e,	// (0x0001a5b1) dt_sta_controll_pane

0xea4b,	// (0x0001a5be) dt_sta_indi_pane

0xea5c,	// (0x0001a5cf) dt_sta_title_pane

0x6eba,	// (0x00012a2d) bg_dt_sta_indi_pane_ParamLimits

0x6eba,	// (0x00012a2d) bg_dt_sta_indi_pane

0xea6f,	// (0x0001a5e2) dt_sta_battery_pane

0xea77,	// (0x0001a5ea) dt_sta_indi_pane_g1

0xea80,	// (0x0001a5f3) dt_sta_indi_pane_g2

0xea89,	// (0x0001a5fc) dt_sta_indi_pane_g3

0x0002,

0xfe78,	// (0x0001b9eb) dt_sta_indi_pane_g

0xea92,	// (0x0001a605) dt_sta_signal_pane

0x7a15,	// (0x00013588) bg_dt_sta_title_pane_ParamLimits

0x7a15,	// (0x00013588) bg_dt_sta_title_pane

0xea9b,	// (0x0001a60e) dt_sta_title_pane_g1

0xeaa3,	// (0x0001a616) dt_sta_title_pane_t1_ParamLimits

0xeaa3,	// (0x0001a616) dt_sta_title_pane_t1

0x3ac5,	// (0x0000f638) bg_dt_sta_control_pane

0xeab8,	// (0x0001a62b) dt_sta_controll_pane_g1

0xeac1,	// (0x0001a634) bg_dt_sta_title_pane_g1

0xeaca,	// (0x0001a63d) bg_dt_sta_title_pane_g2

0xead3,	// (0x0001a646) bg_dt_sta_title_pane_g3

0x0002,

0xfe7f,	// (0x0001b9f2) bg_dt_sta_title_pane_g

0xbcda,	// (0x0001784d) bg_dt_sta_indi_pane_g1

0xeadc,	// (0x0001a64f) dt_sta_signal_pane_g1

0xeae4,	// (0x0001a657) dt_sta_signal_pane_g2

0x0001,

0xfe86,	// (0x0001b9f9) dt_sta_signal_pane_g

0xeaec,	// (0x0001a65f) dt_sta_battery_pane_g1

0xeaf5,	// (0x0001a668) dt_sta_battery_pane_t1

0xbcda,	// (0x0001784d) bg_dt_sta_control_pane_g1

0x8358,	// (0x00013ecb) fep_china_uni_eep_pane

0x8360,	// (0x00013ed3) fep_china_uni_entry_pane_ParamLimits

0x8370,	// (0x00013ee3) popup_fep_china_uni_window_g1_ParamLimits

0x8380,	// (0x00013ef3) popup_fep_china_uni_window_g2_ParamLimits

0x8380,	// (0x00013ef3) popup_fep_china_uni_window_g2

0x0001,

0xf6f3,	// (0x0001b266) popup_fep_china_uni_window_g_ParamLimits

0xf6f3,	// (0x0001b266) popup_fep_china_uni_window_g

0xeb04,	// (0x0001a677) fep_china_uni_eep_pane_g1

0xeb0c,	// (0x0001a67f) fep_china_uni_eep_pane_t1

0xe4fb,	// (0x0001a06e) aid_touch_area_size_smil_player

0x8dee,	// (0x00014961) lc0_clock_pane

0x8fd5,	// (0x00014b48) status_pane_g5_ParamLimits

0x8fd5,	// (0x00014b48) status_pane_g5

0x50fe,	// (0x00010c71) popup_keymap_window

0x8f93,	// (0x00014b06) status_icon_pane

0xe708,	// (0x0001a27b) cell_ai5_widget_pane_g3_ParamLimits

0xe722,	// (0x0001a295) cell_ai5_widget_pane_g4_ParamLimits

0xe732,	// (0x0001a2a5) cell_ai5_widget_pane_g5_ParamLimits

0xe75a,	// (0x0001a2cd) cell_ai5_widget_pane_g8_ParamLimits

0xe75a,	// (0x0001a2cd) cell_ai5_widget_pane_g8

0xe76e,	// (0x0001a2e1) cell_ai5_widget_pane_g9_ParamLimits

0xe76e,	// (0x0001a2e1) cell_ai5_widget_pane_g9

0xe782,	// (0x0001a2f5) cell_ai5_widget_pane_g10_ParamLimits

0xe782,	// (0x0001a2f5) cell_ai5_widget_pane_g10

0xeb1b,	// (0x0001a68e) status_icon_pane_g1

0x3ac5,	// (0x0000f638) bg_popup_sub_pane_cp13

0xeb23,	// (0x0001a696) popup_keymap_window_t1

0x8bbd,	// (0x00014730) control_pane_g6_ParamLimits

0x8bbd,	// (0x00014730) control_pane_g6

0x8bca,	// (0x0001473d) control_pane_g7_ParamLimits

0x8bca,	// (0x0001473d) control_pane_g7

0x8bd7,	// (0x0001474a) control_pane_g8_ParamLimits

0x8bd7,	// (0x0001474a) control_pane_g8

0xea3e,	// (0x0001a5b1) dt_sta_controll_pane_ParamLimits

0xea4b,	// (0x0001a5be) dt_sta_indi_pane_ParamLimits

0xea5c,	// (0x0001a5cf) dt_sta_title_pane_ParamLimits

0x73f6,	// (0x00012f69) aid_size_touch_scroll_bar_cale

0x473f,	// (0x000102b2) popup_discreet_window_ParamLimits

0x473f,	// (0x000102b2) popup_discreet_window

0x47c7,	// (0x0001033a) popup_sk_window

0x98d6,	// (0x00015449) bg_popup_sub_pane_cp28_ParamLimits

0x98d6,	// (0x00015449) bg_popup_sub_pane_cp28

0xeb31,	// (0x0001a6a4) popup_discreet_window_g1_ParamLimits

0xeb31,	// (0x0001a6a4) popup_discreet_window_g1

0xeb51,	// (0x0001a6c4) popup_discreet_window_t1_ParamLimits

0xeb51,	// (0x0001a6c4) popup_discreet_window_t1

0xeb6f,	// (0x0001a6e2) popup_discreet_window_t2_ParamLimits

0xeb6f,	// (0x0001a6e2) popup_discreet_window_t2

0x0002,

0xfe8b,	// (0x0001b9fe) popup_discreet_window_t_ParamLimits

0xfe8b,	// (0x0001b9fe) popup_discreet_window_t

0x66b1,	// (0x00012224) popup_sk_window_g1

0x66bb,	// (0x0001222e) popup_sk_window_g2

0x0001,

0xfe92,	// (0x0001ba05) popup_sk_window_g

0x66c3,	// (0x00012236) popup_sk_window_t1

0x66d1,	// (0x00012244) popup_sk_window_t1_copy1

0xe6f4,	// (0x0001a267) cell_ai5_widget_pane_g2_ParamLimits

0xe88f,	// (0x0001a402) cell_ai5_widget_pane_t9_ParamLimits

0xe88f,	// (0x0001a402) cell_ai5_widget_pane_t9

0x3ac5,	// (0x0000f638) main_fep_fshwr2_pane

0x66df,	// (0x00012252) aid_fshwr2_btn_pane

0x66ef,	// (0x00012262) aid_fshwr2_syb_pane

0x6703,	// (0x00012276) aid_fshwr2_txt_pane

0x6713,	// (0x00012286) fshwr2_func_candi_pane

0x6737,	// (0x000122aa) fshwr2_hwr_syb_pane

0x6751,	// (0x000122c4) fshwr2_icf_pane

0x4666,	// (0x000101d9) fshwr2_icf_bg_pane

0x677f,	// (0x000122f2) fshwr2_icf_pane_t1_ParamLimits

0x677f,	// (0x000122f2) fshwr2_icf_pane_t1

0x822d,	// (0x00013da0) fshwr2_func_candi_pane_g1

0xebc1,	// (0x0001a734) fshwr2_func_candi_row_pane_ParamLimits

0xebc1,	// (0x0001a734) fshwr2_func_candi_row_pane

0x6797,	// (0x0001230a) cell_fshwr2_syb_pane_ParamLimits

0x6797,	// (0x0001230a) cell_fshwr2_syb_pane

0x67ba,	// (0x0001232d) fshwr2_hwr_syb_pane_g1_ParamLimits

0x67ba,	// (0x0001232d) fshwr2_hwr_syb_pane_g1

0x4666,	// (0x000101d9) bg_popup_call_pane_cp01

0x67c8,	// (0x0001233b) fshwr2_func_candi_cell_pane_ParamLimits

0x67c8,	// (0x0001233b) fshwr2_func_candi_cell_pane

0x9f4a,	// (0x00015abd) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x9f4a,	// (0x00015abd) fshwr2_func_candi_cell_bg_pane

0x6813,	// (0x00012386) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x6813,	// (0x00012386) fshwr2_func_candi_cell_pane_g1

0x683e,	// (0x000123b1) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x683e,	// (0x000123b1) fshwr2_func_candi_cell_pane_t1

0x4666,	// (0x000101d9) bg_button_pane_cp08

0x8c14,	// (0x00014787) cell_fshwr2_syb_bg_pane

0x6851,	// (0x000123c4) cell_fshwr2_syb_bg_pane_g1

0x6865,	// (0x000123d8) cell_fshwr2_syb_bg_pane_t1

0x7a15,	// (0x00013588) main_tmo_pane

0xa3e5,	// (0x00015f58) uni_indicator_pane_g1_ParamLimits

0xa3fb,	// (0x00015f6e) uni_indicator_pane_g2_ParamLimits

0xa411,	// (0x00015f84) uni_indicator_pane_g3_ParamLimits

0xa424,	// (0x00015f97) uni_indicator_pane_g4_ParamLimits

0xa424,	// (0x00015f97) uni_indicator_pane_g4

0xa438,	// (0x00015fab) uni_indicator_pane_g5_ParamLimits

0xa438,	// (0x00015fab) uni_indicator_pane_g5

0xa438,	// (0x00015fab) uni_indicator_pane_g6_ParamLimits

0xa438,	// (0x00015fab) uni_indicator_pane_g6

0xf8f2,	// (0x0001b465) uni_indicator_pane_g_ParamLimits

0xd50f,	// (0x00019082) popup_tmo_note_window_ParamLimits

0xd50f,	// (0x00019082) popup_tmo_note_window

0x5f0e,	// (0x00011a81) fshwr2_bg_pane

0x682f,	// (0x000123a2) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x682f,	// (0x000123a2) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe97,	// (0x0001ba0a) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe97,	// (0x0001ba0a) fshwr2_func_candi_cell_pane_g

0x5c5d,	// (0x000117d0) bg_popup_window_pane_cp01

0x687b,	// (0x000123ee) bg_popup_window_pane_g1_cp01

0xebe8,	// (0x0001a75b) bg_popup_window_pane_cp22_ParamLimits

0xebe8,	// (0x0001a75b) bg_popup_window_pane_cp22

0xebf6,	// (0x0001a769) listscroll_tmo_link_pane_ParamLimits

0xebf6,	// (0x0001a769) listscroll_tmo_link_pane

0xec36,	// (0x0001a7a9) popup_tmo_note_window_g1_ParamLimits

0xec36,	// (0x0001a7a9) popup_tmo_note_window_g1

0xec43,	// (0x0001a7b6) tmo_note_info_pane_ParamLimits

0xec43,	// (0x0001a7b6) tmo_note_info_pane

0xec5d,	// (0x0001a7d0) list_tmo_note_info_pane_g1_ParamLimits

0xec5d,	// (0x0001a7d0) list_tmo_note_info_pane_g1

0xec74,	// (0x0001a7e7) list_tmo_note_info_pane_g2_ParamLimits

0xec74,	// (0x0001a7e7) list_tmo_note_info_pane_g2

0x0001,

0xfe9c,	// (0x0001ba0f) list_tmo_note_info_pane_g_ParamLimits

0xfe9c,	// (0x0001ba0f) list_tmo_note_info_pane_g

0xec90,	// (0x0001a803) list_tmo_note_info_text_pane_ParamLimits

0xec90,	// (0x0001a803) list_tmo_note_info_text_pane

0xed11,	// (0x0001a884) list_tmo_link_pane

0xed1e,	// (0x0001a891) scroll_pane_cp20

0xed2b,	// (0x0001a89e) list_single_tmo_link_pane_ParamLimits

0xed2b,	// (0x0001a89e) list_single_tmo_link_pane

0xed3b,	// (0x0001a8ae) list_single_tmo_link_pane_t1

0xed49,	// (0x0001a8bc) list_tmo_note_info_text_pane_t1_ParamLimits

0xed49,	// (0x0001a8bc) list_tmo_note_info_text_pane_t1

0x7c54,	// (0x000137c7) aid_size_touch_scroll_bar_cp01_ParamLimits

0x7c54,	// (0x000137c7) aid_size_touch_scroll_bar_cp01

0x7ac4,	// (0x00013637) aid_size_touch_slider_marker

0x47af,	// (0x00010322) popup_settings_window_ParamLimits

0x47af,	// (0x00010322) popup_settings_window

0x8c48,	// (0x000147bb) popup_candi_list_indi_window

0x8c98,	// (0x0001480b) aid_touch_navi_pane_ParamLimits

0x5e69,	// (0x000119dc) rs_clock_indi_pane

0x5e72,	// (0x000119e5) sctrl_sk_bottom_pane_ParamLimits

0x5e83,	// (0x000119f6) sctrl_sk_top_pane_ParamLimits

0x5f7e,	// (0x00011af1) popup_fep_tooltip_window

0xe662,	// (0x0001a1d5) aid_size_cell_widget_grid_ParamLimits

0xe6df,	// (0x0001a252) cell_ai5_widget_pane_g1_ParamLimits

0xe6df,	// (0x0001a252) cell_ai5_widget_pane_g1

0xe742,	// (0x0001a2b5) cell_ai5_widget_pane_g6_ParamLimits

0xe74e,	// (0x0001a2c1) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe10,	// (0x0001b983) cell_ai5_widget_pane_g_ParamLimits

0xfe10,	// (0x0001b983) cell_ai5_widget_pane_g

0xe8be,	// (0x0001a431) cell_ai5_widget_pane_t10_ParamLimits

0xe8be,	// (0x0001a431) cell_ai5_widget_pane_t10

0xe901,	// (0x0001a474) grid_ai5_widget_pane_ParamLimits

0xe9a2,	// (0x0001a515) cell_contacts_ai5_widget_pane_ParamLimits

0xe9a2,	// (0x0001a515) cell_contacts_ai5_widget_pane

0xeb84,	// (0x0001a6f7) popup_discreet_window_t3_ParamLimits

0xeb84,	// (0x0001a6f7) popup_discreet_window_t3

0x6769,	// (0x000122dc) popup_fshwr2_char_preview_window_ParamLimits

0x6769,	// (0x000122dc) popup_fshwr2_char_preview_window

0xecae,	// (0x0001a821) tmo_note_info_pane_t1

0xecc3,	// (0x0001a836) tmo_note_info_pane_t2

0xecd8,	// (0x0001a84b) tmo_note_info_pane_t3

0xeced,	// (0x0001a860) tmo_note_info_pane_t4

0xecff,	// (0x0001a872) tmo_note_info_pane_t5

0x0004,

0xfea1,	// (0x0001ba14) tmo_note_info_pane_t

0xed11,	// (0x0001a884) list_tmo_link_pane_ParamLimits

0xed1e,	// (0x0001a891) scroll_pane_cp20_ParamLimits

0x4666,	// (0x000101d9) bg_popup_fep_char_preview_window_cp01

0xed62,	// (0x0001a8d5) popup_fshwr2_char_preview_window_t1

0xed70,	// (0x0001a8e3) popup_candi_list_indi_window_g1

0xed79,	// (0x0001a8ec) bg_cell_contacts_ai5_widget_pane

0xed85,	// (0x0001a8f8) cell_contacts_ai5_widget_pane_g1

0xc55f,	// (0x000180d2) cell_contacts_ai5_widget_pane_g2

0xed9a,	// (0x0001a90d) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeac,	// (0x0001ba1f) cell_contacts_ai5_widget_pane_g

0xeda6,	// (0x0001a919) cell_contacts_ai5_widget_pane_t1

0x7a15,	// (0x00013588) highlight_cell_shortcut_ai5_widget_pane_cp01

0xee1d,	// (0x0001a990) settings_container_pane

0x88e8,	// (0x0001445b) listscroll_set_pane_copy1

0xb0ad,	// (0x00016c20) scroll_pane_cp121_copy1

0x9673,	// (0x000151e6) set_content_pane_copy1

0xee29,	// (0x0001a99c) aid_height_set_list_copy1_ParamLimits

0xee29,	// (0x0001a99c) aid_height_set_list_copy1

0xa642,	// (0x000161b5) aid_size_parent_copy1_ParamLimits

0xa642,	// (0x000161b5) aid_size_parent_copy1

0xee35,	// (0x0001a9a8) button_value_adjust_pane_cp6_copy1_ParamLimits

0xee35,	// (0x0001a9a8) button_value_adjust_pane_cp6_copy1

0x8c14,	// (0x00014787) list_highlight_pane_cp2_copy1_ParamLimits

0x8c14,	// (0x00014787) list_highlight_pane_cp2_copy1

0xee49,	// (0x0001a9bc) list_set_pane_copy1_ParamLimits

0xee49,	// (0x0001a9bc) list_set_pane_copy1

0xedb8,	// (0x0001a92b) main_pane_set_t1_copy1_ParamLimits

0xedb8,	// (0x0001a92b) main_pane_set_t1_copy1

0xedf2,	// (0x0001a965) main_pane_set_t2_copy1_ParamLimits

0xedf2,	// (0x0001a965) main_pane_set_t2_copy1

0xeef6,	// (0x0001aa69) main_pane_set_t3_copy1

0xef04,	// (0x0001aa77) main_pane_set_t4_copy1

0xee11,	// (0x0001a984) set_content_pane_g1_copy1_ParamLimits

0xee11,	// (0x0001a984) set_content_pane_g1_copy1

0xef12,	// (0x0001aa85) setting_code_pane_copy1

0xef1a,	// (0x0001aa8d) setting_slider_graphic_pane_copy1

0xef1a,	// (0x0001aa8d) setting_slider_pane_copy1

0xef22,	// (0x0001aa95) setting_text_pane_copy1

0xef22,	// (0x0001aa95) setting_volume_pane_copy1

0xef12,	// (0x0001aa85) settings_code_pane_cp2_copy1

0xef2a,	// (0x0001aa9d) settings_code_pane_cp_copy1_ParamLimits

0xef2a,	// (0x0001aa9d) settings_code_pane_cp_copy1

0x6884,	// (0x000123f7) volume_set_pane_copy1

0xef3e,	// (0x0001aab1) volume_set_pane_g10_copy1

0xef46,	// (0x0001aab9) volume_set_pane_g1_copy1

0xef4e,	// (0x0001aac1) volume_set_pane_g2_copy1

0xef56,	// (0x0001aac9) volume_set_pane_g3_copy1

0xef5e,	// (0x0001aad1) volume_set_pane_g4_copy1

0xef66,	// (0x0001aad9) volume_set_pane_g5_copy1

0xef6e,	// (0x0001aae1) volume_set_pane_g6_copy1

0xef76,	// (0x0001aae9) volume_set_pane_g7_copy1

0xef7e,	// (0x0001aaf1) volume_set_pane_g8_copy1

0xef86,	// (0x0001aaf9) volume_set_pane_g9_copy1

0x6c17,	// (0x0001278a) bg_set_opt_pane_cp_copy1_ParamLimits

0x6c17,	// (0x0001278a) bg_set_opt_pane_cp_copy1

0x688c,	// (0x000123ff) setting_slider_pane_t1_copy1_ParamLimits

0x688c,	// (0x000123ff) setting_slider_pane_t1_copy1

0x68ab,	// (0x0001241e) setting_slider_pane_t2_copy1_ParamLimits

0x68ab,	// (0x0001241e) setting_slider_pane_t2_copy1

0x68c5,	// (0x00012438) setting_slider_pane_t3_copy1_ParamLimits

0x68c5,	// (0x00012438) setting_slider_pane_t3_copy1

0x68dd,	// (0x00012450) slider_set_pane_copy1_ParamLimits

0x68dd,	// (0x00012450) slider_set_pane_copy1

0x7b44,	// (0x000136b7) set_opt_bg_pane_g1_copy2

0x7b4c,	// (0x000136bf) set_opt_bg_pane_g2_copy2

0xef8e,	// (0x0001ab01) set_opt_bg_pane_g3_copy2

0x7b5c,	// (0x000136cf) set_opt_bg_pane_g4_copy2

0x7b64,	// (0x000136d7) set_opt_bg_pane_g5_copy2

0x7b6c,	// (0x000136df) set_opt_bg_pane_g6_copy2

0xef98,	// (0x0001ab0b) set_opt_bg_pane_g7_copy2

0xefa0,	// (0x0001ab13) set_opt_bg_pane_g8_copy2

0xefaa,	// (0x0001ab1d) set_opt_bg_pane_g9_copy2

0x68f3,	// (0x00012466) aid_size_touch_slider_mark_copy1_ParamLimits

0x68f3,	// (0x00012466) aid_size_touch_slider_mark_copy1

0xefb4,	// (0x0001ab27) slider_set_pane_g1_copy1

0x6907,	// (0x0001247a) slider_set_pane_g2_copy1

0x589e,	// (0x00011411) slider_set_pane_g3_copy1_ParamLimits

0x589e,	// (0x00011411) slider_set_pane_g3_copy1

0x58b2,	// (0x00011425) slider_set_pane_g4_copy1_ParamLimits

0x58b2,	// (0x00011425) slider_set_pane_g4_copy1

0x58ca,	// (0x0001143d) slider_set_pane_g5_copy1_ParamLimits

0x58ca,	// (0x0001143d) slider_set_pane_g5_copy1

0x589e,	// (0x00011411) slider_set_pane_g6_copy1_ParamLimits

0x589e,	// (0x00011411) slider_set_pane_g6_copy1

0x690f,	// (0x00012482) slider_set_pane_g7_copy1_ParamLimits

0x690f,	// (0x00012482) slider_set_pane_g7_copy1

0x6b37,	// (0x000126aa) bg_set_opt_pane_cp2_copy1

0xefbd,	// (0x0001ab30) setting_slider_graphic_pane_g1_copy1

0xefc6,	// (0x0001ab39) setting_slider_graphic_pane_t1_copy1

0xefd6,	// (0x0001ab49) setting_slider_graphic_pane_t2_copy1

0xefe6,	// (0x0001ab59) slider_set_pane_cp_copy1

0xeff6,	// (0x0001ab69) input_focus_pane_cp1_copy1

0xefff,	// (0x0001ab72) list_set_text_pane_copy1

0xf007,	// (0x0001ab7a) setting_text_pane_g1_copy1

0x6c70,	// (0x000127e3) set_text_pane_t1_copy1

0xeff6,	// (0x0001ab69) input_focus_pane_cp2_copy1

0xf007,	// (0x0001ab7a) setting_code_pane_g1_copy1

0xf010,	// (0x0001ab83) setting_code_pane_t1_copy1

0xaed5,	// (0x00016a48) list_set_graphic_pane_copy1

0x6b37,	// (0x000126aa) bg_set_opt_pane_cp4_copy1

0x85e6,	// (0x00014159) list_set_graphic_pane_g1_copy1_ParamLimits

0x85e6,	// (0x00014159) list_set_graphic_pane_g1_copy1

0xf01e,	// (0x0001ab91) list_set_graphic_pane_g2_copy1

0x85fe,	// (0x00014171) list_set_graphic_pane_t1_copy1_ParamLimits

0x85fe,	// (0x00014171) list_set_graphic_pane_t1_copy1

0xbcda,	// (0x0001784d) rs_clock_indi_pane_g1

0xf026,	// (0x0001ab99) rs_clock_indi_pane_t1

0xf034,	// (0x0001aba7) rs_indi_pane

0xf03c,	// (0x0001abaf) rs_indi_pane_g1

0xf045,	// (0x0001abb8) rs_indi_pane_g2

0xf04e,	// (0x0001abc1) rs_indi_pane_g3

0x0002,

0xfeb3,	// (0x0001ba26) rs_indi_pane_g

0x88e8,	// (0x0001445b) bg_popup_preview_window_pane_cp03

0xf057,	// (0x0001abca) popup_fep_tooltip_window_t1

0xcb5c,	// (0x000186cf) popup_note2_window_g2_ParamLimits

0xcb5c,	// (0x000186cf) popup_note2_window_g2

0x0001,

0xfc40,	// (0x0001b7b3) popup_note2_window_g_ParamLimits

0xfc40,	// (0x0001b7b3) popup_note2_window_g

0xd146,	// (0x00018cb9) bg_popup_sub_pane_cp11_ParamLimits

0xd153,	// (0x00018cc6) cell_ai3_links_pane_g1_ParamLimits

0xd16a,	// (0x00018cdd) cell_ai3_links_pane_t1

0x6c70,	// (0x000127e3) set_text_pane_t1_copy1_ParamLimits

0x87fc,	// (0x0001436f) cell_graphic_popup_pane_cp2_ParamLimits

0x87fc,	// (0x0001436f) cell_graphic_popup_pane_cp2

0xf065,	// (0x0001abd8) cell_graphic_popup_pane_g1_cp2

0x7209,	// (0x00012d7c) cell_graphic_popup_pane_g2_cp2

0xf06d,	// (0x0001abe0) cell_graphic_popup_pane_g3_cp2

0xf075,	// (0x0001abe8) cell_graphic_popup_pane_t2_cp2

0x721a,	// (0x00012d8d) grid_highlight_pane_cp3_cp2

0x7f48,	// (0x00013abb) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x7a15,	// (0x00013588) main_tmo_pane_ParamLimits

0xd503,	// (0x00019076) popup_tmo_big_image_note_window

0xe6ce,	// (0x0001a241) cell_ai5_widget_list_pane

0xe6d6,	// (0x0001a249) cell_ai5_widget_lrg_icon_pane

0xecae,	// (0x0001a821) tmo_note_info_pane_t1_ParamLimits

0xecc3,	// (0x0001a836) tmo_note_info_pane_t2_ParamLimits

0xecd8,	// (0x0001a84b) tmo_note_info_pane_t3_ParamLimits

0xeced,	// (0x0001a860) tmo_note_info_pane_t4_ParamLimits

0xecff,	// (0x0001a872) tmo_note_info_pane_t5_ParamLimits

0xfea1,	// (0x0001ba14) tmo_note_info_pane_t_ParamLimits

0xee1d,	// (0x0001a990) settings_container_pane_ParamLimits

0xefee,	// (0x0001ab61) indicator_popup_pane_cp5

0xefee,	// (0x0001ab61) indicator_popup_pane_cp6

0xaed5,	// (0x00016a48) list_set_graphic_pane_copy1_ParamLimits

0x3ac5,	// (0x0000f638) bg_popup_window_pane_cp23

0xf083,	// (0x0001abf6) popup_tmo_big_image_note_window_g1

0xf08d,	// (0x0001ac00) popup_tmo_big_image_note_window_t1

0xf09d,	// (0x0001ac10) popup_tmo_big_image_note_window_t2

0xf0ad,	// (0x0001ac20) popup_tmo_big_image_note_window_t3

0x0002,

0xfeba,	// (0x0001ba2d) popup_tmo_big_image_note_window_t

0xbcda,	// (0x0001784d) cell_ai5_widget_lrg_icon_pane_g1

0xf0bd,	// (0x0001ac30) cell_ai5_widget_lrg_icon_pane_t1

0xf0cb,	// (0x0001ac3e) cell_ai5_widget_list_row_pane_ParamLimits

0xf0cb,	// (0x0001ac3e) cell_ai5_widget_list_row_pane

0xf0e2,	// (0x0001ac55) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf0e2,	// (0x0001ac55) cell_ai5_widget_list_row_pane_g1

0xf0ef,	// (0x0001ac62) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf0ef,	// (0x0001ac62) cell_ai5_widget_list_row_pane_t1

0xf120,	// (0x0001ac93) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf120,	// (0x0001ac93) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfec1,	// (0x0001ba34) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfec1,	// (0x0001ba34) cell_ai5_widget_list_row_pane_t

0x4666,	// (0x000101d9) main_fep_vtchi_ss_pane

0xf170,	// (0x0001ace3) popup_fep_char_pre_window

0xf178,	// (0x0001aceb) popup_fep_ituss_window

0xf1a4,	// (0x0001ad17) popup_fep_vkbss_window

0x8c14,	// (0x00014787) grid_vkbss_keypad_pane_ParamLimits

0x8c14,	// (0x00014787) grid_vkbss_keypad_pane

0xf1e4,	// (0x0001ad57) ituss_keypad_pane

0x692f,	// (0x000124a2) aid_vkbss_key_offset_ParamLimits

0x692f,	// (0x000124a2) aid_vkbss_key_offset

0x693b,	// (0x000124ae) cell_vkbss_key_pane_ParamLimits

0x693b,	// (0x000124ae) cell_vkbss_key_pane

0xf1f0,	// (0x0001ad63) bg_cell_vkbss_key_g1_ParamLimits

0xf1f0,	// (0x0001ad63) bg_cell_vkbss_key_g1

0xf1fc,	// (0x0001ad6f) cell_vkbss_key_3p_pane_ParamLimits

0xf1fc,	// (0x0001ad6f) cell_vkbss_key_3p_pane

0xf232,	// (0x0001ada5) cell_vkbss_key_g1_ParamLimits

0xf232,	// (0x0001ada5) cell_vkbss_key_g1

0xf268,	// (0x0001addb) cell_vkbss_key_t1_ParamLimits

0xf268,	// (0x0001addb) cell_vkbss_key_t1

0x6993,	// (0x00012506) cell_ituss_key_pane_ParamLimits

0x6993,	// (0x00012506) cell_ituss_key_pane

0xf2c4,	// (0x0001ae37) bg_cell_ituss_key_g1_ParamLimits

0xf2c4,	// (0x0001ae37) bg_cell_ituss_key_g1

0xf2d0,	// (0x0001ae43) cell_ituss_key_pane_g1_ParamLimits

0xf2d0,	// (0x0001ae43) cell_ituss_key_pane_g1

0x69a4,	// (0x00012517) cell_ituss_key_pane_g2_ParamLimits

0x69a4,	// (0x00012517) cell_ituss_key_pane_g2

0x0005,

0xfec8,	// (0x0001ba3b) cell_ituss_key_pane_g_ParamLimits

0xfec8,	// (0x0001ba3b) cell_ituss_key_pane_g

0x6a28,	// (0x0001259b) cell_ituss_key_t1_ParamLimits

0x6a28,	// (0x0001259b) cell_ituss_key_t1

0x6a62,	// (0x000125d5) cell_ituss_key_t2_ParamLimits

0x6a62,	// (0x000125d5) cell_ituss_key_t2

0x6a94,	// (0x00012607) cell_ituss_key_t3_ParamLimits

0x6a94,	// (0x00012607) cell_ituss_key_t3

0x6ac5,	// (0x00012638) cell_ituss_key_t4_ParamLimits

0x6ac5,	// (0x00012638) cell_ituss_key_t4

0x0004,

0xfed5,	// (0x0001ba48) cell_ituss_key_t_ParamLimits

0xfed5,	// (0x0001ba48) cell_ituss_key_t

0xf2f6,	// (0x0001ae69) cell_vkbss_key_3p_pane_g1

0xf2fe,	// (0x0001ae71) cell_vkbss_key_3p_pane_g2

0xf306,	// (0x0001ae79) cell_vkbss_key_3p_pane_g3

0x0002,

0xfee0,	// (0x0001ba53) cell_vkbss_key_3p_pane_g

0x88e8,	// (0x0001445b) bg_popup_fep_char_preview_window_cp02

0xf30e,	// (0x0001ae81) popup_fep_char_pre_window_t1

0xe64f,	// (0x0001a1c2) main_ai5_sk_pane

0xed79,	// (0x0001a8ec) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xed85,	// (0x0001a8f8) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xc55f,	// (0x000180d2) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xed9a,	// (0x0001a90d) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeac,	// (0x0001ba1f) cell_contacts_ai5_widget_pane_g_ParamLimits

0xeda6,	// (0x0001a919) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x7a15,	// (0x00013588) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf31c,	// (0x0001ae8f) main_ai5_sk_pane_g1

0x970f,	// (0x00015282) popup_query_code_window_g1

0xf18e,	// (0x0001ad01) popup_fep_vkb_icf_pane

0xf1bb,	// (0x0001ad2e) popup_fep_vtchi_icf_pane

0xf325,	// (0x0001ae98) bg_icf_pane

0xf325,	// (0x0001ae98) list_vkb_icf_pane

0xf331,	// (0x0001aea4) bg_icf_pane_cp01

0xf344,	// (0x0001aeb7) vtchi_icf_list_pane

0xf3a4,	// (0x0001af17) list_vkb_icf_pane_t1_ParamLimits

0xf3a4,	// (0x0001af17) list_vkb_icf_pane_t1

0xf3c5,	// (0x0001af38) vtchi_icf_list_pane_t1_ParamLimits

0xf3c5,	// (0x0001af38) vtchi_icf_list_pane_t1

0xf178,	// (0x0001aceb) popup_fep_ituss_window_ParamLimits

0xf1bb,	// (0x0001ad2e) popup_fep_vtchi_icf_pane_ParamLimits

0xf1e4,	// (0x0001ad57) ituss_keypad_pane_ParamLimits

0x6925,	// (0x00012498) ituss_sks_pane

0xf325,	// (0x0001ae98) bg_icf_pane_ParamLimits

0xf148,	// (0x0001acbb) icf_edit_indi_pane_ParamLimits

0xf148,	// (0x0001acbb) icf_edit_indi_pane

0xf325,	// (0x0001ae98) list_vkb_icf_pane_ParamLimits

0xf331,	// (0x0001aea4) bg_icf_pane_cp01_ParamLimits

0xf163,	// (0x0001acd6) icf_edit_indi_pane_cp01_ParamLimits

0xf163,	// (0x0001acd6) icf_edit_indi_pane_cp01

0xf344,	// (0x0001aeb7) vtchi_query_pane

0xe4cb,	// (0x0001a03e) icf_edit_indi_pane_g1_ParamLimits

0xe4cb,	// (0x0001a03e) icf_edit_indi_pane_g1

0xf43a,	// (0x0001afad) icf_edit_indi_pane_g2_ParamLimits

0xf43a,	// (0x0001afad) icf_edit_indi_pane_g2

0x0001,

0xff0b,	// (0x0001ba7e) icf_edit_indi_pane_g_ParamLimits

0xff0b,	// (0x0001ba7e) icf_edit_indi_pane_g

0xf44e,	// (0x0001afc1) icf_edit_indi_pane_t1

0xf3e3,	// (0x0001af56) bg_input_focus_pane_cp042

0x73ed,	// (0x00012f60) vtchi_button_pane

0xf3ec,	// (0x0001af5f) vtchi_query_pane_t1

0xf3fa,	// (0x0001af6d) vtchi_query_pane_t2

0xf408,	// (0x0001af7b) vtchi_query_pane_t3

0x0002,

0xfefa,	// (0x0001ba6d) vtchi_query_pane_t

0x4666,	// (0x000101d9) bg_button_pane_cp13

0xf416,	// (0x0001af89) vtchi_button_pane_g1

0x6b08,	// (0x0001267b) ituss_sks_pane_g1

0x6b13,	// (0x00012686) ituss_sks_pane_g2

0x0001,

0xff01,	// (0x0001ba74) ituss_sks_pane_g

0xf41e,	// (0x0001af91) ituss_sks_pane_t1

0xf42c,	// (0x0001af9f) ituss_sks_pane_t2

0x0001,

0xff06,	// (0x0001ba79) ituss_sks_pane_t

0xb70d,	// (0x00017280) indicator_nsta_pane_cp_g1

0xb716,	// (0x00017289) indicator_nsta_pane_cp_g2

0xb71e,	// (0x00017291) indicator_nsta_pane_cp_g3

0xb726,	// (0x00017299) indicator_nsta_pane_cp_g4

0xb716,	// (0x00017289) indicator_nsta_pane_cp_g5

0xb71e,	// (0x00017291) indicator_nsta_pane_cp_g6

0x0005,

0xfa7e,	// (0x0001b5f1) indicator_nsta_pane_cp_g

0xe227,	// (0x00019d9a) cell_graphic2_pane_t2_ParamLimits

0xe227,	// (0x00019d9a) cell_graphic2_pane_t2

0x0001,

0xfd97,	// (0x0001b90a) cell_graphic2_pane_t_ParamLimits

0xfd97,	// (0x0001b90a) cell_graphic2_pane_t

0xe253,	// (0x00019dc6) cell_graphic2_control_pane_t1

0x8307,	// (0x00013e7a) signal_pane_g3_ParamLimits

0x8307,	// (0x00013e7a) signal_pane_g3

0x8319,	// (0x00013e8c) signal_pane_g4_ParamLimits

0x8319,	// (0x00013e8c) signal_pane_g4

0xf132,	// (0x0001aca5) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf132,	// (0x0001aca5) cell_ai5_widget_list_row_pane_t3

0xf2e4,	// (0x0001ae57) cell_ituss_key_pane_t1_ParamLimits

0xf2e4,	// (0x0001ae57) cell_ituss_key_pane_t1

0x930f,	// (0x00014e82) form_field_data_wide_pane_vc_t2_ParamLimits

0x930f,	// (0x00014e82) form_field_data_wide_pane_vc_t2

0x9323,	// (0x00014e96) form_field_data_wide_pane_vc_t3_ParamLimits

0x9323,	// (0x00014e96) form_field_data_wide_pane_vc_t3

0x0002,

0xf7da,	// (0x0001b34d) form_field_data_wide_pane_vc_t_ParamLimits

0xf7da,	// (0x0001b34d) form_field_data_wide_pane_vc_t

0xb3b7,	// (0x00016f2a) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb3b7,	// (0x00016f2a) form_field_slider_wide_pane_vc_t3

0xb495,	// (0x00017008) form_field_popup_wide_pane_vc_t2_ParamLimits

0xb495,	// (0x00017008) form_field_popup_wide_pane_vc_t2

0xb4ac,	// (0x0001701f) form_field_popup_wide_pane_vc_t3_ParamLimits

0xb4ac,	// (0x0001701f) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa6d,	// (0x0001b5e0) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa6d,	// (0x0001b5e0) form_field_popup_wide_pane_vc_t

0x66df,	// (0x00012252) aid_fshwr2_btn_pane_ParamLimits

0x66ef,	// (0x00012262) aid_fshwr2_syb_pane_ParamLimits

0x6703,	// (0x00012276) aid_fshwr2_txt_pane_ParamLimits

0x5f0e,	// (0x00011a81) fshwr2_bg_pane_ParamLimits

0x6713,	// (0x00012286) fshwr2_func_candi_pane_ParamLimits

0x6737,	// (0x000122aa) fshwr2_hwr_syb_pane_ParamLimits

0x6751,	// (0x000122c4) fshwr2_icf_pane_ParamLimits

0xb31d,	// (0x00016e90) list_double_graphic_pane_vc_g4_ParamLimits

0xb31d,	// (0x00016e90) list_double_graphic_pane_vc_g4

0x69c4,	// (0x00012537) cell_ituss_key_pane_g3_ParamLimits

0x69c4,	// (0x00012537) cell_ituss_key_pane_g3

0x6af6,	// (0x00012669) cell_ituss_key_t5_ParamLimits

0x6af6,	// (0x00012669) cell_ituss_key_t5

0xf1a4,	// (0x0001ad17) popup_fep_vkbss_window_ParamLimits

0xe659,	// (0x0001a1cc) aid_cell_ai5_quarter

0xf44e,	// (0x0001afc1) icf_edit_indi_pane_t1_ParamLimits

0x6f62,	// (0x00012ad5) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x6f62,	// (0x00012ad5) aid_tch_indicator_popup_pane_cp2

0x6f75,	// (0x00012ae8) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x6f75,	// (0x00012ae8) aid_tch_query_popup_data_pane_cp2

0x96b7,	// (0x0001522a) aid_tch_query_popup_pane_ParamLimits

0x96b7,	// (0x0001522a) aid_tch_query_popup_pane

0x96b7,	// (0x0001522a) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x96b7,	// (0x0001522a) aid_tch_query_popup_data_pane_cp1

0x8c14,	// (0x00014787) cell_fshwr2_syb_bg_pane_ParamLimits

0x6851,	// (0x000123c4) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0x6865,	// (0x000123d8) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xf18e,	// (0x0001ad01) popup_fep_vkb_icf_pane_ParamLimits

0x651f,	// (0x00012092) bg_popup_fep_char_preview_window_g10

0xe796,	// (0x0001a309) cell_ai5_widget_pane_g11_ParamLimits

0xe796,	// (0x0001a309) cell_ai5_widget_pane_g11

0xe7a2,	// (0x0001a315) cell_ai5_widget_pane_g12_ParamLimits

0xe7a2,	// (0x0001a315) cell_ai5_widget_pane_g12

0xe7ae,	// (0x0001a321) cell_ai5_widget_pane_g13_ParamLimits

0xe7ae,	// (0x0001a321) cell_ai5_widget_pane_g13

0xe8dd,	// (0x0001a450) cell_ai5_widget_pane_t11_ParamLimits

0xe8dd,	// (0x0001a450) cell_ai5_widget_pane_t11

0xe8ef,	// (0x0001a462) cell_ai5_widget_pane_t12_ParamLimits

0xe8ef,	// (0x0001a462) cell_ai5_widget_pane_t12

0x69d0,	// (0x00012543) cell_ituss_key_pane_g4_ParamLimits

0x69d0,	// (0x00012543) cell_ituss_key_pane_g4

0x69ec,	// (0x0001255f) cell_ituss_key_pane_g5_ParamLimits

0x69ec,	// (0x0001255f) cell_ituss_key_pane_g5

0x6a08,	// (0x0001257b) cell_ituss_key_pane_g6_ParamLimits

0x6a08,	// (0x0001257b) cell_ituss_key_pane_g6

0x915c,	// (0x00014ccf) bg_icf_pane_g1

0xf34c,	// (0x0001aebf) bg_icf_pane_g2

0xf358,	// (0x0001aecb) bg_icf_pane_g3

0xf362,	// (0x0001aed5) bg_icf_pane_g4

0xf36e,	// (0x0001aee1) bg_icf_pane_g5

0xf378,	// (0x0001aeeb) bg_icf_pane_g6

0xf384,	// (0x0001aef7) bg_icf_pane_g7

0xf38e,	// (0x0001af01) bg_icf_pane_g8

0xf39a,	// (0x0001af0d) bg_icf_pane_g9

0x0008,

0xfee7,	// (0x0001ba5a) bg_icf_pane_g

0xf1d1,	// (0x0001ad44) popup_hyb_candi_window_ParamLimits

0xf1d1,	// (0x0001ad44) popup_hyb_candi_window

0x927e,	// (0x00014df1) bg_popup_sub_pane_cp01_ParamLimits

0x927e,	// (0x00014df1) bg_popup_sub_pane_cp01

0xf467,	// (0x0001afda) entry_hyb_candi_pane_ParamLimits

0xf467,	// (0x0001afda) entry_hyb_candi_pane

0xf476,	// (0x0001afe9) grid_hyb_candi_pane_ParamLimits

0xf476,	// (0x0001afe9) grid_hyb_candi_pane

0xf48b,	// (0x0001affe) grid_hyb_phrase_pane_ParamLimits

0xf48b,	// (0x0001affe) grid_hyb_phrase_pane

0xf49a,	// (0x0001b00d) cell_hyb_candi_pane_ParamLimits

0xf49a,	// (0x0001b00d) cell_hyb_candi_pane

0xf4bd,	// (0x0001b030) cell_hyb_candi_scroll_pane

0x822d,	// (0x00013da0) cell_hyb_candi_pane_g1

0xf4c6,	// (0x0001b039) cell_hyb_candi_pane_t1

0xf4d4,	// (0x0001b047) cell_hyb_phrase_pane

0x822d,	// (0x00013da0) cell_hyb_phrase_pane_g1

0xf4dd,	// (0x0001b050) cell_hyb_phrase_pane_t1

0xf4eb,	// (0x0001b05e) entry_hyb_candi_pane_t1

0x88e8,	// (0x0001445b) input_focus_pane_cp06

0xf4f9,	// (0x0001b06c) cell_hyb_candi_scroll_pane_g1

0xf501,	// (0x0001b074) cell_hyb_candi_scroll_pane_g1_aid

0xf509,	// (0x0001b07c) cell_hyb_candi_scroll_pane_g2

0xf511,	// (0x0001b084) cell_hyb_candi_scroll_pane_g2_aid

0xf519,	// (0x0001b08c) cell_hyb_candi_scroll_pane_g3

0xf521,	// (0x0001b094) cell_hyb_candi_scroll_pane_g4
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

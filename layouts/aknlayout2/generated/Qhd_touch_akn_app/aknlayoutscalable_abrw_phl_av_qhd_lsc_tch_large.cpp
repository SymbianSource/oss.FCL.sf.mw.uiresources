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

#include "aknlayoutscalable_abrw_phl_av_qhd_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_phl_av_qhd_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x000514b8 };

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
0xb3a6,	// (0x0005c85e) Screen

0xb3b2,	// (0x0005c86a) application_window_ParamLimits

0xb3b2,	// (0x0005c86a) application_window

0xdc06,	// (0x0005f0be) screen_g1

0xb3ea,	// (0x0005c8a2) area_bottom_pane_ParamLimits

0xb3ea,	// (0x0005c8a2) area_bottom_pane

0xf27d,	// (0x00060735) area_top_pane_ParamLimits

0xf27d,	// (0x00060735) area_top_pane

0xf31b,	// (0x000607d3) main_pane_ParamLimits

0xf31b,	// (0x000607d3) main_pane

0x2bea,	// (0x000540a2) misc_graphics

0xd301,	// (0x0005e7b9) battery_pane_ParamLimits

0xd301,	// (0x0005e7b9) battery_pane

0x570a,	// (0x00056bc2) bg_status_flat_pane_g8

0x5712,	// (0x00056bca) bg_status_flat_pane_g9

0x4af0,	// (0x00055fa8) context_pane_ParamLimits

0x4af0,	// (0x00055fa8) context_pane

0xd46c,	// (0x0005e924) navi_pane_ParamLimits

0xd46c,	// (0x0005e924) navi_pane

0xd4ea,	// (0x0005e9a2) signal_pane_ParamLimits

0xd4ea,	// (0x0005e9a2) signal_pane

0x0008,

0xf854,	// (0x00060d0c) bg_status_flat_pane_g

0xd57a,	// (0x0005ea32) status_pane_g1_ParamLimits

0xd57a,	// (0x0005ea32) status_pane_g1

0xd590,	// (0x0005ea48) status_pane_g2_ParamLimits

0xd590,	// (0x0005ea48) status_pane_g2

0x4d17,	// (0x000561cf) status_pane_g3_ParamLimits

0x4d17,	// (0x000561cf) status_pane_g3

0x0004,

0xf780,	// (0x00060c38) status_pane_g_ParamLimits

0xf780,	// (0x00060c38) status_pane_g

0xd59c,	// (0x0005ea54) title_pane_ParamLimits

0xd59c,	// (0x0005ea54) title_pane

0xd5ff,	// (0x0005eab7) uni_indicator_pane_ParamLimits

0xd5ff,	// (0x0005eab7) uni_indicator_pane

0x4958,	// (0x00055e10) bg_list_pane_ParamLimits

0x4958,	// (0x00055e10) bg_list_pane

0x3525,	// (0x000549dd) find_pane

0x4f16,	// (0x000563ce) listscroll_app_pane_ParamLimits

0x4f16,	// (0x000563ce) listscroll_app_pane

0x4984,	// (0x00055e3c) listscroll_form_pane

0x0b8d,	// (0x00052045) listscroll_gen_pane_ParamLimits

0x0b8d,	// (0x00052045) listscroll_gen_pane

0x0ba1,	// (0x00052059) listscroll_set_pane

0x628b,	// (0x00057743) main_idle_act_pane

0x4654,	// (0x00055b0c) main_idle_trad_pane

0x4654,	// (0x00055b0c) main_list_empty_pane

0x4978,	// (0x00055e30) main_midp_pane

0x499e,	// (0x00055e56) main_pane_g1_ParamLimits

0x499e,	// (0x00055e56) main_pane_g1

0xbfc2,	// (0x0005d47a) popup_ai_message_window_ParamLimits

0xbfc2,	// (0x0005d47a) popup_ai_message_window

0xc053,	// (0x0005d50b) popup_fep_china_uni_window_ParamLimits

0xc053,	// (0x0005d50b) popup_fep_china_uni_window

0x0cc1,	// (0x00052179) popup_fep_japan_candidate_window_ParamLimits

0x0cc1,	// (0x00052179) popup_fep_japan_candidate_window

0x0ce1,	// (0x00052199) popup_fep_japan_predictive_window_ParamLimits

0x0ce1,	// (0x00052199) popup_fep_japan_predictive_window

0xc0af,	// (0x0005d567) popup_find_window

0xc0cc,	// (0x0005d584) popup_grid_graphic_window_ParamLimits

0xc0cc,	// (0x0005d584) popup_grid_graphic_window

0x0d4a,	// (0x00052202) popup_large_graphic_colour_window

0xc170,	// (0x0005d628) popup_menu_window_ParamLimits

0xc170,	// (0x0005d628) popup_menu_window

0xc342,	// (0x0005d7fa) popup_note_image_window

0xc308,	// (0x0005d7c0) popup_note_wait_window_ParamLimits

0xc308,	// (0x0005d7c0) popup_note_wait_window

0xc35a,	// (0x0005d812) popup_note_window_ParamLimits

0xc35a,	// (0x0005d812) popup_note_window

0xc400,	// (0x0005d8b8) popup_query_code_window_ParamLimits

0xc400,	// (0x0005d8b8) popup_query_code_window

0x0f92,	// (0x0005244a) popup_query_data_code_window_ParamLimits

0x0f92,	// (0x0005244a) popup_query_data_code_window

0xc43a,	// (0x0005d8f2) popup_query_data_window_ParamLimits

0xc43a,	// (0x0005d8f2) popup_query_data_window

0xc4bc,	// (0x0005d974) popup_query_sat_info_window_ParamLimits

0xc4bc,	// (0x0005d974) popup_query_sat_info_window

0xc553,	// (0x0005da0b) popup_snote_single_graphic_window_ParamLimits

0xc553,	// (0x0005da0b) popup_snote_single_graphic_window

0xc553,	// (0x0005da0b) popup_snote_single_text_window_ParamLimits

0xc553,	// (0x0005da0b) popup_snote_single_text_window

0x1019,	// (0x000524d1) popup_sub_window_general

0x1149,	// (0x00052601) popup_window_general_ParamLimits

0x1149,	// (0x00052601) popup_window_general

0x49ac,	// (0x00055e64) power_save_pane

0xbe47,	// (0x0005d2ff) control_pane_g1_ParamLimits

0xbe47,	// (0x0005d2ff) control_pane_g1

0xbe70,	// (0x0005d328) control_pane_g2_ParamLimits

0xbe70,	// (0x0005d328) control_pane_g2

0x491b,	// (0x00055dd3) control_pane_g3_ParamLimits

0x491b,	// (0x00055dd3) control_pane_g3

0x0007,

0xf768,	// (0x00060c20) control_pane_g_ParamLimits

0xf768,	// (0x00060c20) control_pane_g

0xbeb1,	// (0x0005d369) control_pane_t1_ParamLimits

0xbeb1,	// (0x0005d369) control_pane_t1

0xbf17,	// (0x0005d3cf) control_pane_t2_ParamLimits

0xbf17,	// (0x0005d3cf) control_pane_t2

0x0002,

0xf779,	// (0x00060c31) control_pane_t_ParamLimits

0xf779,	// (0x00060c31) control_pane_t

0xd1ae,	// (0x0005e666) navi_navi_volume_pane_cp1

0xd1b6,	// (0x0005e66e) status_small_icon_pane

0x4850,	// (0x00055d08) status_small_pane_g1_ParamLimits

0x4850,	// (0x00055d08) status_small_pane_g1

0xd1be,	// (0x0005e676) status_small_pane_g2_ParamLimits

0xd1be,	// (0x0005e676) status_small_pane_g2

0xd1ca,	// (0x0005e682) status_small_pane_g3_ParamLimits

0xd1ca,	// (0x0005e682) status_small_pane_g3

0xd1d6,	// (0x0005e68e) status_small_pane_g4_ParamLimits

0xd1d6,	// (0x0005e68e) status_small_pane_g4

0xd1e2,	// (0x0005e69a) status_small_pane_g5_ParamLimits

0xd1e2,	// (0x0005e69a) status_small_pane_g5

0xd1f0,	// (0x0005e6a8) status_small_pane_g6_ParamLimits

0xd1f0,	// (0x0005e6a8) status_small_pane_g6

0x0007,

0xf757,	// (0x00060c0f) status_small_pane_g_ParamLimits

0xf757,	// (0x00060c0f) status_small_pane_g

0xd21f,	// (0x0005e6d7) status_small_pane_t1

0xd241,	// (0x0005e6f9) status_small_wait_pane_ParamLimits

0xd241,	// (0x0005e6f9) status_small_wait_pane

0xd056,	// (0x0005e50e) aid_levels_signal_ParamLimits

0xd056,	// (0x0005e50e) aid_levels_signal

0xd06e,	// (0x0005e526) signal_pane_g1_ParamLimits

0xd06e,	// (0x0005e526) signal_pane_g1

0xd089,	// (0x0005e541) signal_pane_g2_ParamLimits

0xd089,	// (0x0005e541) signal_pane_g2

0x0003,

0xf6e8,	// (0x00060ba0) signal_pane_g_ParamLimits

0xf6e8,	// (0x00060ba0) signal_pane_g

0x4131,	// (0x000555e9) context_pane_g1

0xb5c8,	// (0x0005ca80) title_pane_g1

0xb5ff,	// (0x0005cab7) title_pane_t1

0x2c92,	// (0x0005414a) title_pane_t2

0x2cb8,	// (0x00054170) title_pane_t3

0x0002,

0xf532,	// (0x000609ea) title_pane_t

0xd627,	// (0x0005eadf) aid_levels_battery_ParamLimits

0xd627,	// (0x0005eadf) aid_levels_battery

0xd643,	// (0x0005eafb) battery_pane_g1_ParamLimits

0xd643,	// (0x0005eafb) battery_pane_g1

0xd660,	// (0x0005eb18) battery_pane_g2_ParamLimits

0xd660,	// (0x0005eb18) battery_pane_g2

0x0001,

0xf78b,	// (0x00060c43) battery_pane_g_ParamLimits

0xf78b,	// (0x00060c43) battery_pane_g

0xd821,	// (0x0005ecd9) uni_indicator_pane_g1

0xd837,	// (0x0005ecef) uni_indicator_pane_g2

0xd84d,	// (0x0005ed05) uni_indicator_pane_g3

0x0005,

0xf8fc,	// (0x00060db4) uni_indicator_pane_g

0x44d2,	// (0x0005598a) navi_icon_pane_ParamLimits

0x44d2,	// (0x0005598a) navi_icon_pane

0x4410,	// (0x000558c8) navi_midp_pane

0x44ee,	// (0x000559a6) navi_navi_pane

0x44f8,	// (0x000559b0) navi_text_pane_ParamLimits

0x44f8,	// (0x000559b0) navi_text_pane

0xdc06,	// (0x0005f0be) status_small_wait_pane_g1

0x310d,	// (0x000545c5) status_small_wait_pane_g2

0x0001,

0xf8f7,	// (0x00060daf) status_small_wait_pane_g

0x5d65,	// (0x0005721d) navi_navi_icon_text_pane

0x5d6d,	// (0x00057225) navi_navi_pane_g1_ParamLimits

0x5d6d,	// (0x00057225) navi_navi_pane_g1

0x5d7f,	// (0x00057237) navi_navi_pane_g2_ParamLimits

0x5d7f,	// (0x00057237) navi_navi_pane_g2

0x0001,

0xf8c5,	// (0x00060d7d) navi_navi_pane_g_ParamLimits

0xf8c5,	// (0x00060d7d) navi_navi_pane_g

0x5d91,	// (0x00057249) navi_navi_tabs_pane

0x5d9a,	// (0x00057252) navi_navi_text_pane

0x5d65,	// (0x0005721d) navi_navi_volume_pane

0x5d41,	// (0x000571f9) navi_text_pane_t1

0x5d35,	// (0x000571ed) navi_icon_pane_g1

0x5c88,	// (0x00057140) navi_navi_text_pane_t1

0x14e4,	// (0x0005299c) navi_navi_volume_pane_g1

0x14ec,	// (0x000529a4) volume_small_pane

0x5bee,	// (0x000570a6) navi_navi_icon_text_pane_g1

0x5bf6,	// (0x000570ae) navi_navi_icon_text_pane_t1

0x44ee,	// (0x000559a6) navi_tabs_2_long_pane

0x44ee,	// (0x000559a6) navi_tabs_2_pane

0x44ee,	// (0x000559a6) navi_tabs_3_long_pane

0x44ee,	// (0x000559a6) navi_tabs_3_pane

0x44ee,	// (0x000559a6) navi_tabs_4_pane

0x14c4,	// (0x0005297c) tabs_2_active_pane_ParamLimits

0x14c4,	// (0x0005297c) tabs_2_active_pane

0x14d4,	// (0x0005298c) tabs_2_passive_pane_ParamLimits

0x14d4,	// (0x0005298c) tabs_2_passive_pane

0x1492,	// (0x0005294a) tabs_3_active_pane_ParamLimits

0x1492,	// (0x0005294a) tabs_3_active_pane

0x14a2,	// (0x0005295a) tabs_3_passive_pane_ParamLimits

0x14a2,	// (0x0005295a) tabs_3_passive_pane

0x14b3,	// (0x0005296b) tabs_3_passive_pane_cp_ParamLimits

0x14b3,	// (0x0005296b) tabs_3_passive_pane_cp

0x144e,	// (0x00052906) tabs_4_active_pane_ParamLimits

0x144e,	// (0x00052906) tabs_4_active_pane

0x145f,	// (0x00052917) tabs_4_passive_pane_ParamLimits

0x145f,	// (0x00052917) tabs_4_passive_pane

0x1470,	// (0x00052928) tabs_4_passive_pane_cp_ParamLimits

0x1470,	// (0x00052928) tabs_4_passive_pane_cp

0x1481,	// (0x00052939) tabs_4_passive_pane_cp2_ParamLimits

0x1481,	// (0x00052939) tabs_4_passive_pane_cp2

0x142a,	// (0x000528e2) tabs_2_long_active_pane_ParamLimits

0x142a,	// (0x000528e2) tabs_2_long_active_pane

0x143c,	// (0x000528f4) tabs_2_long_passive_pane_ParamLimits

0x143c,	// (0x000528f4) tabs_2_long_passive_pane

0x13eb,	// (0x000528a3) tabs_3_long_active_pane_ParamLimits

0x13eb,	// (0x000528a3) tabs_3_long_active_pane

0x13fe,	// (0x000528b6) tabs_3_long_passive_pane_ParamLimits

0x13fe,	// (0x000528b6) tabs_3_long_passive_pane

0x1417,	// (0x000528cf) tabs_3_long_passive_pane_cp_ParamLimits

0x1417,	// (0x000528cf) tabs_3_long_passive_pane_cp

0x1391,	// (0x00052849) volume_small_pane_g1

0x139a,	// (0x00052852) volume_small_pane_g2

0x13a3,	// (0x0005285b) volume_small_pane_g3

0x13ac,	// (0x00052864) volume_small_pane_g4

0x13b5,	// (0x0005286d) volume_small_pane_g5

0x13be,	// (0x00052876) volume_small_pane_g6

0x13c7,	// (0x0005287f) volume_small_pane_g7

0x13d0,	// (0x00052888) volume_small_pane_g8

0x13d9,	// (0x00052891) volume_small_pane_g9

0x13e2,	// (0x0005289a) volume_small_pane_g10

0x0009,

0xf891,	// (0x00060d49) volume_small_pane_g

0x2f45,	// (0x000543fd) bg_active_tab_pane_cp2_ParamLimits

0x2f45,	// (0x000543fd) bg_active_tab_pane_cp2

0x2cd8,	// (0x00054190) tabs_3_active_pane_g1

0xb68b,	// (0x0005cb43) tabs_3_active_pane_t1

0x2f45,	// (0x000543fd) bg_passive_tab_pane_cp2_ParamLimits

0x2f45,	// (0x000543fd) bg_passive_tab_pane_cp2

0x2cd8,	// (0x00054190) tabs_3_passive_pane_g1

0xb68b,	// (0x0005cb43) tabs_3_passive_pane_t1

0x2f45,	// (0x000543fd) bg_active_tab_pane_cp3_ParamLimits

0x2f45,	// (0x000543fd) bg_active_tab_pane_cp3

0x2cf2,	// (0x000541aa) tabs_4_active_pane_g1

0xb69d,	// (0x0005cb55) tabs_4_active_pane_t1

0x2f45,	// (0x000543fd) bg_passive_tab_pane_cp3_ParamLimits

0x2f45,	// (0x000543fd) bg_passive_tab_pane_cp3

0x2cf2,	// (0x000541aa) tabs_4_1_passive_pane_g1

0xb69d,	// (0x0005cb55) tabs_4_1_passive_pane_t1

0x4978,	// (0x00055e30) list_highlight_pane_cp2

0xd8d3,	// (0x0005ed8b) list_set_pane_ParamLimits

0xd8d3,	// (0x0005ed8b) list_set_pane

0xd96d,	// (0x0005ee25) main_pane_set_t1_ParamLimits

0xd96d,	// (0x0005ee25) main_pane_set_t1

0xd98d,	// (0x0005ee45) main_pane_set_t2_ParamLimits

0xd98d,	// (0x0005ee45) main_pane_set_t2

0xd9a1,	// (0x0005ee59) main_pane_set_t3_ParamLimits

0xd9a1,	// (0x0005ee59) main_pane_set_t3

0xd9b3,	// (0x0005ee6b) main_pane_set_t4_ParamLimits

0xd9b3,	// (0x0005ee6b) main_pane_set_t4

0x0003,

0xf961,	// (0x00060e19) main_pane_set_t_ParamLimits

0xf961,	// (0x00060e19) main_pane_set_t

0xd9c5,	// (0x0005ee7d) setting_code_pane

0xd9cf,	// (0x0005ee87) setting_slider_graphic_pane

0xd9cf,	// (0x0005ee87) setting_slider_pane

0xd9cf,	// (0x0005ee87) setting_text_pane

0xd9cf,	// (0x0005ee87) setting_volume_pane

0xf498,	// (0x00060950) volume_set_pane

0x2cca,	// (0x00054182) bg_set_opt_pane_cp

0xf4a0,	// (0x00060958) setting_slider_pane_t1

0xf4b9,	// (0x00060971) setting_slider_pane_t2

0xf4d3,	// (0x0006098b) setting_slider_pane_t3

0x0002,

0xf539,	// (0x000609f1) setting_slider_pane_t

0xf4eb,	// (0x000609a3) slider_set_pane

0x2bea,	// (0x000540a2) bg_set_opt_pane_cp2

0x2d0c,	// (0x000541c4) setting_slider_graphic_pane_g1

0xf501,	// (0x000609b9) setting_slider_graphic_pane_t1

0xf511,	// (0x000609c9) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x000609f8) setting_slider_graphic_pane_t

0xf521,	// (0x000609d9) slider_set_pane_cp

0x2bea,	// (0x000540a2) input_focus_pane_cp1

0x6272,	// (0x0005772a) list_set_text_pane

0xdc06,	// (0x0005f0be) setting_text_pane_g1

0x2bea,	// (0x000540a2) input_focus_pane_cp2

0xdc06,	// (0x0005f0be) setting_code_pane_g1

0x2d15,	// (0x000541cd) setting_code_pane_t1

0xe931,	// (0x0005fde9) set_text_pane_t1_ParamLimits

0xe931,	// (0x0005fde9) set_text_pane_t1

0x3a0d,	// (0x00054ec5) set_opt_bg_pane_g1

0x3a15,	// (0x00054ecd) set_opt_bg_pane_g2

0x624c,	// (0x00057704) set_opt_bg_pane_g3

0x3a25,	// (0x00054edd) set_opt_bg_pane_g4

0x3a2d,	// (0x00054ee5) set_opt_bg_pane_g5

0x3a35,	// (0x00054eed) set_opt_bg_pane_g6

0x6256,	// (0x0005770e) set_opt_bg_pane_g7

0x625e,	// (0x00057716) set_opt_bg_pane_g8

0x6268,	// (0x00057720) set_opt_bg_pane_g9

0x0008,

0xf94e,	// (0x00060e06) set_opt_bg_pane_g

0x623f,	// (0x000576f7) slider_set_pane_g1

0x156b,	// (0x00052a23) slider_set_pane_g2

0x0006,

0xf93f,	// (0x00060df7) slider_set_pane_g

0x14f5,	// (0x000529ad) volume_set_pane_g1

0x14fd,	// (0x000529b5) volume_set_pane_g2

0x1505,	// (0x000529bd) volume_set_pane_g3

0x150d,	// (0x000529c5) volume_set_pane_g4

0x1515,	// (0x000529cd) volume_set_pane_g5

0x151d,	// (0x000529d5) volume_set_pane_g6

0x1525,	// (0x000529dd) volume_set_pane_g7

0x152d,	// (0x000529e5) volume_set_pane_g8

0x1535,	// (0x000529ed) volume_set_pane_g9

0x153d,	// (0x000529f5) volume_set_pane_g10

0x0009,

0xf917,	// (0x00060dcf) volume_set_pane_g

0xb6af,	// (0x0005cb67) indicator_pane_ParamLimits

0xb6af,	// (0x0005cb67) indicator_pane

0xb6d7,	// (0x0005cb8f) main_idle_pane_g2_ParamLimits

0xb6d7,	// (0x0005cb8f) main_idle_pane_g2

0xb70f,	// (0x0005cbc7) main_pane_idle_g1_ParamLimits

0xb70f,	// (0x0005cbc7) main_pane_idle_g1

0x2d64,	// (0x0005421c) popup_clock_digital_analogue_window_ParamLimits

0x2d64,	// (0x0005421c) popup_clock_digital_analogue_window

0xb736,	// (0x0005cbee) soft_indicator_pane_ParamLimits

0xb736,	// (0x0005cbee) soft_indicator_pane

0xb750,	// (0x0005cc08) wallpaper_pane_ParamLimits

0xb750,	// (0x0005cc08) wallpaper_pane

0xdc06,	// (0x0005f0be) wallpaper_pane_g1

0xb762,	// (0x0005cc1a) indicator_pane_g1_ParamLimits

0xb762,	// (0x0005cc1a) indicator_pane_g1

0x666b,	// (0x00057b23) navi_navi_icon_text_pane_srt_g1

0x2db6,	// (0x0005426e) soft_indicator_pane_t1

0x2dd0,	// (0x00054288) aid_ps_area_pane

0xb778,	// (0x0005cc30) aid_ps_clock_pane

0x2def,	// (0x000542a7) aid_ps_indicator_pane

0x2dfb,	// (0x000542b3) indicator_ps_pane_ParamLimits

0x2dfb,	// (0x000542b3) indicator_ps_pane

0x2e0a,	// (0x000542c2) power_save_pane_g1_ParamLimits

0x2e0a,	// (0x000542c2) power_save_pane_g1

0x2e16,	// (0x000542ce) power_save_pane_g2_ParamLimits

0x2e16,	// (0x000542ce) power_save_pane_g2

0xf25d,	// (0x00060715) aid_navinavi_width_pane

0x2dd0,	// (0x00054288) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x000609fd) power_save_pane_g_ParamLimits

0xf545,	// (0x000609fd) power_save_pane_g

0x2e24,	// (0x000542dc) power_save_pane_t1_ParamLimits

0x2e24,	// (0x000542dc) power_save_pane_t1

0xb778,	// (0x0005cc30) aid_ps_clock_pane_ParamLimits

0x2def,	// (0x000542a7) aid_ps_indicator_pane_ParamLimits

0x2e36,	// (0x000542ee) power_save_pane_t4_ParamLimits

0x2e36,	// (0x000542ee) power_save_pane_t4

0x0001,

0xf54a,	// (0x00060a02) power_save_pane_t_ParamLimits

0xf54a,	// (0x00060a02) power_save_pane_t

0x2e60,	// (0x00054318) power_save_t3_ParamLimits

0x2e60,	// (0x00054318) power_save_t3

0x2e4b,	// (0x00054303) power_save_t2_ParamLimits

0x2e4b,	// (0x00054303) power_save_t2

0x2e75,	// (0x0005432d) indicator_ps_pane_g1

0xb786,	// (0x0005cc3e) ai_gene_pane_ParamLimits

0xb786,	// (0x0005cc3e) ai_gene_pane

0xb79d,	// (0x0005cc55) ai_links_pane_ParamLimits

0xb79d,	// (0x0005cc55) ai_links_pane

0xb7b5,	// (0x0005cc6d) indicator_pane_cp1_ParamLimits

0xb7b5,	// (0x0005cc6d) indicator_pane_cp1

0xb7c4,	// (0x0005cc7c) main_pane_idle_g1_cp_ParamLimits

0xb7c4,	// (0x0005cc7c) main_pane_idle_g1_cp

0x2eae,	// (0x00054366) popup_ai_links_title_window

0xb7dc,	// (0x0005cc94) soft_indicator_pane_cp1_ParamLimits

0xb7dc,	// (0x0005cc94) soft_indicator_pane_cp1

0x602e,	// (0x000574e6) ai_links_pane_g1

0x6037,	// (0x000574ef) grid_ai_links_pane

0xd818,	// (0x0005ecd0) ai_gene_pane_1

0x601c,	// (0x000574d4) ai_gene_pane_2

0x6025,	// (0x000574dd) list_highlight_pane_cp4

0xd7f4,	// (0x0005ecac) cell_ai_link_pane_ParamLimits

0xd7f4,	// (0x0005ecac) cell_ai_link_pane

0x5fed,	// (0x000574a5) cell_ai_link_pane_g1

0x310d,	// (0x000545c5) cell_ai_link_pane_g2

0x0001,

0xf8f2,	// (0x00060daa) cell_ai_link_pane_g

0x2bea,	// (0x000540a2) grid_highlight_cp2

0x2bea,	// (0x000540a2) bg_popup_sub_pane_cp1

0x2ed1,	// (0x00054389) popup_ai_links_title_window_t1

0x5f3b,	// (0x000573f3) ai_gene_pane_1_g1_ParamLimits

0x5f3b,	// (0x000573f3) ai_gene_pane_1_g1

0x5f47,	// (0x000573ff) ai_gene_pane_1_g2_ParamLimits

0x5f47,	// (0x000573ff) ai_gene_pane_1_g2

0x0001,

0xf8e8,	// (0x00060da0) ai_gene_pane_1_g_ParamLimits

0xf8e8,	// (0x00060da0) ai_gene_pane_1_g

0x5f54,	// (0x0005740c) ai_gene_pane_1_t1_ParamLimits

0x5f54,	// (0x0005740c) ai_gene_pane_1_t1

0x5f88,	// (0x00057440) grid_ai_soft_ind_pane

0x5f26,	// (0x000573de) ai_gene_pane_2_t1_ParamLimits

0x5f26,	// (0x000573de) ai_gene_pane_2_t1

0xb7f0,	// (0x0005cca8) main_pane_empty_t1_ParamLimits

0xb7f0,	// (0x0005cca8) main_pane_empty_t1

0xb808,	// (0x0005ccc0) main_pane_empty_t2_ParamLimits

0xb808,	// (0x0005ccc0) main_pane_empty_t2

0xb81d,	// (0x0005ccd5) main_pane_empty_t3_ParamLimits

0xb81d,	// (0x0005ccd5) main_pane_empty_t3

0xb82f,	// (0x0005cce7) main_pane_empty_t4_ParamLimits

0xb82f,	// (0x0005cce7) main_pane_empty_t4

0xb841,	// (0x0005ccf9) main_pane_empty_t5_ParamLimits

0xb841,	// (0x0005ccf9) main_pane_empty_t5

0x0004,

0xf54f,	// (0x00060a07) main_pane_empty_t_ParamLimits

0xf54f,	// (0x00060a07) main_pane_empty_t

0x3ad4,	// (0x00054f8c) bg_popup_window_pane_ParamLimits

0x3ad4,	// (0x00054f8c) bg_popup_window_pane

0x5c96,	// (0x0005714e) find_popup_pane_cp2_ParamLimits

0x5c96,	// (0x0005714e) find_popup_pane_cp2

0x5ca2,	// (0x0005715a) heading_pane_ParamLimits

0x5ca2,	// (0x0005715a) heading_pane

0x2bea,	// (0x000540a2) bg_popup_sub_pane

0xd775,	// (0x0005ec2d) bg_popup_window_pane_g1_ParamLimits

0xd775,	// (0x0005ec2d) bg_popup_window_pane_g1

0xd784,	// (0x0005ec3c) bg_popup_window_pane_g2_ParamLimits

0xd784,	// (0x0005ec3c) bg_popup_window_pane_g2

0xd790,	// (0x0005ec48) bg_popup_window_pane_g3_ParamLimits

0xd790,	// (0x0005ec48) bg_popup_window_pane_g3

0xd79c,	// (0x0005ec54) bg_popup_window_pane_g4_ParamLimits

0xd79c,	// (0x0005ec54) bg_popup_window_pane_g4

0xd7ab,	// (0x0005ec63) bg_popup_window_pane_g5_ParamLimits

0xd7ab,	// (0x0005ec63) bg_popup_window_pane_g5

0xd7bb,	// (0x0005ec73) bg_popup_window_pane_g6_ParamLimits

0xd7bb,	// (0x0005ec73) bg_popup_window_pane_g6

0xd7c7,	// (0x0005ec7f) bg_popup_window_pane_g7_ParamLimits

0xd7c7,	// (0x0005ec7f) bg_popup_window_pane_g7

0xd7d6,	// (0x0005ec8e) bg_popup_window_pane_g8_ParamLimits

0xd7d6,	// (0x0005ec8e) bg_popup_window_pane_g8

0xd7e5,	// (0x0005ec9d) bg_popup_window_pane_g9_ParamLimits

0xd7e5,	// (0x0005ec9d) bg_popup_window_pane_g9

0x5c7c,	// (0x00057134) bg_popup_window_pane_g10_ParamLimits

0x5c7c,	// (0x00057134) bg_popup_window_pane_g10

0x0009,

0xf8b0,	// (0x00060d68) bg_popup_window_pane_g_ParamLimits

0xf8b0,	// (0x00060d68) bg_popup_window_pane_g

0x5ba5,	// (0x0005705d) bg_popup_heading_pane_ParamLimits

0x5ba5,	// (0x0005705d) bg_popup_heading_pane

0x1670,	// (0x00052b28) tabs_4_passive_pane_cp_srt_ParamLimits

0x1670,	// (0x00052b28) tabs_4_passive_pane_cp_srt

0x1682,	// (0x00052b3a) tabs_4_passive_pane_srt_ParamLimits

0x5bb9,	// (0x00057071) heading_pane_g2

0x1682,	// (0x00052b3a) tabs_4_passive_pane_srt

0x4f16,	// (0x000563ce) bg_passive_tab_pane_cp3_srt_ParamLimits

0x4f16,	// (0x000563ce) bg_passive_tab_pane_cp3_srt

0x5bc1,	// (0x00057079) heading_pane_t1_ParamLimits

0x5bc1,	// (0x00057079) heading_pane_t1

0x5bd8,	// (0x00057090) heading_pane_t2_ParamLimits

0x5bd8,	// (0x00057090) heading_pane_t2

0x0001,

0xf8ab,	// (0x00060d63) heading_pane_t_ParamLimits

0xf8ab,	// (0x00060d63) heading_pane_t

0x56d2,	// (0x00056b8a) bg_popup_heading_pane_g1

0x5781,	// (0x00056c39) bg_popup_heading_pane_g2

0x578b,	// (0x00056c43) bg_popup_heading_pane_g3

0x5795,	// (0x00056c4d) bg_popup_heading_pane_g4

0x579f,	// (0x00056c57) bg_popup_heading_pane_g5

0x57a9,	// (0x00056c61) bg_popup_heading_pane_g6

0x57b1,	// (0x00056c69) bg_popup_heading_pane_g7

0x57b9,	// (0x00056c71) bg_popup_heading_pane_g8

0x57c3,	// (0x00056c7b) bg_popup_heading_pane_g9

0x0008,

0xf867,	// (0x00060d1f) bg_popup_heading_pane_g

0x4ea2,	// (0x0005635a) bg_popup_sub_pane_g1

0x4eb2,	// (0x0005636a) bg_popup_sub_pane_g2

0x4eaa,	// (0x00056362) bg_popup_sub_pane_g3

0x4ec2,	// (0x0005637a) bg_popup_sub_pane_g4

0x4eba,	// (0x00056372) bg_popup_sub_pane_g5

0x4eca,	// (0x00056382) bg_popup_sub_pane_g6

0x4ed2,	// (0x0005638a) bg_popup_sub_pane_g7

0x4ee2,	// (0x0005639a) bg_popup_sub_pane_g8

0x4eda,	// (0x00056392) bg_popup_sub_pane_g9

0x0008,

0xf841,	// (0x00060cf9) bg_popup_sub_pane_g

0x2f45,	// (0x000543fd) bg_popup_window_pane_cp5_ParamLimits

0x2f45,	// (0x000543fd) bg_popup_window_pane_cp5

0x2f61,	// (0x00054419) popup_note_window_g1_ParamLimits

0x2f61,	// (0x00054419) popup_note_window_g1

0x2f6d,	// (0x00054425) popup_note_window_t1_ParamLimits

0x2f6d,	// (0x00054425) popup_note_window_t1

0x2f83,	// (0x0005443b) popup_note_window_t2_ParamLimits

0x2f83,	// (0x0005443b) popup_note_window_t2

0x2f99,	// (0x00054451) popup_note_window_t3_ParamLimits

0x2f99,	// (0x00054451) popup_note_window_t3

0x2faf,	// (0x00054467) popup_note_window_t4_ParamLimits

0x2faf,	// (0x00054467) popup_note_window_t4

0x2fd7,	// (0x0005448f) popup_note_window_t5_ParamLimits

0x2fd7,	// (0x0005448f) popup_note_window_t5

0x0004,

0xf55a,	// (0x00060a12) popup_note_window_t_ParamLimits

0xf55a,	// (0x00060a12) popup_note_window_t

0x3021,	// (0x000544d9) bg_popup_window_pane_cp6_ParamLimits

0x3021,	// (0x000544d9) bg_popup_window_pane_cp6

0x564e,	// (0x00056b06) popup_note_image_window_g1_ParamLimits

0x564e,	// (0x00056b06) popup_note_image_window_g1

0x565a,	// (0x00056b12) popup_note_image_window_g2_ParamLimits

0x565a,	// (0x00056b12) popup_note_image_window_g2

0x0001,

0xf835,	// (0x00060ced) popup_note_image_window_g_ParamLimits

0xf835,	// (0x00060ced) popup_note_image_window_g

0x5673,	// (0x00056b2b) popup_note_image_window_t1_ParamLimits

0x5673,	// (0x00056b2b) popup_note_image_window_t1

0x568c,	// (0x00056b44) popup_note_image_window_t2_ParamLimits

0x568c,	// (0x00056b44) popup_note_image_window_t2

0x56a5,	// (0x00056b5d) popup_note_image_window_t3_ParamLimits

0x56a5,	// (0x00056b5d) popup_note_image_window_t3

0x0002,

0xf83a,	// (0x00060cf2) popup_note_image_window_t_ParamLimits

0xf83a,	// (0x00060cf2) popup_note_image_window_t

0x550f,	// (0x000569c7) bg_popup_window_pane_cp7_ParamLimits

0x550f,	// (0x000569c7) bg_popup_window_pane_cp7

0x553f,	// (0x000569f7) popup_note_wait_window_g1_ParamLimits

0x553f,	// (0x000569f7) popup_note_wait_window_g1

0x554b,	// (0x00056a03) popup_note_wait_window_g2_ParamLimits

0x554b,	// (0x00056a03) popup_note_wait_window_g2

0x0002,

0xf823,	// (0x00060cdb) popup_note_wait_window_g_ParamLimits

0xf823,	// (0x00060cdb) popup_note_wait_window_g

0x5563,	// (0x00056a1b) popup_note_wait_window_t1_ParamLimits

0x5563,	// (0x00056a1b) popup_note_wait_window_t1

0x558a,	// (0x00056a42) popup_note_wait_window_t2_ParamLimits

0x558a,	// (0x00056a42) popup_note_wait_window_t2

0x55a7,	// (0x00056a5f) popup_note_wait_window_t3_ParamLimits

0x55a7,	// (0x00056a5f) popup_note_wait_window_t3

0x55ba,	// (0x00056a72) popup_note_wait_window_t4_ParamLimits

0x55ba,	// (0x00056a72) popup_note_wait_window_t4

0x0004,

0xf82a,	// (0x00060ce2) popup_note_wait_window_t_ParamLimits

0xf82a,	// (0x00060ce2) popup_note_wait_window_t

0x55df,	// (0x00056a97) wait_bar_pane_ParamLimits

0x55df,	// (0x00056a97) wait_bar_pane

0x2bea,	// (0x000540a2) wait_anim_pane

0x2bea,	// (0x000540a2) wait_border_pane

0xdc06,	// (0x0005f0be) wait_anim_pane_g1

0xdc06,	// (0x0005f0be) wait_anim_pane_g2

0x0001,

0xf6e3,	// (0x00060b9b) wait_anim_pane_g

0x54b3,	// (0x0005696b) wait_border_pane_g1

0x54be,	// (0x00056976) wait_border_pane_g2

0x54c7,	// (0x0005697f) wait_border_pane_g3

0x0002,

0xf81c,	// (0x00060cd4) wait_border_pane_g

0x531e,	// (0x000567d6) bg_popup_window_pane_cp16_ParamLimits

0x531e,	// (0x000567d6) bg_popup_window_pane_cp16

0x541e,	// (0x000568d6) indicator_popup_pane_cp4_ParamLimits

0x541e,	// (0x000568d6) indicator_popup_pane_cp4

0x5432,	// (0x000568ea) popup_query_data_window_t1_ParamLimits

0x5432,	// (0x000568ea) popup_query_data_window_t1

0x5444,	// (0x000568fc) popup_query_data_window_t2_ParamLimits

0x5444,	// (0x000568fc) popup_query_data_window_t2

0x545d,	// (0x00056915) popup_query_data_window_t3_ParamLimits

0x545d,	// (0x00056915) popup_query_data_window_t3

0x0002,

0xf815,	// (0x00060ccd) popup_query_data_window_t_ParamLimits

0xf815,	// (0x00060ccd) popup_query_data_window_t

0x5477,	// (0x0005692f) query_popup_data_pane_ParamLimits

0x5477,	// (0x0005692f) query_popup_data_pane

0x548b,	// (0x00056943) query_popup_data_pane_cp1_ParamLimits

0x548b,	// (0x00056943) query_popup_data_pane_cp1

0x531e,	// (0x000567d6) bg_popup_window_pane_cp10_ParamLimits

0x531e,	// (0x000567d6) bg_popup_window_pane_cp10

0x5350,	// (0x00056808) indicator_popup_pane_ParamLimits

0x5350,	// (0x00056808) indicator_popup_pane

0x5372,	// (0x0005682a) popup_query_code_window_t1_ParamLimits

0x5372,	// (0x0005682a) popup_query_code_window_t1

0x538c,	// (0x00056844) popup_query_code_window_t2_ParamLimits

0x538c,	// (0x00056844) popup_query_code_window_t2

0x53d5,	// (0x0005688d) popup_query_code_window_t3_ParamLimits

0x53d5,	// (0x0005688d) popup_query_code_window_t3

0x0002,

0xf80e,	// (0x00060cc6) popup_query_code_window_t_ParamLimits

0xf80e,	// (0x00060cc6) popup_query_code_window_t

0x5404,	// (0x000568bc) query_popup_pane_ParamLimits

0x5404,	// (0x000568bc) query_popup_pane

0x3021,	// (0x000544d9) bg_popup_window_pane_cp15_ParamLimits

0x3021,	// (0x000544d9) bg_popup_window_pane_cp15

0x303f,	// (0x000544f7) indicator_popup_pane_cp1_ParamLimits

0x303f,	// (0x000544f7) indicator_popup_pane_cp1

0x3052,	// (0x0005450a) indicator_popup_pane_cp2_ParamLimits

0x3052,	// (0x0005450a) indicator_popup_pane_cp2

0x3065,	// (0x0005451d) popup_query_data_code_window_g1_ParamLimits

0x3065,	// (0x0005451d) popup_query_data_code_window_g1

0x3078,	// (0x00054530) popup_query_data_code_window_t1_ParamLimits

0x3078,	// (0x00054530) popup_query_data_code_window_t1

0x308a,	// (0x00054542) popup_query_data_code_window_t2_ParamLimits

0x308a,	// (0x00054542) popup_query_data_code_window_t2

0x309c,	// (0x00054554) popup_query_data_code_window_t3_ParamLimits

0x309c,	// (0x00054554) popup_query_data_code_window_t3

0x30b2,	// (0x0005456a) popup_query_data_code_window_t4_ParamLimits

0x30b2,	// (0x0005456a) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x00060a1d) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x00060a1d) popup_query_data_code_window_t

0x11d5,	// (0x0005268d) list_single_midp_graphic_pane_g3

0x30ca,	// (0x00054582) query_popup_data_pane_cp2_ParamLimits

0x30dd,	// (0x00054595) query_popup_pane_cp2_ParamLimits

0x30dd,	// (0x00054595) query_popup_pane_cp2

0x2bea,	// (0x000540a2) bg_popup_window_pane_cp11

0x5302,	// (0x000567ba) heading_pane_cp5

0x530a,	// (0x000567c2) listscroll_popup_info_pane

0x2bea,	// (0x000540a2) input_focus_pane_cp3

0x30f0,	// (0x000545a8) query_popup_pane_t1

0x30fe,	// (0x000545b6) list_popup_info_pane_ParamLimits

0x30fe,	// (0x000545b6) list_popup_info_pane

0x310d,	// (0x000545c5) listscroll_popup_info_pane_g1

0x3115,	// (0x000545cd) scroll_pane_cp7

0x311f,	// (0x000545d7) popup_info_list_pane_t1_ParamLimits

0x311f,	// (0x000545d7) popup_info_list_pane_t1

0x3139,	// (0x000545f1) popup_info_list_pane_t2_ParamLimits

0x3139,	// (0x000545f1) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x00060a26) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x00060a26) popup_info_list_pane_t

0x2bea,	// (0x000540a2) bg_popup_window_pane_cp12

0x6685,	// (0x00057b3d) find_popup_pane

0x2cca,	// (0x00054182) bg_popup_window_pane_cp3

0x3153,	// (0x0005460b) heading_pane_cp3

0x3162,	// (0x0005461a) listscroll_popup_graphic_pane

0x2bea,	// (0x000540a2) bg_popup_window_pane_cp4

0xb8a3,	// (0x0005cd5b) heading_pane_cp4

0x31cc,	// (0x00054684) listscroll_popup_colour_pane

0xb8ad,	// (0x0005cd65) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xb8ad,	// (0x0005cd65) cell_large_graphic_colour_none_popup_pane

0xb8c1,	// (0x0005cd79) grid_large_graphic_colour_popup_pane_ParamLimits

0xb8c1,	// (0x0005cd79) grid_large_graphic_colour_popup_pane

0xb8e5,	// (0x0005cd9d) listscroll_popup_colour_pane_g1_ParamLimits

0xb8e5,	// (0x0005cd9d) listscroll_popup_colour_pane_g1

0xb8fc,	// (0x0005cdb4) listscroll_popup_colour_pane_g2_ParamLimits

0xb8fc,	// (0x0005cdb4) listscroll_popup_colour_pane_g2

0xb913,	// (0x0005cdcb) listscroll_popup_colour_pane_g3_ParamLimits

0xb913,	// (0x0005cdcb) listscroll_popup_colour_pane_g3

0xb923,	// (0x0005cddb) listscroll_popup_colour_pane_g4_ParamLimits

0xb923,	// (0x0005cddb) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x00060a2b) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x00060a2b) listscroll_popup_colour_pane_g

0x325a,	// (0x00054712) scroll_pane_cp6_ParamLimits

0x325a,	// (0x00054712) scroll_pane_cp6

0xb933,	// (0x0005cdeb) cell_large_graphic_colour_popup_pane_ParamLimits

0xb933,	// (0x0005cdeb) cell_large_graphic_colour_popup_pane

0x328b,	// (0x00054743) cell_large_graphic_colour_none_popup_pane_t1

0x2bea,	// (0x000540a2) grid_highlight_pane_cp5

0x329a,	// (0x00054752) cell_large_graphic_colour_popup_pane_g1

0x32a2,	// (0x0005475a) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x00060a34) cell_large_graphic_colour_popup_pane_g

0x32aa,	// (0x00054762) cell_large_graphic_colour_popup_pane_g2_copy1

0x32b3,	// (0x0005476b) grid_highlight_pane_cp4

0x32bb,	// (0x00054773) bg_popup_window_pane_cp8_ParamLimits

0x32bb,	// (0x00054773) bg_popup_window_pane_cp8

0x32d6,	// (0x0005478e) popup_snote_single_text_window_g1_ParamLimits

0x32d6,	// (0x0005478e) popup_snote_single_text_window_g1

0x32e8,	// (0x000547a0) popup_snote_single_text_window_t1_ParamLimits

0x32e8,	// (0x000547a0) popup_snote_single_text_window_t1

0x32fb,	// (0x000547b3) popup_snote_single_text_window_t2_ParamLimits

0x32fb,	// (0x000547b3) popup_snote_single_text_window_t2

0x330e,	// (0x000547c6) popup_snote_single_text_window_t3_ParamLimits

0x330e,	// (0x000547c6) popup_snote_single_text_window_t3

0x3347,	// (0x000547ff) popup_snote_single_text_window_t4_ParamLimits

0x3347,	// (0x000547ff) popup_snote_single_text_window_t4

0x337b,	// (0x00054833) popup_snote_single_text_window_t5_ParamLimits

0x337b,	// (0x00054833) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x00060a39) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x00060a39) popup_snote_single_text_window_t

0x33aa,	// (0x00054862) bg_popup_window_pane_cp9_ParamLimits

0x33aa,	// (0x00054862) bg_popup_window_pane_cp9

0x32d6,	// (0x0005478e) popup_snote_single_graphic_window_g1_ParamLimits

0x32d6,	// (0x0005478e) popup_snote_single_graphic_window_g1

0x33b8,	// (0x00054870) popup_snote_single_graphic_window_g2_ParamLimits

0x33b8,	// (0x00054870) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x00060a44) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x00060a44) popup_snote_single_graphic_window_g

0x33c4,	// (0x0005487c) popup_snote_single_graphic_window_t1_ParamLimits

0x33c4,	// (0x0005487c) popup_snote_single_graphic_window_t1

0x33d7,	// (0x0005488f) popup_snote_single_graphic_window_t2_ParamLimits

0x33d7,	// (0x0005488f) popup_snote_single_graphic_window_t2

0x33ea,	// (0x000548a2) popup_snote_single_graphic_window_t3_ParamLimits

0x33ea,	// (0x000548a2) popup_snote_single_graphic_window_t3

0x3423,	// (0x000548db) popup_snote_single_graphic_window_t4_ParamLimits

0x3423,	// (0x000548db) popup_snote_single_graphic_window_t4

0x3457,	// (0x0005490f) popup_snote_single_graphic_window_t5_ParamLimits

0x3457,	// (0x0005490f) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x00060a49) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x00060a49) popup_snote_single_graphic_window_t

0x65c7,	// (0x00057a7f) grid_graphic_popup_pane_ParamLimits

0x65c7,	// (0x00057a7f) grid_graphic_popup_pane

0x65f1,	// (0x00057aa9) listscroll_popup_graphic_pane_g1_ParamLimits

0x65f1,	// (0x00057aa9) listscroll_popup_graphic_pane_g1

0xdae6,	// (0x0005ef9e) listscroll_popup_graphic_pane_g2_ParamLimits

0xdae6,	// (0x0005ef9e) listscroll_popup_graphic_pane_g2

0x0001,

0xf98b,	// (0x00060e43) listscroll_popup_graphic_pane_g_ParamLimits

0xf98b,	// (0x00060e43) listscroll_popup_graphic_pane_g

0x6619,	// (0x00057ad1) scroll_pane_cp5

0xdaa3,	// (0x0005ef5b) cell_graphic_popup_pane_ParamLimits

0xdaa3,	// (0x0005ef5b) cell_graphic_popup_pane

0x6539,	// (0x000579f1) cell_graphic_popup_pane_g1

0x6541,	// (0x000579f9) cell_graphic_popup_pane_g2

0x32aa,	// (0x00054762) cell_graphic_popup_pane_g3

0x0002,

0xf984,	// (0x00060e3c) cell_graphic_popup_pane_g

0xda95,	// (0x0005ef4d) cell_graphic_popup_pane_t2

0x32b3,	// (0x0005476b) grid_highlight_pane_cp3

0x38ea,	// (0x00054da2) list_gen_pane_ParamLimits

0x38ea,	// (0x00054da2) list_gen_pane

0x391c,	// (0x00054dd4) scroll_pane

0xda4c,	// (0x0005ef04) bg_list_pane_g1_ParamLimits

0xda4c,	// (0x0005ef04) bg_list_pane_g1

0x64ae,	// (0x00057966) bg_list_pane_g2_ParamLimits

0x64ae,	// (0x00057966) bg_list_pane_g2

0x64c3,	// (0x0005797b) bg_list_pane_g3_ParamLimits

0x64c3,	// (0x0005797b) bg_list_pane_g3

0x64d7,	// (0x0005798f) bg_list_pane_g4_ParamLimits

0x64d7,	// (0x0005798f) bg_list_pane_g4

0xda69,	// (0x0005ef21) bg_list_pane_g5_ParamLimits

0xda69,	// (0x0005ef21) bg_list_pane_g5

0x0004,

0xf979,	// (0x00060e31) bg_list_pane_g_ParamLimits

0xf979,	// (0x00060e31) bg_list_pane_g

0xda02,	// (0x0005eeba) list_double2_graphic_large_graphic_pane_ParamLimits

0xda02,	// (0x0005eeba) list_double2_graphic_large_graphic_pane

0xda02,	// (0x0005eeba) list_double2_graphic_pane_ParamLimits

0xda02,	// (0x0005eeba) list_double2_graphic_pane

0xda02,	// (0x0005eeba) list_double2_large_graphic_pane_ParamLimits

0xda02,	// (0x0005eeba) list_double2_large_graphic_pane

0xda02,	// (0x0005eeba) list_double2_pane_ParamLimits

0xda02,	// (0x0005eeba) list_double2_pane

0xda02,	// (0x0005eeba) list_double_graphic_heading_pane_ParamLimits

0xda02,	// (0x0005eeba) list_double_graphic_heading_pane

0xda02,	// (0x0005eeba) list_double_graphic_pane_ParamLimits

0xda02,	// (0x0005eeba) list_double_graphic_pane

0xda02,	// (0x0005eeba) list_double_heading_pane_ParamLimits

0xda02,	// (0x0005eeba) list_double_heading_pane

0xda02,	// (0x0005eeba) list_double_large_graphic_pane_ParamLimits

0xda02,	// (0x0005eeba) list_double_large_graphic_pane

0xda02,	// (0x0005eeba) list_double_number_pane_ParamLimits

0xda02,	// (0x0005eeba) list_double_number_pane

0xda02,	// (0x0005eeba) list_double_pane_ParamLimits

0xda02,	// (0x0005eeba) list_double_pane

0xda02,	// (0x0005eeba) list_double_time_pane_ParamLimits

0xda02,	// (0x0005eeba) list_double_time_pane

0xda02,	// (0x0005eeba) list_setting_number_pane_ParamLimits

0xda02,	// (0x0005eeba) list_setting_number_pane

0xda02,	// (0x0005eeba) list_setting_pane_ParamLimits

0xda02,	// (0x0005eeba) list_setting_pane

0xda14,	// (0x0005eecc) list_single_2graphic_pane_ParamLimits

0xda14,	// (0x0005eecc) list_single_2graphic_pane

0xda14,	// (0x0005eecc) list_single_graphic_heading_pane_ParamLimits

0xda14,	// (0x0005eecc) list_single_graphic_heading_pane

0xda14,	// (0x0005eecc) list_single_graphic_pane_ParamLimits

0xda14,	// (0x0005eecc) list_single_graphic_pane

0xda14,	// (0x0005eecc) list_single_heading_pane_ParamLimits

0xda14,	// (0x0005eecc) list_single_heading_pane

0xda14,	// (0x0005eecc) list_single_large_graphic_pane_ParamLimits

0xda14,	// (0x0005eecc) list_single_large_graphic_pane

0xda14,	// (0x0005eecc) list_single_number_heading_pane_ParamLimits

0xda14,	// (0x0005eecc) list_single_number_heading_pane

0xda14,	// (0x0005eecc) list_single_number_pane_ParamLimits

0xda14,	// (0x0005eecc) list_single_number_pane

0xda14,	// (0x0005eecc) list_single_pane_ParamLimits

0xda14,	// (0x0005eecc) list_single_pane

0x2bea,	// (0x000540a2) list_highlight_pane_cp1

0x3950,	// (0x00054e08) list_single_pane_g1_ParamLimits

0x3950,	// (0x00054e08) list_single_pane_g1

0x3486,	// (0x0005493e) list_single_pane_g2_ParamLimits

0x3486,	// (0x0005493e) list_single_pane_g2

0x0001,

0xf5ad,	// (0x00060a65) list_single_pane_g_ParamLimits

0xf5ad,	// (0x00060a65) list_single_pane_g

0x15ff,	// (0x00052ab7) list_single_pane_t1_ParamLimits

0x15ff,	// (0x00052ab7) list_single_pane_t1

0x3950,	// (0x00054e08) list_single_number_pane_g1_ParamLimits

0x3950,	// (0x00054e08) list_single_number_pane_g1

0x3486,	// (0x0005493e) list_single_number_pane_g2_ParamLimits

0x3486,	// (0x0005493e) list_single_number_pane_g2

0x0001,

0xf5ad,	// (0x00060a65) list_single_number_pane_g_ParamLimits

0xf5ad,	// (0x00060a65) list_single_number_pane_g

0x119a,	// (0x00052652) list_single_number_pane_t1_ParamLimits

0x119a,	// (0x00052652) list_single_number_pane_t1

0x1545,	// (0x000529fd) list_single_number_pane_t2_ParamLimits

0x1545,	// (0x000529fd) list_single_number_pane_t2

0x0001,

0xf93a,	// (0x00060df2) list_single_number_pane_t_ParamLimits

0xf93a,	// (0x00060df2) list_single_number_pane_t

0xe94a,	// (0x0005fe02) list_single_graphic_pane_g1_ParamLimits

0xe94a,	// (0x0005fe02) list_single_graphic_pane_g1

0x3950,	// (0x00054e08) list_single_graphic_pane_g2_ParamLimits

0x3950,	// (0x00054e08) list_single_graphic_pane_g2

0x3486,	// (0x0005493e) list_single_graphic_pane_g3_ParamLimits

0x3486,	// (0x0005493e) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x00060a54) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x00060a54) list_single_graphic_pane_g

0xe956,	// (0x0005fe0e) list_single_graphic_pane_t1_ParamLimits

0xe956,	// (0x0005fe0e) list_single_graphic_pane_t1

0xe96c,	// (0x0005fe24) list_single_heading_pane_g1_ParamLimits

0xe96c,	// (0x0005fe24) list_single_heading_pane_g1

0x3486,	// (0x0005493e) list_single_heading_pane_g2_ParamLimits

0x3486,	// (0x0005493e) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x00060a5b) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x00060a5b) list_single_heading_pane_g

0xe97f,	// (0x0005fe37) list_single_heading_pane_t1_ParamLimits

0xe97f,	// (0x0005fe37) list_single_heading_pane_t1

0x3492,	// (0x0005494a) list_single_heading_pane_t2_ParamLimits

0x3492,	// (0x0005494a) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x00060a60) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x00060a60) list_single_heading_pane_t

0x3950,	// (0x00054e08) list_single_number_heading_pane_g1_ParamLimits

0x3950,	// (0x00054e08) list_single_number_heading_pane_g1

0x3486,	// (0x0005493e) list_single_number_heading_pane_g2_ParamLimits

0x3486,	// (0x0005493e) list_single_number_heading_pane_g2

0x0001,

0xf5ad,	// (0x00060a65) list_single_number_heading_pane_g_ParamLimits

0xf5ad,	// (0x00060a65) list_single_number_heading_pane_g

0xe995,	// (0x0005fe4d) list_single_number_heading_pane_t1_ParamLimits

0xe995,	// (0x0005fe4d) list_single_number_heading_pane_t1

0xe9ab,	// (0x0005fe63) list_single_number_heading_pane_t2_ParamLimits

0xe9ab,	// (0x0005fe63) list_single_number_heading_pane_t2

0xe9bd,	// (0x0005fe75) list_single_number_heading_pane_t3_ParamLimits

0xe9bd,	// (0x0005fe75) list_single_number_heading_pane_t3

0x0002,

0xf5b2,	// (0x00060a6a) list_single_number_heading_pane_t_ParamLimits

0xf5b2,	// (0x00060a6a) list_single_number_heading_pane_t

0xe9cf,	// (0x0005fe87) list_single_graphic_heading_pane_g1_ParamLimits

0xe9cf,	// (0x0005fe87) list_single_graphic_heading_pane_g1

0xb95c,	// (0x0005ce14) list_single_graphic_heading_pane_g4_ParamLimits

0xb95c,	// (0x0005ce14) list_single_graphic_heading_pane_g4

0x3486,	// (0x0005493e) list_single_graphic_heading_pane_g5_ParamLimits

0x3486,	// (0x0005493e) list_single_graphic_heading_pane_g5

0x0002,

0xf5b9,	// (0x00060a71) list_single_graphic_heading_pane_g_ParamLimits

0xf5b9,	// (0x00060a71) list_single_graphic_heading_pane_g

0xe995,	// (0x0005fe4d) list_single_graphic_heading_pane_t1_ParamLimits

0xe995,	// (0x0005fe4d) list_single_graphic_heading_pane_t1

0xe9e7,	// (0x0005fe9f) list_single_graphic_heading_pane_t2_ParamLimits

0xe9e7,	// (0x0005fe9f) list_single_graphic_heading_pane_t2

0x0001,

0xf5c0,	// (0x00060a78) list_single_graphic_heading_pane_t_ParamLimits

0xf5c0,	// (0x00060a78) list_single_graphic_heading_pane_t

0x35bc,	// (0x00054a74) list_single_large_graphic_pane_g1_ParamLimits

0x35bc,	// (0x00054a74) list_single_large_graphic_pane_g1

0x3950,	// (0x00054e08) list_single_large_graphic_pane_g2_ParamLimits

0x3950,	// (0x00054e08) list_single_large_graphic_pane_g2

0x3486,	// (0x0005493e) list_single_large_graphic_pane_g3_ParamLimits

0x3486,	// (0x0005493e) list_single_large_graphic_pane_g3

0x0002,

0xf5c5,	// (0x00060a7d) list_single_large_graphic_pane_g_ParamLimits

0xf5c5,	// (0x00060a7d) list_single_large_graphic_pane_g

0x54be,	// (0x00056976) wait_border_pane_g2_copy1

0xb96d,	// (0x0005ce25) list_single_large_graphic_pane_g4_cp2

0x17af,	// (0x00052c67) list_single_large_graphic_pane_t1_ParamLimits

0x17af,	// (0x00052c67) list_single_large_graphic_pane_t1

0x395c,	// (0x00054e14) list_double_pane_g1_ParamLimits

0x395c,	// (0x00054e14) list_double_pane_g1

0x34e8,	// (0x000549a0) list_double_pane_g2_ParamLimits

0x34e8,	// (0x000549a0) list_double_pane_g2

0x0001,

0xf5cc,	// (0x00060a84) list_double_pane_g_ParamLimits

0xf5cc,	// (0x00060a84) list_double_pane_g

0xb975,	// (0x0005ce2d) list_double_pane_t1_ParamLimits

0xb975,	// (0x0005ce2d) list_double_pane_t1

0xb98b,	// (0x0005ce43) list_double_pane_t2_ParamLimits

0xb98b,	// (0x0005ce43) list_double_pane_t2

0x0001,

0xf5d1,	// (0x00060a89) list_double_pane_t_ParamLimits

0xf5d1,	// (0x00060a89) list_double_pane_t

0xb99d,	// (0x0005ce55) list_double2_pane_g1_ParamLimits

0xb99d,	// (0x0005ce55) list_double2_pane_g1

0x01b2,	// (0x0005166a) list_double2_pane_g2_ParamLimits

0x01b2,	// (0x0005166a) list_double2_pane_g2

0x0001,

0xf5d6,	// (0x00060a8e) list_double2_pane_g_ParamLimits

0xf5d6,	// (0x00060a8e) list_double2_pane_g

0xb9ae,	// (0x0005ce66) list_double2_pane_t1_ParamLimits

0xb9ae,	// (0x0005ce66) list_double2_pane_t1

0xb9c4,	// (0x0005ce7c) list_double2_pane_t2_ParamLimits

0xb9c4,	// (0x0005ce7c) list_double2_pane_t2

0x0001,

0xf5db,	// (0x00060a93) list_double2_pane_t_ParamLimits

0xf5db,	// (0x00060a93) list_double2_pane_t

0x395c,	// (0x00054e14) list_double_number_pane_g1_ParamLimits

0x395c,	// (0x00054e14) list_double_number_pane_g1

0x34e8,	// (0x000549a0) list_double_number_pane_g2_ParamLimits

0x34e8,	// (0x000549a0) list_double_number_pane_g2

0x0001,

0xf5cc,	// (0x00060a84) list_double_number_pane_g_ParamLimits

0xf5cc,	// (0x00060a84) list_double_number_pane_g

0xb9d6,	// (0x0005ce8e) list_double_number_pane_t1_ParamLimits

0xb9d6,	// (0x0005ce8e) list_double_number_pane_t1

0xe9fd,	// (0x0005feb5) list_double_number_pane_t2_ParamLimits

0xe9fd,	// (0x0005feb5) list_double_number_pane_t2

0xb9e8,	// (0x0005cea0) list_double_number_pane_t3_ParamLimits

0xb9e8,	// (0x0005cea0) list_double_number_pane_t3

0x0002,

0xf5e0,	// (0x00060a98) list_double_number_pane_t_ParamLimits

0xf5e0,	// (0x00060a98) list_double_number_pane_t

0xea13,	// (0x0005fecb) list_double_graphic_pane_g1_ParamLimits

0xea13,	// (0x0005fecb) list_double_graphic_pane_g1

0xb9fa,	// (0x0005ceb2) list_double_graphic_pane_g2_ParamLimits

0xb9fa,	// (0x0005ceb2) list_double_graphic_pane_g2

0xba09,	// (0x0005cec1) list_double_graphic_pane_g3_ParamLimits

0xba09,	// (0x0005cec1) list_double_graphic_pane_g3

0x0003,

0xf5e7,	// (0x00060a9f) list_double_graphic_pane_g_ParamLimits

0xf5e7,	// (0x00060a9f) list_double_graphic_pane_g

0xba21,	// (0x0005ced9) list_double_graphic_pane_t1_ParamLimits

0xba21,	// (0x0005ced9) list_double_graphic_pane_t1

0xba37,	// (0x0005ceef) list_double_graphic_pane_t2_ParamLimits

0xba37,	// (0x0005ceef) list_double_graphic_pane_t2

0x0001,

0xf5f0,	// (0x00060aa8) list_double_graphic_pane_t_ParamLimits

0xf5f0,	// (0x00060aa8) list_double_graphic_pane_t

0xba49,	// (0x0005cf01) list_double2_graphic_pane_g1_ParamLimits

0xba49,	// (0x0005cf01) list_double2_graphic_pane_g1

0x6c75,	// (0x0005812d) list_double2_graphic_pane_g2_ParamLimits

0x6c75,	// (0x0005812d) list_double2_graphic_pane_g2

0xba55,	// (0x0005cf0d) list_double2_graphic_pane_g3_ParamLimits

0xba55,	// (0x0005cf0d) list_double2_graphic_pane_g3

0x0002,

0xf5f5,	// (0x00060aad) list_double2_graphic_pane_g_ParamLimits

0xf5f5,	// (0x00060aad) list_double2_graphic_pane_g

0xba61,	// (0x0005cf19) list_double2_graphic_pane_t1_ParamLimits

0xba61,	// (0x0005cf19) list_double2_graphic_pane_t1

0xba77,	// (0x0005cf2f) list_double2_graphic_pane_t2_ParamLimits

0xba77,	// (0x0005cf2f) list_double2_graphic_pane_t2

0x0001,

0xf5fc,	// (0x00060ab4) list_double2_graphic_pane_t_ParamLimits

0xf5fc,	// (0x00060ab4) list_double2_graphic_pane_t

0xba89,	// (0x0005cf41) list_double_large_graphic_pane_g1_ParamLimits

0xba89,	// (0x0005cf41) list_double_large_graphic_pane_g1

0xbaa8,	// (0x0005cf60) list_double_large_graphic_pane_g2_ParamLimits

0xbaa8,	// (0x0005cf60) list_double_large_graphic_pane_g2

0x34e8,	// (0x000549a0) list_double_large_graphic_pane_g3_ParamLimits

0x34e8,	// (0x000549a0) list_double_large_graphic_pane_g3

0xbabe,	// (0x0005cf76) list_double_large_graphic_pane_g4_ParamLimits

0xbabe,	// (0x0005cf76) list_double_large_graphic_pane_g4

0x0004,

0xf601,	// (0x00060ab9) list_double_large_graphic_pane_g_ParamLimits

0xf601,	// (0x00060ab9) list_double_large_graphic_pane_g

0xbad1,	// (0x0005cf89) list_double_large_graphic_pane_t1_ParamLimits

0xbad1,	// (0x0005cf89) list_double_large_graphic_pane_t1

0xbaea,	// (0x0005cfa2) list_double_large_graphic_pane_t2_ParamLimits

0xbaea,	// (0x0005cfa2) list_double_large_graphic_pane_t2

0x0001,

0xf60c,	// (0x00060ac4) list_double_large_graphic_pane_t_ParamLimits

0xf60c,	// (0x00060ac4) list_double_large_graphic_pane_t

0xbafc,	// (0x0005cfb4) list_double2_large_graphic_pane_g1_ParamLimits

0xbafc,	// (0x0005cfb4) list_double2_large_graphic_pane_g1

0xbb08,	// (0x0005cfc0) list_double2_large_graphic_pane_g2_ParamLimits

0xbb08,	// (0x0005cfc0) list_double2_large_graphic_pane_g2

0xba55,	// (0x0005cf0d) list_double2_large_graphic_pane_g3_ParamLimits

0xba55,	// (0x0005cf0d) list_double2_large_graphic_pane_g3

0x0002,

0xf611,	// (0x00060ac9) list_double2_large_graphic_pane_g_ParamLimits

0xf611,	// (0x00060ac9) list_double2_large_graphic_pane_g

0xbb19,	// (0x0005cfd1) list_double2_large_graphic_pane_t1_ParamLimits

0xbb19,	// (0x0005cfd1) list_double2_large_graphic_pane_t1

0xbb2f,	// (0x0005cfe7) list_double2_large_graphic_pane_t2_ParamLimits

0xbb2f,	// (0x0005cfe7) list_double2_large_graphic_pane_t2

0x0001,

0xf618,	// (0x00060ad0) list_double2_large_graphic_pane_t_ParamLimits

0xf618,	// (0x00060ad0) list_double2_large_graphic_pane_t

0xbb41,	// (0x0005cff9) list_double_heading_pane_g1_ParamLimits

0xbb41,	// (0x0005cff9) list_double_heading_pane_g1

0xbb52,	// (0x0005d00a) list_double_heading_pane_g2_ParamLimits

0xbb52,	// (0x0005d00a) list_double_heading_pane_g2

0x0001,

0xf61d,	// (0x00060ad5) list_double_heading_pane_g_ParamLimits

0xf61d,	// (0x00060ad5) list_double_heading_pane_g

0xbb5e,	// (0x0005d016) list_double_heading_pane_t1_ParamLimits

0xbb5e,	// (0x0005d016) list_double_heading_pane_t1

0xb9c4,	// (0x0005ce7c) list_double_heading_pane_t2_ParamLimits

0xb9c4,	// (0x0005ce7c) list_double_heading_pane_t2

0x0001,

0xf622,	// (0x00060ada) list_double_heading_pane_t_ParamLimits

0xf622,	// (0x00060ada) list_double_heading_pane_t

0x011b,	// (0x000515d3) list_double_graphic_heading_pane_g1_ParamLimits

0x011b,	// (0x000515d3) list_double_graphic_heading_pane_g1

0xbb41,	// (0x0005cff9) list_double_graphic_heading_pane_g2_ParamLimits

0xbb41,	// (0x0005cff9) list_double_graphic_heading_pane_g2

0xbb52,	// (0x0005d00a) list_double_graphic_heading_pane_g3_ParamLimits

0xbb52,	// (0x0005d00a) list_double_graphic_heading_pane_g3

0x0002,

0xf627,	// (0x00060adf) list_double_graphic_heading_pane_g_ParamLimits

0xf627,	// (0x00060adf) list_double_graphic_heading_pane_g

0xbb74,	// (0x0005d02c) list_double_graphic_heading_pane_t1_ParamLimits

0xbb74,	// (0x0005d02c) list_double_graphic_heading_pane_t1

0xba77,	// (0x0005cf2f) list_double_graphic_heading_pane_t2_ParamLimits

0xba77,	// (0x0005cf2f) list_double_graphic_heading_pane_t2

0x0001,

0xf62e,	// (0x00060ae6) list_double_graphic_heading_pane_t_ParamLimits

0xf62e,	// (0x00060ae6) list_double_graphic_heading_pane_t

0xbb8a,	// (0x0005d042) list_double_time_pane_g1_ParamLimits

0xbb8a,	// (0x0005d042) list_double_time_pane_g1

0xea1f,	// (0x0005fed7) list_double_time_pane_g2_ParamLimits

0xea1f,	// (0x0005fed7) list_double_time_pane_g2

0x0001,

0xf633,	// (0x00060aeb) list_double_time_pane_g_ParamLimits

0xf633,	// (0x00060aeb) list_double_time_pane_g

0xbb9b,	// (0x0005d053) list_double_time_pane_t1_ParamLimits

0xbb9b,	// (0x0005d053) list_double_time_pane_t1

0xbbb1,	// (0x0005d069) list_double_time_pane_t2_ParamLimits

0xbbb1,	// (0x0005d069) list_double_time_pane_t2

0xbbc3,	// (0x0005d07b) list_double_time_pane_t3_ParamLimits

0xbbc3,	// (0x0005d07b) list_double_time_pane_t3

0xbbd5,	// (0x0005d08d) list_double_time_pane_t4_ParamLimits

0xbbd5,	// (0x0005d08d) list_double_time_pane_t4

0x0003,

0xf638,	// (0x00060af0) list_double_time_pane_t_ParamLimits

0xf638,	// (0x00060af0) list_double_time_pane_t

0x01a6,	// (0x0005165e) list_setting_pane_g1_ParamLimits

0x01a6,	// (0x0005165e) list_setting_pane_g1

0x01b2,	// (0x0005166a) list_setting_pane_g2_ParamLimits

0x01b2,	// (0x0005166a) list_setting_pane_g2

0x0001,

0xf641,	// (0x00060af9) list_setting_pane_g_ParamLimits

0xf641,	// (0x00060af9) list_setting_pane_g

0xbbe7,	// (0x0005d09f) list_setting_pane_t1_ParamLimits

0xbbe7,	// (0x0005d09f) list_setting_pane_t1

0xbc01,	// (0x0005d0b9) list_setting_pane_t2_ParamLimits

0xbc01,	// (0x0005d0b9) list_setting_pane_t2

0x0002,

0xf646,	// (0x00060afe) list_setting_pane_t_ParamLimits

0xf646,	// (0x00060afe) list_setting_pane_t

0xbc40,	// (0x0005d0f8) set_value_pane_cp_ParamLimits

0xbc40,	// (0x0005d0f8) set_value_pane_cp

0x0223,	// (0x000516db) list_setting_number_pane_g1_ParamLimits

0x0223,	// (0x000516db) list_setting_number_pane_g1

0x022f,	// (0x000516e7) list_setting_number_pane_g2_ParamLimits

0x022f,	// (0x000516e7) list_setting_number_pane_g2

0x0001,

0xf64d,	// (0x00060b05) list_setting_number_pane_g_ParamLimits

0xf64d,	// (0x00060b05) list_setting_number_pane_g

0xbc4c,	// (0x0005d104) list_setting_number_pane_t1_ParamLimits

0xbc4c,	// (0x0005d104) list_setting_number_pane_t1

0xbc65,	// (0x0005d11d) list_setting_number_pane_t2_ParamLimits

0xbc65,	// (0x0005d11d) list_setting_number_pane_t2

0xbc7f,	// (0x0005d137) list_setting_number_pane_t3_ParamLimits

0xbc7f,	// (0x0005d137) list_setting_number_pane_t3

0x0003,

0xf652,	// (0x00060b0a) list_setting_number_pane_t_ParamLimits

0xf652,	// (0x00060b0a) list_setting_number_pane_t

0xbc40,	// (0x0005d0f8) set_value_pane_ParamLimits

0xbc40,	// (0x0005d0f8) set_value_pane

0x3968,	// (0x00054e20) bg_set_opt_pane_ParamLimits

0x3968,	// (0x00054e20) bg_set_opt_pane

0x02b1,	// (0x00051769) set_value_pane_t1

0x3989,	// (0x00054e41) slider_set_pane_cp3

0x3992,	// (0x00054e4a) volume_small_pane_cp

0x399b,	// (0x00054e53) list_form_gen_pane

0x39a4,	// (0x00054e5c) scroll_pane_cp8

0xbcc2,	// (0x0005d17a) form_field_data_pane_ParamLimits

0xbcc2,	// (0x0005d17a) form_field_data_pane

0xbcdb,	// (0x0005d193) form_field_data_wide_pane_ParamLimits

0xbcdb,	// (0x0005d193) form_field_data_wide_pane

0xbcfb,	// (0x0005d1b3) form_field_popup_pane_ParamLimits

0xbcfb,	// (0x0005d1b3) form_field_popup_pane

0xbd13,	// (0x0005d1cb) form_field_popup_wide_pane_ParamLimits

0xbd13,	// (0x0005d1cb) form_field_popup_wide_pane

0x034d,	// (0x00051805) form_field_slider_pane_ParamLimits

0x034d,	// (0x00051805) form_field_slider_pane

0x0360,	// (0x00051818) form_field_slider_wide_pane_ParamLimits

0x0360,	// (0x00051818) form_field_slider_wide_pane

0x39b5,	// (0x00054e6d) data_form_pane

0xbd3c,	// (0x0005d1f4) form_field_data_pane_t1

0x39c1,	// (0x00054e79) input_focus_pane

0x0395,	// (0x0005184d) data_form_wide_pane

0x03b2,	// (0x0005186a) form_field_data_wide_pane_t1

0x32c8,	// (0x00054780) input_focus_pane_cp6

0xbd56,	// (0x0005d20e) form_field_popup_pane_t1

0x39c1,	// (0x00054e79) input_focus_pane_cp7

0x39e3,	// (0x00054e9b) list_form_pane

0x03f4,	// (0x000518ac) form_field_popup_wide_pane_t1

0x39c1,	// (0x00054e79) input_focus_pane_cp8

0x39ef,	// (0x00054ea7) list_form_wide_pane

0xbd78,	// (0x0005d230) form_field_slider_pane_t1_ParamLimits

0xbd78,	// (0x0005d230) form_field_slider_pane_t1

0xbd90,	// (0x0005d248) form_field_slider_pane_t2_ParamLimits

0xbd90,	// (0x0005d248) form_field_slider_pane_t2

0x0001,

0xf662,	// (0x00060b1a) form_field_slider_pane_t_ParamLimits

0xf662,	// (0x00060b1a) form_field_slider_pane_t

0x2f45,	// (0x000543fd) input_focus_pane_cp9_ParamLimits

0x2f45,	// (0x000543fd) input_focus_pane_cp9

0xbda5,	// (0x0005d25d) slider_cont_pane_ParamLimits

0xbda5,	// (0x0005d25d) slider_cont_pane

0x39fb,	// (0x00054eb3) form_field_slider_wide_pane_t1_ParamLimits

0x39fb,	// (0x00054eb3) form_field_slider_wide_pane_t1

0x0450,	// (0x00051908) form_field_slider_wide_pane_t2_ParamLimits

0x0450,	// (0x00051908) form_field_slider_wide_pane_t2

0x0001,

0xf667,	// (0x00060b1f) form_field_slider_wide_pane_t_ParamLimits

0xf667,	// (0x00060b1f) form_field_slider_wide_pane_t

0x2f45,	// (0x000543fd) input_focus_pane_cp10_ParamLimits

0x2f45,	// (0x000543fd) input_focus_pane_cp10

0xbdb9,	// (0x0005d271) slider_cont_pane_cp1_ParamLimits

0xbdb9,	// (0x0005d271) slider_cont_pane_cp1

0xbdcd,	// (0x0005d285) slider_form_pane_cp

0x3a0d,	// (0x00054ec5) input_focus_pane_g1

0x3a15,	// (0x00054ecd) input_focus_pane_g2

0x3a1d,	// (0x00054ed5) input_focus_pane_g3

0x3a25,	// (0x00054edd) input_focus_pane_g4

0x3a2d,	// (0x00054ee5) input_focus_pane_g5

0x3a35,	// (0x00054eed) input_focus_pane_g6

0x3a3d,	// (0x00054ef5) input_focus_pane_g7

0x3a45,	// (0x00054efd) input_focus_pane_g8

0x3a4d,	// (0x00054f05) input_focus_pane_g9

0xdc06,	// (0x0005f0be) input_focus_pane_g10

0x0009,

0xf66c,	// (0x00060b24) input_focus_pane_g

0x54c7,	// (0x0005697f) wait_border_pane_g3_copy1

0xbdd5,	// (0x0005d28d) data_form_pane_t1

0xdc06,	// (0x0005f0be) wait_anim_pane_g1_copy1

0xc6f7,	// (0x0005dbaf) data_form_wide_pane_t1

0xbdef,	// (0x0005d2a7) list_form_graphic_pane_cp_ParamLimits

0xbdef,	// (0x0005d2a7) list_form_graphic_pane_cp

0x63e7,	// (0x0005789f) slider_form_pane_g1

0x63f0,	// (0x000578a8) slider_form_pane_g2

0x0006,

0xf96a,	// (0x00060e22) slider_form_pane_g

0xbdef,	// (0x0005d2a7) list_form_graphic_pane_ParamLimits

0xbdef,	// (0x0005d2a7) list_form_graphic_pane

0x04ce,	// (0x00051986) list_form_graphic_pane_g1

0x04d6,	// (0x0005198e) list_form_graphic_pane_t1_ParamLimits

0x04d6,	// (0x0005198e) list_form_graphic_pane_t1

0x2cca,	// (0x00054182) list_highlight_pane_cp5_ParamLimits

0x2cca,	// (0x00054182) list_highlight_pane_cp5

0x04eb,	// (0x000519a3) find_pane_g1

0x3a55,	// (0x00054f0d) input_find_pane

0x04f4,	// (0x000519ac) input_find_pane_g1_ParamLimits

0x04f4,	// (0x000519ac) input_find_pane_g1

0x0500,	// (0x000519b8) input_find_pane_t1_ParamLimits

0x0500,	// (0x000519b8) input_find_pane_t1

0x0515,	// (0x000519cd) input_find_pane_t2_ParamLimits

0x0515,	// (0x000519cd) input_find_pane_t2

0x0001,

0xf681,	// (0x00060b39) input_find_pane_t_ParamLimits

0xf681,	// (0x00060b39) input_find_pane_t

0x3a5e,	// (0x00054f16) input_focus_pane_cp5_ParamLimits

0x3a5e,	// (0x00054f16) input_focus_pane_cp5

0x3a7d,	// (0x00054f35) bg_popup_window_pane_cp2_ParamLimits

0x3a7d,	// (0x00054f35) bg_popup_window_pane_cp2

0x3a8a,	// (0x00054f42) listscroll_menu_pane_ParamLimits

0x3a8a,	// (0x00054f42) listscroll_menu_pane

0xcf06,	// (0x0005e3be) popup_submenu_window_ParamLimits

0xcf06,	// (0x0005e3be) popup_submenu_window

0x3ac2,	// (0x00054f7a) find_popup_pane_g1

0x3aca,	// (0x00054f82) input_popup_find_pane_cp

0x3ad4,	// (0x00054f8c) input_focus_pane_cp4_ParamLimits

0x3ad4,	// (0x00054f8c) input_focus_pane_cp4

0x3aee,	// (0x00054fa6) input_popup_find_pane_t1_ParamLimits

0x3aee,	// (0x00054fa6) input_popup_find_pane_t1

0x2bea,	// (0x000540a2) bg_popup_sub_pane_cp

0x3b1c,	// (0x00054fd4) listscroll_popup_sub_pane

0x3b24,	// (0x00054fdc) list_submenu_pane_ParamLimits

0x3b24,	// (0x00054fdc) list_submenu_pane

0x3b35,	// (0x00054fed) scroll_pane_cp4

0x3b3d,	// (0x00054ff5) list_single_popup_submenu_pane_ParamLimits

0x3b3d,	// (0x00054ff5) list_single_popup_submenu_pane

0x3b51,	// (0x00055009) list_single_popup_submenu_pane_g1

0x3b59,	// (0x00055011) list_single_popup_submenu_pane_t1_ParamLimits

0x3b59,	// (0x00055011) list_single_popup_submenu_pane_t1

0x2f45,	// (0x000543fd) bg_active_tab_pane_cp1_ParamLimits

0x2f45,	// (0x000543fd) bg_active_tab_pane_cp1

0x3b6e,	// (0x00055026) tabs_2_active_pane_g1

0xcf40,	// (0x0005e3f8) tabs_2_active_pane_t1

0x2f45,	// (0x000543fd) bg_passive_tab_pane_cp1_ParamLimits

0x2f45,	// (0x000543fd) bg_passive_tab_pane_cp1

0x3b6e,	// (0x00055026) tabs_2_passive_pane_g1

0xcf40,	// (0x0005e3f8) tabs_2_passive_pane_t1

0x2cca,	// (0x00054182) bg_active_tab_pane_cp4

0xcf52,	// (0x0005e40a) tabs_2_long_active_pane_t1

0x4978,	// (0x00055e30) bg_passive_tab_pane_cp4

0x11dd,	// (0x00052695) list_single_midp_graphic_pane_g4_ParamLimits

0x2cca,	// (0x00054182) bg_active_tab_pane_cp5

0xcf65,	// (0x0005e41d) tabs_3_long_active_pane_t1

0x4978,	// (0x00055e30) bg_passive_tab_pane_cp5

0x11dd,	// (0x00052695) list_single_midp_graphic_pane_g4

0x2cca,	// (0x00054182) bg_popup_window_pane_cp13_ParamLimits

0x2cca,	// (0x00054182) bg_popup_window_pane_cp13

0x3bd0,	// (0x00055088) listscroll_popup_fast_pane_ParamLimits

0x3bd0,	// (0x00055088) listscroll_popup_fast_pane

0x3bdf,	// (0x00055097) grid_popup_fast_pane_ParamLimits

0x3bdf,	// (0x00055097) grid_popup_fast_pane

0x3bf1,	// (0x000550a9) scroll_pane_cp9_ParamLimits

0x3bf1,	// (0x000550a9) scroll_pane_cp9

0x7d10,	// (0x000591c8) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x7d10,	// (0x000591c8) list_single_graphic_hl_pane_t1_cp2

0x3c15,	// (0x000550cd) input_focus_pane_cp20_ParamLimits

0x3c15,	// (0x000550cd) input_focus_pane_cp20

0x3c23,	// (0x000550db) query_popup_data_pane_t1_ParamLimits

0x3c23,	// (0x000550db) query_popup_data_pane_t1

0x3c36,	// (0x000550ee) query_popup_data_pane_t2_ParamLimits

0x3c36,	// (0x000550ee) query_popup_data_pane_t2

0x3c7c,	// (0x00055134) query_popup_data_pane_t3_ParamLimits

0x3c7c,	// (0x00055134) query_popup_data_pane_t3

0x3cbd,	// (0x00055175) query_popup_data_pane_t4_ParamLimits

0x3cbd,	// (0x00055175) query_popup_data_pane_t4

0x3cf9,	// (0x000551b1) query_popup_data_pane_t5_ParamLimits

0x3cf9,	// (0x000551b1) query_popup_data_pane_t5

0x0004,

0xf686,	// (0x00060b3e) query_popup_data_pane_t_ParamLimits

0xf686,	// (0x00060b3e) query_popup_data_pane_t

0x3a0d,	// (0x00054ec5) bg_set_opt_pane_g1

0x3a15,	// (0x00054ecd) bg_set_opt_pane_g2

0x3a1d,	// (0x00054ed5) bg_set_opt_pane_g3

0x3a25,	// (0x00054edd) bg_set_opt_pane_g4

0x3a2d,	// (0x00054ee5) bg_set_opt_pane_g5

0x3a35,	// (0x00054eed) bg_set_opt_pane_g6

0x3a3d,	// (0x00054ef5) bg_set_opt_pane_g7

0x3a45,	// (0x00054efd) bg_set_opt_pane_g8

0x3a4d,	// (0x00054f05) bg_set_opt_pane_g9

0x0008,

0xf691,	// (0x00060b49) bg_set_opt_pane_g

0x0835,	// (0x00051ced) control_top_pane_stacon_ParamLimits

0x0835,	// (0x00051ced) control_top_pane_stacon

0x0888,	// (0x00051d40) signal_pane_stacon_ParamLimits

0x0888,	// (0x00051d40) signal_pane_stacon

0x42eb,	// (0x000557a3) stacon_top_pane_g1_ParamLimits

0x42eb,	// (0x000557a3) stacon_top_pane_g1

0x08ad,	// (0x00051d65) title_pane_stacon_ParamLimits

0x08ad,	// (0x00051d65) title_pane_stacon

0x08d7,	// (0x00051d8f) uni_indicator_pane_stacon_ParamLimits

0x08d7,	// (0x00051d8f) uni_indicator_pane_stacon

0x08ec,	// (0x00051da4) battery_pane_stacon_ParamLimits

0x08ec,	// (0x00051da4) battery_pane_stacon

0x0930,	// (0x00051de8) control_bottom_pane_stacon_ParamLimits

0x0930,	// (0x00051de8) control_bottom_pane_stacon

0x0953,	// (0x00051e0b) navi_pane_stacon_ParamLimits

0x0953,	// (0x00051e0b) navi_pane_stacon

0x430d,	// (0x000557c5) stacon_bottom_pane_g1_ParamLimits

0x430d,	// (0x000557c5) stacon_bottom_pane_g1

0x052a,	// (0x000519e2) aid_levels_signal_lsc_ParamLimits

0x052a,	// (0x000519e2) aid_levels_signal_lsc

0x0540,	// (0x000519f8) signal_pane_stacon_g1_ParamLimits

0x0540,	// (0x000519f8) signal_pane_stacon_g1

0x0554,	// (0x00051a0c) signal_pane_stacon_g2_ParamLimits

0x0554,	// (0x00051a0c) signal_pane_stacon_g2

0x0001,

0xf6a4,	// (0x00060b5c) signal_pane_stacon_g_ParamLimits

0xf6a4,	// (0x00060b5c) signal_pane_stacon_g

0x0589,	// (0x00051a41) title_pane_stacon_t1_ParamLimits

0x0589,	// (0x00051a41) title_pane_stacon_t1

0x3d3d,	// (0x000551f5) uni_indicator_pane_stacon_g1

0x3d47,	// (0x000551ff) uni_indicator_pane_stacon_g2

0x3d51,	// (0x00055209) uni_indicator_pane_stacon_g3

0x3d5b,	// (0x00055213) uni_indicator_pane_stacon_g4

0x0003,

0xf6b0,	// (0x00060b68) uni_indicator_pane_stacon_g

0x05ae,	// (0x00051a66) control_top_pane_stacon_g1

0x05b6,	// (0x00051a6e) control_top_pane_stacon_t1_ParamLimits

0x05b6,	// (0x00051a6e) control_top_pane_stacon_t1

0x05ed,	// (0x00051aa5) aid_levels_battery_lsc_ParamLimits

0x05ed,	// (0x00051aa5) aid_levels_battery_lsc

0x0604,	// (0x00051abc) battery_pane_stacon_g1_ParamLimits

0x0604,	// (0x00051abc) battery_pane_stacon_g1

0x0617,	// (0x00051acf) battery_pane_stacon_g2_ParamLimits

0x0617,	// (0x00051acf) battery_pane_stacon_g2

0x0001,

0xf6b9,	// (0x00060b71) battery_pane_stacon_g_ParamLimits

0xf6b9,	// (0x00060b71) battery_pane_stacon_g

0x0655,	// (0x00051b0d) navi_icon_pane_stacon

0x0669,	// (0x00051b21) navi_navi_pane_stacon

0x0655,	// (0x00051b0d) navi_text_pane_stacon

0x05ae,	// (0x00051a66) control_bottom_pane_stacon_g1

0x067d,	// (0x00051b35) control_bottom_pane_stacon_t1_ParamLimits

0x067d,	// (0x00051b35) control_bottom_pane_stacon_t1

0xcf77,	// (0x0005e42f) grid_app_pane_ParamLimits

0xcf77,	// (0x0005e42f) grid_app_pane

0xcfaf,	// (0x0005e467) scroll_pane_cp15_ParamLimits

0xcfaf,	// (0x0005e467) scroll_pane_cp15

0xcfc4,	// (0x0005e47c) cell_app_pane_ParamLimits

0xcfc4,	// (0x0005e47c) cell_app_pane

0xd009,	// (0x0005e4c1) cell_app_pane_g1_ParamLimits

0xd009,	// (0x0005e4c1) cell_app_pane_g1

0x3e00,	// (0x000552b8) cell_app_pane_g2_ParamLimits

0x3e00,	// (0x000552b8) cell_app_pane_g2

0x0001,

0xf6be,	// (0x00060b76) cell_app_pane_g_ParamLimits

0xf6be,	// (0x00060b76) cell_app_pane_g

0xd02d,	// (0x0005e4e5) cell_app_pane_t1_ParamLimits

0xd02d,	// (0x0005e4e5) cell_app_pane_t1

0x3e23,	// (0x000552db) grid_highlight_pane_ParamLimits

0x3e23,	// (0x000552db) grid_highlight_pane

0x3a0d,	// (0x00054ec5) cell_highlight_pane_g1

0x3a15,	// (0x00054ecd) cell_highlight_pane_g2

0x3a1d,	// (0x00054ed5) cell_highlight_pane_g3

0x3a25,	// (0x00054edd) cell_highlight_pane_g4

0x3a2d,	// (0x00054ee5) cell_highlight_pane_g5

0x3a35,	// (0x00054eed) cell_highlight_pane_g6

0x3a3d,	// (0x00054ef5) cell_highlight_pane_g7

0x3a45,	// (0x00054efd) cell_highlight_pane_g8

0x3a4d,	// (0x00054f05) cell_highlight_pane_g9

0xdc06,	// (0x0005f0be) cell_highlight_pane_g10

0x0009,

0xf66c,	// (0x00060b24) cell_highlight_pane_g

0x3e34,	// (0x000552ec) bg_scroll_pane

0x06c7,	// (0x00051b7f) scroll_handle_pane

0x3e7b,	// (0x00055333) scroll_bg_pane_g1

0x3e90,	// (0x00055348) scroll_bg_pane_g2

0x3ea8,	// (0x00055360) scroll_bg_pane_g3

0x0002,

0xf6c3,	// (0x00060b7b) scroll_bg_pane_g

0x3ebd,	// (0x00055375) scroll_handle_focus_pane_ParamLimits

0x3ebd,	// (0x00055375) scroll_handle_focus_pane

0x3e7b,	// (0x00055333) scroll_handle_pane_g1

0x3eca,	// (0x00055382) scroll_handle_pane_g2

0x3ea8,	// (0x00055360) scroll_handle_pane_g3

0x0002,

0xf6ca,	// (0x00060b82) scroll_handle_pane_g

0x3ad4,	// (0x00054f8c) bg_popup_sub_pane_cp21_ParamLimits

0x3ad4,	// (0x00054f8c) bg_popup_sub_pane_cp21

0x3ede,	// (0x00055396) popup_fep_japan_predictive_window_t1_ParamLimits

0x3ede,	// (0x00055396) popup_fep_japan_predictive_window_t1

0x3ef8,	// (0x000553b0) popup_fep_japan_predictive_window_t2_ParamLimits

0x3ef8,	// (0x000553b0) popup_fep_japan_predictive_window_t2

0x3f2b,	// (0x000553e3) popup_fep_japan_predictive_window_t3_ParamLimits

0x3f2b,	// (0x000553e3) popup_fep_japan_predictive_window_t3

0x0002,

0xf6d1,	// (0x00060b89) popup_fep_japan_predictive_window_t_ParamLimits

0xf6d1,	// (0x00060b89) popup_fep_japan_predictive_window_t

0x2bea,	// (0x000540a2) bg_popup_sub_pane_cp23

0x3f62,	// (0x0005541a) listscroll_japin_cand_pane

0x3f6a,	// (0x00055422) popup_fep_japan_candidate_window_t1

0x3f78,	// (0x00055430) candidate_pane_ParamLimits

0x3f78,	// (0x00055430) candidate_pane

0x3f8a,	// (0x00055442) scroll_pane_cp30

0x3f92,	// (0x0005544a) list_single_popup_jap_candidate_pane_ParamLimits

0x3f92,	// (0x0005544a) list_single_popup_jap_candidate_pane

0x2bea,	// (0x000540a2) list_highlight_pane_cp30

0x3fa7,	// (0x0005545f) list_single_popup_jap_candidate_pane_t1

0x3fb6,	// (0x0005546e) level_1_signal

0x3fc8,	// (0x00055480) level_2_signal

0x3fdb,	// (0x00055493) level_3_signal

0x3fee,	// (0x000554a6) level_4_signal

0x4001,	// (0x000554b9) level_5_signal

0x4014,	// (0x000554cc) level_6_signal

0x4027,	// (0x000554df) level_7_signal

0x3fb6,	// (0x0005546e) level_1_battery

0x3fc8,	// (0x00055480) level_2_battery

0x3fdb,	// (0x00055493) level_3_battery

0x3fee,	// (0x000554a6) level_4_battery

0x4001,	// (0x000554b9) level_5_battery

0x4014,	// (0x000554cc) level_6_battery

0x4027,	// (0x000554df) level_7_battery

0x4052,	// (0x0005550a) list_menu_pane_ParamLimits

0x4052,	// (0x0005550a) list_menu_pane

0x4068,	// (0x00055520) scroll_pane_cp25_ParamLimits

0x4068,	// (0x00055520) scroll_pane_cp25

0x4081,	// (0x00055539) list_double2_graphic_pane_cp2_ParamLimits

0x4081,	// (0x00055539) list_double2_graphic_pane_cp2

0x4081,	// (0x00055539) list_double2_large_graphic_pane_cp2_ParamLimits

0x4081,	// (0x00055539) list_double2_large_graphic_pane_cp2

0x4081,	// (0x00055539) list_double2_pane_cp2_ParamLimits

0x4081,	// (0x00055539) list_double2_pane_cp2

0x4081,	// (0x00055539) list_double_graphic_pane_cp2_ParamLimits

0x4081,	// (0x00055539) list_double_graphic_pane_cp2

0x4081,	// (0x00055539) list_double_large_graphic_pane_cp2_ParamLimits

0x4081,	// (0x00055539) list_double_large_graphic_pane_cp2

0x4081,	// (0x00055539) list_double_number_pane_cp2_ParamLimits

0x4081,	// (0x00055539) list_double_number_pane_cp2

0x4081,	// (0x00055539) list_double_pane_cp2_ParamLimits

0x4081,	// (0x00055539) list_double_pane_cp2

0xd044,	// (0x0005e4fc) list_single_2graphic_pane_cp2_ParamLimits

0xd044,	// (0x0005e4fc) list_single_2graphic_pane_cp2

0xd044,	// (0x0005e4fc) list_single_graphic_heading_pane_cp2_ParamLimits

0xd044,	// (0x0005e4fc) list_single_graphic_heading_pane_cp2

0xd044,	// (0x0005e4fc) list_single_graphic_pane_cp2_ParamLimits

0xd044,	// (0x0005e4fc) list_single_graphic_pane_cp2

0xd044,	// (0x0005e4fc) list_single_heading_pane_cp2_ParamLimits

0xd044,	// (0x0005e4fc) list_single_heading_pane_cp2

0x40be,	// (0x00055576) list_single_large_graphic_pane_cp2_ParamLimits

0x40be,	// (0x00055576) list_single_large_graphic_pane_cp2

0xd044,	// (0x0005e4fc) list_single_number_heading_pane_cp2_ParamLimits

0xd044,	// (0x0005e4fc) list_single_number_heading_pane_cp2

0xd044,	// (0x0005e4fc) list_single_number_pane_cp2_ParamLimits

0xd044,	// (0x0005e4fc) list_single_number_pane_cp2

0xd044,	// (0x0005e4fc) list_single_pane_cp2_ParamLimits

0xd044,	// (0x0005e4fc) list_single_pane_cp2

0x413a,	// (0x000555f2) bg_popup_sub_pane_cp22

0x0779,	// (0x00051c31) popup_side_volume_key_window_g1

0x07a3,	// (0x00051c5b) popup_side_volume_key_window_t1

0x07bf,	// (0x00051c77) volume_small_pane_cp1

0x2f45,	// (0x000543fd) bg_popup_sub_pane_cp24_ParamLimits

0x2f45,	// (0x000543fd) bg_popup_sub_pane_cp24

0x4150,	// (0x00055608) fep_china_uni_candidate_pane_ParamLimits

0x4150,	// (0x00055608) fep_china_uni_candidate_pane

0x4164,	// (0x0005561c) fep_china_uni_entry_pane

0x4174,	// (0x0005562c) popup_fep_china_uni_window_g1

0x4190,	// (0x00055648) fep_china_uni_entry_pane_g1

0x4198,	// (0x00055650) fep_china_uni_entry_pane_g2

0x0001,

0xf702,	// (0x00060bba) fep_china_uni_entry_pane_g

0x41a0,	// (0x00055658) fep_entry_item_pane

0x41aa,	// (0x00055662) fep_candidate_item_pane

0x41b2,	// (0x0005566a) fep_china_uni_candidate_pane_g1

0x41ba,	// (0x00055672) fep_china_uni_candidate_pane_g2

0x41c2,	// (0x0005567a) fep_china_uni_candidate_pane_g3

0x41ca,	// (0x00055682) fep_china_uni_candidate_pane_g4

0x0003,

0xf707,	// (0x00060bbf) fep_china_uni_candidate_pane_g

0xdc06,	// (0x0005f0be) fep_entry_item_pane_g1

0x41d2,	// (0x0005568a) fep_entry_item_pane_t1_ParamLimits

0x41d2,	// (0x0005568a) fep_entry_item_pane_t1

0x41e8,	// (0x000556a0) fep_candidate_item_pane_t1_ParamLimits

0x41e8,	// (0x000556a0) fep_candidate_item_pane_t1

0x41fd,	// (0x000556b5) fep_candidate_item_pane_t2_ParamLimits

0x41fd,	// (0x000556b5) fep_candidate_item_pane_t2

0x0001,

0xf710,	// (0x00060bc8) fep_candidate_item_pane_t_ParamLimits

0xf710,	// (0x00060bc8) fep_candidate_item_pane_t

0x2cca,	// (0x00054182) list_highlight_pane_cp31_ParamLimits

0x2cca,	// (0x00054182) list_highlight_pane_cp31

0x420f,	// (0x000556c7) level_1_signal_lsc

0x4218,	// (0x000556d0) level_2_signal_lsc

0x4221,	// (0x000556d9) level_3_signal_lsc

0x422a,	// (0x000556e2) level_4_signal_lsc

0x4233,	// (0x000556eb) level_5_signal_lsc

0x423c,	// (0x000556f4) level_6_signal_lsc

0x4245,	// (0x000556fd) level_7_signal_lsc

0x4245,	// (0x000556fd) level_1_battery_lsc

0x424e,	// (0x00055706) level_2_battery_lsc

0x4257,	// (0x0005570f) level_3_battery_lsc

0x4260,	// (0x00055718) level_4_battery_lsc

0x4269,	// (0x00055721) level_5_battery_lsc

0x4272,	// (0x0005572a) level_6_battery_lsc

0x420f,	// (0x000556c7) level_7_battery_lsc

0x427b,	// (0x00055733) scroll_handle_focus_pane_g1

0x4284,	// (0x0005573c) scroll_handle_focus_pane_g2

0x428d,	// (0x00055745) scroll_handle_focus_pane_g3

0x0002,

0xf715,	// (0x00060bcd) scroll_handle_focus_pane_g

0x07c7,	// (0x00051c7f) list_single_2graphic_pane_g1_ParamLimits

0x07c7,	// (0x00051c7f) list_single_2graphic_pane_g1

0xb95c,	// (0x0005ce14) list_single_2graphic_pane_g2_ParamLimits

0xb95c,	// (0x0005ce14) list_single_2graphic_pane_g2

0x3486,	// (0x0005493e) list_single_2graphic_pane_g3_ParamLimits

0x3486,	// (0x0005493e) list_single_2graphic_pane_g3

0x07d3,	// (0x00051c8b) list_single_2graphic_pane_g4_ParamLimits

0x07d3,	// (0x00051c8b) list_single_2graphic_pane_g4

0x0003,

0xf71c,	// (0x00060bd4) list_single_2graphic_pane_g_ParamLimits

0xf71c,	// (0x00060bd4) list_single_2graphic_pane_g

0x07df,	// (0x00051c97) list_single_2graphic_pane_t1_ParamLimits

0x07df,	// (0x00051c97) list_single_2graphic_pane_t1

0xbe01,	// (0x0005d2b9) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xbe01,	// (0x0005d2b9) list_double2_graphic_large_graphic_pane_g1

0xbb08,	// (0x0005cfc0) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xbb08,	// (0x0005cfc0) list_double2_graphic_large_graphic_pane_g2

0xba55,	// (0x0005cf0d) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xba55,	// (0x0005cf0d) list_double2_graphic_large_graphic_pane_g3

0xbe13,	// (0x0005d2cb) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xbe13,	// (0x0005d2cb) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf725,	// (0x00060bdd) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf725,	// (0x00060bdd) list_double2_graphic_large_graphic_pane_g

0xbe1f,	// (0x0005d2d7) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xbe1f,	// (0x0005d2d7) list_double2_graphic_large_graphic_pane_t1

0xbe35,	// (0x0005d2ed) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xbe35,	// (0x0005d2ed) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf72e,	// (0x00060be6) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf72e,	// (0x00060be6) list_double2_graphic_large_graphic_pane_t

0x43d8,	// (0x00055890) popup_fast_swap_window_ParamLimits

0x43d8,	// (0x00055890) popup_fast_swap_window

0x43f4,	// (0x000558ac) popup_side_volume_key_window

0x4410,	// (0x000558c8) stacon_top_pane

0x441a,	// (0x000558d2) status_pane_ParamLimits

0x441a,	// (0x000558d2) status_pane

0xd0d1,	// (0x0005e589) status_small_pane

0x2bea,	// (0x000540a2) control_pane

0x2bea,	// (0x000540a2) stacon_bottom_pane

0x39a4,	// (0x00054e5c) scroll_pane_cp121

0x399b,	// (0x00054e53) set_content_pane

0x4296,	// (0x0005574e) bg_active_tab_pane_g1_cp1

0x429f,	// (0x00055757) bg_active_tab_pane_g2_cp1

0x42a8,	// (0x00055760) bg_active_tab_pane_g3_cp1

0x4296,	// (0x0005574e) bg_passive_tab_pane_g1_cp1

0x429f,	// (0x00055757) bg_passive_tab_pane_g2_cp1

0x42a8,	// (0x00055760) bg_passive_tab_pane_g3_cp1

0x42b1,	// (0x00055769) bg_active_tab_pane_g1_cp2

0x429f,	// (0x00055757) bg_active_tab_pane_g2_cp2

0x42ba,	// (0x00055772) bg_active_tab_pane_g3_cp2

0x42b1,	// (0x00055769) bg_passive_tab_pane_g1_cp2

0x429f,	// (0x00055757) bg_passive_tab_pane_g2_cp2

0x42ba,	// (0x00055772) bg_passive_tab_pane_g3_cp2

0x42c3,	// (0x0005577b) bg_active_tab_pane_g1_cp3

0x429f,	// (0x00055757) bg_active_tab_pane_g2_cp3

0x42cc,	// (0x00055784) bg_active_tab_pane_g3_cp3

0x42c3,	// (0x0005577b) bg_passive_tab_pane_g1_cp3

0x429f,	// (0x00055757) bg_passive_tab_pane_g2_cp3

0x42cc,	// (0x00055784) bg_passive_tab_pane_g3_cp3

0x42d5,	// (0x0005578d) bg_active_tab_pane_g1_cp4

0x429f,	// (0x00055757) bg_active_tab_pane_g2_cp4

0x42e0,	// (0x00055798) bg_active_tab_pane_g3_cp4

0x42d5,	// (0x0005578d) bg_passive_tab_pane_g1_cp4

0x429f,	// (0x00055757) bg_passive_tab_pane_g2_cp4

0x42e0,	// (0x00055798) bg_passive_tab_pane_g3_cp4

0x4329,	// (0x000557e1) bg_active_tab_pane_g1_cp5

0x429f,	// (0x00055757) bg_active_tab_pane_g2_cp5

0x4332,	// (0x000557ea) bg_active_tab_pane_g3_cp5

0x4329,	// (0x000557e1) bg_passive_tab_pane_g1_cp5

0x429f,	// (0x00055757) bg_passive_tab_pane_g2_cp5

0x4332,	// (0x000557ea) bg_passive_tab_pane_g3_cp5

0x69d9,	// (0x00057e91) list_set_graphic_pane_ParamLimits

0x69d9,	// (0x00057e91) list_set_graphic_pane

0x2bea,	// (0x000540a2) bg_set_opt_pane_cp4

0x435b,	// (0x00055813) list_set_graphic_pane_g1_ParamLimits

0x435b,	// (0x00055813) list_set_graphic_pane_g1

0x4367,	// (0x0005581f) list_set_graphic_pane_g2_ParamLimits

0x4367,	// (0x0005581f) list_set_graphic_pane_g2

0x0001,

0xf733,	// (0x00060beb) list_set_graphic_pane_g_ParamLimits

0xf733,	// (0x00060beb) list_set_graphic_pane_g

0x0009,

0xfa97,	// (0x00060f4f) volume_small_pane_cp_g

0x438b,	// (0x00055843) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x438b,	// (0x00055843) list_double2_large_graphic_pane_g1_cp2

0x4397,	// (0x0005584f) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x4397,	// (0x0005584f) list_double2_large_graphic_pane_g2_cp2

0x43a8,	// (0x00055860) list_double2_large_graphic_pane_g3_cp2

0x43b0,	// (0x00055868) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x43b0,	// (0x00055868) list_double2_large_graphic_pane_t1_cp2

0x43c6,	// (0x0005587e) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x43c6,	// (0x0005587e) list_double2_large_graphic_pane_t2_cp2

0x5f9a,	// (0x00057452) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x5f9a,	// (0x00057452) list_double_large_graphic_pane_g1_cp2

0x5fab,	// (0x00057463) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x5fab,	// (0x00057463) list_double_large_graphic_pane_g2_cp2

0x4541,	// (0x000559f9) list_double_large_graphic_pane_g3_cp2

0x5fbc,	// (0x00057474) list_double_large_graphic_pane_g4_cp

0x5fc4,	// (0x0005747c) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x5fc4,	// (0x0005747c) list_double_large_graphic_pane_t1_cp2

0x5fdb,	// (0x00057493) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x5fdb,	// (0x00057493) list_double_large_graphic_pane_t2_cp2

0x4433,	// (0x000558eb) list_double2_graphic_pane_g1_cp2_ParamLimits

0x4433,	// (0x000558eb) list_double2_graphic_pane_g1_cp2

0x4441,	// (0x000558f9) list_double2_graphic_pane_g2_cp2_ParamLimits

0x4441,	// (0x000558f9) list_double2_graphic_pane_g2_cp2

0x4452,	// (0x0005590a) list_double2_graphic_pane_g3_cp2

0x445c,	// (0x00055914) list_double2_graphic_pane_t1_cp2_ParamLimits

0x445c,	// (0x00055914) list_double2_graphic_pane_t1_cp2

0x4472,	// (0x0005592a) list_double2_graphic_pane_t2_cp2_ParamLimits

0x4472,	// (0x0005592a) list_double2_graphic_pane_t2_cp2

0x4484,	// (0x0005593c) list_single_number_heading_pane_g1_cp2_ParamLimits

0x4484,	// (0x0005593c) list_single_number_heading_pane_g1_cp2

0x4490,	// (0x00055948) list_single_number_heading_pane_g2_cp2

0x4498,	// (0x00055950) list_single_number_heading_pane_t1_cp2_ParamLimits

0x4498,	// (0x00055950) list_single_number_heading_pane_t1_cp2

0x44ae,	// (0x00055966) list_single_number_heading_pane_t2_cp2_ParamLimits

0x44ae,	// (0x00055966) list_single_number_heading_pane_t2_cp2

0x44c0,	// (0x00055978) list_single_number_heading_pane_t3_cp2_ParamLimits

0x44c0,	// (0x00055978) list_single_number_heading_pane_t3_cp2

0x4484,	// (0x0005593c) list_single_heading_pane_g1_cp2_ParamLimits

0x4484,	// (0x0005593c) list_single_heading_pane_g1_cp2

0x4490,	// (0x00055948) list_single_heading_pane_g2_cp2

0x4498,	// (0x00055950) list_single_heading_pane_t1_cp2_ParamLimits

0x4498,	// (0x00055950) list_single_heading_pane_t1_cp2

0x5da2,	// (0x0005725a) list_single_heading_pane_t2_cp2_ParamLimits

0x5da2,	// (0x0005725a) list_single_heading_pane_t2_cp2

0x5cea,	// (0x000571a2) list_double_graphic_pane_g1_cp2_ParamLimits

0x5cea,	// (0x000571a2) list_double_graphic_pane_g1_cp2

0x5cf6,	// (0x000571ae) list_double_graphic_pane_g2_cp2_ParamLimits

0x5cf6,	// (0x000571ae) list_double_graphic_pane_g2_cp2

0x5d05,	// (0x000571bd) list_double_graphic_pane_g3_cp2

0x5d0d,	// (0x000571c5) list_double_graphic_pane_t1_cp2_ParamLimits

0x5d0d,	// (0x000571c5) list_double_graphic_pane_t1_cp2

0x5d23,	// (0x000571db) list_double_graphic_pane_t2_cp2_ParamLimits

0x5d23,	// (0x000571db) list_double_graphic_pane_t2_cp2

0x4535,	// (0x000559ed) list_double_number_pane_g1_cp2_ParamLimits

0x4535,	// (0x000559ed) list_double_number_pane_g1_cp2

0x4541,	// (0x000559f9) list_double_number_pane_g2_cp2

0x5cae,	// (0x00057166) list_double_number_pane_t1_cp2_ParamLimits

0x5cae,	// (0x00057166) list_double_number_pane_t1_cp2

0x5cc2,	// (0x0005717a) list_double_number_pane_t2_cp2_ParamLimits

0x5cc2,	// (0x0005717a) list_double_number_pane_t2_cp2

0x5cd8,	// (0x00057190) list_double_number_pane_t3_cp2_ParamLimits

0x5cd8,	// (0x00057190) list_double_number_pane_t3_cp2

0x5b97,	// (0x0005704f) list_single_graphic_pane_g1_cp2_ParamLimits

0x5b97,	// (0x0005704f) list_single_graphic_pane_g1_cp2

0x4599,	// (0x00055a51) list_single_graphic_pane_g2_cp2_ParamLimits

0x4599,	// (0x00055a51) list_single_graphic_pane_g2_cp2

0x45a5,	// (0x00055a5d) list_single_graphic_pane_g3_cp2

0x5b6d,	// (0x00057025) list_single_graphic_pane_t1_cp2_ParamLimits

0x5b6d,	// (0x00057025) list_single_graphic_pane_t1_cp2

0x4599,	// (0x00055a51) list_single_number_pane_g1_cp2_ParamLimits

0x4599,	// (0x00055a51) list_single_number_pane_g1_cp2

0x45a5,	// (0x00055a5d) list_single_number_pane_g2_cp2

0x5b6d,	// (0x00057025) list_single_number_pane_t1_cp2_ParamLimits

0x5b6d,	// (0x00057025) list_single_number_pane_t1_cp2

0x5b83,	// (0x0005703b) list_single_number_pane_t2_cp2_ParamLimits

0x5b83,	// (0x0005703b) list_single_number_pane_t2_cp2

0x4397,	// (0x0005584f) list_double2_pane_g1_cp2_ParamLimits

0x4397,	// (0x0005584f) list_double2_pane_g1_cp2

0x43a8,	// (0x00055860) list_double2_pane_g2_cp2

0x450d,	// (0x000559c5) list_double2_pane_t1_cp2_ParamLimits

0x450d,	// (0x000559c5) list_double2_pane_t1_cp2

0x4523,	// (0x000559db) list_double2_pane_t2_cp2_ParamLimits

0x4523,	// (0x000559db) list_double2_pane_t2_cp2

0x4535,	// (0x000559ed) list_double_pane_g1_cp2_ParamLimits

0x4535,	// (0x000559ed) list_double_pane_g1_cp2

0x4541,	// (0x000559f9) list_double_pane_g2_cp2

0x4549,	// (0x00055a01) list_double_pane_t1_cp2_ParamLimits

0x4549,	// (0x00055a01) list_double_pane_t1_cp2

0x455f,	// (0x00055a17) list_double_pane_t2_cp2_ParamLimits

0x455f,	// (0x00055a17) list_double_pane_t2_cp2

0x4589,	// (0x00055a41) list_single_pane_cp2_g3

0x4599,	// (0x00055a51) list_single_pane_g1_cp2_ParamLimits

0x4599,	// (0x00055a51) list_single_pane_g1_cp2

0x45a5,	// (0x00055a5d) list_single_pane_g2_cp2

0x45ad,	// (0x00055a65) list_single_pane_t1_cp2_ParamLimits

0x45ad,	// (0x00055a65) list_single_pane_t1_cp2

0x45c5,	// (0x00055a7d) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x45c5,	// (0x00055a7d) list_single_large_graphic_pane_g1_cp2

0x3950,	// (0x00054e08) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x3950,	// (0x00054e08) list_single_large_graphic_pane_g2_cp2

0x45d1,	// (0x00055a89) list_single_large_graphic_pane_g3_cp2

0x45d9,	// (0x00055a91) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x45d9,	// (0x00055a91) list_single_large_graphic_pane_g4_cp1

0x45f3,	// (0x00055aab) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x45f3,	// (0x00055aab) list_single_large_graphic_pane_t1_cp2

0x5b39,	// (0x00056ff1) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x5b39,	// (0x00056ff1) list_single_graphic_heading_pane_g1_cp2

0x5b06,	// (0x00056fbe) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x5b06,	// (0x00056fbe) list_single_graphic_heading_pane_g4_cp2

0x45a5,	// (0x00055a5d) list_single_graphic_heading_pane_g5_cp2

0x5b45,	// (0x00056ffd) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x5b45,	// (0x00056ffd) list_single_graphic_heading_pane_t1_cp2

0x5b5b,	// (0x00057013) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x5b5b,	// (0x00057013) list_single_graphic_heading_pane_t2_cp2

0x5afa,	// (0x00056fb2) list_single_2graphic_pane_g1_cp2_ParamLimits

0x5afa,	// (0x00056fb2) list_single_2graphic_pane_g1_cp2

0x5b06,	// (0x00056fbe) list_single_2graphic_pane_g2_cp2_ParamLimits

0x5b06,	// (0x00056fbe) list_single_2graphic_pane_g2_cp2

0x45a5,	// (0x00055a5d) list_single_2graphic_pane_g3_cp2

0x5b17,	// (0x00056fcf) list_single_2graphic_pane_g4_cp2_ParamLimits

0x5b17,	// (0x00056fcf) list_single_2graphic_pane_g4_cp2

0x5b23,	// (0x00056fdb) list_single_2graphic_pane_t1_cp2_ParamLimits

0x5b23,	// (0x00056fdb) list_single_2graphic_pane_t1_cp2

0xdc06,	// (0x0005f0be) list_highlight_pane_g10_cp1

0x56d2,	// (0x00056b8a) list_highlight_pane_g1_cp1

0x56da,	// (0x00056b92) list_highlight_pane_g2_cp1

0x56e2,	// (0x00056b9a) list_highlight_pane_g3_cp1

0x56ea,	// (0x00056ba2) list_highlight_pane_g4_cp1

0x56f2,	// (0x00056baa) list_highlight_pane_g5_cp1

0x56fa,	// (0x00056bb2) list_highlight_pane_g6_cp1

0x5702,	// (0x00056bba) list_highlight_pane_g7_cp1

0x570a,	// (0x00056bc2) list_highlight_pane_g8_cp1

0x5712,	// (0x00056bca) list_highlight_pane_g9_cp1

0xd72c,	// (0x0005ebe4) form_field_slider_pane_t3

0xd73a,	// (0x0005ebf2) form_field_slider_pane_t4

0x560e,	// (0x00056ac6) slider_form_pane_ParamLimits

0x560e,	// (0x00056ac6) slider_form_pane

0x2bea,	// (0x000540a2) control_abbreviations

0x2bea,	// (0x000540a2) control_conventions

0x2bea,	// (0x000540a2) control_definitions

0x2bea,	// (0x000540a2) format_table_attribute

0x5dec,	// (0x000572a4) bg_popup_preview_window_pane_g9

0x2bea,	// (0x000540a2) format_table_data2

0x2bea,	// (0x000540a2) format_table_data3

0x2bea,	// (0x000540a2) format_table_data_example

0x0008,

0x2bea,	// (0x000540a2) intro_purpose

0xf8ca,	// (0x00060d82) bg_popup_preview_window_pane_g

0x2bea,	// (0x000540a2) texts_category

0x2bea,	// (0x000540a2) texts_graphics

0x4609,	// (0x00055ac1) text_digital

0x4618,	// (0x00055ad0) text_primary

0x4627,	// (0x00055adf) text_primary_small

0x4636,	// (0x00055aee) text_secondary

0x4645,	// (0x00055afd) text_title

0x650d,	// (0x000579c5) bg_passive_tab_pane_g1_cp3_srt

0x429f,	// (0x00055757) bg_passive_tab_pane_g2_cp3_srt

0x6516,	// (0x000579ce) bg_passive_tab_pane_g3_cp3_srt

0x2f45,	// (0x000543fd) bg_active_tab_pane_cp3_srt_ParamLimits

0x2f45,	// (0x000543fd) bg_active_tab_pane_cp3_srt

0x651f,	// (0x000579d7) tabs_4_active_pane_srt_g1

0xda7f,	// (0x0005ef37) tabs_4_active_pane_srt_t1_ParamLimits

0xda7f,	// (0x0005ef37) tabs_4_active_pane_srt_t1

0x650d,	// (0x000579c5) bg_active_tab_pane_g1_cp3_copy1

0x429f,	// (0x00055757) bg_active_tab_pane_g2_cp3_copy1

0x6516,	// (0x000579ce) bg_active_tab_pane_g3_cp3_copy1

0x2cca,	// (0x00054182) tabs_2_long_active_pane_srt_ParamLimits

0x2cca,	// (0x00054182) tabs_2_long_active_pane_srt

0x2cca,	// (0x00054182) tabs_2_long_passive_pane_srt_ParamLimits

0x2cca,	// (0x00054182) tabs_2_long_passive_pane_srt

0x4978,	// (0x00055e30) bg_passive_tab_pane_cp4_srt_ParamLimits

0x4978,	// (0x00055e30) bg_passive_tab_pane_cp4_srt

0x621a,	// (0x000576d2) bg_passive_tab_pane_g1_cp4_srt

0x429f,	// (0x00055757) bg_passive_tab_pane_g2_cp4_srt

0x6223,	// (0x000576db) bg_passive_tab_pane_g3_cp4_srt

0x2cca,	// (0x00054182) bg_active_tab_pane_cp4_srt_ParamLimits

0x2cca,	// (0x00054182) bg_active_tab_pane_cp4_srt

0xd897,	// (0x0005ed4f) tabs_2_long_active_pane_srt_t1_ParamLimits

0xd897,	// (0x0005ed4f) tabs_2_long_active_pane_srt_t1

0x621a,	// (0x000576d2) bg_active_tab_pane_g1_cp4_srt

0x429f,	// (0x00055757) bg_active_tab_pane_g2_cp4_srt

0x6223,	// (0x000576db) bg_active_tab_pane_g3_cp4_srt

0x2f45,	// (0x000543fd) tabs_3_long_active_pane_srt_ParamLimits

0x2f45,	// (0x000543fd) tabs_3_long_active_pane_srt

0x2f45,	// (0x000543fd) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x2f45,	// (0x000543fd) tabs_3_long_passive_pane_cp_srt

0x2f45,	// (0x000543fd) tabs_3_long_passive_pane_srt_ParamLimits

0x2f45,	// (0x000543fd) tabs_3_long_passive_pane_srt

0x4978,	// (0x00055e30) bg_passive_tab_pane_cp5_srt_ParamLimits

0x4978,	// (0x00055e30) bg_passive_tab_pane_cp5_srt

0x4329,	// (0x000557e1) bg_passive_tab_pane_g1_cp5_srt

0x429f,	// (0x00055757) bg_passive_tab_pane_g2_cp5_srt

0x4332,	// (0x000557ea) bg_passive_tab_pane_g3_cp5_srt

0x2cca,	// (0x00054182) bg_active_tab_pane_cp5_srt_ParamLimits

0x2cca,	// (0x00054182) bg_active_tab_pane_cp5_srt

0xd881,	// (0x0005ed39) tabs_3_long_active_pane_srt_t1_ParamLimits

0xd881,	// (0x0005ed39) tabs_3_long_active_pane_srt_t1

0x4329,	// (0x000557e1) bg_active_tab_pane_g1_cp5_srt

0x429f,	// (0x00055757) bg_active_tab_pane_g2_cp5_srt

0x4332,	// (0x000557ea) bg_active_tab_pane_g3_cp5_srt

0x61fa,	// (0x000576b2) navi_text_pane_srt_t1

0x61f2,	// (0x000576aa) navi_icon_pane_srt_g1

0x481a,	// (0x00055cd2) midp_editing_number_pane_srt

0x4654,	// (0x00055b0c) midp_ticker_pane_srt

0x4822,	// (0x00055cda) midp_ticker_pane_srt_g1

0x482a,	// (0x00055ce2) midp_ticker_pane_srt_g2

0x0001,

0xf752,	// (0x00060c0a) midp_ticker_pane_srt_g

0x4832,	// (0x00055cea) midp_ticker_pane_srt_t1

0x61e3,	// (0x0005769b) midp_editing_number_pane_t1_copy1

0xd0ff,	// (0x0005e5b7) listscroll_midp_pane

0xd0ff,	// (0x0005e5b7) midp_form_pane

0x46cc,	// (0x00055b84) midp_info_popup_window_ParamLimits

0x46cc,	// (0x00055b84) midp_info_popup_window

0x3ad4,	// (0x00054f8c) bg_popup_sub_pane_cp50_ParamLimits

0x3ad4,	// (0x00054f8c) bg_popup_sub_pane_cp50

0x52f6,	// (0x000567ae) listscroll_midp_info_pane_ParamLimits

0x52f6,	// (0x000567ae) listscroll_midp_info_pane

0x52d6,	// (0x0005678e) listscroll_form_midp_pane_ParamLimits

0x52d6,	// (0x0005678e) listscroll_form_midp_pane

0x52e2,	// (0x0005679a) scroll_bar_cp050

0x52d6,	// (0x0005678e) list_midp_pane

0x6f94,	// (0x0005844c) signal_pane_g2_cp

0x51f0,	// (0x000566a8) listscroll_midp_info_pane_t1_ParamLimits

0x51f0,	// (0x000566a8) listscroll_midp_info_pane_t1

0x5208,	// (0x000566c0) listscroll_midp_info_pane_t2_ParamLimits

0x5208,	// (0x000566c0) listscroll_midp_info_pane_t2

0x5246,	// (0x000566fe) listscroll_midp_info_pane_t3_ParamLimits

0x5246,	// (0x000566fe) listscroll_midp_info_pane_t3

0x5280,	// (0x00056738) listscroll_midp_info_pane_t4_ParamLimits

0x5280,	// (0x00056738) listscroll_midp_info_pane_t4

0x0003,

0xf805,	// (0x00060cbd) listscroll_midp_info_pane_t_ParamLimits

0xf805,	// (0x00060cbd) listscroll_midp_info_pane_t

0x3b35,	// (0x00054fed) scroll_pane_cp21

0x518e,	// (0x00056646) form_midp_field_choice_group_pane

0x5197,	// (0x0005664f) form_midp_field_text_pane

0x51d6,	// (0x0005668e) form_midp_field_time_pane

0x51de,	// (0x00056696) form_midp_gauge_slider_pane

0x51e7,	// (0x0005669f) form_midp_gauge_wait_pane

0x2bea,	// (0x000540a2) form_midp_image_pane

0xc6e2,	// (0x0005db9a) list_single_midp_pane_ParamLimits

0xc6e2,	// (0x0005db9a) list_single_midp_pane

0xd70b,	// (0x0005ebc3) form_midp_field_text_pane_t1

0x4f16,	// (0x000563ce) input_focus_pane_cp050

0x517d,	// (0x00056635) list_midp_form_text_pane

0x5115,	// (0x000565cd) form_midp_field_choice_group_pane_t1

0x5123,	// (0x000565db) input_focus_pane_cp051

0x5137,	// (0x000565ef) list_midp_choice_pane

0x2bea,	// (0x000540a2) status_idle_pane

0x50f9,	// (0x000565b1) form_midp_field_time_pane_t1

0xdc06,	// (0x0005f0be) wait_anim_pane_g2_copy1

0x5107,	// (0x000565bf) form_midp_field_time_pane_t2

0x0001,

0x477a,	// (0x00055c32) aid_navinavi_width_2_pane

0xf800,	// (0x00060cb8) form_midp_field_time_pane_t

0x2bea,	// (0x000540a2) input_focus_pane_cp052

0x2bea,	// (0x000540a2) bg_input_focus_pane_cp040

0x50b9,	// (0x00056571) form_midp_gauge_slider_pane_t1

0x50c7,	// (0x0005657f) form_midp_gauge_slider_pane_t2

0xd6ef,	// (0x0005eba7) form_midp_gauge_slider_pane_t3

0xd6fd,	// (0x0005ebb5) form_midp_gauge_slider_pane_t4

0x0003,

0xf7f7,	// (0x00060caf) form_midp_gauge_slider_pane_t

0x50f1,	// (0x000565a9) form_midp_slider_pane

0x2cca,	// (0x00054182) bg_input_focus_pane_cp041_ParamLimits

0x2cca,	// (0x00054182) bg_input_focus_pane_cp041

0x5086,	// (0x0005653e) form_midp_gauge_wait_pane_t1_ParamLimits

0x5086,	// (0x0005653e) form_midp_gauge_wait_pane_t1

0x5098,	// (0x00056550) form_midp_gauge_wait_pane_t2_ParamLimits

0x5098,	// (0x00056550) form_midp_gauge_wait_pane_t2

0x0001,

0xf7f2,	// (0x00060caa) form_midp_gauge_wait_pane_t_ParamLimits

0xf7f2,	// (0x00060caa) form_midp_gauge_wait_pane_t

0x50aa,	// (0x00056562) form_midp_wait_pane_ParamLimits

0x50aa,	// (0x00056562) form_midp_wait_pane

0x5050,	// (0x00056508) form_midp_image_pane_g1

0x5059,	// (0x00056511) form_midp_image_pane_t1

0x5068,	// (0x00056520) form_midp_image_pane_t2

0x5077,	// (0x0005652f) form_midp_image_pane_t3

0x0002,

0xf7eb,	// (0x00060ca3) form_midp_image_pane_t

0x5047,	// (0x000564ff) list_single_midp_pane_g1

0x1358,	// (0x00052810) list_single_midp_pane_t1

0xd6db,	// (0x0005eb93) list_midp_form_item_pane_ParamLimits

0xd6db,	// (0x0005eb93) list_midp_form_item_pane

0x4722,	// (0x00055bda) list_midp_form_item_pane_t1

0x4731,	// (0x00055be9) midp_ticker_pane_g1

0x473d,	// (0x00055bf5) midp_ticker_pane_g2

0x0001,

0xf738,	// (0x00060bf0) midp_ticker_pane_g

0x4749,	// (0x00055c01) midp_ticker_pane_t1

0x6434,	// (0x000578ec) midp_editing_number_pane_t1

0x6412,	// (0x000578ca) midp_editing_number_pane

0x6421,	// (0x000578d9) midp_ticker_pane

0x61d3,	// (0x0005768b) ai_message_heading_pane

0x2bea,	// (0x000540a2) bg_popup_window_pane_cp14

0x61db,	// (0x00057693) listscroll_ai_message_pane

0x615d,	// (0x00057615) ai_message_heading_pane_g1_ParamLimits

0x615d,	// (0x00057615) ai_message_heading_pane_g1

0x6169,	// (0x00057621) ai_message_heading_pane_g2_ParamLimits

0x6169,	// (0x00057621) ai_message_heading_pane_g2

0x6175,	// (0x0005762d) ai_message_heading_pane_g3_ParamLimits

0x6175,	// (0x0005762d) ai_message_heading_pane_g3

0x6181,	// (0x00057639) ai_message_heading_pane_g4_ParamLimits

0x6181,	// (0x00057639) ai_message_heading_pane_g4

0x0003,

0xf92c,	// (0x00060de4) ai_message_heading_pane_g_ParamLimits

0xf92c,	// (0x00060de4) ai_message_heading_pane_g

0x618d,	// (0x00057645) ai_message_heading_pane_t1_ParamLimits

0x618d,	// (0x00057645) ai_message_heading_pane_t1

0x61a7,	// (0x0005765f) ai_message_heading_pane_t2_ParamLimits

0x61a7,	// (0x0005765f) ai_message_heading_pane_t2

0x0001,

0xf935,	// (0x00060ded) ai_message_heading_pane_t_ParamLimits

0xf935,	// (0x00060ded) ai_message_heading_pane_t

0x61b9,	// (0x00057671) bg_popup_heading_pane_cp1_ParamLimits

0x61b9,	// (0x00057671) bg_popup_heading_pane_cp1

0x614b,	// (0x00057603) list_ai_message_pane_ParamLimits

0x614b,	// (0x00057603) list_ai_message_pane

0x3b35,	// (0x00054fed) scroll_pane_cp10

0x60e7,	// (0x0005759f) list_ai_message_pane_g1

0x60ef,	// (0x000575a7) list_ai_message_pane_g2

0x0001,

0xf909,	// (0x00060dc1) list_ai_message_pane_g

0x60f7,	// (0x000575af) list_ai_message_pane_t1_ParamLimits

0x60f7,	// (0x000575af) list_ai_message_pane_t1

0x610c,	// (0x000575c4) list_ai_message_pane_t2_ParamLimits

0x610c,	// (0x000575c4) list_ai_message_pane_t2

0x6121,	// (0x000575d9) list_ai_message_pane_t3_ParamLimits

0x6121,	// (0x000575d9) list_ai_message_pane_t3

0x6136,	// (0x000575ee) list_ai_message_pane_t4_ParamLimits

0x6136,	// (0x000575ee) list_ai_message_pane_t4

0x0003,

0xf90e,	// (0x00060dc6) list_ai_message_pane_t_ParamLimits

0xf90e,	// (0x00060dc6) list_ai_message_pane_t

0xd860,	// (0x0005ed18) cell_ai_soft_ind_pane_ParamLimits

0xd860,	// (0x0005ed18) cell_ai_soft_ind_pane

0x475b,	// (0x00055c13) cell_ai_soft_ind_pane_g1_ParamLimits

0x475b,	// (0x00055c13) cell_ai_soft_ind_pane_g1

0x2bea,	// (0x000540a2) grid_highlight_cp1

0x4768,	// (0x00055c20) text_secondary_cp56_ParamLimits

0x4768,	// (0x00055c20) text_secondary_cp56

0x60a7,	// (0x0005755f) example_general_pane_ParamLimits

0x60a7,	// (0x0005755f) example_general_pane

0x60b3,	// (0x0005756b) example_parent_pane_g1_ParamLimits

0x60b3,	// (0x0005756b) example_parent_pane_g1

0x60bf,	// (0x00057577) example_parent_pane_t1_ParamLimits

0x60bf,	// (0x00057577) example_parent_pane_t1

0xc38c,	// (0x0005d844) popup_preview_text_window_ParamLimits

0xc38c,	// (0x0005d844) popup_preview_text_window

0x4591,	// (0x00055a49) list_single_pane_cp2_g4

0x3021,	// (0x000544d9) bg_popup_preview_window_pane_ParamLimits

0x3021,	// (0x000544d9) bg_popup_preview_window_pane

0x5df4,	// (0x000572ac) popup_preview_text_window_t1_ParamLimits

0x5df4,	// (0x000572ac) popup_preview_text_window_t1

0x5e12,	// (0x000572ca) popup_preview_text_window_t2_ParamLimits

0x5e12,	// (0x000572ca) popup_preview_text_window_t2

0x5e5b,	// (0x00057313) popup_preview_text_window_t3_ParamLimits

0x5e5b,	// (0x00057313) popup_preview_text_window_t3

0x5ea0,	// (0x00057358) popup_preview_text_window_t4_ParamLimits

0x5ea0,	// (0x00057358) popup_preview_text_window_t4

0x0004,

0xf8dd,	// (0x00060d95) popup_preview_text_window_t_ParamLimits

0xf8dd,	// (0x00060d95) popup_preview_text_window_t

0x5f1e,	// (0x000573d6) scroll_pane_cp11

0x4ea2,	// (0x0005635a) bg_popup_preview_window_pane_g1

0x5db4,	// (0x0005726c) bg_popup_preview_window_pane_g2

0x5dbc,	// (0x00057274) bg_popup_preview_window_pane_g3

0x5dc4,	// (0x0005727c) bg_popup_preview_window_pane_g4

0x5dcc,	// (0x00057284) bg_popup_preview_window_pane_g5

0x5dd4,	// (0x0005728c) bg_popup_preview_window_pane_g6

0x5ddc,	// (0x00057294) bg_popup_preview_window_pane_g7

0x5de4,	// (0x0005729c) bg_popup_preview_window_pane_g8

0xf269,	// (0x00060721) aid_popup_width_pane

0xc308,	// (0x0005d7c0) popup_midp_note_alarm_window_ParamLimits

0xc308,	// (0x0005d7c0) popup_midp_note_alarm_window

0x39b5,	// (0x00054e6d) data_form_pane_ParamLimits

0xbd32,	// (0x0005d1ea) form_field_data_pane_g1

0xbd3c,	// (0x0005d1f4) form_field_data_pane_t1_ParamLimits

0x39c1,	// (0x00054e79) input_focus_pane_ParamLimits

0x0395,	// (0x0005184d) data_form_wide_pane_ParamLimits

0x03a6,	// (0x0005185e) form_field_data_wide_pane_g1

0x03b2,	// (0x0005186a) form_field_data_wide_pane_t1_ParamLimits

0x32c8,	// (0x00054780) input_focus_pane_cp6_ParamLimits

0xcf32,	// (0x0005e3ea) input_popup_find_pane_g1_ParamLimits

0xcf32,	// (0x0005e3ea) input_popup_find_pane_g1

0x0628,	// (0x00051ae0) aid_navi_side_left_pane

0x063d,	// (0x00051af5) aid_navi_side_right_pane

0x57cd,	// (0x00056c85) bg_popup_window_pane_cp30_ParamLimits

0x57cd,	// (0x00056c85) bg_popup_window_pane_cp30

0x5847,	// (0x00056cff) popup_midp_note_alarm_window_g1_ParamLimits

0x5847,	// (0x00056cff) popup_midp_note_alarm_window_g1

0x5877,	// (0x00056d2f) popup_midp_note_alarm_window_t1_ParamLimits

0x5877,	// (0x00056d2f) popup_midp_note_alarm_window_t1

0x5918,	// (0x00056dd0) popup_midp_note_alarm_window_t2_ParamLimits

0x5918,	// (0x00056dd0) popup_midp_note_alarm_window_t2

0x59c6,	// (0x00056e7e) popup_midp_note_alarm_window_t3_ParamLimits

0x59c6,	// (0x00056e7e) popup_midp_note_alarm_window_t3

0x59f8,	// (0x00056eb0) popup_midp_note_alarm_window_t4_ParamLimits

0x59f8,	// (0x00056eb0) popup_midp_note_alarm_window_t4

0x5a1e,	// (0x00056ed6) popup_midp_note_alarm_window_t5_ParamLimits

0x5a1e,	// (0x00056ed6) popup_midp_note_alarm_window_t5

0x000a,

0xf87a,	// (0x00060d32) popup_midp_note_alarm_window_t_ParamLimits

0xf87a,	// (0x00060d32) popup_midp_note_alarm_window_t

0x5aca,	// (0x00056f82) wait_bar_pane_cp1_ParamLimits

0x5aca,	// (0x00056f82) wait_bar_pane_cp1

0x2bea,	// (0x000540a2) wait_anim_pane_copy1

0x2bea,	// (0x000540a2) wait_border_pane_copy1

0x54b3,	// (0x0005696b) wait_border_pane_g1_copy1

0x03cc,	// (0x00051884) form_field_popup_pane_g1

0xbd56,	// (0x0005d20e) form_field_popup_pane_t1_ParamLimits

0x39c1,	// (0x00054e79) input_focus_pane_cp7_ParamLimits

0x39e3,	// (0x00054e9b) list_form_pane_ParamLimits

0x03ec,	// (0x000518a4) form_field_popup_wide_pane_g1

0x03f4,	// (0x000518ac) form_field_popup_wide_pane_t1_ParamLimits

0x39c1,	// (0x00054e79) input_focus_pane_cp8_ParamLimits

0x39ef,	// (0x00054ea7) list_form_wide_pane_ParamLimits

0x65af,	// (0x00057a67) aid_size_cell_graphic_pane

0xbdd5,	// (0x0005d28d) data_form_pane_t1_ParamLimits

0xc6f7,	// (0x0005dbaf) data_form_wide_pane_t1_ParamLimits

0xd360,	// (0x0005e818) bg_status_flat_pane

0xb5ff,	// (0x0005cab7) title_pane_t1_ParamLimits

0x2c92,	// (0x0005414a) title_pane_t2_ParamLimits

0x2cb8,	// (0x00054170) title_pane_t3_ParamLimits

0xf532,	// (0x000609ea) title_pane_t_ParamLimits

0x3fb6,	// (0x0005546e) level_1_signal_ParamLimits

0x3fc8,	// (0x00055480) level_2_signal_ParamLimits

0x3fdb,	// (0x00055493) level_3_signal_ParamLimits

0x3fee,	// (0x000554a6) level_4_signal_ParamLimits

0x4001,	// (0x000554b9) level_5_signal_ParamLimits

0x4014,	// (0x000554cc) level_6_signal_ParamLimits

0x4027,	// (0x000554df) level_7_signal_ParamLimits

0x3fb6,	// (0x0005546e) level_1_battery_ParamLimits

0x3fc8,	// (0x00055480) level_2_battery_ParamLimits

0x3fdb,	// (0x00055493) level_3_battery_ParamLimits

0x3fee,	// (0x000554a6) level_4_battery_ParamLimits

0x4001,	// (0x000554b9) level_5_battery_ParamLimits

0x4014,	// (0x000554cc) level_6_battery_ParamLimits

0x4027,	// (0x000554df) level_7_battery_ParamLimits

0x56d2,	// (0x00056b8a) bg_status_flat_pane_g1

0x56da,	// (0x00056b92) bg_status_flat_pane_g2

0x56e2,	// (0x00056b9a) bg_status_flat_pane_g3

0x56ea,	// (0x00056ba2) bg_status_flat_pane_g4

0x56f2,	// (0x00056baa) bg_status_flat_pane_g5

0x56fa,	// (0x00056bb2) bg_status_flat_pane_g6

0x5702,	// (0x00056bba) bg_status_flat_pane_g7

0xb68b,	// (0x0005cb43) tabs_3_active_pane_t1_ParamLimits

0xb68b,	// (0x0005cb43) tabs_3_passive_pane_t1_ParamLimits

0xb69d,	// (0x0005cb55) tabs_4_active_pane_t1_ParamLimits

0xb69d,	// (0x0005cb55) tabs_4_1_passive_pane_t1_ParamLimits

0xcf40,	// (0x0005e3f8) tabs_2_active_pane_t1_ParamLimits

0xcf40,	// (0x0005e3f8) tabs_2_passive_pane_t1_ParamLimits

0x2cca,	// (0x00054182) bg_active_tab_pane_cp4_ParamLimits

0xcf52,	// (0x0005e40a) tabs_2_long_active_pane_t1_ParamLimits

0x4978,	// (0x00055e30) bg_passive_tab_pane_cp4_ParamLimits

0x1239,	// (0x000526f1) list_single_midp_graphic_pane_t1_ParamLimits

0x2cca,	// (0x00054182) bg_active_tab_pane_cp5_ParamLimits

0xcf65,	// (0x0005e41d) tabs_3_long_active_pane_t1_ParamLimits

0x4978,	// (0x00055e30) bg_passive_tab_pane_cp5_ParamLimits

0x1239,	// (0x000526f1) list_single_midp_graphic_pane_t1

0xd360,	// (0x0005e818) bg_status_flat_pane_ParamLimits

0x4b32,	// (0x00055fea) indicator_pane_cp2_ParamLimits

0x4b32,	// (0x00055fea) indicator_pane_cp2

0xd4de,	// (0x0005e996) navi_pane_srt_ParamLimits

0xd4de,	// (0x0005e996) navi_pane_srt

0x4c81,	// (0x00056139) popup_clock_digital_analogue_window_cp1

0x2da7,	// (0x0005425f) indicator_pane_t1

0x4654,	// (0x00055b0c) copy_highlight_pane

0x4654,	// (0x00055b0c) cursor_graphics_pane

0x4654,	// (0x00055b0c) graphic_within_text_pane

0x4654,	// (0x00055b0c) link_highlight_pane

0x5ee1,	// (0x00057399) popup_preview_text_window_t5_ParamLimits

0x5ee1,	// (0x00057399) popup_preview_text_window_t5

0x4782,	// (0x00055c3a) cursor_digital_pane

0x4782,	// (0x00055c3a) cursor_primary_pane

0x4793,	// (0x00055c4b) cursor_primary_small_pane

0x479b,	// (0x00055c53) cursor_secondary_pane

0x47a3,	// (0x00055c5b) cursor_title_pane

0x4782,	// (0x00055c3a) link_highlight_digital_pane

0x478a,	// (0x00055c42) link_highlight_primary_pane

0x4793,	// (0x00055c4b) link_highlight_primary_small_pane

0x479b,	// (0x00055c53) link_highlight_secondary_pane

0x47a3,	// (0x00055c5b) link_highlight_title_pane

0x4782,	// (0x00055c3a) copy_highlight_digital_pane

0x4782,	// (0x00055c3a) copy_highlight_primary_pane

0x4793,	// (0x00055c4b) copy_highlight_primary_small_pane

0x479b,	// (0x00055c53) copy_highlight_secondary_pane

0x47a3,	// (0x00055c5b) copy_highlight_title_pane

0x479b,	// (0x00055c53) graphic_text_digital_pane

0x5770,	// (0x00056c28) graphic_text_primary_pane

0x5779,	// (0x00056c31) graphic_text_primary_small_pane

0x4793,	// (0x00055c4b) graphic_text_secondary_pane

0x4782,	// (0x00055c3a) graphic_text_title_pane

0xd1a4,	// (0x0005e65c) cursor_primary_pane_g1

0x5762,	// (0x00056c1a) cursor_text_primary_t1

0xd75c,	// (0x0005ec14) cursor_primary_small_pane_g1

0x5754,	// (0x00056c0c) cursor_text_primary_small_t1

0xd752,	// (0x0005ec0a) cursor_primary_small_pane_g1_copy1

0x573c,	// (0x00056bf4) cursor_text_primary_small_t1_copy1

0x571a,	// (0x00056bd2) cursor_text_title_t1

0xd748,	// (0x0005ec00) cursor_title_pane_g1

0xd1a4,	// (0x0005e65c) cursor_digital_pane_g1

0x47b5,	// (0x00055c6d) cursor_text_digital_t1

0x47da,	// (0x00055c92) link_highlight_primary_pane_g1

0x56c3,	// (0x00056b7b) link_highlight_primary_pane_t1

0x47c3,	// (0x00055c7b) link_highlight_primary_small_pane_g1

0x47cb,	// (0x00055c83) link_highlight_primary_small_pane_t1

0x47da,	// (0x00055c92) link_highlight_secondary_pane_g1

0x47e2,	// (0x00055c9a) link_highlight_secondary_pane_t1

0x5637,	// (0x00056aef) link_highlight_title_pane_g1

0x563f,	// (0x00056af7) link_highlight_title_pane_t1

0x5620,	// (0x00056ad8) link_highlight_digital_pane_g1

0x5628,	// (0x00056ae0) link_highlight_digital_pane_t1

0x54f8,	// (0x000569b0) copy_highlight_primary_pane_g1

0x5500,	// (0x000569b8) copy_highlight_primary_pane_t1

0x54d2,	// (0x0005698a) copy_highlight_primary_small_pane_g1

0x54e9,	// (0x000569a1) copy_highlight_primary_small_pane_t1

0x47f1,	// (0x00055ca9) copy_highlight_secondary_pane_g1

0x47f9,	// (0x00055cb1) copy_highlight_secondary_pane_t1

0x54d2,	// (0x0005698a) copy_highlight_title_pane_g1

0x54da,	// (0x00056992) copy_highlight_title_pane_t1

0x54f8,	// (0x000569b0) copy_highlight_digital_pane_g1

0x677d,	// (0x00057c35) copy_highlight_digital_pane_t1

0x66d1,	// (0x00057b89) graphic_text_primary_pane_g1

0x6761,	// (0x00057c19) graphic_text_primary_pane_t1

0x676f,	// (0x00057c27) graphic_text_primary_pane_t2

0x0001,

0xf9a9,	// (0x00060e61) graphic_text_primary_pane_t

0x673d,	// (0x00057bf5) graphic_text_primary_small_pane_g1

0x6745,	// (0x00057bfd) graphic_text_primary_small_pane_t1

0x6753,	// (0x00057c0b) graphic_text_primary_small_pane_t2

0x0001,

0xf9a4,	// (0x00060e5c) graphic_text_primary_small_pane_t

0x6719,	// (0x00057bd1) graphic_text_secondary_pane_g1

0x6721,	// (0x00057bd9) graphic_text_secondary_pane_t1

0x672f,	// (0x00057be7) graphic_text_secondary_pane_t2

0x0001,

0xf99f,	// (0x00060e57) graphic_text_secondary_pane_t

0x66f5,	// (0x00057bad) graphic_text_title_pane_g1

0x66fd,	// (0x00057bb5) graphic_text_title_pane_t1

0x670b,	// (0x00057bc3) graphic_text_title_pane_t2

0x0001,

0xf99a,	// (0x00060e52) graphic_text_title_pane_t

0x66d1,	// (0x00057b89) graphic_text_digital_pane_g1

0x66d9,	// (0x00057b91) graphic_text_digital_pane_t1

0x66e7,	// (0x00057b9f) graphic_text_digital_pane_t2

0x0001,

0xf995,	// (0x00060e4d) graphic_text_digital_pane_t

0x2cca,	// (0x00054182) navi_icon_pane_srt_ParamLimits

0x2cca,	// (0x00054182) navi_icon_pane_srt

0x2bea,	// (0x000540a2) navi_midp_pane_srt

0x2bea,	// (0x000540a2) navi_navi_pane_srt

0x2cca,	// (0x00054182) navi_text_pane_srt_ParamLimits

0x2cca,	// (0x00054182) navi_text_pane_srt

0x669c,	// (0x00057b54) navi_navi_icon_text_pane_srt

0x66a4,	// (0x00057b5c) navi_navi_pane_srt_g1_ParamLimits

0x66a4,	// (0x00057b5c) navi_navi_pane_srt_g1

0x66b6,	// (0x00057b6e) navi_navi_pane_srt_g2_ParamLimits

0x66b6,	// (0x00057b6e) navi_navi_pane_srt_g2

0x0001,

0xf990,	// (0x00060e48) navi_navi_pane_srt_g_ParamLimits

0xf990,	// (0x00060e48) navi_navi_pane_srt_g

0x66c8,	// (0x00057b80) navi_navi_tabs_pane_srt

0x669c,	// (0x00057b54) navi_navi_text_pane_srt

0x669c,	// (0x00057b54) navi_navi_volume_pane_srt

0x668d,	// (0x00057b45) navi_navi_text_pane_srt_t1

0x16e7,	// (0x00052b9f) navi_navi_volume_pane_srt_g1

0x16ef,	// (0x00052ba7) volume_small_pane_srt_ParamLimits

0x16ef,	// (0x00052ba7) volume_small_pane_srt

0x0976,	// (0x00051e2e) volume_small_pane_srt_g1_ParamLimits

0x0976,	// (0x00051e2e) volume_small_pane_srt_g1

0x0986,	// (0x00051e3e) volume_small_pane_srt_g2_ParamLimits

0x0986,	// (0x00051e3e) volume_small_pane_srt_g2

0x0997,	// (0x00051e4f) volume_small_pane_srt_g3_ParamLimits

0x0997,	// (0x00051e4f) volume_small_pane_srt_g3

0x09a8,	// (0x00051e60) volume_small_pane_srt_g4_ParamLimits

0x09a8,	// (0x00051e60) volume_small_pane_srt_g4

0x09b9,	// (0x00051e71) volume_small_pane_srt_g5_ParamLimits

0x09b9,	// (0x00051e71) volume_small_pane_srt_g5

0x09ca,	// (0x00051e82) volume_small_pane_srt_g6_ParamLimits

0x09ca,	// (0x00051e82) volume_small_pane_srt_g6

0x09db,	// (0x00051e93) volume_small_pane_srt_g7_ParamLimits

0x09db,	// (0x00051e93) volume_small_pane_srt_g7

0x09ec,	// (0x00051ea4) volume_small_pane_srt_g8_ParamLimits

0x09ec,	// (0x00051ea4) volume_small_pane_srt_g8

0x09fd,	// (0x00051eb5) volume_small_pane_srt_g9_ParamLimits

0x09fd,	// (0x00051eb5) volume_small_pane_srt_g9

0x0a0e,	// (0x00051ec6) volume_small_pane_srt_g10_ParamLimits

0x0a0e,	// (0x00051ec6) volume_small_pane_srt_g10

0x0009,

0xf73d,	// (0x00060bf5) volume_small_pane_srt_g_ParamLimits

0xf73d,	// (0x00060bf5) volume_small_pane_srt_g

0x30ca,	// (0x00054582) query_popup_data_pane_cp2

0x6673,	// (0x00057b2b) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x6673,	// (0x00057b2b) navi_navi_icon_text_pane_srt_t1

0x5770,	// (0x00056c28) navi_tabs_2_long_pane_srt

0x5770,	// (0x00056c28) navi_tabs_2_pane_srt

0x5770,	// (0x00056c28) navi_tabs_3_long_pane_srt

0x5770,	// (0x00056c28) navi_tabs_3_pane_srt

0x5770,	// (0x00056c28) navi_tabs_4_pane_srt

0x16c7,	// (0x00052b7f) tabs_2_active_pane_srt_ParamLimits

0x16c7,	// (0x00052b7f) tabs_2_active_pane_srt

0x16d7,	// (0x00052b8f) tabs_2_passive_pane_srt_ParamLimits

0x16d7,	// (0x00052b8f) tabs_2_passive_pane_srt

0x4f16,	// (0x000563ce) bg_passive_tab_pane_cp1_srt_ParamLimits

0x4f16,	// (0x000563ce) bg_passive_tab_pane_cp1_srt

0x663f,	// (0x00057af7) bg_passive_tab_pane_g1_cp1_srt

0x429f,	// (0x00055757) bg_passive_tab_pane_g2_cp1_srt

0x6648,	// (0x00057b00) bg_passive_tab_pane_g3_cp1_srt

0x2f45,	// (0x000543fd) bg_active_tab_pane_cp1_srt_ParamLimits

0x2f45,	// (0x000543fd) bg_active_tab_pane_cp1_srt

0x6651,	// (0x00057b09) tabs_2_active_pane_srt_g1

0xdb10,	// (0x0005efc8) tabs_2_active_pane_srt_t1_ParamLimits

0xdb10,	// (0x0005efc8) tabs_2_active_pane_srt_t1

0x663f,	// (0x00057af7) bg_active_tab_pane_g1_cp1_srt

0x429f,	// (0x00055757) bg_active_tab_pane_g2_cp1_srt

0x6648,	// (0x00057b00) bg_active_tab_pane_g3_cp1_srt

0x1694,	// (0x00052b4c) tabs_3_active_pane_srt_ParamLimits

0x1694,	// (0x00052b4c) tabs_3_active_pane_srt

0x16a5,	// (0x00052b5d) tabs_3_passive_pane_cp_srt_ParamLimits

0x16a5,	// (0x00052b5d) tabs_3_passive_pane_cp_srt

0x16b6,	// (0x00052b6e) tabs_3_passive_pane_srt_ParamLimits

0x16b6,	// (0x00052b6e) tabs_3_passive_pane_srt

0x4f16,	// (0x000563ce) bg_passive_tab_pane_cp2_srt_ParamLimits

0x4f16,	// (0x000563ce) bg_passive_tab_pane_cp2_srt

0x4808,	// (0x00055cc0) bg_passive_tab_pane_g1_cp2_srt

0x429f,	// (0x00055757) bg_passive_tab_pane_g2_cp2_srt

0x4811,	// (0x00055cc9) bg_passive_tab_pane_g3_cp2_srt

0x2f45,	// (0x000543fd) bg_active_tab_pane_cp2_srt_ParamLimits

0x2f45,	// (0x000543fd) bg_active_tab_pane_cp2_srt

0x6625,	// (0x00057add) tabs_3_active_pane_srt_g1

0xdafa,	// (0x0005efb2) tabs_3_active_pane_srt_t1_ParamLimits

0xdafa,	// (0x0005efb2) tabs_3_active_pane_srt_t1

0x4808,	// (0x00055cc0) bg_active_tab_pane_g1_cp2_srt

0x429f,	// (0x00055757) bg_active_tab_pane_g2_cp2_srt

0x4811,	// (0x00055cc9) bg_active_tab_pane_g3_cp2_srt

0x164c,	// (0x00052b04) tabs_4_active_pane_srt_ParamLimits

0x164c,	// (0x00052b04) tabs_4_active_pane_srt

0x165e,	// (0x00052b16) tabs_4_passive_pane_cp2_srt_ParamLimits

0x165e,	// (0x00052b16) tabs_4_passive_pane_cp2_srt

0x0b7d,	// (0x00052035) aid_size_cell_toolbar

0x628b,	// (0x00057743) main_idle_act_pane_ParamLimits

0x0d4a,	// (0x00052202) popup_large_graphic_colour_window_ParamLimits

0xc618,	// (0x0005dad0) popup_toolbar_window_ParamLimits

0xc618,	// (0x0005dad0) popup_toolbar_window

0x6443,	// (0x000578fb) list_single_graphic_2heading_pane_ParamLimits

0x6443,	// (0x000578fb) list_single_graphic_2heading_pane

0x3d65,	// (0x0005521d) aid_size_cell_apps_grid_lsc_pane

0x3d77,	// (0x0005522f) aid_size_cell_apps_grid_prt_pane

0x4978,	// (0x00055e30) bg_wml_button_pane_cp1_ParamLimits

0x4978,	// (0x00055e30) bg_wml_button_pane_cp1

0xd70b,	// (0x0005ebc3) form_midp_field_text_pane_t1_ParamLimits

0x4f16,	// (0x000563ce) input_focus_pane_cp050_ParamLimits

0x517d,	// (0x00056635) list_midp_form_text_pane_ParamLimits

0x5123,	// (0x000565db) input_focus_pane_cp051_ParamLimits

0x5137,	// (0x000565ef) list_midp_choice_pane_ParamLimits

0xd6a9,	// (0x0005eb61) list_single_2graphic_pane_cp3_ParamLimits

0xd6a9,	// (0x0005eb61) list_single_2graphic_pane_cp3

0xd6bc,	// (0x0005eb74) list_single_midp_graphic_pane_ParamLimits

0xd6bc,	// (0x0005eb74) list_single_midp_graphic_pane

0xf422,	// (0x000608da) list_single_graphic_2heading_pane_g1_ParamLimits

0xf422,	// (0x000608da) list_single_graphic_2heading_pane_g1

0xf42e,	// (0x000608e6) list_single_graphic_2heading_pane_g4_ParamLimits

0xf42e,	// (0x000608e6) list_single_graphic_2heading_pane_g4

0xf43a,	// (0x000608f2) list_single_graphic_2heading_pane_g5_ParamLimits

0xf43a,	// (0x000608f2) list_single_graphic_2heading_pane_g5

0x0002,

0xf790,	// (0x00060c48) list_single_graphic_2heading_pane_g_ParamLimits

0xf790,	// (0x00060c48) list_single_graphic_2heading_pane_g

0xf446,	// (0x000608fe) list_single_graphic_2heading_pane_t1_ParamLimits

0xf446,	// (0x000608fe) list_single_graphic_2heading_pane_t1

0xf45a,	// (0x00060912) list_single_graphic_2heading_pane_t2_ParamLimits

0xf45a,	// (0x00060912) list_single_graphic_2heading_pane_t2

0xf476,	// (0x0006092e) list_single_graphic_2heading_pane_t3_ParamLimits

0xf476,	// (0x0006092e) list_single_graphic_2heading_pane_t3

0x0002,

0xf797,	// (0x00060c4f) list_single_graphic_2heading_pane_t_ParamLimits

0xf797,	// (0x00060c4f) list_single_graphic_2heading_pane_t

0x4de0,	// (0x00056298) bg_popup_sub_pane_cp2

0x4e0a,	// (0x000562c2) grid_toobar_pane

0x115e,	// (0x00052616) cell_toolbar_pane_ParamLimits

0x115e,	// (0x00052616) cell_toolbar_pane

0x4e46,	// (0x000562fe) cell_toolbar_pane_g1_ParamLimits

0x4e46,	// (0x000562fe) cell_toolbar_pane_g1

0x4e5a,	// (0x00056312) cell_toolbar_pane_g2_ParamLimits

0x4e5a,	// (0x00056312) cell_toolbar_pane_g2

0x0001,

0xf7a5,	// (0x00060c5d) cell_toolbar_pane_g_ParamLimits

0xf7a5,	// (0x00060c5d) cell_toolbar_pane_g

0x4e7c,	// (0x00056334) grid_highlight_pane_cp2_ParamLimits

0x4e7c,	// (0x00056334) grid_highlight_pane_cp2

0x4e96,	// (0x0005634e) toolbar_button_pane

0x4ea2,	// (0x0005635a) toolbar_button_pane_g1

0x4eaa,	// (0x00056362) toolbar_button_pane_g2

0x4eb2,	// (0x0005636a) toolbar_button_pane_g3

0x4eba,	// (0x00056372) toolbar_button_pane_g4

0x4ec2,	// (0x0005637a) toolbar_button_pane_g5

0x4eca,	// (0x00056382) toolbar_button_pane_g6

0x4ed2,	// (0x0005638a) toolbar_button_pane_g7

0x4eda,	// (0x00056392) toolbar_button_pane_g8

0x4ee2,	// (0x0005639a) toolbar_button_pane_g9

0x0009,

0xf7aa,	// (0x00060c62) toolbar_button_pane_g

0x11b8,	// (0x00052670) list_single_2graphic_pane_g1_cp3_ParamLimits

0x11b8,	// (0x00052670) list_single_2graphic_pane_g1_cp3

0xc670,	// (0x0005db28) list_single_2graphic_pane_g2_cp3_ParamLimits

0xc670,	// (0x0005db28) list_single_2graphic_pane_g2_cp3

0x11d5,	// (0x0005268d) list_single_2graphic_pane_g3_cp3

0x11dd,	// (0x00052695) list_single_2graphic_pane_g4_cp3_ParamLimits

0x11dd,	// (0x00052695) list_single_2graphic_pane_g4_cp3

0x11e9,	// (0x000526a1) list_single_2graphic_pane_t1_cp3_ParamLimits

0x11e9,	// (0x000526a1) list_single_2graphic_pane_t1_cp3

0x122d,	// (0x000526e5) list_single_midp_graphic_pane_g2_ParamLimits

0x122d,	// (0x000526e5) list_single_midp_graphic_pane_g2

0xf41a,	// (0x000608d2) aid_zoom_text_primary

0x0b85,	// (0x0005203d) aid_zoom_text_secondary

0xd1fc,	// (0x0005e6b4) status_small_pane_g7_ParamLimits

0xd1fc,	// (0x0005e6b4) status_small_pane_g7

0xd21f,	// (0x0005e6d7) status_small_pane_t1_ParamLimits

0xb5db,	// (0x0005ca93) title_pane_g2

0x0003,

0xf529,	// (0x000609e1) title_pane_g

0xb853,	// (0x0005cd0b) aid_size_cell_colour_1_pane_ParamLimits

0xb853,	// (0x0005cd0b) aid_size_cell_colour_1_pane

0xb867,	// (0x0005cd1f) aid_size_cell_colour_2_pane_ParamLimits

0xb867,	// (0x0005cd1f) aid_size_cell_colour_2_pane

0xb87b,	// (0x0005cd33) aid_size_cell_colour_3_pane_ParamLimits

0xb87b,	// (0x0005cd33) aid_size_cell_colour_3_pane

0xb88f,	// (0x0005cd47) aid_size_cell_colour_4_pane_ParamLimits

0xb88f,	// (0x0005cd47) aid_size_cell_colour_4_pane

0x0565,	// (0x00051a1d) title_pane_stacon_g1_ParamLimits

0x0565,	// (0x00051a1d) title_pane_stacon_g1

0x5557,	// (0x00056a0f) popup_note_wait_window_g3_ParamLimits

0x5557,	// (0x00056a0f) popup_note_wait_window_g3

0x55cd,	// (0x00056a85) popup_note_wait_window_t5_ParamLimits

0x55cd,	// (0x00056a85) popup_note_wait_window_t5

0x2bea,	// (0x000540a2) main_feb_china_hwr_fs_writing_pane

0xc01a,	// (0x0005d4d2) popup_feb_china_hwr_fs_window_ParamLimits

0xc01a,	// (0x0005d4d2) popup_feb_china_hwr_fs_window

0xc681,	// (0x0005db39) aid_size_cell_hwr_fs_ParamLimits

0xc681,	// (0x0005db39) aid_size_cell_hwr_fs

0x4f16,	// (0x000563ce) bg_popup_sub_pane_cp3_ParamLimits

0x4f16,	// (0x000563ce) bg_popup_sub_pane_cp3

0xc696,	// (0x0005db4e) grid_hwr_fs_pane_ParamLimits

0xc696,	// (0x0005db4e) grid_hwr_fs_pane

0x12e8,	// (0x000527a0) linegrid_hwr_fs_pane_ParamLimits

0x12e8,	// (0x000527a0) linegrid_hwr_fs_pane

0xc6ae,	// (0x0005db66) cell_hwr_fs_pane_ParamLimits

0xc6ae,	// (0x0005db66) cell_hwr_fs_pane

0x4f22,	// (0x000563da) linegrid_hwr_fs_pane_g1_ParamLimits

0x4f22,	// (0x000563da) linegrid_hwr_fs_pane_g1

0xd67d,	// (0x0005eb35) linegrid_hwr_fs_pane_g2_ParamLimits

0xd67d,	// (0x0005eb35) linegrid_hwr_fs_pane_g2

0x4f40,	// (0x000563f8) linegrid_hwr_fs_pane_g3_ParamLimits

0x4f40,	// (0x000563f8) linegrid_hwr_fs_pane_g3

0x131a,	// (0x000527d2) linegrid_hwr_fs_pane_g4_ParamLimits

0x131a,	// (0x000527d2) linegrid_hwr_fs_pane_g4

0x1334,	// (0x000527ec) linegrid_hwr_fs_pane_g5_ParamLimits

0x1334,	// (0x000527ec) linegrid_hwr_fs_pane_g5

0x0004,

0xf7d0,	// (0x00060c88) linegrid_hwr_fs_pane_g_ParamLimits

0xf7d0,	// (0x00060c88) linegrid_hwr_fs_pane_g

0x4f4c,	// (0x00056404) cell_hwr_fs_pane_g1_ParamLimits

0x4f4c,	// (0x00056404) cell_hwr_fs_pane_g1

0x4d17,	// (0x000561cf) cell_hwr_fs_pane_g2_ParamLimits

0x4d17,	// (0x000561cf) cell_hwr_fs_pane_g2

0xd68f,	// (0x0005eb47) cell_hwr_fs_pane_g3_ParamLimits

0xd68f,	// (0x0005eb47) cell_hwr_fs_pane_g3

0xd69c,	// (0x0005eb54) cell_hwr_fs_pane_g4_ParamLimits

0xd69c,	// (0x0005eb54) cell_hwr_fs_pane_g4

0x0003,

0xf7db,	// (0x00060c93) cell_hwr_fs_pane_g_ParamLimits

0xf7db,	// (0x00060c93) cell_hwr_fs_pane_g

0xc6d4,	// (0x0005db8c) cell_hwr_fs_pane_t1

0x2bea,	// (0x000540a2) grid_highlight_pane_cp6

0x2bea,	// (0x000540a2) main_idle_act2_pane

0x3b1c,	// (0x00054fd4) aid_inside_area_popup_secondary

0xd766,	// (0x0005ec1e) aid_inside_area_window_primary_ParamLimits

0xd766,	// (0x0005ec1e) aid_inside_area_window_primary

0x678c,	// (0x00057c44) ai2_news_ticker_pane

0x6794,	// (0x00057c4c) aid_size_cell_ai1_link_ParamLimits

0x6794,	// (0x00057c4c) aid_size_cell_ai1_link

0xdb26,	// (0x0005efde) popup_ai2_data_window_ParamLimits

0xdb26,	// (0x0005efde) popup_ai2_data_window

0x67c4,	// (0x00057c7c) popup_ai2_link_window_ParamLimits

0x67c4,	// (0x00057c7c) popup_ai2_link_window

0x4f16,	// (0x000563ce) bg_popup_sub_pane_cp4_ParamLimits

0x4f16,	// (0x000563ce) bg_popup_sub_pane_cp4

0x67d8,	// (0x00057c90) grid_ai2_link_pane_ParamLimits

0x67d8,	// (0x00057c90) grid_ai2_link_pane

0x67ef,	// (0x00057ca7) popup_ai2_link_window_g1_ParamLimits

0x67ef,	// (0x00057ca7) popup_ai2_link_window_g1

0x67fb,	// (0x00057cb3) popup_ai2_link_window_g2_ParamLimits

0x67fb,	// (0x00057cb3) popup_ai2_link_window_g2

0x0001,

0xf9ae,	// (0x00060e66) popup_ai2_link_window_g_ParamLimits

0xf9ae,	// (0x00060e66) popup_ai2_link_window_g

0x680a,	// (0x00057cc2) ai2_mp_button_pane

0x6812,	// (0x00057cca) ai2_mp_volume_pane

0x5123,	// (0x000565db) bg_popup_sub_pane_cp5_ParamLimits

0x5123,	// (0x000565db) bg_popup_sub_pane_cp5

0x681a,	// (0x00057cd2) heading_ai2_gene_pane_ParamLimits

0x681a,	// (0x00057cd2) heading_ai2_gene_pane

0x6826,	// (0x00057cde) list_ai2_gene_pane_ParamLimits

0x6826,	// (0x00057cde) list_ai2_gene_pane

0x686e,	// (0x00057d26) cell_ai2_link_pane_ParamLimits

0x686e,	// (0x00057d26) cell_ai2_link_pane

0x6884,	// (0x00057d3c) cell_ai2_link_pane_g1

0x2bea,	// (0x000540a2) grid_highlight_pane_cp7

0x1704,	// (0x00052bbc) ai2_mp_volume_pane_g1

0x6954,	// (0x00057e0c) ai2_mp_volume_pane_g2

0xdb50,	// (0x0005f008) list_ai2_gene_pane_t1

0x695c,	// (0x00057e14) ai2_mp_volume_pane_g3

0x0002,

0xf9c2,	// (0x00060e7a) ai2_mp_volume_pane_g

0x170c,	// (0x00052bc4) volume_small_pane_cp3

0x6964,	// (0x00057e1c) aid_size_cell_ai2_button

0x696c,	// (0x00057e24) grid_ai2_button_pane

0x6975,	// (0x00057e2d) cell_ai2_button_pane_ParamLimits

0x6975,	// (0x00057e2d) cell_ai2_button_pane

0xdc06,	// (0x0005f0be) cell_ai2_button_pane_g1

0x2bea,	// (0x000540a2) grid_highlight_pane_cp8

0x6914,	// (0x00057dcc) ai2_gene_pane_t1_ParamLimits

0x6914,	// (0x00057dcc) ai2_gene_pane_t1

0xbfb8,	// (0x0005d470) aid_height_parent_landscape

0xd8ae,	// (0x0005ed66) aid_height_set_list

0x628b,	// (0x00057743) aid_size_parent

0x65af,	// (0x00057a67) aid_size_cell_graphic_pane_ParamLimits

0x6836,	// (0x00057cee) popup_ai2_data_window_g1_ParamLimits

0x6836,	// (0x00057cee) popup_ai2_data_window_g1

0x6842,	// (0x00057cfa) ai2_news_ticker_pane_g1

0x684a,	// (0x00057d02) ai2_news_ticker_pane_g2

0x0001,

0xf9b3,	// (0x00060e6b) ai2_news_ticker_pane_g

0x6852,	// (0x00057d0a) ai2_news_ticker_pane_t1

0x6860,	// (0x00057d18) ai2_news_ticker_pane_t2

0x0001,

0xf9b8,	// (0x00060e70) ai2_news_ticker_pane_t

0x688d,	// (0x00057d45) heading_ai2_gene_pane_g1

0x6895,	// (0x00057d4d) heading_ai2_gene_pane_t1_ParamLimits

0x6895,	// (0x00057d4d) heading_ai2_gene_pane_t1

0x68aa,	// (0x00057d62) list_highlight_pane_cp6

0xdb3a,	// (0x0005eff2) ai2_gene_pane_ParamLimits

0xdb3a,	// (0x0005eff2) ai2_gene_pane

0xdb5e,	// (0x0005f016) list_ai2_gene_pane_t2

0x0001,

0xb1cf,	// (0x0005c687) list_ai2_gene_pane_t

0x68e5,	// (0x00057d9d) list_highlight_pane_cp8_ParamLimits

0x68e5,	// (0x00057d9d) list_highlight_pane_cp8

0x68f6,	// (0x00057dae) ai2_gene_pane_g1_ParamLimits

0x68f6,	// (0x00057dae) ai2_gene_pane_g1

0x6908,	// (0x00057dc0) ai2_gene_pane_g2_ParamLimits

0x6908,	// (0x00057dc0) ai2_gene_pane_g2

0x0001,

0xf9bd,	// (0x00060e75) ai2_gene_pane_g_ParamLimits

0xf9bd,	// (0x00060e75) ai2_gene_pane_g

0x393f,	// (0x00054df7) scroll_pane_cp12

0xbf75,	// (0x0005d42d) control_pane_t3_ParamLimits

0xbf75,	// (0x0005d42d) control_pane_t3

0xd210,	// (0x0005e6c8) status_small_pane_g8_ParamLimits

0xd210,	// (0x0005e6c8) status_small_pane_g8

0xc0af,	// (0x0005d567) popup_find_window_ParamLimits

0xc342,	// (0x0005d7fa) popup_note_image_window_ParamLimits

0x118e,	// (0x00052646) list_double2_graphic_pane_vc_g1_ParamLimits

0x118e,	// (0x00052646) list_double2_graphic_pane_vc_g1

0x3950,	// (0x00054e08) list_double2_graphic_pane_vc_g2_ParamLimits

0x3950,	// (0x00054e08) list_double2_graphic_pane_vc_g2

0x3486,	// (0x0005493e) list_double2_graphic_pane_vc_g3_ParamLimits

0x3486,	// (0x0005493e) list_double2_graphic_pane_vc_g3

0x0002,

0xf79e,	// (0x00060c56) list_double2_graphic_pane_vc_g_ParamLimits

0xf79e,	// (0x00060c56) list_double2_graphic_pane_vc_g

0x119a,	// (0x00052652) list_double2_graphic_pane_vc_t1_ParamLimits

0x119a,	// (0x00052652) list_double2_graphic_pane_vc_t1

0x3950,	// (0x00054e08) list_single_heading_pane_vc_g1_ParamLimits

0x3950,	// (0x00054e08) list_single_heading_pane_vc_g1

0x3486,	// (0x0005493e) list_single_heading_pane_vc_g2_ParamLimits

0x3486,	// (0x0005493e) list_single_heading_pane_vc_g2

0x0001,

0xf5ad,	// (0x00060a65) list_single_heading_pane_vc_g_ParamLimits

0xf5ad,	// (0x00060a65) list_single_heading_pane_vc_g

0x1205,	// (0x000526bd) list_single_heading_pane_vc_t1_ParamLimits

0x1205,	// (0x000526bd) list_single_heading_pane_vc_t1

0x121b,	// (0x000526d3) list_single_heading_pane_vc_t2_ParamLimits

0x121b,	// (0x000526d3) list_single_heading_pane_vc_t2

0x0001,

0xf7bf,	// (0x00060c77) list_single_heading_pane_vc_t_ParamLimits

0xf7bf,	// (0x00060c77) list_single_heading_pane_vc_t

0x352d,	// (0x000549e5) list_setting_number_pane_vc_g1_ParamLimits

0x352d,	// (0x000549e5) list_setting_number_pane_vc_g1

0x3539,	// (0x000549f1) list_setting_number_pane_vc_g2_ParamLimits

0x3539,	// (0x000549f1) list_setting_number_pane_vc_g2

0x0001,

0xf7c4,	// (0x00060c7c) list_setting_number_pane_vc_g_ParamLimits

0xf7c4,	// (0x00060c7c) list_setting_number_pane_vc_g

0x124f,	// (0x00052707) list_setting_number_pane_vc_t1_ParamLimits

0x124f,	// (0x00052707) list_setting_number_pane_vc_t1

0x1263,	// (0x0005271b) list_setting_number_pane_vc_t2_ParamLimits

0x1263,	// (0x0005271b) list_setting_number_pane_vc_t2

0x127f,	// (0x00052737) list_setting_number_pane_vc_t3_ParamLimits

0x127f,	// (0x00052737) list_setting_number_pane_vc_t3

0x0002,

0xf7c9,	// (0x00060c81) list_setting_number_pane_vc_t_ParamLimits

0xf7c9,	// (0x00060c81) list_setting_number_pane_vc_t

0x12ab,	// (0x00052763) set_value_pane_vc_ParamLimits

0x12ab,	// (0x00052763) set_value_pane_vc

0x6443,	// (0x000578fb) list_double2_graphic_pane_vc_ParamLimits

0x6443,	// (0x000578fb) list_double2_graphic_pane_vc

0x6443,	// (0x000578fb) list_double2_large_graphic_pane_vc_ParamLimits

0x6443,	// (0x000578fb) list_double2_large_graphic_pane_vc

0x6443,	// (0x000578fb) list_double2_pane_vc_ParamLimits

0x6443,	// (0x000578fb) list_double2_pane_vc

0x6443,	// (0x000578fb) list_double_graphic_heading_pane_vc_ParamLimits

0x6443,	// (0x000578fb) list_double_graphic_heading_pane_vc

0x6443,	// (0x000578fb) list_double_graphic_pane_vc_ParamLimits

0x6443,	// (0x000578fb) list_double_graphic_pane_vc

0x6443,	// (0x000578fb) list_double_heading_pane_vc_ParamLimits

0x6443,	// (0x000578fb) list_double_heading_pane_vc

0x6455,	// (0x0005790d) list_double_large_graphic_pane_vc_ParamLimits

0x6455,	// (0x0005790d) list_double_large_graphic_pane_vc

0x6443,	// (0x000578fb) list_double_number_pane_vc_ParamLimits

0x6443,	// (0x000578fb) list_double_number_pane_vc

0x6443,	// (0x000578fb) list_double_pane_vc_ParamLimits

0x6443,	// (0x000578fb) list_double_pane_vc

0x6443,	// (0x000578fb) list_double_time_pane_vc_ParamLimits

0x6443,	// (0x000578fb) list_double_time_pane_vc

0x6443,	// (0x000578fb) list_setting_number_pane_vc_ParamLimits

0x6443,	// (0x000578fb) list_setting_number_pane_vc

0x6443,	// (0x000578fb) list_setting_pane_vc_ParamLimits

0x6443,	// (0x000578fb) list_setting_pane_vc

0x6443,	// (0x000578fb) list_single_graphic_heading_pane_vc_ParamLimits

0x6443,	// (0x000578fb) list_single_graphic_heading_pane_vc

0x6443,	// (0x000578fb) list_single_heading_pane_vc_ParamLimits

0x6443,	// (0x000578fb) list_single_heading_pane_vc

0x6443,	// (0x000578fb) list_single_number_heading_pane_vc_ParamLimits

0x6443,	// (0x000578fb) list_single_number_heading_pane_vc

0x118e,	// (0x00052646) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x118e,	// (0x00052646) list_double_graphic_heading_pane_vc_g1

0x3950,	// (0x00054e08) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x3950,	// (0x00054e08) list_double_graphic_heading_pane_vc_g2

0x3486,	// (0x0005493e) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x3486,	// (0x0005493e) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf79e,	// (0x00060c56) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf79e,	// (0x00060c56) list_double_graphic_heading_pane_vc_g

0x1715,	// (0x00052bcd) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x1715,	// (0x00052bcd) list_double_graphic_heading_pane_vc_t1

0x1731,	// (0x00052be9) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x1731,	// (0x00052be9) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9c9,	// (0x00060e81) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9c9,	// (0x00060e81) list_double_graphic_heading_pane_vc_t

0x352d,	// (0x000549e5) list_setting_pane_vc_g1_ParamLimits

0x352d,	// (0x000549e5) list_setting_pane_vc_g1

0x3539,	// (0x000549f1) list_setting_pane_vc_g2_ParamLimits

0x3539,	// (0x000549f1) list_setting_pane_vc_g2

0x0001,

0xf7c4,	// (0x00060c7c) list_setting_pane_vc_g_ParamLimits

0xf7c4,	// (0x00060c7c) list_setting_pane_vc_g

0x174f,	// (0x00052c07) list_setting_pane_vc_t1_ParamLimits

0x174f,	// (0x00052c07) list_setting_pane_vc_t1

0x176b,	// (0x00052c23) list_setting_pane_vc_t2_ParamLimits

0x176b,	// (0x00052c23) list_setting_pane_vc_t2

0x0001,

0xf9f7,	// (0x00060eaf) list_setting_pane_vc_t_ParamLimits

0xf9f7,	// (0x00060eaf) list_setting_pane_vc_t

0x12ab,	// (0x00052763) set_value_pane_cp_vc_ParamLimits

0x12ab,	// (0x00052763) set_value_pane_cp_vc

0x3950,	// (0x00054e08) list_single_number_heading_pane_vc_g1_ParamLimits

0x3950,	// (0x00054e08) list_single_number_heading_pane_vc_g1

0x3486,	// (0x0005493e) list_single_number_heading_pane_vc_g2_ParamLimits

0x3486,	// (0x0005493e) list_single_number_heading_pane_vc_g2

0x0001,

0xf5ad,	// (0x00060a65) list_single_number_heading_pane_vc_g_ParamLimits

0xf5ad,	// (0x00060a65) list_single_number_heading_pane_vc_g

0x1787,	// (0x00052c3f) list_single_number_heading_pane_vc_t1_ParamLimits

0x1787,	// (0x00052c3f) list_single_number_heading_pane_vc_t1

0xe9ab,	// (0x0005fe63) list_single_number_heading_pane_vc_t2_ParamLimits

0xe9ab,	// (0x0005fe63) list_single_number_heading_pane_vc_t2

0xe9bd,	// (0x0005fe75) list_single_number_heading_pane_vc_t3_ParamLimits

0xe9bd,	// (0x0005fe75) list_single_number_heading_pane_vc_t3

0x0002,

0xf9fc,	// (0x00060eb4) list_single_number_heading_pane_vc_t_ParamLimits

0xf9fc,	// (0x00060eb4) list_single_number_heading_pane_vc_t

0x118e,	// (0x00052646) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x118e,	// (0x00052646) list_single_graphic_heading_pane_vc_g1

0x3950,	// (0x00054e08) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x3950,	// (0x00054e08) list_single_graphic_heading_pane_vc_g4

0x3486,	// (0x0005493e) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x3486,	// (0x0005493e) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf79e,	// (0x00060c56) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf79e,	// (0x00060c56) list_single_graphic_heading_pane_vc_g

0x1787,	// (0x00052c3f) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x1787,	// (0x00052c3f) list_single_graphic_heading_pane_vc_t1

0x179d,	// (0x00052c55) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x179d,	// (0x00052c55) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa03,	// (0x00060ebb) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa03,	// (0x00060ebb) list_single_graphic_heading_pane_vc_t

0x3950,	// (0x00054e08) list_double2_pane_vc_g1_ParamLimits

0x3950,	// (0x00054e08) list_double2_pane_vc_g1

0x3486,	// (0x0005493e) list_double2_pane_vc_g2_ParamLimits

0x3486,	// (0x0005493e) list_double2_pane_vc_g2

0x0001,

0xf5ad,	// (0x00060a65) list_double2_pane_vc_g_ParamLimits

0xf5ad,	// (0x00060a65) list_double2_pane_vc_g

0x15ff,	// (0x00052ab7) list_double2_pane_vc_t1_ParamLimits

0x15ff,	// (0x00052ab7) list_double2_pane_vc_t1

0x35bc,	// (0x00054a74) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x35bc,	// (0x00054a74) list_double2_large_graphic_pane_vc_g1

0x3950,	// (0x00054e08) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x3950,	// (0x00054e08) list_double2_large_graphic_pane_vc_g2

0x3486,	// (0x0005493e) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x3486,	// (0x0005493e) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5c5,	// (0x00060a7d) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5c5,	// (0x00060a7d) list_double2_large_graphic_pane_vc_g

0x17af,	// (0x00052c67) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x17af,	// (0x00052c67) list_double2_large_graphic_pane_vc_t1

0x35c8,	// (0x00054a80) list_double_time_pane_vc_g1_ParamLimits

0x35c8,	// (0x00054a80) list_double_time_pane_vc_g1

0x35d4,	// (0x00054a8c) list_double_time_pane_vc_g2_ParamLimits

0x35d4,	// (0x00054a8c) list_double_time_pane_vc_g2

0x0001,

0xfa08,	// (0x00060ec0) list_double_time_pane_vc_g_ParamLimits

0xfa08,	// (0x00060ec0) list_double_time_pane_vc_g

0x17c5,	// (0x00052c7d) list_double_time_pane_vc_t1_ParamLimits

0x17c5,	// (0x00052c7d) list_double_time_pane_vc_t1

0x17e9,	// (0x00052ca1) list_double_time_pane_vc_t2_ParamLimits

0x17e9,	// (0x00052ca1) list_double_time_pane_vc_t2

0x1838,	// (0x00052cf0) list_double_time_pane_vc_t3_ParamLimits

0x1838,	// (0x00052cf0) list_double_time_pane_vc_t3

0x184a,	// (0x00052d02) list_double_time_pane_vc_t4_ParamLimits

0x184a,	// (0x00052d02) list_double_time_pane_vc_t4

0x0003,

0xfa0d,	// (0x00060ec5) list_double_time_pane_vc_t_ParamLimits

0xfa0d,	// (0x00060ec5) list_double_time_pane_vc_t

0x3950,	// (0x00054e08) list_double_pane_vc_g1_ParamLimits

0x3950,	// (0x00054e08) list_double_pane_vc_g1

0x3486,	// (0x0005493e) list_double_pane_vc_g2_ParamLimits

0x3486,	// (0x0005493e) list_double_pane_vc_g2

0x0001,

0xf5ad,	// (0x00060a65) list_double_pane_vc_g_ParamLimits

0xf5ad,	// (0x00060a65) list_double_pane_vc_g

0x185e,	// (0x00052d16) list_double_pane_vc_t1_ParamLimits

0x185e,	// (0x00052d16) list_double_pane_vc_t1

0x1872,	// (0x00052d2a) list_double_pane_vc_t2_ParamLimits

0x1872,	// (0x00052d2a) list_double_pane_vc_t2

0x0001,

0xfa16,	// (0x00060ece) list_double_pane_vc_t_ParamLimits

0xfa16,	// (0x00060ece) list_double_pane_vc_t

0x3950,	// (0x00054e08) list_double_number_pane_vc_g1_ParamLimits

0x3950,	// (0x00054e08) list_double_number_pane_vc_g1

0x3486,	// (0x0005493e) list_double_number_pane_vc_g2_ParamLimits

0x3486,	// (0x0005493e) list_double_number_pane_vc_g2

0x0001,

0xf5ad,	// (0x00060a65) list_double_number_pane_vc_g_ParamLimits

0xf5ad,	// (0x00060a65) list_double_number_pane_vc_g

0x188a,	// (0x00052d42) list_double_number_pane_vc_t1_ParamLimits

0x188a,	// (0x00052d42) list_double_number_pane_vc_t1

0x189c,	// (0x00052d54) list_double_number_pane_vc_t2_ParamLimits

0x189c,	// (0x00052d54) list_double_number_pane_vc_t2

0x18b0,	// (0x00052d68) list_double_number_pane_vc_t3_ParamLimits

0x18b0,	// (0x00052d68) list_double_number_pane_vc_t3

0x0002,

0xfa1b,	// (0x00060ed3) list_double_number_pane_vc_t_ParamLimits

0xfa1b,	// (0x00060ed3) list_double_number_pane_vc_t

0x35e0,	// (0x00054a98) list_double_large_graphic_pane_vc_g1_ParamLimits

0x35e0,	// (0x00054a98) list_double_large_graphic_pane_vc_g1

0x35fc,	// (0x00054ab4) list_double_large_graphic_pane_vc_g2_ParamLimits

0x35fc,	// (0x00054ab4) list_double_large_graphic_pane_vc_g2

0x3610,	// (0x00054ac8) list_double_large_graphic_pane_vc_g3_ParamLimits

0x3610,	// (0x00054ac8) list_double_large_graphic_pane_vc_g3

0x18c8,	// (0x00052d80) list_double_large_graphic_pane_vc_g4_ParamLimits

0x18c8,	// (0x00052d80) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa22,	// (0x00060eda) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa22,	// (0x00060eda) list_double_large_graphic_pane_vc_g

0x18d7,	// (0x00052d8f) list_double_large_graphic_pane_vc_t1_ParamLimits

0x18d7,	// (0x00052d8f) list_double_large_graphic_pane_vc_t1

0x18f3,	// (0x00052dab) list_double_large_graphic_pane_vc_t2_ParamLimits

0x18f3,	// (0x00052dab) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa2b,	// (0x00060ee3) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa2b,	// (0x00060ee3) list_double_large_graphic_pane_vc_t

0x3950,	// (0x00054e08) list_double_heading_pane_vc_g1_ParamLimits

0x3950,	// (0x00054e08) list_double_heading_pane_vc_g1

0x3486,	// (0x0005493e) list_double_heading_pane_vc_g2_ParamLimits

0x3486,	// (0x0005493e) list_double_heading_pane_vc_g2

0x0001,

0xf5ad,	// (0x00060a65) list_double_heading_pane_vc_g_ParamLimits

0xf5ad,	// (0x00060a65) list_double_heading_pane_vc_g

0x1915,	// (0x00052dcd) list_double_heading_pane_vc_t1_ParamLimits

0x1915,	// (0x00052dcd) list_double_heading_pane_vc_t1

0x1929,	// (0x00052de1) list_double_heading_pane_vc_t2_ParamLimits

0x1929,	// (0x00052de1) list_double_heading_pane_vc_t2

0x0001,

0xfa30,	// (0x00060ee8) list_double_heading_pane_vc_t_ParamLimits

0xfa30,	// (0x00060ee8) list_double_heading_pane_vc_t

0x1941,	// (0x00052df9) list_double_graphic_pane_vc_g1_ParamLimits

0x1941,	// (0x00052df9) list_double_graphic_pane_vc_g1

0x361f,	// (0x00054ad7) list_double_graphic_pane_vc_g2_ParamLimits

0x361f,	// (0x00054ad7) list_double_graphic_pane_vc_g2

0x3950,	// (0x00054e08) list_double_graphic_pane_vc_g3_ParamLimits

0x3950,	// (0x00054e08) list_double_graphic_pane_vc_g3

0x0003,

0xfa35,	// (0x00060eed) list_double_graphic_pane_vc_g_ParamLimits

0xfa35,	// (0x00060eed) list_double_graphic_pane_vc_g

0x194d,	// (0x00052e05) list_double_graphic_pane_vc_t1_ParamLimits

0x194d,	// (0x00052e05) list_double_graphic_pane_vc_t1

0x1977,	// (0x00052e2f) list_double_graphic_pane_vc_t2_ParamLimits

0x1977,	// (0x00052e2f) list_double_graphic_pane_vc_t2

0x0001,

0xfa3e,	// (0x00060ef6) list_double_graphic_pane_vc_t_ParamLimits

0xfa3e,	// (0x00060ef6) list_double_graphic_pane_vc_t

0xf275,	// (0x0006072d) aid_size_cell_fastswap

0xb3c2,	// (0x0005c87a) aid_size_cell_touch_ParamLimits

0xb3c2,	// (0x0005c87a) aid_size_cell_touch

0xf3f6,	// (0x000608ae) popup_fast_swap_wide_window_ParamLimits

0xf3f6,	// (0x000608ae) popup_fast_swap_wide_window

0xb572,	// (0x0005ca2a) touch_pane_ParamLimits

0xb572,	// (0x0005ca2a) touch_pane

0x39ad,	// (0x00054e65) button_value_adjust_pane_cp2

0x02bf,	// (0x00051777) button_value_adjust_pane_cp4

0x02e3,	// (0x0005179b) form_field_data_pane_cp2

0xbcf1,	// (0x0005d1a9) form_field_data_wide_pane_cp2

0x3e34,	// (0x000552ec) bg_scroll_pane_ParamLimits

0x06c7,	// (0x00051b7f) scroll_handle_pane_ParamLimits

0x06db,	// (0x00051b93) scroll_sc2_down_pane_ParamLimits

0x06db,	// (0x00051b93) scroll_sc2_down_pane

0x3e65,	// (0x0005531d) scroll_sc2_up_pane_ParamLimits

0x3e65,	// (0x0005531d) scroll_sc2_up_pane

0xdd16,	// (0x0005f1ce) grid_wheel_folder_pane_g1_ParamLimits

0xdd16,	// (0x0005f1ce) grid_wheel_folder_pane_g1

0x090e,	// (0x00051dc6) clock_nsta_pane_cp2_ParamLimits

0x090e,	// (0x00051dc6) clock_nsta_pane_cp2

0xd0ff,	// (0x0005e5b7) listscroll_midp_pane_ParamLimits

0xd10b,	// (0x0005e5c3) midp_canvas_pane

0x4950,	// (0x00055e08) nsta_clock_indic_pane

0x4984,	// (0x00055e3c) listscroll_form_pane_vc

0x498c,	// (0x00055e44) listscroll_set_pane_vc_ParamLimits

0x498c,	// (0x00055e44) listscroll_set_pane_vc

0xd388,	// (0x0005e840) clock_nsta_pane

0xd3b2,	// (0x0005e86a) indicator_nsta_pane

0x4de0,	// (0x00056298) bg_popup_sub_pane_cp2_ParamLimits

0x4df4,	// (0x000562ac) find_pane_cp2_ParamLimits

0x4df4,	// (0x000562ac) find_pane_cp2

0x4e0a,	// (0x000562c2) grid_toobar_pane_ParamLimits

0x4eea,	// (0x000563a2) list_form_gen_pane_vc_ParamLimits

0x4eea,	// (0x000563a2) list_form_gen_pane_vc

0x4f00,	// (0x000563b8) scroll_pane_cp8_vc_ParamLimits

0x4f00,	// (0x000563b8) scroll_pane_cp8_vc

0x4f7c,	// (0x00056434) data_form_wide_pane_vc_ParamLimits

0x4f7c,	// (0x00056434) data_form_wide_pane_vc

0x4f88,	// (0x00056440) form_field_data_wide_pane_vc_g1

0x4f90,	// (0x00056448) form_field_data_wide_pane_vc_t1_ParamLimits

0x4f90,	// (0x00056448) form_field_data_wide_pane_vc_t1

0x39c1,	// (0x00054e79) input_focus_pane_cp6_vc_ParamLimits

0x39c1,	// (0x00054e79) input_focus_pane_cp6_vc

0x52d6,	// (0x0005678e) list_midp_pane_ParamLimits

0x6619,	// (0x00057ad1) scroll_pane_cp16_ParamLimits

0x6619,	// (0x00057ad1) scroll_pane_cp16

0x532c,	// (0x000567e4) button_value_adjust_pane_ParamLimits

0x532c,	// (0x000567e4) button_value_adjust_pane

0xd8bf,	// (0x0005ed77) button_value_adjust_pane_cp6_ParamLimits

0xd8bf,	// (0x0005ed77) button_value_adjust_pane_cp6

0xd9d9,	// (0x0005ee91) settings_code_pane_cp_ParamLimits

0xd9d9,	// (0x0005ee91) settings_code_pane_cp

0xdc06,	// (0x0005f0be) cell_touch_pane_g1

0xdc06,	// (0x0005f0be) cell_touch_pane_g2

0x0001,

0xf6e3,	// (0x00060b9b) cell_touch_pane_g

0xdb6c,	// (0x0005f024) cell_touch_pane_cp_ParamLimits

0xdb6c,	// (0x0005f024) cell_touch_pane_cp

0xdc10,	// (0x0005f0c8) cell_touch_pane_ParamLimits

0xdc10,	// (0x0005f0c8) cell_touch_pane

0xdc06,	// (0x0005f0be) scroll_sc2_down_pane_g1

0xdc06,	// (0x0005f0be) scroll_sc2_up_pane_g1

0x2bea,	// (0x000540a2) bg_set_opt_pane_cp4_vc

0x69a9,	// (0x00057e61) list_set_graphic_pane_vc_g1_ParamLimits

0x69a9,	// (0x00057e61) list_set_graphic_pane_vc_g1

0x69b5,	// (0x00057e6d) list_set_graphic_pane_vc_g2_ParamLimits

0x69b5,	// (0x00057e6d) list_set_graphic_pane_vc_g2

0x0001,

0xf9ce,	// (0x00060e86) list_set_graphic_pane_vc_g_ParamLimits

0xf9ce,	// (0x00060e86) list_set_graphic_pane_vc_g

0x69c1,	// (0x00057e79) text_primary_small_cp13_vc_ParamLimits

0x69c1,	// (0x00057e79) text_primary_small_cp13_vc

0x69d9,	// (0x00057e91) list_set_graphic_pane_vc_ParamLimits

0x69d9,	// (0x00057e91) list_set_graphic_pane_vc

0x2bea,	// (0x000540a2) input_focus_pane_cp2_vc

0xdc06,	// (0x0005f0be) setting_code_pane_vc_g1

0x2d15,	// (0x000541cd) setting_code_pane_vc_t1

0x69ec,	// (0x00057ea4) set_text_pane_vc_t1_ParamLimits

0x69ec,	// (0x00057ea4) set_text_pane_vc_t1

0x2bea,	// (0x000540a2) input_focus_pane_cp1_vc

0x6a08,	// (0x00057ec0) list_set_text_pane_vc

0xdc06,	// (0x0005f0be) setting_text_pane_vc_g1

0x2bea,	// (0x000540a2) bg_set_opt_pane_cp2_vc

0x2d0c,	// (0x000541c4) setting_slider_graphic_pane_vc_g1

0x6a12,	// (0x00057eca) setting_slider_graphic_pane_vc_t1

0x6a22,	// (0x00057eda) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9d3,	// (0x00060e8b) setting_slider_graphic_pane_vc_t

0x6a32,	// (0x00057eea) slider_set_pane_cp_vc

0x6a3a,	// (0x00057ef2) slider_set_pane_vc_g1

0x6a43,	// (0x00057efb) slider_set_pane_vc_g2

0x0006,

0xf9d8,	// (0x00060e90) slider_set_pane_vc_g

0x3a0d,	// (0x00054ec5) set_opt_bg_pane_g1_copy1

0x3a15,	// (0x00054ecd) set_opt_bg_pane_g2_copy1

0x6a6f,	// (0x00057f27) set_opt_bg_pane_g3_copy1

0x3a25,	// (0x00054edd) set_opt_bg_pane_g4_copy1

0x3a2d,	// (0x00054ee5) set_opt_bg_pane_g5_copy1

0x3a35,	// (0x00054eed) set_opt_bg_pane_g6_copy1

0x6a79,	// (0x00057f31) set_opt_bg_pane_g7_copy1

0x6a83,	// (0x00057f3b) set_opt_bg_pane_g8_copy1

0x6a8d,	// (0x00057f45) set_opt_bg_pane_g9_copy1

0x2bea,	// (0x000540a2) bg_set_opt_pane_cp_vc

0x6a97,	// (0x00057f4f) setting_slider_pane_vc_t1

0x6aa6,	// (0x00057f5e) setting_slider_pane_vc_t2

0x6ab6,	// (0x00057f6e) setting_slider_pane_vc_t3

0x0002,

0xf9e7,	// (0x00060e9f) setting_slider_pane_vc_t

0x6ac6,	// (0x00057f7e) slider_set_pane_vc

0x1391,	// (0x00052849) volume_set_pane_vc_g1

0x139a,	// (0x00052852) volume_set_pane_vc_g2

0x13a3,	// (0x0005285b) volume_set_pane_vc_g3

0x13ac,	// (0x00052864) volume_set_pane_vc_g4

0x13b5,	// (0x0005286d) volume_set_pane_vc_g5

0x13be,	// (0x00052876) volume_set_pane_vc_g6

0x13c7,	// (0x0005287f) volume_set_pane_vc_g7

0x13d0,	// (0x00052888) volume_set_pane_vc_g8

0x13d9,	// (0x00052891) volume_set_pane_vc_g9

0x13e2,	// (0x0005289a) volume_set_pane_vc_g10

0x0009,

0xf891,	// (0x00060d49) volume_set_pane_vc_g

0x6ace,	// (0x00057f86) volume_set_pane_vc

0x6ad6,	// (0x00057f8e) button_value_adjust_pane_cp1_vc

0x6ae0,	// (0x00057f98) list_highlight_pane_cp2_vc

0x6ae9,	// (0x00057fa1) list_set_pane_vc_ParamLimits

0x6ae9,	// (0x00057fa1) list_set_pane_vc

0x6b47,	// (0x00057fff) main_pane_set_vc_t1_ParamLimits

0x6b47,	// (0x00057fff) main_pane_set_vc_t1

0x6b5c,	// (0x00058014) main_pane_set_vc_t2_ParamLimits

0x6b5c,	// (0x00058014) main_pane_set_vc_t2

0x6b6e,	// (0x00058026) main_pane_set_vc_t3_ParamLimits

0x6b6e,	// (0x00058026) main_pane_set_vc_t3

0x6b82,	// (0x0005803a) main_pane_set_vc_t4_ParamLimits

0x6b82,	// (0x0005803a) main_pane_set_vc_t4

0x0003,

0xf9ee,	// (0x00060ea6) main_pane_set_vc_t_ParamLimits

0xf9ee,	// (0x00060ea6) main_pane_set_vc_t

0x6b96,	// (0x0005804e) setting_code_pane_vc_ParamLimits

0x6b96,	// (0x0005804e) setting_code_pane_vc

0x6ba7,	// (0x0005805f) setting_slider_graphic_pane_vc

0x6ba7,	// (0x0005805f) setting_slider_pane_vc

0x6ba7,	// (0x0005805f) setting_text_pane_vc

0x6ba7,	// (0x0005805f) setting_volume_pane_vc

0x6bb1,	// (0x00058069) scroll_pane_cp121_vc

0x399b,	// (0x00054e53) set_content_pane_vc

0x6bb9,	// (0x00058071) button_value_adjust_pane_g1

0x6bc2,	// (0x0005807a) button_value_adjust_pane_g2

0x0001,

0xfa43,	// (0x00060efb) button_value_adjust_pane_g

0x6bcb,	// (0x00058083) form_field_slider_wide_pane_vc_t1_ParamLimits

0x6bcb,	// (0x00058083) form_field_slider_wide_pane_vc_t1

0x6bdf,	// (0x00058097) form_field_slider_wide_pane_vc_t2_ParamLimits

0x6bdf,	// (0x00058097) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa48,	// (0x00060f00) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa48,	// (0x00060f00) form_field_slider_wide_pane_vc_t

0x2f45,	// (0x000543fd) input_focus_pane_cp10_vc_ParamLimits

0x2f45,	// (0x000543fd) input_focus_pane_cp10_vc

0x6c0d,	// (0x000580c5) slider_cont_pane_cp1_vc_ParamLimits

0x6c0d,	// (0x000580c5) slider_cont_pane_cp1_vc

0x6c1f,	// (0x000580d7) slider_form_pane_g1_cp2

0x6a43,	// (0x00057efb) slider_form_pane_g2_cp2

0x6c4c,	// (0x00058104) form_field_slider_pane_vc_t3

0x6c5a,	// (0x00058112) form_field_slider_pane_vc_t4

0x6c68,	// (0x00058120) slider_form_pane_vc_ParamLimits

0x6c68,	// (0x00058120) slider_form_pane_vc

0x6c81,	// (0x00058139) form_field_slider_pane_vc_t1_ParamLimits

0x6c81,	// (0x00058139) form_field_slider_pane_vc_t1

0x6bdf,	// (0x00058097) form_field_slider_pane_vc_t2_ParamLimits

0x6bdf,	// (0x00058097) form_field_slider_pane_vc_t2

0x0001,

0xfa5a,	// (0x00060f12) form_field_slider_pane_vc_t_ParamLimits

0xfa5a,	// (0x00060f12) form_field_slider_pane_vc_t

0x2f45,	// (0x000543fd) input_focus_pane_cp9_vc_ParamLimits

0x2f45,	// (0x000543fd) input_focus_pane_cp9_vc

0x6c9d,	// (0x00058155) slider_cont_pane_vc_ParamLimits

0x6c9d,	// (0x00058155) slider_cont_pane_vc

0x6cb1,	// (0x00058169) list_form_graphic_pane_cp_vc_ParamLimits

0x6cb1,	// (0x00058169) list_form_graphic_pane_cp_vc

0x4f88,	// (0x00056440) form_field_popup_wide_pane_vc_g1

0x6cc6,	// (0x0005817e) form_field_popup_wide_pane_vc_t1_ParamLimits

0x6cc6,	// (0x0005817e) form_field_popup_wide_pane_vc_t1

0x39c1,	// (0x00054e79) input_focus_pane_cp8_vc_ParamLimits

0x39c1,	// (0x00054e79) input_focus_pane_cp8_vc

0x6d0b,	// (0x000581c3) list_form_wide_pane_vc_ParamLimits

0x6d0b,	// (0x000581c3) list_form_wide_pane_vc

0x6d17,	// (0x000581cf) list_form_graphic_pane_vc_g1

0x6d1f,	// (0x000581d7) list_form_graphic_pane_vc_t1_ParamLimits

0x6d1f,	// (0x000581d7) list_form_graphic_pane_vc_t1

0x2cca,	// (0x00054182) list_highlight_pane_cp5_vc_ParamLimits

0x2cca,	// (0x00054182) list_highlight_pane_cp5_vc

0x6d3b,	// (0x000581f3) list_form_graphic_pane_vc_ParamLimits

0x6d3b,	// (0x000581f3) list_form_graphic_pane_vc

0x4f88,	// (0x00056440) form_field_popup_pane_vc_g1

0x6d51,	// (0x00058209) form_field_popup_pane_vc_t1_ParamLimits

0x6d51,	// (0x00058209) form_field_popup_pane_vc_t1

0x39c1,	// (0x00054e79) input_focus_pane_cp7_vc_ParamLimits

0x39c1,	// (0x00054e79) input_focus_pane_cp7_vc

0x6d68,	// (0x00058220) list_form_pane_vc_ParamLimits

0x6d68,	// (0x00058220) list_form_pane_vc

0x6d74,	// (0x0005822c) data_form_pane_vc_t1_ParamLimits

0x6d74,	// (0x0005822c) data_form_pane_vc_t1

0x3a0d,	// (0x00054ec5) input_focus_pane_vc_g1

0x3a15,	// (0x00054ecd) input_focus_pane_vc_g2

0x3a1d,	// (0x00054ed5) input_focus_pane_vc_g3

0x3a25,	// (0x00054edd) input_focus_pane_vc_g4

0x3a2d,	// (0x00054ee5) input_focus_pane_vc_g5

0x3a35,	// (0x00054eed) input_focus_pane_vc_g6

0x3a3d,	// (0x00054ef5) input_focus_pane_vc_g7

0x3a45,	// (0x00054efd) input_focus_pane_vc_g8

0x3a4d,	// (0x00054f05) input_focus_pane_vc_g9

0xdc06,	// (0x0005f0be) input_focus_pane_vc_g10

0x0009,

0xf66c,	// (0x00060b24) input_focus_pane_vc_g

0x4f7c,	// (0x00056434) data_form_pane_vc_ParamLimits

0x4f7c,	// (0x00056434) data_form_pane_vc

0x4f88,	// (0x00056440) form_field_data_pane_vc_g1

0x6d8f,	// (0x00058247) form_field_data_pane_vc_t1_ParamLimits

0x6d8f,	// (0x00058247) form_field_data_pane_vc_t1

0x39c1,	// (0x00054e79) input_focus_pane_vc_ParamLimits

0x39c1,	// (0x00054e79) input_focus_pane_vc

0x6da9,	// (0x00058261) button_value_adjust_pane_cp3_vc

0x6db1,	// (0x00058269) button_value_adjust_pane_cp5_vc

0x6db9,	// (0x00058271) form_field_data_pane_vc_ParamLimits

0x6db9,	// (0x00058271) form_field_data_pane_vc

0x6dd0,	// (0x00058288) form_field_data_pane_vc_cp2

0x6dd8,	// (0x00058290) form_field_data_wide_pane_vc_ParamLimits

0x6dd8,	// (0x00058290) form_field_data_wide_pane_vc

0x6dee,	// (0x000582a6) form_field_data_wide_pane_vc_cp2

0x6df6,	// (0x000582ae) form_field_popup_pane_vc_ParamLimits

0x6df6,	// (0x000582ae) form_field_popup_pane_vc

0x6e0d,	// (0x000582c5) form_field_popup_wide_pane_vc_ParamLimits

0x6e0d,	// (0x000582c5) form_field_popup_wide_pane_vc

0x6e23,	// (0x000582db) form_field_slider_pane_vc_ParamLimits

0x6e23,	// (0x000582db) form_field_slider_pane_vc

0x6e36,	// (0x000582ee) form_field_slider_wide_pane_vc_ParamLimits

0x6e36,	// (0x000582ee) form_field_slider_wide_pane_vc

0xdc2e,	// (0x0005f0e6) grid_touch_1_pane_ParamLimits

0xdc2e,	// (0x0005f0e6) grid_touch_1_pane

0xdc42,	// (0x0005f0fa) grid_touch_2_pane_ParamLimits

0xdc42,	// (0x0005f0fa) grid_touch_2_pane

0x6f1a,	// (0x000583d2) touch_pane_g1_ParamLimits

0x6f1a,	// (0x000583d2) touch_pane_g1

0x6e6d,	// (0x00058325) cell_app_pane_cp_wide_ParamLimits

0x6e6d,	// (0x00058325) cell_app_pane_cp_wide

0x6e7e,	// (0x00058336) grid_popup_fast_wide_pane_ParamLimits

0x6e7e,	// (0x00058336) grid_popup_fast_wide_pane

0x6e92,	// (0x0005834a) scroll_pane_cp19_ParamLimits

0x6e92,	// (0x0005834a) scroll_pane_cp19

0x2bea,	// (0x000540a2) bg_popup_window_pane_cp20

0x6ea6,	// (0x0005835e) listscroll_popup_fast_wide_pane

0xdc6c,	// (0x0005f124) grid_indicator_nsta_pane

0x6ec0,	// (0x00058378) clock_nsta_pane_g1

0x6ec9,	// (0x00058381) clock_nsta_pane_t1

0xdc78,	// (0x0005f130) cell_indicator_nsta_pane_ParamLimits

0xdc78,	// (0x0005f130) cell_indicator_nsta_pane

0x6f1a,	// (0x000583d2) cell_indicator_nsta_pane_g1

0xdc93,	// (0x0005f14b) cell_indicator_nsta_pane_g2

0x0001,

0xfa6b,	// (0x00060f23) cell_indicator_nsta_pane_g

0x6f3a,	// (0x000583f2) clock_nsta_pane_cp

0x6f43,	// (0x000583fb) indicator_nsta_pane_cp

0x6f4d,	// (0x00058405) nsta_clock_indic_pane_g1

0x2d93,	// (0x0005424b) grid_indicator_pane

0x3f5a,	// (0x00055412) scroll_pane_cp29

0x085d,	// (0x00051d15) indicator_nsta_pane_cp2_ParamLimits

0x085d,	// (0x00051d15) indicator_nsta_pane_cp2

0x2cca,	// (0x00054182) main_apps_wheel_pane

0x5197,	// (0x0005664f) form_midp_field_text_pane_ParamLimits

0x52e2,	// (0x0005679a) scroll_bar_cp050_ParamLimits

0x6fa6,	// (0x0005845e) cell_indicator_pane_ParamLimits

0x6fa6,	// (0x0005845e) cell_indicator_pane

0x6fbd,	// (0x00058475) cell_indicator_pane_g1

0xdca0,	// (0x0005f158) grid_wheel_folder_pane_ParamLimits

0xdca0,	// (0x0005f158) grid_wheel_folder_pane

0xdcae,	// (0x0005f166) list_wheel_apps_pane_ParamLimits

0xdcae,	// (0x0005f166) list_wheel_apps_pane

0xdcbc,	// (0x0005f174) main_apps_wheel_pane_g1_ParamLimits

0xdcbc,	// (0x0005f174) main_apps_wheel_pane_g1

0xdcc8,	// (0x0005f180) main_apps_wheel_pane_g2_ParamLimits

0xdcc8,	// (0x0005f180) main_apps_wheel_pane_g2

0x0001,

0xfa87,	// (0x00060f3f) main_apps_wheel_pane_g_ParamLimits

0xfa87,	// (0x00060f3f) main_apps_wheel_pane_g

0xdcd6,	// (0x0005f18e) main_apps_wheel_pane_t1_ParamLimits

0xdcd6,	// (0x0005f18e) main_apps_wheel_pane_t1

0xdcea,	// (0x0005f1a2) list_wheel_apps_pane_g1

0xdcf2,	// (0x0005f1aa) list_wheel_apps_pane_g2

0xdcfa,	// (0x0005f1b2) list_wheel_apps_pane_g3

0xdd02,	// (0x0005f1ba) list_wheel_apps_pane_g4

0xdd0c,	// (0x0005f1c4) list_wheel_apps_pane_g5

0x0004,

0xfa8c,	// (0x00060f44) list_wheel_apps_pane_g

0x44e0,	// (0x00055998) navi_icon_text_pane

0xd27c,	// (0x0005e734) aid_fill_nsta

0x7082,	// (0x0005853a) navi_icon_text_pane_g1

0x708e,	// (0x00058546) navi_icon_text_pane_t1

0x4373,	// (0x0005582b) list_set_graphic_pane_t1_ParamLimits

0x4373,	// (0x0005582b) list_set_graphic_pane_t1

0x5a4d,	// (0x00056f05) popup_midp_note_alarm_window_t6_ParamLimits

0x5a4d,	// (0x00056f05) popup_midp_note_alarm_window_t6

0x5a5f,	// (0x00056f17) popup_midp_note_alarm_window_t7_ParamLimits

0x5a5f,	// (0x00056f17) popup_midp_note_alarm_window_t7

0x5a71,	// (0x00056f29) popup_midp_note_alarm_window_t8_ParamLimits

0x5a71,	// (0x00056f29) popup_midp_note_alarm_window_t8

0x5a83,	// (0x00056f3b) popup_midp_note_alarm_window_t9_ParamLimits

0x5a83,	// (0x00056f3b) popup_midp_note_alarm_window_t9

0x5a95,	// (0x00056f4d) popup_midp_note_alarm_window_t10_ParamLimits

0x5a95,	// (0x00056f4d) popup_midp_note_alarm_window_t10

0x5aa7,	// (0x00056f5f) popup_midp_note_alarm_window_t11_ParamLimits

0x5aa7,	// (0x00056f5f) popup_midp_note_alarm_window_t11

0x5ab9,	// (0x00056f71) scroll_pane_cp17_ParamLimits

0x5ab9,	// (0x00056f71) scroll_pane_cp17

0x1391,	// (0x00052849) volume_small_pane_cp_g1

0x19a1,	// (0x00052e59) volume_small_pane_cp_g2

0x19aa,	// (0x00052e62) volume_small_pane_cp_g3

0x19b3,	// (0x00052e6b) volume_small_pane_cp_g4

0x19bc,	// (0x00052e74) volume_small_pane_cp_g5

0x19c5,	// (0x00052e7d) volume_small_pane_cp_g6

0x19ce,	// (0x00052e86) volume_small_pane_cp_g7

0x19d7,	// (0x00052e8f) volume_small_pane_cp_g8

0x19e0,	// (0x00052e98) volume_small_pane_cp_g9

0x19e9,	// (0x00052ea1) volume_small_pane_cp_g10

0x4731,	// (0x00055be9) midp_ticker_pane_g1_ParamLimits

0x473d,	// (0x00055bf5) midp_ticker_pane_g2_ParamLimits

0xf738,	// (0x00060bf0) midp_ticker_pane_g_ParamLimits

0x4749,	// (0x00055c01) midp_ticker_pane_t1_ParamLimits

0xd2a0,	// (0x0005e758) aid_fill_nsta_2

0x52ce,	// (0x00056786) list_form2_midp_pane

0x6412,	// (0x000578ca) midp_editing_number_pane_ParamLimits

0x6421,	// (0x000578d9) midp_ticker_pane_ParamLimits

0x70a0,	// (0x00058558) form2_midp_field_pane

0x70c4,	// (0x0005857c) scroll_pane_cp51

0x70e4,	// (0x0005859c) form2_midp_button_pane_ParamLimits

0x70e4,	// (0x0005859c) form2_midp_button_pane

0x70f6,	// (0x000585ae) form2_midp_content_pane_ParamLimits

0x70f6,	// (0x000585ae) form2_midp_content_pane

0x7110,	// (0x000585c8) form2_midp_field_choice_group_pane

0x7118,	// (0x000585d0) form2_midp_field_pane_g1

0x7120,	// (0x000585d8) form2_midp_field_pane_g2

0x7128,	// (0x000585e0) form2_midp_field_pane_g3

0x7130,	// (0x000585e8) form2_midp_field_pane_g4

0x0003,

0xfab1,	// (0x00060f69) form2_midp_field_pane_g

0x7138,	// (0x000585f0) form2_midp_gauge_slider_pane

0x7140,	// (0x000585f8) form2_midp_gauge_wait_pane

0x7148,	// (0x00058600) form2_midp_image_pane_ParamLimits

0x7148,	// (0x00058600) form2_midp_image_pane

0x7163,	// (0x0005861b) form2_midp_label_pane_ParamLimits

0x7163,	// (0x0005861b) form2_midp_label_pane

0xdd3f,	// (0x0005f1f7) form2_midp_label_pane_cp_ParamLimits

0xdd3f,	// (0x0005f1f7) form2_midp_label_pane_cp

0x719d,	// (0x00058655) form2_midp_string_pane_ParamLimits

0x719d,	// (0x00058655) form2_midp_string_pane

0xc734,	// (0x0005dbec) form2_midp_text_pane_ParamLimits

0xc734,	// (0x0005dbec) form2_midp_text_pane

0x71af,	// (0x00058667) form2_midp_time_pane

0x71bf,	// (0x00058677) input_focus_pane_cp51_ParamLimits

0x71bf,	// (0x00058677) input_focus_pane_cp51

0x71d7,	// (0x0005868f) form2_midp_label_pane_t1_ParamLimits

0x71d7,	// (0x0005868f) form2_midp_label_pane_t1

0xc74d,	// (0x0005dc05) form2_mdip_text_pane_t1_ParamLimits

0xc74d,	// (0x0005dc05) form2_mdip_text_pane_t1

0x1a2f,	// (0x00052ee7) form2_midp_time_pane_t1

0x7220,	// (0x000586d8) form2_midp_gauge_slider_pane_t1

0xdd5e,	// (0x0005f216) form2_midp_gauge_slider_pane_t2

0xdd70,	// (0x0005f228) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaba,	// (0x00060f72) form2_midp_gauge_slider_pane_t

0x7256,	// (0x0005870e) form2_midp_slider_pane

0x7262,	// (0x0005871a) form2_midp_gauge_wait_pane_t1

0x7270,	// (0x00058728) form2_midp_wait_pane_ParamLimits

0x7270,	// (0x00058728) form2_midp_wait_pane

0xdd82,	// (0x0005f23a) list_single_2graphic_pane_cp4_ParamLimits

0xdd82,	// (0x0005f23a) list_single_2graphic_pane_cp4

0xd6bc,	// (0x0005eb74) list_single_midp_graphic_pane_cp_ParamLimits

0xd6bc,	// (0x0005eb74) list_single_midp_graphic_pane_cp

0x2bea,	// (0x000540a2) list_highlight_pane_cp20

0x72bf,	// (0x00058777) list_single_2graphic_pane_g1_cp4

0x72c7,	// (0x0005877f) list_single_2graphic_pane_g2_cp4

0x72cf,	// (0x00058787) list_single_2graphic_pane_t1_cp4

0x2cca,	// (0x00054182) list_highlight_pane_cp21

0x72de,	// (0x00058796) list_single_midp_graphic_pane_g4_cp

0x72ed,	// (0x000587a5) list_single_midp_graphic_pane_t1_cp

0xdd96,	// (0x0005f24e) form2_mdip_string_pane_t1_ParamLimits

0xdd96,	// (0x0005f24e) form2_mdip_string_pane_t1

0x2bea,	// (0x000540a2) bg_wml_button_pane_cp2

0xdc06,	// (0x0005f0be) form2_midp_image_pane_g1

0x34f4,	// (0x000549ac) list_double_large_graphic_pane_g5_ParamLimits

0x34f4,	// (0x000549ac) list_double_large_graphic_pane_g5

0xd0ff,	// (0x0005e5b7) midp_form_pane_ParamLimits

0x2cca,	// (0x00054182) main_apps_wheel_pane_ParamLimits

0xc3c0,	// (0x0005d878) popup_preview_window_ParamLimits

0xc3c0,	// (0x0005d878) popup_preview_window

0x1109,	// (0x000525c1) popup_touch_info_window_ParamLimits

0x1109,	// (0x000525c1) popup_touch_info_window

0x1127,	// (0x000525df) popup_touch_menu_window_ParamLimits

0x1127,	// (0x000525df) popup_touch_menu_window

0xdbfc,	// (0x0005f0b4) bg_popup_sub_pane_cp6

0x73fb,	// (0x000588b3) list_touch_menu_pane

0x7403,	// (0x000588bb) list_single_touch_menu_pane_ParamLimits

0x7403,	// (0x000588bb) list_single_touch_menu_pane

0x7419,	// (0x000588d1) list_single_touch_menu_pane_t1

0x2cca,	// (0x00054182) bg_popup_sub_pane_cp7_ParamLimits

0x2cca,	// (0x00054182) bg_popup_sub_pane_cp7

0x7427,	// (0x000588df) heading_sub_pane

0x742f,	// (0x000588e7) list_touch_info_pane_ParamLimits

0x742f,	// (0x000588e7) list_touch_info_pane

0x743e,	// (0x000588f6) list_single_touch_info_pane_ParamLimits

0x743e,	// (0x000588f6) list_single_touch_info_pane

0x7450,	// (0x00058908) list_single_touch_info_pane_t1

0x745e,	// (0x00058916) list_single_touch_info_pane_t2

0x0001,

0xfac8,	// (0x00060f80) list_single_touch_info_pane_t

0x4654,	// (0x00055b0c) bg_popup_heading_pane_cp

0x746c,	// (0x00058924) heading_sub_pane_t1

0x4f16,	// (0x000563ce) bg_popup_preview_window_pane_cp_ParamLimits

0x4f16,	// (0x000563ce) bg_popup_preview_window_pane_cp

0x7427,	// (0x000588df) heading_preview_pane

0x742f,	// (0x000588e7) list_preview_pane_ParamLimits

0x742f,	// (0x000588e7) list_preview_pane

0x747a,	// (0x00058932) popup_preview_window_g1

0x743e,	// (0x000588f6) list_single_preview_pane_ParamLimits

0x743e,	// (0x000588f6) list_single_preview_pane

0x7482,	// (0x0005893a) list_single_preview_pane_g1

0x748a,	// (0x00058942) list_single_preview_pane_t1

0x7450,	// (0x00058908) list_single_preview_pane_t2

0x0001,

0xfacd,	// (0x00060f85) list_single_preview_pane_t

0x7498,	// (0x00058950) bg_popup_heading_pane_cp2_ParamLimits

0x7498,	// (0x00058950) bg_popup_heading_pane_cp2

0x74ae,	// (0x00058966) heading_preview_pane_g1

0x74b6,	// (0x0005896e) heading_preview_pane_t1_ParamLimits

0x74b6,	// (0x0005896e) heading_preview_pane_t1

0x2db6,	// (0x0005426e) soft_indicator_pane_t1_ParamLimits

0x391c,	// (0x00054dd4) scroll_pane_ParamLimits

0x3e53,	// (0x0005530b) scroll_sc2_left_pane

0x3e5c,	// (0x00055314) scroll_sc2_right_pane

0x3e7b,	// (0x00055333) scroll_bg_pane_g1_ParamLimits

0x3e90,	// (0x00055348) scroll_bg_pane_g2_ParamLimits

0x3ea8,	// (0x00055360) scroll_bg_pane_g3_ParamLimits

0xf6c3,	// (0x00060b7b) scroll_bg_pane_g_ParamLimits

0x3e7b,	// (0x00055333) scroll_handle_pane_g1_ParamLimits

0x3eca,	// (0x00055382) scroll_handle_pane_g2_ParamLimits

0x3ea8,	// (0x00055360) scroll_handle_pane_g3_ParamLimits

0xf6ca,	// (0x00060b82) scroll_handle_pane_g_ParamLimits

0x0bcd,	// (0x00052085) popup_choice_list_window_ParamLimits

0x0bcd,	// (0x00052085) popup_choice_list_window

0x4dec,	// (0x000562a4) choice_list_pane

0x4e6e,	// (0x00056326) cell_toolbar_pane_t1

0x4e96,	// (0x0005634e) toolbar_button_pane_ParamLimits

0x5f73,	// (0x0005742b) ai_gene_pane_1_t2_ParamLimits

0x5f73,	// (0x0005742b) ai_gene_pane_1_t2

0x0001,

0xf8ed,	// (0x00060da5) ai_gene_pane_1_t_ParamLimits

0xf8ed,	// (0x00060da5) ai_gene_pane_1_t

0x74d3,	// (0x0005898b) scroll_sc2_left_pane_g1

0x74d3,	// (0x0005898b) scroll_sc2_right_pane_g1

0x4978,	// (0x00055e30) bg_popup_sub_pane_cp10

0x74dd,	// (0x00058995) list_choice_list_pane

0x74f6,	// (0x000589ae) list_single_choice_list_pane_ParamLimits

0x74f6,	// (0x000589ae) list_single_choice_list_pane

0x7509,	// (0x000589c1) list_single_choice_list_pane_g1

0x3b59,	// (0x00055011) list_single_choice_list_pane_t1_ParamLimits

0x3b59,	// (0x00055011) list_single_choice_list_pane_t1

0x7511,	// (0x000589c9) choice_list_pane_g1

0x7519,	// (0x000589d1) choice_list_pane_t1

0xdbfc,	// (0x0005f0b4) input_focus_pane_cp11

0x3d30,	// (0x000551e8) title_pane_stacon_g2_ParamLimits

0x3d30,	// (0x000551e8) title_pane_stacon_g2

0x0002,

0xf6a9,	// (0x00060b61) title_pane_stacon_g_ParamLimits

0xf6a9,	// (0x00060b61) title_pane_stacon_g

0x4654,	// (0x00055b0c) cursor_press_pane

0xc067,	// (0x0005d51f) popup_fep_hwr_window_ParamLimits

0xc067,	// (0x0005d51f) popup_fep_hwr_window

0x0cf3,	// (0x000521ab) popup_fep_vkb_window_ParamLimits

0x0cf3,	// (0x000521ab) popup_fep_vkb_window

0x7527,	// (0x000589df) cursor_press_pane_g1

0x0002,

0xfaf6,	// (0x00060fae) fep_vkb_side_pane_g_ParamLimits

0x1a7b,	// (0x00052f33) fep_hwr_candidate_pane_ParamLimits

0x1a7b,	// (0x00052f33) fep_hwr_candidate_pane

0x1aa5,	// (0x00052f5d) fep_hwr_side_pane_ParamLimits

0x1aa5,	// (0x00052f5d) fep_hwr_side_pane

0x1ac5,	// (0x00052f7d) fep_hwr_top_pane_ParamLimits

0x1ac5,	// (0x00052f7d) fep_hwr_top_pane

0x1add,	// (0x00052f95) fep_hwr_write_pane_ParamLimits

0x1add,	// (0x00052f95) fep_hwr_write_pane

0xfaf6,	// (0x00060fae) fep_vkb_side_pane_g

0x752f,	// (0x000589e7) fep_hwr_top_pane_g1

0x7541,	// (0x000589f9) fep_hwr_top_pane_g2

0x1b17,	// (0x00052fcf) fep_hwr_top_pane_g3

0x0002,

0xfad2,	// (0x00060f8a) fep_hwr_top_pane_g

0x1b2c,	// (0x00052fe4) fep_hwr_top_text_pane

0x404a,	// (0x00055502) fep_hwr_top_text_pane_g1

0x7577,	// (0x00058a2f) fep_hwr_top_text_pane_t1

0x1c22,	// (0x000530da) fep_hwr_candidate_pane_g1

0x77ca,	// (0x00058c82) fep_vkb_keypad_pane_g3_ParamLimits

0x77ca,	// (0x00058c82) fep_vkb_keypad_pane_g3

0x77f2,	// (0x00058caa) fep_vkb_keypad_pane_g4_ParamLimits

0x77f2,	// (0x00058caa) fep_vkb_keypad_pane_g4

0x7861,	// (0x00058d19) fep_vkb_bottom_pane_g2_ParamLimits

0x7861,	// (0x00058d19) fep_vkb_bottom_pane_g2

0x0001,

0xfafd,	// (0x00060fb5) fep_vkb_bottom_pane_g_ParamLimits

0xfafd,	// (0x00060fb5) fep_vkb_bottom_pane_g

0x74d3,	// (0x0005898b) cell_vkb_side_pane_g2

0x0001,

0xfb07,	// (0x00060fbf) cell_vkb_side_pane_g

0x78ec,	// (0x00058da4) cell_vkb_side_pane_t1

0x78fa,	// (0x00058db2) cell_vkb_side_pane_t1_copy1

0x74d3,	// (0x0005898b) bg_fep_vkb_candidate_pane_g2

0x7a26,	// (0x00058ede) cell_vkb_candidate_pane_ParamLimits

0x7585,	// (0x00058a3d) aid_size_cell_vkb_ParamLimits

0x7585,	// (0x00058a3d) aid_size_cell_vkb

0x7a26,	// (0x00058ede) cell_vkb_candidate_pane

0x1c49,	// (0x00053101) bg_popup_fep_shadow_pane_g1

0xde18,	// (0x0005f2d0) fep_vkb_bottom_pane_ParamLimits

0xde18,	// (0x0005f2d0) fep_vkb_bottom_pane

0x7649,	// (0x00058b01) fep_vkb_candidate_pane_ParamLimits

0x7649,	// (0x00058b01) fep_vkb_candidate_pane

0xde3d,	// (0x0005f2f5) fep_vkb_keypad_pane_ParamLimits

0xde3d,	// (0x0005f2f5) fep_vkb_keypad_pane

0xde79,	// (0x0005f331) fep_vkb_side_pane_ParamLimits

0xde79,	// (0x0005f331) fep_vkb_side_pane

0xdeb5,	// (0x0005f36d) fep_vkb_top_pane_ParamLimits

0xdeb5,	// (0x0005f36d) fep_vkb_top_pane

0x7723,	// (0x00058bdb) fep_vkb_top_pane_g1_ParamLimits

0x7723,	// (0x00058bdb) fep_vkb_top_pane_g1

0x7732,	// (0x00058bea) fep_vkb_top_pane_g2_ParamLimits

0x7732,	// (0x00058bea) fep_vkb_top_pane_g2

0x7741,	// (0x00058bf9) fep_vkb_top_pane_g3_ParamLimits

0x7741,	// (0x00058bf9) fep_vkb_top_pane_g3

0x0003,

0xfaed,	// (0x00060fa5) fep_vkb_top_pane_g_ParamLimits

0xfaed,	// (0x00060fa5) fep_vkb_top_pane_g

0x775f,	// (0x00058c17) fep_vkb_top_text_pane_ParamLimits

0x775f,	// (0x00058c17) fep_vkb_top_text_pane

0xdef1,	// (0x0005f3a9) fep_vkb_side_pane_g1_ParamLimits

0xdef1,	// (0x0005f3a9) fep_vkb_side_pane_g1

0x77b9,	// (0x00058c71) grid_vkb_side_pane_ParamLimits

0x77b9,	// (0x00058c71) grid_vkb_side_pane

0x1c51,	// (0x00053109) bg_popup_fep_shadow_pane_g2

0x1c5a,	// (0x00053112) bg_popup_fep_shadow_pane_g3

0x1c62,	// (0x0005311a) bg_popup_fep_shadow_pane_g4

0x1c6b,	// (0x00053123) bg_popup_fep_shadow_pane_g5

0x1c75,	// (0x0005312d) bg_popup_fep_shadow_pane_g6

0x1c7d,	// (0x00053135) bg_popup_fep_shadow_pane_g7

0x3a25,	// (0x00054edd) bg_popup_fep_shadow_pane_g8

0x7810,	// (0x00058cc8) grid_vkb_keypad_number_pane_ParamLimits

0x7810,	// (0x00058cc8) grid_vkb_keypad_number_pane

0x7820,	// (0x00058cd8) grid_vkb_keypad_pane_ParamLimits

0x7820,	// (0x00058cd8) grid_vkb_keypad_pane

0x7846,	// (0x00058cfe) fep_vkb_bottom_pane_g1_ParamLimits

0x7846,	// (0x00058cfe) fep_vkb_bottom_pane_g1

0x786f,	// (0x00058d27) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x786f,	// (0x00058d27) grid_vkb_keypad_bottom_left_pane

0x7884,	// (0x00058d3c) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x7884,	// (0x00058d3c) grid_vkb_keypad_bottom_right_pane

0x7899,	// (0x00058d51) fep_vkb_top_text_pane_g1

0xdf38,	// (0x0005f3f0) fep_vkb_top_text_pane_t1

0xdf4a,	// (0x0005f402) cell_vkb_side_pane_ParamLimits

0xdf4a,	// (0x0005f402) cell_vkb_side_pane

0x74d3,	// (0x0005898b) cell_vkb_side_pane_g1

0x7908,	// (0x00058dc0) cell_vkb_keypad_pane_ParamLimits

0x7908,	// (0x00058dc0) cell_vkb_keypad_pane

0x797d,	// (0x00058e35) cell_vkb_keypad_pane_g1

0x0008,

0xfb1a,	// (0x00060fd2) bg_popup_fep_shadow_pane_g

0x1c8f,	// (0x00053147) cell_hwr_side_pane_g1

0x1c8f,	// (0x00053147) cell_hwr_side_pane_g2

0x7987,	// (0x00058e3f) cell_vkb_keypad_pane_t1

0xdf60,	// (0x0005f418) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xdf60,	// (0x0005f418) cell_vkb_keypad_bottom_left_pane

0xdf75,	// (0x0005f42d) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xdf75,	// (0x0005f42d) cell_vkb_keypad_bottom_right_pane

0x74d3,	// (0x0005898b) cell_vkb_keypad_bottom_left_pane_g1

0x74d3,	// (0x0005898b) cell_vkb_keypad_bottom_right_pane_g1

0x79eb,	// (0x00058ea3) cell_vkb_keypad_number_pane_ParamLimits

0x79eb,	// (0x00058ea3) cell_vkb_keypad_number_pane

0x7a0a,	// (0x00058ec2) cell_vkb_keypad_number_pane_g1

0x7a14,	// (0x00058ecc) cell_vkb_keypad_number_pane_g2

0x7a1d,	// (0x00058ed5) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb0c,	// (0x00060fc4) cell_vkb_keypad_number_pane_g

0x7987,	// (0x00058e3f) cell_vkb_keypad_number_pane_t1

0x7a41,	// (0x00058ef9) fep_vkb_candidate_pane_g1

0x0001,

0xfb2d,	// (0x00060fe5) cell_hwr_side_pane_g

0x7a5a,	// (0x00058f12) cell_hwr_side_pane_t1

0x1c99,	// (0x00053151) cell_hwr_side_pane_t1_copy1

0x1ca7,	// (0x0005315f) cell_hwr_candidate_pane_g1

0x1cd6,	// (0x0005318e) cell_hwr_candidate_pane_t1

0x74d3,	// (0x0005898b) cell_vkb_candidate_pane_g2

0x7a9e,	// (0x00058f56) cell_vkb_candidate_pane_t1

0x1a42,	// (0x00052efa) bg_popup_fep_shadow_pane_ParamLimits

0x1a42,	// (0x00052efa) bg_popup_fep_shadow_pane

0x1af7,	// (0x00052faf) bg_fep_hwr_top_pane_g4

0x7553,	// (0x00058a0b) bg_hwr_side_pane_g1_ParamLimits

0x7553,	// (0x00058a0b) bg_hwr_side_pane_g1

0xc77e,	// (0x0005dc36) cell_hwr_side_pane_ParamLimits

0xc77e,	// (0x0005dc36) cell_hwr_side_pane

0x1ba3,	// (0x0005305b) fep_hwr_write_pane_g1_ParamLimits

0x1ba3,	// (0x0005305b) fep_hwr_write_pane_g1

0x1bb0,	// (0x00053068) fep_hwr_write_pane_g2_ParamLimits

0x1bb0,	// (0x00053068) fep_hwr_write_pane_g2

0x1bbd,	// (0x00053075) fep_hwr_write_pane_g3_ParamLimits

0x1bbd,	// (0x00053075) fep_hwr_write_pane_g3

0xc79e,	// (0x0005dc56) fep_hwr_write_pane_g4_ParamLimits

0xc79e,	// (0x0005dc56) fep_hwr_write_pane_g4

0x0005,

0xfad9,	// (0x00060f91) fep_hwr_write_pane_g_ParamLimits

0xfad9,	// (0x00060f91) fep_hwr_write_pane_g

0x1af7,	// (0x00052faf) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x1af7,	// (0x00052faf) bg_fep_hwr_candidate_pane_g2

0x1be0,	// (0x00053098) cell_hwr_candidate_pane_ParamLimits

0x1be0,	// (0x00053098) cell_hwr_candidate_pane

0x1c22,	// (0x000530da) fep_hwr_candidate_pane_g1_ParamLimits

0x75b3,	// (0x00058a6b) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x75b3,	// (0x00058a6b) bg_popup_fep_shadow_pane_cp2

0x7751,	// (0x00058c09) fep_vkb_top_pane_g4_ParamLimits

0x7751,	// (0x00058c09) fep_vkb_top_pane_g4

0x7797,	// (0x00058c4f) fep_vkb_side_pane_g2_ParamLimits

0x7797,	// (0x00058c4f) fep_vkb_side_pane_g2

0xbc15,	// (0x0005d0cd) list_setting_pane_t4_ParamLimits

0xbc15,	// (0x0005d0cd) list_setting_pane_t4

0xbc97,	// (0x0005d14f) list_setting_number_pane_t5_ParamLimits

0xbc97,	// (0x0005d14f) list_setting_number_pane_t5

0x4081,	// (0x00055539) list_double_heading_pane_cp2_ParamLimits

0x4081,	// (0x00055539) list_double_heading_pane_cp2

0x395c,	// (0x00054e14) list_double_heading_pane_g1_cp2_ParamLimits

0x395c,	// (0x00054e14) list_double_heading_pane_g1_cp2

0x39cf,	// (0x00054e87) list_double_heading_pane_g2_cp2_ParamLimits

0x39cf,	// (0x00054e87) list_double_heading_pane_g2_cp2

0x7aac,	// (0x00058f64) list_double_heading_pane_t1_cp2_ParamLimits

0x7aac,	// (0x00058f64) list_double_heading_pane_t1_cp2

0x7ac2,	// (0x00058f7a) list_double_heading_pane_t2_cp2_ParamLimits

0x7ac2,	// (0x00058f7a) list_double_heading_pane_t2_cp2

0xcef2,	// (0x0005e3aa) aid_value_unit2

0xf48e,	// (0x00060946) popup_preview_fixed_window

0x2f53,	// (0x0005440b) bg_popup_preview_window_pane_cp02

0x7ad4,	// (0x00058f8c) list_preview_fixed_pane

0x7b1a,	// (0x00058fd2) list_empty_pane_fp_ParamLimits

0x7b1a,	// (0x00058fd2) list_empty_pane_fp

0x7b1a,	// (0x00058fd2) list_single_cale_day_pane_fp_ParamLimits

0x7b1a,	// (0x00058fd2) list_single_cale_day_pane_fp

0x7b1a,	// (0x00058fd2) list_single_graphic_heading_pane_fp_ParamLimits

0x7b1a,	// (0x00058fd2) list_single_graphic_heading_pane_fp

0x7b1a,	// (0x00058fd2) list_single_graphic_pane_fp_ParamLimits

0x7b1a,	// (0x00058fd2) list_single_graphic_pane_fp

0x7b1a,	// (0x00058fd2) list_single_heading_pane_fp_ParamLimits

0x7b1a,	// (0x00058fd2) list_single_heading_pane_fp

0x7b1a,	// (0x00058fd2) list_single_pane_fp_ParamLimits

0x7b1a,	// (0x00058fd2) list_single_pane_fp

0x7b2f,	// (0x00058fe7) list_single_pane_fp_g1_ParamLimits

0x7b2f,	// (0x00058fe7) list_single_pane_fp_g1

0x395c,	// (0x00054e14) list_single_pane_fp_g2_ParamLimits

0x395c,	// (0x00054e14) list_single_pane_fp_g2

0x39cf,	// (0x00054e87) list_single_pane_fp_g3_ParamLimits

0x39cf,	// (0x00054e87) list_single_pane_fp_g3

0x7b3b,	// (0x00058ff3) list_single_pane_fp_g4_ParamLimits

0x7b3b,	// (0x00058ff3) list_single_pane_fp_g4

0x0003,

0xfb40,	// (0x00060ff8) list_single_pane_fp_g_ParamLimits

0xfb40,	// (0x00060ff8) list_single_pane_fp_g

0x1cf4,	// (0x000531ac) list_single_pane_fp_t1_ParamLimits

0x1cf4,	// (0x000531ac) list_single_pane_fp_t1

0x1d0b,	// (0x000531c3) list_single_graphic_pane_fp_g1_ParamLimits

0x1d0b,	// (0x000531c3) list_single_graphic_pane_fp_g1

0x7b2f,	// (0x00058fe7) list_single_graphic_pane_fp_g2_ParamLimits

0x7b2f,	// (0x00058fe7) list_single_graphic_pane_fp_g2

0x395c,	// (0x00054e14) list_single_graphic_pane_fp_g3_ParamLimits

0x395c,	// (0x00054e14) list_single_graphic_pane_fp_g3

0x39cf,	// (0x00054e87) list_single_graphic_pane_fp_g4_ParamLimits

0x39cf,	// (0x00054e87) list_single_graphic_pane_fp_g4

0x7b3b,	// (0x00058ff3) list_single_graphic_pane_fp_g5_ParamLimits

0x7b3b,	// (0x00058ff3) list_single_graphic_pane_fp_g5

0x0004,

0xfb49,	// (0x00061001) list_single_graphic_pane_fp_g_ParamLimits

0xfb49,	// (0x00061001) list_single_graphic_pane_fp_g

0x1d17,	// (0x000531cf) list_single_graphic_pane_fp_t1_ParamLimits

0x1d17,	// (0x000531cf) list_single_graphic_pane_fp_t1

0x1d0b,	// (0x000531c3) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x1d0b,	// (0x000531c3) list_single_graphic_heading_pane_fp_g1

0x7b2f,	// (0x00058fe7) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x7b2f,	// (0x00058fe7) list_single_graphic_heading_pane_fp_g2

0x395c,	// (0x00054e14) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x395c,	// (0x00054e14) list_single_graphic_heading_pane_fp_g3

0x39cf,	// (0x00054e87) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x39cf,	// (0x00054e87) list_single_graphic_heading_pane_fp_g4

0x7b3b,	// (0x00058ff3) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x7b3b,	// (0x00058ff3) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb49,	// (0x00061001) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb49,	// (0x00061001) list_single_graphic_heading_pane_fp_g

0x1d2d,	// (0x000531e5) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x1d2d,	// (0x000531e5) list_single_graphic_heading_pane_fp_t1

0x1d43,	// (0x000531fb) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x1d43,	// (0x000531fb) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb54,	// (0x0006100c) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb54,	// (0x0006100c) list_single_graphic_heading_pane_fp_t

0x1d55,	// (0x0005320d) list_single_cale_day_pane_fp_g1_ParamLimits

0x1d55,	// (0x0005320d) list_single_cale_day_pane_fp_g1

0x7b47,	// (0x00058fff) list_single_cale_day_pane_fp_g2_ParamLimits

0x7b47,	// (0x00058fff) list_single_cale_day_pane_fp_g2

0x363c,	// (0x00054af4) list_single_cale_day_pane_fp_g3_ParamLimits

0x363c,	// (0x00054af4) list_single_cale_day_pane_fp_g3

0x3664,	// (0x00054b1c) list_single_cale_day_pane_fp_g4_ParamLimits

0x3664,	// (0x00054b1c) list_single_cale_day_pane_fp_g4

0x3688,	// (0x00054b40) list_single_cale_day_pane_fp_g5_ParamLimits

0x3688,	// (0x00054b40) list_single_cale_day_pane_fp_g5

0x0004,

0xfb59,	// (0x00061011) list_single_cale_day_pane_fp_g_ParamLimits

0xfb59,	// (0x00061011) list_single_cale_day_pane_fp_g

0x1d8d,	// (0x00053245) list_single_cale_day_pane_fp_t1_ParamLimits

0x1d8d,	// (0x00053245) list_single_cale_day_pane_fp_t1

0x1db3,	// (0x0005326b) list_single_cale_day_pane_fp_t2_ParamLimits

0x1db3,	// (0x0005326b) list_single_cale_day_pane_fp_t2

0x1dcc,	// (0x00053284) list_single_cale_day_pane_fp_t3_ParamLimits

0x1dcc,	// (0x00053284) list_single_cale_day_pane_fp_t3

0x0002,

0xfb64,	// (0x0006101c) list_single_cale_day_pane_fp_t_ParamLimits

0xfb64,	// (0x0006101c) list_single_cale_day_pane_fp_t

0x7b2f,	// (0x00058fe7) list_empty_pane_fp_g1_ParamLimits

0x7b2f,	// (0x00058fe7) list_empty_pane_fp_g1

0x36ac,	// (0x00054b64) list_empty_pane_fp_t1

0x36ba,	// (0x00054b72) list_empty_pane_fp_t2

0x0001,

0xfb6b,	// (0x00061023) list_empty_pane_fp_t

0x7b2f,	// (0x00058fe7) list_single_heading_pane_fp_g1_ParamLimits

0x7b2f,	// (0x00058fe7) list_single_heading_pane_fp_g1

0x395c,	// (0x00054e14) list_single_heading_pane_fp_g2_ParamLimits

0x395c,	// (0x00054e14) list_single_heading_pane_fp_g2

0x39cf,	// (0x00054e87) list_single_heading_pane_fp_g3_ParamLimits

0x39cf,	// (0x00054e87) list_single_heading_pane_fp_g3

0x0002,

0xfb70,	// (0x00061028) list_single_heading_pane_fp_g_ParamLimits

0xfb70,	// (0x00061028) list_single_heading_pane_fp_g

0x36c8,	// (0x00054b80) list_single_heading_pane_fp_t1_ParamLimits

0x36c8,	// (0x00054b80) list_single_heading_pane_fp_t1

0x36da,	// (0x00054b92) list_single_heading_pane_fp_t2_ParamLimits

0x36da,	// (0x00054b92) list_single_heading_pane_fp_t2

0x0001,

0xfb77,	// (0x0006102f) list_single_heading_pane_fp_t_ParamLimits

0xfb77,	// (0x0006102f) list_single_heading_pane_fp_t

0x3bc7,	// (0x0005507f) aid_size_cell_fast

0x2ec3,	// (0x0005437b) soft_indicator_pane_cp1_t1

0x3c04,	// (0x000550bc) cell_app_pane_cp2_ParamLimits

0x3c04,	// (0x000550bc) cell_app_pane_cp2

0x1a64,	// (0x00052f1c) fep_hwr_candidate_drop_down_list_pane

0x1c3c,	// (0x000530f4) fep_hwr_candidate_pane_g3_ParamLimits

0x1c3c,	// (0x000530f4) fep_hwr_candidate_pane_g3

0xea2b,	// (0x0005fee3) fep_hwr_candidate_pane_g4_ParamLimits

0xea2b,	// (0x0005fee3) fep_hwr_candidate_pane_g4

0x0002,

0xfae6,	// (0x00060f9e) fep_hwr_candidate_pane_g_ParamLimits

0xfae6,	// (0x00060f9e) fep_hwr_candidate_pane_g

0x7638,	// (0x00058af0) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x7638,	// (0x00058af0) fep_vkb_candidate_drop_down_list_pane

0x7a49,	// (0x00058f01) fep_vkb_candidate_pane_g3

0x7a51,	// (0x00058f09) fep_vkb_candidate_pane_g4

0x0002,

0xfb13,	// (0x00060fcb) fep_vkb_candidate_pane_g

0x1ca7,	// (0x0005315f) cell_hwr_candidate_pane_g1_ParamLimits

0x1cb5,	// (0x0005316d) cell_hwr_candidate_pane_g3_ParamLimits

0x1cb5,	// (0x0005316d) cell_hwr_candidate_pane_g3

0x9343,	// (0x0005a7fb) cell_hwr_candidate_pane_g4_ParamLimits

0x9343,	// (0x0005a7fb) cell_hwr_candidate_pane_g4

0x0002,

0xfb32,	// (0x00060fea) cell_hwr_candidate_pane_g_ParamLimits

0xfb32,	// (0x00060fea) cell_hwr_candidate_pane_g

0x7a68,	// (0x00058f20) cell_vkb_candidate_pane_g3_ParamLimits

0x7a68,	// (0x00058f20) cell_vkb_candidate_pane_g3

0x7a83,	// (0x00058f3b) cell_vkb_candidate_pane_g4_ParamLimits

0x7a83,	// (0x00058f3b) cell_vkb_candidate_pane_g4

0x7b53,	// (0x0005900b) cell_app_pane_cp2_g1_ParamLimits

0x7b53,	// (0x0005900b) cell_app_pane_cp2_g1

0x7b71,	// (0x00059029) cell_app_pane_cp2_g2_ParamLimits

0x7b71,	// (0x00059029) cell_app_pane_cp2_g2

0x0001,

0xfb7c,	// (0x00061034) cell_app_pane_cp2_g_ParamLimits

0xfb7c,	// (0x00061034) cell_app_pane_cp2_g

0x7b7d,	// (0x00059035) cell_app_pane_cp2_t1_ParamLimits

0x7b7d,	// (0x00059035) cell_app_pane_cp2_t1

0x39c1,	// (0x00054e79) grid_highlight_pane_cp1_ParamLimits

0x39c1,	// (0x00054e79) grid_highlight_pane_cp1

0x1de5,	// (0x0005329d) cell_hwr_candidate_pane_cp1_ParamLimits

0x1de5,	// (0x0005329d) cell_hwr_candidate_pane_cp1

0x1ca7,	// (0x0005315f) fep_hwr_candidate_drop_down_list_pane_g1

0x1e04,	// (0x000532bc) fep_hwr_candidate_drop_down_list_pane_g2

0x1e11,	// (0x000532c9) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb81,	// (0x00061039) fep_hwr_candidate_drop_down_list_pane_g

0x1e1e,	// (0x000532d6) fep_hwr_candidate_drop_down_list_scroll_pane

0x1e27,	// (0x000532df) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x1e27,	// (0x000532df) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x1e34,	// (0x000532ec) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x1e34,	// (0x000532ec) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x1e41,	// (0x000532f9) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x1e41,	// (0x000532f9) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x1e4e,	// (0x00053306) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x1e4e,	// (0x00053306) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x1e69,	// (0x00053321) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x1e69,	// (0x00053321) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x1e84,	// (0x0005333c) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x1e84,	// (0x0005333c) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x1e9f,	// (0x00053357) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x1e9f,	// (0x00053357) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x1eba,	// (0x00053372) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x1eba,	// (0x00053372) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb88,	// (0x00061040) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb88,	// (0x00061040) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x7b8f,	// (0x00059047) cell_vkb_candidate_pane_cp1_ParamLimits

0x7b8f,	// (0x00059047) cell_vkb_candidate_pane_cp1

0x7751,	// (0x00058c09) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x7751,	// (0x00058c09) fep_vkb_candidate_drop_down_list_pane_g1

0x7baf,	// (0x00059067) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x7baf,	// (0x00059067) fep_vkb_candidate_drop_down_list_pane_g2

0x7bbc,	// (0x00059074) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x7bbc,	// (0x00059074) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfb99,	// (0x00061051) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfb99,	// (0x00061051) fep_vkb_candidate_drop_down_list_pane_g

0x7bc9,	// (0x00059081) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x7bc9,	// (0x00059081) fep_vkb_candidate_drop_down_list_scroll_pane

0x7bd6,	// (0x0005908e) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7bd6,	// (0x0005908e) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x7be3,	// (0x0005909b) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7be3,	// (0x0005909b) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x7bef,	// (0x000590a7) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7bef,	// (0x000590a7) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x7bfb,	// (0x000590b3) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7bfb,	// (0x000590b3) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x7c1c,	// (0x000590d4) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7c1c,	// (0x000590d4) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x7c3d,	// (0x000590f5) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7c3d,	// (0x000590f5) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x7c5e,	// (0x00059116) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7c5e,	// (0x00059116) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x7c7f,	// (0x00059137) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7c7f,	// (0x00059137) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfba0,	// (0x00061058) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfba0,	// (0x00061058) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xb5c8,	// (0x0005ca80) title_pane_g1_ParamLimits

0xb5db,	// (0x0005ca93) title_pane_g2_ParamLimits

0xf529,	// (0x000609e1) title_pane_g_ParamLimits

0x403a,	// (0x000554f2) aid_call2_pane

0x4042,	// (0x000554fa) aid_call_pane

0x404a,	// (0x00055502) popup_clock_analogue_window_g1

0x404a,	// (0x00055502) popup_clock_analogue_window_g2

0x06f0,	// (0x00051ba8) popup_clock_analogue_window_g3

0x06f9,	// (0x00051bb1) popup_clock_analogue_window_g4

0xdc06,	// (0x0005f0be) popup_clock_analogue_window_g5

0x0004,

0xf6d8,	// (0x00060b90) popup_clock_analogue_window_g

0x0701,	// (0x00051bb9) popup_clock_analogue_window_t1

0x070f,	// (0x00051bc7) clock_digital_number_pane_ParamLimits

0x070f,	// (0x00051bc7) clock_digital_number_pane

0x071b,	// (0x00051bd3) clock_digital_number_pane_cp02_ParamLimits

0x071b,	// (0x00051bd3) clock_digital_number_pane_cp02

0x0727,	// (0x00051bdf) clock_digital_number_pane_cp03_ParamLimits

0x0727,	// (0x00051bdf) clock_digital_number_pane_cp03

0x0733,	// (0x00051beb) clock_digital_number_pane_cp04_ParamLimits

0x0733,	// (0x00051beb) clock_digital_number_pane_cp04

0x073f,	// (0x00051bf7) clock_digital_separator_pane_ParamLimits

0x073f,	// (0x00051bf7) clock_digital_separator_pane

0x074b,	// (0x00051c03) popup_clock_digital_window_t1_ParamLimits

0x074b,	// (0x00051c03) popup_clock_digital_window_t1

0xdc06,	// (0x0005f0be) clock_digital_number_pane_g1

0xdc06,	// (0x0005f0be) clock_digital_number_pane_g2

0x0001,

0xf6e3,	// (0x00060b9b) clock_digital_number_pane_g

0xdc06,	// (0x0005f0be) clock_digital_separator_pane_g1

0xdc06,	// (0x0005f0be) clock_digital_separator_pane_g2

0x0001,

0xf6e3,	// (0x00060b9b) clock_digital_separator_pane_g

0xd27c,	// (0x0005e734) aid_fill_nsta_ParamLimits

0xd3b2,	// (0x0005e86a) indicator_nsta_pane_ParamLimits

0x4c79,	// (0x00056131) popup_clock_analogue_window

0x4c79,	// (0x00056131) popup_clock_digital_window

0xdc6c,	// (0x0005f124) grid_indicator_nsta_pane_ParamLimits

0x6ed7,	// (0x0005838f) clock_nsta_pane_t2

0x0001,

0xfa66,	// (0x00060f1e) clock_nsta_pane_t

0x06b4,	// (0x00051b6c) aid_size_max_handle

0x06be,	// (0x00051b76) aid_size_min_handle

0x4654,	// (0x00055b0c) editor_scroll_pane

0x7c9a,	// (0x00059152) ex_editor_pane

0x3b35,	// (0x00054fed) scroll_pane_cp13

0x3948,	// (0x00054e00) scroll_pane_cp14

0x4079,	// (0x00055531) scroll_pane_cp36

0xd044,	// (0x0005e4fc) list_single_graphic_hl_pane_cp2_ParamLimits

0xd044,	// (0x0005e4fc) list_single_graphic_hl_pane_cp2

0xda3a,	// (0x0005eef2) list_single_graphic_hl_pane_ParamLimits

0xda3a,	// (0x0005eef2) list_single_graphic_hl_pane

0x36f0,	// (0x00054ba8) aid_size_min_hl_cp1

0x7ca2,	// (0x0005915a) list_highlight_pane_cp34_ParamLimits

0x7ca2,	// (0x0005915a) list_highlight_pane_cp34

0x7cb3,	// (0x0005916b) list_single_graphic_hl_pane_g1_ParamLimits

0x7cb3,	// (0x0005916b) list_single_graphic_hl_pane_g1

0xc7b3,	// (0x0005dc6b) list_single_graphic_hl_pane_g2_ParamLimits

0xc7b3,	// (0x0005dc6b) list_single_graphic_hl_pane_g2

0xc7b3,	// (0x0005dc6b) list_single_graphic_hl_pane_g3_ParamLimits

0xc7b3,	// (0x0005dc6b) list_single_graphic_hl_pane_g3

0x4535,	// (0x000559ed) list_single_graphic_hl_pane_g4_ParamLimits

0x4535,	// (0x000559ed) list_single_graphic_hl_pane_g4

0xdb88,	// (0x0005f040) list_single_graphic_hl_pane_g5_ParamLimits

0xdb88,	// (0x0005f040) list_single_graphic_hl_pane_g5

0x0004,

0xfbb1,	// (0x00061069) list_single_graphic_hl_pane_g_ParamLimits

0xfbb1,	// (0x00061069) list_single_graphic_hl_pane_g

0xc7bf,	// (0x0005dc77) list_single_graphic_hl_pane_t1_ParamLimits

0xc7bf,	// (0x0005dc77) list_single_graphic_hl_pane_t1

0x7cc0,	// (0x00059178) aid_size_min_hl_cp2

0x7cc9,	// (0x00059181) list_highlight_pane_cp34_cp2_ParamLimits

0x7cc9,	// (0x00059181) list_highlight_pane_cp34_cp2

0x7cb3,	// (0x0005916b) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x7cb3,	// (0x0005916b) list_single_graphic_hl_pane_g1_cp2

0x7cd6,	// (0x0005918e) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x7cd6,	// (0x0005918e) list_single_graphic_hl_pane_g2_cp2

0x7ce2,	// (0x0005919a) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x7ce2,	// (0x0005919a) list_single_graphic_hl_pane_g3_cp2

0x7cf0,	// (0x000591a8) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x7cf0,	// (0x000591a8) list_single_graphic_hl_pane_g4_cp2

0x7cfc,	// (0x000591b4) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x7cfc,	// (0x000591b4) list_single_graphic_hl_pane_g5_cp2

0xbe99,	// (0x0005d351) control_pane_g4_ParamLimits

0xbe99,	// (0x0005d351) control_pane_g4

0x4978,	// (0x00055e30) bg_popup_sub_pane_cp10_ParamLimits

0x74dd,	// (0x00058995) list_choice_list_pane_ParamLimits

0x74ec,	// (0x000589a4) scroll_pane_cp23

0x2f53,	// (0x0005440b) bg_popup_preview_window_pane_cp02_ParamLimits

0x7ad4,	// (0x00058f8c) list_preview_fixed_pane_ParamLimits

0x7aea,	// (0x00058fa2) list_preview_fixed_pane_cp_ParamLimits

0x7aea,	// (0x00058fa2) list_preview_fixed_pane_cp

0x7af6,	// (0x00058fae) popup_preview_fixed_window_g1_ParamLimits

0x7af6,	// (0x00058fae) popup_preview_fixed_window_g1

0x7b02,	// (0x00058fba) popup_preview_fixed_window_g2_ParamLimits

0x7b02,	// (0x00058fba) popup_preview_fixed_window_g2

0x0002,

0xfb39,	// (0x00060ff1) popup_preview_fixed_window_g_ParamLimits

0xfb39,	// (0x00060ff1) popup_preview_fixed_window_g

0x0628,	// (0x00051ae0) aid_navi_side_left_pane_ParamLimits

0x063d,	// (0x00051af5) aid_navi_side_right_pane_ParamLimits

0x0655,	// (0x00051b0d) navi_icon_pane_stacon_ParamLimits

0x0669,	// (0x00051b21) navi_navi_pane_stacon_ParamLimits

0x0655,	// (0x00051b0d) navi_text_pane_stacon_ParamLimits

0xf311,	// (0x000607c9) main_text_info_pane

0x7d26,	// (0x000591de) listscroll_text_info_pane

0x7d2e,	// (0x000591e6) list_text_info_pane_ParamLimits

0x7d2e,	// (0x000591e6) list_text_info_pane

0x7d3d,	// (0x000591f5) scroll_pane_cp24_ParamLimits

0x7d3d,	// (0x000591f5) scroll_pane_cp24

0xdf90,	// (0x0005f448) list_text_info_pane_t1_ParamLimits

0xdf90,	// (0x0005f448) list_text_info_pane_t1

0xbfda,	// (0x0005d492) popup_fast_swap2_window_ParamLimits

0xbfda,	// (0x0005d492) popup_fast_swap2_window

0x7d8c,	// (0x00059244) aid_size_cell_fast2

0xdbfc,	// (0x0005f0b4) bg_popup_window_pane_cp17

0x5302,	// (0x000567ba) heading_pane_cp2

0x530a,	// (0x000567c2) listscroll_fast2_pane

0x7d96,	// (0x0005924e) grid_fast2_pane

0x7da0,	// (0x00059258) listscroll_fast2_pane_g1

0x7da8,	// (0x00059260) listscroll_fast2_pane_g2

0x0001,

0xfbbc,	// (0x00061074) listscroll_fast2_pane_g

0x3b35,	// (0x00054fed) scroll_pane_cp26

0x7db2,	// (0x0005926a) cell_fast2_pane_ParamLimits

0x7db2,	// (0x0005926a) cell_fast2_pane

0x7dc7,	// (0x0005927f) cell_fast2_pane_g1

0x7dd0,	// (0x00059288) cell_fast2_pane_g2

0x7dd9,	// (0x00059291) cell_fast2_pane_g3

0x0002,

0xfbc1,	// (0x00061079) cell_fast2_pane_g

0x32b3,	// (0x0005476b) grid_highlight_pane_cp9

0x0ba9,	// (0x00052061) main_eswt_pane_ParamLimits

0x0ba9,	// (0x00052061) main_eswt_pane

0x7d52,	// (0x0005920a) list_single_text_info_pane

0x7de1,	// (0x00059299) eswt_ctrl_button_pane

0x7de1,	// (0x00059299) eswt_ctrl_canvas_pane

0x7de9,	// (0x000592a1) eswt_ctrl_combo_pane

0x7de1,	// (0x00059299) eswt_ctrl_default_pane

0x7de1,	// (0x00059299) eswt_ctrl_label_pane

0x7df1,	// (0x000592a9) eswt_ctrl_wait_pane

0x7df9,	// (0x000592b1) eswt_shell_pane

0xdbfc,	// (0x0005f0b4) listscroll_eswt_app_pane

0x7e19,	// (0x000592d1) popup_eswt_tasktip_window_ParamLimits

0x7e19,	// (0x000592d1) popup_eswt_tasktip_window

0x4f16,	// (0x000563ce) bg_popup_window_pane_cp18

0x7e2a,	// (0x000592e2) eswt_control_pane_g1_ParamLimits

0x7e2a,	// (0x000592e2) eswt_control_pane_g1

0x7e37,	// (0x000592ef) eswt_control_pane_g2_ParamLimits

0x7e37,	// (0x000592ef) eswt_control_pane_g2

0x7e44,	// (0x000592fc) eswt_control_pane_g3_ParamLimits

0x7e44,	// (0x000592fc) eswt_control_pane_g3

0x7e51,	// (0x00059309) eswt_control_pane_g4_ParamLimits

0x7e51,	// (0x00059309) eswt_control_pane_g4

0x0003,

0xfbc8,	// (0x00061080) eswt_control_pane_g_ParamLimits

0xfbc8,	// (0x00061080) eswt_control_pane_g

0x39c1,	// (0x00054e79) bg_button_pane_ParamLimits

0x39c1,	// (0x00054e79) bg_button_pane

0x32c8,	// (0x00054780) common_borders_pane_copy2_ParamLimits

0x32c8,	// (0x00054780) common_borders_pane_copy2

0x7e5e,	// (0x00059316) control_button_pane_g1_ParamLimits

0x7e5e,	// (0x00059316) control_button_pane_g1

0x7e6a,	// (0x00059322) control_button_pane_g2_ParamLimits

0x7e6a,	// (0x00059322) control_button_pane_g2

0x7e76,	// (0x0005932e) control_button_pane_g3_ParamLimits

0x7e76,	// (0x0005932e) control_button_pane_g3

0x0002,

0xfbd1,	// (0x00061089) control_button_pane_g_ParamLimits

0xfbd1,	// (0x00061089) control_button_pane_g

0x7e8a,	// (0x00059342) control_button_pane_t1

0x7e98,	// (0x00059350) control_button_pane_t2

0x0001,

0xfbd8,	// (0x00061090) control_button_pane_t

0x4ea2,	// (0x0005635a) bg_button_pane_g1

0x4eb2,	// (0x0005636a) bg_button_pane_g2

0x4eaa,	// (0x00056362) bg_button_pane_g3

0x4ec2,	// (0x0005637a) bg_button_pane_g4

0x4eba,	// (0x00056372) bg_button_pane_g5

0x4eca,	// (0x00056382) bg_button_pane_g6

0x4ed2,	// (0x0005638a) bg_button_pane_g7

0x4ee2,	// (0x0005639a) bg_button_pane_g8

0x4eda,	// (0x00056392) bg_button_pane_g9

0x0008,

0xf841,	// (0x00060cf9) bg_button_pane_g

0x7498,	// (0x00058950) common_borders_pane_ParamLimits

0x7498,	// (0x00058950) common_borders_pane

0x7e2a,	// (0x000592e2) eswt_control_pane_g1_copy1_ParamLimits

0x7e2a,	// (0x000592e2) eswt_control_pane_g1_copy1

0x7e37,	// (0x000592ef) eswt_control_pane_g2_copy1_ParamLimits

0x7e37,	// (0x000592ef) eswt_control_pane_g2_copy1

0x7e44,	// (0x000592fc) eswt_control_pane_g3_copy1_ParamLimits

0x7e44,	// (0x000592fc) eswt_control_pane_g3_copy1

0x7e51,	// (0x00059309) eswt_control_pane_g4_copy1_ParamLimits

0x7e51,	// (0x00059309) eswt_control_pane_g4_copy1

0x74d3,	// (0x0005898b) bg_eswt_ctrl_canvas_pane_g1

0x7498,	// (0x00058950) common_borders_pane_cp2_ParamLimits

0x7498,	// (0x00058950) common_borders_pane_cp2

0x7498,	// (0x00058950) common_borders_pane_cp3_ParamLimits

0x7498,	// (0x00058950) common_borders_pane_cp3

0x7ea6,	// (0x0005935e) separator_horizontal_pane

0x7eae,	// (0x00059366) separator_vertical_pane

0x7e2a,	// (0x000592e2) eswt_control_pane_g1_copy2_ParamLimits

0x7e2a,	// (0x000592e2) eswt_control_pane_g1_copy2

0x7e37,	// (0x000592ef) eswt_control_pane_g2_copy2_ParamLimits

0x7e37,	// (0x000592ef) eswt_control_pane_g2_copy2

0x7e44,	// (0x000592fc) eswt_control_pane_g3_copy2_ParamLimits

0x7e44,	// (0x000592fc) eswt_control_pane_g3_copy2

0x7e51,	// (0x00059309) eswt_control_pane_g4_copy2_ParamLimits

0x7e51,	// (0x00059309) eswt_control_pane_g4_copy2

0xdbfc,	// (0x0005f0b4) common_borders_pane_cp4

0x7eb7,	// (0x0005936f) separator_horizontal_pane_g1

0x7ec0,	// (0x00059378) separator_horizontal_pane_g2

0x7ec9,	// (0x00059381) separator_horizontal_pane_g3

0x0002,

0xfbdd,	// (0x00061095) separator_horizontal_pane_g

0x7e2a,	// (0x000592e2) eswt_control_pane_g1_copy3_ParamLimits

0x7e2a,	// (0x000592e2) eswt_control_pane_g1_copy3

0x7e37,	// (0x000592ef) eswt_control_pane_g2_copy3_ParamLimits

0x7e37,	// (0x000592ef) eswt_control_pane_g2_copy3

0x7e44,	// (0x000592fc) eswt_control_pane_g3_copy3_ParamLimits

0x7e44,	// (0x000592fc) eswt_control_pane_g3_copy3

0x7e51,	// (0x00059309) eswt_control_pane_g4_copy3_ParamLimits

0x7e51,	// (0x00059309) eswt_control_pane_g4_copy3

0xdbfc,	// (0x0005f0b4) common_borders_pane_cp5

0x7ed2,	// (0x0005938a) separator_vertical_pane_g1

0x7edb,	// (0x00059393) separator_vertical_pane_g2

0x7ee4,	// (0x0005939c) separator_vertical_pane_g3

0x0002,

0xfbe4,	// (0x0006109c) separator_vertical_pane_g

0x7e2a,	// (0x000592e2) eswt_control_pane_g1_copy4_ParamLimits

0x7e2a,	// (0x000592e2) eswt_control_pane_g1_copy4

0x7e37,	// (0x000592ef) eswt_control_pane_g2_copy4_ParamLimits

0x7e37,	// (0x000592ef) eswt_control_pane_g2_copy4

0x7e44,	// (0x000592fc) eswt_control_pane_g3_copy4_ParamLimits

0x7e44,	// (0x000592fc) eswt_control_pane_g3_copy4

0x7e51,	// (0x00059309) eswt_control_pane_g4_copy4_ParamLimits

0x7e51,	// (0x00059309) eswt_control_pane_g4_copy4

0x7eed,	// (0x000593a5) eswt_ctrl_combo_button_pane

0x7ef5,	// (0x000593ad) eswt_ctrl_input_pane

0x7efd,	// (0x000593b5) popup_choice_list_window_cp70

0x7f05,	// (0x000593bd) eswt_ctrl_input_pane_t1

0xdbfc,	// (0x0005f0b4) input_focus_pane_cp70

0x7498,	// (0x00058950) bg_button_pane_cp70_ParamLimits

0x7498,	// (0x00058950) bg_button_pane_cp70

0x7f13,	// (0x000593cb) eswt_ctrl_combo_button_pane_g1

0x7f1b,	// (0x000593d3) wait_bar_pane_cp70

0x4f16,	// (0x000563ce) bg_popup_window_pane_cp70_ParamLimits

0x4f16,	// (0x000563ce) bg_popup_window_pane_cp70

0x7f23,	// (0x000593db) popup_eswt_tasktip_window_t1

0x7f39,	// (0x000593f1) wait_bar_pane_cp71_ParamLimits

0x7f39,	// (0x000593f1) wait_bar_pane_cp71

0x7f45,	// (0x000593fd) grid_eswt_app_pane

0x3e53,	// (0x0005530b) scroll_pane_cp70

0xdfab,	// (0x0005f463) cell_eswt_app_pane_ParamLimits

0xdfab,	// (0x0005f463) cell_eswt_app_pane

0xdfd5,	// (0x0005f48d) cell_eswt_app_pane_g1_ParamLimits

0xdfd5,	// (0x0005f48d) cell_eswt_app_pane_g1

0xe004,	// (0x0005f4bc) cell_eswt_app_pane_g2_ParamLimits

0xe004,	// (0x0005f4bc) cell_eswt_app_pane_g2

0x0001,

0xfbeb,	// (0x000610a3) cell_eswt_app_pane_g_ParamLimits

0xfbeb,	// (0x000610a3) cell_eswt_app_pane_g

0xe02d,	// (0x0005f4e5) cell_eswt_app_pane_t1_ParamLimits

0xe02d,	// (0x0005f4e5) cell_eswt_app_pane_t1

0x8008,	// (0x000594c0) grid_highlight_pane_cp70_ParamLimits

0x8008,	// (0x000594c0) grid_highlight_pane_cp70

0x4535,	// (0x000559ed) set_content_pane_g1

0xd239,	// (0x0005e6f1) status_small_volume_pane

0x1ed5,	// (0x0005338d) status_small_volume_pane_g1

0x1edd,	// (0x00053395) volume_small2_pane

0x1ee6,	// (0x0005339e) volume_small2_pane_g1

0x1eef,	// (0x000533a7) volume_small2_pane_g2

0x1ef8,	// (0x000533b0) volume_small2_pane_g3

0x1f01,	// (0x000533b9) volume_small2_pane_g4

0x1f0a,	// (0x000533c2) volume_small2_pane_g5

0x1f13,	// (0x000533cb) volume_small2_pane_g6

0x1f1c,	// (0x000533d4) volume_small2_pane_g7

0x1f25,	// (0x000533dd) volume_small2_pane_g8

0x1f2e,	// (0x000533e6) volume_small2_pane_g9

0x1f37,	// (0x000533ef) volume_small2_pane_g10

0x0009,

0xfbf0,	// (0x000610a8) volume_small2_pane_g

0x7899,	// (0x00058d51) fep_vkb_top_text_pane_g1_ParamLimits

0xdf38,	// (0x0005f3f0) fep_vkb_top_text_pane_t1_ParamLimits

0x7b0e,	// (0x00058fc6) popup_preview_fixed_window_g3_ParamLimits

0x7b0e,	// (0x00058fc6) popup_preview_fixed_window_g3

0xc603,	// (0x0005dabb) popup_toolbar_trans_pane

0xd8ae,	// (0x0005ed66) aid_height_set_list_ParamLimits

0x628b,	// (0x00057743) aid_size_parent_ParamLimits

0x4978,	// (0x00055e30) list_highlight_pane_cp2_ParamLimits

0x4535,	// (0x000559ed) set_content_pane_g1_ParamLimits

0xc723,	// (0x0005dbdb) list_single_image_pane_ParamLimits

0xc723,	// (0x0005dbdb) list_single_image_pane

0xe05f,	// (0x0005f517) aid_size_cell_image_ParamLimits

0xe05f,	// (0x0005f517) aid_size_cell_image

0xe06c,	// (0x0005f524) grid_single_image_pane_ParamLimits

0xe06c,	// (0x0005f524) grid_single_image_pane

0x6c75,	// (0x0005812d) list_single_image_pane_g1_ParamLimits

0x6c75,	// (0x0005812d) list_single_image_pane_g1

0x802d,	// (0x000594e5) list_single_image_pane_g2_ParamLimits

0x802d,	// (0x000594e5) list_single_image_pane_g2

0x0001,

0xfc05,	// (0x000610bd) list_single_image_pane_g_ParamLimits

0xfc05,	// (0x000610bd) list_single_image_pane_g

0x8041,	// (0x000594f9) list_single_image_pane_t1_ParamLimits

0x8041,	// (0x000594f9) list_single_image_pane_t1

0xe078,	// (0x0005f530) cell_image_list_pane_ParamLimits

0xe078,	// (0x0005f530) cell_image_list_pane

0xe08c,	// (0x0005f544) cell_image_list_pane_g1

0xe095,	// (0x0005f54d) cell_image_list_pane_g2

0x0001,

0xfc0a,	// (0x000610c2) cell_image_list_pane_g

0x807d,	// (0x00059535) aid_size_cell_tb_trans_pane

0x39c1,	// (0x00054e79) bg_tb_trans_pane

0x808f,	// (0x00059547) grid_tb_trans_pane

0x4ea2,	// (0x0005635a) bg_tb_trans_pane_g1

0x4eb2,	// (0x0005636a) bg_tb_trans_pane_g2

0x4eaa,	// (0x00056362) bg_tb_trans_pane_g3

0x4ec2,	// (0x0005637a) bg_tb_trans_pane_g4

0x4eba,	// (0x00056372) bg_tb_trans_pane_g5

0x4ee2,	// (0x0005639a) bg_tb_trans_pane_g6

0x4eda,	// (0x00056392) bg_tb_trans_pane_g7

0x4eca,	// (0x00056382) bg_tb_trans_pane_g8

0x4ed2,	// (0x0005638a) bg_tb_trans_pane_g9

0x0008,

0xfc0f,	// (0x000610c7) bg_tb_trans_pane_g

0x80a3,	// (0x0005955b) cell_toolbar_trans_pane_ParamLimits

0x80a3,	// (0x0005955b) cell_toolbar_trans_pane

0x74d3,	// (0x0005898b) cell_toolbar_trans_pane_g1

0xdd23,	// (0x0005f1db) list_form2_midp_pane_t1

0xdd31,	// (0x0005f1e9) list_form2_midp_pane_t2

0x0001,

0xfaac,	// (0x00060f64) list_form2_midp_pane_t

0x70c4,	// (0x0005857c) scroll_pane_cp51_ParamLimits

0x7280,	// (0x00058738) form2_midp_wait_pane_g1

0x7289,	// (0x00058741) form2_midp_wait_pane_g2

0x7292,	// (0x0005874a) form2_midp_wait_pane_g3

0x0002,

0xfac1,	// (0x00060f79) form2_midp_wait_pane_g

0x2cca,	// (0x00054182) list_highlight_pane_cp21_ParamLimits

0x72de,	// (0x00058796) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x72ed,	// (0x000587a5) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x6443,	// (0x000578fb) list_single_2graphic_im_pane_ParamLimits

0x6443,	// (0x000578fb) list_single_2graphic_im_pane

0x80c9,	// (0x00059581) list_single_2graphic_im_pane_g1_ParamLimits

0x80c9,	// (0x00059581) list_single_2graphic_im_pane_g1

0x80da,	// (0x00059592) list_single_2graphic_im_pane_g2_ParamLimits

0x80da,	// (0x00059592) list_single_2graphic_im_pane_g2

0x80e6,	// (0x0005959e) list_single_2graphic_im_pane_g3_ParamLimits

0x80e6,	// (0x0005959e) list_single_2graphic_im_pane_g3

0x0003,

0xfc22,	// (0x000610da) list_single_2graphic_im_pane_g_ParamLimits

0xfc22,	// (0x000610da) list_single_2graphic_im_pane_g

0x8106,	// (0x000595be) list_single_2graphic_im_pane_t1_ParamLimits

0x8106,	// (0x000595be) list_single_2graphic_im_pane_t1

0x7b1a,	// (0x00058fd2) list_single_graphic_2heading_pane_fp_ParamLimits

0x7b1a,	// (0x00058fd2) list_single_graphic_2heading_pane_fp

0x1d0b,	// (0x000531c3) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x1d0b,	// (0x000531c3) list_single_graphic_2heading_pane_fp_g1

0x7b2f,	// (0x00058fe7) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x7b2f,	// (0x00058fe7) list_single_graphic_2heading_pane_fp_g2

0x395c,	// (0x00054e14) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x395c,	// (0x00054e14) list_single_graphic_2heading_pane_fp_g3

0x39cf,	// (0x00054e87) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x39cf,	// (0x00054e87) list_single_graphic_2heading_pane_fp_g4

0x7b3b,	// (0x00058ff3) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x7b3b,	// (0x00058ff3) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb49,	// (0x00061001) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb49,	// (0x00061001) list_single_graphic_2heading_pane_fp_g

0x372f,	// (0x00054be7) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x372f,	// (0x00054be7) list_single_graphic_2heading_pane_fp_t1

0x1d43,	// (0x000531fb) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x1d43,	// (0x000531fb) list_single_graphic_2heading_pane_fp_t2

0x3745,	// (0x00054bfd) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x3745,	// (0x00054bfd) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc2b,	// (0x000610e3) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc2b,	// (0x000610e3) list_single_graphic_2heading_pane_fp_t

0x755f,	// (0x00058a17) fep_hwr_write_pane_g5_ParamLimits

0x755f,	// (0x00058a17) fep_hwr_write_pane_g5

0x756b,	// (0x00058a23) fep_hwr_write_pane_g6_ParamLimits

0x756b,	// (0x00058a23) fep_hwr_write_pane_g6

0x7df9,	// (0x000592b1) eswt_shell_pane_ParamLimits

0x4f16,	// (0x000563ce) bg_popup_window_pane_cp18_ParamLimits

0x61d3,	// (0x0005768b) heading_pane_cp70

0x7f23,	// (0x000593db) popup_eswt_tasktip_window_t1_ParamLimits

0xd2d7,	// (0x0005e78f) aid_touch_tab_arrow_left

0xd2ed,	// (0x0005e7a5) aid_touch_tab_arrow_right

0xb5f3,	// (0x0005caab) title_pane_g3_ParamLimits

0xb5f3,	// (0x0005caab) title_pane_g3

0x3980,	// (0x00054e38) set_value_pane_g1

0xc603,	// (0x0005dabb) popup_toolbar_trans_pane_ParamLimits

0x807d,	// (0x00059535) aid_size_cell_tb_trans_pane_ParamLimits

0x39c1,	// (0x00054e79) bg_tb_trans_pane_ParamLimits

0x808f,	// (0x00059547) grid_tb_trans_pane_ParamLimits

0x2f53,	// (0x0005440b) cont_note_pane_ParamLimits

0x2f53,	// (0x0005440b) cont_note_pane

0x32c8,	// (0x00054780) cont_snote2_single_text_pane_ParamLimits

0x32c8,	// (0x00054780) cont_snote2_single_text_pane

0x32c8,	// (0x00054780) cont_snote2_single_graphic_pane_ParamLimits

0x32c8,	// (0x00054780) cont_snote2_single_graphic_pane

0x5531,	// (0x000569e9) cont_note_wait_pane_ParamLimits

0x5531,	// (0x000569e9) cont_note_wait_pane

0x5531,	// (0x000569e9) cont_note_image_pane_ParamLimits

0x5531,	// (0x000569e9) cont_note_image_pane

0x8137,	// (0x000595ef) popup_note2_window_g1_ParamLimits

0x8137,	// (0x000595ef) popup_note2_window_g1

0x8168,	// (0x00059620) popup_note2_window_t1_ParamLimits

0x8168,	// (0x00059620) popup_note2_window_t1

0x81ad,	// (0x00059665) popup_note2_window_t2_ParamLimits

0x81ad,	// (0x00059665) popup_note2_window_t2

0x81f2,	// (0x000596aa) popup_note2_window_t3_ParamLimits

0x81f2,	// (0x000596aa) popup_note2_window_t3

0x8237,	// (0x000596ef) popup_note2_window_t4_ParamLimits

0x8237,	// (0x000596ef) popup_note2_window_t4

0x2fd7,	// (0x0005448f) popup_note2_window_t5_ParamLimits

0x2fd7,	// (0x0005448f) popup_note2_window_t5

0x0004,

0xfc37,	// (0x000610ef) popup_note2_window_t_ParamLimits

0xfc37,	// (0x000610ef) popup_note2_window_t

0x8266,	// (0x0005971e) popup_note2_image_window_g1_ParamLimits

0x8266,	// (0x0005971e) popup_note2_image_window_g1

0x8272,	// (0x0005972a) popup_note2_image_window_g2_ParamLimits

0x8272,	// (0x0005972a) popup_note2_image_window_g2

0x0001,

0xfc42,	// (0x000610fa) popup_note2_image_window_g_ParamLimits

0xfc42,	// (0x000610fa) popup_note2_image_window_g

0x8284,	// (0x0005973c) popup_note2_image_window_t1_ParamLimits

0x8284,	// (0x0005973c) popup_note2_image_window_t1

0x829c,	// (0x00059754) popup_note2_image_window_t2_ParamLimits

0x829c,	// (0x00059754) popup_note2_image_window_t2

0x82b4,	// (0x0005976c) popup_note2_image_window_t3_ParamLimits

0x82b4,	// (0x0005976c) popup_note2_image_window_t3

0x0002,

0xfc47,	// (0x000610ff) popup_note2_image_window_t_ParamLimits

0xfc47,	// (0x000610ff) popup_note2_image_window_t

0x553f,	// (0x000569f7) popup_note2_wait_window_g1_ParamLimits

0x553f,	// (0x000569f7) popup_note2_wait_window_g1

0x82d0,	// (0x00059788) popup_note2_wait_window_g2_ParamLimits

0x82d0,	// (0x00059788) popup_note2_wait_window_g2

0x5557,	// (0x00056a0f) popup_note2_wait_window_g3_ParamLimits

0x5557,	// (0x00056a0f) popup_note2_wait_window_g3

0x0002,

0xfc4e,	// (0x00061106) popup_note2_wait_window_g_ParamLimits

0xfc4e,	// (0x00061106) popup_note2_wait_window_g

0x82dc,	// (0x00059794) popup_note2_wait_window_t1_ParamLimits

0x82dc,	// (0x00059794) popup_note2_wait_window_t1

0x82fa,	// (0x000597b2) popup_note2_wait_window_t2_ParamLimits

0x82fa,	// (0x000597b2) popup_note2_wait_window_t2

0x8318,	// (0x000597d0) popup_note2_wait_window_t3_ParamLimits

0x8318,	// (0x000597d0) popup_note2_wait_window_t3

0x832a,	// (0x000597e2) popup_note2_wait_window_t4_ParamLimits

0x832a,	// (0x000597e2) popup_note2_wait_window_t4

0x0003,

0xfc55,	// (0x0006110d) popup_note2_wait_window_t_ParamLimits

0xfc55,	// (0x0006110d) popup_note2_wait_window_t

0x833c,	// (0x000597f4) wait_bar2_pane_ParamLimits

0x833c,	// (0x000597f4) wait_bar2_pane

0x8354,	// (0x0005980c) popup_snote2_single_text_window_g1_ParamLimits

0x8354,	// (0x0005980c) popup_snote2_single_text_window_g1

0x837c,	// (0x00059834) popup_snote2_single_text_window_t1_ParamLimits

0x837c,	// (0x00059834) popup_snote2_single_text_window_t1

0x83c8,	// (0x00059880) popup_snote2_single_text_window_t2_ParamLimits

0x83c8,	// (0x00059880) popup_snote2_single_text_window_t2

0x8414,	// (0x000598cc) popup_snote2_single_text_window_t3_ParamLimits

0x8414,	// (0x000598cc) popup_snote2_single_text_window_t3

0x8455,	// (0x0005990d) popup_snote2_single_text_window_t4_ParamLimits

0x8455,	// (0x0005990d) popup_snote2_single_text_window_t4

0x848b,	// (0x00059943) popup_snote2_single_text_window_t5_ParamLimits

0x848b,	// (0x00059943) popup_snote2_single_text_window_t5

0x0004,

0xfc5e,	// (0x00061116) popup_snote2_single_text_window_t_ParamLimits

0xfc5e,	// (0x00061116) popup_snote2_single_text_window_t

0x84b6,	// (0x0005996e) popup_snote2_single_graphic_window_g1_ParamLimits

0x84b6,	// (0x0005996e) popup_snote2_single_graphic_window_g1

0x84de,	// (0x00059996) popup_snote2_single_graphic_window_g2_ParamLimits

0x84de,	// (0x00059996) popup_snote2_single_graphic_window_g2

0x0001,

0xfc69,	// (0x00061121) popup_snote2_single_graphic_window_g_ParamLimits

0xfc69,	// (0x00061121) popup_snote2_single_graphic_window_g

0x8506,	// (0x000599be) popup_snote2_single_graphic_window_t1_ParamLimits

0x8506,	// (0x000599be) popup_snote2_single_graphic_window_t1

0x8552,	// (0x00059a0a) popup_snote2_single_graphic_window_t2_ParamLimits

0x8552,	// (0x00059a0a) popup_snote2_single_graphic_window_t2

0x8414,	// (0x000598cc) popup_snote2_single_graphic_window_t3_ParamLimits

0x8414,	// (0x000598cc) popup_snote2_single_graphic_window_t3

0x8455,	// (0x0005990d) popup_snote2_single_graphic_window_t4_ParamLimits

0x8455,	// (0x0005990d) popup_snote2_single_graphic_window_t4

0x848b,	// (0x00059943) popup_snote2_single_graphic_window_t5_ParamLimits

0x848b,	// (0x00059943) popup_snote2_single_graphic_window_t5

0x0004,

0xfc6e,	// (0x00061126) popup_snote2_single_graphic_window_t_ParamLimits

0xfc6e,	// (0x00061126) popup_snote2_single_graphic_window_t

0x6f85,	// (0x0005843d) clock_nsta_pane_cp2_t1

0x6f85,	// (0x0005843d) clock_nsta_pane_cp2_t2

0x0001,

0xfa82,	// (0x00060f3a) clock_nsta_pane_cp2_t

0x03a6,	// (0x0005185e) form_field_data_wide_pane_g1_ParamLimits

0x395c,	// (0x00054e14) form_field_data_wide_pane_g2_ParamLimits

0x395c,	// (0x00054e14) form_field_data_wide_pane_g2

0x39cf,	// (0x00054e87) form_field_data_wide_pane_g3_ParamLimits

0x39cf,	// (0x00054e87) form_field_data_wide_pane_g3

0x0002,

0xf65b,	// (0x00060b13) form_field_data_wide_pane_g_ParamLimits

0xf65b,	// (0x00060b13) form_field_data_wide_pane_g

0xdc56,	// (0x0005f10e) grid_touch_3_pane_ParamLimits

0xdc56,	// (0x0005f10e) grid_touch_3_pane

0xe09e,	// (0x0005f556) cell_touch_3_pane_ParamLimits

0xe09e,	// (0x0005f556) cell_touch_3_pane

0x74d3,	// (0x0005898b) cell_touch_3_pane_g1

0x74d3,	// (0x0005898b) cell_touch_3_pane_g2

0x0001,

0xfb07,	// (0x00060fbf) cell_touch_3_pane_g

0x302f,	// (0x000544e7) cont_query_data_pane

0x3037,	// (0x000544ef) cont_query_data_pane_cp1

0x85cc,	// (0x00059a84) button_value_adjust_pane_cp7

0x85d4,	// (0x00059a8c) query_popup_pane_cp3

0x413a,	// (0x000555f2) bg_popup_sub_pane_cp22_ParamLimits

0x076a,	// (0x00051c22) navi_navi_volume_pane_cp2

0x0785,	// (0x00051c3d) popup_side_volume_key_window_g2

0x0794,	// (0x00051c4c) popup_side_volume_key_window_g3

0x0002,

0xf6f1,	// (0x00060ba9) popup_side_volume_key_window_g

0x07b1,	// (0x00051c69) popup_side_volume_key_window_t2

0x0001,

0xf6f8,	// (0x00060bb0) popup_side_volume_key_window_t

0x43f4,	// (0x000558ac) popup_side_volume_key_window_ParamLimits

0xba15,	// (0x0005cecd) list_double_graphic_pane_g4_ParamLimits

0xba15,	// (0x0005cecd) list_double_graphic_pane_g4

0xda27,	// (0x0005eedf) list_single_2heading_msg_pane_ParamLimits

0xda27,	// (0x0005eedf) list_single_2heading_msg_pane

0xdb9c,	// (0x0005f054) list_single_2heading_msg_pane_g1_ParamLimits

0xdb9c,	// (0x0005f054) list_single_2heading_msg_pane_g1

0xdba8,	// (0x0005f060) list_single_2heading_msg_pane_g2_ParamLimits

0xdba8,	// (0x0005f060) list_single_2heading_msg_pane_g2

0xdbbb,	// (0x0005f073) list_single_2heading_msg_pane_g3_ParamLimits

0xdbbb,	// (0x0005f073) list_single_2heading_msg_pane_g3

0x3789,	// (0x00054c41) list_single_2heading_msg_pane_g4_ParamLimits

0x3789,	// (0x00054c41) list_single_2heading_msg_pane_g4

0x0003,

0xfc79,	// (0x00061131) list_single_2heading_msg_pane_g_ParamLimits

0xfc79,	// (0x00061131) list_single_2heading_msg_pane_g

0x37a1,	// (0x00054c59) list_single_2heading_msg_pane_t1_ParamLimits

0x37a1,	// (0x00054c59) list_single_2heading_msg_pane_t1

0xc7d5,	// (0x0005dc8d) list_single_2heading_msg_pane_t2_ParamLimits

0xc7d5,	// (0x0005dc8d) list_single_2heading_msg_pane_t2

0xc840,	// (0x0005dcf8) list_single_2heading_msg_pane_t3_ParamLimits

0xc840,	// (0x0005dcf8) list_single_2heading_msg_pane_t3

0x3836,	// (0x00054cee) list_single_2heading_msg_pane_t4_ParamLimits

0x3836,	// (0x00054cee) list_single_2heading_msg_pane_t4

0x0003,

0xfc82,	// (0x0006113a) list_single_2heading_msg_pane_t_ParamLimits

0xfc82,	// (0x0006113a) list_single_2heading_msg_pane_t

0x2c1e,	// (0x000540d6) title_pane_g4_ParamLimits

0x2c1e,	// (0x000540d6) title_pane_g4

0x0579,	// (0x00051a31) title_pane_stacon_g3_ParamLimits

0x0579,	// (0x00051a31) title_pane_stacon_g3

0x80fa,	// (0x000595b2) list_single_2graphic_im_pane_g4_ParamLimits

0x80fa,	// (0x000595b2) list_single_2graphic_im_pane_g4

0x5f90,	// (0x00057448) popup_side_volume_key_window_cp

0x67a0,	// (0x00057c58) main_idle_act2_pane_t1

0x11b0,	// (0x00052668) toolbar_button_pane_g10

0xb952,	// (0x0005ce0a) popup_toolbar_window_cp1

0x6f76,	// (0x0005842e) clock_nsta_pane_cp_t1

0x6f76,	// (0x0005842e) clock_nsta_pane_cp_t2

0x0001,

0xfa7d,	// (0x00060f35) clock_nsta_pane_cp_t

0x076a,	// (0x00051c22) navi_navi_volume_pane_cp2_ParamLimits

0x0779,	// (0x00051c31) popup_side_volume_key_window_g1_ParamLimits

0x0785,	// (0x00051c3d) popup_side_volume_key_window_g2_ParamLimits

0x0794,	// (0x00051c4c) popup_side_volume_key_window_g3_ParamLimits

0xf6f1,	// (0x00060ba9) popup_side_volume_key_window_g_ParamLimits

0x1a50,	// (0x00052f08) fep_hwr_aid_pane

0x1af7,	// (0x00052faf) bg_fep_hwr_top_pane_g4_ParamLimits

0x752f,	// (0x000589e7) fep_hwr_top_pane_g1_ParamLimits

0x7541,	// (0x000589f9) fep_hwr_top_pane_g2_ParamLimits

0x1b17,	// (0x00052fcf) fep_hwr_top_pane_g3_ParamLimits

0xfad2,	// (0x00060f8a) fep_hwr_top_pane_g_ParamLimits

0x1b2c,	// (0x00052fe4) fep_hwr_top_text_pane_ParamLimits

0x5d53,	// (0x0005720b) aid_touch_tab_arrow_arrow_2

0x5d5c,	// (0x00057214) aid_touch_tab_arrow_left_2

0x1a64,	// (0x00052f1c) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x1a9b,	// (0x00052f53) fep_hwr_prediction_pane

0x76a1,	// (0x00058b59) fep_vkb_prediction_pane

0xdf18,	// (0x0005f3d0) fep_vkb_side_pane_g3_ParamLimits

0xdf18,	// (0x0005f3d0) fep_vkb_side_pane_g3

0x1ca7,	// (0x0005315f) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x1e04,	// (0x000532bc) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x1e11,	// (0x000532c9) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb81,	// (0x00061039) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x1f40,	// (0x000533f8) fep_hwr_prediction_pane_g1

0x1f4a,	// (0x00053402) fep_hwr_prediction_pane_g2

0x1f52,	// (0x0005340a) fep_hwr_prediction_pane_g3

0x1f5a,	// (0x00053412) fep_hwr_prediction_pane_g4

0x0003,

0xfc8b,	// (0x00061143) fep_hwr_prediction_pane_g

0x85f9,	// (0x00059ab1) fep_vkb_prediction_pane_g1

0x8603,	// (0x00059abb) fep_vkb_prediction_pane_g2

0x860b,	// (0x00059ac3) fep_vkb_prediction_pane_g3

0x8613,	// (0x00059acb) fep_vkb_prediction_pane_g4

0x0003,

0xfc94,	// (0x0006114c) fep_vkb_prediction_pane_g

0x1577,	// (0x00052a2f) slider_set_pane_g3

0x158b,	// (0x00052a43) slider_set_pane_g4

0x15a3,	// (0x00052a5b) slider_set_pane_g5

0x1577,	// (0x00052a2f) slider_set_pane_g6

0x15b9,	// (0x00052a71) slider_set_pane_g7

0x63f0,	// (0x000578a8) slider_form_pane_g3

0x63f9,	// (0x000578b1) slider_form_pane_g4

0x6401,	// (0x000578b9) slider_form_pane_g5

0x63f0,	// (0x000578a8) slider_form_pane_g6

0xd9f9,	// (0x0005eeb1) slider_form_pane_g7

0x6a4b,	// (0x00057f03) slider_set_pane_vc_g3

0x6a54,	// (0x00057f0c) slider_set_pane_vc_g4

0x6a5d,	// (0x00057f15) slider_set_pane_vc_g5

0x6a4b,	// (0x00057f03) slider_set_pane_vc_g6

0x6a66,	// (0x00057f1e) slider_set_pane_vc_g7

0x6c28,	// (0x000580e0) slider_form_pane_vc_g1

0x6c31,	// (0x000580e9) slider_form_pane_vc_g2

0x6c3a,	// (0x000580f2) slider_form_pane_vc_g3

0x6c28,	// (0x000580e0) slider_form_pane_vc_g4

0x6c43,	// (0x000580fb) slider_form_pane_vc_g5

0x0004,

0xfa4f,	// (0x00060f07) slider_form_pane_vc_g

0xf311,	// (0x000607c9) main_idle_act3_pane

0x861b,	// (0x00059ad3) ai3_links_pane

0xe0e6,	// (0x0005f59e) popup_ai3_data_window_ParamLimits

0xe0e6,	// (0x0005f59e) popup_ai3_data_window

0xdbfc,	// (0x0005f0b4) grid_ai3_links_pane

0xe100,	// (0x0005f5b8) cell_ai3_links_pane_ParamLimits

0xe100,	// (0x0005f5b8) cell_ai3_links_pane

0x8656,	// (0x00059b0e) bg_popup_sub_pane_cp11

0x8663,	// (0x00059b1b) cell_ai3_links_pane_g1

0xdbfc,	// (0x0005f0b4) bg_popup_sub_pane_cp12

0x8688,	// (0x00059b40) heading_ai3_data_pane

0x8690,	// (0x00059b48) list_ai3_gene_pane

0x869c,	// (0x00059b54) popup_ai3_data_window_g1

0x86a4,	// (0x00059b5c) heading_ai3_data_pane_g1

0x86ac,	// (0x00059b64) heading_ai3_data_pane_t1

0x86ba,	// (0x00059b72) list_double_ai3_gene_pane_ParamLimits

0x86ba,	// (0x00059b72) list_double_ai3_gene_pane

0x86c7,	// (0x00059b7f) list_single_ai3_gene_pane_ParamLimits

0x86c7,	// (0x00059b7f) list_single_ai3_gene_pane

0x7498,	// (0x00058950) list_highlight_pane_cp7_ParamLimits

0x7498,	// (0x00058950) list_highlight_pane_cp7

0x86d4,	// (0x00059b8c) list_single_a13_gene_pane_t1_ParamLimits

0x86d4,	// (0x00059b8c) list_single_a13_gene_pane_t1

0x86eb,	// (0x00059ba3) list_single_ai3_gene_pane_g1

0x86f4,	// (0x00059bac) list_single_ai3_gene_pane_g2

0x0001,

0xfc9d,	// (0x00061155) list_single_ai3_gene_pane_g

0x86fc,	// (0x00059bb4) list_double_ai3_gene_pane_g1_ParamLimits

0x86fc,	// (0x00059bb4) list_double_ai3_gene_pane_g1

0x8708,	// (0x00059bc0) list_double_ai3_gene_pane_t1_ParamLimits

0x8708,	// (0x00059bc0) list_double_ai3_gene_pane_t1

0x8724,	// (0x00059bdc) list_double_ai3_gene_pane_t2_ParamLimits

0x8724,	// (0x00059bdc) list_double_ai3_gene_pane_t2

0x873a,	// (0x00059bf2) list_double_ai3_gene_pane_t3_ParamLimits

0x873a,	// (0x00059bf2) list_double_ai3_gene_pane_t3

0x0002,

0xfca2,	// (0x0006115a) list_double_ai3_gene_pane_t_ParamLimits

0xfca2,	// (0x0006115a) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x375b,	// (0x00054c13) aid_size_min_col_2

0xe0d0,	// (0x0005f588) aid_size_min_msg_ParamLimits

0xe0d0,	// (0x0005f588) aid_size_min_msg

0xdf2c,	// (0x0005f3e4) fep_vkb_top_text_pane_g2_ParamLimits

0xdf2c,	// (0x0005f3e4) fep_vkb_top_text_pane_g2

0x0001,

0xfb02,	// (0x00060fba) fep_vkb_top_text_pane_g_ParamLimits

0xfb02,	// (0x00060fba) fep_vkb_top_text_pane_g

0xf311,	// (0x000607c9) main_hc_apps_shell_pane

0x8757,	// (0x00059c0f) grid_hc_apps_pane_ParamLimits

0x8757,	// (0x00059c0f) grid_hc_apps_pane

0x8769,	// (0x00059c21) list_hc_apps_pane

0x8771,	// (0x00059c29) scroll_pane_cp37_ParamLimits

0x8771,	// (0x00059c29) scroll_pane_cp37

0xe11a,	// (0x0005f5d2) cell_hc_apps_pane_ParamLimits

0xe11a,	// (0x0005f5d2) cell_hc_apps_pane

0xe1d8,	// (0x0005f690) cell_hc_apps_pane_g1_ParamLimits

0xe1d8,	// (0x0005f690) cell_hc_apps_pane_g1

0x885b,	// (0x00059d13) cell_hc_apps_pane_g2_ParamLimits

0x885b,	// (0x00059d13) cell_hc_apps_pane_g2

0x8877,	// (0x00059d2f) cell_hc_apps_pane_g3_ParamLimits

0x8877,	// (0x00059d2f) cell_hc_apps_pane_g3

0x0002,

0xfca9,	// (0x00061161) cell_hc_apps_pane_g_ParamLimits

0xfca9,	// (0x00061161) cell_hc_apps_pane_g

0xe204,	// (0x0005f6bc) cell_hc_apps_pane_t1_ParamLimits

0xe204,	// (0x0005f6bc) cell_hc_apps_pane_t1

0x2f53,	// (0x0005440b) grid_highlight_pane_cp10_ParamLimits

0x2f53,	// (0x0005440b) grid_highlight_pane_cp10

0xe242,	// (0x0005f6fa) list_single_hc_apps_pane_ParamLimits

0xe242,	// (0x0005f6fa) list_single_hc_apps_pane

0xe26f,	// (0x0005f727) list_single_hc_apps_pane_g1

0xdbc7,	// (0x0005f07f) list_single_hc_apps_pane_g2

0x0001,

0xfcb0,	// (0x00061168) list_single_hc_apps_pane_g

0xdbe0,	// (0x0005f098) list_single_hc_apps_pane_g2_copy1

0x3890,	// (0x00054d48) list_single_hc_apps_pane_t1

0x2cca,	// (0x00054182) bg_set_opt_pane_cp_ParamLimits

0xf4a0,	// (0x00060958) setting_slider_pane_t1_ParamLimits

0xf4b9,	// (0x00060971) setting_slider_pane_t2_ParamLimits

0xf4d3,	// (0x0006098b) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x000609f1) setting_slider_pane_t_ParamLimits

0xf4eb,	// (0x000609a3) slider_set_pane_ParamLimits

0x0a81,	// (0x00051f39) control_pane_g5_ParamLimits

0x0a81,	// (0x00051f39) control_pane_g5

0x623f,	// (0x000576f7) slider_set_pane_g1_ParamLimits

0x156b,	// (0x00052a23) slider_set_pane_g2_ParamLimits

0x1577,	// (0x00052a2f) slider_set_pane_g3_ParamLimits

0x158b,	// (0x00052a43) slider_set_pane_g4_ParamLimits

0x15a3,	// (0x00052a5b) slider_set_pane_g5_ParamLimits

0x1577,	// (0x00052a2f) slider_set_pane_g6_ParamLimits

0x15b9,	// (0x00052a71) slider_set_pane_g7_ParamLimits

0xf93f,	// (0x00060df7) slider_set_pane_g_ParamLimits

0x44e0,	// (0x00055998) navi_icon_text_pane_ParamLimits

0xd2a0,	// (0x0005e758) aid_fill_nsta_2_ParamLimits

0xd2d7,	// (0x0005e78f) aid_touch_tab_arrow_left_ParamLimits

0xd2ed,	// (0x0005e7a5) aid_touch_tab_arrow_right_ParamLimits

0xd388,	// (0x0005e840) clock_nsta_pane_ParamLimits

0x5d35,	// (0x000571ed) navi_icon_pane_g1_ParamLimits

0x5d41,	// (0x000571f9) navi_text_pane_t1_ParamLimits

0x7082,	// (0x0005853a) navi_icon_text_pane_g1_ParamLimits

0x708e,	// (0x00058546) navi_icon_text_pane_t1_ParamLimits

0xe26f,	// (0x0005f727) list_single_hc_apps_pane_g1_ParamLimits

0xdbc7,	// (0x0005f07f) list_single_hc_apps_pane_g2_ParamLimits

0xfcb0,	// (0x00061168) list_single_hc_apps_pane_g_ParamLimits

0xdbe0,	// (0x0005f098) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x3890,	// (0x00054d48) list_single_hc_apps_pane_t1_ParamLimits

0xb4f8,	// (0x0005c9b0) popup_toolbar2_fixed_window_ParamLimits

0xb4f8,	// (0x0005c9b0) popup_toolbar2_fixed_window

0xc5f9,	// (0x0005dab1) popup_toolbar2_float_window

0xdbfc,	// (0x0005f0b4) bg_popup_sub_pane_cp27

0x894e,	// (0x00059e06) grid_toolbar2_float_pane

0xdbfc,	// (0x0005f0b4) bg_popup_sub_pane_cp26

0x894e,	// (0x00059e06) grid_toolbar2_fixed_pane

0xe288,	// (0x0005f740) cell_toolbar2_fixed_pane_ParamLimits

0xe288,	// (0x0005f740) cell_toolbar2_fixed_pane

0xe2a2,	// (0x0005f75a) cell_toolbar2_fixed_pane_g1

0x896f,	// (0x00059e27) toolbar2_fixed_button_pane

0x4ea2,	// (0x0005635a) toolbar2_fixed_button_pane_g1

0x4eb2,	// (0x0005636a) toolbar2_fixed_button_pane_g2

0x4eaa,	// (0x00056362) toolbar2_fixed_button_pane_g3

0x4ec2,	// (0x0005637a) toolbar2_fixed_button_pane_g4

0x4eba,	// (0x00056372) toolbar2_fixed_button_pane_g5

0x4eca,	// (0x00056382) toolbar2_fixed_button_pane_g6

0x4ed2,	// (0x0005638a) toolbar2_fixed_button_pane_g7

0x4ee2,	// (0x0005639a) toolbar2_fixed_button_pane_g8

0x4eda,	// (0x00056392) toolbar2_fixed_button_pane_g9

0x0008,

0xf841,	// (0x00060cf9) toolbar2_fixed_button_pane_g

0x8977,	// (0x00059e2f) cell_toolbar2_float_pane_ParamLimits

0x8977,	// (0x00059e2f) cell_toolbar2_float_pane

0x8988,	// (0x00059e40) cell_toolbar2_float_pane_g1

0x896f,	// (0x00059e27) toolbar2_fixed_button_pane_cp

0xde06,	// (0x0005f2be) fep_vkb_accented_list_pane_ParamLimits

0xde06,	// (0x0005f2be) fep_vkb_accented_list_pane

0x1c87,	// (0x0005313f) bg_popup_fep_shadow_pane_g9

0x4654,	// (0x00055b0c) bg_popup_fep_shadow_pane_cp3

0x3b1c,	// (0x00054fd4) list_accented_list_pane

0x8991,	// (0x00059e49) list_single_accented_list_pane_ParamLimits

0x8991,	// (0x00059e49) list_single_accented_list_pane

0x4654,	// (0x00055b0c) list_highlight_pane_cp10

0x89a2,	// (0x00059e5a) list_single_accented_list_pane_t1

0xc523,	// (0x0005d9db) popup_slider_window_ParamLimits

0xc523,	// (0x0005d9db) popup_slider_window

0x85dc,	// (0x00059a94) aid_indentation_list_msg

0xe399,	// (0x0005f851) bg_popup_window_pane_cp19

0x8ace,	// (0x00059f86) popup_slider_window_g1

0x8aea,	// (0x00059fa2) popup_slider_window_g2

0x8b06,	// (0x00059fbe) popup_slider_window_g3

0x0005,

0xfcb5,	// (0x0006116d) popup_slider_window_g

0x8b6c,	// (0x0005a024) popup_slider_window_t1

0x8be0,	// (0x0005a098) small_volume_slider_vertical_pane

0x74d3,	// (0x0005898b) small_volume_slider_vertical_pane_g1

0x74d3,	// (0x0005898b) small_volume_slider_vertical_pane_g2

0x8bfc,	// (0x0005a0b4) small_volume_slider_vertical_pane_g3

0x0002,

0xfcc7,	// (0x0006117f) small_volume_slider_vertical_pane_g

0xb466,	// (0x0005c91e) area_side_right_pane_ParamLimits

0xb466,	// (0x0005c91e) area_side_right_pane

0xc8ae,	// (0x0005dd66) aid_size_side_button_ParamLimits

0xc8ae,	// (0x0005dd66) aid_size_side_button

0xc8c7,	// (0x0005dd7f) grid_sctrl_middle_pane_ParamLimits

0xc8c7,	// (0x0005dd7f) grid_sctrl_middle_pane

0x1f95,	// (0x0005344d) sctrl_sk_bottom_pane

0x1fa6,	// (0x0005345e) sctrl_sk_top_pane

0x1fb8,	// (0x00053470) aid_touch_sctrl_top

0x1fc5,	// (0x0005347d) bg_sctrl_sk_pane_ParamLimits

0x1fc5,	// (0x0005347d) bg_sctrl_sk_pane

0x1fd3,	// (0x0005348b) sctrl_sk_top_pane_g1

0x1fe0,	// (0x00053498) sctrl_sk_top_pane_t1

0x1fb8,	// (0x00053470) aid_touch_sctrl_bottom

0x1fc5,	// (0x0005347d) bg_sctrl_sk_pane_cp_ParamLimits

0x1fc5,	// (0x0005347d) bg_sctrl_sk_pane_cp

0x1ffb,	// (0x000534b3) sctrl_sk_bottom_pane_g1

0x1fe0,	// (0x00053498) sctrl_sk_bottom_pane_t1

0xc8e1,	// (0x0005dd99) cell_sctrl_middle_pane_ParamLimits

0xc8e1,	// (0x0005dd99) cell_sctrl_middle_pane

0xc8f2,	// (0x0005ddaa) aid_touch_sctrl_middle_ParamLimits

0xc8f2,	// (0x0005ddaa) aid_touch_sctrl_middle

0xc8ff,	// (0x0005ddb7) bg_sctrl_middle_pane_ParamLimits

0xc8ff,	// (0x0005ddb7) bg_sctrl_middle_pane

0x2668,	// (0x00053b20) cell_sctrl_middle_pane_g1_ParamLimits

0x2668,	// (0x00053b20) cell_sctrl_middle_pane_g1

0xc90d,	// (0x0005ddc5) cell_sctrl_middle_pane_g2_ParamLimits

0xc90d,	// (0x0005ddc5) cell_sctrl_middle_pane_g2

0x0001,

0xfcd3,	// (0x0006118b) cell_sctrl_middle_pane_g_ParamLimits

0xfcd3,	// (0x0006118b) cell_sctrl_middle_pane_g

0x4ea2,	// (0x0005635a) bg_sctrl_middle_pane_g1

0x4eaa,	// (0x00056362) bg_sctrl_middle_pane_g2

0x4eb2,	// (0x0005636a) bg_sctrl_middle_pane_g3

0x4eba,	// (0x00056372) bg_sctrl_middle_pane_g4

0x4ec2,	// (0x0005637a) bg_sctrl_middle_pane_g5

0x4eca,	// (0x00056382) bg_sctrl_middle_pane_g6

0x4ed2,	// (0x0005638a) bg_sctrl_middle_pane_g7

0x4eda,	// (0x00056392) bg_sctrl_middle_pane_g8

0x0007,

0xfcd8,	// (0x00061190) bg_sctrl_middle_pane_g

0x4ee2,	// (0x0005639a) bg_sctrl_middle_pane_g8_copy1

0x4ea2,	// (0x0005635a) bg_sctrl_sk_pane_g1

0x4eb2,	// (0x0005636a) bg_sctrl_sk_pane_g2

0x4eaa,	// (0x00056362) bg_sctrl_sk_pane_g3

0x0008,

0xf841,	// (0x00060cf9) bg_sctrl_sk_pane_g

0x38d8,	// (0x00054d90) aid_size_touch_scroll_bar

0x4ec2,	// (0x0005637a) bg_sctrl_sk_pane_g4

0x4eba,	// (0x00056372) bg_sctrl_sk_pane_g5

0x4eca,	// (0x00056382) bg_sctrl_sk_pane_g6

0x4ed2,	// (0x0005638a) bg_sctrl_sk_pane_g7

0x4ee2,	// (0x0005639a) bg_sctrl_sk_pane_g8

0x4eda,	// (0x00056392) bg_sctrl_sk_pane_g9

0x0c49,	// (0x00052101) popup_fep_china_hwr2_fs_candidate_window

0xc037,	// (0x0005d4ef) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xc037,	// (0x0005d4ef) popup_fep_china_hwr2_fs_control_window

0x1ca7,	// (0x0005315f) sctrl_sk_top_pane_g2

0x0001,

0xfcce,	// (0x00061186) sctrl_sk_top_pane_g

0xe451,	// (0x0005f909) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe451,	// (0x0005f909) aid_fep_china_hwr2_fs_cell

0xe465,	// (0x0005f91d) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe465,	// (0x0005f91d) bg_popup_fep_shadow_pane_cp4

0xe47c,	// (0x0005f934) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe47c,	// (0x0005f934) bg_popup_fep_shadow_pane_cp5

0xe48e,	// (0x0005f946) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe48e,	// (0x0005f946) popup_fep_china_hwr2_fs_control_bar_grid

0xe4a2,	// (0x0005f95a) popup_fep_china_hwr2_fs_control_funtion_grid

0x8c58,	// (0x0005a110) aid_fep_china_hwr2_fs_candi_cell

0xdbfc,	// (0x0005f0b4) bg_popup_fep_shadow_pane_cp6

0x8c62,	// (0x0005a11a) popup_fep_china_hwr2_fs_candidate_grid

0xe4aa,	// (0x0005f962) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe4aa,	// (0x0005f962) cell_fep_china_hwr2_fs_funtion_grid

0x74d3,	// (0x0005898b) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x8c84,	// (0x0005a13c) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x8c84,	// (0x0005a13c) cell_fep_china_hwr2_fs_funtion_grid_g1

0x8c92,	// (0x0005a14a) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x8c92,	// (0x0005a14a) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfce9,	// (0x000611a1) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfce9,	// (0x000611a1) cell_fep_china_hwr2_fs_funtion_grid_g

0xe4c2,	// (0x0005f97a) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe4c2,	// (0x0005f97a) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe4d7,	// (0x0005f98f) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe4d7,	// (0x0005f98f) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfcee,	// (0x000611a6) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfcee,	// (0x000611a6) cell_fep_china_hwr2_fs_funtion_grid_t

0x8cd9,	// (0x0005a191) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x8ce1,	// (0x0005a199) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x8ce9,	// (0x0005a1a1) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfcf3,	// (0x000611ab) popup_fep_china_hwr2_fs_control_bar_grid_g

0x8cf1,	// (0x0005a1a9) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x8cf1,	// (0x0005a1a9) cell_fep_china_hwr2_fs_candidate_grid

0x8d0a,	// (0x0005a1c2) popup_fep_china_hwr2_fs_candidate_grid_g20

0x8d12,	// (0x0005a1ca) popup_fep_china_hwr2_fs_candidate_grid_g21

0x74d3,	// (0x0005898b) cell_fep_china_hwr2_fs_candidate_grid_g1

0x74d3,	// (0x0005898b) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb07,	// (0x00060fbf) cell_fep_china_hwr2_fs_candidate_grid_g

0x8d1a,	// (0x0005a1d2) cell_fep_china_hwr2_fs_candidate_grid_t1

0x4a98,	// (0x00055f50) clock_nsta_pane_cp_24_ParamLimits

0x4a98,	// (0x00055f50) clock_nsta_pane_cp_24

0x4b16,	// (0x00055fce) indicator_nsta_pane_cp_24_ParamLimits

0x4b16,	// (0x00055fce) indicator_nsta_pane_cp_24

0x5bb1,	// (0x00057069) heading_pane_g1

0x0001,

0xf8a6,	// (0x00060d5e) heading_pane_g

0x65e9,	// (0x00057aa1) grid_sct_catagory_button_pane

0x6619,	// (0x00057ad1) scroll_pane_cp5_ParamLimits

0x70d0,	// (0x00058588) button_value_adjust_pane_cp5_ParamLimits

0x70d0,	// (0x00058588) button_value_adjust_pane_cp5

0x71af,	// (0x00058667) form2_midp_time_pane_ParamLimits

0x8d28,	// (0x0005a1e0) cell_sct_catagory_button_pane_ParamLimits

0x8d28,	// (0x0005a1e0) cell_sct_catagory_button_pane

0x7498,	// (0x00058950) bg_button_pane_cp01_ParamLimits

0x7498,	// (0x00058950) bg_button_pane_cp01

0x74d3,	// (0x0005898b) cell_sct_catagory_button_pane_g1

0xc59c,	// (0x0005da54) popup_tb_extension_window

0xe4f3,	// (0x0005f9ab) aid_size_cell_ext_ParamLimits

0xe4f3,	// (0x0005f9ab) aid_size_cell_ext

0x32c8,	// (0x00054780) bg_tb_trans_pane_cp1_ParamLimits

0x32c8,	// (0x00054780) bg_tb_trans_pane_cp1

0xe519,	// (0x0005f9d1) grid_tb_ext_pane_ParamLimits

0xe519,	// (0x0005f9d1) grid_tb_ext_pane

0xe554,	// (0x0005fa0c) cell_tb_ext_pane_ParamLimits

0xe554,	// (0x0005fa0c) cell_tb_ext_pane

0xe57c,	// (0x0005fa34) cell_tb_ext_pane_g1_ParamLimits

0xe57c,	// (0x0005fa34) cell_tb_ext_pane_g1

0x8dbc,	// (0x0005a274) cell_tb_ext_pane_t1

0x2f53,	// (0x0005440b) list_highlight_pane_cp11_ParamLimits

0x2f53,	// (0x0005440b) list_highlight_pane_cp11

0xb50d,	// (0x0005c9c5) popup_uni_indicator_window_ParamLimits

0xb50d,	// (0x0005c9c5) popup_uni_indicator_window

0x39c1,	// (0x00054e79) bg_popup_sub_pane_cp14

0x8dd7,	// (0x0005a28f) list_uniindi_pane

0x8de3,	// (0x0005a29b) uniindi_top_pane

0x2f53,	// (0x0005440b) bg_uniindi_top_pane

0x8e02,	// (0x0005a2ba) uniindi_top_pane_g1

0x8e18,	// (0x0005a2d0) uniindi_top_pane_g2

0x0003,

0xfcfa,	// (0x000611b2) uniindi_top_pane_g

0x8e42,	// (0x0005a2fa) uniindi_top_pane_t1

0x8e6c,	// (0x0005a324) list_single_uniindi_pane_ParamLimits

0x8e6c,	// (0x0005a324) list_single_uniindi_pane

0x74d3,	// (0x0005898b) bg_uniindi_top_pane_g1

0x8e7f,	// (0x0005a337) list_single_uniindi_pane_g1

0x8e92,	// (0x0005a34a) list_single_uniindi_pane_t1

0xf311,	// (0x000607c9) control_bg_pane

0x8eb7,	// (0x0005a36f) bg_sctrl_sk_pane_cp1

0x8ec0,	// (0x0005a378) bg_sctrl_sk_pane_cp2

0x8ec9,	// (0x0005a381) control_bg_pane_g1

0x8ed2,	// (0x0005a38a) control_bg_pane_g2

0x0001,

0xfd03,	// (0x000611bb) control_bg_pane_g

0x6f1a,	// (0x000583d2) cell_indicator_nsta_pane_g1_ParamLimits

0xdc93,	// (0x0005f14b) cell_indicator_nsta_pane_g2_ParamLimits

0xfa6b,	// (0x00060f23) cell_indicator_nsta_pane_g_ParamLimits

0x1a2f,	// (0x00052ee7) form2_midp_time_pane_t1_ParamLimits

0x1a42,	// (0x00052efa) main_idle_act4_pane_ParamLimits

0x1a42,	// (0x00052efa) main_idle_act4_pane

0xc59c,	// (0x0005da54) popup_tb_extension_window_ParamLimits

0xe53b,	// (0x0005f9f3) tb_ext_find_pane_ParamLimits

0xe53b,	// (0x0005f9f3) tb_ext_find_pane

0x8edb,	// (0x0005a393) ai_gene_pane_1_cp1

0x479b,	// (0x00055c53) ai_gene_pane_2_cp1

0x8ee3,	// (0x0005a39b) list_single_idle_plugin_calendar_pane

0x8eec,	// (0x0005a3a4) list_single_idle_plugin_notification_pane

0x8ef5,	// (0x0005a3ad) list_single_idle_plugin_player_pane

0xe599,	// (0x0005fa51) list_single_idle_plugin_shortcut_pane_ParamLimits

0xe599,	// (0x0005fa51) list_single_idle_plugin_shortcut_pane

0xe5c1,	// (0x0005fa79) main_idle_act4_pane_t1

0xe5d7,	// (0x0005fa8f) main_idle_act4_pane_t2

0x0001,

0xfd08,	// (0x000611c0) main_idle_act4_pane_t

0xe5ed,	// (0x0005faa5) middle_sk_idle_act4_pane_ParamLimits

0xe5ed,	// (0x0005faa5) middle_sk_idle_act4_pane

0xe609,	// (0x0005fac1) popup_clock_digital_analogue_window_cp2

0xe631,	// (0x0005fae9) shortcut_wheel_idle_act4_pane_ParamLimits

0xe631,	// (0x0005fae9) shortcut_wheel_idle_act4_pane

0x74d3,	// (0x0005898b) shortcut_wheel_idle_act4_pane_g1

0x74d3,	// (0x0005898b) shortcut_wheel_idle_act4_pane_g2

0x74d3,	// (0x0005898b) shortcut_wheel_idle_act4_pane_g3

0x74d3,	// (0x0005898b) shortcut_wheel_idle_act4_pane_g4

0x74d3,	// (0x0005898b) shortcut_wheel_idle_act4_pane_g5

0x8f88,	// (0x0005a440) shortcut_wheel_idle_act4_pane_g6

0x8f90,	// (0x0005a448) shortcut_wheel_idle_act4_pane_g7

0x8f98,	// (0x0005a450) shortcut_wheel_idle_act4_pane_g8

0x8fa0,	// (0x0005a458) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd0d,	// (0x000611c5) shortcut_wheel_idle_act4_pane_g

0xe6ae,	// (0x0005fb66) middle_sk_idle_act4_pane_g1_ParamLimits

0xe6ae,	// (0x0005fb66) middle_sk_idle_act4_pane_g1

0xe6bc,	// (0x0005fb74) middle_sk_idle_act4_pane_g2_ParamLimits

0xe6bc,	// (0x0005fb74) middle_sk_idle_act4_pane_g2

0x0001,

0xfd30,	// (0x000611e8) middle_sk_idle_act4_pane_g_ParamLimits

0xfd30,	// (0x000611e8) middle_sk_idle_act4_pane_g

0xe6d4,	// (0x0005fb8c) middle_sk_idle_act4_pane_t1_ParamLimits

0xe6d4,	// (0x0005fb8c) middle_sk_idle_act4_pane_t1

0xe703,	// (0x0005fbbb) grid_ai_shortcut_pane_ParamLimits

0xe703,	// (0x0005fbbb) grid_ai_shortcut_pane

0xe720,	// (0x0005fbd8) list_highlight_pane_cp16_ParamLimits

0xe720,	// (0x0005fbd8) list_highlight_pane_cp16

0xe72d,	// (0x0005fbe5) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xe72d,	// (0x0005fbe5) list_single_idle_plugin_shortcut_pane_g1

0xe739,	// (0x0005fbf1) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xe739,	// (0x0005fbf1) list_single_idle_plugin_shortcut_pane_g2

0xe755,	// (0x0005fc0d) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xe755,	// (0x0005fc0d) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd35,	// (0x000611ed) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd35,	// (0x000611ed) list_single_idle_plugin_shortcut_pane_g

0xe76a,	// (0x0005fc22) cell_ai_shortcut_pane_ParamLimits

0xe76a,	// (0x0005fc22) cell_ai_shortcut_pane

0xe780,	// (0x0005fc38) cell_ai_shortcut_pane_g1_ParamLimits

0xe780,	// (0x0005fc38) cell_ai_shortcut_pane_g1

0x8edb,	// (0x0005a393) ai_gene_pane_1_cp2

0x90d0,	// (0x0005a588) ai_gene_pane_2_cp2

0x90d8,	// (0x0005a590) list_highlight_pane_cp15

0x90e1,	// (0x0005a599) list_single_idle_plugin_calendar_pane_g1

0x90d8,	// (0x0005a590) list_highlight_pane_cp17

0x90e9,	// (0x0005a5a1) list_single_idle_plugin_calendar_pane_g1_copy1

0x90f1,	// (0x0005a5a9) list_single_idle_plugin_player_pane_g1

0x6842,	// (0x00057cfa) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd3c,	// (0x000611f4) list_single_idle_plugin_player_pane_g

0x90f9,	// (0x0005a5b1) list_single_idle_plugin_player_pane_t1

0x9107,	// (0x0005a5bf) list_single_idle_plugin_player_pane_t2

0x9115,	// (0x0005a5cd) list_single_idle_plugin_player_pane_t3

0x9123,	// (0x0005a5db) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd41,	// (0x000611f9) list_single_idle_plugin_player_pane_t

0x9131,	// (0x0005a5e9) wait_bar_pane_cp15

0x9139,	// (0x0005a5f1) grid_ai_notification_pane

0x6842,	// (0x00057cfa) list_single_idle_plugin_notification_pane_g1

0xe7a2,	// (0x0005fc5a) cell_ai_notification_pane_ParamLimits

0xe7a2,	// (0x0005fc5a) cell_ai_notification_pane

0x914f,	// (0x0005a607) cell_ai_notification_pane_g1

0x9157,	// (0x0005a60f) cell_ai_notification_pane_t1

0xe7af,	// (0x0005fc67) tb_ext_find_button_pane

0xe7b7,	// (0x0005fc6f) tb_ext_find_pane_g1

0xe7bf,	// (0x0005fc77) tb_ext_find_pane_t1

0x404a,	// (0x00055502) tb_ext_find_button_pane_g1

0x9183,	// (0x0005a63b) tb_ext_find_button_pane_g2

0x0001,

0xfd4a,	// (0x00061202) tb_ext_find_button_pane_g

0xe5c1,	// (0x0005fa79) main_idle_act4_pane_t1_ParamLimits

0xe5d7,	// (0x0005fa8f) main_idle_act4_pane_t2_ParamLimits

0xfd08,	// (0x000611c0) main_idle_act4_pane_t_ParamLimits

0xe609,	// (0x0005fac1) popup_clock_digital_analogue_window_cp2_ParamLimits

0xe621,	// (0x0005fad9) sat_plugin_idle_act4_pane_ParamLimits

0xe621,	// (0x0005fad9) sat_plugin_idle_act4_pane

0xe7cd,	// (0x0005fc85) sat_plugin_idle_act4_pane_t1_ParamLimits

0xe7cd,	// (0x0005fc85) sat_plugin_idle_act4_pane_t1

0xe7e5,	// (0x0005fc9d) sat_plugin_idle_act4_pane_t2_ParamLimits

0xe7e5,	// (0x0005fc9d) sat_plugin_idle_act4_pane_t2

0xe7fd,	// (0x0005fcb5) sat_plugin_idle_act4_pane_t3_ParamLimits

0xe7fd,	// (0x0005fcb5) sat_plugin_idle_act4_pane_t3

0xe815,	// (0x0005fccd) sat_plugin_idle_act4_pane_t4_ParamLimits

0xe815,	// (0x0005fccd) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd4f,	// (0x00061207) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd4f,	// (0x00061207) sat_plugin_idle_act4_pane_t

0xf3d6,	// (0x0006088e) popup_battery_window_ParamLimits

0xf3d6,	// (0x0006088e) popup_battery_window

0x2f53,	// (0x0005440b) bg_popup_sub_pane_cp25_ParamLimits

0x2f53,	// (0x0005440b) bg_popup_sub_pane_cp25

0x91d8,	// (0x0005a690) popup_battery_window_g1_ParamLimits

0x91d8,	// (0x0005a690) popup_battery_window_g1

0x91e4,	// (0x0005a69c) popup_battery_window_t1_ParamLimits

0x91e4,	// (0x0005a69c) popup_battery_window_t1

0x91f6,	// (0x0005a6ae) popup_battery_window_t2_ParamLimits

0x91f6,	// (0x0005a6ae) popup_battery_window_t2

0x0001,

0xfd58,	// (0x00061210) popup_battery_window_t_ParamLimits

0xfd58,	// (0x00061210) popup_battery_window_t

0xd10b,	// (0x0005e5c3) midp_canvas_pane_ParamLimits

0xd168,	// (0x0005e620) midp_keypad_pane_ParamLimits

0xd168,	// (0x0005e620) midp_keypad_pane

0x4978,	// (0x00055e30) main_midp_pane_ParamLimits

0x6f94,	// (0x0005844c) signal_pane_g2_cp_ParamLimits

0xe82d,	// (0x0005fce5) aid_size_cell_midp_keypad_ParamLimits

0xe82d,	// (0x0005fce5) aid_size_cell_midp_keypad

0xe84b,	// (0x0005fd03) midp_keyp_game_grid_pane_ParamLimits

0xe84b,	// (0x0005fd03) midp_keyp_game_grid_pane

0xe872,	// (0x0005fd2a) midp_keyp_rocker_pane_ParamLimits

0xe872,	// (0x0005fd2a) midp_keyp_rocker_pane

0xe8c3,	// (0x0005fd7b) midp_keyp_sk_left_pane_ParamLimits

0xe8c3,	// (0x0005fd7b) midp_keyp_sk_left_pane

0xea38,	// (0x0005fef0) midp_keyp_sk_right_pane_ParamLimits

0xea38,	// (0x0005fef0) midp_keyp_sk_right_pane

0xdbfc,	// (0x0005f0b4) bg_button_pane_cp03

0xea8c,	// (0x0005ff44) midp_keyp_sk_left_pane_g1

0xdbfc,	// (0x0005f0b4) bg_button_pane_cp04

0xea8c,	// (0x0005ff44) midp_keyp_sk_right_pane_g1

0x74d3,	// (0x0005898b) midp_keyp_rocker_pane_g1

0xea95,	// (0x0005ff4d) keyp_game_cell_pane_ParamLimits

0xea95,	// (0x0005ff4d) keyp_game_cell_pane

0xdbfc,	// (0x0005f0b4) bg_button_pane_cp02

0xeab9,	// (0x0005ff71) keyp_game_cell_pane_g1

0xb4a8,	// (0x0005c960) popup_fep_vkb2_window_ParamLimits

0xb4a8,	// (0x0005c960) popup_fep_vkb2_window

0xc919,	// (0x0005ddd1) aid_size_cell_vkb2_ParamLimits

0xc919,	// (0x0005ddd1) aid_size_cell_vkb2

0xc94f,	// (0x0005de07) popup_fep_vkb2_window_g1_ParamLimits

0xc94f,	// (0x0005de07) popup_fep_vkb2_window_g1

0xc99f,	// (0x0005de57) vkb2_area_bottom_pane_ParamLimits

0xc99f,	// (0x0005de57) vkb2_area_bottom_pane

0xc9f3,	// (0x0005deab) vkb2_area_keypad_pane_ParamLimits

0xc9f3,	// (0x0005deab) vkb2_area_keypad_pane

0xca3b,	// (0x0005def3) vkb2_area_top_pane_ParamLimits

0xca3b,	// (0x0005def3) vkb2_area_top_pane

0xcac1,	// (0x0005df79) vkb2_top_entry_pane_ParamLimits

0xcac1,	// (0x0005df79) vkb2_top_entry_pane

0xcaee,	// (0x0005dfa6) vkb2_top_grid_left_pane_ParamLimits

0xcaee,	// (0x0005dfa6) vkb2_top_grid_left_pane

0xcb0e,	// (0x0005dfc6) vkb2_top_grid_right_pane_ParamLimits

0xcb0e,	// (0x0005dfc6) vkb2_top_grid_right_pane

0x2267,	// (0x0005371f) vkb2_cell_keypad_pane_ParamLimits

0x2267,	// (0x0005371f) vkb2_cell_keypad_pane

0xcb54,	// (0x0005e00c) vkb2_area_bottom_grid_pane_ParamLimits

0xcb54,	// (0x0005e00c) vkb2_area_bottom_grid_pane

0xcb7e,	// (0x0005e036) vkb2_area_bottom_pane_g1_ParamLimits

0xcb7e,	// (0x0005e036) vkb2_area_bottom_pane_g1

0xcba4,	// (0x0005e05c) vkb2_area_bottom_pane_g2_ParamLimits

0xcba4,	// (0x0005e05c) vkb2_area_bottom_pane_g2

0xcbd5,	// (0x0005e08d) vkb2_area_bottom_pane_g3_ParamLimits

0xcbd5,	// (0x0005e08d) vkb2_area_bottom_pane_g3

0x0002,

0xfd5d,	// (0x00061215) vkb2_area_bottom_pane_g_ParamLimits

0xfd5d,	// (0x00061215) vkb2_area_bottom_pane_g

0x2411,	// (0x000538c9) vkb2_top_cell_left_pane_ParamLimits

0x2411,	// (0x000538c9) vkb2_top_cell_left_pane

0xeac2,	// (0x0005ff7a) vkb2_top_entry_pane_g1_ParamLimits

0xeac2,	// (0x0005ff7a) vkb2_top_entry_pane_g1

0xead0,	// (0x0005ff88) vkb2_top_entry_pane_t1_ParamLimits

0xead0,	// (0x0005ff88) vkb2_top_entry_pane_t1

0x93c8,	// (0x0005a880) vkb2_top_entry_pane_t2_ParamLimits

0x93c8,	// (0x0005a880) vkb2_top_entry_pane_t2

0x93fa,	// (0x0005a8b2) vkb2_top_entry_pane_t3_ParamLimits

0x93fa,	// (0x0005a8b2) vkb2_top_entry_pane_t3

0x0002,

0xfd64,	// (0x0006121c) vkb2_top_entry_pane_t_ParamLimits

0xfd64,	// (0x0006121c) vkb2_top_entry_pane_t

0xcc3f,	// (0x0005e0f7) vkb2_top_grid_right_pane_g1_ParamLimits

0xcc3f,	// (0x0005e0f7) vkb2_top_grid_right_pane_g1

0x2474,	// (0x0005392c) vkb2_top_grid_right_pane_g2_ParamLimits

0x2474,	// (0x0005392c) vkb2_top_grid_right_pane_g2

0x248c,	// (0x00053944) vkb2_top_grid_right_pane_g3_ParamLimits

0x248c,	// (0x00053944) vkb2_top_grid_right_pane_g3

0xcc55,	// (0x0005e10d) vkb2_top_grid_right_pane_g4_ParamLimits

0xcc55,	// (0x0005e10d) vkb2_top_grid_right_pane_g4

0x0003,

0xfd6b,	// (0x00061223) vkb2_top_grid_right_pane_g_ParamLimits

0xfd6b,	// (0x00061223) vkb2_top_grid_right_pane_g

0x24ba,	// (0x00053972) vkb2_top_cell_left_pane_g1

0x24d1,	// (0x00053989) vkb2_cell_keypad_pane_g1_ParamLimits

0x24d1,	// (0x00053989) vkb2_cell_keypad_pane_g1

0x941e,	// (0x0005a8d6) vkb2_cell_keypad_pane_t1_ParamLimits

0x941e,	// (0x0005a8d6) vkb2_cell_keypad_pane_t1

0x24df,	// (0x00053997) vkb2_cell_bottom_grid_pane_ParamLimits

0x24df,	// (0x00053997) vkb2_cell_bottom_grid_pane

0x2518,	// (0x000539d0) vkb2_cell_bottom_grid_pane_g1

0xe652,	// (0x0005fb0a) aid_call2_pane_cp02

0xe65a,	// (0x0005fb12) aid_call_pane_cp02

0xe662,	// (0x0005fb1a) clock_digital_number_pane_cp10

0xe66a,	// (0x0005fb22) clock_digital_number_pane_cp11

0xe672,	// (0x0005fb2a) clock_digital_number_pane_cp12

0xe67a,	// (0x0005fb32) clock_digital_number_pane_cp13

0xe682,	// (0x0005fb3a) clock_digital_separator_pane_cp10

0x404a,	// (0x00055502) popup_clock_digital_analogue_window_cp2_g1

0x404a,	// (0x00055502) popup_clock_digital_analogue_window_cp2_g2

0xe68a,	// (0x0005fb42) popup_clock_digital_analogue_window_cp2_g3

0x404a,	// (0x00055502) popup_clock_digital_analogue_window_cp2_g4

0xe68a,	// (0x0005fb42) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd20,	// (0x000611d8) popup_clock_digital_analogue_window_cp2_g

0xe692,	// (0x0005fb4a) popup_clock_digital_analogue_window_cp2_t1

0xe6a0,	// (0x0005fb58) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd2b,	// (0x000611e3) popup_clock_digital_analogue_window_cp2_t

0x74d3,	// (0x0005898b) clock_digital_number_pane_cp10_g1

0x74d3,	// (0x0005898b) clock_digital_number_pane_cp10_g2

0x0001,

0xfb07,	// (0x00060fbf) clock_digital_number_pane_cp10_g

0x74d3,	// (0x0005898b) clock_digital_separator_pane_cp10_g1

0x74d3,	// (0x0005898b) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb07,	// (0x00060fbf) clock_digital_separator_pane_cp10_g

0x8e24,	// (0x0005a2dc) uniindi_top_pane_g3

0x8e35,	// (0x0005a2ed) uniindi_top_pane_g4

0x22f2,	// (0x000537aa) vkb2_row_keypad_pane_ParamLimits

0x22f2,	// (0x000537aa) vkb2_row_keypad_pane

0x2534,	// (0x000539ec) vkb2_cell_t_keypad_pane_ParamLimits

0x2534,	// (0x000539ec) vkb2_cell_t_keypad_pane

0x2544,	// (0x000539fc) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x2544,	// (0x000539fc) vkb2_cell_t_keypad_pane_cp08

0x2557,	// (0x00053a0f) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x2557,	// (0x00053a0f) vkb2_cell_t_keypad_pane_cp09

0x256b,	// (0x00053a23) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x256b,	// (0x00053a23) vkb2_cell_t_keypad_pane_cp01

0x257c,	// (0x00053a34) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x257c,	// (0x00053a34) vkb2_cell_t_keypad_pane_cp02

0x258d,	// (0x00053a45) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x258d,	// (0x00053a45) vkb2_cell_t_keypad_pane_cp03

0x259e,	// (0x00053a56) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x259e,	// (0x00053a56) vkb2_cell_t_keypad_pane_cp04

0x25af,	// (0x00053a67) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x25af,	// (0x00053a67) vkb2_cell_t_keypad_pane_cp05

0x25c0,	// (0x00053a78) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x25c0,	// (0x00053a78) vkb2_cell_t_keypad_pane_cp06

0x25d1,	// (0x00053a89) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x25d1,	// (0x00053a89) vkb2_cell_t_keypad_pane_cp07

0x25e2,	// (0x00053a9a) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x25e2,	// (0x00053a9a) vkb2_cell_t_keypad_pane_cp10

0x1ca7,	// (0x0005315f) vkb2_cell_t_keypad_pane_g1

0x9435,	// (0x0005a8ed) vkb2_cell_t_keypad_pane_t1

0xf311,	// (0x000607c9) popup_grid_graphic2_window

0xeb09,	// (0x0005ffc1) aid_size_cell_graphic2_ParamLimits

0xeb09,	// (0x0005ffc1) aid_size_cell_graphic2

0xeb47,	// (0x0005ffff) bg_popup_window_pane_cp21_ParamLimits

0xeb47,	// (0x0005ffff) bg_popup_window_pane_cp21

0xeb55,	// (0x0006000d) graphic2_pages_pane_ParamLimits

0xeb55,	// (0x0006000d) graphic2_pages_pane

0xebab,	// (0x00060063) grid_graphic2_control_pane_ParamLimits

0xebab,	// (0x00060063) grid_graphic2_control_pane

0xebf3,	// (0x000600ab) grid_graphic2_pane_ParamLimits

0xebf3,	// (0x000600ab) grid_graphic2_pane

0xec7a,	// (0x00060132) cell_graphic2_pane

0xf311,	// (0x000607c9) main_comp_mode_pane

0x8690,	// (0x00059b48) list_ai3_gene_pane_ParamLimits

0xe399,	// (0x0005f851) bg_popup_window_pane_cp19_ParamLimits

0x8a72,	// (0x00059f2a) bg_touch_area_indi_pane_ParamLimits

0x8a72,	// (0x00059f2a) bg_touch_area_indi_pane

0x8a88,	// (0x00059f40) bg_touch_area_indi_pane_cp01_ParamLimits

0x8a88,	// (0x00059f40) bg_touch_area_indi_pane_cp01

0x8a9e,	// (0x00059f56) bg_touch_area_indi_pane_cp02_ParamLimits

0x8a9e,	// (0x00059f56) bg_touch_area_indi_pane_cp02

0x8ab4,	// (0x00059f6c) bg_touch_area_indi_pane_cp03_ParamLimits

0x8ab4,	// (0x00059f6c) bg_touch_area_indi_pane_cp03

0x8ace,	// (0x00059f86) popup_slider_window_g1_ParamLimits

0x8aea,	// (0x00059fa2) popup_slider_window_g2_ParamLimits

0x8b06,	// (0x00059fbe) popup_slider_window_g3_ParamLimits

0xfcb5,	// (0x0006116d) popup_slider_window_g_ParamLimits

0x8b6c,	// (0x0005a024) popup_slider_window_t1_ParamLimits

0x8be0,	// (0x0005a098) small_volume_slider_vertical_pane_ParamLimits

0xec7a,	// (0x00060132) cell_graphic2_pane_ParamLimits

0xecd5,	// (0x0006018d) bg_button_pane_cp10_ParamLimits

0xecd5,	// (0x0006018d) bg_button_pane_cp10

0xece8,	// (0x000601a0) bg_button_pane_cp11_ParamLimits

0xece8,	// (0x000601a0) bg_button_pane_cp11

0xecfb,	// (0x000601b3) graphic2_pages_pane_g1_ParamLimits

0xecfb,	// (0x000601b3) graphic2_pages_pane_g1

0xed16,	// (0x000601ce) graphic2_pages_pane_g2_ParamLimits

0xed16,	// (0x000601ce) graphic2_pages_pane_g2

0x0001,

0xfd79,	// (0x00061231) graphic2_pages_pane_g_ParamLimits

0xfd79,	// (0x00061231) graphic2_pages_pane_g

0xed2e,	// (0x000601e6) graphic2_pages_pane_t1_ParamLimits

0xed2e,	// (0x000601e6) graphic2_pages_pane_t1

0xed46,	// (0x000601fe) cell_graphic2_control_pane_ParamLimits

0xed46,	// (0x000601fe) cell_graphic2_control_pane

0xed78,	// (0x00060230) cell_graphic2_pane_g1_ParamLimits

0xed78,	// (0x00060230) cell_graphic2_pane_g1

0xe917,	// (0x0005fdcf) cell_graphic2_pane_g2_ParamLimits

0xe917,	// (0x0005fdcf) cell_graphic2_pane_g2

0xea2b,	// (0x0005fee3) cell_graphic2_pane_g3_ParamLimits

0xea2b,	// (0x0005fee3) cell_graphic2_pane_g3

0xe924,	// (0x0005fddc) cell_graphic2_pane_g4_ParamLimits

0xe924,	// (0x0005fddc) cell_graphic2_pane_g4

0xed85,	// (0x0006023d) cell_graphic2_pane_g5_ParamLimits

0xed85,	// (0x0006023d) cell_graphic2_pane_g5

0x0004,

0xfd7e,	// (0x00061236) cell_graphic2_pane_g_ParamLimits

0xfd7e,	// (0x00061236) cell_graphic2_pane_g

0xeda2,	// (0x0006025a) cell_graphic2_pane_t1_ParamLimits

0xeda2,	// (0x0006025a) cell_graphic2_pane_t1

0x5ba5,	// (0x0005705d) grid_highlight_pane_cp11_ParamLimits

0x5ba5,	// (0x0005705d) grid_highlight_pane_cp11

0x2f53,	// (0x0005440b) bg_button_pane_cp05

0xedec,	// (0x000602a4) cell_graphic2_control_pane_g1

0x74d3,	// (0x0005898b) bg_touch_area_indi_pane_g1

0x970e,	// (0x0005abc6) aid_cmod_rocker_key_size

0x9718,	// (0x0005abd0) aid_cmode_itu_key_size

0x9722,	// (0x0005abda) main_cmode_video_pane

0x972c,	// (0x0005abe4) main_comp_mode_itu_pane

0x9738,	// (0x0005abf0) main_comp_mode_rocker_pane

0x9744,	// (0x0005abfc) cell_cmode_rocker_pane_ParamLimits

0x9744,	// (0x0005abfc) cell_cmode_rocker_pane

0x9756,	// (0x0005ac0e) cell_cmode_itu_pane_ParamLimits

0x9756,	// (0x0005ac0e) cell_cmode_itu_pane

0x39c1,	// (0x00054e79) bg_button_pane_cp06_ParamLimits

0x39c1,	// (0x00054e79) bg_button_pane_cp06

0x7751,	// (0x00058c09) cell_cmode_rocker_pane_g1_ParamLimits

0x7751,	// (0x00058c09) cell_cmode_rocker_pane_g1

0x8c84,	// (0x0005a13c) cell_cmode_rocker_pane_g2_ParamLimits

0x8c84,	// (0x0005a13c) cell_cmode_rocker_pane_g2

0x0001,

0xfd8e,	// (0x00061246) cell_cmode_rocker_pane_g_ParamLimits

0xfd8e,	// (0x00061246) cell_cmode_rocker_pane_g

0xdbfc,	// (0x0005f0b4) bg_button_pane_cp07

0x976b,	// (0x0005ac23) cell_cmode_itu_pane_g1

0x9774,	// (0x0005ac2c) cell_cmode_itu_pane_t1

0x9782,	// (0x0005ac3a) cell_cmode_itu_pane_t2

0x0001,

0xfd93,	// (0x0006124b) cell_cmode_itu_pane_t

0x8ea7,	// (0x0005a35f) aid_touch_ctrl_left

0x8eaf,	// (0x0005a367) aid_touch_ctrl_right

0xdbfc,	// (0x0005f0b4) compa_mode_pane

0xee10,	// (0x000602c8) aid_cmod_rocker_key_size_cp

0xee1a,	// (0x000602d2) aid_cmode_itu_key_size_cp

0x97a4,	// (0x0005ac5c) compa_mode_pane_g1

0x97ac,	// (0x0005ac64) compa_mode_pane_g2

0x97b4,	// (0x0005ac6c) compa_mode_pane_g3

0x0002,

0xfd98,	// (0x00061250) compa_mode_pane_g

0xee24,	// (0x000602dc) main_comp_mode_itu_pane_cp

0xee2c,	// (0x000602e4) main_comp_mode_rocker_pane_cp

0xee34,	// (0x000602ec) cell_cmode_itu_pane_cp_ParamLimits

0xee34,	// (0x000602ec) cell_cmode_itu_pane_cp

0xee49,	// (0x00060301) cell_cmode_rocker_pane_cp_ParamLimits

0xee49,	// (0x00060301) cell_cmode_rocker_pane_cp

0x39c1,	// (0x00054e79) bg_button_pane_cp06_cp_ParamLimits

0x39c1,	// (0x00054e79) bg_button_pane_cp06_cp

0x7751,	// (0x00058c09) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x7751,	// (0x00058c09) cell_cmode_rocker_pane_g1_cp

0x74d3,	// (0x0005898b) cell_cmode_rocker_pane_g2_cp

0xdbfc,	// (0x0005f0b4) bg_button_pane_cp07_cp

0xee5b,	// (0x00060313) cell_cmode_itu_pane_g1_cp

0xee64,	// (0x0006031c) cell_cmode_itu_pane_t1_cp

0xee64,	// (0x0006031c) cell_cmode_itu_pane_t2_cp

0xd9ef,	// (0x0005eea7) settings_code_pane_cp2

0x2cca,	// (0x00054182) bg_popup_window_pane_cp3_ParamLimits

0x3153,	// (0x0005460b) heading_pane_cp3_ParamLimits

0x3162,	// (0x0005461a) listscroll_popup_graphic_pane_ParamLimits

0x1a50,	// (0x00052f08) fep_hwr_aid_pane_ParamLimits

0x1fb8,	// (0x00053470) aid_touch_sctrl_top_ParamLimits

0x1fd3,	// (0x0005348b) sctrl_sk_top_pane_g1_ParamLimits

0x1ca7,	// (0x0005315f) sctrl_sk_top_pane_g2_ParamLimits

0xfcce,	// (0x00061186) sctrl_sk_top_pane_g_ParamLimits

0x1fe0,	// (0x00053498) sctrl_sk_top_pane_t1_ParamLimits

0x1fb8,	// (0x00053470) aid_touch_sctrl_bottom_ParamLimits

0x1fe0,	// (0x00053498) sctrl_sk_bottom_pane_t1_ParamLimits

0x8df0,	// (0x0005a2a8) aid_area_touch_clock

0xca83,	// (0x0005df3b) aid_vkb2_area_top_pane_cell_ParamLimits

0xca83,	// (0x0005df3b) aid_vkb2_area_top_pane_cell

0xcb2e,	// (0x0005dfe6) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xcb2e,	// (0x0005dfe6) aid_vkb2_area_bottom_pane_cell

0x9380,	// (0x0005a838) popup_char_count_window

0x9801,	// (0x0005acb9) popup_char_count_window_g1

0x980a,	// (0x0005acc2) popup_char_count_window_g2

0x9813,	// (0x0005accb) popup_char_count_window_g3

0x0002,

0xfd9f,	// (0x00061257) popup_char_count_window_g

0x981c,	// (0x0005acd4) popup_char_count_window_t1

0x208f,	// (0x00053547) popup_fep_char_preview_window_ParamLimits

0x208f,	// (0x00053547) popup_fep_char_preview_window

0xcaa3,	// (0x0005df5b) vkb2_top_candi_pane_ParamLimits

0xcaa3,	// (0x0005df5b) vkb2_top_candi_pane

0xee72,	// (0x0006032a) cell_vkb2_top_candi_pane_ParamLimits

0xee72,	// (0x0006032a) cell_vkb2_top_candi_pane

0x25f7,	// (0x00053aaf) bg_popup_fep_char_preview_window_ParamLimits

0x25f7,	// (0x00053aaf) bg_popup_fep_char_preview_window

0x2605,	// (0x00053abd) popup_fep_char_preview_window_t1_ParamLimits

0x2605,	// (0x00053abd) popup_fep_char_preview_window_t1

0x9877,	// (0x0005ad2f) bg_popup_fep_char_preview_window_g1

0x987f,	// (0x0005ad37) bg_popup_fep_char_preview_window_g2

0x9887,	// (0x0005ad3f) bg_popup_fep_char_preview_window_g3

0x988f,	// (0x0005ad47) bg_popup_fep_char_preview_window_g4

0x9897,	// (0x0005ad4f) bg_popup_fep_char_preview_window_g5

0x989f,	// (0x0005ad57) bg_popup_fep_char_preview_window_g6

0x98a7,	// (0x0005ad5f) bg_popup_fep_char_preview_window_g7

0x98af,	// (0x0005ad67) bg_popup_fep_char_preview_window_g8

0x98b7,	// (0x0005ad6f) bg_popup_fep_char_preview_window_g9

0x0009,

0xfda6,	// (0x0006125e) bg_popup_fep_char_preview_window_g

0x1ca7,	// (0x0005315f) cell_vkb2_top_candi_pane_g1_ParamLimits

0x1ca7,	// (0x0005315f) cell_vkb2_top_candi_pane_g1

0x1cb5,	// (0x0005316d) cell_vkb2_top_candi_pane_g2_ParamLimits

0x1cb5,	// (0x0005316d) cell_vkb2_top_candi_pane_g2

0x9343,	// (0x0005a7fb) cell_vkb2_top_candi_pane_g3_ParamLimits

0x9343,	// (0x0005a7fb) cell_vkb2_top_candi_pane_g3

0x2647,	// (0x00053aff) cell_vkb2_top_candi_pane_g4_ParamLimits

0x2647,	// (0x00053aff) cell_vkb2_top_candi_pane_g4

0x7c1c,	// (0x000590d4) cell_vkb2_top_candi_pane_g5_ParamLimits

0x7c1c,	// (0x000590d4) cell_vkb2_top_candi_pane_g5

0x2668,	// (0x00053b20) cell_vkb2_top_candi_pane_g6_ParamLimits

0x2668,	// (0x00053b20) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdbb,	// (0x00061273) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdbb,	// (0x00061273) cell_vkb2_top_candi_pane_g

0x2676,	// (0x00053b2e) cell_vkb2_top_candi_pane_t1

0x1557,	// (0x00052a0f) aid_size_touch_slider_mark_ParamLimits

0x1557,	// (0x00052a0f) aid_size_touch_slider_mark

0xeb91,	// (0x00060049) grid_graphic2_catg_pane_ParamLimits

0xeb91,	// (0x00060049) grid_graphic2_catg_pane

0xec4d,	// (0x00060105) popup_grid_graphic2_window_t1_ParamLimits

0xec4d,	// (0x00060105) popup_grid_graphic2_window_t1

0xec63,	// (0x0006011b) popup_grid_graphic2_window_t2_ParamLimits

0xec63,	// (0x0006011b) popup_grid_graphic2_window_t2

0x0001,

0xfd74,	// (0x0006122c) popup_grid_graphic2_window_t_ParamLimits

0xfd74,	// (0x0006122c) popup_grid_graphic2_window_t

0x2f53,	// (0x0005440b) bg_button_pane_cp05_ParamLimits

0xedec,	// (0x000602a4) cell_graphic2_control_pane_g1_ParamLimits

0xeed8,	// (0x00060390) cell_graphic2_catg_pane_ParamLimits

0xeed8,	// (0x00060390) cell_graphic2_catg_pane

0xdbfc,	// (0x0005f0b4) bg_button_pane_cp12

0xeeea,	// (0x000603a2) cell_graphic2_catg_pane_g1

0x8dbc,	// (0x0005a274) cell_tb_ext_pane_t1_ParamLimits

0x2431,	// (0x000538e9) vkb2_top_cell_right_narrow_pane_ParamLimits

0x2431,	// (0x000538e9) vkb2_top_cell_right_narrow_pane

0x2449,	// (0x00053901) vkb2_top_cell_right_wide_pane_ParamLimits

0x2449,	// (0x00053901) vkb2_top_cell_right_wide_pane

0x1a42,	// (0x00052efa) bg_vkb2_func_pane_ParamLimits

0x1a42,	// (0x00052efa) bg_vkb2_func_pane

0x24ba,	// (0x00053972) vkb2_top_cell_left_pane_g1_ParamLimits

0x1a42,	// (0x00052efa) bg_vkb2_fuc_pane_cp03_ParamLimits

0x1a42,	// (0x00052efa) bg_vkb2_fuc_pane_cp03

0x2518,	// (0x000539d0) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x4eaa,	// (0x00056362) bg_vkb2_func_pane_g1

0x4eb2,	// (0x0005636a) bg_vkb2_func_pane_g2

0x4ec2,	// (0x0005637a) bg_vkb2_func_pane_g3

0x4eba,	// (0x00056372) bg_vkb2_func_pane_g4

0x4eca,	// (0x00056382) bg_vkb2_func_pane_g5

0x4ed2,	// (0x0005638a) bg_vkb2_func_pane_g6

0x4eda,	// (0x00056392) bg_vkb2_func_pane_g7

0x4ee2,	// (0x0005639a) bg_vkb2_func_pane_g8

0x4ea2,	// (0x0005635a) bg_vkb2_func_pane_g9

0x0008,

0xfdc8,	// (0x00061280) bg_vkb2_func_pane_g

0x1a42,	// (0x00052efa) bg_vkb2_fuc_pane_cp01_ParamLimits

0x1a42,	// (0x00052efa) bg_vkb2_fuc_pane_cp01

0x24ba,	// (0x00053972) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x24ba,	// (0x00053972) vkb2_top_cell_right_wide_pane_g1

0x1a42,	// (0x00052efa) bg_vkb2_fuc_pane_cp02_ParamLimits

0x1a42,	// (0x00052efa) bg_vkb2_fuc_pane_cp02

0x2518,	// (0x000539d0) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x2518,	// (0x000539d0) vkb2_top_cell_right_narrow_pane_g1

0xe2db,	// (0x0005f793) aid_touch_area_decrease_ParamLimits

0xe2db,	// (0x0005f793) aid_touch_area_decrease

0xe315,	// (0x0005f7cd) aid_touch_area_increase_ParamLimits

0xe315,	// (0x0005f7cd) aid_touch_area_increase

0xe33d,	// (0x0005f7f5) aid_touch_area_mute_ParamLimits

0xe33d,	// (0x0005f7f5) aid_touch_area_mute

0xe365,	// (0x0005f81d) aid_touch_area_slider_ParamLimits

0xe365,	// (0x0005f81d) aid_touch_area_slider

0xe3a5,	// (0x0005f85d) popup_slider_window_g4_ParamLimits

0xe3a5,	// (0x0005f85d) popup_slider_window_g4

0xe3cd,	// (0x0005f885) popup_slider_window_g5_ParamLimits

0xe3cd,	// (0x0005f885) popup_slider_window_g5

0xe401,	// (0x0005f8b9) popup_slider_window_g6_ParamLimits

0xe401,	// (0x0005f8b9) popup_slider_window_g6

0x8b9a,	// (0x0005a052) popup_slider_window_t2_ParamLimits

0x8b9a,	// (0x0005a052) popup_slider_window_t2

0x0001,

0xfcc2,	// (0x0006117a) popup_slider_window_t_ParamLimits

0xfcc2,	// (0x0006117a) popup_slider_window_t

0xe41d,	// (0x0005f8d5) slider_pane_ParamLimits

0xe41d,	// (0x0005f8d5) slider_pane

0x98da,	// (0x0005ad92) slider_pane_g1_ParamLimits

0x98da,	// (0x0005ad92) slider_pane_g1

0x98ee,	// (0x0005ada6) slider_pane_g2_ParamLimits

0x98ee,	// (0x0005ada6) slider_pane_g2

0x9904,	// (0x0005adbc) slider_pane_g3_ParamLimits

0x9904,	// (0x0005adbc) slider_pane_g3

0x0003,

0xfddb,	// (0x00061293) slider_pane_g_ParamLimits

0xfddb,	// (0x00061293) slider_pane_g

0xc5e4,	// (0x0005da9c) popup_tb_float_extension_window_ParamLimits

0xc5e4,	// (0x0005da9c) popup_tb_float_extension_window

0x9930,	// (0x0005ade8) aid_size_cell_tb_float_ext

0xdbfc,	// (0x0005f0b4) bg_popup_sub_window_cp28

0x993c,	// (0x0005adf4) grid_tb_float_ext_pane

0x9946,	// (0x0005adfe) cell_tb_float_ext_pane_ParamLimits

0x9946,	// (0x0005adfe) cell_tb_float_ext_pane

0x9960,	// (0x0005ae18) cell_tb_float_ext_pane_g1

0x9969,	// (0x0005ae21) grid_highlight_pane_cp12

0xc791,	// (0x0005dc49) cell_last_hwr_side_pane_ParamLimits

0xc791,	// (0x0005dc49) cell_last_hwr_side_pane

0x74d3,	// (0x0005898b) cell_last_hwr_side_pane_g1

0x9972,	// (0x0005ae2a) cell_last_hwr_side_pane_g2

0x0001,

0xfde4,	// (0x0006129c) cell_last_hwr_side_pane_g

0xcc0a,	// (0x0005e0c2) vkb2_area_bottom_space_btn_pane_ParamLimits

0xcc0a,	// (0x0005e0c2) vkb2_area_bottom_space_btn_pane

0x1ca7,	// (0x0005315f) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x9435,	// (0x0005a8ed) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x2676,	// (0x00053b2e) cell_vkb2_top_candi_pane_t1_ParamLimits

0x2695,	// (0x00053b4d) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x2695,	// (0x00053b4d) vkb2_area_bottom_space_btn_pane_g1

0x26cf,	// (0x00053b87) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x26cf,	// (0x00053b87) vkb2_area_bottom_space_btn_pane_g2

0x2705,	// (0x00053bbd) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x2705,	// (0x00053bbd) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfde9,	// (0x000612a1) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfde9,	// (0x000612a1) vkb2_area_bottom_space_btn_pane_g

0x1b05,	// (0x00052fbd) cel_fep_hwr_func_pane_ParamLimits

0x1b05,	// (0x00052fbd) cel_fep_hwr_func_pane

0xc766,	// (0x0005dc1e) cell_hwr_side_button_pane_ParamLimits

0xc766,	// (0x0005dc1e) cell_hwr_side_button_pane

0x8df0,	// (0x0005a2a8) aid_area_touch_clock_ParamLimits

0x2f53,	// (0x0005440b) bg_uniindi_top_pane_ParamLimits

0x8e02,	// (0x0005a2ba) uniindi_top_pane_g1_ParamLimits

0x8e18,	// (0x0005a2d0) uniindi_top_pane_g2_ParamLimits

0x8e24,	// (0x0005a2dc) uniindi_top_pane_g3_ParamLimits

0x8e35,	// (0x0005a2ed) uniindi_top_pane_g4_ParamLimits

0xfcfa,	// (0x000611b2) uniindi_top_pane_g_ParamLimits

0x8e42,	// (0x0005a2fa) uniindi_top_pane_t1_ParamLimits

0x2f53,	// (0x0005440b) bg_vkb2_func_pane_cp01_ParamLimits

0x2f53,	// (0x0005440b) bg_vkb2_func_pane_cp01

0x997b,	// (0x0005ae33) cel_fep_hwr_func_pane_g1_ParamLimits

0x997b,	// (0x0005ae33) cel_fep_hwr_func_pane_g1

0x2f53,	// (0x0005440b) bg_vkb2_func_pane_cp02_ParamLimits

0x2f53,	// (0x0005440b) bg_vkb2_func_pane_cp02

0x997b,	// (0x0005ae33) cell_hwr_side_button_pane_g1_ParamLimits

0x997b,	// (0x0005ae33) cell_hwr_side_button_pane_g1

0x4d23,	// (0x000561db) status_pane_g4_ParamLimits

0x4d23,	// (0x000561db) status_pane_g4

0x4d3d,	// (0x000561f5) status_pane_t1

0x7218,	// (0x000586d0) form2_midp_gauge_slider_cont_pane

0x7220,	// (0x000586d8) form2_midp_gauge_slider_pane_t1_ParamLimits

0xdd5e,	// (0x0005f216) form2_midp_gauge_slider_pane_t2_ParamLimits

0xdd70,	// (0x0005f228) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaba,	// (0x00060f72) form2_midp_gauge_slider_pane_t_ParamLimits

0x7256,	// (0x0005870e) form2_midp_slider_pane_ParamLimits

0x204f,	// (0x00053507) aid_size_cell_func_vkb2_ParamLimits

0x204f,	// (0x00053507) aid_size_cell_func_vkb2

0x991c,	// (0x0005add4) slider_pane_g4_ParamLimits

0x991c,	// (0x0005add4) slider_pane_g4

0xcc73,	// (0x0005e12b) form2_midp_gauge_slider_pane_t2_cp01

0xcc81,	// (0x0005e139) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xcc81,	// (0x0005e139) form2_midp_gauge_slider_pane_t3_cp01

0x277a,	// (0x00053c32) form2_midp_slider_pane_cp01

0xdbfc,	// (0x0005f0b4) navi_smil_pane

0x99b4,	// (0x0005ae6c) navi_smil_pane_g1

0x99bc,	// (0x0005ae74) navi_smil_pane_t1

0x9989,	// (0x0005ae41) form2_midp_slider_pane_g1

0x9992,	// (0x0005ae4a) form2_midp_slider_pane_g2

0x999a,	// (0x0005ae52) form2_midp_slider_pane_g3

0x9989,	// (0x0005ae41) form2_midp_slider_pane_g4

0xeef3,	// (0x000603ab) form2_midp_slider_pane_g5

0x0004,

0xfdf2,	// (0x000612aa) form2_midp_slider_pane_g

0x273f,	// (0x00053bf7) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x273f,	// (0x00053bf7) vkb2_area_bottom_space_btn_pane_g4

0xd3d3,	// (0x0005e88b) lc0_navi_pane_ParamLimits

0xd3d3,	// (0x0005e88b) lc0_navi_pane

0xd43d,	// (0x0005e8f5) lc0_stat_indi_pane_ParamLimits

0xd43d,	// (0x0005e8f5) lc0_stat_indi_pane

0xd452,	// (0x0005e90a) ls0_title_pane_ParamLimits

0xd452,	// (0x0005e90a) ls0_title_pane

0x39c1,	// (0x00054e79) bg_popup_sub_pane_cp14_ParamLimits

0x8dd7,	// (0x0005a28f) list_uniindi_pane_ParamLimits

0x8de3,	// (0x0005a29b) uniindi_top_pane_ParamLimits

0x8e7f,	// (0x0005a337) list_single_uniindi_pane_g1_ParamLimits

0x8e92,	// (0x0005a34a) list_single_uniindi_pane_t1_ParamLimits

0xcc9e,	// (0x0005e156) lc0_stat_clock_pane_ParamLimits

0xcc9e,	// (0x0005e156) lc0_stat_clock_pane

0xeefe,	// (0x000603b6) lc0_stat_indi_pane_g1_ParamLimits

0xeefe,	// (0x000603b6) lc0_stat_indi_pane_g1

0xef0b,	// (0x000603c3) lc0_stat_indi_pane_g2_ParamLimits

0xef0b,	// (0x000603c3) lc0_stat_indi_pane_g2

0x0001,

0xfdfd,	// (0x000612b5) lc0_stat_indi_pane_g_ParamLimits

0xfdfd,	// (0x000612b5) lc0_stat_indi_pane_g

0xccab,	// (0x0005e163) lc0_uni_indicator_pane_ParamLimits

0xccab,	// (0x0005e163) lc0_uni_indicator_pane

0xef18,	// (0x000603d0) ls0_title_pane_g1_ParamLimits

0xef18,	// (0x000603d0) ls0_title_pane_g1

0xef2c,	// (0x000603e4) ls0_title_pane_t1_ParamLimits

0xef2c,	// (0x000603e4) ls0_title_pane_t1

0xccb8,	// (0x0005e170) lc0_uni_indicator_pane_g1_ParamLimits

0xccb8,	// (0x0005e170) lc0_uni_indicator_pane_g1

0x9a2e,	// (0x0005aee6) lc0_stat_clock_pane_t1

0xf311,	// (0x000607c9) main_ai5_pane

0x9a3c,	// (0x0005aef4) ai5_sk_pane_ParamLimits

0x9a3c,	// (0x0005aef4) ai5_sk_pane

0xef5a,	// (0x00060412) cell_ai5_widget_pane_ParamLimits

0xef5a,	// (0x00060412) cell_ai5_widget_pane

0x9b12,	// (0x0005afca) aid_size_cell_widget_grid

0x9b28,	// (0x0005afe0) bg_ai5_widget_pane_ParamLimits

0x9b28,	// (0x0005afe0) bg_ai5_widget_pane

0x9ba4,	// (0x0005b05c) cell_ai5_widget_pane_g2

0x9bb8,	// (0x0005b070) cell_ai5_widget_pane_g3

0x9bd2,	// (0x0005b08a) cell_ai5_widget_pane_g4

0x9be2,	// (0x0005b09a) cell_ai5_widget_pane_g5

0x9bf2,	// (0x0005b0aa) cell_ai5_widget_pane_g6

0x9bfe,	// (0x0005b0b6) cell_ai5_widget_pane_g7

0x9c6a,	// (0x0005b122) cell_ai5_widget_pane_t1_ParamLimits

0x9c6a,	// (0x0005b122) cell_ai5_widget_pane_t1

0x9c87,	// (0x0005b13f) cell_ai5_widget_pane_t2_ParamLimits

0x9c87,	// (0x0005b13f) cell_ai5_widget_pane_t2

0x9c9f,	// (0x0005b157) cell_ai5_widget_pane_t3_ParamLimits

0x9c9f,	// (0x0005b157) cell_ai5_widget_pane_t3

0x9cb7,	// (0x0005b16f) cell_ai5_widget_pane_t4_ParamLimits

0x9cb7,	// (0x0005b16f) cell_ai5_widget_pane_t4

0x9cdd,	// (0x0005b195) cell_ai5_widget_pane_t5_ParamLimits

0x9cdd,	// (0x0005b195) cell_ai5_widget_pane_t5

0x9cfc,	// (0x0005b1b4) cell_ai5_widget_pane_t6_ParamLimits

0x9cfc,	// (0x0005b1b4) cell_ai5_widget_pane_t6

0x9d0e,	// (0x0005b1c6) cell_ai5_widget_pane_t7_ParamLimits

0x9d0e,	// (0x0005b1c6) cell_ai5_widget_pane_t7

0x9d2d,	// (0x0005b1e5) cell_ai5_widget_pane_t8_ParamLimits

0x9d2d,	// (0x0005b1e5) cell_ai5_widget_pane_t8

0x000b,

0xfe1d,	// (0x000612d5) cell_ai5_widget_pane_t_ParamLimits

0xfe1d,	// (0x000612d5) cell_ai5_widget_pane_t

0x9db1,	// (0x0005b269) grid_ai5_widget_pane

0x39c1,	// (0x00054e79) highlight_cell_ai5_widget_pane_ParamLimits

0x39c1,	// (0x00054e79) highlight_cell_ai5_widget_pane

0xefc6,	// (0x0006047e) ai5_sk_left_pane

0xefd0,	// (0x00060488) ai5_sk_middle_pane

0xefda,	// (0x00060492) ai5_sk_right_pane

0x9de6,	// (0x0005b29e) bg_ai5_widget_pane_g1_ParamLimits

0x9de6,	// (0x0005b29e) bg_ai5_widget_pane_g1

0x9df2,	// (0x0005b2aa) bg_ai5_widget_pane_g2_ParamLimits

0x9df2,	// (0x0005b2aa) bg_ai5_widget_pane_g2

0x9dfe,	// (0x0005b2b6) bg_ai5_widget_pane_g3_ParamLimits

0x9dfe,	// (0x0005b2b6) bg_ai5_widget_pane_g3

0x9e0a,	// (0x0005b2c2) bg_ai5_widget_pane_g4_ParamLimits

0x9e0a,	// (0x0005b2c2) bg_ai5_widget_pane_g4

0x9e16,	// (0x0005b2ce) bg_ai5_widget_pane_g5_ParamLimits

0x9e16,	// (0x0005b2ce) bg_ai5_widget_pane_g5

0x9e22,	// (0x0005b2da) bg_ai5_widget_pane_g6_ParamLimits

0x9e22,	// (0x0005b2da) bg_ai5_widget_pane_g6

0x9e2e,	// (0x0005b2e6) bg_ai5_widget_pane_g7_ParamLimits

0x9e2e,	// (0x0005b2e6) bg_ai5_widget_pane_g7

0x9e3a,	// (0x0005b2f2) bg_ai5_widget_pane_g8_ParamLimits

0x9e3a,	// (0x0005b2f2) bg_ai5_widget_pane_g8

0x9e46,	// (0x0005b2fe) bg_ai5_widget_pane_g9_ParamLimits

0x9e46,	// (0x0005b2fe) bg_ai5_widget_pane_g9

0x0008,

0xfe36,	// (0x000612ee) bg_ai5_widget_pane_g_ParamLimits

0xfe36,	// (0x000612ee) bg_ai5_widget_pane_g

0x9e78,	// (0x0005b330) cell_shortcut_ai5_widget_pane_ParamLimits

0x9e78,	// (0x0005b330) cell_shortcut_ai5_widget_pane

0x4654,	// (0x00055b0c) bg_cell_shortcut_ai5_widget_pane

0x9e89,	// (0x0005b341) cell_grid_ai5_widget_pane_g1

0x4654,	// (0x00055b0c) highlight_cell_shortcut_ai5_widget_pane

0x4eaa,	// (0x00056362) ai5_sk_left_pane_g1

0x9e92,	// (0x0005b34a) ai5_sk_left_pane_g2

0x9e9a,	// (0x0005b352) ai5_sk_left_pane_g3

0x9ea2,	// (0x0005b35a) ai5_sk_left_pane_g4

0x0003,

0xfe49,	// (0x00061301) ai5_sk_left_pane_g

0x9eaa,	// (0x0005b362) ai5_sk_left_pane_t1

0x4eb2,	// (0x0005636a) ai5_sk_right_pane_g1

0x9eb8,	// (0x0005b370) ai5_sk_right_pane_g2

0x9ec0,	// (0x0005b378) ai5_sk_right_pane_g3

0x9ec8,	// (0x0005b380) ai5_sk_right_pane_g4

0x0003,

0xfe52,	// (0x0006130a) ai5_sk_right_pane_g

0x9ed0,	// (0x0005b388) ai5_sk_right_pane_t1

0x4eb2,	// (0x0005636a) ai5_sk_middle_pane_g1

0x4eaa,	// (0x00056362) ai5_sk_middle_pane_g2

0x4eca,	// (0x00056382) ai5_sk_middle_pane_g3

0x9ec0,	// (0x0005b378) ai5_sk_middle_pane_g4

0x9e9a,	// (0x0005b352) ai5_sk_middle_pane_g5

0x9ede,	// (0x0005b396) ai5_sk_middle_pane_g6

0xefe4,	// (0x0006049c) ai5_sk_middle_pane_g7

0x0006,

0xfe5b,	// (0x00061313) ai5_sk_middle_pane_g

0xd2bf,	// (0x0005e777) aid_touch_area_size_lc0_ParamLimits

0xd2bf,	// (0x0005e777) aid_touch_area_size_lc0

0x1cd6,	// (0x0005318e) cell_hwr_candidate_pane_t1_ParamLimits

0x49f4,	// (0x00055eac) aid_touch_navi_pane

0xd54b,	// (0x0005ea03) status_dt_navi_pane_ParamLimits

0xd54b,	// (0x0005ea03) status_dt_navi_pane

0xd563,	// (0x0005ea1b) status_dt_sta_pane_ParamLimits

0xd563,	// (0x0005ea1b) status_dt_sta_pane

0xefec,	// (0x000604a4) dt_sta_controll_pane

0xeff9,	// (0x000604b1) dt_sta_indi_pane

0xf006,	// (0x000604be) dt_sta_title_pane

0x2f53,	// (0x0005440b) bg_dt_sta_indi_pane_ParamLimits

0x2f53,	// (0x0005440b) bg_dt_sta_indi_pane

0xf018,	// (0x000604d0) dt_sta_battery_pane

0xf020,	// (0x000604d8) dt_sta_indi_pane_g1

0x9f30,	// (0x0005b3e8) dt_sta_indi_pane_g2

0x9f39,	// (0x0005b3f1) dt_sta_indi_pane_g3

0x0002,

0xfe6a,	// (0x00061322) dt_sta_indi_pane_g

0x9f42,	// (0x0005b3fa) dt_sta_signal_pane

0x39c1,	// (0x00054e79) bg_dt_sta_title_pane_ParamLimits

0x39c1,	// (0x00054e79) bg_dt_sta_title_pane

0x9f4b,	// (0x0005b403) dt_sta_title_pane_g1

0x9f53,	// (0x0005b40b) dt_sta_title_pane_t1_ParamLimits

0x9f53,	// (0x0005b40b) dt_sta_title_pane_t1

0xdbfc,	// (0x0005f0b4) bg_dt_sta_control_pane

0xf029,	// (0x000604e1) dt_sta_controll_pane_g1

0x9f71,	// (0x0005b429) bg_dt_sta_title_pane_g1

0x9f7a,	// (0x0005b432) bg_dt_sta_title_pane_g2

0x9f83,	// (0x0005b43b) bg_dt_sta_title_pane_g3

0x0002,

0xfe71,	// (0x00061329) bg_dt_sta_title_pane_g

0x74d3,	// (0x0005898b) bg_dt_sta_indi_pane_g1

0x9f8c,	// (0x0005b444) dt_sta_signal_pane_g1

0x9f94,	// (0x0005b44c) dt_sta_signal_pane_g2

0x0001,

0xfe78,	// (0x00061330) dt_sta_signal_pane_g

0x9f9c,	// (0x0005b454) dt_sta_battery_pane_g1

0x9fa5,	// (0x0005b45d) dt_sta_battery_pane_t1

0x74d3,	// (0x0005898b) bg_dt_sta_control_pane_g1

0x415c,	// (0x00055614) fep_china_uni_eep_pane

0x4164,	// (0x0005561c) fep_china_uni_entry_pane_ParamLimits

0x4174,	// (0x0005562c) popup_fep_china_uni_window_g1_ParamLimits

0x4184,	// (0x0005563c) popup_fep_china_uni_window_g2_ParamLimits

0x4184,	// (0x0005563c) popup_fep_china_uni_window_g2

0x0001,

0xf6fd,	// (0x00060bb5) popup_fep_china_uni_window_g_ParamLimits

0xf6fd,	// (0x00060bb5) popup_fep_china_uni_window_g

0x9fb4,	// (0x0005b46c) fep_china_uni_eep_pane_g1

0x9fbc,	// (0x0005b474) fep_china_uni_eep_pane_t1

0x99ab,	// (0x0005ae63) aid_touch_area_size_smil_player

0x4b4a,	// (0x00056002) lc0_clock_pane

0x4d31,	// (0x000561e9) status_pane_g5_ParamLimits

0x4d31,	// (0x000561e9) status_pane_g5

0xc166,	// (0x0005d61e) popup_keymap_window

0x4cef,	// (0x000561a7) status_icon_pane

0x9bb8,	// (0x0005b070) cell_ai5_widget_pane_g3_ParamLimits

0x9bd2,	// (0x0005b08a) cell_ai5_widget_pane_g4_ParamLimits

0x9be2,	// (0x0005b09a) cell_ai5_widget_pane_g5_ParamLimits

0x9c0a,	// (0x0005b0c2) cell_ai5_widget_pane_g8_ParamLimits

0x9c0a,	// (0x0005b0c2) cell_ai5_widget_pane_g8

0x9c1e,	// (0x0005b0d6) cell_ai5_widget_pane_g9_ParamLimits

0x9c1e,	// (0x0005b0d6) cell_ai5_widget_pane_g9

0x9c32,	// (0x0005b0ea) cell_ai5_widget_pane_g10_ParamLimits

0x9c32,	// (0x0005b0ea) cell_ai5_widget_pane_g10

0x9fcb,	// (0x0005b483) status_icon_pane_g1

0xdbfc,	// (0x0005f0b4) bg_popup_sub_pane_cp13

0x9fd3,	// (0x0005b48b) popup_keymap_window_t1

0xd255,	// (0x0005e70d) control_pane_g6_ParamLimits

0xd255,	// (0x0005e70d) control_pane_g6

0xd262,	// (0x0005e71a) control_pane_g7_ParamLimits

0xd262,	// (0x0005e71a) control_pane_g7

0xd26f,	// (0x0005e727) control_pane_g8_ParamLimits

0xd26f,	// (0x0005e727) control_pane_g8

0xefec,	// (0x000604a4) dt_sta_controll_pane_ParamLimits

0xeff9,	// (0x000604b1) dt_sta_indi_pane_ParamLimits

0xf006,	// (0x000604be) dt_sta_title_pane_ParamLimits

0x38e1,	// (0x00054d99) aid_size_touch_scroll_bar_cale

0xf3ea,	// (0x000608a2) popup_discreet_window_ParamLimits

0xf3ea,	// (0x000608a2) popup_discreet_window

0xb4ee,	// (0x0005c9a6) popup_sk_window

0x5531,	// (0x000569e9) bg_popup_sub_pane_cp28_ParamLimits

0x5531,	// (0x000569e9) bg_popup_sub_pane_cp28

0x9fe1,	// (0x0005b499) popup_discreet_window_g1_ParamLimits

0x9fe1,	// (0x0005b499) popup_discreet_window_g1

0xa001,	// (0x0005b4b9) popup_discreet_window_t1_ParamLimits

0xa001,	// (0x0005b4b9) popup_discreet_window_t1

0xa01f,	// (0x0005b4d7) popup_discreet_window_t2_ParamLimits

0xa01f,	// (0x0005b4d7) popup_discreet_window_t2

0x0002,

0xfe7d,	// (0x00061335) popup_discreet_window_t_ParamLimits

0xfe7d,	// (0x00061335) popup_discreet_window_t

0x27b1,	// (0x00053c69) popup_sk_window_g1

0x27bb,	// (0x00053c73) popup_sk_window_g2

0x0001,

0xfe84,	// (0x0006133c) popup_sk_window_g

0x27c3,	// (0x00053c7b) popup_sk_window_t1

0x27d1,	// (0x00053c89) popup_sk_window_t1_copy1

0x9ba4,	// (0x0005b05c) cell_ai5_widget_pane_g2_ParamLimits

0x9d3f,	// (0x0005b1f7) cell_ai5_widget_pane_t9_ParamLimits

0x9d3f,	// (0x0005b1f7) cell_ai5_widget_pane_t9

0xdbfc,	// (0x0005f0b4) main_fep_fshwr2_pane

0xccdf,	// (0x0005e197) aid_fshwr2_btn_pane

0xccf3,	// (0x0005e1ab) aid_fshwr2_syb_pane

0xcd07,	// (0x0005e1bf) aid_fshwr2_txt_pane

0xcd17,	// (0x0005e1cf) fshwr2_func_candi_pane

0xcd37,	// (0x0005e1ef) fshwr2_hwr_syb_pane

0xcd59,	// (0x0005e211) fshwr2_icf_pane

0xf311,	// (0x000607c9) fshwr2_icf_bg_pane

0xcd89,	// (0x0005e241) fshwr2_icf_pane_t1_ParamLimits

0xcd89,	// (0x0005e241) fshwr2_icf_pane_t1

0x404a,	// (0x00055502) fshwr2_func_candi_pane_g1

0xf032,	// (0x000604ea) fshwr2_func_candi_row_pane_ParamLimits

0xf032,	// (0x000604ea) fshwr2_func_candi_row_pane

0xcda2,	// (0x0005e25a) cell_fshwr2_syb_pane_ParamLimits

0xcda2,	// (0x0005e25a) cell_fshwr2_syb_pane

0x28a8,	// (0x00053d60) fshwr2_hwr_syb_pane_g1_ParamLimits

0x28a8,	// (0x00053d60) fshwr2_hwr_syb_pane_g1

0xf311,	// (0x000607c9) bg_popup_call_pane_cp01

0xcdc8,	// (0x0005e280) fshwr2_func_candi_cell_pane_ParamLimits

0xcdc8,	// (0x0005e280) fshwr2_func_candi_cell_pane

0x5312,	// (0x000567ca) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x5312,	// (0x000567ca) fshwr2_func_candi_cell_bg_pane

0xce13,	// (0x0005e2cb) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xce13,	// (0x0005e2cb) fshwr2_func_candi_cell_pane_g1

0xce4a,	// (0x0005e302) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xce4a,	// (0x0005e302) fshwr2_func_candi_cell_pane_t1

0xf311,	// (0x000607c9) bg_button_pane_cp08

0x4978,	// (0x00055e30) cell_fshwr2_syb_bg_pane

0xce65,	// (0x0005e31d) cell_fshwr2_syb_bg_pane_g1

0xce78,	// (0x0005e330) cell_fshwr2_syb_bg_pane_t1

0x39c1,	// (0x00054e79) main_tmo_pane

0xd821,	// (0x0005ecd9) uni_indicator_pane_g1_ParamLimits

0xd837,	// (0x0005ecef) uni_indicator_pane_g2_ParamLimits

0xd84d,	// (0x0005ed05) uni_indicator_pane_g3_ParamLimits

0x607f,	// (0x00057537) uni_indicator_pane_g4_ParamLimits

0x607f,	// (0x00057537) uni_indicator_pane_g4

0x6093,	// (0x0005754b) uni_indicator_pane_g5_ParamLimits

0x6093,	// (0x0005754b) uni_indicator_pane_g5

0x6093,	// (0x0005754b) uni_indicator_pane_g6_ParamLimits

0x6093,	// (0x0005754b) uni_indicator_pane_g6

0xf8fc,	// (0x00060db4) uni_indicator_pane_g_ParamLimits

0xe2b7,	// (0x0005f76f) popup_tmo_note_window_ParamLimits

0xe2b7,	// (0x0005f76f) popup_tmo_note_window

0x2031,	// (0x000534e9) fshwr2_bg_pane

0xce3b,	// (0x0005e2f3) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xce3b,	// (0x0005e2f3) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe89,	// (0x00061341) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe89,	// (0x00061341) fshwr2_func_candi_cell_pane_g

0x1c8f,	// (0x00053147) bg_popup_window_pane_cp01

0x295e,	// (0x00053e16) bg_popup_window_pane_g1_cp01

0xa098,	// (0x0005b550) bg_popup_window_pane_cp22_ParamLimits

0xa098,	// (0x0005b550) bg_popup_window_pane_cp22

0xa0a6,	// (0x0005b55e) listscroll_tmo_link_pane_ParamLimits

0xa0a6,	// (0x0005b55e) listscroll_tmo_link_pane

0xa0e6,	// (0x0005b59e) popup_tmo_note_window_g1_ParamLimits

0xa0e6,	// (0x0005b59e) popup_tmo_note_window_g1

0xa0f3,	// (0x0005b5ab) tmo_note_info_pane_ParamLimits

0xa0f3,	// (0x0005b5ab) tmo_note_info_pane

0xf055,	// (0x0006050d) list_tmo_note_info_pane_g1_ParamLimits

0xf055,	// (0x0006050d) list_tmo_note_info_pane_g1

0xa124,	// (0x0005b5dc) list_tmo_note_info_pane_g2_ParamLimits

0xa124,	// (0x0005b5dc) list_tmo_note_info_pane_g2

0x0001,

0xfe8e,	// (0x00061346) list_tmo_note_info_pane_g_ParamLimits

0xfe8e,	// (0x00061346) list_tmo_note_info_pane_g

0xa140,	// (0x0005b5f8) list_tmo_note_info_text_pane_ParamLimits

0xa140,	// (0x0005b5f8) list_tmo_note_info_text_pane

0xa1c1,	// (0x0005b679) list_tmo_link_pane

0xa1ce,	// (0x0005b686) scroll_pane_cp20

0xa1db,	// (0x0005b693) list_single_tmo_link_pane_ParamLimits

0xa1db,	// (0x0005b693) list_single_tmo_link_pane

0xa1eb,	// (0x0005b6a3) list_single_tmo_link_pane_t1

0xa1f9,	// (0x0005b6b1) list_tmo_note_info_text_pane_t1_ParamLimits

0xa1f9,	// (0x0005b6b1) list_tmo_note_info_text_pane_t1

0xcefa,	// (0x0005e3b2) aid_size_touch_scroll_bar_cp01_ParamLimits

0xcefa,	// (0x0005e3b2) aid_size_touch_scroll_bar_cp01

0xbd70,	// (0x0005d228) aid_size_touch_slider_marker

0xb4de,	// (0x0005c996) popup_settings_window_ParamLimits

0xb4de,	// (0x0005c996) popup_settings_window

0x0bc5,	// (0x0005207d) popup_candi_list_indi_window

0x49f4,	// (0x00055eac) aid_touch_navi_pane_ParamLimits

0x1f8c,	// (0x00053444) rs_clock_indi_pane

0x1f95,	// (0x0005344d) sctrl_sk_bottom_pane_ParamLimits

0x1fa6,	// (0x0005345e) sctrl_sk_top_pane_ParamLimits

0x20a9,	// (0x00053561) popup_fep_tooltip_window

0x9b12,	// (0x0005afca) aid_size_cell_widget_grid_ParamLimits

0x9b8f,	// (0x0005b047) cell_ai5_widget_pane_g1_ParamLimits

0x9b8f,	// (0x0005b047) cell_ai5_widget_pane_g1

0x9bf2,	// (0x0005b0aa) cell_ai5_widget_pane_g6_ParamLimits

0x9bfe,	// (0x0005b0b6) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe02,	// (0x000612ba) cell_ai5_widget_pane_g_ParamLimits

0xfe02,	// (0x000612ba) cell_ai5_widget_pane_g

0x9d6e,	// (0x0005b226) cell_ai5_widget_pane_t10_ParamLimits

0x9d6e,	// (0x0005b226) cell_ai5_widget_pane_t10

0x9db1,	// (0x0005b269) grid_ai5_widget_pane_ParamLimits

0x9e52,	// (0x0005b30a) cell_contacts_ai5_widget_pane_ParamLimits

0x9e52,	// (0x0005b30a) cell_contacts_ai5_widget_pane

0xa034,	// (0x0005b4ec) popup_discreet_window_t3_ParamLimits

0xa034,	// (0x0005b4ec) popup_discreet_window_t3

0xcd75,	// (0x0005e22d) popup_fshwr2_char_preview_window_ParamLimits

0xcd75,	// (0x0005e22d) popup_fshwr2_char_preview_window

0xf06c,	// (0x00060524) tmo_note_info_pane_t1

0xf081,	// (0x00060539) tmo_note_info_pane_t2

0xf098,	// (0x00060550) tmo_note_info_pane_t3

0xa19d,	// (0x0005b655) tmo_note_info_pane_t4

0xa1af,	// (0x0005b667) tmo_note_info_pane_t5

0x0004,

0xfe93,	// (0x0006134b) tmo_note_info_pane_t

0xa1c1,	// (0x0005b679) list_tmo_link_pane_ParamLimits

0xa1ce,	// (0x0005b686) scroll_pane_cp20_ParamLimits

0xf311,	// (0x000607c9) bg_popup_fep_char_preview_window_cp01

0xa212,	// (0x0005b6ca) popup_fshwr2_char_preview_window_t1

0xa220,	// (0x0005b6d8) popup_candi_list_indi_window_g1

0xa229,	// (0x0005b6e1) bg_cell_contacts_ai5_widget_pane

0xa235,	// (0x0005b6ed) cell_contacts_ai5_widget_pane_g1

0x7b71,	// (0x00059029) cell_contacts_ai5_widget_pane_g2

0xa24a,	// (0x0005b702) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfe9e,	// (0x00061356) cell_contacts_ai5_widget_pane_g

0xa256,	// (0x0005b70e) cell_contacts_ai5_widget_pane_t1

0x39c1,	// (0x00054e79) highlight_cell_shortcut_ai5_widget_pane_cp01

0xa2cd,	// (0x0005b785) settings_container_pane

0x4654,	// (0x00055b0c) listscroll_set_pane_copy1

0x6bb1,	// (0x00058069) scroll_pane_cp121_copy1

0x52ce,	// (0x00056786) set_content_pane_copy1

0xa2d9,	// (0x0005b791) aid_height_set_list_copy1_ParamLimits

0xa2d9,	// (0x0005b791) aid_height_set_list_copy1

0x628b,	// (0x00057743) aid_size_parent_copy1_ParamLimits

0x628b,	// (0x00057743) aid_size_parent_copy1

0xa2e5,	// (0x0005b79d) button_value_adjust_pane_cp6_copy1_ParamLimits

0xa2e5,	// (0x0005b79d) button_value_adjust_pane_cp6_copy1

0x4978,	// (0x00055e30) list_highlight_pane_cp2_copy1_ParamLimits

0x4978,	// (0x00055e30) list_highlight_pane_cp2_copy1

0xa2f9,	// (0x0005b7b1) list_set_pane_copy1_ParamLimits

0xa2f9,	// (0x0005b7b1) list_set_pane_copy1

0xa268,	// (0x0005b720) main_pane_set_t1_copy1_ParamLimits

0xa268,	// (0x0005b720) main_pane_set_t1_copy1

0xa2a2,	// (0x0005b75a) main_pane_set_t2_copy1_ParamLimits

0xa2a2,	// (0x0005b75a) main_pane_set_t2_copy1

0xa3a6,	// (0x0005b85e) main_pane_set_t3_copy1

0xa3b4,	// (0x0005b86c) main_pane_set_t4_copy1

0xa2c1,	// (0x0005b779) set_content_pane_g1_copy1_ParamLimits

0xa2c1,	// (0x0005b779) set_content_pane_g1_copy1

0xa3c2,	// (0x0005b87a) setting_code_pane_copy1

0xa3ca,	// (0x0005b882) setting_slider_graphic_pane_copy1

0xa3ca,	// (0x0005b882) setting_slider_pane_copy1

0xa3d2,	// (0x0005b88a) setting_text_pane_copy1

0xa3d2,	// (0x0005b88a) setting_volume_pane_copy1

0xa3c2,	// (0x0005b87a) settings_code_pane_cp2_copy1

0xa3da,	// (0x0005b892) settings_code_pane_cp_copy1_ParamLimits

0xa3da,	// (0x0005b892) settings_code_pane_cp_copy1

0x2967,	// (0x00053e1f) volume_set_pane_copy1

0xa3ee,	// (0x0005b8a6) volume_set_pane_g10_copy1

0xa3f6,	// (0x0005b8ae) volume_set_pane_g1_copy1

0xa3fe,	// (0x0005b8b6) volume_set_pane_g2_copy1

0xa406,	// (0x0005b8be) volume_set_pane_g3_copy1

0xa40e,	// (0x0005b8c6) volume_set_pane_g4_copy1

0xa416,	// (0x0005b8ce) volume_set_pane_g5_copy1

0xa41e,	// (0x0005b8d6) volume_set_pane_g6_copy1

0xa426,	// (0x0005b8de) volume_set_pane_g7_copy1

0xa42e,	// (0x0005b8e6) volume_set_pane_g8_copy1

0xa436,	// (0x0005b8ee) volume_set_pane_g9_copy1

0x2cca,	// (0x00054182) bg_set_opt_pane_cp_copy1_ParamLimits

0x2cca,	// (0x00054182) bg_set_opt_pane_cp_copy1

0x296f,	// (0x00053e27) setting_slider_pane_t1_copy1_ParamLimits

0x296f,	// (0x00053e27) setting_slider_pane_t1_copy1

0x298e,	// (0x00053e46) setting_slider_pane_t2_copy1_ParamLimits

0x298e,	// (0x00053e46) setting_slider_pane_t2_copy1

0x29a8,	// (0x00053e60) setting_slider_pane_t3_copy1_ParamLimits

0x29a8,	// (0x00053e60) setting_slider_pane_t3_copy1

0x29c0,	// (0x00053e78) slider_set_pane_copy1_ParamLimits

0x29c0,	// (0x00053e78) slider_set_pane_copy1

0x3a0d,	// (0x00054ec5) set_opt_bg_pane_g1_copy2

0x3a15,	// (0x00054ecd) set_opt_bg_pane_g2_copy2

0xa43e,	// (0x0005b8f6) set_opt_bg_pane_g3_copy2

0x3a25,	// (0x00054edd) set_opt_bg_pane_g4_copy2

0x3a2d,	// (0x00054ee5) set_opt_bg_pane_g5_copy2

0x3a35,	// (0x00054eed) set_opt_bg_pane_g6_copy2

0xa448,	// (0x0005b900) set_opt_bg_pane_g7_copy2

0xa450,	// (0x0005b908) set_opt_bg_pane_g8_copy2

0xa45a,	// (0x0005b912) set_opt_bg_pane_g9_copy2

0x29d6,	// (0x00053e8e) aid_size_touch_slider_mark_copy1_ParamLimits

0x29d6,	// (0x00053e8e) aid_size_touch_slider_mark_copy1

0xa464,	// (0x0005b91c) slider_set_pane_g1_copy1

0x29ea,	// (0x00053ea2) slider_set_pane_g2_copy1

0x1577,	// (0x00052a2f) slider_set_pane_g3_copy1_ParamLimits

0x1577,	// (0x00052a2f) slider_set_pane_g3_copy1

0x158b,	// (0x00052a43) slider_set_pane_g4_copy1_ParamLimits

0x158b,	// (0x00052a43) slider_set_pane_g4_copy1

0x15a3,	// (0x00052a5b) slider_set_pane_g5_copy1_ParamLimits

0x15a3,	// (0x00052a5b) slider_set_pane_g5_copy1

0x1577,	// (0x00052a2f) slider_set_pane_g6_copy1_ParamLimits

0x1577,	// (0x00052a2f) slider_set_pane_g6_copy1

0x29f2,	// (0x00053eaa) slider_set_pane_g7_copy1_ParamLimits

0x29f2,	// (0x00053eaa) slider_set_pane_g7_copy1

0x2bea,	// (0x000540a2) bg_set_opt_pane_cp2_copy1

0xa46d,	// (0x0005b925) setting_slider_graphic_pane_g1_copy1

0xa476,	// (0x0005b92e) setting_slider_graphic_pane_t1_copy1

0xa486,	// (0x0005b93e) setting_slider_graphic_pane_t2_copy1

0xa496,	// (0x0005b94e) slider_set_pane_cp_copy1

0xa4a6,	// (0x0005b95e) input_focus_pane_cp1_copy1

0xa4af,	// (0x0005b967) list_set_text_pane_copy1

0xa4b7,	// (0x0005b96f) setting_text_pane_g1_copy1

0x38be,	// (0x00054d76) set_text_pane_t1_copy1

0xa4a6,	// (0x0005b95e) input_focus_pane_cp2_copy1

0xa4b7,	// (0x0005b96f) setting_code_pane_g1_copy1

0xa4c0,	// (0x0005b978) setting_code_pane_t1_copy1

0x69d9,	// (0x00057e91) list_set_graphic_pane_copy1

0x2bea,	// (0x000540a2) bg_set_opt_pane_cp4_copy1

0x435b,	// (0x00055813) list_set_graphic_pane_g1_copy1_ParamLimits

0x435b,	// (0x00055813) list_set_graphic_pane_g1_copy1

0xa4ce,	// (0x0005b986) list_set_graphic_pane_g2_copy1

0x4373,	// (0x0005582b) list_set_graphic_pane_t1_copy1_ParamLimits

0x4373,	// (0x0005582b) list_set_graphic_pane_t1_copy1

0x74d3,	// (0x0005898b) rs_clock_indi_pane_g1

0xa4d6,	// (0x0005b98e) rs_clock_indi_pane_t1

0xa4e4,	// (0x0005b99c) rs_indi_pane

0xa4ec,	// (0x0005b9a4) rs_indi_pane_g1

0xa4f5,	// (0x0005b9ad) rs_indi_pane_g2

0xa4fe,	// (0x0005b9b6) rs_indi_pane_g3

0x0002,

0xfea5,	// (0x0006135d) rs_indi_pane_g

0x4654,	// (0x00055b0c) bg_popup_preview_window_pane_cp03

0xa507,	// (0x0005b9bf) popup_fep_tooltip_window_t1

0x815b,	// (0x00059613) popup_note2_window_g2_ParamLimits

0x815b,	// (0x00059613) popup_note2_window_g2

0x0001,

0xfc32,	// (0x000610ea) popup_note2_window_g_ParamLimits

0xfc32,	// (0x000610ea) popup_note2_window_g

0x8656,	// (0x00059b0e) bg_popup_sub_pane_cp11_ParamLimits

0x8663,	// (0x00059b1b) cell_ai3_links_pane_g1_ParamLimits

0x867a,	// (0x00059b32) cell_ai3_links_pane_t1

0x38be,	// (0x00054d76) set_text_pane_t1_copy1_ParamLimits

0xd0dc,	// (0x0005e594) cell_graphic_popup_pane_cp2_ParamLimits

0xd0dc,	// (0x0005e594) cell_graphic_popup_pane_cp2

0xa515,	// (0x0005b9cd) cell_graphic_popup_pane_g1_cp2

0x32a2,	// (0x0005475a) cell_graphic_popup_pane_g2_cp2

0xa51d,	// (0x0005b9d5) cell_graphic_popup_pane_g3_cp2

0xa525,	// (0x0005b9dd) cell_graphic_popup_pane_t2_cp2

0x32b3,	// (0x0005476b) grid_highlight_pane_cp3_cp2

0x3d65,	// (0x0005521d) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x39c1,	// (0x00054e79) main_tmo_pane_ParamLimits

0xe2ab,	// (0x0005f763) popup_tmo_big_image_note_window

0x9b7e,	// (0x0005b036) cell_ai5_widget_list_pane

0x9b86,	// (0x0005b03e) cell_ai5_widget_lrg_icon_pane

0xf06c,	// (0x00060524) tmo_note_info_pane_t1_ParamLimits

0xf081,	// (0x00060539) tmo_note_info_pane_t2_ParamLimits

0xf098,	// (0x00060550) tmo_note_info_pane_t3_ParamLimits

0xa19d,	// (0x0005b655) tmo_note_info_pane_t4_ParamLimits

0xa1af,	// (0x0005b667) tmo_note_info_pane_t5_ParamLimits

0xfe93,	// (0x0006134b) tmo_note_info_pane_t_ParamLimits

0xa2cd,	// (0x0005b785) settings_container_pane_ParamLimits

0xa49e,	// (0x0005b956) indicator_popup_pane_cp5

0xa49e,	// (0x0005b956) indicator_popup_pane_cp6

0x69d9,	// (0x00057e91) list_set_graphic_pane_copy1_ParamLimits

0xdbfc,	// (0x0005f0b4) bg_popup_window_pane_cp23

0xa533,	// (0x0005b9eb) popup_tmo_big_image_note_window_g1

0xa53d,	// (0x0005b9f5) popup_tmo_big_image_note_window_t1

0xa54d,	// (0x0005ba05) popup_tmo_big_image_note_window_t2

0xa55d,	// (0x0005ba15) popup_tmo_big_image_note_window_t3

0x0002,

0xfeac,	// (0x00061364) popup_tmo_big_image_note_window_t

0x74d3,	// (0x0005898b) cell_ai5_widget_lrg_icon_pane_g1

0xa56d,	// (0x0005ba25) cell_ai5_widget_lrg_icon_pane_t1

0xa57b,	// (0x0005ba33) cell_ai5_widget_list_row_pane_ParamLimits

0xa57b,	// (0x0005ba33) cell_ai5_widget_list_row_pane

0xa592,	// (0x0005ba4a) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xa592,	// (0x0005ba4a) cell_ai5_widget_list_row_pane_g1

0xa59f,	// (0x0005ba57) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xa59f,	// (0x0005ba57) cell_ai5_widget_list_row_pane_t1

0xa5d0,	// (0x0005ba88) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xa5d0,	// (0x0005ba88) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfeb3,	// (0x0006136b) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeb3,	// (0x0006136b) cell_ai5_widget_list_row_pane_t

0xf311,	// (0x000607c9) main_fep_vtchi_ss_pane

0xa620,	// (0x0005bad8) popup_fep_char_pre_window

0xa628,	// (0x0005bae0) popup_fep_ituss_window

0xf0d7,	// (0x0006058f) popup_fep_vkbss_window

0x4978,	// (0x00055e30) grid_vkbss_keypad_pane_ParamLimits

0x4978,	// (0x00055e30) grid_vkbss_keypad_pane

0x4978,	// (0x00055e30) ituss_keypad_pane

0x2a14,	// (0x00053ecc) aid_vkbss_key_offset_ParamLimits

0x2a14,	// (0x00053ecc) aid_vkbss_key_offset

0xce8e,	// (0x0005e346) cell_vkbss_key_pane_ParamLimits

0xce8e,	// (0x0005e346) cell_vkbss_key_pane

0xa694,	// (0x0005bb4c) bg_cell_vkbss_key_g1_ParamLimits

0xa694,	// (0x0005bb4c) bg_cell_vkbss_key_g1

0xf0e4,	// (0x0006059c) cell_vkbss_key_3p_pane_ParamLimits

0xf0e4,	// (0x0006059c) cell_vkbss_key_3p_pane

0xf11a,	// (0x000605d2) cell_vkbss_key_g1_ParamLimits

0xf11a,	// (0x000605d2) cell_vkbss_key_g1

0xf150,	// (0x00060608) cell_vkbss_key_t1_ParamLimits

0xf150,	// (0x00060608) cell_vkbss_key_t1

0x2a78,	// (0x00053f30) cell_ituss_key_pane_ParamLimits

0x2a78,	// (0x00053f30) cell_ituss_key_pane

0xa768,	// (0x0005bc20) bg_cell_ituss_key_g1_ParamLimits

0xa768,	// (0x0005bc20) bg_cell_ituss_key_g1

0xa774,	// (0x0005bc2c) cell_ituss_key_pane_g1_ParamLimits

0xa774,	// (0x0005bc2c) cell_ituss_key_pane_g1

0x2a89,	// (0x00053f41) cell_ituss_key_pane_g2_ParamLimits

0x2a89,	// (0x00053f41) cell_ituss_key_pane_g2

0x0005,

0xfeba,	// (0x00061372) cell_ituss_key_pane_g_ParamLimits

0xfeba,	// (0x00061372) cell_ituss_key_pane_g

0x2b0d,	// (0x00053fc5) cell_ituss_key_t1_ParamLimits

0x2b0d,	// (0x00053fc5) cell_ituss_key_t1

0x2b47,	// (0x00053fff) cell_ituss_key_t2_ParamLimits

0x2b47,	// (0x00053fff) cell_ituss_key_t2

0x2b78,	// (0x00054030) cell_ituss_key_t3_ParamLimits

0x2b78,	// (0x00054030) cell_ituss_key_t3

0x2b47,	// (0x00053fff) cell_ituss_key_t4_ParamLimits

0x2b47,	// (0x00053fff) cell_ituss_key_t4

0x0004,

0xfec7,	// (0x0006137f) cell_ituss_key_t_ParamLimits

0xfec7,	// (0x0006137f) cell_ituss_key_t

0xf1ac,	// (0x00060664) cell_vkbss_key_3p_pane_g1

0xf1b4,	// (0x0006066c) cell_vkbss_key_3p_pane_g2

0xf1bc,	// (0x00060674) cell_vkbss_key_3p_pane_g3

0x0002,

0xfed2,	// (0x0006138a) cell_vkbss_key_3p_pane_g

0x4654,	// (0x00055b0c) bg_popup_fep_char_preview_window_cp02

0xa7b2,	// (0x0005bc6a) popup_fep_char_pre_window_t1

0xefbc,	// (0x00060474) main_ai5_sk_pane

0xa229,	// (0x0005b6e1) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xa235,	// (0x0005b6ed) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x7b71,	// (0x00059029) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa24a,	// (0x0005b702) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfe9e,	// (0x00061356) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa256,	// (0x0005b70e) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x39c1,	// (0x00054e79) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf1c4,	// (0x0006067c) main_ai5_sk_pane_g1

0x536a,	// (0x00056822) popup_query_code_window_g1

0xf0c8,	// (0x00060580) popup_fep_vkb_icf_pane

0xa66b,	// (0x0005bb23) popup_fep_vtchi_icf_pane

0x4978,	// (0x00055e30) bg_icf_pane

0x4978,	// (0x00055e30) list_vkb_icf_pane

0xa7c9,	// (0x0005bc81) bg_icf_pane_cp01

0x4654,	// (0x00055b0c) vtchi_icf_list_pane

0xf219,	// (0x000606d1) list_vkb_icf_pane_t1_ParamLimits

0xf219,	// (0x000606d1) list_vkb_icf_pane_t1

0xa85d,	// (0x0005bd15) vtchi_icf_list_pane_t1_ParamLimits

0xa85d,	// (0x0005bd15) vtchi_icf_list_pane_t1

0xa628,	// (0x0005bae0) popup_fep_ituss_window_ParamLimits

0xa66b,	// (0x0005bb23) popup_fep_vtchi_icf_pane_ParamLimits

0x4978,	// (0x00055e30) ituss_keypad_pane_ParamLimits

0x2a08,	// (0x00053ec0) ituss_sks_pane

0x4978,	// (0x00055e30) bg_icf_pane_ParamLimits

0xf0ad,	// (0x00060565) icf_edit_indi_pane_ParamLimits

0xf0ad,	// (0x00060565) icf_edit_indi_pane

0x4978,	// (0x00055e30) list_vkb_icf_pane_ParamLimits

0xa7c9,	// (0x0005bc81) bg_icf_pane_cp01_ParamLimits

0xa613,	// (0x0005bacb) icf_edit_indi_pane_cp01_ParamLimits

0xa613,	// (0x0005bacb) icf_edit_indi_pane_cp01

0xa7dc,	// (0x0005bc94) vtchi_query_pane

0x997b,	// (0x0005ae33) icf_edit_indi_pane_g1_ParamLimits

0x997b,	// (0x0005ae33) icf_edit_indi_pane_g1

0xf230,	// (0x000606e8) icf_edit_indi_pane_g2_ParamLimits

0xf230,	// (0x000606e8) icf_edit_indi_pane_g2

0x0001,

0xfefd,	// (0x000613b5) icf_edit_indi_pane_g_ParamLimits

0xfefd,	// (0x000613b5) icf_edit_indi_pane_g

0xf244,	// (0x000606fc) icf_edit_indi_pane_t1

0xa87b,	// (0x0005bd33) bg_input_focus_pane_cp042

0x38d8,	// (0x00054d90) vtchi_button_pane

0xa884,	// (0x0005bd3c) vtchi_query_pane_t1

0xa892,	// (0x0005bd4a) vtchi_query_pane_t2

0xa8a0,	// (0x0005bd58) vtchi_query_pane_t3

0x0002,

0xfeec,	// (0x000613a4) vtchi_query_pane_t

0xf311,	// (0x000607c9) bg_button_pane_cp13

0xa8ae,	// (0x0005bd66) vtchi_button_pane_g1

0x2bbb,	// (0x00054073) ituss_sks_pane_g1

0x2bc6,	// (0x0005407e) ituss_sks_pane_g2

0x0001,

0xfef3,	// (0x000613ab) ituss_sks_pane_g

0xa8b6,	// (0x0005bd6e) ituss_sks_pane_t1

0xa8c4,	// (0x0005bd7c) ituss_sks_pane_t2

0x0001,

0xfef8,	// (0x000613b0) ituss_sks_pane_t

0x6f55,	// (0x0005840d) indicator_nsta_pane_cp_g1

0x6f5e,	// (0x00058416) indicator_nsta_pane_cp_g2

0x6f66,	// (0x0005841e) indicator_nsta_pane_cp_g3

0x6f6e,	// (0x00058426) indicator_nsta_pane_cp_g4

0x6f5e,	// (0x00058416) indicator_nsta_pane_cp_g5

0x6f66,	// (0x0005841e) indicator_nsta_pane_cp_g6

0x0005,

0xfa70,	// (0x00060f28) indicator_nsta_pane_cp_g

0xedcd,	// (0x00060285) cell_graphic2_pane_t2_ParamLimits

0xedcd,	// (0x00060285) cell_graphic2_pane_t2

0x0001,

0xfd89,	// (0x00061241) cell_graphic2_pane_t_ParamLimits

0xfd89,	// (0x00061241) cell_graphic2_pane_t

0xee02,	// (0x000602ba) cell_graphic2_control_pane_t1

0xd0a5,	// (0x0005e55d) signal_pane_g3_ParamLimits

0xd0a5,	// (0x0005e55d) signal_pane_g3

0xd0b9,	// (0x0005e571) signal_pane_g4_ParamLimits

0xd0b9,	// (0x0005e571) signal_pane_g4

0xa5e2,	// (0x0005ba9a) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xa5e2,	// (0x0005ba9a) cell_ai5_widget_list_row_pane_t3

0xa788,	// (0x0005bc40) cell_ituss_key_pane_t1_ParamLimits

0xa788,	// (0x0005bc40) cell_ituss_key_pane_t1

0x4fa7,	// (0x0005645f) form_field_data_wide_pane_vc_t2_ParamLimits

0x4fa7,	// (0x0005645f) form_field_data_wide_pane_vc_t2

0x4fbb,	// (0x00056473) form_field_data_wide_pane_vc_t3_ParamLimits

0x4fbb,	// (0x00056473) form_field_data_wide_pane_vc_t3

0x0002,

0xf7e4,	// (0x00060c9c) form_field_data_wide_pane_vc_t_ParamLimits

0xf7e4,	// (0x00060c9c) form_field_data_wide_pane_vc_t

0x6bf3,	// (0x000580ab) form_field_slider_wide_pane_vc_t3_ParamLimits

0x6bf3,	// (0x000580ab) form_field_slider_wide_pane_vc_t3

0x6cdd,	// (0x00058195) form_field_popup_wide_pane_vc_t2_ParamLimits

0x6cdd,	// (0x00058195) form_field_popup_wide_pane_vc_t2

0x6cf4,	// (0x000581ac) form_field_popup_wide_pane_vc_t3_ParamLimits

0x6cf4,	// (0x000581ac) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa5f,	// (0x00060f17) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa5f,	// (0x00060f17) form_field_popup_wide_pane_vc_t

0xccdf,	// (0x0005e197) aid_fshwr2_btn_pane_ParamLimits

0xccf3,	// (0x0005e1ab) aid_fshwr2_syb_pane_ParamLimits

0xcd07,	// (0x0005e1bf) aid_fshwr2_txt_pane_ParamLimits

0x2031,	// (0x000534e9) fshwr2_bg_pane_ParamLimits

0xcd17,	// (0x0005e1cf) fshwr2_func_candi_pane_ParamLimits

0xcd37,	// (0x0005e1ef) fshwr2_hwr_syb_pane_ParamLimits

0xcd59,	// (0x0005e211) fshwr2_icf_pane_ParamLimits

0x3630,	// (0x00054ae8) list_double_graphic_pane_vc_g4_ParamLimits

0x3630,	// (0x00054ae8) list_double_graphic_pane_vc_g4

0x2aa9,	// (0x00053f61) cell_ituss_key_pane_g3_ParamLimits

0x2aa9,	// (0x00053f61) cell_ituss_key_pane_g3

0x2ba9,	// (0x00054061) cell_ituss_key_t5_ParamLimits

0x2ba9,	// (0x00054061) cell_ituss_key_t5

0xf0d7,	// (0x0006058f) popup_fep_vkbss_window_ParamLimits

0x9b09,	// (0x0005afc1) aid_cell_ai5_quarter

0xf244,	// (0x000606fc) icf_edit_indi_pane_t1_ParamLimits

0x2ffb,	// (0x000544b3) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x2ffb,	// (0x000544b3) aid_tch_indicator_popup_pane_cp2

0x300e,	// (0x000544c6) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x300e,	// (0x000544c6) aid_tch_query_popup_data_pane_cp2

0x5312,	// (0x000567ca) aid_tch_query_popup_pane_ParamLimits

0x5312,	// (0x000567ca) aid_tch_query_popup_pane

0x5312,	// (0x000567ca) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x5312,	// (0x000567ca) aid_tch_query_popup_data_pane_cp1

0x4978,	// (0x00055e30) cell_fshwr2_syb_bg_pane_ParamLimits

0xce65,	// (0x0005e31d) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0xce78,	// (0x0005e330) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xf0c8,	// (0x00060580) popup_fep_vkb_icf_pane_ParamLimits

0xcc6b,	// (0x0005e123) bg_popup_fep_char_preview_window_g10

0x9c46,	// (0x0005b0fe) cell_ai5_widget_pane_g11_ParamLimits

0x9c46,	// (0x0005b0fe) cell_ai5_widget_pane_g11

0x9c52,	// (0x0005b10a) cell_ai5_widget_pane_g12_ParamLimits

0x9c52,	// (0x0005b10a) cell_ai5_widget_pane_g12

0x9c5e,	// (0x0005b116) cell_ai5_widget_pane_g13_ParamLimits

0x9c5e,	// (0x0005b116) cell_ai5_widget_pane_g13

0x9d8d,	// (0x0005b245) cell_ai5_widget_pane_t11_ParamLimits

0x9d8d,	// (0x0005b245) cell_ai5_widget_pane_t11

0x9d9f,	// (0x0005b257) cell_ai5_widget_pane_t12_ParamLimits

0x9d9f,	// (0x0005b257) cell_ai5_widget_pane_t12

0x2ab5,	// (0x00053f6d) cell_ituss_key_pane_g4_ParamLimits

0x2ab5,	// (0x00053f6d) cell_ituss_key_pane_g4

0x2ad1,	// (0x00053f89) cell_ituss_key_pane_g5_ParamLimits

0x2ad1,	// (0x00053f89) cell_ituss_key_pane_g5

0x2aed,	// (0x00053fa5) cell_ituss_key_pane_g6_ParamLimits

0x2aed,	// (0x00053fa5) cell_ituss_key_pane_g6

0x4ea2,	// (0x0005635a) bg_icf_pane_g1

0xf1cd,	// (0x00060685) bg_icf_pane_g2

0xf1d7,	// (0x0006068f) bg_icf_pane_g3

0xf1df,	// (0x00060697) bg_icf_pane_g4

0xf1e9,	// (0x000606a1) bg_icf_pane_g5

0xf1f3,	// (0x000606ab) bg_icf_pane_g6

0xf1fd,	// (0x000606b5) bg_icf_pane_g7

0xf205,	// (0x000606bd) bg_icf_pane_g8

0xf20f,	// (0x000606c7) bg_icf_pane_g9

0x0008,

0xfed9,	// (0x00061391) bg_icf_pane_g

0xa681,	// (0x0005bb39) popup_hyb_candi_window_ParamLimits

0xa681,	// (0x0005bb39) popup_hyb_candi_window

0x4f16,	// (0x000563ce) bg_popup_sub_pane_cp01_ParamLimits

0x4f16,	// (0x000563ce) bg_popup_sub_pane_cp01

0xa8ff,	// (0x0005bdb7) entry_hyb_candi_pane_ParamLimits

0xa8ff,	// (0x0005bdb7) entry_hyb_candi_pane

0xa90e,	// (0x0005bdc6) grid_hyb_candi_pane_ParamLimits

0xa90e,	// (0x0005bdc6) grid_hyb_candi_pane

0xa923,	// (0x0005bddb) grid_hyb_phrase_pane_ParamLimits

0xa923,	// (0x0005bddb) grid_hyb_phrase_pane

0xa932,	// (0x0005bdea) cell_hyb_candi_pane_ParamLimits

0xa932,	// (0x0005bdea) cell_hyb_candi_pane

0xa955,	// (0x0005be0d) cell_hyb_candi_scroll_pane

0x404a,	// (0x00055502) cell_hyb_candi_pane_g1

0xa95e,	// (0x0005be16) cell_hyb_candi_pane_t1

0xa96c,	// (0x0005be24) cell_hyb_phrase_pane

0x404a,	// (0x00055502) cell_hyb_phrase_pane_g1

0xa975,	// (0x0005be2d) cell_hyb_phrase_pane_t1

0xa983,	// (0x0005be3b) entry_hyb_candi_pane_t1

0x4654,	// (0x00055b0c) input_focus_pane_cp06

0xa991,	// (0x0005be49) cell_hyb_candi_scroll_pane_g1

0xa999,	// (0x0005be51) cell_hyb_candi_scroll_pane_g1_aid

0xa9a1,	// (0x0005be59) cell_hyb_candi_scroll_pane_g2

0xa9a9,	// (0x0005be61) cell_hyb_candi_scroll_pane_g2_aid

0xa9b1,	// (0x0005be69) cell_hyb_candi_scroll_pane_g3

0xa9b9,	// (0x0005be71) cell_hyb_candi_scroll_pane_g4
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

} // end of namespace AknLayoutScalable_Abrw_phl_av_qhd_lsc_tch_Large

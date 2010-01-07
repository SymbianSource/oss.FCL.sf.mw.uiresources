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

#include "aknlayoutscalable_abrw_pql_av_qvga_lsc_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt[]; }

namespace AknLayoutScalable_Abrw_pql_av_qvga_lsc_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt + 0x0001af2d };

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
0x2056,	// (0x0001cf83) Screen

0x2060,	// (0x0001cf8d) application_window_ParamLimits

0x2060,	// (0x0001cf8d) application_window

0x4e3d,	// (0x0001fd6a) screen_g1

0x208e,	// (0x0001cfbb) area_bottom_pane_ParamLimits

0x208e,	// (0x0001cfbb) area_bottom_pane

0x4e47,	// (0x0001fd74) area_top_pane_ParamLimits

0x4e47,	// (0x0001fd74) area_top_pane

0x722a,	// (0x00022157) main_pane_ParamLimits

0x722a,	// (0x00022157) main_pane

0x4ebf,	// (0x0001fdec) misc_graphics

0x3030,	// (0x0001df5d) battery_pane_ParamLimits

0x3030,	// (0x0001df5d) battery_pane

0x9a63,	// (0x00024990) bg_status_flat_pane_g8

0x9a6b,	// (0x00024998) bg_status_flat_pane_g9

0x9200,	// (0x0002412d) context_pane_ParamLimits

0x9200,	// (0x0002412d) context_pane

0x318a,	// (0x0001e0b7) navi_pane_ParamLimits

0x318a,	// (0x0001e0b7) navi_pane

0x31ff,	// (0x0001e12c) signal_pane_ParamLimits

0x31ff,	// (0x0001e12c) signal_pane

0x0008,

0xf8a6,	// (0x0002a7d3) bg_status_flat_pane_g

0x328b,	// (0x0001e1b8) status_pane_g1_ParamLimits

0x328b,	// (0x0001e1b8) status_pane_g1

0x3297,	// (0x0001e1c4) status_pane_g2_ParamLimits

0x3297,	// (0x0001e1c4) status_pane_g2

0x9266,	// (0x00024193) status_pane_g3_ParamLimits

0x9266,	// (0x00024193) status_pane_g3

0x0004,

0xf7e0,	// (0x0002a70d) status_pane_g_ParamLimits

0xf7e0,	// (0x0002a70d) status_pane_g

0x32a3,	// (0x0001e1d0) title_pane_ParamLimits

0x32a3,	// (0x0001e1d0) title_pane

0x32fe,	// (0x0001e22b) uni_indicator_pane_ParamLimits

0x32fe,	// (0x0001e22b) uni_indicator_pane

0x9056,	// (0x00023f83) bg_list_pane_ParamLimits

0x9056,	// (0x00023f83) bg_list_pane

0x1db4,	// (0x0001cce1) find_pane

0x2a15,	// (0x0001d942) listscroll_app_pane_ParamLimits

0x2a15,	// (0x0001d942) listscroll_app_pane

0x9076,	// (0x00023fa3) listscroll_form_pane

0x1dbc,	// (0x0001cce9) listscroll_gen_pane_ParamLimits

0x1dbc,	// (0x0001cce9) listscroll_gen_pane

0x9076,	// (0x00023fa3) listscroll_set_pane

0x2a21,	// (0x0001d94e) main_idle_act_pane

0x6530,	// (0x0002145d) main_idle_trad_pane

0x6530,	// (0x0002145d) main_list_empty_pane

0x9090,	// (0x00023fbd) main_midp_pane

0x909c,	// (0x00023fc9) main_pane_g1_ParamLimits

0x909c,	// (0x00023fc9) main_pane_g1

0x2a34,	// (0x0001d961) popup_ai_message_window_ParamLimits

0x2a34,	// (0x0001d961) popup_ai_message_window

0x2ab8,	// (0x0001d9e5) popup_fep_china_uni_window_ParamLimits

0x2ab8,	// (0x0001d9e5) popup_fep_china_uni_window

0x90cc,	// (0x00023ff9) popup_fep_japan_candidate_window_ParamLimits

0x90cc,	// (0x00023ff9) popup_fep_japan_candidate_window

0x90ea,	// (0x00024017) popup_fep_japan_predictive_window_ParamLimits

0x90ea,	// (0x00024017) popup_fep_japan_predictive_window

0x2af6,	// (0x0001da23) popup_find_window

0x2b0f,	// (0x0001da3c) popup_grid_graphic_window_ParamLimits

0x2b0f,	// (0x0001da3c) popup_grid_graphic_window

0x9116,	// (0x00024043) popup_large_graphic_colour_window

0x2b8b,	// (0x0001dab8) popup_menu_window_ParamLimits

0x2b8b,	// (0x0001dab8) popup_menu_window

0x2ce9,	// (0x0001dc16) popup_note_image_window

0x2cb1,	// (0x0001dbde) popup_note_wait_window_ParamLimits

0x2cb1,	// (0x0001dbde) popup_note_wait_window

0x2cff,	// (0x0001dc2c) popup_note_window_ParamLimits

0x2cff,	// (0x0001dc2c) popup_note_window

0x2d93,	// (0x0001dcc0) popup_query_code_window_ParamLimits

0x2d93,	// (0x0001dcc0) popup_query_code_window

0x9135,	// (0x00024062) popup_query_data_code_window_ParamLimits

0x9135,	// (0x00024062) popup_query_data_code_window

0x2dcb,	// (0x0001dcf8) popup_query_data_window_ParamLimits

0x2dcb,	// (0x0001dcf8) popup_query_data_window

0x2e3f,	// (0x0001dd6c) popup_query_sat_info_window_ParamLimits

0x2e3f,	// (0x0001dd6c) popup_query_sat_info_window

0x2ecc,	// (0x0001ddf9) popup_snote_single_graphic_window_ParamLimits

0x2ecc,	// (0x0001ddf9) popup_snote_single_graphic_window

0x2ecc,	// (0x0001ddf9) popup_snote_single_text_window_ParamLimits

0x2ecc,	// (0x0001ddf9) popup_snote_single_text_window

0x914a,	// (0x00024077) popup_sub_window_general

0x918c,	// (0x000240b9) popup_window_general_ParamLimits

0x918c,	// (0x000240b9) popup_window_general

0x919f,	// (0x000240cc) power_save_pane

0xe1b0,	// (0x000290dd) control_pane_g1_ParamLimits

0xe1b0,	// (0x000290dd) control_pane_g1

0x7e45,	// (0x00022d72) control_pane_g2_ParamLimits

0x7e45,	// (0x00022d72) control_pane_g2

0x673c,	// (0x00021669) control_pane_g3_ParamLimits

0x673c,	// (0x00021669) control_pane_g3

0x0007,

0xf7c8,	// (0x0002a6f5) control_pane_g_ParamLimits

0xf7c8,	// (0x0002a6f5) control_pane_g

0xe1e6,	// (0x00029113) control_pane_t1_ParamLimits

0xe1e6,	// (0x00029113) control_pane_t1

0xe242,	// (0x0002916f) control_pane_t2_ParamLimits

0xe242,	// (0x0002916f) control_pane_t2

0x0002,

0xf7d9,	// (0x0002a706) control_pane_t_ParamLimits

0xf7d9,	// (0x0002a706) control_pane_t

0x665f,	// (0x0002158c) navi_navi_volume_pane_cp1

0x6668,	// (0x00021595) status_small_icon_pane

0x6670,	// (0x0002159d) status_small_pane_g1_ParamLimits

0x6670,	// (0x0002159d) status_small_pane_g1

0x66a4,	// (0x000215d1) status_small_pane_g2_ParamLimits

0x66a4,	// (0x000215d1) status_small_pane_g2

0x66b0,	// (0x000215dd) status_small_pane_g3_ParamLimits

0x66b0,	// (0x000215dd) status_small_pane_g3

0x66bc,	// (0x000215e9) status_small_pane_g4_ParamLimits

0x66bc,	// (0x000215e9) status_small_pane_g4

0x66c8,	// (0x000215f5) status_small_pane_g5_ParamLimits

0x66c8,	// (0x000215f5) status_small_pane_g5

0x66d5,	// (0x00021602) status_small_pane_g6_ParamLimits

0x66d5,	// (0x00021602) status_small_pane_g6

0x0007,

0xf7b7,	// (0x0002a6e4) status_small_pane_g_ParamLimits

0xf7b7,	// (0x0002a6e4) status_small_pane_g

0x6705,	// (0x00021632) status_small_pane_t1

0x6728,	// (0x00021655) status_small_wait_pane_ParamLimits

0x6728,	// (0x00021655) status_small_wait_pane

0x2784,	// (0x0001d6b1) aid_levels_signal_ParamLimits

0x2784,	// (0x0001d6b1) aid_levels_signal

0x2798,	// (0x0001d6c5) signal_pane_g1_ParamLimits

0x2798,	// (0x0001d6c5) signal_pane_g1

0x27b2,	// (0x0001d6df) signal_pane_g2_ParamLimits

0x27b2,	// (0x0001d6df) signal_pane_g2

0x0001,

0xf74c,	// (0x0002a679) signal_pane_g_ParamLimits

0xf74c,	// (0x0002a679) signal_pane_g

0x60b7,	// (0x00020fe4) context_pane_g1

0x21de,	// (0x0001d10b) title_pane_g1

0x2220,	// (0x0001d14d) title_pane_t1

0x4ed5,	// (0x0001fe02) title_pane_t2

0x4efb,	// (0x0001fe28) title_pane_t3

0x0002,

0xf59b,	// (0x0002a4c8) title_pane_t

0x3324,	// (0x0001e251) aid_levels_battery_ParamLimits

0x3324,	// (0x0001e251) aid_levels_battery

0x333c,	// (0x0001e269) battery_pane_g1_ParamLimits

0x333c,	// (0x0001e269) battery_pane_g1

0x3357,	// (0x0001e284) battery_pane_g2_ParamLimits

0x3357,	// (0x0001e284) battery_pane_g2

0x0001,

0xf7eb,	// (0x0002a718) battery_pane_g_ParamLimits

0xf7eb,	// (0x0002a718) battery_pane_g

0x36c6,	// (0x0001e5f3) uni_indicator_pane_g1

0x36db,	// (0x0001e608) uni_indicator_pane_g2

0x36f1,	// (0x0001e61e) uni_indicator_pane_g3

0x0005,

0xf94e,	// (0x0002a87b) uni_indicator_pane_g

0x5c2b,	// (0x00020b58) navi_icon_pane_ParamLimits

0x5c2b,	// (0x00020b58) navi_icon_pane

0x4ebf,	// (0x0001fdec) navi_midp_pane

0x4ebf,	// (0x0001fdec) navi_navi_pane

0x5c2b,	// (0x00020b58) navi_text_pane_ParamLimits

0x5c2b,	// (0x00020b58) navi_text_pane

0x4e3d,	// (0x0001fd6a) status_small_wait_pane_g1

0x5216,	// (0x00020143) status_small_wait_pane_g2

0x0001,

0xf949,	// (0x0002a876) status_small_wait_pane_g

0x366c,	// (0x0001e599) navi_navi_icon_text_pane

0x3686,	// (0x0001e5b3) navi_navi_pane_g1_ParamLimits

0x3686,	// (0x0001e5b3) navi_navi_pane_g1

0x3674,	// (0x0001e5a1) navi_navi_pane_g2_ParamLimits

0x3674,	// (0x0001e5a1) navi_navi_pane_g2

0x0001,

0xf917,	// (0x0002a844) navi_navi_pane_g_ParamLimits

0xf917,	// (0x0002a844) navi_navi_pane_g

0x3698,	// (0x0001e5c5) navi_navi_tabs_pane

0x366c,	// (0x0001e599) navi_navi_text_pane

0x366c,	// (0x0001e599) navi_navi_volume_pane

0x9fb5,	// (0x00024ee2) navi_text_pane_t1

0x9fa9,	// (0x00024ed6) navi_icon_pane_g1

0x9efd,	// (0x00024e2a) navi_navi_text_pane_t1

0x820a,	// (0x00023137) navi_navi_volume_pane_g1

0xe431,	// (0x0002935e) volume_small_pane

0x35bf,	// (0x0001e4ec) navi_navi_icon_text_pane_g1

0x35c7,	// (0x0001e4f4) navi_navi_icon_text_pane_t1

0x9aab,	// (0x000249d8) navi_tabs_2_long_pane

0x9aab,	// (0x000249d8) navi_tabs_2_pane

0x9aab,	// (0x000249d8) navi_tabs_3_long_pane

0x9aab,	// (0x000249d8) navi_tabs_3_pane

0x9aab,	// (0x000249d8) navi_tabs_4_pane

0xe411,	// (0x0002933e) tabs_2_active_pane_ParamLimits

0xe411,	// (0x0002933e) tabs_2_active_pane

0xe421,	// (0x0002934e) tabs_2_passive_pane_ParamLimits

0xe421,	// (0x0002934e) tabs_2_passive_pane

0xe3df,	// (0x0002930c) tabs_3_active_pane_ParamLimits

0xe3df,	// (0x0002930c) tabs_3_active_pane

0xe3ef,	// (0x0002931c) tabs_3_passive_pane_ParamLimits

0xe3ef,	// (0x0002931c) tabs_3_passive_pane

0xe400,	// (0x0002932d) tabs_3_passive_pane_cp_ParamLimits

0xe400,	// (0x0002932d) tabs_3_passive_pane_cp

0xe39b,	// (0x000292c8) tabs_4_active_pane_ParamLimits

0xe39b,	// (0x000292c8) tabs_4_active_pane

0xe3ac,	// (0x000292d9) tabs_4_passive_pane_ParamLimits

0xe3ac,	// (0x000292d9) tabs_4_passive_pane

0xe3bd,	// (0x000292ea) tabs_4_passive_pane_cp_ParamLimits

0xe3bd,	// (0x000292ea) tabs_4_passive_pane_cp

0xe3ce,	// (0x000292fb) tabs_4_passive_pane_cp2_ParamLimits

0xe3ce,	// (0x000292fb) tabs_4_passive_pane_cp2

0xe37b,	// (0x000292a8) tabs_2_long_active_pane_ParamLimits

0xe37b,	// (0x000292a8) tabs_2_long_active_pane

0xe38b,	// (0x000292b8) tabs_2_long_passive_pane_ParamLimits

0xe38b,	// (0x000292b8) tabs_2_long_passive_pane

0xe344,	// (0x00029271) tabs_3_long_active_pane_ParamLimits

0xe344,	// (0x00029271) tabs_3_long_active_pane

0xe357,	// (0x00029284) tabs_3_long_passive_pane_ParamLimits

0xe357,	// (0x00029284) tabs_3_long_passive_pane

0xe368,	// (0x00029295) tabs_3_long_passive_pane_cp_ParamLimits

0xe368,	// (0x00029295) tabs_3_long_passive_pane_cp

0x80c5,	// (0x00022ff2) volume_small_pane_g1

0x80ce,	// (0x00022ffb) volume_small_pane_g2

0x80d7,	// (0x00023004) volume_small_pane_g3

0x80e0,	// (0x0002300d) volume_small_pane_g4

0x80e9,	// (0x00023016) volume_small_pane_g5

0x80f2,	// (0x0002301f) volume_small_pane_g6

0x80fb,	// (0x00023028) volume_small_pane_g7

0x8104,	// (0x00023031) volume_small_pane_g8

0x810d,	// (0x0002303a) volume_small_pane_g9

0x8116,	// (0x00023043) volume_small_pane_g10

0x0009,

0xf8e3,	// (0x0002a810) volume_small_pane_g

0x4f0d,	// (0x0001fe3a) bg_active_tab_pane_cp2_ParamLimits

0x4f0d,	// (0x0001fe3a) bg_active_tab_pane_cp2

0x4f1b,	// (0x0001fe48) tabs_3_active_pane_g1

0x22ad,	// (0x0001d1da) tabs_3_active_pane_t1

0x4f0d,	// (0x0001fe3a) bg_passive_tab_pane_cp2_ParamLimits

0x4f0d,	// (0x0001fe3a) bg_passive_tab_pane_cp2

0x4f1b,	// (0x0001fe48) tabs_3_passive_pane_g1

0x22ad,	// (0x0001d1da) tabs_3_passive_pane_t1

0x4f0d,	// (0x0001fe3a) bg_active_tab_pane_cp3_ParamLimits

0x4f0d,	// (0x0001fe3a) bg_active_tab_pane_cp3

0xa4f7,	// (0x00025424) tabs_4_active_pane_g1

0x22c3,	// (0x0001d1f0) tabs_4_active_pane_t1

0x4f0d,	// (0x0001fe3a) bg_passive_tab_pane_cp3_ParamLimits

0x4f0d,	// (0x0001fe3a) bg_passive_tab_pane_cp3

0xa4f7,	// (0x00025424) tabs_4_1_passive_pane_g1

0x22c3,	// (0x0001d1f0) tabs_4_1_passive_pane_t1

0x9090,	// (0x00023fbd) list_highlight_pane_cp2

0x37ad,	// (0x0001e6da) list_set_pane_ParamLimits

0x37ad,	// (0x0001e6da) list_set_pane

0x383b,	// (0x0001e768) main_pane_set_t1_ParamLimits

0x383b,	// (0x0001e768) main_pane_set_t1

0x385b,	// (0x0001e788) main_pane_set_t2_ParamLimits

0x385b,	// (0x0001e788) main_pane_set_t2

0x386f,	// (0x0001e79c) main_pane_set_t3_ParamLimits

0x386f,	// (0x0001e79c) main_pane_set_t3

0x3881,	// (0x0001e7ae) main_pane_set_t4_ParamLimits

0x3881,	// (0x0001e7ae) main_pane_set_t4

0x0003,

0xf9b3,	// (0x0002a8e0) main_pane_set_t_ParamLimits

0xf9b3,	// (0x0002a8e0) main_pane_set_t

0x3893,	// (0x0001e7c0) setting_code_pane

0x389b,	// (0x0001e7c8) setting_slider_graphic_pane

0x389b,	// (0x0001e7c8) setting_slider_pane

0x389b,	// (0x0001e7c8) setting_text_pane

0x389b,	// (0x0001e7c8) setting_volume_pane

0xe149,	// (0x00029076) volume_set_pane

0x4f23,	// (0x0001fe50) bg_set_opt_pane_cp

0x74ef,	// (0x0002241c) setting_slider_pane_t1

0xe151,	// (0x0002907e) setting_slider_pane_t2

0xe16a,	// (0x00029097) setting_slider_pane_t3

0x0002,

0xf5a2,	// (0x0002a4cf) setting_slider_pane_t

0x7535,	// (0x00022462) slider_set_pane

0x4ebf,	// (0x0001fdec) bg_set_opt_pane_cp2

0x4f5d,	// (0x0001fe8a) setting_slider_graphic_pane_g1

0xe181,	// (0x000290ae) setting_slider_graphic_pane_t1

0xe190,	// (0x000290bd) setting_slider_graphic_pane_t2

0x0001,

0xf5a9,	// (0x0002a4d6) setting_slider_graphic_pane_t

0xe19f,	// (0x000290cc) slider_set_pane_cp

0x4ebf,	// (0x0001fdec) input_focus_pane_cp1

0xa43a,	// (0x00025367) list_set_text_pane

0x4e3d,	// (0x0001fd6a) setting_text_pane_g1

0x4ebf,	// (0x0001fdec) input_focus_pane_cp2

0x4e3d,	// (0x0001fd6a) setting_code_pane_g1

0x4f66,	// (0x0001fe93) setting_code_pane_t1

0x183d,	// (0x0001c76a) set_text_pane_t1_ParamLimits

0x183d,	// (0x0001c76a) set_text_pane_t1

0x5bc6,	// (0x00020af3) set_opt_bg_pane_g1

0x5bce,	// (0x00020afb) set_opt_bg_pane_g2

0x376d,	// (0x0001e69a) set_opt_bg_pane_g3

0x5bde,	// (0x00020b0b) set_opt_bg_pane_g4

0x5be6,	// (0x00020b13) set_opt_bg_pane_g5

0x5bee,	// (0x00020b1b) set_opt_bg_pane_g6

0x3775,	// (0x0001e6a2) set_opt_bg_pane_g7

0x377d,	// (0x0001e6aa) set_opt_bg_pane_g8

0x3785,	// (0x0001e6b2) set_opt_bg_pane_g9

0x0008,

0xf9a0,	// (0x0002a8cd) set_opt_bg_pane_g

0xa42d,	// (0x0002535a) slider_set_pane_g1

0x827f,	// (0x000231ac) slider_set_pane_g2

0x0006,

0xf991,	// (0x0002a8be) slider_set_pane_g

0xe43a,	// (0x00029367) volume_set_pane_g1

0xe442,	// (0x0002936f) volume_set_pane_g2

0xe44a,	// (0x00029377) volume_set_pane_g3

0xe452,	// (0x0002937f) volume_set_pane_g4

0xe45a,	// (0x00029387) volume_set_pane_g5

0xe462,	// (0x0002938f) volume_set_pane_g6

0xe46a,	// (0x00029397) volume_set_pane_g7

0xe472,	// (0x0002939f) volume_set_pane_g8

0xe47a,	// (0x000293a7) volume_set_pane_g9

0xe482,	// (0x000293af) volume_set_pane_g10

0x0009,

0xf969,	// (0x0002a896) volume_set_pane_g

0x2337,	// (0x0001d264) indicator_pane_ParamLimits

0x2337,	// (0x0001d264) indicator_pane

0x235f,	// (0x0001d28c) main_idle_pane_g2_ParamLimits

0x235f,	// (0x0001d28c) main_idle_pane_g2

0x238f,	// (0x0001d2bc) main_pane_idle_g1_ParamLimits

0x238f,	// (0x0001d2bc) main_pane_idle_g1

0x4f74,	// (0x0001fea1) popup_clock_digital_analogue_window_ParamLimits

0x4f74,	// (0x0001fea1) popup_clock_digital_analogue_window

0x23b4,	// (0x0001d2e1) soft_indicator_pane_ParamLimits

0x23b4,	// (0x0001d2e1) soft_indicator_pane

0x23ce,	// (0x0001d2fb) wallpaper_pane_ParamLimits

0x23ce,	// (0x0001d2fb) wallpaper_pane

0x4e3d,	// (0x0001fd6a) wallpaper_pane_g1

0x23e0,	// (0x0001d30d) indicator_pane_g1_ParamLimits

0x23e0,	// (0x0001d30d) indicator_pane_g1

0xa562,	// (0x0002548f) navi_navi_icon_text_pane_srt_g1

0x4fa2,	// (0x0001fecf) soft_indicator_pane_t1

0x4fbc,	// (0x0001fee9) aid_ps_area_pane

0x23f9,	// (0x0001d326) aid_ps_clock_pane

0x4fcd,	// (0x0001fefa) aid_ps_indicator_pane

0x4fd9,	// (0x0001ff06) indicator_ps_pane_ParamLimits

0x4fd9,	// (0x0001ff06) indicator_ps_pane

0x4fe8,	// (0x0001ff15) power_save_pane_g1_ParamLimits

0x4fe8,	// (0x0001ff15) power_save_pane_g1

0x4ff4,	// (0x0001ff21) power_save_pane_g2_ParamLimits

0x4ff4,	// (0x0001ff21) power_save_pane_g2

0x7137,	// (0x00022064) aid_navinavi_width_pane

0x4fbc,	// (0x0001fee9) aid_ps_area_pane_ParamLimits

0x0001,

0xf5ae,	// (0x0002a4db) power_save_pane_g_ParamLimits

0xf5ae,	// (0x0002a4db) power_save_pane_g

0x5002,	// (0x0001ff2f) power_save_pane_t1_ParamLimits

0x5002,	// (0x0001ff2f) power_save_pane_t1

0x23f9,	// (0x0001d326) aid_ps_clock_pane_ParamLimits

0x4fcd,	// (0x0001fefa) aid_ps_indicator_pane_ParamLimits

0x5014,	// (0x0001ff41) power_save_pane_t4_ParamLimits

0x5014,	// (0x0001ff41) power_save_pane_t4

0x0001,

0xf5b3,	// (0x0002a4e0) power_save_pane_t_ParamLimits

0xf5b3,	// (0x0002a4e0) power_save_pane_t

0x503e,	// (0x0001ff6b) power_save_t3_ParamLimits

0x503e,	// (0x0001ff6b) power_save_t3

0x5029,	// (0x0001ff56) power_save_t2_ParamLimits

0x5029,	// (0x0001ff56) power_save_t2

0x5053,	// (0x0001ff80) indicator_ps_pane_g1

0x2405,	// (0x0001d332) ai_gene_pane_ParamLimits

0x2405,	// (0x0001d332) ai_gene_pane

0x241c,	// (0x0001d349) ai_links_pane_ParamLimits

0x241c,	// (0x0001d349) ai_links_pane

0x242e,	// (0x0001d35b) indicator_pane_cp1_ParamLimits

0x242e,	// (0x0001d35b) indicator_pane_cp1

0x243d,	// (0x0001d36a) main_pane_idle_g1_cp_ParamLimits

0x243d,	// (0x0001d36a) main_pane_idle_g1_cp

0x505c,	// (0x0001ff89) popup_ai_links_title_window

0x2455,	// (0x0001d382) soft_indicator_pane_cp1_ParamLimits

0x2455,	// (0x0001d382) soft_indicator_pane_cp1

0xa26f,	// (0x0002519c) ai_links_pane_g1

0xa278,	// (0x000251a5) grid_ai_links_pane

0x36bd,	// (0x0001e5ea) ai_gene_pane_1

0xa25d,	// (0x0002518a) ai_gene_pane_2

0xa266,	// (0x00025193) list_highlight_pane_cp4

0x36a1,	// (0x0001e5ce) cell_ai_link_pane_ParamLimits

0x36a1,	// (0x0001e5ce) cell_ai_link_pane

0xa255,	// (0x00025182) cell_ai_link_pane_g1

0x5216,	// (0x00020143) cell_ai_link_pane_g2

0x0001,

0xf944,	// (0x0002a871) cell_ai_link_pane_g

0x4ebf,	// (0x0001fdec) grid_highlight_cp2

0x4ebf,	// (0x0001fdec) bg_popup_sub_pane_cp1

0x5073,	// (0x0001ffa0) popup_ai_links_title_window_t1

0xa1a7,	// (0x000250d4) ai_gene_pane_1_g1_ParamLimits

0xa1a7,	// (0x000250d4) ai_gene_pane_1_g1

0xa1b3,	// (0x000250e0) ai_gene_pane_1_g2_ParamLimits

0xa1b3,	// (0x000250e0) ai_gene_pane_1_g2

0x0001,

0xf93a,	// (0x0002a867) ai_gene_pane_1_g_ParamLimits

0xf93a,	// (0x0002a867) ai_gene_pane_1_g

0xa1c0,	// (0x000250ed) ai_gene_pane_1_t1_ParamLimits

0xa1c0,	// (0x000250ed) ai_gene_pane_1_t1

0xa1f4,	// (0x00025121) grid_ai_soft_ind_pane

0xa192,	// (0x000250bf) ai_gene_pane_2_t1_ParamLimits

0xa192,	// (0x000250bf) ai_gene_pane_2_t1

0x2469,	// (0x0001d396) main_pane_empty_t1_ParamLimits

0x2469,	// (0x0001d396) main_pane_empty_t1

0x2486,	// (0x0001d3b3) main_pane_empty_t2_ParamLimits

0x2486,	// (0x0001d3b3) main_pane_empty_t2

0x249e,	// (0x0001d3cb) main_pane_empty_t3_ParamLimits

0x249e,	// (0x0001d3cb) main_pane_empty_t3

0x24b1,	// (0x0001d3de) main_pane_empty_t4_ParamLimits

0x24b1,	// (0x0001d3de) main_pane_empty_t4

0x24c4,	// (0x0001d3f1) main_pane_empty_t5_ParamLimits

0x24c4,	// (0x0001d3f1) main_pane_empty_t5

0x0004,

0xf5b8,	// (0x0002a4e5) main_pane_empty_t_ParamLimits

0xf5b8,	// (0x0002a4e5) main_pane_empty_t

0x5c2b,	// (0x00020b58) bg_popup_window_pane_ParamLimits

0x5c2b,	// (0x00020b58) bg_popup_window_pane

0x9f0c,	// (0x00024e39) find_popup_pane_cp2_ParamLimits

0x9f0c,	// (0x00024e39) find_popup_pane_cp2

0x9f18,	// (0x00024e45) heading_pane_ParamLimits

0x9f18,	// (0x00024e45) heading_pane

0x4ebf,	// (0x0001fdec) bg_popup_sub_pane

0x35e4,	// (0x0001e511) bg_popup_window_pane_g1_ParamLimits

0x35e4,	// (0x0001e511) bg_popup_window_pane_g1

0x35f3,	// (0x0001e520) bg_popup_window_pane_g2_ParamLimits

0x35f3,	// (0x0001e520) bg_popup_window_pane_g2

0x35ff,	// (0x0001e52c) bg_popup_window_pane_g3_ParamLimits

0x35ff,	// (0x0001e52c) bg_popup_window_pane_g3

0x360b,	// (0x0001e538) bg_popup_window_pane_g4_ParamLimits

0x360b,	// (0x0001e538) bg_popup_window_pane_g4

0x361a,	// (0x0001e547) bg_popup_window_pane_g5_ParamLimits

0x361a,	// (0x0001e547) bg_popup_window_pane_g5

0x362a,	// (0x0001e557) bg_popup_window_pane_g6_ParamLimits

0x362a,	// (0x0001e557) bg_popup_window_pane_g6

0x3636,	// (0x0001e563) bg_popup_window_pane_g7_ParamLimits

0x3636,	// (0x0001e563) bg_popup_window_pane_g7

0x3645,	// (0x0001e572) bg_popup_window_pane_g8_ParamLimits

0x3645,	// (0x0001e572) bg_popup_window_pane_g8

0x3654,	// (0x0001e581) bg_popup_window_pane_g9_ParamLimits

0x3654,	// (0x0001e581) bg_popup_window_pane_g9

0x9ef1,	// (0x00024e1e) bg_popup_window_pane_g10_ParamLimits

0x9ef1,	// (0x00024e1e) bg_popup_window_pane_g10

0x0009,

0xf902,	// (0x0002a82f) bg_popup_window_pane_g_ParamLimits

0xf902,	// (0x0002a82f) bg_popup_window_pane_g

0x9ea8,	// (0x00024dd5) bg_popup_heading_pane_ParamLimits

0x9ea8,	// (0x00024dd5) bg_popup_heading_pane

0x8307,	// (0x00023234) tabs_4_passive_pane_cp_srt_ParamLimits

0x8307,	// (0x00023234) tabs_4_passive_pane_cp_srt

0x8319,	// (0x00023246) tabs_4_passive_pane_srt_ParamLimits

0x9ebc,	// (0x00024de9) heading_pane_g2

0x8319,	// (0x00023246) tabs_4_passive_pane_srt

0x943c,	// (0x00024369) bg_passive_tab_pane_cp3_srt_ParamLimits

0x943c,	// (0x00024369) bg_passive_tab_pane_cp3_srt

0x9ec4,	// (0x00024df1) heading_pane_t1_ParamLimits

0x9ec4,	// (0x00024df1) heading_pane_t1

0x9edb,	// (0x00024e08) heading_pane_t2_ParamLimits

0x9edb,	// (0x00024e08) heading_pane_t2

0x0001,

0xf8fd,	// (0x0002a82a) heading_pane_t_ParamLimits

0xf8fd,	// (0x0002a82a) heading_pane_t

0x9a2b,	// (0x00024958) bg_popup_heading_pane_g1

0x9abc,	// (0x000249e9) bg_popup_heading_pane_g2

0x9ac4,	// (0x000249f1) bg_popup_heading_pane_g3

0x9acc,	// (0x000249f9) bg_popup_heading_pane_g4

0x9ad4,	// (0x00024a01) bg_popup_heading_pane_g5

0x9adc,	// (0x00024a09) bg_popup_heading_pane_g6

0x9ae4,	// (0x00024a11) bg_popup_heading_pane_g7

0x9aec,	// (0x00024a19) bg_popup_heading_pane_g8

0x9af4,	// (0x00024a21) bg_popup_heading_pane_g9

0x0008,

0xf8b9,	// (0x0002a7e6) bg_popup_heading_pane_g

0x934e,	// (0x0002427b) bg_popup_sub_pane_g1

0x935e,	// (0x0002428b) bg_popup_sub_pane_g2

0x9356,	// (0x00024283) bg_popup_sub_pane_g3

0x936e,	// (0x0002429b) bg_popup_sub_pane_g4

0x9366,	// (0x00024293) bg_popup_sub_pane_g5

0x9376,	// (0x000242a3) bg_popup_sub_pane_g6

0x937e,	// (0x000242ab) bg_popup_sub_pane_g7

0x938e,	// (0x000242bb) bg_popup_sub_pane_g8

0x9386,	// (0x000242b3) bg_popup_sub_pane_g9

0x0008,

0xf893,	// (0x0002a7c0) bg_popup_sub_pane_g

0x4f0d,	// (0x0001fe3a) bg_popup_window_pane_cp5_ParamLimits

0x4f0d,	// (0x0001fe3a) bg_popup_window_pane_cp5

0x5090,	// (0x0001ffbd) popup_note_window_g1_ParamLimits

0x5090,	// (0x0001ffbd) popup_note_window_g1

0x509c,	// (0x0001ffc9) popup_note_window_t1_ParamLimits

0x509c,	// (0x0001ffc9) popup_note_window_t1

0x50b2,	// (0x0001ffdf) popup_note_window_t2_ParamLimits

0x50b2,	// (0x0001ffdf) popup_note_window_t2

0x50c8,	// (0x0001fff5) popup_note_window_t3_ParamLimits

0x50c8,	// (0x0001fff5) popup_note_window_t3

0x50de,	// (0x0002000b) popup_note_window_t4_ParamLimits

0x50de,	// (0x0002000b) popup_note_window_t4

0x5106,	// (0x00020033) popup_note_window_t5_ParamLimits

0x5106,	// (0x00020033) popup_note_window_t5

0x0004,

0xf5c3,	// (0x0002a4f0) popup_note_window_t_ParamLimits

0xf5c3,	// (0x0002a4f0) popup_note_window_t

0x512a,	// (0x00020057) bg_popup_window_pane_cp6_ParamLimits

0x512a,	// (0x00020057) bg_popup_window_pane_cp6

0x99a7,	// (0x000248d4) popup_note_image_window_g1_ParamLimits

0x99a7,	// (0x000248d4) popup_note_image_window_g1

0x99b3,	// (0x000248e0) popup_note_image_window_g2_ParamLimits

0x99b3,	// (0x000248e0) popup_note_image_window_g2

0x0001,

0xf887,	// (0x0002a7b4) popup_note_image_window_g_ParamLimits

0xf887,	// (0x0002a7b4) popup_note_image_window_g

0x99cc,	// (0x000248f9) popup_note_image_window_t1_ParamLimits

0x99cc,	// (0x000248f9) popup_note_image_window_t1

0x99e5,	// (0x00024912) popup_note_image_window_t2_ParamLimits

0x99e5,	// (0x00024912) popup_note_image_window_t2

0x99fe,	// (0x0002492b) popup_note_image_window_t3_ParamLimits

0x99fe,	// (0x0002492b) popup_note_image_window_t3

0x0002,

0xf88c,	// (0x0002a7b9) popup_note_image_window_t_ParamLimits

0xf88c,	// (0x0002a7b9) popup_note_image_window_t

0x9892,	// (0x000247bf) bg_popup_window_pane_cp7_ParamLimits

0x9892,	// (0x000247bf) bg_popup_window_pane_cp7

0x98c2,	// (0x000247ef) popup_note_wait_window_g1_ParamLimits

0x98c2,	// (0x000247ef) popup_note_wait_window_g1

0x98ce,	// (0x000247fb) popup_note_wait_window_g2_ParamLimits

0x98ce,	// (0x000247fb) popup_note_wait_window_g2

0x0002,

0xf875,	// (0x0002a7a2) popup_note_wait_window_g_ParamLimits

0xf875,	// (0x0002a7a2) popup_note_wait_window_g

0x98e6,	// (0x00024813) popup_note_wait_window_t1_ParamLimits

0x98e6,	// (0x00024813) popup_note_wait_window_t1

0x990d,	// (0x0002483a) popup_note_wait_window_t2_ParamLimits

0x990d,	// (0x0002483a) popup_note_wait_window_t2

0x992a,	// (0x00024857) popup_note_wait_window_t3_ParamLimits

0x992a,	// (0x00024857) popup_note_wait_window_t3

0x993d,	// (0x0002486a) popup_note_wait_window_t4_ParamLimits

0x993d,	// (0x0002486a) popup_note_wait_window_t4

0x0004,

0xf87c,	// (0x0002a7a9) popup_note_wait_window_t_ParamLimits

0xf87c,	// (0x0002a7a9) popup_note_wait_window_t

0x9962,	// (0x0002488f) wait_bar_pane_ParamLimits

0x9962,	// (0x0002488f) wait_bar_pane

0x4ebf,	// (0x0001fdec) wait_anim_pane

0x4ebf,	// (0x0001fdec) wait_border_pane

0x4e3d,	// (0x0001fd6a) wait_anim_pane_g1

0x4e3d,	// (0x0001fd6a) wait_anim_pane_g2

0x0001,

0xf747,	// (0x0002a674) wait_anim_pane_g

0x9842,	// (0x0002476f) wait_border_pane_g1

0x984b,	// (0x00024778) wait_border_pane_g2

0x9854,	// (0x00024781) wait_border_pane_g3

0x0002,

0xf86e,	// (0x0002a79b) wait_border_pane_g

0x97a4,	// (0x000246d1) bg_popup_window_pane_cp16_ParamLimits

0x97a4,	// (0x000246d1) bg_popup_window_pane_cp16

0x97b2,	// (0x000246df) indicator_popup_pane_cp4_ParamLimits

0x97b2,	// (0x000246df) indicator_popup_pane_cp4

0x97c6,	// (0x000246f3) popup_query_data_window_t1_ParamLimits

0x97c6,	// (0x000246f3) popup_query_data_window_t1

0x97d8,	// (0x00024705) popup_query_data_window_t2_ParamLimits

0x97d8,	// (0x00024705) popup_query_data_window_t2

0x97f1,	// (0x0002471e) popup_query_data_window_t3_ParamLimits

0x97f1,	// (0x0002471e) popup_query_data_window_t3

0x0002,

0xf867,	// (0x0002a794) popup_query_data_window_t_ParamLimits

0xf867,	// (0x0002a794) popup_query_data_window_t

0x980b,	// (0x00024738) query_popup_data_pane_ParamLimits

0x980b,	// (0x00024738) query_popup_data_pane

0x981f,	// (0x0002474c) query_popup_data_pane_cp1_ParamLimits

0x981f,	// (0x0002474c) query_popup_data_pane_cp1

0x512a,	// (0x00020057) bg_popup_window_pane_cp10_ParamLimits

0x512a,	// (0x00020057) bg_popup_window_pane_cp10

0x9707,	// (0x00024634) indicator_popup_pane_ParamLimits

0x9707,	// (0x00024634) indicator_popup_pane

0x5181,	// (0x000200ae) popup_query_code_window_t1_ParamLimits

0x5181,	// (0x000200ae) popup_query_code_window_t1

0x971f,	// (0x0002464c) popup_query_code_window_t2_ParamLimits

0x971f,	// (0x0002464c) popup_query_code_window_t2

0x975d,	// (0x0002468a) popup_query_code_window_t3_ParamLimits

0x975d,	// (0x0002468a) popup_query_code_window_t3

0x0002,

0xf860,	// (0x0002a78d) popup_query_code_window_t_ParamLimits

0xf860,	// (0x0002a78d) popup_query_code_window_t

0x978c,	// (0x000246b9) query_popup_pane_ParamLimits

0x978c,	// (0x000246b9) query_popup_pane

0x512a,	// (0x00020057) bg_popup_window_pane_cp15_ParamLimits

0x512a,	// (0x00020057) bg_popup_window_pane_cp15

0x5148,	// (0x00020075) indicator_popup_pane_cp1_ParamLimits

0x5148,	// (0x00020075) indicator_popup_pane_cp1

0x515b,	// (0x00020088) indicator_popup_pane_cp2_ParamLimits

0x515b,	// (0x00020088) indicator_popup_pane_cp2

0x516e,	// (0x0002009b) popup_query_data_code_window_g1_ParamLimits

0x516e,	// (0x0002009b) popup_query_data_code_window_g1

0x5181,	// (0x000200ae) popup_query_data_code_window_t1_ParamLimits

0x5181,	// (0x000200ae) popup_query_data_code_window_t1

0x5193,	// (0x000200c0) popup_query_data_code_window_t2_ParamLimits

0x5193,	// (0x000200c0) popup_query_data_code_window_t2

0x51a5,	// (0x000200d2) popup_query_data_code_window_t3_ParamLimits

0x51a5,	// (0x000200d2) popup_query_data_code_window_t3

0x51bb,	// (0x000200e8) popup_query_data_code_window_t4_ParamLimits

0x51bb,	// (0x000200e8) popup_query_data_code_window_t4

0x0003,

0xf5ce,	// (0x0002a4fb) popup_query_data_code_window_t_ParamLimits

0xf5ce,	// (0x0002a4fb) popup_query_data_code_window_t

0x7fe0,	// (0x00022f0d) list_single_midp_graphic_pane_g3

0x51d3,	// (0x00020100) query_popup_data_pane_cp2_ParamLimits

0x51e6,	// (0x00020113) query_popup_pane_cp2_ParamLimits

0x51e6,	// (0x00020113) query_popup_pane_cp2

0x4ebf,	// (0x0001fdec) bg_popup_window_pane_cp11

0x96db,	// (0x00024608) heading_pane_cp5

0x5272,	// (0x0002019f) listscroll_popup_info_pane

0x4ebf,	// (0x0001fdec) input_focus_pane_cp3

0x51f9,	// (0x00020126) query_popup_pane_t1

0x5207,	// (0x00020134) list_popup_info_pane_ParamLimits

0x5207,	// (0x00020134) list_popup_info_pane

0x5216,	// (0x00020143) listscroll_popup_info_pane_g1

0x521e,	// (0x0002014b) scroll_pane_cp7

0x5226,	// (0x00020153) popup_info_list_pane_t1_ParamLimits

0x5226,	// (0x00020153) popup_info_list_pane_t1

0x5240,	// (0x0002016d) popup_info_list_pane_t2_ParamLimits

0x5240,	// (0x0002016d) popup_info_list_pane_t2

0x0001,

0xf5d7,	// (0x0002a504) popup_info_list_pane_t_ParamLimits

0xf5d7,	// (0x0002a504) popup_info_list_pane_t

0x4ebf,	// (0x0001fdec) bg_popup_window_pane_cp12

0xa57c,	// (0x000254a9) find_popup_pane

0x4f23,	// (0x0001fe50) bg_popup_window_pane_cp3

0x525a,	// (0x00020187) heading_pane_cp3

0x5266,	// (0x00020193) listscroll_popup_graphic_pane

0x4ebf,	// (0x0001fdec) bg_popup_window_pane_cp4

0x2527,	// (0x0001d454) heading_pane_cp4

0x5272,	// (0x0002019f) listscroll_popup_colour_pane

0x527a,	// (0x000201a7) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x527a,	// (0x000201a7) cell_large_graphic_colour_none_popup_pane

0x252f,	// (0x0001d45c) grid_large_graphic_colour_popup_pane_ParamLimits

0x252f,	// (0x0001d45c) grid_large_graphic_colour_popup_pane

0x254b,	// (0x0001d478) listscroll_popup_colour_pane_g1_ParamLimits

0x254b,	// (0x0001d478) listscroll_popup_colour_pane_g1

0x2562,	// (0x0001d48f) listscroll_popup_colour_pane_g2_ParamLimits

0x2562,	// (0x0001d48f) listscroll_popup_colour_pane_g2

0x528a,	// (0x000201b7) listscroll_popup_colour_pane_g3_ParamLimits

0x528a,	// (0x000201b7) listscroll_popup_colour_pane_g3

0x2576,	// (0x0001d4a3) listscroll_popup_colour_pane_g4_ParamLimits

0x2576,	// (0x0001d4a3) listscroll_popup_colour_pane_g4

0x0003,

0xf5dc,	// (0x0002a509) listscroll_popup_colour_pane_g_ParamLimits

0xf5dc,	// (0x0002a509) listscroll_popup_colour_pane_g

0x529a,	// (0x000201c7) scroll_pane_cp6_ParamLimits

0x529a,	// (0x000201c7) scroll_pane_cp6

0x2585,	// (0x0001d4b2) cell_large_graphic_colour_popup_pane_ParamLimits

0x2585,	// (0x0001d4b2) cell_large_graphic_colour_popup_pane

0x52ac,	// (0x000201d9) cell_large_graphic_colour_none_popup_pane_t1

0x4ebf,	// (0x0001fdec) grid_highlight_pane_cp5

0x52bb,	// (0x000201e8) cell_large_graphic_colour_popup_pane_g1

0x52c3,	// (0x000201f0) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5e5,	// (0x0002a512) cell_large_graphic_colour_popup_pane_g

0x52cb,	// (0x000201f8) cell_large_graphic_colour_popup_pane_g2_copy1

0x52d4,	// (0x00020201) grid_highlight_pane_cp4

0x52dc,	// (0x00020209) bg_popup_window_pane_cp8_ParamLimits

0x52dc,	// (0x00020209) bg_popup_window_pane_cp8

0x52f7,	// (0x00020224) popup_snote_single_text_window_g1_ParamLimits

0x52f7,	// (0x00020224) popup_snote_single_text_window_g1

0x5309,	// (0x00020236) popup_snote_single_text_window_t1_ParamLimits

0x5309,	// (0x00020236) popup_snote_single_text_window_t1

0x531c,	// (0x00020249) popup_snote_single_text_window_t2_ParamLimits

0x531c,	// (0x00020249) popup_snote_single_text_window_t2

0x532f,	// (0x0002025c) popup_snote_single_text_window_t3_ParamLimits

0x532f,	// (0x0002025c) popup_snote_single_text_window_t3

0x5368,	// (0x00020295) popup_snote_single_text_window_t4_ParamLimits

0x5368,	// (0x00020295) popup_snote_single_text_window_t4

0x539c,	// (0x000202c9) popup_snote_single_text_window_t5_ParamLimits

0x539c,	// (0x000202c9) popup_snote_single_text_window_t5

0x0004,

0xf5ea,	// (0x0002a517) popup_snote_single_text_window_t_ParamLimits

0xf5ea,	// (0x0002a517) popup_snote_single_text_window_t

0x53cb,	// (0x000202f8) bg_popup_window_pane_cp9_ParamLimits

0x53cb,	// (0x000202f8) bg_popup_window_pane_cp9

0x52f7,	// (0x00020224) popup_snote_single_graphic_window_g1_ParamLimits

0x52f7,	// (0x00020224) popup_snote_single_graphic_window_g1

0x53d9,	// (0x00020306) popup_snote_single_graphic_window_g2_ParamLimits

0x53d9,	// (0x00020306) popup_snote_single_graphic_window_g2

0x0001,

0xf5f5,	// (0x0002a522) popup_snote_single_graphic_window_g_ParamLimits

0xf5f5,	// (0x0002a522) popup_snote_single_graphic_window_g

0x53e5,	// (0x00020312) popup_snote_single_graphic_window_t1_ParamLimits

0x53e5,	// (0x00020312) popup_snote_single_graphic_window_t1

0x53f8,	// (0x00020325) popup_snote_single_graphic_window_t2_ParamLimits

0x53f8,	// (0x00020325) popup_snote_single_graphic_window_t2

0x532f,	// (0x0002025c) popup_snote_single_graphic_window_t3_ParamLimits

0x532f,	// (0x0002025c) popup_snote_single_graphic_window_t3

0x5368,	// (0x00020295) popup_snote_single_graphic_window_t4_ParamLimits

0x5368,	// (0x00020295) popup_snote_single_graphic_window_t4

0x539c,	// (0x000202c9) popup_snote_single_graphic_window_t5_ParamLimits

0x539c,	// (0x000202c9) popup_snote_single_graphic_window_t5

0x0004,

0xf5fa,	// (0x0002a527) popup_snote_single_graphic_window_t_ParamLimits

0xf5fa,	// (0x0002a527) popup_snote_single_graphic_window_t

0x3996,	// (0x0001e8c3) grid_graphic_popup_pane_ParamLimits

0x3996,	// (0x0001e8c3) grid_graphic_popup_pane

0x39b9,	// (0x0001e8e6) listscroll_popup_graphic_pane_g1_ParamLimits

0x39b9,	// (0x0001e8e6) listscroll_popup_graphic_pane_g1

0x39cd,	// (0x0001e8fa) listscroll_popup_graphic_pane_g2_ParamLimits

0x39cd,	// (0x0001e8fa) listscroll_popup_graphic_pane_g2

0x0001,

0xf9dd,	// (0x0002a90a) listscroll_popup_graphic_pane_g_ParamLimits

0xf9dd,	// (0x0002a90a) listscroll_popup_graphic_pane_g

0xa534,	// (0x00025461) scroll_pane_cp5

0x3951,	// (0x0001e87e) cell_graphic_popup_pane_ParamLimits

0x3951,	// (0x0001e87e) cell_graphic_popup_pane

0xa4ff,	// (0x0002542c) cell_graphic_popup_pane_g1

0xa507,	// (0x00025434) cell_graphic_popup_pane_g2

0x52cb,	// (0x000201f8) cell_graphic_popup_pane_g3

0x0002,

0xf9d6,	// (0x0002a903) cell_graphic_popup_pane_g

0xa510,	// (0x0002543d) cell_graphic_popup_pane_t2

0x52d4,	// (0x00020201) grid_highlight_pane_cp3

0x541d,	// (0x0002034a) list_gen_pane_ParamLimits

0x541d,	// (0x0002034a) list_gen_pane

0x5446,	// (0x00020373) scroll_pane

0x3924,	// (0x0001e851) bg_list_pane_g1_ParamLimits

0x3924,	// (0x0001e851) bg_list_pane_g1

0xa4ae,	// (0x000253db) bg_list_pane_g2_ParamLimits

0xa4ae,	// (0x000253db) bg_list_pane_g2

0xa4c1,	// (0x000253ee) bg_list_pane_g3_ParamLimits

0xa4c1,	// (0x000253ee) bg_list_pane_g3

0xa4d3,	// (0x00025400) bg_list_pane_g4_ParamLimits

0xa4d3,	// (0x00025400) bg_list_pane_g4

0x393f,	// (0x0001e86c) bg_list_pane_g5_ParamLimits

0x393f,	// (0x0001e86c) bg_list_pane_g5

0x0004,

0xf9cb,	// (0x0002a8f8) bg_list_pane_g_ParamLimits

0xf9cb,	// (0x0002a8f8) bg_list_pane_g

0x38c8,	// (0x0001e7f5) list_double2_graphic_large_graphic_pane_ParamLimits

0x38c8,	// (0x0001e7f5) list_double2_graphic_large_graphic_pane

0x38c8,	// (0x0001e7f5) list_double2_graphic_pane_ParamLimits

0x38c8,	// (0x0001e7f5) list_double2_graphic_pane

0x38c8,	// (0x0001e7f5) list_double2_large_graphic_pane_ParamLimits

0x38c8,	// (0x0001e7f5) list_double2_large_graphic_pane

0x38da,	// (0x0001e807) list_double2_pane_ParamLimits

0x38da,	// (0x0001e807) list_double2_pane

0x38c8,	// (0x0001e7f5) list_double_graphic_heading_pane_ParamLimits

0x38c8,	// (0x0001e7f5) list_double_graphic_heading_pane

0x38c8,	// (0x0001e7f5) list_double_graphic_pane_ParamLimits

0x38c8,	// (0x0001e7f5) list_double_graphic_pane

0x38c8,	// (0x0001e7f5) list_double_heading_pane_ParamLimits

0x38c8,	// (0x0001e7f5) list_double_heading_pane

0x38c8,	// (0x0001e7f5) list_double_large_graphic_pane_ParamLimits

0x38c8,	// (0x0001e7f5) list_double_large_graphic_pane

0x38c8,	// (0x0001e7f5) list_double_number_pane_ParamLimits

0x38c8,	// (0x0001e7f5) list_double_number_pane

0x38c8,	// (0x0001e7f5) list_double_pane_ParamLimits

0x38c8,	// (0x0001e7f5) list_double_pane

0x38c8,	// (0x0001e7f5) list_double_time_pane_ParamLimits

0x38c8,	// (0x0001e7f5) list_double_time_pane

0x38c8,	// (0x0001e7f5) list_setting_number_pane_ParamLimits

0x38c8,	// (0x0001e7f5) list_setting_number_pane

0x38c8,	// (0x0001e7f5) list_setting_pane_ParamLimits

0x38c8,	// (0x0001e7f5) list_setting_pane

0x1e24,	// (0x0001cd51) list_single_2graphic_pane_ParamLimits

0x1e24,	// (0x0001cd51) list_single_2graphic_pane

0x1e24,	// (0x0001cd51) list_single_graphic_heading_pane_ParamLimits

0x1e24,	// (0x0001cd51) list_single_graphic_heading_pane

0x1e24,	// (0x0001cd51) list_single_graphic_pane_ParamLimits

0x1e24,	// (0x0001cd51) list_single_graphic_pane

0x1e24,	// (0x0001cd51) list_single_heading_pane_ParamLimits

0x1e24,	// (0x0001cd51) list_single_heading_pane

0x38c8,	// (0x0001e7f5) list_single_large_graphic_pane_ParamLimits

0x38c8,	// (0x0001e7f5) list_single_large_graphic_pane

0x1e24,	// (0x0001cd51) list_single_number_heading_pane_ParamLimits

0x1e24,	// (0x0001cd51) list_single_number_heading_pane

0x1e24,	// (0x0001cd51) list_single_number_pane_ParamLimits

0x1e24,	// (0x0001cd51) list_single_number_pane

0x1e24,	// (0x0001cd51) list_single_pane_ParamLimits

0x1e24,	// (0x0001cd51) list_single_pane

0x4ebf,	// (0x0001fdec) list_highlight_pane_cp1

0xb1c6,	// (0x000260f3) list_single_pane_g1_ParamLimits

0xb1c6,	// (0x000260f3) list_single_pane_g1

0xb1d2,	// (0x000260ff) list_single_pane_g2_ParamLimits

0xb1d2,	// (0x000260ff) list_single_pane_g2

0x0001,

0xf60c,	// (0x0002a539) list_single_pane_g_ParamLimits

0xf60c,	// (0x0002a539) list_single_pane_g

0xb345,	// (0x00026272) list_single_pane_t1_ParamLimits

0xb345,	// (0x00026272) list_single_pane_t1

0xb1c6,	// (0x000260f3) list_single_number_pane_g1_ParamLimits

0xb1c6,	// (0x000260f3) list_single_number_pane_g1

0xb1d2,	// (0x000260ff) list_single_number_pane_g2_ParamLimits

0xb1d2,	// (0x000260ff) list_single_number_pane_g2

0x0001,

0xf60c,	// (0x0002a539) list_single_number_pane_g_ParamLimits

0xf60c,	// (0x0002a539) list_single_number_pane_g

0xb1de,	// (0x0002610b) list_single_number_pane_t1_ParamLimits

0xb1de,	// (0x0002610b) list_single_number_pane_t1

0x1de7,	// (0x0001cd14) list_single_number_pane_t2_ParamLimits

0x1de7,	// (0x0001cd14) list_single_number_pane_t2

0x0001,

0xf98c,	// (0x0002a8b9) list_single_number_pane_t_ParamLimits

0xf98c,	// (0x0002a8b9) list_single_number_pane_t

0xaa93,	// (0x000259c0) list_single_graphic_pane_g1_ParamLimits

0xaa93,	// (0x000259c0) list_single_graphic_pane_g1

0xb1c6,	// (0x000260f3) list_single_graphic_pane_g2_ParamLimits

0xb1c6,	// (0x000260f3) list_single_graphic_pane_g2

0xb1d2,	// (0x000260ff) list_single_graphic_pane_g3_ParamLimits

0xb1d2,	// (0x000260ff) list_single_graphic_pane_g3

0x0002,

0xf605,	// (0x0002a532) list_single_graphic_pane_g_ParamLimits

0xf605,	// (0x0002a532) list_single_graphic_pane_g

0xb1de,	// (0x0002610b) list_single_graphic_pane_t1_ParamLimits

0xb1de,	// (0x0002610b) list_single_graphic_pane_t1

0xb1c6,	// (0x000260f3) list_single_heading_pane_g1_ParamLimits

0xb1c6,	// (0x000260f3) list_single_heading_pane_g1

0xb1d2,	// (0x000260ff) list_single_heading_pane_g2_ParamLimits

0xb1d2,	// (0x000260ff) list_single_heading_pane_g2

0x0001,

0xf60c,	// (0x0002a539) list_single_heading_pane_g_ParamLimits

0xf60c,	// (0x0002a539) list_single_heading_pane_g

0x1857,	// (0x0001c784) list_single_heading_pane_t1_ParamLimits

0x1857,	// (0x0001c784) list_single_heading_pane_t1

0x186d,	// (0x0001c79a) list_single_heading_pane_t2_ParamLimits

0x186d,	// (0x0001c79a) list_single_heading_pane_t2

0x0001,

0xf611,	// (0x0002a53e) list_single_heading_pane_t_ParamLimits

0xf611,	// (0x0002a53e) list_single_heading_pane_t

0xb1c6,	// (0x000260f3) list_single_number_heading_pane_g1_ParamLimits

0xb1c6,	// (0x000260f3) list_single_number_heading_pane_g1

0xb1d2,	// (0x000260ff) list_single_number_heading_pane_g2_ParamLimits

0xb1d2,	// (0x000260ff) list_single_number_heading_pane_g2

0x0001,

0xf60c,	// (0x0002a539) list_single_number_heading_pane_g_ParamLimits

0xf60c,	// (0x0002a539) list_single_number_heading_pane_g

0x1857,	// (0x0001c784) list_single_number_heading_pane_t1_ParamLimits

0x1857,	// (0x0001c784) list_single_number_heading_pane_t1

0x187f,	// (0x0001c7ac) list_single_number_heading_pane_t2_ParamLimits

0x187f,	// (0x0001c7ac) list_single_number_heading_pane_t2

0xb321,	// (0x0002624e) list_single_number_heading_pane_t3_ParamLimits

0xb321,	// (0x0002624e) list_single_number_heading_pane_t3

0x0002,

0xf616,	// (0x0002a543) list_single_number_heading_pane_t_ParamLimits

0xf616,	// (0x0002a543) list_single_number_heading_pane_t

0xaa93,	// (0x000259c0) list_single_graphic_heading_pane_g1_ParamLimits

0xaa93,	// (0x000259c0) list_single_graphic_heading_pane_g1

0x1891,	// (0x0001c7be) list_single_graphic_heading_pane_g4_ParamLimits

0x1891,	// (0x0001c7be) list_single_graphic_heading_pane_g4

0xb1d2,	// (0x000260ff) list_single_graphic_heading_pane_g5_ParamLimits

0xb1d2,	// (0x000260ff) list_single_graphic_heading_pane_g5

0x0002,

0xf61d,	// (0x0002a54a) list_single_graphic_heading_pane_g_ParamLimits

0xf61d,	// (0x0002a54a) list_single_graphic_heading_pane_g

0x1857,	// (0x0001c784) list_single_graphic_heading_pane_t1_ParamLimits

0x1857,	// (0x0001c784) list_single_graphic_heading_pane_t1

0x18a2,	// (0x0001c7cf) list_single_graphic_heading_pane_t2_ParamLimits

0x18a2,	// (0x0001c7cf) list_single_graphic_heading_pane_t2

0x0001,

0xf624,	// (0x0002a551) list_single_graphic_heading_pane_t_ParamLimits

0xf624,	// (0x0002a551) list_single_graphic_heading_pane_t

0xb35b,	// (0x00026288) list_single_large_graphic_pane_g1_ParamLimits

0xb35b,	// (0x00026288) list_single_large_graphic_pane_g1

0xb367,	// (0x00026294) list_single_large_graphic_pane_g2_ParamLimits

0xb367,	// (0x00026294) list_single_large_graphic_pane_g2

0xb373,	// (0x000262a0) list_single_large_graphic_pane_g3_ParamLimits

0xb373,	// (0x000262a0) list_single_large_graphic_pane_g3

0x0002,

0xf629,	// (0x0002a556) list_single_large_graphic_pane_g_ParamLimits

0xf629,	// (0x0002a556) list_single_large_graphic_pane_g

0x984b,	// (0x00024778) wait_border_pane_g2_copy1

0x18b4,	// (0x0001c7e1) list_single_large_graphic_pane_g4_cp2

0xb37f,	// (0x000262ac) list_single_large_graphic_pane_t1_ParamLimits

0xb37f,	// (0x000262ac) list_single_large_graphic_pane_t1

0xaa9f,	// (0x000259cc) list_double_pane_g1_ParamLimits

0xaa9f,	// (0x000259cc) list_double_pane_g1

0xaaab,	// (0x000259d8) list_double_pane_g2_ParamLimits

0xaaab,	// (0x000259d8) list_double_pane_g2

0x0001,

0xf630,	// (0x0002a55d) list_double_pane_g_ParamLimits

0xf630,	// (0x0002a55d) list_double_pane_g

0xb283,	// (0x000261b0) list_double_pane_t1_ParamLimits

0xb283,	// (0x000261b0) list_double_pane_t1

0x18bc,	// (0x0001c7e9) list_double_pane_t2_ParamLimits

0x18bc,	// (0x0001c7e9) list_double_pane_t2

0x0001,

0xf635,	// (0x0002a562) list_double_pane_t_ParamLimits

0xf635,	// (0x0002a562) list_double_pane_t

0x18ce,	// (0x0001c7fb) list_double2_pane_g1_ParamLimits

0x18ce,	// (0x0001c7fb) list_double2_pane_g1

0xac7e,	// (0x00025bab) list_double2_pane_g2_ParamLimits

0xac7e,	// (0x00025bab) list_double2_pane_g2

0x0001,

0xf63a,	// (0x0002a567) list_double2_pane_g_ParamLimits

0xf63a,	// (0x0002a567) list_double2_pane_g

0x18df,	// (0x0001c80c) list_double2_pane_t1_ParamLimits

0x18df,	// (0x0001c80c) list_double2_pane_t1

0x18f5,	// (0x0001c822) list_double2_pane_t2_ParamLimits

0x18f5,	// (0x0001c822) list_double2_pane_t2

0x0001,

0xf63f,	// (0x0002a56c) list_double2_pane_t_ParamLimits

0xf63f,	// (0x0002a56c) list_double2_pane_t

0xaa9f,	// (0x000259cc) list_double_number_pane_g1_ParamLimits

0xaa9f,	// (0x000259cc) list_double_number_pane_g1

0xaaab,	// (0x000259d8) list_double_number_pane_g2_ParamLimits

0xaaab,	// (0x000259d8) list_double_number_pane_g2

0x0001,

0xf630,	// (0x0002a55d) list_double_number_pane_g_ParamLimits

0xf630,	// (0x0002a55d) list_double_number_pane_g

0x1907,	// (0x0001c834) list_double_number_pane_t1_ParamLimits

0x1907,	// (0x0001c834) list_double_number_pane_t1

0xaab7,	// (0x000259e4) list_double_number_pane_t2_ParamLimits

0xaab7,	// (0x000259e4) list_double_number_pane_t2

0x1919,	// (0x0001c846) list_double_number_pane_t3_ParamLimits

0x1919,	// (0x0001c846) list_double_number_pane_t3

0x0002,

0xf644,	// (0x0002a571) list_double_number_pane_t_ParamLimits

0xf644,	// (0x0002a571) list_double_number_pane_t

0xaa93,	// (0x000259c0) list_double_graphic_pane_g1_ParamLimits

0xaa93,	// (0x000259c0) list_double_graphic_pane_g1

0x192b,	// (0x0001c858) list_double_graphic_pane_g2_ParamLimits

0x192b,	// (0x0001c858) list_double_graphic_pane_g2

0x193a,	// (0x0001c867) list_double_graphic_pane_g3_ParamLimits

0x193a,	// (0x0001c867) list_double_graphic_pane_g3

0x0003,

0xf64b,	// (0x0002a578) list_double_graphic_pane_g_ParamLimits

0xf64b,	// (0x0002a578) list_double_graphic_pane_g

0x1952,	// (0x0001c87f) list_double_graphic_pane_t1_ParamLimits

0x1952,	// (0x0001c87f) list_double_graphic_pane_t1

0x1968,	// (0x0001c895) list_double_graphic_pane_t2_ParamLimits

0x1968,	// (0x0001c895) list_double_graphic_pane_t2

0x0001,

0xf654,	// (0x0002a581) list_double_graphic_pane_t_ParamLimits

0xf654,	// (0x0002a581) list_double_graphic_pane_t

0x197a,	// (0x0001c8a7) list_double2_graphic_pane_g1_ParamLimits

0x197a,	// (0x0001c8a7) list_double2_graphic_pane_g1

0xaa9f,	// (0x000259cc) list_double2_graphic_pane_g2_ParamLimits

0xaa9f,	// (0x000259cc) list_double2_graphic_pane_g2

0xaaab,	// (0x000259d8) list_double2_graphic_pane_g3_ParamLimits

0xaaab,	// (0x000259d8) list_double2_graphic_pane_g3

0x0002,

0xf659,	// (0x0002a586) list_double2_graphic_pane_g_ParamLimits

0xf659,	// (0x0002a586) list_double2_graphic_pane_g

0x1986,	// (0x0001c8b3) list_double2_graphic_pane_t1_ParamLimits

0x1986,	// (0x0001c8b3) list_double2_graphic_pane_t1

0x199c,	// (0x0001c8c9) list_double2_graphic_pane_t2_ParamLimits

0x199c,	// (0x0001c8c9) list_double2_graphic_pane_t2

0x0001,

0xf660,	// (0x0002a58d) list_double2_graphic_pane_t_ParamLimits

0xf660,	// (0x0002a58d) list_double2_graphic_pane_t

0x19ae,	// (0x0001c8db) list_double_large_graphic_pane_g1_ParamLimits

0x19ae,	// (0x0001c8db) list_double_large_graphic_pane_g1

0x19d7,	// (0x0001c904) list_double_large_graphic_pane_g2_ParamLimits

0x19d7,	// (0x0001c904) list_double_large_graphic_pane_g2

0xaaab,	// (0x000259d8) list_double_large_graphic_pane_g3_ParamLimits

0xaaab,	// (0x000259d8) list_double_large_graphic_pane_g3

0x19e8,	// (0x0001c915) list_double_large_graphic_pane_g4_ParamLimits

0x19e8,	// (0x0001c915) list_double_large_graphic_pane_g4

0x0004,

0xf665,	// (0x0002a592) list_double_large_graphic_pane_g_ParamLimits

0xf665,	// (0x0002a592) list_double_large_graphic_pane_g

0x19f9,	// (0x0001c926) list_double_large_graphic_pane_t1_ParamLimits

0x19f9,	// (0x0001c926) list_double_large_graphic_pane_t1

0x1a12,	// (0x0001c93f) list_double_large_graphic_pane_t2_ParamLimits

0x1a12,	// (0x0001c93f) list_double_large_graphic_pane_t2

0x0001,

0xf670,	// (0x0002a59d) list_double_large_graphic_pane_t_ParamLimits

0xf670,	// (0x0002a59d) list_double_large_graphic_pane_t

0x1a24,	// (0x0001c951) list_double2_large_graphic_pane_g1_ParamLimits

0x1a24,	// (0x0001c951) list_double2_large_graphic_pane_g1

0x1a30,	// (0x0001c95d) list_double2_large_graphic_pane_g2_ParamLimits

0x1a30,	// (0x0001c95d) list_double2_large_graphic_pane_g2

0x1a41,	// (0x0001c96e) list_double2_large_graphic_pane_g3_ParamLimits

0x1a41,	// (0x0001c96e) list_double2_large_graphic_pane_g3

0x0002,

0xf675,	// (0x0002a5a2) list_double2_large_graphic_pane_g_ParamLimits

0xf675,	// (0x0002a5a2) list_double2_large_graphic_pane_g

0x1a4d,	// (0x0001c97a) list_double2_large_graphic_pane_t1_ParamLimits

0x1a4d,	// (0x0001c97a) list_double2_large_graphic_pane_t1

0x1a63,	// (0x0001c990) list_double2_large_graphic_pane_t2_ParamLimits

0x1a63,	// (0x0001c990) list_double2_large_graphic_pane_t2

0x0001,

0xf67c,	// (0x0002a5a9) list_double2_large_graphic_pane_t_ParamLimits

0xf67c,	// (0x0002a5a9) list_double2_large_graphic_pane_t

0x1a75,	// (0x0001c9a2) list_double_heading_pane_g1_ParamLimits

0x1a75,	// (0x0001c9a2) list_double_heading_pane_g1

0x1a86,	// (0x0001c9b3) list_double_heading_pane_g2_ParamLimits

0x1a86,	// (0x0001c9b3) list_double_heading_pane_g2

0x0001,

0xf681,	// (0x0002a5ae) list_double_heading_pane_g_ParamLimits

0xf681,	// (0x0002a5ae) list_double_heading_pane_g

0x1a92,	// (0x0001c9bf) list_double_heading_pane_t1_ParamLimits

0x1a92,	// (0x0001c9bf) list_double_heading_pane_t1

0x1aa8,	// (0x0001c9d5) list_double_heading_pane_t2_ParamLimits

0x1aa8,	// (0x0001c9d5) list_double_heading_pane_t2

0x0001,

0xf686,	// (0x0002a5b3) list_double_heading_pane_t_ParamLimits

0xf686,	// (0x0002a5b3) list_double_heading_pane_t

0x1aba,	// (0x0001c9e7) list_double_graphic_heading_pane_g1_ParamLimits

0x1aba,	// (0x0001c9e7) list_double_graphic_heading_pane_g1

0x1a75,	// (0x0001c9a2) list_double_graphic_heading_pane_g2_ParamLimits

0x1a75,	// (0x0001c9a2) list_double_graphic_heading_pane_g2

0x1a86,	// (0x0001c9b3) list_double_graphic_heading_pane_g3_ParamLimits

0x1a86,	// (0x0001c9b3) list_double_graphic_heading_pane_g3

0x0002,

0xf68b,	// (0x0002a5b8) list_double_graphic_heading_pane_g_ParamLimits

0xf68b,	// (0x0002a5b8) list_double_graphic_heading_pane_g

0x1ac6,	// (0x0001c9f3) list_double_graphic_heading_pane_t1_ParamLimits

0x1ac6,	// (0x0001c9f3) list_double_graphic_heading_pane_t1

0x199c,	// (0x0001c8c9) list_double_graphic_heading_pane_t2_ParamLimits

0x199c,	// (0x0001c8c9) list_double_graphic_heading_pane_t2

0x0001,

0xf692,	// (0x0002a5bf) list_double_graphic_heading_pane_t_ParamLimits

0xf692,	// (0x0002a5bf) list_double_graphic_heading_pane_t

0x19d7,	// (0x0001c904) list_double_time_pane_g1_ParamLimits

0x19d7,	// (0x0001c904) list_double_time_pane_g1

0xaaab,	// (0x000259d8) list_double_time_pane_g2_ParamLimits

0xaaab,	// (0x000259d8) list_double_time_pane_g2

0x0001,

0xf697,	// (0x0002a5c4) list_double_time_pane_g_ParamLimits

0xf697,	// (0x0002a5c4) list_double_time_pane_g

0xaacd,	// (0x000259fa) list_double_time_pane_t1_ParamLimits

0xaacd,	// (0x000259fa) list_double_time_pane_t1

0x1adc,	// (0x0001ca09) list_double_time_pane_t2_ParamLimits

0x1adc,	// (0x0001ca09) list_double_time_pane_t2

0x1aee,	// (0x0001ca1b) list_double_time_pane_t3_ParamLimits

0x1aee,	// (0x0001ca1b) list_double_time_pane_t3

0x1b00,	// (0x0001ca2d) list_double_time_pane_t4_ParamLimits

0x1b00,	// (0x0001ca2d) list_double_time_pane_t4

0x0003,

0xf69c,	// (0x0002a5c9) list_double_time_pane_t_ParamLimits

0xf69c,	// (0x0002a5c9) list_double_time_pane_t

0x1b12,	// (0x0001ca3f) list_setting_pane_g1_ParamLimits

0x1b12,	// (0x0001ca3f) list_setting_pane_g1

0x1a86,	// (0x0001c9b3) list_setting_pane_g2_ParamLimits

0x1a86,	// (0x0001c9b3) list_setting_pane_g2

0x0001,

0xf6a5,	// (0x0002a5d2) list_setting_pane_g_ParamLimits

0xf6a5,	// (0x0002a5d2) list_setting_pane_g

0x1b1e,	// (0x0001ca4b) list_setting_pane_t1_ParamLimits

0x1b1e,	// (0x0001ca4b) list_setting_pane_t1

0x1b35,	// (0x0001ca62) list_setting_pane_t2_ParamLimits

0x1b35,	// (0x0001ca62) list_setting_pane_t2

0x0002,

0xf6aa,	// (0x0002a5d7) list_setting_pane_t_ParamLimits

0xf6aa,	// (0x0002a5d7) list_setting_pane_t

0x1b72,	// (0x0001ca9f) set_value_pane_cp_ParamLimits

0x1b72,	// (0x0001ca9f) set_value_pane_cp

0x1b7e,	// (0x0001caab) list_setting_number_pane_g1_ParamLimits

0x1b7e,	// (0x0001caab) list_setting_number_pane_g1

0x1b8a,	// (0x0001cab7) list_setting_number_pane_g2_ParamLimits

0x1b8a,	// (0x0001cab7) list_setting_number_pane_g2

0x0001,

0xf6b1,	// (0x0002a5de) list_setting_number_pane_g_ParamLimits

0xf6b1,	// (0x0002a5de) list_setting_number_pane_g

0x1b96,	// (0x0001cac3) list_setting_number_pane_t1_ParamLimits

0x1b96,	// (0x0001cac3) list_setting_number_pane_t1

0x1baa,	// (0x0001cad7) list_setting_number_pane_t2_ParamLimits

0x1baa,	// (0x0001cad7) list_setting_number_pane_t2

0x1bc1,	// (0x0001caee) list_setting_number_pane_t3_ParamLimits

0x1bc1,	// (0x0001caee) list_setting_number_pane_t3

0x0003,

0xf6b6,	// (0x0002a5e3) list_setting_number_pane_t_ParamLimits

0xf6b6,	// (0x0002a5e3) list_setting_number_pane_t

0x1b72,	// (0x0001ca9f) set_value_pane_ParamLimits

0x1b72,	// (0x0001ca9f) set_value_pane

0x5b2f,	// (0x00020a5c) bg_set_opt_pane_ParamLimits

0x5b2f,	// (0x00020a5c) bg_set_opt_pane

0xaef1,	// (0x00025e1e) set_value_pane_t1

0x5b50,	// (0x00020a7d) slider_set_pane_cp3

0x5b59,	// (0x00020a86) volume_small_pane_cp

0x5b62,	// (0x00020a8f) list_form_gen_pane

0x546a,	// (0x00020397) scroll_pane_cp8

0x1c04,	// (0x0001cb31) form_field_data_pane_ParamLimits

0x1c04,	// (0x0001cb31) form_field_data_pane

0x1c1b,	// (0x0001cb48) form_field_data_wide_pane_ParamLimits

0x1c1b,	// (0x0001cb48) form_field_data_wide_pane

0x1c3b,	// (0x0001cb68) form_field_popup_pane_ParamLimits

0x1c3b,	// (0x0001cb68) form_field_popup_pane

0x1c53,	// (0x0001cb80) form_field_popup_wide_pane_ParamLimits

0x1c53,	// (0x0001cb80) form_field_popup_wide_pane

0xaf7d,	// (0x00025eaa) form_field_slider_pane_ParamLimits

0xaf7d,	// (0x00025eaa) form_field_slider_pane

0xaf90,	// (0x00025ebd) form_field_slider_wide_pane_ParamLimits

0xaf90,	// (0x00025ebd) form_field_slider_wide_pane

0x5b6b,	// (0x00020a98) data_form_pane

0x25ac,	// (0x0001d4d9) form_field_data_pane_t1

0x5b77,	// (0x00020aa4) input_focus_pane

0x5b85,	// (0x00020ab2) data_form_wide_pane

0xafb7,	// (0x00025ee4) form_field_data_wide_pane_t1

0x52e9,	// (0x00020216) input_focus_pane_cp6

0x1c74,	// (0x0001cba1) form_field_popup_pane_t1

0x5b77,	// (0x00020aa4) input_focus_pane_cp7

0x5b6b,	// (0x00020a98) list_form_pane

0xaff9,	// (0x00025f26) form_field_popup_wide_pane_t1

0x5b77,	// (0x00020aa4) input_focus_pane_cp8

0x5ba5,	// (0x00020ad2) list_form_wide_pane

0x1c94,	// (0x0001cbc1) form_field_slider_pane_t1_ParamLimits

0x1c94,	// (0x0001cbc1) form_field_slider_pane_t1

0x1caa,	// (0x0001cbd7) form_field_slider_pane_t2_ParamLimits

0x1caa,	// (0x0001cbd7) form_field_slider_pane_t2

0x0001,

0xf6c6,	// (0x0002a5f3) form_field_slider_pane_t_ParamLimits

0xf6c6,	// (0x0002a5f3) form_field_slider_pane_t

0x4f0d,	// (0x0001fe3a) input_focus_pane_cp9_ParamLimits

0x4f0d,	// (0x0001fe3a) input_focus_pane_cp9

0x1cbf,	// (0x0001cbec) slider_cont_pane_ParamLimits

0x1cbf,	// (0x0001cbec) slider_cont_pane

0x5bb4,	// (0x00020ae1) form_field_slider_wide_pane_t1_ParamLimits

0x5bb4,	// (0x00020ae1) form_field_slider_wide_pane_t1

0xb04e,	// (0x00025f7b) form_field_slider_wide_pane_t2_ParamLimits

0xb04e,	// (0x00025f7b) form_field_slider_wide_pane_t2

0x0001,

0xf6cb,	// (0x0002a5f8) form_field_slider_wide_pane_t_ParamLimits

0xf6cb,	// (0x0002a5f8) form_field_slider_wide_pane_t

0x4f0d,	// (0x0001fe3a) input_focus_pane_cp10_ParamLimits

0x4f0d,	// (0x0001fe3a) input_focus_pane_cp10

0x1cd3,	// (0x0001cc00) slider_cont_pane_cp1_ParamLimits

0x1cd3,	// (0x0001cc00) slider_cont_pane_cp1

0x1ce9,	// (0x0001cc16) slider_form_pane_cp

0x5bc6,	// (0x00020af3) input_focus_pane_g1

0x5bce,	// (0x00020afb) input_focus_pane_g2

0x5bd6,	// (0x00020b03) input_focus_pane_g3

0x5bde,	// (0x00020b0b) input_focus_pane_g4

0x5be6,	// (0x00020b13) input_focus_pane_g5

0x5bee,	// (0x00020b1b) input_focus_pane_g6

0x5bf6,	// (0x00020b23) input_focus_pane_g7

0x5bfe,	// (0x00020b2b) input_focus_pane_g8

0x5c06,	// (0x00020b33) input_focus_pane_g9

0x4e3d,	// (0x0001fd6a) input_focus_pane_g10

0x0009,

0xf6d0,	// (0x0002a5fd) input_focus_pane_g

0x9854,	// (0x00024781) wait_border_pane_g3_copy1

0x1cf1,	// (0x0001cc1e) data_form_pane_t1

0x4e3d,	// (0x0001fd6a) wait_anim_pane_g1_copy1

0x1df9,	// (0x0001cd26) data_form_wide_pane_t1

0x5c0e,	// (0x00020b3b) list_form_graphic_pane_cp_ParamLimits

0x5c0e,	// (0x00020b3b) list_form_graphic_pane_cp

0xa454,	// (0x00025381) slider_form_pane_g1

0xa45d,	// (0x0002538a) slider_form_pane_g2

0x0006,

0xf9bc,	// (0x0002a8e9) slider_form_pane_g

0x1d0a,	// (0x0001cc37) list_form_graphic_pane_ParamLimits

0x1d0a,	// (0x0001cc37) list_form_graphic_pane

0xb0ae,	// (0x00025fdb) list_form_graphic_pane_g1

0xb0b6,	// (0x00025fe3) list_form_graphic_pane_t1_ParamLimits

0xb0b6,	// (0x00025fe3) list_form_graphic_pane_t1

0x4f23,	// (0x0001fe50) list_highlight_pane_cp5_ParamLimits

0x4f23,	// (0x0001fe50) list_highlight_pane_cp5

0x1d1f,	// (0x0001cc4c) find_pane_g1

0x5c22,	// (0x00020b4f) input_find_pane

0x1d2a,	// (0x0001cc57) input_find_pane_g1_ParamLimits

0x1d2a,	// (0x0001cc57) input_find_pane_g1

0xb0e0,	// (0x0002600d) input_find_pane_t1_ParamLimits

0xb0e0,	// (0x0002600d) input_find_pane_t1

0xb0f5,	// (0x00026022) input_find_pane_t2_ParamLimits

0xb0f5,	// (0x00026022) input_find_pane_t2

0x0001,

0xf6e5,	// (0x0002a612) input_find_pane_t_ParamLimits

0xf6e5,	// (0x0002a612) input_find_pane_t

0x5c2b,	// (0x00020b58) input_focus_pane_cp5_ParamLimits

0x5c2b,	// (0x00020b58) input_focus_pane_cp5

0x4f0d,	// (0x0001fe3a) bg_popup_window_pane_cp2_ParamLimits

0x4f0d,	// (0x0001fe3a) bg_popup_window_pane_cp2

0x5c45,	// (0x00020b72) listscroll_menu_pane_ParamLimits

0x5c45,	// (0x00020b72) listscroll_menu_pane

0x5c51,	// (0x00020b7e) popup_submenu_window_ParamLimits

0x5c51,	// (0x00020b7e) popup_submenu_window

0x5c75,	// (0x00020ba2) find_popup_pane_g1

0x5c7d,	// (0x00020baa) input_popup_find_pane_cp

0x5c2b,	// (0x00020b58) input_focus_pane_cp4_ParamLimits

0x5c2b,	// (0x00020b58) input_focus_pane_cp4

0x5c87,	// (0x00020bb4) input_popup_find_pane_t1_ParamLimits

0x5c87,	// (0x00020bb4) input_popup_find_pane_t1

0x4ebf,	// (0x0001fdec) bg_popup_sub_pane_cp

0x5cb5,	// (0x00020be2) listscroll_popup_sub_pane

0x5cbd,	// (0x00020bea) list_submenu_pane_ParamLimits

0x5cbd,	// (0x00020bea) list_submenu_pane

0x5cce,	// (0x00020bfb) scroll_pane_cp4

0x5c0e,	// (0x00020b3b) list_single_popup_submenu_pane_ParamLimits

0x5c0e,	// (0x00020b3b) list_single_popup_submenu_pane

0x5cd6,	// (0x00020c03) list_single_popup_submenu_pane_g1

0x5cde,	// (0x00020c0b) list_single_popup_submenu_pane_t1_ParamLimits

0x5cde,	// (0x00020c0b) list_single_popup_submenu_pane_t1

0x4f0d,	// (0x0001fe3a) bg_active_tab_pane_cp1_ParamLimits

0x4f0d,	// (0x0001fe3a) bg_active_tab_pane_cp1

0xa55a,	// (0x00025487) tabs_2_active_pane_g1

0x25d0,	// (0x0001d4fd) tabs_2_active_pane_t1

0x4f0d,	// (0x0001fe3a) bg_passive_tab_pane_cp1_ParamLimits

0x4f0d,	// (0x0001fe3a) bg_passive_tab_pane_cp1

0xa55a,	// (0x00025487) tabs_2_passive_pane_g1

0x25d0,	// (0x0001d4fd) tabs_2_passive_pane_t1

0x4f23,	// (0x0001fe50) bg_active_tab_pane_cp4

0x25e6,	// (0x0001d513) tabs_2_long_active_pane_t1

0x9090,	// (0x00023fbd) bg_passive_tab_pane_cp4

0x7fe8,	// (0x00022f15) list_single_midp_graphic_pane_g4_ParamLimits

0x4f23,	// (0x0001fe50) bg_active_tab_pane_cp5

0x25fd,	// (0x0001d52a) tabs_3_long_active_pane_t1

0x9090,	// (0x00023fbd) bg_passive_tab_pane_cp5

0x7fe8,	// (0x00022f15) list_single_midp_graphic_pane_g4

0x4f23,	// (0x0001fe50) bg_popup_window_pane_cp13_ParamLimits

0x4f23,	// (0x0001fe50) bg_popup_window_pane_cp13

0x5cfc,	// (0x00020c29) listscroll_popup_fast_pane_ParamLimits

0x5cfc,	// (0x00020c29) listscroll_popup_fast_pane

0x5d0b,	// (0x00020c38) grid_popup_fast_pane_ParamLimits

0x5d0b,	// (0x00020c38) grid_popup_fast_pane

0x5d1d,	// (0x00020c4a) scroll_pane_cp9_ParamLimits

0x5d1d,	// (0x00020c4a) scroll_pane_cp9

0xd3e3,	// (0x00028310) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xd3e3,	// (0x00028310) list_single_graphic_hl_pane_t1_cp2

0x5d41,	// (0x00020c6e) input_focus_pane_cp20_ParamLimits

0x5d41,	// (0x00020c6e) input_focus_pane_cp20

0x5d4f,	// (0x00020c7c) query_popup_data_pane_t1_ParamLimits

0x5d4f,	// (0x00020c7c) query_popup_data_pane_t1

0x5d62,	// (0x00020c8f) query_popup_data_pane_t2_ParamLimits

0x5d62,	// (0x00020c8f) query_popup_data_pane_t2

0x5da8,	// (0x00020cd5) query_popup_data_pane_t3_ParamLimits

0x5da8,	// (0x00020cd5) query_popup_data_pane_t3

0x5de9,	// (0x00020d16) query_popup_data_pane_t4_ParamLimits

0x5de9,	// (0x00020d16) query_popup_data_pane_t4

0x5e25,	// (0x00020d52) query_popup_data_pane_t5_ParamLimits

0x5e25,	// (0x00020d52) query_popup_data_pane_t5

0x0004,

0xf6ea,	// (0x0002a617) query_popup_data_pane_t_ParamLimits

0xf6ea,	// (0x0002a617) query_popup_data_pane_t

0x5bc6,	// (0x00020af3) bg_set_opt_pane_g1

0x5bce,	// (0x00020afb) bg_set_opt_pane_g2

0x5bd6,	// (0x00020b03) bg_set_opt_pane_g3

0x5bde,	// (0x00020b0b) bg_set_opt_pane_g4

0x5be6,	// (0x00020b13) bg_set_opt_pane_g5

0x5bee,	// (0x00020b1b) bg_set_opt_pane_g6

0x5bf6,	// (0x00020b23) bg_set_opt_pane_g7

0x5bfe,	// (0x00020b2b) bg_set_opt_pane_g8

0x5c06,	// (0x00020b33) bg_set_opt_pane_g9

0x0008,

0xf6f5,	// (0x0002a622) bg_set_opt_pane_g

0x7b8b,	// (0x00022ab8) control_top_pane_stacon_ParamLimits

0x7b8b,	// (0x00022ab8) control_top_pane_stacon

0x7bde,	// (0x00022b0b) signal_pane_stacon_ParamLimits

0x7bde,	// (0x00022b0b) signal_pane_stacon

0x6243,	// (0x00021170) stacon_top_pane_g1_ParamLimits

0x6243,	// (0x00021170) stacon_top_pane_g1

0x7c03,	// (0x00022b30) title_pane_stacon_ParamLimits

0x7c03,	// (0x00022b30) title_pane_stacon

0x7c25,	// (0x00022b52) uni_indicator_pane_stacon_ParamLimits

0x7c25,	// (0x00022b52) uni_indicator_pane_stacon

0x7c3a,	// (0x00022b67) battery_pane_stacon_ParamLimits

0x7c3a,	// (0x00022b67) battery_pane_stacon

0x7c7a,	// (0x00022ba7) control_bottom_pane_stacon_ParamLimits

0x7c7a,	// (0x00022ba7) control_bottom_pane_stacon

0x7c99,	// (0x00022bc6) navi_pane_stacon_ParamLimits

0x7c99,	// (0x00022bc6) navi_pane_stacon

0x6265,	// (0x00021192) stacon_bottom_pane_g1_ParamLimits

0x6265,	// (0x00021192) stacon_bottom_pane_g1

0x5e5c,	// (0x00020d89) aid_levels_signal_lsc_ParamLimits

0x5e5c,	// (0x00020d89) aid_levels_signal_lsc

0x77cc,	// (0x000226f9) signal_pane_stacon_g1_ParamLimits

0x77cc,	// (0x000226f9) signal_pane_stacon_g1

0x77d8,	// (0x00022705) signal_pane_stacon_g2_ParamLimits

0x77d8,	// (0x00022705) signal_pane_stacon_g2

0x0001,

0xf708,	// (0x0002a635) signal_pane_stacon_g_ParamLimits

0xf708,	// (0x0002a635) signal_pane_stacon_g

0x780c,	// (0x00022739) title_pane_stacon_t1_ParamLimits

0x780c,	// (0x00022739) title_pane_stacon_t1

0x5e8a,	// (0x00020db7) uni_indicator_pane_stacon_g1

0x5e94,	// (0x00020dc1) uni_indicator_pane_stacon_g2

0x5e76,	// (0x00020da3) uni_indicator_pane_stacon_g3

0x5e80,	// (0x00020dad) uni_indicator_pane_stacon_g4

0x0003,

0xf714,	// (0x0002a641) uni_indicator_pane_stacon_g

0x7831,	// (0x0002275e) control_top_pane_stacon_g1

0x7839,	// (0x00022766) control_top_pane_stacon_t1_ParamLimits

0x7839,	// (0x00022766) control_top_pane_stacon_t1

0x5e9e,	// (0x00020dcb) aid_levels_battery_lsc_ParamLimits

0x5e9e,	// (0x00020dcb) aid_levels_battery_lsc

0x786a,	// (0x00022797) battery_pane_stacon_g1_ParamLimits

0x786a,	// (0x00022797) battery_pane_stacon_g1

0x7876,	// (0x000227a3) battery_pane_stacon_g2_ParamLimits

0x7876,	// (0x000227a3) battery_pane_stacon_g2

0x0001,

0xf71d,	// (0x0002a64a) battery_pane_stacon_g_ParamLimits

0xf71d,	// (0x0002a64a) battery_pane_stacon_g

0x78a5,	// (0x000227d2) navi_icon_pane_stacon

0x78b5,	// (0x000227e2) navi_navi_pane_stacon

0x78a5,	// (0x000227d2) navi_text_pane_stacon

0x7831,	// (0x0002275e) control_bottom_pane_stacon_g1

0x78c5,	// (0x000227f2) control_bottom_pane_stacon_t1_ParamLimits

0x78c5,	// (0x000227f2) control_bottom_pane_stacon_t1

0x2613,	// (0x0001d540) grid_app_pane_ParamLimits

0x2613,	// (0x0001d540) grid_app_pane

0x2641,	// (0x0001d56e) scroll_pane_cp15_ParamLimits

0x2641,	// (0x0001d56e) scroll_pane_cp15

0x2658,	// (0x0001d585) cell_app_pane_ParamLimits

0x2658,	// (0x0001d585) cell_app_pane

0x2697,	// (0x0001d5c4) cell_app_pane_g1_ParamLimits

0x2697,	// (0x0001d5c4) cell_app_pane_g1

0x5ec6,	// (0x00020df3) cell_app_pane_g2_ParamLimits

0x5ec6,	// (0x00020df3) cell_app_pane_g2

0x0001,

0xf722,	// (0x0002a64f) cell_app_pane_g_ParamLimits

0xf722,	// (0x0002a64f) cell_app_pane_g

0x5ed2,	// (0x00020dff) cell_app_pane_t1_ParamLimits

0x5ed2,	// (0x00020dff) cell_app_pane_t1

0x5ee4,	// (0x00020e11) grid_highlight_pane_ParamLimits

0x5ee4,	// (0x00020e11) grid_highlight_pane

0x5bc6,	// (0x00020af3) cell_highlight_pane_g1

0x5bce,	// (0x00020afb) cell_highlight_pane_g2

0x5bd6,	// (0x00020b03) cell_highlight_pane_g3

0x5bde,	// (0x00020b0b) cell_highlight_pane_g4

0x5be6,	// (0x00020b13) cell_highlight_pane_g5

0x5bee,	// (0x00020b1b) cell_highlight_pane_g6

0x5bf6,	// (0x00020b23) cell_highlight_pane_g7

0x5bfe,	// (0x00020b2b) cell_highlight_pane_g8

0x5c06,	// (0x00020b33) cell_highlight_pane_g9

0x4e3d,	// (0x0001fd6a) cell_highlight_pane_g10

0x0009,

0xf6d0,	// (0x0002a5fd) cell_highlight_pane_g

0x5ef5,	// (0x00020e22) bg_scroll_pane

0x797e,	// (0x000228ab) scroll_handle_pane

0x5f3c,	// (0x00020e69) scroll_bg_pane_g1

0x5f51,	// (0x00020e7e) scroll_bg_pane_g2

0x5f69,	// (0x00020e96) scroll_bg_pane_g3

0x0002,

0xf727,	// (0x0002a654) scroll_bg_pane_g

0x5f7e,	// (0x00020eab) scroll_handle_focus_pane_ParamLimits

0x5f7e,	// (0x00020eab) scroll_handle_focus_pane

0x5f3c,	// (0x00020e69) scroll_handle_pane_g1

0x5f8b,	// (0x00020eb8) scroll_handle_pane_g2

0x5f69,	// (0x00020e96) scroll_handle_pane_g3

0x0002,

0xf72e,	// (0x0002a65b) scroll_handle_pane_g

0x5c2b,	// (0x00020b58) bg_popup_sub_pane_cp21_ParamLimits

0x5c2b,	// (0x00020b58) bg_popup_sub_pane_cp21

0x5f9f,	// (0x00020ecc) popup_fep_japan_predictive_window_t1_ParamLimits

0x5f9f,	// (0x00020ecc) popup_fep_japan_predictive_window_t1

0x5fb6,	// (0x00020ee3) popup_fep_japan_predictive_window_t2_ParamLimits

0x5fb6,	// (0x00020ee3) popup_fep_japan_predictive_window_t2

0x5fe9,	// (0x00020f16) popup_fep_japan_predictive_window_t3_ParamLimits

0x5fe9,	// (0x00020f16) popup_fep_japan_predictive_window_t3

0x0002,

0xf735,	// (0x0002a662) popup_fep_japan_predictive_window_t_ParamLimits

0xf735,	// (0x0002a662) popup_fep_japan_predictive_window_t

0x4ebf,	// (0x0001fdec) bg_popup_sub_pane_cp23

0x6020,	// (0x00020f4d) listscroll_japin_cand_pane

0x6028,	// (0x00020f55) popup_fep_japan_candidate_window_t1

0x6036,	// (0x00020f63) candidate_pane_ParamLimits

0x6036,	// (0x00020f63) candidate_pane

0x6049,	// (0x00020f76) scroll_pane_cp30

0x6051,	// (0x00020f7e) list_single_popup_jap_candidate_pane_ParamLimits

0x6051,	// (0x00020f7e) list_single_popup_jap_candidate_pane

0x4ebf,	// (0x0001fdec) list_highlight_pane_cp30

0x6066,	// (0x00020f93) list_single_popup_jap_candidate_pane_t1

0x26c4,	// (0x0001d5f1) level_1_signal

0x26d6,	// (0x0001d603) level_2_signal

0x26e9,	// (0x0001d616) level_3_signal

0x26fc,	// (0x0001d629) level_4_signal

0x270f,	// (0x0001d63c) level_5_signal

0x2722,	// (0x0001d64f) level_6_signal

0x2735,	// (0x0001d662) level_7_signal

0x26c4,	// (0x0001d5f1) level_1_battery

0x26d6,	// (0x0001d603) level_2_battery

0x26e9,	// (0x0001d616) level_3_battery

0x26fc,	// (0x0001d629) level_4_battery

0x270f,	// (0x0001d63c) level_5_battery

0x2722,	// (0x0001d64f) level_6_battery

0x2735,	// (0x0001d662) level_7_battery

0x608d,	// (0x00020fba) list_menu_pane_ParamLimits

0x608d,	// (0x00020fba) list_menu_pane

0x609e,	// (0x00020fcb) scroll_pane_cp25_ParamLimits

0x609e,	// (0x00020fcb) scroll_pane_cp25

0x2748,	// (0x0001d675) list_double2_graphic_pane_cp2_ParamLimits

0x2748,	// (0x0001d675) list_double2_graphic_pane_cp2

0x2748,	// (0x0001d675) list_double2_large_graphic_pane_cp2_ParamLimits

0x2748,	// (0x0001d675) list_double2_large_graphic_pane_cp2

0x2748,	// (0x0001d675) list_double2_pane_cp2_ParamLimits

0x2748,	// (0x0001d675) list_double2_pane_cp2

0x2748,	// (0x0001d675) list_double_graphic_pane_cp2_ParamLimits

0x2748,	// (0x0001d675) list_double_graphic_pane_cp2

0x2748,	// (0x0001d675) list_double_large_graphic_pane_cp2_ParamLimits

0x2748,	// (0x0001d675) list_double_large_graphic_pane_cp2

0x2748,	// (0x0001d675) list_double_number_pane_cp2_ParamLimits

0x2748,	// (0x0001d675) list_double_number_pane_cp2

0x2748,	// (0x0001d675) list_double_pane_cp2_ParamLimits

0x2748,	// (0x0001d675) list_double_pane_cp2

0x2763,	// (0x0001d690) list_single_2graphic_pane_cp2_ParamLimits

0x2763,	// (0x0001d690) list_single_2graphic_pane_cp2

0x2763,	// (0x0001d690) list_single_graphic_heading_pane_cp2_ParamLimits

0x2763,	// (0x0001d690) list_single_graphic_heading_pane_cp2

0x2763,	// (0x0001d690) list_single_graphic_pane_cp2_ParamLimits

0x2763,	// (0x0001d690) list_single_graphic_pane_cp2

0x2763,	// (0x0001d690) list_single_heading_pane_cp2_ParamLimits

0x2763,	// (0x0001d690) list_single_heading_pane_cp2

0x2774,	// (0x0001d6a1) list_single_large_graphic_pane_cp2_ParamLimits

0x2774,	// (0x0001d6a1) list_single_large_graphic_pane_cp2

0x2763,	// (0x0001d690) list_single_number_heading_pane_cp2_ParamLimits

0x2763,	// (0x0001d690) list_single_number_heading_pane_cp2

0x2763,	// (0x0001d690) list_single_number_pane_cp2_ParamLimits

0x2763,	// (0x0001d690) list_single_number_pane_cp2

0x2763,	// (0x0001d690) list_single_pane_cp2_ParamLimits

0x2763,	// (0x0001d690) list_single_pane_cp2

0x60c0,	// (0x00020fed) bg_popup_sub_pane_cp22

0x7afb,	// (0x00022a28) popup_side_volume_key_window_g1

0x7b1f,	// (0x00022a4c) popup_side_volume_key_window_t1

0x7b3b,	// (0x00022a68) volume_small_pane_cp1

0x4f0d,	// (0x0001fe3a) bg_popup_sub_pane_cp24_ParamLimits

0x4f0d,	// (0x0001fe3a) bg_popup_sub_pane_cp24

0x60d6,	// (0x00021003) fep_china_uni_candidate_pane_ParamLimits

0x60d6,	// (0x00021003) fep_china_uni_candidate_pane

0x6108,	// (0x00021035) fep_china_uni_entry_pane

0x6118,	// (0x00021045) popup_fep_china_uni_window_g1

0x6134,	// (0x00021061) fep_china_uni_entry_pane_g1

0x613c,	// (0x00021069) fep_china_uni_entry_pane_g2

0x0001,

0xf762,	// (0x0002a68f) fep_china_uni_entry_pane_g

0x6144,	// (0x00021071) fep_entry_item_pane

0x614e,	// (0x0002107b) fep_candidate_item_pane

0x6156,	// (0x00021083) fep_china_uni_candidate_pane_g1

0x615e,	// (0x0002108b) fep_china_uni_candidate_pane_g2

0x6166,	// (0x00021093) fep_china_uni_candidate_pane_g3

0x616e,	// (0x0002109b) fep_china_uni_candidate_pane_g4

0x0003,

0xf767,	// (0x0002a694) fep_china_uni_candidate_pane_g

0x4e3d,	// (0x0001fd6a) fep_entry_item_pane_g1

0x6176,	// (0x000210a3) fep_entry_item_pane_t1_ParamLimits

0x6176,	// (0x000210a3) fep_entry_item_pane_t1

0x618c,	// (0x000210b9) fep_candidate_item_pane_t1_ParamLimits

0x618c,	// (0x000210b9) fep_candidate_item_pane_t1

0x61a1,	// (0x000210ce) fep_candidate_item_pane_t2_ParamLimits

0x61a1,	// (0x000210ce) fep_candidate_item_pane_t2

0x0001,

0xf770,	// (0x0002a69d) fep_candidate_item_pane_t_ParamLimits

0xf770,	// (0x0002a69d) fep_candidate_item_pane_t

0x4f23,	// (0x0001fe50) list_highlight_pane_cp31_ParamLimits

0x4f23,	// (0x0001fe50) list_highlight_pane_cp31

0x61b3,	// (0x000210e0) level_1_signal_lsc

0x61bc,	// (0x000210e9) level_2_signal_lsc

0x61c5,	// (0x000210f2) level_3_signal_lsc

0x61ce,	// (0x000210fb) level_4_signal_lsc

0x61d7,	// (0x00021104) level_5_signal_lsc

0x61e0,	// (0x0002110d) level_6_signal_lsc

0x61e9,	// (0x00021116) level_7_signal_lsc

0x61e9,	// (0x00021116) level_1_battery_lsc

0x61f2,	// (0x0002111f) level_2_battery_lsc

0x61fb,	// (0x00021128) level_3_battery_lsc

0x6204,	// (0x00021131) level_4_battery_lsc

0x620d,	// (0x0002113a) level_5_battery_lsc

0x6216,	// (0x00021143) level_6_battery_lsc

0x61b3,	// (0x000210e0) level_7_battery_lsc

0x621f,	// (0x0002114c) scroll_handle_focus_pane_g1

0x6228,	// (0x00021155) scroll_handle_focus_pane_g2

0x6231,	// (0x0002115e) scroll_handle_focus_pane_g3

0x0002,

0xf775,	// (0x0002a6a2) scroll_handle_focus_pane_g

0xb10a,	// (0x00026037) list_single_2graphic_pane_g1_ParamLimits

0xb10a,	// (0x00026037) list_single_2graphic_pane_g1

0x1891,	// (0x0001c7be) list_single_2graphic_pane_g2_ParamLimits

0x1891,	// (0x0001c7be) list_single_2graphic_pane_g2

0xb1d2,	// (0x000260ff) list_single_2graphic_pane_g3_ParamLimits

0xb1d2,	// (0x000260ff) list_single_2graphic_pane_g3

0x1d36,	// (0x0001cc63) list_single_2graphic_pane_g4_ParamLimits

0x1d36,	// (0x0001cc63) list_single_2graphic_pane_g4

0x0003,

0xf77c,	// (0x0002a6a9) list_single_2graphic_pane_g_ParamLimits

0xf77c,	// (0x0002a6a9) list_single_2graphic_pane_g

0x1d42,	// (0x0001cc6f) list_single_2graphic_pane_t1_ParamLimits

0x1d42,	// (0x0001cc6f) list_single_2graphic_pane_t1

0x1d70,	// (0x0001cc9d) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x1d70,	// (0x0001cc9d) list_double2_graphic_large_graphic_pane_g1

0x1a30,	// (0x0001c95d) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x1a30,	// (0x0001c95d) list_double2_graphic_large_graphic_pane_g2

0x1a41,	// (0x0001c96e) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x1a41,	// (0x0001c96e) list_double2_graphic_large_graphic_pane_g3

0x1d80,	// (0x0001ccad) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x1d80,	// (0x0001ccad) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf785,	// (0x0002a6b2) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf785,	// (0x0002a6b2) list_double2_graphic_large_graphic_pane_g

0x1d8c,	// (0x0001ccb9) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x1d8c,	// (0x0001ccb9) list_double2_graphic_large_graphic_pane_t1

0x1da2,	// (0x0001cccf) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x1da2,	// (0x0001cccf) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf78e,	// (0x0002a6bb) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf78e,	// (0x0002a6bb) list_double2_graphic_large_graphic_pane_t

0x630c,	// (0x00021239) popup_fast_swap_window_ParamLimits

0x630c,	// (0x00021239) popup_fast_swap_window

0x6328,	// (0x00021255) popup_side_volume_key_window

0x6342,	// (0x0002126f) stacon_top_pane

0x634c,	// (0x00021279) status_pane_ParamLimits

0x634c,	// (0x00021279) status_pane

0x6342,	// (0x0002126f) status_small_pane

0x4ebf,	// (0x0001fdec) control_pane

0x4ebf,	// (0x0001fdec) stacon_bottom_pane

0x546a,	// (0x00020397) scroll_pane_cp121

0x5b62,	// (0x00020a8f) set_content_pane

0xa548,	// (0x00025475) bg_active_tab_pane_g1_cp1

0x623a,	// (0x00021167) bg_active_tab_pane_g2_cp1

0xa551,	// (0x0002547e) bg_active_tab_pane_g3_cp1

0xa548,	// (0x00025475) bg_passive_tab_pane_g1_cp1

0x623a,	// (0x00021167) bg_passive_tab_pane_g2_cp1

0xa551,	// (0x0002547e) bg_passive_tab_pane_g3_cp1

0x27d6,	// (0x0001d703) bg_active_tab_pane_g1_cp2

0x623a,	// (0x00021167) bg_active_tab_pane_g2_cp2

0x27cd,	// (0x0001d6fa) bg_active_tab_pane_g3_cp2

0x27d6,	// (0x0001d703) bg_passive_tab_pane_g1_cp2

0x623a,	// (0x00021167) bg_passive_tab_pane_g2_cp2

0x27cd,	// (0x0001d6fa) bg_passive_tab_pane_g3_cp2

0x27e8,	// (0x0001d715) bg_active_tab_pane_g1_cp3

0x623a,	// (0x00021167) bg_active_tab_pane_g2_cp3

0x27df,	// (0x0001d70c) bg_active_tab_pane_g3_cp3

0x27e8,	// (0x0001d715) bg_passive_tab_pane_g1_cp3

0x623a,	// (0x00021167) bg_passive_tab_pane_g2_cp3

0x27df,	// (0x0001d70c) bg_passive_tab_pane_g3_cp3

0x27fa,	// (0x0001d727) bg_active_tab_pane_g1_cp4

0x623a,	// (0x00021167) bg_active_tab_pane_g2_cp4

0x27f1,	// (0x0001d71e) bg_active_tab_pane_g3_cp4

0x27fa,	// (0x0001d727) bg_passive_tab_pane_g1_cp4

0x623a,	// (0x00021167) bg_passive_tab_pane_g2_cp4

0x27f1,	// (0x0001d71e) bg_passive_tab_pane_g3_cp4

0x628a,	// (0x000211b7) bg_active_tab_pane_g1_cp5

0x623a,	// (0x00021167) bg_active_tab_pane_g2_cp5

0x6281,	// (0x000211ae) bg_active_tab_pane_g3_cp5

0x628a,	// (0x000211b7) bg_passive_tab_pane_g1_cp5

0x623a,	// (0x00021167) bg_passive_tab_pane_g2_cp5

0x6281,	// (0x000211ae) bg_passive_tab_pane_g3_cp5

0x2803,	// (0x0001d730) list_set_graphic_pane_ParamLimits

0x2803,	// (0x0001d730) list_set_graphic_pane

0x4ebf,	// (0x0001fdec) bg_set_opt_pane_cp4

0x6293,	// (0x000211c0) list_set_graphic_pane_g1_ParamLimits

0x6293,	// (0x000211c0) list_set_graphic_pane_g1

0x629f,	// (0x000211cc) list_set_graphic_pane_g2_ParamLimits

0x629f,	// (0x000211cc) list_set_graphic_pane_g2

0x0001,

0xf793,	// (0x0002a6c0) list_set_graphic_pane_g_ParamLimits

0xf793,	// (0x0002a6c0) list_set_graphic_pane_g

0x0009,

0xfaf2,	// (0x0002aa1f) volume_small_pane_cp_g

0x62c1,	// (0x000211ee) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x62c1,	// (0x000211ee) list_double2_large_graphic_pane_g1_cp2

0x62cd,	// (0x000211fa) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x62cd,	// (0x000211fa) list_double2_large_graphic_pane_g2_cp2

0x62dc,	// (0x00021209) list_double2_large_graphic_pane_g3_cp2

0x62e4,	// (0x00021211) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x62e4,	// (0x00021211) list_double2_large_graphic_pane_t1_cp2

0x62fa,	// (0x00021227) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x62fa,	// (0x00021227) list_double2_large_graphic_pane_t2_cp2

0xa204,	// (0x00025131) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xa204,	// (0x00025131) list_double_large_graphic_pane_g1_cp2

0xa215,	// (0x00025142) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xa215,	// (0x00025142) list_double_large_graphic_pane_g2_cp2

0x6427,	// (0x00021354) list_double_large_graphic_pane_g3_cp2

0xa224,	// (0x00025151) list_double_large_graphic_pane_g4_cp

0xa22c,	// (0x00025159) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xa22c,	// (0x00025159) list_double_large_graphic_pane_t1_cp2

0xa243,	// (0x00025170) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xa243,	// (0x00025170) list_double_large_graphic_pane_t2_cp2

0x635a,	// (0x00021287) list_double2_graphic_pane_g1_cp2_ParamLimits

0x635a,	// (0x00021287) list_double2_graphic_pane_g1_cp2

0x6366,	// (0x00021293) list_double2_graphic_pane_g2_cp2_ParamLimits

0x6366,	// (0x00021293) list_double2_graphic_pane_g2_cp2

0x6375,	// (0x000212a2) list_double2_graphic_pane_g3_cp2

0x637d,	// (0x000212aa) list_double2_graphic_pane_t1_cp2_ParamLimits

0x637d,	// (0x000212aa) list_double2_graphic_pane_t1_cp2

0x6393,	// (0x000212c0) list_double2_graphic_pane_t2_cp2_ParamLimits

0x6393,	// (0x000212c0) list_double2_graphic_pane_t2_cp2

0x63a5,	// (0x000212d2) list_single_number_heading_pane_g1_cp2_ParamLimits

0x63a5,	// (0x000212d2) list_single_number_heading_pane_g1_cp2

0x63b1,	// (0x000212de) list_single_number_heading_pane_g2_cp2

0x63b9,	// (0x000212e6) list_single_number_heading_pane_t1_cp2_ParamLimits

0x63b9,	// (0x000212e6) list_single_number_heading_pane_t1_cp2

0x63cf,	// (0x000212fc) list_single_number_heading_pane_t2_cp2_ParamLimits

0x63cf,	// (0x000212fc) list_single_number_heading_pane_t2_cp2

0x63e1,	// (0x0002130e) list_single_number_heading_pane_t3_cp2_ParamLimits

0x63e1,	// (0x0002130e) list_single_number_heading_pane_t3_cp2

0x63a5,	// (0x000212d2) list_single_heading_pane_g1_cp2_ParamLimits

0x63a5,	// (0x000212d2) list_single_heading_pane_g1_cp2

0x63b1,	// (0x000212de) list_single_heading_pane_g2_cp2

0x63b9,	// (0x000212e6) list_single_heading_pane_t1_cp2_ParamLimits

0x63b9,	// (0x000212e6) list_single_heading_pane_t1_cp2

0xa00e,	// (0x00024f3b) list_single_heading_pane_t2_cp2_ParamLimits

0xa00e,	// (0x00024f3b) list_single_heading_pane_t2_cp2

0x9f5e,	// (0x00024e8b) list_double_graphic_pane_g1_cp2_ParamLimits

0x9f5e,	// (0x00024e8b) list_double_graphic_pane_g1_cp2

0x9f6a,	// (0x00024e97) list_double_graphic_pane_g2_cp2_ParamLimits

0x9f6a,	// (0x00024e97) list_double_graphic_pane_g2_cp2

0x9f79,	// (0x00024ea6) list_double_graphic_pane_g3_cp2

0x9f81,	// (0x00024eae) list_double_graphic_pane_t1_cp2_ParamLimits

0x9f81,	// (0x00024eae) list_double_graphic_pane_t1_cp2

0x9f97,	// (0x00024ec4) list_double_graphic_pane_t2_cp2_ParamLimits

0x9f97,	// (0x00024ec4) list_double_graphic_pane_t2_cp2

0x641b,	// (0x00021348) list_double_number_pane_g1_cp2_ParamLimits

0x641b,	// (0x00021348) list_double_number_pane_g1_cp2

0x6427,	// (0x00021354) list_double_number_pane_g2_cp2

0x9f24,	// (0x00024e51) list_double_number_pane_t1_cp2_ParamLimits

0x9f24,	// (0x00024e51) list_double_number_pane_t1_cp2

0x9f36,	// (0x00024e63) list_double_number_pane_t2_cp2_ParamLimits

0x9f36,	// (0x00024e63) list_double_number_pane_t2_cp2

0x9f4c,	// (0x00024e79) list_double_number_pane_t3_cp2_ParamLimits

0x9f4c,	// (0x00024e79) list_double_number_pane_t3_cp2

0x9e9c,	// (0x00024dc9) list_single_graphic_pane_g1_cp2_ParamLimits

0x9e9c,	// (0x00024dc9) list_single_graphic_pane_g1_cp2

0x63a5,	// (0x000212d2) list_single_graphic_pane_g2_cp2_ParamLimits

0x63a5,	// (0x000212d2) list_single_graphic_pane_g2_cp2

0x63b1,	// (0x000212de) list_single_graphic_pane_g3_cp2

0x9e74,	// (0x00024da1) list_single_graphic_pane_t1_cp2_ParamLimits

0x9e74,	// (0x00024da1) list_single_graphic_pane_t1_cp2

0x63a5,	// (0x000212d2) list_single_number_pane_g1_cp2_ParamLimits

0x63a5,	// (0x000212d2) list_single_number_pane_g1_cp2

0x63b1,	// (0x000212de) list_single_number_pane_g2_cp2

0x9e74,	// (0x00024da1) list_single_number_pane_t1_cp2_ParamLimits

0x9e74,	// (0x00024da1) list_single_number_pane_t1_cp2

0x9e8a,	// (0x00024db7) list_single_number_pane_t2_cp2_ParamLimits

0x9e8a,	// (0x00024db7) list_single_number_pane_t2_cp2

0x62cd,	// (0x000211fa) list_double2_pane_g1_cp2_ParamLimits

0x62cd,	// (0x000211fa) list_double2_pane_g1_cp2

0x62dc,	// (0x00021209) list_double2_pane_g2_cp2

0x63f3,	// (0x00021320) list_double2_pane_t1_cp2_ParamLimits

0x63f3,	// (0x00021320) list_double2_pane_t1_cp2

0x6409,	// (0x00021336) list_double2_pane_t2_cp2_ParamLimits

0x6409,	// (0x00021336) list_double2_pane_t2_cp2

0x641b,	// (0x00021348) list_double_pane_g1_cp2_ParamLimits

0x641b,	// (0x00021348) list_double_pane_g1_cp2

0x6427,	// (0x00021354) list_double_pane_g2_cp2

0x642f,	// (0x0002135c) list_double_pane_t1_cp2_ParamLimits

0x642f,	// (0x0002135c) list_double_pane_t1_cp2

0x6445,	// (0x00021372) list_double_pane_t2_cp2_ParamLimits

0x6445,	// (0x00021372) list_double_pane_t2_cp2

0x646d,	// (0x0002139a) list_single_pane_cp2_g3

0x63a5,	// (0x000212d2) list_single_pane_g1_cp2_ParamLimits

0x63a5,	// (0x000212d2) list_single_pane_g1_cp2

0x63b1,	// (0x000212de) list_single_pane_g2_cp2

0x647d,	// (0x000213aa) list_single_pane_t1_cp2_ParamLimits

0x647d,	// (0x000213aa) list_single_pane_t1_cp2

0x6495,	// (0x000213c2) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x6495,	// (0x000213c2) list_single_large_graphic_pane_g1_cp2

0x64a1,	// (0x000213ce) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x64a1,	// (0x000213ce) list_single_large_graphic_pane_g2_cp2

0x64ad,	// (0x000213da) list_single_large_graphic_pane_g3_cp2

0x64b5,	// (0x000213e2) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x64b5,	// (0x000213e2) list_single_large_graphic_pane_g4_cp1

0x64cf,	// (0x000213fc) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x64cf,	// (0x000213fc) list_single_large_graphic_pane_t1_cp2

0x9e56,	// (0x00024d83) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x9e56,	// (0x00024d83) list_single_graphic_heading_pane_g1_cp2

0x9e25,	// (0x00024d52) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x9e25,	// (0x00024d52) list_single_graphic_heading_pane_g4_cp2

0x63b1,	// (0x000212de) list_single_graphic_heading_pane_g5_cp2

0x63b9,	// (0x000212e6) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x63b9,	// (0x000212e6) list_single_graphic_heading_pane_t1_cp2

0x9e62,	// (0x00024d8f) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x9e62,	// (0x00024d8f) list_single_graphic_heading_pane_t2_cp2

0x9e19,	// (0x00024d46) list_single_2graphic_pane_g1_cp2_ParamLimits

0x9e19,	// (0x00024d46) list_single_2graphic_pane_g1_cp2

0x9e25,	// (0x00024d52) list_single_2graphic_pane_g2_cp2_ParamLimits

0x9e25,	// (0x00024d52) list_single_2graphic_pane_g2_cp2

0x63b1,	// (0x000212de) list_single_2graphic_pane_g3_cp2

0x9e34,	// (0x00024d61) list_single_2graphic_pane_g4_cp2_ParamLimits

0x9e34,	// (0x00024d61) list_single_2graphic_pane_g4_cp2

0x9e40,	// (0x00024d6d) list_single_2graphic_pane_t1_cp2_ParamLimits

0x9e40,	// (0x00024d6d) list_single_2graphic_pane_t1_cp2

0x4e3d,	// (0x0001fd6a) list_highlight_pane_g10_cp1

0x9a2b,	// (0x00024958) list_highlight_pane_g1_cp1

0x9a33,	// (0x00024960) list_highlight_pane_g2_cp1

0x9a3b,	// (0x00024968) list_highlight_pane_g3_cp1

0x9a43,	// (0x00024970) list_highlight_pane_g4_cp1

0x9a4b,	// (0x00024978) list_highlight_pane_g5_cp1

0x9a53,	// (0x00024980) list_highlight_pane_g6_cp1

0x9a5b,	// (0x00024988) list_highlight_pane_g7_cp1

0x9a63,	// (0x00024990) list_highlight_pane_g8_cp1

0x9a6b,	// (0x00024998) list_highlight_pane_g9_cp1

0x3498,	// (0x0001e3c5) form_field_slider_pane_t3

0x34a6,	// (0x0001e3d3) form_field_slider_pane_t4

0x9975,	// (0x000248a2) slider_form_pane_ParamLimits

0x9975,	// (0x000248a2) slider_form_pane

0x4ebf,	// (0x0001fdec) control_abbreviations

0x4ebf,	// (0x0001fdec) control_conventions

0x4ebf,	// (0x0001fdec) control_definitions

0x4ebf,	// (0x0001fdec) format_table_attribute

0xa058,	// (0x00024f85) bg_popup_preview_window_pane_g9

0x4ebf,	// (0x0001fdec) format_table_data2

0x4ebf,	// (0x0001fdec) format_table_data3

0x4ebf,	// (0x0001fdec) format_table_data_example

0x0008,

0x4ebf,	// (0x0001fdec) intro_purpose

0xf91c,	// (0x0002a849) bg_popup_preview_window_pane_g

0x4ebf,	// (0x0001fdec) texts_category

0x4ebf,	// (0x0001fdec) texts_graphics

0x64e5,	// (0x00021412) text_digital

0x64f4,	// (0x00021421) text_primary

0x6503,	// (0x00021430) text_primary_small

0x6512,	// (0x0002143f) text_secondary

0x6521,	// (0x0002144e) text_title

0xa4e5,	// (0x00025412) bg_passive_tab_pane_g1_cp3_srt

0x623a,	// (0x00021167) bg_passive_tab_pane_g2_cp3_srt

0xa4ee,	// (0x0002541b) bg_passive_tab_pane_g3_cp3_srt

0x4f0d,	// (0x0001fe3a) bg_active_tab_pane_cp3_srt_ParamLimits

0x4f0d,	// (0x0001fe3a) bg_active_tab_pane_cp3_srt

0xa4f7,	// (0x00025424) tabs_4_active_pane_srt_g1

0x22c3,	// (0x0001d1f0) tabs_4_active_pane_srt_t1_ParamLimits

0x22c3,	// (0x0001d1f0) tabs_4_active_pane_srt_t1

0xa4e5,	// (0x00025412) bg_active_tab_pane_g1_cp3_copy1

0x623a,	// (0x00021167) bg_active_tab_pane_g2_cp3_copy1

0xa4ee,	// (0x0002541b) bg_active_tab_pane_g3_cp3_copy1

0x4f23,	// (0x0001fe50) tabs_2_long_active_pane_srt_ParamLimits

0x4f23,	// (0x0001fe50) tabs_2_long_active_pane_srt

0x4f23,	// (0x0001fe50) tabs_2_long_passive_pane_srt_ParamLimits

0x4f23,	// (0x0001fe50) tabs_2_long_passive_pane_srt

0x9090,	// (0x00023fbd) bg_passive_tab_pane_cp4_srt_ParamLimits

0x9090,	// (0x00023fbd) bg_passive_tab_pane_cp4_srt

0xa41b,	// (0x00025348) bg_passive_tab_pane_g1_cp4_srt

0x623a,	// (0x00021167) bg_passive_tab_pane_g2_cp4_srt

0xa424,	// (0x00025351) bg_passive_tab_pane_g3_cp4_srt

0x4f23,	// (0x0001fe50) bg_active_tab_pane_cp4_srt_ParamLimits

0x4f23,	// (0x0001fe50) bg_active_tab_pane_cp4_srt

0x25e6,	// (0x0001d513) tabs_2_long_active_pane_srt_t1_ParamLimits

0x25e6,	// (0x0001d513) tabs_2_long_active_pane_srt_t1

0xa41b,	// (0x00025348) bg_active_tab_pane_g1_cp4_srt

0x623a,	// (0x00021167) bg_active_tab_pane_g2_cp4_srt

0xa424,	// (0x00025351) bg_active_tab_pane_g3_cp4_srt

0x4f0d,	// (0x0001fe3a) tabs_3_long_active_pane_srt_ParamLimits

0x4f0d,	// (0x0001fe3a) tabs_3_long_active_pane_srt

0x4f0d,	// (0x0001fe3a) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x4f0d,	// (0x0001fe3a) tabs_3_long_passive_pane_cp_srt

0x4f0d,	// (0x0001fe3a) tabs_3_long_passive_pane_srt_ParamLimits

0x4f0d,	// (0x0001fe3a) tabs_3_long_passive_pane_srt

0x9090,	// (0x00023fbd) bg_passive_tab_pane_cp5_srt_ParamLimits

0x9090,	// (0x00023fbd) bg_passive_tab_pane_cp5_srt

0x628a,	// (0x000211b7) bg_passive_tab_pane_g1_cp5_srt

0x623a,	// (0x00021167) bg_passive_tab_pane_g2_cp5_srt

0x6281,	// (0x000211ae) bg_passive_tab_pane_g3_cp5_srt

0x4f23,	// (0x0001fe50) bg_active_tab_pane_cp5_srt_ParamLimits

0x4f23,	// (0x0001fe50) bg_active_tab_pane_cp5_srt

0x25fd,	// (0x0001d52a) tabs_3_long_active_pane_srt_t1_ParamLimits

0x25fd,	// (0x0001d52a) tabs_3_long_active_pane_srt_t1

0x628a,	// (0x000211b7) bg_active_tab_pane_g1_cp5_srt

0x623a,	// (0x00021167) bg_active_tab_pane_g2_cp5_srt

0x6281,	// (0x000211ae) bg_active_tab_pane_g3_cp5_srt

0xa40d,	// (0x0002533a) navi_text_pane_srt_t1

0xa405,	// (0x00025332) navi_icon_pane_srt_g1

0x6639,	// (0x00021566) midp_editing_number_pane_srt

0x6530,	// (0x0002145d) midp_ticker_pane_srt

0x6641,	// (0x0002156e) midp_ticker_pane_srt_g1

0x6649,	// (0x00021576) midp_ticker_pane_srt_g2

0x0001,

0xf7b2,	// (0x0002a6df) midp_ticker_pane_srt_g

0x6651,	// (0x0002157e) midp_ticker_pane_srt_t1

0xa3f6,	// (0x00025323) midp_editing_number_pane_t1_copy1

0x2817,	// (0x0001d744) listscroll_midp_pane

0x2817,	// (0x0001d744) midp_form_pane

0x6538,	// (0x00021465) midp_info_popup_window_ParamLimits

0x6538,	// (0x00021465) midp_info_popup_window

0x5c2b,	// (0x00020b58) bg_popup_sub_pane_cp50_ParamLimits

0x5c2b,	// (0x00020b58) bg_popup_sub_pane_cp50

0x96cf,	// (0x000245fc) listscroll_midp_info_pane_ParamLimits

0x96cf,	// (0x000245fc) listscroll_midp_info_pane

0x96b7,	// (0x000245e4) listscroll_form_midp_pane_ParamLimits

0x96b7,	// (0x000245e4) listscroll_form_midp_pane

0x96c3,	// (0x000245f0) scroll_bar_cp050

0x348c,	// (0x0001e3b9) list_midp_pane

0xb7c5,	// (0x000266f2) signal_pane_g2_cp

0x95e9,	// (0x00024516) listscroll_midp_info_pane_t1_ParamLimits

0x95e9,	// (0x00024516) listscroll_midp_info_pane_t1

0x9601,	// (0x0002452e) listscroll_midp_info_pane_t2_ParamLimits

0x9601,	// (0x0002452e) listscroll_midp_info_pane_t2

0x963f,	// (0x0002456c) listscroll_midp_info_pane_t3_ParamLimits

0x963f,	// (0x0002456c) listscroll_midp_info_pane_t3

0x9679,	// (0x000245a6) listscroll_midp_info_pane_t4_ParamLimits

0x9679,	// (0x000245a6) listscroll_midp_info_pane_t4

0x0003,

0xf857,	// (0x0002a784) listscroll_midp_info_pane_t_ParamLimits

0xf857,	// (0x0002a784) listscroll_midp_info_pane_t

0x5cce,	// (0x00020bfb) scroll_pane_cp21

0x958d,	// (0x000244ba) form_midp_field_choice_group_pane

0x9596,	// (0x000244c3) form_midp_field_text_pane

0x95cf,	// (0x000244fc) form_midp_field_time_pane

0x95d7,	// (0x00024504) form_midp_gauge_slider_pane

0x95e0,	// (0x0002450d) form_midp_gauge_wait_pane

0x4ebf,	// (0x0001fdec) form_midp_image_pane

0x1dd1,	// (0x0001ccfe) list_single_midp_pane_ParamLimits

0x1dd1,	// (0x0001ccfe) list_single_midp_pane

0x346b,	// (0x0001e398) form_midp_field_text_pane_t1

0x943c,	// (0x00024369) input_focus_pane_cp050

0x957c,	// (0x000244a9) list_midp_form_text_pane

0x954b,	// (0x00024478) form_midp_field_choice_group_pane_t1

0x9559,	// (0x00024486) input_focus_pane_cp051

0x956d,	// (0x0002449a) list_midp_choice_pane

0x4ebf,	// (0x0001fdec) status_idle_pane

0x952f,	// (0x0002445c) form_midp_field_time_pane_t1

0x4e3d,	// (0x0001fd6a) wait_anim_pane_g2_copy1

0x953d,	// (0x0002446a) form_midp_field_time_pane_t2

0x0001,

0x65a3,	// (0x000214d0) aid_navinavi_width_2_pane

0xf852,	// (0x0002a77f) form_midp_field_time_pane_t

0x4ebf,	// (0x0001fdec) input_focus_pane_cp052

0x4ebf,	// (0x0001fdec) bg_input_focus_pane_cp040

0x950b,	// (0x00024438) form_midp_gauge_slider_pane_t1

0x9519,	// (0x00024446) form_midp_gauge_slider_pane_t2

0x344f,	// (0x0001e37c) form_midp_gauge_slider_pane_t3

0x345d,	// (0x0001e38a) form_midp_gauge_slider_pane_t4

0x0003,

0xf849,	// (0x0002a776) form_midp_gauge_slider_pane_t

0x9527,	// (0x00024454) form_midp_slider_pane

0x4f23,	// (0x0001fe50) bg_input_focus_pane_cp041_ParamLimits

0x4f23,	// (0x0001fe50) bg_input_focus_pane_cp041

0x94db,	// (0x00024408) form_midp_gauge_wait_pane_t1_ParamLimits

0x94db,	// (0x00024408) form_midp_gauge_wait_pane_t1

0x94ed,	// (0x0002441a) form_midp_gauge_wait_pane_t2_ParamLimits

0x94ed,	// (0x0002441a) form_midp_gauge_wait_pane_t2

0x0001,

0xf844,	// (0x0002a771) form_midp_gauge_wait_pane_t_ParamLimits

0xf844,	// (0x0002a771) form_midp_gauge_wait_pane_t

0x94ff,	// (0x0002442c) form_midp_wait_pane_ParamLimits

0x94ff,	// (0x0002442c) form_midp_wait_pane

0x94a5,	// (0x000243d2) form_midp_image_pane_g1

0x94ae,	// (0x000243db) form_midp_image_pane_t1

0x94bd,	// (0x000243ea) form_midp_image_pane_t2

0x94cc,	// (0x000243f9) form_midp_image_pane_t3

0x0002,

0xf83d,	// (0x0002a76a) form_midp_image_pane_t

0x949c,	// (0x000243c9) list_single_midp_pane_g1

0xb21c,	// (0x00026149) list_single_midp_pane_t1

0x343b,	// (0x0001e368) list_midp_form_item_pane_ParamLimits

0x343b,	// (0x0001e368) list_midp_form_item_pane

0x654b,	// (0x00021478) list_midp_form_item_pane_t1

0x655a,	// (0x00021487) midp_ticker_pane_g1

0x6566,	// (0x00021493) midp_ticker_pane_g2

0x0001,

0xf798,	// (0x0002a6c5) midp_ticker_pane_g

0x6572,	// (0x0002149f) midp_ticker_pane_t1

0xa3f6,	// (0x00025323) midp_editing_number_pane_t1

0xa47e,	// (0x000253ab) midp_editing_number_pane

0xa48a,	// (0x000253b7) midp_ticker_pane

0xa3e6,	// (0x00025313) ai_message_heading_pane

0x4ebf,	// (0x0001fdec) bg_popup_window_pane_cp14

0xa3ee,	// (0x0002531b) listscroll_ai_message_pane

0xa370,	// (0x0002529d) ai_message_heading_pane_g1_ParamLimits

0xa370,	// (0x0002529d) ai_message_heading_pane_g1

0xa37c,	// (0x000252a9) ai_message_heading_pane_g2_ParamLimits

0xa37c,	// (0x000252a9) ai_message_heading_pane_g2

0xa388,	// (0x000252b5) ai_message_heading_pane_g3_ParamLimits

0xa388,	// (0x000252b5) ai_message_heading_pane_g3

0xa394,	// (0x000252c1) ai_message_heading_pane_g4_ParamLimits

0xa394,	// (0x000252c1) ai_message_heading_pane_g4

0x0003,

0xf97e,	// (0x0002a8ab) ai_message_heading_pane_g_ParamLimits

0xf97e,	// (0x0002a8ab) ai_message_heading_pane_g

0xa3a0,	// (0x000252cd) ai_message_heading_pane_t1_ParamLimits

0xa3a0,	// (0x000252cd) ai_message_heading_pane_t1

0xa3ba,	// (0x000252e7) ai_message_heading_pane_t2_ParamLimits

0xa3ba,	// (0x000252e7) ai_message_heading_pane_t2

0x0001,

0xf987,	// (0x0002a8b4) ai_message_heading_pane_t_ParamLimits

0xf987,	// (0x0002a8b4) ai_message_heading_pane_t

0xa3cc,	// (0x000252f9) bg_popup_heading_pane_cp1_ParamLimits

0xa3cc,	// (0x000252f9) bg_popup_heading_pane_cp1

0xa35e,	// (0x0002528b) list_ai_message_pane_ParamLimits

0xa35e,	// (0x0002528b) list_ai_message_pane

0x5cce,	// (0x00020bfb) scroll_pane_cp10

0xa2fa,	// (0x00025227) list_ai_message_pane_g1

0xa302,	// (0x0002522f) list_ai_message_pane_g2

0x0001,

0xf95b,	// (0x0002a888) list_ai_message_pane_g

0xa30a,	// (0x00025237) list_ai_message_pane_t1_ParamLimits

0xa30a,	// (0x00025237) list_ai_message_pane_t1

0xa31f,	// (0x0002524c) list_ai_message_pane_t2_ParamLimits

0xa31f,	// (0x0002524c) list_ai_message_pane_t2

0xa334,	// (0x00025261) list_ai_message_pane_t3_ParamLimits

0xa334,	// (0x00025261) list_ai_message_pane_t3

0xa349,	// (0x00025276) list_ai_message_pane_t4_ParamLimits

0xa349,	// (0x00025276) list_ai_message_pane_t4

0x0003,

0xf960,	// (0x0002a88d) list_ai_message_pane_t_ParamLimits

0xf960,	// (0x0002a88d) list_ai_message_pane_t

0xa2e8,	// (0x00025215) cell_ai_soft_ind_pane_ParamLimits

0xa2e8,	// (0x00025215) cell_ai_soft_ind_pane

0x6584,	// (0x000214b1) cell_ai_soft_ind_pane_g1_ParamLimits

0x6584,	// (0x000214b1) cell_ai_soft_ind_pane_g1

0x4ebf,	// (0x0001fdec) grid_highlight_cp1

0x6591,	// (0x000214be) text_secondary_cp56_ParamLimits

0x6591,	// (0x000214be) text_secondary_cp56

0xa2bd,	// (0x000251ea) example_general_pane_ParamLimits

0xa2bd,	// (0x000251ea) example_general_pane

0xa2c9,	// (0x000251f6) example_parent_pane_g1_ParamLimits

0xa2c9,	// (0x000251f6) example_parent_pane_g1

0xa2d5,	// (0x00025202) example_parent_pane_t1_ParamLimits

0xa2d5,	// (0x00025202) example_parent_pane_t1

0x2d2f,	// (0x0001dc5c) popup_preview_text_window_ParamLimits

0x2d2f,	// (0x0001dc5c) popup_preview_text_window

0x6475,	// (0x000213a2) list_single_pane_cp2_g4

0x512a,	// (0x00020057) bg_popup_preview_window_pane_ParamLimits

0x512a,	// (0x00020057) bg_popup_preview_window_pane

0xa060,	// (0x00024f8d) popup_preview_text_window_t1_ParamLimits

0xa060,	// (0x00024f8d) popup_preview_text_window_t1

0xa07e,	// (0x00024fab) popup_preview_text_window_t2_ParamLimits

0xa07e,	// (0x00024fab) popup_preview_text_window_t2

0xa0c7,	// (0x00024ff4) popup_preview_text_window_t3_ParamLimits

0xa0c7,	// (0x00024ff4) popup_preview_text_window_t3

0xa10c,	// (0x00025039) popup_preview_text_window_t4_ParamLimits

0xa10c,	// (0x00025039) popup_preview_text_window_t4

0x0004,

0xf92f,	// (0x0002a85c) popup_preview_text_window_t_ParamLimits

0xf92f,	// (0x0002a85c) popup_preview_text_window_t

0xa18a,	// (0x000250b7) scroll_pane_cp11

0x934e,	// (0x0002427b) bg_popup_preview_window_pane_g1

0xa020,	// (0x00024f4d) bg_popup_preview_window_pane_g2

0xa028,	// (0x00024f55) bg_popup_preview_window_pane_g3

0xa030,	// (0x00024f5d) bg_popup_preview_window_pane_g4

0xa038,	// (0x00024f65) bg_popup_preview_window_pane_g5

0xa040,	// (0x00024f6d) bg_popup_preview_window_pane_g6

0xa048,	// (0x00024f75) bg_popup_preview_window_pane_g7

0xa050,	// (0x00024f7d) bg_popup_preview_window_pane_g8

0x713f,	// (0x0002206c) aid_popup_width_pane

0x2cb1,	// (0x0001dbde) popup_midp_note_alarm_window_ParamLimits

0x2cb1,	// (0x0001dbde) popup_midp_note_alarm_window

0x5b6b,	// (0x00020a98) data_form_pane_ParamLimits

0x1c6a,	// (0x0001cb97) form_field_data_pane_g1

0x25ac,	// (0x0001d4d9) form_field_data_pane_t1_ParamLimits

0x5b77,	// (0x00020aa4) input_focus_pane_ParamLimits

0x5b85,	// (0x00020ab2) data_form_wide_pane_ParamLimits

0xafab,	// (0x00025ed8) form_field_data_wide_pane_g1

0xafb7,	// (0x00025ee4) form_field_data_wide_pane_t1_ParamLimits

0x52e9,	// (0x00020216) input_focus_pane_cp6_ParamLimits

0x25c4,	// (0x0001d4f1) input_popup_find_pane_g1_ParamLimits

0x25c4,	// (0x0001d4f1) input_popup_find_pane_g1

0x7886,	// (0x000227b3) aid_navi_side_left_pane

0x7896,	// (0x000227c3) aid_navi_side_right_pane

0x9afc,	// (0x00024a29) bg_popup_window_pane_cp30_ParamLimits

0x9afc,	// (0x00024a29) bg_popup_window_pane_cp30

0x9b76,	// (0x00024aa3) popup_midp_note_alarm_window_g1_ParamLimits

0x9b76,	// (0x00024aa3) popup_midp_note_alarm_window_g1

0x9ba6,	// (0x00024ad3) popup_midp_note_alarm_window_t1_ParamLimits

0x9ba6,	// (0x00024ad3) popup_midp_note_alarm_window_t1

0x9c47,	// (0x00024b74) popup_midp_note_alarm_window_t2_ParamLimits

0x9c47,	// (0x00024b74) popup_midp_note_alarm_window_t2

0x9cf5,	// (0x00024c22) popup_midp_note_alarm_window_t3_ParamLimits

0x9cf5,	// (0x00024c22) popup_midp_note_alarm_window_t3

0x9d1d,	// (0x00024c4a) popup_midp_note_alarm_window_t4_ParamLimits

0x9d1d,	// (0x00024c4a) popup_midp_note_alarm_window_t4

0x9d3d,	// (0x00024c6a) popup_midp_note_alarm_window_t5_ParamLimits

0x9d3d,	// (0x00024c6a) popup_midp_note_alarm_window_t5

0x000a,

0xf8cc,	// (0x0002a7f9) popup_midp_note_alarm_window_t_ParamLimits

0xf8cc,	// (0x0002a7f9) popup_midp_note_alarm_window_t

0x9de9,	// (0x00024d16) wait_bar_pane_cp1_ParamLimits

0x9de9,	// (0x00024d16) wait_bar_pane_cp1

0x4ebf,	// (0x0001fdec) wait_anim_pane_copy1

0x4ebf,	// (0x0001fdec) wait_border_pane_copy1

0x9842,	// (0x0002476f) wait_border_pane_g1_copy1

0xafd1,	// (0x00025efe) form_field_popup_pane_g1

0x1c74,	// (0x0001cba1) form_field_popup_pane_t1_ParamLimits

0x5b77,	// (0x00020aa4) input_focus_pane_cp7_ParamLimits

0x5b6b,	// (0x00020a98) list_form_pane_ParamLimits

0xaff1,	// (0x00025f1e) form_field_popup_wide_pane_g1

0xaff9,	// (0x00025f26) form_field_popup_wide_pane_t1_ParamLimits

0x5b77,	// (0x00020aa4) input_focus_pane_cp8_ParamLimits

0x5ba5,	// (0x00020ad2) list_form_wide_pane_ParamLimits

0xa51e,	// (0x0002544b) aid_size_cell_graphic_pane

0x1cf1,	// (0x0001cc1e) data_form_pane_t1_ParamLimits

0x1df9,	// (0x0001cd26) data_form_wide_pane_t1_ParamLimits

0x308d,	// (0x0001dfba) bg_status_flat_pane

0x2220,	// (0x0001d14d) title_pane_t1_ParamLimits

0x4ed5,	// (0x0001fe02) title_pane_t2_ParamLimits

0x4efb,	// (0x0001fe28) title_pane_t3_ParamLimits

0xf59b,	// (0x0002a4c8) title_pane_t_ParamLimits

0x26c4,	// (0x0001d5f1) level_1_signal_ParamLimits

0x26d6,	// (0x0001d603) level_2_signal_ParamLimits

0x26e9,	// (0x0001d616) level_3_signal_ParamLimits

0x26fc,	// (0x0001d629) level_4_signal_ParamLimits

0x270f,	// (0x0001d63c) level_5_signal_ParamLimits

0x2722,	// (0x0001d64f) level_6_signal_ParamLimits

0x2735,	// (0x0001d662) level_7_signal_ParamLimits

0x26c4,	// (0x0001d5f1) level_1_battery_ParamLimits

0x26d6,	// (0x0001d603) level_2_battery_ParamLimits

0x26e9,	// (0x0001d616) level_3_battery_ParamLimits

0x26fc,	// (0x0001d629) level_4_battery_ParamLimits

0x270f,	// (0x0001d63c) level_5_battery_ParamLimits

0x2722,	// (0x0001d64f) level_6_battery_ParamLimits

0x2735,	// (0x0001d662) level_7_battery_ParamLimits

0x9a2b,	// (0x00024958) bg_status_flat_pane_g1

0x9a33,	// (0x00024960) bg_status_flat_pane_g2

0x9a3b,	// (0x00024968) bg_status_flat_pane_g3

0x9a43,	// (0x00024970) bg_status_flat_pane_g4

0x9a4b,	// (0x00024978) bg_status_flat_pane_g5

0x9a53,	// (0x00024980) bg_status_flat_pane_g6

0x9a5b,	// (0x00024988) bg_status_flat_pane_g7

0x22ad,	// (0x0001d1da) tabs_3_active_pane_t1_ParamLimits

0x22ad,	// (0x0001d1da) tabs_3_passive_pane_t1_ParamLimits

0x22c3,	// (0x0001d1f0) tabs_4_active_pane_t1_ParamLimits

0x22c3,	// (0x0001d1f0) tabs_4_1_passive_pane_t1_ParamLimits

0x25d0,	// (0x0001d4fd) tabs_2_active_pane_t1_ParamLimits

0x25d0,	// (0x0001d4fd) tabs_2_passive_pane_t1_ParamLimits

0x4f23,	// (0x0001fe50) bg_active_tab_pane_cp4_ParamLimits

0x25e6,	// (0x0001d513) tabs_2_long_active_pane_t1_ParamLimits

0x9090,	// (0x00023fbd) bg_passive_tab_pane_cp4_ParamLimits

0x801a,	// (0x00022f47) list_single_midp_graphic_pane_t1_ParamLimits

0x4f23,	// (0x0001fe50) bg_active_tab_pane_cp5_ParamLimits

0x25fd,	// (0x0001d52a) tabs_3_long_active_pane_t1_ParamLimits

0x9090,	// (0x00023fbd) bg_passive_tab_pane_cp5_ParamLimits

0x801a,	// (0x00022f47) list_single_midp_graphic_pane_t1

0x308d,	// (0x0001dfba) bg_status_flat_pane_ParamLimits

0x922d,	// (0x0002415a) indicator_pane_cp2_ParamLimits

0x922d,	// (0x0002415a) indicator_pane_cp2

0x31f3,	// (0x0001e120) navi_pane_srt_ParamLimits

0x31f3,	// (0x0001e120) navi_pane_srt

0x9255,	// (0x00024182) popup_clock_digital_analogue_window_cp1

0x4f93,	// (0x0001fec0) indicator_pane_t1

0x6530,	// (0x0002145d) copy_highlight_pane

0x6530,	// (0x0002145d) cursor_graphics_pane

0x6530,	// (0x0002145d) graphic_within_text_pane

0x6530,	// (0x0002145d) link_highlight_pane

0xa14d,	// (0x0002507a) popup_preview_text_window_t5_ParamLimits

0xa14d,	// (0x0002507a) popup_preview_text_window_t5

0x65ab,	// (0x000214d8) cursor_digital_pane

0x65ab,	// (0x000214d8) cursor_primary_pane

0x65bc,	// (0x000214e9) cursor_primary_small_pane

0x65c4,	// (0x000214f1) cursor_secondary_pane

0x65cc,	// (0x000214f9) cursor_title_pane

0x65ab,	// (0x000214d8) link_highlight_digital_pane

0x65b3,	// (0x000214e0) link_highlight_primary_pane

0x65bc,	// (0x000214e9) link_highlight_primary_small_pane

0x65c4,	// (0x000214f1) link_highlight_secondary_pane

0x65cc,	// (0x000214f9) link_highlight_title_pane

0x65ab,	// (0x000214d8) copy_highlight_digital_pane

0x65ab,	// (0x000214d8) copy_highlight_primary_pane

0x65bc,	// (0x000214e9) copy_highlight_primary_small_pane

0x65c4,	// (0x000214f1) copy_highlight_secondary_pane

0x65cc,	// (0x000214f9) copy_highlight_title_pane

0x65c4,	// (0x000214f1) graphic_text_digital_pane

0x9aab,	// (0x000249d8) graphic_text_primary_pane

0x9ab4,	// (0x000249e1) graphic_text_primary_small_pane

0x65bc,	// (0x000214e9) graphic_text_secondary_pane

0x65ab,	// (0x000214d8) graphic_text_title_pane

0x28b4,	// (0x0001d7e1) cursor_primary_pane_g1

0x9a9d,	// (0x000249ca) cursor_text_primary_t1

0x34c8,	// (0x0001e3f5) cursor_primary_small_pane_g1

0x9a8f,	// (0x000249bc) cursor_text_primary_small_t1

0x34be,	// (0x0001e3eb) cursor_primary_small_pane_g1_copy1

0x9a81,	// (0x000249ae) cursor_text_primary_small_t1_copy1

0x9a73,	// (0x000249a0) cursor_text_title_t1

0x34b4,	// (0x0001e3e1) cursor_title_pane_g1

0x28b4,	// (0x0001d7e1) cursor_digital_pane_g1

0x65d4,	// (0x00021501) cursor_text_digital_t1

0x65e2,	// (0x0002150f) link_highlight_primary_pane_g1

0x9a1c,	// (0x00024949) link_highlight_primary_pane_t1

0x65e2,	// (0x0002150f) link_highlight_primary_small_pane_g1

0x65ea,	// (0x00021517) link_highlight_primary_small_pane_t1

0x65f9,	// (0x00021526) link_highlight_secondary_pane_g1

0x6601,	// (0x0002152e) link_highlight_secondary_pane_t1

0x9981,	// (0x000248ae) link_highlight_title_pane_g1

0x9998,	// (0x000248c5) link_highlight_title_pane_t1

0x9981,	// (0x000248ae) link_highlight_digital_pane_g1

0x9989,	// (0x000248b6) link_highlight_digital_pane_t1

0x985d,	// (0x0002478a) copy_highlight_primary_pane_g1

0x9883,	// (0x000247b0) copy_highlight_primary_pane_t1

0x985d,	// (0x0002478a) copy_highlight_primary_small_pane_g1

0x9874,	// (0x000247a1) copy_highlight_primary_small_pane_t1

0x6610,	// (0x0002153d) copy_highlight_secondary_pane_g1

0x6618,	// (0x00021545) copy_highlight_secondary_pane_t1

0x985d,	// (0x0002478a) copy_highlight_title_pane_g1

0x9865,	// (0x00024792) copy_highlight_title_pane_t1

0x985d,	// (0x0002478a) copy_highlight_digital_pane_g1

0xa63f,	// (0x0002556c) copy_highlight_digital_pane_t1

0xa593,	// (0x000254c0) graphic_text_primary_pane_g1

0xa623,	// (0x00025550) graphic_text_primary_pane_t1

0xa631,	// (0x0002555e) graphic_text_primary_pane_t2

0x0001,

0xf9fb,	// (0x0002a928) graphic_text_primary_pane_t

0xa5ff,	// (0x0002552c) graphic_text_primary_small_pane_g1

0xa607,	// (0x00025534) graphic_text_primary_small_pane_t1

0xa615,	// (0x00025542) graphic_text_primary_small_pane_t2

0x0001,

0xf9f6,	// (0x0002a923) graphic_text_primary_small_pane_t

0xa5db,	// (0x00025508) graphic_text_secondary_pane_g1

0xa5e3,	// (0x00025510) graphic_text_secondary_pane_t1

0xa5f1,	// (0x0002551e) graphic_text_secondary_pane_t2

0x0001,

0xf9f1,	// (0x0002a91e) graphic_text_secondary_pane_t

0xa5b7,	// (0x000254e4) graphic_text_title_pane_g1

0xa5bf,	// (0x000254ec) graphic_text_title_pane_t1

0xa5cd,	// (0x000254fa) graphic_text_title_pane_t2

0x0001,

0xf9ec,	// (0x0002a919) graphic_text_title_pane_t

0xa593,	// (0x000254c0) graphic_text_digital_pane_g1

0xa59b,	// (0x000254c8) graphic_text_digital_pane_t1

0xa5a9,	// (0x000254d6) graphic_text_digital_pane_t2

0x0001,

0xf9e7,	// (0x0002a914) graphic_text_digital_pane_t

0x4f23,	// (0x0001fe50) navi_icon_pane_srt_ParamLimits

0x4f23,	// (0x0001fe50) navi_icon_pane_srt

0x4ebf,	// (0x0001fdec) navi_midp_pane_srt

0x4ebf,	// (0x0001fdec) navi_navi_pane_srt

0x4f23,	// (0x0001fe50) navi_text_pane_srt_ParamLimits

0x4f23,	// (0x0001fe50) navi_text_pane_srt

0x9fd9,	// (0x00024f06) navi_navi_icon_text_pane_srt

0x9fe1,	// (0x00024f0e) navi_navi_pane_srt_g1_ParamLimits

0x9fe1,	// (0x00024f0e) navi_navi_pane_srt_g1

0x9ff3,	// (0x00024f20) navi_navi_pane_srt_g2_ParamLimits

0x9ff3,	// (0x00024f20) navi_navi_pane_srt_g2

0x0001,

0xf9e2,	// (0x0002a90f) navi_navi_pane_srt_g_ParamLimits

0xf9e2,	// (0x0002a90f) navi_navi_pane_srt_g

0xa005,	// (0x00024f32) navi_navi_tabs_pane_srt

0x9fd9,	// (0x00024f06) navi_navi_text_pane_srt

0x9fd9,	// (0x00024f06) navi_navi_volume_pane_srt

0xa584,	// (0x000254b1) navi_navi_text_pane_srt_t1

0x837e,	// (0x000232ab) navi_navi_volume_pane_srt_g1

0x8386,	// (0x000232b3) volume_small_pane_srt_ParamLimits

0x8386,	// (0x000232b3) volume_small_pane_srt

0x7d7b,	// (0x00022ca8) volume_small_pane_srt_g1_ParamLimits

0x7d7b,	// (0x00022ca8) volume_small_pane_srt_g1

0x7d8b,	// (0x00022cb8) volume_small_pane_srt_g2_ParamLimits

0x7d8b,	// (0x00022cb8) volume_small_pane_srt_g2

0x7d9c,	// (0x00022cc9) volume_small_pane_srt_g3_ParamLimits

0x7d9c,	// (0x00022cc9) volume_small_pane_srt_g3

0x7dad,	// (0x00022cda) volume_small_pane_srt_g4_ParamLimits

0x7dad,	// (0x00022cda) volume_small_pane_srt_g4

0x7dbe,	// (0x00022ceb) volume_small_pane_srt_g5_ParamLimits

0x7dbe,	// (0x00022ceb) volume_small_pane_srt_g5

0x7dcf,	// (0x00022cfc) volume_small_pane_srt_g6_ParamLimits

0x7dcf,	// (0x00022cfc) volume_small_pane_srt_g6

0x7de0,	// (0x00022d0d) volume_small_pane_srt_g7_ParamLimits

0x7de0,	// (0x00022d0d) volume_small_pane_srt_g7

0x7df1,	// (0x00022d1e) volume_small_pane_srt_g8_ParamLimits

0x7df1,	// (0x00022d1e) volume_small_pane_srt_g8

0x7e02,	// (0x00022d2f) volume_small_pane_srt_g9_ParamLimits

0x7e02,	// (0x00022d2f) volume_small_pane_srt_g9

0x7e13,	// (0x00022d40) volume_small_pane_srt_g10_ParamLimits

0x7e13,	// (0x00022d40) volume_small_pane_srt_g10

0x0009,

0xf79d,	// (0x0002a6ca) volume_small_pane_srt_g_ParamLimits

0xf79d,	// (0x0002a6ca) volume_small_pane_srt_g

0x51d3,	// (0x00020100) query_popup_data_pane_cp2

0xa56a,	// (0x00025497) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xa56a,	// (0x00025497) navi_navi_icon_text_pane_srt_t1

0x9aab,	// (0x000249d8) navi_tabs_2_long_pane_srt

0x9aab,	// (0x000249d8) navi_tabs_2_pane_srt

0x9aab,	// (0x000249d8) navi_tabs_3_long_pane_srt

0x9aab,	// (0x000249d8) navi_tabs_3_pane_srt

0x9aab,	// (0x000249d8) navi_tabs_4_pane_srt

0x835e,	// (0x0002328b) tabs_2_active_pane_srt_ParamLimits

0x835e,	// (0x0002328b) tabs_2_active_pane_srt

0x836e,	// (0x0002329b) tabs_2_passive_pane_srt_ParamLimits

0x836e,	// (0x0002329b) tabs_2_passive_pane_srt

0x943c,	// (0x00024369) bg_passive_tab_pane_cp1_srt_ParamLimits

0x943c,	// (0x00024369) bg_passive_tab_pane_cp1_srt

0xa548,	// (0x00025475) bg_passive_tab_pane_g1_cp1_srt

0x623a,	// (0x00021167) bg_passive_tab_pane_g2_cp1_srt

0xa551,	// (0x0002547e) bg_passive_tab_pane_g3_cp1_srt

0x4f0d,	// (0x0001fe3a) bg_active_tab_pane_cp1_srt_ParamLimits

0x4f0d,	// (0x0001fe3a) bg_active_tab_pane_cp1_srt

0xa55a,	// (0x00025487) tabs_2_active_pane_srt_g1

0x25d0,	// (0x0001d4fd) tabs_2_active_pane_srt_t1_ParamLimits

0x25d0,	// (0x0001d4fd) tabs_2_active_pane_srt_t1

0xa548,	// (0x00025475) bg_active_tab_pane_g1_cp1_srt

0x623a,	// (0x00021167) bg_active_tab_pane_g2_cp1_srt

0xa551,	// (0x0002547e) bg_active_tab_pane_g3_cp1_srt

0x832b,	// (0x00023258) tabs_3_active_pane_srt_ParamLimits

0x832b,	// (0x00023258) tabs_3_active_pane_srt

0x833c,	// (0x00023269) tabs_3_passive_pane_cp_srt_ParamLimits

0x833c,	// (0x00023269) tabs_3_passive_pane_cp_srt

0x834d,	// (0x0002327a) tabs_3_passive_pane_srt_ParamLimits

0x834d,	// (0x0002327a) tabs_3_passive_pane_srt

0x943c,	// (0x00024369) bg_passive_tab_pane_cp2_srt_ParamLimits

0x943c,	// (0x00024369) bg_passive_tab_pane_cp2_srt

0x6630,	// (0x0002155d) bg_passive_tab_pane_g1_cp2_srt

0x623a,	// (0x00021167) bg_passive_tab_pane_g2_cp2_srt

0x6627,	// (0x00021554) bg_passive_tab_pane_g3_cp2_srt

0x4f0d,	// (0x0001fe3a) bg_active_tab_pane_cp2_srt_ParamLimits

0x4f0d,	// (0x0001fe3a) bg_active_tab_pane_cp2_srt

0xa540,	// (0x0002546d) tabs_3_active_pane_srt_g1

0x22ad,	// (0x0001d1da) tabs_3_active_pane_srt_t1_ParamLimits

0x22ad,	// (0x0001d1da) tabs_3_active_pane_srt_t1

0x6630,	// (0x0002155d) bg_active_tab_pane_g1_cp2_srt

0x623a,	// (0x00021167) bg_active_tab_pane_g2_cp2_srt

0x6627,	// (0x00021554) bg_active_tab_pane_g3_cp2_srt

0x82e3,	// (0x00023210) tabs_4_active_pane_srt_ParamLimits

0x82e3,	// (0x00023210) tabs_4_active_pane_srt

0x82f5,	// (0x00023222) tabs_4_passive_pane_cp2_srt_ParamLimits

0x82f5,	// (0x00023222) tabs_4_passive_pane_cp2_srt

0x9046,	// (0x00023f73) aid_size_cell_toolbar

0x2a21,	// (0x0001d94e) main_idle_act_pane_ParamLimits

0x9116,	// (0x00024043) popup_large_graphic_colour_window_ParamLimits

0x2f7f,	// (0x0001deac) popup_toolbar_window_ParamLimits

0x2f7f,	// (0x0001deac) popup_toolbar_window

0xb299,	// (0x000261c6) list_single_graphic_2heading_pane_ParamLimits

0xb299,	// (0x000261c6) list_single_graphic_2heading_pane

0x5eac,	// (0x00020dd9) aid_size_cell_apps_grid_lsc_pane

0x5ebe,	// (0x00020deb) aid_size_cell_apps_grid_prt_pane

0x9090,	// (0x00023fbd) bg_wml_button_pane_cp1_ParamLimits

0x9090,	// (0x00023fbd) bg_wml_button_pane_cp1

0x346b,	// (0x0001e398) form_midp_field_text_pane_t1_ParamLimits

0x943c,	// (0x00024369) input_focus_pane_cp050_ParamLimits

0x957c,	// (0x000244a9) list_midp_form_text_pane_ParamLimits

0x9559,	// (0x00024486) input_focus_pane_cp051_ParamLimits

0x956d,	// (0x0002449a) list_midp_choice_pane_ParamLimits

0x3409,	// (0x0001e336) list_single_2graphic_pane_cp3_ParamLimits

0x3409,	// (0x0001e336) list_single_2graphic_pane_cp3

0x341c,	// (0x0001e349) list_single_midp_graphic_pane_ParamLimits

0x341c,	// (0x0001e349) list_single_midp_graphic_pane

0x70b5,	// (0x00021fe2) list_single_graphic_2heading_pane_g1_ParamLimits

0x70b5,	// (0x00021fe2) list_single_graphic_2heading_pane_g1

0x70c1,	// (0x00021fee) list_single_graphic_2heading_pane_g4_ParamLimits

0x70c1,	// (0x00021fee) list_single_graphic_2heading_pane_g4

0x70cd,	// (0x00021ffa) list_single_graphic_2heading_pane_g5_ParamLimits

0x70cd,	// (0x00021ffa) list_single_graphic_2heading_pane_g5

0x0002,

0xf7f0,	// (0x0002a71d) list_single_graphic_2heading_pane_g_ParamLimits

0xf7f0,	// (0x0002a71d) list_single_graphic_2heading_pane_g

0x70d9,	// (0x00022006) list_single_graphic_2heading_pane_t1_ParamLimits

0x70d9,	// (0x00022006) list_single_graphic_2heading_pane_t1

0x70ed,	// (0x0002201a) list_single_graphic_2heading_pane_t2_ParamLimits

0x70ed,	// (0x0002201a) list_single_graphic_2heading_pane_t2

0x7107,	// (0x00022034) list_single_graphic_2heading_pane_t3_ParamLimits

0x7107,	// (0x00022034) list_single_graphic_2heading_pane_t3

0x0002,

0xf7f7,	// (0x0002a724) list_single_graphic_2heading_pane_t_ParamLimits

0xf7f7,	// (0x0002a724) list_single_graphic_2heading_pane_t

0x9298,	// (0x000241c5) bg_popup_sub_pane_cp2

0x92be,	// (0x000241eb) grid_toobar_pane

0x7f96,	// (0x00022ec3) cell_toolbar_pane_ParamLimits

0x7f96,	// (0x00022ec3) cell_toolbar_pane

0x92f4,	// (0x00024221) cell_toolbar_pane_g1_ParamLimits

0x92f4,	// (0x00024221) cell_toolbar_pane_g1

0x9306,	// (0x00024233) cell_toolbar_pane_g2_ParamLimits

0x9306,	// (0x00024233) cell_toolbar_pane_g2

0x0001,

0xf7fe,	// (0x0002a72b) cell_toolbar_pane_g_ParamLimits

0xf7fe,	// (0x0002a72b) cell_toolbar_pane_g

0x9328,	// (0x00024255) grid_highlight_pane_cp2_ParamLimits

0x9328,	// (0x00024255) grid_highlight_pane_cp2

0x9342,	// (0x0002426f) toolbar_button_pane

0x934e,	// (0x0002427b) toolbar_button_pane_g1

0x9356,	// (0x00024283) toolbar_button_pane_g2

0x935e,	// (0x0002428b) toolbar_button_pane_g3

0x9366,	// (0x00024293) toolbar_button_pane_g4

0x936e,	// (0x0002429b) toolbar_button_pane_g5

0x9376,	// (0x000242a3) toolbar_button_pane_g6

0x937e,	// (0x000242ab) toolbar_button_pane_g7

0x9386,	// (0x000242b3) toolbar_button_pane_g8

0x938e,	// (0x000242bb) toolbar_button_pane_g9

0x0009,

0xf803,	// (0x0002a730) toolbar_button_pane_g

0x7fc5,	// (0x00022ef2) list_single_2graphic_pane_g1_cp3_ParamLimits

0x7fc5,	// (0x00022ef2) list_single_2graphic_pane_g1_cp3

0xe2d8,	// (0x00029205) list_single_2graphic_pane_g2_cp3_ParamLimits

0xe2d8,	// (0x00029205) list_single_2graphic_pane_g2_cp3

0x7fe0,	// (0x00022f0d) list_single_2graphic_pane_g3_cp3

0x7fe8,	// (0x00022f15) list_single_2graphic_pane_g4_cp3_ParamLimits

0x7fe8,	// (0x00022f15) list_single_2graphic_pane_g4_cp3

0x7ff4,	// (0x00022f21) list_single_2graphic_pane_t1_cp3_ParamLimits

0x7ff4,	// (0x00022f21) list_single_2graphic_pane_t1_cp3

0x800e,	// (0x00022f3b) list_single_midp_graphic_pane_g2_ParamLimits

0x800e,	// (0x00022f3b) list_single_midp_graphic_pane_g2

0x904e,	// (0x00023f7b) aid_zoom_text_primary

0xb199,	// (0x000260c6) aid_zoom_text_secondary

0x66e2,	// (0x0002160f) status_small_pane_g7_ParamLimits

0x66e2,	// (0x0002160f) status_small_pane_g7

0x6705,	// (0x00021632) status_small_pane_t1_ParamLimits

0x21f5,	// (0x0001d122) title_pane_g2

0x0003,

0xf592,	// (0x0002a4bf) title_pane_g

0x24d7,	// (0x0001d404) aid_size_cell_colour_1_pane_ParamLimits

0x24d7,	// (0x0001d404) aid_size_cell_colour_1_pane

0x24eb,	// (0x0001d418) aid_size_cell_colour_2_pane_ParamLimits

0x24eb,	// (0x0001d418) aid_size_cell_colour_2_pane

0x24ff,	// (0x0001d42c) aid_size_cell_colour_3_pane_ParamLimits

0x24ff,	// (0x0001d42c) aid_size_cell_colour_3_pane

0x2513,	// (0x0001d440) aid_size_cell_colour_4_pane_ParamLimits

0x2513,	// (0x0001d440) aid_size_cell_colour_4_pane

0x77e8,	// (0x00022715) title_pane_stacon_g1_ParamLimits

0x77e8,	// (0x00022715) title_pane_stacon_g1

0x98da,	// (0x00024807) popup_note_wait_window_g3_ParamLimits

0x98da,	// (0x00024807) popup_note_wait_window_g3

0x9950,	// (0x0002487d) popup_note_wait_window_t5_ParamLimits

0x9950,	// (0x0002487d) popup_note_wait_window_t5

0x4ebf,	// (0x0001fdec) main_feb_china_hwr_fs_writing_pane

0x2a82,	// (0x0001d9af) popup_feb_china_hwr_fs_window_ParamLimits

0x2a82,	// (0x0001d9af) popup_feb_china_hwr_fs_window

0xe2e9,	// (0x00029216) aid_size_cell_hwr_fs_ParamLimits

0xe2e9,	// (0x00029216) aid_size_cell_hwr_fs

0x943c,	// (0x00024369) bg_popup_sub_pane_cp3_ParamLimits

0x943c,	// (0x00024369) bg_popup_sub_pane_cp3

0xe2fe,	// (0x0002922b) grid_hwr_fs_pane_ParamLimits

0xe2fe,	// (0x0002922b) grid_hwr_fs_pane

0x8059,	// (0x00022f86) linegrid_hwr_fs_pane_ParamLimits

0x8059,	// (0x00022f86) linegrid_hwr_fs_pane

0xe316,	// (0x00029243) cell_hwr_fs_pane_ParamLimits

0xe316,	// (0x00029243) cell_hwr_fs_pane

0x9448,	// (0x00024375) linegrid_hwr_fs_pane_g1_ParamLimits

0x9448,	// (0x00024375) linegrid_hwr_fs_pane_g1

0x33cf,	// (0x0001e2fc) linegrid_hwr_fs_pane_g2_ParamLimits

0x33cf,	// (0x0001e2fc) linegrid_hwr_fs_pane_g2

0x9454,	// (0x00024381) linegrid_hwr_fs_pane_g3_ParamLimits

0x9454,	// (0x00024381) linegrid_hwr_fs_pane_g3

0x8087,	// (0x00022fb4) linegrid_hwr_fs_pane_g4_ParamLimits

0x8087,	// (0x00022fb4) linegrid_hwr_fs_pane_g4

0x80a1,	// (0x00022fce) linegrid_hwr_fs_pane_g5_ParamLimits

0x80a1,	// (0x00022fce) linegrid_hwr_fs_pane_g5

0x0004,

0xf829,	// (0x0002a756) linegrid_hwr_fs_pane_g_ParamLimits

0xf829,	// (0x0002a756) linegrid_hwr_fs_pane_g

0x9460,	// (0x0002438d) cell_hwr_fs_pane_g1_ParamLimits

0x9460,	// (0x0002438d) cell_hwr_fs_pane_g1

0x9266,	// (0x00024193) cell_hwr_fs_pane_g2_ParamLimits

0x9266,	// (0x00024193) cell_hwr_fs_pane_g2

0x33e1,	// (0x0001e30e) cell_hwr_fs_pane_g3_ParamLimits

0x33e1,	// (0x0001e30e) cell_hwr_fs_pane_g3

0x33ee,	// (0x0001e31b) cell_hwr_fs_pane_g4_ParamLimits

0x33ee,	// (0x0001e31b) cell_hwr_fs_pane_g4

0x0003,

0xf834,	// (0x0002a761) cell_hwr_fs_pane_g_ParamLimits

0xf834,	// (0x0002a761) cell_hwr_fs_pane_g

0xe336,	// (0x00029263) cell_hwr_fs_pane_t1

0x4ebf,	// (0x0001fdec) grid_highlight_pane_cp6

0x4ebf,	// (0x0001fdec) main_idle_act2_pane

0x5cb5,	// (0x00020be2) aid_inside_area_popup_secondary

0x35d5,	// (0x0001e502) aid_inside_area_window_primary_ParamLimits

0x35d5,	// (0x0001e502) aid_inside_area_window_primary

0xa64e,	// (0x0002557b) ai2_news_ticker_pane

0xa656,	// (0x00025583) aid_size_cell_ai1_link_ParamLimits

0xa656,	// (0x00025583) aid_size_cell_ai1_link

0x39e1,	// (0x0001e90e) popup_ai2_data_window_ParamLimits

0x39e1,	// (0x0001e90e) popup_ai2_data_window

0xa670,	// (0x0002559d) popup_ai2_link_window_ParamLimits

0xa670,	// (0x0002559d) popup_ai2_link_window

0x943c,	// (0x00024369) bg_popup_sub_pane_cp4_ParamLimits

0x943c,	// (0x00024369) bg_popup_sub_pane_cp4

0xa684,	// (0x000255b1) grid_ai2_link_pane_ParamLimits

0xa684,	// (0x000255b1) grid_ai2_link_pane

0xa69b,	// (0x000255c8) popup_ai2_link_window_g1_ParamLimits

0xa69b,	// (0x000255c8) popup_ai2_link_window_g1

0xa6a7,	// (0x000255d4) popup_ai2_link_window_g2_ParamLimits

0xa6a7,	// (0x000255d4) popup_ai2_link_window_g2

0x0001,

0xfa00,	// (0x0002a92d) popup_ai2_link_window_g_ParamLimits

0xfa00,	// (0x0002a92d) popup_ai2_link_window_g

0xa6b6,	// (0x000255e3) ai2_mp_button_pane

0xa6be,	// (0x000255eb) ai2_mp_volume_pane

0x9559,	// (0x00024486) bg_popup_sub_pane_cp5_ParamLimits

0x9559,	// (0x00024486) bg_popup_sub_pane_cp5

0xa6c6,	// (0x000255f3) heading_ai2_gene_pane_ParamLimits

0xa6c6,	// (0x000255f3) heading_ai2_gene_pane

0xa6d2,	// (0x000255ff) list_ai2_gene_pane_ParamLimits

0xa6d2,	// (0x000255ff) list_ai2_gene_pane

0xa71a,	// (0x00025647) cell_ai2_link_pane_ParamLimits

0xa71a,	// (0x00025647) cell_ai2_link_pane

0xa730,	// (0x0002565d) cell_ai2_link_pane_g1

0x4ebf,	// (0x0001fdec) grid_highlight_pane_cp7

0x839b,	// (0x000232c8) ai2_mp_volume_pane_g1

0xa7c5,	// (0x000256f2) ai2_mp_volume_pane_g2

0x3a0b,	// (0x0001e938) list_ai2_gene_pane_t1

0xa7cd,	// (0x000256fa) ai2_mp_volume_pane_g3

0x0002,

0xfa19,	// (0x0002a946) ai2_mp_volume_pane_g

0x83a3,	// (0x000232d0) volume_small_pane_cp3

0xa7d5,	// (0x00025702) aid_size_cell_ai2_button

0xa7dd,	// (0x0002570a) grid_ai2_button_pane

0xa7e6,	// (0x00025713) cell_ai2_button_pane_ParamLimits

0xa7e6,	// (0x00025713) cell_ai2_button_pane

0x4e3d,	// (0x0001fd6a) cell_ai2_button_pane_g1

0x4ebf,	// (0x0001fdec) grid_highlight_pane_cp8

0xa785,	// (0x000256b2) ai2_gene_pane_t1_ParamLimits

0xa785,	// (0x000256b2) ai2_gene_pane_t1

0x2a0d,	// (0x0001d93a) aid_height_parent_landscape

0x378d,	// (0x0001e6ba) aid_height_set_list

0xa442,	// (0x0002536f) aid_size_parent

0xa51e,	// (0x0002544b) aid_size_cell_graphic_pane_ParamLimits

0xa6e2,	// (0x0002560f) popup_ai2_data_window_g1_ParamLimits

0xa6e2,	// (0x0002560f) popup_ai2_data_window_g1

0xa6ee,	// (0x0002561b) ai2_news_ticker_pane_g1

0xa6f6,	// (0x00025623) ai2_news_ticker_pane_g2

0x0001,

0xfa05,	// (0x0002a932) ai2_news_ticker_pane_g

0xa6fe,	// (0x0002562b) ai2_news_ticker_pane_t1

0xa70c,	// (0x00025639) ai2_news_ticker_pane_t2

0x0001,

0xfa0a,	// (0x0002a937) ai2_news_ticker_pane_t

0xa4ff,	// (0x0002542c) heading_ai2_gene_pane_g1

0xa739,	// (0x00025666) heading_ai2_gene_pane_t1_ParamLimits

0xa739,	// (0x00025666) heading_ai2_gene_pane_t1

0xa74e,	// (0x0002567b) list_highlight_pane_cp6

0x39f5,	// (0x0001e922) ai2_gene_pane_ParamLimits

0x39f5,	// (0x0001e922) ai2_gene_pane

0x3a19,	// (0x0001e946) list_ai2_gene_pane_t2

0x0001,

0xfa0f,	// (0x0002a93c) list_ai2_gene_pane_t

0xa756,	// (0x00025683) list_highlight_pane_cp8_ParamLimits

0xa756,	// (0x00025683) list_highlight_pane_cp8

0xa767,	// (0x00025694) ai2_gene_pane_g1_ParamLimits

0xa767,	// (0x00025694) ai2_gene_pane_g1

0xa779,	// (0x000256a6) ai2_gene_pane_g2_ParamLimits

0xa779,	// (0x000256a6) ai2_gene_pane_g2

0x0001,

0xfa14,	// (0x0002a941) ai2_gene_pane_g_ParamLimits

0xfa14,	// (0x0002a941) ai2_gene_pane_g

0x546a,	// (0x00020397) scroll_pane_cp12

0xe297,	// (0x000291c4) control_pane_t3_ParamLimits

0xe297,	// (0x000291c4) control_pane_t3

0x66f6,	// (0x00021623) status_small_pane_g8_ParamLimits

0x66f6,	// (0x00021623) status_small_pane_g8

0x2af6,	// (0x0001da23) popup_find_window_ParamLimits

0x2ce9,	// (0x0001dc16) popup_note_image_window_ParamLimits

0xaa93,	// (0x000259c0) list_double2_graphic_pane_vc_g1_ParamLimits

0xaa93,	// (0x000259c0) list_double2_graphic_pane_vc_g1

0xb1c6,	// (0x000260f3) list_double2_graphic_pane_vc_g2_ParamLimits

0xb1c6,	// (0x000260f3) list_double2_graphic_pane_vc_g2

0xb1d2,	// (0x000260ff) list_double2_graphic_pane_vc_g3_ParamLimits

0xb1d2,	// (0x000260ff) list_double2_graphic_pane_vc_g3

0x0002,

0xf605,	// (0x0002a532) list_double2_graphic_pane_vc_g_ParamLimits

0xf605,	// (0x0002a532) list_double2_graphic_pane_vc_g

0xb1de,	// (0x0002610b) list_double2_graphic_pane_vc_t1_ParamLimits

0xb1de,	// (0x0002610b) list_double2_graphic_pane_vc_t1

0xb1c6,	// (0x000260f3) list_single_heading_pane_vc_g1_ParamLimits

0xb1c6,	// (0x000260f3) list_single_heading_pane_vc_g1

0xb1d2,	// (0x000260ff) list_single_heading_pane_vc_g2_ParamLimits

0xb1d2,	// (0x000260ff) list_single_heading_pane_vc_g2

0x0001,

0xf60c,	// (0x0002a539) list_single_heading_pane_vc_g_ParamLimits

0xf60c,	// (0x0002a539) list_single_heading_pane_vc_g

0xb1f4,	// (0x00026121) list_single_heading_pane_vc_t1_ParamLimits

0xb1f4,	// (0x00026121) list_single_heading_pane_vc_t1

0xb20a,	// (0x00026137) list_single_heading_pane_vc_t2_ParamLimits

0xb20a,	// (0x00026137) list_single_heading_pane_vc_t2

0x0001,

0xf818,	// (0x0002a745) list_single_heading_pane_vc_t_ParamLimits

0xf818,	// (0x0002a745) list_single_heading_pane_vc_t

0x9396,	// (0x000242c3) list_setting_number_pane_vc_g1_ParamLimits

0x9396,	// (0x000242c3) list_setting_number_pane_vc_g1

0x93a2,	// (0x000242cf) list_setting_number_pane_vc_g2_ParamLimits

0x93a2,	// (0x000242cf) list_setting_number_pane_vc_g2

0x0001,

0xf81d,	// (0x0002a74a) list_setting_number_pane_vc_g_ParamLimits

0xf81d,	// (0x0002a74a) list_setting_number_pane_vc_g

0x93ae,	// (0x000242db) list_setting_number_pane_vc_t1_ParamLimits

0x93ae,	// (0x000242db) list_setting_number_pane_vc_t1

0x93c2,	// (0x000242ef) list_setting_number_pane_vc_t2_ParamLimits

0x93c2,	// (0x000242ef) list_setting_number_pane_vc_t2

0x93de,	// (0x0002430b) list_setting_number_pane_vc_t3_ParamLimits

0x93de,	// (0x0002430b) list_setting_number_pane_vc_t3

0x0002,

0xf822,	// (0x0002a74f) list_setting_number_pane_vc_t_ParamLimits

0xf822,	// (0x0002a74f) list_setting_number_pane_vc_t

0x9404,	// (0x00024331) set_value_pane_vc_ParamLimits

0x9404,	// (0x00024331) set_value_pane_vc

0xb299,	// (0x000261c6) list_double2_graphic_pane_vc_ParamLimits

0xb299,	// (0x000261c6) list_double2_graphic_pane_vc

0xa49d,	// (0x000253ca) list_double2_large_graphic_pane_vc_ParamLimits

0xa49d,	// (0x000253ca) list_double2_large_graphic_pane_vc

0xb299,	// (0x000261c6) list_double2_pane_vc_ParamLimits

0xb299,	// (0x000261c6) list_double2_pane_vc

0xb299,	// (0x000261c6) list_double_graphic_heading_pane_vc_ParamLimits

0xb299,	// (0x000261c6) list_double_graphic_heading_pane_vc

0xb299,	// (0x000261c6) list_double_graphic_pane_vc_ParamLimits

0xb299,	// (0x000261c6) list_double_graphic_pane_vc

0xb299,	// (0x000261c6) list_double_heading_pane_vc_ParamLimits

0xb299,	// (0x000261c6) list_double_heading_pane_vc

0xa49d,	// (0x000253ca) list_double_large_graphic_pane_vc_ParamLimits

0xa49d,	// (0x000253ca) list_double_large_graphic_pane_vc

0xb299,	// (0x000261c6) list_double_number_pane_vc_ParamLimits

0xb299,	// (0x000261c6) list_double_number_pane_vc

0xb299,	// (0x000261c6) list_double_pane_vc_ParamLimits

0xb299,	// (0x000261c6) list_double_pane_vc

0xb299,	// (0x000261c6) list_double_time_pane_vc_ParamLimits

0xb299,	// (0x000261c6) list_double_time_pane_vc

0xb299,	// (0x000261c6) list_setting_number_pane_vc_ParamLimits

0xb299,	// (0x000261c6) list_setting_number_pane_vc

0xb299,	// (0x000261c6) list_setting_pane_vc_ParamLimits

0xb299,	// (0x000261c6) list_setting_pane_vc

0xb299,	// (0x000261c6) list_single_graphic_heading_pane_vc_ParamLimits

0xb299,	// (0x000261c6) list_single_graphic_heading_pane_vc

0xb299,	// (0x000261c6) list_single_heading_pane_vc_ParamLimits

0xb299,	// (0x000261c6) list_single_heading_pane_vc

0xb299,	// (0x000261c6) list_single_number_heading_pane_vc_ParamLimits

0xb299,	// (0x000261c6) list_single_number_heading_pane_vc

0xb2f1,	// (0x0002621e) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xb2f1,	// (0x0002621e) list_double_graphic_heading_pane_vc_g1

0xb1c6,	// (0x000260f3) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xb1c6,	// (0x000260f3) list_double_graphic_heading_pane_vc_g2

0xb1d2,	// (0x000260ff) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xb1d2,	// (0x000260ff) list_double_graphic_heading_pane_vc_g3

0x0002,

0xfa20,	// (0x0002a94d) list_double_graphic_heading_pane_vc_g_ParamLimits

0xfa20,	// (0x0002a94d) list_double_graphic_heading_pane_vc_g

0xb2fd,	// (0x0002622a) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xb2fd,	// (0x0002622a) list_double_graphic_heading_pane_vc_t1

0xb1f4,	// (0x00026121) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xb1f4,	// (0x00026121) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa27,	// (0x0002a954) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa27,	// (0x0002a954) list_double_graphic_heading_pane_vc_t

0x9396,	// (0x000242c3) list_setting_pane_vc_g1_ParamLimits

0x9396,	// (0x000242c3) list_setting_pane_vc_g1

0x93a2,	// (0x000242cf) list_setting_pane_vc_g2_ParamLimits

0x93a2,	// (0x000242cf) list_setting_pane_vc_g2

0x0001,

0xf81d,	// (0x0002a74a) list_setting_pane_vc_g_ParamLimits

0xf81d,	// (0x0002a74a) list_setting_pane_vc_g

0xa9d5,	// (0x00025902) list_setting_pane_vc_t1_ParamLimits

0xa9d5,	// (0x00025902) list_setting_pane_vc_t1

0xa9e9,	// (0x00025916) list_setting_pane_vc_t2_ParamLimits

0xa9e9,	// (0x00025916) list_setting_pane_vc_t2

0x0001,

0xfa6a,	// (0x0002a997) list_setting_pane_vc_t_ParamLimits

0xfa6a,	// (0x0002a997) list_setting_pane_vc_t

0x9404,	// (0x00024331) set_value_pane_cp_vc_ParamLimits

0x9404,	// (0x00024331) set_value_pane_cp_vc

0xb1c6,	// (0x000260f3) list_single_number_heading_pane_vc_g1_ParamLimits

0xb1c6,	// (0x000260f3) list_single_number_heading_pane_vc_g1

0xb1d2,	// (0x000260ff) list_single_number_heading_pane_vc_g2_ParamLimits

0xb1d2,	// (0x000260ff) list_single_number_heading_pane_vc_g2

0x0001,

0xf60c,	// (0x0002a539) list_single_number_heading_pane_vc_g_ParamLimits

0xf60c,	// (0x0002a539) list_single_number_heading_pane_vc_g

0xb1f4,	// (0x00026121) list_single_number_heading_pane_vc_t1_ParamLimits

0xb1f4,	// (0x00026121) list_single_number_heading_pane_vc_t1

0xb30f,	// (0x0002623c) list_single_number_heading_pane_vc_t2_ParamLimits

0xb30f,	// (0x0002623c) list_single_number_heading_pane_vc_t2

0xb321,	// (0x0002624e) list_single_number_heading_pane_vc_t3_ParamLimits

0xb321,	// (0x0002624e) list_single_number_heading_pane_vc_t3

0x0002,

0xfa6f,	// (0x0002a99c) list_single_number_heading_pane_vc_t_ParamLimits

0xfa6f,	// (0x0002a99c) list_single_number_heading_pane_vc_t

0xaa93,	// (0x000259c0) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xaa93,	// (0x000259c0) list_single_graphic_heading_pane_vc_g1

0xb1c6,	// (0x000260f3) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xb1c6,	// (0x000260f3) list_single_graphic_heading_pane_vc_g4

0xb1d2,	// (0x000260ff) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xb1d2,	// (0x000260ff) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf605,	// (0x0002a532) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf605,	// (0x0002a532) list_single_graphic_heading_pane_vc_g

0xb1f4,	// (0x00026121) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xb1f4,	// (0x00026121) list_single_graphic_heading_pane_vc_t1

0xb333,	// (0x00026260) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xb333,	// (0x00026260) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa76,	// (0x0002a9a3) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa76,	// (0x0002a9a3) list_single_graphic_heading_pane_vc_t

0xb1c6,	// (0x000260f3) list_double2_pane_vc_g1_ParamLimits

0xb1c6,	// (0x000260f3) list_double2_pane_vc_g1

0xb1d2,	// (0x000260ff) list_double2_pane_vc_g2_ParamLimits

0xb1d2,	// (0x000260ff) list_double2_pane_vc_g2

0x0001,

0xf60c,	// (0x0002a539) list_double2_pane_vc_g_ParamLimits

0xf60c,	// (0x0002a539) list_double2_pane_vc_g

0xb345,	// (0x00026272) list_double2_pane_vc_t1_ParamLimits

0xb345,	// (0x00026272) list_double2_pane_vc_t1

0xb35b,	// (0x00026288) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xb35b,	// (0x00026288) list_double2_large_graphic_pane_vc_g1

0xb367,	// (0x00026294) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xb367,	// (0x00026294) list_double2_large_graphic_pane_vc_g2

0xb373,	// (0x000262a0) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xb373,	// (0x000262a0) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf629,	// (0x0002a556) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf629,	// (0x0002a556) list_double2_large_graphic_pane_vc_g

0xb37f,	// (0x000262ac) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xb37f,	// (0x000262ac) list_double2_large_graphic_pane_vc_t1

0xb395,	// (0x000262c2) list_double_time_pane_vc_g1_ParamLimits

0xb395,	// (0x000262c2) list_double_time_pane_vc_g1

0xb3a1,	// (0x000262ce) list_double_time_pane_vc_g2_ParamLimits

0xb3a1,	// (0x000262ce) list_double_time_pane_vc_g2

0x0001,

0xfa7b,	// (0x0002a9a8) list_double_time_pane_vc_g_ParamLimits

0xfa7b,	// (0x0002a9a8) list_double_time_pane_vc_g

0xb3ad,	// (0x000262da) list_double_time_pane_vc_t1_ParamLimits

0xb3ad,	// (0x000262da) list_double_time_pane_vc_t1

0xb3c6,	// (0x000262f3) list_double_time_pane_vc_t2_ParamLimits

0xb3c6,	// (0x000262f3) list_double_time_pane_vc_t2

0xb3ff,	// (0x0002632c) list_double_time_pane_vc_t3_ParamLimits

0xb3ff,	// (0x0002632c) list_double_time_pane_vc_t3

0xb417,	// (0x00026344) list_double_time_pane_vc_t4_ParamLimits

0xb417,	// (0x00026344) list_double_time_pane_vc_t4

0x0003,

0xfa80,	// (0x0002a9ad) list_double_time_pane_vc_t_ParamLimits

0xfa80,	// (0x0002a9ad) list_double_time_pane_vc_t

0xb1c6,	// (0x000260f3) list_double_pane_vc_g1_ParamLimits

0xb1c6,	// (0x000260f3) list_double_pane_vc_g1

0xb1d2,	// (0x000260ff) list_double_pane_vc_g2_ParamLimits

0xb1d2,	// (0x000260ff) list_double_pane_vc_g2

0x0001,

0xf60c,	// (0x0002a539) list_double_pane_vc_g_ParamLimits

0xf60c,	// (0x0002a539) list_double_pane_vc_g

0xb429,	// (0x00026356) list_double_pane_vc_t1_ParamLimits

0xb429,	// (0x00026356) list_double_pane_vc_t1

0xb43b,	// (0x00026368) list_double_pane_vc_t2_ParamLimits

0xb43b,	// (0x00026368) list_double_pane_vc_t2

0x0001,

0xfa89,	// (0x0002a9b6) list_double_pane_vc_t_ParamLimits

0xfa89,	// (0x0002a9b6) list_double_pane_vc_t

0xb1c6,	// (0x000260f3) list_double_number_pane_vc_g1_ParamLimits

0xb1c6,	// (0x000260f3) list_double_number_pane_vc_g1

0xb1d2,	// (0x000260ff) list_double_number_pane_vc_g2_ParamLimits

0xb1d2,	// (0x000260ff) list_double_number_pane_vc_g2

0x0001,

0xf60c,	// (0x0002a539) list_double_number_pane_vc_g_ParamLimits

0xf60c,	// (0x0002a539) list_double_number_pane_vc_g

0xb451,	// (0x0002637e) list_double_number_pane_vc_t1_ParamLimits

0xb451,	// (0x0002637e) list_double_number_pane_vc_t1

0xb465,	// (0x00026392) list_double_number_pane_vc_t2_ParamLimits

0xb465,	// (0x00026392) list_double_number_pane_vc_t2

0xb43b,	// (0x00026368) list_double_number_pane_vc_t3_ParamLimits

0xb43b,	// (0x00026368) list_double_number_pane_vc_t3

0x0002,

0xfa8e,	// (0x0002a9bb) list_double_number_pane_vc_t_ParamLimits

0xfa8e,	// (0x0002a9bb) list_double_number_pane_vc_t

0xb477,	// (0x000263a4) list_double_large_graphic_pane_vc_g1_ParamLimits

0xb477,	// (0x000263a4) list_double_large_graphic_pane_vc_g1

0xb483,	// (0x000263b0) list_double_large_graphic_pane_vc_g2_ParamLimits

0xb483,	// (0x000263b0) list_double_large_graphic_pane_vc_g2

0xb373,	// (0x000262a0) list_double_large_graphic_pane_vc_g3_ParamLimits

0xb373,	// (0x000262a0) list_double_large_graphic_pane_vc_g3

0xb492,	// (0x000263bf) list_double_large_graphic_pane_vc_g4_ParamLimits

0xb492,	// (0x000263bf) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa95,	// (0x0002a9c2) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa95,	// (0x0002a9c2) list_double_large_graphic_pane_vc_g

0xb49e,	// (0x000263cb) list_double_large_graphic_pane_vc_t1_ParamLimits

0xb49e,	// (0x000263cb) list_double_large_graphic_pane_vc_t1

0xb4b0,	// (0x000263dd) list_double_large_graphic_pane_vc_t2_ParamLimits

0xb4b0,	// (0x000263dd) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa9e,	// (0x0002a9cb) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa9e,	// (0x0002a9cb) list_double_large_graphic_pane_vc_t

0xb1c6,	// (0x000260f3) list_double_heading_pane_vc_g1_ParamLimits

0xb1c6,	// (0x000260f3) list_double_heading_pane_vc_g1

0xb1d2,	// (0x000260ff) list_double_heading_pane_vc_g2_ParamLimits

0xb1d2,	// (0x000260ff) list_double_heading_pane_vc_g2

0x0001,

0xf60c,	// (0x0002a539) list_double_heading_pane_vc_g_ParamLimits

0xf60c,	// (0x0002a539) list_double_heading_pane_vc_g

0xb4c7,	// (0x000263f4) list_double_heading_pane_vc_t1_ParamLimits

0xb4c7,	// (0x000263f4) list_double_heading_pane_vc_t1

0xb1f4,	// (0x00026121) list_double_heading_pane_vc_t2_ParamLimits

0xb1f4,	// (0x00026121) list_double_heading_pane_vc_t2

0x0001,

0xfaa3,	// (0x0002a9d0) list_double_heading_pane_vc_t_ParamLimits

0xfaa3,	// (0x0002a9d0) list_double_heading_pane_vc_t

0xb4d9,	// (0x00026406) list_double_graphic_pane_vc_g1_ParamLimits

0xb4d9,	// (0x00026406) list_double_graphic_pane_vc_g1

0xb4e9,	// (0x00026416) list_double_graphic_pane_vc_g2_ParamLimits

0xb4e9,	// (0x00026416) list_double_graphic_pane_vc_g2

0xb4f8,	// (0x00026425) list_double_graphic_pane_vc_g3_ParamLimits

0xb4f8,	// (0x00026425) list_double_graphic_pane_vc_g3

0x0002,

0xfaa8,	// (0x0002a9d5) list_double_graphic_pane_vc_g_ParamLimits

0xfaa8,	// (0x0002a9d5) list_double_graphic_pane_vc_g

0xb504,	// (0x00026431) list_double_graphic_pane_vc_t1_ParamLimits

0xb504,	// (0x00026431) list_double_graphic_pane_vc_t1

0xb43b,	// (0x00026368) list_double_graphic_pane_vc_t2_ParamLimits

0xb43b,	// (0x00026368) list_double_graphic_pane_vc_t2

0x0001,

0xfaaf,	// (0x0002a9dc) list_double_graphic_pane_vc_t_ParamLimits

0xfaaf,	// (0x0002a9dc) list_double_graphic_pane_vc_t

0x7147,	// (0x00022074) aid_size_cell_fastswap

0xe042,	// (0x00028f6f) aid_size_cell_touch_ParamLimits

0xe042,	// (0x00028f6f) aid_size_cell_touch

0x7303,	// (0x00022230) popup_fast_swap_wide_window_ParamLimits

0x7303,	// (0x00022230) popup_fast_swap_wide_window

0xe0f3,	// (0x00029020) touch_pane_ParamLimits

0xe0f3,	// (0x00029020) touch_pane

0xaeff,	// (0x00025e2c) button_value_adjust_pane_cp2

0xaf07,	// (0x00025e34) button_value_adjust_pane_cp4

0xaf27,	// (0x00025e54) form_field_data_pane_cp2

0x1c31,	// (0x0001cb5e) form_field_data_wide_pane_cp2

0x5ef5,	// (0x00020e22) bg_scroll_pane_ParamLimits

0x797e,	// (0x000228ab) scroll_handle_pane_ParamLimits

0x7992,	// (0x000228bf) scroll_sc2_down_pane_ParamLimits

0x7992,	// (0x000228bf) scroll_sc2_down_pane

0x5f26,	// (0x00020e53) scroll_sc2_up_pane_ParamLimits

0x5f26,	// (0x00020e53) scroll_sc2_up_pane

0x3b3d,	// (0x0001ea6a) grid_wheel_folder_pane_g1_ParamLimits

0x3b3d,	// (0x0001ea6a) grid_wheel_folder_pane_g1

0x7c5c,	// (0x00022b89) clock_nsta_pane_cp2_ParamLimits

0x7c5c,	// (0x00022b89) clock_nsta_pane_cp2

0x2817,	// (0x0001d744) listscroll_midp_pane_ParamLimits

0x2827,	// (0x0001d754) midp_canvas_pane

0x7f8e,	// (0x00022ebb) nsta_clock_indic_pane

0x9076,	// (0x00023fa3) listscroll_form_pane_vc

0x907e,	// (0x00023fab) listscroll_set_pane_vc_ParamLimits

0x907e,	// (0x00023fab) listscroll_set_pane_vc

0x30b5,	// (0x0001dfe2) clock_nsta_pane

0x30d8,	// (0x0001e005) indicator_nsta_pane

0x9298,	// (0x000241c5) bg_popup_sub_pane_cp2_ParamLimits

0x92ac,	// (0x000241d9) find_pane_cp2_ParamLimits

0x92ac,	// (0x000241d9) find_pane_cp2

0x92be,	// (0x000241eb) grid_toobar_pane_ParamLimits

0x9410,	// (0x0002433d) list_form_gen_pane_vc_ParamLimits

0x9410,	// (0x0002433d) list_form_gen_pane_vc

0x9426,	// (0x00024353) scroll_pane_cp8_vc_ParamLimits

0x9426,	// (0x00024353) scroll_pane_cp8_vc

0x9476,	// (0x000243a3) data_form_wide_pane_vc_ParamLimits

0x9476,	// (0x000243a3) data_form_wide_pane_vc

0x9482,	// (0x000243af) form_field_data_wide_pane_vc_g1

0x948a,	// (0x000243b7) form_field_data_wide_pane_vc_t1_ParamLimits

0x948a,	// (0x000243b7) form_field_data_wide_pane_vc_t1

0x5b77,	// (0x00020aa4) input_focus_pane_cp6_vc_ParamLimits

0x5b77,	// (0x00020aa4) input_focus_pane_cp6_vc

0x348c,	// (0x0001e3b9) list_midp_pane_ParamLimits

0xa534,	// (0x00025461) scroll_pane_cp16_ParamLimits

0xa534,	// (0x00025461) scroll_pane_cp16

0x96e3,	// (0x00024610) button_value_adjust_pane_ParamLimits

0x96e3,	// (0x00024610) button_value_adjust_pane

0x3799,	// (0x0001e6c6) button_value_adjust_pane_cp6_ParamLimits

0x3799,	// (0x0001e6c6) button_value_adjust_pane_cp6

0x38a3,	// (0x0001e7d0) settings_code_pane_cp_ParamLimits

0x38a3,	// (0x0001e7d0) settings_code_pane_cp

0x4e3d,	// (0x0001fd6a) cell_touch_pane_g1

0x4e3d,	// (0x0001fd6a) cell_touch_pane_g2

0x0001,

0xf747,	// (0x0002a674) cell_touch_pane_g

0x3a27,	// (0x0001e954) cell_touch_pane_cp_ParamLimits

0x3a27,	// (0x0001e954) cell_touch_pane_cp

0x3a43,	// (0x0001e970) cell_touch_pane_ParamLimits

0x3a43,	// (0x0001e970) cell_touch_pane

0x4e3d,	// (0x0001fd6a) scroll_sc2_down_pane_g1

0x4e3d,	// (0x0001fd6a) scroll_sc2_up_pane_g1

0x4ebf,	// (0x0001fdec) bg_set_opt_pane_cp4_vc

0xa7f8,	// (0x00025725) list_set_graphic_pane_vc_g1_ParamLimits

0xa7f8,	// (0x00025725) list_set_graphic_pane_vc_g1

0xa804,	// (0x00025731) list_set_graphic_pane_vc_g2_ParamLimits

0xa804,	// (0x00025731) list_set_graphic_pane_vc_g2

0x0001,

0xfa2c,	// (0x0002a959) list_set_graphic_pane_vc_g_ParamLimits

0xfa2c,	// (0x0002a959) list_set_graphic_pane_vc_g

0xa810,	// (0x0002573d) text_primary_small_cp13_vc_ParamLimits

0xa810,	// (0x0002573d) text_primary_small_cp13_vc

0xa828,	// (0x00025755) list_set_graphic_pane_vc_ParamLimits

0xa828,	// (0x00025755) list_set_graphic_pane_vc

0x4ebf,	// (0x0001fdec) input_focus_pane_cp2_vc

0x4e3d,	// (0x0001fd6a) setting_code_pane_vc_g1

0xa83b,	// (0x00025768) setting_code_pane_vc_t1

0xa849,	// (0x00025776) set_text_pane_vc_t1_ParamLimits

0xa849,	// (0x00025776) set_text_pane_vc_t1

0x4ebf,	// (0x0001fdec) input_focus_pane_cp1_vc

0xa864,	// (0x00025791) list_set_text_pane_vc

0x4e3d,	// (0x0001fd6a) setting_text_pane_vc_g1

0x4ebf,	// (0x0001fdec) bg_set_opt_pane_cp2_vc

0xa86e,	// (0x0002579b) setting_slider_graphic_pane_vc_g1

0xa876,	// (0x000257a3) setting_slider_graphic_pane_vc_t1

0xa884,	// (0x000257b1) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa31,	// (0x0002a95e) setting_slider_graphic_pane_vc_t

0xa892,	// (0x000257bf) slider_set_pane_cp_vc

0xa89a,	// (0x000257c7) slider_set_pane_vc_g1

0xa8a3,	// (0x000257d0) slider_set_pane_vc_g2

0x0006,

0xfa36,	// (0x0002a963) slider_set_pane_vc_g

0x5bc6,	// (0x00020af3) set_opt_bg_pane_g1_copy1

0x5bce,	// (0x00020afb) set_opt_bg_pane_g2_copy1

0xa8cf,	// (0x000257fc) set_opt_bg_pane_g3_copy1

0x5bde,	// (0x00020b0b) set_opt_bg_pane_g4_copy1

0x5be6,	// (0x00020b13) set_opt_bg_pane_g5_copy1

0x5bee,	// (0x00020b1b) set_opt_bg_pane_g6_copy1

0xa8d7,	// (0x00025804) set_opt_bg_pane_g7_copy1

0xa8df,	// (0x0002580c) set_opt_bg_pane_g8_copy1

0xa8e7,	// (0x00025814) set_opt_bg_pane_g9_copy1

0x4ebf,	// (0x0001fdec) bg_set_opt_pane_cp_vc

0xa8ef,	// (0x0002581c) setting_slider_pane_vc_t1

0xa876,	// (0x000257a3) setting_slider_pane_vc_t2

0xa884,	// (0x000257b1) setting_slider_pane_vc_t3

0x0002,

0xfa45,	// (0x0002a972) setting_slider_pane_vc_t

0xa892,	// (0x000257bf) slider_set_pane_vc

0x80c5,	// (0x00022ff2) volume_set_pane_vc_g1

0x83ac,	// (0x000232d9) volume_set_pane_vc_g2

0x83b5,	// (0x000232e2) volume_set_pane_vc_g3

0x83be,	// (0x000232eb) volume_set_pane_vc_g4

0x83c7,	// (0x000232f4) volume_set_pane_vc_g5

0x83d0,	// (0x000232fd) volume_set_pane_vc_g6

0x83d9,	// (0x00023306) volume_set_pane_vc_g7

0x83e2,	// (0x0002330f) volume_set_pane_vc_g8

0x83eb,	// (0x00023318) volume_set_pane_vc_g9

0x83f4,	// (0x00023321) volume_set_pane_vc_g10

0x0009,

0xfa4c,	// (0x0002a979) volume_set_pane_vc_g

0xa8fe,	// (0x0002582b) volume_set_pane_vc

0xa906,	// (0x00025833) button_value_adjust_pane_cp1_vc

0xa910,	// (0x0002583d) list_highlight_pane_cp2_vc

0xa919,	// (0x00025846) list_set_pane_vc_ParamLimits

0xa919,	// (0x00025846) list_set_pane_vc

0xa96b,	// (0x00025898) main_pane_set_vc_t1_ParamLimits

0xa96b,	// (0x00025898) main_pane_set_vc_t1

0xa980,	// (0x000258ad) main_pane_set_vc_t2_ParamLimits

0xa980,	// (0x000258ad) main_pane_set_vc_t2

0xa992,	// (0x000258bf) main_pane_set_vc_t3_ParamLimits

0xa992,	// (0x000258bf) main_pane_set_vc_t3

0xa9a4,	// (0x000258d1) main_pane_set_vc_t4_ParamLimits

0xa9a4,	// (0x000258d1) main_pane_set_vc_t4

0x0003,

0xfa61,	// (0x0002a98e) main_pane_set_vc_t_ParamLimits

0xfa61,	// (0x0002a98e) main_pane_set_vc_t

0xa9b6,	// (0x000258e3) setting_code_pane_vc_ParamLimits

0xa9b6,	// (0x000258e3) setting_code_pane_vc

0xa9c5,	// (0x000258f2) setting_slider_graphic_pane_vc

0xa9c5,	// (0x000258f2) setting_slider_pane_vc

0xa9c5,	// (0x000258f2) setting_text_pane_vc

0xa9c5,	// (0x000258f2) setting_volume_pane_vc

0xa9cd,	// (0x000258fa) scroll_pane_cp121_vc

0x5b62,	// (0x00020a8f) set_content_pane_vc

0xb516,	// (0x00026443) button_value_adjust_pane_g1

0xb51f,	// (0x0002644c) button_value_adjust_pane_g2

0x0001,

0xfab4,	// (0x0002a9e1) button_value_adjust_pane_g

0xb528,	// (0x00026455) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb528,	// (0x00026455) form_field_slider_wide_pane_vc_t1

0xb53e,	// (0x0002646b) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb53e,	// (0x0002646b) form_field_slider_wide_pane_vc_t2

0x0001,

0xfab9,	// (0x0002a9e6) form_field_slider_wide_pane_vc_t_ParamLimits

0xfab9,	// (0x0002a9e6) form_field_slider_wide_pane_vc_t

0x4f0d,	// (0x0001fe3a) input_focus_pane_cp10_vc_ParamLimits

0x4f0d,	// (0x0001fe3a) input_focus_pane_cp10_vc

0xb553,	// (0x00026480) slider_cont_pane_cp1_vc_ParamLimits

0xb553,	// (0x00026480) slider_cont_pane_cp1_vc

0xa89a,	// (0x000257c7) slider_form_pane_g1_cp2

0xa8a3,	// (0x000257d0) slider_form_pane_g2_cp2

0xb56e,	// (0x0002649b) form_field_slider_pane_vc_t3

0xb57c,	// (0x000264a9) form_field_slider_pane_vc_t4

0xb58a,	// (0x000264b7) slider_form_pane_vc_ParamLimits

0xb58a,	// (0x000264b7) slider_form_pane_vc

0xb597,	// (0x000264c4) form_field_slider_pane_vc_t1_ParamLimits

0xb597,	// (0x000264c4) form_field_slider_pane_vc_t1

0xb5ad,	// (0x000264da) form_field_slider_pane_vc_t2_ParamLimits

0xb5ad,	// (0x000264da) form_field_slider_pane_vc_t2

0x0001,

0xfac9,	// (0x0002a9f6) form_field_slider_pane_vc_t_ParamLimits

0xfac9,	// (0x0002a9f6) form_field_slider_pane_vc_t

0x4f0d,	// (0x0001fe3a) input_focus_pane_cp9_vc_ParamLimits

0x4f0d,	// (0x0001fe3a) input_focus_pane_cp9_vc

0xb5bf,	// (0x000264ec) slider_cont_pane_vc_ParamLimits

0xb5bf,	// (0x000264ec) slider_cont_pane_vc

0xb5d1,	// (0x000264fe) list_form_graphic_pane_cp_vc_ParamLimits

0xb5d1,	// (0x000264fe) list_form_graphic_pane_cp_vc

0x9482,	// (0x000243af) form_field_popup_wide_pane_vc_g1

0xb5e6,	// (0x00026513) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb5e6,	// (0x00026513) form_field_popup_wide_pane_vc_t1

0x5b77,	// (0x00020aa4) input_focus_pane_cp8_vc_ParamLimits

0x5b77,	// (0x00020aa4) input_focus_pane_cp8_vc

0xb5fb,	// (0x00026528) list_form_wide_pane_vc_ParamLimits

0xb5fb,	// (0x00026528) list_form_wide_pane_vc

0xb607,	// (0x00026534) list_form_graphic_pane_vc_g1

0xb60f,	// (0x0002653c) list_form_graphic_pane_vc_t1_ParamLimits

0xb60f,	// (0x0002653c) list_form_graphic_pane_vc_t1

0x4f23,	// (0x0001fe50) list_highlight_pane_cp5_vc_ParamLimits

0x4f23,	// (0x0001fe50) list_highlight_pane_cp5_vc

0xb62b,	// (0x00026558) list_form_graphic_pane_vc_ParamLimits

0xb62b,	// (0x00026558) list_form_graphic_pane_vc

0x9482,	// (0x000243af) form_field_popup_pane_vc_g1

0xb641,	// (0x0002656e) form_field_popup_pane_vc_t1_ParamLimits

0xb641,	// (0x0002656e) form_field_popup_pane_vc_t1

0x5b77,	// (0x00020aa4) input_focus_pane_cp7_vc_ParamLimits

0x5b77,	// (0x00020aa4) input_focus_pane_cp7_vc

0xb656,	// (0x00026583) list_form_pane_vc_ParamLimits

0xb656,	// (0x00026583) list_form_pane_vc

0xb662,	// (0x0002658f) data_form_pane_vc_t1_ParamLimits

0xb662,	// (0x0002658f) data_form_pane_vc_t1

0x5bc6,	// (0x00020af3) input_focus_pane_vc_g1

0x5bce,	// (0x00020afb) input_focus_pane_vc_g2

0x5bd6,	// (0x00020b03) input_focus_pane_vc_g3

0x5bde,	// (0x00020b0b) input_focus_pane_vc_g4

0x5be6,	// (0x00020b13) input_focus_pane_vc_g5

0x5bee,	// (0x00020b1b) input_focus_pane_vc_g6

0x5bf6,	// (0x00020b23) input_focus_pane_vc_g7

0x5bfe,	// (0x00020b2b) input_focus_pane_vc_g8

0x5c06,	// (0x00020b33) input_focus_pane_vc_g9

0x4e3d,	// (0x0001fd6a) input_focus_pane_vc_g10

0x0009,

0xf6d0,	// (0x0002a5fd) input_focus_pane_vc_g

0x9476,	// (0x000243a3) data_form_pane_vc_ParamLimits

0x9476,	// (0x000243a3) data_form_pane_vc

0x9482,	// (0x000243af) form_field_data_pane_vc_g1

0xb67d,	// (0x000265aa) form_field_data_pane_vc_t1_ParamLimits

0xb67d,	// (0x000265aa) form_field_data_pane_vc_t1

0x5b77,	// (0x00020aa4) input_focus_pane_vc_ParamLimits

0x5b77,	// (0x00020aa4) input_focus_pane_vc

0x60e2,	// (0x0002100f) button_value_adjust_pane_cp3_vc

0xaf07,	// (0x00025e34) button_value_adjust_pane_cp5_vc

0xb693,	// (0x000265c0) form_field_data_pane_vc_ParamLimits

0xb693,	// (0x000265c0) form_field_data_pane_vc

0x60ea,	// (0x00021017) form_field_data_pane_vc_cp2

0xb6aa,	// (0x000265d7) form_field_data_wide_pane_vc_ParamLimits

0xb6aa,	// (0x000265d7) form_field_data_wide_pane_vc

0xb6c0,	// (0x000265ed) form_field_data_wide_pane_vc_cp2

0xb6c8,	// (0x000265f5) form_field_popup_pane_vc_ParamLimits

0xb6c8,	// (0x000265f5) form_field_popup_pane_vc

0xb6df,	// (0x0002660c) form_field_popup_wide_pane_vc_ParamLimits

0xb6df,	// (0x0002660c) form_field_popup_wide_pane_vc

0xb6f5,	// (0x00026622) form_field_slider_pane_vc_ParamLimits

0xb6f5,	// (0x00026622) form_field_slider_pane_vc

0xb708,	// (0x00026635) form_field_slider_wide_pane_vc_ParamLimits

0xb708,	// (0x00026635) form_field_slider_wide_pane_vc

0x3a61,	// (0x0001e98e) grid_touch_1_pane_ParamLimits

0x3a61,	// (0x0001e98e) grid_touch_1_pane

0x3a75,	// (0x0001e9a2) grid_touch_2_pane_ParamLimits

0x3a75,	// (0x0001e9a2) grid_touch_2_pane

0xb780,	// (0x000266ad) touch_pane_g1_ParamLimits

0xb780,	// (0x000266ad) touch_pane_g1

0xb71b,	// (0x00026648) cell_app_pane_cp_wide_ParamLimits

0xb71b,	// (0x00026648) cell_app_pane_cp_wide

0xb72b,	// (0x00026658) grid_popup_fast_wide_pane_ParamLimits

0xb72b,	// (0x00026658) grid_popup_fast_wide_pane

0xb73f,	// (0x0002666c) scroll_pane_cp19_ParamLimits

0xb73f,	// (0x0002666c) scroll_pane_cp19

0x4ebf,	// (0x0001fdec) bg_popup_window_pane_cp20

0xb753,	// (0x00026680) listscroll_popup_fast_wide_pane

0x60f2,	// (0x0002101f) grid_indicator_nsta_pane

0xb75b,	// (0x00026688) clock_nsta_pane_g1

0xb764,	// (0x00026691) clock_nsta_pane_t1

0x3a9f,	// (0x0001e9cc) cell_indicator_nsta_pane_ParamLimits

0x3a9f,	// (0x0001e9cc) cell_indicator_nsta_pane

0xb780,	// (0x000266ad) cell_indicator_nsta_pane_g1

0x3abc,	// (0x0001e9e9) cell_indicator_nsta_pane_g2

0x0001,

0xfad3,	// (0x0002aa00) cell_indicator_nsta_pane_g

0xb78e,	// (0x000266bb) clock_nsta_pane_cp

0xb796,	// (0x000266c3) indicator_nsta_pane_cp

0xb79f,	// (0x000266cc) nsta_clock_indic_pane_g1

0x4f8b,	// (0x0001feb8) grid_indicator_pane

0x6018,	// (0x00020f45) scroll_pane_cp29

0x7bb3,	// (0x00022ae0) indicator_nsta_pane_cp2_ParamLimits

0x7bb3,	// (0x00022ae0) indicator_nsta_pane_cp2

0x4f23,	// (0x0001fe50) main_apps_wheel_pane

0x9596,	// (0x000244c3) form_midp_field_text_pane_ParamLimits

0x96c3,	// (0x000245f0) scroll_bar_cp050_ParamLimits

0xb7d7,	// (0x00026704) cell_indicator_pane_ParamLimits

0xb7d7,	// (0x00026704) cell_indicator_pane

0xb7ed,	// (0x0002671a) cell_indicator_pane_g1

0x3ad1,	// (0x0001e9fe) grid_wheel_folder_pane_ParamLimits

0x3ad1,	// (0x0001e9fe) grid_wheel_folder_pane

0x3adf,	// (0x0001ea0c) list_wheel_apps_pane_ParamLimits

0x3adf,	// (0x0001ea0c) list_wheel_apps_pane

0x3aeb,	// (0x0001ea18) main_apps_wheel_pane_g1_ParamLimits

0x3aeb,	// (0x0001ea18) main_apps_wheel_pane_g1

0x3af7,	// (0x0001ea24) main_apps_wheel_pane_g2_ParamLimits

0x3af7,	// (0x0001ea24) main_apps_wheel_pane_g2

0x0001,

0xfae2,	// (0x0002aa0f) main_apps_wheel_pane_g_ParamLimits

0xfae2,	// (0x0002aa0f) main_apps_wheel_pane_g

0x3b03,	// (0x0001ea30) main_apps_wheel_pane_t1_ParamLimits

0x3b03,	// (0x0001ea30) main_apps_wheel_pane_t1

0x3b15,	// (0x0001ea42) list_wheel_apps_pane_g1

0x3b1d,	// (0x0001ea4a) list_wheel_apps_pane_g2

0x3b25,	// (0x0001ea52) list_wheel_apps_pane_g3

0x3b2d,	// (0x0001ea5a) list_wheel_apps_pane_g4

0x3b35,	// (0x0001ea62) list_wheel_apps_pane_g5

0x0004,

0xfae7,	// (0x0002aa14) list_wheel_apps_pane_g

0x4f23,	// (0x0001fe50) navi_icon_text_pane

0x2fc1,	// (0x0001deee) aid_fill_nsta

0xc857,	// (0x00027784) navi_icon_text_pane_g1

0xc863,	// (0x00027790) navi_icon_text_pane_t1

0x62ab,	// (0x000211d8) list_set_graphic_pane_t1_ParamLimits

0x62ab,	// (0x000211d8) list_set_graphic_pane_t1

0x9d6c,	// (0x00024c99) popup_midp_note_alarm_window_t6_ParamLimits

0x9d6c,	// (0x00024c99) popup_midp_note_alarm_window_t6

0x9d7e,	// (0x00024cab) popup_midp_note_alarm_window_t7_ParamLimits

0x9d7e,	// (0x00024cab) popup_midp_note_alarm_window_t7

0x9d90,	// (0x00024cbd) popup_midp_note_alarm_window_t8_ParamLimits

0x9d90,	// (0x00024cbd) popup_midp_note_alarm_window_t8

0x9da2,	// (0x00024ccf) popup_midp_note_alarm_window_t9_ParamLimits

0x9da2,	// (0x00024ccf) popup_midp_note_alarm_window_t9

0x9db4,	// (0x00024ce1) popup_midp_note_alarm_window_t10_ParamLimits

0x9db4,	// (0x00024ce1) popup_midp_note_alarm_window_t10

0x9dc6,	// (0x00024cf3) popup_midp_note_alarm_window_t11_ParamLimits

0x9dc6,	// (0x00024cf3) popup_midp_note_alarm_window_t11

0x9dd8,	// (0x00024d05) scroll_pane_cp17_ParamLimits

0x9dd8,	// (0x00024d05) scroll_pane_cp17

0x80c5,	// (0x00022ff2) volume_small_pane_cp_g1

0x83fd,	// (0x0002332a) volume_small_pane_cp_g2

0x8406,	// (0x00023333) volume_small_pane_cp_g3

0x840f,	// (0x0002333c) volume_small_pane_cp_g4

0x80f2,	// (0x0002301f) volume_small_pane_cp_g5

0x8418,	// (0x00023345) volume_small_pane_cp_g6

0x8421,	// (0x0002334e) volume_small_pane_cp_g7

0x842a,	// (0x00023357) volume_small_pane_cp_g8

0x8433,	// (0x00023360) volume_small_pane_cp_g9

0x843c,	// (0x00023369) volume_small_pane_cp_g10

0x655a,	// (0x00021487) midp_ticker_pane_g1_ParamLimits

0x6566,	// (0x00021493) midp_ticker_pane_g2_ParamLimits

0xf798,	// (0x0002a6c5) midp_ticker_pane_g_ParamLimits

0x6572,	// (0x0002149f) midp_ticker_pane_t1_ParamLimits

0x2fd7,	// (0x0001df04) aid_fill_nsta_2

0x96af,	// (0x000245dc) list_form2_midp_pane

0xa47e,	// (0x000253ab) midp_editing_number_pane_ParamLimits

0xa48a,	// (0x000253b7) midp_ticker_pane_ParamLimits

0xc875,	// (0x000277a2) form2_midp_field_pane

0xc899,	// (0x000277c6) scroll_pane_cp51

0xc8b9,	// (0x000277e6) form2_midp_button_pane_ParamLimits

0xc8b9,	// (0x000277e6) form2_midp_button_pane

0xc8cb,	// (0x000277f8) form2_midp_content_pane_ParamLimits

0xc8cb,	// (0x000277f8) form2_midp_content_pane

0xc8e5,	// (0x00027812) form2_midp_field_choice_group_pane

0xc8ed,	// (0x0002781a) form2_midp_field_pane_g1

0xc8f5,	// (0x00027822) form2_midp_field_pane_g2

0xc8fd,	// (0x0002782a) form2_midp_field_pane_g3

0xc905,	// (0x00027832) form2_midp_field_pane_g4

0x0003,

0xfb0c,	// (0x0002aa39) form2_midp_field_pane_g

0xc90d,	// (0x0002783a) form2_midp_gauge_slider_pane

0xc915,	// (0x00027842) form2_midp_gauge_wait_pane

0xc91d,	// (0x0002784a) form2_midp_image_pane_ParamLimits

0xc91d,	// (0x0002784a) form2_midp_image_pane

0xc938,	// (0x00027865) form2_midp_label_pane_ParamLimits

0xc938,	// (0x00027865) form2_midp_label_pane

0x3b6a,	// (0x0001ea97) form2_midp_label_pane_cp_ParamLimits

0x3b6a,	// (0x0001ea97) form2_midp_label_pane_cp

0xc970,	// (0x0002789d) form2_midp_string_pane_ParamLimits

0xc970,	// (0x0002789d) form2_midp_string_pane

0x1e39,	// (0x0001cd66) form2_midp_text_pane_ParamLimits

0x1e39,	// (0x0001cd66) form2_midp_text_pane

0xc982,	// (0x000278af) form2_midp_time_pane

0xc992,	// (0x000278bf) input_focus_pane_cp51_ParamLimits

0xc992,	// (0x000278bf) input_focus_pane_cp51

0xc9aa,	// (0x000278d7) form2_midp_label_pane_t1_ParamLimits

0xc9aa,	// (0x000278d7) form2_midp_label_pane_t1

0x1e52,	// (0x0001cd7f) form2_mdip_text_pane_t1_ParamLimits

0x1e52,	// (0x0001cd7f) form2_mdip_text_pane_t1

0xb82d,	// (0x0002675a) form2_midp_time_pane_t1

0xc9f2,	// (0x0002791f) form2_midp_gauge_slider_pane_t1

0x3b89,	// (0x0001eab6) form2_midp_gauge_slider_pane_t2

0x3b9b,	// (0x0001eac8) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb15,	// (0x0002aa42) form2_midp_gauge_slider_pane_t

0xca28,	// (0x00027955) form2_midp_slider_pane

0xca34,	// (0x00027961) form2_midp_gauge_wait_pane_t1

0xca42,	// (0x0002796f) form2_midp_wait_pane_ParamLimits

0xca42,	// (0x0002796f) form2_midp_wait_pane

0x3409,	// (0x0001e336) list_single_2graphic_pane_cp4_ParamLimits

0x3409,	// (0x0001e336) list_single_2graphic_pane_cp4

0x3bad,	// (0x0001eada) list_single_midp_graphic_pane_cp_ParamLimits

0x3bad,	// (0x0001eada) list_single_midp_graphic_pane_cp

0x4ebf,	// (0x0001fdec) list_highlight_pane_cp20

0xca6d,	// (0x0002799a) list_single_2graphic_pane_g1_cp4

0xa4ff,	// (0x0002542c) list_single_2graphic_pane_g2_cp4

0xca75,	// (0x000279a2) list_single_2graphic_pane_t1_cp4

0x4f23,	// (0x0001fe50) list_highlight_pane_cp21

0xca84,	// (0x000279b1) list_single_midp_graphic_pane_g4_cp

0xca93,	// (0x000279c0) list_single_midp_graphic_pane_t1_cp

0x3bcb,	// (0x0001eaf8) form2_mdip_string_pane_t1_ParamLimits

0x3bcb,	// (0x0001eaf8) form2_mdip_string_pane_t1

0x4ebf,	// (0x0001fdec) bg_wml_button_pane_cp2

0x4e3d,	// (0x0001fd6a) form2_midp_image_pane_g1

0xacd6,	// (0x00025c03) list_double_large_graphic_pane_g5_ParamLimits

0xacd6,	// (0x00025c03) list_double_large_graphic_pane_g5

0x2817,	// (0x0001d744) midp_form_pane_ParamLimits

0x4f23,	// (0x0001fe50) main_apps_wheel_pane_ParamLimits

0x2d63,	// (0x0001dc90) popup_preview_window_ParamLimits

0x2d63,	// (0x0001dc90) popup_preview_window

0x9152,	// (0x0002407f) popup_touch_info_window_ParamLimits

0x9152,	// (0x0002407f) popup_touch_info_window

0x9170,	// (0x0002409d) popup_touch_menu_window_ParamLimits

0x9170,	// (0x0002409d) popup_touch_menu_window

0x4e33,	// (0x0001fd60) bg_popup_sub_pane_cp6

0xcb20,	// (0x00027a4d) list_touch_menu_pane

0xcb28,	// (0x00027a55) list_single_touch_menu_pane_ParamLimits

0xcb28,	// (0x00027a55) list_single_touch_menu_pane

0xcb3f,	// (0x00027a6c) list_single_touch_menu_pane_t1

0x4f23,	// (0x0001fe50) bg_popup_sub_pane_cp7_ParamLimits

0x4f23,	// (0x0001fe50) bg_popup_sub_pane_cp7

0xcb4d,	// (0x00027a7a) heading_sub_pane

0xcb55,	// (0x00027a82) list_touch_info_pane_ParamLimits

0xcb55,	// (0x00027a82) list_touch_info_pane

0xcb64,	// (0x00027a91) list_single_touch_info_pane_ParamLimits

0xcb64,	// (0x00027a91) list_single_touch_info_pane

0xcb75,	// (0x00027aa2) list_single_touch_info_pane_t1

0xcb83,	// (0x00027ab0) list_single_touch_info_pane_t2

0x0001,

0xfb23,	// (0x0002aa50) list_single_touch_info_pane_t

0x6530,	// (0x0002145d) bg_popup_heading_pane_cp

0xcb91,	// (0x00027abe) heading_sub_pane_t1

0x943c,	// (0x00024369) bg_popup_preview_window_pane_cp_ParamLimits

0x943c,	// (0x00024369) bg_popup_preview_window_pane_cp

0xcb4d,	// (0x00027a7a) heading_preview_pane

0xcb55,	// (0x00027a82) list_preview_pane_ParamLimits

0xcb55,	// (0x00027a82) list_preview_pane

0xcb9f,	// (0x00027acc) popup_preview_window_g1

0xcb64,	// (0x00027a91) list_single_preview_pane_ParamLimits

0xcb64,	// (0x00027a91) list_single_preview_pane

0xcba7,	// (0x00027ad4) list_single_preview_pane_g1

0xcbaf,	// (0x00027adc) list_single_preview_pane_t1

0xcb75,	// (0x00027aa2) list_single_preview_pane_t2

0x0001,

0xfb28,	// (0x0002aa55) list_single_preview_pane_t

0xcbbd,	// (0x00027aea) bg_popup_heading_pane_cp2_ParamLimits

0xcbbd,	// (0x00027aea) bg_popup_heading_pane_cp2

0xcbd3,	// (0x00027b00) heading_preview_pane_g1

0xcbdb,	// (0x00027b08) heading_preview_pane_t1_ParamLimits

0xcbdb,	// (0x00027b08) heading_preview_pane_t1

0x4fa2,	// (0x0001fecf) soft_indicator_pane_t1_ParamLimits

0x5446,	// (0x00020373) scroll_pane_ParamLimits

0x5f1d,	// (0x00020e4a) scroll_sc2_left_pane

0x5f14,	// (0x00020e41) scroll_sc2_right_pane

0x5f3c,	// (0x00020e69) scroll_bg_pane_g1_ParamLimits

0x5f51,	// (0x00020e7e) scroll_bg_pane_g2_ParamLimits

0x5f69,	// (0x00020e96) scroll_bg_pane_g3_ParamLimits

0xf727,	// (0x0002a654) scroll_bg_pane_g_ParamLimits

0x5f3c,	// (0x00020e69) scroll_handle_pane_g1_ParamLimits

0x5f8b,	// (0x00020eb8) scroll_handle_pane_g2_ParamLimits

0x5f69,	// (0x00020e96) scroll_handle_pane_g3_ParamLimits

0xf72e,	// (0x0002a65b) scroll_handle_pane_g_ParamLimits

0x90aa,	// (0x00023fd7) popup_choice_list_window_ParamLimits

0x90aa,	// (0x00023fd7) popup_choice_list_window

0x92a4,	// (0x000241d1) choice_list_pane

0x931a,	// (0x00024247) cell_toolbar_pane_t1

0x9342,	// (0x0002426f) toolbar_button_pane_ParamLimits

0xa1df,	// (0x0002510c) ai_gene_pane_1_t2_ParamLimits

0xa1df,	// (0x0002510c) ai_gene_pane_1_t2

0x0001,

0xf93f,	// (0x0002a86c) ai_gene_pane_1_t_ParamLimits

0xf93f,	// (0x0002a86c) ai_gene_pane_1_t

0xcbf8,	// (0x00027b25) scroll_sc2_left_pane_g1

0xcbf8,	// (0x00027b25) scroll_sc2_right_pane_g1

0x9090,	// (0x00023fbd) bg_popup_sub_pane_cp10

0xcc02,	// (0x00027b2f) list_choice_list_pane

0xcc19,	// (0x00027b46) list_single_choice_list_pane_ParamLimits

0xcc19,	// (0x00027b46) list_single_choice_list_pane

0xcc2d,	// (0x00027b5a) list_single_choice_list_pane_g1

0x5cde,	// (0x00020c0b) list_single_choice_list_pane_t1_ParamLimits

0x5cde,	// (0x00020c0b) list_single_choice_list_pane_t1

0xcc35,	// (0x00027b62) choice_list_pane_g1

0xcc3d,	// (0x00027b6a) choice_list_pane_t1

0x4e33,	// (0x0001fd60) input_focus_pane_cp11

0x5e69,	// (0x00020d96) title_pane_stacon_g2_ParamLimits

0x5e69,	// (0x00020d96) title_pane_stacon_g2

0x0002,

0xf70d,	// (0x0002a63a) title_pane_stacon_g_ParamLimits

0xf70d,	// (0x0002a63a) title_pane_stacon_g

0x6530,	// (0x0002145d) cursor_press_pane

0x2aca,	// (0x0001d9f7) popup_fep_hwr_window_ParamLimits

0x2aca,	// (0x0001d9f7) popup_fep_hwr_window

0x90fc,	// (0x00024029) popup_fep_vkb_window_ParamLimits

0x90fc,	// (0x00024029) popup_fep_vkb_window

0xcc4b,	// (0x00027b78) cursor_press_pane_g1

0x0002,

0xfb51,	// (0x0002aa7e) fep_vkb_side_pane_g_ParamLimits

0x847a,	// (0x000233a7) fep_hwr_candidate_pane_ParamLimits

0x847a,	// (0x000233a7) fep_hwr_candidate_pane

0x84a2,	// (0x000233cf) fep_hwr_side_pane_ParamLimits

0x84a2,	// (0x000233cf) fep_hwr_side_pane

0x84c2,	// (0x000233ef) fep_hwr_top_pane_ParamLimits

0x84c2,	// (0x000233ef) fep_hwr_top_pane

0x84da,	// (0x00023407) fep_hwr_write_pane_ParamLimits

0x84da,	// (0x00023407) fep_hwr_write_pane

0xfb51,	// (0x0002aa7e) fep_vkb_side_pane_g

0xcc61,	// (0x00027b8e) fep_hwr_top_pane_g1

0xcc73,	// (0x00027ba0) fep_hwr_top_pane_g2

0x8514,	// (0x00023441) fep_hwr_top_pane_g3

0x0002,

0xfb2d,	// (0x0002aa5a) fep_hwr_top_pane_g

0x8529,	// (0x00023456) fep_hwr_top_text_pane

0x6085,	// (0x00020fb2) fep_hwr_top_text_pane_g1

0xcca9,	// (0x00027bd6) fep_hwr_top_text_pane_t1

0x8617,	// (0x00023544) fep_hwr_candidate_pane_g1

0xceb9,	// (0x00027de6) fep_vkb_keypad_pane_g3_ParamLimits

0xceb9,	// (0x00027de6) fep_vkb_keypad_pane_g3

0xcedb,	// (0x00027e08) fep_vkb_keypad_pane_g4_ParamLimits

0xcedb,	// (0x00027e08) fep_vkb_keypad_pane_g4

0xcf4a,	// (0x00027e77) fep_vkb_bottom_pane_g2_ParamLimits

0xcf4a,	// (0x00027e77) fep_vkb_bottom_pane_g2

0x0001,

0xfb58,	// (0x0002aa85) fep_vkb_bottom_pane_g_ParamLimits

0xfb58,	// (0x0002aa85) fep_vkb_bottom_pane_g

0xcbf8,	// (0x00027b25) cell_vkb_side_pane_g2

0x0001,

0xfb62,	// (0x0002aa8f) cell_vkb_side_pane_g

0xcfd5,	// (0x00027f02) cell_vkb_side_pane_t1

0xcfe3,	// (0x00027f10) cell_vkb_side_pane_t1_copy1

0xcbf8,	// (0x00027b25) bg_fep_vkb_candidate_pane_g2

0xd107,	// (0x00028034) cell_vkb_candidate_pane_ParamLimits

0xccb7,	// (0x00027be4) aid_size_cell_vkb_ParamLimits

0xccb7,	// (0x00027be4) aid_size_cell_vkb

0xd107,	// (0x00028034) cell_vkb_candidate_pane

0x863e,	// (0x0002356b) bg_popup_fep_shadow_pane_g1

0xcd2d,	// (0x00027c5a) fep_vkb_bottom_pane_ParamLimits

0xcd2d,	// (0x00027c5a) fep_vkb_bottom_pane

0xcd6a,	// (0x00027c97) fep_vkb_candidate_pane_ParamLimits

0xcd6a,	// (0x00027c97) fep_vkb_candidate_pane

0xcd86,	// (0x00027cb3) fep_vkb_keypad_pane_ParamLimits

0xcd86,	// (0x00027cb3) fep_vkb_keypad_pane

0xcdba,	// (0x00027ce7) fep_vkb_side_pane_ParamLimits

0xcdba,	// (0x00027ce7) fep_vkb_side_pane

0xcde6,	// (0x00027d13) fep_vkb_top_pane_ParamLimits

0xcde6,	// (0x00027d13) fep_vkb_top_pane

0xce12,	// (0x00027d3f) fep_vkb_top_pane_g1_ParamLimits

0xce12,	// (0x00027d3f) fep_vkb_top_pane_g1

0xce21,	// (0x00027d4e) fep_vkb_top_pane_g2_ParamLimits

0xce21,	// (0x00027d4e) fep_vkb_top_pane_g2

0xce30,	// (0x00027d5d) fep_vkb_top_pane_g3_ParamLimits

0xce30,	// (0x00027d5d) fep_vkb_top_pane_g3

0x0003,

0xfb48,	// (0x0002aa75) fep_vkb_top_pane_g_ParamLimits

0xfb48,	// (0x0002aa75) fep_vkb_top_pane_g

0xce4e,	// (0x00027d7b) fep_vkb_top_text_pane_ParamLimits

0xce4e,	// (0x00027d7b) fep_vkb_top_text_pane

0x3c92,	// (0x0001ebbf) fep_vkb_side_pane_g1_ParamLimits

0x3c92,	// (0x0001ebbf) fep_vkb_side_pane_g1

0xcea8,	// (0x00027dd5) grid_vkb_side_pane_ParamLimits

0xcea8,	// (0x00027dd5) grid_vkb_side_pane

0x8646,	// (0x00023573) bg_popup_fep_shadow_pane_g2

0x864f,	// (0x0002357c) bg_popup_fep_shadow_pane_g3

0x8657,	// (0x00023584) bg_popup_fep_shadow_pane_g4

0x8660,	// (0x0002358d) bg_popup_fep_shadow_pane_g5

0x8668,	// (0x00023595) bg_popup_fep_shadow_pane_g6

0x8670,	// (0x0002359d) bg_popup_fep_shadow_pane_g7

0x5bde,	// (0x00020b0b) bg_popup_fep_shadow_pane_g8

0xcef9,	// (0x00027e26) grid_vkb_keypad_number_pane_ParamLimits

0xcef9,	// (0x00027e26) grid_vkb_keypad_number_pane

0xcf09,	// (0x00027e36) grid_vkb_keypad_pane_ParamLimits

0xcf09,	// (0x00027e36) grid_vkb_keypad_pane

0xcf2f,	// (0x00027e5c) fep_vkb_bottom_pane_g1_ParamLimits

0xcf2f,	// (0x00027e5c) fep_vkb_bottom_pane_g1

0xcf58,	// (0x00027e85) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xcf58,	// (0x00027e85) grid_vkb_keypad_bottom_left_pane

0xcf6d,	// (0x00027e9a) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xcf6d,	// (0x00027e9a) grid_vkb_keypad_bottom_right_pane

0xcf82,	// (0x00027eaf) fep_vkb_top_text_pane_g1

0x3cd9,	// (0x0001ec06) fep_vkb_top_text_pane_t1

0x3ceb,	// (0x0001ec18) cell_vkb_side_pane_ParamLimits

0x3ceb,	// (0x0001ec18) cell_vkb_side_pane

0xcbf8,	// (0x00027b25) cell_vkb_side_pane_g1

0xcff1,	// (0x00027f1e) cell_vkb_keypad_pane_ParamLimits

0xcff1,	// (0x00027f1e) cell_vkb_keypad_pane

0xd05e,	// (0x00027f8b) cell_vkb_keypad_pane_g1

0x0008,

0xfb75,	// (0x0002aaa2) bg_popup_fep_shadow_pane_g

0x8680,	// (0x000235ad) cell_hwr_side_pane_g1

0x8680,	// (0x000235ad) cell_hwr_side_pane_g2

0xd068,	// (0x00027f95) cell_vkb_keypad_pane_t1

0x3d01,	// (0x0001ec2e) cell_vkb_keypad_bottom_left_pane_ParamLimits

0x3d01,	// (0x0001ec2e) cell_vkb_keypad_bottom_left_pane

0x3d16,	// (0x0001ec43) cell_vkb_keypad_bottom_right_pane_ParamLimits

0x3d16,	// (0x0001ec43) cell_vkb_keypad_bottom_right_pane

0xcbf8,	// (0x00027b25) cell_vkb_keypad_bottom_left_pane_g1

0xcbf8,	// (0x00027b25) cell_vkb_keypad_bottom_right_pane_g1

0xd0cc,	// (0x00027ff9) cell_vkb_keypad_number_pane_ParamLimits

0xd0cc,	// (0x00027ff9) cell_vkb_keypad_number_pane

0xd0eb,	// (0x00028018) cell_vkb_keypad_number_pane_g1

0xd0f5,	// (0x00028022) cell_vkb_keypad_number_pane_g2

0xd0fe,	// (0x0002802b) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb67,	// (0x0002aa94) cell_vkb_keypad_number_pane_g

0xd068,	// (0x00027f95) cell_vkb_keypad_number_pane_t1

0xd120,	// (0x0002804d) fep_vkb_candidate_pane_g1

0x0001,

0xfb88,	// (0x0002aab5) cell_hwr_side_pane_g

0xd139,	// (0x00028066) cell_hwr_side_pane_t1

0x868a,	// (0x000235b7) cell_hwr_side_pane_t1_copy1

0x8698,	// (0x000235c5) cell_hwr_candidate_pane_g1

0x86c7,	// (0x000235f4) cell_hwr_candidate_pane_t1

0xcbf8,	// (0x00027b25) cell_vkb_candidate_pane_g2

0xd17d,	// (0x000280aa) cell_vkb_candidate_pane_t1

0x8445,	// (0x00023372) bg_popup_fep_shadow_pane_ParamLimits

0x8445,	// (0x00023372) bg_popup_fep_shadow_pane

0x84f4,	// (0x00023421) bg_fep_hwr_top_pane_g4

0xcc85,	// (0x00027bb2) bg_hwr_side_pane_g1_ParamLimits

0xcc85,	// (0x00027bb2) bg_hwr_side_pane_g1

0xe4b8,	// (0x000293e5) cell_hwr_side_pane_ParamLimits

0xe4b8,	// (0x000293e5) cell_hwr_side_pane

0x85a0,	// (0x000234cd) fep_hwr_write_pane_g1_ParamLimits

0x85a0,	// (0x000234cd) fep_hwr_write_pane_g1

0x85ad,	// (0x000234da) fep_hwr_write_pane_g2_ParamLimits

0x85ad,	// (0x000234da) fep_hwr_write_pane_g2

0x85ba,	// (0x000234e7) fep_hwr_write_pane_g3_ParamLimits

0x85ba,	// (0x000234e7) fep_hwr_write_pane_g3

0xe4d8,	// (0x00029405) fep_hwr_write_pane_g4_ParamLimits

0xe4d8,	// (0x00029405) fep_hwr_write_pane_g4

0x0005,

0xfb34,	// (0x0002aa61) fep_hwr_write_pane_g_ParamLimits

0xfb34,	// (0x0002aa61) fep_hwr_write_pane_g

0x84f4,	// (0x00023421) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x84f4,	// (0x00023421) bg_fep_hwr_candidate_pane_g2

0x85dd,	// (0x0002350a) cell_hwr_candidate_pane_ParamLimits

0x85dd,	// (0x0002350a) cell_hwr_candidate_pane

0x8617,	// (0x00023544) fep_hwr_candidate_pane_g1_ParamLimits

0xcce5,	// (0x00027c12) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xcce5,	// (0x00027c12) bg_popup_fep_shadow_pane_cp2

0xce40,	// (0x00027d6d) fep_vkb_top_pane_g4_ParamLimits

0xce40,	// (0x00027d6d) fep_vkb_top_pane_g4

0xce86,	// (0x00027db3) fep_vkb_side_pane_g2_ParamLimits

0xce86,	// (0x00027db3) fep_vkb_side_pane_g2

0x1b47,	// (0x0001ca74) list_setting_pane_t4_ParamLimits

0x1b47,	// (0x0001ca74) list_setting_pane_t4

0x1bd9,	// (0x0001cb06) list_setting_number_pane_t5_ParamLimits

0x1bd9,	// (0x0001cb06) list_setting_number_pane_t5

0x2757,	// (0x0001d684) list_double_heading_pane_cp2_ParamLimits

0x2757,	// (0x0001d684) list_double_heading_pane_cp2

0x63a5,	// (0x000212d2) list_double_heading_pane_g1_cp2_ParamLimits

0x63a5,	// (0x000212d2) list_double_heading_pane_g1_cp2

0xd18b,	// (0x000280b8) list_double_heading_pane_g2_cp2_ParamLimits

0xd18b,	// (0x000280b8) list_double_heading_pane_g2_cp2

0xd19f,	// (0x000280cc) list_double_heading_pane_t1_cp2_ParamLimits

0xd19f,	// (0x000280cc) list_double_heading_pane_t1_cp2

0xd1b5,	// (0x000280e2) list_double_heading_pane_t2_cp2_ParamLimits

0xd1b5,	// (0x000280e2) list_double_heading_pane_t2_cp2

0x4e2b,	// (0x0001fd58) aid_value_unit2

0x733f,	// (0x0002226c) popup_preview_fixed_window

0x5082,	// (0x0001ffaf) bg_popup_preview_window_pane_cp02

0xd1c7,	// (0x000280f4) list_preview_fixed_pane

0xd24f,	// (0x0002817c) list_empty_pane_fp_ParamLimits

0xd24f,	// (0x0002817c) list_empty_pane_fp

0xd24f,	// (0x0002817c) list_single_cale_day_pane_fp_ParamLimits

0xd24f,	// (0x0002817c) list_single_cale_day_pane_fp

0xd24f,	// (0x0002817c) list_single_graphic_heading_pane_fp_ParamLimits

0xd24f,	// (0x0002817c) list_single_graphic_heading_pane_fp

0xd24f,	// (0x0002817c) list_single_graphic_pane_fp_ParamLimits

0xd24f,	// (0x0002817c) list_single_graphic_pane_fp

0xd24f,	// (0x0002817c) list_single_heading_pane_fp_ParamLimits

0xd24f,	// (0x0002817c) list_single_heading_pane_fp

0xd24f,	// (0x0002817c) list_single_pane_fp_ParamLimits

0xd24f,	// (0x0002817c) list_single_pane_fp

0xd263,	// (0x00028190) list_single_pane_fp_g1_ParamLimits

0xd263,	// (0x00028190) list_single_pane_fp_g1

0xadf7,	// (0x00025d24) list_single_pane_fp_g2_ParamLimits

0xadf7,	// (0x00025d24) list_single_pane_fp_g2

0xb840,	// (0x0002676d) list_single_pane_fp_g3_ParamLimits

0xb840,	// (0x0002676d) list_single_pane_fp_g3

0xd26f,	// (0x0002819c) list_single_pane_fp_g4_ParamLimits

0xd26f,	// (0x0002819c) list_single_pane_fp_g4

0x0003,

0xfb9b,	// (0x0002aac8) list_single_pane_fp_g_ParamLimits

0xfb9b,	// (0x0002aac8) list_single_pane_fp_g

0xb854,	// (0x00026781) list_single_pane_fp_t1_ParamLimits

0xb854,	// (0x00026781) list_single_pane_fp_t1

0xb86b,	// (0x00026798) list_single_graphic_pane_fp_g1_ParamLimits

0xb86b,	// (0x00026798) list_single_graphic_pane_fp_g1

0xd263,	// (0x00028190) list_single_graphic_pane_fp_g2_ParamLimits

0xd263,	// (0x00028190) list_single_graphic_pane_fp_g2

0xadf7,	// (0x00025d24) list_single_graphic_pane_fp_g3_ParamLimits

0xadf7,	// (0x00025d24) list_single_graphic_pane_fp_g3

0xb840,	// (0x0002676d) list_single_graphic_pane_fp_g4_ParamLimits

0xb840,	// (0x0002676d) list_single_graphic_pane_fp_g4

0xd26f,	// (0x0002819c) list_single_graphic_pane_fp_g5_ParamLimits

0xd26f,	// (0x0002819c) list_single_graphic_pane_fp_g5

0x0004,

0xfba4,	// (0x0002aad1) list_single_graphic_pane_fp_g_ParamLimits

0xfba4,	// (0x0002aad1) list_single_graphic_pane_fp_g

0xb877,	// (0x000267a4) list_single_graphic_pane_fp_t1_ParamLimits

0xb877,	// (0x000267a4) list_single_graphic_pane_fp_t1

0xb86b,	// (0x00026798) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xb86b,	// (0x00026798) list_single_graphic_heading_pane_fp_g1

0xd263,	// (0x00028190) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xd263,	// (0x00028190) list_single_graphic_heading_pane_fp_g2

0xadf7,	// (0x00025d24) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xadf7,	// (0x00025d24) list_single_graphic_heading_pane_fp_g3

0xb840,	// (0x0002676d) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xb840,	// (0x0002676d) list_single_graphic_heading_pane_fp_g4

0xd26f,	// (0x0002819c) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xd26f,	// (0x0002819c) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfba4,	// (0x0002aad1) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfba4,	// (0x0002aad1) list_single_graphic_heading_pane_fp_g

0xb88d,	// (0x000267ba) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xb88d,	// (0x000267ba) list_single_graphic_heading_pane_fp_t1

0xb8a3,	// (0x000267d0) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xb8a3,	// (0x000267d0) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfbaf,	// (0x0002aadc) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfbaf,	// (0x0002aadc) list_single_graphic_heading_pane_fp_t

0xb8b5,	// (0x000267e2) list_single_cale_day_pane_fp_g1_ParamLimits

0xb8b5,	// (0x000267e2) list_single_cale_day_pane_fp_g1

0xd27b,	// (0x000281a8) list_single_cale_day_pane_fp_g2_ParamLimits

0xd27b,	// (0x000281a8) list_single_cale_day_pane_fp_g2

0xb8ed,	// (0x0002681a) list_single_cale_day_pane_fp_g3_ParamLimits

0xb8ed,	// (0x0002681a) list_single_cale_day_pane_fp_g3

0xb915,	// (0x00026842) list_single_cale_day_pane_fp_g4_ParamLimits

0xb915,	// (0x00026842) list_single_cale_day_pane_fp_g4

0xb939,	// (0x00026866) list_single_cale_day_pane_fp_g5_ParamLimits

0xb939,	// (0x00026866) list_single_cale_day_pane_fp_g5

0x0004,

0xfbb4,	// (0x0002aae1) list_single_cale_day_pane_fp_g_ParamLimits

0xfbb4,	// (0x0002aae1) list_single_cale_day_pane_fp_g

0xb95d,	// (0x0002688a) list_single_cale_day_pane_fp_t1_ParamLimits

0xb95d,	// (0x0002688a) list_single_cale_day_pane_fp_t1

0xb983,	// (0x000268b0) list_single_cale_day_pane_fp_t2_ParamLimits

0xb983,	// (0x000268b0) list_single_cale_day_pane_fp_t2

0xb99c,	// (0x000268c9) list_single_cale_day_pane_fp_t3_ParamLimits

0xb99c,	// (0x000268c9) list_single_cale_day_pane_fp_t3

0x0002,

0xfbbf,	// (0x0002aaec) list_single_cale_day_pane_fp_t_ParamLimits

0xfbbf,	// (0x0002aaec) list_single_cale_day_pane_fp_t

0xd263,	// (0x00028190) list_empty_pane_fp_g1_ParamLimits

0xd263,	// (0x00028190) list_empty_pane_fp_g1

0xb9b5,	// (0x000268e2) list_empty_pane_fp_t1

0xb9c3,	// (0x000268f0) list_empty_pane_fp_t2

0x0001,

0xfbc6,	// (0x0002aaf3) list_empty_pane_fp_t

0xd263,	// (0x00028190) list_single_heading_pane_fp_g1_ParamLimits

0xd263,	// (0x00028190) list_single_heading_pane_fp_g1

0xadf7,	// (0x00025d24) list_single_heading_pane_fp_g2_ParamLimits

0xadf7,	// (0x00025d24) list_single_heading_pane_fp_g2

0xb840,	// (0x0002676d) list_single_heading_pane_fp_g3_ParamLimits

0xb840,	// (0x0002676d) list_single_heading_pane_fp_g3

0x0002,

0xfbcb,	// (0x0002aaf8) list_single_heading_pane_fp_g_ParamLimits

0xfbcb,	// (0x0002aaf8) list_single_heading_pane_fp_g

0xb9d1,	// (0x000268fe) list_single_heading_pane_fp_t1_ParamLimits

0xb9d1,	// (0x000268fe) list_single_heading_pane_fp_t1

0xb9e3,	// (0x00026910) list_single_heading_pane_fp_t2_ParamLimits

0xb9e3,	// (0x00026910) list_single_heading_pane_fp_t2

0x0001,

0xfbd2,	// (0x0002aaff) list_single_heading_pane_fp_t_ParamLimits

0xfbd2,	// (0x0002aaff) list_single_heading_pane_fp_t

0x5cf3,	// (0x00020c20) aid_size_cell_fast

0x5065,	// (0x0001ff92) soft_indicator_pane_cp1_t1

0x5d30,	// (0x00020c5d) cell_app_pane_cp2_ParamLimits

0x5d30,	// (0x00020c5d) cell_app_pane_cp2

0x8467,	// (0x00023394) fep_hwr_candidate_drop_down_list_pane

0x8631,	// (0x0002355e) fep_hwr_candidate_pane_g3_ParamLimits

0x8631,	// (0x0002355e) fep_hwr_candidate_pane_g3

0x4d13,	// (0x0001fc40) fep_hwr_candidate_pane_g4_ParamLimits

0x4d13,	// (0x0001fc40) fep_hwr_candidate_pane_g4

0x0002,

0xfb41,	// (0x0002aa6e) fep_hwr_candidate_pane_g_ParamLimits

0xfb41,	// (0x0002aa6e) fep_hwr_candidate_pane_g

0xcd59,	// (0x00027c86) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xcd59,	// (0x00027c86) fep_vkb_candidate_drop_down_list_pane

0xd128,	// (0x00028055) fep_vkb_candidate_pane_g3

0xd130,	// (0x0002805d) fep_vkb_candidate_pane_g4

0x0002,

0xfb6e,	// (0x0002aa9b) fep_vkb_candidate_pane_g

0x8698,	// (0x000235c5) cell_hwr_candidate_pane_g1_ParamLimits

0x86a6,	// (0x000235d3) cell_hwr_candidate_pane_g3_ParamLimits

0x86a6,	// (0x000235d3) cell_hwr_candidate_pane_g3

0xf495,	// (0x0002a3c2) cell_hwr_candidate_pane_g4_ParamLimits

0xf495,	// (0x0002a3c2) cell_hwr_candidate_pane_g4

0x0002,

0xfb8d,	// (0x0002aaba) cell_hwr_candidate_pane_g_ParamLimits

0xfb8d,	// (0x0002aaba) cell_hwr_candidate_pane_g

0xd147,	// (0x00028074) cell_vkb_candidate_pane_g3_ParamLimits

0xd147,	// (0x00028074) cell_vkb_candidate_pane_g3

0xd162,	// (0x0002808f) cell_vkb_candidate_pane_g4_ParamLimits

0xd162,	// (0x0002808f) cell_vkb_candidate_pane_g4

0xd287,	// (0x000281b4) cell_app_pane_cp2_g1_ParamLimits

0xd287,	// (0x000281b4) cell_app_pane_cp2_g1

0xd2a5,	// (0x000281d2) cell_app_pane_cp2_g2_ParamLimits

0xd2a5,	// (0x000281d2) cell_app_pane_cp2_g2

0x0001,

0xfbd7,	// (0x0002ab04) cell_app_pane_cp2_g_ParamLimits

0xfbd7,	// (0x0002ab04) cell_app_pane_cp2_g

0xd2b1,	// (0x000281de) cell_app_pane_cp2_t1_ParamLimits

0xd2b1,	// (0x000281de) cell_app_pane_cp2_t1

0x5b77,	// (0x00020aa4) grid_highlight_pane_cp1_ParamLimits

0x5b77,	// (0x00020aa4) grid_highlight_pane_cp1

0x86e4,	// (0x00023611) cell_hwr_candidate_pane_cp1_ParamLimits

0x86e4,	// (0x00023611) cell_hwr_candidate_pane_cp1

0x8698,	// (0x000235c5) fep_hwr_candidate_drop_down_list_pane_g1

0x8702,	// (0x0002362f) fep_hwr_candidate_drop_down_list_pane_g2

0x870f,	// (0x0002363c) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbdc,	// (0x0002ab09) fep_hwr_candidate_drop_down_list_pane_g

0x871c,	// (0x00023649) fep_hwr_candidate_drop_down_list_scroll_pane

0x8725,	// (0x00023652) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x8725,	// (0x00023652) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x8732,	// (0x0002365f) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x8732,	// (0x0002365f) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x873f,	// (0x0002366c) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x873f,	// (0x0002366c) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x874c,	// (0x00023679) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x874c,	// (0x00023679) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x8767,	// (0x00023694) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x8767,	// (0x00023694) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x8782,	// (0x000236af) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x8782,	// (0x000236af) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x879d,	// (0x000236ca) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x879d,	// (0x000236ca) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x87b8,	// (0x000236e5) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x87b8,	// (0x000236e5) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbe3,	// (0x0002ab10) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbe3,	// (0x0002ab10) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x3d31,	// (0x0001ec5e) cell_vkb_candidate_pane_cp1_ParamLimits

0x3d31,	// (0x0001ec5e) cell_vkb_candidate_pane_cp1

0xce40,	// (0x00027d6d) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xce40,	// (0x00027d6d) fep_vkb_candidate_drop_down_list_pane_g1

0xd2c3,	// (0x000281f0) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xd2c3,	// (0x000281f0) fep_vkb_candidate_drop_down_list_pane_g2

0xd2f3,	// (0x00028220) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xd2f3,	// (0x00028220) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbf4,	// (0x0002ab21) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbf4,	// (0x0002ab21) fep_vkb_candidate_drop_down_list_pane_g

0xd300,	// (0x0002822d) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xd300,	// (0x0002822d) fep_vkb_candidate_drop_down_list_scroll_pane

0xd30d,	// (0x0002823a) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xd30d,	// (0x0002823a) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xd31a,	// (0x00028247) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xd31a,	// (0x00028247) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xd326,	// (0x00028253) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xd326,	// (0x00028253) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xd1dd,	// (0x0002810a) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xd1dd,	// (0x0002810a) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xd1fe,	// (0x0002812b) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xd1fe,	// (0x0002812b) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xd332,	// (0x0002825f) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xd332,	// (0x0002825f) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xd353,	// (0x00028280) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xd353,	// (0x00028280) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xd374,	// (0x000282a1) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xd374,	// (0x000282a1) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbfb,	// (0x0002ab28) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbfb,	// (0x0002ab28) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x21de,	// (0x0001d10b) title_pane_g1_ParamLimits

0x21f5,	// (0x0001d122) title_pane_g2_ParamLimits

0xf592,	// (0x0002a4bf) title_pane_g_ParamLimits

0x607d,	// (0x00020faa) aid_call2_pane

0x6075,	// (0x00020fa2) aid_call_pane

0x6085,	// (0x00020fb2) popup_clock_analogue_window_g1

0x6085,	// (0x00020fb2) popup_clock_analogue_window_g2

0x7a02,	// (0x0002292f) popup_clock_analogue_window_g3

0x7a0b,	// (0x00022938) popup_clock_analogue_window_g4

0x4e3d,	// (0x0001fd6a) popup_clock_analogue_window_g5

0x0004,

0xf73c,	// (0x0002a669) popup_clock_analogue_window_g

0x7a13,	// (0x00022940) popup_clock_analogue_window_t1

0x7a57,	// (0x00022984) clock_digital_number_pane_ParamLimits

0x7a57,	// (0x00022984) clock_digital_number_pane

0x7a63,	// (0x00022990) clock_digital_number_pane_cp02_ParamLimits

0x7a63,	// (0x00022990) clock_digital_number_pane_cp02

0x7a6f,	// (0x0002299c) clock_digital_number_pane_cp03_ParamLimits

0x7a6f,	// (0x0002299c) clock_digital_number_pane_cp03

0x7a7b,	// (0x000229a8) clock_digital_number_pane_cp04_ParamLimits

0x7a7b,	// (0x000229a8) clock_digital_number_pane_cp04

0x7a87,	// (0x000229b4) clock_digital_separator_pane_ParamLimits

0x7a87,	// (0x000229b4) clock_digital_separator_pane

0x7a93,	// (0x000229c0) popup_clock_digital_window_t1_ParamLimits

0x7a93,	// (0x000229c0) popup_clock_digital_window_t1

0x4e3d,	// (0x0001fd6a) clock_digital_number_pane_g1

0x4e3d,	// (0x0001fd6a) clock_digital_number_pane_g2

0x0001,

0xf747,	// (0x0002a674) clock_digital_number_pane_g

0x4e3d,	// (0x0001fd6a) clock_digital_separator_pane_g1

0x4e3d,	// (0x0001fd6a) clock_digital_separator_pane_g2

0x0001,

0xf747,	// (0x0002a674) clock_digital_separator_pane_g

0x2fc1,	// (0x0001deee) aid_fill_nsta_ParamLimits

0x30d8,	// (0x0001e005) indicator_nsta_pane_ParamLimits

0x924d,	// (0x0002417a) popup_clock_analogue_window

0x924d,	// (0x0002417a) popup_clock_digital_window

0x60f2,	// (0x0002101f) grid_indicator_nsta_pane_ParamLimits

0xb772,	// (0x0002669f) clock_nsta_pane_t2

0x0001,

0xface,	// (0x0002a9fb) clock_nsta_pane_t

0x796b,	// (0x00022898) aid_size_max_handle

0xe1a7,	// (0x000290d4) aid_size_min_handle

0x6530,	// (0x0002145d) editor_scroll_pane

0xd38f,	// (0x000282bc) ex_editor_pane

0x5cce,	// (0x00020bfb) scroll_pane_cp13

0x5473,	// (0x000203a0) scroll_pane_cp14

0x60af,	// (0x00020fdc) scroll_pane_cp36

0x2763,	// (0x0001d690) list_single_graphic_hl_pane_cp2_ParamLimits

0x2763,	// (0x0001d690) list_single_graphic_hl_pane_cp2

0x3900,	// (0x0001e82d) list_single_graphic_hl_pane_ParamLimits

0x3900,	// (0x0001e82d) list_single_graphic_hl_pane

0xb9f9,	// (0x00026926) aid_size_min_hl_cp1

0xd397,	// (0x000282c4) list_highlight_pane_cp34_ParamLimits

0xd397,	// (0x000282c4) list_highlight_pane_cp34

0xd3a8,	// (0x000282d5) list_single_graphic_hl_pane_g1_ParamLimits

0xd3a8,	// (0x000282d5) list_single_graphic_hl_pane_g1

0x1e6d,	// (0x0001cd9a) list_single_graphic_hl_pane_g2_ParamLimits

0x1e6d,	// (0x0001cd9a) list_single_graphic_hl_pane_g2

0x1e6d,	// (0x0001cd9a) list_single_graphic_hl_pane_g3_ParamLimits

0x1e6d,	// (0x0001cd9a) list_single_graphic_hl_pane_g3

0x1e79,	// (0x0001cda6) list_single_graphic_hl_pane_g4_ParamLimits

0x1e79,	// (0x0001cda6) list_single_graphic_hl_pane_g4

0x1e85,	// (0x0001cdb2) list_single_graphic_hl_pane_g5_ParamLimits

0x1e85,	// (0x0001cdb2) list_single_graphic_hl_pane_g5

0x0004,

0xfc0c,	// (0x0002ab39) list_single_graphic_hl_pane_g_ParamLimits

0xfc0c,	// (0x0002ab39) list_single_graphic_hl_pane_g

0x1e99,	// (0x0001cdc6) list_single_graphic_hl_pane_t1_ParamLimits

0x1e99,	// (0x0001cdc6) list_single_graphic_hl_pane_t1

0xd3b5,	// (0x000282e2) aid_size_min_hl_cp2

0xd3be,	// (0x000282eb) list_highlight_pane_cp34_cp2_ParamLimits

0xd3be,	// (0x000282eb) list_highlight_pane_cp34_cp2

0xd3a8,	// (0x000282d5) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xd3a8,	// (0x000282d5) list_single_graphic_hl_pane_g1_cp2

0xd3cb,	// (0x000282f8) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xd3cb,	// (0x000282f8) list_single_graphic_hl_pane_g2_cp2

0xd3d7,	// (0x00028304) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xd3d7,	// (0x00028304) list_single_graphic_hl_pane_g3_cp2

0x63a5,	// (0x000212d2) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x63a5,	// (0x000212d2) list_single_graphic_hl_pane_g4_cp2

0xd18b,	// (0x000280b8) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xd18b,	// (0x000280b8) list_single_graphic_hl_pane_g5_cp2

0xe1d1,	// (0x000290fe) control_pane_g4_ParamLimits

0xe1d1,	// (0x000290fe) control_pane_g4

0x9090,	// (0x00023fbd) bg_popup_sub_pane_cp10_ParamLimits

0xcc02,	// (0x00027b2f) list_choice_list_pane_ParamLimits

0xcc11,	// (0x00027b3e) scroll_pane_cp23

0x5082,	// (0x0001ffaf) bg_popup_preview_window_pane_cp02_ParamLimits

0xd1c7,	// (0x000280f4) list_preview_fixed_pane_ParamLimits

0xd21f,	// (0x0002814c) list_preview_fixed_pane_cp_ParamLimits

0xd21f,	// (0x0002814c) list_preview_fixed_pane_cp

0xd22b,	// (0x00028158) popup_preview_fixed_window_g1_ParamLimits

0xd22b,	// (0x00028158) popup_preview_fixed_window_g1

0xd237,	// (0x00028164) popup_preview_fixed_window_g2_ParamLimits

0xd237,	// (0x00028164) popup_preview_fixed_window_g2

0x0002,

0xfb94,	// (0x0002aac1) popup_preview_fixed_window_g_ParamLimits

0xfb94,	// (0x0002aac1) popup_preview_fixed_window_g

0x7886,	// (0x000227b3) aid_navi_side_left_pane_ParamLimits

0x7896,	// (0x000227c3) aid_navi_side_right_pane_ParamLimits

0x78a5,	// (0x000227d2) navi_icon_pane_stacon_ParamLimits

0x78b5,	// (0x000227e2) navi_navi_pane_stacon_ParamLimits

0x78a5,	// (0x000227d2) navi_text_pane_stacon_ParamLimits

0x4e33,	// (0x0001fd60) main_text_info_pane

0xd3f9,	// (0x00028326) listscroll_text_info_pane

0xd401,	// (0x0002832e) list_text_info_pane_ParamLimits

0xd401,	// (0x0002832e) list_text_info_pane

0xd410,	// (0x0002833d) scroll_pane_cp24_ParamLimits

0xd410,	// (0x0002833d) scroll_pane_cp24

0x3d51,	// (0x0001ec7e) list_text_info_pane_t1_ParamLimits

0x3d51,	// (0x0001ec7e) list_text_info_pane_t1

0x2a4a,	// (0x0001d977) popup_fast_swap2_window_ParamLimits

0x2a4a,	// (0x0001d977) popup_fast_swap2_window

0xd44b,	// (0x00028378) aid_size_cell_fast2

0x4e33,	// (0x0001fd60) bg_popup_window_pane_cp17

0x96db,	// (0x00024608) heading_pane_cp2

0x5272,	// (0x0002019f) listscroll_fast2_pane

0xd455,	// (0x00028382) grid_fast2_pane

0xd45d,	// (0x0002838a) listscroll_fast2_pane_g1

0xd465,	// (0x00028392) listscroll_fast2_pane_g2

0x0001,

0xfc17,	// (0x0002ab44) listscroll_fast2_pane_g

0x5cce,	// (0x00020bfb) scroll_pane_cp26

0xd46d,	// (0x0002839a) cell_fast2_pane_ParamLimits

0xd46d,	// (0x0002839a) cell_fast2_pane

0xd483,	// (0x000283b0) cell_fast2_pane_g1

0xd48c,	// (0x000283b9) cell_fast2_pane_g2

0xd495,	// (0x000283c2) cell_fast2_pane_g3

0x0002,

0xfc1c,	// (0x0002ab49) cell_fast2_pane_g

0x52d4,	// (0x00020201) grid_highlight_pane_cp9

0x52e9,	// (0x00020216) main_eswt_pane_ParamLimits

0x52e9,	// (0x00020216) main_eswt_pane

0xd425,	// (0x00028352) list_single_text_info_pane

0xd49d,	// (0x000283ca) eswt_ctrl_button_pane

0xd49d,	// (0x000283ca) eswt_ctrl_canvas_pane

0xd4a5,	// (0x000283d2) eswt_ctrl_combo_pane

0xd49d,	// (0x000283ca) eswt_ctrl_default_pane

0xd49d,	// (0x000283ca) eswt_ctrl_label_pane

0xd4ad,	// (0x000283da) eswt_ctrl_wait_pane

0xd4b5,	// (0x000283e2) eswt_shell_pane

0x4e33,	// (0x0001fd60) listscroll_eswt_app_pane

0xd4d1,	// (0x000283fe) popup_eswt_tasktip_window_ParamLimits

0xd4d1,	// (0x000283fe) popup_eswt_tasktip_window

0x943c,	// (0x00024369) bg_popup_window_pane_cp18

0xd4e2,	// (0x0002840f) eswt_control_pane_g1_ParamLimits

0xd4e2,	// (0x0002840f) eswt_control_pane_g1

0xd4ef,	// (0x0002841c) eswt_control_pane_g2_ParamLimits

0xd4ef,	// (0x0002841c) eswt_control_pane_g2

0xd4fc,	// (0x00028429) eswt_control_pane_g3_ParamLimits

0xd4fc,	// (0x00028429) eswt_control_pane_g3

0xd509,	// (0x00028436) eswt_control_pane_g4_ParamLimits

0xd509,	// (0x00028436) eswt_control_pane_g4

0x0003,

0xfc23,	// (0x0002ab50) eswt_control_pane_g_ParamLimits

0xfc23,	// (0x0002ab50) eswt_control_pane_g

0x5b77,	// (0x00020aa4) bg_button_pane_ParamLimits

0x5b77,	// (0x00020aa4) bg_button_pane

0x52e9,	// (0x00020216) common_borders_pane_copy2_ParamLimits

0x52e9,	// (0x00020216) common_borders_pane_copy2

0xd516,	// (0x00028443) control_button_pane_g1_ParamLimits

0xd516,	// (0x00028443) control_button_pane_g1

0xd522,	// (0x0002844f) control_button_pane_g2_ParamLimits

0xd522,	// (0x0002844f) control_button_pane_g2

0xd52e,	// (0x0002845b) control_button_pane_g3_ParamLimits

0xd52e,	// (0x0002845b) control_button_pane_g3

0x0002,

0xfc2c,	// (0x0002ab59) control_button_pane_g_ParamLimits

0xfc2c,	// (0x0002ab59) control_button_pane_g

0xd542,	// (0x0002846f) control_button_pane_t1

0xd550,	// (0x0002847d) control_button_pane_t2

0x0001,

0xfc33,	// (0x0002ab60) control_button_pane_t

0x934e,	// (0x0002427b) bg_button_pane_g1

0x935e,	// (0x0002428b) bg_button_pane_g2

0x9356,	// (0x00024283) bg_button_pane_g3

0x936e,	// (0x0002429b) bg_button_pane_g4

0x9366,	// (0x00024293) bg_button_pane_g5

0x9376,	// (0x000242a3) bg_button_pane_g6

0x937e,	// (0x000242ab) bg_button_pane_g7

0x938e,	// (0x000242bb) bg_button_pane_g8

0x9386,	// (0x000242b3) bg_button_pane_g9

0x0008,

0xf893,	// (0x0002a7c0) bg_button_pane_g

0xcbbd,	// (0x00027aea) common_borders_pane_ParamLimits

0xcbbd,	// (0x00027aea) common_borders_pane

0xd4e2,	// (0x0002840f) eswt_control_pane_g1_copy1_ParamLimits

0xd4e2,	// (0x0002840f) eswt_control_pane_g1_copy1

0xd4ef,	// (0x0002841c) eswt_control_pane_g2_copy1_ParamLimits

0xd4ef,	// (0x0002841c) eswt_control_pane_g2_copy1

0xd4fc,	// (0x00028429) eswt_control_pane_g3_copy1_ParamLimits

0xd4fc,	// (0x00028429) eswt_control_pane_g3_copy1

0xd509,	// (0x00028436) eswt_control_pane_g4_copy1_ParamLimits

0xd509,	// (0x00028436) eswt_control_pane_g4_copy1

0xcbf8,	// (0x00027b25) bg_eswt_ctrl_canvas_pane_g1

0xcbbd,	// (0x00027aea) common_borders_pane_cp2_ParamLimits

0xcbbd,	// (0x00027aea) common_borders_pane_cp2

0xcbbd,	// (0x00027aea) common_borders_pane_cp3_ParamLimits

0xcbbd,	// (0x00027aea) common_borders_pane_cp3

0xd55e,	// (0x0002848b) separator_horizontal_pane

0x5f14,	// (0x00020e41) separator_vertical_pane

0xd4e2,	// (0x0002840f) eswt_control_pane_g1_copy2_ParamLimits

0xd4e2,	// (0x0002840f) eswt_control_pane_g1_copy2

0xd4ef,	// (0x0002841c) eswt_control_pane_g2_copy2_ParamLimits

0xd4ef,	// (0x0002841c) eswt_control_pane_g2_copy2

0xd4fc,	// (0x00028429) eswt_control_pane_g3_copy2_ParamLimits

0xd4fc,	// (0x00028429) eswt_control_pane_g3_copy2

0xd509,	// (0x00028436) eswt_control_pane_g4_copy2_ParamLimits

0xd509,	// (0x00028436) eswt_control_pane_g4_copy2

0x4e33,	// (0x0001fd60) common_borders_pane_cp4

0xd566,	// (0x00028493) separator_horizontal_pane_g1

0xd56f,	// (0x0002849c) separator_horizontal_pane_g2

0xd578,	// (0x000284a5) separator_horizontal_pane_g3

0x0002,

0xfc38,	// (0x0002ab65) separator_horizontal_pane_g

0xd4e2,	// (0x0002840f) eswt_control_pane_g1_copy3_ParamLimits

0xd4e2,	// (0x0002840f) eswt_control_pane_g1_copy3

0xd4ef,	// (0x0002841c) eswt_control_pane_g2_copy3_ParamLimits

0xd4ef,	// (0x0002841c) eswt_control_pane_g2_copy3

0xd4fc,	// (0x00028429) eswt_control_pane_g3_copy3_ParamLimits

0xd4fc,	// (0x00028429) eswt_control_pane_g3_copy3

0xd509,	// (0x00028436) eswt_control_pane_g4_copy3_ParamLimits

0xd509,	// (0x00028436) eswt_control_pane_g4_copy3

0x4e33,	// (0x0001fd60) common_borders_pane_cp5

0xd581,	// (0x000284ae) separator_vertical_pane_g1

0xd58a,	// (0x000284b7) separator_vertical_pane_g2

0xd593,	// (0x000284c0) separator_vertical_pane_g3

0x0002,

0xfc3f,	// (0x0002ab6c) separator_vertical_pane_g

0xd4e2,	// (0x0002840f) eswt_control_pane_g1_copy4_ParamLimits

0xd4e2,	// (0x0002840f) eswt_control_pane_g1_copy4

0xd4ef,	// (0x0002841c) eswt_control_pane_g2_copy4_ParamLimits

0xd4ef,	// (0x0002841c) eswt_control_pane_g2_copy4

0xd4fc,	// (0x00028429) eswt_control_pane_g3_copy4_ParamLimits

0xd4fc,	// (0x00028429) eswt_control_pane_g3_copy4

0xd509,	// (0x00028436) eswt_control_pane_g4_copy4_ParamLimits

0xd509,	// (0x00028436) eswt_control_pane_g4_copy4

0x3d6c,	// (0x0001ec99) eswt_ctrl_combo_button_pane

0x3d74,	// (0x0001eca1) eswt_ctrl_input_pane

0x3d7c,	// (0x0001eca9) popup_choice_list_window_cp70

0x3d84,	// (0x0001ecb1) eswt_ctrl_input_pane_t1

0x4e33,	// (0x0001fd60) input_focus_pane_cp70

0xcbbd,	// (0x00027aea) bg_button_pane_cp70_ParamLimits

0xcbbd,	// (0x00027aea) bg_button_pane_cp70

0x3d92,	// (0x0001ecbf) eswt_ctrl_combo_button_pane_g1

0xd5ca,	// (0x000284f7) wait_bar_pane_cp70

0x943c,	// (0x00024369) bg_popup_window_pane_cp70_ParamLimits

0x943c,	// (0x00024369) bg_popup_window_pane_cp70

0xd5d2,	// (0x000284ff) popup_eswt_tasktip_window_t1

0xd5e8,	// (0x00028515) wait_bar_pane_cp71_ParamLimits

0xd5e8,	// (0x00028515) wait_bar_pane_cp71

0xd5f4,	// (0x00028521) grid_eswt_app_pane

0x5f1d,	// (0x00020e4a) scroll_pane_cp70

0x3d9a,	// (0x0001ecc7) cell_eswt_app_pane_ParamLimits

0x3d9a,	// (0x0001ecc7) cell_eswt_app_pane

0x3dc2,	// (0x0001ecef) cell_eswt_app_pane_g1_ParamLimits

0x3dc2,	// (0x0001ecef) cell_eswt_app_pane_g1

0x3df1,	// (0x0001ed1e) cell_eswt_app_pane_g2_ParamLimits

0x3df1,	// (0x0001ed1e) cell_eswt_app_pane_g2

0x0001,

0xfc46,	// (0x0002ab73) cell_eswt_app_pane_g_ParamLimits

0xfc46,	// (0x0002ab73) cell_eswt_app_pane_g

0x3e1a,	// (0x0001ed47) cell_eswt_app_pane_t1_ParamLimits

0x3e1a,	// (0x0001ed47) cell_eswt_app_pane_t1

0xd6af,	// (0x000285dc) grid_highlight_pane_cp70_ParamLimits

0xd6af,	// (0x000285dc) grid_highlight_pane_cp70

0x547b,	// (0x000203a8) set_content_pane_g1

0x671f,	// (0x0002164c) status_small_volume_pane

0x87d3,	// (0x00023700) status_small_volume_pane_g1

0x87db,	// (0x00023708) volume_small2_pane

0x87e4,	// (0x00023711) volume_small2_pane_g1

0x87ed,	// (0x0002371a) volume_small2_pane_g2

0x87f6,	// (0x00023723) volume_small2_pane_g3

0x87ff,	// (0x0002372c) volume_small2_pane_g4

0x8808,	// (0x00023735) volume_small2_pane_g5

0x8811,	// (0x0002373e) volume_small2_pane_g6

0x881a,	// (0x00023747) volume_small2_pane_g7

0x8823,	// (0x00023750) volume_small2_pane_g8

0x882c,	// (0x00023759) volume_small2_pane_g9

0x8835,	// (0x00023762) volume_small2_pane_g10

0x0009,

0xfc4b,	// (0x0002ab78) volume_small2_pane_g

0xcf82,	// (0x00027eaf) fep_vkb_top_text_pane_g1_ParamLimits

0x3cd9,	// (0x0001ec06) fep_vkb_top_text_pane_t1_ParamLimits

0xd243,	// (0x00028170) popup_preview_fixed_window_g3_ParamLimits

0xd243,	// (0x00028170) popup_preview_fixed_window_g3

0x2f6a,	// (0x0001de97) popup_toolbar_trans_pane

0x378d,	// (0x0001e6ba) aid_height_set_list_ParamLimits

0xa442,	// (0x0002536f) aid_size_parent_ParamLimits

0x9090,	// (0x00023fbd) list_highlight_pane_cp2_ParamLimits

0x547b,	// (0x000203a8) set_content_pane_g1_ParamLimits

0x3913,	// (0x0001e840) list_single_image_pane_ParamLimits

0x3913,	// (0x0001e840) list_single_image_pane

0x3e4c,	// (0x0001ed79) aid_size_cell_image_ParamLimits

0x3e4c,	// (0x0001ed79) aid_size_cell_image

0x3e59,	// (0x0001ed86) grid_single_image_pane_ParamLimits

0x3e59,	// (0x0001ed86) grid_single_image_pane

0x547b,	// (0x000203a8) list_single_image_pane_g1_ParamLimits

0x547b,	// (0x000203a8) list_single_image_pane_g1

0x5b91,	// (0x00020abe) list_single_image_pane_g2_ParamLimits

0x5b91,	// (0x00020abe) list_single_image_pane_g2

0x0001,

0xfc60,	// (0x0002ab8d) list_single_image_pane_g_ParamLimits

0xfc60,	// (0x0002ab8d) list_single_image_pane_g

0xaa0b,	// (0x00025938) list_single_image_pane_t1_ParamLimits

0xaa0b,	// (0x00025938) list_single_image_pane_t1

0x3e65,	// (0x0001ed92) cell_image_list_pane_ParamLimits

0x3e65,	// (0x0001ed92) cell_image_list_pane

0x3e79,	// (0x0001eda6) cell_image_list_pane_g1

0x3e82,	// (0x0001edaf) cell_image_list_pane_g2

0x0001,

0xfc65,	// (0x0002ab92) cell_image_list_pane_g

0xe4ed,	// (0x0002941a) aid_size_cell_tb_trans_pane

0x5b77,	// (0x00020aa4) bg_tb_trans_pane

0xe4ff,	// (0x0002942c) grid_tb_trans_pane

0x934e,	// (0x0002427b) bg_tb_trans_pane_g1

0x935e,	// (0x0002428b) bg_tb_trans_pane_g2

0x9356,	// (0x00024283) bg_tb_trans_pane_g3

0x936e,	// (0x0002429b) bg_tb_trans_pane_g4

0x9366,	// (0x00024293) bg_tb_trans_pane_g5

0x938e,	// (0x000242bb) bg_tb_trans_pane_g6

0x9386,	// (0x000242b3) bg_tb_trans_pane_g7

0x9376,	// (0x000242a3) bg_tb_trans_pane_g8

0x937e,	// (0x000242ab) bg_tb_trans_pane_g9

0x0008,

0xfc6a,	// (0x0002ab97) bg_tb_trans_pane_g

0xe513,	// (0x00029440) cell_toolbar_trans_pane_ParamLimits

0xe513,	// (0x00029440) cell_toolbar_trans_pane

0xcbf8,	// (0x00027b25) cell_toolbar_trans_pane_g1

0x3b4e,	// (0x0001ea7b) list_form2_midp_pane_t1

0x3b5c,	// (0x0001ea89) list_form2_midp_pane_t2

0x0001,

0xfb07,	// (0x0002aa34) list_form2_midp_pane_t

0xc899,	// (0x000277c6) scroll_pane_cp51_ParamLimits

0xca52,	// (0x0002797f) form2_midp_wait_pane_g1

0xca5b,	// (0x00027988) form2_midp_wait_pane_g2

0xca64,	// (0x00027991) form2_midp_wait_pane_g3

0x0002,

0xfb1c,	// (0x0002aa49) form2_midp_wait_pane_g

0x4f23,	// (0x0001fe50) list_highlight_pane_cp21_ParamLimits

0xca84,	// (0x000279b1) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xca93,	// (0x000279c0) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xb299,	// (0x000261c6) list_single_2graphic_im_pane_ParamLimits

0xb299,	// (0x000261c6) list_single_2graphic_im_pane

0x3e8b,	// (0x0001edb8) list_single_2graphic_im_pane_g1_ParamLimits

0x3e8b,	// (0x0001edb8) list_single_2graphic_im_pane_g1

0x3e9c,	// (0x0001edc9) list_single_2graphic_im_pane_g2_ParamLimits

0x3e9c,	// (0x0001edc9) list_single_2graphic_im_pane_g2

0x3ea8,	// (0x0001edd5) list_single_2graphic_im_pane_g3_ParamLimits

0x3ea8,	// (0x0001edd5) list_single_2graphic_im_pane_g3

0x0003,

0xfc7d,	// (0x0002abaa) list_single_2graphic_im_pane_g_ParamLimits

0xfc7d,	// (0x0002abaa) list_single_2graphic_im_pane_g

0x3ebc,	// (0x0001ede9) list_single_2graphic_im_pane_t1_ParamLimits

0x3ebc,	// (0x0001ede9) list_single_2graphic_im_pane_t1

0xd24f,	// (0x0002817c) list_single_graphic_2heading_pane_fp_ParamLimits

0xd24f,	// (0x0002817c) list_single_graphic_2heading_pane_fp

0xb86b,	// (0x00026798) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xb86b,	// (0x00026798) list_single_graphic_2heading_pane_fp_g1

0xd263,	// (0x00028190) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xd263,	// (0x00028190) list_single_graphic_2heading_pane_fp_g2

0xadf7,	// (0x00025d24) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xadf7,	// (0x00025d24) list_single_graphic_2heading_pane_fp_g3

0xb840,	// (0x0002676d) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xb840,	// (0x0002676d) list_single_graphic_2heading_pane_fp_g4

0xd26f,	// (0x0002819c) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xd26f,	// (0x0002819c) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfba4,	// (0x0002aad1) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfba4,	// (0x0002aad1) list_single_graphic_2heading_pane_fp_g

0xc013,	// (0x00026f40) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xc013,	// (0x00026f40) list_single_graphic_2heading_pane_fp_t1

0xb8a3,	// (0x000267d0) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xb8a3,	// (0x000267d0) list_single_graphic_2heading_pane_fp_t2

0xc029,	// (0x00026f56) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xc029,	// (0x00026f56) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc86,	// (0x0002abb3) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc86,	// (0x0002abb3) list_single_graphic_2heading_pane_fp_t

0xcc91,	// (0x00027bbe) fep_hwr_write_pane_g5_ParamLimits

0xcc91,	// (0x00027bbe) fep_hwr_write_pane_g5

0xcc9d,	// (0x00027bca) fep_hwr_write_pane_g6_ParamLimits

0xcc9d,	// (0x00027bca) fep_hwr_write_pane_g6

0xd4b5,	// (0x000283e2) eswt_shell_pane_ParamLimits

0x943c,	// (0x00024369) bg_popup_window_pane_cp18_ParamLimits

0xa3e6,	// (0x00025313) heading_pane_cp70

0xd5d2,	// (0x000284ff) popup_eswt_tasktip_window_t1_ParamLimits

0x3005,	// (0x0001df32) aid_touch_tab_arrow_left

0x3019,	// (0x0001df46) aid_touch_tab_arrow_right

0x2214,	// (0x0001d141) title_pane_g3_ParamLimits

0x2214,	// (0x0001d141) title_pane_g3

0x5b47,	// (0x00020a74) set_value_pane_g1

0x2f6a,	// (0x0001de97) popup_toolbar_trans_pane_ParamLimits

0xe4ed,	// (0x0002941a) aid_size_cell_tb_trans_pane_ParamLimits

0x5b77,	// (0x00020aa4) bg_tb_trans_pane_ParamLimits

0xe4ff,	// (0x0002942c) grid_tb_trans_pane_ParamLimits

0x5082,	// (0x0001ffaf) cont_note_pane_ParamLimits

0x5082,	// (0x0001ffaf) cont_note_pane

0x52e9,	// (0x00020216) cont_snote2_single_text_pane_ParamLimits

0x52e9,	// (0x00020216) cont_snote2_single_text_pane

0x52e9,	// (0x00020216) cont_snote2_single_graphic_pane_ParamLimits

0x52e9,	// (0x00020216) cont_snote2_single_graphic_pane

0x98b4,	// (0x000247e1) cont_note_wait_pane_ParamLimits

0x98b4,	// (0x000247e1) cont_note_wait_pane

0x98b4,	// (0x000247e1) cont_note_image_pane_ParamLimits

0x98b4,	// (0x000247e1) cont_note_image_pane

0xe545,	// (0x00029472) popup_note2_window_g1_ParamLimits

0xe545,	// (0x00029472) popup_note2_window_g1

0xe576,	// (0x000294a3) popup_note2_window_t1_ParamLimits

0xe576,	// (0x000294a3) popup_note2_window_t1

0xe5bb,	// (0x000294e8) popup_note2_window_t2_ParamLimits

0xe5bb,	// (0x000294e8) popup_note2_window_t2

0xe600,	// (0x0002952d) popup_note2_window_t3_ParamLimits

0xe600,	// (0x0002952d) popup_note2_window_t3

0xe645,	// (0x00029572) popup_note2_window_t4_ParamLimits

0xe645,	// (0x00029572) popup_note2_window_t4

0x5106,	// (0x00020033) popup_note2_window_t5_ParamLimits

0x5106,	// (0x00020033) popup_note2_window_t5

0x0004,

0xfc92,	// (0x0002abbf) popup_note2_window_t_ParamLimits

0xfc92,	// (0x0002abbf) popup_note2_window_t

0xe674,	// (0x000295a1) popup_note2_image_window_g1_ParamLimits

0xe674,	// (0x000295a1) popup_note2_image_window_g1

0xe680,	// (0x000295ad) popup_note2_image_window_g2_ParamLimits

0xe680,	// (0x000295ad) popup_note2_image_window_g2

0x0001,

0xfc9d,	// (0x0002abca) popup_note2_image_window_g_ParamLimits

0xfc9d,	// (0x0002abca) popup_note2_image_window_g

0xe692,	// (0x000295bf) popup_note2_image_window_t1_ParamLimits

0xe692,	// (0x000295bf) popup_note2_image_window_t1

0xe6aa,	// (0x000295d7) popup_note2_image_window_t2_ParamLimits

0xe6aa,	// (0x000295d7) popup_note2_image_window_t2

0xe6c2,	// (0x000295ef) popup_note2_image_window_t3_ParamLimits

0xe6c2,	// (0x000295ef) popup_note2_image_window_t3

0x0002,

0xfca2,	// (0x0002abcf) popup_note2_image_window_t_ParamLimits

0xfca2,	// (0x0002abcf) popup_note2_image_window_t

0x98c2,	// (0x000247ef) popup_note2_wait_window_g1_ParamLimits

0x98c2,	// (0x000247ef) popup_note2_wait_window_g1

0x98ce,	// (0x000247fb) popup_note2_wait_window_g2_ParamLimits

0x98ce,	// (0x000247fb) popup_note2_wait_window_g2

0x98da,	// (0x00024807) popup_note2_wait_window_g3_ParamLimits

0x98da,	// (0x00024807) popup_note2_wait_window_g3

0x0002,

0xf875,	// (0x0002a7a2) popup_note2_wait_window_g_ParamLimits

0xf875,	// (0x0002a7a2) popup_note2_wait_window_g

0xe6de,	// (0x0002960b) popup_note2_wait_window_t1_ParamLimits

0xe6de,	// (0x0002960b) popup_note2_wait_window_t1

0xe6fc,	// (0x00029629) popup_note2_wait_window_t2_ParamLimits

0xe6fc,	// (0x00029629) popup_note2_wait_window_t2

0xe71a,	// (0x00029647) popup_note2_wait_window_t3_ParamLimits

0xe71a,	// (0x00029647) popup_note2_wait_window_t3

0xe72c,	// (0x00029659) popup_note2_wait_window_t4_ParamLimits

0xe72c,	// (0x00029659) popup_note2_wait_window_t4

0x0003,

0xfca9,	// (0x0002abd6) popup_note2_wait_window_t_ParamLimits

0xfca9,	// (0x0002abd6) popup_note2_wait_window_t

0xe73e,	// (0x0002966b) wait_bar2_pane_ParamLimits

0xe73e,	// (0x0002966b) wait_bar2_pane

0xe756,	// (0x00029683) popup_snote2_single_text_window_g1_ParamLimits

0xe756,	// (0x00029683) popup_snote2_single_text_window_g1

0xe77e,	// (0x000296ab) popup_snote2_single_text_window_t1_ParamLimits

0xe77e,	// (0x000296ab) popup_snote2_single_text_window_t1

0xe7ca,	// (0x000296f7) popup_snote2_single_text_window_t2_ParamLimits

0xe7ca,	// (0x000296f7) popup_snote2_single_text_window_t2

0xe816,	// (0x00029743) popup_snote2_single_text_window_t3_ParamLimits

0xe816,	// (0x00029743) popup_snote2_single_text_window_t3

0xe857,	// (0x00029784) popup_snote2_single_text_window_t4_ParamLimits

0xe857,	// (0x00029784) popup_snote2_single_text_window_t4

0xe88d,	// (0x000297ba) popup_snote2_single_text_window_t5_ParamLimits

0xe88d,	// (0x000297ba) popup_snote2_single_text_window_t5

0x0004,

0xfcb2,	// (0x0002abdf) popup_snote2_single_text_window_t_ParamLimits

0xfcb2,	// (0x0002abdf) popup_snote2_single_text_window_t

0xe8b8,	// (0x000297e5) popup_snote2_single_graphic_window_g1_ParamLimits

0xe8b8,	// (0x000297e5) popup_snote2_single_graphic_window_g1

0xe8e0,	// (0x0002980d) popup_snote2_single_graphic_window_g2_ParamLimits

0xe8e0,	// (0x0002980d) popup_snote2_single_graphic_window_g2

0x0001,

0xfcbd,	// (0x0002abea) popup_snote2_single_graphic_window_g_ParamLimits

0xfcbd,	// (0x0002abea) popup_snote2_single_graphic_window_g

0xe908,	// (0x00029835) popup_snote2_single_graphic_window_t1_ParamLimits

0xe908,	// (0x00029835) popup_snote2_single_graphic_window_t1

0xe954,	// (0x00029881) popup_snote2_single_graphic_window_t2_ParamLimits

0xe954,	// (0x00029881) popup_snote2_single_graphic_window_t2

0xe816,	// (0x00029743) popup_snote2_single_graphic_window_t3_ParamLimits

0xe816,	// (0x00029743) popup_snote2_single_graphic_window_t3

0xe857,	// (0x00029784) popup_snote2_single_graphic_window_t4_ParamLimits

0xe857,	// (0x00029784) popup_snote2_single_graphic_window_t4

0xe88d,	// (0x000297ba) popup_snote2_single_graphic_window_t5_ParamLimits

0xe88d,	// (0x000297ba) popup_snote2_single_graphic_window_t5

0x0004,

0xfcc2,	// (0x0002abef) popup_snote2_single_graphic_window_t_ParamLimits

0xfcc2,	// (0x0002abef) popup_snote2_single_graphic_window_t

0xb7b6,	// (0x000266e3) clock_nsta_pane_cp2_t1

0xb7b6,	// (0x000266e3) clock_nsta_pane_cp2_t2

0x0001,

0xfadd,	// (0x0002aa0a) clock_nsta_pane_cp2_t

0xafab,	// (0x00025ed8) form_field_data_wide_pane_g1_ParamLimits

0x547b,	// (0x000203a8) form_field_data_wide_pane_g2_ParamLimits

0x547b,	// (0x000203a8) form_field_data_wide_pane_g2

0x5b91,	// (0x00020abe) form_field_data_wide_pane_g3_ParamLimits

0x5b91,	// (0x00020abe) form_field_data_wide_pane_g3

0x0002,

0xf6bf,	// (0x0002a5ec) form_field_data_wide_pane_g_ParamLimits

0xf6bf,	// (0x0002a5ec) form_field_data_wide_pane_g

0x3a89,	// (0x0001e9b6) grid_touch_3_pane_ParamLimits

0x3a89,	// (0x0001e9b6) grid_touch_3_pane

0x3eed,	// (0x0001ee1a) cell_touch_3_pane_ParamLimits

0x3eed,	// (0x0001ee1a) cell_touch_3_pane

0xcbf8,	// (0x00027b25) cell_touch_3_pane_g1

0xcbf8,	// (0x00027b25) cell_touch_3_pane_g2

0x0001,

0xfb62,	// (0x0002aa8f) cell_touch_3_pane_g

0x5138,	// (0x00020065) cont_query_data_pane

0x5140,	// (0x0002006d) cont_query_data_pane_cp1

0xe9a0,	// (0x000298cd) button_value_adjust_pane_cp7

0xe9a8,	// (0x000298d5) query_popup_pane_cp3

0x60c0,	// (0x00020fed) bg_popup_sub_pane_cp22_ParamLimits

0x7aef,	// (0x00022a1c) navi_navi_volume_pane_cp2

0x7b07,	// (0x00022a34) popup_side_volume_key_window_g2

0x7b13,	// (0x00022a40) popup_side_volume_key_window_g3

0x0002,

0xf751,	// (0x0002a67e) popup_side_volume_key_window_g

0x7b2d,	// (0x00022a5a) popup_side_volume_key_window_t2

0x0001,

0xf758,	// (0x0002a685) popup_side_volume_key_window_t

0x6328,	// (0x00021255) popup_side_volume_key_window_ParamLimits

0x1946,	// (0x0001c873) list_double_graphic_pane_g4_ParamLimits

0x1946,	// (0x0001c873) list_double_graphic_pane_g4

0x38eb,	// (0x0001e818) list_single_2heading_msg_pane_ParamLimits

0x38eb,	// (0x0001e818) list_single_2heading_msg_pane

0x1eaf,	// (0x0001cddc) list_single_2heading_msg_pane_g1_ParamLimits

0x1eaf,	// (0x0001cddc) list_single_2heading_msg_pane_g1

0x1ebb,	// (0x0001cde8) list_single_2heading_msg_pane_g2_ParamLimits

0x1ebb,	// (0x0001cde8) list_single_2heading_msg_pane_g2

0x1ece,	// (0x0001cdfb) list_single_2heading_msg_pane_g3_ParamLimits

0x1ece,	// (0x0001cdfb) list_single_2heading_msg_pane_g3

0x1eda,	// (0x0001ce07) list_single_2heading_msg_pane_g4_ParamLimits

0x1eda,	// (0x0001ce07) list_single_2heading_msg_pane_g4

0x0003,

0xfccd,	// (0x0002abfa) list_single_2heading_msg_pane_g_ParamLimits

0xfccd,	// (0x0002abfa) list_single_2heading_msg_pane_g

0x1ef2,	// (0x0001ce1f) list_single_2heading_msg_pane_t1_ParamLimits

0x1ef2,	// (0x0001ce1f) list_single_2heading_msg_pane_t1

0x1f1a,	// (0x0001ce47) list_single_2heading_msg_pane_t2_ParamLimits

0x1f1a,	// (0x0001ce47) list_single_2heading_msg_pane_t2

0x1f85,	// (0x0001ceb2) list_single_2heading_msg_pane_t3_ParamLimits

0x1f85,	// (0x0001ceb2) list_single_2heading_msg_pane_t3

0xc10c,	// (0x00027039) list_single_2heading_msg_pane_t4_ParamLimits

0xc10c,	// (0x00027039) list_single_2heading_msg_pane_t4

0x0003,

0xfcd6,	// (0x0002ac03) list_single_2heading_msg_pane_t_ParamLimits

0xfcd6,	// (0x0002ac03) list_single_2heading_msg_pane_t

0x4ec9,	// (0x0001fdf6) title_pane_g4_ParamLimits

0x4ec9,	// (0x0001fdf6) title_pane_g4

0x77fc,	// (0x00022729) title_pane_stacon_g3_ParamLimits

0x77fc,	// (0x00022729) title_pane_stacon_g3

0xe539,	// (0x00029466) list_single_2graphic_im_pane_g4_ParamLimits

0xe539,	// (0x00029466) list_single_2graphic_im_pane_g4

0xa1fc,	// (0x00025129) popup_side_volume_key_window_cp

0xa662,	// (0x0002558f) main_idle_act2_pane_t1

0x7fbd,	// (0x00022eea) toolbar_button_pane_g10

0x25a4,	// (0x0001d4d1) popup_toolbar_window_cp1

0xb7a7,	// (0x000266d4) clock_nsta_pane_cp_t1

0xb7a7,	// (0x000266d4) clock_nsta_pane_cp_t2

0x0001,

0xfad8,	// (0x0002aa05) clock_nsta_pane_cp_t

0x7aef,	// (0x00022a1c) navi_navi_volume_pane_cp2_ParamLimits

0x7afb,	// (0x00022a28) popup_side_volume_key_window_g1_ParamLimits

0x7b07,	// (0x00022a34) popup_side_volume_key_window_g2_ParamLimits

0x7b13,	// (0x00022a40) popup_side_volume_key_window_g3_ParamLimits

0xf751,	// (0x0002a67e) popup_side_volume_key_window_g_ParamLimits

0x8453,	// (0x00023380) fep_hwr_aid_pane

0x84f4,	// (0x00023421) bg_fep_hwr_top_pane_g4_ParamLimits

0xcc61,	// (0x00027b8e) fep_hwr_top_pane_g1_ParamLimits

0xcc73,	// (0x00027ba0) fep_hwr_top_pane_g2_ParamLimits

0x8514,	// (0x00023441) fep_hwr_top_pane_g3_ParamLimits

0xfb2d,	// (0x0002aa5a) fep_hwr_top_pane_g_ParamLimits

0x8529,	// (0x00023456) fep_hwr_top_text_pane_ParamLimits

0x9fc7,	// (0x00024ef4) aid_touch_tab_arrow_arrow_2

0x9fd0,	// (0x00024efd) aid_touch_tab_arrow_left_2

0x8467,	// (0x00023394) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x849a,	// (0x000233c7) fep_hwr_prediction_pane

0xcdb2,	// (0x00027cdf) fep_vkb_prediction_pane

0x3cb9,	// (0x0001ebe6) fep_vkb_side_pane_g3_ParamLimits

0x3cb9,	// (0x0001ebe6) fep_vkb_side_pane_g3

0x8698,	// (0x000235c5) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x8702,	// (0x0002362f) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x870f,	// (0x0002363c) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbdc,	// (0x0002ab09) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x883e,	// (0x0002376b) fep_hwr_prediction_pane_g1

0x8848,	// (0x00023775) fep_hwr_prediction_pane_g2

0x8850,	// (0x0002377d) fep_hwr_prediction_pane_g3

0x8858,	// (0x00023785) fep_hwr_prediction_pane_g4

0x0003,

0xfcdf,	// (0x0002ac0c) fep_hwr_prediction_pane_g

0xe9b9,	// (0x000298e6) fep_vkb_prediction_pane_g1

0xe9c3,	// (0x000298f0) fep_vkb_prediction_pane_g2

0xe9cb,	// (0x000298f8) fep_vkb_prediction_pane_g3

0xe9d3,	// (0x00029900) fep_vkb_prediction_pane_g4

0x0003,

0xfce8,	// (0x0002ac15) fep_vkb_prediction_pane_g

0x828b,	// (0x000231b8) slider_set_pane_g3

0x829f,	// (0x000231cc) slider_set_pane_g4

0x82b7,	// (0x000231e4) slider_set_pane_g5

0x828b,	// (0x000231b8) slider_set_pane_g6

0xe48a,	// (0x000293b7) slider_set_pane_g7

0xa465,	// (0x00025392) slider_form_pane_g3

0xa46e,	// (0x0002539b) slider_form_pane_g4

0xa476,	// (0x000253a3) slider_form_pane_g5

0xa465,	// (0x00025392) slider_form_pane_g6

0x38bf,	// (0x0001e7ec) slider_form_pane_g7

0xa8ab,	// (0x000257d8) slider_set_pane_vc_g3

0xa8b4,	// (0x000257e1) slider_set_pane_vc_g4

0xa8bd,	// (0x000257ea) slider_set_pane_vc_g5

0xa8ab,	// (0x000257d8) slider_set_pane_vc_g6

0xa8c6,	// (0x000257f3) slider_set_pane_vc_g7

0xa8ab,	// (0x000257d8) slider_form_pane_vc_g1

0xa8b4,	// (0x000257e1) slider_form_pane_vc_g2

0xa8bd,	// (0x000257ea) slider_form_pane_vc_g3

0xa8ab,	// (0x000257d8) slider_form_pane_vc_g4

0xb565,	// (0x00026492) slider_form_pane_vc_g5

0x0004,

0xfabe,	// (0x0002a9eb) slider_form_pane_vc_g

0x4e33,	// (0x0001fd60) main_idle_act3_pane

0xe9db,	// (0x00029908) ai3_links_pane

0x3f34,	// (0x0001ee61) popup_ai3_data_window_ParamLimits

0x3f34,	// (0x0001ee61) popup_ai3_data_window

0x4e33,	// (0x0001fd60) grid_ai3_links_pane

0x3f4c,	// (0x0001ee79) cell_ai3_links_pane_ParamLimits

0x3f4c,	// (0x0001ee79) cell_ai3_links_pane

0xe9e4,	// (0x00029911) bg_popup_sub_pane_cp11

0xe9f1,	// (0x0002991e) cell_ai3_links_pane_g1

0x4e33,	// (0x0001fd60) bg_popup_sub_pane_cp12

0xea16,	// (0x00029943) heading_ai3_data_pane

0xea1e,	// (0x0002994b) list_ai3_gene_pane

0xea2a,	// (0x00029957) popup_ai3_data_window_g1

0xea32,	// (0x0002995f) heading_ai3_data_pane_g1

0xea3a,	// (0x00029967) heading_ai3_data_pane_t1

0xea48,	// (0x00029975) list_double_ai3_gene_pane_ParamLimits

0xea48,	// (0x00029975) list_double_ai3_gene_pane

0xea55,	// (0x00029982) list_single_ai3_gene_pane_ParamLimits

0xea55,	// (0x00029982) list_single_ai3_gene_pane

0xcbbd,	// (0x00027aea) list_highlight_pane_cp7_ParamLimits

0xcbbd,	// (0x00027aea) list_highlight_pane_cp7

0xea62,	// (0x0002998f) list_single_a13_gene_pane_t1_ParamLimits

0xea62,	// (0x0002998f) list_single_a13_gene_pane_t1

0xea79,	// (0x000299a6) list_single_ai3_gene_pane_g1

0xea82,	// (0x000299af) list_single_ai3_gene_pane_g2

0x0001,

0xfcf1,	// (0x0002ac1e) list_single_ai3_gene_pane_g

0xea8a,	// (0x000299b7) list_double_ai3_gene_pane_g1_ParamLimits

0xea8a,	// (0x000299b7) list_double_ai3_gene_pane_g1

0xea96,	// (0x000299c3) list_double_ai3_gene_pane_t1_ParamLimits

0xea96,	// (0x000299c3) list_double_ai3_gene_pane_t1

0xeab2,	// (0x000299df) list_double_ai3_gene_pane_t2_ParamLimits

0xeab2,	// (0x000299df) list_double_ai3_gene_pane_t2

0xeac7,	// (0x000299f4) list_double_ai3_gene_pane_t3_ParamLimits

0xeac7,	// (0x000299f4) list_double_ai3_gene_pane_t3

0x0002,

0xfcf6,	// (0x0002ac23) list_double_ai3_gene_pane_t_ParamLimits

0xfcf6,	// (0x0002ac23) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xc03f,	// (0x00026f6c) aid_size_min_col_2

0x3f20,	// (0x0001ee4d) aid_size_min_msg_ParamLimits

0x3f20,	// (0x0001ee4d) aid_size_min_msg

0x3ccd,	// (0x0001ebfa) fep_vkb_top_text_pane_g2_ParamLimits

0x3ccd,	// (0x0001ebfa) fep_vkb_top_text_pane_g2

0x0001,

0xfb5d,	// (0x0002aa8a) fep_vkb_top_text_pane_g_ParamLimits

0xfb5d,	// (0x0002aa8a) fep_vkb_top_text_pane_g

0x4e33,	// (0x0001fd60) main_hc_apps_shell_pane

0xeae4,	// (0x00029a11) grid_hc_apps_pane_ParamLimits

0xeae4,	// (0x00029a11) grid_hc_apps_pane

0xeaf3,	// (0x00029a20) list_hc_apps_pane

0xeafb,	// (0x00029a28) scroll_pane_cp37_ParamLimits

0xeafb,	// (0x00029a28) scroll_pane_cp37

0x3f62,	// (0x0001ee8f) cell_hc_apps_pane_ParamLimits

0x3f62,	// (0x0001ee8f) cell_hc_apps_pane

0x3ffc,	// (0x0001ef29) cell_hc_apps_pane_g1_ParamLimits

0x3ffc,	// (0x0001ef29) cell_hc_apps_pane_g1

0xeb07,	// (0x00029a34) cell_hc_apps_pane_g2_ParamLimits

0xeb07,	// (0x00029a34) cell_hc_apps_pane_g2

0xeb23,	// (0x00029a50) cell_hc_apps_pane_g3_ParamLimits

0xeb23,	// (0x00029a50) cell_hc_apps_pane_g3

0x0002,

0xfcfd,	// (0x0002ac2a) cell_hc_apps_pane_g_ParamLimits

0xfcfd,	// (0x0002ac2a) cell_hc_apps_pane_g

0x4029,	// (0x0001ef56) cell_hc_apps_pane_t1_ParamLimits

0x4029,	// (0x0001ef56) cell_hc_apps_pane_t1

0x5082,	// (0x0001ffaf) grid_highlight_pane_cp10_ParamLimits

0x5082,	// (0x0001ffaf) grid_highlight_pane_cp10

0x4067,	// (0x0001ef94) list_single_hc_apps_pane_ParamLimits

0x4067,	// (0x0001ef94) list_single_hc_apps_pane

0x4093,	// (0x0001efc0) list_single_hc_apps_pane_g1

0x1ff3,	// (0x0001cf20) list_single_hc_apps_pane_g2

0x0001,

0xfd04,	// (0x0002ac31) list_single_hc_apps_pane_g

0x200c,	// (0x0001cf39) list_single_hc_apps_pane_g2_copy1

0x2028,	// (0x0001cf55) list_single_hc_apps_pane_t1

0x4f23,	// (0x0001fe50) bg_set_opt_pane_cp_ParamLimits

0x74ef,	// (0x0002241c) setting_slider_pane_t1_ParamLimits

0xe151,	// (0x0002907e) setting_slider_pane_t2_ParamLimits

0xe16a,	// (0x00029097) setting_slider_pane_t3_ParamLimits

0xf5a2,	// (0x0002a4cf) setting_slider_pane_t_ParamLimits

0x7535,	// (0x00022462) slider_set_pane_ParamLimits

0x7e7b,	// (0x00022da8) control_pane_g5_ParamLimits

0x7e7b,	// (0x00022da8) control_pane_g5

0xa42d,	// (0x0002535a) slider_set_pane_g1_ParamLimits

0x827f,	// (0x000231ac) slider_set_pane_g2_ParamLimits

0x828b,	// (0x000231b8) slider_set_pane_g3_ParamLimits

0x829f,	// (0x000231cc) slider_set_pane_g4_ParamLimits

0x82b7,	// (0x000231e4) slider_set_pane_g5_ParamLimits

0x828b,	// (0x000231b8) slider_set_pane_g6_ParamLimits

0xe48a,	// (0x000293b7) slider_set_pane_g7_ParamLimits

0xf991,	// (0x0002a8be) slider_set_pane_g_ParamLimits

0x4f23,	// (0x0001fe50) navi_icon_text_pane_ParamLimits

0x2fd7,	// (0x0001df04) aid_fill_nsta_2_ParamLimits

0x3005,	// (0x0001df32) aid_touch_tab_arrow_left_ParamLimits

0x3019,	// (0x0001df46) aid_touch_tab_arrow_right_ParamLimits

0x30b5,	// (0x0001dfe2) clock_nsta_pane_ParamLimits

0x9fa9,	// (0x00024ed6) navi_icon_pane_g1_ParamLimits

0x9fb5,	// (0x00024ee2) navi_text_pane_t1_ParamLimits

0xc857,	// (0x00027784) navi_icon_text_pane_g1_ParamLimits

0xc863,	// (0x00027790) navi_icon_text_pane_t1_ParamLimits

0x4093,	// (0x0001efc0) list_single_hc_apps_pane_g1_ParamLimits

0x1ff3,	// (0x0001cf20) list_single_hc_apps_pane_g2_ParamLimits

0xfd04,	// (0x0002ac31) list_single_hc_apps_pane_g_ParamLimits

0x200c,	// (0x0001cf39) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x2028,	// (0x0001cf55) list_single_hc_apps_pane_t1_ParamLimits

0xe0de,	// (0x0002900b) popup_toolbar2_fixed_window_ParamLimits

0xe0de,	// (0x0002900b) popup_toolbar2_fixed_window

0x2f62,	// (0x0001de8f) popup_toolbar2_float_window

0x4e33,	// (0x0001fd60) bg_popup_sub_pane_cp27

0xeb45,	// (0x00029a72) grid_toolbar2_float_pane

0x4e33,	// (0x0001fd60) bg_popup_sub_pane_cp26

0xeb45,	// (0x00029a72) grid_toolbar2_fixed_pane

0x40ac,	// (0x0001efd9) cell_toolbar2_fixed_pane_ParamLimits

0x40ac,	// (0x0001efd9) cell_toolbar2_fixed_pane

0x40c7,	// (0x0001eff4) cell_toolbar2_fixed_pane_g1

0xeb4d,	// (0x00029a7a) toolbar2_fixed_button_pane

0x934e,	// (0x0002427b) toolbar2_fixed_button_pane_g1

0x935e,	// (0x0002428b) toolbar2_fixed_button_pane_g2

0x9356,	// (0x00024283) toolbar2_fixed_button_pane_g3

0x936e,	// (0x0002429b) toolbar2_fixed_button_pane_g4

0x9366,	// (0x00024293) toolbar2_fixed_button_pane_g5

0x9376,	// (0x000242a3) toolbar2_fixed_button_pane_g6

0x937e,	// (0x000242ab) toolbar2_fixed_button_pane_g7

0x938e,	// (0x000242bb) toolbar2_fixed_button_pane_g8

0x9386,	// (0x000242b3) toolbar2_fixed_button_pane_g9

0x0008,

0xf893,	// (0x0002a7c0) toolbar2_fixed_button_pane_g

0xeb55,	// (0x00029a82) cell_toolbar2_float_pane_ParamLimits

0xeb55,	// (0x00029a82) cell_toolbar2_float_pane

0xeb66,	// (0x00029a93) cell_toolbar2_float_pane_g1

0xeb4d,	// (0x00029a7a) toolbar2_fixed_button_pane_cp

0x3c82,	// (0x0001ebaf) fep_vkb_accented_list_pane_ParamLimits

0x3c82,	// (0x0001ebaf) fep_vkb_accented_list_pane

0x8678,	// (0x000235a5) bg_popup_fep_shadow_pane_g9

0x6530,	// (0x0002145d) bg_popup_fep_shadow_pane_cp3

0x5cb5,	// (0x00020be2) list_accented_list_pane

0xeb6f,	// (0x00029a9c) list_single_accented_list_pane_ParamLimits

0xeb6f,	// (0x00029a9c) list_single_accented_list_pane

0x6530,	// (0x0002145d) list_highlight_pane_cp10

0xeb80,	// (0x00029aad) list_single_accented_list_pane_t1

0x2ea4,	// (0x0001ddd1) popup_slider_window_ParamLimits

0x2ea4,	// (0x0001ddd1) popup_slider_window

0xe9b0,	// (0x000298dd) aid_indentation_list_msg

0x41a6,	// (0x0001f0d3) bg_popup_window_pane_cp19

0xefe0,	// (0x00029f0d) popup_slider_window_g1

0xeffc,	// (0x00029f29) popup_slider_window_g2

0xf018,	// (0x00029f45) popup_slider_window_g3

0x0005,

0xfd09,	// (0x0002ac36) popup_slider_window_g

0xf034,	// (0x00029f61) popup_slider_window_t1

0xf078,	// (0x00029fa5) small_volume_slider_vertical_pane

0xcbf8,	// (0x00027b25) small_volume_slider_vertical_pane_g1

0xcbf8,	// (0x00027b25) small_volume_slider_vertical_pane_g2

0xf094,	// (0x00029fc1) small_volume_slider_vertical_pane_g3

0x0002,

0xfd1b,	// (0x0002ac48) small_volume_slider_vertical_pane_g

0xe062,	// (0x00028f8f) area_side_right_pane_ParamLimits

0xe062,	// (0x00028f8f) area_side_right_pane

0xeb8e,	// (0x00029abb) aid_size_side_button_ParamLimits

0xeb8e,	// (0x00029abb) aid_size_side_button

0xeba7,	// (0x00029ad4) grid_sctrl_middle_pane_ParamLimits

0xeba7,	// (0x00029ad4) grid_sctrl_middle_pane

0x8890,	// (0x000237bd) sctrl_sk_bottom_pane

0x88a1,	// (0x000237ce) sctrl_sk_top_pane

0x88b3,	// (0x000237e0) aid_touch_sctrl_top

0x88c0,	// (0x000237ed) bg_sctrl_sk_pane_ParamLimits

0x88c0,	// (0x000237ed) bg_sctrl_sk_pane

0x88ce,	// (0x000237fb) sctrl_sk_top_pane_g1

0x88db,	// (0x00023808) sctrl_sk_top_pane_t1

0x88b3,	// (0x000237e0) aid_touch_sctrl_bottom

0x88c0,	// (0x000237ed) bg_sctrl_sk_pane_cp_ParamLimits

0x88c0,	// (0x000237ed) bg_sctrl_sk_pane_cp

0x88f6,	// (0x00023823) sctrl_sk_bottom_pane_g1

0x88db,	// (0x00023808) sctrl_sk_bottom_pane_t1

0xebbd,	// (0x00029aea) cell_sctrl_middle_pane_ParamLimits

0xebbd,	// (0x00029aea) cell_sctrl_middle_pane

0xebce,	// (0x00029afb) aid_touch_sctrl_middle_ParamLimits

0xebce,	// (0x00029afb) aid_touch_sctrl_middle

0xebdb,	// (0x00029b08) bg_sctrl_middle_pane_ParamLimits

0xebdb,	// (0x00029b08) bg_sctrl_middle_pane

0x8efe,	// (0x00023e2b) cell_sctrl_middle_pane_g1_ParamLimits

0x8efe,	// (0x00023e2b) cell_sctrl_middle_pane_g1

0xebe9,	// (0x00029b16) cell_sctrl_middle_pane_g2_ParamLimits

0xebe9,	// (0x00029b16) cell_sctrl_middle_pane_g2

0x0001,

0xfd27,	// (0x0002ac54) cell_sctrl_middle_pane_g_ParamLimits

0xfd27,	// (0x0002ac54) cell_sctrl_middle_pane_g

0x934e,	// (0x0002427b) bg_sctrl_middle_pane_g1

0x9356,	// (0x00024283) bg_sctrl_middle_pane_g2

0x935e,	// (0x0002428b) bg_sctrl_middle_pane_g3

0x9366,	// (0x00024293) bg_sctrl_middle_pane_g4

0x936e,	// (0x0002429b) bg_sctrl_middle_pane_g5

0x9376,	// (0x000242a3) bg_sctrl_middle_pane_g6

0x937e,	// (0x000242ab) bg_sctrl_middle_pane_g7

0x9386,	// (0x000242b3) bg_sctrl_middle_pane_g8

0x0007,

0xfd2c,	// (0x0002ac59) bg_sctrl_middle_pane_g

0x938e,	// (0x000242bb) bg_sctrl_middle_pane_g8_copy1

0x934e,	// (0x0002427b) bg_sctrl_sk_pane_g1

0x935e,	// (0x0002428b) bg_sctrl_sk_pane_g2

0x9356,	// (0x00024283) bg_sctrl_sk_pane_g3

0x0008,

0xf893,	// (0x0002a7c0) bg_sctrl_sk_pane_g

0x540b,	// (0x00020338) aid_size_touch_scroll_bar

0x936e,	// (0x0002429b) bg_sctrl_sk_pane_g4

0x9366,	// (0x00024293) bg_sctrl_sk_pane_g5

0x9376,	// (0x000242a3) bg_sctrl_sk_pane_g6

0x937e,	// (0x000242ab) bg_sctrl_sk_pane_g7

0x938e,	// (0x000242bb) bg_sctrl_sk_pane_g8

0x9386,	// (0x000242b3) bg_sctrl_sk_pane_g9

0x90c4,	// (0x00023ff1) popup_fep_china_hwr2_fs_candidate_window

0x2a9f,	// (0x0001d9cc) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x2a9f,	// (0x0001d9cc) popup_fep_china_hwr2_fs_control_window

0x8698,	// (0x000235c5) sctrl_sk_top_pane_g2

0x0001,

0xfd22,	// (0x0002ac4f) sctrl_sk_top_pane_g

0x42c6,	// (0x0001f1f3) aid_fep_china_hwr2_fs_cell_ParamLimits

0x42c6,	// (0x0001f1f3) aid_fep_china_hwr2_fs_cell

0x42da,	// (0x0001f207) bg_popup_fep_shadow_pane_cp4_ParamLimits

0x42da,	// (0x0001f207) bg_popup_fep_shadow_pane_cp4

0x42f1,	// (0x0001f21e) bg_popup_fep_shadow_pane_cp5_ParamLimits

0x42f1,	// (0x0001f21e) bg_popup_fep_shadow_pane_cp5

0x4303,	// (0x0001f230) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0x4303,	// (0x0001f230) popup_fep_china_hwr2_fs_control_bar_grid

0x4317,	// (0x0001f244) popup_fep_china_hwr2_fs_control_funtion_grid

0xf09d,	// (0x00029fca) aid_fep_china_hwr2_fs_candi_cell

0x4e33,	// (0x0001fd60) bg_popup_fep_shadow_pane_cp6

0xf0a7,	// (0x00029fd4) popup_fep_china_hwr2_fs_candidate_grid

0x431f,	// (0x0001f24c) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0x431f,	// (0x0001f24c) cell_fep_china_hwr2_fs_funtion_grid

0xcbf8,	// (0x00027b25) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xf0af,	// (0x00029fdc) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xf0af,	// (0x00029fdc) cell_fep_china_hwr2_fs_funtion_grid_g1

0xf0bd,	// (0x00029fea) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xf0bd,	// (0x00029fea) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd3d,	// (0x0002ac6a) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd3d,	// (0x0002ac6a) cell_fep_china_hwr2_fs_funtion_grid_g

0x4337,	// (0x0001f264) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0x4337,	// (0x0001f264) cell_fep_china_hwr2_fs_funtion_grid_t1

0x434c,	// (0x0001f279) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0x434c,	// (0x0001f279) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd42,	// (0x0002ac6f) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd42,	// (0x0002ac6f) cell_fep_china_hwr2_fs_funtion_grid_t

0xf0d3,	// (0x0002a000) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xf0db,	// (0x0002a008) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xf0e3,	// (0x0002a010) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd47,	// (0x0002ac74) popup_fep_china_hwr2_fs_control_bar_grid_g

0xf0eb,	// (0x0002a018) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xf0eb,	// (0x0002a018) cell_fep_china_hwr2_fs_candidate_grid

0xf104,	// (0x0002a031) popup_fep_china_hwr2_fs_candidate_grid_g20

0xf10c,	// (0x0002a039) popup_fep_china_hwr2_fs_candidate_grid_g21

0xcbf8,	// (0x00027b25) cell_fep_china_hwr2_fs_candidate_grid_g1

0xcbf8,	// (0x00027b25) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb62,	// (0x0002aa8f) cell_fep_china_hwr2_fs_candidate_grid_g

0xf114,	// (0x0002a041) cell_fep_china_hwr2_fs_candidate_grid_t1

0x91b3,	// (0x000240e0) clock_nsta_pane_cp_24_ParamLimits

0x91b3,	// (0x000240e0) clock_nsta_pane_cp_24

0x9210,	// (0x0002413d) indicator_nsta_pane_cp_24_ParamLimits

0x9210,	// (0x0002413d) indicator_nsta_pane_cp_24

0x9eb4,	// (0x00024de1) heading_pane_g1

0x0001,

0xf8f8,	// (0x0002a825) heading_pane_g

0x39b1,	// (0x0001e8de) grid_sct_catagory_button_pane

0xa534,	// (0x00025461) scroll_pane_cp5_ParamLimits

0xc8a5,	// (0x000277d2) button_value_adjust_pane_cp5_ParamLimits

0xc8a5,	// (0x000277d2) button_value_adjust_pane_cp5

0xc982,	// (0x000278af) form2_midp_time_pane_ParamLimits

0xf122,	// (0x0002a04f) cell_sct_catagory_button_pane_ParamLimits

0xf122,	// (0x0002a04f) cell_sct_catagory_button_pane

0xcbbd,	// (0x00027aea) bg_button_pane_cp01_ParamLimits

0xcbbd,	// (0x00027aea) bg_button_pane_cp01

0xcbf8,	// (0x00027b25) cell_sct_catagory_button_pane_g1

0x2f13,	// (0x0001de40) popup_tb_extension_window

0x4368,	// (0x0001f295) aid_size_cell_ext_ParamLimits

0x4368,	// (0x0001f295) aid_size_cell_ext

0x52e9,	// (0x00020216) bg_tb_trans_pane_cp1_ParamLimits

0x52e9,	// (0x00020216) bg_tb_trans_pane_cp1

0x438e,	// (0x0001f2bb) grid_tb_ext_pane_ParamLimits

0x438e,	// (0x0001f2bb) grid_tb_ext_pane

0x43c4,	// (0x0001f2f1) cell_tb_ext_pane_ParamLimits

0x43c4,	// (0x0001f2f1) cell_tb_ext_pane

0x43e8,	// (0x0001f315) cell_tb_ext_pane_g1_ParamLimits

0x43e8,	// (0x0001f315) cell_tb_ext_pane_g1

0xf134,	// (0x0002a061) cell_tb_ext_pane_t1

0x5082,	// (0x0001ffaf) list_highlight_pane_cp11_ParamLimits

0x5082,	// (0x0001ffaf) list_highlight_pane_cp11

0x7382,	// (0x000222af) popup_uni_indicator_window_ParamLimits

0x7382,	// (0x000222af) popup_uni_indicator_window

0x5b77,	// (0x00020aa4) bg_popup_sub_pane_cp14

0xf14f,	// (0x0002a07c) list_uniindi_pane

0xf15b,	// (0x0002a088) uniindi_top_pane

0x5082,	// (0x0001ffaf) bg_uniindi_top_pane

0xf17a,	// (0x0002a0a7) uniindi_top_pane_g1

0xf190,	// (0x0002a0bd) uniindi_top_pane_g2

0x0003,

0xfd4e,	// (0x0002ac7b) uniindi_top_pane_g

0xf1ba,	// (0x0002a0e7) uniindi_top_pane_t1

0xf1e4,	// (0x0002a111) list_single_uniindi_pane_ParamLimits

0xf1e4,	// (0x0002a111) list_single_uniindi_pane

0xcbf8,	// (0x00027b25) bg_uniindi_top_pane_g1

0xf1f6,	// (0x0002a123) list_single_uniindi_pane_g1

0xf209,	// (0x0002a136) list_single_uniindi_pane_t1

0x7220,	// (0x0002214d) control_bg_pane

0xf22e,	// (0x0002a15b) bg_sctrl_sk_pane_cp1

0xf237,	// (0x0002a164) bg_sctrl_sk_pane_cp2

0xf240,	// (0x0002a16d) control_bg_pane_g1

0xf249,	// (0x0002a176) control_bg_pane_g2

0x0001,

0xfd57,	// (0x0002ac84) control_bg_pane_g

0xb780,	// (0x000266ad) cell_indicator_nsta_pane_g1_ParamLimits

0x3abc,	// (0x0001e9e9) cell_indicator_nsta_pane_g2_ParamLimits

0xfad3,	// (0x0002aa00) cell_indicator_nsta_pane_g_ParamLimits

0xb82d,	// (0x0002675a) form2_midp_time_pane_t1_ParamLimits

0xcc53,	// (0x00027b80) main_idle_act4_pane_ParamLimits

0xcc53,	// (0x00027b80) main_idle_act4_pane

0x2f13,	// (0x0001de40) popup_tb_extension_window_ParamLimits

0x43ae,	// (0x0001f2db) tb_ext_find_pane_ParamLimits

0x43ae,	// (0x0001f2db) tb_ext_find_pane

0xf252,	// (0x0002a17f) ai_gene_pane_1_cp1

0x65c4,	// (0x000214f1) ai_gene_pane_2_cp1

0xf25a,	// (0x0002a187) list_single_idle_plugin_calendar_pane

0xf263,	// (0x0002a190) list_single_idle_plugin_notification_pane

0xf26c,	// (0x0002a199) list_single_idle_plugin_player_pane

0x4405,	// (0x0001f332) list_single_idle_plugin_shortcut_pane_ParamLimits

0x4405,	// (0x0001f332) list_single_idle_plugin_shortcut_pane

0x442d,	// (0x0001f35a) main_idle_act4_pane_t1

0x4443,	// (0x0001f370) main_idle_act4_pane_t2

0x0001,

0xfd5c,	// (0x0002ac89) main_idle_act4_pane_t

0x4459,	// (0x0001f386) middle_sk_idle_act4_pane_ParamLimits

0x4459,	// (0x0001f386) middle_sk_idle_act4_pane

0x4475,	// (0x0001f3a2) popup_clock_digital_analogue_window_cp2

0x449b,	// (0x0001f3c8) shortcut_wheel_idle_act4_pane_ParamLimits

0x449b,	// (0x0001f3c8) shortcut_wheel_idle_act4_pane

0xcbf8,	// (0x00027b25) shortcut_wheel_idle_act4_pane_g1

0xcbf8,	// (0x00027b25) shortcut_wheel_idle_act4_pane_g2

0xcbf8,	// (0x00027b25) shortcut_wheel_idle_act4_pane_g3

0xcbf8,	// (0x00027b25) shortcut_wheel_idle_act4_pane_g4

0xcbf8,	// (0x00027b25) shortcut_wheel_idle_act4_pane_g5

0xf275,	// (0x0002a1a2) shortcut_wheel_idle_act4_pane_g6

0xf27d,	// (0x0002a1aa) shortcut_wheel_idle_act4_pane_g7

0xf285,	// (0x0002a1b2) shortcut_wheel_idle_act4_pane_g8

0xf28d,	// (0x0002a1ba) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd61,	// (0x0002ac8e) shortcut_wheel_idle_act4_pane_g

0xebf6,	// (0x00029b23) middle_sk_idle_act4_pane_g1_ParamLimits

0xebf6,	// (0x00029b23) middle_sk_idle_act4_pane_g1

0x4516,	// (0x0001f443) middle_sk_idle_act4_pane_g2_ParamLimits

0x4516,	// (0x0001f443) middle_sk_idle_act4_pane_g2

0x0001,

0xfd84,	// (0x0002acb1) middle_sk_idle_act4_pane_g_ParamLimits

0xfd84,	// (0x0002acb1) middle_sk_idle_act4_pane_g

0x452e,	// (0x0001f45b) middle_sk_idle_act4_pane_t1_ParamLimits

0x452e,	// (0x0001f45b) middle_sk_idle_act4_pane_t1

0x455d,	// (0x0001f48a) grid_ai_shortcut_pane_ParamLimits

0x455d,	// (0x0001f48a) grid_ai_shortcut_pane

0x457a,	// (0x0001f4a7) list_highlight_pane_cp16_ParamLimits

0x457a,	// (0x0001f4a7) list_highlight_pane_cp16

0x4587,	// (0x0001f4b4) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0x4587,	// (0x0001f4b4) list_single_idle_plugin_shortcut_pane_g1

0x4593,	// (0x0001f4c0) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0x4593,	// (0x0001f4c0) list_single_idle_plugin_shortcut_pane_g2

0x45af,	// (0x0001f4dc) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0x45af,	// (0x0001f4dc) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd89,	// (0x0002acb6) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd89,	// (0x0002acb6) list_single_idle_plugin_shortcut_pane_g

0x45c4,	// (0x0001f4f1) cell_ai_shortcut_pane_ParamLimits

0x45c4,	// (0x0001f4f1) cell_ai_shortcut_pane

0x45da,	// (0x0001f507) cell_ai_shortcut_pane_g1_ParamLimits

0x45da,	// (0x0001f507) cell_ai_shortcut_pane_g1

0xf252,	// (0x0002a17f) ai_gene_pane_1_cp2

0xf295,	// (0x0002a1c2) ai_gene_pane_2_cp2

0xf29d,	// (0x0002a1ca) list_highlight_pane_cp15

0xf2a6,	// (0x0002a1d3) list_single_idle_plugin_calendar_pane_g1

0xf29d,	// (0x0002a1ca) list_highlight_pane_cp17

0xf2ae,	// (0x0002a1db) list_single_idle_plugin_calendar_pane_g1_copy1

0xf2b6,	// (0x0002a1e3) list_single_idle_plugin_player_pane_g1

0xa6ee,	// (0x0002561b) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd90,	// (0x0002acbd) list_single_idle_plugin_player_pane_g

0xf2be,	// (0x0002a1eb) list_single_idle_plugin_player_pane_t1

0xf2cc,	// (0x0002a1f9) list_single_idle_plugin_player_pane_t2

0xf2da,	// (0x0002a207) list_single_idle_plugin_player_pane_t3

0xf2e8,	// (0x0002a215) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd95,	// (0x0002acc2) list_single_idle_plugin_player_pane_t

0xf2f6,	// (0x0002a223) wait_bar_pane_cp15

0xf2fe,	// (0x0002a22b) grid_ai_notification_pane

0xa6ee,	// (0x0002561b) list_single_idle_plugin_notification_pane_g1

0x45fc,	// (0x0001f529) cell_ai_notification_pane_ParamLimits

0x45fc,	// (0x0001f529) cell_ai_notification_pane

0xf307,	// (0x0002a234) cell_ai_notification_pane_g1

0xf30f,	// (0x0002a23c) cell_ai_notification_pane_t1

0x4609,	// (0x0001f536) tb_ext_find_button_pane

0x4611,	// (0x0001f53e) tb_ext_find_pane_g1

0x4619,	// (0x0001f546) tb_ext_find_pane_t1

0x6085,	// (0x00020fb2) tb_ext_find_button_pane_g1

0xf31d,	// (0x0002a24a) tb_ext_find_button_pane_g2

0x0001,

0xfd9e,	// (0x0002accb) tb_ext_find_button_pane_g

0x442d,	// (0x0001f35a) main_idle_act4_pane_t1_ParamLimits

0x4443,	// (0x0001f370) main_idle_act4_pane_t2_ParamLimits

0xfd5c,	// (0x0002ac89) main_idle_act4_pane_t_ParamLimits

0x4475,	// (0x0001f3a2) popup_clock_digital_analogue_window_cp2_ParamLimits

0x448b,	// (0x0001f3b8) sat_plugin_idle_act4_pane_ParamLimits

0x448b,	// (0x0001f3b8) sat_plugin_idle_act4_pane

0x4627,	// (0x0001f554) sat_plugin_idle_act4_pane_t1_ParamLimits

0x4627,	// (0x0001f554) sat_plugin_idle_act4_pane_t1

0x463f,	// (0x0001f56c) sat_plugin_idle_act4_pane_t2_ParamLimits

0x463f,	// (0x0001f56c) sat_plugin_idle_act4_pane_t2

0x4657,	// (0x0001f584) sat_plugin_idle_act4_pane_t3_ParamLimits

0x4657,	// (0x0001f584) sat_plugin_idle_act4_pane_t3

0x466f,	// (0x0001f59c) sat_plugin_idle_act4_pane_t4_ParamLimits

0x466f,	// (0x0001f59c) sat_plugin_idle_act4_pane_t4

0x0003,

0xfda3,	// (0x0002acd0) sat_plugin_idle_act4_pane_t_ParamLimits

0xfda3,	// (0x0002acd0) sat_plugin_idle_act4_pane_t

0x72e3,	// (0x00022210) popup_battery_window_ParamLimits

0x72e3,	// (0x00022210) popup_battery_window

0x5082,	// (0x0001ffaf) bg_popup_sub_pane_cp25_ParamLimits

0x5082,	// (0x0001ffaf) bg_popup_sub_pane_cp25

0xf326,	// (0x0002a253) popup_battery_window_g1_ParamLimits

0xf326,	// (0x0002a253) popup_battery_window_g1

0xf332,	// (0x0002a25f) popup_battery_window_t1_ParamLimits

0xf332,	// (0x0002a25f) popup_battery_window_t1

0xf344,	// (0x0002a271) popup_battery_window_t2_ParamLimits

0xf344,	// (0x0002a271) popup_battery_window_t2

0x0001,

0xfdac,	// (0x0002acd9) popup_battery_window_t_ParamLimits

0xfdac,	// (0x0002acd9) popup_battery_window_t

0x2827,	// (0x0001d754) midp_canvas_pane_ParamLimits

0x287c,	// (0x0001d7a9) midp_keypad_pane_ParamLimits

0x287c,	// (0x0001d7a9) midp_keypad_pane

0x9090,	// (0x00023fbd) main_midp_pane_ParamLimits

0xb7c5,	// (0x000266f2) signal_pane_g2_cp_ParamLimits

0x4687,	// (0x0001f5b4) aid_size_cell_midp_keypad_ParamLimits

0x4687,	// (0x0001f5b4) aid_size_cell_midp_keypad

0x46a5,	// (0x0001f5d2) midp_keyp_game_grid_pane_ParamLimits

0x46a5,	// (0x0001f5d2) midp_keyp_game_grid_pane

0x46c4,	// (0x0001f5f1) midp_keyp_rocker_pane_ParamLimits

0x46c4,	// (0x0001f5f1) midp_keyp_rocker_pane

0x4705,	// (0x0001f632) midp_keyp_sk_left_pane_ParamLimits

0x4705,	// (0x0001f632) midp_keyp_sk_left_pane

0x4757,	// (0x0001f684) midp_keyp_sk_right_pane_ParamLimits

0x4757,	// (0x0001f684) midp_keyp_sk_right_pane

0x4e33,	// (0x0001fd60) bg_button_pane_cp03

0x47a3,	// (0x0001f6d0) midp_keyp_sk_left_pane_g1

0x4e33,	// (0x0001fd60) bg_button_pane_cp04

0x47a3,	// (0x0001f6d0) midp_keyp_sk_right_pane_g1

0xcbf8,	// (0x00027b25) midp_keyp_rocker_pane_g1

0x47ac,	// (0x0001f6d9) keyp_game_cell_pane_ParamLimits

0x47ac,	// (0x0001f6d9) keyp_game_cell_pane

0x4e33,	// (0x0001fd60) bg_button_pane_cp02

0x47ce,	// (0x0001f6fb) keyp_game_cell_pane_g1

0xe0a4,	// (0x00028fd1) popup_fep_vkb2_window_ParamLimits

0xe0a4,	// (0x00028fd1) popup_fep_vkb2_window

0xec04,	// (0x00029b31) aid_size_cell_vkb2_ParamLimits

0xec04,	// (0x00029b31) aid_size_cell_vkb2

0xec3a,	// (0x00029b67) popup_fep_vkb2_window_g1_ParamLimits

0xec3a,	// (0x00029b67) popup_fep_vkb2_window_g1

0xec8a,	// (0x00029bb7) vkb2_area_bottom_pane_ParamLimits

0xec8a,	// (0x00029bb7) vkb2_area_bottom_pane

0xecc8,	// (0x00029bf5) vkb2_area_keypad_pane_ParamLimits

0xecc8,	// (0x00029bf5) vkb2_area_keypad_pane

0xed06,	// (0x00029c33) vkb2_area_top_pane_ParamLimits

0xed06,	// (0x00029c33) vkb2_area_top_pane

0xed82,	// (0x00029caf) vkb2_top_entry_pane_ParamLimits

0xed82,	// (0x00029caf) vkb2_top_entry_pane

0xedaf,	// (0x00029cdc) vkb2_top_grid_left_pane_ParamLimits

0xedaf,	// (0x00029cdc) vkb2_top_grid_left_pane

0xedcf,	// (0x00029cfc) vkb2_top_grid_right_pane_ParamLimits

0xedcf,	// (0x00029cfc) vkb2_top_grid_right_pane

0x8b3f,	// (0x00023a6c) vkb2_cell_keypad_pane_ParamLimits

0x8b3f,	// (0x00023a6c) vkb2_cell_keypad_pane

0xee15,	// (0x00029d42) vkb2_area_bottom_grid_pane_ParamLimits

0xee15,	// (0x00029d42) vkb2_area_bottom_grid_pane

0xee3b,	// (0x00029d68) vkb2_area_bottom_pane_g1_ParamLimits

0xee3b,	// (0x00029d68) vkb2_area_bottom_pane_g1

0xee61,	// (0x00029d8e) vkb2_area_bottom_pane_g2_ParamLimits

0xee61,	// (0x00029d8e) vkb2_area_bottom_pane_g2

0xee92,	// (0x00029dbf) vkb2_area_bottom_pane_g3_ParamLimits

0xee92,	// (0x00029dbf) vkb2_area_bottom_pane_g3

0x0002,

0xfdb1,	// (0x0002acde) vkb2_area_bottom_pane_g_ParamLimits

0xfdb1,	// (0x0002acde) vkb2_area_bottom_pane_g

0x8cb7,	// (0x00023be4) vkb2_top_cell_left_pane_ParamLimits

0x8cb7,	// (0x00023be4) vkb2_top_cell_left_pane

0x4abb,	// (0x0001f9e8) vkb2_top_entry_pane_g1_ParamLimits

0x4abb,	// (0x0001f9e8) vkb2_top_entry_pane_g1

0x4ac9,	// (0x0001f9f6) vkb2_top_entry_pane_t1_ParamLimits

0x4ac9,	// (0x0001f9f6) vkb2_top_entry_pane_t1

0xf369,	// (0x0002a296) vkb2_top_entry_pane_t2_ParamLimits

0xf369,	// (0x0002a296) vkb2_top_entry_pane_t2

0xf39b,	// (0x0002a2c8) vkb2_top_entry_pane_t3_ParamLimits

0xf39b,	// (0x0002a2c8) vkb2_top_entry_pane_t3

0x0002,

0xfdb8,	// (0x0002ace5) vkb2_top_entry_pane_t_ParamLimits

0xfdb8,	// (0x0002ace5) vkb2_top_entry_pane_t

0xeee8,	// (0x00029e15) vkb2_top_grid_right_pane_g1_ParamLimits

0xeee8,	// (0x00029e15) vkb2_top_grid_right_pane_g1

0x8d1a,	// (0x00023c47) vkb2_top_grid_right_pane_g2_ParamLimits

0x8d1a,	// (0x00023c47) vkb2_top_grid_right_pane_g2

0x8d32,	// (0x00023c5f) vkb2_top_grid_right_pane_g3_ParamLimits

0x8d32,	// (0x00023c5f) vkb2_top_grid_right_pane_g3

0xeefe,	// (0x00029e2b) vkb2_top_grid_right_pane_g4_ParamLimits

0xeefe,	// (0x00029e2b) vkb2_top_grid_right_pane_g4

0x0003,

0xfdbf,	// (0x0002acec) vkb2_top_grid_right_pane_g_ParamLimits

0xfdbf,	// (0x0002acec) vkb2_top_grid_right_pane_g

0x8d60,	// (0x00023c8d) vkb2_top_cell_left_pane_g1

0x8d77,	// (0x00023ca4) vkb2_cell_keypad_pane_g1_ParamLimits

0x8d77,	// (0x00023ca4) vkb2_cell_keypad_pane_g1

0xf3b1,	// (0x0002a2de) vkb2_cell_keypad_pane_t1_ParamLimits

0xf3b1,	// (0x0002a2de) vkb2_cell_keypad_pane_t1

0x8d85,	// (0x00023cb2) vkb2_cell_bottom_grid_pane_ParamLimits

0x8d85,	// (0x00023cb2) vkb2_cell_bottom_grid_pane

0x8dbe,	// (0x00023ceb) vkb2_cell_bottom_grid_pane_g1

0x44ba,	// (0x0001f3e7) aid_call2_pane_cp02

0x44c2,	// (0x0001f3ef) aid_call_pane_cp02

0x44ca,	// (0x0001f3f7) clock_digital_number_pane_cp10

0x44d2,	// (0x0001f3ff) clock_digital_number_pane_cp11

0x44da,	// (0x0001f407) clock_digital_number_pane_cp12

0x44e2,	// (0x0001f40f) clock_digital_number_pane_cp13

0x44ea,	// (0x0001f417) clock_digital_separator_pane_cp10

0x6085,	// (0x00020fb2) popup_clock_digital_analogue_window_cp2_g1

0x6085,	// (0x00020fb2) popup_clock_digital_analogue_window_cp2_g2

0x44f2,	// (0x0001f41f) popup_clock_digital_analogue_window_cp2_g3

0x6085,	// (0x00020fb2) popup_clock_digital_analogue_window_cp2_g4

0x44f2,	// (0x0001f41f) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd74,	// (0x0002aca1) popup_clock_digital_analogue_window_cp2_g

0x44fa,	// (0x0001f427) popup_clock_digital_analogue_window_cp2_t1

0x4508,	// (0x0001f435) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd7f,	// (0x0002acac) popup_clock_digital_analogue_window_cp2_t

0xcbf8,	// (0x00027b25) clock_digital_number_pane_cp10_g1

0xcbf8,	// (0x00027b25) clock_digital_number_pane_cp10_g2

0x0001,

0xfb62,	// (0x0002aa8f) clock_digital_number_pane_cp10_g

0xcbf8,	// (0x00027b25) clock_digital_separator_pane_cp10_g1

0xcbf8,	// (0x00027b25) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb62,	// (0x0002aa8f) clock_digital_separator_pane_cp10_g

0xf19c,	// (0x0002a0c9) uniindi_top_pane_g3

0xf1ad,	// (0x0002a0da) uniindi_top_pane_g4

0x8baa,	// (0x00023ad7) vkb2_row_keypad_pane_ParamLimits

0x8baa,	// (0x00023ad7) vkb2_row_keypad_pane

0x8dda,	// (0x00023d07) vkb2_cell_t_keypad_pane_ParamLimits

0x8dda,	// (0x00023d07) vkb2_cell_t_keypad_pane

0x8de7,	// (0x00023d14) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x8de7,	// (0x00023d14) vkb2_cell_t_keypad_pane_cp08

0x8df7,	// (0x00023d24) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x8df7,	// (0x00023d24) vkb2_cell_t_keypad_pane_cp09

0x8e08,	// (0x00023d35) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x8e08,	// (0x00023d35) vkb2_cell_t_keypad_pane_cp01

0x8e18,	// (0x00023d45) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x8e18,	// (0x00023d45) vkb2_cell_t_keypad_pane_cp02

0x8e28,	// (0x00023d55) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x8e28,	// (0x00023d55) vkb2_cell_t_keypad_pane_cp03

0x8e38,	// (0x00023d65) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x8e38,	// (0x00023d65) vkb2_cell_t_keypad_pane_cp04

0x8e48,	// (0x00023d75) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x8e48,	// (0x00023d75) vkb2_cell_t_keypad_pane_cp05

0x8e58,	// (0x00023d85) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x8e58,	// (0x00023d85) vkb2_cell_t_keypad_pane_cp06

0x8e68,	// (0x00023d95) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x8e68,	// (0x00023d95) vkb2_cell_t_keypad_pane_cp07

0x8e78,	// (0x00023da5) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x8e78,	// (0x00023da5) vkb2_cell_t_keypad_pane_cp10

0x8698,	// (0x000235c5) vkb2_cell_t_keypad_pane_g1

0xf3c8,	// (0x0002a2f5) vkb2_cell_t_keypad_pane_t1

0x7220,	// (0x0002214d) popup_grid_graphic2_window

0x4b2e,	// (0x0001fa5b) aid_size_cell_graphic2_ParamLimits

0x4b2e,	// (0x0001fa5b) aid_size_cell_graphic2

0x98b4,	// (0x000247e1) bg_popup_window_pane_cp21_ParamLimits

0x98b4,	// (0x000247e1) bg_popup_window_pane_cp21

0x4b60,	// (0x0001fa8d) graphic2_pages_pane_ParamLimits

0x4b60,	// (0x0001fa8d) graphic2_pages_pane

0x4ba9,	// (0x0001fad6) grid_graphic2_control_pane_ParamLimits

0x4ba9,	// (0x0001fad6) grid_graphic2_control_pane

0x4bd7,	// (0x0001fb04) grid_graphic2_pane_ParamLimits

0x4bd7,	// (0x0001fb04) grid_graphic2_pane

0x4c36,	// (0x0001fb63) cell_graphic2_pane

0x4e33,	// (0x0001fd60) main_comp_mode_pane

0xea1e,	// (0x0002994b) list_ai3_gene_pane_ParamLimits

0x41a6,	// (0x0001f0d3) bg_popup_window_pane_cp19_ParamLimits

0xef88,	// (0x00029eb5) bg_touch_area_indi_pane_ParamLimits

0xef88,	// (0x00029eb5) bg_touch_area_indi_pane

0xef9e,	// (0x00029ecb) bg_touch_area_indi_pane_cp01_ParamLimits

0xef9e,	// (0x00029ecb) bg_touch_area_indi_pane_cp01

0xefb4,	// (0x00029ee1) bg_touch_area_indi_pane_cp02_ParamLimits

0xefb4,	// (0x00029ee1) bg_touch_area_indi_pane_cp02

0xefca,	// (0x00029ef7) bg_touch_area_indi_pane_cp03_ParamLimits

0xefca,	// (0x00029ef7) bg_touch_area_indi_pane_cp03

0xefe0,	// (0x00029f0d) popup_slider_window_g1_ParamLimits

0xeffc,	// (0x00029f29) popup_slider_window_g2_ParamLimits

0xf018,	// (0x00029f45) popup_slider_window_g3_ParamLimits

0xfd09,	// (0x0002ac36) popup_slider_window_g_ParamLimits

0xf034,	// (0x00029f61) popup_slider_window_t1_ParamLimits

0xf078,	// (0x00029fa5) small_volume_slider_vertical_pane_ParamLimits

0x4c36,	// (0x0001fb63) cell_graphic2_pane_ParamLimits

0x4c7f,	// (0x0001fbac) bg_button_pane_cp10_ParamLimits

0x4c7f,	// (0x0001fbac) bg_button_pane_cp10

0x4c90,	// (0x0001fbbd) bg_button_pane_cp11_ParamLimits

0x4c90,	// (0x0001fbbd) bg_button_pane_cp11

0x4ca1,	// (0x0001fbce) graphic2_pages_pane_g1_ParamLimits

0x4ca1,	// (0x0001fbce) graphic2_pages_pane_g1

0x4cbc,	// (0x0001fbe9) graphic2_pages_pane_g2_ParamLimits

0x4cbc,	// (0x0001fbe9) graphic2_pages_pane_g2

0x0001,

0xfdcd,	// (0x0002acfa) graphic2_pages_pane_g_ParamLimits

0xfdcd,	// (0x0002acfa) graphic2_pages_pane_g

0x4cd4,	// (0x0001fc01) graphic2_pages_pane_t1_ParamLimits

0x4cd4,	// (0x0001fc01) graphic2_pages_pane_t1

0x4cec,	// (0x0001fc19) cell_graphic2_control_pane_ParamLimits

0x4cec,	// (0x0001fc19) cell_graphic2_control_pane

0x4d06,	// (0x0001fc33) cell_graphic2_pane_g1_ParamLimits

0x4d06,	// (0x0001fc33) cell_graphic2_pane_g1

0xef14,	// (0x00029e41) cell_graphic2_pane_g2_ParamLimits

0xef14,	// (0x00029e41) cell_graphic2_pane_g2

0x4d13,	// (0x0001fc40) cell_graphic2_pane_g3_ParamLimits

0x4d13,	// (0x0001fc40) cell_graphic2_pane_g3

0xef21,	// (0x00029e4e) cell_graphic2_pane_g4_ParamLimits

0xef21,	// (0x00029e4e) cell_graphic2_pane_g4

0x4d20,	// (0x0001fc4d) cell_graphic2_pane_g5_ParamLimits

0x4d20,	// (0x0001fc4d) cell_graphic2_pane_g5

0x0004,

0xfdd2,	// (0x0002acff) cell_graphic2_pane_g_ParamLimits

0xfdd2,	// (0x0002acff) cell_graphic2_pane_g

0x4d40,	// (0x0001fc6d) cell_graphic2_pane_t1_ParamLimits

0x4d40,	// (0x0001fc6d) cell_graphic2_pane_t1

0x9ea8,	// (0x00024dd5) grid_highlight_pane_cp11_ParamLimits

0x9ea8,	// (0x00024dd5) grid_highlight_pane_cp11

0x5b77,	// (0x00020aa4) bg_button_pane_cp05

0x4d57,	// (0x0001fc84) cell_graphic2_control_pane_g1

0xcbf8,	// (0x00027b25) bg_touch_area_indi_pane_g1

0xf3da,	// (0x0002a307) aid_cmod_rocker_key_size

0xf3e4,	// (0x0002a311) aid_cmode_itu_key_size

0xf3ee,	// (0x0002a31b) main_cmode_video_pane

0xf3f6,	// (0x0002a323) main_comp_mode_itu_pane

0xf400,	// (0x0002a32d) main_comp_mode_rocker_pane

0xf408,	// (0x0002a335) cell_cmode_rocker_pane_ParamLimits

0xf408,	// (0x0002a335) cell_cmode_rocker_pane

0xf41a,	// (0x0002a347) cell_cmode_itu_pane_ParamLimits

0xf41a,	// (0x0002a347) cell_cmode_itu_pane

0x5b77,	// (0x00020aa4) bg_button_pane_cp06_ParamLimits

0x5b77,	// (0x00020aa4) bg_button_pane_cp06

0xce40,	// (0x00027d6d) cell_cmode_rocker_pane_g1_ParamLimits

0xce40,	// (0x00027d6d) cell_cmode_rocker_pane_g1

0xf0af,	// (0x00029fdc) cell_cmode_rocker_pane_g2_ParamLimits

0xf0af,	// (0x00029fdc) cell_cmode_rocker_pane_g2

0x0001,

0xfddd,	// (0x0002ad0a) cell_cmode_rocker_pane_g_ParamLimits

0xfddd,	// (0x0002ad0a) cell_cmode_rocker_pane_g

0x4e33,	// (0x0001fd60) bg_button_pane_cp07

0xf42f,	// (0x0002a35c) cell_cmode_itu_pane_g1

0xf438,	// (0x0002a365) cell_cmode_itu_pane_t1

0xf446,	// (0x0002a373) cell_cmode_itu_pane_t2

0x0001,

0xfde2,	// (0x0002ad0f) cell_cmode_itu_pane_t

0xf21e,	// (0x0002a14b) aid_touch_ctrl_left

0xf226,	// (0x0002a153) aid_touch_ctrl_right

0x4e33,	// (0x0001fd60) compa_mode_pane

0x4d64,	// (0x0001fc91) aid_cmod_rocker_key_size_cp

0x4d6e,	// (0x0001fc9b) aid_cmode_itu_key_size_cp

0xf454,	// (0x0002a381) compa_mode_pane_g1

0xf45c,	// (0x0002a389) compa_mode_pane_g2

0xf464,	// (0x0002a391) compa_mode_pane_g3

0x0002,

0xfde7,	// (0x0002ad14) compa_mode_pane_g

0x4d78,	// (0x0001fca5) main_comp_mode_itu_pane_cp

0x4d82,	// (0x0001fcaf) main_comp_mode_rocker_pane_cp

0x4d8c,	// (0x0001fcb9) cell_cmode_itu_pane_cp_ParamLimits

0x4d8c,	// (0x0001fcb9) cell_cmode_itu_pane_cp

0x4da1,	// (0x0001fcce) cell_cmode_rocker_pane_cp_ParamLimits

0x4da1,	// (0x0001fcce) cell_cmode_rocker_pane_cp

0x5b77,	// (0x00020aa4) bg_button_pane_cp06_cp_ParamLimits

0x5b77,	// (0x00020aa4) bg_button_pane_cp06_cp

0xce40,	// (0x00027d6d) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xce40,	// (0x00027d6d) cell_cmode_rocker_pane_g1_cp

0xcbf8,	// (0x00027b25) cell_cmode_rocker_pane_g2_cp

0x4e33,	// (0x0001fd60) bg_button_pane_cp07_cp

0x4db3,	// (0x0001fce0) cell_cmode_itu_pane_g1_cp

0x4dbc,	// (0x0001fce9) cell_cmode_itu_pane_t1_cp

0x4dca,	// (0x0001fcf7) cell_cmode_itu_pane_t2_cp

0x38b7,	// (0x0001e7e4) settings_code_pane_cp2

0x4f23,	// (0x0001fe50) bg_popup_window_pane_cp3_ParamLimits

0x525a,	// (0x00020187) heading_pane_cp3_ParamLimits

0x5266,	// (0x00020193) listscroll_popup_graphic_pane_ParamLimits

0x8453,	// (0x00023380) fep_hwr_aid_pane_ParamLimits

0x88b3,	// (0x000237e0) aid_touch_sctrl_top_ParamLimits

0x88ce,	// (0x000237fb) sctrl_sk_top_pane_g1_ParamLimits

0x8698,	// (0x000235c5) sctrl_sk_top_pane_g2_ParamLimits

0xfd22,	// (0x0002ac4f) sctrl_sk_top_pane_g_ParamLimits

0x88db,	// (0x00023808) sctrl_sk_top_pane_t1_ParamLimits

0x88b3,	// (0x000237e0) aid_touch_sctrl_bottom_ParamLimits

0x88db,	// (0x00023808) sctrl_sk_bottom_pane_t1_ParamLimits

0xf168,	// (0x0002a095) aid_area_touch_clock

0xed44,	// (0x00029c71) aid_vkb2_area_top_pane_cell_ParamLimits

0xed44,	// (0x00029c71) aid_vkb2_area_top_pane_cell

0xedef,	// (0x00029d1c) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xedef,	// (0x00029d1c) aid_vkb2_area_bottom_pane_cell

0xf361,	// (0x0002a28e) popup_char_count_window

0xf46c,	// (0x0002a399) popup_char_count_window_g1

0xf475,	// (0x0002a3a2) popup_char_count_window_g2

0xf47e,	// (0x0002a3ab) popup_char_count_window_g3

0x0002,

0xfdee,	// (0x0002ad1b) popup_char_count_window_g

0xf487,	// (0x0002a3b4) popup_char_count_window_t1

0x898f,	// (0x000238bc) popup_fep_char_preview_window_ParamLimits

0x898f,	// (0x000238bc) popup_fep_char_preview_window

0xed64,	// (0x00029c91) vkb2_top_candi_pane_ParamLimits

0xed64,	// (0x00029c91) vkb2_top_candi_pane

0x4dd8,	// (0x0001fd05) cell_vkb2_top_candi_pane_ParamLimits

0x4dd8,	// (0x0001fd05) cell_vkb2_top_candi_pane

0x8e8d,	// (0x00023dba) bg_popup_fep_char_preview_window_ParamLimits

0x8e8d,	// (0x00023dba) bg_popup_fep_char_preview_window

0x8e9b,	// (0x00023dc8) popup_fep_char_preview_window_t1_ParamLimits

0x8e9b,	// (0x00023dc8) popup_fep_char_preview_window_t1

0xf4b6,	// (0x0002a3e3) bg_popup_fep_char_preview_window_g1

0xf4be,	// (0x0002a3eb) bg_popup_fep_char_preview_window_g2

0xf4c6,	// (0x0002a3f3) bg_popup_fep_char_preview_window_g3

0xf4ce,	// (0x0002a3fb) bg_popup_fep_char_preview_window_g4

0xf4d6,	// (0x0002a403) bg_popup_fep_char_preview_window_g5

0x8ed5,	// (0x00023e02) bg_popup_fep_char_preview_window_g6

0xf4de,	// (0x0002a40b) bg_popup_fep_char_preview_window_g7

0xf4e6,	// (0x0002a413) bg_popup_fep_char_preview_window_g8

0xf4ee,	// (0x0002a41b) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdf5,	// (0x0002ad22) bg_popup_fep_char_preview_window_g

0x8698,	// (0x000235c5) cell_vkb2_top_candi_pane_g1_ParamLimits

0x8698,	// (0x000235c5) cell_vkb2_top_candi_pane_g1

0x86a6,	// (0x000235d3) cell_vkb2_top_candi_pane_g2_ParamLimits

0x86a6,	// (0x000235d3) cell_vkb2_top_candi_pane_g2

0xf495,	// (0x0002a3c2) cell_vkb2_top_candi_pane_g3_ParamLimits

0xf495,	// (0x0002a3c2) cell_vkb2_top_candi_pane_g3

0x8edd,	// (0x00023e0a) cell_vkb2_top_candi_pane_g4_ParamLimits

0x8edd,	// (0x00023e0a) cell_vkb2_top_candi_pane_g4

0xd1fe,	// (0x0002812b) cell_vkb2_top_candi_pane_g5_ParamLimits

0xd1fe,	// (0x0002812b) cell_vkb2_top_candi_pane_g5

0x8efe,	// (0x00023e2b) cell_vkb2_top_candi_pane_g6_ParamLimits

0x8efe,	// (0x00023e2b) cell_vkb2_top_candi_pane_g6

0x0005,

0xfe08,	// (0x0002ad35) cell_vkb2_top_candi_pane_g_ParamLimits

0xfe08,	// (0x0002ad35) cell_vkb2_top_candi_pane_g

0x8f0c,	// (0x00023e39) cell_vkb2_top_candi_pane_t1

0x826b,	// (0x00023198) aid_size_touch_slider_mark_ParamLimits

0x826b,	// (0x00023198) aid_size_touch_slider_mark

0x4b94,	// (0x0001fac1) grid_graphic2_catg_pane_ParamLimits

0x4b94,	// (0x0001fac1) grid_graphic2_catg_pane

0x4c0b,	// (0x0001fb38) popup_grid_graphic2_window_t1_ParamLimits

0x4c0b,	// (0x0001fb38) popup_grid_graphic2_window_t1

0x4c20,	// (0x0001fb4d) popup_grid_graphic2_window_t2_ParamLimits

0x4c20,	// (0x0001fb4d) popup_grid_graphic2_window_t2

0x0001,

0xfdc8,	// (0x0002acf5) popup_grid_graphic2_window_t_ParamLimits

0xfdc8,	// (0x0002acf5) popup_grid_graphic2_window_t

0x5b77,	// (0x00020aa4) bg_button_pane_cp05_ParamLimits

0x4d57,	// (0x0001fc84) cell_graphic2_control_pane_g1_ParamLimits

0xf1e4,	// (0x0002a111) cell_graphic2_catg_pane_ParamLimits

0xf1e4,	// (0x0002a111) cell_graphic2_catg_pane

0x4e33,	// (0x0001fd60) bg_button_pane_cp12

0x4e22,	// (0x0001fd4f) cell_graphic2_catg_pane_g1

0xf134,	// (0x0002a061) cell_tb_ext_pane_t1_ParamLimits

0x8cd7,	// (0x00023c04) vkb2_top_cell_right_narrow_pane_ParamLimits

0x8cd7,	// (0x00023c04) vkb2_top_cell_right_narrow_pane

0x8cef,	// (0x00023c1c) vkb2_top_cell_right_wide_pane_ParamLimits

0x8cef,	// (0x00023c1c) vkb2_top_cell_right_wide_pane

0x8445,	// (0x00023372) bg_vkb2_func_pane_ParamLimits

0x8445,	// (0x00023372) bg_vkb2_func_pane

0x8d60,	// (0x00023c8d) vkb2_top_cell_left_pane_g1_ParamLimits

0x8445,	// (0x00023372) bg_vkb2_fuc_pane_cp03_ParamLimits

0x8445,	// (0x00023372) bg_vkb2_fuc_pane_cp03

0x8dbe,	// (0x00023ceb) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x9356,	// (0x00024283) bg_vkb2_func_pane_g1

0x935e,	// (0x0002428b) bg_vkb2_func_pane_g2

0x936e,	// (0x0002429b) bg_vkb2_func_pane_g3

0x9366,	// (0x00024293) bg_vkb2_func_pane_g4

0x9376,	// (0x000242a3) bg_vkb2_func_pane_g5

0x937e,	// (0x000242ab) bg_vkb2_func_pane_g6

0x9386,	// (0x000242b3) bg_vkb2_func_pane_g7

0x938e,	// (0x000242bb) bg_vkb2_func_pane_g8

0x934e,	// (0x0002427b) bg_vkb2_func_pane_g9

0x0008,

0xfe15,	// (0x0002ad42) bg_vkb2_func_pane_g

0x8445,	// (0x00023372) bg_vkb2_fuc_pane_cp01_ParamLimits

0x8445,	// (0x00023372) bg_vkb2_fuc_pane_cp01

0x8d60,	// (0x00023c8d) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x8d60,	// (0x00023c8d) vkb2_top_cell_right_wide_pane_g1

0x8445,	// (0x00023372) bg_vkb2_fuc_pane_cp02_ParamLimits

0x8445,	// (0x00023372) bg_vkb2_fuc_pane_cp02

0x8dbe,	// (0x00023ceb) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x8dbe,	// (0x00023ceb) vkb2_top_cell_right_narrow_pane_g1

0x40f4,	// (0x0001f021) aid_touch_area_decrease_ParamLimits

0x40f4,	// (0x0001f021) aid_touch_area_decrease

0x4122,	// (0x0001f04f) aid_touch_area_increase_ParamLimits

0x4122,	// (0x0001f04f) aid_touch_area_increase

0x414a,	// (0x0001f077) aid_touch_area_mute_ParamLimits

0x414a,	// (0x0001f077) aid_touch_area_mute

0x4172,	// (0x0001f09f) aid_touch_area_slider_ParamLimits

0x4172,	// (0x0001f09f) aid_touch_area_slider

0x41b2,	// (0x0001f0df) popup_slider_window_g4_ParamLimits

0x41b2,	// (0x0001f0df) popup_slider_window_g4

0x41da,	// (0x0001f107) popup_slider_window_g5_ParamLimits

0x41da,	// (0x0001f107) popup_slider_window_g5

0x420e,	// (0x0001f13b) popup_slider_window_g6_ParamLimits

0x420e,	// (0x0001f13b) popup_slider_window_g6

0xf060,	// (0x00029f8d) popup_slider_window_t2_ParamLimits

0xf060,	// (0x00029f8d) popup_slider_window_t2

0x0001,

0xfd16,	// (0x0002ac43) popup_slider_window_t_ParamLimits

0xfd16,	// (0x0002ac43) popup_slider_window_t

0x422a,	// (0x0001f157) slider_pane_ParamLimits

0x422a,	// (0x0001f157) slider_pane

0xf4f6,	// (0x0002a423) slider_pane_g1_ParamLimits

0xf4f6,	// (0x0002a423) slider_pane_g1

0xf50a,	// (0x0002a437) slider_pane_g2_ParamLimits

0xf50a,	// (0x0002a437) slider_pane_g2

0xf520,	// (0x0002a44d) slider_pane_g3_ParamLimits

0xf520,	// (0x0002a44d) slider_pane_g3

0x0003,

0xfe28,	// (0x0002ad55) slider_pane_g_ParamLimits

0xfe28,	// (0x0002ad55) slider_pane_g

0x2f4f,	// (0x0001de7c) popup_tb_float_extension_window_ParamLimits

0x2f4f,	// (0x0001de7c) popup_tb_float_extension_window

0xf54c,	// (0x0002a479) aid_size_cell_tb_float_ext

0x4e33,	// (0x0001fd60) bg_popup_sub_window_cp28

0xf557,	// (0x0002a484) grid_tb_float_ext_pane

0xf55f,	// (0x0002a48c) cell_tb_float_ext_pane_ParamLimits

0xf55f,	// (0x0002a48c) cell_tb_float_ext_pane

0xf577,	// (0x0002a4a4) cell_tb_float_ext_pane_g1

0xf580,	// (0x0002a4ad) grid_highlight_pane_cp12

0xe4cb,	// (0x000293f8) cell_last_hwr_side_pane_ParamLimits

0xe4cb,	// (0x000293f8) cell_last_hwr_side_pane

0xcbf8,	// (0x00027b25) cell_last_hwr_side_pane_g1

0xf589,	// (0x0002a4b6) cell_last_hwr_side_pane_g2

0x0001,

0xfe31,	// (0x0002ad5e) cell_last_hwr_side_pane_g

0xeec3,	// (0x00029df0) vkb2_area_bottom_space_btn_pane_ParamLimits

0xeec3,	// (0x00029df0) vkb2_area_bottom_space_btn_pane

0x8698,	// (0x000235c5) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xf3c8,	// (0x0002a2f5) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x8f0c,	// (0x00023e39) cell_vkb2_top_candi_pane_t1_ParamLimits

0x8f22,	// (0x00023e4f) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x8f22,	// (0x00023e4f) vkb2_area_bottom_space_btn_pane_g1

0x8f58,	// (0x00023e85) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x8f58,	// (0x00023e85) vkb2_area_bottom_space_btn_pane_g2

0x8f8e,	// (0x00023ebb) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x8f8e,	// (0x00023ebb) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe36,	// (0x0002ad63) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe36,	// (0x0002ad63) vkb2_area_bottom_space_btn_pane_g

0x8502,	// (0x0002342f) cel_fep_hwr_func_pane_ParamLimits

0x8502,	// (0x0002342f) cel_fep_hwr_func_pane

0xe4a0,	// (0x000293cd) cell_hwr_side_button_pane_ParamLimits

0xe4a0,	// (0x000293cd) cell_hwr_side_button_pane

0xf168,	// (0x0002a095) aid_area_touch_clock_ParamLimits

0x5082,	// (0x0001ffaf) bg_uniindi_top_pane_ParamLimits

0xf17a,	// (0x0002a0a7) uniindi_top_pane_g1_ParamLimits

0xf190,	// (0x0002a0bd) uniindi_top_pane_g2_ParamLimits

0xf19c,	// (0x0002a0c9) uniindi_top_pane_g3_ParamLimits

0xf1ad,	// (0x0002a0da) uniindi_top_pane_g4_ParamLimits

0xfd4e,	// (0x0002ac7b) uniindi_top_pane_g_ParamLimits

0xf1ba,	// (0x0002a0e7) uniindi_top_pane_t1_ParamLimits

0x5082,	// (0x0001ffaf) bg_vkb2_func_pane_cp01_ParamLimits

0x5082,	// (0x0001ffaf) bg_vkb2_func_pane_cp01

0x0056,	// (0x0001af83) cel_fep_hwr_func_pane_g1_ParamLimits

0x0056,	// (0x0001af83) cel_fep_hwr_func_pane_g1

0x5082,	// (0x0001ffaf) bg_vkb2_func_pane_cp02_ParamLimits

0x5082,	// (0x0001ffaf) bg_vkb2_func_pane_cp02

0x0056,	// (0x0001af83) cell_hwr_side_button_pane_g1_ParamLimits

0x0056,	// (0x0001af83) cell_hwr_side_button_pane_g1

0x9272,	// (0x0002419f) status_pane_g4_ParamLimits

0x9272,	// (0x0002419f) status_pane_g4

0x928a,	// (0x000241b7) status_pane_t1

0xc9ea,	// (0x00027917) form2_midp_gauge_slider_cont_pane

0xc9f2,	// (0x0002791f) form2_midp_gauge_slider_pane_t1_ParamLimits

0x3b89,	// (0x0001eab6) form2_midp_gauge_slider_pane_t2_ParamLimits

0x3b9b,	// (0x0001eac8) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb15,	// (0x0002aa42) form2_midp_gauge_slider_pane_t_ParamLimits

0xca28,	// (0x00027955) form2_midp_slider_pane_ParamLimits

0x894f,	// (0x0002387c) aid_size_cell_func_vkb2_ParamLimits

0x894f,	// (0x0002387c) aid_size_cell_func_vkb2

0xf538,	// (0x0002a465) slider_pane_g4_ParamLimits

0xf538,	// (0x0002a465) slider_pane_g4

0xef2e,	// (0x00029e5b) form2_midp_gauge_slider_pane_t2_cp01

0xef3c,	// (0x00029e69) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xef3c,	// (0x00029e69) form2_midp_gauge_slider_pane_t3_cp01

0x8fff,	// (0x00023f2c) form2_midp_slider_pane_cp01

0x4e33,	// (0x0001fd60) navi_smil_pane

0x00c3,	// (0x0001aff0) navi_smil_pane_g1

0x00cb,	// (0x0001aff8) navi_smil_pane_t1

0x0098,	// (0x0001afc5) form2_midp_slider_pane_g1

0x00a1,	// (0x0001afce) form2_midp_slider_pane_g2

0x00a9,	// (0x0001afd6) form2_midp_slider_pane_g3

0x0098,	// (0x0001afc5) form2_midp_slider_pane_g4

0x54b2,	// (0x000203df) form2_midp_slider_pane_g5

0x0004,

0xfe3f,	// (0x0002ad6c) form2_midp_slider_pane_g

0x8fc4,	// (0x00023ef1) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x8fc4,	// (0x00023ef1) vkb2_area_bottom_space_btn_pane_g4

0x30f1,	// (0x0001e01e) lc0_navi_pane_ParamLimits

0x30f1,	// (0x0001e01e) lc0_navi_pane

0x315b,	// (0x0001e088) lc0_stat_indi_pane_ParamLimits

0x315b,	// (0x0001e088) lc0_stat_indi_pane

0x3170,	// (0x0001e09d) ls0_title_pane_ParamLimits

0x3170,	// (0x0001e09d) ls0_title_pane

0x5b77,	// (0x00020aa4) bg_popup_sub_pane_cp14_ParamLimits

0xf14f,	// (0x0002a07c) list_uniindi_pane_ParamLimits

0xf15b,	// (0x0002a088) uniindi_top_pane_ParamLimits

0xf1f6,	// (0x0002a123) list_single_uniindi_pane_g1_ParamLimits

0xf209,	// (0x0002a136) list_single_uniindi_pane_t1_ParamLimits

0xef59,	// (0x00029e86) lc0_stat_clock_pane_ParamLimits

0xef59,	// (0x00029e86) lc0_stat_clock_pane

0x54d5,	// (0x00020402) lc0_stat_indi_pane_g1_ParamLimits

0x54d5,	// (0x00020402) lc0_stat_indi_pane_g1

0x54c8,	// (0x000203f5) lc0_stat_indi_pane_g2_ParamLimits

0x54c8,	// (0x000203f5) lc0_stat_indi_pane_g2

0x0001,

0xfe4a,	// (0x0002ad77) lc0_stat_indi_pane_g_ParamLimits

0xfe4a,	// (0x0002ad77) lc0_stat_indi_pane_g

0xef66,	// (0x00029e93) lc0_uni_indicator_pane_ParamLimits

0xef66,	// (0x00029e93) lc0_uni_indicator_pane

0x010d,	// (0x0001b03a) ls0_title_pane_g1_ParamLimits

0x010d,	// (0x0001b03a) ls0_title_pane_g1

0x54ef,	// (0x0002041c) ls0_title_pane_t1_ParamLimits

0x54ef,	// (0x0002041c) ls0_title_pane_t1

0xef73,	// (0x00029ea0) lc0_uni_indicator_pane_g1_ParamLimits

0xef73,	// (0x00029ea0) lc0_uni_indicator_pane_g1

0x0169,	// (0x0001b096) lc0_stat_clock_pane_t1

0x4e33,	// (0x0001fd60) main_ai5_pane

0x0177,	// (0x0001b0a4) ai5_sk_pane_ParamLimits

0x0177,	// (0x0001b0a4) ai5_sk_pane

0x5532,	// (0x0002045f) cell_ai5_widget_pane_ParamLimits

0x5532,	// (0x0002045f) cell_ai5_widget_pane

0x5599,	// (0x000204c6) aid_size_cell_widget_grid

0x01f3,	// (0x0001b120) bg_ai5_widget_pane_ParamLimits

0x01f3,	// (0x0001b120) bg_ai5_widget_pane

0x55c8,	// (0x000204f5) cell_ai5_widget_pane_g2

0x55d8,	// (0x00020505) cell_ai5_widget_pane_g3

0x55ec,	// (0x00020519) cell_ai5_widget_pane_g4

0x55f8,	// (0x00020525) cell_ai5_widget_pane_g5

0x5604,	// (0x00020531) cell_ai5_widget_pane_g6

0x5610,	// (0x0002053d) cell_ai5_widget_pane_g7

0x5658,	// (0x00020585) cell_ai5_widget_pane_t1_ParamLimits

0x5658,	// (0x00020585) cell_ai5_widget_pane_t1

0x5675,	// (0x000205a2) cell_ai5_widget_pane_t2_ParamLimits

0x5675,	// (0x000205a2) cell_ai5_widget_pane_t2

0x568d,	// (0x000205ba) cell_ai5_widget_pane_t3_ParamLimits

0x568d,	// (0x000205ba) cell_ai5_widget_pane_t3

0x56a5,	// (0x000205d2) cell_ai5_widget_pane_t4_ParamLimits

0x56a5,	// (0x000205d2) cell_ai5_widget_pane_t4

0x56bf,	// (0x000205ec) cell_ai5_widget_pane_t5_ParamLimits

0x56bf,	// (0x000205ec) cell_ai5_widget_pane_t5

0x0331,	// (0x0001b25e) cell_ai5_widget_pane_t6_ParamLimits

0x0331,	// (0x0001b25e) cell_ai5_widget_pane_t6

0x0343,	// (0x0001b270) cell_ai5_widget_pane_t7_ParamLimits

0x0343,	// (0x0001b270) cell_ai5_widget_pane_t7

0x56de,	// (0x0002060b) cell_ai5_widget_pane_t8_ParamLimits

0x56de,	// (0x0002060b) cell_ai5_widget_pane_t8

0x0009,

0xfe64,	// (0x0002ad91) cell_ai5_widget_pane_t_ParamLimits

0xfe64,	// (0x0002ad91) cell_ai5_widget_pane_t

0x5726,	// (0x00020653) grid_ai5_widget_pane

0x5b77,	// (0x00020aa4) highlight_cell_ai5_widget_pane_ParamLimits

0x5b77,	// (0x00020aa4) highlight_cell_ai5_widget_pane

0x573a,	// (0x00020667) ai5_sk_left_pane

0x5744,	// (0x00020671) ai5_sk_middle_pane

0x574e,	// (0x0002067b) ai5_sk_right_pane

0x03d8,	// (0x0001b305) bg_ai5_widget_pane_g1_ParamLimits

0x03d8,	// (0x0001b305) bg_ai5_widget_pane_g1

0x03e4,	// (0x0001b311) bg_ai5_widget_pane_g2_ParamLimits

0x03e4,	// (0x0001b311) bg_ai5_widget_pane_g2

0x03f0,	// (0x0001b31d) bg_ai5_widget_pane_g3_ParamLimits

0x03f0,	// (0x0001b31d) bg_ai5_widget_pane_g3

0x03fc,	// (0x0001b329) bg_ai5_widget_pane_g4_ParamLimits

0x03fc,	// (0x0001b329) bg_ai5_widget_pane_g4

0x0408,	// (0x0001b335) bg_ai5_widget_pane_g5_ParamLimits

0x0408,	// (0x0001b335) bg_ai5_widget_pane_g5

0x0414,	// (0x0001b341) bg_ai5_widget_pane_g6_ParamLimits

0x0414,	// (0x0001b341) bg_ai5_widget_pane_g6

0x0420,	// (0x0001b34d) bg_ai5_widget_pane_g7_ParamLimits

0x0420,	// (0x0001b34d) bg_ai5_widget_pane_g7

0x042c,	// (0x0001b359) bg_ai5_widget_pane_g8_ParamLimits

0x042c,	// (0x0001b359) bg_ai5_widget_pane_g8

0x0438,	// (0x0001b365) bg_ai5_widget_pane_g9_ParamLimits

0x0438,	// (0x0001b365) bg_ai5_widget_pane_g9

0x0008,

0xfe79,	// (0x0002ada6) bg_ai5_widget_pane_g_ParamLimits

0xfe79,	// (0x0002ada6) bg_ai5_widget_pane_g

0x5758,	// (0x00020685) cell_shortcut_ai5_widget_pane_ParamLimits

0x5758,	// (0x00020685) cell_shortcut_ai5_widget_pane

0x4f8b,	// (0x0001feb8) bg_cell_shortcut_ai5_widget_pane

0x5769,	// (0x00020696) cell_grid_ai5_widget_pane_g1

0x047a,	// (0x0001b3a7) highlight_cell_shortcut_ai5_widget_pane

0x9356,	// (0x00024283) ai5_sk_left_pane_g1

0x0482,	// (0x0001b3af) ai5_sk_left_pane_g2

0x048a,	// (0x0001b3b7) ai5_sk_left_pane_g3

0x0492,	// (0x0001b3bf) ai5_sk_left_pane_g4

0x0003,

0xfe8c,	// (0x0002adb9) ai5_sk_left_pane_g

0x049a,	// (0x0001b3c7) ai5_sk_left_pane_t1

0x935e,	// (0x0002428b) ai5_sk_right_pane_g1

0x04a8,	// (0x0001b3d5) ai5_sk_right_pane_g2

0x04b0,	// (0x0001b3dd) ai5_sk_right_pane_g3

0x04b8,	// (0x0001b3e5) ai5_sk_right_pane_g4

0x0003,

0xfe95,	// (0x0002adc2) ai5_sk_right_pane_g

0x04c0,	// (0x0001b3ed) ai5_sk_right_pane_t1

0x935e,	// (0x0002428b) ai5_sk_middle_pane_g1

0x9356,	// (0x00024283) ai5_sk_middle_pane_g2

0x9376,	// (0x000242a3) ai5_sk_middle_pane_g3

0x04b0,	// (0x0001b3dd) ai5_sk_middle_pane_g4

0x048a,	// (0x0001b3b7) ai5_sk_middle_pane_g5

0x04ce,	// (0x0001b3fb) ai5_sk_middle_pane_g6

0x5772,	// (0x0002069f) ai5_sk_middle_pane_g7

0x0006,

0xfe9e,	// (0x0002adcb) ai5_sk_middle_pane_g

0x2fef,	// (0x0001df1c) aid_touch_area_size_lc0_ParamLimits

0x2fef,	// (0x0001df1c) aid_touch_area_size_lc0

0x86c7,	// (0x000235f4) cell_hwr_candidate_pane_t1_ParamLimits

0x91a7,	// (0x000240d4) aid_touch_navi_pane

0x325c,	// (0x0001e189) status_dt_navi_pane_ParamLimits

0x325c,	// (0x0001e189) status_dt_navi_pane

0x3274,	// (0x0001e1a1) status_dt_sta_pane_ParamLimits

0x3274,	// (0x0001e1a1) status_dt_sta_pane

0x577a,	// (0x000206a7) dt_sta_controll_pane

0x5787,	// (0x000206b4) dt_sta_indi_pane

0x5794,	// (0x000206c1) dt_sta_title_pane

0x5082,	// (0x0001ffaf) bg_dt_sta_indi_pane_ParamLimits

0x5082,	// (0x0001ffaf) bg_dt_sta_indi_pane

0x57a6,	// (0x000206d3) dt_sta_battery_pane

0x57ae,	// (0x000206db) dt_sta_indi_pane_g1

0x57b7,	// (0x000206e4) dt_sta_indi_pane_g2

0x57c0,	// (0x000206ed) dt_sta_indi_pane_g3

0x0002,

0xfead,	// (0x0002adda) dt_sta_indi_pane_g

0x57c9,	// (0x000206f6) dt_sta_signal_pane

0x5b77,	// (0x00020aa4) bg_dt_sta_title_pane_ParamLimits

0x5b77,	// (0x00020aa4) bg_dt_sta_title_pane

0x57d2,	// (0x000206ff) dt_sta_title_pane_g1

0x57da,	// (0x00020707) dt_sta_title_pane_t1_ParamLimits

0x57da,	// (0x00020707) dt_sta_title_pane_t1

0x4e33,	// (0x0001fd60) bg_dt_sta_control_pane

0x57ef,	// (0x0002071c) dt_sta_controll_pane_g1

0x57f8,	// (0x00020725) bg_dt_sta_title_pane_g1

0x5801,	// (0x0002072e) bg_dt_sta_title_pane_g2

0x580a,	// (0x00020737) bg_dt_sta_title_pane_g3

0x0002,

0xfeb4,	// (0x0002ade1) bg_dt_sta_title_pane_g

0xcbf8,	// (0x00027b25) bg_dt_sta_indi_pane_g1

0x5813,	// (0x00020740) dt_sta_signal_pane_g1

0x581b,	// (0x00020748) dt_sta_signal_pane_g2

0x0001,

0xfebb,	// (0x0002ade8) dt_sta_signal_pane_g

0x058c,	// (0x0001b4b9) dt_sta_battery_pane_g1

0x0595,	// (0x0001b4c2) dt_sta_battery_pane_t1

0xcbf8,	// (0x00027b25) bg_dt_sta_control_pane_g1

0x6100,	// (0x0002102d) fep_china_uni_eep_pane

0x6108,	// (0x00021035) fep_china_uni_entry_pane_ParamLimits

0x6118,	// (0x00021045) popup_fep_china_uni_window_g1_ParamLimits

0x6128,	// (0x00021055) popup_fep_china_uni_window_g2_ParamLimits

0x6128,	// (0x00021055) popup_fep_china_uni_window_g2

0x0001,

0xf75d,	// (0x0002a68a) popup_fep_china_uni_window_g_ParamLimits

0xf75d,	// (0x0002a68a) popup_fep_china_uni_window_g

0x05a4,	// (0x0001b4d1) fep_china_uni_eep_pane_g1

0x05ac,	// (0x0001b4d9) fep_china_uni_eep_pane_t1

0x00ba,	// (0x0001afe7) aid_touch_area_size_smil_player

0x9245,	// (0x00024172) lc0_clock_pane

0x927e,	// (0x000241ab) status_pane_g5_ParamLimits

0x927e,	// (0x000241ab) status_pane_g5

0x2b83,	// (0x0001dab0) popup_keymap_window

0x925e,	// (0x0002418b) status_icon_pane

0x55d8,	// (0x00020505) cell_ai5_widget_pane_g3_ParamLimits

0x55ec,	// (0x00020519) cell_ai5_widget_pane_g4_ParamLimits

0x55f8,	// (0x00020525) cell_ai5_widget_pane_g5_ParamLimits

0x561c,	// (0x00020549) cell_ai5_widget_pane_g8_ParamLimits

0x561c,	// (0x00020549) cell_ai5_widget_pane_g8

0x5630,	// (0x0002055d) cell_ai5_widget_pane_g9_ParamLimits

0x5630,	// (0x0002055d) cell_ai5_widget_pane_g9

0x5644,	// (0x00020571) cell_ai5_widget_pane_g10_ParamLimits

0x5644,	// (0x00020571) cell_ai5_widget_pane_g10

0x05bb,	// (0x0001b4e8) status_icon_pane_g1

0x4e33,	// (0x0001fd60) bg_popup_sub_pane_cp13

0x05c3,	// (0x0001b4f0) popup_keymap_window_t1

0x290e,	// (0x0001d83b) control_pane_g6_ParamLimits

0x290e,	// (0x0001d83b) control_pane_g6

0x2901,	// (0x0001d82e) control_pane_g7_ParamLimits

0x2901,	// (0x0001d82e) control_pane_g7

0x28f4,	// (0x0001d821) control_pane_g8_ParamLimits

0x28f4,	// (0x0001d821) control_pane_g8

0x577a,	// (0x000206a7) dt_sta_controll_pane_ParamLimits

0x5787,	// (0x000206b4) dt_sta_indi_pane_ParamLimits

0x5794,	// (0x000206c1) dt_sta_title_pane_ParamLimits

0x5414,	// (0x00020341) aid_size_touch_scroll_bar_cale

0x72f7,	// (0x00022224) popup_discreet_window_ParamLimits

0x72f7,	// (0x00022224) popup_discreet_window

0xe0d6,	// (0x00029003) popup_sk_window

0x98b4,	// (0x000247e1) bg_popup_sub_pane_cp28_ParamLimits

0x98b4,	// (0x000247e1) bg_popup_sub_pane_cp28

0x05d1,	// (0x0001b4fe) popup_discreet_window_g1_ParamLimits

0x05d1,	// (0x0001b4fe) popup_discreet_window_g1

0x05f1,	// (0x0001b51e) popup_discreet_window_t1_ParamLimits

0x05f1,	// (0x0001b51e) popup_discreet_window_t1

0x060f,	// (0x0001b53c) popup_discreet_window_t2_ParamLimits

0x060f,	// (0x0001b53c) popup_discreet_window_t2

0x0002,

0xfec0,	// (0x0002aded) popup_discreet_window_t_ParamLimits

0xfec0,	// (0x0002aded) popup_discreet_window_t

0x9034,	// (0x00023f61) popup_sk_window_g1

0x903d,	// (0x00023f6a) popup_sk_window_g2

0x0001,

0xfec7,	// (0x0002adf4) popup_sk_window_g

0x0681,	// (0x0001b5ae) popup_sk_window_t1

0x0673,	// (0x0001b5a0) popup_sk_window_t1_copy1

0x55c8,	// (0x000204f5) cell_ai5_widget_pane_g2_ParamLimits

0x56f0,	// (0x0002061d) cell_ai5_widget_pane_t9_ParamLimits

0x56f0,	// (0x0002061d) cell_ai5_widget_pane_t9

0x4e33,	// (0x0001fd60) main_fep_fshwr2_pane

0x5823,	// (0x00020750) aid_fshwr2_btn_pane

0x582b,	// (0x00020758) aid_fshwr2_syb_pane

0x5833,	// (0x00020760) aid_fshwr2_txt_pane

0x583b,	// (0x00020768) fshwr2_func_candi_pane

0x5843,	// (0x00020770) fshwr2_hwr_syb_pane

0x584b,	// (0x00020778) fshwr2_icf_pane

0x4e33,	// (0x0001fd60) fshwr2_icf_bg_pane

0x5853,	// (0x00020780) fshwr2_icf_pane_t1_ParamLimits

0x5853,	// (0x00020780) fshwr2_icf_pane_t1

0xcbf8,	// (0x00027b25) fshwr2_func_candi_pane_g1

0x06e8,	// (0x0001b615) fshwr2_func_candi_row_pane_ParamLimits

0x06e8,	// (0x0001b615) fshwr2_func_candi_row_pane

0x586b,	// (0x00020798) cell_fshwr2_syb_pane_ParamLimits

0x586b,	// (0x00020798) cell_fshwr2_syb_pane

0xce40,	// (0x00027d6d) fshwr2_hwr_syb_pane_g1_ParamLimits

0xce40,	// (0x00027d6d) fshwr2_hwr_syb_pane_g1

0x4e33,	// (0x0001fd60) bg_popup_call_pane_cp01

0x0710,	// (0x0001b63d) fshwr2_func_candi_cell_pane_ParamLimits

0x0710,	// (0x0001b63d) fshwr2_func_candi_cell_pane

0x073b,	// (0x0001b668) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x073b,	// (0x0001b668) fshwr2_func_candi_cell_bg_pane

0x0755,	// (0x0001b682) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x0755,	// (0x0001b682) fshwr2_func_candi_cell_pane_g1

0x0775,	// (0x0001b6a2) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x0775,	// (0x0001b6a2) fshwr2_func_candi_cell_pane_t1

0x4e33,	// (0x0001fd60) bg_button_pane_cp08

0x6530,	// (0x0002145d) cell_fshwr2_syb_bg_pane

0x5882,	// (0x000207af) cell_fshwr2_syb_bg_pane_g1

0x588a,	// (0x000207b7) cell_fshwr2_syb_bg_pane_t1

0x5b77,	// (0x00020aa4) main_tmo_pane

0x36c6,	// (0x0001e5f3) uni_indicator_pane_g1_ParamLimits

0x36db,	// (0x0001e608) uni_indicator_pane_g2_ParamLimits

0x36f1,	// (0x0001e61e) uni_indicator_pane_g3_ParamLimits

0xa281,	// (0x000251ae) uni_indicator_pane_g4_ParamLimits

0xa281,	// (0x000251ae) uni_indicator_pane_g4

0xa295,	// (0x000251c2) uni_indicator_pane_g5_ParamLimits

0xa295,	// (0x000251c2) uni_indicator_pane_g5

0xa2a9,	// (0x000251d6) uni_indicator_pane_g6_ParamLimits

0xa2a9,	// (0x000251d6) uni_indicator_pane_g6

0xf94e,	// (0x0002a87b) uni_indicator_pane_g_ParamLimits

0x40d8,	// (0x0001f005) popup_tmo_note_window_ParamLimits

0x40d8,	// (0x0001f005) popup_tmo_note_window

0x4e33,	// (0x0001fd60) fshwr2_bg_pane

0x0766,	// (0x0001b693) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x0766,	// (0x0001b693) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfecc,	// (0x0002adf9) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfecc,	// (0x0002adf9) fshwr2_func_candi_cell_pane_g

0xcbf8,	// (0x00027b25) bg_popup_window_pane_cp01

0x079f,	// (0x0001b6cc) bg_popup_window_pane_g1_cp01

0x07a8,	// (0x0001b6d5) bg_popup_window_pane_cp22_ParamLimits

0x07a8,	// (0x0001b6d5) bg_popup_window_pane_cp22

0x07b6,	// (0x0001b6e3) listscroll_tmo_link_pane_ParamLimits

0x07b6,	// (0x0001b6e3) listscroll_tmo_link_pane

0x07f6,	// (0x0001b723) popup_tmo_note_window_g1_ParamLimits

0x07f6,	// (0x0001b723) popup_tmo_note_window_g1

0x0803,	// (0x0001b730) tmo_note_info_pane_ParamLimits

0x0803,	// (0x0001b730) tmo_note_info_pane

0x5899,	// (0x000207c6) list_tmo_note_info_pane_g1_ParamLimits

0x5899,	// (0x000207c6) list_tmo_note_info_pane_g1

0x0834,	// (0x0001b761) list_tmo_note_info_pane_g2_ParamLimits

0x0834,	// (0x0001b761) list_tmo_note_info_pane_g2

0x0001,

0xfed1,	// (0x0002adfe) list_tmo_note_info_pane_g_ParamLimits

0xfed1,	// (0x0002adfe) list_tmo_note_info_pane_g

0x0850,	// (0x0001b77d) list_tmo_note_info_text_pane_ParamLimits

0x0850,	// (0x0001b77d) list_tmo_note_info_text_pane

0x08d1,	// (0x0001b7fe) list_tmo_link_pane

0x08de,	// (0x0001b80b) scroll_pane_cp20

0x08eb,	// (0x0001b818) list_single_tmo_link_pane_ParamLimits

0x08eb,	// (0x0001b818) list_single_tmo_link_pane

0x08fb,	// (0x0001b828) list_single_tmo_link_pane_t1

0x0909,	// (0x0001b836) list_tmo_note_info_text_pane_t1_ParamLimits

0x0909,	// (0x0001b836) list_tmo_note_info_text_pane_t1

0x5c39,	// (0x00020b66) aid_size_touch_scroll_bar_cp01_ParamLimits

0x5c39,	// (0x00020b66) aid_size_touch_scroll_bar_cp01

0x1c8c,	// (0x0001cbb9) aid_size_touch_slider_marker

0xe0ca,	// (0x00028ff7) popup_settings_window_ParamLimits

0xe0ca,	// (0x00028ff7) popup_settings_window

0xb1be,	// (0x000260eb) popup_candi_list_indi_window

0x91a7,	// (0x000240d4) aid_touch_navi_pane_ParamLimits

0x8887,	// (0x000237b4) rs_clock_indi_pane

0x8890,	// (0x000237bd) sctrl_sk_bottom_pane_ParamLimits

0x88a1,	// (0x000237ce) sctrl_sk_top_pane_ParamLimits

0x89a9,	// (0x000238d6) popup_fep_tooltip_window

0x5599,	// (0x000204c6) aid_size_cell_widget_grid_ParamLimits

0x55bc,	// (0x000204e9) cell_ai5_widget_pane_g1_ParamLimits

0x55bc,	// (0x000204e9) cell_ai5_widget_pane_g1

0x5604,	// (0x00020531) cell_ai5_widget_pane_g6_ParamLimits

0x5610,	// (0x0002053d) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe4f,	// (0x0002ad7c) cell_ai5_widget_pane_g_ParamLimits

0xfe4f,	// (0x0002ad7c) cell_ai5_widget_pane_g

0x5714,	// (0x00020641) cell_ai5_widget_pane_t10_ParamLimits

0x5714,	// (0x00020641) cell_ai5_widget_pane_t10

0x5726,	// (0x00020653) grid_ai5_widget_pane_ParamLimits

0x0444,	// (0x0001b371) cell_contacts_ai5_widget_pane_ParamLimits

0x0444,	// (0x0001b371) cell_contacts_ai5_widget_pane

0x0624,	// (0x0001b551) popup_discreet_window_t3_ParamLimits

0x0624,	// (0x0001b551) popup_discreet_window_t3

0x06bf,	// (0x0001b5ec) popup_fshwr2_char_preview_window_ParamLimits

0x06bf,	// (0x0001b5ec) popup_fshwr2_char_preview_window

0x58b0,	// (0x000207dd) tmo_note_info_pane_t1

0x58c5,	// (0x000207f2) tmo_note_info_pane_t2

0x58da,	// (0x00020807) tmo_note_info_pane_t3

0x08ad,	// (0x0001b7da) tmo_note_info_pane_t4

0x08bf,	// (0x0001b7ec) tmo_note_info_pane_t5

0x0004,

0xfed6,	// (0x0002ae03) tmo_note_info_pane_t

0x08d1,	// (0x0001b7fe) list_tmo_link_pane_ParamLimits

0x08de,	// (0x0001b80b) scroll_pane_cp20_ParamLimits

0x4e33,	// (0x0001fd60) bg_popup_fep_char_preview_window_cp01

0x0922,	// (0x0001b84f) popup_fshwr2_char_preview_window_t1

0x0930,	// (0x0001b85d) popup_candi_list_indi_window_g1

0x0939,	// (0x0001b866) bg_cell_contacts_ai5_widget_pane

0x0945,	// (0x0001b872) cell_contacts_ai5_widget_pane_g1

0x0959,	// (0x0001b886) cell_contacts_ai5_widget_pane_g2

0x0968,	// (0x0001b895) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfee1,	// (0x0002ae0e) cell_contacts_ai5_widget_pane_g

0x097b,	// (0x0001b8a8) cell_contacts_ai5_widget_pane_t1

0x5b77,	// (0x00020aa4) highlight_cell_shortcut_ai5_widget_pane_cp01

0x5952,	// (0x0002087f) settings_container_pane

0x6530,	// (0x0002145d) listscroll_set_pane_copy1

0xa9cd,	// (0x000258fa) scroll_pane_cp121_copy1

0x09ff,	// (0x0001b92c) set_content_pane_copy1

0x0a07,	// (0x0001b934) aid_height_set_list_copy1_ParamLimits

0x0a07,	// (0x0001b934) aid_height_set_list_copy1

0xa442,	// (0x0002536f) aid_size_parent_copy1_ParamLimits

0xa442,	// (0x0002536f) aid_size_parent_copy1

0x595e,	// (0x0002088b) button_value_adjust_pane_cp6_copy1_ParamLimits

0x595e,	// (0x0002088b) button_value_adjust_pane_cp6_copy1

0x9090,	// (0x00023fbd) list_highlight_pane_cp2_copy1_ParamLimits

0x9090,	// (0x00023fbd) list_highlight_pane_cp2_copy1

0x5972,	// (0x0002089f) list_set_pane_copy1_ParamLimits

0x5972,	// (0x0002089f) list_set_pane_copy1

0x58ef,	// (0x0002081c) main_pane_set_t1_copy1_ParamLimits

0x58ef,	// (0x0002081c) main_pane_set_t1_copy1

0x5929,	// (0x00020856) main_pane_set_t2_copy1_ParamLimits

0x5929,	// (0x00020856) main_pane_set_t2_copy1

0x0ab5,	// (0x0001b9e2) main_pane_set_t3_copy1

0x0ac3,	// (0x0001b9f0) main_pane_set_t4_copy1

0x5946,	// (0x00020873) set_content_pane_g1_copy1_ParamLimits

0x5946,	// (0x00020873) set_content_pane_g1_copy1

0x5a00,	// (0x0002092d) setting_code_pane_copy1

0x0ad9,	// (0x0001ba06) setting_slider_graphic_pane_copy1

0x0ad9,	// (0x0001ba06) setting_slider_pane_copy1

0x0ae1,	// (0x0001ba0e) setting_text_pane_copy1

0x0ad9,	// (0x0001ba06) setting_volume_pane_copy1

0x5a08,	// (0x00020935) settings_code_pane_cp2_copy1

0x5a10,	// (0x0002093d) settings_code_pane_cp_copy1_ParamLimits

0x5a10,	// (0x0002093d) settings_code_pane_cp_copy1

0x5a24,	// (0x00020951) volume_set_pane_copy1

0x5a2c,	// (0x00020959) volume_set_pane_g10_copy1

0x5a34,	// (0x00020961) volume_set_pane_g1_copy1

0x5a3c,	// (0x00020969) volume_set_pane_g2_copy1

0x5a44,	// (0x00020971) volume_set_pane_g3_copy1

0x5a4c,	// (0x00020979) volume_set_pane_g4_copy1

0x5a54,	// (0x00020981) volume_set_pane_g5_copy1

0x5a5c,	// (0x00020989) volume_set_pane_g6_copy1

0x5a64,	// (0x00020991) volume_set_pane_g7_copy1

0x5a6c,	// (0x00020999) volume_set_pane_g8_copy1

0x5a74,	// (0x000209a1) volume_set_pane_g9_copy1

0x4f23,	// (0x0001fe50) bg_set_opt_pane_cp_copy1_ParamLimits

0x4f23,	// (0x0001fe50) bg_set_opt_pane_cp_copy1

0x4f31,	// (0x0001fe5e) setting_slider_pane_t1_copy1_ParamLimits

0x4f31,	// (0x0001fe5e) setting_slider_pane_t1_copy1

0x0b5d,	// (0x0001ba8a) setting_slider_pane_t2_copy1_ParamLimits

0x0b5d,	// (0x0001ba8a) setting_slider_pane_t2_copy1

0x0b76,	// (0x0001baa3) setting_slider_pane_t3_copy1_ParamLimits

0x0b76,	// (0x0001baa3) setting_slider_pane_t3_copy1

0x4f47,	// (0x0001fe74) slider_set_pane_copy1_ParamLimits

0x4f47,	// (0x0001fe74) slider_set_pane_copy1

0x5bc6,	// (0x00020af3) set_opt_bg_pane_g1_copy2

0x5bce,	// (0x00020afb) set_opt_bg_pane_g2_copy2

0x0b8d,	// (0x0001baba) set_opt_bg_pane_g3_copy2

0x5bde,	// (0x00020b0b) set_opt_bg_pane_g4_copy2

0x5be6,	// (0x00020b13) set_opt_bg_pane_g5_copy2

0x5bee,	// (0x00020b1b) set_opt_bg_pane_g6_copy2

0x5a7c,	// (0x000209a9) set_opt_bg_pane_g7_copy2

0x0b9d,	// (0x0001baca) set_opt_bg_pane_g8_copy2

0x0ba5,	// (0x0001bad2) set_opt_bg_pane_g9_copy2

0xaa21,	// (0x0002594e) aid_size_touch_slider_mark_copy1_ParamLimits

0xaa21,	// (0x0002594e) aid_size_touch_slider_mark_copy1

0xa454,	// (0x00025381) slider_set_pane_g1_copy1

0xa45d,	// (0x0002538a) slider_set_pane_g2_copy1

0xaa35,	// (0x00025962) slider_set_pane_g3_copy1_ParamLimits

0xaa35,	// (0x00025962) slider_set_pane_g3_copy1

0xaa49,	// (0x00025976) slider_set_pane_g4_copy1_ParamLimits

0xaa49,	// (0x00025976) slider_set_pane_g4_copy1

0xaa61,	// (0x0002598e) slider_set_pane_g5_copy1_ParamLimits

0xaa61,	// (0x0002598e) slider_set_pane_g5_copy1

0xaa35,	// (0x00025962) slider_set_pane_g6_copy1_ParamLimits

0xaa35,	// (0x00025962) slider_set_pane_g6_copy1

0x5a84,	// (0x000209b1) slider_set_pane_g7_copy1_ParamLimits

0x5a84,	// (0x000209b1) slider_set_pane_g7_copy1

0x4ebf,	// (0x0001fdec) bg_set_opt_pane_cp2_copy1

0x4f5d,	// (0x0001fe8a) setting_slider_graphic_pane_g1_copy1

0x5a9a,	// (0x000209c7) setting_slider_graphic_pane_t1_copy1

0x5aa9,	// (0x000209d6) setting_slider_graphic_pane_t2_copy1

0x5ab8,	// (0x000209e5) slider_set_pane_cp_copy1

0x0bf1,	// (0x0001bb1e) input_focus_pane_cp1_copy1

0x0bfa,	// (0x0001bb27) list_set_text_pane_copy1

0x0c02,	// (0x0001bb2f) setting_text_pane_g1_copy1

0xc194,	// (0x000270c1) set_text_pane_t1_copy1

0x0bf1,	// (0x0001bb1e) input_focus_pane_cp2_copy1

0x0c02,	// (0x0001bb2f) setting_code_pane_g1_copy1

0x0c0b,	// (0x0001bb38) setting_code_pane_t1_copy1

0x2803,	// (0x0001d730) list_set_graphic_pane_copy1

0x4ebf,	// (0x0001fdec) bg_set_opt_pane_cp4_copy1

0x0c2d,	// (0x0001bb5a) list_set_graphic_pane_g1_copy1_ParamLimits

0x0c2d,	// (0x0001bb5a) list_set_graphic_pane_g1_copy1

0x0c39,	// (0x0001bb66) list_set_graphic_pane_g2_copy1

0x62ab,	// (0x000211d8) list_set_graphic_pane_t1_copy1_ParamLimits

0x62ab,	// (0x000211d8) list_set_graphic_pane_t1_copy1

0xcbf8,	// (0x00027b25) rs_clock_indi_pane_g1

0x0c41,	// (0x0001bb6e) rs_clock_indi_pane_t1

0x0c4f,	// (0x0001bb7c) rs_indi_pane

0x0c57,	// (0x0001bb84) rs_indi_pane_g1

0x0c60,	// (0x0001bb8d) rs_indi_pane_g2

0x0930,	// (0x0001b85d) rs_indi_pane_g3

0x0002,

0xfee8,	// (0x0002ae15) rs_indi_pane_g

0x6530,	// (0x0002145d) bg_popup_preview_window_pane_cp03

0x0c69,	// (0x0001bb96) popup_fep_tooltip_window_t1

0xe569,	// (0x00029496) popup_note2_window_g2_ParamLimits

0xe569,	// (0x00029496) popup_note2_window_g2

0x0001,

0xfc8d,	// (0x0002abba) popup_note2_window_g_ParamLimits

0xfc8d,	// (0x0002abba) popup_note2_window_g

0xe9e4,	// (0x00029911) bg_popup_sub_pane_cp11_ParamLimits

0xe9f1,	// (0x0002991e) cell_ai3_links_pane_g1_ParamLimits

0xea08,	// (0x00029935) cell_ai3_links_pane_t1

0xc194,	// (0x000270c1) set_text_pane_t1_copy1_ParamLimits

0x6457,	// (0x00021384) cell_graphic_popup_pane_cp2_ParamLimits

0x6457,	// (0x00021384) cell_graphic_popup_pane_cp2

0x0c77,	// (0x0001bba4) cell_graphic_popup_pane_g1_cp2

0x52c3,	// (0x000201f0) cell_graphic_popup_pane_g2_cp2

0x0c7f,	// (0x0001bbac) cell_graphic_popup_pane_g3_cp2

0x0c87,	// (0x0001bbb4) cell_graphic_popup_pane_t2_cp2

0x52d4,	// (0x00020201) grid_highlight_pane_cp3_cp2

0x5eac,	// (0x00020dd9) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x5b77,	// (0x00020aa4) main_tmo_pane_ParamLimits

0x40d0,	// (0x0001effd) popup_tmo_big_image_note_window

0x55ac,	// (0x000204d9) cell_ai5_widget_list_pane

0x55b4,	// (0x000204e1) cell_ai5_widget_lrg_icon_pane

0x58b0,	// (0x000207dd) tmo_note_info_pane_t1_ParamLimits

0x58c5,	// (0x000207f2) tmo_note_info_pane_t2_ParamLimits

0x58da,	// (0x00020807) tmo_note_info_pane_t3_ParamLimits

0x08ad,	// (0x0001b7da) tmo_note_info_pane_t4_ParamLimits

0x08bf,	// (0x0001b7ec) tmo_note_info_pane_t5_ParamLimits

0xfed6,	// (0x0002ae03) tmo_note_info_pane_t_ParamLimits

0x5952,	// (0x0002087f) settings_container_pane_ParamLimits

0x0be9,	// (0x0001bb16) indicator_popup_pane_cp5

0x0be9,	// (0x0001bb16) indicator_popup_pane_cp6

0x2803,	// (0x0001d730) list_set_graphic_pane_copy1_ParamLimits

0x4e33,	// (0x0001fd60) bg_popup_window_pane_cp23

0x0c95,	// (0x0001bbc2) popup_tmo_big_image_note_window_g1

0x0c9e,	// (0x0001bbcb) popup_tmo_big_image_note_window_t1

0x0cac,	// (0x0001bbd9) popup_tmo_big_image_note_window_t2

0x0cba,	// (0x0001bbe7) popup_tmo_big_image_note_window_t3

0x0002,

0xfeef,	// (0x0002ae1c) popup_tmo_big_image_note_window_t

0x5ac0,	// (0x000209ed) cell_ai5_widget_lrg_icon_pane_g1

0x5ac8,	// (0x000209f5) cell_ai5_widget_lrg_icon_pane_t1

0x5ad6,	// (0x00020a03) cell_ai5_widget_list_row_pane_ParamLimits

0x5ad6,	// (0x00020a03) cell_ai5_widget_list_row_pane

0x5aef,	// (0x00020a1c) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x5aef,	// (0x00020a1c) cell_ai5_widget_list_row_pane_g1

0x5afc,	// (0x00020a29) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x5afc,	// (0x00020a29) cell_ai5_widget_list_row_pane_t1

0x5b14,	// (0x00020a41) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x5b14,	// (0x00020a41) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfef6,	// (0x0002ae23) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfef6,	// (0x0002ae23) cell_ai5_widget_list_row_pane_t

0x7220,	// (0x0002214d) main_fep_vtchi_ss_pane

0x0d2e,	// (0x0001bc5b) popup_fep_char_pre_window

0x0d36,	// (0x0001bc63) popup_fep_ituss_window

0x0d3f,	// (0x0001bc6c) popup_fep_vkbss_window

0x0d48,	// (0x0001bc75) grid_vkbss_keypad_pane_ParamLimits

0x0d48,	// (0x0001bc75) grid_vkbss_keypad_pane

0x0d58,	// (0x0001bc85) ituss_keypad_pane

0x0d60,	// (0x0001bc8d) aid_vkbss_key_offset_ParamLimits

0x0d60,	// (0x0001bc8d) aid_vkbss_key_offset

0x0d6f,	// (0x0001bc9c) cell_vkbss_key_pane_ParamLimits

0x0d6f,	// (0x0001bc9c) cell_vkbss_key_pane

0x0d85,	// (0x0001bcb2) bg_cell_vkbss_key_g1_ParamLimits

0x0d85,	// (0x0001bcb2) bg_cell_vkbss_key_g1

0x0d91,	// (0x0001bcbe) cell_vkbss_key_3p_pane_ParamLimits

0x0d91,	// (0x0001bcbe) cell_vkbss_key_3p_pane

0x0da5,	// (0x0001bcd2) cell_vkbss_key_g1_ParamLimits

0x0da5,	// (0x0001bcd2) cell_vkbss_key_g1

0x0db9,	// (0x0001bce6) cell_vkbss_key_t1_ParamLimits

0x0db9,	// (0x0001bce6) cell_vkbss_key_t1

0x0de4,	// (0x0001bd11) cell_ituss_key_pane_ParamLimits

0x0de4,	// (0x0001bd11) cell_ituss_key_pane

0x0df3,	// (0x0001bd20) bg_cell_ituss_key_g1_ParamLimits

0x0df3,	// (0x0001bd20) bg_cell_ituss_key_g1

0x0dff,	// (0x0001bd2c) cell_ituss_key_pane_g1_ParamLimits

0x0dff,	// (0x0001bd2c) cell_ituss_key_pane_g1

0x0e0b,	// (0x0001bd38) cell_ituss_key_pane_g2_ParamLimits

0x0e0b,	// (0x0001bd38) cell_ituss_key_pane_g2

0x0001,

0xfefb,	// (0x0002ae28) cell_ituss_key_pane_g_ParamLimits

0xfefb,	// (0x0002ae28) cell_ituss_key_pane_g

0x0e1e,	// (0x0001bd4b) cell_ituss_key_t1_ParamLimits

0x0e1e,	// (0x0001bd4b) cell_ituss_key_t1

0x0e3c,	// (0x0001bd69) cell_ituss_key_t2_ParamLimits

0x0e3c,	// (0x0001bd69) cell_ituss_key_t2

0x0e5b,	// (0x0001bd88) cell_ituss_key_t3_ParamLimits

0x0e5b,	// (0x0001bd88) cell_ituss_key_t3

0x0e7a,	// (0x0001bda7) cell_ituss_key_t4_ParamLimits

0x0e7a,	// (0x0001bda7) cell_ituss_key_t4

0x0003,

0xff00,	// (0x0002ae2d) cell_ituss_key_t_ParamLimits

0xff00,	// (0x0002ae2d) cell_ituss_key_t

0x0e99,	// (0x0001bdc6) cell_vkbss_key_3p_pane_g1

0x0ea1,	// (0x0001bdce) cell_vkbss_key_3p_pane_g2

0x0ea9,	// (0x0001bdd6) cell_vkbss_key_3p_pane_g3

0x0002,

0xff09,	// (0x0002ae36) cell_vkbss_key_3p_pane_g

0x4e33,	// (0x0001fd60) bg_popup_fep_char_preview_window_cp02

0x0eb1,	// (0x0001bdde) popup_fep_char_pre_window_t1

0x558f,	// (0x000204bc) main_ai5_sk_pane

0x0939,	// (0x0001b866) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x0945,	// (0x0001b872) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x0959,	// (0x0001b886) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x0968,	// (0x0001b895) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfee1,	// (0x0002ae0e) cell_contacts_ai5_widget_pane_g_ParamLimits

0x097b,	// (0x0001b8a8) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x5b77,	// (0x00020aa4) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0x5b26,	// (0x00020a53) main_ai5_sk_pane_g1
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

} // end of namespace AknLayoutScalable_Abrw_pql_av_qvga_lsc_Small

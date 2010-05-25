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

#include "aknlayoutscalable_abrw_pqp_av_qvga_prt_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt[]; }

namespace AknLayoutScalable_Abrw_pqp_av_qvga_prt_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt + 0x0001ce24 };

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
0x8fba,	// (0x00025dde) Screen

0x8fc4,	// (0x00025de8) application_window_ParamLimits

0x8fc4,	// (0x00025de8) application_window

0x536e,	// (0x00022192) screen_g1

0x9016,	// (0x00025e3a) area_bottom_pane_ParamLimits

0x9016,	// (0x00025e3a) area_bottom_pane

0x90d6,	// (0x00025efa) area_top_pane_ParamLimits

0x90d6,	// (0x00025efa) area_top_pane

0x916a,	// (0x00025f8e) main_pane_ParamLimits

0x916a,	// (0x00025f8e) main_pane

0x5378,	// (0x0002219c) misc_graphics

0xa48d,	// (0x000272b1) battery_pane_ParamLimits

0xa48d,	// (0x000272b1) battery_pane

0x6ece,	// (0x00023cf2) bg_status_flat_pane_g8

0x6ed6,	// (0x00023cfa) bg_status_flat_pane_g9

0x6641,	// (0x00023465) context_pane_ParamLimits

0x6641,	// (0x00023465) context_pane

0xa5bf,	// (0x000273e3) navi_pane_ParamLimits

0xa5bf,	// (0x000273e3) navi_pane

0xa62c,	// (0x00027450) signal_pane_ParamLimits

0xa62c,	// (0x00027450) signal_pane

0x0008,

0xf879,	// (0x0002c69d) bg_status_flat_pane_g

0xa68d,	// (0x000274b1) status_pane_g1_ParamLimits

0xa68d,	// (0x000274b1) status_pane_g1

0x75fd,	// (0x00024421) status_pane_g2_ParamLimits

0x75fd,	// (0x00024421) status_pane_g2

0x66c6,	// (0x000234ea) status_pane_g3_ParamLimits

0x66c6,	// (0x000234ea) status_pane_g3

0x0004,

0xf7a0,	// (0x0002c5c4) status_pane_g_ParamLimits

0xf7a0,	// (0x0002c5c4) status_pane_g

0xa6a1,	// (0x000274c5) title_pane_ParamLimits

0xa6a1,	// (0x000274c5) title_pane

0xa6de,	// (0x00027502) uni_indicator_pane_ParamLimits

0xa6de,	// (0x00027502) uni_indicator_pane

0x6586,	// (0x000233aa) bg_list_pane_ParamLimits

0x6586,	// (0x000233aa) bg_list_pane

0x9f47,	// (0x00026d6b) find_pane

0x9f4f,	// (0x00026d73) listscroll_app_pane_ParamLimits

0x9f4f,	// (0x00026d73) listscroll_app_pane

0x65a6,	// (0x000233ca) listscroll_form_pane

0x9f5b,	// (0x00026d7f) listscroll_gen_pane_ParamLimits

0x9f5b,	// (0x00026d7f) listscroll_gen_pane

0x9f6f,	// (0x00026d93) listscroll_set_pane

0x96ce,	// (0x000264f2) main_idle_act_pane

0x640d,	// (0x00023231) main_idle_trad_pane

0x640d,	// (0x00023231) main_list_empty_pane

0x5af8,	// (0x0002291c) main_midp_pane

0x65c0,	// (0x000233e4) main_pane_g1_ParamLimits

0x65c0,	// (0x000233e4) main_pane_g1

0x9f85,	// (0x00026da9) popup_ai_message_window_ParamLimits

0x9f85,	// (0x00026da9) popup_ai_message_window

0xa01b,	// (0x00026e3f) popup_fep_china_uni_window_ParamLimits

0xa01b,	// (0x00026e3f) popup_fep_china_uni_window

0xa059,	// (0x00026e7d) popup_fep_japan_candidate_window_ParamLimits

0xa059,	// (0x00026e7d) popup_fep_japan_candidate_window

0xa077,	// (0x00026e9b) popup_fep_japan_predictive_window_ParamLimits

0xa077,	// (0x00026e9b) popup_fep_japan_predictive_window

0xa0a3,	// (0x00026ec7) popup_find_window

0xa0b0,	// (0x00026ed4) popup_grid_graphic_window_ParamLimits

0xa0b0,	// (0x00026ed4) popup_grid_graphic_window

0xa0d6,	// (0x00026efa) popup_large_graphic_colour_window

0xa0fa,	// (0x00026f1e) popup_menu_window_ParamLimits

0xa0fa,	// (0x00026f1e) popup_menu_window

0xa242,	// (0x00027066) popup_note_image_window

0xa230,	// (0x00027054) popup_note_wait_window_ParamLimits

0xa230,	// (0x00027054) popup_note_wait_window

0xa230,	// (0x00027054) popup_note_window_ParamLimits

0xa230,	// (0x00027054) popup_note_window

0xa296,	// (0x000270ba) popup_query_code_window_ParamLimits

0xa296,	// (0x000270ba) popup_query_code_window

0xa2a8,	// (0x000270cc) popup_query_data_code_window_ParamLimits

0xa2a8,	// (0x000270cc) popup_query_data_code_window

0xa2bd,	// (0x000270e1) popup_query_data_window_ParamLimits

0xa2bd,	// (0x000270e1) popup_query_data_window

0xa2d3,	// (0x000270f7) popup_query_sat_info_window_ParamLimits

0xa2d3,	// (0x000270f7) popup_query_sat_info_window

0xa304,	// (0x00027128) popup_snote_single_graphic_window_ParamLimits

0xa304,	// (0x00027128) popup_snote_single_graphic_window

0xa304,	// (0x00027128) popup_snote_single_text_window_ParamLimits

0xa304,	// (0x00027128) popup_snote_single_text_window

0xa317,	// (0x0002713b) popup_sub_window_general

0xa425,	// (0x00027249) popup_window_general_ParamLimits

0xa425,	// (0x00027249) popup_window_general

0x65ce,	// (0x000233f2) power_save_pane

0x9db5,	// (0x00026bd9) control_pane_g1_ParamLimits

0x9db5,	// (0x00026bd9) control_pane_g1

0x9ddc,	// (0x00026c00) control_pane_g2_ParamLimits

0x9ddc,	// (0x00026c00) control_pane_g2

0x6570,	// (0x00023394) control_pane_g3_ParamLimits

0x6570,	// (0x00023394) control_pane_g3

0x0007,

0xf788,	// (0x0002c5ac) control_pane_g_ParamLimits

0xf788,	// (0x0002c5ac) control_pane_g

0x9e4b,	// (0x00026c6f) control_pane_t1_ParamLimits

0x9e4b,	// (0x00026c6f) control_pane_t1

0x9e9e,	// (0x00026cc2) control_pane_t2_ParamLimits

0x9e9e,	// (0x00026cc2) control_pane_t2

0x0002,

0xf799,	// (0x0002c5bd) control_pane_t_ParamLimits

0xf799,	// (0x0002c5bd) control_pane_t

0x9d10,	// (0x00026b34) navi_navi_volume_pane_cp1

0x9d18,	// (0x00026b3c) status_small_icon_pane

0x653c,	// (0x00023360) status_small_pane_g1_ParamLimits

0x653c,	// (0x00023360) status_small_pane_g1

0x9d20,	// (0x00026b44) status_small_pane_g2_ParamLimits

0x9d20,	// (0x00026b44) status_small_pane_g2

0x9d2c,	// (0x00026b50) status_small_pane_g3_ParamLimits

0x9d2c,	// (0x00026b50) status_small_pane_g3

0x9d38,	// (0x00026b5c) status_small_pane_g4_ParamLimits

0x9d38,	// (0x00026b5c) status_small_pane_g4

0x9d44,	// (0x00026b68) status_small_pane_g5_ParamLimits

0x9d44,	// (0x00026b68) status_small_pane_g5

0x9d50,	// (0x00026b74) status_small_pane_g6_ParamLimits

0x9d50,	// (0x00026b74) status_small_pane_g6

0x0007,

0xf777,	// (0x0002c59b) status_small_pane_g_ParamLimits

0xf777,	// (0x0002c59b) status_small_pane_g

0x9d7f,	// (0x00026ba3) status_small_pane_t1

0x9da1,	// (0x00026bc5) status_small_wait_pane_ParamLimits

0x9da1,	// (0x00026bc5) status_small_wait_pane

0x99d9,	// (0x000267fd) aid_levels_signal_ParamLimits

0x99d9,	// (0x000267fd) aid_levels_signal

0x99e8,	// (0x0002680c) signal_pane_g1_ParamLimits

0x99e8,	// (0x0002680c) signal_pane_g1

0x99fd,	// (0x00026821) signal_pane_g2_ParamLimits

0x99fd,	// (0x00026821) signal_pane_g2

0x0003,

0xf708,	// (0x0002c52c) signal_pane_g_ParamLimits

0xf708,	// (0x0002c52c) signal_pane_g

0x5f1b,	// (0x00022d3f) context_pane_g1

0x936b,	// (0x0002618f) title_pane_g1

0x9395,	// (0x000261b9) title_pane_t1

0x538e,	// (0x000221b2) title_pane_t2

0x53b4,	// (0x000221d8) title_pane_t3

0x0002,

0xf557,	// (0x0002c37b) title_pane_t

0xa6f4,	// (0x00027518) aid_levels_battery_ParamLimits

0xa6f4,	// (0x00027518) aid_levels_battery

0xa705,	// (0x00027529) battery_pane_g1_ParamLimits

0xa705,	// (0x00027529) battery_pane_g1

0xa71b,	// (0x0002753f) battery_pane_g2_ParamLimits

0xa71b,	// (0x0002753f) battery_pane_g2

0x0001,

0xf7ab,	// (0x0002c5cf) battery_pane_g_ParamLimits

0xf7ab,	// (0x0002c5cf) battery_pane_g

0xab32,	// (0x00027956) uni_indicator_pane_g1

0xab45,	// (0x00027969) uni_indicator_pane_g2

0xab57,	// (0x0002797b) uni_indicator_pane_g3

0x0005,

0xf921,	// (0x0002c745) uni_indicator_pane_g

0x6281,	// (0x000230a5) navi_icon_pane_ParamLimits

0x6281,	// (0x000230a5) navi_icon_pane

0x61d0,	// (0x00022ff4) navi_midp_pane

0x629d,	// (0x000230c1) navi_navi_pane

0x62a7,	// (0x000230cb) navi_text_pane_ParamLimits

0x62a7,	// (0x000230cb) navi_text_pane

0x536e,	// (0x00022192) status_small_wait_pane_g1

0x56ab,	// (0x000224cf) status_small_wait_pane_g2

0x0001,

0xf91c,	// (0x0002c740) status_small_wait_pane_g

0x746f,	// (0x00024293) navi_navi_icon_text_pane

0x7489,	// (0x000242ad) navi_navi_pane_g1_ParamLimits

0x7489,	// (0x000242ad) navi_navi_pane_g1

0x7477,	// (0x0002429b) navi_navi_pane_g2_ParamLimits

0x7477,	// (0x0002429b) navi_navi_pane_g2

0x0001,

0xf8ea,	// (0x0002c70e) navi_navi_pane_g_ParamLimits

0xf8ea,	// (0x0002c70e) navi_navi_pane_g

0x749b,	// (0x000242bf) navi_navi_tabs_pane

0x74a4,	// (0x000242c8) navi_navi_text_pane

0x746f,	// (0x00024293) navi_navi_volume_pane

0x744b,	// (0x0002426f) navi_text_pane_t1

0x743f,	// (0x00024263) navi_icon_pane_g1

0x7394,	// (0x000241b8) navi_navi_text_pane_t1

0xab00,	// (0x00027924) navi_navi_volume_pane_g1

0xab08,	// (0x0002792c) volume_small_pane

0x7372,	// (0x00024196) navi_navi_icon_text_pane_g1

0x737a,	// (0x0002419e) navi_navi_icon_text_pane_t1

0x629d,	// (0x000230c1) navi_tabs_2_long_pane

0x629d,	// (0x000230c1) navi_tabs_2_pane

0x629d,	// (0x000230c1) navi_tabs_3_long_pane

0x629d,	// (0x000230c1) navi_tabs_3_pane

0x629d,	// (0x000230c1) navi_tabs_4_pane

0xaa68,	// (0x0002788c) tabs_2_active_pane_ParamLimits

0xaa68,	// (0x0002788c) tabs_2_active_pane

0xaa78,	// (0x0002789c) tabs_2_passive_pane_ParamLimits

0xaa78,	// (0x0002789c) tabs_2_passive_pane

0xaa36,	// (0x0002785a) tabs_3_active_pane_ParamLimits

0xaa36,	// (0x0002785a) tabs_3_active_pane

0xaa46,	// (0x0002786a) tabs_3_passive_pane_ParamLimits

0xaa46,	// (0x0002786a) tabs_3_passive_pane

0xaa57,	// (0x0002787b) tabs_3_passive_pane_cp_ParamLimits

0xaa57,	// (0x0002787b) tabs_3_passive_pane_cp

0xa9f2,	// (0x00027816) tabs_4_active_pane_ParamLimits

0xa9f2,	// (0x00027816) tabs_4_active_pane

0xaa03,	// (0x00027827) tabs_4_passive_pane_ParamLimits

0xaa03,	// (0x00027827) tabs_4_passive_pane

0xaa14,	// (0x00027838) tabs_4_passive_pane_cp_ParamLimits

0xaa14,	// (0x00027838) tabs_4_passive_pane_cp

0xaa25,	// (0x00027849) tabs_4_passive_pane_cp2_ParamLimits

0xaa25,	// (0x00027849) tabs_4_passive_pane_cp2

0xa9d2,	// (0x000277f6) tabs_2_long_active_pane_ParamLimits

0xa9d2,	// (0x000277f6) tabs_2_long_active_pane

0xa9e2,	// (0x00027806) tabs_2_long_passive_pane_ParamLimits

0xa9e2,	// (0x00027806) tabs_2_long_passive_pane

0xa99f,	// (0x000277c3) tabs_3_long_active_pane_ParamLimits

0xa99f,	// (0x000277c3) tabs_3_long_active_pane

0xa9b0,	// (0x000277d4) tabs_3_long_passive_pane_ParamLimits

0xa9b0,	// (0x000277d4) tabs_3_long_passive_pane

0xa9c1,	// (0x000277e5) tabs_3_long_passive_pane_cp_ParamLimits

0xa9c1,	// (0x000277e5) tabs_3_long_passive_pane_cp

0xa945,	// (0x00027769) volume_small_pane_g1

0xa94e,	// (0x00027772) volume_small_pane_g2

0xa957,	// (0x0002777b) volume_small_pane_g3

0xa960,	// (0x00027784) volume_small_pane_g4

0xa969,	// (0x0002778d) volume_small_pane_g5

0xa972,	// (0x00027796) volume_small_pane_g6

0xa97b,	// (0x0002779f) volume_small_pane_g7

0xa984,	// (0x000277a8) volume_small_pane_g8

0xa98d,	// (0x000277b1) volume_small_pane_g9

0xa996,	// (0x000277ba) volume_small_pane_g10

0x0009,

0xf8b6,	// (0x0002c6da) volume_small_pane_g

0x53e4,	// (0x00022208) bg_active_tab_pane_cp2_ParamLimits

0x53e4,	// (0x00022208) bg_active_tab_pane_cp2

0x53d4,	// (0x000221f8) tabs_3_active_pane_g1

0x93fd,	// (0x00026221) tabs_3_active_pane_t1

0x53e4,	// (0x00022208) bg_passive_tab_pane_cp2_ParamLimits

0x53e4,	// (0x00022208) bg_passive_tab_pane_cp2

0x53d4,	// (0x000221f8) tabs_3_passive_pane_g1

0x93fd,	// (0x00026221) tabs_3_passive_pane_t1

0x53e4,	// (0x00022208) bg_active_tab_pane_cp3_ParamLimits

0x53e4,	// (0x00022208) bg_active_tab_pane_cp3

0x53dc,	// (0x00022200) tabs_4_active_pane_g1

0x940f,	// (0x00026233) tabs_4_active_pane_t1

0x53e4,	// (0x00022208) bg_passive_tab_pane_cp3_ParamLimits

0x53e4,	// (0x00022208) bg_passive_tab_pane_cp3

0x53dc,	// (0x00022200) tabs_4_1_passive_pane_g1

0x940f,	// (0x00026233) tabs_4_1_passive_pane_t1

0x5af8,	// (0x0002291c) list_highlight_pane_cp2

0xaca2,	// (0x00027ac6) list_set_pane_ParamLimits

0xaca2,	// (0x00027ac6) list_set_pane

0xad30,	// (0x00027b54) main_pane_set_t1_ParamLimits

0xad30,	// (0x00027b54) main_pane_set_t1

0xad50,	// (0x00027b74) main_pane_set_t2_ParamLimits

0xad50,	// (0x00027b74) main_pane_set_t2

0xad62,	// (0x00027b86) main_pane_set_t3_ParamLimits

0xad62,	// (0x00027b86) main_pane_set_t3

0xad74,	// (0x00027b98) main_pane_set_t4_ParamLimits

0xad74,	// (0x00027b98) main_pane_set_t4

0x0003,

0xf986,	// (0x0002c7aa) main_pane_set_t_ParamLimits

0xf986,	// (0x0002c7aa) main_pane_set_t

0xad86,	// (0x00027baa) setting_code_pane

0xad8e,	// (0x00027bb2) setting_slider_graphic_pane

0xad8e,	// (0x00027bb2) setting_slider_pane

0xad8e,	// (0x00027bb2) setting_text_pane

0xad8e,	// (0x00027bb2) setting_volume_pane

0x9421,	// (0x00026245) volume_set_pane

0x53e4,	// (0x00022208) bg_set_opt_pane_cp

0x9429,	// (0x0002624d) setting_slider_pane_t1

0x9442,	// (0x00026266) setting_slider_pane_t2

0x945b,	// (0x0002627f) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0002c382) setting_slider_pane_t

0x9472,	// (0x00026296) slider_set_pane

0x5378,	// (0x0002219c) bg_set_opt_pane_cp2

0x53f2,	// (0x00022216) setting_slider_graphic_pane_g1

0x9488,	// (0x000262ac) setting_slider_graphic_pane_t1

0x9497,	// (0x000262bb) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x0002c389) setting_slider_graphic_pane_t

0x94a6,	// (0x000262ca) slider_set_pane_cp

0x5378,	// (0x0002219c) input_focus_pane_cp1

0x7907,	// (0x0002472b) list_set_text_pane

0x536e,	// (0x00022192) setting_text_pane_g1

0x5378,	// (0x0002219c) input_focus_pane_cp2

0x536e,	// (0x00022192) setting_code_pane_g1

0x53fb,	// (0x0002221f) setting_code_pane_t1

0xc215,	// (0x00029039) set_text_pane_t1_ParamLimits

0xc215,	// (0x00029039) set_text_pane_t1

0x59e7,	// (0x0002280b) set_opt_bg_pane_g1

0x59ef,	// (0x00022813) set_opt_bg_pane_g2

0xac65,	// (0x00027a89) set_opt_bg_pane_g3

0x59ff,	// (0x00022823) set_opt_bg_pane_g4

0x5a07,	// (0x0002282b) set_opt_bg_pane_g5

0x5a0f,	// (0x00022833) set_opt_bg_pane_g6

0x78ff,	// (0x00024723) set_opt_bg_pane_g7

0xac6d,	// (0x00027a91) set_opt_bg_pane_g8

0xac75,	// (0x00027a99) set_opt_bg_pane_g9

0x0008,

0xf973,	// (0x0002c797) set_opt_bg_pane_g

0x78f2,	// (0x00024716) slider_set_pane_g1

0xac01,	// (0x00027a25) slider_set_pane_g2

0x0006,

0xf964,	// (0x0002c788) slider_set_pane_g

0xab78,	// (0x0002799c) volume_set_pane_g1

0xab80,	// (0x000279a4) volume_set_pane_g2

0xab88,	// (0x000279ac) volume_set_pane_g3

0xab90,	// (0x000279b4) volume_set_pane_g4

0xab98,	// (0x000279bc) volume_set_pane_g5

0xaba0,	// (0x000279c4) volume_set_pane_g6

0xaba8,	// (0x000279cc) volume_set_pane_g7

0xabb0,	// (0x000279d4) volume_set_pane_g8

0xabb8,	// (0x000279dc) volume_set_pane_g9

0xabc0,	// (0x000279e4) volume_set_pane_g10

0x0009,

0xf93c,	// (0x0002c760) volume_set_pane_g

0x94ae,	// (0x000262d2) indicator_pane_ParamLimits

0x94ae,	// (0x000262d2) indicator_pane

0x94ba,	// (0x000262de) main_idle_pane_g2_ParamLimits

0x94ba,	// (0x000262de) main_idle_pane_g2

0x94dc,	// (0x00026300) main_pane_idle_g1_ParamLimits

0x94dc,	// (0x00026300) main_pane_idle_g1

0x5409,	// (0x0002222d) popup_clock_digital_analogue_window_ParamLimits

0x5409,	// (0x0002222d) popup_clock_digital_analogue_window

0x94e9,	// (0x0002630d) soft_indicator_pane_ParamLimits

0x94e9,	// (0x0002630d) soft_indicator_pane

0x94f5,	// (0x00026319) wallpaper_pane_ParamLimits

0x94f5,	// (0x00026319) wallpaper_pane

0x536e,	// (0x00022192) wallpaper_pane_g1

0x9501,	// (0x00026325) indicator_pane_g1_ParamLimits

0x9501,	// (0x00026325) indicator_pane_g1

0x7a6f,	// (0x00024893) navi_navi_icon_text_pane_srt_g1

0x5437,	// (0x0002225b) soft_indicator_pane_t1

0x5451,	// (0x00022275) aid_ps_area_pane

0x950d,	// (0x00026331) aid_ps_clock_pane

0x5462,	// (0x00022286) aid_ps_indicator_pane

0x546e,	// (0x00022292) indicator_ps_pane_ParamLimits

0x546e,	// (0x00022292) indicator_ps_pane

0x547d,	// (0x000222a1) power_save_pane_g1_ParamLimits

0x547d,	// (0x000222a1) power_save_pane_g1

0x5489,	// (0x000222ad) power_save_pane_g2_ParamLimits

0x5489,	// (0x000222ad) power_save_pane_g2

0x8fd2,	// (0x00025df6) aid_navinavi_width_pane

0x5451,	// (0x00022275) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0002c38e) power_save_pane_g_ParamLimits

0xf56a,	// (0x0002c38e) power_save_pane_g

0x5497,	// (0x000222bb) power_save_pane_t1_ParamLimits

0x5497,	// (0x000222bb) power_save_pane_t1

0x950d,	// (0x00026331) aid_ps_clock_pane_ParamLimits

0x5462,	// (0x00022286) aid_ps_indicator_pane_ParamLimits

0x54a9,	// (0x000222cd) power_save_pane_t4_ParamLimits

0x54a9,	// (0x000222cd) power_save_pane_t4

0x0001,

0xf56f,	// (0x0002c393) power_save_pane_t_ParamLimits

0xf56f,	// (0x0002c393) power_save_pane_t

0x54d3,	// (0x000222f7) power_save_t3_ParamLimits

0x54d3,	// (0x000222f7) power_save_t3

0x54be,	// (0x000222e2) power_save_t2_ParamLimits

0x54be,	// (0x000222e2) power_save_t2

0x54e8,	// (0x0002230c) indicator_ps_pane_g1

0x9519,	// (0x0002633d) ai_gene_pane_ParamLimits

0x9519,	// (0x0002633d) ai_gene_pane

0x9525,	// (0x00026349) ai_links_pane_ParamLimits

0x9525,	// (0x00026349) ai_links_pane

0x9531,	// (0x00026355) indicator_pane_cp1_ParamLimits

0x9531,	// (0x00026355) indicator_pane_cp1

0x953d,	// (0x00026361) main_pane_idle_g1_cp_ParamLimits

0x953d,	// (0x00026361) main_pane_idle_g1_cp

0x54f1,	// (0x00022315) popup_ai_links_title_window

0x9549,	// (0x0002636d) soft_indicator_pane_cp1_ParamLimits

0x9549,	// (0x0002636d) soft_indicator_pane_cp1

0x775a,	// (0x0002457e) ai_links_pane_g1

0x7763,	// (0x00024587) grid_ai_links_pane

0xab29,	// (0x0002794d) ai_gene_pane_1

0x7748,	// (0x0002456c) ai_gene_pane_2

0x7751,	// (0x00024575) list_highlight_pane_cp4

0xab11,	// (0x00027935) cell_ai_link_pane_ParamLimits

0xab11,	// (0x00027935) cell_ai_link_pane

0x7740,	// (0x00024564) cell_ai_link_pane_g1

0x56ab,	// (0x000224cf) cell_ai_link_pane_g2

0x0001,

0xf917,	// (0x0002c73b) cell_ai_link_pane_g

0x5378,	// (0x0002219c) grid_highlight_cp2

0x5378,	// (0x0002219c) bg_popup_sub_pane_cp1

0x5508,	// (0x0002232c) popup_ai_links_title_window_t1

0x7692,	// (0x000244b6) ai_gene_pane_1_g1_ParamLimits

0x7692,	// (0x000244b6) ai_gene_pane_1_g1

0x769e,	// (0x000244c2) ai_gene_pane_1_g2_ParamLimits

0x769e,	// (0x000244c2) ai_gene_pane_1_g2

0x0001,

0xf90d,	// (0x0002c731) ai_gene_pane_1_g_ParamLimits

0xf90d,	// (0x0002c731) ai_gene_pane_1_g

0x76ab,	// (0x000244cf) ai_gene_pane_1_t1_ParamLimits

0x76ab,	// (0x000244cf) ai_gene_pane_1_t1

0x76df,	// (0x00024503) grid_ai_soft_ind_pane

0x767d,	// (0x000244a1) ai_gene_pane_2_t1_ParamLimits

0x767d,	// (0x000244a1) ai_gene_pane_2_t1

0x9555,	// (0x00026379) main_pane_empty_t1_ParamLimits

0x9555,	// (0x00026379) main_pane_empty_t1

0x956d,	// (0x00026391) main_pane_empty_t2_ParamLimits

0x956d,	// (0x00026391) main_pane_empty_t2

0x9582,	// (0x000263a6) main_pane_empty_t3_ParamLimits

0x9582,	// (0x000263a6) main_pane_empty_t3

0x9594,	// (0x000263b8) main_pane_empty_t4_ParamLimits

0x9594,	// (0x000263b8) main_pane_empty_t4

0x95a6,	// (0x000263ca) main_pane_empty_t5_ParamLimits

0x95a6,	// (0x000263ca) main_pane_empty_t5

0x0004,

0xf574,	// (0x0002c398) main_pane_empty_t_ParamLimits

0xf574,	// (0x0002c398) main_pane_empty_t

0x5a38,	// (0x0002285c) bg_popup_window_pane_ParamLimits

0x5a38,	// (0x0002285c) bg_popup_window_pane

0x73a2,	// (0x000241c6) find_popup_pane_cp2_ParamLimits

0x73a2,	// (0x000241c6) find_popup_pane_cp2

0x73ae,	// (0x000241d2) heading_pane_ParamLimits

0x73ae,	// (0x000241d2) heading_pane

0x5378,	// (0x0002219c) bg_popup_sub_pane

0xaa94,	// (0x000278b8) bg_popup_window_pane_g1_ParamLimits

0xaa94,	// (0x000278b8) bg_popup_window_pane_g1

0xaaa0,	// (0x000278c4) bg_popup_window_pane_g2_ParamLimits

0xaaa0,	// (0x000278c4) bg_popup_window_pane_g2

0xaaac,	// (0x000278d0) bg_popup_window_pane_g3_ParamLimits

0xaaac,	// (0x000278d0) bg_popup_window_pane_g3

0xaab8,	// (0x000278dc) bg_popup_window_pane_g4_ParamLimits

0xaab8,	// (0x000278dc) bg_popup_window_pane_g4

0xaac4,	// (0x000278e8) bg_popup_window_pane_g5_ParamLimits

0xaac4,	// (0x000278e8) bg_popup_window_pane_g5

0xaad0,	// (0x000278f4) bg_popup_window_pane_g6_ParamLimits

0xaad0,	// (0x000278f4) bg_popup_window_pane_g6

0xaadc,	// (0x00027900) bg_popup_window_pane_g7_ParamLimits

0xaadc,	// (0x00027900) bg_popup_window_pane_g7

0xaae8,	// (0x0002790c) bg_popup_window_pane_g8_ParamLimits

0xaae8,	// (0x0002790c) bg_popup_window_pane_g8

0xaaf4,	// (0x00027918) bg_popup_window_pane_g9_ParamLimits

0xaaf4,	// (0x00027918) bg_popup_window_pane_g9

0x7388,	// (0x000241ac) bg_popup_window_pane_g10_ParamLimits

0x7388,	// (0x000241ac) bg_popup_window_pane_g10

0x0009,

0xf8d5,	// (0x0002c6f9) bg_popup_window_pane_g_ParamLimits

0xf8d5,	// (0x0002c6f9) bg_popup_window_pane_g

0x7329,	// (0x0002414d) bg_popup_heading_pane_ParamLimits

0x7329,	// (0x0002414d) bg_popup_heading_pane

0xaef4,	// (0x00027d18) tabs_4_passive_pane_cp_srt_ParamLimits

0xaef4,	// (0x00027d18) tabs_4_passive_pane_cp_srt

0xaf06,	// (0x00027d2a) tabs_4_passive_pane_srt_ParamLimits

0x733d,	// (0x00024161) heading_pane_g2

0xaf06,	// (0x00027d2a) tabs_4_passive_pane_srt

0x5af8,	// (0x0002291c) bg_passive_tab_pane_cp3_srt_ParamLimits

0x5af8,	// (0x0002291c) bg_passive_tab_pane_cp3_srt

0x7345,	// (0x00024169) heading_pane_t1_ParamLimits

0x7345,	// (0x00024169) heading_pane_t1

0x735c,	// (0x00024180) heading_pane_t2_ParamLimits

0x735c,	// (0x00024180) heading_pane_t2

0x0001,

0xf8d0,	// (0x0002c6f4) heading_pane_t_ParamLimits

0xf8d0,	// (0x0002c6f4) heading_pane_t

0x6e96,	// (0x00023cba) bg_popup_heading_pane_g1

0x6f27,	// (0x00023d4b) bg_popup_heading_pane_g2

0x6f2f,	// (0x00023d53) bg_popup_heading_pane_g3

0x6f37,	// (0x00023d5b) bg_popup_heading_pane_g4

0x6f3f,	// (0x00023d63) bg_popup_heading_pane_g5

0x6f47,	// (0x00023d6b) bg_popup_heading_pane_g6

0x6f4f,	// (0x00023d73) bg_popup_heading_pane_g7

0x6f57,	// (0x00023d7b) bg_popup_heading_pane_g8

0x6f5f,	// (0x00023d83) bg_popup_heading_pane_g9

0x0008,

0xf88c,	// (0x0002c6b0) bg_popup_heading_pane_g

0x67b8,	// (0x000235dc) bg_popup_sub_pane_g1

0x67c0,	// (0x000235e4) bg_popup_sub_pane_g2

0x67c8,	// (0x000235ec) bg_popup_sub_pane_g3

0x67d0,	// (0x000235f4) bg_popup_sub_pane_g4

0x67d8,	// (0x000235fc) bg_popup_sub_pane_g5

0x67e0,	// (0x00023604) bg_popup_sub_pane_g6

0x67e8,	// (0x0002360c) bg_popup_sub_pane_g7

0x67f0,	// (0x00023614) bg_popup_sub_pane_g8

0x67f8,	// (0x0002361c) bg_popup_sub_pane_g9

0x0008,

0xf866,	// (0x0002c68a) bg_popup_sub_pane_g

0x53c6,	// (0x000221ea) bg_popup_window_pane_cp5_ParamLimits

0x53c6,	// (0x000221ea) bg_popup_window_pane_cp5

0x5525,	// (0x00022349) popup_note_window_g1_ParamLimits

0x5525,	// (0x00022349) popup_note_window_g1

0x5531,	// (0x00022355) popup_note_window_t1_ParamLimits

0x5531,	// (0x00022355) popup_note_window_t1

0x5547,	// (0x0002236b) popup_note_window_t2_ParamLimits

0x5547,	// (0x0002236b) popup_note_window_t2

0x555d,	// (0x00022381) popup_note_window_t3_ParamLimits

0x555d,	// (0x00022381) popup_note_window_t3

0x5573,	// (0x00022397) popup_note_window_t4_ParamLimits

0x5573,	// (0x00022397) popup_note_window_t4

0x559b,	// (0x000223bf) popup_note_window_t5_ParamLimits

0x559b,	// (0x000223bf) popup_note_window_t5

0x0004,

0xf57f,	// (0x0002c3a3) popup_note_window_t_ParamLimits

0xf57f,	// (0x0002c3a3) popup_note_window_t

0x55bf,	// (0x000223e3) bg_popup_window_pane_cp6_ParamLimits

0x55bf,	// (0x000223e3) bg_popup_window_pane_cp6

0x6e12,	// (0x00023c36) popup_note_image_window_g1_ParamLimits

0x6e12,	// (0x00023c36) popup_note_image_window_g1

0x6e1e,	// (0x00023c42) popup_note_image_window_g2_ParamLimits

0x6e1e,	// (0x00023c42) popup_note_image_window_g2

0x0001,

0xf85a,	// (0x0002c67e) popup_note_image_window_g_ParamLimits

0xf85a,	// (0x0002c67e) popup_note_image_window_g

0x6e37,	// (0x00023c5b) popup_note_image_window_t1_ParamLimits

0x6e37,	// (0x00023c5b) popup_note_image_window_t1

0x6e50,	// (0x00023c74) popup_note_image_window_t2_ParamLimits

0x6e50,	// (0x00023c74) popup_note_image_window_t2

0x6e69,	// (0x00023c8d) popup_note_image_window_t3_ParamLimits

0x6e69,	// (0x00023c8d) popup_note_image_window_t3

0x0002,

0xf85f,	// (0x0002c683) popup_note_image_window_t_ParamLimits

0xf85f,	// (0x0002c683) popup_note_image_window_t

0x6cf7,	// (0x00023b1b) bg_popup_window_pane_cp7_ParamLimits

0x6cf7,	// (0x00023b1b) bg_popup_window_pane_cp7

0x6d27,	// (0x00023b4b) popup_note_wait_window_g1_ParamLimits

0x6d27,	// (0x00023b4b) popup_note_wait_window_g1

0x6d33,	// (0x00023b57) popup_note_wait_window_g2_ParamLimits

0x6d33,	// (0x00023b57) popup_note_wait_window_g2

0x0002,

0xf848,	// (0x0002c66c) popup_note_wait_window_g_ParamLimits

0xf848,	// (0x0002c66c) popup_note_wait_window_g

0x6d4b,	// (0x00023b6f) popup_note_wait_window_t1_ParamLimits

0x6d4b,	// (0x00023b6f) popup_note_wait_window_t1

0x6d72,	// (0x00023b96) popup_note_wait_window_t2_ParamLimits

0x6d72,	// (0x00023b96) popup_note_wait_window_t2

0x6d8f,	// (0x00023bb3) popup_note_wait_window_t3_ParamLimits

0x6d8f,	// (0x00023bb3) popup_note_wait_window_t3

0x6da2,	// (0x00023bc6) popup_note_wait_window_t4_ParamLimits

0x6da2,	// (0x00023bc6) popup_note_wait_window_t4

0x0004,

0xf84f,	// (0x0002c673) popup_note_wait_window_t_ParamLimits

0xf84f,	// (0x0002c673) popup_note_wait_window_t

0x6dc7,	// (0x00023beb) wait_bar_pane_ParamLimits

0x6dc7,	// (0x00023beb) wait_bar_pane

0x5378,	// (0x0002219c) wait_anim_pane

0x5378,	// (0x0002219c) wait_border_pane

0x536e,	// (0x00022192) wait_anim_pane_g1

0x536e,	// (0x00022192) wait_anim_pane_g2

0x0001,

0xf703,	// (0x0002c527) wait_anim_pane_g

0x6ca7,	// (0x00023acb) wait_border_pane_g1

0x6cb0,	// (0x00023ad4) wait_border_pane_g2

0x6cb9,	// (0x00023add) wait_border_pane_g3

0x0002,

0xf841,	// (0x0002c665) wait_border_pane_g

0x6b17,	// (0x0002393b) bg_popup_window_pane_cp16_ParamLimits

0x6b17,	// (0x0002393b) bg_popup_window_pane_cp16

0x6c17,	// (0x00023a3b) indicator_popup_pane_cp4_ParamLimits

0x6c17,	// (0x00023a3b) indicator_popup_pane_cp4

0x6c2b,	// (0x00023a4f) popup_query_data_window_t1_ParamLimits

0x6c2b,	// (0x00023a4f) popup_query_data_window_t1

0x6c3d,	// (0x00023a61) popup_query_data_window_t2_ParamLimits

0x6c3d,	// (0x00023a61) popup_query_data_window_t2

0x6c56,	// (0x00023a7a) popup_query_data_window_t3_ParamLimits

0x6c56,	// (0x00023a7a) popup_query_data_window_t3

0x0002,

0xf83a,	// (0x0002c65e) popup_query_data_window_t_ParamLimits

0xf83a,	// (0x0002c65e) popup_query_data_window_t

0x6c70,	// (0x00023a94) query_popup_data_pane_ParamLimits

0x6c70,	// (0x00023a94) query_popup_data_pane

0x6c84,	// (0x00023aa8) query_popup_data_pane_cp1_ParamLimits

0x6c84,	// (0x00023aa8) query_popup_data_pane_cp1

0x6b17,	// (0x0002393b) bg_popup_window_pane_cp10_ParamLimits

0x6b17,	// (0x0002393b) bg_popup_window_pane_cp10

0x6b49,	// (0x0002396d) indicator_popup_pane_ParamLimits

0x6b49,	// (0x0002396d) indicator_popup_pane

0x6b6b,	// (0x0002398f) popup_query_code_window_t1_ParamLimits

0x6b6b,	// (0x0002398f) popup_query_code_window_t1

0x6b85,	// (0x000239a9) popup_query_code_window_t2_ParamLimits

0x6b85,	// (0x000239a9) popup_query_code_window_t2

0x6bce,	// (0x000239f2) popup_query_code_window_t3_ParamLimits

0x6bce,	// (0x000239f2) popup_query_code_window_t3

0x0002,

0xf833,	// (0x0002c657) popup_query_code_window_t_ParamLimits

0xf833,	// (0x0002c657) popup_query_code_window_t

0x6bfd,	// (0x00023a21) query_popup_pane_ParamLimits

0x6bfd,	// (0x00023a21) query_popup_pane

0x55bf,	// (0x000223e3) bg_popup_window_pane_cp15_ParamLimits

0x55bf,	// (0x000223e3) bg_popup_window_pane_cp15

0x55dd,	// (0x00022401) indicator_popup_pane_cp1_ParamLimits

0x55dd,	// (0x00022401) indicator_popup_pane_cp1

0x55f0,	// (0x00022414) indicator_popup_pane_cp2_ParamLimits

0x55f0,	// (0x00022414) indicator_popup_pane_cp2

0x5603,	// (0x00022427) popup_query_data_code_window_g1_ParamLimits

0x5603,	// (0x00022427) popup_query_data_code_window_g1

0x5616,	// (0x0002243a) popup_query_data_code_window_t1_ParamLimits

0x5616,	// (0x0002243a) popup_query_data_code_window_t1

0x5628,	// (0x0002244c) popup_query_data_code_window_t2_ParamLimits

0x5628,	// (0x0002244c) popup_query_data_code_window_t2

0x563a,	// (0x0002245e) popup_query_data_code_window_t3_ParamLimits

0x563a,	// (0x0002245e) popup_query_data_code_window_t3

0x5650,	// (0x00022474) popup_query_data_code_window_t4_ParamLimits

0x5650,	// (0x00022474) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x0002c3ae) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x0002c3ae) popup_query_data_code_window_t

0xa77b,	// (0x0002759f) list_single_midp_graphic_pane_g3

0x5668,	// (0x0002248c) query_popup_data_pane_cp2_ParamLimits

0x567b,	// (0x0002249f) query_popup_pane_cp2_ParamLimits

0x567b,	// (0x0002249f) query_popup_pane_cp2

0x5378,	// (0x0002219c) bg_popup_window_pane_cp11

0x6b0f,	// (0x00023933) heading_pane_cp5

0x570a,	// (0x0002252e) listscroll_popup_info_pane

0x5378,	// (0x0002219c) input_focus_pane_cp3

0x568e,	// (0x000224b2) query_popup_pane_t1

0x569c,	// (0x000224c0) list_popup_info_pane_ParamLimits

0x569c,	// (0x000224c0) list_popup_info_pane

0x56ab,	// (0x000224cf) listscroll_popup_info_pane_g1

0x56b3,	// (0x000224d7) scroll_pane_cp7

0x56bb,	// (0x000224df) popup_info_list_pane_t1_ParamLimits

0x56bb,	// (0x000224df) popup_info_list_pane_t1

0x56d5,	// (0x000224f9) popup_info_list_pane_t2_ParamLimits

0x56d5,	// (0x000224f9) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x0002c3b7) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x0002c3b7) popup_info_list_pane_t

0x5378,	// (0x0002219c) bg_popup_window_pane_cp12

0x7a89,	// (0x000248ad) find_popup_pane

0x53e4,	// (0x00022208) bg_popup_window_pane_cp3

0x56ef,	// (0x00022513) heading_pane_cp3

0x56fb,	// (0x0002251f) listscroll_popup_graphic_pane

0x5378,	// (0x0002219c) bg_popup_window_pane_cp4

0x9608,	// (0x0002642c) heading_pane_cp4

0x570a,	// (0x0002252e) listscroll_popup_colour_pane

0x5712,	// (0x00022536) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x5712,	// (0x00022536) cell_large_graphic_colour_none_popup_pane

0x9610,	// (0x00026434) grid_large_graphic_colour_popup_pane_ParamLimits

0x9610,	// (0x00026434) grid_large_graphic_colour_popup_pane

0x5722,	// (0x00022546) listscroll_popup_colour_pane_g1_ParamLimits

0x5722,	// (0x00022546) listscroll_popup_colour_pane_g1

0x5739,	// (0x0002255d) listscroll_popup_colour_pane_g2_ParamLimits

0x5739,	// (0x0002255d) listscroll_popup_colour_pane_g2

0x5750,	// (0x00022574) listscroll_popup_colour_pane_g3_ParamLimits

0x5750,	// (0x00022574) listscroll_popup_colour_pane_g3

0x962c,	// (0x00026450) listscroll_popup_colour_pane_g4_ParamLimits

0x962c,	// (0x00026450) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x0002c3bc) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x0002c3bc) listscroll_popup_colour_pane_g

0x5760,	// (0x00022584) scroll_pane_cp6_ParamLimits

0x5760,	// (0x00022584) scroll_pane_cp6

0x963b,	// (0x0002645f) cell_large_graphic_colour_popup_pane_ParamLimits

0x963b,	// (0x0002645f) cell_large_graphic_colour_popup_pane

0x5772,	// (0x00022596) cell_large_graphic_colour_none_popup_pane_t1

0x5378,	// (0x0002219c) grid_highlight_pane_cp5

0x5781,	// (0x000225a5) cell_large_graphic_colour_popup_pane_g1

0x5789,	// (0x000225ad) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0002c3c5) cell_large_graphic_colour_popup_pane_g

0x5791,	// (0x000225b5) cell_large_graphic_colour_popup_pane_g2_copy1

0x579a,	// (0x000225be) grid_highlight_pane_cp4

0x57a2,	// (0x000225c6) bg_popup_window_pane_cp8_ParamLimits

0x57a2,	// (0x000225c6) bg_popup_window_pane_cp8

0x57bd,	// (0x000225e1) popup_snote_single_text_window_g1_ParamLimits

0x57bd,	// (0x000225e1) popup_snote_single_text_window_g1

0x57cf,	// (0x000225f3) popup_snote_single_text_window_t1_ParamLimits

0x57cf,	// (0x000225f3) popup_snote_single_text_window_t1

0x57e2,	// (0x00022606) popup_snote_single_text_window_t2_ParamLimits

0x57e2,	// (0x00022606) popup_snote_single_text_window_t2

0x57f5,	// (0x00022619) popup_snote_single_text_window_t3_ParamLimits

0x57f5,	// (0x00022619) popup_snote_single_text_window_t3

0x582e,	// (0x00022652) popup_snote_single_text_window_t4_ParamLimits

0x582e,	// (0x00022652) popup_snote_single_text_window_t4

0x5862,	// (0x00022686) popup_snote_single_text_window_t5_ParamLimits

0x5862,	// (0x00022686) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0002c3ca) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0002c3ca) popup_snote_single_text_window_t

0x5891,	// (0x000226b5) bg_popup_window_pane_cp9_ParamLimits

0x5891,	// (0x000226b5) bg_popup_window_pane_cp9

0x57bd,	// (0x000225e1) popup_snote_single_graphic_window_g1_ParamLimits

0x57bd,	// (0x000225e1) popup_snote_single_graphic_window_g1

0x589f,	// (0x000226c3) popup_snote_single_graphic_window_g2_ParamLimits

0x589f,	// (0x000226c3) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0002c3d5) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0002c3d5) popup_snote_single_graphic_window_g

0x58ab,	// (0x000226cf) popup_snote_single_graphic_window_t1_ParamLimits

0x58ab,	// (0x000226cf) popup_snote_single_graphic_window_t1

0x58be,	// (0x000226e2) popup_snote_single_graphic_window_t2_ParamLimits

0x58be,	// (0x000226e2) popup_snote_single_graphic_window_t2

0x57f5,	// (0x00022619) popup_snote_single_graphic_window_t3_ParamLimits

0x57f5,	// (0x00022619) popup_snote_single_graphic_window_t3

0x582e,	// (0x00022652) popup_snote_single_graphic_window_t4_ParamLimits

0x582e,	// (0x00022652) popup_snote_single_graphic_window_t4

0x5862,	// (0x00022686) popup_snote_single_graphic_window_t5_ParamLimits

0x5862,	// (0x00022686) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0002c3da) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0002c3da) popup_snote_single_graphic_window_t

0x7a15,	// (0x00024839) grid_graphic_popup_pane_ParamLimits

0x7a15,	// (0x00024839) grid_graphic_popup_pane

0x7a39,	// (0x0002485d) listscroll_popup_graphic_pane_g1_ParamLimits

0x7a39,	// (0x0002485d) listscroll_popup_graphic_pane_g1

0xaebc,	// (0x00027ce0) listscroll_popup_graphic_pane_g2_ParamLimits

0xaebc,	// (0x00027ce0) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b0,	// (0x0002c7d4) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b0,	// (0x0002c7d4) listscroll_popup_graphic_pane_g

0x762c,	// (0x00024450) scroll_pane_cp5

0xae7b,	// (0x00027c9f) cell_graphic_popup_pane_ParamLimits

0xae7b,	// (0x00027c9f) cell_graphic_popup_pane

0x79e0,	// (0x00024804) cell_graphic_popup_pane_g1

0x79e8,	// (0x0002480c) cell_graphic_popup_pane_g2

0x5791,	// (0x000225b5) cell_graphic_popup_pane_g3

0x0002,

0xf9a9,	// (0x0002c7cd) cell_graphic_popup_pane_g

0x79f1,	// (0x00024815) cell_graphic_popup_pane_t2

0x579a,	// (0x000225be) grid_highlight_pane_cp3

0x58e3,	// (0x00022707) list_gen_pane_ParamLimits

0x58e3,	// (0x00022707) list_gen_pane

0x590b,	// (0x0002272f) scroll_pane

0xae3c,	// (0x00027c60) bg_list_pane_g1_ParamLimits

0xae3c,	// (0x00027c60) bg_list_pane_g1

0x798f,	// (0x000247b3) bg_list_pane_g2_ParamLimits

0x798f,	// (0x000247b3) bg_list_pane_g2

0x79a2,	// (0x000247c6) bg_list_pane_g3_ParamLimits

0x79a2,	// (0x000247c6) bg_list_pane_g3

0x79b4,	// (0x000247d8) bg_list_pane_g4_ParamLimits

0x79b4,	// (0x000247d8) bg_list_pane_g4

0xae53,	// (0x00027c77) bg_list_pane_g5_ParamLimits

0xae53,	// (0x00027c77) bg_list_pane_g5

0x0004,

0xf99e,	// (0x0002c7c2) bg_list_pane_g_ParamLimits

0xf99e,	// (0x0002c7c2) bg_list_pane_g

0xadbb,	// (0x00027bdf) list_double2_graphic_large_graphic_pane_ParamLimits

0xadbb,	// (0x00027bdf) list_double2_graphic_large_graphic_pane

0xadbb,	// (0x00027bdf) list_double2_graphic_pane_ParamLimits

0xadbb,	// (0x00027bdf) list_double2_graphic_pane

0xadbb,	// (0x00027bdf) list_double2_large_graphic_pane_ParamLimits

0xadbb,	// (0x00027bdf) list_double2_large_graphic_pane

0xadbb,	// (0x00027bdf) list_double2_pane_ParamLimits

0xadbb,	// (0x00027bdf) list_double2_pane

0xadbb,	// (0x00027bdf) list_double_graphic_heading_pane_ParamLimits

0xadbb,	// (0x00027bdf) list_double_graphic_heading_pane

0xadbb,	// (0x00027bdf) list_double_graphic_pane_ParamLimits

0xadbb,	// (0x00027bdf) list_double_graphic_pane

0xadbb,	// (0x00027bdf) list_double_heading_pane_ParamLimits

0xadbb,	// (0x00027bdf) list_double_heading_pane

0xadbb,	// (0x00027bdf) list_double_large_graphic_pane_ParamLimits

0xadbb,	// (0x00027bdf) list_double_large_graphic_pane

0xadbb,	// (0x00027bdf) list_double_number_pane_ParamLimits

0xadbb,	// (0x00027bdf) list_double_number_pane

0xadbb,	// (0x00027bdf) list_double_pane_ParamLimits

0xadbb,	// (0x00027bdf) list_double_pane

0xadbb,	// (0x00027bdf) list_double_time_pane_ParamLimits

0xadbb,	// (0x00027bdf) list_double_time_pane

0xadbb,	// (0x00027bdf) list_setting_number_pane_ParamLimits

0xadbb,	// (0x00027bdf) list_setting_number_pane

0xadbb,	// (0x00027bdf) list_setting_pane_ParamLimits

0xadbb,	// (0x00027bdf) list_setting_pane

0xaddf,	// (0x00027c03) list_single_2graphic_pane_ParamLimits

0xaddf,	// (0x00027c03) list_single_2graphic_pane

0xaddf,	// (0x00027c03) list_single_graphic_heading_pane_ParamLimits

0xaddf,	// (0x00027c03) list_single_graphic_heading_pane

0xaddf,	// (0x00027c03) list_single_graphic_pane_ParamLimits

0xaddf,	// (0x00027c03) list_single_graphic_pane

0xaddf,	// (0x00027c03) list_single_heading_pane_ParamLimits

0xaddf,	// (0x00027c03) list_single_heading_pane

0xae27,	// (0x00027c4b) list_single_large_graphic_pane_ParamLimits

0xae27,	// (0x00027c4b) list_single_large_graphic_pane

0xaddf,	// (0x00027c03) list_single_number_heading_pane_ParamLimits

0xaddf,	// (0x00027c03) list_single_number_heading_pane

0xaddf,	// (0x00027c03) list_single_number_pane_ParamLimits

0xaddf,	// (0x00027c03) list_single_number_pane

0xaddf,	// (0x00027c03) list_single_pane_ParamLimits

0xaddf,	// (0x00027c03) list_single_pane

0x5378,	// (0x0002219c) list_highlight_pane_cp1

0xc23b,	// (0x0002905f) list_single_pane_g1_ParamLimits

0xc23b,	// (0x0002905f) list_single_pane_g1

0xc247,	// (0x0002906b) list_single_pane_g2_ParamLimits

0xc247,	// (0x0002906b) list_single_pane_g2

0x0001,

0xf5c8,	// (0x0002c3ec) list_single_pane_g_ParamLimits

0xf5c8,	// (0x0002c3ec) list_single_pane_g

0xe46f,	// (0x0002b293) list_single_pane_t1_ParamLimits

0xe46f,	// (0x0002b293) list_single_pane_t1

0xc23b,	// (0x0002905f) list_single_number_pane_g1_ParamLimits

0xc23b,	// (0x0002905f) list_single_number_pane_g1

0xc247,	// (0x0002906b) list_single_number_pane_g2_ParamLimits

0xc247,	// (0x0002906b) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x0002c3ec) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x0002c3ec) list_single_number_pane_g

0xe41b,	// (0x0002b23f) list_single_number_pane_t1_ParamLimits

0xe41b,	// (0x0002b23f) list_single_number_pane_t1

0xe431,	// (0x0002b255) list_single_number_pane_t2_ParamLimits

0xe431,	// (0x0002b255) list_single_number_pane_t2

0x0001,

0xf95f,	// (0x0002c783) list_single_number_pane_t_ParamLimits

0xf95f,	// (0x0002c783) list_single_number_pane_t

0xc22f,	// (0x00029053) list_single_graphic_pane_g1_ParamLimits

0xc22f,	// (0x00029053) list_single_graphic_pane_g1

0xc23b,	// (0x0002905f) list_single_graphic_pane_g2_ParamLimits

0xc23b,	// (0x0002905f) list_single_graphic_pane_g2

0xc247,	// (0x0002906b) list_single_graphic_pane_g3_ParamLimits

0xc247,	// (0x0002906b) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0002c3e5) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0002c3e5) list_single_graphic_pane_g

0xc253,	// (0x00029077) list_single_graphic_pane_t1_ParamLimits

0xc253,	// (0x00029077) list_single_graphic_pane_t1

0xc23b,	// (0x0002905f) list_single_heading_pane_g1_ParamLimits

0xc23b,	// (0x0002905f) list_single_heading_pane_g1

0xc247,	// (0x0002906b) list_single_heading_pane_g2_ParamLimits

0xc247,	// (0x0002906b) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x0002c3ec) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x0002c3ec) list_single_heading_pane_g

0xc269,	// (0x0002908d) list_single_heading_pane_t1_ParamLimits

0xc269,	// (0x0002908d) list_single_heading_pane_t1

0xc27f,	// (0x000290a3) list_single_heading_pane_t2_ParamLimits

0xc27f,	// (0x000290a3) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x0002c3f1) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x0002c3f1) list_single_heading_pane_t

0xc23b,	// (0x0002905f) list_single_number_heading_pane_g1_ParamLimits

0xc23b,	// (0x0002905f) list_single_number_heading_pane_g1

0xc247,	// (0x0002906b) list_single_number_heading_pane_g2_ParamLimits

0xc247,	// (0x0002906b) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x0002c3ec) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x0002c3ec) list_single_number_heading_pane_g

0xc269,	// (0x0002908d) list_single_number_heading_pane_t1_ParamLimits

0xc269,	// (0x0002908d) list_single_number_heading_pane_t1

0xc291,	// (0x000290b5) list_single_number_heading_pane_t2_ParamLimits

0xc291,	// (0x000290b5) list_single_number_heading_pane_t2

0xc2a3,	// (0x000290c7) list_single_number_heading_pane_t3_ParamLimits

0xc2a3,	// (0x000290c7) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x0002c3f6) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x0002c3f6) list_single_number_heading_pane_t

0xc2b5,	// (0x000290d9) list_single_graphic_heading_pane_g1_ParamLimits

0xc2b5,	// (0x000290d9) list_single_graphic_heading_pane_g1

0xc2c1,	// (0x000290e5) list_single_graphic_heading_pane_g4_ParamLimits

0xc2c1,	// (0x000290e5) list_single_graphic_heading_pane_g4

0xc247,	// (0x0002906b) list_single_graphic_heading_pane_g5_ParamLimits

0xc247,	// (0x0002906b) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x0002c3fd) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x0002c3fd) list_single_graphic_heading_pane_g

0xc269,	// (0x0002908d) list_single_graphic_heading_pane_t1_ParamLimits

0xc269,	// (0x0002908d) list_single_graphic_heading_pane_t1

0xc2d0,	// (0x000290f4) list_single_graphic_heading_pane_t2_ParamLimits

0xc2d0,	// (0x000290f4) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x0002c404) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x0002c404) list_single_graphic_heading_pane_t

0xc2e2,	// (0x00029106) list_single_large_graphic_pane_g1_ParamLimits

0xc2e2,	// (0x00029106) list_single_large_graphic_pane_g1

0xc2ee,	// (0x00029112) list_single_large_graphic_pane_g2_ParamLimits

0xc2ee,	// (0x00029112) list_single_large_graphic_pane_g2

0xc2fa,	// (0x0002911e) list_single_large_graphic_pane_g3_ParamLimits

0xc2fa,	// (0x0002911e) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x0002c409) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x0002c409) list_single_large_graphic_pane_g

0x6cb0,	// (0x00023ad4) wait_border_pane_g2_copy1

0xc306,	// (0x0002912a) list_single_large_graphic_pane_g4_cp2

0xc30e,	// (0x00029132) list_single_large_graphic_pane_t1_ParamLimits

0xc30e,	// (0x00029132) list_single_large_graphic_pane_t1

0xc324,	// (0x00029148) list_double_pane_g1_ParamLimits

0xc324,	// (0x00029148) list_double_pane_g1

0xc330,	// (0x00029154) list_double_pane_g2_ParamLimits

0xc330,	// (0x00029154) list_double_pane_g2

0x0001,

0xf5ec,	// (0x0002c410) list_double_pane_g_ParamLimits

0xf5ec,	// (0x0002c410) list_double_pane_g

0xc33c,	// (0x00029160) list_double_pane_t1_ParamLimits

0xc33c,	// (0x00029160) list_double_pane_t1

0xc352,	// (0x00029176) list_double_pane_t2_ParamLimits

0xc352,	// (0x00029176) list_double_pane_t2

0x0001,

0xf5f1,	// (0x0002c415) list_double_pane_t_ParamLimits

0xf5f1,	// (0x0002c415) list_double_pane_t

0xc364,	// (0x00029188) list_double2_pane_g1_ParamLimits

0xc364,	// (0x00029188) list_double2_pane_g1

0xc373,	// (0x00029197) list_double2_pane_g2_ParamLimits

0xc373,	// (0x00029197) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x0002c41a) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x0002c41a) list_double2_pane_g

0xc37f,	// (0x000291a3) list_double2_pane_t1_ParamLimits

0xc37f,	// (0x000291a3) list_double2_pane_t1

0xc395,	// (0x000291b9) list_double2_pane_t2_ParamLimits

0xc395,	// (0x000291b9) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x0002c41f) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x0002c41f) list_double2_pane_t

0xc324,	// (0x00029148) list_double_number_pane_g1_ParamLimits

0xc324,	// (0x00029148) list_double_number_pane_g1

0xc330,	// (0x00029154) list_double_number_pane_g2_ParamLimits

0xc330,	// (0x00029154) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x0002c410) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x0002c410) list_double_number_pane_g

0xc3a7,	// (0x000291cb) list_double_number_pane_t1_ParamLimits

0xc3a7,	// (0x000291cb) list_double_number_pane_t1

0xc3b9,	// (0x000291dd) list_double_number_pane_t2_ParamLimits

0xc3b9,	// (0x000291dd) list_double_number_pane_t2

0xc3cf,	// (0x000291f3) list_double_number_pane_t3_ParamLimits

0xc3cf,	// (0x000291f3) list_double_number_pane_t3

0x0002,

0xf600,	// (0x0002c424) list_double_number_pane_t_ParamLimits

0xf600,	// (0x0002c424) list_double_number_pane_t

0xc3e1,	// (0x00029205) list_double_graphic_pane_g1_ParamLimits

0xc3e1,	// (0x00029205) list_double_graphic_pane_g1

0xc3ed,	// (0x00029211) list_double_graphic_pane_g2_ParamLimits

0xc3ed,	// (0x00029211) list_double_graphic_pane_g2

0xc3fc,	// (0x00029220) list_double_graphic_pane_g3_ParamLimits

0xc3fc,	// (0x00029220) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x0002c42b) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x0002c42b) list_double_graphic_pane_g

0xc414,	// (0x00029238) list_double_graphic_pane_t1_ParamLimits

0xc414,	// (0x00029238) list_double_graphic_pane_t1

0xc42a,	// (0x0002924e) list_double_graphic_pane_t2_ParamLimits

0xc42a,	// (0x0002924e) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x0002c434) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x0002c434) list_double_graphic_pane_t

0xc43c,	// (0x00029260) list_double2_graphic_pane_g1_ParamLimits

0xc43c,	// (0x00029260) list_double2_graphic_pane_g1

0xc324,	// (0x00029148) list_double2_graphic_pane_g2_ParamLimits

0xc324,	// (0x00029148) list_double2_graphic_pane_g2

0xc330,	// (0x00029154) list_double2_graphic_pane_g3_ParamLimits

0xc330,	// (0x00029154) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x0002c439) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x0002c439) list_double2_graphic_pane_g

0xc448,	// (0x0002926c) list_double2_graphic_pane_t1_ParamLimits

0xc448,	// (0x0002926c) list_double2_graphic_pane_t1

0xc45e,	// (0x00029282) list_double2_graphic_pane_t2_ParamLimits

0xc45e,	// (0x00029282) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x0002c440) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x0002c440) list_double2_graphic_pane_t

0xc470,	// (0x00029294) list_double_large_graphic_pane_g1_ParamLimits

0xc470,	// (0x00029294) list_double_large_graphic_pane_g1

0xc48f,	// (0x000292b3) list_double_large_graphic_pane_g2_ParamLimits

0xc48f,	// (0x000292b3) list_double_large_graphic_pane_g2

0xc330,	// (0x00029154) list_double_large_graphic_pane_g3_ParamLimits

0xc330,	// (0x00029154) list_double_large_graphic_pane_g3

0xc49e,	// (0x000292c2) list_double_large_graphic_pane_g4_ParamLimits

0xc49e,	// (0x000292c2) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x0002c445) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x0002c445) list_double_large_graphic_pane_g

0xc4c4,	// (0x000292e8) list_double_large_graphic_pane_t1_ParamLimits

0xc4c4,	// (0x000292e8) list_double_large_graphic_pane_t1

0xc4dd,	// (0x00029301) list_double_large_graphic_pane_t2_ParamLimits

0xc4dd,	// (0x00029301) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x0002c450) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x0002c450) list_double_large_graphic_pane_t

0xc4ef,	// (0x00029313) list_double2_large_graphic_pane_g1_ParamLimits

0xc4ef,	// (0x00029313) list_double2_large_graphic_pane_g1

0xc364,	// (0x00029188) list_double2_large_graphic_pane_g2_ParamLimits

0xc364,	// (0x00029188) list_double2_large_graphic_pane_g2

0xc373,	// (0x00029197) list_double2_large_graphic_pane_g3_ParamLimits

0xc373,	// (0x00029197) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x0002c455) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x0002c455) list_double2_large_graphic_pane_g

0xc4fb,	// (0x0002931f) list_double2_large_graphic_pane_t1_ParamLimits

0xc4fb,	// (0x0002931f) list_double2_large_graphic_pane_t1

0xc511,	// (0x00029335) list_double2_large_graphic_pane_t2_ParamLimits

0xc511,	// (0x00029335) list_double2_large_graphic_pane_t2

0x0001,

0xf638,	// (0x0002c45c) list_double2_large_graphic_pane_t_ParamLimits

0xf638,	// (0x0002c45c) list_double2_large_graphic_pane_t

0xc523,	// (0x00029347) list_double_heading_pane_g1_ParamLimits

0xc523,	// (0x00029347) list_double_heading_pane_g1

0xc532,	// (0x00029356) list_double_heading_pane_g2_ParamLimits

0xc532,	// (0x00029356) list_double_heading_pane_g2

0x0001,

0xf63d,	// (0x0002c461) list_double_heading_pane_g_ParamLimits

0xf63d,	// (0x0002c461) list_double_heading_pane_g

0xc53e,	// (0x00029362) list_double_heading_pane_t1_ParamLimits

0xc53e,	// (0x00029362) list_double_heading_pane_t1

0xc395,	// (0x000291b9) list_double_heading_pane_t2_ParamLimits

0xc395,	// (0x000291b9) list_double_heading_pane_t2

0x0001,

0xf642,	// (0x0002c466) list_double_heading_pane_t_ParamLimits

0xf642,	// (0x0002c466) list_double_heading_pane_t

0xdf1b,	// (0x0002ad3f) list_double_graphic_heading_pane_g1_ParamLimits

0xdf1b,	// (0x0002ad3f) list_double_graphic_heading_pane_g1

0xc523,	// (0x00029347) list_double_graphic_heading_pane_g2_ParamLimits

0xc523,	// (0x00029347) list_double_graphic_heading_pane_g2

0xc532,	// (0x00029356) list_double_graphic_heading_pane_g3_ParamLimits

0xc532,	// (0x00029356) list_double_graphic_heading_pane_g3

0x0002,

0xf647,	// (0x0002c46b) list_double_graphic_heading_pane_g_ParamLimits

0xf647,	// (0x0002c46b) list_double_graphic_heading_pane_g

0xdf27,	// (0x0002ad4b) list_double_graphic_heading_pane_t1_ParamLimits

0xdf27,	// (0x0002ad4b) list_double_graphic_heading_pane_t1

0xc45e,	// (0x00029282) list_double_graphic_heading_pane_t2_ParamLimits

0xc45e,	// (0x00029282) list_double_graphic_heading_pane_t2

0x0001,

0xf64e,	// (0x0002c472) list_double_graphic_heading_pane_t_ParamLimits

0xf64e,	// (0x0002c472) list_double_graphic_heading_pane_t

0xc48f,	// (0x000292b3) list_double_time_pane_g1_ParamLimits

0xc48f,	// (0x000292b3) list_double_time_pane_g1

0xc330,	// (0x00029154) list_double_time_pane_g2_ParamLimits

0xc330,	// (0x00029154) list_double_time_pane_g2

0x0001,

0xf653,	// (0x0002c477) list_double_time_pane_g_ParamLimits

0xf653,	// (0x0002c477) list_double_time_pane_g

0xdf3d,	// (0x0002ad61) list_double_time_pane_t1_ParamLimits

0xdf3d,	// (0x0002ad61) list_double_time_pane_t1

0xdf53,	// (0x0002ad77) list_double_time_pane_t2_ParamLimits

0xdf53,	// (0x0002ad77) list_double_time_pane_t2

0xdf65,	// (0x0002ad89) list_double_time_pane_t3_ParamLimits

0xdf65,	// (0x0002ad89) list_double_time_pane_t3

0xdf77,	// (0x0002ad9b) list_double_time_pane_t4_ParamLimits

0xdf77,	// (0x0002ad9b) list_double_time_pane_t4

0x0003,

0xf658,	// (0x0002c47c) list_double_time_pane_t_ParamLimits

0xf658,	// (0x0002c47c) list_double_time_pane_t

0xdf89,	// (0x0002adad) list_setting_pane_g1_ParamLimits

0xdf89,	// (0x0002adad) list_setting_pane_g1

0xc373,	// (0x00029197) list_setting_pane_g2_ParamLimits

0xc373,	// (0x00029197) list_setting_pane_g2

0x0001,

0xf661,	// (0x0002c485) list_setting_pane_g_ParamLimits

0xf661,	// (0x0002c485) list_setting_pane_g

0xdf95,	// (0x0002adb9) list_setting_pane_t1_ParamLimits

0xdf95,	// (0x0002adb9) list_setting_pane_t1

0xdfaf,	// (0x0002add3) list_setting_pane_t2_ParamLimits

0xdfaf,	// (0x0002add3) list_setting_pane_t2

0x0002,

0xf666,	// (0x0002c48a) list_setting_pane_t_ParamLimits

0xf666,	// (0x0002c48a) list_setting_pane_t

0xdfec,	// (0x0002ae10) set_value_pane_cp_ParamLimits

0xdfec,	// (0x0002ae10) set_value_pane_cp

0xdff8,	// (0x0002ae1c) list_setting_number_pane_g1_ParamLimits

0xdff8,	// (0x0002ae1c) list_setting_number_pane_g1

0xe004,	// (0x0002ae28) list_setting_number_pane_g2_ParamLimits

0xe004,	// (0x0002ae28) list_setting_number_pane_g2

0x0001,

0xf66d,	// (0x0002c491) list_setting_number_pane_g_ParamLimits

0xf66d,	// (0x0002c491) list_setting_number_pane_g

0xe010,	// (0x0002ae34) list_setting_number_pane_t1_ParamLimits

0xe010,	// (0x0002ae34) list_setting_number_pane_t1

0xe027,	// (0x0002ae4b) list_setting_number_pane_t2_ParamLimits

0xe027,	// (0x0002ae4b) list_setting_number_pane_t2

0xe041,	// (0x0002ae65) list_setting_number_pane_t3_ParamLimits

0xe041,	// (0x0002ae65) list_setting_number_pane_t3

0x0003,

0xf672,	// (0x0002c496) list_setting_number_pane_t_ParamLimits

0xf672,	// (0x0002c496) list_setting_number_pane_t

0xdfec,	// (0x0002ae10) set_value_pane_ParamLimits

0xdfec,	// (0x0002ae10) set_value_pane

0x593f,	// (0x00022763) bg_set_opt_pane_ParamLimits

0x593f,	// (0x00022763) bg_set_opt_pane

0xe082,	// (0x0002aea6) set_value_pane_t1

0x5960,	// (0x00022784) slider_set_pane_cp3

0x9664,	// (0x00026488) volume_small_pane_cp

0x5969,	// (0x0002278d) list_form_gen_pane

0x5972,	// (0x00022796) scroll_pane_cp8

0xe098,	// (0x0002aebc) form_field_data_pane_ParamLimits

0xe098,	// (0x0002aebc) form_field_data_pane

0xe0b8,	// (0x0002aedc) form_field_data_wide_pane_ParamLimits

0xe0b8,	// (0x0002aedc) form_field_data_wide_pane

0xe0d7,	// (0x0002aefb) form_field_popup_pane_ParamLimits

0xe0d7,	// (0x0002aefb) form_field_popup_pane

0xe0ef,	// (0x0002af13) form_field_popup_wide_pane_ParamLimits

0xe0ef,	// (0x0002af13) form_field_popup_wide_pane

0xe106,	// (0x0002af2a) form_field_slider_pane_ParamLimits

0xe106,	// (0x0002af2a) form_field_slider_pane

0xe119,	// (0x0002af3d) form_field_slider_wide_pane_ParamLimits

0xe119,	// (0x0002af3d) form_field_slider_wide_pane

0x5983,	// (0x000227a7) data_form_pane

0xe134,	// (0x0002af58) form_field_data_pane_t1

0x598f,	// (0x000227b3) input_focus_pane

0xe14c,	// (0x0002af70) data_form_wide_pane

0xe169,	// (0x0002af8d) form_field_data_wide_pane_t1

0x57af,	// (0x000225d3) input_focus_pane_cp6

0xe18b,	// (0x0002afaf) form_field_popup_pane_t1

0x598f,	// (0x000227b3) input_focus_pane_cp7

0x59bd,	// (0x000227e1) list_form_pane

0xe1ab,	// (0x0002afcf) form_field_popup_wide_pane_t1

0x598f,	// (0x000227b3) input_focus_pane_cp8

0x59c9,	// (0x000227ed) list_form_wide_pane

0xe1c8,	// (0x0002afec) form_field_slider_pane_t1_ParamLimits

0xe1c8,	// (0x0002afec) form_field_slider_pane_t1

0xe1da,	// (0x0002affe) form_field_slider_pane_t2_ParamLimits

0xe1da,	// (0x0002affe) form_field_slider_pane_t2

0x0001,

0xf682,	// (0x0002c4a6) form_field_slider_pane_t_ParamLimits

0xf682,	// (0x0002c4a6) form_field_slider_pane_t

0x53c6,	// (0x000221ea) input_focus_pane_cp9_ParamLimits

0x53c6,	// (0x000221ea) input_focus_pane_cp9

0xe1ec,	// (0x0002b010) slider_cont_pane_ParamLimits

0xe1ec,	// (0x0002b010) slider_cont_pane

0x59d5,	// (0x000227f9) form_field_slider_wide_pane_t1_ParamLimits

0x59d5,	// (0x000227f9) form_field_slider_wide_pane_t1

0xe200,	// (0x0002b024) form_field_slider_wide_pane_t2_ParamLimits

0xe200,	// (0x0002b024) form_field_slider_wide_pane_t2

0x0001,

0xf687,	// (0x0002c4ab) form_field_slider_wide_pane_t_ParamLimits

0xf687,	// (0x0002c4ab) form_field_slider_wide_pane_t

0x53c6,	// (0x000221ea) input_focus_pane_cp10_ParamLimits

0x53c6,	// (0x000221ea) input_focus_pane_cp10

0xe212,	// (0x0002b036) slider_cont_pane_cp1_ParamLimits

0xe212,	// (0x0002b036) slider_cont_pane_cp1

0xe226,	// (0x0002b04a) slider_form_pane_cp

0x59e7,	// (0x0002280b) input_focus_pane_g1

0x59ef,	// (0x00022813) input_focus_pane_g2

0x59f7,	// (0x0002281b) input_focus_pane_g3

0x59ff,	// (0x00022823) input_focus_pane_g4

0x5a07,	// (0x0002282b) input_focus_pane_g5

0x5a0f,	// (0x00022833) input_focus_pane_g6

0x5a17,	// (0x0002283b) input_focus_pane_g7

0x5a1f,	// (0x00022843) input_focus_pane_g8

0x5a27,	// (0x0002284b) input_focus_pane_g9

0x536e,	// (0x00022192) input_focus_pane_g10

0x0009,

0xf68c,	// (0x0002c4b0) input_focus_pane_g

0x6cb9,	// (0x00023add) wait_border_pane_g3_copy1

0xe22e,	// (0x0002b052) data_form_pane_t1

0x536e,	// (0x00022192) wait_anim_pane_g1_copy1

0xe443,	// (0x0002b267) data_form_wide_pane_t1

0xe248,	// (0x0002b06c) list_form_graphic_pane_cp_ParamLimits

0xe248,	// (0x0002b06c) list_form_graphic_pane_cp

0x790f,	// (0x00024733) slider_form_pane_g1

0x7918,	// (0x0002473c) slider_form_pane_g2

0x0006,

0xf98f,	// (0x0002c7b3) slider_form_pane_g

0xe248,	// (0x0002b06c) list_form_graphic_pane_ParamLimits

0xe248,	// (0x0002b06c) list_form_graphic_pane

0xe259,	// (0x0002b07d) list_form_graphic_pane_g1

0xe261,	// (0x0002b085) list_form_graphic_pane_t1_ParamLimits

0xe261,	// (0x0002b085) list_form_graphic_pane_t1

0x53e4,	// (0x00022208) list_highlight_pane_cp5_ParamLimits

0x53e4,	// (0x00022208) list_highlight_pane_cp5

0xe276,	// (0x0002b09a) find_pane_g1

0x5a2f,	// (0x00022853) input_find_pane

0xe27f,	// (0x0002b0a3) input_find_pane_g1_ParamLimits

0xe27f,	// (0x0002b0a3) input_find_pane_g1

0xe28b,	// (0x0002b0af) input_find_pane_t1_ParamLimits

0xe28b,	// (0x0002b0af) input_find_pane_t1

0xe2a0,	// (0x0002b0c4) input_find_pane_t2_ParamLimits

0xe2a0,	// (0x0002b0c4) input_find_pane_t2

0x0001,

0xf6a1,	// (0x0002c4c5) input_find_pane_t_ParamLimits

0xf6a1,	// (0x0002c4c5) input_find_pane_t

0x5a38,	// (0x0002285c) input_focus_pane_cp5_ParamLimits

0x5a38,	// (0x0002285c) input_focus_pane_cp5

0x5a46,	// (0x0002286a) bg_popup_window_pane_cp2_ParamLimits

0x5a46,	// (0x0002286a) bg_popup_window_pane_cp2

0x5a53,	// (0x00022877) listscroll_menu_pane_ParamLimits

0x5a53,	// (0x00022877) listscroll_menu_pane

0x9679,	// (0x0002649d) popup_submenu_window_ParamLimits

0x9679,	// (0x0002649d) popup_submenu_window

0x5a5f,	// (0x00022883) find_popup_pane_g1

0x5a67,	// (0x0002288b) input_popup_find_pane_cp

0x5a38,	// (0x0002285c) input_focus_pane_cp4_ParamLimits

0x5a38,	// (0x0002285c) input_focus_pane_cp4

0x5a71,	// (0x00022895) input_popup_find_pane_t1_ParamLimits

0x5a71,	// (0x00022895) input_popup_find_pane_t1

0x5378,	// (0x0002219c) bg_popup_sub_pane_cp

0x5a9f,	// (0x000228c3) listscroll_popup_sub_pane

0x5aa7,	// (0x000228cb) list_submenu_pane_ParamLimits

0x5aa7,	// (0x000228cb) list_submenu_pane

0x5ab8,	// (0x000228dc) scroll_pane_cp4

0x5ac0,	// (0x000228e4) list_single_popup_submenu_pane_ParamLimits

0x5ac0,	// (0x000228e4) list_single_popup_submenu_pane

0x5ad3,	// (0x000228f7) list_single_popup_submenu_pane_g1

0x5adb,	// (0x000228ff) list_single_popup_submenu_pane_t1_ParamLimits

0x5adb,	// (0x000228ff) list_single_popup_submenu_pane_t1

0x53e4,	// (0x00022208) bg_active_tab_pane_cp1_ParamLimits

0x53e4,	// (0x00022208) bg_active_tab_pane_cp1

0x5af0,	// (0x00022914) tabs_2_active_pane_g1

0x96a9,	// (0x000264cd) tabs_2_active_pane_t1

0x53e4,	// (0x00022208) bg_passive_tab_pane_cp1_ParamLimits

0x53e4,	// (0x00022208) bg_passive_tab_pane_cp1

0x5af0,	// (0x00022914) tabs_2_passive_pane_g1

0x96a9,	// (0x000264cd) tabs_2_passive_pane_t1

0x668d,	// (0x000234b1) bg_active_tab_pane_cp4

0x96bb,	// (0x000264df) tabs_2_long_active_pane_t1

0x96ce,	// (0x000264f2) bg_passive_tab_pane_cp4

0xa783,	// (0x000275a7) list_single_midp_graphic_pane_g4_ParamLimits

0x668d,	// (0x000234b1) bg_active_tab_pane_cp5

0x96da,	// (0x000264fe) tabs_3_long_active_pane_t1

0x96ce,	// (0x000264f2) bg_passive_tab_pane_cp5

0xa783,	// (0x000275a7) list_single_midp_graphic_pane_g4

0x53e4,	// (0x00022208) bg_popup_window_pane_cp13_ParamLimits

0x53e4,	// (0x00022208) bg_popup_window_pane_cp13

0x5b0d,	// (0x00022931) listscroll_popup_fast_pane_ParamLimits

0x5b0d,	// (0x00022931) listscroll_popup_fast_pane

0x5b1c,	// (0x00022940) grid_popup_fast_pane_ParamLimits

0x5b1c,	// (0x00022940) grid_popup_fast_pane

0x5b2e,	// (0x00022952) scroll_pane_cp9_ParamLimits

0x5b2e,	// (0x00022952) scroll_pane_cp9

0xcb99,	// (0x000299bd) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xcb99,	// (0x000299bd) list_single_graphic_hl_pane_t1_cp2

0x5b52,	// (0x00022976) input_focus_pane_cp20_ParamLimits

0x5b52,	// (0x00022976) input_focus_pane_cp20

0x5b60,	// (0x00022984) query_popup_data_pane_t1_ParamLimits

0x5b60,	// (0x00022984) query_popup_data_pane_t1

0x5b73,	// (0x00022997) query_popup_data_pane_t2_ParamLimits

0x5b73,	// (0x00022997) query_popup_data_pane_t2

0x5bb9,	// (0x000229dd) query_popup_data_pane_t3_ParamLimits

0x5bb9,	// (0x000229dd) query_popup_data_pane_t3

0x5bfa,	// (0x00022a1e) query_popup_data_pane_t4_ParamLimits

0x5bfa,	// (0x00022a1e) query_popup_data_pane_t4

0x5c36,	// (0x00022a5a) query_popup_data_pane_t5_ParamLimits

0x5c36,	// (0x00022a5a) query_popup_data_pane_t5

0x0004,

0xf6a6,	// (0x0002c4ca) query_popup_data_pane_t_ParamLimits

0xf6a6,	// (0x0002c4ca) query_popup_data_pane_t

0x59e7,	// (0x0002280b) bg_set_opt_pane_g1

0x59ef,	// (0x00022813) bg_set_opt_pane_g2

0x59f7,	// (0x0002281b) bg_set_opt_pane_g3

0x59ff,	// (0x00022823) bg_set_opt_pane_g4

0x5a07,	// (0x0002282b) bg_set_opt_pane_g5

0x5a0f,	// (0x00022833) bg_set_opt_pane_g6

0x5a17,	// (0x0002283b) bg_set_opt_pane_g7

0x5a1f,	// (0x00022843) bg_set_opt_pane_g8

0x5a27,	// (0x0002284b) bg_set_opt_pane_g9

0x0008,

0xf6b1,	// (0x0002c4d5) bg_set_opt_pane_g

0x9a82,	// (0x000268a6) control_top_pane_stacon_ParamLimits

0x9a82,	// (0x000268a6) control_top_pane_stacon

0x9ad5,	// (0x000268f9) signal_pane_stacon_ParamLimits

0x9ad5,	// (0x000268f9) signal_pane_stacon

0x60d1,	// (0x00022ef5) stacon_top_pane_g1_ParamLimits

0x60d1,	// (0x00022ef5) stacon_top_pane_g1

0x9afa,	// (0x0002691e) title_pane_stacon_ParamLimits

0x9afa,	// (0x0002691e) title_pane_stacon

0x9b1c,	// (0x00026940) uni_indicator_pane_stacon_ParamLimits

0x9b1c,	// (0x00026940) uni_indicator_pane_stacon

0x9b31,	// (0x00026955) battery_pane_stacon_ParamLimits

0x9b31,	// (0x00026955) battery_pane_stacon

0x9b71,	// (0x00026995) control_bottom_pane_stacon_ParamLimits

0x9b71,	// (0x00026995) control_bottom_pane_stacon

0x9b90,	// (0x000269b4) navi_pane_stacon_ParamLimits

0x9b90,	// (0x000269b4) navi_pane_stacon

0x60f3,	// (0x00022f17) stacon_bottom_pane_g1_ParamLimits

0x60f3,	// (0x00022f17) stacon_bottom_pane_g1

0x96ec,	// (0x00026510) aid_levels_signal_lsc_ParamLimits

0x96ec,	// (0x00026510) aid_levels_signal_lsc

0x9703,	// (0x00026527) signal_pane_stacon_g1_ParamLimits

0x9703,	// (0x00026527) signal_pane_stacon_g1

0x9717,	// (0x0002653b) signal_pane_stacon_g2_ParamLimits

0x9717,	// (0x0002653b) signal_pane_stacon_g2

0x0001,

0xf6c4,	// (0x0002c4e8) signal_pane_stacon_g_ParamLimits

0xf6c4,	// (0x0002c4e8) signal_pane_stacon_g

0x974c,	// (0x00026570) title_pane_stacon_t1_ParamLimits

0x974c,	// (0x00026570) title_pane_stacon_t1

0x5c8e,	// (0x00022ab2) uni_indicator_pane_stacon_g1

0x5c98,	// (0x00022abc) uni_indicator_pane_stacon_g2

0x5c7a,	// (0x00022a9e) uni_indicator_pane_stacon_g3

0x5c84,	// (0x00022aa8) uni_indicator_pane_stacon_g4

0x0003,

0xf6d0,	// (0x0002c4f4) uni_indicator_pane_stacon_g

0x9771,	// (0x00026595) control_top_pane_stacon_g1

0x9779,	// (0x0002659d) control_top_pane_stacon_t1_ParamLimits

0x9779,	// (0x0002659d) control_top_pane_stacon_t1

0x97b0,	// (0x000265d4) aid_levels_battery_lsc_ParamLimits

0x97b0,	// (0x000265d4) aid_levels_battery_lsc

0x97c8,	// (0x000265ec) battery_pane_stacon_g1_ParamLimits

0x97c8,	// (0x000265ec) battery_pane_stacon_g1

0x97db,	// (0x000265ff) battery_pane_stacon_g2_ParamLimits

0x97db,	// (0x000265ff) battery_pane_stacon_g2

0x0001,

0xf6d9,	// (0x0002c4fd) battery_pane_stacon_g_ParamLimits

0xf6d9,	// (0x0002c4fd) battery_pane_stacon_g

0x9811,	// (0x00026635) navi_icon_pane_stacon

0x9825,	// (0x00026649) navi_navi_pane_stacon

0x9811,	// (0x00026635) navi_text_pane_stacon

0x9771,	// (0x00026595) control_bottom_pane_stacon_g1

0x9839,	// (0x0002665d) control_bottom_pane_stacon_t1_ParamLimits

0x9839,	// (0x0002665d) control_bottom_pane_stacon_t1

0x9870,	// (0x00026694) grid_app_pane_ParamLimits

0x9870,	// (0x00026694) grid_app_pane

0x988e,	// (0x000266b2) scroll_pane_cp15_ParamLimits

0x988e,	// (0x000266b2) scroll_pane_cp15

0x989f,	// (0x000266c3) cell_app_pane_ParamLimits

0x989f,	// (0x000266c3) cell_app_pane

0x98c3,	// (0x000266e7) cell_app_pane_g1_ParamLimits

0x98c3,	// (0x000266e7) cell_app_pane_g1

0x5cbc,	// (0x00022ae0) cell_app_pane_g2_ParamLimits

0x5cbc,	// (0x00022ae0) cell_app_pane_g2

0x0001,

0xf6de,	// (0x0002c502) cell_app_pane_g_ParamLimits

0xf6de,	// (0x0002c502) cell_app_pane_g

0x98e7,	// (0x0002670b) cell_app_pane_t1_ParamLimits

0x98e7,	// (0x0002670b) cell_app_pane_t1

0x5cc8,	// (0x00022aec) grid_highlight_pane_ParamLimits

0x5cc8,	// (0x00022aec) grid_highlight_pane

0x59e7,	// (0x0002280b) cell_highlight_pane_g1

0x59ef,	// (0x00022813) cell_highlight_pane_g2

0x59f7,	// (0x0002281b) cell_highlight_pane_g3

0x59ff,	// (0x00022823) cell_highlight_pane_g4

0x5a07,	// (0x0002282b) cell_highlight_pane_g5

0x5a0f,	// (0x00022833) cell_highlight_pane_g6

0x5a17,	// (0x0002283b) cell_highlight_pane_g7

0x5a1f,	// (0x00022843) cell_highlight_pane_g8

0x5a27,	// (0x0002284b) cell_highlight_pane_g9

0x536e,	// (0x00022192) cell_highlight_pane_g10

0x0009,

0xf68c,	// (0x0002c4b0) cell_highlight_pane_g

0x5cd9,	// (0x00022afd) bg_scroll_pane

0x9911,	// (0x00026735) scroll_handle_pane

0x5d20,	// (0x00022b44) scroll_bg_pane_g1

0x5d35,	// (0x00022b59) scroll_bg_pane_g2

0x5d4d,	// (0x00022b71) scroll_bg_pane_g3

0x0002,

0xf6e3,	// (0x0002c507) scroll_bg_pane_g

0x5d62,	// (0x00022b86) scroll_handle_focus_pane_ParamLimits

0x5d62,	// (0x00022b86) scroll_handle_focus_pane

0x5d20,	// (0x00022b44) scroll_handle_pane_g1

0x5d6f,	// (0x00022b93) scroll_handle_pane_g2

0x5d4d,	// (0x00022b71) scroll_handle_pane_g3

0x0002,

0xf6ea,	// (0x0002c50e) scroll_handle_pane_g

0x5a38,	// (0x0002285c) bg_popup_sub_pane_cp21_ParamLimits

0x5a38,	// (0x0002285c) bg_popup_sub_pane_cp21

0x5d83,	// (0x00022ba7) popup_fep_japan_predictive_window_t1_ParamLimits

0x5d83,	// (0x00022ba7) popup_fep_japan_predictive_window_t1

0x5d9a,	// (0x00022bbe) popup_fep_japan_predictive_window_t2_ParamLimits

0x5d9a,	// (0x00022bbe) popup_fep_japan_predictive_window_t2

0x5dcd,	// (0x00022bf1) popup_fep_japan_predictive_window_t3_ParamLimits

0x5dcd,	// (0x00022bf1) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f1,	// (0x0002c515) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f1,	// (0x0002c515) popup_fep_japan_predictive_window_t

0x5378,	// (0x0002219c) bg_popup_sub_pane_cp23

0x5e04,	// (0x00022c28) listscroll_japin_cand_pane

0x5e0c,	// (0x00022c30) popup_fep_japan_candidate_window_t1

0x5e1a,	// (0x00022c3e) candidate_pane_ParamLimits

0x5e1a,	// (0x00022c3e) candidate_pane

0x5e2c,	// (0x00022c50) scroll_pane_cp30

0x5e34,	// (0x00022c58) list_single_popup_jap_candidate_pane_ParamLimits

0x5e34,	// (0x00022c58) list_single_popup_jap_candidate_pane

0x5378,	// (0x0002219c) list_highlight_pane_cp30

0x5e49,	// (0x00022c6d) list_single_popup_jap_candidate_pane_t1

0x5e58,	// (0x00022c7c) level_1_signal

0x5e65,	// (0x00022c89) level_2_signal

0x5e72,	// (0x00022c96) level_3_signal

0x5e7f,	// (0x00022ca3) level_4_signal

0x5e8c,	// (0x00022cb0) level_5_signal

0x5e99,	// (0x00022cbd) level_6_signal

0x5ea6,	// (0x00022cca) level_7_signal

0x5e58,	// (0x00022c7c) level_1_battery

0x5e65,	// (0x00022c89) level_2_battery

0x5e72,	// (0x00022c96) level_3_battery

0x5e7f,	// (0x00022ca3) level_4_battery

0x5e8c,	// (0x00022cb0) level_5_battery

0x5e99,	// (0x00022cbd) level_6_battery

0x5ea6,	// (0x00022cca) level_7_battery

0x5ecb,	// (0x00022cef) list_menu_pane_ParamLimits

0x5ecb,	// (0x00022cef) list_menu_pane

0x5ee1,	// (0x00022d05) scroll_pane_cp25_ParamLimits

0x5ee1,	// (0x00022d05) scroll_pane_cp25

0x5efa,	// (0x00022d1e) list_double2_graphic_pane_cp2_ParamLimits

0x5efa,	// (0x00022d1e) list_double2_graphic_pane_cp2

0x5efa,	// (0x00022d1e) list_double2_large_graphic_pane_cp2_ParamLimits

0x5efa,	// (0x00022d1e) list_double2_large_graphic_pane_cp2

0x5efa,	// (0x00022d1e) list_double2_pane_cp2_ParamLimits

0x5efa,	// (0x00022d1e) list_double2_pane_cp2

0x5efa,	// (0x00022d1e) list_double_graphic_pane_cp2_ParamLimits

0x5efa,	// (0x00022d1e) list_double_graphic_pane_cp2

0x5efa,	// (0x00022d1e) list_double_large_graphic_pane_cp2_ParamLimits

0x5efa,	// (0x00022d1e) list_double_large_graphic_pane_cp2

0x5efa,	// (0x00022d1e) list_double_number_pane_cp2_ParamLimits

0x5efa,	// (0x00022d1e) list_double_number_pane_cp2

0x5efa,	// (0x00022d1e) list_double_pane_cp2_ParamLimits

0x5efa,	// (0x00022d1e) list_double_pane_cp2

0x996a,	// (0x0002678e) list_single_2graphic_pane_cp2_ParamLimits

0x996a,	// (0x0002678e) list_single_2graphic_pane_cp2

0x996a,	// (0x0002678e) list_single_graphic_heading_pane_cp2_ParamLimits

0x996a,	// (0x0002678e) list_single_graphic_heading_pane_cp2

0x996a,	// (0x0002678e) list_single_graphic_pane_cp2_ParamLimits

0x996a,	// (0x0002678e) list_single_graphic_pane_cp2

0x996a,	// (0x0002678e) list_single_heading_pane_cp2_ParamLimits

0x996a,	// (0x0002678e) list_single_heading_pane_cp2

0x5f0a,	// (0x00022d2e) list_single_large_graphic_pane_cp2_ParamLimits

0x5f0a,	// (0x00022d2e) list_single_large_graphic_pane_cp2

0x996a,	// (0x0002678e) list_single_number_heading_pane_cp2_ParamLimits

0x996a,	// (0x0002678e) list_single_number_heading_pane_cp2

0x996a,	// (0x0002678e) list_single_number_pane_cp2_ParamLimits

0x996a,	// (0x0002678e) list_single_number_pane_cp2

0x996a,	// (0x0002678e) list_single_pane_cp2_ParamLimits

0x996a,	// (0x0002678e) list_single_pane_cp2

0x5f24,	// (0x00022d48) bg_popup_sub_pane_cp22

0x9a3a,	// (0x0002685e) popup_side_volume_key_window_g1

0x9a5e,	// (0x00026882) popup_side_volume_key_window_t1

0x9a7a,	// (0x0002689e) volume_small_pane_cp1

0x53c6,	// (0x000221ea) bg_popup_sub_pane_cp24_ParamLimits

0x53c6,	// (0x000221ea) bg_popup_sub_pane_cp24

0x5f3a,	// (0x00022d5e) fep_china_uni_candidate_pane_ParamLimits

0x5f3a,	// (0x00022d5e) fep_china_uni_candidate_pane

0x5f4e,	// (0x00022d72) fep_china_uni_entry_pane

0x5f5e,	// (0x00022d82) popup_fep_china_uni_window_g1

0x5f7a,	// (0x00022d9e) fep_china_uni_entry_pane_g1

0x5f82,	// (0x00022da6) fep_china_uni_entry_pane_g2

0x0001,

0xf722,	// (0x0002c546) fep_china_uni_entry_pane_g

0x5f8a,	// (0x00022dae) fep_entry_item_pane

0x5f94,	// (0x00022db8) fep_candidate_item_pane

0x5f9c,	// (0x00022dc0) fep_china_uni_candidate_pane_g1

0x5fa4,	// (0x00022dc8) fep_china_uni_candidate_pane_g2

0x5fac,	// (0x00022dd0) fep_china_uni_candidate_pane_g3

0x5fb4,	// (0x00022dd8) fep_china_uni_candidate_pane_g4

0x0003,

0xf727,	// (0x0002c54b) fep_china_uni_candidate_pane_g

0x536e,	// (0x00022192) fep_entry_item_pane_g1

0x5fbc,	// (0x00022de0) fep_entry_item_pane_t1_ParamLimits

0x5fbc,	// (0x00022de0) fep_entry_item_pane_t1

0x5fd2,	// (0x00022df6) fep_candidate_item_pane_t1_ParamLimits

0x5fd2,	// (0x00022df6) fep_candidate_item_pane_t1

0x5fe7,	// (0x00022e0b) fep_candidate_item_pane_t2_ParamLimits

0x5fe7,	// (0x00022e0b) fep_candidate_item_pane_t2

0x0001,

0xf730,	// (0x0002c554) fep_candidate_item_pane_t_ParamLimits

0xf730,	// (0x0002c554) fep_candidate_item_pane_t

0x53e4,	// (0x00022208) list_highlight_pane_cp31_ParamLimits

0x53e4,	// (0x00022208) list_highlight_pane_cp31

0x5ff9,	// (0x00022e1d) level_1_signal_lsc

0x6002,	// (0x00022e26) level_2_signal_lsc

0x600b,	// (0x00022e2f) level_3_signal_lsc

0x6014,	// (0x00022e38) level_4_signal_lsc

0x601d,	// (0x00022e41) level_5_signal_lsc

0x6026,	// (0x00022e4a) level_6_signal_lsc

0x602f,	// (0x00022e53) level_7_signal_lsc

0x602f,	// (0x00022e53) level_1_battery_lsc

0x6038,	// (0x00022e5c) level_2_battery_lsc

0x6041,	// (0x00022e65) level_3_battery_lsc

0x604a,	// (0x00022e6e) level_4_battery_lsc

0x6053,	// (0x00022e77) level_5_battery_lsc

0x605c,	// (0x00022e80) level_6_battery_lsc

0x5ff9,	// (0x00022e1d) level_7_battery_lsc

0x6065,	// (0x00022e89) scroll_handle_focus_pane_g1

0x606e,	// (0x00022e92) scroll_handle_focus_pane_g2

0x6077,	// (0x00022e9b) scroll_handle_focus_pane_g3

0x0002,

0xf735,	// (0x0002c559) scroll_handle_focus_pane_g

0xe2b5,	// (0x0002b0d9) list_single_2graphic_pane_g1_ParamLimits

0xe2b5,	// (0x0002b0d9) list_single_2graphic_pane_g1

0xc2c1,	// (0x000290e5) list_single_2graphic_pane_g2_ParamLimits

0xc2c1,	// (0x000290e5) list_single_2graphic_pane_g2

0xc247,	// (0x0002906b) list_single_2graphic_pane_g3_ParamLimits

0xc247,	// (0x0002906b) list_single_2graphic_pane_g3

0xe2c1,	// (0x0002b0e5) list_single_2graphic_pane_g4_ParamLimits

0xe2c1,	// (0x0002b0e5) list_single_2graphic_pane_g4

0x0003,

0xf73c,	// (0x0002c560) list_single_2graphic_pane_g_ParamLimits

0xf73c,	// (0x0002c560) list_single_2graphic_pane_g

0xe2d2,	// (0x0002b0f6) list_single_2graphic_pane_t1_ParamLimits

0xe2d2,	// (0x0002b0f6) list_single_2graphic_pane_t1

0xe300,	// (0x0002b124) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xe300,	// (0x0002b124) list_double2_graphic_large_graphic_pane_g1

0xc364,	// (0x00029188) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xc364,	// (0x00029188) list_double2_graphic_large_graphic_pane_g2

0xc373,	// (0x00029197) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xc373,	// (0x00029197) list_double2_graphic_large_graphic_pane_g3

0xe310,	// (0x0002b134) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xe310,	// (0x0002b134) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf745,	// (0x0002c569) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf745,	// (0x0002c569) list_double2_graphic_large_graphic_pane_g

0xe31c,	// (0x0002b140) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xe31c,	// (0x0002b140) list_double2_graphic_large_graphic_pane_t1

0xe332,	// (0x0002b156) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xe332,	// (0x0002b156) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf74e,	// (0x0002c572) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf74e,	// (0x0002c572) list_double2_graphic_large_graphic_pane_t

0x619a,	// (0x00022fbe) popup_fast_swap_window_ParamLimits

0x619a,	// (0x00022fbe) popup_fast_swap_window

0x61b6,	// (0x00022fda) popup_side_volume_key_window

0x61d0,	// (0x00022ff4) stacon_top_pane

0x61da,	// (0x00022ffe) status_pane_ParamLimits

0x61da,	// (0x00022ffe) status_pane

0x9baf,	// (0x000269d3) status_small_pane

0x5378,	// (0x0002219c) control_pane

0x5378,	// (0x0002219c) stacon_bottom_pane

0x5972,	// (0x00022796) scroll_pane_cp121

0x5969,	// (0x0002278d) set_content_pane

0x6092,	// (0x00022eb6) bg_active_tab_pane_g1_cp1

0x6089,	// (0x00022ead) bg_active_tab_pane_g2_cp1

0x6080,	// (0x00022ea4) bg_active_tab_pane_g3_cp1

0x6092,	// (0x00022eb6) bg_passive_tab_pane_g1_cp1

0x6089,	// (0x00022ead) bg_passive_tab_pane_g2_cp1

0x6080,	// (0x00022ea4) bg_passive_tab_pane_g3_cp1

0x60a4,	// (0x00022ec8) bg_active_tab_pane_g1_cp2

0x6089,	// (0x00022ead) bg_active_tab_pane_g2_cp2

0x609b,	// (0x00022ebf) bg_active_tab_pane_g3_cp2

0x60a4,	// (0x00022ec8) bg_passive_tab_pane_g1_cp2

0x6089,	// (0x00022ead) bg_passive_tab_pane_g2_cp2

0x609b,	// (0x00022ebf) bg_passive_tab_pane_g3_cp2

0x60b6,	// (0x00022eda) bg_active_tab_pane_g1_cp3

0x6089,	// (0x00022ead) bg_active_tab_pane_g2_cp3

0x60ad,	// (0x00022ed1) bg_active_tab_pane_g3_cp3

0x60b6,	// (0x00022eda) bg_passive_tab_pane_g1_cp3

0x6089,	// (0x00022ead) bg_passive_tab_pane_g2_cp3

0x60ad,	// (0x00022ed1) bg_passive_tab_pane_g3_cp3

0x60c8,	// (0x00022eec) bg_active_tab_pane_g1_cp4

0x6089,	// (0x00022ead) bg_active_tab_pane_g2_cp4

0x60bf,	// (0x00022ee3) bg_active_tab_pane_g3_cp4

0x60c8,	// (0x00022eec) bg_passive_tab_pane_g1_cp4

0x6089,	// (0x00022ead) bg_passive_tab_pane_g2_cp4

0x60bf,	// (0x00022ee3) bg_passive_tab_pane_g3_cp4

0x6118,	// (0x00022f3c) bg_active_tab_pane_g1_cp5

0x6089,	// (0x00022ead) bg_active_tab_pane_g2_cp5

0x610f,	// (0x00022f33) bg_active_tab_pane_g3_cp5

0x6118,	// (0x00022f3c) bg_passive_tab_pane_g1_cp5

0x6089,	// (0x00022ead) bg_passive_tab_pane_g2_cp5

0x610f,	// (0x00022f33) bg_passive_tab_pane_g3_cp5

0x669b,	// (0x000234bf) list_set_graphic_pane_ParamLimits

0x669b,	// (0x000234bf) list_set_graphic_pane

0x5378,	// (0x0002219c) bg_set_opt_pane_cp4

0x6121,	// (0x00022f45) list_set_graphic_pane_g1_ParamLimits

0x6121,	// (0x00022f45) list_set_graphic_pane_g1

0x612d,	// (0x00022f51) list_set_graphic_pane_g2_ParamLimits

0x612d,	// (0x00022f51) list_set_graphic_pane_g2

0x0001,

0xf753,	// (0x0002c577) list_set_graphic_pane_g_ParamLimits

0xf753,	// (0x0002c577) list_set_graphic_pane_g

0x0009,

0xfae4,	// (0x0002c908) volume_small_pane_cp_g

0x614f,	// (0x00022f73) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x614f,	// (0x00022f73) list_double2_large_graphic_pane_g1_cp2

0x615b,	// (0x00022f7f) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x615b,	// (0x00022f7f) list_double2_large_graphic_pane_g2_cp2

0x616a,	// (0x00022f8e) list_double2_large_graphic_pane_g3_cp2

0x6172,	// (0x00022f96) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x6172,	// (0x00022f96) list_double2_large_graphic_pane_t1_cp2

0x6188,	// (0x00022fac) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x6188,	// (0x00022fac) list_double2_large_graphic_pane_t2_cp2

0x76ef,	// (0x00024513) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x76ef,	// (0x00024513) list_double_large_graphic_pane_g1_cp2

0x7700,	// (0x00024524) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x7700,	// (0x00024524) list_double_large_graphic_pane_g2_cp2

0x62f0,	// (0x00023114) list_double_large_graphic_pane_g3_cp2

0x770f,	// (0x00024533) list_double_large_graphic_pane_g4_cp

0x7717,	// (0x0002453b) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x7717,	// (0x0002453b) list_double_large_graphic_pane_t1_cp2

0x772e,	// (0x00024552) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x772e,	// (0x00024552) list_double_large_graphic_pane_t2_cp2

0x61e8,	// (0x0002300c) list_double2_graphic_pane_g1_cp2_ParamLimits

0x61e8,	// (0x0002300c) list_double2_graphic_pane_g1_cp2

0x61f4,	// (0x00023018) list_double2_graphic_pane_g2_cp2_ParamLimits

0x61f4,	// (0x00023018) list_double2_graphic_pane_g2_cp2

0x6203,	// (0x00023027) list_double2_graphic_pane_g3_cp2

0x620b,	// (0x0002302f) list_double2_graphic_pane_t1_cp2_ParamLimits

0x620b,	// (0x0002302f) list_double2_graphic_pane_t1_cp2

0x6221,	// (0x00023045) list_double2_graphic_pane_t2_cp2_ParamLimits

0x6221,	// (0x00023045) list_double2_graphic_pane_t2_cp2

0x6233,	// (0x00023057) list_single_number_heading_pane_g1_cp2_ParamLimits

0x6233,	// (0x00023057) list_single_number_heading_pane_g1_cp2

0x623f,	// (0x00023063) list_single_number_heading_pane_g2_cp2

0x6247,	// (0x0002306b) list_single_number_heading_pane_t1_cp2_ParamLimits

0x6247,	// (0x0002306b) list_single_number_heading_pane_t1_cp2

0x625d,	// (0x00023081) list_single_number_heading_pane_t2_cp2_ParamLimits

0x625d,	// (0x00023081) list_single_number_heading_pane_t2_cp2

0x626f,	// (0x00023093) list_single_number_heading_pane_t3_cp2_ParamLimits

0x626f,	// (0x00023093) list_single_number_heading_pane_t3_cp2

0x6233,	// (0x00023057) list_single_heading_pane_g1_cp2_ParamLimits

0x6233,	// (0x00023057) list_single_heading_pane_g1_cp2

0x623f,	// (0x00023063) list_single_heading_pane_g2_cp2

0x6247,	// (0x0002306b) list_single_heading_pane_t1_cp2_ParamLimits

0x6247,	// (0x0002306b) list_single_heading_pane_t1_cp2

0x74ac,	// (0x000242d0) list_single_heading_pane_t2_cp2_ParamLimits

0x74ac,	// (0x000242d0) list_single_heading_pane_t2_cp2

0x73f4,	// (0x00024218) list_double_graphic_pane_g1_cp2_ParamLimits

0x73f4,	// (0x00024218) list_double_graphic_pane_g1_cp2

0x7400,	// (0x00024224) list_double_graphic_pane_g2_cp2_ParamLimits

0x7400,	// (0x00024224) list_double_graphic_pane_g2_cp2

0x740f,	// (0x00024233) list_double_graphic_pane_g3_cp2

0x7417,	// (0x0002423b) list_double_graphic_pane_t1_cp2_ParamLimits

0x7417,	// (0x0002423b) list_double_graphic_pane_t1_cp2

0x742d,	// (0x00024251) list_double_graphic_pane_t2_cp2_ParamLimits

0x742d,	// (0x00024251) list_double_graphic_pane_t2_cp2

0x62e4,	// (0x00023108) list_double_number_pane_g1_cp2_ParamLimits

0x62e4,	// (0x00023108) list_double_number_pane_g1_cp2

0x62f0,	// (0x00023114) list_double_number_pane_g2_cp2

0x73ba,	// (0x000241de) list_double_number_pane_t1_cp2_ParamLimits

0x73ba,	// (0x000241de) list_double_number_pane_t1_cp2

0x73cc,	// (0x000241f0) list_double_number_pane_t2_cp2_ParamLimits

0x73cc,	// (0x000241f0) list_double_number_pane_t2_cp2

0x73e2,	// (0x00024206) list_double_number_pane_t3_cp2_ParamLimits

0x73e2,	// (0x00024206) list_double_number_pane_t3_cp2

0x731d,	// (0x00024141) list_single_graphic_pane_g1_cp2_ParamLimits

0x731d,	// (0x00024141) list_single_graphic_pane_g1_cp2

0x6346,	// (0x0002316a) list_single_graphic_pane_g2_cp2_ParamLimits

0x6346,	// (0x0002316a) list_single_graphic_pane_g2_cp2

0x6352,	// (0x00023176) list_single_graphic_pane_g3_cp2

0x72f5,	// (0x00024119) list_single_graphic_pane_t1_cp2_ParamLimits

0x72f5,	// (0x00024119) list_single_graphic_pane_t1_cp2

0x6346,	// (0x0002316a) list_single_number_pane_g1_cp2_ParamLimits

0x6346,	// (0x0002316a) list_single_number_pane_g1_cp2

0x6352,	// (0x00023176) list_single_number_pane_g2_cp2

0x72f5,	// (0x00024119) list_single_number_pane_t1_cp2_ParamLimits

0x72f5,	// (0x00024119) list_single_number_pane_t1_cp2

0x730b,	// (0x0002412f) list_single_number_pane_t2_cp2_ParamLimits

0x730b,	// (0x0002412f) list_single_number_pane_t2_cp2

0x615b,	// (0x00022f7f) list_double2_pane_g1_cp2_ParamLimits

0x615b,	// (0x00022f7f) list_double2_pane_g1_cp2

0x616a,	// (0x00022f8e) list_double2_pane_g2_cp2

0x62bc,	// (0x000230e0) list_double2_pane_t1_cp2_ParamLimits

0x62bc,	// (0x000230e0) list_double2_pane_t1_cp2

0x62d2,	// (0x000230f6) list_double2_pane_t2_cp2_ParamLimits

0x62d2,	// (0x000230f6) list_double2_pane_t2_cp2

0x62e4,	// (0x00023108) list_double_pane_g1_cp2_ParamLimits

0x62e4,	// (0x00023108) list_double_pane_g1_cp2

0x62f0,	// (0x00023114) list_double_pane_g2_cp2

0x62f8,	// (0x0002311c) list_double_pane_t1_cp2_ParamLimits

0x62f8,	// (0x0002311c) list_double_pane_t1_cp2

0x630e,	// (0x00023132) list_double_pane_t2_cp2_ParamLimits

0x630e,	// (0x00023132) list_double_pane_t2_cp2

0x6336,	// (0x0002315a) list_single_pane_cp2_g3

0x6346,	// (0x0002316a) list_single_pane_g1_cp2_ParamLimits

0x6346,	// (0x0002316a) list_single_pane_g1_cp2

0x6352,	// (0x00023176) list_single_pane_g2_cp2

0x635a,	// (0x0002317e) list_single_pane_t1_cp2_ParamLimits

0x635a,	// (0x0002317e) list_single_pane_t1_cp2

0x6372,	// (0x00023196) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x6372,	// (0x00023196) list_single_large_graphic_pane_g1_cp2

0x637e,	// (0x000231a2) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x637e,	// (0x000231a2) list_single_large_graphic_pane_g2_cp2

0x638a,	// (0x000231ae) list_single_large_graphic_pane_g3_cp2

0x6392,	// (0x000231b6) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x6392,	// (0x000231b6) list_single_large_graphic_pane_g4_cp1

0x63ac,	// (0x000231d0) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x63ac,	// (0x000231d0) list_single_large_graphic_pane_t1_cp2

0x72c1,	// (0x000240e5) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x72c1,	// (0x000240e5) list_single_graphic_heading_pane_g1_cp2

0x7290,	// (0x000240b4) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x7290,	// (0x000240b4) list_single_graphic_heading_pane_g4_cp2

0x6352,	// (0x00023176) list_single_graphic_heading_pane_g5_cp2

0x72cd,	// (0x000240f1) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x72cd,	// (0x000240f1) list_single_graphic_heading_pane_t1_cp2

0x72e3,	// (0x00024107) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x72e3,	// (0x00024107) list_single_graphic_heading_pane_t2_cp2

0x7284,	// (0x000240a8) list_single_2graphic_pane_g1_cp2_ParamLimits

0x7284,	// (0x000240a8) list_single_2graphic_pane_g1_cp2

0x7290,	// (0x000240b4) list_single_2graphic_pane_g2_cp2_ParamLimits

0x7290,	// (0x000240b4) list_single_2graphic_pane_g2_cp2

0x6352,	// (0x00023176) list_single_2graphic_pane_g3_cp2

0x729f,	// (0x000240c3) list_single_2graphic_pane_g4_cp2_ParamLimits

0x729f,	// (0x000240c3) list_single_2graphic_pane_g4_cp2

0x72ab,	// (0x000240cf) list_single_2graphic_pane_t1_cp2_ParamLimits

0x72ab,	// (0x000240cf) list_single_2graphic_pane_t1_cp2

0x536e,	// (0x00022192) list_highlight_pane_g10_cp1

0x6e96,	// (0x00023cba) list_highlight_pane_g1_cp1

0x6e9e,	// (0x00023cc2) list_highlight_pane_g2_cp1

0x6ea6,	// (0x00023cca) list_highlight_pane_g3_cp1

0x6eae,	// (0x00023cd2) list_highlight_pane_g4_cp1

0x6eb6,	// (0x00023cda) list_highlight_pane_g5_cp1

0x6ebe,	// (0x00023ce2) list_highlight_pane_g6_cp1

0x6ec6,	// (0x00023cea) list_highlight_pane_g7_cp1

0x6ece,	// (0x00023cf2) list_highlight_pane_g8_cp1

0x6ed6,	// (0x00023cfa) list_highlight_pane_g9_cp1

0xa911,	// (0x00027735) form_field_slider_pane_t3

0xa91f,	// (0x00027743) form_field_slider_pane_t4

0x6dda,	// (0x00023bfe) slider_form_pane_ParamLimits

0x6dda,	// (0x00023bfe) slider_form_pane

0x5378,	// (0x0002219c) control_abbreviations

0x5378,	// (0x0002219c) control_conventions

0x5378,	// (0x0002219c) control_definitions

0x5378,	// (0x0002219c) format_table_attribute

0x74f6,	// (0x0002431a) bg_popup_preview_window_pane_g9

0x5378,	// (0x0002219c) format_table_data2

0x5378,	// (0x0002219c) format_table_data3

0x5378,	// (0x0002219c) format_table_data_example

0x0008,

0x5378,	// (0x0002219c) intro_purpose

0xf8ef,	// (0x0002c713) bg_popup_preview_window_pane_g

0x5378,	// (0x0002219c) texts_category

0x5378,	// (0x0002219c) texts_graphics

0x63c2,	// (0x000231e6) text_digital

0x63d1,	// (0x000231f5) text_primary

0x63e0,	// (0x00023204) text_primary_small

0x63ef,	// (0x00023213) text_secondary

0x63fe,	// (0x00023222) text_title

0x79cf,	// (0x000247f3) bg_passive_tab_pane_g1_cp3_srt

0x6089,	// (0x00022ead) bg_passive_tab_pane_g2_cp3_srt

0x79c6,	// (0x000247ea) bg_passive_tab_pane_g3_cp3_srt

0x53e4,	// (0x00022208) bg_active_tab_pane_cp3_srt_ParamLimits

0x53e4,	// (0x00022208) bg_active_tab_pane_cp3_srt

0x79d8,	// (0x000247fc) tabs_4_active_pane_srt_g1

0xae69,	// (0x00027c8d) tabs_4_active_pane_srt_t1_ParamLimits

0xae69,	// (0x00027c8d) tabs_4_active_pane_srt_t1

0x79cf,	// (0x000247f3) bg_active_tab_pane_g1_cp3_copy1

0x6089,	// (0x00022ead) bg_active_tab_pane_g2_cp3_copy1

0x79c6,	// (0x000247ea) bg_active_tab_pane_g3_cp3_copy1

0x53e4,	// (0x00022208) tabs_2_long_active_pane_srt_ParamLimits

0x53e4,	// (0x00022208) tabs_2_long_active_pane_srt

0x53e4,	// (0x00022208) tabs_2_long_passive_pane_srt_ParamLimits

0x53e4,	// (0x00022208) tabs_2_long_passive_pane_srt

0x96ce,	// (0x000264f2) bg_passive_tab_pane_cp4_srt_ParamLimits

0x96ce,	// (0x000264f2) bg_passive_tab_pane_cp4_srt

0x78e9,	// (0x0002470d) bg_passive_tab_pane_g1_cp4_srt

0x6089,	// (0x00022ead) bg_passive_tab_pane_g2_cp4_srt

0x78e0,	// (0x00024704) bg_passive_tab_pane_g3_cp4_srt

0x668d,	// (0x000234b1) bg_active_tab_pane_cp4_srt_ParamLimits

0x668d,	// (0x000234b1) bg_active_tab_pane_cp4_srt

0xabda,	// (0x000279fe) tabs_2_long_active_pane_srt_t1_ParamLimits

0xabda,	// (0x000279fe) tabs_2_long_active_pane_srt_t1

0x78e9,	// (0x0002470d) bg_active_tab_pane_g1_cp4_srt

0x6089,	// (0x00022ead) bg_active_tab_pane_g2_cp4_srt

0x78e0,	// (0x00024704) bg_active_tab_pane_g3_cp4_srt

0x53c6,	// (0x000221ea) tabs_3_long_active_pane_srt_ParamLimits

0x53c6,	// (0x000221ea) tabs_3_long_active_pane_srt

0x53c6,	// (0x000221ea) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x53c6,	// (0x000221ea) tabs_3_long_passive_pane_cp_srt

0x53c6,	// (0x000221ea) tabs_3_long_passive_pane_srt_ParamLimits

0x53c6,	// (0x000221ea) tabs_3_long_passive_pane_srt

0x96ce,	// (0x000264f2) bg_passive_tab_pane_cp5_srt_ParamLimits

0x96ce,	// (0x000264f2) bg_passive_tab_pane_cp5_srt

0x6118,	// (0x00022f3c) bg_passive_tab_pane_g1_cp5_srt

0x6089,	// (0x00022ead) bg_passive_tab_pane_g2_cp5_srt

0x610f,	// (0x00022f33) bg_passive_tab_pane_g3_cp5_srt

0x668d,	// (0x000234b1) bg_active_tab_pane_cp5_srt_ParamLimits

0x668d,	// (0x000234b1) bg_active_tab_pane_cp5_srt

0xabc8,	// (0x000279ec) tabs_3_long_active_pane_srt_t1_ParamLimits

0xabc8,	// (0x000279ec) tabs_3_long_active_pane_srt_t1

0x6118,	// (0x00022f3c) bg_active_tab_pane_g1_cp5_srt

0x6089,	// (0x00022ead) bg_active_tab_pane_g2_cp5_srt

0x610f,	// (0x00022f33) bg_active_tab_pane_g3_cp5_srt

0x78d2,	// (0x000246f6) navi_text_pane_srt_t1

0x78ca,	// (0x000246ee) navi_icon_pane_srt_g1

0x6516,	// (0x0002333a) midp_editing_number_pane_srt

0x640d,	// (0x00023231) midp_ticker_pane_srt

0x651e,	// (0x00023342) midp_ticker_pane_srt_g1

0x6526,	// (0x0002334a) midp_ticker_pane_srt_g2

0x0001,

0xf772,	// (0x0002c596) midp_ticker_pane_srt_g

0x652e,	// (0x00023352) midp_ticker_pane_srt_t1

0x78bb,	// (0x000246df) midp_editing_number_pane_t1_copy1

0x9bb8,	// (0x000269dc) listscroll_midp_pane

0x9bb8,	// (0x000269dc) midp_form_pane

0x6415,	// (0x00023239) midp_info_popup_window_ParamLimits

0x6415,	// (0x00023239) midp_info_popup_window

0x5a38,	// (0x0002285c) bg_popup_sub_pane_cp50_ParamLimits

0x5a38,	// (0x0002285c) bg_popup_sub_pane_cp50

0x6b03,	// (0x00023927) listscroll_midp_info_pane_ParamLimits

0x6b03,	// (0x00023927) listscroll_midp_info_pane

0x6adb,	// (0x000238ff) listscroll_form_midp_pane_ParamLimits

0x6adb,	// (0x000238ff) listscroll_form_midp_pane

0x6aef,	// (0x00023913) scroll_bar_cp050

0xa8f9,	// (0x0002771d) list_midp_pane

0x8243,	// (0x00025067) signal_pane_g2_cp

0x6a15,	// (0x00023839) listscroll_midp_info_pane_t1_ParamLimits

0x6a15,	// (0x00023839) listscroll_midp_info_pane_t1

0x6a2d,	// (0x00023851) listscroll_midp_info_pane_t2_ParamLimits

0x6a2d,	// (0x00023851) listscroll_midp_info_pane_t2

0x6a6b,	// (0x0002388f) listscroll_midp_info_pane_t3_ParamLimits

0x6a6b,	// (0x0002388f) listscroll_midp_info_pane_t3

0x6aa5,	// (0x000238c9) listscroll_midp_info_pane_t4_ParamLimits

0x6aa5,	// (0x000238c9) listscroll_midp_info_pane_t4

0x0003,

0xf82a,	// (0x0002c64e) listscroll_midp_info_pane_t_ParamLimits

0xf82a,	// (0x0002c64e) listscroll_midp_info_pane_t

0x5ab8,	// (0x000228dc) scroll_pane_cp21

0x69b9,	// (0x000237dd) form_midp_field_choice_group_pane

0x69c2,	// (0x000237e6) form_midp_field_text_pane

0x69fb,	// (0x0002381f) form_midp_field_time_pane

0x6a03,	// (0x00023827) form_midp_gauge_slider_pane

0x6a0c,	// (0x00023830) form_midp_gauge_wait_pane

0x5378,	// (0x0002219c) form_midp_image_pane

0xe405,	// (0x0002b229) list_single_midp_pane_ParamLimits

0xe405,	// (0x0002b229) list_single_midp_pane

0xa8d9,	// (0x000276fd) form_midp_field_text_pane_t1

0x6844,	// (0x00023668) input_focus_pane_cp050

0x69a8,	// (0x000237cc) list_midp_form_text_pane

0x6977,	// (0x0002379b) form_midp_field_choice_group_pane_t1

0x6985,	// (0x000237a9) input_focus_pane_cp051

0x6999,	// (0x000237bd) list_midp_choice_pane

0x5378,	// (0x0002219c) status_idle_pane

0x695b,	// (0x0002377f) form_midp_field_time_pane_t1

0x536e,	// (0x00022192) wait_anim_pane_g2_copy1

0x6969,	// (0x0002378d) form_midp_field_time_pane_t2

0x0001,

0x6480,	// (0x000232a4) aid_navinavi_width_2_pane

0xf825,	// (0x0002c649) form_midp_field_time_pane_t

0x5378,	// (0x0002219c) input_focus_pane_cp052

0x5378,	// (0x0002219c) bg_input_focus_pane_cp040

0x6937,	// (0x0002375b) form_midp_gauge_slider_pane_t1

0x6945,	// (0x00023769) form_midp_gauge_slider_pane_t2

0xa8bd,	// (0x000276e1) form_midp_gauge_slider_pane_t3

0xa8cb,	// (0x000276ef) form_midp_gauge_slider_pane_t4

0x0003,

0xf81c,	// (0x0002c640) form_midp_gauge_slider_pane_t

0x6953,	// (0x00023777) form_midp_slider_pane

0x53e4,	// (0x00022208) bg_input_focus_pane_cp041_ParamLimits

0x53e4,	// (0x00022208) bg_input_focus_pane_cp041

0x6907,	// (0x0002372b) form_midp_gauge_wait_pane_t1_ParamLimits

0x6907,	// (0x0002372b) form_midp_gauge_wait_pane_t1

0x6919,	// (0x0002373d) form_midp_gauge_wait_pane_t2_ParamLimits

0x6919,	// (0x0002373d) form_midp_gauge_wait_pane_t2

0x0001,

0xf817,	// (0x0002c63b) form_midp_gauge_wait_pane_t_ParamLimits

0xf817,	// (0x0002c63b) form_midp_gauge_wait_pane_t

0x692b,	// (0x0002374f) form_midp_wait_pane_ParamLimits

0x692b,	// (0x0002374f) form_midp_wait_pane

0x68d1,	// (0x000236f5) form_midp_image_pane_g1

0x68da,	// (0x000236fe) form_midp_image_pane_t1

0x68e9,	// (0x0002370d) form_midp_image_pane_t2

0x68f8,	// (0x0002371c) form_midp_image_pane_t3

0x0002,

0xf810,	// (0x0002c634) form_midp_image_pane_t

0x68c8,	// (0x000236ec) list_single_midp_pane_g1

0xe3f6,	// (0x0002b21a) list_single_midp_pane_t1

0xa8aa,	// (0x000276ce) list_midp_form_item_pane_ParamLimits

0xa8aa,	// (0x000276ce) list_midp_form_item_pane

0x6428,	// (0x0002324c) list_midp_form_item_pane_t1

0x6437,	// (0x0002325b) midp_ticker_pane_g1

0x6443,	// (0x00023267) midp_ticker_pane_g2

0x0001,

0xf758,	// (0x0002c57c) midp_ticker_pane_g

0x644f,	// (0x00023273) midp_ticker_pane_t1

0x7953,	// (0x00024777) midp_editing_number_pane_t1

0x7931,	// (0x00024755) midp_editing_number_pane

0x7940,	// (0x00024764) midp_ticker_pane

0x78ab,	// (0x000246cf) ai_message_heading_pane

0x5378,	// (0x0002219c) bg_popup_window_pane_cp14

0x78b3,	// (0x000246d7) listscroll_ai_message_pane

0x7835,	// (0x00024659) ai_message_heading_pane_g1_ParamLimits

0x7835,	// (0x00024659) ai_message_heading_pane_g1

0x7841,	// (0x00024665) ai_message_heading_pane_g2_ParamLimits

0x7841,	// (0x00024665) ai_message_heading_pane_g2

0x784d,	// (0x00024671) ai_message_heading_pane_g3_ParamLimits

0x784d,	// (0x00024671) ai_message_heading_pane_g3

0x7859,	// (0x0002467d) ai_message_heading_pane_g4_ParamLimits

0x7859,	// (0x0002467d) ai_message_heading_pane_g4

0x0003,

0xf951,	// (0x0002c775) ai_message_heading_pane_g_ParamLimits

0xf951,	// (0x0002c775) ai_message_heading_pane_g

0x7865,	// (0x00024689) ai_message_heading_pane_t1_ParamLimits

0x7865,	// (0x00024689) ai_message_heading_pane_t1

0x787f,	// (0x000246a3) ai_message_heading_pane_t2_ParamLimits

0x787f,	// (0x000246a3) ai_message_heading_pane_t2

0x0001,

0xf95a,	// (0x0002c77e) ai_message_heading_pane_t_ParamLimits

0xf95a,	// (0x0002c77e) ai_message_heading_pane_t

0x7891,	// (0x000246b5) bg_popup_heading_pane_cp1_ParamLimits

0x7891,	// (0x000246b5) bg_popup_heading_pane_cp1

0x7823,	// (0x00024647) list_ai_message_pane_ParamLimits

0x7823,	// (0x00024647) list_ai_message_pane

0x5ab8,	// (0x000228dc) scroll_pane_cp10

0x77bf,	// (0x000245e3) list_ai_message_pane_g1

0x77c7,	// (0x000245eb) list_ai_message_pane_g2

0x0001,

0xf92e,	// (0x0002c752) list_ai_message_pane_g

0x77cf,	// (0x000245f3) list_ai_message_pane_t1_ParamLimits

0x77cf,	// (0x000245f3) list_ai_message_pane_t1

0x77e4,	// (0x00024608) list_ai_message_pane_t2_ParamLimits

0x77e4,	// (0x00024608) list_ai_message_pane_t2

0x77f9,	// (0x0002461d) list_ai_message_pane_t3_ParamLimits

0x77f9,	// (0x0002461d) list_ai_message_pane_t3

0x780e,	// (0x00024632) list_ai_message_pane_t4_ParamLimits

0x780e,	// (0x00024632) list_ai_message_pane_t4

0x0003,

0xf933,	// (0x0002c757) list_ai_message_pane_t_ParamLimits

0xf933,	// (0x0002c757) list_ai_message_pane_t

0xab66,	// (0x0002798a) cell_ai_soft_ind_pane_ParamLimits

0xab66,	// (0x0002798a) cell_ai_soft_ind_pane

0x6461,	// (0x00023285) cell_ai_soft_ind_pane_g1_ParamLimits

0x6461,	// (0x00023285) cell_ai_soft_ind_pane_g1

0x5378,	// (0x0002219c) grid_highlight_cp1

0x646e,	// (0x00023292) text_secondary_cp56_ParamLimits

0x646e,	// (0x00023292) text_secondary_cp56

0x7794,	// (0x000245b8) example_general_pane_ParamLimits

0x7794,	// (0x000245b8) example_general_pane

0x77a0,	// (0x000245c4) example_parent_pane_g1_ParamLimits

0x77a0,	// (0x000245c4) example_parent_pane_g1

0x77ac,	// (0x000245d0) example_parent_pane_t1_ParamLimits

0x77ac,	// (0x000245d0) example_parent_pane_t1

0xa24e,	// (0x00027072) popup_preview_text_window_ParamLimits

0xa24e,	// (0x00027072) popup_preview_text_window

0x633e,	// (0x00023162) list_single_pane_cp2_g4

0x55bf,	// (0x000223e3) bg_popup_preview_window_pane_ParamLimits

0x55bf,	// (0x000223e3) bg_popup_preview_window_pane

0x74fe,	// (0x00024322) popup_preview_text_window_t1_ParamLimits

0x74fe,	// (0x00024322) popup_preview_text_window_t1

0x751c,	// (0x00024340) popup_preview_text_window_t2_ParamLimits

0x751c,	// (0x00024340) popup_preview_text_window_t2

0x7565,	// (0x00024389) popup_preview_text_window_t3_ParamLimits

0x7565,	// (0x00024389) popup_preview_text_window_t3

0x75aa,	// (0x000243ce) popup_preview_text_window_t4_ParamLimits

0x75aa,	// (0x000243ce) popup_preview_text_window_t4

0x0004,

0xf902,	// (0x0002c726) popup_preview_text_window_t_ParamLimits

0xf902,	// (0x0002c726) popup_preview_text_window_t

0x7675,	// (0x00024499) scroll_pane_cp11

0x67b8,	// (0x000235dc) bg_popup_preview_window_pane_g1

0x74be,	// (0x000242e2) bg_popup_preview_window_pane_g2

0x74c6,	// (0x000242ea) bg_popup_preview_window_pane_g3

0x74ce,	// (0x000242f2) bg_popup_preview_window_pane_g4

0x74d6,	// (0x000242fa) bg_popup_preview_window_pane_g5

0x74de,	// (0x00024302) bg_popup_preview_window_pane_g6

0x74e6,	// (0x0002430a) bg_popup_preview_window_pane_g7

0x74ee,	// (0x00024312) bg_popup_preview_window_pane_g8

0x8fda,	// (0x00025dfe) aid_popup_width_pane

0xa230,	// (0x00027054) popup_midp_note_alarm_window_ParamLimits

0xa230,	// (0x00027054) popup_midp_note_alarm_window

0x5983,	// (0x000227a7) data_form_pane_ParamLimits

0xe12c,	// (0x0002af50) form_field_data_pane_g1

0xe134,	// (0x0002af58) form_field_data_pane_t1_ParamLimits

0x598f,	// (0x000227b3) input_focus_pane_ParamLimits

0xe14c,	// (0x0002af70) data_form_wide_pane_ParamLimits

0xe15d,	// (0x0002af81) form_field_data_wide_pane_g1

0xe169,	// (0x0002af8d) form_field_data_wide_pane_t1_ParamLimits

0x57af,	// (0x000225d3) input_focus_pane_cp6_ParamLimits

0x969d,	// (0x000264c1) input_popup_find_pane_g1_ParamLimits

0x969d,	// (0x000264c1) input_popup_find_pane_g1

0x97ec,	// (0x00026610) aid_navi_side_left_pane

0x97fd,	// (0x00026621) aid_navi_side_right_pane

0x6f67,	// (0x00023d8b) bg_popup_window_pane_cp30_ParamLimits

0x6f67,	// (0x00023d8b) bg_popup_window_pane_cp30

0x6fe1,	// (0x00023e05) popup_midp_note_alarm_window_g1_ParamLimits

0x6fe1,	// (0x00023e05) popup_midp_note_alarm_window_g1

0x7011,	// (0x00023e35) popup_midp_note_alarm_window_t1_ParamLimits

0x7011,	// (0x00023e35) popup_midp_note_alarm_window_t1

0x70b2,	// (0x00023ed6) popup_midp_note_alarm_window_t2_ParamLimits

0x70b2,	// (0x00023ed6) popup_midp_note_alarm_window_t2

0x7160,	// (0x00023f84) popup_midp_note_alarm_window_t3_ParamLimits

0x7160,	// (0x00023f84) popup_midp_note_alarm_window_t3

0x7188,	// (0x00023fac) popup_midp_note_alarm_window_t4_ParamLimits

0x7188,	// (0x00023fac) popup_midp_note_alarm_window_t4

0x71a8,	// (0x00023fcc) popup_midp_note_alarm_window_t5_ParamLimits

0x71a8,	// (0x00023fcc) popup_midp_note_alarm_window_t5

0x000a,

0xf89f,	// (0x0002c6c3) popup_midp_note_alarm_window_t_ParamLimits

0xf89f,	// (0x0002c6c3) popup_midp_note_alarm_window_t

0x7254,	// (0x00024078) wait_bar_pane_cp1_ParamLimits

0x7254,	// (0x00024078) wait_bar_pane_cp1

0x5378,	// (0x0002219c) wait_anim_pane_copy1

0x5378,	// (0x0002219c) wait_border_pane_copy1

0x6ca7,	// (0x00023acb) wait_border_pane_g1_copy1

0xe183,	// (0x0002afa7) form_field_popup_pane_g1

0xe18b,	// (0x0002afaf) form_field_popup_pane_t1_ParamLimits

0x598f,	// (0x000227b3) input_focus_pane_cp7_ParamLimits

0x59bd,	// (0x000227e1) list_form_pane_ParamLimits

0xe1a3,	// (0x0002afc7) form_field_popup_wide_pane_g1

0xe1ab,	// (0x0002afcf) form_field_popup_wide_pane_t1_ParamLimits

0x598f,	// (0x000227b3) input_focus_pane_cp8_ParamLimits

0x59c9,	// (0x000227ed) list_form_wide_pane_ParamLimits

0x79ff,	// (0x00024823) aid_size_cell_graphic_pane

0xe22e,	// (0x0002b052) data_form_pane_t1_ParamLimits

0xe443,	// (0x0002b267) data_form_wide_pane_t1_ParamLimits

0xa4cc,	// (0x000272f0) bg_status_flat_pane

0x9395,	// (0x000261b9) title_pane_t1_ParamLimits

0x538e,	// (0x000221b2) title_pane_t2_ParamLimits

0x53b4,	// (0x000221d8) title_pane_t3_ParamLimits

0xf557,	// (0x0002c37b) title_pane_t_ParamLimits

0x5e58,	// (0x00022c7c) level_1_signal_ParamLimits

0x5e65,	// (0x00022c89) level_2_signal_ParamLimits

0x5e72,	// (0x00022c96) level_3_signal_ParamLimits

0x5e7f,	// (0x00022ca3) level_4_signal_ParamLimits

0x5e8c,	// (0x00022cb0) level_5_signal_ParamLimits

0x5e99,	// (0x00022cbd) level_6_signal_ParamLimits

0x5ea6,	// (0x00022cca) level_7_signal_ParamLimits

0x5e58,	// (0x00022c7c) level_1_battery_ParamLimits

0x5e65,	// (0x00022c89) level_2_battery_ParamLimits

0x5e72,	// (0x00022c96) level_3_battery_ParamLimits

0x5e7f,	// (0x00022ca3) level_4_battery_ParamLimits

0x5e8c,	// (0x00022cb0) level_5_battery_ParamLimits

0x5e99,	// (0x00022cbd) level_6_battery_ParamLimits

0x5ea6,	// (0x00022cca) level_7_battery_ParamLimits

0x6e96,	// (0x00023cba) bg_status_flat_pane_g1

0x6e9e,	// (0x00023cc2) bg_status_flat_pane_g2

0x6ea6,	// (0x00023cca) bg_status_flat_pane_g3

0x6eae,	// (0x00023cd2) bg_status_flat_pane_g4

0x6eb6,	// (0x00023cda) bg_status_flat_pane_g5

0x6ebe,	// (0x00023ce2) bg_status_flat_pane_g6

0x6ec6,	// (0x00023cea) bg_status_flat_pane_g7

0x93fd,	// (0x00026221) tabs_3_active_pane_t1_ParamLimits

0x93fd,	// (0x00026221) tabs_3_passive_pane_t1_ParamLimits

0x940f,	// (0x00026233) tabs_4_active_pane_t1_ParamLimits

0x940f,	// (0x00026233) tabs_4_1_passive_pane_t1_ParamLimits

0x96a9,	// (0x000264cd) tabs_2_active_pane_t1_ParamLimits

0x96a9,	// (0x000264cd) tabs_2_passive_pane_t1_ParamLimits

0x668d,	// (0x000234b1) bg_active_tab_pane_cp4_ParamLimits

0x96bb,	// (0x000264df) tabs_2_long_active_pane_t1_ParamLimits

0x96ce,	// (0x000264f2) bg_passive_tab_pane_cp4_ParamLimits

0xa7b5,	// (0x000275d9) list_single_midp_graphic_pane_t1_ParamLimits

0x668d,	// (0x000234b1) bg_active_tab_pane_cp5_ParamLimits

0x96da,	// (0x000264fe) tabs_3_long_active_pane_t1_ParamLimits

0x96ce,	// (0x000264f2) bg_passive_tab_pane_cp5_ParamLimits

0xa7b5,	// (0x000275d9) list_single_midp_graphic_pane_t1

0xa4cc,	// (0x000272f0) bg_status_flat_pane_ParamLimits

0x666d,	// (0x00023491) indicator_pane_cp2_ParamLimits

0x666d,	// (0x00023491) indicator_pane_cp2

0xa610,	// (0x00027434) navi_pane_srt_ParamLimits

0xa610,	// (0x00027434) navi_pane_srt

0x66b5,	// (0x000234d9) popup_clock_digital_analogue_window_cp1

0x5428,	// (0x0002224c) indicator_pane_t1

0x640d,	// (0x00023231) copy_highlight_pane

0x640d,	// (0x00023231) cursor_graphics_pane

0x640d,	// (0x00023231) graphic_within_text_pane

0x640d,	// (0x00023231) link_highlight_pane

0x7638,	// (0x0002445c) popup_preview_text_window_t5_ParamLimits

0x7638,	// (0x0002445c) popup_preview_text_window_t5

0x6488,	// (0x000232ac) cursor_digital_pane

0x6488,	// (0x000232ac) cursor_primary_pane

0x6499,	// (0x000232bd) cursor_primary_small_pane

0x64a1,	// (0x000232c5) cursor_secondary_pane

0x64a9,	// (0x000232cd) cursor_title_pane

0x6488,	// (0x000232ac) link_highlight_digital_pane

0x6490,	// (0x000232b4) link_highlight_primary_pane

0x6499,	// (0x000232bd) link_highlight_primary_small_pane

0x64a1,	// (0x000232c5) link_highlight_secondary_pane

0x64a9,	// (0x000232cd) link_highlight_title_pane

0x6488,	// (0x000232ac) copy_highlight_digital_pane

0x6488,	// (0x000232ac) copy_highlight_primary_pane

0x6499,	// (0x000232bd) copy_highlight_primary_small_pane

0x64a1,	// (0x000232c5) copy_highlight_secondary_pane

0x64a9,	// (0x000232cd) copy_highlight_title_pane

0x64a1,	// (0x000232c5) graphic_text_digital_pane

0x6f16,	// (0x00023d3a) graphic_text_primary_pane

0x6f1f,	// (0x00023d43) graphic_text_primary_small_pane

0x6499,	// (0x000232bd) graphic_text_secondary_pane

0x6488,	// (0x000232ac) graphic_text_title_pane

0x9c5f,	// (0x00026a83) cursor_primary_pane_g1

0x6f08,	// (0x00023d2c) cursor_text_primary_t1

0xa93d,	// (0x00027761) cursor_primary_small_pane_g1

0x6efa,	// (0x00023d1e) cursor_text_primary_small_t1

0xa935,	// (0x00027759) cursor_primary_small_pane_g1_copy1

0x6eec,	// (0x00023d10) cursor_text_primary_small_t1_copy1

0x6ede,	// (0x00023d02) cursor_text_title_t1

0xa92d,	// (0x00027751) cursor_title_pane_g1

0x9c5f,	// (0x00026a83) cursor_digital_pane_g1

0x64b1,	// (0x000232d5) cursor_text_digital_t1

0x64bf,	// (0x000232e3) link_highlight_primary_pane_g1

0x6e87,	// (0x00023cab) link_highlight_primary_pane_t1

0x64bf,	// (0x000232e3) link_highlight_primary_small_pane_g1

0x64c7,	// (0x000232eb) link_highlight_primary_small_pane_t1

0x64d6,	// (0x000232fa) link_highlight_secondary_pane_g1

0x64de,	// (0x00023302) link_highlight_secondary_pane_t1

0x6dec,	// (0x00023c10) link_highlight_title_pane_g1

0x6e03,	// (0x00023c27) link_highlight_title_pane_t1

0x6dec,	// (0x00023c10) link_highlight_digital_pane_g1

0x6df4,	// (0x00023c18) link_highlight_digital_pane_t1

0x6cc2,	// (0x00023ae6) copy_highlight_primary_pane_g1

0x6ce8,	// (0x00023b0c) copy_highlight_primary_pane_t1

0x6cc2,	// (0x00023ae6) copy_highlight_primary_small_pane_g1

0x6cd9,	// (0x00023afd) copy_highlight_primary_small_pane_t1

0x64ed,	// (0x00023311) copy_highlight_secondary_pane_g1

0x64f5,	// (0x00023319) copy_highlight_secondary_pane_t1

0x6cc2,	// (0x00023ae6) copy_highlight_title_pane_g1

0x6cca,	// (0x00023aee) copy_highlight_title_pane_t1

0x6cc2,	// (0x00023ae6) copy_highlight_digital_pane_g1

0x7b81,	// (0x000249a5) copy_highlight_digital_pane_t1

0x7ad5,	// (0x000248f9) graphic_text_primary_pane_g1

0x7b65,	// (0x00024989) graphic_text_primary_pane_t1

0x7b73,	// (0x00024997) graphic_text_primary_pane_t2

0x0001,

0xf9ce,	// (0x0002c7f2) graphic_text_primary_pane_t

0x7b41,	// (0x00024965) graphic_text_primary_small_pane_g1

0x7b49,	// (0x0002496d) graphic_text_primary_small_pane_t1

0x7b57,	// (0x0002497b) graphic_text_primary_small_pane_t2

0x0001,

0xf9c9,	// (0x0002c7ed) graphic_text_primary_small_pane_t

0x7b1d,	// (0x00024941) graphic_text_secondary_pane_g1

0x7b25,	// (0x00024949) graphic_text_secondary_pane_t1

0x7b33,	// (0x00024957) graphic_text_secondary_pane_t2

0x0001,

0xf9c4,	// (0x0002c7e8) graphic_text_secondary_pane_t

0x7af9,	// (0x0002491d) graphic_text_title_pane_g1

0x7b01,	// (0x00024925) graphic_text_title_pane_t1

0x7b0f,	// (0x00024933) graphic_text_title_pane_t2

0x0001,

0xf9bf,	// (0x0002c7e3) graphic_text_title_pane_t

0x7ad5,	// (0x000248f9) graphic_text_digital_pane_g1

0x7add,	// (0x00024901) graphic_text_digital_pane_t1

0x7aeb,	// (0x0002490f) graphic_text_digital_pane_t2

0x0001,

0xf9ba,	// (0x0002c7de) graphic_text_digital_pane_t

0x53e4,	// (0x00022208) navi_icon_pane_srt_ParamLimits

0x53e4,	// (0x00022208) navi_icon_pane_srt

0x5378,	// (0x0002219c) navi_midp_pane_srt

0x5378,	// (0x0002219c) navi_navi_pane_srt

0x53e4,	// (0x00022208) navi_text_pane_srt_ParamLimits

0x53e4,	// (0x00022208) navi_text_pane_srt

0x7aa0,	// (0x000248c4) navi_navi_icon_text_pane_srt

0x7aba,	// (0x000248de) navi_navi_pane_srt_g1_ParamLimits

0x7aba,	// (0x000248de) navi_navi_pane_srt_g1

0x7aa8,	// (0x000248cc) navi_navi_pane_srt_g2_ParamLimits

0x7aa8,	// (0x000248cc) navi_navi_pane_srt_g2

0x0001,

0xf9b5,	// (0x0002c7d9) navi_navi_pane_srt_g_ParamLimits

0xf9b5,	// (0x0002c7d9) navi_navi_pane_srt_g

0x7acc,	// (0x000248f0) navi_navi_tabs_pane_srt

0x7aa0,	// (0x000248c4) navi_navi_text_pane_srt

0x7aa0,	// (0x000248c4) navi_navi_volume_pane_srt

0x7a91,	// (0x000248b5) navi_navi_text_pane_srt_t1

0xaf8f,	// (0x00027db3) navi_navi_volume_pane_srt_g1

0xaf97,	// (0x00027dbb) volume_small_pane_srt_ParamLimits

0xaf97,	// (0x00027dbb) volume_small_pane_srt

0x9c67,	// (0x00026a8b) volume_small_pane_srt_g1_ParamLimits

0x9c67,	// (0x00026a8b) volume_small_pane_srt_g1

0x9c77,	// (0x00026a9b) volume_small_pane_srt_g2_ParamLimits

0x9c77,	// (0x00026a9b) volume_small_pane_srt_g2

0x9c88,	// (0x00026aac) volume_small_pane_srt_g3_ParamLimits

0x9c88,	// (0x00026aac) volume_small_pane_srt_g3

0x9c99,	// (0x00026abd) volume_small_pane_srt_g4_ParamLimits

0x9c99,	// (0x00026abd) volume_small_pane_srt_g4

0x9caa,	// (0x00026ace) volume_small_pane_srt_g5_ParamLimits

0x9caa,	// (0x00026ace) volume_small_pane_srt_g5

0x9cbb,	// (0x00026adf) volume_small_pane_srt_g6_ParamLimits

0x9cbb,	// (0x00026adf) volume_small_pane_srt_g6

0x9ccc,	// (0x00026af0) volume_small_pane_srt_g7_ParamLimits

0x9ccc,	// (0x00026af0) volume_small_pane_srt_g7

0x9cdd,	// (0x00026b01) volume_small_pane_srt_g8_ParamLimits

0x9cdd,	// (0x00026b01) volume_small_pane_srt_g8

0x9cee,	// (0x00026b12) volume_small_pane_srt_g9_ParamLimits

0x9cee,	// (0x00026b12) volume_small_pane_srt_g9

0x9cff,	// (0x00026b23) volume_small_pane_srt_g10_ParamLimits

0x9cff,	// (0x00026b23) volume_small_pane_srt_g10

0x0009,

0xf75d,	// (0x0002c581) volume_small_pane_srt_g_ParamLimits

0xf75d,	// (0x0002c581) volume_small_pane_srt_g

0x5668,	// (0x0002248c) query_popup_data_pane_cp2

0x7a77,	// (0x0002489b) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x7a77,	// (0x0002489b) navi_navi_icon_text_pane_srt_t1

0x6f16,	// (0x00023d3a) navi_tabs_2_long_pane_srt

0x6f16,	// (0x00023d3a) navi_tabs_2_pane_srt

0x6f16,	// (0x00023d3a) navi_tabs_3_long_pane_srt

0x6f16,	// (0x00023d3a) navi_tabs_3_pane_srt

0x6f16,	// (0x00023d3a) navi_tabs_4_pane_srt

0xaf6f,	// (0x00027d93) tabs_2_active_pane_srt_ParamLimits

0xaf6f,	// (0x00027d93) tabs_2_active_pane_srt

0xaf7f,	// (0x00027da3) tabs_2_passive_pane_srt_ParamLimits

0xaf7f,	// (0x00027da3) tabs_2_passive_pane_srt

0x5af8,	// (0x0002291c) bg_passive_tab_pane_cp1_srt_ParamLimits

0x5af8,	// (0x0002291c) bg_passive_tab_pane_cp1_srt

0x7a5e,	// (0x00024882) bg_passive_tab_pane_g1_cp1_srt

0x6089,	// (0x00022ead) bg_passive_tab_pane_g2_cp1_srt

0x7a55,	// (0x00024879) bg_passive_tab_pane_g3_cp1_srt

0x53e4,	// (0x00022208) bg_active_tab_pane_cp1_srt_ParamLimits

0x53e4,	// (0x00022208) bg_active_tab_pane_cp1_srt

0x7a67,	// (0x0002488b) tabs_2_active_pane_srt_g1

0xaf5d,	// (0x00027d81) tabs_2_active_pane_srt_t1_ParamLimits

0xaf5d,	// (0x00027d81) tabs_2_active_pane_srt_t1

0x7a5e,	// (0x00024882) bg_active_tab_pane_g1_cp1_srt

0x6089,	// (0x00022ead) bg_active_tab_pane_g2_cp1_srt

0x7a55,	// (0x00024879) bg_active_tab_pane_g3_cp1_srt

0xaf2a,	// (0x00027d4e) tabs_3_active_pane_srt_ParamLimits

0xaf2a,	// (0x00027d4e) tabs_3_active_pane_srt

0xaf3b,	// (0x00027d5f) tabs_3_passive_pane_cp_srt_ParamLimits

0xaf3b,	// (0x00027d5f) tabs_3_passive_pane_cp_srt

0xaf4c,	// (0x00027d70) tabs_3_passive_pane_srt_ParamLimits

0xaf4c,	// (0x00027d70) tabs_3_passive_pane_srt

0x5af8,	// (0x0002291c) bg_passive_tab_pane_cp2_srt_ParamLimits

0x5af8,	// (0x0002291c) bg_passive_tab_pane_cp2_srt

0x650d,	// (0x00023331) bg_passive_tab_pane_g1_cp2_srt

0x6089,	// (0x00022ead) bg_passive_tab_pane_g2_cp2_srt

0x6504,	// (0x00023328) bg_passive_tab_pane_g3_cp2_srt

0x53e4,	// (0x00022208) bg_active_tab_pane_cp2_srt_ParamLimits

0x53e4,	// (0x00022208) bg_active_tab_pane_cp2_srt

0x7a4d,	// (0x00024871) tabs_3_active_pane_srt_g1

0xaf18,	// (0x00027d3c) tabs_3_active_pane_srt_t1_ParamLimits

0xaf18,	// (0x00027d3c) tabs_3_active_pane_srt_t1

0x650d,	// (0x00023331) bg_active_tab_pane_g1_cp2_srt

0x6089,	// (0x00022ead) bg_active_tab_pane_g2_cp2_srt

0x6504,	// (0x00023328) bg_active_tab_pane_g3_cp2_srt

0xaed0,	// (0x00027cf4) tabs_4_active_pane_srt_ParamLimits

0xaed0,	// (0x00027cf4) tabs_4_active_pane_srt

0xaee2,	// (0x00027d06) tabs_4_passive_pane_cp2_srt_ParamLimits

0xaee2,	// (0x00027d06) tabs_4_passive_pane_cp2_srt

0x9f37,	// (0x00026d5b) aid_size_cell_toolbar

0x96ce,	// (0x000264f2) main_idle_act_pane_ParamLimits

0xa0d6,	// (0x00026efa) popup_large_graphic_colour_window_ParamLimits

0xa39b,	// (0x000271bf) popup_toolbar_window_ParamLimits

0xa39b,	// (0x000271bf) popup_toolbar_window

0x7962,	// (0x00024786) list_single_graphic_2heading_pane_ParamLimits

0x7962,	// (0x00024786) list_single_graphic_2heading_pane

0x5ca2,	// (0x00022ac6) aid_size_cell_apps_grid_lsc_pane

0x5cb4,	// (0x00022ad8) aid_size_cell_apps_grid_prt_pane

0x5af8,	// (0x0002291c) bg_wml_button_pane_cp1_ParamLimits

0x5af8,	// (0x0002291c) bg_wml_button_pane_cp1

0xa8d9,	// (0x000276fd) form_midp_field_text_pane_t1_ParamLimits

0x6844,	// (0x00023668) input_focus_pane_cp050_ParamLimits

0x69a8,	// (0x000237cc) list_midp_form_text_pane_ParamLimits

0x6985,	// (0x000237a9) input_focus_pane_cp051_ParamLimits

0x6999,	// (0x000237bd) list_midp_choice_pane_ParamLimits

0x75eb,	// (0x0002440f) list_single_2graphic_pane_cp3_ParamLimits

0x75eb,	// (0x0002440f) list_single_2graphic_pane_cp3

0xa88c,	// (0x000276b0) list_single_midp_graphic_pane_ParamLimits

0xa88c,	// (0x000276b0) list_single_midp_graphic_pane

0x8f50,	// (0x00025d74) list_single_graphic_2heading_pane_g1_ParamLimits

0x8f50,	// (0x00025d74) list_single_graphic_2heading_pane_g1

0x8f5c,	// (0x00025d80) list_single_graphic_2heading_pane_g4_ParamLimits

0x8f5c,	// (0x00025d80) list_single_graphic_2heading_pane_g4

0x8f68,	// (0x00025d8c) list_single_graphic_2heading_pane_g5_ParamLimits

0x8f68,	// (0x00025d8c) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b0,	// (0x0002c5d4) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b0,	// (0x0002c5d4) list_single_graphic_2heading_pane_g

0x8f74,	// (0x00025d98) list_single_graphic_2heading_pane_t1_ParamLimits

0x8f74,	// (0x00025d98) list_single_graphic_2heading_pane_t1

0x8f88,	// (0x00025dac) list_single_graphic_2heading_pane_t2_ParamLimits

0x8f88,	// (0x00025dac) list_single_graphic_2heading_pane_t2

0x8fa2,	// (0x00025dc6) list_single_graphic_2heading_pane_t3_ParamLimits

0x8fa2,	// (0x00025dc6) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b7,	// (0x0002c5db) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b7,	// (0x0002c5db) list_single_graphic_2heading_pane_t

0x66f8,	// (0x0002351c) bg_popup_sub_pane_cp2

0x6722,	// (0x00023546) grid_toobar_pane

0xa72e,	// (0x00027552) cell_toolbar_pane_ParamLimits

0xa72e,	// (0x00027552) cell_toolbar_pane

0x675c,	// (0x00023580) cell_toolbar_pane_g1_ParamLimits

0x675c,	// (0x00023580) cell_toolbar_pane_g1

0x6770,	// (0x00023594) cell_toolbar_pane_g2_ParamLimits

0x6770,	// (0x00023594) cell_toolbar_pane_g2

0x0001,

0xf7c5,	// (0x0002c5e9) cell_toolbar_pane_g_ParamLimits

0xf7c5,	// (0x0002c5e9) cell_toolbar_pane_g

0x6792,	// (0x000235b6) grid_highlight_pane_cp2_ParamLimits

0x6792,	// (0x000235b6) grid_highlight_pane_cp2

0x67ac,	// (0x000235d0) toolbar_button_pane

0x67b8,	// (0x000235dc) toolbar_button_pane_g1

0x67c8,	// (0x000235ec) toolbar_button_pane_g2

0x67c0,	// (0x000235e4) toolbar_button_pane_g3

0x67d8,	// (0x000235fc) toolbar_button_pane_g4

0x67d0,	// (0x000235f4) toolbar_button_pane_g5

0x67e0,	// (0x00023604) toolbar_button_pane_g6

0x67e8,	// (0x0002360c) toolbar_button_pane_g7

0x67f8,	// (0x0002361c) toolbar_button_pane_g8

0x67f0,	// (0x00023614) toolbar_button_pane_g9

0x0009,

0xf7ca,	// (0x0002c5ee) toolbar_button_pane_g

0xa760,	// (0x00027584) list_single_2graphic_pane_g1_cp3_ParamLimits

0xa760,	// (0x00027584) list_single_2graphic_pane_g1_cp3

0xa76c,	// (0x00027590) list_single_2graphic_pane_g2_cp3_ParamLimits

0xa76c,	// (0x00027590) list_single_2graphic_pane_g2_cp3

0xa77b,	// (0x0002759f) list_single_2graphic_pane_g3_cp3

0xa783,	// (0x000275a7) list_single_2graphic_pane_g4_cp3_ParamLimits

0xa783,	// (0x000275a7) list_single_2graphic_pane_g4_cp3

0xa78f,	// (0x000275b3) list_single_2graphic_pane_t1_cp3_ParamLimits

0xa78f,	// (0x000275b3) list_single_2graphic_pane_t1_cp3

0xa7a9,	// (0x000275cd) list_single_midp_graphic_pane_g2_ParamLimits

0xa7a9,	// (0x000275cd) list_single_midp_graphic_pane_g2

0x9f3f,	// (0x00026d63) aid_zoom_text_primary

0x8f48,	// (0x00025d6c) aid_zoom_text_secondary

0x9d5c,	// (0x00026b80) status_small_pane_g7_ParamLimits

0x9d5c,	// (0x00026b80) status_small_pane_g7

0x9d7f,	// (0x00026ba3) status_small_pane_t1_ParamLimits

0x9378,	// (0x0002619c) title_pane_g2

0x0003,

0xf54e,	// (0x0002c372) title_pane_g

0x95b8,	// (0x000263dc) aid_size_cell_colour_1_pane_ParamLimits

0x95b8,	// (0x000263dc) aid_size_cell_colour_1_pane

0x95cc,	// (0x000263f0) aid_size_cell_colour_2_pane_ParamLimits

0x95cc,	// (0x000263f0) aid_size_cell_colour_2_pane

0x95e0,	// (0x00026404) aid_size_cell_colour_3_pane_ParamLimits

0x95e0,	// (0x00026404) aid_size_cell_colour_3_pane

0x95f4,	// (0x00026418) aid_size_cell_colour_4_pane_ParamLimits

0x95f4,	// (0x00026418) aid_size_cell_colour_4_pane

0x9728,	// (0x0002654c) title_pane_stacon_g1_ParamLimits

0x9728,	// (0x0002654c) title_pane_stacon_g1

0x6d3f,	// (0x00023b63) popup_note_wait_window_g3_ParamLimits

0x6d3f,	// (0x00023b63) popup_note_wait_window_g3

0x6db5,	// (0x00023bd9) popup_note_wait_window_t5_ParamLimits

0x6db5,	// (0x00023bd9) popup_note_wait_window_t5

0x5378,	// (0x0002219c) main_feb_china_hwr_fs_writing_pane

0x9fe3,	// (0x00026e07) popup_feb_china_hwr_fs_window_ParamLimits

0x9fe3,	// (0x00026e07) popup_feb_china_hwr_fs_window

0xa7cb,	// (0x000275ef) aid_size_cell_hwr_fs_ParamLimits

0xa7cb,	// (0x000275ef) aid_size_cell_hwr_fs

0x6844,	// (0x00023668) bg_popup_sub_pane_cp3_ParamLimits

0x6844,	// (0x00023668) bg_popup_sub_pane_cp3

0xa7e0,	// (0x00027604) grid_hwr_fs_pane_ParamLimits

0xa7e0,	// (0x00027604) grid_hwr_fs_pane

0xa7f4,	// (0x00027618) linegrid_hwr_fs_pane_ParamLimits

0xa7f4,	// (0x00027618) linegrid_hwr_fs_pane

0xa804,	// (0x00027628) cell_hwr_fs_pane_ParamLimits

0xa804,	// (0x00027628) cell_hwr_fs_pane

0x6850,	// (0x00023674) linegrid_hwr_fs_pane_g1_ParamLimits

0x6850,	// (0x00023674) linegrid_hwr_fs_pane_g1

0xa822,	// (0x00027646) linegrid_hwr_fs_pane_g2_ParamLimits

0xa822,	// (0x00027646) linegrid_hwr_fs_pane_g2

0x685c,	// (0x00023680) linegrid_hwr_fs_pane_g3_ParamLimits

0x685c,	// (0x00023680) linegrid_hwr_fs_pane_g3

0xa834,	// (0x00027658) linegrid_hwr_fs_pane_g4_ParamLimits

0xa834,	// (0x00027658) linegrid_hwr_fs_pane_g4

0xa84e,	// (0x00027672) linegrid_hwr_fs_pane_g5_ParamLimits

0xa84e,	// (0x00027672) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f5,	// (0x0002c619) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f5,	// (0x0002c619) linegrid_hwr_fs_pane_g

0x6868,	// (0x0002368c) cell_hwr_fs_pane_g1_ParamLimits

0x6868,	// (0x0002368c) cell_hwr_fs_pane_g1

0x66c6,	// (0x000234ea) cell_hwr_fs_pane_g2_ParamLimits

0x66c6,	// (0x000234ea) cell_hwr_fs_pane_g2

0xa864,	// (0x00027688) cell_hwr_fs_pane_g3_ParamLimits

0xa864,	// (0x00027688) cell_hwr_fs_pane_g3

0xa871,	// (0x00027695) cell_hwr_fs_pane_g4_ParamLimits

0xa871,	// (0x00027695) cell_hwr_fs_pane_g4

0x0003,

0xf800,	// (0x0002c624) cell_hwr_fs_pane_g_ParamLimits

0xf800,	// (0x0002c624) cell_hwr_fs_pane_g

0xa87e,	// (0x000276a2) cell_hwr_fs_pane_t1

0x5378,	// (0x0002219c) grid_highlight_pane_cp6

0x5378,	// (0x0002219c) main_idle_act2_pane

0x5a9f,	// (0x000228c3) aid_inside_area_popup_secondary

0xaa88,	// (0x000278ac) aid_inside_area_window_primary_ParamLimits

0xaa88,	// (0x000278ac) aid_inside_area_window_primary

0x7b90,	// (0x000249b4) ai2_news_ticker_pane

0x7b98,	// (0x000249bc) aid_size_cell_ai1_link_ParamLimits

0x7b98,	// (0x000249bc) aid_size_cell_ai1_link

0xafac,	// (0x00027dd0) popup_ai2_data_window_ParamLimits

0xafac,	// (0x00027dd0) popup_ai2_data_window

0x7bb2,	// (0x000249d6) popup_ai2_link_window_ParamLimits

0x7bb2,	// (0x000249d6) popup_ai2_link_window

0x6844,	// (0x00023668) bg_popup_sub_pane_cp4_ParamLimits

0x6844,	// (0x00023668) bg_popup_sub_pane_cp4

0x7bc6,	// (0x000249ea) grid_ai2_link_pane_ParamLimits

0x7bc6,	// (0x000249ea) grid_ai2_link_pane

0x7bdd,	// (0x00024a01) popup_ai2_link_window_g1_ParamLimits

0x7bdd,	// (0x00024a01) popup_ai2_link_window_g1

0x7be9,	// (0x00024a0d) popup_ai2_link_window_g2_ParamLimits

0x7be9,	// (0x00024a0d) popup_ai2_link_window_g2

0x0001,

0xf9d3,	// (0x0002c7f7) popup_ai2_link_window_g_ParamLimits

0xf9d3,	// (0x0002c7f7) popup_ai2_link_window_g

0x7bf8,	// (0x00024a1c) ai2_mp_button_pane

0x7c00,	// (0x00024a24) ai2_mp_volume_pane

0x6985,	// (0x000237a9) bg_popup_sub_pane_cp5_ParamLimits

0x6985,	// (0x000237a9) bg_popup_sub_pane_cp5

0x7c08,	// (0x00024a2c) heading_ai2_gene_pane_ParamLimits

0x7c08,	// (0x00024a2c) heading_ai2_gene_pane

0x7c14,	// (0x00024a38) list_ai2_gene_pane_ParamLimits

0x7c14,	// (0x00024a38) list_ai2_gene_pane

0x7c5c,	// (0x00024a80) cell_ai2_link_pane_ParamLimits

0x7c5c,	// (0x00024a80) cell_ai2_link_pane

0x7c72,	// (0x00024a96) cell_ai2_link_pane_g1

0x5378,	// (0x0002219c) grid_highlight_pane_cp7

0xaff2,	// (0x00027e16) ai2_mp_volume_pane_g1

0x7d17,	// (0x00024b3b) ai2_mp_volume_pane_g2

0xafd6,	// (0x00027dfa) list_ai2_gene_pane_t1

0x7d0f,	// (0x00024b33) ai2_mp_volume_pane_g3

0x0002,

0xf9ec,	// (0x0002c810) ai2_mp_volume_pane_g

0xaffa,	// (0x00027e1e) volume_small_pane_cp3

0x7d1f,	// (0x00024b43) aid_size_cell_ai2_button

0x7d27,	// (0x00024b4b) grid_ai2_button_pane

0x7d30,	// (0x00024b54) cell_ai2_button_pane_ParamLimits

0x7d30,	// (0x00024b54) cell_ai2_button_pane

0x536e,	// (0x00022192) cell_ai2_button_pane_g1

0x5378,	// (0x0002219c) grid_highlight_pane_cp8

0x7ccf,	// (0x00024af3) ai2_gene_pane_t1_ParamLimits

0x7ccf,	// (0x00024af3) ai2_gene_pane_t1

0x9f2d,	// (0x00026d51) aid_height_parent_landscape

0xac7d,	// (0x00027aa1) aid_height_set_list

0x761a,	// (0x0002443e) aid_size_parent

0x79ff,	// (0x00024823) aid_size_cell_graphic_pane_ParamLimits

0x7c24,	// (0x00024a48) popup_ai2_data_window_g1_ParamLimits

0x7c24,	// (0x00024a48) popup_ai2_data_window_g1

0x7c30,	// (0x00024a54) ai2_news_ticker_pane_g1

0x7c38,	// (0x00024a5c) ai2_news_ticker_pane_g2

0x0001,

0xf9d8,	// (0x0002c7fc) ai2_news_ticker_pane_g

0x7c40,	// (0x00024a64) ai2_news_ticker_pane_t1

0x7c4e,	// (0x00024a72) ai2_news_ticker_pane_t2

0x0001,

0xf9dd,	// (0x0002c801) ai2_news_ticker_pane_t

0x7c7b,	// (0x00024a9f) heading_ai2_gene_pane_g1

0x7c83,	// (0x00024aa7) heading_ai2_gene_pane_t1_ParamLimits

0x7c83,	// (0x00024aa7) heading_ai2_gene_pane_t1

0x7c98,	// (0x00024abc) list_highlight_pane_cp6

0xafc0,	// (0x00027de4) ai2_gene_pane_ParamLimits

0xafc0,	// (0x00027de4) ai2_gene_pane

0xafe4,	// (0x00027e08) list_ai2_gene_pane_t2

0x0001,

0xf9e2,	// (0x0002c806) list_ai2_gene_pane_t

0x7ca0,	// (0x00024ac4) list_highlight_pane_cp8_ParamLimits

0x7ca0,	// (0x00024ac4) list_highlight_pane_cp8

0x7cb1,	// (0x00024ad5) ai2_gene_pane_g1_ParamLimits

0x7cb1,	// (0x00024ad5) ai2_gene_pane_g1

0x7cc3,	// (0x00024ae7) ai2_gene_pane_g2_ParamLimits

0x7cc3,	// (0x00024ae7) ai2_gene_pane_g2

0x0001,

0xf9e7,	// (0x0002c80b) ai2_gene_pane_g_ParamLimits

0xf9e7,	// (0x0002c80b) ai2_gene_pane_g

0x592e,	// (0x00022752) scroll_pane_cp12

0x9eea,	// (0x00026d0e) control_pane_t3_ParamLimits

0x9eea,	// (0x00026d0e) control_pane_t3

0x9d70,	// (0x00026b94) status_small_pane_g8_ParamLimits

0x9d70,	// (0x00026b94) status_small_pane_g8

0xa0a3,	// (0x00026ec7) popup_find_window_ParamLimits

0xa242,	// (0x00027066) popup_note_image_window_ParamLimits

0xc2b5,	// (0x000290d9) list_double2_graphic_pane_vc_g1_ParamLimits

0xc2b5,	// (0x000290d9) list_double2_graphic_pane_vc_g1

0xe34c,	// (0x0002b170) list_double2_graphic_pane_vc_g2_ParamLimits

0xe34c,	// (0x0002b170) list_double2_graphic_pane_vc_g2

0xe358,	// (0x0002b17c) list_double2_graphic_pane_vc_g3_ParamLimits

0xe358,	// (0x0002b17c) list_double2_graphic_pane_vc_g3

0x0002,

0xf7be,	// (0x0002c5e2) list_double2_graphic_pane_vc_g_ParamLimits

0xf7be,	// (0x0002c5e2) list_double2_graphic_pane_vc_g

0xe364,	// (0x0002b188) list_double2_graphic_pane_vc_t1_ParamLimits

0xe364,	// (0x0002b188) list_double2_graphic_pane_vc_t1

0xe34c,	// (0x0002b170) list_single_heading_pane_vc_g1_ParamLimits

0xe34c,	// (0x0002b170) list_single_heading_pane_vc_g1

0xe358,	// (0x0002b17c) list_single_heading_pane_vc_g2_ParamLimits

0xe358,	// (0x0002b17c) list_single_heading_pane_vc_g2

0x0001,

0xf7df,	// (0x0002c603) list_single_heading_pane_vc_g_ParamLimits

0xf7df,	// (0x0002c603) list_single_heading_pane_vc_g

0xe37a,	// (0x0002b19e) list_single_heading_pane_vc_t1_ParamLimits

0xe37a,	// (0x0002b19e) list_single_heading_pane_vc_t1

0xe390,	// (0x0002b1b4) list_single_heading_pane_vc_t2_ParamLimits

0xe390,	// (0x0002b1b4) list_single_heading_pane_vc_t2

0x0001,

0xf7e4,	// (0x0002c608) list_single_heading_pane_vc_t_ParamLimits

0xf7e4,	// (0x0002c608) list_single_heading_pane_vc_t

0x6800,	// (0x00023624) list_setting_number_pane_vc_g1_ParamLimits

0x6800,	// (0x00023624) list_setting_number_pane_vc_g1

0x680c,	// (0x00023630) list_setting_number_pane_vc_g2_ParamLimits

0x680c,	// (0x00023630) list_setting_number_pane_vc_g2

0x0001,

0xf7e9,	// (0x0002c60d) list_setting_number_pane_vc_g_ParamLimits

0xf7e9,	// (0x0002c60d) list_setting_number_pane_vc_g

0xe3a2,	// (0x0002b1c6) list_setting_number_pane_vc_t1_ParamLimits

0xe3a2,	// (0x0002b1c6) list_setting_number_pane_vc_t1

0xe3b6,	// (0x0002b1da) list_setting_number_pane_vc_t2_ParamLimits

0xe3b6,	// (0x0002b1da) list_setting_number_pane_vc_t2

0xe3ce,	// (0x0002b1f2) list_setting_number_pane_vc_t3_ParamLimits

0xe3ce,	// (0x0002b1f2) list_setting_number_pane_vc_t3

0x0002,

0xf7ee,	// (0x0002c612) list_setting_number_pane_vc_t_ParamLimits

0xf7ee,	// (0x0002c612) list_setting_number_pane_vc_t

0xe3e6,	// (0x0002b20a) set_value_pane_vc_ParamLimits

0xe3e6,	// (0x0002b20a) set_value_pane_vc

0x7962,	// (0x00024786) list_double2_graphic_pane_vc_ParamLimits

0x7962,	// (0x00024786) list_double2_graphic_pane_vc

0x7962,	// (0x00024786) list_double2_large_graphic_pane_vc_ParamLimits

0x7962,	// (0x00024786) list_double2_large_graphic_pane_vc

0x7962,	// (0x00024786) list_double2_pane_vc_ParamLimits

0x7962,	// (0x00024786) list_double2_pane_vc

0x7962,	// (0x00024786) list_double_graphic_heading_pane_vc_ParamLimits

0x7962,	// (0x00024786) list_double_graphic_heading_pane_vc

0x7962,	// (0x00024786) list_double_graphic_pane_vc_ParamLimits

0x7962,	// (0x00024786) list_double_graphic_pane_vc

0x7962,	// (0x00024786) list_double_heading_pane_vc_ParamLimits

0x7962,	// (0x00024786) list_double_heading_pane_vc

0x7973,	// (0x00024797) list_double_large_graphic_pane_vc_ParamLimits

0x7973,	// (0x00024797) list_double_large_graphic_pane_vc

0x7962,	// (0x00024786) list_double_number_pane_vc_ParamLimits

0x7962,	// (0x00024786) list_double_number_pane_vc

0x7962,	// (0x00024786) list_double_pane_vc_ParamLimits

0x7962,	// (0x00024786) list_double_pane_vc

0x7962,	// (0x00024786) list_double_time_pane_vc_ParamLimits

0x7962,	// (0x00024786) list_double_time_pane_vc

0x7962,	// (0x00024786) list_setting_number_pane_vc_ParamLimits

0x7962,	// (0x00024786) list_setting_number_pane_vc

0x7962,	// (0x00024786) list_setting_pane_vc_ParamLimits

0x7962,	// (0x00024786) list_setting_pane_vc

0x7962,	// (0x00024786) list_single_graphic_heading_pane_vc_ParamLimits

0x7962,	// (0x00024786) list_single_graphic_heading_pane_vc

0x7962,	// (0x00024786) list_single_heading_pane_vc_ParamLimits

0x7962,	// (0x00024786) list_single_heading_pane_vc

0xadcd,	// (0x00027bf1) list_single_number_heading_pane_vc_ParamLimits

0xadcd,	// (0x00027bf1) list_single_number_heading_pane_vc

0xe485,	// (0x0002b2a9) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xe485,	// (0x0002b2a9) list_double_graphic_heading_pane_vc_g1

0xe34c,	// (0x0002b170) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xe34c,	// (0x0002b170) list_double_graphic_heading_pane_vc_g2

0xe358,	// (0x0002b17c) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xe358,	// (0x0002b17c) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9f3,	// (0x0002c817) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9f3,	// (0x0002c817) list_double_graphic_heading_pane_vc_g

0xe491,	// (0x0002b2b5) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xe491,	// (0x0002b2b5) list_double_graphic_heading_pane_vc_t1

0xe4a7,	// (0x0002b2cb) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xe4a7,	// (0x0002b2cb) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9fa,	// (0x0002c81e) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9fa,	// (0x0002c81e) list_double_graphic_heading_pane_vc_t

0x6800,	// (0x00023624) list_setting_pane_vc_g1_ParamLimits

0x6800,	// (0x00023624) list_setting_pane_vc_g1

0x680c,	// (0x00023630) list_setting_pane_vc_g2_ParamLimits

0x680c,	// (0x00023630) list_setting_pane_vc_g2

0x0001,

0xf7e9,	// (0x0002c60d) list_setting_pane_vc_g_ParamLimits

0xf7e9,	// (0x0002c60d) list_setting_pane_vc_g

0xe4bf,	// (0x0002b2e3) list_setting_pane_vc_t1_ParamLimits

0xe4bf,	// (0x0002b2e3) list_setting_pane_vc_t1

0xe4d7,	// (0x0002b2fb) list_setting_pane_vc_t2_ParamLimits

0xe4d7,	// (0x0002b2fb) list_setting_pane_vc_t2

0x0001,

0xfa3d,	// (0x0002c861) list_setting_pane_vc_t_ParamLimits

0xfa3d,	// (0x0002c861) list_setting_pane_vc_t

0xe3e6,	// (0x0002b20a) set_value_pane_cp_vc_ParamLimits

0xe3e6,	// (0x0002b20a) set_value_pane_cp_vc

0xe34c,	// (0x0002b170) list_single_number_heading_pane_vc_g1_ParamLimits

0xe34c,	// (0x0002b170) list_single_number_heading_pane_vc_g1

0xe358,	// (0x0002b17c) list_single_number_heading_pane_vc_g2_ParamLimits

0xe358,	// (0x0002b17c) list_single_number_heading_pane_vc_g2

0x0001,

0xf7df,	// (0x0002c603) list_single_number_heading_pane_vc_g_ParamLimits

0xf7df,	// (0x0002c603) list_single_number_heading_pane_vc_g

0xe4ed,	// (0x0002b311) list_single_number_heading_pane_vc_t1_ParamLimits

0xe4ed,	// (0x0002b311) list_single_number_heading_pane_vc_t1

0xe503,	// (0x0002b327) list_single_number_heading_pane_vc_t2_ParamLimits

0xe503,	// (0x0002b327) list_single_number_heading_pane_vc_t2

0xe515,	// (0x0002b339) list_single_number_heading_pane_vc_t3_ParamLimits

0xe515,	// (0x0002b339) list_single_number_heading_pane_vc_t3

0x0002,

0xfa42,	// (0x0002c866) list_single_number_heading_pane_vc_t_ParamLimits

0xfa42,	// (0x0002c866) list_single_number_heading_pane_vc_t

0xc2b5,	// (0x000290d9) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xc2b5,	// (0x000290d9) list_single_graphic_heading_pane_vc_g1

0xe34c,	// (0x0002b170) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xe34c,	// (0x0002b170) list_single_graphic_heading_pane_vc_g4

0xe358,	// (0x0002b17c) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xe358,	// (0x0002b17c) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7be,	// (0x0002c5e2) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7be,	// (0x0002c5e2) list_single_graphic_heading_pane_vc_g

0xe4ed,	// (0x0002b311) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xe4ed,	// (0x0002b311) list_single_graphic_heading_pane_vc_t1

0xe527,	// (0x0002b34b) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xe527,	// (0x0002b34b) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa49,	// (0x0002c86d) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa49,	// (0x0002c86d) list_single_graphic_heading_pane_vc_t

0xe34c,	// (0x0002b170) list_double2_pane_vc_g1_ParamLimits

0xe34c,	// (0x0002b170) list_double2_pane_vc_g1

0xe358,	// (0x0002b17c) list_double2_pane_vc_g2_ParamLimits

0xe358,	// (0x0002b17c) list_double2_pane_vc_g2

0x0001,

0xf7df,	// (0x0002c603) list_double2_pane_vc_g_ParamLimits

0xf7df,	// (0x0002c603) list_double2_pane_vc_g

0xe539,	// (0x0002b35d) list_double2_pane_vc_t1_ParamLimits

0xe539,	// (0x0002b35d) list_double2_pane_vc_t1

0xe54f,	// (0x0002b373) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xe54f,	// (0x0002b373) list_double2_large_graphic_pane_vc_g1

0xe34c,	// (0x0002b170) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xe34c,	// (0x0002b170) list_double2_large_graphic_pane_vc_g2

0xe358,	// (0x0002b17c) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xe358,	// (0x0002b17c) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa4e,	// (0x0002c872) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa4e,	// (0x0002c872) list_double2_large_graphic_pane_vc_g

0xe55b,	// (0x0002b37f) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xe55b,	// (0x0002b37f) list_double2_large_graphic_pane_vc_t1

0xe571,	// (0x0002b395) list_double_time_pane_vc_g1_ParamLimits

0xe571,	// (0x0002b395) list_double_time_pane_vc_g1

0xe57d,	// (0x0002b3a1) list_double_time_pane_vc_g2_ParamLimits

0xe57d,	// (0x0002b3a1) list_double_time_pane_vc_g2

0x0001,

0xfa55,	// (0x0002c879) list_double_time_pane_vc_g_ParamLimits

0xfa55,	// (0x0002c879) list_double_time_pane_vc_g

0xe589,	// (0x0002b3ad) list_double_time_pane_vc_t1_ParamLimits

0xe589,	// (0x0002b3ad) list_double_time_pane_vc_t1

0xe5a7,	// (0x0002b3cb) list_double_time_pane_vc_t2_ParamLimits

0xe5a7,	// (0x0002b3cb) list_double_time_pane_vc_t2

0xe5e5,	// (0x0002b409) list_double_time_pane_vc_t3_ParamLimits

0xe5e5,	// (0x0002b409) list_double_time_pane_vc_t3

0xe5f7,	// (0x0002b41b) list_double_time_pane_vc_t4_ParamLimits

0xe5f7,	// (0x0002b41b) list_double_time_pane_vc_t4

0x0003,

0xfa5a,	// (0x0002c87e) list_double_time_pane_vc_t_ParamLimits

0xfa5a,	// (0x0002c87e) list_double_time_pane_vc_t

0xe34c,	// (0x0002b170) list_double_pane_vc_g1_ParamLimits

0xe34c,	// (0x0002b170) list_double_pane_vc_g1

0xe358,	// (0x0002b17c) list_double_pane_vc_g2_ParamLimits

0xe358,	// (0x0002b17c) list_double_pane_vc_g2

0x0001,

0xf7df,	// (0x0002c603) list_double_pane_vc_g_ParamLimits

0xf7df,	// (0x0002c603) list_double_pane_vc_g

0xe609,	// (0x0002b42d) list_double_pane_vc_t1_ParamLimits

0xe609,	// (0x0002b42d) list_double_pane_vc_t1

0xe61b,	// (0x0002b43f) list_double_pane_vc_t2_ParamLimits

0xe61b,	// (0x0002b43f) list_double_pane_vc_t2

0x0001,

0xfa63,	// (0x0002c887) list_double_pane_vc_t_ParamLimits

0xfa63,	// (0x0002c887) list_double_pane_vc_t

0xe34c,	// (0x0002b170) list_double_number_pane_vc_g1_ParamLimits

0xe34c,	// (0x0002b170) list_double_number_pane_vc_g1

0xe358,	// (0x0002b17c) list_double_number_pane_vc_g2_ParamLimits

0xe358,	// (0x0002b17c) list_double_number_pane_vc_g2

0x0001,

0xf7df,	// (0x0002c603) list_double_number_pane_vc_g_ParamLimits

0xf7df,	// (0x0002c603) list_double_number_pane_vc_g

0xe631,	// (0x0002b455) list_double_number_pane_vc_t1_ParamLimits

0xe631,	// (0x0002b455) list_double_number_pane_vc_t1

0xe643,	// (0x0002b467) list_double_number_pane_vc_t2_ParamLimits

0xe643,	// (0x0002b467) list_double_number_pane_vc_t2

0xe61b,	// (0x0002b43f) list_double_number_pane_vc_t3_ParamLimits

0xe61b,	// (0x0002b43f) list_double_number_pane_vc_t3

0x0002,

0xfa68,	// (0x0002c88c) list_double_number_pane_vc_t_ParamLimits

0xfa68,	// (0x0002c88c) list_double_number_pane_vc_t

0xe655,	// (0x0002b479) list_double_large_graphic_pane_vc_g1_ParamLimits

0xe655,	// (0x0002b479) list_double_large_graphic_pane_vc_g1

0xe671,	// (0x0002b495) list_double_large_graphic_pane_vc_g2_ParamLimits

0xe671,	// (0x0002b495) list_double_large_graphic_pane_vc_g2

0xe685,	// (0x0002b4a9) list_double_large_graphic_pane_vc_g3_ParamLimits

0xe685,	// (0x0002b4a9) list_double_large_graphic_pane_vc_g3

0xe694,	// (0x0002b4b8) list_double_large_graphic_pane_vc_g4_ParamLimits

0xe694,	// (0x0002b4b8) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa6f,	// (0x0002c893) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa6f,	// (0x0002c893) list_double_large_graphic_pane_vc_g

0xe6a0,	// (0x0002b4c4) list_double_large_graphic_pane_vc_t1_ParamLimits

0xe6a0,	// (0x0002b4c4) list_double_large_graphic_pane_vc_t1

0xe6ba,	// (0x0002b4de) list_double_large_graphic_pane_vc_t2_ParamLimits

0xe6ba,	// (0x0002b4de) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa78,	// (0x0002c89c) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa78,	// (0x0002c89c) list_double_large_graphic_pane_vc_t

0xe34c,	// (0x0002b170) list_double_heading_pane_vc_g1_ParamLimits

0xe34c,	// (0x0002b170) list_double_heading_pane_vc_g1

0xe358,	// (0x0002b17c) list_double_heading_pane_vc_g2_ParamLimits

0xe358,	// (0x0002b17c) list_double_heading_pane_vc_g2

0x0001,

0xf7df,	// (0x0002c603) list_double_heading_pane_vc_g_ParamLimits

0xf7df,	// (0x0002c603) list_double_heading_pane_vc_g

0xe6da,	// (0x0002b4fe) list_double_heading_pane_vc_t1_ParamLimits

0xe6da,	// (0x0002b4fe) list_double_heading_pane_vc_t1

0xe6ec,	// (0x0002b510) list_double_heading_pane_vc_t2_ParamLimits

0xe6ec,	// (0x0002b510) list_double_heading_pane_vc_t2

0x0001,

0xfa7d,	// (0x0002c8a1) list_double_heading_pane_vc_t_ParamLimits

0xfa7d,	// (0x0002c8a1) list_double_heading_pane_vc_t

0xe702,	// (0x0002b526) list_double_graphic_pane_vc_g1_ParamLimits

0xe702,	// (0x0002b526) list_double_graphic_pane_vc_g1

0xe715,	// (0x0002b539) list_double_graphic_pane_vc_g2_ParamLimits

0xe715,	// (0x0002b539) list_double_graphic_pane_vc_g2

0xe34c,	// (0x0002b170) list_double_graphic_pane_vc_g3_ParamLimits

0xe34c,	// (0x0002b170) list_double_graphic_pane_vc_g3

0x0003,

0xfa82,	// (0x0002c8a6) list_double_graphic_pane_vc_g_ParamLimits

0xfa82,	// (0x0002c8a6) list_double_graphic_pane_vc_g

0xe732,	// (0x0002b556) list_double_graphic_pane_vc_t1_ParamLimits

0xe732,	// (0x0002b556) list_double_graphic_pane_vc_t1

0xe750,	// (0x0002b574) list_double_graphic_pane_vc_t2_ParamLimits

0xe750,	// (0x0002b574) list_double_graphic_pane_vc_t2

0x0001,

0xfa8b,	// (0x0002c8af) list_double_graphic_pane_vc_t_ParamLimits

0xfa8b,	// (0x0002c8af) list_double_graphic_pane_vc_t

0x8fe2,	// (0x00025e06) aid_size_cell_fastswap

0x8fea,	// (0x00025e0e) aid_size_cell_touch_ParamLimits

0x8fea,	// (0x00025e0e) aid_size_cell_touch

0x9245,	// (0x00026069) popup_fast_swap_wide_window_ParamLimits

0x9245,	// (0x00026069) popup_fast_swap_wide_window

0x930b,	// (0x0002612f) touch_pane_ParamLimits

0x930b,	// (0x0002612f) touch_pane

0x597b,	// (0x0002279f) button_value_adjust_pane_cp2

0xe090,	// (0x0002aeb4) button_value_adjust_pane_cp4

0xe0b0,	// (0x0002aed4) form_field_data_pane_cp2

0xe0cf,	// (0x0002aef3) form_field_data_wide_pane_cp2

0x5cd9,	// (0x00022afd) bg_scroll_pane_ParamLimits

0x9911,	// (0x00026735) scroll_handle_pane_ParamLimits

0x9925,	// (0x00026749) scroll_sc2_down_pane_ParamLimits

0x9925,	// (0x00026749) scroll_sc2_down_pane

0x5d0a,	// (0x00022b2e) scroll_sc2_up_pane_ParamLimits

0x5d0a,	// (0x00022b2e) scroll_sc2_up_pane

0xb168,	// (0x00027f8c) grid_wheel_folder_pane_g1_ParamLimits

0xb168,	// (0x00027f8c) grid_wheel_folder_pane_g1

0x9b53,	// (0x00026977) clock_nsta_pane_cp2_ParamLimits

0x9b53,	// (0x00026977) clock_nsta_pane_cp2

0x9bb8,	// (0x000269dc) listscroll_midp_pane_ParamLimits

0x9bc4,	// (0x000269e8) midp_canvas_pane

0x657e,	// (0x000233a2) nsta_clock_indic_pane

0x65a6,	// (0x000233ca) listscroll_form_pane_vc

0x65ae,	// (0x000233d2) listscroll_set_pane_vc_ParamLimits

0x65ae,	// (0x000233d2) listscroll_set_pane_vc

0xa4e8,	// (0x0002730c) clock_nsta_pane

0xa4f5,	// (0x00027319) indicator_nsta_pane

0x66f8,	// (0x0002351c) bg_popup_sub_pane_cp2_ParamLimits

0x670c,	// (0x00023530) find_pane_cp2_ParamLimits

0x670c,	// (0x00023530) find_pane_cp2

0x6722,	// (0x00023546) grid_toobar_pane_ParamLimits

0x6818,	// (0x0002363c) list_form_gen_pane_vc_ParamLimits

0x6818,	// (0x0002363c) list_form_gen_pane_vc

0x682e,	// (0x00023652) scroll_pane_cp8_vc_ParamLimits

0x682e,	// (0x00023652) scroll_pane_cp8_vc

0x687e,	// (0x000236a2) data_form_wide_pane_vc_ParamLimits

0x687e,	// (0x000236a2) data_form_wide_pane_vc

0x688a,	// (0x000236ae) form_field_data_wide_pane_vc_g1

0x6892,	// (0x000236b6) form_field_data_wide_pane_vc_t1_ParamLimits

0x6892,	// (0x000236b6) form_field_data_wide_pane_vc_t1

0x598f,	// (0x000227b3) input_focus_pane_cp6_vc_ParamLimits

0x598f,	// (0x000227b3) input_focus_pane_cp6_vc

0xa8f9,	// (0x0002771d) list_midp_pane_ParamLimits

0xa905,	// (0x00027729) scroll_pane_cp16_ParamLimits

0xa905,	// (0x00027729) scroll_pane_cp16

0x6b25,	// (0x00023949) button_value_adjust_pane_ParamLimits

0x6b25,	// (0x00023949) button_value_adjust_pane

0xac8e,	// (0x00027ab2) button_value_adjust_pane_cp6_ParamLimits

0xac8e,	// (0x00027ab2) button_value_adjust_pane_cp6

0xad96,	// (0x00027bba) settings_code_pane_cp_ParamLimits

0xad96,	// (0x00027bba) settings_code_pane_cp

0x536e,	// (0x00022192) cell_touch_pane_g1

0x536e,	// (0x00022192) cell_touch_pane_g2

0x0001,

0xf703,	// (0x0002c527) cell_touch_pane_g

0xb003,	// (0x00027e27) cell_touch_pane_cp_ParamLimits

0xb003,	// (0x00027e27) cell_touch_pane_cp

0xb013,	// (0x00027e37) cell_touch_pane_ParamLimits

0xb013,	// (0x00027e37) cell_touch_pane

0x536e,	// (0x00022192) scroll_sc2_down_pane_g1

0x536e,	// (0x00022192) scroll_sc2_up_pane_g1

0x5378,	// (0x0002219c) bg_set_opt_pane_cp4_vc

0x7d42,	// (0x00024b66) list_set_graphic_pane_vc_g1_ParamLimits

0x7d42,	// (0x00024b66) list_set_graphic_pane_vc_g1

0x7d4e,	// (0x00024b72) list_set_graphic_pane_vc_g2_ParamLimits

0x7d4e,	// (0x00024b72) list_set_graphic_pane_vc_g2

0x0001,

0xf9ff,	// (0x0002c823) list_set_graphic_pane_vc_g_ParamLimits

0xf9ff,	// (0x0002c823) list_set_graphic_pane_vc_g

0x7d5a,	// (0x00024b7e) text_primary_small_cp13_vc_ParamLimits

0x7d5a,	// (0x00024b7e) text_primary_small_cp13_vc

0x7609,	// (0x0002442d) list_set_graphic_pane_vc_ParamLimits

0x7609,	// (0x0002442d) list_set_graphic_pane_vc

0x5378,	// (0x0002219c) input_focus_pane_cp2_vc

0x536e,	// (0x00022192) setting_code_pane_vc_g1

0x53fb,	// (0x0002221f) setting_code_pane_vc_t1

0x7d72,	// (0x00024b96) set_text_pane_vc_t1_ParamLimits

0x7d72,	// (0x00024b96) set_text_pane_vc_t1

0x5378,	// (0x0002219c) input_focus_pane_cp1_vc

0x7d8c,	// (0x00024bb0) list_set_text_pane_vc

0x536e,	// (0x00022192) setting_text_pane_vc_g1

0x5378,	// (0x0002219c) bg_set_opt_pane_cp2_vc

0x53f2,	// (0x00022216) setting_slider_graphic_pane_vc_g1

0x7d96,	// (0x00024bba) setting_slider_graphic_pane_vc_t1

0x7da5,	// (0x00024bc9) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa04,	// (0x0002c828) setting_slider_graphic_pane_vc_t

0x7db4,	// (0x00024bd8) slider_set_pane_cp_vc

0x7dbc,	// (0x00024be0) slider_set_pane_vc_g1

0x7dc5,	// (0x00024be9) slider_set_pane_vc_g2

0x0006,

0xfa09,	// (0x0002c82d) slider_set_pane_vc_g

0x59e7,	// (0x0002280b) set_opt_bg_pane_g1_copy1

0x59ef,	// (0x00022813) set_opt_bg_pane_g2_copy1

0x7df1,	// (0x00024c15) set_opt_bg_pane_g3_copy1

0x59ff,	// (0x00022823) set_opt_bg_pane_g4_copy1

0x5a07,	// (0x0002282b) set_opt_bg_pane_g5_copy1

0x5a0f,	// (0x00022833) set_opt_bg_pane_g6_copy1

0x7df9,	// (0x00024c1d) set_opt_bg_pane_g7_copy1

0x7e01,	// (0x00024c25) set_opt_bg_pane_g8_copy1

0x7e09,	// (0x00024c2d) set_opt_bg_pane_g9_copy1

0x5378,	// (0x0002219c) bg_set_opt_pane_cp_vc

0x7e11,	// (0x00024c35) setting_slider_pane_vc_t1

0x7e20,	// (0x00024c44) setting_slider_pane_vc_t2

0x7e2f,	// (0x00024c53) setting_slider_pane_vc_t3

0x0002,

0xfa18,	// (0x0002c83c) setting_slider_pane_vc_t

0x7e3e,	// (0x00024c62) slider_set_pane_vc

0xa945,	// (0x00027769) volume_set_pane_vc_g1

0xb025,	// (0x00027e49) volume_set_pane_vc_g2

0xb02e,	// (0x00027e52) volume_set_pane_vc_g3

0xb037,	// (0x00027e5b) volume_set_pane_vc_g4

0xb040,	// (0x00027e64) volume_set_pane_vc_g5

0xb049,	// (0x00027e6d) volume_set_pane_vc_g6

0xb052,	// (0x00027e76) volume_set_pane_vc_g7

0xb05b,	// (0x00027e7f) volume_set_pane_vc_g8

0xb064,	// (0x00027e88) volume_set_pane_vc_g9

0xb06d,	// (0x00027e91) volume_set_pane_vc_g10

0x0009,

0xfa1f,	// (0x0002c843) volume_set_pane_vc_g

0x7e46,	// (0x00024c6a) volume_set_pane_vc

0x7e4e,	// (0x00024c72) button_value_adjust_pane_cp1_vc

0x7e56,	// (0x00024c7a) list_highlight_pane_cp2_vc

0x7e5f,	// (0x00024c83) list_set_pane_vc_ParamLimits

0x7e5f,	// (0x00024c83) list_set_pane_vc

0x7eb1,	// (0x00024cd5) main_pane_set_vc_t1_ParamLimits

0x7eb1,	// (0x00024cd5) main_pane_set_vc_t1

0x7ec6,	// (0x00024cea) main_pane_set_vc_t2_ParamLimits

0x7ec6,	// (0x00024cea) main_pane_set_vc_t2

0x7ed8,	// (0x00024cfc) main_pane_set_vc_t3_ParamLimits

0x7ed8,	// (0x00024cfc) main_pane_set_vc_t3

0x7eea,	// (0x00024d0e) main_pane_set_vc_t4_ParamLimits

0x7eea,	// (0x00024d0e) main_pane_set_vc_t4

0x0003,

0xfa34,	// (0x0002c858) main_pane_set_vc_t_ParamLimits

0xfa34,	// (0x0002c858) main_pane_set_vc_t

0x7efc,	// (0x00024d20) setting_code_pane_vc_ParamLimits

0x7efc,	// (0x00024d20) setting_code_pane_vc

0x7f0b,	// (0x00024d2f) setting_slider_graphic_pane_vc

0x7f0b,	// (0x00024d2f) setting_slider_pane_vc

0x7f0b,	// (0x00024d2f) setting_text_pane_vc

0x7f0b,	// (0x00024d2f) setting_volume_pane_vc

0x7f13,	// (0x00024d37) scroll_pane_cp121_vc

0x5969,	// (0x0002278d) set_content_pane_vc

0x7f1b,	// (0x00024d3f) button_value_adjust_pane_g1

0x7f24,	// (0x00024d48) button_value_adjust_pane_g2

0x0001,

0xfa90,	// (0x0002c8b4) button_value_adjust_pane_g

0x7f2d,	// (0x00024d51) form_field_slider_wide_pane_vc_t1_ParamLimits

0x7f2d,	// (0x00024d51) form_field_slider_wide_pane_vc_t1

0x7f3f,	// (0x00024d63) form_field_slider_wide_pane_vc_t2_ParamLimits

0x7f3f,	// (0x00024d63) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa95,	// (0x0002c8b9) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa95,	// (0x0002c8b9) form_field_slider_wide_pane_vc_t

0x53c6,	// (0x000221ea) input_focus_pane_cp10_vc_ParamLimits

0x53c6,	// (0x000221ea) input_focus_pane_cp10_vc

0x7f67,	// (0x00024d8b) slider_cont_pane_cp1_vc_ParamLimits

0x7f67,	// (0x00024d8b) slider_cont_pane_cp1_vc

0x7f77,	// (0x00024d9b) slider_form_pane_g1_cp2

0x7dc5,	// (0x00024be9) slider_form_pane_g2_cp2

0x7fa4,	// (0x00024dc8) form_field_slider_pane_vc_t3

0x7fb2,	// (0x00024dd6) form_field_slider_pane_vc_t4

0x7fc0,	// (0x00024de4) slider_form_pane_vc_ParamLimits

0x7fc0,	// (0x00024de4) slider_form_pane_vc

0x7fcd,	// (0x00024df1) form_field_slider_pane_vc_t1_ParamLimits

0x7fcd,	// (0x00024df1) form_field_slider_pane_vc_t1

0x7f3f,	// (0x00024d63) form_field_slider_pane_vc_t2_ParamLimits

0x7f3f,	// (0x00024d63) form_field_slider_pane_vc_t2

0x0001,

0xfaa7,	// (0x0002c8cb) form_field_slider_pane_vc_t_ParamLimits

0xfaa7,	// (0x0002c8cb) form_field_slider_pane_vc_t

0x53c6,	// (0x000221ea) input_focus_pane_cp9_vc_ParamLimits

0x53c6,	// (0x000221ea) input_focus_pane_cp9_vc

0x7fe3,	// (0x00024e07) slider_cont_pane_vc_ParamLimits

0x7fe3,	// (0x00024e07) slider_cont_pane_vc

0x7ff5,	// (0x00024e19) list_form_graphic_pane_cp_vc_ParamLimits

0x7ff5,	// (0x00024e19) list_form_graphic_pane_cp_vc

0x688a,	// (0x000236ae) form_field_popup_wide_pane_vc_g1

0x800a,	// (0x00024e2e) form_field_popup_wide_pane_vc_t1_ParamLimits

0x800a,	// (0x00024e2e) form_field_popup_wide_pane_vc_t1

0x598f,	// (0x000227b3) input_focus_pane_cp8_vc_ParamLimits

0x598f,	// (0x000227b3) input_focus_pane_cp8_vc

0x8049,	// (0x00024e6d) list_form_wide_pane_vc_ParamLimits

0x8049,	// (0x00024e6d) list_form_wide_pane_vc

0x8055,	// (0x00024e79) list_form_graphic_pane_vc_g1

0x805d,	// (0x00024e81) list_form_graphic_pane_vc_t1_ParamLimits

0x805d,	// (0x00024e81) list_form_graphic_pane_vc_t1

0x53e4,	// (0x00022208) list_highlight_pane_cp5_vc_ParamLimits

0x53e4,	// (0x00022208) list_highlight_pane_cp5_vc

0x8079,	// (0x00024e9d) list_form_graphic_pane_vc_ParamLimits

0x8079,	// (0x00024e9d) list_form_graphic_pane_vc

0x688a,	// (0x000236ae) form_field_popup_pane_vc_g1

0x808f,	// (0x00024eb3) form_field_popup_pane_vc_t1_ParamLimits

0x808f,	// (0x00024eb3) form_field_popup_pane_vc_t1

0x598f,	// (0x000227b3) input_focus_pane_cp7_vc_ParamLimits

0x598f,	// (0x000227b3) input_focus_pane_cp7_vc

0x80a4,	// (0x00024ec8) list_form_pane_vc_ParamLimits

0x80a4,	// (0x00024ec8) list_form_pane_vc

0x80b0,	// (0x00024ed4) data_form_pane_vc_t1_ParamLimits

0x80b0,	// (0x00024ed4) data_form_pane_vc_t1

0x59e7,	// (0x0002280b) input_focus_pane_vc_g1

0x59ef,	// (0x00022813) input_focus_pane_vc_g2

0x59f7,	// (0x0002281b) input_focus_pane_vc_g3

0x59ff,	// (0x00022823) input_focus_pane_vc_g4

0x5a07,	// (0x0002282b) input_focus_pane_vc_g5

0x5a0f,	// (0x00022833) input_focus_pane_vc_g6

0x5a17,	// (0x0002283b) input_focus_pane_vc_g7

0x5a1f,	// (0x00022843) input_focus_pane_vc_g8

0x5a27,	// (0x0002284b) input_focus_pane_vc_g9

0x536e,	// (0x00022192) input_focus_pane_vc_g10

0x0009,

0xf68c,	// (0x0002c4b0) input_focus_pane_vc_g

0x687e,	// (0x000236a2) data_form_pane_vc_ParamLimits

0x687e,	// (0x000236a2) data_form_pane_vc

0x688a,	// (0x000236ae) form_field_data_pane_vc_g1

0x80cb,	// (0x00024eef) form_field_data_pane_vc_t1_ParamLimits

0x80cb,	// (0x00024eef) form_field_data_pane_vc_t1

0x598f,	// (0x000227b3) input_focus_pane_vc_ParamLimits

0x598f,	// (0x000227b3) input_focus_pane_vc

0x80e1,	// (0x00024f05) button_value_adjust_pane_cp3_vc

0x80e9,	// (0x00024f0d) button_value_adjust_pane_cp5_vc

0x80f1,	// (0x00024f15) form_field_data_pane_vc_ParamLimits

0x80f1,	// (0x00024f15) form_field_data_pane_vc

0x8108,	// (0x00024f2c) form_field_data_pane_vc_cp2

0x8110,	// (0x00024f34) form_field_data_wide_pane_vc_ParamLimits

0x8110,	// (0x00024f34) form_field_data_wide_pane_vc

0x8126,	// (0x00024f4a) form_field_data_wide_pane_vc_cp2

0x812e,	// (0x00024f52) form_field_popup_pane_vc_ParamLimits

0x812e,	// (0x00024f52) form_field_popup_pane_vc

0x8145,	// (0x00024f69) form_field_popup_wide_pane_vc_ParamLimits

0x8145,	// (0x00024f69) form_field_popup_wide_pane_vc

0x815b,	// (0x00024f7f) form_field_slider_pane_vc_ParamLimits

0x815b,	// (0x00024f7f) form_field_slider_pane_vc

0x816e,	// (0x00024f92) form_field_slider_wide_pane_vc_ParamLimits

0x816e,	// (0x00024f92) form_field_slider_wide_pane_vc

0xb076,	// (0x00027e9a) grid_touch_1_pane_ParamLimits

0xb076,	// (0x00027e9a) grid_touch_1_pane

0xb082,	// (0x00027ea6) grid_touch_2_pane_ParamLimits

0xb082,	// (0x00027ea6) grid_touch_2_pane

0x6570,	// (0x00023394) touch_pane_g1_ParamLimits

0x6570,	// (0x00023394) touch_pane_g1

0x818f,	// (0x00024fb3) cell_app_pane_cp_wide_ParamLimits

0x818f,	// (0x00024fb3) cell_app_pane_cp_wide

0x81a0,	// (0x00024fc4) grid_popup_fast_wide_pane_ParamLimits

0x81a0,	// (0x00024fc4) grid_popup_fast_wide_pane

0x81b4,	// (0x00024fd8) scroll_pane_cp19_ParamLimits

0x81b4,	// (0x00024fd8) scroll_pane_cp19

0x5378,	// (0x0002219c) bg_popup_window_pane_cp20

0x81c8,	// (0x00024fec) listscroll_popup_fast_wide_pane

0x53e4,	// (0x00022208) grid_indicator_nsta_pane

0x81d0,	// (0x00024ff4) clock_nsta_pane_g1

0x81d9,	// (0x00024ffd) clock_nsta_pane_t1

0xb09a,	// (0x00027ebe) cell_indicator_nsta_pane_ParamLimits

0xb09a,	// (0x00027ebe) cell_indicator_nsta_pane

0x8181,	// (0x00024fa5) cell_indicator_nsta_pane_g1

0xb0cb,	// (0x00027eef) cell_indicator_nsta_pane_g2

0x0001,

0xfab8,	// (0x0002c8dc) cell_indicator_nsta_pane_g

0x81f5,	// (0x00025019) clock_nsta_pane_cp

0x81fd,	// (0x00025021) indicator_nsta_pane_cp

0x8205,	// (0x00025029) nsta_clock_indic_pane_g1

0x5420,	// (0x00022244) grid_indicator_pane

0x5dfc,	// (0x00022c20) scroll_pane_cp29

0x9aaa,	// (0x000268ce) indicator_nsta_pane_cp2_ParamLimits

0x9aaa,	// (0x000268ce) indicator_nsta_pane_cp2

0x53e4,	// (0x00022208) main_apps_wheel_pane

0x69c2,	// (0x000237e6) form_midp_field_text_pane_ParamLimits

0x6aef,	// (0x00023913) scroll_bar_cp050_ParamLimits

0x8255,	// (0x00025079) cell_indicator_pane_ParamLimits

0x8255,	// (0x00025079) cell_indicator_pane

0x8269,	// (0x0002508d) cell_indicator_pane_g1

0xb0d8,	// (0x00027efc) grid_wheel_folder_pane_ParamLimits

0xb0d8,	// (0x00027efc) grid_wheel_folder_pane

0xb0ea,	// (0x00027f0e) list_wheel_apps_pane_ParamLimits

0xb0ea,	// (0x00027f0e) list_wheel_apps_pane

0xb0f9,	// (0x00027f1d) main_apps_wheel_pane_g1_ParamLimits

0xb0f9,	// (0x00027f1d) main_apps_wheel_pane_g1

0xb10d,	// (0x00027f31) main_apps_wheel_pane_g2_ParamLimits

0xb10d,	// (0x00027f31) main_apps_wheel_pane_g2

0x0001,

0xfad4,	// (0x0002c8f8) main_apps_wheel_pane_g_ParamLimits

0xfad4,	// (0x0002c8f8) main_apps_wheel_pane_g

0xb121,	// (0x00027f45) main_apps_wheel_pane_t1_ParamLimits

0xb121,	// (0x00027f45) main_apps_wheel_pane_t1

0xb140,	// (0x00027f64) list_wheel_apps_pane_g1

0xb148,	// (0x00027f6c) list_wheel_apps_pane_g2

0xb150,	// (0x00027f74) list_wheel_apps_pane_g3

0xb158,	// (0x00027f7c) list_wheel_apps_pane_g4

0xb160,	// (0x00027f84) list_wheel_apps_pane_g5

0x0004,

0xfad9,	// (0x0002c8fd) list_wheel_apps_pane_g

0x628f,	// (0x000230b3) navi_icon_text_pane

0xa438,	// (0x0002725c) aid_fill_nsta

0x8273,	// (0x00025097) navi_icon_text_pane_g1

0x827f,	// (0x000250a3) navi_icon_text_pane_t1

0x6139,	// (0x00022f5d) list_set_graphic_pane_t1_ParamLimits

0x6139,	// (0x00022f5d) list_set_graphic_pane_t1

0x71d7,	// (0x00023ffb) popup_midp_note_alarm_window_t6_ParamLimits

0x71d7,	// (0x00023ffb) popup_midp_note_alarm_window_t6

0x71e9,	// (0x0002400d) popup_midp_note_alarm_window_t7_ParamLimits

0x71e9,	// (0x0002400d) popup_midp_note_alarm_window_t7

0x71fb,	// (0x0002401f) popup_midp_note_alarm_window_t8_ParamLimits

0x71fb,	// (0x0002401f) popup_midp_note_alarm_window_t8

0x720d,	// (0x00024031) popup_midp_note_alarm_window_t9_ParamLimits

0x720d,	// (0x00024031) popup_midp_note_alarm_window_t9

0x721f,	// (0x00024043) popup_midp_note_alarm_window_t10_ParamLimits

0x721f,	// (0x00024043) popup_midp_note_alarm_window_t10

0x7231,	// (0x00024055) popup_midp_note_alarm_window_t11_ParamLimits

0x7231,	// (0x00024055) popup_midp_note_alarm_window_t11

0x7243,	// (0x00024067) scroll_pane_cp17_ParamLimits

0x7243,	// (0x00024067) scroll_pane_cp17

0xa945,	// (0x00027769) volume_small_pane_cp_g1

0xb17d,	// (0x00027fa1) volume_small_pane_cp_g2

0xb186,	// (0x00027faa) volume_small_pane_cp_g3

0xb18f,	// (0x00027fb3) volume_small_pane_cp_g4

0xb198,	// (0x00027fbc) volume_small_pane_cp_g5

0xb1a1,	// (0x00027fc5) volume_small_pane_cp_g6

0xb1aa,	// (0x00027fce) volume_small_pane_cp_g7

0xb1b3,	// (0x00027fd7) volume_small_pane_cp_g8

0xb1bc,	// (0x00027fe0) volume_small_pane_cp_g9

0xb1c5,	// (0x00027fe9) volume_small_pane_cp_g10

0x6437,	// (0x0002325b) midp_ticker_pane_g1_ParamLimits

0x6443,	// (0x00023267) midp_ticker_pane_g2_ParamLimits

0xf758,	// (0x0002c57c) midp_ticker_pane_g_ParamLimits

0x644f,	// (0x00023273) midp_ticker_pane_t1_ParamLimits

0xa448,	// (0x0002726c) aid_fill_nsta_2

0x6ae7,	// (0x0002390b) list_form2_midp_pane

0x7931,	// (0x00024755) midp_editing_number_pane_ParamLimits

0x7940,	// (0x00024764) midp_ticker_pane_ParamLimits

0x8291,	// (0x000250b5) form2_midp_field_pane

0x8299,	// (0x000250bd) scroll_pane_cp51

0x82b9,	// (0x000250dd) form2_midp_button_pane_ParamLimits

0x82b9,	// (0x000250dd) form2_midp_button_pane

0x82cb,	// (0x000250ef) form2_midp_content_pane_ParamLimits

0x82cb,	// (0x000250ef) form2_midp_content_pane

0x82e5,	// (0x00025109) form2_midp_field_choice_group_pane

0x82ed,	// (0x00025111) form2_midp_field_pane_g1

0x82f5,	// (0x00025119) form2_midp_field_pane_g2

0x82fd,	// (0x00025121) form2_midp_field_pane_g3

0x8305,	// (0x00025129) form2_midp_field_pane_g4

0x0003,

0xfafe,	// (0x0002c922) form2_midp_field_pane_g

0x830d,	// (0x00025131) form2_midp_gauge_slider_pane

0x8315,	// (0x00025139) form2_midp_gauge_wait_pane

0x831d,	// (0x00025141) form2_midp_image_pane_ParamLimits

0x831d,	// (0x00025141) form2_midp_image_pane

0xb1ea,	// (0x0002800e) form2_midp_label_pane_ParamLimits

0xb1ea,	// (0x0002800e) form2_midp_label_pane

0xb203,	// (0x00028027) form2_midp_label_pane_cp_ParamLimits

0xb203,	// (0x00028027) form2_midp_label_pane_cp

0x8338,	// (0x0002515c) form2_midp_string_pane_ParamLimits

0x8338,	// (0x0002515c) form2_midp_string_pane

0xe76e,	// (0x0002b592) form2_midp_text_pane_ParamLimits

0xe76e,	// (0x0002b592) form2_midp_text_pane

0x834a,	// (0x0002516e) form2_midp_time_pane

0x835a,	// (0x0002517e) input_focus_pane_cp51_ParamLimits

0x835a,	// (0x0002517e) input_focus_pane_cp51

0xb222,	// (0x00028046) form2_midp_label_pane_t1_ParamLimits

0xb222,	// (0x00028046) form2_midp_label_pane_t1

0xe787,	// (0x0002b5ab) form2_mdip_text_pane_t1_ParamLimits

0xe787,	// (0x0002b5ab) form2_mdip_text_pane_t1

0xe7a2,	// (0x0002b5c6) form2_midp_time_pane_t1

0x837a,	// (0x0002519e) form2_midp_gauge_slider_pane_t1

0xb25f,	// (0x00028083) form2_midp_gauge_slider_pane_t2

0xb271,	// (0x00028095) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb07,	// (0x0002c92b) form2_midp_gauge_slider_pane_t

0x838c,	// (0x000251b0) form2_midp_slider_pane

0x8398,	// (0x000251bc) form2_midp_gauge_wait_pane_t1

0x83a6,	// (0x000251ca) form2_midp_wait_pane_ParamLimits

0x83a6,	// (0x000251ca) form2_midp_wait_pane

0xb283,	// (0x000280a7) list_single_2graphic_pane_cp4_ParamLimits

0xb283,	// (0x000280a7) list_single_2graphic_pane_cp4

0xa88c,	// (0x000276b0) list_single_midp_graphic_pane_cp_ParamLimits

0xa88c,	// (0x000276b0) list_single_midp_graphic_pane_cp

0x5378,	// (0x0002219c) list_highlight_pane_cp20

0x83d1,	// (0x000251f5) list_single_2graphic_pane_g1_cp4

0x7c7b,	// (0x00024a9f) list_single_2graphic_pane_g2_cp4

0x83d9,	// (0x000251fd) list_single_2graphic_pane_t1_cp4

0x53e4,	// (0x00022208) list_highlight_pane_cp21

0x83e8,	// (0x0002520c) list_single_midp_graphic_pane_g4_cp

0x83f7,	// (0x0002521b) list_single_midp_graphic_pane_t1_cp

0xb296,	// (0x000280ba) form2_mdip_string_pane_t1_ParamLimits

0xb296,	// (0x000280ba) form2_mdip_string_pane_t1

0x5378,	// (0x0002219c) bg_wml_button_pane_cp2

0x536e,	// (0x00022192) form2_midp_image_pane_g1

0xc4af,	// (0x000292d3) list_double_large_graphic_pane_g5_ParamLimits

0xc4af,	// (0x000292d3) list_double_large_graphic_pane_g5

0x9bb8,	// (0x000269dc) midp_form_pane_ParamLimits

0x53e4,	// (0x00022208) main_apps_wheel_pane_ParamLimits

0xa266,	// (0x0002708a) popup_preview_window_ParamLimits

0xa266,	// (0x0002708a) popup_preview_window

0xa3e7,	// (0x0002720b) popup_touch_info_window_ParamLimits

0xa3e7,	// (0x0002720b) popup_touch_info_window

0xa405,	// (0x00027229) popup_touch_menu_window_ParamLimits

0xa405,	// (0x00027229) popup_touch_menu_window

0x5364,	// (0x00022188) bg_popup_sub_pane_cp6

0x840c,	// (0x00025230) list_touch_menu_pane

0x8414,	// (0x00025238) list_single_touch_menu_pane_ParamLimits

0x8414,	// (0x00025238) list_single_touch_menu_pane

0x8428,	// (0x0002524c) list_single_touch_menu_pane_t1

0x53e4,	// (0x00022208) bg_popup_sub_pane_cp7_ParamLimits

0x53e4,	// (0x00022208) bg_popup_sub_pane_cp7

0x8436,	// (0x0002525a) heading_sub_pane

0x843e,	// (0x00025262) list_touch_info_pane_ParamLimits

0x843e,	// (0x00025262) list_touch_info_pane

0x844d,	// (0x00025271) list_single_touch_info_pane_ParamLimits

0x844d,	// (0x00025271) list_single_touch_info_pane

0x845e,	// (0x00025282) list_single_touch_info_pane_t1

0x846c,	// (0x00025290) list_single_touch_info_pane_t2

0x0001,

0xfb15,	// (0x0002c939) list_single_touch_info_pane_t

0x640d,	// (0x00023231) bg_popup_heading_pane_cp

0x847a,	// (0x0002529e) heading_sub_pane_t1

0x6844,	// (0x00023668) bg_popup_preview_window_pane_cp_ParamLimits

0x6844,	// (0x00023668) bg_popup_preview_window_pane_cp

0x8436,	// (0x0002525a) heading_preview_pane

0x843e,	// (0x00025262) list_preview_pane_ParamLimits

0x843e,	// (0x00025262) list_preview_pane

0x8488,	// (0x000252ac) popup_preview_window_g1

0x844d,	// (0x00025271) list_single_preview_pane_ParamLimits

0x844d,	// (0x00025271) list_single_preview_pane

0x8490,	// (0x000252b4) list_single_preview_pane_g1

0x8498,	// (0x000252bc) list_single_preview_pane_t1

0x845e,	// (0x00025282) list_single_preview_pane_t2

0x0001,

0xfb1a,	// (0x0002c93e) list_single_preview_pane_t

0x84a6,	// (0x000252ca) bg_popup_heading_pane_cp2_ParamLimits

0x84a6,	// (0x000252ca) bg_popup_heading_pane_cp2

0x84bc,	// (0x000252e0) heading_preview_pane_g1

0x84c4,	// (0x000252e8) heading_preview_pane_t1_ParamLimits

0x84c4,	// (0x000252e8) heading_preview_pane_t1

0x5437,	// (0x0002225b) soft_indicator_pane_t1_ParamLimits

0x590b,	// (0x0002272f) scroll_pane_ParamLimits

0x5d01,	// (0x00022b25) scroll_sc2_left_pane

0x5cf8,	// (0x00022b1c) scroll_sc2_right_pane

0x5d20,	// (0x00022b44) scroll_bg_pane_g1_ParamLimits

0x5d35,	// (0x00022b59) scroll_bg_pane_g2_ParamLimits

0x5d4d,	// (0x00022b71) scroll_bg_pane_g3_ParamLimits

0xf6e3,	// (0x0002c507) scroll_bg_pane_g_ParamLimits

0x5d20,	// (0x00022b44) scroll_handle_pane_g1_ParamLimits

0x5d6f,	// (0x00022b93) scroll_handle_pane_g2_ParamLimits

0x5d4d,	// (0x00022b71) scroll_handle_pane_g3_ParamLimits

0xf6ea,	// (0x0002c50e) scroll_handle_pane_g_ParamLimits

0x9f91,	// (0x00026db5) popup_choice_list_window_ParamLimits

0x9f91,	// (0x00026db5) popup_choice_list_window

0x6704,	// (0x00023528) choice_list_pane

0x6784,	// (0x000235a8) cell_toolbar_pane_t1

0x67ac,	// (0x000235d0) toolbar_button_pane_ParamLimits

0x76ca,	// (0x000244ee) ai_gene_pane_1_t2_ParamLimits

0x76ca,	// (0x000244ee) ai_gene_pane_1_t2

0x0001,

0xf912,	// (0x0002c736) ai_gene_pane_1_t_ParamLimits

0xf912,	// (0x0002c736) ai_gene_pane_1_t

0x84e1,	// (0x00025305) scroll_sc2_left_pane_g1

0x84e1,	// (0x00025305) scroll_sc2_right_pane_g1

0x5af8,	// (0x0002291c) bg_popup_sub_pane_cp10

0x84eb,	// (0x0002530f) list_choice_list_pane

0x8502,	// (0x00025326) list_single_choice_list_pane_ParamLimits

0x8502,	// (0x00025326) list_single_choice_list_pane

0x8516,	// (0x0002533a) list_single_choice_list_pane_g1

0x5adb,	// (0x000228ff) list_single_choice_list_pane_t1_ParamLimits

0x5adb,	// (0x000228ff) list_single_choice_list_pane_t1

0x851e,	// (0x00025342) choice_list_pane_g1

0x8526,	// (0x0002534a) choice_list_pane_t1

0x5364,	// (0x00022188) input_focus_pane_cp11

0x5c6d,	// (0x00022a91) title_pane_stacon_g2_ParamLimits

0x5c6d,	// (0x00022a91) title_pane_stacon_g2

0x0002,

0xf6c9,	// (0x0002c4ed) title_pane_stacon_g_ParamLimits

0xf6c9,	// (0x0002c4ed) title_pane_stacon_g

0x640d,	// (0x00023231) cursor_press_pane

0xa02d,	// (0x00026e51) popup_fep_hwr_window_ParamLimits

0xa02d,	// (0x00026e51) popup_fep_hwr_window

0xa089,	// (0x00026ead) popup_fep_vkb_window_ParamLimits

0xa089,	// (0x00026ead) popup_fep_vkb_window

0x8534,	// (0x00025358) cursor_press_pane_g1

0x0002,

0xfb43,	// (0x0002c967) fep_vkb_side_pane_g_ParamLimits

0xb335,	// (0x00028159) fep_hwr_candidate_pane_ParamLimits

0xb335,	// (0x00028159) fep_hwr_candidate_pane

0xb35d,	// (0x00028181) fep_hwr_side_pane_ParamLimits

0xb35d,	// (0x00028181) fep_hwr_side_pane

0xb37d,	// (0x000281a1) fep_hwr_top_pane_ParamLimits

0xb37d,	// (0x000281a1) fep_hwr_top_pane

0xb395,	// (0x000281b9) fep_hwr_write_pane_ParamLimits

0xb395,	// (0x000281b9) fep_hwr_write_pane

0xfb43,	// (0x0002c967) fep_vkb_side_pane_g

0x854e,	// (0x00025372) fep_hwr_top_pane_g1

0x853c,	// (0x00025360) fep_hwr_top_pane_g2

0xb3cf,	// (0x000281f3) fep_hwr_top_pane_g3

0x0002,

0xfb1f,	// (0x0002c943) fep_hwr_top_pane_g

0xb3e4,	// (0x00028208) fep_hwr_top_text_pane

0x5ec3,	// (0x00022ce7) fep_hwr_top_text_pane_g1

0x8584,	// (0x000253a8) fep_hwr_top_text_pane_t1

0xb4d2,	// (0x000282f6) fep_hwr_candidate_pane_g1

0xc70f,	// (0x00029533) fep_vkb_keypad_pane_g3_ParamLimits

0xc70f,	// (0x00029533) fep_vkb_keypad_pane_g3

0xc731,	// (0x00029555) fep_vkb_keypad_pane_g4_ParamLimits

0xc731,	// (0x00029555) fep_vkb_keypad_pane_g4

0xc7a0,	// (0x000295c4) fep_vkb_bottom_pane_g2_ParamLimits

0xc7a0,	// (0x000295c4) fep_vkb_bottom_pane_g2

0x0001,

0xfb4a,	// (0x0002c96e) fep_vkb_bottom_pane_g_ParamLimits

0xfb4a,	// (0x0002c96e) fep_vkb_bottom_pane_g

0x84e1,	// (0x00025305) cell_vkb_side_pane_g2

0x0001,

0xfb54,	// (0x0002c978) cell_vkb_side_pane_g

0xc7e4,	// (0x00029608) cell_vkb_side_pane_t1

0xc7f2,	// (0x00029616) cell_vkb_side_pane_t1_copy1

0x84e1,	// (0x00025305) bg_fep_vkb_candidate_pane_g2

0xc8c0,	// (0x000296e4) cell_vkb_candidate_pane_ParamLimits

0xc554,	// (0x00029378) aid_size_cell_vkb_ParamLimits

0xc554,	// (0x00029378) aid_size_cell_vkb

0xc8c0,	// (0x000296e4) cell_vkb_candidate_pane

0xb4f9,	// (0x0002831d) bg_popup_fep_shadow_pane_g1

0xc5be,	// (0x000293e2) fep_vkb_bottom_pane_ParamLimits

0xc5be,	// (0x000293e2) fep_vkb_bottom_pane

0xc5fb,	// (0x0002941f) fep_vkb_candidate_pane_ParamLimits

0xc5fb,	// (0x0002941f) fep_vkb_candidate_pane

0xc617,	// (0x0002943b) fep_vkb_keypad_pane_ParamLimits

0xc617,	// (0x0002943b) fep_vkb_keypad_pane

0xc64b,	// (0x0002946f) fep_vkb_side_pane_ParamLimits

0xc64b,	// (0x0002946f) fep_vkb_side_pane

0xc677,	// (0x0002949b) fep_vkb_top_pane_ParamLimits

0xc677,	// (0x0002949b) fep_vkb_top_pane

0xc6a3,	// (0x000294c7) fep_vkb_top_pane_g1_ParamLimits

0xc6a3,	// (0x000294c7) fep_vkb_top_pane_g1

0xc6b2,	// (0x000294d6) fep_vkb_top_pane_g2_ParamLimits

0xc6b2,	// (0x000294d6) fep_vkb_top_pane_g2

0xc6c1,	// (0x000294e5) fep_vkb_top_pane_g3_ParamLimits

0xc6c1,	// (0x000294e5) fep_vkb_top_pane_g3

0x0003,

0xfb3a,	// (0x0002c95e) fep_vkb_top_pane_g_ParamLimits

0xfb3a,	// (0x0002c95e) fep_vkb_top_pane_g

0xc6df,	// (0x00029503) fep_vkb_top_text_pane_ParamLimits

0xc6df,	// (0x00029503) fep_vkb_top_text_pane

0xeb6b,	// (0x0002b98f) fep_vkb_side_pane_g1_ParamLimits

0xeb6b,	// (0x0002b98f) fep_vkb_side_pane_g1

0xc6fe,	// (0x00029522) grid_vkb_side_pane_ParamLimits

0xc6fe,	// (0x00029522) grid_vkb_side_pane

0xb501,	// (0x00028325) bg_popup_fep_shadow_pane_g2

0xb50a,	// (0x0002832e) bg_popup_fep_shadow_pane_g3

0xb512,	// (0x00028336) bg_popup_fep_shadow_pane_g4

0xb51b,	// (0x0002833f) bg_popup_fep_shadow_pane_g5

0xb523,	// (0x00028347) bg_popup_fep_shadow_pane_g6

0xb52b,	// (0x0002834f) bg_popup_fep_shadow_pane_g7

0x59ff,	// (0x00022823) bg_popup_fep_shadow_pane_g8

0xc74f,	// (0x00029573) grid_vkb_keypad_number_pane_ParamLimits

0xc74f,	// (0x00029573) grid_vkb_keypad_number_pane

0xc75f,	// (0x00029583) grid_vkb_keypad_pane_ParamLimits

0xc75f,	// (0x00029583) grid_vkb_keypad_pane

0xc785,	// (0x000295a9) fep_vkb_bottom_pane_g1_ParamLimits

0xc785,	// (0x000295a9) fep_vkb_bottom_pane_g1

0xc7ae,	// (0x000295d2) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc7ae,	// (0x000295d2) grid_vkb_keypad_bottom_left_pane

0xc7c3,	// (0x000295e7) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc7c3,	// (0x000295e7) grid_vkb_keypad_bottom_right_pane

0xc7d8,	// (0x000295fc) fep_vkb_top_text_pane_g1

0xebb5,	// (0x0002b9d9) fep_vkb_top_text_pane_t1

0xebca,	// (0x0002b9ee) cell_vkb_side_pane_ParamLimits

0xebca,	// (0x0002b9ee) cell_vkb_side_pane

0x84e1,	// (0x00025305) cell_vkb_side_pane_g1

0xc800,	// (0x00029624) cell_vkb_keypad_pane_ParamLimits

0xc800,	// (0x00029624) cell_vkb_keypad_pane

0xc86d,	// (0x00029691) cell_vkb_keypad_pane_g1

0x0008,

0xfb67,	// (0x0002c98b) bg_popup_fep_shadow_pane_g

0xb53b,	// (0x0002835f) cell_hwr_side_pane_g1

0xb53b,	// (0x0002835f) cell_hwr_side_pane_g2

0xc877,	// (0x0002969b) cell_vkb_keypad_pane_t1

0xebed,	// (0x0002ba11) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xebed,	// (0x0002ba11) cell_vkb_keypad_bottom_left_pane

0xec0a,	// (0x0002ba2e) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xec0a,	// (0x0002ba2e) cell_vkb_keypad_bottom_right_pane

0x84e1,	// (0x00025305) cell_vkb_keypad_bottom_left_pane_g1

0x84e1,	// (0x00025305) cell_vkb_keypad_bottom_right_pane_g1

0xc885,	// (0x000296a9) cell_vkb_keypad_number_pane_ParamLimits

0xc885,	// (0x000296a9) cell_vkb_keypad_number_pane

0xc8a4,	// (0x000296c8) cell_vkb_keypad_number_pane_g1

0xc8ae,	// (0x000296d2) cell_vkb_keypad_number_pane_g2

0xc8b7,	// (0x000296db) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb59,	// (0x0002c97d) cell_vkb_keypad_number_pane_g

0xc877,	// (0x0002969b) cell_vkb_keypad_number_pane_t1

0xc8d9,	// (0x000296fd) fep_vkb_candidate_pane_g1

0x0001,

0xfb7a,	// (0x0002c99e) cell_hwr_side_pane_g

0xc8f2,	// (0x00029716) cell_hwr_side_pane_t1

0xb545,	// (0x00028369) cell_hwr_side_pane_t1_copy1

0xb553,	// (0x00028377) cell_hwr_candidate_pane_g1

0xb582,	// (0x000283a6) cell_hwr_candidate_pane_t1

0x84e1,	// (0x00025305) cell_vkb_candidate_pane_g2

0xc957,	// (0x0002977b) cell_vkb_candidate_pane_t1

0xb300,	// (0x00028124) bg_popup_fep_shadow_pane_ParamLimits

0xb300,	// (0x00028124) bg_popup_fep_shadow_pane

0xb3af,	// (0x000281d3) bg_fep_hwr_top_pane_g4

0x8560,	// (0x00025384) bg_hwr_side_pane_g1_ParamLimits

0x8560,	// (0x00025384) bg_hwr_side_pane_g1

0xb420,	// (0x00028244) cell_hwr_side_pane_ParamLimits

0xb420,	// (0x00028244) cell_hwr_side_pane

0xb45b,	// (0x0002827f) fep_hwr_write_pane_g1_ParamLimits

0xb45b,	// (0x0002827f) fep_hwr_write_pane_g1

0xb468,	// (0x0002828c) fep_hwr_write_pane_g2_ParamLimits

0xb468,	// (0x0002828c) fep_hwr_write_pane_g2

0xb475,	// (0x00028299) fep_hwr_write_pane_g3_ParamLimits

0xb475,	// (0x00028299) fep_hwr_write_pane_g3

0xb483,	// (0x000282a7) fep_hwr_write_pane_g4_ParamLimits

0xb483,	// (0x000282a7) fep_hwr_write_pane_g4

0x0005,

0xfb26,	// (0x0002c94a) fep_hwr_write_pane_g_ParamLimits

0xfb26,	// (0x0002c94a) fep_hwr_write_pane_g

0xb3af,	// (0x000281d3) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xb3af,	// (0x000281d3) bg_fep_hwr_candidate_pane_g2

0xb498,	// (0x000282bc) cell_hwr_candidate_pane_ParamLimits

0xb498,	// (0x000282bc) cell_hwr_candidate_pane

0xb4d2,	// (0x000282f6) fep_hwr_candidate_pane_g1_ParamLimits

0xc582,	// (0x000293a6) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc582,	// (0x000293a6) bg_popup_fep_shadow_pane_cp2

0xc6d1,	// (0x000294f5) fep_vkb_top_pane_g4_ParamLimits

0xc6d1,	// (0x000294f5) fep_vkb_top_pane_g4

0xc6f0,	// (0x00029514) fep_vkb_side_pane_g2_ParamLimits

0xc6f0,	// (0x00029514) fep_vkb_side_pane_g2

0xdfc1,	// (0x0002ade5) list_setting_pane_t4_ParamLimits

0xdfc1,	// (0x0002ade5) list_setting_pane_t4

0xe057,	// (0x0002ae7b) list_setting_number_pane_t5_ParamLimits

0xe057,	// (0x0002ae7b) list_setting_number_pane_t5

0x9959,	// (0x0002677d) list_double_heading_pane_cp2_ParamLimits

0x9959,	// (0x0002677d) list_double_heading_pane_cp2

0x599d,	// (0x000227c1) list_double_heading_pane_g1_cp2_ParamLimits

0x599d,	// (0x000227c1) list_double_heading_pane_g1_cp2

0x59a9,	// (0x000227cd) list_double_heading_pane_g2_cp2_ParamLimits

0x59a9,	// (0x000227cd) list_double_heading_pane_g2_cp2

0xc965,	// (0x00029789) list_double_heading_pane_t1_cp2_ParamLimits

0xc965,	// (0x00029789) list_double_heading_pane_t1_cp2

0xc97b,	// (0x0002979f) list_double_heading_pane_t2_cp2_ParamLimits

0xc97b,	// (0x0002979f) list_double_heading_pane_t2_cp2

0x535c,	// (0x00022180) aid_value_unit2

0x9281,	// (0x000260a5) popup_preview_fixed_window

0x5517,	// (0x0002233b) bg_popup_preview_window_pane_cp02

0xc98d,	// (0x000297b1) list_preview_fixed_pane

0xc9d3,	// (0x000297f7) list_empty_pane_fp_ParamLimits

0xc9d3,	// (0x000297f7) list_empty_pane_fp

0xc9d3,	// (0x000297f7) list_single_cale_day_pane_fp_ParamLimits

0xc9d3,	// (0x000297f7) list_single_cale_day_pane_fp

0xc9d3,	// (0x000297f7) list_single_graphic_heading_pane_fp_ParamLimits

0xc9d3,	// (0x000297f7) list_single_graphic_heading_pane_fp

0xc9d3,	// (0x000297f7) list_single_graphic_pane_fp_ParamLimits

0xc9d3,	// (0x000297f7) list_single_graphic_pane_fp

0xc9d3,	// (0x000297f7) list_single_heading_pane_fp_ParamLimits

0xc9d3,	// (0x000297f7) list_single_heading_pane_fp

0xc9d3,	// (0x000297f7) list_single_pane_fp_ParamLimits

0xc9d3,	// (0x000297f7) list_single_pane_fp

0xc9e6,	// (0x0002980a) list_single_pane_fp_g1_ParamLimits

0xc9e6,	// (0x0002980a) list_single_pane_fp_g1

0xe7b5,	// (0x0002b5d9) list_single_pane_fp_g2_ParamLimits

0xe7b5,	// (0x0002b5d9) list_single_pane_fp_g2

0xe7c1,	// (0x0002b5e5) list_single_pane_fp_g3_ParamLimits

0xe7c1,	// (0x0002b5e5) list_single_pane_fp_g3

0xc9f2,	// (0x00029816) list_single_pane_fp_g4_ParamLimits

0xc9f2,	// (0x00029816) list_single_pane_fp_g4

0x0003,

0xfb8d,	// (0x0002c9b1) list_single_pane_fp_g_ParamLimits

0xfb8d,	// (0x0002c9b1) list_single_pane_fp_g

0xe7d5,	// (0x0002b5f9) list_single_pane_fp_t1_ParamLimits

0xe7d5,	// (0x0002b5f9) list_single_pane_fp_t1

0xe7ec,	// (0x0002b610) list_single_graphic_pane_fp_g1_ParamLimits

0xe7ec,	// (0x0002b610) list_single_graphic_pane_fp_g1

0xc9e6,	// (0x0002980a) list_single_graphic_pane_fp_g2_ParamLimits

0xc9e6,	// (0x0002980a) list_single_graphic_pane_fp_g2

0xe7b5,	// (0x0002b5d9) list_single_graphic_pane_fp_g3_ParamLimits

0xe7b5,	// (0x0002b5d9) list_single_graphic_pane_fp_g3

0xe7c1,	// (0x0002b5e5) list_single_graphic_pane_fp_g4_ParamLimits

0xe7c1,	// (0x0002b5e5) list_single_graphic_pane_fp_g4

0xc9f2,	// (0x00029816) list_single_graphic_pane_fp_g5_ParamLimits

0xc9f2,	// (0x00029816) list_single_graphic_pane_fp_g5

0x0004,

0xfb96,	// (0x0002c9ba) list_single_graphic_pane_fp_g_ParamLimits

0xfb96,	// (0x0002c9ba) list_single_graphic_pane_fp_g

0xe7f8,	// (0x0002b61c) list_single_graphic_pane_fp_t1_ParamLimits

0xe7f8,	// (0x0002b61c) list_single_graphic_pane_fp_t1

0xe7ec,	// (0x0002b610) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xe7ec,	// (0x0002b610) list_single_graphic_heading_pane_fp_g1

0xc9e6,	// (0x0002980a) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc9e6,	// (0x0002980a) list_single_graphic_heading_pane_fp_g2

0xe7b5,	// (0x0002b5d9) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xe7b5,	// (0x0002b5d9) list_single_graphic_heading_pane_fp_g3

0xe7c1,	// (0x0002b5e5) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xe7c1,	// (0x0002b5e5) list_single_graphic_heading_pane_fp_g4

0xc9f2,	// (0x00029816) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc9f2,	// (0x00029816) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb96,	// (0x0002c9ba) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb96,	// (0x0002c9ba) list_single_graphic_heading_pane_fp_g

0xe80e,	// (0x0002b632) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xe80e,	// (0x0002b632) list_single_graphic_heading_pane_fp_t1

0xe824,	// (0x0002b648) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xe824,	// (0x0002b648) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfba1,	// (0x0002c9c5) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfba1,	// (0x0002c9c5) list_single_graphic_heading_pane_fp_t

0xe836,	// (0x0002b65a) list_single_cale_day_pane_fp_g1_ParamLimits

0xe836,	// (0x0002b65a) list_single_cale_day_pane_fp_g1

0xc9fe,	// (0x00029822) list_single_cale_day_pane_fp_g2_ParamLimits

0xc9fe,	// (0x00029822) list_single_cale_day_pane_fp_g2

0xe86e,	// (0x0002b692) list_single_cale_day_pane_fp_g3_ParamLimits

0xe86e,	// (0x0002b692) list_single_cale_day_pane_fp_g3

0xe896,	// (0x0002b6ba) list_single_cale_day_pane_fp_g4_ParamLimits

0xe896,	// (0x0002b6ba) list_single_cale_day_pane_fp_g4

0xe8ba,	// (0x0002b6de) list_single_cale_day_pane_fp_g5_ParamLimits

0xe8ba,	// (0x0002b6de) list_single_cale_day_pane_fp_g5

0x0004,

0xfba6,	// (0x0002c9ca) list_single_cale_day_pane_fp_g_ParamLimits

0xfba6,	// (0x0002c9ca) list_single_cale_day_pane_fp_g

0xe8de,	// (0x0002b702) list_single_cale_day_pane_fp_t1_ParamLimits

0xe8de,	// (0x0002b702) list_single_cale_day_pane_fp_t1

0xe904,	// (0x0002b728) list_single_cale_day_pane_fp_t2_ParamLimits

0xe904,	// (0x0002b728) list_single_cale_day_pane_fp_t2

0xe91d,	// (0x0002b741) list_single_cale_day_pane_fp_t3_ParamLimits

0xe91d,	// (0x0002b741) list_single_cale_day_pane_fp_t3

0x0002,

0xfbb1,	// (0x0002c9d5) list_single_cale_day_pane_fp_t_ParamLimits

0xfbb1,	// (0x0002c9d5) list_single_cale_day_pane_fp_t

0xc9e6,	// (0x0002980a) list_empty_pane_fp_g1_ParamLimits

0xc9e6,	// (0x0002980a) list_empty_pane_fp_g1

0xe936,	// (0x0002b75a) list_empty_pane_fp_t1

0xe944,	// (0x0002b768) list_empty_pane_fp_t2

0x0001,

0xfbb8,	// (0x0002c9dc) list_empty_pane_fp_t

0xc9e6,	// (0x0002980a) list_single_heading_pane_fp_g1_ParamLimits

0xc9e6,	// (0x0002980a) list_single_heading_pane_fp_g1

0xe7b5,	// (0x0002b5d9) list_single_heading_pane_fp_g2_ParamLimits

0xe7b5,	// (0x0002b5d9) list_single_heading_pane_fp_g2

0xe7c1,	// (0x0002b5e5) list_single_heading_pane_fp_g3_ParamLimits

0xe7c1,	// (0x0002b5e5) list_single_heading_pane_fp_g3

0x0002,

0xfbbd,	// (0x0002c9e1) list_single_heading_pane_fp_g_ParamLimits

0xfbbd,	// (0x0002c9e1) list_single_heading_pane_fp_g

0xe952,	// (0x0002b776) list_single_heading_pane_fp_t1_ParamLimits

0xe952,	// (0x0002b776) list_single_heading_pane_fp_t1

0xe964,	// (0x0002b788) list_single_heading_pane_fp_t2_ParamLimits

0xe964,	// (0x0002b788) list_single_heading_pane_fp_t2

0x0001,

0xfbc4,	// (0x0002c9e8) list_single_heading_pane_fp_t_ParamLimits

0xfbc4,	// (0x0002c9e8) list_single_heading_pane_fp_t

0x5b04,	// (0x00022928) aid_size_cell_fast

0x54fa,	// (0x0002231e) soft_indicator_pane_cp1_t1

0x5b41,	// (0x00022965) cell_app_pane_cp2_ParamLimits

0x5b41,	// (0x00022965) cell_app_pane_cp2

0xb322,	// (0x00028146) fep_hwr_candidate_drop_down_list_pane

0xb4ec,	// (0x00028310) fep_hwr_candidate_pane_g3_ParamLimits

0xb4ec,	// (0x00028310) fep_hwr_candidate_pane_g3

0x4e39,	// (0x00021c5d) fep_hwr_candidate_pane_g4_ParamLimits

0x4e39,	// (0x00021c5d) fep_hwr_candidate_pane_g4

0x0002,

0xfb33,	// (0x0002c957) fep_hwr_candidate_pane_g_ParamLimits

0xfb33,	// (0x0002c957) fep_hwr_candidate_pane_g

0xc5ea,	// (0x0002940e) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc5ea,	// (0x0002940e) fep_vkb_candidate_drop_down_list_pane

0xc8e1,	// (0x00029705) fep_vkb_candidate_pane_g3

0xc8e9,	// (0x0002970d) fep_vkb_candidate_pane_g4

0x0002,

0xfb60,	// (0x0002c984) fep_vkb_candidate_pane_g

0xb553,	// (0x00028377) cell_hwr_candidate_pane_g1_ParamLimits

0xb561,	// (0x00028385) cell_hwr_candidate_pane_g3_ParamLimits

0xb561,	// (0x00028385) cell_hwr_candidate_pane_g3

0xc900,	// (0x00029724) cell_hwr_candidate_pane_g4_ParamLimits

0xc900,	// (0x00029724) cell_hwr_candidate_pane_g4

0x0002,

0xfb7f,	// (0x0002c9a3) cell_hwr_candidate_pane_g_ParamLimits

0xfb7f,	// (0x0002c9a3) cell_hwr_candidate_pane_g

0xc921,	// (0x00029745) cell_vkb_candidate_pane_g3_ParamLimits

0xc921,	// (0x00029745) cell_vkb_candidate_pane_g3

0xc93c,	// (0x00029760) cell_vkb_candidate_pane_g4_ParamLimits

0xc93c,	// (0x00029760) cell_vkb_candidate_pane_g4

0xca0a,	// (0x0002982e) cell_app_pane_cp2_g1_ParamLimits

0xca0a,	// (0x0002982e) cell_app_pane_cp2_g1

0xca28,	// (0x0002984c) cell_app_pane_cp2_g2_ParamLimits

0xca28,	// (0x0002984c) cell_app_pane_cp2_g2

0x0001,

0xfbc9,	// (0x0002c9ed) cell_app_pane_cp2_g_ParamLimits

0xfbc9,	// (0x0002c9ed) cell_app_pane_cp2_g

0xca34,	// (0x00029858) cell_app_pane_cp2_t1_ParamLimits

0xca34,	// (0x00029858) cell_app_pane_cp2_t1

0x598f,	// (0x000227b3) grid_highlight_pane_cp1_ParamLimits

0x598f,	// (0x000227b3) grid_highlight_pane_cp1

0xb59f,	// (0x000283c3) cell_hwr_candidate_pane_cp1_ParamLimits

0xb59f,	// (0x000283c3) cell_hwr_candidate_pane_cp1

0xb553,	// (0x00028377) fep_hwr_candidate_drop_down_list_pane_g1

0xb5bd,	// (0x000283e1) fep_hwr_candidate_drop_down_list_pane_g2

0xb5ca,	// (0x000283ee) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbce,	// (0x0002c9f2) fep_hwr_candidate_drop_down_list_pane_g

0xb5d7,	// (0x000283fb) fep_hwr_candidate_drop_down_list_scroll_pane

0xb5e0,	// (0x00028404) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xb5e0,	// (0x00028404) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0xb5ed,	// (0x00028411) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xb5ed,	// (0x00028411) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0xb5fa,	// (0x0002841e) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xb5fa,	// (0x0002841e) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xb607,	// (0x0002842b) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xb607,	// (0x0002842b) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xb622,	// (0x00028446) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xb622,	// (0x00028446) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0xb63d,	// (0x00028461) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xb63d,	// (0x00028461) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0xb658,	// (0x0002847c) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xb658,	// (0x0002847c) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0xb673,	// (0x00028497) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xb673,	// (0x00028497) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd5,	// (0x0002c9f9) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd5,	// (0x0002c9f9) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xec43,	// (0x0002ba67) cell_vkb_candidate_pane_cp1_ParamLimits

0xec43,	// (0x0002ba67) cell_vkb_candidate_pane_cp1

0xc6d1,	// (0x000294f5) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc6d1,	// (0x000294f5) fep_vkb_candidate_drop_down_list_pane_g1

0xca46,	// (0x0002986a) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xca46,	// (0x0002986a) fep_vkb_candidate_drop_down_list_pane_g2

0xca53,	// (0x00029877) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xca53,	// (0x00029877) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbe6,	// (0x0002ca0a) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbe6,	// (0x0002ca0a) fep_vkb_candidate_drop_down_list_pane_g

0xca60,	// (0x00029884) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xca60,	// (0x00029884) fep_vkb_candidate_drop_down_list_scroll_pane

0xca6d,	// (0x00029891) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xca6d,	// (0x00029891) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xca7a,	// (0x0002989e) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xca7a,	// (0x0002989e) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xca86,	// (0x000298aa) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xca86,	// (0x000298aa) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xca92,	// (0x000298b6) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xca92,	// (0x000298b6) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xcab3,	// (0x000298d7) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xcab3,	// (0x000298d7) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xcad4,	// (0x000298f8) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xcad4,	// (0x000298f8) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xcaf5,	// (0x00029919) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xcaf5,	// (0x00029919) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xcb16,	// (0x0002993a) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xcb16,	// (0x0002993a) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbed,	// (0x0002ca11) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbed,	// (0x0002ca11) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x936b,	// (0x0002618f) title_pane_g1_ParamLimits

0x9378,	// (0x0002619c) title_pane_g2_ParamLimits

0xf54e,	// (0x0002c372) title_pane_g_ParamLimits

0x5ebb,	// (0x00022cdf) aid_call2_pane

0x5eb3,	// (0x00022cd7) aid_call_pane

0x5ec3,	// (0x00022ce7) popup_clock_analogue_window_g1

0x5ec3,	// (0x00022ce7) popup_clock_analogue_window_g2

0x993a,	// (0x0002675e) popup_clock_analogue_window_g3

0x9943,	// (0x00026767) popup_clock_analogue_window_g4

0x536e,	// (0x00022192) popup_clock_analogue_window_g5

0x0004,

0xf6f8,	// (0x0002c51c) popup_clock_analogue_window_g

0x994b,	// (0x0002676f) popup_clock_analogue_window_t1

0x997e,	// (0x000267a2) clock_digital_number_pane_ParamLimits

0x997e,	// (0x000267a2) clock_digital_number_pane

0x998a,	// (0x000267ae) clock_digital_number_pane_cp02_ParamLimits

0x998a,	// (0x000267ae) clock_digital_number_pane_cp02

0x9996,	// (0x000267ba) clock_digital_number_pane_cp03_ParamLimits

0x9996,	// (0x000267ba) clock_digital_number_pane_cp03

0x99a2,	// (0x000267c6) clock_digital_number_pane_cp04_ParamLimits

0x99a2,	// (0x000267c6) clock_digital_number_pane_cp04

0x99ae,	// (0x000267d2) clock_digital_separator_pane_ParamLimits

0x99ae,	// (0x000267d2) clock_digital_separator_pane

0x99ba,	// (0x000267de) popup_clock_digital_window_t1_ParamLimits

0x99ba,	// (0x000267de) popup_clock_digital_window_t1

0x536e,	// (0x00022192) clock_digital_number_pane_g1

0x536e,	// (0x00022192) clock_digital_number_pane_g2

0x0001,

0xf703,	// (0x0002c527) clock_digital_number_pane_g

0x536e,	// (0x00022192) clock_digital_separator_pane_g1

0x536e,	// (0x00022192) clock_digital_separator_pane_g2

0x0001,

0xf703,	// (0x0002c527) clock_digital_separator_pane_g

0xa438,	// (0x0002725c) aid_fill_nsta_ParamLimits

0xa4f5,	// (0x00027319) indicator_nsta_pane_ParamLimits

0x66ad,	// (0x000234d1) popup_clock_analogue_window

0x66ad,	// (0x000234d1) popup_clock_digital_window

0x53e4,	// (0x00022208) grid_indicator_nsta_pane_ParamLimits

0x81e7,	// (0x0002500b) clock_nsta_pane_t2

0x0001,

0xfab3,	// (0x0002c8d7) clock_nsta_pane_t

0x98fe,	// (0x00026722) aid_size_max_handle

0x9908,	// (0x0002672c) aid_size_min_handle

0x640d,	// (0x00023231) editor_scroll_pane

0xcb31,	// (0x00029955) ex_editor_pane

0x5ab8,	// (0x000228dc) scroll_pane_cp13

0x5937,	// (0x0002275b) scroll_pane_cp14

0x5ef2,	// (0x00022d16) scroll_pane_cp36

0x996a,	// (0x0002678e) list_single_graphic_hl_pane_cp2_ParamLimits

0x996a,	// (0x0002678e) list_single_graphic_hl_pane_cp2

0xae05,	// (0x00027c29) list_single_graphic_hl_pane_ParamLimits

0xae05,	// (0x00027c29) list_single_graphic_hl_pane

0xe97a,	// (0x0002b79e) aid_size_min_hl_cp1

0xcb39,	// (0x0002995d) list_highlight_pane_cp34_ParamLimits

0xcb39,	// (0x0002995d) list_highlight_pane_cp34

0xcb4a,	// (0x0002996e) list_single_graphic_hl_pane_g1_ParamLimits

0xcb4a,	// (0x0002996e) list_single_graphic_hl_pane_g1

0xe983,	// (0x0002b7a7) list_single_graphic_hl_pane_g2_ParamLimits

0xe983,	// (0x0002b7a7) list_single_graphic_hl_pane_g2

0xe983,	// (0x0002b7a7) list_single_graphic_hl_pane_g3_ParamLimits

0xe983,	// (0x0002b7a7) list_single_graphic_hl_pane_g3

0xe98f,	// (0x0002b7b3) list_single_graphic_hl_pane_g4_ParamLimits

0xe98f,	// (0x0002b7b3) list_single_graphic_hl_pane_g4

0xe99b,	// (0x0002b7bf) list_single_graphic_hl_pane_g5_ParamLimits

0xe99b,	// (0x0002b7bf) list_single_graphic_hl_pane_g5

0x0004,

0xfbfe,	// (0x0002ca22) list_single_graphic_hl_pane_g_ParamLimits

0xfbfe,	// (0x0002ca22) list_single_graphic_hl_pane_g

0xe9af,	// (0x0002b7d3) list_single_graphic_hl_pane_t1_ParamLimits

0xe9af,	// (0x0002b7d3) list_single_graphic_hl_pane_t1

0xcb57,	// (0x0002997b) aid_size_min_hl_cp2

0xcb60,	// (0x00029984) list_highlight_pane_cp34_cp2_ParamLimits

0xcb60,	// (0x00029984) list_highlight_pane_cp34_cp2

0xcb4a,	// (0x0002996e) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xcb4a,	// (0x0002996e) list_single_graphic_hl_pane_g1_cp2

0xcb6d,	// (0x00029991) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xcb6d,	// (0x00029991) list_single_graphic_hl_pane_g2_cp2

0xcb79,	// (0x0002999d) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xcb79,	// (0x0002999d) list_single_graphic_hl_pane_g3_cp2

0x6346,	// (0x0002316a) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x6346,	// (0x0002316a) list_single_graphic_hl_pane_g4_cp2

0xcb85,	// (0x000299a9) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xcb85,	// (0x000299a9) list_single_graphic_hl_pane_g5_cp2

0x9e03,	// (0x00026c27) control_pane_g4_ParamLimits

0x9e03,	// (0x00026c27) control_pane_g4

0x5af8,	// (0x0002291c) bg_popup_sub_pane_cp10_ParamLimits

0x84eb,	// (0x0002530f) list_choice_list_pane_ParamLimits

0x84fa,	// (0x0002531e) scroll_pane_cp23

0x5517,	// (0x0002233b) bg_popup_preview_window_pane_cp02_ParamLimits

0xc98d,	// (0x000297b1) list_preview_fixed_pane_ParamLimits

0xc9a3,	// (0x000297c7) list_preview_fixed_pane_cp_ParamLimits

0xc9a3,	// (0x000297c7) list_preview_fixed_pane_cp

0xc9af,	// (0x000297d3) popup_preview_fixed_window_g1_ParamLimits

0xc9af,	// (0x000297d3) popup_preview_fixed_window_g1

0xc9bb,	// (0x000297df) popup_preview_fixed_window_g2_ParamLimits

0xc9bb,	// (0x000297df) popup_preview_fixed_window_g2

0x0002,

0xfb86,	// (0x0002c9aa) popup_preview_fixed_window_g_ParamLimits

0xfb86,	// (0x0002c9aa) popup_preview_fixed_window_g

0x97ec,	// (0x00026610) aid_navi_side_left_pane_ParamLimits

0x97fd,	// (0x00026621) aid_navi_side_right_pane_ParamLimits

0x9811,	// (0x00026635) navi_icon_pane_stacon_ParamLimits

0x9825,	// (0x00026649) navi_navi_pane_stacon_ParamLimits

0x9811,	// (0x00026635) navi_text_pane_stacon_ParamLimits

0x9160,	// (0x00025f84) main_text_info_pane

0xcbaf,	// (0x000299d3) listscroll_text_info_pane

0xcbb7,	// (0x000299db) list_text_info_pane_ParamLimits

0xcbb7,	// (0x000299db) list_text_info_pane

0xcbc6,	// (0x000299ea) scroll_pane_cp24_ParamLimits

0xcbc6,	// (0x000299ea) scroll_pane_cp24

0xec66,	// (0x0002ba8a) list_text_info_pane_t1_ParamLimits

0xec66,	// (0x0002ba8a) list_text_info_pane_t1

0x9fab,	// (0x00026dcf) popup_fast_swap2_window_ParamLimits

0x9fab,	// (0x00026dcf) popup_fast_swap2_window

0xcbe4,	// (0x00029a08) aid_size_cell_fast2

0x5364,	// (0x00022188) bg_popup_window_pane_cp17

0x6b0f,	// (0x00023933) heading_pane_cp2

0x570a,	// (0x0002252e) listscroll_fast2_pane

0xcbee,	// (0x00029a12) grid_fast2_pane

0xcbf6,	// (0x00029a1a) listscroll_fast2_pane_g1

0xcbfe,	// (0x00029a22) listscroll_fast2_pane_g2

0x0001,

0xfc09,	// (0x0002ca2d) listscroll_fast2_pane_g

0x5ab8,	// (0x000228dc) scroll_pane_cp26

0xcc06,	// (0x00029a2a) cell_fast2_pane_ParamLimits

0xcc06,	// (0x00029a2a) cell_fast2_pane

0xcc1b,	// (0x00029a3f) cell_fast2_pane_g1

0xcc24,	// (0x00029a48) cell_fast2_pane_g2

0xcc2d,	// (0x00029a51) cell_fast2_pane_g3

0x0002,

0xfc0e,	// (0x0002ca32) cell_fast2_pane_g

0x579a,	// (0x000225be) grid_highlight_pane_cp9

0x9f77,	// (0x00026d9b) main_eswt_pane_ParamLimits

0x9f77,	// (0x00026d9b) main_eswt_pane

0xcbdb,	// (0x000299ff) list_single_text_info_pane

0xcc35,	// (0x00029a59) eswt_ctrl_button_pane

0xcc35,	// (0x00029a59) eswt_ctrl_canvas_pane

0xcc3d,	// (0x00029a61) eswt_ctrl_combo_pane

0xcc35,	// (0x00029a59) eswt_ctrl_default_pane

0xcc35,	// (0x00029a59) eswt_ctrl_label_pane

0xcc45,	// (0x00029a69) eswt_ctrl_wait_pane

0xcc4d,	// (0x00029a71) eswt_shell_pane

0x5364,	// (0x00022188) listscroll_eswt_app_pane

0xcc69,	// (0x00029a8d) popup_eswt_tasktip_window_ParamLimits

0xcc69,	// (0x00029a8d) popup_eswt_tasktip_window

0x6844,	// (0x00023668) bg_popup_window_pane_cp18

0xcc7a,	// (0x00029a9e) eswt_control_pane_g1_ParamLimits

0xcc7a,	// (0x00029a9e) eswt_control_pane_g1

0xcc87,	// (0x00029aab) eswt_control_pane_g2_ParamLimits

0xcc87,	// (0x00029aab) eswt_control_pane_g2

0xcc94,	// (0x00029ab8) eswt_control_pane_g3_ParamLimits

0xcc94,	// (0x00029ab8) eswt_control_pane_g3

0xcca1,	// (0x00029ac5) eswt_control_pane_g4_ParamLimits

0xcca1,	// (0x00029ac5) eswt_control_pane_g4

0x0003,

0xfc15,	// (0x0002ca39) eswt_control_pane_g_ParamLimits

0xfc15,	// (0x0002ca39) eswt_control_pane_g

0x598f,	// (0x000227b3) bg_button_pane_ParamLimits

0x598f,	// (0x000227b3) bg_button_pane

0x57af,	// (0x000225d3) common_borders_pane_copy2_ParamLimits

0x57af,	// (0x000225d3) common_borders_pane_copy2

0xccae,	// (0x00029ad2) control_button_pane_g1_ParamLimits

0xccae,	// (0x00029ad2) control_button_pane_g1

0xccba,	// (0x00029ade) control_button_pane_g2_ParamLimits

0xccba,	// (0x00029ade) control_button_pane_g2

0xccc6,	// (0x00029aea) control_button_pane_g3_ParamLimits

0xccc6,	// (0x00029aea) control_button_pane_g3

0x0002,

0xfc1e,	// (0x0002ca42) control_button_pane_g_ParamLimits

0xfc1e,	// (0x0002ca42) control_button_pane_g

0xccda,	// (0x00029afe) control_button_pane_t1

0xcce8,	// (0x00029b0c) control_button_pane_t2

0x0001,

0xfc25,	// (0x0002ca49) control_button_pane_t

0x67b8,	// (0x000235dc) bg_button_pane_g1

0x67c0,	// (0x000235e4) bg_button_pane_g2

0x67c8,	// (0x000235ec) bg_button_pane_g3

0x67d0,	// (0x000235f4) bg_button_pane_g4

0x67d8,	// (0x000235fc) bg_button_pane_g5

0x67e0,	// (0x00023604) bg_button_pane_g6

0x67e8,	// (0x0002360c) bg_button_pane_g7

0x67f0,	// (0x00023614) bg_button_pane_g8

0x67f8,	// (0x0002361c) bg_button_pane_g9

0x0008,

0xf866,	// (0x0002c68a) bg_button_pane_g

0x84a6,	// (0x000252ca) common_borders_pane_ParamLimits

0x84a6,	// (0x000252ca) common_borders_pane

0xcc7a,	// (0x00029a9e) eswt_control_pane_g1_copy1_ParamLimits

0xcc7a,	// (0x00029a9e) eswt_control_pane_g1_copy1

0xcc87,	// (0x00029aab) eswt_control_pane_g2_copy1_ParamLimits

0xcc87,	// (0x00029aab) eswt_control_pane_g2_copy1

0xcc94,	// (0x00029ab8) eswt_control_pane_g3_copy1_ParamLimits

0xcc94,	// (0x00029ab8) eswt_control_pane_g3_copy1

0xcca1,	// (0x00029ac5) eswt_control_pane_g4_copy1_ParamLimits

0xcca1,	// (0x00029ac5) eswt_control_pane_g4_copy1

0x84e1,	// (0x00025305) bg_eswt_ctrl_canvas_pane_g1

0x84a6,	// (0x000252ca) common_borders_pane_cp2_ParamLimits

0x84a6,	// (0x000252ca) common_borders_pane_cp2

0x84a6,	// (0x000252ca) common_borders_pane_cp3_ParamLimits

0x84a6,	// (0x000252ca) common_borders_pane_cp3

0xccf6,	// (0x00029b1a) separator_horizontal_pane

0xccfe,	// (0x00029b22) separator_vertical_pane

0xcc7a,	// (0x00029a9e) eswt_control_pane_g1_copy2_ParamLimits

0xcc7a,	// (0x00029a9e) eswt_control_pane_g1_copy2

0xcc87,	// (0x00029aab) eswt_control_pane_g2_copy2_ParamLimits

0xcc87,	// (0x00029aab) eswt_control_pane_g2_copy2

0xcc94,	// (0x00029ab8) eswt_control_pane_g3_copy2_ParamLimits

0xcc94,	// (0x00029ab8) eswt_control_pane_g3_copy2

0xcca1,	// (0x00029ac5) eswt_control_pane_g4_copy2_ParamLimits

0xcca1,	// (0x00029ac5) eswt_control_pane_g4_copy2

0x5364,	// (0x00022188) common_borders_pane_cp4

0xcd07,	// (0x00029b2b) separator_horizontal_pane_g1

0xcd10,	// (0x00029b34) separator_horizontal_pane_g2

0xcd19,	// (0x00029b3d) separator_horizontal_pane_g3

0x0002,

0xfc2a,	// (0x0002ca4e) separator_horizontal_pane_g

0xcc7a,	// (0x00029a9e) eswt_control_pane_g1_copy3_ParamLimits

0xcc7a,	// (0x00029a9e) eswt_control_pane_g1_copy3

0xcc87,	// (0x00029aab) eswt_control_pane_g2_copy3_ParamLimits

0xcc87,	// (0x00029aab) eswt_control_pane_g2_copy3

0xcc94,	// (0x00029ab8) eswt_control_pane_g3_copy3_ParamLimits

0xcc94,	// (0x00029ab8) eswt_control_pane_g3_copy3

0xcca1,	// (0x00029ac5) eswt_control_pane_g4_copy3_ParamLimits

0xcca1,	// (0x00029ac5) eswt_control_pane_g4_copy3

0x5364,	// (0x00022188) common_borders_pane_cp5

0xcd22,	// (0x00029b46) separator_vertical_pane_g1

0xcd2b,	// (0x00029b4f) separator_vertical_pane_g2

0xcd34,	// (0x00029b58) separator_vertical_pane_g3

0x0002,

0xfc31,	// (0x0002ca55) separator_vertical_pane_g

0xcc7a,	// (0x00029a9e) eswt_control_pane_g1_copy4_ParamLimits

0xcc7a,	// (0x00029a9e) eswt_control_pane_g1_copy4

0xcc87,	// (0x00029aab) eswt_control_pane_g2_copy4_ParamLimits

0xcc87,	// (0x00029aab) eswt_control_pane_g2_copy4

0xcc94,	// (0x00029ab8) eswt_control_pane_g3_copy4_ParamLimits

0xcc94,	// (0x00029ab8) eswt_control_pane_g3_copy4

0xcca1,	// (0x00029ac5) eswt_control_pane_g4_copy4_ParamLimits

0xcca1,	// (0x00029ac5) eswt_control_pane_g4_copy4

0xec81,	// (0x0002baa5) eswt_ctrl_combo_button_pane

0xec89,	// (0x0002baad) eswt_ctrl_input_pane

0xec91,	// (0x0002bab5) popup_choice_list_window_cp70

0xec99,	// (0x0002babd) eswt_ctrl_input_pane_t1

0x5364,	// (0x00022188) input_focus_pane_cp70

0x84a6,	// (0x000252ca) bg_button_pane_cp70_ParamLimits

0x84a6,	// (0x000252ca) bg_button_pane_cp70

0xeca7,	// (0x0002bacb) eswt_ctrl_combo_button_pane_g1

0xcd3d,	// (0x00029b61) wait_bar_pane_cp70

0x6844,	// (0x00023668) bg_popup_window_pane_cp70_ParamLimits

0x6844,	// (0x00023668) bg_popup_window_pane_cp70

0xcd45,	// (0x00029b69) popup_eswt_tasktip_window_t1

0xcd5b,	// (0x00029b7f) wait_bar_pane_cp71_ParamLimits

0xcd5b,	// (0x00029b7f) wait_bar_pane_cp71

0xcd67,	// (0x00029b8b) grid_eswt_app_pane

0x5d01,	// (0x00022b25) scroll_pane_cp70

0xecaf,	// (0x0002bad3) cell_eswt_app_pane_ParamLimits

0xecaf,	// (0x0002bad3) cell_eswt_app_pane

0xecd7,	// (0x0002bafb) cell_eswt_app_pane_g1_ParamLimits

0xecd7,	// (0x0002bafb) cell_eswt_app_pane_g1

0xed06,	// (0x0002bb2a) cell_eswt_app_pane_g2_ParamLimits

0xed06,	// (0x0002bb2a) cell_eswt_app_pane_g2

0x0001,

0xfc38,	// (0x0002ca5c) cell_eswt_app_pane_g_ParamLimits

0xfc38,	// (0x0002ca5c) cell_eswt_app_pane_g

0xed2f,	// (0x0002bb53) cell_eswt_app_pane_t1_ParamLimits

0xed2f,	// (0x0002bb53) cell_eswt_app_pane_t1

0xcd70,	// (0x00029b94) grid_highlight_pane_cp70_ParamLimits

0xcd70,	// (0x00029b94) grid_highlight_pane_cp70

0x62e4,	// (0x00023108) set_content_pane_g1

0x9d99,	// (0x00026bbd) status_small_volume_pane

0xb68e,	// (0x000284b2) status_small_volume_pane_g1

0xb696,	// (0x000284ba) volume_small2_pane

0xb69f,	// (0x000284c3) volume_small2_pane_g1

0xb6a8,	// (0x000284cc) volume_small2_pane_g2

0xb6b1,	// (0x000284d5) volume_small2_pane_g3

0xb6ba,	// (0x000284de) volume_small2_pane_g4

0xb6c3,	// (0x000284e7) volume_small2_pane_g5

0xb6cc,	// (0x000284f0) volume_small2_pane_g6

0xb6d5,	// (0x000284f9) volume_small2_pane_g7

0xb6de,	// (0x00028502) volume_small2_pane_g8

0xb6e7,	// (0x0002850b) volume_small2_pane_g9

0xb6f0,	// (0x00028514) volume_small2_pane_g10

0x0009,

0xfc3d,	// (0x0002ca61) volume_small2_pane_g

0xc7d8,	// (0x000295fc) fep_vkb_top_text_pane_g1_ParamLimits

0xebb5,	// (0x0002b9d9) fep_vkb_top_text_pane_t1_ParamLimits

0xc9c7,	// (0x000297eb) popup_preview_fixed_window_g3_ParamLimits

0xc9c7,	// (0x000297eb) popup_preview_fixed_window_g3

0xa386,	// (0x000271aa) popup_toolbar_trans_pane

0xac7d,	// (0x00027aa1) aid_height_set_list_ParamLimits

0x761a,	// (0x0002443e) aid_size_parent_ParamLimits

0x5af8,	// (0x0002291c) list_highlight_pane_cp2_ParamLimits

0x62e4,	// (0x00023108) set_content_pane_g1_ParamLimits

0xae16,	// (0x00027c3a) list_single_image_pane_ParamLimits

0xae16,	// (0x00027c3a) list_single_image_pane

0xed61,	// (0x0002bb85) aid_size_cell_image_ParamLimits

0xed61,	// (0x0002bb85) aid_size_cell_image

0xed6e,	// (0x0002bb92) grid_single_image_pane_ParamLimits

0xed6e,	// (0x0002bb92) grid_single_image_pane

0x599d,	// (0x000227c1) list_single_image_pane_g1_ParamLimits

0x599d,	// (0x000227c1) list_single_image_pane_g1

0x59a9,	// (0x000227cd) list_single_image_pane_g2_ParamLimits

0x59a9,	// (0x000227cd) list_single_image_pane_g2

0x0001,

0xfc52,	// (0x0002ca76) list_single_image_pane_g_ParamLimits

0xfc52,	// (0x0002ca76) list_single_image_pane_g

0xcd7c,	// (0x00029ba0) list_single_image_pane_t1_ParamLimits

0xcd7c,	// (0x00029ba0) list_single_image_pane_t1

0xed7a,	// (0x0002bb9e) cell_image_list_pane_ParamLimits

0xed7a,	// (0x0002bb9e) cell_image_list_pane

0xed8d,	// (0x0002bbb1) cell_image_list_pane_g1

0xed96,	// (0x0002bbba) cell_image_list_pane_g2

0x0001,

0xfc57,	// (0x0002ca7b) cell_image_list_pane_g

0xcd92,	// (0x00029bb6) aid_size_cell_tb_trans_pane

0x598f,	// (0x000227b3) bg_tb_trans_pane

0xcda4,	// (0x00029bc8) grid_tb_trans_pane

0x67b8,	// (0x000235dc) bg_tb_trans_pane_g1

0x67c0,	// (0x000235e4) bg_tb_trans_pane_g2

0x67c8,	// (0x000235ec) bg_tb_trans_pane_g3

0x67d0,	// (0x000235f4) bg_tb_trans_pane_g4

0x67d8,	// (0x000235fc) bg_tb_trans_pane_g5

0x67f0,	// (0x00023614) bg_tb_trans_pane_g6

0x67f8,	// (0x0002361c) bg_tb_trans_pane_g7

0x67e0,	// (0x00023604) bg_tb_trans_pane_g8

0x67e8,	// (0x0002360c) bg_tb_trans_pane_g9

0x0008,

0xfc5c,	// (0x0002ca80) bg_tb_trans_pane_g

0xcdb8,	// (0x00029bdc) cell_toolbar_trans_pane_ParamLimits

0xcdb8,	// (0x00029bdc) cell_toolbar_trans_pane

0x84e1,	// (0x00025305) cell_toolbar_trans_pane_g1

0xb1ce,	// (0x00027ff2) list_form2_midp_pane_t1

0xb1dc,	// (0x00028000) list_form2_midp_pane_t2

0x0001,

0xfaf9,	// (0x0002c91d) list_form2_midp_pane_t

0x8299,	// (0x000250bd) scroll_pane_cp51_ParamLimits

0x83b6,	// (0x000251da) form2_midp_wait_pane_g1

0x83bf,	// (0x000251e3) form2_midp_wait_pane_g2

0x83c8,	// (0x000251ec) form2_midp_wait_pane_g3

0x0002,

0xfb0e,	// (0x0002c932) form2_midp_wait_pane_g

0x53e4,	// (0x00022208) list_highlight_pane_cp21_ParamLimits

0x83e8,	// (0x0002520c) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x83f7,	// (0x0002521b) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xadcd,	// (0x00027bf1) list_single_2graphic_im_pane_ParamLimits

0xadcd,	// (0x00027bf1) list_single_2graphic_im_pane

0xed9f,	// (0x0002bbc3) list_single_2graphic_im_pane_g1_ParamLimits

0xed9f,	// (0x0002bbc3) list_single_2graphic_im_pane_g1

0xcdde,	// (0x00029c02) list_single_2graphic_im_pane_g2_ParamLimits

0xcdde,	// (0x00029c02) list_single_2graphic_im_pane_g2

0xcdea,	// (0x00029c0e) list_single_2graphic_im_pane_g3_ParamLimits

0xcdea,	// (0x00029c0e) list_single_2graphic_im_pane_g3

0x0003,

0xfc6f,	// (0x0002ca93) list_single_2graphic_im_pane_g_ParamLimits

0xfc6f,	// (0x0002ca93) list_single_2graphic_im_pane_g

0xedb0,	// (0x0002bbd4) list_single_2graphic_im_pane_t1_ParamLimits

0xedb0,	// (0x0002bbd4) list_single_2graphic_im_pane_t1

0xc9d3,	// (0x000297f7) list_single_graphic_2heading_pane_fp_ParamLimits

0xc9d3,	// (0x000297f7) list_single_graphic_2heading_pane_fp

0xe7ec,	// (0x0002b610) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xe7ec,	// (0x0002b610) list_single_graphic_2heading_pane_fp_g1

0xc9e6,	// (0x0002980a) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc9e6,	// (0x0002980a) list_single_graphic_2heading_pane_fp_g2

0xe7b5,	// (0x0002b5d9) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xe7b5,	// (0x0002b5d9) list_single_graphic_2heading_pane_fp_g3

0xe7c1,	// (0x0002b5e5) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xe7c1,	// (0x0002b5e5) list_single_graphic_2heading_pane_fp_g4

0xc9f2,	// (0x00029816) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc9f2,	// (0x00029816) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb96,	// (0x0002c9ba) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb96,	// (0x0002c9ba) list_single_graphic_2heading_pane_fp_g

0xe9c5,	// (0x0002b7e9) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xe9c5,	// (0x0002b7e9) list_single_graphic_2heading_pane_fp_t1

0xe824,	// (0x0002b648) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xe824,	// (0x0002b648) list_single_graphic_2heading_pane_fp_t2

0xe9db,	// (0x0002b7ff) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xe9db,	// (0x0002b7ff) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc78,	// (0x0002ca9c) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc78,	// (0x0002ca9c) list_single_graphic_2heading_pane_fp_t

0x856c,	// (0x00025390) fep_hwr_write_pane_g5_ParamLimits

0x856c,	// (0x00025390) fep_hwr_write_pane_g5

0x8578,	// (0x0002539c) fep_hwr_write_pane_g6_ParamLimits

0x8578,	// (0x0002539c) fep_hwr_write_pane_g6

0xcc4d,	// (0x00029a71) eswt_shell_pane_ParamLimits

0x6844,	// (0x00023668) bg_popup_window_pane_cp18_ParamLimits

0x78ab,	// (0x000246cf) heading_pane_cp70

0xcd45,	// (0x00029b69) popup_eswt_tasktip_window_t1_ParamLimits

0xa46e,	// (0x00027292) aid_touch_tab_arrow_left

0xa47d,	// (0x000272a1) aid_touch_tab_arrow_right

0x9389,	// (0x000261ad) title_pane_g3_ParamLimits

0x9389,	// (0x000261ad) title_pane_g3

0x5957,	// (0x0002277b) set_value_pane_g1

0xa386,	// (0x000271aa) popup_toolbar_trans_pane_ParamLimits

0xcd92,	// (0x00029bb6) aid_size_cell_tb_trans_pane_ParamLimits

0x598f,	// (0x000227b3) bg_tb_trans_pane_ParamLimits

0xcda4,	// (0x00029bc8) grid_tb_trans_pane_ParamLimits

0x5517,	// (0x0002233b) cont_note_pane_ParamLimits

0x5517,	// (0x0002233b) cont_note_pane

0x57af,	// (0x000225d3) cont_snote2_single_text_pane_ParamLimits

0x57af,	// (0x000225d3) cont_snote2_single_text_pane

0x57af,	// (0x000225d3) cont_snote2_single_graphic_pane_ParamLimits

0x57af,	// (0x000225d3) cont_snote2_single_graphic_pane

0x6d19,	// (0x00023b3d) cont_note_wait_pane_ParamLimits

0x6d19,	// (0x00023b3d) cont_note_wait_pane

0x6d19,	// (0x00023b3d) cont_note_image_pane_ParamLimits

0x6d19,	// (0x00023b3d) cont_note_image_pane

0xce0a,	// (0x00029c2e) popup_note2_window_g1_ParamLimits

0xce0a,	// (0x00029c2e) popup_note2_window_g1

0xce3b,	// (0x00029c5f) popup_note2_window_t1_ParamLimits

0xce3b,	// (0x00029c5f) popup_note2_window_t1

0xce80,	// (0x00029ca4) popup_note2_window_t2_ParamLimits

0xce80,	// (0x00029ca4) popup_note2_window_t2

0xcec5,	// (0x00029ce9) popup_note2_window_t3_ParamLimits

0xcec5,	// (0x00029ce9) popup_note2_window_t3

0xcf0a,	// (0x00029d2e) popup_note2_window_t4_ParamLimits

0xcf0a,	// (0x00029d2e) popup_note2_window_t4

0x559b,	// (0x000223bf) popup_note2_window_t5_ParamLimits

0x559b,	// (0x000223bf) popup_note2_window_t5

0x0004,

0xfc84,	// (0x0002caa8) popup_note2_window_t_ParamLimits

0xfc84,	// (0x0002caa8) popup_note2_window_t

0xcf39,	// (0x00029d5d) popup_note2_image_window_g1_ParamLimits

0xcf39,	// (0x00029d5d) popup_note2_image_window_g1

0xcf45,	// (0x00029d69) popup_note2_image_window_g2_ParamLimits

0xcf45,	// (0x00029d69) popup_note2_image_window_g2

0x0001,

0xfc8f,	// (0x0002cab3) popup_note2_image_window_g_ParamLimits

0xfc8f,	// (0x0002cab3) popup_note2_image_window_g

0xcf57,	// (0x00029d7b) popup_note2_image_window_t1_ParamLimits

0xcf57,	// (0x00029d7b) popup_note2_image_window_t1

0xcf6f,	// (0x00029d93) popup_note2_image_window_t2_ParamLimits

0xcf6f,	// (0x00029d93) popup_note2_image_window_t2

0xcf87,	// (0x00029dab) popup_note2_image_window_t3_ParamLimits

0xcf87,	// (0x00029dab) popup_note2_image_window_t3

0x0002,

0xfc94,	// (0x0002cab8) popup_note2_image_window_t_ParamLimits

0xfc94,	// (0x0002cab8) popup_note2_image_window_t

0x6d27,	// (0x00023b4b) popup_note2_wait_window_g1_ParamLimits

0x6d27,	// (0x00023b4b) popup_note2_wait_window_g1

0x6d33,	// (0x00023b57) popup_note2_wait_window_g2_ParamLimits

0x6d33,	// (0x00023b57) popup_note2_wait_window_g2

0x6d3f,	// (0x00023b63) popup_note2_wait_window_g3_ParamLimits

0x6d3f,	// (0x00023b63) popup_note2_wait_window_g3

0x0002,

0xf848,	// (0x0002c66c) popup_note2_wait_window_g_ParamLimits

0xf848,	// (0x0002c66c) popup_note2_wait_window_g

0xcfa3,	// (0x00029dc7) popup_note2_wait_window_t1_ParamLimits

0xcfa3,	// (0x00029dc7) popup_note2_wait_window_t1

0xcfc1,	// (0x00029de5) popup_note2_wait_window_t2_ParamLimits

0xcfc1,	// (0x00029de5) popup_note2_wait_window_t2

0xcfdf,	// (0x00029e03) popup_note2_wait_window_t3_ParamLimits

0xcfdf,	// (0x00029e03) popup_note2_wait_window_t3

0xcff1,	// (0x00029e15) popup_note2_wait_window_t4_ParamLimits

0xcff1,	// (0x00029e15) popup_note2_wait_window_t4

0x0003,

0xfc9b,	// (0x0002cabf) popup_note2_wait_window_t_ParamLimits

0xfc9b,	// (0x0002cabf) popup_note2_wait_window_t

0xd003,	// (0x00029e27) wait_bar2_pane_ParamLimits

0xd003,	// (0x00029e27) wait_bar2_pane

0xd01b,	// (0x00029e3f) popup_snote2_single_text_window_g1_ParamLimits

0xd01b,	// (0x00029e3f) popup_snote2_single_text_window_g1

0xd043,	// (0x00029e67) popup_snote2_single_text_window_t1_ParamLimits

0xd043,	// (0x00029e67) popup_snote2_single_text_window_t1

0xd08f,	// (0x00029eb3) popup_snote2_single_text_window_t2_ParamLimits

0xd08f,	// (0x00029eb3) popup_snote2_single_text_window_t2

0xd0db,	// (0x00029eff) popup_snote2_single_text_window_t3_ParamLimits

0xd0db,	// (0x00029eff) popup_snote2_single_text_window_t3

0xd11c,	// (0x00029f40) popup_snote2_single_text_window_t4_ParamLimits

0xd11c,	// (0x00029f40) popup_snote2_single_text_window_t4

0xd152,	// (0x00029f76) popup_snote2_single_text_window_t5_ParamLimits

0xd152,	// (0x00029f76) popup_snote2_single_text_window_t5

0x0004,

0xfca4,	// (0x0002cac8) popup_snote2_single_text_window_t_ParamLimits

0xfca4,	// (0x0002cac8) popup_snote2_single_text_window_t

0xd17d,	// (0x00029fa1) popup_snote2_single_graphic_window_g1_ParamLimits

0xd17d,	// (0x00029fa1) popup_snote2_single_graphic_window_g1

0xd1a5,	// (0x00029fc9) popup_snote2_single_graphic_window_g2_ParamLimits

0xd1a5,	// (0x00029fc9) popup_snote2_single_graphic_window_g2

0x0001,

0xfcaf,	// (0x0002cad3) popup_snote2_single_graphic_window_g_ParamLimits

0xfcaf,	// (0x0002cad3) popup_snote2_single_graphic_window_g

0xd1cd,	// (0x00029ff1) popup_snote2_single_graphic_window_t1_ParamLimits

0xd1cd,	// (0x00029ff1) popup_snote2_single_graphic_window_t1

0xd219,	// (0x0002a03d) popup_snote2_single_graphic_window_t2_ParamLimits

0xd219,	// (0x0002a03d) popup_snote2_single_graphic_window_t2

0xd0db,	// (0x00029eff) popup_snote2_single_graphic_window_t3_ParamLimits

0xd0db,	// (0x00029eff) popup_snote2_single_graphic_window_t3

0xd11c,	// (0x00029f40) popup_snote2_single_graphic_window_t4_ParamLimits

0xd11c,	// (0x00029f40) popup_snote2_single_graphic_window_t4

0xd152,	// (0x00029f76) popup_snote2_single_graphic_window_t5_ParamLimits

0xd152,	// (0x00029f76) popup_snote2_single_graphic_window_t5

0x0004,

0xfcb4,	// (0x0002cad8) popup_snote2_single_graphic_window_t_ParamLimits

0xfcb4,	// (0x0002cad8) popup_snote2_single_graphic_window_t

0x8234,	// (0x00025058) clock_nsta_pane_cp2_t1

0x8234,	// (0x00025058) clock_nsta_pane_cp2_t2

0x0001,

0xfacf,	// (0x0002c8f3) clock_nsta_pane_cp2_t

0xe15d,	// (0x0002af81) form_field_data_wide_pane_g1_ParamLimits

0x599d,	// (0x000227c1) form_field_data_wide_pane_g2_ParamLimits

0x599d,	// (0x000227c1) form_field_data_wide_pane_g2

0x59a9,	// (0x000227cd) form_field_data_wide_pane_g3_ParamLimits

0x59a9,	// (0x000227cd) form_field_data_wide_pane_g3

0x0002,

0xf67b,	// (0x0002c49f) form_field_data_wide_pane_g_ParamLimits

0xf67b,	// (0x0002c49f) form_field_data_wide_pane_g

0xb08e,	// (0x00027eb2) grid_touch_3_pane_ParamLimits

0xb08e,	// (0x00027eb2) grid_touch_3_pane

0xede1,	// (0x0002bc05) cell_touch_3_pane_ParamLimits

0xede1,	// (0x0002bc05) cell_touch_3_pane

0x84e1,	// (0x00025305) cell_touch_3_pane_g1

0x84e1,	// (0x00025305) cell_touch_3_pane_g2

0x0001,

0xfb54,	// (0x0002c978) cell_touch_3_pane_g

0x55cd,	// (0x000223f1) cont_query_data_pane

0x55d5,	// (0x000223f9) cont_query_data_pane_cp1

0xd265,	// (0x0002a089) button_value_adjust_pane_cp7

0xd26d,	// (0x0002a091) query_popup_pane_cp3

0x5f24,	// (0x00022d48) bg_popup_sub_pane_cp22_ParamLimits

0x9a2e,	// (0x00026852) navi_navi_volume_pane_cp2

0x9a46,	// (0x0002686a) popup_side_volume_key_window_g2

0x9a52,	// (0x00026876) popup_side_volume_key_window_g3

0x0002,

0xf711,	// (0x0002c535) popup_side_volume_key_window_g

0x9a6c,	// (0x00026890) popup_side_volume_key_window_t2

0x0001,

0xf718,	// (0x0002c53c) popup_side_volume_key_window_t

0x61b6,	// (0x00022fda) popup_side_volume_key_window_ParamLimits

0xc408,	// (0x0002922c) list_double_graphic_pane_g4_ParamLimits

0xc408,	// (0x0002922c) list_double_graphic_pane_g4

0xadf2,	// (0x00027c16) list_single_2heading_msg_pane_ParamLimits

0xadf2,	// (0x00027c16) list_single_2heading_msg_pane

0xe9f9,	// (0x0002b81d) list_single_2heading_msg_pane_g1_ParamLimits

0xe9f9,	// (0x0002b81d) list_single_2heading_msg_pane_g1

0xc23b,	// (0x0002905f) list_single_2heading_msg_pane_g2_ParamLimits

0xc23b,	// (0x0002905f) list_single_2heading_msg_pane_g2

0xea05,	// (0x0002b829) list_single_2heading_msg_pane_g3_ParamLimits

0xea05,	// (0x0002b829) list_single_2heading_msg_pane_g3

0xea11,	// (0x0002b835) list_single_2heading_msg_pane_g4_ParamLimits

0xea11,	// (0x0002b835) list_single_2heading_msg_pane_g4

0x0003,

0xfcbf,	// (0x0002cae3) list_single_2heading_msg_pane_g_ParamLimits

0xfcbf,	// (0x0002cae3) list_single_2heading_msg_pane_g

0xea29,	// (0x0002b84d) list_single_2heading_msg_pane_t1_ParamLimits

0xea29,	// (0x0002b84d) list_single_2heading_msg_pane_t1

0xea51,	// (0x0002b875) list_single_2heading_msg_pane_t2_ParamLimits

0xea51,	// (0x0002b875) list_single_2heading_msg_pane_t2

0xea85,	// (0x0002b8a9) list_single_2heading_msg_pane_t3_ParamLimits

0xea85,	// (0x0002b8a9) list_single_2heading_msg_pane_t3

0xeabe,	// (0x0002b8e2) list_single_2heading_msg_pane_t4_ParamLimits

0xeabe,	// (0x0002b8e2) list_single_2heading_msg_pane_t4

0x0003,

0xfcc8,	// (0x0002caec) list_single_2heading_msg_pane_t_ParamLimits

0xfcc8,	// (0x0002caec) list_single_2heading_msg_pane_t

0x5382,	// (0x000221a6) title_pane_g4_ParamLimits

0x5382,	// (0x000221a6) title_pane_g4

0x973c,	// (0x00026560) title_pane_stacon_g3_ParamLimits

0x973c,	// (0x00026560) title_pane_stacon_g3

0xcdfe,	// (0x00029c22) list_single_2graphic_im_pane_g4_ParamLimits

0xcdfe,	// (0x00029c22) list_single_2graphic_im_pane_g4

0x76e7,	// (0x0002450b) popup_side_volume_key_window_cp

0x7ba4,	// (0x000249c8) main_idle_act2_pane_t1

0xa758,	// (0x0002757c) toolbar_button_pane_g10

0x965a,	// (0x0002647e) popup_toolbar_window_cp1

0x8225,	// (0x00025049) clock_nsta_pane_cp_t1

0x8225,	// (0x00025049) clock_nsta_pane_cp_t2

0x0001,

0xfaca,	// (0x0002c8ee) clock_nsta_pane_cp_t

0x9a2e,	// (0x00026852) navi_navi_volume_pane_cp2_ParamLimits

0x9a3a,	// (0x0002685e) popup_side_volume_key_window_g1_ParamLimits

0x9a46,	// (0x0002686a) popup_side_volume_key_window_g2_ParamLimits

0x9a52,	// (0x00026876) popup_side_volume_key_window_g3_ParamLimits

0xf711,	// (0x0002c535) popup_side_volume_key_window_g_ParamLimits

0xb30e,	// (0x00028132) fep_hwr_aid_pane

0xb3af,	// (0x000281d3) bg_fep_hwr_top_pane_g4_ParamLimits

0x854e,	// (0x00025372) fep_hwr_top_pane_g1_ParamLimits

0x853c,	// (0x00025360) fep_hwr_top_pane_g2_ParamLimits

0xb3cf,	// (0x000281f3) fep_hwr_top_pane_g3_ParamLimits

0xfb1f,	// (0x0002c943) fep_hwr_top_pane_g_ParamLimits

0xb3e4,	// (0x00028208) fep_hwr_top_text_pane_ParamLimits

0x7466,	// (0x0002428a) aid_touch_tab_arrow_arrow_2

0x745d,	// (0x00024281) aid_touch_tab_arrow_left_2

0xb322,	// (0x00028146) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0xb355,	// (0x00028179) fep_hwr_prediction_pane

0xc643,	// (0x00029467) fep_vkb_prediction_pane

0xeb92,	// (0x0002b9b6) fep_vkb_side_pane_g3_ParamLimits

0xeb92,	// (0x0002b9b6) fep_vkb_side_pane_g3

0xb553,	// (0x00028377) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xb5bd,	// (0x000283e1) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xb5ca,	// (0x000283ee) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbce,	// (0x0002c9f2) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xb6f9,	// (0x0002851d) fep_hwr_prediction_pane_g1

0xb703,	// (0x00028527) fep_hwr_prediction_pane_g2

0xb70b,	// (0x0002852f) fep_hwr_prediction_pane_g3

0xb713,	// (0x00028537) fep_hwr_prediction_pane_g4

0x0003,

0xfcd1,	// (0x0002caf5) fep_hwr_prediction_pane_g

0xd27e,	// (0x0002a0a2) fep_vkb_prediction_pane_g1

0xd288,	// (0x0002a0ac) fep_vkb_prediction_pane_g2

0xd290,	// (0x0002a0b4) fep_vkb_prediction_pane_g3

0xd298,	// (0x0002a0bc) fep_vkb_prediction_pane_g4

0x0003,

0xfcda,	// (0x0002cafe) fep_vkb_prediction_pane_g

0xac0d,	// (0x00027a31) slider_set_pane_g3

0xac21,	// (0x00027a45) slider_set_pane_g4

0xac39,	// (0x00027a5d) slider_set_pane_g5

0xac0d,	// (0x00027a31) slider_set_pane_g6

0xac4f,	// (0x00027a73) slider_set_pane_g7

0x7918,	// (0x0002473c) slider_form_pane_g3

0x7921,	// (0x00024745) slider_form_pane_g4

0x7929,	// (0x0002474d) slider_form_pane_g5

0x7918,	// (0x0002473c) slider_form_pane_g6

0xadb2,	// (0x00027bd6) slider_form_pane_g7

0x7dcd,	// (0x00024bf1) slider_set_pane_vc_g3

0x7dd6,	// (0x00024bfa) slider_set_pane_vc_g4

0x7ddf,	// (0x00024c03) slider_set_pane_vc_g5

0x7dcd,	// (0x00024bf1) slider_set_pane_vc_g6

0x7de8,	// (0x00024c0c) slider_set_pane_vc_g7

0x7f80,	// (0x00024da4) slider_form_pane_vc_g1

0x7f89,	// (0x00024dad) slider_form_pane_vc_g2

0x7f92,	// (0x00024db6) slider_form_pane_vc_g3

0x7f80,	// (0x00024da4) slider_form_pane_vc_g4

0x7f9b,	// (0x00024dbf) slider_form_pane_vc_g5

0x0004,

0xfa9c,	// (0x0002c8c0) slider_form_pane_vc_g

0x9160,	// (0x00025f84) main_idle_act3_pane

0xd2a0,	// (0x0002a0c4) ai3_links_pane

0xee22,	// (0x0002bc46) popup_ai3_data_window_ParamLimits

0xee22,	// (0x0002bc46) popup_ai3_data_window

0x5364,	// (0x00022188) grid_ai3_links_pane

0xee3a,	// (0x0002bc5e) cell_ai3_links_pane_ParamLimits

0xee3a,	// (0x0002bc5e) cell_ai3_links_pane

0xd2a9,	// (0x0002a0cd) bg_popup_sub_pane_cp11

0xd2b6,	// (0x0002a0da) cell_ai3_links_pane_g1

0x5364,	// (0x00022188) bg_popup_sub_pane_cp12

0xd2db,	// (0x0002a0ff) heading_ai3_data_pane

0xd2e3,	// (0x0002a107) list_ai3_gene_pane

0xd2ef,	// (0x0002a113) popup_ai3_data_window_g1

0xd2f7,	// (0x0002a11b) heading_ai3_data_pane_g1

0xd2ff,	// (0x0002a123) heading_ai3_data_pane_t1

0xd30d,	// (0x0002a131) list_double_ai3_gene_pane_ParamLimits

0xd30d,	// (0x0002a131) list_double_ai3_gene_pane

0xd31a,	// (0x0002a13e) list_single_ai3_gene_pane_ParamLimits

0xd31a,	// (0x0002a13e) list_single_ai3_gene_pane

0x84a6,	// (0x000252ca) list_highlight_pane_cp7_ParamLimits

0x84a6,	// (0x000252ca) list_highlight_pane_cp7

0xd327,	// (0x0002a14b) list_single_a13_gene_pane_t1_ParamLimits

0xd327,	// (0x0002a14b) list_single_a13_gene_pane_t1

0xd33e,	// (0x0002a162) list_single_ai3_gene_pane_g1

0xd347,	// (0x0002a16b) list_single_ai3_gene_pane_g2

0x0001,

0xfce3,	// (0x0002cb07) list_single_ai3_gene_pane_g

0xd34f,	// (0x0002a173) list_double_ai3_gene_pane_g1_ParamLimits

0xd34f,	// (0x0002a173) list_double_ai3_gene_pane_g1

0xd35b,	// (0x0002a17f) list_double_ai3_gene_pane_t1_ParamLimits

0xd35b,	// (0x0002a17f) list_double_ai3_gene_pane_t1

0xd377,	// (0x0002a19b) list_double_ai3_gene_pane_t2_ParamLimits

0xd377,	// (0x0002a19b) list_double_ai3_gene_pane_t2

0xd38d,	// (0x0002a1b1) list_double_ai3_gene_pane_t3_ParamLimits

0xd38d,	// (0x0002a1b1) list_double_ai3_gene_pane_t3

0x0002,

0xfce8,	// (0x0002cb0c) list_double_ai3_gene_pane_t_ParamLimits

0xfce8,	// (0x0002cb0c) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xe9f1,	// (0x0002b815) aid_size_min_col_2

0xee0e,	// (0x0002bc32) aid_size_min_msg_ParamLimits

0xee0e,	// (0x0002bc32) aid_size_min_msg

0xeba6,	// (0x0002b9ca) fep_vkb_top_text_pane_g2_ParamLimits

0xeba6,	// (0x0002b9ca) fep_vkb_top_text_pane_g2

0x0001,

0xfb4f,	// (0x0002c973) fep_vkb_top_text_pane_g_ParamLimits

0xfb4f,	// (0x0002c973) fep_vkb_top_text_pane_g

0x9160,	// (0x00025f84) main_hc_apps_shell_pane

0xd3aa,	// (0x0002a1ce) grid_hc_apps_pane_ParamLimits

0xd3aa,	// (0x0002a1ce) grid_hc_apps_pane

0xd3b9,	// (0x0002a1dd) list_hc_apps_pane

0xd3c1,	// (0x0002a1e5) scroll_pane_cp37_ParamLimits

0xd3c1,	// (0x0002a1e5) scroll_pane_cp37

0xee4e,	// (0x0002bc72) cell_hc_apps_pane_ParamLimits

0xee4e,	// (0x0002bc72) cell_hc_apps_pane

0xeedc,	// (0x0002bd00) cell_hc_apps_pane_g1_ParamLimits

0xeedc,	// (0x0002bd00) cell_hc_apps_pane_g1

0xd3cd,	// (0x0002a1f1) cell_hc_apps_pane_g2_ParamLimits

0xd3cd,	// (0x0002a1f1) cell_hc_apps_pane_g2

0xd3e9,	// (0x0002a20d) cell_hc_apps_pane_g3_ParamLimits

0xd3e9,	// (0x0002a20d) cell_hc_apps_pane_g3

0x0002,

0xfcef,	// (0x0002cb13) cell_hc_apps_pane_g_ParamLimits

0xfcef,	// (0x0002cb13) cell_hc_apps_pane_g

0xef09,	// (0x0002bd2d) cell_hc_apps_pane_t1_ParamLimits

0xef09,	// (0x0002bd2d) cell_hc_apps_pane_t1

0x5517,	// (0x0002233b) grid_highlight_pane_cp10_ParamLimits

0x5517,	// (0x0002233b) grid_highlight_pane_cp10

0xef47,	// (0x0002bd6b) list_single_hc_apps_pane_ParamLimits

0xef47,	// (0x0002bd6b) list_single_hc_apps_pane

0xef73,	// (0x0002bd97) list_single_hc_apps_pane_g1

0xeae3,	// (0x0002b907) list_single_hc_apps_pane_g2

0x0001,

0xfcf6,	// (0x0002cb1a) list_single_hc_apps_pane_g

0xeafc,	// (0x0002b920) list_single_hc_apps_pane_g2_copy1

0xeb18,	// (0x0002b93c) list_single_hc_apps_pane_t1

0x53e4,	// (0x00022208) bg_set_opt_pane_cp_ParamLimits

0x9429,	// (0x0002624d) setting_slider_pane_t1_ParamLimits

0x9442,	// (0x00026266) setting_slider_pane_t2_ParamLimits

0x945b,	// (0x0002627f) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0002c382) setting_slider_pane_t_ParamLimits

0x9472,	// (0x00026296) slider_set_pane_ParamLimits

0x9e17,	// (0x00026c3b) control_pane_g5_ParamLimits

0x9e17,	// (0x00026c3b) control_pane_g5

0x78f2,	// (0x00024716) slider_set_pane_g1_ParamLimits

0xac01,	// (0x00027a25) slider_set_pane_g2_ParamLimits

0xac0d,	// (0x00027a31) slider_set_pane_g3_ParamLimits

0xac21,	// (0x00027a45) slider_set_pane_g4_ParamLimits

0xac39,	// (0x00027a5d) slider_set_pane_g5_ParamLimits

0xac0d,	// (0x00027a31) slider_set_pane_g6_ParamLimits

0xac4f,	// (0x00027a73) slider_set_pane_g7_ParamLimits

0xf964,	// (0x0002c788) slider_set_pane_g_ParamLimits

0x628f,	// (0x000230b3) navi_icon_text_pane_ParamLimits

0xa448,	// (0x0002726c) aid_fill_nsta_2_ParamLimits

0xa46e,	// (0x00027292) aid_touch_tab_arrow_left_ParamLimits

0xa47d,	// (0x000272a1) aid_touch_tab_arrow_right_ParamLimits

0xa4e8,	// (0x0002730c) clock_nsta_pane_ParamLimits

0x743f,	// (0x00024263) navi_icon_pane_g1_ParamLimits

0x744b,	// (0x0002426f) navi_text_pane_t1_ParamLimits

0x8273,	// (0x00025097) navi_icon_text_pane_g1_ParamLimits

0x827f,	// (0x000250a3) navi_icon_text_pane_t1_ParamLimits

0xef73,	// (0x0002bd97) list_single_hc_apps_pane_g1_ParamLimits

0xeae3,	// (0x0002b907) list_single_hc_apps_pane_g2_ParamLimits

0xfcf6,	// (0x0002cb1a) list_single_hc_apps_pane_g_ParamLimits

0xeafc,	// (0x0002b920) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xeb18,	// (0x0002b93c) list_single_hc_apps_pane_t1_ParamLimits

0x92a5,	// (0x000260c9) popup_toolbar2_fixed_window_ParamLimits

0x92a5,	// (0x000260c9) popup_toolbar2_fixed_window

0xa37e,	// (0x000271a2) popup_toolbar2_float_window

0x5364,	// (0x00022188) bg_popup_sub_pane_cp27

0xd40b,	// (0x0002a22f) grid_toolbar2_float_pane

0x5364,	// (0x00022188) bg_popup_sub_pane_cp26

0xd40b,	// (0x0002a22f) grid_toolbar2_fixed_pane

0xef8c,	// (0x0002bdb0) cell_toolbar2_fixed_pane_ParamLimits

0xef8c,	// (0x0002bdb0) cell_toolbar2_fixed_pane

0xef9d,	// (0x0002bdc1) cell_toolbar2_fixed_pane_g1

0xd413,	// (0x0002a237) toolbar2_fixed_button_pane

0x67b8,	// (0x000235dc) toolbar2_fixed_button_pane_g1

0x67c0,	// (0x000235e4) toolbar2_fixed_button_pane_g2

0x67c8,	// (0x000235ec) toolbar2_fixed_button_pane_g3

0x67d0,	// (0x000235f4) toolbar2_fixed_button_pane_g4

0x67d8,	// (0x000235fc) toolbar2_fixed_button_pane_g5

0x67e0,	// (0x00023604) toolbar2_fixed_button_pane_g6

0x67e8,	// (0x0002360c) toolbar2_fixed_button_pane_g7

0x67f0,	// (0x00023614) toolbar2_fixed_button_pane_g8

0x67f8,	// (0x0002361c) toolbar2_fixed_button_pane_g9

0x0008,

0xf866,	// (0x0002c68a) toolbar2_fixed_button_pane_g

0xd41b,	// (0x0002a23f) cell_toolbar2_float_pane_ParamLimits

0xd41b,	// (0x0002a23f) cell_toolbar2_float_pane

0xd42c,	// (0x0002a250) cell_toolbar2_float_pane_g1

0xd413,	// (0x0002a237) toolbar2_fixed_button_pane_cp

0xeb5f,	// (0x0002b983) fep_vkb_accented_list_pane_ParamLimits

0xeb5f,	// (0x0002b983) fep_vkb_accented_list_pane

0xb533,	// (0x00028357) bg_popup_fep_shadow_pane_g9

0x640d,	// (0x00023231) bg_popup_fep_shadow_pane_cp3

0x5a9f,	// (0x000228c3) list_accented_list_pane

0xd435,	// (0x0002a259) list_single_accented_list_pane_ParamLimits

0xd435,	// (0x0002a259) list_single_accented_list_pane

0x640d,	// (0x00023231) list_highlight_pane_cp10

0xd446,	// (0x0002a26a) list_single_accented_list_pane_t1

0xa2e8,	// (0x0002710c) popup_slider_window_ParamLimits

0xa2e8,	// (0x0002710c) popup_slider_window

0xd275,	// (0x0002a099) aid_indentation_list_msg

0xf038,	// (0x0002be5c) bg_popup_window_pane_cp19

0xd4ac,	// (0x0002a2d0) popup_slider_window_g1

0xd4c8,	// (0x0002a2ec) popup_slider_window_g2

0xd4e4,	// (0x0002a308) popup_slider_window_g3

0x0005,

0xfcfb,	// (0x0002cb1f) popup_slider_window_g

0xd500,	// (0x0002a324) popup_slider_window_t1

0xd544,	// (0x0002a368) small_volume_slider_vertical_pane

0x84e1,	// (0x00025305) small_volume_slider_vertical_pane_g1

0x84e1,	// (0x00025305) small_volume_slider_vertical_pane_g2

0xd560,	// (0x0002a384) small_volume_slider_vertical_pane_g3

0x0002,

0xfd0d,	// (0x0002cb31) small_volume_slider_vertical_pane_g

0x908d,	// (0x00025eb1) area_side_right_pane_ParamLimits

0x908d,	// (0x00025eb1) area_side_right_pane

0xb71b,	// (0x0002853f) aid_size_side_button_ParamLimits

0xb71b,	// (0x0002853f) aid_size_side_button

0xb72f,	// (0x00028553) grid_sctrl_middle_pane_ParamLimits

0xb72f,	// (0x00028553) grid_sctrl_middle_pane

0xb74a,	// (0x0002856e) sctrl_sk_bottom_pane

0xb75b,	// (0x0002857f) sctrl_sk_top_pane

0xb76d,	// (0x00028591) aid_touch_sctrl_top

0xb77a,	// (0x0002859e) bg_sctrl_sk_pane_ParamLimits

0xb77a,	// (0x0002859e) bg_sctrl_sk_pane

0xb788,	// (0x000285ac) sctrl_sk_top_pane_g1

0xb795,	// (0x000285b9) sctrl_sk_top_pane_t1

0xb76d,	// (0x00028591) aid_touch_sctrl_bottom

0xb77a,	// (0x0002859e) bg_sctrl_sk_pane_cp_ParamLimits

0xb77a,	// (0x0002859e) bg_sctrl_sk_pane_cp

0xb7b0,	// (0x000285d4) sctrl_sk_bottom_pane_g1

0xb795,	// (0x000285b9) sctrl_sk_bottom_pane_t1

0xb7b9,	// (0x000285dd) cell_sctrl_middle_pane_ParamLimits

0xb7b9,	// (0x000285dd) cell_sctrl_middle_pane

0xb7d4,	// (0x000285f8) aid_touch_sctrl_middle_ParamLimits

0xb7d4,	// (0x000285f8) aid_touch_sctrl_middle

0xb7e6,	// (0x0002860a) bg_sctrl_middle_pane_ParamLimits

0xb7e6,	// (0x0002860a) bg_sctrl_middle_pane

0xb553,	// (0x00028377) cell_sctrl_middle_pane_g1_ParamLimits

0xb553,	// (0x00028377) cell_sctrl_middle_pane_g1

0xb7f4,	// (0x00028618) cell_sctrl_middle_pane_g2_ParamLimits

0xb7f4,	// (0x00028618) cell_sctrl_middle_pane_g2

0x0001,

0xfd19,	// (0x0002cb3d) cell_sctrl_middle_pane_g_ParamLimits

0xfd19,	// (0x0002cb3d) cell_sctrl_middle_pane_g

0x67b8,	// (0x000235dc) bg_sctrl_middle_pane_g1

0x67c8,	// (0x000235ec) bg_sctrl_middle_pane_g2

0x67c0,	// (0x000235e4) bg_sctrl_middle_pane_g3

0x67d8,	// (0x000235fc) bg_sctrl_middle_pane_g4

0x67d0,	// (0x000235f4) bg_sctrl_middle_pane_g5

0x67e0,	// (0x00023604) bg_sctrl_middle_pane_g6

0x67e8,	// (0x0002360c) bg_sctrl_middle_pane_g7

0x67f8,	// (0x0002361c) bg_sctrl_middle_pane_g8

0x0007,

0xfd1e,	// (0x0002cb42) bg_sctrl_middle_pane_g

0x67f0,	// (0x00023614) bg_sctrl_middle_pane_g8_copy1

0x67b8,	// (0x000235dc) bg_sctrl_sk_pane_g1

0x67c0,	// (0x000235e4) bg_sctrl_sk_pane_g2

0x67c8,	// (0x000235ec) bg_sctrl_sk_pane_g3

0x0008,

0xf866,	// (0x0002c68a) bg_sctrl_sk_pane_g

0x58d1,	// (0x000226f5) aid_size_touch_scroll_bar

0x67d0,	// (0x000235f4) bg_sctrl_sk_pane_g4

0x67d8,	// (0x000235fc) bg_sctrl_sk_pane_g5

0x67e0,	// (0x00023604) bg_sctrl_sk_pane_g6

0x67e8,	// (0x0002360c) bg_sctrl_sk_pane_g7

0x67f0,	// (0x00023614) bg_sctrl_sk_pane_g8

0x67f8,	// (0x0002361c) bg_sctrl_sk_pane_g9

0xa001,	// (0x00026e25) popup_fep_china_hwr2_fs_candidate_window

0xa009,	// (0x00026e2d) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xa009,	// (0x00026e2d) popup_fep_china_hwr2_fs_control_window

0xb553,	// (0x00028377) sctrl_sk_top_pane_g2

0x0001,

0xfd14,	// (0x0002cb38) sctrl_sk_top_pane_g

0xf0b2,	// (0x0002bed6) aid_fep_china_hwr2_fs_cell_ParamLimits

0xf0b2,	// (0x0002bed6) aid_fep_china_hwr2_fs_cell

0xf0c3,	// (0x0002bee7) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xf0c3,	// (0x0002bee7) bg_popup_fep_shadow_pane_cp4

0xf0da,	// (0x0002befe) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xf0da,	// (0x0002befe) bg_popup_fep_shadow_pane_cp5

0xf0ec,	// (0x0002bf10) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xf0ec,	// (0x0002bf10) popup_fep_china_hwr2_fs_control_bar_grid

0xf0fc,	// (0x0002bf20) popup_fep_china_hwr2_fs_control_funtion_grid

0xd569,	// (0x0002a38d) aid_fep_china_hwr2_fs_candi_cell

0x5364,	// (0x00022188) bg_popup_fep_shadow_pane_cp6

0xd573,	// (0x0002a397) popup_fep_china_hwr2_fs_candidate_grid

0xf104,	// (0x0002bf28) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xf104,	// (0x0002bf28) cell_fep_china_hwr2_fs_funtion_grid

0x84e1,	// (0x00025305) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd57b,	// (0x0002a39f) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd57b,	// (0x0002a39f) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd589,	// (0x0002a3ad) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd589,	// (0x0002a3ad) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd2f,	// (0x0002cb53) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd2f,	// (0x0002cb53) cell_fep_china_hwr2_fs_funtion_grid_g

0xf11c,	// (0x0002bf40) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xf11c,	// (0x0002bf40) cell_fep_china_hwr2_fs_funtion_grid_t1

0xf131,	// (0x0002bf55) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xf131,	// (0x0002bf55) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd34,	// (0x0002cb58) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd34,	// (0x0002cb58) cell_fep_china_hwr2_fs_funtion_grid_t

0xd59f,	// (0x0002a3c3) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd5a7,	// (0x0002a3cb) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd5af,	// (0x0002a3d3) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd39,	// (0x0002cb5d) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd5b7,	// (0x0002a3db) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd5b7,	// (0x0002a3db) cell_fep_china_hwr2_fs_candidate_grid

0xd5d0,	// (0x0002a3f4) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd5d8,	// (0x0002a3fc) popup_fep_china_hwr2_fs_candidate_grid_g21

0x84e1,	// (0x00025305) cell_fep_china_hwr2_fs_candidate_grid_g1

0x84e1,	// (0x00025305) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb54,	// (0x0002c978) cell_fep_china_hwr2_fs_candidate_grid_g

0xd5e0,	// (0x0002a404) cell_fep_china_hwr2_fs_candidate_grid_t1

0x65e9,	// (0x0002340d) clock_nsta_pane_cp_24_ParamLimits

0x65e9,	// (0x0002340d) clock_nsta_pane_cp_24

0x6651,	// (0x00023475) indicator_nsta_pane_cp_24_ParamLimits

0x6651,	// (0x00023475) indicator_nsta_pane_cp_24

0x7335,	// (0x00024159) heading_pane_g1

0x0001,

0xf8cb,	// (0x0002c6ef) heading_pane_g

0x7a31,	// (0x00024855) grid_sct_catagory_button_pane

0x762c,	// (0x00024450) scroll_pane_cp5_ParamLimits

0x82a5,	// (0x000250c9) button_value_adjust_pane_cp5_ParamLimits

0x82a5,	// (0x000250c9) button_value_adjust_pane_cp5

0x834a,	// (0x0002516e) form2_midp_time_pane_ParamLimits

0xd5ee,	// (0x0002a412) cell_sct_catagory_button_pane_ParamLimits

0xd5ee,	// (0x0002a412) cell_sct_catagory_button_pane

0x84a6,	// (0x000252ca) bg_button_pane_cp01_ParamLimits

0x84a6,	// (0x000252ca) bg_button_pane_cp01

0x84e1,	// (0x00025305) cell_sct_catagory_button_pane_g1

0xa31f,	// (0x00027143) popup_tb_extension_window

0xf14d,	// (0x0002bf71) aid_size_cell_ext_ParamLimits

0xf14d,	// (0x0002bf71) aid_size_cell_ext

0x5517,	// (0x0002233b) bg_tb_trans_pane_cp1_ParamLimits

0x5517,	// (0x0002233b) bg_tb_trans_pane_cp1

0xf16a,	// (0x0002bf8e) grid_tb_ext_pane_ParamLimits

0xf16a,	// (0x0002bf8e) grid_tb_ext_pane

0xf18e,	// (0x0002bfb2) cell_tb_ext_pane_ParamLimits

0xf18e,	// (0x0002bfb2) cell_tb_ext_pane

0xf1a3,	// (0x0002bfc7) cell_tb_ext_pane_g1_ParamLimits

0xf1a3,	// (0x0002bfc7) cell_tb_ext_pane_g1

0xd600,	// (0x0002a424) cell_tb_ext_pane_t1

0x5517,	// (0x0002233b) list_highlight_pane_cp11_ParamLimits

0x5517,	// (0x0002233b) list_highlight_pane_cp11

0x92c4,	// (0x000260e8) popup_uni_indicator_window_ParamLimits

0x92c4,	// (0x000260e8) popup_uni_indicator_window

0x598f,	// (0x000227b3) bg_popup_sub_pane_cp14

0xd61b,	// (0x0002a43f) list_uniindi_pane

0xd627,	// (0x0002a44b) uniindi_top_pane

0x5517,	// (0x0002233b) bg_uniindi_top_pane

0xd646,	// (0x0002a46a) uniindi_top_pane_g1

0xd65c,	// (0x0002a480) uniindi_top_pane_g2

0x0003,

0xfd40,	// (0x0002cb64) uniindi_top_pane_g

0xd686,	// (0x0002a4aa) uniindi_top_pane_t1

0xd6b0,	// (0x0002a4d4) list_single_uniindi_pane_ParamLimits

0xd6b0,	// (0x0002a4d4) list_single_uniindi_pane

0x84e1,	// (0x00025305) bg_uniindi_top_pane_g1

0xd6c2,	// (0x0002a4e6) list_single_uniindi_pane_g1

0xd6d5,	// (0x0002a4f9) list_single_uniindi_pane_t1

0x9160,	// (0x00025f84) control_bg_pane

0xd6fa,	// (0x0002a51e) bg_sctrl_sk_pane_cp1

0xd703,	// (0x0002a527) bg_sctrl_sk_pane_cp2

0xd70c,	// (0x0002a530) control_bg_pane_g1

0xd715,	// (0x0002a539) control_bg_pane_g2

0x0001,

0xfd49,	// (0x0002cb6d) control_bg_pane_g

0x8181,	// (0x00024fa5) cell_indicator_nsta_pane_g1_ParamLimits

0xb0cb,	// (0x00027eef) cell_indicator_nsta_pane_g2_ParamLimits

0xfab8,	// (0x0002c8dc) cell_indicator_nsta_pane_g_ParamLimits

0xe7a2,	// (0x0002b5c6) form2_midp_time_pane_t1_ParamLimits

0x9f77,	// (0x00026d9b) main_idle_act4_pane_ParamLimits

0x9f77,	// (0x00026d9b) main_idle_act4_pane

0xa31f,	// (0x00027143) popup_tb_extension_window_ParamLimits

0xf182,	// (0x0002bfa6) tb_ext_find_pane_ParamLimits

0xf182,	// (0x0002bfa6) tb_ext_find_pane

0xd71e,	// (0x0002a542) ai_gene_pane_1_cp1

0x64a1,	// (0x000232c5) ai_gene_pane_2_cp1

0xd726,	// (0x0002a54a) list_single_idle_plugin_calendar_pane

0xd72f,	// (0x0002a553) list_single_idle_plugin_notification_pane

0xd738,	// (0x0002a55c) list_single_idle_plugin_player_pane

0xf1c0,	// (0x0002bfe4) list_single_idle_plugin_shortcut_pane_ParamLimits

0xf1c0,	// (0x0002bfe4) list_single_idle_plugin_shortcut_pane

0xf1dc,	// (0x0002c000) main_idle_act4_pane_t1

0xf1ee,	// (0x0002c012) main_idle_act4_pane_t2

0x0001,

0xfd4e,	// (0x0002cb72) main_idle_act4_pane_t

0xf200,	// (0x0002c024) middle_sk_idle_act4_pane_ParamLimits

0xf200,	// (0x0002c024) middle_sk_idle_act4_pane

0xf216,	// (0x0002c03a) popup_clock_digital_analogue_window_cp2

0xf230,	// (0x0002c054) shortcut_wheel_idle_act4_pane_ParamLimits

0xf230,	// (0x0002c054) shortcut_wheel_idle_act4_pane

0x84e1,	// (0x00025305) shortcut_wheel_idle_act4_pane_g1

0x84e1,	// (0x00025305) shortcut_wheel_idle_act4_pane_g2

0x84e1,	// (0x00025305) shortcut_wheel_idle_act4_pane_g3

0x84e1,	// (0x00025305) shortcut_wheel_idle_act4_pane_g4

0x84e1,	// (0x00025305) shortcut_wheel_idle_act4_pane_g5

0xd741,	// (0x0002a565) shortcut_wheel_idle_act4_pane_g6

0xd749,	// (0x0002a56d) shortcut_wheel_idle_act4_pane_g7

0xd751,	// (0x0002a575) shortcut_wheel_idle_act4_pane_g8

0xd759,	// (0x0002a57d) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd53,	// (0x0002cb77) shortcut_wheel_idle_act4_pane_g

0xc6d1,	// (0x000294f5) middle_sk_idle_act4_pane_g1_ParamLimits

0xc6d1,	// (0x000294f5) middle_sk_idle_act4_pane_g1

0xf2a0,	// (0x0002c0c4) middle_sk_idle_act4_pane_g2_ParamLimits

0xf2a0,	// (0x0002c0c4) middle_sk_idle_act4_pane_g2

0x0001,

0xfd76,	// (0x0002cb9a) middle_sk_idle_act4_pane_g_ParamLimits

0xfd76,	// (0x0002cb9a) middle_sk_idle_act4_pane_g

0xf2ac,	// (0x0002c0d0) middle_sk_idle_act4_pane_t1_ParamLimits

0xf2ac,	// (0x0002c0d0) middle_sk_idle_act4_pane_t1

0xf2c9,	// (0x0002c0ed) grid_ai_shortcut_pane_ParamLimits

0xf2c9,	// (0x0002c0ed) grid_ai_shortcut_pane

0xf2e2,	// (0x0002c106) list_highlight_pane_cp16_ParamLimits

0xf2e2,	// (0x0002c106) list_highlight_pane_cp16

0xf2ef,	// (0x0002c113) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xf2ef,	// (0x0002c113) list_single_idle_plugin_shortcut_pane_g1

0xf2fb,	// (0x0002c11f) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xf2fb,	// (0x0002c11f) list_single_idle_plugin_shortcut_pane_g2

0xf313,	// (0x0002c137) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xf313,	// (0x0002c137) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd7b,	// (0x0002cb9f) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd7b,	// (0x0002cb9f) list_single_idle_plugin_shortcut_pane_g

0xf326,	// (0x0002c14a) cell_ai_shortcut_pane_ParamLimits

0xf326,	// (0x0002c14a) cell_ai_shortcut_pane

0xf347,	// (0x0002c16b) cell_ai_shortcut_pane_g1_ParamLimits

0xf347,	// (0x0002c16b) cell_ai_shortcut_pane_g1

0xd71e,	// (0x0002a542) ai_gene_pane_1_cp2

0xd761,	// (0x0002a585) ai_gene_pane_2_cp2

0xd769,	// (0x0002a58d) list_highlight_pane_cp15

0xd772,	// (0x0002a596) list_single_idle_plugin_calendar_pane_g1

0xd769,	// (0x0002a58d) list_highlight_pane_cp17

0xd77a,	// (0x0002a59e) list_single_idle_plugin_calendar_pane_g1_copy1

0xd782,	// (0x0002a5a6) list_single_idle_plugin_player_pane_g1

0x7c30,	// (0x00024a54) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd82,	// (0x0002cba6) list_single_idle_plugin_player_pane_g

0xd78a,	// (0x0002a5ae) list_single_idle_plugin_player_pane_t1

0xd798,	// (0x0002a5bc) list_single_idle_plugin_player_pane_t2

0xd7a6,	// (0x0002a5ca) list_single_idle_plugin_player_pane_t3

0xd7b4,	// (0x0002a5d8) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd87,	// (0x0002cbab) list_single_idle_plugin_player_pane_t

0xd7c2,	// (0x0002a5e6) wait_bar_pane_cp15

0xd7ca,	// (0x0002a5ee) grid_ai_notification_pane

0x7c30,	// (0x00024a54) list_single_idle_plugin_notification_pane_g1

0xf369,	// (0x0002c18d) cell_ai_notification_pane_ParamLimits

0xf369,	// (0x0002c18d) cell_ai_notification_pane

0xd7d3,	// (0x0002a5f7) cell_ai_notification_pane_g1

0xd7db,	// (0x0002a5ff) cell_ai_notification_pane_t1

0xf376,	// (0x0002c19a) tb_ext_find_button_pane

0xf37e,	// (0x0002c1a2) tb_ext_find_pane_g1

0xf386,	// (0x0002c1aa) tb_ext_find_pane_t1

0x5ec3,	// (0x00022ce7) tb_ext_find_button_pane_g1

0xd7e9,	// (0x0002a60d) tb_ext_find_button_pane_g2

0x0001,

0xfd90,	// (0x0002cbb4) tb_ext_find_button_pane_g

0xf1dc,	// (0x0002c000) main_idle_act4_pane_t1_ParamLimits

0xf1ee,	// (0x0002c012) main_idle_act4_pane_t2_ParamLimits

0xfd4e,	// (0x0002cb72) main_idle_act4_pane_t_ParamLimits

0xf216,	// (0x0002c03a) popup_clock_digital_analogue_window_cp2_ParamLimits

0xf224,	// (0x0002c048) sat_plugin_idle_act4_pane_ParamLimits

0xf224,	// (0x0002c048) sat_plugin_idle_act4_pane

0xf394,	// (0x0002c1b8) sat_plugin_idle_act4_pane_t1_ParamLimits

0xf394,	// (0x0002c1b8) sat_plugin_idle_act4_pane_t1

0xf3a7,	// (0x0002c1cb) sat_plugin_idle_act4_pane_t2_ParamLimits

0xf3a7,	// (0x0002c1cb) sat_plugin_idle_act4_pane_t2

0xf3ba,	// (0x0002c1de) sat_plugin_idle_act4_pane_t3_ParamLimits

0xf3ba,	// (0x0002c1de) sat_plugin_idle_act4_pane_t3

0xf3cd,	// (0x0002c1f1) sat_plugin_idle_act4_pane_t4_ParamLimits

0xf3cd,	// (0x0002c1f1) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd95,	// (0x0002cbb9) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd95,	// (0x0002cbb9) sat_plugin_idle_act4_pane_t

0x9225,	// (0x00026049) popup_battery_window_ParamLimits

0x9225,	// (0x00026049) popup_battery_window

0x5517,	// (0x0002233b) bg_popup_sub_pane_cp25_ParamLimits

0x5517,	// (0x0002233b) bg_popup_sub_pane_cp25

0xd7f2,	// (0x0002a616) popup_battery_window_g1_ParamLimits

0xd7f2,	// (0x0002a616) popup_battery_window_g1

0xd7fe,	// (0x0002a622) popup_battery_window_t1_ParamLimits

0xd7fe,	// (0x0002a622) popup_battery_window_t1

0xd810,	// (0x0002a634) popup_battery_window_t2_ParamLimits

0xd810,	// (0x0002a634) popup_battery_window_t2

0x0001,

0xfd9e,	// (0x0002cbc2) popup_battery_window_t_ParamLimits

0xfd9e,	// (0x0002cbc2) popup_battery_window_t

0x9bc4,	// (0x000269e8) midp_canvas_pane_ParamLimits

0x9c20,	// (0x00026a44) midp_keypad_pane_ParamLimits

0x9c20,	// (0x00026a44) midp_keypad_pane

0x5af8,	// (0x0002291c) main_midp_pane_ParamLimits

0x8243,	// (0x00025067) signal_pane_g2_cp_ParamLimits

0xf3e0,	// (0x0002c204) aid_size_cell_midp_keypad_ParamLimits

0xf3e0,	// (0x0002c204) aid_size_cell_midp_keypad

0xf3fa,	// (0x0002c21e) midp_keyp_game_grid_pane_ParamLimits

0xf3fa,	// (0x0002c21e) midp_keyp_game_grid_pane

0xf414,	// (0x0002c238) midp_keyp_rocker_pane_ParamLimits

0xf414,	// (0x0002c238) midp_keyp_rocker_pane

0xf441,	// (0x0002c265) midp_keyp_sk_left_pane_ParamLimits

0xf441,	// (0x0002c265) midp_keyp_sk_left_pane

0xf499,	// (0x0002c2bd) midp_keyp_sk_right_pane_ParamLimits

0xf499,	// (0x0002c2bd) midp_keyp_sk_right_pane

0x5364,	// (0x00022188) bg_button_pane_cp03

0xf4eb,	// (0x0002c30f) midp_keyp_sk_left_pane_g1

0x5364,	// (0x00022188) bg_button_pane_cp04

0xf4eb,	// (0x0002c30f) midp_keyp_sk_right_pane_g1

0x84e1,	// (0x00025305) midp_keyp_rocker_pane_g1

0xf4f4,	// (0x0002c318) keyp_game_cell_pane_ParamLimits

0xf4f4,	// (0x0002c318) keyp_game_cell_pane

0x5364,	// (0x00022188) bg_button_pane_cp02

0xf505,	// (0x0002c329) keyp_game_cell_pane_g1

0x925b,	// (0x0002607f) popup_fep_vkb2_window_ParamLimits

0x925b,	// (0x0002607f) popup_fep_vkb2_window

0xb812,	// (0x00028636) aid_size_cell_vkb2_ParamLimits

0xb812,	// (0x00028636) aid_size_cell_vkb2

0xb866,	// (0x0002868a) popup_fep_vkb2_window_g1_ParamLimits

0xb866,	// (0x0002868a) popup_fep_vkb2_window_g1

0xb8ae,	// (0x000286d2) vkb2_area_bottom_pane_ParamLimits

0xb8ae,	// (0x000286d2) vkb2_area_bottom_pane

0xb8e6,	// (0x0002870a) vkb2_area_keypad_pane_ParamLimits

0xb8e6,	// (0x0002870a) vkb2_area_keypad_pane

0xb91e,	// (0x00028742) vkb2_area_top_pane_ParamLimits

0xb91e,	// (0x00028742) vkb2_area_top_pane

0xb98e,	// (0x000287b2) vkb2_top_entry_pane_ParamLimits

0xb98e,	// (0x000287b2) vkb2_top_entry_pane

0xb9b8,	// (0x000287dc) vkb2_top_grid_left_pane_ParamLimits

0xb9b8,	// (0x000287dc) vkb2_top_grid_left_pane

0xb9d6,	// (0x000287fa) vkb2_top_grid_right_pane_ParamLimits

0xb9d6,	// (0x000287fa) vkb2_top_grid_right_pane

0xb9f4,	// (0x00028818) vkb2_cell_keypad_pane_ParamLimits

0xb9f4,	// (0x00028818) vkb2_cell_keypad_pane

0xbaa5,	// (0x000288c9) vkb2_area_bottom_grid_pane_ParamLimits

0xbaa5,	// (0x000288c9) vkb2_area_bottom_grid_pane

0xbac9,	// (0x000288ed) vkb2_area_bottom_pane_g1_ParamLimits

0xbac9,	// (0x000288ed) vkb2_area_bottom_pane_g1

0xbaed,	// (0x00028911) vkb2_area_bottom_pane_g2_ParamLimits

0xbaed,	// (0x00028911) vkb2_area_bottom_pane_g2

0xbb1b,	// (0x0002893f) vkb2_area_bottom_pane_g3_ParamLimits

0xbb1b,	// (0x0002893f) vkb2_area_bottom_pane_g3

0x0002,

0xfda3,	// (0x0002cbc7) vkb2_area_bottom_pane_g_ParamLimits

0xfda3,	// (0x0002cbc7) vkb2_area_bottom_pane_g

0xbb6c,	// (0x00028990) vkb2_top_cell_left_pane_ParamLimits

0xbb6c,	// (0x00028990) vkb2_top_cell_left_pane

0xf50e,	// (0x0002c332) vkb2_top_entry_pane_g1_ParamLimits

0xf50e,	// (0x0002c332) vkb2_top_entry_pane_g1

0xf51c,	// (0x0002c340) vkb2_top_entry_pane_t1_ParamLimits

0xf51c,	// (0x0002c340) vkb2_top_entry_pane_t1

0xd835,	// (0x0002a659) vkb2_top_entry_pane_t2_ParamLimits

0xd835,	// (0x0002a659) vkb2_top_entry_pane_t2

0xd867,	// (0x0002a68b) vkb2_top_entry_pane_t3_ParamLimits

0xd867,	// (0x0002a68b) vkb2_top_entry_pane_t3

0x0002,

0xfdaa,	// (0x0002cbce) vkb2_top_entry_pane_t_ParamLimits

0xfdaa,	// (0x0002cbce) vkb2_top_entry_pane_t

0xbbb9,	// (0x000289dd) vkb2_top_grid_right_pane_g1_ParamLimits

0xbbb9,	// (0x000289dd) vkb2_top_grid_right_pane_g1

0xbbcf,	// (0x000289f3) vkb2_top_grid_right_pane_g2_ParamLimits

0xbbcf,	// (0x000289f3) vkb2_top_grid_right_pane_g2

0xbbe7,	// (0x00028a0b) vkb2_top_grid_right_pane_g3_ParamLimits

0xbbe7,	// (0x00028a0b) vkb2_top_grid_right_pane_g3

0xbbff,	// (0x00028a23) vkb2_top_grid_right_pane_g4_ParamLimits

0xbbff,	// (0x00028a23) vkb2_top_grid_right_pane_g4

0x0003,

0xfdb1,	// (0x0002cbd5) vkb2_top_grid_right_pane_g_ParamLimits

0xfdb1,	// (0x0002cbd5) vkb2_top_grid_right_pane_g

0xbc15,	// (0x00028a39) vkb2_top_cell_left_pane_g1

0xbc2c,	// (0x00028a50) vkb2_cell_keypad_pane_g1_ParamLimits

0xbc2c,	// (0x00028a50) vkb2_cell_keypad_pane_g1

0xd88b,	// (0x0002a6af) vkb2_cell_keypad_pane_t1_ParamLimits

0xd88b,	// (0x0002a6af) vkb2_cell_keypad_pane_t1

0xbc3a,	// (0x00028a5e) vkb2_cell_bottom_grid_pane_ParamLimits

0xbc3a,	// (0x00028a5e) vkb2_cell_bottom_grid_pane

0xbc73,	// (0x00028a97) vkb2_cell_bottom_grid_pane_g1

0xf244,	// (0x0002c068) aid_call2_pane_cp02

0xf24c,	// (0x0002c070) aid_call_pane_cp02

0xf254,	// (0x0002c078) clock_digital_number_pane_cp10

0xf25c,	// (0x0002c080) clock_digital_number_pane_cp11

0xf264,	// (0x0002c088) clock_digital_number_pane_cp12

0xf26c,	// (0x0002c090) clock_digital_number_pane_cp13

0xf274,	// (0x0002c098) clock_digital_separator_pane_cp10

0x5ec3,	// (0x00022ce7) popup_clock_digital_analogue_window_cp2_g1

0x5ec3,	// (0x00022ce7) popup_clock_digital_analogue_window_cp2_g2

0xf27c,	// (0x0002c0a0) popup_clock_digital_analogue_window_cp2_g3

0x5ec3,	// (0x00022ce7) popup_clock_digital_analogue_window_cp2_g4

0xf27c,	// (0x0002c0a0) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd66,	// (0x0002cb8a) popup_clock_digital_analogue_window_cp2_g

0xf284,	// (0x0002c0a8) popup_clock_digital_analogue_window_cp2_t1

0xf292,	// (0x0002c0b6) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd71,	// (0x0002cb95) popup_clock_digital_analogue_window_cp2_t

0x84e1,	// (0x00025305) clock_digital_number_pane_cp10_g1

0x84e1,	// (0x00025305) clock_digital_number_pane_cp10_g2

0x0001,

0xfb54,	// (0x0002c978) clock_digital_number_pane_cp10_g

0x84e1,	// (0x00025305) clock_digital_separator_pane_cp10_g1

0x84e1,	// (0x00025305) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb54,	// (0x0002c978) clock_digital_separator_pane_cp10_g

0xd668,	// (0x0002a48c) uniindi_top_pane_g3

0xd679,	// (0x0002a49d) uniindi_top_pane_g4

0xba5f,	// (0x00028883) vkb2_row_keypad_pane_ParamLimits

0xba5f,	// (0x00028883) vkb2_row_keypad_pane

0xbc8f,	// (0x00028ab3) vkb2_cell_t_keypad_pane_ParamLimits

0xbc8f,	// (0x00028ab3) vkb2_cell_t_keypad_pane

0xbc9c,	// (0x00028ac0) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0xbc9c,	// (0x00028ac0) vkb2_cell_t_keypad_pane_cp08

0xbcac,	// (0x00028ad0) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0xbcac,	// (0x00028ad0) vkb2_cell_t_keypad_pane_cp09

0xbcbd,	// (0x00028ae1) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0xbcbd,	// (0x00028ae1) vkb2_cell_t_keypad_pane_cp01

0xbccd,	// (0x00028af1) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0xbccd,	// (0x00028af1) vkb2_cell_t_keypad_pane_cp02

0xbcdd,	// (0x00028b01) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0xbcdd,	// (0x00028b01) vkb2_cell_t_keypad_pane_cp03

0xbced,	// (0x00028b11) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0xbced,	// (0x00028b11) vkb2_cell_t_keypad_pane_cp04

0xbcfd,	// (0x00028b21) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0xbcfd,	// (0x00028b21) vkb2_cell_t_keypad_pane_cp05

0xbd0d,	// (0x00028b31) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0xbd0d,	// (0x00028b31) vkb2_cell_t_keypad_pane_cp06

0xbd1d,	// (0x00028b41) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0xbd1d,	// (0x00028b41) vkb2_cell_t_keypad_pane_cp07

0xbd2d,	// (0x00028b51) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0xbd2d,	// (0x00028b51) vkb2_cell_t_keypad_pane_cp10

0xb553,	// (0x00028377) vkb2_cell_t_keypad_pane_g1

0xd8a2,	// (0x0002a6c6) vkb2_cell_t_keypad_pane_t1

0x9160,	// (0x00025f84) popup_grid_graphic2_window

0x0014,	// (0x0001ce38) aid_size_cell_graphic2_ParamLimits

0x0014,	// (0x0001ce38) aid_size_cell_graphic2

0x004c,	// (0x0001ce70) bg_popup_window_pane_cp21_ParamLimits

0x004c,	// (0x0001ce70) bg_popup_window_pane_cp21

0x005a,	// (0x0001ce7e) graphic2_pages_pane_ParamLimits

0x005a,	// (0x0001ce7e) graphic2_pages_pane

0x0094,	// (0x0001ceb8) grid_graphic2_control_pane_ParamLimits

0x0094,	// (0x0001ceb8) grid_graphic2_control_pane

0x00ca,	// (0x0001ceee) grid_graphic2_pane_ParamLimits

0x00ca,	// (0x0001ceee) grid_graphic2_pane

0x012a,	// (0x0001cf4e) cell_graphic2_pane

0x9160,	// (0x00025f84) main_comp_mode_pane

0xd2e3,	// (0x0002a107) list_ai3_gene_pane_ParamLimits

0xf038,	// (0x0002be5c) bg_popup_window_pane_cp19_ParamLimits

0xd454,	// (0x0002a278) bg_touch_area_indi_pane_ParamLimits

0xd454,	// (0x0002a278) bg_touch_area_indi_pane

0xd46a,	// (0x0002a28e) bg_touch_area_indi_pane_cp01_ParamLimits

0xd46a,	// (0x0002a28e) bg_touch_area_indi_pane_cp01

0xd480,	// (0x0002a2a4) bg_touch_area_indi_pane_cp02_ParamLimits

0xd480,	// (0x0002a2a4) bg_touch_area_indi_pane_cp02

0xd496,	// (0x0002a2ba) bg_touch_area_indi_pane_cp03_ParamLimits

0xd496,	// (0x0002a2ba) bg_touch_area_indi_pane_cp03

0xd4ac,	// (0x0002a2d0) popup_slider_window_g1_ParamLimits

0xd4c8,	// (0x0002a2ec) popup_slider_window_g2_ParamLimits

0xd4e4,	// (0x0002a308) popup_slider_window_g3_ParamLimits

0xfcfb,	// (0x0002cb1f) popup_slider_window_g_ParamLimits

0xd500,	// (0x0002a324) popup_slider_window_t1_ParamLimits

0xd544,	// (0x0002a368) small_volume_slider_vertical_pane_ParamLimits

0x012a,	// (0x0001cf4e) cell_graphic2_pane_ParamLimits

0x0167,	// (0x0001cf8b) bg_button_pane_cp10_ParamLimits

0x0167,	// (0x0001cf8b) bg_button_pane_cp10

0x017a,	// (0x0001cf9e) bg_button_pane_cp11_ParamLimits

0x017a,	// (0x0001cf9e) bg_button_pane_cp11

0x018d,	// (0x0001cfb1) graphic2_pages_pane_g1_ParamLimits

0x018d,	// (0x0001cfb1) graphic2_pages_pane_g1

0x01a8,	// (0x0001cfcc) graphic2_pages_pane_g2_ParamLimits

0x01a8,	// (0x0001cfcc) graphic2_pages_pane_g2

0x0001,

0xfdbf,	// (0x0002cbe3) graphic2_pages_pane_g_ParamLimits

0xfdbf,	// (0x0002cbe3) graphic2_pages_pane_g

0x01c0,	// (0x0001cfe4) graphic2_pages_pane_t1_ParamLimits

0x01c0,	// (0x0001cfe4) graphic2_pages_pane_t1

0x01d6,	// (0x0001cffa) cell_graphic2_control_pane_ParamLimits

0x01d6,	// (0x0001cffa) cell_graphic2_control_pane

0x01f2,	// (0x0001d016) cell_graphic2_pane_g1_ParamLimits

0x01f2,	// (0x0001d016) cell_graphic2_pane_g1

0x01ff,	// (0x0001d023) cell_graphic2_pane_g2_ParamLimits

0x01ff,	// (0x0001d023) cell_graphic2_pane_g2

0x020c,	// (0x0001d030) cell_graphic2_pane_g3_ParamLimits

0x020c,	// (0x0001d030) cell_graphic2_pane_g3

0x0219,	// (0x0001d03d) cell_graphic2_pane_g4_ParamLimits

0x0219,	// (0x0001d03d) cell_graphic2_pane_g4

0x0226,	// (0x0001d04a) cell_graphic2_pane_g5_ParamLimits

0x0226,	// (0x0001d04a) cell_graphic2_pane_g5

0x0004,

0xfdc4,	// (0x0002cbe8) cell_graphic2_pane_g_ParamLimits

0xfdc4,	// (0x0002cbe8) cell_graphic2_pane_g

0x0241,	// (0x0001d065) cell_graphic2_pane_t1_ParamLimits

0x0241,	// (0x0001d065) cell_graphic2_pane_t1

0x6844,	// (0x00023668) grid_highlight_pane_cp11_ParamLimits

0x6844,	// (0x00023668) grid_highlight_pane_cp11

0x5517,	// (0x0002233b) bg_button_pane_cp05

0x0278,	// (0x0001d09c) cell_graphic2_control_pane_g1

0x84e1,	// (0x00025305) bg_touch_area_indi_pane_g1

0xd8b4,	// (0x0002a6d8) aid_cmod_rocker_key_size

0xd8be,	// (0x0002a6e2) aid_cmode_itu_key_size

0xd8c8,	// (0x0002a6ec) main_cmode_video_pane

0xd8d0,	// (0x0002a6f4) main_comp_mode_itu_pane

0xd8da,	// (0x0002a6fe) main_comp_mode_rocker_pane

0xd8e2,	// (0x0002a706) cell_cmode_rocker_pane_ParamLimits

0xd8e2,	// (0x0002a706) cell_cmode_rocker_pane

0xd8f4,	// (0x0002a718) cell_cmode_itu_pane_ParamLimits

0xd8f4,	// (0x0002a718) cell_cmode_itu_pane

0x598f,	// (0x000227b3) bg_button_pane_cp06_ParamLimits

0x598f,	// (0x000227b3) bg_button_pane_cp06

0xc6d1,	// (0x000294f5) cell_cmode_rocker_pane_g1_ParamLimits

0xc6d1,	// (0x000294f5) cell_cmode_rocker_pane_g1

0xd57b,	// (0x0002a39f) cell_cmode_rocker_pane_g2_ParamLimits

0xd57b,	// (0x0002a39f) cell_cmode_rocker_pane_g2

0x0001,

0xfdd4,	// (0x0002cbf8) cell_cmode_rocker_pane_g_ParamLimits

0xfdd4,	// (0x0002cbf8) cell_cmode_rocker_pane_g

0x5364,	// (0x00022188) bg_button_pane_cp07

0xd909,	// (0x0002a72d) cell_cmode_itu_pane_g1

0xd912,	// (0x0002a736) cell_cmode_itu_pane_t1

0xd920,	// (0x0002a744) cell_cmode_itu_pane_t2

0x0001,

0xfdd9,	// (0x0002cbfd) cell_cmode_itu_pane_t

0xd6ea,	// (0x0002a50e) aid_touch_ctrl_left

0xd6f2,	// (0x0002a516) aid_touch_ctrl_right

0x5364,	// (0x00022188) compa_mode_pane

0x02a0,	// (0x0001d0c4) aid_cmod_rocker_key_size_cp

0x02aa,	// (0x0001d0ce) aid_cmode_itu_key_size_cp

0xd92e,	// (0x0002a752) compa_mode_pane_g1

0xd936,	// (0x0002a75a) compa_mode_pane_g2

0xd93e,	// (0x0002a762) compa_mode_pane_g3

0x0002,

0xfdde,	// (0x0002cc02) compa_mode_pane_g

0x02b4,	// (0x0001d0d8) main_comp_mode_itu_pane_cp

0x02bc,	// (0x0001d0e0) main_comp_mode_rocker_pane_cp

0x02c4,	// (0x0001d0e8) cell_cmode_itu_pane_cp_ParamLimits

0x02c4,	// (0x0001d0e8) cell_cmode_itu_pane_cp

0x02d9,	// (0x0001d0fd) cell_cmode_rocker_pane_cp_ParamLimits

0x02d9,	// (0x0001d0fd) cell_cmode_rocker_pane_cp

0x598f,	// (0x000227b3) bg_button_pane_cp06_cp_ParamLimits

0x598f,	// (0x000227b3) bg_button_pane_cp06_cp

0xc6d1,	// (0x000294f5) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc6d1,	// (0x000294f5) cell_cmode_rocker_pane_g1_cp

0x84e1,	// (0x00025305) cell_cmode_rocker_pane_g2_cp

0x5364,	// (0x00022188) bg_button_pane_cp07_cp

0x02eb,	// (0x0001d10f) cell_cmode_itu_pane_g1_cp

0x02f4,	// (0x0001d118) cell_cmode_itu_pane_t1_cp

0x02f4,	// (0x0001d118) cell_cmode_itu_pane_t2_cp

0xadaa,	// (0x00027bce) settings_code_pane_cp2

0x53e4,	// (0x00022208) bg_popup_window_pane_cp3_ParamLimits

0x56ef,	// (0x00022513) heading_pane_cp3_ParamLimits

0x56fb,	// (0x0002251f) listscroll_popup_graphic_pane_ParamLimits

0xb30e,	// (0x00028132) fep_hwr_aid_pane_ParamLimits

0xb76d,	// (0x00028591) aid_touch_sctrl_top_ParamLimits

0xb788,	// (0x000285ac) sctrl_sk_top_pane_g1_ParamLimits

0xb553,	// (0x00028377) sctrl_sk_top_pane_g2_ParamLimits

0xfd14,	// (0x0002cb38) sctrl_sk_top_pane_g_ParamLimits

0xb795,	// (0x000285b9) sctrl_sk_top_pane_t1_ParamLimits

0xb76d,	// (0x00028591) aid_touch_sctrl_bottom_ParamLimits

0xb795,	// (0x000285b9) sctrl_sk_bottom_pane_t1_ParamLimits

0xd634,	// (0x0002a458) aid_area_touch_clock

0xb956,	// (0x0002877a) aid_vkb2_area_top_pane_cell_ParamLimits

0xb956,	// (0x0002877a) aid_vkb2_area_top_pane_cell

0xba81,	// (0x000288a5) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xba81,	// (0x000288a5) aid_vkb2_area_bottom_pane_cell

0xd82d,	// (0x0002a651) popup_char_count_window

0xd946,	// (0x0002a76a) popup_char_count_window_g1

0xd94f,	// (0x0002a773) popup_char_count_window_g2

0xd958,	// (0x0002a77c) popup_char_count_window_g3

0x0002,

0xfde5,	// (0x0002cc09) popup_char_count_window_g

0xd961,	// (0x0002a785) popup_char_count_window_t1

0xb844,	// (0x00028668) popup_fep_char_preview_window_ParamLimits

0xb844,	// (0x00028668) popup_fep_char_preview_window

0xb974,	// (0x00028798) vkb2_top_candi_pane_ParamLimits

0xb974,	// (0x00028798) vkb2_top_candi_pane

0x0302,	// (0x0001d126) cell_vkb2_top_candi_pane_ParamLimits

0x0302,	// (0x0001d126) cell_vkb2_top_candi_pane

0xbd42,	// (0x00028b66) bg_popup_fep_char_preview_window_ParamLimits

0xbd42,	// (0x00028b66) bg_popup_fep_char_preview_window

0xbd50,	// (0x00028b74) popup_fep_char_preview_window_t1_ParamLimits

0xbd50,	// (0x00028b74) popup_fep_char_preview_window_t1

0xd96f,	// (0x0002a793) bg_popup_fep_char_preview_window_g1

0xd977,	// (0x0002a79b) bg_popup_fep_char_preview_window_g2

0xd97f,	// (0x0002a7a3) bg_popup_fep_char_preview_window_g3

0xd987,	// (0x0002a7ab) bg_popup_fep_char_preview_window_g4

0xd98f,	// (0x0002a7b3) bg_popup_fep_char_preview_window_g5

0xbd8a,	// (0x00028bae) bg_popup_fep_char_preview_window_g6

0xd997,	// (0x0002a7bb) bg_popup_fep_char_preview_window_g7

0xd99f,	// (0x0002a7c3) bg_popup_fep_char_preview_window_g8

0xd9a7,	// (0x0002a7cb) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdec,	// (0x0002cc10) bg_popup_fep_char_preview_window_g

0xb553,	// (0x00028377) cell_vkb2_top_candi_pane_g1_ParamLimits

0xb553,	// (0x00028377) cell_vkb2_top_candi_pane_g1

0xb561,	// (0x00028385) cell_vkb2_top_candi_pane_g2_ParamLimits

0xb561,	// (0x00028385) cell_vkb2_top_candi_pane_g2

0xc900,	// (0x00029724) cell_vkb2_top_candi_pane_g3_ParamLimits

0xc900,	// (0x00029724) cell_vkb2_top_candi_pane_g3

0xbd92,	// (0x00028bb6) cell_vkb2_top_candi_pane_g4_ParamLimits

0xbd92,	// (0x00028bb6) cell_vkb2_top_candi_pane_g4

0xcab3,	// (0x000298d7) cell_vkb2_top_candi_pane_g5_ParamLimits

0xcab3,	// (0x000298d7) cell_vkb2_top_candi_pane_g5

0xbdb3,	// (0x00028bd7) cell_vkb2_top_candi_pane_g6_ParamLimits

0xbdb3,	// (0x00028bd7) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdff,	// (0x0002cc23) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdff,	// (0x0002cc23) cell_vkb2_top_candi_pane_g

0xbdc1,	// (0x00028be5) cell_vkb2_top_candi_pane_t1

0xabed,	// (0x00027a11) aid_size_touch_slider_mark_ParamLimits

0xabed,	// (0x00027a11) aid_size_touch_slider_mark

0x0088,	// (0x0001ceac) grid_graphic2_catg_pane_ParamLimits

0x0088,	// (0x0001ceac) grid_graphic2_catg_pane

0x0106,	// (0x0001cf2a) popup_grid_graphic2_window_t1_ParamLimits

0x0106,	// (0x0001cf2a) popup_grid_graphic2_window_t1

0x0118,	// (0x0001cf3c) popup_grid_graphic2_window_t2_ParamLimits

0x0118,	// (0x0001cf3c) popup_grid_graphic2_window_t2

0x0001,

0xfdba,	// (0x0002cbde) popup_grid_graphic2_window_t_ParamLimits

0xfdba,	// (0x0002cbde) popup_grid_graphic2_window_t

0x5517,	// (0x0002233b) bg_button_pane_cp05_ParamLimits

0x0278,	// (0x0001d09c) cell_graphic2_control_pane_g1_ParamLimits

0x03bc,	// (0x0001d1e0) cell_graphic2_catg_pane_ParamLimits

0x03bc,	// (0x0001d1e0) cell_graphic2_catg_pane

0x5364,	// (0x00022188) bg_button_pane_cp12

0x03ce,	// (0x0001d1f2) cell_graphic2_catg_pane_g1

0xd600,	// (0x0002a424) cell_tb_ext_pane_t1_ParamLimits

0xbb8c,	// (0x000289b0) vkb2_top_cell_right_narrow_pane_ParamLimits

0xbb8c,	// (0x000289b0) vkb2_top_cell_right_narrow_pane

0xbba4,	// (0x000289c8) vkb2_top_cell_right_wide_pane_ParamLimits

0xbba4,	// (0x000289c8) vkb2_top_cell_right_wide_pane

0xb300,	// (0x00028124) bg_vkb2_func_pane_ParamLimits

0xb300,	// (0x00028124) bg_vkb2_func_pane

0xbc15,	// (0x00028a39) vkb2_top_cell_left_pane_g1_ParamLimits

0xb300,	// (0x00028124) bg_vkb2_fuc_pane_cp03_ParamLimits

0xb300,	// (0x00028124) bg_vkb2_fuc_pane_cp03

0xbc73,	// (0x00028a97) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x67c8,	// (0x000235ec) bg_vkb2_func_pane_g1

0x67c0,	// (0x000235e4) bg_vkb2_func_pane_g2

0x67d0,	// (0x000235f4) bg_vkb2_func_pane_g3

0x67d8,	// (0x000235fc) bg_vkb2_func_pane_g4

0x67e0,	// (0x00023604) bg_vkb2_func_pane_g5

0x67e8,	// (0x0002360c) bg_vkb2_func_pane_g6

0x67f8,	// (0x0002361c) bg_vkb2_func_pane_g7

0x67f0,	// (0x00023614) bg_vkb2_func_pane_g8

0x67b8,	// (0x000235dc) bg_vkb2_func_pane_g9

0x0008,

0xfe0c,	// (0x0002cc30) bg_vkb2_func_pane_g

0xb300,	// (0x00028124) bg_vkb2_fuc_pane_cp01_ParamLimits

0xb300,	// (0x00028124) bg_vkb2_fuc_pane_cp01

0xbc15,	// (0x00028a39) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0xbc15,	// (0x00028a39) vkb2_top_cell_right_wide_pane_g1

0xb300,	// (0x00028124) bg_vkb2_fuc_pane_cp02_ParamLimits

0xb300,	// (0x00028124) bg_vkb2_fuc_pane_cp02

0xbc73,	// (0x00028a97) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0xbc73,	// (0x00028a97) vkb2_top_cell_right_narrow_pane_g1

0xefca,	// (0x0002bdee) aid_touch_area_decrease_ParamLimits

0xefca,	// (0x0002bdee) aid_touch_area_decrease

0xefe2,	// (0x0002be06) aid_touch_area_increase_ParamLimits

0xefe2,	// (0x0002be06) aid_touch_area_increase

0xefee,	// (0x0002be12) aid_touch_area_mute_ParamLimits

0xefee,	// (0x0002be12) aid_touch_area_mute

0xf00a,	// (0x0002be2e) aid_touch_area_slider_ParamLimits

0xf00a,	// (0x0002be2e) aid_touch_area_slider

0xf044,	// (0x0002be68) popup_slider_window_g4_ParamLimits

0xf044,	// (0x0002be68) popup_slider_window_g4

0xf050,	// (0x0002be74) popup_slider_window_g5_ParamLimits

0xf050,	// (0x0002be74) popup_slider_window_g5

0xf072,	// (0x0002be96) popup_slider_window_g6_ParamLimits

0xf072,	// (0x0002be96) popup_slider_window_g6

0xd52c,	// (0x0002a350) popup_slider_window_t2_ParamLimits

0xd52c,	// (0x0002a350) popup_slider_window_t2

0x0001,

0xfd08,	// (0x0002cb2c) popup_slider_window_t_ParamLimits

0xfd08,	// (0x0002cb2c) popup_slider_window_t

0xf084,	// (0x0002bea8) slider_pane_ParamLimits

0xf084,	// (0x0002bea8) slider_pane

0xd9af,	// (0x0002a7d3) slider_pane_g1_ParamLimits

0xd9af,	// (0x0002a7d3) slider_pane_g1

0xd9c3,	// (0x0002a7e7) slider_pane_g2_ParamLimits

0xd9c3,	// (0x0002a7e7) slider_pane_g2

0xd9d9,	// (0x0002a7fd) slider_pane_g3_ParamLimits

0xd9d9,	// (0x0002a7fd) slider_pane_g3

0x0003,

0xfe1f,	// (0x0002cc43) slider_pane_g_ParamLimits

0xfe1f,	// (0x0002cc43) slider_pane_g

0xa36b,	// (0x0002718f) popup_tb_float_extension_window_ParamLimits

0xa36b,	// (0x0002718f) popup_tb_float_extension_window

0xda05,	// (0x0002a829) aid_size_cell_tb_float_ext

0x5364,	// (0x00022188) bg_popup_sub_window_cp28

0xda10,	// (0x0002a834) grid_tb_float_ext_pane

0xda18,	// (0x0002a83c) cell_tb_float_ext_pane_ParamLimits

0xda18,	// (0x0002a83c) cell_tb_float_ext_pane

0xda30,	// (0x0002a854) cell_tb_float_ext_pane_g1

0xda39,	// (0x0002a85d) grid_highlight_pane_cp12

0xb449,	// (0x0002826d) cell_last_hwr_side_pane_ParamLimits

0xb449,	// (0x0002826d) cell_last_hwr_side_pane

0x84e1,	// (0x00025305) cell_last_hwr_side_pane_g1

0xda42,	// (0x0002a866) cell_last_hwr_side_pane_g2

0x0001,

0xfe28,	// (0x0002cc4c) cell_last_hwr_side_pane_g

0xbb49,	// (0x0002896d) vkb2_area_bottom_space_btn_pane_ParamLimits

0xbb49,	// (0x0002896d) vkb2_area_bottom_space_btn_pane

0xb553,	// (0x00028377) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xd8a2,	// (0x0002a6c6) vkb2_cell_t_keypad_pane_t1_ParamLimits

0xbdc1,	// (0x00028be5) cell_vkb2_top_candi_pane_t1_ParamLimits

0xbddf,	// (0x00028c03) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0xbddf,	// (0x00028c03) vkb2_area_bottom_space_btn_pane_g1

0xbe15,	// (0x00028c39) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0xbe15,	// (0x00028c39) vkb2_area_bottom_space_btn_pane_g2

0xbe4b,	// (0x00028c6f) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0xbe4b,	// (0x00028c6f) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe2d,	// (0x0002cc51) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe2d,	// (0x0002cc51) vkb2_area_bottom_space_btn_pane_g

0xb3bd,	// (0x000281e1) cel_fep_hwr_func_pane_ParamLimits

0xb3bd,	// (0x000281e1) cel_fep_hwr_func_pane

0xb3f9,	// (0x0002821d) cell_hwr_side_button_pane_ParamLimits

0xb3f9,	// (0x0002821d) cell_hwr_side_button_pane

0xd634,	// (0x0002a458) aid_area_touch_clock_ParamLimits

0x5517,	// (0x0002233b) bg_uniindi_top_pane_ParamLimits

0xd646,	// (0x0002a46a) uniindi_top_pane_g1_ParamLimits

0xd65c,	// (0x0002a480) uniindi_top_pane_g2_ParamLimits

0xd668,	// (0x0002a48c) uniindi_top_pane_g3_ParamLimits

0xd679,	// (0x0002a49d) uniindi_top_pane_g4_ParamLimits

0xfd40,	// (0x0002cb64) uniindi_top_pane_g_ParamLimits

0xd686,	// (0x0002a4aa) uniindi_top_pane_t1_ParamLimits

0x5517,	// (0x0002233b) bg_vkb2_func_pane_cp01_ParamLimits

0x5517,	// (0x0002233b) bg_vkb2_func_pane_cp01

0xda4b,	// (0x0002a86f) cel_fep_hwr_func_pane_g1_ParamLimits

0xda4b,	// (0x0002a86f) cel_fep_hwr_func_pane_g1

0x5517,	// (0x0002233b) bg_vkb2_func_pane_cp02_ParamLimits

0x5517,	// (0x0002233b) bg_vkb2_func_pane_cp02

0xda4b,	// (0x0002a86f) cell_hwr_side_button_pane_g1_ParamLimits

0xda4b,	// (0x0002a86f) cell_hwr_side_button_pane_g1

0x66d2,	// (0x000234f6) status_pane_g4_ParamLimits

0x66d2,	// (0x000234f6) status_pane_g4

0x66ea,	// (0x0002350e) status_pane_t1

0x8372,	// (0x00025196) form2_midp_gauge_slider_cont_pane

0x837a,	// (0x0002519e) form2_midp_gauge_slider_pane_t1_ParamLimits

0xb25f,	// (0x00028083) form2_midp_gauge_slider_pane_t2_ParamLimits

0xb271,	// (0x00028095) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb07,	// (0x0002c92b) form2_midp_gauge_slider_pane_t_ParamLimits

0x838c,	// (0x000251b0) form2_midp_slider_pane_ParamLimits

0xb804,	// (0x00028628) aid_size_cell_func_vkb2_ParamLimits

0xb804,	// (0x00028628) aid_size_cell_func_vkb2

0xd9f1,	// (0x0002a815) slider_pane_g4_ParamLimits

0xd9f1,	// (0x0002a815) slider_pane_g4

0xbe91,	// (0x00028cb5) form2_midp_gauge_slider_pane_t2_cp01

0xbe9f,	// (0x00028cc3) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xbe9f,	// (0x00028cc3) form2_midp_gauge_slider_pane_t3_cp01

0xbebc,	// (0x00028ce0) form2_midp_slider_pane_cp01

0x5364,	// (0x00022188) navi_smil_pane

0xda7b,	// (0x0002a89f) navi_smil_pane_g1

0xda83,	// (0x0002a8a7) navi_smil_pane_t1

0xda59,	// (0x0002a87d) form2_midp_slider_pane_g1

0xda62,	// (0x0002a886) form2_midp_slider_pane_g2

0xda6a,	// (0x0002a88e) form2_midp_slider_pane_g3

0xda59,	// (0x0002a87d) form2_midp_slider_pane_g4

0x04bd,	// (0x0001d2e1) form2_midp_slider_pane_g5

0x0004,

0xfe36,	// (0x0002cc5a) form2_midp_slider_pane_g

0xbe81,	// (0x00028ca5) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0xbe81,	// (0x00028ca5) vkb2_area_bottom_space_btn_pane_g4

0xa50b,	// (0x0002732f) lc0_navi_pane_ParamLimits

0xa50b,	// (0x0002732f) lc0_navi_pane

0xa581,	// (0x000273a5) lc0_stat_indi_pane_ParamLimits

0xa581,	// (0x000273a5) lc0_stat_indi_pane

0xa598,	// (0x000273bc) ls0_title_pane_ParamLimits

0xa598,	// (0x000273bc) ls0_title_pane

0x598f,	// (0x000227b3) bg_popup_sub_pane_cp14_ParamLimits

0xd61b,	// (0x0002a43f) list_uniindi_pane_ParamLimits

0xd627,	// (0x0002a44b) uniindi_top_pane_ParamLimits

0xd6c2,	// (0x0002a4e6) list_single_uniindi_pane_g1_ParamLimits

0xd6d5,	// (0x0002a4f9) list_single_uniindi_pane_t1_ParamLimits

0xbec5,	// (0x00028ce9) lc0_stat_clock_pane_ParamLimits

0xbec5,	// (0x00028ce9) lc0_stat_clock_pane

0x04e0,	// (0x0001d304) lc0_stat_indi_pane_g1_ParamLimits

0x04e0,	// (0x0001d304) lc0_stat_indi_pane_g1

0x04d3,	// (0x0001d2f7) lc0_stat_indi_pane_g2_ParamLimits

0x04d3,	// (0x0001d2f7) lc0_stat_indi_pane_g2

0x0001,

0xfe41,	// (0x0002cc65) lc0_stat_indi_pane_g_ParamLimits

0xfe41,	// (0x0002cc65) lc0_stat_indi_pane_g

0xbed2,	// (0x00028cf6) lc0_uni_indicator_pane_ParamLimits

0xbed2,	// (0x00028cf6) lc0_uni_indicator_pane

0xda91,	// (0x0002a8b5) ls0_title_pane_g1_ParamLimits

0xda91,	// (0x0002a8b5) ls0_title_pane_g1

0x04fa,	// (0x0001d31e) ls0_title_pane_t1_ParamLimits

0x04fa,	// (0x0001d31e) ls0_title_pane_t1

0xbedf,	// (0x00028d03) lc0_uni_indicator_pane_g1_ParamLimits

0xbedf,	// (0x00028d03) lc0_uni_indicator_pane_g1

0xdaa5,	// (0x0002a8c9) lc0_stat_clock_pane_t1

0x9160,	// (0x00025f84) main_ai5_pane

0xdab3,	// (0x0002a8d7) ai5_sk_pane_ParamLimits

0xdab3,	// (0x0002a8d7) ai5_sk_pane

0x0542,	// (0x0001d366) cell_ai5_widget_pane_ParamLimits

0x0542,	// (0x0001d366) cell_ai5_widget_pane

0xdac0,	// (0x0002a8e4) aid_size_cell_widget_grid

0xdace,	// (0x0002a8f2) bg_ai5_widget_pane_ParamLimits

0xdace,	// (0x0002a8f2) bg_ai5_widget_pane

0xdb22,	// (0x0002a946) cell_ai5_widget_pane_g2

0xdb32,	// (0x0002a956) cell_ai5_widget_pane_g3

0xdb49,	// (0x0002a96d) cell_ai5_widget_pane_g4

0xdb55,	// (0x0002a979) cell_ai5_widget_pane_g5

0xdb61,	// (0x0002a985) cell_ai5_widget_pane_g6

0xdb6d,	// (0x0002a991) cell_ai5_widget_pane_g7

0xdbb5,	// (0x0002a9d9) cell_ai5_widget_pane_t1_ParamLimits

0xdbb5,	// (0x0002a9d9) cell_ai5_widget_pane_t1

0xdbd2,	// (0x0002a9f6) cell_ai5_widget_pane_t2_ParamLimits

0xdbd2,	// (0x0002a9f6) cell_ai5_widget_pane_t2

0xdbea,	// (0x0002aa0e) cell_ai5_widget_pane_t3_ParamLimits

0xdbea,	// (0x0002aa0e) cell_ai5_widget_pane_t3

0xdc02,	// (0x0002aa26) cell_ai5_widget_pane_t4_ParamLimits

0xdc02,	// (0x0002aa26) cell_ai5_widget_pane_t4

0xdc1f,	// (0x0002aa43) cell_ai5_widget_pane_t5_ParamLimits

0xdc1f,	// (0x0002aa43) cell_ai5_widget_pane_t5

0xdc3e,	// (0x0002aa62) cell_ai5_widget_pane_t6_ParamLimits

0xdc3e,	// (0x0002aa62) cell_ai5_widget_pane_t6

0xdc50,	// (0x0002aa74) cell_ai5_widget_pane_t7_ParamLimits

0xdc50,	// (0x0002aa74) cell_ai5_widget_pane_t7

0xdc69,	// (0x0002aa8d) cell_ai5_widget_pane_t8_ParamLimits

0xdc69,	// (0x0002aa8d) cell_ai5_widget_pane_t8

0x0009,

0xfe5b,	// (0x0002cc7f) cell_ai5_widget_pane_t_ParamLimits

0xfe5b,	// (0x0002cc7f) cell_ai5_widget_pane_t

0xdcbd,	// (0x0002aae1) grid_ai5_widget_pane

0x598f,	// (0x000227b3) highlight_cell_ai5_widget_pane_ParamLimits

0x598f,	// (0x000227b3) highlight_cell_ai5_widget_pane

0x05aa,	// (0x0001d3ce) ai5_sk_left_pane

0x05b4,	// (0x0001d3d8) ai5_sk_middle_pane

0x05be,	// (0x0001d3e2) ai5_sk_right_pane

0xdcc9,	// (0x0002aaed) bg_ai5_widget_pane_g1_ParamLimits

0xdcc9,	// (0x0002aaed) bg_ai5_widget_pane_g1

0xdcd5,	// (0x0002aaf9) bg_ai5_widget_pane_g2_ParamLimits

0xdcd5,	// (0x0002aaf9) bg_ai5_widget_pane_g2

0xdce1,	// (0x0002ab05) bg_ai5_widget_pane_g3_ParamLimits

0xdce1,	// (0x0002ab05) bg_ai5_widget_pane_g3

0xdced,	// (0x0002ab11) bg_ai5_widget_pane_g4_ParamLimits

0xdced,	// (0x0002ab11) bg_ai5_widget_pane_g4

0xdcf9,	// (0x0002ab1d) bg_ai5_widget_pane_g5_ParamLimits

0xdcf9,	// (0x0002ab1d) bg_ai5_widget_pane_g5

0xdd05,	// (0x0002ab29) bg_ai5_widget_pane_g6_ParamLimits

0xdd05,	// (0x0002ab29) bg_ai5_widget_pane_g6

0xdd11,	// (0x0002ab35) bg_ai5_widget_pane_g7_ParamLimits

0xdd11,	// (0x0002ab35) bg_ai5_widget_pane_g7

0xdd1d,	// (0x0002ab41) bg_ai5_widget_pane_g8_ParamLimits

0xdd1d,	// (0x0002ab41) bg_ai5_widget_pane_g8

0xdd29,	// (0x0002ab4d) bg_ai5_widget_pane_g9_ParamLimits

0xdd29,	// (0x0002ab4d) bg_ai5_widget_pane_g9

0x0008,

0xfe70,	// (0x0002cc94) bg_ai5_widget_pane_g_ParamLimits

0xfe70,	// (0x0002cc94) bg_ai5_widget_pane_g

0xdd5b,	// (0x0002ab7f) cell_shortcut_ai5_widget_pane_ParamLimits

0xdd5b,	// (0x0002ab7f) cell_shortcut_ai5_widget_pane

0x640d,	// (0x00023231) bg_cell_shortcut_ai5_widget_pane

0xdd6c,	// (0x0002ab90) cell_grid_ai5_widget_pane_g1

0x640d,	// (0x00023231) highlight_cell_shortcut_ai5_widget_pane

0x67c8,	// (0x000235ec) ai5_sk_left_pane_g1

0xdd75,	// (0x0002ab99) ai5_sk_left_pane_g2

0xdd7d,	// (0x0002aba1) ai5_sk_left_pane_g3

0xdd85,	// (0x0002aba9) ai5_sk_left_pane_g4

0x0003,

0xfe83,	// (0x0002cca7) ai5_sk_left_pane_g

0xdd8d,	// (0x0002abb1) ai5_sk_left_pane_t1

0x67c0,	// (0x000235e4) ai5_sk_right_pane_g1

0xdd9b,	// (0x0002abbf) ai5_sk_right_pane_g2

0xdda3,	// (0x0002abc7) ai5_sk_right_pane_g3

0xddab,	// (0x0002abcf) ai5_sk_right_pane_g4

0x0003,

0xfe8c,	// (0x0002ccb0) ai5_sk_right_pane_g

0xddb3,	// (0x0002abd7) ai5_sk_right_pane_t1

0x67c0,	// (0x000235e4) ai5_sk_middle_pane_g1

0x67c8,	// (0x000235ec) ai5_sk_middle_pane_g2

0x67e0,	// (0x00023604) ai5_sk_middle_pane_g3

0xdda3,	// (0x0002abc7) ai5_sk_middle_pane_g4

0xdd7d,	// (0x0002aba1) ai5_sk_middle_pane_g5

0xddc1,	// (0x0002abe5) ai5_sk_middle_pane_g6

0x05c8,	// (0x0001d3ec) ai5_sk_middle_pane_g7

0x0006,

0xfe95,	// (0x0002ccb9) ai5_sk_middle_pane_g

0xa454,	// (0x00027278) aid_touch_area_size_lc0_ParamLimits

0xa454,	// (0x00027278) aid_touch_area_size_lc0

0xb582,	// (0x000283a6) cell_hwr_candidate_pane_t1_ParamLimits

0x65d6,	// (0x000233fa) aid_touch_navi_pane

0xa66b,	// (0x0002748f) status_dt_navi_pane_ParamLimits

0xa66b,	// (0x0002748f) status_dt_navi_pane

0xa678,	// (0x0002749c) status_dt_sta_pane_ParamLimits

0xa678,	// (0x0002749c) status_dt_sta_pane

0x05d0,	// (0x0001d3f4) dt_sta_controll_pane

0x05dd,	// (0x0001d401) dt_sta_indi_pane

0x05ea,	// (0x0001d40e) dt_sta_title_pane

0x5517,	// (0x0002233b) bg_dt_sta_indi_pane_ParamLimits

0x5517,	// (0x0002233b) bg_dt_sta_indi_pane

0xddc9,	// (0x0002abed) dt_sta_battery_pane

0xddd1,	// (0x0002abf5) dt_sta_indi_pane_g1

0xddda,	// (0x0002abfe) dt_sta_indi_pane_g2

0xdde3,	// (0x0002ac07) dt_sta_indi_pane_g3

0x0002,

0xfea4,	// (0x0002ccc8) dt_sta_indi_pane_g

0xddec,	// (0x0002ac10) dt_sta_signal_pane

0x598f,	// (0x000227b3) bg_dt_sta_title_pane_ParamLimits

0x598f,	// (0x000227b3) bg_dt_sta_title_pane

0xddf5,	// (0x0002ac19) dt_sta_title_pane_g1

0xddfd,	// (0x0002ac21) dt_sta_title_pane_t1_ParamLimits

0xddfd,	// (0x0002ac21) dt_sta_title_pane_t1

0x5364,	// (0x00022188) bg_dt_sta_control_pane

0xde12,	// (0x0002ac36) dt_sta_controll_pane_g1

0xde1b,	// (0x0002ac3f) bg_dt_sta_title_pane_g1

0xde24,	// (0x0002ac48) bg_dt_sta_title_pane_g2

0xde2d,	// (0x0002ac51) bg_dt_sta_title_pane_g3

0x0002,

0xfeab,	// (0x0002cccf) bg_dt_sta_title_pane_g

0x84e1,	// (0x00025305) bg_dt_sta_indi_pane_g1

0xde36,	// (0x0002ac5a) dt_sta_signal_pane_g1

0xde3e,	// (0x0002ac62) dt_sta_signal_pane_g2

0x0001,

0xfeb2,	// (0x0002ccd6) dt_sta_signal_pane_g

0xde46,	// (0x0002ac6a) dt_sta_battery_pane_g1

0xde4f,	// (0x0002ac73) dt_sta_battery_pane_t1

0x84e1,	// (0x00025305) bg_dt_sta_control_pane_g1

0x5f46,	// (0x00022d6a) fep_china_uni_eep_pane

0x5f4e,	// (0x00022d72) fep_china_uni_entry_pane_ParamLimits

0x5f5e,	// (0x00022d82) popup_fep_china_uni_window_g1_ParamLimits

0x5f6e,	// (0x00022d92) popup_fep_china_uni_window_g2_ParamLimits

0x5f6e,	// (0x00022d92) popup_fep_china_uni_window_g2

0x0001,

0xf71d,	// (0x0002c541) popup_fep_china_uni_window_g_ParamLimits

0xf71d,	// (0x0002c541) popup_fep_china_uni_window_g

0xde5e,	// (0x0002ac82) fep_china_uni_eep_pane_g1

0xde66,	// (0x0002ac8a) fep_china_uni_eep_pane_t1

0xda72,	// (0x0002a896) aid_touch_area_size_smil_player

0x6685,	// (0x000234a9) lc0_clock_pane

0x66de,	// (0x00023502) status_pane_g5_ParamLimits

0x66de,	// (0x00023502) status_pane_g5

0xa0ce,	// (0x00026ef2) popup_keymap_window

0x66be,	// (0x000234e2) status_icon_pane

0xdb32,	// (0x0002a956) cell_ai5_widget_pane_g3_ParamLimits

0xdb49,	// (0x0002a96d) cell_ai5_widget_pane_g4_ParamLimits

0xdb55,	// (0x0002a979) cell_ai5_widget_pane_g5_ParamLimits

0xdb79,	// (0x0002a99d) cell_ai5_widget_pane_g8_ParamLimits

0xdb79,	// (0x0002a99d) cell_ai5_widget_pane_g8

0xdb8d,	// (0x0002a9b1) cell_ai5_widget_pane_g9_ParamLimits

0xdb8d,	// (0x0002a9b1) cell_ai5_widget_pane_g9

0xdba1,	// (0x0002a9c5) cell_ai5_widget_pane_g10_ParamLimits

0xdba1,	// (0x0002a9c5) cell_ai5_widget_pane_g10

0xde75,	// (0x0002ac99) status_icon_pane_g1

0x5364,	// (0x00022188) bg_popup_sub_pane_cp13

0xde7d,	// (0x0002aca1) popup_keymap_window_t1

0x9e24,	// (0x00026c48) control_pane_g6_ParamLimits

0x9e24,	// (0x00026c48) control_pane_g6

0x9e31,	// (0x00026c55) control_pane_g7_ParamLimits

0x9e31,	// (0x00026c55) control_pane_g7

0x9e3e,	// (0x00026c62) control_pane_g8_ParamLimits

0x9e3e,	// (0x00026c62) control_pane_g8

0x05d0,	// (0x0001d3f4) dt_sta_controll_pane_ParamLimits

0x05dd,	// (0x0001d401) dt_sta_indi_pane_ParamLimits

0x05ea,	// (0x0001d40e) dt_sta_title_pane_ParamLimits

0x58da,	// (0x000226fe) aid_size_touch_scroll_bar_cale

0x9239,	// (0x0002605d) popup_discreet_window_ParamLimits

0x9239,	// (0x0002605d) popup_discreet_window

0x929d,	// (0x000260c1) popup_sk_window

0x6d19,	// (0x00023b3d) bg_popup_sub_pane_cp28_ParamLimits

0x6d19,	// (0x00023b3d) bg_popup_sub_pane_cp28

0xde8b,	// (0x0002acaf) popup_discreet_window_g1_ParamLimits

0xde8b,	// (0x0002acaf) popup_discreet_window_g1

0xdeab,	// (0x0002accf) popup_discreet_window_t1_ParamLimits

0xdeab,	// (0x0002accf) popup_discreet_window_t1

0xdec9,	// (0x0002aced) popup_discreet_window_t2_ParamLimits

0xdec9,	// (0x0002aced) popup_discreet_window_t2

0x0002,

0xfeb7,	// (0x0002ccdb) popup_discreet_window_t_ParamLimits

0xfeb7,	// (0x0002ccdb) popup_discreet_window_t

0xbef1,	// (0x00028d15) popup_sk_window_g1

0xbefb,	// (0x00028d1f) popup_sk_window_g2

0x0001,

0xfebe,	// (0x0002cce2) popup_sk_window_g

0xbf03,	// (0x00028d27) popup_sk_window_t1

0xbf11,	// (0x00028d35) popup_sk_window_t1_copy1

0xdb22,	// (0x0002a946) cell_ai5_widget_pane_g2_ParamLimits

0xdc7b,	// (0x0002aa9f) cell_ai5_widget_pane_t9_ParamLimits

0xdc7b,	// (0x0002aa9f) cell_ai5_widget_pane_t9

0x5364,	// (0x00022188) main_fep_fshwr2_pane

0xbf1f,	// (0x00028d43) aid_fshwr2_btn_pane

0xbf2b,	// (0x00028d4f) aid_fshwr2_syb_pane

0xbf37,	// (0x00028d5b) aid_fshwr2_txt_pane

0xbf43,	// (0x00028d67) fshwr2_func_candi_pane

0xbf54,	// (0x00028d78) fshwr2_hwr_syb_pane

0xbf60,	// (0x00028d84) fshwr2_icf_pane

0x9160,	// (0x00025f84) fshwr2_icf_bg_pane

0xbf85,	// (0x00028da9) fshwr2_icf_pane_t1_ParamLimits

0xbf85,	// (0x00028da9) fshwr2_icf_pane_t1

0x5ec3,	// (0x00022ce7) fshwr2_func_candi_pane_g1

0x06a7,	// (0x0001d4cb) fshwr2_func_candi_row_pane_ParamLimits

0x06a7,	// (0x0001d4cb) fshwr2_func_candi_row_pane

0xbf9d,	// (0x00028dc1) cell_fshwr2_syb_pane_ParamLimits

0xbf9d,	// (0x00028dc1) cell_fshwr2_syb_pane

0xb553,	// (0x00028377) fshwr2_hwr_syb_pane_g1_ParamLimits

0xb553,	// (0x00028377) fshwr2_hwr_syb_pane_g1

0x9160,	// (0x00025f84) bg_popup_call_pane_cp01

0xbfb1,	// (0x00028dd5) fshwr2_func_candi_cell_pane_ParamLimits

0xbfb1,	// (0x00028dd5) fshwr2_func_candi_cell_pane

0x7329,	// (0x0002414d) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x7329,	// (0x0002414d) fshwr2_func_candi_cell_bg_pane

0xbff0,	// (0x00028e14) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xbff0,	// (0x00028e14) fshwr2_func_candi_cell_pane_g1

0xc010,	// (0x00028e34) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xc010,	// (0x00028e34) fshwr2_func_candi_cell_pane_t1

0x9160,	// (0x00025f84) bg_button_pane_cp08

0x640d,	// (0x00023231) cell_fshwr2_syb_bg_pane

0xc023,	// (0x00028e47) cell_fshwr2_syb_bg_pane_g1

0xc02b,	// (0x00028e4f) cell_fshwr2_syb_bg_pane_t1

0x598f,	// (0x000227b3) main_tmo_pane

0xab32,	// (0x00027956) uni_indicator_pane_g1_ParamLimits

0xab45,	// (0x00027969) uni_indicator_pane_g2_ParamLimits

0xab57,	// (0x0002797b) uni_indicator_pane_g3_ParamLimits

0x776c,	// (0x00024590) uni_indicator_pane_g4_ParamLimits

0x776c,	// (0x00024590) uni_indicator_pane_g4

0x7780,	// (0x000245a4) uni_indicator_pane_g5_ParamLimits

0x7780,	// (0x000245a4) uni_indicator_pane_g5

0x7780,	// (0x000245a4) uni_indicator_pane_g6_ParamLimits

0x7780,	// (0x000245a4) uni_indicator_pane_g6

0xf921,	// (0x0002c745) uni_indicator_pane_g_ParamLimits

0xefae,	// (0x0002bdd2) popup_tmo_note_window_ParamLimits

0xefae,	// (0x0002bdd2) popup_tmo_note_window

0xb7e6,	// (0x0002860a) fshwr2_bg_pane

0xc001,	// (0x00028e25) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xc001,	// (0x00028e25) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfec3,	// (0x0002cce7) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfec3,	// (0x0002cce7) fshwr2_func_candi_cell_pane_g

0xb53b,	// (0x0002835f) bg_popup_window_pane_cp01

0xc03a,	// (0x00028e5e) bg_popup_window_pane_g1_cp01

0x075d,	// (0x0001d581) bg_popup_window_pane_cp22_ParamLimits

0x075d,	// (0x0001d581) bg_popup_window_pane_cp22

0x076b,	// (0x0001d58f) listscroll_tmo_link_pane_ParamLimits

0x076b,	// (0x0001d58f) listscroll_tmo_link_pane

0x07ab,	// (0x0001d5cf) popup_tmo_note_window_g1_ParamLimits

0x07ab,	// (0x0001d5cf) popup_tmo_note_window_g1

0x07b8,	// (0x0001d5dc) tmo_note_info_pane_ParamLimits

0x07b8,	// (0x0001d5dc) tmo_note_info_pane

0x07d2,	// (0x0001d5f6) list_tmo_note_info_pane_g1_ParamLimits

0x07d2,	// (0x0001d5f6) list_tmo_note_info_pane_g1

0x07e9,	// (0x0001d60d) list_tmo_note_info_pane_g2_ParamLimits

0x07e9,	// (0x0001d60d) list_tmo_note_info_pane_g2

0x0001,

0xfec8,	// (0x0002ccec) list_tmo_note_info_pane_g_ParamLimits

0xfec8,	// (0x0002ccec) list_tmo_note_info_pane_g

0x0805,	// (0x0001d629) list_tmo_note_info_text_pane_ParamLimits

0x0805,	// (0x0001d629) list_tmo_note_info_text_pane

0x0886,	// (0x0001d6aa) list_tmo_link_pane

0x0893,	// (0x0001d6b7) scroll_pane_cp20

0x08a0,	// (0x0001d6c4) list_single_tmo_link_pane_ParamLimits

0x08a0,	// (0x0001d6c4) list_single_tmo_link_pane

0x08b0,	// (0x0001d6d4) list_single_tmo_link_pane_t1

0x08be,	// (0x0001d6e2) list_tmo_note_info_text_pane_t1_ParamLimits

0x08be,	// (0x0001d6e2) list_tmo_note_info_text_pane_t1

0x966d,	// (0x00026491) aid_size_touch_scroll_bar_cp01_ParamLimits

0x966d,	// (0x00026491) aid_size_touch_scroll_bar_cp01

0xe1c0,	// (0x0002afe4) aid_size_touch_slider_marker

0x9289,	// (0x000260ad) popup_settings_window_ParamLimits

0x9289,	// (0x000260ad) popup_settings_window

0xe344,	// (0x0002b168) popup_candi_list_indi_window

0x65d6,	// (0x000233fa) aid_touch_navi_pane_ParamLimits

0xb741,	// (0x00028565) rs_clock_indi_pane

0xb74a,	// (0x0002856e) sctrl_sk_bottom_pane_ParamLimits

0xb75b,	// (0x0002857f) sctrl_sk_top_pane_ParamLimits

0xb85e,	// (0x00028682) popup_fep_tooltip_window

0xdac0,	// (0x0002a8e4) aid_size_cell_widget_grid_ParamLimits

0xdb0d,	// (0x0002a931) cell_ai5_widget_pane_g1_ParamLimits

0xdb0d,	// (0x0002a931) cell_ai5_widget_pane_g1

0xdb61,	// (0x0002a985) cell_ai5_widget_pane_g6_ParamLimits

0xdb6d,	// (0x0002a991) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe46,	// (0x0002cc6a) cell_ai5_widget_pane_g_ParamLimits

0xfe46,	// (0x0002cc6a) cell_ai5_widget_pane_g

0xdc9f,	// (0x0002aac3) cell_ai5_widget_pane_t10_ParamLimits

0xdc9f,	// (0x0002aac3) cell_ai5_widget_pane_t10

0xdcbd,	// (0x0002aae1) grid_ai5_widget_pane_ParamLimits

0xdd35,	// (0x0002ab59) cell_contacts_ai5_widget_pane_ParamLimits

0xdd35,	// (0x0002ab59) cell_contacts_ai5_widget_pane

0xdede,	// (0x0002ad02) popup_discreet_window_t3_ParamLimits

0xdede,	// (0x0002ad02) popup_discreet_window_t3

0xbf73,	// (0x00028d97) popup_fshwr2_char_preview_window_ParamLimits

0xbf73,	// (0x00028d97) popup_fshwr2_char_preview_window

0x0823,	// (0x0001d647) tmo_note_info_pane_t1

0x0838,	// (0x0001d65c) tmo_note_info_pane_t2

0x084d,	// (0x0001d671) tmo_note_info_pane_t3

0x0862,	// (0x0001d686) tmo_note_info_pane_t4

0x0874,	// (0x0001d698) tmo_note_info_pane_t5

0x0004,

0xfecd,	// (0x0002ccf1) tmo_note_info_pane_t

0x0886,	// (0x0001d6aa) list_tmo_link_pane_ParamLimits

0x0893,	// (0x0001d6b7) scroll_pane_cp20_ParamLimits

0x9160,	// (0x00025f84) bg_popup_fep_char_preview_window_cp01

0x08d7,	// (0x0001d6fb) popup_fshwr2_char_preview_window_t1

0x08e5,	// (0x0001d709) popup_candi_list_indi_window_g1

0x08ee,	// (0x0001d712) bg_cell_contacts_ai5_widget_pane

0x08fa,	// (0x0001d71e) cell_contacts_ai5_widget_pane_g1

0x090f,	// (0x0001d733) cell_contacts_ai5_widget_pane_g2

0x091b,	// (0x0001d73f) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfed8,	// (0x0002ccfc) cell_contacts_ai5_widget_pane_g

0x0927,	// (0x0001d74b) cell_contacts_ai5_widget_pane_t1

0x598f,	// (0x000227b3) highlight_cell_shortcut_ai5_widget_pane_cp01

0x099c,	// (0x0001d7c0) settings_container_pane

0x640d,	// (0x00023231) listscroll_set_pane_copy1

0x7f13,	// (0x00024d37) scroll_pane_cp121_copy1

0x6ae7,	// (0x0002390b) set_content_pane_copy1

0x09a8,	// (0x0001d7cc) aid_height_set_list_copy1_ParamLimits

0x09a8,	// (0x0001d7cc) aid_height_set_list_copy1

0x761a,	// (0x0002443e) aid_size_parent_copy1_ParamLimits

0x761a,	// (0x0002443e) aid_size_parent_copy1

0x09b4,	// (0x0001d7d8) button_value_adjust_pane_cp6_copy1_ParamLimits

0x09b4,	// (0x0001d7d8) button_value_adjust_pane_cp6_copy1

0x5af8,	// (0x0002291c) list_highlight_pane_cp2_copy1_ParamLimits

0x5af8,	// (0x0002291c) list_highlight_pane_cp2_copy1

0x09c8,	// (0x0001d7ec) list_set_pane_copy1_ParamLimits

0x09c8,	// (0x0001d7ec) list_set_pane_copy1

0x0939,	// (0x0001d75d) main_pane_set_t1_copy1_ParamLimits

0x0939,	// (0x0001d75d) main_pane_set_t1_copy1

0x0973,	// (0x0001d797) main_pane_set_t2_copy1_ParamLimits

0x0973,	// (0x0001d797) main_pane_set_t2_copy1

0x0a57,	// (0x0001d87b) main_pane_set_t3_copy1

0x0a65,	// (0x0001d889) main_pane_set_t4_copy1

0x0990,	// (0x0001d7b4) set_content_pane_g1_copy1_ParamLimits

0x0990,	// (0x0001d7b4) set_content_pane_g1_copy1

0x0a73,	// (0x0001d897) setting_code_pane_copy1

0x0a7b,	// (0x0001d89f) setting_slider_graphic_pane_copy1

0x0a7b,	// (0x0001d89f) setting_slider_pane_copy1

0x0a7b,	// (0x0001d89f) setting_text_pane_copy1

0x0a7b,	// (0x0001d89f) setting_volume_pane_copy1

0x0a73,	// (0x0001d897) settings_code_pane_cp2_copy1

0x0a83,	// (0x0001d8a7) settings_code_pane_cp_copy1_ParamLimits

0x0a83,	// (0x0001d8a7) settings_code_pane_cp_copy1

0xc043,	// (0x00028e67) volume_set_pane_copy1

0x0a9f,	// (0x0001d8c3) volume_set_pane_g10_copy1

0x0aa7,	// (0x0001d8cb) volume_set_pane_g1_copy1

0x0aaf,	// (0x0001d8d3) volume_set_pane_g2_copy1

0x0ab7,	// (0x0001d8db) volume_set_pane_g3_copy1

0x0abf,	// (0x0001d8e3) volume_set_pane_g4_copy1

0x0ac7,	// (0x0001d8eb) volume_set_pane_g5_copy1

0x0acf,	// (0x0001d8f3) volume_set_pane_g6_copy1

0x0ad7,	// (0x0001d8fb) volume_set_pane_g7_copy1

0x0adf,	// (0x0001d903) volume_set_pane_g8_copy1

0x0ae7,	// (0x0001d90b) volume_set_pane_g9_copy1

0x53e4,	// (0x00022208) bg_set_opt_pane_cp_copy1_ParamLimits

0x53e4,	// (0x00022208) bg_set_opt_pane_cp_copy1

0xc04b,	// (0x00028e6f) setting_slider_pane_t1_copy1_ParamLimits

0xc04b,	// (0x00028e6f) setting_slider_pane_t1_copy1

0xc069,	// (0x00028e8d) setting_slider_pane_t2_copy1_ParamLimits

0xc069,	// (0x00028e8d) setting_slider_pane_t2_copy1

0xc082,	// (0x00028ea6) setting_slider_pane_t3_copy1_ParamLimits

0xc082,	// (0x00028ea6) setting_slider_pane_t3_copy1

0xc099,	// (0x00028ebd) slider_set_pane_copy1_ParamLimits

0xc099,	// (0x00028ebd) slider_set_pane_copy1

0x59e7,	// (0x0002280b) set_opt_bg_pane_g1_copy2

0x59ef,	// (0x00022813) set_opt_bg_pane_g2_copy2

0x0b53,	// (0x0001d977) set_opt_bg_pane_g3_copy2

0x59ff,	// (0x00022823) set_opt_bg_pane_g4_copy2

0x5a07,	// (0x0002282b) set_opt_bg_pane_g5_copy2

0x5a0f,	// (0x00022833) set_opt_bg_pane_g6_copy2

0x0b5b,	// (0x0001d97f) set_opt_bg_pane_g7_copy2

0x0b63,	// (0x0001d987) set_opt_bg_pane_g8_copy2

0x0b6b,	// (0x0001d98f) set_opt_bg_pane_g9_copy2

0xc0af,	// (0x00028ed3) aid_size_touch_slider_mark_copy1_ParamLimits

0xc0af,	// (0x00028ed3) aid_size_touch_slider_mark_copy1

0x0b87,	// (0x0001d9ab) slider_set_pane_g1_copy1

0xc0c3,	// (0x00028ee7) slider_set_pane_g2_copy1

0xac0d,	// (0x00027a31) slider_set_pane_g3_copy1_ParamLimits

0xac0d,	// (0x00027a31) slider_set_pane_g3_copy1

0xac21,	// (0x00027a45) slider_set_pane_g4_copy1_ParamLimits

0xac21,	// (0x00027a45) slider_set_pane_g4_copy1

0xac39,	// (0x00027a5d) slider_set_pane_g5_copy1_ParamLimits

0xac39,	// (0x00027a5d) slider_set_pane_g5_copy1

0xac0d,	// (0x00027a31) slider_set_pane_g6_copy1_ParamLimits

0xac0d,	// (0x00027a31) slider_set_pane_g6_copy1

0xc0cb,	// (0x00028eef) slider_set_pane_g7_copy1_ParamLimits

0xc0cb,	// (0x00028eef) slider_set_pane_g7_copy1

0x5378,	// (0x0002219c) bg_set_opt_pane_cp2_copy1

0x0bae,	// (0x0001d9d2) setting_slider_graphic_pane_g1_copy1

0x0bc6,	// (0x0001d9ea) setting_slider_graphic_pane_t1_copy1

0x0bb7,	// (0x0001d9db) setting_slider_graphic_pane_t2_copy1

0x0bd5,	// (0x0001d9f9) slider_set_pane_cp_copy1

0x0be5,	// (0x0001da09) input_focus_pane_cp1_copy1

0x0bee,	// (0x0001da12) list_set_text_pane_copy1

0x0bf6,	// (0x0001da1a) setting_text_pane_g1_copy1

0xeb46,	// (0x0002b96a) set_text_pane_t1_copy1

0x0be5,	// (0x0001da09) input_focus_pane_cp2_copy1

0x0bf6,	// (0x0001da1a) setting_code_pane_g1_copy1

0x0bff,	// (0x0001da23) setting_code_pane_t1_copy1

0x669b,	// (0x000234bf) list_set_graphic_pane_copy1

0x5378,	// (0x0002219c) bg_set_opt_pane_cp4_copy1

0x6121,	// (0x00022f45) list_set_graphic_pane_g1_copy1_ParamLimits

0x6121,	// (0x00022f45) list_set_graphic_pane_g1_copy1

0x0c0d,	// (0x0001da31) list_set_graphic_pane_g2_copy1

0x6139,	// (0x00022f5d) list_set_graphic_pane_t1_copy1_ParamLimits

0x6139,	// (0x00022f5d) list_set_graphic_pane_t1_copy1

0x84e1,	// (0x00025305) rs_clock_indi_pane_g1

0x0c15,	// (0x0001da39) rs_clock_indi_pane_t1

0x0c23,	// (0x0001da47) rs_indi_pane

0x0c2b,	// (0x0001da4f) rs_indi_pane_g1

0x0c34,	// (0x0001da58) rs_indi_pane_g2

0x0c3d,	// (0x0001da61) rs_indi_pane_g3

0x0002,

0xfedf,	// (0x0002cd03) rs_indi_pane_g

0x640d,	// (0x00023231) bg_popup_preview_window_pane_cp03

0x0c46,	// (0x0001da6a) popup_fep_tooltip_window_t1

0xce2e,	// (0x00029c52) popup_note2_window_g2_ParamLimits

0xce2e,	// (0x00029c52) popup_note2_window_g2

0x0001,

0xfc7f,	// (0x0002caa3) popup_note2_window_g_ParamLimits

0xfc7f,	// (0x0002caa3) popup_note2_window_g

0xd2a9,	// (0x0002a0cd) bg_popup_sub_pane_cp11_ParamLimits

0xd2b6,	// (0x0002a0da) cell_ai3_links_pane_g1_ParamLimits

0xd2cd,	// (0x0002a0f1) cell_ai3_links_pane_t1

0xeb46,	// (0x0002b96a) set_text_pane_t1_copy1_ParamLimits

0x6320,	// (0x00023144) cell_graphic_popup_pane_cp2_ParamLimits

0x6320,	// (0x00023144) cell_graphic_popup_pane_cp2

0x0c54,	// (0x0001da78) cell_graphic_popup_pane_g1_cp2

0x5789,	// (0x000225ad) cell_graphic_popup_pane_g2_cp2

0x0c5c,	// (0x0001da80) cell_graphic_popup_pane_g3_cp2

0x0c64,	// (0x0001da88) cell_graphic_popup_pane_t2_cp2

0x579a,	// (0x000225be) grid_highlight_pane_cp3_cp2

0x5ca2,	// (0x00022ac6) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x598f,	// (0x000227b3) main_tmo_pane_ParamLimits

0xefa6,	// (0x0002bdca) popup_tmo_big_image_note_window

0xdafc,	// (0x0002a920) cell_ai5_widget_list_pane

0xdb04,	// (0x0002a928) cell_ai5_widget_lrg_icon_pane

0x0823,	// (0x0001d647) tmo_note_info_pane_t1_ParamLimits

0x0838,	// (0x0001d65c) tmo_note_info_pane_t2_ParamLimits

0x084d,	// (0x0001d671) tmo_note_info_pane_t3_ParamLimits

0x0862,	// (0x0001d686) tmo_note_info_pane_t4_ParamLimits

0x0874,	// (0x0001d698) tmo_note_info_pane_t5_ParamLimits

0xfecd,	// (0x0002ccf1) tmo_note_info_pane_t_ParamLimits

0x099c,	// (0x0001d7c0) settings_container_pane_ParamLimits

0x0bdd,	// (0x0001da01) indicator_popup_pane_cp5

0x0bdd,	// (0x0001da01) indicator_popup_pane_cp6

0x669b,	// (0x000234bf) list_set_graphic_pane_copy1_ParamLimits

0x5364,	// (0x00022188) bg_popup_window_pane_cp23

0x0c72,	// (0x0001da96) popup_tmo_big_image_note_window_g1

0x0c7b,	// (0x0001da9f) popup_tmo_big_image_note_window_t1

0x0c89,	// (0x0001daad) popup_tmo_big_image_note_window_t2

0x0c97,	// (0x0001dabb) popup_tmo_big_image_note_window_t3

0x0002,

0xfee6,	// (0x0002cd0a) popup_tmo_big_image_note_window_t

0x84e1,	// (0x00025305) cell_ai5_widget_lrg_icon_pane_g1

0x0ca5,	// (0x0001dac9) cell_ai5_widget_lrg_icon_pane_t1

0x0cb3,	// (0x0001dad7) cell_ai5_widget_list_row_pane_ParamLimits

0x0cb3,	// (0x0001dad7) cell_ai5_widget_list_row_pane

0x0cca,	// (0x0001daee) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x0cca,	// (0x0001daee) cell_ai5_widget_list_row_pane_g1

0x0cd7,	// (0x0001dafb) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x0cd7,	// (0x0001dafb) cell_ai5_widget_list_row_pane_t1

0x0d05,	// (0x0001db29) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x0d05,	// (0x0001db29) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfeed,	// (0x0002cd11) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeed,	// (0x0002cd11) cell_ai5_widget_list_row_pane_t

0x9160,	// (0x00025f84) main_fep_vtchi_ss_pane

0x0d49,	// (0x0001db6d) popup_fep_char_pre_window

0x0d51,	// (0x0001db75) popup_fep_ituss_window

0x0d6e,	// (0x0001db92) popup_fep_vkbss_window

0x0d96,	// (0x0001dbba) grid_vkbss_keypad_pane_ParamLimits

0x0d96,	// (0x0001dbba) grid_vkbss_keypad_pane

0x0da2,	// (0x0001dbc6) ituss_keypad_pane

0xc0eb,	// (0x00028f0f) aid_vkbss_key_offset_ParamLimits

0xc0eb,	// (0x00028f0f) aid_vkbss_key_offset

0xc0f7,	// (0x00028f1b) cell_vkbss_key_pane_ParamLimits

0xc0f7,	// (0x00028f1b) cell_vkbss_key_pane

0x75fd,	// (0x00024421) bg_cell_vkbss_key_g1_ParamLimits

0x75fd,	// (0x00024421) bg_cell_vkbss_key_g1

0x0ddd,	// (0x0001dc01) cell_vkbss_key_3p_pane_ParamLimits

0x0ddd,	// (0x0001dc01) cell_vkbss_key_3p_pane

0x0df1,	// (0x0001dc15) cell_vkbss_key_g1_ParamLimits

0x0df1,	// (0x0001dc15) cell_vkbss_key_g1

0x0e05,	// (0x0001dc29) cell_vkbss_key_t1_ParamLimits

0x0e05,	// (0x0001dc29) cell_vkbss_key_t1

0xc10d,	// (0x00028f31) cell_ituss_key_pane_ParamLimits

0xc10d,	// (0x00028f31) cell_ituss_key_pane

0x0e41,	// (0x0001dc65) bg_cell_ituss_key_g1_ParamLimits

0x0e41,	// (0x0001dc65) bg_cell_ituss_key_g1

0x0e4d,	// (0x0001dc71) cell_ituss_key_pane_g1_ParamLimits

0x0e4d,	// (0x0001dc71) cell_ituss_key_pane_g1

0xc11e,	// (0x00028f42) cell_ituss_key_pane_g2_ParamLimits

0xc11e,	// (0x00028f42) cell_ituss_key_pane_g2

0x0002,

0xfef4,	// (0x0002cd18) cell_ituss_key_pane_g_ParamLimits

0xfef4,	// (0x0002cd18) cell_ituss_key_pane_g

0xc146,	// (0x00028f6a) cell_ituss_key_t1_ParamLimits

0xc146,	// (0x00028f6a) cell_ituss_key_t1

0xc180,	// (0x00028fa4) cell_ituss_key_t2_ParamLimits

0xc180,	// (0x00028fa4) cell_ituss_key_t2

0xc1b1,	// (0x00028fd5) cell_ituss_key_t3_ParamLimits

0xc1b1,	// (0x00028fd5) cell_ituss_key_t3

0xc180,	// (0x00028fa4) cell_ituss_key_t4_ParamLimits

0xc180,	// (0x00028fa4) cell_ituss_key_t4

0x0004,

0xfefb,	// (0x0002cd1f) cell_ituss_key_t_ParamLimits

0xfefb,	// (0x0002cd1f) cell_ituss_key_t

0x0f59,	// (0x0001dd7d) cell_vkbss_key_3p_pane_g1

0x0f51,	// (0x0001dd75) cell_vkbss_key_3p_pane_g2

0x0f49,	// (0x0001dd6d) cell_vkbss_key_3p_pane_g3

0x0002,

0xff06,	// (0x0002cd2a) cell_vkbss_key_3p_pane_g

0x9160,	// (0x00025f84) bg_popup_fep_char_preview_window_cp02

0xc1f4,	// (0x00029018) popup_fep_char_pre_window_t1

0x05a0,	// (0x0001d3c4) main_ai5_sk_pane

0x08ee,	// (0x0001d712) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x08fa,	// (0x0001d71e) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x090f,	// (0x0001d733) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x091b,	// (0x0001d73f) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfed8,	// (0x0002ccfc) cell_contacts_ai5_widget_pane_g_ParamLimits

0x0927,	// (0x0001d74b) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x598f,	// (0x000227b3) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0x0f70,	// (0x0001dd94) main_ai5_sk_pane_g1

0x6b63,	// (0x00023987) popup_query_code_window_g1

0x0d63,	// (0x0001db87) popup_fep_vkb_icf_pane

0x0d80,	// (0x0001dba4) popup_fep_vtchi_icf_pane

0x0f79,	// (0x0001dd9d) bg_icf_pane

0x0f85,	// (0x0001dda9) list_vkb_icf_pane

0x0f94,	// (0x0001ddb8) bg_icf_pane_cp01

0x0fa7,	// (0x0001ddcb) vtchi_icf_list_pane

0x0fb7,	// (0x0001dddb) list_vkb_icf_pane_t1_ParamLimits

0x0fb7,	// (0x0001dddb) list_vkb_icf_pane_t1

0x0fcc,	// (0x0001ddf0) vtchi_icf_list_pane_t1_ParamLimits

0x0fcc,	// (0x0001ddf0) vtchi_icf_list_pane_t1

0x0d51,	// (0x0001db75) popup_fep_ituss_window_ParamLimits

0x0d80,	// (0x0001dba4) popup_fep_vtchi_icf_pane_ParamLimits

0x0da2,	// (0x0001dbc6) ituss_keypad_pane_ParamLimits

0xc0e1,	// (0x00028f05) ituss_sks_pane

0x0f79,	// (0x0001dd9d) bg_icf_pane_ParamLimits

0x0d2d,	// (0x0001db51) icf_edit_indi_pane_ParamLimits

0x0d2d,	// (0x0001db51) icf_edit_indi_pane

0x0f85,	// (0x0001dda9) list_vkb_icf_pane_ParamLimits

0x0f94,	// (0x0001ddb8) bg_icf_pane_cp01_ParamLimits

0x0d3c,	// (0x0001db60) icf_edit_indi_pane_cp01_ParamLimits

0x0d3c,	// (0x0001db60) icf_edit_indi_pane_cp01

0x0faf,	// (0x0001ddd3) vtchi_query_pane

0xc6d1,	// (0x000294f5) icf_edit_indi_pane_g1_ParamLimits

0xc6d1,	// (0x000294f5) icf_edit_indi_pane_g1

0x104c,	// (0x0001de70) icf_edit_indi_pane_g2_ParamLimits

0x104c,	// (0x0001de70) icf_edit_indi_pane_g2

0x0001,

0xff1e,	// (0x0002cd42) icf_edit_indi_pane_g_ParamLimits

0xff1e,	// (0x0002cd42) icf_edit_indi_pane_g

0x105b,	// (0x0001de7f) icf_edit_indi_pane_t1

0x0fe3,	// (0x0001de07) bg_input_focus_pane_cp042

0x58d1,	// (0x000226f5) vtchi_button_pane

0x0fec,	// (0x0001de10) vtchi_query_pane_t1

0x0ffa,	// (0x0001de1e) vtchi_query_pane_t2

0x1008,	// (0x0001de2c) vtchi_query_pane_t3

0x0002,

0xff0d,	// (0x0002cd31) vtchi_query_pane_t

0x9160,	// (0x00025f84) bg_button_pane_cp13

0x1016,	// (0x0001de3a) vtchi_button_pane_g1

0xc203,	// (0x00029027) ituss_sks_pane_g1

0xc20d,	// (0x00029031) ituss_sks_pane_g2

0x0001,

0xff14,	// (0x0002cd38) ituss_sks_pane_g

0x103e,	// (0x0001de62) ituss_sks_pane_t1

0x1030,	// (0x0001de54) ituss_sks_pane_t2

0x0001,

0xff19,	// (0x0002cd3d) ituss_sks_pane_t

0x820d,	// (0x00025031) indicator_nsta_pane_cp_g1

0x8215,	// (0x00025039) indicator_nsta_pane_cp_g2

0x821d,	// (0x00025041) indicator_nsta_pane_cp_g3

0x820d,	// (0x00025031) indicator_nsta_pane_cp_g4

0x8215,	// (0x00025039) indicator_nsta_pane_cp_g5

0x821d,	// (0x00025041) indicator_nsta_pane_cp_g6

0x0005,

0xfabd,	// (0x0002c8e1) indicator_nsta_pane_cp_g

0x0265,	// (0x0001d089) cell_graphic2_pane_t2_ParamLimits

0x0265,	// (0x0001d089) cell_graphic2_pane_t2

0x0001,

0xfdcf,	// (0x0002cbf3) cell_graphic2_pane_t_ParamLimits

0xfdcf,	// (0x0002cbf3) cell_graphic2_pane_t

0x0292,	// (0x0001d0b6) cell_graphic2_control_pane_t1

0x9a0f,	// (0x00026833) signal_pane_g3_ParamLimits

0x9a0f,	// (0x00026833) signal_pane_g3

0x9a1e,	// (0x00026842) signal_pane_g4_ParamLimits

0x9a1e,	// (0x00026842) signal_pane_g4

0x0d17,	// (0x0001db3b) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x0d17,	// (0x0001db3b) cell_ai5_widget_list_row_pane_t3

0x0e89,	// (0x0001dcad) cell_ituss_key_pane_t1_ParamLimits

0x0e89,	// (0x0001dcad) cell_ituss_key_pane_t1

0x68a4,	// (0x000236c8) form_field_data_wide_pane_vc_t2_ParamLimits

0x68a4,	// (0x000236c8) form_field_data_wide_pane_vc_t2

0x68b6,	// (0x000236da) form_field_data_wide_pane_vc_t3_ParamLimits

0x68b6,	// (0x000236da) form_field_data_wide_pane_vc_t3

0x0002,

0xf809,	// (0x0002c62d) form_field_data_wide_pane_vc_t_ParamLimits

0xf809,	// (0x0002c62d) form_field_data_wide_pane_vc_t

0x7f51,	// (0x00024d75) form_field_slider_wide_pane_vc_t3_ParamLimits

0x7f51,	// (0x00024d75) form_field_slider_wide_pane_vc_t3

0x801f,	// (0x00024e43) form_field_popup_wide_pane_vc_t2_ParamLimits

0x801f,	// (0x00024e43) form_field_popup_wide_pane_vc_t2

0x8034,	// (0x00024e58) form_field_popup_wide_pane_vc_t3_ParamLimits

0x8034,	// (0x00024e58) form_field_popup_wide_pane_vc_t3

0x0002,

0xfaac,	// (0x0002c8d0) form_field_popup_wide_pane_vc_t_ParamLimits

0xfaac,	// (0x0002c8d0) form_field_popup_wide_pane_vc_t

0xbf1f,	// (0x00028d43) aid_fshwr2_btn_pane_ParamLimits

0xbf2b,	// (0x00028d4f) aid_fshwr2_syb_pane_ParamLimits

0xbf37,	// (0x00028d5b) aid_fshwr2_txt_pane_ParamLimits

0xb7e6,	// (0x0002860a) fshwr2_bg_pane_ParamLimits

0xbf43,	// (0x00028d67) fshwr2_func_candi_pane_ParamLimits

0xbf54,	// (0x00028d78) fshwr2_hwr_syb_pane_ParamLimits

0xbf60,	// (0x00028d84) fshwr2_icf_pane_ParamLimits

0xe726,	// (0x0002b54a) list_double_graphic_pane_vc_g4_ParamLimits

0xe726,	// (0x0002b54a) list_double_graphic_pane_vc_g4

0xc13a,	// (0x00028f5e) cell_ituss_key_pane_g3_ParamLimits

0xc13a,	// (0x00028f5e) cell_ituss_key_pane_g3

0xc1e2,	// (0x00029006) cell_ituss_key_t5_ParamLimits

0xc1e2,	// (0x00029006) cell_ituss_key_t5

0x0d6e,	// (0x0001db92) popup_fep_vkbss_window_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Abrw_pqp_av_qvga_prt_Small

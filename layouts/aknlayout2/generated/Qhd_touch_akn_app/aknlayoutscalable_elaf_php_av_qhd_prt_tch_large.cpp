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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0002e3d0 };

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
0x9873,	// (0x00037c43) Screen

0x987f,	// (0x00037c4f) application_window_ParamLimits

0x987f,	// (0x00037c4f) application_window

0x4473,	// (0x00032843) screen_g1

0x98db,	// (0x00037cab) area_bottom_pane_ParamLimits

0x98db,	// (0x00037cab) area_bottom_pane

0x999b,	// (0x00037d6b) area_top_pane_ParamLimits

0x999b,	// (0x00037d6b) area_top_pane

0x9a2f,	// (0x00037dff) main_pane_ParamLimits

0x9a2f,	// (0x00037dff) main_pane

0x447d,	// (0x0003284d) misc_graphics

0xc0ce,	// (0x0003a49e) battery_pane_ParamLimits

0xc0ce,	// (0x0003a49e) battery_pane

0x61ca,	// (0x0003459a) bg_status_flat_pane_g8

0x61d2,	// (0x000345a2) bg_status_flat_pane_g9

0x58fb,	// (0x00033ccb) context_pane_ParamLimits

0x58fb,	// (0x00033ccb) context_pane

0xc202,	// (0x0003a5d2) navi_pane_ParamLimits

0xc202,	// (0x0003a5d2) navi_pane

0xc26e,	// (0x0003a63e) signal_pane_ParamLimits

0xc26e,	// (0x0003a63e) signal_pane

0x0008,

0xf8b7,	// (0x0003dc87) bg_status_flat_pane_g

0xc2d3,	// (0x0003a6a3) status_pane_g1_ParamLimits

0xc2d3,	// (0x0003a6a3) status_pane_g1

0xc2e7,	// (0x0003a6b7) status_pane_g2_ParamLimits

0xc2e7,	// (0x0003a6b7) status_pane_g2

0x5960,	// (0x00033d30) status_pane_g3_ParamLimits

0x5960,	// (0x00033d30) status_pane_g3

0x0004,

0xf7e5,	// (0x0003dbb5) status_pane_g_ParamLimits

0xf7e5,	// (0x0003dbb5) status_pane_g

0xc2f3,	// (0x0003a6c3) title_pane_ParamLimits

0xc2f3,	// (0x0003a6c3) title_pane

0xc330,	// (0x0003a700) uni_indicator_pane_ParamLimits

0xc330,	// (0x0003a700) uni_indicator_pane

0x572a,	// (0x00033afa) bg_list_pane_ParamLimits

0x572a,	// (0x00033afa) bg_list_pane

0xa96b,	// (0x00038d3b) find_pane

0xa973,	// (0x00038d43) listscroll_app_pane_ParamLimits

0xa973,	// (0x00038d43) listscroll_app_pane

0x574a,	// (0x00033b1a) listscroll_form_pane

0xa97f,	// (0x00038d4f) listscroll_gen_pane_ParamLimits

0xa97f,	// (0x00038d4f) listscroll_gen_pane

0x574a,	// (0x00033b1a) listscroll_set_pane

0xa0f8,	// (0x000384c8) main_idle_act_pane

0x5508,	// (0x000338d8) main_idle_trad_pane

0x5508,	// (0x000338d8) main_list_empty_pane

0x4c3b,	// (0x0003300b) main_midp_pane

0x5764,	// (0x00033b34) main_pane_g1_ParamLimits

0x5764,	// (0x00033b34) main_pane_g1

0xa993,	// (0x00038d63) popup_ai_message_window_ParamLimits

0xa993,	// (0x00038d63) popup_ai_message_window

0xaa11,	// (0x00038de1) popup_fep_china_uni_window_ParamLimits

0xaa11,	// (0x00038de1) popup_fep_china_uni_window

0x5796,	// (0x00033b66) popup_fep_japan_candidate_window_ParamLimits

0x5796,	// (0x00033b66) popup_fep_japan_candidate_window

0x57b6,	// (0x00033b86) popup_fep_japan_predictive_window_ParamLimits

0x57b6,	// (0x00033b86) popup_fep_japan_predictive_window

0xaa6d,	// (0x00038e3d) popup_find_window

0xaa7a,	// (0x00038e4a) popup_grid_graphic_window_ParamLimits

0xaa7a,	// (0x00038e4a) popup_grid_graphic_window

0x57e6,	// (0x00033bb6) popup_large_graphic_colour_window

0xaaa2,	// (0x00038e72) popup_menu_window_ParamLimits

0xaaa2,	// (0x00038e72) popup_menu_window

0xac5a,	// (0x0003902a) popup_note_image_window

0xac46,	// (0x00039016) popup_note_wait_window_ParamLimits

0xac46,	// (0x00039016) popup_note_wait_window

0xac46,	// (0x00039016) popup_note_window_ParamLimits

0xac46,	// (0x00039016) popup_note_window

0xacb0,	// (0x00039080) popup_query_code_window_ParamLimits

0xacb0,	// (0x00039080) popup_query_code_window

0x580c,	// (0x00033bdc) popup_query_data_code_window_ParamLimits

0x580c,	// (0x00033bdc) popup_query_data_code_window

0xacc4,	// (0x00039094) popup_query_data_window_ParamLimits

0xacc4,	// (0x00039094) popup_query_data_window

0xace0,	// (0x000390b0) popup_query_sat_info_window_ParamLimits

0xace0,	// (0x000390b0) popup_query_sat_info_window

0xad19,	// (0x000390e9) popup_snote_single_graphic_window_ParamLimits

0xad19,	// (0x000390e9) popup_snote_single_graphic_window

0xad19,	// (0x000390e9) popup_snote_single_text_window_ParamLimits

0xad19,	// (0x000390e9) popup_snote_single_text_window

0x5829,	// (0x00033bf9) popup_sub_window_general

0x5871,	// (0x00033c41) popup_window_general_ParamLimits

0x5871,	// (0x00033c41) popup_window_general

0x5886,	// (0x00033c56) power_save_pane

0xa7dd,	// (0x00038bad) control_pane_g1_ParamLimits

0xa7dd,	// (0x00038bad) control_pane_g1

0xa806,	// (0x00038bd6) control_pane_g2_ParamLimits

0xa806,	// (0x00038bd6) control_pane_g2

0x5704,	// (0x00033ad4) control_pane_g3_ParamLimits

0x5704,	// (0x00033ad4) control_pane_g3

0x0007,

0xf7cd,	// (0x0003db9d) control_pane_g_ParamLimits

0xf7cd,	// (0x0003db9d) control_pane_g

0xa874,	// (0x00038c44) control_pane_t1_ParamLimits

0xa874,	// (0x00038c44) control_pane_t1

0xa8c6,	// (0x00038c96) control_pane_t2_ParamLimits

0xa8c6,	// (0x00038c96) control_pane_t2

0x0002,

0xf7de,	// (0x0003dbae) control_pane_t_ParamLimits

0xf7de,	// (0x0003dbae) control_pane_t

0x5625,	// (0x000339f5) navi_navi_volume_pane_cp1

0x562e,	// (0x000339fe) status_small_icon_pane

0x5636,	// (0x00033a06) status_small_pane_g1_ParamLimits

0x5636,	// (0x00033a06) status_small_pane_g1

0x566a,	// (0x00033a3a) status_small_pane_g2_ParamLimits

0x566a,	// (0x00033a3a) status_small_pane_g2

0x5676,	// (0x00033a46) status_small_pane_g3_ParamLimits

0x5676,	// (0x00033a46) status_small_pane_g3

0x5682,	// (0x00033a52) status_small_pane_g4_ParamLimits

0x5682,	// (0x00033a52) status_small_pane_g4

0x568e,	// (0x00033a5e) status_small_pane_g5_ParamLimits

0x568e,	// (0x00033a5e) status_small_pane_g5

0x569d,	// (0x00033a6d) status_small_pane_g6_ParamLimits

0x569d,	// (0x00033a6d) status_small_pane_g6

0x0007,

0xf7bc,	// (0x0003db8c) status_small_pane_g_ParamLimits

0xf7bc,	// (0x0003db8c) status_small_pane_g

0x56cd,	// (0x00033a9d) status_small_pane_t1

0x56f0,	// (0x00033ac0) status_small_wait_pane_ParamLimits

0x56f0,	// (0x00033ac0) status_small_wait_pane

0xa406,	// (0x000387d6) aid_levels_signal_ParamLimits

0xa406,	// (0x000387d6) aid_levels_signal

0xa418,	// (0x000387e8) signal_pane_g1_ParamLimits

0xa418,	// (0x000387e8) signal_pane_g1

0xa42d,	// (0x000387fd) signal_pane_g2_ParamLimits

0xa42d,	// (0x000387fd) signal_pane_g2

0x0001,

0xf751,	// (0x0003db21) signal_pane_g_ParamLimits

0xf751,	// (0x0003db21) signal_pane_g

0x506e,	// (0x0003343e) context_pane_g1

0x9c74,	// (0x00038044) title_pane_g1

0x9c9e,	// (0x0003806e) title_pane_t1

0x4493,	// (0x00032863) title_pane_t2

0x44b9,	// (0x00032889) title_pane_t3

0x0002,

0xf59b,	// (0x0003d96b) title_pane_t

0xc348,	// (0x0003a718) aid_levels_battery_ParamLimits

0xc348,	// (0x0003a718) aid_levels_battery

0xc35c,	// (0x0003a72c) battery_pane_g1_ParamLimits

0xc35c,	// (0x0003a72c) battery_pane_g1

0xc372,	// (0x0003a742) battery_pane_g2_ParamLimits

0xc372,	// (0x0003a742) battery_pane_g2

0x0001,

0xf7f0,	// (0x0003dbc0) battery_pane_g_ParamLimits

0xf7f0,	// (0x0003dbc0) battery_pane_g

0xc5b0,	// (0x0003a980) uni_indicator_pane_g1

0xc5c5,	// (0x0003a995) uni_indicator_pane_g2

0xc5db,	// (0x0003a9ab) uni_indicator_pane_g3

0x0005,

0xf95f,	// (0x0003dd2f) uni_indicator_pane_g

0x537a,	// (0x0003374a) navi_icon_pane_ParamLimits

0x537a,	// (0x0003374a) navi_icon_pane

0x52c3,	// (0x00033693) navi_midp_pane

0x5396,	// (0x00033766) navi_navi_pane

0x53a0,	// (0x00033770) navi_text_pane_ParamLimits

0x53a0,	// (0x00033770) navi_text_pane

0x4473,	// (0x00032843) status_small_wait_pane_g1

0x47a0,	// (0x00032b70) status_small_wait_pane_g2

0x0001,

0xf95a,	// (0x0003dd2a) status_small_wait_pane_g

0x6779,	// (0x00034b49) navi_navi_icon_text_pane

0x6793,	// (0x00034b63) navi_navi_pane_g1_ParamLimits

0x6793,	// (0x00034b63) navi_navi_pane_g1

0x6781,	// (0x00034b51) navi_navi_pane_g2_ParamLimits

0x6781,	// (0x00034b51) navi_navi_pane_g2

0x0001,

0xf928,	// (0x0003dcf8) navi_navi_pane_g_ParamLimits

0xf928,	// (0x0003dcf8) navi_navi_pane_g

0x67a5,	// (0x00034b75) navi_navi_tabs_pane

0x67ae,	// (0x00034b7e) navi_navi_text_pane

0x6779,	// (0x00034b49) navi_navi_volume_pane

0xc574,	// (0x0003a944) navi_text_pane_t1

0xc565,	// (0x0003a935) navi_icon_pane_g1

0x66ba,	// (0x00034a8a) navi_navi_text_pane_t1

0xb021,	// (0x000393f1) navi_navi_volume_pane_g1

0xb029,	// (0x000393f9) volume_small_pane

0xc4d7,	// (0x0003a8a7) navi_navi_icon_text_pane_g1

0xc4df,	// (0x0003a8af) navi_navi_icon_text_pane_t1

0x5396,	// (0x00033766) navi_tabs_2_long_pane

0x5396,	// (0x00033766) navi_tabs_2_pane

0x5396,	// (0x00033766) navi_tabs_3_long_pane

0x5396,	// (0x00033766) navi_tabs_3_pane

0x5396,	// (0x00033766) navi_tabs_4_pane

0xb001,	// (0x000393d1) tabs_2_active_pane_ParamLimits

0xb001,	// (0x000393d1) tabs_2_active_pane

0xb011,	// (0x000393e1) tabs_2_passive_pane_ParamLimits

0xb011,	// (0x000393e1) tabs_2_passive_pane

0xafcf,	// (0x0003939f) tabs_3_active_pane_ParamLimits

0xafcf,	// (0x0003939f) tabs_3_active_pane

0xafdf,	// (0x000393af) tabs_3_passive_pane_ParamLimits

0xafdf,	// (0x000393af) tabs_3_passive_pane

0xaff0,	// (0x000393c0) tabs_3_passive_pane_cp_ParamLimits

0xaff0,	// (0x000393c0) tabs_3_passive_pane_cp

0xaf8b,	// (0x0003935b) tabs_4_active_pane_ParamLimits

0xaf8b,	// (0x0003935b) tabs_4_active_pane

0xaf9c,	// (0x0003936c) tabs_4_passive_pane_ParamLimits

0xaf9c,	// (0x0003936c) tabs_4_passive_pane

0xafad,	// (0x0003937d) tabs_4_passive_pane_cp_ParamLimits

0xafad,	// (0x0003937d) tabs_4_passive_pane_cp

0xafbe,	// (0x0003938e) tabs_4_passive_pane_cp2_ParamLimits

0xafbe,	// (0x0003938e) tabs_4_passive_pane_cp2

0xaf67,	// (0x00039337) tabs_2_long_active_pane_ParamLimits

0xaf67,	// (0x00039337) tabs_2_long_active_pane

0xaf79,	// (0x00039349) tabs_2_long_passive_pane_ParamLimits

0xaf79,	// (0x00039349) tabs_2_long_passive_pane

0xaf28,	// (0x000392f8) tabs_3_long_active_pane_ParamLimits

0xaf28,	// (0x000392f8) tabs_3_long_active_pane

0xaf3b,	// (0x0003930b) tabs_3_long_passive_pane_ParamLimits

0xaf3b,	// (0x0003930b) tabs_3_long_passive_pane

0xaf54,	// (0x00039324) tabs_3_long_passive_pane_cp_ParamLimits

0xaf54,	// (0x00039324) tabs_3_long_passive_pane_cp

0xaece,	// (0x0003929e) volume_small_pane_g1

0xaed7,	// (0x000392a7) volume_small_pane_g2

0xaee0,	// (0x000392b0) volume_small_pane_g3

0xaee9,	// (0x000392b9) volume_small_pane_g4

0xaef2,	// (0x000392c2) volume_small_pane_g5

0xaefb,	// (0x000392cb) volume_small_pane_g6

0xaf04,	// (0x000392d4) volume_small_pane_g7

0xaf0d,	// (0x000392dd) volume_small_pane_g8

0xaf16,	// (0x000392e6) volume_small_pane_g9

0xaf1f,	// (0x000392ef) volume_small_pane_g10

0x0009,

0xf8f4,	// (0x0003dcc4) volume_small_pane_g

0x44d9,	// (0x000328a9) bg_active_tab_pane_cp2_ParamLimits

0x44d9,	// (0x000328a9) bg_active_tab_pane_cp2

0x9d06,	// (0x000380d6) tabs_3_active_pane_g1

0x9d0e,	// (0x000380de) tabs_3_active_pane_t1

0x44d9,	// (0x000328a9) bg_passive_tab_pane_cp2_ParamLimits

0x44d9,	// (0x000328a9) bg_passive_tab_pane_cp2

0x9d06,	// (0x000380d6) tabs_3_passive_pane_g1

0x9d0e,	// (0x000380de) tabs_3_passive_pane_t1

0x44d9,	// (0x000328a9) bg_active_tab_pane_cp3_ParamLimits

0x44d9,	// (0x000328a9) bg_active_tab_pane_cp3

0x9d20,	// (0x000380f0) tabs_4_active_pane_g1

0x9d28,	// (0x000380f8) tabs_4_active_pane_t1

0x44d9,	// (0x000328a9) bg_passive_tab_pane_cp3_ParamLimits

0x44d9,	// (0x000328a9) bg_passive_tab_pane_cp3

0x9d20,	// (0x000380f0) tabs_4_1_passive_pane_g1

0x9d28,	// (0x000380f8) tabs_4_1_passive_pane_t1

0x4c3b,	// (0x0003300b) list_highlight_pane_cp2

0xc652,	// (0x0003aa22) list_set_pane_ParamLimits

0xc652,	// (0x0003aa22) list_set_pane

0xc6f8,	// (0x0003aac8) main_pane_set_t1_ParamLimits

0xc6f8,	// (0x0003aac8) main_pane_set_t1

0xc718,	// (0x0003aae8) main_pane_set_t2_ParamLimits

0xc718,	// (0x0003aae8) main_pane_set_t2

0xc72c,	// (0x0003aafc) main_pane_set_t3_ParamLimits

0xc72c,	// (0x0003aafc) main_pane_set_t3

0xc73e,	// (0x0003ab0e) main_pane_set_t4_ParamLimits

0xc73e,	// (0x0003ab0e) main_pane_set_t4

0x0003,

0xf9c4,	// (0x0003dd94) main_pane_set_t_ParamLimits

0xf9c4,	// (0x0003dd94) main_pane_set_t

0xc750,	// (0x0003ab20) setting_code_pane

0xc75c,	// (0x0003ab2c) setting_slider_graphic_pane

0xc75c,	// (0x0003ab2c) setting_slider_pane

0xc75c,	// (0x0003ab2c) setting_text_pane

0xc75c,	// (0x0003ab2c) setting_volume_pane

0x9d3a,	// (0x0003810a) volume_set_pane

0x44d9,	// (0x000328a9) bg_set_opt_pane_cp

0x9d42,	// (0x00038112) setting_slider_pane_t1

0x9d5b,	// (0x0003812b) setting_slider_pane_t2

0x9d75,	// (0x00038145) setting_slider_pane_t3

0x0002,

0xf5a2,	// (0x0003d972) setting_slider_pane_t

0x9d8d,	// (0x0003815d) slider_set_pane

0x447d,	// (0x0003284d) bg_set_opt_pane_cp2

0x44e7,	// (0x000328b7) setting_slider_graphic_pane_g1

0x9da3,	// (0x00038173) setting_slider_graphic_pane_t1

0x9db3,	// (0x00038183) setting_slider_graphic_pane_t2

0x0001,

0xf5a9,	// (0x0003d979) setting_slider_graphic_pane_t

0x9dc3,	// (0x00038193) slider_set_pane_cp

0x447d,	// (0x0003284d) input_focus_pane_cp1

0x6bfa,	// (0x00034fca) list_set_text_pane

0x4473,	// (0x00032843) setting_text_pane_g1

0x447d,	// (0x0003284d) input_focus_pane_cp2

0x4473,	// (0x00032843) setting_code_pane_g1

0x44f0,	// (0x000328c0) setting_code_pane_t1

0x8a8e,	// (0x00036e5e) set_text_pane_t1_ParamLimits

0x8a8e,	// (0x00036e5e) set_text_pane_t1

0x4b4a,	// (0x00032f1a) set_opt_bg_pane_g1

0x4b52,	// (0x00032f22) set_opt_bg_pane_g2

0x6bd4,	// (0x00034fa4) set_opt_bg_pane_g3

0x4b62,	// (0x00032f32) set_opt_bg_pane_g4

0x4b6a,	// (0x00032f3a) set_opt_bg_pane_g5

0x4b72,	// (0x00032f42) set_opt_bg_pane_g6

0x6bde,	// (0x00034fae) set_opt_bg_pane_g7

0x6be6,	// (0x00034fb6) set_opt_bg_pane_g8

0x6bf0,	// (0x00034fc0) set_opt_bg_pane_g9

0x0008,

0xf9b1,	// (0x0003dd81) set_opt_bg_pane_g

0x6bc7,	// (0x00034f97) slider_set_pane_g1

0xb096,	// (0x00039466) slider_set_pane_g2

0x0006,

0xf9a2,	// (0x0003dd72) slider_set_pane_g

0xb032,	// (0x00039402) volume_set_pane_g1

0xb03a,	// (0x0003940a) volume_set_pane_g2

0xb042,	// (0x00039412) volume_set_pane_g3

0xb04a,	// (0x0003941a) volume_set_pane_g4

0xb052,	// (0x00039422) volume_set_pane_g5

0xb05a,	// (0x0003942a) volume_set_pane_g6

0xb062,	// (0x00039432) volume_set_pane_g7

0xb06a,	// (0x0003943a) volume_set_pane_g8

0xb072,	// (0x00039442) volume_set_pane_g9

0xb07a,	// (0x0003944a) volume_set_pane_g10

0x0009,

0xf97a,	// (0x0003dd4a) volume_set_pane_g

0x9dcb,	// (0x0003819b) indicator_pane_ParamLimits

0x9dcb,	// (0x0003819b) indicator_pane

0x9dd7,	// (0x000381a7) main_idle_pane_g2_ParamLimits

0x9dd7,	// (0x000381a7) main_idle_pane_g2

0x9dff,	// (0x000381cf) main_pane_idle_g1_ParamLimits

0x9dff,	// (0x000381cf) main_pane_idle_g1

0x44fe,	// (0x000328ce) popup_clock_digital_analogue_window_ParamLimits

0x44fe,	// (0x000328ce) popup_clock_digital_analogue_window

0x9e0c,	// (0x000381dc) soft_indicator_pane_ParamLimits

0x9e0c,	// (0x000381dc) soft_indicator_pane

0x9e18,	// (0x000381e8) wallpaper_pane_ParamLimits

0x9e18,	// (0x000381e8) wallpaper_pane

0x4473,	// (0x00032843) wallpaper_pane_g1

0x9e24,	// (0x000381f4) indicator_pane_g1_ParamLimits

0x9e24,	// (0x000381f4) indicator_pane_g1

0x6d48,	// (0x00035118) navi_navi_icon_text_pane_srt_g1

0x452c,	// (0x000328fc) soft_indicator_pane_t1

0x4546,	// (0x00032916) aid_ps_area_pane

0x9e30,	// (0x00038200) aid_ps_clock_pane

0x4557,	// (0x00032927) aid_ps_indicator_pane

0x4563,	// (0x00032933) indicator_ps_pane_ParamLimits

0x4563,	// (0x00032933) indicator_ps_pane

0x4572,	// (0x00032942) power_save_pane_g1_ParamLimits

0x4572,	// (0x00032942) power_save_pane_g1

0x457e,	// (0x0003294e) power_save_pane_g2_ParamLimits

0x457e,	// (0x0003294e) power_save_pane_g2

0x988f,	// (0x00037c5f) aid_navinavi_width_pane

0x4546,	// (0x00032916) aid_ps_area_pane_ParamLimits

0x0001,

0xf5ae,	// (0x0003d97e) power_save_pane_g_ParamLimits

0xf5ae,	// (0x0003d97e) power_save_pane_g

0x458c,	// (0x0003295c) power_save_pane_t1_ParamLimits

0x458c,	// (0x0003295c) power_save_pane_t1

0x9e30,	// (0x00038200) aid_ps_clock_pane_ParamLimits

0x4557,	// (0x00032927) aid_ps_indicator_pane_ParamLimits

0x459e,	// (0x0003296e) power_save_pane_t4_ParamLimits

0x459e,	// (0x0003296e) power_save_pane_t4

0x0001,

0xf5b3,	// (0x0003d983) power_save_pane_t_ParamLimits

0xf5b3,	// (0x0003d983) power_save_pane_t

0x45c8,	// (0x00032998) power_save_t3_ParamLimits

0x45c8,	// (0x00032998) power_save_t3

0x45b3,	// (0x00032983) power_save_t2_ParamLimits

0x45b3,	// (0x00032983) power_save_t2

0x45dd,	// (0x000329ad) indicator_ps_pane_g1

0x9e3e,	// (0x0003820e) ai_gene_pane_ParamLimits

0x9e3e,	// (0x0003820e) ai_gene_pane

0x9e4a,	// (0x0003821a) ai_links_pane_ParamLimits

0x9e4a,	// (0x0003821a) ai_links_pane

0x9e56,	// (0x00038226) indicator_pane_cp1_ParamLimits

0x9e56,	// (0x00038226) indicator_pane_cp1

0x9e62,	// (0x00038232) main_pane_idle_g1_cp_ParamLimits

0x9e62,	// (0x00038232) main_pane_idle_g1_cp

0x45e6,	// (0x000329b6) popup_ai_links_title_window

0x9e6e,	// (0x0003823e) soft_indicator_pane_cp1_ParamLimits

0x9e6e,	// (0x0003823e) soft_indicator_pane_cp1

0x6a1b,	// (0x00034deb) ai_links_pane_g1

0x6a24,	// (0x00034df4) grid_ai_links_pane

0xc5a5,	// (0x0003a975) ai_gene_pane_1

0x6a09,	// (0x00034dd9) ai_gene_pane_2

0x6a12,	// (0x00034de2) list_highlight_pane_cp4

0xc589,	// (0x0003a959) cell_ai_link_pane_ParamLimits

0xc589,	// (0x0003a959) cell_ai_link_pane

0x6a01,	// (0x00034dd1) cell_ai_link_pane_g1

0x47a0,	// (0x00032b70) cell_ai_link_pane_g2

0x0001,

0xf955,	// (0x0003dd25) cell_ai_link_pane_g

0x447d,	// (0x0003284d) grid_highlight_cp2

0x447d,	// (0x0003284d) bg_popup_sub_pane_cp1

0x45fd,	// (0x000329cd) popup_ai_links_title_window_t1

0x694f,	// (0x00034d1f) ai_gene_pane_1_g1_ParamLimits

0x694f,	// (0x00034d1f) ai_gene_pane_1_g1

0x695b,	// (0x00034d2b) ai_gene_pane_1_g2_ParamLimits

0x695b,	// (0x00034d2b) ai_gene_pane_1_g2

0x0001,

0xf94b,	// (0x0003dd1b) ai_gene_pane_1_g_ParamLimits

0xf94b,	// (0x0003dd1b) ai_gene_pane_1_g

0x6968,	// (0x00034d38) ai_gene_pane_1_t1_ParamLimits

0x6968,	// (0x00034d38) ai_gene_pane_1_t1

0x699c,	// (0x00034d6c) grid_ai_soft_ind_pane

0x693a,	// (0x00034d0a) ai_gene_pane_2_t1_ParamLimits

0x693a,	// (0x00034d0a) ai_gene_pane_2_t1

0x9e7a,	// (0x0003824a) main_pane_empty_t1_ParamLimits

0x9e7a,	// (0x0003824a) main_pane_empty_t1

0x9e92,	// (0x00038262) main_pane_empty_t2_ParamLimits

0x9e92,	// (0x00038262) main_pane_empty_t2

0x9ea7,	// (0x00038277) main_pane_empty_t3_ParamLimits

0x9ea7,	// (0x00038277) main_pane_empty_t3

0x9eb9,	// (0x00038289) main_pane_empty_t4_ParamLimits

0x9eb9,	// (0x00038289) main_pane_empty_t4

0x9ecb,	// (0x0003829b) main_pane_empty_t5_ParamLimits

0x9ecb,	// (0x0003829b) main_pane_empty_t5

0x0004,

0xf5b8,	// (0x0003d988) main_pane_empty_t_ParamLimits

0xf5b8,	// (0x0003d988) main_pane_empty_t

0x4b9b,	// (0x00032f6b) bg_popup_window_pane_ParamLimits

0x4b9b,	// (0x00032f6b) bg_popup_window_pane

0x66c8,	// (0x00034a98) find_popup_pane_cp2_ParamLimits

0x66c8,	// (0x00034a98) find_popup_pane_cp2

0x66d4,	// (0x00034aa4) heading_pane_ParamLimits

0x66d4,	// (0x00034aa4) heading_pane

0x447d,	// (0x0003284d) bg_popup_sub_pane

0xc4f9,	// (0x0003a8c9) bg_popup_window_pane_g1_ParamLimits

0xc4f9,	// (0x0003a8c9) bg_popup_window_pane_g1

0xc505,	// (0x0003a8d5) bg_popup_window_pane_g2_ParamLimits

0xc505,	// (0x0003a8d5) bg_popup_window_pane_g2

0xc511,	// (0x0003a8e1) bg_popup_window_pane_g3_ParamLimits

0xc511,	// (0x0003a8e1) bg_popup_window_pane_g3

0xc51d,	// (0x0003a8ed) bg_popup_window_pane_g4_ParamLimits

0xc51d,	// (0x0003a8ed) bg_popup_window_pane_g4

0xc529,	// (0x0003a8f9) bg_popup_window_pane_g5_ParamLimits

0xc529,	// (0x0003a8f9) bg_popup_window_pane_g5

0xc535,	// (0x0003a905) bg_popup_window_pane_g6_ParamLimits

0xc535,	// (0x0003a905) bg_popup_window_pane_g6

0xc541,	// (0x0003a911) bg_popup_window_pane_g7_ParamLimits

0xc541,	// (0x0003a911) bg_popup_window_pane_g7

0xc54d,	// (0x0003a91d) bg_popup_window_pane_g8_ParamLimits

0xc54d,	// (0x0003a91d) bg_popup_window_pane_g8

0xc559,	// (0x0003a929) bg_popup_window_pane_g9_ParamLimits

0xc559,	// (0x0003a929) bg_popup_window_pane_g9

0x66ae,	// (0x00034a7e) bg_popup_window_pane_g10_ParamLimits

0x66ae,	// (0x00034a7e) bg_popup_window_pane_g10

0x0009,

0xf913,	// (0x0003dce3) bg_popup_window_pane_g_ParamLimits

0xf913,	// (0x0003dce3) bg_popup_window_pane_g

0x6665,	// (0x00034a35) bg_popup_heading_pane_ParamLimits

0x6665,	// (0x00034a35) bg_popup_heading_pane

0xb1c2,	// (0x00039592) tabs_4_passive_pane_cp_srt_ParamLimits

0xb1c2,	// (0x00039592) tabs_4_passive_pane_cp_srt

0xb1d4,	// (0x000395a4) tabs_4_passive_pane_srt_ParamLimits

0x6679,	// (0x00034a49) heading_pane_g2

0xb1d4,	// (0x000395a4) tabs_4_passive_pane_srt

0x4c3b,	// (0x0003300b) bg_passive_tab_pane_cp3_srt_ParamLimits

0x4c3b,	// (0x0003300b) bg_passive_tab_pane_cp3_srt

0x6681,	// (0x00034a51) heading_pane_t1_ParamLimits

0x6681,	// (0x00034a51) heading_pane_t1

0x6698,	// (0x00034a68) heading_pane_t2_ParamLimits

0x6698,	// (0x00034a68) heading_pane_t2

0x0001,

0xf90e,	// (0x0003dcde) heading_pane_t_ParamLimits

0xf90e,	// (0x0003dcde) heading_pane_t

0x6192,	// (0x00034562) bg_popup_heading_pane_g1

0x6223,	// (0x000345f3) bg_popup_heading_pane_g2

0x622d,	// (0x000345fd) bg_popup_heading_pane_g3

0x6237,	// (0x00034607) bg_popup_heading_pane_g4

0x6241,	// (0x00034611) bg_popup_heading_pane_g5

0x624b,	// (0x0003461b) bg_popup_heading_pane_g6

0x6253,	// (0x00034623) bg_popup_heading_pane_g7

0x625b,	// (0x0003462b) bg_popup_heading_pane_g8

0x6265,	// (0x00034635) bg_popup_heading_pane_g9

0x0008,

0xf8ca,	// (0x0003dc9a) bg_popup_heading_pane_g

0x5a56,	// (0x00033e26) bg_popup_sub_pane_g1

0x5a66,	// (0x00033e36) bg_popup_sub_pane_g2

0x5a5e,	// (0x00033e2e) bg_popup_sub_pane_g3

0x5a76,	// (0x00033e46) bg_popup_sub_pane_g4

0x5a6e,	// (0x00033e3e) bg_popup_sub_pane_g5

0x5a7e,	// (0x00033e4e) bg_popup_sub_pane_g6

0x5a86,	// (0x00033e56) bg_popup_sub_pane_g7

0x5a96,	// (0x00033e66) bg_popup_sub_pane_g8

0x5a8e,	// (0x00033e5e) bg_popup_sub_pane_g9

0x0008,

0xf8a4,	// (0x0003dc74) bg_popup_sub_pane_g

0x44cb,	// (0x0003289b) bg_popup_window_pane_cp5_ParamLimits

0x44cb,	// (0x0003289b) bg_popup_window_pane_cp5

0x461a,	// (0x000329ea) popup_note_window_g1_ParamLimits

0x461a,	// (0x000329ea) popup_note_window_g1

0x4626,	// (0x000329f6) popup_note_window_t1_ParamLimits

0x4626,	// (0x000329f6) popup_note_window_t1

0x463c,	// (0x00032a0c) popup_note_window_t2_ParamLimits

0x463c,	// (0x00032a0c) popup_note_window_t2

0x4652,	// (0x00032a22) popup_note_window_t3_ParamLimits

0x4652,	// (0x00032a22) popup_note_window_t3

0x4668,	// (0x00032a38) popup_note_window_t4_ParamLimits

0x4668,	// (0x00032a38) popup_note_window_t4

0x4690,	// (0x00032a60) popup_note_window_t5_ParamLimits

0x4690,	// (0x00032a60) popup_note_window_t5

0x0004,

0xf5c3,	// (0x0003d993) popup_note_window_t_ParamLimits

0xf5c3,	// (0x0003d993) popup_note_window_t

0x46b4,	// (0x00032a84) bg_popup_window_pane_cp6_ParamLimits

0x46b4,	// (0x00032a84) bg_popup_window_pane_cp6

0x610e,	// (0x000344de) popup_note_image_window_g1_ParamLimits

0x610e,	// (0x000344de) popup_note_image_window_g1

0x611a,	// (0x000344ea) popup_note_image_window_g2_ParamLimits

0x611a,	// (0x000344ea) popup_note_image_window_g2

0x0001,

0xf898,	// (0x0003dc68) popup_note_image_window_g_ParamLimits

0xf898,	// (0x0003dc68) popup_note_image_window_g

0x6133,	// (0x00034503) popup_note_image_window_t1_ParamLimits

0x6133,	// (0x00034503) popup_note_image_window_t1

0x614c,	// (0x0003451c) popup_note_image_window_t2_ParamLimits

0x614c,	// (0x0003451c) popup_note_image_window_t2

0x6165,	// (0x00034535) popup_note_image_window_t3_ParamLimits

0x6165,	// (0x00034535) popup_note_image_window_t3

0x0002,

0xf89d,	// (0x0003dc6d) popup_note_image_window_t_ParamLimits

0xf89d,	// (0x0003dc6d) popup_note_image_window_t

0x5feb,	// (0x000343bb) bg_popup_window_pane_cp7_ParamLimits

0x5feb,	// (0x000343bb) bg_popup_window_pane_cp7

0x601b,	// (0x000343eb) popup_note_wait_window_g1_ParamLimits

0x601b,	// (0x000343eb) popup_note_wait_window_g1

0x6027,	// (0x000343f7) popup_note_wait_window_g2_ParamLimits

0x6027,	// (0x000343f7) popup_note_wait_window_g2

0x0002,

0xf886,	// (0x0003dc56) popup_note_wait_window_g_ParamLimits

0xf886,	// (0x0003dc56) popup_note_wait_window_g

0x603f,	// (0x0003440f) popup_note_wait_window_t1_ParamLimits

0x603f,	// (0x0003440f) popup_note_wait_window_t1

0x6066,	// (0x00034436) popup_note_wait_window_t2_ParamLimits

0x6066,	// (0x00034436) popup_note_wait_window_t2

0x6083,	// (0x00034453) popup_note_wait_window_t3_ParamLimits

0x6083,	// (0x00034453) popup_note_wait_window_t3

0x6096,	// (0x00034466) popup_note_wait_window_t4_ParamLimits

0x6096,	// (0x00034466) popup_note_wait_window_t4

0x0004,

0xf88d,	// (0x0003dc5d) popup_note_wait_window_t_ParamLimits

0xf88d,	// (0x0003dc5d) popup_note_wait_window_t

0x60bb,	// (0x0003448b) wait_bar_pane_ParamLimits

0x60bb,	// (0x0003448b) wait_bar_pane

0x447d,	// (0x0003284d) wait_anim_pane

0x447d,	// (0x0003284d) wait_border_pane

0x4473,	// (0x00032843) wait_anim_pane_g1

0x4473,	// (0x00032843) wait_anim_pane_g2

0x0001,

0xf74c,	// (0x0003db1c) wait_anim_pane_g

0x5f8f,	// (0x0003435f) wait_border_pane_g1

0x5f9a,	// (0x0003436a) wait_border_pane_g2

0x5fa3,	// (0x00034373) wait_border_pane_g3

0x0002,

0xf87f,	// (0x0003dc4f) wait_border_pane_g

0x5ebc,	// (0x0003428c) bg_popup_window_pane_cp16_ParamLimits

0x5ebc,	// (0x0003428c) bg_popup_window_pane_cp16

0x5eca,	// (0x0003429a) indicator_popup_pane_cp4_ParamLimits

0x5eca,	// (0x0003429a) indicator_popup_pane_cp4

0x5ede,	// (0x000342ae) popup_query_data_window_t1_ParamLimits

0x5ede,	// (0x000342ae) popup_query_data_window_t1

0x5ef0,	// (0x000342c0) popup_query_data_window_t2_ParamLimits

0x5ef0,	// (0x000342c0) popup_query_data_window_t2

0x5f39,	// (0x00034309) popup_query_data_window_t3_ParamLimits

0x5f39,	// (0x00034309) popup_query_data_window_t3

0x0002,

0xf878,	// (0x0003dc48) popup_query_data_window_t_ParamLimits

0xf878,	// (0x0003dc48) popup_query_data_window_t

0x5f53,	// (0x00034323) query_popup_data_pane_ParamLimits

0x5f53,	// (0x00034323) query_popup_data_pane

0x5f67,	// (0x00034337) query_popup_data_pane_cp1_ParamLimits

0x5f67,	// (0x00034337) query_popup_data_pane_cp1

0x46b4,	// (0x00032a84) bg_popup_window_pane_cp10_ParamLimits

0x46b4,	// (0x00032a84) bg_popup_window_pane_cp10

0x5e1f,	// (0x000341ef) indicator_popup_pane_ParamLimits

0x5e1f,	// (0x000341ef) indicator_popup_pane

0x470b,	// (0x00032adb) popup_query_code_window_t1_ParamLimits

0x470b,	// (0x00032adb) popup_query_code_window_t1

0x5e37,	// (0x00034207) popup_query_code_window_t2_ParamLimits

0x5e37,	// (0x00034207) popup_query_code_window_t2

0x5e75,	// (0x00034245) popup_query_code_window_t3_ParamLimits

0x5e75,	// (0x00034245) popup_query_code_window_t3

0x0002,

0xf871,	// (0x0003dc41) popup_query_code_window_t_ParamLimits

0xf871,	// (0x0003dc41) popup_query_code_window_t

0x5ea4,	// (0x00034274) query_popup_pane_ParamLimits

0x5ea4,	// (0x00034274) query_popup_pane

0x46b4,	// (0x00032a84) bg_popup_window_pane_cp15_ParamLimits

0x46b4,	// (0x00032a84) bg_popup_window_pane_cp15

0x46d2,	// (0x00032aa2) indicator_popup_pane_cp1_ParamLimits

0x46d2,	// (0x00032aa2) indicator_popup_pane_cp1

0x46e5,	// (0x00032ab5) indicator_popup_pane_cp2_ParamLimits

0x46e5,	// (0x00032ab5) indicator_popup_pane_cp2

0x46f8,	// (0x00032ac8) popup_query_data_code_window_g1_ParamLimits

0x46f8,	// (0x00032ac8) popup_query_data_code_window_g1

0x470b,	// (0x00032adb) popup_query_data_code_window_t1_ParamLimits

0x470b,	// (0x00032adb) popup_query_data_code_window_t1

0x471d,	// (0x00032aed) popup_query_data_code_window_t2_ParamLimits

0x471d,	// (0x00032aed) popup_query_data_code_window_t2

0x472f,	// (0x00032aff) popup_query_data_code_window_t3_ParamLimits

0x472f,	// (0x00032aff) popup_query_data_code_window_t3

0x4745,	// (0x00032b15) popup_query_data_code_window_t4_ParamLimits

0x4745,	// (0x00032b15) popup_query_data_code_window_t4

0x0003,

0xf5ce,	// (0x0003d99e) popup_query_data_code_window_t_ParamLimits

0xf5ce,	// (0x0003d99e) popup_query_data_code_window_t

0xadeb,	// (0x000391bb) list_single_midp_graphic_pane_g3

0x475d,	// (0x00032b2d) query_popup_data_pane_cp2_ParamLimits

0x4770,	// (0x00032b40) query_popup_pane_cp2_ParamLimits

0x4770,	// (0x00032b40) query_popup_pane_cp2

0x447d,	// (0x0003284d) bg_popup_window_pane_cp11

0x5df3,	// (0x000341c3) heading_pane_cp5

0x47fe,	// (0x00032bce) listscroll_popup_info_pane

0x447d,	// (0x0003284d) input_focus_pane_cp3

0x4783,	// (0x00032b53) query_popup_pane_t1

0x4791,	// (0x00032b61) list_popup_info_pane_ParamLimits

0x4791,	// (0x00032b61) list_popup_info_pane

0x47a0,	// (0x00032b70) listscroll_popup_info_pane_g1

0x47a8,	// (0x00032b78) scroll_pane_cp7

0x47b2,	// (0x00032b82) popup_info_list_pane_t1_ParamLimits

0x47b2,	// (0x00032b82) popup_info_list_pane_t1

0x47cc,	// (0x00032b9c) popup_info_list_pane_t2_ParamLimits

0x47cc,	// (0x00032b9c) popup_info_list_pane_t2

0x0001,

0xf5d7,	// (0x0003d9a7) popup_info_list_pane_t_ParamLimits

0xf5d7,	// (0x0003d9a7) popup_info_list_pane_t

0x447d,	// (0x0003284d) bg_popup_window_pane_cp12

0x6d62,	// (0x00035132) find_popup_pane

0x44d9,	// (0x000328a9) bg_popup_window_pane_cp3

0x47e6,	// (0x00032bb6) heading_pane_cp3

0x47f2,	// (0x00032bc2) listscroll_popup_graphic_pane

0x447d,	// (0x0003284d) bg_popup_window_pane_cp4

0x9f2f,	// (0x000382ff) heading_pane_cp4

0x47fe,	// (0x00032bce) listscroll_popup_colour_pane

0x9f39,	// (0x00038309) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x9f39,	// (0x00038309) cell_large_graphic_colour_none_popup_pane

0x9f4d,	// (0x0003831d) grid_large_graphic_colour_popup_pane_ParamLimits

0x9f4d,	// (0x0003831d) grid_large_graphic_colour_popup_pane

0x9f79,	// (0x00038349) listscroll_popup_colour_pane_g1_ParamLimits

0x9f79,	// (0x00038349) listscroll_popup_colour_pane_g1

0x9f90,	// (0x00038360) listscroll_popup_colour_pane_g2_ParamLimits

0x9f90,	// (0x00038360) listscroll_popup_colour_pane_g2

0x9fa7,	// (0x00038377) listscroll_popup_colour_pane_g3_ParamLimits

0x9fa7,	// (0x00038377) listscroll_popup_colour_pane_g3

0x9fb7,	// (0x00038387) listscroll_popup_colour_pane_g4_ParamLimits

0x9fb7,	// (0x00038387) listscroll_popup_colour_pane_g4

0x0003,

0xf5dc,	// (0x0003d9ac) listscroll_popup_colour_pane_g_ParamLimits

0xf5dc,	// (0x0003d9ac) listscroll_popup_colour_pane_g

0x4806,	// (0x00032bd6) scroll_pane_cp6_ParamLimits

0x4806,	// (0x00032bd6) scroll_pane_cp6

0x9fcb,	// (0x0003839b) cell_large_graphic_colour_popup_pane_ParamLimits

0x9fcb,	// (0x0003839b) cell_large_graphic_colour_popup_pane

0x4818,	// (0x00032be8) cell_large_graphic_colour_none_popup_pane_t1

0x447d,	// (0x0003284d) grid_highlight_pane_cp5

0x4827,	// (0x00032bf7) cell_large_graphic_colour_popup_pane_g1

0x482f,	// (0x00032bff) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5e5,	// (0x0003d9b5) cell_large_graphic_colour_popup_pane_g

0x4837,	// (0x00032c07) cell_large_graphic_colour_popup_pane_g2_copy1

0x4840,	// (0x00032c10) grid_highlight_pane_cp4

0x4848,	// (0x00032c18) bg_popup_window_pane_cp8_ParamLimits

0x4848,	// (0x00032c18) bg_popup_window_pane_cp8

0x4863,	// (0x00032c33) popup_snote_single_text_window_g1_ParamLimits

0x4863,	// (0x00032c33) popup_snote_single_text_window_g1

0x4875,	// (0x00032c45) popup_snote_single_text_window_t1_ParamLimits

0x4875,	// (0x00032c45) popup_snote_single_text_window_t1

0x4888,	// (0x00032c58) popup_snote_single_text_window_t2_ParamLimits

0x4888,	// (0x00032c58) popup_snote_single_text_window_t2

0x489b,	// (0x00032c6b) popup_snote_single_text_window_t3_ParamLimits

0x489b,	// (0x00032c6b) popup_snote_single_text_window_t3

0x48d4,	// (0x00032ca4) popup_snote_single_text_window_t4_ParamLimits

0x48d4,	// (0x00032ca4) popup_snote_single_text_window_t4

0x4908,	// (0x00032cd8) popup_snote_single_text_window_t5_ParamLimits

0x4908,	// (0x00032cd8) popup_snote_single_text_window_t5

0x0004,

0xf5ea,	// (0x0003d9ba) popup_snote_single_text_window_t_ParamLimits

0xf5ea,	// (0x0003d9ba) popup_snote_single_text_window_t

0x4937,	// (0x00032d07) bg_popup_window_pane_cp9_ParamLimits

0x4937,	// (0x00032d07) bg_popup_window_pane_cp9

0x4863,	// (0x00032c33) popup_snote_single_graphic_window_g1_ParamLimits

0x4863,	// (0x00032c33) popup_snote_single_graphic_window_g1

0x4945,	// (0x00032d15) popup_snote_single_graphic_window_g2_ParamLimits

0x4945,	// (0x00032d15) popup_snote_single_graphic_window_g2

0x0001,

0xf5f5,	// (0x0003d9c5) popup_snote_single_graphic_window_g_ParamLimits

0xf5f5,	// (0x0003d9c5) popup_snote_single_graphic_window_g

0x4951,	// (0x00032d21) popup_snote_single_graphic_window_t1_ParamLimits

0x4951,	// (0x00032d21) popup_snote_single_graphic_window_t1

0x4964,	// (0x00032d34) popup_snote_single_graphic_window_t2_ParamLimits

0x4964,	// (0x00032d34) popup_snote_single_graphic_window_t2

0x4977,	// (0x00032d47) popup_snote_single_graphic_window_t3_ParamLimits

0x4977,	// (0x00032d47) popup_snote_single_graphic_window_t3

0x49b0,	// (0x00032d80) popup_snote_single_graphic_window_t4_ParamLimits

0x49b0,	// (0x00032d80) popup_snote_single_graphic_window_t4

0x49e4,	// (0x00032db4) popup_snote_single_graphic_window_t5_ParamLimits

0x49e4,	// (0x00032db4) popup_snote_single_graphic_window_t5

0x0004,

0xf5fa,	// (0x0003d9ca) popup_snote_single_graphic_window_t_ParamLimits

0xf5fa,	// (0x0003d9ca) popup_snote_single_graphic_window_t

0x6cea,	// (0x000350ba) grid_graphic_popup_pane_ParamLimits

0x6cea,	// (0x000350ba) grid_graphic_popup_pane

0x6d12,	// (0x000350e2) listscroll_popup_graphic_pane_g1_ParamLimits

0x6d12,	// (0x000350e2) listscroll_popup_graphic_pane_g1

0xc847,	// (0x0003ac17) listscroll_popup_graphic_pane_g2_ParamLimits

0xc847,	// (0x0003ac17) listscroll_popup_graphic_pane_g2

0x0001,

0xf9ee,	// (0x0003ddbe) listscroll_popup_graphic_pane_g_ParamLimits

0xf9ee,	// (0x0003ddbe) listscroll_popup_graphic_pane_g

0x65f9,	// (0x000349c9) scroll_pane_cp5

0xc806,	// (0x0003abd6) cell_graphic_popup_pane_ParamLimits

0xc806,	// (0x0003abd6) cell_graphic_popup_pane

0x6cb5,	// (0x00035085) cell_graphic_popup_pane_g1

0x6cbd,	// (0x0003508d) cell_graphic_popup_pane_g2

0x4837,	// (0x00032c07) cell_graphic_popup_pane_g3

0x0002,

0xf9e7,	// (0x0003ddb7) cell_graphic_popup_pane_g

0x6cc6,	// (0x00035096) cell_graphic_popup_pane_t2

0x4840,	// (0x00032c10) grid_highlight_pane_cp3

0x4a25,	// (0x00032df5) list_gen_pane_ParamLimits

0x4a25,	// (0x00032df5) list_gen_pane

0x4a4d,	// (0x00032e1d) scroll_pane

0xc7b9,	// (0x0003ab89) bg_list_pane_g1_ParamLimits

0xc7b9,	// (0x0003ab89) bg_list_pane_g1

0x6c58,	// (0x00035028) bg_list_pane_g2_ParamLimits

0x6c58,	// (0x00035028) bg_list_pane_g2

0x6c6b,	// (0x0003503b) bg_list_pane_g3_ParamLimits

0x6c6b,	// (0x0003503b) bg_list_pane_g3

0x6c7d,	// (0x0003504d) bg_list_pane_g4_ParamLimits

0x6c7d,	// (0x0003504d) bg_list_pane_g4

0xc7d4,	// (0x0003aba4) bg_list_pane_g5_ParamLimits

0xc7d4,	// (0x0003aba4) bg_list_pane_g5

0x0004,

0xf9dc,	// (0x0003ddac) bg_list_pane_g_ParamLimits

0xf9dc,	// (0x0003ddac) bg_list_pane_g

0x93ac,	// (0x0003777c) list_double2_graphic_large_graphic_pane_ParamLimits

0x93ac,	// (0x0003777c) list_double2_graphic_large_graphic_pane

0x93ac,	// (0x0003777c) list_double2_graphic_pane_ParamLimits

0x93ac,	// (0x0003777c) list_double2_graphic_pane

0x93ac,	// (0x0003777c) list_double2_large_graphic_pane_ParamLimits

0x93ac,	// (0x0003777c) list_double2_large_graphic_pane

0xc79e,	// (0x0003ab6e) list_double2_pane_ParamLimits

0xc79e,	// (0x0003ab6e) list_double2_pane

0x93ac,	// (0x0003777c) list_double_graphic_heading_pane_ParamLimits

0x93ac,	// (0x0003777c) list_double_graphic_heading_pane

0x93ac,	// (0x0003777c) list_double_graphic_pane_ParamLimits

0x93ac,	// (0x0003777c) list_double_graphic_pane

0x93ac,	// (0x0003777c) list_double_heading_pane_ParamLimits

0x93ac,	// (0x0003777c) list_double_heading_pane

0x93ac,	// (0x0003777c) list_double_large_graphic_pane_ParamLimits

0x93ac,	// (0x0003777c) list_double_large_graphic_pane

0x93ac,	// (0x0003777c) list_double_number_pane_ParamLimits

0x93ac,	// (0x0003777c) list_double_number_pane

0x93ac,	// (0x0003777c) list_double_pane_ParamLimits

0x93ac,	// (0x0003777c) list_double_pane

0x93ac,	// (0x0003777c) list_double_time_pane_ParamLimits

0x93ac,	// (0x0003777c) list_double_time_pane

0x93ac,	// (0x0003777c) list_setting_number_pane_ParamLimits

0x93ac,	// (0x0003777c) list_setting_number_pane

0x93ac,	// (0x0003777c) list_setting_pane_ParamLimits

0x93ac,	// (0x0003777c) list_setting_pane

0xb129,	// (0x000394f9) list_single_2graphic_pane_ParamLimits

0xb129,	// (0x000394f9) list_single_2graphic_pane

0xb129,	// (0x000394f9) list_single_graphic_heading_pane_ParamLimits

0xb129,	// (0x000394f9) list_single_graphic_heading_pane

0xb129,	// (0x000394f9) list_single_graphic_pane_ParamLimits

0xb129,	// (0x000394f9) list_single_graphic_pane

0xb129,	// (0x000394f9) list_single_heading_pane_ParamLimits

0xb129,	// (0x000394f9) list_single_heading_pane

0xb17f,	// (0x0003954f) list_single_large_graphic_pane_ParamLimits

0xb17f,	// (0x0003954f) list_single_large_graphic_pane

0xb129,	// (0x000394f9) list_single_number_heading_pane_ParamLimits

0xb129,	// (0x000394f9) list_single_number_heading_pane

0xb129,	// (0x000394f9) list_single_number_pane_ParamLimits

0xb129,	// (0x000394f9) list_single_number_pane

0xb129,	// (0x000394f9) list_single_pane_ParamLimits

0xb129,	// (0x000394f9) list_single_pane

0x447d,	// (0x0003284d) list_highlight_pane_cp1

0x9ff4,	// (0x000383c4) list_single_pane_g1_ParamLimits

0x9ff4,	// (0x000383c4) list_single_pane_g1

0xa000,	// (0x000383d0) list_single_pane_g2_ParamLimits

0xa000,	// (0x000383d0) list_single_pane_g2

0x0001,

0xf616,	// (0x0003d9e6) list_single_pane_g_ParamLimits

0xf616,	// (0x0003d9e6) list_single_pane_g

0x9396,	// (0x00037766) list_single_pane_t1_ParamLimits

0x9396,	// (0x00037766) list_single_pane_t1

0x9ff4,	// (0x000383c4) list_single_number_pane_g1_ParamLimits

0x9ff4,	// (0x000383c4) list_single_number_pane_g1

0xa000,	// (0x000383d0) list_single_number_pane_g2_ParamLimits

0xa000,	// (0x000383d0) list_single_number_pane_g2

0x0001,

0xf616,	// (0x0003d9e6) list_single_number_pane_g_ParamLimits

0xf616,	// (0x0003d9e6) list_single_number_pane_g

0x933e,	// (0x0003770e) list_single_number_pane_t1_ParamLimits

0x933e,	// (0x0003770e) list_single_number_pane_t1

0x9354,	// (0x00037724) list_single_number_pane_t2_ParamLimits

0x9354,	// (0x00037724) list_single_number_pane_t2

0x0001,

0xf99d,	// (0x0003dd6d) list_single_number_pane_t_ParamLimits

0xf99d,	// (0x0003dd6d) list_single_number_pane_t

0x8aa7,	// (0x00036e77) list_single_graphic_pane_g1_ParamLimits

0x8aa7,	// (0x00036e77) list_single_graphic_pane_g1

0x9ff4,	// (0x000383c4) list_single_graphic_pane_g2_ParamLimits

0x9ff4,	// (0x000383c4) list_single_graphic_pane_g2

0xa000,	// (0x000383d0) list_single_graphic_pane_g3_ParamLimits

0xa000,	// (0x000383d0) list_single_graphic_pane_g3

0x0002,

0xf605,	// (0x0003d9d5) list_single_graphic_pane_g_ParamLimits

0xf605,	// (0x0003d9d5) list_single_graphic_pane_g

0x8ab3,	// (0x00036e83) list_single_graphic_pane_t1_ParamLimits

0x8ab3,	// (0x00036e83) list_single_graphic_pane_t1

0x8ac9,	// (0x00036e99) list_single_heading_pane_g1_ParamLimits

0x8ac9,	// (0x00036e99) list_single_heading_pane_g1

0xa000,	// (0x000383d0) list_single_heading_pane_g2_ParamLimits

0xa000,	// (0x000383d0) list_single_heading_pane_g2

0x0001,

0xf60c,	// (0x0003d9dc) list_single_heading_pane_g_ParamLimits

0xf60c,	// (0x0003d9dc) list_single_heading_pane_g

0x8adc,	// (0x00036eac) list_single_heading_pane_t1_ParamLimits

0x8adc,	// (0x00036eac) list_single_heading_pane_t1

0xa00c,	// (0x000383dc) list_single_heading_pane_t2_ParamLimits

0xa00c,	// (0x000383dc) list_single_heading_pane_t2

0x0001,

0xf611,	// (0x0003d9e1) list_single_heading_pane_t_ParamLimits

0xf611,	// (0x0003d9e1) list_single_heading_pane_t

0x9ff4,	// (0x000383c4) list_single_number_heading_pane_g1_ParamLimits

0x9ff4,	// (0x000383c4) list_single_number_heading_pane_g1

0xa000,	// (0x000383d0) list_single_number_heading_pane_g2_ParamLimits

0xa000,	// (0x000383d0) list_single_number_heading_pane_g2

0x0001,

0xf616,	// (0x0003d9e6) list_single_number_heading_pane_g_ParamLimits

0xf616,	// (0x0003d9e6) list_single_number_heading_pane_g

0x8af2,	// (0x00036ec2) list_single_number_heading_pane_t1_ParamLimits

0x8af2,	// (0x00036ec2) list_single_number_heading_pane_t1

0x8b08,	// (0x00036ed8) list_single_number_heading_pane_t2_ParamLimits

0x8b08,	// (0x00036ed8) list_single_number_heading_pane_t2

0x8b1a,	// (0x00036eea) list_single_number_heading_pane_t3_ParamLimits

0x8b1a,	// (0x00036eea) list_single_number_heading_pane_t3

0x0002,

0xf61b,	// (0x0003d9eb) list_single_number_heading_pane_t_ParamLimits

0xf61b,	// (0x0003d9eb) list_single_number_heading_pane_t

0x8b2c,	// (0x00036efc) list_single_graphic_heading_pane_g1_ParamLimits

0x8b2c,	// (0x00036efc) list_single_graphic_heading_pane_g1

0xa01e,	// (0x000383ee) list_single_graphic_heading_pane_g4_ParamLimits

0xa01e,	// (0x000383ee) list_single_graphic_heading_pane_g4

0xa000,	// (0x000383d0) list_single_graphic_heading_pane_g5_ParamLimits

0xa000,	// (0x000383d0) list_single_graphic_heading_pane_g5

0x0002,

0xf622,	// (0x0003d9f2) list_single_graphic_heading_pane_g_ParamLimits

0xf622,	// (0x0003d9f2) list_single_graphic_heading_pane_g

0x8af2,	// (0x00036ec2) list_single_graphic_heading_pane_t1_ParamLimits

0x8af2,	// (0x00036ec2) list_single_graphic_heading_pane_t1

0x8b44,	// (0x00036f14) list_single_graphic_heading_pane_t2_ParamLimits

0x8b44,	// (0x00036f14) list_single_graphic_heading_pane_t2

0x0001,

0xf629,	// (0x0003d9f9) list_single_graphic_heading_pane_t_ParamLimits

0xf629,	// (0x0003d9f9) list_single_graphic_heading_pane_t

0xa02f,	// (0x000383ff) list_single_large_graphic_pane_g1_ParamLimits

0xa02f,	// (0x000383ff) list_single_large_graphic_pane_g1

0xa03b,	// (0x0003840b) list_single_large_graphic_pane_g2_ParamLimits

0xa03b,	// (0x0003840b) list_single_large_graphic_pane_g2

0xa047,	// (0x00038417) list_single_large_graphic_pane_g3_ParamLimits

0xa047,	// (0x00038417) list_single_large_graphic_pane_g3

0x0002,

0xf62e,	// (0x0003d9fe) list_single_large_graphic_pane_g_ParamLimits

0xf62e,	// (0x0003d9fe) list_single_large_graphic_pane_g

0x5f9a,	// (0x0003436a) wait_border_pane_g2_copy1

0xa053,	// (0x00038423) list_single_large_graphic_pane_g4_cp2

0x8b5a,	// (0x00036f2a) list_single_large_graphic_pane_t1_ParamLimits

0x8b5a,	// (0x00036f2a) list_single_large_graphic_pane_t1

0x53dd,	// (0x000337ad) list_double_pane_g1_ParamLimits

0x53dd,	// (0x000337ad) list_double_pane_g1

0x8b70,	// (0x00036f40) list_double_pane_g2_ParamLimits

0x8b70,	// (0x00036f40) list_double_pane_g2

0x0001,

0xf635,	// (0x0003da05) list_double_pane_g_ParamLimits

0xf635,	// (0x0003da05) list_double_pane_g

0x8b7c,	// (0x00036f4c) list_double_pane_t1_ParamLimits

0x8b7c,	// (0x00036f4c) list_double_pane_t1

0x8b92,	// (0x00036f62) list_double_pane_t2_ParamLimits

0x8b92,	// (0x00036f62) list_double_pane_t2

0x0001,

0xf63a,	// (0x0003da0a) list_double_pane_t_ParamLimits

0xf63a,	// (0x0003da0a) list_double_pane_t

0x8ba4,	// (0x00036f74) list_double2_pane_g1_ParamLimits

0x8ba4,	// (0x00036f74) list_double2_pane_g1

0x8bb5,	// (0x00036f85) list_double2_pane_g2_ParamLimits

0x8bb5,	// (0x00036f85) list_double2_pane_g2

0x0001,

0xf63f,	// (0x0003da0f) list_double2_pane_g_ParamLimits

0xf63f,	// (0x0003da0f) list_double2_pane_g

0x8bc1,	// (0x00036f91) list_double2_pane_t1_ParamLimits

0x8bc1,	// (0x00036f91) list_double2_pane_t1

0x8bd7,	// (0x00036fa7) list_double2_pane_t2_ParamLimits

0x8bd7,	// (0x00036fa7) list_double2_pane_t2

0x0001,

0xf644,	// (0x0003da14) list_double2_pane_t_ParamLimits

0xf644,	// (0x0003da14) list_double2_pane_t

0x53dd,	// (0x000337ad) list_double_number_pane_g1_ParamLimits

0x53dd,	// (0x000337ad) list_double_number_pane_g1

0x8b70,	// (0x00036f40) list_double_number_pane_g2_ParamLimits

0x8b70,	// (0x00036f40) list_double_number_pane_g2

0x0001,

0xf635,	// (0x0003da05) list_double_number_pane_g_ParamLimits

0xf635,	// (0x0003da05) list_double_number_pane_g

0x8be9,	// (0x00036fb9) list_double_number_pane_t1_ParamLimits

0x8be9,	// (0x00036fb9) list_double_number_pane_t1

0x8bfb,	// (0x00036fcb) list_double_number_pane_t2_ParamLimits

0x8bfb,	// (0x00036fcb) list_double_number_pane_t2

0x8c11,	// (0x00036fe1) list_double_number_pane_t3_ParamLimits

0x8c11,	// (0x00036fe1) list_double_number_pane_t3

0x0002,

0xf649,	// (0x0003da19) list_double_number_pane_t_ParamLimits

0xf649,	// (0x0003da19) list_double_number_pane_t

0x8c23,	// (0x00036ff3) list_double_graphic_pane_g1_ParamLimits

0x8c23,	// (0x00036ff3) list_double_graphic_pane_g1

0x6728,	// (0x00034af8) list_double_graphic_pane_g2_ParamLimits

0x6728,	// (0x00034af8) list_double_graphic_pane_g2

0x8c2f,	// (0x00036fff) list_double_graphic_pane_g3_ParamLimits

0x8c2f,	// (0x00036fff) list_double_graphic_pane_g3

0x0003,

0xf650,	// (0x0003da20) list_double_graphic_pane_g_ParamLimits

0xf650,	// (0x0003da20) list_double_graphic_pane_g

0x8c47,	// (0x00037017) list_double_graphic_pane_t1_ParamLimits

0x8c47,	// (0x00037017) list_double_graphic_pane_t1

0x8c5d,	// (0x0003702d) list_double_graphic_pane_t2_ParamLimits

0x8c5d,	// (0x0003702d) list_double_graphic_pane_t2

0x0001,

0xf659,	// (0x0003da29) list_double_graphic_pane_t_ParamLimits

0xf659,	// (0x0003da29) list_double_graphic_pane_t

0x8c6f,	// (0x0003703f) list_double2_graphic_pane_g1_ParamLimits

0x8c6f,	// (0x0003703f) list_double2_graphic_pane_g1

0x8c7b,	// (0x0003704b) list_double2_graphic_pane_g2_ParamLimits

0x8c7b,	// (0x0003704b) list_double2_graphic_pane_g2

0x8c87,	// (0x00037057) list_double2_graphic_pane_g3_ParamLimits

0x8c87,	// (0x00037057) list_double2_graphic_pane_g3

0x0002,

0xf65e,	// (0x0003da2e) list_double2_graphic_pane_g_ParamLimits

0xf65e,	// (0x0003da2e) list_double2_graphic_pane_g

0x8c93,	// (0x00037063) list_double2_graphic_pane_t1_ParamLimits

0x8c93,	// (0x00037063) list_double2_graphic_pane_t1

0x8ca9,	// (0x00037079) list_double2_graphic_pane_t2_ParamLimits

0x8ca9,	// (0x00037079) list_double2_graphic_pane_t2

0x0001,

0xf665,	// (0x0003da35) list_double2_graphic_pane_t_ParamLimits

0xf665,	// (0x0003da35) list_double2_graphic_pane_t

0x8cbb,	// (0x0003708b) list_double_large_graphic_pane_g1_ParamLimits

0x8cbb,	// (0x0003708b) list_double_large_graphic_pane_g1

0x8ce4,	// (0x000370b4) list_double_large_graphic_pane_g2_ParamLimits

0x8ce4,	// (0x000370b4) list_double_large_graphic_pane_g2

0x8b70,	// (0x00036f40) list_double_large_graphic_pane_g3_ParamLimits

0x8b70,	// (0x00036f40) list_double_large_graphic_pane_g3

0x8cfa,	// (0x000370ca) list_double_large_graphic_pane_g4_ParamLimits

0x8cfa,	// (0x000370ca) list_double_large_graphic_pane_g4

0x0004,

0xf66a,	// (0x0003da3a) list_double_large_graphic_pane_g_ParamLimits

0xf66a,	// (0x0003da3a) list_double_large_graphic_pane_g

0x8d0b,	// (0x000370db) list_double_large_graphic_pane_t1_ParamLimits

0x8d0b,	// (0x000370db) list_double_large_graphic_pane_t1

0x8d24,	// (0x000370f4) list_double_large_graphic_pane_t2_ParamLimits

0x8d24,	// (0x000370f4) list_double_large_graphic_pane_t2

0x0001,

0xf675,	// (0x0003da45) list_double_large_graphic_pane_t_ParamLimits

0xf675,	// (0x0003da45) list_double_large_graphic_pane_t

0x8d36,	// (0x00037106) list_double2_large_graphic_pane_g1_ParamLimits

0x8d36,	// (0x00037106) list_double2_large_graphic_pane_g1

0x8d42,	// (0x00037112) list_double2_large_graphic_pane_g2_ParamLimits

0x8d42,	// (0x00037112) list_double2_large_graphic_pane_g2

0x8c87,	// (0x00037057) list_double2_large_graphic_pane_g3_ParamLimits

0x8c87,	// (0x00037057) list_double2_large_graphic_pane_g3

0x0002,

0xf67a,	// (0x0003da4a) list_double2_large_graphic_pane_g_ParamLimits

0xf67a,	// (0x0003da4a) list_double2_large_graphic_pane_g

0x8d53,	// (0x00037123) list_double2_large_graphic_pane_t1_ParamLimits

0x8d53,	// (0x00037123) list_double2_large_graphic_pane_t1

0x8d69,	// (0x00037139) list_double2_large_graphic_pane_t2_ParamLimits

0x8d69,	// (0x00037139) list_double2_large_graphic_pane_t2

0x0001,

0xf681,	// (0x0003da51) list_double2_large_graphic_pane_t_ParamLimits

0xf681,	// (0x0003da51) list_double2_large_graphic_pane_t

0x8d7b,	// (0x0003714b) list_double_heading_pane_g1_ParamLimits

0x8d7b,	// (0x0003714b) list_double_heading_pane_g1

0x8d8c,	// (0x0003715c) list_double_heading_pane_g2_ParamLimits

0x8d8c,	// (0x0003715c) list_double_heading_pane_g2

0x0001,

0xf686,	// (0x0003da56) list_double_heading_pane_g_ParamLimits

0xf686,	// (0x0003da56) list_double_heading_pane_g

0x8d98,	// (0x00037168) list_double_heading_pane_t1_ParamLimits

0x8d98,	// (0x00037168) list_double_heading_pane_t1

0x8dae,	// (0x0003717e) list_double_heading_pane_t2_ParamLimits

0x8dae,	// (0x0003717e) list_double_heading_pane_t2

0x0001,

0xf68b,	// (0x0003da5b) list_double_heading_pane_t_ParamLimits

0xf68b,	// (0x0003da5b) list_double_heading_pane_t

0x8c6f,	// (0x0003703f) list_double_graphic_heading_pane_g1_ParamLimits

0x8c6f,	// (0x0003703f) list_double_graphic_heading_pane_g1

0x8d7b,	// (0x0003714b) list_double_graphic_heading_pane_g2_ParamLimits

0x8d7b,	// (0x0003714b) list_double_graphic_heading_pane_g2

0x8d8c,	// (0x0003715c) list_double_graphic_heading_pane_g3_ParamLimits

0x8d8c,	// (0x0003715c) list_double_graphic_heading_pane_g3

0x0002,

0xf690,	// (0x0003da60) list_double_graphic_heading_pane_g_ParamLimits

0xf690,	// (0x0003da60) list_double_graphic_heading_pane_g

0x8dc0,	// (0x00037190) list_double_graphic_heading_pane_t1_ParamLimits

0x8dc0,	// (0x00037190) list_double_graphic_heading_pane_t1

0x8ca9,	// (0x00037079) list_double_graphic_heading_pane_t2_ParamLimits

0x8ca9,	// (0x00037079) list_double_graphic_heading_pane_t2

0x0001,

0xf697,	// (0x0003da67) list_double_graphic_heading_pane_t_ParamLimits

0xf697,	// (0x0003da67) list_double_graphic_heading_pane_t

0x8dd6,	// (0x000371a6) list_double_time_pane_g1_ParamLimits

0x8dd6,	// (0x000371a6) list_double_time_pane_g1

0x8de7,	// (0x000371b7) list_double_time_pane_g2_ParamLimits

0x8de7,	// (0x000371b7) list_double_time_pane_g2

0x0001,

0xf69c,	// (0x0003da6c) list_double_time_pane_g_ParamLimits

0xf69c,	// (0x0003da6c) list_double_time_pane_g

0x8df3,	// (0x000371c3) list_double_time_pane_t1_ParamLimits

0x8df3,	// (0x000371c3) list_double_time_pane_t1

0x8e09,	// (0x000371d9) list_double_time_pane_t2_ParamLimits

0x8e09,	// (0x000371d9) list_double_time_pane_t2

0x8e1b,	// (0x000371eb) list_double_time_pane_t3_ParamLimits

0x8e1b,	// (0x000371eb) list_double_time_pane_t3

0x8e2d,	// (0x000371fd) list_double_time_pane_t4_ParamLimits

0x8e2d,	// (0x000371fd) list_double_time_pane_t4

0x0003,

0xf6a1,	// (0x0003da71) list_double_time_pane_t_ParamLimits

0xf6a1,	// (0x0003da71) list_double_time_pane_t

0x8e3f,	// (0x0003720f) list_setting_pane_g1_ParamLimits

0x8e3f,	// (0x0003720f) list_setting_pane_g1

0x8e4b,	// (0x0003721b) list_setting_pane_g2_ParamLimits

0x8e4b,	// (0x0003721b) list_setting_pane_g2

0x0001,

0xf6aa,	// (0x0003da7a) list_setting_pane_g_ParamLimits

0xf6aa,	// (0x0003da7a) list_setting_pane_g

0x8e57,	// (0x00037227) list_setting_pane_t1_ParamLimits

0x8e57,	// (0x00037227) list_setting_pane_t1

0x8e71,	// (0x00037241) list_setting_pane_t2_ParamLimits

0x8e71,	// (0x00037241) list_setting_pane_t2

0x0002,

0xf6af,	// (0x0003da7f) list_setting_pane_t_ParamLimits

0xf6af,	// (0x0003da7f) list_setting_pane_t

0x8eb0,	// (0x00037280) set_value_pane_cp_ParamLimits

0x8eb0,	// (0x00037280) set_value_pane_cp

0x8ebc,	// (0x0003728c) list_setting_number_pane_g1_ParamLimits

0x8ebc,	// (0x0003728c) list_setting_number_pane_g1

0x8ec8,	// (0x00037298) list_setting_number_pane_g2_ParamLimits

0x8ec8,	// (0x00037298) list_setting_number_pane_g2

0x0001,

0xf6b6,	// (0x0003da86) list_setting_number_pane_g_ParamLimits

0xf6b6,	// (0x0003da86) list_setting_number_pane_g

0x8ed4,	// (0x000372a4) list_setting_number_pane_t1_ParamLimits

0x8ed4,	// (0x000372a4) list_setting_number_pane_t1

0x8eed,	// (0x000372bd) list_setting_number_pane_t2_ParamLimits

0x8eed,	// (0x000372bd) list_setting_number_pane_t2

0x8f07,	// (0x000372d7) list_setting_number_pane_t3_ParamLimits

0x8f07,	// (0x000372d7) list_setting_number_pane_t3

0x0003,

0xf6bb,	// (0x0003da8b) list_setting_number_pane_t_ParamLimits

0xf6bb,	// (0x0003da8b) list_setting_number_pane_t

0x8eb0,	// (0x00037280) set_value_pane_ParamLimits

0x8eb0,	// (0x00037280) set_value_pane

0x4a81,	// (0x00032e51) bg_set_opt_pane_ParamLimits

0x4a81,	// (0x00032e51) bg_set_opt_pane

0x8f4a,	// (0x0003731a) set_value_pane_t1

0x4aa2,	// (0x00032e72) slider_set_pane_cp3

0x4aab,	// (0x00032e7b) volume_small_pane_cp

0x4ab4,	// (0x00032e84) list_form_gen_pane

0x4abd,	// (0x00032e8d) scroll_pane_cp8

0x8f60,	// (0x00037330) form_field_data_pane_ParamLimits

0x8f60,	// (0x00037330) form_field_data_pane

0x8f84,	// (0x00037354) form_field_data_wide_pane_ParamLimits

0x8f84,	// (0x00037354) form_field_data_wide_pane

0x8fa7,	// (0x00037377) form_field_popup_pane_ParamLimits

0x8fa7,	// (0x00037377) form_field_popup_pane

0x8fc7,	// (0x00037397) form_field_popup_wide_pane_ParamLimits

0x8fc7,	// (0x00037397) form_field_popup_wide_pane

0x8fe6,	// (0x000373b6) form_field_slider_pane_ParamLimits

0x8fe6,	// (0x000373b6) form_field_slider_pane

0x8ff9,	// (0x000373c9) form_field_slider_wide_pane_ParamLimits

0x8ff9,	// (0x000373c9) form_field_slider_wide_pane

0x4ace,	// (0x00032e9e) data_form_pane

0x9016,	// (0x000373e6) form_field_data_pane_t1

0x4ada,	// (0x00032eaa) input_focus_pane

0x4ae8,	// (0x00032eb8) data_form_wide_pane

0x903a,	// (0x0003740a) form_field_data_wide_pane_t1

0x4855,	// (0x00032c25) input_focus_pane_cp6

0x905c,	// (0x0003742c) form_field_popup_pane_t1

0x4ada,	// (0x00032eaa) input_focus_pane_cp7

0x4b1d,	// (0x00032eed) list_form_pane

0x907c,	// (0x0003744c) form_field_popup_wide_pane_t1

0x4ada,	// (0x00032eaa) input_focus_pane_cp8

0x4b29,	// (0x00032ef9) list_form_wide_pane

0x9099,	// (0x00037469) form_field_slider_pane_t1_ParamLimits

0x9099,	// (0x00037469) form_field_slider_pane_t1

0x90af,	// (0x0003747f) form_field_slider_pane_t2_ParamLimits

0x90af,	// (0x0003747f) form_field_slider_pane_t2

0x0001,

0xf6cb,	// (0x0003da9b) form_field_slider_pane_t_ParamLimits

0xf6cb,	// (0x0003da9b) form_field_slider_pane_t

0x44cb,	// (0x0003289b) input_focus_pane_cp9_ParamLimits

0x44cb,	// (0x0003289b) input_focus_pane_cp9

0x90c4,	// (0x00037494) slider_cont_pane_ParamLimits

0x90c4,	// (0x00037494) slider_cont_pane

0x4b38,	// (0x00032f08) form_field_slider_wide_pane_t1_ParamLimits

0x4b38,	// (0x00032f08) form_field_slider_wide_pane_t1

0x90d8,	// (0x000374a8) form_field_slider_wide_pane_t2_ParamLimits

0x90d8,	// (0x000374a8) form_field_slider_wide_pane_t2

0x0001,

0xf6d0,	// (0x0003daa0) form_field_slider_wide_pane_t_ParamLimits

0xf6d0,	// (0x0003daa0) form_field_slider_wide_pane_t

0x44cb,	// (0x0003289b) input_focus_pane_cp10_ParamLimits

0x44cb,	// (0x0003289b) input_focus_pane_cp10

0x90ea,	// (0x000374ba) slider_cont_pane_cp1_ParamLimits

0x90ea,	// (0x000374ba) slider_cont_pane_cp1

0x90fe,	// (0x000374ce) slider_form_pane_cp

0x4b4a,	// (0x00032f1a) input_focus_pane_g1

0x4b52,	// (0x00032f22) input_focus_pane_g2

0x4b5a,	// (0x00032f2a) input_focus_pane_g3

0x4b62,	// (0x00032f32) input_focus_pane_g4

0x4b6a,	// (0x00032f3a) input_focus_pane_g5

0x4b72,	// (0x00032f42) input_focus_pane_g6

0x4b7a,	// (0x00032f4a) input_focus_pane_g7

0x4b82,	// (0x00032f52) input_focus_pane_g8

0x4b8a,	// (0x00032f5a) input_focus_pane_g9

0x4473,	// (0x00032843) input_focus_pane_g10

0x0009,

0xf6d5,	// (0x0003daa5) input_focus_pane_g

0x5fa3,	// (0x00034373) wait_border_pane_g3_copy1

0x9106,	// (0x000374d6) data_form_pane_t1

0x4473,	// (0x00032843) wait_anim_pane_g1_copy1

0x9366,	// (0x00037736) data_form_wide_pane_t1

0x9121,	// (0x000374f1) list_form_graphic_pane_cp_ParamLimits

0x9121,	// (0x000374f1) list_form_graphic_pane_cp

0x6c02,	// (0x00034fd2) slider_form_pane_g1

0x6c0b,	// (0x00034fdb) slider_form_pane_g2

0x0006,

0xf9cd,	// (0x0003dd9d) slider_form_pane_g

0x913a,	// (0x0003750a) list_form_graphic_pane_ParamLimits

0x913a,	// (0x0003750a) list_form_graphic_pane

0x9156,	// (0x00037526) list_form_graphic_pane_g1

0x915e,	// (0x0003752e) list_form_graphic_pane_t1_ParamLimits

0x915e,	// (0x0003752e) list_form_graphic_pane_t1

0x44d9,	// (0x000328a9) list_highlight_pane_cp5_ParamLimits

0x44d9,	// (0x000328a9) list_highlight_pane_cp5

0x9173,	// (0x00037543) find_pane_g1

0x4b92,	// (0x00032f62) input_find_pane

0x917c,	// (0x0003754c) input_find_pane_g1_ParamLimits

0x917c,	// (0x0003754c) input_find_pane_g1

0x9188,	// (0x00037558) input_find_pane_t1_ParamLimits

0x9188,	// (0x00037558) input_find_pane_t1

0x919d,	// (0x0003756d) input_find_pane_t2_ParamLimits

0x919d,	// (0x0003756d) input_find_pane_t2

0x0001,

0xf6ea,	// (0x0003daba) input_find_pane_t_ParamLimits

0xf6ea,	// (0x0003daba) input_find_pane_t

0x4b9b,	// (0x00032f6b) input_focus_pane_cp5_ParamLimits

0x4b9b,	// (0x00032f6b) input_focus_pane_cp5

0xa07c,	// (0x0003844c) bg_popup_window_pane_cp2_ParamLimits

0xa07c,	// (0x0003844c) bg_popup_window_pane_cp2

0xa089,	// (0x00038459) listscroll_menu_pane_ParamLimits

0xa089,	// (0x00038459) listscroll_menu_pane

0xa095,	// (0x00038465) popup_submenu_window_ParamLimits

0xa095,	// (0x00038465) popup_submenu_window

0x4ba9,	// (0x00032f79) find_popup_pane_g1

0x4bb1,	// (0x00032f81) input_popup_find_pane_cp

0x4b9b,	// (0x00032f6b) input_focus_pane_cp4_ParamLimits

0x4b9b,	// (0x00032f6b) input_focus_pane_cp4

0x4bbb,	// (0x00032f8b) input_popup_find_pane_t1_ParamLimits

0x4bbb,	// (0x00032f8b) input_popup_find_pane_t1

0x447d,	// (0x0003284d) bg_popup_sub_pane_cp

0x4be9,	// (0x00032fb9) listscroll_popup_sub_pane

0x4bf1,	// (0x00032fc1) list_submenu_pane_ParamLimits

0x4bf1,	// (0x00032fc1) list_submenu_pane

0x4c02,	// (0x00032fd2) scroll_pane_cp4

0x4c0a,	// (0x00032fda) list_single_popup_submenu_pane_ParamLimits

0x4c0a,	// (0x00032fda) list_single_popup_submenu_pane

0x4c1e,	// (0x00032fee) list_single_popup_submenu_pane_g1

0x4c26,	// (0x00032ff6) list_single_popup_submenu_pane_t1_ParamLimits

0x4c26,	// (0x00032ff6) list_single_popup_submenu_pane_t1

0x44d9,	// (0x000328a9) bg_active_tab_pane_cp1_ParamLimits

0x44d9,	// (0x000328a9) bg_active_tab_pane_cp1

0xa0cb,	// (0x0003849b) tabs_2_active_pane_g1

0xa0d3,	// (0x000384a3) tabs_2_active_pane_t1

0x44d9,	// (0x000328a9) bg_passive_tab_pane_cp1_ParamLimits

0x44d9,	// (0x000328a9) bg_passive_tab_pane_cp1

0xa0cb,	// (0x0003849b) tabs_2_passive_pane_g1

0xa0d3,	// (0x000384a3) tabs_2_passive_pane_t1

0x5f09,	// (0x000342d9) bg_active_tab_pane_cp4

0xa0e5,	// (0x000384b5) tabs_2_long_active_pane_t1

0xa0f8,	// (0x000384c8) bg_passive_tab_pane_cp4

0xadf3,	// (0x000391c3) list_single_midp_graphic_pane_g4_ParamLimits

0x5f09,	// (0x000342d9) bg_active_tab_pane_cp5

0xa104,	// (0x000384d4) tabs_3_long_active_pane_t1

0xa0f8,	// (0x000384c8) bg_passive_tab_pane_cp5

0xadf3,	// (0x000391c3) list_single_midp_graphic_pane_g4

0x44d9,	// (0x000328a9) bg_popup_window_pane_cp13_ParamLimits

0x44d9,	// (0x000328a9) bg_popup_window_pane_cp13

0x4c50,	// (0x00033020) listscroll_popup_fast_pane_ParamLimits

0x4c50,	// (0x00033020) listscroll_popup_fast_pane

0x4c5f,	// (0x0003302f) grid_popup_fast_pane_ParamLimits

0x4c5f,	// (0x0003302f) grid_popup_fast_pane

0x4c71,	// (0x00033041) scroll_pane_cp9_ParamLimits

0x4c71,	// (0x00033041) scroll_pane_cp9

0x7e8a,	// (0x0003625a) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x7e8a,	// (0x0003625a) list_single_graphic_hl_pane_t1_cp2

0x4c95,	// (0x00033065) input_focus_pane_cp20_ParamLimits

0x4c95,	// (0x00033065) input_focus_pane_cp20

0x4ca3,	// (0x00033073) query_popup_data_pane_t1_ParamLimits

0x4ca3,	// (0x00033073) query_popup_data_pane_t1

0x4cb6,	// (0x00033086) query_popup_data_pane_t2_ParamLimits

0x4cb6,	// (0x00033086) query_popup_data_pane_t2

0x4cfc,	// (0x000330cc) query_popup_data_pane_t3_ParamLimits

0x4cfc,	// (0x000330cc) query_popup_data_pane_t3

0x4d3d,	// (0x0003310d) query_popup_data_pane_t4_ParamLimits

0x4d3d,	// (0x0003310d) query_popup_data_pane_t4

0x4d79,	// (0x00033149) query_popup_data_pane_t5_ParamLimits

0x4d79,	// (0x00033149) query_popup_data_pane_t5

0x0004,

0xf6ef,	// (0x0003dabf) query_popup_data_pane_t_ParamLimits

0xf6ef,	// (0x0003dabf) query_popup_data_pane_t

0x4b4a,	// (0x00032f1a) bg_set_opt_pane_g1

0x4b52,	// (0x00032f22) bg_set_opt_pane_g2

0x4b5a,	// (0x00032f2a) bg_set_opt_pane_g3

0x4b62,	// (0x00032f32) bg_set_opt_pane_g4

0x4b6a,	// (0x00032f3a) bg_set_opt_pane_g5

0x4b72,	// (0x00032f42) bg_set_opt_pane_g6

0x4b7a,	// (0x00032f4a) bg_set_opt_pane_g7

0x4b82,	// (0x00032f52) bg_set_opt_pane_g8

0x4b8a,	// (0x00032f5a) bg_set_opt_pane_g9

0x0008,

0xf6fa,	// (0x0003daca) bg_set_opt_pane_g

0xa4d9,	// (0x000388a9) control_top_pane_stacon_ParamLimits

0xa4d9,	// (0x000388a9) control_top_pane_stacon

0xa52c,	// (0x000388fc) signal_pane_stacon_ParamLimits

0xa52c,	// (0x000388fc) signal_pane_stacon

0x51ee,	// (0x000335be) stacon_top_pane_g1_ParamLimits

0x51ee,	// (0x000335be) stacon_top_pane_g1

0xa551,	// (0x00038921) title_pane_stacon_ParamLimits

0xa551,	// (0x00038921) title_pane_stacon

0xa57b,	// (0x0003894b) uni_indicator_pane_stacon_ParamLimits

0xa57b,	// (0x0003894b) uni_indicator_pane_stacon

0xa590,	// (0x00038960) battery_pane_stacon_ParamLimits

0xa590,	// (0x00038960) battery_pane_stacon

0xa5d4,	// (0x000389a4) control_bottom_pane_stacon_ParamLimits

0xa5d4,	// (0x000389a4) control_bottom_pane_stacon

0xa5f7,	// (0x000389c7) navi_pane_stacon_ParamLimits

0xa5f7,	// (0x000389c7) navi_pane_stacon

0x5210,	// (0x000335e0) stacon_bottom_pane_g1_ParamLimits

0x5210,	// (0x000335e0) stacon_bottom_pane_g1

0xa116,	// (0x000384e6) aid_levels_signal_lsc_ParamLimits

0xa116,	// (0x000384e6) aid_levels_signal_lsc

0xa12d,	// (0x000384fd) signal_pane_stacon_g1_ParamLimits

0xa12d,	// (0x000384fd) signal_pane_stacon_g1

0xa141,	// (0x00038511) signal_pane_stacon_g2_ParamLimits

0xa141,	// (0x00038511) signal_pane_stacon_g2

0x0001,

0xf70d,	// (0x0003dadd) signal_pane_stacon_g_ParamLimits

0xf70d,	// (0x0003dadd) signal_pane_stacon_g

0xa176,	// (0x00038546) title_pane_stacon_t1_ParamLimits

0xa176,	// (0x00038546) title_pane_stacon_t1

0x4dd1,	// (0x000331a1) uni_indicator_pane_stacon_g1

0x4ddb,	// (0x000331ab) uni_indicator_pane_stacon_g2

0x4dbd,	// (0x0003318d) uni_indicator_pane_stacon_g3

0x4dc7,	// (0x00033197) uni_indicator_pane_stacon_g4

0x0003,

0xf719,	// (0x0003dae9) uni_indicator_pane_stacon_g

0xa19b,	// (0x0003856b) control_top_pane_stacon_g1

0xa1a3,	// (0x00038573) control_top_pane_stacon_t1_ParamLimits

0xa1a3,	// (0x00038573) control_top_pane_stacon_t1

0xa1da,	// (0x000385aa) aid_levels_battery_lsc_ParamLimits

0xa1da,	// (0x000385aa) aid_levels_battery_lsc

0xa1f2,	// (0x000385c2) battery_pane_stacon_g1_ParamLimits

0xa1f2,	// (0x000385c2) battery_pane_stacon_g1

0xa205,	// (0x000385d5) battery_pane_stacon_g2_ParamLimits

0xa205,	// (0x000385d5) battery_pane_stacon_g2

0x0001,

0xf722,	// (0x0003daf2) battery_pane_stacon_g_ParamLimits

0xf722,	// (0x0003daf2) battery_pane_stacon_g

0xa243,	// (0x00038613) navi_icon_pane_stacon

0xa257,	// (0x00038627) navi_navi_pane_stacon

0xa243,	// (0x00038613) navi_text_pane_stacon

0xa19b,	// (0x0003856b) control_bottom_pane_stacon_g1

0xa26b,	// (0x0003863b) control_bottom_pane_stacon_t1_ParamLimits

0xa26b,	// (0x0003863b) control_bottom_pane_stacon_t1

0xa2a2,	// (0x00038672) grid_app_pane_ParamLimits

0xa2a2,	// (0x00038672) grid_app_pane

0xa2c6,	// (0x00038696) scroll_pane_cp15_ParamLimits

0xa2c6,	// (0x00038696) scroll_pane_cp15

0xa2db,	// (0x000386ab) cell_app_pane_ParamLimits

0xa2db,	// (0x000386ab) cell_app_pane

0xa2ff,	// (0x000386cf) cell_app_pane_g1_ParamLimits

0xa2ff,	// (0x000386cf) cell_app_pane_g1

0x4dff,	// (0x000331cf) cell_app_pane_g2_ParamLimits

0x4dff,	// (0x000331cf) cell_app_pane_g2

0x0001,

0xf727,	// (0x0003daf7) cell_app_pane_g_ParamLimits

0xf727,	// (0x0003daf7) cell_app_pane_g

0x4e0b,	// (0x000331db) cell_app_pane_t1_ParamLimits

0x4e0b,	// (0x000331db) cell_app_pane_t1

0x4e1d,	// (0x000331ed) grid_highlight_pane_ParamLimits

0x4e1d,	// (0x000331ed) grid_highlight_pane

0x4b4a,	// (0x00032f1a) cell_highlight_pane_g1

0x4b52,	// (0x00032f22) cell_highlight_pane_g2

0x4b5a,	// (0x00032f2a) cell_highlight_pane_g3

0x4b62,	// (0x00032f32) cell_highlight_pane_g4

0x4b6a,	// (0x00032f3a) cell_highlight_pane_g5

0x4b72,	// (0x00032f42) cell_highlight_pane_g6

0x4b7a,	// (0x00032f4a) cell_highlight_pane_g7

0x4b82,	// (0x00032f52) cell_highlight_pane_g8

0x4b8a,	// (0x00032f5a) cell_highlight_pane_g9

0x4473,	// (0x00032843) cell_highlight_pane_g10

0x0009,

0xf6d5,	// (0x0003daa5) cell_highlight_pane_g

0x4e2e,	// (0x000331fe) bg_scroll_pane

0xa336,	// (0x00038706) scroll_handle_pane

0x4e75,	// (0x00033245) scroll_bg_pane_g1

0x4e8a,	// (0x0003325a) scroll_bg_pane_g2

0x4ea2,	// (0x00033272) scroll_bg_pane_g3

0x0002,

0xf72c,	// (0x0003dafc) scroll_bg_pane_g

0x4eb7,	// (0x00033287) scroll_handle_focus_pane_ParamLimits

0x4eb7,	// (0x00033287) scroll_handle_focus_pane

0x4e75,	// (0x00033245) scroll_handle_pane_g1

0x4ec4,	// (0x00033294) scroll_handle_pane_g2

0x4ea2,	// (0x00033272) scroll_handle_pane_g3

0x0002,

0xf733,	// (0x0003db03) scroll_handle_pane_g

0x4b9b,	// (0x00032f6b) bg_popup_sub_pane_cp21_ParamLimits

0x4b9b,	// (0x00032f6b) bg_popup_sub_pane_cp21

0x4ed8,	// (0x000332a8) popup_fep_japan_predictive_window_t1_ParamLimits

0x4ed8,	// (0x000332a8) popup_fep_japan_predictive_window_t1

0x4ef2,	// (0x000332c2) popup_fep_japan_predictive_window_t2_ParamLimits

0x4ef2,	// (0x000332c2) popup_fep_japan_predictive_window_t2

0x4f25,	// (0x000332f5) popup_fep_japan_predictive_window_t3_ParamLimits

0x4f25,	// (0x000332f5) popup_fep_japan_predictive_window_t3

0x0002,

0xf73a,	// (0x0003db0a) popup_fep_japan_predictive_window_t_ParamLimits

0xf73a,	// (0x0003db0a) popup_fep_japan_predictive_window_t

0x447d,	// (0x0003284d) bg_popup_sub_pane_cp23

0x4f5c,	// (0x0003332c) listscroll_japin_cand_pane

0x4f64,	// (0x00033334) popup_fep_japan_candidate_window_t1

0x4f72,	// (0x00033342) candidate_pane_ParamLimits

0x4f72,	// (0x00033342) candidate_pane

0x4f84,	// (0x00033354) scroll_pane_cp30

0x4f8c,	// (0x0003335c) list_single_popup_jap_candidate_pane_ParamLimits

0x4f8c,	// (0x0003335c) list_single_popup_jap_candidate_pane

0x447d,	// (0x0003284d) list_highlight_pane_cp30

0x4fa1,	// (0x00033371) list_single_popup_jap_candidate_pane_t1

0x4fb0,	// (0x00033380) level_1_signal

0x4fbd,	// (0x0003338d) level_2_signal

0x4fca,	// (0x0003339a) level_3_signal

0x4fd7,	// (0x000333a7) level_4_signal

0x4fe4,	// (0x000333b4) level_5_signal

0x4ff1,	// (0x000333c1) level_6_signal

0x4ffe,	// (0x000333ce) level_7_signal

0x4fb0,	// (0x00033380) level_1_battery

0x4fbd,	// (0x0003338d) level_2_battery

0x4fca,	// (0x0003339a) level_3_battery

0x4fd7,	// (0x000333a7) level_4_battery

0x4fe4,	// (0x000333b4) level_5_battery

0x4ff1,	// (0x000333c1) level_6_battery

0x4ffe,	// (0x000333ce) level_7_battery

0x5023,	// (0x000333f3) list_menu_pane_ParamLimits

0x5023,	// (0x000333f3) list_menu_pane

0x5034,	// (0x00033404) scroll_pane_cp25_ParamLimits

0x5034,	// (0x00033404) scroll_pane_cp25

0x504d,	// (0x0003341d) list_double2_graphic_pane_cp2_ParamLimits

0x504d,	// (0x0003341d) list_double2_graphic_pane_cp2

0x504d,	// (0x0003341d) list_double2_large_graphic_pane_cp2_ParamLimits

0x504d,	// (0x0003341d) list_double2_large_graphic_pane_cp2

0x504d,	// (0x0003341d) list_double2_pane_cp2_ParamLimits

0x504d,	// (0x0003341d) list_double2_pane_cp2

0x504d,	// (0x0003341d) list_double_graphic_pane_cp2_ParamLimits

0x504d,	// (0x0003341d) list_double_graphic_pane_cp2

0x504d,	// (0x0003341d) list_double_large_graphic_pane_cp2_ParamLimits

0x504d,	// (0x0003341d) list_double_large_graphic_pane_cp2

0x504d,	// (0x0003341d) list_double_number_pane_cp2_ParamLimits

0x504d,	// (0x0003341d) list_double_number_pane_cp2

0x504d,	// (0x0003341d) list_double_pane_cp2_ParamLimits

0x504d,	// (0x0003341d) list_double_pane_cp2

0xa392,	// (0x00038762) list_single_2graphic_pane_cp2_ParamLimits

0xa392,	// (0x00038762) list_single_2graphic_pane_cp2

0xa392,	// (0x00038762) list_single_graphic_heading_pane_cp2_ParamLimits

0xa392,	// (0x00038762) list_single_graphic_heading_pane_cp2

0xa392,	// (0x00038762) list_single_graphic_pane_cp2_ParamLimits

0xa392,	// (0x00038762) list_single_graphic_pane_cp2

0xa392,	// (0x00038762) list_single_heading_pane_cp2_ParamLimits

0xa392,	// (0x00038762) list_single_heading_pane_cp2

0x505d,	// (0x0003342d) list_single_large_graphic_pane_cp2_ParamLimits

0x505d,	// (0x0003342d) list_single_large_graphic_pane_cp2

0xa392,	// (0x00038762) list_single_number_heading_pane_cp2_ParamLimits

0xa392,	// (0x00038762) list_single_number_heading_pane_cp2

0xa392,	// (0x00038762) list_single_number_pane_cp2_ParamLimits

0xa392,	// (0x00038762) list_single_number_pane_cp2

0xa392,	// (0x00038762) list_single_pane_cp2_ParamLimits

0xa392,	// (0x00038762) list_single_pane_cp2

0x5077,	// (0x00033447) bg_popup_sub_pane_cp22

0xa451,	// (0x00038821) popup_side_volume_key_window_g1

0xa47b,	// (0x0003884b) popup_side_volume_key_window_t1

0xa497,	// (0x00038867) volume_small_pane_cp1

0x44cb,	// (0x0003289b) bg_popup_sub_pane_cp24_ParamLimits

0x44cb,	// (0x0003289b) bg_popup_sub_pane_cp24

0x508d,	// (0x0003345d) fep_china_uni_candidate_pane_ParamLimits

0x508d,	// (0x0003345d) fep_china_uni_candidate_pane

0x50a1,	// (0x00033471) fep_china_uni_entry_pane

0x50b1,	// (0x00033481) popup_fep_china_uni_window_g1

0x50cd,	// (0x0003349d) fep_china_uni_entry_pane_g1

0x50d5,	// (0x000334a5) fep_china_uni_entry_pane_g2

0x0001,

0xf767,	// (0x0003db37) fep_china_uni_entry_pane_g

0x50dd,	// (0x000334ad) fep_entry_item_pane

0x50e7,	// (0x000334b7) fep_candidate_item_pane

0x50ef,	// (0x000334bf) fep_china_uni_candidate_pane_g1

0x50f7,	// (0x000334c7) fep_china_uni_candidate_pane_g2

0x50ff,	// (0x000334cf) fep_china_uni_candidate_pane_g3

0x5107,	// (0x000334d7) fep_china_uni_candidate_pane_g4

0x0003,

0xf76c,	// (0x0003db3c) fep_china_uni_candidate_pane_g

0x4473,	// (0x00032843) fep_entry_item_pane_g1

0x510f,	// (0x000334df) fep_entry_item_pane_t1_ParamLimits

0x510f,	// (0x000334df) fep_entry_item_pane_t1

0x5125,	// (0x000334f5) fep_candidate_item_pane_t1_ParamLimits

0x5125,	// (0x000334f5) fep_candidate_item_pane_t1

0x513a,	// (0x0003350a) fep_candidate_item_pane_t2_ParamLimits

0x513a,	// (0x0003350a) fep_candidate_item_pane_t2

0x0001,

0xf775,	// (0x0003db45) fep_candidate_item_pane_t_ParamLimits

0xf775,	// (0x0003db45) fep_candidate_item_pane_t

0x44d9,	// (0x000328a9) list_highlight_pane_cp31_ParamLimits

0x44d9,	// (0x000328a9) list_highlight_pane_cp31

0x514c,	// (0x0003351c) level_1_signal_lsc

0x5155,	// (0x00033525) level_2_signal_lsc

0x515e,	// (0x0003352e) level_3_signal_lsc

0x5167,	// (0x00033537) level_4_signal_lsc

0x5170,	// (0x00033540) level_5_signal_lsc

0x5179,	// (0x00033549) level_6_signal_lsc

0x5182,	// (0x00033552) level_7_signal_lsc

0x5182,	// (0x00033552) level_1_battery_lsc

0x518b,	// (0x0003355b) level_2_battery_lsc

0x5194,	// (0x00033564) level_3_battery_lsc

0x519d,	// (0x0003356d) level_4_battery_lsc

0x51a6,	// (0x00033576) level_5_battery_lsc

0x51af,	// (0x0003357f) level_6_battery_lsc

0x514c,	// (0x0003351c) level_7_battery_lsc

0x51b8,	// (0x00033588) scroll_handle_focus_pane_g1

0x51c1,	// (0x00033591) scroll_handle_focus_pane_g2

0x51ca,	// (0x0003359a) scroll_handle_focus_pane_g3

0x0002,

0xf77a,	// (0x0003db4a) scroll_handle_focus_pane_g

0x91b2,	// (0x00037582) list_single_2graphic_pane_g1_ParamLimits

0x91b2,	// (0x00037582) list_single_2graphic_pane_g1

0xa01e,	// (0x000383ee) list_single_2graphic_pane_g2_ParamLimits

0xa01e,	// (0x000383ee) list_single_2graphic_pane_g2

0xa000,	// (0x000383d0) list_single_2graphic_pane_g3_ParamLimits

0xa000,	// (0x000383d0) list_single_2graphic_pane_g3

0x91be,	// (0x0003758e) list_single_2graphic_pane_g4_ParamLimits

0x91be,	// (0x0003758e) list_single_2graphic_pane_g4

0x0003,

0xf781,	// (0x0003db51) list_single_2graphic_pane_g_ParamLimits

0xf781,	// (0x0003db51) list_single_2graphic_pane_g

0x91ca,	// (0x0003759a) list_single_2graphic_pane_t1_ParamLimits

0x91ca,	// (0x0003759a) list_single_2graphic_pane_t1

0x91f8,	// (0x000375c8) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x91f8,	// (0x000375c8) list_double2_graphic_large_graphic_pane_g1

0x8d42,	// (0x00037112) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x8d42,	// (0x00037112) list_double2_graphic_large_graphic_pane_g2

0x8c87,	// (0x00037057) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x8c87,	// (0x00037057) list_double2_graphic_large_graphic_pane_g3

0x9208,	// (0x000375d8) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x9208,	// (0x000375d8) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf78a,	// (0x0003db5a) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf78a,	// (0x0003db5a) list_double2_graphic_large_graphic_pane_g

0x9214,	// (0x000375e4) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x9214,	// (0x000375e4) list_double2_graphic_large_graphic_pane_t1

0x922a,	// (0x000375fa) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x922a,	// (0x000375fa) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf793,	// (0x0003db63) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf793,	// (0x0003db63) list_double2_graphic_large_graphic_pane_t

0x528b,	// (0x0003365b) popup_fast_swap_window_ParamLimits

0x528b,	// (0x0003365b) popup_fast_swap_window

0x52a7,	// (0x00033677) popup_side_volume_key_window

0x52c3,	// (0x00033693) stacon_top_pane

0x52cd,	// (0x0003369d) status_pane_ParamLimits

0x52cd,	// (0x0003369d) status_pane

0x52c3,	// (0x00033693) status_small_pane

0x447d,	// (0x0003284d) control_pane

0x447d,	// (0x0003284d) stacon_bottom_pane

0x4abd,	// (0x00032e8d) scroll_pane_cp121

0x4ab4,	// (0x00032e84) set_content_pane

0xa49f,	// (0x0003886f) bg_active_tab_pane_g1_cp1

0x51dc,	// (0x000335ac) bg_active_tab_pane_g2_cp1

0xa4a8,	// (0x00038878) bg_active_tab_pane_g3_cp1

0xa49f,	// (0x0003886f) bg_passive_tab_pane_g1_cp1

0x51dc,	// (0x000335ac) bg_passive_tab_pane_g2_cp1

0xa4a8,	// (0x00038878) bg_passive_tab_pane_g3_cp1

0x51e5,	// (0x000335b5) bg_active_tab_pane_g1_cp2

0x51dc,	// (0x000335ac) bg_active_tab_pane_g2_cp2

0x51d3,	// (0x000335a3) bg_active_tab_pane_g3_cp2

0x51e5,	// (0x000335b5) bg_passive_tab_pane_g1_cp2

0x51dc,	// (0x000335ac) bg_passive_tab_pane_g2_cp2

0x51d3,	// (0x000335a3) bg_passive_tab_pane_g3_cp2

0xa4b1,	// (0x00038881) bg_active_tab_pane_g1_cp3

0x51dc,	// (0x000335ac) bg_active_tab_pane_g2_cp3

0xa4ba,	// (0x0003888a) bg_active_tab_pane_g3_cp3

0xa4b1,	// (0x00038881) bg_passive_tab_pane_g1_cp3

0x51dc,	// (0x000335ac) bg_passive_tab_pane_g2_cp3

0xa4ba,	// (0x0003888a) bg_passive_tab_pane_g3_cp3

0xa4c3,	// (0x00038893) bg_active_tab_pane_g1_cp4

0x51dc,	// (0x000335ac) bg_active_tab_pane_g2_cp4

0xa4ce,	// (0x0003889e) bg_active_tab_pane_g3_cp4

0xa4c3,	// (0x00038893) bg_passive_tab_pane_g1_cp4

0x51dc,	// (0x000335ac) bg_passive_tab_pane_g2_cp4

0xa4ce,	// (0x0003889e) bg_passive_tab_pane_g3_cp4

0x5235,	// (0x00033605) bg_active_tab_pane_g1_cp5

0x51dc,	// (0x000335ac) bg_active_tab_pane_g2_cp5

0x522c,	// (0x000335fc) bg_active_tab_pane_g3_cp5

0x5235,	// (0x00033605) bg_passive_tab_pane_g1_cp5

0x51dc,	// (0x000335ac) bg_passive_tab_pane_g2_cp5

0x522c,	// (0x000335fc) bg_passive_tab_pane_g3_cp5

0xa61a,	// (0x000389ea) list_set_graphic_pane_ParamLimits

0xa61a,	// (0x000389ea) list_set_graphic_pane

0x447d,	// (0x0003284d) bg_set_opt_pane_cp4

0xa637,	// (0x00038a07) list_set_graphic_pane_g1_ParamLimits

0xa637,	// (0x00038a07) list_set_graphic_pane_g1

0xa643,	// (0x00038a13) list_set_graphic_pane_g2_ParamLimits

0xa643,	// (0x00038a13) list_set_graphic_pane_g2

0x0001,

0xf798,	// (0x0003db68) list_set_graphic_pane_g_ParamLimits

0xf798,	// (0x0003db68) list_set_graphic_pane_g

0x0009,

0xfaee,	// (0x0003debe) volume_small_pane_cp_g

0x523e,	// (0x0003360e) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x523e,	// (0x0003360e) list_double2_large_graphic_pane_g1_cp2

0x524a,	// (0x0003361a) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x524a,	// (0x0003361a) list_double2_large_graphic_pane_g2_cp2

0x525b,	// (0x0003362b) list_double2_large_graphic_pane_g3_cp2

0x5263,	// (0x00033633) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x5263,	// (0x00033633) list_double2_large_graphic_pane_t1_cp2

0x5279,	// (0x00033649) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x5279,	// (0x00033649) list_double2_large_graphic_pane_t2_cp2

0x69ae,	// (0x00034d7e) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x69ae,	// (0x00034d7e) list_double_large_graphic_pane_g1_cp2

0x69bf,	// (0x00034d8f) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x69bf,	// (0x00034d8f) list_double_large_graphic_pane_g2_cp2

0x53e9,	// (0x000337b9) list_double_large_graphic_pane_g3_cp2

0x69d0,	// (0x00034da0) list_double_large_graphic_pane_g4_cp

0x69d8,	// (0x00034da8) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x69d8,	// (0x00034da8) list_double_large_graphic_pane_t1_cp2

0x69ef,	// (0x00034dbf) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x69ef,	// (0x00034dbf) list_double_large_graphic_pane_t2_cp2

0x52db,	// (0x000336ab) list_double2_graphic_pane_g1_cp2_ParamLimits

0x52db,	// (0x000336ab) list_double2_graphic_pane_g1_cp2

0x52e9,	// (0x000336b9) list_double2_graphic_pane_g2_cp2_ParamLimits

0x52e9,	// (0x000336b9) list_double2_graphic_pane_g2_cp2

0x52fa,	// (0x000336ca) list_double2_graphic_pane_g3_cp2

0x5304,	// (0x000336d4) list_double2_graphic_pane_t1_cp2_ParamLimits

0x5304,	// (0x000336d4) list_double2_graphic_pane_t1_cp2

0x531a,	// (0x000336ea) list_double2_graphic_pane_t2_cp2_ParamLimits

0x531a,	// (0x000336ea) list_double2_graphic_pane_t2_cp2

0x532c,	// (0x000336fc) list_single_number_heading_pane_g1_cp2_ParamLimits

0x532c,	// (0x000336fc) list_single_number_heading_pane_g1_cp2

0x5338,	// (0x00033708) list_single_number_heading_pane_g2_cp2

0x5340,	// (0x00033710) list_single_number_heading_pane_t1_cp2_ParamLimits

0x5340,	// (0x00033710) list_single_number_heading_pane_t1_cp2

0x5356,	// (0x00033726) list_single_number_heading_pane_t2_cp2_ParamLimits

0x5356,	// (0x00033726) list_single_number_heading_pane_t2_cp2

0x5368,	// (0x00033738) list_single_number_heading_pane_t3_cp2_ParamLimits

0x5368,	// (0x00033738) list_single_number_heading_pane_t3_cp2

0x532c,	// (0x000336fc) list_single_heading_pane_g1_cp2_ParamLimits

0x532c,	// (0x000336fc) list_single_heading_pane_g1_cp2

0x5338,	// (0x00033708) list_single_heading_pane_g2_cp2

0x5340,	// (0x00033710) list_single_heading_pane_t1_cp2_ParamLimits

0x5340,	// (0x00033710) list_single_heading_pane_t1_cp2

0x67b6,	// (0x00034b86) list_single_heading_pane_t2_cp2_ParamLimits

0x67b6,	// (0x00034b86) list_single_heading_pane_t2_cp2

0x671c,	// (0x00034aec) list_double_graphic_pane_g1_cp2_ParamLimits

0x671c,	// (0x00034aec) list_double_graphic_pane_g1_cp2

0x6728,	// (0x00034af8) list_double_graphic_pane_g2_cp2_ParamLimits

0x6728,	// (0x00034af8) list_double_graphic_pane_g2_cp2

0x6737,	// (0x00034b07) list_double_graphic_pane_g3_cp2

0x673f,	// (0x00034b0f) list_double_graphic_pane_t1_cp2_ParamLimits

0x673f,	// (0x00034b0f) list_double_graphic_pane_t1_cp2

0x6755,	// (0x00034b25) list_double_graphic_pane_t2_cp2_ParamLimits

0x6755,	// (0x00034b25) list_double_graphic_pane_t2_cp2

0x53dd,	// (0x000337ad) list_double_number_pane_g1_cp2_ParamLimits

0x53dd,	// (0x000337ad) list_double_number_pane_g1_cp2

0x53e9,	// (0x000337b9) list_double_number_pane_g2_cp2

0x66e0,	// (0x00034ab0) list_double_number_pane_t1_cp2_ParamLimits

0x66e0,	// (0x00034ab0) list_double_number_pane_t1_cp2

0x66f4,	// (0x00034ac4) list_double_number_pane_t2_cp2_ParamLimits

0x66f4,	// (0x00034ac4) list_double_number_pane_t2_cp2

0x670a,	// (0x00034ada) list_double_number_pane_t3_cp2_ParamLimits

0x670a,	// (0x00034ada) list_double_number_pane_t3_cp2

0x6657,	// (0x00034a27) list_single_graphic_pane_g1_cp2_ParamLimits

0x6657,	// (0x00034a27) list_single_graphic_pane_g1_cp2

0x5441,	// (0x00033811) list_single_graphic_pane_g2_cp2_ParamLimits

0x5441,	// (0x00033811) list_single_graphic_pane_g2_cp2

0x544d,	// (0x0003381d) list_single_graphic_pane_g3_cp2

0x662d,	// (0x000349fd) list_single_graphic_pane_t1_cp2_ParamLimits

0x662d,	// (0x000349fd) list_single_graphic_pane_t1_cp2

0x5441,	// (0x00033811) list_single_number_pane_g1_cp2_ParamLimits

0x5441,	// (0x00033811) list_single_number_pane_g1_cp2

0x544d,	// (0x0003381d) list_single_number_pane_g2_cp2

0x662d,	// (0x000349fd) list_single_number_pane_t1_cp2_ParamLimits

0x662d,	// (0x000349fd) list_single_number_pane_t1_cp2

0x6643,	// (0x00034a13) list_single_number_pane_t2_cp2_ParamLimits

0x6643,	// (0x00034a13) list_single_number_pane_t2_cp2

0x524a,	// (0x0003361a) list_double2_pane_g1_cp2_ParamLimits

0x524a,	// (0x0003361a) list_double2_pane_g1_cp2

0x525b,	// (0x0003362b) list_double2_pane_g2_cp2

0x53b5,	// (0x00033785) list_double2_pane_t1_cp2_ParamLimits

0x53b5,	// (0x00033785) list_double2_pane_t1_cp2

0x53cb,	// (0x0003379b) list_double2_pane_t2_cp2_ParamLimits

0x53cb,	// (0x0003379b) list_double2_pane_t2_cp2

0x53dd,	// (0x000337ad) list_double_pane_g1_cp2_ParamLimits

0x53dd,	// (0x000337ad) list_double_pane_g1_cp2

0x53e9,	// (0x000337b9) list_double_pane_g2_cp2

0x53f1,	// (0x000337c1) list_double_pane_t1_cp2_ParamLimits

0x53f1,	// (0x000337c1) list_double_pane_t1_cp2

0x5407,	// (0x000337d7) list_double_pane_t2_cp2_ParamLimits

0x5407,	// (0x000337d7) list_double_pane_t2_cp2

0x5431,	// (0x00033801) list_single_pane_cp2_g3

0x5441,	// (0x00033811) list_single_pane_g1_cp2_ParamLimits

0x5441,	// (0x00033811) list_single_pane_g1_cp2

0x544d,	// (0x0003381d) list_single_pane_g2_cp2

0x5455,	// (0x00033825) list_single_pane_t1_cp2_ParamLimits

0x5455,	// (0x00033825) list_single_pane_t1_cp2

0x546d,	// (0x0003383d) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x546d,	// (0x0003383d) list_single_large_graphic_pane_g1_cp2

0x5479,	// (0x00033849) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x5479,	// (0x00033849) list_single_large_graphic_pane_g2_cp2

0x5485,	// (0x00033855) list_single_large_graphic_pane_g3_cp2

0x548d,	// (0x0003385d) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x548d,	// (0x0003385d) list_single_large_graphic_pane_g4_cp1

0x54a7,	// (0x00033877) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x54a7,	// (0x00033877) list_single_large_graphic_pane_t1_cp2

0x65db,	// (0x000349ab) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x65db,	// (0x000349ab) list_single_graphic_heading_pane_g1_cp2

0x65a8,	// (0x00034978) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x65a8,	// (0x00034978) list_single_graphic_heading_pane_g4_cp2

0x544d,	// (0x0003381d) list_single_graphic_heading_pane_g5_cp2

0x6605,	// (0x000349d5) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x6605,	// (0x000349d5) list_single_graphic_heading_pane_t1_cp2

0x661b,	// (0x000349eb) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x661b,	// (0x000349eb) list_single_graphic_heading_pane_t2_cp2

0x659c,	// (0x0003496c) list_single_2graphic_pane_g1_cp2_ParamLimits

0x659c,	// (0x0003496c) list_single_2graphic_pane_g1_cp2

0x65a8,	// (0x00034978) list_single_2graphic_pane_g2_cp2_ParamLimits

0x65a8,	// (0x00034978) list_single_2graphic_pane_g2_cp2

0x544d,	// (0x0003381d) list_single_2graphic_pane_g3_cp2

0x65b9,	// (0x00034989) list_single_2graphic_pane_g4_cp2_ParamLimits

0x65b9,	// (0x00034989) list_single_2graphic_pane_g4_cp2

0x65c5,	// (0x00034995) list_single_2graphic_pane_t1_cp2_ParamLimits

0x65c5,	// (0x00034995) list_single_2graphic_pane_t1_cp2

0x4473,	// (0x00032843) list_highlight_pane_g10_cp1

0x6192,	// (0x00034562) list_highlight_pane_g1_cp1

0x619a,	// (0x0003456a) list_highlight_pane_g2_cp1

0x61a2,	// (0x00034572) list_highlight_pane_g3_cp1

0x61aa,	// (0x0003457a) list_highlight_pane_g4_cp1

0x61b2,	// (0x00034582) list_highlight_pane_g5_cp1

0x61ba,	// (0x0003458a) list_highlight_pane_g6_cp1

0x61c2,	// (0x00034592) list_highlight_pane_g7_cp1

0x61ca,	// (0x0003459a) list_highlight_pane_g8_cp1

0x61d2,	// (0x000345a2) list_highlight_pane_g9_cp1

0xc49d,	// (0x0003a86d) form_field_slider_pane_t3

0xc4ab,	// (0x0003a87b) form_field_slider_pane_t4

0x60ce,	// (0x0003449e) slider_form_pane_ParamLimits

0x60ce,	// (0x0003449e) slider_form_pane

0x447d,	// (0x0003284d) control_abbreviations

0x447d,	// (0x0003284d) control_conventions

0x447d,	// (0x0003284d) control_definitions

0x447d,	// (0x0003284d) format_table_attribute

0x6800,	// (0x00034bd0) bg_popup_preview_window_pane_g9

0x447d,	// (0x0003284d) format_table_data2

0x447d,	// (0x0003284d) format_table_data3

0x447d,	// (0x0003284d) format_table_data_example

0x0008,

0x447d,	// (0x0003284d) intro_purpose

0xf92d,	// (0x0003dcfd) bg_popup_preview_window_pane_g

0x447d,	// (0x0003284d) texts_category

0x447d,	// (0x0003284d) texts_graphics

0x54bd,	// (0x0003388d) text_digital

0x54cc,	// (0x0003389c) text_primary

0x54db,	// (0x000338ab) text_primary_small

0x54ea,	// (0x000338ba) text_secondary

0x54f9,	// (0x000338c9) text_title

0x6ca4,	// (0x00035074) bg_passive_tab_pane_g1_cp3_srt

0x51dc,	// (0x000335ac) bg_passive_tab_pane_g2_cp3_srt

0x6c9b,	// (0x0003506b) bg_passive_tab_pane_g3_cp3_srt

0x44d9,	// (0x000328a9) bg_active_tab_pane_cp3_srt_ParamLimits

0x44d9,	// (0x000328a9) bg_active_tab_pane_cp3_srt

0x6cad,	// (0x0003507d) tabs_4_active_pane_srt_g1

0xc7f4,	// (0x0003abc4) tabs_4_active_pane_srt_t1_ParamLimits

0xc7f4,	// (0x0003abc4) tabs_4_active_pane_srt_t1

0x6ca4,	// (0x00035074) bg_active_tab_pane_g1_cp3_copy1

0x51dc,	// (0x000335ac) bg_active_tab_pane_g2_cp3_copy1

0x6c9b,	// (0x0003506b) bg_active_tab_pane_g3_cp3_copy1

0x44d9,	// (0x000328a9) tabs_2_long_active_pane_srt_ParamLimits

0x44d9,	// (0x000328a9) tabs_2_long_active_pane_srt

0x44d9,	// (0x000328a9) tabs_2_long_passive_pane_srt_ParamLimits

0x44d9,	// (0x000328a9) tabs_2_long_passive_pane_srt

0xa0f8,	// (0x000384c8) bg_passive_tab_pane_cp4_srt_ParamLimits

0xa0f8,	// (0x000384c8) bg_passive_tab_pane_cp4_srt

0x6bbe,	// (0x00034f8e) bg_passive_tab_pane_g1_cp4_srt

0x51dc,	// (0x000335ac) bg_passive_tab_pane_g2_cp4_srt

0x6bb5,	// (0x00034f85) bg_passive_tab_pane_g3_cp4_srt

0x5f09,	// (0x000342d9) bg_active_tab_pane_cp4_srt_ParamLimits

0x5f09,	// (0x000342d9) bg_active_tab_pane_cp4_srt

0xc618,	// (0x0003a9e8) tabs_2_long_active_pane_srt_t1_ParamLimits

0xc618,	// (0x0003a9e8) tabs_2_long_active_pane_srt_t1

0x6bbe,	// (0x00034f8e) bg_active_tab_pane_g1_cp4_srt

0x51dc,	// (0x000335ac) bg_active_tab_pane_g2_cp4_srt

0x6bb5,	// (0x00034f85) bg_active_tab_pane_g3_cp4_srt

0x44cb,	// (0x0003289b) tabs_3_long_active_pane_srt_ParamLimits

0x44cb,	// (0x0003289b) tabs_3_long_active_pane_srt

0x44cb,	// (0x0003289b) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x44cb,	// (0x0003289b) tabs_3_long_passive_pane_cp_srt

0x44cb,	// (0x0003289b) tabs_3_long_passive_pane_srt_ParamLimits

0x44cb,	// (0x0003289b) tabs_3_long_passive_pane_srt

0xa0f8,	// (0x000384c8) bg_passive_tab_pane_cp5_srt_ParamLimits

0xa0f8,	// (0x000384c8) bg_passive_tab_pane_cp5_srt

0x5235,	// (0x00033605) bg_passive_tab_pane_g1_cp5_srt

0x51dc,	// (0x000335ac) bg_passive_tab_pane_g2_cp5_srt

0x522c,	// (0x000335fc) bg_passive_tab_pane_g3_cp5_srt

0x5f09,	// (0x000342d9) bg_active_tab_pane_cp5_srt_ParamLimits

0x5f09,	// (0x000342d9) bg_active_tab_pane_cp5_srt

0xc606,	// (0x0003a9d6) tabs_3_long_active_pane_srt_t1_ParamLimits

0xc606,	// (0x0003a9d6) tabs_3_long_active_pane_srt_t1

0x5235,	// (0x00033605) bg_active_tab_pane_g1_cp5_srt

0x51dc,	// (0x000335ac) bg_active_tab_pane_g2_cp5_srt

0x522c,	// (0x000335fc) bg_active_tab_pane_g3_cp5_srt

0x6ba7,	// (0x00034f77) navi_text_pane_srt_t1

0x6b9f,	// (0x00034f6f) navi_icon_pane_srt_g1

0x55ff,	// (0x000339cf) midp_editing_number_pane_srt

0x5508,	// (0x000338d8) midp_ticker_pane_srt

0x5607,	// (0x000339d7) midp_ticker_pane_srt_g1

0x560f,	// (0x000339df) midp_ticker_pane_srt_g2

0x0001,

0xf7b7,	// (0x0003db87) midp_ticker_pane_srt_g

0x5617,	// (0x000339e7) midp_ticker_pane_srt_t1

0x6b90,	// (0x00034f60) midp_editing_number_pane_t1_copy1

0xa667,	// (0x00038a37) listscroll_midp_pane

0xa667,	// (0x00038a37) midp_form_pane

0x5510,	// (0x000338e0) midp_info_popup_window_ParamLimits

0x5510,	// (0x000338e0) midp_info_popup_window

0x4b9b,	// (0x00032f6b) bg_popup_sub_pane_cp50_ParamLimits

0x4b9b,	// (0x00032f6b) bg_popup_sub_pane_cp50

0x5de7,	// (0x000341b7) listscroll_midp_info_pane_ParamLimits

0x5de7,	// (0x000341b7) listscroll_midp_info_pane

0x5dcf,	// (0x0003419f) listscroll_form_midp_pane_ParamLimits

0x5dcf,	// (0x0003419f) listscroll_form_midp_pane

0x5ddb,	// (0x000341ab) scroll_bar_cp050

0xc485,	// (0x0003a855) list_midp_pane

0x7511,	// (0x000358e1) signal_pane_g2_cp

0x5d01,	// (0x000340d1) listscroll_midp_info_pane_t1_ParamLimits

0x5d01,	// (0x000340d1) listscroll_midp_info_pane_t1

0x5d19,	// (0x000340e9) listscroll_midp_info_pane_t2_ParamLimits

0x5d19,	// (0x000340e9) listscroll_midp_info_pane_t2

0x5d57,	// (0x00034127) listscroll_midp_info_pane_t3_ParamLimits

0x5d57,	// (0x00034127) listscroll_midp_info_pane_t3

0x5d91,	// (0x00034161) listscroll_midp_info_pane_t4_ParamLimits

0x5d91,	// (0x00034161) listscroll_midp_info_pane_t4

0x0003,

0xf868,	// (0x0003dc38) listscroll_midp_info_pane_t_ParamLimits

0xf868,	// (0x0003dc38) listscroll_midp_info_pane_t

0x4c02,	// (0x00032fd2) scroll_pane_cp21

0x5c9f,	// (0x0003406f) form_midp_field_choice_group_pane

0x5ca8,	// (0x00034078) form_midp_field_text_pane

0x5ce7,	// (0x000340b7) form_midp_field_time_pane

0x5cef,	// (0x000340bf) form_midp_gauge_slider_pane

0x5cf8,	// (0x000340c8) form_midp_gauge_wait_pane

0x447d,	// (0x0003284d) form_midp_image_pane

0x9313,	// (0x000376e3) list_single_midp_pane_ParamLimits

0x9313,	// (0x000376e3) list_single_midp_pane

0xc44e,	// (0x0003a81e) form_midp_field_text_pane_t1

0x5b46,	// (0x00033f16) input_focus_pane_cp050

0x5c8e,	// (0x0003405e) list_midp_form_text_pane

0x5c5d,	// (0x0003402d) form_midp_field_choice_group_pane_t1

0x5c6b,	// (0x0003403b) input_focus_pane_cp051

0x5c7f,	// (0x0003404f) list_midp_choice_pane

0x447d,	// (0x0003284d) status_idle_pane

0x5c41,	// (0x00034011) form_midp_field_time_pane_t1

0x4473,	// (0x00032843) wait_anim_pane_g2_copy1

0x5c4f,	// (0x0003401f) form_midp_field_time_pane_t2

0x0001,

0x5569,	// (0x00033939) aid_navinavi_width_2_pane

0xf863,	// (0x0003dc33) form_midp_field_time_pane_t

0x447d,	// (0x0003284d) input_focus_pane_cp052

0x447d,	// (0x0003284d) bg_input_focus_pane_cp040

0x5c1d,	// (0x00033fed) form_midp_gauge_slider_pane_t1

0x5c2b,	// (0x00033ffb) form_midp_gauge_slider_pane_t2

0xc432,	// (0x0003a802) form_midp_gauge_slider_pane_t3

0xc440,	// (0x0003a810) form_midp_gauge_slider_pane_t4

0x0003,

0xf85a,	// (0x0003dc2a) form_midp_gauge_slider_pane_t

0x5c39,	// (0x00034009) form_midp_slider_pane

0x44d9,	// (0x000328a9) bg_input_focus_pane_cp041_ParamLimits

0x44d9,	// (0x000328a9) bg_input_focus_pane_cp041

0x5bea,	// (0x00033fba) form_midp_gauge_wait_pane_t1_ParamLimits

0x5bea,	// (0x00033fba) form_midp_gauge_wait_pane_t1

0x5bfc,	// (0x00033fcc) form_midp_gauge_wait_pane_t2_ParamLimits

0x5bfc,	// (0x00033fcc) form_midp_gauge_wait_pane_t2

0x0001,

0xf855,	// (0x0003dc25) form_midp_gauge_wait_pane_t_ParamLimits

0xf855,	// (0x0003dc25) form_midp_gauge_wait_pane_t

0x5c0e,	// (0x00033fde) form_midp_wait_pane_ParamLimits

0x5c0e,	// (0x00033fde) form_midp_wait_pane

0x5bb4,	// (0x00033f84) form_midp_image_pane_g1

0x5bbd,	// (0x00033f8d) form_midp_image_pane_t1

0x5bcc,	// (0x00033f9c) form_midp_image_pane_t2

0x5bdb,	// (0x00033fab) form_midp_image_pane_t3

0x0002,

0xf84e,	// (0x0003dc1e) form_midp_image_pane_t

0x5bab,	// (0x00033f7b) list_single_midp_pane_g1

0x9304,	// (0x000376d4) list_single_midp_pane_t1

0xc40a,	// (0x0003a7da) list_midp_form_item_pane_ParamLimits

0xc40a,	// (0x0003a7da) list_midp_form_item_pane

0x5523,	// (0x000338f3) list_midp_form_item_pane_t1

0x5532,	// (0x00033902) midp_ticker_pane_g1

0x553e,	// (0x0003390e) midp_ticker_pane_g2

0x0001,

0xf79d,	// (0x0003db6d) midp_ticker_pane_g

0xa718,	// (0x00038ae8) midp_ticker_pane_t1

0xc78f,	// (0x0003ab5f) midp_editing_number_pane_t1

0x6c24,	// (0x00034ff4) midp_editing_number_pane

0x6c33,	// (0x00035003) midp_ticker_pane

0x6b80,	// (0x00034f50) ai_message_heading_pane

0x447d,	// (0x0003284d) bg_popup_window_pane_cp14

0x6b88,	// (0x00034f58) listscroll_ai_message_pane

0x6b0a,	// (0x00034eda) ai_message_heading_pane_g1_ParamLimits

0x6b0a,	// (0x00034eda) ai_message_heading_pane_g1

0x6b16,	// (0x00034ee6) ai_message_heading_pane_g2_ParamLimits

0x6b16,	// (0x00034ee6) ai_message_heading_pane_g2

0x6b22,	// (0x00034ef2) ai_message_heading_pane_g3_ParamLimits

0x6b22,	// (0x00034ef2) ai_message_heading_pane_g3

0x6b2e,	// (0x00034efe) ai_message_heading_pane_g4_ParamLimits

0x6b2e,	// (0x00034efe) ai_message_heading_pane_g4

0x0003,

0xf98f,	// (0x0003dd5f) ai_message_heading_pane_g_ParamLimits

0xf98f,	// (0x0003dd5f) ai_message_heading_pane_g

0x6b3a,	// (0x00034f0a) ai_message_heading_pane_t1_ParamLimits

0x6b3a,	// (0x00034f0a) ai_message_heading_pane_t1

0x6b54,	// (0x00034f24) ai_message_heading_pane_t2_ParamLimits

0x6b54,	// (0x00034f24) ai_message_heading_pane_t2

0x0001,

0xf998,	// (0x0003dd68) ai_message_heading_pane_t_ParamLimits

0xf998,	// (0x0003dd68) ai_message_heading_pane_t

0x6b66,	// (0x00034f36) bg_popup_heading_pane_cp1_ParamLimits

0x6b66,	// (0x00034f36) bg_popup_heading_pane_cp1

0x6af8,	// (0x00034ec8) list_ai_message_pane_ParamLimits

0x6af8,	// (0x00034ec8) list_ai_message_pane

0x4c02,	// (0x00032fd2) scroll_pane_cp10

0x6a94,	// (0x00034e64) list_ai_message_pane_g1

0x6a9c,	// (0x00034e6c) list_ai_message_pane_g2

0x0001,

0xf96c,	// (0x0003dd3c) list_ai_message_pane_g

0x6aa4,	// (0x00034e74) list_ai_message_pane_t1_ParamLimits

0x6aa4,	// (0x00034e74) list_ai_message_pane_t1

0x6ab9,	// (0x00034e89) list_ai_message_pane_t2_ParamLimits

0x6ab9,	// (0x00034e89) list_ai_message_pane_t2

0x6ace,	// (0x00034e9e) list_ai_message_pane_t3_ParamLimits

0x6ace,	// (0x00034e9e) list_ai_message_pane_t3

0x6ae3,	// (0x00034eb3) list_ai_message_pane_t4_ParamLimits

0x6ae3,	// (0x00034eb3) list_ai_message_pane_t4

0x0003,

0xf971,	// (0x0003dd41) list_ai_message_pane_t_ParamLimits

0xf971,	// (0x0003dd41) list_ai_message_pane_t

0xc5f1,	// (0x0003a9c1) cell_ai_soft_ind_pane_ParamLimits

0xc5f1,	// (0x0003a9c1) cell_ai_soft_ind_pane

0x554a,	// (0x0003391a) cell_ai_soft_ind_pane_g1_ParamLimits

0x554a,	// (0x0003391a) cell_ai_soft_ind_pane_g1

0x447d,	// (0x0003284d) grid_highlight_cp1

0x5557,	// (0x00033927) text_secondary_cp56_ParamLimits

0x5557,	// (0x00033927) text_secondary_cp56

0x6a69,	// (0x00034e39) example_general_pane_ParamLimits

0x6a69,	// (0x00034e39) example_general_pane

0x6a75,	// (0x00034e45) example_parent_pane_g1_ParamLimits

0x6a75,	// (0x00034e45) example_parent_pane_g1

0x6a81,	// (0x00034e51) example_parent_pane_t1_ParamLimits

0x6a81,	// (0x00034e51) example_parent_pane_t1

0xac68,	// (0x00039038) popup_preview_text_window_ParamLimits

0xac68,	// (0x00039038) popup_preview_text_window

0x5439,	// (0x00033809) list_single_pane_cp2_g4

0x46b4,	// (0x00032a84) bg_popup_preview_window_pane_ParamLimits

0x46b4,	// (0x00032a84) bg_popup_preview_window_pane

0x6808,	// (0x00034bd8) popup_preview_text_window_t1_ParamLimits

0x6808,	// (0x00034bd8) popup_preview_text_window_t1

0x6826,	// (0x00034bf6) popup_preview_text_window_t2_ParamLimits

0x6826,	// (0x00034bf6) popup_preview_text_window_t2

0x686f,	// (0x00034c3f) popup_preview_text_window_t3_ParamLimits

0x686f,	// (0x00034c3f) popup_preview_text_window_t3

0x68b4,	// (0x00034c84) popup_preview_text_window_t4_ParamLimits

0x68b4,	// (0x00034c84) popup_preview_text_window_t4

0x0004,

0xf940,	// (0x0003dd10) popup_preview_text_window_t_ParamLimits

0xf940,	// (0x0003dd10) popup_preview_text_window_t

0x6932,	// (0x00034d02) scroll_pane_cp11

0x5a56,	// (0x00033e26) bg_popup_preview_window_pane_g1

0x67c8,	// (0x00034b98) bg_popup_preview_window_pane_g2

0x67d0,	// (0x00034ba0) bg_popup_preview_window_pane_g3

0x67d8,	// (0x00034ba8) bg_popup_preview_window_pane_g4

0x67e0,	// (0x00034bb0) bg_popup_preview_window_pane_g5

0x67e8,	// (0x00034bb8) bg_popup_preview_window_pane_g6

0x67f0,	// (0x00034bc0) bg_popup_preview_window_pane_g7

0x67f8,	// (0x00034bc8) bg_popup_preview_window_pane_g8

0x989b,	// (0x00037c6b) aid_popup_width_pane

0xac46,	// (0x00039016) popup_midp_note_alarm_window_ParamLimits

0xac46,	// (0x00039016) popup_midp_note_alarm_window

0x4ace,	// (0x00032e9e) data_form_pane_ParamLimits

0x900c,	// (0x000373dc) form_field_data_pane_g1

0x9016,	// (0x000373e6) form_field_data_pane_t1_ParamLimits

0x4ada,	// (0x00032eaa) input_focus_pane_ParamLimits

0x4ae8,	// (0x00032eb8) data_form_wide_pane_ParamLimits

0x902e,	// (0x000373fe) form_field_data_wide_pane_g1

0x903a,	// (0x0003740a) form_field_data_wide_pane_t1_ParamLimits

0x4855,	// (0x00032c25) input_focus_pane_cp6_ParamLimits

0xa0bf,	// (0x0003848f) input_popup_find_pane_g1_ParamLimits

0xa0bf,	// (0x0003848f) input_popup_find_pane_g1

0xa216,	// (0x000385e6) aid_navi_side_left_pane

0xa22b,	// (0x000385fb) aid_navi_side_right_pane

0x626f,	// (0x0003463f) bg_popup_window_pane_cp30_ParamLimits

0x626f,	// (0x0003463f) bg_popup_window_pane_cp30

0x62e9,	// (0x000346b9) popup_midp_note_alarm_window_g1_ParamLimits

0x62e9,	// (0x000346b9) popup_midp_note_alarm_window_g1

0x6319,	// (0x000346e9) popup_midp_note_alarm_window_t1_ParamLimits

0x6319,	// (0x000346e9) popup_midp_note_alarm_window_t1

0x63ba,	// (0x0003478a) popup_midp_note_alarm_window_t2_ParamLimits

0x63ba,	// (0x0003478a) popup_midp_note_alarm_window_t2

0x6468,	// (0x00034838) popup_midp_note_alarm_window_t3_ParamLimits

0x6468,	// (0x00034838) popup_midp_note_alarm_window_t3

0x649a,	// (0x0003486a) popup_midp_note_alarm_window_t4_ParamLimits

0x649a,	// (0x0003486a) popup_midp_note_alarm_window_t4

0x64c0,	// (0x00034890) popup_midp_note_alarm_window_t5_ParamLimits

0x64c0,	// (0x00034890) popup_midp_note_alarm_window_t5

0x000a,

0xf8dd,	// (0x0003dcad) popup_midp_note_alarm_window_t_ParamLimits

0xf8dd,	// (0x0003dcad) popup_midp_note_alarm_window_t

0x656c,	// (0x0003493c) wait_bar_pane_cp1_ParamLimits

0x656c,	// (0x0003493c) wait_bar_pane_cp1

0x447d,	// (0x0003284d) wait_anim_pane_copy1

0x447d,	// (0x0003284d) wait_border_pane_copy1

0x5f8f,	// (0x0003435f) wait_border_pane_g1_copy1

0x9054,	// (0x00037424) form_field_popup_pane_g1

0x905c,	// (0x0003742c) form_field_popup_pane_t1_ParamLimits

0x4ada,	// (0x00032eaa) input_focus_pane_cp7_ParamLimits

0x4b1d,	// (0x00032eed) list_form_pane_ParamLimits

0x9074,	// (0x00037444) form_field_popup_wide_pane_g1

0x907c,	// (0x0003744c) form_field_popup_wide_pane_t1_ParamLimits

0x4ada,	// (0x00032eaa) input_focus_pane_cp8_ParamLimits

0x4b29,	// (0x00032ef9) list_form_wide_pane_ParamLimits

0x6cd4,	// (0x000350a4) aid_size_cell_graphic_pane

0x9106,	// (0x000374d6) data_form_pane_t1_ParamLimits

0x9366,	// (0x00037736) data_form_wide_pane_t1_ParamLimits

0xc10f,	// (0x0003a4df) bg_status_flat_pane

0x9c9e,	// (0x0003806e) title_pane_t1_ParamLimits

0x4493,	// (0x00032863) title_pane_t2_ParamLimits

0x44b9,	// (0x00032889) title_pane_t3_ParamLimits

0xf59b,	// (0x0003d96b) title_pane_t_ParamLimits

0x4fb0,	// (0x00033380) level_1_signal_ParamLimits

0x4fbd,	// (0x0003338d) level_2_signal_ParamLimits

0x4fca,	// (0x0003339a) level_3_signal_ParamLimits

0x4fd7,	// (0x000333a7) level_4_signal_ParamLimits

0x4fe4,	// (0x000333b4) level_5_signal_ParamLimits

0x4ff1,	// (0x000333c1) level_6_signal_ParamLimits

0x4ffe,	// (0x000333ce) level_7_signal_ParamLimits

0x4fb0,	// (0x00033380) level_1_battery_ParamLimits

0x4fbd,	// (0x0003338d) level_2_battery_ParamLimits

0x4fca,	// (0x0003339a) level_3_battery_ParamLimits

0x4fd7,	// (0x000333a7) level_4_battery_ParamLimits

0x4fe4,	// (0x000333b4) level_5_battery_ParamLimits

0x4ff1,	// (0x000333c1) level_6_battery_ParamLimits

0x4ffe,	// (0x000333ce) level_7_battery_ParamLimits

0x6192,	// (0x00034562) bg_status_flat_pane_g1

0x619a,	// (0x0003456a) bg_status_flat_pane_g2

0x61a2,	// (0x00034572) bg_status_flat_pane_g3

0x61aa,	// (0x0003457a) bg_status_flat_pane_g4

0x61b2,	// (0x00034582) bg_status_flat_pane_g5

0x61ba,	// (0x0003458a) bg_status_flat_pane_g6

0x61c2,	// (0x00034592) bg_status_flat_pane_g7

0x9d0e,	// (0x000380de) tabs_3_active_pane_t1_ParamLimits

0x9d0e,	// (0x000380de) tabs_3_passive_pane_t1_ParamLimits

0x9d28,	// (0x000380f8) tabs_4_active_pane_t1_ParamLimits

0x9d28,	// (0x000380f8) tabs_4_1_passive_pane_t1_ParamLimits

0xa0d3,	// (0x000384a3) tabs_2_active_pane_t1_ParamLimits

0xa0d3,	// (0x000384a3) tabs_2_passive_pane_t1_ParamLimits

0x5f09,	// (0x000342d9) bg_active_tab_pane_cp4_ParamLimits

0xa0e5,	// (0x000384b5) tabs_2_long_active_pane_t1_ParamLimits

0xa0f8,	// (0x000384c8) bg_passive_tab_pane_cp4_ParamLimits

0xae1b,	// (0x000391eb) list_single_midp_graphic_pane_t1_ParamLimits

0x5f09,	// (0x000342d9) bg_active_tab_pane_cp5_ParamLimits

0xa104,	// (0x000384d4) tabs_3_long_active_pane_t1_ParamLimits

0xa0f8,	// (0x000384c8) bg_passive_tab_pane_cp5_ParamLimits

0xae1b,	// (0x000391eb) list_single_midp_graphic_pane_t1

0xc10f,	// (0x0003a4df) bg_status_flat_pane_ParamLimits

0x5927,	// (0x00033cf7) indicator_pane_cp2_ParamLimits

0x5927,	// (0x00033cf7) indicator_pane_cp2

0xc252,	// (0x0003a622) navi_pane_srt_ParamLimits

0xc252,	// (0x0003a622) navi_pane_srt

0x594f,	// (0x00033d1f) popup_clock_digital_analogue_window_cp1

0x451d,	// (0x000328ed) indicator_pane_t1

0x5508,	// (0x000338d8) copy_highlight_pane

0x5508,	// (0x000338d8) cursor_graphics_pane

0x5508,	// (0x000338d8) graphic_within_text_pane

0x5508,	// (0x000338d8) link_highlight_pane

0x68f5,	// (0x00034cc5) popup_preview_text_window_t5_ParamLimits

0x68f5,	// (0x00034cc5) popup_preview_text_window_t5

0x5571,	// (0x00033941) cursor_digital_pane

0x5571,	// (0x00033941) cursor_primary_pane

0x5582,	// (0x00033952) cursor_primary_small_pane

0x558a,	// (0x0003395a) cursor_secondary_pane

0x5592,	// (0x00033962) cursor_title_pane

0x5571,	// (0x00033941) link_highlight_digital_pane

0x5579,	// (0x00033949) link_highlight_primary_pane

0x5582,	// (0x00033952) link_highlight_primary_small_pane

0x558a,	// (0x0003395a) link_highlight_secondary_pane

0x5592,	// (0x00033962) link_highlight_title_pane

0x5571,	// (0x00033941) copy_highlight_digital_pane

0x5571,	// (0x00033941) copy_highlight_primary_pane

0x5582,	// (0x00033952) copy_highlight_primary_small_pane

0x558a,	// (0x0003395a) copy_highlight_secondary_pane

0x5592,	// (0x00033962) copy_highlight_title_pane

0x558a,	// (0x0003395a) graphic_text_digital_pane

0x6212,	// (0x000345e2) graphic_text_primary_pane

0x621b,	// (0x000345eb) graphic_text_primary_small_pane

0x5582,	// (0x00033952) graphic_text_secondary_pane

0x5571,	// (0x00033941) graphic_text_title_pane

0xa72a,	// (0x00038afa) cursor_primary_pane_g1

0x6204,	// (0x000345d4) cursor_text_primary_t1

0xc4cd,	// (0x0003a89d) cursor_primary_small_pane_g1

0x61f6,	// (0x000345c6) cursor_text_primary_small_t1

0xc4c3,	// (0x0003a893) cursor_primary_small_pane_g1_copy1

0x61e8,	// (0x000345b8) cursor_text_primary_small_t1_copy1

0x61da,	// (0x000345aa) cursor_text_title_t1

0xc4b9,	// (0x0003a889) cursor_title_pane_g1

0xa72a,	// (0x00038afa) cursor_digital_pane_g1

0x559a,	// (0x0003396a) cursor_text_digital_t1

0x55bf,	// (0x0003398f) link_highlight_primary_pane_g1

0x6183,	// (0x00034553) link_highlight_primary_pane_t1

0x55a8,	// (0x00033978) link_highlight_primary_small_pane_g1

0x55b0,	// (0x00033980) link_highlight_primary_small_pane_t1

0x55bf,	// (0x0003398f) link_highlight_secondary_pane_g1

0x55c7,	// (0x00033997) link_highlight_secondary_pane_t1

0x60f7,	// (0x000344c7) link_highlight_title_pane_g1

0x60ff,	// (0x000344cf) link_highlight_title_pane_t1

0x60e0,	// (0x000344b0) link_highlight_digital_pane_g1

0x60e8,	// (0x000344b8) link_highlight_digital_pane_t1

0x5fd4,	// (0x000343a4) copy_highlight_primary_pane_g1

0x5fdc,	// (0x000343ac) copy_highlight_primary_pane_t1

0x5fae,	// (0x0003437e) copy_highlight_primary_small_pane_g1

0x5fc5,	// (0x00034395) copy_highlight_primary_small_pane_t1

0x55d6,	// (0x000339a6) copy_highlight_secondary_pane_g1

0x55de,	// (0x000339ae) copy_highlight_secondary_pane_t1

0x5fae,	// (0x0003437e) copy_highlight_title_pane_g1

0x5fb6,	// (0x00034386) copy_highlight_title_pane_t1

0x5fd4,	// (0x000343a4) copy_highlight_digital_pane_g1

0x6e5a,	// (0x0003522a) copy_highlight_digital_pane_t1

0x6dae,	// (0x0003517e) graphic_text_primary_pane_g1

0x6e3e,	// (0x0003520e) graphic_text_primary_pane_t1

0x6e4c,	// (0x0003521c) graphic_text_primary_pane_t2

0x0001,

0xfa0c,	// (0x0003dddc) graphic_text_primary_pane_t

0x6e1a,	// (0x000351ea) graphic_text_primary_small_pane_g1

0x6e22,	// (0x000351f2) graphic_text_primary_small_pane_t1

0x6e30,	// (0x00035200) graphic_text_primary_small_pane_t2

0x0001,

0xfa07,	// (0x0003ddd7) graphic_text_primary_small_pane_t

0x6df6,	// (0x000351c6) graphic_text_secondary_pane_g1

0x6dfe,	// (0x000351ce) graphic_text_secondary_pane_t1

0x6e0c,	// (0x000351dc) graphic_text_secondary_pane_t2

0x0001,

0xfa02,	// (0x0003ddd2) graphic_text_secondary_pane_t

0x6dd2,	// (0x000351a2) graphic_text_title_pane_g1

0x6dda,	// (0x000351aa) graphic_text_title_pane_t1

0x6de8,	// (0x000351b8) graphic_text_title_pane_t2

0x0001,

0xf9fd,	// (0x0003ddcd) graphic_text_title_pane_t

0x6dae,	// (0x0003517e) graphic_text_digital_pane_g1

0x6db6,	// (0x00035186) graphic_text_digital_pane_t1

0x6dc4,	// (0x00035194) graphic_text_digital_pane_t2

0x0001,

0xf9f8,	// (0x0003ddc8) graphic_text_digital_pane_t

0x44d9,	// (0x000328a9) navi_icon_pane_srt_ParamLimits

0x44d9,	// (0x000328a9) navi_icon_pane_srt

0x447d,	// (0x0003284d) navi_midp_pane_srt

0x447d,	// (0x0003284d) navi_navi_pane_srt

0x44d9,	// (0x000328a9) navi_text_pane_srt_ParamLimits

0x44d9,	// (0x000328a9) navi_text_pane_srt

0x6d79,	// (0x00035149) navi_navi_icon_text_pane_srt

0x6d93,	// (0x00035163) navi_navi_pane_srt_g1_ParamLimits

0x6d93,	// (0x00035163) navi_navi_pane_srt_g1

0x6d81,	// (0x00035151) navi_navi_pane_srt_g2_ParamLimits

0x6d81,	// (0x00035151) navi_navi_pane_srt_g2

0x0001,

0xf9f3,	// (0x0003ddc3) navi_navi_pane_srt_g_ParamLimits

0xf9f3,	// (0x0003ddc3) navi_navi_pane_srt_g

0x6da5,	// (0x00035175) navi_navi_tabs_pane_srt

0x6d79,	// (0x00035149) navi_navi_text_pane_srt

0x6d79,	// (0x00035149) navi_navi_volume_pane_srt

0x6d6a,	// (0x0003513a) navi_navi_text_pane_srt_t1

0xb239,	// (0x00039609) navi_navi_volume_pane_srt_g1

0xb241,	// (0x00039611) volume_small_pane_srt_ParamLimits

0xb241,	// (0x00039611) volume_small_pane_srt

0xa734,	// (0x00038b04) volume_small_pane_srt_g1_ParamLimits

0xa734,	// (0x00038b04) volume_small_pane_srt_g1

0xa744,	// (0x00038b14) volume_small_pane_srt_g2_ParamLimits

0xa744,	// (0x00038b14) volume_small_pane_srt_g2

0xa755,	// (0x00038b25) volume_small_pane_srt_g3_ParamLimits

0xa755,	// (0x00038b25) volume_small_pane_srt_g3

0xa766,	// (0x00038b36) volume_small_pane_srt_g4_ParamLimits

0xa766,	// (0x00038b36) volume_small_pane_srt_g4

0xa777,	// (0x00038b47) volume_small_pane_srt_g5_ParamLimits

0xa777,	// (0x00038b47) volume_small_pane_srt_g5

0xa788,	// (0x00038b58) volume_small_pane_srt_g6_ParamLimits

0xa788,	// (0x00038b58) volume_small_pane_srt_g6

0xa799,	// (0x00038b69) volume_small_pane_srt_g7_ParamLimits

0xa799,	// (0x00038b69) volume_small_pane_srt_g7

0xa7aa,	// (0x00038b7a) volume_small_pane_srt_g8_ParamLimits

0xa7aa,	// (0x00038b7a) volume_small_pane_srt_g8

0xa7bb,	// (0x00038b8b) volume_small_pane_srt_g9_ParamLimits

0xa7bb,	// (0x00038b8b) volume_small_pane_srt_g9

0xa7cc,	// (0x00038b9c) volume_small_pane_srt_g10_ParamLimits

0xa7cc,	// (0x00038b9c) volume_small_pane_srt_g10

0x0009,

0xf7a2,	// (0x0003db72) volume_small_pane_srt_g_ParamLimits

0xf7a2,	// (0x0003db72) volume_small_pane_srt_g

0x475d,	// (0x00032b2d) query_popup_data_pane_cp2

0x6d50,	// (0x00035120) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x6d50,	// (0x00035120) navi_navi_icon_text_pane_srt_t1

0x6212,	// (0x000345e2) navi_tabs_2_long_pane_srt

0x6212,	// (0x000345e2) navi_tabs_2_pane_srt

0x6212,	// (0x000345e2) navi_tabs_3_long_pane_srt

0x6212,	// (0x000345e2) navi_tabs_3_pane_srt

0x6212,	// (0x000345e2) navi_tabs_4_pane_srt

0xb219,	// (0x000395e9) tabs_2_active_pane_srt_ParamLimits

0xb219,	// (0x000395e9) tabs_2_active_pane_srt

0xb229,	// (0x000395f9) tabs_2_passive_pane_srt_ParamLimits

0xb229,	// (0x000395f9) tabs_2_passive_pane_srt

0x4c3b,	// (0x0003300b) bg_passive_tab_pane_cp1_srt_ParamLimits

0x4c3b,	// (0x0003300b) bg_passive_tab_pane_cp1_srt

0x6d37,	// (0x00035107) bg_passive_tab_pane_g1_cp1_srt

0x51dc,	// (0x000335ac) bg_passive_tab_pane_g2_cp1_srt

0x6d2e,	// (0x000350fe) bg_passive_tab_pane_g3_cp1_srt

0x44d9,	// (0x000328a9) bg_active_tab_pane_cp1_srt_ParamLimits

0x44d9,	// (0x000328a9) bg_active_tab_pane_cp1_srt

0x6d40,	// (0x00035110) tabs_2_active_pane_srt_g1

0xc86d,	// (0x0003ac3d) tabs_2_active_pane_srt_t1_ParamLimits

0xc86d,	// (0x0003ac3d) tabs_2_active_pane_srt_t1

0x6d37,	// (0x00035107) bg_active_tab_pane_g1_cp1_srt

0x51dc,	// (0x000335ac) bg_active_tab_pane_g2_cp1_srt

0x6d2e,	// (0x000350fe) bg_active_tab_pane_g3_cp1_srt

0xb1e6,	// (0x000395b6) tabs_3_active_pane_srt_ParamLimits

0xb1e6,	// (0x000395b6) tabs_3_active_pane_srt

0xb1f7,	// (0x000395c7) tabs_3_passive_pane_cp_srt_ParamLimits

0xb1f7,	// (0x000395c7) tabs_3_passive_pane_cp_srt

0xb208,	// (0x000395d8) tabs_3_passive_pane_srt_ParamLimits

0xb208,	// (0x000395d8) tabs_3_passive_pane_srt

0x4c3b,	// (0x0003300b) bg_passive_tab_pane_cp2_srt_ParamLimits

0x4c3b,	// (0x0003300b) bg_passive_tab_pane_cp2_srt

0x55f6,	// (0x000339c6) bg_passive_tab_pane_g1_cp2_srt

0x51dc,	// (0x000335ac) bg_passive_tab_pane_g2_cp2_srt

0x55ed,	// (0x000339bd) bg_passive_tab_pane_g3_cp2_srt

0x44d9,	// (0x000328a9) bg_active_tab_pane_cp2_srt_ParamLimits

0x44d9,	// (0x000328a9) bg_active_tab_pane_cp2_srt

0x6d26,	// (0x000350f6) tabs_3_active_pane_srt_g1

0xc85b,	// (0x0003ac2b) tabs_3_active_pane_srt_t1_ParamLimits

0xc85b,	// (0x0003ac2b) tabs_3_active_pane_srt_t1

0x55f6,	// (0x000339c6) bg_active_tab_pane_g1_cp2_srt

0x51dc,	// (0x000335ac) bg_active_tab_pane_g2_cp2_srt

0x55ed,	// (0x000339bd) bg_active_tab_pane_g3_cp2_srt

0xb19e,	// (0x0003956e) tabs_4_active_pane_srt_ParamLimits

0xb19e,	// (0x0003956e) tabs_4_active_pane_srt

0xb1b0,	// (0x00039580) tabs_4_passive_pane_cp2_srt_ParamLimits

0xb1b0,	// (0x00039580) tabs_4_passive_pane_cp2_srt

0x571a,	// (0x00033aea) aid_size_cell_toolbar

0xa0f8,	// (0x000384c8) main_idle_act_pane_ParamLimits

0x57e6,	// (0x00033bb6) popup_large_graphic_colour_window_ParamLimits

0xc01b,	// (0x0003a3eb) popup_toolbar_window_ParamLimits

0xc01b,	// (0x0003a3eb) popup_toolbar_window

0x6c46,	// (0x00035016) list_single_graphic_2heading_pane_ParamLimits

0x6c46,	// (0x00035016) list_single_graphic_2heading_pane

0x4de5,	// (0x000331b5) aid_size_cell_apps_grid_lsc_pane

0x4df7,	// (0x000331c7) aid_size_cell_apps_grid_prt_pane

0x4c3b,	// (0x0003300b) bg_wml_button_pane_cp1_ParamLimits

0x4c3b,	// (0x0003300b) bg_wml_button_pane_cp1

0xc44e,	// (0x0003a81e) form_midp_field_text_pane_t1_ParamLimits

0x5b46,	// (0x00033f16) input_focus_pane_cp050_ParamLimits

0x5c8e,	// (0x0003405e) list_midp_form_text_pane_ParamLimits

0x5c6b,	// (0x0003403b) input_focus_pane_cp051_ParamLimits

0x5c7f,	// (0x0003404f) list_midp_choice_pane_ParamLimits

0xc3b4,	// (0x0003a784) list_single_2graphic_pane_cp3_ParamLimits

0xc3b4,	// (0x0003a784) list_single_2graphic_pane_cp3

0xc3d8,	// (0x0003a7a8) list_single_midp_graphic_pane_ParamLimits

0xc3d8,	// (0x0003a7a8) list_single_midp_graphic_pane

0x924c,	// (0x0003761c) list_single_graphic_2heading_pane_g1_ParamLimits

0x924c,	// (0x0003761c) list_single_graphic_2heading_pane_g1

0x9258,	// (0x00037628) list_single_graphic_2heading_pane_g4_ParamLimits

0x9258,	// (0x00037628) list_single_graphic_2heading_pane_g4

0x9264,	// (0x00037634) list_single_graphic_2heading_pane_g5_ParamLimits

0x9264,	// (0x00037634) list_single_graphic_2heading_pane_g5

0x0002,

0xf7f5,	// (0x0003dbc5) list_single_graphic_2heading_pane_g_ParamLimits

0xf7f5,	// (0x0003dbc5) list_single_graphic_2heading_pane_g

0x9270,	// (0x00037640) list_single_graphic_2heading_pane_t1_ParamLimits

0x9270,	// (0x00037640) list_single_graphic_2heading_pane_t1

0x9284,	// (0x00037654) list_single_graphic_2heading_pane_t2_ParamLimits

0x9284,	// (0x00037654) list_single_graphic_2heading_pane_t2

0x92a0,	// (0x00037670) list_single_graphic_2heading_pane_t3_ParamLimits

0x92a0,	// (0x00037670) list_single_graphic_2heading_pane_t3

0x0002,

0xf7fc,	// (0x0003dbcc) list_single_graphic_2heading_pane_t_ParamLimits

0xf7fc,	// (0x0003dbcc) list_single_graphic_2heading_pane_t

0x5994,	// (0x00033d64) bg_popup_sub_pane_cp2

0x59be,	// (0x00033d8e) grid_toobar_pane

0xad8a,	// (0x0003915a) cell_toolbar_pane_ParamLimits

0xad8a,	// (0x0003915a) cell_toolbar_pane

0x59fa,	// (0x00033dca) cell_toolbar_pane_g1_ParamLimits

0x59fa,	// (0x00033dca) cell_toolbar_pane_g1

0x5a0e,	// (0x00033dde) cell_toolbar_pane_g2_ParamLimits

0x5a0e,	// (0x00033dde) cell_toolbar_pane_g2

0x0001,

0xf80a,	// (0x0003dbda) cell_toolbar_pane_g_ParamLimits

0xf80a,	// (0x0003dbda) cell_toolbar_pane_g

0x5a30,	// (0x00033e00) grid_highlight_pane_cp2_ParamLimits

0x5a30,	// (0x00033e00) grid_highlight_pane_cp2

0x5a4a,	// (0x00033e1a) toolbar_button_pane

0x5a56,	// (0x00033e26) toolbar_button_pane_g1

0x5a66,	// (0x00033e36) toolbar_button_pane_g2

0x5a5e,	// (0x00033e2e) toolbar_button_pane_g3

0x5a76,	// (0x00033e46) toolbar_button_pane_g4

0x5a6e,	// (0x00033e3e) toolbar_button_pane_g5

0x5a7e,	// (0x00033e4e) toolbar_button_pane_g6

0x5a86,	// (0x00033e56) toolbar_button_pane_g7

0x5a96,	// (0x00033e66) toolbar_button_pane_g8

0x5a8e,	// (0x00033e5e) toolbar_button_pane_g9

0x0009,

0xf80f,	// (0x0003dbdf) toolbar_button_pane_g

0xadce,	// (0x0003919e) list_single_2graphic_pane_g1_cp3_ParamLimits

0xadce,	// (0x0003919e) list_single_2graphic_pane_g1_cp3

0xadda,	// (0x000391aa) list_single_2graphic_pane_g2_cp3_ParamLimits

0xadda,	// (0x000391aa) list_single_2graphic_pane_g2_cp3

0xadeb,	// (0x000391bb) list_single_2graphic_pane_g3_cp3

0xadf3,	// (0x000391c3) list_single_2graphic_pane_g4_cp3_ParamLimits

0xadf3,	// (0x000391c3) list_single_2graphic_pane_g4_cp3

0xadff,	// (0x000391cf) list_single_2graphic_pane_t1_cp3_ParamLimits

0xadff,	// (0x000391cf) list_single_2graphic_pane_t1_cp3

0x5f17,	// (0x000342e7) list_single_midp_graphic_pane_g2_ParamLimits

0x5f17,	// (0x000342e7) list_single_midp_graphic_pane_g2

0x923c,	// (0x0003760c) aid_zoom_text_primary

0xa963,	// (0x00038d33) aid_zoom_text_secondary

0x56aa,	// (0x00033a7a) status_small_pane_g7_ParamLimits

0x56aa,	// (0x00033a7a) status_small_pane_g7

0x56cd,	// (0x00033a9d) status_small_pane_t1_ParamLimits

0x9c81,	// (0x00038051) title_pane_g2

0x0003,

0xf592,	// (0x0003d962) title_pane_g

0x9edf,	// (0x000382af) aid_size_cell_colour_1_pane_ParamLimits

0x9edf,	// (0x000382af) aid_size_cell_colour_1_pane

0x9ef3,	// (0x000382c3) aid_size_cell_colour_2_pane_ParamLimits

0x9ef3,	// (0x000382c3) aid_size_cell_colour_2_pane

0x9f07,	// (0x000382d7) aid_size_cell_colour_3_pane_ParamLimits

0x9f07,	// (0x000382d7) aid_size_cell_colour_3_pane

0x9f1b,	// (0x000382eb) aid_size_cell_colour_4_pane_ParamLimits

0x9f1b,	// (0x000382eb) aid_size_cell_colour_4_pane

0xa152,	// (0x00038522) title_pane_stacon_g1_ParamLimits

0xa152,	// (0x00038522) title_pane_stacon_g1

0x6033,	// (0x00034403) popup_note_wait_window_g3_ParamLimits

0x6033,	// (0x00034403) popup_note_wait_window_g3

0x60a9,	// (0x00034479) popup_note_wait_window_t5_ParamLimits

0x60a9,	// (0x00034479) popup_note_wait_window_t5

0x447d,	// (0x0003284d) main_feb_china_hwr_fs_writing_pane

0xa9e1,	// (0x00038db1) popup_feb_china_hwr_fs_window_ParamLimits

0xa9e1,	// (0x00038db1) popup_feb_china_hwr_fs_window

0xae31,	// (0x00039201) aid_size_cell_hwr_fs_ParamLimits

0xae31,	// (0x00039201) aid_size_cell_hwr_fs

0x5b46,	// (0x00033f16) bg_popup_sub_pane_cp3_ParamLimits

0x5b46,	// (0x00033f16) bg_popup_sub_pane_cp3

0xae46,	// (0x00039216) grid_hwr_fs_pane_ParamLimits

0xae46,	// (0x00039216) grid_hwr_fs_pane

0xae5e,	// (0x0003922e) linegrid_hwr_fs_pane_ParamLimits

0xae5e,	// (0x0003922e) linegrid_hwr_fs_pane

0xae6e,	// (0x0003923e) cell_hwr_fs_pane_ParamLimits

0xae6e,	// (0x0003923e) cell_hwr_fs_pane

0x5b52,	// (0x00033f22) linegrid_hwr_fs_pane_g1_ParamLimits

0x5b52,	// (0x00033f22) linegrid_hwr_fs_pane_g1

0xc388,	// (0x0003a758) linegrid_hwr_fs_pane_g2_ParamLimits

0xc388,	// (0x0003a758) linegrid_hwr_fs_pane_g2

0x5b5e,	// (0x00033f2e) linegrid_hwr_fs_pane_g3_ParamLimits

0x5b5e,	// (0x00033f2e) linegrid_hwr_fs_pane_g3

0xae90,	// (0x00039260) linegrid_hwr_fs_pane_g4_ParamLimits

0xae90,	// (0x00039260) linegrid_hwr_fs_pane_g4

0xaeaa,	// (0x0003927a) linegrid_hwr_fs_pane_g5_ParamLimits

0xaeaa,	// (0x0003927a) linegrid_hwr_fs_pane_g5

0x0004,

0xf83a,	// (0x0003dc0a) linegrid_hwr_fs_pane_g_ParamLimits

0xf83a,	// (0x0003dc0a) linegrid_hwr_fs_pane_g

0x5b6a,	// (0x00033f3a) cell_hwr_fs_pane_g1_ParamLimits

0x5b6a,	// (0x00033f3a) cell_hwr_fs_pane_g1

0x5960,	// (0x00033d30) cell_hwr_fs_pane_g2_ParamLimits

0x5960,	// (0x00033d30) cell_hwr_fs_pane_g2

0xc39a,	// (0x0003a76a) cell_hwr_fs_pane_g3_ParamLimits

0xc39a,	// (0x0003a76a) cell_hwr_fs_pane_g3

0xc3a7,	// (0x0003a777) cell_hwr_fs_pane_g4_ParamLimits

0xc3a7,	// (0x0003a777) cell_hwr_fs_pane_g4

0x0003,

0xf845,	// (0x0003dc15) cell_hwr_fs_pane_g_ParamLimits

0xf845,	// (0x0003dc15) cell_hwr_fs_pane_g

0xaec0,	// (0x00039290) cell_hwr_fs_pane_t1

0x447d,	// (0x0003284d) grid_highlight_pane_cp6

0x447d,	// (0x0003284d) main_idle_act2_pane

0x4be9,	// (0x00032fb9) aid_inside_area_popup_secondary

0xc4ed,	// (0x0003a8bd) aid_inside_area_window_primary_ParamLimits

0xc4ed,	// (0x0003a8bd) aid_inside_area_window_primary

0x6e69,	// (0x00035239) ai2_news_ticker_pane

0x6e71,	// (0x00035241) aid_size_cell_ai1_link_ParamLimits

0x6e71,	// (0x00035241) aid_size_cell_ai1_link

0xc87f,	// (0x0003ac4f) popup_ai2_data_window_ParamLimits

0xc87f,	// (0x0003ac4f) popup_ai2_data_window

0x6e8b,	// (0x0003525b) popup_ai2_link_window_ParamLimits

0x6e8b,	// (0x0003525b) popup_ai2_link_window

0x5b46,	// (0x00033f16) bg_popup_sub_pane_cp4_ParamLimits

0x5b46,	// (0x00033f16) bg_popup_sub_pane_cp4

0x6e9f,	// (0x0003526f) grid_ai2_link_pane_ParamLimits

0x6e9f,	// (0x0003526f) grid_ai2_link_pane

0x6eb6,	// (0x00035286) popup_ai2_link_window_g1_ParamLimits

0x6eb6,	// (0x00035286) popup_ai2_link_window_g1

0x6ec2,	// (0x00035292) popup_ai2_link_window_g2_ParamLimits

0x6ec2,	// (0x00035292) popup_ai2_link_window_g2

0x0001,

0xfa11,	// (0x0003dde1) popup_ai2_link_window_g_ParamLimits

0xfa11,	// (0x0003dde1) popup_ai2_link_window_g

0x6ed1,	// (0x000352a1) ai2_mp_button_pane

0x6ed9,	// (0x000352a9) ai2_mp_volume_pane

0x5c6b,	// (0x0003403b) bg_popup_sub_pane_cp5_ParamLimits

0x5c6b,	// (0x0003403b) bg_popup_sub_pane_cp5

0x6ee1,	// (0x000352b1) heading_ai2_gene_pane_ParamLimits

0x6ee1,	// (0x000352b1) heading_ai2_gene_pane

0x6eed,	// (0x000352bd) list_ai2_gene_pane_ParamLimits

0x6eed,	// (0x000352bd) list_ai2_gene_pane

0x6f35,	// (0x00035305) cell_ai2_link_pane_ParamLimits

0x6f35,	// (0x00035305) cell_ai2_link_pane

0x6f4b,	// (0x0003531b) cell_ai2_link_pane_g1

0x447d,	// (0x0003284d) grid_highlight_pane_cp7

0xb256,	// (0x00039626) ai2_mp_volume_pane_g1

0x6ff0,	// (0x000353c0) ai2_mp_volume_pane_g2

0xc8ac,	// (0x0003ac7c) list_ai2_gene_pane_t1

0x6fe8,	// (0x000353b8) ai2_mp_volume_pane_g3

0x0002,

0xfa2a,	// (0x0003ddfa) ai2_mp_volume_pane_g

0xb25e,	// (0x0003962e) volume_small_pane_cp3

0x6ff8,	// (0x000353c8) aid_size_cell_ai2_button

0x7000,	// (0x000353d0) grid_ai2_button_pane

0x7009,	// (0x000353d9) cell_ai2_button_pane_ParamLimits

0x7009,	// (0x000353d9) cell_ai2_button_pane

0x4473,	// (0x00032843) cell_ai2_button_pane_g1

0x447d,	// (0x0003284d) grid_highlight_pane_cp8

0x6fa8,	// (0x00035378) ai2_gene_pane_t1_ParamLimits

0x6fa8,	// (0x00035378) ai2_gene_pane_t1

0xa959,	// (0x00038d29) aid_height_parent_landscape

0xc62b,	// (0x0003a9fb) aid_height_set_list

0x65e7,	// (0x000349b7) aid_size_parent

0x6cd4,	// (0x000350a4) aid_size_cell_graphic_pane_ParamLimits

0x6efd,	// (0x000352cd) popup_ai2_data_window_g1_ParamLimits

0x6efd,	// (0x000352cd) popup_ai2_data_window_g1

0x6f09,	// (0x000352d9) ai2_news_ticker_pane_g1

0x6f11,	// (0x000352e1) ai2_news_ticker_pane_g2

0x0001,

0xfa16,	// (0x0003dde6) ai2_news_ticker_pane_g

0x6f19,	// (0x000352e9) ai2_news_ticker_pane_t1

0x6f27,	// (0x000352f7) ai2_news_ticker_pane_t2

0x0001,

0xfa1b,	// (0x0003ddeb) ai2_news_ticker_pane_t

0x6f54,	// (0x00035324) heading_ai2_gene_pane_g1

0x6f5c,	// (0x0003532c) heading_ai2_gene_pane_t1_ParamLimits

0x6f5c,	// (0x0003532c) heading_ai2_gene_pane_t1

0x6f71,	// (0x00035341) list_highlight_pane_cp6

0xc895,	// (0x0003ac65) ai2_gene_pane_ParamLimits

0xc895,	// (0x0003ac65) ai2_gene_pane

0xc8ba,	// (0x0003ac8a) list_ai2_gene_pane_t2

0x0001,

0xfa20,	// (0x0003ddf0) list_ai2_gene_pane_t

0x6f79,	// (0x00035349) list_highlight_pane_cp8_ParamLimits

0x6f79,	// (0x00035349) list_highlight_pane_cp8

0x6f8a,	// (0x0003535a) ai2_gene_pane_g1_ParamLimits

0x6f8a,	// (0x0003535a) ai2_gene_pane_g1

0x6f9c,	// (0x0003536c) ai2_gene_pane_g2_ParamLimits

0x6f9c,	// (0x0003536c) ai2_gene_pane_g2

0x0001,

0xfa25,	// (0x0003ddf5) ai2_gene_pane_g_ParamLimits

0xfa25,	// (0x0003ddf5) ai2_gene_pane_g

0x4a70,	// (0x00032e40) scroll_pane_cp12

0xa918,	// (0x00038ce8) control_pane_t3_ParamLimits

0xa918,	// (0x00038ce8) control_pane_t3

0x56be,	// (0x00033a8e) status_small_pane_g8_ParamLimits

0x56be,	// (0x00033a8e) status_small_pane_g8

0xaa6d,	// (0x00038e3d) popup_find_window_ParamLimits

0xac5a,	// (0x0003902a) popup_note_image_window_ParamLimits

0x92b8,	// (0x00037688) list_double2_graphic_pane_vc_g1_ParamLimits

0x92b8,	// (0x00037688) list_double2_graphic_pane_vc_g1

0x6c8f,	// (0x0003505f) list_double2_graphic_pane_vc_g2_ParamLimits

0x6c8f,	// (0x0003505f) list_double2_graphic_pane_vc_g2

0xadba,	// (0x0003918a) list_double2_graphic_pane_vc_g3_ParamLimits

0xadba,	// (0x0003918a) list_double2_graphic_pane_vc_g3

0x0002,

0xf803,	// (0x0003dbd3) list_double2_graphic_pane_vc_g_ParamLimits

0xf803,	// (0x0003dbd3) list_double2_graphic_pane_vc_g

0x92c4,	// (0x00037694) list_double2_graphic_pane_vc_t1_ParamLimits

0x92c4,	// (0x00037694) list_double2_graphic_pane_vc_t1

0x6c8f,	// (0x0003505f) list_single_heading_pane_vc_g1_ParamLimits

0x6c8f,	// (0x0003505f) list_single_heading_pane_vc_g1

0xadba,	// (0x0003918a) list_single_heading_pane_vc_g2_ParamLimits

0xadba,	// (0x0003918a) list_single_heading_pane_vc_g2

0x0001,

0xf824,	// (0x0003dbf4) list_single_heading_pane_vc_g_ParamLimits

0xf824,	// (0x0003dbf4) list_single_heading_pane_vc_g

0x92da,	// (0x000376aa) list_single_heading_pane_vc_t1_ParamLimits

0x92da,	// (0x000376aa) list_single_heading_pane_vc_t1

0x92f0,	// (0x000376c0) list_single_heading_pane_vc_t2_ParamLimits

0x92f0,	// (0x000376c0) list_single_heading_pane_vc_t2

0x0001,

0xf829,	// (0x0003dbf9) list_single_heading_pane_vc_t_ParamLimits

0xf829,	// (0x0003dbf9) list_single_heading_pane_vc_t

0x5a9e,	// (0x00033e6e) list_setting_number_pane_vc_g1_ParamLimits

0x5a9e,	// (0x00033e6e) list_setting_number_pane_vc_g1

0x5aaa,	// (0x00033e7a) list_setting_number_pane_vc_g2_ParamLimits

0x5aaa,	// (0x00033e7a) list_setting_number_pane_vc_g2

0x0001,

0xf82e,	// (0x0003dbfe) list_setting_number_pane_vc_g_ParamLimits

0xf82e,	// (0x0003dbfe) list_setting_number_pane_vc_g

0x5ab6,	// (0x00033e86) list_setting_number_pane_vc_t1_ParamLimits

0x5ab6,	// (0x00033e86) list_setting_number_pane_vc_t1

0x5aca,	// (0x00033e9a) list_setting_number_pane_vc_t2_ParamLimits

0x5aca,	// (0x00033e9a) list_setting_number_pane_vc_t2

0x5ae6,	// (0x00033eb6) list_setting_number_pane_vc_t3_ParamLimits

0x5ae6,	// (0x00033eb6) list_setting_number_pane_vc_t3

0x0002,

0xf833,	// (0x0003dc03) list_setting_number_pane_vc_t_ParamLimits

0xf833,	// (0x0003dc03) list_setting_number_pane_vc_t

0x5b0c,	// (0x00033edc) set_value_pane_vc_ParamLimits

0x5b0c,	// (0x00033edc) set_value_pane_vc

0x6c46,	// (0x00035016) list_double2_graphic_pane_vc_ParamLimits

0x6c46,	// (0x00035016) list_double2_graphic_pane_vc

0xb0fa,	// (0x000394ca) list_double2_large_graphic_pane_vc_ParamLimits

0xb0fa,	// (0x000394ca) list_double2_large_graphic_pane_vc

0x6c46,	// (0x00035016) list_double2_pane_vc_ParamLimits

0x6c46,	// (0x00035016) list_double2_pane_vc

0x6c46,	// (0x00035016) list_double_graphic_heading_pane_vc_ParamLimits

0x6c46,	// (0x00035016) list_double_graphic_heading_pane_vc

0x6c46,	// (0x00035016) list_double_graphic_pane_vc_ParamLimits

0x6c46,	// (0x00035016) list_double_graphic_pane_vc

0x6c46,	// (0x00035016) list_double_heading_pane_vc_ParamLimits

0x6c46,	// (0x00035016) list_double_heading_pane_vc

0xb0fa,	// (0x000394ca) list_double_large_graphic_pane_vc_ParamLimits

0xb0fa,	// (0x000394ca) list_double_large_graphic_pane_vc

0x6c46,	// (0x00035016) list_double_number_pane_vc_ParamLimits

0x6c46,	// (0x00035016) list_double_number_pane_vc

0x6c46,	// (0x00035016) list_double_pane_vc_ParamLimits

0x6c46,	// (0x00035016) list_double_pane_vc

0x6c46,	// (0x00035016) list_double_time_pane_vc_ParamLimits

0x6c46,	// (0x00035016) list_double_time_pane_vc

0x6c46,	// (0x00035016) list_setting_number_pane_vc_ParamLimits

0x6c46,	// (0x00035016) list_setting_number_pane_vc

0x6c46,	// (0x00035016) list_setting_pane_vc_ParamLimits

0x6c46,	// (0x00035016) list_setting_pane_vc

0x6c46,	// (0x00035016) list_single_graphic_heading_pane_vc_ParamLimits

0x6c46,	// (0x00035016) list_single_graphic_heading_pane_vc

0x6c46,	// (0x00035016) list_single_heading_pane_vc_ParamLimits

0x6c46,	// (0x00035016) list_single_heading_pane_vc

0xb10b,	// (0x000394db) list_single_number_heading_pane_vc_ParamLimits

0xb10b,	// (0x000394db) list_single_number_heading_pane_vc

0x92b8,	// (0x00037688) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x92b8,	// (0x00037688) list_double_graphic_heading_pane_vc_g1

0x6c8f,	// (0x0003505f) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x6c8f,	// (0x0003505f) list_double_graphic_heading_pane_vc_g2

0xadba,	// (0x0003918a) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xadba,	// (0x0003918a) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf803,	// (0x0003dbd3) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf803,	// (0x0003dbd3) list_double_graphic_heading_pane_vc_g

0x93df,	// (0x000377af) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x93df,	// (0x000377af) list_double_graphic_heading_pane_vc_t1

0x92da,	// (0x000376aa) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x92da,	// (0x000376aa) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa31,	// (0x0003de01) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa31,	// (0x0003de01) list_double_graphic_heading_pane_vc_t

0x5a9e,	// (0x00033e6e) list_setting_pane_vc_g1_ParamLimits

0x5a9e,	// (0x00033e6e) list_setting_pane_vc_g1

0x5aaa,	// (0x00033e7a) list_setting_pane_vc_g2_ParamLimits

0x5aaa,	// (0x00033e7a) list_setting_pane_vc_g2

0x0001,

0xf82e,	// (0x0003dbfe) list_setting_pane_vc_g_ParamLimits

0xf82e,	// (0x0003dbfe) list_setting_pane_vc_g

0x721f,	// (0x000355ef) list_setting_pane_vc_t1_ParamLimits

0x721f,	// (0x000355ef) list_setting_pane_vc_t1

0x7233,	// (0x00035603) list_setting_pane_vc_t2_ParamLimits

0x7233,	// (0x00035603) list_setting_pane_vc_t2

0x0001,

0xfa5f,	// (0x0003de2f) list_setting_pane_vc_t_ParamLimits

0xfa5f,	// (0x0003de2f) list_setting_pane_vc_t

0x5b0c,	// (0x00033edc) set_value_pane_cp_vc_ParamLimits

0x5b0c,	// (0x00033edc) set_value_pane_cp_vc

0x6c8f,	// (0x0003505f) list_single_number_heading_pane_vc_g1_ParamLimits

0x6c8f,	// (0x0003505f) list_single_number_heading_pane_vc_g1

0xadba,	// (0x0003918a) list_single_number_heading_pane_vc_g2_ParamLimits

0xadba,	// (0x0003918a) list_single_number_heading_pane_vc_g2

0x0001,

0xf824,	// (0x0003dbf4) list_single_number_heading_pane_vc_g_ParamLimits

0xf824,	// (0x0003dbf4) list_single_number_heading_pane_vc_g

0x92da,	// (0x000376aa) list_single_number_heading_pane_vc_t1_ParamLimits

0x92da,	// (0x000376aa) list_single_number_heading_pane_vc_t1

0x93f3,	// (0x000377c3) list_single_number_heading_pane_vc_t2_ParamLimits

0x93f3,	// (0x000377c3) list_single_number_heading_pane_vc_t2

0x9407,	// (0x000377d7) list_single_number_heading_pane_vc_t3_ParamLimits

0x9407,	// (0x000377d7) list_single_number_heading_pane_vc_t3

0x0002,

0xfa64,	// (0x0003de34) list_single_number_heading_pane_vc_t_ParamLimits

0xfa64,	// (0x0003de34) list_single_number_heading_pane_vc_t

0x92b8,	// (0x00037688) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x92b8,	// (0x00037688) list_single_graphic_heading_pane_vc_g1

0x6c8f,	// (0x0003505f) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x6c8f,	// (0x0003505f) list_single_graphic_heading_pane_vc_g4

0xadba,	// (0x0003918a) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xadba,	// (0x0003918a) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf803,	// (0x0003dbd3) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf803,	// (0x0003dbd3) list_single_graphic_heading_pane_vc_g

0x92da,	// (0x000376aa) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x92da,	// (0x000376aa) list_single_graphic_heading_pane_vc_t1

0x9419,	// (0x000377e9) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x9419,	// (0x000377e9) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa6b,	// (0x0003de3b) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa6b,	// (0x0003de3b) list_single_graphic_heading_pane_vc_t

0x6c8f,	// (0x0003505f) list_double2_pane_vc_g1_ParamLimits

0x6c8f,	// (0x0003505f) list_double2_pane_vc_g1

0xadba,	// (0x0003918a) list_double2_pane_vc_g2_ParamLimits

0xadba,	// (0x0003918a) list_double2_pane_vc_g2

0x0001,

0xf824,	// (0x0003dbf4) list_double2_pane_vc_g_ParamLimits

0xf824,	// (0x0003dbf4) list_double2_pane_vc_g

0x942d,	// (0x000377fd) list_double2_pane_vc_t1_ParamLimits

0x942d,	// (0x000377fd) list_double2_pane_vc_t1

0xb267,	// (0x00039637) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xb267,	// (0x00039637) list_double2_large_graphic_pane_vc_g1

0xb273,	// (0x00039643) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xb273,	// (0x00039643) list_double2_large_graphic_pane_vc_g2

0xb27f,	// (0x0003964f) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xb27f,	// (0x0003964f) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa70,	// (0x0003de40) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa70,	// (0x0003de40) list_double2_large_graphic_pane_vc_g

0x9443,	// (0x00037813) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x9443,	// (0x00037813) list_double2_large_graphic_pane_vc_t1

0xb28b,	// (0x0003965b) list_double_time_pane_vc_g1_ParamLimits

0xb28b,	// (0x0003965b) list_double_time_pane_vc_g1

0xb297,	// (0x00039667) list_double_time_pane_vc_g2_ParamLimits

0xb297,	// (0x00039667) list_double_time_pane_vc_g2

0x0001,

0xfa77,	// (0x0003de47) list_double_time_pane_vc_g_ParamLimits

0xfa77,	// (0x0003de47) list_double_time_pane_vc_g

0x9459,	// (0x00037829) list_double_time_pane_vc_t1_ParamLimits

0x9459,	// (0x00037829) list_double_time_pane_vc_t1

0x9472,	// (0x00037842) list_double_time_pane_vc_t2_ParamLimits

0x9472,	// (0x00037842) list_double_time_pane_vc_t2

0x94b2,	// (0x00037882) list_double_time_pane_vc_t3_ParamLimits

0x94b2,	// (0x00037882) list_double_time_pane_vc_t3

0x94ca,	// (0x0003789a) list_double_time_pane_vc_t4_ParamLimits

0x94ca,	// (0x0003789a) list_double_time_pane_vc_t4

0x0003,

0xfa7c,	// (0x0003de4c) list_double_time_pane_vc_t_ParamLimits

0xfa7c,	// (0x0003de4c) list_double_time_pane_vc_t

0x6c8f,	// (0x0003505f) list_double_pane_vc_g1_ParamLimits

0x6c8f,	// (0x0003505f) list_double_pane_vc_g1

0xadba,	// (0x0003918a) list_double_pane_vc_g2_ParamLimits

0xadba,	// (0x0003918a) list_double_pane_vc_g2

0x0001,

0xf824,	// (0x0003dbf4) list_double_pane_vc_g_ParamLimits

0xf824,	// (0x0003dbf4) list_double_pane_vc_g

0x94de,	// (0x000378ae) list_double_pane_vc_t1_ParamLimits

0x94de,	// (0x000378ae) list_double_pane_vc_t1

0x94f0,	// (0x000378c0) list_double_pane_vc_t2_ParamLimits

0x94f0,	// (0x000378c0) list_double_pane_vc_t2

0x0001,

0xfa85,	// (0x0003de55) list_double_pane_vc_t_ParamLimits

0xfa85,	// (0x0003de55) list_double_pane_vc_t

0x6c8f,	// (0x0003505f) list_double_number_pane_vc_g1_ParamLimits

0x6c8f,	// (0x0003505f) list_double_number_pane_vc_g1

0xadba,	// (0x0003918a) list_double_number_pane_vc_g2_ParamLimits

0xadba,	// (0x0003918a) list_double_number_pane_vc_g2

0x0001,

0xf824,	// (0x0003dbf4) list_double_number_pane_vc_g_ParamLimits

0xf824,	// (0x0003dbf4) list_double_number_pane_vc_g

0x9508,	// (0x000378d8) list_double_number_pane_vc_t1_ParamLimits

0x9508,	// (0x000378d8) list_double_number_pane_vc_t1

0x951c,	// (0x000378ec) list_double_number_pane_vc_t2_ParamLimits

0x951c,	// (0x000378ec) list_double_number_pane_vc_t2

0x94f0,	// (0x000378c0) list_double_number_pane_vc_t3_ParamLimits

0x94f0,	// (0x000378c0) list_double_number_pane_vc_t3

0x0002,

0xfa8a,	// (0x0003de5a) list_double_number_pane_vc_t_ParamLimits

0xfa8a,	// (0x0003de5a) list_double_number_pane_vc_t

0xb2a3,	// (0x00039673) list_double_large_graphic_pane_vc_g1_ParamLimits

0xb2a3,	// (0x00039673) list_double_large_graphic_pane_vc_g1

0xb2af,	// (0x0003967f) list_double_large_graphic_pane_vc_g2_ParamLimits

0xb2af,	// (0x0003967f) list_double_large_graphic_pane_vc_g2

0xb27f,	// (0x0003964f) list_double_large_graphic_pane_vc_g3_ParamLimits

0xb27f,	// (0x0003964f) list_double_large_graphic_pane_vc_g3

0x952e,	// (0x000378fe) list_double_large_graphic_pane_vc_g4_ParamLimits

0x952e,	// (0x000378fe) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa91,	// (0x0003de61) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa91,	// (0x0003de61) list_double_large_graphic_pane_vc_g

0x953a,	// (0x0003790a) list_double_large_graphic_pane_vc_t1_ParamLimits

0x953a,	// (0x0003790a) list_double_large_graphic_pane_vc_t1

0x954c,	// (0x0003791c) list_double_large_graphic_pane_vc_t2_ParamLimits

0x954c,	// (0x0003791c) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa9a,	// (0x0003de6a) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa9a,	// (0x0003de6a) list_double_large_graphic_pane_vc_t

0x6c8f,	// (0x0003505f) list_double_heading_pane_vc_g1_ParamLimits

0x6c8f,	// (0x0003505f) list_double_heading_pane_vc_g1

0xadba,	// (0x0003918a) list_double_heading_pane_vc_g2_ParamLimits

0xadba,	// (0x0003918a) list_double_heading_pane_vc_g2

0x0001,

0xf824,	// (0x0003dbf4) list_double_heading_pane_vc_g_ParamLimits

0xf824,	// (0x0003dbf4) list_double_heading_pane_vc_g

0x9565,	// (0x00037935) list_double_heading_pane_vc_t1_ParamLimits

0x9565,	// (0x00037935) list_double_heading_pane_vc_t1

0x92da,	// (0x000376aa) list_double_heading_pane_vc_t2_ParamLimits

0x92da,	// (0x000376aa) list_double_heading_pane_vc_t2

0x0001,

0xfa9f,	// (0x0003de6f) list_double_heading_pane_vc_t_ParamLimits

0xfa9f,	// (0x0003de6f) list_double_heading_pane_vc_t

0x92b8,	// (0x00037688) list_double_graphic_pane_vc_g1_ParamLimits

0x92b8,	// (0x00037688) list_double_graphic_pane_vc_g1

0xb2be,	// (0x0003968e) list_double_graphic_pane_vc_g2_ParamLimits

0xb2be,	// (0x0003968e) list_double_graphic_pane_vc_g2

0xb2cd,	// (0x0003969d) list_double_graphic_pane_vc_g3_ParamLimits

0xb2cd,	// (0x0003969d) list_double_graphic_pane_vc_g3

0x0002,

0xfaa4,	// (0x0003de74) list_double_graphic_pane_vc_g_ParamLimits

0xfaa4,	// (0x0003de74) list_double_graphic_pane_vc_g

0x9579,	// (0x00037949) list_double_graphic_pane_vc_t1_ParamLimits

0x9579,	// (0x00037949) list_double_graphic_pane_vc_t1

0x94f0,	// (0x000378c0) list_double_graphic_pane_vc_t2_ParamLimits

0x94f0,	// (0x000378c0) list_double_graphic_pane_vc_t2

0x0001,

0xfaab,	// (0x0003de7b) list_double_graphic_pane_vc_t_ParamLimits

0xfaab,	// (0x0003de7b) list_double_graphic_pane_vc_t

0x98a7,	// (0x00037c77) aid_size_cell_fastswap

0x98af,	// (0x00037c7f) aid_size_cell_touch_ParamLimits

0x98af,	// (0x00037c7f) aid_size_cell_touch

0x9b0a,	// (0x00037eda) popup_fast_swap_wide_window_ParamLimits

0x9b0a,	// (0x00037eda) popup_fast_swap_wide_window

0x9c14,	// (0x00037fe4) touch_pane_ParamLimits

0x9c14,	// (0x00037fe4) touch_pane

0x4ac6,	// (0x00032e96) button_value_adjust_pane_cp2

0x8f58,	// (0x00037328) button_value_adjust_pane_cp4

0x8f7c,	// (0x0003734c) form_field_data_pane_cp2

0x8f9d,	// (0x0003736d) form_field_data_wide_pane_cp2

0x4e2e,	// (0x000331fe) bg_scroll_pane_ParamLimits

0xa336,	// (0x00038706) scroll_handle_pane_ParamLimits

0xa34a,	// (0x0003871a) scroll_sc2_down_pane_ParamLimits

0xa34a,	// (0x0003871a) scroll_sc2_down_pane

0x4e5f,	// (0x0003322f) scroll_sc2_up_pane_ParamLimits

0x4e5f,	// (0x0003322f) scroll_sc2_up_pane

0xc9fc,	// (0x0003adcc) grid_wheel_folder_pane_g1_ParamLimits

0xc9fc,	// (0x0003adcc) grid_wheel_folder_pane_g1

0xa5b2,	// (0x00038982) clock_nsta_pane_cp2_ParamLimits

0xa5b2,	// (0x00038982) clock_nsta_pane_cp2

0xa667,	// (0x00038a37) listscroll_midp_pane_ParamLimits

0xa673,	// (0x00038a43) midp_canvas_pane

0x5712,	// (0x00033ae2) nsta_clock_indic_pane

0x574a,	// (0x00033b1a) listscroll_form_pane_vc

0x5752,	// (0x00033b22) listscroll_set_pane_vc_ParamLimits

0x5752,	// (0x00033b22) listscroll_set_pane_vc

0xc12b,	// (0x0003a4fb) clock_nsta_pane

0xc138,	// (0x0003a508) indicator_nsta_pane

0x5994,	// (0x00033d64) bg_popup_sub_pane_cp2_ParamLimits

0x59a8,	// (0x00033d78) find_pane_cp2_ParamLimits

0x59a8,	// (0x00033d78) find_pane_cp2

0x59be,	// (0x00033d8e) grid_toobar_pane_ParamLimits

0x5b1a,	// (0x00033eea) list_form_gen_pane_vc_ParamLimits

0x5b1a,	// (0x00033eea) list_form_gen_pane_vc

0x5b30,	// (0x00033f00) scroll_pane_cp8_vc_ParamLimits

0x5b30,	// (0x00033f00) scroll_pane_cp8_vc

0x5b80,	// (0x00033f50) data_form_wide_pane_vc_ParamLimits

0x5b80,	// (0x00033f50) data_form_wide_pane_vc

0x5b8c,	// (0x00033f5c) form_field_data_wide_pane_vc_g1

0x5b94,	// (0x00033f64) form_field_data_wide_pane_vc_t1_ParamLimits

0x5b94,	// (0x00033f64) form_field_data_wide_pane_vc_t1

0x4ada,	// (0x00032eaa) input_focus_pane_cp6_vc_ParamLimits

0x4ada,	// (0x00032eaa) input_focus_pane_cp6_vc

0xc485,	// (0x0003a855) list_midp_pane_ParamLimits

0xc491,	// (0x0003a861) scroll_pane_cp16_ParamLimits

0xc491,	// (0x0003a861) scroll_pane_cp16

0x5dfb,	// (0x000341cb) button_value_adjust_pane_ParamLimits

0x5dfb,	// (0x000341cb) button_value_adjust_pane

0xc63c,	// (0x0003aa0c) button_value_adjust_pane_cp6_ParamLimits

0xc63c,	// (0x0003aa0c) button_value_adjust_pane_cp6

0xc766,	// (0x0003ab36) settings_code_pane_cp_ParamLimits

0xc766,	// (0x0003ab36) settings_code_pane_cp

0x4473,	// (0x00032843) cell_touch_pane_g1

0x4473,	// (0x00032843) cell_touch_pane_g2

0x0001,

0xf74c,	// (0x0003db1c) cell_touch_pane_g

0xc8c8,	// (0x0003ac98) cell_touch_pane_cp_ParamLimits

0xc8c8,	// (0x0003ac98) cell_touch_pane_cp

0xc8d8,	// (0x0003aca8) cell_touch_pane_ParamLimits

0xc8d8,	// (0x0003aca8) cell_touch_pane

0x4473,	// (0x00032843) scroll_sc2_down_pane_g1

0x4473,	// (0x00032843) scroll_sc2_up_pane_g1

0x447d,	// (0x0003284d) bg_set_opt_pane_cp4_vc

0x701b,	// (0x000353eb) list_set_graphic_pane_vc_g1_ParamLimits

0x701b,	// (0x000353eb) list_set_graphic_pane_vc_g1

0x7027,	// (0x000353f7) list_set_graphic_pane_vc_g2_ParamLimits

0x7027,	// (0x000353f7) list_set_graphic_pane_vc_g2

0x0001,

0xfa36,	// (0x0003de06) list_set_graphic_pane_vc_g_ParamLimits

0xfa36,	// (0x0003de06) list_set_graphic_pane_vc_g

0x7033,	// (0x00035403) text_primary_small_cp13_vc_ParamLimits

0x7033,	// (0x00035403) text_primary_small_cp13_vc

0x704b,	// (0x0003541b) list_set_graphic_pane_vc_ParamLimits

0x704b,	// (0x0003541b) list_set_graphic_pane_vc

0x447d,	// (0x0003284d) input_focus_pane_cp2_vc

0x4473,	// (0x00032843) setting_code_pane_vc_g1

0x705f,	// (0x0003542f) setting_code_pane_vc_t1

0x706d,	// (0x0003543d) set_text_pane_vc_t1_ParamLimits

0x706d,	// (0x0003543d) set_text_pane_vc_t1

0x447d,	// (0x0003284d) input_focus_pane_cp1_vc

0x7088,	// (0x00035458) list_set_text_pane_vc

0x4473,	// (0x00032843) setting_text_pane_vc_g1

0x447d,	// (0x0003284d) bg_set_opt_pane_cp2_vc

0x7092,	// (0x00035462) setting_slider_graphic_pane_vc_g1

0x709a,	// (0x0003546a) setting_slider_graphic_pane_vc_t1

0x70a8,	// (0x00035478) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa3b,	// (0x0003de0b) setting_slider_graphic_pane_vc_t

0x70b6,	// (0x00035486) slider_set_pane_cp_vc

0x70be,	// (0x0003548e) slider_set_pane_vc_g1

0x70c7,	// (0x00035497) slider_set_pane_vc_g2

0x0006,

0xfa40,	// (0x0003de10) slider_set_pane_vc_g

0x4b4a,	// (0x00032f1a) set_opt_bg_pane_g1_copy1

0x4b52,	// (0x00032f22) set_opt_bg_pane_g2_copy1

0x70f3,	// (0x000354c3) set_opt_bg_pane_g3_copy1

0x4b62,	// (0x00032f32) set_opt_bg_pane_g4_copy1

0x4b6a,	// (0x00032f3a) set_opt_bg_pane_g5_copy1

0x4b72,	// (0x00032f42) set_opt_bg_pane_g6_copy1

0x70fd,	// (0x000354cd) set_opt_bg_pane_g7_copy1

0x7105,	// (0x000354d5) set_opt_bg_pane_g8_copy1

0x710f,	// (0x000354df) set_opt_bg_pane_g9_copy1

0x447d,	// (0x0003284d) bg_set_opt_pane_cp_vc

0x7119,	// (0x000354e9) setting_slider_pane_vc_t1

0x709a,	// (0x0003546a) setting_slider_pane_vc_t2

0x70a8,	// (0x00035478) setting_slider_pane_vc_t3

0x0002,

0xfa4f,	// (0x0003de1f) setting_slider_pane_vc_t

0x70b6,	// (0x00035486) slider_set_pane_vc

0xaece,	// (0x0003929e) volume_set_pane_vc_g1

0xaed7,	// (0x000392a7) volume_set_pane_vc_g2

0xaee0,	// (0x000392b0) volume_set_pane_vc_g3

0xaee9,	// (0x000392b9) volume_set_pane_vc_g4

0xaef2,	// (0x000392c2) volume_set_pane_vc_g5

0xaefb,	// (0x000392cb) volume_set_pane_vc_g6

0xaf04,	// (0x000392d4) volume_set_pane_vc_g7

0xaf0d,	// (0x000392dd) volume_set_pane_vc_g8

0xaf16,	// (0x000392e6) volume_set_pane_vc_g9

0xaf1f,	// (0x000392ef) volume_set_pane_vc_g10

0x0009,

0xf8f4,	// (0x0003dcc4) volume_set_pane_vc_g

0x7128,	// (0x000354f8) volume_set_pane_vc

0x7130,	// (0x00035500) button_value_adjust_pane_cp1_vc

0x713a,	// (0x0003550a) list_highlight_pane_cp2_vc

0x7143,	// (0x00035513) list_set_pane_vc_ParamLimits

0x7143,	// (0x00035513) list_set_pane_vc

0x71ad,	// (0x0003557d) main_pane_set_vc_t1_ParamLimits

0x71ad,	// (0x0003557d) main_pane_set_vc_t1

0x71c2,	// (0x00035592) main_pane_set_vc_t2_ParamLimits

0x71c2,	// (0x00035592) main_pane_set_vc_t2

0x71d4,	// (0x000355a4) main_pane_set_vc_t3_ParamLimits

0x71d4,	// (0x000355a4) main_pane_set_vc_t3

0x71e8,	// (0x000355b8) main_pane_set_vc_t4_ParamLimits

0x71e8,	// (0x000355b8) main_pane_set_vc_t4

0x0003,

0xfa56,	// (0x0003de26) main_pane_set_vc_t_ParamLimits

0xfa56,	// (0x0003de26) main_pane_set_vc_t

0x71fc,	// (0x000355cc) setting_code_pane_vc_ParamLimits

0x71fc,	// (0x000355cc) setting_code_pane_vc

0x720d,	// (0x000355dd) setting_slider_graphic_pane_vc

0x720d,	// (0x000355dd) setting_slider_pane_vc

0x720d,	// (0x000355dd) setting_text_pane_vc

0x720d,	// (0x000355dd) setting_volume_pane_vc

0x7217,	// (0x000355e7) scroll_pane_cp121_vc

0x4ab4,	// (0x00032e84) set_content_pane_vc

0x7255,	// (0x00035625) button_value_adjust_pane_g1

0x725e,	// (0x0003562e) button_value_adjust_pane_g2

0x0001,

0xfab0,	// (0x0003de80) button_value_adjust_pane_g

0x7267,	// (0x00035637) form_field_slider_wide_pane_vc_t1_ParamLimits

0x7267,	// (0x00035637) form_field_slider_wide_pane_vc_t1

0x727b,	// (0x0003564b) form_field_slider_wide_pane_vc_t2_ParamLimits

0x727b,	// (0x0003564b) form_field_slider_wide_pane_vc_t2

0x0001,

0xfab5,	// (0x0003de85) form_field_slider_wide_pane_vc_t_ParamLimits

0xfab5,	// (0x0003de85) form_field_slider_wide_pane_vc_t

0x44cb,	// (0x0003289b) input_focus_pane_cp10_vc_ParamLimits

0x44cb,	// (0x0003289b) input_focus_pane_cp10_vc

0x728d,	// (0x0003565d) slider_cont_pane_cp1_vc_ParamLimits

0x728d,	// (0x0003565d) slider_cont_pane_cp1_vc

0x70be,	// (0x0003548e) slider_form_pane_g1_cp2

0x70c7,	// (0x00035497) slider_form_pane_g2_cp2

0x72a6,	// (0x00035676) form_field_slider_pane_vc_t3

0x72b4,	// (0x00035684) form_field_slider_pane_vc_t4

0x72c2,	// (0x00035692) slider_form_pane_vc_ParamLimits

0x72c2,	// (0x00035692) slider_form_pane_vc

0x72cf,	// (0x0003569f) form_field_slider_pane_vc_t1_ParamLimits

0x72cf,	// (0x0003569f) form_field_slider_pane_vc_t1

0x727b,	// (0x0003564b) form_field_slider_pane_vc_t2_ParamLimits

0x727b,	// (0x0003564b) form_field_slider_pane_vc_t2

0x0001,

0xfac5,	// (0x0003de95) form_field_slider_pane_vc_t_ParamLimits

0xfac5,	// (0x0003de95) form_field_slider_pane_vc_t

0x44cb,	// (0x0003289b) input_focus_pane_cp9_vc_ParamLimits

0x44cb,	// (0x0003289b) input_focus_pane_cp9_vc

0x72eb,	// (0x000356bb) slider_cont_pane_vc_ParamLimits

0x72eb,	// (0x000356bb) slider_cont_pane_vc

0x72fd,	// (0x000356cd) list_form_graphic_pane_cp_vc_ParamLimits

0x72fd,	// (0x000356cd) list_form_graphic_pane_cp_vc

0x5b8c,	// (0x00033f5c) form_field_popup_wide_pane_vc_g1

0x7312,	// (0x000356e2) form_field_popup_wide_pane_vc_t1_ParamLimits

0x7312,	// (0x000356e2) form_field_popup_wide_pane_vc_t1

0x4ada,	// (0x00032eaa) input_focus_pane_cp8_vc_ParamLimits

0x4ada,	// (0x00032eaa) input_focus_pane_cp8_vc

0x7329,	// (0x000356f9) list_form_wide_pane_vc_ParamLimits

0x7329,	// (0x000356f9) list_form_wide_pane_vc

0x7335,	// (0x00035705) list_form_graphic_pane_vc_g1

0x733d,	// (0x0003570d) list_form_graphic_pane_vc_t1_ParamLimits

0x733d,	// (0x0003570d) list_form_graphic_pane_vc_t1

0x44d9,	// (0x000328a9) list_highlight_pane_cp5_vc_ParamLimits

0x44d9,	// (0x000328a9) list_highlight_pane_cp5_vc

0x7359,	// (0x00035729) list_form_graphic_pane_vc_ParamLimits

0x7359,	// (0x00035729) list_form_graphic_pane_vc

0x5b8c,	// (0x00033f5c) form_field_popup_pane_vc_g1

0x736f,	// (0x0003573f) form_field_popup_pane_vc_t1_ParamLimits

0x736f,	// (0x0003573f) form_field_popup_pane_vc_t1

0x4ada,	// (0x00032eaa) input_focus_pane_cp7_vc_ParamLimits

0x4ada,	// (0x00032eaa) input_focus_pane_cp7_vc

0x7386,	// (0x00035756) list_form_pane_vc_ParamLimits

0x7386,	// (0x00035756) list_form_pane_vc

0x7392,	// (0x00035762) data_form_pane_vc_t1_ParamLimits

0x7392,	// (0x00035762) data_form_pane_vc_t1

0x4b4a,	// (0x00032f1a) input_focus_pane_vc_g1

0x4b52,	// (0x00032f22) input_focus_pane_vc_g2

0x4b5a,	// (0x00032f2a) input_focus_pane_vc_g3

0x4b62,	// (0x00032f32) input_focus_pane_vc_g4

0x4b6a,	// (0x00032f3a) input_focus_pane_vc_g5

0x4b72,	// (0x00032f42) input_focus_pane_vc_g6

0x4b7a,	// (0x00032f4a) input_focus_pane_vc_g7

0x4b82,	// (0x00032f52) input_focus_pane_vc_g8

0x4b8a,	// (0x00032f5a) input_focus_pane_vc_g9

0x4473,	// (0x00032843) input_focus_pane_vc_g10

0x0009,

0xf6d5,	// (0x0003daa5) input_focus_pane_vc_g

0x5b80,	// (0x00033f50) data_form_pane_vc_ParamLimits

0x5b80,	// (0x00033f50) data_form_pane_vc

0x5b8c,	// (0x00033f5c) form_field_data_pane_vc_g1

0x73ad,	// (0x0003577d) form_field_data_pane_vc_t1_ParamLimits

0x73ad,	// (0x0003577d) form_field_data_pane_vc_t1

0x4ada,	// (0x00032eaa) input_focus_pane_vc_ParamLimits

0x4ada,	// (0x00032eaa) input_focus_pane_vc

0x73c7,	// (0x00035797) button_value_adjust_pane_cp3_vc

0x73cf,	// (0x0003579f) button_value_adjust_pane_cp5_vc

0x73d7,	// (0x000357a7) form_field_data_pane_vc_ParamLimits

0x73d7,	// (0x000357a7) form_field_data_pane_vc

0x73ee,	// (0x000357be) form_field_data_pane_vc_cp2

0x73f6,	// (0x000357c6) form_field_data_wide_pane_vc_ParamLimits

0x73f6,	// (0x000357c6) form_field_data_wide_pane_vc

0x740c,	// (0x000357dc) form_field_data_wide_pane_vc_cp2

0x7414,	// (0x000357e4) form_field_popup_pane_vc_ParamLimits

0x7414,	// (0x000357e4) form_field_popup_pane_vc

0x742b,	// (0x000357fb) form_field_popup_wide_pane_vc_ParamLimits

0x742b,	// (0x000357fb) form_field_popup_wide_pane_vc

0x7441,	// (0x00035811) form_field_slider_pane_vc_ParamLimits

0x7441,	// (0x00035811) form_field_slider_pane_vc

0x7454,	// (0x00035824) form_field_slider_wide_pane_vc_ParamLimits

0x7454,	// (0x00035824) form_field_slider_wide_pane_vc

0xc8ea,	// (0x0003acba) grid_touch_1_pane_ParamLimits

0xc8ea,	// (0x0003acba) grid_touch_1_pane

0xc8f6,	// (0x0003acc6) grid_touch_2_pane_ParamLimits

0xc8f6,	// (0x0003acc6) grid_touch_2_pane

0x5704,	// (0x00033ad4) touch_pane_g1_ParamLimits

0x5704,	// (0x00033ad4) touch_pane_g1

0x7475,	// (0x00035845) cell_app_pane_cp_wide_ParamLimits

0x7475,	// (0x00035845) cell_app_pane_cp_wide

0x7486,	// (0x00035856) grid_popup_fast_wide_pane_ParamLimits

0x7486,	// (0x00035856) grid_popup_fast_wide_pane

0x749a,	// (0x0003586a) scroll_pane_cp19_ParamLimits

0x749a,	// (0x0003586a) scroll_pane_cp19

0x447d,	// (0x0003284d) bg_popup_window_pane_cp20

0x74ae,	// (0x0003587e) listscroll_popup_fast_wide_pane

0x44d9,	// (0x000328a9) grid_indicator_nsta_pane

0x74b6,	// (0x00035886) clock_nsta_pane_g1

0x74bf,	// (0x0003588f) clock_nsta_pane_t1

0xc90e,	// (0x0003acde) cell_indicator_nsta_pane_ParamLimits

0xc90e,	// (0x0003acde) cell_indicator_nsta_pane

0x7467,	// (0x00035837) cell_indicator_nsta_pane_g1

0xc946,	// (0x0003ad16) cell_indicator_nsta_pane_g2

0x0001,

0xfacf,	// (0x0003de9f) cell_indicator_nsta_pane_g

0x74db,	// (0x000358ab) clock_nsta_pane_cp

0x74e3,	// (0x000358b3) indicator_nsta_pane_cp

0x74eb,	// (0x000358bb) nsta_clock_indic_pane_g1

0x4515,	// (0x000328e5) grid_indicator_pane

0x4f54,	// (0x00033324) scroll_pane_cp29

0xa501,	// (0x000388d1) indicator_nsta_pane_cp2_ParamLimits

0xa501,	// (0x000388d1) indicator_nsta_pane_cp2

0x44d9,	// (0x000328a9) main_apps_wheel_pane

0x5ca8,	// (0x00034078) form_midp_field_text_pane_ParamLimits

0x5ddb,	// (0x000341ab) scroll_bar_cp050_ParamLimits

0x7523,	// (0x000358f3) cell_indicator_pane_ParamLimits

0x7523,	// (0x000358f3) cell_indicator_pane

0x753a,	// (0x0003590a) cell_indicator_pane_g1

0xc95c,	// (0x0003ad2c) grid_wheel_folder_pane_ParamLimits

0xc95c,	// (0x0003ad2c) grid_wheel_folder_pane

0xc970,	// (0x0003ad40) list_wheel_apps_pane_ParamLimits

0xc970,	// (0x0003ad40) list_wheel_apps_pane

0xc981,	// (0x0003ad51) main_apps_wheel_pane_g1_ParamLimits

0xc981,	// (0x0003ad51) main_apps_wheel_pane_g1

0xc995,	// (0x0003ad65) main_apps_wheel_pane_g2_ParamLimits

0xc995,	// (0x0003ad65) main_apps_wheel_pane_g2

0x0001,

0xfade,	// (0x0003deae) main_apps_wheel_pane_g_ParamLimits

0xfade,	// (0x0003deae) main_apps_wheel_pane_g

0xc9ad,	// (0x0003ad7d) main_apps_wheel_pane_t1_ParamLimits

0xc9ad,	// (0x0003ad7d) main_apps_wheel_pane_t1

0xc9d0,	// (0x0003ada0) list_wheel_apps_pane_g1

0xc9d8,	// (0x0003ada8) list_wheel_apps_pane_g2

0xc9e0,	// (0x0003adb0) list_wheel_apps_pane_g3

0xc9e8,	// (0x0003adb8) list_wheel_apps_pane_g4

0xc9f2,	// (0x0003adc2) list_wheel_apps_pane_g5

0x0004,

0xfae3,	// (0x0003deb3) list_wheel_apps_pane_g

0x5388,	// (0x00033758) navi_icon_text_pane

0xc073,	// (0x0003a443) aid_fill_nsta

0xca15,	// (0x0003ade5) navi_icon_text_pane_g1

0xca24,	// (0x0003adf4) navi_icon_text_pane_t1

0xa64f,	// (0x00038a1f) list_set_graphic_pane_t1_ParamLimits

0xa64f,	// (0x00038a1f) list_set_graphic_pane_t1

0x64ef,	// (0x000348bf) popup_midp_note_alarm_window_t6_ParamLimits

0x64ef,	// (0x000348bf) popup_midp_note_alarm_window_t6

0x6501,	// (0x000348d1) popup_midp_note_alarm_window_t7_ParamLimits

0x6501,	// (0x000348d1) popup_midp_note_alarm_window_t7

0x6513,	// (0x000348e3) popup_midp_note_alarm_window_t8_ParamLimits

0x6513,	// (0x000348e3) popup_midp_note_alarm_window_t8

0x6525,	// (0x000348f5) popup_midp_note_alarm_window_t9_ParamLimits

0x6525,	// (0x000348f5) popup_midp_note_alarm_window_t9

0x6537,	// (0x00034907) popup_midp_note_alarm_window_t10_ParamLimits

0x6537,	// (0x00034907) popup_midp_note_alarm_window_t10

0x6549,	// (0x00034919) popup_midp_note_alarm_window_t11_ParamLimits

0x6549,	// (0x00034919) popup_midp_note_alarm_window_t11

0x655b,	// (0x0003492b) scroll_pane_cp17_ParamLimits

0x655b,	// (0x0003492b) scroll_pane_cp17

0xaece,	// (0x0003929e) volume_small_pane_cp_g1

0xb2d9,	// (0x000396a9) volume_small_pane_cp_g2

0xb2e2,	// (0x000396b2) volume_small_pane_cp_g3

0xb2eb,	// (0x000396bb) volume_small_pane_cp_g4

0xb2f4,	// (0x000396c4) volume_small_pane_cp_g5

0xb2fd,	// (0x000396cd) volume_small_pane_cp_g6

0xb306,	// (0x000396d6) volume_small_pane_cp_g7

0xb30f,	// (0x000396df) volume_small_pane_cp_g8

0xb318,	// (0x000396e8) volume_small_pane_cp_g9

0xb321,	// (0x000396f1) volume_small_pane_cp_g10

0x5532,	// (0x00033902) midp_ticker_pane_g1_ParamLimits

0x553e,	// (0x0003390e) midp_ticker_pane_g2_ParamLimits

0xf79d,	// (0x0003db6d) midp_ticker_pane_g_ParamLimits

0xa718,	// (0x00038ae8) midp_ticker_pane_t1_ParamLimits

0xc089,	// (0x0003a459) aid_fill_nsta_2

0x5dc7,	// (0x00034197) list_form2_midp_pane

0x6c24,	// (0x00034ff4) midp_editing_number_pane_ParamLimits

0x6c33,	// (0x00035003) midp_ticker_pane_ParamLimits

0x7544,	// (0x00035914) form2_midp_field_pane

0x754c,	// (0x0003591c) scroll_pane_cp51

0x756c,	// (0x0003593c) form2_midp_button_pane_ParamLimits

0x756c,	// (0x0003593c) form2_midp_button_pane

0x757e,	// (0x0003594e) form2_midp_content_pane_ParamLimits

0x757e,	// (0x0003594e) form2_midp_content_pane

0x7598,	// (0x00035968) form2_midp_field_choice_group_pane

0x75a0,	// (0x00035970) form2_midp_field_pane_g1

0x75a8,	// (0x00035978) form2_midp_field_pane_g2

0x75b0,	// (0x00035980) form2_midp_field_pane_g3

0x75b8,	// (0x00035988) form2_midp_field_pane_g4

0x0003,

0xfb08,	// (0x0003ded8) form2_midp_field_pane_g

0x75c0,	// (0x00035990) form2_midp_gauge_slider_pane

0x75c8,	// (0x00035998) form2_midp_gauge_wait_pane

0x75d0,	// (0x000359a0) form2_midp_image_pane_ParamLimits

0x75d0,	// (0x000359a0) form2_midp_image_pane

0x75eb,	// (0x000359bb) form2_midp_label_pane_ParamLimits

0x75eb,	// (0x000359bb) form2_midp_label_pane

0xca55,	// (0x0003ae25) form2_midp_label_pane_cp_ParamLimits

0xca55,	// (0x0003ae25) form2_midp_label_pane_cp

0x7604,	// (0x000359d4) form2_midp_string_pane_ParamLimits

0x7604,	// (0x000359d4) form2_midp_string_pane

0x958b,	// (0x0003795b) form2_midp_text_pane_ParamLimits

0x958b,	// (0x0003795b) form2_midp_text_pane

0x7616,	// (0x000359e6) form2_midp_time_pane

0x7626,	// (0x000359f6) input_focus_pane_cp51_ParamLimits

0x7626,	// (0x000359f6) input_focus_pane_cp51

0x763e,	// (0x00035a0e) form2_midp_label_pane_t1_ParamLimits

0x763e,	// (0x00035a0e) form2_midp_label_pane_t1

0x95aa,	// (0x0003797a) form2_mdip_text_pane_t1_ParamLimits

0x95aa,	// (0x0003797a) form2_mdip_text_pane_t1

0x95c8,	// (0x00037998) form2_midp_time_pane_t1

0x7687,	// (0x00035a57) form2_midp_gauge_slider_pane_t1

0xca76,	// (0x0003ae46) form2_midp_gauge_slider_pane_t2

0xca88,	// (0x0003ae58) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb11,	// (0x0003dee1) form2_midp_gauge_slider_pane_t

0x7699,	// (0x00035a69) form2_midp_slider_pane

0x76a5,	// (0x00035a75) form2_midp_gauge_wait_pane_t1

0x76b3,	// (0x00035a83) form2_midp_wait_pane_ParamLimits

0x76b3,	// (0x00035a83) form2_midp_wait_pane

0xc3b4,	// (0x0003a784) list_single_2graphic_pane_cp4_ParamLimits

0xc3b4,	// (0x0003a784) list_single_2graphic_pane_cp4

0xca9a,	// (0x0003ae6a) list_single_midp_graphic_pane_cp_ParamLimits

0xca9a,	// (0x0003ae6a) list_single_midp_graphic_pane_cp

0x447d,	// (0x0003284d) list_highlight_pane_cp20

0x76de,	// (0x00035aae) list_single_2graphic_pane_g1_cp4

0x76e6,	// (0x00035ab6) list_single_2graphic_pane_g2_cp4

0x76ee,	// (0x00035abe) list_single_2graphic_pane_t1_cp4

0x44d9,	// (0x000328a9) list_highlight_pane_cp21

0x76fd,	// (0x00035acd) list_single_midp_graphic_pane_g4_cp

0x770c,	// (0x00035adc) list_single_midp_graphic_pane_t1_cp

0xcac9,	// (0x0003ae99) form2_mdip_string_pane_t1_ParamLimits

0xcac9,	// (0x0003ae99) form2_mdip_string_pane_t1

0x447d,	// (0x0003284d) bg_wml_button_pane_cp2

0x4473,	// (0x00032843) form2_midp_image_pane_g1

0xa05b,	// (0x0003842b) list_double_large_graphic_pane_g5_ParamLimits

0xa05b,	// (0x0003842b) list_double_large_graphic_pane_g5

0xa667,	// (0x00038a37) midp_form_pane_ParamLimits

0x44d9,	// (0x000328a9) main_apps_wheel_pane_ParamLimits

0xac80,	// (0x00039050) popup_preview_window_ParamLimits

0xac80,	// (0x00039050) popup_preview_window

0x5831,	// (0x00033c01) popup_touch_info_window_ParamLimits

0x5831,	// (0x00033c01) popup_touch_info_window

0x584f,	// (0x00033c1f) popup_touch_menu_window_ParamLimits

0x584f,	// (0x00033c1f) popup_touch_menu_window

0x4469,	// (0x00032839) bg_popup_sub_pane_cp6

0x7721,	// (0x00035af1) list_touch_menu_pane

0x7729,	// (0x00035af9) list_single_touch_menu_pane_ParamLimits

0x7729,	// (0x00035af9) list_single_touch_menu_pane

0x7740,	// (0x00035b10) list_single_touch_menu_pane_t1

0x44d9,	// (0x000328a9) bg_popup_sub_pane_cp7_ParamLimits

0x44d9,	// (0x000328a9) bg_popup_sub_pane_cp7

0x774e,	// (0x00035b1e) heading_sub_pane

0x7756,	// (0x00035b26) list_touch_info_pane_ParamLimits

0x7756,	// (0x00035b26) list_touch_info_pane

0x7765,	// (0x00035b35) list_single_touch_info_pane_ParamLimits

0x7765,	// (0x00035b35) list_single_touch_info_pane

0x7777,	// (0x00035b47) list_single_touch_info_pane_t1

0x7785,	// (0x00035b55) list_single_touch_info_pane_t2

0x0001,

0xfb1f,	// (0x0003deef) list_single_touch_info_pane_t

0x5508,	// (0x000338d8) bg_popup_heading_pane_cp

0x7793,	// (0x00035b63) heading_sub_pane_t1

0x5b46,	// (0x00033f16) bg_popup_preview_window_pane_cp_ParamLimits

0x5b46,	// (0x00033f16) bg_popup_preview_window_pane_cp

0x774e,	// (0x00035b1e) heading_preview_pane

0x7756,	// (0x00035b26) list_preview_pane_ParamLimits

0x7756,	// (0x00035b26) list_preview_pane

0x77a1,	// (0x00035b71) popup_preview_window_g1

0x7765,	// (0x00035b35) list_single_preview_pane_ParamLimits

0x7765,	// (0x00035b35) list_single_preview_pane

0x77a9,	// (0x00035b79) list_single_preview_pane_g1

0x77b1,	// (0x00035b81) list_single_preview_pane_t1

0x7777,	// (0x00035b47) list_single_preview_pane_t2

0x0001,

0xfb24,	// (0x0003def4) list_single_preview_pane_t

0x77bf,	// (0x00035b8f) bg_popup_heading_pane_cp2_ParamLimits

0x77bf,	// (0x00035b8f) bg_popup_heading_pane_cp2

0x77d5,	// (0x00035ba5) heading_preview_pane_g1

0x77dd,	// (0x00035bad) heading_preview_pane_t1_ParamLimits

0x77dd,	// (0x00035bad) heading_preview_pane_t1

0x452c,	// (0x000328fc) soft_indicator_pane_t1_ParamLimits

0x4a4d,	// (0x00032e1d) scroll_pane_ParamLimits

0x4e56,	// (0x00033226) scroll_sc2_left_pane

0x4e4d,	// (0x0003321d) scroll_sc2_right_pane

0x4e75,	// (0x00033245) scroll_bg_pane_g1_ParamLimits

0x4e8a,	// (0x0003325a) scroll_bg_pane_g2_ParamLimits

0x4ea2,	// (0x00033272) scroll_bg_pane_g3_ParamLimits

0xf72c,	// (0x0003dafc) scroll_bg_pane_g_ParamLimits

0x4e75,	// (0x00033245) scroll_handle_pane_g1_ParamLimits

0x4ec4,	// (0x00033294) scroll_handle_pane_g2_ParamLimits

0x4ea2,	// (0x00033272) scroll_handle_pane_g3_ParamLimits

0xf733,	// (0x0003db03) scroll_handle_pane_g_ParamLimits

0x5772,	// (0x00033b42) popup_choice_list_window_ParamLimits

0x5772,	// (0x00033b42) popup_choice_list_window

0x59a0,	// (0x00033d70) choice_list_pane

0x5a22,	// (0x00033df2) cell_toolbar_pane_t1

0x5a4a,	// (0x00033e1a) toolbar_button_pane_ParamLimits

0x6987,	// (0x00034d57) ai_gene_pane_1_t2_ParamLimits

0x6987,	// (0x00034d57) ai_gene_pane_1_t2

0x0001,

0xf950,	// (0x0003dd20) ai_gene_pane_1_t_ParamLimits

0xf950,	// (0x0003dd20) ai_gene_pane_1_t

0x77fa,	// (0x00035bca) scroll_sc2_left_pane_g1

0x77fa,	// (0x00035bca) scroll_sc2_right_pane_g1

0x4c3b,	// (0x0003300b) bg_popup_sub_pane_cp10

0x7804,	// (0x00035bd4) list_choice_list_pane

0x781b,	// (0x00035beb) list_single_choice_list_pane_ParamLimits

0x781b,	// (0x00035beb) list_single_choice_list_pane

0x782f,	// (0x00035bff) list_single_choice_list_pane_g1

0x7837,	// (0x00035c07) list_single_choice_list_pane_t1_ParamLimits

0x7837,	// (0x00035c07) list_single_choice_list_pane_t1

0x784c,	// (0x00035c1c) choice_list_pane_g1

0x7854,	// (0x00035c24) choice_list_pane_t1

0x4469,	// (0x00032839) input_focus_pane_cp11

0x4db0,	// (0x00033180) title_pane_stacon_g2_ParamLimits

0x4db0,	// (0x00033180) title_pane_stacon_g2

0x0002,

0xf712,	// (0x0003dae2) title_pane_stacon_g_ParamLimits

0xf712,	// (0x0003dae2) title_pane_stacon_g

0x5508,	// (0x000338d8) cursor_press_pane

0xaa25,	// (0x00038df5) popup_fep_hwr_window_ParamLimits

0xaa25,	// (0x00038df5) popup_fep_hwr_window

0x57c8,	// (0x00033b98) popup_fep_vkb_window_ParamLimits

0x57c8,	// (0x00033b98) popup_fep_vkb_window

0x7862,	// (0x00035c32) cursor_press_pane_g1

0x0002,

0xfb4d,	// (0x0003df1d) fep_vkb_side_pane_g_ParamLimits

0xb355,	// (0x00039725) fep_hwr_candidate_pane_ParamLimits

0xb355,	// (0x00039725) fep_hwr_candidate_pane

0xb37f,	// (0x0003974f) fep_hwr_side_pane_ParamLimits

0xb37f,	// (0x0003974f) fep_hwr_side_pane

0xb39f,	// (0x0003976f) fep_hwr_top_pane_ParamLimits

0xb39f,	// (0x0003976f) fep_hwr_top_pane

0xb3b7,	// (0x00039787) fep_hwr_write_pane_ParamLimits

0xb3b7,	// (0x00039787) fep_hwr_write_pane

0xfb4d,	// (0x0003df1d) fep_vkb_side_pane_g

0x787c,	// (0x00035c4c) fep_hwr_top_pane_g1

0x786a,	// (0x00035c3a) fep_hwr_top_pane_g2

0xb3e3,	// (0x000397b3) fep_hwr_top_pane_g3

0x0002,

0xfb29,	// (0x0003def9) fep_hwr_top_pane_g

0xb3f8,	// (0x000397c8) fep_hwr_top_text_pane

0x501b,	// (0x000333eb) fep_hwr_top_text_pane_g1

0x78b2,	// (0x00035c82) fep_hwr_top_text_pane_t1

0xb4ee,	// (0x000398be) fep_hwr_candidate_pane_g1

0x79df,	// (0x00035daf) fep_vkb_keypad_pane_g3_ParamLimits

0x79df,	// (0x00035daf) fep_vkb_keypad_pane_g3

0x7a15,	// (0x00035de5) fep_vkb_keypad_pane_g4_ParamLimits

0x7a15,	// (0x00035de5) fep_vkb_keypad_pane_g4

0x7a84,	// (0x00035e54) fep_vkb_bottom_pane_g2_ParamLimits

0x7a84,	// (0x00035e54) fep_vkb_bottom_pane_g2

0x0001,

0xfb54,	// (0x0003df24) fep_vkb_bottom_pane_g_ParamLimits

0xfb54,	// (0x0003df24) fep_vkb_bottom_pane_g

0x77fa,	// (0x00035bca) cell_vkb_side_pane_g2

0x0001,

0xfb5e,	// (0x0003df2e) cell_vkb_side_pane_g

0x7ac8,	// (0x00035e98) cell_vkb_side_pane_t1

0x7ad6,	// (0x00035ea6) cell_vkb_side_pane_t1_copy1

0x77fa,	// (0x00035bca) bg_fep_vkb_candidate_pane_g2

0x7bac,	// (0x00035f7c) cell_vkb_candidate_pane_ParamLimits

0x78c0,	// (0x00035c90) aid_size_cell_vkb_ParamLimits

0x78c0,	// (0x00035c90) aid_size_cell_vkb

0x7bac,	// (0x00035f7c) cell_vkb_candidate_pane

0xb508,	// (0x000398d8) bg_popup_fep_shadow_pane_g1

0xcbd4,	// (0x0003afa4) fep_vkb_bottom_pane_ParamLimits

0xcbd4,	// (0x0003afa4) fep_vkb_bottom_pane

0x794d,	// (0x00035d1d) fep_vkb_candidate_pane_ParamLimits

0x794d,	// (0x00035d1d) fep_vkb_candidate_pane

0xcbf9,	// (0x0003afc9) fep_vkb_keypad_pane_ParamLimits

0xcbf9,	// (0x0003afc9) fep_vkb_keypad_pane

0xcc35,	// (0x0003b005) fep_vkb_side_pane_ParamLimits

0xcc35,	// (0x0003b005) fep_vkb_side_pane

0xcc71,	// (0x0003b041) fep_vkb_top_pane_ParamLimits

0xcc71,	// (0x0003b041) fep_vkb_top_pane

0x7973,	// (0x00035d43) fep_vkb_top_pane_g1_ParamLimits

0x7973,	// (0x00035d43) fep_vkb_top_pane_g1

0x7982,	// (0x00035d52) fep_vkb_top_pane_g2_ParamLimits

0x7982,	// (0x00035d52) fep_vkb_top_pane_g2

0x7991,	// (0x00035d61) fep_vkb_top_pane_g3_ParamLimits

0x7991,	// (0x00035d61) fep_vkb_top_pane_g3

0x0003,

0xfb44,	// (0x0003df14) fep_vkb_top_pane_g_ParamLimits

0xfb44,	// (0x0003df14) fep_vkb_top_pane_g

0x79af,	// (0x00035d7f) fep_vkb_top_text_pane_ParamLimits

0x79af,	// (0x00035d7f) fep_vkb_top_text_pane

0xccad,	// (0x0003b07d) fep_vkb_side_pane_g1_ParamLimits

0xccad,	// (0x0003b07d) fep_vkb_side_pane_g1

0x79ce,	// (0x00035d9e) grid_vkb_side_pane_ParamLimits

0x79ce,	// (0x00035d9e) grid_vkb_side_pane

0xb510,	// (0x000398e0) bg_popup_fep_shadow_pane_g2

0xb519,	// (0x000398e9) bg_popup_fep_shadow_pane_g3

0xb521,	// (0x000398f1) bg_popup_fep_shadow_pane_g4

0xb52a,	// (0x000398fa) bg_popup_fep_shadow_pane_g5

0xb534,	// (0x00039904) bg_popup_fep_shadow_pane_g6

0xb53c,	// (0x0003990c) bg_popup_fep_shadow_pane_g7

0x4b6a,	// (0x00032f3a) bg_popup_fep_shadow_pane_g8

0x7a33,	// (0x00035e03) grid_vkb_keypad_number_pane_ParamLimits

0x7a33,	// (0x00035e03) grid_vkb_keypad_number_pane

0x7a43,	// (0x00035e13) grid_vkb_keypad_pane_ParamLimits

0x7a43,	// (0x00035e13) grid_vkb_keypad_pane

0x7a69,	// (0x00035e39) fep_vkb_bottom_pane_g1_ParamLimits

0x7a69,	// (0x00035e39) fep_vkb_bottom_pane_g1

0x7a92,	// (0x00035e62) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x7a92,	// (0x00035e62) grid_vkb_keypad_bottom_left_pane

0x7aa7,	// (0x00035e77) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x7aa7,	// (0x00035e77) grid_vkb_keypad_bottom_right_pane

0x7abc,	// (0x00035e8c) fep_vkb_top_text_pane_g1

0xccf7,	// (0x0003b0c7) fep_vkb_top_text_pane_t1

0xcd0c,	// (0x0003b0dc) cell_vkb_side_pane_ParamLimits

0xcd0c,	// (0x0003b0dc) cell_vkb_side_pane

0x77fa,	// (0x00035bca) cell_vkb_side_pane_g1

0x7ae4,	// (0x00035eb4) cell_vkb_keypad_pane_ParamLimits

0x7ae4,	// (0x00035eb4) cell_vkb_keypad_pane

0x7b59,	// (0x00035f29) cell_vkb_keypad_pane_g1

0x0008,

0xfb71,	// (0x0003df41) bg_popup_fep_shadow_pane_g

0x77fa,	// (0x00035bca) cell_hwr_side_pane_g1

0x77fa,	// (0x00035bca) cell_hwr_side_pane_g2

0x7b63,	// (0x00035f33) cell_vkb_keypad_pane_t1

0xcd2f,	// (0x0003b0ff) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xcd2f,	// (0x0003b0ff) cell_vkb_keypad_bottom_left_pane

0xcd4c,	// (0x0003b11c) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xcd4c,	// (0x0003b11c) cell_vkb_keypad_bottom_right_pane

0x77fa,	// (0x00035bca) cell_vkb_keypad_bottom_left_pane_g1

0x77fa,	// (0x00035bca) cell_vkb_keypad_bottom_right_pane_g1

0x7b71,	// (0x00035f41) cell_vkb_keypad_number_pane_ParamLimits

0x7b71,	// (0x00035f41) cell_vkb_keypad_number_pane

0x7b90,	// (0x00035f60) cell_vkb_keypad_number_pane_g1

0x7b9a,	// (0x00035f6a) cell_vkb_keypad_number_pane_g2

0x7ba3,	// (0x00035f73) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb63,	// (0x0003df33) cell_vkb_keypad_number_pane_g

0x7b63,	// (0x00035f33) cell_vkb_keypad_number_pane_t1

0x7bc7,	// (0x00035f97) fep_vkb_candidate_pane_g1

0x0001,

0xfb5e,	// (0x0003df2e) cell_hwr_side_pane_g

0x7be0,	// (0x00035fb0) cell_hwr_side_pane_t1

0xb54e,	// (0x0003991e) cell_hwr_side_pane_t1_copy1

0x79a1,	// (0x00035d71) cell_hwr_candidate_pane_g1

0xb55c,	// (0x0003992c) cell_hwr_candidate_pane_t1

0x77fa,	// (0x00035bca) cell_vkb_candidate_pane_g2

0x7c24,	// (0x00035ff4) cell_vkb_candidate_pane_t1

0x7a07,	// (0x00035dd7) bg_popup_fep_shadow_pane_ParamLimits

0x7a07,	// (0x00035dd7) bg_popup_fep_shadow_pane

0x0f86,	// (0x0002f356) bg_fep_hwr_top_pane_g4

0x788e,	// (0x00035c5e) bg_hwr_side_pane_g1_ParamLimits

0x788e,	// (0x00035c5e) bg_hwr_side_pane_g1

0xb434,	// (0x00039804) cell_hwr_side_pane_ParamLimits

0xb434,	// (0x00039804) cell_hwr_side_pane

0xb46f,	// (0x0003983f) fep_hwr_write_pane_g1_ParamLimits

0xb46f,	// (0x0003983f) fep_hwr_write_pane_g1

0xb47c,	// (0x0003984c) fep_hwr_write_pane_g2_ParamLimits

0xb47c,	// (0x0003984c) fep_hwr_write_pane_g2

0xb489,	// (0x00039859) fep_hwr_write_pane_g3_ParamLimits

0xb489,	// (0x00039859) fep_hwr_write_pane_g3

0xb497,	// (0x00039867) fep_hwr_write_pane_g4_ParamLimits

0xb497,	// (0x00039867) fep_hwr_write_pane_g4

0x0005,

0xfb30,	// (0x0003df00) fep_hwr_write_pane_g_ParamLimits

0xfb30,	// (0x0003df00) fep_hwr_write_pane_g

0x0f86,	// (0x0002f356) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x0f86,	// (0x0002f356) bg_fep_hwr_candidate_pane_g2

0xb4ac,	// (0x0003987c) cell_hwr_candidate_pane_ParamLimits

0xb4ac,	// (0x0003987c) cell_hwr_candidate_pane

0xb4ee,	// (0x000398be) fep_hwr_candidate_pane_g1_ParamLimits

0x78ee,	// (0x00035cbe) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x78ee,	// (0x00035cbe) bg_popup_fep_shadow_pane_cp2

0x79a1,	// (0x00035d71) fep_vkb_top_pane_g4_ParamLimits

0x79a1,	// (0x00035d71) fep_vkb_top_pane_g4

0x79c0,	// (0x00035d90) fep_vkb_side_pane_g2_ParamLimits

0x79c0,	// (0x00035d90) fep_vkb_side_pane_g2

0x8e85,	// (0x00037255) list_setting_pane_t4_ParamLimits

0x8e85,	// (0x00037255) list_setting_pane_t4

0x8f1f,	// (0x000372ef) list_setting_number_pane_t5_ParamLimits

0x8f1f,	// (0x000372ef) list_setting_number_pane_t5

0xa37e,	// (0x0003874e) list_double_heading_pane_cp2_ParamLimits

0xa37e,	// (0x0003874e) list_double_heading_pane_cp2

0x4af4,	// (0x00032ec4) list_double_heading_pane_g1_cp2_ParamLimits

0x4af4,	// (0x00032ec4) list_double_heading_pane_g1_cp2

0x4b00,	// (0x00032ed0) list_double_heading_pane_g2_cp2_ParamLimits

0x4b00,	// (0x00032ed0) list_double_heading_pane_g2_cp2

0x7c32,	// (0x00036002) list_double_heading_pane_t1_cp2_ParamLimits

0x7c32,	// (0x00036002) list_double_heading_pane_t1_cp2

0x7c48,	// (0x00036018) list_double_heading_pane_t2_cp2_ParamLimits

0x7c48,	// (0x00036018) list_double_heading_pane_t2_cp2

0x4461,	// (0x00032831) aid_value_unit2

0x9b64,	// (0x00037f34) popup_preview_fixed_window

0x460c,	// (0x000329dc) bg_popup_preview_window_pane_cp02

0x7c5a,	// (0x0003602a) list_preview_fixed_pane

0x7ca0,	// (0x00036070) list_empty_pane_fp_ParamLimits

0x7ca0,	// (0x00036070) list_empty_pane_fp

0x7ca0,	// (0x00036070) list_single_cale_day_pane_fp_ParamLimits

0x7ca0,	// (0x00036070) list_single_cale_day_pane_fp

0x7ca0,	// (0x00036070) list_single_graphic_heading_pane_fp_ParamLimits

0x7ca0,	// (0x00036070) list_single_graphic_heading_pane_fp

0x7ca0,	// (0x00036070) list_single_graphic_pane_fp_ParamLimits

0x7ca0,	// (0x00036070) list_single_graphic_pane_fp

0x7ca0,	// (0x00036070) list_single_heading_pane_fp_ParamLimits

0x7ca0,	// (0x00036070) list_single_heading_pane_fp

0x7ca0,	// (0x00036070) list_single_pane_fp_ParamLimits

0x7ca0,	// (0x00036070) list_single_pane_fp

0x7cb5,	// (0x00036085) list_single_pane_fp_g1_ParamLimits

0x7cb5,	// (0x00036085) list_single_pane_fp_g1

0x5f17,	// (0x000342e7) list_single_pane_fp_g2_ParamLimits

0x5f17,	// (0x000342e7) list_single_pane_fp_g2

0x8082,	// (0x00036452) list_single_pane_fp_g3_ParamLimits

0x8082,	// (0x00036452) list_single_pane_fp_g3

0x7cc1,	// (0x00036091) list_single_pane_fp_g4_ParamLimits

0x7cc1,	// (0x00036091) list_single_pane_fp_g4

0x0003,

0xfb92,	// (0x0003df62) list_single_pane_fp_g_ParamLimits

0xfb92,	// (0x0003df62) list_single_pane_fp_g

0x95db,	// (0x000379ab) list_single_pane_fp_t1_ParamLimits

0x95db,	// (0x000379ab) list_single_pane_fp_t1

0x95f2,	// (0x000379c2) list_single_graphic_pane_fp_g1_ParamLimits

0x95f2,	// (0x000379c2) list_single_graphic_pane_fp_g1

0x7cb5,	// (0x00036085) list_single_graphic_pane_fp_g2_ParamLimits

0x7cb5,	// (0x00036085) list_single_graphic_pane_fp_g2

0x5f17,	// (0x000342e7) list_single_graphic_pane_fp_g3_ParamLimits

0x5f17,	// (0x000342e7) list_single_graphic_pane_fp_g3

0x8082,	// (0x00036452) list_single_graphic_pane_fp_g4_ParamLimits

0x8082,	// (0x00036452) list_single_graphic_pane_fp_g4

0x7cc1,	// (0x00036091) list_single_graphic_pane_fp_g5_ParamLimits

0x7cc1,	// (0x00036091) list_single_graphic_pane_fp_g5

0x0004,

0xfb9b,	// (0x0003df6b) list_single_graphic_pane_fp_g_ParamLimits

0xfb9b,	// (0x0003df6b) list_single_graphic_pane_fp_g

0x95fe,	// (0x000379ce) list_single_graphic_pane_fp_t1_ParamLimits

0x95fe,	// (0x000379ce) list_single_graphic_pane_fp_t1

0x95f2,	// (0x000379c2) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x95f2,	// (0x000379c2) list_single_graphic_heading_pane_fp_g1

0x7cb5,	// (0x00036085) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x7cb5,	// (0x00036085) list_single_graphic_heading_pane_fp_g2

0x5f17,	// (0x000342e7) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x5f17,	// (0x000342e7) list_single_graphic_heading_pane_fp_g3

0x8082,	// (0x00036452) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x8082,	// (0x00036452) list_single_graphic_heading_pane_fp_g4

0x7cc1,	// (0x00036091) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x7cc1,	// (0x00036091) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb9b,	// (0x0003df6b) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb9b,	// (0x0003df6b) list_single_graphic_heading_pane_fp_g

0x9614,	// (0x000379e4) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x9614,	// (0x000379e4) list_single_graphic_heading_pane_fp_t1

0x962a,	// (0x000379fa) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x962a,	// (0x000379fa) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfba6,	// (0x0003df76) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfba6,	// (0x0003df76) list_single_graphic_heading_pane_fp_t

0x963c,	// (0x00037a0c) list_single_cale_day_pane_fp_g1_ParamLimits

0x963c,	// (0x00037a0c) list_single_cale_day_pane_fp_g1

0x7ccd,	// (0x0003609d) list_single_cale_day_pane_fp_g2_ParamLimits

0x7ccd,	// (0x0003609d) list_single_cale_day_pane_fp_g2

0xb57a,	// (0x0003994a) list_single_cale_day_pane_fp_g3_ParamLimits

0xb57a,	// (0x0003994a) list_single_cale_day_pane_fp_g3

0xb5a2,	// (0x00039972) list_single_cale_day_pane_fp_g4_ParamLimits

0xb5a2,	// (0x00039972) list_single_cale_day_pane_fp_g4

0xb5c6,	// (0x00039996) list_single_cale_day_pane_fp_g5_ParamLimits

0xb5c6,	// (0x00039996) list_single_cale_day_pane_fp_g5

0x0004,

0xfbab,	// (0x0003df7b) list_single_cale_day_pane_fp_g_ParamLimits

0xfbab,	// (0x0003df7b) list_single_cale_day_pane_fp_g

0x9674,	// (0x00037a44) list_single_cale_day_pane_fp_t1_ParamLimits

0x9674,	// (0x00037a44) list_single_cale_day_pane_fp_t1

0x969a,	// (0x00037a6a) list_single_cale_day_pane_fp_t2_ParamLimits

0x969a,	// (0x00037a6a) list_single_cale_day_pane_fp_t2

0x96b3,	// (0x00037a83) list_single_cale_day_pane_fp_t3_ParamLimits

0x96b3,	// (0x00037a83) list_single_cale_day_pane_fp_t3

0x0002,

0xfbb6,	// (0x0003df86) list_single_cale_day_pane_fp_t_ParamLimits

0xfbb6,	// (0x0003df86) list_single_cale_day_pane_fp_t

0x7cb5,	// (0x00036085) list_empty_pane_fp_g1_ParamLimits

0x7cb5,	// (0x00036085) list_empty_pane_fp_g1

0x96cc,	// (0x00037a9c) list_empty_pane_fp_t1

0x96da,	// (0x00037aaa) list_empty_pane_fp_t2

0x0001,

0xfbbd,	// (0x0003df8d) list_empty_pane_fp_t

0x7cb5,	// (0x00036085) list_single_heading_pane_fp_g1_ParamLimits

0x7cb5,	// (0x00036085) list_single_heading_pane_fp_g1

0x5f17,	// (0x000342e7) list_single_heading_pane_fp_g2_ParamLimits

0x5f17,	// (0x000342e7) list_single_heading_pane_fp_g2

0x8082,	// (0x00036452) list_single_heading_pane_fp_g3_ParamLimits

0x8082,	// (0x00036452) list_single_heading_pane_fp_g3

0x0002,

0xfbc2,	// (0x0003df92) list_single_heading_pane_fp_g_ParamLimits

0xfbc2,	// (0x0003df92) list_single_heading_pane_fp_g

0x96e8,	// (0x00037ab8) list_single_heading_pane_fp_t1_ParamLimits

0x96e8,	// (0x00037ab8) list_single_heading_pane_fp_t1

0x96fa,	// (0x00037aca) list_single_heading_pane_fp_t2_ParamLimits

0x96fa,	// (0x00037aca) list_single_heading_pane_fp_t2

0x0001,

0xfbc9,	// (0x0003df99) list_single_heading_pane_fp_t_ParamLimits

0xfbc9,	// (0x0003df99) list_single_heading_pane_fp_t

0x4c47,	// (0x00033017) aid_size_cell_fast

0x45ef,	// (0x000329bf) soft_indicator_pane_cp1_t1

0x4c84,	// (0x00033054) cell_app_pane_cp2_ParamLimits

0x4c84,	// (0x00033054) cell_app_pane_cp2

0xb33e,	// (0x0003970e) fep_hwr_candidate_drop_down_list_pane

0x12e6,	// (0x0002f6b6) fep_hwr_candidate_pane_g3_ParamLimits

0x12e6,	// (0x0002f6b6) fep_hwr_candidate_pane_g3

0x12f3,	// (0x0002f6c3) fep_hwr_candidate_pane_g4_ParamLimits

0x12f3,	// (0x0002f6c3) fep_hwr_candidate_pane_g4

0x0002,

0xfb3d,	// (0x0003df0d) fep_hwr_candidate_pane_g_ParamLimits

0xfb3d,	// (0x0003df0d) fep_hwr_candidate_pane_g

0x793c,	// (0x00035d0c) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x793c,	// (0x00035d0c) fep_vkb_candidate_drop_down_list_pane

0x7bcf,	// (0x00035f9f) fep_vkb_candidate_pane_g3

0x7bd7,	// (0x00035fa7) fep_vkb_candidate_pane_g4

0x0002,

0xfb6a,	// (0x0003df3a) fep_vkb_candidate_pane_g

0x79a1,	// (0x00035d71) cell_hwr_candidate_pane_g1_ParamLimits

0x7d81,	// (0x00036151) cell_hwr_candidate_pane_g3_ParamLimits

0x7d81,	// (0x00036151) cell_hwr_candidate_pane_g3

0x7da2,	// (0x00036172) cell_hwr_candidate_pane_g4_ParamLimits

0x7da2,	// (0x00036172) cell_hwr_candidate_pane_g4

0x0002,

0xfb84,	// (0x0003df54) cell_hwr_candidate_pane_g_ParamLimits

0xfb84,	// (0x0003df54) cell_hwr_candidate_pane_g

0x7bee,	// (0x00035fbe) cell_vkb_candidate_pane_g3_ParamLimits

0x7bee,	// (0x00035fbe) cell_vkb_candidate_pane_g3

0x7c09,	// (0x00035fd9) cell_vkb_candidate_pane_g4_ParamLimits

0x7c09,	// (0x00035fd9) cell_vkb_candidate_pane_g4

0x7cd9,	// (0x000360a9) cell_app_pane_cp2_g1_ParamLimits

0x7cd9,	// (0x000360a9) cell_app_pane_cp2_g1

0x7cf7,	// (0x000360c7) cell_app_pane_cp2_g2_ParamLimits

0x7cf7,	// (0x000360c7) cell_app_pane_cp2_g2

0x0001,

0xfbce,	// (0x0003df9e) cell_app_pane_cp2_g_ParamLimits

0xfbce,	// (0x0003df9e) cell_app_pane_cp2_g

0x7d03,	// (0x000360d3) cell_app_pane_cp2_t1_ParamLimits

0x7d03,	// (0x000360d3) cell_app_pane_cp2_t1

0x4ada,	// (0x00032eaa) grid_highlight_pane_cp1_ParamLimits

0x4ada,	// (0x00032eaa) grid_highlight_pane_cp1

0xb5ea,	// (0x000399ba) cell_hwr_candidate_pane_cp1_ParamLimits

0xb5ea,	// (0x000399ba) cell_hwr_candidate_pane_cp1

0x79a1,	// (0x00035d71) fep_hwr_candidate_drop_down_list_pane_g1

0x7d35,	// (0x00036105) fep_hwr_candidate_drop_down_list_pane_g2

0x7d42,	// (0x00036112) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbd3,	// (0x0003dfa3) fep_hwr_candidate_drop_down_list_pane_g

0xb609,	// (0x000399d9) fep_hwr_candidate_drop_down_list_scroll_pane

0xb612,	// (0x000399e2) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xb612,	// (0x000399e2) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0xb61f,	// (0x000399ef) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xb61f,	// (0x000399ef) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0xb62c,	// (0x000399fc) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xb62c,	// (0x000399fc) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x7bee,	// (0x00035fbe) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7bee,	// (0x00035fbe) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x7c09,	// (0x00035fd9) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7c09,	// (0x00035fd9) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0xb639,	// (0x00039a09) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xb639,	// (0x00039a09) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0xb654,	// (0x00039a24) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xb654,	// (0x00039a24) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0xb66f,	// (0x00039a3f) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xb66f,	// (0x00039a3f) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbda,	// (0x0003dfaa) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbda,	// (0x0003dfaa) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x7d15,	// (0x000360e5) cell_vkb_candidate_pane_cp1_ParamLimits

0x7d15,	// (0x000360e5) cell_vkb_candidate_pane_cp1

0x79a1,	// (0x00035d71) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x79a1,	// (0x00035d71) fep_vkb_candidate_drop_down_list_pane_g1

0x7d35,	// (0x00036105) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x7d35,	// (0x00036105) fep_vkb_candidate_drop_down_list_pane_g2

0x7d42,	// (0x00036112) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x7d42,	// (0x00036112) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbd3,	// (0x0003dfa3) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbd3,	// (0x0003dfa3) fep_vkb_candidate_drop_down_list_pane_g

0x7d4f,	// (0x0003611f) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x7d4f,	// (0x0003611f) fep_vkb_candidate_drop_down_list_scroll_pane

0x7d5c,	// (0x0003612c) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7d5c,	// (0x0003612c) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x7d69,	// (0x00036139) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7d69,	// (0x00036139) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x7d75,	// (0x00036145) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7d75,	// (0x00036145) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x7d81,	// (0x00036151) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7d81,	// (0x00036151) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x7da2,	// (0x00036172) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7da2,	// (0x00036172) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x7dc3,	// (0x00036193) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7dc3,	// (0x00036193) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x7de4,	// (0x000361b4) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7de4,	// (0x000361b4) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x7e05,	// (0x000361d5) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7e05,	// (0x000361d5) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbeb,	// (0x0003dfbb) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbeb,	// (0x0003dfbb) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x9c74,	// (0x00038044) title_pane_g1_ParamLimits

0x9c81,	// (0x00038051) title_pane_g2_ParamLimits

0xf592,	// (0x0003d962) title_pane_g_ParamLimits

0x5013,	// (0x000333e3) aid_call2_pane

0x500b,	// (0x000333db) aid_call_pane

0x501b,	// (0x000333eb) popup_clock_analogue_window_g1

0x501b,	// (0x000333eb) popup_clock_analogue_window_g2

0xa35f,	// (0x0003872f) popup_clock_analogue_window_g3

0xa368,	// (0x00038738) popup_clock_analogue_window_g4

0x4473,	// (0x00032843) popup_clock_analogue_window_g5

0x0004,

0xf741,	// (0x0003db11) popup_clock_analogue_window_g

0xa370,	// (0x00038740) popup_clock_analogue_window_t1

0xa3ab,	// (0x0003877b) clock_digital_number_pane_ParamLimits

0xa3ab,	// (0x0003877b) clock_digital_number_pane

0xa3b7,	// (0x00038787) clock_digital_number_pane_cp02_ParamLimits

0xa3b7,	// (0x00038787) clock_digital_number_pane_cp02

0xa3c3,	// (0x00038793) clock_digital_number_pane_cp03_ParamLimits

0xa3c3,	// (0x00038793) clock_digital_number_pane_cp03

0xa3cf,	// (0x0003879f) clock_digital_number_pane_cp04_ParamLimits

0xa3cf,	// (0x0003879f) clock_digital_number_pane_cp04

0xa3db,	// (0x000387ab) clock_digital_separator_pane_ParamLimits

0xa3db,	// (0x000387ab) clock_digital_separator_pane

0xa3e7,	// (0x000387b7) popup_clock_digital_window_t1_ParamLimits

0xa3e7,	// (0x000387b7) popup_clock_digital_window_t1

0x4473,	// (0x00032843) clock_digital_number_pane_g1

0x4473,	// (0x00032843) clock_digital_number_pane_g2

0x0001,

0xf74c,	// (0x0003db1c) clock_digital_number_pane_g

0x4473,	// (0x00032843) clock_digital_separator_pane_g1

0x4473,	// (0x00032843) clock_digital_separator_pane_g2

0x0001,

0xf74c,	// (0x0003db1c) clock_digital_separator_pane_g

0xc073,	// (0x0003a443) aid_fill_nsta_ParamLimits

0xc138,	// (0x0003a508) indicator_nsta_pane_ParamLimits

0x5947,	// (0x00033d17) popup_clock_analogue_window

0x5947,	// (0x00033d17) popup_clock_digital_window

0x44d9,	// (0x000328a9) grid_indicator_nsta_pane_ParamLimits

0x74cd,	// (0x0003589d) clock_nsta_pane_t2

0x0001,

0xfaca,	// (0x0003de9a) clock_nsta_pane_t

0xa323,	// (0x000386f3) aid_size_max_handle

0xa32d,	// (0x000386fd) aid_size_min_handle

0x5508,	// (0x000338d8) editor_scroll_pane

0x7e20,	// (0x000361f0) ex_editor_pane

0x4c02,	// (0x00032fd2) scroll_pane_cp13

0x4a79,	// (0x00032e49) scroll_pane_cp14

0x5045,	// (0x00033415) scroll_pane_cp36

0xa392,	// (0x00038762) list_single_graphic_hl_pane_cp2_ParamLimits

0xa392,	// (0x00038762) list_single_graphic_hl_pane_cp2

0x93c4,	// (0x00037794) list_single_graphic_hl_pane_ParamLimits

0x93c4,	// (0x00037794) list_single_graphic_hl_pane

0x9710,	// (0x00037ae0) aid_size_min_hl_cp1

0x7e28,	// (0x000361f8) list_highlight_pane_cp34_ParamLimits

0x7e28,	// (0x000361f8) list_highlight_pane_cp34

0x7e39,	// (0x00036209) list_single_graphic_hl_pane_g1_ParamLimits

0x7e39,	// (0x00036209) list_single_graphic_hl_pane_g1

0x9719,	// (0x00037ae9) list_single_graphic_hl_pane_g2_ParamLimits

0x9719,	// (0x00037ae9) list_single_graphic_hl_pane_g2

0x9719,	// (0x00037ae9) list_single_graphic_hl_pane_g3_ParamLimits

0x9719,	// (0x00037ae9) list_single_graphic_hl_pane_g3

0x5479,	// (0x00033849) list_single_graphic_hl_pane_g4_ParamLimits

0x5479,	// (0x00033849) list_single_graphic_hl_pane_g4

0xb68a,	// (0x00039a5a) list_single_graphic_hl_pane_g5_ParamLimits

0xb68a,	// (0x00039a5a) list_single_graphic_hl_pane_g5

0x0004,

0xfbfc,	// (0x0003dfcc) list_single_graphic_hl_pane_g_ParamLimits

0xfbfc,	// (0x0003dfcc) list_single_graphic_hl_pane_g

0x9725,	// (0x00037af5) list_single_graphic_hl_pane_t1_ParamLimits

0x9725,	// (0x00037af5) list_single_graphic_hl_pane_t1

0x7e46,	// (0x00036216) aid_size_min_hl_cp2

0x7e4f,	// (0x0003621f) list_highlight_pane_cp34_cp2_ParamLimits

0x7e4f,	// (0x0003621f) list_highlight_pane_cp34_cp2

0x7e39,	// (0x00036209) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x7e39,	// (0x00036209) list_single_graphic_hl_pane_g1_cp2

0x7e5c,	// (0x0003622c) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x7e5c,	// (0x0003622c) list_single_graphic_hl_pane_g2_cp2

0x7e68,	// (0x00036238) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x7e68,	// (0x00036238) list_single_graphic_hl_pane_g3_cp2

0x6c8f,	// (0x0003505f) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x6c8f,	// (0x0003505f) list_single_graphic_hl_pane_g4_cp2

0x7e76,	// (0x00036246) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x7e76,	// (0x00036246) list_single_graphic_hl_pane_g5_cp2

0xa829,	// (0x00038bf9) control_pane_g4_ParamLimits

0xa829,	// (0x00038bf9) control_pane_g4

0x4c3b,	// (0x0003300b) bg_popup_sub_pane_cp10_ParamLimits

0x7804,	// (0x00035bd4) list_choice_list_pane_ParamLimits

0x7813,	// (0x00035be3) scroll_pane_cp23

0x460c,	// (0x000329dc) bg_popup_preview_window_pane_cp02_ParamLimits

0x7c5a,	// (0x0003602a) list_preview_fixed_pane_ParamLimits

0x7c70,	// (0x00036040) list_preview_fixed_pane_cp_ParamLimits

0x7c70,	// (0x00036040) list_preview_fixed_pane_cp

0x7c7c,	// (0x0003604c) popup_preview_fixed_window_g1_ParamLimits

0x7c7c,	// (0x0003604c) popup_preview_fixed_window_g1

0x7c88,	// (0x00036058) popup_preview_fixed_window_g2_ParamLimits

0x7c88,	// (0x00036058) popup_preview_fixed_window_g2

0x0002,

0xfb8b,	// (0x0003df5b) popup_preview_fixed_window_g_ParamLimits

0xfb8b,	// (0x0003df5b) popup_preview_fixed_window_g

0xa216,	// (0x000385e6) aid_navi_side_left_pane_ParamLimits

0xa22b,	// (0x000385fb) aid_navi_side_right_pane_ParamLimits

0xa243,	// (0x00038613) navi_icon_pane_stacon_ParamLimits

0xa257,	// (0x00038627) navi_navi_pane_stacon_ParamLimits

0xa243,	// (0x00038613) navi_text_pane_stacon_ParamLimits

0x4469,	// (0x00032839) main_text_info_pane

0x7ea0,	// (0x00036270) listscroll_text_info_pane

0x7ea8,	// (0x00036278) list_text_info_pane_ParamLimits

0x7ea8,	// (0x00036278) list_text_info_pane

0x7eb7,	// (0x00036287) scroll_pane_cp24_ParamLimits

0x7eb7,	// (0x00036287) scroll_pane_cp24

0xcd85,	// (0x0003b155) list_text_info_pane_t1_ParamLimits

0xcd85,	// (0x0003b155) list_text_info_pane_t1

0xa9a1,	// (0x00038d71) popup_fast_swap2_window_ParamLimits

0xa9a1,	// (0x00038d71) popup_fast_swap2_window

0x7ed5,	// (0x000362a5) aid_size_cell_fast2

0x4469,	// (0x00032839) bg_popup_window_pane_cp17

0x5df3,	// (0x000341c3) heading_pane_cp2

0x47fe,	// (0x00032bce) listscroll_fast2_pane

0x7edf,	// (0x000362af) grid_fast2_pane

0x7ee9,	// (0x000362b9) listscroll_fast2_pane_g1

0x7ef1,	// (0x000362c1) listscroll_fast2_pane_g2

0x0001,

0xfc07,	// (0x0003dfd7) listscroll_fast2_pane_g

0x4c02,	// (0x00032fd2) scroll_pane_cp26

0x7efb,	// (0x000362cb) cell_fast2_pane_ParamLimits

0x7efb,	// (0x000362cb) cell_fast2_pane

0x7f10,	// (0x000362e0) cell_fast2_pane_g1

0x7f19,	// (0x000362e9) cell_fast2_pane_g2

0x7f22,	// (0x000362f2) cell_fast2_pane_g3

0x0002,

0xfc0c,	// (0x0003dfdc) cell_fast2_pane_g

0x4840,	// (0x00032c10) grid_highlight_pane_cp9

0x4855,	// (0x00032c25) main_eswt_pane_ParamLimits

0x4855,	// (0x00032c25) main_eswt_pane

0x7ecc,	// (0x0003629c) list_single_text_info_pane

0x7f2a,	// (0x000362fa) eswt_ctrl_button_pane

0x7f2a,	// (0x000362fa) eswt_ctrl_canvas_pane

0x7f32,	// (0x00036302) eswt_ctrl_combo_pane

0x7f2a,	// (0x000362fa) eswt_ctrl_default_pane

0x7f2a,	// (0x000362fa) eswt_ctrl_label_pane

0x7f3a,	// (0x0003630a) eswt_ctrl_wait_pane

0x7f42,	// (0x00036312) eswt_shell_pane

0x4469,	// (0x00032839) listscroll_eswt_app_pane

0x7f62,	// (0x00036332) popup_eswt_tasktip_window_ParamLimits

0x7f62,	// (0x00036332) popup_eswt_tasktip_window

0x5b46,	// (0x00033f16) bg_popup_window_pane_cp18

0x7f73,	// (0x00036343) eswt_control_pane_g1_ParamLimits

0x7f73,	// (0x00036343) eswt_control_pane_g1

0x7f80,	// (0x00036350) eswt_control_pane_g2_ParamLimits

0x7f80,	// (0x00036350) eswt_control_pane_g2

0x7f8d,	// (0x0003635d) eswt_control_pane_g3_ParamLimits

0x7f8d,	// (0x0003635d) eswt_control_pane_g3

0x7f9a,	// (0x0003636a) eswt_control_pane_g4_ParamLimits

0x7f9a,	// (0x0003636a) eswt_control_pane_g4

0x0003,

0xfc13,	// (0x0003dfe3) eswt_control_pane_g_ParamLimits

0xfc13,	// (0x0003dfe3) eswt_control_pane_g

0x4ada,	// (0x00032eaa) bg_button_pane_ParamLimits

0x4ada,	// (0x00032eaa) bg_button_pane

0x4855,	// (0x00032c25) common_borders_pane_copy2_ParamLimits

0x4855,	// (0x00032c25) common_borders_pane_copy2

0x7fa7,	// (0x00036377) control_button_pane_g1_ParamLimits

0x7fa7,	// (0x00036377) control_button_pane_g1

0x7fb3,	// (0x00036383) control_button_pane_g2_ParamLimits

0x7fb3,	// (0x00036383) control_button_pane_g2

0x7fbf,	// (0x0003638f) control_button_pane_g3_ParamLimits

0x7fbf,	// (0x0003638f) control_button_pane_g3

0x0002,

0xfc1c,	// (0x0003dfec) control_button_pane_g_ParamLimits

0xfc1c,	// (0x0003dfec) control_button_pane_g

0x7fd3,	// (0x000363a3) control_button_pane_t1

0x7fe1,	// (0x000363b1) control_button_pane_t2

0x0001,

0xfc23,	// (0x0003dff3) control_button_pane_t

0x5a56,	// (0x00033e26) bg_button_pane_g1

0x5a66,	// (0x00033e36) bg_button_pane_g2

0x5a5e,	// (0x00033e2e) bg_button_pane_g3

0x5a76,	// (0x00033e46) bg_button_pane_g4

0x5a6e,	// (0x00033e3e) bg_button_pane_g5

0x5a7e,	// (0x00033e4e) bg_button_pane_g6

0x5a86,	// (0x00033e56) bg_button_pane_g7

0x5a96,	// (0x00033e66) bg_button_pane_g8

0x5a8e,	// (0x00033e5e) bg_button_pane_g9

0x0008,

0xf8a4,	// (0x0003dc74) bg_button_pane_g

0x77bf,	// (0x00035b8f) common_borders_pane_ParamLimits

0x77bf,	// (0x00035b8f) common_borders_pane

0x7f73,	// (0x00036343) eswt_control_pane_g1_copy1_ParamLimits

0x7f73,	// (0x00036343) eswt_control_pane_g1_copy1

0x7f80,	// (0x00036350) eswt_control_pane_g2_copy1_ParamLimits

0x7f80,	// (0x00036350) eswt_control_pane_g2_copy1

0x7f8d,	// (0x0003635d) eswt_control_pane_g3_copy1_ParamLimits

0x7f8d,	// (0x0003635d) eswt_control_pane_g3_copy1

0x7f9a,	// (0x0003636a) eswt_control_pane_g4_copy1_ParamLimits

0x7f9a,	// (0x0003636a) eswt_control_pane_g4_copy1

0x77fa,	// (0x00035bca) bg_eswt_ctrl_canvas_pane_g1

0x77bf,	// (0x00035b8f) common_borders_pane_cp2_ParamLimits

0x77bf,	// (0x00035b8f) common_borders_pane_cp2

0x77bf,	// (0x00035b8f) common_borders_pane_cp3_ParamLimits

0x77bf,	// (0x00035b8f) common_borders_pane_cp3

0x7fef,	// (0x000363bf) separator_horizontal_pane

0x7ff7,	// (0x000363c7) separator_vertical_pane

0x7f73,	// (0x00036343) eswt_control_pane_g1_copy2_ParamLimits

0x7f73,	// (0x00036343) eswt_control_pane_g1_copy2

0x7f80,	// (0x00036350) eswt_control_pane_g2_copy2_ParamLimits

0x7f80,	// (0x00036350) eswt_control_pane_g2_copy2

0x7f8d,	// (0x0003635d) eswt_control_pane_g3_copy2_ParamLimits

0x7f8d,	// (0x0003635d) eswt_control_pane_g3_copy2

0x7f9a,	// (0x0003636a) eswt_control_pane_g4_copy2_ParamLimits

0x7f9a,	// (0x0003636a) eswt_control_pane_g4_copy2

0x4469,	// (0x00032839) common_borders_pane_cp4

0x8000,	// (0x000363d0) separator_horizontal_pane_g1

0x8009,	// (0x000363d9) separator_horizontal_pane_g2

0x8012,	// (0x000363e2) separator_horizontal_pane_g3

0x0002,

0xfc28,	// (0x0003dff8) separator_horizontal_pane_g

0x7f73,	// (0x00036343) eswt_control_pane_g1_copy3_ParamLimits

0x7f73,	// (0x00036343) eswt_control_pane_g1_copy3

0x7f80,	// (0x00036350) eswt_control_pane_g2_copy3_ParamLimits

0x7f80,	// (0x00036350) eswt_control_pane_g2_copy3

0x7f8d,	// (0x0003635d) eswt_control_pane_g3_copy3_ParamLimits

0x7f8d,	// (0x0003635d) eswt_control_pane_g3_copy3

0x7f9a,	// (0x0003636a) eswt_control_pane_g4_copy3_ParamLimits

0x7f9a,	// (0x0003636a) eswt_control_pane_g4_copy3

0x4469,	// (0x00032839) common_borders_pane_cp5

0x801b,	// (0x000363eb) separator_vertical_pane_g1

0x8024,	// (0x000363f4) separator_vertical_pane_g2

0x802d,	// (0x000363fd) separator_vertical_pane_g3

0x0002,

0xfc2f,	// (0x0003dfff) separator_vertical_pane_g

0x7f73,	// (0x00036343) eswt_control_pane_g1_copy4_ParamLimits

0x7f73,	// (0x00036343) eswt_control_pane_g1_copy4

0x7f80,	// (0x00036350) eswt_control_pane_g2_copy4_ParamLimits

0x7f80,	// (0x00036350) eswt_control_pane_g2_copy4

0x7f8d,	// (0x0003635d) eswt_control_pane_g3_copy4_ParamLimits

0x7f8d,	// (0x0003635d) eswt_control_pane_g3_copy4

0x7f9a,	// (0x0003636a) eswt_control_pane_g4_copy4_ParamLimits

0x7f9a,	// (0x0003636a) eswt_control_pane_g4_copy4

0xcdb6,	// (0x0003b186) eswt_ctrl_combo_button_pane

0xcdbe,	// (0x0003b18e) eswt_ctrl_input_pane

0xcdc6,	// (0x0003b196) popup_choice_list_window_cp70

0xcdce,	// (0x0003b19e) eswt_ctrl_input_pane_t1

0x4469,	// (0x00032839) input_focus_pane_cp70

0x77bf,	// (0x00035b8f) bg_button_pane_cp70_ParamLimits

0x77bf,	// (0x00035b8f) bg_button_pane_cp70

0xcddc,	// (0x0003b1ac) eswt_ctrl_combo_button_pane_g1

0x8036,	// (0x00036406) wait_bar_pane_cp70

0x5b46,	// (0x00033f16) bg_popup_window_pane_cp70_ParamLimits

0x5b46,	// (0x00033f16) bg_popup_window_pane_cp70

0x803e,	// (0x0003640e) popup_eswt_tasktip_window_t1

0x8054,	// (0x00036424) wait_bar_pane_cp71_ParamLimits

0x8054,	// (0x00036424) wait_bar_pane_cp71

0x8060,	// (0x00036430) grid_eswt_app_pane

0x4e4d,	// (0x0003321d) scroll_pane_cp70

0xcde4,	// (0x0003b1b4) cell_eswt_app_pane_ParamLimits

0xcde4,	// (0x0003b1b4) cell_eswt_app_pane

0xce14,	// (0x0003b1e4) cell_eswt_app_pane_g1_ParamLimits

0xce14,	// (0x0003b1e4) cell_eswt_app_pane_g1

0xce43,	// (0x0003b213) cell_eswt_app_pane_g2_ParamLimits

0xce43,	// (0x0003b213) cell_eswt_app_pane_g2

0x0001,

0xfc36,	// (0x0003e006) cell_eswt_app_pane_g_ParamLimits

0xfc36,	// (0x0003e006) cell_eswt_app_pane_g

0xce6c,	// (0x0003b23c) cell_eswt_app_pane_t1_ParamLimits

0xce6c,	// (0x0003b23c) cell_eswt_app_pane_t1

0x8069,	// (0x00036439) grid_highlight_pane_cp70_ParamLimits

0x8069,	// (0x00036439) grid_highlight_pane_cp70

0x53dd,	// (0x000337ad) set_content_pane_g1

0x56e7,	// (0x00033ab7) status_small_volume_pane

0xb69e,	// (0x00039a6e) status_small_volume_pane_g1

0xb6a6,	// (0x00039a76) volume_small2_pane

0xb6af,	// (0x00039a7f) volume_small2_pane_g1

0xb6b8,	// (0x00039a88) volume_small2_pane_g2

0xb6c1,	// (0x00039a91) volume_small2_pane_g3

0xb6ca,	// (0x00039a9a) volume_small2_pane_g4

0xb6d3,	// (0x00039aa3) volume_small2_pane_g5

0xb6dc,	// (0x00039aac) volume_small2_pane_g6

0xb6e5,	// (0x00039ab5) volume_small2_pane_g7

0xb6ee,	// (0x00039abe) volume_small2_pane_g8

0xb6f7,	// (0x00039ac7) volume_small2_pane_g9

0xb700,	// (0x00039ad0) volume_small2_pane_g10

0x0009,

0xfc3b,	// (0x0003e00b) volume_small2_pane_g

0x7abc,	// (0x00035e8c) fep_vkb_top_text_pane_g1_ParamLimits

0xccf7,	// (0x0003b0c7) fep_vkb_top_text_pane_t1_ParamLimits

0x7c94,	// (0x00036064) popup_preview_fixed_window_g3_ParamLimits

0x7c94,	// (0x00036064) popup_preview_fixed_window_g3

0xc006,	// (0x0003a3d6) popup_toolbar_trans_pane

0xc62b,	// (0x0003a9fb) aid_height_set_list_ParamLimits

0x65e7,	// (0x000349b7) aid_size_parent_ParamLimits

0x4c3b,	// (0x0003300b) list_highlight_pane_cp2_ParamLimits

0x53dd,	// (0x000337ad) set_content_pane_g1_ParamLimits

0xb167,	// (0x00039537) list_single_image_pane_ParamLimits

0xb167,	// (0x00039537) list_single_image_pane

0x8075,	// (0x00036445) aid_size_cell_image_ParamLimits

0x8075,	// (0x00036445) aid_size_cell_image

0xce9e,	// (0x0003b26e) grid_single_image_pane_ParamLimits

0xce9e,	// (0x0003b26e) grid_single_image_pane

0x5f17,	// (0x000342e7) list_single_image_pane_g1_ParamLimits

0x5f17,	// (0x000342e7) list_single_image_pane_g1

0x8082,	// (0x00036452) list_single_image_pane_g2_ParamLimits

0x8082,	// (0x00036452) list_single_image_pane_g2

0x0001,

0xfc50,	// (0x0003e020) list_single_image_pane_g_ParamLimits

0xfc50,	// (0x0003e020) list_single_image_pane_g

0x5f23,	// (0x000342f3) list_single_image_pane_t1_ParamLimits

0x5f23,	// (0x000342f3) list_single_image_pane_t1

0xceac,	// (0x0003b27c) cell_image_list_pane_ParamLimits

0xceac,	// (0x0003b27c) cell_image_list_pane

0x8096,	// (0x00036466) cell_image_list_pane_g1

0x809f,	// (0x0003646f) cell_image_list_pane_g2

0x0001,

0xfc55,	// (0x0003e025) cell_image_list_pane_g

0x80a8,	// (0x00036478) aid_size_cell_tb_trans_pane

0x4ada,	// (0x00032eaa) bg_tb_trans_pane

0x80ba,	// (0x0003648a) grid_tb_trans_pane

0x5a56,	// (0x00033e26) bg_tb_trans_pane_g1

0x5a66,	// (0x00033e36) bg_tb_trans_pane_g2

0x5a5e,	// (0x00033e2e) bg_tb_trans_pane_g3

0x5a76,	// (0x00033e46) bg_tb_trans_pane_g4

0x5a6e,	// (0x00033e3e) bg_tb_trans_pane_g5

0x5a96,	// (0x00033e66) bg_tb_trans_pane_g6

0x5a8e,	// (0x00033e5e) bg_tb_trans_pane_g7

0x5a7e,	// (0x00033e4e) bg_tb_trans_pane_g8

0x5a86,	// (0x00033e56) bg_tb_trans_pane_g9

0x0008,

0xfc5a,	// (0x0003e02a) bg_tb_trans_pane_g

0x80ce,	// (0x0003649e) cell_toolbar_trans_pane_ParamLimits

0x80ce,	// (0x0003649e) cell_toolbar_trans_pane

0x77fa,	// (0x00035bca) cell_toolbar_trans_pane_g1

0xca39,	// (0x0003ae09) list_form2_midp_pane_t1

0xca47,	// (0x0003ae17) list_form2_midp_pane_t2

0x0001,

0xfb03,	// (0x0003ded3) list_form2_midp_pane_t

0x754c,	// (0x0003591c) scroll_pane_cp51_ParamLimits

0x76c3,	// (0x00035a93) form2_midp_wait_pane_g1

0x76cc,	// (0x00035a9c) form2_midp_wait_pane_g2

0x76d5,	// (0x00035aa5) form2_midp_wait_pane_g3

0x0002,

0xfb18,	// (0x0003dee8) form2_midp_wait_pane_g

0x44d9,	// (0x000328a9) list_highlight_pane_cp21_ParamLimits

0x76fd,	// (0x00035acd) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x770c,	// (0x00035adc) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xb10b,	// (0x000394db) list_single_2graphic_im_pane_ParamLimits

0xb10b,	// (0x000394db) list_single_2graphic_im_pane

0xcebf,	// (0x0003b28f) list_single_2graphic_im_pane_g1_ParamLimits

0xcebf,	// (0x0003b28f) list_single_2graphic_im_pane_g1

0xced0,	// (0x0003b2a0) list_single_2graphic_im_pane_g2_ParamLimits

0xced0,	// (0x0003b2a0) list_single_2graphic_im_pane_g2

0xcedc,	// (0x0003b2ac) list_single_2graphic_im_pane_g3_ParamLimits

0xcedc,	// (0x0003b2ac) list_single_2graphic_im_pane_g3

0x0003,

0xfc6d,	// (0x0003e03d) list_single_2graphic_im_pane_g_ParamLimits

0xfc6d,	// (0x0003e03d) list_single_2graphic_im_pane_g

0xcef0,	// (0x0003b2c0) list_single_2graphic_im_pane_t1_ParamLimits

0xcef0,	// (0x0003b2c0) list_single_2graphic_im_pane_t1

0x7ca0,	// (0x00036070) list_single_graphic_2heading_pane_fp_ParamLimits

0x7ca0,	// (0x00036070) list_single_graphic_2heading_pane_fp

0x95f2,	// (0x000379c2) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x95f2,	// (0x000379c2) list_single_graphic_2heading_pane_fp_g1

0x7cb5,	// (0x00036085) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x7cb5,	// (0x00036085) list_single_graphic_2heading_pane_fp_g2

0x5f17,	// (0x000342e7) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x5f17,	// (0x000342e7) list_single_graphic_2heading_pane_fp_g3

0x8082,	// (0x00036452) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x8082,	// (0x00036452) list_single_graphic_2heading_pane_fp_g4

0x7cc1,	// (0x00036091) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x7cc1,	// (0x00036091) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb9b,	// (0x0003df6b) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb9b,	// (0x0003df6b) list_single_graphic_2heading_pane_fp_g

0x973b,	// (0x00037b0b) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x973b,	// (0x00037b0b) list_single_graphic_2heading_pane_fp_t1

0x962a,	// (0x000379fa) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x962a,	// (0x000379fa) list_single_graphic_2heading_pane_fp_t2

0x9751,	// (0x00037b21) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x9751,	// (0x00037b21) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc76,	// (0x0003e046) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc76,	// (0x0003e046) list_single_graphic_2heading_pane_fp_t

0x789a,	// (0x00035c6a) fep_hwr_write_pane_g5_ParamLimits

0x789a,	// (0x00035c6a) fep_hwr_write_pane_g5

0x78a6,	// (0x00035c76) fep_hwr_write_pane_g6_ParamLimits

0x78a6,	// (0x00035c76) fep_hwr_write_pane_g6

0x7f42,	// (0x00036312) eswt_shell_pane_ParamLimits

0x5b46,	// (0x00033f16) bg_popup_window_pane_cp18_ParamLimits

0x6b80,	// (0x00034f50) heading_pane_cp70

0x803e,	// (0x0003640e) popup_eswt_tasktip_window_t1_ParamLimits

0xc0b3,	// (0x0003a483) aid_touch_tab_arrow_left

0xc0bf,	// (0x0003a48f) aid_touch_tab_arrow_right

0x9c92,	// (0x00038062) title_pane_g3_ParamLimits

0x9c92,	// (0x00038062) title_pane_g3

0x4a99,	// (0x00032e69) set_value_pane_g1

0xc006,	// (0x0003a3d6) popup_toolbar_trans_pane_ParamLimits

0x80a8,	// (0x00036478) aid_size_cell_tb_trans_pane_ParamLimits

0x4ada,	// (0x00032eaa) bg_tb_trans_pane_ParamLimits

0x80ba,	// (0x0003648a) grid_tb_trans_pane_ParamLimits

0x460c,	// (0x000329dc) cont_note_pane_ParamLimits

0x460c,	// (0x000329dc) cont_note_pane

0x4855,	// (0x00032c25) cont_snote2_single_text_pane_ParamLimits

0x4855,	// (0x00032c25) cont_snote2_single_text_pane

0x4855,	// (0x00032c25) cont_snote2_single_graphic_pane_ParamLimits

0x4855,	// (0x00032c25) cont_snote2_single_graphic_pane

0x600d,	// (0x000343dd) cont_note_wait_pane_ParamLimits

0x600d,	// (0x000343dd) cont_note_wait_pane

0x600d,	// (0x000343dd) cont_note_image_pane_ParamLimits

0x600d,	// (0x000343dd) cont_note_image_pane

0xcf21,	// (0x0003b2f1) popup_note2_window_g1_ParamLimits

0xcf21,	// (0x0003b2f1) popup_note2_window_g1

0xcf52,	// (0x0003b322) popup_note2_window_t1_ParamLimits

0xcf52,	// (0x0003b322) popup_note2_window_t1

0xcf97,	// (0x0003b367) popup_note2_window_t2_ParamLimits

0xcf97,	// (0x0003b367) popup_note2_window_t2

0xcfdc,	// (0x0003b3ac) popup_note2_window_t3_ParamLimits

0xcfdc,	// (0x0003b3ac) popup_note2_window_t3

0xd021,	// (0x0003b3f1) popup_note2_window_t4_ParamLimits

0xd021,	// (0x0003b3f1) popup_note2_window_t4

0x4690,	// (0x00032a60) popup_note2_window_t5_ParamLimits

0x4690,	// (0x00032a60) popup_note2_window_t5

0x0004,

0xfc82,	// (0x0003e052) popup_note2_window_t_ParamLimits

0xfc82,	// (0x0003e052) popup_note2_window_t

0xd050,	// (0x0003b420) popup_note2_image_window_g1_ParamLimits

0xd050,	// (0x0003b420) popup_note2_image_window_g1

0xd05c,	// (0x0003b42c) popup_note2_image_window_g2_ParamLimits

0xd05c,	// (0x0003b42c) popup_note2_image_window_g2

0x0001,

0xfc8d,	// (0x0003e05d) popup_note2_image_window_g_ParamLimits

0xfc8d,	// (0x0003e05d) popup_note2_image_window_g

0xd06e,	// (0x0003b43e) popup_note2_image_window_t1_ParamLimits

0xd06e,	// (0x0003b43e) popup_note2_image_window_t1

0xd086,	// (0x0003b456) popup_note2_image_window_t2_ParamLimits

0xd086,	// (0x0003b456) popup_note2_image_window_t2

0xd09e,	// (0x0003b46e) popup_note2_image_window_t3_ParamLimits

0xd09e,	// (0x0003b46e) popup_note2_image_window_t3

0x0002,

0xfc92,	// (0x0003e062) popup_note2_image_window_t_ParamLimits

0xfc92,	// (0x0003e062) popup_note2_image_window_t

0x601b,	// (0x000343eb) popup_note2_wait_window_g1_ParamLimits

0x601b,	// (0x000343eb) popup_note2_wait_window_g1

0xd0ba,	// (0x0003b48a) popup_note2_wait_window_g2_ParamLimits

0xd0ba,	// (0x0003b48a) popup_note2_wait_window_g2

0x6033,	// (0x00034403) popup_note2_wait_window_g3_ParamLimits

0x6033,	// (0x00034403) popup_note2_wait_window_g3

0x0002,

0xfc99,	// (0x0003e069) popup_note2_wait_window_g_ParamLimits

0xfc99,	// (0x0003e069) popup_note2_wait_window_g

0xd0c6,	// (0x0003b496) popup_note2_wait_window_t1_ParamLimits

0xd0c6,	// (0x0003b496) popup_note2_wait_window_t1

0xd0e4,	// (0x0003b4b4) popup_note2_wait_window_t2_ParamLimits

0xd0e4,	// (0x0003b4b4) popup_note2_wait_window_t2

0xd102,	// (0x0003b4d2) popup_note2_wait_window_t3_ParamLimits

0xd102,	// (0x0003b4d2) popup_note2_wait_window_t3

0xd114,	// (0x0003b4e4) popup_note2_wait_window_t4_ParamLimits

0xd114,	// (0x0003b4e4) popup_note2_wait_window_t4

0x0003,

0xfca0,	// (0x0003e070) popup_note2_wait_window_t_ParamLimits

0xfca0,	// (0x0003e070) popup_note2_wait_window_t

0xd126,	// (0x0003b4f6) wait_bar2_pane_ParamLimits

0xd126,	// (0x0003b4f6) wait_bar2_pane

0xd13e,	// (0x0003b50e) popup_snote2_single_text_window_g1_ParamLimits

0xd13e,	// (0x0003b50e) popup_snote2_single_text_window_g1

0xd166,	// (0x0003b536) popup_snote2_single_text_window_t1_ParamLimits

0xd166,	// (0x0003b536) popup_snote2_single_text_window_t1

0xd1b2,	// (0x0003b582) popup_snote2_single_text_window_t2_ParamLimits

0xd1b2,	// (0x0003b582) popup_snote2_single_text_window_t2

0xd1fe,	// (0x0003b5ce) popup_snote2_single_text_window_t3_ParamLimits

0xd1fe,	// (0x0003b5ce) popup_snote2_single_text_window_t3

0xd23f,	// (0x0003b60f) popup_snote2_single_text_window_t4_ParamLimits

0xd23f,	// (0x0003b60f) popup_snote2_single_text_window_t4

0xd275,	// (0x0003b645) popup_snote2_single_text_window_t5_ParamLimits

0xd275,	// (0x0003b645) popup_snote2_single_text_window_t5

0x0004,

0xfca9,	// (0x0003e079) popup_snote2_single_text_window_t_ParamLimits

0xfca9,	// (0x0003e079) popup_snote2_single_text_window_t

0xd2a0,	// (0x0003b670) popup_snote2_single_graphic_window_g1_ParamLimits

0xd2a0,	// (0x0003b670) popup_snote2_single_graphic_window_g1

0xd2c8,	// (0x0003b698) popup_snote2_single_graphic_window_g2_ParamLimits

0xd2c8,	// (0x0003b698) popup_snote2_single_graphic_window_g2

0x0001,

0xfcb4,	// (0x0003e084) popup_snote2_single_graphic_window_g_ParamLimits

0xfcb4,	// (0x0003e084) popup_snote2_single_graphic_window_g

0xd2f0,	// (0x0003b6c0) popup_snote2_single_graphic_window_t1_ParamLimits

0xd2f0,	// (0x0003b6c0) popup_snote2_single_graphic_window_t1

0xd33c,	// (0x0003b70c) popup_snote2_single_graphic_window_t2_ParamLimits

0xd33c,	// (0x0003b70c) popup_snote2_single_graphic_window_t2

0xd1fe,	// (0x0003b5ce) popup_snote2_single_graphic_window_t3_ParamLimits

0xd1fe,	// (0x0003b5ce) popup_snote2_single_graphic_window_t3

0xd23f,	// (0x0003b60f) popup_snote2_single_graphic_window_t4_ParamLimits

0xd23f,	// (0x0003b60f) popup_snote2_single_graphic_window_t4

0xd275,	// (0x0003b645) popup_snote2_single_graphic_window_t5_ParamLimits

0xd275,	// (0x0003b645) popup_snote2_single_graphic_window_t5

0x0004,

0xfcb9,	// (0x0003e089) popup_snote2_single_graphic_window_t_ParamLimits

0xfcb9,	// (0x0003e089) popup_snote2_single_graphic_window_t

0x7502,	// (0x000358d2) clock_nsta_pane_cp2_t1

0x7502,	// (0x000358d2) clock_nsta_pane_cp2_t2

0x0001,

0xfad9,	// (0x0003dea9) clock_nsta_pane_cp2_t

0x902e,	// (0x000373fe) form_field_data_wide_pane_g1_ParamLimits

0x4af4,	// (0x00032ec4) form_field_data_wide_pane_g2_ParamLimits

0x4af4,	// (0x00032ec4) form_field_data_wide_pane_g2

0x4b00,	// (0x00032ed0) form_field_data_wide_pane_g3_ParamLimits

0x4b00,	// (0x00032ed0) form_field_data_wide_pane_g3

0x0002,

0xf6c4,	// (0x0003da94) form_field_data_wide_pane_g_ParamLimits

0xf6c4,	// (0x0003da94) form_field_data_wide_pane_g

0xc902,	// (0x0003acd2) grid_touch_3_pane_ParamLimits

0xc902,	// (0x0003acd2) grid_touch_3_pane

0xd388,	// (0x0003b758) cell_touch_3_pane_ParamLimits

0xd388,	// (0x0003b758) cell_touch_3_pane

0x77fa,	// (0x00035bca) cell_touch_3_pane_g1

0x77fa,	// (0x00035bca) cell_touch_3_pane_g2

0x0001,

0xfb5e,	// (0x0003df2e) cell_touch_3_pane_g

0x46c2,	// (0x00032a92) cont_query_data_pane

0x46ca,	// (0x00032a9a) cont_query_data_pane_cp1

0xd3b6,	// (0x0003b786) button_value_adjust_pane_cp7

0xd3be,	// (0x0003b78e) query_popup_pane_cp3

0x5077,	// (0x00033447) bg_popup_sub_pane_cp22_ParamLimits

0xa442,	// (0x00038812) navi_navi_volume_pane_cp2

0xa45d,	// (0x0003882d) popup_side_volume_key_window_g2

0xa46c,	// (0x0003883c) popup_side_volume_key_window_g3

0x0002,

0xf756,	// (0x0003db26) popup_side_volume_key_window_g

0xa489,	// (0x00038859) popup_side_volume_key_window_t2

0x0001,

0xf75d,	// (0x0003db2d) popup_side_volume_key_window_t

0x52a7,	// (0x00033677) popup_side_volume_key_window_ParamLimits

0x8c3b,	// (0x0003700b) list_double_graphic_pane_g4_ParamLimits

0x8c3b,	// (0x0003700b) list_double_graphic_pane_g4

0xb148,	// (0x00039518) list_single_2heading_msg_pane_ParamLimits

0xb148,	// (0x00039518) list_single_2heading_msg_pane

0xb709,	// (0x00039ad9) list_single_2heading_msg_pane_g1_ParamLimits

0xb709,	// (0x00039ad9) list_single_2heading_msg_pane_g1

0x5441,	// (0x00033811) list_single_2heading_msg_pane_g2_ParamLimits

0x5441,	// (0x00033811) list_single_2heading_msg_pane_g2

0xb715,	// (0x00039ae5) list_single_2heading_msg_pane_g3_ParamLimits

0xb715,	// (0x00039ae5) list_single_2heading_msg_pane_g3

0xb721,	// (0x00039af1) list_single_2heading_msg_pane_g4_ParamLimits

0xb721,	// (0x00039af1) list_single_2heading_msg_pane_g4

0x0003,

0xfcc4,	// (0x0003e094) list_single_2heading_msg_pane_g_ParamLimits

0xfcc4,	// (0x0003e094) list_single_2heading_msg_pane_g

0x9771,	// (0x00037b41) list_single_2heading_msg_pane_t1_ParamLimits

0x9771,	// (0x00037b41) list_single_2heading_msg_pane_t1

0x9799,	// (0x00037b69) list_single_2heading_msg_pane_t2_ParamLimits

0x9799,	// (0x00037b69) list_single_2heading_msg_pane_t2

0x97cd,	// (0x00037b9d) list_single_2heading_msg_pane_t3_ParamLimits

0x97cd,	// (0x00037b9d) list_single_2heading_msg_pane_t3

0x9806,	// (0x00037bd6) list_single_2heading_msg_pane_t4_ParamLimits

0x9806,	// (0x00037bd6) list_single_2heading_msg_pane_t4

0x0003,

0xfccd,	// (0x0003e09d) list_single_2heading_msg_pane_t_ParamLimits

0xfccd,	// (0x0003e09d) list_single_2heading_msg_pane_t

0x4487,	// (0x00032857) title_pane_g4_ParamLimits

0x4487,	// (0x00032857) title_pane_g4

0xa166,	// (0x00038536) title_pane_stacon_g3_ParamLimits

0xa166,	// (0x00038536) title_pane_stacon_g3

0x80f4,	// (0x000364c4) list_single_2graphic_im_pane_g4_ParamLimits

0x80f4,	// (0x000364c4) list_single_2graphic_im_pane_g4

0x69a4,	// (0x00034d74) popup_side_volume_key_window_cp

0x6e7d,	// (0x0003524d) main_idle_act2_pane_t1

0xadc6,	// (0x00039196) toolbar_button_pane_g10

0x9fea,	// (0x000383ba) popup_toolbar_window_cp1

0x74f3,	// (0x000358c3) clock_nsta_pane_cp_t1

0x74f3,	// (0x000358c3) clock_nsta_pane_cp_t2

0x0001,

0xfad4,	// (0x0003dea4) clock_nsta_pane_cp_t

0xa442,	// (0x00038812) navi_navi_volume_pane_cp2_ParamLimits

0xa451,	// (0x00038821) popup_side_volume_key_window_g1_ParamLimits

0xa45d,	// (0x0003882d) popup_side_volume_key_window_g2_ParamLimits

0xa46c,	// (0x0003883c) popup_side_volume_key_window_g3_ParamLimits

0xf756,	// (0x0003db26) popup_side_volume_key_window_g_ParamLimits

0xb32a,	// (0x000396fa) fep_hwr_aid_pane

0x0f86,	// (0x0002f356) bg_fep_hwr_top_pane_g4_ParamLimits

0x787c,	// (0x00035c4c) fep_hwr_top_pane_g1_ParamLimits

0x786a,	// (0x00035c3a) fep_hwr_top_pane_g2_ParamLimits

0xb3e3,	// (0x000397b3) fep_hwr_top_pane_g3_ParamLimits

0xfb29,	// (0x0003def9) fep_hwr_top_pane_g_ParamLimits

0xb3f8,	// (0x000397c8) fep_hwr_top_text_pane_ParamLimits

0x6770,	// (0x00034b40) aid_touch_tab_arrow_arrow_2

0x6767,	// (0x00034b37) aid_touch_tab_arrow_left_2

0xb33e,	// (0x0003970e) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0xb375,	// (0x00039745) fep_hwr_prediction_pane

0x7969,	// (0x00035d39) fep_vkb_prediction_pane

0xccd4,	// (0x0003b0a4) fep_vkb_side_pane_g3_ParamLimits

0xccd4,	// (0x0003b0a4) fep_vkb_side_pane_g3

0x79a1,	// (0x00035d71) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x7d35,	// (0x00036105) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x7d42,	// (0x00036112) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbd3,	// (0x0003dfa3) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xd3e3,	// (0x0003b7b3) fep_hwr_prediction_pane_g1

0xb739,	// (0x00039b09) fep_hwr_prediction_pane_g2

0xb741,	// (0x00039b11) fep_hwr_prediction_pane_g3

0xb749,	// (0x00039b19) fep_hwr_prediction_pane_g4

0x0003,

0xfcd6,	// (0x0003e0a6) fep_hwr_prediction_pane_g

0xd3e3,	// (0x0003b7b3) fep_vkb_prediction_pane_g1

0xd3ed,	// (0x0003b7bd) fep_vkb_prediction_pane_g2

0xd3f5,	// (0x0003b7c5) fep_vkb_prediction_pane_g3

0xd3fd,	// (0x0003b7cd) fep_vkb_prediction_pane_g4

0x0003,

0xfcdf,	// (0x0003e0af) fep_vkb_prediction_pane_g

0xb0a2,	// (0x00039472) slider_set_pane_g3

0xb0b6,	// (0x00039486) slider_set_pane_g4

0xb0ce,	// (0x0003949e) slider_set_pane_g5

0xb0a2,	// (0x00039472) slider_set_pane_g6

0xb0e4,	// (0x000394b4) slider_set_pane_g7

0x6c0b,	// (0x00034fdb) slider_form_pane_g3

0x6c14,	// (0x00034fe4) slider_form_pane_g4

0x6c1c,	// (0x00034fec) slider_form_pane_g5

0x6c0b,	// (0x00034fdb) slider_form_pane_g6

0xc786,	// (0x0003ab56) slider_form_pane_g7

0x70cf,	// (0x0003549f) slider_set_pane_vc_g3

0x70d8,	// (0x000354a8) slider_set_pane_vc_g4

0x70e1,	// (0x000354b1) slider_set_pane_vc_g5

0x70cf,	// (0x0003549f) slider_set_pane_vc_g6

0x70ea,	// (0x000354ba) slider_set_pane_vc_g7

0x70cf,	// (0x0003549f) slider_form_pane_vc_g1

0x70d8,	// (0x000354a8) slider_form_pane_vc_g2

0x70e1,	// (0x000354b1) slider_form_pane_vc_g3

0x70cf,	// (0x0003549f) slider_form_pane_vc_g4

0x729d,	// (0x0003566d) slider_form_pane_vc_g5

0x0004,

0xfaba,	// (0x0003de8a) slider_form_pane_vc_g

0x4469,	// (0x00032839) main_idle_act3_pane

0xd405,	// (0x0003b7d5) ai3_links_pane

0xd40e,	// (0x0003b7de) popup_ai3_data_window_ParamLimits

0xd40e,	// (0x0003b7de) popup_ai3_data_window

0x4469,	// (0x00032839) grid_ai3_links_pane

0xd428,	// (0x0003b7f8) cell_ai3_links_pane_ParamLimits

0xd428,	// (0x0003b7f8) cell_ai3_links_pane

0xd440,	// (0x0003b810) bg_popup_sub_pane_cp11

0xd44d,	// (0x0003b81d) cell_ai3_links_pane_g1

0x4469,	// (0x00032839) bg_popup_sub_pane_cp12

0xd472,	// (0x0003b842) heading_ai3_data_pane

0xd47a,	// (0x0003b84a) list_ai3_gene_pane

0xd486,	// (0x0003b856) popup_ai3_data_window_g1

0xd48e,	// (0x0003b85e) heading_ai3_data_pane_g1

0xd496,	// (0x0003b866) heading_ai3_data_pane_t1

0xd4a4,	// (0x0003b874) list_double_ai3_gene_pane_ParamLimits

0xd4a4,	// (0x0003b874) list_double_ai3_gene_pane

0xd4b1,	// (0x0003b881) list_single_ai3_gene_pane_ParamLimits

0xd4b1,	// (0x0003b881) list_single_ai3_gene_pane

0x77bf,	// (0x00035b8f) list_highlight_pane_cp7_ParamLimits

0x77bf,	// (0x00035b8f) list_highlight_pane_cp7

0xd4be,	// (0x0003b88e) list_single_a13_gene_pane_t1_ParamLimits

0xd4be,	// (0x0003b88e) list_single_a13_gene_pane_t1

0xd4d5,	// (0x0003b8a5) list_single_ai3_gene_pane_g1

0xd4de,	// (0x0003b8ae) list_single_ai3_gene_pane_g2

0x0001,

0xfce8,	// (0x0003e0b8) list_single_ai3_gene_pane_g

0xd4e6,	// (0x0003b8b6) list_double_ai3_gene_pane_g1_ParamLimits

0xd4e6,	// (0x0003b8b6) list_double_ai3_gene_pane_g1

0xd4f2,	// (0x0003b8c2) list_double_ai3_gene_pane_t1_ParamLimits

0xd4f2,	// (0x0003b8c2) list_double_ai3_gene_pane_t1

0xd50e,	// (0x0003b8de) list_double_ai3_gene_pane_t2_ParamLimits

0xd50e,	// (0x0003b8de) list_double_ai3_gene_pane_t2

0xd524,	// (0x0003b8f4) list_double_ai3_gene_pane_t3_ParamLimits

0xd524,	// (0x0003b8f4) list_double_ai3_gene_pane_t3

0x0002,

0xfced,	// (0x0003e0bd) list_double_ai3_gene_pane_t_ParamLimits

0xfced,	// (0x0003e0bd) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x9767,	// (0x00037b37) aid_size_min_col_2

0xd3cf,	// (0x0003b79f) aid_size_min_msg_ParamLimits

0xd3cf,	// (0x0003b79f) aid_size_min_msg

0xcce8,	// (0x0003b0b8) fep_vkb_top_text_pane_g2_ParamLimits

0xcce8,	// (0x0003b0b8) fep_vkb_top_text_pane_g2

0x0001,

0xfb59,	// (0x0003df29) fep_vkb_top_text_pane_g_ParamLimits

0xfb59,	// (0x0003df29) fep_vkb_top_text_pane_g

0x4469,	// (0x00032839) main_hc_apps_shell_pane

0xd541,	// (0x0003b911) grid_hc_apps_pane_ParamLimits

0xd541,	// (0x0003b911) grid_hc_apps_pane

0xd550,	// (0x0003b920) list_hc_apps_pane

0xd558,	// (0x0003b928) scroll_pane_cp37_ParamLimits

0xd558,	// (0x0003b928) scroll_pane_cp37

0xd564,	// (0x0003b934) cell_hc_apps_pane_ParamLimits

0xd564,	// (0x0003b934) cell_hc_apps_pane

0xd612,	// (0x0003b9e2) cell_hc_apps_pane_g1_ParamLimits

0xd612,	// (0x0003b9e2) cell_hc_apps_pane_g1

0xd643,	// (0x0003ba13) cell_hc_apps_pane_g2_ParamLimits

0xd643,	// (0x0003ba13) cell_hc_apps_pane_g2

0xd65f,	// (0x0003ba2f) cell_hc_apps_pane_g3_ParamLimits

0xd65f,	// (0x0003ba2f) cell_hc_apps_pane_g3

0x0002,

0xfcf4,	// (0x0003e0c4) cell_hc_apps_pane_g_ParamLimits

0xfcf4,	// (0x0003e0c4) cell_hc_apps_pane_g

0xd681,	// (0x0003ba51) cell_hc_apps_pane_t1_ParamLimits

0xd681,	// (0x0003ba51) cell_hc_apps_pane_t1

0x460c,	// (0x000329dc) grid_highlight_pane_cp10_ParamLimits

0x460c,	// (0x000329dc) grid_highlight_pane_cp10

0xd6c1,	// (0x0003ba91) list_single_hc_apps_pane_ParamLimits

0xd6c1,	// (0x0003ba91) list_single_hc_apps_pane

0xd71d,	// (0x0003baed) list_single_hc_apps_pane_g1

0xb751,	// (0x00039b21) list_single_hc_apps_pane_g2

0x0001,

0xfcfb,	// (0x0003e0cb) list_single_hc_apps_pane_g

0xb76a,	// (0x00039b3a) list_single_hc_apps_pane_g2_copy1

0x982b,	// (0x00037bfb) list_single_hc_apps_pane_t1

0x44d9,	// (0x000328a9) bg_set_opt_pane_cp_ParamLimits

0x9d42,	// (0x00038112) setting_slider_pane_t1_ParamLimits

0x9d5b,	// (0x0003812b) setting_slider_pane_t2_ParamLimits

0x9d75,	// (0x00038145) setting_slider_pane_t3_ParamLimits

0xf5a2,	// (0x0003d972) setting_slider_pane_t_ParamLimits

0x9d8d,	// (0x0003815d) slider_set_pane_ParamLimits

0xa83e,	// (0x00038c0e) control_pane_g5_ParamLimits

0xa83e,	// (0x00038c0e) control_pane_g5

0x6bc7,	// (0x00034f97) slider_set_pane_g1_ParamLimits

0xb096,	// (0x00039466) slider_set_pane_g2_ParamLimits

0xb0a2,	// (0x00039472) slider_set_pane_g3_ParamLimits

0xb0b6,	// (0x00039486) slider_set_pane_g4_ParamLimits

0xb0ce,	// (0x0003949e) slider_set_pane_g5_ParamLimits

0xb0a2,	// (0x00039472) slider_set_pane_g6_ParamLimits

0xb0e4,	// (0x000394b4) slider_set_pane_g7_ParamLimits

0xf9a2,	// (0x0003dd72) slider_set_pane_g_ParamLimits

0x5388,	// (0x00033758) navi_icon_text_pane_ParamLimits

0xc089,	// (0x0003a459) aid_fill_nsta_2_ParamLimits

0xc0b3,	// (0x0003a483) aid_touch_tab_arrow_left_ParamLimits

0xc0bf,	// (0x0003a48f) aid_touch_tab_arrow_right_ParamLimits

0xc12b,	// (0x0003a4fb) clock_nsta_pane_ParamLimits

0xc565,	// (0x0003a935) navi_icon_pane_g1_ParamLimits

0xc574,	// (0x0003a944) navi_text_pane_t1_ParamLimits

0xca15,	// (0x0003ade5) navi_icon_text_pane_g1_ParamLimits

0xca24,	// (0x0003adf4) navi_icon_text_pane_t1_ParamLimits

0xd71d,	// (0x0003baed) list_single_hc_apps_pane_g1_ParamLimits

0xb751,	// (0x00039b21) list_single_hc_apps_pane_g2_ParamLimits

0xfcfb,	// (0x0003e0cb) list_single_hc_apps_pane_g_ParamLimits

0xb76a,	// (0x00039b3a) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x982b,	// (0x00037bfb) list_single_hc_apps_pane_t1_ParamLimits

0x9b90,	// (0x00037f60) popup_toolbar2_fixed_window_ParamLimits

0x9b90,	// (0x00037f60) popup_toolbar2_fixed_window

0xbffc,	// (0x0003a3cc) popup_toolbar2_float_window

0x4469,	// (0x00032839) bg_popup_sub_pane_cp27

0xd736,	// (0x0003bb06) grid_toolbar2_float_pane

0x4469,	// (0x00032839) bg_popup_sub_pane_cp26

0xd736,	// (0x0003bb06) grid_toolbar2_fixed_pane

0xd73e,	// (0x0003bb0e) cell_toolbar2_fixed_pane_ParamLimits

0xd73e,	// (0x0003bb0e) cell_toolbar2_fixed_pane

0xd74e,	// (0x0003bb1e) cell_toolbar2_fixed_pane_g1

0xd757,	// (0x0003bb27) toolbar2_fixed_button_pane

0x5a56,	// (0x00033e26) toolbar2_fixed_button_pane_g1

0x5a66,	// (0x00033e36) toolbar2_fixed_button_pane_g2

0x5a5e,	// (0x00033e2e) toolbar2_fixed_button_pane_g3

0x5a76,	// (0x00033e46) toolbar2_fixed_button_pane_g4

0x5a6e,	// (0x00033e3e) toolbar2_fixed_button_pane_g5

0x5a7e,	// (0x00033e4e) toolbar2_fixed_button_pane_g6

0x5a86,	// (0x00033e56) toolbar2_fixed_button_pane_g7

0x5a96,	// (0x00033e66) toolbar2_fixed_button_pane_g8

0x5a8e,	// (0x00033e5e) toolbar2_fixed_button_pane_g9

0x0008,

0xf8a4,	// (0x0003dc74) toolbar2_fixed_button_pane_g

0xd75f,	// (0x0003bb2f) cell_toolbar2_float_pane_ParamLimits

0xd75f,	// (0x0003bb2f) cell_toolbar2_float_pane

0xd770,	// (0x0003bb40) cell_toolbar2_float_pane_g1

0xd757,	// (0x0003bb27) toolbar2_fixed_button_pane_cp

0xcbc2,	// (0x0003af92) fep_vkb_accented_list_pane_ParamLimits

0xcbc2,	// (0x0003af92) fep_vkb_accented_list_pane

0xb546,	// (0x00039916) bg_popup_fep_shadow_pane_g9

0x5508,	// (0x000338d8) bg_popup_fep_shadow_pane_cp3

0x4be9,	// (0x00032fb9) list_accented_list_pane

0xd779,	// (0x0003bb49) list_single_accented_list_pane_ParamLimits

0xd779,	// (0x0003bb49) list_single_accented_list_pane

0x5508,	// (0x000338d8) list_highlight_pane_cp10

0xd78a,	// (0x0003bb5a) list_single_accented_list_pane_t1

0xacf7,	// (0x000390c7) popup_slider_window_ParamLimits

0xacf7,	// (0x000390c7) popup_slider_window

0xd3c6,	// (0x0003b796) aid_indentation_list_msg

0xd844,	// (0x0003bc14) bg_popup_window_pane_cp19

0xd8ae,	// (0x0003bc7e) popup_slider_window_g1

0xd8ca,	// (0x0003bc9a) popup_slider_window_g2

0xd8e6,	// (0x0003bcb6) popup_slider_window_g3

0x0005,

0xfd00,	// (0x0003e0d0) popup_slider_window_g

0xd942,	// (0x0003bd12) popup_slider_window_t1

0xd9b6,	// (0x0003bd86) small_volume_slider_vertical_pane

0x77fa,	// (0x00035bca) small_volume_slider_vertical_pane_g1

0x77fa,	// (0x00035bca) small_volume_slider_vertical_pane_g2

0xd9d2,	// (0x0003bda2) small_volume_slider_vertical_pane_g3

0x0002,

0xfd12,	// (0x0003e0e2) small_volume_slider_vertical_pane_g

0x9952,	// (0x00037d22) area_side_right_pane_ParamLimits

0x9952,	// (0x00037d22) area_side_right_pane

0xb786,	// (0x00039b56) aid_size_side_button_ParamLimits

0xb786,	// (0x00039b56) aid_size_side_button

0xb79a,	// (0x00039b6a) grid_sctrl_middle_pane_ParamLimits

0xb79a,	// (0x00039b6a) grid_sctrl_middle_pane

0xb7ba,	// (0x00039b8a) sctrl_sk_bottom_pane

0xb7cb,	// (0x00039b9b) sctrl_sk_top_pane

0xb7dd,	// (0x00039bad) aid_touch_sctrl_top

0x460c,	// (0x000329dc) bg_sctrl_sk_pane_ParamLimits

0x460c,	// (0x000329dc) bg_sctrl_sk_pane

0xb7ea,	// (0x00039bba) sctrl_sk_top_pane_g1

0xb7f7,	// (0x00039bc7) sctrl_sk_top_pane_t1

0xb7dd,	// (0x00039bad) aid_touch_sctrl_bottom

0x460c,	// (0x000329dc) bg_sctrl_sk_pane_cp_ParamLimits

0x460c,	// (0x000329dc) bg_sctrl_sk_pane_cp

0xb812,	// (0x00039be2) sctrl_sk_bottom_pane_g1

0xb7f7,	// (0x00039bc7) sctrl_sk_bottom_pane_t1

0xb81b,	// (0x00039beb) cell_sctrl_middle_pane_ParamLimits

0xb81b,	// (0x00039beb) cell_sctrl_middle_pane

0xb836,	// (0x00039c06) aid_touch_sctrl_middle_ParamLimits

0xb836,	// (0x00039c06) aid_touch_sctrl_middle

0x4ada,	// (0x00032eaa) bg_sctrl_middle_pane_ParamLimits

0x4ada,	// (0x00032eaa) bg_sctrl_middle_pane

0x79a1,	// (0x00035d71) cell_sctrl_middle_pane_g1_ParamLimits

0x79a1,	// (0x00035d71) cell_sctrl_middle_pane_g1

0xb848,	// (0x00039c18) cell_sctrl_middle_pane_g2_ParamLimits

0xb848,	// (0x00039c18) cell_sctrl_middle_pane_g2

0x0001,

0xfd1e,	// (0x0003e0ee) cell_sctrl_middle_pane_g_ParamLimits

0xfd1e,	// (0x0003e0ee) cell_sctrl_middle_pane_g

0x5a56,	// (0x00033e26) bg_sctrl_middle_pane_g1

0x5a66,	// (0x00033e36) bg_sctrl_middle_pane_g2

0x5a5e,	// (0x00033e2e) bg_sctrl_middle_pane_g3

0x5a76,	// (0x00033e46) bg_sctrl_middle_pane_g4

0x5a6e,	// (0x00033e3e) bg_sctrl_middle_pane_g5

0x5a7e,	// (0x00033e4e) bg_sctrl_middle_pane_g6

0x5a86,	// (0x00033e56) bg_sctrl_middle_pane_g7

0x5a96,	// (0x00033e66) bg_sctrl_middle_pane_g8

0x0007,

0xfd23,	// (0x0003e0f3) bg_sctrl_middle_pane_g

0x5a8e,	// (0x00033e5e) bg_sctrl_middle_pane_g8_copy1

0x5a56,	// (0x00033e26) bg_sctrl_sk_pane_g1

0x5a66,	// (0x00033e36) bg_sctrl_sk_pane_g2

0x5a5e,	// (0x00033e2e) bg_sctrl_sk_pane_g3

0x0008,

0xf8a4,	// (0x0003dc74) bg_sctrl_sk_pane_g

0x4a13,	// (0x00032de3) aid_size_touch_scroll_bar

0x5a76,	// (0x00033e46) bg_sctrl_sk_pane_g4

0x5a6e,	// (0x00033e3e) bg_sctrl_sk_pane_g5

0x5a7e,	// (0x00033e4e) bg_sctrl_sk_pane_g6

0x5a86,	// (0x00033e56) bg_sctrl_sk_pane_g7

0x5a96,	// (0x00033e66) bg_sctrl_sk_pane_g8

0x5a8e,	// (0x00033e5e) bg_sctrl_sk_pane_g9

0x578c,	// (0x00033b5c) popup_fep_china_hwr2_fs_candidate_window

0xa9ff,	// (0x00038dcf) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xa9ff,	// (0x00038dcf) popup_fep_china_hwr2_fs_control_window

0x79a1,	// (0x00035d71) sctrl_sk_top_pane_g2

0x0001,

0xfd19,	// (0x0003e0e9) sctrl_sk_top_pane_g

0xd9db,	// (0x0003bdab) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd9db,	// (0x0003bdab) aid_fep_china_hwr2_fs_cell

0xd9ed,	// (0x0003bdbd) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd9ed,	// (0x0003bdbd) bg_popup_fep_shadow_pane_cp4

0xda04,	// (0x0003bdd4) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xda04,	// (0x0003bdd4) bg_popup_fep_shadow_pane_cp5

0xda16,	// (0x0003bde6) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xda16,	// (0x0003bde6) popup_fep_china_hwr2_fs_control_bar_grid

0xda26,	// (0x0003bdf6) popup_fep_china_hwr2_fs_control_funtion_grid

0xda2e,	// (0x0003bdfe) aid_fep_china_hwr2_fs_candi_cell

0x4469,	// (0x00032839) bg_popup_fep_shadow_pane_cp6

0xda38,	// (0x0003be08) popup_fep_china_hwr2_fs_candidate_grid

0xda42,	// (0x0003be12) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xda42,	// (0x0003be12) cell_fep_china_hwr2_fs_funtion_grid

0x77fa,	// (0x00035bca) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xda5a,	// (0x0003be2a) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xda5a,	// (0x0003be2a) cell_fep_china_hwr2_fs_funtion_grid_g1

0xda68,	// (0x0003be38) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xda68,	// (0x0003be38) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd34,	// (0x0003e104) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd34,	// (0x0003e104) cell_fep_china_hwr2_fs_funtion_grid_g

0xda7e,	// (0x0003be4e) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xda7e,	// (0x0003be4e) cell_fep_china_hwr2_fs_funtion_grid_t1

0xda93,	// (0x0003be63) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xda93,	// (0x0003be63) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd39,	// (0x0003e109) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd39,	// (0x0003e109) cell_fep_china_hwr2_fs_funtion_grid_t

0xdaaf,	// (0x0003be7f) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xdab7,	// (0x0003be87) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xdabf,	// (0x0003be8f) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd3e,	// (0x0003e10e) popup_fep_china_hwr2_fs_control_bar_grid_g

0xdac7,	// (0x0003be97) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xdac7,	// (0x0003be97) cell_fep_china_hwr2_fs_candidate_grid

0xdae0,	// (0x0003beb0) popup_fep_china_hwr2_fs_candidate_grid_g20

0xdae8,	// (0x0003beb8) popup_fep_china_hwr2_fs_candidate_grid_g21

0x77fa,	// (0x00035bca) cell_fep_china_hwr2_fs_candidate_grid_g1

0x77fa,	// (0x00035bca) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb5e,	// (0x0003df2e) cell_fep_china_hwr2_fs_candidate_grid_g

0xdaf0,	// (0x0003bec0) cell_fep_china_hwr2_fs_candidate_grid_t1

0x58a3,	// (0x00033c73) clock_nsta_pane_cp_24_ParamLimits

0x58a3,	// (0x00033c73) clock_nsta_pane_cp_24

0x590b,	// (0x00033cdb) indicator_nsta_pane_cp_24_ParamLimits

0x590b,	// (0x00033cdb) indicator_nsta_pane_cp_24

0x6671,	// (0x00034a41) heading_pane_g1

0x0001,

0xf909,	// (0x0003dcd9) heading_pane_g

0x6d0a,	// (0x000350da) grid_sct_catagory_button_pane

0x65f9,	// (0x000349c9) scroll_pane_cp5_ParamLimits

0x7558,	// (0x00035928) button_value_adjust_pane_cp5_ParamLimits

0x7558,	// (0x00035928) button_value_adjust_pane_cp5

0x7616,	// (0x000359e6) form2_midp_time_pane_ParamLimits

0xdafe,	// (0x0003bece) cell_sct_catagory_button_pane_ParamLimits

0xdafe,	// (0x0003bece) cell_sct_catagory_button_pane

0x77bf,	// (0x00035b8f) bg_button_pane_cp01_ParamLimits

0x77bf,	// (0x00035b8f) bg_button_pane_cp01

0x77fa,	// (0x00035bca) cell_sct_catagory_button_pane_g1

0xad2e,	// (0x000390fe) popup_tb_extension_window

0xdb10,	// (0x0003bee0) aid_size_cell_ext_ParamLimits

0xdb10,	// (0x0003bee0) aid_size_cell_ext

0x460c,	// (0x000329dc) bg_tb_trans_pane_cp1_ParamLimits

0x460c,	// (0x000329dc) bg_tb_trans_pane_cp1

0xdb30,	// (0x0003bf00) grid_tb_ext_pane_ParamLimits

0xdb30,	// (0x0003bf00) grid_tb_ext_pane

0xdb5e,	// (0x0003bf2e) cell_tb_ext_pane_ParamLimits

0xdb5e,	// (0x0003bf2e) cell_tb_ext_pane

0xdb75,	// (0x0003bf45) cell_tb_ext_pane_g1_ParamLimits

0xdb75,	// (0x0003bf45) cell_tb_ext_pane_g1

0xdb92,	// (0x0003bf62) cell_tb_ext_pane_t1

0x460c,	// (0x000329dc) list_highlight_pane_cp11_ParamLimits

0x460c,	// (0x000329dc) list_highlight_pane_cp11

0x9baf,	// (0x00037f7f) popup_uni_indicator_window_ParamLimits

0x9baf,	// (0x00037f7f) popup_uni_indicator_window

0x4ada,	// (0x00032eaa) bg_popup_sub_pane_cp14

0xdbad,	// (0x0003bf7d) list_uniindi_pane

0xdbb9,	// (0x0003bf89) uniindi_top_pane

0x460c,	// (0x000329dc) bg_uniindi_top_pane

0xdbd8,	// (0x0003bfa8) uniindi_top_pane_g1

0xdbee,	// (0x0003bfbe) uniindi_top_pane_g2

0x0003,

0xfd45,	// (0x0003e115) uniindi_top_pane_g

0xdc18,	// (0x0003bfe8) uniindi_top_pane_t1

0xdc42,	// (0x0003c012) list_single_uniindi_pane_ParamLimits

0xdc42,	// (0x0003c012) list_single_uniindi_pane

0x77fa,	// (0x00035bca) bg_uniindi_top_pane_g1

0xdc55,	// (0x0003c025) list_single_uniindi_pane_g1

0xdc68,	// (0x0003c038) list_single_uniindi_pane_t1

0x4469,	// (0x00032839) control_bg_pane

0xdc8d,	// (0x0003c05d) bg_sctrl_sk_pane_cp1

0xdc96,	// (0x0003c066) bg_sctrl_sk_pane_cp2

0xdc9f,	// (0x0003c06f) control_bg_pane_g1

0xdca8,	// (0x0003c078) control_bg_pane_g2

0x0001,

0xfd4e,	// (0x0003e11e) control_bg_pane_g

0x7467,	// (0x00035837) cell_indicator_nsta_pane_g1_ParamLimits

0xc946,	// (0x0003ad16) cell_indicator_nsta_pane_g2_ParamLimits

0xfacf,	// (0x0003de9f) cell_indicator_nsta_pane_g_ParamLimits

0x95c8,	// (0x00037998) form2_midp_time_pane_t1_ParamLimits

0x4855,	// (0x00032c25) main_idle_act4_pane_ParamLimits

0x4855,	// (0x00032c25) main_idle_act4_pane

0xad2e,	// (0x000390fe) popup_tb_extension_window_ParamLimits

0xdb4e,	// (0x0003bf1e) tb_ext_find_pane_ParamLimits

0xdb4e,	// (0x0003bf1e) tb_ext_find_pane

0xdcb1,	// (0x0003c081) ai_gene_pane_1_cp1

0x558a,	// (0x0003395a) ai_gene_pane_2_cp1

0xdcb9,	// (0x0003c089) list_single_idle_plugin_calendar_pane

0xdcc2,	// (0x0003c092) list_single_idle_plugin_notification_pane

0xdccb,	// (0x0003c09b) list_single_idle_plugin_player_pane

0xdcd4,	// (0x0003c0a4) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdcd4,	// (0x0003c0a4) list_single_idle_plugin_shortcut_pane

0xdcf6,	// (0x0003c0c6) main_idle_act4_pane_t1

0xdd08,	// (0x0003c0d8) main_idle_act4_pane_t2

0x0001,

0xfd53,	// (0x0003e123) main_idle_act4_pane_t

0xdd1a,	// (0x0003c0ea) middle_sk_idle_act4_pane_ParamLimits

0xdd1a,	// (0x0003c0ea) middle_sk_idle_act4_pane

0xdd30,	// (0x0003c100) popup_clock_digital_analogue_window_cp2

0xdd4a,	// (0x0003c11a) shortcut_wheel_idle_act4_pane_ParamLimits

0xdd4a,	// (0x0003c11a) shortcut_wheel_idle_act4_pane

0x77fa,	// (0x00035bca) shortcut_wheel_idle_act4_pane_g1

0x77fa,	// (0x00035bca) shortcut_wheel_idle_act4_pane_g2

0x77fa,	// (0x00035bca) shortcut_wheel_idle_act4_pane_g3

0x77fa,	// (0x00035bca) shortcut_wheel_idle_act4_pane_g4

0x77fa,	// (0x00035bca) shortcut_wheel_idle_act4_pane_g5

0xdd5e,	// (0x0003c12e) shortcut_wheel_idle_act4_pane_g6

0xdd66,	// (0x0003c136) shortcut_wheel_idle_act4_pane_g7

0xdd6e,	// (0x0003c13e) shortcut_wheel_idle_act4_pane_g8

0xdd76,	// (0x0003c146) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd58,	// (0x0003e128) shortcut_wheel_idle_act4_pane_g

0x79a1,	// (0x00035d71) middle_sk_idle_act4_pane_g1_ParamLimits

0x79a1,	// (0x00035d71) middle_sk_idle_act4_pane_g1

0xddda,	// (0x0003c1aa) middle_sk_idle_act4_pane_g2_ParamLimits

0xddda,	// (0x0003c1aa) middle_sk_idle_act4_pane_g2

0x0001,

0xfd7b,	// (0x0003e14b) middle_sk_idle_act4_pane_g_ParamLimits

0xfd7b,	// (0x0003e14b) middle_sk_idle_act4_pane_g

0xdde6,	// (0x0003c1b6) middle_sk_idle_act4_pane_t1_ParamLimits

0xdde6,	// (0x0003c1b6) middle_sk_idle_act4_pane_t1

0xde03,	// (0x0003c1d3) grid_ai_shortcut_pane_ParamLimits

0xde03,	// (0x0003c1d3) grid_ai_shortcut_pane

0xde1c,	// (0x0003c1ec) list_highlight_pane_cp16_ParamLimits

0xde1c,	// (0x0003c1ec) list_highlight_pane_cp16

0xde29,	// (0x0003c1f9) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xde29,	// (0x0003c1f9) list_single_idle_plugin_shortcut_pane_g1

0xde35,	// (0x0003c205) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xde35,	// (0x0003c205) list_single_idle_plugin_shortcut_pane_g2

0xde4d,	// (0x0003c21d) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xde4d,	// (0x0003c21d) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd80,	// (0x0003e150) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd80,	// (0x0003e150) list_single_idle_plugin_shortcut_pane_g

0xde60,	// (0x0003c230) cell_ai_shortcut_pane_ParamLimits

0xde60,	// (0x0003c230) cell_ai_shortcut_pane

0xde84,	// (0x0003c254) cell_ai_shortcut_pane_g1_ParamLimits

0xde84,	// (0x0003c254) cell_ai_shortcut_pane_g1

0xdcb1,	// (0x0003c081) ai_gene_pane_1_cp2

0xdea6,	// (0x0003c276) ai_gene_pane_2_cp2

0xdeae,	// (0x0003c27e) list_highlight_pane_cp15

0xdeb7,	// (0x0003c287) list_single_idle_plugin_calendar_pane_g1

0xdeae,	// (0x0003c27e) list_highlight_pane_cp17

0xdebf,	// (0x0003c28f) list_single_idle_plugin_calendar_pane_g1_copy1

0xdec7,	// (0x0003c297) list_single_idle_plugin_player_pane_g1

0x6f09,	// (0x000352d9) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd87,	// (0x0003e157) list_single_idle_plugin_player_pane_g

0xdecf,	// (0x0003c29f) list_single_idle_plugin_player_pane_t1

0xdedd,	// (0x0003c2ad) list_single_idle_plugin_player_pane_t2

0xdeeb,	// (0x0003c2bb) list_single_idle_plugin_player_pane_t3

0xdef9,	// (0x0003c2c9) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd8c,	// (0x0003e15c) list_single_idle_plugin_player_pane_t

0xdf07,	// (0x0003c2d7) wait_bar_pane_cp15

0xdf0f,	// (0x0003c2df) grid_ai_notification_pane

0x6f09,	// (0x000352d9) list_single_idle_plugin_notification_pane_g1

0xdf18,	// (0x0003c2e8) cell_ai_notification_pane_ParamLimits

0xdf18,	// (0x0003c2e8) cell_ai_notification_pane

0xdf25,	// (0x0003c2f5) cell_ai_notification_pane_g1

0xdf2d,	// (0x0003c2fd) cell_ai_notification_pane_t1

0xdf3b,	// (0x0003c30b) tb_ext_find_button_pane

0xdf43,	// (0x0003c313) tb_ext_find_pane_g1

0xdf4b,	// (0x0003c31b) tb_ext_find_pane_t1

0x501b,	// (0x000333eb) tb_ext_find_button_pane_g1

0xdf59,	// (0x0003c329) tb_ext_find_button_pane_g2

0x0001,

0xfd95,	// (0x0003e165) tb_ext_find_button_pane_g

0xdcf6,	// (0x0003c0c6) main_idle_act4_pane_t1_ParamLimits

0xdd08,	// (0x0003c0d8) main_idle_act4_pane_t2_ParamLimits

0xfd53,	// (0x0003e123) main_idle_act4_pane_t_ParamLimits

0xdd30,	// (0x0003c100) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdd3e,	// (0x0003c10e) sat_plugin_idle_act4_pane_ParamLimits

0xdd3e,	// (0x0003c10e) sat_plugin_idle_act4_pane

0xdf62,	// (0x0003c332) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdf62,	// (0x0003c332) sat_plugin_idle_act4_pane_t1

0xdf75,	// (0x0003c345) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdf75,	// (0x0003c345) sat_plugin_idle_act4_pane_t2

0xdf88,	// (0x0003c358) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdf88,	// (0x0003c358) sat_plugin_idle_act4_pane_t3

0xdf9b,	// (0x0003c36b) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdf9b,	// (0x0003c36b) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd9a,	// (0x0003e16a) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd9a,	// (0x0003e16a) sat_plugin_idle_act4_pane_t

0x9aea,	// (0x00037eba) popup_battery_window_ParamLimits

0x9aea,	// (0x00037eba) popup_battery_window

0x460c,	// (0x000329dc) bg_popup_sub_pane_cp25_ParamLimits

0x460c,	// (0x000329dc) bg_popup_sub_pane_cp25

0xdfae,	// (0x0003c37e) popup_battery_window_g1_ParamLimits

0xdfae,	// (0x0003c37e) popup_battery_window_g1

0xdfba,	// (0x0003c38a) popup_battery_window_t1_ParamLimits

0xdfba,	// (0x0003c38a) popup_battery_window_t1

0xdfcc,	// (0x0003c39c) popup_battery_window_t2_ParamLimits

0xdfcc,	// (0x0003c39c) popup_battery_window_t2

0x0001,

0xfda3,	// (0x0003e173) popup_battery_window_t_ParamLimits

0xfda3,	// (0x0003e173) popup_battery_window_t

0xa673,	// (0x00038a43) midp_canvas_pane_ParamLimits

0xa6d5,	// (0x00038aa5) midp_keypad_pane_ParamLimits

0xa6d5,	// (0x00038aa5) midp_keypad_pane

0x4c3b,	// (0x0003300b) main_midp_pane_ParamLimits

0x7511,	// (0x000358e1) signal_pane_g2_cp_ParamLimits

0xdfe9,	// (0x0003c3b9) aid_size_cell_midp_keypad_ParamLimits

0xdfe9,	// (0x0003c3b9) aid_size_cell_midp_keypad

0xe003,	// (0x0003c3d3) midp_keyp_game_grid_pane_ParamLimits

0xe003,	// (0x0003c3d3) midp_keyp_game_grid_pane

0xe023,	// (0x0003c3f3) midp_keyp_rocker_pane_ParamLimits

0xe023,	// (0x0003c3f3) midp_keyp_rocker_pane

0xe05c,	// (0x0003c42c) midp_keyp_sk_left_pane_ParamLimits

0xe05c,	// (0x0003c42c) midp_keyp_sk_left_pane

0xe0b6,	// (0x0003c486) midp_keyp_sk_right_pane_ParamLimits

0xe0b6,	// (0x0003c486) midp_keyp_sk_right_pane

0x4469,	// (0x00032839) bg_button_pane_cp03

0xe110,	// (0x0003c4e0) midp_keyp_sk_left_pane_g1

0x4469,	// (0x00032839) bg_button_pane_cp04

0xe110,	// (0x0003c4e0) midp_keyp_sk_right_pane_g1

0x77fa,	// (0x00035bca) midp_keyp_rocker_pane_g1

0xe119,	// (0x0003c4e9) keyp_game_cell_pane_ParamLimits

0xe119,	// (0x0003c4e9) keyp_game_cell_pane

0x4469,	// (0x00032839) bg_button_pane_cp02

0xe12c,	// (0x0003c4fc) keyp_game_cell_pane_g1

0x9b2e,	// (0x00037efe) popup_fep_vkb2_window_ParamLimits

0x9b2e,	// (0x00037efe) popup_fep_vkb2_window

0xb869,	// (0x00039c39) aid_size_cell_vkb2_ParamLimits

0xb869,	// (0x00039c39) aid_size_cell_vkb2

0xb8bd,	// (0x00039c8d) popup_fep_vkb2_window_g1_ParamLimits

0xb8bd,	// (0x00039c8d) popup_fep_vkb2_window_g1

0xb905,	// (0x00039cd5) vkb2_area_bottom_pane_ParamLimits

0xb905,	// (0x00039cd5) vkb2_area_bottom_pane

0xb951,	// (0x00039d21) vkb2_area_keypad_pane_ParamLimits

0xb951,	// (0x00039d21) vkb2_area_keypad_pane

0xb993,	// (0x00039d63) vkb2_area_top_pane_ParamLimits

0xb993,	// (0x00039d63) vkb2_area_top_pane

0xba0d,	// (0x00039ddd) vkb2_top_entry_pane_ParamLimits

0xba0d,	// (0x00039ddd) vkb2_top_entry_pane

0xba37,	// (0x00039e07) vkb2_top_grid_left_pane_ParamLimits

0xba37,	// (0x00039e07) vkb2_top_grid_left_pane

0xba55,	// (0x00039e25) vkb2_top_grid_right_pane_ParamLimits

0xba55,	// (0x00039e25) vkb2_top_grid_right_pane

0xba73,	// (0x00039e43) vkb2_cell_keypad_pane_ParamLimits

0xba73,	// (0x00039e43) vkb2_cell_keypad_pane

0xbb44,	// (0x00039f14) vkb2_area_bottom_grid_pane_ParamLimits

0xbb44,	// (0x00039f14) vkb2_area_bottom_grid_pane

0xbb6a,	// (0x00039f3a) vkb2_area_bottom_pane_g1_ParamLimits

0xbb6a,	// (0x00039f3a) vkb2_area_bottom_pane_g1

0xbb8e,	// (0x00039f5e) vkb2_area_bottom_pane_g2_ParamLimits

0xbb8e,	// (0x00039f5e) vkb2_area_bottom_pane_g2

0xbbbc,	// (0x00039f8c) vkb2_area_bottom_pane_g3_ParamLimits

0xbbbc,	// (0x00039f8c) vkb2_area_bottom_pane_g3

0x0002,

0xfda8,	// (0x0003e178) vkb2_area_bottom_pane_g_ParamLimits

0xfda8,	// (0x0003e178) vkb2_area_bottom_pane_g

0xbc1d,	// (0x00039fed) vkb2_top_cell_left_pane_ParamLimits

0xbc1d,	// (0x00039fed) vkb2_top_cell_left_pane

0xe13d,	// (0x0003c50d) vkb2_top_entry_pane_g1_ParamLimits

0xe13d,	// (0x0003c50d) vkb2_top_entry_pane_g1

0xe14b,	// (0x0003c51b) vkb2_top_entry_pane_t1_ParamLimits

0xe14b,	// (0x0003c51b) vkb2_top_entry_pane_t1

0xe17d,	// (0x0003c54d) vkb2_top_entry_pane_t2_ParamLimits

0xe17d,	// (0x0003c54d) vkb2_top_entry_pane_t2

0xe1af,	// (0x0003c57f) vkb2_top_entry_pane_t3_ParamLimits

0xe1af,	// (0x0003c57f) vkb2_top_entry_pane_t3

0x0002,

0xfdaf,	// (0x0003e17f) vkb2_top_entry_pane_t_ParamLimits

0xfdaf,	// (0x0003e17f) vkb2_top_entry_pane_t

0xbc6a,	// (0x0003a03a) vkb2_top_grid_right_pane_g1_ParamLimits

0xbc6a,	// (0x0003a03a) vkb2_top_grid_right_pane_g1

0xbc80,	// (0x0003a050) vkb2_top_grid_right_pane_g2_ParamLimits

0xbc80,	// (0x0003a050) vkb2_top_grid_right_pane_g2

0xbc98,	// (0x0003a068) vkb2_top_grid_right_pane_g3_ParamLimits

0xbc98,	// (0x0003a068) vkb2_top_grid_right_pane_g3

0xbcb0,	// (0x0003a080) vkb2_top_grid_right_pane_g4_ParamLimits

0xbcb0,	// (0x0003a080) vkb2_top_grid_right_pane_g4

0x0003,

0xfdb6,	// (0x0003e186) vkb2_top_grid_right_pane_g_ParamLimits

0xfdb6,	// (0x0003e186) vkb2_top_grid_right_pane_g

0xbcc6,	// (0x0003a096) vkb2_top_cell_left_pane_g1

0xbcdd,	// (0x0003a0ad) vkb2_cell_keypad_pane_g1_ParamLimits

0xbcdd,	// (0x0003a0ad) vkb2_cell_keypad_pane_g1

0xe1d3,	// (0x0003c5a3) vkb2_cell_keypad_pane_t1_ParamLimits

0xe1d3,	// (0x0003c5a3) vkb2_cell_keypad_pane_t1

0xbceb,	// (0x0003a0bb) vkb2_cell_bottom_grid_pane_ParamLimits

0xbceb,	// (0x0003a0bb) vkb2_cell_bottom_grid_pane

0xbd24,	// (0x0003a0f4) vkb2_cell_bottom_grid_pane_g1

0xdd7e,	// (0x0003c14e) aid_call2_pane_cp02

0xdd86,	// (0x0003c156) aid_call_pane_cp02

0xdd8e,	// (0x0003c15e) clock_digital_number_pane_cp10

0xdd96,	// (0x0003c166) clock_digital_number_pane_cp11

0xdd9e,	// (0x0003c16e) clock_digital_number_pane_cp12

0xdda6,	// (0x0003c176) clock_digital_number_pane_cp13

0xddae,	// (0x0003c17e) clock_digital_separator_pane_cp10

0x501b,	// (0x000333eb) popup_clock_digital_analogue_window_cp2_g1

0x501b,	// (0x000333eb) popup_clock_digital_analogue_window_cp2_g2

0xddb6,	// (0x0003c186) popup_clock_digital_analogue_window_cp2_g3

0x501b,	// (0x000333eb) popup_clock_digital_analogue_window_cp2_g4

0xddb6,	// (0x0003c186) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd6b,	// (0x0003e13b) popup_clock_digital_analogue_window_cp2_g

0xddbe,	// (0x0003c18e) popup_clock_digital_analogue_window_cp2_t1

0xddcc,	// (0x0003c19c) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd76,	// (0x0003e146) popup_clock_digital_analogue_window_cp2_t

0x77fa,	// (0x00035bca) clock_digital_number_pane_cp10_g1

0x77fa,	// (0x00035bca) clock_digital_number_pane_cp10_g2

0x0001,

0xfb5e,	// (0x0003df2e) clock_digital_number_pane_cp10_g

0x77fa,	// (0x00035bca) clock_digital_separator_pane_cp10_g1

0x77fa,	// (0x00035bca) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb5e,	// (0x0003df2e) clock_digital_separator_pane_cp10_g

0xdbfa,	// (0x0003bfca) uniindi_top_pane_g3

0xdc0b,	// (0x0003bfdb) uniindi_top_pane_g4

0xbafe,	// (0x00039ece) vkb2_row_keypad_pane_ParamLimits

0xbafe,	// (0x00039ece) vkb2_row_keypad_pane

0xbd40,	// (0x0003a110) vkb2_cell_t_keypad_pane_ParamLimits

0xbd40,	// (0x0003a110) vkb2_cell_t_keypad_pane

0xbd50,	// (0x0003a120) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0xbd50,	// (0x0003a120) vkb2_cell_t_keypad_pane_cp08

0xbd63,	// (0x0003a133) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0xbd63,	// (0x0003a133) vkb2_cell_t_keypad_pane_cp09

0xbd77,	// (0x0003a147) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0xbd77,	// (0x0003a147) vkb2_cell_t_keypad_pane_cp01

0xbd88,	// (0x0003a158) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0xbd88,	// (0x0003a158) vkb2_cell_t_keypad_pane_cp02

0xbd99,	// (0x0003a169) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0xbd99,	// (0x0003a169) vkb2_cell_t_keypad_pane_cp03

0xbdaa,	// (0x0003a17a) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0xbdaa,	// (0x0003a17a) vkb2_cell_t_keypad_pane_cp04

0xbdbb,	// (0x0003a18b) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0xbdbb,	// (0x0003a18b) vkb2_cell_t_keypad_pane_cp05

0xbdcc,	// (0x0003a19c) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0xbdcc,	// (0x0003a19c) vkb2_cell_t_keypad_pane_cp06

0xbddd,	// (0x0003a1ad) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0xbddd,	// (0x0003a1ad) vkb2_cell_t_keypad_pane_cp07

0xbdee,	// (0x0003a1be) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0xbdee,	// (0x0003a1be) vkb2_cell_t_keypad_pane_cp10

0x79a1,	// (0x00035d71) vkb2_cell_t_keypad_pane_g1

0xe1ea,	// (0x0003c5ba) vkb2_cell_t_keypad_pane_t1

0x4469,	// (0x00032839) popup_grid_graphic2_window

0xe1fc,	// (0x0003c5cc) aid_size_cell_graphic2_ParamLimits

0xe1fc,	// (0x0003c5cc) aid_size_cell_graphic2

0x7a07,	// (0x00035dd7) bg_popup_window_pane_cp21_ParamLimits

0x7a07,	// (0x00035dd7) bg_popup_window_pane_cp21

0xe228,	// (0x0003c5f8) graphic2_pages_pane_ParamLimits

0xe228,	// (0x0003c5f8) graphic2_pages_pane

0xe26e,	// (0x0003c63e) grid_graphic2_control_pane_ParamLimits

0xe26e,	// (0x0003c63e) grid_graphic2_control_pane

0xe29c,	// (0x0003c66c) grid_graphic2_pane_ParamLimits

0xe29c,	// (0x0003c66c) grid_graphic2_pane

0xe2fc,	// (0x0003c6cc) cell_graphic2_pane

0x4469,	// (0x00032839) main_comp_mode_pane

0xd47a,	// (0x0003b84a) list_ai3_gene_pane_ParamLimits

0xd844,	// (0x0003bc14) bg_popup_window_pane_cp19_ParamLimits

0xd850,	// (0x0003bc20) bg_touch_area_indi_pane_ParamLimits

0xd850,	// (0x0003bc20) bg_touch_area_indi_pane

0xd866,	// (0x0003bc36) bg_touch_area_indi_pane_cp01_ParamLimits

0xd866,	// (0x0003bc36) bg_touch_area_indi_pane_cp01

0xd87c,	// (0x0003bc4c) bg_touch_area_indi_pane_cp02_ParamLimits

0xd87c,	// (0x0003bc4c) bg_touch_area_indi_pane_cp02

0xd894,	// (0x0003bc64) bg_touch_area_indi_pane_cp03_ParamLimits

0xd894,	// (0x0003bc64) bg_touch_area_indi_pane_cp03

0xd8ae,	// (0x0003bc7e) popup_slider_window_g1_ParamLimits

0xd8ca,	// (0x0003bc9a) popup_slider_window_g2_ParamLimits

0xd8e6,	// (0x0003bcb6) popup_slider_window_g3_ParamLimits

0xfd00,	// (0x0003e0d0) popup_slider_window_g_ParamLimits

0xd942,	// (0x0003bd12) popup_slider_window_t1_ParamLimits

0xd9b6,	// (0x0003bd86) small_volume_slider_vertical_pane_ParamLimits

0xe2fc,	// (0x0003c6cc) cell_graphic2_pane_ParamLimits

0xe36c,	// (0x0003c73c) bg_button_pane_cp10_ParamLimits

0xe36c,	// (0x0003c73c) bg_button_pane_cp10

0xe37f,	// (0x0003c74f) bg_button_pane_cp11_ParamLimits

0xe37f,	// (0x0003c74f) bg_button_pane_cp11

0xe392,	// (0x0003c762) graphic2_pages_pane_g1_ParamLimits

0xe392,	// (0x0003c762) graphic2_pages_pane_g1

0xe3ad,	// (0x0003c77d) graphic2_pages_pane_g2_ParamLimits

0xe3ad,	// (0x0003c77d) graphic2_pages_pane_g2

0x0001,

0xfdc4,	// (0x0003e194) graphic2_pages_pane_g_ParamLimits

0xfdc4,	// (0x0003e194) graphic2_pages_pane_g

0xe3c5,	// (0x0003c795) graphic2_pages_pane_t1_ParamLimits

0xe3c5,	// (0x0003c795) graphic2_pages_pane_t1

0xe3dd,	// (0x0003c7ad) cell_graphic2_control_pane_ParamLimits

0xe3dd,	// (0x0003c7ad) cell_graphic2_control_pane

0xe3f7,	// (0x0003c7c7) cell_graphic2_pane_g1_ParamLimits

0xe3f7,	// (0x0003c7c7) cell_graphic2_pane_g1

0xe404,	// (0x0003c7d4) cell_graphic2_pane_g2_ParamLimits

0xe404,	// (0x0003c7d4) cell_graphic2_pane_g2

0xe411,	// (0x0003c7e1) cell_graphic2_pane_g3_ParamLimits

0xe411,	// (0x0003c7e1) cell_graphic2_pane_g3

0xe41e,	// (0x0003c7ee) cell_graphic2_pane_g4_ParamLimits

0xe41e,	// (0x0003c7ee) cell_graphic2_pane_g4

0xe42b,	// (0x0003c7fb) cell_graphic2_pane_g5_ParamLimits

0xe42b,	// (0x0003c7fb) cell_graphic2_pane_g5

0x0004,

0xfdc9,	// (0x0003e199) cell_graphic2_pane_g_ParamLimits

0xfdc9,	// (0x0003e199) cell_graphic2_pane_g

0xe446,	// (0x0003c816) cell_graphic2_pane_t1_ParamLimits

0xe446,	// (0x0003c816) cell_graphic2_pane_t1

0x5b46,	// (0x00033f16) grid_highlight_pane_cp11_ParamLimits

0x5b46,	// (0x00033f16) grid_highlight_pane_cp11

0x4ada,	// (0x00032eaa) bg_button_pane_cp05

0xe45c,	// (0x0003c82c) cell_graphic2_control_pane_g1

0x77fa,	// (0x00035bca) bg_touch_area_indi_pane_g1

0xe469,	// (0x0003c839) aid_cmod_rocker_key_size

0xe473,	// (0x0003c843) aid_cmode_itu_key_size

0xe47d,	// (0x0003c84d) main_cmode_video_pane

0xe487,	// (0x0003c857) main_comp_mode_itu_pane

0xe493,	// (0x0003c863) main_comp_mode_rocker_pane

0xe49f,	// (0x0003c86f) cell_cmode_rocker_pane_ParamLimits

0xe49f,	// (0x0003c86f) cell_cmode_rocker_pane

0xe4b1,	// (0x0003c881) cell_cmode_itu_pane_ParamLimits

0xe4b1,	// (0x0003c881) cell_cmode_itu_pane

0x4ada,	// (0x00032eaa) bg_button_pane_cp06_ParamLimits

0x4ada,	// (0x00032eaa) bg_button_pane_cp06

0x79a1,	// (0x00035d71) cell_cmode_rocker_pane_g1_ParamLimits

0x79a1,	// (0x00035d71) cell_cmode_rocker_pane_g1

0xda5a,	// (0x0003be2a) cell_cmode_rocker_pane_g2_ParamLimits

0xda5a,	// (0x0003be2a) cell_cmode_rocker_pane_g2

0x0001,

0xfdd4,	// (0x0003e1a4) cell_cmode_rocker_pane_g_ParamLimits

0xfdd4,	// (0x0003e1a4) cell_cmode_rocker_pane_g

0x4469,	// (0x00032839) bg_button_pane_cp07

0xe4c6,	// (0x0003c896) cell_cmode_itu_pane_g1

0xe4cf,	// (0x0003c89f) cell_cmode_itu_pane_t1

0xe4dd,	// (0x0003c8ad) cell_cmode_itu_pane_t2

0x0001,

0xfdd9,	// (0x0003e1a9) cell_cmode_itu_pane_t

0xdc7d,	// (0x0003c04d) aid_touch_ctrl_left

0xdc85,	// (0x0003c055) aid_touch_ctrl_right

0x4469,	// (0x00032839) compa_mode_pane

0xe4eb,	// (0x0003c8bb) aid_cmod_rocker_key_size_cp

0xe4f5,	// (0x0003c8c5) aid_cmode_itu_key_size_cp

0xe4ff,	// (0x0003c8cf) compa_mode_pane_g1

0xe507,	// (0x0003c8d7) compa_mode_pane_g2

0xe50f,	// (0x0003c8df) compa_mode_pane_g3

0x0002,

0xfdde,	// (0x0003e1ae) compa_mode_pane_g

0xe517,	// (0x0003c8e7) main_comp_mode_itu_pane_cp

0xe51f,	// (0x0003c8ef) main_comp_mode_rocker_pane_cp

0xe527,	// (0x0003c8f7) cell_cmode_itu_pane_cp_ParamLimits

0xe527,	// (0x0003c8f7) cell_cmode_itu_pane_cp

0xe53c,	// (0x0003c90c) cell_cmode_rocker_pane_cp_ParamLimits

0xe53c,	// (0x0003c90c) cell_cmode_rocker_pane_cp

0x4ada,	// (0x00032eaa) bg_button_pane_cp06_cp_ParamLimits

0x4ada,	// (0x00032eaa) bg_button_pane_cp06_cp

0x79a1,	// (0x00035d71) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x79a1,	// (0x00035d71) cell_cmode_rocker_pane_g1_cp

0x77fa,	// (0x00035bca) cell_cmode_rocker_pane_g2_cp

0x4469,	// (0x00032839) bg_button_pane_cp07_cp

0x6c0b,	// (0x00034fdb) cell_cmode_itu_pane_g1_cp

0xe54e,	// (0x0003c91e) cell_cmode_itu_pane_t1_cp

0xe54e,	// (0x0003c91e) cell_cmode_itu_pane_t2_cp

0xc77c,	// (0x0003ab4c) settings_code_pane_cp2

0x44d9,	// (0x000328a9) bg_popup_window_pane_cp3_ParamLimits

0x47e6,	// (0x00032bb6) heading_pane_cp3_ParamLimits

0x47f2,	// (0x00032bc2) listscroll_popup_graphic_pane_ParamLimits

0xb32a,	// (0x000396fa) fep_hwr_aid_pane_ParamLimits

0xb7dd,	// (0x00039bad) aid_touch_sctrl_top_ParamLimits

0xb7ea,	// (0x00039bba) sctrl_sk_top_pane_g1_ParamLimits

0x79a1,	// (0x00035d71) sctrl_sk_top_pane_g2_ParamLimits

0xfd19,	// (0x0003e0e9) sctrl_sk_top_pane_g_ParamLimits

0xb7f7,	// (0x00039bc7) sctrl_sk_top_pane_t1_ParamLimits

0xb7dd,	// (0x00039bad) aid_touch_sctrl_bottom_ParamLimits

0xb7f7,	// (0x00039bc7) sctrl_sk_bottom_pane_t1_ParamLimits

0xdbc6,	// (0x0003bf96) aid_area_touch_clock

0xb9d5,	// (0x00039da5) aid_vkb2_area_top_pane_cell_ParamLimits

0xb9d5,	// (0x00039da5) aid_vkb2_area_top_pane_cell

0xbb20,	// (0x00039ef0) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xbb20,	// (0x00039ef0) aid_vkb2_area_bottom_pane_cell

0xe135,	// (0x0003c505) popup_char_count_window

0xe55c,	// (0x0003c92c) popup_char_count_window_g1

0xe565,	// (0x0003c935) popup_char_count_window_g2

0xe56e,	// (0x0003c93e) popup_char_count_window_g3

0x0002,

0xfde5,	// (0x0003e1b5) popup_char_count_window_g

0xe577,	// (0x0003c947) popup_char_count_window_t1

0xb89b,	// (0x00039c6b) popup_fep_char_preview_window_ParamLimits

0xb89b,	// (0x00039c6b) popup_fep_char_preview_window

0xb9f3,	// (0x00039dc3) vkb2_top_candi_pane_ParamLimits

0xb9f3,	// (0x00039dc3) vkb2_top_candi_pane

0xe585,	// (0x0003c955) cell_vkb2_top_candi_pane_ParamLimits

0xe585,	// (0x0003c955) cell_vkb2_top_candi_pane

0x600d,	// (0x000343dd) bg_popup_fep_char_preview_window_ParamLimits

0x600d,	// (0x000343dd) bg_popup_fep_char_preview_window

0xbe03,	// (0x0003a1d3) popup_fep_char_preview_window_t1_ParamLimits

0xbe03,	// (0x0003a1d3) popup_fep_char_preview_window_t1

0xe5d2,	// (0x0003c9a2) bg_popup_fep_char_preview_window_g1

0xe5da,	// (0x0003c9aa) bg_popup_fep_char_preview_window_g2

0xe5e2,	// (0x0003c9b2) bg_popup_fep_char_preview_window_g3

0xe5ea,	// (0x0003c9ba) bg_popup_fep_char_preview_window_g4

0xe5f2,	// (0x0003c9c2) bg_popup_fep_char_preview_window_g5

0xbe3d,	// (0x0003a20d) bg_popup_fep_char_preview_window_g6

0xe5fa,	// (0x0003c9ca) bg_popup_fep_char_preview_window_g7

0xe602,	// (0x0003c9d2) bg_popup_fep_char_preview_window_g8

0xe60a,	// (0x0003c9da) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdec,	// (0x0003e1bc) bg_popup_fep_char_preview_window_g

0x79a1,	// (0x00035d71) cell_vkb2_top_candi_pane_g1_ParamLimits

0x79a1,	// (0x00035d71) cell_vkb2_top_candi_pane_g1

0x7d81,	// (0x00036151) cell_vkb2_top_candi_pane_g2_ParamLimits

0x7d81,	// (0x00036151) cell_vkb2_top_candi_pane_g2

0x7da2,	// (0x00036172) cell_vkb2_top_candi_pane_g3_ParamLimits

0x7da2,	// (0x00036172) cell_vkb2_top_candi_pane_g3

0xbe45,	// (0x0003a215) cell_vkb2_top_candi_pane_g4_ParamLimits

0xbe45,	// (0x0003a215) cell_vkb2_top_candi_pane_g4

0xe34b,	// (0x0003c71b) cell_vkb2_top_candi_pane_g5_ParamLimits

0xe34b,	// (0x0003c71b) cell_vkb2_top_candi_pane_g5

0xda5a,	// (0x0003be2a) cell_vkb2_top_candi_pane_g6_ParamLimits

0xda5a,	// (0x0003be2a) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdff,	// (0x0003e1cf) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdff,	// (0x0003e1cf) cell_vkb2_top_candi_pane_g

0xbe66,	// (0x0003a236) cell_vkb2_top_candi_pane_t1

0xb082,	// (0x00039452) aid_size_touch_slider_mark_ParamLimits

0xb082,	// (0x00039452) aid_size_touch_slider_mark

0xe25e,	// (0x0003c62e) grid_graphic2_catg_pane_ParamLimits

0xe25e,	// (0x0003c62e) grid_graphic2_catg_pane

0xe2d8,	// (0x0003c6a8) popup_grid_graphic2_window_t1_ParamLimits

0xe2d8,	// (0x0003c6a8) popup_grid_graphic2_window_t1

0xe2ea,	// (0x0003c6ba) popup_grid_graphic2_window_t2_ParamLimits

0xe2ea,	// (0x0003c6ba) popup_grid_graphic2_window_t2

0x0001,

0xfdbf,	// (0x0003e18f) popup_grid_graphic2_window_t_ParamLimits

0xfdbf,	// (0x0003e18f) popup_grid_graphic2_window_t

0x4ada,	// (0x00032eaa) bg_button_pane_cp05_ParamLimits

0xe45c,	// (0x0003c82c) cell_graphic2_control_pane_g1_ParamLimits

0xe612,	// (0x0003c9e2) cell_graphic2_catg_pane_ParamLimits

0xe612,	// (0x0003c9e2) cell_graphic2_catg_pane

0x4469,	// (0x00032839) bg_button_pane_cp12

0xe624,	// (0x0003c9f4) cell_graphic2_catg_pane_g1

0xdb92,	// (0x0003bf62) cell_tb_ext_pane_t1_ParamLimits

0xbc3d,	// (0x0003a00d) vkb2_top_cell_right_narrow_pane_ParamLimits

0xbc3d,	// (0x0003a00d) vkb2_top_cell_right_narrow_pane

0xbc55,	// (0x0003a025) vkb2_top_cell_right_wide_pane_ParamLimits

0xbc55,	// (0x0003a025) vkb2_top_cell_right_wide_pane

0x7a07,	// (0x00035dd7) bg_vkb2_func_pane_ParamLimits

0x7a07,	// (0x00035dd7) bg_vkb2_func_pane

0xbcc6,	// (0x0003a096) vkb2_top_cell_left_pane_g1_ParamLimits

0x7a07,	// (0x00035dd7) bg_vkb2_fuc_pane_cp03_ParamLimits

0x7a07,	// (0x00035dd7) bg_vkb2_fuc_pane_cp03

0xbd24,	// (0x0003a0f4) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x5a66,	// (0x00033e36) bg_vkb2_func_pane_g1

0x5a5e,	// (0x00033e2e) bg_vkb2_func_pane_g2

0x5a6e,	// (0x00033e3e) bg_vkb2_func_pane_g3

0x5a76,	// (0x00033e46) bg_vkb2_func_pane_g4

0x5a7e,	// (0x00033e4e) bg_vkb2_func_pane_g5

0x5a86,	// (0x00033e56) bg_vkb2_func_pane_g6

0x5a96,	// (0x00033e66) bg_vkb2_func_pane_g7

0x5a8e,	// (0x00033e5e) bg_vkb2_func_pane_g8

0x5a56,	// (0x00033e26) bg_vkb2_func_pane_g9

0x0008,

0xfe0c,	// (0x0003e1dc) bg_vkb2_func_pane_g

0x7a07,	// (0x00035dd7) bg_vkb2_fuc_pane_cp01_ParamLimits

0x7a07,	// (0x00035dd7) bg_vkb2_fuc_pane_cp01

0xbcc6,	// (0x0003a096) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0xbcc6,	// (0x0003a096) vkb2_top_cell_right_wide_pane_g1

0x7a07,	// (0x00035dd7) bg_vkb2_fuc_pane_cp02_ParamLimits

0x7a07,	// (0x00035dd7) bg_vkb2_fuc_pane_cp02

0xbd24,	// (0x0003a0f4) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0xbd24,	// (0x0003a0f4) vkb2_top_cell_right_narrow_pane_g1

0xd7c8,	// (0x0003bb98) aid_touch_area_decrease_ParamLimits

0xd7c8,	// (0x0003bb98) aid_touch_area_decrease

0xd7e6,	// (0x0003bbb6) aid_touch_area_increase_ParamLimits

0xd7e6,	// (0x0003bbb6) aid_touch_area_increase

0xd7f2,	// (0x0003bbc2) aid_touch_area_mute_ParamLimits

0xd7f2,	// (0x0003bbc2) aid_touch_area_mute

0xd816,	// (0x0003bbe6) aid_touch_area_slider_ParamLimits

0xd816,	// (0x0003bbe6) aid_touch_area_slider

0xd902,	// (0x0003bcd2) popup_slider_window_g4_ParamLimits

0xd902,	// (0x0003bcd2) popup_slider_window_g4

0xd90e,	// (0x0003bcde) popup_slider_window_g5_ParamLimits

0xd90e,	// (0x0003bcde) popup_slider_window_g5

0xd930,	// (0x0003bd00) popup_slider_window_g6_ParamLimits

0xd930,	// (0x0003bd00) popup_slider_window_g6

0xd970,	// (0x0003bd40) popup_slider_window_t2_ParamLimits

0xd970,	// (0x0003bd40) popup_slider_window_t2

0x0001,

0xfd0d,	// (0x0003e0dd) popup_slider_window_t_ParamLimits

0xfd0d,	// (0x0003e0dd) popup_slider_window_t

0xd988,	// (0x0003bd58) slider_pane_ParamLimits

0xd988,	// (0x0003bd58) slider_pane

0xe62d,	// (0x0003c9fd) slider_pane_g1_ParamLimits

0xe62d,	// (0x0003c9fd) slider_pane_g1

0xe641,	// (0x0003ca11) slider_pane_g2_ParamLimits

0xe641,	// (0x0003ca11) slider_pane_g2

0xe657,	// (0x0003ca27) slider_pane_g3_ParamLimits

0xe657,	// (0x0003ca27) slider_pane_g3

0x0003,

0xfe1f,	// (0x0003e1ef) slider_pane_g_ParamLimits

0xfe1f,	// (0x0003e1ef) slider_pane_g

0xbfe7,	// (0x0003a3b7) popup_tb_float_extension_window_ParamLimits

0xbfe7,	// (0x0003a3b7) popup_tb_float_extension_window

0xe683,	// (0x0003ca53) aid_size_cell_tb_float_ext

0x4469,	// (0x00032839) bg_popup_sub_window_cp28

0xe68f,	// (0x0003ca5f) grid_tb_float_ext_pane

0xe699,	// (0x0003ca69) cell_tb_float_ext_pane_ParamLimits

0xe699,	// (0x0003ca69) cell_tb_float_ext_pane

0xe6b3,	// (0x0003ca83) cell_tb_float_ext_pane_g1

0xe6bc,	// (0x0003ca8c) grid_highlight_pane_cp12

0xb45d,	// (0x0003982d) cell_last_hwr_side_pane_ParamLimits

0xb45d,	// (0x0003982d) cell_last_hwr_side_pane

0x77fa,	// (0x00035bca) cell_last_hwr_side_pane_g1

0xe6c5,	// (0x0003ca95) cell_last_hwr_side_pane_g2

0x0001,

0xfe28,	// (0x0003e1f8) cell_last_hwr_side_pane_g

0xbbec,	// (0x00039fbc) vkb2_area_bottom_space_btn_pane_ParamLimits

0xbbec,	// (0x00039fbc) vkb2_area_bottom_space_btn_pane

0x79a1,	// (0x00035d71) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xe1ea,	// (0x0003c5ba) vkb2_cell_t_keypad_pane_t1_ParamLimits

0xbe66,	// (0x0003a236) cell_vkb2_top_candi_pane_t1_ParamLimits

0xbe85,	// (0x0003a255) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0xbe85,	// (0x0003a255) vkb2_area_bottom_space_btn_pane_g1

0xbebf,	// (0x0003a28f) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0xbebf,	// (0x0003a28f) vkb2_area_bottom_space_btn_pane_g2

0xbef5,	// (0x0003a2c5) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0xbef5,	// (0x0003a2c5) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe2d,	// (0x0003e1fd) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe2d,	// (0x0003e1fd) vkb2_area_bottom_space_btn_pane_g

0xb3d1,	// (0x000397a1) cel_fep_hwr_func_pane_ParamLimits

0xb3d1,	// (0x000397a1) cel_fep_hwr_func_pane

0xb40d,	// (0x000397dd) cell_hwr_side_button_pane_ParamLimits

0xb40d,	// (0x000397dd) cell_hwr_side_button_pane

0xdbc6,	// (0x0003bf96) aid_area_touch_clock_ParamLimits

0x460c,	// (0x000329dc) bg_uniindi_top_pane_ParamLimits

0xdbd8,	// (0x0003bfa8) uniindi_top_pane_g1_ParamLimits

0xdbee,	// (0x0003bfbe) uniindi_top_pane_g2_ParamLimits

0xdbfa,	// (0x0003bfca) uniindi_top_pane_g3_ParamLimits

0xdc0b,	// (0x0003bfdb) uniindi_top_pane_g4_ParamLimits

0xfd45,	// (0x0003e115) uniindi_top_pane_g_ParamLimits

0xdc18,	// (0x0003bfe8) uniindi_top_pane_t1_ParamLimits

0x460c,	// (0x000329dc) bg_vkb2_func_pane_cp01_ParamLimits

0x460c,	// (0x000329dc) bg_vkb2_func_pane_cp01

0xe6ce,	// (0x0003ca9e) cel_fep_hwr_func_pane_g1_ParamLimits

0xe6ce,	// (0x0003ca9e) cel_fep_hwr_func_pane_g1

0x460c,	// (0x000329dc) bg_vkb2_func_pane_cp02_ParamLimits

0x460c,	// (0x000329dc) bg_vkb2_func_pane_cp02

0xe6ce,	// (0x0003ca9e) cell_hwr_side_button_pane_g1_ParamLimits

0xe6ce,	// (0x0003ca9e) cell_hwr_side_button_pane_g1

0x596c,	// (0x00033d3c) status_pane_g4_ParamLimits

0x596c,	// (0x00033d3c) status_pane_g4

0x5986,	// (0x00033d56) status_pane_t1

0x767f,	// (0x00035a4f) form2_midp_gauge_slider_cont_pane

0x7687,	// (0x00035a57) form2_midp_gauge_slider_pane_t1_ParamLimits

0xca76,	// (0x0003ae46) form2_midp_gauge_slider_pane_t2_ParamLimits

0xca88,	// (0x0003ae58) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb11,	// (0x0003dee1) form2_midp_gauge_slider_pane_t_ParamLimits

0x7699,	// (0x00035a69) form2_midp_slider_pane_ParamLimits

0xb85b,	// (0x00039c2b) aid_size_cell_func_vkb2_ParamLimits

0xb85b,	// (0x00039c2b) aid_size_cell_func_vkb2

0xe66f,	// (0x0003ca3f) slider_pane_g4_ParamLimits

0xe66f,	// (0x0003ca3f) slider_pane_g4

0xbf3f,	// (0x0003a30f) form2_midp_gauge_slider_pane_t2_cp01

0xbf4d,	// (0x0003a31d) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xbf4d,	// (0x0003a31d) form2_midp_gauge_slider_pane_t3_cp01

0xbf6a,	// (0x0003a33a) form2_midp_slider_pane_cp01

0x4469,	// (0x00032839) navi_smil_pane

0xe6fe,	// (0x0003cace) navi_smil_pane_g1

0xe706,	// (0x0003cad6) navi_smil_pane_t1

0xe6dc,	// (0x0003caac) form2_midp_slider_pane_g1

0xe6e5,	// (0x0003cab5) form2_midp_slider_pane_g2

0xe6ed,	// (0x0003cabd) form2_midp_slider_pane_g3

0xe6dc,	// (0x0003caac) form2_midp_slider_pane_g4

0xeeaa,	// (0x0003d27a) form2_midp_slider_pane_g5

0x0004,

0xfe36,	// (0x0003e206) form2_midp_slider_pane_g

0xbf2f,	// (0x0003a2ff) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0xbf2f,	// (0x0003a2ff) vkb2_area_bottom_space_btn_pane_g4

0xc14e,	// (0x0003a51e) lc0_navi_pane_ParamLimits

0xc14e,	// (0x0003a51e) lc0_navi_pane

0xc1c4,	// (0x0003a594) lc0_stat_indi_pane_ParamLimits

0xc1c4,	// (0x0003a594) lc0_stat_indi_pane

0xc1db,	// (0x0003a5ab) ls0_title_pane_ParamLimits

0xc1db,	// (0x0003a5ab) ls0_title_pane

0x4ada,	// (0x00032eaa) bg_popup_sub_pane_cp14_ParamLimits

0xdbad,	// (0x0003bf7d) list_uniindi_pane_ParamLimits

0xdbb9,	// (0x0003bf89) uniindi_top_pane_ParamLimits

0xdc55,	// (0x0003c025) list_single_uniindi_pane_g1_ParamLimits

0xdc68,	// (0x0003c038) list_single_uniindi_pane_t1_ParamLimits

0xbf73,	// (0x0003a343) lc0_stat_clock_pane_ParamLimits

0xbf73,	// (0x0003a343) lc0_stat_clock_pane

0xeeb3,	// (0x0003d283) lc0_stat_indi_pane_g1_ParamLimits

0xeeb3,	// (0x0003d283) lc0_stat_indi_pane_g1

0xeec0,	// (0x0003d290) lc0_stat_indi_pane_g2_ParamLimits

0xeec0,	// (0x0003d290) lc0_stat_indi_pane_g2

0x0001,

0x02db,	// (0x0002e6ab) lc0_stat_indi_pane_g_ParamLimits

0x02db,	// (0x0002e6ab) lc0_stat_indi_pane_g

0xbf80,	// (0x0003a350) lc0_uni_indicator_pane_ParamLimits

0xbf80,	// (0x0003a350) lc0_uni_indicator_pane

0xe714,	// (0x0003cae4) ls0_title_pane_g1_ParamLimits

0xe714,	// (0x0003cae4) ls0_title_pane_g1

0xeecd,	// (0x0003d29d) ls0_title_pane_t1_ParamLimits

0xeecd,	// (0x0003d29d) ls0_title_pane_t1

0xbf8d,	// (0x0003a35d) lc0_uni_indicator_pane_g1_ParamLimits

0xbf8d,	// (0x0003a35d) lc0_uni_indicator_pane_g1

0xe728,	// (0x0003caf8) lc0_stat_clock_pane_t1

0x4469,	// (0x00032839) main_ai5_pane

0xe736,	// (0x0003cb06) ai5_sk_pane_ParamLimits

0xe736,	// (0x0003cb06) ai5_sk_pane

0xef03,	// (0x0003d2d3) cell_ai5_widget_pane_ParamLimits

0xef03,	// (0x0003d2d3) cell_ai5_widget_pane

0xe743,	// (0x0003cb13) aid_size_cell_widget_grid

0xe757,	// (0x0003cb27) bg_ai5_widget_pane_ParamLimits

0xe757,	// (0x0003cb27) bg_ai5_widget_pane

0xefa1,	// (0x0003d371) cell_ai5_widget_pane_g2

0xefb1,	// (0x0003d381) cell_ai5_widget_pane_g3

0xefc5,	// (0x0003d395) cell_ai5_widget_pane_g4

0xefd1,	// (0x0003d3a1) cell_ai5_widget_pane_g5

0xefdd,	// (0x0003d3ad) cell_ai5_widget_pane_g6

0xefe9,	// (0x0003d3b9) cell_ai5_widget_pane_g7

0xf031,	// (0x0003d401) cell_ai5_widget_pane_t1_ParamLimits

0xf031,	// (0x0003d401) cell_ai5_widget_pane_t1

0xf04e,	// (0x0003d41e) cell_ai5_widget_pane_t2_ParamLimits

0xf04e,	// (0x0003d41e) cell_ai5_widget_pane_t2

0xf066,	// (0x0003d436) cell_ai5_widget_pane_t3_ParamLimits

0xf066,	// (0x0003d436) cell_ai5_widget_pane_t3

0xf07e,	// (0x0003d44e) cell_ai5_widget_pane_t4_ParamLimits

0xf07e,	// (0x0003d44e) cell_ai5_widget_pane_t4

0xf098,	// (0x0003d468) cell_ai5_widget_pane_t5_ParamLimits

0xf098,	// (0x0003d468) cell_ai5_widget_pane_t5

0xe763,	// (0x0003cb33) cell_ai5_widget_pane_t6_ParamLimits

0xe763,	// (0x0003cb33) cell_ai5_widget_pane_t6

0xe775,	// (0x0003cb45) cell_ai5_widget_pane_t7_ParamLimits

0xe775,	// (0x0003cb45) cell_ai5_widget_pane_t7

0xf0b7,	// (0x0003d487) cell_ai5_widget_pane_t8_ParamLimits

0xf0b7,	// (0x0003d487) cell_ai5_widget_pane_t8

0x0009,

0xfe41,	// (0x0003e211) cell_ai5_widget_pane_t_ParamLimits

0xfe41,	// (0x0003e211) cell_ai5_widget_pane_t

0xf0ff,	// (0x0003d4cf) grid_ai5_widget_pane

0x4ada,	// (0x00032eaa) highlight_cell_ai5_widget_pane_ParamLimits

0x4ada,	// (0x00032eaa) highlight_cell_ai5_widget_pane

0xf117,	// (0x0003d4e7) ai5_sk_left_pane

0xf121,	// (0x0003d4f1) ai5_sk_middle_pane

0xf12b,	// (0x0003d4fb) ai5_sk_right_pane

0xe78e,	// (0x0003cb5e) bg_ai5_widget_pane_g1_ParamLimits

0xe78e,	// (0x0003cb5e) bg_ai5_widget_pane_g1

0xe79a,	// (0x0003cb6a) bg_ai5_widget_pane_g2_ParamLimits

0xe79a,	// (0x0003cb6a) bg_ai5_widget_pane_g2

0xe7a6,	// (0x0003cb76) bg_ai5_widget_pane_g3_ParamLimits

0xe7a6,	// (0x0003cb76) bg_ai5_widget_pane_g3

0xe7b2,	// (0x0003cb82) bg_ai5_widget_pane_g4_ParamLimits

0xe7b2,	// (0x0003cb82) bg_ai5_widget_pane_g4

0xe7be,	// (0x0003cb8e) bg_ai5_widget_pane_g5_ParamLimits

0xe7be,	// (0x0003cb8e) bg_ai5_widget_pane_g5

0xe7ca,	// (0x0003cb9a) bg_ai5_widget_pane_g6_ParamLimits

0xe7ca,	// (0x0003cb9a) bg_ai5_widget_pane_g6

0xe7d6,	// (0x0003cba6) bg_ai5_widget_pane_g7_ParamLimits

0xe7d6,	// (0x0003cba6) bg_ai5_widget_pane_g7

0xe7e2,	// (0x0003cbb2) bg_ai5_widget_pane_g8_ParamLimits

0xe7e2,	// (0x0003cbb2) bg_ai5_widget_pane_g8

0xe7ee,	// (0x0003cbbe) bg_ai5_widget_pane_g9_ParamLimits

0xe7ee,	// (0x0003cbbe) bg_ai5_widget_pane_g9

0x0008,

0xfe56,	// (0x0003e226) bg_ai5_widget_pane_g_ParamLimits

0xfe56,	// (0x0003e226) bg_ai5_widget_pane_g

0xe821,	// (0x0003cbf1) cell_shortcut_ai5_widget_pane_ParamLimits

0xe821,	// (0x0003cbf1) cell_shortcut_ai5_widget_pane

0x4515,	// (0x000328e5) bg_cell_shortcut_ai5_widget_pane

0xe832,	// (0x0003cc02) cell_grid_ai5_widget_pane_g1

0xe83b,	// (0x0003cc0b) highlight_cell_shortcut_ai5_widget_pane

0x5a5e,	// (0x00033e2e) ai5_sk_left_pane_g1

0xe843,	// (0x0003cc13) ai5_sk_left_pane_g2

0xe84b,	// (0x0003cc1b) ai5_sk_left_pane_g3

0xe853,	// (0x0003cc23) ai5_sk_left_pane_g4

0x0003,

0xfe69,	// (0x0003e239) ai5_sk_left_pane_g

0xe85b,	// (0x0003cc2b) ai5_sk_left_pane_t1

0x5a66,	// (0x00033e36) ai5_sk_right_pane_g1

0xe869,	// (0x0003cc39) ai5_sk_right_pane_g2

0xe871,	// (0x0003cc41) ai5_sk_right_pane_g3

0xe879,	// (0x0003cc49) ai5_sk_right_pane_g4

0x0003,

0xfe72,	// (0x0003e242) ai5_sk_right_pane_g

0xe881,	// (0x0003cc51) ai5_sk_right_pane_t1

0x5a66,	// (0x00033e36) ai5_sk_middle_pane_g1

0x5a5e,	// (0x00033e2e) ai5_sk_middle_pane_g2

0x5a7e,	// (0x00033e4e) ai5_sk_middle_pane_g3

0xe871,	// (0x0003cc41) ai5_sk_middle_pane_g4

0xe84b,	// (0x0003cc1b) ai5_sk_middle_pane_g5

0xe88f,	// (0x0003cc5f) ai5_sk_middle_pane_g6

0xf135,	// (0x0003d505) ai5_sk_middle_pane_g7

0x0006,

0xfe7b,	// (0x0003e24b) ai5_sk_middle_pane_g

0xc097,	// (0x0003a467) aid_touch_area_size_lc0_ParamLimits

0xc097,	// (0x0003a467) aid_touch_area_size_lc0

0xb55c,	// (0x0003992c) cell_hwr_candidate_pane_t1_ParamLimits

0x588e,	// (0x00033c5e) aid_touch_navi_pane

0xc2b1,	// (0x0003a681) status_dt_navi_pane_ParamLimits

0xc2b1,	// (0x0003a681) status_dt_navi_pane

0xc2be,	// (0x0003a68e) status_dt_sta_pane_ParamLimits

0xc2be,	// (0x0003a68e) status_dt_sta_pane

0xf13d,	// (0x0003d50d) dt_sta_controll_pane

0xf14a,	// (0x0003d51a) dt_sta_indi_pane

0xf15b,	// (0x0003d52b) dt_sta_title_pane

0x460c,	// (0x000329dc) bg_dt_sta_indi_pane_ParamLimits

0x460c,	// (0x000329dc) bg_dt_sta_indi_pane

0xe897,	// (0x0003cc67) dt_sta_battery_pane

0xf16e,	// (0x0003d53e) dt_sta_indi_pane_g1

0xf177,	// (0x0003d547) dt_sta_indi_pane_g2

0xf180,	// (0x0003d550) dt_sta_indi_pane_g3

0x0002,

0x033e,	// (0x0002e70e) dt_sta_indi_pane_g

0xf189,	// (0x0003d559) dt_sta_signal_pane

0x4ada,	// (0x00032eaa) bg_dt_sta_title_pane_ParamLimits

0x4ada,	// (0x00032eaa) bg_dt_sta_title_pane

0xf192,	// (0x0003d562) dt_sta_title_pane_g1

0xf19a,	// (0x0003d56a) dt_sta_title_pane_t1_ParamLimits

0xf19a,	// (0x0003d56a) dt_sta_title_pane_t1

0x4469,	// (0x00032839) bg_dt_sta_control_pane

0xf1af,	// (0x0003d57f) dt_sta_controll_pane_g1

0xf1b8,	// (0x0003d588) bg_dt_sta_title_pane_g1

0xf1c1,	// (0x0003d591) bg_dt_sta_title_pane_g2

0xf1ca,	// (0x0003d59a) bg_dt_sta_title_pane_g3

0x0002,

0x0345,	// (0x0002e715) bg_dt_sta_title_pane_g

0x77fa,	// (0x00035bca) bg_dt_sta_indi_pane_g1

0xe89f,	// (0x0003cc6f) dt_sta_signal_pane_g1

0xe8a7,	// (0x0003cc77) dt_sta_signal_pane_g2

0x0001,

0xfe8a,	// (0x0003e25a) dt_sta_signal_pane_g

0xe8af,	// (0x0003cc7f) dt_sta_battery_pane_g1

0xe8b8,	// (0x0003cc88) dt_sta_battery_pane_t1

0x77fa,	// (0x00035bca) bg_dt_sta_control_pane_g1

0x5099,	// (0x00033469) fep_china_uni_eep_pane

0x50a1,	// (0x00033471) fep_china_uni_entry_pane_ParamLimits

0x50b1,	// (0x00033481) popup_fep_china_uni_window_g1_ParamLimits

0x50c1,	// (0x00033491) popup_fep_china_uni_window_g2_ParamLimits

0x50c1,	// (0x00033491) popup_fep_china_uni_window_g2

0x0001,

0xf762,	// (0x0003db32) popup_fep_china_uni_window_g_ParamLimits

0xf762,	// (0x0003db32) popup_fep_china_uni_window_g

0xe8c7,	// (0x0003cc97) fep_china_uni_eep_pane_g1

0xe8cf,	// (0x0003cc9f) fep_china_uni_eep_pane_t1

0xe6f5,	// (0x0003cac5) aid_touch_area_size_smil_player

0x593f,	// (0x00033d0f) lc0_clock_pane

0x597a,	// (0x00033d4a) status_pane_g5_ParamLimits

0x597a,	// (0x00033d4a) status_pane_g5

0xaa9a,	// (0x00038e6a) popup_keymap_window

0x5958,	// (0x00033d28) status_icon_pane

0xefb1,	// (0x0003d381) cell_ai5_widget_pane_g3_ParamLimits

0xefc5,	// (0x0003d395) cell_ai5_widget_pane_g4_ParamLimits

0xefd1,	// (0x0003d3a1) cell_ai5_widget_pane_g5_ParamLimits

0xeff5,	// (0x0003d3c5) cell_ai5_widget_pane_g8_ParamLimits

0xeff5,	// (0x0003d3c5) cell_ai5_widget_pane_g8

0xf009,	// (0x0003d3d9) cell_ai5_widget_pane_g9_ParamLimits

0xf009,	// (0x0003d3d9) cell_ai5_widget_pane_g9

0xf01d,	// (0x0003d3ed) cell_ai5_widget_pane_g10_ParamLimits

0xf01d,	// (0x0003d3ed) cell_ai5_widget_pane_g10

0xe8de,	// (0x0003ccae) status_icon_pane_g1

0x4469,	// (0x00032839) bg_popup_sub_pane_cp13

0xe8e6,	// (0x0003ccb6) popup_keymap_window_t1

0xa84d,	// (0x00038c1d) control_pane_g6_ParamLimits

0xa84d,	// (0x00038c1d) control_pane_g6

0xa85a,	// (0x00038c2a) control_pane_g7_ParamLimits

0xa85a,	// (0x00038c2a) control_pane_g7

0xa867,	// (0x00038c37) control_pane_g8_ParamLimits

0xa867,	// (0x00038c37) control_pane_g8

0xf13d,	// (0x0003d50d) dt_sta_controll_pane_ParamLimits

0xf14a,	// (0x0003d51a) dt_sta_indi_pane_ParamLimits

0xf15b,	// (0x0003d52b) dt_sta_title_pane_ParamLimits

0x4a1c,	// (0x00032dec) aid_size_touch_scroll_bar_cale

0x9afe,	// (0x00037ece) popup_discreet_window_ParamLimits

0x9afe,	// (0x00037ece) popup_discreet_window

0x9b86,	// (0x00037f56) popup_sk_window

0x600d,	// (0x000343dd) bg_popup_sub_pane_cp28_ParamLimits

0x600d,	// (0x000343dd) bg_popup_sub_pane_cp28

0xe8f4,	// (0x0003ccc4) popup_discreet_window_g1_ParamLimits

0xe8f4,	// (0x0003ccc4) popup_discreet_window_g1

0xe914,	// (0x0003cce4) popup_discreet_window_t1_ParamLimits

0xe914,	// (0x0003cce4) popup_discreet_window_t1

0xe932,	// (0x0003cd02) popup_discreet_window_t2_ParamLimits

0xe932,	// (0x0003cd02) popup_discreet_window_t2

0x0002,

0xfe8f,	// (0x0003e25f) popup_discreet_window_t_ParamLimits

0xfe8f,	// (0x0003e25f) popup_discreet_window_t

0xbfa1,	// (0x0003a371) popup_sk_window_g1

0xbfab,	// (0x0003a37b) popup_sk_window_g2

0x0001,

0xfe96,	// (0x0003e266) popup_sk_window_g

0xe984,	// (0x0003cd54) popup_sk_window_t1

0xe992,	// (0x0003cd62) popup_sk_window_t1_copy1

0xefa1,	// (0x0003d371) cell_ai5_widget_pane_g2_ParamLimits

0xf0c9,	// (0x0003d499) cell_ai5_widget_pane_t9_ParamLimits

0xf0c9,	// (0x0003d499) cell_ai5_widget_pane_t9

0x4469,	// (0x00032839) main_fep_fshwr2_pane

0xf1d3,	// (0x0003d5a3) aid_fshwr2_btn_pane

0xf1db,	// (0x0003d5ab) aid_fshwr2_syb_pane

0xf1e3,	// (0x0003d5b3) aid_fshwr2_txt_pane

0xf1eb,	// (0x0003d5bb) fshwr2_func_candi_pane

0xf1f7,	// (0x0003d5c7) fshwr2_hwr_syb_pane

0xf203,	// (0x0003d5d3) fshwr2_icf_pane

0x4469,	// (0x00032839) fshwr2_icf_bg_pane

0xf20d,	// (0x0003d5dd) fshwr2_icf_pane_t1_ParamLimits

0xf20d,	// (0x0003d5dd) fshwr2_icf_pane_t1

0x77fa,	// (0x00035bca) fshwr2_func_candi_pane_g1

0xe9b4,	// (0x0003cd84) fshwr2_func_candi_row_pane_ParamLimits

0xe9b4,	// (0x0003cd84) fshwr2_func_candi_row_pane

0xf224,	// (0x0003d5f4) cell_fshwr2_syb_pane_ParamLimits

0xf224,	// (0x0003d5f4) cell_fshwr2_syb_pane

0x79a1,	// (0x00035d71) fshwr2_hwr_syb_pane_g1_ParamLimits

0x79a1,	// (0x00035d71) fshwr2_hwr_syb_pane_g1

0x4469,	// (0x00032839) bg_popup_call_pane_cp01

0xe9c5,	// (0x0003cd95) fshwr2_func_candi_cell_pane_ParamLimits

0xe9c5,	// (0x0003cd95) fshwr2_func_candi_cell_pane

0xe9f6,	// (0x0003cdc6) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xe9f6,	// (0x0003cdc6) fshwr2_func_candi_cell_bg_pane

0xea10,	// (0x0003cde0) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xea10,	// (0x0003cde0) fshwr2_func_candi_cell_pane_g1

0xea38,	// (0x0003ce08) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xea38,	// (0x0003ce08) fshwr2_func_candi_cell_pane_t1

0x4469,	// (0x00032839) bg_button_pane_cp08

0x5508,	// (0x000338d8) cell_fshwr2_syb_bg_pane

0xf23e,	// (0x0003d60e) cell_fshwr2_syb_bg_pane_g1

0xf246,	// (0x0003d616) cell_fshwr2_syb_bg_pane_t1

0x4ada,	// (0x00032eaa) main_tmo_pane

0xc5b0,	// (0x0003a980) uni_indicator_pane_g1_ParamLimits

0xc5c5,	// (0x0003a995) uni_indicator_pane_g2_ParamLimits

0xc5db,	// (0x0003a9ab) uni_indicator_pane_g3_ParamLimits

0x6a2d,	// (0x00034dfd) uni_indicator_pane_g4_ParamLimits

0x6a2d,	// (0x00034dfd) uni_indicator_pane_g4

0x6a41,	// (0x00034e11) uni_indicator_pane_g5_ParamLimits

0x6a41,	// (0x00034e11) uni_indicator_pane_g5

0x6a55,	// (0x00034e25) uni_indicator_pane_g6_ParamLimits

0x6a55,	// (0x00034e25) uni_indicator_pane_g6

0xf95f,	// (0x0003dd2f) uni_indicator_pane_g_ParamLimits

0xd7a4,	// (0x0003bb74) popup_tmo_note_window_ParamLimits

0xd7a4,	// (0x0003bb74) popup_tmo_note_window

0x4469,	// (0x00032839) fshwr2_bg_pane

0xea29,	// (0x0003cdf9) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xea29,	// (0x0003cdf9) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe9b,	// (0x0003e26b) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe9b,	// (0x0003e26b) fshwr2_func_candi_cell_pane_g

0x77fa,	// (0x00035bca) bg_popup_window_pane_cp01

0xea4b,	// (0x0003ce1b) bg_popup_window_pane_g1_cp01

0xea54,	// (0x0003ce24) bg_popup_window_pane_cp22_ParamLimits

0xea54,	// (0x0003ce24) bg_popup_window_pane_cp22

0xea62,	// (0x0003ce32) listscroll_tmo_link_pane_ParamLimits

0xea62,	// (0x0003ce32) listscroll_tmo_link_pane

0xeaa2,	// (0x0003ce72) popup_tmo_note_window_g1_ParamLimits

0xeaa2,	// (0x0003ce72) popup_tmo_note_window_g1

0xeaaf,	// (0x0003ce7f) tmo_note_info_pane_ParamLimits

0xeaaf,	// (0x0003ce7f) tmo_note_info_pane

0xf255,	// (0x0003d625) list_tmo_note_info_pane_g1_ParamLimits

0xf255,	// (0x0003d625) list_tmo_note_info_pane_g1

0xeac9,	// (0x0003ce99) list_tmo_note_info_pane_g2_ParamLimits

0xeac9,	// (0x0003ce99) list_tmo_note_info_pane_g2

0x0001,

0xfea0,	// (0x0003e270) list_tmo_note_info_pane_g_ParamLimits

0xfea0,	// (0x0003e270) list_tmo_note_info_pane_g

0xeae5,	// (0x0003ceb5) list_tmo_note_info_text_pane_ParamLimits

0xeae5,	// (0x0003ceb5) list_tmo_note_info_text_pane

0xeb27,	// (0x0003cef7) list_tmo_link_pane

0xeb34,	// (0x0003cf04) scroll_pane_cp20

0xeb41,	// (0x0003cf11) list_single_tmo_link_pane_ParamLimits

0xeb41,	// (0x0003cf11) list_single_tmo_link_pane

0xeb51,	// (0x0003cf21) list_single_tmo_link_pane_t1

0xeb5f,	// (0x0003cf2f) list_tmo_note_info_text_pane_t1_ParamLimits

0xeb5f,	// (0x0003cf2f) list_tmo_note_info_text_pane_t1

0xa070,	// (0x00038440) aid_size_touch_scroll_bar_cp01_ParamLimits

0xa070,	// (0x00038440) aid_size_touch_scroll_bar_cp01

0x9091,	// (0x00037461) aid_size_touch_slider_marker

0x9b6e,	// (0x00037f3e) popup_settings_window_ParamLimits

0x9b6e,	// (0x00037f3e) popup_settings_window

0x9244,	// (0x00037614) popup_candi_list_indi_window

0x588e,	// (0x00033c5e) aid_touch_navi_pane_ParamLimits

0xb7b1,	// (0x00039b81) rs_clock_indi_pane

0xb7ba,	// (0x00039b8a) sctrl_sk_bottom_pane_ParamLimits

0xb7cb,	// (0x00039b9b) sctrl_sk_top_pane_ParamLimits

0xb8b5,	// (0x00039c85) popup_fep_tooltip_window

0xe743,	// (0x0003cb13) aid_size_cell_widget_grid_ParamLimits

0xef95,	// (0x0003d365) cell_ai5_widget_pane_g1_ParamLimits

0xef95,	// (0x0003d365) cell_ai5_widget_pane_g1

0xefdd,	// (0x0003d3ad) cell_ai5_widget_pane_g6_ParamLimits

0xefe9,	// (0x0003d3b9) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0x02e0,	// (0x0002e6b0) cell_ai5_widget_pane_g_ParamLimits

0x02e0,	// (0x0002e6b0) cell_ai5_widget_pane_g

0xf0ed,	// (0x0003d4bd) cell_ai5_widget_pane_t10_ParamLimits

0xf0ed,	// (0x0003d4bd) cell_ai5_widget_pane_t10

0xf0ff,	// (0x0003d4cf) grid_ai5_widget_pane_ParamLimits

0xe7fa,	// (0x0003cbca) cell_contacts_ai5_widget_pane_ParamLimits

0xe7fa,	// (0x0003cbca) cell_contacts_ai5_widget_pane

0xe947,	// (0x0003cd17) popup_discreet_window_t3_ParamLimits

0xe947,	// (0x0003cd17) popup_discreet_window_t3

0xe9a0,	// (0x0003cd70) popup_fshwr2_char_preview_window_ParamLimits

0xe9a0,	// (0x0003cd70) popup_fshwr2_char_preview_window

0xf26c,	// (0x0003d63c) tmo_note_info_pane_t1

0xf281,	// (0x0003d651) tmo_note_info_pane_t2

0xf296,	// (0x0003d666) tmo_note_info_pane_t3

0xeb03,	// (0x0003ced3) tmo_note_info_pane_t4

0xeb15,	// (0x0003cee5) tmo_note_info_pane_t5

0x0004,

0xfea5,	// (0x0003e275) tmo_note_info_pane_t

0xeb27,	// (0x0003cef7) list_tmo_link_pane_ParamLimits

0xeb34,	// (0x0003cf04) scroll_pane_cp20_ParamLimits

0x4469,	// (0x00032839) bg_popup_fep_char_preview_window_cp01

0xeb78,	// (0x0003cf48) popup_fshwr2_char_preview_window_t1

0xeb86,	// (0x0003cf56) popup_candi_list_indi_window_g1

0xeb8f,	// (0x0003cf5f) bg_cell_contacts_ai5_widget_pane

0xeb9b,	// (0x0003cf6b) cell_contacts_ai5_widget_pane_g1

0xebaf,	// (0x0003cf7f) cell_contacts_ai5_widget_pane_g2

0xebbe,	// (0x0003cf8e) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeb0,	// (0x0003e280) cell_contacts_ai5_widget_pane_g

0xebd1,	// (0x0003cfa1) cell_contacts_ai5_widget_pane_t1

0x4ada,	// (0x00032eaa) highlight_cell_shortcut_ai5_widget_pane_cp01

0xf310,	// (0x0003d6e0) settings_container_pane

0x5508,	// (0x000338d8) listscroll_set_pane_copy1

0x7217,	// (0x000355e7) scroll_pane_cp121_copy1

0xebe6,	// (0x0003cfb6) set_content_pane_copy1

0xf31c,	// (0x0003d6ec) aid_height_set_list_copy1_ParamLimits

0xf31c,	// (0x0003d6ec) aid_height_set_list_copy1

0x65e7,	// (0x000349b7) aid_size_parent_copy1_ParamLimits

0x65e7,	// (0x000349b7) aid_size_parent_copy1

0xf328,	// (0x0003d6f8) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf328,	// (0x0003d6f8) button_value_adjust_pane_cp6_copy1

0x4c3b,	// (0x0003300b) list_highlight_pane_cp2_copy1_ParamLimits

0x4c3b,	// (0x0003300b) list_highlight_pane_cp2_copy1

0xf33c,	// (0x0003d70c) list_set_pane_copy1_ParamLimits

0xf33c,	// (0x0003d70c) list_set_pane_copy1

0xf2ab,	// (0x0003d67b) main_pane_set_t1_copy1_ParamLimits

0xf2ab,	// (0x0003d67b) main_pane_set_t1_copy1

0xf2e5,	// (0x0003d6b5) main_pane_set_t2_copy1_ParamLimits

0xf2e5,	// (0x0003d6b5) main_pane_set_t2_copy1

0xf3e9,	// (0x0003d7b9) main_pane_set_t3_copy1

0xf3f7,	// (0x0003d7c7) main_pane_set_t4_copy1

0xf304,	// (0x0003d6d4) set_content_pane_g1_copy1_ParamLimits

0xf304,	// (0x0003d6d4) set_content_pane_g1_copy1

0xf405,	// (0x0003d7d5) setting_code_pane_copy1

0xebee,	// (0x0003cfbe) setting_slider_graphic_pane_copy1

0xebee,	// (0x0003cfbe) setting_slider_pane_copy1

0xebf8,	// (0x0003cfc8) setting_text_pane_copy1

0xec02,	// (0x0003cfd2) setting_volume_pane_copy1

0xf40f,	// (0x0003d7df) settings_code_pane_cp2_copy1

0xf417,	// (0x0003d7e7) settings_code_pane_cp_copy1_ParamLimits

0xf417,	// (0x0003d7e7) settings_code_pane_cp_copy1

0xf42b,	// (0x0003d7fb) volume_set_pane_copy1

0xf433,	// (0x0003d803) volume_set_pane_g10_copy1

0xf43b,	// (0x0003d80b) volume_set_pane_g1_copy1

0xf443,	// (0x0003d813) volume_set_pane_g2_copy1

0xf44b,	// (0x0003d81b) volume_set_pane_g3_copy1

0xf453,	// (0x0003d823) volume_set_pane_g4_copy1

0xf45b,	// (0x0003d82b) volume_set_pane_g5_copy1

0xf463,	// (0x0003d833) volume_set_pane_g6_copy1

0xf46b,	// (0x0003d83b) volume_set_pane_g7_copy1

0xf473,	// (0x0003d843) volume_set_pane_g8_copy1

0xf47b,	// (0x0003d84b) volume_set_pane_g9_copy1

0x44d9,	// (0x000328a9) bg_set_opt_pane_cp_copy1_ParamLimits

0x44d9,	// (0x000328a9) bg_set_opt_pane_cp_copy1

0xec0b,	// (0x0003cfdb) setting_slider_pane_t1_copy1_ParamLimits

0xec0b,	// (0x0003cfdb) setting_slider_pane_t1_copy1

0xf483,	// (0x0003d853) setting_slider_pane_t2_copy1_ParamLimits

0xf483,	// (0x0003d853) setting_slider_pane_t2_copy1

0xf49d,	// (0x0003d86d) setting_slider_pane_t3_copy1_ParamLimits

0xf49d,	// (0x0003d86d) setting_slider_pane_t3_copy1

0xf4b5,	// (0x0003d885) slider_set_pane_copy1_ParamLimits

0xf4b5,	// (0x0003d885) slider_set_pane_copy1

0x4b4a,	// (0x00032f1a) set_opt_bg_pane_g1_copy2

0x4b52,	// (0x00032f22) set_opt_bg_pane_g2_copy2

0xec29,	// (0x0003cff9) set_opt_bg_pane_g3_copy2

0x4b62,	// (0x00032f32) set_opt_bg_pane_g4_copy2

0x4b6a,	// (0x00032f3a) set_opt_bg_pane_g5_copy2

0x4b72,	// (0x00032f42) set_opt_bg_pane_g6_copy2

0xf4cb,	// (0x0003d89b) set_opt_bg_pane_g7_copy2

0xec33,	// (0x0003d003) set_opt_bg_pane_g8_copy2

0xec3d,	// (0x0003d00d) set_opt_bg_pane_g9_copy2

0xbfb5,	// (0x0003a385) aid_size_touch_slider_mark_copy1_ParamLimits

0xbfb5,	// (0x0003a385) aid_size_touch_slider_mark_copy1

0xec47,	// (0x0003d017) slider_set_pane_g1_copy1

0xbfc9,	// (0x0003a399) slider_set_pane_g2_copy1

0xb0a2,	// (0x00039472) slider_set_pane_g3_copy1_ParamLimits

0xb0a2,	// (0x00039472) slider_set_pane_g3_copy1

0xb0b6,	// (0x00039486) slider_set_pane_g4_copy1_ParamLimits

0xb0b6,	// (0x00039486) slider_set_pane_g4_copy1

0xb0ce,	// (0x0003949e) slider_set_pane_g5_copy1_ParamLimits

0xb0ce,	// (0x0003949e) slider_set_pane_g5_copy1

0xb0a2,	// (0x00039472) slider_set_pane_g6_copy1_ParamLimits

0xb0a2,	// (0x00039472) slider_set_pane_g6_copy1

0xbfd1,	// (0x0003a3a1) slider_set_pane_g7_copy1_ParamLimits

0xbfd1,	// (0x0003a3a1) slider_set_pane_g7_copy1

0x447d,	// (0x0003284d) bg_set_opt_pane_cp2_copy1

0xec50,	// (0x0003d020) setting_slider_graphic_pane_g1_copy1

0xf4d3,	// (0x0003d8a3) setting_slider_graphic_pane_t1_copy1

0xf4e3,	// (0x0003d8b3) setting_slider_graphic_pane_t2_copy1

0xf4f3,	// (0x0003d8c3) slider_set_pane_cp_copy1

0xec61,	// (0x0003d031) input_focus_pane_cp1_copy1

0xec6a,	// (0x0003d03a) list_set_text_pane_copy1

0xec72,	// (0x0003d042) setting_text_pane_g1_copy1

0x9859,	// (0x00037c29) set_text_pane_t1_copy1

0xec61,	// (0x0003d031) input_focus_pane_cp2_copy1

0xec72,	// (0x0003d042) setting_code_pane_g1_copy1

0xf4fb,	// (0x0003d8cb) setting_code_pane_t1_copy1

0xf509,	// (0x0003d8d9) list_set_graphic_pane_copy1

0x447d,	// (0x0003284d) bg_set_opt_pane_cp4_copy1

0xa637,	// (0x00038a07) list_set_graphic_pane_g1_copy1_ParamLimits

0xa637,	// (0x00038a07) list_set_graphic_pane_g1_copy1

0xf51b,	// (0x0003d8eb) list_set_graphic_pane_g2_copy1

0xa64f,	// (0x00038a1f) list_set_graphic_pane_t1_copy1_ParamLimits

0xa64f,	// (0x00038a1f) list_set_graphic_pane_t1_copy1

0x77fa,	// (0x00035bca) rs_clock_indi_pane_g1

0xec7b,	// (0x0003d04b) rs_clock_indi_pane_t1

0xe897,	// (0x0003cc67) rs_indi_pane

0xec89,	// (0x0003d059) rs_indi_pane_g1

0xec92,	// (0x0003d062) rs_indi_pane_g2

0xec9b,	// (0x0003d06b) rs_indi_pane_g3

0x0002,

0xfeb7,	// (0x0003e287) rs_indi_pane_g

0x5508,	// (0x000338d8) bg_popup_preview_window_pane_cp03

0xeca4,	// (0x0003d074) popup_fep_tooltip_window_t1

0xcf45,	// (0x0003b315) popup_note2_window_g2_ParamLimits

0xcf45,	// (0x0003b315) popup_note2_window_g2

0x0001,

0xfc7d,	// (0x0003e04d) popup_note2_window_g_ParamLimits

0xfc7d,	// (0x0003e04d) popup_note2_window_g

0xd440,	// (0x0003b810) bg_popup_sub_pane_cp11_ParamLimits

0xd44d,	// (0x0003b81d) cell_ai3_links_pane_g1_ParamLimits

0xd464,	// (0x0003b834) cell_ai3_links_pane_t1

0x9859,	// (0x00037c29) set_text_pane_t1_copy1_ParamLimits

0x5419,	// (0x000337e9) cell_graphic_popup_pane_cp2_ParamLimits

0x5419,	// (0x000337e9) cell_graphic_popup_pane_cp2

0xecb2,	// (0x0003d082) cell_graphic_popup_pane_g1_cp2

0x482f,	// (0x00032bff) cell_graphic_popup_pane_g2_cp2

0xecba,	// (0x0003d08a) cell_graphic_popup_pane_g3_cp2

0xecc2,	// (0x0003d092) cell_graphic_popup_pane_t2_cp2

0x4840,	// (0x00032c10) grid_highlight_pane_cp3_cp2

0x4de5,	// (0x000331b5) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x4ada,	// (0x00032eaa) main_tmo_pane_ParamLimits

0xd798,	// (0x0003bb68) popup_tmo_big_image_note_window

0xef85,	// (0x0003d355) cell_ai5_widget_list_pane

0xef8d,	// (0x0003d35d) cell_ai5_widget_lrg_icon_pane

0xf26c,	// (0x0003d63c) tmo_note_info_pane_t1_ParamLimits

0xf281,	// (0x0003d651) tmo_note_info_pane_t2_ParamLimits

0xf296,	// (0x0003d666) tmo_note_info_pane_t3_ParamLimits

0xeb03,	// (0x0003ced3) tmo_note_info_pane_t4_ParamLimits

0xeb15,	// (0x0003cee5) tmo_note_info_pane_t5_ParamLimits

0xfea5,	// (0x0003e275) tmo_note_info_pane_t_ParamLimits

0xf310,	// (0x0003d6e0) settings_container_pane_ParamLimits

0xec59,	// (0x0003d029) indicator_popup_pane_cp5

0xec59,	// (0x0003d029) indicator_popup_pane_cp6

0xf509,	// (0x0003d8d9) list_set_graphic_pane_copy1_ParamLimits

0x4469,	// (0x00032839) bg_popup_window_pane_cp23

0xecd0,	// (0x0003d0a0) popup_tmo_big_image_note_window_g1

0xecda,	// (0x0003d0aa) popup_tmo_big_image_note_window_t1

0xecea,	// (0x0003d0ba) popup_tmo_big_image_note_window_t2

0xecfa,	// (0x0003d0ca) popup_tmo_big_image_note_window_t3

0x0002,

0xfebe,	// (0x0003e28e) popup_tmo_big_image_note_window_t

0xf523,	// (0x0003d8f3) cell_ai5_widget_lrg_icon_pane_g1

0xf52b,	// (0x0003d8fb) cell_ai5_widget_lrg_icon_pane_t1

0xf539,	// (0x0003d909) cell_ai5_widget_list_row_pane_ParamLimits

0xf539,	// (0x0003d909) cell_ai5_widget_list_row_pane

0xf552,	// (0x0003d922) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf552,	// (0x0003d922) cell_ai5_widget_list_row_pane_g1

0xf55f,	// (0x0003d92f) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf55f,	// (0x0003d92f) cell_ai5_widget_list_row_pane_t1

0xf577,	// (0x0003d947) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf577,	// (0x0003d947) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfec5,	// (0x0003e295) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfec5,	// (0x0003e295) cell_ai5_widget_list_row_pane_t

0x4469,	// (0x00032839) main_fep_vtchi_ss_pane

0xed0a,	// (0x0003d0da) popup_fep_char_pre_window

0xed12,	// (0x0003d0e2) popup_fep_ituss_window

0xed1d,	// (0x0003d0ed) popup_fep_vkbss_window

0xed26,	// (0x0003d0f6) grid_vkbss_keypad_pane_ParamLimits

0xed26,	// (0x0003d0f6) grid_vkbss_keypad_pane

0xed36,	// (0x0003d106) ituss_keypad_pane

0xed3e,	// (0x0003d10e) aid_vkbss_key_offset_ParamLimits

0xed3e,	// (0x0003d10e) aid_vkbss_key_offset

0xed4d,	// (0x0003d11d) cell_vkbss_key_pane_ParamLimits

0xed4d,	// (0x0003d11d) cell_vkbss_key_pane

0xed63,	// (0x0003d133) bg_cell_vkbss_key_g1_ParamLimits

0xed63,	// (0x0003d133) bg_cell_vkbss_key_g1

0xed6f,	// (0x0003d13f) cell_vkbss_key_3p_pane_ParamLimits

0xed6f,	// (0x0003d13f) cell_vkbss_key_3p_pane

0xed89,	// (0x0003d159) cell_vkbss_key_g1_ParamLimits

0xed89,	// (0x0003d159) cell_vkbss_key_g1

0xeda3,	// (0x0003d173) cell_vkbss_key_t1_ParamLimits

0xeda3,	// (0x0003d173) cell_vkbss_key_t1

0xedce,	// (0x0003d19e) cell_ituss_key_pane_ParamLimits

0xedce,	// (0x0003d19e) cell_ituss_key_pane

0xeddd,	// (0x0003d1ad) bg_cell_ituss_key_g1_ParamLimits

0xeddd,	// (0x0003d1ad) bg_cell_ituss_key_g1

0xede9,	// (0x0003d1b9) cell_ituss_key_pane_g1_ParamLimits

0xede9,	// (0x0003d1b9) cell_ituss_key_pane_g1

0xedf5,	// (0x0003d1c5) cell_ituss_key_pane_g2_ParamLimits

0xedf5,	// (0x0003d1c5) cell_ituss_key_pane_g2

0x0001,

0xfeca,	// (0x0003e29a) cell_ituss_key_pane_g_ParamLimits

0xfeca,	// (0x0003e29a) cell_ituss_key_pane_g

0xee08,	// (0x0003d1d8) cell_ituss_key_t1_ParamLimits

0xee08,	// (0x0003d1d8) cell_ituss_key_t1

0xee26,	// (0x0003d1f6) cell_ituss_key_t2_ParamLimits

0xee26,	// (0x0003d1f6) cell_ituss_key_t2

0xee45,	// (0x0003d215) cell_ituss_key_t3_ParamLimits

0xee45,	// (0x0003d215) cell_ituss_key_t3

0xee64,	// (0x0003d234) cell_ituss_key_t4_ParamLimits

0xee64,	// (0x0003d234) cell_ituss_key_t4

0x0003,

0xfecf,	// (0x0003e29f) cell_ituss_key_t_ParamLimits

0xfecf,	// (0x0003e29f) cell_ituss_key_t

0xee83,	// (0x0003d253) cell_vkbss_key_3p_pane_g1

0xee8b,	// (0x0003d25b) cell_vkbss_key_3p_pane_g2

0xee93,	// (0x0003d263) cell_vkbss_key_3p_pane_g3

0x0002,

0xfed8,	// (0x0003e2a8) cell_vkbss_key_3p_pane_g

0x4469,	// (0x00032839) bg_popup_fep_char_preview_window_cp02

0xee9b,	// (0x0003d26b) popup_fep_char_pre_window_t1

0xef7b,	// (0x0003d34b) main_ai5_sk_pane

0xeb8f,	// (0x0003cf5f) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xeb9b,	// (0x0003cf6b) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xebaf,	// (0x0003cf7f) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xebbe,	// (0x0003cf8e) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeb0,	// (0x0003e280) cell_contacts_ai5_widget_pane_g_ParamLimits

0xebd1,	// (0x0003cfa1) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x4ada,	// (0x00032eaa) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf589,	// (0x0003d959) main_ai5_sk_pane_g1
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

} // end of namespace AknLayoutScalable_Elaf_php_av_qhd_prt_tch_Large

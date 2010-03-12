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

#include "aknlayoutscalable_abrw_php_av_qhd_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_php_av_qhd_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0002aab1 };

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
0x748a,	// (0x00031f3b) Screen

0x749e,	// (0x00031f4f) application_window_ParamLimits

0x749e,	// (0x00031f4f) application_window

0x74b8,	// (0x00031f69) screen_g1

0x49ac,	// (0x0002f45d) area_bottom_pane_ParamLimits

0x49ac,	// (0x0002f45d) area_bottom_pane

0x4a6c,	// (0x0002f51d) area_top_pane_ParamLimits

0x4a6c,	// (0x0002f51d) area_top_pane

0x4b0a,	// (0x0002f5bb) main_pane_ParamLimits

0x4b0a,	// (0x0002f5bb) main_pane

0x74c2,	// (0x00031f73) misc_graphics

0x94ec,	// (0x00033f9d) battery_pane_ParamLimits

0x94ec,	// (0x00033f9d) battery_pane

0xa231,	// (0x00034ce2) bg_status_flat_pane_g8

0xa239,	// (0x00034cea) bg_status_flat_pane_g9

0x95ae,	// (0x0003405f) context_pane_ParamLimits

0x95ae,	// (0x0003405f) context_pane

0x96c4,	// (0x00034175) navi_pane_ParamLimits

0x96c4,	// (0x00034175) navi_pane

0x9742,	// (0x000341f3) signal_pane_ParamLimits

0x9742,	// (0x000341f3) signal_pane

0x0008,

0xf87f,	// (0x0003a330) bg_status_flat_pane_g

0x97af,	// (0x00034260) status_pane_g1_ParamLimits

0x97af,	// (0x00034260) status_pane_g1

0x97bb,	// (0x0003426c) status_pane_g2_ParamLimits

0x97bb,	// (0x0003426c) status_pane_g2

0x97c7,	// (0x00034278) status_pane_g3_ParamLimits

0x97c7,	// (0x00034278) status_pane_g3

0x0004,

0xf7a6,	// (0x0003a257) status_pane_g_ParamLimits

0xf7a6,	// (0x0003a257) status_pane_g

0x97fb,	// (0x000342ac) title_pane_ParamLimits

0x97fb,	// (0x000342ac) title_pane

0x9838,	// (0x000342e9) uni_indicator_pane_ParamLimits

0x9838,	// (0x000342e9) uni_indicator_pane

0x93f2,	// (0x00033ea3) bg_list_pane_ParamLimits

0x93f2,	// (0x00033ea3) bg_list_pane

0x5b94,	// (0x00030645) find_pane

0x9412,	// (0x00033ec3) listscroll_app_pane_ParamLimits

0x9412,	// (0x00033ec3) listscroll_app_pane

0x941e,	// (0x00033ecf) listscroll_form_pane

0x48e0,	// (0x0002f391) listscroll_gen_pane_ParamLimits

0x48e0,	// (0x0002f391) listscroll_gen_pane

0x941e,	// (0x00033ecf) listscroll_set_pane

0x8682,	// (0x00033133) main_idle_act_pane

0x90f8,	// (0x00033ba9) main_idle_trad_pane

0x90f8,	// (0x00033ba9) main_list_empty_pane

0x9438,	// (0x00033ee9) main_midp_pane

0x9444,	// (0x00033ef5) main_pane_g1_ParamLimits

0x9444,	// (0x00033ef5) main_pane_g1

0x5baa,	// (0x0003065b) popup_ai_message_window_ParamLimits

0x5baa,	// (0x0003065b) popup_ai_message_window

0x5c58,	// (0x00030709) popup_fep_china_uni_window_ParamLimits

0x5c58,	// (0x00030709) popup_fep_china_uni_window

0x5cb4,	// (0x00030765) popup_fep_japan_candidate_window_ParamLimits

0x5cb4,	// (0x00030765) popup_fep_japan_candidate_window

0x5cd4,	// (0x00030785) popup_fep_japan_predictive_window_ParamLimits

0x5cd4,	// (0x00030785) popup_fep_japan_predictive_window

0x5d04,	// (0x000307b5) popup_find_window

0x5d11,	// (0x000307c2) popup_grid_graphic_window_ParamLimits

0x5d11,	// (0x000307c2) popup_grid_graphic_window

0x5d39,	// (0x000307ea) popup_large_graphic_colour_window

0x5d5f,	// (0x00030810) popup_menu_window_ParamLimits

0x5d5f,	// (0x00030810) popup_menu_window

0x5f17,	// (0x000309c8) popup_note_image_window

0x5f03,	// (0x000309b4) popup_note_wait_window_ParamLimits

0x5f03,	// (0x000309b4) popup_note_wait_window

0x5f03,	// (0x000309b4) popup_note_window_ParamLimits

0x5f03,	// (0x000309b4) popup_note_window

0x5f6d,	// (0x00030a1e) popup_query_code_window_ParamLimits

0x5f6d,	// (0x00030a1e) popup_query_code_window

0x5f81,	// (0x00030a32) popup_query_data_code_window_ParamLimits

0x5f81,	// (0x00030a32) popup_query_data_code_window

0x5f9e,	// (0x00030a4f) popup_query_data_window_ParamLimits

0x5f9e,	// (0x00030a4f) popup_query_data_window

0x5fba,	// (0x00030a6b) popup_query_sat_info_window_ParamLimits

0x5fba,	// (0x00030a6b) popup_query_sat_info_window

0x5ff3,	// (0x00030aa4) popup_snote_single_graphic_window_ParamLimits

0x5ff3,	// (0x00030aa4) popup_snote_single_graphic_window

0x5ff3,	// (0x00030aa4) popup_snote_single_text_window_ParamLimits

0x5ff3,	// (0x00030aa4) popup_snote_single_text_window

0x6008,	// (0x00030ab9) popup_sub_window_general

0x6138,	// (0x00030be9) popup_window_general_ParamLimits

0x6138,	// (0x00030be9) popup_window_general

0x9452,	// (0x00033f03) power_save_pane

0x5a34,	// (0x000304e5) control_pane_g1_ParamLimits

0x5a34,	// (0x000304e5) control_pane_g1

0x5a5b,	// (0x0003050c) control_pane_g2_ParamLimits

0x5a5b,	// (0x0003050c) control_pane_g2

0x93b5,	// (0x00033e66) control_pane_g3_ParamLimits

0x93b5,	// (0x00033e66) control_pane_g3

0x0007,

0xf78e,	// (0x0003a23f) control_pane_g_ParamLimits

0xf78e,	// (0x0003a23f) control_pane_g

0x5aa1,	// (0x00030552) control_pane_t1_ParamLimits

0x5aa1,	// (0x00030552) control_pane_t1

0x5aed,	// (0x0003059e) control_pane_t2_ParamLimits

0x5aed,	// (0x0003059e) control_pane_t2

0x0002,

0xf79f,	// (0x0003a250) control_pane_t_ParamLimits

0xf79f,	// (0x0003a250) control_pane_t

0x92d6,	// (0x00033d87) navi_navi_volume_pane_cp1

0x92df,	// (0x00033d90) status_small_icon_pane

0x92e7,	// (0x00033d98) status_small_pane_g1_ParamLimits

0x92e7,	// (0x00033d98) status_small_pane_g1

0x931b,	// (0x00033dcc) status_small_pane_g2_ParamLimits

0x931b,	// (0x00033dcc) status_small_pane_g2

0x9327,	// (0x00033dd8) status_small_pane_g3_ParamLimits

0x9327,	// (0x00033dd8) status_small_pane_g3

0x9333,	// (0x00033de4) status_small_pane_g4_ParamLimits

0x9333,	// (0x00033de4) status_small_pane_g4

0x933f,	// (0x00033df0) status_small_pane_g5_ParamLimits

0x933f,	// (0x00033df0) status_small_pane_g5

0x934e,	// (0x00033dff) status_small_pane_g6_ParamLimits

0x934e,	// (0x00033dff) status_small_pane_g6

0x0007,

0xf77d,	// (0x0003a22e) status_small_pane_g_ParamLimits

0xf77d,	// (0x0003a22e) status_small_pane_g

0x937e,	// (0x00033e2f) status_small_pane_t1

0x93a1,	// (0x00033e52) status_small_wait_pane_ParamLimits

0x93a1,	// (0x00033e52) status_small_wait_pane

0x8b7b,	// (0x0003362c) aid_levels_signal_ParamLimits

0x8b7b,	// (0x0003362c) aid_levels_signal

0x8b8a,	// (0x0003363b) signal_pane_g1_ParamLimits

0x8b8a,	// (0x0003363b) signal_pane_g1

0x8b9f,	// (0x00033650) signal_pane_g2_ParamLimits

0x8b9f,	// (0x00033650) signal_pane_g2

0x0003,

0xf70e,	// (0x0003a1bf) signal_pane_g_ParamLimits

0xf70e,	// (0x0003a1bf) signal_pane_g

0x8bd7,	// (0x00033688) context_pane_g1

0x74cc,	// (0x00031f7d) title_pane_g1

0x7502,	// (0x00031fb3) title_pane_t1

0x756a,	// (0x0003201b) title_pane_t2

0x7590,	// (0x00032041) title_pane_t3

0x0002,

0xf55d,	// (0x0003a00e) title_pane_t

0x9850,	// (0x00034301) aid_levels_battery_ParamLimits

0x9850,	// (0x00034301) aid_levels_battery

0x9861,	// (0x00034312) battery_pane_g1_ParamLimits

0x9861,	// (0x00034312) battery_pane_g1

0x9877,	// (0x00034328) battery_pane_g2_ParamLimits

0x9877,	// (0x00034328) battery_pane_g2

0x0001,

0xf7b1,	// (0x0003a262) battery_pane_g_ParamLimits

0xf7b1,	// (0x0003a262) battery_pane_g

0xab67,	// (0x00035618) uni_indicator_pane_g1

0xab7c,	// (0x0003562d) uni_indicator_pane_g2

0xab92,	// (0x00035643) uni_indicator_pane_g3

0x0005,

0xf927,	// (0x0003a3d8) uni_indicator_pane_g

0x8f6a,	// (0x00033a1b) navi_icon_pane_ParamLimits

0x8f6a,	// (0x00033a1b) navi_icon_pane

0x8eb3,	// (0x00033964) navi_midp_pane

0x8f86,	// (0x00033a37) navi_navi_pane

0x8f90,	// (0x00033a41) navi_text_pane_ParamLimits

0x8f90,	// (0x00033a41) navi_text_pane

0x74b8,	// (0x00031f69) status_small_wait_pane_g1

0x8043,	// (0x00032af4) status_small_wait_pane_g2

0x0001,

0xf922,	// (0x0003a3d3) status_small_wait_pane_g

0xa88c,	// (0x0003533d) navi_navi_icon_text_pane

0xa894,	// (0x00035345) navi_navi_pane_g1_ParamLimits

0xa894,	// (0x00035345) navi_navi_pane_g1

0xa8a6,	// (0x00035357) navi_navi_pane_g2_ParamLimits

0xa8a6,	// (0x00035357) navi_navi_pane_g2

0x0001,

0xf8f0,	// (0x0003a3a1) navi_navi_pane_g_ParamLimits

0xf8f0,	// (0x0003a3a1) navi_navi_pane_g

0xa8b8,	// (0x00035369) navi_navi_tabs_pane

0xa8c1,	// (0x00035372) navi_navi_text_pane

0xa88c,	// (0x0003533d) navi_navi_volume_pane

0xa868,	// (0x00035319) navi_text_pane_t1

0xa85c,	// (0x0003530d) navi_icon_pane_g1

0xa7af,	// (0x00035260) navi_navi_text_pane_t1

0x64a3,	// (0x00030f54) navi_navi_volume_pane_g1

0x64ab,	// (0x00030f5c) volume_small_pane

0xa715,	// (0x000351c6) navi_navi_icon_text_pane_g1

0xa71d,	// (0x000351ce) navi_navi_icon_text_pane_t1

0x8f86,	// (0x00033a37) navi_tabs_2_long_pane

0x8f86,	// (0x00033a37) navi_tabs_2_pane

0x8f86,	// (0x00033a37) navi_tabs_3_long_pane

0x8f86,	// (0x00033a37) navi_tabs_3_pane

0x8f86,	// (0x00033a37) navi_tabs_4_pane

0x6483,	// (0x00030f34) tabs_2_active_pane_ParamLimits

0x6483,	// (0x00030f34) tabs_2_active_pane

0x6493,	// (0x00030f44) tabs_2_passive_pane_ParamLimits

0x6493,	// (0x00030f44) tabs_2_passive_pane

0x6451,	// (0x00030f02) tabs_3_active_pane_ParamLimits

0x6451,	// (0x00030f02) tabs_3_active_pane

0x6461,	// (0x00030f12) tabs_3_passive_pane_ParamLimits

0x6461,	// (0x00030f12) tabs_3_passive_pane

0x6472,	// (0x00030f23) tabs_3_passive_pane_cp_ParamLimits

0x6472,	// (0x00030f23) tabs_3_passive_pane_cp

0x640d,	// (0x00030ebe) tabs_4_active_pane_ParamLimits

0x640d,	// (0x00030ebe) tabs_4_active_pane

0x641e,	// (0x00030ecf) tabs_4_passive_pane_ParamLimits

0x641e,	// (0x00030ecf) tabs_4_passive_pane

0x642f,	// (0x00030ee0) tabs_4_passive_pane_cp_ParamLimits

0x642f,	// (0x00030ee0) tabs_4_passive_pane_cp

0x6440,	// (0x00030ef1) tabs_4_passive_pane_cp2_ParamLimits

0x6440,	// (0x00030ef1) tabs_4_passive_pane_cp2

0x63e9,	// (0x00030e9a) tabs_2_long_active_pane_ParamLimits

0x63e9,	// (0x00030e9a) tabs_2_long_active_pane

0x63fb,	// (0x00030eac) tabs_2_long_passive_pane_ParamLimits

0x63fb,	// (0x00030eac) tabs_2_long_passive_pane

0x63aa,	// (0x00030e5b) tabs_3_long_active_pane_ParamLimits

0x63aa,	// (0x00030e5b) tabs_3_long_active_pane

0x63bd,	// (0x00030e6e) tabs_3_long_passive_pane_ParamLimits

0x63bd,	// (0x00030e6e) tabs_3_long_passive_pane

0x63d6,	// (0x00030e87) tabs_3_long_passive_pane_cp_ParamLimits

0x63d6,	// (0x00030e87) tabs_3_long_passive_pane_cp

0x6350,	// (0x00030e01) volume_small_pane_g1

0x6359,	// (0x00030e0a) volume_small_pane_g2

0x6362,	// (0x00030e13) volume_small_pane_g3

0x636b,	// (0x00030e1c) volume_small_pane_g4

0x6374,	// (0x00030e25) volume_small_pane_g5

0x637d,	// (0x00030e2e) volume_small_pane_g6

0x6386,	// (0x00030e37) volume_small_pane_g7

0x638f,	// (0x00030e40) volume_small_pane_g8

0x6398,	// (0x00030e49) volume_small_pane_g9

0x63a1,	// (0x00030e52) volume_small_pane_g10

0x0009,

0xf8bc,	// (0x0003a36d) volume_small_pane_g

0x75a2,	// (0x00032053) bg_active_tab_pane_cp2_ParamLimits

0x75a2,	// (0x00032053) bg_active_tab_pane_cp2

0x75b0,	// (0x00032061) tabs_3_active_pane_g1

0x75b8,	// (0x00032069) tabs_3_active_pane_t1

0x75a2,	// (0x00032053) bg_passive_tab_pane_cp2_ParamLimits

0x75a2,	// (0x00032053) bg_passive_tab_pane_cp2

0x75b0,	// (0x00032061) tabs_3_passive_pane_g1

0x75b8,	// (0x00032069) tabs_3_passive_pane_t1

0x75a2,	// (0x00032053) bg_active_tab_pane_cp3_ParamLimits

0x75a2,	// (0x00032053) bg_active_tab_pane_cp3

0x75ca,	// (0x0003207b) tabs_4_active_pane_g1

0x75d2,	// (0x00032083) tabs_4_active_pane_t1

0x75a2,	// (0x00032053) bg_passive_tab_pane_cp3_ParamLimits

0x75a2,	// (0x00032053) bg_passive_tab_pane_cp3

0x75ca,	// (0x0003207b) tabs_4_1_passive_pane_g1

0x75d2,	// (0x00032083) tabs_4_1_passive_pane_t1

0x9438,	// (0x00033ee9) list_highlight_pane_cp2

0xadf0,	// (0x000358a1) list_set_pane_ParamLimits

0xadf0,	// (0x000358a1) list_set_pane

0xae96,	// (0x00035947) main_pane_set_t1_ParamLimits

0xae96,	// (0x00035947) main_pane_set_t1

0xaeb6,	// (0x00035967) main_pane_set_t2_ParamLimits

0xaeb6,	// (0x00035967) main_pane_set_t2

0xaeca,	// (0x0003597b) main_pane_set_t3_ParamLimits

0xaeca,	// (0x0003597b) main_pane_set_t3

0xaedc,	// (0x0003598d) main_pane_set_t4_ParamLimits

0xaedc,	// (0x0003598d) main_pane_set_t4

0x0003,

0xf98c,	// (0x0003a43d) main_pane_set_t_ParamLimits

0xf98c,	// (0x0003a43d) main_pane_set_t

0xaeee,	// (0x0003599f) setting_code_pane

0xaefa,	// (0x000359ab) setting_slider_graphic_pane

0xaefa,	// (0x000359ab) setting_slider_pane

0xaefa,	// (0x000359ab) setting_text_pane

0xaefa,	// (0x000359ab) setting_volume_pane

0x4d4f,	// (0x0002f800) volume_set_pane

0x75a2,	// (0x00032053) bg_set_opt_pane_cp

0x4d57,	// (0x0002f808) setting_slider_pane_t1

0x4d70,	// (0x0002f821) setting_slider_pane_t2

0x4d8a,	// (0x0002f83b) setting_slider_pane_t3

0x0002,

0xf564,	// (0x0003a015) setting_slider_pane_t

0x4da2,	// (0x0002f853) slider_set_pane

0x74c2,	// (0x00031f73) bg_set_opt_pane_cp2

0x75e4,	// (0x00032095) setting_slider_graphic_pane_g1

0x4db8,	// (0x0002f869) setting_slider_graphic_pane_t1

0x4dc8,	// (0x0002f879) setting_slider_graphic_pane_t2

0x0001,

0xf56b,	// (0x0003a01c) setting_slider_graphic_pane_t

0x4dd8,	// (0x0002f889) slider_set_pane_cp

0x74c2,	// (0x00031f73) input_focus_pane_cp1

0xadaf,	// (0x00035860) list_set_text_pane

0x74b8,	// (0x00031f69) setting_text_pane_g1

0x74c2,	// (0x00031f73) input_focus_pane_cp2

0x74b8,	// (0x00031f69) setting_code_pane_g1

0x75ed,	// (0x0003209e) setting_code_pane_t1

0x4de0,	// (0x0002f891) set_text_pane_t1_ParamLimits

0x4de0,	// (0x0002f891) set_text_pane_t1

0x84f9,	// (0x00032faa) set_opt_bg_pane_g1

0x8501,	// (0x00032fb2) set_opt_bg_pane_g2

0xad89,	// (0x0003583a) set_opt_bg_pane_g3

0x8511,	// (0x00032fc2) set_opt_bg_pane_g4

0x8519,	// (0x00032fca) set_opt_bg_pane_g5

0x8521,	// (0x00032fd2) set_opt_bg_pane_g6

0xad93,	// (0x00035844) set_opt_bg_pane_g7

0xad9b,	// (0x0003584c) set_opt_bg_pane_g8

0xada5,	// (0x00035856) set_opt_bg_pane_g9

0x0008,

0xf979,	// (0x0003a42a) set_opt_bg_pane_g

0xad7c,	// (0x0003582d) slider_set_pane_g1

0x6540,	// (0x00030ff1) slider_set_pane_g2

0x0006,

0xf96a,	// (0x0003a41b) slider_set_pane_g

0x64b4,	// (0x00030f65) volume_set_pane_g1

0x64bc,	// (0x00030f6d) volume_set_pane_g2

0x64c4,	// (0x00030f75) volume_set_pane_g3

0x64cc,	// (0x00030f7d) volume_set_pane_g4

0x64d4,	// (0x00030f85) volume_set_pane_g5

0x64dc,	// (0x00030f8d) volume_set_pane_g6

0x64e4,	// (0x00030f95) volume_set_pane_g7

0x64ec,	// (0x00030f9d) volume_set_pane_g8

0x64f4,	// (0x00030fa5) volume_set_pane_g9

0x64fc,	// (0x00030fad) volume_set_pane_g10

0x0009,

0xf942,	// (0x0003a3f3) volume_set_pane_g

0x75fb,	// (0x000320ac) indicator_pane_ParamLimits

0x75fb,	// (0x000320ac) indicator_pane

0x7607,	// (0x000320b8) main_idle_pane_g2_ParamLimits

0x7607,	// (0x000320b8) main_idle_pane_g2

0x762f,	// (0x000320e0) main_pane_idle_g1_ParamLimits

0x762f,	// (0x000320e0) main_pane_idle_g1

0x763c,	// (0x000320ed) popup_clock_digital_analogue_window_ParamLimits

0x763c,	// (0x000320ed) popup_clock_digital_analogue_window

0x7653,	// (0x00032104) soft_indicator_pane_ParamLimits

0x7653,	// (0x00032104) soft_indicator_pane

0x765f,	// (0x00032110) wallpaper_pane_ParamLimits

0x765f,	// (0x00032110) wallpaper_pane

0x74b8,	// (0x00031f69) wallpaper_pane_g1

0x7673,	// (0x00032124) indicator_pane_g1_ParamLimits

0x7673,	// (0x00032124) indicator_pane_g1

0xb189,	// (0x00035c3a) navi_navi_icon_text_pane_srt_g1

0x768e,	// (0x0003213f) soft_indicator_pane_t1

0x76a8,	// (0x00032159) aid_ps_area_pane

0x76b9,	// (0x0003216a) aid_ps_clock_pane

0x76c7,	// (0x00032178) aid_ps_indicator_pane

0x76d3,	// (0x00032184) indicator_ps_pane_ParamLimits

0x76d3,	// (0x00032184) indicator_ps_pane

0x76e2,	// (0x00032193) power_save_pane_g1_ParamLimits

0x76e2,	// (0x00032193) power_save_pane_g1

0x76ee,	// (0x0003219f) power_save_pane_g2_ParamLimits

0x76ee,	// (0x0003219f) power_save_pane_g2

0x4960,	// (0x0002f411) aid_navinavi_width_pane

0x76a8,	// (0x00032159) aid_ps_area_pane_ParamLimits

0x0001,

0xf570,	// (0x0003a021) power_save_pane_g_ParamLimits

0xf570,	// (0x0003a021) power_save_pane_g

0x76fc,	// (0x000321ad) power_save_pane_t1_ParamLimits

0x76fc,	// (0x000321ad) power_save_pane_t1

0x76b9,	// (0x0003216a) aid_ps_clock_pane_ParamLimits

0x76c7,	// (0x00032178) aid_ps_indicator_pane_ParamLimits

0x770e,	// (0x000321bf) power_save_pane_t4_ParamLimits

0x770e,	// (0x000321bf) power_save_pane_t4

0x0001,

0xf575,	// (0x0003a026) power_save_pane_t_ParamLimits

0xf575,	// (0x0003a026) power_save_pane_t

0x7738,	// (0x000321e9) power_save_t3_ParamLimits

0x7738,	// (0x000321e9) power_save_t3

0x7723,	// (0x000321d4) power_save_t2_ParamLimits

0x7723,	// (0x000321d4) power_save_t2

0x774d,	// (0x000321fe) indicator_ps_pane_g1

0x7756,	// (0x00032207) ai_gene_pane_ParamLimits

0x7756,	// (0x00032207) ai_gene_pane

0x7762,	// (0x00032213) ai_links_pane_ParamLimits

0x7762,	// (0x00032213) ai_links_pane

0x776e,	// (0x0003221f) indicator_pane_cp1_ParamLimits

0x776e,	// (0x0003221f) indicator_pane_cp1

0x777a,	// (0x0003222b) main_pane_idle_g1_cp_ParamLimits

0x777a,	// (0x0003222b) main_pane_idle_g1_cp

0x7786,	// (0x00032237) popup_ai_links_title_window

0x778f,	// (0x00032240) soft_indicator_pane_cp1_ParamLimits

0x778f,	// (0x00032240) soft_indicator_pane_cp1

0xab55,	// (0x00035606) ai_links_pane_g1

0xab5e,	// (0x0003560f) grid_ai_links_pane

0xab38,	// (0x000355e9) ai_gene_pane_1

0xab43,	// (0x000355f4) ai_gene_pane_2

0xab4c,	// (0x000355fd) list_highlight_pane_cp4

0xab1c,	// (0x000355cd) cell_ai_link_pane_ParamLimits

0xab1c,	// (0x000355cd) cell_ai_link_pane

0xab14,	// (0x000355c5) cell_ai_link_pane_g1

0x8043,	// (0x00032af4) cell_ai_link_pane_g2

0x0001,

0xf91d,	// (0x0003a3ce) cell_ai_link_pane_g

0x74c2,	// (0x00031f73) grid_highlight_cp2

0x74c2,	// (0x00031f73) bg_popup_sub_pane_cp1

0x77a9,	// (0x0003225a) popup_ai_links_title_window_t1

0xaa62,	// (0x00035513) ai_gene_pane_1_g1_ParamLimits

0xaa62,	// (0x00035513) ai_gene_pane_1_g1

0xaa6e,	// (0x0003551f) ai_gene_pane_1_g2_ParamLimits

0xaa6e,	// (0x0003551f) ai_gene_pane_1_g2

0x0001,

0xf913,	// (0x0003a3c4) ai_gene_pane_1_g_ParamLimits

0xf913,	// (0x0003a3c4) ai_gene_pane_1_g

0xaa7b,	// (0x0003552c) ai_gene_pane_1_t1_ParamLimits

0xaa7b,	// (0x0003552c) ai_gene_pane_1_t1

0xaaaf,	// (0x00035560) grid_ai_soft_ind_pane

0xaa4d,	// (0x000354fe) ai_gene_pane_2_t1_ParamLimits

0xaa4d,	// (0x000354fe) ai_gene_pane_2_t1

0x77b8,	// (0x00032269) main_pane_empty_t1_ParamLimits

0x77b8,	// (0x00032269) main_pane_empty_t1

0x77d0,	// (0x00032281) main_pane_empty_t2_ParamLimits

0x77d0,	// (0x00032281) main_pane_empty_t2

0x77e5,	// (0x00032296) main_pane_empty_t3_ParamLimits

0x77e5,	// (0x00032296) main_pane_empty_t3

0x77f7,	// (0x000322a8) main_pane_empty_t4_ParamLimits

0x77f7,	// (0x000322a8) main_pane_empty_t4

0x7809,	// (0x000322ba) main_pane_empty_t5_ParamLimits

0x7809,	// (0x000322ba) main_pane_empty_t5

0x0004,

0xf57a,	// (0x0003a02b) main_pane_empty_t_ParamLimits

0xf57a,	// (0x0003a02b) main_pane_empty_t

0x854a,	// (0x00032ffb) bg_popup_window_pane_ParamLimits

0x854a,	// (0x00032ffb) bg_popup_window_pane

0xa7bd,	// (0x0003526e) find_popup_pane_cp2_ParamLimits

0xa7bd,	// (0x0003526e) find_popup_pane_cp2

0xa7c9,	// (0x0003527a) heading_pane_ParamLimits

0xa7c9,	// (0x0003527a) heading_pane

0x74c2,	// (0x00031f73) bg_popup_sub_pane

0xa737,	// (0x000351e8) bg_popup_window_pane_g1_ParamLimits

0xa737,	// (0x000351e8) bg_popup_window_pane_g1

0xa743,	// (0x000351f4) bg_popup_window_pane_g2_ParamLimits

0xa743,	// (0x000351f4) bg_popup_window_pane_g2

0xa74f,	// (0x00035200) bg_popup_window_pane_g3_ParamLimits

0xa74f,	// (0x00035200) bg_popup_window_pane_g3

0xa75b,	// (0x0003520c) bg_popup_window_pane_g4_ParamLimits

0xa75b,	// (0x0003520c) bg_popup_window_pane_g4

0xa767,	// (0x00035218) bg_popup_window_pane_g5_ParamLimits

0xa767,	// (0x00035218) bg_popup_window_pane_g5

0xa773,	// (0x00035224) bg_popup_window_pane_g6_ParamLimits

0xa773,	// (0x00035224) bg_popup_window_pane_g6

0xa77f,	// (0x00035230) bg_popup_window_pane_g7_ParamLimits

0xa77f,	// (0x00035230) bg_popup_window_pane_g7

0xa78b,	// (0x0003523c) bg_popup_window_pane_g8_ParamLimits

0xa78b,	// (0x0003523c) bg_popup_window_pane_g8

0xa797,	// (0x00035248) bg_popup_window_pane_g9_ParamLimits

0xa797,	// (0x00035248) bg_popup_window_pane_g9

0xa7a3,	// (0x00035254) bg_popup_window_pane_g10_ParamLimits

0xa7a3,	// (0x00035254) bg_popup_window_pane_g10

0x0009,

0xf8db,	// (0x0003a38c) bg_popup_window_pane_g_ParamLimits

0xf8db,	// (0x0003a38c) bg_popup_window_pane_g

0xa6cc,	// (0x0003517d) bg_popup_heading_pane_ParamLimits

0xa6cc,	// (0x0003517d) bg_popup_heading_pane

0x6667,	// (0x00031118) tabs_4_passive_pane_cp_srt_ParamLimits

0x6667,	// (0x00031118) tabs_4_passive_pane_cp_srt

0x6679,	// (0x0003112a) tabs_4_passive_pane_srt_ParamLimits

0xa6e0,	// (0x00035191) heading_pane_g2

0x6679,	// (0x0003112a) tabs_4_passive_pane_srt

0x9438,	// (0x00033ee9) bg_passive_tab_pane_cp3_srt_ParamLimits

0x9438,	// (0x00033ee9) bg_passive_tab_pane_cp3_srt

0xa6e8,	// (0x00035199) heading_pane_t1_ParamLimits

0xa6e8,	// (0x00035199) heading_pane_t1

0xa6ff,	// (0x000351b0) heading_pane_t2_ParamLimits

0xa6ff,	// (0x000351b0) heading_pane_t2

0x0001,

0xf8d6,	// (0x0003a387) heading_pane_t_ParamLimits

0xf8d6,	// (0x0003a387) heading_pane_t

0xa1f9,	// (0x00034caa) bg_popup_heading_pane_g1

0xa2a8,	// (0x00034d59) bg_popup_heading_pane_g2

0xa2b2,	// (0x00034d63) bg_popup_heading_pane_g3

0xa2bc,	// (0x00034d6d) bg_popup_heading_pane_g4

0xa2c6,	// (0x00034d77) bg_popup_heading_pane_g5

0xa2d0,	// (0x00034d81) bg_popup_heading_pane_g6

0xa2d8,	// (0x00034d89) bg_popup_heading_pane_g7

0xa2e0,	// (0x00034d91) bg_popup_heading_pane_g8

0xa2ea,	// (0x00034d9b) bg_popup_heading_pane_g9

0x0008,

0xf892,	// (0x0003a343) bg_popup_heading_pane_g

0x994f,	// (0x00034400) bg_popup_sub_pane_g1

0x995f,	// (0x00034410) bg_popup_sub_pane_g2

0x9957,	// (0x00034408) bg_popup_sub_pane_g3

0x996f,	// (0x00034420) bg_popup_sub_pane_g4

0x9967,	// (0x00034418) bg_popup_sub_pane_g5

0x9977,	// (0x00034428) bg_popup_sub_pane_g6

0x997f,	// (0x00034430) bg_popup_sub_pane_g7

0x998f,	// (0x00034440) bg_popup_sub_pane_g8

0x9987,	// (0x00034438) bg_popup_sub_pane_g9

0x0008,

0xf86c,	// (0x0003a31d) bg_popup_sub_pane_g

0x781d,	// (0x000322ce) bg_popup_window_pane_cp5_ParamLimits

0x781d,	// (0x000322ce) bg_popup_window_pane_cp5

0x7839,	// (0x000322ea) popup_note_window_g1_ParamLimits

0x7839,	// (0x000322ea) popup_note_window_g1

0x7845,	// (0x000322f6) popup_note_window_t1_ParamLimits

0x7845,	// (0x000322f6) popup_note_window_t1

0x785b,	// (0x0003230c) popup_note_window_t2_ParamLimits

0x785b,	// (0x0003230c) popup_note_window_t2

0x7871,	// (0x00032322) popup_note_window_t3_ParamLimits

0x7871,	// (0x00032322) popup_note_window_t3

0x7887,	// (0x00032338) popup_note_window_t4_ParamLimits

0x7887,	// (0x00032338) popup_note_window_t4

0x7f33,	// (0x000329e4) popup_note_window_t5_ParamLimits

0x7f33,	// (0x000329e4) popup_note_window_t5

0x0004,

0xf585,	// (0x0003a036) popup_note_window_t_ParamLimits

0xf585,	// (0x0003a036) popup_note_window_t

0x7f57,	// (0x00032a08) bg_popup_window_pane_cp6_ParamLimits

0x7f57,	// (0x00032a08) bg_popup_window_pane_cp6

0xa175,	// (0x00034c26) popup_note_image_window_g1_ParamLimits

0xa175,	// (0x00034c26) popup_note_image_window_g1

0xa181,	// (0x00034c32) popup_note_image_window_g2_ParamLimits

0xa181,	// (0x00034c32) popup_note_image_window_g2

0x0001,

0xf860,	// (0x0003a311) popup_note_image_window_g_ParamLimits

0xf860,	// (0x0003a311) popup_note_image_window_g

0xa19a,	// (0x00034c4b) popup_note_image_window_t1_ParamLimits

0xa19a,	// (0x00034c4b) popup_note_image_window_t1

0xa1b3,	// (0x00034c64) popup_note_image_window_t2_ParamLimits

0xa1b3,	// (0x00034c64) popup_note_image_window_t2

0xa1cc,	// (0x00034c7d) popup_note_image_window_t3_ParamLimits

0xa1cc,	// (0x00034c7d) popup_note_image_window_t3

0x0002,

0xf865,	// (0x0003a316) popup_note_image_window_t_ParamLimits

0xf865,	// (0x0003a316) popup_note_image_window_t

0xa036,	// (0x00034ae7) bg_popup_window_pane_cp7_ParamLimits

0xa036,	// (0x00034ae7) bg_popup_window_pane_cp7

0xa066,	// (0x00034b17) popup_note_wait_window_g1_ParamLimits

0xa066,	// (0x00034b17) popup_note_wait_window_g1

0xa072,	// (0x00034b23) popup_note_wait_window_g2_ParamLimits

0xa072,	// (0x00034b23) popup_note_wait_window_g2

0x0002,

0xf84e,	// (0x0003a2ff) popup_note_wait_window_g_ParamLimits

0xf84e,	// (0x0003a2ff) popup_note_wait_window_g

0xa08a,	// (0x00034b3b) popup_note_wait_window_t1_ParamLimits

0xa08a,	// (0x00034b3b) popup_note_wait_window_t1

0xa0b1,	// (0x00034b62) popup_note_wait_window_t2_ParamLimits

0xa0b1,	// (0x00034b62) popup_note_wait_window_t2

0xa0ce,	// (0x00034b7f) popup_note_wait_window_t3_ParamLimits

0xa0ce,	// (0x00034b7f) popup_note_wait_window_t3

0xa0e1,	// (0x00034b92) popup_note_wait_window_t4_ParamLimits

0xa0e1,	// (0x00034b92) popup_note_wait_window_t4

0x0004,

0xf855,	// (0x0003a306) popup_note_wait_window_t_ParamLimits

0xf855,	// (0x0003a306) popup_note_wait_window_t

0xa106,	// (0x00034bb7) wait_bar_pane_ParamLimits

0xa106,	// (0x00034bb7) wait_bar_pane

0x74c2,	// (0x00031f73) wait_anim_pane

0x74c2,	// (0x00031f73) wait_border_pane

0x74b8,	// (0x00031f69) wait_anim_pane_g1

0x74b8,	// (0x00031f69) wait_anim_pane_g2

0x0001,

0xf709,	// (0x0003a1ba) wait_anim_pane_g

0x9fda,	// (0x00034a8b) wait_border_pane_g1

0x9fe5,	// (0x00034a96) wait_border_pane_g2

0x9fee,	// (0x00034a9f) wait_border_pane_g3

0x0002,

0xf847,	// (0x0003a2f8) wait_border_pane_g

0x9e39,	// (0x000348ea) bg_popup_window_pane_cp16_ParamLimits

0x9e39,	// (0x000348ea) bg_popup_window_pane_cp16

0x9f39,	// (0x000349ea) indicator_popup_pane_cp4_ParamLimits

0x9f39,	// (0x000349ea) indicator_popup_pane_cp4

0x9f59,	// (0x00034a0a) popup_query_data_window_t1_ParamLimits

0x9f59,	// (0x00034a0a) popup_query_data_window_t1

0x9f6b,	// (0x00034a1c) popup_query_data_window_t2_ParamLimits

0x9f6b,	// (0x00034a1c) popup_query_data_window_t2

0x9f84,	// (0x00034a35) popup_query_data_window_t3_ParamLimits

0x9f84,	// (0x00034a35) popup_query_data_window_t3

0x0002,

0xf840,	// (0x0003a2f1) popup_query_data_window_t_ParamLimits

0xf840,	// (0x0003a2f1) popup_query_data_window_t

0x9f9e,	// (0x00034a4f) query_popup_data_pane_ParamLimits

0x9f9e,	// (0x00034a4f) query_popup_data_pane

0x9fb2,	// (0x00034a63) query_popup_data_pane_cp1_ParamLimits

0x9fb2,	// (0x00034a63) query_popup_data_pane_cp1

0x9e39,	// (0x000348ea) bg_popup_window_pane_cp10_ParamLimits

0x9e39,	// (0x000348ea) bg_popup_window_pane_cp10

0x9e6b,	// (0x0003491c) indicator_popup_pane_ParamLimits

0x9e6b,	// (0x0003491c) indicator_popup_pane

0x9e8d,	// (0x0003493e) popup_query_code_window_t1_ParamLimits

0x9e8d,	// (0x0003493e) popup_query_code_window_t1

0x9ea7,	// (0x00034958) popup_query_code_window_t2_ParamLimits

0x9ea7,	// (0x00034958) popup_query_code_window_t2

0x9ef0,	// (0x000349a1) popup_query_code_window_t3_ParamLimits

0x9ef0,	// (0x000349a1) popup_query_code_window_t3

0x0002,

0xf839,	// (0x0003a2ea) popup_query_code_window_t_ParamLimits

0xf839,	// (0x0003a2ea) popup_query_code_window_t

0x9f1f,	// (0x000349d0) query_popup_pane_ParamLimits

0x9f1f,	// (0x000349d0) query_popup_pane

0x7f57,	// (0x00032a08) bg_popup_window_pane_cp15_ParamLimits

0x7f57,	// (0x00032a08) bg_popup_window_pane_cp15

0x7f75,	// (0x00032a26) indicator_popup_pane_cp1_ParamLimits

0x7f75,	// (0x00032a26) indicator_popup_pane_cp1

0x7f88,	// (0x00032a39) indicator_popup_pane_cp2_ParamLimits

0x7f88,	// (0x00032a39) indicator_popup_pane_cp2

0x7f9b,	// (0x00032a4c) popup_query_data_code_window_g1_ParamLimits

0x7f9b,	// (0x00032a4c) popup_query_data_code_window_g1

0x7fae,	// (0x00032a5f) popup_query_data_code_window_t1_ParamLimits

0x7fae,	// (0x00032a5f) popup_query_data_code_window_t1

0x7fc0,	// (0x00032a71) popup_query_data_code_window_t2_ParamLimits

0x7fc0,	// (0x00032a71) popup_query_data_code_window_t2

0x7fd2,	// (0x00032a83) popup_query_data_code_window_t3_ParamLimits

0x7fd2,	// (0x00032a83) popup_query_data_code_window_t3

0x7fe8,	// (0x00032a99) popup_query_data_code_window_t4_ParamLimits

0x7fe8,	// (0x00032a99) popup_query_data_code_window_t4

0x0003,

0xf590,	// (0x0003a041) popup_query_data_code_window_t_ParamLimits

0xf590,	// (0x0003a041) popup_query_data_code_window_t

0x61dc,	// (0x00030c8d) list_single_midp_graphic_pane_g3

0x8000,	// (0x00032ab1) query_popup_data_pane_cp2_ParamLimits

0x8013,	// (0x00032ac4) query_popup_pane_cp2_ParamLimits

0x8013,	// (0x00032ac4) query_popup_pane_cp2

0x74c2,	// (0x00031f73) bg_popup_window_pane_cp11

0x9e31,	// (0x000348e2) heading_pane_cp5

0x80fb,	// (0x00032bac) listscroll_popup_info_pane

0x74c2,	// (0x00031f73) input_focus_pane_cp3

0x8026,	// (0x00032ad7) query_popup_pane_t1

0x8034,	// (0x00032ae5) list_popup_info_pane_ParamLimits

0x8034,	// (0x00032ae5) list_popup_info_pane

0x8043,	// (0x00032af4) listscroll_popup_info_pane_g1

0x804b,	// (0x00032afc) scroll_pane_cp7

0x8055,	// (0x00032b06) popup_info_list_pane_t1_ParamLimits

0x8055,	// (0x00032b06) popup_info_list_pane_t1

0x806f,	// (0x00032b20) popup_info_list_pane_t2_ParamLimits

0x806f,	// (0x00032b20) popup_info_list_pane_t2

0x0001,

0xf599,	// (0x0003a04a) popup_info_list_pane_t_ParamLimits

0xf599,	// (0x0003a04a) popup_info_list_pane_t

0x74c2,	// (0x00031f73) bg_popup_window_pane_cp12

0xb1a3,	// (0x00035c54) find_popup_pane

0x75a2,	// (0x00032053) bg_popup_window_pane_cp3

0x8089,	// (0x00032b3a) heading_pane_cp3

0x8095,	// (0x00032b46) listscroll_popup_graphic_pane

0x74c2,	// (0x00031f73) bg_popup_window_pane_cp4

0x80f1,	// (0x00032ba2) heading_pane_cp4

0x80fb,	// (0x00032bac) listscroll_popup_colour_pane

0x8103,	// (0x00032bb4) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x8103,	// (0x00032bb4) cell_large_graphic_colour_none_popup_pane

0x8117,	// (0x00032bc8) grid_large_graphic_colour_popup_pane_ParamLimits

0x8117,	// (0x00032bc8) grid_large_graphic_colour_popup_pane

0x8143,	// (0x00032bf4) listscroll_popup_colour_pane_g1_ParamLimits

0x8143,	// (0x00032bf4) listscroll_popup_colour_pane_g1

0x815a,	// (0x00032c0b) listscroll_popup_colour_pane_g2_ParamLimits

0x815a,	// (0x00032c0b) listscroll_popup_colour_pane_g2

0x8171,	// (0x00032c22) listscroll_popup_colour_pane_g3_ParamLimits

0x8171,	// (0x00032c22) listscroll_popup_colour_pane_g3

0x8181,	// (0x00032c32) listscroll_popup_colour_pane_g4_ParamLimits

0x8181,	// (0x00032c32) listscroll_popup_colour_pane_g4

0x0003,

0xf59e,	// (0x0003a04f) listscroll_popup_colour_pane_g_ParamLimits

0xf59e,	// (0x0003a04f) listscroll_popup_colour_pane_g

0x8195,	// (0x00032c46) scroll_pane_cp6_ParamLimits

0x8195,	// (0x00032c46) scroll_pane_cp6

0x81a7,	// (0x00032c58) cell_large_graphic_colour_popup_pane_ParamLimits

0x81a7,	// (0x00032c58) cell_large_graphic_colour_popup_pane

0x81c6,	// (0x00032c77) cell_large_graphic_colour_none_popup_pane_t1

0x74c2,	// (0x00031f73) grid_highlight_pane_cp5

0x81d5,	// (0x00032c86) cell_large_graphic_colour_popup_pane_g1

0x81dd,	// (0x00032c8e) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a7,	// (0x0003a058) cell_large_graphic_colour_popup_pane_g

0x81e5,	// (0x00032c96) cell_large_graphic_colour_popup_pane_g2_copy1

0x81ee,	// (0x00032c9f) grid_highlight_pane_cp4

0x81f6,	// (0x00032ca7) bg_popup_window_pane_cp8_ParamLimits

0x81f6,	// (0x00032ca7) bg_popup_window_pane_cp8

0x8211,	// (0x00032cc2) popup_snote_single_text_window_g1_ParamLimits

0x8211,	// (0x00032cc2) popup_snote_single_text_window_g1

0x8223,	// (0x00032cd4) popup_snote_single_text_window_t1_ParamLimits

0x8223,	// (0x00032cd4) popup_snote_single_text_window_t1

0x8236,	// (0x00032ce7) popup_snote_single_text_window_t2_ParamLimits

0x8236,	// (0x00032ce7) popup_snote_single_text_window_t2

0x8249,	// (0x00032cfa) popup_snote_single_text_window_t3_ParamLimits

0x8249,	// (0x00032cfa) popup_snote_single_text_window_t3

0x8282,	// (0x00032d33) popup_snote_single_text_window_t4_ParamLimits

0x8282,	// (0x00032d33) popup_snote_single_text_window_t4

0x82b6,	// (0x00032d67) popup_snote_single_text_window_t5_ParamLimits

0x82b6,	// (0x00032d67) popup_snote_single_text_window_t5

0x0004,

0xf5ac,	// (0x0003a05d) popup_snote_single_text_window_t_ParamLimits

0xf5ac,	// (0x0003a05d) popup_snote_single_text_window_t

0x82e5,	// (0x00032d96) bg_popup_window_pane_cp9_ParamLimits

0x82e5,	// (0x00032d96) bg_popup_window_pane_cp9

0x8211,	// (0x00032cc2) popup_snote_single_graphic_window_g1_ParamLimits

0x8211,	// (0x00032cc2) popup_snote_single_graphic_window_g1

0x82f3,	// (0x00032da4) popup_snote_single_graphic_window_g2_ParamLimits

0x82f3,	// (0x00032da4) popup_snote_single_graphic_window_g2

0x0001,

0xf5b7,	// (0x0003a068) popup_snote_single_graphic_window_g_ParamLimits

0xf5b7,	// (0x0003a068) popup_snote_single_graphic_window_g

0x82ff,	// (0x00032db0) popup_snote_single_graphic_window_t1_ParamLimits

0x82ff,	// (0x00032db0) popup_snote_single_graphic_window_t1

0x8312,	// (0x00032dc3) popup_snote_single_graphic_window_t2_ParamLimits

0x8312,	// (0x00032dc3) popup_snote_single_graphic_window_t2

0x8325,	// (0x00032dd6) popup_snote_single_graphic_window_t3_ParamLimits

0x8325,	// (0x00032dd6) popup_snote_single_graphic_window_t3

0x835e,	// (0x00032e0f) popup_snote_single_graphic_window_t4_ParamLimits

0x835e,	// (0x00032e0f) popup_snote_single_graphic_window_t4

0x8392,	// (0x00032e43) popup_snote_single_graphic_window_t5_ParamLimits

0x8392,	// (0x00032e43) popup_snote_single_graphic_window_t5

0x0004,

0xf5bc,	// (0x0003a06d) popup_snote_single_graphic_window_t_ParamLimits

0xf5bc,	// (0x0003a06d) popup_snote_single_graphic_window_t

0xb0e7,	// (0x00035b98) grid_graphic_popup_pane_ParamLimits

0xb0e7,	// (0x00035b98) grid_graphic_popup_pane

0xb10f,	// (0x00035bc0) listscroll_popup_graphic_pane_g1_ParamLimits

0xb10f,	// (0x00035bc0) listscroll_popup_graphic_pane_g1

0xb123,	// (0x00035bd4) listscroll_popup_graphic_pane_g2_ParamLimits

0xb123,	// (0x00035bd4) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b6,	// (0x0003a467) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b6,	// (0x0003a467) listscroll_popup_graphic_pane_g

0xb137,	// (0x00035be8) scroll_pane_cp5

0xb090,	// (0x00035b41) cell_graphic_popup_pane_ParamLimits

0xb090,	// (0x00035b41) cell_graphic_popup_pane

0xb071,	// (0x00035b22) cell_graphic_popup_pane_g1

0xb079,	// (0x00035b2a) cell_graphic_popup_pane_g2

0x81e5,	// (0x00032c96) cell_graphic_popup_pane_g3

0x0002,

0xf9af,	// (0x0003a460) cell_graphic_popup_pane_g

0xb082,	// (0x00035b33) cell_graphic_popup_pane_t2

0x81ee,	// (0x00032c9f) grid_highlight_pane_cp3

0x83d3,	// (0x00032e84) list_gen_pane_ParamLimits

0x83d3,	// (0x00032e84) list_gen_pane

0x8405,	// (0x00032eb6) scroll_pane

0xafc9,	// (0x00035a7a) bg_list_pane_g1_ParamLimits

0xafc9,	// (0x00035a7a) bg_list_pane_g1

0xafe6,	// (0x00035a97) bg_list_pane_g2_ParamLimits

0xafe6,	// (0x00035a97) bg_list_pane_g2

0xaffb,	// (0x00035aac) bg_list_pane_g3_ParamLimits

0xaffb,	// (0x00035aac) bg_list_pane_g3

0xb00f,	// (0x00035ac0) bg_list_pane_g4_ParamLimits

0xb00f,	// (0x00035ac0) bg_list_pane_g4

0xb023,	// (0x00035ad4) bg_list_pane_g5_ParamLimits

0xb023,	// (0x00035ad4) bg_list_pane_g5

0x0004,

0xf9a4,	// (0x0003a455) bg_list_pane_g_ParamLimits

0xf9a4,	// (0x0003a455) bg_list_pane_g

0xaf80,	// (0x00035a31) list_double2_graphic_large_graphic_pane_ParamLimits

0xaf80,	// (0x00035a31) list_double2_graphic_large_graphic_pane

0xaf80,	// (0x00035a31) list_double2_graphic_pane_ParamLimits

0xaf80,	// (0x00035a31) list_double2_graphic_pane

0xaf80,	// (0x00035a31) list_double2_large_graphic_pane_ParamLimits

0xaf80,	// (0x00035a31) list_double2_large_graphic_pane

0x65e8,	// (0x00031099) list_double2_pane_ParamLimits

0x65e8,	// (0x00031099) list_double2_pane

0xaf80,	// (0x00035a31) list_double_graphic_heading_pane_ParamLimits

0xaf80,	// (0x00035a31) list_double_graphic_heading_pane

0xaf80,	// (0x00035a31) list_double_graphic_pane_ParamLimits

0xaf80,	// (0x00035a31) list_double_graphic_pane

0xaf80,	// (0x00035a31) list_double_heading_pane_ParamLimits

0xaf80,	// (0x00035a31) list_double_heading_pane

0xaf80,	// (0x00035a31) list_double_large_graphic_pane_ParamLimits

0xaf80,	// (0x00035a31) list_double_large_graphic_pane

0xaf80,	// (0x00035a31) list_double_number_pane_ParamLimits

0xaf80,	// (0x00035a31) list_double_number_pane

0xaf80,	// (0x00035a31) list_double_pane_ParamLimits

0xaf80,	// (0x00035a31) list_double_pane

0xaf80,	// (0x00035a31) list_double_time_pane_ParamLimits

0xaf80,	// (0x00035a31) list_double_time_pane

0xaf80,	// (0x00035a31) list_setting_number_pane_ParamLimits

0xaf80,	// (0x00035a31) list_setting_number_pane

0xaf80,	// (0x00035a31) list_setting_pane_ParamLimits

0xaf80,	// (0x00035a31) list_setting_pane

0x6623,	// (0x000310d4) list_single_2graphic_pane_ParamLimits

0x6623,	// (0x000310d4) list_single_2graphic_pane

0x6623,	// (0x000310d4) list_single_graphic_heading_pane_ParamLimits

0x6623,	// (0x000310d4) list_single_graphic_heading_pane

0x6623,	// (0x000310d4) list_single_graphic_pane_ParamLimits

0x6623,	// (0x000310d4) list_single_graphic_pane

0x6623,	// (0x000310d4) list_single_heading_pane_ParamLimits

0x6623,	// (0x000310d4) list_single_heading_pane

0x78ea,	// (0x0003239b) list_single_large_graphic_pane_ParamLimits

0x78ea,	// (0x0003239b) list_single_large_graphic_pane

0x6623,	// (0x000310d4) list_single_number_heading_pane_ParamLimits

0x6623,	// (0x000310d4) list_single_number_heading_pane

0x6623,	// (0x000310d4) list_single_number_pane_ParamLimits

0x6623,	// (0x000310d4) list_single_number_pane

0x6623,	// (0x000310d4) list_single_pane_ParamLimits

0x6623,	// (0x000310d4) list_single_pane

0x74c2,	// (0x00031f73) list_highlight_pane_cp1

0x4e07,	// (0x0002f8b8) list_single_pane_g1_ParamLimits

0x4e07,	// (0x0002f8b8) list_single_pane_g1

0x4e13,	// (0x0002f8c4) list_single_pane_g2_ParamLimits

0x4e13,	// (0x0002f8c4) list_single_pane_g2

0x0001,

0xf5ce,	// (0x0003a07f) list_single_pane_g_ParamLimits

0xf5ce,	// (0x0003a07f) list_single_pane_g

0x65d2,	// (0x00031083) list_single_pane_t1_ParamLimits

0x65d2,	// (0x00031083) list_single_pane_t1

0x4e07,	// (0x0002f8b8) list_single_number_pane_g1_ParamLimits

0x4e07,	// (0x0002f8b8) list_single_number_pane_g1

0x4e13,	// (0x0002f8c4) list_single_number_pane_g2_ParamLimits

0x4e13,	// (0x0002f8c4) list_single_number_pane_g2

0x0001,

0xf5ce,	// (0x0003a07f) list_single_number_pane_g_ParamLimits

0xf5ce,	// (0x0003a07f) list_single_number_pane_g

0x6504,	// (0x00030fb5) list_single_number_pane_t1_ParamLimits

0x6504,	// (0x00030fb5) list_single_number_pane_t1

0x651a,	// (0x00030fcb) list_single_number_pane_t2_ParamLimits

0x651a,	// (0x00030fcb) list_single_number_pane_t2

0x0001,

0xf965,	// (0x0003a416) list_single_number_pane_t_ParamLimits

0xf965,	// (0x0003a416) list_single_number_pane_t

0x4dfb,	// (0x0002f8ac) list_single_graphic_pane_g1_ParamLimits

0x4dfb,	// (0x0002f8ac) list_single_graphic_pane_g1

0x4e07,	// (0x0002f8b8) list_single_graphic_pane_g2_ParamLimits

0x4e07,	// (0x0002f8b8) list_single_graphic_pane_g2

0x4e13,	// (0x0002f8c4) list_single_graphic_pane_g3_ParamLimits

0x4e13,	// (0x0002f8c4) list_single_graphic_pane_g3

0x0002,

0xf5c7,	// (0x0003a078) list_single_graphic_pane_g_ParamLimits

0xf5c7,	// (0x0003a078) list_single_graphic_pane_g

0x4e1f,	// (0x0002f8d0) list_single_graphic_pane_t1_ParamLimits

0x4e1f,	// (0x0002f8d0) list_single_graphic_pane_t1

0x4e07,	// (0x0002f8b8) list_single_heading_pane_g1_ParamLimits

0x4e07,	// (0x0002f8b8) list_single_heading_pane_g1

0x4e13,	// (0x0002f8c4) list_single_heading_pane_g2_ParamLimits

0x4e13,	// (0x0002f8c4) list_single_heading_pane_g2

0x0001,

0xf5ce,	// (0x0003a07f) list_single_heading_pane_g_ParamLimits

0xf5ce,	// (0x0003a07f) list_single_heading_pane_g

0x4e35,	// (0x0002f8e6) list_single_heading_pane_t1_ParamLimits

0x4e35,	// (0x0002f8e6) list_single_heading_pane_t1

0x4e4b,	// (0x0002f8fc) list_single_heading_pane_t2_ParamLimits

0x4e4b,	// (0x0002f8fc) list_single_heading_pane_t2

0x0001,

0xf5d3,	// (0x0003a084) list_single_heading_pane_t_ParamLimits

0xf5d3,	// (0x0003a084) list_single_heading_pane_t

0x4e07,	// (0x0002f8b8) list_single_number_heading_pane_g1_ParamLimits

0x4e07,	// (0x0002f8b8) list_single_number_heading_pane_g1

0x4e13,	// (0x0002f8c4) list_single_number_heading_pane_g2_ParamLimits

0x4e13,	// (0x0002f8c4) list_single_number_heading_pane_g2

0x0001,

0xf5ce,	// (0x0003a07f) list_single_number_heading_pane_g_ParamLimits

0xf5ce,	// (0x0003a07f) list_single_number_heading_pane_g

0x4e35,	// (0x0002f8e6) list_single_number_heading_pane_t1_ParamLimits

0x4e35,	// (0x0002f8e6) list_single_number_heading_pane_t1

0x4e5d,	// (0x0002f90e) list_single_number_heading_pane_t2_ParamLimits

0x4e5d,	// (0x0002f90e) list_single_number_heading_pane_t2

0x4e6f,	// (0x0002f920) list_single_number_heading_pane_t3_ParamLimits

0x4e6f,	// (0x0002f920) list_single_number_heading_pane_t3

0x0002,

0xf5d8,	// (0x0003a089) list_single_number_heading_pane_t_ParamLimits

0xf5d8,	// (0x0003a089) list_single_number_heading_pane_t

0x4e81,	// (0x0002f932) list_single_graphic_heading_pane_g1_ParamLimits

0x4e81,	// (0x0002f932) list_single_graphic_heading_pane_g1

0x4e8d,	// (0x0002f93e) list_single_graphic_heading_pane_g4_ParamLimits

0x4e8d,	// (0x0002f93e) list_single_graphic_heading_pane_g4

0x4e13,	// (0x0002f8c4) list_single_graphic_heading_pane_g5_ParamLimits

0x4e13,	// (0x0002f8c4) list_single_graphic_heading_pane_g5

0x0002,

0xf5df,	// (0x0003a090) list_single_graphic_heading_pane_g_ParamLimits

0xf5df,	// (0x0003a090) list_single_graphic_heading_pane_g

0x4e35,	// (0x0002f8e6) list_single_graphic_heading_pane_t1_ParamLimits

0x4e35,	// (0x0002f8e6) list_single_graphic_heading_pane_t1

0x4e9e,	// (0x0002f94f) list_single_graphic_heading_pane_t2_ParamLimits

0x4e9e,	// (0x0002f94f) list_single_graphic_heading_pane_t2

0x0001,

0xf5e6,	// (0x0003a097) list_single_graphic_heading_pane_t_ParamLimits

0xf5e6,	// (0x0003a097) list_single_graphic_heading_pane_t

0x4eb0,	// (0x0002f961) list_single_large_graphic_pane_g1_ParamLimits

0x4eb0,	// (0x0002f961) list_single_large_graphic_pane_g1

0x4ebc,	// (0x0002f96d) list_single_large_graphic_pane_g2_ParamLimits

0x4ebc,	// (0x0002f96d) list_single_large_graphic_pane_g2

0x4ec8,	// (0x0002f979) list_single_large_graphic_pane_g3_ParamLimits

0x4ec8,	// (0x0002f979) list_single_large_graphic_pane_g3

0x0002,

0xf5eb,	// (0x0003a09c) list_single_large_graphic_pane_g_ParamLimits

0xf5eb,	// (0x0003a09c) list_single_large_graphic_pane_g

0x9fe5,	// (0x00034a96) wait_border_pane_g2_copy1

0x4ed4,	// (0x0002f985) list_single_large_graphic_pane_g4_cp2

0x4edc,	// (0x0002f98d) list_single_large_graphic_pane_t1_ParamLimits

0x4edc,	// (0x0002f98d) list_single_large_graphic_pane_t1

0x4ef2,	// (0x0002f9a3) list_double_pane_g1_ParamLimits

0x4ef2,	// (0x0002f9a3) list_double_pane_g1

0x4efe,	// (0x0002f9af) list_double_pane_g2_ParamLimits

0x4efe,	// (0x0002f9af) list_double_pane_g2

0x0001,

0xf5f2,	// (0x0003a0a3) list_double_pane_g_ParamLimits

0xf5f2,	// (0x0003a0a3) list_double_pane_g

0x4f0a,	// (0x0002f9bb) list_double_pane_t1_ParamLimits

0x4f0a,	// (0x0002f9bb) list_double_pane_t1

0x4f20,	// (0x0002f9d1) list_double_pane_t2_ParamLimits

0x4f20,	// (0x0002f9d1) list_double_pane_t2

0x0001,

0xf5f7,	// (0x0003a0a8) list_double_pane_t_ParamLimits

0xf5f7,	// (0x0003a0a8) list_double_pane_t

0x4f32,	// (0x0002f9e3) list_double2_pane_g1_ParamLimits

0x4f32,	// (0x0002f9e3) list_double2_pane_g1

0x4f43,	// (0x0002f9f4) list_double2_pane_g2_ParamLimits

0x4f43,	// (0x0002f9f4) list_double2_pane_g2

0x0001,

0xf5fc,	// (0x0003a0ad) list_double2_pane_g_ParamLimits

0xf5fc,	// (0x0003a0ad) list_double2_pane_g

0x4f4f,	// (0x0002fa00) list_double2_pane_t1_ParamLimits

0x4f4f,	// (0x0002fa00) list_double2_pane_t1

0x4f65,	// (0x0002fa16) list_double2_pane_t2_ParamLimits

0x4f65,	// (0x0002fa16) list_double2_pane_t2

0x0001,

0xf601,	// (0x0003a0b2) list_double2_pane_t_ParamLimits

0xf601,	// (0x0003a0b2) list_double2_pane_t

0x4ef2,	// (0x0002f9a3) list_double_number_pane_g1_ParamLimits

0x4ef2,	// (0x0002f9a3) list_double_number_pane_g1

0x4efe,	// (0x0002f9af) list_double_number_pane_g2_ParamLimits

0x4efe,	// (0x0002f9af) list_double_number_pane_g2

0x0001,

0xf5f2,	// (0x0003a0a3) list_double_number_pane_g_ParamLimits

0xf5f2,	// (0x0003a0a3) list_double_number_pane_g

0x4f77,	// (0x0002fa28) list_double_number_pane_t1_ParamLimits

0x4f77,	// (0x0002fa28) list_double_number_pane_t1

0x4f89,	// (0x0002fa3a) list_double_number_pane_t2_ParamLimits

0x4f89,	// (0x0002fa3a) list_double_number_pane_t2

0x4f9f,	// (0x0002fa50) list_double_number_pane_t3_ParamLimits

0x4f9f,	// (0x0002fa50) list_double_number_pane_t3

0x0002,

0xf606,	// (0x0003a0b7) list_double_number_pane_t_ParamLimits

0xf606,	// (0x0003a0b7) list_double_number_pane_t

0x4fb1,	// (0x0002fa62) list_double_graphic_pane_g1_ParamLimits

0x4fb1,	// (0x0002fa62) list_double_graphic_pane_g1

0x4fbd,	// (0x0002fa6e) list_double_graphic_pane_g2_ParamLimits

0x4fbd,	// (0x0002fa6e) list_double_graphic_pane_g2

0x4fcc,	// (0x0002fa7d) list_double_graphic_pane_g3_ParamLimits

0x4fcc,	// (0x0002fa7d) list_double_graphic_pane_g3

0x0003,

0xf60d,	// (0x0003a0be) list_double_graphic_pane_g_ParamLimits

0xf60d,	// (0x0003a0be) list_double_graphic_pane_g

0x4fe4,	// (0x0002fa95) list_double_graphic_pane_t1_ParamLimits

0x4fe4,	// (0x0002fa95) list_double_graphic_pane_t1

0x4ffa,	// (0x0002faab) list_double_graphic_pane_t2_ParamLimits

0x4ffa,	// (0x0002faab) list_double_graphic_pane_t2

0x0001,

0xf616,	// (0x0003a0c7) list_double_graphic_pane_t_ParamLimits

0xf616,	// (0x0003a0c7) list_double_graphic_pane_t

0x500c,	// (0x0002fabd) list_double2_graphic_pane_g1_ParamLimits

0x500c,	// (0x0002fabd) list_double2_graphic_pane_g1

0x5018,	// (0x0002fac9) list_double2_graphic_pane_g2_ParamLimits

0x5018,	// (0x0002fac9) list_double2_graphic_pane_g2

0x5024,	// (0x0002fad5) list_double2_graphic_pane_g3_ParamLimits

0x5024,	// (0x0002fad5) list_double2_graphic_pane_g3

0x0002,

0xf61b,	// (0x0003a0cc) list_double2_graphic_pane_g_ParamLimits

0xf61b,	// (0x0003a0cc) list_double2_graphic_pane_g

0x5030,	// (0x0002fae1) list_double2_graphic_pane_t1_ParamLimits

0x5030,	// (0x0002fae1) list_double2_graphic_pane_t1

0x5046,	// (0x0002faf7) list_double2_graphic_pane_t2_ParamLimits

0x5046,	// (0x0002faf7) list_double2_graphic_pane_t2

0x0001,

0xf622,	// (0x0003a0d3) list_double2_graphic_pane_t_ParamLimits

0xf622,	// (0x0003a0d3) list_double2_graphic_pane_t

0x5058,	// (0x0002fb09) list_double_large_graphic_pane_g1_ParamLimits

0x5058,	// (0x0002fb09) list_double_large_graphic_pane_g1

0x5081,	// (0x0002fb32) list_double_large_graphic_pane_g2_ParamLimits

0x5081,	// (0x0002fb32) list_double_large_graphic_pane_g2

0x4efe,	// (0x0002f9af) list_double_large_graphic_pane_g3_ParamLimits

0x4efe,	// (0x0002f9af) list_double_large_graphic_pane_g3

0x5092,	// (0x0002fb43) list_double_large_graphic_pane_g4_ParamLimits

0x5092,	// (0x0002fb43) list_double_large_graphic_pane_g4

0x0004,

0xf627,	// (0x0003a0d8) list_double_large_graphic_pane_g_ParamLimits

0xf627,	// (0x0003a0d8) list_double_large_graphic_pane_g

0x50b7,	// (0x0002fb68) list_double_large_graphic_pane_t1_ParamLimits

0x50b7,	// (0x0002fb68) list_double_large_graphic_pane_t1

0x50d0,	// (0x0002fb81) list_double_large_graphic_pane_t2_ParamLimits

0x50d0,	// (0x0002fb81) list_double_large_graphic_pane_t2

0x0001,

0xf632,	// (0x0003a0e3) list_double_large_graphic_pane_t_ParamLimits

0xf632,	// (0x0003a0e3) list_double_large_graphic_pane_t

0x50e2,	// (0x0002fb93) list_double2_large_graphic_pane_g1_ParamLimits

0x50e2,	// (0x0002fb93) list_double2_large_graphic_pane_g1

0x50ee,	// (0x0002fb9f) list_double2_large_graphic_pane_g2_ParamLimits

0x50ee,	// (0x0002fb9f) list_double2_large_graphic_pane_g2

0x5024,	// (0x0002fad5) list_double2_large_graphic_pane_g3_ParamLimits

0x5024,	// (0x0002fad5) list_double2_large_graphic_pane_g3

0x0002,

0xf637,	// (0x0003a0e8) list_double2_large_graphic_pane_g_ParamLimits

0xf637,	// (0x0003a0e8) list_double2_large_graphic_pane_g

0x50ff,	// (0x0002fbb0) list_double2_large_graphic_pane_t1_ParamLimits

0x50ff,	// (0x0002fbb0) list_double2_large_graphic_pane_t1

0x5115,	// (0x0002fbc6) list_double2_large_graphic_pane_t2_ParamLimits

0x5115,	// (0x0002fbc6) list_double2_large_graphic_pane_t2

0x0001,

0xf63e,	// (0x0003a0ef) list_double2_large_graphic_pane_t_ParamLimits

0xf63e,	// (0x0003a0ef) list_double2_large_graphic_pane_t

0x5127,	// (0x0002fbd8) list_double_heading_pane_g1_ParamLimits

0x5127,	// (0x0002fbd8) list_double_heading_pane_g1

0x5138,	// (0x0002fbe9) list_double_heading_pane_g2_ParamLimits

0x5138,	// (0x0002fbe9) list_double_heading_pane_g2

0x0001,

0xf643,	// (0x0003a0f4) list_double_heading_pane_g_ParamLimits

0xf643,	// (0x0003a0f4) list_double_heading_pane_g

0x5144,	// (0x0002fbf5) list_double_heading_pane_t1_ParamLimits

0x5144,	// (0x0002fbf5) list_double_heading_pane_t1

0x515a,	// (0x0002fc0b) list_double_heading_pane_t2_ParamLimits

0x515a,	// (0x0002fc0b) list_double_heading_pane_t2

0x0001,

0xf648,	// (0x0003a0f9) list_double_heading_pane_t_ParamLimits

0xf648,	// (0x0003a0f9) list_double_heading_pane_t

0x500c,	// (0x0002fabd) list_double_graphic_heading_pane_g1_ParamLimits

0x500c,	// (0x0002fabd) list_double_graphic_heading_pane_g1

0x5127,	// (0x0002fbd8) list_double_graphic_heading_pane_g2_ParamLimits

0x5127,	// (0x0002fbd8) list_double_graphic_heading_pane_g2

0x5138,	// (0x0002fbe9) list_double_graphic_heading_pane_g3_ParamLimits

0x5138,	// (0x0002fbe9) list_double_graphic_heading_pane_g3

0x0002,

0xf64d,	// (0x0003a0fe) list_double_graphic_heading_pane_g_ParamLimits

0xf64d,	// (0x0003a0fe) list_double_graphic_heading_pane_g

0x516c,	// (0x0002fc1d) list_double_graphic_heading_pane_t1_ParamLimits

0x516c,	// (0x0002fc1d) list_double_graphic_heading_pane_t1

0x5046,	// (0x0002faf7) list_double_graphic_heading_pane_t2_ParamLimits

0x5046,	// (0x0002faf7) list_double_graphic_heading_pane_t2

0x0001,

0xf654,	// (0x0003a105) list_double_graphic_heading_pane_t_ParamLimits

0xf654,	// (0x0003a105) list_double_graphic_heading_pane_t

0x5081,	// (0x0002fb32) list_double_time_pane_g1_ParamLimits

0x5081,	// (0x0002fb32) list_double_time_pane_g1

0x4efe,	// (0x0002f9af) list_double_time_pane_g2_ParamLimits

0x4efe,	// (0x0002f9af) list_double_time_pane_g2

0x0001,

0xf659,	// (0x0003a10a) list_double_time_pane_g_ParamLimits

0xf659,	// (0x0003a10a) list_double_time_pane_g

0x5182,	// (0x0002fc33) list_double_time_pane_t1_ParamLimits

0x5182,	// (0x0002fc33) list_double_time_pane_t1

0x5198,	// (0x0002fc49) list_double_time_pane_t2_ParamLimits

0x5198,	// (0x0002fc49) list_double_time_pane_t2

0x51aa,	// (0x0002fc5b) list_double_time_pane_t3_ParamLimits

0x51aa,	// (0x0002fc5b) list_double_time_pane_t3

0x51bc,	// (0x0002fc6d) list_double_time_pane_t4_ParamLimits

0x51bc,	// (0x0002fc6d) list_double_time_pane_t4

0x0003,

0xf65e,	// (0x0003a10f) list_double_time_pane_t_ParamLimits

0xf65e,	// (0x0003a10f) list_double_time_pane_t

0x5018,	// (0x0002fac9) list_setting_pane_g1_ParamLimits

0x5018,	// (0x0002fac9) list_setting_pane_g1

0x5024,	// (0x0002fad5) list_setting_pane_g2_ParamLimits

0x5024,	// (0x0002fad5) list_setting_pane_g2

0x0001,

0xf667,	// (0x0003a118) list_setting_pane_g_ParamLimits

0xf667,	// (0x0003a118) list_setting_pane_g

0x51ce,	// (0x0002fc7f) list_setting_pane_t1_ParamLimits

0x51ce,	// (0x0002fc7f) list_setting_pane_t1

0x51e8,	// (0x0002fc99) list_setting_pane_t2_ParamLimits

0x51e8,	// (0x0002fc99) list_setting_pane_t2

0x0002,

0xf66c,	// (0x0003a11d) list_setting_pane_t_ParamLimits

0xf66c,	// (0x0003a11d) list_setting_pane_t

0x5227,	// (0x0002fcd8) set_value_pane_cp_ParamLimits

0x5227,	// (0x0002fcd8) set_value_pane_cp

0x5233,	// (0x0002fce4) list_setting_number_pane_g1_ParamLimits

0x5233,	// (0x0002fce4) list_setting_number_pane_g1

0x523f,	// (0x0002fcf0) list_setting_number_pane_g2_ParamLimits

0x523f,	// (0x0002fcf0) list_setting_number_pane_g2

0x0001,

0xf673,	// (0x0003a124) list_setting_number_pane_g_ParamLimits

0xf673,	// (0x0003a124) list_setting_number_pane_g

0x524b,	// (0x0002fcfc) list_setting_number_pane_t1_ParamLimits

0x524b,	// (0x0002fcfc) list_setting_number_pane_t1

0x5264,	// (0x0002fd15) list_setting_number_pane_t2_ParamLimits

0x5264,	// (0x0002fd15) list_setting_number_pane_t2

0x527e,	// (0x0002fd2f) list_setting_number_pane_t3_ParamLimits

0x527e,	// (0x0002fd2f) list_setting_number_pane_t3

0x0003,

0xf678,	// (0x0003a129) list_setting_number_pane_t_ParamLimits

0xf678,	// (0x0003a129) list_setting_number_pane_t

0x5227,	// (0x0002fcd8) set_value_pane_ParamLimits

0x5227,	// (0x0002fcd8) set_value_pane

0x8439,	// (0x00032eea) bg_set_opt_pane_ParamLimits

0x8439,	// (0x00032eea) bg_set_opt_pane

0x52c1,	// (0x0002fd72) set_value_pane_t1

0x845a,	// (0x00032f0b) slider_set_pane_cp3

0x8463,	// (0x00032f14) volume_small_pane_cp

0x846c,	// (0x00032f1d) list_form_gen_pane

0x8475,	// (0x00032f26) scroll_pane_cp8

0x52d7,	// (0x0002fd88) form_field_data_pane_ParamLimits

0x52d7,	// (0x0002fd88) form_field_data_pane

0x52f7,	// (0x0002fda8) form_field_data_wide_pane_ParamLimits

0x52f7,	// (0x0002fda8) form_field_data_wide_pane

0x5318,	// (0x0002fdc9) form_field_popup_pane_ParamLimits

0x5318,	// (0x0002fdc9) form_field_popup_pane

0x5338,	// (0x0002fde9) form_field_popup_wide_pane_ParamLimits

0x5338,	// (0x0002fde9) form_field_popup_wide_pane

0x5355,	// (0x0002fe06) form_field_slider_pane_ParamLimits

0x5355,	// (0x0002fe06) form_field_slider_pane

0x5368,	// (0x0002fe19) form_field_slider_wide_pane_ParamLimits

0x5368,	// (0x0002fe19) form_field_slider_wide_pane

0x8486,	// (0x00032f37) data_form_pane

0x5385,	// (0x0002fe36) form_field_data_pane_t1

0x8492,	// (0x00032f43) input_focus_pane

0x84a0,	// (0x00032f51) data_form_wide_pane

0x53a9,	// (0x0002fe5a) form_field_data_wide_pane_t1

0x8203,	// (0x00032cb4) input_focus_pane_cp6

0x53cb,	// (0x0002fe7c) form_field_popup_pane_t1

0x8492,	// (0x00032f43) input_focus_pane_cp7

0x84cc,	// (0x00032f7d) list_form_pane

0x53eb,	// (0x0002fe9c) form_field_popup_wide_pane_t1

0x8492,	// (0x00032f43) input_focus_pane_cp8

0x84d8,	// (0x00032f89) list_form_wide_pane

0x5408,	// (0x0002feb9) form_field_slider_pane_t1_ParamLimits

0x5408,	// (0x0002feb9) form_field_slider_pane_t1

0x541e,	// (0x0002fecf) form_field_slider_pane_t2_ParamLimits

0x541e,	// (0x0002fecf) form_field_slider_pane_t2

0x0001,

0xf688,	// (0x0003a139) form_field_slider_pane_t_ParamLimits

0xf688,	// (0x0003a139) form_field_slider_pane_t

0x781d,	// (0x000322ce) input_focus_pane_cp9_ParamLimits

0x781d,	// (0x000322ce) input_focus_pane_cp9

0x5433,	// (0x0002fee4) slider_cont_pane_ParamLimits

0x5433,	// (0x0002fee4) slider_cont_pane

0x84e7,	// (0x00032f98) form_field_slider_wide_pane_t1_ParamLimits

0x84e7,	// (0x00032f98) form_field_slider_wide_pane_t1

0x5447,	// (0x0002fef8) form_field_slider_wide_pane_t2_ParamLimits

0x5447,	// (0x0002fef8) form_field_slider_wide_pane_t2

0x0001,

0xf68d,	// (0x0003a13e) form_field_slider_wide_pane_t_ParamLimits

0xf68d,	// (0x0003a13e) form_field_slider_wide_pane_t

0x781d,	// (0x000322ce) input_focus_pane_cp10_ParamLimits

0x781d,	// (0x000322ce) input_focus_pane_cp10

0x5459,	// (0x0002ff0a) slider_cont_pane_cp1_ParamLimits

0x5459,	// (0x0002ff0a) slider_cont_pane_cp1

0x546d,	// (0x0002ff1e) slider_form_pane_cp

0x84f9,	// (0x00032faa) input_focus_pane_g1

0x8501,	// (0x00032fb2) input_focus_pane_g2

0x8509,	// (0x00032fba) input_focus_pane_g3

0x8511,	// (0x00032fc2) input_focus_pane_g4

0x8519,	// (0x00032fca) input_focus_pane_g5

0x8521,	// (0x00032fd2) input_focus_pane_g6

0x8529,	// (0x00032fda) input_focus_pane_g7

0x8531,	// (0x00032fe2) input_focus_pane_g8

0x8539,	// (0x00032fea) input_focus_pane_g9

0x74b8,	// (0x00031f69) input_focus_pane_g10

0x0009,

0xf692,	// (0x0003a143) input_focus_pane_g

0x9fee,	// (0x00034a9f) wait_border_pane_g3_copy1

0x5475,	// (0x0002ff26) data_form_pane_t1

0x74b8,	// (0x00031f69) wait_anim_pane_g1_copy1

0x65a4,	// (0x00031055) data_form_wide_pane_t1

0x5490,	// (0x0002ff41) list_form_graphic_pane_cp_ParamLimits

0x5490,	// (0x0002ff41) list_form_graphic_pane_cp

0xaf24,	// (0x000359d5) slider_form_pane_g1

0xaf2d,	// (0x000359de) slider_form_pane_g2

0x0006,

0xf995,	// (0x0003a446) slider_form_pane_g

0x54a9,	// (0x0002ff5a) list_form_graphic_pane_ParamLimits

0x54a9,	// (0x0002ff5a) list_form_graphic_pane

0x54c5,	// (0x0002ff76) list_form_graphic_pane_g1

0x54cd,	// (0x0002ff7e) list_form_graphic_pane_t1_ParamLimits

0x54cd,	// (0x0002ff7e) list_form_graphic_pane_t1

0x75a2,	// (0x00032053) list_highlight_pane_cp5_ParamLimits

0x75a2,	// (0x00032053) list_highlight_pane_cp5

0x54e2,	// (0x0002ff93) find_pane_g1

0x8541,	// (0x00032ff2) input_find_pane

0x54eb,	// (0x0002ff9c) input_find_pane_g1_ParamLimits

0x54eb,	// (0x0002ff9c) input_find_pane_g1

0x54f7,	// (0x0002ffa8) input_find_pane_t1_ParamLimits

0x54f7,	// (0x0002ffa8) input_find_pane_t1

0x550c,	// (0x0002ffbd) input_find_pane_t2_ParamLimits

0x550c,	// (0x0002ffbd) input_find_pane_t2

0x0001,

0xf6a7,	// (0x0003a158) input_find_pane_t_ParamLimits

0xf6a7,	// (0x0003a158) input_find_pane_t

0x854a,	// (0x00032ffb) input_focus_pane_cp5_ParamLimits

0x854a,	// (0x00032ffb) input_focus_pane_cp5

0x8564,	// (0x00033015) bg_popup_window_pane_cp2_ParamLimits

0x8564,	// (0x00033015) bg_popup_window_pane_cp2

0x8571,	// (0x00033022) listscroll_menu_pane_ParamLimits

0x8571,	// (0x00033022) listscroll_menu_pane

0x857d,	// (0x0003302e) popup_submenu_window_ParamLimits

0x857d,	// (0x0003302e) popup_submenu_window

0x85a9,	// (0x0003305a) find_popup_pane_g1

0x85b1,	// (0x00033062) input_popup_find_pane_cp

0x854a,	// (0x00032ffb) input_focus_pane_cp4_ParamLimits

0x854a,	// (0x00032ffb) input_focus_pane_cp4

0x85c7,	// (0x00033078) input_popup_find_pane_t1_ParamLimits

0x85c7,	// (0x00033078) input_popup_find_pane_t1

0x74c2,	// (0x00031f73) bg_popup_sub_pane_cp

0x85f5,	// (0x000330a6) listscroll_popup_sub_pane

0x85fd,	// (0x000330ae) list_submenu_pane_ParamLimits

0x85fd,	// (0x000330ae) list_submenu_pane

0x860e,	// (0x000330bf) scroll_pane_cp4

0x8616,	// (0x000330c7) list_single_popup_submenu_pane_ParamLimits

0x8616,	// (0x000330c7) list_single_popup_submenu_pane

0x862a,	// (0x000330db) list_single_popup_submenu_pane_g1

0x8632,	// (0x000330e3) list_single_popup_submenu_pane_t1_ParamLimits

0x8632,	// (0x000330e3) list_single_popup_submenu_pane_t1

0x75a2,	// (0x00032053) bg_active_tab_pane_cp1_ParamLimits

0x75a2,	// (0x00032053) bg_active_tab_pane_cp1

0x8647,	// (0x000330f8) tabs_2_active_pane_g1

0x864f,	// (0x00033100) tabs_2_active_pane_t1

0x75a2,	// (0x00032053) bg_passive_tab_pane_cp1_ParamLimits

0x75a2,	// (0x00032053) bg_passive_tab_pane_cp1

0x8647,	// (0x000330f8) tabs_2_passive_pane_g1

0x864f,	// (0x00033100) tabs_2_passive_pane_t1

0x8661,	// (0x00033112) bg_active_tab_pane_cp4

0x866f,	// (0x00033120) tabs_2_long_active_pane_t1

0x8682,	// (0x00033133) bg_passive_tab_pane_cp4

0x61e4,	// (0x00030c95) list_single_midp_graphic_pane_g4_ParamLimits

0x8661,	// (0x00033112) bg_active_tab_pane_cp5

0x868e,	// (0x0003313f) tabs_3_long_active_pane_t1

0x8682,	// (0x00033133) bg_passive_tab_pane_cp5

0x61e4,	// (0x00030c95) list_single_midp_graphic_pane_g4

0x75a2,	// (0x00032053) bg_popup_window_pane_cp13_ParamLimits

0x75a2,	// (0x00032053) bg_popup_window_pane_cp13

0x86a9,	// (0x0003315a) listscroll_popup_fast_pane_ParamLimits

0x86a9,	// (0x0003315a) listscroll_popup_fast_pane

0x86b8,	// (0x00033169) grid_popup_fast_pane_ParamLimits

0x86b8,	// (0x00033169) grid_popup_fast_pane

0x86ca,	// (0x0003317b) scroll_pane_cp9_ParamLimits

0x86ca,	// (0x0003317b) scroll_pane_cp9

0xc898,	// (0x00037349) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc898,	// (0x00037349) list_single_graphic_hl_pane_t1_cp2

0x86ee,	// (0x0003319f) input_focus_pane_cp20_ParamLimits

0x86ee,	// (0x0003319f) input_focus_pane_cp20

0x86fc,	// (0x000331ad) query_popup_data_pane_t1_ParamLimits

0x86fc,	// (0x000331ad) query_popup_data_pane_t1

0x870f,	// (0x000331c0) query_popup_data_pane_t2_ParamLimits

0x870f,	// (0x000331c0) query_popup_data_pane_t2

0x8755,	// (0x00033206) query_popup_data_pane_t3_ParamLimits

0x8755,	// (0x00033206) query_popup_data_pane_t3

0x8796,	// (0x00033247) query_popup_data_pane_t4_ParamLimits

0x8796,	// (0x00033247) query_popup_data_pane_t4

0x87d2,	// (0x00033283) query_popup_data_pane_t5_ParamLimits

0x87d2,	// (0x00033283) query_popup_data_pane_t5

0x0004,

0xf6ac,	// (0x0003a15d) query_popup_data_pane_t_ParamLimits

0xf6ac,	// (0x0003a15d) query_popup_data_pane_t

0x84f9,	// (0x00032faa) bg_set_opt_pane_g1

0x8501,	// (0x00032fb2) bg_set_opt_pane_g2

0x8509,	// (0x00032fba) bg_set_opt_pane_g3

0x8511,	// (0x00032fc2) bg_set_opt_pane_g4

0x8519,	// (0x00032fca) bg_set_opt_pane_g5

0x8521,	// (0x00032fd2) bg_set_opt_pane_g6

0x8529,	// (0x00032fda) bg_set_opt_pane_g7

0x8531,	// (0x00032fe2) bg_set_opt_pane_g8

0x8539,	// (0x00032fea) bg_set_opt_pane_g9

0x0008,

0xf6b7,	// (0x0003a168) bg_set_opt_pane_g

0x584a,	// (0x000302fb) control_top_pane_stacon_ParamLimits

0x584a,	// (0x000302fb) control_top_pane_stacon

0x589d,	// (0x0003034e) signal_pane_stacon_ParamLimits

0x589d,	// (0x0003034e) signal_pane_stacon

0x8d91,	// (0x00033842) stacon_top_pane_g1_ParamLimits

0x8d91,	// (0x00033842) stacon_top_pane_g1

0x58c2,	// (0x00030373) title_pane_stacon_ParamLimits

0x58c2,	// (0x00030373) title_pane_stacon

0x58ec,	// (0x0003039d) uni_indicator_pane_stacon_ParamLimits

0x58ec,	// (0x0003039d) uni_indicator_pane_stacon

0x5901,	// (0x000303b2) battery_pane_stacon_ParamLimits

0x5901,	// (0x000303b2) battery_pane_stacon

0x5945,	// (0x000303f6) control_bottom_pane_stacon_ParamLimits

0x5945,	// (0x000303f6) control_bottom_pane_stacon

0x5968,	// (0x00030419) navi_pane_stacon_ParamLimits

0x5968,	// (0x00030419) navi_pane_stacon

0x8db3,	// (0x00033864) stacon_bottom_pane_g1_ParamLimits

0x8db3,	// (0x00033864) stacon_bottom_pane_g1

0x5521,	// (0x0002ffd2) aid_levels_signal_lsc_ParamLimits

0x5521,	// (0x0002ffd2) aid_levels_signal_lsc

0x5538,	// (0x0002ffe9) signal_pane_stacon_g1_ParamLimits

0x5538,	// (0x0002ffe9) signal_pane_stacon_g1

0x554c,	// (0x0002fffd) signal_pane_stacon_g2_ParamLimits

0x554c,	// (0x0002fffd) signal_pane_stacon_g2

0x0001,

0xf6ca,	// (0x0003a17b) signal_pane_stacon_g_ParamLimits

0xf6ca,	// (0x0003a17b) signal_pane_stacon_g

0x5581,	// (0x00030032) title_pane_stacon_t1_ParamLimits

0x5581,	// (0x00030032) title_pane_stacon_t1

0x8816,	// (0x000332c7) uni_indicator_pane_stacon_g1

0x8820,	// (0x000332d1) uni_indicator_pane_stacon_g2

0x882a,	// (0x000332db) uni_indicator_pane_stacon_g3

0x8834,	// (0x000332e5) uni_indicator_pane_stacon_g4

0x0003,

0xf6d6,	// (0x0003a187) uni_indicator_pane_stacon_g

0x55a6,	// (0x00030057) control_top_pane_stacon_g1

0x55ae,	// (0x0003005f) control_top_pane_stacon_t1_ParamLimits

0x55ae,	// (0x0003005f) control_top_pane_stacon_t1

0x55e5,	// (0x00030096) aid_levels_battery_lsc_ParamLimits

0x55e5,	// (0x00030096) aid_levels_battery_lsc

0x55fd,	// (0x000300ae) battery_pane_stacon_g1_ParamLimits

0x55fd,	// (0x000300ae) battery_pane_stacon_g1

0x5610,	// (0x000300c1) battery_pane_stacon_g2_ParamLimits

0x5610,	// (0x000300c1) battery_pane_stacon_g2

0x0001,

0xf6df,	// (0x0003a190) battery_pane_stacon_g_ParamLimits

0xf6df,	// (0x0003a190) battery_pane_stacon_g

0x564e,	// (0x000300ff) navi_icon_pane_stacon

0x5662,	// (0x00030113) navi_navi_pane_stacon

0x564e,	// (0x000300ff) navi_text_pane_stacon

0x55a6,	// (0x00030057) control_bottom_pane_stacon_g1

0x5676,	// (0x00030127) control_bottom_pane_stacon_t1_ParamLimits

0x5676,	// (0x00030127) control_bottom_pane_stacon_t1

0x8858,	// (0x00033309) grid_app_pane_ParamLimits

0x8858,	// (0x00033309) grid_app_pane

0x887c,	// (0x0003332d) scroll_pane_cp15_ParamLimits

0x887c,	// (0x0003332d) scroll_pane_cp15

0x8891,	// (0x00033342) cell_app_pane_ParamLimits

0x8891,	// (0x00033342) cell_app_pane

0x88b5,	// (0x00033366) cell_app_pane_g1_ParamLimits

0x88b5,	// (0x00033366) cell_app_pane_g1

0x88d5,	// (0x00033386) cell_app_pane_g2_ParamLimits

0x88d5,	// (0x00033386) cell_app_pane_g2

0x0001,

0xf6e4,	// (0x0003a195) cell_app_pane_g_ParamLimits

0xf6e4,	// (0x0003a195) cell_app_pane_g

0x88e1,	// (0x00033392) cell_app_pane_t1_ParamLimits

0x88e1,	// (0x00033392) cell_app_pane_t1

0x88f8,	// (0x000333a9) grid_highlight_pane_ParamLimits

0x88f8,	// (0x000333a9) grid_highlight_pane

0x84f9,	// (0x00032faa) cell_highlight_pane_g1

0x8501,	// (0x00032fb2) cell_highlight_pane_g2

0x8509,	// (0x00032fba) cell_highlight_pane_g3

0x8511,	// (0x00032fc2) cell_highlight_pane_g4

0x8519,	// (0x00032fca) cell_highlight_pane_g5

0x8521,	// (0x00032fd2) cell_highlight_pane_g6

0x8529,	// (0x00032fda) cell_highlight_pane_g7

0x8531,	// (0x00032fe2) cell_highlight_pane_g8

0x8539,	// (0x00032fea) cell_highlight_pane_g9

0x74b8,	// (0x00031f69) cell_highlight_pane_g10

0x0009,

0xf692,	// (0x0003a143) cell_highlight_pane_g

0x8909,	// (0x000333ba) bg_scroll_pane

0x56c0,	// (0x00030171) scroll_handle_pane

0x8950,	// (0x00033401) scroll_bg_pane_g1

0x8965,	// (0x00033416) scroll_bg_pane_g2

0x897d,	// (0x0003342e) scroll_bg_pane_g3

0x0002,

0xf6e9,	// (0x0003a19a) scroll_bg_pane_g

0x8992,	// (0x00033443) scroll_handle_focus_pane_ParamLimits

0x8992,	// (0x00033443) scroll_handle_focus_pane

0x8950,	// (0x00033401) scroll_handle_pane_g1

0x899f,	// (0x00033450) scroll_handle_pane_g2

0x897d,	// (0x0003342e) scroll_handle_pane_g3

0x0002,

0xf6f0,	// (0x0003a1a1) scroll_handle_pane_g

0x854a,	// (0x00032ffb) bg_popup_sub_pane_cp21_ParamLimits

0x854a,	// (0x00032ffb) bg_popup_sub_pane_cp21

0x89b3,	// (0x00033464) popup_fep_japan_predictive_window_t1_ParamLimits

0x89b3,	// (0x00033464) popup_fep_japan_predictive_window_t1

0x89cd,	// (0x0003347e) popup_fep_japan_predictive_window_t2_ParamLimits

0x89cd,	// (0x0003347e) popup_fep_japan_predictive_window_t2

0x8a00,	// (0x000334b1) popup_fep_japan_predictive_window_t3_ParamLimits

0x8a00,	// (0x000334b1) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f7,	// (0x0003a1a8) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f7,	// (0x0003a1a8) popup_fep_japan_predictive_window_t

0x74c2,	// (0x00031f73) bg_popup_sub_pane_cp23

0x8a37,	// (0x000334e8) listscroll_japin_cand_pane

0x8a3f,	// (0x000334f0) popup_fep_japan_candidate_window_t1

0x8a4d,	// (0x000334fe) candidate_pane_ParamLimits

0x8a4d,	// (0x000334fe) candidate_pane

0x8a5f,	// (0x00033510) scroll_pane_cp30

0x8a67,	// (0x00033518) list_single_popup_jap_candidate_pane_ParamLimits

0x8a67,	// (0x00033518) list_single_popup_jap_candidate_pane

0x74c2,	// (0x00031f73) list_highlight_pane_cp30

0x8a7c,	// (0x0003352d) list_single_popup_jap_candidate_pane_t1

0x8a8b,	// (0x0003353c) level_1_signal

0x8a98,	// (0x00033549) level_2_signal

0x8aa5,	// (0x00033556) level_3_signal

0x8ab2,	// (0x00033563) level_4_signal

0x8abf,	// (0x00033570) level_5_signal

0x8acc,	// (0x0003357d) level_6_signal

0x8ad9,	// (0x0003358a) level_7_signal

0x8a8b,	// (0x0003353c) level_1_battery

0x8a98,	// (0x00033549) level_2_battery

0x8aa5,	// (0x00033556) level_3_battery

0x8ab2,	// (0x00033563) level_4_battery

0x8abf,	// (0x00033570) level_5_battery

0x8acc,	// (0x0003357d) level_6_battery

0x8ad9,	// (0x0003358a) level_7_battery

0x8afe,	// (0x000335af) list_menu_pane_ParamLimits

0x8afe,	// (0x000335af) list_menu_pane

0x8b14,	// (0x000335c5) scroll_pane_cp25_ParamLimits

0x8b14,	// (0x000335c5) scroll_pane_cp25

0x8b2d,	// (0x000335de) list_double2_graphic_pane_cp2_ParamLimits

0x8b2d,	// (0x000335de) list_double2_graphic_pane_cp2

0x8b2d,	// (0x000335de) list_double2_large_graphic_pane_cp2_ParamLimits

0x8b2d,	// (0x000335de) list_double2_large_graphic_pane_cp2

0x8b2d,	// (0x000335de) list_double2_pane_cp2_ParamLimits

0x8b2d,	// (0x000335de) list_double2_pane_cp2

0x8b2d,	// (0x000335de) list_double_graphic_pane_cp2_ParamLimits

0x8b2d,	// (0x000335de) list_double_graphic_pane_cp2

0x8b2d,	// (0x000335de) list_double_large_graphic_pane_cp2_ParamLimits

0x8b2d,	// (0x000335de) list_double_large_graphic_pane_cp2

0x8b2d,	// (0x000335de) list_double_number_pane_cp2_ParamLimits

0x8b2d,	// (0x000335de) list_double_number_pane_cp2

0x8b2d,	// (0x000335de) list_double_pane_cp2_ParamLimits

0x8b2d,	// (0x000335de) list_double_pane_cp2

0x8b51,	// (0x00033602) list_single_2graphic_pane_cp2_ParamLimits

0x8b51,	// (0x00033602) list_single_2graphic_pane_cp2

0x8b51,	// (0x00033602) list_single_graphic_heading_pane_cp2_ParamLimits

0x8b51,	// (0x00033602) list_single_graphic_heading_pane_cp2

0x8b51,	// (0x00033602) list_single_graphic_pane_cp2_ParamLimits

0x8b51,	// (0x00033602) list_single_graphic_pane_cp2

0x8b51,	// (0x00033602) list_single_heading_pane_cp2_ParamLimits

0x8b51,	// (0x00033602) list_single_heading_pane_cp2

0x8b6a,	// (0x0003361b) list_single_large_graphic_pane_cp2_ParamLimits

0x8b6a,	// (0x0003361b) list_single_large_graphic_pane_cp2

0x8b51,	// (0x00033602) list_single_number_heading_pane_cp2_ParamLimits

0x8b51,	// (0x00033602) list_single_number_heading_pane_cp2

0x8b51,	// (0x00033602) list_single_number_pane_cp2_ParamLimits

0x8b51,	// (0x00033602) list_single_number_pane_cp2

0x8b51,	// (0x00033602) list_single_pane_cp2_ParamLimits

0x8b51,	// (0x00033602) list_single_pane_cp2

0x8be0,	// (0x00033691) bg_popup_sub_pane_cp22

0x5772,	// (0x00030223) popup_side_volume_key_window_g1

0x579c,	// (0x0003024d) popup_side_volume_key_window_t1

0x57b8,	// (0x00030269) volume_small_pane_cp1

0x781d,	// (0x000322ce) bg_popup_sub_pane_cp24_ParamLimits

0x781d,	// (0x000322ce) bg_popup_sub_pane_cp24

0x8bf6,	// (0x000336a7) fep_china_uni_candidate_pane_ParamLimits

0x8bf6,	// (0x000336a7) fep_china_uni_candidate_pane

0x8c0a,	// (0x000336bb) fep_china_uni_entry_pane

0x8c1a,	// (0x000336cb) popup_fep_china_uni_window_g1

0x8c36,	// (0x000336e7) fep_china_uni_entry_pane_g1

0x8c3e,	// (0x000336ef) fep_china_uni_entry_pane_g2

0x0001,

0xf728,	// (0x0003a1d9) fep_china_uni_entry_pane_g

0x8c46,	// (0x000336f7) fep_entry_item_pane

0x8c50,	// (0x00033701) fep_candidate_item_pane

0x8c58,	// (0x00033709) fep_china_uni_candidate_pane_g1

0x8c60,	// (0x00033711) fep_china_uni_candidate_pane_g2

0x8c68,	// (0x00033719) fep_china_uni_candidate_pane_g3

0x8c70,	// (0x00033721) fep_china_uni_candidate_pane_g4

0x0003,

0xf72d,	// (0x0003a1de) fep_china_uni_candidate_pane_g

0x74b8,	// (0x00031f69) fep_entry_item_pane_g1

0x8c78,	// (0x00033729) fep_entry_item_pane_t1_ParamLimits

0x8c78,	// (0x00033729) fep_entry_item_pane_t1

0x8c8e,	// (0x0003373f) fep_candidate_item_pane_t1_ParamLimits

0x8c8e,	// (0x0003373f) fep_candidate_item_pane_t1

0x8ca3,	// (0x00033754) fep_candidate_item_pane_t2_ParamLimits

0x8ca3,	// (0x00033754) fep_candidate_item_pane_t2

0x0001,

0xf736,	// (0x0003a1e7) fep_candidate_item_pane_t_ParamLimits

0xf736,	// (0x0003a1e7) fep_candidate_item_pane_t

0x75a2,	// (0x00032053) list_highlight_pane_cp31_ParamLimits

0x75a2,	// (0x00032053) list_highlight_pane_cp31

0x8cb5,	// (0x00033766) level_1_signal_lsc

0x8cbe,	// (0x0003376f) level_2_signal_lsc

0x8cc7,	// (0x00033778) level_3_signal_lsc

0x8cd0,	// (0x00033781) level_4_signal_lsc

0x8cd9,	// (0x0003378a) level_5_signal_lsc

0x8ce2,	// (0x00033793) level_6_signal_lsc

0x8ceb,	// (0x0003379c) level_7_signal_lsc

0x8ceb,	// (0x0003379c) level_1_battery_lsc

0x8cf4,	// (0x000337a5) level_2_battery_lsc

0x8cfd,	// (0x000337ae) level_3_battery_lsc

0x8d06,	// (0x000337b7) level_4_battery_lsc

0x8d0f,	// (0x000337c0) level_5_battery_lsc

0x8d18,	// (0x000337c9) level_6_battery_lsc

0x8cb5,	// (0x00033766) level_7_battery_lsc

0x8d21,	// (0x000337d2) scroll_handle_focus_pane_g1

0x8d2a,	// (0x000337db) scroll_handle_focus_pane_g2

0x8d33,	// (0x000337e4) scroll_handle_focus_pane_g3

0x0002,

0xf73b,	// (0x0003a1ec) scroll_handle_focus_pane_g

0x57c0,	// (0x00030271) list_single_2graphic_pane_g1_ParamLimits

0x57c0,	// (0x00030271) list_single_2graphic_pane_g1

0x4e8d,	// (0x0002f93e) list_single_2graphic_pane_g2_ParamLimits

0x4e8d,	// (0x0002f93e) list_single_2graphic_pane_g2

0x4e13,	// (0x0002f8c4) list_single_2graphic_pane_g3_ParamLimits

0x4e13,	// (0x0002f8c4) list_single_2graphic_pane_g3

0x57cc,	// (0x0003027d) list_single_2graphic_pane_g4_ParamLimits

0x57cc,	// (0x0003027d) list_single_2graphic_pane_g4

0x0003,

0xf742,	// (0x0003a1f3) list_single_2graphic_pane_g_ParamLimits

0xf742,	// (0x0003a1f3) list_single_2graphic_pane_g

0x57d8,	// (0x00030289) list_single_2graphic_pane_t1_ParamLimits

0x57d8,	// (0x00030289) list_single_2graphic_pane_t1

0x5806,	// (0x000302b7) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x5806,	// (0x000302b7) list_double2_graphic_large_graphic_pane_g1

0x50ee,	// (0x0002fb9f) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x50ee,	// (0x0002fb9f) list_double2_graphic_large_graphic_pane_g2

0x5024,	// (0x0002fad5) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x5024,	// (0x0002fad5) list_double2_graphic_large_graphic_pane_g3

0x5816,	// (0x000302c7) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x5816,	// (0x000302c7) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf74b,	// (0x0003a1fc) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf74b,	// (0x0003a1fc) list_double2_graphic_large_graphic_pane_g

0x5822,	// (0x000302d3) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x5822,	// (0x000302d3) list_double2_graphic_large_graphic_pane_t1

0x5838,	// (0x000302e9) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x5838,	// (0x000302e9) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf754,	// (0x0003a205) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf754,	// (0x0003a205) list_double2_graphic_large_graphic_pane_t

0x8e7b,	// (0x0003392c) popup_fast_swap_window_ParamLimits

0x8e7b,	// (0x0003392c) popup_fast_swap_window

0x8e97,	// (0x00033948) popup_side_volume_key_window

0x8eb3,	// (0x00033964) stacon_top_pane

0x8ebd,	// (0x0003396e) status_pane_ParamLimits

0x8ebd,	// (0x0003396e) status_pane

0x8eb3,	// (0x00033964) status_small_pane

0x74c2,	// (0x00031f73) control_pane

0x74c2,	// (0x00031f73) stacon_bottom_pane

0x8475,	// (0x00032f26) scroll_pane_cp121

0x846c,	// (0x00032f1d) set_content_pane

0x8d3c,	// (0x000337ed) bg_active_tab_pane_g1_cp1

0x8d45,	// (0x000337f6) bg_active_tab_pane_g2_cp1

0x8d4e,	// (0x000337ff) bg_active_tab_pane_g3_cp1

0x8d3c,	// (0x000337ed) bg_passive_tab_pane_g1_cp1

0x8d45,	// (0x000337f6) bg_passive_tab_pane_g2_cp1

0x8d4e,	// (0x000337ff) bg_passive_tab_pane_g3_cp1

0x8d57,	// (0x00033808) bg_active_tab_pane_g1_cp2

0x8d45,	// (0x000337f6) bg_active_tab_pane_g2_cp2

0x8d60,	// (0x00033811) bg_active_tab_pane_g3_cp2

0x8d57,	// (0x00033808) bg_passive_tab_pane_g1_cp2

0x8d45,	// (0x000337f6) bg_passive_tab_pane_g2_cp2

0x8d60,	// (0x00033811) bg_passive_tab_pane_g3_cp2

0x8d69,	// (0x0003381a) bg_active_tab_pane_g1_cp3

0x8d45,	// (0x000337f6) bg_active_tab_pane_g2_cp3

0x8d72,	// (0x00033823) bg_active_tab_pane_g3_cp3

0x8d69,	// (0x0003381a) bg_passive_tab_pane_g1_cp3

0x8d45,	// (0x000337f6) bg_passive_tab_pane_g2_cp3

0x8d72,	// (0x00033823) bg_passive_tab_pane_g3_cp3

0x8d7b,	// (0x0003382c) bg_active_tab_pane_g1_cp4

0x8d45,	// (0x000337f6) bg_active_tab_pane_g2_cp4

0x8d86,	// (0x00033837) bg_active_tab_pane_g3_cp4

0x8d7b,	// (0x0003382c) bg_passive_tab_pane_g1_cp4

0x8d45,	// (0x000337f6) bg_passive_tab_pane_g2_cp4

0x8d86,	// (0x00033837) bg_passive_tab_pane_g3_cp4

0x8dcf,	// (0x00033880) bg_active_tab_pane_g1_cp5

0x8d45,	// (0x000337f6) bg_active_tab_pane_g2_cp5

0x8dd8,	// (0x00033889) bg_active_tab_pane_g3_cp5

0x8dcf,	// (0x00033880) bg_passive_tab_pane_g1_cp5

0x8d45,	// (0x000337f6) bg_passive_tab_pane_g2_cp5

0x8dd8,	// (0x00033889) bg_passive_tab_pane_g3_cp5

0x8de1,	// (0x00033892) list_set_graphic_pane_ParamLimits

0x8de1,	// (0x00033892) list_set_graphic_pane

0x74c2,	// (0x00031f73) bg_set_opt_pane_cp4

0x8dfe,	// (0x000338af) list_set_graphic_pane_g1_ParamLimits

0x8dfe,	// (0x000338af) list_set_graphic_pane_g1

0x8e0a,	// (0x000338bb) list_set_graphic_pane_g2_ParamLimits

0x8e0a,	// (0x000338bb) list_set_graphic_pane_g2

0x0001,

0xf759,	// (0x0003a20a) list_set_graphic_pane_g_ParamLimits

0xf759,	// (0x0003a20a) list_set_graphic_pane_g

0x0009,

0xfada,	// (0x0003a58b) volume_small_pane_cp_g

0x8e2e,	// (0x000338df) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x8e2e,	// (0x000338df) list_double2_large_graphic_pane_g1_cp2

0x8e3a,	// (0x000338eb) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x8e3a,	// (0x000338eb) list_double2_large_graphic_pane_g2_cp2

0x8e4b,	// (0x000338fc) list_double2_large_graphic_pane_g3_cp2

0x8e53,	// (0x00033904) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x8e53,	// (0x00033904) list_double2_large_graphic_pane_t1_cp2

0x8e69,	// (0x0003391a) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x8e69,	// (0x0003391a) list_double2_large_graphic_pane_t2_cp2

0xaac1,	// (0x00035572) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xaac1,	// (0x00035572) list_double_large_graphic_pane_g1_cp2

0xaad2,	// (0x00035583) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xaad2,	// (0x00035583) list_double_large_graphic_pane_g2_cp2

0x8fd9,	// (0x00033a8a) list_double_large_graphic_pane_g3_cp2

0xaae3,	// (0x00035594) list_double_large_graphic_pane_g4_cp

0xaaeb,	// (0x0003559c) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xaaeb,	// (0x0003559c) list_double_large_graphic_pane_t1_cp2

0xab02,	// (0x000355b3) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xab02,	// (0x000355b3) list_double_large_graphic_pane_t2_cp2

0x8ecb,	// (0x0003397c) list_double2_graphic_pane_g1_cp2_ParamLimits

0x8ecb,	// (0x0003397c) list_double2_graphic_pane_g1_cp2

0x8ed9,	// (0x0003398a) list_double2_graphic_pane_g2_cp2_ParamLimits

0x8ed9,	// (0x0003398a) list_double2_graphic_pane_g2_cp2

0x8eea,	// (0x0003399b) list_double2_graphic_pane_g3_cp2

0x8ef4,	// (0x000339a5) list_double2_graphic_pane_t1_cp2_ParamLimits

0x8ef4,	// (0x000339a5) list_double2_graphic_pane_t1_cp2

0x8f0a,	// (0x000339bb) list_double2_graphic_pane_t2_cp2_ParamLimits

0x8f0a,	// (0x000339bb) list_double2_graphic_pane_t2_cp2

0x8f1c,	// (0x000339cd) list_single_number_heading_pane_g1_cp2_ParamLimits

0x8f1c,	// (0x000339cd) list_single_number_heading_pane_g1_cp2

0x8f28,	// (0x000339d9) list_single_number_heading_pane_g2_cp2

0x8f30,	// (0x000339e1) list_single_number_heading_pane_t1_cp2_ParamLimits

0x8f30,	// (0x000339e1) list_single_number_heading_pane_t1_cp2

0x8f46,	// (0x000339f7) list_single_number_heading_pane_t2_cp2_ParamLimits

0x8f46,	// (0x000339f7) list_single_number_heading_pane_t2_cp2

0x8f58,	// (0x00033a09) list_single_number_heading_pane_t3_cp2_ParamLimits

0x8f58,	// (0x00033a09) list_single_number_heading_pane_t3_cp2

0x8f1c,	// (0x000339cd) list_single_heading_pane_g1_cp2_ParamLimits

0x8f1c,	// (0x000339cd) list_single_heading_pane_g1_cp2

0x8f28,	// (0x000339d9) list_single_heading_pane_g2_cp2

0x8f30,	// (0x000339e1) list_single_heading_pane_t1_cp2_ParamLimits

0x8f30,	// (0x000339e1) list_single_heading_pane_t1_cp2

0xa8c9,	// (0x0003537a) list_single_heading_pane_t2_cp2_ParamLimits

0xa8c9,	// (0x0003537a) list_single_heading_pane_t2_cp2

0xa811,	// (0x000352c2) list_double_graphic_pane_g1_cp2_ParamLimits

0xa811,	// (0x000352c2) list_double_graphic_pane_g1_cp2

0xa81d,	// (0x000352ce) list_double_graphic_pane_g2_cp2_ParamLimits

0xa81d,	// (0x000352ce) list_double_graphic_pane_g2_cp2

0xa82c,	// (0x000352dd) list_double_graphic_pane_g3_cp2

0xa834,	// (0x000352e5) list_double_graphic_pane_t1_cp2_ParamLimits

0xa834,	// (0x000352e5) list_double_graphic_pane_t1_cp2

0xa84a,	// (0x000352fb) list_double_graphic_pane_t2_cp2_ParamLimits

0xa84a,	// (0x000352fb) list_double_graphic_pane_t2_cp2

0x8fcd,	// (0x00033a7e) list_double_number_pane_g1_cp2_ParamLimits

0x8fcd,	// (0x00033a7e) list_double_number_pane_g1_cp2

0x8fd9,	// (0x00033a8a) list_double_number_pane_g2_cp2

0xa7d5,	// (0x00035286) list_double_number_pane_t1_cp2_ParamLimits

0xa7d5,	// (0x00035286) list_double_number_pane_t1_cp2

0xa7e9,	// (0x0003529a) list_double_number_pane_t2_cp2_ParamLimits

0xa7e9,	// (0x0003529a) list_double_number_pane_t2_cp2

0xa7ff,	// (0x000352b0) list_double_number_pane_t3_cp2_ParamLimits

0xa7ff,	// (0x000352b0) list_double_number_pane_t3_cp2

0xa6be,	// (0x0003516f) list_single_graphic_pane_g1_cp2_ParamLimits

0xa6be,	// (0x0003516f) list_single_graphic_pane_g1_cp2

0x9031,	// (0x00033ae2) list_single_graphic_pane_g2_cp2_ParamLimits

0x9031,	// (0x00033ae2) list_single_graphic_pane_g2_cp2

0x903d,	// (0x00033aee) list_single_graphic_pane_g3_cp2

0xa694,	// (0x00035145) list_single_graphic_pane_t1_cp2_ParamLimits

0xa694,	// (0x00035145) list_single_graphic_pane_t1_cp2

0x9031,	// (0x00033ae2) list_single_number_pane_g1_cp2_ParamLimits

0x9031,	// (0x00033ae2) list_single_number_pane_g1_cp2

0x903d,	// (0x00033aee) list_single_number_pane_g2_cp2

0xa694,	// (0x00035145) list_single_number_pane_t1_cp2_ParamLimits

0xa694,	// (0x00035145) list_single_number_pane_t1_cp2

0xa6aa,	// (0x0003515b) list_single_number_pane_t2_cp2_ParamLimits

0xa6aa,	// (0x0003515b) list_single_number_pane_t2_cp2

0x8e3a,	// (0x000338eb) list_double2_pane_g1_cp2_ParamLimits

0x8e3a,	// (0x000338eb) list_double2_pane_g1_cp2

0x8e4b,	// (0x000338fc) list_double2_pane_g2_cp2

0x8fa5,	// (0x00033a56) list_double2_pane_t1_cp2_ParamLimits

0x8fa5,	// (0x00033a56) list_double2_pane_t1_cp2

0x8fbb,	// (0x00033a6c) list_double2_pane_t2_cp2_ParamLimits

0x8fbb,	// (0x00033a6c) list_double2_pane_t2_cp2

0x8fcd,	// (0x00033a7e) list_double_pane_g1_cp2_ParamLimits

0x8fcd,	// (0x00033a7e) list_double_pane_g1_cp2

0x8fd9,	// (0x00033a8a) list_double_pane_g2_cp2

0x8fe1,	// (0x00033a92) list_double_pane_t1_cp2_ParamLimits

0x8fe1,	// (0x00033a92) list_double_pane_t1_cp2

0x8ff7,	// (0x00033aa8) list_double_pane_t2_cp2_ParamLimits

0x8ff7,	// (0x00033aa8) list_double_pane_t2_cp2

0x9021,	// (0x00033ad2) list_single_pane_cp2_g3

0x9031,	// (0x00033ae2) list_single_pane_g1_cp2_ParamLimits

0x9031,	// (0x00033ae2) list_single_pane_g1_cp2

0x903d,	// (0x00033aee) list_single_pane_g2_cp2

0x9045,	// (0x00033af6) list_single_pane_t1_cp2_ParamLimits

0x9045,	// (0x00033af6) list_single_pane_t1_cp2

0x905d,	// (0x00033b0e) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x905d,	// (0x00033b0e) list_single_large_graphic_pane_g1_cp2

0x9069,	// (0x00033b1a) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x9069,	// (0x00033b1a) list_single_large_graphic_pane_g2_cp2

0x9075,	// (0x00033b26) list_single_large_graphic_pane_g3_cp2

0x907d,	// (0x00033b2e) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x907d,	// (0x00033b2e) list_single_large_graphic_pane_g4_cp1

0x9097,	// (0x00033b48) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x9097,	// (0x00033b48) list_single_large_graphic_pane_t1_cp2

0xa660,	// (0x00035111) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa660,	// (0x00035111) list_single_graphic_heading_pane_g1_cp2

0xa62d,	// (0x000350de) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa62d,	// (0x000350de) list_single_graphic_heading_pane_g4_cp2

0x903d,	// (0x00033aee) list_single_graphic_heading_pane_g5_cp2

0xa66c,	// (0x0003511d) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa66c,	// (0x0003511d) list_single_graphic_heading_pane_t1_cp2

0xa682,	// (0x00035133) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa682,	// (0x00035133) list_single_graphic_heading_pane_t2_cp2

0xa621,	// (0x000350d2) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa621,	// (0x000350d2) list_single_2graphic_pane_g1_cp2

0xa62d,	// (0x000350de) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa62d,	// (0x000350de) list_single_2graphic_pane_g2_cp2

0x903d,	// (0x00033aee) list_single_2graphic_pane_g3_cp2

0xa63e,	// (0x000350ef) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa63e,	// (0x000350ef) list_single_2graphic_pane_g4_cp2

0xa64a,	// (0x000350fb) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa64a,	// (0x000350fb) list_single_2graphic_pane_t1_cp2

0x74b8,	// (0x00031f69) list_highlight_pane_g10_cp1

0xa1f9,	// (0x00034caa) list_highlight_pane_g1_cp1

0xa201,	// (0x00034cb2) list_highlight_pane_g2_cp1

0xa209,	// (0x00034cba) list_highlight_pane_g3_cp1

0xa211,	// (0x00034cc2) list_highlight_pane_g4_cp1

0xa219,	// (0x00034cca) list_highlight_pane_g5_cp1

0xa221,	// (0x00034cd2) list_highlight_pane_g6_cp1

0xa229,	// (0x00034cda) list_highlight_pane_g7_cp1

0xa231,	// (0x00034ce2) list_highlight_pane_g8_cp1

0xa239,	// (0x00034cea) list_highlight_pane_g9_cp1

0xa119,	// (0x00034bca) form_field_slider_pane_t3

0xa127,	// (0x00034bd8) form_field_slider_pane_t4

0xa135,	// (0x00034be6) slider_form_pane_ParamLimits

0xa135,	// (0x00034be6) slider_form_pane

0x74c2,	// (0x00031f73) control_abbreviations

0x74c2,	// (0x00031f73) control_conventions

0x74c2,	// (0x00031f73) control_definitions

0x74c2,	// (0x00031f73) format_table_attribute

0xa913,	// (0x000353c4) bg_popup_preview_window_pane_g9

0x74c2,	// (0x00031f73) format_table_data2

0x74c2,	// (0x00031f73) format_table_data3

0x74c2,	// (0x00031f73) format_table_data_example

0x0008,

0x74c2,	// (0x00031f73) intro_purpose

0xf8f5,	// (0x0003a3a6) bg_popup_preview_window_pane_g

0x74c2,	// (0x00031f73) texts_category

0x74c2,	// (0x00031f73) texts_graphics

0x90ad,	// (0x00033b5e) text_digital

0x90bc,	// (0x00033b6d) text_primary

0x90cb,	// (0x00033b7c) text_primary_small

0x90da,	// (0x00033b8b) text_secondary

0x90e9,	// (0x00033b9a) text_title

0xb045,	// (0x00035af6) bg_passive_tab_pane_g1_cp3_srt

0x8d45,	// (0x000337f6) bg_passive_tab_pane_g2_cp3_srt

0xb04e,	// (0x00035aff) bg_passive_tab_pane_g3_cp3_srt

0x75a2,	// (0x00032053) bg_active_tab_pane_cp3_srt_ParamLimits

0x75a2,	// (0x00032053) bg_active_tab_pane_cp3_srt

0xb057,	// (0x00035b08) tabs_4_active_pane_srt_g1

0xb05f,	// (0x00035b10) tabs_4_active_pane_srt_t1_ParamLimits

0xb05f,	// (0x00035b10) tabs_4_active_pane_srt_t1

0xb045,	// (0x00035af6) bg_active_tab_pane_g1_cp3_copy1

0x8d45,	// (0x000337f6) bg_active_tab_pane_g2_cp3_copy1

0xb04e,	// (0x00035aff) bg_active_tab_pane_g3_cp3_copy1

0x75a2,	// (0x00032053) tabs_2_long_active_pane_srt_ParamLimits

0x75a2,	// (0x00032053) tabs_2_long_active_pane_srt

0x75a2,	// (0x00032053) tabs_2_long_passive_pane_srt_ParamLimits

0x75a2,	// (0x00032053) tabs_2_long_passive_pane_srt

0x8682,	// (0x00033133) bg_passive_tab_pane_cp4_srt_ParamLimits

0x8682,	// (0x00033133) bg_passive_tab_pane_cp4_srt

0xad57,	// (0x00035808) bg_passive_tab_pane_g1_cp4_srt

0x8d45,	// (0x000337f6) bg_passive_tab_pane_g2_cp4_srt

0xad60,	// (0x00035811) bg_passive_tab_pane_g3_cp4_srt

0x8661,	// (0x00033112) bg_active_tab_pane_cp4_srt_ParamLimits

0x8661,	// (0x00033112) bg_active_tab_pane_cp4_srt

0xad69,	// (0x0003581a) tabs_2_long_active_pane_srt_t1_ParamLimits

0xad69,	// (0x0003581a) tabs_2_long_active_pane_srt_t1

0xad57,	// (0x00035808) bg_active_tab_pane_g1_cp4_srt

0x8d45,	// (0x000337f6) bg_active_tab_pane_g2_cp4_srt

0xad60,	// (0x00035811) bg_active_tab_pane_g3_cp4_srt

0x781d,	// (0x000322ce) tabs_3_long_active_pane_srt_ParamLimits

0x781d,	// (0x000322ce) tabs_3_long_active_pane_srt

0x781d,	// (0x000322ce) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x781d,	// (0x000322ce) tabs_3_long_passive_pane_cp_srt

0x781d,	// (0x000322ce) tabs_3_long_passive_pane_srt_ParamLimits

0x781d,	// (0x000322ce) tabs_3_long_passive_pane_srt

0x8682,	// (0x00033133) bg_passive_tab_pane_cp5_srt_ParamLimits

0x8682,	// (0x00033133) bg_passive_tab_pane_cp5_srt

0x8dcf,	// (0x00033880) bg_passive_tab_pane_g1_cp5_srt

0x8d45,	// (0x000337f6) bg_passive_tab_pane_g2_cp5_srt

0x8dd8,	// (0x00033889) bg_passive_tab_pane_g3_cp5_srt

0x8661,	// (0x00033112) bg_active_tab_pane_cp5_srt_ParamLimits

0x8661,	// (0x00033112) bg_active_tab_pane_cp5_srt

0xad45,	// (0x000357f6) tabs_3_long_active_pane_srt_t1_ParamLimits

0xad45,	// (0x000357f6) tabs_3_long_active_pane_srt_t1

0x8dcf,	// (0x00033880) bg_active_tab_pane_g1_cp5_srt

0x8d45,	// (0x000337f6) bg_active_tab_pane_g2_cp5_srt

0x8dd8,	// (0x00033889) bg_active_tab_pane_g3_cp5_srt

0xad37,	// (0x000357e8) navi_text_pane_srt_t1

0xad2f,	// (0x000357e0) navi_icon_pane_srt_g1

0x92b0,	// (0x00033d61) midp_editing_number_pane_srt

0x90f8,	// (0x00033ba9) midp_ticker_pane_srt

0x92b8,	// (0x00033d69) midp_ticker_pane_srt_g1

0x92c0,	// (0x00033d71) midp_ticker_pane_srt_g2

0x0001,

0xf778,	// (0x0003a229) midp_ticker_pane_srt_g

0x92c8,	// (0x00033d79) midp_ticker_pane_srt_t1

0xad20,	// (0x000357d1) midp_editing_number_pane_t1_copy1

0x8682,	// (0x00033133) listscroll_midp_pane

0x8682,	// (0x00033133) midp_form_pane

0x9162,	// (0x00033c13) midp_info_popup_window_ParamLimits

0x9162,	// (0x00033c13) midp_info_popup_window

0x854a,	// (0x00032ffb) bg_popup_sub_pane_cp50_ParamLimits

0x854a,	// (0x00032ffb) bg_popup_sub_pane_cp50

0x9e25,	// (0x000348d6) listscroll_midp_info_pane_ParamLimits

0x9e25,	// (0x000348d6) listscroll_midp_info_pane

0x9e0d,	// (0x000348be) listscroll_form_midp_pane_ParamLimits

0x9e0d,	// (0x000348be) listscroll_form_midp_pane

0x9e19,	// (0x000348ca) scroll_bar_cp050

0x9ded,	// (0x0003489e) list_midp_pane

0xbb1f,	// (0x000365d0) signal_pane_g2_cp

0x9d27,	// (0x000347d8) listscroll_midp_info_pane_t1_ParamLimits

0x9d27,	// (0x000347d8) listscroll_midp_info_pane_t1

0x9d3f,	// (0x000347f0) listscroll_midp_info_pane_t2_ParamLimits

0x9d3f,	// (0x000347f0) listscroll_midp_info_pane_t2

0x9d7d,	// (0x0003482e) listscroll_midp_info_pane_t3_ParamLimits

0x9d7d,	// (0x0003482e) listscroll_midp_info_pane_t3

0x9db7,	// (0x00034868) listscroll_midp_info_pane_t4_ParamLimits

0x9db7,	// (0x00034868) listscroll_midp_info_pane_t4

0x0003,

0xf830,	// (0x0003a2e1) listscroll_midp_info_pane_t_ParamLimits

0xf830,	// (0x0003a2e1) listscroll_midp_info_pane_t

0x860e,	// (0x000330bf) scroll_pane_cp21

0x9cc5,	// (0x00034776) form_midp_field_choice_group_pane

0x9cce,	// (0x0003477f) form_midp_field_text_pane

0x9d0d,	// (0x000347be) form_midp_field_time_pane

0x9d15,	// (0x000347c6) form_midp_gauge_slider_pane

0x9d1e,	// (0x000347cf) form_midp_gauge_wait_pane

0x74c2,	// (0x00031f73) form_midp_image_pane

0x631e,	// (0x00030dcf) list_single_midp_pane_ParamLimits

0x631e,	// (0x00030dcf) list_single_midp_pane

0x9c7d,	// (0x0003472e) form_midp_field_text_pane_t1

0x9a47,	// (0x000344f8) input_focus_pane_cp050

0x9cb4,	// (0x00034765) list_midp_form_text_pane

0x9c4c,	// (0x000346fd) form_midp_field_choice_group_pane_t1

0x9c5a,	// (0x0003470b) input_focus_pane_cp051

0x9c6e,	// (0x0003471f) list_midp_choice_pane

0x74c2,	// (0x00031f73) status_idle_pane

0x9c30,	// (0x000346e1) form_midp_field_time_pane_t1

0x74b8,	// (0x00031f69) wait_anim_pane_g2_copy1

0x9c3e,	// (0x000346ef) form_midp_field_time_pane_t2

0x0001,

0x9210,	// (0x00033cc1) aid_navinavi_width_2_pane

0xf82b,	// (0x0003a2dc) form_midp_field_time_pane_t

0x74c2,	// (0x00031f73) input_focus_pane_cp052

0x74c2,	// (0x00031f73) bg_input_focus_pane_cp040

0x9bf0,	// (0x000346a1) form_midp_gauge_slider_pane_t1

0x9bfe,	// (0x000346af) form_midp_gauge_slider_pane_t2

0x9c0c,	// (0x000346bd) form_midp_gauge_slider_pane_t3

0x9c1a,	// (0x000346cb) form_midp_gauge_slider_pane_t4

0x0003,

0xf822,	// (0x0003a2d3) form_midp_gauge_slider_pane_t

0x9c28,	// (0x000346d9) form_midp_slider_pane

0x75a2,	// (0x00032053) bg_input_focus_pane_cp041_ParamLimits

0x75a2,	// (0x00032053) bg_input_focus_pane_cp041

0x9bbd,	// (0x0003466e) form_midp_gauge_wait_pane_t1_ParamLimits

0x9bbd,	// (0x0003466e) form_midp_gauge_wait_pane_t1

0x9bcf,	// (0x00034680) form_midp_gauge_wait_pane_t2_ParamLimits

0x9bcf,	// (0x00034680) form_midp_gauge_wait_pane_t2

0x0001,

0xf81d,	// (0x0003a2ce) form_midp_gauge_wait_pane_t_ParamLimits

0xf81d,	// (0x0003a2ce) form_midp_gauge_wait_pane_t

0x9be1,	// (0x00034692) form_midp_wait_pane_ParamLimits

0x9be1,	// (0x00034692) form_midp_wait_pane

0x9b87,	// (0x00034638) form_midp_image_pane_g1

0x9b90,	// (0x00034641) form_midp_image_pane_t1

0x9b9f,	// (0x00034650) form_midp_image_pane_t2

0x9bae,	// (0x0003465f) form_midp_image_pane_t3

0x0002,

0xf816,	// (0x0003a2c7) form_midp_image_pane_t

0x9b7e,	// (0x0003462f) list_single_midp_pane_g1

0x630f,	// (0x00030dc0) list_single_midp_pane_t1

0x9b56,	// (0x00034607) list_midp_form_item_pane_ParamLimits

0x9b56,	// (0x00034607) list_midp_form_item_pane

0x91b8,	// (0x00033c69) list_midp_form_item_pane_t1

0x91c7,	// (0x00033c78) midp_ticker_pane_g1

0x91d3,	// (0x00033c84) midp_ticker_pane_g2

0x0001,

0xf75e,	// (0x0003a20f) midp_ticker_pane_g

0x91df,	// (0x00033c90) midp_ticker_pane_t1

0xaf71,	// (0x00035a22) midp_editing_number_pane_t1

0xaf4f,	// (0x00035a00) midp_editing_number_pane

0xaf5e,	// (0x00035a0f) midp_ticker_pane

0xad10,	// (0x000357c1) ai_message_heading_pane

0x74c2,	// (0x00031f73) bg_popup_window_pane_cp14

0xad18,	// (0x000357c9) listscroll_ai_message_pane

0xac9a,	// (0x0003574b) ai_message_heading_pane_g1_ParamLimits

0xac9a,	// (0x0003574b) ai_message_heading_pane_g1

0xaca6,	// (0x00035757) ai_message_heading_pane_g2_ParamLimits

0xaca6,	// (0x00035757) ai_message_heading_pane_g2

0xacb2,	// (0x00035763) ai_message_heading_pane_g3_ParamLimits

0xacb2,	// (0x00035763) ai_message_heading_pane_g3

0xacbe,	// (0x0003576f) ai_message_heading_pane_g4_ParamLimits

0xacbe,	// (0x0003576f) ai_message_heading_pane_g4

0x0003,

0xf957,	// (0x0003a408) ai_message_heading_pane_g_ParamLimits

0xf957,	// (0x0003a408) ai_message_heading_pane_g

0xacca,	// (0x0003577b) ai_message_heading_pane_t1_ParamLimits

0xacca,	// (0x0003577b) ai_message_heading_pane_t1

0xace4,	// (0x00035795) ai_message_heading_pane_t2_ParamLimits

0xace4,	// (0x00035795) ai_message_heading_pane_t2

0x0001,

0xf960,	// (0x0003a411) ai_message_heading_pane_t_ParamLimits

0xf960,	// (0x0003a411) ai_message_heading_pane_t

0xacf6,	// (0x000357a7) bg_popup_heading_pane_cp1_ParamLimits

0xacf6,	// (0x000357a7) bg_popup_heading_pane_cp1

0xac88,	// (0x00035739) list_ai_message_pane_ParamLimits

0xac88,	// (0x00035739) list_ai_message_pane

0x860e,	// (0x000330bf) scroll_pane_cp10

0xac24,	// (0x000356d5) list_ai_message_pane_g1

0xac2c,	// (0x000356dd) list_ai_message_pane_g2

0x0001,

0xf934,	// (0x0003a3e5) list_ai_message_pane_g

0xac34,	// (0x000356e5) list_ai_message_pane_t1_ParamLimits

0xac34,	// (0x000356e5) list_ai_message_pane_t1

0xac49,	// (0x000356fa) list_ai_message_pane_t2_ParamLimits

0xac49,	// (0x000356fa) list_ai_message_pane_t2

0xac5e,	// (0x0003570f) list_ai_message_pane_t3_ParamLimits

0xac5e,	// (0x0003570f) list_ai_message_pane_t3

0xac73,	// (0x00035724) list_ai_message_pane_t4_ParamLimits

0xac73,	// (0x00035724) list_ai_message_pane_t4

0x0003,

0xf939,	// (0x0003a3ea) list_ai_message_pane_t_ParamLimits

0xf939,	// (0x0003a3ea) list_ai_message_pane_t

0xac0f,	// (0x000356c0) cell_ai_soft_ind_pane_ParamLimits

0xac0f,	// (0x000356c0) cell_ai_soft_ind_pane

0x91f1,	// (0x00033ca2) cell_ai_soft_ind_pane_g1_ParamLimits

0x91f1,	// (0x00033ca2) cell_ai_soft_ind_pane_g1

0x74c2,	// (0x00031f73) grid_highlight_cp1

0x91fe,	// (0x00033caf) text_secondary_cp56_ParamLimits

0x91fe,	// (0x00033caf) text_secondary_cp56

0xabe4,	// (0x00035695) example_general_pane_ParamLimits

0xabe4,	// (0x00035695) example_general_pane

0xabf0,	// (0x000356a1) example_parent_pane_g1_ParamLimits

0xabf0,	// (0x000356a1) example_parent_pane_g1

0xabfc,	// (0x000356ad) example_parent_pane_t1_ParamLimits

0xabfc,	// (0x000356ad) example_parent_pane_t1

0x5f25,	// (0x000309d6) popup_preview_text_window_ParamLimits

0x5f25,	// (0x000309d6) popup_preview_text_window

0x9029,	// (0x00033ada) list_single_pane_cp2_g4

0x7f57,	// (0x00032a08) bg_popup_preview_window_pane_ParamLimits

0x7f57,	// (0x00032a08) bg_popup_preview_window_pane

0xa91b,	// (0x000353cc) popup_preview_text_window_t1_ParamLimits

0xa91b,	// (0x000353cc) popup_preview_text_window_t1

0xa939,	// (0x000353ea) popup_preview_text_window_t2_ParamLimits

0xa939,	// (0x000353ea) popup_preview_text_window_t2

0xa982,	// (0x00035433) popup_preview_text_window_t3_ParamLimits

0xa982,	// (0x00035433) popup_preview_text_window_t3

0xa9c7,	// (0x00035478) popup_preview_text_window_t4_ParamLimits

0xa9c7,	// (0x00035478) popup_preview_text_window_t4

0x0004,

0xf908,	// (0x0003a3b9) popup_preview_text_window_t_ParamLimits

0xf908,	// (0x0003a3b9) popup_preview_text_window_t

0xaa45,	// (0x000354f6) scroll_pane_cp11

0x994f,	// (0x00034400) bg_popup_preview_window_pane_g1

0xa8db,	// (0x0003538c) bg_popup_preview_window_pane_g2

0xa8e3,	// (0x00035394) bg_popup_preview_window_pane_g3

0xa8eb,	// (0x0003539c) bg_popup_preview_window_pane_g4

0xa8f3,	// (0x000353a4) bg_popup_preview_window_pane_g5

0xa8fb,	// (0x000353ac) bg_popup_preview_window_pane_g6

0xa903,	// (0x000353b4) bg_popup_preview_window_pane_g7

0xa90b,	// (0x000353bc) bg_popup_preview_window_pane_g8

0x496c,	// (0x0002f41d) aid_popup_width_pane

0x5f03,	// (0x000309b4) popup_midp_note_alarm_window_ParamLimits

0x5f03,	// (0x000309b4) popup_midp_note_alarm_window

0x8486,	// (0x00032f37) data_form_pane_ParamLimits

0x537b,	// (0x0002fe2c) form_field_data_pane_g1

0x5385,	// (0x0002fe36) form_field_data_pane_t1_ParamLimits

0x8492,	// (0x00032f43) input_focus_pane_ParamLimits

0x84a0,	// (0x00032f51) data_form_wide_pane_ParamLimits

0x539d,	// (0x0002fe4e) form_field_data_wide_pane_g1

0x53a9,	// (0x0002fe5a) form_field_data_wide_pane_t1_ParamLimits

0x8203,	// (0x00032cb4) input_focus_pane_cp6_ParamLimits

0x85bb,	// (0x0003306c) input_popup_find_pane_g1_ParamLimits

0x85bb,	// (0x0003306c) input_popup_find_pane_g1

0x5621,	// (0x000300d2) aid_navi_side_left_pane

0x5636,	// (0x000300e7) aid_navi_side_right_pane

0xa2f4,	// (0x00034da5) bg_popup_window_pane_cp30_ParamLimits

0xa2f4,	// (0x00034da5) bg_popup_window_pane_cp30

0xa36e,	// (0x00034e1f) popup_midp_note_alarm_window_g1_ParamLimits

0xa36e,	// (0x00034e1f) popup_midp_note_alarm_window_g1

0xa39e,	// (0x00034e4f) popup_midp_note_alarm_window_t1_ParamLimits

0xa39e,	// (0x00034e4f) popup_midp_note_alarm_window_t1

0xa43f,	// (0x00034ef0) popup_midp_note_alarm_window_t2_ParamLimits

0xa43f,	// (0x00034ef0) popup_midp_note_alarm_window_t2

0xa4ed,	// (0x00034f9e) popup_midp_note_alarm_window_t3_ParamLimits

0xa4ed,	// (0x00034f9e) popup_midp_note_alarm_window_t3

0xa51f,	// (0x00034fd0) popup_midp_note_alarm_window_t4_ParamLimits

0xa51f,	// (0x00034fd0) popup_midp_note_alarm_window_t4

0xa545,	// (0x00034ff6) popup_midp_note_alarm_window_t5_ParamLimits

0xa545,	// (0x00034ff6) popup_midp_note_alarm_window_t5

0x000a,

0xf8a5,	// (0x0003a356) popup_midp_note_alarm_window_t_ParamLimits

0xf8a5,	// (0x0003a356) popup_midp_note_alarm_window_t

0xa5f1,	// (0x000350a2) wait_bar_pane_cp1_ParamLimits

0xa5f1,	// (0x000350a2) wait_bar_pane_cp1

0x74c2,	// (0x00031f73) wait_anim_pane_copy1

0x74c2,	// (0x00031f73) wait_border_pane_copy1

0x9fda,	// (0x00034a8b) wait_border_pane_g1_copy1

0x53c3,	// (0x0002fe74) form_field_popup_pane_g1

0x53cb,	// (0x0002fe7c) form_field_popup_pane_t1_ParamLimits

0x8492,	// (0x00032f43) input_focus_pane_cp7_ParamLimits

0x84cc,	// (0x00032f7d) list_form_pane_ParamLimits

0x53e3,	// (0x0002fe94) form_field_popup_wide_pane_g1

0x53eb,	// (0x0002fe9c) form_field_popup_wide_pane_t1_ParamLimits

0x8492,	// (0x00032f43) input_focus_pane_cp8_ParamLimits

0x84d8,	// (0x00032f89) list_form_wide_pane_ParamLimits

0xb0d1,	// (0x00035b82) aid_size_cell_graphic_pane

0x5475,	// (0x0002ff26) data_form_pane_t1_ParamLimits

0x65a4,	// (0x00031055) data_form_wide_pane_t1_ParamLimits

0x952d,	// (0x00033fde) bg_status_flat_pane

0x7502,	// (0x00031fb3) title_pane_t1_ParamLimits

0x756a,	// (0x0003201b) title_pane_t2_ParamLimits

0x7590,	// (0x00032041) title_pane_t3_ParamLimits

0xf55d,	// (0x0003a00e) title_pane_t_ParamLimits

0x8a8b,	// (0x0003353c) level_1_signal_ParamLimits

0x8a98,	// (0x00033549) level_2_signal_ParamLimits

0x8aa5,	// (0x00033556) level_3_signal_ParamLimits

0x8ab2,	// (0x00033563) level_4_signal_ParamLimits

0x8abf,	// (0x00033570) level_5_signal_ParamLimits

0x8acc,	// (0x0003357d) level_6_signal_ParamLimits

0x8ad9,	// (0x0003358a) level_7_signal_ParamLimits

0x8a8b,	// (0x0003353c) level_1_battery_ParamLimits

0x8a98,	// (0x00033549) level_2_battery_ParamLimits

0x8aa5,	// (0x00033556) level_3_battery_ParamLimits

0x8ab2,	// (0x00033563) level_4_battery_ParamLimits

0x8abf,	// (0x00033570) level_5_battery_ParamLimits

0x8acc,	// (0x0003357d) level_6_battery_ParamLimits

0x8ad9,	// (0x0003358a) level_7_battery_ParamLimits

0xa1f9,	// (0x00034caa) bg_status_flat_pane_g1

0xa201,	// (0x00034cb2) bg_status_flat_pane_g2

0xa209,	// (0x00034cba) bg_status_flat_pane_g3

0xa211,	// (0x00034cc2) bg_status_flat_pane_g4

0xa219,	// (0x00034cca) bg_status_flat_pane_g5

0xa221,	// (0x00034cd2) bg_status_flat_pane_g6

0xa229,	// (0x00034cda) bg_status_flat_pane_g7

0x75b8,	// (0x00032069) tabs_3_active_pane_t1_ParamLimits

0x75b8,	// (0x00032069) tabs_3_passive_pane_t1_ParamLimits

0x75d2,	// (0x00032083) tabs_4_active_pane_t1_ParamLimits

0x75d2,	// (0x00032083) tabs_4_1_passive_pane_t1_ParamLimits

0x864f,	// (0x00033100) tabs_2_active_pane_t1_ParamLimits

0x864f,	// (0x00033100) tabs_2_passive_pane_t1_ParamLimits

0x8661,	// (0x00033112) bg_active_tab_pane_cp4_ParamLimits

0x866f,	// (0x00033120) tabs_2_long_active_pane_t1_ParamLimits

0x8682,	// (0x00033133) bg_passive_tab_pane_cp4_ParamLimits

0x625c,	// (0x00030d0d) list_single_midp_graphic_pane_t1_ParamLimits

0x8661,	// (0x00033112) bg_active_tab_pane_cp5_ParamLimits

0x868e,	// (0x0003313f) tabs_3_long_active_pane_t1_ParamLimits

0x8682,	// (0x00033133) bg_passive_tab_pane_cp5_ParamLimits

0x625c,	// (0x00030d0d) list_single_midp_graphic_pane_t1

0x952d,	// (0x00033fde) bg_status_flat_pane_ParamLimits

0x95f0,	// (0x000340a1) indicator_pane_cp2_ParamLimits

0x95f0,	// (0x000340a1) indicator_pane_cp2

0x9715,	// (0x000341c6) navi_pane_srt_ParamLimits

0x9715,	// (0x000341c6) navi_pane_srt

0x9739,	// (0x000341ea) popup_clock_digital_analogue_window_cp1

0x767f,	// (0x00032130) indicator_pane_t1

0x90f8,	// (0x00033ba9) copy_highlight_pane

0x90f8,	// (0x00033ba9) cursor_graphics_pane

0x90f8,	// (0x00033ba9) graphic_within_text_pane

0x90f8,	// (0x00033ba9) link_highlight_pane

0xaa08,	// (0x000354b9) popup_preview_text_window_t5_ParamLimits

0xaa08,	// (0x000354b9) popup_preview_text_window_t5

0x9218,	// (0x00033cc9) cursor_digital_pane

0x9218,	// (0x00033cc9) cursor_primary_pane

0x9229,	// (0x00033cda) cursor_primary_small_pane

0x9231,	// (0x00033ce2) cursor_secondary_pane

0x9239,	// (0x00033cea) cursor_title_pane

0x9218,	// (0x00033cc9) link_highlight_digital_pane

0x9220,	// (0x00033cd1) link_highlight_primary_pane

0x9229,	// (0x00033cda) link_highlight_primary_small_pane

0x9231,	// (0x00033ce2) link_highlight_secondary_pane

0x9239,	// (0x00033cea) link_highlight_title_pane

0x9218,	// (0x00033cc9) copy_highlight_digital_pane

0x9218,	// (0x00033cc9) copy_highlight_primary_pane

0x9229,	// (0x00033cda) copy_highlight_primary_small_pane

0x9231,	// (0x00033ce2) copy_highlight_secondary_pane

0x9239,	// (0x00033cea) copy_highlight_title_pane

0x9231,	// (0x00033ce2) graphic_text_digital_pane

0xa297,	// (0x00034d48) graphic_text_primary_pane

0xa2a0,	// (0x00034d51) graphic_text_primary_small_pane

0x9229,	// (0x00033cda) graphic_text_secondary_pane

0x9218,	// (0x00033cc9) graphic_text_title_pane

0x9241,	// (0x00033cf2) cursor_primary_pane_g1

0xa289,	// (0x00034d3a) cursor_text_primary_t1

0xa271,	// (0x00034d22) cursor_primary_small_pane_g1

0xa27b,	// (0x00034d2c) cursor_text_primary_small_t1

0xa259,	// (0x00034d0a) cursor_primary_small_pane_g1_copy1

0xa263,	// (0x00034d14) cursor_text_primary_small_t1_copy1

0xa241,	// (0x00034cf2) cursor_text_title_t1

0xa24f,	// (0x00034d00) cursor_title_pane_g1

0x9241,	// (0x00033cf2) cursor_digital_pane_g1

0x924b,	// (0x00033cfc) cursor_text_digital_t1

0x9270,	// (0x00033d21) link_highlight_primary_pane_g1

0xa1ea,	// (0x00034c9b) link_highlight_primary_pane_t1

0x9259,	// (0x00033d0a) link_highlight_primary_small_pane_g1

0x9261,	// (0x00033d12) link_highlight_primary_small_pane_t1

0x9270,	// (0x00033d21) link_highlight_secondary_pane_g1

0x9278,	// (0x00033d29) link_highlight_secondary_pane_t1

0xa15e,	// (0x00034c0f) link_highlight_title_pane_g1

0xa166,	// (0x00034c17) link_highlight_title_pane_t1

0xa147,	// (0x00034bf8) link_highlight_digital_pane_g1

0xa14f,	// (0x00034c00) link_highlight_digital_pane_t1

0xa01f,	// (0x00034ad0) copy_highlight_primary_pane_g1

0xa027,	// (0x00034ad8) copy_highlight_primary_pane_t1

0x9ff9,	// (0x00034aaa) copy_highlight_primary_small_pane_g1

0xa010,	// (0x00034ac1) copy_highlight_primary_small_pane_t1

0x9287,	// (0x00033d38) copy_highlight_secondary_pane_g1

0x928f,	// (0x00033d40) copy_highlight_secondary_pane_t1

0x9ff9,	// (0x00034aaa) copy_highlight_title_pane_g1

0xa001,	// (0x00034ab2) copy_highlight_title_pane_t1

0xa01f,	// (0x00034ad0) copy_highlight_digital_pane_g1

0xb29b,	// (0x00035d4c) copy_highlight_digital_pane_t1

0xb1ef,	// (0x00035ca0) graphic_text_primary_pane_g1

0xb27f,	// (0x00035d30) graphic_text_primary_pane_t1

0xb28d,	// (0x00035d3e) graphic_text_primary_pane_t2

0x0001,

0xf9d4,	// (0x0003a485) graphic_text_primary_pane_t

0xb25b,	// (0x00035d0c) graphic_text_primary_small_pane_g1

0xb263,	// (0x00035d14) graphic_text_primary_small_pane_t1

0xb271,	// (0x00035d22) graphic_text_primary_small_pane_t2

0x0001,

0xf9cf,	// (0x0003a480) graphic_text_primary_small_pane_t

0xb237,	// (0x00035ce8) graphic_text_secondary_pane_g1

0xb23f,	// (0x00035cf0) graphic_text_secondary_pane_t1

0xb24d,	// (0x00035cfe) graphic_text_secondary_pane_t2

0x0001,

0xf9ca,	// (0x0003a47b) graphic_text_secondary_pane_t

0xb213,	// (0x00035cc4) graphic_text_title_pane_g1

0xb21b,	// (0x00035ccc) graphic_text_title_pane_t1

0xb229,	// (0x00035cda) graphic_text_title_pane_t2

0x0001,

0xf9c5,	// (0x0003a476) graphic_text_title_pane_t

0xb1ef,	// (0x00035ca0) graphic_text_digital_pane_g1

0xb1f7,	// (0x00035ca8) graphic_text_digital_pane_t1

0xb205,	// (0x00035cb6) graphic_text_digital_pane_t2

0x0001,

0xf9c0,	// (0x0003a471) graphic_text_digital_pane_t

0x75a2,	// (0x00032053) navi_icon_pane_srt_ParamLimits

0x75a2,	// (0x00032053) navi_icon_pane_srt

0x74c2,	// (0x00031f73) navi_midp_pane_srt

0x74c2,	// (0x00031f73) navi_navi_pane_srt

0x75a2,	// (0x00032053) navi_text_pane_srt_ParamLimits

0x75a2,	// (0x00032053) navi_text_pane_srt

0xb1ba,	// (0x00035c6b) navi_navi_icon_text_pane_srt

0xb1c2,	// (0x00035c73) navi_navi_pane_srt_g1_ParamLimits

0xb1c2,	// (0x00035c73) navi_navi_pane_srt_g1

0xb1d4,	// (0x00035c85) navi_navi_pane_srt_g2_ParamLimits

0xb1d4,	// (0x00035c85) navi_navi_pane_srt_g2

0x0001,

0xf9bb,	// (0x0003a46c) navi_navi_pane_srt_g_ParamLimits

0xf9bb,	// (0x0003a46c) navi_navi_pane_srt_g

0xb1e6,	// (0x00035c97) navi_navi_tabs_pane_srt

0xb1ba,	// (0x00035c6b) navi_navi_text_pane_srt

0xb1ba,	// (0x00035c6b) navi_navi_volume_pane_srt

0xb1ab,	// (0x00035c5c) navi_navi_text_pane_srt_t1

0x66de,	// (0x0003118f) navi_navi_volume_pane_srt_g1

0x66e6,	// (0x00031197) volume_small_pane_srt_ParamLimits

0x66e6,	// (0x00031197) volume_small_pane_srt

0x598b,	// (0x0003043c) volume_small_pane_srt_g1_ParamLimits

0x598b,	// (0x0003043c) volume_small_pane_srt_g1

0x599b,	// (0x0003044c) volume_small_pane_srt_g2_ParamLimits

0x599b,	// (0x0003044c) volume_small_pane_srt_g2

0x59ac,	// (0x0003045d) volume_small_pane_srt_g3_ParamLimits

0x59ac,	// (0x0003045d) volume_small_pane_srt_g3

0x59bd,	// (0x0003046e) volume_small_pane_srt_g4_ParamLimits

0x59bd,	// (0x0003046e) volume_small_pane_srt_g4

0x59ce,	// (0x0003047f) volume_small_pane_srt_g5_ParamLimits

0x59ce,	// (0x0003047f) volume_small_pane_srt_g5

0x59df,	// (0x00030490) volume_small_pane_srt_g6_ParamLimits

0x59df,	// (0x00030490) volume_small_pane_srt_g6

0x59f0,	// (0x000304a1) volume_small_pane_srt_g7_ParamLimits

0x59f0,	// (0x000304a1) volume_small_pane_srt_g7

0x5a01,	// (0x000304b2) volume_small_pane_srt_g8_ParamLimits

0x5a01,	// (0x000304b2) volume_small_pane_srt_g8

0x5a12,	// (0x000304c3) volume_small_pane_srt_g9_ParamLimits

0x5a12,	// (0x000304c3) volume_small_pane_srt_g9

0x5a23,	// (0x000304d4) volume_small_pane_srt_g10_ParamLimits

0x5a23,	// (0x000304d4) volume_small_pane_srt_g10

0x0009,

0xf763,	// (0x0003a214) volume_small_pane_srt_g_ParamLimits

0xf763,	// (0x0003a214) volume_small_pane_srt_g

0x8000,	// (0x00032ab1) query_popup_data_pane_cp2

0xb191,	// (0x00035c42) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb191,	// (0x00035c42) navi_navi_icon_text_pane_srt_t1

0xa297,	// (0x00034d48) navi_tabs_2_long_pane_srt

0xa297,	// (0x00034d48) navi_tabs_2_pane_srt

0xa297,	// (0x00034d48) navi_tabs_3_long_pane_srt

0xa297,	// (0x00034d48) navi_tabs_3_pane_srt

0xa297,	// (0x00034d48) navi_tabs_4_pane_srt

0x66be,	// (0x0003116f) tabs_2_active_pane_srt_ParamLimits

0x66be,	// (0x0003116f) tabs_2_active_pane_srt

0x66ce,	// (0x0003117f) tabs_2_passive_pane_srt_ParamLimits

0x66ce,	// (0x0003117f) tabs_2_passive_pane_srt

0x9438,	// (0x00033ee9) bg_passive_tab_pane_cp1_srt_ParamLimits

0x9438,	// (0x00033ee9) bg_passive_tab_pane_cp1_srt

0xb15d,	// (0x00035c0e) bg_passive_tab_pane_g1_cp1_srt

0x8d45,	// (0x000337f6) bg_passive_tab_pane_g2_cp1_srt

0xb166,	// (0x00035c17) bg_passive_tab_pane_g3_cp1_srt

0x75a2,	// (0x00032053) bg_active_tab_pane_cp1_srt_ParamLimits

0x75a2,	// (0x00032053) bg_active_tab_pane_cp1_srt

0xb16f,	// (0x00035c20) tabs_2_active_pane_srt_g1

0xb177,	// (0x00035c28) tabs_2_active_pane_srt_t1_ParamLimits

0xb177,	// (0x00035c28) tabs_2_active_pane_srt_t1

0xb15d,	// (0x00035c0e) bg_active_tab_pane_g1_cp1_srt

0x8d45,	// (0x000337f6) bg_active_tab_pane_g2_cp1_srt

0xb166,	// (0x00035c17) bg_active_tab_pane_g3_cp1_srt

0x668b,	// (0x0003113c) tabs_3_active_pane_srt_ParamLimits

0x668b,	// (0x0003113c) tabs_3_active_pane_srt

0x669c,	// (0x0003114d) tabs_3_passive_pane_cp_srt_ParamLimits

0x669c,	// (0x0003114d) tabs_3_passive_pane_cp_srt

0x66ad,	// (0x0003115e) tabs_3_passive_pane_srt_ParamLimits

0x66ad,	// (0x0003115e) tabs_3_passive_pane_srt

0x9438,	// (0x00033ee9) bg_passive_tab_pane_cp2_srt_ParamLimits

0x9438,	// (0x00033ee9) bg_passive_tab_pane_cp2_srt

0x929e,	// (0x00033d4f) bg_passive_tab_pane_g1_cp2_srt

0x8d45,	// (0x000337f6) bg_passive_tab_pane_g2_cp2_srt

0x92a7,	// (0x00033d58) bg_passive_tab_pane_g3_cp2_srt

0x75a2,	// (0x00032053) bg_active_tab_pane_cp2_srt_ParamLimits

0x75a2,	// (0x00032053) bg_active_tab_pane_cp2_srt

0xb143,	// (0x00035bf4) tabs_3_active_pane_srt_g1

0xb14b,	// (0x00035bfc) tabs_3_active_pane_srt_t1_ParamLimits

0xb14b,	// (0x00035bfc) tabs_3_active_pane_srt_t1

0x929e,	// (0x00033d4f) bg_active_tab_pane_g1_cp2_srt

0x8d45,	// (0x000337f6) bg_active_tab_pane_g2_cp2_srt

0x92a7,	// (0x00033d58) bg_active_tab_pane_g3_cp2_srt

0x6643,	// (0x000310f4) tabs_4_active_pane_srt_ParamLimits

0x6643,	// (0x000310f4) tabs_4_active_pane_srt

0x6655,	// (0x00031106) tabs_4_passive_pane_cp2_srt_ParamLimits

0x6655,	// (0x00031106) tabs_4_passive_pane_cp2_srt

0x5b84,	// (0x00030635) aid_size_cell_toolbar

0x8682,	// (0x00033133) main_idle_act_pane_ParamLimits

0x5d39,	// (0x000307ea) popup_large_graphic_colour_window_ParamLimits

0x60a0,	// (0x00030b51) popup_toolbar_window_ParamLimits

0x60a0,	// (0x00030b51) popup_toolbar_window

0xaf9b,	// (0x00035a4c) list_single_graphic_2heading_pane_ParamLimits

0xaf9b,	// (0x00035a4c) list_single_graphic_2heading_pane

0x883e,	// (0x000332ef) aid_size_cell_apps_grid_lsc_pane

0x8850,	// (0x00033301) aid_size_cell_apps_grid_prt_pane

0x9438,	// (0x00033ee9) bg_wml_button_pane_cp1_ParamLimits

0x9438,	// (0x00033ee9) bg_wml_button_pane_cp1

0x9c7d,	// (0x0003472e) form_midp_field_text_pane_t1_ParamLimits

0x9a47,	// (0x000344f8) input_focus_pane_cp050_ParamLimits

0x9cb4,	// (0x00034765) list_midp_form_text_pane_ParamLimits

0x9c5a,	// (0x0003470b) input_focus_pane_cp051_ParamLimits

0x9c6e,	// (0x0003471f) list_midp_choice_pane_ParamLimits

0x9b00,	// (0x000345b1) list_single_2graphic_pane_cp3_ParamLimits

0x9b00,	// (0x000345b1) list_single_2graphic_pane_cp3

0x9b24,	// (0x000345d5) list_single_midp_graphic_pane_ParamLimits

0x9b24,	// (0x000345d5) list_single_midp_graphic_pane

0x48f4,	// (0x0002f3a5) list_single_graphic_2heading_pane_g1_ParamLimits

0x48f4,	// (0x0002f3a5) list_single_graphic_2heading_pane_g1

0x4900,	// (0x0002f3b1) list_single_graphic_2heading_pane_g4_ParamLimits

0x4900,	// (0x0002f3b1) list_single_graphic_2heading_pane_g4

0x490c,	// (0x0002f3bd) list_single_graphic_2heading_pane_g5_ParamLimits

0x490c,	// (0x0002f3bd) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b6,	// (0x0003a267) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b6,	// (0x0003a267) list_single_graphic_2heading_pane_g

0x4918,	// (0x0002f3c9) list_single_graphic_2heading_pane_t1_ParamLimits

0x4918,	// (0x0002f3c9) list_single_graphic_2heading_pane_t1

0x492c,	// (0x0002f3dd) list_single_graphic_2heading_pane_t2_ParamLimits

0x492c,	// (0x0002f3dd) list_single_graphic_2heading_pane_t2

0x4948,	// (0x0002f3f9) list_single_graphic_2heading_pane_t3_ParamLimits

0x4948,	// (0x0002f3f9) list_single_graphic_2heading_pane_t3

0x0002,

0xf7bd,	// (0x0003a26e) list_single_graphic_2heading_pane_t_ParamLimits

0xf7bd,	// (0x0003a26e) list_single_graphic_2heading_pane_t

0x988d,	// (0x0003433e) bg_popup_sub_pane_cp2

0x98b7,	// (0x00034368) grid_toobar_pane

0x614d,	// (0x00030bfe) cell_toolbar_pane_ParamLimits

0x614d,	// (0x00030bfe) cell_toolbar_pane

0x98f3,	// (0x000343a4) cell_toolbar_pane_g1_ParamLimits

0x98f3,	// (0x000343a4) cell_toolbar_pane_g1

0x9907,	// (0x000343b8) cell_toolbar_pane_g2_ParamLimits

0x9907,	// (0x000343b8) cell_toolbar_pane_g2

0x0001,

0xf7cb,	// (0x0003a27c) cell_toolbar_pane_g_ParamLimits

0xf7cb,	// (0x0003a27c) cell_toolbar_pane_g

0x9929,	// (0x000343da) grid_highlight_pane_cp2_ParamLimits

0x9929,	// (0x000343da) grid_highlight_pane_cp2

0x9943,	// (0x000343f4) toolbar_button_pane

0x994f,	// (0x00034400) toolbar_button_pane_g1

0x9957,	// (0x00034408) toolbar_button_pane_g2

0x995f,	// (0x00034410) toolbar_button_pane_g3

0x9967,	// (0x00034418) toolbar_button_pane_g4

0x996f,	// (0x00034420) toolbar_button_pane_g5

0x9977,	// (0x00034428) toolbar_button_pane_g6

0x997f,	// (0x00034430) toolbar_button_pane_g7

0x9987,	// (0x00034438) toolbar_button_pane_g8

0x998f,	// (0x00034440) toolbar_button_pane_g9

0x0009,

0xf7d0,	// (0x0003a281) toolbar_button_pane_g

0x61bf,	// (0x00030c70) list_single_2graphic_pane_g1_cp3_ParamLimits

0x61bf,	// (0x00030c70) list_single_2graphic_pane_g1_cp3

0x61cb,	// (0x00030c7c) list_single_2graphic_pane_g2_cp3_ParamLimits

0x61cb,	// (0x00030c7c) list_single_2graphic_pane_g2_cp3

0x61dc,	// (0x00030c8d) list_single_2graphic_pane_g3_cp3

0x61e4,	// (0x00030c95) list_single_2graphic_pane_g4_cp3_ParamLimits

0x61e4,	// (0x00030c95) list_single_2graphic_pane_g4_cp3

0x61f0,	// (0x00030ca1) list_single_2graphic_pane_t1_cp3_ParamLimits

0x61f0,	// (0x00030ca1) list_single_2graphic_pane_t1_cp3

0x6250,	// (0x00030d01) list_single_midp_graphic_pane_g2_ParamLimits

0x6250,	// (0x00030d01) list_single_midp_graphic_pane_g2

0x5b8c,	// (0x0003063d) aid_zoom_text_primary

0x48d8,	// (0x0002f389) aid_zoom_text_secondary

0x935b,	// (0x00033e0c) status_small_pane_g7_ParamLimits

0x935b,	// (0x00033e0c) status_small_pane_g7

0x937e,	// (0x00033e2f) status_small_pane_t1_ParamLimits

0x74d9,	// (0x00031f8a) title_pane_g2

0x0003,

0xf554,	// (0x0003a005) title_pane_g

0x80a1,	// (0x00032b52) aid_size_cell_colour_1_pane_ParamLimits

0x80a1,	// (0x00032b52) aid_size_cell_colour_1_pane

0x80b5,	// (0x00032b66) aid_size_cell_colour_2_pane_ParamLimits

0x80b5,	// (0x00032b66) aid_size_cell_colour_2_pane

0x80c9,	// (0x00032b7a) aid_size_cell_colour_3_pane_ParamLimits

0x80c9,	// (0x00032b7a) aid_size_cell_colour_3_pane

0x80dd,	// (0x00032b8e) aid_size_cell_colour_4_pane_ParamLimits

0x80dd,	// (0x00032b8e) aid_size_cell_colour_4_pane

0x555d,	// (0x0003000e) title_pane_stacon_g1_ParamLimits

0x555d,	// (0x0003000e) title_pane_stacon_g1

0xa07e,	// (0x00034b2f) popup_note_wait_window_g3_ParamLimits

0xa07e,	// (0x00034b2f) popup_note_wait_window_g3

0xa0f4,	// (0x00034ba5) popup_note_wait_window_t5_ParamLimits

0xa0f4,	// (0x00034ba5) popup_note_wait_window_t5

0x74c2,	// (0x00031f73) main_feb_china_hwr_fs_writing_pane

0x5c1e,	// (0x000306cf) popup_feb_china_hwr_fs_window_ParamLimits

0x5c1e,	// (0x000306cf) popup_feb_china_hwr_fs_window

0x6272,	// (0x00030d23) aid_size_cell_hwr_fs_ParamLimits

0x6272,	// (0x00030d23) aid_size_cell_hwr_fs

0x9a47,	// (0x000344f8) bg_popup_sub_pane_cp3_ParamLimits

0x9a47,	// (0x000344f8) bg_popup_sub_pane_cp3

0x6287,	// (0x00030d38) grid_hwr_fs_pane_ParamLimits

0x6287,	// (0x00030d38) grid_hwr_fs_pane

0x629f,	// (0x00030d50) linegrid_hwr_fs_pane_ParamLimits

0x629f,	// (0x00030d50) linegrid_hwr_fs_pane

0x62af,	// (0x00030d60) cell_hwr_fs_pane_ParamLimits

0x62af,	// (0x00030d60) cell_hwr_fs_pane

0x9a53,	// (0x00034504) linegrid_hwr_fs_pane_g1_ParamLimits

0x9a53,	// (0x00034504) linegrid_hwr_fs_pane_g1

0x9a5f,	// (0x00034510) linegrid_hwr_fs_pane_g2_ParamLimits

0x9a5f,	// (0x00034510) linegrid_hwr_fs_pane_g2

0x9a71,	// (0x00034522) linegrid_hwr_fs_pane_g3_ParamLimits

0x9a71,	// (0x00034522) linegrid_hwr_fs_pane_g3

0x62d1,	// (0x00030d82) linegrid_hwr_fs_pane_g4_ParamLimits

0x62d1,	// (0x00030d82) linegrid_hwr_fs_pane_g4

0x62eb,	// (0x00030d9c) linegrid_hwr_fs_pane_g5_ParamLimits

0x62eb,	// (0x00030d9c) linegrid_hwr_fs_pane_g5

0x0004,

0xf7fb,	// (0x0003a2ac) linegrid_hwr_fs_pane_g_ParamLimits

0xf7fb,	// (0x0003a2ac) linegrid_hwr_fs_pane_g

0x9a7d,	// (0x0003452e) cell_hwr_fs_pane_g1_ParamLimits

0x9a7d,	// (0x0003452e) cell_hwr_fs_pane_g1

0x97c7,	// (0x00034278) cell_hwr_fs_pane_g2_ParamLimits

0x97c7,	// (0x00034278) cell_hwr_fs_pane_g2

0x9a93,	// (0x00034544) cell_hwr_fs_pane_g3_ParamLimits

0x9a93,	// (0x00034544) cell_hwr_fs_pane_g3

0x9aa0,	// (0x00034551) cell_hwr_fs_pane_g4_ParamLimits

0x9aa0,	// (0x00034551) cell_hwr_fs_pane_g4

0x0003,

0xf806,	// (0x0003a2b7) cell_hwr_fs_pane_g_ParamLimits

0xf806,	// (0x0003a2b7) cell_hwr_fs_pane_g

0x6301,	// (0x00030db2) cell_hwr_fs_pane_t1

0x74c2,	// (0x00031f73) grid_highlight_pane_cp6

0x74c2,	// (0x00031f73) main_idle_act2_pane

0x85f5,	// (0x000330a6) aid_inside_area_popup_secondary

0xa72b,	// (0x000351dc) aid_inside_area_window_primary_ParamLimits

0xa72b,	// (0x000351dc) aid_inside_area_window_primary

0xb2aa,	// (0x00035d5b) ai2_news_ticker_pane

0xb2b2,	// (0x00035d63) aid_size_cell_ai1_link_ParamLimits

0xb2b2,	// (0x00035d63) aid_size_cell_ai1_link

0xb2cc,	// (0x00035d7d) popup_ai2_data_window_ParamLimits

0xb2cc,	// (0x00035d7d) popup_ai2_data_window

0xb2e2,	// (0x00035d93) popup_ai2_link_window_ParamLimits

0xb2e2,	// (0x00035d93) popup_ai2_link_window

0x9a47,	// (0x000344f8) bg_popup_sub_pane_cp4_ParamLimits

0x9a47,	// (0x000344f8) bg_popup_sub_pane_cp4

0xb2f6,	// (0x00035da7) grid_ai2_link_pane_ParamLimits

0xb2f6,	// (0x00035da7) grid_ai2_link_pane

0xb30d,	// (0x00035dbe) popup_ai2_link_window_g1_ParamLimits

0xb30d,	// (0x00035dbe) popup_ai2_link_window_g1

0xb319,	// (0x00035dca) popup_ai2_link_window_g2_ParamLimits

0xb319,	// (0x00035dca) popup_ai2_link_window_g2

0x0001,

0xf9d9,	// (0x0003a48a) popup_ai2_link_window_g_ParamLimits

0xf9d9,	// (0x0003a48a) popup_ai2_link_window_g

0xb328,	// (0x00035dd9) ai2_mp_button_pane

0xb330,	// (0x00035de1) ai2_mp_volume_pane

0x9c5a,	// (0x0003470b) bg_popup_sub_pane_cp5_ParamLimits

0x9c5a,	// (0x0003470b) bg_popup_sub_pane_cp5

0xb338,	// (0x00035de9) heading_ai2_gene_pane_ParamLimits

0xb338,	// (0x00035de9) heading_ai2_gene_pane

0xb344,	// (0x00035df5) list_ai2_gene_pane_ParamLimits

0xb344,	// (0x00035df5) list_ai2_gene_pane

0xb38c,	// (0x00035e3d) cell_ai2_link_pane_ParamLimits

0xb38c,	// (0x00035e3d) cell_ai2_link_pane

0xb3a2,	// (0x00035e53) cell_ai2_link_pane_g1

0x74c2,	// (0x00031f73) grid_highlight_pane_cp7

0x66fb,	// (0x000311ac) ai2_mp_volume_pane_g1

0xb4b4,	// (0x00035f65) ai2_mp_volume_pane_g2

0xb3e7,	// (0x00035e98) list_ai2_gene_pane_t1

0xb4bc,	// (0x00035f6d) ai2_mp_volume_pane_g3

0x0002,

0xf9f2,	// (0x0003a4a3) ai2_mp_volume_pane_g

0x6703,	// (0x000311b4) volume_small_pane_cp3

0xb4c4,	// (0x00035f75) aid_size_cell_ai2_button

0xb4cc,	// (0x00035f7d) grid_ai2_button_pane

0xb4d5,	// (0x00035f86) cell_ai2_button_pane_ParamLimits

0xb4d5,	// (0x00035f86) cell_ai2_button_pane

0x74b8,	// (0x00031f69) cell_ai2_button_pane_g1

0x74c2,	// (0x00031f73) grid_highlight_pane_cp8

0xb432,	// (0x00035ee3) ai2_gene_pane_t1_ParamLimits

0xb432,	// (0x00035ee3) ai2_gene_pane_t1

0x5b7a,	// (0x0003062b) aid_height_parent_landscape

0xadb7,	// (0x00035868) aid_height_set_list

0xadc8,	// (0x00035879) aid_size_parent

0xb0d1,	// (0x00035b82) aid_size_cell_graphic_pane_ParamLimits

0xb354,	// (0x00035e05) popup_ai2_data_window_g1_ParamLimits

0xb354,	// (0x00035e05) popup_ai2_data_window_g1

0xb360,	// (0x00035e11) ai2_news_ticker_pane_g1

0xb368,	// (0x00035e19) ai2_news_ticker_pane_g2

0x0001,

0xf9de,	// (0x0003a48f) ai2_news_ticker_pane_g

0xb370,	// (0x00035e21) ai2_news_ticker_pane_t1

0xb37e,	// (0x00035e2f) ai2_news_ticker_pane_t2

0x0001,

0xf9e3,	// (0x0003a494) ai2_news_ticker_pane_t

0xb3ab,	// (0x00035e5c) heading_ai2_gene_pane_g1

0xb3b3,	// (0x00035e64) heading_ai2_gene_pane_t1_ParamLimits

0xb3b3,	// (0x00035e64) heading_ai2_gene_pane_t1

0xb3c8,	// (0x00035e79) list_highlight_pane_cp6

0xb3d0,	// (0x00035e81) ai2_gene_pane_ParamLimits

0xb3d0,	// (0x00035e81) ai2_gene_pane

0xb3f5,	// (0x00035ea6) list_ai2_gene_pane_t2

0x0001,

0xf9e8,	// (0x0003a499) list_ai2_gene_pane_t

0xb403,	// (0x00035eb4) list_highlight_pane_cp8_ParamLimits

0xb403,	// (0x00035eb4) list_highlight_pane_cp8

0xb414,	// (0x00035ec5) ai2_gene_pane_g1_ParamLimits

0xb414,	// (0x00035ec5) ai2_gene_pane_g1

0xb426,	// (0x00035ed7) ai2_gene_pane_g2_ParamLimits

0xb426,	// (0x00035ed7) ai2_gene_pane_g2

0x0001,

0xf9ed,	// (0x0003a49e) ai2_gene_pane_g_ParamLimits

0xf9ed,	// (0x0003a49e) ai2_gene_pane_g

0x8428,	// (0x00032ed9) scroll_pane_cp12

0x5b39,	// (0x000305ea) control_pane_t3_ParamLimits

0x5b39,	// (0x000305ea) control_pane_t3

0x936f,	// (0x00033e20) status_small_pane_g8_ParamLimits

0x936f,	// (0x00033e20) status_small_pane_g8

0x5d04,	// (0x000307b5) popup_find_window_ParamLimits

0x5f17,	// (0x000309c8) popup_note_image_window_ParamLimits

0x617d,	// (0x00030c2e) list_double2_graphic_pane_vc_g1_ParamLimits

0x617d,	// (0x00030c2e) list_double2_graphic_pane_vc_g1

0x6189,	// (0x00030c3a) list_double2_graphic_pane_vc_g2_ParamLimits

0x6189,	// (0x00030c3a) list_double2_graphic_pane_vc_g2

0x6195,	// (0x00030c46) list_double2_graphic_pane_vc_g3_ParamLimits

0x6195,	// (0x00030c46) list_double2_graphic_pane_vc_g3

0x0002,

0xf7c4,	// (0x0003a275) list_double2_graphic_pane_vc_g_ParamLimits

0xf7c4,	// (0x0003a275) list_double2_graphic_pane_vc_g

0x61a1,	// (0x00030c52) list_double2_graphic_pane_vc_t1_ParamLimits

0x61a1,	// (0x00030c52) list_double2_graphic_pane_vc_t1

0x620c,	// (0x00030cbd) list_single_heading_pane_vc_g1_ParamLimits

0x620c,	// (0x00030cbd) list_single_heading_pane_vc_g1

0x6218,	// (0x00030cc9) list_single_heading_pane_vc_g2_ParamLimits

0x6218,	// (0x00030cc9) list_single_heading_pane_vc_g2

0x0001,

0xf7e5,	// (0x0003a296) list_single_heading_pane_vc_g_ParamLimits

0xf7e5,	// (0x0003a296) list_single_heading_pane_vc_g

0x6224,	// (0x00030cd5) list_single_heading_pane_vc_t1_ParamLimits

0x6224,	// (0x00030cd5) list_single_heading_pane_vc_t1

0x623c,	// (0x00030ced) list_single_heading_pane_vc_t2_ParamLimits

0x623c,	// (0x00030ced) list_single_heading_pane_vc_t2

0x0001,

0xf7ea,	// (0x0003a29b) list_single_heading_pane_vc_t_ParamLimits

0xf7ea,	// (0x0003a29b) list_single_heading_pane_vc_t

0x9997,	// (0x00034448) list_setting_number_pane_vc_g1_ParamLimits

0x9997,	// (0x00034448) list_setting_number_pane_vc_g1

0x99a3,	// (0x00034454) list_setting_number_pane_vc_g2_ParamLimits

0x99a3,	// (0x00034454) list_setting_number_pane_vc_g2

0x0001,

0xf7ef,	// (0x0003a2a0) list_setting_number_pane_vc_g_ParamLimits

0xf7ef,	// (0x0003a2a0) list_setting_number_pane_vc_g

0x99af,	// (0x00034460) list_setting_number_pane_vc_t1_ParamLimits

0x99af,	// (0x00034460) list_setting_number_pane_vc_t1

0x99c3,	// (0x00034474) list_setting_number_pane_vc_t2_ParamLimits

0x99c3,	// (0x00034474) list_setting_number_pane_vc_t2

0x99df,	// (0x00034490) list_setting_number_pane_vc_t3_ParamLimits

0x99df,	// (0x00034490) list_setting_number_pane_vc_t3

0x0002,

0xf7f4,	// (0x0003a2a5) list_setting_number_pane_vc_t_ParamLimits

0xf7f4,	// (0x0003a2a5) list_setting_number_pane_vc_t

0x9a0b,	// (0x000344bc) set_value_pane_vc_ParamLimits

0x9a0b,	// (0x000344bc) set_value_pane_vc

0xaf9b,	// (0x00035a4c) list_double2_graphic_pane_vc_ParamLimits

0xaf9b,	// (0x00035a4c) list_double2_graphic_pane_vc

0xaf9b,	// (0x00035a4c) list_double2_large_graphic_pane_vc_ParamLimits

0xaf9b,	// (0x00035a4c) list_double2_large_graphic_pane_vc

0xaf9b,	// (0x00035a4c) list_double2_pane_vc_ParamLimits

0xaf9b,	// (0x00035a4c) list_double2_pane_vc

0xaf9b,	// (0x00035a4c) list_double_graphic_heading_pane_vc_ParamLimits

0xaf9b,	// (0x00035a4c) list_double_graphic_heading_pane_vc

0xaf9b,	// (0x00035a4c) list_double_graphic_pane_vc_ParamLimits

0xaf9b,	// (0x00035a4c) list_double_graphic_pane_vc

0xaf9b,	// (0x00035a4c) list_double_heading_pane_vc_ParamLimits

0xaf9b,	// (0x00035a4c) list_double_heading_pane_vc

0xaf9b,	// (0x00035a4c) list_double_large_graphic_pane_vc_ParamLimits

0xaf9b,	// (0x00035a4c) list_double_large_graphic_pane_vc

0xaf9b,	// (0x00035a4c) list_double_number_pane_vc_ParamLimits

0xaf9b,	// (0x00035a4c) list_double_number_pane_vc

0xaf9b,	// (0x00035a4c) list_double_pane_vc_ParamLimits

0xaf9b,	// (0x00035a4c) list_double_pane_vc

0xaf9b,	// (0x00035a4c) list_double_time_pane_vc_ParamLimits

0xaf9b,	// (0x00035a4c) list_double_time_pane_vc

0xaf9b,	// (0x00035a4c) list_setting_number_pane_vc_ParamLimits

0xaf9b,	// (0x00035a4c) list_setting_number_pane_vc

0xaf9b,	// (0x00035a4c) list_setting_pane_vc_ParamLimits

0xaf9b,	// (0x00035a4c) list_setting_pane_vc

0xaf9b,	// (0x00035a4c) list_single_graphic_heading_pane_vc_ParamLimits

0xaf9b,	// (0x00035a4c) list_single_graphic_heading_pane_vc

0xaf9b,	// (0x00035a4c) list_single_heading_pane_vc_ParamLimits

0xaf9b,	// (0x00035a4c) list_single_heading_pane_vc

0x6604,	// (0x000310b5) list_single_number_heading_pane_vc_ParamLimits

0x6604,	// (0x000310b5) list_single_number_heading_pane_vc

0x790c,	// (0x000323bd) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x790c,	// (0x000323bd) list_double_graphic_heading_pane_vc_g1

0x620c,	// (0x00030cbd) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x620c,	// (0x00030cbd) list_double_graphic_heading_pane_vc_g2

0x6218,	// (0x00030cc9) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x6218,	// (0x00030cc9) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9f9,	// (0x0003a4aa) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9f9,	// (0x0003a4aa) list_double_graphic_heading_pane_vc_g

0x7918,	// (0x000323c9) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x7918,	// (0x000323c9) list_double_graphic_heading_pane_vc_t1

0x6224,	// (0x00030cd5) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x6224,	// (0x00030cd5) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa00,	// (0x0003a4b1) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa00,	// (0x0003a4b1) list_double_graphic_heading_pane_vc_t

0x9997,	// (0x00034448) list_setting_pane_vc_g1_ParamLimits

0x9997,	// (0x00034448) list_setting_pane_vc_g1

0x99a3,	// (0x00034454) list_setting_pane_vc_g2_ParamLimits

0x99a3,	// (0x00034454) list_setting_pane_vc_g2

0x0001,

0xf7ef,	// (0x0003a2a0) list_setting_pane_vc_g_ParamLimits

0xf7ef,	// (0x0003a2a0) list_setting_pane_vc_g

0xb715,	// (0x000361c6) list_setting_pane_vc_t1_ParamLimits

0xb715,	// (0x000361c6) list_setting_pane_vc_t1

0xb731,	// (0x000361e2) list_setting_pane_vc_t2_ParamLimits

0xb731,	// (0x000361e2) list_setting_pane_vc_t2

0x0001,

0xfa2e,	// (0x0003a4df) list_setting_pane_vc_t_ParamLimits

0xfa2e,	// (0x0003a4df) list_setting_pane_vc_t

0x9a0b,	// (0x000344bc) set_value_pane_cp_vc_ParamLimits

0x9a0b,	// (0x000344bc) set_value_pane_cp_vc

0x620c,	// (0x00030cbd) list_single_number_heading_pane_vc_g1_ParamLimits

0x620c,	// (0x00030cbd) list_single_number_heading_pane_vc_g1

0x6218,	// (0x00030cc9) list_single_number_heading_pane_vc_g2_ParamLimits

0x6218,	// (0x00030cc9) list_single_number_heading_pane_vc_g2

0x0001,

0xf7e5,	// (0x0003a296) list_single_number_heading_pane_vc_g_ParamLimits

0xf7e5,	// (0x0003a296) list_single_number_heading_pane_vc_g

0x6224,	// (0x00030cd5) list_single_number_heading_pane_vc_t1_ParamLimits

0x6224,	// (0x00030cd5) list_single_number_heading_pane_vc_t1

0x792c,	// (0x000323dd) list_single_number_heading_pane_vc_t2_ParamLimits

0x792c,	// (0x000323dd) list_single_number_heading_pane_vc_t2

0x7940,	// (0x000323f1) list_single_number_heading_pane_vc_t3_ParamLimits

0x7940,	// (0x000323f1) list_single_number_heading_pane_vc_t3

0x0002,

0xfa33,	// (0x0003a4e4) list_single_number_heading_pane_vc_t_ParamLimits

0xfa33,	// (0x0003a4e4) list_single_number_heading_pane_vc_t

0x617d,	// (0x00030c2e) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x617d,	// (0x00030c2e) list_single_graphic_heading_pane_vc_g1

0x620c,	// (0x00030cbd) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x620c,	// (0x00030cbd) list_single_graphic_heading_pane_vc_g4

0x6218,	// (0x00030cc9) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x6218,	// (0x00030cc9) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa3a,	// (0x0003a4eb) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa3a,	// (0x0003a4eb) list_single_graphic_heading_pane_vc_g

0x6224,	// (0x00030cd5) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x6224,	// (0x00030cd5) list_single_graphic_heading_pane_vc_t1

0x7952,	// (0x00032403) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x7952,	// (0x00032403) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa41,	// (0x0003a4f2) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa41,	// (0x0003a4f2) list_single_graphic_heading_pane_vc_t

0x620c,	// (0x00030cbd) list_double2_pane_vc_g1_ParamLimits

0x620c,	// (0x00030cbd) list_double2_pane_vc_g1

0x6218,	// (0x00030cc9) list_double2_pane_vc_g2_ParamLimits

0x6218,	// (0x00030cc9) list_double2_pane_vc_g2

0x0001,

0xf7e5,	// (0x0003a296) list_double2_pane_vc_g_ParamLimits

0xf7e5,	// (0x0003a296) list_double2_pane_vc_g

0x7966,	// (0x00032417) list_double2_pane_vc_t1_ParamLimits

0x7966,	// (0x00032417) list_double2_pane_vc_t1

0x797c,	// (0x0003242d) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x797c,	// (0x0003242d) list_double2_large_graphic_pane_vc_g1

0x620c,	// (0x00030cbd) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x620c,	// (0x00030cbd) list_double2_large_graphic_pane_vc_g2

0x6218,	// (0x00030cc9) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x6218,	// (0x00030cc9) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa46,	// (0x0003a4f7) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa46,	// (0x0003a4f7) list_double2_large_graphic_pane_vc_g

0x7988,	// (0x00032439) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x7988,	// (0x00032439) list_double2_large_graphic_pane_vc_t1

0x799e,	// (0x0003244f) list_double_time_pane_vc_g1_ParamLimits

0x799e,	// (0x0003244f) list_double_time_pane_vc_g1

0x79aa,	// (0x0003245b) list_double_time_pane_vc_g2_ParamLimits

0x79aa,	// (0x0003245b) list_double_time_pane_vc_g2

0x0001,

0xfa4d,	// (0x0003a4fe) list_double_time_pane_vc_g_ParamLimits

0xfa4d,	// (0x0003a4fe) list_double_time_pane_vc_g

0x79b6,	// (0x00032467) list_double_time_pane_vc_t1_ParamLimits

0x79b6,	// (0x00032467) list_double_time_pane_vc_t1

0x79da,	// (0x0003248b) list_double_time_pane_vc_t2_ParamLimits

0x79da,	// (0x0003248b) list_double_time_pane_vc_t2

0x7a24,	// (0x000324d5) list_double_time_pane_vc_t3_ParamLimits

0x7a24,	// (0x000324d5) list_double_time_pane_vc_t3

0x7a36,	// (0x000324e7) list_double_time_pane_vc_t4_ParamLimits

0x7a36,	// (0x000324e7) list_double_time_pane_vc_t4

0x0003,

0xfa52,	// (0x0003a503) list_double_time_pane_vc_t_ParamLimits

0xfa52,	// (0x0003a503) list_double_time_pane_vc_t

0x620c,	// (0x00030cbd) list_double_pane_vc_g1_ParamLimits

0x620c,	// (0x00030cbd) list_double_pane_vc_g1

0x6218,	// (0x00030cc9) list_double_pane_vc_g2_ParamLimits

0x6218,	// (0x00030cc9) list_double_pane_vc_g2

0x0001,

0xf7e5,	// (0x0003a296) list_double_pane_vc_g_ParamLimits

0xf7e5,	// (0x0003a296) list_double_pane_vc_g

0x7a5b,	// (0x0003250c) list_double_pane_vc_t1_ParamLimits

0x7a5b,	// (0x0003250c) list_double_pane_vc_t1

0x7a6f,	// (0x00032520) list_double_pane_vc_t2_ParamLimits

0x7a6f,	// (0x00032520) list_double_pane_vc_t2

0x0001,

0xfa5b,	// (0x0003a50c) list_double_pane_vc_t_ParamLimits

0xfa5b,	// (0x0003a50c) list_double_pane_vc_t

0x620c,	// (0x00030cbd) list_double_number_pane_vc_g1_ParamLimits

0x620c,	// (0x00030cbd) list_double_number_pane_vc_g1

0x6218,	// (0x00030cc9) list_double_number_pane_vc_g2_ParamLimits

0x6218,	// (0x00030cc9) list_double_number_pane_vc_g2

0x0001,

0xf7e5,	// (0x0003a296) list_double_number_pane_vc_g_ParamLimits

0xf7e5,	// (0x0003a296) list_double_number_pane_vc_g

0x7a87,	// (0x00032538) list_double_number_pane_vc_t1_ParamLimits

0x7a87,	// (0x00032538) list_double_number_pane_vc_t1

0x7a9b,	// (0x0003254c) list_double_number_pane_vc_t2_ParamLimits

0x7a9b,	// (0x0003254c) list_double_number_pane_vc_t2

0x7a6f,	// (0x00032520) list_double_number_pane_vc_t3_ParamLimits

0x7a6f,	// (0x00032520) list_double_number_pane_vc_t3

0x0002,

0xfa60,	// (0x0003a511) list_double_number_pane_vc_t_ParamLimits

0xfa60,	// (0x0003a511) list_double_number_pane_vc_t

0x7aaf,	// (0x00032560) list_double_large_graphic_pane_vc_g1_ParamLimits

0x7aaf,	// (0x00032560) list_double_large_graphic_pane_vc_g1

0x7ac0,	// (0x00032571) list_double_large_graphic_pane_vc_g2_ParamLimits

0x7ac0,	// (0x00032571) list_double_large_graphic_pane_vc_g2

0x6218,	// (0x00030cc9) list_double_large_graphic_pane_vc_g3_ParamLimits

0x6218,	// (0x00030cc9) list_double_large_graphic_pane_vc_g3

0x7acf,	// (0x00032580) list_double_large_graphic_pane_vc_g4_ParamLimits

0x7acf,	// (0x00032580) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa67,	// (0x0003a518) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa67,	// (0x0003a518) list_double_large_graphic_pane_vc_g

0x7adb,	// (0x0003258c) list_double_large_graphic_pane_vc_t1_ParamLimits

0x7adb,	// (0x0003258c) list_double_large_graphic_pane_vc_t1

0x7af4,	// (0x000325a5) list_double_large_graphic_pane_vc_t2_ParamLimits

0x7af4,	// (0x000325a5) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa70,	// (0x0003a521) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa70,	// (0x0003a521) list_double_large_graphic_pane_vc_t

0x620c,	// (0x00030cbd) list_double_heading_pane_vc_g1_ParamLimits

0x620c,	// (0x00030cbd) list_double_heading_pane_vc_g1

0x6218,	// (0x00030cc9) list_double_heading_pane_vc_g2_ParamLimits

0x6218,	// (0x00030cc9) list_double_heading_pane_vc_g2

0x0001,

0xf7e5,	// (0x0003a296) list_double_heading_pane_vc_g_ParamLimits

0xf7e5,	// (0x0003a296) list_double_heading_pane_vc_g

0x7b0d,	// (0x000325be) list_double_heading_pane_vc_t1_ParamLimits

0x7b0d,	// (0x000325be) list_double_heading_pane_vc_t1

0x6224,	// (0x00030cd5) list_double_heading_pane_vc_t2_ParamLimits

0x6224,	// (0x00030cd5) list_double_heading_pane_vc_t2

0x0001,

0xfa75,	// (0x0003a526) list_double_heading_pane_vc_t_ParamLimits

0xfa75,	// (0x0003a526) list_double_heading_pane_vc_t

0x7b21,	// (0x000325d2) list_double_graphic_pane_vc_g1_ParamLimits

0x7b21,	// (0x000325d2) list_double_graphic_pane_vc_g1

0x7b31,	// (0x000325e2) list_double_graphic_pane_vc_g2_ParamLimits

0x7b31,	// (0x000325e2) list_double_graphic_pane_vc_g2

0x7b40,	// (0x000325f1) list_double_graphic_pane_vc_g3_ParamLimits

0x7b40,	// (0x000325f1) list_double_graphic_pane_vc_g3

0x0002,

0xfa7a,	// (0x0003a52b) list_double_graphic_pane_vc_g_ParamLimits

0xfa7a,	// (0x0003a52b) list_double_graphic_pane_vc_g

0x7b4c,	// (0x000325fd) list_double_graphic_pane_vc_t1_ParamLimits

0x7b4c,	// (0x000325fd) list_double_graphic_pane_vc_t1

0x7a6f,	// (0x00032520) list_double_graphic_pane_vc_t2_ParamLimits

0x7a6f,	// (0x00032520) list_double_graphic_pane_vc_t2

0x0001,

0xfa81,	// (0x0003a532) list_double_graphic_pane_vc_t_ParamLimits

0xfa81,	// (0x0003a532) list_double_graphic_pane_vc_t

0x4978,	// (0x0002f429) aid_size_cell_fastswap

0x4980,	// (0x0002f431) aid_size_cell_touch_ParamLimits

0x4980,	// (0x0002f431) aid_size_cell_touch

0x4be5,	// (0x0002f696) popup_fast_swap_wide_window_ParamLimits

0x4be5,	// (0x0002f696) popup_fast_swap_wide_window

0x4cef,	// (0x0002f7a0) touch_pane_ParamLimits

0x4cef,	// (0x0002f7a0) touch_pane

0x847e,	// (0x00032f2f) button_value_adjust_pane_cp2

0x52cf,	// (0x0002fd80) button_value_adjust_pane_cp4

0x52ef,	// (0x0002fda0) form_field_data_pane_cp2

0x530e,	// (0x0002fdbf) form_field_data_wide_pane_cp2

0x8909,	// (0x000333ba) bg_scroll_pane_ParamLimits

0x56c0,	// (0x00030171) scroll_handle_pane_ParamLimits

0x56d4,	// (0x00030185) scroll_sc2_down_pane_ParamLimits

0x56d4,	// (0x00030185) scroll_sc2_down_pane

0x893a,	// (0x000333eb) scroll_sc2_up_pane_ParamLimits

0x893a,	// (0x000333eb) scroll_sc2_up_pane

0xbbf2,	// (0x000366a3) grid_wheel_folder_pane_g1_ParamLimits

0xbbf2,	// (0x000366a3) grid_wheel_folder_pane_g1

0x5923,	// (0x000303d4) clock_nsta_pane_cp2_ParamLimits

0x5923,	// (0x000303d4) clock_nsta_pane_cp2

0x8682,	// (0x00033133) listscroll_midp_pane_ParamLimits

0x9100,	// (0x00033bb1) midp_canvas_pane

0x93ea,	// (0x00033e9b) nsta_clock_indic_pane

0x941e,	// (0x00033ecf) listscroll_form_pane_vc

0x9426,	// (0x00033ed7) listscroll_set_pane_vc_ParamLimits

0x9426,	// (0x00033ed7) listscroll_set_pane_vc

0x9549,	// (0x00033ffa) clock_nsta_pane

0x95be,	// (0x0003406f) indicator_nsta_pane

0x988d,	// (0x0003433e) bg_popup_sub_pane_cp2_ParamLimits

0x98a1,	// (0x00034352) find_pane_cp2_ParamLimits

0x98a1,	// (0x00034352) find_pane_cp2

0x98b7,	// (0x00034368) grid_toobar_pane_ParamLimits

0x9a1b,	// (0x000344cc) list_form_gen_pane_vc_ParamLimits

0x9a1b,	// (0x000344cc) list_form_gen_pane_vc

0x9a31,	// (0x000344e2) scroll_pane_cp8_vc_ParamLimits

0x9a31,	// (0x000344e2) scroll_pane_cp8_vc

0x9aad,	// (0x0003455e) data_form_wide_pane_vc_ParamLimits

0x9aad,	// (0x0003455e) data_form_wide_pane_vc

0x9ab9,	// (0x0003456a) form_field_data_wide_pane_vc_g1

0x9ac1,	// (0x00034572) form_field_data_wide_pane_vc_t1_ParamLimits

0x9ac1,	// (0x00034572) form_field_data_wide_pane_vc_t1

0x8492,	// (0x00032f43) input_focus_pane_cp6_vc_ParamLimits

0x8492,	// (0x00032f43) input_focus_pane_cp6_vc

0x9ded,	// (0x0003489e) list_midp_pane_ParamLimits

0x9df9,	// (0x000348aa) scroll_pane_cp16_ParamLimits

0x9df9,	// (0x000348aa) scroll_pane_cp16

0x9e47,	// (0x000348f8) button_value_adjust_pane_ParamLimits

0x9e47,	// (0x000348f8) button_value_adjust_pane

0xadda,	// (0x0003588b) button_value_adjust_pane_cp6_ParamLimits

0xadda,	// (0x0003588b) button_value_adjust_pane_cp6

0xaf04,	// (0x000359b5) settings_code_pane_cp_ParamLimits

0xaf04,	// (0x000359b5) settings_code_pane_cp

0x74b8,	// (0x00031f69) cell_touch_pane_g1

0x74b8,	// (0x00031f69) cell_touch_pane_g2

0x0001,

0xf709,	// (0x0003a1ba) cell_touch_pane_g

0xb4e7,	// (0x00035f98) cell_touch_pane_cp_ParamLimits

0xb4e7,	// (0x00035f98) cell_touch_pane_cp

0xb4f7,	// (0x00035fa8) cell_touch_pane_ParamLimits

0xb4f7,	// (0x00035fa8) cell_touch_pane

0x74b8,	// (0x00031f69) scroll_sc2_down_pane_g1

0x74b8,	// (0x00031f69) scroll_sc2_up_pane_g1

0x74c2,	// (0x00031f73) bg_set_opt_pane_cp4_vc

0xb509,	// (0x00035fba) list_set_graphic_pane_vc_g1_ParamLimits

0xb509,	// (0x00035fba) list_set_graphic_pane_vc_g1

0xb515,	// (0x00035fc6) list_set_graphic_pane_vc_g2_ParamLimits

0xb515,	// (0x00035fc6) list_set_graphic_pane_vc_g2

0x0001,

0xfa05,	// (0x0003a4b6) list_set_graphic_pane_vc_g_ParamLimits

0xfa05,	// (0x0003a4b6) list_set_graphic_pane_vc_g

0xb521,	// (0x00035fd2) text_primary_small_cp13_vc_ParamLimits

0xb521,	// (0x00035fd2) text_primary_small_cp13_vc

0xb539,	// (0x00035fea) list_set_graphic_pane_vc_ParamLimits

0xb539,	// (0x00035fea) list_set_graphic_pane_vc

0x74c2,	// (0x00031f73) input_focus_pane_cp2_vc

0x74b8,	// (0x00031f69) setting_code_pane_vc_g1

0x75ed,	// (0x0003209e) setting_code_pane_vc_t1

0xb54b,	// (0x00035ffc) set_text_pane_vc_t1_ParamLimits

0xb54b,	// (0x00035ffc) set_text_pane_vc_t1

0x74c2,	// (0x00031f73) input_focus_pane_cp1_vc

0xb566,	// (0x00036017) list_set_text_pane_vc

0x74b8,	// (0x00031f69) setting_text_pane_vc_g1

0x74c2,	// (0x00031f73) bg_set_opt_pane_cp2_vc

0x75e4,	// (0x00032095) setting_slider_graphic_pane_vc_g1

0xb570,	// (0x00036021) setting_slider_graphic_pane_vc_t1

0xb580,	// (0x00036031) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa0a,	// (0x0003a4bb) setting_slider_graphic_pane_vc_t

0xb590,	// (0x00036041) slider_set_pane_cp_vc

0xb598,	// (0x00036049) slider_set_pane_vc_g1

0xb5a1,	// (0x00036052) slider_set_pane_vc_g2

0x0006,

0xfa0f,	// (0x0003a4c0) slider_set_pane_vc_g

0x84f9,	// (0x00032faa) set_opt_bg_pane_g1_copy1

0x8501,	// (0x00032fb2) set_opt_bg_pane_g2_copy1

0xb5cd,	// (0x0003607e) set_opt_bg_pane_g3_copy1

0x8511,	// (0x00032fc2) set_opt_bg_pane_g4_copy1

0x8519,	// (0x00032fca) set_opt_bg_pane_g5_copy1

0x8521,	// (0x00032fd2) set_opt_bg_pane_g6_copy1

0xb5d7,	// (0x00036088) set_opt_bg_pane_g7_copy1

0xb5df,	// (0x00036090) set_opt_bg_pane_g8_copy1

0xb5e9,	// (0x0003609a) set_opt_bg_pane_g9_copy1

0x74c2,	// (0x00031f73) bg_set_opt_pane_cp_vc

0xb5f3,	// (0x000360a4) setting_slider_pane_vc_t1

0xb602,	// (0x000360b3) setting_slider_pane_vc_t2

0xb612,	// (0x000360c3) setting_slider_pane_vc_t3

0x0002,

0xfa1e,	// (0x0003a4cf) setting_slider_pane_vc_t

0xb622,	// (0x000360d3) slider_set_pane_vc

0x6350,	// (0x00030e01) volume_set_pane_vc_g1

0x6359,	// (0x00030e0a) volume_set_pane_vc_g2

0x6362,	// (0x00030e13) volume_set_pane_vc_g3

0x636b,	// (0x00030e1c) volume_set_pane_vc_g4

0x6374,	// (0x00030e25) volume_set_pane_vc_g5

0x637d,	// (0x00030e2e) volume_set_pane_vc_g6

0x6386,	// (0x00030e37) volume_set_pane_vc_g7

0x638f,	// (0x00030e40) volume_set_pane_vc_g8

0x6398,	// (0x00030e49) volume_set_pane_vc_g9

0x63a1,	// (0x00030e52) volume_set_pane_vc_g10

0x0009,

0xf8bc,	// (0x0003a36d) volume_set_pane_vc_g

0xb62a,	// (0x000360db) volume_set_pane_vc

0xb632,	// (0x000360e3) button_value_adjust_pane_cp1_vc

0xb63c,	// (0x000360ed) list_highlight_pane_cp2_vc

0xb645,	// (0x000360f6) list_set_pane_vc_ParamLimits

0xb645,	// (0x000360f6) list_set_pane_vc

0xb6a3,	// (0x00036154) main_pane_set_vc_t1_ParamLimits

0xb6a3,	// (0x00036154) main_pane_set_vc_t1

0xb6b8,	// (0x00036169) main_pane_set_vc_t2_ParamLimits

0xb6b8,	// (0x00036169) main_pane_set_vc_t2

0xb6ca,	// (0x0003617b) main_pane_set_vc_t3_ParamLimits

0xb6ca,	// (0x0003617b) main_pane_set_vc_t3

0xb6de,	// (0x0003618f) main_pane_set_vc_t4_ParamLimits

0xb6de,	// (0x0003618f) main_pane_set_vc_t4

0x0003,

0xfa25,	// (0x0003a4d6) main_pane_set_vc_t_ParamLimits

0xfa25,	// (0x0003a4d6) main_pane_set_vc_t

0xb6f2,	// (0x000361a3) setting_code_pane_vc_ParamLimits

0xb6f2,	// (0x000361a3) setting_code_pane_vc

0xb703,	// (0x000361b4) setting_slider_graphic_pane_vc

0xb703,	// (0x000361b4) setting_slider_pane_vc

0xb703,	// (0x000361b4) setting_text_pane_vc

0xb703,	// (0x000361b4) setting_volume_pane_vc

0xb70d,	// (0x000361be) scroll_pane_cp121_vc

0x846c,	// (0x00032f1d) set_content_pane_vc

0xb74d,	// (0x000361fe) button_value_adjust_pane_g1

0xb756,	// (0x00036207) button_value_adjust_pane_g2

0x0001,

0xfa86,	// (0x0003a537) button_value_adjust_pane_g

0xb75f,	// (0x00036210) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb75f,	// (0x00036210) form_field_slider_wide_pane_vc_t1

0xb773,	// (0x00036224) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb773,	// (0x00036224) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa8b,	// (0x0003a53c) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa8b,	// (0x0003a53c) form_field_slider_wide_pane_vc_t

0x781d,	// (0x000322ce) input_focus_pane_cp10_vc_ParamLimits

0x781d,	// (0x000322ce) input_focus_pane_cp10_vc

0xb7a1,	// (0x00036252) slider_cont_pane_cp1_vc_ParamLimits

0xb7a1,	// (0x00036252) slider_cont_pane_cp1_vc

0xb7b3,	// (0x00036264) slider_form_pane_g1_cp2

0xb5a1,	// (0x00036052) slider_form_pane_g2_cp2

0xb7e0,	// (0x00036291) form_field_slider_pane_vc_t3

0xb7ee,	// (0x0003629f) form_field_slider_pane_vc_t4

0xb7fc,	// (0x000362ad) slider_form_pane_vc_ParamLimits

0xb7fc,	// (0x000362ad) slider_form_pane_vc

0xb809,	// (0x000362ba) form_field_slider_pane_vc_t1_ParamLimits

0xb809,	// (0x000362ba) form_field_slider_pane_vc_t1

0xb773,	// (0x00036224) form_field_slider_pane_vc_t2_ParamLimits

0xb773,	// (0x00036224) form_field_slider_pane_vc_t2

0x0001,

0xfa9d,	// (0x0003a54e) form_field_slider_pane_vc_t_ParamLimits

0xfa9d,	// (0x0003a54e) form_field_slider_pane_vc_t

0x781d,	// (0x000322ce) input_focus_pane_cp9_vc_ParamLimits

0x781d,	// (0x000322ce) input_focus_pane_cp9_vc

0xb825,	// (0x000362d6) slider_cont_pane_vc_ParamLimits

0xb825,	// (0x000362d6) slider_cont_pane_vc

0xb839,	// (0x000362ea) list_form_graphic_pane_cp_vc_ParamLimits

0xb839,	// (0x000362ea) list_form_graphic_pane_cp_vc

0x9ab9,	// (0x0003456a) form_field_popup_wide_pane_vc_g1

0xb84e,	// (0x000362ff) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb84e,	// (0x000362ff) form_field_popup_wide_pane_vc_t1

0x8492,	// (0x00032f43) input_focus_pane_cp8_vc_ParamLimits

0x8492,	// (0x00032f43) input_focus_pane_cp8_vc

0xb893,	// (0x00036344) list_form_wide_pane_vc_ParamLimits

0xb893,	// (0x00036344) list_form_wide_pane_vc

0xb89f,	// (0x00036350) list_form_graphic_pane_vc_g1

0xb8a7,	// (0x00036358) list_form_graphic_pane_vc_t1_ParamLimits

0xb8a7,	// (0x00036358) list_form_graphic_pane_vc_t1

0x75a2,	// (0x00032053) list_highlight_pane_cp5_vc_ParamLimits

0x75a2,	// (0x00032053) list_highlight_pane_cp5_vc

0xb8c3,	// (0x00036374) list_form_graphic_pane_vc_ParamLimits

0xb8c3,	// (0x00036374) list_form_graphic_pane_vc

0x9ab9,	// (0x0003456a) form_field_popup_pane_vc_g1

0xb8d9,	// (0x0003638a) form_field_popup_pane_vc_t1_ParamLimits

0xb8d9,	// (0x0003638a) form_field_popup_pane_vc_t1

0x8492,	// (0x00032f43) input_focus_pane_cp7_vc_ParamLimits

0x8492,	// (0x00032f43) input_focus_pane_cp7_vc

0xb8f0,	// (0x000363a1) list_form_pane_vc_ParamLimits

0xb8f0,	// (0x000363a1) list_form_pane_vc

0xb8fc,	// (0x000363ad) data_form_pane_vc_t1_ParamLimits

0xb8fc,	// (0x000363ad) data_form_pane_vc_t1

0x84f9,	// (0x00032faa) input_focus_pane_vc_g1

0x8501,	// (0x00032fb2) input_focus_pane_vc_g2

0x8509,	// (0x00032fba) input_focus_pane_vc_g3

0x8511,	// (0x00032fc2) input_focus_pane_vc_g4

0x8519,	// (0x00032fca) input_focus_pane_vc_g5

0x8521,	// (0x00032fd2) input_focus_pane_vc_g6

0x8529,	// (0x00032fda) input_focus_pane_vc_g7

0x8531,	// (0x00032fe2) input_focus_pane_vc_g8

0x8539,	// (0x00032fea) input_focus_pane_vc_g9

0x74b8,	// (0x00031f69) input_focus_pane_vc_g10

0x0009,

0xf692,	// (0x0003a143) input_focus_pane_vc_g

0x9aad,	// (0x0003455e) data_form_pane_vc_ParamLimits

0x9aad,	// (0x0003455e) data_form_pane_vc

0x9ab9,	// (0x0003456a) form_field_data_pane_vc_g1

0xb917,	// (0x000363c8) form_field_data_pane_vc_t1_ParamLimits

0xb917,	// (0x000363c8) form_field_data_pane_vc_t1

0x8492,	// (0x00032f43) input_focus_pane_vc_ParamLimits

0x8492,	// (0x00032f43) input_focus_pane_vc

0xb931,	// (0x000363e2) button_value_adjust_pane_cp3_vc

0xb939,	// (0x000363ea) button_value_adjust_pane_cp5_vc

0xb941,	// (0x000363f2) form_field_data_pane_vc_ParamLimits

0xb941,	// (0x000363f2) form_field_data_pane_vc

0xb958,	// (0x00036409) form_field_data_pane_vc_cp2

0xb960,	// (0x00036411) form_field_data_wide_pane_vc_ParamLimits

0xb960,	// (0x00036411) form_field_data_wide_pane_vc

0xb976,	// (0x00036427) form_field_data_wide_pane_vc_cp2

0xb97e,	// (0x0003642f) form_field_popup_pane_vc_ParamLimits

0xb97e,	// (0x0003642f) form_field_popup_pane_vc

0xb995,	// (0x00036446) form_field_popup_wide_pane_vc_ParamLimits

0xb995,	// (0x00036446) form_field_popup_wide_pane_vc

0xb9ab,	// (0x0003645c) form_field_slider_pane_vc_ParamLimits

0xb9ab,	// (0x0003645c) form_field_slider_pane_vc

0xb9be,	// (0x0003646f) form_field_slider_wide_pane_vc_ParamLimits

0xb9be,	// (0x0003646f) form_field_slider_wide_pane_vc

0xb9d1,	// (0x00036482) grid_touch_1_pane_ParamLimits

0xb9d1,	// (0x00036482) grid_touch_1_pane

0xb9dd,	// (0x0003648e) grid_touch_2_pane_ParamLimits

0xb9dd,	// (0x0003648e) grid_touch_2_pane

0x93b5,	// (0x00033e66) touch_pane_g1_ParamLimits

0x93b5,	// (0x00033e66) touch_pane_g1

0xb9f5,	// (0x000364a6) cell_app_pane_cp_wide_ParamLimits

0xb9f5,	// (0x000364a6) cell_app_pane_cp_wide

0xba06,	// (0x000364b7) grid_popup_fast_wide_pane_ParamLimits

0xba06,	// (0x000364b7) grid_popup_fast_wide_pane

0xba1a,	// (0x000364cb) scroll_pane_cp19_ParamLimits

0xba1a,	// (0x000364cb) scroll_pane_cp19

0x74c2,	// (0x00031f73) bg_popup_window_pane_cp20

0xba2e,	// (0x000364df) listscroll_popup_fast_wide_pane

0x75a2,	// (0x00032053) grid_indicator_nsta_pane

0xba36,	// (0x000364e7) clock_nsta_pane_g1

0xba3f,	// (0x000364f0) clock_nsta_pane_t1

0xba5b,	// (0x0003650c) cell_indicator_nsta_pane_ParamLimits

0xba5b,	// (0x0003650c) cell_indicator_nsta_pane

0xba93,	// (0x00036544) cell_indicator_nsta_pane_g1

0xbaa1,	// (0x00036552) cell_indicator_nsta_pane_g2

0x0001,

0xfaae,	// (0x0003a55f) cell_indicator_nsta_pane_g

0xbab7,	// (0x00036568) clock_nsta_pane_cp

0xbabf,	// (0x00036570) indicator_nsta_pane_cp

0xbac8,	// (0x00036579) nsta_clock_indic_pane_g1

0x766b,	// (0x0003211c) grid_indicator_pane

0x8a2f,	// (0x000334e0) scroll_pane_cp29

0x5872,	// (0x00030323) indicator_nsta_pane_cp2_ParamLimits

0x5872,	// (0x00030323) indicator_nsta_pane_cp2

0x75a2,	// (0x00032053) main_apps_wheel_pane

0x9cce,	// (0x0003477f) form_midp_field_text_pane_ParamLimits

0x9e19,	// (0x000348ca) scroll_bar_cp050_ParamLimits

0xbb31,	// (0x000365e2) cell_indicator_pane_ParamLimits

0xbb31,	// (0x000365e2) cell_indicator_pane

0xbb48,	// (0x000365f9) cell_indicator_pane_g1

0xbb52,	// (0x00036603) grid_wheel_folder_pane_ParamLimits

0xbb52,	// (0x00036603) grid_wheel_folder_pane

0xbb66,	// (0x00036617) list_wheel_apps_pane_ParamLimits

0xbb66,	// (0x00036617) list_wheel_apps_pane

0xbb77,	// (0x00036628) main_apps_wheel_pane_g1_ParamLimits

0xbb77,	// (0x00036628) main_apps_wheel_pane_g1

0xbb8b,	// (0x0003663c) main_apps_wheel_pane_g2_ParamLimits

0xbb8b,	// (0x0003663c) main_apps_wheel_pane_g2

0x0001,

0xfaca,	// (0x0003a57b) main_apps_wheel_pane_g_ParamLimits

0xfaca,	// (0x0003a57b) main_apps_wheel_pane_g

0xbba3,	// (0x00036654) main_apps_wheel_pane_t1_ParamLimits

0xbba3,	// (0x00036654) main_apps_wheel_pane_t1

0xbbc6,	// (0x00036677) list_wheel_apps_pane_g1

0xbbce,	// (0x0003667f) list_wheel_apps_pane_g2

0xbbd6,	// (0x00036687) list_wheel_apps_pane_g3

0xbbde,	// (0x0003668f) list_wheel_apps_pane_g4

0xbbe8,	// (0x00036699) list_wheel_apps_pane_g5

0x0004,

0xfacf,	// (0x0003a580) list_wheel_apps_pane_g

0x8f78,	// (0x00033a29) navi_icon_text_pane

0x945a,	// (0x00033f0b) aid_fill_nsta

0xbc0b,	// (0x000366bc) navi_icon_text_pane_g1

0xbc17,	// (0x000366c8) navi_icon_text_pane_t1

0x8e16,	// (0x000338c7) list_set_graphic_pane_t1_ParamLimits

0x8e16,	// (0x000338c7) list_set_graphic_pane_t1

0xa574,	// (0x00035025) popup_midp_note_alarm_window_t6_ParamLimits

0xa574,	// (0x00035025) popup_midp_note_alarm_window_t6

0xa586,	// (0x00035037) popup_midp_note_alarm_window_t7_ParamLimits

0xa586,	// (0x00035037) popup_midp_note_alarm_window_t7

0xa598,	// (0x00035049) popup_midp_note_alarm_window_t8_ParamLimits

0xa598,	// (0x00035049) popup_midp_note_alarm_window_t8

0xa5aa,	// (0x0003505b) popup_midp_note_alarm_window_t9_ParamLimits

0xa5aa,	// (0x0003505b) popup_midp_note_alarm_window_t9

0xa5bc,	// (0x0003506d) popup_midp_note_alarm_window_t10_ParamLimits

0xa5bc,	// (0x0003506d) popup_midp_note_alarm_window_t10

0xa5ce,	// (0x0003507f) popup_midp_note_alarm_window_t11_ParamLimits

0xa5ce,	// (0x0003507f) popup_midp_note_alarm_window_t11

0xa5e0,	// (0x00035091) scroll_pane_cp17_ParamLimits

0xa5e0,	// (0x00035091) scroll_pane_cp17

0x6350,	// (0x00030e01) volume_small_pane_cp_g1

0x670c,	// (0x000311bd) volume_small_pane_cp_g2

0x6715,	// (0x000311c6) volume_small_pane_cp_g3

0x671e,	// (0x000311cf) volume_small_pane_cp_g4

0x6727,	// (0x000311d8) volume_small_pane_cp_g5

0x6730,	// (0x000311e1) volume_small_pane_cp_g6

0x6739,	// (0x000311ea) volume_small_pane_cp_g7

0x6742,	// (0x000311f3) volume_small_pane_cp_g8

0x674b,	// (0x000311fc) volume_small_pane_cp_g9

0x6754,	// (0x00031205) volume_small_pane_cp_g10

0x91c7,	// (0x00033c78) midp_ticker_pane_g1_ParamLimits

0x91d3,	// (0x00033c84) midp_ticker_pane_g2_ParamLimits

0xf75e,	// (0x0003a20f) midp_ticker_pane_g_ParamLimits

0x91df,	// (0x00033c90) midp_ticker_pane_t1_ParamLimits

0x9470,	// (0x00033f21) aid_fill_nsta_2

0x9e05,	// (0x000348b6) list_form2_midp_pane

0xaf4f,	// (0x00035a00) midp_editing_number_pane_ParamLimits

0xaf5e,	// (0x00035a0f) midp_ticker_pane_ParamLimits

0xbc29,	// (0x000366da) form2_midp_field_pane

0xbc4d,	// (0x000366fe) scroll_pane_cp51

0xbc6d,	// (0x0003671e) form2_midp_button_pane_ParamLimits

0xbc6d,	// (0x0003671e) form2_midp_button_pane

0xbc7f,	// (0x00036730) form2_midp_content_pane_ParamLimits

0xbc7f,	// (0x00036730) form2_midp_content_pane

0xbc99,	// (0x0003674a) form2_midp_field_choice_group_pane

0xbca1,	// (0x00036752) form2_midp_field_pane_g1

0xbca9,	// (0x0003675a) form2_midp_field_pane_g2

0xbcb1,	// (0x00036762) form2_midp_field_pane_g3

0xbcb9,	// (0x0003676a) form2_midp_field_pane_g4

0x0003,

0xfaf4,	// (0x0003a5a5) form2_midp_field_pane_g

0xbcc1,	// (0x00036772) form2_midp_gauge_slider_pane

0xbcc9,	// (0x0003677a) form2_midp_gauge_wait_pane

0xbcd1,	// (0x00036782) form2_midp_image_pane_ParamLimits

0xbcd1,	// (0x00036782) form2_midp_image_pane

0xbcec,	// (0x0003679d) form2_midp_label_pane_ParamLimits

0xbcec,	// (0x0003679d) form2_midp_label_pane

0xbd05,	// (0x000367b6) form2_midp_label_pane_cp_ParamLimits

0xbd05,	// (0x000367b6) form2_midp_label_pane_cp

0xbd26,	// (0x000367d7) form2_midp_string_pane_ParamLimits

0xbd26,	// (0x000367d7) form2_midp_string_pane

0x7b60,	// (0x00032611) form2_midp_text_pane_ParamLimits

0x7b60,	// (0x00032611) form2_midp_text_pane

0xbd38,	// (0x000367e9) form2_midp_time_pane

0xbd48,	// (0x000367f9) input_focus_pane_cp51_ParamLimits

0xbd48,	// (0x000367f9) input_focus_pane_cp51

0xbd60,	// (0x00036811) form2_midp_label_pane_t1_ParamLimits

0xbd60,	// (0x00036811) form2_midp_label_pane_t1

0x7b7b,	// (0x0003262c) form2_mdip_text_pane_t1_ParamLimits

0x7b7b,	// (0x0003262c) form2_mdip_text_pane_t1

0x7b99,	// (0x0003264a) form2_midp_time_pane_t1

0xbda9,	// (0x0003685a) form2_midp_gauge_slider_pane_t1

0xbdbb,	// (0x0003686c) form2_midp_gauge_slider_pane_t2

0xbdcd,	// (0x0003687e) form2_midp_gauge_slider_pane_t3

0x0002,

0xfafd,	// (0x0003a5ae) form2_midp_gauge_slider_pane_t

0xbddf,	// (0x00036890) form2_midp_slider_pane

0xbdeb,	// (0x0003689c) form2_midp_gauge_wait_pane_t1

0xbdf9,	// (0x000368aa) form2_midp_wait_pane_ParamLimits

0xbdf9,	// (0x000368aa) form2_midp_wait_pane

0x9b00,	// (0x000345b1) list_single_2graphic_pane_cp4_ParamLimits

0x9b00,	// (0x000345b1) list_single_2graphic_pane_cp4

0xbe24,	// (0x000368d5) list_single_midp_graphic_pane_cp_ParamLimits

0xbe24,	// (0x000368d5) list_single_midp_graphic_pane_cp

0x74c2,	// (0x00031f73) list_highlight_pane_cp20

0xbe53,	// (0x00036904) list_single_2graphic_pane_g1_cp4

0xbe5b,	// (0x0003690c) list_single_2graphic_pane_g2_cp4

0xbe63,	// (0x00036914) list_single_2graphic_pane_t1_cp4

0x75a2,	// (0x00032053) list_highlight_pane_cp21

0xbe72,	// (0x00036923) list_single_midp_graphic_pane_g4_cp

0xbe81,	// (0x00036932) list_single_midp_graphic_pane_t1_cp

0xbe96,	// (0x00036947) form2_mdip_string_pane_t1_ParamLimits

0xbe96,	// (0x00036947) form2_mdip_string_pane_t1

0x74c2,	// (0x00031f73) bg_wml_button_pane_cp2

0x74b8,	// (0x00031f69) form2_midp_image_pane_g1

0x50a2,	// (0x0002fb53) list_double_large_graphic_pane_g5_ParamLimits

0x50a2,	// (0x0002fb53) list_double_large_graphic_pane_g5

0x8682,	// (0x00033133) midp_form_pane_ParamLimits

0x75a2,	// (0x00032053) main_apps_wheel_pane_ParamLimits

0x5f3d,	// (0x000309ee) popup_preview_window_ParamLimits

0x5f3d,	// (0x000309ee) popup_preview_window

0x60f8,	// (0x00030ba9) popup_touch_info_window_ParamLimits

0x60f8,	// (0x00030ba9) popup_touch_info_window

0x6116,	// (0x00030bc7) popup_touch_menu_window_ParamLimits

0x6116,	// (0x00030bc7) popup_touch_menu_window

0x74ae,	// (0x00031f5f) bg_popup_sub_pane_cp6

0xbf8f,	// (0x00036a40) list_touch_menu_pane

0xbf97,	// (0x00036a48) list_single_touch_menu_pane_ParamLimits

0xbf97,	// (0x00036a48) list_single_touch_menu_pane

0xbfad,	// (0x00036a5e) list_single_touch_menu_pane_t1

0x75a2,	// (0x00032053) bg_popup_sub_pane_cp7_ParamLimits

0x75a2,	// (0x00032053) bg_popup_sub_pane_cp7

0xbfbb,	// (0x00036a6c) heading_sub_pane

0xbfc3,	// (0x00036a74) list_touch_info_pane_ParamLimits

0xbfc3,	// (0x00036a74) list_touch_info_pane

0xbfd2,	// (0x00036a83) list_single_touch_info_pane_ParamLimits

0xbfd2,	// (0x00036a83) list_single_touch_info_pane

0xbfe4,	// (0x00036a95) list_single_touch_info_pane_t1

0xbff2,	// (0x00036aa3) list_single_touch_info_pane_t2

0x0001,

0xfb0b,	// (0x0003a5bc) list_single_touch_info_pane_t

0x90f8,	// (0x00033ba9) bg_popup_heading_pane_cp

0xc000,	// (0x00036ab1) heading_sub_pane_t1

0x9a47,	// (0x000344f8) bg_popup_preview_window_pane_cp_ParamLimits

0x9a47,	// (0x000344f8) bg_popup_preview_window_pane_cp

0xbfbb,	// (0x00036a6c) heading_preview_pane

0xbfc3,	// (0x00036a74) list_preview_pane_ParamLimits

0xbfc3,	// (0x00036a74) list_preview_pane

0xc00e,	// (0x00036abf) popup_preview_window_g1

0xbfd2,	// (0x00036a83) list_single_preview_pane_ParamLimits

0xbfd2,	// (0x00036a83) list_single_preview_pane

0xc016,	// (0x00036ac7) list_single_preview_pane_g1

0xc01e,	// (0x00036acf) list_single_preview_pane_t1

0xbfe4,	// (0x00036a95) list_single_preview_pane_t2

0x0001,

0xfb10,	// (0x0003a5c1) list_single_preview_pane_t

0xc02c,	// (0x00036add) bg_popup_heading_pane_cp2_ParamLimits

0xc02c,	// (0x00036add) bg_popup_heading_pane_cp2

0xc042,	// (0x00036af3) heading_preview_pane_g1

0xc04a,	// (0x00036afb) heading_preview_pane_t1_ParamLimits

0xc04a,	// (0x00036afb) heading_preview_pane_t1

0x768e,	// (0x0003213f) soft_indicator_pane_t1_ParamLimits

0x8405,	// (0x00032eb6) scroll_pane_ParamLimits

0x8928,	// (0x000333d9) scroll_sc2_left_pane

0x8931,	// (0x000333e2) scroll_sc2_right_pane

0x8950,	// (0x00033401) scroll_bg_pane_g1_ParamLimits

0x8965,	// (0x00033416) scroll_bg_pane_g2_ParamLimits

0x897d,	// (0x0003342e) scroll_bg_pane_g3_ParamLimits

0xf6e9,	// (0x0003a19a) scroll_bg_pane_g_ParamLimits

0x8950,	// (0x00033401) scroll_handle_pane_g1_ParamLimits

0x899f,	// (0x00033450) scroll_handle_pane_g2_ParamLimits

0x897d,	// (0x0003342e) scroll_handle_pane_g3_ParamLimits

0xf6f0,	// (0x0003a1a1) scroll_handle_pane_g_ParamLimits

0x5bc0,	// (0x00030671) popup_choice_list_window_ParamLimits

0x5bc0,	// (0x00030671) popup_choice_list_window

0x9899,	// (0x0003434a) choice_list_pane

0x991b,	// (0x000343cc) cell_toolbar_pane_t1

0x9943,	// (0x000343f4) toolbar_button_pane_ParamLimits

0xaa9a,	// (0x0003554b) ai_gene_pane_1_t2_ParamLimits

0xaa9a,	// (0x0003554b) ai_gene_pane_1_t2

0x0001,

0xf918,	// (0x0003a3c9) ai_gene_pane_1_t_ParamLimits

0xf918,	// (0x0003a3c9) ai_gene_pane_1_t

0xc067,	// (0x00036b18) scroll_sc2_left_pane_g1

0xc067,	// (0x00036b18) scroll_sc2_right_pane_g1

0x9438,	// (0x00033ee9) bg_popup_sub_pane_cp10

0xc071,	// (0x00036b22) list_choice_list_pane

0xc08a,	// (0x00036b3b) list_single_choice_list_pane_ParamLimits

0xc08a,	// (0x00036b3b) list_single_choice_list_pane

0xc09d,	// (0x00036b4e) list_single_choice_list_pane_g1

0x8632,	// (0x000330e3) list_single_choice_list_pane_t1_ParamLimits

0x8632,	// (0x000330e3) list_single_choice_list_pane_t1

0xc0a5,	// (0x00036b56) choice_list_pane_g1

0xc0ad,	// (0x00036b5e) choice_list_pane_t1

0x74ae,	// (0x00031f5f) input_focus_pane_cp11

0x8809,	// (0x000332ba) title_pane_stacon_g2_ParamLimits

0x8809,	// (0x000332ba) title_pane_stacon_g2

0x0002,

0xf6cf,	// (0x0003a180) title_pane_stacon_g_ParamLimits

0xf6cf,	// (0x0003a180) title_pane_stacon_g

0x90f8,	// (0x00033ba9) cursor_press_pane

0x5c6c,	// (0x0003071d) popup_fep_hwr_window_ParamLimits

0x5c6c,	// (0x0003071d) popup_fep_hwr_window

0x5ce6,	// (0x00030797) popup_fep_vkb_window_ParamLimits

0x5ce6,	// (0x00030797) popup_fep_vkb_window

0xc0bb,	// (0x00036b6c) cursor_press_pane_g1

0x0002,

0xfb39,	// (0x0003a5ea) fep_vkb_side_pane_g_ParamLimits

0x6796,	// (0x00031247) fep_hwr_candidate_pane_ParamLimits

0x6796,	// (0x00031247) fep_hwr_candidate_pane

0x67c0,	// (0x00031271) fep_hwr_side_pane_ParamLimits

0x67c0,	// (0x00031271) fep_hwr_side_pane

0x67e0,	// (0x00031291) fep_hwr_top_pane_ParamLimits

0x67e0,	// (0x00031291) fep_hwr_top_pane

0x67f8,	// (0x000312a9) fep_hwr_write_pane_ParamLimits

0x67f8,	// (0x000312a9) fep_hwr_write_pane

0xfb39,	// (0x0003a5ea) fep_vkb_side_pane_g

0xc0c3,	// (0x00036b74) fep_hwr_top_pane_g1

0xc0d5,	// (0x00036b86) fep_hwr_top_pane_g2

0x6832,	// (0x000312e3) fep_hwr_top_pane_g3

0x0002,

0xfb15,	// (0x0003a5c6) fep_hwr_top_pane_g

0x6847,	// (0x000312f8) fep_hwr_top_text_pane

0x8af6,	// (0x000335a7) fep_hwr_top_text_pane_g1

0xc10b,	// (0x00036bbc) fep_hwr_top_text_pane_t1

0x693d,	// (0x000313ee) fep_hwr_candidate_pane_g1

0xc35e,	// (0x00036e0f) fep_vkb_keypad_pane_g3_ParamLimits

0xc35e,	// (0x00036e0f) fep_vkb_keypad_pane_g3

0xc386,	// (0x00036e37) fep_vkb_keypad_pane_g4_ParamLimits

0xc386,	// (0x00036e37) fep_vkb_keypad_pane_g4

0xc3f5,	// (0x00036ea6) fep_vkb_bottom_pane_g2_ParamLimits

0xc3f5,	// (0x00036ea6) fep_vkb_bottom_pane_g2

0x0001,

0xfb40,	// (0x0003a5f1) fep_vkb_bottom_pane_g_ParamLimits

0xfb40,	// (0x0003a5f1) fep_vkb_bottom_pane_g

0xc067,	// (0x00036b18) cell_vkb_side_pane_g2

0x0001,

0xfb4a,	// (0x0003a5fb) cell_vkb_side_pane_g

0xc480,	// (0x00036f31) cell_vkb_side_pane_t1

0xc48e,	// (0x00036f3f) cell_vkb_side_pane_t1_copy1

0xc067,	// (0x00036b18) bg_fep_vkb_candidate_pane_g2

0xc5ba,	// (0x0003706b) cell_vkb_candidate_pane_ParamLimits

0xc119,	// (0x00036bca) aid_size_cell_vkb_ParamLimits

0xc119,	// (0x00036bca) aid_size_cell_vkb

0xc5ba,	// (0x0003706b) cell_vkb_candidate_pane

0x6964,	// (0x00031415) bg_popup_fep_shadow_pane_g1

0xc1a7,	// (0x00036c58) fep_vkb_bottom_pane_ParamLimits

0xc1a7,	// (0x00036c58) fep_vkb_bottom_pane

0xc1dd,	// (0x00036c8e) fep_vkb_candidate_pane_ParamLimits

0xc1dd,	// (0x00036c8e) fep_vkb_candidate_pane

0xc1f9,	// (0x00036caa) fep_vkb_keypad_pane_ParamLimits

0xc1f9,	// (0x00036caa) fep_vkb_keypad_pane

0xc23f,	// (0x00036cf0) fep_vkb_side_pane_ParamLimits

0xc23f,	// (0x00036cf0) fep_vkb_side_pane

0xc27b,	// (0x00036d2c) fep_vkb_top_pane_ParamLimits

0xc27b,	// (0x00036d2c) fep_vkb_top_pane

0xc2b7,	// (0x00036d68) fep_vkb_top_pane_g1_ParamLimits

0xc2b7,	// (0x00036d68) fep_vkb_top_pane_g1

0xc2c6,	// (0x00036d77) fep_vkb_top_pane_g2_ParamLimits

0xc2c6,	// (0x00036d77) fep_vkb_top_pane_g2

0xc2d5,	// (0x00036d86) fep_vkb_top_pane_g3_ParamLimits

0xc2d5,	// (0x00036d86) fep_vkb_top_pane_g3

0x0003,

0xfb30,	// (0x0003a5e1) fep_vkb_top_pane_g_ParamLimits

0xfb30,	// (0x0003a5e1) fep_vkb_top_pane_g

0xc2f3,	// (0x00036da4) fep_vkb_top_text_pane_ParamLimits

0xc2f3,	// (0x00036da4) fep_vkb_top_text_pane

0xc304,	// (0x00036db5) fep_vkb_side_pane_g1_ParamLimits

0xc304,	// (0x00036db5) fep_vkb_side_pane_g1

0xc34d,	// (0x00036dfe) grid_vkb_side_pane_ParamLimits

0xc34d,	// (0x00036dfe) grid_vkb_side_pane

0x696c,	// (0x0003141d) bg_popup_fep_shadow_pane_g2

0x6975,	// (0x00031426) bg_popup_fep_shadow_pane_g3

0x697d,	// (0x0003142e) bg_popup_fep_shadow_pane_g4

0x6986,	// (0x00031437) bg_popup_fep_shadow_pane_g5

0x6990,	// (0x00031441) bg_popup_fep_shadow_pane_g6

0x6998,	// (0x00031449) bg_popup_fep_shadow_pane_g7

0x8511,	// (0x00032fc2) bg_popup_fep_shadow_pane_g8

0xc3a4,	// (0x00036e55) grid_vkb_keypad_number_pane_ParamLimits

0xc3a4,	// (0x00036e55) grid_vkb_keypad_number_pane

0xc3b4,	// (0x00036e65) grid_vkb_keypad_pane_ParamLimits

0xc3b4,	// (0x00036e65) grid_vkb_keypad_pane

0xc3da,	// (0x00036e8b) fep_vkb_bottom_pane_g1_ParamLimits

0xc3da,	// (0x00036e8b) fep_vkb_bottom_pane_g1

0xc403,	// (0x00036eb4) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc403,	// (0x00036eb4) grid_vkb_keypad_bottom_left_pane

0xc418,	// (0x00036ec9) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc418,	// (0x00036ec9) grid_vkb_keypad_bottom_right_pane

0xc42d,	// (0x00036ede) fep_vkb_top_text_pane_g1

0xc448,	// (0x00036ef9) fep_vkb_top_text_pane_t1

0xc45d,	// (0x00036f0e) cell_vkb_side_pane_ParamLimits

0xc45d,	// (0x00036f0e) cell_vkb_side_pane

0xc067,	// (0x00036b18) cell_vkb_side_pane_g1

0xc49c,	// (0x00036f4d) cell_vkb_keypad_pane_ParamLimits

0xc49c,	// (0x00036f4d) cell_vkb_keypad_pane

0xc511,	// (0x00036fc2) cell_vkb_keypad_pane_g1

0x0008,

0xfb5d,	// (0x0003a60e) bg_popup_fep_shadow_pane_g

0x69aa,	// (0x0003145b) cell_hwr_side_pane_g1

0x69aa,	// (0x0003145b) cell_hwr_side_pane_g2

0xc51b,	// (0x00036fcc) cell_vkb_keypad_pane_t1

0xc529,	// (0x00036fda) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc529,	// (0x00036fda) cell_vkb_keypad_bottom_left_pane

0xc546,	// (0x00036ff7) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc546,	// (0x00036ff7) cell_vkb_keypad_bottom_right_pane

0xc067,	// (0x00036b18) cell_vkb_keypad_bottom_left_pane_g1

0xc067,	// (0x00036b18) cell_vkb_keypad_bottom_right_pane_g1

0xc57f,	// (0x00037030) cell_vkb_keypad_number_pane_ParamLimits

0xc57f,	// (0x00037030) cell_vkb_keypad_number_pane

0xc59e,	// (0x0003704f) cell_vkb_keypad_number_pane_g1

0xc5a8,	// (0x00037059) cell_vkb_keypad_number_pane_g2

0xc5b1,	// (0x00037062) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb4f,	// (0x0003a600) cell_vkb_keypad_number_pane_g

0xc51b,	// (0x00036fcc) cell_vkb_keypad_number_pane_t1

0xc5d5,	// (0x00037086) fep_vkb_candidate_pane_g1

0x0001,

0xfb70,	// (0x0003a621) cell_hwr_side_pane_g

0xc5ee,	// (0x0003709f) cell_hwr_side_pane_t1

0x69b4,	// (0x00031465) cell_hwr_side_pane_t1_copy1

0x69c2,	// (0x00031473) cell_hwr_candidate_pane_g1

0x69f1,	// (0x000314a2) cell_hwr_candidate_pane_t1

0xc067,	// (0x00036b18) cell_vkb_candidate_pane_g2

0xc632,	// (0x000370e3) cell_vkb_candidate_pane_t1

0x675d,	// (0x0003120e) bg_popup_fep_shadow_pane_ParamLimits

0x675d,	// (0x0003120e) bg_popup_fep_shadow_pane

0x6812,	// (0x000312c3) bg_fep_hwr_top_pane_g4

0xc0e7,	// (0x00036b98) bg_hwr_side_pane_g1_ParamLimits

0xc0e7,	// (0x00036b98) bg_hwr_side_pane_g1

0x6883,	// (0x00031334) cell_hwr_side_pane_ParamLimits

0x6883,	// (0x00031334) cell_hwr_side_pane

0x68be,	// (0x0003136f) fep_hwr_write_pane_g1_ParamLimits

0x68be,	// (0x0003136f) fep_hwr_write_pane_g1

0x68cb,	// (0x0003137c) fep_hwr_write_pane_g2_ParamLimits

0x68cb,	// (0x0003137c) fep_hwr_write_pane_g2

0x68d8,	// (0x00031389) fep_hwr_write_pane_g3_ParamLimits

0x68d8,	// (0x00031389) fep_hwr_write_pane_g3

0x68e6,	// (0x00031397) fep_hwr_write_pane_g4_ParamLimits

0x68e6,	// (0x00031397) fep_hwr_write_pane_g4

0x0005,

0xfb1c,	// (0x0003a5cd) fep_hwr_write_pane_g_ParamLimits

0xfb1c,	// (0x0003a5cd) fep_hwr_write_pane_g

0x6812,	// (0x000312c3) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x6812,	// (0x000312c3) bg_fep_hwr_candidate_pane_g2

0x68fb,	// (0x000313ac) cell_hwr_candidate_pane_ParamLimits

0x68fb,	// (0x000313ac) cell_hwr_candidate_pane

0x693d,	// (0x000313ee) fep_hwr_candidate_pane_g1_ParamLimits

0xc147,	// (0x00036bf8) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc147,	// (0x00036bf8) bg_popup_fep_shadow_pane_cp2

0xc2e5,	// (0x00036d96) fep_vkb_top_pane_g4_ParamLimits

0xc2e5,	// (0x00036d96) fep_vkb_top_pane_g4

0xc32b,	// (0x00036ddc) fep_vkb_side_pane_g2_ParamLimits

0xc32b,	// (0x00036ddc) fep_vkb_side_pane_g2

0x51fc,	// (0x0002fcad) list_setting_pane_t4_ParamLimits

0x51fc,	// (0x0002fcad) list_setting_pane_t4

0x5296,	// (0x0002fd47) list_setting_number_pane_t5_ParamLimits

0x5296,	// (0x0002fd47) list_setting_number_pane_t5

0x8b3d,	// (0x000335ee) list_double_heading_pane_cp2_ParamLimits

0x8b3d,	// (0x000335ee) list_double_heading_pane_cp2

0x84ac,	// (0x00032f5d) list_double_heading_pane_g1_cp2_ParamLimits

0x84ac,	// (0x00032f5d) list_double_heading_pane_g1_cp2

0x84b8,	// (0x00032f69) list_double_heading_pane_g2_cp2_ParamLimits

0x84b8,	// (0x00032f69) list_double_heading_pane_g2_cp2

0xc640,	// (0x000370f1) list_double_heading_pane_t1_cp2_ParamLimits

0xc640,	// (0x000370f1) list_double_heading_pane_t1_cp2

0xc656,	// (0x00037107) list_double_heading_pane_t2_cp2_ParamLimits

0xc656,	// (0x00037107) list_double_heading_pane_t2_cp2

0x7496,	// (0x00031f47) aid_value_unit2

0x4c3f,	// (0x0002f6f0) popup_preview_fixed_window

0x782b,	// (0x000322dc) bg_popup_preview_window_pane_cp02

0xc668,	// (0x00037119) list_preview_fixed_pane

0xc6ae,	// (0x0003715f) list_empty_pane_fp_ParamLimits

0xc6ae,	// (0x0003715f) list_empty_pane_fp

0xc6ae,	// (0x0003715f) list_single_cale_day_pane_fp_ParamLimits

0xc6ae,	// (0x0003715f) list_single_cale_day_pane_fp

0xc6ae,	// (0x0003715f) list_single_graphic_heading_pane_fp_ParamLimits

0xc6ae,	// (0x0003715f) list_single_graphic_heading_pane_fp

0xc6ae,	// (0x0003715f) list_single_graphic_pane_fp_ParamLimits

0xc6ae,	// (0x0003715f) list_single_graphic_pane_fp

0xc6ae,	// (0x0003715f) list_single_heading_pane_fp_ParamLimits

0xc6ae,	// (0x0003715f) list_single_heading_pane_fp

0xc6ae,	// (0x0003715f) list_single_pane_fp_ParamLimits

0xc6ae,	// (0x0003715f) list_single_pane_fp

0xc6c3,	// (0x00037174) list_single_pane_fp_g1_ParamLimits

0xc6c3,	// (0x00037174) list_single_pane_fp_g1

0x7bac,	// (0x0003265d) list_single_pane_fp_g2_ParamLimits

0x7bac,	// (0x0003265d) list_single_pane_fp_g2

0x7bb8,	// (0x00032669) list_single_pane_fp_g3_ParamLimits

0x7bb8,	// (0x00032669) list_single_pane_fp_g3

0xc6cf,	// (0x00037180) list_single_pane_fp_g4_ParamLimits

0xc6cf,	// (0x00037180) list_single_pane_fp_g4

0x0003,

0xfb83,	// (0x0003a634) list_single_pane_fp_g_ParamLimits

0xfb83,	// (0x0003a634) list_single_pane_fp_g

0x7bcc,	// (0x0003267d) list_single_pane_fp_t1_ParamLimits

0x7bcc,	// (0x0003267d) list_single_pane_fp_t1

0x7be3,	// (0x00032694) list_single_graphic_pane_fp_g1_ParamLimits

0x7be3,	// (0x00032694) list_single_graphic_pane_fp_g1

0xc6c3,	// (0x00037174) list_single_graphic_pane_fp_g2_ParamLimits

0xc6c3,	// (0x00037174) list_single_graphic_pane_fp_g2

0x7bac,	// (0x0003265d) list_single_graphic_pane_fp_g3_ParamLimits

0x7bac,	// (0x0003265d) list_single_graphic_pane_fp_g3

0x7bb8,	// (0x00032669) list_single_graphic_pane_fp_g4_ParamLimits

0x7bb8,	// (0x00032669) list_single_graphic_pane_fp_g4

0xc6cf,	// (0x00037180) list_single_graphic_pane_fp_g5_ParamLimits

0xc6cf,	// (0x00037180) list_single_graphic_pane_fp_g5

0x0004,

0xfb8c,	// (0x0003a63d) list_single_graphic_pane_fp_g_ParamLimits

0xfb8c,	// (0x0003a63d) list_single_graphic_pane_fp_g

0x7bef,	// (0x000326a0) list_single_graphic_pane_fp_t1_ParamLimits

0x7bef,	// (0x000326a0) list_single_graphic_pane_fp_t1

0x7be3,	// (0x00032694) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x7be3,	// (0x00032694) list_single_graphic_heading_pane_fp_g1

0xc6c3,	// (0x00037174) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc6c3,	// (0x00037174) list_single_graphic_heading_pane_fp_g2

0x7bac,	// (0x0003265d) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x7bac,	// (0x0003265d) list_single_graphic_heading_pane_fp_g3

0x7bb8,	// (0x00032669) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x7bb8,	// (0x00032669) list_single_graphic_heading_pane_fp_g4

0xc6cf,	// (0x00037180) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc6cf,	// (0x00037180) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb8c,	// (0x0003a63d) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb8c,	// (0x0003a63d) list_single_graphic_heading_pane_fp_g

0x7c05,	// (0x000326b6) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x7c05,	// (0x000326b6) list_single_graphic_heading_pane_fp_t1

0x7c1b,	// (0x000326cc) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x7c1b,	// (0x000326cc) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb97,	// (0x0003a648) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb97,	// (0x0003a648) list_single_graphic_heading_pane_fp_t

0x7c2d,	// (0x000326de) list_single_cale_day_pane_fp_g1_ParamLimits

0x7c2d,	// (0x000326de) list_single_cale_day_pane_fp_g1

0xc6db,	// (0x0003718c) list_single_cale_day_pane_fp_g2_ParamLimits

0xc6db,	// (0x0003718c) list_single_cale_day_pane_fp_g2

0x7c65,	// (0x00032716) list_single_cale_day_pane_fp_g3_ParamLimits

0x7c65,	// (0x00032716) list_single_cale_day_pane_fp_g3

0x7c8d,	// (0x0003273e) list_single_cale_day_pane_fp_g4_ParamLimits

0x7c8d,	// (0x0003273e) list_single_cale_day_pane_fp_g4

0x7cb1,	// (0x00032762) list_single_cale_day_pane_fp_g5_ParamLimits

0x7cb1,	// (0x00032762) list_single_cale_day_pane_fp_g5

0x0004,

0xfb9c,	// (0x0003a64d) list_single_cale_day_pane_fp_g_ParamLimits

0xfb9c,	// (0x0003a64d) list_single_cale_day_pane_fp_g

0x7cd5,	// (0x00032786) list_single_cale_day_pane_fp_t1_ParamLimits

0x7cd5,	// (0x00032786) list_single_cale_day_pane_fp_t1

0x7cfb,	// (0x000327ac) list_single_cale_day_pane_fp_t2_ParamLimits

0x7cfb,	// (0x000327ac) list_single_cale_day_pane_fp_t2

0x7d14,	// (0x000327c5) list_single_cale_day_pane_fp_t3_ParamLimits

0x7d14,	// (0x000327c5) list_single_cale_day_pane_fp_t3

0x0002,

0xfba7,	// (0x0003a658) list_single_cale_day_pane_fp_t_ParamLimits

0xfba7,	// (0x0003a658) list_single_cale_day_pane_fp_t

0xc6c3,	// (0x00037174) list_empty_pane_fp_g1_ParamLimits

0xc6c3,	// (0x00037174) list_empty_pane_fp_g1

0x7d2d,	// (0x000327de) list_empty_pane_fp_t1

0x7d3b,	// (0x000327ec) list_empty_pane_fp_t2

0x0001,

0xfbae,	// (0x0003a65f) list_empty_pane_fp_t

0xc6c3,	// (0x00037174) list_single_heading_pane_fp_g1_ParamLimits

0xc6c3,	// (0x00037174) list_single_heading_pane_fp_g1

0x7bac,	// (0x0003265d) list_single_heading_pane_fp_g2_ParamLimits

0x7bac,	// (0x0003265d) list_single_heading_pane_fp_g2

0x7bb8,	// (0x00032669) list_single_heading_pane_fp_g3_ParamLimits

0x7bb8,	// (0x00032669) list_single_heading_pane_fp_g3

0x0002,

0xfbb3,	// (0x0003a664) list_single_heading_pane_fp_g_ParamLimits

0xfbb3,	// (0x0003a664) list_single_heading_pane_fp_g

0x7d49,	// (0x000327fa) list_single_heading_pane_fp_t1_ParamLimits

0x7d49,	// (0x000327fa) list_single_heading_pane_fp_t1

0x7d5b,	// (0x0003280c) list_single_heading_pane_fp_t2_ParamLimits

0x7d5b,	// (0x0003280c) list_single_heading_pane_fp_t2

0x0001,

0xfbba,	// (0x0003a66b) list_single_heading_pane_fp_t_ParamLimits

0xfbba,	// (0x0003a66b) list_single_heading_pane_fp_t

0x86a0,	// (0x00033151) aid_size_cell_fast

0x779b,	// (0x0003224c) soft_indicator_pane_cp1_t1

0x86dd,	// (0x0003318e) cell_app_pane_cp2_ParamLimits

0x86dd,	// (0x0003318e) cell_app_pane_cp2

0x677f,	// (0x00031230) fep_hwr_candidate_drop_down_list_pane

0x6957,	// (0x00031408) fep_hwr_candidate_pane_g3_ParamLimits

0x6957,	// (0x00031408) fep_hwr_candidate_pane_g3

0x3728,	// (0x0002e1d9) fep_hwr_candidate_pane_g4_ParamLimits

0x3728,	// (0x0002e1d9) fep_hwr_candidate_pane_g4

0x0002,

0xfb29,	// (0x0003a5da) fep_hwr_candidate_pane_g_ParamLimits

0xfb29,	// (0x0003a5da) fep_hwr_candidate_pane_g

0xc1cc,	// (0x00036c7d) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc1cc,	// (0x00036c7d) fep_vkb_candidate_drop_down_list_pane

0xc5dd,	// (0x0003708e) fep_vkb_candidate_pane_g3

0xc5e5,	// (0x00037096) fep_vkb_candidate_pane_g4

0x0002,

0xfb56,	// (0x0003a607) fep_vkb_candidate_pane_g

0x69c2,	// (0x00031473) cell_hwr_candidate_pane_g1_ParamLimits

0x69d0,	// (0x00031481) cell_hwr_candidate_pane_g3_ParamLimits

0x69d0,	// (0x00031481) cell_hwr_candidate_pane_g3

0xdf67,	// (0x00038a18) cell_hwr_candidate_pane_g4_ParamLimits

0xdf67,	// (0x00038a18) cell_hwr_candidate_pane_g4

0x0002,

0xfb75,	// (0x0003a626) cell_hwr_candidate_pane_g_ParamLimits

0xfb75,	// (0x0003a626) cell_hwr_candidate_pane_g

0xc5fc,	// (0x000370ad) cell_vkb_candidate_pane_g3_ParamLimits

0xc5fc,	// (0x000370ad) cell_vkb_candidate_pane_g3

0xc617,	// (0x000370c8) cell_vkb_candidate_pane_g4_ParamLimits

0xc617,	// (0x000370c8) cell_vkb_candidate_pane_g4

0xc6e7,	// (0x00037198) cell_app_pane_cp2_g1_ParamLimits

0xc6e7,	// (0x00037198) cell_app_pane_cp2_g1

0xc705,	// (0x000371b6) cell_app_pane_cp2_g2_ParamLimits

0xc705,	// (0x000371b6) cell_app_pane_cp2_g2

0x0001,

0xfbbf,	// (0x0003a670) cell_app_pane_cp2_g_ParamLimits

0xfbbf,	// (0x0003a670) cell_app_pane_cp2_g

0xc711,	// (0x000371c2) cell_app_pane_cp2_t1_ParamLimits

0xc711,	// (0x000371c2) cell_app_pane_cp2_t1

0x8492,	// (0x00032f43) grid_highlight_pane_cp1_ParamLimits

0x8492,	// (0x00032f43) grid_highlight_pane_cp1

0x6a0f,	// (0x000314c0) cell_hwr_candidate_pane_cp1_ParamLimits

0x6a0f,	// (0x000314c0) cell_hwr_candidate_pane_cp1

0x69c2,	// (0x00031473) fep_hwr_candidate_drop_down_list_pane_g1

0x6a2e,	// (0x000314df) fep_hwr_candidate_drop_down_list_pane_g2

0x6a3b,	// (0x000314ec) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbc4,	// (0x0003a675) fep_hwr_candidate_drop_down_list_pane_g

0x6a48,	// (0x000314f9) fep_hwr_candidate_drop_down_list_scroll_pane

0x6a51,	// (0x00031502) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x6a51,	// (0x00031502) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x6a5e,	// (0x0003150f) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x6a5e,	// (0x0003150f) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x6a6b,	// (0x0003151c) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x6a6b,	// (0x0003151c) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x6a78,	// (0x00031529) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6a78,	// (0x00031529) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x6a93,	// (0x00031544) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6a93,	// (0x00031544) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x6aae,	// (0x0003155f) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x6aae,	// (0x0003155f) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x6ac9,	// (0x0003157a) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x6ac9,	// (0x0003157a) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x6ae4,	// (0x00031595) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x6ae4,	// (0x00031595) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbcb,	// (0x0003a67c) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbcb,	// (0x0003a67c) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc723,	// (0x000371d4) cell_vkb_candidate_pane_cp1_ParamLimits

0xc723,	// (0x000371d4) cell_vkb_candidate_pane_cp1

0xc2e5,	// (0x00036d96) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc2e5,	// (0x00036d96) fep_vkb_candidate_drop_down_list_pane_g1

0xc743,	// (0x000371f4) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc743,	// (0x000371f4) fep_vkb_candidate_drop_down_list_pane_g2

0xc750,	// (0x00037201) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc750,	// (0x00037201) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbdc,	// (0x0003a68d) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbdc,	// (0x0003a68d) fep_vkb_candidate_drop_down_list_pane_g

0xc75d,	// (0x0003720e) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc75d,	// (0x0003720e) fep_vkb_candidate_drop_down_list_scroll_pane

0xc76a,	// (0x0003721b) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc76a,	// (0x0003721b) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc777,	// (0x00037228) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc777,	// (0x00037228) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc783,	// (0x00037234) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc783,	// (0x00037234) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc78f,	// (0x00037240) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc78f,	// (0x00037240) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc7b0,	// (0x00037261) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc7b0,	// (0x00037261) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc7d1,	// (0x00037282) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc7d1,	// (0x00037282) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc7f2,	// (0x000372a3) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc7f2,	// (0x000372a3) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc813,	// (0x000372c4) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc813,	// (0x000372c4) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbe3,	// (0x0003a694) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbe3,	// (0x0003a694) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x74cc,	// (0x00031f7d) title_pane_g1_ParamLimits

0x74d9,	// (0x00031f8a) title_pane_g2_ParamLimits

0xf554,	// (0x0003a005) title_pane_g_ParamLimits

0x8ae6,	// (0x00033597) aid_call2_pane

0x8aee,	// (0x0003359f) aid_call_pane

0x8af6,	// (0x000335a7) popup_clock_analogue_window_g1

0x8af6,	// (0x000335a7) popup_clock_analogue_window_g2

0x56e9,	// (0x0003019a) popup_clock_analogue_window_g3

0x56f2,	// (0x000301a3) popup_clock_analogue_window_g4

0x74b8,	// (0x00031f69) popup_clock_analogue_window_g5

0x0004,

0xf6fe,	// (0x0003a1af) popup_clock_analogue_window_g

0x56fa,	// (0x000301ab) popup_clock_analogue_window_t1

0x5708,	// (0x000301b9) clock_digital_number_pane_ParamLimits

0x5708,	// (0x000301b9) clock_digital_number_pane

0x5714,	// (0x000301c5) clock_digital_number_pane_cp02_ParamLimits

0x5714,	// (0x000301c5) clock_digital_number_pane_cp02

0x5720,	// (0x000301d1) clock_digital_number_pane_cp03_ParamLimits

0x5720,	// (0x000301d1) clock_digital_number_pane_cp03

0x572c,	// (0x000301dd) clock_digital_number_pane_cp04_ParamLimits

0x572c,	// (0x000301dd) clock_digital_number_pane_cp04

0x5738,	// (0x000301e9) clock_digital_separator_pane_ParamLimits

0x5738,	// (0x000301e9) clock_digital_separator_pane

0x5744,	// (0x000301f5) popup_clock_digital_window_t1_ParamLimits

0x5744,	// (0x000301f5) popup_clock_digital_window_t1

0x74b8,	// (0x00031f69) clock_digital_number_pane_g1

0x74b8,	// (0x00031f69) clock_digital_number_pane_g2

0x0001,

0xf709,	// (0x0003a1ba) clock_digital_number_pane_g

0x74b8,	// (0x00031f69) clock_digital_separator_pane_g1

0x74b8,	// (0x00031f69) clock_digital_separator_pane_g2

0x0001,

0xf709,	// (0x0003a1ba) clock_digital_separator_pane_g

0x945a,	// (0x00033f0b) aid_fill_nsta_ParamLimits

0x95be,	// (0x0003406f) indicator_nsta_pane_ParamLimits

0x9731,	// (0x000341e2) popup_clock_analogue_window

0x9731,	// (0x000341e2) popup_clock_digital_window

0x75a2,	// (0x00032053) grid_indicator_nsta_pane_ParamLimits

0xba4d,	// (0x000364fe) clock_nsta_pane_t2

0x0001,

0xfaa9,	// (0x0003a55a) clock_nsta_pane_t

0x56ad,	// (0x0003015e) aid_size_max_handle

0x56b7,	// (0x00030168) aid_size_min_handle

0x90f8,	// (0x00033ba9) editor_scroll_pane

0xc82e,	// (0x000372df) ex_editor_pane

0x860e,	// (0x000330bf) scroll_pane_cp13

0x8431,	// (0x00032ee2) scroll_pane_cp14

0x8b25,	// (0x000335d6) scroll_pane_cp36

0x8b51,	// (0x00033602) list_single_graphic_hl_pane_cp2_ParamLimits

0x8b51,	// (0x00033602) list_single_graphic_hl_pane_cp2

0xafad,	// (0x00035a5e) list_single_graphic_hl_pane_ParamLimits

0xafad,	// (0x00035a5e) list_single_graphic_hl_pane

0x7d71,	// (0x00032822) aid_size_min_hl_cp1

0xc836,	// (0x000372e7) list_highlight_pane_cp34_ParamLimits

0xc836,	// (0x000372e7) list_highlight_pane_cp34

0xc847,	// (0x000372f8) list_single_graphic_hl_pane_g1_ParamLimits

0xc847,	// (0x000372f8) list_single_graphic_hl_pane_g1

0x7d7a,	// (0x0003282b) list_single_graphic_hl_pane_g2_ParamLimits

0x7d7a,	// (0x0003282b) list_single_graphic_hl_pane_g2

0x7d7a,	// (0x0003282b) list_single_graphic_hl_pane_g3_ParamLimits

0x7d7a,	// (0x0003282b) list_single_graphic_hl_pane_g3

0x6189,	// (0x00030c3a) list_single_graphic_hl_pane_g4_ParamLimits

0x6189,	// (0x00030c3a) list_single_graphic_hl_pane_g4

0x7d86,	// (0x00032837) list_single_graphic_hl_pane_g5_ParamLimits

0x7d86,	// (0x00032837) list_single_graphic_hl_pane_g5

0x0004,

0xfbf4,	// (0x0003a6a5) list_single_graphic_hl_pane_g_ParamLimits

0xfbf4,	// (0x0003a6a5) list_single_graphic_hl_pane_g

0x7d9a,	// (0x0003284b) list_single_graphic_hl_pane_t1_ParamLimits

0x7d9a,	// (0x0003284b) list_single_graphic_hl_pane_t1

0xc854,	// (0x00037305) aid_size_min_hl_cp2

0xc85d,	// (0x0003730e) list_highlight_pane_cp34_cp2_ParamLimits

0xc85d,	// (0x0003730e) list_highlight_pane_cp34_cp2

0xc847,	// (0x000372f8) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc847,	// (0x000372f8) list_single_graphic_hl_pane_g1_cp2

0xc86a,	// (0x0003731b) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc86a,	// (0x0003731b) list_single_graphic_hl_pane_g2_cp2

0xc876,	// (0x00037327) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc876,	// (0x00037327) list_single_graphic_hl_pane_g3_cp2

0x9f4d,	// (0x000349fe) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x9f4d,	// (0x000349fe) list_single_graphic_hl_pane_g4_cp2

0xc884,	// (0x00037335) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc884,	// (0x00037335) list_single_graphic_hl_pane_g5_cp2

0x5a7e,	// (0x0003052f) control_pane_g4_ParamLimits

0x5a7e,	// (0x0003052f) control_pane_g4

0x9438,	// (0x00033ee9) bg_popup_sub_pane_cp10_ParamLimits

0xc071,	// (0x00036b22) list_choice_list_pane_ParamLimits

0xc080,	// (0x00036b31) scroll_pane_cp23

0x782b,	// (0x000322dc) bg_popup_preview_window_pane_cp02_ParamLimits

0xc668,	// (0x00037119) list_preview_fixed_pane_ParamLimits

0xc67e,	// (0x0003712f) list_preview_fixed_pane_cp_ParamLimits

0xc67e,	// (0x0003712f) list_preview_fixed_pane_cp

0xc68a,	// (0x0003713b) popup_preview_fixed_window_g1_ParamLimits

0xc68a,	// (0x0003713b) popup_preview_fixed_window_g1

0xc696,	// (0x00037147) popup_preview_fixed_window_g2_ParamLimits

0xc696,	// (0x00037147) popup_preview_fixed_window_g2

0x0002,

0xfb7c,	// (0x0003a62d) popup_preview_fixed_window_g_ParamLimits

0xfb7c,	// (0x0003a62d) popup_preview_fixed_window_g

0x5621,	// (0x000300d2) aid_navi_side_left_pane_ParamLimits

0x5636,	// (0x000300e7) aid_navi_side_right_pane_ParamLimits

0x564e,	// (0x000300ff) navi_icon_pane_stacon_ParamLimits

0x5662,	// (0x00030113) navi_navi_pane_stacon_ParamLimits

0x564e,	// (0x000300ff) navi_text_pane_stacon_ParamLimits

0x4b00,	// (0x0002f5b1) main_text_info_pane

0xc8ae,	// (0x0003735f) listscroll_text_info_pane

0xc8b6,	// (0x00037367) list_text_info_pane_ParamLimits

0xc8b6,	// (0x00037367) list_text_info_pane

0xc8c5,	// (0x00037376) scroll_pane_cp24_ParamLimits

0xc8c5,	// (0x00037376) scroll_pane_cp24

0xc8e3,	// (0x00037394) list_text_info_pane_t1_ParamLimits

0xc8e3,	// (0x00037394) list_text_info_pane_t1

0x5bde,	// (0x0003068f) popup_fast_swap2_window_ParamLimits

0x5bde,	// (0x0003068f) popup_fast_swap2_window

0xc914,	// (0x000373c5) aid_size_cell_fast2

0x74ae,	// (0x00031f5f) bg_popup_window_pane_cp17

0x9e31,	// (0x000348e2) heading_pane_cp2

0x80fb,	// (0x00032bac) listscroll_fast2_pane

0xc91e,	// (0x000373cf) grid_fast2_pane

0xc928,	// (0x000373d9) listscroll_fast2_pane_g1

0xc930,	// (0x000373e1) listscroll_fast2_pane_g2

0x0001,

0xfbff,	// (0x0003a6b0) listscroll_fast2_pane_g

0x860e,	// (0x000330bf) scroll_pane_cp26

0xc93a,	// (0x000373eb) cell_fast2_pane_ParamLimits

0xc93a,	// (0x000373eb) cell_fast2_pane

0xc94f,	// (0x00037400) cell_fast2_pane_g1

0xc958,	// (0x00037409) cell_fast2_pane_g2

0xc961,	// (0x00037412) cell_fast2_pane_g3

0x0002,

0xfc04,	// (0x0003a6b5) cell_fast2_pane_g

0x81ee,	// (0x00032c9f) grid_highlight_pane_cp9

0x5b9c,	// (0x0003064d) main_eswt_pane_ParamLimits

0x5b9c,	// (0x0003064d) main_eswt_pane

0xc8da,	// (0x0003738b) list_single_text_info_pane

0xc969,	// (0x0003741a) eswt_ctrl_button_pane

0xc969,	// (0x0003741a) eswt_ctrl_canvas_pane

0xc971,	// (0x00037422) eswt_ctrl_combo_pane

0xc969,	// (0x0003741a) eswt_ctrl_default_pane

0xc969,	// (0x0003741a) eswt_ctrl_label_pane

0xc979,	// (0x0003742a) eswt_ctrl_wait_pane

0xc981,	// (0x00037432) eswt_shell_pane

0x74ae,	// (0x00031f5f) listscroll_eswt_app_pane

0xc9a1,	// (0x00037452) popup_eswt_tasktip_window_ParamLimits

0xc9a1,	// (0x00037452) popup_eswt_tasktip_window

0x9a47,	// (0x000344f8) bg_popup_window_pane_cp18

0xc9b2,	// (0x00037463) eswt_control_pane_g1_ParamLimits

0xc9b2,	// (0x00037463) eswt_control_pane_g1

0xc9bf,	// (0x00037470) eswt_control_pane_g2_ParamLimits

0xc9bf,	// (0x00037470) eswt_control_pane_g2

0xc9cc,	// (0x0003747d) eswt_control_pane_g3_ParamLimits

0xc9cc,	// (0x0003747d) eswt_control_pane_g3

0xc9d9,	// (0x0003748a) eswt_control_pane_g4_ParamLimits

0xc9d9,	// (0x0003748a) eswt_control_pane_g4

0x0003,

0xfc0b,	// (0x0003a6bc) eswt_control_pane_g_ParamLimits

0xfc0b,	// (0x0003a6bc) eswt_control_pane_g

0x8492,	// (0x00032f43) bg_button_pane_ParamLimits

0x8492,	// (0x00032f43) bg_button_pane

0x8203,	// (0x00032cb4) common_borders_pane_copy2_ParamLimits

0x8203,	// (0x00032cb4) common_borders_pane_copy2

0xc9e6,	// (0x00037497) control_button_pane_g1_ParamLimits

0xc9e6,	// (0x00037497) control_button_pane_g1

0xc9f2,	// (0x000374a3) control_button_pane_g2_ParamLimits

0xc9f2,	// (0x000374a3) control_button_pane_g2

0xc9fe,	// (0x000374af) control_button_pane_g3_ParamLimits

0xc9fe,	// (0x000374af) control_button_pane_g3

0x0002,

0xfc14,	// (0x0003a6c5) control_button_pane_g_ParamLimits

0xfc14,	// (0x0003a6c5) control_button_pane_g

0xca12,	// (0x000374c3) control_button_pane_t1

0xca20,	// (0x000374d1) control_button_pane_t2

0x0001,

0xfc1b,	// (0x0003a6cc) control_button_pane_t

0x994f,	// (0x00034400) bg_button_pane_g1

0x995f,	// (0x00034410) bg_button_pane_g2

0x9957,	// (0x00034408) bg_button_pane_g3

0x996f,	// (0x00034420) bg_button_pane_g4

0x9967,	// (0x00034418) bg_button_pane_g5

0x9977,	// (0x00034428) bg_button_pane_g6

0x997f,	// (0x00034430) bg_button_pane_g7

0x998f,	// (0x00034440) bg_button_pane_g8

0x9987,	// (0x00034438) bg_button_pane_g9

0x0008,

0xf86c,	// (0x0003a31d) bg_button_pane_g

0xc02c,	// (0x00036add) common_borders_pane_ParamLimits

0xc02c,	// (0x00036add) common_borders_pane

0xc9b2,	// (0x00037463) eswt_control_pane_g1_copy1_ParamLimits

0xc9b2,	// (0x00037463) eswt_control_pane_g1_copy1

0xc9bf,	// (0x00037470) eswt_control_pane_g2_copy1_ParamLimits

0xc9bf,	// (0x00037470) eswt_control_pane_g2_copy1

0xc9cc,	// (0x0003747d) eswt_control_pane_g3_copy1_ParamLimits

0xc9cc,	// (0x0003747d) eswt_control_pane_g3_copy1

0xc9d9,	// (0x0003748a) eswt_control_pane_g4_copy1_ParamLimits

0xc9d9,	// (0x0003748a) eswt_control_pane_g4_copy1

0xc067,	// (0x00036b18) bg_eswt_ctrl_canvas_pane_g1

0xc02c,	// (0x00036add) common_borders_pane_cp2_ParamLimits

0xc02c,	// (0x00036add) common_borders_pane_cp2

0xc02c,	// (0x00036add) common_borders_pane_cp3_ParamLimits

0xc02c,	// (0x00036add) common_borders_pane_cp3

0xca2e,	// (0x000374df) separator_horizontal_pane

0xca36,	// (0x000374e7) separator_vertical_pane

0xc9b2,	// (0x00037463) eswt_control_pane_g1_copy2_ParamLimits

0xc9b2,	// (0x00037463) eswt_control_pane_g1_copy2

0xc9bf,	// (0x00037470) eswt_control_pane_g2_copy2_ParamLimits

0xc9bf,	// (0x00037470) eswt_control_pane_g2_copy2

0xc9cc,	// (0x0003747d) eswt_control_pane_g3_copy2_ParamLimits

0xc9cc,	// (0x0003747d) eswt_control_pane_g3_copy2

0xc9d9,	// (0x0003748a) eswt_control_pane_g4_copy2_ParamLimits

0xc9d9,	// (0x0003748a) eswt_control_pane_g4_copy2

0x74ae,	// (0x00031f5f) common_borders_pane_cp4

0xca3f,	// (0x000374f0) separator_horizontal_pane_g1

0xca48,	// (0x000374f9) separator_horizontal_pane_g2

0xca51,	// (0x00037502) separator_horizontal_pane_g3

0x0002,

0xfc20,	// (0x0003a6d1) separator_horizontal_pane_g

0xc9b2,	// (0x00037463) eswt_control_pane_g1_copy3_ParamLimits

0xc9b2,	// (0x00037463) eswt_control_pane_g1_copy3

0xc9bf,	// (0x00037470) eswt_control_pane_g2_copy3_ParamLimits

0xc9bf,	// (0x00037470) eswt_control_pane_g2_copy3

0xc9cc,	// (0x0003747d) eswt_control_pane_g3_copy3_ParamLimits

0xc9cc,	// (0x0003747d) eswt_control_pane_g3_copy3

0xc9d9,	// (0x0003748a) eswt_control_pane_g4_copy3_ParamLimits

0xc9d9,	// (0x0003748a) eswt_control_pane_g4_copy3

0x74ae,	// (0x00031f5f) common_borders_pane_cp5

0xca5a,	// (0x0003750b) separator_vertical_pane_g1

0xca63,	// (0x00037514) separator_vertical_pane_g2

0xca6c,	// (0x0003751d) separator_vertical_pane_g3

0x0002,

0xfc27,	// (0x0003a6d8) separator_vertical_pane_g

0xc9b2,	// (0x00037463) eswt_control_pane_g1_copy4_ParamLimits

0xc9b2,	// (0x00037463) eswt_control_pane_g1_copy4

0xc9bf,	// (0x00037470) eswt_control_pane_g2_copy4_ParamLimits

0xc9bf,	// (0x00037470) eswt_control_pane_g2_copy4

0xc9cc,	// (0x0003747d) eswt_control_pane_g3_copy4_ParamLimits

0xc9cc,	// (0x0003747d) eswt_control_pane_g3_copy4

0xc9d9,	// (0x0003748a) eswt_control_pane_g4_copy4_ParamLimits

0xc9d9,	// (0x0003748a) eswt_control_pane_g4_copy4

0xca75,	// (0x00037526) eswt_ctrl_combo_button_pane

0xca7d,	// (0x0003752e) eswt_ctrl_input_pane

0xca85,	// (0x00037536) popup_choice_list_window_cp70

0xca8d,	// (0x0003753e) eswt_ctrl_input_pane_t1

0x74ae,	// (0x00031f5f) input_focus_pane_cp70

0xc02c,	// (0x00036add) bg_button_pane_cp70_ParamLimits

0xc02c,	// (0x00036add) bg_button_pane_cp70

0xca9b,	// (0x0003754c) eswt_ctrl_combo_button_pane_g1

0xcaa3,	// (0x00037554) wait_bar_pane_cp70

0x9a47,	// (0x000344f8) bg_popup_window_pane_cp70_ParamLimits

0x9a47,	// (0x000344f8) bg_popup_window_pane_cp70

0xcaab,	// (0x0003755c) popup_eswt_tasktip_window_t1

0xcac1,	// (0x00037572) wait_bar_pane_cp71_ParamLimits

0xcac1,	// (0x00037572) wait_bar_pane_cp71

0xcacd,	// (0x0003757e) grid_eswt_app_pane

0x8928,	// (0x000333d9) scroll_pane_cp70

0xcad6,	// (0x00037587) cell_eswt_app_pane_ParamLimits

0xcad6,	// (0x00037587) cell_eswt_app_pane

0xcb06,	// (0x000375b7) cell_eswt_app_pane_g1_ParamLimits

0xcb06,	// (0x000375b7) cell_eswt_app_pane_g1

0xcb35,	// (0x000375e6) cell_eswt_app_pane_g2_ParamLimits

0xcb35,	// (0x000375e6) cell_eswt_app_pane_g2

0x0001,

0xfc2e,	// (0x0003a6df) cell_eswt_app_pane_g_ParamLimits

0xfc2e,	// (0x0003a6df) cell_eswt_app_pane_g

0xcb5e,	// (0x0003760f) cell_eswt_app_pane_t1_ParamLimits

0xcb5e,	// (0x0003760f) cell_eswt_app_pane_t1

0xcb90,	// (0x00037641) grid_highlight_pane_cp70_ParamLimits

0xcb90,	// (0x00037641) grid_highlight_pane_cp70

0x8fcd,	// (0x00033a7e) set_content_pane_g1

0x9398,	// (0x00033e49) status_small_volume_pane

0x6aff,	// (0x000315b0) status_small_volume_pane_g1

0x6b07,	// (0x000315b8) volume_small2_pane

0x6b10,	// (0x000315c1) volume_small2_pane_g1

0x6b19,	// (0x000315ca) volume_small2_pane_g2

0x6b22,	// (0x000315d3) volume_small2_pane_g3

0x6b2b,	// (0x000315dc) volume_small2_pane_g4

0x6b34,	// (0x000315e5) volume_small2_pane_g5

0x6b3d,	// (0x000315ee) volume_small2_pane_g6

0x6b46,	// (0x000315f7) volume_small2_pane_g7

0x6b4f,	// (0x00031600) volume_small2_pane_g8

0x6b58,	// (0x00031609) volume_small2_pane_g9

0x6b61,	// (0x00031612) volume_small2_pane_g10

0x0009,

0xfc33,	// (0x0003a6e4) volume_small2_pane_g

0xc42d,	// (0x00036ede) fep_vkb_top_text_pane_g1_ParamLimits

0xc448,	// (0x00036ef9) fep_vkb_top_text_pane_t1_ParamLimits

0xc6a2,	// (0x00037153) popup_preview_fixed_window_g3_ParamLimits

0xc6a2,	// (0x00037153) popup_preview_fixed_window_g3

0x608b,	// (0x00030b3c) popup_toolbar_trans_pane

0xadb7,	// (0x00035868) aid_height_set_list_ParamLimits

0xadc8,	// (0x00035879) aid_size_parent_ParamLimits

0x9438,	// (0x00033ee9) list_highlight_pane_cp2_ParamLimits

0x8fcd,	// (0x00033a7e) set_content_pane_g1_ParamLimits

0x78cf,	// (0x00032380) list_single_image_pane_ParamLimits

0x78cf,	// (0x00032380) list_single_image_pane

0xcb9c,	// (0x0003764d) aid_size_cell_image_ParamLimits

0xcb9c,	// (0x0003764d) aid_size_cell_image

0xcba9,	// (0x0003765a) grid_single_image_pane_ParamLimits

0xcba9,	// (0x0003765a) grid_single_image_pane

0x949a,	// (0x00033f4b) list_single_image_pane_g1_ParamLimits

0x949a,	// (0x00033f4b) list_single_image_pane_g1

0xcbb7,	// (0x00037668) list_single_image_pane_g2_ParamLimits

0xcbb7,	// (0x00037668) list_single_image_pane_g2

0x0001,

0xfc48,	// (0x0003a6f9) list_single_image_pane_g_ParamLimits

0xfc48,	// (0x0003a6f9) list_single_image_pane_g

0x94a6,	// (0x00033f57) list_single_image_pane_t1_ParamLimits

0x94a6,	// (0x00033f57) list_single_image_pane_t1

0xcbcb,	// (0x0003767c) cell_image_list_pane_ParamLimits

0xcbcb,	// (0x0003767c) cell_image_list_pane

0xcbde,	// (0x0003768f) cell_image_list_pane_g1

0xcbe7,	// (0x00037698) cell_image_list_pane_g2

0x0001,

0xfc4d,	// (0x0003a6fe) cell_image_list_pane_g

0xcbf0,	// (0x000376a1) aid_size_cell_tb_trans_pane

0x8492,	// (0x00032f43) bg_tb_trans_pane

0xcc02,	// (0x000376b3) grid_tb_trans_pane

0x994f,	// (0x00034400) bg_tb_trans_pane_g1

0x995f,	// (0x00034410) bg_tb_trans_pane_g2

0x9957,	// (0x00034408) bg_tb_trans_pane_g3

0x996f,	// (0x00034420) bg_tb_trans_pane_g4

0x9967,	// (0x00034418) bg_tb_trans_pane_g5

0x998f,	// (0x00034440) bg_tb_trans_pane_g6

0x9987,	// (0x00034438) bg_tb_trans_pane_g7

0x9977,	// (0x00034428) bg_tb_trans_pane_g8

0x997f,	// (0x00034430) bg_tb_trans_pane_g9

0x0008,

0xfc52,	// (0x0003a703) bg_tb_trans_pane_g

0xcc16,	// (0x000376c7) cell_toolbar_trans_pane_ParamLimits

0xcc16,	// (0x000376c7) cell_toolbar_trans_pane

0xc067,	// (0x00036b18) cell_toolbar_trans_pane_g1

0xbc31,	// (0x000366e2) list_form2_midp_pane_t1

0xbc3f,	// (0x000366f0) list_form2_midp_pane_t2

0x0001,

0xfaef,	// (0x0003a5a0) list_form2_midp_pane_t

0xbc4d,	// (0x000366fe) scroll_pane_cp51_ParamLimits

0xbe09,	// (0x000368ba) form2_midp_wait_pane_g1

0xbe12,	// (0x000368c3) form2_midp_wait_pane_g2

0xbe1b,	// (0x000368cc) form2_midp_wait_pane_g3

0x0002,

0xfb04,	// (0x0003a5b5) form2_midp_wait_pane_g

0x75a2,	// (0x00032053) list_highlight_pane_cp21_ParamLimits

0xbe72,	// (0x00036923) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xbe81,	// (0x00036932) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x6604,	// (0x000310b5) list_single_2graphic_im_pane_ParamLimits

0x6604,	// (0x000310b5) list_single_2graphic_im_pane

0xcc3c,	// (0x000376ed) list_single_2graphic_im_pane_g1_ParamLimits

0xcc3c,	// (0x000376ed) list_single_2graphic_im_pane_g1

0xcc4d,	// (0x000376fe) list_single_2graphic_im_pane_g2_ParamLimits

0xcc4d,	// (0x000376fe) list_single_2graphic_im_pane_g2

0xcc59,	// (0x0003770a) list_single_2graphic_im_pane_g3_ParamLimits

0xcc59,	// (0x0003770a) list_single_2graphic_im_pane_g3

0x0003,

0xfc65,	// (0x0003a716) list_single_2graphic_im_pane_g_ParamLimits

0xfc65,	// (0x0003a716) list_single_2graphic_im_pane_g

0xcc79,	// (0x0003772a) list_single_2graphic_im_pane_t1_ParamLimits

0xcc79,	// (0x0003772a) list_single_2graphic_im_pane_t1

0xc6ae,	// (0x0003715f) list_single_graphic_2heading_pane_fp_ParamLimits

0xc6ae,	// (0x0003715f) list_single_graphic_2heading_pane_fp

0x7be3,	// (0x00032694) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x7be3,	// (0x00032694) list_single_graphic_2heading_pane_fp_g1

0xc6c3,	// (0x00037174) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc6c3,	// (0x00037174) list_single_graphic_2heading_pane_fp_g2

0x7bac,	// (0x0003265d) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x7bac,	// (0x0003265d) list_single_graphic_2heading_pane_fp_g3

0x7bb8,	// (0x00032669) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x7bb8,	// (0x00032669) list_single_graphic_2heading_pane_fp_g4

0xc6cf,	// (0x00037180) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc6cf,	// (0x00037180) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb8c,	// (0x0003a63d) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb8c,	// (0x0003a63d) list_single_graphic_2heading_pane_fp_g

0x7db0,	// (0x00032861) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x7db0,	// (0x00032861) list_single_graphic_2heading_pane_fp_t1

0x7c1b,	// (0x000326cc) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x7c1b,	// (0x000326cc) list_single_graphic_2heading_pane_fp_t2

0x7dc6,	// (0x00032877) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x7dc6,	// (0x00032877) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc6e,	// (0x0003a71f) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc6e,	// (0x0003a71f) list_single_graphic_2heading_pane_fp_t

0xc0f3,	// (0x00036ba4) fep_hwr_write_pane_g5_ParamLimits

0xc0f3,	// (0x00036ba4) fep_hwr_write_pane_g5

0xc0ff,	// (0x00036bb0) fep_hwr_write_pane_g6_ParamLimits

0xc0ff,	// (0x00036bb0) fep_hwr_write_pane_g6

0xc981,	// (0x00037432) eswt_shell_pane_ParamLimits

0x9a47,	// (0x000344f8) bg_popup_window_pane_cp18_ParamLimits

0xad10,	// (0x000357c1) heading_pane_cp70

0xcaab,	// (0x0003755c) popup_eswt_tasktip_window_t1_ParamLimits

0x94d1,	// (0x00033f82) aid_touch_tab_arrow_left

0x94dd,	// (0x00033f8e) aid_touch_tab_arrow_right

0x74ea,	// (0x00031f9b) title_pane_g3_ParamLimits

0x74ea,	// (0x00031f9b) title_pane_g3

0x8451,	// (0x00032f02) set_value_pane_g1

0x608b,	// (0x00030b3c) popup_toolbar_trans_pane_ParamLimits

0xcbf0,	// (0x000376a1) aid_size_cell_tb_trans_pane_ParamLimits

0x8492,	// (0x00032f43) bg_tb_trans_pane_ParamLimits

0xcc02,	// (0x000376b3) grid_tb_trans_pane_ParamLimits

0x782b,	// (0x000322dc) cont_note_pane_ParamLimits

0x782b,	// (0x000322dc) cont_note_pane

0x8203,	// (0x00032cb4) cont_snote2_single_text_pane_ParamLimits

0x8203,	// (0x00032cb4) cont_snote2_single_text_pane

0x8203,	// (0x00032cb4) cont_snote2_single_graphic_pane_ParamLimits

0x8203,	// (0x00032cb4) cont_snote2_single_graphic_pane

0xa058,	// (0x00034b09) cont_note_wait_pane_ParamLimits

0xa058,	// (0x00034b09) cont_note_wait_pane

0xa058,	// (0x00034b09) cont_note_image_pane_ParamLimits

0xa058,	// (0x00034b09) cont_note_image_pane

0xccaa,	// (0x0003775b) popup_note2_window_g1_ParamLimits

0xccaa,	// (0x0003775b) popup_note2_window_g1

0xccdb,	// (0x0003778c) popup_note2_window_t1_ParamLimits

0xccdb,	// (0x0003778c) popup_note2_window_t1

0xcd20,	// (0x000377d1) popup_note2_window_t2_ParamLimits

0xcd20,	// (0x000377d1) popup_note2_window_t2

0xcd65,	// (0x00037816) popup_note2_window_t3_ParamLimits

0xcd65,	// (0x00037816) popup_note2_window_t3

0xcdaa,	// (0x0003785b) popup_note2_window_t4_ParamLimits

0xcdaa,	// (0x0003785b) popup_note2_window_t4

0x7f33,	// (0x000329e4) popup_note2_window_t5_ParamLimits

0x7f33,	// (0x000329e4) popup_note2_window_t5

0x0004,

0xfc7a,	// (0x0003a72b) popup_note2_window_t_ParamLimits

0xfc7a,	// (0x0003a72b) popup_note2_window_t

0xcdd9,	// (0x0003788a) popup_note2_image_window_g1_ParamLimits

0xcdd9,	// (0x0003788a) popup_note2_image_window_g1

0xcde5,	// (0x00037896) popup_note2_image_window_g2_ParamLimits

0xcde5,	// (0x00037896) popup_note2_image_window_g2

0x0001,

0xfc85,	// (0x0003a736) popup_note2_image_window_g_ParamLimits

0xfc85,	// (0x0003a736) popup_note2_image_window_g

0xcdf7,	// (0x000378a8) popup_note2_image_window_t1_ParamLimits

0xcdf7,	// (0x000378a8) popup_note2_image_window_t1

0xce0f,	// (0x000378c0) popup_note2_image_window_t2_ParamLimits

0xce0f,	// (0x000378c0) popup_note2_image_window_t2

0xce27,	// (0x000378d8) popup_note2_image_window_t3_ParamLimits

0xce27,	// (0x000378d8) popup_note2_image_window_t3

0x0002,

0xfc8a,	// (0x0003a73b) popup_note2_image_window_t_ParamLimits

0xfc8a,	// (0x0003a73b) popup_note2_image_window_t

0xa066,	// (0x00034b17) popup_note2_wait_window_g1_ParamLimits

0xa066,	// (0x00034b17) popup_note2_wait_window_g1

0xce43,	// (0x000378f4) popup_note2_wait_window_g2_ParamLimits

0xce43,	// (0x000378f4) popup_note2_wait_window_g2

0xa07e,	// (0x00034b2f) popup_note2_wait_window_g3_ParamLimits

0xa07e,	// (0x00034b2f) popup_note2_wait_window_g3

0x0002,

0xfc91,	// (0x0003a742) popup_note2_wait_window_g_ParamLimits

0xfc91,	// (0x0003a742) popup_note2_wait_window_g

0xce4f,	// (0x00037900) popup_note2_wait_window_t1_ParamLimits

0xce4f,	// (0x00037900) popup_note2_wait_window_t1

0xce6d,	// (0x0003791e) popup_note2_wait_window_t2_ParamLimits

0xce6d,	// (0x0003791e) popup_note2_wait_window_t2

0xce8b,	// (0x0003793c) popup_note2_wait_window_t3_ParamLimits

0xce8b,	// (0x0003793c) popup_note2_wait_window_t3

0xce9d,	// (0x0003794e) popup_note2_wait_window_t4_ParamLimits

0xce9d,	// (0x0003794e) popup_note2_wait_window_t4

0x0003,

0xfc98,	// (0x0003a749) popup_note2_wait_window_t_ParamLimits

0xfc98,	// (0x0003a749) popup_note2_wait_window_t

0xceaf,	// (0x00037960) wait_bar2_pane_ParamLimits

0xceaf,	// (0x00037960) wait_bar2_pane

0xcec7,	// (0x00037978) popup_snote2_single_text_window_g1_ParamLimits

0xcec7,	// (0x00037978) popup_snote2_single_text_window_g1

0xceef,	// (0x000379a0) popup_snote2_single_text_window_t1_ParamLimits

0xceef,	// (0x000379a0) popup_snote2_single_text_window_t1

0xcf3b,	// (0x000379ec) popup_snote2_single_text_window_t2_ParamLimits

0xcf3b,	// (0x000379ec) popup_snote2_single_text_window_t2

0xcf87,	// (0x00037a38) popup_snote2_single_text_window_t3_ParamLimits

0xcf87,	// (0x00037a38) popup_snote2_single_text_window_t3

0xcfc8,	// (0x00037a79) popup_snote2_single_text_window_t4_ParamLimits

0xcfc8,	// (0x00037a79) popup_snote2_single_text_window_t4

0xcffe,	// (0x00037aaf) popup_snote2_single_text_window_t5_ParamLimits

0xcffe,	// (0x00037aaf) popup_snote2_single_text_window_t5

0x0004,

0xfca1,	// (0x0003a752) popup_snote2_single_text_window_t_ParamLimits

0xfca1,	// (0x0003a752) popup_snote2_single_text_window_t

0xd029,	// (0x00037ada) popup_snote2_single_graphic_window_g1_ParamLimits

0xd029,	// (0x00037ada) popup_snote2_single_graphic_window_g1

0xd051,	// (0x00037b02) popup_snote2_single_graphic_window_g2_ParamLimits

0xd051,	// (0x00037b02) popup_snote2_single_graphic_window_g2

0x0001,

0xfcac,	// (0x0003a75d) popup_snote2_single_graphic_window_g_ParamLimits

0xfcac,	// (0x0003a75d) popup_snote2_single_graphic_window_g

0xd079,	// (0x00037b2a) popup_snote2_single_graphic_window_t1_ParamLimits

0xd079,	// (0x00037b2a) popup_snote2_single_graphic_window_t1

0xd0c5,	// (0x00037b76) popup_snote2_single_graphic_window_t2_ParamLimits

0xd0c5,	// (0x00037b76) popup_snote2_single_graphic_window_t2

0xcf87,	// (0x00037a38) popup_snote2_single_graphic_window_t3_ParamLimits

0xcf87,	// (0x00037a38) popup_snote2_single_graphic_window_t3

0xcfc8,	// (0x00037a79) popup_snote2_single_graphic_window_t4_ParamLimits

0xcfc8,	// (0x00037a79) popup_snote2_single_graphic_window_t4

0xcffe,	// (0x00037aaf) popup_snote2_single_graphic_window_t5_ParamLimits

0xcffe,	// (0x00037aaf) popup_snote2_single_graphic_window_t5

0x0004,

0xfcb1,	// (0x0003a762) popup_snote2_single_graphic_window_t_ParamLimits

0xfcb1,	// (0x0003a762) popup_snote2_single_graphic_window_t

0xbb10,	// (0x000365c1) clock_nsta_pane_cp2_t1

0xbb10,	// (0x000365c1) clock_nsta_pane_cp2_t2

0x0001,

0xfac5,	// (0x0003a576) clock_nsta_pane_cp2_t

0x539d,	// (0x0002fe4e) form_field_data_wide_pane_g1_ParamLimits

0x84ac,	// (0x00032f5d) form_field_data_wide_pane_g2_ParamLimits

0x84ac,	// (0x00032f5d) form_field_data_wide_pane_g2

0x84b8,	// (0x00032f69) form_field_data_wide_pane_g3_ParamLimits

0x84b8,	// (0x00032f69) form_field_data_wide_pane_g3

0x0002,

0xf681,	// (0x0003a132) form_field_data_wide_pane_g_ParamLimits

0xf681,	// (0x0003a132) form_field_data_wide_pane_g

0xb9e9,	// (0x0003649a) grid_touch_3_pane_ParamLimits

0xb9e9,	// (0x0003649a) grid_touch_3_pane

0xd111,	// (0x00037bc2) cell_touch_3_pane_ParamLimits

0xd111,	// (0x00037bc2) cell_touch_3_pane

0xc067,	// (0x00036b18) cell_touch_3_pane_g1

0xc067,	// (0x00036b18) cell_touch_3_pane_g2

0x0001,

0xfb4a,	// (0x0003a5fb) cell_touch_3_pane_g

0x7f65,	// (0x00032a16) cont_query_data_pane

0x7f6d,	// (0x00032a1e) cont_query_data_pane_cp1

0xd13f,	// (0x00037bf0) button_value_adjust_pane_cp7

0xd147,	// (0x00037bf8) query_popup_pane_cp3

0x8be0,	// (0x00033691) bg_popup_sub_pane_cp22_ParamLimits

0x5763,	// (0x00030214) navi_navi_volume_pane_cp2

0x577e,	// (0x0003022f) popup_side_volume_key_window_g2

0x578d,	// (0x0003023e) popup_side_volume_key_window_g3

0x0002,

0xf717,	// (0x0003a1c8) popup_side_volume_key_window_g

0x57aa,	// (0x0003025b) popup_side_volume_key_window_t2

0x0001,

0xf71e,	// (0x0003a1cf) popup_side_volume_key_window_t

0x8e97,	// (0x00033948) popup_side_volume_key_window_ParamLimits

0x4fd8,	// (0x0002fa89) list_double_graphic_pane_g4_ParamLimits

0x4fd8,	// (0x0002fa89) list_double_graphic_pane_g4

0x78af,	// (0x00032360) list_single_2heading_msg_pane_ParamLimits

0x78af,	// (0x00032360) list_single_2heading_msg_pane

0x7de6,	// (0x00032897) list_single_2heading_msg_pane_g1_ParamLimits

0x7de6,	// (0x00032897) list_single_2heading_msg_pane_g1

0x4e07,	// (0x0002f8b8) list_single_2heading_msg_pane_g2_ParamLimits

0x4e07,	// (0x0002f8b8) list_single_2heading_msg_pane_g2

0x7df2,	// (0x000328a3) list_single_2heading_msg_pane_g3_ParamLimits

0x7df2,	// (0x000328a3) list_single_2heading_msg_pane_g3

0x7dfe,	// (0x000328af) list_single_2heading_msg_pane_g4_ParamLimits

0x7dfe,	// (0x000328af) list_single_2heading_msg_pane_g4

0x0003,

0xfcbc,	// (0x0003a76d) list_single_2heading_msg_pane_g_ParamLimits

0xfcbc,	// (0x0003a76d) list_single_2heading_msg_pane_g

0x7e16,	// (0x000328c7) list_single_2heading_msg_pane_t1_ParamLimits

0x7e16,	// (0x000328c7) list_single_2heading_msg_pane_t1

0x7e3e,	// (0x000328ef) list_single_2heading_msg_pane_t2_ParamLimits

0x7e3e,	// (0x000328ef) list_single_2heading_msg_pane_t2

0x7e72,	// (0x00032923) list_single_2heading_msg_pane_t3_ParamLimits

0x7e72,	// (0x00032923) list_single_2heading_msg_pane_t3

0x7eab,	// (0x0003295c) list_single_2heading_msg_pane_t4_ParamLimits

0x7eab,	// (0x0003295c) list_single_2heading_msg_pane_t4

0x0003,

0xfcc5,	// (0x0003a776) list_single_2heading_msg_pane_t_ParamLimits

0xfcc5,	// (0x0003a776) list_single_2heading_msg_pane_t

0x74f6,	// (0x00031fa7) title_pane_g4_ParamLimits

0x74f6,	// (0x00031fa7) title_pane_g4

0x5571,	// (0x00030022) title_pane_stacon_g3_ParamLimits

0x5571,	// (0x00030022) title_pane_stacon_g3

0xcc6d,	// (0x0003771e) list_single_2graphic_im_pane_g4_ParamLimits

0xcc6d,	// (0x0003771e) list_single_2graphic_im_pane_g4

0xaab7,	// (0x00035568) popup_side_volume_key_window_cp

0xb2be,	// (0x00035d6f) main_idle_act2_pane_t1

0x61b7,	// (0x00030c68) toolbar_button_pane_g10

0x83fb,	// (0x00032eac) popup_toolbar_window_cp1

0xbb01,	// (0x000365b2) clock_nsta_pane_cp_t1

0xbb01,	// (0x000365b2) clock_nsta_pane_cp_t2

0x0001,

0xfac0,	// (0x0003a571) clock_nsta_pane_cp_t

0x5763,	// (0x00030214) navi_navi_volume_pane_cp2_ParamLimits

0x5772,	// (0x00030223) popup_side_volume_key_window_g1_ParamLimits

0x577e,	// (0x0003022f) popup_side_volume_key_window_g2_ParamLimits

0x578d,	// (0x0003023e) popup_side_volume_key_window_g3_ParamLimits

0xf717,	// (0x0003a1c8) popup_side_volume_key_window_g_ParamLimits

0x676b,	// (0x0003121c) fep_hwr_aid_pane

0x6812,	// (0x000312c3) bg_fep_hwr_top_pane_g4_ParamLimits

0xc0c3,	// (0x00036b74) fep_hwr_top_pane_g1_ParamLimits

0xc0d5,	// (0x00036b86) fep_hwr_top_pane_g2_ParamLimits

0x6832,	// (0x000312e3) fep_hwr_top_pane_g3_ParamLimits

0xfb15,	// (0x0003a5c6) fep_hwr_top_pane_g_ParamLimits

0x6847,	// (0x000312f8) fep_hwr_top_text_pane_ParamLimits

0xa87a,	// (0x0003532b) aid_touch_tab_arrow_arrow_2

0xa883,	// (0x00035334) aid_touch_tab_arrow_left_2

0x677f,	// (0x00031230) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x67b6,	// (0x00031267) fep_hwr_prediction_pane

0xc235,	// (0x00036ce6) fep_vkb_prediction_pane

0xc339,	// (0x00036dea) fep_vkb_side_pane_g3_ParamLimits

0xc339,	// (0x00036dea) fep_vkb_side_pane_g3

0x69c2,	// (0x00031473) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x6a2e,	// (0x000314df) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x6a3b,	// (0x000314ec) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbc4,	// (0x0003a675) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x6b6a,	// (0x0003161b) fep_hwr_prediction_pane_g1

0x6b74,	// (0x00031625) fep_hwr_prediction_pane_g2

0x6b7c,	// (0x0003162d) fep_hwr_prediction_pane_g3

0x6b84,	// (0x00031635) fep_hwr_prediction_pane_g4

0x0003,

0xfcce,	// (0x0003a77f) fep_hwr_prediction_pane_g

0xd16c,	// (0x00037c1d) fep_vkb_prediction_pane_g1

0xd176,	// (0x00037c27) fep_vkb_prediction_pane_g2

0xd17e,	// (0x00037c2f) fep_vkb_prediction_pane_g3

0xd186,	// (0x00037c37) fep_vkb_prediction_pane_g4

0x0003,

0xfcd7,	// (0x0003a788) fep_vkb_prediction_pane_g

0x654c,	// (0x00030ffd) slider_set_pane_g3

0x6560,	// (0x00031011) slider_set_pane_g4

0x6578,	// (0x00031029) slider_set_pane_g5

0x654c,	// (0x00030ffd) slider_set_pane_g6

0x658e,	// (0x0003103f) slider_set_pane_g7

0xaf2d,	// (0x000359de) slider_form_pane_g3

0xaf36,	// (0x000359e7) slider_form_pane_g4

0xaf3e,	// (0x000359ef) slider_form_pane_g5

0xaf2d,	// (0x000359de) slider_form_pane_g6

0xaf46,	// (0x000359f7) slider_form_pane_g7

0xb5a9,	// (0x0003605a) slider_set_pane_vc_g3

0xb5b2,	// (0x00036063) slider_set_pane_vc_g4

0xb5bb,	// (0x0003606c) slider_set_pane_vc_g5

0xb5a9,	// (0x0003605a) slider_set_pane_vc_g6

0xb5c4,	// (0x00036075) slider_set_pane_vc_g7

0xb7bc,	// (0x0003626d) slider_form_pane_vc_g1

0xb7c5,	// (0x00036276) slider_form_pane_vc_g2

0xb7ce,	// (0x0003627f) slider_form_pane_vc_g3

0xb7bc,	// (0x0003626d) slider_form_pane_vc_g4

0xb7d7,	// (0x00036288) slider_form_pane_vc_g5

0x0004,

0xfa92,	// (0x0003a543) slider_form_pane_vc_g

0x4b00,	// (0x0002f5b1) main_idle_act3_pane

0xd18e,	// (0x00037c3f) ai3_links_pane

0xd197,	// (0x00037c48) popup_ai3_data_window_ParamLimits

0xd197,	// (0x00037c48) popup_ai3_data_window

0x74ae,	// (0x00031f5f) grid_ai3_links_pane

0xd1b1,	// (0x00037c62) cell_ai3_links_pane_ParamLimits

0xd1b1,	// (0x00037c62) cell_ai3_links_pane

0xd1c9,	// (0x00037c7a) bg_popup_sub_pane_cp11

0xd1d6,	// (0x00037c87) cell_ai3_links_pane_g1

0x74ae,	// (0x00031f5f) bg_popup_sub_pane_cp12

0xd1fb,	// (0x00037cac) heading_ai3_data_pane

0xd203,	// (0x00037cb4) list_ai3_gene_pane

0xd20f,	// (0x00037cc0) popup_ai3_data_window_g1

0xd217,	// (0x00037cc8) heading_ai3_data_pane_g1

0xd21f,	// (0x00037cd0) heading_ai3_data_pane_t1

0xd22d,	// (0x00037cde) list_double_ai3_gene_pane_ParamLimits

0xd22d,	// (0x00037cde) list_double_ai3_gene_pane

0xd23a,	// (0x00037ceb) list_single_ai3_gene_pane_ParamLimits

0xd23a,	// (0x00037ceb) list_single_ai3_gene_pane

0xc02c,	// (0x00036add) list_highlight_pane_cp7_ParamLimits

0xc02c,	// (0x00036add) list_highlight_pane_cp7

0xd247,	// (0x00037cf8) list_single_a13_gene_pane_t1_ParamLimits

0xd247,	// (0x00037cf8) list_single_a13_gene_pane_t1

0xd25e,	// (0x00037d0f) list_single_ai3_gene_pane_g1

0xd267,	// (0x00037d18) list_single_ai3_gene_pane_g2

0x0001,

0xfce0,	// (0x0003a791) list_single_ai3_gene_pane_g

0xd26f,	// (0x00037d20) list_double_ai3_gene_pane_g1_ParamLimits

0xd26f,	// (0x00037d20) list_double_ai3_gene_pane_g1

0xd27b,	// (0x00037d2c) list_double_ai3_gene_pane_t1_ParamLimits

0xd27b,	// (0x00037d2c) list_double_ai3_gene_pane_t1

0xd297,	// (0x00037d48) list_double_ai3_gene_pane_t2_ParamLimits

0xd297,	// (0x00037d48) list_double_ai3_gene_pane_t2

0xd2ad,	// (0x00037d5e) list_double_ai3_gene_pane_t3_ParamLimits

0xd2ad,	// (0x00037d5e) list_double_ai3_gene_pane_t3

0x0002,

0xfce5,	// (0x0003a796) list_double_ai3_gene_pane_t_ParamLimits

0xfce5,	// (0x0003a796) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x7ddc,	// (0x0003288d) aid_size_min_col_2

0xd158,	// (0x00037c09) aid_size_min_msg_ParamLimits

0xd158,	// (0x00037c09) aid_size_min_msg

0xc439,	// (0x00036eea) fep_vkb_top_text_pane_g2_ParamLimits

0xc439,	// (0x00036eea) fep_vkb_top_text_pane_g2

0x0001,

0xfb45,	// (0x0003a5f6) fep_vkb_top_text_pane_g_ParamLimits

0xfb45,	// (0x0003a5f6) fep_vkb_top_text_pane_g

0x4b00,	// (0x0002f5b1) main_hc_apps_shell_pane

0xd2ca,	// (0x00037d7b) grid_hc_apps_pane_ParamLimits

0xd2ca,	// (0x00037d7b) grid_hc_apps_pane

0xd2d9,	// (0x00037d8a) list_hc_apps_pane

0xd2e1,	// (0x00037d92) scroll_pane_cp37_ParamLimits

0xd2e1,	// (0x00037d92) scroll_pane_cp37

0xd2ed,	// (0x00037d9e) cell_hc_apps_pane_ParamLimits

0xd2ed,	// (0x00037d9e) cell_hc_apps_pane

0xd39b,	// (0x00037e4c) cell_hc_apps_pane_g1_ParamLimits

0xd39b,	// (0x00037e4c) cell_hc_apps_pane_g1

0xd3cc,	// (0x00037e7d) cell_hc_apps_pane_g2_ParamLimits

0xd3cc,	// (0x00037e7d) cell_hc_apps_pane_g2

0xd3e8,	// (0x00037e99) cell_hc_apps_pane_g3_ParamLimits

0xd3e8,	// (0x00037e99) cell_hc_apps_pane_g3

0x0002,

0xfcec,	// (0x0003a79d) cell_hc_apps_pane_g_ParamLimits

0xfcec,	// (0x0003a79d) cell_hc_apps_pane_g

0xd40a,	// (0x00037ebb) cell_hc_apps_pane_t1_ParamLimits

0xd40a,	// (0x00037ebb) cell_hc_apps_pane_t1

0x782b,	// (0x000322dc) grid_highlight_pane_cp10_ParamLimits

0x782b,	// (0x000322dc) grid_highlight_pane_cp10

0xd44a,	// (0x00037efb) list_single_hc_apps_pane_ParamLimits

0xd44a,	// (0x00037efb) list_single_hc_apps_pane

0xd4a6,	// (0x00037f57) list_single_hc_apps_pane_g1

0x7ed0,	// (0x00032981) list_single_hc_apps_pane_g2

0x0001,

0xfcf3,	// (0x0003a7a4) list_single_hc_apps_pane_g

0x7ee9,	// (0x0003299a) list_single_hc_apps_pane_g2_copy1

0x7f05,	// (0x000329b6) list_single_hc_apps_pane_t1

0x75a2,	// (0x00032053) bg_set_opt_pane_cp_ParamLimits

0x4d57,	// (0x0002f808) setting_slider_pane_t1_ParamLimits

0x4d70,	// (0x0002f821) setting_slider_pane_t2_ParamLimits

0x4d8a,	// (0x0002f83b) setting_slider_pane_t3_ParamLimits

0xf564,	// (0x0003a015) setting_slider_pane_t_ParamLimits

0x4da2,	// (0x0002f853) slider_set_pane_ParamLimits

0x5a92,	// (0x00030543) control_pane_g5_ParamLimits

0x5a92,	// (0x00030543) control_pane_g5

0xad7c,	// (0x0003582d) slider_set_pane_g1_ParamLimits

0x6540,	// (0x00030ff1) slider_set_pane_g2_ParamLimits

0x654c,	// (0x00030ffd) slider_set_pane_g3_ParamLimits

0x6560,	// (0x00031011) slider_set_pane_g4_ParamLimits

0x6578,	// (0x00031029) slider_set_pane_g5_ParamLimits

0x654c,	// (0x00030ffd) slider_set_pane_g6_ParamLimits

0x658e,	// (0x0003103f) slider_set_pane_g7_ParamLimits

0xf96a,	// (0x0003a41b) slider_set_pane_g_ParamLimits

0x8f78,	// (0x00033a29) navi_icon_text_pane_ParamLimits

0x9470,	// (0x00033f21) aid_fill_nsta_2_ParamLimits

0x94d1,	// (0x00033f82) aid_touch_tab_arrow_left_ParamLimits

0x94dd,	// (0x00033f8e) aid_touch_tab_arrow_right_ParamLimits

0x9549,	// (0x00033ffa) clock_nsta_pane_ParamLimits

0xa85c,	// (0x0003530d) navi_icon_pane_g1_ParamLimits

0xa868,	// (0x00035319) navi_text_pane_t1_ParamLimits

0xbc0b,	// (0x000366bc) navi_icon_text_pane_g1_ParamLimits

0xbc17,	// (0x000366c8) navi_icon_text_pane_t1_ParamLimits

0xd4a6,	// (0x00037f57) list_single_hc_apps_pane_g1_ParamLimits

0x7ed0,	// (0x00032981) list_single_hc_apps_pane_g2_ParamLimits

0xfcf3,	// (0x0003a7a4) list_single_hc_apps_pane_g_ParamLimits

0x7ee9,	// (0x0003299a) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x7f05,	// (0x000329b6) list_single_hc_apps_pane_t1_ParamLimits

0x4c6b,	// (0x0002f71c) popup_toolbar2_fixed_window_ParamLimits

0x4c6b,	// (0x0002f71c) popup_toolbar2_fixed_window

0x6081,	// (0x00030b32) popup_toolbar2_float_window

0x74ae,	// (0x00031f5f) bg_popup_sub_pane_cp27

0xd4bf,	// (0x00037f70) grid_toolbar2_float_pane

0x74ae,	// (0x00031f5f) bg_popup_sub_pane_cp26

0xd4bf,	// (0x00037f70) grid_toolbar2_fixed_pane

0xd4c7,	// (0x00037f78) cell_toolbar2_fixed_pane_ParamLimits

0xd4c7,	// (0x00037f78) cell_toolbar2_fixed_pane

0xd4d7,	// (0x00037f88) cell_toolbar2_fixed_pane_g1

0xd4e0,	// (0x00037f91) toolbar2_fixed_button_pane

0x994f,	// (0x00034400) toolbar2_fixed_button_pane_g1

0x995f,	// (0x00034410) toolbar2_fixed_button_pane_g2

0x9957,	// (0x00034408) toolbar2_fixed_button_pane_g3

0x996f,	// (0x00034420) toolbar2_fixed_button_pane_g4

0x9967,	// (0x00034418) toolbar2_fixed_button_pane_g5

0x9977,	// (0x00034428) toolbar2_fixed_button_pane_g6

0x997f,	// (0x00034430) toolbar2_fixed_button_pane_g7

0x998f,	// (0x00034440) toolbar2_fixed_button_pane_g8

0x9987,	// (0x00034438) toolbar2_fixed_button_pane_g9

0x0008,

0xf86c,	// (0x0003a31d) toolbar2_fixed_button_pane_g

0xd4e8,	// (0x00037f99) cell_toolbar2_float_pane_ParamLimits

0xd4e8,	// (0x00037f99) cell_toolbar2_float_pane

0xd4f9,	// (0x00037faa) cell_toolbar2_float_pane_g1

0xd4e0,	// (0x00037f91) toolbar2_fixed_button_pane_cp

0xc195,	// (0x00036c46) fep_vkb_accented_list_pane_ParamLimits

0xc195,	// (0x00036c46) fep_vkb_accented_list_pane

0x69a2,	// (0x00031453) bg_popup_fep_shadow_pane_g9

0x90f8,	// (0x00033ba9) bg_popup_fep_shadow_pane_cp3

0x85f5,	// (0x000330a6) list_accented_list_pane

0xd502,	// (0x00037fb3) list_single_accented_list_pane_ParamLimits

0xd502,	// (0x00037fb3) list_single_accented_list_pane

0x90f8,	// (0x00033ba9) list_highlight_pane_cp10

0xd513,	// (0x00037fc4) list_single_accented_list_pane_t1

0x5fd1,	// (0x00030a82) popup_slider_window_ParamLimits

0x5fd1,	// (0x00030a82) popup_slider_window

0xd14f,	// (0x00037c00) aid_indentation_list_msg

0xd5cd,	// (0x0003807e) bg_popup_window_pane_cp19

0xd637,	// (0x000380e8) popup_slider_window_g1

0xd653,	// (0x00038104) popup_slider_window_g2

0xd66f,	// (0x00038120) popup_slider_window_g3

0x0005,

0xfcf8,	// (0x0003a7a9) popup_slider_window_g

0xd6cb,	// (0x0003817c) popup_slider_window_t1

0xd73f,	// (0x000381f0) small_volume_slider_vertical_pane

0xc067,	// (0x00036b18) small_volume_slider_vertical_pane_g1

0xc067,	// (0x00036b18) small_volume_slider_vertical_pane_g2

0xd75b,	// (0x0003820c) small_volume_slider_vertical_pane_g3

0x0002,

0xfd0a,	// (0x0003a7bb) small_volume_slider_vertical_pane_g

0x4a23,	// (0x0002f4d4) area_side_right_pane_ParamLimits

0x4a23,	// (0x0002f4d4) area_side_right_pane

0x6b8c,	// (0x0003163d) aid_size_side_button_ParamLimits

0x6b8c,	// (0x0003163d) aid_size_side_button

0x6ba0,	// (0x00031651) grid_sctrl_middle_pane_ParamLimits

0x6ba0,	// (0x00031651) grid_sctrl_middle_pane

0x6bc0,	// (0x00031671) sctrl_sk_bottom_pane

0x6bd1,	// (0x00031682) sctrl_sk_top_pane

0x6be3,	// (0x00031694) aid_touch_sctrl_top

0x6bf0,	// (0x000316a1) bg_sctrl_sk_pane_ParamLimits

0x6bf0,	// (0x000316a1) bg_sctrl_sk_pane

0x6bfe,	// (0x000316af) sctrl_sk_top_pane_g1

0x6c0b,	// (0x000316bc) sctrl_sk_top_pane_t1

0x6be3,	// (0x00031694) aid_touch_sctrl_bottom

0x6bf0,	// (0x000316a1) bg_sctrl_sk_pane_cp_ParamLimits

0x6bf0,	// (0x000316a1) bg_sctrl_sk_pane_cp

0x6c26,	// (0x000316d7) sctrl_sk_bottom_pane_g1

0x6c0b,	// (0x000316bc) sctrl_sk_bottom_pane_t1

0x6c2f,	// (0x000316e0) cell_sctrl_middle_pane_ParamLimits

0x6c2f,	// (0x000316e0) cell_sctrl_middle_pane

0x6c4a,	// (0x000316fb) aid_touch_sctrl_middle_ParamLimits

0x6c4a,	// (0x000316fb) aid_touch_sctrl_middle

0x6c5c,	// (0x0003170d) bg_sctrl_middle_pane_ParamLimits

0x6c5c,	// (0x0003170d) bg_sctrl_middle_pane

0x69c2,	// (0x00031473) cell_sctrl_middle_pane_g1_ParamLimits

0x69c2,	// (0x00031473) cell_sctrl_middle_pane_g1

0x6c6a,	// (0x0003171b) cell_sctrl_middle_pane_g2_ParamLimits

0x6c6a,	// (0x0003171b) cell_sctrl_middle_pane_g2

0x0001,

0xfd16,	// (0x0003a7c7) cell_sctrl_middle_pane_g_ParamLimits

0xfd16,	// (0x0003a7c7) cell_sctrl_middle_pane_g

0x994f,	// (0x00034400) bg_sctrl_middle_pane_g1

0x9957,	// (0x00034408) bg_sctrl_middle_pane_g2

0x995f,	// (0x00034410) bg_sctrl_middle_pane_g3

0x9967,	// (0x00034418) bg_sctrl_middle_pane_g4

0x996f,	// (0x00034420) bg_sctrl_middle_pane_g5

0x9977,	// (0x00034428) bg_sctrl_middle_pane_g6

0x997f,	// (0x00034430) bg_sctrl_middle_pane_g7

0x9987,	// (0x00034438) bg_sctrl_middle_pane_g8

0x0007,

0xfd1b,	// (0x0003a7cc) bg_sctrl_middle_pane_g

0x998f,	// (0x00034440) bg_sctrl_middle_pane_g8_copy1

0x994f,	// (0x00034400) bg_sctrl_sk_pane_g1

0x995f,	// (0x00034410) bg_sctrl_sk_pane_g2

0x9957,	// (0x00034408) bg_sctrl_sk_pane_g3

0x0008,

0xf86c,	// (0x0003a31d) bg_sctrl_sk_pane_g

0x83c1,	// (0x00032e72) aid_size_touch_scroll_bar

0x996f,	// (0x00034420) bg_sctrl_sk_pane_g4

0x9967,	// (0x00034418) bg_sctrl_sk_pane_g5

0x9977,	// (0x00034428) bg_sctrl_sk_pane_g6

0x997f,	// (0x00034430) bg_sctrl_sk_pane_g7

0x998f,	// (0x00034440) bg_sctrl_sk_pane_g8

0x9987,	// (0x00034438) bg_sctrl_sk_pane_g9

0x5c3c,	// (0x000306ed) popup_fep_china_hwr2_fs_candidate_window

0x5c46,	// (0x000306f7) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x5c46,	// (0x000306f7) popup_fep_china_hwr2_fs_control_window

0x69c2,	// (0x00031473) sctrl_sk_top_pane_g2

0x0001,

0xfd11,	// (0x0003a7c2) sctrl_sk_top_pane_g

0xd764,	// (0x00038215) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd764,	// (0x00038215) aid_fep_china_hwr2_fs_cell

0xd776,	// (0x00038227) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd776,	// (0x00038227) bg_popup_fep_shadow_pane_cp4

0xd78d,	// (0x0003823e) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd78d,	// (0x0003823e) bg_popup_fep_shadow_pane_cp5

0xd79f,	// (0x00038250) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd79f,	// (0x00038250) popup_fep_china_hwr2_fs_control_bar_grid

0xd7af,	// (0x00038260) popup_fep_china_hwr2_fs_control_funtion_grid

0xd7b7,	// (0x00038268) aid_fep_china_hwr2_fs_candi_cell

0x74ae,	// (0x00031f5f) bg_popup_fep_shadow_pane_cp6

0xd7c1,	// (0x00038272) popup_fep_china_hwr2_fs_candidate_grid

0xd7cb,	// (0x0003827c) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd7cb,	// (0x0003827c) cell_fep_china_hwr2_fs_funtion_grid

0xc067,	// (0x00036b18) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd7e3,	// (0x00038294) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd7e3,	// (0x00038294) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd7f1,	// (0x000382a2) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd7f1,	// (0x000382a2) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd2c,	// (0x0003a7dd) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd2c,	// (0x0003a7dd) cell_fep_china_hwr2_fs_funtion_grid_g

0xd807,	// (0x000382b8) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd807,	// (0x000382b8) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd81c,	// (0x000382cd) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd81c,	// (0x000382cd) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd31,	// (0x0003a7e2) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd31,	// (0x0003a7e2) cell_fep_china_hwr2_fs_funtion_grid_t

0xd838,	// (0x000382e9) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd840,	// (0x000382f1) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd848,	// (0x000382f9) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd36,	// (0x0003a7e7) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd850,	// (0x00038301) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd850,	// (0x00038301) cell_fep_china_hwr2_fs_candidate_grid

0xd869,	// (0x0003831a) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd871,	// (0x00038322) popup_fep_china_hwr2_fs_candidate_grid_g21

0xc067,	// (0x00036b18) cell_fep_china_hwr2_fs_candidate_grid_g1

0xc067,	// (0x00036b18) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb4a,	// (0x0003a5fb) cell_fep_china_hwr2_fs_candidate_grid_g

0xd879,	// (0x0003832a) cell_fep_china_hwr2_fs_candidate_grid_t1

0x9556,	// (0x00034007) clock_nsta_pane_cp_24_ParamLimits

0x9556,	// (0x00034007) clock_nsta_pane_cp_24

0x95d4,	// (0x00034085) indicator_nsta_pane_cp_24_ParamLimits

0x95d4,	// (0x00034085) indicator_nsta_pane_cp_24

0xa6d8,	// (0x00035189) heading_pane_g1

0x0001,

0xf8d1,	// (0x0003a382) heading_pane_g

0xb107,	// (0x00035bb8) grid_sct_catagory_button_pane

0xb137,	// (0x00035be8) scroll_pane_cp5_ParamLimits

0xbc59,	// (0x0003670a) button_value_adjust_pane_cp5_ParamLimits

0xbc59,	// (0x0003670a) button_value_adjust_pane_cp5

0xbd38,	// (0x000367e9) form2_midp_time_pane_ParamLimits

0xd887,	// (0x00038338) cell_sct_catagory_button_pane_ParamLimits

0xd887,	// (0x00038338) cell_sct_catagory_button_pane

0xc02c,	// (0x00036add) bg_button_pane_cp01_ParamLimits

0xc02c,	// (0x00036add) bg_button_pane_cp01

0xc067,	// (0x00036b18) cell_sct_catagory_button_pane_g1

0x6010,	// (0x00030ac1) popup_tb_extension_window

0xd899,	// (0x0003834a) aid_size_cell_ext_ParamLimits

0xd899,	// (0x0003834a) aid_size_cell_ext

0x782b,	// (0x000322dc) bg_tb_trans_pane_cp1_ParamLimits

0x782b,	// (0x000322dc) bg_tb_trans_pane_cp1

0xd8b9,	// (0x0003836a) grid_tb_ext_pane_ParamLimits

0xd8b9,	// (0x0003836a) grid_tb_ext_pane

0xd8e9,	// (0x0003839a) cell_tb_ext_pane_ParamLimits

0xd8e9,	// (0x0003839a) cell_tb_ext_pane

0xd900,	// (0x000383b1) cell_tb_ext_pane_g1_ParamLimits

0xd900,	// (0x000383b1) cell_tb_ext_pane_g1

0xd91d,	// (0x000383ce) cell_tb_ext_pane_t1

0x782b,	// (0x000322dc) list_highlight_pane_cp11_ParamLimits

0x782b,	// (0x000322dc) list_highlight_pane_cp11

0x4c8a,	// (0x0002f73b) popup_uni_indicator_window_ParamLimits

0x4c8a,	// (0x0002f73b) popup_uni_indicator_window

0x8492,	// (0x00032f43) bg_popup_sub_pane_cp14

0xd938,	// (0x000383e9) list_uniindi_pane

0xd944,	// (0x000383f5) uniindi_top_pane

0x782b,	// (0x000322dc) bg_uniindi_top_pane

0xd963,	// (0x00038414) uniindi_top_pane_g1

0xd979,	// (0x0003842a) uniindi_top_pane_g2

0x0003,

0xfd3d,	// (0x0003a7ee) uniindi_top_pane_g

0xd9a3,	// (0x00038454) uniindi_top_pane_t1

0xd9cd,	// (0x0003847e) list_single_uniindi_pane_ParamLimits

0xd9cd,	// (0x0003847e) list_single_uniindi_pane

0xc067,	// (0x00036b18) bg_uniindi_top_pane_g1

0xd9e0,	// (0x00038491) list_single_uniindi_pane_g1

0xd9f3,	// (0x000384a4) list_single_uniindi_pane_t1

0x4b00,	// (0x0002f5b1) control_bg_pane

0xda18,	// (0x000384c9) bg_sctrl_sk_pane_cp1

0xda21,	// (0x000384d2) bg_sctrl_sk_pane_cp2

0xda2a,	// (0x000384db) control_bg_pane_g1

0xda33,	// (0x000384e4) control_bg_pane_g2

0x0001,

0xfd46,	// (0x0003a7f7) control_bg_pane_g

0xba93,	// (0x00036544) cell_indicator_nsta_pane_g1_ParamLimits

0xbaa1,	// (0x00036552) cell_indicator_nsta_pane_g2_ParamLimits

0xfaae,	// (0x0003a55f) cell_indicator_nsta_pane_g_ParamLimits

0x7b99,	// (0x0003264a) form2_midp_time_pane_t1_ParamLimits

0x5b9c,	// (0x0003064d) main_idle_act4_pane_ParamLimits

0x5b9c,	// (0x0003064d) main_idle_act4_pane

0x6010,	// (0x00030ac1) popup_tb_extension_window_ParamLimits

0xd8d9,	// (0x0003838a) tb_ext_find_pane_ParamLimits

0xd8d9,	// (0x0003838a) tb_ext_find_pane

0xda3c,	// (0x000384ed) ai_gene_pane_1_cp1

0x9231,	// (0x00033ce2) ai_gene_pane_2_cp1

0xda44,	// (0x000384f5) list_single_idle_plugin_calendar_pane

0xda4d,	// (0x000384fe) list_single_idle_plugin_notification_pane

0xda56,	// (0x00038507) list_single_idle_plugin_player_pane

0xda5f,	// (0x00038510) list_single_idle_plugin_shortcut_pane_ParamLimits

0xda5f,	// (0x00038510) list_single_idle_plugin_shortcut_pane

0xda81,	// (0x00038532) main_idle_act4_pane_t1

0xda93,	// (0x00038544) main_idle_act4_pane_t2

0x0001,

0xfd4b,	// (0x0003a7fc) main_idle_act4_pane_t

0xdaa5,	// (0x00038556) middle_sk_idle_act4_pane_ParamLimits

0xdaa5,	// (0x00038556) middle_sk_idle_act4_pane

0xdabb,	// (0x0003856c) popup_clock_digital_analogue_window_cp2

0xdad5,	// (0x00038586) shortcut_wheel_idle_act4_pane_ParamLimits

0xdad5,	// (0x00038586) shortcut_wheel_idle_act4_pane

0xc067,	// (0x00036b18) shortcut_wheel_idle_act4_pane_g1

0xc067,	// (0x00036b18) shortcut_wheel_idle_act4_pane_g2

0xc067,	// (0x00036b18) shortcut_wheel_idle_act4_pane_g3

0xc067,	// (0x00036b18) shortcut_wheel_idle_act4_pane_g4

0xc067,	// (0x00036b18) shortcut_wheel_idle_act4_pane_g5

0xdae9,	// (0x0003859a) shortcut_wheel_idle_act4_pane_g6

0xdaf1,	// (0x000385a2) shortcut_wheel_idle_act4_pane_g7

0xdaf9,	// (0x000385aa) shortcut_wheel_idle_act4_pane_g8

0xdb01,	// (0x000385b2) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd50,	// (0x0003a801) shortcut_wheel_idle_act4_pane_g

0xc2e5,	// (0x00036d96) middle_sk_idle_act4_pane_g1_ParamLimits

0xc2e5,	// (0x00036d96) middle_sk_idle_act4_pane_g1

0xdb65,	// (0x00038616) middle_sk_idle_act4_pane_g2_ParamLimits

0xdb65,	// (0x00038616) middle_sk_idle_act4_pane_g2

0x0001,

0xfd73,	// (0x0003a824) middle_sk_idle_act4_pane_g_ParamLimits

0xfd73,	// (0x0003a824) middle_sk_idle_act4_pane_g

0xdb71,	// (0x00038622) middle_sk_idle_act4_pane_t1_ParamLimits

0xdb71,	// (0x00038622) middle_sk_idle_act4_pane_t1

0xdb8e,	// (0x0003863f) grid_ai_shortcut_pane_ParamLimits

0xdb8e,	// (0x0003863f) grid_ai_shortcut_pane

0xdba7,	// (0x00038658) list_highlight_pane_cp16_ParamLimits

0xdba7,	// (0x00038658) list_highlight_pane_cp16

0xdbb4,	// (0x00038665) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdbb4,	// (0x00038665) list_single_idle_plugin_shortcut_pane_g1

0xdbc0,	// (0x00038671) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdbc0,	// (0x00038671) list_single_idle_plugin_shortcut_pane_g2

0xdbd8,	// (0x00038689) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdbd8,	// (0x00038689) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd78,	// (0x0003a829) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd78,	// (0x0003a829) list_single_idle_plugin_shortcut_pane_g

0xdbeb,	// (0x0003869c) cell_ai_shortcut_pane_ParamLimits

0xdbeb,	// (0x0003869c) cell_ai_shortcut_pane

0xdc0f,	// (0x000386c0) cell_ai_shortcut_pane_g1_ParamLimits

0xdc0f,	// (0x000386c0) cell_ai_shortcut_pane_g1

0xda3c,	// (0x000384ed) ai_gene_pane_1_cp2

0xdc31,	// (0x000386e2) ai_gene_pane_2_cp2

0xdc39,	// (0x000386ea) list_highlight_pane_cp15

0xdc42,	// (0x000386f3) list_single_idle_plugin_calendar_pane_g1

0xdc39,	// (0x000386ea) list_highlight_pane_cp17

0xdc4a,	// (0x000386fb) list_single_idle_plugin_calendar_pane_g1_copy1

0xdc52,	// (0x00038703) list_single_idle_plugin_player_pane_g1

0xb360,	// (0x00035e11) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd7f,	// (0x0003a830) list_single_idle_plugin_player_pane_g

0xdc5a,	// (0x0003870b) list_single_idle_plugin_player_pane_t1

0xdc68,	// (0x00038719) list_single_idle_plugin_player_pane_t2

0xdc76,	// (0x00038727) list_single_idle_plugin_player_pane_t3

0xdc84,	// (0x00038735) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd84,	// (0x0003a835) list_single_idle_plugin_player_pane_t

0xdc92,	// (0x00038743) wait_bar_pane_cp15

0xdc9a,	// (0x0003874b) grid_ai_notification_pane

0xb360,	// (0x00035e11) list_single_idle_plugin_notification_pane_g1

0xdca3,	// (0x00038754) cell_ai_notification_pane_ParamLimits

0xdca3,	// (0x00038754) cell_ai_notification_pane

0xdcb0,	// (0x00038761) cell_ai_notification_pane_g1

0xdcb8,	// (0x00038769) cell_ai_notification_pane_t1

0xdcc6,	// (0x00038777) tb_ext_find_button_pane

0xdcce,	// (0x0003877f) tb_ext_find_pane_g1

0xdcd6,	// (0x00038787) tb_ext_find_pane_t1

0x8af6,	// (0x000335a7) tb_ext_find_button_pane_g1

0xdce4,	// (0x00038795) tb_ext_find_button_pane_g2

0x0001,

0xfd8d,	// (0x0003a83e) tb_ext_find_button_pane_g

0xda81,	// (0x00038532) main_idle_act4_pane_t1_ParamLimits

0xda93,	// (0x00038544) main_idle_act4_pane_t2_ParamLimits

0xfd4b,	// (0x0003a7fc) main_idle_act4_pane_t_ParamLimits

0xdabb,	// (0x0003856c) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdac9,	// (0x0003857a) sat_plugin_idle_act4_pane_ParamLimits

0xdac9,	// (0x0003857a) sat_plugin_idle_act4_pane

0xdced,	// (0x0003879e) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdced,	// (0x0003879e) sat_plugin_idle_act4_pane_t1

0xdd00,	// (0x000387b1) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdd00,	// (0x000387b1) sat_plugin_idle_act4_pane_t2

0xdd13,	// (0x000387c4) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdd13,	// (0x000387c4) sat_plugin_idle_act4_pane_t3

0xdd26,	// (0x000387d7) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdd26,	// (0x000387d7) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd92,	// (0x0003a843) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd92,	// (0x0003a843) sat_plugin_idle_act4_pane_t

0x4bc5,	// (0x0002f676) popup_battery_window_ParamLimits

0x4bc5,	// (0x0002f676) popup_battery_window

0x782b,	// (0x000322dc) bg_popup_sub_pane_cp25_ParamLimits

0x782b,	// (0x000322dc) bg_popup_sub_pane_cp25

0xdd39,	// (0x000387ea) popup_battery_window_g1_ParamLimits

0xdd39,	// (0x000387ea) popup_battery_window_g1

0xdd45,	// (0x000387f6) popup_battery_window_t1_ParamLimits

0xdd45,	// (0x000387f6) popup_battery_window_t1

0xdd57,	// (0x00038808) popup_battery_window_t2_ParamLimits

0xdd57,	// (0x00038808) popup_battery_window_t2

0x0001,

0xfd9b,	// (0x0003a84c) popup_battery_window_t_ParamLimits

0xfd9b,	// (0x0003a84c) popup_battery_window_t

0x9100,	// (0x00033bb1) midp_canvas_pane_ParamLimits

0x9175,	// (0x00033c26) midp_keypad_pane_ParamLimits

0x9175,	// (0x00033c26) midp_keypad_pane

0x9438,	// (0x00033ee9) main_midp_pane_ParamLimits

0xbb1f,	// (0x000365d0) signal_pane_g2_cp_ParamLimits

0xdd74,	// (0x00038825) aid_size_cell_midp_keypad_ParamLimits

0xdd74,	// (0x00038825) aid_size_cell_midp_keypad

0xdd8e,	// (0x0003883f) midp_keyp_game_grid_pane_ParamLimits

0xdd8e,	// (0x0003883f) midp_keyp_game_grid_pane

0xddae,	// (0x0003885f) midp_keyp_rocker_pane_ParamLimits

0xddae,	// (0x0003885f) midp_keyp_rocker_pane

0xddd9,	// (0x0003888a) midp_keyp_sk_left_pane_ParamLimits

0xddd9,	// (0x0003888a) midp_keyp_sk_left_pane

0xde33,	// (0x000388e4) midp_keyp_sk_right_pane_ParamLimits

0xde33,	// (0x000388e4) midp_keyp_sk_right_pane

0x74ae,	// (0x00031f5f) bg_button_pane_cp03

0xde8d,	// (0x0003893e) midp_keyp_sk_left_pane_g1

0x74ae,	// (0x00031f5f) bg_button_pane_cp04

0xde8d,	// (0x0003893e) midp_keyp_sk_right_pane_g1

0xc067,	// (0x00036b18) midp_keyp_rocker_pane_g1

0xde96,	// (0x00038947) keyp_game_cell_pane_ParamLimits

0xde96,	// (0x00038947) keyp_game_cell_pane

0x74ae,	// (0x00031f5f) bg_button_pane_cp02

0xdea9,	// (0x0003895a) keyp_game_cell_pane_g1

0x4c09,	// (0x0002f6ba) popup_fep_vkb2_window_ParamLimits

0x4c09,	// (0x0002f6ba) popup_fep_vkb2_window

0x6c88,	// (0x00031739) aid_size_cell_vkb2_ParamLimits

0x6c88,	// (0x00031739) aid_size_cell_vkb2

0x6cdc,	// (0x0003178d) popup_fep_vkb2_window_g1_ParamLimits

0x6cdc,	// (0x0003178d) popup_fep_vkb2_window_g1

0x6d24,	// (0x000317d5) vkb2_area_bottom_pane_ParamLimits

0x6d24,	// (0x000317d5) vkb2_area_bottom_pane

0x6d70,	// (0x00031821) vkb2_area_keypad_pane_ParamLimits

0x6d70,	// (0x00031821) vkb2_area_keypad_pane

0x6db2,	// (0x00031863) vkb2_area_top_pane_ParamLimits

0x6db2,	// (0x00031863) vkb2_area_top_pane

0x6e2c,	// (0x000318dd) vkb2_top_entry_pane_ParamLimits

0x6e2c,	// (0x000318dd) vkb2_top_entry_pane

0x6e56,	// (0x00031907) vkb2_top_grid_left_pane_ParamLimits

0x6e56,	// (0x00031907) vkb2_top_grid_left_pane

0x6e74,	// (0x00031925) vkb2_top_grid_right_pane_ParamLimits

0x6e74,	// (0x00031925) vkb2_top_grid_right_pane

0x6e92,	// (0x00031943) vkb2_cell_keypad_pane_ParamLimits

0x6e92,	// (0x00031943) vkb2_cell_keypad_pane

0x6f63,	// (0x00031a14) vkb2_area_bottom_grid_pane_ParamLimits

0x6f63,	// (0x00031a14) vkb2_area_bottom_grid_pane

0x6f89,	// (0x00031a3a) vkb2_area_bottom_pane_g1_ParamLimits

0x6f89,	// (0x00031a3a) vkb2_area_bottom_pane_g1

0x6fad,	// (0x00031a5e) vkb2_area_bottom_pane_g2_ParamLimits

0x6fad,	// (0x00031a5e) vkb2_area_bottom_pane_g2

0x6fdb,	// (0x00031a8c) vkb2_area_bottom_pane_g3_ParamLimits

0x6fdb,	// (0x00031a8c) vkb2_area_bottom_pane_g3

0x0002,

0xfda0,	// (0x0003a851) vkb2_area_bottom_pane_g_ParamLimits

0xfda0,	// (0x0003a851) vkb2_area_bottom_pane_g

0x703c,	// (0x00031aed) vkb2_top_cell_left_pane_ParamLimits

0x703c,	// (0x00031aed) vkb2_top_cell_left_pane

0xdeba,	// (0x0003896b) vkb2_top_entry_pane_g1_ParamLimits

0xdeba,	// (0x0003896b) vkb2_top_entry_pane_g1

0xdec8,	// (0x00038979) vkb2_top_entry_pane_t1_ParamLimits

0xdec8,	// (0x00038979) vkb2_top_entry_pane_t1

0xdefa,	// (0x000389ab) vkb2_top_entry_pane_t2_ParamLimits

0xdefa,	// (0x000389ab) vkb2_top_entry_pane_t2

0xdf2c,	// (0x000389dd) vkb2_top_entry_pane_t3_ParamLimits

0xdf2c,	// (0x000389dd) vkb2_top_entry_pane_t3

0x0002,

0xfda7,	// (0x0003a858) vkb2_top_entry_pane_t_ParamLimits

0xfda7,	// (0x0003a858) vkb2_top_entry_pane_t

0x7089,	// (0x00031b3a) vkb2_top_grid_right_pane_g1_ParamLimits

0x7089,	// (0x00031b3a) vkb2_top_grid_right_pane_g1

0x709f,	// (0x00031b50) vkb2_top_grid_right_pane_g2_ParamLimits

0x709f,	// (0x00031b50) vkb2_top_grid_right_pane_g2

0x70b7,	// (0x00031b68) vkb2_top_grid_right_pane_g3_ParamLimits

0x70b7,	// (0x00031b68) vkb2_top_grid_right_pane_g3

0x70cf,	// (0x00031b80) vkb2_top_grid_right_pane_g4_ParamLimits

0x70cf,	// (0x00031b80) vkb2_top_grid_right_pane_g4

0x0003,

0xfdae,	// (0x0003a85f) vkb2_top_grid_right_pane_g_ParamLimits

0xfdae,	// (0x0003a85f) vkb2_top_grid_right_pane_g

0x70e5,	// (0x00031b96) vkb2_top_cell_left_pane_g1

0x70fc,	// (0x00031bad) vkb2_cell_keypad_pane_g1_ParamLimits

0x70fc,	// (0x00031bad) vkb2_cell_keypad_pane_g1

0xdf50,	// (0x00038a01) vkb2_cell_keypad_pane_t1_ParamLimits

0xdf50,	// (0x00038a01) vkb2_cell_keypad_pane_t1

0x710a,	// (0x00031bbb) vkb2_cell_bottom_grid_pane_ParamLimits

0x710a,	// (0x00031bbb) vkb2_cell_bottom_grid_pane

0x7143,	// (0x00031bf4) vkb2_cell_bottom_grid_pane_g1

0xdb09,	// (0x000385ba) aid_call2_pane_cp02

0xdb11,	// (0x000385c2) aid_call_pane_cp02

0xdb19,	// (0x000385ca) clock_digital_number_pane_cp10

0xdb21,	// (0x000385d2) clock_digital_number_pane_cp11

0xdb29,	// (0x000385da) clock_digital_number_pane_cp12

0xdb31,	// (0x000385e2) clock_digital_number_pane_cp13

0xdb39,	// (0x000385ea) clock_digital_separator_pane_cp10

0x8af6,	// (0x000335a7) popup_clock_digital_analogue_window_cp2_g1

0x8af6,	// (0x000335a7) popup_clock_digital_analogue_window_cp2_g2

0xdb41,	// (0x000385f2) popup_clock_digital_analogue_window_cp2_g3

0x8af6,	// (0x000335a7) popup_clock_digital_analogue_window_cp2_g4

0xdb41,	// (0x000385f2) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd63,	// (0x0003a814) popup_clock_digital_analogue_window_cp2_g

0xdb49,	// (0x000385fa) popup_clock_digital_analogue_window_cp2_t1

0xdb57,	// (0x00038608) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd6e,	// (0x0003a81f) popup_clock_digital_analogue_window_cp2_t

0xc067,	// (0x00036b18) clock_digital_number_pane_cp10_g1

0xc067,	// (0x00036b18) clock_digital_number_pane_cp10_g2

0x0001,

0xfb4a,	// (0x0003a5fb) clock_digital_number_pane_cp10_g

0xc067,	// (0x00036b18) clock_digital_separator_pane_cp10_g1

0xc067,	// (0x00036b18) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb4a,	// (0x0003a5fb) clock_digital_separator_pane_cp10_g

0xd985,	// (0x00038436) uniindi_top_pane_g3

0xd996,	// (0x00038447) uniindi_top_pane_g4

0x6f1d,	// (0x000319ce) vkb2_row_keypad_pane_ParamLimits

0x6f1d,	// (0x000319ce) vkb2_row_keypad_pane

0x715f,	// (0x00031c10) vkb2_cell_t_keypad_pane_ParamLimits

0x715f,	// (0x00031c10) vkb2_cell_t_keypad_pane

0x716f,	// (0x00031c20) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x716f,	// (0x00031c20) vkb2_cell_t_keypad_pane_cp08

0x7182,	// (0x00031c33) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x7182,	// (0x00031c33) vkb2_cell_t_keypad_pane_cp09

0x7196,	// (0x00031c47) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x7196,	// (0x00031c47) vkb2_cell_t_keypad_pane_cp01

0x71a7,	// (0x00031c58) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x71a7,	// (0x00031c58) vkb2_cell_t_keypad_pane_cp02

0x71b8,	// (0x00031c69) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x71b8,	// (0x00031c69) vkb2_cell_t_keypad_pane_cp03

0x71c9,	// (0x00031c7a) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x71c9,	// (0x00031c7a) vkb2_cell_t_keypad_pane_cp04

0x71da,	// (0x00031c8b) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x71da,	// (0x00031c8b) vkb2_cell_t_keypad_pane_cp05

0x71eb,	// (0x00031c9c) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x71eb,	// (0x00031c9c) vkb2_cell_t_keypad_pane_cp06

0x71fc,	// (0x00031cad) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x71fc,	// (0x00031cad) vkb2_cell_t_keypad_pane_cp07

0x720d,	// (0x00031cbe) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x720d,	// (0x00031cbe) vkb2_cell_t_keypad_pane_cp10

0x69c2,	// (0x00031473) vkb2_cell_t_keypad_pane_g1

0xdf88,	// (0x00038a39) vkb2_cell_t_keypad_pane_t1

0x4b00,	// (0x0002f5b1) popup_grid_graphic2_window

0xdf9a,	// (0x00038a4b) aid_size_cell_graphic2_ParamLimits

0xdf9a,	// (0x00038a4b) aid_size_cell_graphic2

0xdfd2,	// (0x00038a83) bg_popup_window_pane_cp21_ParamLimits

0xdfd2,	// (0x00038a83) bg_popup_window_pane_cp21

0xdfe0,	// (0x00038a91) graphic2_pages_pane_ParamLimits

0xdfe0,	// (0x00038a91) graphic2_pages_pane

0xe026,	// (0x00038ad7) grid_graphic2_control_pane_ParamLimits

0xe026,	// (0x00038ad7) grid_graphic2_control_pane

0xe064,	// (0x00038b15) grid_graphic2_pane_ParamLimits

0xe064,	// (0x00038b15) grid_graphic2_pane

0xe0d8,	// (0x00038b89) cell_graphic2_pane

0x4b00,	// (0x0002f5b1) main_comp_mode_pane

0xd203,	// (0x00037cb4) list_ai3_gene_pane_ParamLimits

0xd5cd,	// (0x0003807e) bg_popup_window_pane_cp19_ParamLimits

0xd5d9,	// (0x0003808a) bg_touch_area_indi_pane_ParamLimits

0xd5d9,	// (0x0003808a) bg_touch_area_indi_pane

0xd5ef,	// (0x000380a0) bg_touch_area_indi_pane_cp01_ParamLimits

0xd5ef,	// (0x000380a0) bg_touch_area_indi_pane_cp01

0xd605,	// (0x000380b6) bg_touch_area_indi_pane_cp02_ParamLimits

0xd605,	// (0x000380b6) bg_touch_area_indi_pane_cp02

0xd61d,	// (0x000380ce) bg_touch_area_indi_pane_cp03_ParamLimits

0xd61d,	// (0x000380ce) bg_touch_area_indi_pane_cp03

0xd637,	// (0x000380e8) popup_slider_window_g1_ParamLimits

0xd653,	// (0x00038104) popup_slider_window_g2_ParamLimits

0xd66f,	// (0x00038120) popup_slider_window_g3_ParamLimits

0xfcf8,	// (0x0003a7a9) popup_slider_window_g_ParamLimits

0xd6cb,	// (0x0003817c) popup_slider_window_t1_ParamLimits

0xd73f,	// (0x000381f0) small_volume_slider_vertical_pane_ParamLimits

0xe0d8,	// (0x00038b89) cell_graphic2_pane_ParamLimits

0xe126,	// (0x00038bd7) bg_button_pane_cp10_ParamLimits

0xe126,	// (0x00038bd7) bg_button_pane_cp10

0xe139,	// (0x00038bea) bg_button_pane_cp11_ParamLimits

0xe139,	// (0x00038bea) bg_button_pane_cp11

0xe14c,	// (0x00038bfd) graphic2_pages_pane_g1_ParamLimits

0xe14c,	// (0x00038bfd) graphic2_pages_pane_g1

0xe167,	// (0x00038c18) graphic2_pages_pane_g2_ParamLimits

0xe167,	// (0x00038c18) graphic2_pages_pane_g2

0x0001,

0xfdbc,	// (0x0003a86d) graphic2_pages_pane_g_ParamLimits

0xfdbc,	// (0x0003a86d) graphic2_pages_pane_g

0xe17f,	// (0x00038c30) graphic2_pages_pane_t1_ParamLimits

0xe17f,	// (0x00038c30) graphic2_pages_pane_t1

0xe197,	// (0x00038c48) cell_graphic2_control_pane_ParamLimits

0xe197,	// (0x00038c48) cell_graphic2_control_pane

0xe1b8,	// (0x00038c69) cell_graphic2_pane_g1_ParamLimits

0xe1b8,	// (0x00038c69) cell_graphic2_pane_g1

0xe1c5,	// (0x00038c76) cell_graphic2_pane_g2_ParamLimits

0xe1c5,	// (0x00038c76) cell_graphic2_pane_g2

0xe1d2,	// (0x00038c83) cell_graphic2_pane_g3_ParamLimits

0xe1d2,	// (0x00038c83) cell_graphic2_pane_g3

0xe1df,	// (0x00038c90) cell_graphic2_pane_g4_ParamLimits

0xe1df,	// (0x00038c90) cell_graphic2_pane_g4

0xe1ec,	// (0x00038c9d) cell_graphic2_pane_g5_ParamLimits

0xe1ec,	// (0x00038c9d) cell_graphic2_pane_g5

0x0004,

0xfdc1,	// (0x0003a872) cell_graphic2_pane_g_ParamLimits

0xfdc1,	// (0x0003a872) cell_graphic2_pane_g

0xe207,	// (0x00038cb8) cell_graphic2_pane_t1_ParamLimits

0xe207,	// (0x00038cb8) cell_graphic2_pane_t1

0x9a47,	// (0x000344f8) grid_highlight_pane_cp11_ParamLimits

0x9a47,	// (0x000344f8) grid_highlight_pane_cp11

0x782b,	// (0x000322dc) bg_button_pane_cp05

0xe230,	// (0x00038ce1) cell_graphic2_control_pane_g1

0xc067,	// (0x00036b18) bg_touch_area_indi_pane_g1

0xe258,	// (0x00038d09) aid_cmod_rocker_key_size

0xe262,	// (0x00038d13) aid_cmode_itu_key_size

0xe26c,	// (0x00038d1d) main_cmode_video_pane

0xe276,	// (0x00038d27) main_comp_mode_itu_pane

0xe282,	// (0x00038d33) main_comp_mode_rocker_pane

0xe28e,	// (0x00038d3f) cell_cmode_rocker_pane_ParamLimits

0xe28e,	// (0x00038d3f) cell_cmode_rocker_pane

0xe2a0,	// (0x00038d51) cell_cmode_itu_pane_ParamLimits

0xe2a0,	// (0x00038d51) cell_cmode_itu_pane

0x8492,	// (0x00032f43) bg_button_pane_cp06_ParamLimits

0x8492,	// (0x00032f43) bg_button_pane_cp06

0xc2e5,	// (0x00036d96) cell_cmode_rocker_pane_g1_ParamLimits

0xc2e5,	// (0x00036d96) cell_cmode_rocker_pane_g1

0xd7e3,	// (0x00038294) cell_cmode_rocker_pane_g2_ParamLimits

0xd7e3,	// (0x00038294) cell_cmode_rocker_pane_g2

0x0001,

0xfdd1,	// (0x0003a882) cell_cmode_rocker_pane_g_ParamLimits

0xfdd1,	// (0x0003a882) cell_cmode_rocker_pane_g

0x74ae,	// (0x00031f5f) bg_button_pane_cp07

0xe2b5,	// (0x00038d66) cell_cmode_itu_pane_g1

0xe2be,	// (0x00038d6f) cell_cmode_itu_pane_t1

0xe2cc,	// (0x00038d7d) cell_cmode_itu_pane_t2

0x0001,

0xfdd6,	// (0x0003a887) cell_cmode_itu_pane_t

0xda08,	// (0x000384b9) aid_touch_ctrl_left

0xda10,	// (0x000384c1) aid_touch_ctrl_right

0x74ae,	// (0x00031f5f) compa_mode_pane

0xe2da,	// (0x00038d8b) aid_cmod_rocker_key_size_cp

0xe2e4,	// (0x00038d95) aid_cmode_itu_key_size_cp

0xe2ee,	// (0x00038d9f) compa_mode_pane_g1

0xe2f6,	// (0x00038da7) compa_mode_pane_g2

0xe2fe,	// (0x00038daf) compa_mode_pane_g3

0x0002,

0xfddb,	// (0x0003a88c) compa_mode_pane_g

0xe306,	// (0x00038db7) main_comp_mode_itu_pane_cp

0xe30e,	// (0x00038dbf) main_comp_mode_rocker_pane_cp

0xe316,	// (0x00038dc7) cell_cmode_itu_pane_cp_ParamLimits

0xe316,	// (0x00038dc7) cell_cmode_itu_pane_cp

0xe32b,	// (0x00038ddc) cell_cmode_rocker_pane_cp_ParamLimits

0xe32b,	// (0x00038ddc) cell_cmode_rocker_pane_cp

0x8492,	// (0x00032f43) bg_button_pane_cp06_cp_ParamLimits

0x8492,	// (0x00032f43) bg_button_pane_cp06_cp

0xc2e5,	// (0x00036d96) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc2e5,	// (0x00036d96) cell_cmode_rocker_pane_g1_cp

0xc067,	// (0x00036b18) cell_cmode_rocker_pane_g2_cp

0x74ae,	// (0x00031f5f) bg_button_pane_cp07_cp

0xaf2d,	// (0x000359de) cell_cmode_itu_pane_g1_cp

0xe33d,	// (0x00038dee) cell_cmode_itu_pane_t1_cp

0xe33d,	// (0x00038dee) cell_cmode_itu_pane_t2_cp

0xaf1a,	// (0x000359cb) settings_code_pane_cp2

0x75a2,	// (0x00032053) bg_popup_window_pane_cp3_ParamLimits

0x8089,	// (0x00032b3a) heading_pane_cp3_ParamLimits

0x8095,	// (0x00032b46) listscroll_popup_graphic_pane_ParamLimits

0x676b,	// (0x0003121c) fep_hwr_aid_pane_ParamLimits

0x6be3,	// (0x00031694) aid_touch_sctrl_top_ParamLimits

0x6bfe,	// (0x000316af) sctrl_sk_top_pane_g1_ParamLimits

0x69c2,	// (0x00031473) sctrl_sk_top_pane_g2_ParamLimits

0xfd11,	// (0x0003a7c2) sctrl_sk_top_pane_g_ParamLimits

0x6c0b,	// (0x000316bc) sctrl_sk_top_pane_t1_ParamLimits

0x6be3,	// (0x00031694) aid_touch_sctrl_bottom_ParamLimits

0x6c0b,	// (0x000316bc) sctrl_sk_bottom_pane_t1_ParamLimits

0xd951,	// (0x00038402) aid_area_touch_clock

0x6df4,	// (0x000318a5) aid_vkb2_area_top_pane_cell_ParamLimits

0x6df4,	// (0x000318a5) aid_vkb2_area_top_pane_cell

0x6f3f,	// (0x000319f0) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x6f3f,	// (0x000319f0) aid_vkb2_area_bottom_pane_cell

0xdeb2,	// (0x00038963) popup_char_count_window

0xe34b,	// (0x00038dfc) popup_char_count_window_g1

0xe354,	// (0x00038e05) popup_char_count_window_g2

0xe35d,	// (0x00038e0e) popup_char_count_window_g3

0x0002,

0xfde2,	// (0x0003a893) popup_char_count_window_g

0xe366,	// (0x00038e17) popup_char_count_window_t1

0x6cba,	// (0x0003176b) popup_fep_char_preview_window_ParamLimits

0x6cba,	// (0x0003176b) popup_fep_char_preview_window

0x6e12,	// (0x000318c3) vkb2_top_candi_pane_ParamLimits

0x6e12,	// (0x000318c3) vkb2_top_candi_pane

0xe374,	// (0x00038e25) cell_vkb2_top_candi_pane_ParamLimits

0xe374,	// (0x00038e25) cell_vkb2_top_candi_pane

0x7222,	// (0x00031cd3) bg_popup_fep_char_preview_window_ParamLimits

0x7222,	// (0x00031cd3) bg_popup_fep_char_preview_window

0x7230,	// (0x00031ce1) popup_fep_char_preview_window_t1_ParamLimits

0x7230,	// (0x00031ce1) popup_fep_char_preview_window_t1

0xe3c1,	// (0x00038e72) bg_popup_fep_char_preview_window_g1

0xe3c9,	// (0x00038e7a) bg_popup_fep_char_preview_window_g2

0xe3d1,	// (0x00038e82) bg_popup_fep_char_preview_window_g3

0xe3d9,	// (0x00038e8a) bg_popup_fep_char_preview_window_g4

0xe3e1,	// (0x00038e92) bg_popup_fep_char_preview_window_g5

0x726a,	// (0x00031d1b) bg_popup_fep_char_preview_window_g6

0xe3e9,	// (0x00038e9a) bg_popup_fep_char_preview_window_g7

0xe3f1,	// (0x00038ea2) bg_popup_fep_char_preview_window_g8

0xe3f9,	// (0x00038eaa) bg_popup_fep_char_preview_window_g9

0x0008,

0xfde9,	// (0x0003a89a) bg_popup_fep_char_preview_window_g

0x69c2,	// (0x00031473) cell_vkb2_top_candi_pane_g1_ParamLimits

0x69c2,	// (0x00031473) cell_vkb2_top_candi_pane_g1

0x69d0,	// (0x00031481) cell_vkb2_top_candi_pane_g2_ParamLimits

0x69d0,	// (0x00031481) cell_vkb2_top_candi_pane_g2

0xdf67,	// (0x00038a18) cell_vkb2_top_candi_pane_g3_ParamLimits

0xdf67,	// (0x00038a18) cell_vkb2_top_candi_pane_g3

0x7272,	// (0x00031d23) cell_vkb2_top_candi_pane_g4_ParamLimits

0x7272,	// (0x00031d23) cell_vkb2_top_candi_pane_g4

0xc7b0,	// (0x00037261) cell_vkb2_top_candi_pane_g5_ParamLimits

0xc7b0,	// (0x00037261) cell_vkb2_top_candi_pane_g5

0x7293,	// (0x00031d44) cell_vkb2_top_candi_pane_g6_ParamLimits

0x7293,	// (0x00031d44) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdfc,	// (0x0003a8ad) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdfc,	// (0x0003a8ad) cell_vkb2_top_candi_pane_g

0x72a1,	// (0x00031d52) cell_vkb2_top_candi_pane_t1

0x652c,	// (0x00030fdd) aid_size_touch_slider_mark_ParamLimits

0x652c,	// (0x00030fdd) aid_size_touch_slider_mark

0xe016,	// (0x00038ac7) grid_graphic2_catg_pane_ParamLimits

0xe016,	// (0x00038ac7) grid_graphic2_catg_pane

0xe0b4,	// (0x00038b65) popup_grid_graphic2_window_t1_ParamLimits

0xe0b4,	// (0x00038b65) popup_grid_graphic2_window_t1

0xe0c6,	// (0x00038b77) popup_grid_graphic2_window_t2_ParamLimits

0xe0c6,	// (0x00038b77) popup_grid_graphic2_window_t2

0x0001,

0xfdb7,	// (0x0003a868) popup_grid_graphic2_window_t_ParamLimits

0xfdb7,	// (0x0003a868) popup_grid_graphic2_window_t

0x782b,	// (0x000322dc) bg_button_pane_cp05_ParamLimits

0xe230,	// (0x00038ce1) cell_graphic2_control_pane_g1_ParamLimits

0xe401,	// (0x00038eb2) cell_graphic2_catg_pane_ParamLimits

0xe401,	// (0x00038eb2) cell_graphic2_catg_pane

0x74ae,	// (0x00031f5f) bg_button_pane_cp12

0xe413,	// (0x00038ec4) cell_graphic2_catg_pane_g1

0xd91d,	// (0x000383ce) cell_tb_ext_pane_t1_ParamLimits

0x705c,	// (0x00031b0d) vkb2_top_cell_right_narrow_pane_ParamLimits

0x705c,	// (0x00031b0d) vkb2_top_cell_right_narrow_pane

0x7074,	// (0x00031b25) vkb2_top_cell_right_wide_pane_ParamLimits

0x7074,	// (0x00031b25) vkb2_top_cell_right_wide_pane

0x675d,	// (0x0003120e) bg_vkb2_func_pane_ParamLimits

0x675d,	// (0x0003120e) bg_vkb2_func_pane

0x70e5,	// (0x00031b96) vkb2_top_cell_left_pane_g1_ParamLimits

0x675d,	// (0x0003120e) bg_vkb2_fuc_pane_cp03_ParamLimits

0x675d,	// (0x0003120e) bg_vkb2_fuc_pane_cp03

0x7143,	// (0x00031bf4) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x9957,	// (0x00034408) bg_vkb2_func_pane_g1

0x995f,	// (0x00034410) bg_vkb2_func_pane_g2

0x996f,	// (0x00034420) bg_vkb2_func_pane_g3

0x9967,	// (0x00034418) bg_vkb2_func_pane_g4

0x9977,	// (0x00034428) bg_vkb2_func_pane_g5

0x997f,	// (0x00034430) bg_vkb2_func_pane_g6

0x9987,	// (0x00034438) bg_vkb2_func_pane_g7

0x998f,	// (0x00034440) bg_vkb2_func_pane_g8

0x994f,	// (0x00034400) bg_vkb2_func_pane_g9

0x0008,

0xfe09,	// (0x0003a8ba) bg_vkb2_func_pane_g

0x675d,	// (0x0003120e) bg_vkb2_fuc_pane_cp01_ParamLimits

0x675d,	// (0x0003120e) bg_vkb2_fuc_pane_cp01

0x70e5,	// (0x00031b96) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x70e5,	// (0x00031b96) vkb2_top_cell_right_wide_pane_g1

0x675d,	// (0x0003120e) bg_vkb2_fuc_pane_cp02_ParamLimits

0x675d,	// (0x0003120e) bg_vkb2_fuc_pane_cp02

0x7143,	// (0x00031bf4) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x7143,	// (0x00031bf4) vkb2_top_cell_right_narrow_pane_g1

0xd551,	// (0x00038002) aid_touch_area_decrease_ParamLimits

0xd551,	// (0x00038002) aid_touch_area_decrease

0xd56f,	// (0x00038020) aid_touch_area_increase_ParamLimits

0xd56f,	// (0x00038020) aid_touch_area_increase

0xd57b,	// (0x0003802c) aid_touch_area_mute_ParamLimits

0xd57b,	// (0x0003802c) aid_touch_area_mute

0xd59f,	// (0x00038050) aid_touch_area_slider_ParamLimits

0xd59f,	// (0x00038050) aid_touch_area_slider

0xd68b,	// (0x0003813c) popup_slider_window_g4_ParamLimits

0xd68b,	// (0x0003813c) popup_slider_window_g4

0xd697,	// (0x00038148) popup_slider_window_g5_ParamLimits

0xd697,	// (0x00038148) popup_slider_window_g5

0xd6b9,	// (0x0003816a) popup_slider_window_g6_ParamLimits

0xd6b9,	// (0x0003816a) popup_slider_window_g6

0xd6f9,	// (0x000381aa) popup_slider_window_t2_ParamLimits

0xd6f9,	// (0x000381aa) popup_slider_window_t2

0x0001,

0xfd05,	// (0x0003a7b6) popup_slider_window_t_ParamLimits

0xfd05,	// (0x0003a7b6) popup_slider_window_t

0xd711,	// (0x000381c2) slider_pane_ParamLimits

0xd711,	// (0x000381c2) slider_pane

0xe41c,	// (0x00038ecd) slider_pane_g1_ParamLimits

0xe41c,	// (0x00038ecd) slider_pane_g1

0xe430,	// (0x00038ee1) slider_pane_g2_ParamLimits

0xe430,	// (0x00038ee1) slider_pane_g2

0xe446,	// (0x00038ef7) slider_pane_g3_ParamLimits

0xe446,	// (0x00038ef7) slider_pane_g3

0x0003,

0xfe1c,	// (0x0003a8cd) slider_pane_g_ParamLimits

0xfe1c,	// (0x0003a8cd) slider_pane_g

0x606c,	// (0x00030b1d) popup_tb_float_extension_window_ParamLimits

0x606c,	// (0x00030b1d) popup_tb_float_extension_window

0xe472,	// (0x00038f23) aid_size_cell_tb_float_ext

0x74ae,	// (0x00031f5f) bg_popup_sub_window_cp28

0xe47e,	// (0x00038f2f) grid_tb_float_ext_pane

0xe488,	// (0x00038f39) cell_tb_float_ext_pane_ParamLimits

0xe488,	// (0x00038f39) cell_tb_float_ext_pane

0xe4a2,	// (0x00038f53) cell_tb_float_ext_pane_g1

0xe4ab,	// (0x00038f5c) grid_highlight_pane_cp12

0x68ac,	// (0x0003135d) cell_last_hwr_side_pane_ParamLimits

0x68ac,	// (0x0003135d) cell_last_hwr_side_pane

0xc067,	// (0x00036b18) cell_last_hwr_side_pane_g1

0xe4b4,	// (0x00038f65) cell_last_hwr_side_pane_g2

0x0001,

0xfe25,	// (0x0003a8d6) cell_last_hwr_side_pane_g

0x700b,	// (0x00031abc) vkb2_area_bottom_space_btn_pane_ParamLimits

0x700b,	// (0x00031abc) vkb2_area_bottom_space_btn_pane

0x69c2,	// (0x00031473) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xdf88,	// (0x00038a39) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x72a1,	// (0x00031d52) cell_vkb2_top_candi_pane_t1_ParamLimits

0x72c0,	// (0x00031d71) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x72c0,	// (0x00031d71) vkb2_area_bottom_space_btn_pane_g1

0x72fa,	// (0x00031dab) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x72fa,	// (0x00031dab) vkb2_area_bottom_space_btn_pane_g2

0x7330,	// (0x00031de1) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x7330,	// (0x00031de1) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe2a,	// (0x0003a8db) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe2a,	// (0x0003a8db) vkb2_area_bottom_space_btn_pane_g

0x6820,	// (0x000312d1) cel_fep_hwr_func_pane_ParamLimits

0x6820,	// (0x000312d1) cel_fep_hwr_func_pane

0x685c,	// (0x0003130d) cell_hwr_side_button_pane_ParamLimits

0x685c,	// (0x0003130d) cell_hwr_side_button_pane

0xd951,	// (0x00038402) aid_area_touch_clock_ParamLimits

0x782b,	// (0x000322dc) bg_uniindi_top_pane_ParamLimits

0xd963,	// (0x00038414) uniindi_top_pane_g1_ParamLimits

0xd979,	// (0x0003842a) uniindi_top_pane_g2_ParamLimits

0xd985,	// (0x00038436) uniindi_top_pane_g3_ParamLimits

0xd996,	// (0x00038447) uniindi_top_pane_g4_ParamLimits

0xfd3d,	// (0x0003a7ee) uniindi_top_pane_g_ParamLimits

0xd9a3,	// (0x00038454) uniindi_top_pane_t1_ParamLimits

0x782b,	// (0x000322dc) bg_vkb2_func_pane_cp01_ParamLimits

0x782b,	// (0x000322dc) bg_vkb2_func_pane_cp01

0xe4bd,	// (0x00038f6e) cel_fep_hwr_func_pane_g1_ParamLimits

0xe4bd,	// (0x00038f6e) cel_fep_hwr_func_pane_g1

0x782b,	// (0x000322dc) bg_vkb2_func_pane_cp02_ParamLimits

0x782b,	// (0x000322dc) bg_vkb2_func_pane_cp02

0xe4bd,	// (0x00038f6e) cell_hwr_side_button_pane_g1_ParamLimits

0xe4bd,	// (0x00038f6e) cell_hwr_side_button_pane_g1

0x97d3,	// (0x00034284) status_pane_g4_ParamLimits

0x97d3,	// (0x00034284) status_pane_g4

0x97ed,	// (0x0003429e) status_pane_t1

0xbda1,	// (0x00036852) form2_midp_gauge_slider_cont_pane

0xbda9,	// (0x0003685a) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbdbb,	// (0x0003686c) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbdcd,	// (0x0003687e) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfafd,	// (0x0003a5ae) form2_midp_gauge_slider_pane_t_ParamLimits

0xbddf,	// (0x00036890) form2_midp_slider_pane_ParamLimits

0x6c7a,	// (0x0003172b) aid_size_cell_func_vkb2_ParamLimits

0x6c7a,	// (0x0003172b) aid_size_cell_func_vkb2

0xe45e,	// (0x00038f0f) slider_pane_g4_ParamLimits

0xe45e,	// (0x00038f0f) slider_pane_g4

0x737a,	// (0x00031e2b) form2_midp_gauge_slider_pane_t2_cp01

0x7388,	// (0x00031e39) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x7388,	// (0x00031e39) form2_midp_gauge_slider_pane_t3_cp01

0x73a5,	// (0x00031e56) form2_midp_slider_pane_cp01

0x74ae,	// (0x00031f5f) navi_smil_pane

0xe4f6,	// (0x00038fa7) navi_smil_pane_g1

0xe4fe,	// (0x00038faf) navi_smil_pane_t1

0xe4cb,	// (0x00038f7c) form2_midp_slider_pane_g1

0xe4d4,	// (0x00038f85) form2_midp_slider_pane_g2

0xe4dc,	// (0x00038f8d) form2_midp_slider_pane_g3

0xe4cb,	// (0x00038f7c) form2_midp_slider_pane_g4

0xe4e4,	// (0x00038f95) form2_midp_slider_pane_g5

0x0004,

0xfe33,	// (0x0003a8e4) form2_midp_slider_pane_g

0x736a,	// (0x00031e1b) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x736a,	// (0x00031e1b) vkb2_area_bottom_space_btn_pane_g4

0x9610,	// (0x000340c1) lc0_navi_pane_ParamLimits

0x9610,	// (0x000340c1) lc0_navi_pane

0x9686,	// (0x00034137) lc0_stat_indi_pane_ParamLimits

0x9686,	// (0x00034137) lc0_stat_indi_pane

0x969d,	// (0x0003414e) ls0_title_pane_ParamLimits

0x969d,	// (0x0003414e) ls0_title_pane

0x8492,	// (0x00032f43) bg_popup_sub_pane_cp14_ParamLimits

0xd938,	// (0x000383e9) list_uniindi_pane_ParamLimits

0xd944,	// (0x000383f5) uniindi_top_pane_ParamLimits

0xd9e0,	// (0x00038491) list_single_uniindi_pane_g1_ParamLimits

0xd9f3,	// (0x000384a4) list_single_uniindi_pane_t1_ParamLimits

0x73ae,	// (0x00031e5f) lc0_stat_clock_pane_ParamLimits

0x73ae,	// (0x00031e5f) lc0_stat_clock_pane

0xe50c,	// (0x00038fbd) lc0_stat_indi_pane_g1_ParamLimits

0xe50c,	// (0x00038fbd) lc0_stat_indi_pane_g1

0xe519,	// (0x00038fca) lc0_stat_indi_pane_g2_ParamLimits

0xe519,	// (0x00038fca) lc0_stat_indi_pane_g2

0x0001,

0xfe3e,	// (0x0003a8ef) lc0_stat_indi_pane_g_ParamLimits

0xfe3e,	// (0x0003a8ef) lc0_stat_indi_pane_g

0x73bb,	// (0x00031e6c) lc0_uni_indicator_pane_ParamLimits

0x73bb,	// (0x00031e6c) lc0_uni_indicator_pane

0xe526,	// (0x00038fd7) ls0_title_pane_g1_ParamLimits

0xe526,	// (0x00038fd7) ls0_title_pane_g1

0xe53a,	// (0x00038feb) ls0_title_pane_t1_ParamLimits

0xe53a,	// (0x00038feb) ls0_title_pane_t1

0x73c8,	// (0x00031e79) lc0_uni_indicator_pane_g1_ParamLimits

0x73c8,	// (0x00031e79) lc0_uni_indicator_pane_g1

0xe570,	// (0x00039021) lc0_stat_clock_pane_t1

0x4b00,	// (0x0002f5b1) main_ai5_pane

0xe57e,	// (0x0003902f) ai5_sk_pane_ParamLimits

0xe57e,	// (0x0003902f) ai5_sk_pane

0xe58b,	// (0x0003903c) cell_ai5_widget_pane_ParamLimits

0xe58b,	// (0x0003903c) cell_ai5_widget_pane

0xe641,	// (0x000390f2) aid_size_cell_widget_grid

0xe657,	// (0x00039108) bg_ai5_widget_pane_ParamLimits

0xe657,	// (0x00039108) bg_ai5_widget_pane

0xe6c1,	// (0x00039172) cell_ai5_widget_pane_g2

0xe6d1,	// (0x00039182) cell_ai5_widget_pane_g3

0xe6f0,	// (0x000391a1) cell_ai5_widget_pane_g4

0xe6fc,	// (0x000391ad) cell_ai5_widget_pane_g5

0xe708,	// (0x000391b9) cell_ai5_widget_pane_g6

0xe714,	// (0x000391c5) cell_ai5_widget_pane_g7

0xe75c,	// (0x0003920d) cell_ai5_widget_pane_t1_ParamLimits

0xe75c,	// (0x0003920d) cell_ai5_widget_pane_t1

0xe779,	// (0x0003922a) cell_ai5_widget_pane_t2_ParamLimits

0xe779,	// (0x0003922a) cell_ai5_widget_pane_t2

0xe791,	// (0x00039242) cell_ai5_widget_pane_t3_ParamLimits

0xe791,	// (0x00039242) cell_ai5_widget_pane_t3

0xe7a9,	// (0x0003925a) cell_ai5_widget_pane_t4_ParamLimits

0xe7a9,	// (0x0003925a) cell_ai5_widget_pane_t4

0xe7c3,	// (0x00039274) cell_ai5_widget_pane_t5_ParamLimits

0xe7c3,	// (0x00039274) cell_ai5_widget_pane_t5

0xe7e2,	// (0x00039293) cell_ai5_widget_pane_t6_ParamLimits

0xe7e2,	// (0x00039293) cell_ai5_widget_pane_t6

0xe7f4,	// (0x000392a5) cell_ai5_widget_pane_t7_ParamLimits

0xe7f4,	// (0x000392a5) cell_ai5_widget_pane_t7

0xe80d,	// (0x000392be) cell_ai5_widget_pane_t8_ParamLimits

0xe80d,	// (0x000392be) cell_ai5_widget_pane_t8

0x0009,

0xfe58,	// (0x0003a909) cell_ai5_widget_pane_t_ParamLimits

0xfe58,	// (0x0003a909) cell_ai5_widget_pane_t

0xe859,	// (0x0003930a) grid_ai5_widget_pane

0x8492,	// (0x00032f43) highlight_cell_ai5_widget_pane_ParamLimits

0x8492,	// (0x00032f43) highlight_cell_ai5_widget_pane

0xe871,	// (0x00039322) ai5_sk_left_pane

0xe87b,	// (0x0003932c) ai5_sk_middle_pane

0xe885,	// (0x00039336) ai5_sk_right_pane

0xe88f,	// (0x00039340) bg_ai5_widget_pane_g1_ParamLimits

0xe88f,	// (0x00039340) bg_ai5_widget_pane_g1

0xe89b,	// (0x0003934c) bg_ai5_widget_pane_g2_ParamLimits

0xe89b,	// (0x0003934c) bg_ai5_widget_pane_g2

0xe8a7,	// (0x00039358) bg_ai5_widget_pane_g3_ParamLimits

0xe8a7,	// (0x00039358) bg_ai5_widget_pane_g3

0xe8b3,	// (0x00039364) bg_ai5_widget_pane_g4_ParamLimits

0xe8b3,	// (0x00039364) bg_ai5_widget_pane_g4

0xe8bf,	// (0x00039370) bg_ai5_widget_pane_g5_ParamLimits

0xe8bf,	// (0x00039370) bg_ai5_widget_pane_g5

0xe8cb,	// (0x0003937c) bg_ai5_widget_pane_g6_ParamLimits

0xe8cb,	// (0x0003937c) bg_ai5_widget_pane_g6

0xe8d7,	// (0x00039388) bg_ai5_widget_pane_g7_ParamLimits

0xe8d7,	// (0x00039388) bg_ai5_widget_pane_g7

0xe8e3,	// (0x00039394) bg_ai5_widget_pane_g8_ParamLimits

0xe8e3,	// (0x00039394) bg_ai5_widget_pane_g8

0xe8ef,	// (0x000393a0) bg_ai5_widget_pane_g9_ParamLimits

0xe8ef,	// (0x000393a0) bg_ai5_widget_pane_g9

0x0008,

0xfe6d,	// (0x0003a91e) bg_ai5_widget_pane_g_ParamLimits

0xfe6d,	// (0x0003a91e) bg_ai5_widget_pane_g

0xe922,	// (0x000393d3) cell_shortcut_ai5_widget_pane_ParamLimits

0xe922,	// (0x000393d3) cell_shortcut_ai5_widget_pane

0x90f8,	// (0x00033ba9) bg_cell_shortcut_ai5_widget_pane

0xe933,	// (0x000393e4) cell_grid_ai5_widget_pane_g1

0xe93c,	// (0x000393ed) highlight_cell_shortcut_ai5_widget_pane

0x9957,	// (0x00034408) ai5_sk_left_pane_g1

0xe944,	// (0x000393f5) ai5_sk_left_pane_g2

0xe94c,	// (0x000393fd) ai5_sk_left_pane_g3

0xe954,	// (0x00039405) ai5_sk_left_pane_g4

0x0003,

0xfe80,	// (0x0003a931) ai5_sk_left_pane_g

0xe95c,	// (0x0003940d) ai5_sk_left_pane_t1

0x995f,	// (0x00034410) ai5_sk_right_pane_g1

0xe96a,	// (0x0003941b) ai5_sk_right_pane_g2

0xe972,	// (0x00039423) ai5_sk_right_pane_g3

0xe97a,	// (0x0003942b) ai5_sk_right_pane_g4

0x0003,

0xfe89,	// (0x0003a93a) ai5_sk_right_pane_g

0xe982,	// (0x00039433) ai5_sk_right_pane_t1

0x995f,	// (0x00034410) ai5_sk_middle_pane_g1

0x9957,	// (0x00034408) ai5_sk_middle_pane_g2

0x9977,	// (0x00034428) ai5_sk_middle_pane_g3

0xe972,	// (0x00039423) ai5_sk_middle_pane_g4

0xe94c,	// (0x000393fd) ai5_sk_middle_pane_g5

0xe990,	// (0x00039441) ai5_sk_middle_pane_g6

0xe998,	// (0x00039449) ai5_sk_middle_pane_g7

0x0006,

0xfe92,	// (0x0003a943) ai5_sk_middle_pane_g

0x947e,	// (0x00033f2f) aid_touch_area_size_lc0_ParamLimits

0x947e,	// (0x00033f2f) aid_touch_area_size_lc0

0x69f1,	// (0x000314a2) cell_hwr_candidate_pane_t1_ParamLimits

0x94bc,	// (0x00033f6d) aid_touch_navi_pane

0x9785,	// (0x00034236) status_dt_navi_pane_ParamLimits

0x9785,	// (0x00034236) status_dt_navi_pane

0x9792,	// (0x00034243) status_dt_sta_pane_ParamLimits

0x9792,	// (0x00034243) status_dt_sta_pane

0xe9a0,	// (0x00039451) dt_sta_controll_pane

0xe9ad,	// (0x0003945e) dt_sta_indi_pane

0xe9ba,	// (0x0003946b) dt_sta_title_pane

0x782b,	// (0x000322dc) bg_dt_sta_indi_pane_ParamLimits

0x782b,	// (0x000322dc) bg_dt_sta_indi_pane

0xe9cb,	// (0x0003947c) dt_sta_battery_pane

0xe9d3,	// (0x00039484) dt_sta_indi_pane_g1

0xe9dc,	// (0x0003948d) dt_sta_indi_pane_g2

0xe9e5,	// (0x00039496) dt_sta_indi_pane_g3

0x0002,

0xfea1,	// (0x0003a952) dt_sta_indi_pane_g

0xe9ee,	// (0x0003949f) dt_sta_signal_pane

0x8492,	// (0x00032f43) bg_dt_sta_title_pane_ParamLimits

0x8492,	// (0x00032f43) bg_dt_sta_title_pane

0xe9f7,	// (0x000394a8) dt_sta_title_pane_g1

0xe9ff,	// (0x000394b0) dt_sta_title_pane_t1_ParamLimits

0xe9ff,	// (0x000394b0) dt_sta_title_pane_t1

0x74ae,	// (0x00031f5f) bg_dt_sta_control_pane

0xea14,	// (0x000394c5) dt_sta_controll_pane_g1

0xea1d,	// (0x000394ce) bg_dt_sta_title_pane_g1

0xea26,	// (0x000394d7) bg_dt_sta_title_pane_g2

0xea2f,	// (0x000394e0) bg_dt_sta_title_pane_g3

0x0002,

0xfea8,	// (0x0003a959) bg_dt_sta_title_pane_g

0xc067,	// (0x00036b18) bg_dt_sta_indi_pane_g1

0xea38,	// (0x000394e9) dt_sta_signal_pane_g1

0xea40,	// (0x000394f1) dt_sta_signal_pane_g2

0x0001,

0xfeaf,	// (0x0003a960) dt_sta_signal_pane_g

0xea48,	// (0x000394f9) dt_sta_battery_pane_g1

0xea51,	// (0x00039502) dt_sta_battery_pane_t1

0xc067,	// (0x00036b18) bg_dt_sta_control_pane_g1

0x8c02,	// (0x000336b3) fep_china_uni_eep_pane

0x8c0a,	// (0x000336bb) fep_china_uni_entry_pane_ParamLimits

0x8c1a,	// (0x000336cb) popup_fep_china_uni_window_g1_ParamLimits

0x8c2a,	// (0x000336db) popup_fep_china_uni_window_g2_ParamLimits

0x8c2a,	// (0x000336db) popup_fep_china_uni_window_g2

0x0001,

0xf723,	// (0x0003a1d4) popup_fep_china_uni_window_g_ParamLimits

0xf723,	// (0x0003a1d4) popup_fep_china_uni_window_g

0xea60,	// (0x00039511) fep_china_uni_eep_pane_g1

0xea68,	// (0x00039519) fep_china_uni_eep_pane_t1

0xe4ed,	// (0x00038f9e) aid_touch_area_size_smil_player

0x9608,	// (0x000340b9) lc0_clock_pane

0x97e1,	// (0x00034292) status_pane_g5_ParamLimits

0x97e1,	// (0x00034292) status_pane_g5

0x5d31,	// (0x000307e2) popup_keymap_window

0x97a7,	// (0x00034258) status_icon_pane

0xe6d1,	// (0x00039182) cell_ai5_widget_pane_g3_ParamLimits

0xe6f0,	// (0x000391a1) cell_ai5_widget_pane_g4_ParamLimits

0xe6fc,	// (0x000391ad) cell_ai5_widget_pane_g5_ParamLimits

0xe720,	// (0x000391d1) cell_ai5_widget_pane_g8_ParamLimits

0xe720,	// (0x000391d1) cell_ai5_widget_pane_g8

0xe734,	// (0x000391e5) cell_ai5_widget_pane_g9_ParamLimits

0xe734,	// (0x000391e5) cell_ai5_widget_pane_g9

0xe748,	// (0x000391f9) cell_ai5_widget_pane_g10_ParamLimits

0xe748,	// (0x000391f9) cell_ai5_widget_pane_g10

0xea77,	// (0x00039528) status_icon_pane_g1

0x74ae,	// (0x00031f5f) bg_popup_sub_pane_cp13

0xea7f,	// (0x00039530) popup_keymap_window_t1

0x93c3,	// (0x00033e74) control_pane_g6_ParamLimits

0x93c3,	// (0x00033e74) control_pane_g6

0x93d0,	// (0x00033e81) control_pane_g7_ParamLimits

0x93d0,	// (0x00033e81) control_pane_g7

0x93dd,	// (0x00033e8e) control_pane_g8_ParamLimits

0x93dd,	// (0x00033e8e) control_pane_g8

0xe9a0,	// (0x00039451) dt_sta_controll_pane_ParamLimits

0xe9ad,	// (0x0003945e) dt_sta_indi_pane_ParamLimits

0xe9ba,	// (0x0003946b) dt_sta_title_pane_ParamLimits

0x83ca,	// (0x00032e7b) aid_size_touch_scroll_bar_cale

0x4bd9,	// (0x0002f68a) popup_discreet_window_ParamLimits

0x4bd9,	// (0x0002f68a) popup_discreet_window

0x4c61,	// (0x0002f712) popup_sk_window

0xa058,	// (0x00034b09) bg_popup_sub_pane_cp28_ParamLimits

0xa058,	// (0x00034b09) bg_popup_sub_pane_cp28

0xea8d,	// (0x0003953e) popup_discreet_window_g1_ParamLimits

0xea8d,	// (0x0003953e) popup_discreet_window_g1

0xeaad,	// (0x0003955e) popup_discreet_window_t1_ParamLimits

0xeaad,	// (0x0003955e) popup_discreet_window_t1

0xeacb,	// (0x0003957c) popup_discreet_window_t2_ParamLimits

0xeacb,	// (0x0003957c) popup_discreet_window_t2

0x0002,

0xfeb4,	// (0x0003a965) popup_discreet_window_t_ParamLimits

0xfeb4,	// (0x0003a965) popup_discreet_window_t

0x73dc,	// (0x00031e8d) popup_sk_window_g1

0x73e6,	// (0x00031e97) popup_sk_window_g2

0x0001,

0xfebb,	// (0x0003a96c) popup_sk_window_g

0x73f0,	// (0x00031ea1) popup_sk_window_t1

0x73fe,	// (0x00031eaf) popup_sk_window_t1_copy1

0xe6c1,	// (0x00039172) cell_ai5_widget_pane_g2_ParamLimits

0xe81f,	// (0x000392d0) cell_ai5_widget_pane_t9_ParamLimits

0xe81f,	// (0x000392d0) cell_ai5_widget_pane_t9

0x74ae,	// (0x00031f5f) main_fep_fshwr2_pane

0x740c,	// (0x00031ebd) aid_fshwr2_btn_pane

0x7418,	// (0x00031ec9) aid_fshwr2_syb_pane

0x7429,	// (0x00031eda) aid_fshwr2_txt_pane

0x7435,	// (0x00031ee6) fshwr2_func_candi_pane

0x744a,	// (0x00031efb) fshwr2_hwr_syb_pane

0x7461,	// (0x00031f12) fshwr2_icf_pane

0x74ae,	// (0x00031f5f) fshwr2_icf_bg_pane

0xeb1d,	// (0x000395ce) fshwr2_icf_pane_t1_ParamLimits

0xeb1d,	// (0x000395ce) fshwr2_icf_pane_t1

0xc067,	// (0x00036b18) fshwr2_func_candi_pane_g1

0xeb34,	// (0x000395e5) fshwr2_func_candi_row_pane_ParamLimits

0xeb34,	// (0x000395e5) fshwr2_func_candi_row_pane

0xeb45,	// (0x000395f6) cell_fshwr2_syb_pane_ParamLimits

0xeb45,	// (0x000395f6) cell_fshwr2_syb_pane

0xc2e5,	// (0x00036d96) fshwr2_hwr_syb_pane_g1_ParamLimits

0xc2e5,	// (0x00036d96) fshwr2_hwr_syb_pane_g1

0x74ae,	// (0x00031f5f) bg_popup_call_pane_cp01

0xeb5f,	// (0x00039610) fshwr2_func_candi_cell_pane_ParamLimits

0xeb5f,	// (0x00039610) fshwr2_func_candi_cell_pane

0xeb90,	// (0x00039641) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xeb90,	// (0x00039641) fshwr2_func_candi_cell_bg_pane

0xebaa,	// (0x0003965b) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xebaa,	// (0x0003965b) fshwr2_func_candi_cell_pane_g1

0xebd2,	// (0x00039683) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xebd2,	// (0x00039683) fshwr2_func_candi_cell_pane_t1

0x74ae,	// (0x00031f5f) bg_button_pane_cp08

0x90f8,	// (0x00033ba9) cell_fshwr2_syb_bg_pane

0xebe5,	// (0x00039696) cell_fshwr2_syb_bg_pane_g1

0xebed,	// (0x0003969e) cell_fshwr2_syb_bg_pane_t1

0x8492,	// (0x00032f43) main_tmo_pane

0xab67,	// (0x00035618) uni_indicator_pane_g1_ParamLimits

0xab7c,	// (0x0003562d) uni_indicator_pane_g2_ParamLimits

0xab92,	// (0x00035643) uni_indicator_pane_g3_ParamLimits

0xaba8,	// (0x00035659) uni_indicator_pane_g4_ParamLimits

0xaba8,	// (0x00035659) uni_indicator_pane_g4

0xabbc,	// (0x0003566d) uni_indicator_pane_g5_ParamLimits

0xabbc,	// (0x0003566d) uni_indicator_pane_g5

0xabd0,	// (0x00035681) uni_indicator_pane_g6_ParamLimits

0xabd0,	// (0x00035681) uni_indicator_pane_g6

0xf927,	// (0x0003a3d8) uni_indicator_pane_g_ParamLimits

0xd52d,	// (0x00037fde) popup_tmo_note_window_ParamLimits

0xd52d,	// (0x00037fde) popup_tmo_note_window

0x6c5c,	// (0x0003170d) fshwr2_bg_pane

0xebc3,	// (0x00039674) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xebc3,	// (0x00039674) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfec0,	// (0x0003a971) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfec0,	// (0x0003a971) fshwr2_func_candi_cell_pane_g

0xc067,	// (0x00036b18) bg_popup_window_pane_cp01

0xebfc,	// (0x000396ad) bg_popup_window_pane_g1_cp01

0xec05,	// (0x000396b6) bg_popup_window_pane_cp22_ParamLimits

0xec05,	// (0x000396b6) bg_popup_window_pane_cp22

0xec13,	// (0x000396c4) listscroll_tmo_link_pane_ParamLimits

0xec13,	// (0x000396c4) listscroll_tmo_link_pane

0xec53,	// (0x00039704) popup_tmo_note_window_g1_ParamLimits

0xec53,	// (0x00039704) popup_tmo_note_window_g1

0xec60,	// (0x00039711) tmo_note_info_pane_ParamLimits

0xec60,	// (0x00039711) tmo_note_info_pane

0xec7a,	// (0x0003972b) list_tmo_note_info_pane_g1_ParamLimits

0xec7a,	// (0x0003972b) list_tmo_note_info_pane_g1

0xec91,	// (0x00039742) list_tmo_note_info_pane_g2_ParamLimits

0xec91,	// (0x00039742) list_tmo_note_info_pane_g2

0x0001,

0xfec5,	// (0x0003a976) list_tmo_note_info_pane_g_ParamLimits

0xfec5,	// (0x0003a976) list_tmo_note_info_pane_g

0xecad,	// (0x0003975e) list_tmo_note_info_text_pane_ParamLimits

0xecad,	// (0x0003975e) list_tmo_note_info_text_pane

0xed2e,	// (0x000397df) list_tmo_link_pane

0xed3b,	// (0x000397ec) scroll_pane_cp20

0xed48,	// (0x000397f9) list_single_tmo_link_pane_ParamLimits

0xed48,	// (0x000397f9) list_single_tmo_link_pane

0xed58,	// (0x00039809) list_single_tmo_link_pane_t1

0xed66,	// (0x00039817) list_tmo_note_info_text_pane_t1_ParamLimits

0xed66,	// (0x00039817) list_tmo_note_info_text_pane_t1

0x8558,	// (0x00033009) aid_size_touch_scroll_bar_cp01_ParamLimits

0x8558,	// (0x00033009) aid_size_touch_scroll_bar_cp01

0x5400,	// (0x0002feb1) aid_size_touch_slider_marker

0x4c49,	// (0x0002f6fa) popup_settings_window_ParamLimits

0x4c49,	// (0x0002f6fa) popup_settings_window

0x5bb8,	// (0x00030669) popup_candi_list_indi_window

0x94bc,	// (0x00033f6d) aid_touch_navi_pane_ParamLimits

0x6bb7,	// (0x00031668) rs_clock_indi_pane

0x6bc0,	// (0x00031671) sctrl_sk_bottom_pane_ParamLimits

0x6bd1,	// (0x00031682) sctrl_sk_top_pane_ParamLimits

0x6cd4,	// (0x00031785) popup_fep_tooltip_window

0xe641,	// (0x000390f2) aid_size_cell_widget_grid_ParamLimits

0xe6b5,	// (0x00039166) cell_ai5_widget_pane_g1_ParamLimits

0xe6b5,	// (0x00039166) cell_ai5_widget_pane_g1

0xe708,	// (0x000391b9) cell_ai5_widget_pane_g6_ParamLimits

0xe714,	// (0x000391c5) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe43,	// (0x0003a8f4) cell_ai5_widget_pane_g_ParamLimits

0xfe43,	// (0x0003a8f4) cell_ai5_widget_pane_g

0xe843,	// (0x000392f4) cell_ai5_widget_pane_t10_ParamLimits

0xe843,	// (0x000392f4) cell_ai5_widget_pane_t10

0xe859,	// (0x0003930a) grid_ai5_widget_pane_ParamLimits

0xe8fb,	// (0x000393ac) cell_contacts_ai5_widget_pane_ParamLimits

0xe8fb,	// (0x000393ac) cell_contacts_ai5_widget_pane

0xeae0,	// (0x00039591) popup_discreet_window_t3_ParamLimits

0xeae0,	// (0x00039591) popup_discreet_window_t3

0x7476,	// (0x00031f27) popup_fshwr2_char_preview_window_ParamLimits

0x7476,	// (0x00031f27) popup_fshwr2_char_preview_window

0xeccb,	// (0x0003977c) tmo_note_info_pane_t1

0xece0,	// (0x00039791) tmo_note_info_pane_t2

0xecf5,	// (0x000397a6) tmo_note_info_pane_t3

0xed0a,	// (0x000397bb) tmo_note_info_pane_t4

0xed1c,	// (0x000397cd) tmo_note_info_pane_t5

0x0004,

0xfeca,	// (0x0003a97b) tmo_note_info_pane_t

0xed2e,	// (0x000397df) list_tmo_link_pane_ParamLimits

0xed3b,	// (0x000397ec) scroll_pane_cp20_ParamLimits

0x74ae,	// (0x00031f5f) bg_popup_fep_char_preview_window_cp01

0xed7f,	// (0x00039830) popup_fshwr2_char_preview_window_t1

0xed8d,	// (0x0003983e) popup_candi_list_indi_window_g1

0xed96,	// (0x00039847) bg_cell_contacts_ai5_widget_pane

0xeda2,	// (0x00039853) cell_contacts_ai5_widget_pane_g1

0xedb6,	// (0x00039867) cell_contacts_ai5_widget_pane_g2

0xedc2,	// (0x00039873) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfed5,	// (0x0003a986) cell_contacts_ai5_widget_pane_g

0xedd5,	// (0x00039886) cell_contacts_ai5_widget_pane_t1

0x8492,	// (0x00032f43) highlight_cell_shortcut_ai5_widget_pane_cp01

0xee4c,	// (0x000398fd) settings_container_pane

0x90f8,	// (0x00033ba9) listscroll_set_pane_copy1

0xb70d,	// (0x000361be) scroll_pane_cp121_copy1

0xee58,	// (0x00039909) set_content_pane_copy1

0xee60,	// (0x00039911) aid_height_set_list_copy1_ParamLimits

0xee60,	// (0x00039911) aid_height_set_list_copy1

0xadc8,	// (0x00035879) aid_size_parent_copy1_ParamLimits

0xadc8,	// (0x00035879) aid_size_parent_copy1

0xee6c,	// (0x0003991d) button_value_adjust_pane_cp6_copy1_ParamLimits

0xee6c,	// (0x0003991d) button_value_adjust_pane_cp6_copy1

0x9438,	// (0x00033ee9) list_highlight_pane_cp2_copy1_ParamLimits

0x9438,	// (0x00033ee9) list_highlight_pane_cp2_copy1

0xee80,	// (0x00039931) list_set_pane_copy1_ParamLimits

0xee80,	// (0x00039931) list_set_pane_copy1

0xede7,	// (0x00039898) main_pane_set_t1_copy1_ParamLimits

0xede7,	// (0x00039898) main_pane_set_t1_copy1

0xee21,	// (0x000398d2) main_pane_set_t2_copy1_ParamLimits

0xee21,	// (0x000398d2) main_pane_set_t2_copy1

0xef2d,	// (0x000399de) main_pane_set_t3_copy1

0xef3b,	// (0x000399ec) main_pane_set_t4_copy1

0xee40,	// (0x000398f1) set_content_pane_g1_copy1_ParamLimits

0xee40,	// (0x000398f1) set_content_pane_g1_copy1

0xef49,	// (0x000399fa) setting_code_pane_copy1

0xef51,	// (0x00039a02) setting_slider_graphic_pane_copy1

0xef51,	// (0x00039a02) setting_slider_pane_copy1

0xef51,	// (0x00039a02) setting_text_pane_copy1

0xef51,	// (0x00039a02) setting_volume_pane_copy1

0xef49,	// (0x000399fa) settings_code_pane_cp2_copy1

0xef59,	// (0x00039a0a) settings_code_pane_cp_copy1_ParamLimits

0xef59,	// (0x00039a0a) settings_code_pane_cp_copy1

0xef6d,	// (0x00039a1e) volume_set_pane_copy1

0xef75,	// (0x00039a26) volume_set_pane_g10_copy1

0xef7d,	// (0x00039a2e) volume_set_pane_g1_copy1

0xef85,	// (0x00039a36) volume_set_pane_g2_copy1

0xef8d,	// (0x00039a3e) volume_set_pane_g3_copy1

0xef95,	// (0x00039a46) volume_set_pane_g4_copy1

0xef9d,	// (0x00039a4e) volume_set_pane_g5_copy1

0xefa5,	// (0x00039a56) volume_set_pane_g6_copy1

0xefad,	// (0x00039a5e) volume_set_pane_g7_copy1

0xefb5,	// (0x00039a66) volume_set_pane_g8_copy1

0xefbd,	// (0x00039a6e) volume_set_pane_g9_copy1

0x75a2,	// (0x00032053) bg_set_opt_pane_cp_copy1_ParamLimits

0x75a2,	// (0x00032053) bg_set_opt_pane_cp_copy1

0xefc5,	// (0x00039a76) setting_slider_pane_t1_copy1_ParamLimits

0xefc5,	// (0x00039a76) setting_slider_pane_t1_copy1

0xefe3,	// (0x00039a94) setting_slider_pane_t2_copy1_ParamLimits

0xefe3,	// (0x00039a94) setting_slider_pane_t2_copy1

0xeffd,	// (0x00039aae) setting_slider_pane_t3_copy1_ParamLimits

0xeffd,	// (0x00039aae) setting_slider_pane_t3_copy1

0xf015,	// (0x00039ac6) slider_set_pane_copy1_ParamLimits

0xf015,	// (0x00039ac6) slider_set_pane_copy1

0x84f9,	// (0x00032faa) set_opt_bg_pane_g1_copy2

0x8501,	// (0x00032fb2) set_opt_bg_pane_g2_copy2

0xf02b,	// (0x00039adc) set_opt_bg_pane_g3_copy2

0x8511,	// (0x00032fc2) set_opt_bg_pane_g4_copy2

0x8519,	// (0x00032fca) set_opt_bg_pane_g5_copy2

0x8521,	// (0x00032fd2) set_opt_bg_pane_g6_copy2

0xf035,	// (0x00039ae6) set_opt_bg_pane_g7_copy2

0xf03d,	// (0x00039aee) set_opt_bg_pane_g8_copy2

0xf047,	// (0x00039af8) set_opt_bg_pane_g9_copy2

0xf051,	// (0x00039b02) aid_size_touch_slider_mark_copy1_ParamLimits

0xf051,	// (0x00039b02) aid_size_touch_slider_mark_copy1

0xf065,	// (0x00039b16) slider_set_pane_g1_copy1

0xf06e,	// (0x00039b1f) slider_set_pane_g2_copy1

0xb472,	// (0x00035f23) slider_set_pane_g3_copy1_ParamLimits

0xb472,	// (0x00035f23) slider_set_pane_g3_copy1

0xb486,	// (0x00035f37) slider_set_pane_g4_copy1_ParamLimits

0xb486,	// (0x00035f37) slider_set_pane_g4_copy1

0xb49e,	// (0x00035f4f) slider_set_pane_g5_copy1_ParamLimits

0xb49e,	// (0x00035f4f) slider_set_pane_g5_copy1

0xb472,	// (0x00035f23) slider_set_pane_g6_copy1_ParamLimits

0xb472,	// (0x00035f23) slider_set_pane_g6_copy1

0xf076,	// (0x00039b27) slider_set_pane_g7_copy1_ParamLimits

0xf076,	// (0x00039b27) slider_set_pane_g7_copy1

0x74c2,	// (0x00031f73) bg_set_opt_pane_cp2_copy1

0xf08c,	// (0x00039b3d) setting_slider_graphic_pane_g1_copy1

0xf095,	// (0x00039b46) setting_slider_graphic_pane_t1_copy1

0xf0a5,	// (0x00039b56) setting_slider_graphic_pane_t2_copy1

0xf0b5,	// (0x00039b66) slider_set_pane_cp_copy1

0xf0c5,	// (0x00039b76) input_focus_pane_cp1_copy1

0xf0ce,	// (0x00039b7f) list_set_text_pane_copy1

0xf0d6,	// (0x00039b87) setting_text_pane_g1_copy1

0x4de0,	// (0x0002f891) set_text_pane_t1_copy1

0xf0c5,	// (0x00039b76) input_focus_pane_cp2_copy1

0xf0d6,	// (0x00039b87) setting_code_pane_g1_copy1

0xf0df,	// (0x00039b90) setting_code_pane_t1_copy1

0xf0ed,	// (0x00039b9e) list_set_graphic_pane_copy1

0x74c2,	// (0x00031f73) bg_set_opt_pane_cp4_copy1

0x8dfe,	// (0x000338af) list_set_graphic_pane_g1_copy1_ParamLimits

0x8dfe,	// (0x000338af) list_set_graphic_pane_g1_copy1

0xf0ff,	// (0x00039bb0) list_set_graphic_pane_g2_copy1

0x8e16,	// (0x000338c7) list_set_graphic_pane_t1_copy1_ParamLimits

0x8e16,	// (0x000338c7) list_set_graphic_pane_t1_copy1

0xc067,	// (0x00036b18) rs_clock_indi_pane_g1

0xf107,	// (0x00039bb8) rs_clock_indi_pane_t1

0xf115,	// (0x00039bc6) rs_indi_pane

0xf11d,	// (0x00039bce) rs_indi_pane_g1

0xf126,	// (0x00039bd7) rs_indi_pane_g2

0xf12f,	// (0x00039be0) rs_indi_pane_g3

0x0002,

0xfedc,	// (0x0003a98d) rs_indi_pane_g

0x90f8,	// (0x00033ba9) bg_popup_preview_window_pane_cp03

0xf138,	// (0x00039be9) popup_fep_tooltip_window_t1

0xccce,	// (0x0003777f) popup_note2_window_g2_ParamLimits

0xccce,	// (0x0003777f) popup_note2_window_g2

0x0001,

0xfc75,	// (0x0003a726) popup_note2_window_g_ParamLimits

0xfc75,	// (0x0003a726) popup_note2_window_g

0xd1c9,	// (0x00037c7a) bg_popup_sub_pane_cp11_ParamLimits

0xd1d6,	// (0x00037c87) cell_ai3_links_pane_g1_ParamLimits

0xd1ed,	// (0x00037c9e) cell_ai3_links_pane_t1

0x4de0,	// (0x0002f891) set_text_pane_t1_copy1_ParamLimits

0x9009,	// (0x00033aba) cell_graphic_popup_pane_cp2_ParamLimits

0x9009,	// (0x00033aba) cell_graphic_popup_pane_cp2

0xf146,	// (0x00039bf7) cell_graphic_popup_pane_g1_cp2

0x81dd,	// (0x00032c8e) cell_graphic_popup_pane_g2_cp2

0xf14e,	// (0x00039bff) cell_graphic_popup_pane_g3_cp2

0xf156,	// (0x00039c07) cell_graphic_popup_pane_t2_cp2

0x81ee,	// (0x00032c9f) grid_highlight_pane_cp3_cp2

0x883e,	// (0x000332ef) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x8492,	// (0x00032f43) main_tmo_pane_ParamLimits

0xd521,	// (0x00037fd2) popup_tmo_big_image_note_window

0xe6a5,	// (0x00039156) cell_ai5_widget_list_pane

0xe6ad,	// (0x0003915e) cell_ai5_widget_lrg_icon_pane

0xeccb,	// (0x0003977c) tmo_note_info_pane_t1_ParamLimits

0xece0,	// (0x00039791) tmo_note_info_pane_t2_ParamLimits

0xecf5,	// (0x000397a6) tmo_note_info_pane_t3_ParamLimits

0xed0a,	// (0x000397bb) tmo_note_info_pane_t4_ParamLimits

0xed1c,	// (0x000397cd) tmo_note_info_pane_t5_ParamLimits

0xfeca,	// (0x0003a97b) tmo_note_info_pane_t_ParamLimits

0xee4c,	// (0x000398fd) settings_container_pane_ParamLimits

0xf0bd,	// (0x00039b6e) indicator_popup_pane_cp5

0xf0bd,	// (0x00039b6e) indicator_popup_pane_cp6

0xf0ed,	// (0x00039b9e) list_set_graphic_pane_copy1_ParamLimits

0x74ae,	// (0x00031f5f) bg_popup_window_pane_cp23

0xf164,	// (0x00039c15) popup_tmo_big_image_note_window_g1

0xf16e,	// (0x00039c1f) popup_tmo_big_image_note_window_t1

0xf17e,	// (0x00039c2f) popup_tmo_big_image_note_window_t2

0xf18e,	// (0x00039c3f) popup_tmo_big_image_note_window_t3

0x0002,

0xfee3,	// (0x0003a994) popup_tmo_big_image_note_window_t

0xf19e,	// (0x00039c4f) cell_ai5_widget_lrg_icon_pane_g1

0xf1a6,	// (0x00039c57) cell_ai5_widget_lrg_icon_pane_t1

0xf1b4,	// (0x00039c65) cell_ai5_widget_list_row_pane_ParamLimits

0xf1b4,	// (0x00039c65) cell_ai5_widget_list_row_pane

0xf1cd,	// (0x00039c7e) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf1cd,	// (0x00039c7e) cell_ai5_widget_list_row_pane_g1

0xf1da,	// (0x00039c8b) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf1da,	// (0x00039c8b) cell_ai5_widget_list_row_pane_t1

0xf1f2,	// (0x00039ca3) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf1f2,	// (0x00039ca3) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfeea,	// (0x0003a99b) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeea,	// (0x0003a99b) cell_ai5_widget_list_row_pane_t

0x4b00,	// (0x0002f5b1) main_fep_vtchi_ss_pane

0xf229,	// (0x00039cda) popup_fep_char_pre_window

0xf231,	// (0x00039ce2) popup_fep_ituss_window

0xf252,	// (0x00039d03) popup_fep_vkbss_window

0xf271,	// (0x00039d22) grid_vkbss_keypad_pane_ParamLimits

0xf271,	// (0x00039d22) grid_vkbss_keypad_pane

0xf281,	// (0x00039d32) ituss_keypad_pane

0xf29d,	// (0x00039d4e) aid_vkbss_key_offset_ParamLimits

0xf29d,	// (0x00039d4e) aid_vkbss_key_offset

0xf2a9,	// (0x00039d5a) cell_vkbss_key_pane_ParamLimits

0xf2a9,	// (0x00039d5a) cell_vkbss_key_pane

0xf2bf,	// (0x00039d70) bg_cell_vkbss_key_g1_ParamLimits

0xf2bf,	// (0x00039d70) bg_cell_vkbss_key_g1

0xf2cb,	// (0x00039d7c) cell_vkbss_key_3p_pane_ParamLimits

0xf2cb,	// (0x00039d7c) cell_vkbss_key_3p_pane

0xf2e5,	// (0x00039d96) cell_vkbss_key_g1_ParamLimits

0xf2e5,	// (0x00039d96) cell_vkbss_key_g1

0xf2ff,	// (0x00039db0) cell_vkbss_key_t1_ParamLimits

0xf2ff,	// (0x00039db0) cell_vkbss_key_t1

0xf32a,	// (0x00039ddb) cell_ituss_key_pane_ParamLimits

0xf32a,	// (0x00039ddb) cell_ituss_key_pane

0xf33b,	// (0x00039dec) bg_cell_ituss_key_g1_ParamLimits

0xf33b,	// (0x00039dec) bg_cell_ituss_key_g1

0xf347,	// (0x00039df8) cell_ituss_key_pane_g1_ParamLimits

0xf347,	// (0x00039df8) cell_ituss_key_pane_g1

0xf361,	// (0x00039e12) cell_ituss_key_pane_g2_ParamLimits

0xf361,	// (0x00039e12) cell_ituss_key_pane_g2

0x0001,

0xfef1,	// (0x0003a9a2) cell_ituss_key_pane_g_ParamLimits

0xfef1,	// (0x0003a9a2) cell_ituss_key_pane_g

0xf38c,	// (0x00039e3d) cell_ituss_key_t1_ParamLimits

0xf38c,	// (0x00039e3d) cell_ituss_key_t1

0xf3ba,	// (0x00039e6b) cell_ituss_key_t2_ParamLimits

0xf3ba,	// (0x00039e6b) cell_ituss_key_t2

0xf3eb,	// (0x00039e9c) cell_ituss_key_t3_ParamLimits

0xf3eb,	// (0x00039e9c) cell_ituss_key_t3

0xf41c,	// (0x00039ecd) cell_ituss_key_t4_ParamLimits

0xf41c,	// (0x00039ecd) cell_ituss_key_t4

0x0003,

0xfef6,	// (0x0003a9a7) cell_ituss_key_t_ParamLimits

0xfef6,	// (0x0003a9a7) cell_ituss_key_t

0xf44d,	// (0x00039efe) cell_vkbss_key_3p_pane_g1

0xf455,	// (0x00039f06) cell_vkbss_key_3p_pane_g2

0xf45d,	// (0x00039f0e) cell_vkbss_key_3p_pane_g3

0x0002,

0xfeff,	// (0x0003a9b0) cell_vkbss_key_3p_pane_g

0x74ae,	// (0x00031f5f) bg_popup_fep_char_preview_window_cp02

0xf465,	// (0x00039f16) popup_fep_char_pre_window_t1

0xe637,	// (0x000390e8) main_ai5_sk_pane

0xed96,	// (0x00039847) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xeda2,	// (0x00039853) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xedb6,	// (0x00039867) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xedc2,	// (0x00039873) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfed5,	// (0x0003a986) cell_contacts_ai5_widget_pane_g_ParamLimits

0xedd5,	// (0x00039886) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x8492,	// (0x00032f43) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf474,	// (0x00039f25) main_ai5_sk_pane_g1

0x9e85,	// (0x00034936) popup_query_code_window_g1

0xf247,	// (0x00039cf8) popup_fep_vkb_icf_pane

0xf25b,	// (0x00039d0c) popup_fep_vtchi_icf_pane

0x8492,	// (0x00032f43) bg_icf_pane

0xf47d,	// (0x00039f2e) list_vkb_icf_pane

0x8492,	// (0x00032f43) bg_icf_pane_cp01

0xf489,	// (0x00039f3a) vtchi_icf_list_pane

0xf49a,	// (0x00039f4b) list_vkb_icf_pane_t1_ParamLimits

0xf49a,	// (0x00039f4b) list_vkb_icf_pane_t1

0xf4b1,	// (0x00039f62) vtchi_icf_list_pane_t1_ParamLimits

0xf4b1,	// (0x00039f62) vtchi_icf_list_pane_t1

0xf231,	// (0x00039ce2) popup_fep_ituss_window_ParamLimits

0xf25b,	// (0x00039d0c) popup_fep_vtchi_icf_pane_ParamLimits

0xf281,	// (0x00039d32) ituss_keypad_pane_ParamLimits

0xf291,	// (0x00039d42) ituss_sks_pane

0x8492,	// (0x00032f43) bg_icf_pane_ParamLimits

0xf21a,	// (0x00039ccb) icf_edit_indi_pane_ParamLimits

0xf21a,	// (0x00039ccb) icf_edit_indi_pane

0xf47d,	// (0x00039f2e) list_vkb_icf_pane_ParamLimits

0x8492,	// (0x00032f43) bg_icf_pane_cp01_ParamLimits

0xf21a,	// (0x00039ccb) icf_edit_indi_pane_cp01_ParamLimits

0xf21a,	// (0x00039ccb) icf_edit_indi_pane_cp01

0xf491,	// (0x00039f42) vtchi_query_pane

0xc2e5,	// (0x00036d96) icf_edit_indi_pane_g1_ParamLimits

0xc2e5,	// (0x00036d96) icf_edit_indi_pane_g1

0xf537,	// (0x00039fe8) icf_edit_indi_pane_g2_ParamLimits

0xf537,	// (0x00039fe8) icf_edit_indi_pane_g2

0x0001,

0xff17,	// (0x0003a9c8) icf_edit_indi_pane_g_ParamLimits

0xff17,	// (0x0003a9c8) icf_edit_indi_pane_g

0xf546,	// (0x00039ff7) icf_edit_indi_pane_t1

0xf4cd,	// (0x00039f7e) bg_input_focus_pane_cp042

0x83c1,	// (0x00032e72) vtchi_button_pane

0xf4d6,	// (0x00039f87) vtchi_query_pane_t1

0xf4e4,	// (0x00039f95) vtchi_query_pane_t2

0xf4f2,	// (0x00039fa3) vtchi_query_pane_t3

0x0002,

0xff06,	// (0x0003a9b7) vtchi_query_pane_t

0x74ae,	// (0x00031f5f) bg_button_pane_cp13

0xf500,	// (0x00039fb1) vtchi_button_pane_g1

0xf508,	// (0x00039fb9) ituss_sks_pane_g1

0xf513,	// (0x00039fc4) ituss_sks_pane_g2

0x0001,

0xff0d,	// (0x0003a9be) ituss_sks_pane_g

0xf51b,	// (0x00039fcc) ituss_sks_pane_t1

0xf529,	// (0x00039fda) ituss_sks_pane_t2

0x0001,

0xff12,	// (0x0003a9c3) ituss_sks_pane_t

0xbad0,	// (0x00036581) indicator_nsta_pane_cp_g1

0xbad9,	// (0x0003658a) indicator_nsta_pane_cp_g2

0xbae1,	// (0x00036592) indicator_nsta_pane_cp_g3

0xbae9,	// (0x0003659a) indicator_nsta_pane_cp_g4

0xbaf1,	// (0x000365a2) indicator_nsta_pane_cp_g5

0xbaf9,	// (0x000365aa) indicator_nsta_pane_cp_g6

0x0005,

0xfab3,	// (0x0003a564) indicator_nsta_pane_cp_g

0xe21d,	// (0x00038cce) cell_graphic2_pane_t2_ParamLimits

0xe21d,	// (0x00038cce) cell_graphic2_pane_t2

0x0001,

0xfdcc,	// (0x0003a87d) cell_graphic2_pane_t_ParamLimits

0xfdcc,	// (0x0003a87d) cell_graphic2_pane_t

0xe24a,	// (0x00038cfb) cell_graphic2_control_pane_t1

0x8bb4,	// (0x00033665) signal_pane_g3_ParamLimits

0x8bb4,	// (0x00033665) signal_pane_g3

0x8bc3,	// (0x00033674) signal_pane_g4_ParamLimits

0x8bc3,	// (0x00033674) signal_pane_g4

0xf204,	// (0x00039cb5) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf204,	// (0x00039cb5) cell_ai5_widget_list_row_pane_t3

0xf37a,	// (0x00039e2b) cell_ituss_key_pane_t1_ParamLimits

0xf37a,	// (0x00039e2b) cell_ituss_key_pane_t1

0x9ad8,	// (0x00034589) form_field_data_wide_pane_vc_t2_ParamLimits

0x9ad8,	// (0x00034589) form_field_data_wide_pane_vc_t2

0x9aec,	// (0x0003459d) form_field_data_wide_pane_vc_t3_ParamLimits

0x9aec,	// (0x0003459d) form_field_data_wide_pane_vc_t3

0x0002,

0xf80f,	// (0x0003a2c0) form_field_data_wide_pane_vc_t_ParamLimits

0xf80f,	// (0x0003a2c0) form_field_data_wide_pane_vc_t

0xb787,	// (0x00036238) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb787,	// (0x00036238) form_field_slider_wide_pane_vc_t3

0xb865,	// (0x00036316) form_field_popup_wide_pane_vc_t2_ParamLimits

0xb865,	// (0x00036316) form_field_popup_wide_pane_vc_t2

0xb87c,	// (0x0003632d) form_field_popup_wide_pane_vc_t3_ParamLimits

0xb87c,	// (0x0003632d) form_field_popup_wide_pane_vc_t3

0x0002,

0xfaa2,	// (0x0003a553) form_field_popup_wide_pane_vc_t_ParamLimits

0xfaa2,	// (0x0003a553) form_field_popup_wide_pane_vc_t

0x740c,	// (0x00031ebd) aid_fshwr2_btn_pane_ParamLimits

0x7418,	// (0x00031ec9) aid_fshwr2_syb_pane_ParamLimits

0x7429,	// (0x00031eda) aid_fshwr2_txt_pane_ParamLimits

0x6c5c,	// (0x0003170d) fshwr2_bg_pane_ParamLimits

0x7435,	// (0x00031ee6) fshwr2_func_candi_pane_ParamLimits

0x744a,	// (0x00031efb) fshwr2_hwr_syb_pane_ParamLimits

0x7461,	// (0x00031f12) fshwr2_icf_pane_ParamLimits
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

} // end of namespace AknLayoutScalable_Abrw_php_av_qhd_prt_tch_Small

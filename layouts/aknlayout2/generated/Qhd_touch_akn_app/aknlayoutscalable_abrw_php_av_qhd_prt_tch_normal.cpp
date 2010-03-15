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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0000ae1d };

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
0x6ca1,	// (0x00011abe) Screen

0x6cb5,	// (0x00011ad2) application_window_ParamLimits

0x6cb5,	// (0x00011ad2) application_window

0x6ccf,	// (0x00011aec) screen_g1

0x4997,	// (0x0000f7b4) area_bottom_pane_ParamLimits

0x4997,	// (0x0000f7b4) area_bottom_pane

0x4a57,	// (0x0000f874) area_top_pane_ParamLimits

0x4a57,	// (0x0000f874) area_top_pane

0x4af5,	// (0x0000f912) main_pane_ParamLimits

0x4af5,	// (0x0000f912) main_pane

0x6cd9,	// (0x00011af6) misc_graphics

0x8e38,	// (0x00013c55) battery_pane_ParamLimits

0x8e38,	// (0x00013c55) battery_pane

0x9c0e,	// (0x00014a2b) bg_status_flat_pane_g8

0x9c16,	// (0x00014a33) bg_status_flat_pane_g9

0x8efa,	// (0x00013d17) context_pane_ParamLimits

0x8efa,	// (0x00013d17) context_pane

0x9010,	// (0x00013e2d) navi_pane_ParamLimits

0x9010,	// (0x00013e2d) navi_pane

0x908e,	// (0x00013eab) signal_pane_ParamLimits

0x908e,	// (0x00013eab) signal_pane

0x0008,

0xf87a,	// (0x0001a697) bg_status_flat_pane_g

0x90fb,	// (0x00013f18) status_pane_g1_ParamLimits

0x90fb,	// (0x00013f18) status_pane_g1

0x9107,	// (0x00013f24) status_pane_g2_ParamLimits

0x9107,	// (0x00013f24) status_pane_g2

0x9113,	// (0x00013f30) status_pane_g3_ParamLimits

0x9113,	// (0x00013f30) status_pane_g3

0x0004,

0xf7a1,	// (0x0001a5be) status_pane_g_ParamLimits

0xf7a1,	// (0x0001a5be) status_pane_g

0x9147,	// (0x00013f64) title_pane_ParamLimits

0x9147,	// (0x00013f64) title_pane

0x9184,	// (0x00013fa1) uni_indicator_pane_ParamLimits

0x9184,	// (0x00013fa1) uni_indicator_pane

0x8d50,	// (0x00013b6d) bg_list_pane_ParamLimits

0x8d50,	// (0x00013b6d) bg_list_pane

0x8d70,	// (0x00013b8d) find_pane

0x8d78,	// (0x00013b95) listscroll_app_pane_ParamLimits

0x8d78,	// (0x00013b95) listscroll_app_pane

0x8d84,	// (0x00013ba1) listscroll_form_pane

0x53be,	// (0x000101db) listscroll_gen_pane_ParamLimits

0x53be,	// (0x000101db) listscroll_gen_pane

0x8d84,	// (0x00013ba1) listscroll_set_pane

0x7f22,	// (0x00012d3f) main_idle_act_pane

0x8a56,	// (0x00013873) main_idle_trad_pane

0x8a56,	// (0x00013873) main_list_empty_pane

0x8d9e,	// (0x00013bbb) main_midp_pane

0x8daa,	// (0x00013bc7) main_pane_g1_ParamLimits

0x8daa,	// (0x00013bc7) main_pane_g1

0x53e0,	// (0x000101fd) popup_ai_message_window_ParamLimits

0x53e0,	// (0x000101fd) popup_ai_message_window

0x5486,	// (0x000102a3) popup_fep_china_uni_window_ParamLimits

0x5486,	// (0x000102a3) popup_fep_china_uni_window

0x54e2,	// (0x000102ff) popup_fep_japan_candidate_window_ParamLimits

0x54e2,	// (0x000102ff) popup_fep_japan_candidate_window

0x5502,	// (0x0001031f) popup_fep_japan_predictive_window_ParamLimits

0x5502,	// (0x0001031f) popup_fep_japan_predictive_window

0x5532,	// (0x0001034f) popup_find_window

0x553f,	// (0x0001035c) popup_grid_graphic_window_ParamLimits

0x553f,	// (0x0001035c) popup_grid_graphic_window

0x5567,	// (0x00010384) popup_large_graphic_colour_window

0x558d,	// (0x000103aa) popup_menu_window_ParamLimits

0x558d,	// (0x000103aa) popup_menu_window

0x5745,	// (0x00010562) popup_note_image_window

0x5731,	// (0x0001054e) popup_note_wait_window_ParamLimits

0x5731,	// (0x0001054e) popup_note_wait_window

0x5731,	// (0x0001054e) popup_note_window_ParamLimits

0x5731,	// (0x0001054e) popup_note_window

0x579b,	// (0x000105b8) popup_query_code_window_ParamLimits

0x579b,	// (0x000105b8) popup_query_code_window

0x57af,	// (0x000105cc) popup_query_data_code_window_ParamLimits

0x57af,	// (0x000105cc) popup_query_data_code_window

0x57cc,	// (0x000105e9) popup_query_data_window_ParamLimits

0x57cc,	// (0x000105e9) popup_query_data_window

0x57e8,	// (0x00010605) popup_query_sat_info_window_ParamLimits

0x57e8,	// (0x00010605) popup_query_sat_info_window

0x5821,	// (0x0001063e) popup_snote_single_graphic_window_ParamLimits

0x5821,	// (0x0001063e) popup_snote_single_graphic_window

0x5821,	// (0x0001063e) popup_snote_single_text_window_ParamLimits

0x5821,	// (0x0001063e) popup_snote_single_text_window

0x5836,	// (0x00010653) popup_sub_window_general

0x5966,	// (0x00010783) popup_window_general_ParamLimits

0x5966,	// (0x00010783) popup_window_general

0x8dc0,	// (0x00013bdd) power_save_pane

0x5252,	// (0x0001006f) control_pane_g1_ParamLimits

0x5252,	// (0x0001006f) control_pane_g1

0x5279,	// (0x00010096) control_pane_g2_ParamLimits

0x5279,	// (0x00010096) control_pane_g2

0x8d13,	// (0x00013b30) control_pane_g3_ParamLimits

0x8d13,	// (0x00013b30) control_pane_g3

0x0007,

0xf789,	// (0x0001a5a6) control_pane_g_ParamLimits

0xf789,	// (0x0001a5a6) control_pane_g

0x52c3,	// (0x000100e0) control_pane_t1_ParamLimits

0x52c3,	// (0x000100e0) control_pane_t1

0x530f,	// (0x0001012c) control_pane_t2_ParamLimits

0x530f,	// (0x0001012c) control_pane_t2

0x0002,

0xf79a,	// (0x0001a5b7) control_pane_t_ParamLimits

0xf79a,	// (0x0001a5b7) control_pane_t

0x8c34,	// (0x00013a51) navi_navi_volume_pane_cp1

0x8c3d,	// (0x00013a5a) status_small_icon_pane

0x8c45,	// (0x00013a62) status_small_pane_g1_ParamLimits

0x8c45,	// (0x00013a62) status_small_pane_g1

0x8c79,	// (0x00013a96) status_small_pane_g2_ParamLimits

0x8c79,	// (0x00013a96) status_small_pane_g2

0x8c85,	// (0x00013aa2) status_small_pane_g3_ParamLimits

0x8c85,	// (0x00013aa2) status_small_pane_g3

0x8c91,	// (0x00013aae) status_small_pane_g4_ParamLimits

0x8c91,	// (0x00013aae) status_small_pane_g4

0x8c9d,	// (0x00013aba) status_small_pane_g5_ParamLimits

0x8c9d,	// (0x00013aba) status_small_pane_g5

0x8cac,	// (0x00013ac9) status_small_pane_g6_ParamLimits

0x8cac,	// (0x00013ac9) status_small_pane_g6

0x0007,

0xf778,	// (0x0001a595) status_small_pane_g_ParamLimits

0xf778,	// (0x0001a595) status_small_pane_g

0x8cdc,	// (0x00013af9) status_small_pane_t1

0x8cff,	// (0x00013b1c) status_small_wait_pane_ParamLimits

0x8cff,	// (0x00013b1c) status_small_wait_pane

0x8444,	// (0x00013261) aid_levels_signal_ParamLimits

0x8444,	// (0x00013261) aid_levels_signal

0x8456,	// (0x00013273) signal_pane_g1_ParamLimits

0x8456,	// (0x00013273) signal_pane_g1

0x846b,	// (0x00013288) signal_pane_g2_ParamLimits

0x846b,	// (0x00013288) signal_pane_g2

0x0003,

0xf709,	// (0x0001a526) signal_pane_g_ParamLimits

0xf709,	// (0x0001a526) signal_pane_g

0x84a6,	// (0x000132c3) context_pane_g1

0x6ce3,	// (0x00011b00) title_pane_g1

0x6d19,	// (0x00011b36) title_pane_t1

0x6d81,	// (0x00011b9e) title_pane_t2

0x6da7,	// (0x00011bc4) title_pane_t3

0x0002,

0xf55d,	// (0x0001a37a) title_pane_t

0x919c,	// (0x00013fb9) aid_levels_battery_ParamLimits

0x919c,	// (0x00013fb9) aid_levels_battery

0x91b0,	// (0x00013fcd) battery_pane_g1_ParamLimits

0x91b0,	// (0x00013fcd) battery_pane_g1

0x91c6,	// (0x00013fe3) battery_pane_g2_ParamLimits

0x91c6,	// (0x00013fe3) battery_pane_g2

0x0001,

0xf7ac,	// (0x0001a5c9) battery_pane_g_ParamLimits

0xf7ac,	// (0x0001a5c9) battery_pane_g

0xa550,	// (0x0001536d) uni_indicator_pane_g1

0xa565,	// (0x00015382) uni_indicator_pane_g2

0xa57b,	// (0x00015398) uni_indicator_pane_g3

0x0005,

0xf922,	// (0x0001a73f) uni_indicator_pane_g

0x88c8,	// (0x000136e5) navi_icon_pane_ParamLimits

0x88c8,	// (0x000136e5) navi_icon_pane

0x8811,	// (0x0001362e) navi_midp_pane

0x88e4,	// (0x00013701) navi_navi_pane

0x88ee,	// (0x0001370b) navi_text_pane_ParamLimits

0x88ee,	// (0x0001370b) navi_text_pane

0x6ccf,	// (0x00011aec) status_small_wait_pane_g1

0x71f0,	// (0x0001200d) status_small_wait_pane_g2

0x0001,

0xf91d,	// (0x0001a73a) status_small_wait_pane_g

0xa275,	// (0x00015092) navi_navi_icon_text_pane

0xa27d,	// (0x0001509a) navi_navi_pane_g1_ParamLimits

0xa27d,	// (0x0001509a) navi_navi_pane_g1

0xa28f,	// (0x000150ac) navi_navi_pane_g2_ParamLimits

0xa28f,	// (0x000150ac) navi_navi_pane_g2

0x0001,

0xf8eb,	// (0x0001a708) navi_navi_pane_g_ParamLimits

0xf8eb,	// (0x0001a708) navi_navi_pane_g

0xa2a1,	// (0x000150be) navi_navi_tabs_pane

0xa2aa,	// (0x000150c7) navi_navi_text_pane

0xa275,	// (0x00015092) navi_navi_volume_pane

0xa251,	// (0x0001506e) navi_text_pane_t1

0xa245,	// (0x00015062) navi_icon_pane_g1

0xa198,	// (0x00014fb5) navi_navi_text_pane_t1

0x5c7e,	// (0x00010a9b) navi_navi_volume_pane_g1

0x5c86,	// (0x00010aa3) volume_small_pane

0xa0fe,	// (0x00014f1b) navi_navi_icon_text_pane_g1

0xa106,	// (0x00014f23) navi_navi_icon_text_pane_t1

0x88e4,	// (0x00013701) navi_tabs_2_long_pane

0x88e4,	// (0x00013701) navi_tabs_2_pane

0x88e4,	// (0x00013701) navi_tabs_3_long_pane

0x88e4,	// (0x00013701) navi_tabs_3_pane

0x88e4,	// (0x00013701) navi_tabs_4_pane

0x5c5e,	// (0x00010a7b) tabs_2_active_pane_ParamLimits

0x5c5e,	// (0x00010a7b) tabs_2_active_pane

0x5c6e,	// (0x00010a8b) tabs_2_passive_pane_ParamLimits

0x5c6e,	// (0x00010a8b) tabs_2_passive_pane

0x5c2c,	// (0x00010a49) tabs_3_active_pane_ParamLimits

0x5c2c,	// (0x00010a49) tabs_3_active_pane

0x5c3c,	// (0x00010a59) tabs_3_passive_pane_ParamLimits

0x5c3c,	// (0x00010a59) tabs_3_passive_pane

0x5c4d,	// (0x00010a6a) tabs_3_passive_pane_cp_ParamLimits

0x5c4d,	// (0x00010a6a) tabs_3_passive_pane_cp

0x5be8,	// (0x00010a05) tabs_4_active_pane_ParamLimits

0x5be8,	// (0x00010a05) tabs_4_active_pane

0x5bf9,	// (0x00010a16) tabs_4_passive_pane_ParamLimits

0x5bf9,	// (0x00010a16) tabs_4_passive_pane

0x5c0a,	// (0x00010a27) tabs_4_passive_pane_cp_ParamLimits

0x5c0a,	// (0x00010a27) tabs_4_passive_pane_cp

0x5c1b,	// (0x00010a38) tabs_4_passive_pane_cp2_ParamLimits

0x5c1b,	// (0x00010a38) tabs_4_passive_pane_cp2

0x5bc4,	// (0x000109e1) tabs_2_long_active_pane_ParamLimits

0x5bc4,	// (0x000109e1) tabs_2_long_active_pane

0x5bd6,	// (0x000109f3) tabs_2_long_passive_pane_ParamLimits

0x5bd6,	// (0x000109f3) tabs_2_long_passive_pane

0x5b85,	// (0x000109a2) tabs_3_long_active_pane_ParamLimits

0x5b85,	// (0x000109a2) tabs_3_long_active_pane

0x5b98,	// (0x000109b5) tabs_3_long_passive_pane_ParamLimits

0x5b98,	// (0x000109b5) tabs_3_long_passive_pane

0x5bb1,	// (0x000109ce) tabs_3_long_passive_pane_cp_ParamLimits

0x5bb1,	// (0x000109ce) tabs_3_long_passive_pane_cp

0x5b2b,	// (0x00010948) volume_small_pane_g1

0x5b34,	// (0x00010951) volume_small_pane_g2

0x5b3d,	// (0x0001095a) volume_small_pane_g3

0x5b46,	// (0x00010963) volume_small_pane_g4

0x5b4f,	// (0x0001096c) volume_small_pane_g5

0x5b58,	// (0x00010975) volume_small_pane_g6

0x5b61,	// (0x0001097e) volume_small_pane_g7

0x5b6a,	// (0x00010987) volume_small_pane_g8

0x5b73,	// (0x00010990) volume_small_pane_g9

0x5b7c,	// (0x00010999) volume_small_pane_g10

0x0009,

0xf8b7,	// (0x0001a6d4) volume_small_pane_g

0x6db9,	// (0x00011bd6) bg_active_tab_pane_cp2_ParamLimits

0x6db9,	// (0x00011bd6) bg_active_tab_pane_cp2

0x6dc7,	// (0x00011be4) tabs_3_active_pane_g1

0x6dcf,	// (0x00011bec) tabs_3_active_pane_t1

0x6db9,	// (0x00011bd6) bg_passive_tab_pane_cp2_ParamLimits

0x6db9,	// (0x00011bd6) bg_passive_tab_pane_cp2

0x6dc7,	// (0x00011be4) tabs_3_passive_pane_g1

0x6dcf,	// (0x00011bec) tabs_3_passive_pane_t1

0x6db9,	// (0x00011bd6) bg_active_tab_pane_cp3_ParamLimits

0x6db9,	// (0x00011bd6) bg_active_tab_pane_cp3

0x6de1,	// (0x00011bfe) tabs_4_active_pane_g1

0x6de9,	// (0x00011c06) tabs_4_active_pane_t1

0x6db9,	// (0x00011bd6) bg_passive_tab_pane_cp3_ParamLimits

0x6db9,	// (0x00011bd6) bg_passive_tab_pane_cp3

0x6de1,	// (0x00011bfe) tabs_4_1_passive_pane_g1

0x6de9,	// (0x00011c06) tabs_4_1_passive_pane_t1

0x8d9e,	// (0x00013bbb) list_highlight_pane_cp2

0xa801,	// (0x0001561e) list_set_pane_ParamLimits

0xa801,	// (0x0001561e) list_set_pane

0xa8a7,	// (0x000156c4) main_pane_set_t1_ParamLimits

0xa8a7,	// (0x000156c4) main_pane_set_t1

0xa8c7,	// (0x000156e4) main_pane_set_t2_ParamLimits

0xa8c7,	// (0x000156e4) main_pane_set_t2

0xa8db,	// (0x000156f8) main_pane_set_t3_ParamLimits

0xa8db,	// (0x000156f8) main_pane_set_t3

0xa8ed,	// (0x0001570a) main_pane_set_t4_ParamLimits

0xa8ed,	// (0x0001570a) main_pane_set_t4

0x0003,

0xf987,	// (0x0001a7a4) main_pane_set_t_ParamLimits

0xf987,	// (0x0001a7a4) main_pane_set_t

0xa8ff,	// (0x0001571c) setting_code_pane

0xa90b,	// (0x00015728) setting_slider_graphic_pane

0xa90b,	// (0x00015728) setting_slider_pane

0xa90b,	// (0x00015728) setting_text_pane

0xa90b,	// (0x00015728) setting_volume_pane

0x4d3a,	// (0x0000fb57) volume_set_pane

0x6db9,	// (0x00011bd6) bg_set_opt_pane_cp

0x4d42,	// (0x0000fb5f) setting_slider_pane_t1

0x4d5b,	// (0x0000fb78) setting_slider_pane_t2

0x4d75,	// (0x0000fb92) setting_slider_pane_t3

0x0002,

0xf564,	// (0x0001a381) setting_slider_pane_t

0x4d8d,	// (0x0000fbaa) slider_set_pane

0x6cd9,	// (0x00011af6) bg_set_opt_pane_cp2

0x6dfb,	// (0x00011c18) setting_slider_graphic_pane_g1

0x4da3,	// (0x0000fbc0) setting_slider_graphic_pane_t1

0x4db3,	// (0x0000fbd0) setting_slider_graphic_pane_t2

0x0001,

0xf56b,	// (0x0001a388) setting_slider_graphic_pane_t

0x4dc3,	// (0x0000fbe0) slider_set_pane_cp

0x6cd9,	// (0x00011af6) input_focus_pane_cp1

0xa7c0,	// (0x000155dd) list_set_text_pane

0x6ccf,	// (0x00011aec) setting_text_pane_g1

0x6cd9,	// (0x00011af6) input_focus_pane_cp2

0x6ccf,	// (0x00011aec) setting_code_pane_g1

0x6e04,	// (0x00011c21) setting_code_pane_t1

0x6e12,	// (0x00011c2f) set_text_pane_t1_ParamLimits

0x6e12,	// (0x00011c2f) set_text_pane_t1

0x7ced,	// (0x00012b0a) set_opt_bg_pane_g1

0x7cf5,	// (0x00012b12) set_opt_bg_pane_g2

0xa79a,	// (0x000155b7) set_opt_bg_pane_g3

0x7d05,	// (0x00012b22) set_opt_bg_pane_g4

0x7d0d,	// (0x00012b2a) set_opt_bg_pane_g5

0x7d15,	// (0x00012b32) set_opt_bg_pane_g6

0xa7a4,	// (0x000155c1) set_opt_bg_pane_g7

0xa7ac,	// (0x000155c9) set_opt_bg_pane_g8

0xa7b6,	// (0x000155d3) set_opt_bg_pane_g9

0x0008,

0xf974,	// (0x0001a791) set_opt_bg_pane_g

0xa78d,	// (0x000155aa) slider_set_pane_g1

0x5cf3,	// (0x00010b10) slider_set_pane_g2

0x0006,

0xf965,	// (0x0001a782) slider_set_pane_g

0x5c8f,	// (0x00010aac) volume_set_pane_g1

0x5c97,	// (0x00010ab4) volume_set_pane_g2

0x5c9f,	// (0x00010abc) volume_set_pane_g3

0x5ca7,	// (0x00010ac4) volume_set_pane_g4

0x5caf,	// (0x00010acc) volume_set_pane_g5

0x5cb7,	// (0x00010ad4) volume_set_pane_g6

0x5cbf,	// (0x00010adc) volume_set_pane_g7

0x5cc7,	// (0x00010ae4) volume_set_pane_g8

0x5ccf,	// (0x00010aec) volume_set_pane_g9

0x5cd7,	// (0x00010af4) volume_set_pane_g10

0x0009,

0xf93d,	// (0x0001a75a) volume_set_pane_g

0x6e2c,	// (0x00011c49) indicator_pane_ParamLimits

0x6e2c,	// (0x00011c49) indicator_pane

0x6e38,	// (0x00011c55) main_idle_pane_g2_ParamLimits

0x6e38,	// (0x00011c55) main_idle_pane_g2

0x6e60,	// (0x00011c7d) main_pane_idle_g1_ParamLimits

0x6e60,	// (0x00011c7d) main_pane_idle_g1

0x6e6d,	// (0x00011c8a) popup_clock_digital_analogue_window_ParamLimits

0x6e6d,	// (0x00011c8a) popup_clock_digital_analogue_window

0x6e84,	// (0x00011ca1) soft_indicator_pane_ParamLimits

0x6e84,	// (0x00011ca1) soft_indicator_pane

0x6e90,	// (0x00011cad) wallpaper_pane_ParamLimits

0x6e90,	// (0x00011cad) wallpaper_pane

0x6ccf,	// (0x00011aec) wallpaper_pane_g1

0x6ea4,	// (0x00011cc1) indicator_pane_g1_ParamLimits

0x6ea4,	// (0x00011cc1) indicator_pane_g1

0xac63,	// (0x00015a80) navi_navi_icon_text_pane_srt_g1

0x6ebf,	// (0x00011cdc) soft_indicator_pane_t1

0x6ed9,	// (0x00011cf6) aid_ps_area_pane

0x6eea,	// (0x00011d07) aid_ps_clock_pane

0x6ef8,	// (0x00011d15) aid_ps_indicator_pane

0x6f04,	// (0x00011d21) indicator_ps_pane_ParamLimits

0x6f04,	// (0x00011d21) indicator_ps_pane

0x6f13,	// (0x00011d30) power_save_pane_g1_ParamLimits

0x6f13,	// (0x00011d30) power_save_pane_g1

0x6f1f,	// (0x00011d3c) power_save_pane_g2_ParamLimits

0x6f1f,	// (0x00011d3c) power_save_pane_g2

0x494b,	// (0x0000f768) aid_navinavi_width_pane

0x6ed9,	// (0x00011cf6) aid_ps_area_pane_ParamLimits

0x0001,

0xf570,	// (0x0001a38d) power_save_pane_g_ParamLimits

0xf570,	// (0x0001a38d) power_save_pane_g

0x6f2d,	// (0x00011d4a) power_save_pane_t1_ParamLimits

0x6f2d,	// (0x00011d4a) power_save_pane_t1

0x6eea,	// (0x00011d07) aid_ps_clock_pane_ParamLimits

0x6ef8,	// (0x00011d15) aid_ps_indicator_pane_ParamLimits

0x6f3f,	// (0x00011d5c) power_save_pane_t4_ParamLimits

0x6f3f,	// (0x00011d5c) power_save_pane_t4

0x0001,

0xf575,	// (0x0001a392) power_save_pane_t_ParamLimits

0xf575,	// (0x0001a392) power_save_pane_t

0x6f69,	// (0x00011d86) power_save_t3_ParamLimits

0x6f69,	// (0x00011d86) power_save_t3

0x6f54,	// (0x00011d71) power_save_t2_ParamLimits

0x6f54,	// (0x00011d71) power_save_t2

0x6f7e,	// (0x00011d9b) indicator_ps_pane_g1

0x6f87,	// (0x00011da4) ai_gene_pane_ParamLimits

0x6f87,	// (0x00011da4) ai_gene_pane

0x6f93,	// (0x00011db0) ai_links_pane_ParamLimits

0x6f93,	// (0x00011db0) ai_links_pane

0x6f9f,	// (0x00011dbc) indicator_pane_cp1_ParamLimits

0x6f9f,	// (0x00011dbc) indicator_pane_cp1

0x6fab,	// (0x00011dc8) main_pane_idle_g1_cp_ParamLimits

0x6fab,	// (0x00011dc8) main_pane_idle_g1_cp

0x6fb7,	// (0x00011dd4) popup_ai_links_title_window

0x6fc0,	// (0x00011ddd) soft_indicator_pane_cp1_ParamLimits

0x6fc0,	// (0x00011ddd) soft_indicator_pane_cp1

0xa53e,	// (0x0001535b) ai_links_pane_g1

0xa547,	// (0x00015364) grid_ai_links_pane

0xa521,	// (0x0001533e) ai_gene_pane_1

0xa52c,	// (0x00015349) ai_gene_pane_2

0xa535,	// (0x00015352) list_highlight_pane_cp4

0xa505,	// (0x00015322) cell_ai_link_pane_ParamLimits

0xa505,	// (0x00015322) cell_ai_link_pane

0xa4fd,	// (0x0001531a) cell_ai_link_pane_g1

0x71f0,	// (0x0001200d) cell_ai_link_pane_g2

0x0001,

0xf918,	// (0x0001a735) cell_ai_link_pane_g

0x6cd9,	// (0x00011af6) grid_highlight_cp2

0x6cd9,	// (0x00011af6) bg_popup_sub_pane_cp1

0x6fda,	// (0x00011df7) popup_ai_links_title_window_t1

0xa44b,	// (0x00015268) ai_gene_pane_1_g1_ParamLimits

0xa44b,	// (0x00015268) ai_gene_pane_1_g1

0xa457,	// (0x00015274) ai_gene_pane_1_g2_ParamLimits

0xa457,	// (0x00015274) ai_gene_pane_1_g2

0x0001,

0xf90e,	// (0x0001a72b) ai_gene_pane_1_g_ParamLimits

0xf90e,	// (0x0001a72b) ai_gene_pane_1_g

0xa464,	// (0x00015281) ai_gene_pane_1_t1_ParamLimits

0xa464,	// (0x00015281) ai_gene_pane_1_t1

0xa498,	// (0x000152b5) grid_ai_soft_ind_pane

0xa436,	// (0x00015253) ai_gene_pane_2_t1_ParamLimits

0xa436,	// (0x00015253) ai_gene_pane_2_t1

0x6fe9,	// (0x00011e06) main_pane_empty_t1_ParamLimits

0x6fe9,	// (0x00011e06) main_pane_empty_t1

0x7001,	// (0x00011e1e) main_pane_empty_t2_ParamLimits

0x7001,	// (0x00011e1e) main_pane_empty_t2

0x7016,	// (0x00011e33) main_pane_empty_t3_ParamLimits

0x7016,	// (0x00011e33) main_pane_empty_t3

0x7028,	// (0x00011e45) main_pane_empty_t4_ParamLimits

0x7028,	// (0x00011e45) main_pane_empty_t4

0x703a,	// (0x00011e57) main_pane_empty_t5_ParamLimits

0x703a,	// (0x00011e57) main_pane_empty_t5

0x0004,

0xf57a,	// (0x0001a397) main_pane_empty_t_ParamLimits

0xf57a,	// (0x0001a397) main_pane_empty_t

0x7dea,	// (0x00012c07) bg_popup_window_pane_ParamLimits

0x7dea,	// (0x00012c07) bg_popup_window_pane

0xa1a6,	// (0x00014fc3) find_popup_pane_cp2_ParamLimits

0xa1a6,	// (0x00014fc3) find_popup_pane_cp2

0xa1b2,	// (0x00014fcf) heading_pane_ParamLimits

0xa1b2,	// (0x00014fcf) heading_pane

0x6cd9,	// (0x00011af6) bg_popup_sub_pane

0xa120,	// (0x00014f3d) bg_popup_window_pane_g1_ParamLimits

0xa120,	// (0x00014f3d) bg_popup_window_pane_g1

0xa12c,	// (0x00014f49) bg_popup_window_pane_g2_ParamLimits

0xa12c,	// (0x00014f49) bg_popup_window_pane_g2

0xa138,	// (0x00014f55) bg_popup_window_pane_g3_ParamLimits

0xa138,	// (0x00014f55) bg_popup_window_pane_g3

0xa144,	// (0x00014f61) bg_popup_window_pane_g4_ParamLimits

0xa144,	// (0x00014f61) bg_popup_window_pane_g4

0xa150,	// (0x00014f6d) bg_popup_window_pane_g5_ParamLimits

0xa150,	// (0x00014f6d) bg_popup_window_pane_g5

0xa15c,	// (0x00014f79) bg_popup_window_pane_g6_ParamLimits

0xa15c,	// (0x00014f79) bg_popup_window_pane_g6

0xa168,	// (0x00014f85) bg_popup_window_pane_g7_ParamLimits

0xa168,	// (0x00014f85) bg_popup_window_pane_g7

0xa174,	// (0x00014f91) bg_popup_window_pane_g8_ParamLimits

0xa174,	// (0x00014f91) bg_popup_window_pane_g8

0xa180,	// (0x00014f9d) bg_popup_window_pane_g9_ParamLimits

0xa180,	// (0x00014f9d) bg_popup_window_pane_g9

0xa18c,	// (0x00014fa9) bg_popup_window_pane_g10_ParamLimits

0xa18c,	// (0x00014fa9) bg_popup_window_pane_g10

0x0009,

0xf8d6,	// (0x0001a6f3) bg_popup_window_pane_g_ParamLimits

0xf8d6,	// (0x0001a6f3) bg_popup_window_pane_g

0xa0b5,	// (0x00014ed2) bg_popup_heading_pane_ParamLimits

0xa0b5,	// (0x00014ed2) bg_popup_heading_pane

0x5d7b,	// (0x00010b98) tabs_4_passive_pane_cp_srt_ParamLimits

0x5d7b,	// (0x00010b98) tabs_4_passive_pane_cp_srt

0x5d8d,	// (0x00010baa) tabs_4_passive_pane_srt_ParamLimits

0xa0c9,	// (0x00014ee6) heading_pane_g2

0x5d8d,	// (0x00010baa) tabs_4_passive_pane_srt

0x8d9e,	// (0x00013bbb) bg_passive_tab_pane_cp3_srt_ParamLimits

0x8d9e,	// (0x00013bbb) bg_passive_tab_pane_cp3_srt

0xa0d1,	// (0x00014eee) heading_pane_t1_ParamLimits

0xa0d1,	// (0x00014eee) heading_pane_t1

0xa0e8,	// (0x00014f05) heading_pane_t2_ParamLimits

0xa0e8,	// (0x00014f05) heading_pane_t2

0x0001,

0xf8d1,	// (0x0001a6ee) heading_pane_t_ParamLimits

0xf8d1,	// (0x0001a6ee) heading_pane_t

0x9bd6,	// (0x000149f3) bg_popup_heading_pane_g1

0x9c85,	// (0x00014aa2) bg_popup_heading_pane_g2

0x9c8f,	// (0x00014aac) bg_popup_heading_pane_g3

0x9c99,	// (0x00014ab6) bg_popup_heading_pane_g4

0x9ca3,	// (0x00014ac0) bg_popup_heading_pane_g5

0x9cad,	// (0x00014aca) bg_popup_heading_pane_g6

0x9cb5,	// (0x00014ad2) bg_popup_heading_pane_g7

0x9cbd,	// (0x00014ada) bg_popup_heading_pane_g8

0x9cc7,	// (0x00014ae4) bg_popup_heading_pane_g9

0x0008,

0xf88d,	// (0x0001a6aa) bg_popup_heading_pane_g

0x92cc,	// (0x000140e9) bg_popup_sub_pane_g1

0x92dc,	// (0x000140f9) bg_popup_sub_pane_g2

0x92d4,	// (0x000140f1) bg_popup_sub_pane_g3

0x92ec,	// (0x00014109) bg_popup_sub_pane_g4

0x92e4,	// (0x00014101) bg_popup_sub_pane_g5

0x92f4,	// (0x00014111) bg_popup_sub_pane_g6

0x92fc,	// (0x00014119) bg_popup_sub_pane_g7

0x930c,	// (0x00014129) bg_popup_sub_pane_g8

0x9304,	// (0x00014121) bg_popup_sub_pane_g9

0x0008,

0xf867,	// (0x0001a684) bg_popup_sub_pane_g

0x704e,	// (0x00011e6b) bg_popup_window_pane_cp5_ParamLimits

0x704e,	// (0x00011e6b) bg_popup_window_pane_cp5

0x706a,	// (0x00011e87) popup_note_window_g1_ParamLimits

0x706a,	// (0x00011e87) popup_note_window_g1

0x7076,	// (0x00011e93) popup_note_window_t1_ParamLimits

0x7076,	// (0x00011e93) popup_note_window_t1

0x708c,	// (0x00011ea9) popup_note_window_t2_ParamLimits

0x708c,	// (0x00011ea9) popup_note_window_t2

0x70a2,	// (0x00011ebf) popup_note_window_t3_ParamLimits

0x70a2,	// (0x00011ebf) popup_note_window_t3

0x70b8,	// (0x00011ed5) popup_note_window_t4_ParamLimits

0x70b8,	// (0x00011ed5) popup_note_window_t4

0x70e0,	// (0x00011efd) popup_note_window_t5_ParamLimits

0x70e0,	// (0x00011efd) popup_note_window_t5

0x0004,

0xf585,	// (0x0001a3a2) popup_note_window_t_ParamLimits

0xf585,	// (0x0001a3a2) popup_note_window_t

0x7104,	// (0x00011f21) bg_popup_window_pane_cp6_ParamLimits

0x7104,	// (0x00011f21) bg_popup_window_pane_cp6

0x9b52,	// (0x0001496f) popup_note_image_window_g1_ParamLimits

0x9b52,	// (0x0001496f) popup_note_image_window_g1

0x9b5e,	// (0x0001497b) popup_note_image_window_g2_ParamLimits

0x9b5e,	// (0x0001497b) popup_note_image_window_g2

0x0001,

0xf85b,	// (0x0001a678) popup_note_image_window_g_ParamLimits

0xf85b,	// (0x0001a678) popup_note_image_window_g

0x9b77,	// (0x00014994) popup_note_image_window_t1_ParamLimits

0x9b77,	// (0x00014994) popup_note_image_window_t1

0x9b90,	// (0x000149ad) popup_note_image_window_t2_ParamLimits

0x9b90,	// (0x000149ad) popup_note_image_window_t2

0x9ba9,	// (0x000149c6) popup_note_image_window_t3_ParamLimits

0x9ba9,	// (0x000149c6) popup_note_image_window_t3

0x0002,

0xf860,	// (0x0001a67d) popup_note_image_window_t_ParamLimits

0xf860,	// (0x0001a67d) popup_note_image_window_t

0x9a13,	// (0x00014830) bg_popup_window_pane_cp7_ParamLimits

0x9a13,	// (0x00014830) bg_popup_window_pane_cp7

0x9a43,	// (0x00014860) popup_note_wait_window_g1_ParamLimits

0x9a43,	// (0x00014860) popup_note_wait_window_g1

0x9a4f,	// (0x0001486c) popup_note_wait_window_g2_ParamLimits

0x9a4f,	// (0x0001486c) popup_note_wait_window_g2

0x0002,

0xf849,	// (0x0001a666) popup_note_wait_window_g_ParamLimits

0xf849,	// (0x0001a666) popup_note_wait_window_g

0x9a67,	// (0x00014884) popup_note_wait_window_t1_ParamLimits

0x9a67,	// (0x00014884) popup_note_wait_window_t1

0x9a8e,	// (0x000148ab) popup_note_wait_window_t2_ParamLimits

0x9a8e,	// (0x000148ab) popup_note_wait_window_t2

0x9aab,	// (0x000148c8) popup_note_wait_window_t3_ParamLimits

0x9aab,	// (0x000148c8) popup_note_wait_window_t3

0x9abe,	// (0x000148db) popup_note_wait_window_t4_ParamLimits

0x9abe,	// (0x000148db) popup_note_wait_window_t4

0x0004,

0xf850,	// (0x0001a66d) popup_note_wait_window_t_ParamLimits

0xf850,	// (0x0001a66d) popup_note_wait_window_t

0x9ae3,	// (0x00014900) wait_bar_pane_ParamLimits

0x9ae3,	// (0x00014900) wait_bar_pane

0x6cd9,	// (0x00011af6) wait_anim_pane

0x6cd9,	// (0x00011af6) wait_border_pane

0x6ccf,	// (0x00011aec) wait_anim_pane_g1

0x6ccf,	// (0x00011aec) wait_anim_pane_g2

0x0001,

0xf704,	// (0x0001a521) wait_anim_pane_g

0x99b7,	// (0x000147d4) wait_border_pane_g1

0x99c2,	// (0x000147df) wait_border_pane_g2

0x99cb,	// (0x000147e8) wait_border_pane_g3

0x0002,

0xf842,	// (0x0001a65f) wait_border_pane_g

0x9822,	// (0x0001463f) bg_popup_window_pane_cp16_ParamLimits

0x9822,	// (0x0001463f) bg_popup_window_pane_cp16

0x9922,	// (0x0001473f) indicator_popup_pane_cp4_ParamLimits

0x9922,	// (0x0001473f) indicator_popup_pane_cp4

0x9936,	// (0x00014753) popup_query_data_window_t1_ParamLimits

0x9936,	// (0x00014753) popup_query_data_window_t1

0x9948,	// (0x00014765) popup_query_data_window_t2_ParamLimits

0x9948,	// (0x00014765) popup_query_data_window_t2

0x9961,	// (0x0001477e) popup_query_data_window_t3_ParamLimits

0x9961,	// (0x0001477e) popup_query_data_window_t3

0x0002,

0xf83b,	// (0x0001a658) popup_query_data_window_t_ParamLimits

0xf83b,	// (0x0001a658) popup_query_data_window_t

0x997b,	// (0x00014798) query_popup_data_pane_ParamLimits

0x997b,	// (0x00014798) query_popup_data_pane

0x998f,	// (0x000147ac) query_popup_data_pane_cp1_ParamLimits

0x998f,	// (0x000147ac) query_popup_data_pane_cp1

0x9822,	// (0x0001463f) bg_popup_window_pane_cp10_ParamLimits

0x9822,	// (0x0001463f) bg_popup_window_pane_cp10

0x9854,	// (0x00014671) indicator_popup_pane_ParamLimits

0x9854,	// (0x00014671) indicator_popup_pane

0x9876,	// (0x00014693) popup_query_code_window_t1_ParamLimits

0x9876,	// (0x00014693) popup_query_code_window_t1

0x9890,	// (0x000146ad) popup_query_code_window_t2_ParamLimits

0x9890,	// (0x000146ad) popup_query_code_window_t2

0x98d9,	// (0x000146f6) popup_query_code_window_t3_ParamLimits

0x98d9,	// (0x000146f6) popup_query_code_window_t3

0x0002,

0xf834,	// (0x0001a651) popup_query_code_window_t_ParamLimits

0xf834,	// (0x0001a651) popup_query_code_window_t

0x9908,	// (0x00014725) query_popup_pane_ParamLimits

0x9908,	// (0x00014725) query_popup_pane

0x7104,	// (0x00011f21) bg_popup_window_pane_cp15_ParamLimits

0x7104,	// (0x00011f21) bg_popup_window_pane_cp15

0x7122,	// (0x00011f3f) indicator_popup_pane_cp1_ParamLimits

0x7122,	// (0x00011f3f) indicator_popup_pane_cp1

0x7135,	// (0x00011f52) indicator_popup_pane_cp2_ParamLimits

0x7135,	// (0x00011f52) indicator_popup_pane_cp2

0x7148,	// (0x00011f65) popup_query_data_code_window_g1_ParamLimits

0x7148,	// (0x00011f65) popup_query_data_code_window_g1

0x715b,	// (0x00011f78) popup_query_data_code_window_t1_ParamLimits

0x715b,	// (0x00011f78) popup_query_data_code_window_t1

0x716d,	// (0x00011f8a) popup_query_data_code_window_t2_ParamLimits

0x716d,	// (0x00011f8a) popup_query_data_code_window_t2

0x717f,	// (0x00011f9c) popup_query_data_code_window_t3_ParamLimits

0x717f,	// (0x00011f9c) popup_query_data_code_window_t3

0x7195,	// (0x00011fb2) popup_query_data_code_window_t4_ParamLimits

0x7195,	// (0x00011fb2) popup_query_data_code_window_t4

0x0003,

0xf590,	// (0x0001a3ad) popup_query_data_code_window_t_ParamLimits

0xf590,	// (0x0001a3ad) popup_query_data_code_window_t

0x5a3c,	// (0x00010859) list_single_midp_graphic_pane_g3

0x71ad,	// (0x00011fca) query_popup_data_pane_cp2_ParamLimits

0x71c0,	// (0x00011fdd) query_popup_pane_cp2_ParamLimits

0x71c0,	// (0x00011fdd) query_popup_pane_cp2

0x6cd9,	// (0x00011af6) bg_popup_window_pane_cp11

0x981a,	// (0x00014637) heading_pane_cp5

0x72a8,	// (0x000120c5) listscroll_popup_info_pane

0x6cd9,	// (0x00011af6) input_focus_pane_cp3

0x71d3,	// (0x00011ff0) query_popup_pane_t1

0x71e1,	// (0x00011ffe) list_popup_info_pane_ParamLimits

0x71e1,	// (0x00011ffe) list_popup_info_pane

0x71f0,	// (0x0001200d) listscroll_popup_info_pane_g1

0x71f8,	// (0x00012015) scroll_pane_cp7

0x7202,	// (0x0001201f) popup_info_list_pane_t1_ParamLimits

0x7202,	// (0x0001201f) popup_info_list_pane_t1

0x721c,	// (0x00012039) popup_info_list_pane_t2_ParamLimits

0x721c,	// (0x00012039) popup_info_list_pane_t2

0x0001,

0xf599,	// (0x0001a3b6) popup_info_list_pane_t_ParamLimits

0xf599,	// (0x0001a3b6) popup_info_list_pane_t

0x6cd9,	// (0x00011af6) bg_popup_window_pane_cp12

0xac7d,	// (0x00015a9a) find_popup_pane

0x6db9,	// (0x00011bd6) bg_popup_window_pane_cp3

0x7236,	// (0x00012053) heading_pane_cp3

0x7242,	// (0x0001205f) listscroll_popup_graphic_pane

0x6cd9,	// (0x00011af6) bg_popup_window_pane_cp4

0x729e,	// (0x000120bb) heading_pane_cp4

0x72a8,	// (0x000120c5) listscroll_popup_colour_pane

0x72b0,	// (0x000120cd) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x72b0,	// (0x000120cd) cell_large_graphic_colour_none_popup_pane

0x72c4,	// (0x000120e1) grid_large_graphic_colour_popup_pane_ParamLimits

0x72c4,	// (0x000120e1) grid_large_graphic_colour_popup_pane

0x72f0,	// (0x0001210d) listscroll_popup_colour_pane_g1_ParamLimits

0x72f0,	// (0x0001210d) listscroll_popup_colour_pane_g1

0x7307,	// (0x00012124) listscroll_popup_colour_pane_g2_ParamLimits

0x7307,	// (0x00012124) listscroll_popup_colour_pane_g2

0x731e,	// (0x0001213b) listscroll_popup_colour_pane_g3_ParamLimits

0x731e,	// (0x0001213b) listscroll_popup_colour_pane_g3

0x732e,	// (0x0001214b) listscroll_popup_colour_pane_g4_ParamLimits

0x732e,	// (0x0001214b) listscroll_popup_colour_pane_g4

0x0003,

0xf59e,	// (0x0001a3bb) listscroll_popup_colour_pane_g_ParamLimits

0xf59e,	// (0x0001a3bb) listscroll_popup_colour_pane_g

0x7342,	// (0x0001215f) scroll_pane_cp6_ParamLimits

0x7342,	// (0x0001215f) scroll_pane_cp6

0x7354,	// (0x00012171) cell_large_graphic_colour_popup_pane_ParamLimits

0x7354,	// (0x00012171) cell_large_graphic_colour_popup_pane

0x7373,	// (0x00012190) cell_large_graphic_colour_none_popup_pane_t1

0x6cd9,	// (0x00011af6) grid_highlight_pane_cp5

0x7382,	// (0x0001219f) cell_large_graphic_colour_popup_pane_g1

0x738a,	// (0x000121a7) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a7,	// (0x0001a3c4) cell_large_graphic_colour_popup_pane_g

0x7392,	// (0x000121af) cell_large_graphic_colour_popup_pane_g2_copy1

0x739b,	// (0x000121b8) grid_highlight_pane_cp4

0x73a3,	// (0x000121c0) bg_popup_window_pane_cp8_ParamLimits

0x73a3,	// (0x000121c0) bg_popup_window_pane_cp8

0x73be,	// (0x000121db) popup_snote_single_text_window_g1_ParamLimits

0x73be,	// (0x000121db) popup_snote_single_text_window_g1

0x73d0,	// (0x000121ed) popup_snote_single_text_window_t1_ParamLimits

0x73d0,	// (0x000121ed) popup_snote_single_text_window_t1

0x73e3,	// (0x00012200) popup_snote_single_text_window_t2_ParamLimits

0x73e3,	// (0x00012200) popup_snote_single_text_window_t2

0x73f6,	// (0x00012213) popup_snote_single_text_window_t3_ParamLimits

0x73f6,	// (0x00012213) popup_snote_single_text_window_t3

0x742f,	// (0x0001224c) popup_snote_single_text_window_t4_ParamLimits

0x742f,	// (0x0001224c) popup_snote_single_text_window_t4

0x7463,	// (0x00012280) popup_snote_single_text_window_t5_ParamLimits

0x7463,	// (0x00012280) popup_snote_single_text_window_t5

0x0004,

0xf5ac,	// (0x0001a3c9) popup_snote_single_text_window_t_ParamLimits

0xf5ac,	// (0x0001a3c9) popup_snote_single_text_window_t

0x7492,	// (0x000122af) bg_popup_window_pane_cp9_ParamLimits

0x7492,	// (0x000122af) bg_popup_window_pane_cp9

0x73be,	// (0x000121db) popup_snote_single_graphic_window_g1_ParamLimits

0x73be,	// (0x000121db) popup_snote_single_graphic_window_g1

0x74a0,	// (0x000122bd) popup_snote_single_graphic_window_g2_ParamLimits

0x74a0,	// (0x000122bd) popup_snote_single_graphic_window_g2

0x0001,

0xf5b7,	// (0x0001a3d4) popup_snote_single_graphic_window_g_ParamLimits

0xf5b7,	// (0x0001a3d4) popup_snote_single_graphic_window_g

0x74ac,	// (0x000122c9) popup_snote_single_graphic_window_t1_ParamLimits

0x74ac,	// (0x000122c9) popup_snote_single_graphic_window_t1

0x74bf,	// (0x000122dc) popup_snote_single_graphic_window_t2_ParamLimits

0x74bf,	// (0x000122dc) popup_snote_single_graphic_window_t2

0x74d2,	// (0x000122ef) popup_snote_single_graphic_window_t3_ParamLimits

0x74d2,	// (0x000122ef) popup_snote_single_graphic_window_t3

0x750b,	// (0x00012328) popup_snote_single_graphic_window_t4_ParamLimits

0x750b,	// (0x00012328) popup_snote_single_graphic_window_t4

0x753f,	// (0x0001235c) popup_snote_single_graphic_window_t5_ParamLimits

0x753f,	// (0x0001235c) popup_snote_single_graphic_window_t5

0x0004,

0xf5bc,	// (0x0001a3d9) popup_snote_single_graphic_window_t_ParamLimits

0xf5bc,	// (0x0001a3d9) popup_snote_single_graphic_window_t

0xabc1,	// (0x000159de) grid_graphic_popup_pane_ParamLimits

0xabc1,	// (0x000159de) grid_graphic_popup_pane

0xabe9,	// (0x00015a06) listscroll_popup_graphic_pane_g1_ParamLimits

0xabe9,	// (0x00015a06) listscroll_popup_graphic_pane_g1

0xabfd,	// (0x00015a1a) listscroll_popup_graphic_pane_g2_ParamLimits

0xabfd,	// (0x00015a1a) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b1,	// (0x0001a7ce) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b1,	// (0x0001a7ce) listscroll_popup_graphic_pane_g

0xac11,	// (0x00015a2e) scroll_pane_cp5

0xab6a,	// (0x00015987) cell_graphic_popup_pane_ParamLimits

0xab6a,	// (0x00015987) cell_graphic_popup_pane

0xab4b,	// (0x00015968) cell_graphic_popup_pane_g1

0xab53,	// (0x00015970) cell_graphic_popup_pane_g2

0x7392,	// (0x000121af) cell_graphic_popup_pane_g3

0x0002,

0xf9aa,	// (0x0001a7c7) cell_graphic_popup_pane_g

0xab5c,	// (0x00015979) cell_graphic_popup_pane_t2

0x739b,	// (0x000121b8) grid_highlight_pane_cp3

0x7580,	// (0x0001239d) list_gen_pane_ParamLimits

0x7580,	// (0x0001239d) list_gen_pane

0x75b2,	// (0x000123cf) scroll_pane

0xaaa3,	// (0x000158c0) bg_list_pane_g1_ParamLimits

0xaaa3,	// (0x000158c0) bg_list_pane_g1

0xaac0,	// (0x000158dd) bg_list_pane_g2_ParamLimits

0xaac0,	// (0x000158dd) bg_list_pane_g2

0xaad5,	// (0x000158f2) bg_list_pane_g3_ParamLimits

0xaad5,	// (0x000158f2) bg_list_pane_g3

0xaae9,	// (0x00015906) bg_list_pane_g4_ParamLimits

0xaae9,	// (0x00015906) bg_list_pane_g4

0xaafd,	// (0x0001591a) bg_list_pane_g5_ParamLimits

0xaafd,	// (0x0001591a) bg_list_pane_g5

0x0004,

0xf99f,	// (0x0001a7bc) bg_list_pane_g_ParamLimits

0xf99f,	// (0x0001a7bc) bg_list_pane_g

0xa9c4,	// (0x000157e1) list_double2_graphic_large_graphic_pane_ParamLimits

0xa9c4,	// (0x000157e1) list_double2_graphic_large_graphic_pane

0xa9c4,	// (0x000157e1) list_double2_graphic_pane_ParamLimits

0xa9c4,	// (0x000157e1) list_double2_graphic_pane

0xa9c4,	// (0x000157e1) list_double2_large_graphic_pane_ParamLimits

0xa9c4,	// (0x000157e1) list_double2_large_graphic_pane

0xa9c4,	// (0x000157e1) list_double2_pane_ParamLimits

0xa9c4,	// (0x000157e1) list_double2_pane

0xa9c4,	// (0x000157e1) list_double_graphic_heading_pane_ParamLimits

0xa9c4,	// (0x000157e1) list_double_graphic_heading_pane

0xa9c4,	// (0x000157e1) list_double_graphic_pane_ParamLimits

0xa9c4,	// (0x000157e1) list_double_graphic_pane

0xa9c4,	// (0x000157e1) list_double_heading_pane_ParamLimits

0xa9c4,	// (0x000157e1) list_double_heading_pane

0xa9c4,	// (0x000157e1) list_double_large_graphic_pane_ParamLimits

0xa9c4,	// (0x000157e1) list_double_large_graphic_pane

0xa9c4,	// (0x000157e1) list_double_number_pane_ParamLimits

0xa9c4,	// (0x000157e1) list_double_number_pane

0xa9c4,	// (0x000157e1) list_double_pane_ParamLimits

0xa9c4,	// (0x000157e1) list_double_pane

0xa9c4,	// (0x000157e1) list_double_time_pane_ParamLimits

0xa9c4,	// (0x000157e1) list_double_time_pane

0xa9c4,	// (0x000157e1) list_setting_number_pane_ParamLimits

0xa9c4,	// (0x000157e1) list_setting_number_pane

0xa9c4,	// (0x000157e1) list_setting_pane_ParamLimits

0xa9c4,	// (0x000157e1) list_setting_pane

0xaa0f,	// (0x0001582c) list_single_2graphic_pane_ParamLimits

0xaa0f,	// (0x0001582c) list_single_2graphic_pane

0xaa0f,	// (0x0001582c) list_single_graphic_heading_pane_ParamLimits

0xaa0f,	// (0x0001582c) list_single_graphic_heading_pane

0xaa0f,	// (0x0001582c) list_single_graphic_pane_ParamLimits

0xaa0f,	// (0x0001582c) list_single_graphic_pane

0xaa0f,	// (0x0001582c) list_single_heading_pane_ParamLimits

0xaa0f,	// (0x0001582c) list_single_heading_pane

0xaa84,	// (0x000158a1) list_single_large_graphic_pane_ParamLimits

0xaa84,	// (0x000158a1) list_single_large_graphic_pane

0xaa0f,	// (0x0001582c) list_single_number_heading_pane_ParamLimits

0xaa0f,	// (0x0001582c) list_single_number_heading_pane

0xaa0f,	// (0x0001582c) list_single_number_pane_ParamLimits

0xaa0f,	// (0x0001582c) list_single_number_pane

0xaa0f,	// (0x0001582c) list_single_pane_ParamLimits

0xaa0f,	// (0x0001582c) list_single_pane

0x6cd9,	// (0x00011af6) list_highlight_pane_cp1

0x75f2,	// (0x0001240f) list_single_pane_g1_ParamLimits

0x75f2,	// (0x0001240f) list_single_pane_g1

0x75fe,	// (0x0001241b) list_single_pane_g2_ParamLimits

0x75fe,	// (0x0001241b) list_single_pane_g2

0x0001,

0xf5ce,	// (0x0001a3eb) list_single_pane_g_ParamLimits

0xf5ce,	// (0x0001a3eb) list_single_pane_g

0xa97d,	// (0x0001579a) list_single_pane_t1_ParamLimits

0xa97d,	// (0x0001579a) list_single_pane_t1

0x75f2,	// (0x0001240f) list_single_number_pane_g1_ParamLimits

0x75f2,	// (0x0001240f) list_single_number_pane_g1

0x75fe,	// (0x0001241b) list_single_number_pane_g2_ParamLimits

0x75fe,	// (0x0001241b) list_single_number_pane_g2

0x0001,

0xf5ce,	// (0x0001a3eb) list_single_number_pane_g_ParamLimits

0xf5ce,	// (0x0001a3eb) list_single_number_pane_g

0xa709,	// (0x00015526) list_single_number_pane_t1_ParamLimits

0xa709,	// (0x00015526) list_single_number_pane_t1

0xa71f,	// (0x0001553c) list_single_number_pane_t2_ParamLimits

0xa71f,	// (0x0001553c) list_single_number_pane_t2

0x0001,

0xf960,	// (0x0001a77d) list_single_number_pane_t_ParamLimits

0xf960,	// (0x0001a77d) list_single_number_pane_t

0x75e6,	// (0x00012403) list_single_graphic_pane_g1_ParamLimits

0x75e6,	// (0x00012403) list_single_graphic_pane_g1

0x75f2,	// (0x0001240f) list_single_graphic_pane_g2_ParamLimits

0x75f2,	// (0x0001240f) list_single_graphic_pane_g2

0x75fe,	// (0x0001241b) list_single_graphic_pane_g3_ParamLimits

0x75fe,	// (0x0001241b) list_single_graphic_pane_g3

0x0002,

0xf5c7,	// (0x0001a3e4) list_single_graphic_pane_g_ParamLimits

0xf5c7,	// (0x0001a3e4) list_single_graphic_pane_g

0x760a,	// (0x00012427) list_single_graphic_pane_t1_ParamLimits

0x760a,	// (0x00012427) list_single_graphic_pane_t1

0x75f2,	// (0x0001240f) list_single_heading_pane_g1_ParamLimits

0x75f2,	// (0x0001240f) list_single_heading_pane_g1

0x75fe,	// (0x0001241b) list_single_heading_pane_g2_ParamLimits

0x75fe,	// (0x0001241b) list_single_heading_pane_g2

0x0001,

0xf5ce,	// (0x0001a3eb) list_single_heading_pane_g_ParamLimits

0xf5ce,	// (0x0001a3eb) list_single_heading_pane_g

0x7620,	// (0x0001243d) list_single_heading_pane_t1_ParamLimits

0x7620,	// (0x0001243d) list_single_heading_pane_t1

0x7636,	// (0x00012453) list_single_heading_pane_t2_ParamLimits

0x7636,	// (0x00012453) list_single_heading_pane_t2

0x0001,

0xf5d3,	// (0x0001a3f0) list_single_heading_pane_t_ParamLimits

0xf5d3,	// (0x0001a3f0) list_single_heading_pane_t

0x75f2,	// (0x0001240f) list_single_number_heading_pane_g1_ParamLimits

0x75f2,	// (0x0001240f) list_single_number_heading_pane_g1

0x75fe,	// (0x0001241b) list_single_number_heading_pane_g2_ParamLimits

0x75fe,	// (0x0001241b) list_single_number_heading_pane_g2

0x0001,

0xf5ce,	// (0x0001a3eb) list_single_number_heading_pane_g_ParamLimits

0xf5ce,	// (0x0001a3eb) list_single_number_heading_pane_g

0x7620,	// (0x0001243d) list_single_number_heading_pane_t1_ParamLimits

0x7620,	// (0x0001243d) list_single_number_heading_pane_t1

0x7648,	// (0x00012465) list_single_number_heading_pane_t2_ParamLimits

0x7648,	// (0x00012465) list_single_number_heading_pane_t2

0x765a,	// (0x00012477) list_single_number_heading_pane_t3_ParamLimits

0x765a,	// (0x00012477) list_single_number_heading_pane_t3

0x0002,

0xf5d8,	// (0x0001a3f5) list_single_number_heading_pane_t_ParamLimits

0xf5d8,	// (0x0001a3f5) list_single_number_heading_pane_t

0x766c,	// (0x00012489) list_single_graphic_heading_pane_g1_ParamLimits

0x766c,	// (0x00012489) list_single_graphic_heading_pane_g1

0x7678,	// (0x00012495) list_single_graphic_heading_pane_g4_ParamLimits

0x7678,	// (0x00012495) list_single_graphic_heading_pane_g4

0x75fe,	// (0x0001241b) list_single_graphic_heading_pane_g5_ParamLimits

0x75fe,	// (0x0001241b) list_single_graphic_heading_pane_g5

0x0002,

0xf5df,	// (0x0001a3fc) list_single_graphic_heading_pane_g_ParamLimits

0xf5df,	// (0x0001a3fc) list_single_graphic_heading_pane_g

0x7620,	// (0x0001243d) list_single_graphic_heading_pane_t1_ParamLimits

0x7620,	// (0x0001243d) list_single_graphic_heading_pane_t1

0x7689,	// (0x000124a6) list_single_graphic_heading_pane_t2_ParamLimits

0x7689,	// (0x000124a6) list_single_graphic_heading_pane_t2

0x0001,

0xf5e6,	// (0x0001a403) list_single_graphic_heading_pane_t_ParamLimits

0xf5e6,	// (0x0001a403) list_single_graphic_heading_pane_t

0x769b,	// (0x000124b8) list_single_large_graphic_pane_g1_ParamLimits

0x769b,	// (0x000124b8) list_single_large_graphic_pane_g1

0x76a7,	// (0x000124c4) list_single_large_graphic_pane_g2_ParamLimits

0x76a7,	// (0x000124c4) list_single_large_graphic_pane_g2

0x76b3,	// (0x000124d0) list_single_large_graphic_pane_g3_ParamLimits

0x76b3,	// (0x000124d0) list_single_large_graphic_pane_g3

0x0002,

0xf5eb,	// (0x0001a408) list_single_large_graphic_pane_g_ParamLimits

0xf5eb,	// (0x0001a408) list_single_large_graphic_pane_g

0x99c2,	// (0x000147df) wait_border_pane_g2_copy1

0x76bf,	// (0x000124dc) list_single_large_graphic_pane_g4_cp2

0x76c7,	// (0x000124e4) list_single_large_graphic_pane_t1_ParamLimits

0x76c7,	// (0x000124e4) list_single_large_graphic_pane_t1

0x76dd,	// (0x000124fa) list_double_pane_g1_ParamLimits

0x76dd,	// (0x000124fa) list_double_pane_g1

0x76e9,	// (0x00012506) list_double_pane_g2_ParamLimits

0x76e9,	// (0x00012506) list_double_pane_g2

0x0001,

0xf5f2,	// (0x0001a40f) list_double_pane_g_ParamLimits

0xf5f2,	// (0x0001a40f) list_double_pane_g

0x76f5,	// (0x00012512) list_double_pane_t1_ParamLimits

0x76f5,	// (0x00012512) list_double_pane_t1

0x770b,	// (0x00012528) list_double_pane_t2_ParamLimits

0x770b,	// (0x00012528) list_double_pane_t2

0x0001,

0xf5f7,	// (0x0001a414) list_double_pane_t_ParamLimits

0xf5f7,	// (0x0001a414) list_double_pane_t

0x771d,	// (0x0001253a) list_double2_pane_g1_ParamLimits

0x771d,	// (0x0001253a) list_double2_pane_g1

0x772e,	// (0x0001254b) list_double2_pane_g2_ParamLimits

0x772e,	// (0x0001254b) list_double2_pane_g2

0x0001,

0xf5fc,	// (0x0001a419) list_double2_pane_g_ParamLimits

0xf5fc,	// (0x0001a419) list_double2_pane_g

0x773a,	// (0x00012557) list_double2_pane_t1_ParamLimits

0x773a,	// (0x00012557) list_double2_pane_t1

0x7750,	// (0x0001256d) list_double2_pane_t2_ParamLimits

0x7750,	// (0x0001256d) list_double2_pane_t2

0x0001,

0xf601,	// (0x0001a41e) list_double2_pane_t_ParamLimits

0xf601,	// (0x0001a41e) list_double2_pane_t

0x76dd,	// (0x000124fa) list_double_number_pane_g1_ParamLimits

0x76dd,	// (0x000124fa) list_double_number_pane_g1

0x76e9,	// (0x00012506) list_double_number_pane_g2_ParamLimits

0x76e9,	// (0x00012506) list_double_number_pane_g2

0x0001,

0xf5f2,	// (0x0001a40f) list_double_number_pane_g_ParamLimits

0xf5f2,	// (0x0001a40f) list_double_number_pane_g

0x7762,	// (0x0001257f) list_double_number_pane_t1_ParamLimits

0x7762,	// (0x0001257f) list_double_number_pane_t1

0x7774,	// (0x00012591) list_double_number_pane_t2_ParamLimits

0x7774,	// (0x00012591) list_double_number_pane_t2

0x778a,	// (0x000125a7) list_double_number_pane_t3_ParamLimits

0x778a,	// (0x000125a7) list_double_number_pane_t3

0x0002,

0xf606,	// (0x0001a423) list_double_number_pane_t_ParamLimits

0xf606,	// (0x0001a423) list_double_number_pane_t

0x779c,	// (0x000125b9) list_double_graphic_pane_g1_ParamLimits

0x779c,	// (0x000125b9) list_double_graphic_pane_g1

0x77a8,	// (0x000125c5) list_double_graphic_pane_g2_ParamLimits

0x77a8,	// (0x000125c5) list_double_graphic_pane_g2

0x77b7,	// (0x000125d4) list_double_graphic_pane_g3_ParamLimits

0x77b7,	// (0x000125d4) list_double_graphic_pane_g3

0x0003,

0xf60d,	// (0x0001a42a) list_double_graphic_pane_g_ParamLimits

0xf60d,	// (0x0001a42a) list_double_graphic_pane_g

0x77cf,	// (0x000125ec) list_double_graphic_pane_t1_ParamLimits

0x77cf,	// (0x000125ec) list_double_graphic_pane_t1

0x77e5,	// (0x00012602) list_double_graphic_pane_t2_ParamLimits

0x77e5,	// (0x00012602) list_double_graphic_pane_t2

0x0001,

0xf616,	// (0x0001a433) list_double_graphic_pane_t_ParamLimits

0xf616,	// (0x0001a433) list_double_graphic_pane_t

0x77f7,	// (0x00012614) list_double2_graphic_pane_g1_ParamLimits

0x77f7,	// (0x00012614) list_double2_graphic_pane_g1

0x7803,	// (0x00012620) list_double2_graphic_pane_g2_ParamLimits

0x7803,	// (0x00012620) list_double2_graphic_pane_g2

0x772e,	// (0x0001254b) list_double2_graphic_pane_g3_ParamLimits

0x772e,	// (0x0001254b) list_double2_graphic_pane_g3

0x0002,

0xf61b,	// (0x0001a438) list_double2_graphic_pane_g_ParamLimits

0xf61b,	// (0x0001a438) list_double2_graphic_pane_g

0x780f,	// (0x0001262c) list_double2_graphic_pane_t1_ParamLimits

0x780f,	// (0x0001262c) list_double2_graphic_pane_t1

0x7825,	// (0x00012642) list_double2_graphic_pane_t2_ParamLimits

0x7825,	// (0x00012642) list_double2_graphic_pane_t2

0x0001,

0xf622,	// (0x0001a43f) list_double2_graphic_pane_t_ParamLimits

0xf622,	// (0x0001a43f) list_double2_graphic_pane_t

0x7837,	// (0x00012654) list_double_large_graphic_pane_g1_ParamLimits

0x7837,	// (0x00012654) list_double_large_graphic_pane_g1

0x7860,	// (0x0001267d) list_double_large_graphic_pane_g2_ParamLimits

0x7860,	// (0x0001267d) list_double_large_graphic_pane_g2

0x76e9,	// (0x00012506) list_double_large_graphic_pane_g3_ParamLimits

0x76e9,	// (0x00012506) list_double_large_graphic_pane_g3

0x7871,	// (0x0001268e) list_double_large_graphic_pane_g4_ParamLimits

0x7871,	// (0x0001268e) list_double_large_graphic_pane_g4

0x0004,

0xf627,	// (0x0001a444) list_double_large_graphic_pane_g_ParamLimits

0xf627,	// (0x0001a444) list_double_large_graphic_pane_g

0x7897,	// (0x000126b4) list_double_large_graphic_pane_t1_ParamLimits

0x7897,	// (0x000126b4) list_double_large_graphic_pane_t1

0x78b0,	// (0x000126cd) list_double_large_graphic_pane_t2_ParamLimits

0x78b0,	// (0x000126cd) list_double_large_graphic_pane_t2

0x0001,

0xf632,	// (0x0001a44f) list_double_large_graphic_pane_t_ParamLimits

0xf632,	// (0x0001a44f) list_double_large_graphic_pane_t

0x78c2,	// (0x000126df) list_double2_large_graphic_pane_g1_ParamLimits

0x78c2,	// (0x000126df) list_double2_large_graphic_pane_g1

0x771d,	// (0x0001253a) list_double2_large_graphic_pane_g2_ParamLimits

0x771d,	// (0x0001253a) list_double2_large_graphic_pane_g2

0x772e,	// (0x0001254b) list_double2_large_graphic_pane_g3_ParamLimits

0x772e,	// (0x0001254b) list_double2_large_graphic_pane_g3

0x0002,

0xf637,	// (0x0001a454) list_double2_large_graphic_pane_g_ParamLimits

0xf637,	// (0x0001a454) list_double2_large_graphic_pane_g

0x78ce,	// (0x000126eb) list_double2_large_graphic_pane_t1_ParamLimits

0x78ce,	// (0x000126eb) list_double2_large_graphic_pane_t1

0x78e4,	// (0x00012701) list_double2_large_graphic_pane_t2_ParamLimits

0x78e4,	// (0x00012701) list_double2_large_graphic_pane_t2

0x0001,

0xf63e,	// (0x0001a45b) list_double2_large_graphic_pane_t_ParamLimits

0xf63e,	// (0x0001a45b) list_double2_large_graphic_pane_t

0x78f6,	// (0x00012713) list_double_heading_pane_g1_ParamLimits

0x78f6,	// (0x00012713) list_double_heading_pane_g1

0x7907,	// (0x00012724) list_double_heading_pane_g2_ParamLimits

0x7907,	// (0x00012724) list_double_heading_pane_g2

0x0001,

0xf643,	// (0x0001a460) list_double_heading_pane_g_ParamLimits

0xf643,	// (0x0001a460) list_double_heading_pane_g

0x7913,	// (0x00012730) list_double_heading_pane_t1_ParamLimits

0x7913,	// (0x00012730) list_double_heading_pane_t1

0x7929,	// (0x00012746) list_double_heading_pane_t2_ParamLimits

0x7929,	// (0x00012746) list_double_heading_pane_t2

0x0001,

0xf648,	// (0x0001a465) list_double_heading_pane_t_ParamLimits

0xf648,	// (0x0001a465) list_double_heading_pane_t

0x793b,	// (0x00012758) list_double_graphic_heading_pane_g1_ParamLimits

0x793b,	// (0x00012758) list_double_graphic_heading_pane_g1

0x78f6,	// (0x00012713) list_double_graphic_heading_pane_g2_ParamLimits

0x78f6,	// (0x00012713) list_double_graphic_heading_pane_g2

0x7907,	// (0x00012724) list_double_graphic_heading_pane_g3_ParamLimits

0x7907,	// (0x00012724) list_double_graphic_heading_pane_g3

0x0002,

0xf64d,	// (0x0001a46a) list_double_graphic_heading_pane_g_ParamLimits

0xf64d,	// (0x0001a46a) list_double_graphic_heading_pane_g

0x7947,	// (0x00012764) list_double_graphic_heading_pane_t1_ParamLimits

0x7947,	// (0x00012764) list_double_graphic_heading_pane_t1

0x795d,	// (0x0001277a) list_double_graphic_heading_pane_t2_ParamLimits

0x795d,	// (0x0001277a) list_double_graphic_heading_pane_t2

0x0001,

0xf654,	// (0x0001a471) list_double_graphic_heading_pane_t_ParamLimits

0xf654,	// (0x0001a471) list_double_graphic_heading_pane_t

0x7860,	// (0x0001267d) list_double_time_pane_g1_ParamLimits

0x7860,	// (0x0001267d) list_double_time_pane_g1

0x76e9,	// (0x00012506) list_double_time_pane_g2_ParamLimits

0x76e9,	// (0x00012506) list_double_time_pane_g2

0x0001,

0xf659,	// (0x0001a476) list_double_time_pane_g_ParamLimits

0xf659,	// (0x0001a476) list_double_time_pane_g

0x796f,	// (0x0001278c) list_double_time_pane_t1_ParamLimits

0x796f,	// (0x0001278c) list_double_time_pane_t1

0x7985,	// (0x000127a2) list_double_time_pane_t2_ParamLimits

0x7985,	// (0x000127a2) list_double_time_pane_t2

0x7997,	// (0x000127b4) list_double_time_pane_t3_ParamLimits

0x7997,	// (0x000127b4) list_double_time_pane_t3

0x79a9,	// (0x000127c6) list_double_time_pane_t4_ParamLimits

0x79a9,	// (0x000127c6) list_double_time_pane_t4

0x0003,

0xf65e,	// (0x0001a47b) list_double_time_pane_t_ParamLimits

0xf65e,	// (0x0001a47b) list_double_time_pane_t

0x7803,	// (0x00012620) list_setting_pane_g1_ParamLimits

0x7803,	// (0x00012620) list_setting_pane_g1

0x772e,	// (0x0001254b) list_setting_pane_g2_ParamLimits

0x772e,	// (0x0001254b) list_setting_pane_g2

0x0001,

0xf667,	// (0x0001a484) list_setting_pane_g_ParamLimits

0xf667,	// (0x0001a484) list_setting_pane_g

0x79bb,	// (0x000127d8) list_setting_pane_t1_ParamLimits

0x79bb,	// (0x000127d8) list_setting_pane_t1

0x79d2,	// (0x000127ef) list_setting_pane_t2_ParamLimits

0x79d2,	// (0x000127ef) list_setting_pane_t2

0x0002,

0xf66c,	// (0x0001a489) list_setting_pane_t_ParamLimits

0xf66c,	// (0x0001a489) list_setting_pane_t

0x7a11,	// (0x0001282e) set_value_pane_cp_ParamLimits

0x7a11,	// (0x0001282e) set_value_pane_cp

0x7803,	// (0x00012620) list_setting_number_pane_g1_ParamLimits

0x7803,	// (0x00012620) list_setting_number_pane_g1

0x772e,	// (0x0001254b) list_setting_number_pane_g2_ParamLimits

0x772e,	// (0x0001254b) list_setting_number_pane_g2

0x0001,

0xf667,	// (0x0001a484) list_setting_number_pane_g_ParamLimits

0xf667,	// (0x0001a484) list_setting_number_pane_g

0x7a1d,	// (0x0001283a) list_setting_number_pane_t1_ParamLimits

0x7a1d,	// (0x0001283a) list_setting_number_pane_t1

0x7a31,	// (0x0001284e) list_setting_number_pane_t2_ParamLimits

0x7a31,	// (0x0001284e) list_setting_number_pane_t2

0x7a48,	// (0x00012865) list_setting_number_pane_t3_ParamLimits

0x7a48,	// (0x00012865) list_setting_number_pane_t3

0x0003,

0xf673,	// (0x0001a490) list_setting_number_pane_t_ParamLimits

0xf673,	// (0x0001a490) list_setting_number_pane_t

0x7a11,	// (0x0001282e) set_value_pane_ParamLimits

0x7a11,	// (0x0001282e) set_value_pane

0x7a8b,	// (0x000128a8) bg_set_opt_pane_ParamLimits

0x7a8b,	// (0x000128a8) bg_set_opt_pane

0x7aac,	// (0x000128c9) set_value_pane_t1

0x7aba,	// (0x000128d7) slider_set_pane_cp3

0x7ac3,	// (0x000128e0) volume_small_pane_cp

0x7acc,	// (0x000128e9) list_form_gen_pane

0x7ad5,	// (0x000128f2) scroll_pane_cp8

0x7aee,	// (0x0001290b) form_field_data_pane_ParamLimits

0x7aee,	// (0x0001290b) form_field_data_pane

0x7b10,	// (0x0001292d) form_field_data_wide_pane_ParamLimits

0x7b10,	// (0x0001292d) form_field_data_wide_pane

0x7b33,	// (0x00012950) form_field_popup_pane_ParamLimits

0x7b33,	// (0x00012950) form_field_popup_pane

0x7b53,	// (0x00012970) form_field_popup_wide_pane_ParamLimits

0x7b53,	// (0x00012970) form_field_popup_wide_pane

0x7b70,	// (0x0001298d) form_field_slider_pane_ParamLimits

0x7b70,	// (0x0001298d) form_field_slider_pane

0x7b83,	// (0x000129a0) form_field_slider_wide_pane_ParamLimits

0x7b83,	// (0x000129a0) form_field_slider_wide_pane

0x7b96,	// (0x000129b3) data_form_pane

0x7bac,	// (0x000129c9) form_field_data_pane_t1

0x7bc4,	// (0x000129e1) input_focus_pane

0x7bd2,	// (0x000129ef) data_form_wide_pane

0x7bfe,	// (0x00012a1b) form_field_data_wide_pane_t1

0x73b0,	// (0x000121cd) input_focus_pane_cp6

0x7c1d,	// (0x00012a3a) form_field_popup_pane_t1

0x7bc4,	// (0x000129e1) input_focus_pane_cp7

0x7c35,	// (0x00012a52) list_form_pane

0x7c49,	// (0x00012a66) form_field_popup_wide_pane_t1

0x7bc4,	// (0x000129e1) input_focus_pane_cp8

0x7c5e,	// (0x00012a7b) list_form_wide_pane

0x7c75,	// (0x00012a92) form_field_slider_pane_t1_ParamLimits

0x7c75,	// (0x00012a92) form_field_slider_pane_t1

0x7c87,	// (0x00012aa4) form_field_slider_pane_t2_ParamLimits

0x7c87,	// (0x00012aa4) form_field_slider_pane_t2

0x0001,

0xf683,	// (0x0001a4a0) form_field_slider_pane_t_ParamLimits

0xf683,	// (0x0001a4a0) form_field_slider_pane_t

0x704e,	// (0x00011e6b) input_focus_pane_cp9_ParamLimits

0x704e,	// (0x00011e6b) input_focus_pane_cp9

0x7c99,	// (0x00012ab6) slider_cont_pane_ParamLimits

0x7c99,	// (0x00012ab6) slider_cont_pane

0x7cad,	// (0x00012aca) form_field_slider_wide_pane_t1_ParamLimits

0x7cad,	// (0x00012aca) form_field_slider_wide_pane_t1

0x7cbf,	// (0x00012adc) form_field_slider_wide_pane_t2_ParamLimits

0x7cbf,	// (0x00012adc) form_field_slider_wide_pane_t2

0x0001,

0xf688,	// (0x0001a4a5) form_field_slider_wide_pane_t_ParamLimits

0xf688,	// (0x0001a4a5) form_field_slider_wide_pane_t

0x704e,	// (0x00011e6b) input_focus_pane_cp10_ParamLimits

0x704e,	// (0x00011e6b) input_focus_pane_cp10

0x7cd1,	// (0x00012aee) slider_cont_pane_cp1_ParamLimits

0x7cd1,	// (0x00012aee) slider_cont_pane_cp1

0x7ce5,	// (0x00012b02) slider_form_pane_cp

0x7ced,	// (0x00012b0a) input_focus_pane_g1

0x7cf5,	// (0x00012b12) input_focus_pane_g2

0x7cfd,	// (0x00012b1a) input_focus_pane_g3

0x7d05,	// (0x00012b22) input_focus_pane_g4

0x7d0d,	// (0x00012b2a) input_focus_pane_g5

0x7d15,	// (0x00012b32) input_focus_pane_g6

0x7d1d,	// (0x00012b3a) input_focus_pane_g7

0x7d25,	// (0x00012b42) input_focus_pane_g8

0x7d2d,	// (0x00012b4a) input_focus_pane_g9

0x6ccf,	// (0x00011aec) input_focus_pane_g10

0x0009,

0xf68d,	// (0x0001a4aa) input_focus_pane_g

0x99cb,	// (0x000147e8) wait_border_pane_g3_copy1

0x7d35,	// (0x00012b52) data_form_pane_t1

0x6ccf,	// (0x00011aec) wait_anim_pane_g1_copy1

0xa960,	// (0x0001577d) data_form_wide_pane_t1

0x7d50,	// (0x00012b6d) list_form_graphic_pane_cp_ParamLimits

0x7d50,	// (0x00012b6d) list_form_graphic_pane_cp

0xa935,	// (0x00015752) slider_form_pane_g1

0xa93e,	// (0x0001575b) slider_form_pane_g2

0x0006,

0xf990,	// (0x0001a7ad) slider_form_pane_g

0x7d69,	// (0x00012b86) list_form_graphic_pane_ParamLimits

0x7d69,	// (0x00012b86) list_form_graphic_pane

0x7d85,	// (0x00012ba2) list_form_graphic_pane_g1

0x7d8d,	// (0x00012baa) list_form_graphic_pane_t1_ParamLimits

0x7d8d,	// (0x00012baa) list_form_graphic_pane_t1

0x6db9,	// (0x00011bd6) list_highlight_pane_cp5_ParamLimits

0x6db9,	// (0x00011bd6) list_highlight_pane_cp5

0x7da2,	// (0x00012bbf) find_pane_g1

0x7dab,	// (0x00012bc8) input_find_pane

0x7db4,	// (0x00012bd1) input_find_pane_g1_ParamLimits

0x7db4,	// (0x00012bd1) input_find_pane_g1

0x7dc0,	// (0x00012bdd) input_find_pane_t1_ParamLimits

0x7dc0,	// (0x00012bdd) input_find_pane_t1

0x7dd5,	// (0x00012bf2) input_find_pane_t2_ParamLimits

0x7dd5,	// (0x00012bf2) input_find_pane_t2

0x0001,

0xf6a2,	// (0x0001a4bf) input_find_pane_t_ParamLimits

0xf6a2,	// (0x0001a4bf) input_find_pane_t

0x7dea,	// (0x00012c07) input_focus_pane_cp5_ParamLimits

0x7dea,	// (0x00012c07) input_focus_pane_cp5

0x7e04,	// (0x00012c21) bg_popup_window_pane_cp2_ParamLimits

0x7e04,	// (0x00012c21) bg_popup_window_pane_cp2

0x7e11,	// (0x00012c2e) listscroll_menu_pane_ParamLimits

0x7e11,	// (0x00012c2e) listscroll_menu_pane

0x7e1d,	// (0x00012c3a) popup_submenu_window_ParamLimits

0x7e1d,	// (0x00012c3a) popup_submenu_window

0x7e49,	// (0x00012c66) find_popup_pane_g1

0x7e51,	// (0x00012c6e) input_popup_find_pane_cp

0x7dea,	// (0x00012c07) input_focus_pane_cp4_ParamLimits

0x7dea,	// (0x00012c07) input_focus_pane_cp4

0x7e67,	// (0x00012c84) input_popup_find_pane_t1_ParamLimits

0x7e67,	// (0x00012c84) input_popup_find_pane_t1

0x6cd9,	// (0x00011af6) bg_popup_sub_pane_cp

0x7e95,	// (0x00012cb2) listscroll_popup_sub_pane

0x7e9d,	// (0x00012cba) list_submenu_pane_ParamLimits

0x7e9d,	// (0x00012cba) list_submenu_pane

0x7eae,	// (0x00012ccb) scroll_pane_cp4

0x7eb6,	// (0x00012cd3) list_single_popup_submenu_pane_ParamLimits

0x7eb6,	// (0x00012cd3) list_single_popup_submenu_pane

0x7eca,	// (0x00012ce7) list_single_popup_submenu_pane_g1

0x7ed2,	// (0x00012cef) list_single_popup_submenu_pane_t1_ParamLimits

0x7ed2,	// (0x00012cef) list_single_popup_submenu_pane_t1

0x6db9,	// (0x00011bd6) bg_active_tab_pane_cp1_ParamLimits

0x6db9,	// (0x00011bd6) bg_active_tab_pane_cp1

0x7ee7,	// (0x00012d04) tabs_2_active_pane_g1

0x7eef,	// (0x00012d0c) tabs_2_active_pane_t1

0x6db9,	// (0x00011bd6) bg_passive_tab_pane_cp1_ParamLimits

0x6db9,	// (0x00011bd6) bg_passive_tab_pane_cp1

0x7ee7,	// (0x00012d04) tabs_2_passive_pane_g1

0x7eef,	// (0x00012d0c) tabs_2_passive_pane_t1

0x7f01,	// (0x00012d1e) bg_active_tab_pane_cp4

0x7f0f,	// (0x00012d2c) tabs_2_long_active_pane_t1

0x7f22,	// (0x00012d3f) bg_passive_tab_pane_cp4

0x5a44,	// (0x00010861) list_single_midp_graphic_pane_g4_ParamLimits

0x7f01,	// (0x00012d1e) bg_active_tab_pane_cp5

0x7f2e,	// (0x00012d4b) tabs_3_long_active_pane_t1

0x7f22,	// (0x00012d3f) bg_passive_tab_pane_cp5

0x5a44,	// (0x00010861) list_single_midp_graphic_pane_g4

0x6db9,	// (0x00011bd6) bg_popup_window_pane_cp13_ParamLimits

0x6db9,	// (0x00011bd6) bg_popup_window_pane_cp13

0x7f49,	// (0x00012d66) listscroll_popup_fast_pane_ParamLimits

0x7f49,	// (0x00012d66) listscroll_popup_fast_pane

0x7f58,	// (0x00012d75) grid_popup_fast_pane_ParamLimits

0x7f58,	// (0x00012d75) grid_popup_fast_pane

0x7f6a,	// (0x00012d87) scroll_pane_cp9_ParamLimits

0x7f6a,	// (0x00012d87) scroll_pane_cp9

0xc7f1,	// (0x0001760e) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc7f1,	// (0x0001760e) list_single_graphic_hl_pane_t1_cp2

0x7f8e,	// (0x00012dab) input_focus_pane_cp20_ParamLimits

0x7f8e,	// (0x00012dab) input_focus_pane_cp20

0x7f9c,	// (0x00012db9) query_popup_data_pane_t1_ParamLimits

0x7f9c,	// (0x00012db9) query_popup_data_pane_t1

0x7faf,	// (0x00012dcc) query_popup_data_pane_t2_ParamLimits

0x7faf,	// (0x00012dcc) query_popup_data_pane_t2

0x7ff5,	// (0x00012e12) query_popup_data_pane_t3_ParamLimits

0x7ff5,	// (0x00012e12) query_popup_data_pane_t3

0x8036,	// (0x00012e53) query_popup_data_pane_t4_ParamLimits

0x8036,	// (0x00012e53) query_popup_data_pane_t4

0x8072,	// (0x00012e8f) query_popup_data_pane_t5_ParamLimits

0x8072,	// (0x00012e8f) query_popup_data_pane_t5

0x0004,

0xf6a7,	// (0x0001a4c4) query_popup_data_pane_t_ParamLimits

0xf6a7,	// (0x0001a4c4) query_popup_data_pane_t

0x7ced,	// (0x00012b0a) bg_set_opt_pane_g1

0x7cf5,	// (0x00012b12) bg_set_opt_pane_g2

0x7cfd,	// (0x00012b1a) bg_set_opt_pane_g3

0x7d05,	// (0x00012b22) bg_set_opt_pane_g4

0x7d0d,	// (0x00012b2a) bg_set_opt_pane_g5

0x7d15,	// (0x00012b32) bg_set_opt_pane_g6

0x7d1d,	// (0x00012b3a) bg_set_opt_pane_g7

0x7d25,	// (0x00012b42) bg_set_opt_pane_g8

0x7d2d,	// (0x00012b4a) bg_set_opt_pane_g9

0x0008,

0xf6b2,	// (0x0001a4cf) bg_set_opt_pane_g

0x5068,	// (0x0000fe85) control_top_pane_stacon_ParamLimits

0x5068,	// (0x0000fe85) control_top_pane_stacon

0x50bb,	// (0x0000fed8) signal_pane_stacon_ParamLimits

0x50bb,	// (0x0000fed8) signal_pane_stacon

0x86ef,	// (0x0001350c) stacon_top_pane_g1_ParamLimits

0x86ef,	// (0x0001350c) stacon_top_pane_g1

0x50e0,	// (0x0000fefd) title_pane_stacon_ParamLimits

0x50e0,	// (0x0000fefd) title_pane_stacon

0x510a,	// (0x0000ff27) uni_indicator_pane_stacon_ParamLimits

0x510a,	// (0x0000ff27) uni_indicator_pane_stacon

0x511f,	// (0x0000ff3c) battery_pane_stacon_ParamLimits

0x511f,	// (0x0000ff3c) battery_pane_stacon

0x5163,	// (0x0000ff80) control_bottom_pane_stacon_ParamLimits

0x5163,	// (0x0000ff80) control_bottom_pane_stacon

0x5186,	// (0x0000ffa3) navi_pane_stacon_ParamLimits

0x5186,	// (0x0000ffa3) navi_pane_stacon

0x8711,	// (0x0001352e) stacon_bottom_pane_g1_ParamLimits

0x8711,	// (0x0001352e) stacon_bottom_pane_g1

0x4dcb,	// (0x0000fbe8) aid_levels_signal_lsc_ParamLimits

0x4dcb,	// (0x0000fbe8) aid_levels_signal_lsc

0x4de1,	// (0x0000fbfe) signal_pane_stacon_g1_ParamLimits

0x4de1,	// (0x0000fbfe) signal_pane_stacon_g1

0x4df5,	// (0x0000fc12) signal_pane_stacon_g2_ParamLimits

0x4df5,	// (0x0000fc12) signal_pane_stacon_g2

0x0001,

0xf6c5,	// (0x0001a4e2) signal_pane_stacon_g_ParamLimits

0xf6c5,	// (0x0001a4e2) signal_pane_stacon_g

0x4e2a,	// (0x0000fc47) title_pane_stacon_t1_ParamLimits

0x4e2a,	// (0x0000fc47) title_pane_stacon_t1

0x80b6,	// (0x00012ed3) uni_indicator_pane_stacon_g1

0x80c0,	// (0x00012edd) uni_indicator_pane_stacon_g2

0x80ca,	// (0x00012ee7) uni_indicator_pane_stacon_g3

0x80d4,	// (0x00012ef1) uni_indicator_pane_stacon_g4

0x0003,

0xf6d1,	// (0x0001a4ee) uni_indicator_pane_stacon_g

0x4e4f,	// (0x0000fc6c) control_top_pane_stacon_g1

0x4e57,	// (0x0000fc74) control_top_pane_stacon_t1_ParamLimits

0x4e57,	// (0x0000fc74) control_top_pane_stacon_t1

0x4e8e,	// (0x0000fcab) aid_levels_battery_lsc_ParamLimits

0x4e8e,	// (0x0000fcab) aid_levels_battery_lsc

0x4ea5,	// (0x0000fcc2) battery_pane_stacon_g1_ParamLimits

0x4ea5,	// (0x0000fcc2) battery_pane_stacon_g1

0x4eb8,	// (0x0000fcd5) battery_pane_stacon_g2_ParamLimits

0x4eb8,	// (0x0000fcd5) battery_pane_stacon_g2

0x0001,

0xf6da,	// (0x0001a4f7) battery_pane_stacon_g_ParamLimits

0xf6da,	// (0x0001a4f7) battery_pane_stacon_g

0x4ef6,	// (0x0000fd13) navi_icon_pane_stacon

0x4f0a,	// (0x0000fd27) navi_navi_pane_stacon

0x4ef6,	// (0x0000fd13) navi_text_pane_stacon

0x4e4f,	// (0x0000fc6c) control_bottom_pane_stacon_g1

0x4f1e,	// (0x0000fd3b) control_bottom_pane_stacon_t1_ParamLimits

0x4f1e,	// (0x0000fd3b) control_bottom_pane_stacon_t1

0x80f8,	// (0x00012f15) grid_app_pane_ParamLimits

0x80f8,	// (0x00012f15) grid_app_pane

0x811c,	// (0x00012f39) scroll_pane_cp15_ParamLimits

0x811c,	// (0x00012f39) scroll_pane_cp15

0x8131,	// (0x00012f4e) cell_app_pane_ParamLimits

0x8131,	// (0x00012f4e) cell_app_pane

0x8155,	// (0x00012f72) cell_app_pane_g1_ParamLimits

0x8155,	// (0x00012f72) cell_app_pane_g1

0x8175,	// (0x00012f92) cell_app_pane_g2_ParamLimits

0x8175,	// (0x00012f92) cell_app_pane_g2

0x0001,

0xf6df,	// (0x0001a4fc) cell_app_pane_g_ParamLimits

0xf6df,	// (0x0001a4fc) cell_app_pane_g

0x8181,	// (0x00012f9e) cell_app_pane_t1_ParamLimits

0x8181,	// (0x00012f9e) cell_app_pane_t1

0x8198,	// (0x00012fb5) grid_highlight_pane_ParamLimits

0x8198,	// (0x00012fb5) grid_highlight_pane

0x7ced,	// (0x00012b0a) cell_highlight_pane_g1

0x7cf5,	// (0x00012b12) cell_highlight_pane_g2

0x7cfd,	// (0x00012b1a) cell_highlight_pane_g3

0x7d05,	// (0x00012b22) cell_highlight_pane_g4

0x7d0d,	// (0x00012b2a) cell_highlight_pane_g5

0x7d15,	// (0x00012b32) cell_highlight_pane_g6

0x7d1d,	// (0x00012b3a) cell_highlight_pane_g7

0x7d25,	// (0x00012b42) cell_highlight_pane_g8

0x7d2d,	// (0x00012b4a) cell_highlight_pane_g9

0x6ccf,	// (0x00011aec) cell_highlight_pane_g10

0x0009,

0xf68d,	// (0x0001a4aa) cell_highlight_pane_g

0x81a9,	// (0x00012fc6) bg_scroll_pane

0x4f68,	// (0x0000fd85) scroll_handle_pane

0x81f0,	// (0x0001300d) scroll_bg_pane_g1

0x8205,	// (0x00013022) scroll_bg_pane_g2

0x821d,	// (0x0001303a) scroll_bg_pane_g3

0x0002,

0xf6e4,	// (0x0001a501) scroll_bg_pane_g

0x8232,	// (0x0001304f) scroll_handle_focus_pane_ParamLimits

0x8232,	// (0x0001304f) scroll_handle_focus_pane

0x81f0,	// (0x0001300d) scroll_handle_pane_g1

0x823f,	// (0x0001305c) scroll_handle_pane_g2

0x821d,	// (0x0001303a) scroll_handle_pane_g3

0x0002,

0xf6eb,	// (0x0001a508) scroll_handle_pane_g

0x7dea,	// (0x00012c07) bg_popup_sub_pane_cp21_ParamLimits

0x7dea,	// (0x00012c07) bg_popup_sub_pane_cp21

0x8253,	// (0x00013070) popup_fep_japan_predictive_window_t1_ParamLimits

0x8253,	// (0x00013070) popup_fep_japan_predictive_window_t1

0x826d,	// (0x0001308a) popup_fep_japan_predictive_window_t2_ParamLimits

0x826d,	// (0x0001308a) popup_fep_japan_predictive_window_t2

0x82a0,	// (0x000130bd) popup_fep_japan_predictive_window_t3_ParamLimits

0x82a0,	// (0x000130bd) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f2,	// (0x0001a50f) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f2,	// (0x0001a50f) popup_fep_japan_predictive_window_t

0x6cd9,	// (0x00011af6) bg_popup_sub_pane_cp23

0x82d7,	// (0x000130f4) listscroll_japin_cand_pane

0x82df,	// (0x000130fc) popup_fep_japan_candidate_window_t1

0x82ed,	// (0x0001310a) candidate_pane_ParamLimits

0x82ed,	// (0x0001310a) candidate_pane

0x82ff,	// (0x0001311c) scroll_pane_cp30

0x8307,	// (0x00013124) list_single_popup_jap_candidate_pane_ParamLimits

0x8307,	// (0x00013124) list_single_popup_jap_candidate_pane

0x6cd9,	// (0x00011af6) list_highlight_pane_cp30

0x831c,	// (0x00013139) list_single_popup_jap_candidate_pane_t1

0x832b,	// (0x00013148) level_1_signal

0x833d,	// (0x0001315a) level_2_signal

0x8350,	// (0x0001316d) level_3_signal

0x8363,	// (0x00013180) level_4_signal

0x8376,	// (0x00013193) level_5_signal

0x8389,	// (0x000131a6) level_6_signal

0x839c,	// (0x000131b9) level_7_signal

0x832b,	// (0x00013148) level_1_battery

0x833d,	// (0x0001315a) level_2_battery

0x8350,	// (0x0001316d) level_3_battery

0x8363,	// (0x00013180) level_4_battery

0x8376,	// (0x00013193) level_5_battery

0x8389,	// (0x000131a6) level_6_battery

0x839c,	// (0x000131b9) level_7_battery

0x83c7,	// (0x000131e4) list_menu_pane_ParamLimits

0x83c7,	// (0x000131e4) list_menu_pane

0x83dd,	// (0x000131fa) scroll_pane_cp25_ParamLimits

0x83dd,	// (0x000131fa) scroll_pane_cp25

0x83f6,	// (0x00013213) list_double2_graphic_pane_cp2_ParamLimits

0x83f6,	// (0x00013213) list_double2_graphic_pane_cp2

0x83f6,	// (0x00013213) list_double2_large_graphic_pane_cp2_ParamLimits

0x83f6,	// (0x00013213) list_double2_large_graphic_pane_cp2

0x83f6,	// (0x00013213) list_double2_pane_cp2_ParamLimits

0x83f6,	// (0x00013213) list_double2_pane_cp2

0x83f6,	// (0x00013213) list_double_graphic_pane_cp2_ParamLimits

0x83f6,	// (0x00013213) list_double_graphic_pane_cp2

0x83f6,	// (0x00013213) list_double_large_graphic_pane_cp2_ParamLimits

0x83f6,	// (0x00013213) list_double_large_graphic_pane_cp2

0x83f6,	// (0x00013213) list_double_number_pane_cp2_ParamLimits

0x83f6,	// (0x00013213) list_double_number_pane_cp2

0x83f6,	// (0x00013213) list_double_pane_cp2_ParamLimits

0x83f6,	// (0x00013213) list_double_pane_cp2

0x841a,	// (0x00013237) list_single_2graphic_pane_cp2_ParamLimits

0x841a,	// (0x00013237) list_single_2graphic_pane_cp2

0x841a,	// (0x00013237) list_single_graphic_heading_pane_cp2_ParamLimits

0x841a,	// (0x00013237) list_single_graphic_heading_pane_cp2

0x841a,	// (0x00013237) list_single_graphic_pane_cp2_ParamLimits

0x841a,	// (0x00013237) list_single_graphic_pane_cp2

0x841a,	// (0x00013237) list_single_heading_pane_cp2_ParamLimits

0x841a,	// (0x00013237) list_single_heading_pane_cp2

0x8433,	// (0x00013250) list_single_large_graphic_pane_cp2_ParamLimits

0x8433,	// (0x00013250) list_single_large_graphic_pane_cp2

0x841a,	// (0x00013237) list_single_number_heading_pane_cp2_ParamLimits

0x841a,	// (0x00013237) list_single_number_heading_pane_cp2

0x841a,	// (0x00013237) list_single_number_pane_cp2_ParamLimits

0x841a,	// (0x00013237) list_single_number_pane_cp2

0x841a,	// (0x00013237) list_single_pane_cp2_ParamLimits

0x841a,	// (0x00013237) list_single_pane_cp2

0x84af,	// (0x000132cc) bg_popup_sub_pane_cp22

0x501a,	// (0x0000fe37) popup_side_volume_key_window_g1

0x5044,	// (0x0000fe61) popup_side_volume_key_window_t1

0x5060,	// (0x0000fe7d) volume_small_pane_cp1

0x704e,	// (0x00011e6b) bg_popup_sub_pane_cp24_ParamLimits

0x704e,	// (0x00011e6b) bg_popup_sub_pane_cp24

0x84c5,	// (0x000132e2) fep_china_uni_candidate_pane_ParamLimits

0x84c5,	// (0x000132e2) fep_china_uni_candidate_pane

0x84d9,	// (0x000132f6) fep_china_uni_entry_pane

0x84e9,	// (0x00013306) popup_fep_china_uni_window_g1

0x8505,	// (0x00013322) fep_china_uni_entry_pane_g1

0x850d,	// (0x0001332a) fep_china_uni_entry_pane_g2

0x0001,

0xf723,	// (0x0001a540) fep_china_uni_entry_pane_g

0x8515,	// (0x00013332) fep_entry_item_pane

0x851f,	// (0x0001333c) fep_candidate_item_pane

0x8527,	// (0x00013344) fep_china_uni_candidate_pane_g1

0x852f,	// (0x0001334c) fep_china_uni_candidate_pane_g2

0x8537,	// (0x00013354) fep_china_uni_candidate_pane_g3

0x853f,	// (0x0001335c) fep_china_uni_candidate_pane_g4

0x0003,

0xf728,	// (0x0001a545) fep_china_uni_candidate_pane_g

0x6ccf,	// (0x00011aec) fep_entry_item_pane_g1

0x8547,	// (0x00013364) fep_entry_item_pane_t1_ParamLimits

0x8547,	// (0x00013364) fep_entry_item_pane_t1

0x855d,	// (0x0001337a) fep_candidate_item_pane_t1_ParamLimits

0x855d,	// (0x0001337a) fep_candidate_item_pane_t1

0x8572,	// (0x0001338f) fep_candidate_item_pane_t2_ParamLimits

0x8572,	// (0x0001338f) fep_candidate_item_pane_t2

0x0001,

0xf731,	// (0x0001a54e) fep_candidate_item_pane_t_ParamLimits

0xf731,	// (0x0001a54e) fep_candidate_item_pane_t

0x6db9,	// (0x00011bd6) list_highlight_pane_cp31_ParamLimits

0x6db9,	// (0x00011bd6) list_highlight_pane_cp31

0x8584,	// (0x000133a1) level_1_signal_lsc

0x858d,	// (0x000133aa) level_2_signal_lsc

0x8596,	// (0x000133b3) level_3_signal_lsc

0x859f,	// (0x000133bc) level_4_signal_lsc

0x85a8,	// (0x000133c5) level_5_signal_lsc

0x85b1,	// (0x000133ce) level_6_signal_lsc

0x85ba,	// (0x000133d7) level_7_signal_lsc

0x85ba,	// (0x000133d7) level_1_battery_lsc

0x85c3,	// (0x000133e0) level_2_battery_lsc

0x85cc,	// (0x000133e9) level_3_battery_lsc

0x85d5,	// (0x000133f2) level_4_battery_lsc

0x85de,	// (0x000133fb) level_5_battery_lsc

0x85e7,	// (0x00013404) level_6_battery_lsc

0x8584,	// (0x000133a1) level_7_battery_lsc

0x85f0,	// (0x0001340d) scroll_handle_focus_pane_g1

0x85f9,	// (0x00013416) scroll_handle_focus_pane_g2

0x8602,	// (0x0001341f) scroll_handle_focus_pane_g3

0x0002,

0xf736,	// (0x0001a553) scroll_handle_focus_pane_g

0x860b,	// (0x00013428) list_single_2graphic_pane_g1_ParamLimits

0x860b,	// (0x00013428) list_single_2graphic_pane_g1

0x7678,	// (0x00012495) list_single_2graphic_pane_g2_ParamLimits

0x7678,	// (0x00012495) list_single_2graphic_pane_g2

0x75fe,	// (0x0001241b) list_single_2graphic_pane_g3_ParamLimits

0x75fe,	// (0x0001241b) list_single_2graphic_pane_g3

0x8617,	// (0x00013434) list_single_2graphic_pane_g4_ParamLimits

0x8617,	// (0x00013434) list_single_2graphic_pane_g4

0x0003,

0xf73d,	// (0x0001a55a) list_single_2graphic_pane_g_ParamLimits

0xf73d,	// (0x0001a55a) list_single_2graphic_pane_g

0x8628,	// (0x00013445) list_single_2graphic_pane_t1_ParamLimits

0x8628,	// (0x00013445) list_single_2graphic_pane_t1

0x8656,	// (0x00013473) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x8656,	// (0x00013473) list_double2_graphic_large_graphic_pane_g1

0x771d,	// (0x0001253a) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x771d,	// (0x0001253a) list_double2_graphic_large_graphic_pane_g2

0x772e,	// (0x0001254b) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x772e,	// (0x0001254b) list_double2_graphic_large_graphic_pane_g3

0x8666,	// (0x00013483) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x8666,	// (0x00013483) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf746,	// (0x0001a563) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf746,	// (0x0001a563) list_double2_graphic_large_graphic_pane_g

0x8672,	// (0x0001348f) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x8672,	// (0x0001348f) list_double2_graphic_large_graphic_pane_t1

0x8688,	// (0x000134a5) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x8688,	// (0x000134a5) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf74f,	// (0x0001a56c) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf74f,	// (0x0001a56c) list_double2_graphic_large_graphic_pane_t

0x87d9,	// (0x000135f6) popup_fast_swap_window_ParamLimits

0x87d9,	// (0x000135f6) popup_fast_swap_window

0x87f5,	// (0x00013612) popup_side_volume_key_window

0x8811,	// (0x0001362e) stacon_top_pane

0x881b,	// (0x00013638) status_pane_ParamLimits

0x881b,	// (0x00013638) status_pane

0x8811,	// (0x0001362e) status_small_pane

0x6cd9,	// (0x00011af6) control_pane

0x6cd9,	// (0x00011af6) stacon_bottom_pane

0x7ad5,	// (0x000128f2) scroll_pane_cp121

0x7acc,	// (0x000128e9) set_content_pane

0x869a,	// (0x000134b7) bg_active_tab_pane_g1_cp1

0x86a3,	// (0x000134c0) bg_active_tab_pane_g2_cp1

0x86ac,	// (0x000134c9) bg_active_tab_pane_g3_cp1

0x869a,	// (0x000134b7) bg_passive_tab_pane_g1_cp1

0x86a3,	// (0x000134c0) bg_passive_tab_pane_g2_cp1

0x86ac,	// (0x000134c9) bg_passive_tab_pane_g3_cp1

0x86b5,	// (0x000134d2) bg_active_tab_pane_g1_cp2

0x86a3,	// (0x000134c0) bg_active_tab_pane_g2_cp2

0x86be,	// (0x000134db) bg_active_tab_pane_g3_cp2

0x86b5,	// (0x000134d2) bg_passive_tab_pane_g1_cp2

0x86a3,	// (0x000134c0) bg_passive_tab_pane_g2_cp2

0x86be,	// (0x000134db) bg_passive_tab_pane_g3_cp2

0x86c7,	// (0x000134e4) bg_active_tab_pane_g1_cp3

0x86a3,	// (0x000134c0) bg_active_tab_pane_g2_cp3

0x86d0,	// (0x000134ed) bg_active_tab_pane_g3_cp3

0x86c7,	// (0x000134e4) bg_passive_tab_pane_g1_cp3

0x86a3,	// (0x000134c0) bg_passive_tab_pane_g2_cp3

0x86d0,	// (0x000134ed) bg_passive_tab_pane_g3_cp3

0x86d9,	// (0x000134f6) bg_active_tab_pane_g1_cp4

0x86a3,	// (0x000134c0) bg_active_tab_pane_g2_cp4

0x86e4,	// (0x00013501) bg_active_tab_pane_g3_cp4

0x86d9,	// (0x000134f6) bg_passive_tab_pane_g1_cp4

0x86a3,	// (0x000134c0) bg_passive_tab_pane_g2_cp4

0x86e4,	// (0x00013501) bg_passive_tab_pane_g3_cp4

0x872d,	// (0x0001354a) bg_active_tab_pane_g1_cp5

0x86a3,	// (0x000134c0) bg_active_tab_pane_g2_cp5

0x8736,	// (0x00013553) bg_active_tab_pane_g3_cp5

0x872d,	// (0x0001354a) bg_passive_tab_pane_g1_cp5

0x86a3,	// (0x000134c0) bg_passive_tab_pane_g2_cp5

0x8736,	// (0x00013553) bg_passive_tab_pane_g3_cp5

0x873f,	// (0x0001355c) list_set_graphic_pane_ParamLimits

0x873f,	// (0x0001355c) list_set_graphic_pane

0x6cd9,	// (0x00011af6) bg_set_opt_pane_cp4

0x875c,	// (0x00013579) list_set_graphic_pane_g1_ParamLimits

0x875c,	// (0x00013579) list_set_graphic_pane_g1

0x8768,	// (0x00013585) list_set_graphic_pane_g2_ParamLimits

0x8768,	// (0x00013585) list_set_graphic_pane_g2

0x0001,

0xf754,	// (0x0001a571) list_set_graphic_pane_g_ParamLimits

0xf754,	// (0x0001a571) list_set_graphic_pane_g

0x0009,

0xfad3,	// (0x0001a8f0) volume_small_pane_cp_g

0x878c,	// (0x000135a9) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x878c,	// (0x000135a9) list_double2_large_graphic_pane_g1_cp2

0x8798,	// (0x000135b5) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x8798,	// (0x000135b5) list_double2_large_graphic_pane_g2_cp2

0x87a9,	// (0x000135c6) list_double2_large_graphic_pane_g3_cp2

0x87b1,	// (0x000135ce) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x87b1,	// (0x000135ce) list_double2_large_graphic_pane_t1_cp2

0x87c7,	// (0x000135e4) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x87c7,	// (0x000135e4) list_double2_large_graphic_pane_t2_cp2

0xa4aa,	// (0x000152c7) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xa4aa,	// (0x000152c7) list_double_large_graphic_pane_g1_cp2

0xa4bb,	// (0x000152d8) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xa4bb,	// (0x000152d8) list_double_large_graphic_pane_g2_cp2

0x8937,	// (0x00013754) list_double_large_graphic_pane_g3_cp2

0xa4cc,	// (0x000152e9) list_double_large_graphic_pane_g4_cp

0xa4d4,	// (0x000152f1) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xa4d4,	// (0x000152f1) list_double_large_graphic_pane_t1_cp2

0xa4eb,	// (0x00015308) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xa4eb,	// (0x00015308) list_double_large_graphic_pane_t2_cp2

0x8829,	// (0x00013646) list_double2_graphic_pane_g1_cp2_ParamLimits

0x8829,	// (0x00013646) list_double2_graphic_pane_g1_cp2

0x8837,	// (0x00013654) list_double2_graphic_pane_g2_cp2_ParamLimits

0x8837,	// (0x00013654) list_double2_graphic_pane_g2_cp2

0x8848,	// (0x00013665) list_double2_graphic_pane_g3_cp2

0x8852,	// (0x0001366f) list_double2_graphic_pane_t1_cp2_ParamLimits

0x8852,	// (0x0001366f) list_double2_graphic_pane_t1_cp2

0x8868,	// (0x00013685) list_double2_graphic_pane_t2_cp2_ParamLimits

0x8868,	// (0x00013685) list_double2_graphic_pane_t2_cp2

0x887a,	// (0x00013697) list_single_number_heading_pane_g1_cp2_ParamLimits

0x887a,	// (0x00013697) list_single_number_heading_pane_g1_cp2

0x8886,	// (0x000136a3) list_single_number_heading_pane_g2_cp2

0x888e,	// (0x000136ab) list_single_number_heading_pane_t1_cp2_ParamLimits

0x888e,	// (0x000136ab) list_single_number_heading_pane_t1_cp2

0x88a4,	// (0x000136c1) list_single_number_heading_pane_t2_cp2_ParamLimits

0x88a4,	// (0x000136c1) list_single_number_heading_pane_t2_cp2

0x88b6,	// (0x000136d3) list_single_number_heading_pane_t3_cp2_ParamLimits

0x88b6,	// (0x000136d3) list_single_number_heading_pane_t3_cp2

0x887a,	// (0x00013697) list_single_heading_pane_g1_cp2_ParamLimits

0x887a,	// (0x00013697) list_single_heading_pane_g1_cp2

0x8886,	// (0x000136a3) list_single_heading_pane_g2_cp2

0x888e,	// (0x000136ab) list_single_heading_pane_t1_cp2_ParamLimits

0x888e,	// (0x000136ab) list_single_heading_pane_t1_cp2

0xa2b2,	// (0x000150cf) list_single_heading_pane_t2_cp2_ParamLimits

0xa2b2,	// (0x000150cf) list_single_heading_pane_t2_cp2

0xa1fa,	// (0x00015017) list_double_graphic_pane_g1_cp2_ParamLimits

0xa1fa,	// (0x00015017) list_double_graphic_pane_g1_cp2

0xa206,	// (0x00015023) list_double_graphic_pane_g2_cp2_ParamLimits

0xa206,	// (0x00015023) list_double_graphic_pane_g2_cp2

0xa215,	// (0x00015032) list_double_graphic_pane_g3_cp2

0xa21d,	// (0x0001503a) list_double_graphic_pane_t1_cp2_ParamLimits

0xa21d,	// (0x0001503a) list_double_graphic_pane_t1_cp2

0xa233,	// (0x00015050) list_double_graphic_pane_t2_cp2_ParamLimits

0xa233,	// (0x00015050) list_double_graphic_pane_t2_cp2

0x892b,	// (0x00013748) list_double_number_pane_g1_cp2_ParamLimits

0x892b,	// (0x00013748) list_double_number_pane_g1_cp2

0x8937,	// (0x00013754) list_double_number_pane_g2_cp2

0xa1be,	// (0x00014fdb) list_double_number_pane_t1_cp2_ParamLimits

0xa1be,	// (0x00014fdb) list_double_number_pane_t1_cp2

0xa1d2,	// (0x00014fef) list_double_number_pane_t2_cp2_ParamLimits

0xa1d2,	// (0x00014fef) list_double_number_pane_t2_cp2

0xa1e8,	// (0x00015005) list_double_number_pane_t3_cp2_ParamLimits

0xa1e8,	// (0x00015005) list_double_number_pane_t3_cp2

0xa0a7,	// (0x00014ec4) list_single_graphic_pane_g1_cp2_ParamLimits

0xa0a7,	// (0x00014ec4) list_single_graphic_pane_g1_cp2

0x898f,	// (0x000137ac) list_single_graphic_pane_g2_cp2_ParamLimits

0x898f,	// (0x000137ac) list_single_graphic_pane_g2_cp2

0x899b,	// (0x000137b8) list_single_graphic_pane_g3_cp2

0xa07d,	// (0x00014e9a) list_single_graphic_pane_t1_cp2_ParamLimits

0xa07d,	// (0x00014e9a) list_single_graphic_pane_t1_cp2

0x898f,	// (0x000137ac) list_single_number_pane_g1_cp2_ParamLimits

0x898f,	// (0x000137ac) list_single_number_pane_g1_cp2

0x899b,	// (0x000137b8) list_single_number_pane_g2_cp2

0xa07d,	// (0x00014e9a) list_single_number_pane_t1_cp2_ParamLimits

0xa07d,	// (0x00014e9a) list_single_number_pane_t1_cp2

0xa093,	// (0x00014eb0) list_single_number_pane_t2_cp2_ParamLimits

0xa093,	// (0x00014eb0) list_single_number_pane_t2_cp2

0x8798,	// (0x000135b5) list_double2_pane_g1_cp2_ParamLimits

0x8798,	// (0x000135b5) list_double2_pane_g1_cp2

0x87a9,	// (0x000135c6) list_double2_pane_g2_cp2

0x8903,	// (0x00013720) list_double2_pane_t1_cp2_ParamLimits

0x8903,	// (0x00013720) list_double2_pane_t1_cp2

0x8919,	// (0x00013736) list_double2_pane_t2_cp2_ParamLimits

0x8919,	// (0x00013736) list_double2_pane_t2_cp2

0x892b,	// (0x00013748) list_double_pane_g1_cp2_ParamLimits

0x892b,	// (0x00013748) list_double_pane_g1_cp2

0x8937,	// (0x00013754) list_double_pane_g2_cp2

0x893f,	// (0x0001375c) list_double_pane_t1_cp2_ParamLimits

0x893f,	// (0x0001375c) list_double_pane_t1_cp2

0x8955,	// (0x00013772) list_double_pane_t2_cp2_ParamLimits

0x8955,	// (0x00013772) list_double_pane_t2_cp2

0x897f,	// (0x0001379c) list_single_pane_cp2_g3

0x898f,	// (0x000137ac) list_single_pane_g1_cp2_ParamLimits

0x898f,	// (0x000137ac) list_single_pane_g1_cp2

0x899b,	// (0x000137b8) list_single_pane_g2_cp2

0x89a3,	// (0x000137c0) list_single_pane_t1_cp2_ParamLimits

0x89a3,	// (0x000137c0) list_single_pane_t1_cp2

0x89bb,	// (0x000137d8) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x89bb,	// (0x000137d8) list_single_large_graphic_pane_g1_cp2

0x89c7,	// (0x000137e4) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x89c7,	// (0x000137e4) list_single_large_graphic_pane_g2_cp2

0x89d3,	// (0x000137f0) list_single_large_graphic_pane_g3_cp2

0x89db,	// (0x000137f8) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x89db,	// (0x000137f8) list_single_large_graphic_pane_g4_cp1

0x89f5,	// (0x00013812) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x89f5,	// (0x00013812) list_single_large_graphic_pane_t1_cp2

0xa049,	// (0x00014e66) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa049,	// (0x00014e66) list_single_graphic_heading_pane_g1_cp2

0xa016,	// (0x00014e33) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa016,	// (0x00014e33) list_single_graphic_heading_pane_g4_cp2

0x899b,	// (0x000137b8) list_single_graphic_heading_pane_g5_cp2

0xa055,	// (0x00014e72) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa055,	// (0x00014e72) list_single_graphic_heading_pane_t1_cp2

0xa06b,	// (0x00014e88) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa06b,	// (0x00014e88) list_single_graphic_heading_pane_t2_cp2

0xa00a,	// (0x00014e27) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa00a,	// (0x00014e27) list_single_2graphic_pane_g1_cp2

0xa016,	// (0x00014e33) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa016,	// (0x00014e33) list_single_2graphic_pane_g2_cp2

0x899b,	// (0x000137b8) list_single_2graphic_pane_g3_cp2

0xa027,	// (0x00014e44) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa027,	// (0x00014e44) list_single_2graphic_pane_g4_cp2

0xa033,	// (0x00014e50) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa033,	// (0x00014e50) list_single_2graphic_pane_t1_cp2

0x6ccf,	// (0x00011aec) list_highlight_pane_g10_cp1

0x9bd6,	// (0x000149f3) list_highlight_pane_g1_cp1

0x9bde,	// (0x000149fb) list_highlight_pane_g2_cp1

0x9be6,	// (0x00014a03) list_highlight_pane_g3_cp1

0x9bee,	// (0x00014a0b) list_highlight_pane_g4_cp1

0x9bf6,	// (0x00014a13) list_highlight_pane_g5_cp1

0x9bfe,	// (0x00014a1b) list_highlight_pane_g6_cp1

0x9c06,	// (0x00014a23) list_highlight_pane_g7_cp1

0x9c0e,	// (0x00014a2b) list_highlight_pane_g8_cp1

0x9c16,	// (0x00014a33) list_highlight_pane_g9_cp1

0x9af6,	// (0x00014913) form_field_slider_pane_t3

0x9b04,	// (0x00014921) form_field_slider_pane_t4

0x9b12,	// (0x0001492f) slider_form_pane_ParamLimits

0x9b12,	// (0x0001492f) slider_form_pane

0x6cd9,	// (0x00011af6) control_abbreviations

0x6cd9,	// (0x00011af6) control_conventions

0x6cd9,	// (0x00011af6) control_definitions

0x6cd9,	// (0x00011af6) format_table_attribute

0xa2fc,	// (0x00015119) bg_popup_preview_window_pane_g9

0x6cd9,	// (0x00011af6) format_table_data2

0x6cd9,	// (0x00011af6) format_table_data3

0x6cd9,	// (0x00011af6) format_table_data_example

0x0008,

0x6cd9,	// (0x00011af6) intro_purpose

0xf8f0,	// (0x0001a70d) bg_popup_preview_window_pane_g

0x6cd9,	// (0x00011af6) texts_category

0x6cd9,	// (0x00011af6) texts_graphics

0x8a0b,	// (0x00013828) text_digital

0x8a1a,	// (0x00013837) text_primary

0x8a29,	// (0x00013846) text_primary_small

0x8a38,	// (0x00013855) text_secondary

0x8a47,	// (0x00013864) text_title

0xab1f,	// (0x0001593c) bg_passive_tab_pane_g1_cp3_srt

0x86a3,	// (0x000134c0) bg_passive_tab_pane_g2_cp3_srt

0xab28,	// (0x00015945) bg_passive_tab_pane_g3_cp3_srt

0x6db9,	// (0x00011bd6) bg_active_tab_pane_cp3_srt_ParamLimits

0x6db9,	// (0x00011bd6) bg_active_tab_pane_cp3_srt

0xab31,	// (0x0001594e) tabs_4_active_pane_srt_g1

0xab39,	// (0x00015956) tabs_4_active_pane_srt_t1_ParamLimits

0xab39,	// (0x00015956) tabs_4_active_pane_srt_t1

0xab1f,	// (0x0001593c) bg_active_tab_pane_g1_cp3_copy1

0x86a3,	// (0x000134c0) bg_active_tab_pane_g2_cp3_copy1

0xab28,	// (0x00015945) bg_active_tab_pane_g3_cp3_copy1

0x6db9,	// (0x00011bd6) tabs_2_long_active_pane_srt_ParamLimits

0x6db9,	// (0x00011bd6) tabs_2_long_active_pane_srt

0x6db9,	// (0x00011bd6) tabs_2_long_passive_pane_srt_ParamLimits

0x6db9,	// (0x00011bd6) tabs_2_long_passive_pane_srt

0x7f22,	// (0x00012d3f) bg_passive_tab_pane_cp4_srt_ParamLimits

0x7f22,	// (0x00012d3f) bg_passive_tab_pane_cp4_srt

0xa768,	// (0x00015585) bg_passive_tab_pane_g1_cp4_srt

0x86a3,	// (0x000134c0) bg_passive_tab_pane_g2_cp4_srt

0xa771,	// (0x0001558e) bg_passive_tab_pane_g3_cp4_srt

0x7f01,	// (0x00012d1e) bg_active_tab_pane_cp4_srt_ParamLimits

0x7f01,	// (0x00012d1e) bg_active_tab_pane_cp4_srt

0xa77a,	// (0x00015597) tabs_2_long_active_pane_srt_t1_ParamLimits

0xa77a,	// (0x00015597) tabs_2_long_active_pane_srt_t1

0xa768,	// (0x00015585) bg_active_tab_pane_g1_cp4_srt

0x86a3,	// (0x000134c0) bg_active_tab_pane_g2_cp4_srt

0xa771,	// (0x0001558e) bg_active_tab_pane_g3_cp4_srt

0x704e,	// (0x00011e6b) tabs_3_long_active_pane_srt_ParamLimits

0x704e,	// (0x00011e6b) tabs_3_long_active_pane_srt

0x704e,	// (0x00011e6b) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x704e,	// (0x00011e6b) tabs_3_long_passive_pane_cp_srt

0x704e,	// (0x00011e6b) tabs_3_long_passive_pane_srt_ParamLimits

0x704e,	// (0x00011e6b) tabs_3_long_passive_pane_srt

0x7f22,	// (0x00012d3f) bg_passive_tab_pane_cp5_srt_ParamLimits

0x7f22,	// (0x00012d3f) bg_passive_tab_pane_cp5_srt

0x872d,	// (0x0001354a) bg_passive_tab_pane_g1_cp5_srt

0x86a3,	// (0x000134c0) bg_passive_tab_pane_g2_cp5_srt

0x8736,	// (0x00013553) bg_passive_tab_pane_g3_cp5_srt

0x7f01,	// (0x00012d1e) bg_active_tab_pane_cp5_srt_ParamLimits

0x7f01,	// (0x00012d1e) bg_active_tab_pane_cp5_srt

0xa756,	// (0x00015573) tabs_3_long_active_pane_srt_t1_ParamLimits

0xa756,	// (0x00015573) tabs_3_long_active_pane_srt_t1

0x872d,	// (0x0001354a) bg_active_tab_pane_g1_cp5_srt

0x86a3,	// (0x000134c0) bg_active_tab_pane_g2_cp5_srt

0x8736,	// (0x00013553) bg_active_tab_pane_g3_cp5_srt

0xa748,	// (0x00015565) navi_text_pane_srt_t1

0xa740,	// (0x0001555d) navi_icon_pane_srt_g1

0x8c0e,	// (0x00013a2b) midp_editing_number_pane_srt

0x8a56,	// (0x00013873) midp_ticker_pane_srt

0x8c16,	// (0x00013a33) midp_ticker_pane_srt_g1

0x8c1e,	// (0x00013a3b) midp_ticker_pane_srt_g2

0x0001,

0xf773,	// (0x0001a590) midp_ticker_pane_srt_g

0x8c26,	// (0x00013a43) midp_ticker_pane_srt_t1

0xa731,	// (0x0001554e) midp_editing_number_pane_t1_copy1

0x7f22,	// (0x00012d3f) listscroll_midp_pane

0x7f22,	// (0x00012d3f) midp_form_pane

0x8ac0,	// (0x000138dd) midp_info_popup_window_ParamLimits

0x8ac0,	// (0x000138dd) midp_info_popup_window

0x7dea,	// (0x00012c07) bg_popup_sub_pane_cp50_ParamLimits

0x7dea,	// (0x00012c07) bg_popup_sub_pane_cp50

0x980e,	// (0x0001462b) listscroll_midp_info_pane_ParamLimits

0x980e,	// (0x0001462b) listscroll_midp_info_pane

0x97f6,	// (0x00014613) listscroll_form_midp_pane_ParamLimits

0x97f6,	// (0x00014613) listscroll_form_midp_pane

0x9802,	// (0x0001461f) scroll_bar_cp050

0x97d6,	// (0x000145f3) list_midp_pane

0xb857,	// (0x00016674) signal_pane_g2_cp

0x9710,	// (0x0001452d) listscroll_midp_info_pane_t1_ParamLimits

0x9710,	// (0x0001452d) listscroll_midp_info_pane_t1

0x9728,	// (0x00014545) listscroll_midp_info_pane_t2_ParamLimits

0x9728,	// (0x00014545) listscroll_midp_info_pane_t2

0x9766,	// (0x00014583) listscroll_midp_info_pane_t3_ParamLimits

0x9766,	// (0x00014583) listscroll_midp_info_pane_t3

0x97a0,	// (0x000145bd) listscroll_midp_info_pane_t4_ParamLimits

0x97a0,	// (0x000145bd) listscroll_midp_info_pane_t4

0x0003,

0xf82b,	// (0x0001a648) listscroll_midp_info_pane_t_ParamLimits

0xf82b,	// (0x0001a648) listscroll_midp_info_pane_t

0x7eae,	// (0x00012ccb) scroll_pane_cp21

0x96ae,	// (0x000144cb) form_midp_field_choice_group_pane

0x96b7,	// (0x000144d4) form_midp_field_text_pane

0x96f6,	// (0x00014513) form_midp_field_time_pane

0x96fe,	// (0x0001451b) form_midp_gauge_slider_pane

0x9707,	// (0x00014524) form_midp_gauge_wait_pane

0x6cd9,	// (0x00011af6) form_midp_image_pane

0x967f,	// (0x0001449c) list_single_midp_pane_ParamLimits

0x967f,	// (0x0001449c) list_single_midp_pane

0x9637,	// (0x00014454) form_midp_field_text_pane_t1

0x93f2,	// (0x0001420f) input_focus_pane_cp050

0x966e,	// (0x0001448b) list_midp_form_text_pane

0x9606,	// (0x00014423) form_midp_field_choice_group_pane_t1

0x9614,	// (0x00014431) input_focus_pane_cp051

0x9628,	// (0x00014445) list_midp_choice_pane

0x6cd9,	// (0x00011af6) status_idle_pane

0x95ea,	// (0x00014407) form_midp_field_time_pane_t1

0x6ccf,	// (0x00011aec) wait_anim_pane_g2_copy1

0x95f8,	// (0x00014415) form_midp_field_time_pane_t2

0x0001,

0x8b6e,	// (0x0001398b) aid_navinavi_width_2_pane

0xf826,	// (0x0001a643) form_midp_field_time_pane_t

0x6cd9,	// (0x00011af6) input_focus_pane_cp052

0x6cd9,	// (0x00011af6) bg_input_focus_pane_cp040

0x95aa,	// (0x000143c7) form_midp_gauge_slider_pane_t1

0x95b8,	// (0x000143d5) form_midp_gauge_slider_pane_t2

0x95c6,	// (0x000143e3) form_midp_gauge_slider_pane_t3

0x95d4,	// (0x000143f1) form_midp_gauge_slider_pane_t4

0x0003,

0xf81d,	// (0x0001a63a) form_midp_gauge_slider_pane_t

0x95e2,	// (0x000143ff) form_midp_slider_pane

0x6db9,	// (0x00011bd6) bg_input_focus_pane_cp041_ParamLimits

0x6db9,	// (0x00011bd6) bg_input_focus_pane_cp041

0x9577,	// (0x00014394) form_midp_gauge_wait_pane_t1_ParamLimits

0x9577,	// (0x00014394) form_midp_gauge_wait_pane_t1

0x9589,	// (0x000143a6) form_midp_gauge_wait_pane_t2_ParamLimits

0x9589,	// (0x000143a6) form_midp_gauge_wait_pane_t2

0x0001,

0xf818,	// (0x0001a635) form_midp_gauge_wait_pane_t_ParamLimits

0xf818,	// (0x0001a635) form_midp_gauge_wait_pane_t

0x959b,	// (0x000143b8) form_midp_wait_pane_ParamLimits

0x959b,	// (0x000143b8) form_midp_wait_pane

0x9541,	// (0x0001435e) form_midp_image_pane_g1

0x954a,	// (0x00014367) form_midp_image_pane_t1

0x9559,	// (0x00014376) form_midp_image_pane_t2

0x9568,	// (0x00014385) form_midp_image_pane_t3

0x0002,

0xf811,	// (0x0001a62e) form_midp_image_pane_t

0x9529,	// (0x00014346) list_single_midp_pane_g1

0x9532,	// (0x0001434f) list_single_midp_pane_t1

0x9501,	// (0x0001431e) list_midp_form_item_pane_ParamLimits

0x9501,	// (0x0001431e) list_midp_form_item_pane

0x8b16,	// (0x00013933) list_midp_form_item_pane_t1

0x8b25,	// (0x00013942) midp_ticker_pane_g1

0x8b31,	// (0x0001394e) midp_ticker_pane_g2

0x0001,

0xf759,	// (0x0001a576) midp_ticker_pane_g

0x8b3d,	// (0x0001395a) midp_ticker_pane_t1

0xa9b5,	// (0x000157d2) midp_editing_number_pane_t1

0xa993,	// (0x000157b0) midp_editing_number_pane

0xa9a2,	// (0x000157bf) midp_ticker_pane

0xa6f9,	// (0x00015516) ai_message_heading_pane

0x6cd9,	// (0x00011af6) bg_popup_window_pane_cp14

0xa701,	// (0x0001551e) listscroll_ai_message_pane

0xa683,	// (0x000154a0) ai_message_heading_pane_g1_ParamLimits

0xa683,	// (0x000154a0) ai_message_heading_pane_g1

0xa68f,	// (0x000154ac) ai_message_heading_pane_g2_ParamLimits

0xa68f,	// (0x000154ac) ai_message_heading_pane_g2

0xa69b,	// (0x000154b8) ai_message_heading_pane_g3_ParamLimits

0xa69b,	// (0x000154b8) ai_message_heading_pane_g3

0xa6a7,	// (0x000154c4) ai_message_heading_pane_g4_ParamLimits

0xa6a7,	// (0x000154c4) ai_message_heading_pane_g4

0x0003,

0xf952,	// (0x0001a76f) ai_message_heading_pane_g_ParamLimits

0xf952,	// (0x0001a76f) ai_message_heading_pane_g

0xa6b3,	// (0x000154d0) ai_message_heading_pane_t1_ParamLimits

0xa6b3,	// (0x000154d0) ai_message_heading_pane_t1

0xa6cd,	// (0x000154ea) ai_message_heading_pane_t2_ParamLimits

0xa6cd,	// (0x000154ea) ai_message_heading_pane_t2

0x0001,

0xf95b,	// (0x0001a778) ai_message_heading_pane_t_ParamLimits

0xf95b,	// (0x0001a778) ai_message_heading_pane_t

0xa6df,	// (0x000154fc) bg_popup_heading_pane_cp1_ParamLimits

0xa6df,	// (0x000154fc) bg_popup_heading_pane_cp1

0xa671,	// (0x0001548e) list_ai_message_pane_ParamLimits

0xa671,	// (0x0001548e) list_ai_message_pane

0x7eae,	// (0x00012ccb) scroll_pane_cp10

0xa60d,	// (0x0001542a) list_ai_message_pane_g1

0xa615,	// (0x00015432) list_ai_message_pane_g2

0x0001,

0xf92f,	// (0x0001a74c) list_ai_message_pane_g

0xa61d,	// (0x0001543a) list_ai_message_pane_t1_ParamLimits

0xa61d,	// (0x0001543a) list_ai_message_pane_t1

0xa632,	// (0x0001544f) list_ai_message_pane_t2_ParamLimits

0xa632,	// (0x0001544f) list_ai_message_pane_t2

0xa647,	// (0x00015464) list_ai_message_pane_t3_ParamLimits

0xa647,	// (0x00015464) list_ai_message_pane_t3

0xa65c,	// (0x00015479) list_ai_message_pane_t4_ParamLimits

0xa65c,	// (0x00015479) list_ai_message_pane_t4

0x0003,

0xf934,	// (0x0001a751) list_ai_message_pane_t_ParamLimits

0xf934,	// (0x0001a751) list_ai_message_pane_t

0xa5f8,	// (0x00015415) cell_ai_soft_ind_pane_ParamLimits

0xa5f8,	// (0x00015415) cell_ai_soft_ind_pane

0x8b4f,	// (0x0001396c) cell_ai_soft_ind_pane_g1_ParamLimits

0x8b4f,	// (0x0001396c) cell_ai_soft_ind_pane_g1

0x6cd9,	// (0x00011af6) grid_highlight_cp1

0x8b5c,	// (0x00013979) text_secondary_cp56_ParamLimits

0x8b5c,	// (0x00013979) text_secondary_cp56

0xa5cd,	// (0x000153ea) example_general_pane_ParamLimits

0xa5cd,	// (0x000153ea) example_general_pane

0xa5d9,	// (0x000153f6) example_parent_pane_g1_ParamLimits

0xa5d9,	// (0x000153f6) example_parent_pane_g1

0xa5e5,	// (0x00015402) example_parent_pane_t1_ParamLimits

0xa5e5,	// (0x00015402) example_parent_pane_t1

0x5753,	// (0x00010570) popup_preview_text_window_ParamLimits

0x5753,	// (0x00010570) popup_preview_text_window

0x8987,	// (0x000137a4) list_single_pane_cp2_g4

0x7104,	// (0x00011f21) bg_popup_preview_window_pane_ParamLimits

0x7104,	// (0x00011f21) bg_popup_preview_window_pane

0xa304,	// (0x00015121) popup_preview_text_window_t1_ParamLimits

0xa304,	// (0x00015121) popup_preview_text_window_t1

0xa322,	// (0x0001513f) popup_preview_text_window_t2_ParamLimits

0xa322,	// (0x0001513f) popup_preview_text_window_t2

0xa36b,	// (0x00015188) popup_preview_text_window_t3_ParamLimits

0xa36b,	// (0x00015188) popup_preview_text_window_t3

0xa3b0,	// (0x000151cd) popup_preview_text_window_t4_ParamLimits

0xa3b0,	// (0x000151cd) popup_preview_text_window_t4

0x0004,

0xf903,	// (0x0001a720) popup_preview_text_window_t_ParamLimits

0xf903,	// (0x0001a720) popup_preview_text_window_t

0xa42e,	// (0x0001524b) scroll_pane_cp11

0x92cc,	// (0x000140e9) bg_popup_preview_window_pane_g1

0xa2c4,	// (0x000150e1) bg_popup_preview_window_pane_g2

0xa2cc,	// (0x000150e9) bg_popup_preview_window_pane_g3

0xa2d4,	// (0x000150f1) bg_popup_preview_window_pane_g4

0xa2dc,	// (0x000150f9) bg_popup_preview_window_pane_g5

0xa2e4,	// (0x00015101) bg_popup_preview_window_pane_g6

0xa2ec,	// (0x00015109) bg_popup_preview_window_pane_g7

0xa2f4,	// (0x00015111) bg_popup_preview_window_pane_g8

0x4957,	// (0x0000f774) aid_popup_width_pane

0x5731,	// (0x0001054e) popup_midp_note_alarm_window_ParamLimits

0x5731,	// (0x0001054e) popup_midp_note_alarm_window

0x7b96,	// (0x000129b3) data_form_pane_ParamLimits

0x7ba2,	// (0x000129bf) form_field_data_pane_g1

0x7bac,	// (0x000129c9) form_field_data_pane_t1_ParamLimits

0x7bc4,	// (0x000129e1) input_focus_pane_ParamLimits

0x7bd2,	// (0x000129ef) data_form_wide_pane_ParamLimits

0x7bde,	// (0x000129fb) form_field_data_wide_pane_g1

0x7bfe,	// (0x00012a1b) form_field_data_wide_pane_t1_ParamLimits

0x73b0,	// (0x000121cd) input_focus_pane_cp6_ParamLimits

0x7e5b,	// (0x00012c78) input_popup_find_pane_g1_ParamLimits

0x7e5b,	// (0x00012c78) input_popup_find_pane_g1

0x4ec9,	// (0x0000fce6) aid_navi_side_left_pane

0x4ede,	// (0x0000fcfb) aid_navi_side_right_pane

0x9cd1,	// (0x00014aee) bg_popup_window_pane_cp30_ParamLimits

0x9cd1,	// (0x00014aee) bg_popup_window_pane_cp30

0x9d4b,	// (0x00014b68) popup_midp_note_alarm_window_g1_ParamLimits

0x9d4b,	// (0x00014b68) popup_midp_note_alarm_window_g1

0x9d7b,	// (0x00014b98) popup_midp_note_alarm_window_t1_ParamLimits

0x9d7b,	// (0x00014b98) popup_midp_note_alarm_window_t1

0x9e28,	// (0x00014c45) popup_midp_note_alarm_window_t2_ParamLimits

0x9e28,	// (0x00014c45) popup_midp_note_alarm_window_t2

0x9ed6,	// (0x00014cf3) popup_midp_note_alarm_window_t3_ParamLimits

0x9ed6,	// (0x00014cf3) popup_midp_note_alarm_window_t3

0x9f08,	// (0x00014d25) popup_midp_note_alarm_window_t4_ParamLimits

0x9f08,	// (0x00014d25) popup_midp_note_alarm_window_t4

0x9f2e,	// (0x00014d4b) popup_midp_note_alarm_window_t5_ParamLimits

0x9f2e,	// (0x00014d4b) popup_midp_note_alarm_window_t5

0x000a,

0xf8a0,	// (0x0001a6bd) popup_midp_note_alarm_window_t_ParamLimits

0xf8a0,	// (0x0001a6bd) popup_midp_note_alarm_window_t

0x9fda,	// (0x00014df7) wait_bar_pane_cp1_ParamLimits

0x9fda,	// (0x00014df7) wait_bar_pane_cp1

0x6cd9,	// (0x00011af6) wait_anim_pane_copy1

0x6cd9,	// (0x00011af6) wait_border_pane_copy1

0x99b7,	// (0x000147d4) wait_border_pane_g1_copy1

0x7c15,	// (0x00012a32) form_field_popup_pane_g1

0x7c1d,	// (0x00012a3a) form_field_popup_pane_t1_ParamLimits

0x7bc4,	// (0x000129e1) input_focus_pane_cp7_ParamLimits

0x7c35,	// (0x00012a52) list_form_pane_ParamLimits

0x7c41,	// (0x00012a5e) form_field_popup_wide_pane_g1

0x7c49,	// (0x00012a66) form_field_popup_wide_pane_t1_ParamLimits

0x7bc4,	// (0x000129e1) input_focus_pane_cp8_ParamLimits

0x7c5e,	// (0x00012a7b) list_form_wide_pane_ParamLimits

0xabab,	// (0x000159c8) aid_size_cell_graphic_pane

0x7d35,	// (0x00012b52) data_form_pane_t1_ParamLimits

0xa960,	// (0x0001577d) data_form_wide_pane_t1_ParamLimits

0x8e79,	// (0x00013c96) bg_status_flat_pane

0x6d19,	// (0x00011b36) title_pane_t1_ParamLimits

0x6d81,	// (0x00011b9e) title_pane_t2_ParamLimits

0x6da7,	// (0x00011bc4) title_pane_t3_ParamLimits

0xf55d,	// (0x0001a37a) title_pane_t_ParamLimits

0x832b,	// (0x00013148) level_1_signal_ParamLimits

0x833d,	// (0x0001315a) level_2_signal_ParamLimits

0x8350,	// (0x0001316d) level_3_signal_ParamLimits

0x8363,	// (0x00013180) level_4_signal_ParamLimits

0x8376,	// (0x00013193) level_5_signal_ParamLimits

0x8389,	// (0x000131a6) level_6_signal_ParamLimits

0x839c,	// (0x000131b9) level_7_signal_ParamLimits

0x832b,	// (0x00013148) level_1_battery_ParamLimits

0x833d,	// (0x0001315a) level_2_battery_ParamLimits

0x8350,	// (0x0001316d) level_3_battery_ParamLimits

0x8363,	// (0x00013180) level_4_battery_ParamLimits

0x8376,	// (0x00013193) level_5_battery_ParamLimits

0x8389,	// (0x000131a6) level_6_battery_ParamLimits

0x839c,	// (0x000131b9) level_7_battery_ParamLimits

0x9bd6,	// (0x000149f3) bg_status_flat_pane_g1

0x9bde,	// (0x000149fb) bg_status_flat_pane_g2

0x9be6,	// (0x00014a03) bg_status_flat_pane_g3

0x9bee,	// (0x00014a0b) bg_status_flat_pane_g4

0x9bf6,	// (0x00014a13) bg_status_flat_pane_g5

0x9bfe,	// (0x00014a1b) bg_status_flat_pane_g6

0x9c06,	// (0x00014a23) bg_status_flat_pane_g7

0x6dcf,	// (0x00011bec) tabs_3_active_pane_t1_ParamLimits

0x6dcf,	// (0x00011bec) tabs_3_passive_pane_t1_ParamLimits

0x6de9,	// (0x00011c06) tabs_4_active_pane_t1_ParamLimits

0x6de9,	// (0x00011c06) tabs_4_1_passive_pane_t1_ParamLimits

0x7eef,	// (0x00012d0c) tabs_2_active_pane_t1_ParamLimits

0x7eef,	// (0x00012d0c) tabs_2_passive_pane_t1_ParamLimits

0x7f01,	// (0x00012d1e) bg_active_tab_pane_cp4_ParamLimits

0x7f0f,	// (0x00012d2c) tabs_2_long_active_pane_t1_ParamLimits

0x7f22,	// (0x00012d3f) bg_passive_tab_pane_cp4_ParamLimits

0x5a78,	// (0x00010895) list_single_midp_graphic_pane_t1_ParamLimits

0x7f01,	// (0x00012d1e) bg_active_tab_pane_cp5_ParamLimits

0x7f2e,	// (0x00012d4b) tabs_3_long_active_pane_t1_ParamLimits

0x7f22,	// (0x00012d3f) bg_passive_tab_pane_cp5_ParamLimits

0x5a78,	// (0x00010895) list_single_midp_graphic_pane_t1

0x8e79,	// (0x00013c96) bg_status_flat_pane_ParamLimits

0x8f3c,	// (0x00013d59) indicator_pane_cp2_ParamLimits

0x8f3c,	// (0x00013d59) indicator_pane_cp2

0x9061,	// (0x00013e7e) navi_pane_srt_ParamLimits

0x9061,	// (0x00013e7e) navi_pane_srt

0x9085,	// (0x00013ea2) popup_clock_digital_analogue_window_cp1

0x6eb0,	// (0x00011ccd) indicator_pane_t1

0x8a56,	// (0x00013873) copy_highlight_pane

0x8a56,	// (0x00013873) cursor_graphics_pane

0x8a56,	// (0x00013873) graphic_within_text_pane

0x8a56,	// (0x00013873) link_highlight_pane

0xa3f1,	// (0x0001520e) popup_preview_text_window_t5_ParamLimits

0xa3f1,	// (0x0001520e) popup_preview_text_window_t5

0x8b76,	// (0x00013993) cursor_digital_pane

0x8b76,	// (0x00013993) cursor_primary_pane

0x8b87,	// (0x000139a4) cursor_primary_small_pane

0x8b8f,	// (0x000139ac) cursor_secondary_pane

0x8b97,	// (0x000139b4) cursor_title_pane

0x8b76,	// (0x00013993) link_highlight_digital_pane

0x8b7e,	// (0x0001399b) link_highlight_primary_pane

0x8b87,	// (0x000139a4) link_highlight_primary_small_pane

0x8b8f,	// (0x000139ac) link_highlight_secondary_pane

0x8b97,	// (0x000139b4) link_highlight_title_pane

0x8b76,	// (0x00013993) copy_highlight_digital_pane

0x8b76,	// (0x00013993) copy_highlight_primary_pane

0x8b87,	// (0x000139a4) copy_highlight_primary_small_pane

0x8b8f,	// (0x000139ac) copy_highlight_secondary_pane

0x8b97,	// (0x000139b4) copy_highlight_title_pane

0x8b8f,	// (0x000139ac) graphic_text_digital_pane

0x9c74,	// (0x00014a91) graphic_text_primary_pane

0x9c7d,	// (0x00014a9a) graphic_text_primary_small_pane

0x8b87,	// (0x000139a4) graphic_text_secondary_pane

0x8b76,	// (0x00013993) graphic_text_title_pane

0x8b9f,	// (0x000139bc) cursor_primary_pane_g1

0x9c66,	// (0x00014a83) cursor_text_primary_t1

0x9c4e,	// (0x00014a6b) cursor_primary_small_pane_g1

0x9c58,	// (0x00014a75) cursor_text_primary_small_t1

0x9c36,	// (0x00014a53) cursor_primary_small_pane_g1_copy1

0x9c40,	// (0x00014a5d) cursor_text_primary_small_t1_copy1

0x9c1e,	// (0x00014a3b) cursor_text_title_t1

0x9c2c,	// (0x00014a49) cursor_title_pane_g1

0x8b9f,	// (0x000139bc) cursor_digital_pane_g1

0x8ba9,	// (0x000139c6) cursor_text_digital_t1

0x8bce,	// (0x000139eb) link_highlight_primary_pane_g1

0x9bc7,	// (0x000149e4) link_highlight_primary_pane_t1

0x8bb7,	// (0x000139d4) link_highlight_primary_small_pane_g1

0x8bbf,	// (0x000139dc) link_highlight_primary_small_pane_t1

0x8bce,	// (0x000139eb) link_highlight_secondary_pane_g1

0x8bd6,	// (0x000139f3) link_highlight_secondary_pane_t1

0x9b3b,	// (0x00014958) link_highlight_title_pane_g1

0x9b43,	// (0x00014960) link_highlight_title_pane_t1

0x9b24,	// (0x00014941) link_highlight_digital_pane_g1

0x9b2c,	// (0x00014949) link_highlight_digital_pane_t1

0x99fc,	// (0x00014819) copy_highlight_primary_pane_g1

0x9a04,	// (0x00014821) copy_highlight_primary_pane_t1

0x99d6,	// (0x000147f3) copy_highlight_primary_small_pane_g1

0x99ed,	// (0x0001480a) copy_highlight_primary_small_pane_t1

0x8be5,	// (0x00013a02) copy_highlight_secondary_pane_g1

0x8bed,	// (0x00013a0a) copy_highlight_secondary_pane_t1

0x99d6,	// (0x000147f3) copy_highlight_title_pane_g1

0x99de,	// (0x000147fb) copy_highlight_title_pane_t1

0x99fc,	// (0x00014819) copy_highlight_digital_pane_g1

0xad75,	// (0x00015b92) copy_highlight_digital_pane_t1

0xacc9,	// (0x00015ae6) graphic_text_primary_pane_g1

0xad59,	// (0x00015b76) graphic_text_primary_pane_t1

0xad67,	// (0x00015b84) graphic_text_primary_pane_t2

0x0001,

0xf9cf,	// (0x0001a7ec) graphic_text_primary_pane_t

0xad35,	// (0x00015b52) graphic_text_primary_small_pane_g1

0xad3d,	// (0x00015b5a) graphic_text_primary_small_pane_t1

0xad4b,	// (0x00015b68) graphic_text_primary_small_pane_t2

0x0001,

0xf9ca,	// (0x0001a7e7) graphic_text_primary_small_pane_t

0xad11,	// (0x00015b2e) graphic_text_secondary_pane_g1

0xad19,	// (0x00015b36) graphic_text_secondary_pane_t1

0xad27,	// (0x00015b44) graphic_text_secondary_pane_t2

0x0001,

0xf9c5,	// (0x0001a7e2) graphic_text_secondary_pane_t

0xaced,	// (0x00015b0a) graphic_text_title_pane_g1

0xacf5,	// (0x00015b12) graphic_text_title_pane_t1

0xad03,	// (0x00015b20) graphic_text_title_pane_t2

0x0001,

0xf9c0,	// (0x0001a7dd) graphic_text_title_pane_t

0xacc9,	// (0x00015ae6) graphic_text_digital_pane_g1

0xacd1,	// (0x00015aee) graphic_text_digital_pane_t1

0xacdf,	// (0x00015afc) graphic_text_digital_pane_t2

0x0001,

0xf9bb,	// (0x0001a7d8) graphic_text_digital_pane_t

0x6db9,	// (0x00011bd6) navi_icon_pane_srt_ParamLimits

0x6db9,	// (0x00011bd6) navi_icon_pane_srt

0x6cd9,	// (0x00011af6) navi_midp_pane_srt

0x6cd9,	// (0x00011af6) navi_navi_pane_srt

0x6db9,	// (0x00011bd6) navi_text_pane_srt_ParamLimits

0x6db9,	// (0x00011bd6) navi_text_pane_srt

0xac94,	// (0x00015ab1) navi_navi_icon_text_pane_srt

0xac9c,	// (0x00015ab9) navi_navi_pane_srt_g1_ParamLimits

0xac9c,	// (0x00015ab9) navi_navi_pane_srt_g1

0xacae,	// (0x00015acb) navi_navi_pane_srt_g2_ParamLimits

0xacae,	// (0x00015acb) navi_navi_pane_srt_g2

0x0001,

0xf9b6,	// (0x0001a7d3) navi_navi_pane_srt_g_ParamLimits

0xf9b6,	// (0x0001a7d3) navi_navi_pane_srt_g

0xacc0,	// (0x00015add) navi_navi_tabs_pane_srt

0xac94,	// (0x00015ab1) navi_navi_text_pane_srt

0xac94,	// (0x00015ab1) navi_navi_volume_pane_srt

0xac85,	// (0x00015aa2) navi_navi_text_pane_srt_t1

0x5df2,	// (0x00010c0f) navi_navi_volume_pane_srt_g1

0x5dfa,	// (0x00010c17) volume_small_pane_srt_ParamLimits

0x5dfa,	// (0x00010c17) volume_small_pane_srt

0x51a9,	// (0x0000ffc6) volume_small_pane_srt_g1_ParamLimits

0x51a9,	// (0x0000ffc6) volume_small_pane_srt_g1

0x51b9,	// (0x0000ffd6) volume_small_pane_srt_g2_ParamLimits

0x51b9,	// (0x0000ffd6) volume_small_pane_srt_g2

0x51ca,	// (0x0000ffe7) volume_small_pane_srt_g3_ParamLimits

0x51ca,	// (0x0000ffe7) volume_small_pane_srt_g3

0x51db,	// (0x0000fff8) volume_small_pane_srt_g4_ParamLimits

0x51db,	// (0x0000fff8) volume_small_pane_srt_g4

0x51ec,	// (0x00010009) volume_small_pane_srt_g5_ParamLimits

0x51ec,	// (0x00010009) volume_small_pane_srt_g5

0x51fd,	// (0x0001001a) volume_small_pane_srt_g6_ParamLimits

0x51fd,	// (0x0001001a) volume_small_pane_srt_g6

0x520e,	// (0x0001002b) volume_small_pane_srt_g7_ParamLimits

0x520e,	// (0x0001002b) volume_small_pane_srt_g7

0x521f,	// (0x0001003c) volume_small_pane_srt_g8_ParamLimits

0x521f,	// (0x0001003c) volume_small_pane_srt_g8

0x5230,	// (0x0001004d) volume_small_pane_srt_g9_ParamLimits

0x5230,	// (0x0001004d) volume_small_pane_srt_g9

0x5241,	// (0x0001005e) volume_small_pane_srt_g10_ParamLimits

0x5241,	// (0x0001005e) volume_small_pane_srt_g10

0x0009,

0xf75e,	// (0x0001a57b) volume_small_pane_srt_g_ParamLimits

0xf75e,	// (0x0001a57b) volume_small_pane_srt_g

0x71ad,	// (0x00011fca) query_popup_data_pane_cp2

0xac6b,	// (0x00015a88) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xac6b,	// (0x00015a88) navi_navi_icon_text_pane_srt_t1

0x9c74,	// (0x00014a91) navi_tabs_2_long_pane_srt

0x9c74,	// (0x00014a91) navi_tabs_2_pane_srt

0x9c74,	// (0x00014a91) navi_tabs_3_long_pane_srt

0x9c74,	// (0x00014a91) navi_tabs_3_pane_srt

0x9c74,	// (0x00014a91) navi_tabs_4_pane_srt

0x5dd2,	// (0x00010bef) tabs_2_active_pane_srt_ParamLimits

0x5dd2,	// (0x00010bef) tabs_2_active_pane_srt

0x5de2,	// (0x00010bff) tabs_2_passive_pane_srt_ParamLimits

0x5de2,	// (0x00010bff) tabs_2_passive_pane_srt

0x8d9e,	// (0x00013bbb) bg_passive_tab_pane_cp1_srt_ParamLimits

0x8d9e,	// (0x00013bbb) bg_passive_tab_pane_cp1_srt

0xac37,	// (0x00015a54) bg_passive_tab_pane_g1_cp1_srt

0x86a3,	// (0x000134c0) bg_passive_tab_pane_g2_cp1_srt

0xac40,	// (0x00015a5d) bg_passive_tab_pane_g3_cp1_srt

0x6db9,	// (0x00011bd6) bg_active_tab_pane_cp1_srt_ParamLimits

0x6db9,	// (0x00011bd6) bg_active_tab_pane_cp1_srt

0xac49,	// (0x00015a66) tabs_2_active_pane_srt_g1

0xac51,	// (0x00015a6e) tabs_2_active_pane_srt_t1_ParamLimits

0xac51,	// (0x00015a6e) tabs_2_active_pane_srt_t1

0xac37,	// (0x00015a54) bg_active_tab_pane_g1_cp1_srt

0x86a3,	// (0x000134c0) bg_active_tab_pane_g2_cp1_srt

0xac40,	// (0x00015a5d) bg_active_tab_pane_g3_cp1_srt

0x5d9f,	// (0x00010bbc) tabs_3_active_pane_srt_ParamLimits

0x5d9f,	// (0x00010bbc) tabs_3_active_pane_srt

0x5db0,	// (0x00010bcd) tabs_3_passive_pane_cp_srt_ParamLimits

0x5db0,	// (0x00010bcd) tabs_3_passive_pane_cp_srt

0x5dc1,	// (0x00010bde) tabs_3_passive_pane_srt_ParamLimits

0x5dc1,	// (0x00010bde) tabs_3_passive_pane_srt

0x8d9e,	// (0x00013bbb) bg_passive_tab_pane_cp2_srt_ParamLimits

0x8d9e,	// (0x00013bbb) bg_passive_tab_pane_cp2_srt

0x8bfc,	// (0x00013a19) bg_passive_tab_pane_g1_cp2_srt

0x86a3,	// (0x000134c0) bg_passive_tab_pane_g2_cp2_srt

0x8c05,	// (0x00013a22) bg_passive_tab_pane_g3_cp2_srt

0x6db9,	// (0x00011bd6) bg_active_tab_pane_cp2_srt_ParamLimits

0x6db9,	// (0x00011bd6) bg_active_tab_pane_cp2_srt

0xac1d,	// (0x00015a3a) tabs_3_active_pane_srt_g1

0xac25,	// (0x00015a42) tabs_3_active_pane_srt_t1_ParamLimits

0xac25,	// (0x00015a42) tabs_3_active_pane_srt_t1

0x8bfc,	// (0x00013a19) bg_active_tab_pane_g1_cp2_srt

0x86a3,	// (0x000134c0) bg_active_tab_pane_g2_cp2_srt

0x8c05,	// (0x00013a22) bg_active_tab_pane_g3_cp2_srt

0x5d57,	// (0x00010b74) tabs_4_active_pane_srt_ParamLimits

0x5d57,	// (0x00010b74) tabs_4_active_pane_srt

0x5d69,	// (0x00010b86) tabs_4_passive_pane_cp2_srt_ParamLimits

0x5d69,	// (0x00010b86) tabs_4_passive_pane_cp2_srt

0x53a6,	// (0x000101c3) aid_size_cell_toolbar

0x7f22,	// (0x00012d3f) main_idle_act_pane_ParamLimits

0x5567,	// (0x00010384) popup_large_graphic_colour_window_ParamLimits

0x58ce,	// (0x000106eb) popup_toolbar_window_ParamLimits

0x58ce,	// (0x000106eb) popup_toolbar_window

0xa9df,	// (0x000157fc) list_single_graphic_2heading_pane_ParamLimits

0xa9df,	// (0x000157fc) list_single_graphic_2heading_pane

0x80de,	// (0x00012efb) aid_size_cell_apps_grid_lsc_pane

0x80f0,	// (0x00012f0d) aid_size_cell_apps_grid_prt_pane

0x8d9e,	// (0x00013bbb) bg_wml_button_pane_cp1_ParamLimits

0x8d9e,	// (0x00013bbb) bg_wml_button_pane_cp1

0x9637,	// (0x00014454) form_midp_field_text_pane_t1_ParamLimits

0x93f2,	// (0x0001420f) input_focus_pane_cp050_ParamLimits

0x966e,	// (0x0001448b) list_midp_form_text_pane_ParamLimits

0x9614,	// (0x00014431) input_focus_pane_cp051_ParamLimits

0x9628,	// (0x00014445) list_midp_choice_pane_ParamLimits

0x94ab,	// (0x000142c8) list_single_2graphic_pane_cp3_ParamLimits

0x94ab,	// (0x000142c8) list_single_2graphic_pane_cp3

0x94cf,	// (0x000142ec) list_single_midp_graphic_pane_ParamLimits

0x94cf,	// (0x000142ec) list_single_midp_graphic_pane

0x597b,	// (0x00010798) list_single_graphic_2heading_pane_g1_ParamLimits

0x597b,	// (0x00010798) list_single_graphic_2heading_pane_g1

0x5987,	// (0x000107a4) list_single_graphic_2heading_pane_g4_ParamLimits

0x5987,	// (0x000107a4) list_single_graphic_2heading_pane_g4

0x5993,	// (0x000107b0) list_single_graphic_2heading_pane_g5_ParamLimits

0x5993,	// (0x000107b0) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b1,	// (0x0001a5ce) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b1,	// (0x0001a5ce) list_single_graphic_2heading_pane_g

0x599f,	// (0x000107bc) list_single_graphic_2heading_pane_t1_ParamLimits

0x599f,	// (0x000107bc) list_single_graphic_2heading_pane_t1

0x59b3,	// (0x000107d0) list_single_graphic_2heading_pane_t2_ParamLimits

0x59b3,	// (0x000107d0) list_single_graphic_2heading_pane_t2

0x59cf,	// (0x000107ec) list_single_graphic_2heading_pane_t3_ParamLimits

0x59cf,	// (0x000107ec) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b8,	// (0x0001a5d5) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b8,	// (0x0001a5d5) list_single_graphic_2heading_pane_t

0x91dc,	// (0x00013ff9) bg_popup_sub_pane_cp2

0x9206,	// (0x00014023) grid_toobar_pane

0x59e7,	// (0x00010804) cell_toolbar_pane_ParamLimits

0x59e7,	// (0x00010804) cell_toolbar_pane

0x9270,	// (0x0001408d) cell_toolbar_pane_g1_ParamLimits

0x9270,	// (0x0001408d) cell_toolbar_pane_g1

0x9284,	// (0x000140a1) cell_toolbar_pane_g2_ParamLimits

0x9284,	// (0x000140a1) cell_toolbar_pane_g2

0x0001,

0xf7c6,	// (0x0001a5e3) cell_toolbar_pane_g_ParamLimits

0xf7c6,	// (0x0001a5e3) cell_toolbar_pane_g

0x92a6,	// (0x000140c3) grid_highlight_pane_cp2_ParamLimits

0x92a6,	// (0x000140c3) grid_highlight_pane_cp2

0x92c0,	// (0x000140dd) toolbar_button_pane

0x92cc,	// (0x000140e9) toolbar_button_pane_g1

0x92d4,	// (0x000140f1) toolbar_button_pane_g2

0x92dc,	// (0x000140f9) toolbar_button_pane_g3

0x92e4,	// (0x00014101) toolbar_button_pane_g4

0x92ec,	// (0x00014109) toolbar_button_pane_g5

0x92f4,	// (0x00014111) toolbar_button_pane_g6

0x92fc,	// (0x00014119) toolbar_button_pane_g7

0x9304,	// (0x00014121) toolbar_button_pane_g8

0x930c,	// (0x00014129) toolbar_button_pane_g9

0x0009,

0xf7cb,	// (0x0001a5e8) toolbar_button_pane_g

0x5a1f,	// (0x0001083c) list_single_2graphic_pane_g1_cp3_ParamLimits

0x5a1f,	// (0x0001083c) list_single_2graphic_pane_g1_cp3

0x5a2b,	// (0x00010848) list_single_2graphic_pane_g2_cp3_ParamLimits

0x5a2b,	// (0x00010848) list_single_2graphic_pane_g2_cp3

0x5a3c,	// (0x00010859) list_single_2graphic_pane_g3_cp3

0x5a44,	// (0x00010861) list_single_2graphic_pane_g4_cp3_ParamLimits

0x5a44,	// (0x00010861) list_single_2graphic_pane_g4_cp3

0x5a50,	// (0x0001086d) list_single_2graphic_pane_t1_cp3_ParamLimits

0x5a50,	// (0x0001086d) list_single_2graphic_pane_t1_cp3

0x5a6c,	// (0x00010889) list_single_midp_graphic_pane_g2_ParamLimits

0x5a6c,	// (0x00010889) list_single_midp_graphic_pane_g2

0x53ae,	// (0x000101cb) aid_zoom_text_primary

0x53b6,	// (0x000101d3) aid_zoom_text_secondary

0x8cb9,	// (0x00013ad6) status_small_pane_g7_ParamLimits

0x8cb9,	// (0x00013ad6) status_small_pane_g7

0x8cdc,	// (0x00013af9) status_small_pane_t1_ParamLimits

0x6cf0,	// (0x00011b0d) title_pane_g2

0x0003,

0xf554,	// (0x0001a371) title_pane_g

0x724e,	// (0x0001206b) aid_size_cell_colour_1_pane_ParamLimits

0x724e,	// (0x0001206b) aid_size_cell_colour_1_pane

0x7262,	// (0x0001207f) aid_size_cell_colour_2_pane_ParamLimits

0x7262,	// (0x0001207f) aid_size_cell_colour_2_pane

0x7276,	// (0x00012093) aid_size_cell_colour_3_pane_ParamLimits

0x7276,	// (0x00012093) aid_size_cell_colour_3_pane

0x728a,	// (0x000120a7) aid_size_cell_colour_4_pane_ParamLimits

0x728a,	// (0x000120a7) aid_size_cell_colour_4_pane

0x4e06,	// (0x0000fc23) title_pane_stacon_g1_ParamLimits

0x4e06,	// (0x0000fc23) title_pane_stacon_g1

0x9a5b,	// (0x00014878) popup_note_wait_window_g3_ParamLimits

0x9a5b,	// (0x00014878) popup_note_wait_window_g3

0x9ad1,	// (0x000148ee) popup_note_wait_window_t5_ParamLimits

0x9ad1,	// (0x000148ee) popup_note_wait_window_t5

0x6cd9,	// (0x00011af6) main_feb_china_hwr_fs_writing_pane

0x544c,	// (0x00010269) popup_feb_china_hwr_fs_window_ParamLimits

0x544c,	// (0x00010269) popup_feb_china_hwr_fs_window

0x5a8e,	// (0x000108ab) aid_size_cell_hwr_fs_ParamLimits

0x5a8e,	// (0x000108ab) aid_size_cell_hwr_fs

0x93f2,	// (0x0001420f) bg_popup_sub_pane_cp3_ParamLimits

0x93f2,	// (0x0001420f) bg_popup_sub_pane_cp3

0x5aa3,	// (0x000108c0) grid_hwr_fs_pane_ParamLimits

0x5aa3,	// (0x000108c0) grid_hwr_fs_pane

0x5abb,	// (0x000108d8) linegrid_hwr_fs_pane_ParamLimits

0x5abb,	// (0x000108d8) linegrid_hwr_fs_pane

0x5acb,	// (0x000108e8) cell_hwr_fs_pane_ParamLimits

0x5acb,	// (0x000108e8) cell_hwr_fs_pane

0x93fe,	// (0x0001421b) linegrid_hwr_fs_pane_g1_ParamLimits

0x93fe,	// (0x0001421b) linegrid_hwr_fs_pane_g1

0x940a,	// (0x00014227) linegrid_hwr_fs_pane_g2_ParamLimits

0x940a,	// (0x00014227) linegrid_hwr_fs_pane_g2

0x941c,	// (0x00014239) linegrid_hwr_fs_pane_g3_ParamLimits

0x941c,	// (0x00014239) linegrid_hwr_fs_pane_g3

0x5aed,	// (0x0001090a) linegrid_hwr_fs_pane_g4_ParamLimits

0x5aed,	// (0x0001090a) linegrid_hwr_fs_pane_g4

0x5b07,	// (0x00010924) linegrid_hwr_fs_pane_g5_ParamLimits

0x5b07,	// (0x00010924) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f6,	// (0x0001a613) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f6,	// (0x0001a613) linegrid_hwr_fs_pane_g

0x9428,	// (0x00014245) cell_hwr_fs_pane_g1_ParamLimits

0x9428,	// (0x00014245) cell_hwr_fs_pane_g1

0x9113,	// (0x00013f30) cell_hwr_fs_pane_g2_ParamLimits

0x9113,	// (0x00013f30) cell_hwr_fs_pane_g2

0x943e,	// (0x0001425b) cell_hwr_fs_pane_g3_ParamLimits

0x943e,	// (0x0001425b) cell_hwr_fs_pane_g3

0x944b,	// (0x00014268) cell_hwr_fs_pane_g4_ParamLimits

0x944b,	// (0x00014268) cell_hwr_fs_pane_g4

0x0003,

0xf801,	// (0x0001a61e) cell_hwr_fs_pane_g_ParamLimits

0xf801,	// (0x0001a61e) cell_hwr_fs_pane_g

0x5b1d,	// (0x0001093a) cell_hwr_fs_pane_t1

0x6cd9,	// (0x00011af6) grid_highlight_pane_cp6

0x6cd9,	// (0x00011af6) main_idle_act2_pane

0x7e95,	// (0x00012cb2) aid_inside_area_popup_secondary

0xa114,	// (0x00014f31) aid_inside_area_window_primary_ParamLimits

0xa114,	// (0x00014f31) aid_inside_area_window_primary

0xad84,	// (0x00015ba1) ai2_news_ticker_pane

0xad8c,	// (0x00015ba9) aid_size_cell_ai1_link_ParamLimits

0xad8c,	// (0x00015ba9) aid_size_cell_ai1_link

0xada6,	// (0x00015bc3) popup_ai2_data_window_ParamLimits

0xada6,	// (0x00015bc3) popup_ai2_data_window

0xadbc,	// (0x00015bd9) popup_ai2_link_window_ParamLimits

0xadbc,	// (0x00015bd9) popup_ai2_link_window

0x93f2,	// (0x0001420f) bg_popup_sub_pane_cp4_ParamLimits

0x93f2,	// (0x0001420f) bg_popup_sub_pane_cp4

0xadd0,	// (0x00015bed) grid_ai2_link_pane_ParamLimits

0xadd0,	// (0x00015bed) grid_ai2_link_pane

0xade7,	// (0x00015c04) popup_ai2_link_window_g1_ParamLimits

0xade7,	// (0x00015c04) popup_ai2_link_window_g1

0xadf3,	// (0x00015c10) popup_ai2_link_window_g2_ParamLimits

0xadf3,	// (0x00015c10) popup_ai2_link_window_g2

0x0001,

0xf9d4,	// (0x0001a7f1) popup_ai2_link_window_g_ParamLimits

0xf9d4,	// (0x0001a7f1) popup_ai2_link_window_g

0xae02,	// (0x00015c1f) ai2_mp_button_pane

0xae0a,	// (0x00015c27) ai2_mp_volume_pane

0x9614,	// (0x00014431) bg_popup_sub_pane_cp5_ParamLimits

0x9614,	// (0x00014431) bg_popup_sub_pane_cp5

0xae12,	// (0x00015c2f) heading_ai2_gene_pane_ParamLimits

0xae12,	// (0x00015c2f) heading_ai2_gene_pane

0xae1e,	// (0x00015c3b) list_ai2_gene_pane_ParamLimits

0xae1e,	// (0x00015c3b) list_ai2_gene_pane

0xae66,	// (0x00015c83) cell_ai2_link_pane_ParamLimits

0xae66,	// (0x00015c83) cell_ai2_link_pane

0xae7c,	// (0x00015c99) cell_ai2_link_pane_g1

0x6cd9,	// (0x00011af6) grid_highlight_pane_cp7

0x5e0f,	// (0x00010c2c) ai2_mp_volume_pane_g1

0xaf8e,	// (0x00015dab) ai2_mp_volume_pane_g2

0xaec1,	// (0x00015cde) list_ai2_gene_pane_t1

0xaf96,	// (0x00015db3) ai2_mp_volume_pane_g3

0x0002,

0xf9ed,	// (0x0001a80a) ai2_mp_volume_pane_g

0x5e17,	// (0x00010c34) volume_small_pane_cp3

0xaf9e,	// (0x00015dbb) aid_size_cell_ai2_button

0xafa6,	// (0x00015dc3) grid_ai2_button_pane

0xafaf,	// (0x00015dcc) cell_ai2_button_pane_ParamLimits

0xafaf,	// (0x00015dcc) cell_ai2_button_pane

0x6ccf,	// (0x00011aec) cell_ai2_button_pane_g1

0x6cd9,	// (0x00011af6) grid_highlight_pane_cp8

0xaf0c,	// (0x00015d29) ai2_gene_pane_t1_ParamLimits

0xaf0c,	// (0x00015d29) ai2_gene_pane_t1

0x539c,	// (0x000101b9) aid_height_parent_landscape

0xa7c8,	// (0x000155e5) aid_height_set_list

0xa7d9,	// (0x000155f6) aid_size_parent

0xabab,	// (0x000159c8) aid_size_cell_graphic_pane_ParamLimits

0xae2e,	// (0x00015c4b) popup_ai2_data_window_g1_ParamLimits

0xae2e,	// (0x00015c4b) popup_ai2_data_window_g1

0xae3a,	// (0x00015c57) ai2_news_ticker_pane_g1

0xae42,	// (0x00015c5f) ai2_news_ticker_pane_g2

0x0001,

0xf9d9,	// (0x0001a7f6) ai2_news_ticker_pane_g

0xae4a,	// (0x00015c67) ai2_news_ticker_pane_t1

0xae58,	// (0x00015c75) ai2_news_ticker_pane_t2

0x0001,

0xf9de,	// (0x0001a7fb) ai2_news_ticker_pane_t

0xae85,	// (0x00015ca2) heading_ai2_gene_pane_g1

0xae8d,	// (0x00015caa) heading_ai2_gene_pane_t1_ParamLimits

0xae8d,	// (0x00015caa) heading_ai2_gene_pane_t1

0xaea2,	// (0x00015cbf) list_highlight_pane_cp6

0xaeaa,	// (0x00015cc7) ai2_gene_pane_ParamLimits

0xaeaa,	// (0x00015cc7) ai2_gene_pane

0xaecf,	// (0x00015cec) list_ai2_gene_pane_t2

0x0001,

0xf9e3,	// (0x0001a800) list_ai2_gene_pane_t

0xaedd,	// (0x00015cfa) list_highlight_pane_cp8_ParamLimits

0xaedd,	// (0x00015cfa) list_highlight_pane_cp8

0xaeee,	// (0x00015d0b) ai2_gene_pane_g1_ParamLimits

0xaeee,	// (0x00015d0b) ai2_gene_pane_g1

0xaf00,	// (0x00015d1d) ai2_gene_pane_g2_ParamLimits

0xaf00,	// (0x00015d1d) ai2_gene_pane_g2

0x0001,

0xf9e8,	// (0x0001a805) ai2_gene_pane_g_ParamLimits

0xf9e8,	// (0x0001a805) ai2_gene_pane_g

0x75d5,	// (0x000123f2) scroll_pane_cp12

0x535b,	// (0x00010178) control_pane_t3_ParamLimits

0x535b,	// (0x00010178) control_pane_t3

0x8ccd,	// (0x00013aea) status_small_pane_g8_ParamLimits

0x8ccd,	// (0x00013aea) status_small_pane_g8

0x5532,	// (0x0001034f) popup_find_window_ParamLimits

0x5745,	// (0x00010562) popup_note_image_window_ParamLimits

0x9242,	// (0x0001405f) list_double2_graphic_pane_vc_g1_ParamLimits

0x9242,	// (0x0001405f) list_double2_graphic_pane_vc_g1

0x898f,	// (0x000137ac) list_double2_graphic_pane_vc_g2_ParamLimits

0x898f,	// (0x000137ac) list_double2_graphic_pane_vc_g2

0x924e,	// (0x0001406b) list_double2_graphic_pane_vc_g3_ParamLimits

0x924e,	// (0x0001406b) list_double2_graphic_pane_vc_g3

0x0002,

0xf7bf,	// (0x0001a5dc) list_double2_graphic_pane_vc_g_ParamLimits

0xf7bf,	// (0x0001a5dc) list_double2_graphic_pane_vc_g

0x925a,	// (0x00014077) list_double2_graphic_pane_vc_t1_ParamLimits

0x925a,	// (0x00014077) list_double2_graphic_pane_vc_t1

0x898f,	// (0x000137ac) list_single_heading_pane_vc_g1_ParamLimits

0x898f,	// (0x000137ac) list_single_heading_pane_vc_g1

0x924e,	// (0x0001406b) list_single_heading_pane_vc_g2_ParamLimits

0x924e,	// (0x0001406b) list_single_heading_pane_vc_g2

0x0001,

0xf7e0,	// (0x0001a5fd) list_single_heading_pane_vc_g_ParamLimits

0xf7e0,	// (0x0001a5fd) list_single_heading_pane_vc_g

0x9314,	// (0x00014131) list_single_heading_pane_vc_t1_ParamLimits

0x9314,	// (0x00014131) list_single_heading_pane_vc_t1

0x932c,	// (0x00014149) list_single_heading_pane_vc_t2_ParamLimits

0x932c,	// (0x00014149) list_single_heading_pane_vc_t2

0x0001,

0xf7e5,	// (0x0001a602) list_single_heading_pane_vc_t_ParamLimits

0xf7e5,	// (0x0001a602) list_single_heading_pane_vc_t

0x9340,	// (0x0001415d) list_setting_number_pane_vc_g1_ParamLimits

0x9340,	// (0x0001415d) list_setting_number_pane_vc_g1

0x934c,	// (0x00014169) list_setting_number_pane_vc_g2_ParamLimits

0x934c,	// (0x00014169) list_setting_number_pane_vc_g2

0x0001,

0xf7ea,	// (0x0001a607) list_setting_number_pane_vc_g_ParamLimits

0xf7ea,	// (0x0001a607) list_setting_number_pane_vc_g

0x9358,	// (0x00014175) list_setting_number_pane_vc_t1_ParamLimits

0x9358,	// (0x00014175) list_setting_number_pane_vc_t1

0x936c,	// (0x00014189) list_setting_number_pane_vc_t2_ParamLimits

0x936c,	// (0x00014189) list_setting_number_pane_vc_t2

0x9388,	// (0x000141a5) list_setting_number_pane_vc_t3_ParamLimits

0x9388,	// (0x000141a5) list_setting_number_pane_vc_t3

0x0002,

0xf7ef,	// (0x0001a60c) list_setting_number_pane_vc_t_ParamLimits

0xf7ef,	// (0x0001a60c) list_setting_number_pane_vc_t

0x93b6,	// (0x000141d3) set_value_pane_vc_ParamLimits

0x93b6,	// (0x000141d3) set_value_pane_vc

0xa9df,	// (0x000157fc) list_double2_graphic_pane_vc_ParamLimits

0xa9df,	// (0x000157fc) list_double2_graphic_pane_vc

0xa9df,	// (0x000157fc) list_double2_large_graphic_pane_vc_ParamLimits

0xa9df,	// (0x000157fc) list_double2_large_graphic_pane_vc

0xa9df,	// (0x000157fc) list_double2_pane_vc_ParamLimits

0xa9df,	// (0x000157fc) list_double2_pane_vc

0xa9df,	// (0x000157fc) list_double_graphic_heading_pane_vc_ParamLimits

0xa9df,	// (0x000157fc) list_double_graphic_heading_pane_vc

0xa9df,	// (0x000157fc) list_double_graphic_pane_vc_ParamLimits

0xa9df,	// (0x000157fc) list_double_graphic_pane_vc

0xa9df,	// (0x000157fc) list_double_heading_pane_vc_ParamLimits

0xa9df,	// (0x000157fc) list_double_heading_pane_vc

0xa9df,	// (0x000157fc) list_double_large_graphic_pane_vc_ParamLimits

0xa9df,	// (0x000157fc) list_double_large_graphic_pane_vc

0xa9df,	// (0x000157fc) list_double_number_pane_vc_ParamLimits

0xa9df,	// (0x000157fc) list_double_number_pane_vc

0xa9df,	// (0x000157fc) list_double_pane_vc_ParamLimits

0xa9df,	// (0x000157fc) list_double_pane_vc

0xa9df,	// (0x000157fc) list_double_time_pane_vc_ParamLimits

0xa9df,	// (0x000157fc) list_double_time_pane_vc

0xa9df,	// (0x000157fc) list_setting_number_pane_vc_ParamLimits

0xa9df,	// (0x000157fc) list_setting_number_pane_vc

0xa9df,	// (0x000157fc) list_setting_pane_vc_ParamLimits

0xa9df,	// (0x000157fc) list_setting_pane_vc

0xa9df,	// (0x000157fc) list_single_graphic_heading_pane_vc_ParamLimits

0xa9df,	// (0x000157fc) list_single_graphic_heading_pane_vc

0xa9df,	// (0x000157fc) list_single_heading_pane_vc_ParamLimits

0xa9df,	// (0x000157fc) list_single_heading_pane_vc

0xa9f1,	// (0x0001580e) list_single_number_heading_pane_vc_ParamLimits

0xa9f1,	// (0x0001580e) list_single_number_heading_pane_vc

0x9242,	// (0x0001405f) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x9242,	// (0x0001405f) list_double_graphic_heading_pane_vc_g1

0xafe3,	// (0x00015e00) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xafe3,	// (0x00015e00) list_double_graphic_heading_pane_vc_g2

0xafef,	// (0x00015e0c) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xafef,	// (0x00015e0c) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9f4,	// (0x0001a811) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9f4,	// (0x0001a811) list_double_graphic_heading_pane_vc_g

0xaffb,	// (0x00015e18) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xaffb,	// (0x00015e18) list_double_graphic_heading_pane_vc_t1

0xb017,	// (0x00015e34) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xb017,	// (0x00015e34) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9fb,	// (0x0001a818) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9fb,	// (0x0001a818) list_double_graphic_heading_pane_vc_t

0x9340,	// (0x0001415d) list_setting_pane_vc_g1_ParamLimits

0x9340,	// (0x0001415d) list_setting_pane_vc_g1

0x934c,	// (0x00014169) list_setting_pane_vc_g2_ParamLimits

0x934c,	// (0x00014169) list_setting_pane_vc_g2

0x0001,

0xf7ea,	// (0x0001a607) list_setting_pane_vc_g_ParamLimits

0xf7ea,	// (0x0001a607) list_setting_pane_vc_g

0xb242,	// (0x0001605f) list_setting_pane_vc_t1_ParamLimits

0xb242,	// (0x0001605f) list_setting_pane_vc_t1

0xb25e,	// (0x0001607b) list_setting_pane_vc_t2_ParamLimits

0xb25e,	// (0x0001607b) list_setting_pane_vc_t2

0x0001,

0xfa29,	// (0x0001a846) list_setting_pane_vc_t_ParamLimits

0xfa29,	// (0x0001a846) list_setting_pane_vc_t

0x93b6,	// (0x000141d3) set_value_pane_cp_vc_ParamLimits

0x93b6,	// (0x000141d3) set_value_pane_cp_vc

0x898f,	// (0x000137ac) list_single_number_heading_pane_vc_g1_ParamLimits

0x898f,	// (0x000137ac) list_single_number_heading_pane_vc_g1

0x924e,	// (0x0001406b) list_single_number_heading_pane_vc_g2_ParamLimits

0x924e,	// (0x0001406b) list_single_number_heading_pane_vc_g2

0x0001,

0xf7e0,	// (0x0001a5fd) list_single_number_heading_pane_vc_g_ParamLimits

0xf7e0,	// (0x0001a5fd) list_single_number_heading_pane_vc_g

0x9314,	// (0x00014131) list_single_number_heading_pane_vc_t1_ParamLimits

0x9314,	// (0x00014131) list_single_number_heading_pane_vc_t1

0xb27a,	// (0x00016097) list_single_number_heading_pane_vc_t2_ParamLimits

0xb27a,	// (0x00016097) list_single_number_heading_pane_vc_t2

0xb28e,	// (0x000160ab) list_single_number_heading_pane_vc_t3_ParamLimits

0xb28e,	// (0x000160ab) list_single_number_heading_pane_vc_t3

0x0002,

0xfa2e,	// (0x0001a84b) list_single_number_heading_pane_vc_t_ParamLimits

0xfa2e,	// (0x0001a84b) list_single_number_heading_pane_vc_t

0x9242,	// (0x0001405f) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x9242,	// (0x0001405f) list_single_graphic_heading_pane_vc_g1

0x898f,	// (0x000137ac) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x898f,	// (0x000137ac) list_single_graphic_heading_pane_vc_g4

0x924e,	// (0x0001406b) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x924e,	// (0x0001406b) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7bf,	// (0x0001a5dc) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7bf,	// (0x0001a5dc) list_single_graphic_heading_pane_vc_g

0x9314,	// (0x00014131) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x9314,	// (0x00014131) list_single_graphic_heading_pane_vc_t1

0xb2a0,	// (0x000160bd) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xb2a0,	// (0x000160bd) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa35,	// (0x0001a852) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa35,	// (0x0001a852) list_single_graphic_heading_pane_vc_t

0x898f,	// (0x000137ac) list_double2_pane_vc_g1_ParamLimits

0x898f,	// (0x000137ac) list_double2_pane_vc_g1

0x924e,	// (0x0001406b) list_double2_pane_vc_g2_ParamLimits

0x924e,	// (0x0001406b) list_double2_pane_vc_g2

0x0001,

0xf7e0,	// (0x0001a5fd) list_double2_pane_vc_g_ParamLimits

0xf7e0,	// (0x0001a5fd) list_double2_pane_vc_g

0xb2b4,	// (0x000160d1) list_double2_pane_vc_t1_ParamLimits

0xb2b4,	// (0x000160d1) list_double2_pane_vc_t1

0xb2ca,	// (0x000160e7) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xb2ca,	// (0x000160e7) list_double2_large_graphic_pane_vc_g1

0x898f,	// (0x000137ac) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x898f,	// (0x000137ac) list_double2_large_graphic_pane_vc_g2

0x924e,	// (0x0001406b) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x924e,	// (0x0001406b) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa3a,	// (0x0001a857) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa3a,	// (0x0001a857) list_double2_large_graphic_pane_vc_g

0xb2d6,	// (0x000160f3) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xb2d6,	// (0x000160f3) list_double2_large_graphic_pane_vc_t1

0xb2ec,	// (0x00016109) list_double_time_pane_vc_g1_ParamLimits

0xb2ec,	// (0x00016109) list_double_time_pane_vc_g1

0xb2f8,	// (0x00016115) list_double_time_pane_vc_g2_ParamLimits

0xb2f8,	// (0x00016115) list_double_time_pane_vc_g2

0x0001,

0xfa41,	// (0x0001a85e) list_double_time_pane_vc_g_ParamLimits

0xfa41,	// (0x0001a85e) list_double_time_pane_vc_g

0xb304,	// (0x00016121) list_double_time_pane_vc_t1_ParamLimits

0xb304,	// (0x00016121) list_double_time_pane_vc_t1

0xb328,	// (0x00016145) list_double_time_pane_vc_t2_ParamLimits

0xb328,	// (0x00016145) list_double_time_pane_vc_t2

0xb357,	// (0x00016174) list_double_time_pane_vc_t3_ParamLimits

0xb357,	// (0x00016174) list_double_time_pane_vc_t3

0xb369,	// (0x00016186) list_double_time_pane_vc_t4_ParamLimits

0xb369,	// (0x00016186) list_double_time_pane_vc_t4

0x0003,

0xfa46,	// (0x0001a863) list_double_time_pane_vc_t_ParamLimits

0xfa46,	// (0x0001a863) list_double_time_pane_vc_t

0x898f,	// (0x000137ac) list_double_pane_vc_g1_ParamLimits

0x898f,	// (0x000137ac) list_double_pane_vc_g1

0x924e,	// (0x0001406b) list_double_pane_vc_g2_ParamLimits

0x924e,	// (0x0001406b) list_double_pane_vc_g2

0x0001,

0xf7e0,	// (0x0001a5fd) list_double_pane_vc_g_ParamLimits

0xf7e0,	// (0x0001a5fd) list_double_pane_vc_g

0xb37d,	// (0x0001619a) list_double_pane_vc_t1_ParamLimits

0xb37d,	// (0x0001619a) list_double_pane_vc_t1

0xb391,	// (0x000161ae) list_double_pane_vc_t2_ParamLimits

0xb391,	// (0x000161ae) list_double_pane_vc_t2

0x0001,

0xfa4f,	// (0x0001a86c) list_double_pane_vc_t_ParamLimits

0xfa4f,	// (0x0001a86c) list_double_pane_vc_t

0x898f,	// (0x000137ac) list_double_number_pane_vc_g1_ParamLimits

0x898f,	// (0x000137ac) list_double_number_pane_vc_g1

0x924e,	// (0x0001406b) list_double_number_pane_vc_g2_ParamLimits

0x924e,	// (0x0001406b) list_double_number_pane_vc_g2

0x0001,

0xf7e0,	// (0x0001a5fd) list_double_number_pane_vc_g_ParamLimits

0xf7e0,	// (0x0001a5fd) list_double_number_pane_vc_g

0xb3a9,	// (0x000161c6) list_double_number_pane_vc_t1_ParamLimits

0xb3a9,	// (0x000161c6) list_double_number_pane_vc_t1

0xb3bd,	// (0x000161da) list_double_number_pane_vc_t2_ParamLimits

0xb3bd,	// (0x000161da) list_double_number_pane_vc_t2

0xb3d1,	// (0x000161ee) list_double_number_pane_vc_t3_ParamLimits

0xb3d1,	// (0x000161ee) list_double_number_pane_vc_t3

0x0002,

0xfa54,	// (0x0001a871) list_double_number_pane_vc_t_ParamLimits

0xfa54,	// (0x0001a871) list_double_number_pane_vc_t

0xb3e9,	// (0x00016206) list_double_large_graphic_pane_vc_g1_ParamLimits

0xb3e9,	// (0x00016206) list_double_large_graphic_pane_vc_g1

0xb3fa,	// (0x00016217) list_double_large_graphic_pane_vc_g2_ParamLimits

0xb3fa,	// (0x00016217) list_double_large_graphic_pane_vc_g2

0x924e,	// (0x0001406b) list_double_large_graphic_pane_vc_g3_ParamLimits

0x924e,	// (0x0001406b) list_double_large_graphic_pane_vc_g3

0xb409,	// (0x00016226) list_double_large_graphic_pane_vc_g4_ParamLimits

0xb409,	// (0x00016226) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa5b,	// (0x0001a878) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa5b,	// (0x0001a878) list_double_large_graphic_pane_vc_g

0xb415,	// (0x00016232) list_double_large_graphic_pane_vc_t1_ParamLimits

0xb415,	// (0x00016232) list_double_large_graphic_pane_vc_t1

0xb42e,	// (0x0001624b) list_double_large_graphic_pane_vc_t2_ParamLimits

0xb42e,	// (0x0001624b) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa64,	// (0x0001a881) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa64,	// (0x0001a881) list_double_large_graphic_pane_vc_t

0xafe3,	// (0x00015e00) list_double_heading_pane_vc_g1_ParamLimits

0xafe3,	// (0x00015e00) list_double_heading_pane_vc_g1

0xafef,	// (0x00015e0c) list_double_heading_pane_vc_g2_ParamLimits

0xafef,	// (0x00015e0c) list_double_heading_pane_vc_g2

0x0001,

0xfa69,	// (0x0001a886) list_double_heading_pane_vc_g_ParamLimits

0xfa69,	// (0x0001a886) list_double_heading_pane_vc_g

0xb447,	// (0x00016264) list_double_heading_pane_vc_t1_ParamLimits

0xb447,	// (0x00016264) list_double_heading_pane_vc_t1

0x9314,	// (0x00014131) list_double_heading_pane_vc_t2_ParamLimits

0x9314,	// (0x00014131) list_double_heading_pane_vc_t2

0x0001,

0xfa6e,	// (0x0001a88b) list_double_heading_pane_vc_t_ParamLimits

0xfa6e,	// (0x0001a88b) list_double_heading_pane_vc_t

0x9242,	// (0x0001405f) list_double_graphic_pane_vc_g1_ParamLimits

0x9242,	// (0x0001405f) list_double_graphic_pane_vc_g1

0xb45b,	// (0x00016278) list_double_graphic_pane_vc_g2_ParamLimits

0xb45b,	// (0x00016278) list_double_graphic_pane_vc_g2

0xb041,	// (0x00015e5e) list_double_graphic_pane_vc_g3_ParamLimits

0xb041,	// (0x00015e5e) list_double_graphic_pane_vc_g3

0x0002,

0xfa73,	// (0x0001a890) list_double_graphic_pane_vc_g_ParamLimits

0xfa73,	// (0x0001a890) list_double_graphic_pane_vc_g

0xb46a,	// (0x00016287) list_double_graphic_pane_vc_t1_ParamLimits

0xb46a,	// (0x00016287) list_double_graphic_pane_vc_t1

0xb47e,	// (0x0001629b) list_double_graphic_pane_vc_t2_ParamLimits

0xb47e,	// (0x0001629b) list_double_graphic_pane_vc_t2

0x0001,

0xfa7a,	// (0x0001a897) list_double_graphic_pane_vc_t_ParamLimits

0xfa7a,	// (0x0001a897) list_double_graphic_pane_vc_t

0x4963,	// (0x0000f780) aid_size_cell_fastswap

0x496b,	// (0x0000f788) aid_size_cell_touch_ParamLimits

0x496b,	// (0x0000f788) aid_size_cell_touch

0x4bd0,	// (0x0000f9ed) popup_fast_swap_wide_window_ParamLimits

0x4bd0,	// (0x0000f9ed) popup_fast_swap_wide_window

0x4cda,	// (0x0000faf7) touch_pane_ParamLimits

0x4cda,	// (0x0000faf7) touch_pane

0x7ade,	// (0x000128fb) button_value_adjust_pane_cp2

0x7ae6,	// (0x00012903) button_value_adjust_pane_cp4

0x7b08,	// (0x00012925) form_field_data_pane_cp2

0x7b29,	// (0x00012946) form_field_data_wide_pane_cp2

0x81a9,	// (0x00012fc6) bg_scroll_pane_ParamLimits

0x4f68,	// (0x0000fd85) scroll_handle_pane_ParamLimits

0x4f7c,	// (0x0000fd99) scroll_sc2_down_pane_ParamLimits

0x4f7c,	// (0x0000fd99) scroll_sc2_down_pane

0x81da,	// (0x00012ff7) scroll_sc2_up_pane_ParamLimits

0x81da,	// (0x00012ff7) scroll_sc2_up_pane

0xb92c,	// (0x00016749) grid_wheel_folder_pane_g1_ParamLimits

0xb92c,	// (0x00016749) grid_wheel_folder_pane_g1

0x5141,	// (0x0000ff5e) clock_nsta_pane_cp2_ParamLimits

0x5141,	// (0x0000ff5e) clock_nsta_pane_cp2

0x7f22,	// (0x00012d3f) listscroll_midp_pane_ParamLimits

0x8a5e,	// (0x0001387b) midp_canvas_pane

0x8d48,	// (0x00013b65) nsta_clock_indic_pane

0x8d84,	// (0x00013ba1) listscroll_form_pane_vc

0x8d8c,	// (0x00013ba9) listscroll_set_pane_vc_ParamLimits

0x8d8c,	// (0x00013ba9) listscroll_set_pane_vc

0x8e95,	// (0x00013cb2) clock_nsta_pane

0x8f0a,	// (0x00013d27) indicator_nsta_pane

0x91dc,	// (0x00013ff9) bg_popup_sub_pane_cp2_ParamLimits

0x91f0,	// (0x0001400d) find_pane_cp2_ParamLimits

0x91f0,	// (0x0001400d) find_pane_cp2

0x9206,	// (0x00014023) grid_toobar_pane_ParamLimits

0x93c6,	// (0x000141e3) list_form_gen_pane_vc_ParamLimits

0x93c6,	// (0x000141e3) list_form_gen_pane_vc

0x93dc,	// (0x000141f9) scroll_pane_cp8_vc_ParamLimits

0x93dc,	// (0x000141f9) scroll_pane_cp8_vc

0x9458,	// (0x00014275) data_form_wide_pane_vc_ParamLimits

0x9458,	// (0x00014275) data_form_wide_pane_vc

0x9464,	// (0x00014281) form_field_data_wide_pane_vc_g1

0x946c,	// (0x00014289) form_field_data_wide_pane_vc_t1_ParamLimits

0x946c,	// (0x00014289) form_field_data_wide_pane_vc_t1

0x7bc4,	// (0x000129e1) input_focus_pane_cp6_vc_ParamLimits

0x7bc4,	// (0x000129e1) input_focus_pane_cp6_vc

0x97d6,	// (0x000145f3) list_midp_pane_ParamLimits

0x97e2,	// (0x000145ff) scroll_pane_cp16_ParamLimits

0x97e2,	// (0x000145ff) scroll_pane_cp16

0x9830,	// (0x0001464d) button_value_adjust_pane_ParamLimits

0x9830,	// (0x0001464d) button_value_adjust_pane

0xa7eb,	// (0x00015608) button_value_adjust_pane_cp6_ParamLimits

0xa7eb,	// (0x00015608) button_value_adjust_pane_cp6

0xa915,	// (0x00015732) settings_code_pane_cp_ParamLimits

0xa915,	// (0x00015732) settings_code_pane_cp

0x6ccf,	// (0x00011aec) cell_touch_pane_g1

0x6ccf,	// (0x00011aec) cell_touch_pane_g2

0x0001,

0xf704,	// (0x0001a521) cell_touch_pane_g

0xafc1,	// (0x00015dde) cell_touch_pane_cp_ParamLimits

0xafc1,	// (0x00015dde) cell_touch_pane_cp

0xafd1,	// (0x00015dee) cell_touch_pane_ParamLimits

0xafd1,	// (0x00015dee) cell_touch_pane

0x6ccf,	// (0x00011aec) scroll_sc2_down_pane_g1

0x6ccf,	// (0x00011aec) scroll_sc2_up_pane_g1

0x6cd9,	// (0x00011af6) bg_set_opt_pane_cp4_vc

0xb035,	// (0x00015e52) list_set_graphic_pane_vc_g1_ParamLimits

0xb035,	// (0x00015e52) list_set_graphic_pane_vc_g1

0xb041,	// (0x00015e5e) list_set_graphic_pane_vc_g2_ParamLimits

0xb041,	// (0x00015e5e) list_set_graphic_pane_vc_g2

0x0001,

0xfa00,	// (0x0001a81d) list_set_graphic_pane_vc_g_ParamLimits

0xfa00,	// (0x0001a81d) list_set_graphic_pane_vc_g

0xb04d,	// (0x00015e6a) text_primary_small_cp13_vc_ParamLimits

0xb04d,	// (0x00015e6a) text_primary_small_cp13_vc

0xb065,	// (0x00015e82) list_set_graphic_pane_vc_ParamLimits

0xb065,	// (0x00015e82) list_set_graphic_pane_vc

0x6cd9,	// (0x00011af6) input_focus_pane_cp2_vc

0x6ccf,	// (0x00011aec) setting_code_pane_vc_g1

0x6e04,	// (0x00011c21) setting_code_pane_vc_t1

0xb077,	// (0x00015e94) set_text_pane_vc_t1_ParamLimits

0xb077,	// (0x00015e94) set_text_pane_vc_t1

0x6cd9,	// (0x00011af6) input_focus_pane_cp1_vc

0xb093,	// (0x00015eb0) list_set_text_pane_vc

0x6ccf,	// (0x00011aec) setting_text_pane_vc_g1

0x6cd9,	// (0x00011af6) bg_set_opt_pane_cp2_vc

0x6dfb,	// (0x00011c18) setting_slider_graphic_pane_vc_g1

0xb09d,	// (0x00015eba) setting_slider_graphic_pane_vc_t1

0xb0ad,	// (0x00015eca) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa05,	// (0x0001a822) setting_slider_graphic_pane_vc_t

0xb0bd,	// (0x00015eda) slider_set_pane_cp_vc

0xb0c5,	// (0x00015ee2) slider_set_pane_vc_g1

0xb0ce,	// (0x00015eeb) slider_set_pane_vc_g2

0x0006,

0xfa0a,	// (0x0001a827) slider_set_pane_vc_g

0x7ced,	// (0x00012b0a) set_opt_bg_pane_g1_copy1

0x7cf5,	// (0x00012b12) set_opt_bg_pane_g2_copy1

0xb0fa,	// (0x00015f17) set_opt_bg_pane_g3_copy1

0x7d05,	// (0x00012b22) set_opt_bg_pane_g4_copy1

0x7d0d,	// (0x00012b2a) set_opt_bg_pane_g5_copy1

0x7d15,	// (0x00012b32) set_opt_bg_pane_g6_copy1

0xb104,	// (0x00015f21) set_opt_bg_pane_g7_copy1

0xb10c,	// (0x00015f29) set_opt_bg_pane_g8_copy1

0xb116,	// (0x00015f33) set_opt_bg_pane_g9_copy1

0x6cd9,	// (0x00011af6) bg_set_opt_pane_cp_vc

0xb120,	// (0x00015f3d) setting_slider_pane_vc_t1

0xb12f,	// (0x00015f4c) setting_slider_pane_vc_t2

0xb13f,	// (0x00015f5c) setting_slider_pane_vc_t3

0x0002,

0xfa19,	// (0x0001a836) setting_slider_pane_vc_t

0xb14f,	// (0x00015f6c) slider_set_pane_vc

0x5b2b,	// (0x00010948) volume_set_pane_vc_g1

0x5b34,	// (0x00010951) volume_set_pane_vc_g2

0x5b3d,	// (0x0001095a) volume_set_pane_vc_g3

0x5b46,	// (0x00010963) volume_set_pane_vc_g4

0x5b4f,	// (0x0001096c) volume_set_pane_vc_g5

0x5b58,	// (0x00010975) volume_set_pane_vc_g6

0x5b61,	// (0x0001097e) volume_set_pane_vc_g7

0x5b6a,	// (0x00010987) volume_set_pane_vc_g8

0x5b73,	// (0x00010990) volume_set_pane_vc_g9

0x5b7c,	// (0x00010999) volume_set_pane_vc_g10

0x0009,

0xf8b7,	// (0x0001a6d4) volume_set_pane_vc_g

0xb157,	// (0x00015f74) volume_set_pane_vc

0xb15f,	// (0x00015f7c) button_value_adjust_pane_cp1_vc

0xb169,	// (0x00015f86) list_highlight_pane_cp2_vc

0xb172,	// (0x00015f8f) list_set_pane_vc_ParamLimits

0xb172,	// (0x00015f8f) list_set_pane_vc

0xb1d0,	// (0x00015fed) main_pane_set_vc_t1_ParamLimits

0xb1d0,	// (0x00015fed) main_pane_set_vc_t1

0xb1e5,	// (0x00016002) main_pane_set_vc_t2_ParamLimits

0xb1e5,	// (0x00016002) main_pane_set_vc_t2

0xb1f7,	// (0x00016014) main_pane_set_vc_t3_ParamLimits

0xb1f7,	// (0x00016014) main_pane_set_vc_t3

0xb20b,	// (0x00016028) main_pane_set_vc_t4_ParamLimits

0xb20b,	// (0x00016028) main_pane_set_vc_t4

0x0003,

0xfa20,	// (0x0001a83d) main_pane_set_vc_t_ParamLimits

0xfa20,	// (0x0001a83d) main_pane_set_vc_t

0xb21f,	// (0x0001603c) setting_code_pane_vc_ParamLimits

0xb21f,	// (0x0001603c) setting_code_pane_vc

0xb230,	// (0x0001604d) setting_slider_graphic_pane_vc

0xb230,	// (0x0001604d) setting_slider_pane_vc

0xb230,	// (0x0001604d) setting_text_pane_vc

0xb230,	// (0x0001604d) setting_volume_pane_vc

0xb23a,	// (0x00016057) scroll_pane_cp121_vc

0x7acc,	// (0x000128e9) set_content_pane_vc

0xb496,	// (0x000162b3) button_value_adjust_pane_g1

0xb49f,	// (0x000162bc) button_value_adjust_pane_g2

0x0001,

0xfa7f,	// (0x0001a89c) button_value_adjust_pane_g

0xb4a8,	// (0x000162c5) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb4a8,	// (0x000162c5) form_field_slider_wide_pane_vc_t1

0xb4bc,	// (0x000162d9) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb4bc,	// (0x000162d9) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa84,	// (0x0001a8a1) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa84,	// (0x0001a8a1) form_field_slider_wide_pane_vc_t

0x704e,	// (0x00011e6b) input_focus_pane_cp10_vc_ParamLimits

0x704e,	// (0x00011e6b) input_focus_pane_cp10_vc

0xb4ea,	// (0x00016307) slider_cont_pane_cp1_vc_ParamLimits

0xb4ea,	// (0x00016307) slider_cont_pane_cp1_vc

0xb4fc,	// (0x00016319) slider_form_pane_g1_cp2

0xb0ce,	// (0x00015eeb) slider_form_pane_g2_cp2

0xb529,	// (0x00016346) form_field_slider_pane_vc_t3

0xb537,	// (0x00016354) form_field_slider_pane_vc_t4

0xb545,	// (0x00016362) slider_form_pane_vc_ParamLimits

0xb545,	// (0x00016362) slider_form_pane_vc

0xb552,	// (0x0001636f) form_field_slider_pane_vc_t1_ParamLimits

0xb552,	// (0x0001636f) form_field_slider_pane_vc_t1

0xb4bc,	// (0x000162d9) form_field_slider_pane_vc_t2_ParamLimits

0xb4bc,	// (0x000162d9) form_field_slider_pane_vc_t2

0x0001,

0xfa96,	// (0x0001a8b3) form_field_slider_pane_vc_t_ParamLimits

0xfa96,	// (0x0001a8b3) form_field_slider_pane_vc_t

0x704e,	// (0x00011e6b) input_focus_pane_cp9_vc_ParamLimits

0x704e,	// (0x00011e6b) input_focus_pane_cp9_vc

0xb56e,	// (0x0001638b) slider_cont_pane_vc_ParamLimits

0xb56e,	// (0x0001638b) slider_cont_pane_vc

0xb582,	// (0x0001639f) list_form_graphic_pane_cp_vc_ParamLimits

0xb582,	// (0x0001639f) list_form_graphic_pane_cp_vc

0x9464,	// (0x00014281) form_field_popup_wide_pane_vc_g1

0xb597,	// (0x000163b4) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb597,	// (0x000163b4) form_field_popup_wide_pane_vc_t1

0x7bc4,	// (0x000129e1) input_focus_pane_cp8_vc_ParamLimits

0x7bc4,	// (0x000129e1) input_focus_pane_cp8_vc

0xb5dc,	// (0x000163f9) list_form_wide_pane_vc_ParamLimits

0xb5dc,	// (0x000163f9) list_form_wide_pane_vc

0xb5e8,	// (0x00016405) list_form_graphic_pane_vc_g1

0xb5f0,	// (0x0001640d) list_form_graphic_pane_vc_t1_ParamLimits

0xb5f0,	// (0x0001640d) list_form_graphic_pane_vc_t1

0x6db9,	// (0x00011bd6) list_highlight_pane_cp5_vc_ParamLimits

0x6db9,	// (0x00011bd6) list_highlight_pane_cp5_vc

0xb60c,	// (0x00016429) list_form_graphic_pane_vc_ParamLimits

0xb60c,	// (0x00016429) list_form_graphic_pane_vc

0x9464,	// (0x00014281) form_field_popup_pane_vc_g1

0xb622,	// (0x0001643f) form_field_popup_pane_vc_t1_ParamLimits

0xb622,	// (0x0001643f) form_field_popup_pane_vc_t1

0x7bc4,	// (0x000129e1) input_focus_pane_cp7_vc_ParamLimits

0x7bc4,	// (0x000129e1) input_focus_pane_cp7_vc

0xb639,	// (0x00016456) list_form_pane_vc_ParamLimits

0xb639,	// (0x00016456) list_form_pane_vc

0xb645,	// (0x00016462) data_form_pane_vc_t1_ParamLimits

0xb645,	// (0x00016462) data_form_pane_vc_t1

0x7ced,	// (0x00012b0a) input_focus_pane_vc_g1

0x7cf5,	// (0x00012b12) input_focus_pane_vc_g2

0x7cfd,	// (0x00012b1a) input_focus_pane_vc_g3

0x7d05,	// (0x00012b22) input_focus_pane_vc_g4

0x7d0d,	// (0x00012b2a) input_focus_pane_vc_g5

0x7d15,	// (0x00012b32) input_focus_pane_vc_g6

0x7d1d,	// (0x00012b3a) input_focus_pane_vc_g7

0x7d25,	// (0x00012b42) input_focus_pane_vc_g8

0x7d2d,	// (0x00012b4a) input_focus_pane_vc_g9

0x6ccf,	// (0x00011aec) input_focus_pane_vc_g10

0x0009,

0xf68d,	// (0x0001a4aa) input_focus_pane_vc_g

0x9458,	// (0x00014275) data_form_pane_vc_ParamLimits

0x9458,	// (0x00014275) data_form_pane_vc

0x9464,	// (0x00014281) form_field_data_pane_vc_g1

0xb660,	// (0x0001647d) form_field_data_pane_vc_t1_ParamLimits

0xb660,	// (0x0001647d) form_field_data_pane_vc_t1

0x7bc4,	// (0x000129e1) input_focus_pane_vc_ParamLimits

0x7bc4,	// (0x000129e1) input_focus_pane_vc

0xb67a,	// (0x00016497) button_value_adjust_pane_cp3_vc

0xb682,	// (0x0001649f) button_value_adjust_pane_cp5_vc

0xb68a,	// (0x000164a7) form_field_data_pane_vc_ParamLimits

0xb68a,	// (0x000164a7) form_field_data_pane_vc

0xb6a1,	// (0x000164be) form_field_data_pane_vc_cp2

0xb6a9,	// (0x000164c6) form_field_data_wide_pane_vc_ParamLimits

0xb6a9,	// (0x000164c6) form_field_data_wide_pane_vc

0xb6bf,	// (0x000164dc) form_field_data_wide_pane_vc_cp2

0xb6c7,	// (0x000164e4) form_field_popup_pane_vc_ParamLimits

0xb6c7,	// (0x000164e4) form_field_popup_pane_vc

0xb6de,	// (0x000164fb) form_field_popup_wide_pane_vc_ParamLimits

0xb6de,	// (0x000164fb) form_field_popup_wide_pane_vc

0xb6f4,	// (0x00016511) form_field_slider_pane_vc_ParamLimits

0xb6f4,	// (0x00016511) form_field_slider_pane_vc

0xb707,	// (0x00016524) form_field_slider_wide_pane_vc_ParamLimits

0xb707,	// (0x00016524) form_field_slider_wide_pane_vc

0xb71a,	// (0x00016537) grid_touch_1_pane_ParamLimits

0xb71a,	// (0x00016537) grid_touch_1_pane

0xb726,	// (0x00016543) grid_touch_2_pane_ParamLimits

0xb726,	// (0x00016543) grid_touch_2_pane

0x8d13,	// (0x00013b30) touch_pane_g1_ParamLimits

0x8d13,	// (0x00013b30) touch_pane_g1

0xb73e,	// (0x0001655b) cell_app_pane_cp_wide_ParamLimits

0xb73e,	// (0x0001655b) cell_app_pane_cp_wide

0xb74f,	// (0x0001656c) grid_popup_fast_wide_pane_ParamLimits

0xb74f,	// (0x0001656c) grid_popup_fast_wide_pane

0xb763,	// (0x00016580) scroll_pane_cp19_ParamLimits

0xb763,	// (0x00016580) scroll_pane_cp19

0x6cd9,	// (0x00011af6) bg_popup_window_pane_cp20

0xb777,	// (0x00016594) listscroll_popup_fast_wide_pane

0x6db9,	// (0x00011bd6) grid_indicator_nsta_pane

0xb77f,	// (0x0001659c) clock_nsta_pane_g1

0xb788,	// (0x000165a5) clock_nsta_pane_t1

0xb7a4,	// (0x000165c1) cell_indicator_nsta_pane_ParamLimits

0xb7a4,	// (0x000165c1) cell_indicator_nsta_pane

0xb7dc,	// (0x000165f9) cell_indicator_nsta_pane_g1

0xb7ea,	// (0x00016607) cell_indicator_nsta_pane_g2

0x0001,

0xfaa7,	// (0x0001a8c4) cell_indicator_nsta_pane_g

0xb800,	// (0x0001661d) clock_nsta_pane_cp

0xb808,	// (0x00016625) indicator_nsta_pane_cp

0xb810,	// (0x0001662d) nsta_clock_indic_pane_g1

0x6e9c,	// (0x00011cb9) grid_indicator_pane

0x82cf,	// (0x000130ec) scroll_pane_cp29

0x5090,	// (0x0000fead) indicator_nsta_pane_cp2_ParamLimits

0x5090,	// (0x0000fead) indicator_nsta_pane_cp2

0x6db9,	// (0x00011bd6) main_apps_wheel_pane

0x96b7,	// (0x000144d4) form_midp_field_text_pane_ParamLimits

0x9802,	// (0x0001461f) scroll_bar_cp050_ParamLimits

0xb869,	// (0x00016686) cell_indicator_pane_ParamLimits

0xb869,	// (0x00016686) cell_indicator_pane

0xb880,	// (0x0001669d) cell_indicator_pane_g1

0xb88a,	// (0x000166a7) grid_wheel_folder_pane_ParamLimits

0xb88a,	// (0x000166a7) grid_wheel_folder_pane

0xb8a0,	// (0x000166bd) list_wheel_apps_pane_ParamLimits

0xb8a0,	// (0x000166bd) list_wheel_apps_pane

0xb8b1,	// (0x000166ce) main_apps_wheel_pane_g1_ParamLimits

0xb8b1,	// (0x000166ce) main_apps_wheel_pane_g1

0xb8c5,	// (0x000166e2) main_apps_wheel_pane_g2_ParamLimits

0xb8c5,	// (0x000166e2) main_apps_wheel_pane_g2

0x0001,

0xfac3,	// (0x0001a8e0) main_apps_wheel_pane_g_ParamLimits

0xfac3,	// (0x0001a8e0) main_apps_wheel_pane_g

0xb8dd,	// (0x000166fa) main_apps_wheel_pane_t1_ParamLimits

0xb8dd,	// (0x000166fa) main_apps_wheel_pane_t1

0xb900,	// (0x0001671d) list_wheel_apps_pane_g1

0xb908,	// (0x00016725) list_wheel_apps_pane_g2

0xb910,	// (0x0001672d) list_wheel_apps_pane_g3

0xb918,	// (0x00016735) list_wheel_apps_pane_g4

0xb922,	// (0x0001673f) list_wheel_apps_pane_g5

0x0004,

0xfac8,	// (0x0001a8e5) list_wheel_apps_pane_g

0x88d6,	// (0x000136f3) navi_icon_text_pane

0x8dc8,	// (0x00013be5) aid_fill_nsta

0xb945,	// (0x00016762) navi_icon_text_pane_g1

0xb951,	// (0x0001676e) navi_icon_text_pane_t1

0x8774,	// (0x00013591) list_set_graphic_pane_t1_ParamLimits

0x8774,	// (0x00013591) list_set_graphic_pane_t1

0x9f5d,	// (0x00014d7a) popup_midp_note_alarm_window_t6_ParamLimits

0x9f5d,	// (0x00014d7a) popup_midp_note_alarm_window_t6

0x9f6f,	// (0x00014d8c) popup_midp_note_alarm_window_t7_ParamLimits

0x9f6f,	// (0x00014d8c) popup_midp_note_alarm_window_t7

0x9f81,	// (0x00014d9e) popup_midp_note_alarm_window_t8_ParamLimits

0x9f81,	// (0x00014d9e) popup_midp_note_alarm_window_t8

0x9f93,	// (0x00014db0) popup_midp_note_alarm_window_t9_ParamLimits

0x9f93,	// (0x00014db0) popup_midp_note_alarm_window_t9

0x9fa5,	// (0x00014dc2) popup_midp_note_alarm_window_t10_ParamLimits

0x9fa5,	// (0x00014dc2) popup_midp_note_alarm_window_t10

0x9fb7,	// (0x00014dd4) popup_midp_note_alarm_window_t11_ParamLimits

0x9fb7,	// (0x00014dd4) popup_midp_note_alarm_window_t11

0x9fc9,	// (0x00014de6) scroll_pane_cp17_ParamLimits

0x9fc9,	// (0x00014de6) scroll_pane_cp17

0x5b2b,	// (0x00010948) volume_small_pane_cp_g1

0x5e20,	// (0x00010c3d) volume_small_pane_cp_g2

0x5e29,	// (0x00010c46) volume_small_pane_cp_g3

0x5e32,	// (0x00010c4f) volume_small_pane_cp_g4

0x5e3b,	// (0x00010c58) volume_small_pane_cp_g5

0x5e44,	// (0x00010c61) volume_small_pane_cp_g6

0x5e4d,	// (0x00010c6a) volume_small_pane_cp_g7

0x5e56,	// (0x00010c73) volume_small_pane_cp_g8

0x5e5f,	// (0x00010c7c) volume_small_pane_cp_g9

0x5e68,	// (0x00010c85) volume_small_pane_cp_g10

0x8b25,	// (0x00013942) midp_ticker_pane_g1_ParamLimits

0x8b31,	// (0x0001394e) midp_ticker_pane_g2_ParamLimits

0xf759,	// (0x0001a576) midp_ticker_pane_g_ParamLimits

0x8b3d,	// (0x0001395a) midp_ticker_pane_t1_ParamLimits

0x8dde,	// (0x00013bfb) aid_fill_nsta_2

0x97ee,	// (0x0001460b) list_form2_midp_pane

0xa993,	// (0x000157b0) midp_editing_number_pane_ParamLimits

0xa9a2,	// (0x000157bf) midp_ticker_pane_ParamLimits

0xb963,	// (0x00016780) form2_midp_field_pane

0xb987,	// (0x000167a4) scroll_pane_cp51

0xb9a7,	// (0x000167c4) form2_midp_button_pane_ParamLimits

0xb9a7,	// (0x000167c4) form2_midp_button_pane

0xb9b9,	// (0x000167d6) form2_midp_content_pane_ParamLimits

0xb9b9,	// (0x000167d6) form2_midp_content_pane

0xb9d3,	// (0x000167f0) form2_midp_field_choice_group_pane

0xb9db,	// (0x000167f8) form2_midp_field_pane_g1

0xb9e3,	// (0x00016800) form2_midp_field_pane_g2

0xb9eb,	// (0x00016808) form2_midp_field_pane_g3

0xb9f3,	// (0x00016810) form2_midp_field_pane_g4

0x0003,

0xfaed,	// (0x0001a90a) form2_midp_field_pane_g

0xb9fb,	// (0x00016818) form2_midp_gauge_slider_pane

0xba03,	// (0x00016820) form2_midp_gauge_wait_pane

0xba0b,	// (0x00016828) form2_midp_image_pane_ParamLimits

0xba0b,	// (0x00016828) form2_midp_image_pane

0xba26,	// (0x00016843) form2_midp_label_pane_ParamLimits

0xba26,	// (0x00016843) form2_midp_label_pane

0xba3f,	// (0x0001685c) form2_midp_label_pane_cp_ParamLimits

0xba3f,	// (0x0001685c) form2_midp_label_pane_cp

0xba60,	// (0x0001687d) form2_midp_string_pane_ParamLimits

0xba60,	// (0x0001687d) form2_midp_string_pane

0xba72,	// (0x0001688f) form2_midp_text_pane_ParamLimits

0xba72,	// (0x0001688f) form2_midp_text_pane

0xba8f,	// (0x000168ac) form2_midp_time_pane

0xba9f,	// (0x000168bc) input_focus_pane_cp51_ParamLimits

0xba9f,	// (0x000168bc) input_focus_pane_cp51

0xbab7,	// (0x000168d4) form2_midp_label_pane_t1_ParamLimits

0xbab7,	// (0x000168d4) form2_midp_label_pane_t1

0xbaf8,	// (0x00016915) form2_mdip_text_pane_t1_ParamLimits

0xbaf8,	// (0x00016915) form2_mdip_text_pane_t1

0xbb17,	// (0x00016934) form2_midp_time_pane_t1

0xbb32,	// (0x0001694f) form2_midp_gauge_slider_pane_t1

0xbb44,	// (0x00016961) form2_midp_gauge_slider_pane_t2

0xbb56,	// (0x00016973) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf6,	// (0x0001a913) form2_midp_gauge_slider_pane_t

0xbb68,	// (0x00016985) form2_midp_slider_pane

0xbb74,	// (0x00016991) form2_midp_gauge_wait_pane_t1

0xbb82,	// (0x0001699f) form2_midp_wait_pane_ParamLimits

0xbb82,	// (0x0001699f) form2_midp_wait_pane

0x94ab,	// (0x000142c8) list_single_2graphic_pane_cp4_ParamLimits

0x94ab,	// (0x000142c8) list_single_2graphic_pane_cp4

0xbbad,	// (0x000169ca) list_single_midp_graphic_pane_cp_ParamLimits

0xbbad,	// (0x000169ca) list_single_midp_graphic_pane_cp

0x6cd9,	// (0x00011af6) list_highlight_pane_cp20

0xbbdc,	// (0x000169f9) list_single_2graphic_pane_g1_cp4

0xbbe4,	// (0x00016a01) list_single_2graphic_pane_g2_cp4

0xbbec,	// (0x00016a09) list_single_2graphic_pane_t1_cp4

0x6db9,	// (0x00011bd6) list_highlight_pane_cp21

0xbbfb,	// (0x00016a18) list_single_midp_graphic_pane_g4_cp

0xbc0a,	// (0x00016a27) list_single_midp_graphic_pane_t1_cp

0xbc1f,	// (0x00016a3c) form2_mdip_string_pane_t1_ParamLimits

0xbc1f,	// (0x00016a3c) form2_mdip_string_pane_t1

0x6cd9,	// (0x00011af6) bg_wml_button_pane_cp2

0x6ccf,	// (0x00011aec) form2_midp_image_pane_g1

0x7882,	// (0x0001269f) list_double_large_graphic_pane_g5_ParamLimits

0x7882,	// (0x0001269f) list_double_large_graphic_pane_g5

0x7f22,	// (0x00012d3f) midp_form_pane_ParamLimits

0x6db9,	// (0x00011bd6) main_apps_wheel_pane_ParamLimits

0x576b,	// (0x00010588) popup_preview_window_ParamLimits

0x576b,	// (0x00010588) popup_preview_window

0x5926,	// (0x00010743) popup_touch_info_window_ParamLimits

0x5926,	// (0x00010743) popup_touch_info_window

0x5944,	// (0x00010761) popup_touch_menu_window_ParamLimits

0x5944,	// (0x00010761) popup_touch_menu_window

0x6cc5,	// (0x00011ae2) bg_popup_sub_pane_cp6

0xbd18,	// (0x00016b35) list_touch_menu_pane

0xbd20,	// (0x00016b3d) list_single_touch_menu_pane_ParamLimits

0xbd20,	// (0x00016b3d) list_single_touch_menu_pane

0xbd36,	// (0x00016b53) list_single_touch_menu_pane_t1

0x6db9,	// (0x00011bd6) bg_popup_sub_pane_cp7_ParamLimits

0x6db9,	// (0x00011bd6) bg_popup_sub_pane_cp7

0xbd44,	// (0x00016b61) heading_sub_pane

0xbd4c,	// (0x00016b69) list_touch_info_pane_ParamLimits

0xbd4c,	// (0x00016b69) list_touch_info_pane

0xbd5b,	// (0x00016b78) list_single_touch_info_pane_ParamLimits

0xbd5b,	// (0x00016b78) list_single_touch_info_pane

0xbd6d,	// (0x00016b8a) list_single_touch_info_pane_t1

0xbd7b,	// (0x00016b98) list_single_touch_info_pane_t2

0x0001,

0xfb04,	// (0x0001a921) list_single_touch_info_pane_t

0x8a56,	// (0x00013873) bg_popup_heading_pane_cp

0xbd89,	// (0x00016ba6) heading_sub_pane_t1

0x93f2,	// (0x0001420f) bg_popup_preview_window_pane_cp_ParamLimits

0x93f2,	// (0x0001420f) bg_popup_preview_window_pane_cp

0xbd44,	// (0x00016b61) heading_preview_pane

0xbd4c,	// (0x00016b69) list_preview_pane_ParamLimits

0xbd4c,	// (0x00016b69) list_preview_pane

0xbd97,	// (0x00016bb4) popup_preview_window_g1

0xbd5b,	// (0x00016b78) list_single_preview_pane_ParamLimits

0xbd5b,	// (0x00016b78) list_single_preview_pane

0xbd9f,	// (0x00016bbc) list_single_preview_pane_g1

0xbda7,	// (0x00016bc4) list_single_preview_pane_t1

0xbd6d,	// (0x00016b8a) list_single_preview_pane_t2

0x0001,

0xfb09,	// (0x0001a926) list_single_preview_pane_t

0xbdb5,	// (0x00016bd2) bg_popup_heading_pane_cp2_ParamLimits

0xbdb5,	// (0x00016bd2) bg_popup_heading_pane_cp2

0xbdcb,	// (0x00016be8) heading_preview_pane_g1

0xbdd3,	// (0x00016bf0) heading_preview_pane_t1_ParamLimits

0xbdd3,	// (0x00016bf0) heading_preview_pane_t1

0x6ebf,	// (0x00011cdc) soft_indicator_pane_t1_ParamLimits

0x75b2,	// (0x000123cf) scroll_pane_ParamLimits

0x81c8,	// (0x00012fe5) scroll_sc2_left_pane

0x81d1,	// (0x00012fee) scroll_sc2_right_pane

0x81f0,	// (0x0001300d) scroll_bg_pane_g1_ParamLimits

0x8205,	// (0x00013022) scroll_bg_pane_g2_ParamLimits

0x821d,	// (0x0001303a) scroll_bg_pane_g3_ParamLimits

0xf6e4,	// (0x0001a501) scroll_bg_pane_g_ParamLimits

0x81f0,	// (0x0001300d) scroll_handle_pane_g1_ParamLimits

0x823f,	// (0x0001305c) scroll_handle_pane_g2_ParamLimits

0x821d,	// (0x0001303a) scroll_handle_pane_g3_ParamLimits

0xf6eb,	// (0x0001a508) scroll_handle_pane_g_ParamLimits

0x53ee,	// (0x0001020b) popup_choice_list_window_ParamLimits

0x53ee,	// (0x0001020b) popup_choice_list_window

0x91e8,	// (0x00014005) choice_list_pane

0x9298,	// (0x000140b5) cell_toolbar_pane_t1

0x92c0,	// (0x000140dd) toolbar_button_pane_ParamLimits

0xa483,	// (0x000152a0) ai_gene_pane_1_t2_ParamLimits

0xa483,	// (0x000152a0) ai_gene_pane_1_t2

0x0001,

0xf913,	// (0x0001a730) ai_gene_pane_1_t_ParamLimits

0xf913,	// (0x0001a730) ai_gene_pane_1_t

0xbdf0,	// (0x00016c0d) scroll_sc2_left_pane_g1

0xbdf0,	// (0x00016c0d) scroll_sc2_right_pane_g1

0x8d9e,	// (0x00013bbb) bg_popup_sub_pane_cp10

0xbdfa,	// (0x00016c17) list_choice_list_pane

0xbe13,	// (0x00016c30) list_single_choice_list_pane_ParamLimits

0xbe13,	// (0x00016c30) list_single_choice_list_pane

0xbe26,	// (0x00016c43) list_single_choice_list_pane_g1

0x7ed2,	// (0x00012cef) list_single_choice_list_pane_t1_ParamLimits

0x7ed2,	// (0x00012cef) list_single_choice_list_pane_t1

0xbe2e,	// (0x00016c4b) choice_list_pane_g1

0xbe36,	// (0x00016c53) choice_list_pane_t1

0x6cc5,	// (0x00011ae2) input_focus_pane_cp11

0x80a9,	// (0x00012ec6) title_pane_stacon_g2_ParamLimits

0x80a9,	// (0x00012ec6) title_pane_stacon_g2

0x0002,

0xf6ca,	// (0x0001a4e7) title_pane_stacon_g_ParamLimits

0xf6ca,	// (0x0001a4e7) title_pane_stacon_g

0x8a56,	// (0x00013873) cursor_press_pane

0x549a,	// (0x000102b7) popup_fep_hwr_window_ParamLimits

0x549a,	// (0x000102b7) popup_fep_hwr_window

0x5514,	// (0x00010331) popup_fep_vkb_window_ParamLimits

0x5514,	// (0x00010331) popup_fep_vkb_window

0xbe44,	// (0x00016c61) cursor_press_pane_g1

0x0002,

0xfb32,	// (0x0001a94f) fep_vkb_side_pane_g_ParamLimits

0x5eaa,	// (0x00010cc7) fep_hwr_candidate_pane_ParamLimits

0x5eaa,	// (0x00010cc7) fep_hwr_candidate_pane

0x5ed4,	// (0x00010cf1) fep_hwr_side_pane_ParamLimits

0x5ed4,	// (0x00010cf1) fep_hwr_side_pane

0x5ef4,	// (0x00010d11) fep_hwr_top_pane_ParamLimits

0x5ef4,	// (0x00010d11) fep_hwr_top_pane

0x5f0c,	// (0x00010d29) fep_hwr_write_pane_ParamLimits

0x5f0c,	// (0x00010d29) fep_hwr_write_pane

0xfb32,	// (0x0001a94f) fep_vkb_side_pane_g

0xbe4c,	// (0x00016c69) fep_hwr_top_pane_g1

0xbe5e,	// (0x00016c7b) fep_hwr_top_pane_g2

0x5f46,	// (0x00010d63) fep_hwr_top_pane_g3

0x0002,

0xfb0e,	// (0x0001a92b) fep_hwr_top_pane_g

0x5f5b,	// (0x00010d78) fep_hwr_top_text_pane

0x83bf,	// (0x000131dc) fep_hwr_top_text_pane_g1

0xbe94,	// (0x00016cb1) fep_hwr_top_text_pane_t1

0x6051,	// (0x00010e6e) fep_hwr_candidate_pane_g1

0xc0e7,	// (0x00016f04) fep_vkb_keypad_pane_g3_ParamLimits

0xc0e7,	// (0x00016f04) fep_vkb_keypad_pane_g3

0xc10f,	// (0x00016f2c) fep_vkb_keypad_pane_g4_ParamLimits

0xc10f,	// (0x00016f2c) fep_vkb_keypad_pane_g4

0xc17e,	// (0x00016f9b) fep_vkb_bottom_pane_g2_ParamLimits

0xc17e,	// (0x00016f9b) fep_vkb_bottom_pane_g2

0x0001,

0xfb39,	// (0x0001a956) fep_vkb_bottom_pane_g_ParamLimits

0xfb39,	// (0x0001a956) fep_vkb_bottom_pane_g

0xbdf0,	// (0x00016c0d) cell_vkb_side_pane_g2

0x0001,

0xfb43,	// (0x0001a960) cell_vkb_side_pane_g

0xc209,	// (0x00017026) cell_vkb_side_pane_t1

0xc217,	// (0x00017034) cell_vkb_side_pane_t1_copy1

0xbdf0,	// (0x00016c0d) bg_fep_vkb_candidate_pane_g2

0xc343,	// (0x00017160) cell_vkb_candidate_pane_ParamLimits

0xbea2,	// (0x00016cbf) aid_size_cell_vkb_ParamLimits

0xbea2,	// (0x00016cbf) aid_size_cell_vkb

0xc343,	// (0x00017160) cell_vkb_candidate_pane

0x6078,	// (0x00010e95) bg_popup_fep_shadow_pane_g1

0xbf30,	// (0x00016d4d) fep_vkb_bottom_pane_ParamLimits

0xbf30,	// (0x00016d4d) fep_vkb_bottom_pane

0xbf66,	// (0x00016d83) fep_vkb_candidate_pane_ParamLimits

0xbf66,	// (0x00016d83) fep_vkb_candidate_pane

0xbf82,	// (0x00016d9f) fep_vkb_keypad_pane_ParamLimits

0xbf82,	// (0x00016d9f) fep_vkb_keypad_pane

0xbfc8,	// (0x00016de5) fep_vkb_side_pane_ParamLimits

0xbfc8,	// (0x00016de5) fep_vkb_side_pane

0xc004,	// (0x00016e21) fep_vkb_top_pane_ParamLimits

0xc004,	// (0x00016e21) fep_vkb_top_pane

0xc040,	// (0x00016e5d) fep_vkb_top_pane_g1_ParamLimits

0xc040,	// (0x00016e5d) fep_vkb_top_pane_g1

0xc04f,	// (0x00016e6c) fep_vkb_top_pane_g2_ParamLimits

0xc04f,	// (0x00016e6c) fep_vkb_top_pane_g2

0xc05e,	// (0x00016e7b) fep_vkb_top_pane_g3_ParamLimits

0xc05e,	// (0x00016e7b) fep_vkb_top_pane_g3

0x0003,

0xfb29,	// (0x0001a946) fep_vkb_top_pane_g_ParamLimits

0xfb29,	// (0x0001a946) fep_vkb_top_pane_g

0xc07c,	// (0x00016e99) fep_vkb_top_text_pane_ParamLimits

0xc07c,	// (0x00016e99) fep_vkb_top_text_pane

0xc08d,	// (0x00016eaa) fep_vkb_side_pane_g1_ParamLimits

0xc08d,	// (0x00016eaa) fep_vkb_side_pane_g1

0xc0d6,	// (0x00016ef3) grid_vkb_side_pane_ParamLimits

0xc0d6,	// (0x00016ef3) grid_vkb_side_pane

0x6080,	// (0x00010e9d) bg_popup_fep_shadow_pane_g2

0x6089,	// (0x00010ea6) bg_popup_fep_shadow_pane_g3

0x6091,	// (0x00010eae) bg_popup_fep_shadow_pane_g4

0x609a,	// (0x00010eb7) bg_popup_fep_shadow_pane_g5

0x60a4,	// (0x00010ec1) bg_popup_fep_shadow_pane_g6

0x60ac,	// (0x00010ec9) bg_popup_fep_shadow_pane_g7

0x7d05,	// (0x00012b22) bg_popup_fep_shadow_pane_g8

0xc12d,	// (0x00016f4a) grid_vkb_keypad_number_pane_ParamLimits

0xc12d,	// (0x00016f4a) grid_vkb_keypad_number_pane

0xc13d,	// (0x00016f5a) grid_vkb_keypad_pane_ParamLimits

0xc13d,	// (0x00016f5a) grid_vkb_keypad_pane

0xc163,	// (0x00016f80) fep_vkb_bottom_pane_g1_ParamLimits

0xc163,	// (0x00016f80) fep_vkb_bottom_pane_g1

0xc18c,	// (0x00016fa9) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc18c,	// (0x00016fa9) grid_vkb_keypad_bottom_left_pane

0xc1a1,	// (0x00016fbe) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc1a1,	// (0x00016fbe) grid_vkb_keypad_bottom_right_pane

0xc1b6,	// (0x00016fd3) fep_vkb_top_text_pane_g1

0xc1d1,	// (0x00016fee) fep_vkb_top_text_pane_t1

0xc1e6,	// (0x00017003) cell_vkb_side_pane_ParamLimits

0xc1e6,	// (0x00017003) cell_vkb_side_pane

0xbdf0,	// (0x00016c0d) cell_vkb_side_pane_g1

0xc225,	// (0x00017042) cell_vkb_keypad_pane_ParamLimits

0xc225,	// (0x00017042) cell_vkb_keypad_pane

0xc29a,	// (0x000170b7) cell_vkb_keypad_pane_g1

0x0008,

0xfb56,	// (0x0001a973) bg_popup_fep_shadow_pane_g

0x60be,	// (0x00010edb) cell_hwr_side_pane_g1

0x60be,	// (0x00010edb) cell_hwr_side_pane_g2

0xc2a4,	// (0x000170c1) cell_vkb_keypad_pane_t1

0xc2b2,	// (0x000170cf) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc2b2,	// (0x000170cf) cell_vkb_keypad_bottom_left_pane

0xc2cf,	// (0x000170ec) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc2cf,	// (0x000170ec) cell_vkb_keypad_bottom_right_pane

0xbdf0,	// (0x00016c0d) cell_vkb_keypad_bottom_left_pane_g1

0xbdf0,	// (0x00016c0d) cell_vkb_keypad_bottom_right_pane_g1

0xc308,	// (0x00017125) cell_vkb_keypad_number_pane_ParamLimits

0xc308,	// (0x00017125) cell_vkb_keypad_number_pane

0xc327,	// (0x00017144) cell_vkb_keypad_number_pane_g1

0xc331,	// (0x0001714e) cell_vkb_keypad_number_pane_g2

0xc33a,	// (0x00017157) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb48,	// (0x0001a965) cell_vkb_keypad_number_pane_g

0xc2a4,	// (0x000170c1) cell_vkb_keypad_number_pane_t1

0xc35e,	// (0x0001717b) fep_vkb_candidate_pane_g1

0x0001,

0xfb69,	// (0x0001a986) cell_hwr_side_pane_g

0xc377,	// (0x00017194) cell_hwr_side_pane_t1

0x60c8,	// (0x00010ee5) cell_hwr_side_pane_t1_copy1

0x60d6,	// (0x00010ef3) cell_hwr_candidate_pane_g1

0x6105,	// (0x00010f22) cell_hwr_candidate_pane_t1

0xbdf0,	// (0x00016c0d) cell_vkb_candidate_pane_g2

0xc3bb,	// (0x000171d8) cell_vkb_candidate_pane_t1

0x5e71,	// (0x00010c8e) bg_popup_fep_shadow_pane_ParamLimits

0x5e71,	// (0x00010c8e) bg_popup_fep_shadow_pane

0x5f26,	// (0x00010d43) bg_fep_hwr_top_pane_g4

0xbe70,	// (0x00016c8d) bg_hwr_side_pane_g1_ParamLimits

0xbe70,	// (0x00016c8d) bg_hwr_side_pane_g1

0x5f97,	// (0x00010db4) cell_hwr_side_pane_ParamLimits

0x5f97,	// (0x00010db4) cell_hwr_side_pane

0x5fd2,	// (0x00010def) fep_hwr_write_pane_g1_ParamLimits

0x5fd2,	// (0x00010def) fep_hwr_write_pane_g1

0x5fdf,	// (0x00010dfc) fep_hwr_write_pane_g2_ParamLimits

0x5fdf,	// (0x00010dfc) fep_hwr_write_pane_g2

0x5fec,	// (0x00010e09) fep_hwr_write_pane_g3_ParamLimits

0x5fec,	// (0x00010e09) fep_hwr_write_pane_g3

0x5ffa,	// (0x00010e17) fep_hwr_write_pane_g4_ParamLimits

0x5ffa,	// (0x00010e17) fep_hwr_write_pane_g4

0x0005,

0xfb15,	// (0x0001a932) fep_hwr_write_pane_g_ParamLimits

0xfb15,	// (0x0001a932) fep_hwr_write_pane_g

0x5f26,	// (0x00010d43) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x5f26,	// (0x00010d43) bg_fep_hwr_candidate_pane_g2

0x600f,	// (0x00010e2c) cell_hwr_candidate_pane_ParamLimits

0x600f,	// (0x00010e2c) cell_hwr_candidate_pane

0x6051,	// (0x00010e6e) fep_hwr_candidate_pane_g1_ParamLimits

0xbed0,	// (0x00016ced) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xbed0,	// (0x00016ced) bg_popup_fep_shadow_pane_cp2

0xc06e,	// (0x00016e8b) fep_vkb_top_pane_g4_ParamLimits

0xc06e,	// (0x00016e8b) fep_vkb_top_pane_g4

0xc0b4,	// (0x00016ed1) fep_vkb_side_pane_g2_ParamLimits

0xc0b4,	// (0x00016ed1) fep_vkb_side_pane_g2

0x79e6,	// (0x00012803) list_setting_pane_t4_ParamLimits

0x79e6,	// (0x00012803) list_setting_pane_t4

0x7a60,	// (0x0001287d) list_setting_number_pane_t5_ParamLimits

0x7a60,	// (0x0001287d) list_setting_number_pane_t5

0x8406,	// (0x00013223) list_double_heading_pane_cp2_ParamLimits

0x8406,	// (0x00013223) list_double_heading_pane_cp2

0x7803,	// (0x00012620) list_double_heading_pane_g1_cp2_ParamLimits

0x7803,	// (0x00012620) list_double_heading_pane_g1_cp2

0x7bea,	// (0x00012a07) list_double_heading_pane_g2_cp2_ParamLimits

0x7bea,	// (0x00012a07) list_double_heading_pane_g2_cp2

0xc3c9,	// (0x000171e6) list_double_heading_pane_t1_cp2_ParamLimits

0xc3c9,	// (0x000171e6) list_double_heading_pane_t1_cp2

0xc3df,	// (0x000171fc) list_double_heading_pane_t2_cp2_ParamLimits

0xc3df,	// (0x000171fc) list_double_heading_pane_t2_cp2

0x6cad,	// (0x00011aca) aid_value_unit2

0x4c2a,	// (0x0000fa47) popup_preview_fixed_window

0x705c,	// (0x00011e79) bg_popup_preview_window_pane_cp02

0xc3f1,	// (0x0001720e) list_preview_fixed_pane

0xc437,	// (0x00017254) list_empty_pane_fp_ParamLimits

0xc437,	// (0x00017254) list_empty_pane_fp

0xc437,	// (0x00017254) list_single_cale_day_pane_fp_ParamLimits

0xc437,	// (0x00017254) list_single_cale_day_pane_fp

0xc437,	// (0x00017254) list_single_graphic_heading_pane_fp_ParamLimits

0xc437,	// (0x00017254) list_single_graphic_heading_pane_fp

0xc437,	// (0x00017254) list_single_graphic_pane_fp_ParamLimits

0xc437,	// (0x00017254) list_single_graphic_pane_fp

0xc437,	// (0x00017254) list_single_heading_pane_fp_ParamLimits

0xc437,	// (0x00017254) list_single_heading_pane_fp

0xc437,	// (0x00017254) list_single_pane_fp_ParamLimits

0xc437,	// (0x00017254) list_single_pane_fp

0xc44c,	// (0x00017269) list_single_pane_fp_g1_ParamLimits

0xc44c,	// (0x00017269) list_single_pane_fp_g1

0x7803,	// (0x00012620) list_single_pane_fp_g2_ParamLimits

0x7803,	// (0x00012620) list_single_pane_fp_g2

0x7bea,	// (0x00012a07) list_single_pane_fp_g3_ParamLimits

0x7bea,	// (0x00012a07) list_single_pane_fp_g3

0xc458,	// (0x00017275) list_single_pane_fp_g4_ParamLimits

0xc458,	// (0x00017275) list_single_pane_fp_g4

0x0003,

0xfb7c,	// (0x0001a999) list_single_pane_fp_g_ParamLimits

0xfb7c,	// (0x0001a999) list_single_pane_fp_g

0xc464,	// (0x00017281) list_single_pane_fp_t1_ParamLimits

0xc464,	// (0x00017281) list_single_pane_fp_t1

0xc47b,	// (0x00017298) list_single_graphic_pane_fp_g1_ParamLimits

0xc47b,	// (0x00017298) list_single_graphic_pane_fp_g1

0xc44c,	// (0x00017269) list_single_graphic_pane_fp_g2_ParamLimits

0xc44c,	// (0x00017269) list_single_graphic_pane_fp_g2

0x7803,	// (0x00012620) list_single_graphic_pane_fp_g3_ParamLimits

0x7803,	// (0x00012620) list_single_graphic_pane_fp_g3

0x7bea,	// (0x00012a07) list_single_graphic_pane_fp_g4_ParamLimits

0x7bea,	// (0x00012a07) list_single_graphic_pane_fp_g4

0xc458,	// (0x00017275) list_single_graphic_pane_fp_g5_ParamLimits

0xc458,	// (0x00017275) list_single_graphic_pane_fp_g5

0x0004,

0xfb85,	// (0x0001a9a2) list_single_graphic_pane_fp_g_ParamLimits

0xfb85,	// (0x0001a9a2) list_single_graphic_pane_fp_g

0xc487,	// (0x000172a4) list_single_graphic_pane_fp_t1_ParamLimits

0xc487,	// (0x000172a4) list_single_graphic_pane_fp_t1

0xc47b,	// (0x00017298) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xc47b,	// (0x00017298) list_single_graphic_heading_pane_fp_g1

0xc44c,	// (0x00017269) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc44c,	// (0x00017269) list_single_graphic_heading_pane_fp_g2

0x7803,	// (0x00012620) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x7803,	// (0x00012620) list_single_graphic_heading_pane_fp_g3

0x7bea,	// (0x00012a07) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x7bea,	// (0x00012a07) list_single_graphic_heading_pane_fp_g4

0xc458,	// (0x00017275) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc458,	// (0x00017275) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb85,	// (0x0001a9a2) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb85,	// (0x0001a9a2) list_single_graphic_heading_pane_fp_g

0xc49d,	// (0x000172ba) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xc49d,	// (0x000172ba) list_single_graphic_heading_pane_fp_t1

0xc4b3,	// (0x000172d0) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xc4b3,	// (0x000172d0) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb90,	// (0x0001a9ad) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb90,	// (0x0001a9ad) list_single_graphic_heading_pane_fp_t

0xc4c5,	// (0x000172e2) list_single_cale_day_pane_fp_g1_ParamLimits

0xc4c5,	// (0x000172e2) list_single_cale_day_pane_fp_g1

0xc4fd,	// (0x0001731a) list_single_cale_day_pane_fp_g2_ParamLimits

0xc4fd,	// (0x0001731a) list_single_cale_day_pane_fp_g2

0xc509,	// (0x00017326) list_single_cale_day_pane_fp_g3_ParamLimits

0xc509,	// (0x00017326) list_single_cale_day_pane_fp_g3

0xc531,	// (0x0001734e) list_single_cale_day_pane_fp_g4_ParamLimits

0xc531,	// (0x0001734e) list_single_cale_day_pane_fp_g4

0xc555,	// (0x00017372) list_single_cale_day_pane_fp_g5_ParamLimits

0xc555,	// (0x00017372) list_single_cale_day_pane_fp_g5

0x0004,

0xfb95,	// (0x0001a9b2) list_single_cale_day_pane_fp_g_ParamLimits

0xfb95,	// (0x0001a9b2) list_single_cale_day_pane_fp_g

0xc579,	// (0x00017396) list_single_cale_day_pane_fp_t1_ParamLimits

0xc579,	// (0x00017396) list_single_cale_day_pane_fp_t1

0xc59f,	// (0x000173bc) list_single_cale_day_pane_fp_t2_ParamLimits

0xc59f,	// (0x000173bc) list_single_cale_day_pane_fp_t2

0xc5b8,	// (0x000173d5) list_single_cale_day_pane_fp_t3_ParamLimits

0xc5b8,	// (0x000173d5) list_single_cale_day_pane_fp_t3

0x0002,

0xfba0,	// (0x0001a9bd) list_single_cale_day_pane_fp_t_ParamLimits

0xfba0,	// (0x0001a9bd) list_single_cale_day_pane_fp_t

0xc44c,	// (0x00017269) list_empty_pane_fp_g1_ParamLimits

0xc44c,	// (0x00017269) list_empty_pane_fp_g1

0xc5d1,	// (0x000173ee) list_empty_pane_fp_t1

0xc5df,	// (0x000173fc) list_empty_pane_fp_t2

0x0001,

0xfba7,	// (0x0001a9c4) list_empty_pane_fp_t

0xc44c,	// (0x00017269) list_single_heading_pane_fp_g1_ParamLimits

0xc44c,	// (0x00017269) list_single_heading_pane_fp_g1

0x7803,	// (0x00012620) list_single_heading_pane_fp_g2_ParamLimits

0x7803,	// (0x00012620) list_single_heading_pane_fp_g2

0x7bea,	// (0x00012a07) list_single_heading_pane_fp_g3_ParamLimits

0x7bea,	// (0x00012a07) list_single_heading_pane_fp_g3

0x0002,

0xfbac,	// (0x0001a9c9) list_single_heading_pane_fp_g_ParamLimits

0xfbac,	// (0x0001a9c9) list_single_heading_pane_fp_g

0xc5ed,	// (0x0001740a) list_single_heading_pane_fp_t1_ParamLimits

0xc5ed,	// (0x0001740a) list_single_heading_pane_fp_t1

0xc5ff,	// (0x0001741c) list_single_heading_pane_fp_t2_ParamLimits

0xc5ff,	// (0x0001741c) list_single_heading_pane_fp_t2

0x0001,

0xfbb3,	// (0x0001a9d0) list_single_heading_pane_fp_t_ParamLimits

0xfbb3,	// (0x0001a9d0) list_single_heading_pane_fp_t

0x7f40,	// (0x00012d5d) aid_size_cell_fast

0x6fcc,	// (0x00011de9) soft_indicator_pane_cp1_t1

0x7f7d,	// (0x00012d9a) cell_app_pane_cp2_ParamLimits

0x7f7d,	// (0x00012d9a) cell_app_pane_cp2

0x5e93,	// (0x00010cb0) fep_hwr_candidate_drop_down_list_pane

0x606b,	// (0x00010e88) fep_hwr_candidate_pane_g3_ParamLimits

0x606b,	// (0x00010e88) fep_hwr_candidate_pane_g3

0x3fcd,	// (0x0000edea) fep_hwr_candidate_pane_g4_ParamLimits

0x3fcd,	// (0x0000edea) fep_hwr_candidate_pane_g4

0x0002,

0xfb22,	// (0x0001a93f) fep_hwr_candidate_pane_g_ParamLimits

0xfb22,	// (0x0001a93f) fep_hwr_candidate_pane_g

0xbf55,	// (0x00016d72) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xbf55,	// (0x00016d72) fep_vkb_candidate_drop_down_list_pane

0xc366,	// (0x00017183) fep_vkb_candidate_pane_g3

0xc36e,	// (0x0001718b) fep_vkb_candidate_pane_g4

0x0002,

0xfb4f,	// (0x0001a96c) fep_vkb_candidate_pane_g

0x60d6,	// (0x00010ef3) cell_hwr_candidate_pane_g1_ParamLimits

0x60e4,	// (0x00010f01) cell_hwr_candidate_pane_g3_ParamLimits

0x60e4,	// (0x00010f01) cell_hwr_candidate_pane_g3

0xe034,	// (0x00018e51) cell_hwr_candidate_pane_g4_ParamLimits

0xe034,	// (0x00018e51) cell_hwr_candidate_pane_g4

0x0002,

0xfb6e,	// (0x0001a98b) cell_hwr_candidate_pane_g_ParamLimits

0xfb6e,	// (0x0001a98b) cell_hwr_candidate_pane_g

0xc385,	// (0x000171a2) cell_vkb_candidate_pane_g3_ParamLimits

0xc385,	// (0x000171a2) cell_vkb_candidate_pane_g3

0xc3a0,	// (0x000171bd) cell_vkb_candidate_pane_g4_ParamLimits

0xc3a0,	// (0x000171bd) cell_vkb_candidate_pane_g4

0xc615,	// (0x00017432) cell_app_pane_cp2_g1_ParamLimits

0xc615,	// (0x00017432) cell_app_pane_cp2_g1

0xc633,	// (0x00017450) cell_app_pane_cp2_g2_ParamLimits

0xc633,	// (0x00017450) cell_app_pane_cp2_g2

0x0001,

0xfbb8,	// (0x0001a9d5) cell_app_pane_cp2_g_ParamLimits

0xfbb8,	// (0x0001a9d5) cell_app_pane_cp2_g

0xc63f,	// (0x0001745c) cell_app_pane_cp2_t1_ParamLimits

0xc63f,	// (0x0001745c) cell_app_pane_cp2_t1

0x7bc4,	// (0x000129e1) grid_highlight_pane_cp1_ParamLimits

0x7bc4,	// (0x000129e1) grid_highlight_pane_cp1

0x6123,	// (0x00010f40) cell_hwr_candidate_pane_cp1_ParamLimits

0x6123,	// (0x00010f40) cell_hwr_candidate_pane_cp1

0x60d6,	// (0x00010ef3) fep_hwr_candidate_drop_down_list_pane_g1

0x6142,	// (0x00010f5f) fep_hwr_candidate_drop_down_list_pane_g2

0x614f,	// (0x00010f6c) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbbd,	// (0x0001a9da) fep_hwr_candidate_drop_down_list_pane_g

0x615c,	// (0x00010f79) fep_hwr_candidate_drop_down_list_scroll_pane

0x6165,	// (0x00010f82) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x6165,	// (0x00010f82) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x6172,	// (0x00010f8f) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x6172,	// (0x00010f8f) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x617f,	// (0x00010f9c) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x617f,	// (0x00010f9c) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x618c,	// (0x00010fa9) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x618c,	// (0x00010fa9) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x61a7,	// (0x00010fc4) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x61a7,	// (0x00010fc4) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x61c2,	// (0x00010fdf) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x61c2,	// (0x00010fdf) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x61dd,	// (0x00010ffa) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x61dd,	// (0x00010ffa) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x61f8,	// (0x00011015) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x61f8,	// (0x00011015) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc4,	// (0x0001a9e1) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc4,	// (0x0001a9e1) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc651,	// (0x0001746e) cell_vkb_candidate_pane_cp1_ParamLimits

0xc651,	// (0x0001746e) cell_vkb_candidate_pane_cp1

0xc06e,	// (0x00016e8b) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc06e,	// (0x00016e8b) fep_vkb_candidate_drop_down_list_pane_g1

0xc671,	// (0x0001748e) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc671,	// (0x0001748e) fep_vkb_candidate_drop_down_list_pane_g2

0xc67e,	// (0x0001749b) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc67e,	// (0x0001749b) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbd5,	// (0x0001a9f2) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbd5,	// (0x0001a9f2) fep_vkb_candidate_drop_down_list_pane_g

0xc68b,	// (0x000174a8) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc68b,	// (0x000174a8) fep_vkb_candidate_drop_down_list_scroll_pane

0xc698,	// (0x000174b5) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc698,	// (0x000174b5) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc6a5,	// (0x000174c2) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc6a5,	// (0x000174c2) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc6b1,	// (0x000174ce) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc6b1,	// (0x000174ce) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc6bd,	// (0x000174da) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc6bd,	// (0x000174da) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc6de,	// (0x000174fb) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc6de,	// (0x000174fb) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc6ff,	// (0x0001751c) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc6ff,	// (0x0001751c) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc720,	// (0x0001753d) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc720,	// (0x0001753d) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc741,	// (0x0001755e) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc741,	// (0x0001755e) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbdc,	// (0x0001a9f9) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbdc,	// (0x0001a9f9) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x6ce3,	// (0x00011b00) title_pane_g1_ParamLimits

0x6cf0,	// (0x00011b0d) title_pane_g2_ParamLimits

0xf554,	// (0x0001a371) title_pane_g_ParamLimits

0x83af,	// (0x000131cc) aid_call2_pane

0x83b7,	// (0x000131d4) aid_call_pane

0x83bf,	// (0x000131dc) popup_clock_analogue_window_g1

0x83bf,	// (0x000131dc) popup_clock_analogue_window_g2

0x4f91,	// (0x0000fdae) popup_clock_analogue_window_g3

0x4f9a,	// (0x0000fdb7) popup_clock_analogue_window_g4

0x6ccf,	// (0x00011aec) popup_clock_analogue_window_g5

0x0004,

0xf6f9,	// (0x0001a516) popup_clock_analogue_window_g

0x4fa2,	// (0x0000fdbf) popup_clock_analogue_window_t1

0x4fb0,	// (0x0000fdcd) clock_digital_number_pane_ParamLimits

0x4fb0,	// (0x0000fdcd) clock_digital_number_pane

0x4fbc,	// (0x0000fdd9) clock_digital_number_pane_cp02_ParamLimits

0x4fbc,	// (0x0000fdd9) clock_digital_number_pane_cp02

0x4fc8,	// (0x0000fde5) clock_digital_number_pane_cp03_ParamLimits

0x4fc8,	// (0x0000fde5) clock_digital_number_pane_cp03

0x4fd4,	// (0x0000fdf1) clock_digital_number_pane_cp04_ParamLimits

0x4fd4,	// (0x0000fdf1) clock_digital_number_pane_cp04

0x4fe0,	// (0x0000fdfd) clock_digital_separator_pane_ParamLimits

0x4fe0,	// (0x0000fdfd) clock_digital_separator_pane

0x4fec,	// (0x0000fe09) popup_clock_digital_window_t1_ParamLimits

0x4fec,	// (0x0000fe09) popup_clock_digital_window_t1

0x6ccf,	// (0x00011aec) clock_digital_number_pane_g1

0x6ccf,	// (0x00011aec) clock_digital_number_pane_g2

0x0001,

0xf704,	// (0x0001a521) clock_digital_number_pane_g

0x6ccf,	// (0x00011aec) clock_digital_separator_pane_g1

0x6ccf,	// (0x00011aec) clock_digital_separator_pane_g2

0x0001,

0xf704,	// (0x0001a521) clock_digital_separator_pane_g

0x8dc8,	// (0x00013be5) aid_fill_nsta_ParamLimits

0x8f0a,	// (0x00013d27) indicator_nsta_pane_ParamLimits

0x907d,	// (0x00013e9a) popup_clock_analogue_window

0x907d,	// (0x00013e9a) popup_clock_digital_window

0x6db9,	// (0x00011bd6) grid_indicator_nsta_pane_ParamLimits

0xb796,	// (0x000165b3) clock_nsta_pane_t2

0x0001,

0xfaa2,	// (0x0001a8bf) clock_nsta_pane_t

0x4f55,	// (0x0000fd72) aid_size_max_handle

0x4f5f,	// (0x0000fd7c) aid_size_min_handle

0x8a56,	// (0x00013873) editor_scroll_pane

0xc75c,	// (0x00017579) ex_editor_pane

0x7eae,	// (0x00012ccb) scroll_pane_cp13

0x75de,	// (0x000123fb) scroll_pane_cp14

0x83ee,	// (0x0001320b) scroll_pane_cp36

0x841a,	// (0x00013237) list_single_graphic_hl_pane_cp2_ParamLimits

0x841a,	// (0x00013237) list_single_graphic_hl_pane_cp2

0xaa4d,	// (0x0001586a) list_single_graphic_hl_pane_ParamLimits

0xaa4d,	// (0x0001586a) list_single_graphic_hl_pane

0xc764,	// (0x00017581) aid_size_min_hl_cp1

0xc76d,	// (0x0001758a) list_highlight_pane_cp34_ParamLimits

0xc76d,	// (0x0001758a) list_highlight_pane_cp34

0xc77e,	// (0x0001759b) list_single_graphic_hl_pane_g1_ParamLimits

0xc77e,	// (0x0001759b) list_single_graphic_hl_pane_g1

0xc78b,	// (0x000175a8) list_single_graphic_hl_pane_g2_ParamLimits

0xc78b,	// (0x000175a8) list_single_graphic_hl_pane_g2

0xc78b,	// (0x000175a8) list_single_graphic_hl_pane_g3_ParamLimits

0xc78b,	// (0x000175a8) list_single_graphic_hl_pane_g3

0xafe3,	// (0x00015e00) list_single_graphic_hl_pane_g4_ParamLimits

0xafe3,	// (0x00015e00) list_single_graphic_hl_pane_g4

0xc797,	// (0x000175b4) list_single_graphic_hl_pane_g5_ParamLimits

0xc797,	// (0x000175b4) list_single_graphic_hl_pane_g5

0x0004,

0xfbed,	// (0x0001aa0a) list_single_graphic_hl_pane_g_ParamLimits

0xfbed,	// (0x0001aa0a) list_single_graphic_hl_pane_g

0xc7ab,	// (0x000175c8) list_single_graphic_hl_pane_t1_ParamLimits

0xc7ab,	// (0x000175c8) list_single_graphic_hl_pane_t1

0xc7c1,	// (0x000175de) aid_size_min_hl_cp2

0xc7ca,	// (0x000175e7) list_highlight_pane_cp34_cp2_ParamLimits

0xc7ca,	// (0x000175e7) list_highlight_pane_cp34_cp2

0xc77e,	// (0x0001759b) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc77e,	// (0x0001759b) list_single_graphic_hl_pane_g1_cp2

0xc7d7,	// (0x000175f4) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc7d7,	// (0x000175f4) list_single_graphic_hl_pane_g2_cp2

0xc7e3,	// (0x00017600) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc7e3,	// (0x00017600) list_single_graphic_hl_pane_g3_cp2

0xafe3,	// (0x00015e00) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xafe3,	// (0x00015e00) list_single_graphic_hl_pane_g4_cp2

0xc797,	// (0x000175b4) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc797,	// (0x000175b4) list_single_graphic_hl_pane_g5_cp2

0x52a0,	// (0x000100bd) control_pane_g4_ParamLimits

0x52a0,	// (0x000100bd) control_pane_g4

0x8d9e,	// (0x00013bbb) bg_popup_sub_pane_cp10_ParamLimits

0xbdfa,	// (0x00016c17) list_choice_list_pane_ParamLimits

0xbe09,	// (0x00016c26) scroll_pane_cp23

0x705c,	// (0x00011e79) bg_popup_preview_window_pane_cp02_ParamLimits

0xc3f1,	// (0x0001720e) list_preview_fixed_pane_ParamLimits

0xc407,	// (0x00017224) list_preview_fixed_pane_cp_ParamLimits

0xc407,	// (0x00017224) list_preview_fixed_pane_cp

0xc413,	// (0x00017230) popup_preview_fixed_window_g1_ParamLimits

0xc413,	// (0x00017230) popup_preview_fixed_window_g1

0xc41f,	// (0x0001723c) popup_preview_fixed_window_g2_ParamLimits

0xc41f,	// (0x0001723c) popup_preview_fixed_window_g2

0x0002,

0xfb75,	// (0x0001a992) popup_preview_fixed_window_g_ParamLimits

0xfb75,	// (0x0001a992) popup_preview_fixed_window_g

0x4ec9,	// (0x0000fce6) aid_navi_side_left_pane_ParamLimits

0x4ede,	// (0x0000fcfb) aid_navi_side_right_pane_ParamLimits

0x4ef6,	// (0x0000fd13) navi_icon_pane_stacon_ParamLimits

0x4f0a,	// (0x0000fd27) navi_navi_pane_stacon_ParamLimits

0x4ef6,	// (0x0000fd13) navi_text_pane_stacon_ParamLimits

0x4aeb,	// (0x0000f908) main_text_info_pane

0xc807,	// (0x00017624) listscroll_text_info_pane

0xc80f,	// (0x0001762c) list_text_info_pane_ParamLimits

0xc80f,	// (0x0001762c) list_text_info_pane

0xc81e,	// (0x0001763b) scroll_pane_cp24_ParamLimits

0xc81e,	// (0x0001763b) scroll_pane_cp24

0xc83c,	// (0x00017659) list_text_info_pane_t1_ParamLimits

0xc83c,	// (0x00017659) list_text_info_pane_t1

0x540c,	// (0x00010229) popup_fast_swap2_window_ParamLimits

0x540c,	// (0x00010229) popup_fast_swap2_window

0xc86d,	// (0x0001768a) aid_size_cell_fast2

0x6cc5,	// (0x00011ae2) bg_popup_window_pane_cp17

0x981a,	// (0x00014637) heading_pane_cp2

0x72a8,	// (0x000120c5) listscroll_fast2_pane

0xc877,	// (0x00017694) grid_fast2_pane

0xc881,	// (0x0001769e) listscroll_fast2_pane_g1

0xc889,	// (0x000176a6) listscroll_fast2_pane_g2

0x0001,

0xfbf8,	// (0x0001aa15) listscroll_fast2_pane_g

0x7eae,	// (0x00012ccb) scroll_pane_cp26

0xc893,	// (0x000176b0) cell_fast2_pane_ParamLimits

0xc893,	// (0x000176b0) cell_fast2_pane

0xc8a8,	// (0x000176c5) cell_fast2_pane_g1

0xc8b1,	// (0x000176ce) cell_fast2_pane_g2

0xc8ba,	// (0x000176d7) cell_fast2_pane_g3

0x0002,

0xfbfd,	// (0x0001aa1a) cell_fast2_pane_g

0x739b,	// (0x000121b8) grid_highlight_pane_cp9

0x53d2,	// (0x000101ef) main_eswt_pane_ParamLimits

0x53d2,	// (0x000101ef) main_eswt_pane

0xc833,	// (0x00017650) list_single_text_info_pane

0xc8c2,	// (0x000176df) eswt_ctrl_button_pane

0xc8c2,	// (0x000176df) eswt_ctrl_canvas_pane

0xc8ca,	// (0x000176e7) eswt_ctrl_combo_pane

0xc8c2,	// (0x000176df) eswt_ctrl_default_pane

0xc8c2,	// (0x000176df) eswt_ctrl_label_pane

0xc8d2,	// (0x000176ef) eswt_ctrl_wait_pane

0xc8da,	// (0x000176f7) eswt_shell_pane

0x6cc5,	// (0x00011ae2) listscroll_eswt_app_pane

0xc8fa,	// (0x00017717) popup_eswt_tasktip_window_ParamLimits

0xc8fa,	// (0x00017717) popup_eswt_tasktip_window

0x93f2,	// (0x0001420f) bg_popup_window_pane_cp18

0xc90b,	// (0x00017728) eswt_control_pane_g1_ParamLimits

0xc90b,	// (0x00017728) eswt_control_pane_g1

0xc918,	// (0x00017735) eswt_control_pane_g2_ParamLimits

0xc918,	// (0x00017735) eswt_control_pane_g2

0xc925,	// (0x00017742) eswt_control_pane_g3_ParamLimits

0xc925,	// (0x00017742) eswt_control_pane_g3

0xc932,	// (0x0001774f) eswt_control_pane_g4_ParamLimits

0xc932,	// (0x0001774f) eswt_control_pane_g4

0x0003,

0xfc04,	// (0x0001aa21) eswt_control_pane_g_ParamLimits

0xfc04,	// (0x0001aa21) eswt_control_pane_g

0x7bc4,	// (0x000129e1) bg_button_pane_ParamLimits

0x7bc4,	// (0x000129e1) bg_button_pane

0x73b0,	// (0x000121cd) common_borders_pane_copy2_ParamLimits

0x73b0,	// (0x000121cd) common_borders_pane_copy2

0xc93f,	// (0x0001775c) control_button_pane_g1_ParamLimits

0xc93f,	// (0x0001775c) control_button_pane_g1

0xc94b,	// (0x00017768) control_button_pane_g2_ParamLimits

0xc94b,	// (0x00017768) control_button_pane_g2

0xc957,	// (0x00017774) control_button_pane_g3_ParamLimits

0xc957,	// (0x00017774) control_button_pane_g3

0x0002,

0xfc0d,	// (0x0001aa2a) control_button_pane_g_ParamLimits

0xfc0d,	// (0x0001aa2a) control_button_pane_g

0xc96b,	// (0x00017788) control_button_pane_t1

0xc979,	// (0x00017796) control_button_pane_t2

0x0001,

0xfc14,	// (0x0001aa31) control_button_pane_t

0x92cc,	// (0x000140e9) bg_button_pane_g1

0x92dc,	// (0x000140f9) bg_button_pane_g2

0x92d4,	// (0x000140f1) bg_button_pane_g3

0x92ec,	// (0x00014109) bg_button_pane_g4

0x92e4,	// (0x00014101) bg_button_pane_g5

0x92f4,	// (0x00014111) bg_button_pane_g6

0x92fc,	// (0x00014119) bg_button_pane_g7

0x930c,	// (0x00014129) bg_button_pane_g8

0x9304,	// (0x00014121) bg_button_pane_g9

0x0008,

0xf867,	// (0x0001a684) bg_button_pane_g

0xbdb5,	// (0x00016bd2) common_borders_pane_ParamLimits

0xbdb5,	// (0x00016bd2) common_borders_pane

0xc90b,	// (0x00017728) eswt_control_pane_g1_copy1_ParamLimits

0xc90b,	// (0x00017728) eswt_control_pane_g1_copy1

0xc918,	// (0x00017735) eswt_control_pane_g2_copy1_ParamLimits

0xc918,	// (0x00017735) eswt_control_pane_g2_copy1

0xc925,	// (0x00017742) eswt_control_pane_g3_copy1_ParamLimits

0xc925,	// (0x00017742) eswt_control_pane_g3_copy1

0xc932,	// (0x0001774f) eswt_control_pane_g4_copy1_ParamLimits

0xc932,	// (0x0001774f) eswt_control_pane_g4_copy1

0xbdf0,	// (0x00016c0d) bg_eswt_ctrl_canvas_pane_g1

0xbdb5,	// (0x00016bd2) common_borders_pane_cp2_ParamLimits

0xbdb5,	// (0x00016bd2) common_borders_pane_cp2

0xbdb5,	// (0x00016bd2) common_borders_pane_cp3_ParamLimits

0xbdb5,	// (0x00016bd2) common_borders_pane_cp3

0xc987,	// (0x000177a4) separator_horizontal_pane

0xc98f,	// (0x000177ac) separator_vertical_pane

0xc90b,	// (0x00017728) eswt_control_pane_g1_copy2_ParamLimits

0xc90b,	// (0x00017728) eswt_control_pane_g1_copy2

0xc918,	// (0x00017735) eswt_control_pane_g2_copy2_ParamLimits

0xc918,	// (0x00017735) eswt_control_pane_g2_copy2

0xc925,	// (0x00017742) eswt_control_pane_g3_copy2_ParamLimits

0xc925,	// (0x00017742) eswt_control_pane_g3_copy2

0xc932,	// (0x0001774f) eswt_control_pane_g4_copy2_ParamLimits

0xc932,	// (0x0001774f) eswt_control_pane_g4_copy2

0x6cc5,	// (0x00011ae2) common_borders_pane_cp4

0xc998,	// (0x000177b5) separator_horizontal_pane_g1

0xc9a1,	// (0x000177be) separator_horizontal_pane_g2

0xc9aa,	// (0x000177c7) separator_horizontal_pane_g3

0x0002,

0xfc19,	// (0x0001aa36) separator_horizontal_pane_g

0xc90b,	// (0x00017728) eswt_control_pane_g1_copy3_ParamLimits

0xc90b,	// (0x00017728) eswt_control_pane_g1_copy3

0xc918,	// (0x00017735) eswt_control_pane_g2_copy3_ParamLimits

0xc918,	// (0x00017735) eswt_control_pane_g2_copy3

0xc925,	// (0x00017742) eswt_control_pane_g3_copy3_ParamLimits

0xc925,	// (0x00017742) eswt_control_pane_g3_copy3

0xc932,	// (0x0001774f) eswt_control_pane_g4_copy3_ParamLimits

0xc932,	// (0x0001774f) eswt_control_pane_g4_copy3

0x6cc5,	// (0x00011ae2) common_borders_pane_cp5

0xc9b3,	// (0x000177d0) separator_vertical_pane_g1

0xc9bc,	// (0x000177d9) separator_vertical_pane_g2

0xc9c5,	// (0x000177e2) separator_vertical_pane_g3

0x0002,

0xfc20,	// (0x0001aa3d) separator_vertical_pane_g

0xc90b,	// (0x00017728) eswt_control_pane_g1_copy4_ParamLimits

0xc90b,	// (0x00017728) eswt_control_pane_g1_copy4

0xc918,	// (0x00017735) eswt_control_pane_g2_copy4_ParamLimits

0xc918,	// (0x00017735) eswt_control_pane_g2_copy4

0xc925,	// (0x00017742) eswt_control_pane_g3_copy4_ParamLimits

0xc925,	// (0x00017742) eswt_control_pane_g3_copy4

0xc932,	// (0x0001774f) eswt_control_pane_g4_copy4_ParamLimits

0xc932,	// (0x0001774f) eswt_control_pane_g4_copy4

0xc9ce,	// (0x000177eb) eswt_ctrl_combo_button_pane

0xc9d6,	// (0x000177f3) eswt_ctrl_input_pane

0xc9de,	// (0x000177fb) popup_choice_list_window_cp70

0xc9e6,	// (0x00017803) eswt_ctrl_input_pane_t1

0x6cc5,	// (0x00011ae2) input_focus_pane_cp70

0xbdb5,	// (0x00016bd2) bg_button_pane_cp70_ParamLimits

0xbdb5,	// (0x00016bd2) bg_button_pane_cp70

0xc9f4,	// (0x00017811) eswt_ctrl_combo_button_pane_g1

0xc9fc,	// (0x00017819) wait_bar_pane_cp70

0x93f2,	// (0x0001420f) bg_popup_window_pane_cp70_ParamLimits

0x93f2,	// (0x0001420f) bg_popup_window_pane_cp70

0xca04,	// (0x00017821) popup_eswt_tasktip_window_t1

0xca1a,	// (0x00017837) wait_bar_pane_cp71_ParamLimits

0xca1a,	// (0x00017837) wait_bar_pane_cp71

0xca26,	// (0x00017843) grid_eswt_app_pane

0x81c8,	// (0x00012fe5) scroll_pane_cp70

0xca2f,	// (0x0001784c) cell_eswt_app_pane_ParamLimits

0xca2f,	// (0x0001784c) cell_eswt_app_pane

0xca5f,	// (0x0001787c) cell_eswt_app_pane_g1_ParamLimits

0xca5f,	// (0x0001787c) cell_eswt_app_pane_g1

0xca8e,	// (0x000178ab) cell_eswt_app_pane_g2_ParamLimits

0xca8e,	// (0x000178ab) cell_eswt_app_pane_g2

0x0001,

0xfc27,	// (0x0001aa44) cell_eswt_app_pane_g_ParamLimits

0xfc27,	// (0x0001aa44) cell_eswt_app_pane_g

0xcab7,	// (0x000178d4) cell_eswt_app_pane_t1_ParamLimits

0xcab7,	// (0x000178d4) cell_eswt_app_pane_t1

0xcae9,	// (0x00017906) grid_highlight_pane_cp70_ParamLimits

0xcae9,	// (0x00017906) grid_highlight_pane_cp70

0x892b,	// (0x00013748) set_content_pane_g1

0x8cf6,	// (0x00013b13) status_small_volume_pane

0x6213,	// (0x00011030) status_small_volume_pane_g1

0x621b,	// (0x00011038) volume_small2_pane

0x6224,	// (0x00011041) volume_small2_pane_g1

0x622d,	// (0x0001104a) volume_small2_pane_g2

0x6236,	// (0x00011053) volume_small2_pane_g3

0x623f,	// (0x0001105c) volume_small2_pane_g4

0x6248,	// (0x00011065) volume_small2_pane_g5

0x6251,	// (0x0001106e) volume_small2_pane_g6

0x625a,	// (0x00011077) volume_small2_pane_g7

0x6263,	// (0x00011080) volume_small2_pane_g8

0x626c,	// (0x00011089) volume_small2_pane_g9

0x6275,	// (0x00011092) volume_small2_pane_g10

0x0009,

0xfc2c,	// (0x0001aa49) volume_small2_pane_g

0xc1b6,	// (0x00016fd3) fep_vkb_top_text_pane_g1_ParamLimits

0xc1d1,	// (0x00016fee) fep_vkb_top_text_pane_t1_ParamLimits

0xc42b,	// (0x00017248) popup_preview_fixed_window_g3_ParamLimits

0xc42b,	// (0x00017248) popup_preview_fixed_window_g3

0x58b9,	// (0x000106d6) popup_toolbar_trans_pane

0xa7c8,	// (0x000155e5) aid_height_set_list_ParamLimits

0xa7d9,	// (0x000155f6) aid_size_parent_ParamLimits

0x8d9e,	// (0x00013bbb) list_highlight_pane_cp2_ParamLimits

0x892b,	// (0x00013748) set_content_pane_g1_ParamLimits

0xaa69,	// (0x00015886) list_single_image_pane_ParamLimits

0xaa69,	// (0x00015886) list_single_image_pane

0xcaf5,	// (0x00017912) aid_size_cell_image_ParamLimits

0xcaf5,	// (0x00017912) aid_size_cell_image

0xcb02,	// (0x0001791f) grid_single_image_pane_ParamLimits

0xcb02,	// (0x0001791f) grid_single_image_pane

0x9e1c,	// (0x00014c39) list_single_image_pane_g1_ParamLimits

0x9e1c,	// (0x00014c39) list_single_image_pane_g1

0xcb0e,	// (0x0001792b) list_single_image_pane_g2_ParamLimits

0xcb0e,	// (0x0001792b) list_single_image_pane_g2

0x0001,

0xfc41,	// (0x0001aa5e) list_single_image_pane_g_ParamLimits

0xfc41,	// (0x0001aa5e) list_single_image_pane_g

0xcb22,	// (0x0001793f) list_single_image_pane_t1_ParamLimits

0xcb22,	// (0x0001793f) list_single_image_pane_t1

0xcb38,	// (0x00017955) cell_image_list_pane_ParamLimits

0xcb38,	// (0x00017955) cell_image_list_pane

0xcb4c,	// (0x00017969) cell_image_list_pane_g1

0xcb55,	// (0x00017972) cell_image_list_pane_g2

0x0001,

0xfc46,	// (0x0001aa63) cell_image_list_pane_g

0xcb5e,	// (0x0001797b) aid_size_cell_tb_trans_pane

0x7bc4,	// (0x000129e1) bg_tb_trans_pane

0xcb70,	// (0x0001798d) grid_tb_trans_pane

0x92cc,	// (0x000140e9) bg_tb_trans_pane_g1

0x92dc,	// (0x000140f9) bg_tb_trans_pane_g2

0x92d4,	// (0x000140f1) bg_tb_trans_pane_g3

0x92ec,	// (0x00014109) bg_tb_trans_pane_g4

0x92e4,	// (0x00014101) bg_tb_trans_pane_g5

0x930c,	// (0x00014129) bg_tb_trans_pane_g6

0x9304,	// (0x00014121) bg_tb_trans_pane_g7

0x92f4,	// (0x00014111) bg_tb_trans_pane_g8

0x92fc,	// (0x00014119) bg_tb_trans_pane_g9

0x0008,

0xfc4b,	// (0x0001aa68) bg_tb_trans_pane_g

0xcb84,	// (0x000179a1) cell_toolbar_trans_pane_ParamLimits

0xcb84,	// (0x000179a1) cell_toolbar_trans_pane

0xbdf0,	// (0x00016c0d) cell_toolbar_trans_pane_g1

0xb96b,	// (0x00016788) list_form2_midp_pane_t1

0xb979,	// (0x00016796) list_form2_midp_pane_t2

0x0001,

0xfae8,	// (0x0001a905) list_form2_midp_pane_t

0xb987,	// (0x000167a4) scroll_pane_cp51_ParamLimits

0xbb92,	// (0x000169af) form2_midp_wait_pane_g1

0xbb9b,	// (0x000169b8) form2_midp_wait_pane_g2

0xbba4,	// (0x000169c1) form2_midp_wait_pane_g3

0x0002,

0xfafd,	// (0x0001a91a) form2_midp_wait_pane_g

0x6db9,	// (0x00011bd6) list_highlight_pane_cp21_ParamLimits

0xbbfb,	// (0x00016a18) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xbc0a,	// (0x00016a27) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xa9f1,	// (0x0001580e) list_single_2graphic_im_pane_ParamLimits

0xa9f1,	// (0x0001580e) list_single_2graphic_im_pane

0xcbaa,	// (0x000179c7) list_single_2graphic_im_pane_g1_ParamLimits

0xcbaa,	// (0x000179c7) list_single_2graphic_im_pane_g1

0xcbbb,	// (0x000179d8) list_single_2graphic_im_pane_g2_ParamLimits

0xcbbb,	// (0x000179d8) list_single_2graphic_im_pane_g2

0xcbc7,	// (0x000179e4) list_single_2graphic_im_pane_g3_ParamLimits

0xcbc7,	// (0x000179e4) list_single_2graphic_im_pane_g3

0x0003,

0xfc5e,	// (0x0001aa7b) list_single_2graphic_im_pane_g_ParamLimits

0xfc5e,	// (0x0001aa7b) list_single_2graphic_im_pane_g

0xcbe7,	// (0x00017a04) list_single_2graphic_im_pane_t1_ParamLimits

0xcbe7,	// (0x00017a04) list_single_2graphic_im_pane_t1

0xc437,	// (0x00017254) list_single_graphic_2heading_pane_fp_ParamLimits

0xc437,	// (0x00017254) list_single_graphic_2heading_pane_fp

0xc47b,	// (0x00017298) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xc47b,	// (0x00017298) list_single_graphic_2heading_pane_fp_g1

0xc44c,	// (0x00017269) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc44c,	// (0x00017269) list_single_graphic_2heading_pane_fp_g2

0x7803,	// (0x00012620) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x7803,	// (0x00012620) list_single_graphic_2heading_pane_fp_g3

0x7bea,	// (0x00012a07) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x7bea,	// (0x00012a07) list_single_graphic_2heading_pane_fp_g4

0xc458,	// (0x00017275) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc458,	// (0x00017275) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb85,	// (0x0001a9a2) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb85,	// (0x0001a9a2) list_single_graphic_2heading_pane_fp_g

0xcc18,	// (0x00017a35) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xcc18,	// (0x00017a35) list_single_graphic_2heading_pane_fp_t1

0xc4b3,	// (0x000172d0) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xc4b3,	// (0x000172d0) list_single_graphic_2heading_pane_fp_t2

0xcc2e,	// (0x00017a4b) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xcc2e,	// (0x00017a4b) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc67,	// (0x0001aa84) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc67,	// (0x0001aa84) list_single_graphic_2heading_pane_fp_t

0xbe7c,	// (0x00016c99) fep_hwr_write_pane_g5_ParamLimits

0xbe7c,	// (0x00016c99) fep_hwr_write_pane_g5

0xbe88,	// (0x00016ca5) fep_hwr_write_pane_g6_ParamLimits

0xbe88,	// (0x00016ca5) fep_hwr_write_pane_g6

0xc8da,	// (0x000176f7) eswt_shell_pane_ParamLimits

0x93f2,	// (0x0001420f) bg_popup_window_pane_cp18_ParamLimits

0xa6f9,	// (0x00015516) heading_pane_cp70

0xca04,	// (0x00017821) popup_eswt_tasktip_window_t1_ParamLimits

0x8e1d,	// (0x00013c3a) aid_touch_tab_arrow_left

0x8e29,	// (0x00013c46) aid_touch_tab_arrow_right

0x6d01,	// (0x00011b1e) title_pane_g3_ParamLimits

0x6d01,	// (0x00011b1e) title_pane_g3

0x7aa3,	// (0x000128c0) set_value_pane_g1

0x58b9,	// (0x000106d6) popup_toolbar_trans_pane_ParamLimits

0xcb5e,	// (0x0001797b) aid_size_cell_tb_trans_pane_ParamLimits

0x7bc4,	// (0x000129e1) bg_tb_trans_pane_ParamLimits

0xcb70,	// (0x0001798d) grid_tb_trans_pane_ParamLimits

0x705c,	// (0x00011e79) cont_note_pane_ParamLimits

0x705c,	// (0x00011e79) cont_note_pane

0x73b0,	// (0x000121cd) cont_snote2_single_text_pane_ParamLimits

0x73b0,	// (0x000121cd) cont_snote2_single_text_pane

0x73b0,	// (0x000121cd) cont_snote2_single_graphic_pane_ParamLimits

0x73b0,	// (0x000121cd) cont_snote2_single_graphic_pane

0x9a35,	// (0x00014852) cont_note_wait_pane_ParamLimits

0x9a35,	// (0x00014852) cont_note_wait_pane

0x9a35,	// (0x00014852) cont_note_image_pane_ParamLimits

0x9a35,	// (0x00014852) cont_note_image_pane

0xcc44,	// (0x00017a61) popup_note2_window_g1_ParamLimits

0xcc44,	// (0x00017a61) popup_note2_window_g1

0xcc75,	// (0x00017a92) popup_note2_window_t1_ParamLimits

0xcc75,	// (0x00017a92) popup_note2_window_t1

0xccba,	// (0x00017ad7) popup_note2_window_t2_ParamLimits

0xccba,	// (0x00017ad7) popup_note2_window_t2

0xccff,	// (0x00017b1c) popup_note2_window_t3_ParamLimits

0xccff,	// (0x00017b1c) popup_note2_window_t3

0xcd44,	// (0x00017b61) popup_note2_window_t4_ParamLimits

0xcd44,	// (0x00017b61) popup_note2_window_t4

0x70e0,	// (0x00011efd) popup_note2_window_t5_ParamLimits

0x70e0,	// (0x00011efd) popup_note2_window_t5

0x0004,

0xfc73,	// (0x0001aa90) popup_note2_window_t_ParamLimits

0xfc73,	// (0x0001aa90) popup_note2_window_t

0xcd73,	// (0x00017b90) popup_note2_image_window_g1_ParamLimits

0xcd73,	// (0x00017b90) popup_note2_image_window_g1

0xcd7f,	// (0x00017b9c) popup_note2_image_window_g2_ParamLimits

0xcd7f,	// (0x00017b9c) popup_note2_image_window_g2

0x0001,

0xfc7e,	// (0x0001aa9b) popup_note2_image_window_g_ParamLimits

0xfc7e,	// (0x0001aa9b) popup_note2_image_window_g

0xcd91,	// (0x00017bae) popup_note2_image_window_t1_ParamLimits

0xcd91,	// (0x00017bae) popup_note2_image_window_t1

0xcda9,	// (0x00017bc6) popup_note2_image_window_t2_ParamLimits

0xcda9,	// (0x00017bc6) popup_note2_image_window_t2

0xcdc1,	// (0x00017bde) popup_note2_image_window_t3_ParamLimits

0xcdc1,	// (0x00017bde) popup_note2_image_window_t3

0x0002,

0xfc83,	// (0x0001aaa0) popup_note2_image_window_t_ParamLimits

0xfc83,	// (0x0001aaa0) popup_note2_image_window_t

0x9a43,	// (0x00014860) popup_note2_wait_window_g1_ParamLimits

0x9a43,	// (0x00014860) popup_note2_wait_window_g1

0xcddd,	// (0x00017bfa) popup_note2_wait_window_g2_ParamLimits

0xcddd,	// (0x00017bfa) popup_note2_wait_window_g2

0x9a5b,	// (0x00014878) popup_note2_wait_window_g3_ParamLimits

0x9a5b,	// (0x00014878) popup_note2_wait_window_g3

0x0002,

0xfc8a,	// (0x0001aaa7) popup_note2_wait_window_g_ParamLimits

0xfc8a,	// (0x0001aaa7) popup_note2_wait_window_g

0xcde9,	// (0x00017c06) popup_note2_wait_window_t1_ParamLimits

0xcde9,	// (0x00017c06) popup_note2_wait_window_t1

0xce07,	// (0x00017c24) popup_note2_wait_window_t2_ParamLimits

0xce07,	// (0x00017c24) popup_note2_wait_window_t2

0xce25,	// (0x00017c42) popup_note2_wait_window_t3_ParamLimits

0xce25,	// (0x00017c42) popup_note2_wait_window_t3

0xce37,	// (0x00017c54) popup_note2_wait_window_t4_ParamLimits

0xce37,	// (0x00017c54) popup_note2_wait_window_t4

0x0003,

0xfc91,	// (0x0001aaae) popup_note2_wait_window_t_ParamLimits

0xfc91,	// (0x0001aaae) popup_note2_wait_window_t

0xce49,	// (0x00017c66) wait_bar2_pane_ParamLimits

0xce49,	// (0x00017c66) wait_bar2_pane

0xce61,	// (0x00017c7e) popup_snote2_single_text_window_g1_ParamLimits

0xce61,	// (0x00017c7e) popup_snote2_single_text_window_g1

0xce89,	// (0x00017ca6) popup_snote2_single_text_window_t1_ParamLimits

0xce89,	// (0x00017ca6) popup_snote2_single_text_window_t1

0xced5,	// (0x00017cf2) popup_snote2_single_text_window_t2_ParamLimits

0xced5,	// (0x00017cf2) popup_snote2_single_text_window_t2

0xcf21,	// (0x00017d3e) popup_snote2_single_text_window_t3_ParamLimits

0xcf21,	// (0x00017d3e) popup_snote2_single_text_window_t3

0xcf62,	// (0x00017d7f) popup_snote2_single_text_window_t4_ParamLimits

0xcf62,	// (0x00017d7f) popup_snote2_single_text_window_t4

0xcf98,	// (0x00017db5) popup_snote2_single_text_window_t5_ParamLimits

0xcf98,	// (0x00017db5) popup_snote2_single_text_window_t5

0x0004,

0xfc9a,	// (0x0001aab7) popup_snote2_single_text_window_t_ParamLimits

0xfc9a,	// (0x0001aab7) popup_snote2_single_text_window_t

0xcfc3,	// (0x00017de0) popup_snote2_single_graphic_window_g1_ParamLimits

0xcfc3,	// (0x00017de0) popup_snote2_single_graphic_window_g1

0xcfeb,	// (0x00017e08) popup_snote2_single_graphic_window_g2_ParamLimits

0xcfeb,	// (0x00017e08) popup_snote2_single_graphic_window_g2

0x0001,

0xfca5,	// (0x0001aac2) popup_snote2_single_graphic_window_g_ParamLimits

0xfca5,	// (0x0001aac2) popup_snote2_single_graphic_window_g

0xd013,	// (0x00017e30) popup_snote2_single_graphic_window_t1_ParamLimits

0xd013,	// (0x00017e30) popup_snote2_single_graphic_window_t1

0xd05f,	// (0x00017e7c) popup_snote2_single_graphic_window_t2_ParamLimits

0xd05f,	// (0x00017e7c) popup_snote2_single_graphic_window_t2

0xcf21,	// (0x00017d3e) popup_snote2_single_graphic_window_t3_ParamLimits

0xcf21,	// (0x00017d3e) popup_snote2_single_graphic_window_t3

0xcf62,	// (0x00017d7f) popup_snote2_single_graphic_window_t4_ParamLimits

0xcf62,	// (0x00017d7f) popup_snote2_single_graphic_window_t4

0xcf98,	// (0x00017db5) popup_snote2_single_graphic_window_t5_ParamLimits

0xcf98,	// (0x00017db5) popup_snote2_single_graphic_window_t5

0x0004,

0xfcaa,	// (0x0001aac7) popup_snote2_single_graphic_window_t_ParamLimits

0xfcaa,	// (0x0001aac7) popup_snote2_single_graphic_window_t

0xb848,	// (0x00016665) clock_nsta_pane_cp2_t1

0xb848,	// (0x00016665) clock_nsta_pane_cp2_t2

0x0001,

0xfabe,	// (0x0001a8db) clock_nsta_pane_cp2_t

0x7bde,	// (0x000129fb) form_field_data_wide_pane_g1_ParamLimits

0x7803,	// (0x00012620) form_field_data_wide_pane_g2_ParamLimits

0x7803,	// (0x00012620) form_field_data_wide_pane_g2

0x7bea,	// (0x00012a07) form_field_data_wide_pane_g3_ParamLimits

0x7bea,	// (0x00012a07) form_field_data_wide_pane_g3

0x0002,

0xf67c,	// (0x0001a499) form_field_data_wide_pane_g_ParamLimits

0xf67c,	// (0x0001a499) form_field_data_wide_pane_g

0xb732,	// (0x0001654f) grid_touch_3_pane_ParamLimits

0xb732,	// (0x0001654f) grid_touch_3_pane

0xd0ab,	// (0x00017ec8) cell_touch_3_pane_ParamLimits

0xd0ab,	// (0x00017ec8) cell_touch_3_pane

0xbdf0,	// (0x00016c0d) cell_touch_3_pane_g1

0xbdf0,	// (0x00016c0d) cell_touch_3_pane_g2

0x0001,

0xfb43,	// (0x0001a960) cell_touch_3_pane_g

0x7112,	// (0x00011f2f) cont_query_data_pane

0x711a,	// (0x00011f37) cont_query_data_pane_cp1

0xd0d9,	// (0x00017ef6) button_value_adjust_pane_cp7

0xd0e1,	// (0x00017efe) query_popup_pane_cp3

0x84af,	// (0x000132cc) bg_popup_sub_pane_cp22_ParamLimits

0x500b,	// (0x0000fe28) navi_navi_volume_pane_cp2

0x5026,	// (0x0000fe43) popup_side_volume_key_window_g2

0x5035,	// (0x0000fe52) popup_side_volume_key_window_g3

0x0002,

0xf712,	// (0x0001a52f) popup_side_volume_key_window_g

0x5052,	// (0x0000fe6f) popup_side_volume_key_window_t2

0x0001,

0xf719,	// (0x0001a536) popup_side_volume_key_window_t

0x87f5,	// (0x00013612) popup_side_volume_key_window_ParamLimits

0x77c3,	// (0x000125e0) list_double_graphic_pane_g4_ParamLimits

0x77c3,	// (0x000125e0) list_double_graphic_pane_g4

0xaa2e,	// (0x0001584b) list_single_2heading_msg_pane_ParamLimits

0xaa2e,	// (0x0001584b) list_single_2heading_msg_pane

0xd110,	// (0x00017f2d) list_single_2heading_msg_pane_g1_ParamLimits

0xd110,	// (0x00017f2d) list_single_2heading_msg_pane_g1

0x898f,	// (0x000137ac) list_single_2heading_msg_pane_g2_ParamLimits

0x898f,	// (0x000137ac) list_single_2heading_msg_pane_g2

0xb2ec,	// (0x00016109) list_single_2heading_msg_pane_g3_ParamLimits

0xb2ec,	// (0x00016109) list_single_2heading_msg_pane_g3

0xd11c,	// (0x00017f39) list_single_2heading_msg_pane_g4_ParamLimits

0xd11c,	// (0x00017f39) list_single_2heading_msg_pane_g4

0x0003,

0xfcb5,	// (0x0001aad2) list_single_2heading_msg_pane_g_ParamLimits

0xfcb5,	// (0x0001aad2) list_single_2heading_msg_pane_g

0xd134,	// (0x00017f51) list_single_2heading_msg_pane_t1_ParamLimits

0xd134,	// (0x00017f51) list_single_2heading_msg_pane_t1

0xd15c,	// (0x00017f79) list_single_2heading_msg_pane_t2_ParamLimits

0xd15c,	// (0x00017f79) list_single_2heading_msg_pane_t2

0xd18b,	// (0x00017fa8) list_single_2heading_msg_pane_t3_ParamLimits

0xd18b,	// (0x00017fa8) list_single_2heading_msg_pane_t3

0xd1c4,	// (0x00017fe1) list_single_2heading_msg_pane_t4_ParamLimits

0xd1c4,	// (0x00017fe1) list_single_2heading_msg_pane_t4

0x0003,

0xfcbe,	// (0x0001aadb) list_single_2heading_msg_pane_t_ParamLimits

0xfcbe,	// (0x0001aadb) list_single_2heading_msg_pane_t

0x6d0d,	// (0x00011b2a) title_pane_g4_ParamLimits

0x6d0d,	// (0x00011b2a) title_pane_g4

0x4e1a,	// (0x0000fc37) title_pane_stacon_g3_ParamLimits

0x4e1a,	// (0x0000fc37) title_pane_stacon_g3

0xcbdb,	// (0x000179f8) list_single_2graphic_im_pane_g4_ParamLimits

0xcbdb,	// (0x000179f8) list_single_2graphic_im_pane_g4

0xa4a0,	// (0x000152bd) popup_side_volume_key_window_cp

0xad98,	// (0x00015bb5) main_idle_act2_pane_t1

0x5a17,	// (0x00010834) toolbar_button_pane_g10

0x75a8,	// (0x000123c5) popup_toolbar_window_cp1

0xb839,	// (0x00016656) clock_nsta_pane_cp_t1

0xb839,	// (0x00016656) clock_nsta_pane_cp_t2

0x0001,

0xfab9,	// (0x0001a8d6) clock_nsta_pane_cp_t

0x500b,	// (0x0000fe28) navi_navi_volume_pane_cp2_ParamLimits

0x501a,	// (0x0000fe37) popup_side_volume_key_window_g1_ParamLimits

0x5026,	// (0x0000fe43) popup_side_volume_key_window_g2_ParamLimits

0x5035,	// (0x0000fe52) popup_side_volume_key_window_g3_ParamLimits

0xf712,	// (0x0001a52f) popup_side_volume_key_window_g_ParamLimits

0x5e7f,	// (0x00010c9c) fep_hwr_aid_pane

0x5f26,	// (0x00010d43) bg_fep_hwr_top_pane_g4_ParamLimits

0xbe4c,	// (0x00016c69) fep_hwr_top_pane_g1_ParamLimits

0xbe5e,	// (0x00016c7b) fep_hwr_top_pane_g2_ParamLimits

0x5f46,	// (0x00010d63) fep_hwr_top_pane_g3_ParamLimits

0xfb0e,	// (0x0001a92b) fep_hwr_top_pane_g_ParamLimits

0x5f5b,	// (0x00010d78) fep_hwr_top_text_pane_ParamLimits

0xa263,	// (0x00015080) aid_touch_tab_arrow_arrow_2

0xa26c,	// (0x00015089) aid_touch_tab_arrow_left_2

0x5e93,	// (0x00010cb0) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x5eca,	// (0x00010ce7) fep_hwr_prediction_pane

0xbfbe,	// (0x00016ddb) fep_vkb_prediction_pane

0xc0c2,	// (0x00016edf) fep_vkb_side_pane_g3_ParamLimits

0xc0c2,	// (0x00016edf) fep_vkb_side_pane_g3

0x60d6,	// (0x00010ef3) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x6142,	// (0x00010f5f) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x614f,	// (0x00010f6c) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbbd,	// (0x0001a9da) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x627e,	// (0x0001109b) fep_hwr_prediction_pane_g1

0x6288,	// (0x000110a5) fep_hwr_prediction_pane_g2

0x6290,	// (0x000110ad) fep_hwr_prediction_pane_g3

0x6298,	// (0x000110b5) fep_hwr_prediction_pane_g4

0x0003,

0xfcc7,	// (0x0001aae4) fep_hwr_prediction_pane_g

0xd1e9,	// (0x00018006) fep_vkb_prediction_pane_g1

0xd1f3,	// (0x00018010) fep_vkb_prediction_pane_g2

0xd1fb,	// (0x00018018) fep_vkb_prediction_pane_g3

0xd203,	// (0x00018020) fep_vkb_prediction_pane_g4

0x0003,

0xfcd0,	// (0x0001aaed) fep_vkb_prediction_pane_g

0x5cff,	// (0x00010b1c) slider_set_pane_g3

0x5d13,	// (0x00010b30) slider_set_pane_g4

0x5d2b,	// (0x00010b48) slider_set_pane_g5

0x5cff,	// (0x00010b1c) slider_set_pane_g6

0x5d41,	// (0x00010b5e) slider_set_pane_g7

0xa93e,	// (0x0001575b) slider_form_pane_g3

0xa947,	// (0x00015764) slider_form_pane_g4

0xa94f,	// (0x0001576c) slider_form_pane_g5

0xa93e,	// (0x0001575b) slider_form_pane_g6

0xa957,	// (0x00015774) slider_form_pane_g7

0xb0d6,	// (0x00015ef3) slider_set_pane_vc_g3

0xb0df,	// (0x00015efc) slider_set_pane_vc_g4

0xb0e8,	// (0x00015f05) slider_set_pane_vc_g5

0xb0d6,	// (0x00015ef3) slider_set_pane_vc_g6

0xb0f1,	// (0x00015f0e) slider_set_pane_vc_g7

0xb505,	// (0x00016322) slider_form_pane_vc_g1

0xb50e,	// (0x0001632b) slider_form_pane_vc_g2

0xb517,	// (0x00016334) slider_form_pane_vc_g3

0xb505,	// (0x00016322) slider_form_pane_vc_g4

0xb520,	// (0x0001633d) slider_form_pane_vc_g5

0x0004,

0xfa8b,	// (0x0001a8a8) slider_form_pane_vc_g

0x4aeb,	// (0x0000f908) main_idle_act3_pane

0xd20b,	// (0x00018028) ai3_links_pane

0xd214,	// (0x00018031) popup_ai3_data_window_ParamLimits

0xd214,	// (0x00018031) popup_ai3_data_window

0x6cc5,	// (0x00011ae2) grid_ai3_links_pane

0xd22e,	// (0x0001804b) cell_ai3_links_pane_ParamLimits

0xd22e,	// (0x0001804b) cell_ai3_links_pane

0xd246,	// (0x00018063) bg_popup_sub_pane_cp11

0xd253,	// (0x00018070) cell_ai3_links_pane_g1

0x6cc5,	// (0x00011ae2) bg_popup_sub_pane_cp12

0xd278,	// (0x00018095) heading_ai3_data_pane

0xd280,	// (0x0001809d) list_ai3_gene_pane

0xd28c,	// (0x000180a9) popup_ai3_data_window_g1

0xd294,	// (0x000180b1) heading_ai3_data_pane_g1

0xd29c,	// (0x000180b9) heading_ai3_data_pane_t1

0xd2aa,	// (0x000180c7) list_double_ai3_gene_pane_ParamLimits

0xd2aa,	// (0x000180c7) list_double_ai3_gene_pane

0xd2b7,	// (0x000180d4) list_single_ai3_gene_pane_ParamLimits

0xd2b7,	// (0x000180d4) list_single_ai3_gene_pane

0xbdb5,	// (0x00016bd2) list_highlight_pane_cp7_ParamLimits

0xbdb5,	// (0x00016bd2) list_highlight_pane_cp7

0xd2c4,	// (0x000180e1) list_single_a13_gene_pane_t1_ParamLimits

0xd2c4,	// (0x000180e1) list_single_a13_gene_pane_t1

0xd2db,	// (0x000180f8) list_single_ai3_gene_pane_g1

0xd2e4,	// (0x00018101) list_single_ai3_gene_pane_g2

0x0001,

0xfcd9,	// (0x0001aaf6) list_single_ai3_gene_pane_g

0xd2ec,	// (0x00018109) list_double_ai3_gene_pane_g1_ParamLimits

0xd2ec,	// (0x00018109) list_double_ai3_gene_pane_g1

0xd2f8,	// (0x00018115) list_double_ai3_gene_pane_t1_ParamLimits

0xd2f8,	// (0x00018115) list_double_ai3_gene_pane_t1

0xd314,	// (0x00018131) list_double_ai3_gene_pane_t2_ParamLimits

0xd314,	// (0x00018131) list_double_ai3_gene_pane_t2

0xd32a,	// (0x00018147) list_double_ai3_gene_pane_t3_ParamLimits

0xd32a,	// (0x00018147) list_double_ai3_gene_pane_t3

0x0002,

0xfcde,	// (0x0001aafb) list_double_ai3_gene_pane_t_ParamLimits

0xfcde,	// (0x0001aafb) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xd0f2,	// (0x00017f0f) aid_size_min_col_2

0xd0fc,	// (0x00017f19) aid_size_min_msg_ParamLimits

0xd0fc,	// (0x00017f19) aid_size_min_msg

0xc1c2,	// (0x00016fdf) fep_vkb_top_text_pane_g2_ParamLimits

0xc1c2,	// (0x00016fdf) fep_vkb_top_text_pane_g2

0x0001,

0xfb3e,	// (0x0001a95b) fep_vkb_top_text_pane_g_ParamLimits

0xfb3e,	// (0x0001a95b) fep_vkb_top_text_pane_g

0x4aeb,	// (0x0000f908) main_hc_apps_shell_pane

0xd347,	// (0x00018164) grid_hc_apps_pane_ParamLimits

0xd347,	// (0x00018164) grid_hc_apps_pane

0xd356,	// (0x00018173) list_hc_apps_pane

0xd35e,	// (0x0001817b) scroll_pane_cp37_ParamLimits

0xd35e,	// (0x0001817b) scroll_pane_cp37

0xd36a,	// (0x00018187) cell_hc_apps_pane_ParamLimits

0xd36a,	// (0x00018187) cell_hc_apps_pane

0xd418,	// (0x00018235) cell_hc_apps_pane_g1_ParamLimits

0xd418,	// (0x00018235) cell_hc_apps_pane_g1

0xd449,	// (0x00018266) cell_hc_apps_pane_g2_ParamLimits

0xd449,	// (0x00018266) cell_hc_apps_pane_g2

0xd465,	// (0x00018282) cell_hc_apps_pane_g3_ParamLimits

0xd465,	// (0x00018282) cell_hc_apps_pane_g3

0x0002,

0xfce5,	// (0x0001ab02) cell_hc_apps_pane_g_ParamLimits

0xfce5,	// (0x0001ab02) cell_hc_apps_pane_g

0xd487,	// (0x000182a4) cell_hc_apps_pane_t1_ParamLimits

0xd487,	// (0x000182a4) cell_hc_apps_pane_t1

0x705c,	// (0x00011e79) grid_highlight_pane_cp10_ParamLimits

0x705c,	// (0x00011e79) grid_highlight_pane_cp10

0xd4c7,	// (0x000182e4) list_single_hc_apps_pane_ParamLimits

0xd4c7,	// (0x000182e4) list_single_hc_apps_pane

0xd523,	// (0x00018340) list_single_hc_apps_pane_g1

0xd53c,	// (0x00018359) list_single_hc_apps_pane_g2

0x0001,

0xfcec,	// (0x0001ab09) list_single_hc_apps_pane_g

0xd555,	// (0x00018372) list_single_hc_apps_pane_g2_copy1

0xd571,	// (0x0001838e) list_single_hc_apps_pane_t1

0x6db9,	// (0x00011bd6) bg_set_opt_pane_cp_ParamLimits

0x4d42,	// (0x0000fb5f) setting_slider_pane_t1_ParamLimits

0x4d5b,	// (0x0000fb78) setting_slider_pane_t2_ParamLimits

0x4d75,	// (0x0000fb92) setting_slider_pane_t3_ParamLimits

0xf564,	// (0x0001a381) setting_slider_pane_t_ParamLimits

0x4d8d,	// (0x0000fbaa) slider_set_pane_ParamLimits

0x52b4,	// (0x000100d1) control_pane_g5_ParamLimits

0x52b4,	// (0x000100d1) control_pane_g5

0xa78d,	// (0x000155aa) slider_set_pane_g1_ParamLimits

0x5cf3,	// (0x00010b10) slider_set_pane_g2_ParamLimits

0x5cff,	// (0x00010b1c) slider_set_pane_g3_ParamLimits

0x5d13,	// (0x00010b30) slider_set_pane_g4_ParamLimits

0x5d2b,	// (0x00010b48) slider_set_pane_g5_ParamLimits

0x5cff,	// (0x00010b1c) slider_set_pane_g6_ParamLimits

0x5d41,	// (0x00010b5e) slider_set_pane_g7_ParamLimits

0xf965,	// (0x0001a782) slider_set_pane_g_ParamLimits

0x88d6,	// (0x000136f3) navi_icon_text_pane_ParamLimits

0x8dde,	// (0x00013bfb) aid_fill_nsta_2_ParamLimits

0x8e1d,	// (0x00013c3a) aid_touch_tab_arrow_left_ParamLimits

0x8e29,	// (0x00013c46) aid_touch_tab_arrow_right_ParamLimits

0x8e95,	// (0x00013cb2) clock_nsta_pane_ParamLimits

0xa245,	// (0x00015062) navi_icon_pane_g1_ParamLimits

0xa251,	// (0x0001506e) navi_text_pane_t1_ParamLimits

0xb945,	// (0x00016762) navi_icon_text_pane_g1_ParamLimits

0xb951,	// (0x0001676e) navi_icon_text_pane_t1_ParamLimits

0xd523,	// (0x00018340) list_single_hc_apps_pane_g1_ParamLimits

0xd53c,	// (0x00018359) list_single_hc_apps_pane_g2_ParamLimits

0xfcec,	// (0x0001ab09) list_single_hc_apps_pane_g_ParamLimits

0xd555,	// (0x00018372) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xd571,	// (0x0001838e) list_single_hc_apps_pane_t1_ParamLimits

0x4c56,	// (0x0000fa73) popup_toolbar2_fixed_window_ParamLimits

0x4c56,	// (0x0000fa73) popup_toolbar2_fixed_window

0x58af,	// (0x000106cc) popup_toolbar2_float_window

0x6cc5,	// (0x00011ae2) bg_popup_sub_pane_cp27

0xd59f,	// (0x000183bc) grid_toolbar2_float_pane

0x6cc5,	// (0x00011ae2) bg_popup_sub_pane_cp26

0xd59f,	// (0x000183bc) grid_toolbar2_fixed_pane

0xd5a7,	// (0x000183c4) cell_toolbar2_fixed_pane_ParamLimits

0xd5a7,	// (0x000183c4) cell_toolbar2_fixed_pane

0xd5b7,	// (0x000183d4) cell_toolbar2_fixed_pane_g1

0xd5c0,	// (0x000183dd) toolbar2_fixed_button_pane

0x92cc,	// (0x000140e9) toolbar2_fixed_button_pane_g1

0x92dc,	// (0x000140f9) toolbar2_fixed_button_pane_g2

0x92d4,	// (0x000140f1) toolbar2_fixed_button_pane_g3

0x92ec,	// (0x00014109) toolbar2_fixed_button_pane_g4

0x92e4,	// (0x00014101) toolbar2_fixed_button_pane_g5

0x92f4,	// (0x00014111) toolbar2_fixed_button_pane_g6

0x92fc,	// (0x00014119) toolbar2_fixed_button_pane_g7

0x930c,	// (0x00014129) toolbar2_fixed_button_pane_g8

0x9304,	// (0x00014121) toolbar2_fixed_button_pane_g9

0x0008,

0xf867,	// (0x0001a684) toolbar2_fixed_button_pane_g

0xd5c8,	// (0x000183e5) cell_toolbar2_float_pane_ParamLimits

0xd5c8,	// (0x000183e5) cell_toolbar2_float_pane

0xd5d9,	// (0x000183f6) cell_toolbar2_float_pane_g1

0xd5c0,	// (0x000183dd) toolbar2_fixed_button_pane_cp

0xbf1e,	// (0x00016d3b) fep_vkb_accented_list_pane_ParamLimits

0xbf1e,	// (0x00016d3b) fep_vkb_accented_list_pane

0x60b6,	// (0x00010ed3) bg_popup_fep_shadow_pane_g9

0x8a56,	// (0x00013873) bg_popup_fep_shadow_pane_cp3

0x7e95,	// (0x00012cb2) list_accented_list_pane

0xd5e2,	// (0x000183ff) list_single_accented_list_pane_ParamLimits

0xd5e2,	// (0x000183ff) list_single_accented_list_pane

0x8a56,	// (0x00013873) list_highlight_pane_cp10

0xd5f3,	// (0x00018410) list_single_accented_list_pane_t1

0x57ff,	// (0x0001061c) popup_slider_window_ParamLimits

0x57ff,	// (0x0001061c) popup_slider_window

0xd0e9,	// (0x00017f06) aid_indentation_list_msg

0xd6ad,	// (0x000184ca) bg_popup_window_pane_cp19

0xd717,	// (0x00018534) popup_slider_window_g1

0xd733,	// (0x00018550) popup_slider_window_g2

0xd74f,	// (0x0001856c) popup_slider_window_g3

0x0005,

0xfcf1,	// (0x0001ab0e) popup_slider_window_g

0xd7ab,	// (0x000185c8) popup_slider_window_t1

0xd81f,	// (0x0001863c) small_volume_slider_vertical_pane

0xbdf0,	// (0x00016c0d) small_volume_slider_vertical_pane_g1

0xbdf0,	// (0x00016c0d) small_volume_slider_vertical_pane_g2

0xd83b,	// (0x00018658) small_volume_slider_vertical_pane_g3

0x0002,

0xfd03,	// (0x0001ab20) small_volume_slider_vertical_pane_g

0x4a0e,	// (0x0000f82b) area_side_right_pane_ParamLimits

0x4a0e,	// (0x0000f82b) area_side_right_pane

0x62a0,	// (0x000110bd) aid_size_side_button_ParamLimits

0x62a0,	// (0x000110bd) aid_size_side_button

0x62b4,	// (0x000110d1) grid_sctrl_middle_pane_ParamLimits

0x62b4,	// (0x000110d1) grid_sctrl_middle_pane

0x62d3,	// (0x000110f0) sctrl_sk_bottom_pane

0x62e4,	// (0x00011101) sctrl_sk_top_pane

0x62f6,	// (0x00011113) aid_touch_sctrl_top

0x6303,	// (0x00011120) bg_sctrl_sk_pane_ParamLimits

0x6303,	// (0x00011120) bg_sctrl_sk_pane

0x6311,	// (0x0001112e) sctrl_sk_top_pane_g1

0x631e,	// (0x0001113b) sctrl_sk_top_pane_t1

0x62f6,	// (0x00011113) aid_touch_sctrl_bottom

0x6303,	// (0x00011120) bg_sctrl_sk_pane_cp_ParamLimits

0x6303,	// (0x00011120) bg_sctrl_sk_pane_cp

0x6339,	// (0x00011156) sctrl_sk_bottom_pane_g1

0x631e,	// (0x0001113b) sctrl_sk_bottom_pane_t1

0x6342,	// (0x0001115f) cell_sctrl_middle_pane_ParamLimits

0x6342,	// (0x0001115f) cell_sctrl_middle_pane

0x635d,	// (0x0001117a) aid_touch_sctrl_middle_ParamLimits

0x635d,	// (0x0001117a) aid_touch_sctrl_middle

0x636f,	// (0x0001118c) bg_sctrl_middle_pane_ParamLimits

0x636f,	// (0x0001118c) bg_sctrl_middle_pane

0x60d6,	// (0x00010ef3) cell_sctrl_middle_pane_g1_ParamLimits

0x60d6,	// (0x00010ef3) cell_sctrl_middle_pane_g1

0x637d,	// (0x0001119a) cell_sctrl_middle_pane_g2_ParamLimits

0x637d,	// (0x0001119a) cell_sctrl_middle_pane_g2

0x0001,

0xfd0f,	// (0x0001ab2c) cell_sctrl_middle_pane_g_ParamLimits

0xfd0f,	// (0x0001ab2c) cell_sctrl_middle_pane_g

0x92cc,	// (0x000140e9) bg_sctrl_middle_pane_g1

0x92d4,	// (0x000140f1) bg_sctrl_middle_pane_g2

0x92dc,	// (0x000140f9) bg_sctrl_middle_pane_g3

0x92e4,	// (0x00014101) bg_sctrl_middle_pane_g4

0x92ec,	// (0x00014109) bg_sctrl_middle_pane_g5

0x92f4,	// (0x00014111) bg_sctrl_middle_pane_g6

0x92fc,	// (0x00014119) bg_sctrl_middle_pane_g7

0x9304,	// (0x00014121) bg_sctrl_middle_pane_g8

0x0007,

0xfd14,	// (0x0001ab31) bg_sctrl_middle_pane_g

0x930c,	// (0x00014129) bg_sctrl_middle_pane_g8_copy1

0x92cc,	// (0x000140e9) bg_sctrl_sk_pane_g1

0x92dc,	// (0x000140f9) bg_sctrl_sk_pane_g2

0x92d4,	// (0x000140f1) bg_sctrl_sk_pane_g3

0x0008,

0xf867,	// (0x0001a684) bg_sctrl_sk_pane_g

0x756e,	// (0x0001238b) aid_size_touch_scroll_bar

0x92ec,	// (0x00014109) bg_sctrl_sk_pane_g4

0x92e4,	// (0x00014101) bg_sctrl_sk_pane_g5

0x92f4,	// (0x00014111) bg_sctrl_sk_pane_g6

0x92fc,	// (0x00014119) bg_sctrl_sk_pane_g7

0x930c,	// (0x00014129) bg_sctrl_sk_pane_g8

0x9304,	// (0x00014121) bg_sctrl_sk_pane_g9

0x546a,	// (0x00010287) popup_fep_china_hwr2_fs_candidate_window

0x5474,	// (0x00010291) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x5474,	// (0x00010291) popup_fep_china_hwr2_fs_control_window

0x60d6,	// (0x00010ef3) sctrl_sk_top_pane_g2

0x0001,

0xfd0a,	// (0x0001ab27) sctrl_sk_top_pane_g

0xd844,	// (0x00018661) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd844,	// (0x00018661) aid_fep_china_hwr2_fs_cell

0xd856,	// (0x00018673) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd856,	// (0x00018673) bg_popup_fep_shadow_pane_cp4

0xd86d,	// (0x0001868a) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd86d,	// (0x0001868a) bg_popup_fep_shadow_pane_cp5

0xd87f,	// (0x0001869c) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd87f,	// (0x0001869c) popup_fep_china_hwr2_fs_control_bar_grid

0xd88f,	// (0x000186ac) popup_fep_china_hwr2_fs_control_funtion_grid

0xd897,	// (0x000186b4) aid_fep_china_hwr2_fs_candi_cell

0x6cc5,	// (0x00011ae2) bg_popup_fep_shadow_pane_cp6

0xd8a1,	// (0x000186be) popup_fep_china_hwr2_fs_candidate_grid

0xd8ab,	// (0x000186c8) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd8ab,	// (0x000186c8) cell_fep_china_hwr2_fs_funtion_grid

0xbdf0,	// (0x00016c0d) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd8c3,	// (0x000186e0) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd8c3,	// (0x000186e0) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd8d1,	// (0x000186ee) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd8d1,	// (0x000186ee) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd25,	// (0x0001ab42) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd25,	// (0x0001ab42) cell_fep_china_hwr2_fs_funtion_grid_g

0xd8e7,	// (0x00018704) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd8e7,	// (0x00018704) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd8fc,	// (0x00018719) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd8fc,	// (0x00018719) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd2a,	// (0x0001ab47) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd2a,	// (0x0001ab47) cell_fep_china_hwr2_fs_funtion_grid_t

0xd918,	// (0x00018735) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd920,	// (0x0001873d) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd928,	// (0x00018745) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd2f,	// (0x0001ab4c) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd930,	// (0x0001874d) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd930,	// (0x0001874d) cell_fep_china_hwr2_fs_candidate_grid

0xd949,	// (0x00018766) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd951,	// (0x0001876e) popup_fep_china_hwr2_fs_candidate_grid_g21

0xbdf0,	// (0x00016c0d) cell_fep_china_hwr2_fs_candidate_grid_g1

0xbdf0,	// (0x00016c0d) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb43,	// (0x0001a960) cell_fep_china_hwr2_fs_candidate_grid_g

0xd959,	// (0x00018776) cell_fep_china_hwr2_fs_candidate_grid_t1

0x8ea2,	// (0x00013cbf) clock_nsta_pane_cp_24_ParamLimits

0x8ea2,	// (0x00013cbf) clock_nsta_pane_cp_24

0x8f20,	// (0x00013d3d) indicator_nsta_pane_cp_24_ParamLimits

0x8f20,	// (0x00013d3d) indicator_nsta_pane_cp_24

0xa0c1,	// (0x00014ede) heading_pane_g1

0x0001,

0xf8cc,	// (0x0001a6e9) heading_pane_g

0xabe1,	// (0x000159fe) grid_sct_catagory_button_pane

0xac11,	// (0x00015a2e) scroll_pane_cp5_ParamLimits

0xb993,	// (0x000167b0) button_value_adjust_pane_cp5_ParamLimits

0xb993,	// (0x000167b0) button_value_adjust_pane_cp5

0xba8f,	// (0x000168ac) form2_midp_time_pane_ParamLimits

0xd967,	// (0x00018784) cell_sct_catagory_button_pane_ParamLimits

0xd967,	// (0x00018784) cell_sct_catagory_button_pane

0xbdb5,	// (0x00016bd2) bg_button_pane_cp01_ParamLimits

0xbdb5,	// (0x00016bd2) bg_button_pane_cp01

0xbdf0,	// (0x00016c0d) cell_sct_catagory_button_pane_g1

0x583e,	// (0x0001065b) popup_tb_extension_window

0xd979,	// (0x00018796) aid_size_cell_ext_ParamLimits

0xd979,	// (0x00018796) aid_size_cell_ext

0x705c,	// (0x00011e79) bg_tb_trans_pane_cp1_ParamLimits

0x705c,	// (0x00011e79) bg_tb_trans_pane_cp1

0xd999,	// (0x000187b6) grid_tb_ext_pane_ParamLimits

0xd999,	// (0x000187b6) grid_tb_ext_pane

0xd9c7,	// (0x000187e4) cell_tb_ext_pane_ParamLimits

0xd9c7,	// (0x000187e4) cell_tb_ext_pane

0xd9de,	// (0x000187fb) cell_tb_ext_pane_g1_ParamLimits

0xd9de,	// (0x000187fb) cell_tb_ext_pane_g1

0xd9fb,	// (0x00018818) cell_tb_ext_pane_t1

0x705c,	// (0x00011e79) list_highlight_pane_cp11_ParamLimits

0x705c,	// (0x00011e79) list_highlight_pane_cp11

0x4c75,	// (0x0000fa92) popup_uni_indicator_window_ParamLimits

0x4c75,	// (0x0000fa92) popup_uni_indicator_window

0x7bc4,	// (0x000129e1) bg_popup_sub_pane_cp14

0xda16,	// (0x00018833) list_uniindi_pane

0xda22,	// (0x0001883f) uniindi_top_pane

0x705c,	// (0x00011e79) bg_uniindi_top_pane

0xda41,	// (0x0001885e) uniindi_top_pane_g1

0xda57,	// (0x00018874) uniindi_top_pane_g2

0x0003,

0xfd36,	// (0x0001ab53) uniindi_top_pane_g

0xda81,	// (0x0001889e) uniindi_top_pane_t1

0xdaab,	// (0x000188c8) list_single_uniindi_pane_ParamLimits

0xdaab,	// (0x000188c8) list_single_uniindi_pane

0xbdf0,	// (0x00016c0d) bg_uniindi_top_pane_g1

0xdabe,	// (0x000188db) list_single_uniindi_pane_g1

0xdad1,	// (0x000188ee) list_single_uniindi_pane_t1

0x4aeb,	// (0x0000f908) control_bg_pane

0xdaf6,	// (0x00018913) bg_sctrl_sk_pane_cp1

0xdaff,	// (0x0001891c) bg_sctrl_sk_pane_cp2

0xdb08,	// (0x00018925) control_bg_pane_g1

0xdb11,	// (0x0001892e) control_bg_pane_g2

0x0001,

0xfd3f,	// (0x0001ab5c) control_bg_pane_g

0xb7dc,	// (0x000165f9) cell_indicator_nsta_pane_g1_ParamLimits

0xb7ea,	// (0x00016607) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa7,	// (0x0001a8c4) cell_indicator_nsta_pane_g_ParamLimits

0xbb17,	// (0x00016934) form2_midp_time_pane_t1_ParamLimits

0x53d2,	// (0x000101ef) main_idle_act4_pane_ParamLimits

0x53d2,	// (0x000101ef) main_idle_act4_pane

0x583e,	// (0x0001065b) popup_tb_extension_window_ParamLimits

0xd9b7,	// (0x000187d4) tb_ext_find_pane_ParamLimits

0xd9b7,	// (0x000187d4) tb_ext_find_pane

0xdb1a,	// (0x00018937) ai_gene_pane_1_cp1

0x8b8f,	// (0x000139ac) ai_gene_pane_2_cp1

0xdb22,	// (0x0001893f) list_single_idle_plugin_calendar_pane

0xdb2b,	// (0x00018948) list_single_idle_plugin_notification_pane

0xdb34,	// (0x00018951) list_single_idle_plugin_player_pane

0xdb3d,	// (0x0001895a) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdb3d,	// (0x0001895a) list_single_idle_plugin_shortcut_pane

0xdb5f,	// (0x0001897c) main_idle_act4_pane_t1

0xdb71,	// (0x0001898e) main_idle_act4_pane_t2

0x0001,

0xfd44,	// (0x0001ab61) main_idle_act4_pane_t

0xdb83,	// (0x000189a0) middle_sk_idle_act4_pane_ParamLimits

0xdb83,	// (0x000189a0) middle_sk_idle_act4_pane

0xdb99,	// (0x000189b6) popup_clock_digital_analogue_window_cp2

0xdbb3,	// (0x000189d0) shortcut_wheel_idle_act4_pane_ParamLimits

0xdbb3,	// (0x000189d0) shortcut_wheel_idle_act4_pane

0xbdf0,	// (0x00016c0d) shortcut_wheel_idle_act4_pane_g1

0xbdf0,	// (0x00016c0d) shortcut_wheel_idle_act4_pane_g2

0xbdf0,	// (0x00016c0d) shortcut_wheel_idle_act4_pane_g3

0xbdf0,	// (0x00016c0d) shortcut_wheel_idle_act4_pane_g4

0xbdf0,	// (0x00016c0d) shortcut_wheel_idle_act4_pane_g5

0xdbc7,	// (0x000189e4) shortcut_wheel_idle_act4_pane_g6

0xdbcf,	// (0x000189ec) shortcut_wheel_idle_act4_pane_g7

0xdbd7,	// (0x000189f4) shortcut_wheel_idle_act4_pane_g8

0xdbdf,	// (0x000189fc) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd49,	// (0x0001ab66) shortcut_wheel_idle_act4_pane_g

0xc06e,	// (0x00016e8b) middle_sk_idle_act4_pane_g1_ParamLimits

0xc06e,	// (0x00016e8b) middle_sk_idle_act4_pane_g1

0xdc43,	// (0x00018a60) middle_sk_idle_act4_pane_g2_ParamLimits

0xdc43,	// (0x00018a60) middle_sk_idle_act4_pane_g2

0x0001,

0xfd6c,	// (0x0001ab89) middle_sk_idle_act4_pane_g_ParamLimits

0xfd6c,	// (0x0001ab89) middle_sk_idle_act4_pane_g

0xdc4f,	// (0x00018a6c) middle_sk_idle_act4_pane_t1_ParamLimits

0xdc4f,	// (0x00018a6c) middle_sk_idle_act4_pane_t1

0xdc6c,	// (0x00018a89) grid_ai_shortcut_pane_ParamLimits

0xdc6c,	// (0x00018a89) grid_ai_shortcut_pane

0xdc85,	// (0x00018aa2) list_highlight_pane_cp16_ParamLimits

0xdc85,	// (0x00018aa2) list_highlight_pane_cp16

0xdc92,	// (0x00018aaf) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdc92,	// (0x00018aaf) list_single_idle_plugin_shortcut_pane_g1

0xdc9e,	// (0x00018abb) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdc9e,	// (0x00018abb) list_single_idle_plugin_shortcut_pane_g2

0xdcb6,	// (0x00018ad3) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdcb6,	// (0x00018ad3) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd71,	// (0x0001ab8e) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd71,	// (0x0001ab8e) list_single_idle_plugin_shortcut_pane_g

0xdcc9,	// (0x00018ae6) cell_ai_shortcut_pane_ParamLimits

0xdcc9,	// (0x00018ae6) cell_ai_shortcut_pane

0xdced,	// (0x00018b0a) cell_ai_shortcut_pane_g1_ParamLimits

0xdced,	// (0x00018b0a) cell_ai_shortcut_pane_g1

0xdb1a,	// (0x00018937) ai_gene_pane_1_cp2

0xdd0f,	// (0x00018b2c) ai_gene_pane_2_cp2

0xdd17,	// (0x00018b34) list_highlight_pane_cp15

0xdd20,	// (0x00018b3d) list_single_idle_plugin_calendar_pane_g1

0xdd17,	// (0x00018b34) list_highlight_pane_cp17

0xdd28,	// (0x00018b45) list_single_idle_plugin_calendar_pane_g1_copy1

0xdd30,	// (0x00018b4d) list_single_idle_plugin_player_pane_g1

0xae3a,	// (0x00015c57) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd78,	// (0x0001ab95) list_single_idle_plugin_player_pane_g

0xdd38,	// (0x00018b55) list_single_idle_plugin_player_pane_t1

0xdd46,	// (0x00018b63) list_single_idle_plugin_player_pane_t2

0xdd54,	// (0x00018b71) list_single_idle_plugin_player_pane_t3

0xdd62,	// (0x00018b7f) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd7d,	// (0x0001ab9a) list_single_idle_plugin_player_pane_t

0xdd70,	// (0x00018b8d) wait_bar_pane_cp15

0xdd78,	// (0x00018b95) grid_ai_notification_pane

0xae3a,	// (0x00015c57) list_single_idle_plugin_notification_pane_g1

0xdd81,	// (0x00018b9e) cell_ai_notification_pane_ParamLimits

0xdd81,	// (0x00018b9e) cell_ai_notification_pane

0xdd8e,	// (0x00018bab) cell_ai_notification_pane_g1

0xdd96,	// (0x00018bb3) cell_ai_notification_pane_t1

0xdda4,	// (0x00018bc1) tb_ext_find_button_pane

0xddac,	// (0x00018bc9) tb_ext_find_pane_g1

0xddb4,	// (0x00018bd1) tb_ext_find_pane_t1

0x83bf,	// (0x000131dc) tb_ext_find_button_pane_g1

0xddc2,	// (0x00018bdf) tb_ext_find_button_pane_g2

0x0001,

0xfd86,	// (0x0001aba3) tb_ext_find_button_pane_g

0xdb5f,	// (0x0001897c) main_idle_act4_pane_t1_ParamLimits

0xdb71,	// (0x0001898e) main_idle_act4_pane_t2_ParamLimits

0xfd44,	// (0x0001ab61) main_idle_act4_pane_t_ParamLimits

0xdb99,	// (0x000189b6) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdba7,	// (0x000189c4) sat_plugin_idle_act4_pane_ParamLimits

0xdba7,	// (0x000189c4) sat_plugin_idle_act4_pane

0xddcb,	// (0x00018be8) sat_plugin_idle_act4_pane_t1_ParamLimits

0xddcb,	// (0x00018be8) sat_plugin_idle_act4_pane_t1

0xddde,	// (0x00018bfb) sat_plugin_idle_act4_pane_t2_ParamLimits

0xddde,	// (0x00018bfb) sat_plugin_idle_act4_pane_t2

0xddf1,	// (0x00018c0e) sat_plugin_idle_act4_pane_t3_ParamLimits

0xddf1,	// (0x00018c0e) sat_plugin_idle_act4_pane_t3

0xde04,	// (0x00018c21) sat_plugin_idle_act4_pane_t4_ParamLimits

0xde04,	// (0x00018c21) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd8b,	// (0x0001aba8) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd8b,	// (0x0001aba8) sat_plugin_idle_act4_pane_t

0x4bb0,	// (0x0000f9cd) popup_battery_window_ParamLimits

0x4bb0,	// (0x0000f9cd) popup_battery_window

0x705c,	// (0x00011e79) bg_popup_sub_pane_cp25_ParamLimits

0x705c,	// (0x00011e79) bg_popup_sub_pane_cp25

0xde17,	// (0x00018c34) popup_battery_window_g1_ParamLimits

0xde17,	// (0x00018c34) popup_battery_window_g1

0xde23,	// (0x00018c40) popup_battery_window_t1_ParamLimits

0xde23,	// (0x00018c40) popup_battery_window_t1

0xde35,	// (0x00018c52) popup_battery_window_t2_ParamLimits

0xde35,	// (0x00018c52) popup_battery_window_t2

0x0001,

0xfd94,	// (0x0001abb1) popup_battery_window_t_ParamLimits

0xfd94,	// (0x0001abb1) popup_battery_window_t

0x8a5e,	// (0x0001387b) midp_canvas_pane_ParamLimits

0x8ad3,	// (0x000138f0) midp_keypad_pane_ParamLimits

0x8ad3,	// (0x000138f0) midp_keypad_pane

0x8d9e,	// (0x00013bbb) main_midp_pane_ParamLimits

0xb857,	// (0x00016674) signal_pane_g2_cp_ParamLimits

0xde52,	// (0x00018c6f) aid_size_cell_midp_keypad_ParamLimits

0xde52,	// (0x00018c6f) aid_size_cell_midp_keypad

0xde6c,	// (0x00018c89) midp_keyp_game_grid_pane_ParamLimits

0xde6c,	// (0x00018c89) midp_keyp_game_grid_pane

0xde8c,	// (0x00018ca9) midp_keyp_rocker_pane_ParamLimits

0xde8c,	// (0x00018ca9) midp_keyp_rocker_pane

0xdec1,	// (0x00018cde) midp_keyp_sk_left_pane_ParamLimits

0xdec1,	// (0x00018cde) midp_keyp_sk_left_pane

0xdf19,	// (0x00018d36) midp_keyp_sk_right_pane_ParamLimits

0xdf19,	// (0x00018d36) midp_keyp_sk_right_pane

0x6cc5,	// (0x00011ae2) bg_button_pane_cp03

0xdf71,	// (0x00018d8e) midp_keyp_sk_left_pane_g1

0x6cc5,	// (0x00011ae2) bg_button_pane_cp04

0xdf71,	// (0x00018d8e) midp_keyp_sk_right_pane_g1

0xbdf0,	// (0x00016c0d) midp_keyp_rocker_pane_g1

0xdf7a,	// (0x00018d97) keyp_game_cell_pane_ParamLimits

0xdf7a,	// (0x00018d97) keyp_game_cell_pane

0x6cc5,	// (0x00011ae2) bg_button_pane_cp02

0xdf8d,	// (0x00018daa) keyp_game_cell_pane_g1

0x4bf4,	// (0x0000fa11) popup_fep_vkb2_window_ParamLimits

0x4bf4,	// (0x0000fa11) popup_fep_vkb2_window

0x639b,	// (0x000111b8) aid_size_cell_vkb2_ParamLimits

0x639b,	// (0x000111b8) aid_size_cell_vkb2

0x63ef,	// (0x0001120c) popup_fep_vkb2_window_g1_ParamLimits

0x63ef,	// (0x0001120c) popup_fep_vkb2_window_g1

0x6437,	// (0x00011254) vkb2_area_bottom_pane_ParamLimits

0x6437,	// (0x00011254) vkb2_area_bottom_pane

0x6483,	// (0x000112a0) vkb2_area_keypad_pane_ParamLimits

0x6483,	// (0x000112a0) vkb2_area_keypad_pane

0x64c5,	// (0x000112e2) vkb2_area_top_pane_ParamLimits

0x64c5,	// (0x000112e2) vkb2_area_top_pane

0x653f,	// (0x0001135c) vkb2_top_entry_pane_ParamLimits

0x653f,	// (0x0001135c) vkb2_top_entry_pane

0x6569,	// (0x00011386) vkb2_top_grid_left_pane_ParamLimits

0x6569,	// (0x00011386) vkb2_top_grid_left_pane

0x6587,	// (0x000113a4) vkb2_top_grid_right_pane_ParamLimits

0x6587,	// (0x000113a4) vkb2_top_grid_right_pane

0x65a5,	// (0x000113c2) vkb2_cell_keypad_pane_ParamLimits

0x65a5,	// (0x000113c2) vkb2_cell_keypad_pane

0x6676,	// (0x00011493) vkb2_area_bottom_grid_pane_ParamLimits

0x6676,	// (0x00011493) vkb2_area_bottom_grid_pane

0x669c,	// (0x000114b9) vkb2_area_bottom_pane_g1_ParamLimits

0x669c,	// (0x000114b9) vkb2_area_bottom_pane_g1

0x66c0,	// (0x000114dd) vkb2_area_bottom_pane_g2_ParamLimits

0x66c0,	// (0x000114dd) vkb2_area_bottom_pane_g2

0x66ee,	// (0x0001150b) vkb2_area_bottom_pane_g3_ParamLimits

0x66ee,	// (0x0001150b) vkb2_area_bottom_pane_g3

0x0002,

0xfd99,	// (0x0001abb6) vkb2_area_bottom_pane_g_ParamLimits

0xfd99,	// (0x0001abb6) vkb2_area_bottom_pane_g

0x674f,	// (0x0001156c) vkb2_top_cell_left_pane_ParamLimits

0x674f,	// (0x0001156c) vkb2_top_cell_left_pane

0xdf9e,	// (0x00018dbb) vkb2_top_entry_pane_g1_ParamLimits

0xdf9e,	// (0x00018dbb) vkb2_top_entry_pane_g1

0xdfac,	// (0x00018dc9) vkb2_top_entry_pane_t1_ParamLimits

0xdfac,	// (0x00018dc9) vkb2_top_entry_pane_t1

0xdfde,	// (0x00018dfb) vkb2_top_entry_pane_t2_ParamLimits

0xdfde,	// (0x00018dfb) vkb2_top_entry_pane_t2

0xe010,	// (0x00018e2d) vkb2_top_entry_pane_t3_ParamLimits

0xe010,	// (0x00018e2d) vkb2_top_entry_pane_t3

0x0002,

0xfda0,	// (0x0001abbd) vkb2_top_entry_pane_t_ParamLimits

0xfda0,	// (0x0001abbd) vkb2_top_entry_pane_t

0x679c,	// (0x000115b9) vkb2_top_grid_right_pane_g1_ParamLimits

0x679c,	// (0x000115b9) vkb2_top_grid_right_pane_g1

0x67b2,	// (0x000115cf) vkb2_top_grid_right_pane_g2_ParamLimits

0x67b2,	// (0x000115cf) vkb2_top_grid_right_pane_g2

0x67ca,	// (0x000115e7) vkb2_top_grid_right_pane_g3_ParamLimits

0x67ca,	// (0x000115e7) vkb2_top_grid_right_pane_g3

0x67e2,	// (0x000115ff) vkb2_top_grid_right_pane_g4_ParamLimits

0x67e2,	// (0x000115ff) vkb2_top_grid_right_pane_g4

0x0003,

0xfda7,	// (0x0001abc4) vkb2_top_grid_right_pane_g_ParamLimits

0xfda7,	// (0x0001abc4) vkb2_top_grid_right_pane_g

0x67f8,	// (0x00011615) vkb2_top_cell_left_pane_g1

0x680f,	// (0x0001162c) vkb2_cell_keypad_pane_g1_ParamLimits

0x680f,	// (0x0001162c) vkb2_cell_keypad_pane_g1

0xe055,	// (0x00018e72) vkb2_cell_keypad_pane_t1_ParamLimits

0xe055,	// (0x00018e72) vkb2_cell_keypad_pane_t1

0x681d,	// (0x0001163a) vkb2_cell_bottom_grid_pane_ParamLimits

0x681d,	// (0x0001163a) vkb2_cell_bottom_grid_pane

0x6856,	// (0x00011673) vkb2_cell_bottom_grid_pane_g1

0xdbe7,	// (0x00018a04) aid_call2_pane_cp02

0xdbef,	// (0x00018a0c) aid_call_pane_cp02

0xdbf7,	// (0x00018a14) clock_digital_number_pane_cp10

0xdbff,	// (0x00018a1c) clock_digital_number_pane_cp11

0xdc07,	// (0x00018a24) clock_digital_number_pane_cp12

0xdc0f,	// (0x00018a2c) clock_digital_number_pane_cp13

0xdc17,	// (0x00018a34) clock_digital_separator_pane_cp10

0x83bf,	// (0x000131dc) popup_clock_digital_analogue_window_cp2_g1

0x83bf,	// (0x000131dc) popup_clock_digital_analogue_window_cp2_g2

0xdc1f,	// (0x00018a3c) popup_clock_digital_analogue_window_cp2_g3

0x83bf,	// (0x000131dc) popup_clock_digital_analogue_window_cp2_g4

0xdc1f,	// (0x00018a3c) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd5c,	// (0x0001ab79) popup_clock_digital_analogue_window_cp2_g

0xdc27,	// (0x00018a44) popup_clock_digital_analogue_window_cp2_t1

0xdc35,	// (0x00018a52) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd67,	// (0x0001ab84) popup_clock_digital_analogue_window_cp2_t

0xbdf0,	// (0x00016c0d) clock_digital_number_pane_cp10_g1

0xbdf0,	// (0x00016c0d) clock_digital_number_pane_cp10_g2

0x0001,

0xfb43,	// (0x0001a960) clock_digital_number_pane_cp10_g

0xbdf0,	// (0x00016c0d) clock_digital_separator_pane_cp10_g1

0xbdf0,	// (0x00016c0d) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb43,	// (0x0001a960) clock_digital_separator_pane_cp10_g

0xda63,	// (0x00018880) uniindi_top_pane_g3

0xda74,	// (0x00018891) uniindi_top_pane_g4

0x6630,	// (0x0001144d) vkb2_row_keypad_pane_ParamLimits

0x6630,	// (0x0001144d) vkb2_row_keypad_pane

0x6872,	// (0x0001168f) vkb2_cell_t_keypad_pane_ParamLimits

0x6872,	// (0x0001168f) vkb2_cell_t_keypad_pane

0x6882,	// (0x0001169f) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x6882,	// (0x0001169f) vkb2_cell_t_keypad_pane_cp08

0x6895,	// (0x000116b2) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x6895,	// (0x000116b2) vkb2_cell_t_keypad_pane_cp09

0x68a9,	// (0x000116c6) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x68a9,	// (0x000116c6) vkb2_cell_t_keypad_pane_cp01

0x68ba,	// (0x000116d7) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x68ba,	// (0x000116d7) vkb2_cell_t_keypad_pane_cp02

0x68cb,	// (0x000116e8) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x68cb,	// (0x000116e8) vkb2_cell_t_keypad_pane_cp03

0x68dc,	// (0x000116f9) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x68dc,	// (0x000116f9) vkb2_cell_t_keypad_pane_cp04

0x68ed,	// (0x0001170a) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x68ed,	// (0x0001170a) vkb2_cell_t_keypad_pane_cp05

0x68fe,	// (0x0001171b) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x68fe,	// (0x0001171b) vkb2_cell_t_keypad_pane_cp06

0x690f,	// (0x0001172c) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x690f,	// (0x0001172c) vkb2_cell_t_keypad_pane_cp07

0x6920,	// (0x0001173d) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x6920,	// (0x0001173d) vkb2_cell_t_keypad_pane_cp10

0x60d6,	// (0x00010ef3) vkb2_cell_t_keypad_pane_g1

0xe06c,	// (0x00018e89) vkb2_cell_t_keypad_pane_t1

0x4aeb,	// (0x0000f908) popup_grid_graphic2_window

0xe07e,	// (0x00018e9b) aid_size_cell_graphic2_ParamLimits

0xe07e,	// (0x00018e9b) aid_size_cell_graphic2

0xe0b6,	// (0x00018ed3) bg_popup_window_pane_cp21_ParamLimits

0xe0b6,	// (0x00018ed3) bg_popup_window_pane_cp21

0xe0c4,	// (0x00018ee1) graphic2_pages_pane_ParamLimits

0xe0c4,	// (0x00018ee1) graphic2_pages_pane

0xe10a,	// (0x00018f27) grid_graphic2_control_pane_ParamLimits

0xe10a,	// (0x00018f27) grid_graphic2_control_pane

0xe148,	// (0x00018f65) grid_graphic2_pane_ParamLimits

0xe148,	// (0x00018f65) grid_graphic2_pane

0xe1bc,	// (0x00018fd9) cell_graphic2_pane

0x4aeb,	// (0x0000f908) main_comp_mode_pane

0xd280,	// (0x0001809d) list_ai3_gene_pane_ParamLimits

0xd6ad,	// (0x000184ca) bg_popup_window_pane_cp19_ParamLimits

0xd6b9,	// (0x000184d6) bg_touch_area_indi_pane_ParamLimits

0xd6b9,	// (0x000184d6) bg_touch_area_indi_pane

0xd6cf,	// (0x000184ec) bg_touch_area_indi_pane_cp01_ParamLimits

0xd6cf,	// (0x000184ec) bg_touch_area_indi_pane_cp01

0xd6e5,	// (0x00018502) bg_touch_area_indi_pane_cp02_ParamLimits

0xd6e5,	// (0x00018502) bg_touch_area_indi_pane_cp02

0xd6fd,	// (0x0001851a) bg_touch_area_indi_pane_cp03_ParamLimits

0xd6fd,	// (0x0001851a) bg_touch_area_indi_pane_cp03

0xd717,	// (0x00018534) popup_slider_window_g1_ParamLimits

0xd733,	// (0x00018550) popup_slider_window_g2_ParamLimits

0xd74f,	// (0x0001856c) popup_slider_window_g3_ParamLimits

0xfcf1,	// (0x0001ab0e) popup_slider_window_g_ParamLimits

0xd7ab,	// (0x000185c8) popup_slider_window_t1_ParamLimits

0xd81f,	// (0x0001863c) small_volume_slider_vertical_pane_ParamLimits

0xe1bc,	// (0x00018fd9) cell_graphic2_pane_ParamLimits

0xe20a,	// (0x00019027) bg_button_pane_cp10_ParamLimits

0xe20a,	// (0x00019027) bg_button_pane_cp10

0xe21d,	// (0x0001903a) bg_button_pane_cp11_ParamLimits

0xe21d,	// (0x0001903a) bg_button_pane_cp11

0xe230,	// (0x0001904d) graphic2_pages_pane_g1_ParamLimits

0xe230,	// (0x0001904d) graphic2_pages_pane_g1

0xe24b,	// (0x00019068) graphic2_pages_pane_g2_ParamLimits

0xe24b,	// (0x00019068) graphic2_pages_pane_g2

0x0001,

0xfdb5,	// (0x0001abd2) graphic2_pages_pane_g_ParamLimits

0xfdb5,	// (0x0001abd2) graphic2_pages_pane_g

0xe263,	// (0x00019080) graphic2_pages_pane_t1_ParamLimits

0xe263,	// (0x00019080) graphic2_pages_pane_t1

0xe27b,	// (0x00019098) cell_graphic2_control_pane_ParamLimits

0xe27b,	// (0x00019098) cell_graphic2_control_pane

0xe29c,	// (0x000190b9) cell_graphic2_pane_g1_ParamLimits

0xe29c,	// (0x000190b9) cell_graphic2_pane_g1

0xe2a9,	// (0x000190c6) cell_graphic2_pane_g2_ParamLimits

0xe2a9,	// (0x000190c6) cell_graphic2_pane_g2

0xe2b6,	// (0x000190d3) cell_graphic2_pane_g3_ParamLimits

0xe2b6,	// (0x000190d3) cell_graphic2_pane_g3

0xe2c3,	// (0x000190e0) cell_graphic2_pane_g4_ParamLimits

0xe2c3,	// (0x000190e0) cell_graphic2_pane_g4

0xe2d0,	// (0x000190ed) cell_graphic2_pane_g5_ParamLimits

0xe2d0,	// (0x000190ed) cell_graphic2_pane_g5

0x0004,

0xfdba,	// (0x0001abd7) cell_graphic2_pane_g_ParamLimits

0xfdba,	// (0x0001abd7) cell_graphic2_pane_g

0xe2eb,	// (0x00019108) cell_graphic2_pane_t1_ParamLimits

0xe2eb,	// (0x00019108) cell_graphic2_pane_t1

0x93f2,	// (0x0001420f) grid_highlight_pane_cp11_ParamLimits

0x93f2,	// (0x0001420f) grid_highlight_pane_cp11

0x705c,	// (0x00011e79) bg_button_pane_cp05

0xe314,	// (0x00019131) cell_graphic2_control_pane_g1

0xbdf0,	// (0x00016c0d) bg_touch_area_indi_pane_g1

0xe33c,	// (0x00019159) aid_cmod_rocker_key_size

0xe346,	// (0x00019163) aid_cmode_itu_key_size

0xe350,	// (0x0001916d) main_cmode_video_pane

0xe35a,	// (0x00019177) main_comp_mode_itu_pane

0xe366,	// (0x00019183) main_comp_mode_rocker_pane

0xe372,	// (0x0001918f) cell_cmode_rocker_pane_ParamLimits

0xe372,	// (0x0001918f) cell_cmode_rocker_pane

0xe384,	// (0x000191a1) cell_cmode_itu_pane_ParamLimits

0xe384,	// (0x000191a1) cell_cmode_itu_pane

0x7bc4,	// (0x000129e1) bg_button_pane_cp06_ParamLimits

0x7bc4,	// (0x000129e1) bg_button_pane_cp06

0xc06e,	// (0x00016e8b) cell_cmode_rocker_pane_g1_ParamLimits

0xc06e,	// (0x00016e8b) cell_cmode_rocker_pane_g1

0xd8c3,	// (0x000186e0) cell_cmode_rocker_pane_g2_ParamLimits

0xd8c3,	// (0x000186e0) cell_cmode_rocker_pane_g2

0x0001,

0xfdca,	// (0x0001abe7) cell_cmode_rocker_pane_g_ParamLimits

0xfdca,	// (0x0001abe7) cell_cmode_rocker_pane_g

0x6cc5,	// (0x00011ae2) bg_button_pane_cp07

0xe399,	// (0x000191b6) cell_cmode_itu_pane_g1

0xe3a2,	// (0x000191bf) cell_cmode_itu_pane_t1

0xe3b0,	// (0x000191cd) cell_cmode_itu_pane_t2

0x0001,

0xfdcf,	// (0x0001abec) cell_cmode_itu_pane_t

0xdae6,	// (0x00018903) aid_touch_ctrl_left

0xdaee,	// (0x0001890b) aid_touch_ctrl_right

0x6cc5,	// (0x00011ae2) compa_mode_pane

0xe3be,	// (0x000191db) aid_cmod_rocker_key_size_cp

0xe3c8,	// (0x000191e5) aid_cmode_itu_key_size_cp

0xe3d2,	// (0x000191ef) compa_mode_pane_g1

0xe3da,	// (0x000191f7) compa_mode_pane_g2

0xe3e2,	// (0x000191ff) compa_mode_pane_g3

0x0002,

0xfdd4,	// (0x0001abf1) compa_mode_pane_g

0xe3ea,	// (0x00019207) main_comp_mode_itu_pane_cp

0xe3f2,	// (0x0001920f) main_comp_mode_rocker_pane_cp

0xe3fa,	// (0x00019217) cell_cmode_itu_pane_cp_ParamLimits

0xe3fa,	// (0x00019217) cell_cmode_itu_pane_cp

0xe40f,	// (0x0001922c) cell_cmode_rocker_pane_cp_ParamLimits

0xe40f,	// (0x0001922c) cell_cmode_rocker_pane_cp

0x7bc4,	// (0x000129e1) bg_button_pane_cp06_cp_ParamLimits

0x7bc4,	// (0x000129e1) bg_button_pane_cp06_cp

0xc06e,	// (0x00016e8b) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc06e,	// (0x00016e8b) cell_cmode_rocker_pane_g1_cp

0xbdf0,	// (0x00016c0d) cell_cmode_rocker_pane_g2_cp

0x6cc5,	// (0x00011ae2) bg_button_pane_cp07_cp

0xa93e,	// (0x0001575b) cell_cmode_itu_pane_g1_cp

0xe421,	// (0x0001923e) cell_cmode_itu_pane_t1_cp

0xe421,	// (0x0001923e) cell_cmode_itu_pane_t2_cp

0xa92b,	// (0x00015748) settings_code_pane_cp2

0x6db9,	// (0x00011bd6) bg_popup_window_pane_cp3_ParamLimits

0x7236,	// (0x00012053) heading_pane_cp3_ParamLimits

0x7242,	// (0x0001205f) listscroll_popup_graphic_pane_ParamLimits

0x5e7f,	// (0x00010c9c) fep_hwr_aid_pane_ParamLimits

0x62f6,	// (0x00011113) aid_touch_sctrl_top_ParamLimits

0x6311,	// (0x0001112e) sctrl_sk_top_pane_g1_ParamLimits

0x60d6,	// (0x00010ef3) sctrl_sk_top_pane_g2_ParamLimits

0xfd0a,	// (0x0001ab27) sctrl_sk_top_pane_g_ParamLimits

0x631e,	// (0x0001113b) sctrl_sk_top_pane_t1_ParamLimits

0x62f6,	// (0x00011113) aid_touch_sctrl_bottom_ParamLimits

0x631e,	// (0x0001113b) sctrl_sk_bottom_pane_t1_ParamLimits

0xda2f,	// (0x0001884c) aid_area_touch_clock

0x6507,	// (0x00011324) aid_vkb2_area_top_pane_cell_ParamLimits

0x6507,	// (0x00011324) aid_vkb2_area_top_pane_cell

0x6652,	// (0x0001146f) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x6652,	// (0x0001146f) aid_vkb2_area_bottom_pane_cell

0xdf96,	// (0x00018db3) popup_char_count_window

0xe42f,	// (0x0001924c) popup_char_count_window_g1

0xe438,	// (0x00019255) popup_char_count_window_g2

0xe441,	// (0x0001925e) popup_char_count_window_g3

0x0002,

0xfddb,	// (0x0001abf8) popup_char_count_window_g

0xe44a,	// (0x00019267) popup_char_count_window_t1

0x63cd,	// (0x000111ea) popup_fep_char_preview_window_ParamLimits

0x63cd,	// (0x000111ea) popup_fep_char_preview_window

0x6525,	// (0x00011342) vkb2_top_candi_pane_ParamLimits

0x6525,	// (0x00011342) vkb2_top_candi_pane

0xe458,	// (0x00019275) cell_vkb2_top_candi_pane_ParamLimits

0xe458,	// (0x00019275) cell_vkb2_top_candi_pane

0x6935,	// (0x00011752) bg_popup_fep_char_preview_window_ParamLimits

0x6935,	// (0x00011752) bg_popup_fep_char_preview_window

0x6943,	// (0x00011760) popup_fep_char_preview_window_t1_ParamLimits

0x6943,	// (0x00011760) popup_fep_char_preview_window_t1

0xe4a5,	// (0x000192c2) bg_popup_fep_char_preview_window_g1

0xe4ad,	// (0x000192ca) bg_popup_fep_char_preview_window_g2

0xe4b5,	// (0x000192d2) bg_popup_fep_char_preview_window_g3

0xe4bd,	// (0x000192da) bg_popup_fep_char_preview_window_g4

0xe4c5,	// (0x000192e2) bg_popup_fep_char_preview_window_g5

0x697d,	// (0x0001179a) bg_popup_fep_char_preview_window_g6

0xe4cd,	// (0x000192ea) bg_popup_fep_char_preview_window_g7

0xe4d5,	// (0x000192f2) bg_popup_fep_char_preview_window_g8

0xe4dd,	// (0x000192fa) bg_popup_fep_char_preview_window_g9

0x0008,

0xfde2,	// (0x0001abff) bg_popup_fep_char_preview_window_g

0x60d6,	// (0x00010ef3) cell_vkb2_top_candi_pane_g1_ParamLimits

0x60d6,	// (0x00010ef3) cell_vkb2_top_candi_pane_g1

0x60e4,	// (0x00010f01) cell_vkb2_top_candi_pane_g2_ParamLimits

0x60e4,	// (0x00010f01) cell_vkb2_top_candi_pane_g2

0xe034,	// (0x00018e51) cell_vkb2_top_candi_pane_g3_ParamLimits

0xe034,	// (0x00018e51) cell_vkb2_top_candi_pane_g3

0x6985,	// (0x000117a2) cell_vkb2_top_candi_pane_g4_ParamLimits

0x6985,	// (0x000117a2) cell_vkb2_top_candi_pane_g4

0xc6de,	// (0x000174fb) cell_vkb2_top_candi_pane_g5_ParamLimits

0xc6de,	// (0x000174fb) cell_vkb2_top_candi_pane_g5

0x69a6,	// (0x000117c3) cell_vkb2_top_candi_pane_g6_ParamLimits

0x69a6,	// (0x000117c3) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdf5,	// (0x0001ac12) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdf5,	// (0x0001ac12) cell_vkb2_top_candi_pane_g

0x69b4,	// (0x000117d1) cell_vkb2_top_candi_pane_t1

0x5cdf,	// (0x00010afc) aid_size_touch_slider_mark_ParamLimits

0x5cdf,	// (0x00010afc) aid_size_touch_slider_mark

0xe0fa,	// (0x00018f17) grid_graphic2_catg_pane_ParamLimits

0xe0fa,	// (0x00018f17) grid_graphic2_catg_pane

0xe198,	// (0x00018fb5) popup_grid_graphic2_window_t1_ParamLimits

0xe198,	// (0x00018fb5) popup_grid_graphic2_window_t1

0xe1aa,	// (0x00018fc7) popup_grid_graphic2_window_t2_ParamLimits

0xe1aa,	// (0x00018fc7) popup_grid_graphic2_window_t2

0x0001,

0xfdb0,	// (0x0001abcd) popup_grid_graphic2_window_t_ParamLimits

0xfdb0,	// (0x0001abcd) popup_grid_graphic2_window_t

0x705c,	// (0x00011e79) bg_button_pane_cp05_ParamLimits

0xe314,	// (0x00019131) cell_graphic2_control_pane_g1_ParamLimits

0xe4e5,	// (0x00019302) cell_graphic2_catg_pane_ParamLimits

0xe4e5,	// (0x00019302) cell_graphic2_catg_pane

0x6cc5,	// (0x00011ae2) bg_button_pane_cp12

0xe4f7,	// (0x00019314) cell_graphic2_catg_pane_g1

0xd9fb,	// (0x00018818) cell_tb_ext_pane_t1_ParamLimits

0x676f,	// (0x0001158c) vkb2_top_cell_right_narrow_pane_ParamLimits

0x676f,	// (0x0001158c) vkb2_top_cell_right_narrow_pane

0x6787,	// (0x000115a4) vkb2_top_cell_right_wide_pane_ParamLimits

0x6787,	// (0x000115a4) vkb2_top_cell_right_wide_pane

0x5e71,	// (0x00010c8e) bg_vkb2_func_pane_ParamLimits

0x5e71,	// (0x00010c8e) bg_vkb2_func_pane

0x67f8,	// (0x00011615) vkb2_top_cell_left_pane_g1_ParamLimits

0x5e71,	// (0x00010c8e) bg_vkb2_fuc_pane_cp03_ParamLimits

0x5e71,	// (0x00010c8e) bg_vkb2_fuc_pane_cp03

0x6856,	// (0x00011673) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x92d4,	// (0x000140f1) bg_vkb2_func_pane_g1

0x92dc,	// (0x000140f9) bg_vkb2_func_pane_g2

0x92ec,	// (0x00014109) bg_vkb2_func_pane_g3

0x92e4,	// (0x00014101) bg_vkb2_func_pane_g4

0x92f4,	// (0x00014111) bg_vkb2_func_pane_g5

0x92fc,	// (0x00014119) bg_vkb2_func_pane_g6

0x9304,	// (0x00014121) bg_vkb2_func_pane_g7

0x930c,	// (0x00014129) bg_vkb2_func_pane_g8

0x92cc,	// (0x000140e9) bg_vkb2_func_pane_g9

0x0008,

0xfe02,	// (0x0001ac1f) bg_vkb2_func_pane_g

0x5e71,	// (0x00010c8e) bg_vkb2_fuc_pane_cp01_ParamLimits

0x5e71,	// (0x00010c8e) bg_vkb2_fuc_pane_cp01

0x67f8,	// (0x00011615) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x67f8,	// (0x00011615) vkb2_top_cell_right_wide_pane_g1

0x5e71,	// (0x00010c8e) bg_vkb2_fuc_pane_cp02_ParamLimits

0x5e71,	// (0x00010c8e) bg_vkb2_fuc_pane_cp02

0x6856,	// (0x00011673) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x6856,	// (0x00011673) vkb2_top_cell_right_narrow_pane_g1

0xd631,	// (0x0001844e) aid_touch_area_decrease_ParamLimits

0xd631,	// (0x0001844e) aid_touch_area_decrease

0xd64f,	// (0x0001846c) aid_touch_area_increase_ParamLimits

0xd64f,	// (0x0001846c) aid_touch_area_increase

0xd65b,	// (0x00018478) aid_touch_area_mute_ParamLimits

0xd65b,	// (0x00018478) aid_touch_area_mute

0xd67f,	// (0x0001849c) aid_touch_area_slider_ParamLimits

0xd67f,	// (0x0001849c) aid_touch_area_slider

0xd76b,	// (0x00018588) popup_slider_window_g4_ParamLimits

0xd76b,	// (0x00018588) popup_slider_window_g4

0xd777,	// (0x00018594) popup_slider_window_g5_ParamLimits

0xd777,	// (0x00018594) popup_slider_window_g5

0xd799,	// (0x000185b6) popup_slider_window_g6_ParamLimits

0xd799,	// (0x000185b6) popup_slider_window_g6

0xd7d9,	// (0x000185f6) popup_slider_window_t2_ParamLimits

0xd7d9,	// (0x000185f6) popup_slider_window_t2

0x0001,

0xfcfe,	// (0x0001ab1b) popup_slider_window_t_ParamLimits

0xfcfe,	// (0x0001ab1b) popup_slider_window_t

0xd7f1,	// (0x0001860e) slider_pane_ParamLimits

0xd7f1,	// (0x0001860e) slider_pane

0xe500,	// (0x0001931d) slider_pane_g1_ParamLimits

0xe500,	// (0x0001931d) slider_pane_g1

0xe514,	// (0x00019331) slider_pane_g2_ParamLimits

0xe514,	// (0x00019331) slider_pane_g2

0xe52a,	// (0x00019347) slider_pane_g3_ParamLimits

0xe52a,	// (0x00019347) slider_pane_g3

0x0003,

0xfe15,	// (0x0001ac32) slider_pane_g_ParamLimits

0xfe15,	// (0x0001ac32) slider_pane_g

0x589a,	// (0x000106b7) popup_tb_float_extension_window_ParamLimits

0x589a,	// (0x000106b7) popup_tb_float_extension_window

0xe556,	// (0x00019373) aid_size_cell_tb_float_ext

0x6cc5,	// (0x00011ae2) bg_popup_sub_window_cp28

0xe562,	// (0x0001937f) grid_tb_float_ext_pane

0xe56c,	// (0x00019389) cell_tb_float_ext_pane_ParamLimits

0xe56c,	// (0x00019389) cell_tb_float_ext_pane

0xe586,	// (0x000193a3) cell_tb_float_ext_pane_g1

0xe58f,	// (0x000193ac) grid_highlight_pane_cp12

0x5fc0,	// (0x00010ddd) cell_last_hwr_side_pane_ParamLimits

0x5fc0,	// (0x00010ddd) cell_last_hwr_side_pane

0xbdf0,	// (0x00016c0d) cell_last_hwr_side_pane_g1

0xe598,	// (0x000193b5) cell_last_hwr_side_pane_g2

0x0001,

0xfe1e,	// (0x0001ac3b) cell_last_hwr_side_pane_g

0x671e,	// (0x0001153b) vkb2_area_bottom_space_btn_pane_ParamLimits

0x671e,	// (0x0001153b) vkb2_area_bottom_space_btn_pane

0x60d6,	// (0x00010ef3) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xe06c,	// (0x00018e89) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x69b4,	// (0x000117d1) cell_vkb2_top_candi_pane_t1_ParamLimits

0x69d3,	// (0x000117f0) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x69d3,	// (0x000117f0) vkb2_area_bottom_space_btn_pane_g1

0x6a0d,	// (0x0001182a) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x6a0d,	// (0x0001182a) vkb2_area_bottom_space_btn_pane_g2

0x6a43,	// (0x00011860) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x6a43,	// (0x00011860) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe23,	// (0x0001ac40) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe23,	// (0x0001ac40) vkb2_area_bottom_space_btn_pane_g

0x5f34,	// (0x00010d51) cel_fep_hwr_func_pane_ParamLimits

0x5f34,	// (0x00010d51) cel_fep_hwr_func_pane

0x5f70,	// (0x00010d8d) cell_hwr_side_button_pane_ParamLimits

0x5f70,	// (0x00010d8d) cell_hwr_side_button_pane

0xda2f,	// (0x0001884c) aid_area_touch_clock_ParamLimits

0x705c,	// (0x00011e79) bg_uniindi_top_pane_ParamLimits

0xda41,	// (0x0001885e) uniindi_top_pane_g1_ParamLimits

0xda57,	// (0x00018874) uniindi_top_pane_g2_ParamLimits

0xda63,	// (0x00018880) uniindi_top_pane_g3_ParamLimits

0xda74,	// (0x00018891) uniindi_top_pane_g4_ParamLimits

0xfd36,	// (0x0001ab53) uniindi_top_pane_g_ParamLimits

0xda81,	// (0x0001889e) uniindi_top_pane_t1_ParamLimits

0x705c,	// (0x00011e79) bg_vkb2_func_pane_cp01_ParamLimits

0x705c,	// (0x00011e79) bg_vkb2_func_pane_cp01

0xe5a1,	// (0x000193be) cel_fep_hwr_func_pane_g1_ParamLimits

0xe5a1,	// (0x000193be) cel_fep_hwr_func_pane_g1

0x705c,	// (0x00011e79) bg_vkb2_func_pane_cp02_ParamLimits

0x705c,	// (0x00011e79) bg_vkb2_func_pane_cp02

0xe5a1,	// (0x000193be) cell_hwr_side_button_pane_g1_ParamLimits

0xe5a1,	// (0x000193be) cell_hwr_side_button_pane_g1

0x911f,	// (0x00013f3c) status_pane_g4_ParamLimits

0x911f,	// (0x00013f3c) status_pane_g4

0x9139,	// (0x00013f56) status_pane_t1

0xbb2a,	// (0x00016947) form2_midp_gauge_slider_cont_pane

0xbb32,	// (0x0001694f) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbb44,	// (0x00016961) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbb56,	// (0x00016973) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf6,	// (0x0001a913) form2_midp_gauge_slider_pane_t_ParamLimits

0xbb68,	// (0x00016985) form2_midp_slider_pane_ParamLimits

0x638d,	// (0x000111aa) aid_size_cell_func_vkb2_ParamLimits

0x638d,	// (0x000111aa) aid_size_cell_func_vkb2

0xe542,	// (0x0001935f) slider_pane_g4_ParamLimits

0xe542,	// (0x0001935f) slider_pane_g4

0x6a8d,	// (0x000118aa) form2_midp_gauge_slider_pane_t2_cp01

0x6a9b,	// (0x000118b8) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x6a9b,	// (0x000118b8) form2_midp_gauge_slider_pane_t3_cp01

0x6ab8,	// (0x000118d5) form2_midp_slider_pane_cp01

0x6cc5,	// (0x00011ae2) navi_smil_pane

0xe5da,	// (0x000193f7) navi_smil_pane_g1

0xe5e2,	// (0x000193ff) navi_smil_pane_t1

0xe5af,	// (0x000193cc) form2_midp_slider_pane_g1

0xe5b8,	// (0x000193d5) form2_midp_slider_pane_g2

0xe5c0,	// (0x000193dd) form2_midp_slider_pane_g3

0xe5af,	// (0x000193cc) form2_midp_slider_pane_g4

0xe5c8,	// (0x000193e5) form2_midp_slider_pane_g5

0x0004,

0xfe2c,	// (0x0001ac49) form2_midp_slider_pane_g

0x6a7d,	// (0x0001189a) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x6a7d,	// (0x0001189a) vkb2_area_bottom_space_btn_pane_g4

0x8f5c,	// (0x00013d79) lc0_navi_pane_ParamLimits

0x8f5c,	// (0x00013d79) lc0_navi_pane

0x8fd2,	// (0x00013def) lc0_stat_indi_pane_ParamLimits

0x8fd2,	// (0x00013def) lc0_stat_indi_pane

0x8fe9,	// (0x00013e06) ls0_title_pane_ParamLimits

0x8fe9,	// (0x00013e06) ls0_title_pane

0x7bc4,	// (0x000129e1) bg_popup_sub_pane_cp14_ParamLimits

0xda16,	// (0x00018833) list_uniindi_pane_ParamLimits

0xda22,	// (0x0001883f) uniindi_top_pane_ParamLimits

0xdabe,	// (0x000188db) list_single_uniindi_pane_g1_ParamLimits

0xdad1,	// (0x000188ee) list_single_uniindi_pane_t1_ParamLimits

0x6ac1,	// (0x000118de) lc0_stat_clock_pane_ParamLimits

0x6ac1,	// (0x000118de) lc0_stat_clock_pane

0xe5f0,	// (0x0001940d) lc0_stat_indi_pane_g1_ParamLimits

0xe5f0,	// (0x0001940d) lc0_stat_indi_pane_g1

0xe5fd,	// (0x0001941a) lc0_stat_indi_pane_g2_ParamLimits

0xe5fd,	// (0x0001941a) lc0_stat_indi_pane_g2

0x0001,

0xfe37,	// (0x0001ac54) lc0_stat_indi_pane_g_ParamLimits

0xfe37,	// (0x0001ac54) lc0_stat_indi_pane_g

0x6ace,	// (0x000118eb) lc0_uni_indicator_pane_ParamLimits

0x6ace,	// (0x000118eb) lc0_uni_indicator_pane

0xe60a,	// (0x00019427) ls0_title_pane_g1_ParamLimits

0xe60a,	// (0x00019427) ls0_title_pane_g1

0xe61e,	// (0x0001943b) ls0_title_pane_t1_ParamLimits

0xe61e,	// (0x0001943b) ls0_title_pane_t1

0x6adb,	// (0x000118f8) lc0_uni_indicator_pane_g1_ParamLimits

0x6adb,	// (0x000118f8) lc0_uni_indicator_pane_g1

0xe654,	// (0x00019471) lc0_stat_clock_pane_t1

0x4aeb,	// (0x0000f908) main_ai5_pane

0xe662,	// (0x0001947f) ai5_sk_pane_ParamLimits

0xe662,	// (0x0001947f) ai5_sk_pane

0xe66f,	// (0x0001948c) cell_ai5_widget_pane_ParamLimits

0xe66f,	// (0x0001948c) cell_ai5_widget_pane

0xe725,	// (0x00019542) aid_size_cell_widget_grid

0xe73b,	// (0x00019558) bg_ai5_widget_pane_ParamLimits

0xe73b,	// (0x00019558) bg_ai5_widget_pane

0xe7a5,	// (0x000195c2) cell_ai5_widget_pane_g2

0xe7b5,	// (0x000195d2) cell_ai5_widget_pane_g3

0xe7d4,	// (0x000195f1) cell_ai5_widget_pane_g4

0xe7e0,	// (0x000195fd) cell_ai5_widget_pane_g5

0xe7ec,	// (0x00019609) cell_ai5_widget_pane_g6

0xe7f8,	// (0x00019615) cell_ai5_widget_pane_g7

0xe840,	// (0x0001965d) cell_ai5_widget_pane_t1_ParamLimits

0xe840,	// (0x0001965d) cell_ai5_widget_pane_t1

0xe85d,	// (0x0001967a) cell_ai5_widget_pane_t2_ParamLimits

0xe85d,	// (0x0001967a) cell_ai5_widget_pane_t2

0xe875,	// (0x00019692) cell_ai5_widget_pane_t3_ParamLimits

0xe875,	// (0x00019692) cell_ai5_widget_pane_t3

0xe88d,	// (0x000196aa) cell_ai5_widget_pane_t4_ParamLimits

0xe88d,	// (0x000196aa) cell_ai5_widget_pane_t4

0xe8a7,	// (0x000196c4) cell_ai5_widget_pane_t5_ParamLimits

0xe8a7,	// (0x000196c4) cell_ai5_widget_pane_t5

0xe8c6,	// (0x000196e3) cell_ai5_widget_pane_t6_ParamLimits

0xe8c6,	// (0x000196e3) cell_ai5_widget_pane_t6

0xe8d8,	// (0x000196f5) cell_ai5_widget_pane_t7_ParamLimits

0xe8d8,	// (0x000196f5) cell_ai5_widget_pane_t7

0xe8f1,	// (0x0001970e) cell_ai5_widget_pane_t8_ParamLimits

0xe8f1,	// (0x0001970e) cell_ai5_widget_pane_t8

0x0009,

0xfe51,	// (0x0001ac6e) cell_ai5_widget_pane_t_ParamLimits

0xfe51,	// (0x0001ac6e) cell_ai5_widget_pane_t

0xe93d,	// (0x0001975a) grid_ai5_widget_pane

0x7bc4,	// (0x000129e1) highlight_cell_ai5_widget_pane_ParamLimits

0x7bc4,	// (0x000129e1) highlight_cell_ai5_widget_pane

0xe955,	// (0x00019772) ai5_sk_left_pane

0xe95f,	// (0x0001977c) ai5_sk_middle_pane

0xe969,	// (0x00019786) ai5_sk_right_pane

0xe973,	// (0x00019790) bg_ai5_widget_pane_g1_ParamLimits

0xe973,	// (0x00019790) bg_ai5_widget_pane_g1

0xe97f,	// (0x0001979c) bg_ai5_widget_pane_g2_ParamLimits

0xe97f,	// (0x0001979c) bg_ai5_widget_pane_g2

0xe98b,	// (0x000197a8) bg_ai5_widget_pane_g3_ParamLimits

0xe98b,	// (0x000197a8) bg_ai5_widget_pane_g3

0xe997,	// (0x000197b4) bg_ai5_widget_pane_g4_ParamLimits

0xe997,	// (0x000197b4) bg_ai5_widget_pane_g4

0xe9a3,	// (0x000197c0) bg_ai5_widget_pane_g5_ParamLimits

0xe9a3,	// (0x000197c0) bg_ai5_widget_pane_g5

0xe9af,	// (0x000197cc) bg_ai5_widget_pane_g6_ParamLimits

0xe9af,	// (0x000197cc) bg_ai5_widget_pane_g6

0xe9bb,	// (0x000197d8) bg_ai5_widget_pane_g7_ParamLimits

0xe9bb,	// (0x000197d8) bg_ai5_widget_pane_g7

0xe9c7,	// (0x000197e4) bg_ai5_widget_pane_g8_ParamLimits

0xe9c7,	// (0x000197e4) bg_ai5_widget_pane_g8

0xe9d3,	// (0x000197f0) bg_ai5_widget_pane_g9_ParamLimits

0xe9d3,	// (0x000197f0) bg_ai5_widget_pane_g9

0x0008,

0xfe66,	// (0x0001ac83) bg_ai5_widget_pane_g_ParamLimits

0xfe66,	// (0x0001ac83) bg_ai5_widget_pane_g

0xea06,	// (0x00019823) cell_shortcut_ai5_widget_pane_ParamLimits

0xea06,	// (0x00019823) cell_shortcut_ai5_widget_pane

0x8a56,	// (0x00013873) bg_cell_shortcut_ai5_widget_pane

0xea17,	// (0x00019834) cell_grid_ai5_widget_pane_g1

0xea20,	// (0x0001983d) highlight_cell_shortcut_ai5_widget_pane

0x92d4,	// (0x000140f1) ai5_sk_left_pane_g1

0xea28,	// (0x00019845) ai5_sk_left_pane_g2

0xea30,	// (0x0001984d) ai5_sk_left_pane_g3

0xea38,	// (0x00019855) ai5_sk_left_pane_g4

0x0003,

0xfe79,	// (0x0001ac96) ai5_sk_left_pane_g

0xea40,	// (0x0001985d) ai5_sk_left_pane_t1

0x92dc,	// (0x000140f9) ai5_sk_right_pane_g1

0xea4e,	// (0x0001986b) ai5_sk_right_pane_g2

0xea56,	// (0x00019873) ai5_sk_right_pane_g3

0xea5e,	// (0x0001987b) ai5_sk_right_pane_g4

0x0003,

0xfe82,	// (0x0001ac9f) ai5_sk_right_pane_g

0xea66,	// (0x00019883) ai5_sk_right_pane_t1

0x92dc,	// (0x000140f9) ai5_sk_middle_pane_g1

0x92d4,	// (0x000140f1) ai5_sk_middle_pane_g2

0x92f4,	// (0x00014111) ai5_sk_middle_pane_g3

0xea56,	// (0x00019873) ai5_sk_middle_pane_g4

0xea30,	// (0x0001984d) ai5_sk_middle_pane_g5

0xea74,	// (0x00019891) ai5_sk_middle_pane_g6

0xea7c,	// (0x00019899) ai5_sk_middle_pane_g7

0x0006,

0xfe8b,	// (0x0001aca8) ai5_sk_middle_pane_g

0x8dec,	// (0x00013c09) aid_touch_area_size_lc0_ParamLimits

0x8dec,	// (0x00013c09) aid_touch_area_size_lc0

0x6105,	// (0x00010f22) cell_hwr_candidate_pane_t1_ParamLimits

0x8e08,	// (0x00013c25) aid_touch_navi_pane

0x90d1,	// (0x00013eee) status_dt_navi_pane_ParamLimits

0x90d1,	// (0x00013eee) status_dt_navi_pane

0x90de,	// (0x00013efb) status_dt_sta_pane_ParamLimits

0x90de,	// (0x00013efb) status_dt_sta_pane

0xea84,	// (0x000198a1) dt_sta_controll_pane

0xea91,	// (0x000198ae) dt_sta_indi_pane

0xeaa2,	// (0x000198bf) dt_sta_title_pane

0x705c,	// (0x00011e79) bg_dt_sta_indi_pane_ParamLimits

0x705c,	// (0x00011e79) bg_dt_sta_indi_pane

0xeab5,	// (0x000198d2) dt_sta_battery_pane

0xeabd,	// (0x000198da) dt_sta_indi_pane_g1

0xeac6,	// (0x000198e3) dt_sta_indi_pane_g2

0xeacf,	// (0x000198ec) dt_sta_indi_pane_g3

0x0002,

0xfe9a,	// (0x0001acb7) dt_sta_indi_pane_g

0xead8,	// (0x000198f5) dt_sta_signal_pane

0x7bc4,	// (0x000129e1) bg_dt_sta_title_pane_ParamLimits

0x7bc4,	// (0x000129e1) bg_dt_sta_title_pane

0xeae1,	// (0x000198fe) dt_sta_title_pane_g1

0xeae9,	// (0x00019906) dt_sta_title_pane_t1_ParamLimits

0xeae9,	// (0x00019906) dt_sta_title_pane_t1

0x6cc5,	// (0x00011ae2) bg_dt_sta_control_pane

0xeafe,	// (0x0001991b) dt_sta_controll_pane_g1

0xeb07,	// (0x00019924) bg_dt_sta_title_pane_g1

0xeb10,	// (0x0001992d) bg_dt_sta_title_pane_g2

0xeb19,	// (0x00019936) bg_dt_sta_title_pane_g3

0x0002,

0xfea1,	// (0x0001acbe) bg_dt_sta_title_pane_g

0xbdf0,	// (0x00016c0d) bg_dt_sta_indi_pane_g1

0xeb22,	// (0x0001993f) dt_sta_signal_pane_g1

0xeb2a,	// (0x00019947) dt_sta_signal_pane_g2

0x0001,

0xfea8,	// (0x0001acc5) dt_sta_signal_pane_g

0xeb32,	// (0x0001994f) dt_sta_battery_pane_g1

0xeb3b,	// (0x00019958) dt_sta_battery_pane_t1

0xbdf0,	// (0x00016c0d) bg_dt_sta_control_pane_g1

0x84d1,	// (0x000132ee) fep_china_uni_eep_pane

0x84d9,	// (0x000132f6) fep_china_uni_entry_pane_ParamLimits

0x84e9,	// (0x00013306) popup_fep_china_uni_window_g1_ParamLimits

0x84f9,	// (0x00013316) popup_fep_china_uni_window_g2_ParamLimits

0x84f9,	// (0x00013316) popup_fep_china_uni_window_g2

0x0001,

0xf71e,	// (0x0001a53b) popup_fep_china_uni_window_g_ParamLimits

0xf71e,	// (0x0001a53b) popup_fep_china_uni_window_g

0xeb4a,	// (0x00019967) fep_china_uni_eep_pane_g1

0xeb52,	// (0x0001996f) fep_china_uni_eep_pane_t1

0xe5d1,	// (0x000193ee) aid_touch_area_size_smil_player

0x8f54,	// (0x00013d71) lc0_clock_pane

0x912d,	// (0x00013f4a) status_pane_g5_ParamLimits

0x912d,	// (0x00013f4a) status_pane_g5

0x555f,	// (0x0001037c) popup_keymap_window

0x90f3,	// (0x00013f10) status_icon_pane

0xe7b5,	// (0x000195d2) cell_ai5_widget_pane_g3_ParamLimits

0xe7d4,	// (0x000195f1) cell_ai5_widget_pane_g4_ParamLimits

0xe7e0,	// (0x000195fd) cell_ai5_widget_pane_g5_ParamLimits

0xe804,	// (0x00019621) cell_ai5_widget_pane_g8_ParamLimits

0xe804,	// (0x00019621) cell_ai5_widget_pane_g8

0xe818,	// (0x00019635) cell_ai5_widget_pane_g9_ParamLimits

0xe818,	// (0x00019635) cell_ai5_widget_pane_g9

0xe82c,	// (0x00019649) cell_ai5_widget_pane_g10_ParamLimits

0xe82c,	// (0x00019649) cell_ai5_widget_pane_g10

0xeb61,	// (0x0001997e) status_icon_pane_g1

0x6cc5,	// (0x00011ae2) bg_popup_sub_pane_cp13

0xeb69,	// (0x00019986) popup_keymap_window_t1

0x8d21,	// (0x00013b3e) control_pane_g6_ParamLimits

0x8d21,	// (0x00013b3e) control_pane_g6

0x8d2e,	// (0x00013b4b) control_pane_g7_ParamLimits

0x8d2e,	// (0x00013b4b) control_pane_g7

0x8d3b,	// (0x00013b58) control_pane_g8_ParamLimits

0x8d3b,	// (0x00013b58) control_pane_g8

0xea84,	// (0x000198a1) dt_sta_controll_pane_ParamLimits

0xea91,	// (0x000198ae) dt_sta_indi_pane_ParamLimits

0xeaa2,	// (0x000198bf) dt_sta_title_pane_ParamLimits

0x7577,	// (0x00012394) aid_size_touch_scroll_bar_cale

0x4bc4,	// (0x0000f9e1) popup_discreet_window_ParamLimits

0x4bc4,	// (0x0000f9e1) popup_discreet_window

0x4c4c,	// (0x0000fa69) popup_sk_window

0x9a35,	// (0x00014852) bg_popup_sub_pane_cp28_ParamLimits

0x9a35,	// (0x00014852) bg_popup_sub_pane_cp28

0xeb77,	// (0x00019994) popup_discreet_window_g1_ParamLimits

0xeb77,	// (0x00019994) popup_discreet_window_g1

0xeb97,	// (0x000199b4) popup_discreet_window_t1_ParamLimits

0xeb97,	// (0x000199b4) popup_discreet_window_t1

0xebb5,	// (0x000199d2) popup_discreet_window_t2_ParamLimits

0xebb5,	// (0x000199d2) popup_discreet_window_t2

0x0002,

0xfead,	// (0x0001acca) popup_discreet_window_t_ParamLimits

0xfead,	// (0x0001acca) popup_discreet_window_t

0x6aef,	// (0x0001190c) popup_sk_window_g1

0x6af9,	// (0x00011916) popup_sk_window_g2

0x0001,

0xfeb4,	// (0x0001acd1) popup_sk_window_g

0x6b03,	// (0x00011920) popup_sk_window_t1

0x6b11,	// (0x0001192e) popup_sk_window_t1_copy1

0xe7a5,	// (0x000195c2) cell_ai5_widget_pane_g2_ParamLimits

0xe903,	// (0x00019720) cell_ai5_widget_pane_t9_ParamLimits

0xe903,	// (0x00019720) cell_ai5_widget_pane_t9

0x6cc5,	// (0x00011ae2) main_fep_fshwr2_pane

0x6b1f,	// (0x0001193c) aid_fshwr2_btn_pane

0x6b2b,	// (0x00011948) aid_fshwr2_syb_pane

0x6b3c,	// (0x00011959) aid_fshwr2_txt_pane

0x6b48,	// (0x00011965) fshwr2_func_candi_pane

0x6b5d,	// (0x0001197a) fshwr2_hwr_syb_pane

0x6b74,	// (0x00011991) fshwr2_icf_pane

0x6cc5,	// (0x00011ae2) fshwr2_icf_bg_pane

0xec07,	// (0x00019a24) fshwr2_icf_pane_t1_ParamLimits

0xec07,	// (0x00019a24) fshwr2_icf_pane_t1

0xbdf0,	// (0x00016c0d) fshwr2_func_candi_pane_g1

0xec1e,	// (0x00019a3b) fshwr2_func_candi_row_pane_ParamLimits

0xec1e,	// (0x00019a3b) fshwr2_func_candi_row_pane

0xec2f,	// (0x00019a4c) cell_fshwr2_syb_pane_ParamLimits

0xec2f,	// (0x00019a4c) cell_fshwr2_syb_pane

0xc06e,	// (0x00016e8b) fshwr2_hwr_syb_pane_g1_ParamLimits

0xc06e,	// (0x00016e8b) fshwr2_hwr_syb_pane_g1

0x6cc5,	// (0x00011ae2) bg_popup_call_pane_cp01

0xec49,	// (0x00019a66) fshwr2_func_candi_cell_pane_ParamLimits

0xec49,	// (0x00019a66) fshwr2_func_candi_cell_pane

0xec7a,	// (0x00019a97) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xec7a,	// (0x00019a97) fshwr2_func_candi_cell_bg_pane

0xec94,	// (0x00019ab1) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xec94,	// (0x00019ab1) fshwr2_func_candi_cell_pane_g1

0xecbc,	// (0x00019ad9) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xecbc,	// (0x00019ad9) fshwr2_func_candi_cell_pane_t1

0x6cc5,	// (0x00011ae2) bg_button_pane_cp08

0x8a56,	// (0x00013873) cell_fshwr2_syb_bg_pane

0xeccf,	// (0x00019aec) cell_fshwr2_syb_bg_pane_g1

0xecd7,	// (0x00019af4) cell_fshwr2_syb_bg_pane_t1

0x7bc4,	// (0x000129e1) main_tmo_pane

0xa550,	// (0x0001536d) uni_indicator_pane_g1_ParamLimits

0xa565,	// (0x00015382) uni_indicator_pane_g2_ParamLimits

0xa57b,	// (0x00015398) uni_indicator_pane_g3_ParamLimits

0xa591,	// (0x000153ae) uni_indicator_pane_g4_ParamLimits

0xa591,	// (0x000153ae) uni_indicator_pane_g4

0xa5a5,	// (0x000153c2) uni_indicator_pane_g5_ParamLimits

0xa5a5,	// (0x000153c2) uni_indicator_pane_g5

0xa5b9,	// (0x000153d6) uni_indicator_pane_g6_ParamLimits

0xa5b9,	// (0x000153d6) uni_indicator_pane_g6

0xf922,	// (0x0001a73f) uni_indicator_pane_g_ParamLimits

0xd60d,	// (0x0001842a) popup_tmo_note_window_ParamLimits

0xd60d,	// (0x0001842a) popup_tmo_note_window

0x636f,	// (0x0001118c) fshwr2_bg_pane

0xecad,	// (0x00019aca) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xecad,	// (0x00019aca) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeb9,	// (0x0001acd6) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeb9,	// (0x0001acd6) fshwr2_func_candi_cell_pane_g

0xbdf0,	// (0x00016c0d) bg_popup_window_pane_cp01

0xece6,	// (0x00019b03) bg_popup_window_pane_g1_cp01

0xecef,	// (0x00019b0c) bg_popup_window_pane_cp22_ParamLimits

0xecef,	// (0x00019b0c) bg_popup_window_pane_cp22

0xecfd,	// (0x00019b1a) listscroll_tmo_link_pane_ParamLimits

0xecfd,	// (0x00019b1a) listscroll_tmo_link_pane

0xed3d,	// (0x00019b5a) popup_tmo_note_window_g1_ParamLimits

0xed3d,	// (0x00019b5a) popup_tmo_note_window_g1

0xed4a,	// (0x00019b67) tmo_note_info_pane_ParamLimits

0xed4a,	// (0x00019b67) tmo_note_info_pane

0xed64,	// (0x00019b81) list_tmo_note_info_pane_g1_ParamLimits

0xed64,	// (0x00019b81) list_tmo_note_info_pane_g1

0xed7b,	// (0x00019b98) list_tmo_note_info_pane_g2_ParamLimits

0xed7b,	// (0x00019b98) list_tmo_note_info_pane_g2

0x0001,

0xfebe,	// (0x0001acdb) list_tmo_note_info_pane_g_ParamLimits

0xfebe,	// (0x0001acdb) list_tmo_note_info_pane_g

0xed97,	// (0x00019bb4) list_tmo_note_info_text_pane_ParamLimits

0xed97,	// (0x00019bb4) list_tmo_note_info_text_pane

0xee18,	// (0x00019c35) list_tmo_link_pane

0xee25,	// (0x00019c42) scroll_pane_cp20

0xee32,	// (0x00019c4f) list_single_tmo_link_pane_ParamLimits

0xee32,	// (0x00019c4f) list_single_tmo_link_pane

0xee42,	// (0x00019c5f) list_single_tmo_link_pane_t1

0xee50,	// (0x00019c6d) list_tmo_note_info_text_pane_t1_ParamLimits

0xee50,	// (0x00019c6d) list_tmo_note_info_text_pane_t1

0x7df8,	// (0x00012c15) aid_size_touch_scroll_bar_cp01_ParamLimits

0x7df8,	// (0x00012c15) aid_size_touch_scroll_bar_cp01

0x7c6d,	// (0x00012a8a) aid_size_touch_slider_marker

0x4c34,	// (0x0000fa51) popup_settings_window_ParamLimits

0x4c34,	// (0x0000fa51) popup_settings_window

0x8db8,	// (0x00013bd5) popup_candi_list_indi_window

0x8e08,	// (0x00013c25) aid_touch_navi_pane_ParamLimits

0x62ca,	// (0x000110e7) rs_clock_indi_pane

0x62d3,	// (0x000110f0) sctrl_sk_bottom_pane_ParamLimits

0x62e4,	// (0x00011101) sctrl_sk_top_pane_ParamLimits

0x63e7,	// (0x00011204) popup_fep_tooltip_window

0xe725,	// (0x00019542) aid_size_cell_widget_grid_ParamLimits

0xe799,	// (0x000195b6) cell_ai5_widget_pane_g1_ParamLimits

0xe799,	// (0x000195b6) cell_ai5_widget_pane_g1

0xe7ec,	// (0x00019609) cell_ai5_widget_pane_g6_ParamLimits

0xe7f8,	// (0x00019615) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe3c,	// (0x0001ac59) cell_ai5_widget_pane_g_ParamLimits

0xfe3c,	// (0x0001ac59) cell_ai5_widget_pane_g

0xe927,	// (0x00019744) cell_ai5_widget_pane_t10_ParamLimits

0xe927,	// (0x00019744) cell_ai5_widget_pane_t10

0xe93d,	// (0x0001975a) grid_ai5_widget_pane_ParamLimits

0xe9df,	// (0x000197fc) cell_contacts_ai5_widget_pane_ParamLimits

0xe9df,	// (0x000197fc) cell_contacts_ai5_widget_pane

0xebca,	// (0x000199e7) popup_discreet_window_t3_ParamLimits

0xebca,	// (0x000199e7) popup_discreet_window_t3

0x6b89,	// (0x000119a6) popup_fshwr2_char_preview_window_ParamLimits

0x6b89,	// (0x000119a6) popup_fshwr2_char_preview_window

0xedb5,	// (0x00019bd2) tmo_note_info_pane_t1

0xedca,	// (0x00019be7) tmo_note_info_pane_t2

0xeddf,	// (0x00019bfc) tmo_note_info_pane_t3

0xedf4,	// (0x00019c11) tmo_note_info_pane_t4

0xee06,	// (0x00019c23) tmo_note_info_pane_t5

0x0004,

0xfec3,	// (0x0001ace0) tmo_note_info_pane_t

0xee18,	// (0x00019c35) list_tmo_link_pane_ParamLimits

0xee25,	// (0x00019c42) scroll_pane_cp20_ParamLimits

0x6cc5,	// (0x00011ae2) bg_popup_fep_char_preview_window_cp01

0xee69,	// (0x00019c86) popup_fshwr2_char_preview_window_t1

0xee77,	// (0x00019c94) popup_candi_list_indi_window_g1

0xee80,	// (0x00019c9d) bg_cell_contacts_ai5_widget_pane

0xee8c,	// (0x00019ca9) cell_contacts_ai5_widget_pane_g1

0xeea0,	// (0x00019cbd) cell_contacts_ai5_widget_pane_g2

0xeeac,	// (0x00019cc9) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfece,	// (0x0001aceb) cell_contacts_ai5_widget_pane_g

0xeebf,	// (0x00019cdc) cell_contacts_ai5_widget_pane_t1

0x7bc4,	// (0x000129e1) highlight_cell_shortcut_ai5_widget_pane_cp01

0xef36,	// (0x00019d53) settings_container_pane

0x8a56,	// (0x00013873) listscroll_set_pane_copy1

0xb23a,	// (0x00016057) scroll_pane_cp121_copy1

0xef42,	// (0x00019d5f) set_content_pane_copy1

0xef4a,	// (0x00019d67) aid_height_set_list_copy1_ParamLimits

0xef4a,	// (0x00019d67) aid_height_set_list_copy1

0xa7d9,	// (0x000155f6) aid_size_parent_copy1_ParamLimits

0xa7d9,	// (0x000155f6) aid_size_parent_copy1

0xef56,	// (0x00019d73) button_value_adjust_pane_cp6_copy1_ParamLimits

0xef56,	// (0x00019d73) button_value_adjust_pane_cp6_copy1

0x8d9e,	// (0x00013bbb) list_highlight_pane_cp2_copy1_ParamLimits

0x8d9e,	// (0x00013bbb) list_highlight_pane_cp2_copy1

0xef6a,	// (0x00019d87) list_set_pane_copy1_ParamLimits

0xef6a,	// (0x00019d87) list_set_pane_copy1

0xeed1,	// (0x00019cee) main_pane_set_t1_copy1_ParamLimits

0xeed1,	// (0x00019cee) main_pane_set_t1_copy1

0xef0b,	// (0x00019d28) main_pane_set_t2_copy1_ParamLimits

0xef0b,	// (0x00019d28) main_pane_set_t2_copy1

0xf017,	// (0x00019e34) main_pane_set_t3_copy1

0xf025,	// (0x00019e42) main_pane_set_t4_copy1

0xef2a,	// (0x00019d47) set_content_pane_g1_copy1_ParamLimits

0xef2a,	// (0x00019d47) set_content_pane_g1_copy1

0xf033,	// (0x00019e50) setting_code_pane_copy1

0xf03b,	// (0x00019e58) setting_slider_graphic_pane_copy1

0xf03b,	// (0x00019e58) setting_slider_pane_copy1

0xf03b,	// (0x00019e58) setting_text_pane_copy1

0xf03b,	// (0x00019e58) setting_volume_pane_copy1

0xf033,	// (0x00019e50) settings_code_pane_cp2_copy1

0xf043,	// (0x00019e60) settings_code_pane_cp_copy1_ParamLimits

0xf043,	// (0x00019e60) settings_code_pane_cp_copy1

0x6b9d,	// (0x000119ba) volume_set_pane_copy1

0xf057,	// (0x00019e74) volume_set_pane_g10_copy1

0xf05f,	// (0x00019e7c) volume_set_pane_g1_copy1

0xf067,	// (0x00019e84) volume_set_pane_g2_copy1

0xf06f,	// (0x00019e8c) volume_set_pane_g3_copy1

0xf077,	// (0x00019e94) volume_set_pane_g4_copy1

0xf07f,	// (0x00019e9c) volume_set_pane_g5_copy1

0xf087,	// (0x00019ea4) volume_set_pane_g6_copy1

0xf08f,	// (0x00019eac) volume_set_pane_g7_copy1

0xf097,	// (0x00019eb4) volume_set_pane_g8_copy1

0xf09f,	// (0x00019ebc) volume_set_pane_g9_copy1

0x6db9,	// (0x00011bd6) bg_set_opt_pane_cp_copy1_ParamLimits

0x6db9,	// (0x00011bd6) bg_set_opt_pane_cp_copy1

0x6ba5,	// (0x000119c2) setting_slider_pane_t1_copy1_ParamLimits

0x6ba5,	// (0x000119c2) setting_slider_pane_t1_copy1

0x6bc3,	// (0x000119e0) setting_slider_pane_t2_copy1_ParamLimits

0x6bc3,	// (0x000119e0) setting_slider_pane_t2_copy1

0x6bdd,	// (0x000119fa) setting_slider_pane_t3_copy1_ParamLimits

0x6bdd,	// (0x000119fa) setting_slider_pane_t3_copy1

0x6bf5,	// (0x00011a12) slider_set_pane_copy1_ParamLimits

0x6bf5,	// (0x00011a12) slider_set_pane_copy1

0x7ced,	// (0x00012b0a) set_opt_bg_pane_g1_copy2

0x7cf5,	// (0x00012b12) set_opt_bg_pane_g2_copy2

0xf0a7,	// (0x00019ec4) set_opt_bg_pane_g3_copy2

0x7d05,	// (0x00012b22) set_opt_bg_pane_g4_copy2

0x7d0d,	// (0x00012b2a) set_opt_bg_pane_g5_copy2

0x7d15,	// (0x00012b32) set_opt_bg_pane_g6_copy2

0xf0b1,	// (0x00019ece) set_opt_bg_pane_g7_copy2

0xf0b9,	// (0x00019ed6) set_opt_bg_pane_g8_copy2

0xf0c3,	// (0x00019ee0) set_opt_bg_pane_g9_copy2

0xf0cd,	// (0x00019eea) aid_size_touch_slider_mark_copy1_ParamLimits

0xf0cd,	// (0x00019eea) aid_size_touch_slider_mark_copy1

0xf0e1,	// (0x00019efe) slider_set_pane_g1_copy1

0xf0ea,	// (0x00019f07) slider_set_pane_g2_copy1

0xaf4c,	// (0x00015d69) slider_set_pane_g3_copy1_ParamLimits

0xaf4c,	// (0x00015d69) slider_set_pane_g3_copy1

0xaf60,	// (0x00015d7d) slider_set_pane_g4_copy1_ParamLimits

0xaf60,	// (0x00015d7d) slider_set_pane_g4_copy1

0xaf78,	// (0x00015d95) slider_set_pane_g5_copy1_ParamLimits

0xaf78,	// (0x00015d95) slider_set_pane_g5_copy1

0xaf4c,	// (0x00015d69) slider_set_pane_g6_copy1_ParamLimits

0xaf4c,	// (0x00015d69) slider_set_pane_g6_copy1

0xf0f2,	// (0x00019f0f) slider_set_pane_g7_copy1_ParamLimits

0xf0f2,	// (0x00019f0f) slider_set_pane_g7_copy1

0x6cd9,	// (0x00011af6) bg_set_opt_pane_cp2_copy1

0xf108,	// (0x00019f25) setting_slider_graphic_pane_g1_copy1

0xf111,	// (0x00019f2e) setting_slider_graphic_pane_t1_copy1

0xf121,	// (0x00019f3e) setting_slider_graphic_pane_t2_copy1

0xf131,	// (0x00019f4e) slider_set_pane_cp_copy1

0xf141,	// (0x00019f5e) input_focus_pane_cp1_copy1

0xf14a,	// (0x00019f67) list_set_text_pane_copy1

0xf152,	// (0x00019f6f) setting_text_pane_g1_copy1

0x6e12,	// (0x00011c2f) set_text_pane_t1_copy1

0xf141,	// (0x00019f5e) input_focus_pane_cp2_copy1

0xf152,	// (0x00019f6f) setting_code_pane_g1_copy1

0xf15b,	// (0x00019f78) setting_code_pane_t1_copy1

0xf169,	// (0x00019f86) list_set_graphic_pane_copy1

0x6cd9,	// (0x00011af6) bg_set_opt_pane_cp4_copy1

0x875c,	// (0x00013579) list_set_graphic_pane_g1_copy1_ParamLimits

0x875c,	// (0x00013579) list_set_graphic_pane_g1_copy1

0xf17b,	// (0x00019f98) list_set_graphic_pane_g2_copy1

0x8774,	// (0x00013591) list_set_graphic_pane_t1_copy1_ParamLimits

0x8774,	// (0x00013591) list_set_graphic_pane_t1_copy1

0xbdf0,	// (0x00016c0d) rs_clock_indi_pane_g1

0xf183,	// (0x00019fa0) rs_clock_indi_pane_t1

0xf191,	// (0x00019fae) rs_indi_pane

0xf199,	// (0x00019fb6) rs_indi_pane_g1

0xf1a2,	// (0x00019fbf) rs_indi_pane_g2

0xf1ab,	// (0x00019fc8) rs_indi_pane_g3

0x0002,

0xfed5,	// (0x0001acf2) rs_indi_pane_g

0x8a56,	// (0x00013873) bg_popup_preview_window_pane_cp03

0xf1b4,	// (0x00019fd1) popup_fep_tooltip_window_t1

0xcc68,	// (0x00017a85) popup_note2_window_g2_ParamLimits

0xcc68,	// (0x00017a85) popup_note2_window_g2

0x0001,

0xfc6e,	// (0x0001aa8b) popup_note2_window_g_ParamLimits

0xfc6e,	// (0x0001aa8b) popup_note2_window_g

0xd246,	// (0x00018063) bg_popup_sub_pane_cp11_ParamLimits

0xd253,	// (0x00018070) cell_ai3_links_pane_g1_ParamLimits

0xd26a,	// (0x00018087) cell_ai3_links_pane_t1

0x6e12,	// (0x00011c2f) set_text_pane_t1_copy1_ParamLimits

0x8967,	// (0x00013784) cell_graphic_popup_pane_cp2_ParamLimits

0x8967,	// (0x00013784) cell_graphic_popup_pane_cp2

0xf1c2,	// (0x00019fdf) cell_graphic_popup_pane_g1_cp2

0x738a,	// (0x000121a7) cell_graphic_popup_pane_g2_cp2

0xf1ca,	// (0x00019fe7) cell_graphic_popup_pane_g3_cp2

0xf1d2,	// (0x00019fef) cell_graphic_popup_pane_t2_cp2

0x739b,	// (0x000121b8) grid_highlight_pane_cp3_cp2

0x80de,	// (0x00012efb) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x7bc4,	// (0x000129e1) main_tmo_pane_ParamLimits

0xd601,	// (0x0001841e) popup_tmo_big_image_note_window

0xe789,	// (0x000195a6) cell_ai5_widget_list_pane

0xe791,	// (0x000195ae) cell_ai5_widget_lrg_icon_pane

0xedb5,	// (0x00019bd2) tmo_note_info_pane_t1_ParamLimits

0xedca,	// (0x00019be7) tmo_note_info_pane_t2_ParamLimits

0xeddf,	// (0x00019bfc) tmo_note_info_pane_t3_ParamLimits

0xedf4,	// (0x00019c11) tmo_note_info_pane_t4_ParamLimits

0xee06,	// (0x00019c23) tmo_note_info_pane_t5_ParamLimits

0xfec3,	// (0x0001ace0) tmo_note_info_pane_t_ParamLimits

0xef36,	// (0x00019d53) settings_container_pane_ParamLimits

0xf139,	// (0x00019f56) indicator_popup_pane_cp5

0xf139,	// (0x00019f56) indicator_popup_pane_cp6

0xf169,	// (0x00019f86) list_set_graphic_pane_copy1_ParamLimits

0x6cc5,	// (0x00011ae2) bg_popup_window_pane_cp23

0xf1e0,	// (0x00019ffd) popup_tmo_big_image_note_window_g1

0xf1ea,	// (0x0001a007) popup_tmo_big_image_note_window_t1

0xf1fa,	// (0x0001a017) popup_tmo_big_image_note_window_t2

0xf20a,	// (0x0001a027) popup_tmo_big_image_note_window_t3

0x0002,

0xfedc,	// (0x0001acf9) popup_tmo_big_image_note_window_t

0xf21a,	// (0x0001a037) cell_ai5_widget_lrg_icon_pane_g1

0xf222,	// (0x0001a03f) cell_ai5_widget_lrg_icon_pane_t1

0xf230,	// (0x0001a04d) cell_ai5_widget_list_row_pane_ParamLimits

0xf230,	// (0x0001a04d) cell_ai5_widget_list_row_pane

0xf248,	// (0x0001a065) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf248,	// (0x0001a065) cell_ai5_widget_list_row_pane_g1

0xf255,	// (0x0001a072) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf255,	// (0x0001a072) cell_ai5_widget_list_row_pane_t1

0xf26d,	// (0x0001a08a) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf26d,	// (0x0001a08a) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfee3,	// (0x0001ad00) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfee3,	// (0x0001ad00) cell_ai5_widget_list_row_pane_t

0x4aeb,	// (0x0000f908) main_fep_vtchi_ss_pane

0x6c1a,	// (0x00011a37) popup_fep_char_pre_window

0x6c22,	// (0x00011a3f) popup_fep_ituss_window

0x6c43,	// (0x00011a60) popup_fep_vkbss_window

0xf295,	// (0x0001a0b2) grid_vkbss_keypad_pane_ParamLimits

0xf295,	// (0x0001a0b2) grid_vkbss_keypad_pane

0xf2a5,	// (0x0001a0c2) ituss_keypad_pane

0x6c6e,	// (0x00011a8b) aid_vkbss_key_offset_ParamLimits

0x6c6e,	// (0x00011a8b) aid_vkbss_key_offset

0x6c7a,	// (0x00011a97) cell_vkbss_key_pane_ParamLimits

0x6c7a,	// (0x00011a97) cell_vkbss_key_pane

0xf2b5,	// (0x0001a0d2) bg_cell_vkbss_key_g1_ParamLimits

0xf2b5,	// (0x0001a0d2) bg_cell_vkbss_key_g1

0xf2c1,	// (0x0001a0de) cell_vkbss_key_3p_pane_ParamLimits

0xf2c1,	// (0x0001a0de) cell_vkbss_key_3p_pane

0xf2db,	// (0x0001a0f8) cell_vkbss_key_g1_ParamLimits

0xf2db,	// (0x0001a0f8) cell_vkbss_key_g1

0xf2f5,	// (0x0001a112) cell_vkbss_key_t1_ParamLimits

0xf2f5,	// (0x0001a112) cell_vkbss_key_t1

0x6c90,	// (0x00011aad) cell_ituss_key_pane_ParamLimits

0x6c90,	// (0x00011aad) cell_ituss_key_pane

0xf320,	// (0x0001a13d) bg_cell_ituss_key_g1_ParamLimits

0xf320,	// (0x0001a13d) bg_cell_ituss_key_g1

0xf32c,	// (0x0001a149) cell_ituss_key_pane_g1_ParamLimits

0xf32c,	// (0x0001a149) cell_ituss_key_pane_g1

0xf346,	// (0x0001a163) cell_ituss_key_pane_g2_ParamLimits

0xf346,	// (0x0001a163) cell_ituss_key_pane_g2

0x0001,

0xfeea,	// (0x0001ad07) cell_ituss_key_pane_g_ParamLimits

0xfeea,	// (0x0001ad07) cell_ituss_key_pane_g

0xf374,	// (0x0001a191) cell_ituss_key_t1_ParamLimits

0xf374,	// (0x0001a191) cell_ituss_key_t1

0xf3aa,	// (0x0001a1c7) cell_ituss_key_t2_ParamLimits

0xf3aa,	// (0x0001a1c7) cell_ituss_key_t2

0xf3db,	// (0x0001a1f8) cell_ituss_key_t3_ParamLimits

0xf3db,	// (0x0001a1f8) cell_ituss_key_t3

0xf415,	// (0x0001a232) cell_ituss_key_t4_ParamLimits

0xf415,	// (0x0001a232) cell_ituss_key_t4

0x0003,

0xfeef,	// (0x0001ad0c) cell_ituss_key_t_ParamLimits

0xfeef,	// (0x0001ad0c) cell_ituss_key_t

0xf44f,	// (0x0001a26c) cell_vkbss_key_3p_pane_g1

0xf457,	// (0x0001a274) cell_vkbss_key_3p_pane_g2

0xf45f,	// (0x0001a27c) cell_vkbss_key_3p_pane_g3

0x0002,

0xfef8,	// (0x0001ad15) cell_vkbss_key_3p_pane_g

0x6cc5,	// (0x00011ae2) bg_popup_fep_char_preview_window_cp02

0xf467,	// (0x0001a284) popup_fep_char_pre_window_t1

0xe71b,	// (0x00019538) main_ai5_sk_pane

0xee80,	// (0x00019c9d) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xee8c,	// (0x00019ca9) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xeea0,	// (0x00019cbd) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xeeac,	// (0x00019cc9) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfece,	// (0x0001aceb) cell_contacts_ai5_widget_pane_g_ParamLimits

0xeebf,	// (0x00019cdc) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x7bc4,	// (0x000129e1) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf476,	// (0x0001a293) main_ai5_sk_pane_g1

0x986e,	// (0x0001468b) popup_query_code_window_g1

0x6c38,	// (0x00011a55) popup_fep_vkb_icf_pane

0x6c4c,	// (0x00011a69) popup_fep_vtchi_icf_pane

0x7bc4,	// (0x000129e1) bg_icf_pane

0xf47f,	// (0x0001a29c) list_vkb_icf_pane

0x7bc4,	// (0x000129e1) bg_icf_pane_cp01

0xf48b,	// (0x0001a2a8) vtchi_icf_list_pane

0xf49c,	// (0x0001a2b9) list_vkb_icf_pane_t1_ParamLimits

0xf49c,	// (0x0001a2b9) list_vkb_icf_pane_t1

0xf4b2,	// (0x0001a2cf) vtchi_icf_list_pane_t1_ParamLimits

0xf4b2,	// (0x0001a2cf) vtchi_icf_list_pane_t1

0x6c22,	// (0x00011a3f) popup_fep_ituss_window_ParamLimits

0x6c4c,	// (0x00011a69) popup_fep_vtchi_icf_pane_ParamLimits

0xf2a5,	// (0x0001a0c2) ituss_keypad_pane_ParamLimits

0x6c62,	// (0x00011a7f) ituss_sks_pane

0x7bc4,	// (0x000129e1) bg_icf_pane_ParamLimits

0x6c0b,	// (0x00011a28) icf_edit_indi_pane_ParamLimits

0x6c0b,	// (0x00011a28) icf_edit_indi_pane

0xf47f,	// (0x0001a29c) list_vkb_icf_pane_ParamLimits

0x7bc4,	// (0x000129e1) bg_icf_pane_cp01_ParamLimits

0x6c0b,	// (0x00011a28) icf_edit_indi_pane_cp01_ParamLimits

0x6c0b,	// (0x00011a28) icf_edit_indi_pane_cp01

0xf493,	// (0x0001a2b0) vtchi_query_pane

0xc06e,	// (0x00016e8b) icf_edit_indi_pane_g1_ParamLimits

0xc06e,	// (0x00016e8b) icf_edit_indi_pane_g1

0xf537,	// (0x0001a354) icf_edit_indi_pane_g2_ParamLimits

0xf537,	// (0x0001a354) icf_edit_indi_pane_g2

0x0001,

0xff10,	// (0x0001ad2d) icf_edit_indi_pane_g_ParamLimits

0xff10,	// (0x0001ad2d) icf_edit_indi_pane_g

0xf546,	// (0x0001a363) icf_edit_indi_pane_t1

0xf4cd,	// (0x0001a2ea) bg_input_focus_pane_cp042

0x756e,	// (0x0001238b) vtchi_button_pane

0xf4d6,	// (0x0001a2f3) vtchi_query_pane_t1

0xf4e4,	// (0x0001a301) vtchi_query_pane_t2

0xf4f2,	// (0x0001a30f) vtchi_query_pane_t3

0x0002,

0xfeff,	// (0x0001ad1c) vtchi_query_pane_t

0x6cc5,	// (0x00011ae2) bg_button_pane_cp13

0xf500,	// (0x0001a31d) vtchi_button_pane_g1

0xf508,	// (0x0001a325) ituss_sks_pane_g1

0xf513,	// (0x0001a330) ituss_sks_pane_g2

0x0001,

0xff06,	// (0x0001ad23) ituss_sks_pane_g

0xf51b,	// (0x0001a338) ituss_sks_pane_t1

0xf529,	// (0x0001a346) ituss_sks_pane_t2

0x0001,

0xff0b,	// (0x0001ad28) ituss_sks_pane_t

0xb818,	// (0x00016635) indicator_nsta_pane_cp_g1

0xb821,	// (0x0001663e) indicator_nsta_pane_cp_g2

0xb829,	// (0x00016646) indicator_nsta_pane_cp_g3

0xb831,	// (0x0001664e) indicator_nsta_pane_cp_g4

0xb831,	// (0x0001664e) indicator_nsta_pane_cp_g5

0xb831,	// (0x0001664e) indicator_nsta_pane_cp_g6

0x0005,

0xfaac,	// (0x0001a8c9) indicator_nsta_pane_cp_g

0xe301,	// (0x0001911e) cell_graphic2_pane_t2_ParamLimits

0xe301,	// (0x0001911e) cell_graphic2_pane_t2

0x0001,

0xfdc5,	// (0x0001abe2) cell_graphic2_pane_t_ParamLimits

0xfdc5,	// (0x0001abe2) cell_graphic2_pane_t

0xe32e,	// (0x0001914b) cell_graphic2_control_pane_t1

0x8480,	// (0x0001329d) signal_pane_g3_ParamLimits

0x8480,	// (0x0001329d) signal_pane_g3

0x8492,	// (0x000132af) signal_pane_g4_ParamLimits

0x8492,	// (0x000132af) signal_pane_g4

0xf27f,	// (0x0001a09c) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf27f,	// (0x0001a09c) cell_ai5_widget_list_row_pane_t3

0xf362,	// (0x0001a17f) cell_ituss_key_pane_t1_ParamLimits

0xf362,	// (0x0001a17f) cell_ituss_key_pane_t1

0x9483,	// (0x000142a0) form_field_data_wide_pane_vc_t2_ParamLimits

0x9483,	// (0x000142a0) form_field_data_wide_pane_vc_t2

0x9497,	// (0x000142b4) form_field_data_wide_pane_vc_t3_ParamLimits

0x9497,	// (0x000142b4) form_field_data_wide_pane_vc_t3

0x0002,

0xf80a,	// (0x0001a627) form_field_data_wide_pane_vc_t_ParamLimits

0xf80a,	// (0x0001a627) form_field_data_wide_pane_vc_t

0xb4d0,	// (0x000162ed) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb4d0,	// (0x000162ed) form_field_slider_wide_pane_vc_t3

0xb5ae,	// (0x000163cb) form_field_popup_wide_pane_vc_t2_ParamLimits

0xb5ae,	// (0x000163cb) form_field_popup_wide_pane_vc_t2

0xb5c5,	// (0x000163e2) form_field_popup_wide_pane_vc_t3_ParamLimits

0xb5c5,	// (0x000163e2) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa9b,	// (0x0001a8b8) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa9b,	// (0x0001a8b8) form_field_popup_wide_pane_vc_t

0x6b1f,	// (0x0001193c) aid_fshwr2_btn_pane_ParamLimits

0x6b2b,	// (0x00011948) aid_fshwr2_syb_pane_ParamLimits

0x6b3c,	// (0x00011959) aid_fshwr2_txt_pane_ParamLimits

0x636f,	// (0x0001118c) fshwr2_bg_pane_ParamLimits

0x6b48,	// (0x00011965) fshwr2_func_candi_pane_ParamLimits

0x6b5d,	// (0x0001197a) fshwr2_hwr_syb_pane_ParamLimits

0x6b74,	// (0x00011991) fshwr2_icf_pane_ParamLimits
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

} // end of namespace AknLayoutScalable_Abrw_php_av_qhd_prt_tch_Normal

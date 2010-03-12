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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0000ac5f };

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
0x6c29,	// (0x00011888) Screen

0x6c3d,	// (0x0001189c) application_window_ParamLimits

0x6c3d,	// (0x0001189c) application_window

0x6c57,	// (0x000118b6) screen_g1

0x4a24,	// (0x0000f683) area_bottom_pane_ParamLimits

0x4a24,	// (0x0000f683) area_bottom_pane

0x4ae4,	// (0x0000f743) area_top_pane_ParamLimits

0x4ae4,	// (0x0000f743) area_top_pane

0x4b82,	// (0x0000f7e1) main_pane_ParamLimits

0x4b82,	// (0x0000f7e1) main_pane

0x6c61,	// (0x000118c0) misc_graphics

0x8d7c,	// (0x000139db) battery_pane_ParamLimits

0x8d7c,	// (0x000139db) battery_pane

0x9b59,	// (0x000147b8) bg_status_flat_pane_g8

0x9b61,	// (0x000147c0) bg_status_flat_pane_g9

0x8e3e,	// (0x00013a9d) context_pane_ParamLimits

0x8e3e,	// (0x00013a9d) context_pane

0x8f54,	// (0x00013bb3) navi_pane_ParamLimits

0x8f54,	// (0x00013bb3) navi_pane

0x8fd2,	// (0x00013c31) signal_pane_ParamLimits

0x8fd2,	// (0x00013c31) signal_pane

0x0008,

0xf87a,	// (0x0001a4d9) bg_status_flat_pane_g

0x903f,	// (0x00013c9e) status_pane_g1_ParamLimits

0x903f,	// (0x00013c9e) status_pane_g1

0x904b,	// (0x00013caa) status_pane_g2_ParamLimits

0x904b,	// (0x00013caa) status_pane_g2

0x9057,	// (0x00013cb6) status_pane_g3_ParamLimits

0x9057,	// (0x00013cb6) status_pane_g3

0x0004,

0xf7a1,	// (0x0001a400) status_pane_g_ParamLimits

0xf7a1,	// (0x0001a400) status_pane_g

0x908b,	// (0x00013cea) title_pane_ParamLimits

0x908b,	// (0x00013cea) title_pane

0x90c8,	// (0x00013d27) uni_indicator_pane_ParamLimits

0x90c8,	// (0x00013d27) uni_indicator_pane

0x8c94,	// (0x000138f3) bg_list_pane_ParamLimits

0x8c94,	// (0x000138f3) bg_list_pane

0x8cb4,	// (0x00013913) find_pane

0x8cbc,	// (0x0001391b) listscroll_app_pane_ParamLimits

0x8cbc,	// (0x0001391b) listscroll_app_pane

0x8cc8,	// (0x00013927) listscroll_form_pane

0x5449,	// (0x000100a8) listscroll_gen_pane_ParamLimits

0x5449,	// (0x000100a8) listscroll_gen_pane

0x8cc8,	// (0x00013927) listscroll_set_pane

0x7e95,	// (0x00012af4) main_idle_act_pane

0x899a,	// (0x000135f9) main_idle_trad_pane

0x899a,	// (0x000135f9) main_list_empty_pane

0x8ce2,	// (0x00013941) main_midp_pane

0x8cee,	// (0x0001394d) main_pane_g1_ParamLimits

0x8cee,	// (0x0001394d) main_pane_g1

0x546b,	// (0x000100ca) popup_ai_message_window_ParamLimits

0x546b,	// (0x000100ca) popup_ai_message_window

0x5511,	// (0x00010170) popup_fep_china_uni_window_ParamLimits

0x5511,	// (0x00010170) popup_fep_china_uni_window

0x556d,	// (0x000101cc) popup_fep_japan_candidate_window_ParamLimits

0x556d,	// (0x000101cc) popup_fep_japan_candidate_window

0x558d,	// (0x000101ec) popup_fep_japan_predictive_window_ParamLimits

0x558d,	// (0x000101ec) popup_fep_japan_predictive_window

0x55bd,	// (0x0001021c) popup_find_window

0x55ca,	// (0x00010229) popup_grid_graphic_window_ParamLimits

0x55ca,	// (0x00010229) popup_grid_graphic_window

0x55f2,	// (0x00010251) popup_large_graphic_colour_window

0x5618,	// (0x00010277) popup_menu_window_ParamLimits

0x5618,	// (0x00010277) popup_menu_window

0x57d0,	// (0x0001042f) popup_note_image_window

0x57bc,	// (0x0001041b) popup_note_wait_window_ParamLimits

0x57bc,	// (0x0001041b) popup_note_wait_window

0x57bc,	// (0x0001041b) popup_note_window_ParamLimits

0x57bc,	// (0x0001041b) popup_note_window

0x5826,	// (0x00010485) popup_query_code_window_ParamLimits

0x5826,	// (0x00010485) popup_query_code_window

0x583a,	// (0x00010499) popup_query_data_code_window_ParamLimits

0x583a,	// (0x00010499) popup_query_data_code_window

0x5857,	// (0x000104b6) popup_query_data_window_ParamLimits

0x5857,	// (0x000104b6) popup_query_data_window

0x5873,	// (0x000104d2) popup_query_sat_info_window_ParamLimits

0x5873,	// (0x000104d2) popup_query_sat_info_window

0x58ac,	// (0x0001050b) popup_snote_single_graphic_window_ParamLimits

0x58ac,	// (0x0001050b) popup_snote_single_graphic_window

0x58ac,	// (0x0001050b) popup_snote_single_text_window_ParamLimits

0x58ac,	// (0x0001050b) popup_snote_single_text_window

0x58c1,	// (0x00010520) popup_sub_window_general

0x59f1,	// (0x00010650) popup_window_general_ParamLimits

0x59f1,	// (0x00010650) popup_window_general

0x8d04,	// (0x00013963) power_save_pane

0x52e1,	// (0x0000ff40) control_pane_g1_ParamLimits

0x52e1,	// (0x0000ff40) control_pane_g1

0x5308,	// (0x0000ff67) control_pane_g2_ParamLimits

0x5308,	// (0x0000ff67) control_pane_g2

0x8c57,	// (0x000138b6) control_pane_g3_ParamLimits

0x8c57,	// (0x000138b6) control_pane_g3

0x0007,

0xf789,	// (0x0001a3e8) control_pane_g_ParamLimits

0xf789,	// (0x0001a3e8) control_pane_g

0x534e,	// (0x0000ffad) control_pane_t1_ParamLimits

0x534e,	// (0x0000ffad) control_pane_t1

0x539a,	// (0x0000fff9) control_pane_t2_ParamLimits

0x539a,	// (0x0000fff9) control_pane_t2

0x0002,

0xf79a,	// (0x0001a3f9) control_pane_t_ParamLimits

0xf79a,	// (0x0001a3f9) control_pane_t

0x8b78,	// (0x000137d7) navi_navi_volume_pane_cp1

0x8b81,	// (0x000137e0) status_small_icon_pane

0x8b89,	// (0x000137e8) status_small_pane_g1_ParamLimits

0x8b89,	// (0x000137e8) status_small_pane_g1

0x8bbd,	// (0x0001381c) status_small_pane_g2_ParamLimits

0x8bbd,	// (0x0001381c) status_small_pane_g2

0x8bc9,	// (0x00013828) status_small_pane_g3_ParamLimits

0x8bc9,	// (0x00013828) status_small_pane_g3

0x8bd5,	// (0x00013834) status_small_pane_g4_ParamLimits

0x8bd5,	// (0x00013834) status_small_pane_g4

0x8be1,	// (0x00013840) status_small_pane_g5_ParamLimits

0x8be1,	// (0x00013840) status_small_pane_g5

0x8bf0,	// (0x0001384f) status_small_pane_g6_ParamLimits

0x8bf0,	// (0x0001384f) status_small_pane_g6

0x0007,

0xf778,	// (0x0001a3d7) status_small_pane_g_ParamLimits

0xf778,	// (0x0001a3d7) status_small_pane_g

0x8c20,	// (0x0001387f) status_small_pane_t1

0x8c43,	// (0x000138a2) status_small_wait_pane_ParamLimits

0x8c43,	// (0x000138a2) status_small_wait_pane

0x838e,	// (0x00012fed) aid_levels_signal_ParamLimits

0x838e,	// (0x00012fed) aid_levels_signal

0x839d,	// (0x00012ffc) signal_pane_g1_ParamLimits

0x839d,	// (0x00012ffc) signal_pane_g1

0x83b2,	// (0x00013011) signal_pane_g2_ParamLimits

0x83b2,	// (0x00013011) signal_pane_g2

0x0003,

0xf709,	// (0x0001a368) signal_pane_g_ParamLimits

0xf709,	// (0x0001a368) signal_pane_g

0x83ea,	// (0x00013049) context_pane_g1

0x6c6b,	// (0x000118ca) title_pane_g1

0x6ca1,	// (0x00011900) title_pane_t1

0x6d09,	// (0x00011968) title_pane_t2

0x6d2f,	// (0x0001198e) title_pane_t3

0x0002,

0xf55d,	// (0x0001a1bc) title_pane_t

0x90e0,	// (0x00013d3f) aid_levels_battery_ParamLimits

0x90e0,	// (0x00013d3f) aid_levels_battery

0x90f1,	// (0x00013d50) battery_pane_g1_ParamLimits

0x90f1,	// (0x00013d50) battery_pane_g1

0x9107,	// (0x00013d66) battery_pane_g2_ParamLimits

0x9107,	// (0x00013d66) battery_pane_g2

0x0001,

0xf7ac,	// (0x0001a40b) battery_pane_g_ParamLimits

0xf7ac,	// (0x0001a40b) battery_pane_g

0xa48f,	// (0x000150ee) uni_indicator_pane_g1

0xa4a4,	// (0x00015103) uni_indicator_pane_g2

0xa4ba,	// (0x00015119) uni_indicator_pane_g3

0x0005,

0xf922,	// (0x0001a581) uni_indicator_pane_g

0x880c,	// (0x0001346b) navi_icon_pane_ParamLimits

0x880c,	// (0x0001346b) navi_icon_pane

0x8755,	// (0x000133b4) navi_midp_pane

0x8828,	// (0x00013487) navi_navi_pane

0x8832,	// (0x00013491) navi_text_pane_ParamLimits

0x8832,	// (0x00013491) navi_text_pane

0x6c57,	// (0x000118b6) status_small_wait_pane_g1

0x7178,	// (0x00011dd7) status_small_wait_pane_g2

0x0001,

0xf91d,	// (0x0001a57c) status_small_wait_pane_g

0xa1b4,	// (0x00014e13) navi_navi_icon_text_pane

0xa1bc,	// (0x00014e1b) navi_navi_pane_g1_ParamLimits

0xa1bc,	// (0x00014e1b) navi_navi_pane_g1

0xa1ce,	// (0x00014e2d) navi_navi_pane_g2_ParamLimits

0xa1ce,	// (0x00014e2d) navi_navi_pane_g2

0x0001,

0xf8eb,	// (0x0001a54a) navi_navi_pane_g_ParamLimits

0xf8eb,	// (0x0001a54a) navi_navi_pane_g

0xa1e0,	// (0x00014e3f) navi_navi_tabs_pane

0xa1e9,	// (0x00014e48) navi_navi_text_pane

0xa1b4,	// (0x00014e13) navi_navi_volume_pane

0xa190,	// (0x00014def) navi_text_pane_t1

0xa184,	// (0x00014de3) navi_icon_pane_g1

0xa0d7,	// (0x00014d36) navi_navi_text_pane_t1

0x5d09,	// (0x00010968) navi_navi_volume_pane_g1

0x5d11,	// (0x00010970) volume_small_pane

0xa03d,	// (0x00014c9c) navi_navi_icon_text_pane_g1

0xa045,	// (0x00014ca4) navi_navi_icon_text_pane_t1

0x8828,	// (0x00013487) navi_tabs_2_long_pane

0x8828,	// (0x00013487) navi_tabs_2_pane

0x8828,	// (0x00013487) navi_tabs_3_long_pane

0x8828,	// (0x00013487) navi_tabs_3_pane

0x8828,	// (0x00013487) navi_tabs_4_pane

0x5ce9,	// (0x00010948) tabs_2_active_pane_ParamLimits

0x5ce9,	// (0x00010948) tabs_2_active_pane

0x5cf9,	// (0x00010958) tabs_2_passive_pane_ParamLimits

0x5cf9,	// (0x00010958) tabs_2_passive_pane

0x5cb7,	// (0x00010916) tabs_3_active_pane_ParamLimits

0x5cb7,	// (0x00010916) tabs_3_active_pane

0x5cc7,	// (0x00010926) tabs_3_passive_pane_ParamLimits

0x5cc7,	// (0x00010926) tabs_3_passive_pane

0x5cd8,	// (0x00010937) tabs_3_passive_pane_cp_ParamLimits

0x5cd8,	// (0x00010937) tabs_3_passive_pane_cp

0x5c73,	// (0x000108d2) tabs_4_active_pane_ParamLimits

0x5c73,	// (0x000108d2) tabs_4_active_pane

0x5c84,	// (0x000108e3) tabs_4_passive_pane_ParamLimits

0x5c84,	// (0x000108e3) tabs_4_passive_pane

0x5c95,	// (0x000108f4) tabs_4_passive_pane_cp_ParamLimits

0x5c95,	// (0x000108f4) tabs_4_passive_pane_cp

0x5ca6,	// (0x00010905) tabs_4_passive_pane_cp2_ParamLimits

0x5ca6,	// (0x00010905) tabs_4_passive_pane_cp2

0x5c4f,	// (0x000108ae) tabs_2_long_active_pane_ParamLimits

0x5c4f,	// (0x000108ae) tabs_2_long_active_pane

0x5c61,	// (0x000108c0) tabs_2_long_passive_pane_ParamLimits

0x5c61,	// (0x000108c0) tabs_2_long_passive_pane

0x5c10,	// (0x0001086f) tabs_3_long_active_pane_ParamLimits

0x5c10,	// (0x0001086f) tabs_3_long_active_pane

0x5c23,	// (0x00010882) tabs_3_long_passive_pane_ParamLimits

0x5c23,	// (0x00010882) tabs_3_long_passive_pane

0x5c3c,	// (0x0001089b) tabs_3_long_passive_pane_cp_ParamLimits

0x5c3c,	// (0x0001089b) tabs_3_long_passive_pane_cp

0x5bb6,	// (0x00010815) volume_small_pane_g1

0x5bbf,	// (0x0001081e) volume_small_pane_g2

0x5bc8,	// (0x00010827) volume_small_pane_g3

0x5bd1,	// (0x00010830) volume_small_pane_g4

0x5bda,	// (0x00010839) volume_small_pane_g5

0x5be3,	// (0x00010842) volume_small_pane_g6

0x5bec,	// (0x0001084b) volume_small_pane_g7

0x5bf5,	// (0x00010854) volume_small_pane_g8

0x5bfe,	// (0x0001085d) volume_small_pane_g9

0x5c07,	// (0x00010866) volume_small_pane_g10

0x0009,

0xf8b7,	// (0x0001a516) volume_small_pane_g

0x6d41,	// (0x000119a0) bg_active_tab_pane_cp2_ParamLimits

0x6d41,	// (0x000119a0) bg_active_tab_pane_cp2

0x6d4f,	// (0x000119ae) tabs_3_active_pane_g1

0x6d57,	// (0x000119b6) tabs_3_active_pane_t1

0x6d41,	// (0x000119a0) bg_passive_tab_pane_cp2_ParamLimits

0x6d41,	// (0x000119a0) bg_passive_tab_pane_cp2

0x6d4f,	// (0x000119ae) tabs_3_passive_pane_g1

0x6d57,	// (0x000119b6) tabs_3_passive_pane_t1

0x6d41,	// (0x000119a0) bg_active_tab_pane_cp3_ParamLimits

0x6d41,	// (0x000119a0) bg_active_tab_pane_cp3

0x6d69,	// (0x000119c8) tabs_4_active_pane_g1

0x6d71,	// (0x000119d0) tabs_4_active_pane_t1

0x6d41,	// (0x000119a0) bg_passive_tab_pane_cp3_ParamLimits

0x6d41,	// (0x000119a0) bg_passive_tab_pane_cp3

0x6d69,	// (0x000119c8) tabs_4_1_passive_pane_g1

0x6d71,	// (0x000119d0) tabs_4_1_passive_pane_t1

0x8ce2,	// (0x00013941) list_highlight_pane_cp2

0xa740,	// (0x0001539f) list_set_pane_ParamLimits

0xa740,	// (0x0001539f) list_set_pane

0xa7e6,	// (0x00015445) main_pane_set_t1_ParamLimits

0xa7e6,	// (0x00015445) main_pane_set_t1

0xa806,	// (0x00015465) main_pane_set_t2_ParamLimits

0xa806,	// (0x00015465) main_pane_set_t2

0xa81a,	// (0x00015479) main_pane_set_t3_ParamLimits

0xa81a,	// (0x00015479) main_pane_set_t3

0xa82c,	// (0x0001548b) main_pane_set_t4_ParamLimits

0xa82c,	// (0x0001548b) main_pane_set_t4

0x0003,

0xf987,	// (0x0001a5e6) main_pane_set_t_ParamLimits

0xf987,	// (0x0001a5e6) main_pane_set_t

0xa83e,	// (0x0001549d) setting_code_pane

0xa88c,	// (0x000154eb) setting_slider_graphic_pane

0xa88c,	// (0x000154eb) setting_slider_pane

0xa88c,	// (0x000154eb) setting_text_pane

0xa88c,	// (0x000154eb) setting_volume_pane

0x4dc7,	// (0x0000fa26) volume_set_pane

0x6d41,	// (0x000119a0) bg_set_opt_pane_cp

0x4dcf,	// (0x0000fa2e) setting_slider_pane_t1

0x4de8,	// (0x0000fa47) setting_slider_pane_t2

0x4e02,	// (0x0000fa61) setting_slider_pane_t3

0x0002,

0xf564,	// (0x0001a1c3) setting_slider_pane_t

0x4e1a,	// (0x0000fa79) slider_set_pane

0x6c61,	// (0x000118c0) bg_set_opt_pane_cp2

0x6d83,	// (0x000119e2) setting_slider_graphic_pane_g1

0x4e30,	// (0x0000fa8f) setting_slider_graphic_pane_t1

0x4e40,	// (0x0000fa9f) setting_slider_graphic_pane_t2

0x0001,

0xf56b,	// (0x0001a1ca) setting_slider_graphic_pane_t

0x4e50,	// (0x0000faaf) slider_set_pane_cp

0x6c61,	// (0x000118c0) input_focus_pane_cp1

0xa6ff,	// (0x0001535e) list_set_text_pane

0x6c57,	// (0x000118b6) setting_text_pane_g1

0x6c61,	// (0x000118c0) input_focus_pane_cp2

0x6c57,	// (0x000118b6) setting_code_pane_g1

0x6d8c,	// (0x000119eb) setting_code_pane_t1

0x6d9a,	// (0x000119f9) set_text_pane_t1_ParamLimits

0x6d9a,	// (0x000119f9) set_text_pane_t1

0x7c60,	// (0x000128bf) set_opt_bg_pane_g1

0x7c68,	// (0x000128c7) set_opt_bg_pane_g2

0xa6d9,	// (0x00015338) set_opt_bg_pane_g3

0x7c78,	// (0x000128d7) set_opt_bg_pane_g4

0x7c80,	// (0x000128df) set_opt_bg_pane_g5

0x7c88,	// (0x000128e7) set_opt_bg_pane_g6

0xa6e3,	// (0x00015342) set_opt_bg_pane_g7

0xa6eb,	// (0x0001534a) set_opt_bg_pane_g8

0xa6f5,	// (0x00015354) set_opt_bg_pane_g9

0x0008,

0xf974,	// (0x0001a5d3) set_opt_bg_pane_g

0xa6cc,	// (0x0001532b) slider_set_pane_g1

0x5d7e,	// (0x000109dd) slider_set_pane_g2

0x0006,

0xf965,	// (0x0001a5c4) slider_set_pane_g

0x5d1a,	// (0x00010979) volume_set_pane_g1

0x5d22,	// (0x00010981) volume_set_pane_g2

0x5d2a,	// (0x00010989) volume_set_pane_g3

0x5d32,	// (0x00010991) volume_set_pane_g4

0x5d3a,	// (0x00010999) volume_set_pane_g5

0x5d42,	// (0x000109a1) volume_set_pane_g6

0x5d4a,	// (0x000109a9) volume_set_pane_g7

0x5d52,	// (0x000109b1) volume_set_pane_g8

0x5d5a,	// (0x000109b9) volume_set_pane_g9

0x5d62,	// (0x000109c1) volume_set_pane_g10

0x0009,

0xf93d,	// (0x0001a59c) volume_set_pane_g

0x6db4,	// (0x00011a13) indicator_pane_ParamLimits

0x6db4,	// (0x00011a13) indicator_pane

0x6dc0,	// (0x00011a1f) main_idle_pane_g2_ParamLimits

0x6dc0,	// (0x00011a1f) main_idle_pane_g2

0x6de8,	// (0x00011a47) main_pane_idle_g1_ParamLimits

0x6de8,	// (0x00011a47) main_pane_idle_g1

0x6df5,	// (0x00011a54) popup_clock_digital_analogue_window_ParamLimits

0x6df5,	// (0x00011a54) popup_clock_digital_analogue_window

0x6e0c,	// (0x00011a6b) soft_indicator_pane_ParamLimits

0x6e0c,	// (0x00011a6b) soft_indicator_pane

0x6e18,	// (0x00011a77) wallpaper_pane_ParamLimits

0x6e18,	// (0x00011a77) wallpaper_pane

0x6c57,	// (0x000118b6) wallpaper_pane_g1

0x6e2c,	// (0x00011a8b) indicator_pane_g1_ParamLimits

0x6e2c,	// (0x00011a8b) indicator_pane_g1

0xabf2,	// (0x00015851) navi_navi_icon_text_pane_srt_g1

0x6e47,	// (0x00011aa6) soft_indicator_pane_t1

0x6e61,	// (0x00011ac0) aid_ps_area_pane

0x6e72,	// (0x00011ad1) aid_ps_clock_pane

0x6e80,	// (0x00011adf) aid_ps_indicator_pane

0x6e8c,	// (0x00011aeb) indicator_ps_pane_ParamLimits

0x6e8c,	// (0x00011aeb) indicator_ps_pane

0x6e9b,	// (0x00011afa) power_save_pane_g1_ParamLimits

0x6e9b,	// (0x00011afa) power_save_pane_g1

0x6ea7,	// (0x00011b06) power_save_pane_g2_ParamLimits

0x6ea7,	// (0x00011b06) power_save_pane_g2

0x49d8,	// (0x0000f637) aid_navinavi_width_pane

0x6e61,	// (0x00011ac0) aid_ps_area_pane_ParamLimits

0x0001,

0xf570,	// (0x0001a1cf) power_save_pane_g_ParamLimits

0xf570,	// (0x0001a1cf) power_save_pane_g

0x6eb5,	// (0x00011b14) power_save_pane_t1_ParamLimits

0x6eb5,	// (0x00011b14) power_save_pane_t1

0x6e72,	// (0x00011ad1) aid_ps_clock_pane_ParamLimits

0x6e80,	// (0x00011adf) aid_ps_indicator_pane_ParamLimits

0x6ec7,	// (0x00011b26) power_save_pane_t4_ParamLimits

0x6ec7,	// (0x00011b26) power_save_pane_t4

0x0001,

0xf575,	// (0x0001a1d4) power_save_pane_t_ParamLimits

0xf575,	// (0x0001a1d4) power_save_pane_t

0x6ef1,	// (0x00011b50) power_save_t3_ParamLimits

0x6ef1,	// (0x00011b50) power_save_t3

0x6edc,	// (0x00011b3b) power_save_t2_ParamLimits

0x6edc,	// (0x00011b3b) power_save_t2

0x6f06,	// (0x00011b65) indicator_ps_pane_g1

0x6f0f,	// (0x00011b6e) ai_gene_pane_ParamLimits

0x6f0f,	// (0x00011b6e) ai_gene_pane

0x6f1b,	// (0x00011b7a) ai_links_pane_ParamLimits

0x6f1b,	// (0x00011b7a) ai_links_pane

0x6f27,	// (0x00011b86) indicator_pane_cp1_ParamLimits

0x6f27,	// (0x00011b86) indicator_pane_cp1

0x6f33,	// (0x00011b92) main_pane_idle_g1_cp_ParamLimits

0x6f33,	// (0x00011b92) main_pane_idle_g1_cp

0x6f3f,	// (0x00011b9e) popup_ai_links_title_window

0x6f48,	// (0x00011ba7) soft_indicator_pane_cp1_ParamLimits

0x6f48,	// (0x00011ba7) soft_indicator_pane_cp1

0xa47d,	// (0x000150dc) ai_links_pane_g1

0xa486,	// (0x000150e5) grid_ai_links_pane

0xa460,	// (0x000150bf) ai_gene_pane_1

0xa46b,	// (0x000150ca) ai_gene_pane_2

0xa474,	// (0x000150d3) list_highlight_pane_cp4

0xa444,	// (0x000150a3) cell_ai_link_pane_ParamLimits

0xa444,	// (0x000150a3) cell_ai_link_pane

0xa43c,	// (0x0001509b) cell_ai_link_pane_g1

0x7178,	// (0x00011dd7) cell_ai_link_pane_g2

0x0001,

0xf918,	// (0x0001a577) cell_ai_link_pane_g

0x6c61,	// (0x000118c0) grid_highlight_cp2

0x6c61,	// (0x000118c0) bg_popup_sub_pane_cp1

0x6f62,	// (0x00011bc1) popup_ai_links_title_window_t1

0xa38a,	// (0x00014fe9) ai_gene_pane_1_g1_ParamLimits

0xa38a,	// (0x00014fe9) ai_gene_pane_1_g1

0xa396,	// (0x00014ff5) ai_gene_pane_1_g2_ParamLimits

0xa396,	// (0x00014ff5) ai_gene_pane_1_g2

0x0001,

0xf90e,	// (0x0001a56d) ai_gene_pane_1_g_ParamLimits

0xf90e,	// (0x0001a56d) ai_gene_pane_1_g

0xa3a3,	// (0x00015002) ai_gene_pane_1_t1_ParamLimits

0xa3a3,	// (0x00015002) ai_gene_pane_1_t1

0xa3d7,	// (0x00015036) grid_ai_soft_ind_pane

0xa375,	// (0x00014fd4) ai_gene_pane_2_t1_ParamLimits

0xa375,	// (0x00014fd4) ai_gene_pane_2_t1

0x6f71,	// (0x00011bd0) main_pane_empty_t1_ParamLimits

0x6f71,	// (0x00011bd0) main_pane_empty_t1

0x6f89,	// (0x00011be8) main_pane_empty_t2_ParamLimits

0x6f89,	// (0x00011be8) main_pane_empty_t2

0x6f9e,	// (0x00011bfd) main_pane_empty_t3_ParamLimits

0x6f9e,	// (0x00011bfd) main_pane_empty_t3

0x6fb0,	// (0x00011c0f) main_pane_empty_t4_ParamLimits

0x6fb0,	// (0x00011c0f) main_pane_empty_t4

0x6fc2,	// (0x00011c21) main_pane_empty_t5_ParamLimits

0x6fc2,	// (0x00011c21) main_pane_empty_t5

0x0004,

0xf57a,	// (0x0001a1d9) main_pane_empty_t_ParamLimits

0xf57a,	// (0x0001a1d9) main_pane_empty_t

0x7d5d,	// (0x000129bc) bg_popup_window_pane_ParamLimits

0x7d5d,	// (0x000129bc) bg_popup_window_pane

0xa0e5,	// (0x00014d44) find_popup_pane_cp2_ParamLimits

0xa0e5,	// (0x00014d44) find_popup_pane_cp2

0xa0f1,	// (0x00014d50) heading_pane_ParamLimits

0xa0f1,	// (0x00014d50) heading_pane

0x6c61,	// (0x000118c0) bg_popup_sub_pane

0xa05f,	// (0x00014cbe) bg_popup_window_pane_g1_ParamLimits

0xa05f,	// (0x00014cbe) bg_popup_window_pane_g1

0xa06b,	// (0x00014cca) bg_popup_window_pane_g2_ParamLimits

0xa06b,	// (0x00014cca) bg_popup_window_pane_g2

0xa077,	// (0x00014cd6) bg_popup_window_pane_g3_ParamLimits

0xa077,	// (0x00014cd6) bg_popup_window_pane_g3

0xa083,	// (0x00014ce2) bg_popup_window_pane_g4_ParamLimits

0xa083,	// (0x00014ce2) bg_popup_window_pane_g4

0xa08f,	// (0x00014cee) bg_popup_window_pane_g5_ParamLimits

0xa08f,	// (0x00014cee) bg_popup_window_pane_g5

0xa09b,	// (0x00014cfa) bg_popup_window_pane_g6_ParamLimits

0xa09b,	// (0x00014cfa) bg_popup_window_pane_g6

0xa0a7,	// (0x00014d06) bg_popup_window_pane_g7_ParamLimits

0xa0a7,	// (0x00014d06) bg_popup_window_pane_g7

0xa0b3,	// (0x00014d12) bg_popup_window_pane_g8_ParamLimits

0xa0b3,	// (0x00014d12) bg_popup_window_pane_g8

0xa0bf,	// (0x00014d1e) bg_popup_window_pane_g9_ParamLimits

0xa0bf,	// (0x00014d1e) bg_popup_window_pane_g9

0xa0cb,	// (0x00014d2a) bg_popup_window_pane_g10_ParamLimits

0xa0cb,	// (0x00014d2a) bg_popup_window_pane_g10

0x0009,

0xf8d6,	// (0x0001a535) bg_popup_window_pane_g_ParamLimits

0xf8d6,	// (0x0001a535) bg_popup_window_pane_g

0x9ff4,	// (0x00014c53) bg_popup_heading_pane_ParamLimits

0x9ff4,	// (0x00014c53) bg_popup_heading_pane

0x5e06,	// (0x00010a65) tabs_4_passive_pane_cp_srt_ParamLimits

0x5e06,	// (0x00010a65) tabs_4_passive_pane_cp_srt

0x5e18,	// (0x00010a77) tabs_4_passive_pane_srt_ParamLimits

0xa008,	// (0x00014c67) heading_pane_g2

0x5e18,	// (0x00010a77) tabs_4_passive_pane_srt

0x8ce2,	// (0x00013941) bg_passive_tab_pane_cp3_srt_ParamLimits

0x8ce2,	// (0x00013941) bg_passive_tab_pane_cp3_srt

0xa010,	// (0x00014c6f) heading_pane_t1_ParamLimits

0xa010,	// (0x00014c6f) heading_pane_t1

0xa027,	// (0x00014c86) heading_pane_t2_ParamLimits

0xa027,	// (0x00014c86) heading_pane_t2

0x0001,

0xf8d1,	// (0x0001a530) heading_pane_t_ParamLimits

0xf8d1,	// (0x0001a530) heading_pane_t

0x9b21,	// (0x00014780) bg_popup_heading_pane_g1

0x9bd0,	// (0x0001482f) bg_popup_heading_pane_g2

0x9bda,	// (0x00014839) bg_popup_heading_pane_g3

0x9be4,	// (0x00014843) bg_popup_heading_pane_g4

0x9bee,	// (0x0001484d) bg_popup_heading_pane_g5

0x9bf8,	// (0x00014857) bg_popup_heading_pane_g6

0x9c00,	// (0x0001485f) bg_popup_heading_pane_g7

0x9c08,	// (0x00014867) bg_popup_heading_pane_g8

0x9c12,	// (0x00014871) bg_popup_heading_pane_g9

0x0008,

0xf88d,	// (0x0001a4ec) bg_popup_heading_pane_g

0x9219,	// (0x00013e78) bg_popup_sub_pane_g1

0x9229,	// (0x00013e88) bg_popup_sub_pane_g2

0x9221,	// (0x00013e80) bg_popup_sub_pane_g3

0x9239,	// (0x00013e98) bg_popup_sub_pane_g4

0x9231,	// (0x00013e90) bg_popup_sub_pane_g5

0x9241,	// (0x00013ea0) bg_popup_sub_pane_g6

0x9249,	// (0x00013ea8) bg_popup_sub_pane_g7

0x9259,	// (0x00013eb8) bg_popup_sub_pane_g8

0x9251,	// (0x00013eb0) bg_popup_sub_pane_g9

0x0008,

0xf867,	// (0x0001a4c6) bg_popup_sub_pane_g

0x6fd6,	// (0x00011c35) bg_popup_window_pane_cp5_ParamLimits

0x6fd6,	// (0x00011c35) bg_popup_window_pane_cp5

0x6ff2,	// (0x00011c51) popup_note_window_g1_ParamLimits

0x6ff2,	// (0x00011c51) popup_note_window_g1

0x6ffe,	// (0x00011c5d) popup_note_window_t1_ParamLimits

0x6ffe,	// (0x00011c5d) popup_note_window_t1

0x7014,	// (0x00011c73) popup_note_window_t2_ParamLimits

0x7014,	// (0x00011c73) popup_note_window_t2

0x702a,	// (0x00011c89) popup_note_window_t3_ParamLimits

0x702a,	// (0x00011c89) popup_note_window_t3

0x7040,	// (0x00011c9f) popup_note_window_t4_ParamLimits

0x7040,	// (0x00011c9f) popup_note_window_t4

0x7068,	// (0x00011cc7) popup_note_window_t5_ParamLimits

0x7068,	// (0x00011cc7) popup_note_window_t5

0x0004,

0xf585,	// (0x0001a1e4) popup_note_window_t_ParamLimits

0xf585,	// (0x0001a1e4) popup_note_window_t

0x708c,	// (0x00011ceb) bg_popup_window_pane_cp6_ParamLimits

0x708c,	// (0x00011ceb) bg_popup_window_pane_cp6

0x9a9d,	// (0x000146fc) popup_note_image_window_g1_ParamLimits

0x9a9d,	// (0x000146fc) popup_note_image_window_g1

0x9aa9,	// (0x00014708) popup_note_image_window_g2_ParamLimits

0x9aa9,	// (0x00014708) popup_note_image_window_g2

0x0001,

0xf85b,	// (0x0001a4ba) popup_note_image_window_g_ParamLimits

0xf85b,	// (0x0001a4ba) popup_note_image_window_g

0x9ac2,	// (0x00014721) popup_note_image_window_t1_ParamLimits

0x9ac2,	// (0x00014721) popup_note_image_window_t1

0x9adb,	// (0x0001473a) popup_note_image_window_t2_ParamLimits

0x9adb,	// (0x0001473a) popup_note_image_window_t2

0x9af4,	// (0x00014753) popup_note_image_window_t3_ParamLimits

0x9af4,	// (0x00014753) popup_note_image_window_t3

0x0002,

0xf860,	// (0x0001a4bf) popup_note_image_window_t_ParamLimits

0xf860,	// (0x0001a4bf) popup_note_image_window_t

0x995e,	// (0x000145bd) bg_popup_window_pane_cp7_ParamLimits

0x995e,	// (0x000145bd) bg_popup_window_pane_cp7

0x998e,	// (0x000145ed) popup_note_wait_window_g1_ParamLimits

0x998e,	// (0x000145ed) popup_note_wait_window_g1

0x999a,	// (0x000145f9) popup_note_wait_window_g2_ParamLimits

0x999a,	// (0x000145f9) popup_note_wait_window_g2

0x0002,

0xf849,	// (0x0001a4a8) popup_note_wait_window_g_ParamLimits

0xf849,	// (0x0001a4a8) popup_note_wait_window_g

0x99b2,	// (0x00014611) popup_note_wait_window_t1_ParamLimits

0x99b2,	// (0x00014611) popup_note_wait_window_t1

0x99d9,	// (0x00014638) popup_note_wait_window_t2_ParamLimits

0x99d9,	// (0x00014638) popup_note_wait_window_t2

0x99f6,	// (0x00014655) popup_note_wait_window_t3_ParamLimits

0x99f6,	// (0x00014655) popup_note_wait_window_t3

0x9a09,	// (0x00014668) popup_note_wait_window_t4_ParamLimits

0x9a09,	// (0x00014668) popup_note_wait_window_t4

0x0004,

0xf850,	// (0x0001a4af) popup_note_wait_window_t_ParamLimits

0xf850,	// (0x0001a4af) popup_note_wait_window_t

0x9a2e,	// (0x0001468d) wait_bar_pane_ParamLimits

0x9a2e,	// (0x0001468d) wait_bar_pane

0x6c61,	// (0x000118c0) wait_anim_pane

0x6c61,	// (0x000118c0) wait_border_pane

0x6c57,	// (0x000118b6) wait_anim_pane_g1

0x6c57,	// (0x000118b6) wait_anim_pane_g2

0x0001,

0xf704,	// (0x0001a363) wait_anim_pane_g

0x9902,	// (0x00014561) wait_border_pane_g1

0x990d,	// (0x0001456c) wait_border_pane_g2

0x9916,	// (0x00014575) wait_border_pane_g3

0x0002,

0xf842,	// (0x0001a4a1) wait_border_pane_g

0x976d,	// (0x000143cc) bg_popup_window_pane_cp16_ParamLimits

0x976d,	// (0x000143cc) bg_popup_window_pane_cp16

0x986d,	// (0x000144cc) indicator_popup_pane_cp4_ParamLimits

0x986d,	// (0x000144cc) indicator_popup_pane_cp4

0x9881,	// (0x000144e0) popup_query_data_window_t1_ParamLimits

0x9881,	// (0x000144e0) popup_query_data_window_t1

0x9893,	// (0x000144f2) popup_query_data_window_t2_ParamLimits

0x9893,	// (0x000144f2) popup_query_data_window_t2

0x98ac,	// (0x0001450b) popup_query_data_window_t3_ParamLimits

0x98ac,	// (0x0001450b) popup_query_data_window_t3

0x0002,

0xf83b,	// (0x0001a49a) popup_query_data_window_t_ParamLimits

0xf83b,	// (0x0001a49a) popup_query_data_window_t

0x98c6,	// (0x00014525) query_popup_data_pane_ParamLimits

0x98c6,	// (0x00014525) query_popup_data_pane

0x98da,	// (0x00014539) query_popup_data_pane_cp1_ParamLimits

0x98da,	// (0x00014539) query_popup_data_pane_cp1

0x976d,	// (0x000143cc) bg_popup_window_pane_cp10_ParamLimits

0x976d,	// (0x000143cc) bg_popup_window_pane_cp10

0x979f,	// (0x000143fe) indicator_popup_pane_ParamLimits

0x979f,	// (0x000143fe) indicator_popup_pane

0x97c1,	// (0x00014420) popup_query_code_window_t1_ParamLimits

0x97c1,	// (0x00014420) popup_query_code_window_t1

0x97db,	// (0x0001443a) popup_query_code_window_t2_ParamLimits

0x97db,	// (0x0001443a) popup_query_code_window_t2

0x9824,	// (0x00014483) popup_query_code_window_t3_ParamLimits

0x9824,	// (0x00014483) popup_query_code_window_t3

0x0002,

0xf834,	// (0x0001a493) popup_query_code_window_t_ParamLimits

0xf834,	// (0x0001a493) popup_query_code_window_t

0x9853,	// (0x000144b2) query_popup_pane_ParamLimits

0x9853,	// (0x000144b2) query_popup_pane

0x708c,	// (0x00011ceb) bg_popup_window_pane_cp15_ParamLimits

0x708c,	// (0x00011ceb) bg_popup_window_pane_cp15

0x70aa,	// (0x00011d09) indicator_popup_pane_cp1_ParamLimits

0x70aa,	// (0x00011d09) indicator_popup_pane_cp1

0x70bd,	// (0x00011d1c) indicator_popup_pane_cp2_ParamLimits

0x70bd,	// (0x00011d1c) indicator_popup_pane_cp2

0x70d0,	// (0x00011d2f) popup_query_data_code_window_g1_ParamLimits

0x70d0,	// (0x00011d2f) popup_query_data_code_window_g1

0x70e3,	// (0x00011d42) popup_query_data_code_window_t1_ParamLimits

0x70e3,	// (0x00011d42) popup_query_data_code_window_t1

0x70f5,	// (0x00011d54) popup_query_data_code_window_t2_ParamLimits

0x70f5,	// (0x00011d54) popup_query_data_code_window_t2

0x7107,	// (0x00011d66) popup_query_data_code_window_t3_ParamLimits

0x7107,	// (0x00011d66) popup_query_data_code_window_t3

0x711d,	// (0x00011d7c) popup_query_data_code_window_t4_ParamLimits

0x711d,	// (0x00011d7c) popup_query_data_code_window_t4

0x0003,

0xf590,	// (0x0001a1ef) popup_query_data_code_window_t_ParamLimits

0xf590,	// (0x0001a1ef) popup_query_data_code_window_t

0x5ac7,	// (0x00010726) list_single_midp_graphic_pane_g3

0x7135,	// (0x00011d94) query_popup_data_pane_cp2_ParamLimits

0x7148,	// (0x00011da7) query_popup_pane_cp2_ParamLimits

0x7148,	// (0x00011da7) query_popup_pane_cp2

0x6c61,	// (0x000118c0) bg_popup_window_pane_cp11

0x9765,	// (0x000143c4) heading_pane_cp5

0x7230,	// (0x00011e8f) listscroll_popup_info_pane

0x6c61,	// (0x000118c0) input_focus_pane_cp3

0x715b,	// (0x00011dba) query_popup_pane_t1

0x7169,	// (0x00011dc8) list_popup_info_pane_ParamLimits

0x7169,	// (0x00011dc8) list_popup_info_pane

0x7178,	// (0x00011dd7) listscroll_popup_info_pane_g1

0x7180,	// (0x00011ddf) scroll_pane_cp7

0x718a,	// (0x00011de9) popup_info_list_pane_t1_ParamLimits

0x718a,	// (0x00011de9) popup_info_list_pane_t1

0x71a4,	// (0x00011e03) popup_info_list_pane_t2_ParamLimits

0x71a4,	// (0x00011e03) popup_info_list_pane_t2

0x0001,

0xf599,	// (0x0001a1f8) popup_info_list_pane_t_ParamLimits

0xf599,	// (0x0001a1f8) popup_info_list_pane_t

0x6c61,	// (0x000118c0) bg_popup_window_pane_cp12

0xac0c,	// (0x0001586b) find_popup_pane

0x6d41,	// (0x000119a0) bg_popup_window_pane_cp3

0x71be,	// (0x00011e1d) heading_pane_cp3

0x71ca,	// (0x00011e29) listscroll_popup_graphic_pane

0x6c61,	// (0x000118c0) bg_popup_window_pane_cp4

0x7226,	// (0x00011e85) heading_pane_cp4

0x7230,	// (0x00011e8f) listscroll_popup_colour_pane

0x7238,	// (0x00011e97) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x7238,	// (0x00011e97) cell_large_graphic_colour_none_popup_pane

0x724c,	// (0x00011eab) grid_large_graphic_colour_popup_pane_ParamLimits

0x724c,	// (0x00011eab) grid_large_graphic_colour_popup_pane

0x7278,	// (0x00011ed7) listscroll_popup_colour_pane_g1_ParamLimits

0x7278,	// (0x00011ed7) listscroll_popup_colour_pane_g1

0x728f,	// (0x00011eee) listscroll_popup_colour_pane_g2_ParamLimits

0x728f,	// (0x00011eee) listscroll_popup_colour_pane_g2

0x72a6,	// (0x00011f05) listscroll_popup_colour_pane_g3_ParamLimits

0x72a6,	// (0x00011f05) listscroll_popup_colour_pane_g3

0x72b6,	// (0x00011f15) listscroll_popup_colour_pane_g4_ParamLimits

0x72b6,	// (0x00011f15) listscroll_popup_colour_pane_g4

0x0003,

0xf59e,	// (0x0001a1fd) listscroll_popup_colour_pane_g_ParamLimits

0xf59e,	// (0x0001a1fd) listscroll_popup_colour_pane_g

0x72ca,	// (0x00011f29) scroll_pane_cp6_ParamLimits

0x72ca,	// (0x00011f29) scroll_pane_cp6

0x72dc,	// (0x00011f3b) cell_large_graphic_colour_popup_pane_ParamLimits

0x72dc,	// (0x00011f3b) cell_large_graphic_colour_popup_pane

0x72fb,	// (0x00011f5a) cell_large_graphic_colour_none_popup_pane_t1

0x6c61,	// (0x000118c0) grid_highlight_pane_cp5

0x730a,	// (0x00011f69) cell_large_graphic_colour_popup_pane_g1

0x7312,	// (0x00011f71) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a7,	// (0x0001a206) cell_large_graphic_colour_popup_pane_g

0x731a,	// (0x00011f79) cell_large_graphic_colour_popup_pane_g2_copy1

0x7323,	// (0x00011f82) grid_highlight_pane_cp4

0x732b,	// (0x00011f8a) bg_popup_window_pane_cp8_ParamLimits

0x732b,	// (0x00011f8a) bg_popup_window_pane_cp8

0x7346,	// (0x00011fa5) popup_snote_single_text_window_g1_ParamLimits

0x7346,	// (0x00011fa5) popup_snote_single_text_window_g1

0x7358,	// (0x00011fb7) popup_snote_single_text_window_t1_ParamLimits

0x7358,	// (0x00011fb7) popup_snote_single_text_window_t1

0x736b,	// (0x00011fca) popup_snote_single_text_window_t2_ParamLimits

0x736b,	// (0x00011fca) popup_snote_single_text_window_t2

0x737e,	// (0x00011fdd) popup_snote_single_text_window_t3_ParamLimits

0x737e,	// (0x00011fdd) popup_snote_single_text_window_t3

0x73b7,	// (0x00012016) popup_snote_single_text_window_t4_ParamLimits

0x73b7,	// (0x00012016) popup_snote_single_text_window_t4

0x73eb,	// (0x0001204a) popup_snote_single_text_window_t5_ParamLimits

0x73eb,	// (0x0001204a) popup_snote_single_text_window_t5

0x0004,

0xf5ac,	// (0x0001a20b) popup_snote_single_text_window_t_ParamLimits

0xf5ac,	// (0x0001a20b) popup_snote_single_text_window_t

0x741a,	// (0x00012079) bg_popup_window_pane_cp9_ParamLimits

0x741a,	// (0x00012079) bg_popup_window_pane_cp9

0x7346,	// (0x00011fa5) popup_snote_single_graphic_window_g1_ParamLimits

0x7346,	// (0x00011fa5) popup_snote_single_graphic_window_g1

0x7428,	// (0x00012087) popup_snote_single_graphic_window_g2_ParamLimits

0x7428,	// (0x00012087) popup_snote_single_graphic_window_g2

0x0001,

0xf5b7,	// (0x0001a216) popup_snote_single_graphic_window_g_ParamLimits

0xf5b7,	// (0x0001a216) popup_snote_single_graphic_window_g

0x7434,	// (0x00012093) popup_snote_single_graphic_window_t1_ParamLimits

0x7434,	// (0x00012093) popup_snote_single_graphic_window_t1

0x7447,	// (0x000120a6) popup_snote_single_graphic_window_t2_ParamLimits

0x7447,	// (0x000120a6) popup_snote_single_graphic_window_t2

0x745a,	// (0x000120b9) popup_snote_single_graphic_window_t3_ParamLimits

0x745a,	// (0x000120b9) popup_snote_single_graphic_window_t3

0x7493,	// (0x000120f2) popup_snote_single_graphic_window_t4_ParamLimits

0x7493,	// (0x000120f2) popup_snote_single_graphic_window_t4

0x74c7,	// (0x00012126) popup_snote_single_graphic_window_t5_ParamLimits

0x74c7,	// (0x00012126) popup_snote_single_graphic_window_t5

0x0004,

0xf5bc,	// (0x0001a21b) popup_snote_single_graphic_window_t_ParamLimits

0xf5bc,	// (0x0001a21b) popup_snote_single_graphic_window_t

0xab50,	// (0x000157af) grid_graphic_popup_pane_ParamLimits

0xab50,	// (0x000157af) grid_graphic_popup_pane

0xab78,	// (0x000157d7) listscroll_popup_graphic_pane_g1_ParamLimits

0xab78,	// (0x000157d7) listscroll_popup_graphic_pane_g1

0xab8c,	// (0x000157eb) listscroll_popup_graphic_pane_g2_ParamLimits

0xab8c,	// (0x000157eb) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b1,	// (0x0001a610) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b1,	// (0x0001a610) listscroll_popup_graphic_pane_g

0xaba0,	// (0x000157ff) scroll_pane_cp5

0xaaf9,	// (0x00015758) cell_graphic_popup_pane_ParamLimits

0xaaf9,	// (0x00015758) cell_graphic_popup_pane

0xaada,	// (0x00015739) cell_graphic_popup_pane_g1

0xaae2,	// (0x00015741) cell_graphic_popup_pane_g2

0x731a,	// (0x00011f79) cell_graphic_popup_pane_g3

0x0002,

0xf9aa,	// (0x0001a609) cell_graphic_popup_pane_g

0xaaeb,	// (0x0001574a) cell_graphic_popup_pane_t2

0x7323,	// (0x00011f82) grid_highlight_pane_cp3

0x7508,	// (0x00012167) list_gen_pane_ParamLimits

0x7508,	// (0x00012167) list_gen_pane

0x753a,	// (0x00012199) scroll_pane

0xaa32,	// (0x00015691) bg_list_pane_g1_ParamLimits

0xaa32,	// (0x00015691) bg_list_pane_g1

0xaa4f,	// (0x000156ae) bg_list_pane_g2_ParamLimits

0xaa4f,	// (0x000156ae) bg_list_pane_g2

0xaa64,	// (0x000156c3) bg_list_pane_g3_ParamLimits

0xaa64,	// (0x000156c3) bg_list_pane_g3

0xaa78,	// (0x000156d7) bg_list_pane_g4_ParamLimits

0xaa78,	// (0x000156d7) bg_list_pane_g4

0xaa8c,	// (0x000156eb) bg_list_pane_g5_ParamLimits

0xaa8c,	// (0x000156eb) bg_list_pane_g5

0x0004,

0xf99f,	// (0x0001a5fe) bg_list_pane_g_ParamLimits

0xf99f,	// (0x0001a5fe) bg_list_pane_g

0xa945,	// (0x000155a4) list_double2_graphic_large_graphic_pane_ParamLimits

0xa945,	// (0x000155a4) list_double2_graphic_large_graphic_pane

0xa945,	// (0x000155a4) list_double2_graphic_pane_ParamLimits

0xa945,	// (0x000155a4) list_double2_graphic_pane

0xa945,	// (0x000155a4) list_double2_large_graphic_pane_ParamLimits

0xa945,	// (0x000155a4) list_double2_large_graphic_pane

0xa945,	// (0x000155a4) list_double2_pane_ParamLimits

0xa945,	// (0x000155a4) list_double2_pane

0xa945,	// (0x000155a4) list_double_graphic_heading_pane_ParamLimits

0xa945,	// (0x000155a4) list_double_graphic_heading_pane

0xa945,	// (0x000155a4) list_double_graphic_pane_ParamLimits

0xa945,	// (0x000155a4) list_double_graphic_pane

0xa945,	// (0x000155a4) list_double_heading_pane_ParamLimits

0xa945,	// (0x000155a4) list_double_heading_pane

0xa945,	// (0x000155a4) list_double_large_graphic_pane_ParamLimits

0xa945,	// (0x000155a4) list_double_large_graphic_pane

0xa945,	// (0x000155a4) list_double_number_pane_ParamLimits

0xa945,	// (0x000155a4) list_double_number_pane

0xa945,	// (0x000155a4) list_double_pane_ParamLimits

0xa945,	// (0x000155a4) list_double_pane

0xa945,	// (0x000155a4) list_double_time_pane_ParamLimits

0xa945,	// (0x000155a4) list_double_time_pane

0xa945,	// (0x000155a4) list_setting_number_pane_ParamLimits

0xa945,	// (0x000155a4) list_setting_number_pane

0xa945,	// (0x000155a4) list_setting_pane_ParamLimits

0xa945,	// (0x000155a4) list_setting_pane

0xa9a1,	// (0x00015600) list_single_2graphic_pane_ParamLimits

0xa9a1,	// (0x00015600) list_single_2graphic_pane

0xa9a1,	// (0x00015600) list_single_graphic_heading_pane_ParamLimits

0xa9a1,	// (0x00015600) list_single_graphic_heading_pane

0xa9a1,	// (0x00015600) list_single_graphic_pane_ParamLimits

0xa9a1,	// (0x00015600) list_single_graphic_pane

0xa9a1,	// (0x00015600) list_single_heading_pane_ParamLimits

0xa9a1,	// (0x00015600) list_single_heading_pane

0xaa13,	// (0x00015672) list_single_large_graphic_pane_ParamLimits

0xaa13,	// (0x00015672) list_single_large_graphic_pane

0xa9a1,	// (0x00015600) list_single_number_heading_pane_ParamLimits

0xa9a1,	// (0x00015600) list_single_number_heading_pane

0xa9a1,	// (0x00015600) list_single_number_pane_ParamLimits

0xa9a1,	// (0x00015600) list_single_number_pane

0xa9a1,	// (0x00015600) list_single_pane_ParamLimits

0xa9a1,	// (0x00015600) list_single_pane

0x6c61,	// (0x000118c0) list_highlight_pane_cp1

0x757a,	// (0x000121d9) list_single_pane_g1_ParamLimits

0x757a,	// (0x000121d9) list_single_pane_g1

0x7586,	// (0x000121e5) list_single_pane_g2_ParamLimits

0x7586,	// (0x000121e5) list_single_pane_g2

0x0001,

0xf5ce,	// (0x0001a22d) list_single_pane_g_ParamLimits

0xf5ce,	// (0x0001a22d) list_single_pane_g

0xa8fe,	// (0x0001555d) list_single_pane_t1_ParamLimits

0xa8fe,	// (0x0001555d) list_single_pane_t1

0x757a,	// (0x000121d9) list_single_number_pane_g1_ParamLimits

0x757a,	// (0x000121d9) list_single_number_pane_g1

0x7586,	// (0x000121e5) list_single_number_pane_g2_ParamLimits

0x7586,	// (0x000121e5) list_single_number_pane_g2

0x0001,

0xf5ce,	// (0x0001a22d) list_single_number_pane_g_ParamLimits

0xf5ce,	// (0x0001a22d) list_single_number_pane_g

0xa648,	// (0x000152a7) list_single_number_pane_t1_ParamLimits

0xa648,	// (0x000152a7) list_single_number_pane_t1

0xa65e,	// (0x000152bd) list_single_number_pane_t2_ParamLimits

0xa65e,	// (0x000152bd) list_single_number_pane_t2

0x0001,

0xf960,	// (0x0001a5bf) list_single_number_pane_t_ParamLimits

0xf960,	// (0x0001a5bf) list_single_number_pane_t

0x756e,	// (0x000121cd) list_single_graphic_pane_g1_ParamLimits

0x756e,	// (0x000121cd) list_single_graphic_pane_g1

0x757a,	// (0x000121d9) list_single_graphic_pane_g2_ParamLimits

0x757a,	// (0x000121d9) list_single_graphic_pane_g2

0x7586,	// (0x000121e5) list_single_graphic_pane_g3_ParamLimits

0x7586,	// (0x000121e5) list_single_graphic_pane_g3

0x0002,

0xf5c7,	// (0x0001a226) list_single_graphic_pane_g_ParamLimits

0xf5c7,	// (0x0001a226) list_single_graphic_pane_g

0x7592,	// (0x000121f1) list_single_graphic_pane_t1_ParamLimits

0x7592,	// (0x000121f1) list_single_graphic_pane_t1

0x757a,	// (0x000121d9) list_single_heading_pane_g1_ParamLimits

0x757a,	// (0x000121d9) list_single_heading_pane_g1

0x7586,	// (0x000121e5) list_single_heading_pane_g2_ParamLimits

0x7586,	// (0x000121e5) list_single_heading_pane_g2

0x0001,

0xf5ce,	// (0x0001a22d) list_single_heading_pane_g_ParamLimits

0xf5ce,	// (0x0001a22d) list_single_heading_pane_g

0x75a8,	// (0x00012207) list_single_heading_pane_t1_ParamLimits

0x75a8,	// (0x00012207) list_single_heading_pane_t1

0x75be,	// (0x0001221d) list_single_heading_pane_t2_ParamLimits

0x75be,	// (0x0001221d) list_single_heading_pane_t2

0x0001,

0xf5d3,	// (0x0001a232) list_single_heading_pane_t_ParamLimits

0xf5d3,	// (0x0001a232) list_single_heading_pane_t

0x757a,	// (0x000121d9) list_single_number_heading_pane_g1_ParamLimits

0x757a,	// (0x000121d9) list_single_number_heading_pane_g1

0x7586,	// (0x000121e5) list_single_number_heading_pane_g2_ParamLimits

0x7586,	// (0x000121e5) list_single_number_heading_pane_g2

0x0001,

0xf5ce,	// (0x0001a22d) list_single_number_heading_pane_g_ParamLimits

0xf5ce,	// (0x0001a22d) list_single_number_heading_pane_g

0x75a8,	// (0x00012207) list_single_number_heading_pane_t1_ParamLimits

0x75a8,	// (0x00012207) list_single_number_heading_pane_t1

0x75d0,	// (0x0001222f) list_single_number_heading_pane_t2_ParamLimits

0x75d0,	// (0x0001222f) list_single_number_heading_pane_t2

0x75e2,	// (0x00012241) list_single_number_heading_pane_t3_ParamLimits

0x75e2,	// (0x00012241) list_single_number_heading_pane_t3

0x0002,

0xf5d8,	// (0x0001a237) list_single_number_heading_pane_t_ParamLimits

0xf5d8,	// (0x0001a237) list_single_number_heading_pane_t

0x75f4,	// (0x00012253) list_single_graphic_heading_pane_g1_ParamLimits

0x75f4,	// (0x00012253) list_single_graphic_heading_pane_g1

0x7600,	// (0x0001225f) list_single_graphic_heading_pane_g4_ParamLimits

0x7600,	// (0x0001225f) list_single_graphic_heading_pane_g4

0x7586,	// (0x000121e5) list_single_graphic_heading_pane_g5_ParamLimits

0x7586,	// (0x000121e5) list_single_graphic_heading_pane_g5

0x0002,

0xf5df,	// (0x0001a23e) list_single_graphic_heading_pane_g_ParamLimits

0xf5df,	// (0x0001a23e) list_single_graphic_heading_pane_g

0x75a8,	// (0x00012207) list_single_graphic_heading_pane_t1_ParamLimits

0x75a8,	// (0x00012207) list_single_graphic_heading_pane_t1

0x7611,	// (0x00012270) list_single_graphic_heading_pane_t2_ParamLimits

0x7611,	// (0x00012270) list_single_graphic_heading_pane_t2

0x0001,

0xf5e6,	// (0x0001a245) list_single_graphic_heading_pane_t_ParamLimits

0xf5e6,	// (0x0001a245) list_single_graphic_heading_pane_t

0x7623,	// (0x00012282) list_single_large_graphic_pane_g1_ParamLimits

0x7623,	// (0x00012282) list_single_large_graphic_pane_g1

0x762f,	// (0x0001228e) list_single_large_graphic_pane_g2_ParamLimits

0x762f,	// (0x0001228e) list_single_large_graphic_pane_g2

0x763b,	// (0x0001229a) list_single_large_graphic_pane_g3_ParamLimits

0x763b,	// (0x0001229a) list_single_large_graphic_pane_g3

0x0002,

0xf5eb,	// (0x0001a24a) list_single_large_graphic_pane_g_ParamLimits

0xf5eb,	// (0x0001a24a) list_single_large_graphic_pane_g

0x990d,	// (0x0001456c) wait_border_pane_g2_copy1

0x7647,	// (0x000122a6) list_single_large_graphic_pane_g4_cp2

0x764f,	// (0x000122ae) list_single_large_graphic_pane_t1_ParamLimits

0x764f,	// (0x000122ae) list_single_large_graphic_pane_t1

0x7665,	// (0x000122c4) list_double_pane_g1_ParamLimits

0x7665,	// (0x000122c4) list_double_pane_g1

0x7671,	// (0x000122d0) list_double_pane_g2_ParamLimits

0x7671,	// (0x000122d0) list_double_pane_g2

0x0001,

0xf5f2,	// (0x0001a251) list_double_pane_g_ParamLimits

0xf5f2,	// (0x0001a251) list_double_pane_g

0x767d,	// (0x000122dc) list_double_pane_t1_ParamLimits

0x767d,	// (0x000122dc) list_double_pane_t1

0x7693,	// (0x000122f2) list_double_pane_t2_ParamLimits

0x7693,	// (0x000122f2) list_double_pane_t2

0x0001,

0xf5f7,	// (0x0001a256) list_double_pane_t_ParamLimits

0xf5f7,	// (0x0001a256) list_double_pane_t

0x76a5,	// (0x00012304) list_double2_pane_g1_ParamLimits

0x76a5,	// (0x00012304) list_double2_pane_g1

0x76b6,	// (0x00012315) list_double2_pane_g2_ParamLimits

0x76b6,	// (0x00012315) list_double2_pane_g2

0x0001,

0xf5fc,	// (0x0001a25b) list_double2_pane_g_ParamLimits

0xf5fc,	// (0x0001a25b) list_double2_pane_g

0x76c2,	// (0x00012321) list_double2_pane_t1_ParamLimits

0x76c2,	// (0x00012321) list_double2_pane_t1

0x76d8,	// (0x00012337) list_double2_pane_t2_ParamLimits

0x76d8,	// (0x00012337) list_double2_pane_t2

0x0001,

0xf601,	// (0x0001a260) list_double2_pane_t_ParamLimits

0xf601,	// (0x0001a260) list_double2_pane_t

0x7665,	// (0x000122c4) list_double_number_pane_g1_ParamLimits

0x7665,	// (0x000122c4) list_double_number_pane_g1

0x7671,	// (0x000122d0) list_double_number_pane_g2_ParamLimits

0x7671,	// (0x000122d0) list_double_number_pane_g2

0x0001,

0xf5f2,	// (0x0001a251) list_double_number_pane_g_ParamLimits

0xf5f2,	// (0x0001a251) list_double_number_pane_g

0x76ea,	// (0x00012349) list_double_number_pane_t1_ParamLimits

0x76ea,	// (0x00012349) list_double_number_pane_t1

0x76fc,	// (0x0001235b) list_double_number_pane_t2_ParamLimits

0x76fc,	// (0x0001235b) list_double_number_pane_t2

0x7712,	// (0x00012371) list_double_number_pane_t3_ParamLimits

0x7712,	// (0x00012371) list_double_number_pane_t3

0x0002,

0xf606,	// (0x0001a265) list_double_number_pane_t_ParamLimits

0xf606,	// (0x0001a265) list_double_number_pane_t

0x7724,	// (0x00012383) list_double_graphic_pane_g1_ParamLimits

0x7724,	// (0x00012383) list_double_graphic_pane_g1

0x7730,	// (0x0001238f) list_double_graphic_pane_g2_ParamLimits

0x7730,	// (0x0001238f) list_double_graphic_pane_g2

0x773f,	// (0x0001239e) list_double_graphic_pane_g3_ParamLimits

0x773f,	// (0x0001239e) list_double_graphic_pane_g3

0x0003,

0xf60d,	// (0x0001a26c) list_double_graphic_pane_g_ParamLimits

0xf60d,	// (0x0001a26c) list_double_graphic_pane_g

0x7757,	// (0x000123b6) list_double_graphic_pane_t1_ParamLimits

0x7757,	// (0x000123b6) list_double_graphic_pane_t1

0x776d,	// (0x000123cc) list_double_graphic_pane_t2_ParamLimits

0x776d,	// (0x000123cc) list_double_graphic_pane_t2

0x0001,

0xf616,	// (0x0001a275) list_double_graphic_pane_t_ParamLimits

0xf616,	// (0x0001a275) list_double_graphic_pane_t

0x777f,	// (0x000123de) list_double2_graphic_pane_g1_ParamLimits

0x777f,	// (0x000123de) list_double2_graphic_pane_g1

0x778b,	// (0x000123ea) list_double2_graphic_pane_g2_ParamLimits

0x778b,	// (0x000123ea) list_double2_graphic_pane_g2

0x76b6,	// (0x00012315) list_double2_graphic_pane_g3_ParamLimits

0x76b6,	// (0x00012315) list_double2_graphic_pane_g3

0x0002,

0xf61b,	// (0x0001a27a) list_double2_graphic_pane_g_ParamLimits

0xf61b,	// (0x0001a27a) list_double2_graphic_pane_g

0x7797,	// (0x000123f6) list_double2_graphic_pane_t1_ParamLimits

0x7797,	// (0x000123f6) list_double2_graphic_pane_t1

0x77ad,	// (0x0001240c) list_double2_graphic_pane_t2_ParamLimits

0x77ad,	// (0x0001240c) list_double2_graphic_pane_t2

0x0001,

0xf622,	// (0x0001a281) list_double2_graphic_pane_t_ParamLimits

0xf622,	// (0x0001a281) list_double2_graphic_pane_t

0x77bf,	// (0x0001241e) list_double_large_graphic_pane_g1_ParamLimits

0x77bf,	// (0x0001241e) list_double_large_graphic_pane_g1

0x77e8,	// (0x00012447) list_double_large_graphic_pane_g2_ParamLimits

0x77e8,	// (0x00012447) list_double_large_graphic_pane_g2

0x7671,	// (0x000122d0) list_double_large_graphic_pane_g3_ParamLimits

0x7671,	// (0x000122d0) list_double_large_graphic_pane_g3

0x77f9,	// (0x00012458) list_double_large_graphic_pane_g4_ParamLimits

0x77f9,	// (0x00012458) list_double_large_graphic_pane_g4

0x0004,

0xf627,	// (0x0001a286) list_double_large_graphic_pane_g_ParamLimits

0xf627,	// (0x0001a286) list_double_large_graphic_pane_g

0x781f,	// (0x0001247e) list_double_large_graphic_pane_t1_ParamLimits

0x781f,	// (0x0001247e) list_double_large_graphic_pane_t1

0x7838,	// (0x00012497) list_double_large_graphic_pane_t2_ParamLimits

0x7838,	// (0x00012497) list_double_large_graphic_pane_t2

0x0001,

0xf632,	// (0x0001a291) list_double_large_graphic_pane_t_ParamLimits

0xf632,	// (0x0001a291) list_double_large_graphic_pane_t

0x784a,	// (0x000124a9) list_double2_large_graphic_pane_g1_ParamLimits

0x784a,	// (0x000124a9) list_double2_large_graphic_pane_g1

0x76a5,	// (0x00012304) list_double2_large_graphic_pane_g2_ParamLimits

0x76a5,	// (0x00012304) list_double2_large_graphic_pane_g2

0x76b6,	// (0x00012315) list_double2_large_graphic_pane_g3_ParamLimits

0x76b6,	// (0x00012315) list_double2_large_graphic_pane_g3

0x0002,

0xf637,	// (0x0001a296) list_double2_large_graphic_pane_g_ParamLimits

0xf637,	// (0x0001a296) list_double2_large_graphic_pane_g

0x7856,	// (0x000124b5) list_double2_large_graphic_pane_t1_ParamLimits

0x7856,	// (0x000124b5) list_double2_large_graphic_pane_t1

0x786c,	// (0x000124cb) list_double2_large_graphic_pane_t2_ParamLimits

0x786c,	// (0x000124cb) list_double2_large_graphic_pane_t2

0x0001,

0xf63e,	// (0x0001a29d) list_double2_large_graphic_pane_t_ParamLimits

0xf63e,	// (0x0001a29d) list_double2_large_graphic_pane_t

0x787e,	// (0x000124dd) list_double_heading_pane_g1_ParamLimits

0x787e,	// (0x000124dd) list_double_heading_pane_g1

0x788f,	// (0x000124ee) list_double_heading_pane_g2_ParamLimits

0x788f,	// (0x000124ee) list_double_heading_pane_g2

0x0001,

0xf643,	// (0x0001a2a2) list_double_heading_pane_g_ParamLimits

0xf643,	// (0x0001a2a2) list_double_heading_pane_g

0x789b,	// (0x000124fa) list_double_heading_pane_t1_ParamLimits

0x789b,	// (0x000124fa) list_double_heading_pane_t1

0x76d8,	// (0x00012337) list_double_heading_pane_t2_ParamLimits

0x76d8,	// (0x00012337) list_double_heading_pane_t2

0x0001,

0xf648,	// (0x0001a2a7) list_double_heading_pane_t_ParamLimits

0xf648,	// (0x0001a2a7) list_double_heading_pane_t

0x78b1,	// (0x00012510) list_double_graphic_heading_pane_g1_ParamLimits

0x78b1,	// (0x00012510) list_double_graphic_heading_pane_g1

0x787e,	// (0x000124dd) list_double_graphic_heading_pane_g2_ParamLimits

0x787e,	// (0x000124dd) list_double_graphic_heading_pane_g2

0x788f,	// (0x000124ee) list_double_graphic_heading_pane_g3_ParamLimits

0x788f,	// (0x000124ee) list_double_graphic_heading_pane_g3

0x0002,

0xf64d,	// (0x0001a2ac) list_double_graphic_heading_pane_g_ParamLimits

0xf64d,	// (0x0001a2ac) list_double_graphic_heading_pane_g

0x78bd,	// (0x0001251c) list_double_graphic_heading_pane_t1_ParamLimits

0x78bd,	// (0x0001251c) list_double_graphic_heading_pane_t1

0x77ad,	// (0x0001240c) list_double_graphic_heading_pane_t2_ParamLimits

0x77ad,	// (0x0001240c) list_double_graphic_heading_pane_t2

0x0001,

0xf654,	// (0x0001a2b3) list_double_graphic_heading_pane_t_ParamLimits

0xf654,	// (0x0001a2b3) list_double_graphic_heading_pane_t

0x77e8,	// (0x00012447) list_double_time_pane_g1_ParamLimits

0x77e8,	// (0x00012447) list_double_time_pane_g1

0x7671,	// (0x000122d0) list_double_time_pane_g2_ParamLimits

0x7671,	// (0x000122d0) list_double_time_pane_g2

0x0001,

0xf659,	// (0x0001a2b8) list_double_time_pane_g_ParamLimits

0xf659,	// (0x0001a2b8) list_double_time_pane_g

0x78d3,	// (0x00012532) list_double_time_pane_t1_ParamLimits

0x78d3,	// (0x00012532) list_double_time_pane_t1

0x78e9,	// (0x00012548) list_double_time_pane_t2_ParamLimits

0x78e9,	// (0x00012548) list_double_time_pane_t2

0x78fb,	// (0x0001255a) list_double_time_pane_t3_ParamLimits

0x78fb,	// (0x0001255a) list_double_time_pane_t3

0x790d,	// (0x0001256c) list_double_time_pane_t4_ParamLimits

0x790d,	// (0x0001256c) list_double_time_pane_t4

0x0003,

0xf65e,	// (0x0001a2bd) list_double_time_pane_t_ParamLimits

0xf65e,	// (0x0001a2bd) list_double_time_pane_t

0x778b,	// (0x000123ea) list_setting_pane_g1_ParamLimits

0x778b,	// (0x000123ea) list_setting_pane_g1

0x76b6,	// (0x00012315) list_setting_pane_g2_ParamLimits

0x76b6,	// (0x00012315) list_setting_pane_g2

0x0001,

0xf667,	// (0x0001a2c6) list_setting_pane_g_ParamLimits

0xf667,	// (0x0001a2c6) list_setting_pane_g

0x791f,	// (0x0001257e) list_setting_pane_t1_ParamLimits

0x791f,	// (0x0001257e) list_setting_pane_t1

0x7936,	// (0x00012595) list_setting_pane_t2_ParamLimits

0x7936,	// (0x00012595) list_setting_pane_t2

0x0002,

0xf66c,	// (0x0001a2cb) list_setting_pane_t_ParamLimits

0xf66c,	// (0x0001a2cb) list_setting_pane_t

0x7975,	// (0x000125d4) set_value_pane_cp_ParamLimits

0x7975,	// (0x000125d4) set_value_pane_cp

0x778b,	// (0x000123ea) list_setting_number_pane_g1_ParamLimits

0x778b,	// (0x000123ea) list_setting_number_pane_g1

0x76b6,	// (0x00012315) list_setting_number_pane_g2_ParamLimits

0x76b6,	// (0x00012315) list_setting_number_pane_g2

0x0001,

0xf667,	// (0x0001a2c6) list_setting_number_pane_g_ParamLimits

0xf667,	// (0x0001a2c6) list_setting_number_pane_g

0x7981,	// (0x000125e0) list_setting_number_pane_t1_ParamLimits

0x7981,	// (0x000125e0) list_setting_number_pane_t1

0x7995,	// (0x000125f4) list_setting_number_pane_t2_ParamLimits

0x7995,	// (0x000125f4) list_setting_number_pane_t2

0x79ac,	// (0x0001260b) list_setting_number_pane_t3_ParamLimits

0x79ac,	// (0x0001260b) list_setting_number_pane_t3

0x0003,

0xf673,	// (0x0001a2d2) list_setting_number_pane_t_ParamLimits

0xf673,	// (0x0001a2d2) list_setting_number_pane_t

0x7975,	// (0x000125d4) set_value_pane_ParamLimits

0x7975,	// (0x000125d4) set_value_pane

0x79ef,	// (0x0001264e) bg_set_opt_pane_ParamLimits

0x79ef,	// (0x0001264e) bg_set_opt_pane

0x7a10,	// (0x0001266f) set_value_pane_t1

0x7a1e,	// (0x0001267d) slider_set_pane_cp3

0x7a27,	// (0x00012686) volume_small_pane_cp

0x7a30,	// (0x0001268f) list_form_gen_pane

0x7a39,	// (0x00012698) scroll_pane_cp8

0x7a52,	// (0x000126b1) form_field_data_pane_ParamLimits

0x7a52,	// (0x000126b1) form_field_data_pane

0x7a74,	// (0x000126d3) form_field_data_wide_pane_ParamLimits

0x7a74,	// (0x000126d3) form_field_data_wide_pane

0x7a97,	// (0x000126f6) form_field_popup_pane_ParamLimits

0x7a97,	// (0x000126f6) form_field_popup_pane

0x7ab7,	// (0x00012716) form_field_popup_wide_pane_ParamLimits

0x7ab7,	// (0x00012716) form_field_popup_wide_pane

0x7ad4,	// (0x00012733) form_field_slider_pane_ParamLimits

0x7ad4,	// (0x00012733) form_field_slider_pane

0x7ae7,	// (0x00012746) form_field_slider_wide_pane_ParamLimits

0x7ae7,	// (0x00012746) form_field_slider_wide_pane

0x7afa,	// (0x00012759) data_form_pane

0x7b10,	// (0x0001276f) form_field_data_pane_t1

0x7b28,	// (0x00012787) input_focus_pane

0x7b36,	// (0x00012795) data_form_wide_pane

0x7b6e,	// (0x000127cd) form_field_data_wide_pane_t1

0x7338,	// (0x00011f97) input_focus_pane_cp6

0x7b90,	// (0x000127ef) form_field_popup_pane_t1

0x7b28,	// (0x00012787) input_focus_pane_cp7

0x7ba8,	// (0x00012807) list_form_pane

0x7bbc,	// (0x0001281b) form_field_popup_wide_pane_t1

0x7b28,	// (0x00012787) input_focus_pane_cp8

0x7bd1,	// (0x00012830) list_form_wide_pane

0x7be8,	// (0x00012847) form_field_slider_pane_t1_ParamLimits

0x7be8,	// (0x00012847) form_field_slider_pane_t1

0x7bfa,	// (0x00012859) form_field_slider_pane_t2_ParamLimits

0x7bfa,	// (0x00012859) form_field_slider_pane_t2

0x0001,

0xf683,	// (0x0001a2e2) form_field_slider_pane_t_ParamLimits

0xf683,	// (0x0001a2e2) form_field_slider_pane_t

0x6fd6,	// (0x00011c35) input_focus_pane_cp9_ParamLimits

0x6fd6,	// (0x00011c35) input_focus_pane_cp9

0x7c0c,	// (0x0001286b) slider_cont_pane_ParamLimits

0x7c0c,	// (0x0001286b) slider_cont_pane

0x7c20,	// (0x0001287f) form_field_slider_wide_pane_t1_ParamLimits

0x7c20,	// (0x0001287f) form_field_slider_wide_pane_t1

0x7c32,	// (0x00012891) form_field_slider_wide_pane_t2_ParamLimits

0x7c32,	// (0x00012891) form_field_slider_wide_pane_t2

0x0001,

0xf688,	// (0x0001a2e7) form_field_slider_wide_pane_t_ParamLimits

0xf688,	// (0x0001a2e7) form_field_slider_wide_pane_t

0x6fd6,	// (0x00011c35) input_focus_pane_cp10_ParamLimits

0x6fd6,	// (0x00011c35) input_focus_pane_cp10

0x7c44,	// (0x000128a3) slider_cont_pane_cp1_ParamLimits

0x7c44,	// (0x000128a3) slider_cont_pane_cp1

0x7c58,	// (0x000128b7) slider_form_pane_cp

0x7c60,	// (0x000128bf) input_focus_pane_g1

0x7c68,	// (0x000128c7) input_focus_pane_g2

0x7c70,	// (0x000128cf) input_focus_pane_g3

0x7c78,	// (0x000128d7) input_focus_pane_g4

0x7c80,	// (0x000128df) input_focus_pane_g5

0x7c88,	// (0x000128e7) input_focus_pane_g6

0x7c90,	// (0x000128ef) input_focus_pane_g7

0x7c98,	// (0x000128f7) input_focus_pane_g8

0x7ca0,	// (0x000128ff) input_focus_pane_g9

0x6c57,	// (0x000118b6) input_focus_pane_g10

0x0009,

0xf68d,	// (0x0001a2ec) input_focus_pane_g

0x9916,	// (0x00014575) wait_border_pane_g3_copy1

0x7ca8,	// (0x00012907) data_form_pane_t1

0x6c57,	// (0x000118b6) wait_anim_pane_g1_copy1

0xa8e1,	// (0x00015540) data_form_wide_pane_t1

0x7cc3,	// (0x00012922) list_form_graphic_pane_cp_ParamLimits

0x7cc3,	// (0x00012922) list_form_graphic_pane_cp

0xa8b6,	// (0x00015515) slider_form_pane_g1

0xa8bf,	// (0x0001551e) slider_form_pane_g2

0x0006,

0xf990,	// (0x0001a5ef) slider_form_pane_g

0x7cdc,	// (0x0001293b) list_form_graphic_pane_ParamLimits

0x7cdc,	// (0x0001293b) list_form_graphic_pane

0x7cf8,	// (0x00012957) list_form_graphic_pane_g1

0x7d00,	// (0x0001295f) list_form_graphic_pane_t1_ParamLimits

0x7d00,	// (0x0001295f) list_form_graphic_pane_t1

0x6d41,	// (0x000119a0) list_highlight_pane_cp5_ParamLimits

0x6d41,	// (0x000119a0) list_highlight_pane_cp5

0x7d15,	// (0x00012974) find_pane_g1

0x7d1e,	// (0x0001297d) input_find_pane

0x7d27,	// (0x00012986) input_find_pane_g1_ParamLimits

0x7d27,	// (0x00012986) input_find_pane_g1

0x7d33,	// (0x00012992) input_find_pane_t1_ParamLimits

0x7d33,	// (0x00012992) input_find_pane_t1

0x7d48,	// (0x000129a7) input_find_pane_t2_ParamLimits

0x7d48,	// (0x000129a7) input_find_pane_t2

0x0001,

0xf6a2,	// (0x0001a301) input_find_pane_t_ParamLimits

0xf6a2,	// (0x0001a301) input_find_pane_t

0x7d5d,	// (0x000129bc) input_focus_pane_cp5_ParamLimits

0x7d5d,	// (0x000129bc) input_focus_pane_cp5

0x7d77,	// (0x000129d6) bg_popup_window_pane_cp2_ParamLimits

0x7d77,	// (0x000129d6) bg_popup_window_pane_cp2

0x7d84,	// (0x000129e3) listscroll_menu_pane_ParamLimits

0x7d84,	// (0x000129e3) listscroll_menu_pane

0x7d90,	// (0x000129ef) popup_submenu_window_ParamLimits

0x7d90,	// (0x000129ef) popup_submenu_window

0x7dbc,	// (0x00012a1b) find_popup_pane_g1

0x7dc4,	// (0x00012a23) input_popup_find_pane_cp

0x7d5d,	// (0x000129bc) input_focus_pane_cp4_ParamLimits

0x7d5d,	// (0x000129bc) input_focus_pane_cp4

0x7dda,	// (0x00012a39) input_popup_find_pane_t1_ParamLimits

0x7dda,	// (0x00012a39) input_popup_find_pane_t1

0x6c61,	// (0x000118c0) bg_popup_sub_pane_cp

0x7e08,	// (0x00012a67) listscroll_popup_sub_pane

0x7e10,	// (0x00012a6f) list_submenu_pane_ParamLimits

0x7e10,	// (0x00012a6f) list_submenu_pane

0x7e21,	// (0x00012a80) scroll_pane_cp4

0x7e29,	// (0x00012a88) list_single_popup_submenu_pane_ParamLimits

0x7e29,	// (0x00012a88) list_single_popup_submenu_pane

0x7e3d,	// (0x00012a9c) list_single_popup_submenu_pane_g1

0x7e45,	// (0x00012aa4) list_single_popup_submenu_pane_t1_ParamLimits

0x7e45,	// (0x00012aa4) list_single_popup_submenu_pane_t1

0x6d41,	// (0x000119a0) bg_active_tab_pane_cp1_ParamLimits

0x6d41,	// (0x000119a0) bg_active_tab_pane_cp1

0x7e5a,	// (0x00012ab9) tabs_2_active_pane_g1

0x7e62,	// (0x00012ac1) tabs_2_active_pane_t1

0x6d41,	// (0x000119a0) bg_passive_tab_pane_cp1_ParamLimits

0x6d41,	// (0x000119a0) bg_passive_tab_pane_cp1

0x7e5a,	// (0x00012ab9) tabs_2_passive_pane_g1

0x7e62,	// (0x00012ac1) tabs_2_passive_pane_t1

0x7e74,	// (0x00012ad3) bg_active_tab_pane_cp4

0x7e82,	// (0x00012ae1) tabs_2_long_active_pane_t1

0x7e95,	// (0x00012af4) bg_passive_tab_pane_cp4

0x5acf,	// (0x0001072e) list_single_midp_graphic_pane_g4_ParamLimits

0x7e74,	// (0x00012ad3) bg_active_tab_pane_cp5

0x7ea1,	// (0x00012b00) tabs_3_long_active_pane_t1

0x7e95,	// (0x00012af4) bg_passive_tab_pane_cp5

0x5acf,	// (0x0001072e) list_single_midp_graphic_pane_g4

0x6d41,	// (0x000119a0) bg_popup_window_pane_cp13_ParamLimits

0x6d41,	// (0x000119a0) bg_popup_window_pane_cp13

0x7ebc,	// (0x00012b1b) listscroll_popup_fast_pane_ParamLimits

0x7ebc,	// (0x00012b1b) listscroll_popup_fast_pane

0x7ecb,	// (0x00012b2a) grid_popup_fast_pane_ParamLimits

0x7ecb,	// (0x00012b2a) grid_popup_fast_pane

0x7edd,	// (0x00012b3c) scroll_pane_cp9_ParamLimits

0x7edd,	// (0x00012b3c) scroll_pane_cp9

0xc71a,	// (0x00017379) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc71a,	// (0x00017379) list_single_graphic_hl_pane_t1_cp2

0x7f01,	// (0x00012b60) input_focus_pane_cp20_ParamLimits

0x7f01,	// (0x00012b60) input_focus_pane_cp20

0x7f0f,	// (0x00012b6e) query_popup_data_pane_t1_ParamLimits

0x7f0f,	// (0x00012b6e) query_popup_data_pane_t1

0x7f22,	// (0x00012b81) query_popup_data_pane_t2_ParamLimits

0x7f22,	// (0x00012b81) query_popup_data_pane_t2

0x7f68,	// (0x00012bc7) query_popup_data_pane_t3_ParamLimits

0x7f68,	// (0x00012bc7) query_popup_data_pane_t3

0x7fa9,	// (0x00012c08) query_popup_data_pane_t4_ParamLimits

0x7fa9,	// (0x00012c08) query_popup_data_pane_t4

0x7fe5,	// (0x00012c44) query_popup_data_pane_t5_ParamLimits

0x7fe5,	// (0x00012c44) query_popup_data_pane_t5

0x0004,

0xf6a7,	// (0x0001a306) query_popup_data_pane_t_ParamLimits

0xf6a7,	// (0x0001a306) query_popup_data_pane_t

0x7c60,	// (0x000128bf) bg_set_opt_pane_g1

0x7c68,	// (0x000128c7) bg_set_opt_pane_g2

0x7c70,	// (0x000128cf) bg_set_opt_pane_g3

0x7c78,	// (0x000128d7) bg_set_opt_pane_g4

0x7c80,	// (0x000128df) bg_set_opt_pane_g5

0x7c88,	// (0x000128e7) bg_set_opt_pane_g6

0x7c90,	// (0x000128ef) bg_set_opt_pane_g7

0x7c98,	// (0x000128f7) bg_set_opt_pane_g8

0x7ca0,	// (0x000128ff) bg_set_opt_pane_g9

0x0008,

0xf6b2,	// (0x0001a311) bg_set_opt_pane_g

0x50f7,	// (0x0000fd56) control_top_pane_stacon_ParamLimits

0x50f7,	// (0x0000fd56) control_top_pane_stacon

0x514a,	// (0x0000fda9) signal_pane_stacon_ParamLimits

0x514a,	// (0x0000fda9) signal_pane_stacon

0x8633,	// (0x00013292) stacon_top_pane_g1_ParamLimits

0x8633,	// (0x00013292) stacon_top_pane_g1

0x516f,	// (0x0000fdce) title_pane_stacon_ParamLimits

0x516f,	// (0x0000fdce) title_pane_stacon

0x5199,	// (0x0000fdf8) uni_indicator_pane_stacon_ParamLimits

0x5199,	// (0x0000fdf8) uni_indicator_pane_stacon

0x51ae,	// (0x0000fe0d) battery_pane_stacon_ParamLimits

0x51ae,	// (0x0000fe0d) battery_pane_stacon

0x51f2,	// (0x0000fe51) control_bottom_pane_stacon_ParamLimits

0x51f2,	// (0x0000fe51) control_bottom_pane_stacon

0x5215,	// (0x0000fe74) navi_pane_stacon_ParamLimits

0x5215,	// (0x0000fe74) navi_pane_stacon

0x8655,	// (0x000132b4) stacon_bottom_pane_g1_ParamLimits

0x8655,	// (0x000132b4) stacon_bottom_pane_g1

0x4e58,	// (0x0000fab7) aid_levels_signal_lsc_ParamLimits

0x4e58,	// (0x0000fab7) aid_levels_signal_lsc

0x4e6f,	// (0x0000face) signal_pane_stacon_g1_ParamLimits

0x4e6f,	// (0x0000face) signal_pane_stacon_g1

0x4e83,	// (0x0000fae2) signal_pane_stacon_g2_ParamLimits

0x4e83,	// (0x0000fae2) signal_pane_stacon_g2

0x0001,

0xf6c5,	// (0x0001a324) signal_pane_stacon_g_ParamLimits

0xf6c5,	// (0x0001a324) signal_pane_stacon_g

0x4eb8,	// (0x0000fb17) title_pane_stacon_t1_ParamLimits

0x4eb8,	// (0x0000fb17) title_pane_stacon_t1

0x8029,	// (0x00012c88) uni_indicator_pane_stacon_g1

0x8033,	// (0x00012c92) uni_indicator_pane_stacon_g2

0x803d,	// (0x00012c9c) uni_indicator_pane_stacon_g3

0x8047,	// (0x00012ca6) uni_indicator_pane_stacon_g4

0x0003,

0xf6d1,	// (0x0001a330) uni_indicator_pane_stacon_g

0x4edd,	// (0x0000fb3c) control_top_pane_stacon_g1

0x4ee5,	// (0x0000fb44) control_top_pane_stacon_t1_ParamLimits

0x4ee5,	// (0x0000fb44) control_top_pane_stacon_t1

0x4f1c,	// (0x0000fb7b) aid_levels_battery_lsc_ParamLimits

0x4f1c,	// (0x0000fb7b) aid_levels_battery_lsc

0x4f34,	// (0x0000fb93) battery_pane_stacon_g1_ParamLimits

0x4f34,	// (0x0000fb93) battery_pane_stacon_g1

0x4f47,	// (0x0000fba6) battery_pane_stacon_g2_ParamLimits

0x4f47,	// (0x0000fba6) battery_pane_stacon_g2

0x0001,

0xf6da,	// (0x0001a339) battery_pane_stacon_g_ParamLimits

0xf6da,	// (0x0001a339) battery_pane_stacon_g

0x4f85,	// (0x0000fbe4) navi_icon_pane_stacon

0x4f99,	// (0x0000fbf8) navi_navi_pane_stacon

0x4f85,	// (0x0000fbe4) navi_text_pane_stacon

0x4edd,	// (0x0000fb3c) control_bottom_pane_stacon_g1

0x4fad,	// (0x0000fc0c) control_bottom_pane_stacon_t1_ParamLimits

0x4fad,	// (0x0000fc0c) control_bottom_pane_stacon_t1

0x806b,	// (0x00012cca) grid_app_pane_ParamLimits

0x806b,	// (0x00012cca) grid_app_pane

0x808f,	// (0x00012cee) scroll_pane_cp15_ParamLimits

0x808f,	// (0x00012cee) scroll_pane_cp15

0x80a4,	// (0x00012d03) cell_app_pane_ParamLimits

0x80a4,	// (0x00012d03) cell_app_pane

0x80c8,	// (0x00012d27) cell_app_pane_g1_ParamLimits

0x80c8,	// (0x00012d27) cell_app_pane_g1

0x80e8,	// (0x00012d47) cell_app_pane_g2_ParamLimits

0x80e8,	// (0x00012d47) cell_app_pane_g2

0x0001,

0xf6df,	// (0x0001a33e) cell_app_pane_g_ParamLimits

0xf6df,	// (0x0001a33e) cell_app_pane_g

0x80f4,	// (0x00012d53) cell_app_pane_t1_ParamLimits

0x80f4,	// (0x00012d53) cell_app_pane_t1

0x810b,	// (0x00012d6a) grid_highlight_pane_ParamLimits

0x810b,	// (0x00012d6a) grid_highlight_pane

0x7c60,	// (0x000128bf) cell_highlight_pane_g1

0x7c68,	// (0x000128c7) cell_highlight_pane_g2

0x7c70,	// (0x000128cf) cell_highlight_pane_g3

0x7c78,	// (0x000128d7) cell_highlight_pane_g4

0x7c80,	// (0x000128df) cell_highlight_pane_g5

0x7c88,	// (0x000128e7) cell_highlight_pane_g6

0x7c90,	// (0x000128ef) cell_highlight_pane_g7

0x7c98,	// (0x000128f7) cell_highlight_pane_g8

0x7ca0,	// (0x000128ff) cell_highlight_pane_g9

0x6c57,	// (0x000118b6) cell_highlight_pane_g10

0x0009,

0xf68d,	// (0x0001a2ec) cell_highlight_pane_g

0x811c,	// (0x00012d7b) bg_scroll_pane

0x4ff7,	// (0x0000fc56) scroll_handle_pane

0x8163,	// (0x00012dc2) scroll_bg_pane_g1

0x8178,	// (0x00012dd7) scroll_bg_pane_g2

0x8190,	// (0x00012def) scroll_bg_pane_g3

0x0002,

0xf6e4,	// (0x0001a343) scroll_bg_pane_g

0x81a5,	// (0x00012e04) scroll_handle_focus_pane_ParamLimits

0x81a5,	// (0x00012e04) scroll_handle_focus_pane

0x8163,	// (0x00012dc2) scroll_handle_pane_g1

0x81b2,	// (0x00012e11) scroll_handle_pane_g2

0x8190,	// (0x00012def) scroll_handle_pane_g3

0x0002,

0xf6eb,	// (0x0001a34a) scroll_handle_pane_g

0x7d5d,	// (0x000129bc) bg_popup_sub_pane_cp21_ParamLimits

0x7d5d,	// (0x000129bc) bg_popup_sub_pane_cp21

0x81c6,	// (0x00012e25) popup_fep_japan_predictive_window_t1_ParamLimits

0x81c6,	// (0x00012e25) popup_fep_japan_predictive_window_t1

0x81e0,	// (0x00012e3f) popup_fep_japan_predictive_window_t2_ParamLimits

0x81e0,	// (0x00012e3f) popup_fep_japan_predictive_window_t2

0x8213,	// (0x00012e72) popup_fep_japan_predictive_window_t3_ParamLimits

0x8213,	// (0x00012e72) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f2,	// (0x0001a351) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f2,	// (0x0001a351) popup_fep_japan_predictive_window_t

0x6c61,	// (0x000118c0) bg_popup_sub_pane_cp23

0x824a,	// (0x00012ea9) listscroll_japin_cand_pane

0x8252,	// (0x00012eb1) popup_fep_japan_candidate_window_t1

0x8260,	// (0x00012ebf) candidate_pane_ParamLimits

0x8260,	// (0x00012ebf) candidate_pane

0x8272,	// (0x00012ed1) scroll_pane_cp30

0x827a,	// (0x00012ed9) list_single_popup_jap_candidate_pane_ParamLimits

0x827a,	// (0x00012ed9) list_single_popup_jap_candidate_pane

0x6c61,	// (0x000118c0) list_highlight_pane_cp30

0x828f,	// (0x00012eee) list_single_popup_jap_candidate_pane_t1

0x829e,	// (0x00012efd) level_1_signal

0x82ab,	// (0x00012f0a) level_2_signal

0x82b8,	// (0x00012f17) level_3_signal

0x82c5,	// (0x00012f24) level_4_signal

0x82d2,	// (0x00012f31) level_5_signal

0x82df,	// (0x00012f3e) level_6_signal

0x82ec,	// (0x00012f4b) level_7_signal

0x829e,	// (0x00012efd) level_1_battery

0x82ab,	// (0x00012f0a) level_2_battery

0x82b8,	// (0x00012f17) level_3_battery

0x82c5,	// (0x00012f24) level_4_battery

0x82d2,	// (0x00012f31) level_5_battery

0x82df,	// (0x00012f3e) level_6_battery

0x82ec,	// (0x00012f4b) level_7_battery

0x8311,	// (0x00012f70) list_menu_pane_ParamLimits

0x8311,	// (0x00012f70) list_menu_pane

0x8327,	// (0x00012f86) scroll_pane_cp25_ParamLimits

0x8327,	// (0x00012f86) scroll_pane_cp25

0x8340,	// (0x00012f9f) list_double2_graphic_pane_cp2_ParamLimits

0x8340,	// (0x00012f9f) list_double2_graphic_pane_cp2

0x8340,	// (0x00012f9f) list_double2_large_graphic_pane_cp2_ParamLimits

0x8340,	// (0x00012f9f) list_double2_large_graphic_pane_cp2

0x8340,	// (0x00012f9f) list_double2_pane_cp2_ParamLimits

0x8340,	// (0x00012f9f) list_double2_pane_cp2

0x8340,	// (0x00012f9f) list_double_graphic_pane_cp2_ParamLimits

0x8340,	// (0x00012f9f) list_double_graphic_pane_cp2

0x8340,	// (0x00012f9f) list_double_large_graphic_pane_cp2_ParamLimits

0x8340,	// (0x00012f9f) list_double_large_graphic_pane_cp2

0x8340,	// (0x00012f9f) list_double_number_pane_cp2_ParamLimits

0x8340,	// (0x00012f9f) list_double_number_pane_cp2

0x8340,	// (0x00012f9f) list_double_pane_cp2_ParamLimits

0x8340,	// (0x00012f9f) list_double_pane_cp2

0x8364,	// (0x00012fc3) list_single_2graphic_pane_cp2_ParamLimits

0x8364,	// (0x00012fc3) list_single_2graphic_pane_cp2

0x8364,	// (0x00012fc3) list_single_graphic_heading_pane_cp2_ParamLimits

0x8364,	// (0x00012fc3) list_single_graphic_heading_pane_cp2

0x8364,	// (0x00012fc3) list_single_graphic_pane_cp2_ParamLimits

0x8364,	// (0x00012fc3) list_single_graphic_pane_cp2

0x8364,	// (0x00012fc3) list_single_heading_pane_cp2_ParamLimits

0x8364,	// (0x00012fc3) list_single_heading_pane_cp2

0x837d,	// (0x00012fdc) list_single_large_graphic_pane_cp2_ParamLimits

0x837d,	// (0x00012fdc) list_single_large_graphic_pane_cp2

0x8364,	// (0x00012fc3) list_single_number_heading_pane_cp2_ParamLimits

0x8364,	// (0x00012fc3) list_single_number_heading_pane_cp2

0x8364,	// (0x00012fc3) list_single_number_pane_cp2_ParamLimits

0x8364,	// (0x00012fc3) list_single_number_pane_cp2

0x8364,	// (0x00012fc3) list_single_pane_cp2_ParamLimits

0x8364,	// (0x00012fc3) list_single_pane_cp2

0x83f3,	// (0x00013052) bg_popup_sub_pane_cp22

0x50a9,	// (0x0000fd08) popup_side_volume_key_window_g1

0x50d3,	// (0x0000fd32) popup_side_volume_key_window_t1

0x50ef,	// (0x0000fd4e) volume_small_pane_cp1

0x6fd6,	// (0x00011c35) bg_popup_sub_pane_cp24_ParamLimits

0x6fd6,	// (0x00011c35) bg_popup_sub_pane_cp24

0x8409,	// (0x00013068) fep_china_uni_candidate_pane_ParamLimits

0x8409,	// (0x00013068) fep_china_uni_candidate_pane

0x841d,	// (0x0001307c) fep_china_uni_entry_pane

0x842d,	// (0x0001308c) popup_fep_china_uni_window_g1

0x8449,	// (0x000130a8) fep_china_uni_entry_pane_g1

0x8451,	// (0x000130b0) fep_china_uni_entry_pane_g2

0x0001,

0xf723,	// (0x0001a382) fep_china_uni_entry_pane_g

0x8459,	// (0x000130b8) fep_entry_item_pane

0x8463,	// (0x000130c2) fep_candidate_item_pane

0x846b,	// (0x000130ca) fep_china_uni_candidate_pane_g1

0x8473,	// (0x000130d2) fep_china_uni_candidate_pane_g2

0x847b,	// (0x000130da) fep_china_uni_candidate_pane_g3

0x8483,	// (0x000130e2) fep_china_uni_candidate_pane_g4

0x0003,

0xf728,	// (0x0001a387) fep_china_uni_candidate_pane_g

0x6c57,	// (0x000118b6) fep_entry_item_pane_g1

0x848b,	// (0x000130ea) fep_entry_item_pane_t1_ParamLimits

0x848b,	// (0x000130ea) fep_entry_item_pane_t1

0x84a1,	// (0x00013100) fep_candidate_item_pane_t1_ParamLimits

0x84a1,	// (0x00013100) fep_candidate_item_pane_t1

0x84b6,	// (0x00013115) fep_candidate_item_pane_t2_ParamLimits

0x84b6,	// (0x00013115) fep_candidate_item_pane_t2

0x0001,

0xf731,	// (0x0001a390) fep_candidate_item_pane_t_ParamLimits

0xf731,	// (0x0001a390) fep_candidate_item_pane_t

0x6d41,	// (0x000119a0) list_highlight_pane_cp31_ParamLimits

0x6d41,	// (0x000119a0) list_highlight_pane_cp31

0x84c8,	// (0x00013127) level_1_signal_lsc

0x84d1,	// (0x00013130) level_2_signal_lsc

0x84da,	// (0x00013139) level_3_signal_lsc

0x84e3,	// (0x00013142) level_4_signal_lsc

0x84ec,	// (0x0001314b) level_5_signal_lsc

0x84f5,	// (0x00013154) level_6_signal_lsc

0x84fe,	// (0x0001315d) level_7_signal_lsc

0x84fe,	// (0x0001315d) level_1_battery_lsc

0x8507,	// (0x00013166) level_2_battery_lsc

0x8510,	// (0x0001316f) level_3_battery_lsc

0x8519,	// (0x00013178) level_4_battery_lsc

0x8522,	// (0x00013181) level_5_battery_lsc

0x852b,	// (0x0001318a) level_6_battery_lsc

0x84c8,	// (0x00013127) level_7_battery_lsc

0x8534,	// (0x00013193) scroll_handle_focus_pane_g1

0x853d,	// (0x0001319c) scroll_handle_focus_pane_g2

0x8546,	// (0x000131a5) scroll_handle_focus_pane_g3

0x0002,

0xf736,	// (0x0001a395) scroll_handle_focus_pane_g

0x854f,	// (0x000131ae) list_single_2graphic_pane_g1_ParamLimits

0x854f,	// (0x000131ae) list_single_2graphic_pane_g1

0x7600,	// (0x0001225f) list_single_2graphic_pane_g2_ParamLimits

0x7600,	// (0x0001225f) list_single_2graphic_pane_g2

0x7586,	// (0x000121e5) list_single_2graphic_pane_g3_ParamLimits

0x7586,	// (0x000121e5) list_single_2graphic_pane_g3

0x855b,	// (0x000131ba) list_single_2graphic_pane_g4_ParamLimits

0x855b,	// (0x000131ba) list_single_2graphic_pane_g4

0x0003,

0xf73d,	// (0x0001a39c) list_single_2graphic_pane_g_ParamLimits

0xf73d,	// (0x0001a39c) list_single_2graphic_pane_g

0x856c,	// (0x000131cb) list_single_2graphic_pane_t1_ParamLimits

0x856c,	// (0x000131cb) list_single_2graphic_pane_t1

0x859a,	// (0x000131f9) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x859a,	// (0x000131f9) list_double2_graphic_large_graphic_pane_g1

0x76a5,	// (0x00012304) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x76a5,	// (0x00012304) list_double2_graphic_large_graphic_pane_g2

0x76b6,	// (0x00012315) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x76b6,	// (0x00012315) list_double2_graphic_large_graphic_pane_g3

0x85aa,	// (0x00013209) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x85aa,	// (0x00013209) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf746,	// (0x0001a3a5) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf746,	// (0x0001a3a5) list_double2_graphic_large_graphic_pane_g

0x85b6,	// (0x00013215) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x85b6,	// (0x00013215) list_double2_graphic_large_graphic_pane_t1

0x85cc,	// (0x0001322b) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x85cc,	// (0x0001322b) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf74f,	// (0x0001a3ae) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf74f,	// (0x0001a3ae) list_double2_graphic_large_graphic_pane_t

0x871d,	// (0x0001337c) popup_fast_swap_window_ParamLimits

0x871d,	// (0x0001337c) popup_fast_swap_window

0x8739,	// (0x00013398) popup_side_volume_key_window

0x8755,	// (0x000133b4) stacon_top_pane

0x875f,	// (0x000133be) status_pane_ParamLimits

0x875f,	// (0x000133be) status_pane

0x8755,	// (0x000133b4) status_small_pane

0x6c61,	// (0x000118c0) control_pane

0x6c61,	// (0x000118c0) stacon_bottom_pane

0x7a39,	// (0x00012698) scroll_pane_cp121

0x7a30,	// (0x0001268f) set_content_pane

0x85de,	// (0x0001323d) bg_active_tab_pane_g1_cp1

0x85e7,	// (0x00013246) bg_active_tab_pane_g2_cp1

0x85f0,	// (0x0001324f) bg_active_tab_pane_g3_cp1

0x85de,	// (0x0001323d) bg_passive_tab_pane_g1_cp1

0x85e7,	// (0x00013246) bg_passive_tab_pane_g2_cp1

0x85f0,	// (0x0001324f) bg_passive_tab_pane_g3_cp1

0x85f9,	// (0x00013258) bg_active_tab_pane_g1_cp2

0x85e7,	// (0x00013246) bg_active_tab_pane_g2_cp2

0x8602,	// (0x00013261) bg_active_tab_pane_g3_cp2

0x85f9,	// (0x00013258) bg_passive_tab_pane_g1_cp2

0x85e7,	// (0x00013246) bg_passive_tab_pane_g2_cp2

0x8602,	// (0x00013261) bg_passive_tab_pane_g3_cp2

0x860b,	// (0x0001326a) bg_active_tab_pane_g1_cp3

0x85e7,	// (0x00013246) bg_active_tab_pane_g2_cp3

0x8614,	// (0x00013273) bg_active_tab_pane_g3_cp3

0x860b,	// (0x0001326a) bg_passive_tab_pane_g1_cp3

0x85e7,	// (0x00013246) bg_passive_tab_pane_g2_cp3

0x8614,	// (0x00013273) bg_passive_tab_pane_g3_cp3

0x861d,	// (0x0001327c) bg_active_tab_pane_g1_cp4

0x85e7,	// (0x00013246) bg_active_tab_pane_g2_cp4

0x8628,	// (0x00013287) bg_active_tab_pane_g3_cp4

0x861d,	// (0x0001327c) bg_passive_tab_pane_g1_cp4

0x85e7,	// (0x00013246) bg_passive_tab_pane_g2_cp4

0x8628,	// (0x00013287) bg_passive_tab_pane_g3_cp4

0x8671,	// (0x000132d0) bg_active_tab_pane_g1_cp5

0x85e7,	// (0x00013246) bg_active_tab_pane_g2_cp5

0x867a,	// (0x000132d9) bg_active_tab_pane_g3_cp5

0x8671,	// (0x000132d0) bg_passive_tab_pane_g1_cp5

0x85e7,	// (0x00013246) bg_passive_tab_pane_g2_cp5

0x867a,	// (0x000132d9) bg_passive_tab_pane_g3_cp5

0x8683,	// (0x000132e2) list_set_graphic_pane_ParamLimits

0x8683,	// (0x000132e2) list_set_graphic_pane

0x6c61,	// (0x000118c0) bg_set_opt_pane_cp4

0x86a0,	// (0x000132ff) list_set_graphic_pane_g1_ParamLimits

0x86a0,	// (0x000132ff) list_set_graphic_pane_g1

0x86ac,	// (0x0001330b) list_set_graphic_pane_g2_ParamLimits

0x86ac,	// (0x0001330b) list_set_graphic_pane_g2

0x0001,

0xf754,	// (0x0001a3b3) list_set_graphic_pane_g_ParamLimits

0xf754,	// (0x0001a3b3) list_set_graphic_pane_g

0x0009,

0xface,	// (0x0001a72d) volume_small_pane_cp_g

0x86d0,	// (0x0001332f) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x86d0,	// (0x0001332f) list_double2_large_graphic_pane_g1_cp2

0x86dc,	// (0x0001333b) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x86dc,	// (0x0001333b) list_double2_large_graphic_pane_g2_cp2

0x86ed,	// (0x0001334c) list_double2_large_graphic_pane_g3_cp2

0x86f5,	// (0x00013354) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x86f5,	// (0x00013354) list_double2_large_graphic_pane_t1_cp2

0x870b,	// (0x0001336a) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x870b,	// (0x0001336a) list_double2_large_graphic_pane_t2_cp2

0xa3e9,	// (0x00015048) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xa3e9,	// (0x00015048) list_double_large_graphic_pane_g1_cp2

0xa3fa,	// (0x00015059) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xa3fa,	// (0x00015059) list_double_large_graphic_pane_g2_cp2

0x887b,	// (0x000134da) list_double_large_graphic_pane_g3_cp2

0xa40b,	// (0x0001506a) list_double_large_graphic_pane_g4_cp

0xa413,	// (0x00015072) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xa413,	// (0x00015072) list_double_large_graphic_pane_t1_cp2

0xa42a,	// (0x00015089) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xa42a,	// (0x00015089) list_double_large_graphic_pane_t2_cp2

0x876d,	// (0x000133cc) list_double2_graphic_pane_g1_cp2_ParamLimits

0x876d,	// (0x000133cc) list_double2_graphic_pane_g1_cp2

0x877b,	// (0x000133da) list_double2_graphic_pane_g2_cp2_ParamLimits

0x877b,	// (0x000133da) list_double2_graphic_pane_g2_cp2

0x878c,	// (0x000133eb) list_double2_graphic_pane_g3_cp2

0x8796,	// (0x000133f5) list_double2_graphic_pane_t1_cp2_ParamLimits

0x8796,	// (0x000133f5) list_double2_graphic_pane_t1_cp2

0x87ac,	// (0x0001340b) list_double2_graphic_pane_t2_cp2_ParamLimits

0x87ac,	// (0x0001340b) list_double2_graphic_pane_t2_cp2

0x87be,	// (0x0001341d) list_single_number_heading_pane_g1_cp2_ParamLimits

0x87be,	// (0x0001341d) list_single_number_heading_pane_g1_cp2

0x87ca,	// (0x00013429) list_single_number_heading_pane_g2_cp2

0x87d2,	// (0x00013431) list_single_number_heading_pane_t1_cp2_ParamLimits

0x87d2,	// (0x00013431) list_single_number_heading_pane_t1_cp2

0x87e8,	// (0x00013447) list_single_number_heading_pane_t2_cp2_ParamLimits

0x87e8,	// (0x00013447) list_single_number_heading_pane_t2_cp2

0x87fa,	// (0x00013459) list_single_number_heading_pane_t3_cp2_ParamLimits

0x87fa,	// (0x00013459) list_single_number_heading_pane_t3_cp2

0x87be,	// (0x0001341d) list_single_heading_pane_g1_cp2_ParamLimits

0x87be,	// (0x0001341d) list_single_heading_pane_g1_cp2

0x87ca,	// (0x00013429) list_single_heading_pane_g2_cp2

0x87d2,	// (0x00013431) list_single_heading_pane_t1_cp2_ParamLimits

0x87d2,	// (0x00013431) list_single_heading_pane_t1_cp2

0xa1f1,	// (0x00014e50) list_single_heading_pane_t2_cp2_ParamLimits

0xa1f1,	// (0x00014e50) list_single_heading_pane_t2_cp2

0xa139,	// (0x00014d98) list_double_graphic_pane_g1_cp2_ParamLimits

0xa139,	// (0x00014d98) list_double_graphic_pane_g1_cp2

0xa145,	// (0x00014da4) list_double_graphic_pane_g2_cp2_ParamLimits

0xa145,	// (0x00014da4) list_double_graphic_pane_g2_cp2

0xa154,	// (0x00014db3) list_double_graphic_pane_g3_cp2

0xa15c,	// (0x00014dbb) list_double_graphic_pane_t1_cp2_ParamLimits

0xa15c,	// (0x00014dbb) list_double_graphic_pane_t1_cp2

0xa172,	// (0x00014dd1) list_double_graphic_pane_t2_cp2_ParamLimits

0xa172,	// (0x00014dd1) list_double_graphic_pane_t2_cp2

0x886f,	// (0x000134ce) list_double_number_pane_g1_cp2_ParamLimits

0x886f,	// (0x000134ce) list_double_number_pane_g1_cp2

0x887b,	// (0x000134da) list_double_number_pane_g2_cp2

0xa0fd,	// (0x00014d5c) list_double_number_pane_t1_cp2_ParamLimits

0xa0fd,	// (0x00014d5c) list_double_number_pane_t1_cp2

0xa111,	// (0x00014d70) list_double_number_pane_t2_cp2_ParamLimits

0xa111,	// (0x00014d70) list_double_number_pane_t2_cp2

0xa127,	// (0x00014d86) list_double_number_pane_t3_cp2_ParamLimits

0xa127,	// (0x00014d86) list_double_number_pane_t3_cp2

0x9fe6,	// (0x00014c45) list_single_graphic_pane_g1_cp2_ParamLimits

0x9fe6,	// (0x00014c45) list_single_graphic_pane_g1_cp2

0x88d3,	// (0x00013532) list_single_graphic_pane_g2_cp2_ParamLimits

0x88d3,	// (0x00013532) list_single_graphic_pane_g2_cp2

0x88df,	// (0x0001353e) list_single_graphic_pane_g3_cp2

0x9fbc,	// (0x00014c1b) list_single_graphic_pane_t1_cp2_ParamLimits

0x9fbc,	// (0x00014c1b) list_single_graphic_pane_t1_cp2

0x88d3,	// (0x00013532) list_single_number_pane_g1_cp2_ParamLimits

0x88d3,	// (0x00013532) list_single_number_pane_g1_cp2

0x88df,	// (0x0001353e) list_single_number_pane_g2_cp2

0x9fbc,	// (0x00014c1b) list_single_number_pane_t1_cp2_ParamLimits

0x9fbc,	// (0x00014c1b) list_single_number_pane_t1_cp2

0x9fd2,	// (0x00014c31) list_single_number_pane_t2_cp2_ParamLimits

0x9fd2,	// (0x00014c31) list_single_number_pane_t2_cp2

0x86dc,	// (0x0001333b) list_double2_pane_g1_cp2_ParamLimits

0x86dc,	// (0x0001333b) list_double2_pane_g1_cp2

0x86ed,	// (0x0001334c) list_double2_pane_g2_cp2

0x8847,	// (0x000134a6) list_double2_pane_t1_cp2_ParamLimits

0x8847,	// (0x000134a6) list_double2_pane_t1_cp2

0x885d,	// (0x000134bc) list_double2_pane_t2_cp2_ParamLimits

0x885d,	// (0x000134bc) list_double2_pane_t2_cp2

0x886f,	// (0x000134ce) list_double_pane_g1_cp2_ParamLimits

0x886f,	// (0x000134ce) list_double_pane_g1_cp2

0x887b,	// (0x000134da) list_double_pane_g2_cp2

0x8883,	// (0x000134e2) list_double_pane_t1_cp2_ParamLimits

0x8883,	// (0x000134e2) list_double_pane_t1_cp2

0x8899,	// (0x000134f8) list_double_pane_t2_cp2_ParamLimits

0x8899,	// (0x000134f8) list_double_pane_t2_cp2

0x88c3,	// (0x00013522) list_single_pane_cp2_g3

0x88d3,	// (0x00013532) list_single_pane_g1_cp2_ParamLimits

0x88d3,	// (0x00013532) list_single_pane_g1_cp2

0x88df,	// (0x0001353e) list_single_pane_g2_cp2

0x88e7,	// (0x00013546) list_single_pane_t1_cp2_ParamLimits

0x88e7,	// (0x00013546) list_single_pane_t1_cp2

0x88ff,	// (0x0001355e) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x88ff,	// (0x0001355e) list_single_large_graphic_pane_g1_cp2

0x890b,	// (0x0001356a) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x890b,	// (0x0001356a) list_single_large_graphic_pane_g2_cp2

0x8917,	// (0x00013576) list_single_large_graphic_pane_g3_cp2

0x891f,	// (0x0001357e) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x891f,	// (0x0001357e) list_single_large_graphic_pane_g4_cp1

0x8939,	// (0x00013598) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x8939,	// (0x00013598) list_single_large_graphic_pane_t1_cp2

0x9f88,	// (0x00014be7) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x9f88,	// (0x00014be7) list_single_graphic_heading_pane_g1_cp2

0x9f55,	// (0x00014bb4) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x9f55,	// (0x00014bb4) list_single_graphic_heading_pane_g4_cp2

0x88df,	// (0x0001353e) list_single_graphic_heading_pane_g5_cp2

0x9f94,	// (0x00014bf3) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x9f94,	// (0x00014bf3) list_single_graphic_heading_pane_t1_cp2

0x9faa,	// (0x00014c09) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x9faa,	// (0x00014c09) list_single_graphic_heading_pane_t2_cp2

0x9f49,	// (0x00014ba8) list_single_2graphic_pane_g1_cp2_ParamLimits

0x9f49,	// (0x00014ba8) list_single_2graphic_pane_g1_cp2

0x9f55,	// (0x00014bb4) list_single_2graphic_pane_g2_cp2_ParamLimits

0x9f55,	// (0x00014bb4) list_single_2graphic_pane_g2_cp2

0x88df,	// (0x0001353e) list_single_2graphic_pane_g3_cp2

0x9f66,	// (0x00014bc5) list_single_2graphic_pane_g4_cp2_ParamLimits

0x9f66,	// (0x00014bc5) list_single_2graphic_pane_g4_cp2

0x9f72,	// (0x00014bd1) list_single_2graphic_pane_t1_cp2_ParamLimits

0x9f72,	// (0x00014bd1) list_single_2graphic_pane_t1_cp2

0x6c57,	// (0x000118b6) list_highlight_pane_g10_cp1

0x9b21,	// (0x00014780) list_highlight_pane_g1_cp1

0x9b29,	// (0x00014788) list_highlight_pane_g2_cp1

0x9b31,	// (0x00014790) list_highlight_pane_g3_cp1

0x9b39,	// (0x00014798) list_highlight_pane_g4_cp1

0x9b41,	// (0x000147a0) list_highlight_pane_g5_cp1

0x9b49,	// (0x000147a8) list_highlight_pane_g6_cp1

0x9b51,	// (0x000147b0) list_highlight_pane_g7_cp1

0x9b59,	// (0x000147b8) list_highlight_pane_g8_cp1

0x9b61,	// (0x000147c0) list_highlight_pane_g9_cp1

0x9a41,	// (0x000146a0) form_field_slider_pane_t3

0x9a4f,	// (0x000146ae) form_field_slider_pane_t4

0x9a5d,	// (0x000146bc) slider_form_pane_ParamLimits

0x9a5d,	// (0x000146bc) slider_form_pane

0x6c61,	// (0x000118c0) control_abbreviations

0x6c61,	// (0x000118c0) control_conventions

0x6c61,	// (0x000118c0) control_definitions

0x6c61,	// (0x000118c0) format_table_attribute

0xa23b,	// (0x00014e9a) bg_popup_preview_window_pane_g9

0x6c61,	// (0x000118c0) format_table_data2

0x6c61,	// (0x000118c0) format_table_data3

0x6c61,	// (0x000118c0) format_table_data_example

0x0008,

0x6c61,	// (0x000118c0) intro_purpose

0xf8f0,	// (0x0001a54f) bg_popup_preview_window_pane_g

0x6c61,	// (0x000118c0) texts_category

0x6c61,	// (0x000118c0) texts_graphics

0x894f,	// (0x000135ae) text_digital

0x895e,	// (0x000135bd) text_primary

0x896d,	// (0x000135cc) text_primary_small

0x897c,	// (0x000135db) text_secondary

0x898b,	// (0x000135ea) text_title

0xaaae,	// (0x0001570d) bg_passive_tab_pane_g1_cp3_srt

0x85e7,	// (0x00013246) bg_passive_tab_pane_g2_cp3_srt

0xaab7,	// (0x00015716) bg_passive_tab_pane_g3_cp3_srt

0x6d41,	// (0x000119a0) bg_active_tab_pane_cp3_srt_ParamLimits

0x6d41,	// (0x000119a0) bg_active_tab_pane_cp3_srt

0xaac0,	// (0x0001571f) tabs_4_active_pane_srt_g1

0xaac8,	// (0x00015727) tabs_4_active_pane_srt_t1_ParamLimits

0xaac8,	// (0x00015727) tabs_4_active_pane_srt_t1

0xaaae,	// (0x0001570d) bg_active_tab_pane_g1_cp3_copy1

0x85e7,	// (0x00013246) bg_active_tab_pane_g2_cp3_copy1

0xaab7,	// (0x00015716) bg_active_tab_pane_g3_cp3_copy1

0x6d41,	// (0x000119a0) tabs_2_long_active_pane_srt_ParamLimits

0x6d41,	// (0x000119a0) tabs_2_long_active_pane_srt

0x6d41,	// (0x000119a0) tabs_2_long_passive_pane_srt_ParamLimits

0x6d41,	// (0x000119a0) tabs_2_long_passive_pane_srt

0x7e95,	// (0x00012af4) bg_passive_tab_pane_cp4_srt_ParamLimits

0x7e95,	// (0x00012af4) bg_passive_tab_pane_cp4_srt

0xa6a7,	// (0x00015306) bg_passive_tab_pane_g1_cp4_srt

0x85e7,	// (0x00013246) bg_passive_tab_pane_g2_cp4_srt

0xa6b0,	// (0x0001530f) bg_passive_tab_pane_g3_cp4_srt

0x7e74,	// (0x00012ad3) bg_active_tab_pane_cp4_srt_ParamLimits

0x7e74,	// (0x00012ad3) bg_active_tab_pane_cp4_srt

0xa6b9,	// (0x00015318) tabs_2_long_active_pane_srt_t1_ParamLimits

0xa6b9,	// (0x00015318) tabs_2_long_active_pane_srt_t1

0xa6a7,	// (0x00015306) bg_active_tab_pane_g1_cp4_srt

0x85e7,	// (0x00013246) bg_active_tab_pane_g2_cp4_srt

0xa6b0,	// (0x0001530f) bg_active_tab_pane_g3_cp4_srt

0x6fd6,	// (0x00011c35) tabs_3_long_active_pane_srt_ParamLimits

0x6fd6,	// (0x00011c35) tabs_3_long_active_pane_srt

0x6fd6,	// (0x00011c35) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x6fd6,	// (0x00011c35) tabs_3_long_passive_pane_cp_srt

0x6fd6,	// (0x00011c35) tabs_3_long_passive_pane_srt_ParamLimits

0x6fd6,	// (0x00011c35) tabs_3_long_passive_pane_srt

0x7e95,	// (0x00012af4) bg_passive_tab_pane_cp5_srt_ParamLimits

0x7e95,	// (0x00012af4) bg_passive_tab_pane_cp5_srt

0x8671,	// (0x000132d0) bg_passive_tab_pane_g1_cp5_srt

0x85e7,	// (0x00013246) bg_passive_tab_pane_g2_cp5_srt

0x867a,	// (0x000132d9) bg_passive_tab_pane_g3_cp5_srt

0x7e74,	// (0x00012ad3) bg_active_tab_pane_cp5_srt_ParamLimits

0x7e74,	// (0x00012ad3) bg_active_tab_pane_cp5_srt

0xa695,	// (0x000152f4) tabs_3_long_active_pane_srt_t1_ParamLimits

0xa695,	// (0x000152f4) tabs_3_long_active_pane_srt_t1

0x8671,	// (0x000132d0) bg_active_tab_pane_g1_cp5_srt

0x85e7,	// (0x00013246) bg_active_tab_pane_g2_cp5_srt

0x867a,	// (0x000132d9) bg_active_tab_pane_g3_cp5_srt

0xa687,	// (0x000152e6) navi_text_pane_srt_t1

0xa67f,	// (0x000152de) navi_icon_pane_srt_g1

0x8b52,	// (0x000137b1) midp_editing_number_pane_srt

0x899a,	// (0x000135f9) midp_ticker_pane_srt

0x8b5a,	// (0x000137b9) midp_ticker_pane_srt_g1

0x8b62,	// (0x000137c1) midp_ticker_pane_srt_g2

0x0001,

0xf773,	// (0x0001a3d2) midp_ticker_pane_srt_g

0x8b6a,	// (0x000137c9) midp_ticker_pane_srt_t1

0xa670,	// (0x000152cf) midp_editing_number_pane_t1_copy1

0x7e95,	// (0x00012af4) listscroll_midp_pane

0x7e95,	// (0x00012af4) midp_form_pane

0x8a04,	// (0x00013663) midp_info_popup_window_ParamLimits

0x8a04,	// (0x00013663) midp_info_popup_window

0x7d5d,	// (0x000129bc) bg_popup_sub_pane_cp50_ParamLimits

0x7d5d,	// (0x000129bc) bg_popup_sub_pane_cp50

0x9759,	// (0x000143b8) listscroll_midp_info_pane_ParamLimits

0x9759,	// (0x000143b8) listscroll_midp_info_pane

0x9741,	// (0x000143a0) listscroll_form_midp_pane_ParamLimits

0x9741,	// (0x000143a0) listscroll_form_midp_pane

0x974d,	// (0x000143ac) scroll_bar_cp050

0x9721,	// (0x00014380) list_midp_pane

0xb782,	// (0x000163e1) signal_pane_g2_cp

0x965b,	// (0x000142ba) listscroll_midp_info_pane_t1_ParamLimits

0x965b,	// (0x000142ba) listscroll_midp_info_pane_t1

0x9673,	// (0x000142d2) listscroll_midp_info_pane_t2_ParamLimits

0x9673,	// (0x000142d2) listscroll_midp_info_pane_t2

0x96b1,	// (0x00014310) listscroll_midp_info_pane_t3_ParamLimits

0x96b1,	// (0x00014310) listscroll_midp_info_pane_t3

0x96eb,	// (0x0001434a) listscroll_midp_info_pane_t4_ParamLimits

0x96eb,	// (0x0001434a) listscroll_midp_info_pane_t4

0x0003,

0xf82b,	// (0x0001a48a) listscroll_midp_info_pane_t_ParamLimits

0xf82b,	// (0x0001a48a) listscroll_midp_info_pane_t

0x7e21,	// (0x00012a80) scroll_pane_cp21

0x95f9,	// (0x00014258) form_midp_field_choice_group_pane

0x9602,	// (0x00014261) form_midp_field_text_pane

0x9641,	// (0x000142a0) form_midp_field_time_pane

0x9649,	// (0x000142a8) form_midp_gauge_slider_pane

0x9652,	// (0x000142b1) form_midp_gauge_wait_pane

0x6c61,	// (0x000118c0) form_midp_image_pane

0x95ca,	// (0x00014229) list_single_midp_pane_ParamLimits

0x95ca,	// (0x00014229) list_single_midp_pane

0x9582,	// (0x000141e1) form_midp_field_text_pane_t1

0x933d,	// (0x00013f9c) input_focus_pane_cp050

0x95b9,	// (0x00014218) list_midp_form_text_pane

0x9551,	// (0x000141b0) form_midp_field_choice_group_pane_t1

0x955f,	// (0x000141be) input_focus_pane_cp051

0x9573,	// (0x000141d2) list_midp_choice_pane

0x6c61,	// (0x000118c0) status_idle_pane

0x9535,	// (0x00014194) form_midp_field_time_pane_t1

0x6c57,	// (0x000118b6) wait_anim_pane_g2_copy1

0x9543,	// (0x000141a2) form_midp_field_time_pane_t2

0x0001,

0x8ab2,	// (0x00013711) aid_navinavi_width_2_pane

0xf826,	// (0x0001a485) form_midp_field_time_pane_t

0x6c61,	// (0x000118c0) input_focus_pane_cp052

0x6c61,	// (0x000118c0) bg_input_focus_pane_cp040

0x94f5,	// (0x00014154) form_midp_gauge_slider_pane_t1

0x9503,	// (0x00014162) form_midp_gauge_slider_pane_t2

0x9511,	// (0x00014170) form_midp_gauge_slider_pane_t3

0x951f,	// (0x0001417e) form_midp_gauge_slider_pane_t4

0x0003,

0xf81d,	// (0x0001a47c) form_midp_gauge_slider_pane_t

0x952d,	// (0x0001418c) form_midp_slider_pane

0x6d41,	// (0x000119a0) bg_input_focus_pane_cp041_ParamLimits

0x6d41,	// (0x000119a0) bg_input_focus_pane_cp041

0x94c2,	// (0x00014121) form_midp_gauge_wait_pane_t1_ParamLimits

0x94c2,	// (0x00014121) form_midp_gauge_wait_pane_t1

0x94d4,	// (0x00014133) form_midp_gauge_wait_pane_t2_ParamLimits

0x94d4,	// (0x00014133) form_midp_gauge_wait_pane_t2

0x0001,

0xf818,	// (0x0001a477) form_midp_gauge_wait_pane_t_ParamLimits

0xf818,	// (0x0001a477) form_midp_gauge_wait_pane_t

0x94e6,	// (0x00014145) form_midp_wait_pane_ParamLimits

0x94e6,	// (0x00014145) form_midp_wait_pane

0x948c,	// (0x000140eb) form_midp_image_pane_g1

0x9495,	// (0x000140f4) form_midp_image_pane_t1

0x94a4,	// (0x00014103) form_midp_image_pane_t2

0x94b3,	// (0x00014112) form_midp_image_pane_t3

0x0002,

0xf811,	// (0x0001a470) form_midp_image_pane_t

0x9474,	// (0x000140d3) list_single_midp_pane_g1

0x947d,	// (0x000140dc) list_single_midp_pane_t1

0x944c,	// (0x000140ab) list_midp_form_item_pane_ParamLimits

0x944c,	// (0x000140ab) list_midp_form_item_pane

0x8a5a,	// (0x000136b9) list_midp_form_item_pane_t1

0x8a69,	// (0x000136c8) midp_ticker_pane_g1

0x8a75,	// (0x000136d4) midp_ticker_pane_g2

0x0001,

0xf759,	// (0x0001a3b8) midp_ticker_pane_g

0x8a81,	// (0x000136e0) midp_ticker_pane_t1

0xa936,	// (0x00015595) midp_editing_number_pane_t1

0xa914,	// (0x00015573) midp_editing_number_pane

0xa923,	// (0x00015582) midp_ticker_pane

0xa638,	// (0x00015297) ai_message_heading_pane

0x6c61,	// (0x000118c0) bg_popup_window_pane_cp14

0xa640,	// (0x0001529f) listscroll_ai_message_pane

0xa5c2,	// (0x00015221) ai_message_heading_pane_g1_ParamLimits

0xa5c2,	// (0x00015221) ai_message_heading_pane_g1

0xa5ce,	// (0x0001522d) ai_message_heading_pane_g2_ParamLimits

0xa5ce,	// (0x0001522d) ai_message_heading_pane_g2

0xa5da,	// (0x00015239) ai_message_heading_pane_g3_ParamLimits

0xa5da,	// (0x00015239) ai_message_heading_pane_g3

0xa5e6,	// (0x00015245) ai_message_heading_pane_g4_ParamLimits

0xa5e6,	// (0x00015245) ai_message_heading_pane_g4

0x0003,

0xf952,	// (0x0001a5b1) ai_message_heading_pane_g_ParamLimits

0xf952,	// (0x0001a5b1) ai_message_heading_pane_g

0xa5f2,	// (0x00015251) ai_message_heading_pane_t1_ParamLimits

0xa5f2,	// (0x00015251) ai_message_heading_pane_t1

0xa60c,	// (0x0001526b) ai_message_heading_pane_t2_ParamLimits

0xa60c,	// (0x0001526b) ai_message_heading_pane_t2

0x0001,

0xf95b,	// (0x0001a5ba) ai_message_heading_pane_t_ParamLimits

0xf95b,	// (0x0001a5ba) ai_message_heading_pane_t

0xa61e,	// (0x0001527d) bg_popup_heading_pane_cp1_ParamLimits

0xa61e,	// (0x0001527d) bg_popup_heading_pane_cp1

0xa5b0,	// (0x0001520f) list_ai_message_pane_ParamLimits

0xa5b0,	// (0x0001520f) list_ai_message_pane

0x7e21,	// (0x00012a80) scroll_pane_cp10

0xa54c,	// (0x000151ab) list_ai_message_pane_g1

0xa554,	// (0x000151b3) list_ai_message_pane_g2

0x0001,

0xf92f,	// (0x0001a58e) list_ai_message_pane_g

0xa55c,	// (0x000151bb) list_ai_message_pane_t1_ParamLimits

0xa55c,	// (0x000151bb) list_ai_message_pane_t1

0xa571,	// (0x000151d0) list_ai_message_pane_t2_ParamLimits

0xa571,	// (0x000151d0) list_ai_message_pane_t2

0xa586,	// (0x000151e5) list_ai_message_pane_t3_ParamLimits

0xa586,	// (0x000151e5) list_ai_message_pane_t3

0xa59b,	// (0x000151fa) list_ai_message_pane_t4_ParamLimits

0xa59b,	// (0x000151fa) list_ai_message_pane_t4

0x0003,

0xf934,	// (0x0001a593) list_ai_message_pane_t_ParamLimits

0xf934,	// (0x0001a593) list_ai_message_pane_t

0xa537,	// (0x00015196) cell_ai_soft_ind_pane_ParamLimits

0xa537,	// (0x00015196) cell_ai_soft_ind_pane

0x8a93,	// (0x000136f2) cell_ai_soft_ind_pane_g1_ParamLimits

0x8a93,	// (0x000136f2) cell_ai_soft_ind_pane_g1

0x6c61,	// (0x000118c0) grid_highlight_cp1

0x8aa0,	// (0x000136ff) text_secondary_cp56_ParamLimits

0x8aa0,	// (0x000136ff) text_secondary_cp56

0xa50c,	// (0x0001516b) example_general_pane_ParamLimits

0xa50c,	// (0x0001516b) example_general_pane

0xa518,	// (0x00015177) example_parent_pane_g1_ParamLimits

0xa518,	// (0x00015177) example_parent_pane_g1

0xa524,	// (0x00015183) example_parent_pane_t1_ParamLimits

0xa524,	// (0x00015183) example_parent_pane_t1

0x57de,	// (0x0001043d) popup_preview_text_window_ParamLimits

0x57de,	// (0x0001043d) popup_preview_text_window

0x88cb,	// (0x0001352a) list_single_pane_cp2_g4

0x708c,	// (0x00011ceb) bg_popup_preview_window_pane_ParamLimits

0x708c,	// (0x00011ceb) bg_popup_preview_window_pane

0xa243,	// (0x00014ea2) popup_preview_text_window_t1_ParamLimits

0xa243,	// (0x00014ea2) popup_preview_text_window_t1

0xa261,	// (0x00014ec0) popup_preview_text_window_t2_ParamLimits

0xa261,	// (0x00014ec0) popup_preview_text_window_t2

0xa2aa,	// (0x00014f09) popup_preview_text_window_t3_ParamLimits

0xa2aa,	// (0x00014f09) popup_preview_text_window_t3

0xa2ef,	// (0x00014f4e) popup_preview_text_window_t4_ParamLimits

0xa2ef,	// (0x00014f4e) popup_preview_text_window_t4

0x0004,

0xf903,	// (0x0001a562) popup_preview_text_window_t_ParamLimits

0xf903,	// (0x0001a562) popup_preview_text_window_t

0xa36d,	// (0x00014fcc) scroll_pane_cp11

0x9219,	// (0x00013e78) bg_popup_preview_window_pane_g1

0xa203,	// (0x00014e62) bg_popup_preview_window_pane_g2

0xa20b,	// (0x00014e6a) bg_popup_preview_window_pane_g3

0xa213,	// (0x00014e72) bg_popup_preview_window_pane_g4

0xa21b,	// (0x00014e7a) bg_popup_preview_window_pane_g5

0xa223,	// (0x00014e82) bg_popup_preview_window_pane_g6

0xa22b,	// (0x00014e8a) bg_popup_preview_window_pane_g7

0xa233,	// (0x00014e92) bg_popup_preview_window_pane_g8

0x49e4,	// (0x0000f643) aid_popup_width_pane

0x57bc,	// (0x0001041b) popup_midp_note_alarm_window_ParamLimits

0x57bc,	// (0x0001041b) popup_midp_note_alarm_window

0x7afa,	// (0x00012759) data_form_pane_ParamLimits

0x7b06,	// (0x00012765) form_field_data_pane_g1

0x7b10,	// (0x0001276f) form_field_data_pane_t1_ParamLimits

0x7b28,	// (0x00012787) input_focus_pane_ParamLimits

0x7b36,	// (0x00012795) data_form_wide_pane_ParamLimits

0x7b42,	// (0x000127a1) form_field_data_wide_pane_g1

0x7b6e,	// (0x000127cd) form_field_data_wide_pane_t1_ParamLimits

0x7338,	// (0x00011f97) input_focus_pane_cp6_ParamLimits

0x7dce,	// (0x00012a2d) input_popup_find_pane_g1_ParamLimits

0x7dce,	// (0x00012a2d) input_popup_find_pane_g1

0x4f58,	// (0x0000fbb7) aid_navi_side_left_pane

0x4f6d,	// (0x0000fbcc) aid_navi_side_right_pane

0x9c1c,	// (0x0001487b) bg_popup_window_pane_cp30_ParamLimits

0x9c1c,	// (0x0001487b) bg_popup_window_pane_cp30

0x9c96,	// (0x000148f5) popup_midp_note_alarm_window_g1_ParamLimits

0x9c96,	// (0x000148f5) popup_midp_note_alarm_window_g1

0x9cc6,	// (0x00014925) popup_midp_note_alarm_window_t1_ParamLimits

0x9cc6,	// (0x00014925) popup_midp_note_alarm_window_t1

0x9d67,	// (0x000149c6) popup_midp_note_alarm_window_t2_ParamLimits

0x9d67,	// (0x000149c6) popup_midp_note_alarm_window_t2

0x9e15,	// (0x00014a74) popup_midp_note_alarm_window_t3_ParamLimits

0x9e15,	// (0x00014a74) popup_midp_note_alarm_window_t3

0x9e47,	// (0x00014aa6) popup_midp_note_alarm_window_t4_ParamLimits

0x9e47,	// (0x00014aa6) popup_midp_note_alarm_window_t4

0x9e6d,	// (0x00014acc) popup_midp_note_alarm_window_t5_ParamLimits

0x9e6d,	// (0x00014acc) popup_midp_note_alarm_window_t5

0x000a,

0xf8a0,	// (0x0001a4ff) popup_midp_note_alarm_window_t_ParamLimits

0xf8a0,	// (0x0001a4ff) popup_midp_note_alarm_window_t

0x9f19,	// (0x00014b78) wait_bar_pane_cp1_ParamLimits

0x9f19,	// (0x00014b78) wait_bar_pane_cp1

0x6c61,	// (0x000118c0) wait_anim_pane_copy1

0x6c61,	// (0x000118c0) wait_border_pane_copy1

0x9902,	// (0x00014561) wait_border_pane_g1_copy1

0x7b88,	// (0x000127e7) form_field_popup_pane_g1

0x7b90,	// (0x000127ef) form_field_popup_pane_t1_ParamLimits

0x7b28,	// (0x00012787) input_focus_pane_cp7_ParamLimits

0x7ba8,	// (0x00012807) list_form_pane_ParamLimits

0x7bb4,	// (0x00012813) form_field_popup_wide_pane_g1

0x7bbc,	// (0x0001281b) form_field_popup_wide_pane_t1_ParamLimits

0x7b28,	// (0x00012787) input_focus_pane_cp8_ParamLimits

0x7bd1,	// (0x00012830) list_form_wide_pane_ParamLimits

0xab3a,	// (0x00015799) aid_size_cell_graphic_pane

0x7ca8,	// (0x00012907) data_form_pane_t1_ParamLimits

0xa8e1,	// (0x00015540) data_form_wide_pane_t1_ParamLimits

0x8dbd,	// (0x00013a1c) bg_status_flat_pane

0x6ca1,	// (0x00011900) title_pane_t1_ParamLimits

0x6d09,	// (0x00011968) title_pane_t2_ParamLimits

0x6d2f,	// (0x0001198e) title_pane_t3_ParamLimits

0xf55d,	// (0x0001a1bc) title_pane_t_ParamLimits

0x829e,	// (0x00012efd) level_1_signal_ParamLimits

0x82ab,	// (0x00012f0a) level_2_signal_ParamLimits

0x82b8,	// (0x00012f17) level_3_signal_ParamLimits

0x82c5,	// (0x00012f24) level_4_signal_ParamLimits

0x82d2,	// (0x00012f31) level_5_signal_ParamLimits

0x82df,	// (0x00012f3e) level_6_signal_ParamLimits

0x82ec,	// (0x00012f4b) level_7_signal_ParamLimits

0x829e,	// (0x00012efd) level_1_battery_ParamLimits

0x82ab,	// (0x00012f0a) level_2_battery_ParamLimits

0x82b8,	// (0x00012f17) level_3_battery_ParamLimits

0x82c5,	// (0x00012f24) level_4_battery_ParamLimits

0x82d2,	// (0x00012f31) level_5_battery_ParamLimits

0x82df,	// (0x00012f3e) level_6_battery_ParamLimits

0x82ec,	// (0x00012f4b) level_7_battery_ParamLimits

0x9b21,	// (0x00014780) bg_status_flat_pane_g1

0x9b29,	// (0x00014788) bg_status_flat_pane_g2

0x9b31,	// (0x00014790) bg_status_flat_pane_g3

0x9b39,	// (0x00014798) bg_status_flat_pane_g4

0x9b41,	// (0x000147a0) bg_status_flat_pane_g5

0x9b49,	// (0x000147a8) bg_status_flat_pane_g6

0x9b51,	// (0x000147b0) bg_status_flat_pane_g7

0x6d57,	// (0x000119b6) tabs_3_active_pane_t1_ParamLimits

0x6d57,	// (0x000119b6) tabs_3_passive_pane_t1_ParamLimits

0x6d71,	// (0x000119d0) tabs_4_active_pane_t1_ParamLimits

0x6d71,	// (0x000119d0) tabs_4_1_passive_pane_t1_ParamLimits

0x7e62,	// (0x00012ac1) tabs_2_active_pane_t1_ParamLimits

0x7e62,	// (0x00012ac1) tabs_2_passive_pane_t1_ParamLimits

0x7e74,	// (0x00012ad3) bg_active_tab_pane_cp4_ParamLimits

0x7e82,	// (0x00012ae1) tabs_2_long_active_pane_t1_ParamLimits

0x7e95,	// (0x00012af4) bg_passive_tab_pane_cp4_ParamLimits

0x5b03,	// (0x00010762) list_single_midp_graphic_pane_t1_ParamLimits

0x7e74,	// (0x00012ad3) bg_active_tab_pane_cp5_ParamLimits

0x7ea1,	// (0x00012b00) tabs_3_long_active_pane_t1_ParamLimits

0x7e95,	// (0x00012af4) bg_passive_tab_pane_cp5_ParamLimits

0x5b03,	// (0x00010762) list_single_midp_graphic_pane_t1

0x8dbd,	// (0x00013a1c) bg_status_flat_pane_ParamLimits

0x8e80,	// (0x00013adf) indicator_pane_cp2_ParamLimits

0x8e80,	// (0x00013adf) indicator_pane_cp2

0x8fa5,	// (0x00013c04) navi_pane_srt_ParamLimits

0x8fa5,	// (0x00013c04) navi_pane_srt

0x8fc9,	// (0x00013c28) popup_clock_digital_analogue_window_cp1

0x6e38,	// (0x00011a97) indicator_pane_t1

0x899a,	// (0x000135f9) copy_highlight_pane

0x899a,	// (0x000135f9) cursor_graphics_pane

0x899a,	// (0x000135f9) graphic_within_text_pane

0x899a,	// (0x000135f9) link_highlight_pane

0xa330,	// (0x00014f8f) popup_preview_text_window_t5_ParamLimits

0xa330,	// (0x00014f8f) popup_preview_text_window_t5

0x8aba,	// (0x00013719) cursor_digital_pane

0x8aba,	// (0x00013719) cursor_primary_pane

0x8acb,	// (0x0001372a) cursor_primary_small_pane

0x8ad3,	// (0x00013732) cursor_secondary_pane

0x8adb,	// (0x0001373a) cursor_title_pane

0x8aba,	// (0x00013719) link_highlight_digital_pane

0x8ac2,	// (0x00013721) link_highlight_primary_pane

0x8acb,	// (0x0001372a) link_highlight_primary_small_pane

0x8ad3,	// (0x00013732) link_highlight_secondary_pane

0x8adb,	// (0x0001373a) link_highlight_title_pane

0x8aba,	// (0x00013719) copy_highlight_digital_pane

0x8aba,	// (0x00013719) copy_highlight_primary_pane

0x8acb,	// (0x0001372a) copy_highlight_primary_small_pane

0x8ad3,	// (0x00013732) copy_highlight_secondary_pane

0x8adb,	// (0x0001373a) copy_highlight_title_pane

0x8ad3,	// (0x00013732) graphic_text_digital_pane

0x9bbf,	// (0x0001481e) graphic_text_primary_pane

0x9bc8,	// (0x00014827) graphic_text_primary_small_pane

0x8acb,	// (0x0001372a) graphic_text_secondary_pane

0x8aba,	// (0x00013719) graphic_text_title_pane

0x8ae3,	// (0x00013742) cursor_primary_pane_g1

0x9bb1,	// (0x00014810) cursor_text_primary_t1

0x9b99,	// (0x000147f8) cursor_primary_small_pane_g1

0x9ba3,	// (0x00014802) cursor_text_primary_small_t1

0x9b81,	// (0x000147e0) cursor_primary_small_pane_g1_copy1

0x9b8b,	// (0x000147ea) cursor_text_primary_small_t1_copy1

0x9b69,	// (0x000147c8) cursor_text_title_t1

0x9b77,	// (0x000147d6) cursor_title_pane_g1

0x8ae3,	// (0x00013742) cursor_digital_pane_g1

0x8aed,	// (0x0001374c) cursor_text_digital_t1

0x8b12,	// (0x00013771) link_highlight_primary_pane_g1

0x9b12,	// (0x00014771) link_highlight_primary_pane_t1

0x8afb,	// (0x0001375a) link_highlight_primary_small_pane_g1

0x8b03,	// (0x00013762) link_highlight_primary_small_pane_t1

0x8b12,	// (0x00013771) link_highlight_secondary_pane_g1

0x8b1a,	// (0x00013779) link_highlight_secondary_pane_t1

0x9a86,	// (0x000146e5) link_highlight_title_pane_g1

0x9a8e,	// (0x000146ed) link_highlight_title_pane_t1

0x9a6f,	// (0x000146ce) link_highlight_digital_pane_g1

0x9a77,	// (0x000146d6) link_highlight_digital_pane_t1

0x9947,	// (0x000145a6) copy_highlight_primary_pane_g1

0x994f,	// (0x000145ae) copy_highlight_primary_pane_t1

0x9921,	// (0x00014580) copy_highlight_primary_small_pane_g1

0x9938,	// (0x00014597) copy_highlight_primary_small_pane_t1

0x8b29,	// (0x00013788) copy_highlight_secondary_pane_g1

0x8b31,	// (0x00013790) copy_highlight_secondary_pane_t1

0x9921,	// (0x00014580) copy_highlight_title_pane_g1

0x9929,	// (0x00014588) copy_highlight_title_pane_t1

0x9947,	// (0x000145a6) copy_highlight_digital_pane_g1

0xad04,	// (0x00015963) copy_highlight_digital_pane_t1

0xac58,	// (0x000158b7) graphic_text_primary_pane_g1

0xace8,	// (0x00015947) graphic_text_primary_pane_t1

0xacf6,	// (0x00015955) graphic_text_primary_pane_t2

0x0001,

0xf9cf,	// (0x0001a62e) graphic_text_primary_pane_t

0xacc4,	// (0x00015923) graphic_text_primary_small_pane_g1

0xaccc,	// (0x0001592b) graphic_text_primary_small_pane_t1

0xacda,	// (0x00015939) graphic_text_primary_small_pane_t2

0x0001,

0xf9ca,	// (0x0001a629) graphic_text_primary_small_pane_t

0xaca0,	// (0x000158ff) graphic_text_secondary_pane_g1

0xaca8,	// (0x00015907) graphic_text_secondary_pane_t1

0xacb6,	// (0x00015915) graphic_text_secondary_pane_t2

0x0001,

0xf9c5,	// (0x0001a624) graphic_text_secondary_pane_t

0xac7c,	// (0x000158db) graphic_text_title_pane_g1

0xac84,	// (0x000158e3) graphic_text_title_pane_t1

0xac92,	// (0x000158f1) graphic_text_title_pane_t2

0x0001,

0xf9c0,	// (0x0001a61f) graphic_text_title_pane_t

0xac58,	// (0x000158b7) graphic_text_digital_pane_g1

0xac60,	// (0x000158bf) graphic_text_digital_pane_t1

0xac6e,	// (0x000158cd) graphic_text_digital_pane_t2

0x0001,

0xf9bb,	// (0x0001a61a) graphic_text_digital_pane_t

0x6d41,	// (0x000119a0) navi_icon_pane_srt_ParamLimits

0x6d41,	// (0x000119a0) navi_icon_pane_srt

0x6c61,	// (0x000118c0) navi_midp_pane_srt

0x6c61,	// (0x000118c0) navi_navi_pane_srt

0x6d41,	// (0x000119a0) navi_text_pane_srt_ParamLimits

0x6d41,	// (0x000119a0) navi_text_pane_srt

0xac23,	// (0x00015882) navi_navi_icon_text_pane_srt

0xac2b,	// (0x0001588a) navi_navi_pane_srt_g1_ParamLimits

0xac2b,	// (0x0001588a) navi_navi_pane_srt_g1

0xac3d,	// (0x0001589c) navi_navi_pane_srt_g2_ParamLimits

0xac3d,	// (0x0001589c) navi_navi_pane_srt_g2

0x0001,

0xf9b6,	// (0x0001a615) navi_navi_pane_srt_g_ParamLimits

0xf9b6,	// (0x0001a615) navi_navi_pane_srt_g

0xac4f,	// (0x000158ae) navi_navi_tabs_pane_srt

0xac23,	// (0x00015882) navi_navi_text_pane_srt

0xac23,	// (0x00015882) navi_navi_volume_pane_srt

0xac14,	// (0x00015873) navi_navi_text_pane_srt_t1

0x5e7d,	// (0x00010adc) navi_navi_volume_pane_srt_g1

0x5e85,	// (0x00010ae4) volume_small_pane_srt_ParamLimits

0x5e85,	// (0x00010ae4) volume_small_pane_srt

0x5238,	// (0x0000fe97) volume_small_pane_srt_g1_ParamLimits

0x5238,	// (0x0000fe97) volume_small_pane_srt_g1

0x5248,	// (0x0000fea7) volume_small_pane_srt_g2_ParamLimits

0x5248,	// (0x0000fea7) volume_small_pane_srt_g2

0x5259,	// (0x0000feb8) volume_small_pane_srt_g3_ParamLimits

0x5259,	// (0x0000feb8) volume_small_pane_srt_g3

0x526a,	// (0x0000fec9) volume_small_pane_srt_g4_ParamLimits

0x526a,	// (0x0000fec9) volume_small_pane_srt_g4

0x527b,	// (0x0000feda) volume_small_pane_srt_g5_ParamLimits

0x527b,	// (0x0000feda) volume_small_pane_srt_g5

0x528c,	// (0x0000feeb) volume_small_pane_srt_g6_ParamLimits

0x528c,	// (0x0000feeb) volume_small_pane_srt_g6

0x529d,	// (0x0000fefc) volume_small_pane_srt_g7_ParamLimits

0x529d,	// (0x0000fefc) volume_small_pane_srt_g7

0x52ae,	// (0x0000ff0d) volume_small_pane_srt_g8_ParamLimits

0x52ae,	// (0x0000ff0d) volume_small_pane_srt_g8

0x52bf,	// (0x0000ff1e) volume_small_pane_srt_g9_ParamLimits

0x52bf,	// (0x0000ff1e) volume_small_pane_srt_g9

0x52d0,	// (0x0000ff2f) volume_small_pane_srt_g10_ParamLimits

0x52d0,	// (0x0000ff2f) volume_small_pane_srt_g10

0x0009,

0xf75e,	// (0x0001a3bd) volume_small_pane_srt_g_ParamLimits

0xf75e,	// (0x0001a3bd) volume_small_pane_srt_g

0x7135,	// (0x00011d94) query_popup_data_pane_cp2

0xabfa,	// (0x00015859) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xabfa,	// (0x00015859) navi_navi_icon_text_pane_srt_t1

0x9bbf,	// (0x0001481e) navi_tabs_2_long_pane_srt

0x9bbf,	// (0x0001481e) navi_tabs_2_pane_srt

0x9bbf,	// (0x0001481e) navi_tabs_3_long_pane_srt

0x9bbf,	// (0x0001481e) navi_tabs_3_pane_srt

0x9bbf,	// (0x0001481e) navi_tabs_4_pane_srt

0x5e5d,	// (0x00010abc) tabs_2_active_pane_srt_ParamLimits

0x5e5d,	// (0x00010abc) tabs_2_active_pane_srt

0x5e6d,	// (0x00010acc) tabs_2_passive_pane_srt_ParamLimits

0x5e6d,	// (0x00010acc) tabs_2_passive_pane_srt

0x8ce2,	// (0x00013941) bg_passive_tab_pane_cp1_srt_ParamLimits

0x8ce2,	// (0x00013941) bg_passive_tab_pane_cp1_srt

0xabc6,	// (0x00015825) bg_passive_tab_pane_g1_cp1_srt

0x85e7,	// (0x00013246) bg_passive_tab_pane_g2_cp1_srt

0xabcf,	// (0x0001582e) bg_passive_tab_pane_g3_cp1_srt

0x6d41,	// (0x000119a0) bg_active_tab_pane_cp1_srt_ParamLimits

0x6d41,	// (0x000119a0) bg_active_tab_pane_cp1_srt

0xabd8,	// (0x00015837) tabs_2_active_pane_srt_g1

0xabe0,	// (0x0001583f) tabs_2_active_pane_srt_t1_ParamLimits

0xabe0,	// (0x0001583f) tabs_2_active_pane_srt_t1

0xabc6,	// (0x00015825) bg_active_tab_pane_g1_cp1_srt

0x85e7,	// (0x00013246) bg_active_tab_pane_g2_cp1_srt

0xabcf,	// (0x0001582e) bg_active_tab_pane_g3_cp1_srt

0x5e2a,	// (0x00010a89) tabs_3_active_pane_srt_ParamLimits

0x5e2a,	// (0x00010a89) tabs_3_active_pane_srt

0x5e3b,	// (0x00010a9a) tabs_3_passive_pane_cp_srt_ParamLimits

0x5e3b,	// (0x00010a9a) tabs_3_passive_pane_cp_srt

0x5e4c,	// (0x00010aab) tabs_3_passive_pane_srt_ParamLimits

0x5e4c,	// (0x00010aab) tabs_3_passive_pane_srt

0x8ce2,	// (0x00013941) bg_passive_tab_pane_cp2_srt_ParamLimits

0x8ce2,	// (0x00013941) bg_passive_tab_pane_cp2_srt

0x8b40,	// (0x0001379f) bg_passive_tab_pane_g1_cp2_srt

0x85e7,	// (0x00013246) bg_passive_tab_pane_g2_cp2_srt

0x8b49,	// (0x000137a8) bg_passive_tab_pane_g3_cp2_srt

0x6d41,	// (0x000119a0) bg_active_tab_pane_cp2_srt_ParamLimits

0x6d41,	// (0x000119a0) bg_active_tab_pane_cp2_srt

0xabac,	// (0x0001580b) tabs_3_active_pane_srt_g1

0xabb4,	// (0x00015813) tabs_3_active_pane_srt_t1_ParamLimits

0xabb4,	// (0x00015813) tabs_3_active_pane_srt_t1

0x8b40,	// (0x0001379f) bg_active_tab_pane_g1_cp2_srt

0x85e7,	// (0x00013246) bg_active_tab_pane_g2_cp2_srt

0x8b49,	// (0x000137a8) bg_active_tab_pane_g3_cp2_srt

0x5de2,	// (0x00010a41) tabs_4_active_pane_srt_ParamLimits

0x5de2,	// (0x00010a41) tabs_4_active_pane_srt

0x5df4,	// (0x00010a53) tabs_4_passive_pane_cp2_srt_ParamLimits

0x5df4,	// (0x00010a53) tabs_4_passive_pane_cp2_srt

0x5431,	// (0x00010090) aid_size_cell_toolbar

0x7e95,	// (0x00012af4) main_idle_act_pane_ParamLimits

0x55f2,	// (0x00010251) popup_large_graphic_colour_window_ParamLimits

0x5959,	// (0x000105b8) popup_toolbar_window_ParamLimits

0x5959,	// (0x000105b8) popup_toolbar_window

0xa960,	// (0x000155bf) list_single_graphic_2heading_pane_ParamLimits

0xa960,	// (0x000155bf) list_single_graphic_2heading_pane

0x8051,	// (0x00012cb0) aid_size_cell_apps_grid_lsc_pane

0x8063,	// (0x00012cc2) aid_size_cell_apps_grid_prt_pane

0x8ce2,	// (0x00013941) bg_wml_button_pane_cp1_ParamLimits

0x8ce2,	// (0x00013941) bg_wml_button_pane_cp1

0x9582,	// (0x000141e1) form_midp_field_text_pane_t1_ParamLimits

0x933d,	// (0x00013f9c) input_focus_pane_cp050_ParamLimits

0x95b9,	// (0x00014218) list_midp_form_text_pane_ParamLimits

0x955f,	// (0x000141be) input_focus_pane_cp051_ParamLimits

0x9573,	// (0x000141d2) list_midp_choice_pane_ParamLimits

0x93f6,	// (0x00014055) list_single_2graphic_pane_cp3_ParamLimits

0x93f6,	// (0x00014055) list_single_2graphic_pane_cp3

0x941a,	// (0x00014079) list_single_midp_graphic_pane_ParamLimits

0x941a,	// (0x00014079) list_single_midp_graphic_pane

0x5a06,	// (0x00010665) list_single_graphic_2heading_pane_g1_ParamLimits

0x5a06,	// (0x00010665) list_single_graphic_2heading_pane_g1

0x5a12,	// (0x00010671) list_single_graphic_2heading_pane_g4_ParamLimits

0x5a12,	// (0x00010671) list_single_graphic_2heading_pane_g4

0x5a1e,	// (0x0001067d) list_single_graphic_2heading_pane_g5_ParamLimits

0x5a1e,	// (0x0001067d) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b1,	// (0x0001a410) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b1,	// (0x0001a410) list_single_graphic_2heading_pane_g

0x5a2a,	// (0x00010689) list_single_graphic_2heading_pane_t1_ParamLimits

0x5a2a,	// (0x00010689) list_single_graphic_2heading_pane_t1

0x5a3e,	// (0x0001069d) list_single_graphic_2heading_pane_t2_ParamLimits

0x5a3e,	// (0x0001069d) list_single_graphic_2heading_pane_t2

0x5a5a,	// (0x000106b9) list_single_graphic_2heading_pane_t3_ParamLimits

0x5a5a,	// (0x000106b9) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b8,	// (0x0001a417) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b8,	// (0x0001a417) list_single_graphic_2heading_pane_t

0x911d,	// (0x00013d7c) bg_popup_sub_pane_cp2

0x9147,	// (0x00013da6) grid_toobar_pane

0x5a72,	// (0x000106d1) cell_toolbar_pane_ParamLimits

0x5a72,	// (0x000106d1) cell_toolbar_pane

0x91bd,	// (0x00013e1c) cell_toolbar_pane_g1_ParamLimits

0x91bd,	// (0x00013e1c) cell_toolbar_pane_g1

0x91d1,	// (0x00013e30) cell_toolbar_pane_g2_ParamLimits

0x91d1,	// (0x00013e30) cell_toolbar_pane_g2

0x0001,

0xf7c6,	// (0x0001a425) cell_toolbar_pane_g_ParamLimits

0xf7c6,	// (0x0001a425) cell_toolbar_pane_g

0x91f3,	// (0x00013e52) grid_highlight_pane_cp2_ParamLimits

0x91f3,	// (0x00013e52) grid_highlight_pane_cp2

0x920d,	// (0x00013e6c) toolbar_button_pane

0x9219,	// (0x00013e78) toolbar_button_pane_g1

0x9221,	// (0x00013e80) toolbar_button_pane_g2

0x9229,	// (0x00013e88) toolbar_button_pane_g3

0x9231,	// (0x00013e90) toolbar_button_pane_g4

0x9239,	// (0x00013e98) toolbar_button_pane_g5

0x9241,	// (0x00013ea0) toolbar_button_pane_g6

0x9249,	// (0x00013ea8) toolbar_button_pane_g7

0x9251,	// (0x00013eb0) toolbar_button_pane_g8

0x9259,	// (0x00013eb8) toolbar_button_pane_g9

0x0009,

0xf7cb,	// (0x0001a42a) toolbar_button_pane_g

0x5aaa,	// (0x00010709) list_single_2graphic_pane_g1_cp3_ParamLimits

0x5aaa,	// (0x00010709) list_single_2graphic_pane_g1_cp3

0x5ab6,	// (0x00010715) list_single_2graphic_pane_g2_cp3_ParamLimits

0x5ab6,	// (0x00010715) list_single_2graphic_pane_g2_cp3

0x5ac7,	// (0x00010726) list_single_2graphic_pane_g3_cp3

0x5acf,	// (0x0001072e) list_single_2graphic_pane_g4_cp3_ParamLimits

0x5acf,	// (0x0001072e) list_single_2graphic_pane_g4_cp3

0x5adb,	// (0x0001073a) list_single_2graphic_pane_t1_cp3_ParamLimits

0x5adb,	// (0x0001073a) list_single_2graphic_pane_t1_cp3

0x5af7,	// (0x00010756) list_single_midp_graphic_pane_g2_ParamLimits

0x5af7,	// (0x00010756) list_single_midp_graphic_pane_g2

0x5439,	// (0x00010098) aid_zoom_text_primary

0x5441,	// (0x000100a0) aid_zoom_text_secondary

0x8bfd,	// (0x0001385c) status_small_pane_g7_ParamLimits

0x8bfd,	// (0x0001385c) status_small_pane_g7

0x8c20,	// (0x0001387f) status_small_pane_t1_ParamLimits

0x6c78,	// (0x000118d7) title_pane_g2

0x0003,

0xf554,	// (0x0001a1b3) title_pane_g

0x71d6,	// (0x00011e35) aid_size_cell_colour_1_pane_ParamLimits

0x71d6,	// (0x00011e35) aid_size_cell_colour_1_pane

0x71ea,	// (0x00011e49) aid_size_cell_colour_2_pane_ParamLimits

0x71ea,	// (0x00011e49) aid_size_cell_colour_2_pane

0x71fe,	// (0x00011e5d) aid_size_cell_colour_3_pane_ParamLimits

0x71fe,	// (0x00011e5d) aid_size_cell_colour_3_pane

0x7212,	// (0x00011e71) aid_size_cell_colour_4_pane_ParamLimits

0x7212,	// (0x00011e71) aid_size_cell_colour_4_pane

0x4e94,	// (0x0000faf3) title_pane_stacon_g1_ParamLimits

0x4e94,	// (0x0000faf3) title_pane_stacon_g1

0x99a6,	// (0x00014605) popup_note_wait_window_g3_ParamLimits

0x99a6,	// (0x00014605) popup_note_wait_window_g3

0x9a1c,	// (0x0001467b) popup_note_wait_window_t5_ParamLimits

0x9a1c,	// (0x0001467b) popup_note_wait_window_t5

0x6c61,	// (0x000118c0) main_feb_china_hwr_fs_writing_pane

0x54d7,	// (0x00010136) popup_feb_china_hwr_fs_window_ParamLimits

0x54d7,	// (0x00010136) popup_feb_china_hwr_fs_window

0x5b19,	// (0x00010778) aid_size_cell_hwr_fs_ParamLimits

0x5b19,	// (0x00010778) aid_size_cell_hwr_fs

0x933d,	// (0x00013f9c) bg_popup_sub_pane_cp3_ParamLimits

0x933d,	// (0x00013f9c) bg_popup_sub_pane_cp3

0x5b2e,	// (0x0001078d) grid_hwr_fs_pane_ParamLimits

0x5b2e,	// (0x0001078d) grid_hwr_fs_pane

0x5b46,	// (0x000107a5) linegrid_hwr_fs_pane_ParamLimits

0x5b46,	// (0x000107a5) linegrid_hwr_fs_pane

0x5b56,	// (0x000107b5) cell_hwr_fs_pane_ParamLimits

0x5b56,	// (0x000107b5) cell_hwr_fs_pane

0x9349,	// (0x00013fa8) linegrid_hwr_fs_pane_g1_ParamLimits

0x9349,	// (0x00013fa8) linegrid_hwr_fs_pane_g1

0x9355,	// (0x00013fb4) linegrid_hwr_fs_pane_g2_ParamLimits

0x9355,	// (0x00013fb4) linegrid_hwr_fs_pane_g2

0x9367,	// (0x00013fc6) linegrid_hwr_fs_pane_g3_ParamLimits

0x9367,	// (0x00013fc6) linegrid_hwr_fs_pane_g3

0x5b78,	// (0x000107d7) linegrid_hwr_fs_pane_g4_ParamLimits

0x5b78,	// (0x000107d7) linegrid_hwr_fs_pane_g4

0x5b92,	// (0x000107f1) linegrid_hwr_fs_pane_g5_ParamLimits

0x5b92,	// (0x000107f1) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f6,	// (0x0001a455) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f6,	// (0x0001a455) linegrid_hwr_fs_pane_g

0x9373,	// (0x00013fd2) cell_hwr_fs_pane_g1_ParamLimits

0x9373,	// (0x00013fd2) cell_hwr_fs_pane_g1

0x9057,	// (0x00013cb6) cell_hwr_fs_pane_g2_ParamLimits

0x9057,	// (0x00013cb6) cell_hwr_fs_pane_g2

0x9389,	// (0x00013fe8) cell_hwr_fs_pane_g3_ParamLimits

0x9389,	// (0x00013fe8) cell_hwr_fs_pane_g3

0x9396,	// (0x00013ff5) cell_hwr_fs_pane_g4_ParamLimits

0x9396,	// (0x00013ff5) cell_hwr_fs_pane_g4

0x0003,

0xf801,	// (0x0001a460) cell_hwr_fs_pane_g_ParamLimits

0xf801,	// (0x0001a460) cell_hwr_fs_pane_g

0x5ba8,	// (0x00010807) cell_hwr_fs_pane_t1

0x6c61,	// (0x000118c0) grid_highlight_pane_cp6

0x6c61,	// (0x000118c0) main_idle_act2_pane

0x7e08,	// (0x00012a67) aid_inside_area_popup_secondary

0xa053,	// (0x00014cb2) aid_inside_area_window_primary_ParamLimits

0xa053,	// (0x00014cb2) aid_inside_area_window_primary

0xad13,	// (0x00015972) ai2_news_ticker_pane

0xad1b,	// (0x0001597a) aid_size_cell_ai1_link_ParamLimits

0xad1b,	// (0x0001597a) aid_size_cell_ai1_link

0xad35,	// (0x00015994) popup_ai2_data_window_ParamLimits

0xad35,	// (0x00015994) popup_ai2_data_window

0xad4b,	// (0x000159aa) popup_ai2_link_window_ParamLimits

0xad4b,	// (0x000159aa) popup_ai2_link_window

0x933d,	// (0x00013f9c) bg_popup_sub_pane_cp4_ParamLimits

0x933d,	// (0x00013f9c) bg_popup_sub_pane_cp4

0xad5f,	// (0x000159be) grid_ai2_link_pane_ParamLimits

0xad5f,	// (0x000159be) grid_ai2_link_pane

0xad76,	// (0x000159d5) popup_ai2_link_window_g1_ParamLimits

0xad76,	// (0x000159d5) popup_ai2_link_window_g1

0xad82,	// (0x000159e1) popup_ai2_link_window_g2_ParamLimits

0xad82,	// (0x000159e1) popup_ai2_link_window_g2

0x0001,

0xf9d4,	// (0x0001a633) popup_ai2_link_window_g_ParamLimits

0xf9d4,	// (0x0001a633) popup_ai2_link_window_g

0xad91,	// (0x000159f0) ai2_mp_button_pane

0xad99,	// (0x000159f8) ai2_mp_volume_pane

0x955f,	// (0x000141be) bg_popup_sub_pane_cp5_ParamLimits

0x955f,	// (0x000141be) bg_popup_sub_pane_cp5

0xada1,	// (0x00015a00) heading_ai2_gene_pane_ParamLimits

0xada1,	// (0x00015a00) heading_ai2_gene_pane

0xadad,	// (0x00015a0c) list_ai2_gene_pane_ParamLimits

0xadad,	// (0x00015a0c) list_ai2_gene_pane

0xadf5,	// (0x00015a54) cell_ai2_link_pane_ParamLimits

0xadf5,	// (0x00015a54) cell_ai2_link_pane

0xae0b,	// (0x00015a6a) cell_ai2_link_pane_g1

0x6c61,	// (0x000118c0) grid_highlight_pane_cp7

0x5e9a,	// (0x00010af9) ai2_mp_volume_pane_g1

0xaedb,	// (0x00015b3a) ai2_mp_volume_pane_g2

0xae50,	// (0x00015aaf) list_ai2_gene_pane_t1

0xaee3,	// (0x00015b42) ai2_mp_volume_pane_g3

0x0002,

0xf9ed,	// (0x0001a64c) ai2_mp_volume_pane_g

0x5ea2,	// (0x00010b01) volume_small_pane_cp3

0xaeeb,	// (0x00015b4a) aid_size_cell_ai2_button

0xaef3,	// (0x00015b52) grid_ai2_button_pane

0xaefc,	// (0x00015b5b) cell_ai2_button_pane_ParamLimits

0xaefc,	// (0x00015b5b) cell_ai2_button_pane

0x6c57,	// (0x000118b6) cell_ai2_button_pane_g1

0x6c61,	// (0x000118c0) grid_highlight_pane_cp8

0xae9b,	// (0x00015afa) ai2_gene_pane_t1_ParamLimits

0xae9b,	// (0x00015afa) ai2_gene_pane_t1

0x5427,	// (0x00010086) aid_height_parent_landscape

0xa707,	// (0x00015366) aid_height_set_list

0xa718,	// (0x00015377) aid_size_parent

0xab3a,	// (0x00015799) aid_size_cell_graphic_pane_ParamLimits

0xadbd,	// (0x00015a1c) popup_ai2_data_window_g1_ParamLimits

0xadbd,	// (0x00015a1c) popup_ai2_data_window_g1

0xadc9,	// (0x00015a28) ai2_news_ticker_pane_g1

0xadd1,	// (0x00015a30) ai2_news_ticker_pane_g2

0x0001,

0xf9d9,	// (0x0001a638) ai2_news_ticker_pane_g

0xadd9,	// (0x00015a38) ai2_news_ticker_pane_t1

0xade7,	// (0x00015a46) ai2_news_ticker_pane_t2

0x0001,

0xf9de,	// (0x0001a63d) ai2_news_ticker_pane_t

0xae14,	// (0x00015a73) heading_ai2_gene_pane_g1

0xae1c,	// (0x00015a7b) heading_ai2_gene_pane_t1_ParamLimits

0xae1c,	// (0x00015a7b) heading_ai2_gene_pane_t1

0xae31,	// (0x00015a90) list_highlight_pane_cp6

0xae39,	// (0x00015a98) ai2_gene_pane_ParamLimits

0xae39,	// (0x00015a98) ai2_gene_pane

0xae5e,	// (0x00015abd) list_ai2_gene_pane_t2

0x0001,

0xf9e3,	// (0x0001a642) list_ai2_gene_pane_t

0xae6c,	// (0x00015acb) list_highlight_pane_cp8_ParamLimits

0xae6c,	// (0x00015acb) list_highlight_pane_cp8

0xae7d,	// (0x00015adc) ai2_gene_pane_g1_ParamLimits

0xae7d,	// (0x00015adc) ai2_gene_pane_g1

0xae8f,	// (0x00015aee) ai2_gene_pane_g2_ParamLimits

0xae8f,	// (0x00015aee) ai2_gene_pane_g2

0x0001,

0xf9e8,	// (0x0001a647) ai2_gene_pane_g_ParamLimits

0xf9e8,	// (0x0001a647) ai2_gene_pane_g

0x755d,	// (0x000121bc) scroll_pane_cp12

0x53e6,	// (0x00010045) control_pane_t3_ParamLimits

0x53e6,	// (0x00010045) control_pane_t3

0x8c11,	// (0x00013870) status_small_pane_g8_ParamLimits

0x8c11,	// (0x00013870) status_small_pane_g8

0x55bd,	// (0x0001021c) popup_find_window_ParamLimits

0x57d0,	// (0x0001042f) popup_note_image_window_ParamLimits

0x9183,	// (0x00013de2) list_double2_graphic_pane_vc_g1_ParamLimits

0x9183,	// (0x00013de2) list_double2_graphic_pane_vc_g1

0x918f,	// (0x00013dee) list_double2_graphic_pane_vc_g2_ParamLimits

0x918f,	// (0x00013dee) list_double2_graphic_pane_vc_g2

0x919b,	// (0x00013dfa) list_double2_graphic_pane_vc_g3_ParamLimits

0x919b,	// (0x00013dfa) list_double2_graphic_pane_vc_g3

0x0002,

0xf7bf,	// (0x0001a41e) list_double2_graphic_pane_vc_g_ParamLimits

0xf7bf,	// (0x0001a41e) list_double2_graphic_pane_vc_g

0x91a7,	// (0x00013e06) list_double2_graphic_pane_vc_t1_ParamLimits

0x91a7,	// (0x00013e06) list_double2_graphic_pane_vc_t1

0x918f,	// (0x00013dee) list_single_heading_pane_vc_g1_ParamLimits

0x918f,	// (0x00013dee) list_single_heading_pane_vc_g1

0x919b,	// (0x00013dfa) list_single_heading_pane_vc_g2_ParamLimits

0x919b,	// (0x00013dfa) list_single_heading_pane_vc_g2

0x0001,

0xf7e0,	// (0x0001a43f) list_single_heading_pane_vc_g_ParamLimits

0xf7e0,	// (0x0001a43f) list_single_heading_pane_vc_g

0x9261,	// (0x00013ec0) list_single_heading_pane_vc_t1_ParamLimits

0x9261,	// (0x00013ec0) list_single_heading_pane_vc_t1

0x9279,	// (0x00013ed8) list_single_heading_pane_vc_t2_ParamLimits

0x9279,	// (0x00013ed8) list_single_heading_pane_vc_t2

0x0001,

0xf7e5,	// (0x0001a444) list_single_heading_pane_vc_t_ParamLimits

0xf7e5,	// (0x0001a444) list_single_heading_pane_vc_t

0x928d,	// (0x00013eec) list_setting_number_pane_vc_g1_ParamLimits

0x928d,	// (0x00013eec) list_setting_number_pane_vc_g1

0x9299,	// (0x00013ef8) list_setting_number_pane_vc_g2_ParamLimits

0x9299,	// (0x00013ef8) list_setting_number_pane_vc_g2

0x0001,

0xf7ea,	// (0x0001a449) list_setting_number_pane_vc_g_ParamLimits

0xf7ea,	// (0x0001a449) list_setting_number_pane_vc_g

0x92a5,	// (0x00013f04) list_setting_number_pane_vc_t1_ParamLimits

0x92a5,	// (0x00013f04) list_setting_number_pane_vc_t1

0x92b9,	// (0x00013f18) list_setting_number_pane_vc_t2_ParamLimits

0x92b9,	// (0x00013f18) list_setting_number_pane_vc_t2

0x92d5,	// (0x00013f34) list_setting_number_pane_vc_t3_ParamLimits

0x92d5,	// (0x00013f34) list_setting_number_pane_vc_t3

0x0002,

0xf7ef,	// (0x0001a44e) list_setting_number_pane_vc_t_ParamLimits

0xf7ef,	// (0x0001a44e) list_setting_number_pane_vc_t

0x9301,	// (0x00013f60) set_value_pane_vc_ParamLimits

0x9301,	// (0x00013f60) set_value_pane_vc

0xa960,	// (0x000155bf) list_double2_graphic_pane_vc_ParamLimits

0xa960,	// (0x000155bf) list_double2_graphic_pane_vc

0xa972,	// (0x000155d1) list_double2_large_graphic_pane_vc_ParamLimits

0xa972,	// (0x000155d1) list_double2_large_graphic_pane_vc

0xa960,	// (0x000155bf) list_double2_pane_vc_ParamLimits

0xa960,	// (0x000155bf) list_double2_pane_vc

0xa960,	// (0x000155bf) list_double_graphic_heading_pane_vc_ParamLimits

0xa960,	// (0x000155bf) list_double_graphic_heading_pane_vc

0xa960,	// (0x000155bf) list_double_graphic_pane_vc_ParamLimits

0xa960,	// (0x000155bf) list_double_graphic_pane_vc

0xa960,	// (0x000155bf) list_double_heading_pane_vc_ParamLimits

0xa960,	// (0x000155bf) list_double_heading_pane_vc

0xa972,	// (0x000155d1) list_double_large_graphic_pane_vc_ParamLimits

0xa972,	// (0x000155d1) list_double_large_graphic_pane_vc

0xa960,	// (0x000155bf) list_double_number_pane_vc_ParamLimits

0xa960,	// (0x000155bf) list_double_number_pane_vc

0xa960,	// (0x000155bf) list_double_pane_vc_ParamLimits

0xa960,	// (0x000155bf) list_double_pane_vc

0xa960,	// (0x000155bf) list_double_time_pane_vc_ParamLimits

0xa960,	// (0x000155bf) list_double_time_pane_vc

0xa960,	// (0x000155bf) list_setting_number_pane_vc_ParamLimits

0xa960,	// (0x000155bf) list_setting_number_pane_vc

0xa960,	// (0x000155bf) list_setting_pane_vc_ParamLimits

0xa960,	// (0x000155bf) list_setting_pane_vc

0xa960,	// (0x000155bf) list_single_graphic_heading_pane_vc_ParamLimits

0xa960,	// (0x000155bf) list_single_graphic_heading_pane_vc

0xa960,	// (0x000155bf) list_single_heading_pane_vc_ParamLimits

0xa960,	// (0x000155bf) list_single_heading_pane_vc

0xa983,	// (0x000155e2) list_single_number_heading_pane_vc_ParamLimits

0xa983,	// (0x000155e2) list_single_number_heading_pane_vc

0xaf30,	// (0x00015b8f) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xaf30,	// (0x00015b8f) list_double_graphic_heading_pane_vc_g1

0x918f,	// (0x00013dee) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x918f,	// (0x00013dee) list_double_graphic_heading_pane_vc_g2

0x919b,	// (0x00013dfa) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x919b,	// (0x00013dfa) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9f4,	// (0x0001a653) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9f4,	// (0x0001a653) list_double_graphic_heading_pane_vc_g

0xaf3c,	// (0x00015b9b) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xaf3c,	// (0x00015b9b) list_double_graphic_heading_pane_vc_t1

0x9261,	// (0x00013ec0) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x9261,	// (0x00013ec0) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9fb,	// (0x0001a65a) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9fb,	// (0x0001a65a) list_double_graphic_heading_pane_vc_t

0x928d,	// (0x00013eec) list_setting_pane_vc_g1_ParamLimits

0x928d,	// (0x00013eec) list_setting_pane_vc_g1

0x9299,	// (0x00013ef8) list_setting_pane_vc_g2_ParamLimits

0x9299,	// (0x00013ef8) list_setting_pane_vc_g2

0x0001,

0xf7ea,	// (0x0001a449) list_setting_pane_vc_g_ParamLimits

0xf7ea,	// (0x0001a449) list_setting_pane_vc_g

0xb15c,	// (0x00015dbb) list_setting_pane_vc_t1_ParamLimits

0xb15c,	// (0x00015dbb) list_setting_pane_vc_t1

0xb178,	// (0x00015dd7) list_setting_pane_vc_t2_ParamLimits

0xb178,	// (0x00015dd7) list_setting_pane_vc_t2

0x0001,

0xfa29,	// (0x0001a688) list_setting_pane_vc_t_ParamLimits

0xfa29,	// (0x0001a688) list_setting_pane_vc_t

0x9301,	// (0x00013f60) set_value_pane_cp_vc_ParamLimits

0x9301,	// (0x00013f60) set_value_pane_cp_vc

0x918f,	// (0x00013dee) list_single_number_heading_pane_vc_g1_ParamLimits

0x918f,	// (0x00013dee) list_single_number_heading_pane_vc_g1

0x919b,	// (0x00013dfa) list_single_number_heading_pane_vc_g2_ParamLimits

0x919b,	// (0x00013dfa) list_single_number_heading_pane_vc_g2

0x0001,

0xf7e0,	// (0x0001a43f) list_single_number_heading_pane_vc_g_ParamLimits

0xf7e0,	// (0x0001a43f) list_single_number_heading_pane_vc_g

0x9261,	// (0x00013ec0) list_single_number_heading_pane_vc_t1_ParamLimits

0x9261,	// (0x00013ec0) list_single_number_heading_pane_vc_t1

0xb194,	// (0x00015df3) list_single_number_heading_pane_vc_t2_ParamLimits

0xb194,	// (0x00015df3) list_single_number_heading_pane_vc_t2

0xb1a8,	// (0x00015e07) list_single_number_heading_pane_vc_t3_ParamLimits

0xb1a8,	// (0x00015e07) list_single_number_heading_pane_vc_t3

0x0002,

0xfa2e,	// (0x0001a68d) list_single_number_heading_pane_vc_t_ParamLimits

0xfa2e,	// (0x0001a68d) list_single_number_heading_pane_vc_t

0x9183,	// (0x00013de2) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x9183,	// (0x00013de2) list_single_graphic_heading_pane_vc_g1

0x918f,	// (0x00013dee) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x918f,	// (0x00013dee) list_single_graphic_heading_pane_vc_g4

0x919b,	// (0x00013dfa) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x919b,	// (0x00013dfa) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7bf,	// (0x0001a41e) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7bf,	// (0x0001a41e) list_single_graphic_heading_pane_vc_g

0x9261,	// (0x00013ec0) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x9261,	// (0x00013ec0) list_single_graphic_heading_pane_vc_t1

0xb1ba,	// (0x00015e19) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xb1ba,	// (0x00015e19) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa35,	// (0x0001a694) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa35,	// (0x0001a694) list_single_graphic_heading_pane_vc_t

0x918f,	// (0x00013dee) list_double2_pane_vc_g1_ParamLimits

0x918f,	// (0x00013dee) list_double2_pane_vc_g1

0x919b,	// (0x00013dfa) list_double2_pane_vc_g2_ParamLimits

0x919b,	// (0x00013dfa) list_double2_pane_vc_g2

0x0001,

0xf7e0,	// (0x0001a43f) list_double2_pane_vc_g_ParamLimits

0xf7e0,	// (0x0001a43f) list_double2_pane_vc_g

0xb1ce,	// (0x00015e2d) list_double2_pane_vc_t1_ParamLimits

0xb1ce,	// (0x00015e2d) list_double2_pane_vc_t1

0xb1e4,	// (0x00015e43) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xb1e4,	// (0x00015e43) list_double2_large_graphic_pane_vc_g1

0xb1f0,	// (0x00015e4f) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xb1f0,	// (0x00015e4f) list_double2_large_graphic_pane_vc_g2

0xb1fc,	// (0x00015e5b) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xb1fc,	// (0x00015e5b) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa3a,	// (0x0001a699) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa3a,	// (0x0001a699) list_double2_large_graphic_pane_vc_g

0xb208,	// (0x00015e67) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xb208,	// (0x00015e67) list_double2_large_graphic_pane_vc_t1

0xb21e,	// (0x00015e7d) list_double_time_pane_vc_g1_ParamLimits

0xb21e,	// (0x00015e7d) list_double_time_pane_vc_g1

0xb22a,	// (0x00015e89) list_double_time_pane_vc_g2_ParamLimits

0xb22a,	// (0x00015e89) list_double_time_pane_vc_g2

0x0001,

0xfa41,	// (0x0001a6a0) list_double_time_pane_vc_g_ParamLimits

0xfa41,	// (0x0001a6a0) list_double_time_pane_vc_g

0xb236,	// (0x00015e95) list_double_time_pane_vc_t1_ParamLimits

0xb236,	// (0x00015e95) list_double_time_pane_vc_t1

0xb25a,	// (0x00015eb9) list_double_time_pane_vc_t2_ParamLimits

0xb25a,	// (0x00015eb9) list_double_time_pane_vc_t2

0xb284,	// (0x00015ee3) list_double_time_pane_vc_t3_ParamLimits

0xb284,	// (0x00015ee3) list_double_time_pane_vc_t3

0xb296,	// (0x00015ef5) list_double_time_pane_vc_t4_ParamLimits

0xb296,	// (0x00015ef5) list_double_time_pane_vc_t4

0x0003,

0xfa46,	// (0x0001a6a5) list_double_time_pane_vc_t_ParamLimits

0xfa46,	// (0x0001a6a5) list_double_time_pane_vc_t

0x918f,	// (0x00013dee) list_double_pane_vc_g1_ParamLimits

0x918f,	// (0x00013dee) list_double_pane_vc_g1

0x919b,	// (0x00013dfa) list_double_pane_vc_g2_ParamLimits

0x919b,	// (0x00013dfa) list_double_pane_vc_g2

0x0001,

0xf7e0,	// (0x0001a43f) list_double_pane_vc_g_ParamLimits

0xf7e0,	// (0x0001a43f) list_double_pane_vc_g

0xb2bb,	// (0x00015f1a) list_double_pane_vc_t1_ParamLimits

0xb2bb,	// (0x00015f1a) list_double_pane_vc_t1

0xb2cf,	// (0x00015f2e) list_double_pane_vc_t2_ParamLimits

0xb2cf,	// (0x00015f2e) list_double_pane_vc_t2

0x0001,

0xfa4f,	// (0x0001a6ae) list_double_pane_vc_t_ParamLimits

0xfa4f,	// (0x0001a6ae) list_double_pane_vc_t

0x918f,	// (0x00013dee) list_double_number_pane_vc_g1_ParamLimits

0x918f,	// (0x00013dee) list_double_number_pane_vc_g1

0x919b,	// (0x00013dfa) list_double_number_pane_vc_g2_ParamLimits

0x919b,	// (0x00013dfa) list_double_number_pane_vc_g2

0x0001,

0xf7e0,	// (0x0001a43f) list_double_number_pane_vc_g_ParamLimits

0xf7e0,	// (0x0001a43f) list_double_number_pane_vc_g

0xb2e7,	// (0x00015f46) list_double_number_pane_vc_t1_ParamLimits

0xb2e7,	// (0x00015f46) list_double_number_pane_vc_t1

0xb2fb,	// (0x00015f5a) list_double_number_pane_vc_t2_ParamLimits

0xb2fb,	// (0x00015f5a) list_double_number_pane_vc_t2

0xb2cf,	// (0x00015f2e) list_double_number_pane_vc_t3_ParamLimits

0xb2cf,	// (0x00015f2e) list_double_number_pane_vc_t3

0x0002,

0xfa54,	// (0x0001a6b3) list_double_number_pane_vc_t_ParamLimits

0xfa54,	// (0x0001a6b3) list_double_number_pane_vc_t

0xb30f,	// (0x00015f6e) list_double_large_graphic_pane_vc_g1_ParamLimits

0xb30f,	// (0x00015f6e) list_double_large_graphic_pane_vc_g1

0xb320,	// (0x00015f7f) list_double_large_graphic_pane_vc_g2_ParamLimits

0xb320,	// (0x00015f7f) list_double_large_graphic_pane_vc_g2

0xb1fc,	// (0x00015e5b) list_double_large_graphic_pane_vc_g3_ParamLimits

0xb1fc,	// (0x00015e5b) list_double_large_graphic_pane_vc_g3

0xb32f,	// (0x00015f8e) list_double_large_graphic_pane_vc_g4_ParamLimits

0xb32f,	// (0x00015f8e) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa5b,	// (0x0001a6ba) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa5b,	// (0x0001a6ba) list_double_large_graphic_pane_vc_g

0xb33b,	// (0x00015f9a) list_double_large_graphic_pane_vc_t1_ParamLimits

0xb33b,	// (0x00015f9a) list_double_large_graphic_pane_vc_t1

0xb354,	// (0x00015fb3) list_double_large_graphic_pane_vc_t2_ParamLimits

0xb354,	// (0x00015fb3) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa64,	// (0x0001a6c3) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa64,	// (0x0001a6c3) list_double_large_graphic_pane_vc_t

0x918f,	// (0x00013dee) list_double_heading_pane_vc_g1_ParamLimits

0x918f,	// (0x00013dee) list_double_heading_pane_vc_g1

0x919b,	// (0x00013dfa) list_double_heading_pane_vc_g2_ParamLimits

0x919b,	// (0x00013dfa) list_double_heading_pane_vc_g2

0x0001,

0xf7e0,	// (0x0001a43f) list_double_heading_pane_vc_g_ParamLimits

0xf7e0,	// (0x0001a43f) list_double_heading_pane_vc_g

0xb36d,	// (0x00015fcc) list_double_heading_pane_vc_t1_ParamLimits

0xb36d,	// (0x00015fcc) list_double_heading_pane_vc_t1

0x9261,	// (0x00013ec0) list_double_heading_pane_vc_t2_ParamLimits

0x9261,	// (0x00013ec0) list_double_heading_pane_vc_t2

0x0001,

0xfa69,	// (0x0001a6c8) list_double_heading_pane_vc_t_ParamLimits

0xfa69,	// (0x0001a6c8) list_double_heading_pane_vc_t

0x9183,	// (0x00013de2) list_double_graphic_pane_vc_g1_ParamLimits

0x9183,	// (0x00013de2) list_double_graphic_pane_vc_g1

0xb381,	// (0x00015fe0) list_double_graphic_pane_vc_g2_ParamLimits

0xb381,	// (0x00015fe0) list_double_graphic_pane_vc_g2

0xb390,	// (0x00015fef) list_double_graphic_pane_vc_g3_ParamLimits

0xb390,	// (0x00015fef) list_double_graphic_pane_vc_g3

0x0002,

0xfa6e,	// (0x0001a6cd) list_double_graphic_pane_vc_g_ParamLimits

0xfa6e,	// (0x0001a6cd) list_double_graphic_pane_vc_g

0xb39c,	// (0x00015ffb) list_double_graphic_pane_vc_t1_ParamLimits

0xb39c,	// (0x00015ffb) list_double_graphic_pane_vc_t1

0xb2cf,	// (0x00015f2e) list_double_graphic_pane_vc_t2_ParamLimits

0xb2cf,	// (0x00015f2e) list_double_graphic_pane_vc_t2

0x0001,

0xfa75,	// (0x0001a6d4) list_double_graphic_pane_vc_t_ParamLimits

0xfa75,	// (0x0001a6d4) list_double_graphic_pane_vc_t

0x49f0,	// (0x0000f64f) aid_size_cell_fastswap

0x49f8,	// (0x0000f657) aid_size_cell_touch_ParamLimits

0x49f8,	// (0x0000f657) aid_size_cell_touch

0x4c5d,	// (0x0000f8bc) popup_fast_swap_wide_window_ParamLimits

0x4c5d,	// (0x0000f8bc) popup_fast_swap_wide_window

0x4d67,	// (0x0000f9c6) touch_pane_ParamLimits

0x4d67,	// (0x0000f9c6) touch_pane

0x7a42,	// (0x000126a1) button_value_adjust_pane_cp2

0x7a4a,	// (0x000126a9) button_value_adjust_pane_cp4

0x7a6c,	// (0x000126cb) form_field_data_pane_cp2

0x7a8d,	// (0x000126ec) form_field_data_wide_pane_cp2

0x811c,	// (0x00012d7b) bg_scroll_pane_ParamLimits

0x4ff7,	// (0x0000fc56) scroll_handle_pane_ParamLimits

0x500b,	// (0x0000fc6a) scroll_sc2_down_pane_ParamLimits

0x500b,	// (0x0000fc6a) scroll_sc2_down_pane

0x814d,	// (0x00012dac) scroll_sc2_up_pane_ParamLimits

0x814d,	// (0x00012dac) scroll_sc2_up_pane

0xb855,	// (0x000164b4) grid_wheel_folder_pane_g1_ParamLimits

0xb855,	// (0x000164b4) grid_wheel_folder_pane_g1

0x51d0,	// (0x0000fe2f) clock_nsta_pane_cp2_ParamLimits

0x51d0,	// (0x0000fe2f) clock_nsta_pane_cp2

0x7e95,	// (0x00012af4) listscroll_midp_pane_ParamLimits

0x89a2,	// (0x00013601) midp_canvas_pane

0x8c8c,	// (0x000138eb) nsta_clock_indic_pane

0x8cc8,	// (0x00013927) listscroll_form_pane_vc

0x8cd0,	// (0x0001392f) listscroll_set_pane_vc_ParamLimits

0x8cd0,	// (0x0001392f) listscroll_set_pane_vc

0x8dd9,	// (0x00013a38) clock_nsta_pane

0x8e4e,	// (0x00013aad) indicator_nsta_pane

0x911d,	// (0x00013d7c) bg_popup_sub_pane_cp2_ParamLimits

0x9131,	// (0x00013d90) find_pane_cp2_ParamLimits

0x9131,	// (0x00013d90) find_pane_cp2

0x9147,	// (0x00013da6) grid_toobar_pane_ParamLimits

0x9311,	// (0x00013f70) list_form_gen_pane_vc_ParamLimits

0x9311,	// (0x00013f70) list_form_gen_pane_vc

0x9327,	// (0x00013f86) scroll_pane_cp8_vc_ParamLimits

0x9327,	// (0x00013f86) scroll_pane_cp8_vc

0x93a3,	// (0x00014002) data_form_wide_pane_vc_ParamLimits

0x93a3,	// (0x00014002) data_form_wide_pane_vc

0x93af,	// (0x0001400e) form_field_data_wide_pane_vc_g1

0x93b7,	// (0x00014016) form_field_data_wide_pane_vc_t1_ParamLimits

0x93b7,	// (0x00014016) form_field_data_wide_pane_vc_t1

0x7b28,	// (0x00012787) input_focus_pane_cp6_vc_ParamLimits

0x7b28,	// (0x00012787) input_focus_pane_cp6_vc

0x9721,	// (0x00014380) list_midp_pane_ParamLimits

0x972d,	// (0x0001438c) scroll_pane_cp16_ParamLimits

0x972d,	// (0x0001438c) scroll_pane_cp16

0x977b,	// (0x000143da) button_value_adjust_pane_ParamLimits

0x977b,	// (0x000143da) button_value_adjust_pane

0xa72a,	// (0x00015389) button_value_adjust_pane_cp6_ParamLimits

0xa72a,	// (0x00015389) button_value_adjust_pane_cp6

0xa896,	// (0x000154f5) settings_code_pane_cp_ParamLimits

0xa896,	// (0x000154f5) settings_code_pane_cp

0x6c57,	// (0x000118b6) cell_touch_pane_g1

0x6c57,	// (0x000118b6) cell_touch_pane_g2

0x0001,

0xf704,	// (0x0001a363) cell_touch_pane_g

0xaf0e,	// (0x00015b6d) cell_touch_pane_cp_ParamLimits

0xaf0e,	// (0x00015b6d) cell_touch_pane_cp

0xaf1e,	// (0x00015b7d) cell_touch_pane_ParamLimits

0xaf1e,	// (0x00015b7d) cell_touch_pane

0x6c57,	// (0x000118b6) scroll_sc2_down_pane_g1

0x6c57,	// (0x000118b6) scroll_sc2_up_pane_g1

0x6c61,	// (0x000118c0) bg_set_opt_pane_cp4_vc

0xaf50,	// (0x00015baf) list_set_graphic_pane_vc_g1_ParamLimits

0xaf50,	// (0x00015baf) list_set_graphic_pane_vc_g1

0xaf5c,	// (0x00015bbb) list_set_graphic_pane_vc_g2_ParamLimits

0xaf5c,	// (0x00015bbb) list_set_graphic_pane_vc_g2

0x0001,

0xfa00,	// (0x0001a65f) list_set_graphic_pane_vc_g_ParamLimits

0xfa00,	// (0x0001a65f) list_set_graphic_pane_vc_g

0xaf68,	// (0x00015bc7) text_primary_small_cp13_vc_ParamLimits

0xaf68,	// (0x00015bc7) text_primary_small_cp13_vc

0xaf80,	// (0x00015bdf) list_set_graphic_pane_vc_ParamLimits

0xaf80,	// (0x00015bdf) list_set_graphic_pane_vc

0x6c61,	// (0x000118c0) input_focus_pane_cp2_vc

0x6c57,	// (0x000118b6) setting_code_pane_vc_g1

0x6d8c,	// (0x000119eb) setting_code_pane_vc_t1

0xaf92,	// (0x00015bf1) set_text_pane_vc_t1_ParamLimits

0xaf92,	// (0x00015bf1) set_text_pane_vc_t1

0x6c61,	// (0x000118c0) input_focus_pane_cp1_vc

0xafad,	// (0x00015c0c) list_set_text_pane_vc

0x6c57,	// (0x000118b6) setting_text_pane_vc_g1

0x6c61,	// (0x000118c0) bg_set_opt_pane_cp2_vc

0x6d83,	// (0x000119e2) setting_slider_graphic_pane_vc_g1

0xafb7,	// (0x00015c16) setting_slider_graphic_pane_vc_t1

0xafc7,	// (0x00015c26) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa05,	// (0x0001a664) setting_slider_graphic_pane_vc_t

0xafd7,	// (0x00015c36) slider_set_pane_cp_vc

0xafdf,	// (0x00015c3e) slider_set_pane_vc_g1

0xafe8,	// (0x00015c47) slider_set_pane_vc_g2

0x0006,

0xfa0a,	// (0x0001a669) slider_set_pane_vc_g

0x7c60,	// (0x000128bf) set_opt_bg_pane_g1_copy1

0x7c68,	// (0x000128c7) set_opt_bg_pane_g2_copy1

0xb014,	// (0x00015c73) set_opt_bg_pane_g3_copy1

0x7c78,	// (0x000128d7) set_opt_bg_pane_g4_copy1

0x7c80,	// (0x000128df) set_opt_bg_pane_g5_copy1

0x7c88,	// (0x000128e7) set_opt_bg_pane_g6_copy1

0xb01e,	// (0x00015c7d) set_opt_bg_pane_g7_copy1

0xb026,	// (0x00015c85) set_opt_bg_pane_g8_copy1

0xb030,	// (0x00015c8f) set_opt_bg_pane_g9_copy1

0x6c61,	// (0x000118c0) bg_set_opt_pane_cp_vc

0xb03a,	// (0x00015c99) setting_slider_pane_vc_t1

0xb049,	// (0x00015ca8) setting_slider_pane_vc_t2

0xb059,	// (0x00015cb8) setting_slider_pane_vc_t3

0x0002,

0xfa19,	// (0x0001a678) setting_slider_pane_vc_t

0xb069,	// (0x00015cc8) slider_set_pane_vc

0x5bb6,	// (0x00010815) volume_set_pane_vc_g1

0x5bbf,	// (0x0001081e) volume_set_pane_vc_g2

0x5bc8,	// (0x00010827) volume_set_pane_vc_g3

0x5bd1,	// (0x00010830) volume_set_pane_vc_g4

0x5bda,	// (0x00010839) volume_set_pane_vc_g5

0x5be3,	// (0x00010842) volume_set_pane_vc_g6

0x5bec,	// (0x0001084b) volume_set_pane_vc_g7

0x5bf5,	// (0x00010854) volume_set_pane_vc_g8

0x5bfe,	// (0x0001085d) volume_set_pane_vc_g9

0x5c07,	// (0x00010866) volume_set_pane_vc_g10

0x0009,

0xf8b7,	// (0x0001a516) volume_set_pane_vc_g

0xb071,	// (0x00015cd0) volume_set_pane_vc

0xb079,	// (0x00015cd8) button_value_adjust_pane_cp1_vc

0xb083,	// (0x00015ce2) list_highlight_pane_cp2_vc

0xb08c,	// (0x00015ceb) list_set_pane_vc_ParamLimits

0xb08c,	// (0x00015ceb) list_set_pane_vc

0xb0ea,	// (0x00015d49) main_pane_set_vc_t1_ParamLimits

0xb0ea,	// (0x00015d49) main_pane_set_vc_t1

0xb0ff,	// (0x00015d5e) main_pane_set_vc_t2_ParamLimits

0xb0ff,	// (0x00015d5e) main_pane_set_vc_t2

0xb111,	// (0x00015d70) main_pane_set_vc_t3_ParamLimits

0xb111,	// (0x00015d70) main_pane_set_vc_t3

0xb125,	// (0x00015d84) main_pane_set_vc_t4_ParamLimits

0xb125,	// (0x00015d84) main_pane_set_vc_t4

0x0003,

0xfa20,	// (0x0001a67f) main_pane_set_vc_t_ParamLimits

0xfa20,	// (0x0001a67f) main_pane_set_vc_t

0xb139,	// (0x00015d98) setting_code_pane_vc_ParamLimits

0xb139,	// (0x00015d98) setting_code_pane_vc

0xb14a,	// (0x00015da9) setting_slider_graphic_pane_vc

0xb14a,	// (0x00015da9) setting_slider_pane_vc

0xb14a,	// (0x00015da9) setting_text_pane_vc

0xb14a,	// (0x00015da9) setting_volume_pane_vc

0xb154,	// (0x00015db3) scroll_pane_cp121_vc

0x7a30,	// (0x0001268f) set_content_pane_vc

0xb3b0,	// (0x0001600f) button_value_adjust_pane_g1

0xb3b9,	// (0x00016018) button_value_adjust_pane_g2

0x0001,

0xfa7a,	// (0x0001a6d9) button_value_adjust_pane_g

0xb3c2,	// (0x00016021) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb3c2,	// (0x00016021) form_field_slider_wide_pane_vc_t1

0xb3d6,	// (0x00016035) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb3d6,	// (0x00016035) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa7f,	// (0x0001a6de) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa7f,	// (0x0001a6de) form_field_slider_wide_pane_vc_t

0x6fd6,	// (0x00011c35) input_focus_pane_cp10_vc_ParamLimits

0x6fd6,	// (0x00011c35) input_focus_pane_cp10_vc

0xb404,	// (0x00016063) slider_cont_pane_cp1_vc_ParamLimits

0xb404,	// (0x00016063) slider_cont_pane_cp1_vc

0xb416,	// (0x00016075) slider_form_pane_g1_cp2

0xafe8,	// (0x00015c47) slider_form_pane_g2_cp2

0xb443,	// (0x000160a2) form_field_slider_pane_vc_t3

0xb451,	// (0x000160b0) form_field_slider_pane_vc_t4

0xb45f,	// (0x000160be) slider_form_pane_vc_ParamLimits

0xb45f,	// (0x000160be) slider_form_pane_vc

0xb46c,	// (0x000160cb) form_field_slider_pane_vc_t1_ParamLimits

0xb46c,	// (0x000160cb) form_field_slider_pane_vc_t1

0xb3d6,	// (0x00016035) form_field_slider_pane_vc_t2_ParamLimits

0xb3d6,	// (0x00016035) form_field_slider_pane_vc_t2

0x0001,

0xfa91,	// (0x0001a6f0) form_field_slider_pane_vc_t_ParamLimits

0xfa91,	// (0x0001a6f0) form_field_slider_pane_vc_t

0x6fd6,	// (0x00011c35) input_focus_pane_cp9_vc_ParamLimits

0x6fd6,	// (0x00011c35) input_focus_pane_cp9_vc

0xb488,	// (0x000160e7) slider_cont_pane_vc_ParamLimits

0xb488,	// (0x000160e7) slider_cont_pane_vc

0xb49c,	// (0x000160fb) list_form_graphic_pane_cp_vc_ParamLimits

0xb49c,	// (0x000160fb) list_form_graphic_pane_cp_vc

0x93af,	// (0x0001400e) form_field_popup_wide_pane_vc_g1

0xb4b1,	// (0x00016110) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb4b1,	// (0x00016110) form_field_popup_wide_pane_vc_t1

0x7b28,	// (0x00012787) input_focus_pane_cp8_vc_ParamLimits

0x7b28,	// (0x00012787) input_focus_pane_cp8_vc

0xb4f6,	// (0x00016155) list_form_wide_pane_vc_ParamLimits

0xb4f6,	// (0x00016155) list_form_wide_pane_vc

0xb502,	// (0x00016161) list_form_graphic_pane_vc_g1

0xb50a,	// (0x00016169) list_form_graphic_pane_vc_t1_ParamLimits

0xb50a,	// (0x00016169) list_form_graphic_pane_vc_t1

0x6d41,	// (0x000119a0) list_highlight_pane_cp5_vc_ParamLimits

0x6d41,	// (0x000119a0) list_highlight_pane_cp5_vc

0xb526,	// (0x00016185) list_form_graphic_pane_vc_ParamLimits

0xb526,	// (0x00016185) list_form_graphic_pane_vc

0x93af,	// (0x0001400e) form_field_popup_pane_vc_g1

0xb53c,	// (0x0001619b) form_field_popup_pane_vc_t1_ParamLimits

0xb53c,	// (0x0001619b) form_field_popup_pane_vc_t1

0x7b28,	// (0x00012787) input_focus_pane_cp7_vc_ParamLimits

0x7b28,	// (0x00012787) input_focus_pane_cp7_vc

0xb553,	// (0x000161b2) list_form_pane_vc_ParamLimits

0xb553,	// (0x000161b2) list_form_pane_vc

0xb55f,	// (0x000161be) data_form_pane_vc_t1_ParamLimits

0xb55f,	// (0x000161be) data_form_pane_vc_t1

0x7c60,	// (0x000128bf) input_focus_pane_vc_g1

0x7c68,	// (0x000128c7) input_focus_pane_vc_g2

0x7c70,	// (0x000128cf) input_focus_pane_vc_g3

0x7c78,	// (0x000128d7) input_focus_pane_vc_g4

0x7c80,	// (0x000128df) input_focus_pane_vc_g5

0x7c88,	// (0x000128e7) input_focus_pane_vc_g6

0x7c90,	// (0x000128ef) input_focus_pane_vc_g7

0x7c98,	// (0x000128f7) input_focus_pane_vc_g8

0x7ca0,	// (0x000128ff) input_focus_pane_vc_g9

0x6c57,	// (0x000118b6) input_focus_pane_vc_g10

0x0009,

0xf68d,	// (0x0001a2ec) input_focus_pane_vc_g

0x93a3,	// (0x00014002) data_form_pane_vc_ParamLimits

0x93a3,	// (0x00014002) data_form_pane_vc

0x93af,	// (0x0001400e) form_field_data_pane_vc_g1

0xb57a,	// (0x000161d9) form_field_data_pane_vc_t1_ParamLimits

0xb57a,	// (0x000161d9) form_field_data_pane_vc_t1

0x7b28,	// (0x00012787) input_focus_pane_vc_ParamLimits

0x7b28,	// (0x00012787) input_focus_pane_vc

0xb594,	// (0x000161f3) button_value_adjust_pane_cp3_vc

0xb59c,	// (0x000161fb) button_value_adjust_pane_cp5_vc

0xb5a4,	// (0x00016203) form_field_data_pane_vc_ParamLimits

0xb5a4,	// (0x00016203) form_field_data_pane_vc

0xb5bb,	// (0x0001621a) form_field_data_pane_vc_cp2

0xb5c3,	// (0x00016222) form_field_data_wide_pane_vc_ParamLimits

0xb5c3,	// (0x00016222) form_field_data_wide_pane_vc

0xb5d9,	// (0x00016238) form_field_data_wide_pane_vc_cp2

0xb5e1,	// (0x00016240) form_field_popup_pane_vc_ParamLimits

0xb5e1,	// (0x00016240) form_field_popup_pane_vc

0xb5f8,	// (0x00016257) form_field_popup_wide_pane_vc_ParamLimits

0xb5f8,	// (0x00016257) form_field_popup_wide_pane_vc

0xb60e,	// (0x0001626d) form_field_slider_pane_vc_ParamLimits

0xb60e,	// (0x0001626d) form_field_slider_pane_vc

0xb621,	// (0x00016280) form_field_slider_wide_pane_vc_ParamLimits

0xb621,	// (0x00016280) form_field_slider_wide_pane_vc

0xb634,	// (0x00016293) grid_touch_1_pane_ParamLimits

0xb634,	// (0x00016293) grid_touch_1_pane

0xb640,	// (0x0001629f) grid_touch_2_pane_ParamLimits

0xb640,	// (0x0001629f) grid_touch_2_pane

0x8c57,	// (0x000138b6) touch_pane_g1_ParamLimits

0x8c57,	// (0x000138b6) touch_pane_g1

0xb658,	// (0x000162b7) cell_app_pane_cp_wide_ParamLimits

0xb658,	// (0x000162b7) cell_app_pane_cp_wide

0xb669,	// (0x000162c8) grid_popup_fast_wide_pane_ParamLimits

0xb669,	// (0x000162c8) grid_popup_fast_wide_pane

0xb67d,	// (0x000162dc) scroll_pane_cp19_ParamLimits

0xb67d,	// (0x000162dc) scroll_pane_cp19

0x6c61,	// (0x000118c0) bg_popup_window_pane_cp20

0xb691,	// (0x000162f0) listscroll_popup_fast_wide_pane

0x6d41,	// (0x000119a0) grid_indicator_nsta_pane

0xb699,	// (0x000162f8) clock_nsta_pane_g1

0xb6a2,	// (0x00016301) clock_nsta_pane_t1

0xb6be,	// (0x0001631d) cell_indicator_nsta_pane_ParamLimits

0xb6be,	// (0x0001631d) cell_indicator_nsta_pane

0xb6f6,	// (0x00016355) cell_indicator_nsta_pane_g1

0xb704,	// (0x00016363) cell_indicator_nsta_pane_g2

0x0001,

0xfaa2,	// (0x0001a701) cell_indicator_nsta_pane_g

0xb71a,	// (0x00016379) clock_nsta_pane_cp

0xb722,	// (0x00016381) indicator_nsta_pane_cp

0xb72b,	// (0x0001638a) nsta_clock_indic_pane_g1

0x6e24,	// (0x00011a83) grid_indicator_pane

0x8242,	// (0x00012ea1) scroll_pane_cp29

0x511f,	// (0x0000fd7e) indicator_nsta_pane_cp2_ParamLimits

0x511f,	// (0x0000fd7e) indicator_nsta_pane_cp2

0x6d41,	// (0x000119a0) main_apps_wheel_pane

0x9602,	// (0x00014261) form_midp_field_text_pane_ParamLimits

0x974d,	// (0x000143ac) scroll_bar_cp050_ParamLimits

0xb794,	// (0x000163f3) cell_indicator_pane_ParamLimits

0xb794,	// (0x000163f3) cell_indicator_pane

0xb7ab,	// (0x0001640a) cell_indicator_pane_g1

0xb7b5,	// (0x00016414) grid_wheel_folder_pane_ParamLimits

0xb7b5,	// (0x00016414) grid_wheel_folder_pane

0xb7c9,	// (0x00016428) list_wheel_apps_pane_ParamLimits

0xb7c9,	// (0x00016428) list_wheel_apps_pane

0xb7da,	// (0x00016439) main_apps_wheel_pane_g1_ParamLimits

0xb7da,	// (0x00016439) main_apps_wheel_pane_g1

0xb7ee,	// (0x0001644d) main_apps_wheel_pane_g2_ParamLimits

0xb7ee,	// (0x0001644d) main_apps_wheel_pane_g2

0x0001,

0xfabe,	// (0x0001a71d) main_apps_wheel_pane_g_ParamLimits

0xfabe,	// (0x0001a71d) main_apps_wheel_pane_g

0xb806,	// (0x00016465) main_apps_wheel_pane_t1_ParamLimits

0xb806,	// (0x00016465) main_apps_wheel_pane_t1

0xb829,	// (0x00016488) list_wheel_apps_pane_g1

0xb831,	// (0x00016490) list_wheel_apps_pane_g2

0xb839,	// (0x00016498) list_wheel_apps_pane_g3

0xb841,	// (0x000164a0) list_wheel_apps_pane_g4

0xb84b,	// (0x000164aa) list_wheel_apps_pane_g5

0x0004,

0xfac3,	// (0x0001a722) list_wheel_apps_pane_g

0x881a,	// (0x00013479) navi_icon_text_pane

0x8d0c,	// (0x0001396b) aid_fill_nsta

0xb86e,	// (0x000164cd) navi_icon_text_pane_g1

0xb87a,	// (0x000164d9) navi_icon_text_pane_t1

0x86b8,	// (0x00013317) list_set_graphic_pane_t1_ParamLimits

0x86b8,	// (0x00013317) list_set_graphic_pane_t1

0x9e9c,	// (0x00014afb) popup_midp_note_alarm_window_t6_ParamLimits

0x9e9c,	// (0x00014afb) popup_midp_note_alarm_window_t6

0x9eae,	// (0x00014b0d) popup_midp_note_alarm_window_t7_ParamLimits

0x9eae,	// (0x00014b0d) popup_midp_note_alarm_window_t7

0x9ec0,	// (0x00014b1f) popup_midp_note_alarm_window_t8_ParamLimits

0x9ec0,	// (0x00014b1f) popup_midp_note_alarm_window_t8

0x9ed2,	// (0x00014b31) popup_midp_note_alarm_window_t9_ParamLimits

0x9ed2,	// (0x00014b31) popup_midp_note_alarm_window_t9

0x9ee4,	// (0x00014b43) popup_midp_note_alarm_window_t10_ParamLimits

0x9ee4,	// (0x00014b43) popup_midp_note_alarm_window_t10

0x9ef6,	// (0x00014b55) popup_midp_note_alarm_window_t11_ParamLimits

0x9ef6,	// (0x00014b55) popup_midp_note_alarm_window_t11

0x9f08,	// (0x00014b67) scroll_pane_cp17_ParamLimits

0x9f08,	// (0x00014b67) scroll_pane_cp17

0x5bb6,	// (0x00010815) volume_small_pane_cp_g1

0x5eab,	// (0x00010b0a) volume_small_pane_cp_g2

0x5eb4,	// (0x00010b13) volume_small_pane_cp_g3

0x5ebd,	// (0x00010b1c) volume_small_pane_cp_g4

0x5ec6,	// (0x00010b25) volume_small_pane_cp_g5

0x5ecf,	// (0x00010b2e) volume_small_pane_cp_g6

0x5ed8,	// (0x00010b37) volume_small_pane_cp_g7

0x5ee1,	// (0x00010b40) volume_small_pane_cp_g8

0x5eea,	// (0x00010b49) volume_small_pane_cp_g9

0x5ef3,	// (0x00010b52) volume_small_pane_cp_g10

0x8a69,	// (0x000136c8) midp_ticker_pane_g1_ParamLimits

0x8a75,	// (0x000136d4) midp_ticker_pane_g2_ParamLimits

0xf759,	// (0x0001a3b8) midp_ticker_pane_g_ParamLimits

0x8a81,	// (0x000136e0) midp_ticker_pane_t1_ParamLimits

0x8d22,	// (0x00013981) aid_fill_nsta_2

0x9739,	// (0x00014398) list_form2_midp_pane

0xa914,	// (0x00015573) midp_editing_number_pane_ParamLimits

0xa923,	// (0x00015582) midp_ticker_pane_ParamLimits

0xb88c,	// (0x000164eb) form2_midp_field_pane

0xb8b0,	// (0x0001650f) scroll_pane_cp51

0xb8d0,	// (0x0001652f) form2_midp_button_pane_ParamLimits

0xb8d0,	// (0x0001652f) form2_midp_button_pane

0xb8e2,	// (0x00016541) form2_midp_content_pane_ParamLimits

0xb8e2,	// (0x00016541) form2_midp_content_pane

0xb8fc,	// (0x0001655b) form2_midp_field_choice_group_pane

0xb904,	// (0x00016563) form2_midp_field_pane_g1

0xb90c,	// (0x0001656b) form2_midp_field_pane_g2

0xb914,	// (0x00016573) form2_midp_field_pane_g3

0xb91c,	// (0x0001657b) form2_midp_field_pane_g4

0x0003,

0xfae8,	// (0x0001a747) form2_midp_field_pane_g

0xb924,	// (0x00016583) form2_midp_gauge_slider_pane

0xb92c,	// (0x0001658b) form2_midp_gauge_wait_pane

0xb934,	// (0x00016593) form2_midp_image_pane_ParamLimits

0xb934,	// (0x00016593) form2_midp_image_pane

0xb94f,	// (0x000165ae) form2_midp_label_pane_ParamLimits

0xb94f,	// (0x000165ae) form2_midp_label_pane

0xb968,	// (0x000165c7) form2_midp_label_pane_cp_ParamLimits

0xb968,	// (0x000165c7) form2_midp_label_pane_cp

0xb989,	// (0x000165e8) form2_midp_string_pane_ParamLimits

0xb989,	// (0x000165e8) form2_midp_string_pane

0xb99b,	// (0x000165fa) form2_midp_text_pane_ParamLimits

0xb99b,	// (0x000165fa) form2_midp_text_pane

0xb9b8,	// (0x00016617) form2_midp_time_pane

0xb9c8,	// (0x00016627) input_focus_pane_cp51_ParamLimits

0xb9c8,	// (0x00016627) input_focus_pane_cp51

0xb9e0,	// (0x0001663f) form2_midp_label_pane_t1_ParamLimits

0xb9e0,	// (0x0001663f) form2_midp_label_pane_t1

0xba21,	// (0x00016680) form2_mdip_text_pane_t1_ParamLimits

0xba21,	// (0x00016680) form2_mdip_text_pane_t1

0xba40,	// (0x0001669f) form2_midp_time_pane_t1

0xba5b,	// (0x000166ba) form2_midp_gauge_slider_pane_t1

0xba6d,	// (0x000166cc) form2_midp_gauge_slider_pane_t2

0xba7f,	// (0x000166de) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf1,	// (0x0001a750) form2_midp_gauge_slider_pane_t

0xba91,	// (0x000166f0) form2_midp_slider_pane

0xba9d,	// (0x000166fc) form2_midp_gauge_wait_pane_t1

0xbaab,	// (0x0001670a) form2_midp_wait_pane_ParamLimits

0xbaab,	// (0x0001670a) form2_midp_wait_pane

0x93f6,	// (0x00014055) list_single_2graphic_pane_cp4_ParamLimits

0x93f6,	// (0x00014055) list_single_2graphic_pane_cp4

0xbad6,	// (0x00016735) list_single_midp_graphic_pane_cp_ParamLimits

0xbad6,	// (0x00016735) list_single_midp_graphic_pane_cp

0x6c61,	// (0x000118c0) list_highlight_pane_cp20

0xbb05,	// (0x00016764) list_single_2graphic_pane_g1_cp4

0xbb0d,	// (0x0001676c) list_single_2graphic_pane_g2_cp4

0xbb15,	// (0x00016774) list_single_2graphic_pane_t1_cp4

0x6d41,	// (0x000119a0) list_highlight_pane_cp21

0xbb24,	// (0x00016783) list_single_midp_graphic_pane_g4_cp

0xbb33,	// (0x00016792) list_single_midp_graphic_pane_t1_cp

0xbb48,	// (0x000167a7) form2_mdip_string_pane_t1_ParamLimits

0xbb48,	// (0x000167a7) form2_mdip_string_pane_t1

0x6c61,	// (0x000118c0) bg_wml_button_pane_cp2

0x6c57,	// (0x000118b6) form2_midp_image_pane_g1

0x780a,	// (0x00012469) list_double_large_graphic_pane_g5_ParamLimits

0x780a,	// (0x00012469) list_double_large_graphic_pane_g5

0x7e95,	// (0x00012af4) midp_form_pane_ParamLimits

0x6d41,	// (0x000119a0) main_apps_wheel_pane_ParamLimits

0x57f6,	// (0x00010455) popup_preview_window_ParamLimits

0x57f6,	// (0x00010455) popup_preview_window

0x59b1,	// (0x00010610) popup_touch_info_window_ParamLimits

0x59b1,	// (0x00010610) popup_touch_info_window

0x59cf,	// (0x0001062e) popup_touch_menu_window_ParamLimits

0x59cf,	// (0x0001062e) popup_touch_menu_window

0x6c4d,	// (0x000118ac) bg_popup_sub_pane_cp6

0xbc41,	// (0x000168a0) list_touch_menu_pane

0xbc49,	// (0x000168a8) list_single_touch_menu_pane_ParamLimits

0xbc49,	// (0x000168a8) list_single_touch_menu_pane

0xbc5f,	// (0x000168be) list_single_touch_menu_pane_t1

0x6d41,	// (0x000119a0) bg_popup_sub_pane_cp7_ParamLimits

0x6d41,	// (0x000119a0) bg_popup_sub_pane_cp7

0xbc6d,	// (0x000168cc) heading_sub_pane

0xbc75,	// (0x000168d4) list_touch_info_pane_ParamLimits

0xbc75,	// (0x000168d4) list_touch_info_pane

0xbc84,	// (0x000168e3) list_single_touch_info_pane_ParamLimits

0xbc84,	// (0x000168e3) list_single_touch_info_pane

0xbc96,	// (0x000168f5) list_single_touch_info_pane_t1

0xbca4,	// (0x00016903) list_single_touch_info_pane_t2

0x0001,

0xfaff,	// (0x0001a75e) list_single_touch_info_pane_t

0x899a,	// (0x000135f9) bg_popup_heading_pane_cp

0xbcb2,	// (0x00016911) heading_sub_pane_t1

0x933d,	// (0x00013f9c) bg_popup_preview_window_pane_cp_ParamLimits

0x933d,	// (0x00013f9c) bg_popup_preview_window_pane_cp

0xbc6d,	// (0x000168cc) heading_preview_pane

0xbc75,	// (0x000168d4) list_preview_pane_ParamLimits

0xbc75,	// (0x000168d4) list_preview_pane

0xbcc0,	// (0x0001691f) popup_preview_window_g1

0xbc84,	// (0x000168e3) list_single_preview_pane_ParamLimits

0xbc84,	// (0x000168e3) list_single_preview_pane

0xbcc8,	// (0x00016927) list_single_preview_pane_g1

0xbcd0,	// (0x0001692f) list_single_preview_pane_t1

0xbc96,	// (0x000168f5) list_single_preview_pane_t2

0x0001,

0xfb04,	// (0x0001a763) list_single_preview_pane_t

0xbcde,	// (0x0001693d) bg_popup_heading_pane_cp2_ParamLimits

0xbcde,	// (0x0001693d) bg_popup_heading_pane_cp2

0xbcf4,	// (0x00016953) heading_preview_pane_g1

0xbcfc,	// (0x0001695b) heading_preview_pane_t1_ParamLimits

0xbcfc,	// (0x0001695b) heading_preview_pane_t1

0x6e47,	// (0x00011aa6) soft_indicator_pane_t1_ParamLimits

0x753a,	// (0x00012199) scroll_pane_ParamLimits

0x813b,	// (0x00012d9a) scroll_sc2_left_pane

0x8144,	// (0x00012da3) scroll_sc2_right_pane

0x8163,	// (0x00012dc2) scroll_bg_pane_g1_ParamLimits

0x8178,	// (0x00012dd7) scroll_bg_pane_g2_ParamLimits

0x8190,	// (0x00012def) scroll_bg_pane_g3_ParamLimits

0xf6e4,	// (0x0001a343) scroll_bg_pane_g_ParamLimits

0x8163,	// (0x00012dc2) scroll_handle_pane_g1_ParamLimits

0x81b2,	// (0x00012e11) scroll_handle_pane_g2_ParamLimits

0x8190,	// (0x00012def) scroll_handle_pane_g3_ParamLimits

0xf6eb,	// (0x0001a34a) scroll_handle_pane_g_ParamLimits

0x5479,	// (0x000100d8) popup_choice_list_window_ParamLimits

0x5479,	// (0x000100d8) popup_choice_list_window

0x9129,	// (0x00013d88) choice_list_pane

0x91e5,	// (0x00013e44) cell_toolbar_pane_t1

0x920d,	// (0x00013e6c) toolbar_button_pane_ParamLimits

0xa3c2,	// (0x00015021) ai_gene_pane_1_t2_ParamLimits

0xa3c2,	// (0x00015021) ai_gene_pane_1_t2

0x0001,

0xf913,	// (0x0001a572) ai_gene_pane_1_t_ParamLimits

0xf913,	// (0x0001a572) ai_gene_pane_1_t

0xbd19,	// (0x00016978) scroll_sc2_left_pane_g1

0xbd19,	// (0x00016978) scroll_sc2_right_pane_g1

0x8ce2,	// (0x00013941) bg_popup_sub_pane_cp10

0xbd23,	// (0x00016982) list_choice_list_pane

0xbd3c,	// (0x0001699b) list_single_choice_list_pane_ParamLimits

0xbd3c,	// (0x0001699b) list_single_choice_list_pane

0xbd4f,	// (0x000169ae) list_single_choice_list_pane_g1

0x7e45,	// (0x00012aa4) list_single_choice_list_pane_t1_ParamLimits

0x7e45,	// (0x00012aa4) list_single_choice_list_pane_t1

0xbd57,	// (0x000169b6) choice_list_pane_g1

0xbd5f,	// (0x000169be) choice_list_pane_t1

0x6c4d,	// (0x000118ac) input_focus_pane_cp11

0x801c,	// (0x00012c7b) title_pane_stacon_g2_ParamLimits

0x801c,	// (0x00012c7b) title_pane_stacon_g2

0x0002,

0xf6ca,	// (0x0001a329) title_pane_stacon_g_ParamLimits

0xf6ca,	// (0x0001a329) title_pane_stacon_g

0x899a,	// (0x000135f9) cursor_press_pane

0x5525,	// (0x00010184) popup_fep_hwr_window_ParamLimits

0x5525,	// (0x00010184) popup_fep_hwr_window

0x559f,	// (0x000101fe) popup_fep_vkb_window_ParamLimits

0x559f,	// (0x000101fe) popup_fep_vkb_window

0xbd6d,	// (0x000169cc) cursor_press_pane_g1

0x0002,

0xfb2d,	// (0x0001a78c) fep_vkb_side_pane_g_ParamLimits

0x5f35,	// (0x00010b94) fep_hwr_candidate_pane_ParamLimits

0x5f35,	// (0x00010b94) fep_hwr_candidate_pane

0x5f5f,	// (0x00010bbe) fep_hwr_side_pane_ParamLimits

0x5f5f,	// (0x00010bbe) fep_hwr_side_pane

0x5f7f,	// (0x00010bde) fep_hwr_top_pane_ParamLimits

0x5f7f,	// (0x00010bde) fep_hwr_top_pane

0x5f97,	// (0x00010bf6) fep_hwr_write_pane_ParamLimits

0x5f97,	// (0x00010bf6) fep_hwr_write_pane

0xfb2d,	// (0x0001a78c) fep_vkb_side_pane_g

0xbd75,	// (0x000169d4) fep_hwr_top_pane_g1

0xbd87,	// (0x000169e6) fep_hwr_top_pane_g2

0x5fd1,	// (0x00010c30) fep_hwr_top_pane_g3

0x0002,

0xfb09,	// (0x0001a768) fep_hwr_top_pane_g

0x5fe6,	// (0x00010c45) fep_hwr_top_text_pane

0x8309,	// (0x00012f68) fep_hwr_top_text_pane_g1

0xbdbd,	// (0x00016a1c) fep_hwr_top_text_pane_t1

0x60dc,	// (0x00010d3b) fep_hwr_candidate_pane_g1

0xc010,	// (0x00016c6f) fep_vkb_keypad_pane_g3_ParamLimits

0xc010,	// (0x00016c6f) fep_vkb_keypad_pane_g3

0xc038,	// (0x00016c97) fep_vkb_keypad_pane_g4_ParamLimits

0xc038,	// (0x00016c97) fep_vkb_keypad_pane_g4

0xc0a7,	// (0x00016d06) fep_vkb_bottom_pane_g2_ParamLimits

0xc0a7,	// (0x00016d06) fep_vkb_bottom_pane_g2

0x0001,

0xfb34,	// (0x0001a793) fep_vkb_bottom_pane_g_ParamLimits

0xfb34,	// (0x0001a793) fep_vkb_bottom_pane_g

0xbd19,	// (0x00016978) cell_vkb_side_pane_g2

0x0001,

0xfb3e,	// (0x0001a79d) cell_vkb_side_pane_g

0xc132,	// (0x00016d91) cell_vkb_side_pane_t1

0xc140,	// (0x00016d9f) cell_vkb_side_pane_t1_copy1

0xbd19,	// (0x00016978) bg_fep_vkb_candidate_pane_g2

0xc26c,	// (0x00016ecb) cell_vkb_candidate_pane_ParamLimits

0xbdcb,	// (0x00016a2a) aid_size_cell_vkb_ParamLimits

0xbdcb,	// (0x00016a2a) aid_size_cell_vkb

0xc26c,	// (0x00016ecb) cell_vkb_candidate_pane

0x6103,	// (0x00010d62) bg_popup_fep_shadow_pane_g1

0xbe59,	// (0x00016ab8) fep_vkb_bottom_pane_ParamLimits

0xbe59,	// (0x00016ab8) fep_vkb_bottom_pane

0xbe8f,	// (0x00016aee) fep_vkb_candidate_pane_ParamLimits

0xbe8f,	// (0x00016aee) fep_vkb_candidate_pane

0xbeab,	// (0x00016b0a) fep_vkb_keypad_pane_ParamLimits

0xbeab,	// (0x00016b0a) fep_vkb_keypad_pane

0xbef1,	// (0x00016b50) fep_vkb_side_pane_ParamLimits

0xbef1,	// (0x00016b50) fep_vkb_side_pane

0xbf2d,	// (0x00016b8c) fep_vkb_top_pane_ParamLimits

0xbf2d,	// (0x00016b8c) fep_vkb_top_pane

0xbf69,	// (0x00016bc8) fep_vkb_top_pane_g1_ParamLimits

0xbf69,	// (0x00016bc8) fep_vkb_top_pane_g1

0xbf78,	// (0x00016bd7) fep_vkb_top_pane_g2_ParamLimits

0xbf78,	// (0x00016bd7) fep_vkb_top_pane_g2

0xbf87,	// (0x00016be6) fep_vkb_top_pane_g3_ParamLimits

0xbf87,	// (0x00016be6) fep_vkb_top_pane_g3

0x0003,

0xfb24,	// (0x0001a783) fep_vkb_top_pane_g_ParamLimits

0xfb24,	// (0x0001a783) fep_vkb_top_pane_g

0xbfa5,	// (0x00016c04) fep_vkb_top_text_pane_ParamLimits

0xbfa5,	// (0x00016c04) fep_vkb_top_text_pane

0xbfb6,	// (0x00016c15) fep_vkb_side_pane_g1_ParamLimits

0xbfb6,	// (0x00016c15) fep_vkb_side_pane_g1

0xbfff,	// (0x00016c5e) grid_vkb_side_pane_ParamLimits

0xbfff,	// (0x00016c5e) grid_vkb_side_pane

0x610b,	// (0x00010d6a) bg_popup_fep_shadow_pane_g2

0x6114,	// (0x00010d73) bg_popup_fep_shadow_pane_g3

0x611c,	// (0x00010d7b) bg_popup_fep_shadow_pane_g4

0x6125,	// (0x00010d84) bg_popup_fep_shadow_pane_g5

0x612f,	// (0x00010d8e) bg_popup_fep_shadow_pane_g6

0x6137,	// (0x00010d96) bg_popup_fep_shadow_pane_g7

0x7c78,	// (0x000128d7) bg_popup_fep_shadow_pane_g8

0xc056,	// (0x00016cb5) grid_vkb_keypad_number_pane_ParamLimits

0xc056,	// (0x00016cb5) grid_vkb_keypad_number_pane

0xc066,	// (0x00016cc5) grid_vkb_keypad_pane_ParamLimits

0xc066,	// (0x00016cc5) grid_vkb_keypad_pane

0xc08c,	// (0x00016ceb) fep_vkb_bottom_pane_g1_ParamLimits

0xc08c,	// (0x00016ceb) fep_vkb_bottom_pane_g1

0xc0b5,	// (0x00016d14) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc0b5,	// (0x00016d14) grid_vkb_keypad_bottom_left_pane

0xc0ca,	// (0x00016d29) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc0ca,	// (0x00016d29) grid_vkb_keypad_bottom_right_pane

0xc0df,	// (0x00016d3e) fep_vkb_top_text_pane_g1

0xc0fa,	// (0x00016d59) fep_vkb_top_text_pane_t1

0xc10f,	// (0x00016d6e) cell_vkb_side_pane_ParamLimits

0xc10f,	// (0x00016d6e) cell_vkb_side_pane

0xbd19,	// (0x00016978) cell_vkb_side_pane_g1

0xc14e,	// (0x00016dad) cell_vkb_keypad_pane_ParamLimits

0xc14e,	// (0x00016dad) cell_vkb_keypad_pane

0xc1c3,	// (0x00016e22) cell_vkb_keypad_pane_g1

0x0008,

0xfb51,	// (0x0001a7b0) bg_popup_fep_shadow_pane_g

0x6149,	// (0x00010da8) cell_hwr_side_pane_g1

0x6149,	// (0x00010da8) cell_hwr_side_pane_g2

0xc1cd,	// (0x00016e2c) cell_vkb_keypad_pane_t1

0xc1db,	// (0x00016e3a) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc1db,	// (0x00016e3a) cell_vkb_keypad_bottom_left_pane

0xc1f8,	// (0x00016e57) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc1f8,	// (0x00016e57) cell_vkb_keypad_bottom_right_pane

0xbd19,	// (0x00016978) cell_vkb_keypad_bottom_left_pane_g1

0xbd19,	// (0x00016978) cell_vkb_keypad_bottom_right_pane_g1

0xc231,	// (0x00016e90) cell_vkb_keypad_number_pane_ParamLimits

0xc231,	// (0x00016e90) cell_vkb_keypad_number_pane

0xc250,	// (0x00016eaf) cell_vkb_keypad_number_pane_g1

0xc25a,	// (0x00016eb9) cell_vkb_keypad_number_pane_g2

0xc263,	// (0x00016ec2) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb43,	// (0x0001a7a2) cell_vkb_keypad_number_pane_g

0xc1cd,	// (0x00016e2c) cell_vkb_keypad_number_pane_t1

0xc287,	// (0x00016ee6) fep_vkb_candidate_pane_g1

0x0001,

0xfb64,	// (0x0001a7c3) cell_hwr_side_pane_g

0xc2a0,	// (0x00016eff) cell_hwr_side_pane_t1

0x6153,	// (0x00010db2) cell_hwr_side_pane_t1_copy1

0x6161,	// (0x00010dc0) cell_hwr_candidate_pane_g1

0x6190,	// (0x00010def) cell_hwr_candidate_pane_t1

0xbd19,	// (0x00016978) cell_vkb_candidate_pane_g2

0xc2e4,	// (0x00016f43) cell_vkb_candidate_pane_t1

0x5efc,	// (0x00010b5b) bg_popup_fep_shadow_pane_ParamLimits

0x5efc,	// (0x00010b5b) bg_popup_fep_shadow_pane

0x5fb1,	// (0x00010c10) bg_fep_hwr_top_pane_g4

0xbd99,	// (0x000169f8) bg_hwr_side_pane_g1_ParamLimits

0xbd99,	// (0x000169f8) bg_hwr_side_pane_g1

0x6022,	// (0x00010c81) cell_hwr_side_pane_ParamLimits

0x6022,	// (0x00010c81) cell_hwr_side_pane

0x605d,	// (0x00010cbc) fep_hwr_write_pane_g1_ParamLimits

0x605d,	// (0x00010cbc) fep_hwr_write_pane_g1

0x606a,	// (0x00010cc9) fep_hwr_write_pane_g2_ParamLimits

0x606a,	// (0x00010cc9) fep_hwr_write_pane_g2

0x6077,	// (0x00010cd6) fep_hwr_write_pane_g3_ParamLimits

0x6077,	// (0x00010cd6) fep_hwr_write_pane_g3

0x6085,	// (0x00010ce4) fep_hwr_write_pane_g4_ParamLimits

0x6085,	// (0x00010ce4) fep_hwr_write_pane_g4

0x0005,

0xfb10,	// (0x0001a76f) fep_hwr_write_pane_g_ParamLimits

0xfb10,	// (0x0001a76f) fep_hwr_write_pane_g

0x5fb1,	// (0x00010c10) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x5fb1,	// (0x00010c10) bg_fep_hwr_candidate_pane_g2

0x609a,	// (0x00010cf9) cell_hwr_candidate_pane_ParamLimits

0x609a,	// (0x00010cf9) cell_hwr_candidate_pane

0x60dc,	// (0x00010d3b) fep_hwr_candidate_pane_g1_ParamLimits

0xbdf9,	// (0x00016a58) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xbdf9,	// (0x00016a58) bg_popup_fep_shadow_pane_cp2

0xbf97,	// (0x00016bf6) fep_vkb_top_pane_g4_ParamLimits

0xbf97,	// (0x00016bf6) fep_vkb_top_pane_g4

0xbfdd,	// (0x00016c3c) fep_vkb_side_pane_g2_ParamLimits

0xbfdd,	// (0x00016c3c) fep_vkb_side_pane_g2

0x794a,	// (0x000125a9) list_setting_pane_t4_ParamLimits

0x794a,	// (0x000125a9) list_setting_pane_t4

0x79c4,	// (0x00012623) list_setting_number_pane_t5_ParamLimits

0x79c4,	// (0x00012623) list_setting_number_pane_t5

0x8350,	// (0x00012faf) list_double_heading_pane_cp2_ParamLimits

0x8350,	// (0x00012faf) list_double_heading_pane_cp2

0x7b4e,	// (0x000127ad) list_double_heading_pane_g1_cp2_ParamLimits

0x7b4e,	// (0x000127ad) list_double_heading_pane_g1_cp2

0x7b5a,	// (0x000127b9) list_double_heading_pane_g2_cp2_ParamLimits

0x7b5a,	// (0x000127b9) list_double_heading_pane_g2_cp2

0xc2f2,	// (0x00016f51) list_double_heading_pane_t1_cp2_ParamLimits

0xc2f2,	// (0x00016f51) list_double_heading_pane_t1_cp2

0xc308,	// (0x00016f67) list_double_heading_pane_t2_cp2_ParamLimits

0xc308,	// (0x00016f67) list_double_heading_pane_t2_cp2

0x6c35,	// (0x00011894) aid_value_unit2

0x4cb7,	// (0x0000f916) popup_preview_fixed_window

0x6fe4,	// (0x00011c43) bg_popup_preview_window_pane_cp02

0xc31a,	// (0x00016f79) list_preview_fixed_pane

0xc360,	// (0x00016fbf) list_empty_pane_fp_ParamLimits

0xc360,	// (0x00016fbf) list_empty_pane_fp

0xc360,	// (0x00016fbf) list_single_cale_day_pane_fp_ParamLimits

0xc360,	// (0x00016fbf) list_single_cale_day_pane_fp

0xc360,	// (0x00016fbf) list_single_graphic_heading_pane_fp_ParamLimits

0xc360,	// (0x00016fbf) list_single_graphic_heading_pane_fp

0xc360,	// (0x00016fbf) list_single_graphic_pane_fp_ParamLimits

0xc360,	// (0x00016fbf) list_single_graphic_pane_fp

0xc360,	// (0x00016fbf) list_single_heading_pane_fp_ParamLimits

0xc360,	// (0x00016fbf) list_single_heading_pane_fp

0xc360,	// (0x00016fbf) list_single_pane_fp_ParamLimits

0xc360,	// (0x00016fbf) list_single_pane_fp

0xc3b7,	// (0x00017016) list_single_pane_fp_g1_ParamLimits

0xc3b7,	// (0x00017016) list_single_pane_fp_g1

0x7b4e,	// (0x000127ad) list_single_pane_fp_g2_ParamLimits

0x7b4e,	// (0x000127ad) list_single_pane_fp_g2

0x7b5a,	// (0x000127b9) list_single_pane_fp_g3_ParamLimits

0x7b5a,	// (0x000127b9) list_single_pane_fp_g3

0xc3c3,	// (0x00017022) list_single_pane_fp_g4_ParamLimits

0xc3c3,	// (0x00017022) list_single_pane_fp_g4

0x0003,

0xfb77,	// (0x0001a7d6) list_single_pane_fp_g_ParamLimits

0xfb77,	// (0x0001a7d6) list_single_pane_fp_g

0xc3cf,	// (0x0001702e) list_single_pane_fp_t1_ParamLimits

0xc3cf,	// (0x0001702e) list_single_pane_fp_t1

0xc3e6,	// (0x00017045) list_single_graphic_pane_fp_g1_ParamLimits

0xc3e6,	// (0x00017045) list_single_graphic_pane_fp_g1

0xc3b7,	// (0x00017016) list_single_graphic_pane_fp_g2_ParamLimits

0xc3b7,	// (0x00017016) list_single_graphic_pane_fp_g2

0x7b4e,	// (0x000127ad) list_single_graphic_pane_fp_g3_ParamLimits

0x7b4e,	// (0x000127ad) list_single_graphic_pane_fp_g3

0x7b5a,	// (0x000127b9) list_single_graphic_pane_fp_g4_ParamLimits

0x7b5a,	// (0x000127b9) list_single_graphic_pane_fp_g4

0xc3c3,	// (0x00017022) list_single_graphic_pane_fp_g5_ParamLimits

0xc3c3,	// (0x00017022) list_single_graphic_pane_fp_g5

0x0004,

0xfb80,	// (0x0001a7df) list_single_graphic_pane_fp_g_ParamLimits

0xfb80,	// (0x0001a7df) list_single_graphic_pane_fp_g

0xc3f2,	// (0x00017051) list_single_graphic_pane_fp_t1_ParamLimits

0xc3f2,	// (0x00017051) list_single_graphic_pane_fp_t1

0xc3e6,	// (0x00017045) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xc3e6,	// (0x00017045) list_single_graphic_heading_pane_fp_g1

0xc3b7,	// (0x00017016) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc3b7,	// (0x00017016) list_single_graphic_heading_pane_fp_g2

0x7b4e,	// (0x000127ad) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x7b4e,	// (0x000127ad) list_single_graphic_heading_pane_fp_g3

0x7b5a,	// (0x000127b9) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x7b5a,	// (0x000127b9) list_single_graphic_heading_pane_fp_g4

0xc3c3,	// (0x00017022) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc3c3,	// (0x00017022) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb80,	// (0x0001a7df) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb80,	// (0x0001a7df) list_single_graphic_heading_pane_fp_g

0xc408,	// (0x00017067) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xc408,	// (0x00017067) list_single_graphic_heading_pane_fp_t1

0xc41e,	// (0x0001707d) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xc41e,	// (0x0001707d) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb8b,	// (0x0001a7ea) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb8b,	// (0x0001a7ea) list_single_graphic_heading_pane_fp_t

0xc430,	// (0x0001708f) list_single_cale_day_pane_fp_g1_ParamLimits

0xc430,	// (0x0001708f) list_single_cale_day_pane_fp_g1

0xc468,	// (0x000170c7) list_single_cale_day_pane_fp_g2_ParamLimits

0xc468,	// (0x000170c7) list_single_cale_day_pane_fp_g2

0xc474,	// (0x000170d3) list_single_cale_day_pane_fp_g3_ParamLimits

0xc474,	// (0x000170d3) list_single_cale_day_pane_fp_g3

0xc49c,	// (0x000170fb) list_single_cale_day_pane_fp_g4_ParamLimits

0xc49c,	// (0x000170fb) list_single_cale_day_pane_fp_g4

0xc4c0,	// (0x0001711f) list_single_cale_day_pane_fp_g5_ParamLimits

0xc4c0,	// (0x0001711f) list_single_cale_day_pane_fp_g5

0x0004,

0xfb90,	// (0x0001a7ef) list_single_cale_day_pane_fp_g_ParamLimits

0xfb90,	// (0x0001a7ef) list_single_cale_day_pane_fp_g

0xc4e4,	// (0x00017143) list_single_cale_day_pane_fp_t1_ParamLimits

0xc4e4,	// (0x00017143) list_single_cale_day_pane_fp_t1

0xc50a,	// (0x00017169) list_single_cale_day_pane_fp_t2_ParamLimits

0xc50a,	// (0x00017169) list_single_cale_day_pane_fp_t2

0xc523,	// (0x00017182) list_single_cale_day_pane_fp_t3_ParamLimits

0xc523,	// (0x00017182) list_single_cale_day_pane_fp_t3

0x0002,

0xfb9b,	// (0x0001a7fa) list_single_cale_day_pane_fp_t_ParamLimits

0xfb9b,	// (0x0001a7fa) list_single_cale_day_pane_fp_t

0xc3b7,	// (0x00017016) list_empty_pane_fp_g1_ParamLimits

0xc3b7,	// (0x00017016) list_empty_pane_fp_g1

0xc53c,	// (0x0001719b) list_empty_pane_fp_t1

0xc54a,	// (0x000171a9) list_empty_pane_fp_t2

0x0001,

0xfba2,	// (0x0001a801) list_empty_pane_fp_t

0xc3b7,	// (0x00017016) list_single_heading_pane_fp_g1_ParamLimits

0xc3b7,	// (0x00017016) list_single_heading_pane_fp_g1

0x7b4e,	// (0x000127ad) list_single_heading_pane_fp_g2_ParamLimits

0x7b4e,	// (0x000127ad) list_single_heading_pane_fp_g2

0x7b5a,	// (0x000127b9) list_single_heading_pane_fp_g3_ParamLimits

0x7b5a,	// (0x000127b9) list_single_heading_pane_fp_g3

0x0002,

0xfba7,	// (0x0001a806) list_single_heading_pane_fp_g_ParamLimits

0xfba7,	// (0x0001a806) list_single_heading_pane_fp_g

0xc558,	// (0x000171b7) list_single_heading_pane_fp_t1_ParamLimits

0xc558,	// (0x000171b7) list_single_heading_pane_fp_t1

0xc56a,	// (0x000171c9) list_single_heading_pane_fp_t2_ParamLimits

0xc56a,	// (0x000171c9) list_single_heading_pane_fp_t2

0x0001,

0xfbae,	// (0x0001a80d) list_single_heading_pane_fp_t_ParamLimits

0xfbae,	// (0x0001a80d) list_single_heading_pane_fp_t

0x7eb3,	// (0x00012b12) aid_size_cell_fast

0x6f54,	// (0x00011bb3) soft_indicator_pane_cp1_t1

0x7ef0,	// (0x00012b4f) cell_app_pane_cp2_ParamLimits

0x7ef0,	// (0x00012b4f) cell_app_pane_cp2

0x5f1e,	// (0x00010b7d) fep_hwr_candidate_drop_down_list_pane

0x60f6,	// (0x00010d55) fep_hwr_candidate_pane_g3_ParamLimits

0x60f6,	// (0x00010d55) fep_hwr_candidate_pane_g3

0x4092,	// (0x0000ecf1) fep_hwr_candidate_pane_g4_ParamLimits

0x4092,	// (0x0000ecf1) fep_hwr_candidate_pane_g4

0x0002,

0xfb1d,	// (0x0001a77c) fep_hwr_candidate_pane_g_ParamLimits

0xfb1d,	// (0x0001a77c) fep_hwr_candidate_pane_g

0xbe7e,	// (0x00016add) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xbe7e,	// (0x00016add) fep_vkb_candidate_drop_down_list_pane

0xc28f,	// (0x00016eee) fep_vkb_candidate_pane_g3

0xc297,	// (0x00016ef6) fep_vkb_candidate_pane_g4

0x0002,

0xfb4a,	// (0x0001a7a9) fep_vkb_candidate_pane_g

0x6161,	// (0x00010dc0) cell_hwr_candidate_pane_g1_ParamLimits

0x616f,	// (0x00010dce) cell_hwr_candidate_pane_g3_ParamLimits

0x616f,	// (0x00010dce) cell_hwr_candidate_pane_g3

0xe3a0,	// (0x00018fff) cell_hwr_candidate_pane_g4_ParamLimits

0xe3a0,	// (0x00018fff) cell_hwr_candidate_pane_g4

0x0002,

0xfb69,	// (0x0001a7c8) cell_hwr_candidate_pane_g_ParamLimits

0xfb69,	// (0x0001a7c8) cell_hwr_candidate_pane_g

0xc2ae,	// (0x00016f0d) cell_vkb_candidate_pane_g3_ParamLimits

0xc2ae,	// (0x00016f0d) cell_vkb_candidate_pane_g3

0xc2c9,	// (0x00016f28) cell_vkb_candidate_pane_g4_ParamLimits

0xc2c9,	// (0x00016f28) cell_vkb_candidate_pane_g4

0xc580,	// (0x000171df) cell_app_pane_cp2_g1_ParamLimits

0xc580,	// (0x000171df) cell_app_pane_cp2_g1

0xc59e,	// (0x000171fd) cell_app_pane_cp2_g2_ParamLimits

0xc59e,	// (0x000171fd) cell_app_pane_cp2_g2

0x0001,

0xfbb3,	// (0x0001a812) cell_app_pane_cp2_g_ParamLimits

0xfbb3,	// (0x0001a812) cell_app_pane_cp2_g

0xc5aa,	// (0x00017209) cell_app_pane_cp2_t1_ParamLimits

0xc5aa,	// (0x00017209) cell_app_pane_cp2_t1

0x7b28,	// (0x00012787) grid_highlight_pane_cp1_ParamLimits

0x7b28,	// (0x00012787) grid_highlight_pane_cp1

0x61ae,	// (0x00010e0d) cell_hwr_candidate_pane_cp1_ParamLimits

0x61ae,	// (0x00010e0d) cell_hwr_candidate_pane_cp1

0x6161,	// (0x00010dc0) fep_hwr_candidate_drop_down_list_pane_g1

0x61cd,	// (0x00010e2c) fep_hwr_candidate_drop_down_list_pane_g2

0x61da,	// (0x00010e39) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbb8,	// (0x0001a817) fep_hwr_candidate_drop_down_list_pane_g

0x61e7,	// (0x00010e46) fep_hwr_candidate_drop_down_list_scroll_pane

0x61f0,	// (0x00010e4f) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x61f0,	// (0x00010e4f) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x61fd,	// (0x00010e5c) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x61fd,	// (0x00010e5c) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x620a,	// (0x00010e69) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x620a,	// (0x00010e69) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x6217,	// (0x00010e76) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6217,	// (0x00010e76) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x6232,	// (0x00010e91) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6232,	// (0x00010e91) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x624d,	// (0x00010eac) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x624d,	// (0x00010eac) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x6268,	// (0x00010ec7) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x6268,	// (0x00010ec7) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x6283,	// (0x00010ee2) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x6283,	// (0x00010ee2) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbbf,	// (0x0001a81e) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbbf,	// (0x0001a81e) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc5bc,	// (0x0001721b) cell_vkb_candidate_pane_cp1_ParamLimits

0xc5bc,	// (0x0001721b) cell_vkb_candidate_pane_cp1

0xbf97,	// (0x00016bf6) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xbf97,	// (0x00016bf6) fep_vkb_candidate_drop_down_list_pane_g1

0xc5dc,	// (0x0001723b) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc5dc,	// (0x0001723b) fep_vkb_candidate_drop_down_list_pane_g2

0xc5e9,	// (0x00017248) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc5e9,	// (0x00017248) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbd0,	// (0x0001a82f) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbd0,	// (0x0001a82f) fep_vkb_candidate_drop_down_list_pane_g

0xc5f6,	// (0x00017255) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc5f6,	// (0x00017255) fep_vkb_candidate_drop_down_list_scroll_pane

0xc603,	// (0x00017262) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc603,	// (0x00017262) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc610,	// (0x0001726f) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc610,	// (0x0001726f) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc61c,	// (0x0001727b) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc61c,	// (0x0001727b) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc375,	// (0x00016fd4) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc375,	// (0x00016fd4) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc396,	// (0x00016ff5) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc396,	// (0x00016ff5) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc628,	// (0x00017287) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc628,	// (0x00017287) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc649,	// (0x000172a8) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc649,	// (0x000172a8) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc66a,	// (0x000172c9) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc66a,	// (0x000172c9) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd7,	// (0x0001a836) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd7,	// (0x0001a836) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x6c6b,	// (0x000118ca) title_pane_g1_ParamLimits

0x6c78,	// (0x000118d7) title_pane_g2_ParamLimits

0xf554,	// (0x0001a1b3) title_pane_g_ParamLimits

0x82f9,	// (0x00012f58) aid_call2_pane

0x8301,	// (0x00012f60) aid_call_pane

0x8309,	// (0x00012f68) popup_clock_analogue_window_g1

0x8309,	// (0x00012f68) popup_clock_analogue_window_g2

0x5020,	// (0x0000fc7f) popup_clock_analogue_window_g3

0x5029,	// (0x0000fc88) popup_clock_analogue_window_g4

0x6c57,	// (0x000118b6) popup_clock_analogue_window_g5

0x0004,

0xf6f9,	// (0x0001a358) popup_clock_analogue_window_g

0x5031,	// (0x0000fc90) popup_clock_analogue_window_t1

0x503f,	// (0x0000fc9e) clock_digital_number_pane_ParamLimits

0x503f,	// (0x0000fc9e) clock_digital_number_pane

0x504b,	// (0x0000fcaa) clock_digital_number_pane_cp02_ParamLimits

0x504b,	// (0x0000fcaa) clock_digital_number_pane_cp02

0x5057,	// (0x0000fcb6) clock_digital_number_pane_cp03_ParamLimits

0x5057,	// (0x0000fcb6) clock_digital_number_pane_cp03

0x5063,	// (0x0000fcc2) clock_digital_number_pane_cp04_ParamLimits

0x5063,	// (0x0000fcc2) clock_digital_number_pane_cp04

0x506f,	// (0x0000fcce) clock_digital_separator_pane_ParamLimits

0x506f,	// (0x0000fcce) clock_digital_separator_pane

0x507b,	// (0x0000fcda) popup_clock_digital_window_t1_ParamLimits

0x507b,	// (0x0000fcda) popup_clock_digital_window_t1

0x6c57,	// (0x000118b6) clock_digital_number_pane_g1

0x6c57,	// (0x000118b6) clock_digital_number_pane_g2

0x0001,

0xf704,	// (0x0001a363) clock_digital_number_pane_g

0x6c57,	// (0x000118b6) clock_digital_separator_pane_g1

0x6c57,	// (0x000118b6) clock_digital_separator_pane_g2

0x0001,

0xf704,	// (0x0001a363) clock_digital_separator_pane_g

0x8d0c,	// (0x0001396b) aid_fill_nsta_ParamLimits

0x8e4e,	// (0x00013aad) indicator_nsta_pane_ParamLimits

0x8fc1,	// (0x00013c20) popup_clock_analogue_window

0x8fc1,	// (0x00013c20) popup_clock_digital_window

0x6d41,	// (0x000119a0) grid_indicator_nsta_pane_ParamLimits

0xb6b0,	// (0x0001630f) clock_nsta_pane_t2

0x0001,

0xfa9d,	// (0x0001a6fc) clock_nsta_pane_t

0x4fe4,	// (0x0000fc43) aid_size_max_handle

0x4fee,	// (0x0000fc4d) aid_size_min_handle

0x899a,	// (0x000135f9) editor_scroll_pane

0xc685,	// (0x000172e4) ex_editor_pane

0x7e21,	// (0x00012a80) scroll_pane_cp13

0x7566,	// (0x000121c5) scroll_pane_cp14

0x8338,	// (0x00012f97) scroll_pane_cp36

0x8364,	// (0x00012fc3) list_single_graphic_hl_pane_cp2_ParamLimits

0x8364,	// (0x00012fc3) list_single_graphic_hl_pane_cp2

0xa9df,	// (0x0001563e) list_single_graphic_hl_pane_ParamLimits

0xa9df,	// (0x0001563e) list_single_graphic_hl_pane

0xc68d,	// (0x000172ec) aid_size_min_hl_cp1

0xc696,	// (0x000172f5) list_highlight_pane_cp34_ParamLimits

0xc696,	// (0x000172f5) list_highlight_pane_cp34

0xc6a7,	// (0x00017306) list_single_graphic_hl_pane_g1_ParamLimits

0xc6a7,	// (0x00017306) list_single_graphic_hl_pane_g1

0xc6b4,	// (0x00017313) list_single_graphic_hl_pane_g2_ParamLimits

0xc6b4,	// (0x00017313) list_single_graphic_hl_pane_g2

0xc6b4,	// (0x00017313) list_single_graphic_hl_pane_g3_ParamLimits

0xc6b4,	// (0x00017313) list_single_graphic_hl_pane_g3

0x918f,	// (0x00013dee) list_single_graphic_hl_pane_g4_ParamLimits

0x918f,	// (0x00013dee) list_single_graphic_hl_pane_g4

0xc6c0,	// (0x0001731f) list_single_graphic_hl_pane_g5_ParamLimits

0xc6c0,	// (0x0001731f) list_single_graphic_hl_pane_g5

0x0004,

0xfbe8,	// (0x0001a847) list_single_graphic_hl_pane_g_ParamLimits

0xfbe8,	// (0x0001a847) list_single_graphic_hl_pane_g

0xc6d4,	// (0x00017333) list_single_graphic_hl_pane_t1_ParamLimits

0xc6d4,	// (0x00017333) list_single_graphic_hl_pane_t1

0xc6ea,	// (0x00017349) aid_size_min_hl_cp2

0xc6f3,	// (0x00017352) list_highlight_pane_cp34_cp2_ParamLimits

0xc6f3,	// (0x00017352) list_highlight_pane_cp34_cp2

0xc6a7,	// (0x00017306) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc6a7,	// (0x00017306) list_single_graphic_hl_pane_g1_cp2

0xc700,	// (0x0001735f) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc700,	// (0x0001735f) list_single_graphic_hl_pane_g2_cp2

0xc70c,	// (0x0001736b) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc70c,	// (0x0001736b) list_single_graphic_hl_pane_g3_cp2

0x918f,	// (0x00013dee) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x918f,	// (0x00013dee) list_single_graphic_hl_pane_g4_cp2

0xc6c0,	// (0x0001731f) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc6c0,	// (0x0001731f) list_single_graphic_hl_pane_g5_cp2

0x532b,	// (0x0000ff8a) control_pane_g4_ParamLimits

0x532b,	// (0x0000ff8a) control_pane_g4

0x8ce2,	// (0x00013941) bg_popup_sub_pane_cp10_ParamLimits

0xbd23,	// (0x00016982) list_choice_list_pane_ParamLimits

0xbd32,	// (0x00016991) scroll_pane_cp23

0x6fe4,	// (0x00011c43) bg_popup_preview_window_pane_cp02_ParamLimits

0xc31a,	// (0x00016f79) list_preview_fixed_pane_ParamLimits

0xc330,	// (0x00016f8f) list_preview_fixed_pane_cp_ParamLimits

0xc330,	// (0x00016f8f) list_preview_fixed_pane_cp

0xc33c,	// (0x00016f9b) popup_preview_fixed_window_g1_ParamLimits

0xc33c,	// (0x00016f9b) popup_preview_fixed_window_g1

0xc348,	// (0x00016fa7) popup_preview_fixed_window_g2_ParamLimits

0xc348,	// (0x00016fa7) popup_preview_fixed_window_g2

0x0002,

0xfb70,	// (0x0001a7cf) popup_preview_fixed_window_g_ParamLimits

0xfb70,	// (0x0001a7cf) popup_preview_fixed_window_g

0x4f58,	// (0x0000fbb7) aid_navi_side_left_pane_ParamLimits

0x4f6d,	// (0x0000fbcc) aid_navi_side_right_pane_ParamLimits

0x4f85,	// (0x0000fbe4) navi_icon_pane_stacon_ParamLimits

0x4f99,	// (0x0000fbf8) navi_navi_pane_stacon_ParamLimits

0x4f85,	// (0x0000fbe4) navi_text_pane_stacon_ParamLimits

0x4b78,	// (0x0000f7d7) main_text_info_pane

0xc730,	// (0x0001738f) listscroll_text_info_pane

0xc738,	// (0x00017397) list_text_info_pane_ParamLimits

0xc738,	// (0x00017397) list_text_info_pane

0xc747,	// (0x000173a6) scroll_pane_cp24_ParamLimits

0xc747,	// (0x000173a6) scroll_pane_cp24

0xc765,	// (0x000173c4) list_text_info_pane_t1_ParamLimits

0xc765,	// (0x000173c4) list_text_info_pane_t1

0x5497,	// (0x000100f6) popup_fast_swap2_window_ParamLimits

0x5497,	// (0x000100f6) popup_fast_swap2_window

0xc796,	// (0x000173f5) aid_size_cell_fast2

0x6c4d,	// (0x000118ac) bg_popup_window_pane_cp17

0x9765,	// (0x000143c4) heading_pane_cp2

0x7230,	// (0x00011e8f) listscroll_fast2_pane

0xc7a0,	// (0x000173ff) grid_fast2_pane

0xc7aa,	// (0x00017409) listscroll_fast2_pane_g1

0xc7b2,	// (0x00017411) listscroll_fast2_pane_g2

0x0001,

0xfbf3,	// (0x0001a852) listscroll_fast2_pane_g

0x7e21,	// (0x00012a80) scroll_pane_cp26

0xc7bc,	// (0x0001741b) cell_fast2_pane_ParamLimits

0xc7bc,	// (0x0001741b) cell_fast2_pane

0xc7d1,	// (0x00017430) cell_fast2_pane_g1

0xc7da,	// (0x00017439) cell_fast2_pane_g2

0xc7e3,	// (0x00017442) cell_fast2_pane_g3

0x0002,

0xfbf8,	// (0x0001a857) cell_fast2_pane_g

0x7323,	// (0x00011f82) grid_highlight_pane_cp9

0x545d,	// (0x000100bc) main_eswt_pane_ParamLimits

0x545d,	// (0x000100bc) main_eswt_pane

0xc75c,	// (0x000173bb) list_single_text_info_pane

0xc7eb,	// (0x0001744a) eswt_ctrl_button_pane

0xc7eb,	// (0x0001744a) eswt_ctrl_canvas_pane

0xc7f3,	// (0x00017452) eswt_ctrl_combo_pane

0xc7eb,	// (0x0001744a) eswt_ctrl_default_pane

0xc7eb,	// (0x0001744a) eswt_ctrl_label_pane

0xc7fb,	// (0x0001745a) eswt_ctrl_wait_pane

0xc803,	// (0x00017462) eswt_shell_pane

0x6c4d,	// (0x000118ac) listscroll_eswt_app_pane

0xc823,	// (0x00017482) popup_eswt_tasktip_window_ParamLimits

0xc823,	// (0x00017482) popup_eswt_tasktip_window

0x933d,	// (0x00013f9c) bg_popup_window_pane_cp18

0xc834,	// (0x00017493) eswt_control_pane_g1_ParamLimits

0xc834,	// (0x00017493) eswt_control_pane_g1

0xc841,	// (0x000174a0) eswt_control_pane_g2_ParamLimits

0xc841,	// (0x000174a0) eswt_control_pane_g2

0xc84e,	// (0x000174ad) eswt_control_pane_g3_ParamLimits

0xc84e,	// (0x000174ad) eswt_control_pane_g3

0xc85b,	// (0x000174ba) eswt_control_pane_g4_ParamLimits

0xc85b,	// (0x000174ba) eswt_control_pane_g4

0x0003,

0xfbff,	// (0x0001a85e) eswt_control_pane_g_ParamLimits

0xfbff,	// (0x0001a85e) eswt_control_pane_g

0x7b28,	// (0x00012787) bg_button_pane_ParamLimits

0x7b28,	// (0x00012787) bg_button_pane

0x7338,	// (0x00011f97) common_borders_pane_copy2_ParamLimits

0x7338,	// (0x00011f97) common_borders_pane_copy2

0xc868,	// (0x000174c7) control_button_pane_g1_ParamLimits

0xc868,	// (0x000174c7) control_button_pane_g1

0xc874,	// (0x000174d3) control_button_pane_g2_ParamLimits

0xc874,	// (0x000174d3) control_button_pane_g2

0xc880,	// (0x000174df) control_button_pane_g3_ParamLimits

0xc880,	// (0x000174df) control_button_pane_g3

0x0002,

0xfc08,	// (0x0001a867) control_button_pane_g_ParamLimits

0xfc08,	// (0x0001a867) control_button_pane_g

0xc894,	// (0x000174f3) control_button_pane_t1

0xc8a2,	// (0x00017501) control_button_pane_t2

0x0001,

0xfc0f,	// (0x0001a86e) control_button_pane_t

0x9219,	// (0x00013e78) bg_button_pane_g1

0x9229,	// (0x00013e88) bg_button_pane_g2

0x9221,	// (0x00013e80) bg_button_pane_g3

0x9239,	// (0x00013e98) bg_button_pane_g4

0x9231,	// (0x00013e90) bg_button_pane_g5

0x9241,	// (0x00013ea0) bg_button_pane_g6

0x9249,	// (0x00013ea8) bg_button_pane_g7

0x9259,	// (0x00013eb8) bg_button_pane_g8

0x9251,	// (0x00013eb0) bg_button_pane_g9

0x0008,

0xf867,	// (0x0001a4c6) bg_button_pane_g

0xbcde,	// (0x0001693d) common_borders_pane_ParamLimits

0xbcde,	// (0x0001693d) common_borders_pane

0xc834,	// (0x00017493) eswt_control_pane_g1_copy1_ParamLimits

0xc834,	// (0x00017493) eswt_control_pane_g1_copy1

0xc841,	// (0x000174a0) eswt_control_pane_g2_copy1_ParamLimits

0xc841,	// (0x000174a0) eswt_control_pane_g2_copy1

0xc84e,	// (0x000174ad) eswt_control_pane_g3_copy1_ParamLimits

0xc84e,	// (0x000174ad) eswt_control_pane_g3_copy1

0xc85b,	// (0x000174ba) eswt_control_pane_g4_copy1_ParamLimits

0xc85b,	// (0x000174ba) eswt_control_pane_g4_copy1

0xbd19,	// (0x00016978) bg_eswt_ctrl_canvas_pane_g1

0xbcde,	// (0x0001693d) common_borders_pane_cp2_ParamLimits

0xbcde,	// (0x0001693d) common_borders_pane_cp2

0xbcde,	// (0x0001693d) common_borders_pane_cp3_ParamLimits

0xbcde,	// (0x0001693d) common_borders_pane_cp3

0xc8b0,	// (0x0001750f) separator_horizontal_pane

0xc8b8,	// (0x00017517) separator_vertical_pane

0xc834,	// (0x00017493) eswt_control_pane_g1_copy2_ParamLimits

0xc834,	// (0x00017493) eswt_control_pane_g1_copy2

0xc841,	// (0x000174a0) eswt_control_pane_g2_copy2_ParamLimits

0xc841,	// (0x000174a0) eswt_control_pane_g2_copy2

0xc84e,	// (0x000174ad) eswt_control_pane_g3_copy2_ParamLimits

0xc84e,	// (0x000174ad) eswt_control_pane_g3_copy2

0xc85b,	// (0x000174ba) eswt_control_pane_g4_copy2_ParamLimits

0xc85b,	// (0x000174ba) eswt_control_pane_g4_copy2

0x6c4d,	// (0x000118ac) common_borders_pane_cp4

0xc8c1,	// (0x00017520) separator_horizontal_pane_g1

0xc8ca,	// (0x00017529) separator_horizontal_pane_g2

0xc8d3,	// (0x00017532) separator_horizontal_pane_g3

0x0002,

0xfc14,	// (0x0001a873) separator_horizontal_pane_g

0xc834,	// (0x00017493) eswt_control_pane_g1_copy3_ParamLimits

0xc834,	// (0x00017493) eswt_control_pane_g1_copy3

0xc841,	// (0x000174a0) eswt_control_pane_g2_copy3_ParamLimits

0xc841,	// (0x000174a0) eswt_control_pane_g2_copy3

0xc84e,	// (0x000174ad) eswt_control_pane_g3_copy3_ParamLimits

0xc84e,	// (0x000174ad) eswt_control_pane_g3_copy3

0xc85b,	// (0x000174ba) eswt_control_pane_g4_copy3_ParamLimits

0xc85b,	// (0x000174ba) eswt_control_pane_g4_copy3

0x6c4d,	// (0x000118ac) common_borders_pane_cp5

0xc8dc,	// (0x0001753b) separator_vertical_pane_g1

0xc8e5,	// (0x00017544) separator_vertical_pane_g2

0xc8ee,	// (0x0001754d) separator_vertical_pane_g3

0x0002,

0xfc1b,	// (0x0001a87a) separator_vertical_pane_g

0xc834,	// (0x00017493) eswt_control_pane_g1_copy4_ParamLimits

0xc834,	// (0x00017493) eswt_control_pane_g1_copy4

0xc841,	// (0x000174a0) eswt_control_pane_g2_copy4_ParamLimits

0xc841,	// (0x000174a0) eswt_control_pane_g2_copy4

0xc84e,	// (0x000174ad) eswt_control_pane_g3_copy4_ParamLimits

0xc84e,	// (0x000174ad) eswt_control_pane_g3_copy4

0xc85b,	// (0x000174ba) eswt_control_pane_g4_copy4_ParamLimits

0xc85b,	// (0x000174ba) eswt_control_pane_g4_copy4

0xc8f7,	// (0x00017556) eswt_ctrl_combo_button_pane

0xc8ff,	// (0x0001755e) eswt_ctrl_input_pane

0xc907,	// (0x00017566) popup_choice_list_window_cp70

0xc90f,	// (0x0001756e) eswt_ctrl_input_pane_t1

0x6c4d,	// (0x000118ac) input_focus_pane_cp70

0xbcde,	// (0x0001693d) bg_button_pane_cp70_ParamLimits

0xbcde,	// (0x0001693d) bg_button_pane_cp70

0xc91d,	// (0x0001757c) eswt_ctrl_combo_button_pane_g1

0xc925,	// (0x00017584) wait_bar_pane_cp70

0x933d,	// (0x00013f9c) bg_popup_window_pane_cp70_ParamLimits

0x933d,	// (0x00013f9c) bg_popup_window_pane_cp70

0xc92d,	// (0x0001758c) popup_eswt_tasktip_window_t1

0xc943,	// (0x000175a2) wait_bar_pane_cp71_ParamLimits

0xc943,	// (0x000175a2) wait_bar_pane_cp71

0xc94f,	// (0x000175ae) grid_eswt_app_pane

0x813b,	// (0x00012d9a) scroll_pane_cp70

0xc958,	// (0x000175b7) cell_eswt_app_pane_ParamLimits

0xc958,	// (0x000175b7) cell_eswt_app_pane

0xc988,	// (0x000175e7) cell_eswt_app_pane_g1_ParamLimits

0xc988,	// (0x000175e7) cell_eswt_app_pane_g1

0xc9b7,	// (0x00017616) cell_eswt_app_pane_g2_ParamLimits

0xc9b7,	// (0x00017616) cell_eswt_app_pane_g2

0x0001,

0xfc22,	// (0x0001a881) cell_eswt_app_pane_g_ParamLimits

0xfc22,	// (0x0001a881) cell_eswt_app_pane_g

0xc9e0,	// (0x0001763f) cell_eswt_app_pane_t1_ParamLimits

0xc9e0,	// (0x0001763f) cell_eswt_app_pane_t1

0xca12,	// (0x00017671) grid_highlight_pane_cp70_ParamLimits

0xca12,	// (0x00017671) grid_highlight_pane_cp70

0x886f,	// (0x000134ce) set_content_pane_g1

0x8c3a,	// (0x00013899) status_small_volume_pane

0x629e,	// (0x00010efd) status_small_volume_pane_g1

0x62a6,	// (0x00010f05) volume_small2_pane

0x62af,	// (0x00010f0e) volume_small2_pane_g1

0x62b8,	// (0x00010f17) volume_small2_pane_g2

0x62c1,	// (0x00010f20) volume_small2_pane_g3

0x62ca,	// (0x00010f29) volume_small2_pane_g4

0x62d3,	// (0x00010f32) volume_small2_pane_g5

0x62dc,	// (0x00010f3b) volume_small2_pane_g6

0x62e5,	// (0x00010f44) volume_small2_pane_g7

0x62ee,	// (0x00010f4d) volume_small2_pane_g8

0x62f7,	// (0x00010f56) volume_small2_pane_g9

0x6300,	// (0x00010f5f) volume_small2_pane_g10

0x0009,

0xfc27,	// (0x0001a886) volume_small2_pane_g

0xc0df,	// (0x00016d3e) fep_vkb_top_text_pane_g1_ParamLimits

0xc0fa,	// (0x00016d59) fep_vkb_top_text_pane_t1_ParamLimits

0xc354,	// (0x00016fb3) popup_preview_fixed_window_g3_ParamLimits

0xc354,	// (0x00016fb3) popup_preview_fixed_window_g3

0x5944,	// (0x000105a3) popup_toolbar_trans_pane

0xa707,	// (0x00015366) aid_height_set_list_ParamLimits

0xa718,	// (0x00015377) aid_size_parent_ParamLimits

0x8ce2,	// (0x00013941) list_highlight_pane_cp2_ParamLimits

0x886f,	// (0x000134ce) set_content_pane_g1_ParamLimits

0xa9fb,	// (0x0001565a) list_single_image_pane_ParamLimits

0xa9fb,	// (0x0001565a) list_single_image_pane

0xca1e,	// (0x0001767d) aid_size_cell_image_ParamLimits

0xca1e,	// (0x0001767d) aid_size_cell_image

0xca2b,	// (0x0001768a) grid_single_image_pane_ParamLimits

0xca2b,	// (0x0001768a) grid_single_image_pane

0x778b,	// (0x000123ea) list_single_image_pane_g1_ParamLimits

0x778b,	// (0x000123ea) list_single_image_pane_g1

0xca39,	// (0x00017698) list_single_image_pane_g2_ParamLimits

0xca39,	// (0x00017698) list_single_image_pane_g2

0x0001,

0xfc3c,	// (0x0001a89b) list_single_image_pane_g_ParamLimits

0xfc3c,	// (0x0001a89b) list_single_image_pane_g

0x76c2,	// (0x00012321) list_single_image_pane_t1_ParamLimits

0x76c2,	// (0x00012321) list_single_image_pane_t1

0xca4d,	// (0x000176ac) cell_image_list_pane_ParamLimits

0xca4d,	// (0x000176ac) cell_image_list_pane

0xca60,	// (0x000176bf) cell_image_list_pane_g1

0xca69,	// (0x000176c8) cell_image_list_pane_g2

0x0001,

0xfc41,	// (0x0001a8a0) cell_image_list_pane_g

0xca72,	// (0x000176d1) aid_size_cell_tb_trans_pane

0x7b28,	// (0x00012787) bg_tb_trans_pane

0xca84,	// (0x000176e3) grid_tb_trans_pane

0x9219,	// (0x00013e78) bg_tb_trans_pane_g1

0x9229,	// (0x00013e88) bg_tb_trans_pane_g2

0x9221,	// (0x00013e80) bg_tb_trans_pane_g3

0x9239,	// (0x00013e98) bg_tb_trans_pane_g4

0x9231,	// (0x00013e90) bg_tb_trans_pane_g5

0x9259,	// (0x00013eb8) bg_tb_trans_pane_g6

0x9251,	// (0x00013eb0) bg_tb_trans_pane_g7

0x9241,	// (0x00013ea0) bg_tb_trans_pane_g8

0x9249,	// (0x00013ea8) bg_tb_trans_pane_g9

0x0008,

0xfc46,	// (0x0001a8a5) bg_tb_trans_pane_g

0xca98,	// (0x000176f7) cell_toolbar_trans_pane_ParamLimits

0xca98,	// (0x000176f7) cell_toolbar_trans_pane

0xbd19,	// (0x00016978) cell_toolbar_trans_pane_g1

0xb894,	// (0x000164f3) list_form2_midp_pane_t1

0xb8a2,	// (0x00016501) list_form2_midp_pane_t2

0x0001,

0xfae3,	// (0x0001a742) list_form2_midp_pane_t

0xb8b0,	// (0x0001650f) scroll_pane_cp51_ParamLimits

0xbabb,	// (0x0001671a) form2_midp_wait_pane_g1

0xbac4,	// (0x00016723) form2_midp_wait_pane_g2

0xbacd,	// (0x0001672c) form2_midp_wait_pane_g3

0x0002,

0xfaf8,	// (0x0001a757) form2_midp_wait_pane_g

0x6d41,	// (0x000119a0) list_highlight_pane_cp21_ParamLimits

0xbb24,	// (0x00016783) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xbb33,	// (0x00016792) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xa983,	// (0x000155e2) list_single_2graphic_im_pane_ParamLimits

0xa983,	// (0x000155e2) list_single_2graphic_im_pane

0xcabe,	// (0x0001771d) list_single_2graphic_im_pane_g1_ParamLimits

0xcabe,	// (0x0001771d) list_single_2graphic_im_pane_g1

0xcacf,	// (0x0001772e) list_single_2graphic_im_pane_g2_ParamLimits

0xcacf,	// (0x0001772e) list_single_2graphic_im_pane_g2

0xcadb,	// (0x0001773a) list_single_2graphic_im_pane_g3_ParamLimits

0xcadb,	// (0x0001773a) list_single_2graphic_im_pane_g3

0x0003,

0xfc59,	// (0x0001a8b8) list_single_2graphic_im_pane_g_ParamLimits

0xfc59,	// (0x0001a8b8) list_single_2graphic_im_pane_g

0xcafb,	// (0x0001775a) list_single_2graphic_im_pane_t1_ParamLimits

0xcafb,	// (0x0001775a) list_single_2graphic_im_pane_t1

0xc360,	// (0x00016fbf) list_single_graphic_2heading_pane_fp_ParamLimits

0xc360,	// (0x00016fbf) list_single_graphic_2heading_pane_fp

0xc3e6,	// (0x00017045) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xc3e6,	// (0x00017045) list_single_graphic_2heading_pane_fp_g1

0xc3b7,	// (0x00017016) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc3b7,	// (0x00017016) list_single_graphic_2heading_pane_fp_g2

0x7b4e,	// (0x000127ad) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x7b4e,	// (0x000127ad) list_single_graphic_2heading_pane_fp_g3

0x7b5a,	// (0x000127b9) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x7b5a,	// (0x000127b9) list_single_graphic_2heading_pane_fp_g4

0xc3c3,	// (0x00017022) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc3c3,	// (0x00017022) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb80,	// (0x0001a7df) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb80,	// (0x0001a7df) list_single_graphic_2heading_pane_fp_g

0xcb2c,	// (0x0001778b) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xcb2c,	// (0x0001778b) list_single_graphic_2heading_pane_fp_t1

0xc41e,	// (0x0001707d) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xc41e,	// (0x0001707d) list_single_graphic_2heading_pane_fp_t2

0xcb42,	// (0x000177a1) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xcb42,	// (0x000177a1) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc62,	// (0x0001a8c1) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc62,	// (0x0001a8c1) list_single_graphic_2heading_pane_fp_t

0xbda5,	// (0x00016a04) fep_hwr_write_pane_g5_ParamLimits

0xbda5,	// (0x00016a04) fep_hwr_write_pane_g5

0xbdb1,	// (0x00016a10) fep_hwr_write_pane_g6_ParamLimits

0xbdb1,	// (0x00016a10) fep_hwr_write_pane_g6

0xc803,	// (0x00017462) eswt_shell_pane_ParamLimits

0x933d,	// (0x00013f9c) bg_popup_window_pane_cp18_ParamLimits

0xa638,	// (0x00015297) heading_pane_cp70

0xc92d,	// (0x0001758c) popup_eswt_tasktip_window_t1_ParamLimits

0x8d61,	// (0x000139c0) aid_touch_tab_arrow_left

0x8d6d,	// (0x000139cc) aid_touch_tab_arrow_right

0x6c89,	// (0x000118e8) title_pane_g3_ParamLimits

0x6c89,	// (0x000118e8) title_pane_g3

0x7a07,	// (0x00012666) set_value_pane_g1

0x5944,	// (0x000105a3) popup_toolbar_trans_pane_ParamLimits

0xca72,	// (0x000176d1) aid_size_cell_tb_trans_pane_ParamLimits

0x7b28,	// (0x00012787) bg_tb_trans_pane_ParamLimits

0xca84,	// (0x000176e3) grid_tb_trans_pane_ParamLimits

0x6fe4,	// (0x00011c43) cont_note_pane_ParamLimits

0x6fe4,	// (0x00011c43) cont_note_pane

0x7338,	// (0x00011f97) cont_snote2_single_text_pane_ParamLimits

0x7338,	// (0x00011f97) cont_snote2_single_text_pane

0x7338,	// (0x00011f97) cont_snote2_single_graphic_pane_ParamLimits

0x7338,	// (0x00011f97) cont_snote2_single_graphic_pane

0x9980,	// (0x000145df) cont_note_wait_pane_ParamLimits

0x9980,	// (0x000145df) cont_note_wait_pane

0x9980,	// (0x000145df) cont_note_image_pane_ParamLimits

0x9980,	// (0x000145df) cont_note_image_pane

0xcb58,	// (0x000177b7) popup_note2_window_g1_ParamLimits

0xcb58,	// (0x000177b7) popup_note2_window_g1

0xcb89,	// (0x000177e8) popup_note2_window_t1_ParamLimits

0xcb89,	// (0x000177e8) popup_note2_window_t1

0xcbce,	// (0x0001782d) popup_note2_window_t2_ParamLimits

0xcbce,	// (0x0001782d) popup_note2_window_t2

0xcc13,	// (0x00017872) popup_note2_window_t3_ParamLimits

0xcc13,	// (0x00017872) popup_note2_window_t3

0xcc58,	// (0x000178b7) popup_note2_window_t4_ParamLimits

0xcc58,	// (0x000178b7) popup_note2_window_t4

0x7068,	// (0x00011cc7) popup_note2_window_t5_ParamLimits

0x7068,	// (0x00011cc7) popup_note2_window_t5

0x0004,

0xfc6e,	// (0x0001a8cd) popup_note2_window_t_ParamLimits

0xfc6e,	// (0x0001a8cd) popup_note2_window_t

0xcc87,	// (0x000178e6) popup_note2_image_window_g1_ParamLimits

0xcc87,	// (0x000178e6) popup_note2_image_window_g1

0xcc93,	// (0x000178f2) popup_note2_image_window_g2_ParamLimits

0xcc93,	// (0x000178f2) popup_note2_image_window_g2

0x0001,

0xfc79,	// (0x0001a8d8) popup_note2_image_window_g_ParamLimits

0xfc79,	// (0x0001a8d8) popup_note2_image_window_g

0xcca5,	// (0x00017904) popup_note2_image_window_t1_ParamLimits

0xcca5,	// (0x00017904) popup_note2_image_window_t1

0xccbd,	// (0x0001791c) popup_note2_image_window_t2_ParamLimits

0xccbd,	// (0x0001791c) popup_note2_image_window_t2

0xccd5,	// (0x00017934) popup_note2_image_window_t3_ParamLimits

0xccd5,	// (0x00017934) popup_note2_image_window_t3

0x0002,

0xfc7e,	// (0x0001a8dd) popup_note2_image_window_t_ParamLimits

0xfc7e,	// (0x0001a8dd) popup_note2_image_window_t

0x998e,	// (0x000145ed) popup_note2_wait_window_g1_ParamLimits

0x998e,	// (0x000145ed) popup_note2_wait_window_g1

0xccf1,	// (0x00017950) popup_note2_wait_window_g2_ParamLimits

0xccf1,	// (0x00017950) popup_note2_wait_window_g2

0x99a6,	// (0x00014605) popup_note2_wait_window_g3_ParamLimits

0x99a6,	// (0x00014605) popup_note2_wait_window_g3

0x0002,

0xfc85,	// (0x0001a8e4) popup_note2_wait_window_g_ParamLimits

0xfc85,	// (0x0001a8e4) popup_note2_wait_window_g

0xccfd,	// (0x0001795c) popup_note2_wait_window_t1_ParamLimits

0xccfd,	// (0x0001795c) popup_note2_wait_window_t1

0xcd1b,	// (0x0001797a) popup_note2_wait_window_t2_ParamLimits

0xcd1b,	// (0x0001797a) popup_note2_wait_window_t2

0xcd39,	// (0x00017998) popup_note2_wait_window_t3_ParamLimits

0xcd39,	// (0x00017998) popup_note2_wait_window_t3

0xcd4b,	// (0x000179aa) popup_note2_wait_window_t4_ParamLimits

0xcd4b,	// (0x000179aa) popup_note2_wait_window_t4

0x0003,

0xfc8c,	// (0x0001a8eb) popup_note2_wait_window_t_ParamLimits

0xfc8c,	// (0x0001a8eb) popup_note2_wait_window_t

0xcd5d,	// (0x000179bc) wait_bar2_pane_ParamLimits

0xcd5d,	// (0x000179bc) wait_bar2_pane

0xcd75,	// (0x000179d4) popup_snote2_single_text_window_g1_ParamLimits

0xcd75,	// (0x000179d4) popup_snote2_single_text_window_g1

0xcd9d,	// (0x000179fc) popup_snote2_single_text_window_t1_ParamLimits

0xcd9d,	// (0x000179fc) popup_snote2_single_text_window_t1

0xcde9,	// (0x00017a48) popup_snote2_single_text_window_t2_ParamLimits

0xcde9,	// (0x00017a48) popup_snote2_single_text_window_t2

0xce35,	// (0x00017a94) popup_snote2_single_text_window_t3_ParamLimits

0xce35,	// (0x00017a94) popup_snote2_single_text_window_t3

0xce76,	// (0x00017ad5) popup_snote2_single_text_window_t4_ParamLimits

0xce76,	// (0x00017ad5) popup_snote2_single_text_window_t4

0xceac,	// (0x00017b0b) popup_snote2_single_text_window_t5_ParamLimits

0xceac,	// (0x00017b0b) popup_snote2_single_text_window_t5

0x0004,

0xfc95,	// (0x0001a8f4) popup_snote2_single_text_window_t_ParamLimits

0xfc95,	// (0x0001a8f4) popup_snote2_single_text_window_t

0xced7,	// (0x00017b36) popup_snote2_single_graphic_window_g1_ParamLimits

0xced7,	// (0x00017b36) popup_snote2_single_graphic_window_g1

0xceff,	// (0x00017b5e) popup_snote2_single_graphic_window_g2_ParamLimits

0xceff,	// (0x00017b5e) popup_snote2_single_graphic_window_g2

0x0001,

0xfca0,	// (0x0001a8ff) popup_snote2_single_graphic_window_g_ParamLimits

0xfca0,	// (0x0001a8ff) popup_snote2_single_graphic_window_g

0xcf27,	// (0x00017b86) popup_snote2_single_graphic_window_t1_ParamLimits

0xcf27,	// (0x00017b86) popup_snote2_single_graphic_window_t1

0xcf73,	// (0x00017bd2) popup_snote2_single_graphic_window_t2_ParamLimits

0xcf73,	// (0x00017bd2) popup_snote2_single_graphic_window_t2

0xce35,	// (0x00017a94) popup_snote2_single_graphic_window_t3_ParamLimits

0xce35,	// (0x00017a94) popup_snote2_single_graphic_window_t3

0xce76,	// (0x00017ad5) popup_snote2_single_graphic_window_t4_ParamLimits

0xce76,	// (0x00017ad5) popup_snote2_single_graphic_window_t4

0xceac,	// (0x00017b0b) popup_snote2_single_graphic_window_t5_ParamLimits

0xceac,	// (0x00017b0b) popup_snote2_single_graphic_window_t5

0x0004,

0xfca5,	// (0x0001a904) popup_snote2_single_graphic_window_t_ParamLimits

0xfca5,	// (0x0001a904) popup_snote2_single_graphic_window_t

0xb773,	// (0x000163d2) clock_nsta_pane_cp2_t1

0xb773,	// (0x000163d2) clock_nsta_pane_cp2_t2

0x0001,

0xfab9,	// (0x0001a718) clock_nsta_pane_cp2_t

0x7b42,	// (0x000127a1) form_field_data_wide_pane_g1_ParamLimits

0x7b4e,	// (0x000127ad) form_field_data_wide_pane_g2_ParamLimits

0x7b4e,	// (0x000127ad) form_field_data_wide_pane_g2

0x7b5a,	// (0x000127b9) form_field_data_wide_pane_g3_ParamLimits

0x7b5a,	// (0x000127b9) form_field_data_wide_pane_g3

0x0002,

0xf67c,	// (0x0001a2db) form_field_data_wide_pane_g_ParamLimits

0xf67c,	// (0x0001a2db) form_field_data_wide_pane_g

0xb64c,	// (0x000162ab) grid_touch_3_pane_ParamLimits

0xb64c,	// (0x000162ab) grid_touch_3_pane

0xcfbf,	// (0x00017c1e) cell_touch_3_pane_ParamLimits

0xcfbf,	// (0x00017c1e) cell_touch_3_pane

0xbd19,	// (0x00016978) cell_touch_3_pane_g1

0xbd19,	// (0x00016978) cell_touch_3_pane_g2

0x0001,

0xfb3e,	// (0x0001a79d) cell_touch_3_pane_g

0x709a,	// (0x00011cf9) cont_query_data_pane

0x70a2,	// (0x00011d01) cont_query_data_pane_cp1

0xcfed,	// (0x00017c4c) button_value_adjust_pane_cp7

0xcff5,	// (0x00017c54) query_popup_pane_cp3

0x83f3,	// (0x00013052) bg_popup_sub_pane_cp22_ParamLimits

0x509a,	// (0x0000fcf9) navi_navi_volume_pane_cp2

0x50b5,	// (0x0000fd14) popup_side_volume_key_window_g2

0x50c4,	// (0x0000fd23) popup_side_volume_key_window_g3

0x0002,

0xf712,	// (0x0001a371) popup_side_volume_key_window_g

0x50e1,	// (0x0000fd40) popup_side_volume_key_window_t2

0x0001,

0xf719,	// (0x0001a378) popup_side_volume_key_window_t

0x8739,	// (0x00013398) popup_side_volume_key_window_ParamLimits

0x774b,	// (0x000123aa) list_double_graphic_pane_g4_ParamLimits

0x774b,	// (0x000123aa) list_double_graphic_pane_g4

0xa9c0,	// (0x0001561f) list_single_2heading_msg_pane_ParamLimits

0xa9c0,	// (0x0001561f) list_single_2heading_msg_pane

0xd024,	// (0x00017c83) list_single_2heading_msg_pane_g1_ParamLimits

0xd024,	// (0x00017c83) list_single_2heading_msg_pane_g1

0x88d3,	// (0x00013532) list_single_2heading_msg_pane_g2_ParamLimits

0x88d3,	// (0x00013532) list_single_2heading_msg_pane_g2

0xd030,	// (0x00017c8f) list_single_2heading_msg_pane_g3_ParamLimits

0xd030,	// (0x00017c8f) list_single_2heading_msg_pane_g3

0xd03c,	// (0x00017c9b) list_single_2heading_msg_pane_g4_ParamLimits

0xd03c,	// (0x00017c9b) list_single_2heading_msg_pane_g4

0x0003,

0xfcb0,	// (0x0001a90f) list_single_2heading_msg_pane_g_ParamLimits

0xfcb0,	// (0x0001a90f) list_single_2heading_msg_pane_g

0xd054,	// (0x00017cb3) list_single_2heading_msg_pane_t1_ParamLimits

0xd054,	// (0x00017cb3) list_single_2heading_msg_pane_t1

0xd07c,	// (0x00017cdb) list_single_2heading_msg_pane_t2_ParamLimits

0xd07c,	// (0x00017cdb) list_single_2heading_msg_pane_t2

0xd0ab,	// (0x00017d0a) list_single_2heading_msg_pane_t3_ParamLimits

0xd0ab,	// (0x00017d0a) list_single_2heading_msg_pane_t3

0xd0e4,	// (0x00017d43) list_single_2heading_msg_pane_t4_ParamLimits

0xd0e4,	// (0x00017d43) list_single_2heading_msg_pane_t4

0x0003,

0xfcb9,	// (0x0001a918) list_single_2heading_msg_pane_t_ParamLimits

0xfcb9,	// (0x0001a918) list_single_2heading_msg_pane_t

0x6c95,	// (0x000118f4) title_pane_g4_ParamLimits

0x6c95,	// (0x000118f4) title_pane_g4

0x4ea8,	// (0x0000fb07) title_pane_stacon_g3_ParamLimits

0x4ea8,	// (0x0000fb07) title_pane_stacon_g3

0xcaef,	// (0x0001774e) list_single_2graphic_im_pane_g4_ParamLimits

0xcaef,	// (0x0001774e) list_single_2graphic_im_pane_g4

0xa3df,	// (0x0001503e) popup_side_volume_key_window_cp

0xad27,	// (0x00015986) main_idle_act2_pane_t1

0x5aa2,	// (0x00010701) toolbar_button_pane_g10

0x7530,	// (0x0001218f) popup_toolbar_window_cp1

0xb764,	// (0x000163c3) clock_nsta_pane_cp_t1

0xb764,	// (0x000163c3) clock_nsta_pane_cp_t2

0x0001,

0xfab4,	// (0x0001a713) clock_nsta_pane_cp_t

0x509a,	// (0x0000fcf9) navi_navi_volume_pane_cp2_ParamLimits

0x50a9,	// (0x0000fd08) popup_side_volume_key_window_g1_ParamLimits

0x50b5,	// (0x0000fd14) popup_side_volume_key_window_g2_ParamLimits

0x50c4,	// (0x0000fd23) popup_side_volume_key_window_g3_ParamLimits

0xf712,	// (0x0001a371) popup_side_volume_key_window_g_ParamLimits

0x5f0a,	// (0x00010b69) fep_hwr_aid_pane

0x5fb1,	// (0x00010c10) bg_fep_hwr_top_pane_g4_ParamLimits

0xbd75,	// (0x000169d4) fep_hwr_top_pane_g1_ParamLimits

0xbd87,	// (0x000169e6) fep_hwr_top_pane_g2_ParamLimits

0x5fd1,	// (0x00010c30) fep_hwr_top_pane_g3_ParamLimits

0xfb09,	// (0x0001a768) fep_hwr_top_pane_g_ParamLimits

0x5fe6,	// (0x00010c45) fep_hwr_top_text_pane_ParamLimits

0xa1a2,	// (0x00014e01) aid_touch_tab_arrow_arrow_2

0xa1ab,	// (0x00014e0a) aid_touch_tab_arrow_left_2

0x5f1e,	// (0x00010b7d) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x5f55,	// (0x00010bb4) fep_hwr_prediction_pane

0xbee7,	// (0x00016b46) fep_vkb_prediction_pane

0xbfeb,	// (0x00016c4a) fep_vkb_side_pane_g3_ParamLimits

0xbfeb,	// (0x00016c4a) fep_vkb_side_pane_g3

0x6161,	// (0x00010dc0) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x61cd,	// (0x00010e2c) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x61da,	// (0x00010e39) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbb8,	// (0x0001a817) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x6309,	// (0x00010f68) fep_hwr_prediction_pane_g1

0x6313,	// (0x00010f72) fep_hwr_prediction_pane_g2

0x631b,	// (0x00010f7a) fep_hwr_prediction_pane_g3

0x6323,	// (0x00010f82) fep_hwr_prediction_pane_g4

0x0003,

0xfcc2,	// (0x0001a921) fep_hwr_prediction_pane_g

0xd109,	// (0x00017d68) fep_vkb_prediction_pane_g1

0xd113,	// (0x00017d72) fep_vkb_prediction_pane_g2

0xd11b,	// (0x00017d7a) fep_vkb_prediction_pane_g3

0xd123,	// (0x00017d82) fep_vkb_prediction_pane_g4

0x0003,

0xfccb,	// (0x0001a92a) fep_vkb_prediction_pane_g

0x5d8a,	// (0x000109e9) slider_set_pane_g3

0x5d9e,	// (0x000109fd) slider_set_pane_g4

0x5db6,	// (0x00010a15) slider_set_pane_g5

0x5d8a,	// (0x000109e9) slider_set_pane_g6

0x5dcc,	// (0x00010a2b) slider_set_pane_g7

0xa8bf,	// (0x0001551e) slider_form_pane_g3

0xa8c8,	// (0x00015527) slider_form_pane_g4

0xa8d0,	// (0x0001552f) slider_form_pane_g5

0xa8bf,	// (0x0001551e) slider_form_pane_g6

0xa8d8,	// (0x00015537) slider_form_pane_g7

0xaff0,	// (0x00015c4f) slider_set_pane_vc_g3

0xaff9,	// (0x00015c58) slider_set_pane_vc_g4

0xb002,	// (0x00015c61) slider_set_pane_vc_g5

0xaff0,	// (0x00015c4f) slider_set_pane_vc_g6

0xb00b,	// (0x00015c6a) slider_set_pane_vc_g7

0xb41f,	// (0x0001607e) slider_form_pane_vc_g1

0xb428,	// (0x00016087) slider_form_pane_vc_g2

0xb431,	// (0x00016090) slider_form_pane_vc_g3

0xb41f,	// (0x0001607e) slider_form_pane_vc_g4

0xb43a,	// (0x00016099) slider_form_pane_vc_g5

0x0004,

0xfa86,	// (0x0001a6e5) slider_form_pane_vc_g

0x4b78,	// (0x0000f7d7) main_idle_act3_pane

0xd12b,	// (0x00017d8a) ai3_links_pane

0xd134,	// (0x00017d93) popup_ai3_data_window_ParamLimits

0xd134,	// (0x00017d93) popup_ai3_data_window

0x6c4d,	// (0x000118ac) grid_ai3_links_pane

0xd14e,	// (0x00017dad) cell_ai3_links_pane_ParamLimits

0xd14e,	// (0x00017dad) cell_ai3_links_pane

0xd166,	// (0x00017dc5) bg_popup_sub_pane_cp11

0xd173,	// (0x00017dd2) cell_ai3_links_pane_g1

0x6c4d,	// (0x000118ac) bg_popup_sub_pane_cp12

0xd198,	// (0x00017df7) heading_ai3_data_pane

0xd1a0,	// (0x00017dff) list_ai3_gene_pane

0xd1ac,	// (0x00017e0b) popup_ai3_data_window_g1

0xd1b4,	// (0x00017e13) heading_ai3_data_pane_g1

0xd1bc,	// (0x00017e1b) heading_ai3_data_pane_t1

0xd1ca,	// (0x00017e29) list_double_ai3_gene_pane_ParamLimits

0xd1ca,	// (0x00017e29) list_double_ai3_gene_pane

0xd1d7,	// (0x00017e36) list_single_ai3_gene_pane_ParamLimits

0xd1d7,	// (0x00017e36) list_single_ai3_gene_pane

0xbcde,	// (0x0001693d) list_highlight_pane_cp7_ParamLimits

0xbcde,	// (0x0001693d) list_highlight_pane_cp7

0xd1e4,	// (0x00017e43) list_single_a13_gene_pane_t1_ParamLimits

0xd1e4,	// (0x00017e43) list_single_a13_gene_pane_t1

0xd1fb,	// (0x00017e5a) list_single_ai3_gene_pane_g1

0xd204,	// (0x00017e63) list_single_ai3_gene_pane_g2

0x0001,

0xfcd4,	// (0x0001a933) list_single_ai3_gene_pane_g

0xd20c,	// (0x00017e6b) list_double_ai3_gene_pane_g1_ParamLimits

0xd20c,	// (0x00017e6b) list_double_ai3_gene_pane_g1

0xd218,	// (0x00017e77) list_double_ai3_gene_pane_t1_ParamLimits

0xd218,	// (0x00017e77) list_double_ai3_gene_pane_t1

0xd234,	// (0x00017e93) list_double_ai3_gene_pane_t2_ParamLimits

0xd234,	// (0x00017e93) list_double_ai3_gene_pane_t2

0xd24a,	// (0x00017ea9) list_double_ai3_gene_pane_t3_ParamLimits

0xd24a,	// (0x00017ea9) list_double_ai3_gene_pane_t3

0x0002,

0xfcd9,	// (0x0001a938) list_double_ai3_gene_pane_t_ParamLimits

0xfcd9,	// (0x0001a938) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xd006,	// (0x00017c65) aid_size_min_col_2

0xd010,	// (0x00017c6f) aid_size_min_msg_ParamLimits

0xd010,	// (0x00017c6f) aid_size_min_msg

0xc0eb,	// (0x00016d4a) fep_vkb_top_text_pane_g2_ParamLimits

0xc0eb,	// (0x00016d4a) fep_vkb_top_text_pane_g2

0x0001,

0xfb39,	// (0x0001a798) fep_vkb_top_text_pane_g_ParamLimits

0xfb39,	// (0x0001a798) fep_vkb_top_text_pane_g

0x4b78,	// (0x0000f7d7) main_hc_apps_shell_pane

0xd267,	// (0x00017ec6) grid_hc_apps_pane_ParamLimits

0xd267,	// (0x00017ec6) grid_hc_apps_pane

0xd276,	// (0x00017ed5) list_hc_apps_pane

0xd27e,	// (0x00017edd) scroll_pane_cp37_ParamLimits

0xd27e,	// (0x00017edd) scroll_pane_cp37

0xd28a,	// (0x00017ee9) cell_hc_apps_pane_ParamLimits

0xd28a,	// (0x00017ee9) cell_hc_apps_pane

0xd338,	// (0x00017f97) cell_hc_apps_pane_g1_ParamLimits

0xd338,	// (0x00017f97) cell_hc_apps_pane_g1

0xd369,	// (0x00017fc8) cell_hc_apps_pane_g2_ParamLimits

0xd369,	// (0x00017fc8) cell_hc_apps_pane_g2

0xd385,	// (0x00017fe4) cell_hc_apps_pane_g3_ParamLimits

0xd385,	// (0x00017fe4) cell_hc_apps_pane_g3

0x0002,

0xfce0,	// (0x0001a93f) cell_hc_apps_pane_g_ParamLimits

0xfce0,	// (0x0001a93f) cell_hc_apps_pane_g

0xd3a7,	// (0x00018006) cell_hc_apps_pane_t1_ParamLimits

0xd3a7,	// (0x00018006) cell_hc_apps_pane_t1

0x6fe4,	// (0x00011c43) grid_highlight_pane_cp10_ParamLimits

0x6fe4,	// (0x00011c43) grid_highlight_pane_cp10

0xd3e7,	// (0x00018046) list_single_hc_apps_pane_ParamLimits

0xd3e7,	// (0x00018046) list_single_hc_apps_pane

0xd443,	// (0x000180a2) list_single_hc_apps_pane_g1

0xd45c,	// (0x000180bb) list_single_hc_apps_pane_g2

0x0001,

0xfce7,	// (0x0001a946) list_single_hc_apps_pane_g

0xd475,	// (0x000180d4) list_single_hc_apps_pane_g2_copy1

0xd491,	// (0x000180f0) list_single_hc_apps_pane_t1

0x6d41,	// (0x000119a0) bg_set_opt_pane_cp_ParamLimits

0x4dcf,	// (0x0000fa2e) setting_slider_pane_t1_ParamLimits

0x4de8,	// (0x0000fa47) setting_slider_pane_t2_ParamLimits

0x4e02,	// (0x0000fa61) setting_slider_pane_t3_ParamLimits

0xf564,	// (0x0001a1c3) setting_slider_pane_t_ParamLimits

0x4e1a,	// (0x0000fa79) slider_set_pane_ParamLimits

0x533f,	// (0x0000ff9e) control_pane_g5_ParamLimits

0x533f,	// (0x0000ff9e) control_pane_g5

0xa6cc,	// (0x0001532b) slider_set_pane_g1_ParamLimits

0x5d7e,	// (0x000109dd) slider_set_pane_g2_ParamLimits

0x5d8a,	// (0x000109e9) slider_set_pane_g3_ParamLimits

0x5d9e,	// (0x000109fd) slider_set_pane_g4_ParamLimits

0x5db6,	// (0x00010a15) slider_set_pane_g5_ParamLimits

0x5d8a,	// (0x000109e9) slider_set_pane_g6_ParamLimits

0x5dcc,	// (0x00010a2b) slider_set_pane_g7_ParamLimits

0xf965,	// (0x0001a5c4) slider_set_pane_g_ParamLimits

0x881a,	// (0x00013479) navi_icon_text_pane_ParamLimits

0x8d22,	// (0x00013981) aid_fill_nsta_2_ParamLimits

0x8d61,	// (0x000139c0) aid_touch_tab_arrow_left_ParamLimits

0x8d6d,	// (0x000139cc) aid_touch_tab_arrow_right_ParamLimits

0x8dd9,	// (0x00013a38) clock_nsta_pane_ParamLimits

0xa184,	// (0x00014de3) navi_icon_pane_g1_ParamLimits

0xa190,	// (0x00014def) navi_text_pane_t1_ParamLimits

0xb86e,	// (0x000164cd) navi_icon_text_pane_g1_ParamLimits

0xb87a,	// (0x000164d9) navi_icon_text_pane_t1_ParamLimits

0xd443,	// (0x000180a2) list_single_hc_apps_pane_g1_ParamLimits

0xd45c,	// (0x000180bb) list_single_hc_apps_pane_g2_ParamLimits

0xfce7,	// (0x0001a946) list_single_hc_apps_pane_g_ParamLimits

0xd475,	// (0x000180d4) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xd491,	// (0x000180f0) list_single_hc_apps_pane_t1_ParamLimits

0x4ce3,	// (0x0000f942) popup_toolbar2_fixed_window_ParamLimits

0x4ce3,	// (0x0000f942) popup_toolbar2_fixed_window

0x593a,	// (0x00010599) popup_toolbar2_float_window

0x6c4d,	// (0x000118ac) bg_popup_sub_pane_cp27

0xd4bf,	// (0x0001811e) grid_toolbar2_float_pane

0x6c4d,	// (0x000118ac) bg_popup_sub_pane_cp26

0xd4bf,	// (0x0001811e) grid_toolbar2_fixed_pane

0xd4c7,	// (0x00018126) cell_toolbar2_fixed_pane_ParamLimits

0xd4c7,	// (0x00018126) cell_toolbar2_fixed_pane

0xd4d7,	// (0x00018136) cell_toolbar2_fixed_pane_g1

0xd4e0,	// (0x0001813f) toolbar2_fixed_button_pane

0x9219,	// (0x00013e78) toolbar2_fixed_button_pane_g1

0x9229,	// (0x00013e88) toolbar2_fixed_button_pane_g2

0x9221,	// (0x00013e80) toolbar2_fixed_button_pane_g3

0x9239,	// (0x00013e98) toolbar2_fixed_button_pane_g4

0x9231,	// (0x00013e90) toolbar2_fixed_button_pane_g5

0x9241,	// (0x00013ea0) toolbar2_fixed_button_pane_g6

0x9249,	// (0x00013ea8) toolbar2_fixed_button_pane_g7

0x9259,	// (0x00013eb8) toolbar2_fixed_button_pane_g8

0x9251,	// (0x00013eb0) toolbar2_fixed_button_pane_g9

0x0008,

0xf867,	// (0x0001a4c6) toolbar2_fixed_button_pane_g

0xd4e8,	// (0x00018147) cell_toolbar2_float_pane_ParamLimits

0xd4e8,	// (0x00018147) cell_toolbar2_float_pane

0xd4f9,	// (0x00018158) cell_toolbar2_float_pane_g1

0xd4e0,	// (0x0001813f) toolbar2_fixed_button_pane_cp

0xbe47,	// (0x00016aa6) fep_vkb_accented_list_pane_ParamLimits

0xbe47,	// (0x00016aa6) fep_vkb_accented_list_pane

0x6141,	// (0x00010da0) bg_popup_fep_shadow_pane_g9

0x899a,	// (0x000135f9) bg_popup_fep_shadow_pane_cp3

0x7e08,	// (0x00012a67) list_accented_list_pane

0xd502,	// (0x00018161) list_single_accented_list_pane_ParamLimits

0xd502,	// (0x00018161) list_single_accented_list_pane

0x899a,	// (0x000135f9) list_highlight_pane_cp10

0xd513,	// (0x00018172) list_single_accented_list_pane_t1

0x588a,	// (0x000104e9) popup_slider_window_ParamLimits

0x588a,	// (0x000104e9) popup_slider_window

0xcffd,	// (0x00017c5c) aid_indentation_list_msg

0xd5cd,	// (0x0001822c) bg_popup_window_pane_cp19

0xd637,	// (0x00018296) popup_slider_window_g1

0xd653,	// (0x000182b2) popup_slider_window_g2

0xd66f,	// (0x000182ce) popup_slider_window_g3

0x0005,

0xfcec,	// (0x0001a94b) popup_slider_window_g

0xd6cb,	// (0x0001832a) popup_slider_window_t1

0xd73f,	// (0x0001839e) small_volume_slider_vertical_pane

0xbd19,	// (0x00016978) small_volume_slider_vertical_pane_g1

0xbd19,	// (0x00016978) small_volume_slider_vertical_pane_g2

0xd75b,	// (0x000183ba) small_volume_slider_vertical_pane_g3

0x0002,

0xfcfe,	// (0x0001a95d) small_volume_slider_vertical_pane_g

0x4a9b,	// (0x0000f6fa) area_side_right_pane_ParamLimits

0x4a9b,	// (0x0000f6fa) area_side_right_pane

0x632b,	// (0x00010f8a) aid_size_side_button_ParamLimits

0x632b,	// (0x00010f8a) aid_size_side_button

0x633f,	// (0x00010f9e) grid_sctrl_middle_pane_ParamLimits

0x633f,	// (0x00010f9e) grid_sctrl_middle_pane

0x635f,	// (0x00010fbe) sctrl_sk_bottom_pane

0x6370,	// (0x00010fcf) sctrl_sk_top_pane

0x6382,	// (0x00010fe1) aid_touch_sctrl_top

0x638f,	// (0x00010fee) bg_sctrl_sk_pane_ParamLimits

0x638f,	// (0x00010fee) bg_sctrl_sk_pane

0x639d,	// (0x00010ffc) sctrl_sk_top_pane_g1

0x63aa,	// (0x00011009) sctrl_sk_top_pane_t1

0x6382,	// (0x00010fe1) aid_touch_sctrl_bottom

0x638f,	// (0x00010fee) bg_sctrl_sk_pane_cp_ParamLimits

0x638f,	// (0x00010fee) bg_sctrl_sk_pane_cp

0x63c5,	// (0x00011024) sctrl_sk_bottom_pane_g1

0x63aa,	// (0x00011009) sctrl_sk_bottom_pane_t1

0x63ce,	// (0x0001102d) cell_sctrl_middle_pane_ParamLimits

0x63ce,	// (0x0001102d) cell_sctrl_middle_pane

0x63e9,	// (0x00011048) aid_touch_sctrl_middle_ParamLimits

0x63e9,	// (0x00011048) aid_touch_sctrl_middle

0x63fb,	// (0x0001105a) bg_sctrl_middle_pane_ParamLimits

0x63fb,	// (0x0001105a) bg_sctrl_middle_pane

0x6161,	// (0x00010dc0) cell_sctrl_middle_pane_g1_ParamLimits

0x6161,	// (0x00010dc0) cell_sctrl_middle_pane_g1

0x6409,	// (0x00011068) cell_sctrl_middle_pane_g2_ParamLimits

0x6409,	// (0x00011068) cell_sctrl_middle_pane_g2

0x0001,

0xfd0a,	// (0x0001a969) cell_sctrl_middle_pane_g_ParamLimits

0xfd0a,	// (0x0001a969) cell_sctrl_middle_pane_g

0x9219,	// (0x00013e78) bg_sctrl_middle_pane_g1

0x9221,	// (0x00013e80) bg_sctrl_middle_pane_g2

0x9229,	// (0x00013e88) bg_sctrl_middle_pane_g3

0x9231,	// (0x00013e90) bg_sctrl_middle_pane_g4

0x9239,	// (0x00013e98) bg_sctrl_middle_pane_g5

0x9241,	// (0x00013ea0) bg_sctrl_middle_pane_g6

0x9249,	// (0x00013ea8) bg_sctrl_middle_pane_g7

0x9251,	// (0x00013eb0) bg_sctrl_middle_pane_g8

0x0007,

0xfd0f,	// (0x0001a96e) bg_sctrl_middle_pane_g

0x9259,	// (0x00013eb8) bg_sctrl_middle_pane_g8_copy1

0x9219,	// (0x00013e78) bg_sctrl_sk_pane_g1

0x9229,	// (0x00013e88) bg_sctrl_sk_pane_g2

0x9221,	// (0x00013e80) bg_sctrl_sk_pane_g3

0x0008,

0xf867,	// (0x0001a4c6) bg_sctrl_sk_pane_g

0x74f6,	// (0x00012155) aid_size_touch_scroll_bar

0x9239,	// (0x00013e98) bg_sctrl_sk_pane_g4

0x9231,	// (0x00013e90) bg_sctrl_sk_pane_g5

0x9241,	// (0x00013ea0) bg_sctrl_sk_pane_g6

0x9249,	// (0x00013ea8) bg_sctrl_sk_pane_g7

0x9259,	// (0x00013eb8) bg_sctrl_sk_pane_g8

0x9251,	// (0x00013eb0) bg_sctrl_sk_pane_g9

0x54f5,	// (0x00010154) popup_fep_china_hwr2_fs_candidate_window

0x54ff,	// (0x0001015e) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x54ff,	// (0x0001015e) popup_fep_china_hwr2_fs_control_window

0x6161,	// (0x00010dc0) sctrl_sk_top_pane_g2

0x0001,

0xfd05,	// (0x0001a964) sctrl_sk_top_pane_g

0xd764,	// (0x000183c3) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd764,	// (0x000183c3) aid_fep_china_hwr2_fs_cell

0xd776,	// (0x000183d5) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd776,	// (0x000183d5) bg_popup_fep_shadow_pane_cp4

0xd78d,	// (0x000183ec) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd78d,	// (0x000183ec) bg_popup_fep_shadow_pane_cp5

0xd79f,	// (0x000183fe) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd79f,	// (0x000183fe) popup_fep_china_hwr2_fs_control_bar_grid

0xd7af,	// (0x0001840e) popup_fep_china_hwr2_fs_control_funtion_grid

0xd7b7,	// (0x00018416) aid_fep_china_hwr2_fs_candi_cell

0x6c4d,	// (0x000118ac) bg_popup_fep_shadow_pane_cp6

0xd7c1,	// (0x00018420) popup_fep_china_hwr2_fs_candidate_grid

0xd7cb,	// (0x0001842a) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd7cb,	// (0x0001842a) cell_fep_china_hwr2_fs_funtion_grid

0xbd19,	// (0x00016978) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd7e3,	// (0x00018442) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd7e3,	// (0x00018442) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd7f1,	// (0x00018450) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd7f1,	// (0x00018450) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd20,	// (0x0001a97f) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd20,	// (0x0001a97f) cell_fep_china_hwr2_fs_funtion_grid_g

0xd807,	// (0x00018466) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd807,	// (0x00018466) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd81c,	// (0x0001847b) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd81c,	// (0x0001847b) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd25,	// (0x0001a984) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd25,	// (0x0001a984) cell_fep_china_hwr2_fs_funtion_grid_t

0xd838,	// (0x00018497) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd840,	// (0x0001849f) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd848,	// (0x000184a7) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd2a,	// (0x0001a989) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd850,	// (0x000184af) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd850,	// (0x000184af) cell_fep_china_hwr2_fs_candidate_grid

0xd869,	// (0x000184c8) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd871,	// (0x000184d0) popup_fep_china_hwr2_fs_candidate_grid_g21

0xbd19,	// (0x00016978) cell_fep_china_hwr2_fs_candidate_grid_g1

0xbd19,	// (0x00016978) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb3e,	// (0x0001a79d) cell_fep_china_hwr2_fs_candidate_grid_g

0xd879,	// (0x000184d8) cell_fep_china_hwr2_fs_candidate_grid_t1

0x8de6,	// (0x00013a45) clock_nsta_pane_cp_24_ParamLimits

0x8de6,	// (0x00013a45) clock_nsta_pane_cp_24

0x8e64,	// (0x00013ac3) indicator_nsta_pane_cp_24_ParamLimits

0x8e64,	// (0x00013ac3) indicator_nsta_pane_cp_24

0xa000,	// (0x00014c5f) heading_pane_g1

0x0001,

0xf8cc,	// (0x0001a52b) heading_pane_g

0xab70,	// (0x000157cf) grid_sct_catagory_button_pane

0xaba0,	// (0x000157ff) scroll_pane_cp5_ParamLimits

0xb8bc,	// (0x0001651b) button_value_adjust_pane_cp5_ParamLimits

0xb8bc,	// (0x0001651b) button_value_adjust_pane_cp5

0xb9b8,	// (0x00016617) form2_midp_time_pane_ParamLimits

0xd887,	// (0x000184e6) cell_sct_catagory_button_pane_ParamLimits

0xd887,	// (0x000184e6) cell_sct_catagory_button_pane

0xbcde,	// (0x0001693d) bg_button_pane_cp01_ParamLimits

0xbcde,	// (0x0001693d) bg_button_pane_cp01

0xbd19,	// (0x00016978) cell_sct_catagory_button_pane_g1

0x58c9,	// (0x00010528) popup_tb_extension_window

0xd899,	// (0x000184f8) aid_size_cell_ext_ParamLimits

0xd899,	// (0x000184f8) aid_size_cell_ext

0x6fe4,	// (0x00011c43) bg_tb_trans_pane_cp1_ParamLimits

0x6fe4,	// (0x00011c43) bg_tb_trans_pane_cp1

0xd8b9,	// (0x00018518) grid_tb_ext_pane_ParamLimits

0xd8b9,	// (0x00018518) grid_tb_ext_pane

0xd8e9,	// (0x00018548) cell_tb_ext_pane_ParamLimits

0xd8e9,	// (0x00018548) cell_tb_ext_pane

0xd900,	// (0x0001855f) cell_tb_ext_pane_g1_ParamLimits

0xd900,	// (0x0001855f) cell_tb_ext_pane_g1

0xd91d,	// (0x0001857c) cell_tb_ext_pane_t1

0x6fe4,	// (0x00011c43) list_highlight_pane_cp11_ParamLimits

0x6fe4,	// (0x00011c43) list_highlight_pane_cp11

0x4d02,	// (0x0000f961) popup_uni_indicator_window_ParamLimits

0x4d02,	// (0x0000f961) popup_uni_indicator_window

0x7b28,	// (0x00012787) bg_popup_sub_pane_cp14

0xd938,	// (0x00018597) list_uniindi_pane

0xd944,	// (0x000185a3) uniindi_top_pane

0x6fe4,	// (0x00011c43) bg_uniindi_top_pane

0xd963,	// (0x000185c2) uniindi_top_pane_g1

0xd979,	// (0x000185d8) uniindi_top_pane_g2

0x0003,

0xfd31,	// (0x0001a990) uniindi_top_pane_g

0xd9a3,	// (0x00018602) uniindi_top_pane_t1

0xd9cd,	// (0x0001862c) list_single_uniindi_pane_ParamLimits

0xd9cd,	// (0x0001862c) list_single_uniindi_pane

0xbd19,	// (0x00016978) bg_uniindi_top_pane_g1

0xd9e0,	// (0x0001863f) list_single_uniindi_pane_g1

0xd9f3,	// (0x00018652) list_single_uniindi_pane_t1

0x4b78,	// (0x0000f7d7) control_bg_pane

0xda18,	// (0x00018677) bg_sctrl_sk_pane_cp1

0xda21,	// (0x00018680) bg_sctrl_sk_pane_cp2

0xda2a,	// (0x00018689) control_bg_pane_g1

0xda33,	// (0x00018692) control_bg_pane_g2

0x0001,

0xfd3a,	// (0x0001a999) control_bg_pane_g

0xb6f6,	// (0x00016355) cell_indicator_nsta_pane_g1_ParamLimits

0xb704,	// (0x00016363) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa2,	// (0x0001a701) cell_indicator_nsta_pane_g_ParamLimits

0xba40,	// (0x0001669f) form2_midp_time_pane_t1_ParamLimits

0x545d,	// (0x000100bc) main_idle_act4_pane_ParamLimits

0x545d,	// (0x000100bc) main_idle_act4_pane

0x58c9,	// (0x00010528) popup_tb_extension_window_ParamLimits

0xd8d9,	// (0x00018538) tb_ext_find_pane_ParamLimits

0xd8d9,	// (0x00018538) tb_ext_find_pane

0xda3c,	// (0x0001869b) ai_gene_pane_1_cp1

0x8ad3,	// (0x00013732) ai_gene_pane_2_cp1

0xda44,	// (0x000186a3) list_single_idle_plugin_calendar_pane

0xda4d,	// (0x000186ac) list_single_idle_plugin_notification_pane

0xda56,	// (0x000186b5) list_single_idle_plugin_player_pane

0xda5f,	// (0x000186be) list_single_idle_plugin_shortcut_pane_ParamLimits

0xda5f,	// (0x000186be) list_single_idle_plugin_shortcut_pane

0xda81,	// (0x000186e0) main_idle_act4_pane_t1

0xda93,	// (0x000186f2) main_idle_act4_pane_t2

0x0001,

0xfd3f,	// (0x0001a99e) main_idle_act4_pane_t

0xdaa5,	// (0x00018704) middle_sk_idle_act4_pane_ParamLimits

0xdaa5,	// (0x00018704) middle_sk_idle_act4_pane

0xdabb,	// (0x0001871a) popup_clock_digital_analogue_window_cp2

0xdad5,	// (0x00018734) shortcut_wheel_idle_act4_pane_ParamLimits

0xdad5,	// (0x00018734) shortcut_wheel_idle_act4_pane

0xbd19,	// (0x00016978) shortcut_wheel_idle_act4_pane_g1

0xbd19,	// (0x00016978) shortcut_wheel_idle_act4_pane_g2

0xbd19,	// (0x00016978) shortcut_wheel_idle_act4_pane_g3

0xbd19,	// (0x00016978) shortcut_wheel_idle_act4_pane_g4

0xbd19,	// (0x00016978) shortcut_wheel_idle_act4_pane_g5

0xdae9,	// (0x00018748) shortcut_wheel_idle_act4_pane_g6

0xdaf1,	// (0x00018750) shortcut_wheel_idle_act4_pane_g7

0xdaf9,	// (0x00018758) shortcut_wheel_idle_act4_pane_g8

0xdb01,	// (0x00018760) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd44,	// (0x0001a9a3) shortcut_wheel_idle_act4_pane_g

0xbf97,	// (0x00016bf6) middle_sk_idle_act4_pane_g1_ParamLimits

0xbf97,	// (0x00016bf6) middle_sk_idle_act4_pane_g1

0xdb65,	// (0x000187c4) middle_sk_idle_act4_pane_g2_ParamLimits

0xdb65,	// (0x000187c4) middle_sk_idle_act4_pane_g2

0x0001,

0xfd67,	// (0x0001a9c6) middle_sk_idle_act4_pane_g_ParamLimits

0xfd67,	// (0x0001a9c6) middle_sk_idle_act4_pane_g

0xdb71,	// (0x000187d0) middle_sk_idle_act4_pane_t1_ParamLimits

0xdb71,	// (0x000187d0) middle_sk_idle_act4_pane_t1

0xdb8e,	// (0x000187ed) grid_ai_shortcut_pane_ParamLimits

0xdb8e,	// (0x000187ed) grid_ai_shortcut_pane

0xdba7,	// (0x00018806) list_highlight_pane_cp16_ParamLimits

0xdba7,	// (0x00018806) list_highlight_pane_cp16

0xdbb4,	// (0x00018813) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdbb4,	// (0x00018813) list_single_idle_plugin_shortcut_pane_g1

0xdbc0,	// (0x0001881f) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdbc0,	// (0x0001881f) list_single_idle_plugin_shortcut_pane_g2

0xdbd8,	// (0x00018837) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdbd8,	// (0x00018837) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd6c,	// (0x0001a9cb) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd6c,	// (0x0001a9cb) list_single_idle_plugin_shortcut_pane_g

0xdbeb,	// (0x0001884a) cell_ai_shortcut_pane_ParamLimits

0xdbeb,	// (0x0001884a) cell_ai_shortcut_pane

0xdc0f,	// (0x0001886e) cell_ai_shortcut_pane_g1_ParamLimits

0xdc0f,	// (0x0001886e) cell_ai_shortcut_pane_g1

0xda3c,	// (0x0001869b) ai_gene_pane_1_cp2

0xdc31,	// (0x00018890) ai_gene_pane_2_cp2

0xdc39,	// (0x00018898) list_highlight_pane_cp15

0xdc42,	// (0x000188a1) list_single_idle_plugin_calendar_pane_g1

0xdc39,	// (0x00018898) list_highlight_pane_cp17

0xdc4a,	// (0x000188a9) list_single_idle_plugin_calendar_pane_g1_copy1

0xdc52,	// (0x000188b1) list_single_idle_plugin_player_pane_g1

0xadc9,	// (0x00015a28) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd73,	// (0x0001a9d2) list_single_idle_plugin_player_pane_g

0xdc5a,	// (0x000188b9) list_single_idle_plugin_player_pane_t1

0xdc68,	// (0x000188c7) list_single_idle_plugin_player_pane_t2

0xdc76,	// (0x000188d5) list_single_idle_plugin_player_pane_t3

0xdc84,	// (0x000188e3) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd78,	// (0x0001a9d7) list_single_idle_plugin_player_pane_t

0xdc92,	// (0x000188f1) wait_bar_pane_cp15

0xdc9a,	// (0x000188f9) grid_ai_notification_pane

0xadc9,	// (0x00015a28) list_single_idle_plugin_notification_pane_g1

0xdca3,	// (0x00018902) cell_ai_notification_pane_ParamLimits

0xdca3,	// (0x00018902) cell_ai_notification_pane

0xdcb0,	// (0x0001890f) cell_ai_notification_pane_g1

0xdcb8,	// (0x00018917) cell_ai_notification_pane_t1

0xdcc6,	// (0x00018925) tb_ext_find_button_pane

0xdcce,	// (0x0001892d) tb_ext_find_pane_g1

0xdcd6,	// (0x00018935) tb_ext_find_pane_t1

0x8309,	// (0x00012f68) tb_ext_find_button_pane_g1

0xdce4,	// (0x00018943) tb_ext_find_button_pane_g2

0x0001,

0xfd81,	// (0x0001a9e0) tb_ext_find_button_pane_g

0xda81,	// (0x000186e0) main_idle_act4_pane_t1_ParamLimits

0xda93,	// (0x000186f2) main_idle_act4_pane_t2_ParamLimits

0xfd3f,	// (0x0001a99e) main_idle_act4_pane_t_ParamLimits

0xdabb,	// (0x0001871a) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdac9,	// (0x00018728) sat_plugin_idle_act4_pane_ParamLimits

0xdac9,	// (0x00018728) sat_plugin_idle_act4_pane

0xdced,	// (0x0001894c) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdced,	// (0x0001894c) sat_plugin_idle_act4_pane_t1

0xdd00,	// (0x0001895f) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdd00,	// (0x0001895f) sat_plugin_idle_act4_pane_t2

0xdd13,	// (0x00018972) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdd13,	// (0x00018972) sat_plugin_idle_act4_pane_t3

0xdd26,	// (0x00018985) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdd26,	// (0x00018985) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd86,	// (0x0001a9e5) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd86,	// (0x0001a9e5) sat_plugin_idle_act4_pane_t

0x4c3d,	// (0x0000f89c) popup_battery_window_ParamLimits

0x4c3d,	// (0x0000f89c) popup_battery_window

0x6fe4,	// (0x00011c43) bg_popup_sub_pane_cp25_ParamLimits

0x6fe4,	// (0x00011c43) bg_popup_sub_pane_cp25

0xdd39,	// (0x00018998) popup_battery_window_g1_ParamLimits

0xdd39,	// (0x00018998) popup_battery_window_g1

0xdd45,	// (0x000189a4) popup_battery_window_t1_ParamLimits

0xdd45,	// (0x000189a4) popup_battery_window_t1

0xdd57,	// (0x000189b6) popup_battery_window_t2_ParamLimits

0xdd57,	// (0x000189b6) popup_battery_window_t2

0x0001,

0xfd8f,	// (0x0001a9ee) popup_battery_window_t_ParamLimits

0xfd8f,	// (0x0001a9ee) popup_battery_window_t

0x89a2,	// (0x00013601) midp_canvas_pane_ParamLimits

0x8a17,	// (0x00013676) midp_keypad_pane_ParamLimits

0x8a17,	// (0x00013676) midp_keypad_pane

0x8ce2,	// (0x00013941) main_midp_pane_ParamLimits

0xb782,	// (0x000163e1) signal_pane_g2_cp_ParamLimits

0xdd74,	// (0x000189d3) aid_size_cell_midp_keypad_ParamLimits

0xdd74,	// (0x000189d3) aid_size_cell_midp_keypad

0xdd8e,	// (0x000189ed) midp_keyp_game_grid_pane_ParamLimits

0xdd8e,	// (0x000189ed) midp_keyp_game_grid_pane

0xddae,	// (0x00018a0d) midp_keyp_rocker_pane_ParamLimits

0xddae,	// (0x00018a0d) midp_keyp_rocker_pane

0xddd9,	// (0x00018a38) midp_keyp_sk_left_pane_ParamLimits

0xddd9,	// (0x00018a38) midp_keyp_sk_left_pane

0xde33,	// (0x00018a92) midp_keyp_sk_right_pane_ParamLimits

0xde33,	// (0x00018a92) midp_keyp_sk_right_pane

0x6c4d,	// (0x000118ac) bg_button_pane_cp03

0xde8d,	// (0x00018aec) midp_keyp_sk_left_pane_g1

0x6c4d,	// (0x000118ac) bg_button_pane_cp04

0xde8d,	// (0x00018aec) midp_keyp_sk_right_pane_g1

0xbd19,	// (0x00016978) midp_keyp_rocker_pane_g1

0xde96,	// (0x00018af5) keyp_game_cell_pane_ParamLimits

0xde96,	// (0x00018af5) keyp_game_cell_pane

0x6c4d,	// (0x000118ac) bg_button_pane_cp02

0xdea9,	// (0x00018b08) keyp_game_cell_pane_g1

0x4c81,	// (0x0000f8e0) popup_fep_vkb2_window_ParamLimits

0x4c81,	// (0x0000f8e0) popup_fep_vkb2_window

0x6427,	// (0x00011086) aid_size_cell_vkb2_ParamLimits

0x6427,	// (0x00011086) aid_size_cell_vkb2

0x647b,	// (0x000110da) popup_fep_vkb2_window_g1_ParamLimits

0x647b,	// (0x000110da) popup_fep_vkb2_window_g1

0x64c3,	// (0x00011122) vkb2_area_bottom_pane_ParamLimits

0x64c3,	// (0x00011122) vkb2_area_bottom_pane

0x650f,	// (0x0001116e) vkb2_area_keypad_pane_ParamLimits

0x650f,	// (0x0001116e) vkb2_area_keypad_pane

0x6551,	// (0x000111b0) vkb2_area_top_pane_ParamLimits

0x6551,	// (0x000111b0) vkb2_area_top_pane

0x65cb,	// (0x0001122a) vkb2_top_entry_pane_ParamLimits

0x65cb,	// (0x0001122a) vkb2_top_entry_pane

0x65f5,	// (0x00011254) vkb2_top_grid_left_pane_ParamLimits

0x65f5,	// (0x00011254) vkb2_top_grid_left_pane

0x6613,	// (0x00011272) vkb2_top_grid_right_pane_ParamLimits

0x6613,	// (0x00011272) vkb2_top_grid_right_pane

0x6631,	// (0x00011290) vkb2_cell_keypad_pane_ParamLimits

0x6631,	// (0x00011290) vkb2_cell_keypad_pane

0x6702,	// (0x00011361) vkb2_area_bottom_grid_pane_ParamLimits

0x6702,	// (0x00011361) vkb2_area_bottom_grid_pane

0x6728,	// (0x00011387) vkb2_area_bottom_pane_g1_ParamLimits

0x6728,	// (0x00011387) vkb2_area_bottom_pane_g1

0x674c,	// (0x000113ab) vkb2_area_bottom_pane_g2_ParamLimits

0x674c,	// (0x000113ab) vkb2_area_bottom_pane_g2

0x677a,	// (0x000113d9) vkb2_area_bottom_pane_g3_ParamLimits

0x677a,	// (0x000113d9) vkb2_area_bottom_pane_g3

0x0002,

0xfd94,	// (0x0001a9f3) vkb2_area_bottom_pane_g_ParamLimits

0xfd94,	// (0x0001a9f3) vkb2_area_bottom_pane_g

0x67db,	// (0x0001143a) vkb2_top_cell_left_pane_ParamLimits

0x67db,	// (0x0001143a) vkb2_top_cell_left_pane

0xdeba,	// (0x00018b19) vkb2_top_entry_pane_g1_ParamLimits

0xdeba,	// (0x00018b19) vkb2_top_entry_pane_g1

0xdec8,	// (0x00018b27) vkb2_top_entry_pane_t1_ParamLimits

0xdec8,	// (0x00018b27) vkb2_top_entry_pane_t1

0xdefa,	// (0x00018b59) vkb2_top_entry_pane_t2_ParamLimits

0xdefa,	// (0x00018b59) vkb2_top_entry_pane_t2

0xdf2c,	// (0x00018b8b) vkb2_top_entry_pane_t3_ParamLimits

0xdf2c,	// (0x00018b8b) vkb2_top_entry_pane_t3

0x0002,

0xfd9b,	// (0x0001a9fa) vkb2_top_entry_pane_t_ParamLimits

0xfd9b,	// (0x0001a9fa) vkb2_top_entry_pane_t

0x6828,	// (0x00011487) vkb2_top_grid_right_pane_g1_ParamLimits

0x6828,	// (0x00011487) vkb2_top_grid_right_pane_g1

0x683e,	// (0x0001149d) vkb2_top_grid_right_pane_g2_ParamLimits

0x683e,	// (0x0001149d) vkb2_top_grid_right_pane_g2

0x6856,	// (0x000114b5) vkb2_top_grid_right_pane_g3_ParamLimits

0x6856,	// (0x000114b5) vkb2_top_grid_right_pane_g3

0x686e,	// (0x000114cd) vkb2_top_grid_right_pane_g4_ParamLimits

0x686e,	// (0x000114cd) vkb2_top_grid_right_pane_g4

0x0003,

0xfda2,	// (0x0001aa01) vkb2_top_grid_right_pane_g_ParamLimits

0xfda2,	// (0x0001aa01) vkb2_top_grid_right_pane_g

0x6884,	// (0x000114e3) vkb2_top_cell_left_pane_g1

0x689b,	// (0x000114fa) vkb2_cell_keypad_pane_g1_ParamLimits

0x689b,	// (0x000114fa) vkb2_cell_keypad_pane_g1

0xdf50,	// (0x00018baf) vkb2_cell_keypad_pane_t1_ParamLimits

0xdf50,	// (0x00018baf) vkb2_cell_keypad_pane_t1

0x68a9,	// (0x00011508) vkb2_cell_bottom_grid_pane_ParamLimits

0x68a9,	// (0x00011508) vkb2_cell_bottom_grid_pane

0x68e2,	// (0x00011541) vkb2_cell_bottom_grid_pane_g1

0xdb09,	// (0x00018768) aid_call2_pane_cp02

0xdb11,	// (0x00018770) aid_call_pane_cp02

0xdb19,	// (0x00018778) clock_digital_number_pane_cp10

0xdb21,	// (0x00018780) clock_digital_number_pane_cp11

0xdb29,	// (0x00018788) clock_digital_number_pane_cp12

0xdb31,	// (0x00018790) clock_digital_number_pane_cp13

0xdb39,	// (0x00018798) clock_digital_separator_pane_cp10

0x8309,	// (0x00012f68) popup_clock_digital_analogue_window_cp2_g1

0x8309,	// (0x00012f68) popup_clock_digital_analogue_window_cp2_g2

0xdb41,	// (0x000187a0) popup_clock_digital_analogue_window_cp2_g3

0x8309,	// (0x00012f68) popup_clock_digital_analogue_window_cp2_g4

0xdb41,	// (0x000187a0) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd57,	// (0x0001a9b6) popup_clock_digital_analogue_window_cp2_g

0xdb49,	// (0x000187a8) popup_clock_digital_analogue_window_cp2_t1

0xdb57,	// (0x000187b6) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd62,	// (0x0001a9c1) popup_clock_digital_analogue_window_cp2_t

0xbd19,	// (0x00016978) clock_digital_number_pane_cp10_g1

0xbd19,	// (0x00016978) clock_digital_number_pane_cp10_g2

0x0001,

0xfb3e,	// (0x0001a79d) clock_digital_number_pane_cp10_g

0xbd19,	// (0x00016978) clock_digital_separator_pane_cp10_g1

0xbd19,	// (0x00016978) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb3e,	// (0x0001a79d) clock_digital_separator_pane_cp10_g

0xd985,	// (0x000185e4) uniindi_top_pane_g3

0xd996,	// (0x000185f5) uniindi_top_pane_g4

0x66bc,	// (0x0001131b) vkb2_row_keypad_pane_ParamLimits

0x66bc,	// (0x0001131b) vkb2_row_keypad_pane

0x68fe,	// (0x0001155d) vkb2_cell_t_keypad_pane_ParamLimits

0x68fe,	// (0x0001155d) vkb2_cell_t_keypad_pane

0x690e,	// (0x0001156d) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x690e,	// (0x0001156d) vkb2_cell_t_keypad_pane_cp08

0x6921,	// (0x00011580) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x6921,	// (0x00011580) vkb2_cell_t_keypad_pane_cp09

0x6935,	// (0x00011594) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x6935,	// (0x00011594) vkb2_cell_t_keypad_pane_cp01

0x6946,	// (0x000115a5) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x6946,	// (0x000115a5) vkb2_cell_t_keypad_pane_cp02

0x6957,	// (0x000115b6) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x6957,	// (0x000115b6) vkb2_cell_t_keypad_pane_cp03

0x6968,	// (0x000115c7) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x6968,	// (0x000115c7) vkb2_cell_t_keypad_pane_cp04

0x6979,	// (0x000115d8) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x6979,	// (0x000115d8) vkb2_cell_t_keypad_pane_cp05

0x698a,	// (0x000115e9) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x698a,	// (0x000115e9) vkb2_cell_t_keypad_pane_cp06

0x699b,	// (0x000115fa) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x699b,	// (0x000115fa) vkb2_cell_t_keypad_pane_cp07

0x69ac,	// (0x0001160b) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x69ac,	// (0x0001160b) vkb2_cell_t_keypad_pane_cp10

0x6161,	// (0x00010dc0) vkb2_cell_t_keypad_pane_g1

0xdf67,	// (0x00018bc6) vkb2_cell_t_keypad_pane_t1

0x4b78,	// (0x0000f7d7) popup_grid_graphic2_window

0xdf79,	// (0x00018bd8) aid_size_cell_graphic2_ParamLimits

0xdf79,	// (0x00018bd8) aid_size_cell_graphic2

0xdfb1,	// (0x00018c10) bg_popup_window_pane_cp21_ParamLimits

0xdfb1,	// (0x00018c10) bg_popup_window_pane_cp21

0xdfbf,	// (0x00018c1e) graphic2_pages_pane_ParamLimits

0xdfbf,	// (0x00018c1e) graphic2_pages_pane

0xe005,	// (0x00018c64) grid_graphic2_control_pane_ParamLimits

0xe005,	// (0x00018c64) grid_graphic2_control_pane

0xe043,	// (0x00018ca2) grid_graphic2_pane_ParamLimits

0xe043,	// (0x00018ca2) grid_graphic2_pane

0xe0b7,	// (0x00018d16) cell_graphic2_pane

0x4b78,	// (0x0000f7d7) main_comp_mode_pane

0xd1a0,	// (0x00017dff) list_ai3_gene_pane_ParamLimits

0xd5cd,	// (0x0001822c) bg_popup_window_pane_cp19_ParamLimits

0xd5d9,	// (0x00018238) bg_touch_area_indi_pane_ParamLimits

0xd5d9,	// (0x00018238) bg_touch_area_indi_pane

0xd5ef,	// (0x0001824e) bg_touch_area_indi_pane_cp01_ParamLimits

0xd5ef,	// (0x0001824e) bg_touch_area_indi_pane_cp01

0xd605,	// (0x00018264) bg_touch_area_indi_pane_cp02_ParamLimits

0xd605,	// (0x00018264) bg_touch_area_indi_pane_cp02

0xd61d,	// (0x0001827c) bg_touch_area_indi_pane_cp03_ParamLimits

0xd61d,	// (0x0001827c) bg_touch_area_indi_pane_cp03

0xd637,	// (0x00018296) popup_slider_window_g1_ParamLimits

0xd653,	// (0x000182b2) popup_slider_window_g2_ParamLimits

0xd66f,	// (0x000182ce) popup_slider_window_g3_ParamLimits

0xfcec,	// (0x0001a94b) popup_slider_window_g_ParamLimits

0xd6cb,	// (0x0001832a) popup_slider_window_t1_ParamLimits

0xd73f,	// (0x0001839e) small_volume_slider_vertical_pane_ParamLimits

0xe0b7,	// (0x00018d16) cell_graphic2_pane_ParamLimits

0xe105,	// (0x00018d64) bg_button_pane_cp10_ParamLimits

0xe105,	// (0x00018d64) bg_button_pane_cp10

0xe118,	// (0x00018d77) bg_button_pane_cp11_ParamLimits

0xe118,	// (0x00018d77) bg_button_pane_cp11

0xe12b,	// (0x00018d8a) graphic2_pages_pane_g1_ParamLimits

0xe12b,	// (0x00018d8a) graphic2_pages_pane_g1

0xe146,	// (0x00018da5) graphic2_pages_pane_g2_ParamLimits

0xe146,	// (0x00018da5) graphic2_pages_pane_g2

0x0001,

0xfdb0,	// (0x0001aa0f) graphic2_pages_pane_g_ParamLimits

0xfdb0,	// (0x0001aa0f) graphic2_pages_pane_g

0xe15e,	// (0x00018dbd) graphic2_pages_pane_t1_ParamLimits

0xe15e,	// (0x00018dbd) graphic2_pages_pane_t1

0xe176,	// (0x00018dd5) cell_graphic2_control_pane_ParamLimits

0xe176,	// (0x00018dd5) cell_graphic2_control_pane

0xe197,	// (0x00018df6) cell_graphic2_pane_g1_ParamLimits

0xe197,	// (0x00018df6) cell_graphic2_pane_g1

0xe1a4,	// (0x00018e03) cell_graphic2_pane_g2_ParamLimits

0xe1a4,	// (0x00018e03) cell_graphic2_pane_g2

0xe1b1,	// (0x00018e10) cell_graphic2_pane_g3_ParamLimits

0xe1b1,	// (0x00018e10) cell_graphic2_pane_g3

0xe1be,	// (0x00018e1d) cell_graphic2_pane_g4_ParamLimits

0xe1be,	// (0x00018e1d) cell_graphic2_pane_g4

0xe1cb,	// (0x00018e2a) cell_graphic2_pane_g5_ParamLimits

0xe1cb,	// (0x00018e2a) cell_graphic2_pane_g5

0x0004,

0xfdb5,	// (0x0001aa14) cell_graphic2_pane_g_ParamLimits

0xfdb5,	// (0x0001aa14) cell_graphic2_pane_g

0xe1e6,	// (0x00018e45) cell_graphic2_pane_t1_ParamLimits

0xe1e6,	// (0x00018e45) cell_graphic2_pane_t1

0x933d,	// (0x00013f9c) grid_highlight_pane_cp11_ParamLimits

0x933d,	// (0x00013f9c) grid_highlight_pane_cp11

0x6fe4,	// (0x00011c43) bg_button_pane_cp05

0xe20f,	// (0x00018e6e) cell_graphic2_control_pane_g1

0xbd19,	// (0x00016978) bg_touch_area_indi_pane_g1

0xe237,	// (0x00018e96) aid_cmod_rocker_key_size

0xe241,	// (0x00018ea0) aid_cmode_itu_key_size

0xe24b,	// (0x00018eaa) main_cmode_video_pane

0xe255,	// (0x00018eb4) main_comp_mode_itu_pane

0xe261,	// (0x00018ec0) main_comp_mode_rocker_pane

0xe26d,	// (0x00018ecc) cell_cmode_rocker_pane_ParamLimits

0xe26d,	// (0x00018ecc) cell_cmode_rocker_pane

0xe27f,	// (0x00018ede) cell_cmode_itu_pane_ParamLimits

0xe27f,	// (0x00018ede) cell_cmode_itu_pane

0x7b28,	// (0x00012787) bg_button_pane_cp06_ParamLimits

0x7b28,	// (0x00012787) bg_button_pane_cp06

0xbf97,	// (0x00016bf6) cell_cmode_rocker_pane_g1_ParamLimits

0xbf97,	// (0x00016bf6) cell_cmode_rocker_pane_g1

0xd7e3,	// (0x00018442) cell_cmode_rocker_pane_g2_ParamLimits

0xd7e3,	// (0x00018442) cell_cmode_rocker_pane_g2

0x0001,

0xfdc5,	// (0x0001aa24) cell_cmode_rocker_pane_g_ParamLimits

0xfdc5,	// (0x0001aa24) cell_cmode_rocker_pane_g

0x6c4d,	// (0x000118ac) bg_button_pane_cp07

0xe294,	// (0x00018ef3) cell_cmode_itu_pane_g1

0xe29d,	// (0x00018efc) cell_cmode_itu_pane_t1

0xe2ab,	// (0x00018f0a) cell_cmode_itu_pane_t2

0x0001,

0xfdca,	// (0x0001aa29) cell_cmode_itu_pane_t

0xda08,	// (0x00018667) aid_touch_ctrl_left

0xda10,	// (0x0001866f) aid_touch_ctrl_right

0x6c4d,	// (0x000118ac) compa_mode_pane

0xe2b9,	// (0x00018f18) aid_cmod_rocker_key_size_cp

0xe2c3,	// (0x00018f22) aid_cmode_itu_key_size_cp

0xe2cd,	// (0x00018f2c) compa_mode_pane_g1

0xe2d5,	// (0x00018f34) compa_mode_pane_g2

0xe2dd,	// (0x00018f3c) compa_mode_pane_g3

0x0002,

0xfdcf,	// (0x0001aa2e) compa_mode_pane_g

0xe2e5,	// (0x00018f44) main_comp_mode_itu_pane_cp

0xe2ed,	// (0x00018f4c) main_comp_mode_rocker_pane_cp

0xe2f5,	// (0x00018f54) cell_cmode_itu_pane_cp_ParamLimits

0xe2f5,	// (0x00018f54) cell_cmode_itu_pane_cp

0xe30a,	// (0x00018f69) cell_cmode_rocker_pane_cp_ParamLimits

0xe30a,	// (0x00018f69) cell_cmode_rocker_pane_cp

0x7b28,	// (0x00012787) bg_button_pane_cp06_cp_ParamLimits

0x7b28,	// (0x00012787) bg_button_pane_cp06_cp

0xbf97,	// (0x00016bf6) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xbf97,	// (0x00016bf6) cell_cmode_rocker_pane_g1_cp

0xbd19,	// (0x00016978) cell_cmode_rocker_pane_g2_cp

0x6c4d,	// (0x000118ac) bg_button_pane_cp07_cp

0xa8bf,	// (0x0001551e) cell_cmode_itu_pane_g1_cp

0xe31c,	// (0x00018f7b) cell_cmode_itu_pane_t1_cp

0xe31c,	// (0x00018f7b) cell_cmode_itu_pane_t2_cp

0xa8ac,	// (0x0001550b) settings_code_pane_cp2

0x6d41,	// (0x000119a0) bg_popup_window_pane_cp3_ParamLimits

0x71be,	// (0x00011e1d) heading_pane_cp3_ParamLimits

0x71ca,	// (0x00011e29) listscroll_popup_graphic_pane_ParamLimits

0x5f0a,	// (0x00010b69) fep_hwr_aid_pane_ParamLimits

0x6382,	// (0x00010fe1) aid_touch_sctrl_top_ParamLimits

0x639d,	// (0x00010ffc) sctrl_sk_top_pane_g1_ParamLimits

0x6161,	// (0x00010dc0) sctrl_sk_top_pane_g2_ParamLimits

0xfd05,	// (0x0001a964) sctrl_sk_top_pane_g_ParamLimits

0x63aa,	// (0x00011009) sctrl_sk_top_pane_t1_ParamLimits

0x6382,	// (0x00010fe1) aid_touch_sctrl_bottom_ParamLimits

0x63aa,	// (0x00011009) sctrl_sk_bottom_pane_t1_ParamLimits

0xd951,	// (0x000185b0) aid_area_touch_clock

0x6593,	// (0x000111f2) aid_vkb2_area_top_pane_cell_ParamLimits

0x6593,	// (0x000111f2) aid_vkb2_area_top_pane_cell

0x66de,	// (0x0001133d) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x66de,	// (0x0001133d) aid_vkb2_area_bottom_pane_cell

0xdeb2,	// (0x00018b11) popup_char_count_window

0xe32a,	// (0x00018f89) popup_char_count_window_g1

0xe333,	// (0x00018f92) popup_char_count_window_g2

0xe33c,	// (0x00018f9b) popup_char_count_window_g3

0x0002,

0xfdd6,	// (0x0001aa35) popup_char_count_window_g

0xe345,	// (0x00018fa4) popup_char_count_window_t1

0x6459,	// (0x000110b8) popup_fep_char_preview_window_ParamLimits

0x6459,	// (0x000110b8) popup_fep_char_preview_window

0x65b1,	// (0x00011210) vkb2_top_candi_pane_ParamLimits

0x65b1,	// (0x00011210) vkb2_top_candi_pane

0xe353,	// (0x00018fb2) cell_vkb2_top_candi_pane_ParamLimits

0xe353,	// (0x00018fb2) cell_vkb2_top_candi_pane

0x69c1,	// (0x00011620) bg_popup_fep_char_preview_window_ParamLimits

0x69c1,	// (0x00011620) bg_popup_fep_char_preview_window

0x69cf,	// (0x0001162e) popup_fep_char_preview_window_t1_ParamLimits

0x69cf,	// (0x0001162e) popup_fep_char_preview_window_t1

0xe3c1,	// (0x00019020) bg_popup_fep_char_preview_window_g1

0xe3c9,	// (0x00019028) bg_popup_fep_char_preview_window_g2

0xe3d1,	// (0x00019030) bg_popup_fep_char_preview_window_g3

0xe3d9,	// (0x00019038) bg_popup_fep_char_preview_window_g4

0xe3e1,	// (0x00019040) bg_popup_fep_char_preview_window_g5

0x6a09,	// (0x00011668) bg_popup_fep_char_preview_window_g6

0xe3e9,	// (0x00019048) bg_popup_fep_char_preview_window_g7

0xe3f1,	// (0x00019050) bg_popup_fep_char_preview_window_g8

0xe3f9,	// (0x00019058) bg_popup_fep_char_preview_window_g9

0x0008,

0xfddd,	// (0x0001aa3c) bg_popup_fep_char_preview_window_g

0x6161,	// (0x00010dc0) cell_vkb2_top_candi_pane_g1_ParamLimits

0x6161,	// (0x00010dc0) cell_vkb2_top_candi_pane_g1

0x616f,	// (0x00010dce) cell_vkb2_top_candi_pane_g2_ParamLimits

0x616f,	// (0x00010dce) cell_vkb2_top_candi_pane_g2

0xe3a0,	// (0x00018fff) cell_vkb2_top_candi_pane_g3_ParamLimits

0xe3a0,	// (0x00018fff) cell_vkb2_top_candi_pane_g3

0x6a11,	// (0x00011670) cell_vkb2_top_candi_pane_g4_ParamLimits

0x6a11,	// (0x00011670) cell_vkb2_top_candi_pane_g4

0xc396,	// (0x00016ff5) cell_vkb2_top_candi_pane_g5_ParamLimits

0xc396,	// (0x00016ff5) cell_vkb2_top_candi_pane_g5

0x6a32,	// (0x00011691) cell_vkb2_top_candi_pane_g6_ParamLimits

0x6a32,	// (0x00011691) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdf0,	// (0x0001aa4f) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdf0,	// (0x0001aa4f) cell_vkb2_top_candi_pane_g

0x6a40,	// (0x0001169f) cell_vkb2_top_candi_pane_t1

0x5d6a,	// (0x000109c9) aid_size_touch_slider_mark_ParamLimits

0x5d6a,	// (0x000109c9) aid_size_touch_slider_mark

0xdff5,	// (0x00018c54) grid_graphic2_catg_pane_ParamLimits

0xdff5,	// (0x00018c54) grid_graphic2_catg_pane

0xe093,	// (0x00018cf2) popup_grid_graphic2_window_t1_ParamLimits

0xe093,	// (0x00018cf2) popup_grid_graphic2_window_t1

0xe0a5,	// (0x00018d04) popup_grid_graphic2_window_t2_ParamLimits

0xe0a5,	// (0x00018d04) popup_grid_graphic2_window_t2

0x0001,

0xfdab,	// (0x0001aa0a) popup_grid_graphic2_window_t_ParamLimits

0xfdab,	// (0x0001aa0a) popup_grid_graphic2_window_t

0x6fe4,	// (0x00011c43) bg_button_pane_cp05_ParamLimits

0xe20f,	// (0x00018e6e) cell_graphic2_control_pane_g1_ParamLimits

0xe401,	// (0x00019060) cell_graphic2_catg_pane_ParamLimits

0xe401,	// (0x00019060) cell_graphic2_catg_pane

0x6c4d,	// (0x000118ac) bg_button_pane_cp12

0xe413,	// (0x00019072) cell_graphic2_catg_pane_g1

0xd91d,	// (0x0001857c) cell_tb_ext_pane_t1_ParamLimits

0x67fb,	// (0x0001145a) vkb2_top_cell_right_narrow_pane_ParamLimits

0x67fb,	// (0x0001145a) vkb2_top_cell_right_narrow_pane

0x6813,	// (0x00011472) vkb2_top_cell_right_wide_pane_ParamLimits

0x6813,	// (0x00011472) vkb2_top_cell_right_wide_pane

0x5efc,	// (0x00010b5b) bg_vkb2_func_pane_ParamLimits

0x5efc,	// (0x00010b5b) bg_vkb2_func_pane

0x6884,	// (0x000114e3) vkb2_top_cell_left_pane_g1_ParamLimits

0x5efc,	// (0x00010b5b) bg_vkb2_fuc_pane_cp03_ParamLimits

0x5efc,	// (0x00010b5b) bg_vkb2_fuc_pane_cp03

0x68e2,	// (0x00011541) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x9221,	// (0x00013e80) bg_vkb2_func_pane_g1

0x9229,	// (0x00013e88) bg_vkb2_func_pane_g2

0x9239,	// (0x00013e98) bg_vkb2_func_pane_g3

0x9231,	// (0x00013e90) bg_vkb2_func_pane_g4

0x9241,	// (0x00013ea0) bg_vkb2_func_pane_g5

0x9249,	// (0x00013ea8) bg_vkb2_func_pane_g6

0x9251,	// (0x00013eb0) bg_vkb2_func_pane_g7

0x9259,	// (0x00013eb8) bg_vkb2_func_pane_g8

0x9219,	// (0x00013e78) bg_vkb2_func_pane_g9

0x0008,

0xfdfd,	// (0x0001aa5c) bg_vkb2_func_pane_g

0x5efc,	// (0x00010b5b) bg_vkb2_fuc_pane_cp01_ParamLimits

0x5efc,	// (0x00010b5b) bg_vkb2_fuc_pane_cp01

0x6884,	// (0x000114e3) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x6884,	// (0x000114e3) vkb2_top_cell_right_wide_pane_g1

0x5efc,	// (0x00010b5b) bg_vkb2_fuc_pane_cp02_ParamLimits

0x5efc,	// (0x00010b5b) bg_vkb2_fuc_pane_cp02

0x68e2,	// (0x00011541) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x68e2,	// (0x00011541) vkb2_top_cell_right_narrow_pane_g1

0xd551,	// (0x000181b0) aid_touch_area_decrease_ParamLimits

0xd551,	// (0x000181b0) aid_touch_area_decrease

0xd56f,	// (0x000181ce) aid_touch_area_increase_ParamLimits

0xd56f,	// (0x000181ce) aid_touch_area_increase

0xd57b,	// (0x000181da) aid_touch_area_mute_ParamLimits

0xd57b,	// (0x000181da) aid_touch_area_mute

0xd59f,	// (0x000181fe) aid_touch_area_slider_ParamLimits

0xd59f,	// (0x000181fe) aid_touch_area_slider

0xd68b,	// (0x000182ea) popup_slider_window_g4_ParamLimits

0xd68b,	// (0x000182ea) popup_slider_window_g4

0xd697,	// (0x000182f6) popup_slider_window_g5_ParamLimits

0xd697,	// (0x000182f6) popup_slider_window_g5

0xd6b9,	// (0x00018318) popup_slider_window_g6_ParamLimits

0xd6b9,	// (0x00018318) popup_slider_window_g6

0xd6f9,	// (0x00018358) popup_slider_window_t2_ParamLimits

0xd6f9,	// (0x00018358) popup_slider_window_t2

0x0001,

0xfcf9,	// (0x0001a958) popup_slider_window_t_ParamLimits

0xfcf9,	// (0x0001a958) popup_slider_window_t

0xd711,	// (0x00018370) slider_pane_ParamLimits

0xd711,	// (0x00018370) slider_pane

0xe41c,	// (0x0001907b) slider_pane_g1_ParamLimits

0xe41c,	// (0x0001907b) slider_pane_g1

0xe430,	// (0x0001908f) slider_pane_g2_ParamLimits

0xe430,	// (0x0001908f) slider_pane_g2

0xe446,	// (0x000190a5) slider_pane_g3_ParamLimits

0xe446,	// (0x000190a5) slider_pane_g3

0x0003,

0xfe10,	// (0x0001aa6f) slider_pane_g_ParamLimits

0xfe10,	// (0x0001aa6f) slider_pane_g

0x5925,	// (0x00010584) popup_tb_float_extension_window_ParamLimits

0x5925,	// (0x00010584) popup_tb_float_extension_window

0xe472,	// (0x000190d1) aid_size_cell_tb_float_ext

0x6c4d,	// (0x000118ac) bg_popup_sub_window_cp28

0xe47e,	// (0x000190dd) grid_tb_float_ext_pane

0xe488,	// (0x000190e7) cell_tb_float_ext_pane_ParamLimits

0xe488,	// (0x000190e7) cell_tb_float_ext_pane

0xe4a2,	// (0x00019101) cell_tb_float_ext_pane_g1

0xe4ab,	// (0x0001910a) grid_highlight_pane_cp12

0x604b,	// (0x00010caa) cell_last_hwr_side_pane_ParamLimits

0x604b,	// (0x00010caa) cell_last_hwr_side_pane

0xbd19,	// (0x00016978) cell_last_hwr_side_pane_g1

0xe4b4,	// (0x00019113) cell_last_hwr_side_pane_g2

0x0001,

0xfe19,	// (0x0001aa78) cell_last_hwr_side_pane_g

0x67aa,	// (0x00011409) vkb2_area_bottom_space_btn_pane_ParamLimits

0x67aa,	// (0x00011409) vkb2_area_bottom_space_btn_pane

0x6161,	// (0x00010dc0) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xdf67,	// (0x00018bc6) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x6a40,	// (0x0001169f) cell_vkb2_top_candi_pane_t1_ParamLimits

0x6a5f,	// (0x000116be) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x6a5f,	// (0x000116be) vkb2_area_bottom_space_btn_pane_g1

0x6a99,	// (0x000116f8) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x6a99,	// (0x000116f8) vkb2_area_bottom_space_btn_pane_g2

0x6acf,	// (0x0001172e) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x6acf,	// (0x0001172e) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe1e,	// (0x0001aa7d) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe1e,	// (0x0001aa7d) vkb2_area_bottom_space_btn_pane_g

0x5fbf,	// (0x00010c1e) cel_fep_hwr_func_pane_ParamLimits

0x5fbf,	// (0x00010c1e) cel_fep_hwr_func_pane

0x5ffb,	// (0x00010c5a) cell_hwr_side_button_pane_ParamLimits

0x5ffb,	// (0x00010c5a) cell_hwr_side_button_pane

0xd951,	// (0x000185b0) aid_area_touch_clock_ParamLimits

0x6fe4,	// (0x00011c43) bg_uniindi_top_pane_ParamLimits

0xd963,	// (0x000185c2) uniindi_top_pane_g1_ParamLimits

0xd979,	// (0x000185d8) uniindi_top_pane_g2_ParamLimits

0xd985,	// (0x000185e4) uniindi_top_pane_g3_ParamLimits

0xd996,	// (0x000185f5) uniindi_top_pane_g4_ParamLimits

0xfd31,	// (0x0001a990) uniindi_top_pane_g_ParamLimits

0xd9a3,	// (0x00018602) uniindi_top_pane_t1_ParamLimits

0x6fe4,	// (0x00011c43) bg_vkb2_func_pane_cp01_ParamLimits

0x6fe4,	// (0x00011c43) bg_vkb2_func_pane_cp01

0xe4bd,	// (0x0001911c) cel_fep_hwr_func_pane_g1_ParamLimits

0xe4bd,	// (0x0001911c) cel_fep_hwr_func_pane_g1

0x6fe4,	// (0x00011c43) bg_vkb2_func_pane_cp02_ParamLimits

0x6fe4,	// (0x00011c43) bg_vkb2_func_pane_cp02

0xe4bd,	// (0x0001911c) cell_hwr_side_button_pane_g1_ParamLimits

0xe4bd,	// (0x0001911c) cell_hwr_side_button_pane_g1

0x9063,	// (0x00013cc2) status_pane_g4_ParamLimits

0x9063,	// (0x00013cc2) status_pane_g4

0x907d,	// (0x00013cdc) status_pane_t1

0xba53,	// (0x000166b2) form2_midp_gauge_slider_cont_pane

0xba5b,	// (0x000166ba) form2_midp_gauge_slider_pane_t1_ParamLimits

0xba6d,	// (0x000166cc) form2_midp_gauge_slider_pane_t2_ParamLimits

0xba7f,	// (0x000166de) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf1,	// (0x0001a750) form2_midp_gauge_slider_pane_t_ParamLimits

0xba91,	// (0x000166f0) form2_midp_slider_pane_ParamLimits

0x6419,	// (0x00011078) aid_size_cell_func_vkb2_ParamLimits

0x6419,	// (0x00011078) aid_size_cell_func_vkb2

0xe45e,	// (0x000190bd) slider_pane_g4_ParamLimits

0xe45e,	// (0x000190bd) slider_pane_g4

0x6b19,	// (0x00011778) form2_midp_gauge_slider_pane_t2_cp01

0x6b27,	// (0x00011786) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x6b27,	// (0x00011786) form2_midp_gauge_slider_pane_t3_cp01

0x6b44,	// (0x000117a3) form2_midp_slider_pane_cp01

0x6c4d,	// (0x000118ac) navi_smil_pane

0xe4f6,	// (0x00019155) navi_smil_pane_g1

0xe4fe,	// (0x0001915d) navi_smil_pane_t1

0xe4cb,	// (0x0001912a) form2_midp_slider_pane_g1

0xe4d4,	// (0x00019133) form2_midp_slider_pane_g2

0xe4dc,	// (0x0001913b) form2_midp_slider_pane_g3

0xe4cb,	// (0x0001912a) form2_midp_slider_pane_g4

0xe4e4,	// (0x00019143) form2_midp_slider_pane_g5

0x0004,

0xfe27,	// (0x0001aa86) form2_midp_slider_pane_g

0x6b09,	// (0x00011768) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x6b09,	// (0x00011768) vkb2_area_bottom_space_btn_pane_g4

0x8ea0,	// (0x00013aff) lc0_navi_pane_ParamLimits

0x8ea0,	// (0x00013aff) lc0_navi_pane

0x8f16,	// (0x00013b75) lc0_stat_indi_pane_ParamLimits

0x8f16,	// (0x00013b75) lc0_stat_indi_pane

0x8f2d,	// (0x00013b8c) ls0_title_pane_ParamLimits

0x8f2d,	// (0x00013b8c) ls0_title_pane

0x7b28,	// (0x00012787) bg_popup_sub_pane_cp14_ParamLimits

0xd938,	// (0x00018597) list_uniindi_pane_ParamLimits

0xd944,	// (0x000185a3) uniindi_top_pane_ParamLimits

0xd9e0,	// (0x0001863f) list_single_uniindi_pane_g1_ParamLimits

0xd9f3,	// (0x00018652) list_single_uniindi_pane_t1_ParamLimits

0x6b4d,	// (0x000117ac) lc0_stat_clock_pane_ParamLimits

0x6b4d,	// (0x000117ac) lc0_stat_clock_pane

0xe50c,	// (0x0001916b) lc0_stat_indi_pane_g1_ParamLimits

0xe50c,	// (0x0001916b) lc0_stat_indi_pane_g1

0xe519,	// (0x00019178) lc0_stat_indi_pane_g2_ParamLimits

0xe519,	// (0x00019178) lc0_stat_indi_pane_g2

0x0001,

0xfe32,	// (0x0001aa91) lc0_stat_indi_pane_g_ParamLimits

0xfe32,	// (0x0001aa91) lc0_stat_indi_pane_g

0x6b5a,	// (0x000117b9) lc0_uni_indicator_pane_ParamLimits

0x6b5a,	// (0x000117b9) lc0_uni_indicator_pane

0xe526,	// (0x00019185) ls0_title_pane_g1_ParamLimits

0xe526,	// (0x00019185) ls0_title_pane_g1

0xe53a,	// (0x00019199) ls0_title_pane_t1_ParamLimits

0xe53a,	// (0x00019199) ls0_title_pane_t1

0x6b67,	// (0x000117c6) lc0_uni_indicator_pane_g1_ParamLimits

0x6b67,	// (0x000117c6) lc0_uni_indicator_pane_g1

0xe570,	// (0x000191cf) lc0_stat_clock_pane_t1

0x4b78,	// (0x0000f7d7) main_ai5_pane

0xe57e,	// (0x000191dd) ai5_sk_pane_ParamLimits

0xe57e,	// (0x000191dd) ai5_sk_pane

0xe58b,	// (0x000191ea) cell_ai5_widget_pane_ParamLimits

0xe58b,	// (0x000191ea) cell_ai5_widget_pane

0xe641,	// (0x000192a0) aid_size_cell_widget_grid

0xe657,	// (0x000192b6) bg_ai5_widget_pane_ParamLimits

0xe657,	// (0x000192b6) bg_ai5_widget_pane

0xe6c1,	// (0x00019320) cell_ai5_widget_pane_g2

0xe6d1,	// (0x00019330) cell_ai5_widget_pane_g3

0xe6f0,	// (0x0001934f) cell_ai5_widget_pane_g4

0xe6fc,	// (0x0001935b) cell_ai5_widget_pane_g5

0xe708,	// (0x00019367) cell_ai5_widget_pane_g6

0xe714,	// (0x00019373) cell_ai5_widget_pane_g7

0xe75c,	// (0x000193bb) cell_ai5_widget_pane_t1_ParamLimits

0xe75c,	// (0x000193bb) cell_ai5_widget_pane_t1

0xe779,	// (0x000193d8) cell_ai5_widget_pane_t2_ParamLimits

0xe779,	// (0x000193d8) cell_ai5_widget_pane_t2

0xe791,	// (0x000193f0) cell_ai5_widget_pane_t3_ParamLimits

0xe791,	// (0x000193f0) cell_ai5_widget_pane_t3

0xe7a9,	// (0x00019408) cell_ai5_widget_pane_t4_ParamLimits

0xe7a9,	// (0x00019408) cell_ai5_widget_pane_t4

0xe7c3,	// (0x00019422) cell_ai5_widget_pane_t5_ParamLimits

0xe7c3,	// (0x00019422) cell_ai5_widget_pane_t5

0xe7e2,	// (0x00019441) cell_ai5_widget_pane_t6_ParamLimits

0xe7e2,	// (0x00019441) cell_ai5_widget_pane_t6

0xe7f4,	// (0x00019453) cell_ai5_widget_pane_t7_ParamLimits

0xe7f4,	// (0x00019453) cell_ai5_widget_pane_t7

0xe80d,	// (0x0001946c) cell_ai5_widget_pane_t8_ParamLimits

0xe80d,	// (0x0001946c) cell_ai5_widget_pane_t8

0x0009,

0xfe4c,	// (0x0001aaab) cell_ai5_widget_pane_t_ParamLimits

0xfe4c,	// (0x0001aaab) cell_ai5_widget_pane_t

0xe859,	// (0x000194b8) grid_ai5_widget_pane

0x7b28,	// (0x00012787) highlight_cell_ai5_widget_pane_ParamLimits

0x7b28,	// (0x00012787) highlight_cell_ai5_widget_pane

0xe871,	// (0x000194d0) ai5_sk_left_pane

0xe87b,	// (0x000194da) ai5_sk_middle_pane

0xe885,	// (0x000194e4) ai5_sk_right_pane

0xe88f,	// (0x000194ee) bg_ai5_widget_pane_g1_ParamLimits

0xe88f,	// (0x000194ee) bg_ai5_widget_pane_g1

0xe89b,	// (0x000194fa) bg_ai5_widget_pane_g2_ParamLimits

0xe89b,	// (0x000194fa) bg_ai5_widget_pane_g2

0xe8a7,	// (0x00019506) bg_ai5_widget_pane_g3_ParamLimits

0xe8a7,	// (0x00019506) bg_ai5_widget_pane_g3

0xe8b3,	// (0x00019512) bg_ai5_widget_pane_g4_ParamLimits

0xe8b3,	// (0x00019512) bg_ai5_widget_pane_g4

0xe8bf,	// (0x0001951e) bg_ai5_widget_pane_g5_ParamLimits

0xe8bf,	// (0x0001951e) bg_ai5_widget_pane_g5

0xe8cb,	// (0x0001952a) bg_ai5_widget_pane_g6_ParamLimits

0xe8cb,	// (0x0001952a) bg_ai5_widget_pane_g6

0xe8d7,	// (0x00019536) bg_ai5_widget_pane_g7_ParamLimits

0xe8d7,	// (0x00019536) bg_ai5_widget_pane_g7

0xe8e3,	// (0x00019542) bg_ai5_widget_pane_g8_ParamLimits

0xe8e3,	// (0x00019542) bg_ai5_widget_pane_g8

0xe8ef,	// (0x0001954e) bg_ai5_widget_pane_g9_ParamLimits

0xe8ef,	// (0x0001954e) bg_ai5_widget_pane_g9

0x0008,

0xfe61,	// (0x0001aac0) bg_ai5_widget_pane_g_ParamLimits

0xfe61,	// (0x0001aac0) bg_ai5_widget_pane_g

0xe922,	// (0x00019581) cell_shortcut_ai5_widget_pane_ParamLimits

0xe922,	// (0x00019581) cell_shortcut_ai5_widget_pane

0x899a,	// (0x000135f9) bg_cell_shortcut_ai5_widget_pane

0xe933,	// (0x00019592) cell_grid_ai5_widget_pane_g1

0xe93c,	// (0x0001959b) highlight_cell_shortcut_ai5_widget_pane

0x9221,	// (0x00013e80) ai5_sk_left_pane_g1

0xe944,	// (0x000195a3) ai5_sk_left_pane_g2

0xe94c,	// (0x000195ab) ai5_sk_left_pane_g3

0xe954,	// (0x000195b3) ai5_sk_left_pane_g4

0x0003,

0xfe74,	// (0x0001aad3) ai5_sk_left_pane_g

0xe95c,	// (0x000195bb) ai5_sk_left_pane_t1

0x9229,	// (0x00013e88) ai5_sk_right_pane_g1

0xe96a,	// (0x000195c9) ai5_sk_right_pane_g2

0xe972,	// (0x000195d1) ai5_sk_right_pane_g3

0xe97a,	// (0x000195d9) ai5_sk_right_pane_g4

0x0003,

0xfe7d,	// (0x0001aadc) ai5_sk_right_pane_g

0xe982,	// (0x000195e1) ai5_sk_right_pane_t1

0x9229,	// (0x00013e88) ai5_sk_middle_pane_g1

0x9221,	// (0x00013e80) ai5_sk_middle_pane_g2

0x9241,	// (0x00013ea0) ai5_sk_middle_pane_g3

0xe972,	// (0x000195d1) ai5_sk_middle_pane_g4

0xe94c,	// (0x000195ab) ai5_sk_middle_pane_g5

0xe990,	// (0x000195ef) ai5_sk_middle_pane_g6

0xe998,	// (0x000195f7) ai5_sk_middle_pane_g7

0x0006,

0xfe86,	// (0x0001aae5) ai5_sk_middle_pane_g

0x8d30,	// (0x0001398f) aid_touch_area_size_lc0_ParamLimits

0x8d30,	// (0x0001398f) aid_touch_area_size_lc0

0x6190,	// (0x00010def) cell_hwr_candidate_pane_t1_ParamLimits

0x8d4c,	// (0x000139ab) aid_touch_navi_pane

0x9015,	// (0x00013c74) status_dt_navi_pane_ParamLimits

0x9015,	// (0x00013c74) status_dt_navi_pane

0x9022,	// (0x00013c81) status_dt_sta_pane_ParamLimits

0x9022,	// (0x00013c81) status_dt_sta_pane

0xe9a0,	// (0x000195ff) dt_sta_controll_pane

0xe9ad,	// (0x0001960c) dt_sta_indi_pane

0xe9ba,	// (0x00019619) dt_sta_title_pane

0x6fe4,	// (0x00011c43) bg_dt_sta_indi_pane_ParamLimits

0x6fe4,	// (0x00011c43) bg_dt_sta_indi_pane

0xe9cb,	// (0x0001962a) dt_sta_battery_pane

0xe9d3,	// (0x00019632) dt_sta_indi_pane_g1

0xe9dc,	// (0x0001963b) dt_sta_indi_pane_g2

0xe9e5,	// (0x00019644) dt_sta_indi_pane_g3

0x0002,

0xfe95,	// (0x0001aaf4) dt_sta_indi_pane_g

0xe9ee,	// (0x0001964d) dt_sta_signal_pane

0x7b28,	// (0x00012787) bg_dt_sta_title_pane_ParamLimits

0x7b28,	// (0x00012787) bg_dt_sta_title_pane

0xe9f7,	// (0x00019656) dt_sta_title_pane_g1

0xe9ff,	// (0x0001965e) dt_sta_title_pane_t1_ParamLimits

0xe9ff,	// (0x0001965e) dt_sta_title_pane_t1

0x6c4d,	// (0x000118ac) bg_dt_sta_control_pane

0xea14,	// (0x00019673) dt_sta_controll_pane_g1

0xea1d,	// (0x0001967c) bg_dt_sta_title_pane_g1

0xea26,	// (0x00019685) bg_dt_sta_title_pane_g2

0xea2f,	// (0x0001968e) bg_dt_sta_title_pane_g3

0x0002,

0xfe9c,	// (0x0001aafb) bg_dt_sta_title_pane_g

0xbd19,	// (0x00016978) bg_dt_sta_indi_pane_g1

0xea38,	// (0x00019697) dt_sta_signal_pane_g1

0xea40,	// (0x0001969f) dt_sta_signal_pane_g2

0x0001,

0xfea3,	// (0x0001ab02) dt_sta_signal_pane_g

0xea48,	// (0x000196a7) dt_sta_battery_pane_g1

0xea51,	// (0x000196b0) dt_sta_battery_pane_t1

0xbd19,	// (0x00016978) bg_dt_sta_control_pane_g1

0x8415,	// (0x00013074) fep_china_uni_eep_pane

0x841d,	// (0x0001307c) fep_china_uni_entry_pane_ParamLimits

0x842d,	// (0x0001308c) popup_fep_china_uni_window_g1_ParamLimits

0x843d,	// (0x0001309c) popup_fep_china_uni_window_g2_ParamLimits

0x843d,	// (0x0001309c) popup_fep_china_uni_window_g2

0x0001,

0xf71e,	// (0x0001a37d) popup_fep_china_uni_window_g_ParamLimits

0xf71e,	// (0x0001a37d) popup_fep_china_uni_window_g

0xea60,	// (0x000196bf) fep_china_uni_eep_pane_g1

0xea68,	// (0x000196c7) fep_china_uni_eep_pane_t1

0xe4ed,	// (0x0001914c) aid_touch_area_size_smil_player

0x8e98,	// (0x00013af7) lc0_clock_pane

0x9071,	// (0x00013cd0) status_pane_g5_ParamLimits

0x9071,	// (0x00013cd0) status_pane_g5

0x55ea,	// (0x00010249) popup_keymap_window

0x9037,	// (0x00013c96) status_icon_pane

0xe6d1,	// (0x00019330) cell_ai5_widget_pane_g3_ParamLimits

0xe6f0,	// (0x0001934f) cell_ai5_widget_pane_g4_ParamLimits

0xe6fc,	// (0x0001935b) cell_ai5_widget_pane_g5_ParamLimits

0xe720,	// (0x0001937f) cell_ai5_widget_pane_g8_ParamLimits

0xe720,	// (0x0001937f) cell_ai5_widget_pane_g8

0xe734,	// (0x00019393) cell_ai5_widget_pane_g9_ParamLimits

0xe734,	// (0x00019393) cell_ai5_widget_pane_g9

0xe748,	// (0x000193a7) cell_ai5_widget_pane_g10_ParamLimits

0xe748,	// (0x000193a7) cell_ai5_widget_pane_g10

0xea77,	// (0x000196d6) status_icon_pane_g1

0x6c4d,	// (0x000118ac) bg_popup_sub_pane_cp13

0xea7f,	// (0x000196de) popup_keymap_window_t1

0x8c65,	// (0x000138c4) control_pane_g6_ParamLimits

0x8c65,	// (0x000138c4) control_pane_g6

0x8c72,	// (0x000138d1) control_pane_g7_ParamLimits

0x8c72,	// (0x000138d1) control_pane_g7

0x8c7f,	// (0x000138de) control_pane_g8_ParamLimits

0x8c7f,	// (0x000138de) control_pane_g8

0xe9a0,	// (0x000195ff) dt_sta_controll_pane_ParamLimits

0xe9ad,	// (0x0001960c) dt_sta_indi_pane_ParamLimits

0xe9ba,	// (0x00019619) dt_sta_title_pane_ParamLimits

0x74ff,	// (0x0001215e) aid_size_touch_scroll_bar_cale

0x4c51,	// (0x0000f8b0) popup_discreet_window_ParamLimits

0x4c51,	// (0x0000f8b0) popup_discreet_window

0x4cd9,	// (0x0000f938) popup_sk_window

0x9980,	// (0x000145df) bg_popup_sub_pane_cp28_ParamLimits

0x9980,	// (0x000145df) bg_popup_sub_pane_cp28

0xea8d,	// (0x000196ec) popup_discreet_window_g1_ParamLimits

0xea8d,	// (0x000196ec) popup_discreet_window_g1

0xeaad,	// (0x0001970c) popup_discreet_window_t1_ParamLimits

0xeaad,	// (0x0001970c) popup_discreet_window_t1

0xeacb,	// (0x0001972a) popup_discreet_window_t2_ParamLimits

0xeacb,	// (0x0001972a) popup_discreet_window_t2

0x0002,

0xfea8,	// (0x0001ab07) popup_discreet_window_t_ParamLimits

0xfea8,	// (0x0001ab07) popup_discreet_window_t

0x6b7b,	// (0x000117da) popup_sk_window_g1

0x6b85,	// (0x000117e4) popup_sk_window_g2

0x0001,

0xfeaf,	// (0x0001ab0e) popup_sk_window_g

0x6b8f,	// (0x000117ee) popup_sk_window_t1

0x6b9d,	// (0x000117fc) popup_sk_window_t1_copy1

0xe6c1,	// (0x00019320) cell_ai5_widget_pane_g2_ParamLimits

0xe81f,	// (0x0001947e) cell_ai5_widget_pane_t9_ParamLimits

0xe81f,	// (0x0001947e) cell_ai5_widget_pane_t9

0x6c4d,	// (0x000118ac) main_fep_fshwr2_pane

0x6bab,	// (0x0001180a) aid_fshwr2_btn_pane

0x6bb7,	// (0x00011816) aid_fshwr2_syb_pane

0x6bc8,	// (0x00011827) aid_fshwr2_txt_pane

0x6bd4,	// (0x00011833) fshwr2_func_candi_pane

0x6be9,	// (0x00011848) fshwr2_hwr_syb_pane

0x6c00,	// (0x0001185f) fshwr2_icf_pane

0x6c4d,	// (0x000118ac) fshwr2_icf_bg_pane

0xeb1d,	// (0x0001977c) fshwr2_icf_pane_t1_ParamLimits

0xeb1d,	// (0x0001977c) fshwr2_icf_pane_t1

0xbd19,	// (0x00016978) fshwr2_func_candi_pane_g1

0xeb34,	// (0x00019793) fshwr2_func_candi_row_pane_ParamLimits

0xeb34,	// (0x00019793) fshwr2_func_candi_row_pane

0xeb45,	// (0x000197a4) cell_fshwr2_syb_pane_ParamLimits

0xeb45,	// (0x000197a4) cell_fshwr2_syb_pane

0xbf97,	// (0x00016bf6) fshwr2_hwr_syb_pane_g1_ParamLimits

0xbf97,	// (0x00016bf6) fshwr2_hwr_syb_pane_g1

0x6c4d,	// (0x000118ac) bg_popup_call_pane_cp01

0xeb5f,	// (0x000197be) fshwr2_func_candi_cell_pane_ParamLimits

0xeb5f,	// (0x000197be) fshwr2_func_candi_cell_pane

0xeb90,	// (0x000197ef) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xeb90,	// (0x000197ef) fshwr2_func_candi_cell_bg_pane

0xebaa,	// (0x00019809) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xebaa,	// (0x00019809) fshwr2_func_candi_cell_pane_g1

0xebd2,	// (0x00019831) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xebd2,	// (0x00019831) fshwr2_func_candi_cell_pane_t1

0x6c4d,	// (0x000118ac) bg_button_pane_cp08

0x899a,	// (0x000135f9) cell_fshwr2_syb_bg_pane

0xebe5,	// (0x00019844) cell_fshwr2_syb_bg_pane_g1

0xebed,	// (0x0001984c) cell_fshwr2_syb_bg_pane_t1

0x7b28,	// (0x00012787) main_tmo_pane

0xa48f,	// (0x000150ee) uni_indicator_pane_g1_ParamLimits

0xa4a4,	// (0x00015103) uni_indicator_pane_g2_ParamLimits

0xa4ba,	// (0x00015119) uni_indicator_pane_g3_ParamLimits

0xa4d0,	// (0x0001512f) uni_indicator_pane_g4_ParamLimits

0xa4d0,	// (0x0001512f) uni_indicator_pane_g4

0xa4e4,	// (0x00015143) uni_indicator_pane_g5_ParamLimits

0xa4e4,	// (0x00015143) uni_indicator_pane_g5

0xa4f8,	// (0x00015157) uni_indicator_pane_g6_ParamLimits

0xa4f8,	// (0x00015157) uni_indicator_pane_g6

0xf922,	// (0x0001a581) uni_indicator_pane_g_ParamLimits

0xd52d,	// (0x0001818c) popup_tmo_note_window_ParamLimits

0xd52d,	// (0x0001818c) popup_tmo_note_window

0x63fb,	// (0x0001105a) fshwr2_bg_pane

0xebc3,	// (0x00019822) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xebc3,	// (0x00019822) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeb4,	// (0x0001ab13) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeb4,	// (0x0001ab13) fshwr2_func_candi_cell_pane_g

0xbd19,	// (0x00016978) bg_popup_window_pane_cp01

0xebfc,	// (0x0001985b) bg_popup_window_pane_g1_cp01

0xec05,	// (0x00019864) bg_popup_window_pane_cp22_ParamLimits

0xec05,	// (0x00019864) bg_popup_window_pane_cp22

0xec13,	// (0x00019872) listscroll_tmo_link_pane_ParamLimits

0xec13,	// (0x00019872) listscroll_tmo_link_pane

0xec53,	// (0x000198b2) popup_tmo_note_window_g1_ParamLimits

0xec53,	// (0x000198b2) popup_tmo_note_window_g1

0xec60,	// (0x000198bf) tmo_note_info_pane_ParamLimits

0xec60,	// (0x000198bf) tmo_note_info_pane

0xec7a,	// (0x000198d9) list_tmo_note_info_pane_g1_ParamLimits

0xec7a,	// (0x000198d9) list_tmo_note_info_pane_g1

0xec91,	// (0x000198f0) list_tmo_note_info_pane_g2_ParamLimits

0xec91,	// (0x000198f0) list_tmo_note_info_pane_g2

0x0001,

0xfeb9,	// (0x0001ab18) list_tmo_note_info_pane_g_ParamLimits

0xfeb9,	// (0x0001ab18) list_tmo_note_info_pane_g

0xecad,	// (0x0001990c) list_tmo_note_info_text_pane_ParamLimits

0xecad,	// (0x0001990c) list_tmo_note_info_text_pane

0xed2e,	// (0x0001998d) list_tmo_link_pane

0xed3b,	// (0x0001999a) scroll_pane_cp20

0xed48,	// (0x000199a7) list_single_tmo_link_pane_ParamLimits

0xed48,	// (0x000199a7) list_single_tmo_link_pane

0xed58,	// (0x000199b7) list_single_tmo_link_pane_t1

0xed66,	// (0x000199c5) list_tmo_note_info_text_pane_t1_ParamLimits

0xed66,	// (0x000199c5) list_tmo_note_info_text_pane_t1

0x7d6b,	// (0x000129ca) aid_size_touch_scroll_bar_cp01_ParamLimits

0x7d6b,	// (0x000129ca) aid_size_touch_scroll_bar_cp01

0x7be0,	// (0x0001283f) aid_size_touch_slider_marker

0x4cc1,	// (0x0000f920) popup_settings_window_ParamLimits

0x4cc1,	// (0x0000f920) popup_settings_window

0x8cfc,	// (0x0001395b) popup_candi_list_indi_window

0x8d4c,	// (0x000139ab) aid_touch_navi_pane_ParamLimits

0x6356,	// (0x00010fb5) rs_clock_indi_pane

0x635f,	// (0x00010fbe) sctrl_sk_bottom_pane_ParamLimits

0x6370,	// (0x00010fcf) sctrl_sk_top_pane_ParamLimits

0x6473,	// (0x000110d2) popup_fep_tooltip_window

0xe641,	// (0x000192a0) aid_size_cell_widget_grid_ParamLimits

0xe6b5,	// (0x00019314) cell_ai5_widget_pane_g1_ParamLimits

0xe6b5,	// (0x00019314) cell_ai5_widget_pane_g1

0xe708,	// (0x00019367) cell_ai5_widget_pane_g6_ParamLimits

0xe714,	// (0x00019373) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe37,	// (0x0001aa96) cell_ai5_widget_pane_g_ParamLimits

0xfe37,	// (0x0001aa96) cell_ai5_widget_pane_g

0xe843,	// (0x000194a2) cell_ai5_widget_pane_t10_ParamLimits

0xe843,	// (0x000194a2) cell_ai5_widget_pane_t10

0xe859,	// (0x000194b8) grid_ai5_widget_pane_ParamLimits

0xe8fb,	// (0x0001955a) cell_contacts_ai5_widget_pane_ParamLimits

0xe8fb,	// (0x0001955a) cell_contacts_ai5_widget_pane

0xeae0,	// (0x0001973f) popup_discreet_window_t3_ParamLimits

0xeae0,	// (0x0001973f) popup_discreet_window_t3

0x6c15,	// (0x00011874) popup_fshwr2_char_preview_window_ParamLimits

0x6c15,	// (0x00011874) popup_fshwr2_char_preview_window

0xeccb,	// (0x0001992a) tmo_note_info_pane_t1

0xece0,	// (0x0001993f) tmo_note_info_pane_t2

0xecf5,	// (0x00019954) tmo_note_info_pane_t3

0xed0a,	// (0x00019969) tmo_note_info_pane_t4

0xed1c,	// (0x0001997b) tmo_note_info_pane_t5

0x0004,

0xfebe,	// (0x0001ab1d) tmo_note_info_pane_t

0xed2e,	// (0x0001998d) list_tmo_link_pane_ParamLimits

0xed3b,	// (0x0001999a) scroll_pane_cp20_ParamLimits

0x6c4d,	// (0x000118ac) bg_popup_fep_char_preview_window_cp01

0xed7f,	// (0x000199de) popup_fshwr2_char_preview_window_t1

0xed8d,	// (0x000199ec) popup_candi_list_indi_window_g1

0xed96,	// (0x000199f5) bg_cell_contacts_ai5_widget_pane

0xeda2,	// (0x00019a01) cell_contacts_ai5_widget_pane_g1

0xedb6,	// (0x00019a15) cell_contacts_ai5_widget_pane_g2

0xedc2,	// (0x00019a21) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfec9,	// (0x0001ab28) cell_contacts_ai5_widget_pane_g

0xedd5,	// (0x00019a34) cell_contacts_ai5_widget_pane_t1

0x7b28,	// (0x00012787) highlight_cell_shortcut_ai5_widget_pane_cp01

0xee4c,	// (0x00019aab) settings_container_pane

0x899a,	// (0x000135f9) listscroll_set_pane_copy1

0xb154,	// (0x00015db3) scroll_pane_cp121_copy1

0xee58,	// (0x00019ab7) set_content_pane_copy1

0xee60,	// (0x00019abf) aid_height_set_list_copy1_ParamLimits

0xee60,	// (0x00019abf) aid_height_set_list_copy1

0xa718,	// (0x00015377) aid_size_parent_copy1_ParamLimits

0xa718,	// (0x00015377) aid_size_parent_copy1

0xee6c,	// (0x00019acb) button_value_adjust_pane_cp6_copy1_ParamLimits

0xee6c,	// (0x00019acb) button_value_adjust_pane_cp6_copy1

0x8ce2,	// (0x00013941) list_highlight_pane_cp2_copy1_ParamLimits

0x8ce2,	// (0x00013941) list_highlight_pane_cp2_copy1

0xee80,	// (0x00019adf) list_set_pane_copy1_ParamLimits

0xee80,	// (0x00019adf) list_set_pane_copy1

0xede7,	// (0x00019a46) main_pane_set_t1_copy1_ParamLimits

0xede7,	// (0x00019a46) main_pane_set_t1_copy1

0xee21,	// (0x00019a80) main_pane_set_t2_copy1_ParamLimits

0xee21,	// (0x00019a80) main_pane_set_t2_copy1

0xef2d,	// (0x00019b8c) main_pane_set_t3_copy1

0xef3b,	// (0x00019b9a) main_pane_set_t4_copy1

0xee40,	// (0x00019a9f) set_content_pane_g1_copy1_ParamLimits

0xee40,	// (0x00019a9f) set_content_pane_g1_copy1

0xef49,	// (0x00019ba8) setting_code_pane_copy1

0xef51,	// (0x00019bb0) setting_slider_graphic_pane_copy1

0xef51,	// (0x00019bb0) setting_slider_pane_copy1

0xef51,	// (0x00019bb0) setting_text_pane_copy1

0xef51,	// (0x00019bb0) setting_volume_pane_copy1

0xef49,	// (0x00019ba8) settings_code_pane_cp2_copy1

0xef59,	// (0x00019bb8) settings_code_pane_cp_copy1_ParamLimits

0xef59,	// (0x00019bb8) settings_code_pane_cp_copy1

0xef6d,	// (0x00019bcc) volume_set_pane_copy1

0xef75,	// (0x00019bd4) volume_set_pane_g10_copy1

0xef7d,	// (0x00019bdc) volume_set_pane_g1_copy1

0xef85,	// (0x00019be4) volume_set_pane_g2_copy1

0xef8d,	// (0x00019bec) volume_set_pane_g3_copy1

0xef95,	// (0x00019bf4) volume_set_pane_g4_copy1

0xef9d,	// (0x00019bfc) volume_set_pane_g5_copy1

0xefa5,	// (0x00019c04) volume_set_pane_g6_copy1

0xefad,	// (0x00019c0c) volume_set_pane_g7_copy1

0xefb5,	// (0x00019c14) volume_set_pane_g8_copy1

0xefbd,	// (0x00019c1c) volume_set_pane_g9_copy1

0x6d41,	// (0x000119a0) bg_set_opt_pane_cp_copy1_ParamLimits

0x6d41,	// (0x000119a0) bg_set_opt_pane_cp_copy1

0xefc5,	// (0x00019c24) setting_slider_pane_t1_copy1_ParamLimits

0xefc5,	// (0x00019c24) setting_slider_pane_t1_copy1

0xefe3,	// (0x00019c42) setting_slider_pane_t2_copy1_ParamLimits

0xefe3,	// (0x00019c42) setting_slider_pane_t2_copy1

0xeffd,	// (0x00019c5c) setting_slider_pane_t3_copy1_ParamLimits

0xeffd,	// (0x00019c5c) setting_slider_pane_t3_copy1

0xf015,	// (0x00019c74) slider_set_pane_copy1_ParamLimits

0xf015,	// (0x00019c74) slider_set_pane_copy1

0x7c60,	// (0x000128bf) set_opt_bg_pane_g1_copy2

0x7c68,	// (0x000128c7) set_opt_bg_pane_g2_copy2

0xf02b,	// (0x00019c8a) set_opt_bg_pane_g3_copy2

0x7c78,	// (0x000128d7) set_opt_bg_pane_g4_copy2

0x7c80,	// (0x000128df) set_opt_bg_pane_g5_copy2

0x7c88,	// (0x000128e7) set_opt_bg_pane_g6_copy2

0xf035,	// (0x00019c94) set_opt_bg_pane_g7_copy2

0xf03d,	// (0x00019c9c) set_opt_bg_pane_g8_copy2

0xf047,	// (0x00019ca6) set_opt_bg_pane_g9_copy2

0xf051,	// (0x00019cb0) aid_size_touch_slider_mark_copy1_ParamLimits

0xf051,	// (0x00019cb0) aid_size_touch_slider_mark_copy1

0xf065,	// (0x00019cc4) slider_set_pane_g1_copy1

0xf06e,	// (0x00019ccd) slider_set_pane_g2_copy1

0xa84a,	// (0x000154a9) slider_set_pane_g3_copy1_ParamLimits

0xa84a,	// (0x000154a9) slider_set_pane_g3_copy1

0xa85e,	// (0x000154bd) slider_set_pane_g4_copy1_ParamLimits

0xa85e,	// (0x000154bd) slider_set_pane_g4_copy1

0xa876,	// (0x000154d5) slider_set_pane_g5_copy1_ParamLimits

0xa876,	// (0x000154d5) slider_set_pane_g5_copy1

0xa84a,	// (0x000154a9) slider_set_pane_g6_copy1_ParamLimits

0xa84a,	// (0x000154a9) slider_set_pane_g6_copy1

0xf076,	// (0x00019cd5) slider_set_pane_g7_copy1_ParamLimits

0xf076,	// (0x00019cd5) slider_set_pane_g7_copy1

0x6c61,	// (0x000118c0) bg_set_opt_pane_cp2_copy1

0xf08c,	// (0x00019ceb) setting_slider_graphic_pane_g1_copy1

0xf095,	// (0x00019cf4) setting_slider_graphic_pane_t1_copy1

0xf0a5,	// (0x00019d04) setting_slider_graphic_pane_t2_copy1

0xf0b5,	// (0x00019d14) slider_set_pane_cp_copy1

0xf0c5,	// (0x00019d24) input_focus_pane_cp1_copy1

0xf0ce,	// (0x00019d2d) list_set_text_pane_copy1

0xf0d6,	// (0x00019d35) setting_text_pane_g1_copy1

0x6d9a,	// (0x000119f9) set_text_pane_t1_copy1

0xf0c5,	// (0x00019d24) input_focus_pane_cp2_copy1

0xf0d6,	// (0x00019d35) setting_code_pane_g1_copy1

0xf0df,	// (0x00019d3e) setting_code_pane_t1_copy1

0xf0ed,	// (0x00019d4c) list_set_graphic_pane_copy1

0x6c61,	// (0x000118c0) bg_set_opt_pane_cp4_copy1

0x86a0,	// (0x000132ff) list_set_graphic_pane_g1_copy1_ParamLimits

0x86a0,	// (0x000132ff) list_set_graphic_pane_g1_copy1

0xf0ff,	// (0x00019d5e) list_set_graphic_pane_g2_copy1

0x86b8,	// (0x00013317) list_set_graphic_pane_t1_copy1_ParamLimits

0x86b8,	// (0x00013317) list_set_graphic_pane_t1_copy1

0xbd19,	// (0x00016978) rs_clock_indi_pane_g1

0xf107,	// (0x00019d66) rs_clock_indi_pane_t1

0xf115,	// (0x00019d74) rs_indi_pane

0xf11d,	// (0x00019d7c) rs_indi_pane_g1

0xf126,	// (0x00019d85) rs_indi_pane_g2

0xf12f,	// (0x00019d8e) rs_indi_pane_g3

0x0002,

0xfed0,	// (0x0001ab2f) rs_indi_pane_g

0x899a,	// (0x000135f9) bg_popup_preview_window_pane_cp03

0xf138,	// (0x00019d97) popup_fep_tooltip_window_t1

0xcb7c,	// (0x000177db) popup_note2_window_g2_ParamLimits

0xcb7c,	// (0x000177db) popup_note2_window_g2

0x0001,

0xfc69,	// (0x0001a8c8) popup_note2_window_g_ParamLimits

0xfc69,	// (0x0001a8c8) popup_note2_window_g

0xd166,	// (0x00017dc5) bg_popup_sub_pane_cp11_ParamLimits

0xd173,	// (0x00017dd2) cell_ai3_links_pane_g1_ParamLimits

0xd18a,	// (0x00017de9) cell_ai3_links_pane_t1

0x6d9a,	// (0x000119f9) set_text_pane_t1_copy1_ParamLimits

0x88ab,	// (0x0001350a) cell_graphic_popup_pane_cp2_ParamLimits

0x88ab,	// (0x0001350a) cell_graphic_popup_pane_cp2

0xf146,	// (0x00019da5) cell_graphic_popup_pane_g1_cp2

0x7312,	// (0x00011f71) cell_graphic_popup_pane_g2_cp2

0xf14e,	// (0x00019dad) cell_graphic_popup_pane_g3_cp2

0xf156,	// (0x00019db5) cell_graphic_popup_pane_t2_cp2

0x7323,	// (0x00011f82) grid_highlight_pane_cp3_cp2

0x8051,	// (0x00012cb0) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x7b28,	// (0x00012787) main_tmo_pane_ParamLimits

0xd521,	// (0x00018180) popup_tmo_big_image_note_window

0xe6a5,	// (0x00019304) cell_ai5_widget_list_pane

0xe6ad,	// (0x0001930c) cell_ai5_widget_lrg_icon_pane

0xeccb,	// (0x0001992a) tmo_note_info_pane_t1_ParamLimits

0xece0,	// (0x0001993f) tmo_note_info_pane_t2_ParamLimits

0xecf5,	// (0x00019954) tmo_note_info_pane_t3_ParamLimits

0xed0a,	// (0x00019969) tmo_note_info_pane_t4_ParamLimits

0xed1c,	// (0x0001997b) tmo_note_info_pane_t5_ParamLimits

0xfebe,	// (0x0001ab1d) tmo_note_info_pane_t_ParamLimits

0xee4c,	// (0x00019aab) settings_container_pane_ParamLimits

0xf0bd,	// (0x00019d1c) indicator_popup_pane_cp5

0xf0bd,	// (0x00019d1c) indicator_popup_pane_cp6

0xf0ed,	// (0x00019d4c) list_set_graphic_pane_copy1_ParamLimits

0x6c4d,	// (0x000118ac) bg_popup_window_pane_cp23

0xf164,	// (0x00019dc3) popup_tmo_big_image_note_window_g1

0xf16e,	// (0x00019dcd) popup_tmo_big_image_note_window_t1

0xf17e,	// (0x00019ddd) popup_tmo_big_image_note_window_t2

0xf18e,	// (0x00019ded) popup_tmo_big_image_note_window_t3

0x0002,

0xfed7,	// (0x0001ab36) popup_tmo_big_image_note_window_t

0xf19e,	// (0x00019dfd) cell_ai5_widget_lrg_icon_pane_g1

0xf1a6,	// (0x00019e05) cell_ai5_widget_lrg_icon_pane_t1

0xf1b4,	// (0x00019e13) cell_ai5_widget_list_row_pane_ParamLimits

0xf1b4,	// (0x00019e13) cell_ai5_widget_list_row_pane

0xf1cd,	// (0x00019e2c) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf1cd,	// (0x00019e2c) cell_ai5_widget_list_row_pane_g1

0xf1da,	// (0x00019e39) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf1da,	// (0x00019e39) cell_ai5_widget_list_row_pane_t1

0xf1f2,	// (0x00019e51) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf1f2,	// (0x00019e51) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfede,	// (0x0001ab3d) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfede,	// (0x0001ab3d) cell_ai5_widget_list_row_pane_t

0x4b78,	// (0x0000f7d7) main_fep_vtchi_ss_pane

0xf229,	// (0x00019e88) popup_fep_char_pre_window

0xf231,	// (0x00019e90) popup_fep_ituss_window

0xf252,	// (0x00019eb1) popup_fep_vkbss_window

0xf271,	// (0x00019ed0) grid_vkbss_keypad_pane_ParamLimits

0xf271,	// (0x00019ed0) grid_vkbss_keypad_pane

0xf281,	// (0x00019ee0) ituss_keypad_pane

0xf29d,	// (0x00019efc) aid_vkbss_key_offset_ParamLimits

0xf29d,	// (0x00019efc) aid_vkbss_key_offset

0xf2a9,	// (0x00019f08) cell_vkbss_key_pane_ParamLimits

0xf2a9,	// (0x00019f08) cell_vkbss_key_pane

0xf2bf,	// (0x00019f1e) bg_cell_vkbss_key_g1_ParamLimits

0xf2bf,	// (0x00019f1e) bg_cell_vkbss_key_g1

0xf2cb,	// (0x00019f2a) cell_vkbss_key_3p_pane_ParamLimits

0xf2cb,	// (0x00019f2a) cell_vkbss_key_3p_pane

0xf2e5,	// (0x00019f44) cell_vkbss_key_g1_ParamLimits

0xf2e5,	// (0x00019f44) cell_vkbss_key_g1

0xf2ff,	// (0x00019f5e) cell_vkbss_key_t1_ParamLimits

0xf2ff,	// (0x00019f5e) cell_vkbss_key_t1

0xf32a,	// (0x00019f89) cell_ituss_key_pane_ParamLimits

0xf32a,	// (0x00019f89) cell_ituss_key_pane

0xf33b,	// (0x00019f9a) bg_cell_ituss_key_g1_ParamLimits

0xf33b,	// (0x00019f9a) bg_cell_ituss_key_g1

0xf347,	// (0x00019fa6) cell_ituss_key_pane_g1_ParamLimits

0xf347,	// (0x00019fa6) cell_ituss_key_pane_g1

0xf361,	// (0x00019fc0) cell_ituss_key_pane_g2_ParamLimits

0xf361,	// (0x00019fc0) cell_ituss_key_pane_g2

0x0001,

0xfee5,	// (0x0001ab44) cell_ituss_key_pane_g_ParamLimits

0xfee5,	// (0x0001ab44) cell_ituss_key_pane_g

0xf38c,	// (0x00019feb) cell_ituss_key_t1_ParamLimits

0xf38c,	// (0x00019feb) cell_ituss_key_t1

0xf3ba,	// (0x0001a019) cell_ituss_key_t2_ParamLimits

0xf3ba,	// (0x0001a019) cell_ituss_key_t2

0xf3eb,	// (0x0001a04a) cell_ituss_key_t3_ParamLimits

0xf3eb,	// (0x0001a04a) cell_ituss_key_t3

0xf41c,	// (0x0001a07b) cell_ituss_key_t4_ParamLimits

0xf41c,	// (0x0001a07b) cell_ituss_key_t4

0x0003,

0xfeea,	// (0x0001ab49) cell_ituss_key_t_ParamLimits

0xfeea,	// (0x0001ab49) cell_ituss_key_t

0xf44d,	// (0x0001a0ac) cell_vkbss_key_3p_pane_g1

0xf455,	// (0x0001a0b4) cell_vkbss_key_3p_pane_g2

0xf45d,	// (0x0001a0bc) cell_vkbss_key_3p_pane_g3

0x0002,

0xfef3,	// (0x0001ab52) cell_vkbss_key_3p_pane_g

0x6c4d,	// (0x000118ac) bg_popup_fep_char_preview_window_cp02

0xf465,	// (0x0001a0c4) popup_fep_char_pre_window_t1

0xe637,	// (0x00019296) main_ai5_sk_pane

0xed96,	// (0x000199f5) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xeda2,	// (0x00019a01) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xedb6,	// (0x00019a15) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xedc2,	// (0x00019a21) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfec9,	// (0x0001ab28) cell_contacts_ai5_widget_pane_g_ParamLimits

0xedd5,	// (0x00019a34) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x7b28,	// (0x00012787) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf474,	// (0x0001a0d3) main_ai5_sk_pane_g1

0x97b9,	// (0x00014418) popup_query_code_window_g1

0xf247,	// (0x00019ea6) popup_fep_vkb_icf_pane

0xf25b,	// (0x00019eba) popup_fep_vtchi_icf_pane

0x7b28,	// (0x00012787) bg_icf_pane

0xf47d,	// (0x0001a0dc) list_vkb_icf_pane

0x7b28,	// (0x00012787) bg_icf_pane_cp01

0xf489,	// (0x0001a0e8) vtchi_icf_list_pane

0xf49a,	// (0x0001a0f9) list_vkb_icf_pane_t1_ParamLimits

0xf49a,	// (0x0001a0f9) list_vkb_icf_pane_t1

0xf4b1,	// (0x0001a110) vtchi_icf_list_pane_t1_ParamLimits

0xf4b1,	// (0x0001a110) vtchi_icf_list_pane_t1

0xf231,	// (0x00019e90) popup_fep_ituss_window_ParamLimits

0xf25b,	// (0x00019eba) popup_fep_vtchi_icf_pane_ParamLimits

0xf281,	// (0x00019ee0) ituss_keypad_pane_ParamLimits

0xf291,	// (0x00019ef0) ituss_sks_pane

0x7b28,	// (0x00012787) bg_icf_pane_ParamLimits

0xf21a,	// (0x00019e79) icf_edit_indi_pane_ParamLimits

0xf21a,	// (0x00019e79) icf_edit_indi_pane

0xf47d,	// (0x0001a0dc) list_vkb_icf_pane_ParamLimits

0x7b28,	// (0x00012787) bg_icf_pane_cp01_ParamLimits

0xf21a,	// (0x00019e79) icf_edit_indi_pane_cp01_ParamLimits

0xf21a,	// (0x00019e79) icf_edit_indi_pane_cp01

0xf491,	// (0x0001a0f0) vtchi_query_pane

0xbf97,	// (0x00016bf6) icf_edit_indi_pane_g1_ParamLimits

0xbf97,	// (0x00016bf6) icf_edit_indi_pane_g1

0xf537,	// (0x0001a196) icf_edit_indi_pane_g2_ParamLimits

0xf537,	// (0x0001a196) icf_edit_indi_pane_g2

0x0001,

0xff0b,	// (0x0001ab6a) icf_edit_indi_pane_g_ParamLimits

0xff0b,	// (0x0001ab6a) icf_edit_indi_pane_g

0xf546,	// (0x0001a1a5) icf_edit_indi_pane_t1

0xf4cd,	// (0x0001a12c) bg_input_focus_pane_cp042

0x74f6,	// (0x00012155) vtchi_button_pane

0xf4d6,	// (0x0001a135) vtchi_query_pane_t1

0xf4e4,	// (0x0001a143) vtchi_query_pane_t2

0xf4f2,	// (0x0001a151) vtchi_query_pane_t3

0x0002,

0xfefa,	// (0x0001ab59) vtchi_query_pane_t

0x6c4d,	// (0x000118ac) bg_button_pane_cp13

0xf500,	// (0x0001a15f) vtchi_button_pane_g1

0xf508,	// (0x0001a167) ituss_sks_pane_g1

0xf513,	// (0x0001a172) ituss_sks_pane_g2

0x0001,

0xff01,	// (0x0001ab60) ituss_sks_pane_g

0xf51b,	// (0x0001a17a) ituss_sks_pane_t1

0xf529,	// (0x0001a188) ituss_sks_pane_t2

0x0001,

0xff06,	// (0x0001ab65) ituss_sks_pane_t

0xb733,	// (0x00016392) indicator_nsta_pane_cp_g1

0xb73c,	// (0x0001639b) indicator_nsta_pane_cp_g2

0xb744,	// (0x000163a3) indicator_nsta_pane_cp_g3

0xb74c,	// (0x000163ab) indicator_nsta_pane_cp_g4

0xb754,	// (0x000163b3) indicator_nsta_pane_cp_g5

0xb75c,	// (0x000163bb) indicator_nsta_pane_cp_g6

0x0005,

0xfaa7,	// (0x0001a706) indicator_nsta_pane_cp_g

0xe1fc,	// (0x00018e5b) cell_graphic2_pane_t2_ParamLimits

0xe1fc,	// (0x00018e5b) cell_graphic2_pane_t2

0x0001,

0xfdc0,	// (0x0001aa1f) cell_graphic2_pane_t_ParamLimits

0xfdc0,	// (0x0001aa1f) cell_graphic2_pane_t

0xe229,	// (0x00018e88) cell_graphic2_control_pane_t1

0x83c7,	// (0x00013026) signal_pane_g3_ParamLimits

0x83c7,	// (0x00013026) signal_pane_g3

0x83d6,	// (0x00013035) signal_pane_g4_ParamLimits

0x83d6,	// (0x00013035) signal_pane_g4

0xf204,	// (0x00019e63) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf204,	// (0x00019e63) cell_ai5_widget_list_row_pane_t3

0xf37a,	// (0x00019fd9) cell_ituss_key_pane_t1_ParamLimits

0xf37a,	// (0x00019fd9) cell_ituss_key_pane_t1

0x93ce,	// (0x0001402d) form_field_data_wide_pane_vc_t2_ParamLimits

0x93ce,	// (0x0001402d) form_field_data_wide_pane_vc_t2

0x93e2,	// (0x00014041) form_field_data_wide_pane_vc_t3_ParamLimits

0x93e2,	// (0x00014041) form_field_data_wide_pane_vc_t3

0x0002,

0xf80a,	// (0x0001a469) form_field_data_wide_pane_vc_t_ParamLimits

0xf80a,	// (0x0001a469) form_field_data_wide_pane_vc_t

0xb3ea,	// (0x00016049) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb3ea,	// (0x00016049) form_field_slider_wide_pane_vc_t3

0xb4c8,	// (0x00016127) form_field_popup_wide_pane_vc_t2_ParamLimits

0xb4c8,	// (0x00016127) form_field_popup_wide_pane_vc_t2

0xb4df,	// (0x0001613e) form_field_popup_wide_pane_vc_t3_ParamLimits

0xb4df,	// (0x0001613e) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa96,	// (0x0001a6f5) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa96,	// (0x0001a6f5) form_field_popup_wide_pane_vc_t

0x6bab,	// (0x0001180a) aid_fshwr2_btn_pane_ParamLimits

0x6bb7,	// (0x00011816) aid_fshwr2_syb_pane_ParamLimits

0x6bc8,	// (0x00011827) aid_fshwr2_txt_pane_ParamLimits

0x63fb,	// (0x0001105a) fshwr2_bg_pane_ParamLimits

0x6bd4,	// (0x00011833) fshwr2_func_candi_pane_ParamLimits

0x6be9,	// (0x00011848) fshwr2_hwr_syb_pane_ParamLimits

0x6c00,	// (0x0001185f) fshwr2_icf_pane_ParamLimits
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

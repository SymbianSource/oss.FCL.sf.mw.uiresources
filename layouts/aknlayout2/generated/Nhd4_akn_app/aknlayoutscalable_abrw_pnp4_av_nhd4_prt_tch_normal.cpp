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

#include "aknlayoutscalable_abrw_pnp4_av_nhd4_prt_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnp4_av_nhd4_prt_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x000096c0 };

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
0x7dcf,	// (0x0001148f) Screen

0x7de3,	// (0x000114a3) application_window_ParamLimits

0x7de3,	// (0x000114a3) application_window

0x7dfd,	// (0x000114bd) screen_g1

0x5ab0,	// (0x0000f170) area_bottom_pane_ParamLimits

0x5ab0,	// (0x0000f170) area_bottom_pane

0x5b70,	// (0x0000f230) area_top_pane_ParamLimits

0x5b70,	// (0x0000f230) area_top_pane

0x5c0e,	// (0x0000f2ce) main_pane_ParamLimits

0x5c0e,	// (0x0000f2ce) main_pane

0x7e07,	// (0x000114c7) misc_graphics

0x9eb7,	// (0x00013577) battery_pane_ParamLimits

0x9eb7,	// (0x00013577) battery_pane

0xac95,	// (0x00014355) bg_status_flat_pane_g8

0xac9d,	// (0x0001435d) bg_status_flat_pane_g9

0x9f79,	// (0x00013639) context_pane_ParamLimits

0x9f79,	// (0x00013639) context_pane

0xa08f,	// (0x0001374f) navi_pane_ParamLimits

0xa08f,	// (0x0001374f) navi_pane

0xa113,	// (0x000137d3) signal_pane_ParamLimits

0xa113,	// (0x000137d3) signal_pane

0x0008,

0xf875,	// (0x00018f35) bg_status_flat_pane_g

0xa180,	// (0x00013840) status_pane_g1_ParamLimits

0xa180,	// (0x00013840) status_pane_g1

0xa18c,	// (0x0001384c) status_pane_g2_ParamLimits

0xa18c,	// (0x0001384c) status_pane_g2

0xa198,	// (0x00013858) status_pane_g3_ParamLimits

0xa198,	// (0x00013858) status_pane_g3

0x0004,

0xf7a1,	// (0x00018e61) status_pane_g_ParamLimits

0xf7a1,	// (0x00018e61) status_pane_g

0xa1cc,	// (0x0001388c) title_pane_ParamLimits

0xa1cc,	// (0x0001388c) title_pane

0xa209,	// (0x000138c9) uni_indicator_pane_ParamLimits

0xa209,	// (0x000138c9) uni_indicator_pane

0x9dcf,	// (0x0001348f) bg_list_pane_ParamLimits

0x9dcf,	// (0x0001348f) bg_list_pane

0x9def,	// (0x000134af) find_pane

0x9df7,	// (0x000134b7) listscroll_app_pane_ParamLimits

0x9df7,	// (0x000134b7) listscroll_app_pane

0x9e03,	// (0x000134c3) listscroll_form_pane

0x64ca,	// (0x0000fb8a) listscroll_gen_pane_ParamLimits

0x64ca,	// (0x0000fb8a) listscroll_gen_pane

0x64de,	// (0x0000fb9e) listscroll_set_pane

0x8fe5,	// (0x000126a5) main_idle_act_pane

0x9ad9,	// (0x00013199) main_idle_trad_pane

0x9ad9,	// (0x00013199) main_list_empty_pane

0x9e1d,	// (0x000134dd) main_midp_pane

0x9e29,	// (0x000134e9) main_pane_g1_ParamLimits

0x9e29,	// (0x000134e9) main_pane_g1

0x64f4,	// (0x0000fbb4) popup_ai_message_window_ParamLimits

0x64f4,	// (0x0000fbb4) popup_ai_message_window

0x6598,	// (0x0000fc58) popup_fep_china_uni_window_ParamLimits

0x6598,	// (0x0000fc58) popup_fep_china_uni_window

0x65f2,	// (0x0000fcb2) popup_fep_japan_candidate_window_ParamLimits

0x65f2,	// (0x0000fcb2) popup_fep_japan_candidate_window

0x6610,	// (0x0000fcd0) popup_fep_japan_predictive_window_ParamLimits

0x6610,	// (0x0000fcd0) popup_fep_japan_predictive_window

0x6640,	// (0x0000fd00) popup_find_window

0x664d,	// (0x0000fd0d) popup_grid_graphic_window_ParamLimits

0x664d,	// (0x0000fd0d) popup_grid_graphic_window

0x6675,	// (0x0000fd35) popup_large_graphic_colour_window

0x669b,	// (0x0000fd5b) popup_menu_window_ParamLimits

0x669b,	// (0x0000fd5b) popup_menu_window

0x6855,	// (0x0000ff15) popup_note_image_window

0x6841,	// (0x0000ff01) popup_note_wait_window_ParamLimits

0x6841,	// (0x0000ff01) popup_note_wait_window

0x6841,	// (0x0000ff01) popup_note_window_ParamLimits

0x6841,	// (0x0000ff01) popup_note_window

0x68ab,	// (0x0000ff6b) popup_query_code_window_ParamLimits

0x68ab,	// (0x0000ff6b) popup_query_code_window

0x68bf,	// (0x0000ff7f) popup_query_data_code_window_ParamLimits

0x68bf,	// (0x0000ff7f) popup_query_data_code_window

0x68da,	// (0x0000ff9a) popup_query_data_window_ParamLimits

0x68da,	// (0x0000ff9a) popup_query_data_window

0x68f4,	// (0x0000ffb4) popup_query_sat_info_window_ParamLimits

0x68f4,	// (0x0000ffb4) popup_query_sat_info_window

0x692d,	// (0x0000ffed) popup_snote_single_graphic_window_ParamLimits

0x692d,	// (0x0000ffed) popup_snote_single_graphic_window

0x692d,	// (0x0000ffed) popup_snote_single_text_window_ParamLimits

0x692d,	// (0x0000ffed) popup_snote_single_text_window

0x6942,	// (0x00010002) popup_sub_window_general

0x6a70,	// (0x00010130) popup_window_general_ParamLimits

0x6a70,	// (0x00010130) popup_window_general

0x9e3f,	// (0x000134ff) power_save_pane

0x6360,	// (0x0000fa20) control_pane_g1_ParamLimits

0x6360,	// (0x0000fa20) control_pane_g1

0x6387,	// (0x0000fa47) control_pane_g2_ParamLimits

0x6387,	// (0x0000fa47) control_pane_g2

0x9d92,	// (0x00013452) control_pane_g3_ParamLimits

0x9d92,	// (0x00013452) control_pane_g3

0x0007,

0xf789,	// (0x00018e49) control_pane_g_ParamLimits

0xf789,	// (0x00018e49) control_pane_g

0x63cf,	// (0x0000fa8f) control_pane_t1_ParamLimits

0x63cf,	// (0x0000fa8f) control_pane_t1

0x641b,	// (0x0000fadb) control_pane_t2_ParamLimits

0x641b,	// (0x0000fadb) control_pane_t2

0x0002,

0xf79a,	// (0x00018e5a) control_pane_t_ParamLimits

0xf79a,	// (0x00018e5a) control_pane_t

0x9cb3,	// (0x00013373) navi_navi_volume_pane_cp1

0x9cbc,	// (0x0001337c) status_small_icon_pane

0x9cc4,	// (0x00013384) status_small_pane_g1_ParamLimits

0x9cc4,	// (0x00013384) status_small_pane_g1

0x9cf8,	// (0x000133b8) status_small_pane_g2_ParamLimits

0x9cf8,	// (0x000133b8) status_small_pane_g2

0x9d04,	// (0x000133c4) status_small_pane_g3_ParamLimits

0x9d04,	// (0x000133c4) status_small_pane_g3

0x9d10,	// (0x000133d0) status_small_pane_g4_ParamLimits

0x9d10,	// (0x000133d0) status_small_pane_g4

0x9d1c,	// (0x000133dc) status_small_pane_g5_ParamLimits

0x9d1c,	// (0x000133dc) status_small_pane_g5

0x9d2b,	// (0x000133eb) status_small_pane_g6_ParamLimits

0x9d2b,	// (0x000133eb) status_small_pane_g6

0x0007,

0xf778,	// (0x00018e38) status_small_pane_g_ParamLimits

0xf778,	// (0x00018e38) status_small_pane_g

0x9d5b,	// (0x0001341b) status_small_pane_t1

0x9d7e,	// (0x0001343e) status_small_wait_pane_ParamLimits

0x9d7e,	// (0x0001343e) status_small_wait_pane

0x94d5,	// (0x00012b95) aid_levels_signal_ParamLimits

0x94d5,	// (0x00012b95) aid_levels_signal

0x94e7,	// (0x00012ba7) signal_pane_g1_ParamLimits

0x94e7,	// (0x00012ba7) signal_pane_g1

0x94fc,	// (0x00012bbc) signal_pane_g2_ParamLimits

0x94fc,	// (0x00012bbc) signal_pane_g2

0x0003,

0xf709,	// (0x00018dc9) signal_pane_g_ParamLimits

0xf709,	// (0x00018dc9) signal_pane_g

0x9536,	// (0x00012bf6) context_pane_g1

0x7e11,	// (0x000114d1) title_pane_g1

0x7e47,	// (0x00011507) title_pane_t1

0x7eaf,	// (0x0001156f) title_pane_t2

0x7ed5,	// (0x00011595) title_pane_t3

0x0002,

0xf55d,	// (0x00018c1d) title_pane_t

0xa221,	// (0x000138e1) aid_levels_battery_ParamLimits

0xa221,	// (0x000138e1) aid_levels_battery

0xa235,	// (0x000138f5) battery_pane_g1_ParamLimits

0xa235,	// (0x000138f5) battery_pane_g1

0xa24b,	// (0x0001390b) battery_pane_g2_ParamLimits

0xa24b,	// (0x0001390b) battery_pane_g2

0x0001,

0xf7ac,	// (0x00018e6c) battery_pane_g_ParamLimits

0xf7ac,	// (0x00018e6c) battery_pane_g

0xb5c9,	// (0x00014c89) uni_indicator_pane_g1

0xb5e0,	// (0x00014ca0) uni_indicator_pane_g2

0xb5f3,	// (0x00014cb3) uni_indicator_pane_g3

0x0005,

0xf91d,	// (0x00018fdd) uni_indicator_pane_g

0x9957,	// (0x00013017) navi_icon_pane_ParamLimits

0x9957,	// (0x00013017) navi_icon_pane

0x98a0,	// (0x00012f60) navi_midp_pane

0x9973,	// (0x00013033) navi_navi_pane

0x997d,	// (0x0001303d) navi_text_pane_ParamLimits

0x997d,	// (0x0001303d) navi_text_pane

0x7dfd,	// (0x000114bd) status_small_wait_pane_g1

0x8312,	// (0x000119d2) status_small_wait_pane_g2

0x0001,

0xf918,	// (0x00018fd8) status_small_wait_pane_g

0xb2f0,	// (0x000149b0) navi_navi_icon_text_pane

0xb2f8,	// (0x000149b8) navi_navi_pane_g1_ParamLimits

0xb2f8,	// (0x000149b8) navi_navi_pane_g1

0xb30a,	// (0x000149ca) navi_navi_pane_g2_ParamLimits

0xb30a,	// (0x000149ca) navi_navi_pane_g2

0x0001,

0xf8e6,	// (0x00018fa6) navi_navi_pane_g_ParamLimits

0xf8e6,	// (0x00018fa6) navi_navi_pane_g

0xb31c,	// (0x000149dc) navi_navi_tabs_pane

0xb325,	// (0x000149e5) navi_navi_text_pane

0xb2f0,	// (0x000149b0) navi_navi_volume_pane

0xb2cc,	// (0x0001498c) navi_text_pane_t1

0xb2c0,	// (0x00014980) navi_icon_pane_g1

0xb213,	// (0x000148d3) navi_navi_text_pane_t1

0x6d80,	// (0x00010440) navi_navi_volume_pane_g1

0x6d88,	// (0x00010448) volume_small_pane

0xb179,	// (0x00014839) navi_navi_icon_text_pane_g1

0xb181,	// (0x00014841) navi_navi_icon_text_pane_t1

0x9973,	// (0x00013033) navi_tabs_2_long_pane

0x9973,	// (0x00013033) navi_tabs_2_pane

0x9973,	// (0x00013033) navi_tabs_3_long_pane

0x9973,	// (0x00013033) navi_tabs_3_pane

0x9973,	// (0x00013033) navi_tabs_4_pane

0x6d60,	// (0x00010420) tabs_2_active_pane_ParamLimits

0x6d60,	// (0x00010420) tabs_2_active_pane

0x6d70,	// (0x00010430) tabs_2_passive_pane_ParamLimits

0x6d70,	// (0x00010430) tabs_2_passive_pane

0x6d2e,	// (0x000103ee) tabs_3_active_pane_ParamLimits

0x6d2e,	// (0x000103ee) tabs_3_active_pane

0x6d3e,	// (0x000103fe) tabs_3_passive_pane_ParamLimits

0x6d3e,	// (0x000103fe) tabs_3_passive_pane

0x6d4f,	// (0x0001040f) tabs_3_passive_pane_cp_ParamLimits

0x6d4f,	// (0x0001040f) tabs_3_passive_pane_cp

0x6cea,	// (0x000103aa) tabs_4_active_pane_ParamLimits

0x6cea,	// (0x000103aa) tabs_4_active_pane

0x6cfb,	// (0x000103bb) tabs_4_passive_pane_ParamLimits

0x6cfb,	// (0x000103bb) tabs_4_passive_pane

0x6d0c,	// (0x000103cc) tabs_4_passive_pane_cp_ParamLimits

0x6d0c,	// (0x000103cc) tabs_4_passive_pane_cp

0x6d1d,	// (0x000103dd) tabs_4_passive_pane_cp2_ParamLimits

0x6d1d,	// (0x000103dd) tabs_4_passive_pane_cp2

0x6cc6,	// (0x00010386) tabs_2_long_active_pane_ParamLimits

0x6cc6,	// (0x00010386) tabs_2_long_active_pane

0x6cd8,	// (0x00010398) tabs_2_long_passive_pane_ParamLimits

0x6cd8,	// (0x00010398) tabs_2_long_passive_pane

0x6c8d,	// (0x0001034d) tabs_3_long_active_pane_ParamLimits

0x6c8d,	// (0x0001034d) tabs_3_long_active_pane

0x6ca0,	// (0x00010360) tabs_3_long_passive_pane_ParamLimits

0x6ca0,	// (0x00010360) tabs_3_long_passive_pane

0x6cb3,	// (0x00010373) tabs_3_long_passive_pane_cp_ParamLimits

0x6cb3,	// (0x00010373) tabs_3_long_passive_pane_cp

0x6c33,	// (0x000102f3) volume_small_pane_g1

0x6c3c,	// (0x000102fc) volume_small_pane_g2

0x6c45,	// (0x00010305) volume_small_pane_g3

0x6c4e,	// (0x0001030e) volume_small_pane_g4

0x6c57,	// (0x00010317) volume_small_pane_g5

0x6c60,	// (0x00010320) volume_small_pane_g6

0x6c69,	// (0x00010329) volume_small_pane_g7

0x6c72,	// (0x00010332) volume_small_pane_g8

0x6c7b,	// (0x0001033b) volume_small_pane_g9

0x6c84,	// (0x00010344) volume_small_pane_g10

0x0009,

0xf8b2,	// (0x00018f72) volume_small_pane_g

0x7ee7,	// (0x000115a7) bg_active_tab_pane_cp2_ParamLimits

0x7ee7,	// (0x000115a7) bg_active_tab_pane_cp2

0x7ef5,	// (0x000115b5) tabs_3_active_pane_g1

0x7efd,	// (0x000115bd) tabs_3_active_pane_t1

0x7ee7,	// (0x000115a7) bg_passive_tab_pane_cp2_ParamLimits

0x7ee7,	// (0x000115a7) bg_passive_tab_pane_cp2

0x7ef5,	// (0x000115b5) tabs_3_passive_pane_g1

0x7efd,	// (0x000115bd) tabs_3_passive_pane_t1

0x7ee7,	// (0x000115a7) bg_active_tab_pane_cp3_ParamLimits

0x7ee7,	// (0x000115a7) bg_active_tab_pane_cp3

0x7f0f,	// (0x000115cf) tabs_4_active_pane_g1

0x7f17,	// (0x000115d7) tabs_4_active_pane_t1

0x7ee7,	// (0x000115a7) bg_passive_tab_pane_cp3_ParamLimits

0x7ee7,	// (0x000115a7) bg_passive_tab_pane_cp3

0x7f0f,	// (0x000115cf) tabs_4_1_passive_pane_g1

0x7f17,	// (0x000115d7) tabs_4_1_passive_pane_t1

0x9e1d,	// (0x000134dd) list_highlight_pane_cp2

0xb846,	// (0x00014f06) list_set_pane_ParamLimits

0xb846,	// (0x00014f06) list_set_pane

0xb8ec,	// (0x00014fac) main_pane_set_t1_ParamLimits

0xb8ec,	// (0x00014fac) main_pane_set_t1

0xb90c,	// (0x00014fcc) main_pane_set_t2_ParamLimits

0xb90c,	// (0x00014fcc) main_pane_set_t2

0xb920,	// (0x00014fe0) main_pane_set_t3_ParamLimits

0xb920,	// (0x00014fe0) main_pane_set_t3

0xb932,	// (0x00014ff2) main_pane_set_t4_ParamLimits

0xb932,	// (0x00014ff2) main_pane_set_t4

0x0003,

0xf982,	// (0x00019042) main_pane_set_t_ParamLimits

0xf982,	// (0x00019042) main_pane_set_t

0xb944,	// (0x00015004) setting_code_pane

0xb94e,	// (0x0001500e) setting_slider_graphic_pane

0xb94e,	// (0x0001500e) setting_slider_pane

0xb94e,	// (0x0001500e) setting_text_pane

0xb94e,	// (0x0001500e) setting_volume_pane

0x5e4f,	// (0x0000f50f) volume_set_pane

0x7ee7,	// (0x000115a7) bg_set_opt_pane_cp

0x5e57,	// (0x0000f517) setting_slider_pane_t1

0x5e70,	// (0x0000f530) setting_slider_pane_t2

0x5e8a,	// (0x0000f54a) setting_slider_pane_t3

0x0002,

0xf564,	// (0x00018c24) setting_slider_pane_t

0x5ea2,	// (0x0000f562) slider_set_pane

0x7e07,	// (0x000114c7) bg_set_opt_pane_cp2

0x7f29,	// (0x000115e9) setting_slider_graphic_pane_g1

0x5eb8,	// (0x0000f578) setting_slider_graphic_pane_t1

0x5ec8,	// (0x0000f588) setting_slider_graphic_pane_t2

0x0001,

0xf56b,	// (0x00018c2b) setting_slider_graphic_pane_t

0x5ed8,	// (0x0000f598) slider_set_pane_cp

0x7e07,	// (0x000114c7) input_focus_pane_cp1

0xb805,	// (0x00014ec5) list_set_text_pane

0x7dfd,	// (0x000114bd) setting_text_pane_g1

0x7e07,	// (0x000114c7) input_focus_pane_cp2

0x7dfd,	// (0x000114bd) setting_code_pane_g1

0x7f32,	// (0x000115f2) setting_code_pane_t1

0x7f40,	// (0x00011600) set_text_pane_t1_ParamLimits

0x7f40,	// (0x00011600) set_text_pane_t1

0x8dd0,	// (0x00012490) set_opt_bg_pane_g1

0x8dd8,	// (0x00012498) set_opt_bg_pane_g2

0xb7e5,	// (0x00014ea5) set_opt_bg_pane_g3

0x8de8,	// (0x000124a8) set_opt_bg_pane_g4

0x8df0,	// (0x000124b0) set_opt_bg_pane_g5

0x8df8,	// (0x000124b8) set_opt_bg_pane_g6

0xb7ed,	// (0x00014ead) set_opt_bg_pane_g7

0xb7f5,	// (0x00014eb5) set_opt_bg_pane_g8

0xb7fd,	// (0x00014ebd) set_opt_bg_pane_g9

0x0008,

0xf96f,	// (0x0001902f) set_opt_bg_pane_g

0xb7d8,	// (0x00014e98) slider_set_pane_g1

0x6df5,	// (0x000104b5) slider_set_pane_g2

0x0006,

0xf960,	// (0x00019020) slider_set_pane_g

0x6d91,	// (0x00010451) volume_set_pane_g1

0x6d99,	// (0x00010459) volume_set_pane_g2

0x6da1,	// (0x00010461) volume_set_pane_g3

0x6da9,	// (0x00010469) volume_set_pane_g4

0x6db1,	// (0x00010471) volume_set_pane_g5

0x6db9,	// (0x00010479) volume_set_pane_g6

0x6dc1,	// (0x00010481) volume_set_pane_g7

0x6dc9,	// (0x00010489) volume_set_pane_g8

0x6dd1,	// (0x00010491) volume_set_pane_g9

0x6dd9,	// (0x00010499) volume_set_pane_g10

0x0009,

0xf938,	// (0x00018ff8) volume_set_pane_g

0x7f5a,	// (0x0001161a) indicator_pane_ParamLimits

0x7f5a,	// (0x0001161a) indicator_pane

0x7f66,	// (0x00011626) main_idle_pane_g2_ParamLimits

0x7f66,	// (0x00011626) main_idle_pane_g2

0x7f8e,	// (0x0001164e) main_pane_idle_g1_ParamLimits

0x7f8e,	// (0x0001164e) main_pane_idle_g1

0x7f9b,	// (0x0001165b) popup_clock_digital_analogue_window_ParamLimits

0x7f9b,	// (0x0001165b) popup_clock_digital_analogue_window

0x7fb2,	// (0x00011672) soft_indicator_pane_ParamLimits

0x7fb2,	// (0x00011672) soft_indicator_pane

0x7fbe,	// (0x0001167e) wallpaper_pane_ParamLimits

0x7fbe,	// (0x0001167e) wallpaper_pane

0x7dfd,	// (0x000114bd) wallpaper_pane_g1

0x7fd2,	// (0x00011692) indicator_pane_g1_ParamLimits

0x7fd2,	// (0x00011692) indicator_pane_g1

0xbd02,	// (0x000153c2) navi_navi_icon_text_pane_srt_g1

0x7fed,	// (0x000116ad) soft_indicator_pane_t1

0x8007,	// (0x000116c7) aid_ps_area_pane

0x8018,	// (0x000116d8) aid_ps_clock_pane

0x8026,	// (0x000116e6) aid_ps_indicator_pane

0x8032,	// (0x000116f2) indicator_ps_pane_ParamLimits

0x8032,	// (0x000116f2) indicator_ps_pane

0x8041,	// (0x00011701) power_save_pane_g1_ParamLimits

0x8041,	// (0x00011701) power_save_pane_g1

0x804d,	// (0x0001170d) power_save_pane_g2_ParamLimits

0x804d,	// (0x0001170d) power_save_pane_g2

0x5a64,	// (0x0000f124) aid_navinavi_width_pane

0x8007,	// (0x000116c7) aid_ps_area_pane_ParamLimits

0x0001,

0xf570,	// (0x00018c30) power_save_pane_g_ParamLimits

0xf570,	// (0x00018c30) power_save_pane_g

0x805b,	// (0x0001171b) power_save_pane_t1_ParamLimits

0x805b,	// (0x0001171b) power_save_pane_t1

0x8018,	// (0x000116d8) aid_ps_clock_pane_ParamLimits

0x8026,	// (0x000116e6) aid_ps_indicator_pane_ParamLimits

0x806d,	// (0x0001172d) power_save_pane_t4_ParamLimits

0x806d,	// (0x0001172d) power_save_pane_t4

0x0001,

0xf575,	// (0x00018c35) power_save_pane_t_ParamLimits

0xf575,	// (0x00018c35) power_save_pane_t

0x8097,	// (0x00011757) power_save_t3_ParamLimits

0x8097,	// (0x00011757) power_save_t3

0x8082,	// (0x00011742) power_save_t2_ParamLimits

0x8082,	// (0x00011742) power_save_t2

0x80ac,	// (0x0001176c) indicator_ps_pane_g1

0x80b5,	// (0x00011775) ai_gene_pane_ParamLimits

0x80b5,	// (0x00011775) ai_gene_pane

0x80c1,	// (0x00011781) ai_links_pane_ParamLimits

0x80c1,	// (0x00011781) ai_links_pane

0x80cd,	// (0x0001178d) indicator_pane_cp1_ParamLimits

0x80cd,	// (0x0001178d) indicator_pane_cp1

0x80d9,	// (0x00011799) main_pane_idle_g1_cp_ParamLimits

0x80d9,	// (0x00011799) main_pane_idle_g1_cp

0x80e5,	// (0x000117a5) popup_ai_links_title_window

0x80ee,	// (0x000117ae) soft_indicator_pane_cp1_ParamLimits

0x80ee,	// (0x000117ae) soft_indicator_pane_cp1

0xb5b7,	// (0x00014c77) ai_links_pane_g1

0xb5c0,	// (0x00014c80) grid_ai_links_pane

0xb59a,	// (0x00014c5a) ai_gene_pane_1

0xb5a5,	// (0x00014c65) ai_gene_pane_2

0xb5ae,	// (0x00014c6e) list_highlight_pane_cp4

0xb57e,	// (0x00014c3e) cell_ai_link_pane_ParamLimits

0xb57e,	// (0x00014c3e) cell_ai_link_pane

0xb576,	// (0x00014c36) cell_ai_link_pane_g1

0x8312,	// (0x000119d2) cell_ai_link_pane_g2

0x0001,

0xf913,	// (0x00018fd3) cell_ai_link_pane_g

0x7e07,	// (0x000114c7) grid_highlight_cp2

0x7e07,	// (0x000114c7) bg_popup_sub_pane_cp1

0x8108,	// (0x000117c8) popup_ai_links_title_window_t1

0xb4c6,	// (0x00014b86) ai_gene_pane_1_g1_ParamLimits

0xb4c6,	// (0x00014b86) ai_gene_pane_1_g1

0xb4d2,	// (0x00014b92) ai_gene_pane_1_g2_ParamLimits

0xb4d2,	// (0x00014b92) ai_gene_pane_1_g2

0x0001,

0xf909,	// (0x00018fc9) ai_gene_pane_1_g_ParamLimits

0xf909,	// (0x00018fc9) ai_gene_pane_1_g

0xb4df,	// (0x00014b9f) ai_gene_pane_1_t1_ParamLimits

0xb4df,	// (0x00014b9f) ai_gene_pane_1_t1

0xb513,	// (0x00014bd3) grid_ai_soft_ind_pane

0xb4b1,	// (0x00014b71) ai_gene_pane_2_t1_ParamLimits

0xb4b1,	// (0x00014b71) ai_gene_pane_2_t1

0x8117,	// (0x000117d7) main_pane_empty_t1_ParamLimits

0x8117,	// (0x000117d7) main_pane_empty_t1

0x812f,	// (0x000117ef) main_pane_empty_t2_ParamLimits

0x812f,	// (0x000117ef) main_pane_empty_t2

0x8144,	// (0x00011804) main_pane_empty_t3_ParamLimits

0x8144,	// (0x00011804) main_pane_empty_t3

0x8156,	// (0x00011816) main_pane_empty_t4_ParamLimits

0x8156,	// (0x00011816) main_pane_empty_t4

0x8168,	// (0x00011828) main_pane_empty_t5_ParamLimits

0x8168,	// (0x00011828) main_pane_empty_t5

0x0004,

0xf57a,	// (0x00018c3a) main_pane_empty_t_ParamLimits

0xf57a,	// (0x00018c3a) main_pane_empty_t

0x8eaf,	// (0x0001256f) bg_popup_window_pane_ParamLimits

0x8eaf,	// (0x0001256f) bg_popup_window_pane

0xb221,	// (0x000148e1) find_popup_pane_cp2_ParamLimits

0xb221,	// (0x000148e1) find_popup_pane_cp2

0xb22d,	// (0x000148ed) heading_pane_ParamLimits

0xb22d,	// (0x000148ed) heading_pane

0x7e07,	// (0x000114c7) bg_popup_sub_pane

0xb19b,	// (0x0001485b) bg_popup_window_pane_g1_ParamLimits

0xb19b,	// (0x0001485b) bg_popup_window_pane_g1

0xb1a7,	// (0x00014867) bg_popup_window_pane_g2_ParamLimits

0xb1a7,	// (0x00014867) bg_popup_window_pane_g2

0xb1b3,	// (0x00014873) bg_popup_window_pane_g3_ParamLimits

0xb1b3,	// (0x00014873) bg_popup_window_pane_g3

0xb1bf,	// (0x0001487f) bg_popup_window_pane_g4_ParamLimits

0xb1bf,	// (0x0001487f) bg_popup_window_pane_g4

0xb1cb,	// (0x0001488b) bg_popup_window_pane_g5_ParamLimits

0xb1cb,	// (0x0001488b) bg_popup_window_pane_g5

0xb1d7,	// (0x00014897) bg_popup_window_pane_g6_ParamLimits

0xb1d7,	// (0x00014897) bg_popup_window_pane_g6

0xb1e3,	// (0x000148a3) bg_popup_window_pane_g7_ParamLimits

0xb1e3,	// (0x000148a3) bg_popup_window_pane_g7

0xb1ef,	// (0x000148af) bg_popup_window_pane_g8_ParamLimits

0xb1ef,	// (0x000148af) bg_popup_window_pane_g8

0xb1fb,	// (0x000148bb) bg_popup_window_pane_g9_ParamLimits

0xb1fb,	// (0x000148bb) bg_popup_window_pane_g9

0xb207,	// (0x000148c7) bg_popup_window_pane_g10_ParamLimits

0xb207,	// (0x000148c7) bg_popup_window_pane_g10

0x0009,

0xf8d1,	// (0x00018f91) bg_popup_window_pane_g_ParamLimits

0xf8d1,	// (0x00018f91) bg_popup_window_pane_g

0xb130,	// (0x000147f0) bg_popup_heading_pane_ParamLimits

0xb130,	// (0x000147f0) bg_popup_heading_pane

0x6e7d,	// (0x0001053d) tabs_4_passive_pane_cp_srt_ParamLimits

0x6e7d,	// (0x0001053d) tabs_4_passive_pane_cp_srt

0x6e8f,	// (0x0001054f) tabs_4_passive_pane_srt_ParamLimits

0xb144,	// (0x00014804) heading_pane_g2

0x6e8f,	// (0x0001054f) tabs_4_passive_pane_srt

0x9e1d,	// (0x000134dd) bg_passive_tab_pane_cp3_srt_ParamLimits

0x9e1d,	// (0x000134dd) bg_passive_tab_pane_cp3_srt

0xb14c,	// (0x0001480c) heading_pane_t1_ParamLimits

0xb14c,	// (0x0001480c) heading_pane_t1

0xb163,	// (0x00014823) heading_pane_t2_ParamLimits

0xb163,	// (0x00014823) heading_pane_t2

0x0001,

0xf8cc,	// (0x00018f8c) heading_pane_t_ParamLimits

0xf8cc,	// (0x00018f8c) heading_pane_t

0xac5d,	// (0x0001431d) bg_popup_heading_pane_g1

0xad0c,	// (0x000143cc) bg_popup_heading_pane_g2

0xad16,	// (0x000143d6) bg_popup_heading_pane_g3

0xad20,	// (0x000143e0) bg_popup_heading_pane_g4

0xad2a,	// (0x000143ea) bg_popup_heading_pane_g5

0xad34,	// (0x000143f4) bg_popup_heading_pane_g6

0xad3c,	// (0x000143fc) bg_popup_heading_pane_g7

0xad44,	// (0x00014404) bg_popup_heading_pane_g8

0xad4e,	// (0x0001440e) bg_popup_heading_pane_g9

0x0008,

0xf888,	// (0x00018f48) bg_popup_heading_pane_g

0xa339,	// (0x000139f9) bg_popup_sub_pane_g1

0xa349,	// (0x00013a09) bg_popup_sub_pane_g2

0xa341,	// (0x00013a01) bg_popup_sub_pane_g3

0xa359,	// (0x00013a19) bg_popup_sub_pane_g4

0xa351,	// (0x00013a11) bg_popup_sub_pane_g5

0xa361,	// (0x00013a21) bg_popup_sub_pane_g6

0xa369,	// (0x00013a29) bg_popup_sub_pane_g7

0xa379,	// (0x00013a39) bg_popup_sub_pane_g8

0xa371,	// (0x00013a31) bg_popup_sub_pane_g9

0x0008,

0xf862,	// (0x00018f22) bg_popup_sub_pane_g

0x817c,	// (0x0001183c) bg_popup_window_pane_cp5_ParamLimits

0x817c,	// (0x0001183c) bg_popup_window_pane_cp5

0x8198,	// (0x00011858) popup_note_window_g1_ParamLimits

0x8198,	// (0x00011858) popup_note_window_g1

0x81a4,	// (0x00011864) popup_note_window_t1_ParamLimits

0x81a4,	// (0x00011864) popup_note_window_t1

0x81b6,	// (0x00011876) popup_note_window_t2_ParamLimits

0x81b6,	// (0x00011876) popup_note_window_t2

0x81c8,	// (0x00011888) popup_note_window_t3_ParamLimits

0x81c8,	// (0x00011888) popup_note_window_t3

0x81da,	// (0x0001189a) popup_note_window_t4_ParamLimits

0x81da,	// (0x0001189a) popup_note_window_t4

0x8202,	// (0x000118c2) popup_note_window_t5_ParamLimits

0x8202,	// (0x000118c2) popup_note_window_t5

0x0004,

0xf585,	// (0x00018c45) popup_note_window_t_ParamLimits

0xf585,	// (0x00018c45) popup_note_window_t

0x8226,	// (0x000118e6) bg_popup_window_pane_cp6_ParamLimits

0x8226,	// (0x000118e6) bg_popup_window_pane_cp6

0xabd1,	// (0x00014291) popup_note_image_window_g1_ParamLimits

0xabd1,	// (0x00014291) popup_note_image_window_g1

0xabdd,	// (0x0001429d) popup_note_image_window_g2_ParamLimits

0xabdd,	// (0x0001429d) popup_note_image_window_g2

0x0001,

0xf856,	// (0x00018f16) popup_note_image_window_g_ParamLimits

0xf856,	// (0x00018f16) popup_note_image_window_g

0xabf6,	// (0x000142b6) popup_note_image_window_t1_ParamLimits

0xabf6,	// (0x000142b6) popup_note_image_window_t1

0xac0f,	// (0x000142cf) popup_note_image_window_t2_ParamLimits

0xac0f,	// (0x000142cf) popup_note_image_window_t2

0xac28,	// (0x000142e8) popup_note_image_window_t3_ParamLimits

0xac28,	// (0x000142e8) popup_note_image_window_t3

0x0002,

0xf85b,	// (0x00018f1b) popup_note_image_window_t_ParamLimits

0xf85b,	// (0x00018f1b) popup_note_image_window_t

0xaa92,	// (0x00014152) bg_popup_window_pane_cp7_ParamLimits

0xaa92,	// (0x00014152) bg_popup_window_pane_cp7

0xaac2,	// (0x00014182) popup_note_wait_window_g1_ParamLimits

0xaac2,	// (0x00014182) popup_note_wait_window_g1

0xaace,	// (0x0001418e) popup_note_wait_window_g2_ParamLimits

0xaace,	// (0x0001418e) popup_note_wait_window_g2

0x0002,

0xf844,	// (0x00018f04) popup_note_wait_window_g_ParamLimits

0xf844,	// (0x00018f04) popup_note_wait_window_g

0xaae6,	// (0x000141a6) popup_note_wait_window_t1_ParamLimits

0xaae6,	// (0x000141a6) popup_note_wait_window_t1

0xab0d,	// (0x000141cd) popup_note_wait_window_t2_ParamLimits

0xab0d,	// (0x000141cd) popup_note_wait_window_t2

0xab2a,	// (0x000141ea) popup_note_wait_window_t3_ParamLimits

0xab2a,	// (0x000141ea) popup_note_wait_window_t3

0xab3d,	// (0x000141fd) popup_note_wait_window_t4_ParamLimits

0xab3d,	// (0x000141fd) popup_note_wait_window_t4

0x0004,

0xf84b,	// (0x00018f0b) popup_note_wait_window_t_ParamLimits

0xf84b,	// (0x00018f0b) popup_note_wait_window_t

0xab62,	// (0x00014222) wait_bar_pane_ParamLimits

0xab62,	// (0x00014222) wait_bar_pane

0x7e07,	// (0x000114c7) wait_anim_pane

0x7e07,	// (0x000114c7) wait_border_pane

0x7dfd,	// (0x000114bd) wait_anim_pane_g1

0x7dfd,	// (0x000114bd) wait_anim_pane_g2

0x0001,

0xf704,	// (0x00018dc4) wait_anim_pane_g

0xaa36,	// (0x000140f6) wait_border_pane_g1

0xaa41,	// (0x00014101) wait_border_pane_g2

0xaa4a,	// (0x0001410a) wait_border_pane_g3

0x0002,

0xf83d,	// (0x00018efd) wait_border_pane_g

0xa8a6,	// (0x00013f66) bg_popup_window_pane_cp16_ParamLimits

0xa8a6,	// (0x00013f66) bg_popup_window_pane_cp16

0xa9a6,	// (0x00014066) indicator_popup_pane_cp4_ParamLimits

0xa9a6,	// (0x00014066) indicator_popup_pane_cp4

0xa9ba,	// (0x0001407a) popup_query_data_window_t1_ParamLimits

0xa9ba,	// (0x0001407a) popup_query_data_window_t1

0xa9cc,	// (0x0001408c) popup_query_data_window_t2_ParamLimits

0xa9cc,	// (0x0001408c) popup_query_data_window_t2

0xa9e5,	// (0x000140a5) popup_query_data_window_t3_ParamLimits

0xa9e5,	// (0x000140a5) popup_query_data_window_t3

0x0002,

0xf836,	// (0x00018ef6) popup_query_data_window_t_ParamLimits

0xf836,	// (0x00018ef6) popup_query_data_window_t

0xa9ff,	// (0x000140bf) query_popup_data_pane_ParamLimits

0xa9ff,	// (0x000140bf) query_popup_data_pane

0xaa13,	// (0x000140d3) query_popup_data_pane_cp1_ParamLimits

0xaa13,	// (0x000140d3) query_popup_data_pane_cp1

0xa8a6,	// (0x00013f66) bg_popup_window_pane_cp10_ParamLimits

0xa8a6,	// (0x00013f66) bg_popup_window_pane_cp10

0xa8d8,	// (0x00013f98) indicator_popup_pane_ParamLimits

0xa8d8,	// (0x00013f98) indicator_popup_pane

0xa8fa,	// (0x00013fba) popup_query_code_window_t1_ParamLimits

0xa8fa,	// (0x00013fba) popup_query_code_window_t1

0xa914,	// (0x00013fd4) popup_query_code_window_t2_ParamLimits

0xa914,	// (0x00013fd4) popup_query_code_window_t2

0xa95d,	// (0x0001401d) popup_query_code_window_t3_ParamLimits

0xa95d,	// (0x0001401d) popup_query_code_window_t3

0x0002,

0xf82f,	// (0x00018eef) popup_query_code_window_t_ParamLimits

0xf82f,	// (0x00018eef) popup_query_code_window_t

0xa98c,	// (0x0001404c) query_popup_pane_ParamLimits

0xa98c,	// (0x0001404c) query_popup_pane

0x8226,	// (0x000118e6) bg_popup_window_pane_cp15_ParamLimits

0x8226,	// (0x000118e6) bg_popup_window_pane_cp15

0x8244,	// (0x00011904) indicator_popup_pane_cp1_ParamLimits

0x8244,	// (0x00011904) indicator_popup_pane_cp1

0x8257,	// (0x00011917) indicator_popup_pane_cp2_ParamLimits

0x8257,	// (0x00011917) indicator_popup_pane_cp2

0x826a,	// (0x0001192a) popup_query_data_code_window_g1_ParamLimits

0x826a,	// (0x0001192a) popup_query_data_code_window_g1

0x827d,	// (0x0001193d) popup_query_data_code_window_t1_ParamLimits

0x827d,	// (0x0001193d) popup_query_data_code_window_t1

0x828f,	// (0x0001194f) popup_query_data_code_window_t2_ParamLimits

0x828f,	// (0x0001194f) popup_query_data_code_window_t2

0x82a1,	// (0x00011961) popup_query_data_code_window_t3_ParamLimits

0x82a1,	// (0x00011961) popup_query_data_code_window_t3

0x82b7,	// (0x00011977) popup_query_data_code_window_t4_ParamLimits

0x82b7,	// (0x00011977) popup_query_data_code_window_t4

0x0003,

0xf590,	// (0x00018c50) popup_query_data_code_window_t_ParamLimits

0xf590,	// (0x00018c50) popup_query_data_code_window_t

0x6b46,	// (0x00010206) list_single_midp_graphic_pane_g3

0x82cf,	// (0x0001198f) query_popup_data_pane_cp2_ParamLimits

0x82e2,	// (0x000119a2) query_popup_pane_cp2_ParamLimits

0x82e2,	// (0x000119a2) query_popup_pane_cp2

0x7e07,	// (0x000114c7) bg_popup_window_pane_cp11

0xa89e,	// (0x00013f5e) heading_pane_cp5

0x83ca,	// (0x00011a8a) listscroll_popup_info_pane

0x7e07,	// (0x000114c7) input_focus_pane_cp3

0x82f5,	// (0x000119b5) query_popup_pane_t1

0x8303,	// (0x000119c3) list_popup_info_pane_ParamLimits

0x8303,	// (0x000119c3) list_popup_info_pane

0x8312,	// (0x000119d2) listscroll_popup_info_pane_g1

0x831a,	// (0x000119da) scroll_pane_cp7

0x8324,	// (0x000119e4) popup_info_list_pane_t1_ParamLimits

0x8324,	// (0x000119e4) popup_info_list_pane_t1

0x833e,	// (0x000119fe) popup_info_list_pane_t2_ParamLimits

0x833e,	// (0x000119fe) popup_info_list_pane_t2

0x0001,

0xf599,	// (0x00018c59) popup_info_list_pane_t_ParamLimits

0xf599,	// (0x00018c59) popup_info_list_pane_t

0x7e07,	// (0x000114c7) bg_popup_window_pane_cp12

0xbd1c,	// (0x000153dc) find_popup_pane

0x7ee7,	// (0x000115a7) bg_popup_window_pane_cp3

0x8358,	// (0x00011a18) heading_pane_cp3

0x8364,	// (0x00011a24) listscroll_popup_graphic_pane

0x7e07,	// (0x000114c7) bg_popup_window_pane_cp4

0x83c0,	// (0x00011a80) heading_pane_cp4

0x83ca,	// (0x00011a8a) listscroll_popup_colour_pane

0x83d2,	// (0x00011a92) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x83d2,	// (0x00011a92) cell_large_graphic_colour_none_popup_pane

0x83e6,	// (0x00011aa6) grid_large_graphic_colour_popup_pane_ParamLimits

0x83e6,	// (0x00011aa6) grid_large_graphic_colour_popup_pane

0x840e,	// (0x00011ace) listscroll_popup_colour_pane_g1_ParamLimits

0x840e,	// (0x00011ace) listscroll_popup_colour_pane_g1

0x8425,	// (0x00011ae5) listscroll_popup_colour_pane_g2_ParamLimits

0x8425,	// (0x00011ae5) listscroll_popup_colour_pane_g2

0x843c,	// (0x00011afc) listscroll_popup_colour_pane_g3_ParamLimits

0x843c,	// (0x00011afc) listscroll_popup_colour_pane_g3

0x844c,	// (0x00011b0c) listscroll_popup_colour_pane_g4_ParamLimits

0x844c,	// (0x00011b0c) listscroll_popup_colour_pane_g4

0x0003,

0xf59e,	// (0x00018c5e) listscroll_popup_colour_pane_g_ParamLimits

0xf59e,	// (0x00018c5e) listscroll_popup_colour_pane_g

0x845b,	// (0x00011b1b) scroll_pane_cp6_ParamLimits

0x845b,	// (0x00011b1b) scroll_pane_cp6

0x846d,	// (0x00011b2d) cell_large_graphic_colour_popup_pane_ParamLimits

0x846d,	// (0x00011b2d) cell_large_graphic_colour_popup_pane

0x848c,	// (0x00011b4c) cell_large_graphic_colour_none_popup_pane_t1

0x7e07,	// (0x000114c7) grid_highlight_pane_cp5

0x849b,	// (0x00011b5b) cell_large_graphic_colour_popup_pane_g1

0x84a3,	// (0x00011b63) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a7,	// (0x00018c67) cell_large_graphic_colour_popup_pane_g

0x84ab,	// (0x00011b6b) cell_large_graphic_colour_popup_pane_g2_copy1

0x84b4,	// (0x00011b74) grid_highlight_pane_cp4

0x84bc,	// (0x00011b7c) bg_popup_window_pane_cp8_ParamLimits

0x84bc,	// (0x00011b7c) bg_popup_window_pane_cp8

0x84d7,	// (0x00011b97) popup_snote_single_text_window_g1_ParamLimits

0x84d7,	// (0x00011b97) popup_snote_single_text_window_g1

0x84e9,	// (0x00011ba9) popup_snote_single_text_window_t1_ParamLimits

0x84e9,	// (0x00011ba9) popup_snote_single_text_window_t1

0x84fc,	// (0x00011bbc) popup_snote_single_text_window_t2_ParamLimits

0x84fc,	// (0x00011bbc) popup_snote_single_text_window_t2

0x850f,	// (0x00011bcf) popup_snote_single_text_window_t3_ParamLimits

0x850f,	// (0x00011bcf) popup_snote_single_text_window_t3

0x8548,	// (0x00011c08) popup_snote_single_text_window_t4_ParamLimits

0x8548,	// (0x00011c08) popup_snote_single_text_window_t4

0x857c,	// (0x00011c3c) popup_snote_single_text_window_t5_ParamLimits

0x857c,	// (0x00011c3c) popup_snote_single_text_window_t5

0x0004,

0xf5ac,	// (0x00018c6c) popup_snote_single_text_window_t_ParamLimits

0xf5ac,	// (0x00018c6c) popup_snote_single_text_window_t

0x85ab,	// (0x00011c6b) bg_popup_window_pane_cp9_ParamLimits

0x85ab,	// (0x00011c6b) bg_popup_window_pane_cp9

0x84d7,	// (0x00011b97) popup_snote_single_graphic_window_g1_ParamLimits

0x84d7,	// (0x00011b97) popup_snote_single_graphic_window_g1

0x85b9,	// (0x00011c79) popup_snote_single_graphic_window_g2_ParamLimits

0x85b9,	// (0x00011c79) popup_snote_single_graphic_window_g2

0x0001,

0xf5b7,	// (0x00018c77) popup_snote_single_graphic_window_g_ParamLimits

0xf5b7,	// (0x00018c77) popup_snote_single_graphic_window_g

0x85c5,	// (0x00011c85) popup_snote_single_graphic_window_t1_ParamLimits

0x85c5,	// (0x00011c85) popup_snote_single_graphic_window_t1

0x85d8,	// (0x00011c98) popup_snote_single_graphic_window_t2_ParamLimits

0x85d8,	// (0x00011c98) popup_snote_single_graphic_window_t2

0x85eb,	// (0x00011cab) popup_snote_single_graphic_window_t3_ParamLimits

0x85eb,	// (0x00011cab) popup_snote_single_graphic_window_t3

0x8624,	// (0x00011ce4) popup_snote_single_graphic_window_t4_ParamLimits

0x8624,	// (0x00011ce4) popup_snote_single_graphic_window_t4

0x8658,	// (0x00011d18) popup_snote_single_graphic_window_t5_ParamLimits

0x8658,	// (0x00011d18) popup_snote_single_graphic_window_t5

0x0004,

0xf5bc,	// (0x00018c7c) popup_snote_single_graphic_window_t_ParamLimits

0xf5bc,	// (0x00018c7c) popup_snote_single_graphic_window_t

0xbc1e,	// (0x000152de) grid_graphic_popup_pane_ParamLimits

0xbc1e,	// (0x000152de) grid_graphic_popup_pane

0xbc46,	// (0x00015306) listscroll_popup_graphic_pane_g1_ParamLimits

0xbc46,	// (0x00015306) listscroll_popup_graphic_pane_g1

0xbc5a,	// (0x0001531a) listscroll_popup_graphic_pane_g2_ParamLimits

0xbc5a,	// (0x0001531a) listscroll_popup_graphic_pane_g2

0x0001,

0xf9ac,	// (0x0001906c) listscroll_popup_graphic_pane_g_ParamLimits

0xf9ac,	// (0x0001906c) listscroll_popup_graphic_pane_g

0xbc6e,	// (0x0001532e) scroll_pane_cp5

0xbbc9,	// (0x00015289) cell_graphic_popup_pane_ParamLimits

0xbbc9,	// (0x00015289) cell_graphic_popup_pane

0xbbaa,	// (0x0001526a) cell_graphic_popup_pane_g1

0xbbb2,	// (0x00015272) cell_graphic_popup_pane_g2

0x84ab,	// (0x00011b6b) cell_graphic_popup_pane_g3

0x0002,

0xf9a5,	// (0x00019065) cell_graphic_popup_pane_g

0xbbbb,	// (0x0001527b) cell_graphic_popup_pane_t2

0x84b4,	// (0x00011b74) grid_highlight_pane_cp3

0x8699,	// (0x00011d59) list_gen_pane_ParamLimits

0x8699,	// (0x00011d59) list_gen_pane

0x86cb,	// (0x00011d8b) scroll_pane

0xbb0c,	// (0x000151cc) bg_list_pane_g1_ParamLimits

0xbb0c,	// (0x000151cc) bg_list_pane_g1

0xbb27,	// (0x000151e7) bg_list_pane_g2_ParamLimits

0xbb27,	// (0x000151e7) bg_list_pane_g2

0xbb3a,	// (0x000151fa) bg_list_pane_g3_ParamLimits

0xbb3a,	// (0x000151fa) bg_list_pane_g3

0xbb4c,	// (0x0001520c) bg_list_pane_g4_ParamLimits

0xbb4c,	// (0x0001520c) bg_list_pane_g4

0xbb5e,	// (0x0001521e) bg_list_pane_g5_ParamLimits

0xbb5e,	// (0x0001521e) bg_list_pane_g5

0x0004,

0xf99a,	// (0x0001905a) bg_list_pane_g_ParamLimits

0xf99a,	// (0x0001905a) bg_list_pane_g

0xba05,	// (0x000150c5) list_double2_graphic_large_graphic_pane_ParamLimits

0xba05,	// (0x000150c5) list_double2_graphic_large_graphic_pane

0xba05,	// (0x000150c5) list_double2_graphic_pane_ParamLimits

0xba05,	// (0x000150c5) list_double2_graphic_pane

0xba05,	// (0x000150c5) list_double2_large_graphic_pane_ParamLimits

0xba05,	// (0x000150c5) list_double2_large_graphic_pane

0xba05,	// (0x000150c5) list_double2_pane_ParamLimits

0xba05,	// (0x000150c5) list_double2_pane

0xba05,	// (0x000150c5) list_double_graphic_heading_pane_ParamLimits

0xba05,	// (0x000150c5) list_double_graphic_heading_pane

0xba05,	// (0x000150c5) list_double_graphic_pane_ParamLimits

0xba05,	// (0x000150c5) list_double_graphic_pane

0xba05,	// (0x000150c5) list_double_heading_pane_ParamLimits

0xba05,	// (0x000150c5) list_double_heading_pane

0xba05,	// (0x000150c5) list_double_large_graphic_pane_ParamLimits

0xba05,	// (0x000150c5) list_double_large_graphic_pane

0xba05,	// (0x000150c5) list_double_number_pane_ParamLimits

0xba05,	// (0x000150c5) list_double_number_pane

0xba05,	// (0x000150c5) list_double_pane_ParamLimits

0xba05,	// (0x000150c5) list_double_pane

0xba05,	// (0x000150c5) list_double_time_pane_ParamLimits

0xba05,	// (0x000150c5) list_double_time_pane

0xba05,	// (0x000150c5) list_setting_number_pane_ParamLimits

0xba05,	// (0x000150c5) list_setting_number_pane

0xba05,	// (0x000150c5) list_setting_pane_ParamLimits

0xba05,	// (0x000150c5) list_setting_pane

0xba68,	// (0x00015128) list_single_2graphic_pane_ParamLimits

0xba68,	// (0x00015128) list_single_2graphic_pane

0xba68,	// (0x00015128) list_single_graphic_heading_pane_ParamLimits

0xba68,	// (0x00015128) list_single_graphic_heading_pane

0xba68,	// (0x00015128) list_single_graphic_pane_ParamLimits

0xba68,	// (0x00015128) list_single_graphic_pane

0xba68,	// (0x00015128) list_single_heading_pane_ParamLimits

0xba68,	// (0x00015128) list_single_heading_pane

0xbae9,	// (0x000151a9) list_single_large_graphic_pane_ParamLimits

0xbae9,	// (0x000151a9) list_single_large_graphic_pane

0xba68,	// (0x00015128) list_single_number_heading_pane_ParamLimits

0xba68,	// (0x00015128) list_single_number_heading_pane

0xba68,	// (0x00015128) list_single_number_pane_ParamLimits

0xba68,	// (0x00015128) list_single_number_pane

0xba68,	// (0x00015128) list_single_pane_ParamLimits

0xba68,	// (0x00015128) list_single_pane

0x7e07,	// (0x000114c7) list_highlight_pane_cp1

0x870b,	// (0x00011dcb) list_single_pane_g1_ParamLimits

0x870b,	// (0x00011dcb) list_single_pane_g1

0x8717,	// (0x00011dd7) list_single_pane_g2_ParamLimits

0x8717,	// (0x00011dd7) list_single_pane_g2

0x0001,

0xf5ce,	// (0x00018c8e) list_single_pane_g_ParamLimits

0xf5ce,	// (0x00018c8e) list_single_pane_g

0xb9be,	// (0x0001507e) list_single_pane_t1_ParamLimits

0xb9be,	// (0x0001507e) list_single_pane_t1

0x870b,	// (0x00011dcb) list_single_number_pane_g1_ParamLimits

0x870b,	// (0x00011dcb) list_single_number_pane_g1

0x8717,	// (0x00011dd7) list_single_number_pane_g2_ParamLimits

0x8717,	// (0x00011dd7) list_single_number_pane_g2

0x0001,

0xf5ce,	// (0x00018c8e) list_single_number_pane_g_ParamLimits

0xf5ce,	// (0x00018c8e) list_single_number_pane_g

0xa2c7,	// (0x00013987) list_single_number_pane_t1_ParamLimits

0xa2c7,	// (0x00013987) list_single_number_pane_t1

0xb76a,	// (0x00014e2a) list_single_number_pane_t2_ParamLimits

0xb76a,	// (0x00014e2a) list_single_number_pane_t2

0x0001,

0xf95b,	// (0x0001901b) list_single_number_pane_t_ParamLimits

0xf95b,	// (0x0001901b) list_single_number_pane_t

0x86ff,	// (0x00011dbf) list_single_graphic_pane_g1_ParamLimits

0x86ff,	// (0x00011dbf) list_single_graphic_pane_g1

0x870b,	// (0x00011dcb) list_single_graphic_pane_g2_ParamLimits

0x870b,	// (0x00011dcb) list_single_graphic_pane_g2

0x8717,	// (0x00011dd7) list_single_graphic_pane_g3_ParamLimits

0x8717,	// (0x00011dd7) list_single_graphic_pane_g3

0x0002,

0xf5c7,	// (0x00018c87) list_single_graphic_pane_g_ParamLimits

0xf5c7,	// (0x00018c87) list_single_graphic_pane_g

0x8723,	// (0x00011de3) list_single_graphic_pane_t1_ParamLimits

0x8723,	// (0x00011de3) list_single_graphic_pane_t1

0x870b,	// (0x00011dcb) list_single_heading_pane_g1_ParamLimits

0x870b,	// (0x00011dcb) list_single_heading_pane_g1

0x8717,	// (0x00011dd7) list_single_heading_pane_g2_ParamLimits

0x8717,	// (0x00011dd7) list_single_heading_pane_g2

0x0001,

0xf5ce,	// (0x00018c8e) list_single_heading_pane_g_ParamLimits

0xf5ce,	// (0x00018c8e) list_single_heading_pane_g

0x8739,	// (0x00011df9) list_single_heading_pane_t1_ParamLimits

0x8739,	// (0x00011df9) list_single_heading_pane_t1

0x874f,	// (0x00011e0f) list_single_heading_pane_t2_ParamLimits

0x874f,	// (0x00011e0f) list_single_heading_pane_t2

0x0001,

0xf5d3,	// (0x00018c93) list_single_heading_pane_t_ParamLimits

0xf5d3,	// (0x00018c93) list_single_heading_pane_t

0x870b,	// (0x00011dcb) list_single_number_heading_pane_g1_ParamLimits

0x870b,	// (0x00011dcb) list_single_number_heading_pane_g1

0x8717,	// (0x00011dd7) list_single_number_heading_pane_g2_ParamLimits

0x8717,	// (0x00011dd7) list_single_number_heading_pane_g2

0x0001,

0xf5ce,	// (0x00018c8e) list_single_number_heading_pane_g_ParamLimits

0xf5ce,	// (0x00018c8e) list_single_number_heading_pane_g

0x8739,	// (0x00011df9) list_single_number_heading_pane_t1_ParamLimits

0x8739,	// (0x00011df9) list_single_number_heading_pane_t1

0x8761,	// (0x00011e21) list_single_number_heading_pane_t2_ParamLimits

0x8761,	// (0x00011e21) list_single_number_heading_pane_t2

0x8773,	// (0x00011e33) list_single_number_heading_pane_t3_ParamLimits

0x8773,	// (0x00011e33) list_single_number_heading_pane_t3

0x0002,

0xf5d8,	// (0x00018c98) list_single_number_heading_pane_t_ParamLimits

0xf5d8,	// (0x00018c98) list_single_number_heading_pane_t

0x8785,	// (0x00011e45) list_single_graphic_heading_pane_g1_ParamLimits

0x8785,	// (0x00011e45) list_single_graphic_heading_pane_g1

0x8791,	// (0x00011e51) list_single_graphic_heading_pane_g4_ParamLimits

0x8791,	// (0x00011e51) list_single_graphic_heading_pane_g4

0x8717,	// (0x00011dd7) list_single_graphic_heading_pane_g5_ParamLimits

0x8717,	// (0x00011dd7) list_single_graphic_heading_pane_g5

0x0002,

0xf5df,	// (0x00018c9f) list_single_graphic_heading_pane_g_ParamLimits

0xf5df,	// (0x00018c9f) list_single_graphic_heading_pane_g

0x8739,	// (0x00011df9) list_single_graphic_heading_pane_t1_ParamLimits

0x8739,	// (0x00011df9) list_single_graphic_heading_pane_t1

0x87a2,	// (0x00011e62) list_single_graphic_heading_pane_t2_ParamLimits

0x87a2,	// (0x00011e62) list_single_graphic_heading_pane_t2

0x0001,

0xf5e6,	// (0x00018ca6) list_single_graphic_heading_pane_t_ParamLimits

0xf5e6,	// (0x00018ca6) list_single_graphic_heading_pane_t

0x87b4,	// (0x00011e74) list_single_large_graphic_pane_g1_ParamLimits

0x87b4,	// (0x00011e74) list_single_large_graphic_pane_g1

0x87c0,	// (0x00011e80) list_single_large_graphic_pane_g2_ParamLimits

0x87c0,	// (0x00011e80) list_single_large_graphic_pane_g2

0x87cc,	// (0x00011e8c) list_single_large_graphic_pane_g3_ParamLimits

0x87cc,	// (0x00011e8c) list_single_large_graphic_pane_g3

0x0002,

0xf5eb,	// (0x00018cab) list_single_large_graphic_pane_g_ParamLimits

0xf5eb,	// (0x00018cab) list_single_large_graphic_pane_g

0xaa41,	// (0x00014101) wait_border_pane_g2_copy1

0x87d8,	// (0x00011e98) list_single_large_graphic_pane_g4_cp2

0x87e0,	// (0x00011ea0) list_single_large_graphic_pane_t1_ParamLimits

0x87e0,	// (0x00011ea0) list_single_large_graphic_pane_t1

0x87f6,	// (0x00011eb6) list_double_pane_g1_ParamLimits

0x87f6,	// (0x00011eb6) list_double_pane_g1

0x8802,	// (0x00011ec2) list_double_pane_g2_ParamLimits

0x8802,	// (0x00011ec2) list_double_pane_g2

0x0001,

0xf5f2,	// (0x00018cb2) list_double_pane_g_ParamLimits

0xf5f2,	// (0x00018cb2) list_double_pane_g

0x880e,	// (0x00011ece) list_double_pane_t1_ParamLimits

0x880e,	// (0x00011ece) list_double_pane_t1

0x8824,	// (0x00011ee4) list_double_pane_t2_ParamLimits

0x8824,	// (0x00011ee4) list_double_pane_t2

0x0001,

0xf5f7,	// (0x00018cb7) list_double_pane_t_ParamLimits

0xf5f7,	// (0x00018cb7) list_double_pane_t

0x8836,	// (0x00011ef6) list_double2_pane_g1_ParamLimits

0x8836,	// (0x00011ef6) list_double2_pane_g1

0x8847,	// (0x00011f07) list_double2_pane_g2_ParamLimits

0x8847,	// (0x00011f07) list_double2_pane_g2

0x0001,

0xf5fc,	// (0x00018cbc) list_double2_pane_g_ParamLimits

0xf5fc,	// (0x00018cbc) list_double2_pane_g

0x8853,	// (0x00011f13) list_double2_pane_t1_ParamLimits

0x8853,	// (0x00011f13) list_double2_pane_t1

0x8869,	// (0x00011f29) list_double2_pane_t2_ParamLimits

0x8869,	// (0x00011f29) list_double2_pane_t2

0x0001,

0xf601,	// (0x00018cc1) list_double2_pane_t_ParamLimits

0xf601,	// (0x00018cc1) list_double2_pane_t

0x87f6,	// (0x00011eb6) list_double_number_pane_g1_ParamLimits

0x87f6,	// (0x00011eb6) list_double_number_pane_g1

0x8802,	// (0x00011ec2) list_double_number_pane_g2_ParamLimits

0x8802,	// (0x00011ec2) list_double_number_pane_g2

0x0001,

0xf5f2,	// (0x00018cb2) list_double_number_pane_g_ParamLimits

0xf5f2,	// (0x00018cb2) list_double_number_pane_g

0x887b,	// (0x00011f3b) list_double_number_pane_t1_ParamLimits

0x887b,	// (0x00011f3b) list_double_number_pane_t1

0x888d,	// (0x00011f4d) list_double_number_pane_t2_ParamLimits

0x888d,	// (0x00011f4d) list_double_number_pane_t2

0x88a3,	// (0x00011f63) list_double_number_pane_t3_ParamLimits

0x88a3,	// (0x00011f63) list_double_number_pane_t3

0x0002,

0xf606,	// (0x00018cc6) list_double_number_pane_t_ParamLimits

0xf606,	// (0x00018cc6) list_double_number_pane_t

0x88b5,	// (0x00011f75) list_double_graphic_pane_g1_ParamLimits

0x88b5,	// (0x00011f75) list_double_graphic_pane_g1

0x88c1,	// (0x00011f81) list_double_graphic_pane_g2_ParamLimits

0x88c1,	// (0x00011f81) list_double_graphic_pane_g2

0x88d0,	// (0x00011f90) list_double_graphic_pane_g3_ParamLimits

0x88d0,	// (0x00011f90) list_double_graphic_pane_g3

0x0003,

0xf60d,	// (0x00018ccd) list_double_graphic_pane_g_ParamLimits

0xf60d,	// (0x00018ccd) list_double_graphic_pane_g

0x88e8,	// (0x00011fa8) list_double_graphic_pane_t1_ParamLimits

0x88e8,	// (0x00011fa8) list_double_graphic_pane_t1

0x88fe,	// (0x00011fbe) list_double_graphic_pane_t2_ParamLimits

0x88fe,	// (0x00011fbe) list_double_graphic_pane_t2

0x0001,

0xf616,	// (0x00018cd6) list_double_graphic_pane_t_ParamLimits

0xf616,	// (0x00018cd6) list_double_graphic_pane_t

0x8910,	// (0x00011fd0) list_double2_graphic_pane_g1_ParamLimits

0x8910,	// (0x00011fd0) list_double2_graphic_pane_g1

0x891c,	// (0x00011fdc) list_double2_graphic_pane_g2_ParamLimits

0x891c,	// (0x00011fdc) list_double2_graphic_pane_g2

0x8847,	// (0x00011f07) list_double2_graphic_pane_g3_ParamLimits

0x8847,	// (0x00011f07) list_double2_graphic_pane_g3

0x0002,

0xf61b,	// (0x00018cdb) list_double2_graphic_pane_g_ParamLimits

0xf61b,	// (0x00018cdb) list_double2_graphic_pane_g

0x8928,	// (0x00011fe8) list_double2_graphic_pane_t1_ParamLimits

0x8928,	// (0x00011fe8) list_double2_graphic_pane_t1

0x893e,	// (0x00011ffe) list_double2_graphic_pane_t2_ParamLimits

0x893e,	// (0x00011ffe) list_double2_graphic_pane_t2

0x0001,

0xf622,	// (0x00018ce2) list_double2_graphic_pane_t_ParamLimits

0xf622,	// (0x00018ce2) list_double2_graphic_pane_t

0x8950,	// (0x00012010) list_double_large_graphic_pane_g1_ParamLimits

0x8950,	// (0x00012010) list_double_large_graphic_pane_g1

0x896f,	// (0x0001202f) list_double_large_graphic_pane_g2_ParamLimits

0x896f,	// (0x0001202f) list_double_large_graphic_pane_g2

0x8802,	// (0x00011ec2) list_double_large_graphic_pane_g3_ParamLimits

0x8802,	// (0x00011ec2) list_double_large_graphic_pane_g3

0x8980,	// (0x00012040) list_double_large_graphic_pane_g4_ParamLimits

0x8980,	// (0x00012040) list_double_large_graphic_pane_g4

0x0004,

0xf627,	// (0x00018ce7) list_double_large_graphic_pane_g_ParamLimits

0xf627,	// (0x00018ce7) list_double_large_graphic_pane_g

0x89a8,	// (0x00012068) list_double_large_graphic_pane_t1_ParamLimits

0x89a8,	// (0x00012068) list_double_large_graphic_pane_t1

0x89c1,	// (0x00012081) list_double_large_graphic_pane_t2_ParamLimits

0x89c1,	// (0x00012081) list_double_large_graphic_pane_t2

0x0001,

0xf632,	// (0x00018cf2) list_double_large_graphic_pane_t_ParamLimits

0xf632,	// (0x00018cf2) list_double_large_graphic_pane_t

0x89d3,	// (0x00012093) list_double2_large_graphic_pane_g1_ParamLimits

0x89d3,	// (0x00012093) list_double2_large_graphic_pane_g1

0x8836,	// (0x00011ef6) list_double2_large_graphic_pane_g2_ParamLimits

0x8836,	// (0x00011ef6) list_double2_large_graphic_pane_g2

0x8847,	// (0x00011f07) list_double2_large_graphic_pane_g3_ParamLimits

0x8847,	// (0x00011f07) list_double2_large_graphic_pane_g3

0x0002,

0xf637,	// (0x00018cf7) list_double2_large_graphic_pane_g_ParamLimits

0xf637,	// (0x00018cf7) list_double2_large_graphic_pane_g

0x89df,	// (0x0001209f) list_double2_large_graphic_pane_t1_ParamLimits

0x89df,	// (0x0001209f) list_double2_large_graphic_pane_t1

0x89f5,	// (0x000120b5) list_double2_large_graphic_pane_t2_ParamLimits

0x89f5,	// (0x000120b5) list_double2_large_graphic_pane_t2

0x0001,

0xf63e,	// (0x00018cfe) list_double2_large_graphic_pane_t_ParamLimits

0xf63e,	// (0x00018cfe) list_double2_large_graphic_pane_t

0x8a07,	// (0x000120c7) list_double_heading_pane_g1_ParamLimits

0x8a07,	// (0x000120c7) list_double_heading_pane_g1

0x8a18,	// (0x000120d8) list_double_heading_pane_g2_ParamLimits

0x8a18,	// (0x000120d8) list_double_heading_pane_g2

0x0001,

0xf643,	// (0x00018d03) list_double_heading_pane_g_ParamLimits

0xf643,	// (0x00018d03) list_double_heading_pane_g

0x8a24,	// (0x000120e4) list_double_heading_pane_t1_ParamLimits

0x8a24,	// (0x000120e4) list_double_heading_pane_t1

0x8869,	// (0x00011f29) list_double_heading_pane_t2_ParamLimits

0x8869,	// (0x00011f29) list_double_heading_pane_t2

0x0001,

0xf648,	// (0x00018d08) list_double_heading_pane_t_ParamLimits

0xf648,	// (0x00018d08) list_double_heading_pane_t

0x8a3a,	// (0x000120fa) list_double_graphic_heading_pane_g1_ParamLimits

0x8a3a,	// (0x000120fa) list_double_graphic_heading_pane_g1

0x8a07,	// (0x000120c7) list_double_graphic_heading_pane_g2_ParamLimits

0x8a07,	// (0x000120c7) list_double_graphic_heading_pane_g2

0x8a18,	// (0x000120d8) list_double_graphic_heading_pane_g3_ParamLimits

0x8a18,	// (0x000120d8) list_double_graphic_heading_pane_g3

0x0002,

0xf64d,	// (0x00018d0d) list_double_graphic_heading_pane_g_ParamLimits

0xf64d,	// (0x00018d0d) list_double_graphic_heading_pane_g

0x8a46,	// (0x00012106) list_double_graphic_heading_pane_t1_ParamLimits

0x8a46,	// (0x00012106) list_double_graphic_heading_pane_t1

0x893e,	// (0x00011ffe) list_double_graphic_heading_pane_t2_ParamLimits

0x893e,	// (0x00011ffe) list_double_graphic_heading_pane_t2

0x0001,

0xf654,	// (0x00018d14) list_double_graphic_heading_pane_t_ParamLimits

0xf654,	// (0x00018d14) list_double_graphic_heading_pane_t

0x896f,	// (0x0001202f) list_double_time_pane_g1_ParamLimits

0x896f,	// (0x0001202f) list_double_time_pane_g1

0x8802,	// (0x00011ec2) list_double_time_pane_g2_ParamLimits

0x8802,	// (0x00011ec2) list_double_time_pane_g2

0x0001,

0xf659,	// (0x00018d19) list_double_time_pane_g_ParamLimits

0xf659,	// (0x00018d19) list_double_time_pane_g

0x8a5c,	// (0x0001211c) list_double_time_pane_t1_ParamLimits

0x8a5c,	// (0x0001211c) list_double_time_pane_t1

0x8a72,	// (0x00012132) list_double_time_pane_t2_ParamLimits

0x8a72,	// (0x00012132) list_double_time_pane_t2

0x8a84,	// (0x00012144) list_double_time_pane_t3_ParamLimits

0x8a84,	// (0x00012144) list_double_time_pane_t3

0x8a96,	// (0x00012156) list_double_time_pane_t4_ParamLimits

0x8a96,	// (0x00012156) list_double_time_pane_t4

0x0003,

0xf65e,	// (0x00018d1e) list_double_time_pane_t_ParamLimits

0xf65e,	// (0x00018d1e) list_double_time_pane_t

0x891c,	// (0x00011fdc) list_setting_pane_g1_ParamLimits

0x891c,	// (0x00011fdc) list_setting_pane_g1

0x8847,	// (0x00011f07) list_setting_pane_g2_ParamLimits

0x8847,	// (0x00011f07) list_setting_pane_g2

0x0001,

0xf667,	// (0x00018d27) list_setting_pane_g_ParamLimits

0xf667,	// (0x00018d27) list_setting_pane_g

0x8aa8,	// (0x00012168) list_setting_pane_t1_ParamLimits

0x8aa8,	// (0x00012168) list_setting_pane_t1

0x8abf,	// (0x0001217f) list_setting_pane_t2_ParamLimits

0x8abf,	// (0x0001217f) list_setting_pane_t2

0x0002,

0xf66c,	// (0x00018d2c) list_setting_pane_t_ParamLimits

0xf66c,	// (0x00018d2c) list_setting_pane_t

0x8afc,	// (0x000121bc) set_value_pane_cp_ParamLimits

0x8afc,	// (0x000121bc) set_value_pane_cp

0x891c,	// (0x00011fdc) list_setting_number_pane_g1_ParamLimits

0x891c,	// (0x00011fdc) list_setting_number_pane_g1

0x8847,	// (0x00011f07) list_setting_number_pane_g2_ParamLimits

0x8847,	// (0x00011f07) list_setting_number_pane_g2

0x0001,

0xf667,	// (0x00018d27) list_setting_number_pane_g_ParamLimits

0xf667,	// (0x00018d27) list_setting_number_pane_g

0x8b08,	// (0x000121c8) list_setting_number_pane_t1_ParamLimits

0x8b08,	// (0x000121c8) list_setting_number_pane_t1

0x8b1c,	// (0x000121dc) list_setting_number_pane_t2_ParamLimits

0x8b1c,	// (0x000121dc) list_setting_number_pane_t2

0x8b33,	// (0x000121f3) list_setting_number_pane_t3_ParamLimits

0x8b33,	// (0x000121f3) list_setting_number_pane_t3

0x0003,

0xf673,	// (0x00018d33) list_setting_number_pane_t_ParamLimits

0xf673,	// (0x00018d33) list_setting_number_pane_t

0x8afc,	// (0x000121bc) set_value_pane_ParamLimits

0x8afc,	// (0x000121bc) set_value_pane

0x8b76,	// (0x00012236) bg_set_opt_pane_ParamLimits

0x8b76,	// (0x00012236) bg_set_opt_pane

0x8b97,	// (0x00012257) set_value_pane_t1

0x8ba5,	// (0x00012265) slider_set_pane_cp3

0x8bae,	// (0x0001226e) volume_small_pane_cp

0x8bb7,	// (0x00012277) list_form_gen_pane

0x8bc0,	// (0x00012280) scroll_pane_cp8

0x8bd1,	// (0x00012291) form_field_data_pane_ParamLimits

0x8bd1,	// (0x00012291) form_field_data_pane

0x8bf1,	// (0x000122b1) form_field_data_wide_pane_ParamLimits

0x8bf1,	// (0x000122b1) form_field_data_wide_pane

0x8c12,	// (0x000122d2) form_field_popup_pane_ParamLimits

0x8c12,	// (0x000122d2) form_field_popup_pane

0x8c30,	// (0x000122f0) form_field_popup_wide_pane_ParamLimits

0x8c30,	// (0x000122f0) form_field_popup_wide_pane

0x8c4d,	// (0x0001230d) form_field_slider_pane_ParamLimits

0x8c4d,	// (0x0001230d) form_field_slider_pane

0x8c60,	// (0x00012320) form_field_slider_wide_pane_ParamLimits

0x8c60,	// (0x00012320) form_field_slider_wide_pane

0x8c73,	// (0x00012333) data_form_pane

0x8c89,	// (0x00012349) form_field_data_pane_t1

0x8ca3,	// (0x00012363) input_focus_pane

0x8cb1,	// (0x00012371) data_form_wide_pane

0x8cdd,	// (0x0001239d) form_field_data_wide_pane_t1

0x84c9,	// (0x00011b89) input_focus_pane_cp6

0x8cfc,	// (0x000123bc) form_field_popup_pane_t1

0x8ca3,	// (0x00012363) input_focus_pane_cp7

0x8d16,	// (0x000123d6) list_form_pane

0x8d2a,	// (0x000123ea) form_field_popup_wide_pane_t1

0x8ca3,	// (0x00012363) input_focus_pane_cp8

0x8d3f,	// (0x000123ff) list_form_wide_pane

0x8d56,	// (0x00012416) form_field_slider_pane_t1_ParamLimits

0x8d56,	// (0x00012416) form_field_slider_pane_t1

0x8d6a,	// (0x0001242a) form_field_slider_pane_t2_ParamLimits

0x8d6a,	// (0x0001242a) form_field_slider_pane_t2

0x0001,

0xf683,	// (0x00018d43) form_field_slider_pane_t_ParamLimits

0xf683,	// (0x00018d43) form_field_slider_pane_t

0x817c,	// (0x0001183c) input_focus_pane_cp9_ParamLimits

0x817c,	// (0x0001183c) input_focus_pane_cp9

0x8d7c,	// (0x0001243c) slider_cont_pane_ParamLimits

0x8d7c,	// (0x0001243c) slider_cont_pane

0x8d90,	// (0x00012450) form_field_slider_wide_pane_t1_ParamLimits

0x8d90,	// (0x00012450) form_field_slider_wide_pane_t1

0x8da2,	// (0x00012462) form_field_slider_wide_pane_t2_ParamLimits

0x8da2,	// (0x00012462) form_field_slider_wide_pane_t2

0x0001,

0xf688,	// (0x00018d48) form_field_slider_wide_pane_t_ParamLimits

0xf688,	// (0x00018d48) form_field_slider_wide_pane_t

0x817c,	// (0x0001183c) input_focus_pane_cp10_ParamLimits

0x817c,	// (0x0001183c) input_focus_pane_cp10

0x8db4,	// (0x00012474) slider_cont_pane_cp1_ParamLimits

0x8db4,	// (0x00012474) slider_cont_pane_cp1

0x8dc8,	// (0x00012488) slider_form_pane_cp

0x8dd0,	// (0x00012490) input_focus_pane_g1

0x8dd8,	// (0x00012498) input_focus_pane_g2

0x8de0,	// (0x000124a0) input_focus_pane_g3

0x8de8,	// (0x000124a8) input_focus_pane_g4

0x8df0,	// (0x000124b0) input_focus_pane_g5

0x8df8,	// (0x000124b8) input_focus_pane_g6

0x8e00,	// (0x000124c0) input_focus_pane_g7

0x8e08,	// (0x000124c8) input_focus_pane_g8

0x8e10,	// (0x000124d0) input_focus_pane_g9

0x7dfd,	// (0x000114bd) input_focus_pane_g10

0x0009,

0xf68d,	// (0x00018d4d) input_focus_pane_g

0xaa4a,	// (0x0001410a) wait_border_pane_g3_copy1

0x8e18,	// (0x000124d8) data_form_pane_t1

0x7dfd,	// (0x000114bd) wait_anim_pane_g1_copy1

0xb9a1,	// (0x00015061) data_form_wide_pane_t1

0x8e33,	// (0x000124f3) list_form_graphic_pane_cp_ParamLimits

0x8e33,	// (0x000124f3) list_form_graphic_pane_cp

0xb976,	// (0x00015036) slider_form_pane_g1

0xb97f,	// (0x0001503f) slider_form_pane_g2

0x0006,

0xf98b,	// (0x0001904b) slider_form_pane_g

0x8e33,	// (0x000124f3) list_form_graphic_pane_ParamLimits

0x8e33,	// (0x000124f3) list_form_graphic_pane

0x8e4a,	// (0x0001250a) list_form_graphic_pane_g1

0x8e52,	// (0x00012512) list_form_graphic_pane_t1_ParamLimits

0x8e52,	// (0x00012512) list_form_graphic_pane_t1

0x7ee7,	// (0x000115a7) list_highlight_pane_cp5_ParamLimits

0x7ee7,	// (0x000115a7) list_highlight_pane_cp5

0x8e67,	// (0x00012527) find_pane_g1

0x8e70,	// (0x00012530) input_find_pane

0x8e79,	// (0x00012539) input_find_pane_g1_ParamLimits

0x8e79,	// (0x00012539) input_find_pane_g1

0x8e85,	// (0x00012545) input_find_pane_t1_ParamLimits

0x8e85,	// (0x00012545) input_find_pane_t1

0x8e9a,	// (0x0001255a) input_find_pane_t2_ParamLimits

0x8e9a,	// (0x0001255a) input_find_pane_t2

0x0001,

0xf6a2,	// (0x00018d62) input_find_pane_t_ParamLimits

0xf6a2,	// (0x00018d62) input_find_pane_t

0x8eaf,	// (0x0001256f) input_focus_pane_cp5_ParamLimits

0x8eaf,	// (0x0001256f) input_focus_pane_cp5

0x8ec9,	// (0x00012589) bg_popup_window_pane_cp2_ParamLimits

0x8ec9,	// (0x00012589) bg_popup_window_pane_cp2

0x8ed6,	// (0x00012596) listscroll_menu_pane_ParamLimits

0x8ed6,	// (0x00012596) listscroll_menu_pane

0x8ee2,	// (0x000125a2) popup_submenu_window_ParamLimits

0x8ee2,	// (0x000125a2) popup_submenu_window

0x8f0a,	// (0x000125ca) find_popup_pane_g1

0x8f12,	// (0x000125d2) input_popup_find_pane_cp

0x8eaf,	// (0x0001256f) input_focus_pane_cp4_ParamLimits

0x8eaf,	// (0x0001256f) input_focus_pane_cp4

0x8f2a,	// (0x000125ea) input_popup_find_pane_t1_ParamLimits

0x8f2a,	// (0x000125ea) input_popup_find_pane_t1

0x7e07,	// (0x000114c7) bg_popup_sub_pane_cp

0x8f58,	// (0x00012618) listscroll_popup_sub_pane

0x8f60,	// (0x00012620) list_submenu_pane_ParamLimits

0x8f60,	// (0x00012620) list_submenu_pane

0x8f71,	// (0x00012631) scroll_pane_cp4

0x8f79,	// (0x00012639) list_single_popup_submenu_pane_ParamLimits

0x8f79,	// (0x00012639) list_single_popup_submenu_pane

0x8f8d,	// (0x0001264d) list_single_popup_submenu_pane_g1

0x8f95,	// (0x00012655) list_single_popup_submenu_pane_t1_ParamLimits

0x8f95,	// (0x00012655) list_single_popup_submenu_pane_t1

0x7ee7,	// (0x000115a7) bg_active_tab_pane_cp1_ParamLimits

0x7ee7,	// (0x000115a7) bg_active_tab_pane_cp1

0x8faa,	// (0x0001266a) tabs_2_active_pane_g1

0x8fb2,	// (0x00012672) tabs_2_active_pane_t1

0x7ee7,	// (0x000115a7) bg_passive_tab_pane_cp1_ParamLimits

0x7ee7,	// (0x000115a7) bg_passive_tab_pane_cp1

0x8faa,	// (0x0001266a) tabs_2_passive_pane_g1

0x8fb2,	// (0x00012672) tabs_2_passive_pane_t1

0x8fc4,	// (0x00012684) bg_active_tab_pane_cp4

0x8fd2,	// (0x00012692) tabs_2_long_active_pane_t1

0x8fe5,	// (0x000126a5) bg_passive_tab_pane_cp4

0x6b4e,	// (0x0001020e) list_single_midp_graphic_pane_g4_ParamLimits

0x8fc4,	// (0x00012684) bg_active_tab_pane_cp5

0x8ff1,	// (0x000126b1) tabs_3_long_active_pane_t1

0x8fe5,	// (0x000126a5) bg_passive_tab_pane_cp5

0x6b4e,	// (0x0001020e) list_single_midp_graphic_pane_g4

0x7ee7,	// (0x000115a7) bg_popup_window_pane_cp13_ParamLimits

0x7ee7,	// (0x000115a7) bg_popup_window_pane_cp13

0x900c,	// (0x000126cc) listscroll_popup_fast_pane_ParamLimits

0x900c,	// (0x000126cc) listscroll_popup_fast_pane

0x9018,	// (0x000126d8) grid_popup_fast_pane_ParamLimits

0x9018,	// (0x000126d8) grid_popup_fast_pane

0x902a,	// (0x000126ea) scroll_pane_cp9_ParamLimits

0x902a,	// (0x000126ea) scroll_pane_cp9

0xd83c,	// (0x00016efc) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xd83c,	// (0x00016efc) list_single_graphic_hl_pane_t1_cp2

0x904e,	// (0x0001270e) input_focus_pane_cp20_ParamLimits

0x904e,	// (0x0001270e) input_focus_pane_cp20

0x905c,	// (0x0001271c) query_popup_data_pane_t1_ParamLimits

0x905c,	// (0x0001271c) query_popup_data_pane_t1

0x906f,	// (0x0001272f) query_popup_data_pane_t2_ParamLimits

0x906f,	// (0x0001272f) query_popup_data_pane_t2

0x90b5,	// (0x00012775) query_popup_data_pane_t3_ParamLimits

0x90b5,	// (0x00012775) query_popup_data_pane_t3

0x90f6,	// (0x000127b6) query_popup_data_pane_t4_ParamLimits

0x90f6,	// (0x000127b6) query_popup_data_pane_t4

0x9132,	// (0x000127f2) query_popup_data_pane_t5_ParamLimits

0x9132,	// (0x000127f2) query_popup_data_pane_t5

0x0004,

0xf6a7,	// (0x00018d67) query_popup_data_pane_t_ParamLimits

0xf6a7,	// (0x00018d67) query_popup_data_pane_t

0x8dd0,	// (0x00012490) bg_set_opt_pane_g1

0x8dd8,	// (0x00012498) bg_set_opt_pane_g2

0x8de0,	// (0x000124a0) bg_set_opt_pane_g3

0x8de8,	// (0x000124a8) bg_set_opt_pane_g4

0x8df0,	// (0x000124b0) bg_set_opt_pane_g5

0x8df8,	// (0x000124b8) bg_set_opt_pane_g6

0x8e00,	// (0x000124c0) bg_set_opt_pane_g7

0x8e08,	// (0x000124c8) bg_set_opt_pane_g8

0x8e10,	// (0x000124d0) bg_set_opt_pane_g9

0x0008,

0xf6b2,	// (0x00018d72) bg_set_opt_pane_g

0x6176,	// (0x0000f836) control_top_pane_stacon_ParamLimits

0x6176,	// (0x0000f836) control_top_pane_stacon

0x61c9,	// (0x0000f889) signal_pane_stacon_ParamLimits

0x61c9,	// (0x0000f889) signal_pane_stacon

0x977f,	// (0x00012e3f) stacon_top_pane_g1_ParamLimits

0x977f,	// (0x00012e3f) stacon_top_pane_g1

0x61ee,	// (0x0000f8ae) title_pane_stacon_ParamLimits

0x61ee,	// (0x0000f8ae) title_pane_stacon

0x6218,	// (0x0000f8d8) uni_indicator_pane_stacon_ParamLimits

0x6218,	// (0x0000f8d8) uni_indicator_pane_stacon

0x622d,	// (0x0000f8ed) battery_pane_stacon_ParamLimits

0x622d,	// (0x0000f8ed) battery_pane_stacon

0x6271,	// (0x0000f931) control_bottom_pane_stacon_ParamLimits

0x6271,	// (0x0000f931) control_bottom_pane_stacon

0x6294,	// (0x0000f954) navi_pane_stacon_ParamLimits

0x6294,	// (0x0000f954) navi_pane_stacon

0x97a1,	// (0x00012e61) stacon_bottom_pane_g1_ParamLimits

0x97a1,	// (0x00012e61) stacon_bottom_pane_g1

0x5ee0,	// (0x0000f5a0) aid_levels_signal_lsc_ParamLimits

0x5ee0,	// (0x0000f5a0) aid_levels_signal_lsc

0x5ef7,	// (0x0000f5b7) signal_pane_stacon_g1_ParamLimits

0x5ef7,	// (0x0000f5b7) signal_pane_stacon_g1

0x5f0b,	// (0x0000f5cb) signal_pane_stacon_g2_ParamLimits

0x5f0b,	// (0x0000f5cb) signal_pane_stacon_g2

0x0001,

0xf6c5,	// (0x00018d85) signal_pane_stacon_g_ParamLimits

0xf6c5,	// (0x00018d85) signal_pane_stacon_g

0x5f40,	// (0x0000f600) title_pane_stacon_t1_ParamLimits

0x5f40,	// (0x0000f600) title_pane_stacon_t1

0x9176,	// (0x00012836) uni_indicator_pane_stacon_g1

0x9180,	// (0x00012840) uni_indicator_pane_stacon_g2

0x918a,	// (0x0001284a) uni_indicator_pane_stacon_g3

0x9194,	// (0x00012854) uni_indicator_pane_stacon_g4

0x0003,

0xf6d1,	// (0x00018d91) uni_indicator_pane_stacon_g

0x5f65,	// (0x0000f625) control_top_pane_stacon_g1

0x5f6d,	// (0x0000f62d) control_top_pane_stacon_t1_ParamLimits

0x5f6d,	// (0x0000f62d) control_top_pane_stacon_t1

0x5fa4,	// (0x0000f664) aid_levels_battery_lsc_ParamLimits

0x5fa4,	// (0x0000f664) aid_levels_battery_lsc

0x5fbc,	// (0x0000f67c) battery_pane_stacon_g1_ParamLimits

0x5fbc,	// (0x0000f67c) battery_pane_stacon_g1

0x5fcf,	// (0x0000f68f) battery_pane_stacon_g2_ParamLimits

0x5fcf,	// (0x0000f68f) battery_pane_stacon_g2

0x0001,

0xf6da,	// (0x00018d9a) battery_pane_stacon_g_ParamLimits

0xf6da,	// (0x00018d9a) battery_pane_stacon_g

0x600d,	// (0x0000f6cd) navi_icon_pane_stacon

0x6021,	// (0x0000f6e1) navi_navi_pane_stacon

0x600d,	// (0x0000f6cd) navi_text_pane_stacon

0x5f65,	// (0x0000f625) control_bottom_pane_stacon_g1

0x6035,	// (0x0000f6f5) control_bottom_pane_stacon_t1_ParamLimits

0x6035,	// (0x0000f6f5) control_bottom_pane_stacon_t1

0x91b8,	// (0x00012878) grid_app_pane_ParamLimits

0x91b8,	// (0x00012878) grid_app_pane

0x91da,	// (0x0001289a) scroll_pane_cp15_ParamLimits

0x91da,	// (0x0001289a) scroll_pane_cp15

0x91ed,	// (0x000128ad) cell_app_pane_ParamLimits

0x91ed,	// (0x000128ad) cell_app_pane

0x9213,	// (0x000128d3) cell_app_pane_g1_ParamLimits

0x9213,	// (0x000128d3) cell_app_pane_g1

0x9233,	// (0x000128f3) cell_app_pane_g2_ParamLimits

0x9233,	// (0x000128f3) cell_app_pane_g2

0x0001,

0xf6df,	// (0x00018d9f) cell_app_pane_g_ParamLimits

0xf6df,	// (0x00018d9f) cell_app_pane_g

0x923f,	// (0x000128ff) cell_app_pane_t1_ParamLimits

0x923f,	// (0x000128ff) cell_app_pane_t1

0x9256,	// (0x00012916) grid_highlight_pane_ParamLimits

0x9256,	// (0x00012916) grid_highlight_pane

0x8dd0,	// (0x00012490) cell_highlight_pane_g1

0x8dd8,	// (0x00012498) cell_highlight_pane_g2

0x8de0,	// (0x000124a0) cell_highlight_pane_g3

0x8de8,	// (0x000124a8) cell_highlight_pane_g4

0x8df0,	// (0x000124b0) cell_highlight_pane_g5

0x8df8,	// (0x000124b8) cell_highlight_pane_g6

0x8e00,	// (0x000124c0) cell_highlight_pane_g7

0x8e08,	// (0x000124c8) cell_highlight_pane_g8

0x8e10,	// (0x000124d0) cell_highlight_pane_g9

0x7dfd,	// (0x000114bd) cell_highlight_pane_g10

0x0009,

0xf68d,	// (0x00018d4d) cell_highlight_pane_g

0x9267,	// (0x00012927) bg_scroll_pane

0x607f,	// (0x0000f73f) scroll_handle_pane

0x92ae,	// (0x0001296e) scroll_bg_pane_g1

0x92c3,	// (0x00012983) scroll_bg_pane_g2

0x92db,	// (0x0001299b) scroll_bg_pane_g3

0x0002,

0xf6e4,	// (0x00018da4) scroll_bg_pane_g

0x92f0,	// (0x000129b0) scroll_handle_focus_pane_ParamLimits

0x92f0,	// (0x000129b0) scroll_handle_focus_pane

0x92ae,	// (0x0001296e) scroll_handle_pane_g1

0x92fd,	// (0x000129bd) scroll_handle_pane_g2

0x92db,	// (0x0001299b) scroll_handle_pane_g3

0x0002,

0xf6eb,	// (0x00018dab) scroll_handle_pane_g

0x8eaf,	// (0x0001256f) bg_popup_sub_pane_cp21_ParamLimits

0x8eaf,	// (0x0001256f) bg_popup_sub_pane_cp21

0x9311,	// (0x000129d1) popup_fep_japan_predictive_window_t1_ParamLimits

0x9311,	// (0x000129d1) popup_fep_japan_predictive_window_t1

0x932b,	// (0x000129eb) popup_fep_japan_predictive_window_t2_ParamLimits

0x932b,	// (0x000129eb) popup_fep_japan_predictive_window_t2

0x935e,	// (0x00012a1e) popup_fep_japan_predictive_window_t3_ParamLimits

0x935e,	// (0x00012a1e) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f2,	// (0x00018db2) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f2,	// (0x00018db2) popup_fep_japan_predictive_window_t

0x7e07,	// (0x000114c7) bg_popup_sub_pane_cp23

0x9395,	// (0x00012a55) listscroll_japin_cand_pane

0x939d,	// (0x00012a5d) popup_fep_japan_candidate_window_t1

0x93ab,	// (0x00012a6b) candidate_pane_ParamLimits

0x93ab,	// (0x00012a6b) candidate_pane

0x93bd,	// (0x00012a7d) scroll_pane_cp30

0x93c5,	// (0x00012a85) list_single_popup_jap_candidate_pane_ParamLimits

0x93c5,	// (0x00012a85) list_single_popup_jap_candidate_pane

0x7e07,	// (0x000114c7) list_highlight_pane_cp30

0x93d9,	// (0x00012a99) list_single_popup_jap_candidate_pane_t1

0x93e8,	// (0x00012aa8) level_1_signal

0x93f5,	// (0x00012ab5) level_2_signal

0x9402,	// (0x00012ac2) level_3_signal

0x940f,	// (0x00012acf) level_4_signal

0x941c,	// (0x00012adc) level_5_signal

0x9429,	// (0x00012ae9) level_6_signal

0x9436,	// (0x00012af6) level_7_signal

0x93e8,	// (0x00012aa8) level_1_battery

0x93f5,	// (0x00012ab5) level_2_battery

0x9402,	// (0x00012ac2) level_3_battery

0x940f,	// (0x00012acf) level_4_battery

0x941c,	// (0x00012adc) level_5_battery

0x9429,	// (0x00012ae9) level_6_battery

0x9436,	// (0x00012af6) level_7_battery

0x945b,	// (0x00012b1b) list_menu_pane_ParamLimits

0x945b,	// (0x00012b1b) list_menu_pane

0x9471,	// (0x00012b31) scroll_pane_cp25_ParamLimits

0x9471,	// (0x00012b31) scroll_pane_cp25

0x948a,	// (0x00012b4a) list_double2_graphic_pane_cp2_ParamLimits

0x948a,	// (0x00012b4a) list_double2_graphic_pane_cp2

0x948a,	// (0x00012b4a) list_double2_large_graphic_pane_cp2_ParamLimits

0x948a,	// (0x00012b4a) list_double2_large_graphic_pane_cp2

0x948a,	// (0x00012b4a) list_double2_pane_cp2_ParamLimits

0x948a,	// (0x00012b4a) list_double2_pane_cp2

0x948a,	// (0x00012b4a) list_double_graphic_pane_cp2_ParamLimits

0x948a,	// (0x00012b4a) list_double_graphic_pane_cp2

0x948a,	// (0x00012b4a) list_double_large_graphic_pane_cp2_ParamLimits

0x948a,	// (0x00012b4a) list_double_large_graphic_pane_cp2

0x948a,	// (0x00012b4a) list_double_number_pane_cp2_ParamLimits

0x948a,	// (0x00012b4a) list_double_number_pane_cp2

0x948a,	// (0x00012b4a) list_double_pane_cp2_ParamLimits

0x948a,	// (0x00012b4a) list_double_pane_cp2

0x94ae,	// (0x00012b6e) list_single_2graphic_pane_cp2_ParamLimits

0x94ae,	// (0x00012b6e) list_single_2graphic_pane_cp2

0x94ae,	// (0x00012b6e) list_single_graphic_heading_pane_cp2_ParamLimits

0x94ae,	// (0x00012b6e) list_single_graphic_heading_pane_cp2

0x94ae,	// (0x00012b6e) list_single_graphic_pane_cp2_ParamLimits

0x94ae,	// (0x00012b6e) list_single_graphic_pane_cp2

0x94ae,	// (0x00012b6e) list_single_heading_pane_cp2_ParamLimits

0x94ae,	// (0x00012b6e) list_single_heading_pane_cp2

0x94c4,	// (0x00012b84) list_single_large_graphic_pane_cp2_ParamLimits

0x94c4,	// (0x00012b84) list_single_large_graphic_pane_cp2

0x94ae,	// (0x00012b6e) list_single_number_heading_pane_cp2_ParamLimits

0x94ae,	// (0x00012b6e) list_single_number_heading_pane_cp2

0x94ae,	// (0x00012b6e) list_single_number_pane_cp2_ParamLimits

0x94ae,	// (0x00012b6e) list_single_number_pane_cp2

0x94ae,	// (0x00012b6e) list_single_pane_cp2_ParamLimits

0x94ae,	// (0x00012b6e) list_single_pane_cp2

0x953f,	// (0x00012bff) bg_popup_sub_pane_cp22

0x612e,	// (0x0000f7ee) popup_side_volume_key_window_g1

0x6152,	// (0x0000f812) popup_side_volume_key_window_t1

0x616e,	// (0x0000f82e) volume_small_pane_cp1

0x817c,	// (0x0001183c) bg_popup_sub_pane_cp24_ParamLimits

0x817c,	// (0x0001183c) bg_popup_sub_pane_cp24

0x9555,	// (0x00012c15) fep_china_uni_candidate_pane_ParamLimits

0x9555,	// (0x00012c15) fep_china_uni_candidate_pane

0x9569,	// (0x00012c29) fep_china_uni_entry_pane

0x9579,	// (0x00012c39) popup_fep_china_uni_window_g1

0x9595,	// (0x00012c55) fep_china_uni_entry_pane_g1

0x959d,	// (0x00012c5d) fep_china_uni_entry_pane_g2

0x0001,

0xf723,	// (0x00018de3) fep_china_uni_entry_pane_g

0x95a5,	// (0x00012c65) fep_entry_item_pane

0x95af,	// (0x00012c6f) fep_candidate_item_pane

0x95b7,	// (0x00012c77) fep_china_uni_candidate_pane_g1

0x95bf,	// (0x00012c7f) fep_china_uni_candidate_pane_g2

0x95c7,	// (0x00012c87) fep_china_uni_candidate_pane_g3

0x95cf,	// (0x00012c8f) fep_china_uni_candidate_pane_g4

0x0003,

0xf728,	// (0x00018de8) fep_china_uni_candidate_pane_g

0x7dfd,	// (0x000114bd) fep_entry_item_pane_g1

0x95d7,	// (0x00012c97) fep_entry_item_pane_t1_ParamLimits

0x95d7,	// (0x00012c97) fep_entry_item_pane_t1

0x95ed,	// (0x00012cad) fep_candidate_item_pane_t1_ParamLimits

0x95ed,	// (0x00012cad) fep_candidate_item_pane_t1

0x9602,	// (0x00012cc2) fep_candidate_item_pane_t2_ParamLimits

0x9602,	// (0x00012cc2) fep_candidate_item_pane_t2

0x0001,

0xf731,	// (0x00018df1) fep_candidate_item_pane_t_ParamLimits

0xf731,	// (0x00018df1) fep_candidate_item_pane_t

0x7ee7,	// (0x000115a7) list_highlight_pane_cp31_ParamLimits

0x7ee7,	// (0x000115a7) list_highlight_pane_cp31

0x9614,	// (0x00012cd4) level_1_signal_lsc

0x961d,	// (0x00012cdd) level_2_signal_lsc

0x9626,	// (0x00012ce6) level_3_signal_lsc

0x962f,	// (0x00012cef) level_4_signal_lsc

0x9638,	// (0x00012cf8) level_5_signal_lsc

0x9641,	// (0x00012d01) level_6_signal_lsc

0x964a,	// (0x00012d0a) level_7_signal_lsc

0x964a,	// (0x00012d0a) level_1_battery_lsc

0x9653,	// (0x00012d13) level_2_battery_lsc

0x965c,	// (0x00012d1c) level_3_battery_lsc

0x9665,	// (0x00012d25) level_4_battery_lsc

0x966e,	// (0x00012d2e) level_5_battery_lsc

0x9677,	// (0x00012d37) level_6_battery_lsc

0x9614,	// (0x00012cd4) level_7_battery_lsc

0x9680,	// (0x00012d40) scroll_handle_focus_pane_g1

0x9689,	// (0x00012d49) scroll_handle_focus_pane_g2

0x9692,	// (0x00012d52) scroll_handle_focus_pane_g3

0x0002,

0xf736,	// (0x00018df6) scroll_handle_focus_pane_g

0x969b,	// (0x00012d5b) list_single_2graphic_pane_g1_ParamLimits

0x969b,	// (0x00012d5b) list_single_2graphic_pane_g1

0x8791,	// (0x00011e51) list_single_2graphic_pane_g2_ParamLimits

0x8791,	// (0x00011e51) list_single_2graphic_pane_g2

0x8717,	// (0x00011dd7) list_single_2graphic_pane_g3_ParamLimits

0x8717,	// (0x00011dd7) list_single_2graphic_pane_g3

0x96a7,	// (0x00012d67) list_single_2graphic_pane_g4_ParamLimits

0x96a7,	// (0x00012d67) list_single_2graphic_pane_g4

0x0003,

0xf73d,	// (0x00018dfd) list_single_2graphic_pane_g_ParamLimits

0xf73d,	// (0x00018dfd) list_single_2graphic_pane_g

0x96b8,	// (0x00012d78) list_single_2graphic_pane_t1_ParamLimits

0x96b8,	// (0x00012d78) list_single_2graphic_pane_t1

0x96e6,	// (0x00012da6) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x96e6,	// (0x00012da6) list_double2_graphic_large_graphic_pane_g1

0x8836,	// (0x00011ef6) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x8836,	// (0x00011ef6) list_double2_graphic_large_graphic_pane_g2

0x8847,	// (0x00011f07) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x8847,	// (0x00011f07) list_double2_graphic_large_graphic_pane_g3

0x96f6,	// (0x00012db6) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x96f6,	// (0x00012db6) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf746,	// (0x00018e06) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf746,	// (0x00018e06) list_double2_graphic_large_graphic_pane_g

0x9702,	// (0x00012dc2) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x9702,	// (0x00012dc2) list_double2_graphic_large_graphic_pane_t1

0x9718,	// (0x00012dd8) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x9718,	// (0x00012dd8) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf74f,	// (0x00018e0f) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf74f,	// (0x00018e0f) list_double2_graphic_large_graphic_pane_t

0x986a,	// (0x00012f2a) popup_fast_swap_window_ParamLimits

0x986a,	// (0x00012f2a) popup_fast_swap_window

0x9886,	// (0x00012f46) popup_side_volume_key_window

0x98a0,	// (0x00012f60) stacon_top_pane

0x98aa,	// (0x00012f6a) status_pane_ParamLimits

0x98aa,	// (0x00012f6a) status_pane

0x98a0,	// (0x00012f60) status_small_pane

0x7e07,	// (0x000114c7) control_pane

0x7e07,	// (0x000114c7) stacon_bottom_pane

0x8bc0,	// (0x00012280) scroll_pane_cp121

0x8bb7,	// (0x00012277) set_content_pane

0x972a,	// (0x00012dea) bg_active_tab_pane_g1_cp1

0x9733,	// (0x00012df3) bg_active_tab_pane_g2_cp1

0x973c,	// (0x00012dfc) bg_active_tab_pane_g3_cp1

0x972a,	// (0x00012dea) bg_passive_tab_pane_g1_cp1

0x9733,	// (0x00012df3) bg_passive_tab_pane_g2_cp1

0x973c,	// (0x00012dfc) bg_passive_tab_pane_g3_cp1

0x9745,	// (0x00012e05) bg_active_tab_pane_g1_cp2

0x9733,	// (0x00012df3) bg_active_tab_pane_g2_cp2

0x974e,	// (0x00012e0e) bg_active_tab_pane_g3_cp2

0x9745,	// (0x00012e05) bg_passive_tab_pane_g1_cp2

0x9733,	// (0x00012df3) bg_passive_tab_pane_g2_cp2

0x974e,	// (0x00012e0e) bg_passive_tab_pane_g3_cp2

0x9757,	// (0x00012e17) bg_active_tab_pane_g1_cp3

0x9733,	// (0x00012df3) bg_active_tab_pane_g2_cp3

0x9760,	// (0x00012e20) bg_active_tab_pane_g3_cp3

0x9757,	// (0x00012e17) bg_passive_tab_pane_g1_cp3

0x9733,	// (0x00012df3) bg_passive_tab_pane_g2_cp3

0x9760,	// (0x00012e20) bg_passive_tab_pane_g3_cp3

0x9769,	// (0x00012e29) bg_active_tab_pane_g1_cp4

0x9733,	// (0x00012df3) bg_active_tab_pane_g2_cp4

0x9774,	// (0x00012e34) bg_active_tab_pane_g3_cp4

0x9769,	// (0x00012e29) bg_passive_tab_pane_g1_cp4

0x9733,	// (0x00012df3) bg_passive_tab_pane_g2_cp4

0x9774,	// (0x00012e34) bg_passive_tab_pane_g3_cp4

0x97bd,	// (0x00012e7d) bg_active_tab_pane_g1_cp5

0x9733,	// (0x00012df3) bg_active_tab_pane_g2_cp5

0x97c6,	// (0x00012e86) bg_active_tab_pane_g3_cp5

0x97bd,	// (0x00012e7d) bg_passive_tab_pane_g1_cp5

0x9733,	// (0x00012df3) bg_passive_tab_pane_g2_cp5

0x97c6,	// (0x00012e86) bg_passive_tab_pane_g3_cp5

0x97cf,	// (0x00012e8f) list_set_graphic_pane_ParamLimits

0x97cf,	// (0x00012e8f) list_set_graphic_pane

0x7e07,	// (0x000114c7) bg_set_opt_pane_cp4

0x97ef,	// (0x00012eaf) list_set_graphic_pane_g1_ParamLimits

0x97ef,	// (0x00012eaf) list_set_graphic_pane_g1

0x97fb,	// (0x00012ebb) list_set_graphic_pane_g2_ParamLimits

0x97fb,	// (0x00012ebb) list_set_graphic_pane_g2

0x0001,

0xf754,	// (0x00018e14) list_set_graphic_pane_g_ParamLimits

0xf754,	// (0x00018e14) list_set_graphic_pane_g

0x0009,

0xfae3,	// (0x000191a3) volume_small_pane_cp_g

0x981d,	// (0x00012edd) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x981d,	// (0x00012edd) list_double2_large_graphic_pane_g1_cp2

0x9829,	// (0x00012ee9) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x9829,	// (0x00012ee9) list_double2_large_graphic_pane_g2_cp2

0x983a,	// (0x00012efa) list_double2_large_graphic_pane_g3_cp2

0x9842,	// (0x00012f02) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x9842,	// (0x00012f02) list_double2_large_graphic_pane_t1_cp2

0x9858,	// (0x00012f18) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x9858,	// (0x00012f18) list_double2_large_graphic_pane_t2_cp2

0xb523,	// (0x00014be3) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xb523,	// (0x00014be3) list_double_large_graphic_pane_g1_cp2

0xb534,	// (0x00014bf4) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xb534,	// (0x00014bf4) list_double_large_graphic_pane_g2_cp2

0x99c6,	// (0x00013086) list_double_large_graphic_pane_g3_cp2

0xb545,	// (0x00014c05) list_double_large_graphic_pane_g4_cp

0xb54d,	// (0x00014c0d) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xb54d,	// (0x00014c0d) list_double_large_graphic_pane_t1_cp2

0xb564,	// (0x00014c24) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xb564,	// (0x00014c24) list_double_large_graphic_pane_t2_cp2

0x98b8,	// (0x00012f78) list_double2_graphic_pane_g1_cp2_ParamLimits

0x98b8,	// (0x00012f78) list_double2_graphic_pane_g1_cp2

0x98c6,	// (0x00012f86) list_double2_graphic_pane_g2_cp2_ParamLimits

0x98c6,	// (0x00012f86) list_double2_graphic_pane_g2_cp2

0x98d7,	// (0x00012f97) list_double2_graphic_pane_g3_cp2

0x98e1,	// (0x00012fa1) list_double2_graphic_pane_t1_cp2_ParamLimits

0x98e1,	// (0x00012fa1) list_double2_graphic_pane_t1_cp2

0x98f7,	// (0x00012fb7) list_double2_graphic_pane_t2_cp2_ParamLimits

0x98f7,	// (0x00012fb7) list_double2_graphic_pane_t2_cp2

0x9909,	// (0x00012fc9) list_single_number_heading_pane_g1_cp2_ParamLimits

0x9909,	// (0x00012fc9) list_single_number_heading_pane_g1_cp2

0x9915,	// (0x00012fd5) list_single_number_heading_pane_g2_cp2

0x991d,	// (0x00012fdd) list_single_number_heading_pane_t1_cp2_ParamLimits

0x991d,	// (0x00012fdd) list_single_number_heading_pane_t1_cp2

0x9933,	// (0x00012ff3) list_single_number_heading_pane_t2_cp2_ParamLimits

0x9933,	// (0x00012ff3) list_single_number_heading_pane_t2_cp2

0x9945,	// (0x00013005) list_single_number_heading_pane_t3_cp2_ParamLimits

0x9945,	// (0x00013005) list_single_number_heading_pane_t3_cp2

0x9909,	// (0x00012fc9) list_single_heading_pane_g1_cp2_ParamLimits

0x9909,	// (0x00012fc9) list_single_heading_pane_g1_cp2

0x9915,	// (0x00012fd5) list_single_heading_pane_g2_cp2

0x991d,	// (0x00012fdd) list_single_heading_pane_t1_cp2_ParamLimits

0x991d,	// (0x00012fdd) list_single_heading_pane_t1_cp2

0xb32d,	// (0x000149ed) list_single_heading_pane_t2_cp2_ParamLimits

0xb32d,	// (0x000149ed) list_single_heading_pane_t2_cp2

0xb275,	// (0x00014935) list_double_graphic_pane_g1_cp2_ParamLimits

0xb275,	// (0x00014935) list_double_graphic_pane_g1_cp2

0xb281,	// (0x00014941) list_double_graphic_pane_g2_cp2_ParamLimits

0xb281,	// (0x00014941) list_double_graphic_pane_g2_cp2

0xb290,	// (0x00014950) list_double_graphic_pane_g3_cp2

0xb298,	// (0x00014958) list_double_graphic_pane_t1_cp2_ParamLimits

0xb298,	// (0x00014958) list_double_graphic_pane_t1_cp2

0xb2ae,	// (0x0001496e) list_double_graphic_pane_t2_cp2_ParamLimits

0xb2ae,	// (0x0001496e) list_double_graphic_pane_t2_cp2

0x99ba,	// (0x0001307a) list_double_number_pane_g1_cp2_ParamLimits

0x99ba,	// (0x0001307a) list_double_number_pane_g1_cp2

0x99c6,	// (0x00013086) list_double_number_pane_g2_cp2

0xb239,	// (0x000148f9) list_double_number_pane_t1_cp2_ParamLimits

0xb239,	// (0x000148f9) list_double_number_pane_t1_cp2

0xb24d,	// (0x0001490d) list_double_number_pane_t2_cp2_ParamLimits

0xb24d,	// (0x0001490d) list_double_number_pane_t2_cp2

0xb263,	// (0x00014923) list_double_number_pane_t3_cp2_ParamLimits

0xb263,	// (0x00014923) list_double_number_pane_t3_cp2

0xb122,	// (0x000147e2) list_single_graphic_pane_g1_cp2_ParamLimits

0xb122,	// (0x000147e2) list_single_graphic_pane_g1_cp2

0x870b,	// (0x00011dcb) list_single_graphic_pane_g2_cp2_ParamLimits

0x870b,	// (0x00011dcb) list_single_graphic_pane_g2_cp2

0x9a1e,	// (0x000130de) list_single_graphic_pane_g3_cp2

0xb0f8,	// (0x000147b8) list_single_graphic_pane_t1_cp2_ParamLimits

0xb0f8,	// (0x000147b8) list_single_graphic_pane_t1_cp2

0x870b,	// (0x00011dcb) list_single_number_pane_g1_cp2_ParamLimits

0x870b,	// (0x00011dcb) list_single_number_pane_g1_cp2

0x9a1e,	// (0x000130de) list_single_number_pane_g2_cp2

0xb0f8,	// (0x000147b8) list_single_number_pane_t1_cp2_ParamLimits

0xb0f8,	// (0x000147b8) list_single_number_pane_t1_cp2

0xb10e,	// (0x000147ce) list_single_number_pane_t2_cp2_ParamLimits

0xb10e,	// (0x000147ce) list_single_number_pane_t2_cp2

0x9829,	// (0x00012ee9) list_double2_pane_g1_cp2_ParamLimits

0x9829,	// (0x00012ee9) list_double2_pane_g1_cp2

0x983a,	// (0x00012efa) list_double2_pane_g2_cp2

0x9992,	// (0x00013052) list_double2_pane_t1_cp2_ParamLimits

0x9992,	// (0x00013052) list_double2_pane_t1_cp2

0x99a8,	// (0x00013068) list_double2_pane_t2_cp2_ParamLimits

0x99a8,	// (0x00013068) list_double2_pane_t2_cp2

0x99ba,	// (0x0001307a) list_double_pane_g1_cp2_ParamLimits

0x99ba,	// (0x0001307a) list_double_pane_g1_cp2

0x99c6,	// (0x00013086) list_double_pane_g2_cp2

0x99ce,	// (0x0001308e) list_double_pane_t1_cp2_ParamLimits

0x99ce,	// (0x0001308e) list_double_pane_t1_cp2

0x99e4,	// (0x000130a4) list_double_pane_t2_cp2_ParamLimits

0x99e4,	// (0x000130a4) list_double_pane_t2_cp2

0x9a0e,	// (0x000130ce) list_single_pane_cp2_g3

0x870b,	// (0x00011dcb) list_single_pane_g1_cp2_ParamLimits

0x870b,	// (0x00011dcb) list_single_pane_g1_cp2

0x9a1e,	// (0x000130de) list_single_pane_g2_cp2

0x9a26,	// (0x000130e6) list_single_pane_t1_cp2_ParamLimits

0x9a26,	// (0x000130e6) list_single_pane_t1_cp2

0x9a3e,	// (0x000130fe) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x9a3e,	// (0x000130fe) list_single_large_graphic_pane_g1_cp2

0x9a4a,	// (0x0001310a) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x9a4a,	// (0x0001310a) list_single_large_graphic_pane_g2_cp2

0x9a56,	// (0x00013116) list_single_large_graphic_pane_g3_cp2

0x9a5e,	// (0x0001311e) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x9a5e,	// (0x0001311e) list_single_large_graphic_pane_g4_cp1

0x9a78,	// (0x00013138) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x9a78,	// (0x00013138) list_single_large_graphic_pane_t1_cp2

0xb0c4,	// (0x00014784) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xb0c4,	// (0x00014784) list_single_graphic_heading_pane_g1_cp2

0xb091,	// (0x00014751) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xb091,	// (0x00014751) list_single_graphic_heading_pane_g4_cp2

0x9a1e,	// (0x000130de) list_single_graphic_heading_pane_g5_cp2

0xb0d0,	// (0x00014790) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xb0d0,	// (0x00014790) list_single_graphic_heading_pane_t1_cp2

0xb0e6,	// (0x000147a6) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xb0e6,	// (0x000147a6) list_single_graphic_heading_pane_t2_cp2

0xb085,	// (0x00014745) list_single_2graphic_pane_g1_cp2_ParamLimits

0xb085,	// (0x00014745) list_single_2graphic_pane_g1_cp2

0xb091,	// (0x00014751) list_single_2graphic_pane_g2_cp2_ParamLimits

0xb091,	// (0x00014751) list_single_2graphic_pane_g2_cp2

0x9a1e,	// (0x000130de) list_single_2graphic_pane_g3_cp2

0xb0a2,	// (0x00014762) list_single_2graphic_pane_g4_cp2_ParamLimits

0xb0a2,	// (0x00014762) list_single_2graphic_pane_g4_cp2

0xb0ae,	// (0x0001476e) list_single_2graphic_pane_t1_cp2_ParamLimits

0xb0ae,	// (0x0001476e) list_single_2graphic_pane_t1_cp2

0x7dfd,	// (0x000114bd) list_highlight_pane_g10_cp1

0xac5d,	// (0x0001431d) list_highlight_pane_g1_cp1

0xac65,	// (0x00014325) list_highlight_pane_g2_cp1

0xac6d,	// (0x0001432d) list_highlight_pane_g3_cp1

0xac75,	// (0x00014335) list_highlight_pane_g4_cp1

0xac7d,	// (0x0001433d) list_highlight_pane_g5_cp1

0xac85,	// (0x00014345) list_highlight_pane_g6_cp1

0xac8d,	// (0x0001434d) list_highlight_pane_g7_cp1

0xac95,	// (0x00014355) list_highlight_pane_g8_cp1

0xac9d,	// (0x0001435d) list_highlight_pane_g9_cp1

0xab75,	// (0x00014235) form_field_slider_pane_t3

0xab83,	// (0x00014243) form_field_slider_pane_t4

0xab91,	// (0x00014251) slider_form_pane_ParamLimits

0xab91,	// (0x00014251) slider_form_pane

0x7e07,	// (0x000114c7) control_abbreviations

0x7e07,	// (0x000114c7) control_conventions

0x7e07,	// (0x000114c7) control_definitions

0x7e07,	// (0x000114c7) format_table_attribute

0xb377,	// (0x00014a37) bg_popup_preview_window_pane_g9

0x7e07,	// (0x000114c7) format_table_data2

0x7e07,	// (0x000114c7) format_table_data3

0x7e07,	// (0x000114c7) format_table_data_example

0x0008,

0x7e07,	// (0x000114c7) intro_purpose

0xf8eb,	// (0x00018fab) bg_popup_preview_window_pane_g

0x7e07,	// (0x000114c7) texts_category

0x7e07,	// (0x000114c7) texts_graphics

0x9a8e,	// (0x0001314e) text_digital

0x9a9d,	// (0x0001315d) text_primary

0x9aac,	// (0x0001316c) text_primary_small

0x9abb,	// (0x0001317b) text_secondary

0x9aca,	// (0x0001318a) text_title

0xbb7e,	// (0x0001523e) bg_passive_tab_pane_g1_cp3_srt

0x9733,	// (0x00012df3) bg_passive_tab_pane_g2_cp3_srt

0xbb87,	// (0x00015247) bg_passive_tab_pane_g3_cp3_srt

0x7ee7,	// (0x000115a7) bg_active_tab_pane_cp3_srt_ParamLimits

0x7ee7,	// (0x000115a7) bg_active_tab_pane_cp3_srt

0xbb90,	// (0x00015250) tabs_4_active_pane_srt_g1

0xbb98,	// (0x00015258) tabs_4_active_pane_srt_t1_ParamLimits

0xbb98,	// (0x00015258) tabs_4_active_pane_srt_t1

0xbb7e,	// (0x0001523e) bg_active_tab_pane_g1_cp3_copy1

0x9733,	// (0x00012df3) bg_active_tab_pane_g2_cp3_copy1

0xbb87,	// (0x00015247) bg_active_tab_pane_g3_cp3_copy1

0x7ee7,	// (0x000115a7) tabs_2_long_active_pane_srt_ParamLimits

0x7ee7,	// (0x000115a7) tabs_2_long_active_pane_srt

0x7ee7,	// (0x000115a7) tabs_2_long_passive_pane_srt_ParamLimits

0x7ee7,	// (0x000115a7) tabs_2_long_passive_pane_srt

0x8fe5,	// (0x000126a5) bg_passive_tab_pane_cp4_srt_ParamLimits

0x8fe5,	// (0x000126a5) bg_passive_tab_pane_cp4_srt

0xb7b3,	// (0x00014e73) bg_passive_tab_pane_g1_cp4_srt

0x9733,	// (0x00012df3) bg_passive_tab_pane_g2_cp4_srt

0xb7bc,	// (0x00014e7c) bg_passive_tab_pane_g3_cp4_srt

0x8fc4,	// (0x00012684) bg_active_tab_pane_cp4_srt_ParamLimits

0x8fc4,	// (0x00012684) bg_active_tab_pane_cp4_srt

0xb7c5,	// (0x00014e85) tabs_2_long_active_pane_srt_t1_ParamLimits

0xb7c5,	// (0x00014e85) tabs_2_long_active_pane_srt_t1

0xb7b3,	// (0x00014e73) bg_active_tab_pane_g1_cp4_srt

0x9733,	// (0x00012df3) bg_active_tab_pane_g2_cp4_srt

0xb7bc,	// (0x00014e7c) bg_active_tab_pane_g3_cp4_srt

0x817c,	// (0x0001183c) tabs_3_long_active_pane_srt_ParamLimits

0x817c,	// (0x0001183c) tabs_3_long_active_pane_srt

0x817c,	// (0x0001183c) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x817c,	// (0x0001183c) tabs_3_long_passive_pane_cp_srt

0x817c,	// (0x0001183c) tabs_3_long_passive_pane_srt_ParamLimits

0x817c,	// (0x0001183c) tabs_3_long_passive_pane_srt

0x8fe5,	// (0x000126a5) bg_passive_tab_pane_cp5_srt_ParamLimits

0x8fe5,	// (0x000126a5) bg_passive_tab_pane_cp5_srt

0x97bd,	// (0x00012e7d) bg_passive_tab_pane_g1_cp5_srt

0x9733,	// (0x00012df3) bg_passive_tab_pane_g2_cp5_srt

0x97c6,	// (0x00012e86) bg_passive_tab_pane_g3_cp5_srt

0x8fc4,	// (0x00012684) bg_active_tab_pane_cp5_srt_ParamLimits

0x8fc4,	// (0x00012684) bg_active_tab_pane_cp5_srt

0xb7a1,	// (0x00014e61) tabs_3_long_active_pane_srt_t1_ParamLimits

0xb7a1,	// (0x00014e61) tabs_3_long_active_pane_srt_t1

0x97bd,	// (0x00012e7d) bg_active_tab_pane_g1_cp5_srt

0x9733,	// (0x00012df3) bg_active_tab_pane_g2_cp5_srt

0x97c6,	// (0x00012e86) bg_active_tab_pane_g3_cp5_srt

0xb793,	// (0x00014e53) navi_text_pane_srt_t1

0xb78b,	// (0x00014e4b) navi_icon_pane_srt_g1

0x9c8d,	// (0x0001334d) midp_editing_number_pane_srt

0x9ad9,	// (0x00013199) midp_ticker_pane_srt

0x9c95,	// (0x00013355) midp_ticker_pane_srt_g1

0x9c9d,	// (0x0001335d) midp_ticker_pane_srt_g2

0x0001,

0xf773,	// (0x00018e33) midp_ticker_pane_srt_g

0x9ca5,	// (0x00013365) midp_ticker_pane_srt_t1

0xb77c,	// (0x00014e3c) midp_editing_number_pane_t1_copy1

0x8fe5,	// (0x000126a5) listscroll_midp_pane

0x8fe5,	// (0x000126a5) midp_form_pane

0x9b45,	// (0x00013205) midp_info_popup_window_ParamLimits

0x9b45,	// (0x00013205) midp_info_popup_window

0x8eaf,	// (0x0001256f) bg_popup_sub_pane_cp50_ParamLimits

0x8eaf,	// (0x0001256f) bg_popup_sub_pane_cp50

0xa892,	// (0x00013f52) listscroll_midp_info_pane_ParamLimits

0xa892,	// (0x00013f52) listscroll_midp_info_pane

0xa87a,	// (0x00013f3a) listscroll_form_midp_pane_ParamLimits

0xa87a,	// (0x00013f3a) listscroll_form_midp_pane

0xa886,	// (0x00013f46) scroll_bar_cp050

0xa85a,	// (0x00013f1a) list_midp_pane

0xc87d,	// (0x00015f3d) signal_pane_g2_cp

0xa794,	// (0x00013e54) listscroll_midp_info_pane_t1_ParamLimits

0xa794,	// (0x00013e54) listscroll_midp_info_pane_t1

0xa7ac,	// (0x00013e6c) listscroll_midp_info_pane_t2_ParamLimits

0xa7ac,	// (0x00013e6c) listscroll_midp_info_pane_t2

0xa7ea,	// (0x00013eaa) listscroll_midp_info_pane_t3_ParamLimits

0xa7ea,	// (0x00013eaa) listscroll_midp_info_pane_t3

0xa824,	// (0x00013ee4) listscroll_midp_info_pane_t4_ParamLimits

0xa824,	// (0x00013ee4) listscroll_midp_info_pane_t4

0x0003,

0xf826,	// (0x00018ee6) listscroll_midp_info_pane_t_ParamLimits

0xf826,	// (0x00018ee6) listscroll_midp_info_pane_t

0x8f71,	// (0x00012631) scroll_pane_cp21

0xa736,	// (0x00013df6) form_midp_field_choice_group_pane

0xa73f,	// (0x00013dff) form_midp_field_text_pane

0xa77a,	// (0x00013e3a) form_midp_field_time_pane

0xa782,	// (0x00013e42) form_midp_gauge_slider_pane

0xa78b,	// (0x00013e4b) form_midp_gauge_wait_pane

0x7e07,	// (0x000114c7) form_midp_image_pane

0xa700,	// (0x00013dc0) list_single_midp_pane_ParamLimits

0xa700,	// (0x00013dc0) list_single_midp_pane

0xa6b4,	// (0x00013d74) form_midp_field_text_pane_t1

0xa45d,	// (0x00013b1d) input_focus_pane_cp050

0xa6ef,	// (0x00013daf) list_midp_form_text_pane

0xa683,	// (0x00013d43) form_midp_field_choice_group_pane_t1

0xa691,	// (0x00013d51) input_focus_pane_cp051

0xa6a5,	// (0x00013d65) list_midp_choice_pane

0x7e07,	// (0x000114c7) status_idle_pane

0xa667,	// (0x00013d27) form_midp_field_time_pane_t1

0x7dfd,	// (0x000114bd) wait_anim_pane_g2_copy1

0xa675,	// (0x00013d35) form_midp_field_time_pane_t2

0x0001,

0x9bf5,	// (0x000132b5) aid_navinavi_width_2_pane

0xf821,	// (0x00018ee1) form_midp_field_time_pane_t

0x7e07,	// (0x000114c7) input_focus_pane_cp052

0x7e07,	// (0x000114c7) bg_input_focus_pane_cp040

0xa627,	// (0x00013ce7) form_midp_gauge_slider_pane_t1

0xa635,	// (0x00013cf5) form_midp_gauge_slider_pane_t2

0xa643,	// (0x00013d03) form_midp_gauge_slider_pane_t3

0xa651,	// (0x00013d11) form_midp_gauge_slider_pane_t4

0x0003,

0xf818,	// (0x00018ed8) form_midp_gauge_slider_pane_t

0xa65f,	// (0x00013d1f) form_midp_slider_pane

0x7ee7,	// (0x000115a7) bg_input_focus_pane_cp041_ParamLimits

0x7ee7,	// (0x000115a7) bg_input_focus_pane_cp041

0xa5f4,	// (0x00013cb4) form_midp_gauge_wait_pane_t1_ParamLimits

0xa5f4,	// (0x00013cb4) form_midp_gauge_wait_pane_t1

0xa606,	// (0x00013cc6) form_midp_gauge_wait_pane_t2_ParamLimits

0xa606,	// (0x00013cc6) form_midp_gauge_wait_pane_t2

0x0001,

0xf813,	// (0x00018ed3) form_midp_gauge_wait_pane_t_ParamLimits

0xf813,	// (0x00018ed3) form_midp_gauge_wait_pane_t

0xa618,	// (0x00013cd8) form_midp_wait_pane_ParamLimits

0xa618,	// (0x00013cd8) form_midp_wait_pane

0xa5be,	// (0x00013c7e) form_midp_image_pane_g1

0xa5c7,	// (0x00013c87) form_midp_image_pane_t1

0xa5d6,	// (0x00013c96) form_midp_image_pane_t2

0xa5e5,	// (0x00013ca5) form_midp_image_pane_t3

0x0002,

0xf80c,	// (0x00018ecc) form_midp_image_pane_t

0xa5a6,	// (0x00013c66) list_single_midp_pane_g1

0xa5af,	// (0x00013c6f) list_single_midp_pane_t1

0xa577,	// (0x00013c37) list_midp_form_item_pane_ParamLimits

0xa577,	// (0x00013c37) list_midp_form_item_pane

0x9b9d,	// (0x0001325d) list_midp_form_item_pane_t1

0x9bac,	// (0x0001326c) midp_ticker_pane_g1

0x9bb8,	// (0x00013278) midp_ticker_pane_g2

0x0001,

0xf759,	// (0x00018e19) midp_ticker_pane_g

0x9bc4,	// (0x00013284) midp_ticker_pane_t1

0xb9f6,	// (0x000150b6) midp_editing_number_pane_t1

0xb9d4,	// (0x00015094) midp_editing_number_pane

0xb9e3,	// (0x000150a3) midp_ticker_pane

0xb75a,	// (0x00014e1a) ai_message_heading_pane

0x7e07,	// (0x000114c7) bg_popup_window_pane_cp14

0xb762,	// (0x00014e22) listscroll_ai_message_pane

0xb6e4,	// (0x00014da4) ai_message_heading_pane_g1_ParamLimits

0xb6e4,	// (0x00014da4) ai_message_heading_pane_g1

0xb6f0,	// (0x00014db0) ai_message_heading_pane_g2_ParamLimits

0xb6f0,	// (0x00014db0) ai_message_heading_pane_g2

0xb6fc,	// (0x00014dbc) ai_message_heading_pane_g3_ParamLimits

0xb6fc,	// (0x00014dbc) ai_message_heading_pane_g3

0xb708,	// (0x00014dc8) ai_message_heading_pane_g4_ParamLimits

0xb708,	// (0x00014dc8) ai_message_heading_pane_g4

0x0003,

0xf94d,	// (0x0001900d) ai_message_heading_pane_g_ParamLimits

0xf94d,	// (0x0001900d) ai_message_heading_pane_g

0xb714,	// (0x00014dd4) ai_message_heading_pane_t1_ParamLimits

0xb714,	// (0x00014dd4) ai_message_heading_pane_t1

0xb72e,	// (0x00014dee) ai_message_heading_pane_t2_ParamLimits

0xb72e,	// (0x00014dee) ai_message_heading_pane_t2

0x0001,

0xf956,	// (0x00019016) ai_message_heading_pane_t_ParamLimits

0xf956,	// (0x00019016) ai_message_heading_pane_t

0xb740,	// (0x00014e00) bg_popup_heading_pane_cp1_ParamLimits

0xb740,	// (0x00014e00) bg_popup_heading_pane_cp1

0xb6d2,	// (0x00014d92) list_ai_message_pane_ParamLimits

0xb6d2,	// (0x00014d92) list_ai_message_pane

0x8f71,	// (0x00012631) scroll_pane_cp10

0xb66e,	// (0x00014d2e) list_ai_message_pane_g1

0xb676,	// (0x00014d36) list_ai_message_pane_g2

0x0001,

0xf92a,	// (0x00018fea) list_ai_message_pane_g

0xb67e,	// (0x00014d3e) list_ai_message_pane_t1_ParamLimits

0xb67e,	// (0x00014d3e) list_ai_message_pane_t1

0xb693,	// (0x00014d53) list_ai_message_pane_t2_ParamLimits

0xb693,	// (0x00014d53) list_ai_message_pane_t2

0xb6a8,	// (0x00014d68) list_ai_message_pane_t3_ParamLimits

0xb6a8,	// (0x00014d68) list_ai_message_pane_t3

0xb6bd,	// (0x00014d7d) list_ai_message_pane_t4_ParamLimits

0xb6bd,	// (0x00014d7d) list_ai_message_pane_t4

0x0003,

0xf92f,	// (0x00018fef) list_ai_message_pane_t_ParamLimits

0xf92f,	// (0x00018fef) list_ai_message_pane_t

0xb658,	// (0x00014d18) cell_ai_soft_ind_pane_ParamLimits

0xb658,	// (0x00014d18) cell_ai_soft_ind_pane

0x9bd6,	// (0x00013296) cell_ai_soft_ind_pane_g1_ParamLimits

0x9bd6,	// (0x00013296) cell_ai_soft_ind_pane_g1

0x7e07,	// (0x000114c7) grid_highlight_cp1

0x9be3,	// (0x000132a3) text_secondary_cp56_ParamLimits

0x9be3,	// (0x000132a3) text_secondary_cp56

0xb62d,	// (0x00014ced) example_general_pane_ParamLimits

0xb62d,	// (0x00014ced) example_general_pane

0xb639,	// (0x00014cf9) example_parent_pane_g1_ParamLimits

0xb639,	// (0x00014cf9) example_parent_pane_g1

0xb645,	// (0x00014d05) example_parent_pane_t1_ParamLimits

0xb645,	// (0x00014d05) example_parent_pane_t1

0x6863,	// (0x0000ff23) popup_preview_text_window_ParamLimits

0x6863,	// (0x0000ff23) popup_preview_text_window

0x9a16,	// (0x000130d6) list_single_pane_cp2_g4

0x8226,	// (0x000118e6) bg_popup_preview_window_pane_ParamLimits

0x8226,	// (0x000118e6) bg_popup_preview_window_pane

0xb37f,	// (0x00014a3f) popup_preview_text_window_t1_ParamLimits

0xb37f,	// (0x00014a3f) popup_preview_text_window_t1

0xb39d,	// (0x00014a5d) popup_preview_text_window_t2_ParamLimits

0xb39d,	// (0x00014a5d) popup_preview_text_window_t2

0xb3e6,	// (0x00014aa6) popup_preview_text_window_t3_ParamLimits

0xb3e6,	// (0x00014aa6) popup_preview_text_window_t3

0xb42b,	// (0x00014aeb) popup_preview_text_window_t4_ParamLimits

0xb42b,	// (0x00014aeb) popup_preview_text_window_t4

0x0004,

0xf8fe,	// (0x00018fbe) popup_preview_text_window_t_ParamLimits

0xf8fe,	// (0x00018fbe) popup_preview_text_window_t

0xb4a9,	// (0x00014b69) scroll_pane_cp11

0xa339,	// (0x000139f9) bg_popup_preview_window_pane_g1

0xb33f,	// (0x000149ff) bg_popup_preview_window_pane_g2

0xb347,	// (0x00014a07) bg_popup_preview_window_pane_g3

0xb34f,	// (0x00014a0f) bg_popup_preview_window_pane_g4

0xb357,	// (0x00014a17) bg_popup_preview_window_pane_g5

0xb35f,	// (0x00014a1f) bg_popup_preview_window_pane_g6

0xb367,	// (0x00014a27) bg_popup_preview_window_pane_g7

0xb36f,	// (0x00014a2f) bg_popup_preview_window_pane_g8

0x5a70,	// (0x0000f130) aid_popup_width_pane

0x6841,	// (0x0000ff01) popup_midp_note_alarm_window_ParamLimits

0x6841,	// (0x0000ff01) popup_midp_note_alarm_window

0x8c73,	// (0x00012333) data_form_pane_ParamLimits

0x8c7f,	// (0x0001233f) form_field_data_pane_g1

0x8c89,	// (0x00012349) form_field_data_pane_t1_ParamLimits

0x8ca3,	// (0x00012363) input_focus_pane_ParamLimits

0x8cb1,	// (0x00012371) data_form_wide_pane_ParamLimits

0x8cbd,	// (0x0001237d) form_field_data_wide_pane_g1

0x8cdd,	// (0x0001239d) form_field_data_wide_pane_t1_ParamLimits

0x84c9,	// (0x00011b89) input_focus_pane_cp6_ParamLimits

0x8f1c,	// (0x000125dc) input_popup_find_pane_g1_ParamLimits

0x8f1c,	// (0x000125dc) input_popup_find_pane_g1

0x5fe0,	// (0x0000f6a0) aid_navi_side_left_pane

0x5ff5,	// (0x0000f6b5) aid_navi_side_right_pane

0xad58,	// (0x00014418) bg_popup_window_pane_cp30_ParamLimits

0xad58,	// (0x00014418) bg_popup_window_pane_cp30

0xadd2,	// (0x00014492) popup_midp_note_alarm_window_g1_ParamLimits

0xadd2,	// (0x00014492) popup_midp_note_alarm_window_g1

0xae02,	// (0x000144c2) popup_midp_note_alarm_window_t1_ParamLimits

0xae02,	// (0x000144c2) popup_midp_note_alarm_window_t1

0xaea3,	// (0x00014563) popup_midp_note_alarm_window_t2_ParamLimits

0xaea3,	// (0x00014563) popup_midp_note_alarm_window_t2

0xaf51,	// (0x00014611) popup_midp_note_alarm_window_t3_ParamLimits

0xaf51,	// (0x00014611) popup_midp_note_alarm_window_t3

0xaf83,	// (0x00014643) popup_midp_note_alarm_window_t4_ParamLimits

0xaf83,	// (0x00014643) popup_midp_note_alarm_window_t4

0xafa9,	// (0x00014669) popup_midp_note_alarm_window_t5_ParamLimits

0xafa9,	// (0x00014669) popup_midp_note_alarm_window_t5

0x000a,

0xf89b,	// (0x00018f5b) popup_midp_note_alarm_window_t_ParamLimits

0xf89b,	// (0x00018f5b) popup_midp_note_alarm_window_t

0xb055,	// (0x00014715) wait_bar_pane_cp1_ParamLimits

0xb055,	// (0x00014715) wait_bar_pane_cp1

0x7e07,	// (0x000114c7) wait_anim_pane_copy1

0x7e07,	// (0x000114c7) wait_border_pane_copy1

0xaa36,	// (0x000140f6) wait_border_pane_g1_copy1

0x8cf4,	// (0x000123b4) form_field_popup_pane_g1

0x8cfc,	// (0x000123bc) form_field_popup_pane_t1_ParamLimits

0x8ca3,	// (0x00012363) input_focus_pane_cp7_ParamLimits

0x8d16,	// (0x000123d6) list_form_pane_ParamLimits

0x8d22,	// (0x000123e2) form_field_popup_wide_pane_g1

0x8d2a,	// (0x000123ea) form_field_popup_wide_pane_t1_ParamLimits

0x8ca3,	// (0x00012363) input_focus_pane_cp8_ParamLimits

0x8d3f,	// (0x000123ff) list_form_wide_pane_ParamLimits

0xbc08,	// (0x000152c8) aid_size_cell_graphic_pane

0x8e18,	// (0x000124d8) data_form_pane_t1_ParamLimits

0xb9a1,	// (0x00015061) data_form_wide_pane_t1_ParamLimits

0x9ef8,	// (0x000135b8) bg_status_flat_pane

0x7e47,	// (0x00011507) title_pane_t1_ParamLimits

0x7eaf,	// (0x0001156f) title_pane_t2_ParamLimits

0x7ed5,	// (0x00011595) title_pane_t3_ParamLimits

0xf55d,	// (0x00018c1d) title_pane_t_ParamLimits

0x93e8,	// (0x00012aa8) level_1_signal_ParamLimits

0x93f5,	// (0x00012ab5) level_2_signal_ParamLimits

0x9402,	// (0x00012ac2) level_3_signal_ParamLimits

0x940f,	// (0x00012acf) level_4_signal_ParamLimits

0x941c,	// (0x00012adc) level_5_signal_ParamLimits

0x9429,	// (0x00012ae9) level_6_signal_ParamLimits

0x9436,	// (0x00012af6) level_7_signal_ParamLimits

0x93e8,	// (0x00012aa8) level_1_battery_ParamLimits

0x93f5,	// (0x00012ab5) level_2_battery_ParamLimits

0x9402,	// (0x00012ac2) level_3_battery_ParamLimits

0x940f,	// (0x00012acf) level_4_battery_ParamLimits

0x941c,	// (0x00012adc) level_5_battery_ParamLimits

0x9429,	// (0x00012ae9) level_6_battery_ParamLimits

0x9436,	// (0x00012af6) level_7_battery_ParamLimits

0xac5d,	// (0x0001431d) bg_status_flat_pane_g1

0xac65,	// (0x00014325) bg_status_flat_pane_g2

0xac6d,	// (0x0001432d) bg_status_flat_pane_g3

0xac75,	// (0x00014335) bg_status_flat_pane_g4

0xac7d,	// (0x0001433d) bg_status_flat_pane_g5

0xac85,	// (0x00014345) bg_status_flat_pane_g6

0xac8d,	// (0x0001434d) bg_status_flat_pane_g7

0x7efd,	// (0x000115bd) tabs_3_active_pane_t1_ParamLimits

0x7efd,	// (0x000115bd) tabs_3_passive_pane_t1_ParamLimits

0x7f17,	// (0x000115d7) tabs_4_active_pane_t1_ParamLimits

0x7f17,	// (0x000115d7) tabs_4_1_passive_pane_t1_ParamLimits

0x8fb2,	// (0x00012672) tabs_2_active_pane_t1_ParamLimits

0x8fb2,	// (0x00012672) tabs_2_passive_pane_t1_ParamLimits

0x8fc4,	// (0x00012684) bg_active_tab_pane_cp4_ParamLimits

0x8fd2,	// (0x00012692) tabs_2_long_active_pane_t1_ParamLimits

0x8fe5,	// (0x000126a5) bg_passive_tab_pane_cp4_ParamLimits

0x6b80,	// (0x00010240) list_single_midp_graphic_pane_t1_ParamLimits

0x8fc4,	// (0x00012684) bg_active_tab_pane_cp5_ParamLimits

0x8ff1,	// (0x000126b1) tabs_3_long_active_pane_t1_ParamLimits

0x8fe5,	// (0x000126a5) bg_passive_tab_pane_cp5_ParamLimits

0x6b80,	// (0x00010240) list_single_midp_graphic_pane_t1

0x9ef8,	// (0x000135b8) bg_status_flat_pane_ParamLimits

0x9fbb,	// (0x0001367b) indicator_pane_cp2_ParamLimits

0x9fbb,	// (0x0001367b) indicator_pane_cp2

0xa0e6,	// (0x000137a6) navi_pane_srt_ParamLimits

0xa0e6,	// (0x000137a6) navi_pane_srt

0xa10a,	// (0x000137ca) popup_clock_digital_analogue_window_cp1

0x7fde,	// (0x0001169e) indicator_pane_t1

0x9ad9,	// (0x00013199) copy_highlight_pane

0x9ad9,	// (0x00013199) cursor_graphics_pane

0x9ad9,	// (0x00013199) graphic_within_text_pane

0x9ad9,	// (0x00013199) link_highlight_pane

0xb46c,	// (0x00014b2c) popup_preview_text_window_t5_ParamLimits

0xb46c,	// (0x00014b2c) popup_preview_text_window_t5

0x9bfd,	// (0x000132bd) cursor_digital_pane

0x9bfd,	// (0x000132bd) cursor_primary_pane

0x9c0e,	// (0x000132ce) cursor_primary_small_pane

0x9c16,	// (0x000132d6) cursor_secondary_pane

0x9c1e,	// (0x000132de) cursor_title_pane

0x9bfd,	// (0x000132bd) link_highlight_digital_pane

0x9c05,	// (0x000132c5) link_highlight_primary_pane

0x9c0e,	// (0x000132ce) link_highlight_primary_small_pane

0x9c16,	// (0x000132d6) link_highlight_secondary_pane

0x9c1e,	// (0x000132de) link_highlight_title_pane

0x9bfd,	// (0x000132bd) copy_highlight_digital_pane

0x9bfd,	// (0x000132bd) copy_highlight_primary_pane

0x9c0e,	// (0x000132ce) copy_highlight_primary_small_pane

0x9c16,	// (0x000132d6) copy_highlight_secondary_pane

0x9c1e,	// (0x000132de) copy_highlight_title_pane

0x9c16,	// (0x000132d6) graphic_text_digital_pane

0xacfb,	// (0x000143bb) graphic_text_primary_pane

0xad04,	// (0x000143c4) graphic_text_primary_small_pane

0x9c0e,	// (0x000132ce) graphic_text_secondary_pane

0x9bfd,	// (0x000132bd) graphic_text_title_pane

0x9c26,	// (0x000132e6) cursor_primary_pane_g1

0xaced,	// (0x000143ad) cursor_text_primary_t1

0xacd5,	// (0x00014395) cursor_primary_small_pane_g1

0xacdf,	// (0x0001439f) cursor_text_primary_small_t1

0xacbd,	// (0x0001437d) cursor_primary_small_pane_g1_copy1

0xacc7,	// (0x00014387) cursor_text_primary_small_t1_copy1

0xaca5,	// (0x00014365) cursor_text_title_t1

0xacb3,	// (0x00014373) cursor_title_pane_g1

0x9c26,	// (0x000132e6) cursor_digital_pane_g1

0x9c30,	// (0x000132f0) cursor_text_digital_t1

0xac46,	// (0x00014306) link_highlight_primary_pane_g1

0xac4e,	// (0x0001430e) link_highlight_primary_pane_t1

0x9c3e,	// (0x000132fe) link_highlight_primary_small_pane_g1

0x9c46,	// (0x00013306) link_highlight_primary_small_pane_t1

0x9c3e,	// (0x000132fe) link_highlight_secondary_pane_g1

0x9c55,	// (0x00013315) link_highlight_secondary_pane_t1

0xabba,	// (0x0001427a) link_highlight_title_pane_g1

0xabc2,	// (0x00014282) link_highlight_title_pane_t1

0xaba3,	// (0x00014263) link_highlight_digital_pane_g1

0xabab,	// (0x0001426b) link_highlight_digital_pane_t1

0xaa7b,	// (0x0001413b) copy_highlight_primary_pane_g1

0xaa83,	// (0x00014143) copy_highlight_primary_pane_t1

0xaa55,	// (0x00014115) copy_highlight_primary_small_pane_g1

0xaa6c,	// (0x0001412c) copy_highlight_primary_small_pane_t1

0x9c64,	// (0x00013324) copy_highlight_secondary_pane_g1

0x9c6c,	// (0x0001332c) copy_highlight_secondary_pane_t1

0xaa55,	// (0x00014115) copy_highlight_title_pane_g1

0xaa5d,	// (0x0001411d) copy_highlight_title_pane_t1

0xaa7b,	// (0x0001413b) copy_highlight_digital_pane_g1

0xbe14,	// (0x000154d4) copy_highlight_digital_pane_t1

0xbd68,	// (0x00015428) graphic_text_primary_pane_g1

0xbdf8,	// (0x000154b8) graphic_text_primary_pane_t1

0xbe06,	// (0x000154c6) graphic_text_primary_pane_t2

0x0001,

0xf9ca,	// (0x0001908a) graphic_text_primary_pane_t

0xbdd4,	// (0x00015494) graphic_text_primary_small_pane_g1

0xbddc,	// (0x0001549c) graphic_text_primary_small_pane_t1

0xbdea,	// (0x000154aa) graphic_text_primary_small_pane_t2

0x0001,

0xf9c5,	// (0x00019085) graphic_text_primary_small_pane_t

0xbdb0,	// (0x00015470) graphic_text_secondary_pane_g1

0xbdb8,	// (0x00015478) graphic_text_secondary_pane_t1

0xbdc6,	// (0x00015486) graphic_text_secondary_pane_t2

0x0001,

0xf9c0,	// (0x00019080) graphic_text_secondary_pane_t

0xbd8c,	// (0x0001544c) graphic_text_title_pane_g1

0xbd94,	// (0x00015454) graphic_text_title_pane_t1

0xbda2,	// (0x00015462) graphic_text_title_pane_t2

0x0001,

0xf9bb,	// (0x0001907b) graphic_text_title_pane_t

0xbd68,	// (0x00015428) graphic_text_digital_pane_g1

0xbd70,	// (0x00015430) graphic_text_digital_pane_t1

0xbd7e,	// (0x0001543e) graphic_text_digital_pane_t2

0x0001,

0xf9b6,	// (0x00019076) graphic_text_digital_pane_t

0x7ee7,	// (0x000115a7) navi_icon_pane_srt_ParamLimits

0x7ee7,	// (0x000115a7) navi_icon_pane_srt

0x7e07,	// (0x000114c7) navi_midp_pane_srt

0x7e07,	// (0x000114c7) navi_navi_pane_srt

0x7ee7,	// (0x000115a7) navi_text_pane_srt_ParamLimits

0x7ee7,	// (0x000115a7) navi_text_pane_srt

0xbd33,	// (0x000153f3) navi_navi_icon_text_pane_srt

0xbd3b,	// (0x000153fb) navi_navi_pane_srt_g1_ParamLimits

0xbd3b,	// (0x000153fb) navi_navi_pane_srt_g1

0xbd4d,	// (0x0001540d) navi_navi_pane_srt_g2_ParamLimits

0xbd4d,	// (0x0001540d) navi_navi_pane_srt_g2

0x0001,

0xf9b1,	// (0x00019071) navi_navi_pane_srt_g_ParamLimits

0xf9b1,	// (0x00019071) navi_navi_pane_srt_g

0xbd5f,	// (0x0001541f) navi_navi_tabs_pane_srt

0xbd33,	// (0x000153f3) navi_navi_text_pane_srt

0xbd33,	// (0x000153f3) navi_navi_volume_pane_srt

0xbd24,	// (0x000153e4) navi_navi_text_pane_srt_t1

0x6ef4,	// (0x000105b4) navi_navi_volume_pane_srt_g1

0x6efc,	// (0x000105bc) volume_small_pane_srt_ParamLimits

0x6efc,	// (0x000105bc) volume_small_pane_srt

0x62b7,	// (0x0000f977) volume_small_pane_srt_g1_ParamLimits

0x62b7,	// (0x0000f977) volume_small_pane_srt_g1

0x62c7,	// (0x0000f987) volume_small_pane_srt_g2_ParamLimits

0x62c7,	// (0x0000f987) volume_small_pane_srt_g2

0x62d8,	// (0x0000f998) volume_small_pane_srt_g3_ParamLimits

0x62d8,	// (0x0000f998) volume_small_pane_srt_g3

0x62e9,	// (0x0000f9a9) volume_small_pane_srt_g4_ParamLimits

0x62e9,	// (0x0000f9a9) volume_small_pane_srt_g4

0x62fa,	// (0x0000f9ba) volume_small_pane_srt_g5_ParamLimits

0x62fa,	// (0x0000f9ba) volume_small_pane_srt_g5

0x630b,	// (0x0000f9cb) volume_small_pane_srt_g6_ParamLimits

0x630b,	// (0x0000f9cb) volume_small_pane_srt_g6

0x631c,	// (0x0000f9dc) volume_small_pane_srt_g7_ParamLimits

0x631c,	// (0x0000f9dc) volume_small_pane_srt_g7

0x632d,	// (0x0000f9ed) volume_small_pane_srt_g8_ParamLimits

0x632d,	// (0x0000f9ed) volume_small_pane_srt_g8

0x633e,	// (0x0000f9fe) volume_small_pane_srt_g9_ParamLimits

0x633e,	// (0x0000f9fe) volume_small_pane_srt_g9

0x634f,	// (0x0000fa0f) volume_small_pane_srt_g10_ParamLimits

0x634f,	// (0x0000fa0f) volume_small_pane_srt_g10

0x0009,

0xf75e,	// (0x00018e1e) volume_small_pane_srt_g_ParamLimits

0xf75e,	// (0x00018e1e) volume_small_pane_srt_g

0x82cf,	// (0x0001198f) query_popup_data_pane_cp2

0xbd0a,	// (0x000153ca) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xbd0a,	// (0x000153ca) navi_navi_icon_text_pane_srt_t1

0xacfb,	// (0x000143bb) navi_tabs_2_long_pane_srt

0xacfb,	// (0x000143bb) navi_tabs_2_pane_srt

0xacfb,	// (0x000143bb) navi_tabs_3_long_pane_srt

0xacfb,	// (0x000143bb) navi_tabs_3_pane_srt

0xacfb,	// (0x000143bb) navi_tabs_4_pane_srt

0x6ed4,	// (0x00010594) tabs_2_active_pane_srt_ParamLimits

0x6ed4,	// (0x00010594) tabs_2_active_pane_srt

0x6ee4,	// (0x000105a4) tabs_2_passive_pane_srt_ParamLimits

0x6ee4,	// (0x000105a4) tabs_2_passive_pane_srt

0x9e1d,	// (0x000134dd) bg_passive_tab_pane_cp1_srt_ParamLimits

0x9e1d,	// (0x000134dd) bg_passive_tab_pane_cp1_srt

0xbcd6,	// (0x00015396) bg_passive_tab_pane_g1_cp1_srt

0x9733,	// (0x00012df3) bg_passive_tab_pane_g2_cp1_srt

0xbcdf,	// (0x0001539f) bg_passive_tab_pane_g3_cp1_srt

0x7ee7,	// (0x000115a7) bg_active_tab_pane_cp1_srt_ParamLimits

0x7ee7,	// (0x000115a7) bg_active_tab_pane_cp1_srt

0xbce8,	// (0x000153a8) tabs_2_active_pane_srt_g1

0xbcf0,	// (0x000153b0) tabs_2_active_pane_srt_t1_ParamLimits

0xbcf0,	// (0x000153b0) tabs_2_active_pane_srt_t1

0xbcd6,	// (0x00015396) bg_active_tab_pane_g1_cp1_srt

0x9733,	// (0x00012df3) bg_active_tab_pane_g2_cp1_srt

0xbcdf,	// (0x0001539f) bg_active_tab_pane_g3_cp1_srt

0x6ea1,	// (0x00010561) tabs_3_active_pane_srt_ParamLimits

0x6ea1,	// (0x00010561) tabs_3_active_pane_srt

0x6eb2,	// (0x00010572) tabs_3_passive_pane_cp_srt_ParamLimits

0x6eb2,	// (0x00010572) tabs_3_passive_pane_cp_srt

0x6ec3,	// (0x00010583) tabs_3_passive_pane_srt_ParamLimits

0x6ec3,	// (0x00010583) tabs_3_passive_pane_srt

0x9e1d,	// (0x000134dd) bg_passive_tab_pane_cp2_srt_ParamLimits

0x9e1d,	// (0x000134dd) bg_passive_tab_pane_cp2_srt

0x9c7b,	// (0x0001333b) bg_passive_tab_pane_g1_cp2_srt

0x9733,	// (0x00012df3) bg_passive_tab_pane_g2_cp2_srt

0x9c84,	// (0x00013344) bg_passive_tab_pane_g3_cp2_srt

0x7ee7,	// (0x000115a7) bg_active_tab_pane_cp2_srt_ParamLimits

0x7ee7,	// (0x000115a7) bg_active_tab_pane_cp2_srt

0xbcbc,	// (0x0001537c) tabs_3_active_pane_srt_g1

0xbcc4,	// (0x00015384) tabs_3_active_pane_srt_t1_ParamLimits

0xbcc4,	// (0x00015384) tabs_3_active_pane_srt_t1

0x9c7b,	// (0x0001333b) bg_active_tab_pane_g1_cp2_srt

0x9733,	// (0x00012df3) bg_active_tab_pane_g2_cp2_srt

0x9c84,	// (0x00013344) bg_active_tab_pane_g3_cp2_srt

0x6e59,	// (0x00010519) tabs_4_active_pane_srt_ParamLimits

0x6e59,	// (0x00010519) tabs_4_active_pane_srt

0x6e6b,	// (0x0001052b) tabs_4_passive_pane_cp2_srt_ParamLimits

0x6e6b,	// (0x0001052b) tabs_4_passive_pane_cp2_srt

0x64b2,	// (0x0000fb72) aid_size_cell_toolbar

0x8fe5,	// (0x000126a5) main_idle_act_pane_ParamLimits

0x6675,	// (0x0000fd35) popup_large_graphic_colour_window_ParamLimits

0x69da,	// (0x0001009a) popup_toolbar_window_ParamLimits

0x69da,	// (0x0001009a) popup_toolbar_window

0xba21,	// (0x000150e1) list_single_graphic_2heading_pane_ParamLimits

0xba21,	// (0x000150e1) list_single_graphic_2heading_pane

0x919e,	// (0x0001285e) aid_size_cell_apps_grid_lsc_pane

0x91b0,	// (0x00012870) aid_size_cell_apps_grid_prt_pane

0x9e1d,	// (0x000134dd) bg_wml_button_pane_cp1_ParamLimits

0x9e1d,	// (0x000134dd) bg_wml_button_pane_cp1

0xa6b4,	// (0x00013d74) form_midp_field_text_pane_t1_ParamLimits

0xa45d,	// (0x00013b1d) input_focus_pane_cp050_ParamLimits

0xa6ef,	// (0x00013daf) list_midp_form_text_pane_ParamLimits

0xa691,	// (0x00013d51) input_focus_pane_cp051_ParamLimits

0xa6a5,	// (0x00013d65) list_midp_choice_pane_ParamLimits

0xa513,	// (0x00013bd3) list_single_2graphic_pane_cp3_ParamLimits

0xa513,	// (0x00013bd3) list_single_2graphic_pane_cp3

0xa53e,	// (0x00013bfe) list_single_midp_graphic_pane_ParamLimits

0xa53e,	// (0x00013bfe) list_single_midp_graphic_pane

0x6a85,	// (0x00010145) list_single_graphic_2heading_pane_g1_ParamLimits

0x6a85,	// (0x00010145) list_single_graphic_2heading_pane_g1

0x6a91,	// (0x00010151) list_single_graphic_2heading_pane_g4_ParamLimits

0x6a91,	// (0x00010151) list_single_graphic_2heading_pane_g4

0x6a9d,	// (0x0001015d) list_single_graphic_2heading_pane_g5_ParamLimits

0x6a9d,	// (0x0001015d) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b1,	// (0x00018e71) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b1,	// (0x00018e71) list_single_graphic_2heading_pane_g

0x6aa9,	// (0x00010169) list_single_graphic_2heading_pane_t1_ParamLimits

0x6aa9,	// (0x00010169) list_single_graphic_2heading_pane_t1

0x6abd,	// (0x0001017d) list_single_graphic_2heading_pane_t2_ParamLimits

0x6abd,	// (0x0001017d) list_single_graphic_2heading_pane_t2

0x6ad9,	// (0x00010199) list_single_graphic_2heading_pane_t3_ParamLimits

0x6ad9,	// (0x00010199) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b8,	// (0x00018e78) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b8,	// (0x00018e78) list_single_graphic_2heading_pane_t

0xa261,	// (0x00013921) bg_popup_sub_pane_cp2

0xa28b,	// (0x0001394b) grid_toobar_pane

0x6af1,	// (0x000101b1) cell_toolbar_pane_ParamLimits

0x6af1,	// (0x000101b1) cell_toolbar_pane

0xa2dd,	// (0x0001399d) cell_toolbar_pane_g1_ParamLimits

0xa2dd,	// (0x0001399d) cell_toolbar_pane_g1

0xa2f1,	// (0x000139b1) cell_toolbar_pane_g2_ParamLimits

0xa2f1,	// (0x000139b1) cell_toolbar_pane_g2

0x0001,

0xf7c6,	// (0x00018e86) cell_toolbar_pane_g_ParamLimits

0xf7c6,	// (0x00018e86) cell_toolbar_pane_g

0xa313,	// (0x000139d3) grid_highlight_pane_cp2_ParamLimits

0xa313,	// (0x000139d3) grid_highlight_pane_cp2

0xa32d,	// (0x000139ed) toolbar_button_pane

0xa339,	// (0x000139f9) toolbar_button_pane_g1

0xa341,	// (0x00013a01) toolbar_button_pane_g2

0xa349,	// (0x00013a09) toolbar_button_pane_g3

0xa351,	// (0x00013a11) toolbar_button_pane_g4

0xa359,	// (0x00013a19) toolbar_button_pane_g5

0xa361,	// (0x00013a21) toolbar_button_pane_g6

0xa369,	// (0x00013a29) toolbar_button_pane_g7

0xa371,	// (0x00013a31) toolbar_button_pane_g8

0xa379,	// (0x00013a39) toolbar_button_pane_g9

0x0009,

0xf7cb,	// (0x00018e8b) toolbar_button_pane_g

0x6b29,	// (0x000101e9) list_single_2graphic_pane_g1_cp3_ParamLimits

0x6b29,	// (0x000101e9) list_single_2graphic_pane_g1_cp3

0x6b35,	// (0x000101f5) list_single_2graphic_pane_g2_cp3_ParamLimits

0x6b35,	// (0x000101f5) list_single_2graphic_pane_g2_cp3

0x6b46,	// (0x00010206) list_single_2graphic_pane_g3_cp3

0x6b4e,	// (0x0001020e) list_single_2graphic_pane_g4_cp3_ParamLimits

0x6b4e,	// (0x0001020e) list_single_2graphic_pane_g4_cp3

0x6b5a,	// (0x0001021a) list_single_2graphic_pane_t1_cp3_ParamLimits

0x6b5a,	// (0x0001021a) list_single_2graphic_pane_t1_cp3

0x6b74,	// (0x00010234) list_single_midp_graphic_pane_g2_ParamLimits

0x6b74,	// (0x00010234) list_single_midp_graphic_pane_g2

0x64ba,	// (0x0000fb7a) aid_zoom_text_primary

0x64c2,	// (0x0000fb82) aid_zoom_text_secondary

0x9d38,	// (0x000133f8) status_small_pane_g7_ParamLimits

0x9d38,	// (0x000133f8) status_small_pane_g7

0x9d5b,	// (0x0001341b) status_small_pane_t1_ParamLimits

0x7e1e,	// (0x000114de) title_pane_g2

0x0003,

0xf554,	// (0x00018c14) title_pane_g

0x8370,	// (0x00011a30) aid_size_cell_colour_1_pane_ParamLimits

0x8370,	// (0x00011a30) aid_size_cell_colour_1_pane

0x8384,	// (0x00011a44) aid_size_cell_colour_2_pane_ParamLimits

0x8384,	// (0x00011a44) aid_size_cell_colour_2_pane

0x8398,	// (0x00011a58) aid_size_cell_colour_3_pane_ParamLimits

0x8398,	// (0x00011a58) aid_size_cell_colour_3_pane

0x83ac,	// (0x00011a6c) aid_size_cell_colour_4_pane_ParamLimits

0x83ac,	// (0x00011a6c) aid_size_cell_colour_4_pane

0x5f1c,	// (0x0000f5dc) title_pane_stacon_g1_ParamLimits

0x5f1c,	// (0x0000f5dc) title_pane_stacon_g1

0xaada,	// (0x0001419a) popup_note_wait_window_g3_ParamLimits

0xaada,	// (0x0001419a) popup_note_wait_window_g3

0xab50,	// (0x00014210) popup_note_wait_window_t5_ParamLimits

0xab50,	// (0x00014210) popup_note_wait_window_t5

0x7e07,	// (0x000114c7) main_feb_china_hwr_fs_writing_pane

0x655e,	// (0x0000fc1e) popup_feb_china_hwr_fs_window_ParamLimits

0x655e,	// (0x0000fc1e) popup_feb_china_hwr_fs_window

0x6b96,	// (0x00010256) aid_size_cell_hwr_fs_ParamLimits

0x6b96,	// (0x00010256) aid_size_cell_hwr_fs

0xa45d,	// (0x00013b1d) bg_popup_sub_pane_cp3_ParamLimits

0xa45d,	// (0x00013b1d) bg_popup_sub_pane_cp3

0x6bab,	// (0x0001026b) grid_hwr_fs_pane_ParamLimits

0x6bab,	// (0x0001026b) grid_hwr_fs_pane

0x6bc3,	// (0x00010283) linegrid_hwr_fs_pane_ParamLimits

0x6bc3,	// (0x00010283) linegrid_hwr_fs_pane

0x6bd3,	// (0x00010293) cell_hwr_fs_pane_ParamLimits

0x6bd3,	// (0x00010293) cell_hwr_fs_pane

0xa469,	// (0x00013b29) linegrid_hwr_fs_pane_g1_ParamLimits

0xa469,	// (0x00013b29) linegrid_hwr_fs_pane_g1

0xa475,	// (0x00013b35) linegrid_hwr_fs_pane_g2_ParamLimits

0xa475,	// (0x00013b35) linegrid_hwr_fs_pane_g2

0xa487,	// (0x00013b47) linegrid_hwr_fs_pane_g3_ParamLimits

0xa487,	// (0x00013b47) linegrid_hwr_fs_pane_g3

0x6bf5,	// (0x000102b5) linegrid_hwr_fs_pane_g4_ParamLimits

0x6bf5,	// (0x000102b5) linegrid_hwr_fs_pane_g4

0x6c0f,	// (0x000102cf) linegrid_hwr_fs_pane_g5_ParamLimits

0x6c0f,	// (0x000102cf) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f1,	// (0x00018eb1) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f1,	// (0x00018eb1) linegrid_hwr_fs_pane_g

0xa493,	// (0x00013b53) cell_hwr_fs_pane_g1_ParamLimits

0xa493,	// (0x00013b53) cell_hwr_fs_pane_g1

0xa198,	// (0x00013858) cell_hwr_fs_pane_g2_ParamLimits

0xa198,	// (0x00013858) cell_hwr_fs_pane_g2

0xa4a9,	// (0x00013b69) cell_hwr_fs_pane_g3_ParamLimits

0xa4a9,	// (0x00013b69) cell_hwr_fs_pane_g3

0xa4b6,	// (0x00013b76) cell_hwr_fs_pane_g4_ParamLimits

0xa4b6,	// (0x00013b76) cell_hwr_fs_pane_g4

0x0003,

0xf7fc,	// (0x00018ebc) cell_hwr_fs_pane_g_ParamLimits

0xf7fc,	// (0x00018ebc) cell_hwr_fs_pane_g

0x6c25,	// (0x000102e5) cell_hwr_fs_pane_t1

0x7e07,	// (0x000114c7) grid_highlight_pane_cp6

0x7e07,	// (0x000114c7) main_idle_act2_pane

0x8f58,	// (0x00012618) aid_inside_area_popup_secondary

0xb18f,	// (0x0001484f) aid_inside_area_window_primary_ParamLimits

0xb18f,	// (0x0001484f) aid_inside_area_window_primary

0xbe23,	// (0x000154e3) ai2_news_ticker_pane

0xbe2b,	// (0x000154eb) aid_size_cell_ai1_link_ParamLimits

0xbe2b,	// (0x000154eb) aid_size_cell_ai1_link

0xbe45,	// (0x00015505) popup_ai2_data_window_ParamLimits

0xbe45,	// (0x00015505) popup_ai2_data_window

0xbe59,	// (0x00015519) popup_ai2_link_window_ParamLimits

0xbe59,	// (0x00015519) popup_ai2_link_window

0xa45d,	// (0x00013b1d) bg_popup_sub_pane_cp4_ParamLimits

0xa45d,	// (0x00013b1d) bg_popup_sub_pane_cp4

0xbe6d,	// (0x0001552d) grid_ai2_link_pane_ParamLimits

0xbe6d,	// (0x0001552d) grid_ai2_link_pane

0xbe84,	// (0x00015544) popup_ai2_link_window_g1_ParamLimits

0xbe84,	// (0x00015544) popup_ai2_link_window_g1

0xbe90,	// (0x00015550) popup_ai2_link_window_g2_ParamLimits

0xbe90,	// (0x00015550) popup_ai2_link_window_g2

0x0001,

0xf9cf,	// (0x0001908f) popup_ai2_link_window_g_ParamLimits

0xf9cf,	// (0x0001908f) popup_ai2_link_window_g

0xbe9f,	// (0x0001555f) ai2_mp_button_pane

0xbea7,	// (0x00015567) ai2_mp_volume_pane

0xa691,	// (0x00013d51) bg_popup_sub_pane_cp5_ParamLimits

0xa691,	// (0x00013d51) bg_popup_sub_pane_cp5

0xbeaf,	// (0x0001556f) heading_ai2_gene_pane_ParamLimits

0xbeaf,	// (0x0001556f) heading_ai2_gene_pane

0xbebb,	// (0x0001557b) list_ai2_gene_pane_ParamLimits

0xbebb,	// (0x0001557b) list_ai2_gene_pane

0xbf03,	// (0x000155c3) cell_ai2_link_pane_ParamLimits

0xbf03,	// (0x000155c3) cell_ai2_link_pane

0xbf19,	// (0x000155d9) cell_ai2_link_pane_g1

0x7e07,	// (0x000114c7) grid_highlight_pane_cp7

0x6f11,	// (0x000105d1) ai2_mp_volume_pane_g1

0xbfea,	// (0x000156aa) ai2_mp_volume_pane_g2

0xbf5f,	// (0x0001561f) list_ai2_gene_pane_t1

0xbff2,	// (0x000156b2) ai2_mp_volume_pane_g3

0x0002,

0xf9e8,	// (0x000190a8) ai2_mp_volume_pane_g

0x6f19,	// (0x000105d9) volume_small_pane_cp3

0xbffa,	// (0x000156ba) aid_size_cell_ai2_button

0xc002,	// (0x000156c2) grid_ai2_button_pane

0xc00b,	// (0x000156cb) cell_ai2_button_pane_ParamLimits

0xc00b,	// (0x000156cb) cell_ai2_button_pane

0x7dfd,	// (0x000114bd) cell_ai2_button_pane_g1

0x7e07,	// (0x000114c7) grid_highlight_pane_cp8

0xbfaa,	// (0x0001566a) ai2_gene_pane_t1_ParamLimits

0xbfaa,	// (0x0001566a) ai2_gene_pane_t1

0x64a8,	// (0x0000fb68) aid_height_parent_landscape

0xb80d,	// (0x00014ecd) aid_height_set_list

0xb81e,	// (0x00014ede) aid_size_parent

0xbc08,	// (0x000152c8) aid_size_cell_graphic_pane_ParamLimits

0xbecb,	// (0x0001558b) popup_ai2_data_window_g1_ParamLimits

0xbecb,	// (0x0001558b) popup_ai2_data_window_g1

0xbed7,	// (0x00015597) ai2_news_ticker_pane_g1

0xbedf,	// (0x0001559f) ai2_news_ticker_pane_g2

0x0001,

0xf9d4,	// (0x00019094) ai2_news_ticker_pane_g

0xbee7,	// (0x000155a7) ai2_news_ticker_pane_t1

0xbef5,	// (0x000155b5) ai2_news_ticker_pane_t2

0x0001,

0xf9d9,	// (0x00019099) ai2_news_ticker_pane_t

0xbf22,	// (0x000155e2) heading_ai2_gene_pane_g1

0xbf2a,	// (0x000155ea) heading_ai2_gene_pane_t1_ParamLimits

0xbf2a,	// (0x000155ea) heading_ai2_gene_pane_t1

0xbf3f,	// (0x000155ff) list_highlight_pane_cp6

0xbf47,	// (0x00015607) ai2_gene_pane_ParamLimits

0xbf47,	// (0x00015607) ai2_gene_pane

0xbf6d,	// (0x0001562d) list_ai2_gene_pane_t2

0x0001,

0xf9de,	// (0x0001909e) list_ai2_gene_pane_t

0xbf7b,	// (0x0001563b) list_highlight_pane_cp8_ParamLimits

0xbf7b,	// (0x0001563b) list_highlight_pane_cp8

0xbf8c,	// (0x0001564c) ai2_gene_pane_g1_ParamLimits

0xbf8c,	// (0x0001564c) ai2_gene_pane_g1

0xbf9e,	// (0x0001565e) ai2_gene_pane_g2_ParamLimits

0xbf9e,	// (0x0001565e) ai2_gene_pane_g2

0x0001,

0xf9e3,	// (0x000190a3) ai2_gene_pane_g_ParamLimits

0xf9e3,	// (0x000190a3) ai2_gene_pane_g

0x86ee,	// (0x00011dae) scroll_pane_cp12

0x6467,	// (0x0000fb27) control_pane_t3_ParamLimits

0x6467,	// (0x0000fb27) control_pane_t3

0x9d4c,	// (0x0001340c) status_small_pane_g8_ParamLimits

0x9d4c,	// (0x0001340c) status_small_pane_g8

0x6640,	// (0x0000fd00) popup_find_window_ParamLimits

0x6855,	// (0x0000ff15) popup_note_image_window_ParamLimits

0x8785,	// (0x00011e45) list_double2_graphic_pane_vc_g1_ParamLimits

0x8785,	// (0x00011e45) list_double2_graphic_pane_vc_g1

0x870b,	// (0x00011dcb) list_double2_graphic_pane_vc_g2_ParamLimits

0x870b,	// (0x00011dcb) list_double2_graphic_pane_vc_g2

0x8717,	// (0x00011dd7) list_double2_graphic_pane_vc_g3_ParamLimits

0x8717,	// (0x00011dd7) list_double2_graphic_pane_vc_g3

0x0002,

0xf7bf,	// (0x00018e7f) list_double2_graphic_pane_vc_g_ParamLimits

0xf7bf,	// (0x00018e7f) list_double2_graphic_pane_vc_g

0xa2c7,	// (0x00013987) list_double2_graphic_pane_vc_t1_ParamLimits

0xa2c7,	// (0x00013987) list_double2_graphic_pane_vc_t1

0x870b,	// (0x00011dcb) list_single_heading_pane_vc_g1_ParamLimits

0x870b,	// (0x00011dcb) list_single_heading_pane_vc_g1

0x8717,	// (0x00011dd7) list_single_heading_pane_vc_g2_ParamLimits

0x8717,	// (0x00011dd7) list_single_heading_pane_vc_g2

0x0001,

0xf5ce,	// (0x00018c8e) list_single_heading_pane_vc_g_ParamLimits

0xf5ce,	// (0x00018c8e) list_single_heading_pane_vc_g

0xa381,	// (0x00013a41) list_single_heading_pane_vc_t1_ParamLimits

0xa381,	// (0x00013a41) list_single_heading_pane_vc_t1

0xa397,	// (0x00013a57) list_single_heading_pane_vc_t2_ParamLimits

0xa397,	// (0x00013a57) list_single_heading_pane_vc_t2

0x0001,

0xf7e0,	// (0x00018ea0) list_single_heading_pane_vc_t_ParamLimits

0xf7e0,	// (0x00018ea0) list_single_heading_pane_vc_t

0xa3b3,	// (0x00013a73) list_setting_number_pane_vc_g1_ParamLimits

0xa3b3,	// (0x00013a73) list_setting_number_pane_vc_g1

0xa3bf,	// (0x00013a7f) list_setting_number_pane_vc_g2_ParamLimits

0xa3bf,	// (0x00013a7f) list_setting_number_pane_vc_g2

0x0001,

0xf7e5,	// (0x00018ea5) list_setting_number_pane_vc_g_ParamLimits

0xf7e5,	// (0x00018ea5) list_setting_number_pane_vc_g

0xa3cb,	// (0x00013a8b) list_setting_number_pane_vc_t1_ParamLimits

0xa3cb,	// (0x00013a8b) list_setting_number_pane_vc_t1

0xa3df,	// (0x00013a9f) list_setting_number_pane_vc_t2_ParamLimits

0xa3df,	// (0x00013a9f) list_setting_number_pane_vc_t2

0xa3f9,	// (0x00013ab9) list_setting_number_pane_vc_t3_ParamLimits

0xa3f9,	// (0x00013ab9) list_setting_number_pane_vc_t3

0x0002,

0xf7ea,	// (0x00018eaa) list_setting_number_pane_vc_t_ParamLimits

0xf7ea,	// (0x00018eaa) list_setting_number_pane_vc_t

0xa421,	// (0x00013ae1) set_value_pane_vc_ParamLimits

0xa421,	// (0x00013ae1) set_value_pane_vc

0xba21,	// (0x000150e1) list_double2_graphic_pane_vc_ParamLimits

0xba21,	// (0x000150e1) list_double2_graphic_pane_vc

0xba34,	// (0x000150f4) list_double2_large_graphic_pane_vc_ParamLimits

0xba34,	// (0x000150f4) list_double2_large_graphic_pane_vc

0xba21,	// (0x000150e1) list_double2_pane_vc_ParamLimits

0xba21,	// (0x000150e1) list_double2_pane_vc

0xba21,	// (0x000150e1) list_double_graphic_heading_pane_vc_ParamLimits

0xba21,	// (0x000150e1) list_double_graphic_heading_pane_vc

0xba21,	// (0x000150e1) list_double_graphic_pane_vc_ParamLimits

0xba21,	// (0x000150e1) list_double_graphic_pane_vc

0xba21,	// (0x000150e1) list_double_heading_pane_vc_ParamLimits

0xba21,	// (0x000150e1) list_double_heading_pane_vc

0xba34,	// (0x000150f4) list_double_large_graphic_pane_vc_ParamLimits

0xba34,	// (0x000150f4) list_double_large_graphic_pane_vc

0xba21,	// (0x000150e1) list_double_number_pane_vc_ParamLimits

0xba21,	// (0x000150e1) list_double_number_pane_vc

0xba21,	// (0x000150e1) list_double_pane_vc_ParamLimits

0xba21,	// (0x000150e1) list_double_pane_vc

0xba21,	// (0x000150e1) list_double_time_pane_vc_ParamLimits

0xba21,	// (0x000150e1) list_double_time_pane_vc

0xba21,	// (0x000150e1) list_setting_number_pane_vc_ParamLimits

0xba21,	// (0x000150e1) list_setting_number_pane_vc

0xba21,	// (0x000150e1) list_setting_pane_vc_ParamLimits

0xba21,	// (0x000150e1) list_setting_pane_vc

0xba21,	// (0x000150e1) list_single_graphic_heading_pane_vc_ParamLimits

0xba21,	// (0x000150e1) list_single_graphic_heading_pane_vc

0xba21,	// (0x000150e1) list_single_heading_pane_vc_ParamLimits

0xba21,	// (0x000150e1) list_single_heading_pane_vc

0xba46,	// (0x00015106) list_single_number_heading_pane_vc_ParamLimits

0xba46,	// (0x00015106) list_single_number_heading_pane_vc

0xc03e,	// (0x000156fe) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xc03e,	// (0x000156fe) list_double_graphic_heading_pane_vc_g1

0xc04a,	// (0x0001570a) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xc04a,	// (0x0001570a) list_double_graphic_heading_pane_vc_g2

0xc056,	// (0x00015716) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xc056,	// (0x00015716) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9ef,	// (0x000190af) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9ef,	// (0x000190af) list_double_graphic_heading_pane_vc_g

0xc062,	// (0x00015722) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xc062,	// (0x00015722) list_double_graphic_heading_pane_vc_t1

0xc07e,	// (0x0001573e) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xc07e,	// (0x0001573e) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f6,	// (0x000190b6) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f6,	// (0x000190b6) list_double_graphic_heading_pane_vc_t

0xa3b3,	// (0x00013a73) list_setting_pane_vc_g1_ParamLimits

0xa3b3,	// (0x00013a73) list_setting_pane_vc_g1

0xa3bf,	// (0x00013a7f) list_setting_pane_vc_g2_ParamLimits

0xa3bf,	// (0x00013a7f) list_setting_pane_vc_g2

0x0001,

0xf7e5,	// (0x00018ea5) list_setting_pane_vc_g_ParamLimits

0xf7e5,	// (0x00018ea5) list_setting_pane_vc_g

0xc299,	// (0x00015959) list_setting_pane_vc_t1_ParamLimits

0xc299,	// (0x00015959) list_setting_pane_vc_t1

0xc2b3,	// (0x00015973) list_setting_pane_vc_t2_ParamLimits

0xc2b3,	// (0x00015973) list_setting_pane_vc_t2

0x0001,

0xfa39,	// (0x000190f9) list_setting_pane_vc_t_ParamLimits

0xfa39,	// (0x000190f9) list_setting_pane_vc_t

0xa421,	// (0x00013ae1) set_value_pane_cp_vc_ParamLimits

0xa421,	// (0x00013ae1) set_value_pane_cp_vc

0x870b,	// (0x00011dcb) list_single_number_heading_pane_vc_g1_ParamLimits

0x870b,	// (0x00011dcb) list_single_number_heading_pane_vc_g1

0x8717,	// (0x00011dd7) list_single_number_heading_pane_vc_g2_ParamLimits

0x8717,	// (0x00011dd7) list_single_number_heading_pane_vc_g2

0x0001,

0xf5ce,	// (0x00018c8e) list_single_number_heading_pane_vc_g_ParamLimits

0xf5ce,	// (0x00018c8e) list_single_number_heading_pane_vc_g

0xa381,	// (0x00013a41) list_single_number_heading_pane_vc_t1_ParamLimits

0xa381,	// (0x00013a41) list_single_number_heading_pane_vc_t1

0xc2cb,	// (0x0001598b) list_single_number_heading_pane_vc_t2_ParamLimits

0xc2cb,	// (0x0001598b) list_single_number_heading_pane_vc_t2

0x8773,	// (0x00011e33) list_single_number_heading_pane_vc_t3_ParamLimits

0x8773,	// (0x00011e33) list_single_number_heading_pane_vc_t3

0x0002,

0xfa3e,	// (0x000190fe) list_single_number_heading_pane_vc_t_ParamLimits

0xfa3e,	// (0x000190fe) list_single_number_heading_pane_vc_t

0x8785,	// (0x00011e45) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x8785,	// (0x00011e45) list_single_graphic_heading_pane_vc_g1

0x870b,	// (0x00011dcb) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x870b,	// (0x00011dcb) list_single_graphic_heading_pane_vc_g4

0x8717,	// (0x00011dd7) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x8717,	// (0x00011dd7) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7bf,	// (0x00018e7f) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7bf,	// (0x00018e7f) list_single_graphic_heading_pane_vc_g

0xa381,	// (0x00013a41) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xa381,	// (0x00013a41) list_single_graphic_heading_pane_vc_t1

0xc2df,	// (0x0001599f) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xc2df,	// (0x0001599f) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa45,	// (0x00019105) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa45,	// (0x00019105) list_single_graphic_heading_pane_vc_t

0x870b,	// (0x00011dcb) list_double2_pane_vc_g1_ParamLimits

0x870b,	// (0x00011dcb) list_double2_pane_vc_g1

0x8717,	// (0x00011dd7) list_double2_pane_vc_g2_ParamLimits

0x8717,	// (0x00011dd7) list_double2_pane_vc_g2

0x0001,

0xf5ce,	// (0x00018c8e) list_double2_pane_vc_g_ParamLimits

0xf5ce,	// (0x00018c8e) list_double2_pane_vc_g

0xb9be,	// (0x0001507e) list_double2_pane_vc_t1_ParamLimits

0xb9be,	// (0x0001507e) list_double2_pane_vc_t1

0xc2f3,	// (0x000159b3) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xc2f3,	// (0x000159b3) list_double2_large_graphic_pane_vc_g1

0xc2ff,	// (0x000159bf) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xc2ff,	// (0x000159bf) list_double2_large_graphic_pane_vc_g2

0xc30b,	// (0x000159cb) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xc30b,	// (0x000159cb) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa4a,	// (0x0001910a) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa4a,	// (0x0001910a) list_double2_large_graphic_pane_vc_g

0xc317,	// (0x000159d7) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xc317,	// (0x000159d7) list_double2_large_graphic_pane_vc_t1

0xc32d,	// (0x000159ed) list_double_time_pane_vc_g1_ParamLimits

0xc32d,	// (0x000159ed) list_double_time_pane_vc_g1

0xc339,	// (0x000159f9) list_double_time_pane_vc_g2_ParamLimits

0xc339,	// (0x000159f9) list_double_time_pane_vc_g2

0x0001,

0xfa51,	// (0x00019111) list_double_time_pane_vc_g_ParamLimits

0xfa51,	// (0x00019111) list_double_time_pane_vc_g

0xc345,	// (0x00015a05) list_double_time_pane_vc_t1_ParamLimits

0xc345,	// (0x00015a05) list_double_time_pane_vc_t1

0xc369,	// (0x00015a29) list_double_time_pane_vc_t2_ParamLimits

0xc369,	// (0x00015a29) list_double_time_pane_vc_t2

0xc393,	// (0x00015a53) list_double_time_pane_vc_t3_ParamLimits

0xc393,	// (0x00015a53) list_double_time_pane_vc_t3

0xc3a5,	// (0x00015a65) list_double_time_pane_vc_t4_ParamLimits

0xc3a5,	// (0x00015a65) list_double_time_pane_vc_t4

0x0003,

0xfa56,	// (0x00019116) list_double_time_pane_vc_t_ParamLimits

0xfa56,	// (0x00019116) list_double_time_pane_vc_t

0x870b,	// (0x00011dcb) list_double_pane_vc_g1_ParamLimits

0x870b,	// (0x00011dcb) list_double_pane_vc_g1

0x8717,	// (0x00011dd7) list_double_pane_vc_g2_ParamLimits

0x8717,	// (0x00011dd7) list_double_pane_vc_g2

0x0001,

0xf5ce,	// (0x00018c8e) list_double_pane_vc_g_ParamLimits

0xf5ce,	// (0x00018c8e) list_double_pane_vc_g

0xc3b9,	// (0x00015a79) list_double_pane_vc_t1_ParamLimits

0xc3b9,	// (0x00015a79) list_double_pane_vc_t1

0xc3cd,	// (0x00015a8d) list_double_pane_vc_t2_ParamLimits

0xc3cd,	// (0x00015a8d) list_double_pane_vc_t2

0x0001,

0xfa5f,	// (0x0001911f) list_double_pane_vc_t_ParamLimits

0xfa5f,	// (0x0001911f) list_double_pane_vc_t

0x870b,	// (0x00011dcb) list_double_number_pane_vc_g1_ParamLimits

0x870b,	// (0x00011dcb) list_double_number_pane_vc_g1

0x8717,	// (0x00011dd7) list_double_number_pane_vc_g2_ParamLimits

0x8717,	// (0x00011dd7) list_double_number_pane_vc_g2

0x0001,

0xf5ce,	// (0x00018c8e) list_double_number_pane_vc_g_ParamLimits

0xf5ce,	// (0x00018c8e) list_double_number_pane_vc_g

0xc3e5,	// (0x00015aa5) list_double_number_pane_vc_t1_ParamLimits

0xc3e5,	// (0x00015aa5) list_double_number_pane_vc_t1

0xc3f7,	// (0x00015ab7) list_double_number_pane_vc_t2_ParamLimits

0xc3f7,	// (0x00015ab7) list_double_number_pane_vc_t2

0xc3cd,	// (0x00015a8d) list_double_number_pane_vc_t3_ParamLimits

0xc3cd,	// (0x00015a8d) list_double_number_pane_vc_t3

0x0002,

0xfa64,	// (0x00019124) list_double_number_pane_vc_t_ParamLimits

0xfa64,	// (0x00019124) list_double_number_pane_vc_t

0xc40b,	// (0x00015acb) list_double_large_graphic_pane_vc_g1_ParamLimits

0xc40b,	// (0x00015acb) list_double_large_graphic_pane_vc_g1

0xc417,	// (0x00015ad7) list_double_large_graphic_pane_vc_g2_ParamLimits

0xc417,	// (0x00015ad7) list_double_large_graphic_pane_vc_g2

0xc30b,	// (0x000159cb) list_double_large_graphic_pane_vc_g3_ParamLimits

0xc30b,	// (0x000159cb) list_double_large_graphic_pane_vc_g3

0xc426,	// (0x00015ae6) list_double_large_graphic_pane_vc_g4_ParamLimits

0xc426,	// (0x00015ae6) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa6b,	// (0x0001912b) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa6b,	// (0x0001912b) list_double_large_graphic_pane_vc_g

0xc432,	// (0x00015af2) list_double_large_graphic_pane_vc_t1_ParamLimits

0xc432,	// (0x00015af2) list_double_large_graphic_pane_vc_t1

0xc446,	// (0x00015b06) list_double_large_graphic_pane_vc_t2_ParamLimits

0xc446,	// (0x00015b06) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa74,	// (0x00019134) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa74,	// (0x00019134) list_double_large_graphic_pane_vc_t

0xc04a,	// (0x0001570a) list_double_heading_pane_vc_g1_ParamLimits

0xc04a,	// (0x0001570a) list_double_heading_pane_vc_g1

0xc056,	// (0x00015716) list_double_heading_pane_vc_g2_ParamLimits

0xc056,	// (0x00015716) list_double_heading_pane_vc_g2

0x0001,

0xfa79,	// (0x00019139) list_double_heading_pane_vc_g_ParamLimits

0xfa79,	// (0x00019139) list_double_heading_pane_vc_g

0xc45f,	// (0x00015b1f) list_double_heading_pane_vc_t1_ParamLimits

0xc45f,	// (0x00015b1f) list_double_heading_pane_vc_t1

0xa381,	// (0x00013a41) list_double_heading_pane_vc_t2_ParamLimits

0xa381,	// (0x00013a41) list_double_heading_pane_vc_t2

0x0001,

0xfa7e,	// (0x0001913e) list_double_heading_pane_vc_t_ParamLimits

0xfa7e,	// (0x0001913e) list_double_heading_pane_vc_t

0x8785,	// (0x00011e45) list_double_graphic_pane_vc_g1_ParamLimits

0x8785,	// (0x00011e45) list_double_graphic_pane_vc_g1

0xc473,	// (0x00015b33) list_double_graphic_pane_vc_g2_ParamLimits

0xc473,	// (0x00015b33) list_double_graphic_pane_vc_g2

0xc482,	// (0x00015b42) list_double_graphic_pane_vc_g3_ParamLimits

0xc482,	// (0x00015b42) list_double_graphic_pane_vc_g3

0x0002,

0xfa83,	// (0x00019143) list_double_graphic_pane_vc_g_ParamLimits

0xfa83,	// (0x00019143) list_double_graphic_pane_vc_g

0xc48e,	// (0x00015b4e) list_double_graphic_pane_vc_t1_ParamLimits

0xc48e,	// (0x00015b4e) list_double_graphic_pane_vc_t1

0xc4a2,	// (0x00015b62) list_double_graphic_pane_vc_t2_ParamLimits

0xc4a2,	// (0x00015b62) list_double_graphic_pane_vc_t2

0x0001,

0xfa8a,	// (0x0001914a) list_double_graphic_pane_vc_t_ParamLimits

0xfa8a,	// (0x0001914a) list_double_graphic_pane_vc_t

0x5a7c,	// (0x0000f13c) aid_size_cell_fastswap

0x5a84,	// (0x0000f144) aid_size_cell_touch_ParamLimits

0x5a84,	// (0x0000f144) aid_size_cell_touch

0x5ce9,	// (0x0000f3a9) popup_fast_swap_wide_window_ParamLimits

0x5ce9,	// (0x0000f3a9) popup_fast_swap_wide_window

0x5def,	// (0x0000f4af) touch_pane_ParamLimits

0x5def,	// (0x0000f4af) touch_pane

0x8bc9,	// (0x00012289) button_value_adjust_pane_cp2

0x8bc9,	// (0x00012289) button_value_adjust_pane_cp4

0x8be9,	// (0x000122a9) form_field_data_pane_cp2

0x8c08,	// (0x000122c8) form_field_data_wide_pane_cp2

0x9267,	// (0x00012927) bg_scroll_pane_ParamLimits

0x607f,	// (0x0000f73f) scroll_handle_pane_ParamLimits

0x6093,	// (0x0000f753) scroll_sc2_down_pane_ParamLimits

0x6093,	// (0x0000f753) scroll_sc2_down_pane

0x9298,	// (0x00012958) scroll_sc2_up_pane_ParamLimits

0x9298,	// (0x00012958) scroll_sc2_up_pane

0xc958,	// (0x00016018) grid_wheel_folder_pane_g1_ParamLimits

0xc958,	// (0x00016018) grid_wheel_folder_pane_g1

0x624f,	// (0x0000f90f) clock_nsta_pane_cp2_ParamLimits

0x624f,	// (0x0000f90f) clock_nsta_pane_cp2

0x8fe5,	// (0x000126a5) listscroll_midp_pane_ParamLimits

0x9ae1,	// (0x000131a1) midp_canvas_pane

0x9dc7,	// (0x00013487) nsta_clock_indic_pane

0x9e03,	// (0x000134c3) listscroll_form_pane_vc

0x9e0b,	// (0x000134cb) listscroll_set_pane_vc_ParamLimits

0x9e0b,	// (0x000134cb) listscroll_set_pane_vc

0x9f14,	// (0x000135d4) clock_nsta_pane

0x9f89,	// (0x00013649) indicator_nsta_pane

0xa261,	// (0x00013921) bg_popup_sub_pane_cp2_ParamLimits

0xa275,	// (0x00013935) find_pane_cp2_ParamLimits

0xa275,	// (0x00013935) find_pane_cp2

0xa28b,	// (0x0001394b) grid_toobar_pane_ParamLimits

0xa431,	// (0x00013af1) list_form_gen_pane_vc_ParamLimits

0xa431,	// (0x00013af1) list_form_gen_pane_vc

0xa447,	// (0x00013b07) scroll_pane_cp8_vc_ParamLimits

0xa447,	// (0x00013b07) scroll_pane_cp8_vc

0xa4c3,	// (0x00013b83) data_form_wide_pane_vc_ParamLimits

0xa4c3,	// (0x00013b83) data_form_wide_pane_vc

0xa4cf,	// (0x00013b8f) form_field_data_wide_pane_vc_g1

0xa4d7,	// (0x00013b97) form_field_data_wide_pane_vc_t1_ParamLimits

0xa4d7,	// (0x00013b97) form_field_data_wide_pane_vc_t1

0x8ca3,	// (0x00012363) input_focus_pane_cp6_vc_ParamLimits

0x8ca3,	// (0x00012363) input_focus_pane_cp6_vc

0xa85a,	// (0x00013f1a) list_midp_pane_ParamLimits

0xa866,	// (0x00013f26) scroll_pane_cp16_ParamLimits

0xa866,	// (0x00013f26) scroll_pane_cp16

0xa8b4,	// (0x00013f74) button_value_adjust_pane_ParamLimits

0xa8b4,	// (0x00013f74) button_value_adjust_pane

0xb830,	// (0x00014ef0) button_value_adjust_pane_cp6_ParamLimits

0xb830,	// (0x00014ef0) button_value_adjust_pane_cp6

0xb956,	// (0x00015016) settings_code_pane_cp_ParamLimits

0xb956,	// (0x00015016) settings_code_pane_cp

0x7dfd,	// (0x000114bd) cell_touch_pane_g1

0x7dfd,	// (0x000114bd) cell_touch_pane_g2

0x0001,

0xf704,	// (0x00018dc4) cell_touch_pane_g

0xc01d,	// (0x000156dd) cell_touch_pane_cp_ParamLimits

0xc01d,	// (0x000156dd) cell_touch_pane_cp

0xc02d,	// (0x000156ed) cell_touch_pane_ParamLimits

0xc02d,	// (0x000156ed) cell_touch_pane

0x7dfd,	// (0x000114bd) scroll_sc2_down_pane_g1

0x7dfd,	// (0x000114bd) scroll_sc2_up_pane_g1

0x7e07,	// (0x000114c7) bg_set_opt_pane_cp4_vc

0xc096,	// (0x00015756) list_set_graphic_pane_vc_g1_ParamLimits

0xc096,	// (0x00015756) list_set_graphic_pane_vc_g1

0xc0a2,	// (0x00015762) list_set_graphic_pane_vc_g2_ParamLimits

0xc0a2,	// (0x00015762) list_set_graphic_pane_vc_g2

0x0001,

0xf9fb,	// (0x000190bb) list_set_graphic_pane_vc_g_ParamLimits

0xf9fb,	// (0x000190bb) list_set_graphic_pane_vc_g

0xc0ae,	// (0x0001576e) text_primary_small_cp13_vc_ParamLimits

0xc0ae,	// (0x0001576e) text_primary_small_cp13_vc

0xc0c6,	// (0x00015786) list_set_graphic_pane_vc_ParamLimits

0xc0c6,	// (0x00015786) list_set_graphic_pane_vc

0x7e07,	// (0x000114c7) input_focus_pane_cp2_vc

0x7dfd,	// (0x000114bd) setting_code_pane_vc_g1

0x7f32,	// (0x000115f2) setting_code_pane_vc_t1

0xc0d9,	// (0x00015799) set_text_pane_vc_t1_ParamLimits

0xc0d9,	// (0x00015799) set_text_pane_vc_t1

0x7e07,	// (0x000114c7) input_focus_pane_cp1_vc

0xc0f6,	// (0x000157b6) list_set_text_pane_vc

0x7dfd,	// (0x000114bd) setting_text_pane_vc_g1

0x7e07,	// (0x000114c7) bg_set_opt_pane_cp2_vc

0x7f29,	// (0x000115e9) setting_slider_graphic_pane_vc_g1

0xc100,	// (0x000157c0) setting_slider_graphic_pane_vc_t1

0xc110,	// (0x000157d0) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa00,	// (0x000190c0) setting_slider_graphic_pane_vc_t

0xc120,	// (0x000157e0) slider_set_pane_cp_vc

0xc128,	// (0x000157e8) slider_set_pane_vc_g1

0xc131,	// (0x000157f1) slider_set_pane_vc_g2

0x0006,

0xfa05,	// (0x000190c5) slider_set_pane_vc_g

0x8dd0,	// (0x00012490) set_opt_bg_pane_g1_copy1

0x8dd8,	// (0x00012498) set_opt_bg_pane_g2_copy1

0xc15d,	// (0x0001581d) set_opt_bg_pane_g3_copy1

0x8de8,	// (0x000124a8) set_opt_bg_pane_g4_copy1

0x8df0,	// (0x000124b0) set_opt_bg_pane_g5_copy1

0x8df8,	// (0x000124b8) set_opt_bg_pane_g6_copy1

0xc165,	// (0x00015825) set_opt_bg_pane_g7_copy1

0xc16f,	// (0x0001582f) set_opt_bg_pane_g8_copy1

0xc177,	// (0x00015837) set_opt_bg_pane_g9_copy1

0x7e07,	// (0x000114c7) bg_set_opt_pane_cp_vc

0xc17f,	// (0x0001583f) setting_slider_pane_vc_t1

0xc18e,	// (0x0001584e) setting_slider_pane_vc_t2

0xc19e,	// (0x0001585e) setting_slider_pane_vc_t3

0x0002,

0xfa14,	// (0x000190d4) setting_slider_pane_vc_t

0xc1ae,	// (0x0001586e) slider_set_pane_vc

0x6c33,	// (0x000102f3) volume_set_pane_vc_g1

0x6f22,	// (0x000105e2) volume_set_pane_vc_g2

0x6f2b,	// (0x000105eb) volume_set_pane_vc_g3

0x6f34,	// (0x000105f4) volume_set_pane_vc_g4

0x6f3d,	// (0x000105fd) volume_set_pane_vc_g5

0x6f46,	// (0x00010606) volume_set_pane_vc_g6

0x6c60,	// (0x00010320) volume_set_pane_vc_g7

0x6f4f,	// (0x0001060f) volume_set_pane_vc_g8

0x6f58,	// (0x00010618) volume_set_pane_vc_g9

0x6f61,	// (0x00010621) volume_set_pane_vc_g10

0x0009,

0xfa1b,	// (0x000190db) volume_set_pane_vc_g

0xc1b6,	// (0x00015876) volume_set_pane_vc

0xc1be,	// (0x0001587e) button_value_adjust_pane_cp1_vc

0xc1c8,	// (0x00015888) list_highlight_pane_cp2_vc

0xc1d1,	// (0x00015891) list_set_pane_vc_ParamLimits

0xc1d1,	// (0x00015891) list_set_pane_vc

0xc22f,	// (0x000158ef) main_pane_set_vc_t1_ParamLimits

0xc22f,	// (0x000158ef) main_pane_set_vc_t1

0xc244,	// (0x00015904) main_pane_set_vc_t2_ParamLimits

0xc244,	// (0x00015904) main_pane_set_vc_t2

0xc256,	// (0x00015916) main_pane_set_vc_t3_ParamLimits

0xc256,	// (0x00015916) main_pane_set_vc_t3

0xc268,	// (0x00015928) main_pane_set_vc_t4_ParamLimits

0xc268,	// (0x00015928) main_pane_set_vc_t4

0x0003,

0xfa30,	// (0x000190f0) main_pane_set_vc_t_ParamLimits

0xfa30,	// (0x000190f0) main_pane_set_vc_t

0xc27a,	// (0x0001593a) setting_code_pane_vc_ParamLimits

0xc27a,	// (0x0001593a) setting_code_pane_vc

0xc289,	// (0x00015949) setting_slider_graphic_pane_vc

0xc289,	// (0x00015949) setting_slider_pane_vc

0xc289,	// (0x00015949) setting_text_pane_vc

0xc289,	// (0x00015949) setting_volume_pane_vc

0xc291,	// (0x00015951) scroll_pane_cp121_vc

0x8bb7,	// (0x00012277) set_content_pane_vc

0xc4ba,	// (0x00015b7a) button_value_adjust_pane_g1

0xc4c3,	// (0x00015b83) button_value_adjust_pane_g2

0x0001,

0xfa8f,	// (0x0001914f) button_value_adjust_pane_g

0xc4cc,	// (0x00015b8c) form_field_slider_wide_pane_vc_t1_ParamLimits

0xc4cc,	// (0x00015b8c) form_field_slider_wide_pane_vc_t1

0xc4e0,	// (0x00015ba0) form_field_slider_wide_pane_vc_t2_ParamLimits

0xc4e0,	// (0x00015ba0) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa94,	// (0x00019154) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa94,	// (0x00019154) form_field_slider_wide_pane_vc_t

0x817c,	// (0x0001183c) input_focus_pane_cp10_vc_ParamLimits

0x817c,	// (0x0001183c) input_focus_pane_cp10_vc

0xc50c,	// (0x00015bcc) slider_cont_pane_cp1_vc_ParamLimits

0xc50c,	// (0x00015bcc) slider_cont_pane_cp1_vc

0xc51c,	// (0x00015bdc) slider_form_pane_g1_cp2

0xc131,	// (0x000157f1) slider_form_pane_g2_cp2

0xc549,	// (0x00015c09) form_field_slider_pane_vc_t3

0xc557,	// (0x00015c17) form_field_slider_pane_vc_t4

0xc565,	// (0x00015c25) slider_form_pane_vc_ParamLimits

0xc565,	// (0x00015c25) slider_form_pane_vc

0xc572,	// (0x00015c32) form_field_slider_pane_vc_t1_ParamLimits

0xc572,	// (0x00015c32) form_field_slider_pane_vc_t1

0xc4e0,	// (0x00015ba0) form_field_slider_pane_vc_t2_ParamLimits

0xc4e0,	// (0x00015ba0) form_field_slider_pane_vc_t2

0x0001,

0xfaa6,	// (0x00019166) form_field_slider_pane_vc_t_ParamLimits

0xfaa6,	// (0x00019166) form_field_slider_pane_vc_t

0x817c,	// (0x0001183c) input_focus_pane_cp9_vc_ParamLimits

0x817c,	// (0x0001183c) input_focus_pane_cp9_vc

0xc58e,	// (0x00015c4e) slider_cont_pane_vc_ParamLimits

0xc58e,	// (0x00015c4e) slider_cont_pane_vc

0xc5a0,	// (0x00015c60) list_form_graphic_pane_cp_vc_ParamLimits

0xc5a0,	// (0x00015c60) list_form_graphic_pane_cp_vc

0xa4cf,	// (0x00013b8f) form_field_popup_wide_pane_vc_g1

0xc5b5,	// (0x00015c75) form_field_popup_wide_pane_vc_t1_ParamLimits

0xc5b5,	// (0x00015c75) form_field_popup_wide_pane_vc_t1

0x8ca3,	// (0x00012363) input_focus_pane_cp8_vc_ParamLimits

0x8ca3,	// (0x00012363) input_focus_pane_cp8_vc

0xc5fa,	// (0x00015cba) list_form_wide_pane_vc_ParamLimits

0xc5fa,	// (0x00015cba) list_form_wide_pane_vc

0xc606,	// (0x00015cc6) list_form_graphic_pane_vc_g1

0xc60e,	// (0x00015cce) list_form_graphic_pane_vc_t1_ParamLimits

0xc60e,	// (0x00015cce) list_form_graphic_pane_vc_t1

0x7ee7,	// (0x000115a7) list_highlight_pane_cp5_vc_ParamLimits

0x7ee7,	// (0x000115a7) list_highlight_pane_cp5_vc

0xc62a,	// (0x00015cea) list_form_graphic_pane_vc_ParamLimits

0xc62a,	// (0x00015cea) list_form_graphic_pane_vc

0xa4cf,	// (0x00013b8f) form_field_popup_pane_vc_g1

0xc640,	// (0x00015d00) form_field_popup_pane_vc_t1_ParamLimits

0xc640,	// (0x00015d00) form_field_popup_pane_vc_t1

0x8ca3,	// (0x00012363) input_focus_pane_cp7_vc_ParamLimits

0x8ca3,	// (0x00012363) input_focus_pane_cp7_vc

0xc657,	// (0x00015d17) list_form_pane_vc_ParamLimits

0xc657,	// (0x00015d17) list_form_pane_vc

0xc663,	// (0x00015d23) data_form_pane_vc_t1_ParamLimits

0xc663,	// (0x00015d23) data_form_pane_vc_t1

0x8dd0,	// (0x00012490) input_focus_pane_vc_g1

0x8dd8,	// (0x00012498) input_focus_pane_vc_g2

0x8de0,	// (0x000124a0) input_focus_pane_vc_g3

0x8de8,	// (0x000124a8) input_focus_pane_vc_g4

0x8df0,	// (0x000124b0) input_focus_pane_vc_g5

0x8df8,	// (0x000124b8) input_focus_pane_vc_g6

0x8e00,	// (0x000124c0) input_focus_pane_vc_g7

0x8e08,	// (0x000124c8) input_focus_pane_vc_g8

0x8e10,	// (0x000124d0) input_focus_pane_vc_g9

0x7dfd,	// (0x000114bd) input_focus_pane_vc_g10

0x0009,

0xf68d,	// (0x00018d4d) input_focus_pane_vc_g

0xa4c3,	// (0x00013b83) data_form_pane_vc_ParamLimits

0xa4c3,	// (0x00013b83) data_form_pane_vc

0xa4cf,	// (0x00013b8f) form_field_data_pane_vc_g1

0xc67e,	// (0x00015d3e) form_field_data_pane_vc_t1_ParamLimits

0xc67e,	// (0x00015d3e) form_field_data_pane_vc_t1

0x8ca3,	// (0x00012363) input_focus_pane_vc_ParamLimits

0x8ca3,	// (0x00012363) input_focus_pane_vc

0xc698,	// (0x00015d58) button_value_adjust_pane_cp3_vc

0xc6a0,	// (0x00015d60) button_value_adjust_pane_cp5_vc

0xc6a8,	// (0x00015d68) form_field_data_pane_vc_ParamLimits

0xc6a8,	// (0x00015d68) form_field_data_pane_vc

0xc6bf,	// (0x00015d7f) form_field_data_pane_vc_cp2

0xc6c7,	// (0x00015d87) form_field_data_wide_pane_vc_ParamLimits

0xc6c7,	// (0x00015d87) form_field_data_wide_pane_vc

0xc6dd,	// (0x00015d9d) form_field_data_wide_pane_vc_cp2

0xc6e5,	// (0x00015da5) form_field_popup_pane_vc_ParamLimits

0xc6e5,	// (0x00015da5) form_field_popup_pane_vc

0xc6fc,	// (0x00015dbc) form_field_popup_wide_pane_vc_ParamLimits

0xc6fc,	// (0x00015dbc) form_field_popup_wide_pane_vc

0xc712,	// (0x00015dd2) form_field_slider_pane_vc_ParamLimits

0xc712,	// (0x00015dd2) form_field_slider_pane_vc

0xc725,	// (0x00015de5) form_field_slider_wide_pane_vc_ParamLimits

0xc725,	// (0x00015de5) form_field_slider_wide_pane_vc

0xc738,	// (0x00015df8) grid_touch_1_pane_ParamLimits

0xc738,	// (0x00015df8) grid_touch_1_pane

0xc744,	// (0x00015e04) grid_touch_2_pane_ParamLimits

0xc744,	// (0x00015e04) grid_touch_2_pane

0x9d92,	// (0x00013452) touch_pane_g1_ParamLimits

0x9d92,	// (0x00013452) touch_pane_g1

0xc75c,	// (0x00015e1c) cell_app_pane_cp_wide_ParamLimits

0xc75c,	// (0x00015e1c) cell_app_pane_cp_wide

0xc76d,	// (0x00015e2d) grid_popup_fast_wide_pane_ParamLimits

0xc76d,	// (0x00015e2d) grid_popup_fast_wide_pane

0xc781,	// (0x00015e41) scroll_pane_cp19_ParamLimits

0xc781,	// (0x00015e41) scroll_pane_cp19

0x7e07,	// (0x000114c7) bg_popup_window_pane_cp20

0xc795,	// (0x00015e55) listscroll_popup_fast_wide_pane

0x7ee7,	// (0x000115a7) grid_indicator_nsta_pane

0xc79d,	// (0x00015e5d) clock_nsta_pane_g1

0xc7a6,	// (0x00015e66) clock_nsta_pane_t1

0xc7c2,	// (0x00015e82) cell_indicator_nsta_pane_ParamLimits

0xc7c2,	// (0x00015e82) cell_indicator_nsta_pane

0xc7fa,	// (0x00015eba) cell_indicator_nsta_pane_g1

0xc808,	// (0x00015ec8) cell_indicator_nsta_pane_g2

0x0001,

0xfab7,	// (0x00019177) cell_indicator_nsta_pane_g

0xc81e,	// (0x00015ede) clock_nsta_pane_cp

0xc826,	// (0x00015ee6) indicator_nsta_pane_cp

0xc82e,	// (0x00015eee) nsta_clock_indic_pane_g1

0x7fca,	// (0x0001168a) grid_indicator_pane

0x938d,	// (0x00012a4d) scroll_pane_cp29

0x619e,	// (0x0000f85e) indicator_nsta_pane_cp2_ParamLimits

0x619e,	// (0x0000f85e) indicator_nsta_pane_cp2

0x7ee7,	// (0x000115a7) main_apps_wheel_pane

0xa73f,	// (0x00013dff) form_midp_field_text_pane_ParamLimits

0xa886,	// (0x00013f46) scroll_bar_cp050_ParamLimits

0xc88f,	// (0x00015f4f) cell_indicator_pane_ParamLimits

0xc88f,	// (0x00015f4f) cell_indicator_pane

0xc8aa,	// (0x00015f6a) cell_indicator_pane_g1

0xc8b4,	// (0x00015f74) grid_wheel_folder_pane_ParamLimits

0xc8b4,	// (0x00015f74) grid_wheel_folder_pane

0xc8ca,	// (0x00015f8a) list_wheel_apps_pane_ParamLimits

0xc8ca,	// (0x00015f8a) list_wheel_apps_pane

0xc8db,	// (0x00015f9b) main_apps_wheel_pane_g1_ParamLimits

0xc8db,	// (0x00015f9b) main_apps_wheel_pane_g1

0xc8ef,	// (0x00015faf) main_apps_wheel_pane_g2_ParamLimits

0xc8ef,	// (0x00015faf) main_apps_wheel_pane_g2

0x0001,

0xfad3,	// (0x00019193) main_apps_wheel_pane_g_ParamLimits

0xfad3,	// (0x00019193) main_apps_wheel_pane_g

0xc907,	// (0x00015fc7) main_apps_wheel_pane_t1_ParamLimits

0xc907,	// (0x00015fc7) main_apps_wheel_pane_t1

0xc92a,	// (0x00015fea) list_wheel_apps_pane_g1

0xc932,	// (0x00015ff2) list_wheel_apps_pane_g2

0xc93a,	// (0x00015ffa) list_wheel_apps_pane_g3

0xc944,	// (0x00016004) list_wheel_apps_pane_g4

0xc94e,	// (0x0001600e) list_wheel_apps_pane_g5

0x0004,

0xfad8,	// (0x00019198) list_wheel_apps_pane_g

0x9965,	// (0x00013025) navi_icon_text_pane

0x9e47,	// (0x00013507) aid_fill_nsta

0xc971,	// (0x00016031) navi_icon_text_pane_g1

0xc97d,	// (0x0001603d) navi_icon_text_pane_t1

0x9807,	// (0x00012ec7) list_set_graphic_pane_t1_ParamLimits

0x9807,	// (0x00012ec7) list_set_graphic_pane_t1

0xafd8,	// (0x00014698) popup_midp_note_alarm_window_t6_ParamLimits

0xafd8,	// (0x00014698) popup_midp_note_alarm_window_t6

0xafea,	// (0x000146aa) popup_midp_note_alarm_window_t7_ParamLimits

0xafea,	// (0x000146aa) popup_midp_note_alarm_window_t7

0xaffc,	// (0x000146bc) popup_midp_note_alarm_window_t8_ParamLimits

0xaffc,	// (0x000146bc) popup_midp_note_alarm_window_t8

0xb00e,	// (0x000146ce) popup_midp_note_alarm_window_t9_ParamLimits

0xb00e,	// (0x000146ce) popup_midp_note_alarm_window_t9

0xb020,	// (0x000146e0) popup_midp_note_alarm_window_t10_ParamLimits

0xb020,	// (0x000146e0) popup_midp_note_alarm_window_t10

0xb032,	// (0x000146f2) popup_midp_note_alarm_window_t11_ParamLimits

0xb032,	// (0x000146f2) popup_midp_note_alarm_window_t11

0xb044,	// (0x00014704) scroll_pane_cp17_ParamLimits

0xb044,	// (0x00014704) scroll_pane_cp17

0x6c33,	// (0x000102f3) volume_small_pane_cp_g1

0x6f6a,	// (0x0001062a) volume_small_pane_cp_g2

0x6f73,	// (0x00010633) volume_small_pane_cp_g3

0x6c45,	// (0x00010305) volume_small_pane_cp_g4

0x6f7c,	// (0x0001063c) volume_small_pane_cp_g5

0x6f3d,	// (0x000105fd) volume_small_pane_cp_g6

0x6c57,	// (0x00010317) volume_small_pane_cp_g7

0x6f85,	// (0x00010645) volume_small_pane_cp_g8

0x6f8e,	// (0x0001064e) volume_small_pane_cp_g9

0x6c69,	// (0x00010329) volume_small_pane_cp_g10

0x9bac,	// (0x0001326c) midp_ticker_pane_g1_ParamLimits

0x9bb8,	// (0x00013278) midp_ticker_pane_g2_ParamLimits

0xf759,	// (0x00018e19) midp_ticker_pane_g_ParamLimits

0x9bc4,	// (0x00013284) midp_ticker_pane_t1_ParamLimits

0x9e5d,	// (0x0001351d) aid_fill_nsta_2

0xa872,	// (0x00013f32) list_form2_midp_pane

0xb9d4,	// (0x00015094) midp_editing_number_pane_ParamLimits

0xb9e3,	// (0x000150a3) midp_ticker_pane_ParamLimits

0xc98f,	// (0x0001604f) form2_midp_field_pane

0xc9b3,	// (0x00016073) scroll_pane_cp51

0xc9d3,	// (0x00016093) form2_midp_button_pane_ParamLimits

0xc9d3,	// (0x00016093) form2_midp_button_pane

0xc9e5,	// (0x000160a5) form2_midp_content_pane_ParamLimits

0xc9e5,	// (0x000160a5) form2_midp_content_pane

0xc9ff,	// (0x000160bf) form2_midp_field_choice_group_pane

0xca07,	// (0x000160c7) form2_midp_field_pane_g1

0xca0f,	// (0x000160cf) form2_midp_field_pane_g2

0xca17,	// (0x000160d7) form2_midp_field_pane_g3

0xca1f,	// (0x000160df) form2_midp_field_pane_g4

0x0003,

0xfafd,	// (0x000191bd) form2_midp_field_pane_g

0xca27,	// (0x000160e7) form2_midp_gauge_slider_pane

0xca2f,	// (0x000160ef) form2_midp_gauge_wait_pane

0xca37,	// (0x000160f7) form2_midp_image_pane_ParamLimits

0xca37,	// (0x000160f7) form2_midp_image_pane

0xca52,	// (0x00016112) form2_midp_label_pane_ParamLimits

0xca52,	// (0x00016112) form2_midp_label_pane

0xca6b,	// (0x0001612b) form2_midp_label_pane_cp_ParamLimits

0xca6b,	// (0x0001612b) form2_midp_label_pane_cp

0xca8c,	// (0x0001614c) form2_midp_string_pane_ParamLimits

0xca8c,	// (0x0001614c) form2_midp_string_pane

0xca9e,	// (0x0001615e) form2_midp_text_pane_ParamLimits

0xca9e,	// (0x0001615e) form2_midp_text_pane

0xcab9,	// (0x00016179) form2_midp_time_pane

0xcac9,	// (0x00016189) input_focus_pane_cp51_ParamLimits

0xcac9,	// (0x00016189) input_focus_pane_cp51

0xcae1,	// (0x000161a1) form2_midp_label_pane_t1_ParamLimits

0xcae1,	// (0x000161a1) form2_midp_label_pane_t1

0xcb21,	// (0x000161e1) form2_mdip_text_pane_t1_ParamLimits

0xcb21,	// (0x000161e1) form2_mdip_text_pane_t1

0xcb3d,	// (0x000161fd) form2_midp_time_pane_t1

0xcb58,	// (0x00016218) form2_midp_gauge_slider_pane_t1

0xcb6a,	// (0x0001622a) form2_midp_gauge_slider_pane_t2

0xcb7c,	// (0x0001623c) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb06,	// (0x000191c6) form2_midp_gauge_slider_pane_t

0xcb8e,	// (0x0001624e) form2_midp_slider_pane

0xcb9a,	// (0x0001625a) form2_midp_gauge_wait_pane_t1

0xcba8,	// (0x00016268) form2_midp_wait_pane_ParamLimits

0xcba8,	// (0x00016268) form2_midp_wait_pane

0xcbd4,	// (0x00016294) list_single_2graphic_pane_cp4_ParamLimits

0xcbd4,	// (0x00016294) list_single_2graphic_pane_cp4

0xa53e,	// (0x00013bfe) list_single_midp_graphic_pane_cp_ParamLimits

0xa53e,	// (0x00013bfe) list_single_midp_graphic_pane_cp

0x7e07,	// (0x000114c7) list_highlight_pane_cp20

0xcc02,	// (0x000162c2) list_single_2graphic_pane_g1_cp4

0xbf22,	// (0x000155e2) list_single_2graphic_pane_g2_cp4

0xcc0a,	// (0x000162ca) list_single_2graphic_pane_t1_cp4

0x7ee7,	// (0x000115a7) list_highlight_pane_cp21

0xcc19,	// (0x000162d9) list_single_midp_graphic_pane_g4_cp

0xcc28,	// (0x000162e8) list_single_midp_graphic_pane_t1_cp

0xcc3d,	// (0x000162fd) form2_mdip_string_pane_t1_ParamLimits

0xcc3d,	// (0x000162fd) form2_mdip_string_pane_t1

0x7e07,	// (0x000114c7) bg_wml_button_pane_cp2

0x7dfd,	// (0x000114bd) form2_midp_image_pane_g1

0x8993,	// (0x00012053) list_double_large_graphic_pane_g5_ParamLimits

0x8993,	// (0x00012053) list_double_large_graphic_pane_g5

0x8fe5,	// (0x000126a5) midp_form_pane_ParamLimits

0x7ee7,	// (0x000115a7) main_apps_wheel_pane_ParamLimits

0x687b,	// (0x0000ff3b) popup_preview_window_ParamLimits

0x687b,	// (0x0000ff3b) popup_preview_window

0x6a32,	// (0x000100f2) popup_touch_info_window_ParamLimits

0x6a32,	// (0x000100f2) popup_touch_info_window

0x6a50,	// (0x00010110) popup_touch_menu_window_ParamLimits

0x6a50,	// (0x00010110) popup_touch_menu_window

0x7df3,	// (0x000114b3) bg_popup_sub_pane_cp6

0xcd60,	// (0x00016420) list_touch_menu_pane

0xcd68,	// (0x00016428) list_single_touch_menu_pane_ParamLimits

0xcd68,	// (0x00016428) list_single_touch_menu_pane

0xcd7c,	// (0x0001643c) list_single_touch_menu_pane_t1

0x7ee7,	// (0x000115a7) bg_popup_sub_pane_cp7_ParamLimits

0x7ee7,	// (0x000115a7) bg_popup_sub_pane_cp7

0xcd8a,	// (0x0001644a) heading_sub_pane

0xcd92,	// (0x00016452) list_touch_info_pane_ParamLimits

0xcd92,	// (0x00016452) list_touch_info_pane

0xcda1,	// (0x00016461) list_single_touch_info_pane_ParamLimits

0xcda1,	// (0x00016461) list_single_touch_info_pane

0xcdb3,	// (0x00016473) list_single_touch_info_pane_t1

0xcdc1,	// (0x00016481) list_single_touch_info_pane_t2

0x0001,

0xfb14,	// (0x000191d4) list_single_touch_info_pane_t

0x9ad9,	// (0x00013199) bg_popup_heading_pane_cp

0xcdcf,	// (0x0001648f) heading_sub_pane_t1

0xa45d,	// (0x00013b1d) bg_popup_preview_window_pane_cp_ParamLimits

0xa45d,	// (0x00013b1d) bg_popup_preview_window_pane_cp

0xcd8a,	// (0x0001644a) heading_preview_pane

0xcd92,	// (0x00016452) list_preview_pane_ParamLimits

0xcd92,	// (0x00016452) list_preview_pane

0xcddd,	// (0x0001649d) popup_preview_window_g1

0xcda1,	// (0x00016461) list_single_preview_pane_ParamLimits

0xcda1,	// (0x00016461) list_single_preview_pane

0xcde5,	// (0x000164a5) list_single_preview_pane_g1

0xcded,	// (0x000164ad) list_single_preview_pane_t1

0xcdb3,	// (0x00016473) list_single_preview_pane_t2

0x0001,

0xfb19,	// (0x000191d9) list_single_preview_pane_t

0xcdfb,	// (0x000164bb) bg_popup_heading_pane_cp2_ParamLimits

0xcdfb,	// (0x000164bb) bg_popup_heading_pane_cp2

0xce11,	// (0x000164d1) heading_preview_pane_g1

0xce19,	// (0x000164d9) heading_preview_pane_t1_ParamLimits

0xce19,	// (0x000164d9) heading_preview_pane_t1

0x7fed,	// (0x000116ad) soft_indicator_pane_t1_ParamLimits

0x86cb,	// (0x00011d8b) scroll_pane_ParamLimits

0x9286,	// (0x00012946) scroll_sc2_left_pane

0x928f,	// (0x0001294f) scroll_sc2_right_pane

0x92ae,	// (0x0001296e) scroll_bg_pane_g1_ParamLimits

0x92c3,	// (0x00012983) scroll_bg_pane_g2_ParamLimits

0x92db,	// (0x0001299b) scroll_bg_pane_g3_ParamLimits

0xf6e4,	// (0x00018da4) scroll_bg_pane_g_ParamLimits

0x92ae,	// (0x0001296e) scroll_handle_pane_g1_ParamLimits

0x92fd,	// (0x000129bd) scroll_handle_pane_g2_ParamLimits

0x92db,	// (0x0001299b) scroll_handle_pane_g3_ParamLimits

0xf6eb,	// (0x00018dab) scroll_handle_pane_g_ParamLimits

0x6502,	// (0x0000fbc2) popup_choice_list_window_ParamLimits

0x6502,	// (0x0000fbc2) popup_choice_list_window

0xa26d,	// (0x0001392d) choice_list_pane

0xa305,	// (0x000139c5) cell_toolbar_pane_t1

0xa32d,	// (0x000139ed) toolbar_button_pane_ParamLimits

0xb4fe,	// (0x00014bbe) ai_gene_pane_1_t2_ParamLimits

0xb4fe,	// (0x00014bbe) ai_gene_pane_1_t2

0x0001,

0xf90e,	// (0x00018fce) ai_gene_pane_1_t_ParamLimits

0xf90e,	// (0x00018fce) ai_gene_pane_1_t

0xce36,	// (0x000164f6) scroll_sc2_left_pane_g1

0xce36,	// (0x000164f6) scroll_sc2_right_pane_g1

0x9e1d,	// (0x000134dd) bg_popup_sub_pane_cp10

0xce40,	// (0x00016500) list_choice_list_pane

0xce59,	// (0x00016519) list_single_choice_list_pane_ParamLimits

0xce59,	// (0x00016519) list_single_choice_list_pane

0xce6c,	// (0x0001652c) list_single_choice_list_pane_g1

0x8f95,	// (0x00012655) list_single_choice_list_pane_t1_ParamLimits

0x8f95,	// (0x00012655) list_single_choice_list_pane_t1

0xce74,	// (0x00016534) choice_list_pane_g1

0xce7c,	// (0x0001653c) choice_list_pane_t1

0x7df3,	// (0x000114b3) input_focus_pane_cp11

0x9169,	// (0x00012829) title_pane_stacon_g2_ParamLimits

0x9169,	// (0x00012829) title_pane_stacon_g2

0x0002,

0xf6ca,	// (0x00018d8a) title_pane_stacon_g_ParamLimits

0xf6ca,	// (0x00018d8a) title_pane_stacon_g

0x9ad9,	// (0x00013199) cursor_press_pane

0x65aa,	// (0x0000fc6a) popup_fep_hwr_window_ParamLimits

0x65aa,	// (0x0000fc6a) popup_fep_hwr_window

0x6622,	// (0x0000fce2) popup_fep_vkb_window_ParamLimits

0x6622,	// (0x0000fce2) popup_fep_vkb_window

0xce8a,	// (0x0001654a) cursor_press_pane_g1

0x0002,

0xfb42,	// (0x00019202) fep_vkb_side_pane_g_ParamLimits

0x6fd0,	// (0x00010690) fep_hwr_candidate_pane_ParamLimits

0x6fd0,	// (0x00010690) fep_hwr_candidate_pane

0x6ffa,	// (0x000106ba) fep_hwr_side_pane_ParamLimits

0x6ffa,	// (0x000106ba) fep_hwr_side_pane

0x701a,	// (0x000106da) fep_hwr_top_pane_ParamLimits

0x701a,	// (0x000106da) fep_hwr_top_pane

0x7032,	// (0x000106f2) fep_hwr_write_pane_ParamLimits

0x7032,	// (0x000106f2) fep_hwr_write_pane

0xfb42,	// (0x00019202) fep_vkb_side_pane_g

0xce92,	// (0x00016552) fep_hwr_top_pane_g1

0xcea4,	// (0x00016564) fep_hwr_top_pane_g2

0x706c,	// (0x0001072c) fep_hwr_top_pane_g3

0x0002,

0xfb1e,	// (0x000191de) fep_hwr_top_pane_g

0x7081,	// (0x00010741) fep_hwr_top_text_pane

0x9453,	// (0x00012b13) fep_hwr_top_text_pane_g1

0xceda,	// (0x0001659a) fep_hwr_top_text_pane_t1

0x7177,	// (0x00010837) fep_hwr_candidate_pane_g1

0xd11d,	// (0x000167dd) fep_vkb_keypad_pane_g3_ParamLimits

0xd11d,	// (0x000167dd) fep_vkb_keypad_pane_g3

0xd145,	// (0x00016805) fep_vkb_keypad_pane_g4_ParamLimits

0xd145,	// (0x00016805) fep_vkb_keypad_pane_g4

0xd1b4,	// (0x00016874) fep_vkb_bottom_pane_g2_ParamLimits

0xd1b4,	// (0x00016874) fep_vkb_bottom_pane_g2

0x0001,

0xfb49,	// (0x00019209) fep_vkb_bottom_pane_g_ParamLimits

0xfb49,	// (0x00019209) fep_vkb_bottom_pane_g

0xce36,	// (0x000164f6) cell_vkb_side_pane_g2

0x0001,

0xfb53,	// (0x00019213) cell_vkb_side_pane_g

0xd23f,	// (0x000168ff) cell_vkb_side_pane_t1

0xd24d,	// (0x0001690d) cell_vkb_side_pane_t1_copy1

0xce36,	// (0x000164f6) bg_fep_vkb_candidate_pane_g2

0xd379,	// (0x00016a39) cell_vkb_candidate_pane_ParamLimits

0xcee8,	// (0x000165a8) aid_size_cell_vkb_ParamLimits

0xcee8,	// (0x000165a8) aid_size_cell_vkb

0xd379,	// (0x00016a39) cell_vkb_candidate_pane

0x719e,	// (0x0001085e) bg_popup_fep_shadow_pane_g1

0xcf74,	// (0x00016634) fep_vkb_bottom_pane_ParamLimits

0xcf74,	// (0x00016634) fep_vkb_bottom_pane

0xcfaa,	// (0x0001666a) fep_vkb_candidate_pane_ParamLimits

0xcfaa,	// (0x0001666a) fep_vkb_candidate_pane

0xcfc6,	// (0x00016686) fep_vkb_keypad_pane_ParamLimits

0xcfc6,	// (0x00016686) fep_vkb_keypad_pane

0xd005,	// (0x000166c5) fep_vkb_side_pane_ParamLimits

0xd005,	// (0x000166c5) fep_vkb_side_pane

0xd041,	// (0x00016701) fep_vkb_top_pane_ParamLimits

0xd041,	// (0x00016701) fep_vkb_top_pane

0xd076,	// (0x00016736) fep_vkb_top_pane_g1_ParamLimits

0xd076,	// (0x00016736) fep_vkb_top_pane_g1

0xd085,	// (0x00016745) fep_vkb_top_pane_g2_ParamLimits

0xd085,	// (0x00016745) fep_vkb_top_pane_g2

0xd094,	// (0x00016754) fep_vkb_top_pane_g3_ParamLimits

0xd094,	// (0x00016754) fep_vkb_top_pane_g3

0x0003,

0xfb39,	// (0x000191f9) fep_vkb_top_pane_g_ParamLimits

0xfb39,	// (0x000191f9) fep_vkb_top_pane_g

0xd0b2,	// (0x00016772) fep_vkb_top_text_pane_ParamLimits

0xd0b2,	// (0x00016772) fep_vkb_top_text_pane

0xd0c3,	// (0x00016783) fep_vkb_side_pane_g1_ParamLimits

0xd0c3,	// (0x00016783) fep_vkb_side_pane_g1

0xd10c,	// (0x000167cc) grid_vkb_side_pane_ParamLimits

0xd10c,	// (0x000167cc) grid_vkb_side_pane

0x71a6,	// (0x00010866) bg_popup_fep_shadow_pane_g2

0x71af,	// (0x0001086f) bg_popup_fep_shadow_pane_g3

0x71b7,	// (0x00010877) bg_popup_fep_shadow_pane_g4

0x71c0,	// (0x00010880) bg_popup_fep_shadow_pane_g5

0x71ca,	// (0x0001088a) bg_popup_fep_shadow_pane_g6

0x71d2,	// (0x00010892) bg_popup_fep_shadow_pane_g7

0x8de8,	// (0x000124a8) bg_popup_fep_shadow_pane_g8

0xd163,	// (0x00016823) grid_vkb_keypad_number_pane_ParamLimits

0xd163,	// (0x00016823) grid_vkb_keypad_number_pane

0xd173,	// (0x00016833) grid_vkb_keypad_pane_ParamLimits

0xd173,	// (0x00016833) grid_vkb_keypad_pane

0xd199,	// (0x00016859) fep_vkb_bottom_pane_g1_ParamLimits

0xd199,	// (0x00016859) fep_vkb_bottom_pane_g1

0xd1c2,	// (0x00016882) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xd1c2,	// (0x00016882) grid_vkb_keypad_bottom_left_pane

0xd1d7,	// (0x00016897) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xd1d7,	// (0x00016897) grid_vkb_keypad_bottom_right_pane

0xd1ec,	// (0x000168ac) fep_vkb_top_text_pane_g1

0xd207,	// (0x000168c7) fep_vkb_top_text_pane_t1

0xd21c,	// (0x000168dc) cell_vkb_side_pane_ParamLimits

0xd21c,	// (0x000168dc) cell_vkb_side_pane

0xce36,	// (0x000164f6) cell_vkb_side_pane_g1

0xd25b,	// (0x0001691b) cell_vkb_keypad_pane_ParamLimits

0xd25b,	// (0x0001691b) cell_vkb_keypad_pane

0xd2d0,	// (0x00016990) cell_vkb_keypad_pane_g1

0x0008,

0xfb66,	// (0x00019226) bg_popup_fep_shadow_pane_g

0x71e4,	// (0x000108a4) cell_hwr_side_pane_g1

0x71e4,	// (0x000108a4) cell_hwr_side_pane_g2

0xd2da,	// (0x0001699a) cell_vkb_keypad_pane_t1

0xd2e8,	// (0x000169a8) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xd2e8,	// (0x000169a8) cell_vkb_keypad_bottom_left_pane

0xd305,	// (0x000169c5) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xd305,	// (0x000169c5) cell_vkb_keypad_bottom_right_pane

0xce36,	// (0x000164f6) cell_vkb_keypad_bottom_left_pane_g1

0xce36,	// (0x000164f6) cell_vkb_keypad_bottom_right_pane_g1

0xd33e,	// (0x000169fe) cell_vkb_keypad_number_pane_ParamLimits

0xd33e,	// (0x000169fe) cell_vkb_keypad_number_pane

0xd35d,	// (0x00016a1d) cell_vkb_keypad_number_pane_g1

0xd367,	// (0x00016a27) cell_vkb_keypad_number_pane_g2

0xd370,	// (0x00016a30) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb58,	// (0x00019218) cell_vkb_keypad_number_pane_g

0xd2da,	// (0x0001699a) cell_vkb_keypad_number_pane_t1

0xd394,	// (0x00016a54) fep_vkb_candidate_pane_g1

0x0001,

0xfb79,	// (0x00019239) cell_hwr_side_pane_g

0xd3ad,	// (0x00016a6d) cell_hwr_side_pane_t1

0x71ee,	// (0x000108ae) cell_hwr_side_pane_t1_copy1

0x71fc,	// (0x000108bc) cell_hwr_candidate_pane_g1

0x722b,	// (0x000108eb) cell_hwr_candidate_pane_t1

0xce36,	// (0x000164f6) cell_vkb_candidate_pane_g2

0xd3f1,	// (0x00016ab1) cell_vkb_candidate_pane_t1

0x6f97,	// (0x00010657) bg_popup_fep_shadow_pane_ParamLimits

0x6f97,	// (0x00010657) bg_popup_fep_shadow_pane

0x704c,	// (0x0001070c) bg_fep_hwr_top_pane_g4

0xceb6,	// (0x00016576) bg_hwr_side_pane_g1_ParamLimits

0xceb6,	// (0x00016576) bg_hwr_side_pane_g1

0x70bd,	// (0x0001077d) cell_hwr_side_pane_ParamLimits

0x70bd,	// (0x0001077d) cell_hwr_side_pane

0x70f8,	// (0x000107b8) fep_hwr_write_pane_g1_ParamLimits

0x70f8,	// (0x000107b8) fep_hwr_write_pane_g1

0x7105,	// (0x000107c5) fep_hwr_write_pane_g2_ParamLimits

0x7105,	// (0x000107c5) fep_hwr_write_pane_g2

0x7112,	// (0x000107d2) fep_hwr_write_pane_g3_ParamLimits

0x7112,	// (0x000107d2) fep_hwr_write_pane_g3

0x7120,	// (0x000107e0) fep_hwr_write_pane_g4_ParamLimits

0x7120,	// (0x000107e0) fep_hwr_write_pane_g4

0x0005,

0xfb25,	// (0x000191e5) fep_hwr_write_pane_g_ParamLimits

0xfb25,	// (0x000191e5) fep_hwr_write_pane_g

0x704c,	// (0x0001070c) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x704c,	// (0x0001070c) bg_fep_hwr_candidate_pane_g2

0x7135,	// (0x000107f5) cell_hwr_candidate_pane_ParamLimits

0x7135,	// (0x000107f5) cell_hwr_candidate_pane

0x7177,	// (0x00010837) fep_hwr_candidate_pane_g1_ParamLimits

0xcf16,	// (0x000165d6) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xcf16,	// (0x000165d6) bg_popup_fep_shadow_pane_cp2

0xd0a4,	// (0x00016764) fep_vkb_top_pane_g4_ParamLimits

0xd0a4,	// (0x00016764) fep_vkb_top_pane_g4

0xd0ea,	// (0x000167aa) fep_vkb_side_pane_g2_ParamLimits

0xd0ea,	// (0x000167aa) fep_vkb_side_pane_g2

0x8ad1,	// (0x00012191) list_setting_pane_t4_ParamLimits

0x8ad1,	// (0x00012191) list_setting_pane_t4

0x8b4b,	// (0x0001220b) list_setting_number_pane_t5_ParamLimits

0x8b4b,	// (0x0001220b) list_setting_number_pane_t5

0x949a,	// (0x00012b5a) list_double_heading_pane_cp2_ParamLimits

0x949a,	// (0x00012b5a) list_double_heading_pane_cp2

0x891c,	// (0x00011fdc) list_double_heading_pane_g1_cp2_ParamLimits

0x891c,	// (0x00011fdc) list_double_heading_pane_g1_cp2

0x8cc9,	// (0x00012389) list_double_heading_pane_g2_cp2_ParamLimits

0x8cc9,	// (0x00012389) list_double_heading_pane_g2_cp2

0xd3ff,	// (0x00016abf) list_double_heading_pane_t1_cp2_ParamLimits

0xd3ff,	// (0x00016abf) list_double_heading_pane_t1_cp2

0xd415,	// (0x00016ad5) list_double_heading_pane_t2_cp2_ParamLimits

0xd415,	// (0x00016ad5) list_double_heading_pane_t2_cp2

0x7ddb,	// (0x0001149b) aid_value_unit2

0x5d35,	// (0x0000f3f5) popup_preview_fixed_window

0x818a,	// (0x0001184a) bg_popup_preview_window_pane_cp02

0xd427,	// (0x00016ae7) list_preview_fixed_pane

0xd46d,	// (0x00016b2d) list_empty_pane_fp_ParamLimits

0xd46d,	// (0x00016b2d) list_empty_pane_fp

0xd46d,	// (0x00016b2d) list_single_cale_day_pane_fp_ParamLimits

0xd46d,	// (0x00016b2d) list_single_cale_day_pane_fp

0xd46d,	// (0x00016b2d) list_single_graphic_heading_pane_fp_ParamLimits

0xd46d,	// (0x00016b2d) list_single_graphic_heading_pane_fp

0xd46d,	// (0x00016b2d) list_single_graphic_pane_fp_ParamLimits

0xd46d,	// (0x00016b2d) list_single_graphic_pane_fp

0xd46d,	// (0x00016b2d) list_single_heading_pane_fp_ParamLimits

0xd46d,	// (0x00016b2d) list_single_heading_pane_fp

0xd46d,	// (0x00016b2d) list_single_pane_fp_ParamLimits

0xd46d,	// (0x00016b2d) list_single_pane_fp

0xd483,	// (0x00016b43) list_single_pane_fp_g1_ParamLimits

0xd483,	// (0x00016b43) list_single_pane_fp_g1

0x891c,	// (0x00011fdc) list_single_pane_fp_g2_ParamLimits

0x891c,	// (0x00011fdc) list_single_pane_fp_g2

0x8cc9,	// (0x00012389) list_single_pane_fp_g3_ParamLimits

0x8cc9,	// (0x00012389) list_single_pane_fp_g3

0xd48f,	// (0x00016b4f) list_single_pane_fp_g4_ParamLimits

0xd48f,	// (0x00016b4f) list_single_pane_fp_g4

0x0003,

0xfb8c,	// (0x0001924c) list_single_pane_fp_g_ParamLimits

0xfb8c,	// (0x0001924c) list_single_pane_fp_g

0xd49b,	// (0x00016b5b) list_single_pane_fp_t1_ParamLimits

0xd49b,	// (0x00016b5b) list_single_pane_fp_t1

0xd4b2,	// (0x00016b72) list_single_graphic_pane_fp_g1_ParamLimits

0xd4b2,	// (0x00016b72) list_single_graphic_pane_fp_g1

0xd483,	// (0x00016b43) list_single_graphic_pane_fp_g2_ParamLimits

0xd483,	// (0x00016b43) list_single_graphic_pane_fp_g2

0x891c,	// (0x00011fdc) list_single_graphic_pane_fp_g3_ParamLimits

0x891c,	// (0x00011fdc) list_single_graphic_pane_fp_g3

0x8cc9,	// (0x00012389) list_single_graphic_pane_fp_g4_ParamLimits

0x8cc9,	// (0x00012389) list_single_graphic_pane_fp_g4

0xd48f,	// (0x00016b4f) list_single_graphic_pane_fp_g5_ParamLimits

0xd48f,	// (0x00016b4f) list_single_graphic_pane_fp_g5

0x0004,

0xfb95,	// (0x00019255) list_single_graphic_pane_fp_g_ParamLimits

0xfb95,	// (0x00019255) list_single_graphic_pane_fp_g

0xd4be,	// (0x00016b7e) list_single_graphic_pane_fp_t1_ParamLimits

0xd4be,	// (0x00016b7e) list_single_graphic_pane_fp_t1

0xd4b2,	// (0x00016b72) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xd4b2,	// (0x00016b72) list_single_graphic_heading_pane_fp_g1

0xd483,	// (0x00016b43) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xd483,	// (0x00016b43) list_single_graphic_heading_pane_fp_g2

0x891c,	// (0x00011fdc) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x891c,	// (0x00011fdc) list_single_graphic_heading_pane_fp_g3

0x8cc9,	// (0x00012389) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x8cc9,	// (0x00012389) list_single_graphic_heading_pane_fp_g4

0xd48f,	// (0x00016b4f) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xd48f,	// (0x00016b4f) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb95,	// (0x00019255) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb95,	// (0x00019255) list_single_graphic_heading_pane_fp_g

0xd4d4,	// (0x00016b94) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xd4d4,	// (0x00016b94) list_single_graphic_heading_pane_fp_t1

0xd4ea,	// (0x00016baa) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xd4ea,	// (0x00016baa) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfba0,	// (0x00019260) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfba0,	// (0x00019260) list_single_graphic_heading_pane_fp_t

0xd4fc,	// (0x00016bbc) list_single_cale_day_pane_fp_g1_ParamLimits

0xd4fc,	// (0x00016bbc) list_single_cale_day_pane_fp_g1

0xd534,	// (0x00016bf4) list_single_cale_day_pane_fp_g2_ParamLimits

0xd534,	// (0x00016bf4) list_single_cale_day_pane_fp_g2

0xd540,	// (0x00016c00) list_single_cale_day_pane_fp_g3_ParamLimits

0xd540,	// (0x00016c00) list_single_cale_day_pane_fp_g3

0xd568,	// (0x00016c28) list_single_cale_day_pane_fp_g4_ParamLimits

0xd568,	// (0x00016c28) list_single_cale_day_pane_fp_g4

0xd58c,	// (0x00016c4c) list_single_cale_day_pane_fp_g5_ParamLimits

0xd58c,	// (0x00016c4c) list_single_cale_day_pane_fp_g5

0x0004,

0xfba5,	// (0x00019265) list_single_cale_day_pane_fp_g_ParamLimits

0xfba5,	// (0x00019265) list_single_cale_day_pane_fp_g

0xd5b0,	// (0x00016c70) list_single_cale_day_pane_fp_t1_ParamLimits

0xd5b0,	// (0x00016c70) list_single_cale_day_pane_fp_t1

0xd5d6,	// (0x00016c96) list_single_cale_day_pane_fp_t2_ParamLimits

0xd5d6,	// (0x00016c96) list_single_cale_day_pane_fp_t2

0xd5ef,	// (0x00016caf) list_single_cale_day_pane_fp_t3_ParamLimits

0xd5ef,	// (0x00016caf) list_single_cale_day_pane_fp_t3

0x0002,

0xfbb0,	// (0x00019270) list_single_cale_day_pane_fp_t_ParamLimits

0xfbb0,	// (0x00019270) list_single_cale_day_pane_fp_t

0xd483,	// (0x00016b43) list_empty_pane_fp_g1_ParamLimits

0xd483,	// (0x00016b43) list_empty_pane_fp_g1

0xd608,	// (0x00016cc8) list_empty_pane_fp_t1

0xd616,	// (0x00016cd6) list_empty_pane_fp_t2

0x0001,

0xfbb7,	// (0x00019277) list_empty_pane_fp_t

0xd483,	// (0x00016b43) list_single_heading_pane_fp_g1_ParamLimits

0xd483,	// (0x00016b43) list_single_heading_pane_fp_g1

0x891c,	// (0x00011fdc) list_single_heading_pane_fp_g2_ParamLimits

0x891c,	// (0x00011fdc) list_single_heading_pane_fp_g2

0x8cc9,	// (0x00012389) list_single_heading_pane_fp_g3_ParamLimits

0x8cc9,	// (0x00012389) list_single_heading_pane_fp_g3

0x0002,

0xfbbc,	// (0x0001927c) list_single_heading_pane_fp_g_ParamLimits

0xfbbc,	// (0x0001927c) list_single_heading_pane_fp_g

0xd624,	// (0x00016ce4) list_single_heading_pane_fp_t1_ParamLimits

0xd624,	// (0x00016ce4) list_single_heading_pane_fp_t1

0xd636,	// (0x00016cf6) list_single_heading_pane_fp_t2_ParamLimits

0xd636,	// (0x00016cf6) list_single_heading_pane_fp_t2

0x0001,

0xfbc3,	// (0x00019283) list_single_heading_pane_fp_t_ParamLimits

0xfbc3,	// (0x00019283) list_single_heading_pane_fp_t

0x9003,	// (0x000126c3) aid_size_cell_fast

0x80fa,	// (0x000117ba) soft_indicator_pane_cp1_t1

0x903d,	// (0x000126fd) cell_app_pane_cp2_ParamLimits

0x903d,	// (0x000126fd) cell_app_pane_cp2

0x6fb9,	// (0x00010679) fep_hwr_candidate_drop_down_list_pane

0x7191,	// (0x00010851) fep_hwr_candidate_pane_g3_ParamLimits

0x7191,	// (0x00010851) fep_hwr_candidate_pane_g3

0x52fd,	// (0x0000e9bd) fep_hwr_candidate_pane_g4_ParamLimits

0x52fd,	// (0x0000e9bd) fep_hwr_candidate_pane_g4

0x0002,

0xfb32,	// (0x000191f2) fep_hwr_candidate_pane_g_ParamLimits

0xfb32,	// (0x000191f2) fep_hwr_candidate_pane_g

0xcf99,	// (0x00016659) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xcf99,	// (0x00016659) fep_vkb_candidate_drop_down_list_pane

0xd39c,	// (0x00016a5c) fep_vkb_candidate_pane_g3

0xd3a4,	// (0x00016a64) fep_vkb_candidate_pane_g4

0x0002,

0xfb5f,	// (0x0001921f) fep_vkb_candidate_pane_g

0x71fc,	// (0x000108bc) cell_hwr_candidate_pane_g1_ParamLimits

0x720a,	// (0x000108ca) cell_hwr_candidate_pane_g3_ParamLimits

0x720a,	// (0x000108ca) cell_hwr_candidate_pane_g3

0xf52b,	// (0x00018beb) cell_hwr_candidate_pane_g4_ParamLimits

0xf52b,	// (0x00018beb) cell_hwr_candidate_pane_g4

0x0002,

0xfb7e,	// (0x0001923e) cell_hwr_candidate_pane_g_ParamLimits

0xfb7e,	// (0x0001923e) cell_hwr_candidate_pane_g

0xd3bb,	// (0x00016a7b) cell_vkb_candidate_pane_g3_ParamLimits

0xd3bb,	// (0x00016a7b) cell_vkb_candidate_pane_g3

0xd3d6,	// (0x00016a96) cell_vkb_candidate_pane_g4_ParamLimits

0xd3d6,	// (0x00016a96) cell_vkb_candidate_pane_g4

0xd64c,	// (0x00016d0c) cell_app_pane_cp2_g1_ParamLimits

0xd64c,	// (0x00016d0c) cell_app_pane_cp2_g1

0xd66a,	// (0x00016d2a) cell_app_pane_cp2_g2_ParamLimits

0xd66a,	// (0x00016d2a) cell_app_pane_cp2_g2

0x0001,

0xfbc8,	// (0x00019288) cell_app_pane_cp2_g_ParamLimits

0xfbc8,	// (0x00019288) cell_app_pane_cp2_g

0xd676,	// (0x00016d36) cell_app_pane_cp2_t1_ParamLimits

0xd676,	// (0x00016d36) cell_app_pane_cp2_t1

0x8ca3,	// (0x00012363) grid_highlight_pane_cp1_ParamLimits

0x8ca3,	// (0x00012363) grid_highlight_pane_cp1

0x7249,	// (0x00010909) cell_hwr_candidate_pane_cp1_ParamLimits

0x7249,	// (0x00010909) cell_hwr_candidate_pane_cp1

0x71fc,	// (0x000108bc) fep_hwr_candidate_drop_down_list_pane_g1

0x7268,	// (0x00010928) fep_hwr_candidate_drop_down_list_pane_g2

0x7275,	// (0x00010935) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbcd,	// (0x0001928d) fep_hwr_candidate_drop_down_list_pane_g

0x7282,	// (0x00010942) fep_hwr_candidate_drop_down_list_scroll_pane

0x728b,	// (0x0001094b) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x728b,	// (0x0001094b) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x7298,	// (0x00010958) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7298,	// (0x00010958) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x72a5,	// (0x00010965) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x72a5,	// (0x00010965) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x72b2,	// (0x00010972) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x72b2,	// (0x00010972) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x72cd,	// (0x0001098d) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x72cd,	// (0x0001098d) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x72e8,	// (0x000109a8) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x72e8,	// (0x000109a8) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x7303,	// (0x000109c3) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7303,	// (0x000109c3) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x731e,	// (0x000109de) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x731e,	// (0x000109de) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd4,	// (0x00019294) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd4,	// (0x00019294) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xd688,	// (0x00016d48) cell_vkb_candidate_pane_cp1_ParamLimits

0xd688,	// (0x00016d48) cell_vkb_candidate_pane_cp1

0xd0a4,	// (0x00016764) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xd0a4,	// (0x00016764) fep_vkb_candidate_drop_down_list_pane_g1

0xd6a8,	// (0x00016d68) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xd6a8,	// (0x00016d68) fep_vkb_candidate_drop_down_list_pane_g2

0xd6b5,	// (0x00016d75) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xd6b5,	// (0x00016d75) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbe5,	// (0x000192a5) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbe5,	// (0x000192a5) fep_vkb_candidate_drop_down_list_pane_g

0xd6c2,	// (0x00016d82) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xd6c2,	// (0x00016d82) fep_vkb_candidate_drop_down_list_scroll_pane

0xd6cf,	// (0x00016d8f) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xd6cf,	// (0x00016d8f) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xd6dc,	// (0x00016d9c) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xd6dc,	// (0x00016d9c) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xd6e8,	// (0x00016da8) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xd6e8,	// (0x00016da8) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xd6f4,	// (0x00016db4) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xd6f4,	// (0x00016db4) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xd715,	// (0x00016dd5) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xd715,	// (0x00016dd5) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xd736,	// (0x00016df6) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xd736,	// (0x00016df6) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xd757,	// (0x00016e17) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xd757,	// (0x00016e17) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xd778,	// (0x00016e38) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xd778,	// (0x00016e38) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbec,	// (0x000192ac) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbec,	// (0x000192ac) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x7e11,	// (0x000114d1) title_pane_g1_ParamLimits

0x7e1e,	// (0x000114de) title_pane_g2_ParamLimits

0xf554,	// (0x00018c14) title_pane_g_ParamLimits

0x9443,	// (0x00012b03) aid_call2_pane

0x944b,	// (0x00012b0b) aid_call_pane

0x9453,	// (0x00012b13) popup_clock_analogue_window_g1

0x9453,	// (0x00012b13) popup_clock_analogue_window_g2

0x60a8,	// (0x0000f768) popup_clock_analogue_window_g3

0x60b1,	// (0x0000f771) popup_clock_analogue_window_g4

0x7dfd,	// (0x000114bd) popup_clock_analogue_window_g5

0x0004,

0xf6f9,	// (0x00018db9) popup_clock_analogue_window_g

0x60b9,	// (0x0000f779) popup_clock_analogue_window_t1

0x60c7,	// (0x0000f787) clock_digital_number_pane_ParamLimits

0x60c7,	// (0x0000f787) clock_digital_number_pane

0x60d3,	// (0x0000f793) clock_digital_number_pane_cp02_ParamLimits

0x60d3,	// (0x0000f793) clock_digital_number_pane_cp02

0x60df,	// (0x0000f79f) clock_digital_number_pane_cp03_ParamLimits

0x60df,	// (0x0000f79f) clock_digital_number_pane_cp03

0x60eb,	// (0x0000f7ab) clock_digital_number_pane_cp04_ParamLimits

0x60eb,	// (0x0000f7ab) clock_digital_number_pane_cp04

0x60f7,	// (0x0000f7b7) clock_digital_separator_pane_ParamLimits

0x60f7,	// (0x0000f7b7) clock_digital_separator_pane

0x6103,	// (0x0000f7c3) popup_clock_digital_window_t1_ParamLimits

0x6103,	// (0x0000f7c3) popup_clock_digital_window_t1

0x7dfd,	// (0x000114bd) clock_digital_number_pane_g1

0x7dfd,	// (0x000114bd) clock_digital_number_pane_g2

0x0001,

0xf704,	// (0x00018dc4) clock_digital_number_pane_g

0x7dfd,	// (0x000114bd) clock_digital_separator_pane_g1

0x7dfd,	// (0x000114bd) clock_digital_separator_pane_g2

0x0001,

0xf704,	// (0x00018dc4) clock_digital_separator_pane_g

0x9e47,	// (0x00013507) aid_fill_nsta_ParamLimits

0x9f89,	// (0x00013649) indicator_nsta_pane_ParamLimits

0xa102,	// (0x000137c2) popup_clock_analogue_window

0xa102,	// (0x000137c2) popup_clock_digital_window

0x7ee7,	// (0x000115a7) grid_indicator_nsta_pane_ParamLimits

0xc7b4,	// (0x00015e74) clock_nsta_pane_t2

0x0001,

0xfab2,	// (0x00019172) clock_nsta_pane_t

0x606c,	// (0x0000f72c) aid_size_max_handle

0x6076,	// (0x0000f736) aid_size_min_handle

0x9ad9,	// (0x00013199) editor_scroll_pane

0xd793,	// (0x00016e53) ex_editor_pane

0x8f71,	// (0x00012631) scroll_pane_cp13

0x86f7,	// (0x00011db7) scroll_pane_cp14

0x9482,	// (0x00012b42) scroll_pane_cp36

0x94ae,	// (0x00012b6e) list_single_graphic_hl_pane_cp2_ParamLimits

0x94ae,	// (0x00012b6e) list_single_graphic_hl_pane_cp2

0xbaae,	// (0x0001516e) list_single_graphic_hl_pane_ParamLimits

0xbaae,	// (0x0001516e) list_single_graphic_hl_pane

0xd79b,	// (0x00016e5b) aid_size_min_hl_cp1

0xd7a4,	// (0x00016e64) list_highlight_pane_cp34_ParamLimits

0xd7a4,	// (0x00016e64) list_highlight_pane_cp34

0xd7b5,	// (0x00016e75) list_single_graphic_hl_pane_g1_ParamLimits

0xd7b5,	// (0x00016e75) list_single_graphic_hl_pane_g1

0xd7c2,	// (0x00016e82) list_single_graphic_hl_pane_g2_ParamLimits

0xd7c2,	// (0x00016e82) list_single_graphic_hl_pane_g2

0xd7c2,	// (0x00016e82) list_single_graphic_hl_pane_g3_ParamLimits

0xd7c2,	// (0x00016e82) list_single_graphic_hl_pane_g3

0xc04a,	// (0x0001570a) list_single_graphic_hl_pane_g4_ParamLimits

0xc04a,	// (0x0001570a) list_single_graphic_hl_pane_g4

0xd7ce,	// (0x00016e8e) list_single_graphic_hl_pane_g5_ParamLimits

0xd7ce,	// (0x00016e8e) list_single_graphic_hl_pane_g5

0x0004,

0xfbfd,	// (0x000192bd) list_single_graphic_hl_pane_g_ParamLimits

0xfbfd,	// (0x000192bd) list_single_graphic_hl_pane_g

0xd7e2,	// (0x00016ea2) list_single_graphic_hl_pane_t1_ParamLimits

0xd7e2,	// (0x00016ea2) list_single_graphic_hl_pane_t1

0xd7f8,	// (0x00016eb8) aid_size_min_hl_cp2

0xd801,	// (0x00016ec1) list_highlight_pane_cp34_cp2_ParamLimits

0xd801,	// (0x00016ec1) list_highlight_pane_cp34_cp2

0xd7b5,	// (0x00016e75) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xd7b5,	// (0x00016e75) list_single_graphic_hl_pane_g1_cp2

0xd80e,	// (0x00016ece) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xd80e,	// (0x00016ece) list_single_graphic_hl_pane_g2_cp2

0xd81a,	// (0x00016eda) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xd81a,	// (0x00016eda) list_single_graphic_hl_pane_g3_cp2

0x870b,	// (0x00011dcb) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x870b,	// (0x00011dcb) list_single_graphic_hl_pane_g4_cp2

0xd828,	// (0x00016ee8) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xd828,	// (0x00016ee8) list_single_graphic_hl_pane_g5_cp2

0x63ae,	// (0x0000fa6e) control_pane_g4_ParamLimits

0x63ae,	// (0x0000fa6e) control_pane_g4

0x9e1d,	// (0x000134dd) bg_popup_sub_pane_cp10_ParamLimits

0xce40,	// (0x00016500) list_choice_list_pane_ParamLimits

0xce4f,	// (0x0001650f) scroll_pane_cp23

0x818a,	// (0x0001184a) bg_popup_preview_window_pane_cp02_ParamLimits

0xd427,	// (0x00016ae7) list_preview_fixed_pane_ParamLimits

0xd43d,	// (0x00016afd) list_preview_fixed_pane_cp_ParamLimits

0xd43d,	// (0x00016afd) list_preview_fixed_pane_cp

0xd449,	// (0x00016b09) popup_preview_fixed_window_g1_ParamLimits

0xd449,	// (0x00016b09) popup_preview_fixed_window_g1

0xd455,	// (0x00016b15) popup_preview_fixed_window_g2_ParamLimits

0xd455,	// (0x00016b15) popup_preview_fixed_window_g2

0x0002,

0xfb85,	// (0x00019245) popup_preview_fixed_window_g_ParamLimits

0xfb85,	// (0x00019245) popup_preview_fixed_window_g

0x5fe0,	// (0x0000f6a0) aid_navi_side_left_pane_ParamLimits

0x5ff5,	// (0x0000f6b5) aid_navi_side_right_pane_ParamLimits

0x600d,	// (0x0000f6cd) navi_icon_pane_stacon_ParamLimits

0x6021,	// (0x0000f6e1) navi_navi_pane_stacon_ParamLimits

0x600d,	// (0x0000f6cd) navi_text_pane_stacon_ParamLimits

0x5c04,	// (0x0000f2c4) main_text_info_pane

0xd852,	// (0x00016f12) listscroll_text_info_pane

0xd85a,	// (0x00016f1a) list_text_info_pane_ParamLimits

0xd85a,	// (0x00016f1a) list_text_info_pane

0xd869,	// (0x00016f29) scroll_pane_cp24_ParamLimits

0xd869,	// (0x00016f29) scroll_pane_cp24

0xd887,	// (0x00016f47) list_text_info_pane_t1_ParamLimits

0xd887,	// (0x00016f47) list_text_info_pane_t1

0x651e,	// (0x0000fbde) popup_fast_swap2_window_ParamLimits

0x651e,	// (0x0000fbde) popup_fast_swap2_window

0xd8bc,	// (0x00016f7c) aid_size_cell_fast2

0x7df3,	// (0x000114b3) bg_popup_window_pane_cp17

0xa89e,	// (0x00013f5e) heading_pane_cp2

0x83ca,	// (0x00011a8a) listscroll_fast2_pane

0xd8c6,	// (0x00016f86) grid_fast2_pane

0xd8d0,	// (0x00016f90) listscroll_fast2_pane_g1

0xd8d8,	// (0x00016f98) listscroll_fast2_pane_g2

0x0001,

0xfc08,	// (0x000192c8) listscroll_fast2_pane_g

0x8f71,	// (0x00012631) scroll_pane_cp26

0xd8e2,	// (0x00016fa2) cell_fast2_pane_ParamLimits

0xd8e2,	// (0x00016fa2) cell_fast2_pane

0xd8f7,	// (0x00016fb7) cell_fast2_pane_g1

0xd900,	// (0x00016fc0) cell_fast2_pane_g2

0xd909,	// (0x00016fc9) cell_fast2_pane_g3

0x0002,

0xfc0d,	// (0x000192cd) cell_fast2_pane_g

0x84b4,	// (0x00011b74) grid_highlight_pane_cp9

0x64e6,	// (0x0000fba6) main_eswt_pane_ParamLimits

0x64e6,	// (0x0000fba6) main_eswt_pane

0xd87e,	// (0x00016f3e) list_single_text_info_pane

0xd911,	// (0x00016fd1) eswt_ctrl_button_pane

0xd911,	// (0x00016fd1) eswt_ctrl_canvas_pane

0xd919,	// (0x00016fd9) eswt_ctrl_combo_pane

0xd911,	// (0x00016fd1) eswt_ctrl_default_pane

0xd911,	// (0x00016fd1) eswt_ctrl_label_pane

0xd921,	// (0x00016fe1) eswt_ctrl_wait_pane

0xd929,	// (0x00016fe9) eswt_shell_pane

0x7df3,	// (0x000114b3) listscroll_eswt_app_pane

0xd949,	// (0x00017009) popup_eswt_tasktip_window_ParamLimits

0xd949,	// (0x00017009) popup_eswt_tasktip_window

0xa45d,	// (0x00013b1d) bg_popup_window_pane_cp18

0xd95a,	// (0x0001701a) eswt_control_pane_g1_ParamLimits

0xd95a,	// (0x0001701a) eswt_control_pane_g1

0xd967,	// (0x00017027) eswt_control_pane_g2_ParamLimits

0xd967,	// (0x00017027) eswt_control_pane_g2

0xd974,	// (0x00017034) eswt_control_pane_g3_ParamLimits

0xd974,	// (0x00017034) eswt_control_pane_g3

0xd981,	// (0x00017041) eswt_control_pane_g4_ParamLimits

0xd981,	// (0x00017041) eswt_control_pane_g4

0x0003,

0xfc14,	// (0x000192d4) eswt_control_pane_g_ParamLimits

0xfc14,	// (0x000192d4) eswt_control_pane_g

0x8ca3,	// (0x00012363) bg_button_pane_ParamLimits

0x8ca3,	// (0x00012363) bg_button_pane

0x84c9,	// (0x00011b89) common_borders_pane_copy2_ParamLimits

0x84c9,	// (0x00011b89) common_borders_pane_copy2

0xd98e,	// (0x0001704e) control_button_pane_g1_ParamLimits

0xd98e,	// (0x0001704e) control_button_pane_g1

0xd99a,	// (0x0001705a) control_button_pane_g2_ParamLimits

0xd99a,	// (0x0001705a) control_button_pane_g2

0xd9a6,	// (0x00017066) control_button_pane_g3_ParamLimits

0xd9a6,	// (0x00017066) control_button_pane_g3

0x0002,

0xfc1d,	// (0x000192dd) control_button_pane_g_ParamLimits

0xfc1d,	// (0x000192dd) control_button_pane_g

0xd9ba,	// (0x0001707a) control_button_pane_t1

0xd9c8,	// (0x00017088) control_button_pane_t2

0x0001,

0xfc24,	// (0x000192e4) control_button_pane_t

0xa339,	// (0x000139f9) bg_button_pane_g1

0xa349,	// (0x00013a09) bg_button_pane_g2

0xa341,	// (0x00013a01) bg_button_pane_g3

0xa359,	// (0x00013a19) bg_button_pane_g4

0xa351,	// (0x00013a11) bg_button_pane_g5

0xa361,	// (0x00013a21) bg_button_pane_g6

0xa369,	// (0x00013a29) bg_button_pane_g7

0xa379,	// (0x00013a39) bg_button_pane_g8

0xa371,	// (0x00013a31) bg_button_pane_g9

0x0008,

0xf862,	// (0x00018f22) bg_button_pane_g

0xcdfb,	// (0x000164bb) common_borders_pane_ParamLimits

0xcdfb,	// (0x000164bb) common_borders_pane

0xd95a,	// (0x0001701a) eswt_control_pane_g1_copy1_ParamLimits

0xd95a,	// (0x0001701a) eswt_control_pane_g1_copy1

0xd967,	// (0x00017027) eswt_control_pane_g2_copy1_ParamLimits

0xd967,	// (0x00017027) eswt_control_pane_g2_copy1

0xd974,	// (0x00017034) eswt_control_pane_g3_copy1_ParamLimits

0xd974,	// (0x00017034) eswt_control_pane_g3_copy1

0xd981,	// (0x00017041) eswt_control_pane_g4_copy1_ParamLimits

0xd981,	// (0x00017041) eswt_control_pane_g4_copy1

0xce36,	// (0x000164f6) bg_eswt_ctrl_canvas_pane_g1

0xcdfb,	// (0x000164bb) common_borders_pane_cp2_ParamLimits

0xcdfb,	// (0x000164bb) common_borders_pane_cp2

0xcdfb,	// (0x000164bb) common_borders_pane_cp3_ParamLimits

0xcdfb,	// (0x000164bb) common_borders_pane_cp3

0xd9d6,	// (0x00017096) separator_horizontal_pane

0xd9de,	// (0x0001709e) separator_vertical_pane

0xd95a,	// (0x0001701a) eswt_control_pane_g1_copy2_ParamLimits

0xd95a,	// (0x0001701a) eswt_control_pane_g1_copy2

0xd967,	// (0x00017027) eswt_control_pane_g2_copy2_ParamLimits

0xd967,	// (0x00017027) eswt_control_pane_g2_copy2

0xd974,	// (0x00017034) eswt_control_pane_g3_copy2_ParamLimits

0xd974,	// (0x00017034) eswt_control_pane_g3_copy2

0xd981,	// (0x00017041) eswt_control_pane_g4_copy2_ParamLimits

0xd981,	// (0x00017041) eswt_control_pane_g4_copy2

0x7df3,	// (0x000114b3) common_borders_pane_cp4

0xd9e7,	// (0x000170a7) separator_horizontal_pane_g1

0xd9f0,	// (0x000170b0) separator_horizontal_pane_g2

0xd9f9,	// (0x000170b9) separator_horizontal_pane_g3

0x0002,

0xfc29,	// (0x000192e9) separator_horizontal_pane_g

0xd95a,	// (0x0001701a) eswt_control_pane_g1_copy3_ParamLimits

0xd95a,	// (0x0001701a) eswt_control_pane_g1_copy3

0xd967,	// (0x00017027) eswt_control_pane_g2_copy3_ParamLimits

0xd967,	// (0x00017027) eswt_control_pane_g2_copy3

0xd974,	// (0x00017034) eswt_control_pane_g3_copy3_ParamLimits

0xd974,	// (0x00017034) eswt_control_pane_g3_copy3

0xd981,	// (0x00017041) eswt_control_pane_g4_copy3_ParamLimits

0xd981,	// (0x00017041) eswt_control_pane_g4_copy3

0x7df3,	// (0x000114b3) common_borders_pane_cp5

0xda02,	// (0x000170c2) separator_vertical_pane_g1

0xda0b,	// (0x000170cb) separator_vertical_pane_g2

0xda14,	// (0x000170d4) separator_vertical_pane_g3

0x0002,

0xfc30,	// (0x000192f0) separator_vertical_pane_g

0xd95a,	// (0x0001701a) eswt_control_pane_g1_copy4_ParamLimits

0xd95a,	// (0x0001701a) eswt_control_pane_g1_copy4

0xd967,	// (0x00017027) eswt_control_pane_g2_copy4_ParamLimits

0xd967,	// (0x00017027) eswt_control_pane_g2_copy4

0xd974,	// (0x00017034) eswt_control_pane_g3_copy4_ParamLimits

0xd974,	// (0x00017034) eswt_control_pane_g3_copy4

0xd981,	// (0x00017041) eswt_control_pane_g4_copy4_ParamLimits

0xd981,	// (0x00017041) eswt_control_pane_g4_copy4

0xda1d,	// (0x000170dd) eswt_ctrl_combo_button_pane

0xda25,	// (0x000170e5) eswt_ctrl_input_pane

0xda2d,	// (0x000170ed) popup_choice_list_window_cp70

0xda35,	// (0x000170f5) eswt_ctrl_input_pane_t1

0x7df3,	// (0x000114b3) input_focus_pane_cp70

0xcdfb,	// (0x000164bb) bg_button_pane_cp70_ParamLimits

0xcdfb,	// (0x000164bb) bg_button_pane_cp70

0xda43,	// (0x00017103) eswt_ctrl_combo_button_pane_g1

0xda4b,	// (0x0001710b) wait_bar_pane_cp70

0xa45d,	// (0x00013b1d) bg_popup_window_pane_cp70_ParamLimits

0xa45d,	// (0x00013b1d) bg_popup_window_pane_cp70

0xda53,	// (0x00017113) popup_eswt_tasktip_window_t1

0xda69,	// (0x00017129) wait_bar_pane_cp71_ParamLimits

0xda69,	// (0x00017129) wait_bar_pane_cp71

0xda75,	// (0x00017135) grid_eswt_app_pane

0x9286,	// (0x00012946) scroll_pane_cp70

0xda7e,	// (0x0001713e) cell_eswt_app_pane_ParamLimits

0xda7e,	// (0x0001713e) cell_eswt_app_pane

0xdab2,	// (0x00017172) cell_eswt_app_pane_g1_ParamLimits

0xdab2,	// (0x00017172) cell_eswt_app_pane_g1

0xdae1,	// (0x000171a1) cell_eswt_app_pane_g2_ParamLimits

0xdae1,	// (0x000171a1) cell_eswt_app_pane_g2

0x0001,

0xfc37,	// (0x000192f7) cell_eswt_app_pane_g_ParamLimits

0xfc37,	// (0x000192f7) cell_eswt_app_pane_g

0xdb05,	// (0x000171c5) cell_eswt_app_pane_t1_ParamLimits

0xdb05,	// (0x000171c5) cell_eswt_app_pane_t1

0xdb37,	// (0x000171f7) grid_highlight_pane_cp70_ParamLimits

0xdb37,	// (0x000171f7) grid_highlight_pane_cp70

0x99ba,	// (0x0001307a) set_content_pane_g1

0x9d75,	// (0x00013435) status_small_volume_pane

0x7339,	// (0x000109f9) status_small_volume_pane_g1

0x7341,	// (0x00010a01) volume_small2_pane

0x734a,	// (0x00010a0a) volume_small2_pane_g1

0x7353,	// (0x00010a13) volume_small2_pane_g2

0x735c,	// (0x00010a1c) volume_small2_pane_g3

0x7365,	// (0x00010a25) volume_small2_pane_g4

0x736e,	// (0x00010a2e) volume_small2_pane_g5

0x7377,	// (0x00010a37) volume_small2_pane_g6

0x7380,	// (0x00010a40) volume_small2_pane_g7

0x7389,	// (0x00010a49) volume_small2_pane_g8

0x7392,	// (0x00010a52) volume_small2_pane_g9

0x739b,	// (0x00010a5b) volume_small2_pane_g10

0x0009,

0xfc3c,	// (0x000192fc) volume_small2_pane_g

0xd1ec,	// (0x000168ac) fep_vkb_top_text_pane_g1_ParamLimits

0xd207,	// (0x000168c7) fep_vkb_top_text_pane_t1_ParamLimits

0xd461,	// (0x00016b21) popup_preview_fixed_window_g3_ParamLimits

0xd461,	// (0x00016b21) popup_preview_fixed_window_g3

0x69c5,	// (0x00010085) popup_toolbar_trans_pane

0xb80d,	// (0x00014ecd) aid_height_set_list_ParamLimits

0xb81e,	// (0x00014ede) aid_size_parent_ParamLimits

0x9e1d,	// (0x000134dd) list_highlight_pane_cp2_ParamLimits

0x99ba,	// (0x0001307a) set_content_pane_g1_ParamLimits

0xbacd,	// (0x0001518d) list_single_image_pane_ParamLimits

0xbacd,	// (0x0001518d) list_single_image_pane

0xdb43,	// (0x00017203) aid_size_cell_image_ParamLimits

0xdb43,	// (0x00017203) aid_size_cell_image

0xdb50,	// (0x00017210) grid_single_image_pane_ParamLimits

0xdb50,	// (0x00017210) grid_single_image_pane

0xdb5c,	// (0x0001721c) list_single_image_pane_g1_ParamLimits

0xdb5c,	// (0x0001721c) list_single_image_pane_g1

0xdb68,	// (0x00017228) list_single_image_pane_g2_ParamLimits

0xdb68,	// (0x00017228) list_single_image_pane_g2

0x0001,

0xfc51,	// (0x00019311) list_single_image_pane_g_ParamLimits

0xfc51,	// (0x00019311) list_single_image_pane_g

0xdb7c,	// (0x0001723c) list_single_image_pane_t1_ParamLimits

0xdb7c,	// (0x0001723c) list_single_image_pane_t1

0xdb92,	// (0x00017252) cell_image_list_pane_ParamLimits

0xdb92,	// (0x00017252) cell_image_list_pane

0xdba6,	// (0x00017266) cell_image_list_pane_g1

0xdbaf,	// (0x0001726f) cell_image_list_pane_g2

0x0001,

0xfc56,	// (0x00019316) cell_image_list_pane_g

0xdbb8,	// (0x00017278) aid_size_cell_tb_trans_pane

0x8ca3,	// (0x00012363) bg_tb_trans_pane

0xdbca,	// (0x0001728a) grid_tb_trans_pane

0xa339,	// (0x000139f9) bg_tb_trans_pane_g1

0xa349,	// (0x00013a09) bg_tb_trans_pane_g2

0xa341,	// (0x00013a01) bg_tb_trans_pane_g3

0xa359,	// (0x00013a19) bg_tb_trans_pane_g4

0xa351,	// (0x00013a11) bg_tb_trans_pane_g5

0xa379,	// (0x00013a39) bg_tb_trans_pane_g6

0xa371,	// (0x00013a31) bg_tb_trans_pane_g7

0xa361,	// (0x00013a21) bg_tb_trans_pane_g8

0xa369,	// (0x00013a29) bg_tb_trans_pane_g9

0x0008,

0xfc5b,	// (0x0001931b) bg_tb_trans_pane_g

0xdbde,	// (0x0001729e) cell_toolbar_trans_pane_ParamLimits

0xdbde,	// (0x0001729e) cell_toolbar_trans_pane

0xce36,	// (0x000164f6) cell_toolbar_trans_pane_g1

0xc997,	// (0x00016057) list_form2_midp_pane_t1

0xc9a5,	// (0x00016065) list_form2_midp_pane_t2

0x0001,

0xfaf8,	// (0x000191b8) list_form2_midp_pane_t

0xc9b3,	// (0x00016073) scroll_pane_cp51_ParamLimits

0xcbb9,	// (0x00016279) form2_midp_wait_pane_g1

0xcbc2,	// (0x00016282) form2_midp_wait_pane_g2

0xcbcb,	// (0x0001628b) form2_midp_wait_pane_g3

0x0002,

0xfb0d,	// (0x000191cd) form2_midp_wait_pane_g

0x7ee7,	// (0x000115a7) list_highlight_pane_cp21_ParamLimits

0xcc19,	// (0x000162d9) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xcc28,	// (0x000162e8) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xba46,	// (0x00015106) list_single_2graphic_im_pane_ParamLimits

0xba46,	// (0x00015106) list_single_2graphic_im_pane

0xdc04,	// (0x000172c4) list_single_2graphic_im_pane_g1_ParamLimits

0xdc04,	// (0x000172c4) list_single_2graphic_im_pane_g1

0xdc15,	// (0x000172d5) list_single_2graphic_im_pane_g2_ParamLimits

0xdc15,	// (0x000172d5) list_single_2graphic_im_pane_g2

0xdc21,	// (0x000172e1) list_single_2graphic_im_pane_g3_ParamLimits

0xdc21,	// (0x000172e1) list_single_2graphic_im_pane_g3

0x0003,

0xfc6e,	// (0x0001932e) list_single_2graphic_im_pane_g_ParamLimits

0xfc6e,	// (0x0001932e) list_single_2graphic_im_pane_g

0xdc41,	// (0x00017301) list_single_2graphic_im_pane_t1_ParamLimits

0xdc41,	// (0x00017301) list_single_2graphic_im_pane_t1

0xd46d,	// (0x00016b2d) list_single_graphic_2heading_pane_fp_ParamLimits

0xd46d,	// (0x00016b2d) list_single_graphic_2heading_pane_fp

0xd4b2,	// (0x00016b72) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xd4b2,	// (0x00016b72) list_single_graphic_2heading_pane_fp_g1

0xd483,	// (0x00016b43) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xd483,	// (0x00016b43) list_single_graphic_2heading_pane_fp_g2

0x891c,	// (0x00011fdc) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x891c,	// (0x00011fdc) list_single_graphic_2heading_pane_fp_g3

0x8cc9,	// (0x00012389) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x8cc9,	// (0x00012389) list_single_graphic_2heading_pane_fp_g4

0xd48f,	// (0x00016b4f) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xd48f,	// (0x00016b4f) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb95,	// (0x00019255) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb95,	// (0x00019255) list_single_graphic_2heading_pane_fp_g

0xdc72,	// (0x00017332) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xdc72,	// (0x00017332) list_single_graphic_2heading_pane_fp_t1

0xd4ea,	// (0x00016baa) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xd4ea,	// (0x00016baa) list_single_graphic_2heading_pane_fp_t2

0xdc88,	// (0x00017348) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xdc88,	// (0x00017348) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc77,	// (0x00019337) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc77,	// (0x00019337) list_single_graphic_2heading_pane_fp_t

0xcec2,	// (0x00016582) fep_hwr_write_pane_g5_ParamLimits

0xcec2,	// (0x00016582) fep_hwr_write_pane_g5

0xcece,	// (0x0001658e) fep_hwr_write_pane_g6_ParamLimits

0xcece,	// (0x0001658e) fep_hwr_write_pane_g6

0xd929,	// (0x00016fe9) eswt_shell_pane_ParamLimits

0xa45d,	// (0x00013b1d) bg_popup_window_pane_cp18_ParamLimits

0xb75a,	// (0x00014e1a) heading_pane_cp70

0xda53,	// (0x00017113) popup_eswt_tasktip_window_t1_ParamLimits

0x9e9c,	// (0x0001355c) aid_touch_tab_arrow_left

0x9ea8,	// (0x00013568) aid_touch_tab_arrow_right

0x7e2f,	// (0x000114ef) title_pane_g3_ParamLimits

0x7e2f,	// (0x000114ef) title_pane_g3

0x8b8e,	// (0x0001224e) set_value_pane_g1

0x69c5,	// (0x00010085) popup_toolbar_trans_pane_ParamLimits

0xdbb8,	// (0x00017278) aid_size_cell_tb_trans_pane_ParamLimits

0x8ca3,	// (0x00012363) bg_tb_trans_pane_ParamLimits

0xdbca,	// (0x0001728a) grid_tb_trans_pane_ParamLimits

0x818a,	// (0x0001184a) cont_note_pane_ParamLimits

0x818a,	// (0x0001184a) cont_note_pane

0x84c9,	// (0x00011b89) cont_snote2_single_text_pane_ParamLimits

0x84c9,	// (0x00011b89) cont_snote2_single_text_pane

0x84c9,	// (0x00011b89) cont_snote2_single_graphic_pane_ParamLimits

0x84c9,	// (0x00011b89) cont_snote2_single_graphic_pane

0xaab4,	// (0x00014174) cont_note_wait_pane_ParamLimits

0xaab4,	// (0x00014174) cont_note_wait_pane

0xaab4,	// (0x00014174) cont_note_image_pane_ParamLimits

0xaab4,	// (0x00014174) cont_note_image_pane

0xdc9e,	// (0x0001735e) popup_note2_window_g1_ParamLimits

0xdc9e,	// (0x0001735e) popup_note2_window_g1

0xdccf,	// (0x0001738f) popup_note2_window_t1_ParamLimits

0xdccf,	// (0x0001738f) popup_note2_window_t1

0xdd14,	// (0x000173d4) popup_note2_window_t2_ParamLimits

0xdd14,	// (0x000173d4) popup_note2_window_t2

0xdd59,	// (0x00017419) popup_note2_window_t3_ParamLimits

0xdd59,	// (0x00017419) popup_note2_window_t3

0xdd9e,	// (0x0001745e) popup_note2_window_t4_ParamLimits

0xdd9e,	// (0x0001745e) popup_note2_window_t4

0x8202,	// (0x000118c2) popup_note2_window_t5_ParamLimits

0x8202,	// (0x000118c2) popup_note2_window_t5

0x0004,

0xfc83,	// (0x00019343) popup_note2_window_t_ParamLimits

0xfc83,	// (0x00019343) popup_note2_window_t

0xddcd,	// (0x0001748d) popup_note2_image_window_g1_ParamLimits

0xddcd,	// (0x0001748d) popup_note2_image_window_g1

0xddd9,	// (0x00017499) popup_note2_image_window_g2_ParamLimits

0xddd9,	// (0x00017499) popup_note2_image_window_g2

0x0001,

0xfc8e,	// (0x0001934e) popup_note2_image_window_g_ParamLimits

0xfc8e,	// (0x0001934e) popup_note2_image_window_g

0xddeb,	// (0x000174ab) popup_note2_image_window_t1_ParamLimits

0xddeb,	// (0x000174ab) popup_note2_image_window_t1

0xde03,	// (0x000174c3) popup_note2_image_window_t2_ParamLimits

0xde03,	// (0x000174c3) popup_note2_image_window_t2

0xde1b,	// (0x000174db) popup_note2_image_window_t3_ParamLimits

0xde1b,	// (0x000174db) popup_note2_image_window_t3

0x0002,

0xfc93,	// (0x00019353) popup_note2_image_window_t_ParamLimits

0xfc93,	// (0x00019353) popup_note2_image_window_t

0xaac2,	// (0x00014182) popup_note2_wait_window_g1_ParamLimits

0xaac2,	// (0x00014182) popup_note2_wait_window_g1

0xde37,	// (0x000174f7) popup_note2_wait_window_g2_ParamLimits

0xde37,	// (0x000174f7) popup_note2_wait_window_g2

0xaada,	// (0x0001419a) popup_note2_wait_window_g3_ParamLimits

0xaada,	// (0x0001419a) popup_note2_wait_window_g3

0x0002,

0xfc9a,	// (0x0001935a) popup_note2_wait_window_g_ParamLimits

0xfc9a,	// (0x0001935a) popup_note2_wait_window_g

0xde43,	// (0x00017503) popup_note2_wait_window_t1_ParamLimits

0xde43,	// (0x00017503) popup_note2_wait_window_t1

0xde61,	// (0x00017521) popup_note2_wait_window_t2_ParamLimits

0xde61,	// (0x00017521) popup_note2_wait_window_t2

0xde7f,	// (0x0001753f) popup_note2_wait_window_t3_ParamLimits

0xde7f,	// (0x0001753f) popup_note2_wait_window_t3

0xde91,	// (0x00017551) popup_note2_wait_window_t4_ParamLimits

0xde91,	// (0x00017551) popup_note2_wait_window_t4

0x0003,

0xfca1,	// (0x00019361) popup_note2_wait_window_t_ParamLimits

0xfca1,	// (0x00019361) popup_note2_wait_window_t

0xdea3,	// (0x00017563) wait_bar2_pane_ParamLimits

0xdea3,	// (0x00017563) wait_bar2_pane

0xdebb,	// (0x0001757b) popup_snote2_single_text_window_g1_ParamLimits

0xdebb,	// (0x0001757b) popup_snote2_single_text_window_g1

0xdee3,	// (0x000175a3) popup_snote2_single_text_window_t1_ParamLimits

0xdee3,	// (0x000175a3) popup_snote2_single_text_window_t1

0xdf2f,	// (0x000175ef) popup_snote2_single_text_window_t2_ParamLimits

0xdf2f,	// (0x000175ef) popup_snote2_single_text_window_t2

0xdf7b,	// (0x0001763b) popup_snote2_single_text_window_t3_ParamLimits

0xdf7b,	// (0x0001763b) popup_snote2_single_text_window_t3

0xdfbc,	// (0x0001767c) popup_snote2_single_text_window_t4_ParamLimits

0xdfbc,	// (0x0001767c) popup_snote2_single_text_window_t4

0xdff2,	// (0x000176b2) popup_snote2_single_text_window_t5_ParamLimits

0xdff2,	// (0x000176b2) popup_snote2_single_text_window_t5

0x0004,

0xfcaa,	// (0x0001936a) popup_snote2_single_text_window_t_ParamLimits

0xfcaa,	// (0x0001936a) popup_snote2_single_text_window_t

0xe01d,	// (0x000176dd) popup_snote2_single_graphic_window_g1_ParamLimits

0xe01d,	// (0x000176dd) popup_snote2_single_graphic_window_g1

0xe045,	// (0x00017705) popup_snote2_single_graphic_window_g2_ParamLimits

0xe045,	// (0x00017705) popup_snote2_single_graphic_window_g2

0x0001,

0xfcb5,	// (0x00019375) popup_snote2_single_graphic_window_g_ParamLimits

0xfcb5,	// (0x00019375) popup_snote2_single_graphic_window_g

0xe06d,	// (0x0001772d) popup_snote2_single_graphic_window_t1_ParamLimits

0xe06d,	// (0x0001772d) popup_snote2_single_graphic_window_t1

0xe0b9,	// (0x00017779) popup_snote2_single_graphic_window_t2_ParamLimits

0xe0b9,	// (0x00017779) popup_snote2_single_graphic_window_t2

0xdf7b,	// (0x0001763b) popup_snote2_single_graphic_window_t3_ParamLimits

0xdf7b,	// (0x0001763b) popup_snote2_single_graphic_window_t3

0xdfbc,	// (0x0001767c) popup_snote2_single_graphic_window_t4_ParamLimits

0xdfbc,	// (0x0001767c) popup_snote2_single_graphic_window_t4

0xdff2,	// (0x000176b2) popup_snote2_single_graphic_window_t5_ParamLimits

0xdff2,	// (0x000176b2) popup_snote2_single_graphic_window_t5

0x0004,

0xfcba,	// (0x0001937a) popup_snote2_single_graphic_window_t_ParamLimits

0xfcba,	// (0x0001937a) popup_snote2_single_graphic_window_t

0xc86e,	// (0x00015f2e) clock_nsta_pane_cp2_t1

0xc86e,	// (0x00015f2e) clock_nsta_pane_cp2_t2

0x0001,

0xface,	// (0x0001918e) clock_nsta_pane_cp2_t

0x8cbd,	// (0x0001237d) form_field_data_wide_pane_g1_ParamLimits

0x891c,	// (0x00011fdc) form_field_data_wide_pane_g2_ParamLimits

0x891c,	// (0x00011fdc) form_field_data_wide_pane_g2

0x8cc9,	// (0x00012389) form_field_data_wide_pane_g3_ParamLimits

0x8cc9,	// (0x00012389) form_field_data_wide_pane_g3

0x0002,

0xf67c,	// (0x00018d3c) form_field_data_wide_pane_g_ParamLimits

0xf67c,	// (0x00018d3c) form_field_data_wide_pane_g

0xc750,	// (0x00015e10) grid_touch_3_pane_ParamLimits

0xc750,	// (0x00015e10) grid_touch_3_pane

0xe105,	// (0x000177c5) cell_touch_3_pane_ParamLimits

0xe105,	// (0x000177c5) cell_touch_3_pane

0xce36,	// (0x000164f6) cell_touch_3_pane_g1

0xce36,	// (0x000164f6) cell_touch_3_pane_g2

0x0001,

0xfb53,	// (0x00019213) cell_touch_3_pane_g

0x8234,	// (0x000118f4) cont_query_data_pane

0x823c,	// (0x000118fc) cont_query_data_pane_cp1

0xe136,	// (0x000177f6) button_value_adjust_pane_cp7

0xe13e,	// (0x000177fe) query_popup_pane_cp3

0x953f,	// (0x00012bff) bg_popup_sub_pane_cp22_ParamLimits

0x6122,	// (0x0000f7e2) navi_navi_volume_pane_cp2

0x613a,	// (0x0000f7fa) popup_side_volume_key_window_g2

0x6146,	// (0x0000f806) popup_side_volume_key_window_g3

0x0002,

0xf712,	// (0x00018dd2) popup_side_volume_key_window_g

0x6160,	// (0x0000f820) popup_side_volume_key_window_t2

0x0001,

0xf719,	// (0x00018dd9) popup_side_volume_key_window_t

0x9886,	// (0x00012f46) popup_side_volume_key_window_ParamLimits

0x88dc,	// (0x00011f9c) list_double_graphic_pane_g4_ParamLimits

0x88dc,	// (0x00011f9c) list_double_graphic_pane_g4

0xba8b,	// (0x0001514b) list_single_2heading_msg_pane_ParamLimits

0xba8b,	// (0x0001514b) list_single_2heading_msg_pane

0xe16d,	// (0x0001782d) list_single_2heading_msg_pane_g1_ParamLimits

0xe16d,	// (0x0001782d) list_single_2heading_msg_pane_g1

0x870b,	// (0x00011dcb) list_single_2heading_msg_pane_g2_ParamLimits

0x870b,	// (0x00011dcb) list_single_2heading_msg_pane_g2

0xc32d,	// (0x000159ed) list_single_2heading_msg_pane_g3_ParamLimits

0xc32d,	// (0x000159ed) list_single_2heading_msg_pane_g3

0xe179,	// (0x00017839) list_single_2heading_msg_pane_g4_ParamLimits

0xe179,	// (0x00017839) list_single_2heading_msg_pane_g4

0x0003,

0xfcc5,	// (0x00019385) list_single_2heading_msg_pane_g_ParamLimits

0xfcc5,	// (0x00019385) list_single_2heading_msg_pane_g

0xe191,	// (0x00017851) list_single_2heading_msg_pane_t1_ParamLimits

0xe191,	// (0x00017851) list_single_2heading_msg_pane_t1

0xe1b9,	// (0x00017879) list_single_2heading_msg_pane_t2_ParamLimits

0xe1b9,	// (0x00017879) list_single_2heading_msg_pane_t2

0xe1ed,	// (0x000178ad) list_single_2heading_msg_pane_t3_ParamLimits

0xe1ed,	// (0x000178ad) list_single_2heading_msg_pane_t3

0xe226,	// (0x000178e6) list_single_2heading_msg_pane_t4_ParamLimits

0xe226,	// (0x000178e6) list_single_2heading_msg_pane_t4

0x0003,

0xfcce,	// (0x0001938e) list_single_2heading_msg_pane_t_ParamLimits

0xfcce,	// (0x0001938e) list_single_2heading_msg_pane_t

0x7e3b,	// (0x000114fb) title_pane_g4_ParamLimits

0x7e3b,	// (0x000114fb) title_pane_g4

0x5f30,	// (0x0000f5f0) title_pane_stacon_g3_ParamLimits

0x5f30,	// (0x0000f5f0) title_pane_stacon_g3

0xdc35,	// (0x000172f5) list_single_2graphic_im_pane_g4_ParamLimits

0xdc35,	// (0x000172f5) list_single_2graphic_im_pane_g4

0xb51b,	// (0x00014bdb) popup_side_volume_key_window_cp

0xbe37,	// (0x000154f7) main_idle_act2_pane_t1

0x6b21,	// (0x000101e1) toolbar_button_pane_g10

0x86c1,	// (0x00011d81) popup_toolbar_window_cp1

0xc85f,	// (0x00015f1f) clock_nsta_pane_cp_t1

0xc85f,	// (0x00015f1f) clock_nsta_pane_cp_t2

0x0001,

0xfac9,	// (0x00019189) clock_nsta_pane_cp_t

0x6122,	// (0x0000f7e2) navi_navi_volume_pane_cp2_ParamLimits

0x612e,	// (0x0000f7ee) popup_side_volume_key_window_g1_ParamLimits

0x613a,	// (0x0000f7fa) popup_side_volume_key_window_g2_ParamLimits

0x6146,	// (0x0000f806) popup_side_volume_key_window_g3_ParamLimits

0xf712,	// (0x00018dd2) popup_side_volume_key_window_g_ParamLimits

0x6fa5,	// (0x00010665) fep_hwr_aid_pane

0x704c,	// (0x0001070c) bg_fep_hwr_top_pane_g4_ParamLimits

0xce92,	// (0x00016552) fep_hwr_top_pane_g1_ParamLimits

0xcea4,	// (0x00016564) fep_hwr_top_pane_g2_ParamLimits

0x706c,	// (0x0001072c) fep_hwr_top_pane_g3_ParamLimits

0xfb1e,	// (0x000191de) fep_hwr_top_pane_g_ParamLimits

0x7081,	// (0x00010741) fep_hwr_top_text_pane_ParamLimits

0xb2de,	// (0x0001499e) aid_touch_tab_arrow_arrow_2

0xb2e7,	// (0x000149a7) aid_touch_tab_arrow_left_2

0x6fb9,	// (0x00010679) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x6ff0,	// (0x000106b0) fep_hwr_prediction_pane

0xcffb,	// (0x000166bb) fep_vkb_prediction_pane

0xd0f8,	// (0x000167b8) fep_vkb_side_pane_g3_ParamLimits

0xd0f8,	// (0x000167b8) fep_vkb_side_pane_g3

0x71fc,	// (0x000108bc) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x7268,	// (0x00010928) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x7275,	// (0x00010935) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbcd,	// (0x0001928d) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x73a4,	// (0x00010a64) fep_hwr_prediction_pane_g1

0x73ae,	// (0x00010a6e) fep_hwr_prediction_pane_g2

0x73b6,	// (0x00010a76) fep_hwr_prediction_pane_g3

0x73be,	// (0x00010a7e) fep_hwr_prediction_pane_g4

0x0003,

0xfcd7,	// (0x00019397) fep_hwr_prediction_pane_g

0xe24b,	// (0x0001790b) fep_vkb_prediction_pane_g1

0xe255,	// (0x00017915) fep_vkb_prediction_pane_g2

0xe25d,	// (0x0001791d) fep_vkb_prediction_pane_g3

0xe265,	// (0x00017925) fep_vkb_prediction_pane_g4

0x0003,

0xfce0,	// (0x000193a0) fep_vkb_prediction_pane_g

0x6e01,	// (0x000104c1) slider_set_pane_g3

0x6e15,	// (0x000104d5) slider_set_pane_g4

0x6e2d,	// (0x000104ed) slider_set_pane_g5

0x6e01,	// (0x000104c1) slider_set_pane_g6

0x6e43,	// (0x00010503) slider_set_pane_g7

0xb97f,	// (0x0001503f) slider_form_pane_g3

0xb988,	// (0x00015048) slider_form_pane_g4

0xb990,	// (0x00015050) slider_form_pane_g5

0xb97f,	// (0x0001503f) slider_form_pane_g6

0xb998,	// (0x00015058) slider_form_pane_g7

0xc139,	// (0x000157f9) slider_set_pane_vc_g3

0xc142,	// (0x00015802) slider_set_pane_vc_g4

0xc14b,	// (0x0001580b) slider_set_pane_vc_g5

0xc139,	// (0x000157f9) slider_set_pane_vc_g6

0xc154,	// (0x00015814) slider_set_pane_vc_g7

0xc525,	// (0x00015be5) slider_form_pane_vc_g1

0xc52e,	// (0x00015bee) slider_form_pane_vc_g2

0xc537,	// (0x00015bf7) slider_form_pane_vc_g3

0xc525,	// (0x00015be5) slider_form_pane_vc_g4

0xc540,	// (0x00015c00) slider_form_pane_vc_g5

0x0004,

0xfa9b,	// (0x0001915b) slider_form_pane_vc_g

0x5c04,	// (0x0000f2c4) main_idle_act3_pane

0xe26d,	// (0x0001792d) ai3_links_pane

0xe276,	// (0x00017936) popup_ai3_data_window_ParamLimits

0xe276,	// (0x00017936) popup_ai3_data_window

0x7df3,	// (0x000114b3) grid_ai3_links_pane

0xe28e,	// (0x0001794e) cell_ai3_links_pane_ParamLimits

0xe28e,	// (0x0001794e) cell_ai3_links_pane

0xe2a6,	// (0x00017966) bg_popup_sub_pane_cp11

0xe2b3,	// (0x00017973) cell_ai3_links_pane_g1

0x7df3,	// (0x000114b3) bg_popup_sub_pane_cp12

0xe2d8,	// (0x00017998) heading_ai3_data_pane

0xe2e0,	// (0x000179a0) list_ai3_gene_pane

0xe2ec,	// (0x000179ac) popup_ai3_data_window_g1

0xe2f4,	// (0x000179b4) heading_ai3_data_pane_g1

0xe2fc,	// (0x000179bc) heading_ai3_data_pane_t1

0xe30a,	// (0x000179ca) list_double_ai3_gene_pane_ParamLimits

0xe30a,	// (0x000179ca) list_double_ai3_gene_pane

0xe317,	// (0x000179d7) list_single_ai3_gene_pane_ParamLimits

0xe317,	// (0x000179d7) list_single_ai3_gene_pane

0xcdfb,	// (0x000164bb) list_highlight_pane_cp7_ParamLimits

0xcdfb,	// (0x000164bb) list_highlight_pane_cp7

0xe324,	// (0x000179e4) list_single_a13_gene_pane_t1_ParamLimits

0xe324,	// (0x000179e4) list_single_a13_gene_pane_t1

0xe33b,	// (0x000179fb) list_single_ai3_gene_pane_g1

0xe344,	// (0x00017a04) list_single_ai3_gene_pane_g2

0x0001,

0xfce9,	// (0x000193a9) list_single_ai3_gene_pane_g

0xe34c,	// (0x00017a0c) list_double_ai3_gene_pane_g1_ParamLimits

0xe34c,	// (0x00017a0c) list_double_ai3_gene_pane_g1

0xe358,	// (0x00017a18) list_double_ai3_gene_pane_t1_ParamLimits

0xe358,	// (0x00017a18) list_double_ai3_gene_pane_t1

0xe374,	// (0x00017a34) list_double_ai3_gene_pane_t2_ParamLimits

0xe374,	// (0x00017a34) list_double_ai3_gene_pane_t2

0xe389,	// (0x00017a49) list_double_ai3_gene_pane_t3_ParamLimits

0xe389,	// (0x00017a49) list_double_ai3_gene_pane_t3

0x0002,

0xfcee,	// (0x000193ae) list_double_ai3_gene_pane_t_ParamLimits

0xfcee,	// (0x000193ae) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xe14f,	// (0x0001780f) aid_size_min_col_2

0xe159,	// (0x00017819) aid_size_min_msg_ParamLimits

0xe159,	// (0x00017819) aid_size_min_msg

0xd1f8,	// (0x000168b8) fep_vkb_top_text_pane_g2_ParamLimits

0xd1f8,	// (0x000168b8) fep_vkb_top_text_pane_g2

0x0001,

0xfb4e,	// (0x0001920e) fep_vkb_top_text_pane_g_ParamLimits

0xfb4e,	// (0x0001920e) fep_vkb_top_text_pane_g

0x5c04,	// (0x0000f2c4) main_hc_apps_shell_pane

0xe3a6,	// (0x00017a66) grid_hc_apps_pane_ParamLimits

0xe3a6,	// (0x00017a66) grid_hc_apps_pane

0xe3b5,	// (0x00017a75) list_hc_apps_pane

0xe3bd,	// (0x00017a7d) scroll_pane_cp37_ParamLimits

0xe3bd,	// (0x00017a7d) scroll_pane_cp37

0xe3c9,	// (0x00017a89) cell_hc_apps_pane_ParamLimits

0xe3c9,	// (0x00017a89) cell_hc_apps_pane

0xe477,	// (0x00017b37) cell_hc_apps_pane_g1_ParamLimits

0xe477,	// (0x00017b37) cell_hc_apps_pane_g1

0xe4a8,	// (0x00017b68) cell_hc_apps_pane_g2_ParamLimits

0xe4a8,	// (0x00017b68) cell_hc_apps_pane_g2

0xe4c4,	// (0x00017b84) cell_hc_apps_pane_g3_ParamLimits

0xe4c4,	// (0x00017b84) cell_hc_apps_pane_g3

0x0002,

0xfcf5,	// (0x000193b5) cell_hc_apps_pane_g_ParamLimits

0xfcf5,	// (0x000193b5) cell_hc_apps_pane_g

0xe4e6,	// (0x00017ba6) cell_hc_apps_pane_t1_ParamLimits

0xe4e6,	// (0x00017ba6) cell_hc_apps_pane_t1

0x818a,	// (0x0001184a) grid_highlight_pane_cp10_ParamLimits

0x818a,	// (0x0001184a) grid_highlight_pane_cp10

0xe526,	// (0x00017be6) list_single_hc_apps_pane_ParamLimits

0xe526,	// (0x00017be6) list_single_hc_apps_pane

0xe58e,	// (0x00017c4e) list_single_hc_apps_pane_g1

0xe5a7,	// (0x00017c67) list_single_hc_apps_pane_g2

0x0001,

0xfcfc,	// (0x000193bc) list_single_hc_apps_pane_g

0xe5c0,	// (0x00017c80) list_single_hc_apps_pane_g2_copy1

0xe5dc,	// (0x00017c9c) list_single_hc_apps_pane_t1

0x7ee7,	// (0x000115a7) bg_set_opt_pane_cp_ParamLimits

0x5e57,	// (0x0000f517) setting_slider_pane_t1_ParamLimits

0x5e70,	// (0x0000f530) setting_slider_pane_t2_ParamLimits

0x5e8a,	// (0x0000f54a) setting_slider_pane_t3_ParamLimits

0xf564,	// (0x00018c24) setting_slider_pane_t_ParamLimits

0x5ea2,	// (0x0000f562) slider_set_pane_ParamLimits

0x63c2,	// (0x0000fa82) control_pane_g5_ParamLimits

0x63c2,	// (0x0000fa82) control_pane_g5

0xb7d8,	// (0x00014e98) slider_set_pane_g1_ParamLimits

0x6df5,	// (0x000104b5) slider_set_pane_g2_ParamLimits

0x6e01,	// (0x000104c1) slider_set_pane_g3_ParamLimits

0x6e15,	// (0x000104d5) slider_set_pane_g4_ParamLimits

0x6e2d,	// (0x000104ed) slider_set_pane_g5_ParamLimits

0x6e01,	// (0x000104c1) slider_set_pane_g6_ParamLimits

0x6e43,	// (0x00010503) slider_set_pane_g7_ParamLimits

0xf960,	// (0x00019020) slider_set_pane_g_ParamLimits

0x9965,	// (0x00013025) navi_icon_text_pane_ParamLimits

0x9e5d,	// (0x0001351d) aid_fill_nsta_2_ParamLimits

0x9e9c,	// (0x0001355c) aid_touch_tab_arrow_left_ParamLimits

0x9ea8,	// (0x00013568) aid_touch_tab_arrow_right_ParamLimits

0x9f14,	// (0x000135d4) clock_nsta_pane_ParamLimits

0xb2c0,	// (0x00014980) navi_icon_pane_g1_ParamLimits

0xb2cc,	// (0x0001498c) navi_text_pane_t1_ParamLimits

0xc971,	// (0x00016031) navi_icon_text_pane_g1_ParamLimits

0xc97d,	// (0x0001603d) navi_icon_text_pane_t1_ParamLimits

0xe58e,	// (0x00017c4e) list_single_hc_apps_pane_g1_ParamLimits

0xe5a7,	// (0x00017c67) list_single_hc_apps_pane_g2_ParamLimits

0xfcfc,	// (0x000193bc) list_single_hc_apps_pane_g_ParamLimits

0xe5c0,	// (0x00017c80) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xe5dc,	// (0x00017c9c) list_single_hc_apps_pane_t1_ParamLimits

0x5d61,	// (0x0000f421) popup_toolbar2_fixed_window_ParamLimits

0x5d61,	// (0x0000f421) popup_toolbar2_fixed_window

0x69bb,	// (0x0001007b) popup_toolbar2_float_window

0x7df3,	// (0x000114b3) bg_popup_sub_pane_cp27

0xe60a,	// (0x00017cca) grid_toolbar2_float_pane

0x7df3,	// (0x000114b3) bg_popup_sub_pane_cp26

0xe60a,	// (0x00017cca) grid_toolbar2_fixed_pane

0xe612,	// (0x00017cd2) cell_toolbar2_fixed_pane_ParamLimits

0xe612,	// (0x00017cd2) cell_toolbar2_fixed_pane

0xe623,	// (0x00017ce3) cell_toolbar2_fixed_pane_g1

0x6891,	// (0x0000ff51) toolbar2_fixed_button_pane

0xa339,	// (0x000139f9) toolbar2_fixed_button_pane_g1

0xa349,	// (0x00013a09) toolbar2_fixed_button_pane_g2

0xa341,	// (0x00013a01) toolbar2_fixed_button_pane_g3

0xa359,	// (0x00013a19) toolbar2_fixed_button_pane_g4

0xa351,	// (0x00013a11) toolbar2_fixed_button_pane_g5

0xa361,	// (0x00013a21) toolbar2_fixed_button_pane_g6

0xa369,	// (0x00013a29) toolbar2_fixed_button_pane_g7

0xa379,	// (0x00013a39) toolbar2_fixed_button_pane_g8

0xa371,	// (0x00013a31) toolbar2_fixed_button_pane_g9

0x0008,

0xf862,	// (0x00018f22) toolbar2_fixed_button_pane_g

0xe62c,	// (0x00017cec) cell_toolbar2_float_pane_ParamLimits

0xe62c,	// (0x00017cec) cell_toolbar2_float_pane

0xe640,	// (0x00017d00) cell_toolbar2_float_pane_g1

0x6891,	// (0x0000ff51) toolbar2_fixed_button_pane_cp

0xcf62,	// (0x00016622) fep_vkb_accented_list_pane_ParamLimits

0xcf62,	// (0x00016622) fep_vkb_accented_list_pane

0x71dc,	// (0x0001089c) bg_popup_fep_shadow_pane_g9

0x9ad9,	// (0x00013199) bg_popup_fep_shadow_pane_cp3

0x8f58,	// (0x00012618) list_accented_list_pane

0xe649,	// (0x00017d09) list_single_accented_list_pane_ParamLimits

0xe649,	// (0x00017d09) list_single_accented_list_pane

0x9ad9,	// (0x00013199) list_highlight_pane_cp10

0xe65a,	// (0x00017d1a) list_single_accented_list_pane_t1

0x690b,	// (0x0000ffcb) popup_slider_window_ParamLimits

0x690b,	// (0x0000ffcb) popup_slider_window

0xe146,	// (0x00017806) aid_indentation_list_msg

0xe714,	// (0x00017dd4) bg_popup_window_pane_cp19

0xe77e,	// (0x00017e3e) popup_slider_window_g1

0xe79a,	// (0x00017e5a) popup_slider_window_g2

0xe7b6,	// (0x00017e76) popup_slider_window_g3

0x0005,

0xfd01,	// (0x000193c1) popup_slider_window_g

0xe812,	// (0x00017ed2) popup_slider_window_t1

0xe886,	// (0x00017f46) small_volume_slider_vertical_pane

0xce36,	// (0x000164f6) small_volume_slider_vertical_pane_g1

0xce36,	// (0x000164f6) small_volume_slider_vertical_pane_g2

0xe8a2,	// (0x00017f62) small_volume_slider_vertical_pane_g3

0x0002,

0xfd13,	// (0x000193d3) small_volume_slider_vertical_pane_g

0x5b27,	// (0x0000f1e7) area_side_right_pane_ParamLimits

0x5b27,	// (0x0000f1e7) area_side_right_pane

0x73c6,	// (0x00010a86) aid_size_side_button_ParamLimits

0x73c6,	// (0x00010a86) aid_size_side_button

0x73da,	// (0x00010a9a) grid_sctrl_middle_pane_ParamLimits

0x73da,	// (0x00010a9a) grid_sctrl_middle_pane

0x73f9,	// (0x00010ab9) sctrl_sk_bottom_pane

0x740a,	// (0x00010aca) sctrl_sk_top_pane

0x741c,	// (0x00010adc) aid_touch_sctrl_top

0x7429,	// (0x00010ae9) bg_sctrl_sk_pane_ParamLimits

0x7429,	// (0x00010ae9) bg_sctrl_sk_pane

0x7437,	// (0x00010af7) sctrl_sk_top_pane_g1

0x7444,	// (0x00010b04) sctrl_sk_top_pane_t1

0x741c,	// (0x00010adc) aid_touch_sctrl_bottom

0x7429,	// (0x00010ae9) bg_sctrl_sk_pane_cp_ParamLimits

0x7429,	// (0x00010ae9) bg_sctrl_sk_pane_cp

0x745f,	// (0x00010b1f) sctrl_sk_bottom_pane_g1

0x7444,	// (0x00010b04) sctrl_sk_bottom_pane_t1

0x7468,	// (0x00010b28) cell_sctrl_middle_pane_ParamLimits

0x7468,	// (0x00010b28) cell_sctrl_middle_pane

0x7483,	// (0x00010b43) aid_touch_sctrl_middle_ParamLimits

0x7483,	// (0x00010b43) aid_touch_sctrl_middle

0x7495,	// (0x00010b55) bg_sctrl_middle_pane_ParamLimits

0x7495,	// (0x00010b55) bg_sctrl_middle_pane

0x71fc,	// (0x000108bc) cell_sctrl_middle_pane_g1_ParamLimits

0x71fc,	// (0x000108bc) cell_sctrl_middle_pane_g1

0x74a3,	// (0x00010b63) cell_sctrl_middle_pane_g2_ParamLimits

0x74a3,	// (0x00010b63) cell_sctrl_middle_pane_g2

0x0001,

0xfd1f,	// (0x000193df) cell_sctrl_middle_pane_g_ParamLimits

0xfd1f,	// (0x000193df) cell_sctrl_middle_pane_g

0xa339,	// (0x000139f9) bg_sctrl_middle_pane_g1

0xa341,	// (0x00013a01) bg_sctrl_middle_pane_g2

0xa349,	// (0x00013a09) bg_sctrl_middle_pane_g3

0xa351,	// (0x00013a11) bg_sctrl_middle_pane_g4

0xa359,	// (0x00013a19) bg_sctrl_middle_pane_g5

0xa361,	// (0x00013a21) bg_sctrl_middle_pane_g6

0xa369,	// (0x00013a29) bg_sctrl_middle_pane_g7

0xa371,	// (0x00013a31) bg_sctrl_middle_pane_g8

0x0007,

0xfd24,	// (0x000193e4) bg_sctrl_middle_pane_g

0xa379,	// (0x00013a39) bg_sctrl_middle_pane_g8_copy1

0xa339,	// (0x000139f9) bg_sctrl_sk_pane_g1

0xa349,	// (0x00013a09) bg_sctrl_sk_pane_g2

0xa341,	// (0x00013a01) bg_sctrl_sk_pane_g3

0x0008,

0xf862,	// (0x00018f22) bg_sctrl_sk_pane_g

0x8687,	// (0x00011d47) aid_size_touch_scroll_bar

0xa359,	// (0x00013a19) bg_sctrl_sk_pane_g4

0xa351,	// (0x00013a11) bg_sctrl_sk_pane_g5

0xa361,	// (0x00013a21) bg_sctrl_sk_pane_g6

0xa369,	// (0x00013a29) bg_sctrl_sk_pane_g7

0xa379,	// (0x00013a39) bg_sctrl_sk_pane_g8

0xa371,	// (0x00013a31) bg_sctrl_sk_pane_g9

0x657c,	// (0x0000fc3c) popup_fep_china_hwr2_fs_candidate_window

0x6586,	// (0x0000fc46) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x6586,	// (0x0000fc46) popup_fep_china_hwr2_fs_control_window

0x71fc,	// (0x000108bc) sctrl_sk_top_pane_g2

0x0001,

0xfd1a,	// (0x000193da) sctrl_sk_top_pane_g

0xe8ab,	// (0x00017f6b) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe8ab,	// (0x00017f6b) aid_fep_china_hwr2_fs_cell

0xe8bd,	// (0x00017f7d) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe8bd,	// (0x00017f7d) bg_popup_fep_shadow_pane_cp4

0xe8d4,	// (0x00017f94) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe8d4,	// (0x00017f94) bg_popup_fep_shadow_pane_cp5

0xe8e6,	// (0x00017fa6) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe8e6,	// (0x00017fa6) popup_fep_china_hwr2_fs_control_bar_grid

0xe8f6,	// (0x00017fb6) popup_fep_china_hwr2_fs_control_funtion_grid

0xe8fe,	// (0x00017fbe) aid_fep_china_hwr2_fs_candi_cell

0x7df3,	// (0x000114b3) bg_popup_fep_shadow_pane_cp6

0xe908,	// (0x00017fc8) popup_fep_china_hwr2_fs_candidate_grid

0xe912,	// (0x00017fd2) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe912,	// (0x00017fd2) cell_fep_china_hwr2_fs_funtion_grid

0xce36,	// (0x000164f6) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xe92a,	// (0x00017fea) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xe92a,	// (0x00017fea) cell_fep_china_hwr2_fs_funtion_grid_g1

0xe938,	// (0x00017ff8) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xe938,	// (0x00017ff8) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd35,	// (0x000193f5) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd35,	// (0x000193f5) cell_fep_china_hwr2_fs_funtion_grid_g

0xe94e,	// (0x0001800e) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe94e,	// (0x0001800e) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe963,	// (0x00018023) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe963,	// (0x00018023) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd3a,	// (0x000193fa) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd3a,	// (0x000193fa) cell_fep_china_hwr2_fs_funtion_grid_t

0xe97f,	// (0x0001803f) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xe987,	// (0x00018047) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xe98f,	// (0x0001804f) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd3f,	// (0x000193ff) popup_fep_china_hwr2_fs_control_bar_grid_g

0xe997,	// (0x00018057) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xe997,	// (0x00018057) cell_fep_china_hwr2_fs_candidate_grid

0xe9b0,	// (0x00018070) popup_fep_china_hwr2_fs_candidate_grid_g20

0xe9b8,	// (0x00018078) popup_fep_china_hwr2_fs_candidate_grid_g21

0xce36,	// (0x000164f6) cell_fep_china_hwr2_fs_candidate_grid_g1

0xce36,	// (0x000164f6) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb53,	// (0x00019213) cell_fep_china_hwr2_fs_candidate_grid_g

0xe9c0,	// (0x00018080) cell_fep_china_hwr2_fs_candidate_grid_t1

0x9f21,	// (0x000135e1) clock_nsta_pane_cp_24_ParamLimits

0x9f21,	// (0x000135e1) clock_nsta_pane_cp_24

0x9f9f,	// (0x0001365f) indicator_nsta_pane_cp_24_ParamLimits

0x9f9f,	// (0x0001365f) indicator_nsta_pane_cp_24

0xb13c,	// (0x000147fc) heading_pane_g1

0x0001,

0xf8c7,	// (0x00018f87) heading_pane_g

0xbc3e,	// (0x000152fe) grid_sct_catagory_button_pane

0xbc6e,	// (0x0001532e) scroll_pane_cp5_ParamLimits

0xc9bf,	// (0x0001607f) button_value_adjust_pane_cp5_ParamLimits

0xc9bf,	// (0x0001607f) button_value_adjust_pane_cp5

0xcab9,	// (0x00016179) form2_midp_time_pane_ParamLimits

0xe9ce,	// (0x0001808e) cell_sct_catagory_button_pane_ParamLimits

0xe9ce,	// (0x0001808e) cell_sct_catagory_button_pane

0xcdfb,	// (0x000164bb) bg_button_pane_cp01_ParamLimits

0xcdfb,	// (0x000164bb) bg_button_pane_cp01

0xce36,	// (0x000164f6) cell_sct_catagory_button_pane_g1

0x694a,	// (0x0001000a) popup_tb_extension_window

0xe9e0,	// (0x000180a0) aid_size_cell_ext_ParamLimits

0xe9e0,	// (0x000180a0) aid_size_cell_ext

0x818a,	// (0x0001184a) bg_tb_trans_pane_cp1_ParamLimits

0x818a,	// (0x0001184a) bg_tb_trans_pane_cp1

0xea00,	// (0x000180c0) grid_tb_ext_pane_ParamLimits

0xea00,	// (0x000180c0) grid_tb_ext_pane

0xea32,	// (0x000180f2) cell_tb_ext_pane_ParamLimits

0xea32,	// (0x000180f2) cell_tb_ext_pane

0xea49,	// (0x00018109) cell_tb_ext_pane_g1_ParamLimits

0xea49,	// (0x00018109) cell_tb_ext_pane_g1

0xea66,	// (0x00018126) cell_tb_ext_pane_t1

0x818a,	// (0x0001184a) list_highlight_pane_cp11_ParamLimits

0x818a,	// (0x0001184a) list_highlight_pane_cp11

0x5d80,	// (0x0000f440) popup_uni_indicator_window_ParamLimits

0x5d80,	// (0x0000f440) popup_uni_indicator_window

0x8ca3,	// (0x00012363) bg_popup_sub_pane_cp14

0xea81,	// (0x00018141) list_uniindi_pane

0xea8d,	// (0x0001814d) uniindi_top_pane

0x818a,	// (0x0001184a) bg_uniindi_top_pane

0xeaac,	// (0x0001816c) uniindi_top_pane_g1

0xeac2,	// (0x00018182) uniindi_top_pane_g2

0x0003,

0xfd46,	// (0x00019406) uniindi_top_pane_g

0xeaec,	// (0x000181ac) uniindi_top_pane_t1

0xeb16,	// (0x000181d6) list_single_uniindi_pane_ParamLimits

0xeb16,	// (0x000181d6) list_single_uniindi_pane

0xce36,	// (0x000164f6) bg_uniindi_top_pane_g1

0xeb29,	// (0x000181e9) list_single_uniindi_pane_g1

0xeb3c,	// (0x000181fc) list_single_uniindi_pane_t1

0x5c04,	// (0x0000f2c4) control_bg_pane

0xeb61,	// (0x00018221) bg_sctrl_sk_pane_cp1

0xeb6a,	// (0x0001822a) bg_sctrl_sk_pane_cp2

0xeb73,	// (0x00018233) control_bg_pane_g1

0xeb7c,	// (0x0001823c) control_bg_pane_g2

0x0001,

0xfd4f,	// (0x0001940f) control_bg_pane_g

0xc7fa,	// (0x00015eba) cell_indicator_nsta_pane_g1_ParamLimits

0xc808,	// (0x00015ec8) cell_indicator_nsta_pane_g2_ParamLimits

0xfab7,	// (0x00019177) cell_indicator_nsta_pane_g_ParamLimits

0xcb3d,	// (0x000161fd) form2_midp_time_pane_t1_ParamLimits

0x64e6,	// (0x0000fba6) main_idle_act4_pane_ParamLimits

0x64e6,	// (0x0000fba6) main_idle_act4_pane

0x694a,	// (0x0001000a) popup_tb_extension_window_ParamLimits

0xea22,	// (0x000180e2) tb_ext_find_pane_ParamLimits

0xea22,	// (0x000180e2) tb_ext_find_pane

0xeb85,	// (0x00018245) ai_gene_pane_1_cp1

0x9c16,	// (0x000132d6) ai_gene_pane_2_cp1

0xeb8d,	// (0x0001824d) list_single_idle_plugin_calendar_pane

0xeb96,	// (0x00018256) list_single_idle_plugin_notification_pane

0xeb9f,	// (0x0001825f) list_single_idle_plugin_player_pane

0xeba8,	// (0x00018268) list_single_idle_plugin_shortcut_pane_ParamLimits

0xeba8,	// (0x00018268) list_single_idle_plugin_shortcut_pane

0xebca,	// (0x0001828a) main_idle_act4_pane_t1

0xebdc,	// (0x0001829c) main_idle_act4_pane_t2

0x0001,

0xfd54,	// (0x00019414) main_idle_act4_pane_t

0xebee,	// (0x000182ae) middle_sk_idle_act4_pane_ParamLimits

0xebee,	// (0x000182ae) middle_sk_idle_act4_pane

0xec04,	// (0x000182c4) popup_clock_digital_analogue_window_cp2

0xec1e,	// (0x000182de) shortcut_wheel_idle_act4_pane_ParamLimits

0xec1e,	// (0x000182de) shortcut_wheel_idle_act4_pane

0xce36,	// (0x000164f6) shortcut_wheel_idle_act4_pane_g1

0xce36,	// (0x000164f6) shortcut_wheel_idle_act4_pane_g2

0xce36,	// (0x000164f6) shortcut_wheel_idle_act4_pane_g3

0xce36,	// (0x000164f6) shortcut_wheel_idle_act4_pane_g4

0xce36,	// (0x000164f6) shortcut_wheel_idle_act4_pane_g5

0xec32,	// (0x000182f2) shortcut_wheel_idle_act4_pane_g6

0xec3a,	// (0x000182fa) shortcut_wheel_idle_act4_pane_g7

0xec42,	// (0x00018302) shortcut_wheel_idle_act4_pane_g8

0xec4a,	// (0x0001830a) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd59,	// (0x00019419) shortcut_wheel_idle_act4_pane_g

0xd0a4,	// (0x00016764) middle_sk_idle_act4_pane_g1_ParamLimits

0xd0a4,	// (0x00016764) middle_sk_idle_act4_pane_g1

0xecae,	// (0x0001836e) middle_sk_idle_act4_pane_g2_ParamLimits

0xecae,	// (0x0001836e) middle_sk_idle_act4_pane_g2

0x0001,

0xfd7c,	// (0x0001943c) middle_sk_idle_act4_pane_g_ParamLimits

0xfd7c,	// (0x0001943c) middle_sk_idle_act4_pane_g

0xecba,	// (0x0001837a) middle_sk_idle_act4_pane_t1_ParamLimits

0xecba,	// (0x0001837a) middle_sk_idle_act4_pane_t1

0xecd7,	// (0x00018397) grid_ai_shortcut_pane_ParamLimits

0xecd7,	// (0x00018397) grid_ai_shortcut_pane

0xecf0,	// (0x000183b0) list_highlight_pane_cp16_ParamLimits

0xecf0,	// (0x000183b0) list_highlight_pane_cp16

0xecfd,	// (0x000183bd) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xecfd,	// (0x000183bd) list_single_idle_plugin_shortcut_pane_g1

0xed09,	// (0x000183c9) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xed09,	// (0x000183c9) list_single_idle_plugin_shortcut_pane_g2

0xed21,	// (0x000183e1) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xed21,	// (0x000183e1) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd81,	// (0x00019441) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd81,	// (0x00019441) list_single_idle_plugin_shortcut_pane_g

0xed34,	// (0x000183f4) cell_ai_shortcut_pane_ParamLimits

0xed34,	// (0x000183f4) cell_ai_shortcut_pane

0xed55,	// (0x00018415) cell_ai_shortcut_pane_g1_ParamLimits

0xed55,	// (0x00018415) cell_ai_shortcut_pane_g1

0xeb85,	// (0x00018245) ai_gene_pane_1_cp2

0xed77,	// (0x00018437) ai_gene_pane_2_cp2

0xed7f,	// (0x0001843f) list_highlight_pane_cp15

0xed88,	// (0x00018448) list_single_idle_plugin_calendar_pane_g1

0xed7f,	// (0x0001843f) list_highlight_pane_cp17

0xed90,	// (0x00018450) list_single_idle_plugin_calendar_pane_g1_copy1

0xed98,	// (0x00018458) list_single_idle_plugin_player_pane_g1

0xbed7,	// (0x00015597) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd88,	// (0x00019448) list_single_idle_plugin_player_pane_g

0xeda0,	// (0x00018460) list_single_idle_plugin_player_pane_t1

0xedae,	// (0x0001846e) list_single_idle_plugin_player_pane_t2

0xedbc,	// (0x0001847c) list_single_idle_plugin_player_pane_t3

0xedca,	// (0x0001848a) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd8d,	// (0x0001944d) list_single_idle_plugin_player_pane_t

0xedd8,	// (0x00018498) wait_bar_pane_cp15

0xede0,	// (0x000184a0) grid_ai_notification_pane

0xbed7,	// (0x00015597) list_single_idle_plugin_notification_pane_g1

0xede9,	// (0x000184a9) cell_ai_notification_pane_ParamLimits

0xede9,	// (0x000184a9) cell_ai_notification_pane

0xedf6,	// (0x000184b6) cell_ai_notification_pane_g1

0xedfe,	// (0x000184be) cell_ai_notification_pane_t1

0xee0c,	// (0x000184cc) tb_ext_find_button_pane

0xee14,	// (0x000184d4) tb_ext_find_pane_g1

0xee1c,	// (0x000184dc) tb_ext_find_pane_t1

0x9453,	// (0x00012b13) tb_ext_find_button_pane_g1

0xee2a,	// (0x000184ea) tb_ext_find_button_pane_g2

0x0001,

0xfd96,	// (0x00019456) tb_ext_find_button_pane_g

0xebca,	// (0x0001828a) main_idle_act4_pane_t1_ParamLimits

0xebdc,	// (0x0001829c) main_idle_act4_pane_t2_ParamLimits

0xfd54,	// (0x00019414) main_idle_act4_pane_t_ParamLimits

0xec04,	// (0x000182c4) popup_clock_digital_analogue_window_cp2_ParamLimits

0xec12,	// (0x000182d2) sat_plugin_idle_act4_pane_ParamLimits

0xec12,	// (0x000182d2) sat_plugin_idle_act4_pane

0xee33,	// (0x000184f3) sat_plugin_idle_act4_pane_t1_ParamLimits

0xee33,	// (0x000184f3) sat_plugin_idle_act4_pane_t1

0xee46,	// (0x00018506) sat_plugin_idle_act4_pane_t2_ParamLimits

0xee46,	// (0x00018506) sat_plugin_idle_act4_pane_t2

0xee59,	// (0x00018519) sat_plugin_idle_act4_pane_t3_ParamLimits

0xee59,	// (0x00018519) sat_plugin_idle_act4_pane_t3

0xee6c,	// (0x0001852c) sat_plugin_idle_act4_pane_t4_ParamLimits

0xee6c,	// (0x0001852c) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd9b,	// (0x0001945b) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd9b,	// (0x0001945b) sat_plugin_idle_act4_pane_t

0x5cc9,	// (0x0000f389) popup_battery_window_ParamLimits

0x5cc9,	// (0x0000f389) popup_battery_window

0x818a,	// (0x0001184a) bg_popup_sub_pane_cp25_ParamLimits

0x818a,	// (0x0001184a) bg_popup_sub_pane_cp25

0xee7f,	// (0x0001853f) popup_battery_window_g1_ParamLimits

0xee7f,	// (0x0001853f) popup_battery_window_g1

0xee8b,	// (0x0001854b) popup_battery_window_t1_ParamLimits

0xee8b,	// (0x0001854b) popup_battery_window_t1

0xee9d,	// (0x0001855d) popup_battery_window_t2_ParamLimits

0xee9d,	// (0x0001855d) popup_battery_window_t2

0x0001,

0xfda4,	// (0x00019464) popup_battery_window_t_ParamLimits

0xfda4,	// (0x00019464) popup_battery_window_t

0x9ae1,	// (0x000131a1) midp_canvas_pane_ParamLimits

0x9b58,	// (0x00013218) midp_keypad_pane_ParamLimits

0x9b58,	// (0x00013218) midp_keypad_pane

0x9e1d,	// (0x000134dd) main_midp_pane_ParamLimits

0xc87d,	// (0x00015f3d) signal_pane_g2_cp_ParamLimits

0xeeba,	// (0x0001857a) aid_size_cell_midp_keypad_ParamLimits

0xeeba,	// (0x0001857a) aid_size_cell_midp_keypad

0xeed4,	// (0x00018594) midp_keyp_game_grid_pane_ParamLimits

0xeed4,	// (0x00018594) midp_keyp_game_grid_pane

0xeef4,	// (0x000185b4) midp_keyp_rocker_pane_ParamLimits

0xeef4,	// (0x000185b4) midp_keyp_rocker_pane

0xef29,	// (0x000185e9) midp_keyp_sk_left_pane_ParamLimits

0xef29,	// (0x000185e9) midp_keyp_sk_left_pane

0xef81,	// (0x00018641) midp_keyp_sk_right_pane_ParamLimits

0xef81,	// (0x00018641) midp_keyp_sk_right_pane

0x7df3,	// (0x000114b3) bg_button_pane_cp03

0xefd9,	// (0x00018699) midp_keyp_sk_left_pane_g1

0x7df3,	// (0x000114b3) bg_button_pane_cp04

0xefd9,	// (0x00018699) midp_keyp_sk_right_pane_g1

0xce36,	// (0x000164f6) midp_keyp_rocker_pane_g1

0xefe2,	// (0x000186a2) keyp_game_cell_pane_ParamLimits

0xefe2,	// (0x000186a2) keyp_game_cell_pane

0x7df3,	// (0x000114b3) bg_button_pane_cp02

0xeff5,	// (0x000186b5) keyp_game_cell_pane_g1

0x5cff,	// (0x0000f3bf) popup_fep_vkb2_window_ParamLimits

0x5cff,	// (0x0000f3bf) popup_fep_vkb2_window

0x74c1,	// (0x00010b81) aid_size_cell_vkb2_ParamLimits

0x74c1,	// (0x00010b81) aid_size_cell_vkb2

0x7515,	// (0x00010bd5) popup_fep_vkb2_window_g1_ParamLimits

0x7515,	// (0x00010bd5) popup_fep_vkb2_window_g1

0x755d,	// (0x00010c1d) vkb2_area_bottom_pane_ParamLimits

0x755d,	// (0x00010c1d) vkb2_area_bottom_pane

0x75a9,	// (0x00010c69) vkb2_area_keypad_pane_ParamLimits

0x75a9,	// (0x00010c69) vkb2_area_keypad_pane

0x75eb,	// (0x00010cab) vkb2_area_top_pane_ParamLimits

0x75eb,	// (0x00010cab) vkb2_area_top_pane

0x7665,	// (0x00010d25) vkb2_top_entry_pane_ParamLimits

0x7665,	// (0x00010d25) vkb2_top_entry_pane

0x768f,	// (0x00010d4f) vkb2_top_grid_left_pane_ParamLimits

0x768f,	// (0x00010d4f) vkb2_top_grid_left_pane

0x76ad,	// (0x00010d6d) vkb2_top_grid_right_pane_ParamLimits

0x76ad,	// (0x00010d6d) vkb2_top_grid_right_pane

0x76cb,	// (0x00010d8b) vkb2_cell_keypad_pane_ParamLimits

0x76cb,	// (0x00010d8b) vkb2_cell_keypad_pane

0x779c,	// (0x00010e5c) vkb2_area_bottom_grid_pane_ParamLimits

0x779c,	// (0x00010e5c) vkb2_area_bottom_grid_pane

0x77c2,	// (0x00010e82) vkb2_area_bottom_pane_g1_ParamLimits

0x77c2,	// (0x00010e82) vkb2_area_bottom_pane_g1

0x77e6,	// (0x00010ea6) vkb2_area_bottom_pane_g2_ParamLimits

0x77e6,	// (0x00010ea6) vkb2_area_bottom_pane_g2

0x7814,	// (0x00010ed4) vkb2_area_bottom_pane_g3_ParamLimits

0x7814,	// (0x00010ed4) vkb2_area_bottom_pane_g3

0x0002,

0xfda9,	// (0x00019469) vkb2_area_bottom_pane_g_ParamLimits

0xfda9,	// (0x00019469) vkb2_area_bottom_pane_g

0x7875,	// (0x00010f35) vkb2_top_cell_left_pane_ParamLimits

0x7875,	// (0x00010f35) vkb2_top_cell_left_pane

0xf006,	// (0x000186c6) vkb2_top_entry_pane_g1_ParamLimits

0xf006,	// (0x000186c6) vkb2_top_entry_pane_g1

0xf014,	// (0x000186d4) vkb2_top_entry_pane_t1_ParamLimits

0xf014,	// (0x000186d4) vkb2_top_entry_pane_t1

0xf046,	// (0x00018706) vkb2_top_entry_pane_t2_ParamLimits

0xf046,	// (0x00018706) vkb2_top_entry_pane_t2

0xf078,	// (0x00018738) vkb2_top_entry_pane_t3_ParamLimits

0xf078,	// (0x00018738) vkb2_top_entry_pane_t3

0x0002,

0xfdb0,	// (0x00019470) vkb2_top_entry_pane_t_ParamLimits

0xfdb0,	// (0x00019470) vkb2_top_entry_pane_t

0x78c2,	// (0x00010f82) vkb2_top_grid_right_pane_g1_ParamLimits

0x78c2,	// (0x00010f82) vkb2_top_grid_right_pane_g1

0x78d8,	// (0x00010f98) vkb2_top_grid_right_pane_g2_ParamLimits

0x78d8,	// (0x00010f98) vkb2_top_grid_right_pane_g2

0x78f0,	// (0x00010fb0) vkb2_top_grid_right_pane_g3_ParamLimits

0x78f0,	// (0x00010fb0) vkb2_top_grid_right_pane_g3

0x7908,	// (0x00010fc8) vkb2_top_grid_right_pane_g4_ParamLimits

0x7908,	// (0x00010fc8) vkb2_top_grid_right_pane_g4

0x0003,

0xfdb7,	// (0x00019477) vkb2_top_grid_right_pane_g_ParamLimits

0xfdb7,	// (0x00019477) vkb2_top_grid_right_pane_g

0x791e,	// (0x00010fde) vkb2_top_cell_left_pane_g1

0x7935,	// (0x00010ff5) vkb2_cell_keypad_pane_g1_ParamLimits

0x7935,	// (0x00010ff5) vkb2_cell_keypad_pane_g1

0xf09c,	// (0x0001875c) vkb2_cell_keypad_pane_t1_ParamLimits

0xf09c,	// (0x0001875c) vkb2_cell_keypad_pane_t1

0x7943,	// (0x00011003) vkb2_cell_bottom_grid_pane_ParamLimits

0x7943,	// (0x00011003) vkb2_cell_bottom_grid_pane

0x797c,	// (0x0001103c) vkb2_cell_bottom_grid_pane_g1

0xec52,	// (0x00018312) aid_call2_pane_cp02

0xec5a,	// (0x0001831a) aid_call_pane_cp02

0xec62,	// (0x00018322) clock_digital_number_pane_cp10

0xec6a,	// (0x0001832a) clock_digital_number_pane_cp11

0xec72,	// (0x00018332) clock_digital_number_pane_cp12

0xec7a,	// (0x0001833a) clock_digital_number_pane_cp13

0xec82,	// (0x00018342) clock_digital_separator_pane_cp10

0x9453,	// (0x00012b13) popup_clock_digital_analogue_window_cp2_g1

0x9453,	// (0x00012b13) popup_clock_digital_analogue_window_cp2_g2

0xec8a,	// (0x0001834a) popup_clock_digital_analogue_window_cp2_g3

0x9453,	// (0x00012b13) popup_clock_digital_analogue_window_cp2_g4

0xec8a,	// (0x0001834a) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd6c,	// (0x0001942c) popup_clock_digital_analogue_window_cp2_g

0xec92,	// (0x00018352) popup_clock_digital_analogue_window_cp2_t1

0xeca0,	// (0x00018360) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd77,	// (0x00019437) popup_clock_digital_analogue_window_cp2_t

0xce36,	// (0x000164f6) clock_digital_number_pane_cp10_g1

0xce36,	// (0x000164f6) clock_digital_number_pane_cp10_g2

0x0001,

0xfb53,	// (0x00019213) clock_digital_number_pane_cp10_g

0xce36,	// (0x000164f6) clock_digital_separator_pane_cp10_g1

0xce36,	// (0x000164f6) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb53,	// (0x00019213) clock_digital_separator_pane_cp10_g

0xeace,	// (0x0001818e) uniindi_top_pane_g3

0xeadf,	// (0x0001819f) uniindi_top_pane_g4

0x7756,	// (0x00010e16) vkb2_row_keypad_pane_ParamLimits

0x7756,	// (0x00010e16) vkb2_row_keypad_pane

0x799c,	// (0x0001105c) vkb2_cell_t_keypad_pane_ParamLimits

0x799c,	// (0x0001105c) vkb2_cell_t_keypad_pane

0x79ac,	// (0x0001106c) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x79ac,	// (0x0001106c) vkb2_cell_t_keypad_pane_cp08

0x79bf,	// (0x0001107f) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x79bf,	// (0x0001107f) vkb2_cell_t_keypad_pane_cp09

0x79d3,	// (0x00011093) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x79d3,	// (0x00011093) vkb2_cell_t_keypad_pane_cp01

0x79e4,	// (0x000110a4) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x79e4,	// (0x000110a4) vkb2_cell_t_keypad_pane_cp02

0x79f5,	// (0x000110b5) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x79f5,	// (0x000110b5) vkb2_cell_t_keypad_pane_cp03

0x7a06,	// (0x000110c6) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x7a06,	// (0x000110c6) vkb2_cell_t_keypad_pane_cp04

0x7a17,	// (0x000110d7) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x7a17,	// (0x000110d7) vkb2_cell_t_keypad_pane_cp05

0x7a28,	// (0x000110e8) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x7a28,	// (0x000110e8) vkb2_cell_t_keypad_pane_cp06

0x7a39,	// (0x000110f9) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x7a39,	// (0x000110f9) vkb2_cell_t_keypad_pane_cp07

0x7a4a,	// (0x0001110a) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x7a4a,	// (0x0001110a) vkb2_cell_t_keypad_pane_cp10

0x71fc,	// (0x000108bc) vkb2_cell_t_keypad_pane_g1

0xf0b3,	// (0x00018773) vkb2_cell_t_keypad_pane_t1

0x5c04,	// (0x0000f2c4) popup_grid_graphic2_window

0xf0c5,	// (0x00018785) aid_size_cell_graphic2_ParamLimits

0xf0c5,	// (0x00018785) aid_size_cell_graphic2

0xf0fd,	// (0x000187bd) bg_popup_window_pane_cp21_ParamLimits

0xf0fd,	// (0x000187bd) bg_popup_window_pane_cp21

0xf10b,	// (0x000187cb) graphic2_pages_pane_ParamLimits

0xf10b,	// (0x000187cb) graphic2_pages_pane

0xf151,	// (0x00018811) grid_graphic2_control_pane_ParamLimits

0xf151,	// (0x00018811) grid_graphic2_control_pane

0xf18f,	// (0x0001884f) grid_graphic2_pane_ParamLimits

0xf18f,	// (0x0001884f) grid_graphic2_pane

0xf203,	// (0x000188c3) cell_graphic2_pane

0x5c04,	// (0x0000f2c4) main_comp_mode_pane

0xe2e0,	// (0x000179a0) list_ai3_gene_pane_ParamLimits

0xe714,	// (0x00017dd4) bg_popup_window_pane_cp19_ParamLimits

0xe720,	// (0x00017de0) bg_touch_area_indi_pane_ParamLimits

0xe720,	// (0x00017de0) bg_touch_area_indi_pane

0xe736,	// (0x00017df6) bg_touch_area_indi_pane_cp01_ParamLimits

0xe736,	// (0x00017df6) bg_touch_area_indi_pane_cp01

0xe74c,	// (0x00017e0c) bg_touch_area_indi_pane_cp02_ParamLimits

0xe74c,	// (0x00017e0c) bg_touch_area_indi_pane_cp02

0xe764,	// (0x00017e24) bg_touch_area_indi_pane_cp03_ParamLimits

0xe764,	// (0x00017e24) bg_touch_area_indi_pane_cp03

0xe77e,	// (0x00017e3e) popup_slider_window_g1_ParamLimits

0xe79a,	// (0x00017e5a) popup_slider_window_g2_ParamLimits

0xe7b6,	// (0x00017e76) popup_slider_window_g3_ParamLimits

0xfd01,	// (0x000193c1) popup_slider_window_g_ParamLimits

0xe812,	// (0x00017ed2) popup_slider_window_t1_ParamLimits

0xe886,	// (0x00017f46) small_volume_slider_vertical_pane_ParamLimits

0xf203,	// (0x000188c3) cell_graphic2_pane_ParamLimits

0xf251,	// (0x00018911) bg_button_pane_cp10_ParamLimits

0xf251,	// (0x00018911) bg_button_pane_cp10

0xf264,	// (0x00018924) bg_button_pane_cp11_ParamLimits

0xf264,	// (0x00018924) bg_button_pane_cp11

0xf277,	// (0x00018937) graphic2_pages_pane_g1_ParamLimits

0xf277,	// (0x00018937) graphic2_pages_pane_g1

0xf292,	// (0x00018952) graphic2_pages_pane_g2_ParamLimits

0xf292,	// (0x00018952) graphic2_pages_pane_g2

0x0001,

0xfdc5,	// (0x00019485) graphic2_pages_pane_g_ParamLimits

0xfdc5,	// (0x00019485) graphic2_pages_pane_g

0xf2aa,	// (0x0001896a) graphic2_pages_pane_t1_ParamLimits

0xf2aa,	// (0x0001896a) graphic2_pages_pane_t1

0xf2c0,	// (0x00018980) cell_graphic2_control_pane_ParamLimits

0xf2c0,	// (0x00018980) cell_graphic2_control_pane

0xf2e1,	// (0x000189a1) cell_graphic2_pane_g1_ParamLimits

0xf2e1,	// (0x000189a1) cell_graphic2_pane_g1

0xf2ee,	// (0x000189ae) cell_graphic2_pane_g2_ParamLimits

0xf2ee,	// (0x000189ae) cell_graphic2_pane_g2

0xf2fb,	// (0x000189bb) cell_graphic2_pane_g3_ParamLimits

0xf2fb,	// (0x000189bb) cell_graphic2_pane_g3

0xf308,	// (0x000189c8) cell_graphic2_pane_g4_ParamLimits

0xf308,	// (0x000189c8) cell_graphic2_pane_g4

0xf315,	// (0x000189d5) cell_graphic2_pane_g5_ParamLimits

0xf315,	// (0x000189d5) cell_graphic2_pane_g5

0x0004,

0xfdca,	// (0x0001948a) cell_graphic2_pane_g_ParamLimits

0xfdca,	// (0x0001948a) cell_graphic2_pane_g

0xf330,	// (0x000189f0) cell_graphic2_pane_t1_ParamLimits

0xf330,	// (0x000189f0) cell_graphic2_pane_t1

0xa45d,	// (0x00013b1d) grid_highlight_pane_cp11_ParamLimits

0xa45d,	// (0x00013b1d) grid_highlight_pane_cp11

0x818a,	// (0x0001184a) bg_button_pane_cp05

0xf359,	// (0x00018a19) cell_graphic2_control_pane_g1

0xce36,	// (0x000164f6) bg_touch_area_indi_pane_g1

0xf381,	// (0x00018a41) aid_cmod_rocker_key_size

0xf38b,	// (0x00018a4b) aid_cmode_itu_key_size

0xf395,	// (0x00018a55) main_cmode_video_pane

0xf39f,	// (0x00018a5f) main_comp_mode_itu_pane

0xf3ab,	// (0x00018a6b) main_comp_mode_rocker_pane

0xf3b7,	// (0x00018a77) cell_cmode_rocker_pane_ParamLimits

0xf3b7,	// (0x00018a77) cell_cmode_rocker_pane

0xf3c9,	// (0x00018a89) cell_cmode_itu_pane_ParamLimits

0xf3c9,	// (0x00018a89) cell_cmode_itu_pane

0x8ca3,	// (0x00012363) bg_button_pane_cp06_ParamLimits

0x8ca3,	// (0x00012363) bg_button_pane_cp06

0xd0a4,	// (0x00016764) cell_cmode_rocker_pane_g1_ParamLimits

0xd0a4,	// (0x00016764) cell_cmode_rocker_pane_g1

0xe92a,	// (0x00017fea) cell_cmode_rocker_pane_g2_ParamLimits

0xe92a,	// (0x00017fea) cell_cmode_rocker_pane_g2

0x0001,

0xfdda,	// (0x0001949a) cell_cmode_rocker_pane_g_ParamLimits

0xfdda,	// (0x0001949a) cell_cmode_rocker_pane_g

0x7df3,	// (0x000114b3) bg_button_pane_cp07

0xf3de,	// (0x00018a9e) cell_cmode_itu_pane_g1

0xf3e7,	// (0x00018aa7) cell_cmode_itu_pane_t1

0xf3f5,	// (0x00018ab5) cell_cmode_itu_pane_t2

0x0001,

0xfddf,	// (0x0001949f) cell_cmode_itu_pane_t

0xeb51,	// (0x00018211) aid_touch_ctrl_left

0xeb59,	// (0x00018219) aid_touch_ctrl_right

0x7df3,	// (0x000114b3) compa_mode_pane

0xf403,	// (0x00018ac3) aid_cmod_rocker_key_size_cp

0xf40d,	// (0x00018acd) aid_cmode_itu_key_size_cp

0xf417,	// (0x00018ad7) compa_mode_pane_g1

0xf41f,	// (0x00018adf) compa_mode_pane_g2

0xf427,	// (0x00018ae7) compa_mode_pane_g3

0x0002,

0xfde4,	// (0x000194a4) compa_mode_pane_g

0xf42f,	// (0x00018aef) main_comp_mode_itu_pane_cp

0xf437,	// (0x00018af7) main_comp_mode_rocker_pane_cp

0xf43f,	// (0x00018aff) cell_cmode_itu_pane_cp_ParamLimits

0xf43f,	// (0x00018aff) cell_cmode_itu_pane_cp

0xf454,	// (0x00018b14) cell_cmode_rocker_pane_cp_ParamLimits

0xf454,	// (0x00018b14) cell_cmode_rocker_pane_cp

0x8ca3,	// (0x00012363) bg_button_pane_cp06_cp_ParamLimits

0x8ca3,	// (0x00012363) bg_button_pane_cp06_cp

0xd0a4,	// (0x00016764) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xd0a4,	// (0x00016764) cell_cmode_rocker_pane_g1_cp

0xce36,	// (0x000164f6) cell_cmode_rocker_pane_g2_cp

0x7df3,	// (0x000114b3) bg_button_pane_cp07_cp

0xf466,	// (0x00018b26) cell_cmode_itu_pane_g1_cp

0xf46f,	// (0x00018b2f) cell_cmode_itu_pane_t1_cp

0xf46f,	// (0x00018b2f) cell_cmode_itu_pane_t2_cp

0xb96c,	// (0x0001502c) settings_code_pane_cp2

0x7ee7,	// (0x000115a7) bg_popup_window_pane_cp3_ParamLimits

0x8358,	// (0x00011a18) heading_pane_cp3_ParamLimits

0x8364,	// (0x00011a24) listscroll_popup_graphic_pane_ParamLimits

0x6fa5,	// (0x00010665) fep_hwr_aid_pane_ParamLimits

0x741c,	// (0x00010adc) aid_touch_sctrl_top_ParamLimits

0x7437,	// (0x00010af7) sctrl_sk_top_pane_g1_ParamLimits

0x71fc,	// (0x000108bc) sctrl_sk_top_pane_g2_ParamLimits

0xfd1a,	// (0x000193da) sctrl_sk_top_pane_g_ParamLimits

0x7444,	// (0x00010b04) sctrl_sk_top_pane_t1_ParamLimits

0x741c,	// (0x00010adc) aid_touch_sctrl_bottom_ParamLimits

0x7444,	// (0x00010b04) sctrl_sk_bottom_pane_t1_ParamLimits

0xea9a,	// (0x0001815a) aid_area_touch_clock

0x762d,	// (0x00010ced) aid_vkb2_area_top_pane_cell_ParamLimits

0x762d,	// (0x00010ced) aid_vkb2_area_top_pane_cell

0x7778,	// (0x00010e38) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x7778,	// (0x00010e38) aid_vkb2_area_bottom_pane_cell

0xeffe,	// (0x000186be) popup_char_count_window

0xf47d,	// (0x00018b3d) popup_char_count_window_g1

0xf486,	// (0x00018b46) popup_char_count_window_g2

0xf48f,	// (0x00018b4f) popup_char_count_window_g3

0x0002,

0xfdeb,	// (0x000194ab) popup_char_count_window_g

0xf498,	// (0x00018b58) popup_char_count_window_t1

0x74f3,	// (0x00010bb3) popup_fep_char_preview_window_ParamLimits

0x74f3,	// (0x00010bb3) popup_fep_char_preview_window

0x764b,	// (0x00010d0b) vkb2_top_candi_pane_ParamLimits

0x764b,	// (0x00010d0b) vkb2_top_candi_pane

0xf4a6,	// (0x00018b66) cell_vkb2_top_candi_pane_ParamLimits

0xf4a6,	// (0x00018b66) cell_vkb2_top_candi_pane

0x7a5f,	// (0x0001111f) bg_popup_fep_char_preview_window_ParamLimits

0x7a5f,	// (0x0001111f) bg_popup_fep_char_preview_window

0x7a6d,	// (0x0001112d) popup_fep_char_preview_window_t1_ParamLimits

0x7a6d,	// (0x0001112d) popup_fep_char_preview_window_t1

0xf4f3,	// (0x00018bb3) bg_popup_fep_char_preview_window_g1

0xf4fb,	// (0x00018bbb) bg_popup_fep_char_preview_window_g2

0xf503,	// (0x00018bc3) bg_popup_fep_char_preview_window_g3

0xf50b,	// (0x00018bcb) bg_popup_fep_char_preview_window_g4

0xf513,	// (0x00018bd3) bg_popup_fep_char_preview_window_g5

0x7aa7,	// (0x00011167) bg_popup_fep_char_preview_window_g6

0xf51b,	// (0x00018bdb) bg_popup_fep_char_preview_window_g7

0xf523,	// (0x00018be3) bg_popup_fep_char_preview_window_g8

0xf54c,	// (0x00018c0c) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdf2,	// (0x000194b2) bg_popup_fep_char_preview_window_g

0x71fc,	// (0x000108bc) cell_vkb2_top_candi_pane_g1_ParamLimits

0x71fc,	// (0x000108bc) cell_vkb2_top_candi_pane_g1

0x720a,	// (0x000108ca) cell_vkb2_top_candi_pane_g2_ParamLimits

0x720a,	// (0x000108ca) cell_vkb2_top_candi_pane_g2

0xf52b,	// (0x00018beb) cell_vkb2_top_candi_pane_g3_ParamLimits

0xf52b,	// (0x00018beb) cell_vkb2_top_candi_pane_g3

0x7aaf,	// (0x0001116f) cell_vkb2_top_candi_pane_g4_ParamLimits

0x7aaf,	// (0x0001116f) cell_vkb2_top_candi_pane_g4

0xd715,	// (0x00016dd5) cell_vkb2_top_candi_pane_g5_ParamLimits

0xd715,	// (0x00016dd5) cell_vkb2_top_candi_pane_g5

0x7ad0,	// (0x00011190) cell_vkb2_top_candi_pane_g6_ParamLimits

0x7ad0,	// (0x00011190) cell_vkb2_top_candi_pane_g6

0x0005,

0xfe05,	// (0x000194c5) cell_vkb2_top_candi_pane_g_ParamLimits

0xfe05,	// (0x000194c5) cell_vkb2_top_candi_pane_g

0x7ade,	// (0x0001119e) cell_vkb2_top_candi_pane_t1

0x6de1,	// (0x000104a1) aid_size_touch_slider_mark_ParamLimits

0x6de1,	// (0x000104a1) aid_size_touch_slider_mark

0xf141,	// (0x00018801) grid_graphic2_catg_pane_ParamLimits

0xf141,	// (0x00018801) grid_graphic2_catg_pane

0xf1df,	// (0x0001889f) popup_grid_graphic2_window_t1_ParamLimits

0xf1df,	// (0x0001889f) popup_grid_graphic2_window_t1

0xf1f1,	// (0x000188b1) popup_grid_graphic2_window_t2_ParamLimits

0xf1f1,	// (0x000188b1) popup_grid_graphic2_window_t2

0x0001,

0xfdc0,	// (0x00019480) popup_grid_graphic2_window_t_ParamLimits

0xfdc0,	// (0x00019480) popup_grid_graphic2_window_t

0x818a,	// (0x0001184a) bg_button_pane_cp05_ParamLimits

0xf359,	// (0x00018a19) cell_graphic2_control_pane_g1_ParamLimits

0x000e,	// (0x000096ce) cell_graphic2_catg_pane_ParamLimits

0x000e,	// (0x000096ce) cell_graphic2_catg_pane

0x7df3,	// (0x000114b3) bg_button_pane_cp12

0x0020,	// (0x000096e0) cell_graphic2_catg_pane_g1

0xea66,	// (0x00018126) cell_tb_ext_pane_t1_ParamLimits

0x7895,	// (0x00010f55) vkb2_top_cell_right_narrow_pane_ParamLimits

0x7895,	// (0x00010f55) vkb2_top_cell_right_narrow_pane

0x78ad,	// (0x00010f6d) vkb2_top_cell_right_wide_pane_ParamLimits

0x78ad,	// (0x00010f6d) vkb2_top_cell_right_wide_pane

0x6f97,	// (0x00010657) bg_vkb2_func_pane_ParamLimits

0x6f97,	// (0x00010657) bg_vkb2_func_pane

0x791e,	// (0x00010fde) vkb2_top_cell_left_pane_g1_ParamLimits

0x6f97,	// (0x00010657) bg_vkb2_fuc_pane_cp03_ParamLimits

0x6f97,	// (0x00010657) bg_vkb2_fuc_pane_cp03

0x797c,	// (0x0001103c) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0xa341,	// (0x00013a01) bg_vkb2_func_pane_g1

0xa349,	// (0x00013a09) bg_vkb2_func_pane_g2

0xa359,	// (0x00013a19) bg_vkb2_func_pane_g3

0xa351,	// (0x00013a11) bg_vkb2_func_pane_g4

0xa361,	// (0x00013a21) bg_vkb2_func_pane_g5

0xa369,	// (0x00013a29) bg_vkb2_func_pane_g6

0xa371,	// (0x00013a31) bg_vkb2_func_pane_g7

0xa379,	// (0x00013a39) bg_vkb2_func_pane_g8

0xa339,	// (0x000139f9) bg_vkb2_func_pane_g9

0x0008,

0xfe12,	// (0x000194d2) bg_vkb2_func_pane_g

0x6f97,	// (0x00010657) bg_vkb2_fuc_pane_cp01_ParamLimits

0x6f97,	// (0x00010657) bg_vkb2_fuc_pane_cp01

0x791e,	// (0x00010fde) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x791e,	// (0x00010fde) vkb2_top_cell_right_wide_pane_g1

0x6f97,	// (0x00010657) bg_vkb2_fuc_pane_cp02_ParamLimits

0x6f97,	// (0x00010657) bg_vkb2_fuc_pane_cp02

0x797c,	// (0x0001103c) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x797c,	// (0x0001103c) vkb2_top_cell_right_narrow_pane_g1

0xe692,	// (0x00017d52) aid_touch_area_decrease_ParamLimits

0xe692,	// (0x00017d52) aid_touch_area_decrease

0xe6b6,	// (0x00017d76) aid_touch_area_increase_ParamLimits

0xe6b6,	// (0x00017d76) aid_touch_area_increase

0xe6c2,	// (0x00017d82) aid_touch_area_mute_ParamLimits

0xe6c2,	// (0x00017d82) aid_touch_area_mute

0xe6e6,	// (0x00017da6) aid_touch_area_slider_ParamLimits

0xe6e6,	// (0x00017da6) aid_touch_area_slider

0xe7d2,	// (0x00017e92) popup_slider_window_g4_ParamLimits

0xe7d2,	// (0x00017e92) popup_slider_window_g4

0xe7de,	// (0x00017e9e) popup_slider_window_g5_ParamLimits

0xe7de,	// (0x00017e9e) popup_slider_window_g5

0xe800,	// (0x00017ec0) popup_slider_window_g6_ParamLimits

0xe800,	// (0x00017ec0) popup_slider_window_g6

0xe840,	// (0x00017f00) popup_slider_window_t2_ParamLimits

0xe840,	// (0x00017f00) popup_slider_window_t2

0x0001,

0xfd0e,	// (0x000193ce) popup_slider_window_t_ParamLimits

0xfd0e,	// (0x000193ce) popup_slider_window_t

0xe858,	// (0x00017f18) slider_pane_ParamLimits

0xe858,	// (0x00017f18) slider_pane

0x0029,	// (0x000096e9) slider_pane_g1_ParamLimits

0x0029,	// (0x000096e9) slider_pane_g1

0x003d,	// (0x000096fd) slider_pane_g2_ParamLimits

0x003d,	// (0x000096fd) slider_pane_g2

0x0053,	// (0x00009713) slider_pane_g3_ParamLimits

0x0053,	// (0x00009713) slider_pane_g3

0x0003,

0xfe25,	// (0x000194e5) slider_pane_g_ParamLimits

0xfe25,	// (0x000194e5) slider_pane_g

0x69a6,	// (0x00010066) popup_tb_float_extension_window_ParamLimits

0x69a6,	// (0x00010066) popup_tb_float_extension_window

0x007f,	// (0x0000973f) aid_size_cell_tb_float_ext

0x7df3,	// (0x000114b3) bg_popup_sub_window_cp28

0x008b,	// (0x0000974b) grid_tb_float_ext_pane

0x0095,	// (0x00009755) cell_tb_float_ext_pane_ParamLimits

0x0095,	// (0x00009755) cell_tb_float_ext_pane

0x00af,	// (0x0000976f) cell_tb_float_ext_pane_g1

0x00b8,	// (0x00009778) grid_highlight_pane_cp12

0x70e6,	// (0x000107a6) cell_last_hwr_side_pane_ParamLimits

0x70e6,	// (0x000107a6) cell_last_hwr_side_pane

0xce36,	// (0x000164f6) cell_last_hwr_side_pane_g1

0x00c1,	// (0x00009781) cell_last_hwr_side_pane_g2

0x0001,

0xfe2e,	// (0x000194ee) cell_last_hwr_side_pane_g

0x7844,	// (0x00010f04) vkb2_area_bottom_space_btn_pane_ParamLimits

0x7844,	// (0x00010f04) vkb2_area_bottom_space_btn_pane

0x71fc,	// (0x000108bc) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xf0b3,	// (0x00018773) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x7ade,	// (0x0001119e) cell_vkb2_top_candi_pane_t1_ParamLimits

0x7afd,	// (0x000111bd) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x7afd,	// (0x000111bd) vkb2_area_bottom_space_btn_pane_g1

0x7b37,	// (0x000111f7) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x7b37,	// (0x000111f7) vkb2_area_bottom_space_btn_pane_g2

0x7b6d,	// (0x0001122d) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x7b6d,	// (0x0001122d) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe33,	// (0x000194f3) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe33,	// (0x000194f3) vkb2_area_bottom_space_btn_pane_g

0x705a,	// (0x0001071a) cel_fep_hwr_func_pane_ParamLimits

0x705a,	// (0x0001071a) cel_fep_hwr_func_pane

0x7096,	// (0x00010756) cell_hwr_side_button_pane_ParamLimits

0x7096,	// (0x00010756) cell_hwr_side_button_pane

0xea9a,	// (0x0001815a) aid_area_touch_clock_ParamLimits

0x818a,	// (0x0001184a) bg_uniindi_top_pane_ParamLimits

0xeaac,	// (0x0001816c) uniindi_top_pane_g1_ParamLimits

0xeac2,	// (0x00018182) uniindi_top_pane_g2_ParamLimits

0xeace,	// (0x0001818e) uniindi_top_pane_g3_ParamLimits

0xeadf,	// (0x0001819f) uniindi_top_pane_g4_ParamLimits

0xfd46,	// (0x00019406) uniindi_top_pane_g_ParamLimits

0xeaec,	// (0x000181ac) uniindi_top_pane_t1_ParamLimits

0x818a,	// (0x0001184a) bg_vkb2_func_pane_cp01_ParamLimits

0x818a,	// (0x0001184a) bg_vkb2_func_pane_cp01

0x0184,	// (0x00009844) cel_fep_hwr_func_pane_g1_ParamLimits

0x0184,	// (0x00009844) cel_fep_hwr_func_pane_g1

0x818a,	// (0x0001184a) bg_vkb2_func_pane_cp02_ParamLimits

0x818a,	// (0x0001184a) bg_vkb2_func_pane_cp02

0x0184,	// (0x00009844) cell_hwr_side_button_pane_g1_ParamLimits

0x0184,	// (0x00009844) cell_hwr_side_button_pane_g1

0xa1a4,	// (0x00013864) status_pane_g4_ParamLimits

0xa1a4,	// (0x00013864) status_pane_g4

0xa1be,	// (0x0001387e) status_pane_t1

0xcb50,	// (0x00016210) form2_midp_gauge_slider_cont_pane

0xcb58,	// (0x00016218) form2_midp_gauge_slider_pane_t1_ParamLimits

0xcb6a,	// (0x0001622a) form2_midp_gauge_slider_pane_t2_ParamLimits

0xcb7c,	// (0x0001623c) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb06,	// (0x000191c6) form2_midp_gauge_slider_pane_t_ParamLimits

0xcb8e,	// (0x0001624e) form2_midp_slider_pane_ParamLimits

0x74b3,	// (0x00010b73) aid_size_cell_func_vkb2_ParamLimits

0x74b3,	// (0x00010b73) aid_size_cell_func_vkb2

0x006b,	// (0x0000972b) slider_pane_g4_ParamLimits

0x006b,	// (0x0000972b) slider_pane_g4

0x7bb7,	// (0x00011277) form2_midp_gauge_slider_pane_t2_cp01

0x7bc5,	// (0x00011285) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x7bc5,	// (0x00011285) form2_midp_gauge_slider_pane_t3_cp01

0x7be2,	// (0x000112a2) form2_midp_slider_pane_cp01

0x7df3,	// (0x000114b3) navi_smil_pane

0x01f1,	// (0x000098b1) navi_smil_pane_g1

0x01f9,	// (0x000098b9) navi_smil_pane_t1

0x01c6,	// (0x00009886) form2_midp_slider_pane_g1

0x01cf,	// (0x0000988f) form2_midp_slider_pane_g2

0x01d7,	// (0x00009897) form2_midp_slider_pane_g3

0x01c6,	// (0x00009886) form2_midp_slider_pane_g4

0x01df,	// (0x0000989f) form2_midp_slider_pane_g5

0x0004,

0xfe3c,	// (0x000194fc) form2_midp_slider_pane_g

0x7ba7,	// (0x00011267) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x7ba7,	// (0x00011267) vkb2_area_bottom_space_btn_pane_g4

0x9fdb,	// (0x0001369b) lc0_navi_pane_ParamLimits

0x9fdb,	// (0x0001369b) lc0_navi_pane

0xa051,	// (0x00013711) lc0_stat_indi_pane_ParamLimits

0xa051,	// (0x00013711) lc0_stat_indi_pane

0xa068,	// (0x00013728) ls0_title_pane_ParamLimits

0xa068,	// (0x00013728) ls0_title_pane

0x8ca3,	// (0x00012363) bg_popup_sub_pane_cp14_ParamLimits

0xea81,	// (0x00018141) list_uniindi_pane_ParamLimits

0xea8d,	// (0x0001814d) uniindi_top_pane_ParamLimits

0xeb29,	// (0x000181e9) list_single_uniindi_pane_g1_ParamLimits

0xeb3c,	// (0x000181fc) list_single_uniindi_pane_t1_ParamLimits

0x7beb,	// (0x000112ab) lc0_stat_clock_pane_ParamLimits

0x7beb,	// (0x000112ab) lc0_stat_clock_pane

0x0221,	// (0x000098e1) lc0_stat_indi_pane_g1_ParamLimits

0x0221,	// (0x000098e1) lc0_stat_indi_pane_g1

0x0214,	// (0x000098d4) lc0_stat_indi_pane_g2_ParamLimits

0x0214,	// (0x000098d4) lc0_stat_indi_pane_g2

0x0001,

0xfe47,	// (0x00019507) lc0_stat_indi_pane_g_ParamLimits

0xfe47,	// (0x00019507) lc0_stat_indi_pane_g

0x7bf8,	// (0x000112b8) lc0_uni_indicator_pane_ParamLimits

0x7bf8,	// (0x000112b8) lc0_uni_indicator_pane

0x023b,	// (0x000098fb) ls0_title_pane_g1_ParamLimits

0x023b,	// (0x000098fb) ls0_title_pane_g1

0x024f,	// (0x0000990f) ls0_title_pane_t1_ParamLimits

0x024f,	// (0x0000990f) ls0_title_pane_t1

0x7c05,	// (0x000112c5) lc0_uni_indicator_pane_g1_ParamLimits

0x7c05,	// (0x000112c5) lc0_uni_indicator_pane_g1

0x029a,	// (0x0000995a) lc0_stat_clock_pane_t1

0x5c04,	// (0x0000f2c4) main_ai5_pane

0x02a8,	// (0x00009968) ai5_sk_pane_ParamLimits

0x02a8,	// (0x00009968) ai5_sk_pane

0x02b5,	// (0x00009975) cell_ai5_widget_pane_ParamLimits

0x02b5,	// (0x00009975) cell_ai5_widget_pane

0x037f,	// (0x00009a3f) aid_size_cell_widget_grid

0x038d,	// (0x00009a4d) bg_ai5_widget_pane_ParamLimits

0x038d,	// (0x00009a4d) bg_ai5_widget_pane

0x0401,	// (0x00009ac1) cell_ai5_widget_pane_g2

0x0411,	// (0x00009ad1) cell_ai5_widget_pane_g3

0x0428,	// (0x00009ae8) cell_ai5_widget_pane_g4

0x0434,	// (0x00009af4) cell_ai5_widget_pane_g5

0x0440,	// (0x00009b00) cell_ai5_widget_pane_g6

0x044c,	// (0x00009b0c) cell_ai5_widget_pane_g7

0x0494,	// (0x00009b54) cell_ai5_widget_pane_t1_ParamLimits

0x0494,	// (0x00009b54) cell_ai5_widget_pane_t1

0x04b1,	// (0x00009b71) cell_ai5_widget_pane_t2_ParamLimits

0x04b1,	// (0x00009b71) cell_ai5_widget_pane_t2

0x04c9,	// (0x00009b89) cell_ai5_widget_pane_t3_ParamLimits

0x04c9,	// (0x00009b89) cell_ai5_widget_pane_t3

0x04e1,	// (0x00009ba1) cell_ai5_widget_pane_t4_ParamLimits

0x04e1,	// (0x00009ba1) cell_ai5_widget_pane_t4

0x04fe,	// (0x00009bbe) cell_ai5_widget_pane_t5_ParamLimits

0x04fe,	// (0x00009bbe) cell_ai5_widget_pane_t5

0x051d,	// (0x00009bdd) cell_ai5_widget_pane_t6_ParamLimits

0x051d,	// (0x00009bdd) cell_ai5_widget_pane_t6

0x052f,	// (0x00009bef) cell_ai5_widget_pane_t7_ParamLimits

0x052f,	// (0x00009bef) cell_ai5_widget_pane_t7

0x0548,	// (0x00009c08) cell_ai5_widget_pane_t8_ParamLimits

0x0548,	// (0x00009c08) cell_ai5_widget_pane_t8

0x0009,

0xfe61,	// (0x00019521) cell_ai5_widget_pane_t_ParamLimits

0xfe61,	// (0x00019521) cell_ai5_widget_pane_t

0x059c,	// (0x00009c5c) grid_ai5_widget_pane

0x8ca3,	// (0x00012363) highlight_cell_ai5_widget_pane_ParamLimits

0x8ca3,	// (0x00012363) highlight_cell_ai5_widget_pane

0x05b0,	// (0x00009c70) ai5_sk_left_pane

0x05ba,	// (0x00009c7a) ai5_sk_middle_pane

0x05c4,	// (0x00009c84) ai5_sk_right_pane

0x05ce,	// (0x00009c8e) bg_ai5_widget_pane_g1_ParamLimits

0x05ce,	// (0x00009c8e) bg_ai5_widget_pane_g1

0x05da,	// (0x00009c9a) bg_ai5_widget_pane_g2_ParamLimits

0x05da,	// (0x00009c9a) bg_ai5_widget_pane_g2

0x05e6,	// (0x00009ca6) bg_ai5_widget_pane_g3_ParamLimits

0x05e6,	// (0x00009ca6) bg_ai5_widget_pane_g3

0x05f2,	// (0x00009cb2) bg_ai5_widget_pane_g4_ParamLimits

0x05f2,	// (0x00009cb2) bg_ai5_widget_pane_g4

0x05fe,	// (0x00009cbe) bg_ai5_widget_pane_g5_ParamLimits

0x05fe,	// (0x00009cbe) bg_ai5_widget_pane_g5

0x060a,	// (0x00009cca) bg_ai5_widget_pane_g6_ParamLimits

0x060a,	// (0x00009cca) bg_ai5_widget_pane_g6

0x0616,	// (0x00009cd6) bg_ai5_widget_pane_g7_ParamLimits

0x0616,	// (0x00009cd6) bg_ai5_widget_pane_g7

0x0622,	// (0x00009ce2) bg_ai5_widget_pane_g8_ParamLimits

0x0622,	// (0x00009ce2) bg_ai5_widget_pane_g8

0x062e,	// (0x00009cee) bg_ai5_widget_pane_g9_ParamLimits

0x062e,	// (0x00009cee) bg_ai5_widget_pane_g9

0x0008,

0xfe76,	// (0x00019536) bg_ai5_widget_pane_g_ParamLimits

0xfe76,	// (0x00019536) bg_ai5_widget_pane_g

0x0660,	// (0x00009d20) cell_shortcut_ai5_widget_pane_ParamLimits

0x0660,	// (0x00009d20) cell_shortcut_ai5_widget_pane

0x9ad9,	// (0x00013199) bg_cell_shortcut_ai5_widget_pane

0x0671,	// (0x00009d31) cell_grid_ai5_widget_pane_g1

0x067a,	// (0x00009d3a) highlight_cell_shortcut_ai5_widget_pane

0xa341,	// (0x00013a01) ai5_sk_left_pane_g1

0x0682,	// (0x00009d42) ai5_sk_left_pane_g2

0x068a,	// (0x00009d4a) ai5_sk_left_pane_g3

0x0692,	// (0x00009d52) ai5_sk_left_pane_g4

0x0003,

0xfe89,	// (0x00019549) ai5_sk_left_pane_g

0x069a,	// (0x00009d5a) ai5_sk_left_pane_t1

0xa349,	// (0x00013a09) ai5_sk_right_pane_g1

0x06a8,	// (0x00009d68) ai5_sk_right_pane_g2

0x06b0,	// (0x00009d70) ai5_sk_right_pane_g3

0x06b8,	// (0x00009d78) ai5_sk_right_pane_g4

0x0003,

0xfe92,	// (0x00019552) ai5_sk_right_pane_g

0x06c0,	// (0x00009d80) ai5_sk_right_pane_t1

0xa349,	// (0x00013a09) ai5_sk_middle_pane_g1

0xa341,	// (0x00013a01) ai5_sk_middle_pane_g2

0xa361,	// (0x00013a21) ai5_sk_middle_pane_g3

0x06b0,	// (0x00009d70) ai5_sk_middle_pane_g4

0x068a,	// (0x00009d4a) ai5_sk_middle_pane_g5

0x06ce,	// (0x00009d8e) ai5_sk_middle_pane_g6

0x06d6,	// (0x00009d96) ai5_sk_middle_pane_g7

0x0006,

0xfe9b,	// (0x0001955b) ai5_sk_middle_pane_g

0x9e6b,	// (0x0001352b) aid_touch_area_size_lc0_ParamLimits

0x9e6b,	// (0x0001352b) aid_touch_area_size_lc0

0x722b,	// (0x000108eb) cell_hwr_candidate_pane_t1_ParamLimits

0x9e87,	// (0x00013547) aid_touch_navi_pane

0xa156,	// (0x00013816) status_dt_navi_pane_ParamLimits

0xa156,	// (0x00013816) status_dt_navi_pane

0xa163,	// (0x00013823) status_dt_sta_pane_ParamLimits

0xa163,	// (0x00013823) status_dt_sta_pane

0x06de,	// (0x00009d9e) dt_sta_controll_pane

0x06eb,	// (0x00009dab) dt_sta_indi_pane

0x06fc,	// (0x00009dbc) dt_sta_title_pane

0x818a,	// (0x0001184a) bg_dt_sta_indi_pane_ParamLimits

0x818a,	// (0x0001184a) bg_dt_sta_indi_pane

0x070f,	// (0x00009dcf) dt_sta_battery_pane

0x0717,	// (0x00009dd7) dt_sta_indi_pane_g1

0x0720,	// (0x00009de0) dt_sta_indi_pane_g2

0x0729,	// (0x00009de9) dt_sta_indi_pane_g3

0x0002,

0xfeaa,	// (0x0001956a) dt_sta_indi_pane_g

0x0732,	// (0x00009df2) dt_sta_signal_pane

0x8ca3,	// (0x00012363) bg_dt_sta_title_pane_ParamLimits

0x8ca3,	// (0x00012363) bg_dt_sta_title_pane

0x073b,	// (0x00009dfb) dt_sta_title_pane_g1

0x0743,	// (0x00009e03) dt_sta_title_pane_t1_ParamLimits

0x0743,	// (0x00009e03) dt_sta_title_pane_t1

0x7df3,	// (0x000114b3) bg_dt_sta_control_pane

0x0758,	// (0x00009e18) dt_sta_controll_pane_g1

0x0761,	// (0x00009e21) bg_dt_sta_title_pane_g1

0x076a,	// (0x00009e2a) bg_dt_sta_title_pane_g2

0x0773,	// (0x00009e33) bg_dt_sta_title_pane_g3

0x0002,

0xfeb1,	// (0x00019571) bg_dt_sta_title_pane_g

0xce36,	// (0x000164f6) bg_dt_sta_indi_pane_g1

0x077c,	// (0x00009e3c) dt_sta_signal_pane_g1

0x0784,	// (0x00009e44) dt_sta_signal_pane_g2

0x0001,

0xfeb8,	// (0x00019578) dt_sta_signal_pane_g

0x078c,	// (0x00009e4c) dt_sta_battery_pane_g1

0x0795,	// (0x00009e55) dt_sta_battery_pane_t1

0xce36,	// (0x000164f6) bg_dt_sta_control_pane_g1

0x9561,	// (0x00012c21) fep_china_uni_eep_pane

0x9569,	// (0x00012c29) fep_china_uni_entry_pane_ParamLimits

0x9579,	// (0x00012c39) popup_fep_china_uni_window_g1_ParamLimits

0x9589,	// (0x00012c49) popup_fep_china_uni_window_g2_ParamLimits

0x9589,	// (0x00012c49) popup_fep_china_uni_window_g2

0x0001,

0xf71e,	// (0x00018dde) popup_fep_china_uni_window_g_ParamLimits

0xf71e,	// (0x00018dde) popup_fep_china_uni_window_g

0x07a4,	// (0x00009e64) fep_china_uni_eep_pane_g1

0x07ac,	// (0x00009e6c) fep_china_uni_eep_pane_t1

0x01e8,	// (0x000098a8) aid_touch_area_size_smil_player

0x9fd3,	// (0x00013693) lc0_clock_pane

0xa1b2,	// (0x00013872) status_pane_g5_ParamLimits

0xa1b2,	// (0x00013872) status_pane_g5

0x666d,	// (0x0000fd2d) popup_keymap_window

0xa178,	// (0x00013838) status_icon_pane

0x0411,	// (0x00009ad1) cell_ai5_widget_pane_g3_ParamLimits

0x0428,	// (0x00009ae8) cell_ai5_widget_pane_g4_ParamLimits

0x0434,	// (0x00009af4) cell_ai5_widget_pane_g5_ParamLimits

0x0458,	// (0x00009b18) cell_ai5_widget_pane_g8_ParamLimits

0x0458,	// (0x00009b18) cell_ai5_widget_pane_g8

0x046c,	// (0x00009b2c) cell_ai5_widget_pane_g9_ParamLimits

0x046c,	// (0x00009b2c) cell_ai5_widget_pane_g9

0x0480,	// (0x00009b40) cell_ai5_widget_pane_g10_ParamLimits

0x0480,	// (0x00009b40) cell_ai5_widget_pane_g10

0x07bb,	// (0x00009e7b) status_icon_pane_g1

0x7df3,	// (0x000114b3) bg_popup_sub_pane_cp13

0x07c3,	// (0x00009e83) popup_keymap_window_t1

0x9da0,	// (0x00013460) control_pane_g6_ParamLimits

0x9da0,	// (0x00013460) control_pane_g6

0x9dad,	// (0x0001346d) control_pane_g7_ParamLimits

0x9dad,	// (0x0001346d) control_pane_g7

0x9dba,	// (0x0001347a) control_pane_g8_ParamLimits

0x9dba,	// (0x0001347a) control_pane_g8

0x06de,	// (0x00009d9e) dt_sta_controll_pane_ParamLimits

0x06eb,	// (0x00009dab) dt_sta_indi_pane_ParamLimits

0x06fc,	// (0x00009dbc) dt_sta_title_pane_ParamLimits

0x8690,	// (0x00011d50) aid_size_touch_scroll_bar_cale

0x5cdd,	// (0x0000f39d) popup_discreet_window_ParamLimits

0x5cdd,	// (0x0000f39d) popup_discreet_window

0x5d57,	// (0x0000f417) popup_sk_window

0xaab4,	// (0x00014174) bg_popup_sub_pane_cp28_ParamLimits

0xaab4,	// (0x00014174) bg_popup_sub_pane_cp28

0x07d1,	// (0x00009e91) popup_discreet_window_g1_ParamLimits

0x07d1,	// (0x00009e91) popup_discreet_window_g1

0x07f1,	// (0x00009eb1) popup_discreet_window_t1_ParamLimits

0x07f1,	// (0x00009eb1) popup_discreet_window_t1

0x080f,	// (0x00009ecf) popup_discreet_window_t2_ParamLimits

0x080f,	// (0x00009ecf) popup_discreet_window_t2

0x0002,

0xfebd,	// (0x0001957d) popup_discreet_window_t_ParamLimits

0xfebd,	// (0x0001957d) popup_discreet_window_t

0x7c1a,	// (0x000112da) popup_sk_window_g1

0x7c24,	// (0x000112e4) popup_sk_window_g2

0x0001,

0xfec4,	// (0x00019584) popup_sk_window_g

0x7c2e,	// (0x000112ee) popup_sk_window_t1

0x7c3c,	// (0x000112fc) popup_sk_window_t1_copy1

0x0401,	// (0x00009ac1) cell_ai5_widget_pane_g2_ParamLimits

0x055a,	// (0x00009c1a) cell_ai5_widget_pane_t9_ParamLimits

0x055a,	// (0x00009c1a) cell_ai5_widget_pane_t9

0x7df3,	// (0x000114b3) main_fep_fshwr2_pane

0x7c4a,	// (0x0001130a) aid_fshwr2_btn_pane

0x7c56,	// (0x00011316) aid_fshwr2_syb_pane

0x7c67,	// (0x00011327) aid_fshwr2_txt_pane

0x7c73,	// (0x00011333) fshwr2_func_candi_pane

0x7c8b,	// (0x0001134b) fshwr2_hwr_syb_pane

0x7ca2,	// (0x00011362) fshwr2_icf_pane

0x7df3,	// (0x000114b3) fshwr2_icf_bg_pane

0x0912,	// (0x00009fd2) fshwr2_icf_pane_t1_ParamLimits

0x0912,	// (0x00009fd2) fshwr2_icf_pane_t1

0x9453,	// (0x00012b13) fshwr2_func_candi_pane_g1

0x092a,	// (0x00009fea) fshwr2_func_candi_row_pane_ParamLimits

0x092a,	// (0x00009fea) fshwr2_func_candi_row_pane

0x093a,	// (0x00009ffa) cell_fshwr2_syb_pane_ParamLimits

0x093a,	// (0x00009ffa) cell_fshwr2_syb_pane

0xd0a4,	// (0x00016764) fshwr2_hwr_syb_pane_g1_ParamLimits

0xd0a4,	// (0x00016764) fshwr2_hwr_syb_pane_g1

0x7df3,	// (0x000114b3) bg_popup_call_pane_cp01

0x0954,	// (0x0000a014) fshwr2_func_candi_cell_pane_ParamLimits

0x0954,	// (0x0000a014) fshwr2_func_candi_cell_pane

0xb130,	// (0x000147f0) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xb130,	// (0x000147f0) fshwr2_func_candi_cell_bg_pane

0x097f,	// (0x0000a03f) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x097f,	// (0x0000a03f) fshwr2_func_candi_cell_pane_g1

0x099f,	// (0x0000a05f) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x099f,	// (0x0000a05f) fshwr2_func_candi_cell_pane_t1

0x7df3,	// (0x000114b3) bg_button_pane_cp08

0x9ad9,	// (0x00013199) cell_fshwr2_syb_bg_pane

0x09b2,	// (0x0000a072) cell_fshwr2_syb_bg_pane_g1

0x09ba,	// (0x0000a07a) cell_fshwr2_syb_bg_pane_t1

0x8ca3,	// (0x00012363) main_tmo_pane

0xb5c9,	// (0x00014c89) uni_indicator_pane_g1_ParamLimits

0xb5e0,	// (0x00014ca0) uni_indicator_pane_g2_ParamLimits

0xb5f3,	// (0x00014cb3) uni_indicator_pane_g3_ParamLimits

0xb605,	// (0x00014cc5) uni_indicator_pane_g4_ParamLimits

0xb605,	// (0x00014cc5) uni_indicator_pane_g4

0xb619,	// (0x00014cd9) uni_indicator_pane_g5_ParamLimits

0xb619,	// (0x00014cd9) uni_indicator_pane_g5

0xb619,	// (0x00014cd9) uni_indicator_pane_g6_ParamLimits

0xb619,	// (0x00014cd9) uni_indicator_pane_g6

0xf91d,	// (0x00018fdd) uni_indicator_pane_g_ParamLimits

0xe674,	// (0x00017d34) popup_tmo_note_window_ParamLimits

0xe674,	// (0x00017d34) popup_tmo_note_window

0x7495,	// (0x00010b55) fshwr2_bg_pane

0x0990,	// (0x0000a050) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x0990,	// (0x0000a050) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfec9,	// (0x00019589) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfec9,	// (0x00019589) fshwr2_func_candi_cell_pane_g

0xce36,	// (0x000164f6) bg_popup_window_pane_cp01

0x09c9,	// (0x0000a089) bg_popup_window_pane_g1_cp01

0x09d2,	// (0x0000a092) bg_popup_window_pane_cp22_ParamLimits

0x09d2,	// (0x0000a092) bg_popup_window_pane_cp22

0x09e0,	// (0x0000a0a0) listscroll_tmo_link_pane_ParamLimits

0x09e0,	// (0x0000a0a0) listscroll_tmo_link_pane

0x0a20,	// (0x0000a0e0) popup_tmo_note_window_g1_ParamLimits

0x0a20,	// (0x0000a0e0) popup_tmo_note_window_g1

0x0a2d,	// (0x0000a0ed) tmo_note_info_pane_ParamLimits

0x0a2d,	// (0x0000a0ed) tmo_note_info_pane

0x0a47,	// (0x0000a107) list_tmo_note_info_pane_g1_ParamLimits

0x0a47,	// (0x0000a107) list_tmo_note_info_pane_g1

0x0a5e,	// (0x0000a11e) list_tmo_note_info_pane_g2_ParamLimits

0x0a5e,	// (0x0000a11e) list_tmo_note_info_pane_g2

0x0001,

0xfece,	// (0x0001958e) list_tmo_note_info_pane_g_ParamLimits

0xfece,	// (0x0001958e) list_tmo_note_info_pane_g

0x0a7a,	// (0x0000a13a) list_tmo_note_info_text_pane_ParamLimits

0x0a7a,	// (0x0000a13a) list_tmo_note_info_text_pane

0x0afd,	// (0x0000a1bd) list_tmo_link_pane

0x0b0a,	// (0x0000a1ca) scroll_pane_cp20

0x0b17,	// (0x0000a1d7) list_single_tmo_link_pane_ParamLimits

0x0b17,	// (0x0000a1d7) list_single_tmo_link_pane

0x0b27,	// (0x0000a1e7) list_single_tmo_link_pane_t1

0x0b35,	// (0x0000a1f5) list_tmo_note_info_text_pane_t1_ParamLimits

0x0b35,	// (0x0000a1f5) list_tmo_note_info_text_pane_t1

0x8ebd,	// (0x0001257d) aid_size_touch_scroll_bar_cp01_ParamLimits

0x8ebd,	// (0x0001257d) aid_size_touch_scroll_bar_cp01

0x8d4e,	// (0x0001240e) aid_size_touch_slider_marker

0x5d3f,	// (0x0000f3ff) popup_settings_window_ParamLimits

0x5d3f,	// (0x0000f3ff) popup_settings_window

0x9e37,	// (0x000134f7) popup_candi_list_indi_window

0x9e87,	// (0x00013547) aid_touch_navi_pane_ParamLimits

0x73f0,	// (0x00010ab0) rs_clock_indi_pane

0x73f9,	// (0x00010ab9) sctrl_sk_bottom_pane_ParamLimits

0x740a,	// (0x00010aca) sctrl_sk_top_pane_ParamLimits

0x750d,	// (0x00010bcd) popup_fep_tooltip_window

0x037f,	// (0x00009a3f) aid_size_cell_widget_grid_ParamLimits

0x03ec,	// (0x00009aac) cell_ai5_widget_pane_g1_ParamLimits

0x03ec,	// (0x00009aac) cell_ai5_widget_pane_g1

0x0440,	// (0x00009b00) cell_ai5_widget_pane_g6_ParamLimits

0x044c,	// (0x00009b0c) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe4c,	// (0x0001950c) cell_ai5_widget_pane_g_ParamLimits

0xfe4c,	// (0x0001950c) cell_ai5_widget_pane_g

0x057e,	// (0x00009c3e) cell_ai5_widget_pane_t10_ParamLimits

0x057e,	// (0x00009c3e) cell_ai5_widget_pane_t10

0x059c,	// (0x00009c5c) grid_ai5_widget_pane_ParamLimits

0x063a,	// (0x00009cfa) cell_contacts_ai5_widget_pane_ParamLimits

0x063a,	// (0x00009cfa) cell_contacts_ai5_widget_pane

0x0824,	// (0x00009ee4) popup_discreet_window_t3_ParamLimits

0x0824,	// (0x00009ee4) popup_discreet_window_t3

0x7cb7,	// (0x00011377) popup_fshwr2_char_preview_window_ParamLimits

0x7cb7,	// (0x00011377) popup_fshwr2_char_preview_window

0x0a98,	// (0x0000a158) tmo_note_info_pane_t1

0x0aad,	// (0x0000a16d) tmo_note_info_pane_t2

0x0ac4,	// (0x0000a184) tmo_note_info_pane_t3

0x0ad9,	// (0x0000a199) tmo_note_info_pane_t4

0x0aeb,	// (0x0000a1ab) tmo_note_info_pane_t5

0x0004,

0xfed3,	// (0x00019593) tmo_note_info_pane_t

0x0afd,	// (0x0000a1bd) list_tmo_link_pane_ParamLimits

0x0b0a,	// (0x0000a1ca) scroll_pane_cp20_ParamLimits

0x7df3,	// (0x000114b3) bg_popup_fep_char_preview_window_cp01

0x0b4e,	// (0x0000a20e) popup_fshwr2_char_preview_window_t1

0x0b5c,	// (0x0000a21c) popup_candi_list_indi_window_g1

0x0b65,	// (0x0000a225) bg_cell_contacts_ai5_widget_pane

0x0b71,	// (0x0000a231) cell_contacts_ai5_widget_pane_g1

0x0b84,	// (0x0000a244) cell_contacts_ai5_widget_pane_g2

0x0b90,	// (0x0000a250) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfede,	// (0x0001959e) cell_contacts_ai5_widget_pane_g

0x0ba2,	// (0x0000a262) cell_contacts_ai5_widget_pane_t1

0x8ca3,	// (0x00012363) highlight_cell_shortcut_ai5_widget_pane_cp01

0x0c1c,	// (0x0000a2dc) settings_container_pane

0x9ad9,	// (0x00013199) listscroll_set_pane_copy1

0xc291,	// (0x00015951) scroll_pane_cp121_copy1

0x0c28,	// (0x0000a2e8) set_content_pane_copy1

0x0c30,	// (0x0000a2f0) aid_height_set_list_copy1_ParamLimits

0x0c30,	// (0x0000a2f0) aid_height_set_list_copy1

0xb81e,	// (0x00014ede) aid_size_parent_copy1_ParamLimits

0xb81e,	// (0x00014ede) aid_size_parent_copy1

0x0c3c,	// (0x0000a2fc) button_value_adjust_pane_cp6_copy1_ParamLimits

0x0c3c,	// (0x0000a2fc) button_value_adjust_pane_cp6_copy1

0x9e1d,	// (0x000134dd) list_highlight_pane_cp2_copy1_ParamLimits

0x9e1d,	// (0x000134dd) list_highlight_pane_cp2_copy1

0x0c50,	// (0x0000a310) list_set_pane_copy1_ParamLimits

0x0c50,	// (0x0000a310) list_set_pane_copy1

0x0bb7,	// (0x0000a277) main_pane_set_t1_copy1_ParamLimits

0x0bb7,	// (0x0000a277) main_pane_set_t1_copy1

0x0bf1,	// (0x0000a2b1) main_pane_set_t2_copy1_ParamLimits

0x0bf1,	// (0x0000a2b1) main_pane_set_t2_copy1

0x0cfd,	// (0x0000a3bd) main_pane_set_t3_copy1

0x0d0b,	// (0x0000a3cb) main_pane_set_t4_copy1

0x0c10,	// (0x0000a2d0) set_content_pane_g1_copy1_ParamLimits

0x0c10,	// (0x0000a2d0) set_content_pane_g1_copy1

0x0d19,	// (0x0000a3d9) setting_code_pane_copy1

0x0d21,	// (0x0000a3e1) setting_slider_graphic_pane_copy1

0x0d21,	// (0x0000a3e1) setting_slider_pane_copy1

0x0d21,	// (0x0000a3e1) setting_text_pane_copy1

0x0d21,	// (0x0000a3e1) setting_volume_pane_copy1

0x0d19,	// (0x0000a3d9) settings_code_pane_cp2_copy1

0x0d29,	// (0x0000a3e9) settings_code_pane_cp_copy1_ParamLimits

0x0d29,	// (0x0000a3e9) settings_code_pane_cp_copy1

0x7ccb,	// (0x0001138b) volume_set_pane_copy1

0x0d45,	// (0x0000a405) volume_set_pane_g10_copy1

0x0d4d,	// (0x0000a40d) volume_set_pane_g1_copy1

0x0d55,	// (0x0000a415) volume_set_pane_g2_copy1

0x0d5d,	// (0x0000a41d) volume_set_pane_g3_copy1

0x0d65,	// (0x0000a425) volume_set_pane_g4_copy1

0x0d6d,	// (0x0000a42d) volume_set_pane_g5_copy1

0x0d75,	// (0x0000a435) volume_set_pane_g6_copy1

0x0d7d,	// (0x0000a43d) volume_set_pane_g7_copy1

0x0d85,	// (0x0000a445) volume_set_pane_g8_copy1

0x0d8d,	// (0x0000a44d) volume_set_pane_g9_copy1

0x7ee7,	// (0x000115a7) bg_set_opt_pane_cp_copy1_ParamLimits

0x7ee7,	// (0x000115a7) bg_set_opt_pane_cp_copy1

0x7cd3,	// (0x00011393) setting_slider_pane_t1_copy1_ParamLimits

0x7cd3,	// (0x00011393) setting_slider_pane_t1_copy1

0x7cf1,	// (0x000113b1) setting_slider_pane_t2_copy1_ParamLimits

0x7cf1,	// (0x000113b1) setting_slider_pane_t2_copy1

0x7d0b,	// (0x000113cb) setting_slider_pane_t3_copy1_ParamLimits

0x7d0b,	// (0x000113cb) setting_slider_pane_t3_copy1

0x7d23,	// (0x000113e3) slider_set_pane_copy1_ParamLimits

0x7d23,	// (0x000113e3) slider_set_pane_copy1

0x8dd0,	// (0x00012490) set_opt_bg_pane_g1_copy2

0x8dd8,	// (0x00012498) set_opt_bg_pane_g2_copy2

0x0dfb,	// (0x0000a4bb) set_opt_bg_pane_g3_copy2

0x8de8,	// (0x000124a8) set_opt_bg_pane_g4_copy2

0x8df0,	// (0x000124b0) set_opt_bg_pane_g5_copy2

0x8df8,	// (0x000124b8) set_opt_bg_pane_g6_copy2

0x0e05,	// (0x0000a4c5) set_opt_bg_pane_g7_copy2

0x0e0d,	// (0x0000a4cd) set_opt_bg_pane_g8_copy2

0x0e17,	// (0x0000a4d7) set_opt_bg_pane_g9_copy2

0x0e21,	// (0x0000a4e1) aid_size_touch_slider_mark_copy1_ParamLimits

0x0e21,	// (0x0000a4e1) aid_size_touch_slider_mark_copy1

0x0e35,	// (0x0000a4f5) slider_set_pane_g1_copy1

0x0e3e,	// (0x0000a4fe) slider_set_pane_g2_copy1

0xbc7a,	// (0x0001533a) slider_set_pane_g3_copy1_ParamLimits

0xbc7a,	// (0x0001533a) slider_set_pane_g3_copy1

0xbc8e,	// (0x0001534e) slider_set_pane_g4_copy1_ParamLimits

0xbc8e,	// (0x0001534e) slider_set_pane_g4_copy1

0xbca6,	// (0x00015366) slider_set_pane_g5_copy1_ParamLimits

0xbca6,	// (0x00015366) slider_set_pane_g5_copy1

0xbc7a,	// (0x0001533a) slider_set_pane_g6_copy1_ParamLimits

0xbc7a,	// (0x0001533a) slider_set_pane_g6_copy1

0x0e46,	// (0x0000a506) slider_set_pane_g7_copy1_ParamLimits

0x0e46,	// (0x0000a506) slider_set_pane_g7_copy1

0x7e07,	// (0x000114c7) bg_set_opt_pane_cp2_copy1

0x0e5c,	// (0x0000a51c) setting_slider_graphic_pane_g1_copy1

0x0e75,	// (0x0000a535) setting_slider_graphic_pane_t1_copy1

0x0e65,	// (0x0000a525) setting_slider_graphic_pane_t2_copy1

0x0e85,	// (0x0000a545) slider_set_pane_cp_copy1

0x0e95,	// (0x0000a555) input_focus_pane_cp1_copy1

0x0e9e,	// (0x0000a55e) list_set_text_pane_copy1

0x0ea6,	// (0x0000a566) setting_text_pane_g1_copy1

0x0eaf,	// (0x0000a56f) set_text_pane_t1_copy1

0x0e95,	// (0x0000a555) input_focus_pane_cp2_copy1

0x0ea6,	// (0x0000a566) setting_code_pane_g1_copy1

0x0eca,	// (0x0000a58a) setting_code_pane_t1_copy1

0xc0c6,	// (0x00015786) list_set_graphic_pane_copy1

0x7e07,	// (0x000114c7) bg_set_opt_pane_cp4_copy1

0x97ef,	// (0x00012eaf) list_set_graphic_pane_g1_copy1_ParamLimits

0x97ef,	// (0x00012eaf) list_set_graphic_pane_g1_copy1

0x0ed8,	// (0x0000a598) list_set_graphic_pane_g2_copy1

0x9807,	// (0x00012ec7) list_set_graphic_pane_t1_copy1_ParamLimits

0x9807,	// (0x00012ec7) list_set_graphic_pane_t1_copy1

0xce36,	// (0x000164f6) rs_clock_indi_pane_g1

0x0ee0,	// (0x0000a5a0) rs_clock_indi_pane_t1

0x0eee,	// (0x0000a5ae) rs_indi_pane

0x0ef6,	// (0x0000a5b6) rs_indi_pane_g1

0x0eff,	// (0x0000a5bf) rs_indi_pane_g2

0x0f08,	// (0x0000a5c8) rs_indi_pane_g3

0x0002,

0xfee5,	// (0x000195a5) rs_indi_pane_g

0x9ad9,	// (0x00013199) bg_popup_preview_window_pane_cp03

0x0f11,	// (0x0000a5d1) popup_fep_tooltip_window_t1

0xdcc2,	// (0x00017382) popup_note2_window_g2_ParamLimits

0xdcc2,	// (0x00017382) popup_note2_window_g2

0x0001,

0xfc7e,	// (0x0001933e) popup_note2_window_g_ParamLimits

0xfc7e,	// (0x0001933e) popup_note2_window_g

0xe2a6,	// (0x00017966) bg_popup_sub_pane_cp11_ParamLimits

0xe2b3,	// (0x00017973) cell_ai3_links_pane_g1_ParamLimits

0xe2ca,	// (0x0001798a) cell_ai3_links_pane_t1

0x0eaf,	// (0x0000a56f) set_text_pane_t1_copy1_ParamLimits

0x99f6,	// (0x000130b6) cell_graphic_popup_pane_cp2_ParamLimits

0x99f6,	// (0x000130b6) cell_graphic_popup_pane_cp2

0x0f1f,	// (0x0000a5df) cell_graphic_popup_pane_g1_cp2

0x84a3,	// (0x00011b63) cell_graphic_popup_pane_g2_cp2

0x0f27,	// (0x0000a5e7) cell_graphic_popup_pane_g3_cp2

0x0f2f,	// (0x0000a5ef) cell_graphic_popup_pane_t2_cp2

0x84b4,	// (0x00011b74) grid_highlight_pane_cp3_cp2

0x919e,	// (0x0001285e) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x8ca3,	// (0x00012363) main_tmo_pane_ParamLimits

0xe668,	// (0x00017d28) popup_tmo_big_image_note_window

0x03db,	// (0x00009a9b) cell_ai5_widget_list_pane

0x03e3,	// (0x00009aa3) cell_ai5_widget_lrg_icon_pane

0x0a98,	// (0x0000a158) tmo_note_info_pane_t1_ParamLimits

0x0aad,	// (0x0000a16d) tmo_note_info_pane_t2_ParamLimits

0x0ac4,	// (0x0000a184) tmo_note_info_pane_t3_ParamLimits

0x0ad9,	// (0x0000a199) tmo_note_info_pane_t4_ParamLimits

0x0aeb,	// (0x0000a1ab) tmo_note_info_pane_t5_ParamLimits

0xfed3,	// (0x00019593) tmo_note_info_pane_t_ParamLimits

0x0c1c,	// (0x0000a2dc) settings_container_pane_ParamLimits

0x0e8d,	// (0x0000a54d) indicator_popup_pane_cp5

0x0e8d,	// (0x0000a54d) indicator_popup_pane_cp6

0xc0c6,	// (0x00015786) list_set_graphic_pane_copy1_ParamLimits

0x7df3,	// (0x000114b3) bg_popup_window_pane_cp23

0x0f3d,	// (0x0000a5fd) popup_tmo_big_image_note_window_g1

0x0f46,	// (0x0000a606) popup_tmo_big_image_note_window_t1

0x0f56,	// (0x0000a616) popup_tmo_big_image_note_window_t2

0x0f66,	// (0x0000a626) popup_tmo_big_image_note_window_t3

0x0002,

0xfeec,	// (0x000195ac) popup_tmo_big_image_note_window_t

0xce36,	// (0x000164f6) cell_ai5_widget_lrg_icon_pane_g1

0x0f76,	// (0x0000a636) cell_ai5_widget_lrg_icon_pane_t1

0x0f84,	// (0x0000a644) cell_ai5_widget_list_row_pane_ParamLimits

0x0f84,	// (0x0000a644) cell_ai5_widget_list_row_pane

0x0f9d,	// (0x0000a65d) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x0f9d,	// (0x0000a65d) cell_ai5_widget_list_row_pane_g1

0x0faa,	// (0x0000a66a) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x0faa,	// (0x0000a66a) cell_ai5_widget_list_row_pane_t1

0x0fd8,	// (0x0000a698) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x0fd8,	// (0x0000a698) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfef3,	// (0x000195b3) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfef3,	// (0x000195b3) cell_ai5_widget_list_row_pane_t

0x5c04,	// (0x0000f2c4) main_fep_vtchi_ss_pane

0x7d48,	// (0x00011408) popup_fep_char_pre_window

0x7d50,	// (0x00011410) popup_fep_ituss_window

0x7d71,	// (0x00011431) popup_fep_vkbss_window

0x1057,	// (0x0000a717) grid_vkbss_keypad_pane_ParamLimits

0x1057,	// (0x0000a717) grid_vkbss_keypad_pane

0x1067,	// (0x0000a727) ituss_keypad_pane

0x7d9c,	// (0x0001145c) aid_vkbss_key_offset_ParamLimits

0x7d9c,	// (0x0001145c) aid_vkbss_key_offset

0x7da8,	// (0x00011468) cell_vkbss_key_pane_ParamLimits

0x7da8,	// (0x00011468) cell_vkbss_key_pane

0xa18c,	// (0x0001384c) bg_cell_vkbss_key_g1_ParamLimits

0xa18c,	// (0x0001384c) bg_cell_vkbss_key_g1

0x10a5,	// (0x0000a765) cell_vkbss_key_3p_pane_ParamLimits

0x10a5,	// (0x0000a765) cell_vkbss_key_3p_pane

0x10bf,	// (0x0000a77f) cell_vkbss_key_g1_ParamLimits

0x10bf,	// (0x0000a77f) cell_vkbss_key_g1

0x10d9,	// (0x0000a799) cell_vkbss_key_t1_ParamLimits

0x10d9,	// (0x0000a799) cell_vkbss_key_t1

0x7dbe,	// (0x0001147e) cell_ituss_key_pane_ParamLimits

0x7dbe,	// (0x0001147e) cell_ituss_key_pane

0x1115,	// (0x0000a7d5) bg_cell_ituss_key_g1_ParamLimits

0x1115,	// (0x0000a7d5) bg_cell_ituss_key_g1

0x1121,	// (0x0000a7e1) cell_ituss_key_pane_g1_ParamLimits

0x1121,	// (0x0000a7e1) cell_ituss_key_pane_g1

0x1135,	// (0x0000a7f5) cell_ituss_key_pane_g2_ParamLimits

0x1135,	// (0x0000a7f5) cell_ituss_key_pane_g2

0x0001,

0xfefa,	// (0x000195ba) cell_ituss_key_pane_g_ParamLimits

0xfefa,	// (0x000195ba) cell_ituss_key_pane_g

0x1163,	// (0x0000a823) cell_ituss_key_t1_ParamLimits

0x1163,	// (0x0000a823) cell_ituss_key_t1

0x119d,	// (0x0000a85d) cell_ituss_key_t2_ParamLimits

0x119d,	// (0x0000a85d) cell_ituss_key_t2

0x11ce,	// (0x0000a88e) cell_ituss_key_t3_ParamLimits

0x11ce,	// (0x0000a88e) cell_ituss_key_t3

0x1208,	// (0x0000a8c8) cell_ituss_key_t4_ParamLimits

0x1208,	// (0x0000a8c8) cell_ituss_key_t4

0x0003,

0xfeff,	// (0x000195bf) cell_ituss_key_t_ParamLimits

0xfeff,	// (0x000195bf) cell_ituss_key_t

0x1252,	// (0x0000a912) cell_vkbss_key_3p_pane_g1

0x124a,	// (0x0000a90a) cell_vkbss_key_3p_pane_g2

0x1242,	// (0x0000a902) cell_vkbss_key_3p_pane_g3

0x0002,

0xff08,	// (0x000195c8) cell_vkbss_key_3p_pane_g

0x7df3,	// (0x000114b3) bg_popup_fep_char_preview_window_cp02

0x125a,	// (0x0000a91a) popup_fep_char_pre_window_t1

0x0375,	// (0x00009a35) main_ai5_sk_pane

0x0b65,	// (0x0000a225) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x0b71,	// (0x0000a231) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x0b84,	// (0x0000a244) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x0b90,	// (0x0000a250) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfede,	// (0x0001959e) cell_contacts_ai5_widget_pane_g_ParamLimits

0x0ba2,	// (0x0000a262) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x8ca3,	// (0x00012363) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0x1269,	// (0x0000a929) main_ai5_sk_pane_g1

0xa8f2,	// (0x00013fb2) popup_query_code_window_g1

0x7d66,	// (0x00011426) popup_fep_vkb_icf_pane

0x7d7a,	// (0x0001143a) popup_fep_vtchi_icf_pane

0x8ca3,	// (0x00012363) bg_icf_pane

0x1272,	// (0x0000a932) list_vkb_icf_pane

0x8ca3,	// (0x00012363) bg_icf_pane_cp01

0x127e,	// (0x0000a93e) vtchi_icf_list_pane

0x128f,	// (0x0000a94f) list_vkb_icf_pane_t1_ParamLimits

0x128f,	// (0x0000a94f) list_vkb_icf_pane_t1

0x12a7,	// (0x0000a967) vtchi_icf_list_pane_t1_ParamLimits

0x12a7,	// (0x0000a967) vtchi_icf_list_pane_t1

0x7d50,	// (0x00011410) popup_fep_ituss_window_ParamLimits

0x7d7a,	// (0x0001143a) popup_fep_vtchi_icf_pane_ParamLimits

0x1067,	// (0x0000a727) ituss_keypad_pane_ParamLimits

0x7d90,	// (0x00011450) ituss_sks_pane

0x8ca3,	// (0x00012363) bg_icf_pane_ParamLimits

0x7d39,	// (0x000113f9) icf_edit_indi_pane_ParamLimits

0x7d39,	// (0x000113f9) icf_edit_indi_pane

0x1272,	// (0x0000a932) list_vkb_icf_pane_ParamLimits

0x8ca3,	// (0x00012363) bg_icf_pane_cp01_ParamLimits

0x7d39,	// (0x000113f9) icf_edit_indi_pane_cp01_ParamLimits

0x7d39,	// (0x000113f9) icf_edit_indi_pane_cp01

0x1286,	// (0x0000a946) vtchi_query_pane

0xd0a4,	// (0x00016764) icf_edit_indi_pane_g1_ParamLimits

0xd0a4,	// (0x00016764) icf_edit_indi_pane_g1

0x1333,	// (0x0000a9f3) icf_edit_indi_pane_g2_ParamLimits

0x1333,	// (0x0000a9f3) icf_edit_indi_pane_g2

0x0001,

0xff20,	// (0x000195e0) icf_edit_indi_pane_g_ParamLimits

0xff20,	// (0x000195e0) icf_edit_indi_pane_g

0x1342,	// (0x0000aa02) icf_edit_indi_pane_t1

0x12c9,	// (0x0000a989) bg_input_focus_pane_cp042

0x8687,	// (0x00011d47) vtchi_button_pane

0x12d2,	// (0x0000a992) vtchi_query_pane_t1

0x12e0,	// (0x0000a9a0) vtchi_query_pane_t2

0x12ee,	// (0x0000a9ae) vtchi_query_pane_t3

0x0002,

0xff0f,	// (0x000195cf) vtchi_query_pane_t

0x7df3,	// (0x000114b3) bg_button_pane_cp13

0x12fc,	// (0x0000a9bc) vtchi_button_pane_g1

0x1304,	// (0x0000a9c4) ituss_sks_pane_g1

0x130f,	// (0x0000a9cf) ituss_sks_pane_g2

0x0001,

0xff16,	// (0x000195d6) ituss_sks_pane_g

0x1317,	// (0x0000a9d7) ituss_sks_pane_t1

0x1325,	// (0x0000a9e5) ituss_sks_pane_t2

0x0001,

0xff1b,	// (0x000195db) ituss_sks_pane_t

0xc836,	// (0x00015ef6) indicator_nsta_pane_cp_g1

0xc83f,	// (0x00015eff) indicator_nsta_pane_cp_g2

0xc847,	// (0x00015f07) indicator_nsta_pane_cp_g3

0xc84f,	// (0x00015f0f) indicator_nsta_pane_cp_g4

0xc857,	// (0x00015f17) indicator_nsta_pane_cp_g5

0xc857,	// (0x00015f17) indicator_nsta_pane_cp_g6

0x0005,

0xfabc,	// (0x0001917c) indicator_nsta_pane_cp_g

0xf346,	// (0x00018a06) cell_graphic2_pane_t2_ParamLimits

0xf346,	// (0x00018a06) cell_graphic2_pane_t2

0x0001,

0xfdd5,	// (0x00019495) cell_graphic2_pane_t_ParamLimits

0xfdd5,	// (0x00019495) cell_graphic2_pane_t

0xf373,	// (0x00018a33) cell_graphic2_control_pane_t1

0x9511,	// (0x00012bd1) signal_pane_g3_ParamLimits

0x9511,	// (0x00012bd1) signal_pane_g3

0x9523,	// (0x00012be3) signal_pane_g4_ParamLimits

0x9523,	// (0x00012be3) signal_pane_g4

0x0fea,	// (0x0000a6aa) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x0fea,	// (0x0000a6aa) cell_ai5_widget_list_row_pane_t3

0x1151,	// (0x0000a811) cell_ituss_key_pane_t1_ParamLimits

0x1151,	// (0x0000a811) cell_ituss_key_pane_t1

0xa4eb,	// (0x00013bab) form_field_data_wide_pane_vc_t2_ParamLimits

0xa4eb,	// (0x00013bab) form_field_data_wide_pane_vc_t2

0xa4ff,	// (0x00013bbf) form_field_data_wide_pane_vc_t3_ParamLimits

0xa4ff,	// (0x00013bbf) form_field_data_wide_pane_vc_t3

0x0002,

0xf805,	// (0x00018ec5) form_field_data_wide_pane_vc_t_ParamLimits

0xf805,	// (0x00018ec5) form_field_data_wide_pane_vc_t

0xc4f2,	// (0x00015bb2) form_field_slider_wide_pane_vc_t3_ParamLimits

0xc4f2,	// (0x00015bb2) form_field_slider_wide_pane_vc_t3

0xc5cc,	// (0x00015c8c) form_field_popup_wide_pane_vc_t2_ParamLimits

0xc5cc,	// (0x00015c8c) form_field_popup_wide_pane_vc_t2

0xc5e3,	// (0x00015ca3) form_field_popup_wide_pane_vc_t3_ParamLimits

0xc5e3,	// (0x00015ca3) form_field_popup_wide_pane_vc_t3

0x0002,

0xfaab,	// (0x0001916b) form_field_popup_wide_pane_vc_t_ParamLimits

0xfaab,	// (0x0001916b) form_field_popup_wide_pane_vc_t

0x7c4a,	// (0x0001130a) aid_fshwr2_btn_pane_ParamLimits

0x7c56,	// (0x00011316) aid_fshwr2_syb_pane_ParamLimits

0x7c67,	// (0x00011327) aid_fshwr2_txt_pane_ParamLimits

0x7495,	// (0x00010b55) fshwr2_bg_pane_ParamLimits

0x7c73,	// (0x00011333) fshwr2_func_candi_pane_ParamLimits

0x7c8b,	// (0x0001134b) fshwr2_hwr_syb_pane_ParamLimits

0x7ca2,	// (0x00011362) fshwr2_icf_pane_ParamLimits
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

} // end of namespace AknLayoutScalable_Abrw_pnp4_av_nhd4_prt_tch_Normal
